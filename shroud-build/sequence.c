// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _22reverse(object _target_6040, object _pFrom_6041, object _pTo_6042)
{
    object _uppr_6043 = NOVALUE;
    object _n_6044 = NOVALUE;
    object _lLimit_6045 = NOVALUE;
    object _t_6046 = NOVALUE;
    object _3112 = NOVALUE;
    object _3111 = NOVALUE;
    object _3110 = NOVALUE;
    object _3108 = NOVALUE;
    object _3107 = NOVALUE;
    object _3105 = NOVALUE;
    object _3103 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:549		n = length(target)*/
    if (IS_SEQUENCE(_target_6040)){
            _n_6044 = SEQ_PTR(_target_6040)->length;
    }
    else {
        _n_6044 = 1;
    }

    /** sequence.e:550		if n < 2 then*/
    if (_n_6044 >= 2)
    goto L1; // [12] 23

    /** sequence.e:551			return target*/
    DeRef(_t_6046);
    return _target_6040;
L1: 

    /** sequence.e:553		if pFrom < 1 then*/
    if (_pFrom_6041 >= 1)
    goto L2; // [25] 35

    /** sequence.e:554			pFrom = 1*/
    _pFrom_6041 = 1;
L2: 

    /** sequence.e:556		if pTo < 1 then*/
    if (_pTo_6042 >= 1)
    goto L3; // [37] 48

    /** sequence.e:557			pTo = n + pTo*/
    _pTo_6042 = _n_6044 + _pTo_6042;
L3: 

    /** sequence.e:559		if pTo < pFrom or pFrom >= n then*/
    _3103 = (_pTo_6042 < _pFrom_6041);
    if (_3103 != 0) {
        goto L4; // [54] 67
    }
    _3105 = (_pFrom_6041 >= _n_6044);
    if (_3105 == 0)
    {
        DeRef(_3105);
        _3105 = NOVALUE;
        goto L5; // [63] 74
    }
    else{
        DeRef(_3105);
        _3105 = NOVALUE;
    }
L4: 

    /** sequence.e:560			return target*/
    DeRef(_t_6046);
    DeRef(_3103);
    _3103 = NOVALUE;
    return _target_6040;
L5: 

    /** sequence.e:562		if pTo > n then*/
    if (_pTo_6042 <= _n_6044)
    goto L6; // [76] 86

    /** sequence.e:563			pTo = n*/
    _pTo_6042 = _n_6044;
L6: 

    /** sequence.e:566		lLimit = floor((pFrom+pTo-1)/2)*/
    _3107 = _pFrom_6041 + _pTo_6042;
    if ((object)((uintptr_t)_3107 + (uintptr_t)HIGH_BITS) >= 0){
        _3107 = NewDouble((eudouble)_3107);
    }
    if (IS_ATOM_INT(_3107)) {
        _3108 = _3107 - 1;
        if ((object)((uintptr_t)_3108 +(uintptr_t) HIGH_BITS) >= 0){
            _3108 = NewDouble((eudouble)_3108);
        }
    }
    else {
        _3108 = NewDouble(DBL_PTR(_3107)->dbl - (eudouble)1);
    }
    DeRef(_3107);
    _3107 = NOVALUE;
    if (IS_ATOM_INT(_3108)) {
        _lLimit_6045 = _3108 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _3108, 2);
        _lLimit_6045 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_3108);
    _3108 = NOVALUE;
    if (!IS_ATOM_INT(_lLimit_6045)) {
        _1 = (object)(DBL_PTR(_lLimit_6045)->dbl);
        DeRefDS(_lLimit_6045);
        _lLimit_6045 = _1;
    }

    /** sequence.e:567		t = target*/
    Ref(_target_6040);
    DeRef(_t_6046);
    _t_6046 = _target_6040;

    /** sequence.e:568		uppr = pTo*/
    _uppr_6043 = _pTo_6042;

    /** sequence.e:569		for lowr = pFrom to lLimit do*/
    _3110 = _lLimit_6045;
    {
        object _lowr_6065;
        _lowr_6065 = _pFrom_6041;
L7: 
        if (_lowr_6065 > _3110){
            goto L8; // [119] 159
        }

        /** sequence.e:570			t[uppr] = target[lowr]*/
        _2 = (object)SEQ_PTR(_target_6040);
        _3111 = (object)*(((s1_ptr)_2)->base + _lowr_6065);
        Ref(_3111);
        _2 = (object)SEQ_PTR(_t_6046);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_6046 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _uppr_6043);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3111;
        if( _1 != _3111 ){
            DeRef(_1);
        }
        _3111 = NOVALUE;

        /** sequence.e:571			t[lowr] = target[uppr]*/
        _2 = (object)SEQ_PTR(_target_6040);
        _3112 = (object)*(((s1_ptr)_2)->base + _uppr_6043);
        Ref(_3112);
        _2 = (object)SEQ_PTR(_t_6046);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_6046 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lowr_6065);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3112;
        if( _1 != _3112 ){
            DeRef(_1);
        }
        _3112 = NOVALUE;

        /** sequence.e:572			uppr -= 1*/
        _uppr_6043 = _uppr_6043 - 1;

        /** sequence.e:573		end for*/
        _lowr_6065 = _lowr_6065 + 1;
        goto L7; // [154] 126
L8: 
        ;
    }

    /** sequence.e:574		return t*/
    DeRef(_target_6040);
    DeRef(_3103);
    _3103 = NOVALUE;
    return _t_6046;
    ;
}


object _22pad_tail(object _target_6141, object _size_6142, object _ch_6143)
{
    object _3149 = NOVALUE;
    object _3148 = NOVALUE;
    object _3147 = NOVALUE;
    object _3146 = NOVALUE;
    object _3144 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:1022		if size <= length(target) then*/
    if (IS_SEQUENCE(_target_6141)){
            _3144 = SEQ_PTR(_target_6141)->length;
    }
    else {
        _3144 = 1;
    }
    if (_size_6142 > _3144)
    goto L1; // [8] 19

    /** sequence.e:1023			return target*/
    return _target_6141;
L1: 

    /** sequence.e:1026		return target & repeat(ch, size - length(target))*/
    if (IS_SEQUENCE(_target_6141)){
            _3146 = SEQ_PTR(_target_6141)->length;
    }
    else {
        _3146 = 1;
    }
    _3147 = _size_6142 - _3146;
    _3146 = NOVALUE;
    _3148 = Repeat(_ch_6143, _3147);
    _3147 = NOVALUE;
    if (IS_SEQUENCE(_target_6141) && IS_ATOM(_3148)) {
    }
    else if (IS_ATOM(_target_6141) && IS_SEQUENCE(_3148)) {
        Ref(_target_6141);
        Prepend(&_3149, _3148, _target_6141);
    }
    else {
        Concat((object_ptr)&_3149, _target_6141, _3148);
    }
    DeRefDS(_3148);
    _3148 = NOVALUE;
    DeRef(_target_6141);
    return _3149;
    ;
}


object _22filter(object _source_6395, object _rid_6396, object _userdata_6397, object _rangetype_6398)
{
    object _dest_6399 = NOVALUE;
    object _idx_6400 = NOVALUE;
    object _3463 = NOVALUE;
    object _3462 = NOVALUE;
    object _3460 = NOVALUE;
    object _3459 = NOVALUE;
    object _3458 = NOVALUE;
    object _3457 = NOVALUE;
    object _3456 = NOVALUE;
    object _3453 = NOVALUE;
    object _3452 = NOVALUE;
    object _3451 = NOVALUE;
    object _3450 = NOVALUE;
    object _3447 = NOVALUE;
    object _3446 = NOVALUE;
    object _3445 = NOVALUE;
    object _3444 = NOVALUE;
    object _3443 = NOVALUE;
    object _3440 = NOVALUE;
    object _3439 = NOVALUE;
    object _3438 = NOVALUE;
    object _3437 = NOVALUE;
    object _3434 = NOVALUE;
    object _3433 = NOVALUE;
    object _3432 = NOVALUE;
    object _3431 = NOVALUE;
    object _3430 = NOVALUE;
    object _3427 = NOVALUE;
    object _3426 = NOVALUE;
    object _3425 = NOVALUE;
    object _3424 = NOVALUE;
    object _3421 = NOVALUE;
    object _3420 = NOVALUE;
    object _3419 = NOVALUE;
    object _3418 = NOVALUE;
    object _3417 = NOVALUE;
    object _3414 = NOVALUE;
    object _3413 = NOVALUE;
    object _3412 = NOVALUE;
    object _3411 = NOVALUE;
    object _3408 = NOVALUE;
    object _3407 = NOVALUE;
    object _3406 = NOVALUE;
    object _3405 = NOVALUE;
    object _3404 = NOVALUE;
    object _3401 = NOVALUE;
    object _3400 = NOVALUE;
    object _3399 = NOVALUE;
    object _3395 = NOVALUE;
    object _3392 = NOVALUE;
    object _3391 = NOVALUE;
    object _3390 = NOVALUE;
    object _3388 = NOVALUE;
    object _3387 = NOVALUE;
    object _3386 = NOVALUE;
    object _3385 = NOVALUE;
    object _3384 = NOVALUE;
    object _3381 = NOVALUE;
    object _3380 = NOVALUE;
    object _3379 = NOVALUE;
    object _3377 = NOVALUE;
    object _3376 = NOVALUE;
    object _3375 = NOVALUE;
    object _3374 = NOVALUE;
    object _3373 = NOVALUE;
    object _3370 = NOVALUE;
    object _3369 = NOVALUE;
    object _3368 = NOVALUE;
    object _3366 = NOVALUE;
    object _3365 = NOVALUE;
    object _3364 = NOVALUE;
    object _3363 = NOVALUE;
    object _3362 = NOVALUE;
    object _3359 = NOVALUE;
    object _3358 = NOVALUE;
    object _3357 = NOVALUE;
    object _3355 = NOVALUE;
    object _3354 = NOVALUE;
    object _3353 = NOVALUE;
    object _3352 = NOVALUE;
    object _3351 = NOVALUE;
    object _3349 = NOVALUE;
    object _3348 = NOVALUE;
    object _3347 = NOVALUE;
    object _3343 = NOVALUE;
    object _3340 = NOVALUE;
    object _3339 = NOVALUE;
    object _3338 = NOVALUE;
    object _3335 = NOVALUE;
    object _3332 = NOVALUE;
    object _3331 = NOVALUE;
    object _3330 = NOVALUE;
    object _3327 = NOVALUE;
    object _3324 = NOVALUE;
    object _3323 = NOVALUE;
    object _3322 = NOVALUE;
    object _3319 = NOVALUE;
    object _3316 = NOVALUE;
    object _3315 = NOVALUE;
    object _3314 = NOVALUE;
    object _3310 = NOVALUE;
    object _3307 = NOVALUE;
    object _3306 = NOVALUE;
    object _3305 = NOVALUE;
    object _3302 = NOVALUE;
    object _3299 = NOVALUE;
    object _3298 = NOVALUE;
    object _3297 = NOVALUE;
    object _3291 = NOVALUE;
    object _3289 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:1731		if length(source) = 0 then*/
    if (IS_SEQUENCE(_source_6395)){
            _3289 = SEQ_PTR(_source_6395)->length;
    }
    else {
        _3289 = 1;
    }
    if (_3289 != 0)
    goto L1; // [8] 19

    /** sequence.e:1732			return source*/
    DeRefDS(_userdata_6397);
    DeRefDS(_rangetype_6398);
    DeRef(_dest_6399);
    return _source_6395;
L1: 

    /** sequence.e:1734		dest = repeat(0, length(source))*/
    if (IS_SEQUENCE(_source_6395)){
            _3291 = SEQ_PTR(_source_6395)->length;
    }
    else {
        _3291 = 1;
    }
    DeRef(_dest_6399);
    _dest_6399 = Repeat(0, _3291);
    _3291 = NOVALUE;

    /** sequence.e:1735		idx = 0*/
    _idx_6400 = 0;

    /** sequence.e:1736		switch rid do*/
    _1 = find(_rid_6396, _3293);
    switch ( _1 ){ 

        /** sequence.e:1737			case "<", "lt" then*/
        case 1:
        case 2:

        /** sequence.e:1738				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3297 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3297 = 1;
        }
        {
            object _a_6412;
            _a_6412 = 1;
L2: 
            if (_a_6412 > _3297){
                goto L3; // [51] 96
            }

            /** sequence.e:1739					if compare(source[a], userdata) < 0 then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3298 = (object)*(((s1_ptr)_2)->base + _a_6412);
            if (IS_ATOM_INT(_3298) && IS_ATOM_INT(_userdata_6397)){
                _3299 = (_3298 < _userdata_6397) ? -1 : (_3298 > _userdata_6397);
            }
            else{
                _3299 = compare(_3298, _userdata_6397);
            }
            _3298 = NOVALUE;
            if (_3299 >= 0)
            goto L4; // [68] 89

            /** sequence.e:1740						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1741						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3302 = (object)*(((s1_ptr)_2)->base + _a_6412);
            Ref(_3302);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3302;
            if( _1 != _3302 ){
                DeRef(_1);
            }
            _3302 = NOVALUE;
L4: 

            /** sequence.e:1743				end for*/
            _a_6412 = _a_6412 + 1;
            goto L2; // [91] 58
L3: 
            ;
        }
        goto L5; // [96] 1304

        /** sequence.e:1745			case "<=", "le" then*/
        case 3:
        case 4:

        /** sequence.e:1746				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3305 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3305 = 1;
        }
        {
            object _a_6424;
            _a_6424 = 1;
L6: 
            if (_a_6424 > _3305){
                goto L7; // [109] 154
            }

            /** sequence.e:1747					if compare(source[a], userdata) <= 0 then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3306 = (object)*(((s1_ptr)_2)->base + _a_6424);
            if (IS_ATOM_INT(_3306) && IS_ATOM_INT(_userdata_6397)){
                _3307 = (_3306 < _userdata_6397) ? -1 : (_3306 > _userdata_6397);
            }
            else{
                _3307 = compare(_3306, _userdata_6397);
            }
            _3306 = NOVALUE;
            if (_3307 > 0)
            goto L8; // [126] 147

            /** sequence.e:1748						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1749						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3310 = (object)*(((s1_ptr)_2)->base + _a_6424);
            Ref(_3310);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3310;
            if( _1 != _3310 ){
                DeRef(_1);
            }
            _3310 = NOVALUE;
L8: 

            /** sequence.e:1751				end for*/
            _a_6424 = _a_6424 + 1;
            goto L6; // [149] 116
L7: 
            ;
        }
        goto L5; // [154] 1304

        /** sequence.e:1753			case "=", "==", "eq" then*/
        case 5:
        case 6:
        case 7:

        /** sequence.e:1754				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3314 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3314 = 1;
        }
        {
            object _a_6437;
            _a_6437 = 1;
L9: 
            if (_a_6437 > _3314){
                goto LA; // [169] 214
            }

            /** sequence.e:1755					if compare(source[a], userdata) = 0 then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3315 = (object)*(((s1_ptr)_2)->base + _a_6437);
            if (IS_ATOM_INT(_3315) && IS_ATOM_INT(_userdata_6397)){
                _3316 = (_3315 < _userdata_6397) ? -1 : (_3315 > _userdata_6397);
            }
            else{
                _3316 = compare(_3315, _userdata_6397);
            }
            _3315 = NOVALUE;
            if (_3316 != 0)
            goto LB; // [186] 207

            /** sequence.e:1756						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1757						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3319 = (object)*(((s1_ptr)_2)->base + _a_6437);
            Ref(_3319);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3319;
            if( _1 != _3319 ){
                DeRef(_1);
            }
            _3319 = NOVALUE;
LB: 

            /** sequence.e:1759				end for*/
            _a_6437 = _a_6437 + 1;
            goto L9; // [209] 176
LA: 
            ;
        }
        goto L5; // [214] 1304

        /** sequence.e:1761			case "!=", "ne" then*/
        case 8:
        case 9:

        /** sequence.e:1762				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3322 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3322 = 1;
        }
        {
            object _a_6449;
            _a_6449 = 1;
LC: 
            if (_a_6449 > _3322){
                goto LD; // [227] 272
            }

            /** sequence.e:1763					if compare(source[a], userdata) != 0 then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3323 = (object)*(((s1_ptr)_2)->base + _a_6449);
            if (IS_ATOM_INT(_3323) && IS_ATOM_INT(_userdata_6397)){
                _3324 = (_3323 < _userdata_6397) ? -1 : (_3323 > _userdata_6397);
            }
            else{
                _3324 = compare(_3323, _userdata_6397);
            }
            _3323 = NOVALUE;
            if (_3324 == 0)
            goto LE; // [244] 265

            /** sequence.e:1764						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1765						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3327 = (object)*(((s1_ptr)_2)->base + _a_6449);
            Ref(_3327);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3327;
            if( _1 != _3327 ){
                DeRef(_1);
            }
            _3327 = NOVALUE;
LE: 

            /** sequence.e:1767				end for*/
            _a_6449 = _a_6449 + 1;
            goto LC; // [267] 234
LD: 
            ;
        }
        goto L5; // [272] 1304

        /** sequence.e:1769			case ">", "gt" then*/
        case 10:
        case 11:

        /** sequence.e:1770				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3330 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3330 = 1;
        }
        {
            object _a_6461;
            _a_6461 = 1;
LF: 
            if (_a_6461 > _3330){
                goto L10; // [285] 330
            }

            /** sequence.e:1771					if compare(source[a], userdata) > 0 then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3331 = (object)*(((s1_ptr)_2)->base + _a_6461);
            if (IS_ATOM_INT(_3331) && IS_ATOM_INT(_userdata_6397)){
                _3332 = (_3331 < _userdata_6397) ? -1 : (_3331 > _userdata_6397);
            }
            else{
                _3332 = compare(_3331, _userdata_6397);
            }
            _3331 = NOVALUE;
            if (_3332 <= 0)
            goto L11; // [302] 323

            /** sequence.e:1772						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1773						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3335 = (object)*(((s1_ptr)_2)->base + _a_6461);
            Ref(_3335);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3335;
            if( _1 != _3335 ){
                DeRef(_1);
            }
            _3335 = NOVALUE;
L11: 

            /** sequence.e:1775				end for*/
            _a_6461 = _a_6461 + 1;
            goto LF; // [325] 292
L10: 
            ;
        }
        goto L5; // [330] 1304

        /** sequence.e:1777			case ">=", "ge" then*/
        case 12:
        case 13:

        /** sequence.e:1778				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3338 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3338 = 1;
        }
        {
            object _a_6473;
            _a_6473 = 1;
L12: 
            if (_a_6473 > _3338){
                goto L13; // [343] 388
            }

            /** sequence.e:1779					if compare(source[a], userdata) >= 0 then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3339 = (object)*(((s1_ptr)_2)->base + _a_6473);
            if (IS_ATOM_INT(_3339) && IS_ATOM_INT(_userdata_6397)){
                _3340 = (_3339 < _userdata_6397) ? -1 : (_3339 > _userdata_6397);
            }
            else{
                _3340 = compare(_3339, _userdata_6397);
            }
            _3339 = NOVALUE;
            if (_3340 < 0)
            goto L14; // [360] 381

            /** sequence.e:1780						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1781						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3343 = (object)*(((s1_ptr)_2)->base + _a_6473);
            Ref(_3343);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3343;
            if( _1 != _3343 ){
                DeRef(_1);
            }
            _3343 = NOVALUE;
L14: 

            /** sequence.e:1783				end for*/
            _a_6473 = _a_6473 + 1;
            goto L12; // [383] 350
L13: 
            ;
        }
        goto L5; // [388] 1304

        /** sequence.e:1785			case "in" then*/
        case 14:

        /** sequence.e:1786				switch rangetype do*/
        _1 = find(_rangetype_6398, _3345);
        switch ( _1 ){ 

            /** sequence.e:1787					case "" then*/
            case 1:

            /** sequence.e:1788						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3347 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3347 = 1;
            }
            {
                object _a_6487;
                _a_6487 = 1;
L15: 
                if (_a_6487 > _3347){
                    goto L16; // [410] 455
                }

                /** sequence.e:1789							if find(source[a], userdata)  then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3348 = (object)*(((s1_ptr)_2)->base + _a_6487);
                _3349 = find_from(_3348, _userdata_6397, 1);
                _3348 = NOVALUE;
                if (_3349 == 0)
                {
                    _3349 = NOVALUE;
                    goto L17; // [428] 448
                }
                else{
                    _3349 = NOVALUE;
                }

                /** sequence.e:1790								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1791								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3351 = (object)*(((s1_ptr)_2)->base + _a_6487);
                Ref(_3351);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3351;
                if( _1 != _3351 ){
                    DeRef(_1);
                }
                _3351 = NOVALUE;
L17: 

                /** sequence.e:1793						end for*/
                _a_6487 = _a_6487 + 1;
                goto L15; // [450] 417
L16: 
                ;
            }
            goto L5; // [455] 1304

            /** sequence.e:1795					case "[]" then*/
            case 2:

            /** sequence.e:1796						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3352 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3352 = 1;
            }
            {
                object _a_6496;
                _a_6496 = 1;
L18: 
                if (_a_6496 > _3352){
                    goto L19; // [466] 534
                }

                /** sequence.e:1797							if compare(source[a], userdata[1]) >= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3353 = (object)*(((s1_ptr)_2)->base + _a_6496);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3354 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3353) && IS_ATOM_INT(_3354)){
                    _3355 = (_3353 < _3354) ? -1 : (_3353 > _3354);
                }
                else{
                    _3355 = compare(_3353, _3354);
                }
                _3353 = NOVALUE;
                _3354 = NOVALUE;
                if (_3355 < 0)
                goto L1A; // [487] 527

                /** sequence.e:1798								if compare(source[a], userdata[2]) <= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3357 = (object)*(((s1_ptr)_2)->base + _a_6496);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3358 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3357) && IS_ATOM_INT(_3358)){
                    _3359 = (_3357 < _3358) ? -1 : (_3357 > _3358);
                }
                else{
                    _3359 = compare(_3357, _3358);
                }
                _3357 = NOVALUE;
                _3358 = NOVALUE;
                if (_3359 > 0)
                goto L1B; // [505] 526

                /** sequence.e:1799									idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1800									dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3362 = (object)*(((s1_ptr)_2)->base + _a_6496);
                Ref(_3362);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3362;
                if( _1 != _3362 ){
                    DeRef(_1);
                }
                _3362 = NOVALUE;
L1B: 
L1A: 

                /** sequence.e:1803						end for*/
                _a_6496 = _a_6496 + 1;
                goto L18; // [529] 473
L19: 
                ;
            }
            goto L5; // [534] 1304

            /** sequence.e:1805					case "[)" then*/
            case 3:

            /** sequence.e:1806						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3363 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3363 = 1;
            }
            {
                object _a_6512;
                _a_6512 = 1;
L1C: 
                if (_a_6512 > _3363){
                    goto L1D; // [545] 613
                }

                /** sequence.e:1807							if compare(source[a], userdata[1]) >= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3364 = (object)*(((s1_ptr)_2)->base + _a_6512);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3365 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3364) && IS_ATOM_INT(_3365)){
                    _3366 = (_3364 < _3365) ? -1 : (_3364 > _3365);
                }
                else{
                    _3366 = compare(_3364, _3365);
                }
                _3364 = NOVALUE;
                _3365 = NOVALUE;
                if (_3366 < 0)
                goto L1E; // [566] 606

                /** sequence.e:1808								if compare(source[a], userdata[2]) < 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3368 = (object)*(((s1_ptr)_2)->base + _a_6512);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3369 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3368) && IS_ATOM_INT(_3369)){
                    _3370 = (_3368 < _3369) ? -1 : (_3368 > _3369);
                }
                else{
                    _3370 = compare(_3368, _3369);
                }
                _3368 = NOVALUE;
                _3369 = NOVALUE;
                if (_3370 >= 0)
                goto L1F; // [584] 605

                /** sequence.e:1809									idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1810									dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3373 = (object)*(((s1_ptr)_2)->base + _a_6512);
                Ref(_3373);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3373;
                if( _1 != _3373 ){
                    DeRef(_1);
                }
                _3373 = NOVALUE;
L1F: 
L1E: 

                /** sequence.e:1813						end for*/
                _a_6512 = _a_6512 + 1;
                goto L1C; // [608] 552
L1D: 
                ;
            }
            goto L5; // [613] 1304

            /** sequence.e:1814					case "(]" then*/
            case 4:

            /** sequence.e:1815						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3374 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3374 = 1;
            }
            {
                object _a_6528;
                _a_6528 = 1;
L20: 
                if (_a_6528 > _3374){
                    goto L21; // [624] 692
                }

                /** sequence.e:1816							if compare(source[a], userdata[1]) > 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3375 = (object)*(((s1_ptr)_2)->base + _a_6528);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3376 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3375) && IS_ATOM_INT(_3376)){
                    _3377 = (_3375 < _3376) ? -1 : (_3375 > _3376);
                }
                else{
                    _3377 = compare(_3375, _3376);
                }
                _3375 = NOVALUE;
                _3376 = NOVALUE;
                if (_3377 <= 0)
                goto L22; // [645] 685

                /** sequence.e:1817								if compare(source[a], userdata[2]) <= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3379 = (object)*(((s1_ptr)_2)->base + _a_6528);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3380 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3379) && IS_ATOM_INT(_3380)){
                    _3381 = (_3379 < _3380) ? -1 : (_3379 > _3380);
                }
                else{
                    _3381 = compare(_3379, _3380);
                }
                _3379 = NOVALUE;
                _3380 = NOVALUE;
                if (_3381 > 0)
                goto L23; // [663] 684

                /** sequence.e:1818									idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1819									dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3384 = (object)*(((s1_ptr)_2)->base + _a_6528);
                Ref(_3384);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3384;
                if( _1 != _3384 ){
                    DeRef(_1);
                }
                _3384 = NOVALUE;
L23: 
L22: 

                /** sequence.e:1822						end for*/
                _a_6528 = _a_6528 + 1;
                goto L20; // [687] 631
L21: 
                ;
            }
            goto L5; // [692] 1304

            /** sequence.e:1823					case "()" then*/
            case 5:

            /** sequence.e:1824						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3385 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3385 = 1;
            }
            {
                object _a_6544;
                _a_6544 = 1;
L24: 
                if (_a_6544 > _3385){
                    goto L25; // [703] 771
                }

                /** sequence.e:1825							if compare(source[a], userdata[1]) > 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3386 = (object)*(((s1_ptr)_2)->base + _a_6544);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3387 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3386) && IS_ATOM_INT(_3387)){
                    _3388 = (_3386 < _3387) ? -1 : (_3386 > _3387);
                }
                else{
                    _3388 = compare(_3386, _3387);
                }
                _3386 = NOVALUE;
                _3387 = NOVALUE;
                if (_3388 <= 0)
                goto L26; // [724] 764

                /** sequence.e:1826								if compare(source[a], userdata[2]) < 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3390 = (object)*(((s1_ptr)_2)->base + _a_6544);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3391 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3390) && IS_ATOM_INT(_3391)){
                    _3392 = (_3390 < _3391) ? -1 : (_3390 > _3391);
                }
                else{
                    _3392 = compare(_3390, _3391);
                }
                _3390 = NOVALUE;
                _3391 = NOVALUE;
                if (_3392 >= 0)
                goto L27; // [742] 763

                /** sequence.e:1827									idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1828									dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3395 = (object)*(((s1_ptr)_2)->base + _a_6544);
                Ref(_3395);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3395;
                if( _1 != _3395 ){
                    DeRef(_1);
                }
                _3395 = NOVALUE;
L27: 
L26: 

                /** sequence.e:1831						end for*/
                _a_6544 = _a_6544 + 1;
                goto L24; // [766] 710
L25: 
                ;
            }
            goto L5; // [771] 1304

            /** sequence.e:1833					case else*/
            case 0:
        ;}        goto L5; // [778] 1304

        /** sequence.e:1838			case "out" then*/
        case 15:

        /** sequence.e:1839				switch rangetype do*/
        _1 = find(_rangetype_6398, _3397);
        switch ( _1 ){ 

            /** sequence.e:1840					case "" then*/
            case 1:

            /** sequence.e:1841						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3399 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3399 = 1;
            }
            {
                object _a_6565;
                _a_6565 = 1;
L28: 
                if (_a_6565 > _3399){
                    goto L29; // [800] 845
                }

                /** sequence.e:1842							if not find(source[a], userdata)  then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3400 = (object)*(((s1_ptr)_2)->base + _a_6565);
                _3401 = find_from(_3400, _userdata_6397, 1);
                _3400 = NOVALUE;
                if (_3401 != 0)
                goto L2A; // [818] 838
                _3401 = NOVALUE;

                /** sequence.e:1843								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1844								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3404 = (object)*(((s1_ptr)_2)->base + _a_6565);
                Ref(_3404);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3404;
                if( _1 != _3404 ){
                    DeRef(_1);
                }
                _3404 = NOVALUE;
L2A: 

                /** sequence.e:1846						end for*/
                _a_6565 = _a_6565 + 1;
                goto L28; // [840] 807
L29: 
                ;
            }
            goto L5; // [845] 1304

            /** sequence.e:1848					case "[]" then*/
            case 2:

            /** sequence.e:1849						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3405 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3405 = 1;
            }
            {
                object _a_6575;
                _a_6575 = 1;
L2B: 
                if (_a_6575 > _3405){
                    goto L2C; // [856] 943
                }

                /** sequence.e:1850							if compare(source[a], userdata[1]) < 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3406 = (object)*(((s1_ptr)_2)->base + _a_6575);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3407 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3406) && IS_ATOM_INT(_3407)){
                    _3408 = (_3406 < _3407) ? -1 : (_3406 > _3407);
                }
                else{
                    _3408 = compare(_3406, _3407);
                }
                _3406 = NOVALUE;
                _3407 = NOVALUE;
                if (_3408 >= 0)
                goto L2D; // [877] 900

                /** sequence.e:1851								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1852								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3411 = (object)*(((s1_ptr)_2)->base + _a_6575);
                Ref(_3411);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3411;
                if( _1 != _3411 ){
                    DeRef(_1);
                }
                _3411 = NOVALUE;
                goto L2E; // [897] 936
L2D: 

                /** sequence.e:1853							elsif compare(source[a], userdata[2]) > 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3412 = (object)*(((s1_ptr)_2)->base + _a_6575);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3413 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3412) && IS_ATOM_INT(_3413)){
                    _3414 = (_3412 < _3413) ? -1 : (_3412 > _3413);
                }
                else{
                    _3414 = compare(_3412, _3413);
                }
                _3412 = NOVALUE;
                _3413 = NOVALUE;
                if (_3414 <= 0)
                goto L2F; // [914] 935

                /** sequence.e:1854								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1855								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3417 = (object)*(((s1_ptr)_2)->base + _a_6575);
                Ref(_3417);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3417;
                if( _1 != _3417 ){
                    DeRef(_1);
                }
                _3417 = NOVALUE;
L2F: 
L2E: 

                /** sequence.e:1857						end for*/
                _a_6575 = _a_6575 + 1;
                goto L2B; // [938] 863
L2C: 
                ;
            }
            goto L5; // [943] 1304

            /** sequence.e:1859					case "[)" then*/
            case 3:

            /** sequence.e:1860						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3418 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3418 = 1;
            }
            {
                object _a_6593;
                _a_6593 = 1;
L30: 
                if (_a_6593 > _3418){
                    goto L31; // [954] 1041
                }

                /** sequence.e:1861							if compare(source[a], userdata[1]) < 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3419 = (object)*(((s1_ptr)_2)->base + _a_6593);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3420 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3419) && IS_ATOM_INT(_3420)){
                    _3421 = (_3419 < _3420) ? -1 : (_3419 > _3420);
                }
                else{
                    _3421 = compare(_3419, _3420);
                }
                _3419 = NOVALUE;
                _3420 = NOVALUE;
                if (_3421 >= 0)
                goto L32; // [975] 998

                /** sequence.e:1862								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1863								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3424 = (object)*(((s1_ptr)_2)->base + _a_6593);
                Ref(_3424);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3424;
                if( _1 != _3424 ){
                    DeRef(_1);
                }
                _3424 = NOVALUE;
                goto L33; // [995] 1034
L32: 

                /** sequence.e:1864							elsif compare(source[a], userdata[2]) >= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3425 = (object)*(((s1_ptr)_2)->base + _a_6593);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3426 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3425) && IS_ATOM_INT(_3426)){
                    _3427 = (_3425 < _3426) ? -1 : (_3425 > _3426);
                }
                else{
                    _3427 = compare(_3425, _3426);
                }
                _3425 = NOVALUE;
                _3426 = NOVALUE;
                if (_3427 < 0)
                goto L34; // [1012] 1033

                /** sequence.e:1865								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1866								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3430 = (object)*(((s1_ptr)_2)->base + _a_6593);
                Ref(_3430);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3430;
                if( _1 != _3430 ){
                    DeRef(_1);
                }
                _3430 = NOVALUE;
L34: 
L33: 

                /** sequence.e:1868						end for*/
                _a_6593 = _a_6593 + 1;
                goto L30; // [1036] 961
L31: 
                ;
            }
            goto L5; // [1041] 1304

            /** sequence.e:1869					case "(]" then*/
            case 4:

            /** sequence.e:1870						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3431 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3431 = 1;
            }
            {
                object _a_6611;
                _a_6611 = 1;
L35: 
                if (_a_6611 > _3431){
                    goto L36; // [1052] 1139
                }

                /** sequence.e:1871							if compare(source[a], userdata[1]) <= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3432 = (object)*(((s1_ptr)_2)->base + _a_6611);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3433 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3432) && IS_ATOM_INT(_3433)){
                    _3434 = (_3432 < _3433) ? -1 : (_3432 > _3433);
                }
                else{
                    _3434 = compare(_3432, _3433);
                }
                _3432 = NOVALUE;
                _3433 = NOVALUE;
                if (_3434 > 0)
                goto L37; // [1073] 1096

                /** sequence.e:1872								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1873								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3437 = (object)*(((s1_ptr)_2)->base + _a_6611);
                Ref(_3437);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3437;
                if( _1 != _3437 ){
                    DeRef(_1);
                }
                _3437 = NOVALUE;
                goto L38; // [1093] 1132
L37: 

                /** sequence.e:1874							elsif compare(source[a], userdata[2]) > 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3438 = (object)*(((s1_ptr)_2)->base + _a_6611);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3439 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3438) && IS_ATOM_INT(_3439)){
                    _3440 = (_3438 < _3439) ? -1 : (_3438 > _3439);
                }
                else{
                    _3440 = compare(_3438, _3439);
                }
                _3438 = NOVALUE;
                _3439 = NOVALUE;
                if (_3440 <= 0)
                goto L39; // [1110] 1131

                /** sequence.e:1875								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1876								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3443 = (object)*(((s1_ptr)_2)->base + _a_6611);
                Ref(_3443);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3443;
                if( _1 != _3443 ){
                    DeRef(_1);
                }
                _3443 = NOVALUE;
L39: 
L38: 

                /** sequence.e:1878						end for*/
                _a_6611 = _a_6611 + 1;
                goto L35; // [1134] 1059
L36: 
                ;
            }
            goto L5; // [1139] 1304

            /** sequence.e:1879					case "()" then*/
            case 5:

            /** sequence.e:1880						for a = 1 to length(source) do*/
            if (IS_SEQUENCE(_source_6395)){
                    _3444 = SEQ_PTR(_source_6395)->length;
            }
            else {
                _3444 = 1;
            }
            {
                object _a_6629;
                _a_6629 = 1;
L3A: 
                if (_a_6629 > _3444){
                    goto L3B; // [1150] 1237
                }

                /** sequence.e:1881							if compare(source[a], userdata[1]) <= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3445 = (object)*(((s1_ptr)_2)->base + _a_6629);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3446 = (object)*(((s1_ptr)_2)->base + 1);
                if (IS_ATOM_INT(_3445) && IS_ATOM_INT(_3446)){
                    _3447 = (_3445 < _3446) ? -1 : (_3445 > _3446);
                }
                else{
                    _3447 = compare(_3445, _3446);
                }
                _3445 = NOVALUE;
                _3446 = NOVALUE;
                if (_3447 > 0)
                goto L3C; // [1171] 1194

                /** sequence.e:1882								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1883								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3450 = (object)*(((s1_ptr)_2)->base + _a_6629);
                Ref(_3450);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3450;
                if( _1 != _3450 ){
                    DeRef(_1);
                }
                _3450 = NOVALUE;
                goto L3D; // [1191] 1230
L3C: 

                /** sequence.e:1884							elsif compare(source[a], userdata[2]) >= 0 then*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3451 = (object)*(((s1_ptr)_2)->base + _a_6629);
                _2 = (object)SEQ_PTR(_userdata_6397);
                _3452 = (object)*(((s1_ptr)_2)->base + 2);
                if (IS_ATOM_INT(_3451) && IS_ATOM_INT(_3452)){
                    _3453 = (_3451 < _3452) ? -1 : (_3451 > _3452);
                }
                else{
                    _3453 = compare(_3451, _3452);
                }
                _3451 = NOVALUE;
                _3452 = NOVALUE;
                if (_3453 < 0)
                goto L3E; // [1208] 1229

                /** sequence.e:1885								idx += 1*/
                _idx_6400 = _idx_6400 + 1;

                /** sequence.e:1886								dest[idx] = source[a]*/
                _2 = (object)SEQ_PTR(_source_6395);
                _3456 = (object)*(((s1_ptr)_2)->base + _a_6629);
                Ref(_3456);
                _2 = (object)SEQ_PTR(_dest_6399);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3456;
                if( _1 != _3456 ){
                    DeRef(_1);
                }
                _3456 = NOVALUE;
L3E: 
L3D: 

                /** sequence.e:1888						end for*/
                _a_6629 = _a_6629 + 1;
                goto L3A; // [1232] 1157
L3B: 
                ;
            }
            goto L5; // [1237] 1304

            /** sequence.e:1889					case else*/
            case 0:
        ;}        goto L5; // [1244] 1304

        /** sequence.e:1894			case else*/
        case 0:

        /** sequence.e:1895				for a = 1 to length(source) do*/
        if (IS_SEQUENCE(_source_6395)){
                _3457 = SEQ_PTR(_source_6395)->length;
        }
        else {
            _3457 = 1;
        }
        {
            object _a_6648;
            _a_6648 = 1;
L3F: 
            if (_a_6648 > _3457){
                goto L40; // [1255] 1303
            }

            /** sequence.e:1896					if call_func(rid, {source[a], userdata}) then*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3458 = (object)*(((s1_ptr)_2)->base + _a_6648);
            Ref(_userdata_6397);
            Ref(_3458);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _3458;
            ((intptr_t *)_2)[2] = _userdata_6397;
            _3459 = MAKE_SEQ(_1);
            _3458 = NOVALUE;
            _1 = (object)SEQ_PTR(_3459);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_rid_6396].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            Ref( *(( (intptr_t*)_2) + 2) );
            _1 = (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1), 
                                *( ((intptr_t *)_2) + 2)
                                 );
            DeRef(_3460);
            _3460 = _1;
            DeRefDS(_3459);
            _3459 = NOVALUE;
            if (_3460 == 0) {
                DeRef(_3460);
                _3460 = NOVALUE;
                goto L41; // [1276] 1296
            }
            else {
                if (!IS_ATOM_INT(_3460) && DBL_PTR(_3460)->dbl == 0.0){
                    DeRef(_3460);
                    _3460 = NOVALUE;
                    goto L41; // [1276] 1296
                }
                DeRef(_3460);
                _3460 = NOVALUE;
            }
            DeRef(_3460);
            _3460 = NOVALUE;

            /** sequence.e:1897						idx += 1*/
            _idx_6400 = _idx_6400 + 1;

            /** sequence.e:1898						dest[idx] = source[a]*/
            _2 = (object)SEQ_PTR(_source_6395);
            _3462 = (object)*(((s1_ptr)_2)->base + _a_6648);
            Ref(_3462);
            _2 = (object)SEQ_PTR(_dest_6399);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6400);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3462;
            if( _1 != _3462 ){
                DeRef(_1);
            }
            _3462 = NOVALUE;
L41: 

            /** sequence.e:1900				end for*/
            _a_6648 = _a_6648 + 1;
            goto L3F; // [1298] 1262
L40: 
            ;
        }
    ;}L5: 

    /** sequence.e:1902		return dest[1..idx]*/
    rhs_slice_target = (object_ptr)&_3463;
    RHS_Slice(_dest_6399, 1, _idx_6400);
    DeRefDS(_source_6395);
    DeRef(_userdata_6397);
    DeRef(_rangetype_6398);
    DeRefDS(_dest_6399);
    return _3463;
    ;
}


object _22filter_alpha(object _elem_6660, object _ud_6661)
{
    object _3464 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:1907		return t_alpha(elem)*/
    Ref(_elem_6660);
    _3464 = _9t_alpha(_elem_6660);
    DeRef(_elem_6660);
    return _3464;
    ;
}


object _22split(object _st_6705, object _delim_6706, object _no_empty_6707, object _limit_6708)
{
    object _ret_6709 = NOVALUE;
    object _start_6710 = NOVALUE;
    object _pos_6711 = NOVALUE;
    object _k_6763 = NOVALUE;
    object _3532 = NOVALUE;
    object _3530 = NOVALUE;
    object _3529 = NOVALUE;
    object _3525 = NOVALUE;
    object _3524 = NOVALUE;
    object _3523 = NOVALUE;
    object _3520 = NOVALUE;
    object _3519 = NOVALUE;
    object _3514 = NOVALUE;
    object _3513 = NOVALUE;
    object _3509 = NOVALUE;
    object _3505 = NOVALUE;
    object _3503 = NOVALUE;
    object _3502 = NOVALUE;
    object _3498 = NOVALUE;
    object _3496 = NOVALUE;
    object _3495 = NOVALUE;
    object _3494 = NOVALUE;
    object _3493 = NOVALUE;
    object _3490 = NOVALUE;
    object _3489 = NOVALUE;
    object _3488 = NOVALUE;
    object _3487 = NOVALUE;
    object _3486 = NOVALUE;
    object _3484 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:2088		sequence ret = {}*/
    RefDS(_5);
    DeRef(_ret_6709);
    _ret_6709 = _5;

    /** sequence.e:2092		if length(st) = 0 then*/
    if (IS_SEQUENCE(_st_6705)){
            _3484 = SEQ_PTR(_st_6705)->length;
    }
    else {
        _3484 = 1;
    }
    if (_3484 != 0)
    goto L1; // [19] 30

    /** sequence.e:2093			return ret*/
    DeRefDS(_st_6705);
    DeRefi(_delim_6706);
    return _ret_6709;
L1: 

    /** sequence.e:2097		if sequence(delim) then*/
    _3486 = IS_SEQUENCE(_delim_6706);
    if (_3486 == 0)
    {
        _3486 = NOVALUE;
        goto L2; // [35] 211
    }
    else{
        _3486 = NOVALUE;
    }

    /** sequence.e:2099			if equal(delim, "") then*/
    if (_delim_6706 == _5)
    _3487 = 1;
    else if (IS_ATOM_INT(_delim_6706) && IS_ATOM_INT(_5))
    _3487 = 0;
    else
    _3487 = (compare(_delim_6706, _5) == 0);
    if (_3487 == 0)
    {
        _3487 = NOVALUE;
        goto L3; // [44] 127
    }
    else{
        _3487 = NOVALUE;
    }

    /** sequence.e:2100				for i = 1 to length(st) do*/
    if (IS_SEQUENCE(_st_6705)){
            _3488 = SEQ_PTR(_st_6705)->length;
    }
    else {
        _3488 = 1;
    }
    {
        object _i_6720;
        _i_6720 = 1;
L4: 
        if (_i_6720 > _3488){
            goto L5; // [52] 120
        }

        /** sequence.e:2101					st[i] = {st[i]}*/
        _2 = (object)SEQ_PTR(_st_6705);
        _3489 = (object)*(((s1_ptr)_2)->base + _i_6720);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_3489);
        ((intptr_t*)_2)[1] = _3489;
        _3490 = MAKE_SEQ(_1);
        _3489 = NOVALUE;
        _2 = (object)SEQ_PTR(_st_6705);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _st_6705 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_6720);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3490;
        if( _1 != _3490 ){
            DeRef(_1);
        }
        _3490 = NOVALUE;

        /** sequence.e:2102					limit -= 1*/
        _limit_6708 = _limit_6708 - 1;

        /** sequence.e:2103					if limit = 0 then*/
        if (_limit_6708 != 0)
        goto L6; // [81] 113

        /** sequence.e:2104						st = append(st[1 .. i],st[i+1 .. $])*/
        rhs_slice_target = (object_ptr)&_3493;
        RHS_Slice(_st_6705, 1, _i_6720);
        _3494 = _i_6720 + 1;
        if (IS_SEQUENCE(_st_6705)){
                _3495 = SEQ_PTR(_st_6705)->length;
        }
        else {
            _3495 = 1;
        }
        rhs_slice_target = (object_ptr)&_3496;
        RHS_Slice(_st_6705, _3494, _3495);
        RefDS(_3496);
        Append(&_st_6705, _3493, _3496);
        DeRefDS(_3493);
        _3493 = NOVALUE;
        DeRefDS(_3496);
        _3496 = NOVALUE;

        /** sequence.e:2105						exit*/
        goto L5; // [110] 120
L6: 

        /** sequence.e:2107				end for*/
        _i_6720 = _i_6720 + 1;
        goto L4; // [115] 59
L5: 
        ;
    }

    /** sequence.e:2109				return st*/
    DeRefi(_delim_6706);
    DeRef(_ret_6709);
    DeRef(_3494);
    _3494 = NOVALUE;
    return _st_6705;
L3: 

    /** sequence.e:2112			start = 1*/
    _start_6710 = 1;

    /** sequence.e:2113			while start <= length(st) do*/
L7: 
    if (IS_SEQUENCE(_st_6705)){
            _3498 = SEQ_PTR(_st_6705)->length;
    }
    else {
        _3498 = 1;
    }
    if (_start_6710 > _3498)
    goto L8; // [140] 290

    /** sequence.e:2114				pos = match(delim, st, start)*/
    _pos_6711 = e_match_from(_delim_6706, _st_6705, _start_6710);

    /** sequence.e:2116				if pos = 0 then*/
    if (_pos_6711 != 0)
    goto L9; // [153] 162

    /** sequence.e:2117					exit*/
    goto L8; // [159] 290
L9: 

    /** sequence.e:2120				ret = append(ret, st[start..pos-1])*/
    _3502 = _pos_6711 - 1;
    rhs_slice_target = (object_ptr)&_3503;
    RHS_Slice(_st_6705, _start_6710, _3502);
    RefDS(_3503);
    Append(&_ret_6709, _ret_6709, _3503);
    DeRefDS(_3503);
    _3503 = NOVALUE;

    /** sequence.e:2121				start = pos+length(delim)*/
    if (IS_SEQUENCE(_delim_6706)){
            _3505 = SEQ_PTR(_delim_6706)->length;
    }
    else {
        _3505 = 1;
    }
    _start_6710 = _pos_6711 + _3505;
    _3505 = NOVALUE;

    /** sequence.e:2122				limit -= 1*/
    _limit_6708 = _limit_6708 - 1;

    /** sequence.e:2123				if limit = 0 then*/
    if (_limit_6708 != 0)
    goto L7; // [194] 137

    /** sequence.e:2124					exit*/
    goto L8; // [200] 290

    /** sequence.e:2126			end while*/
    goto L7; // [205] 137
    goto L8; // [208] 290
L2: 

    /** sequence.e:2128			start = 1*/
    _start_6710 = 1;

    /** sequence.e:2129			while start <= length(st) do*/
LA: 
    if (IS_SEQUENCE(_st_6705)){
            _3509 = SEQ_PTR(_st_6705)->length;
    }
    else {
        _3509 = 1;
    }
    if (_start_6710 > _3509)
    goto LB; // [224] 289

    /** sequence.e:2130				pos = find(delim, st, start)*/
    _pos_6711 = find_from(_delim_6706, _st_6705, _start_6710);

    /** sequence.e:2132				if pos = 0 then*/
    if (_pos_6711 != 0)
    goto LC; // [237] 246

    /** sequence.e:2133					exit*/
    goto LB; // [243] 289
LC: 

    /** sequence.e:2136				ret = append(ret, st[start..pos-1])*/
    _3513 = _pos_6711 - 1;
    rhs_slice_target = (object_ptr)&_3514;
    RHS_Slice(_st_6705, _start_6710, _3513);
    RefDS(_3514);
    Append(&_ret_6709, _ret_6709, _3514);
    DeRefDS(_3514);
    _3514 = NOVALUE;

    /** sequence.e:2137				start = pos + 1*/
    _start_6710 = _pos_6711 + 1;

    /** sequence.e:2138				limit -= 1*/
    _limit_6708 = _limit_6708 - 1;

    /** sequence.e:2139				if limit = 0 then*/
    if (_limit_6708 != 0)
    goto LA; // [275] 221

    /** sequence.e:2140					exit*/
    goto LB; // [281] 289

    /** sequence.e:2142			end while*/
    goto LA; // [286] 221
LB: 
L8: 

    /** sequence.e:2145		ret = append(ret, st[start..$])*/
    if (IS_SEQUENCE(_st_6705)){
            _3519 = SEQ_PTR(_st_6705)->length;
    }
    else {
        _3519 = 1;
    }
    rhs_slice_target = (object_ptr)&_3520;
    RHS_Slice(_st_6705, _start_6710, _3519);
    RefDS(_3520);
    Append(&_ret_6709, _ret_6709, _3520);
    DeRefDS(_3520);
    _3520 = NOVALUE;

    /** sequence.e:2147		integer k = length(ret)*/
    if (IS_SEQUENCE(_ret_6709)){
            _k_6763 = SEQ_PTR(_ret_6709)->length;
    }
    else {
        _k_6763 = 1;
    }

    /** sequence.e:2148		if no_empty then*/
    if (_no_empty_6707 == 0)
    {
        goto LD; // [313] 378
    }
    else{
    }

    /** sequence.e:2149			k = 0*/
    _k_6763 = 0;

    /** sequence.e:2150			for i = 1 to length(ret) do*/
    if (IS_SEQUENCE(_ret_6709)){
            _3523 = SEQ_PTR(_ret_6709)->length;
    }
    else {
        _3523 = 1;
    }
    {
        object _i_6767;
        _i_6767 = 1;
LE: 
        if (_i_6767 > _3523){
            goto LF; // [326] 377
        }

        /** sequence.e:2151				if length(ret[i]) != 0 then*/
        _2 = (object)SEQ_PTR(_ret_6709);
        _3524 = (object)*(((s1_ptr)_2)->base + _i_6767);
        if (IS_SEQUENCE(_3524)){
                _3525 = SEQ_PTR(_3524)->length;
        }
        else {
            _3525 = 1;
        }
        _3524 = NOVALUE;
        if (_3525 == 0)
        goto L10; // [342] 370

        /** sequence.e:2152					k += 1*/
        _k_6763 = _k_6763 + 1;

        /** sequence.e:2153					if k != i then*/
        if (_k_6763 == _i_6767)
        goto L11; // [354] 369

        /** sequence.e:2154						ret[k] = ret[i]*/
        _2 = (object)SEQ_PTR(_ret_6709);
        _3529 = (object)*(((s1_ptr)_2)->base + _i_6767);
        Ref(_3529);
        _2 = (object)SEQ_PTR(_ret_6709);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _ret_6709 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _k_6763);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3529;
        if( _1 != _3529 ){
            DeRef(_1);
        }
        _3529 = NOVALUE;
L11: 
L10: 

        /** sequence.e:2157			end for*/
        _i_6767 = _i_6767 + 1;
        goto LE; // [372] 333
LF: 
        ;
    }
LD: 

    /** sequence.e:2160		if k < length(ret) then*/
    if (IS_SEQUENCE(_ret_6709)){
            _3530 = SEQ_PTR(_ret_6709)->length;
    }
    else {
        _3530 = 1;
    }
    if (_k_6763 >= _3530)
    goto L12; // [383] 401

    /** sequence.e:2161			return ret[1 .. k]*/
    rhs_slice_target = (object_ptr)&_3532;
    RHS_Slice(_ret_6709, 1, _k_6763);
    DeRefDS(_st_6705);
    DeRefi(_delim_6706);
    DeRefDS(_ret_6709);
    DeRef(_3513);
    _3513 = NOVALUE;
    DeRef(_3502);
    _3502 = NOVALUE;
    DeRef(_3494);
    _3494 = NOVALUE;
    _3524 = NOVALUE;
    return _3532;
    goto L13; // [398] 408
L12: 

    /** sequence.e:2163			return ret*/
    DeRefDS(_st_6705);
    DeRefi(_delim_6706);
    DeRef(_3513);
    _3513 = NOVALUE;
    DeRef(_3502);
    _3502 = NOVALUE;
    DeRef(_3494);
    _3494 = NOVALUE;
    _3524 = NOVALUE;
    DeRef(_3532);
    _3532 = NOVALUE;
    return _ret_6709;
L13: 
    ;
}


object _22join(object _items_6832, object _delim_6833)
{
    object _ret_6835 = NOVALUE;
    object _3567 = NOVALUE;
    object _3566 = NOVALUE;
    object _3564 = NOVALUE;
    object _3563 = NOVALUE;
    object _3562 = NOVALUE;
    object _3561 = NOVALUE;
    object _3559 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:2279		if not length(items) then return {} end if*/
    if (IS_SEQUENCE(_items_6832)){
            _3559 = SEQ_PTR(_items_6832)->length;
    }
    else {
        _3559 = 1;
    }
    if (_3559 != 0)
    goto L1; // [8] 16
    _3559 = NOVALUE;
    RefDS(_5);
    DeRefDS(_items_6832);
    DeRef(_ret_6835);
    return _5;
L1: 

    /** sequence.e:2281		ret = {}*/
    RefDS(_5);
    DeRef(_ret_6835);
    _ret_6835 = _5;

    /** sequence.e:2282		for i=1 to length(items)-1 do*/
    if (IS_SEQUENCE(_items_6832)){
            _3561 = SEQ_PTR(_items_6832)->length;
    }
    else {
        _3561 = 1;
    }
    _3562 = _3561 - 1;
    _3561 = NOVALUE;
    {
        object _i_6840;
        _i_6840 = 1;
L2: 
        if (_i_6840 > _3562){
            goto L3; // [30] 58
        }

        /** sequence.e:2283			ret &= items[i] & delim*/
        _2 = (object)SEQ_PTR(_items_6832);
        _3563 = (object)*(((s1_ptr)_2)->base + _i_6840);
        if (IS_SEQUENCE(_3563) && IS_ATOM(_delim_6833)) {
            Append(&_3564, _3563, _delim_6833);
        }
        else if (IS_ATOM(_3563) && IS_SEQUENCE(_delim_6833)) {
        }
        else {
            Concat((object_ptr)&_3564, _3563, _delim_6833);
            _3563 = NOVALUE;
        }
        _3563 = NOVALUE;
        if (IS_SEQUENCE(_ret_6835) && IS_ATOM(_3564)) {
        }
        else if (IS_ATOM(_ret_6835) && IS_SEQUENCE(_3564)) {
            Ref(_ret_6835);
            Prepend(&_ret_6835, _3564, _ret_6835);
        }
        else {
            Concat((object_ptr)&_ret_6835, _ret_6835, _3564);
        }
        DeRefDS(_3564);
        _3564 = NOVALUE;

        /** sequence.e:2284		end for*/
        _i_6840 = _i_6840 + 1;
        goto L2; // [53] 37
L3: 
        ;
    }

    /** sequence.e:2286		ret &= items[$]*/
    if (IS_SEQUENCE(_items_6832)){
            _3566 = SEQ_PTR(_items_6832)->length;
    }
    else {
        _3566 = 1;
    }
    _2 = (object)SEQ_PTR(_items_6832);
    _3567 = (object)*(((s1_ptr)_2)->base + _3566);
    if (IS_SEQUENCE(_ret_6835) && IS_ATOM(_3567)) {
        Ref(_3567);
        Append(&_ret_6835, _ret_6835, _3567);
    }
    else if (IS_ATOM(_ret_6835) && IS_SEQUENCE(_3567)) {
        Ref(_ret_6835);
        Prepend(&_ret_6835, _3567, _ret_6835);
    }
    else {
        Concat((object_ptr)&_ret_6835, _ret_6835, _3567);
    }
    _3567 = NOVALUE;

    /** sequence.e:2288		return ret*/
    DeRefDS(_items_6832);
    DeRef(_3562);
    _3562 = NOVALUE;
    return _ret_6835;
    ;
}


object _22flatten(object _s_6942, object _delim_6943)
{
    object _ret_6944 = NOVALUE;
    object _x_6945 = NOVALUE;
    object _len_6946 = NOVALUE;
    object _pos_6947 = NOVALUE;
    object _temp_6965 = NOVALUE;
    object _3653 = NOVALUE;
    object _3652 = NOVALUE;
    object _3651 = NOVALUE;
    object _3649 = NOVALUE;
    object _3648 = NOVALUE;
    object _3647 = NOVALUE;
    object _3645 = NOVALUE;
    object _3643 = NOVALUE;
    object _3642 = NOVALUE;
    object _3641 = NOVALUE;
    object _3639 = NOVALUE;
    object _3638 = NOVALUE;
    object _3637 = NOVALUE;
    object _3636 = NOVALUE;
    object _3635 = NOVALUE;
    object _3634 = NOVALUE;
    object _3632 = NOVALUE;
    object _3631 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:2491		ret = s*/
    RefDS(_s_6942);
    DeRef(_ret_6944);
    _ret_6944 = _s_6942;

    /** sequence.e:2492		pos = 1*/
    _pos_6947 = 1;

    /** sequence.e:2493		len = length(ret)*/
    if (IS_SEQUENCE(_ret_6944)){
            _len_6946 = SEQ_PTR(_ret_6944)->length;
    }
    else {
        _len_6946 = 1;
    }

    /** sequence.e:2494		while pos <= len do*/
L1: 
    if (_pos_6947 > _len_6946)
    goto L2; // [25] 183

    /** sequence.e:2495			x = ret[pos]*/
    DeRef(_x_6945);
    _2 = (object)SEQ_PTR(_ret_6944);
    _x_6945 = (object)*(((s1_ptr)_2)->base + _pos_6947);
    Ref(_x_6945);

    /** sequence.e:2496			if sequence(x) then*/
    _3631 = IS_SEQUENCE(_x_6945);
    if (_3631 == 0)
    {
        _3631 = NOVALUE;
        goto L3; // [40] 171
    }
    else{
        _3631 = NOVALUE;
    }

    /** sequence.e:2497				if length(delim) = 0 then*/
    if (IS_SEQUENCE(_delim_6943)){
            _3632 = SEQ_PTR(_delim_6943)->length;
    }
    else {
        _3632 = 1;
    }
    if (_3632 != 0)
    goto L4; // [48] 89

    /** sequence.e:2498					ret = ret[1..pos-1] & flatten(x) & ret[pos+1 .. $]*/
    _3634 = _pos_6947 - 1;
    rhs_slice_target = (object_ptr)&_3635;
    RHS_Slice(_ret_6944, 1, _3634);
    Ref(_x_6945);
    RefDS(_5);
    _3636 = _22flatten(_x_6945, _5);
    _3637 = _pos_6947 + 1;
    if (_3637 > MAXINT){
        _3637 = NewDouble((eudouble)_3637);
    }
    if (IS_SEQUENCE(_ret_6944)){
            _3638 = SEQ_PTR(_ret_6944)->length;
    }
    else {
        _3638 = 1;
    }
    rhs_slice_target = (object_ptr)&_3639;
    RHS_Slice(_ret_6944, _3637, _3638);
    {
        object concat_list[3];

        concat_list[0] = _3639;
        concat_list[1] = _3636;
        concat_list[2] = _3635;
        Concat_N((object_ptr)&_ret_6944, concat_list, 3);
    }
    DeRefDS(_3639);
    _3639 = NOVALUE;
    DeRef(_3636);
    _3636 = NOVALUE;
    DeRefDS(_3635);
    _3635 = NOVALUE;
    goto L5; // [86] 163
L4: 

    /** sequence.e:2500					sequence temp = ret[1..pos-1] & flatten(x)*/
    _3641 = _pos_6947 - 1;
    rhs_slice_target = (object_ptr)&_3642;
    RHS_Slice(_ret_6944, 1, _3641);
    Ref(_x_6945);
    RefDS(_5);
    _3643 = _22flatten(_x_6945, _5);
    if (IS_SEQUENCE(_3642) && IS_ATOM(_3643)) {
        Ref(_3643);
        Append(&_temp_6965, _3642, _3643);
    }
    else if (IS_ATOM(_3642) && IS_SEQUENCE(_3643)) {
    }
    else {
        Concat((object_ptr)&_temp_6965, _3642, _3643);
        DeRefDS(_3642);
        _3642 = NOVALUE;
    }
    DeRef(_3642);
    _3642 = NOVALUE;
    DeRef(_3643);
    _3643 = NOVALUE;

    /** sequence.e:2501					if pos != length(ret) then*/
    if (IS_SEQUENCE(_ret_6944)){
            _3645 = SEQ_PTR(_ret_6944)->length;
    }
    else {
        _3645 = 1;
    }
    if (_pos_6947 == _3645)
    goto L6; // [114] 141

    /** sequence.e:2502						ret = temp &  delim & ret[pos+1 .. $]*/
    _3647 = _pos_6947 + 1;
    if (_3647 > MAXINT){
        _3647 = NewDouble((eudouble)_3647);
    }
    if (IS_SEQUENCE(_ret_6944)){
            _3648 = SEQ_PTR(_ret_6944)->length;
    }
    else {
        _3648 = 1;
    }
    rhs_slice_target = (object_ptr)&_3649;
    RHS_Slice(_ret_6944, _3647, _3648);
    {
        object concat_list[3];

        concat_list[0] = _3649;
        concat_list[1] = _delim_6943;
        concat_list[2] = _temp_6965;
        Concat_N((object_ptr)&_ret_6944, concat_list, 3);
    }
    DeRefDS(_3649);
    _3649 = NOVALUE;
    goto L7; // [138] 160
L6: 

    /** sequence.e:2504						ret = temp & ret[pos+1 .. $]*/
    _3651 = _pos_6947 + 1;
    if (_3651 > MAXINT){
        _3651 = NewDouble((eudouble)_3651);
    }
    if (IS_SEQUENCE(_ret_6944)){
            _3652 = SEQ_PTR(_ret_6944)->length;
    }
    else {
        _3652 = 1;
    }
    rhs_slice_target = (object_ptr)&_3653;
    RHS_Slice(_ret_6944, _3651, _3652);
    Concat((object_ptr)&_ret_6944, _temp_6965, _3653);
    DeRefDS(_3653);
    _3653 = NOVALUE;
L7: 
    DeRef(_temp_6965);
    _temp_6965 = NOVALUE;
L5: 

    /** sequence.e:2507				len = length(ret)*/
    if (IS_SEQUENCE(_ret_6944)){
            _len_6946 = SEQ_PTR(_ret_6944)->length;
    }
    else {
        _len_6946 = 1;
    }
    goto L1; // [168] 25
L3: 

    /** sequence.e:2509				pos += 1*/
    _pos_6947 = _pos_6947 + 1;

    /** sequence.e:2511		end while*/
    goto L1; // [180] 25
L2: 

    /** sequence.e:2513		return ret*/
    DeRefDS(_s_6942);
    DeRefi(_delim_6943);
    DeRef(_x_6945);
    DeRef(_3634);
    _3634 = NOVALUE;
    DeRef(_3651);
    _3651 = NOVALUE;
    DeRef(_3641);
    _3641 = NOVALUE;
    DeRef(_3647);
    _3647 = NOVALUE;
    DeRef(_3637);
    _3637 = NOVALUE;
    return _ret_6944;
    ;
}


object _22remove_dups(object _source_data_7312, object _proc_option_7313)
{
    object _lTo_7314 = NOVALUE;
    object _lFrom_7315 = NOVALUE;
    object _lResult_7338 = NOVALUE;
    object _3882 = NOVALUE;
    object _3880 = NOVALUE;
    object _3879 = NOVALUE;
    object _3878 = NOVALUE;
    object _3877 = NOVALUE;
    object _3875 = NOVALUE;
    object _3871 = NOVALUE;
    object _3870 = NOVALUE;
    object _3869 = NOVALUE;
    object _3867 = NOVALUE;
    object _3862 = NOVALUE;
    object _0, _1, _2;
    

    /** sequence.e:3111		if length(source_data) < 2 then*/
    if (IS_SEQUENCE(_source_data_7312)){
            _3862 = SEQ_PTR(_source_data_7312)->length;
    }
    else {
        _3862 = 1;
    }
    if (_3862 >= 2)
    goto L1; // [10] 21

    /** sequence.e:3112			return source_data*/
    DeRef(_lResult_7338);
    return _source_data_7312;
L1: 

    /** sequence.e:3115		if proc_option = RD_SORT then*/
    if (_proc_option_7313 != 3)
    goto L2; // [23] 42

    /** sequence.e:3116			source_data = stdsort:sort(source_data)*/
    RefDS(_source_data_7312);
    _0 = _source_data_7312;
    _source_data_7312 = _23sort(_source_data_7312, 1);
    DeRefDS(_0);

    /** sequence.e:3117			proc_option = RD_PRESORTED*/
    _proc_option_7313 = 2;
L2: 

    /** sequence.e:3119		if proc_option = RD_PRESORTED then*/
    if (_proc_option_7313 != 2)
    goto L3; // [44] 134

    /** sequence.e:3120			lTo = 1*/
    _lTo_7314 = 1;

    /** sequence.e:3121			lFrom = 2*/
    _lFrom_7315 = 2;

    /** sequence.e:3123			while lFrom <= length(source_data) do*/
L4: 
    if (IS_SEQUENCE(_source_data_7312)){
            _3867 = SEQ_PTR(_source_data_7312)->length;
    }
    else {
        _3867 = 1;
    }
    if (_lFrom_7315 > _3867)
    goto L5; // [66] 122

    /** sequence.e:3124				if not equal(source_data[lFrom], source_data[lTo]) then*/
    _2 = (object)SEQ_PTR(_source_data_7312);
    _3869 = (object)*(((s1_ptr)_2)->base + _lFrom_7315);
    _2 = (object)SEQ_PTR(_source_data_7312);
    _3870 = (object)*(((s1_ptr)_2)->base + _lTo_7314);
    if (_3869 == _3870)
    _3871 = 1;
    else if (IS_ATOM_INT(_3869) && IS_ATOM_INT(_3870))
    _3871 = 0;
    else
    _3871 = (compare(_3869, _3870) == 0);
    _3869 = NOVALUE;
    _3870 = NOVALUE;
    if (_3871 != 0)
    goto L6; // [84] 111
    _3871 = NOVALUE;

    /** sequence.e:3125					lTo += 1*/
    _lTo_7314 = _lTo_7314 + 1;

    /** sequence.e:3126					if lTo != lFrom then*/
    if (_lTo_7314 == _lFrom_7315)
    goto L7; // [95] 110

    /** sequence.e:3127						source_data[lTo] = source_data[lFrom]*/
    _2 = (object)SEQ_PTR(_source_data_7312);
    _3875 = (object)*(((s1_ptr)_2)->base + _lFrom_7315);
    Ref(_3875);
    _2 = (object)SEQ_PTR(_source_data_7312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _source_data_7312 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _lTo_7314);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3875;
    if( _1 != _3875 ){
        DeRef(_1);
    }
    _3875 = NOVALUE;
L7: 
L6: 

    /** sequence.e:3130				lFrom += 1*/
    _lFrom_7315 = _lFrom_7315 + 1;

    /** sequence.e:3131			end while*/
    goto L4; // [119] 63
L5: 

    /** sequence.e:3132			return source_data[1 .. lTo]*/
    rhs_slice_target = (object_ptr)&_3877;
    RHS_Slice(_source_data_7312, 1, _lTo_7314);
    DeRefDS(_source_data_7312);
    DeRef(_lResult_7338);
    return _3877;
L3: 

    /** sequence.e:3135		sequence lResult*/

    /** sequence.e:3136		lResult = {}*/
    RefDS(_5);
    DeRef(_lResult_7338);
    _lResult_7338 = _5;

    /** sequence.e:3137		for i = 1 to length(source_data) do*/
    if (IS_SEQUENCE(_source_data_7312)){
            _3878 = SEQ_PTR(_source_data_7312)->length;
    }
    else {
        _3878 = 1;
    }
    {
        object _i_7340;
        _i_7340 = 1;
L8: 
        if (_i_7340 > _3878){
            goto L9; // [148] 187
        }

        /** sequence.e:3138			if not find(source_data[i], lResult) then*/
        _2 = (object)SEQ_PTR(_source_data_7312);
        _3879 = (object)*(((s1_ptr)_2)->base + _i_7340);
        _3880 = find_from(_3879, _lResult_7338, 1);
        _3879 = NOVALUE;
        if (_3880 != 0)
        goto LA; // [166] 180
        _3880 = NOVALUE;

        /** sequence.e:3139				lResult = append(lResult, source_data[i])*/
        _2 = (object)SEQ_PTR(_source_data_7312);
        _3882 = (object)*(((s1_ptr)_2)->base + _i_7340);
        Ref(_3882);
        Append(&_lResult_7338, _lResult_7338, _3882);
        _3882 = NOVALUE;
LA: 

        /** sequence.e:3141		end for*/
        _i_7340 = _i_7340 + 1;
        goto L8; // [182] 155
L9: 
        ;
    }

    /** sequence.e:3142		return lResult*/
    DeRefDS(_source_data_7312);
    DeRef(_3877);
    _3877 = NOVALUE;
    return _lResult_7338;
    ;
}



// 0x42652EF5
