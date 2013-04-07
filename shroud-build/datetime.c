// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _17isLeap(object _year_4678)
{
    object _ly_4679 = NOVALUE;
    object _2313 = NOVALUE;
    object _2312 = NOVALUE;
    object _2311 = NOVALUE;
    object _2310 = NOVALUE;
    object _2309 = NOVALUE;
    object _2308 = NOVALUE;
    object _2307 = NOVALUE;
    object _2306 = NOVALUE;
    object _2305 = NOVALUE;
    object _2302 = NOVALUE;
    object _2300 = NOVALUE;
    object _2299 = NOVALUE;
    object _0, _1, _2;
    

    /** datetime.e:89			ly = (remainder(year, {4, 100, 400, 3200, 80000})=0)*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 4;
    ((intptr_t*)_2)[2] = 100;
    ((intptr_t*)_2)[3] = 400;
    ((intptr_t*)_2)[4] = 3200;
    ((intptr_t*)_2)[5] = 80000;
    _2299 = MAKE_SEQ(_1);
    _2300 = binary_op(REMAINDER, _year_4678, _2299);
    DeRefDS(_2299);
    _2299 = NOVALUE;
    DeRefi(_ly_4679);
    _ly_4679 = binary_op(EQUALS, _2300, 0);
    DeRefDS(_2300);
    _2300 = NOVALUE;

    /** datetime.e:91			if not ly[1] then return 0 end if*/
    _2 = (object)SEQ_PTR(_ly_4679);
    _2302 = (object)*(((s1_ptr)_2)->base + 1);
    if (_2302 != 0)
    goto L1; // [29] 37
    _2302 = NOVALUE;
    DeRefDSi(_ly_4679);
    return 0;
L1: 

    /** datetime.e:93			if year <= Gregorian_Reformation then*/
    if (_year_4678 > 1752)
    goto L2; // [39] 52

    /** datetime.e:94					return 1 -- ly[1] can't possibly be 0 here so set shortcut as '1'.*/
    DeRefi(_ly_4679);
    return 1;
    goto L3; // [49] 95
L2: 

    /** datetime.e:96					return ly[1] - ly[2] + ly[3] - ly[4] + ly[5]*/
    _2 = (object)SEQ_PTR(_ly_4679);
    _2305 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_ly_4679);
    _2306 = (object)*(((s1_ptr)_2)->base + 2);
    _2307 = _2305 - _2306;
    if ((object)((uintptr_t)_2307 +(uintptr_t) HIGH_BITS) >= 0){
        _2307 = NewDouble((eudouble)_2307);
    }
    _2305 = NOVALUE;
    _2306 = NOVALUE;
    _2 = (object)SEQ_PTR(_ly_4679);
    _2308 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_ATOM_INT(_2307)) {
        _2309 = _2307 + _2308;
        if ((object)((uintptr_t)_2309 + (uintptr_t)HIGH_BITS) >= 0){
            _2309 = NewDouble((eudouble)_2309);
        }
    }
    else {
        _2309 = NewDouble(DBL_PTR(_2307)->dbl + (eudouble)_2308);
    }
    DeRef(_2307);
    _2307 = NOVALUE;
    _2308 = NOVALUE;
    _2 = (object)SEQ_PTR(_ly_4679);
    _2310 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_2309)) {
        _2311 = _2309 - _2310;
        if ((object)((uintptr_t)_2311 +(uintptr_t) HIGH_BITS) >= 0){
            _2311 = NewDouble((eudouble)_2311);
        }
    }
    else {
        _2311 = NewDouble(DBL_PTR(_2309)->dbl - (eudouble)_2310);
    }
    DeRef(_2309);
    _2309 = NOVALUE;
    _2310 = NOVALUE;
    _2 = (object)SEQ_PTR(_ly_4679);
    _2312 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_2311)) {
        _2313 = _2311 + _2312;
        if ((object)((uintptr_t)_2313 + (uintptr_t)HIGH_BITS) >= 0){
            _2313 = NewDouble((eudouble)_2313);
        }
    }
    else {
        _2313 = NewDouble(DBL_PTR(_2311)->dbl + (eudouble)_2312);
    }
    DeRef(_2311);
    _2311 = NOVALUE;
    _2312 = NOVALUE;
    DeRefDSi(_ly_4679);
    return _2313;
L3: 
    ;
}


object _17daysInMonth(object _year_4703, object _month_4704)
{
    object _2321 = NOVALUE;
    object _2320 = NOVALUE;
    object _2319 = NOVALUE;
    object _2318 = NOVALUE;
    object _2316 = NOVALUE;
    object _2315 = NOVALUE;
    object _2314 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_month_4704)) {
        _1 = (object)(DBL_PTR(_month_4704)->dbl);
        DeRefDS(_month_4704);
        _month_4704 = _1;
    }

    /** datetime.e:101		if year = Gregorian_Reformation and month = 9 then*/
    _2314 = (_year_4703 == 1752);
    if (_2314 == 0) {
        goto L1; // [11] 32
    }
    _2316 = (_month_4704 == 9);
    if (_2316 == 0)
    {
        DeRef(_2316);
        _2316 = NOVALUE;
        goto L1; // [20] 32
    }
    else{
        DeRef(_2316);
        _2316 = NOVALUE;
    }

    /** datetime.e:102			return 19*/
    DeRef(_2314);
    _2314 = NOVALUE;
    return 19;
    goto L2; // [29] 70
L1: 

    /** datetime.e:103		elsif month != 2 then*/
    if (_month_4704 == 2)
    goto L3; // [34] 51

    /** datetime.e:104			return DaysPerMonth[month]*/
    _2 = (object)SEQ_PTR(_17DaysPerMonth_4661);
    _2318 = (object)*(((s1_ptr)_2)->base + _month_4704);
    Ref(_2318);
    DeRef(_2314);
    _2314 = NOVALUE;
    return _2318;
    goto L2; // [48] 70
L3: 

    /** datetime.e:106			return DaysPerMonth[month] + isLeap(year)*/
    _2 = (object)SEQ_PTR(_17DaysPerMonth_4661);
    _2319 = (object)*(((s1_ptr)_2)->base + _month_4704);
    _2320 = _17isLeap(_year_4703);
    if (IS_ATOM_INT(_2319) && IS_ATOM_INT(_2320)) {
        _2321 = _2319 + _2320;
        if ((object)((uintptr_t)_2321 + (uintptr_t)HIGH_BITS) >= 0){
            _2321 = NewDouble((eudouble)_2321);
        }
    }
    else {
        _2321 = binary_op(PLUS, _2319, _2320);
    }
    _2319 = NOVALUE;
    DeRef(_2320);
    _2320 = NOVALUE;
    DeRef(_2314);
    _2314 = NOVALUE;
    _2318 = NOVALUE;
    return _2321;
L2: 
    ;
}


object _17julianDayOfYear(object _ymd_4727)
{
    object _year_4728 = NOVALUE;
    object _month_4729 = NOVALUE;
    object _day_4730 = NOVALUE;
    object _d_4731 = NOVALUE;
    object _2337 = NOVALUE;
    object _2336 = NOVALUE;
    object _2335 = NOVALUE;
    object _2332 = NOVALUE;
    object _2331 = NOVALUE;
    object _0, _1, _2;
    

    /** datetime.e:124		year = ymd[1]*/
    _2 = (object)SEQ_PTR(_ymd_4727);
    _year_4728 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_4728)){
        _year_4728 = (object)DBL_PTR(_year_4728)->dbl;
    }

    /** datetime.e:125		month = ymd[2]*/
    _2 = (object)SEQ_PTR(_ymd_4727);
    _month_4729 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_month_4729)){
        _month_4729 = (object)DBL_PTR(_month_4729)->dbl;
    }

    /** datetime.e:126		day = ymd[3]*/
    _2 = (object)SEQ_PTR(_ymd_4727);
    _day_4730 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_day_4730)){
        _day_4730 = (object)DBL_PTR(_day_4730)->dbl;
    }

    /** datetime.e:128		if month = 1 then return day end if*/
    if (_month_4729 != 1)
    goto L1; // [27] 36
    DeRef(_ymd_4727);
    return _day_4730;
L1: 

    /** datetime.e:130		d = 0*/
    _d_4731 = 0;

    /** datetime.e:131		for i = 1 to month - 1 do*/
    _2331 = _month_4729 - 1;
    if ((object)((uintptr_t)_2331 +(uintptr_t) HIGH_BITS) >= 0){
        _2331 = NewDouble((eudouble)_2331);
    }
    {
        object _i_4738;
        _i_4738 = 1;
L2: 
        if (binary_op_a(GREATER, _i_4738, _2331)){
            goto L3; // [47] 74
        }

        /** datetime.e:132			d += daysInMonth(year, i)*/
        Ref(_i_4738);
        _2332 = _17daysInMonth(_year_4728, _i_4738);
        if (IS_ATOM_INT(_2332)) {
            _d_4731 = _d_4731 + _2332;
        }
        else {
            _d_4731 = binary_op(PLUS, _d_4731, _2332);
        }
        DeRef(_2332);
        _2332 = NOVALUE;
        if (!IS_ATOM_INT(_d_4731)) {
            _1 = (object)(DBL_PTR(_d_4731)->dbl);
            DeRefDS(_d_4731);
            _d_4731 = _1;
        }

        /** datetime.e:133		end for*/
        _0 = _i_4738;
        if (IS_ATOM_INT(_i_4738)) {
            _i_4738 = _i_4738 + 1;
            if ((object)((uintptr_t)_i_4738 +(uintptr_t) HIGH_BITS) >= 0){
                _i_4738 = NewDouble((eudouble)_i_4738);
            }
        }
        else {
            _i_4738 = binary_op_a(PLUS, _i_4738, 1);
        }
        DeRef(_0);
        goto L2; // [69] 54
L3: 
        ;
        DeRef(_i_4738);
    }

    /** datetime.e:135		d += day*/
    _d_4731 = _d_4731 + _day_4730;

    /** datetime.e:137		if year = Gregorian_Reformation and month = 9 then*/
    _2335 = (_year_4728 == 1752);
    if (_2335 == 0) {
        goto L4; // [86] 128
    }
    _2337 = (_month_4729 == 9);
    if (_2337 == 0)
    {
        DeRef(_2337);
        _2337 = NOVALUE;
        goto L4; // [95] 128
    }
    else{
        DeRef(_2337);
        _2337 = NOVALUE;
    }

    /** datetime.e:138			if day > 13 then*/
    if (_day_4730 <= 13)
    goto L5; // [100] 113

    /** datetime.e:139				d -= 11*/
    _d_4731 = _d_4731 - 11;
    goto L6; // [110] 127
L5: 

    /** datetime.e:140			elsif day > 2 then*/
    if (_day_4730 <= 2)
    goto L7; // [115] 126

    /** datetime.e:141				return 0*/
    DeRef(_ymd_4727);
    DeRef(_2335);
    _2335 = NOVALUE;
    DeRef(_2331);
    _2331 = NOVALUE;
    return 0;
L7: 
L6: 
L4: 

    /** datetime.e:145		return d*/
    DeRef(_ymd_4727);
    DeRef(_2335);
    _2335 = NOVALUE;
    DeRef(_2331);
    _2331 = NOVALUE;
    return _d_4731;
    ;
}


object _17julianDay(object _ymd_4754)
{
    object _year_4755 = NOVALUE;
    object _j_4756 = NOVALUE;
    object _greg00_4757 = NOVALUE;
    object _2366 = NOVALUE;
    object _2363 = NOVALUE;
    object _2360 = NOVALUE;
    object _2359 = NOVALUE;
    object _2358 = NOVALUE;
    object _2357 = NOVALUE;
    object _2356 = NOVALUE;
    object _2355 = NOVALUE;
    object _2354 = NOVALUE;
    object _2353 = NOVALUE;
    object _2351 = NOVALUE;
    object _2350 = NOVALUE;
    object _2349 = NOVALUE;
    object _2348 = NOVALUE;
    object _2347 = NOVALUE;
    object _2346 = NOVALUE;
    object _2345 = NOVALUE;
    object _0, _1, _2;
    

    /** datetime.e:152		year = ymd[1]*/
    _2 = (object)SEQ_PTR(_ymd_4754);
    _year_4755 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_4755)){
        _year_4755 = (object)DBL_PTR(_year_4755)->dbl;
    }

    /** datetime.e:153		j = julianDayOfYear(ymd)*/
    Ref(_ymd_4754);
    _j_4756 = _17julianDayOfYear(_ymd_4754);
    if (!IS_ATOM_INT(_j_4756)) {
        _1 = (object)(DBL_PTR(_j_4756)->dbl);
        DeRefDS(_j_4756);
        _j_4756 = _1;
    }

    /** datetime.e:155		year  -= 1*/
    _year_4755 = _year_4755 - 1;

    /** datetime.e:156		greg00 = year - Gregorian_Reformation00*/
    _greg00_4757 = _year_4755 - 1700;

    /** datetime.e:158		j += (*/
    if (_year_4755 <= INT15 && _year_4755 >= -INT15){
        _2345 = 365 * _year_4755;
    }
    else{
        _2345 = NewDouble(365 * (eudouble)_year_4755);
    }
    if (4 > 0 && _year_4755 >= 0) {
        _2346 = _year_4755 / 4;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_4755 / (eudouble)4);
        _2346 = (object)temp_dbl;
    }
    if (IS_ATOM_INT(_2345)) {
        _2347 = _2345 + _2346;
        if ((object)((uintptr_t)_2347 + (uintptr_t)HIGH_BITS) >= 0){
            _2347 = NewDouble((eudouble)_2347);
        }
    }
    else {
        _2347 = NewDouble(DBL_PTR(_2345)->dbl + (eudouble)_2346);
    }
    DeRef(_2345);
    _2345 = NOVALUE;
    _2346 = NOVALUE;
    _2348 = (_greg00_4757 > 0);
    if (100 > 0 && _greg00_4757 >= 0) {
        _2349 = _greg00_4757 / 100;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_greg00_4757 / (eudouble)100);
        _2349 = (object)temp_dbl;
    }
    _2350 = - _2349;
    _2351 = (_greg00_4757 % 400) ? NewDouble((eudouble)_greg00_4757 / 400) : (_greg00_4757 / 400);
    if (IS_ATOM_INT(_2351)) {
        _2353 = NewDouble((eudouble)_2351 + DBL_PTR(_2352)->dbl);
    }
    else {
        _2353 = NewDouble(DBL_PTR(_2351)->dbl + DBL_PTR(_2352)->dbl);
    }
    DeRef(_2351);
    _2351 = NOVALUE;
    _2354 = unary_op(FLOOR, _2353);
    DeRefDS(_2353);
    _2353 = NOVALUE;
    if (IS_ATOM_INT(_2354)) {
        _2355 = _2350 + _2354;
        if ((object)((uintptr_t)_2355 + (uintptr_t)HIGH_BITS) >= 0){
            _2355 = NewDouble((eudouble)_2355);
        }
    }
    else {
        _2355 = binary_op(PLUS, _2350, _2354);
    }
    _2350 = NOVALUE;
    DeRef(_2354);
    _2354 = NOVALUE;
    if (IS_ATOM_INT(_2355)) {
        if (_2355 <= INT15 && _2355 >= -INT15){
            _2356 = _2348 * _2355;
        }
        else{
            _2356 = NewDouble(_2348 * (eudouble)_2355);
        }
    }
    else {
        _2356 = binary_op(MULTIPLY, _2348, _2355);
    }
    _2348 = NOVALUE;
    DeRef(_2355);
    _2355 = NOVALUE;
    if (IS_ATOM_INT(_2347) && IS_ATOM_INT(_2356)) {
        _2357 = _2347 + _2356;
        if ((object)((uintptr_t)_2357 + (uintptr_t)HIGH_BITS) >= 0){
            _2357 = NewDouble((eudouble)_2357);
        }
    }
    else {
        _2357 = binary_op(PLUS, _2347, _2356);
    }
    DeRef(_2347);
    _2347 = NOVALUE;
    DeRef(_2356);
    _2356 = NOVALUE;
    _2358 = (_year_4755 >= 1752);
    _2359 = 11 * _2358;
    _2358 = NOVALUE;
    if (IS_ATOM_INT(_2357)) {
        _2360 = _2357 - _2359;
        if ((object)((uintptr_t)_2360 +(uintptr_t) HIGH_BITS) >= 0){
            _2360 = NewDouble((eudouble)_2360);
        }
    }
    else {
        _2360 = binary_op(MINUS, _2357, _2359);
    }
    DeRef(_2357);
    _2357 = NOVALUE;
    _2359 = NOVALUE;
    if (IS_ATOM_INT(_2360)) {
        _j_4756 = _j_4756 + _2360;
    }
    else {
        _j_4756 = binary_op(PLUS, _j_4756, _2360);
    }
    DeRef(_2360);
    _2360 = NOVALUE;
    if (!IS_ATOM_INT(_j_4756)) {
        _1 = (object)(DBL_PTR(_j_4756)->dbl);
        DeRefDS(_j_4756);
        _j_4756 = _1;
    }

    /** datetime.e:169		if year >= 3200 then*/
    if (_year_4755 < 3200)
    goto L1; // [97] 133

    /** datetime.e:170			j -= floor(year/ 3200)*/
    if (3200 > 0 && _year_4755 >= 0) {
        _2363 = _year_4755 / 3200;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_4755 / (eudouble)3200);
        _2363 = (object)temp_dbl;
    }
    _j_4756 = _j_4756 - _2363;
    _2363 = NOVALUE;

    /** datetime.e:171			if year >= 80000 then*/
    if (_year_4755 < 80000)
    goto L2; // [115] 132

    /** datetime.e:172				j += floor(year/80000)*/
    if (80000 > 0 && _year_4755 >= 0) {
        _2366 = _year_4755 / 80000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_4755 / (eudouble)80000);
        _2366 = (object)temp_dbl;
    }
    _j_4756 = _j_4756 + _2366;
    _2366 = NOVALUE;
L2: 
L1: 

    /** datetime.e:176		return j*/
    DeRef(_ymd_4754);
    DeRef(_2349);
    _2349 = NOVALUE;
    return _j_4756;
    ;
}


object _17datetimeToSeconds(object _dt_4843)
{
    object _2409 = NOVALUE;
    object _2408 = NOVALUE;
    object _2407 = NOVALUE;
    object _2406 = NOVALUE;
    object _2405 = NOVALUE;
    object _2404 = NOVALUE;
    object _2403 = NOVALUE;
    object _2402 = NOVALUE;
    object _2401 = NOVALUE;
    object _2400 = NOVALUE;
    object _0, _1, _2;
    

    /** datetime.e:226		return julianDay(dt) * DayLengthInSeconds + (dt[4] * 60 + dt[5]) * 60 + dt[6]*/
    Ref(_dt_4843);
    _2400 = _17julianDay(_dt_4843);
    if (IS_ATOM_INT(_2400)) {
        _2401 = NewDouble(_2400 * (eudouble)86400);
    }
    else {
        _2401 = binary_op(MULTIPLY, _2400, 86400);
    }
    DeRef(_2400);
    _2400 = NOVALUE;
    _2 = (object)SEQ_PTR(_dt_4843);
    _2402 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_2402)) {
        if (_2402 == (short)_2402){
            _2403 = _2402 * 60;
        }
        else{
            _2403 = NewDouble(_2402 * (eudouble)60);
        }
    }
    else {
        _2403 = binary_op(MULTIPLY, _2402, 60);
    }
    _2402 = NOVALUE;
    _2 = (object)SEQ_PTR(_dt_4843);
    _2404 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_2403) && IS_ATOM_INT(_2404)) {
        _2405 = _2403 + _2404;
        if ((object)((uintptr_t)_2405 + (uintptr_t)HIGH_BITS) >= 0){
            _2405 = NewDouble((eudouble)_2405);
        }
    }
    else {
        _2405 = binary_op(PLUS, _2403, _2404);
    }
    DeRef(_2403);
    _2403 = NOVALUE;
    _2404 = NOVALUE;
    if (IS_ATOM_INT(_2405)) {
        if (_2405 == (short)_2405){
            _2406 = _2405 * 60;
        }
        else{
            _2406 = NewDouble(_2405 * (eudouble)60);
        }
    }
    else {
        _2406 = binary_op(MULTIPLY, _2405, 60);
    }
    DeRef(_2405);
    _2405 = NOVALUE;
    if (IS_ATOM_INT(_2401) && IS_ATOM_INT(_2406)) {
        _2407 = _2401 + _2406;
        if ((object)((uintptr_t)_2407 + (uintptr_t)HIGH_BITS) >= 0){
            _2407 = NewDouble((eudouble)_2407);
        }
    }
    else {
        _2407 = binary_op(PLUS, _2401, _2406);
    }
    DeRef(_2401);
    _2401 = NOVALUE;
    DeRef(_2406);
    _2406 = NOVALUE;
    _2 = (object)SEQ_PTR(_dt_4843);
    _2408 = (object)*(((s1_ptr)_2)->base + 6);
    if (IS_ATOM_INT(_2407) && IS_ATOM_INT(_2408)) {
        _2409 = _2407 + _2408;
        if ((object)((uintptr_t)_2409 + (uintptr_t)HIGH_BITS) >= 0){
            _2409 = NewDouble((eudouble)_2409);
        }
    }
    else {
        _2409 = binary_op(PLUS, _2407, _2408);
    }
    DeRef(_2407);
    _2407 = NOVALUE;
    _2408 = NOVALUE;
    DeRef(_dt_4843);
    return _2409;
    ;
}


object _17from_date(object _src_5009)
{
    object _2524 = NOVALUE;
    object _2523 = NOVALUE;
    object _2522 = NOVALUE;
    object _2521 = NOVALUE;
    object _2520 = NOVALUE;
    object _2519 = NOVALUE;
    object _2518 = NOVALUE;
    object _2516 = NOVALUE;
    object _0, _1, _2;
    

    /** datetime.e:513		return {src[YEAR]+1900, src[MONTH], src[DAY], src[HOUR], src[MINUTE], src[SECOND]}*/
    _2 = (object)SEQ_PTR(_src_5009);
    _2516 = (object)*(((s1_ptr)_2)->base + 1);
    _2518 = _2516 + 1900;
    if ((object)((uintptr_t)_2518 + (uintptr_t)HIGH_BITS) >= 0){
        _2518 = NewDouble((eudouble)_2518);
    }
    _2516 = NOVALUE;
    _2 = (object)SEQ_PTR(_src_5009);
    _2519 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_src_5009);
    _2520 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(_src_5009);
    _2521 = (object)*(((s1_ptr)_2)->base + 4);
    _2 = (object)SEQ_PTR(_src_5009);
    _2522 = (object)*(((s1_ptr)_2)->base + 5);
    _2 = (object)SEQ_PTR(_src_5009);
    _2523 = (object)*(((s1_ptr)_2)->base + 6);
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _2518;
    ((intptr_t*)_2)[2] = _2519;
    ((intptr_t*)_2)[3] = _2520;
    ((intptr_t*)_2)[4] = _2521;
    ((intptr_t*)_2)[5] = _2522;
    ((intptr_t*)_2)[6] = _2523;
    _2524 = MAKE_SEQ(_1);
    _2523 = NOVALUE;
    _2522 = NOVALUE;
    _2521 = NOVALUE;
    _2520 = NOVALUE;
    _2519 = NOVALUE;
    _2518 = NOVALUE;
    DeRefDSi(_src_5009);
    return _2524;
    ;
}


object _17new(object _year_5041, object _month_5042, object _day_5043, object _hour_5044, object _minute_5045, object _second_5046)
{
    object _d_5047 = NOVALUE;
    object _now_1__tmp_at41_5054 = NOVALUE;
    object _now_inlined_now_at_41_5053 = NOVALUE;
    object _2539 = NOVALUE;
    object _2538 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_year_5041)) {
        _1 = (object)(DBL_PTR(_year_5041)->dbl);
        DeRefDS(_year_5041);
        _year_5041 = _1;
    }
    if (!IS_ATOM_INT(_month_5042)) {
        _1 = (object)(DBL_PTR(_month_5042)->dbl);
        DeRefDS(_month_5042);
        _month_5042 = _1;
    }
    if (!IS_ATOM_INT(_day_5043)) {
        _1 = (object)(DBL_PTR(_day_5043)->dbl);
        DeRefDS(_day_5043);
        _day_5043 = _1;
    }
    if (!IS_ATOM_INT(_hour_5044)) {
        _1 = (object)(DBL_PTR(_hour_5044)->dbl);
        DeRefDS(_hour_5044);
        _hour_5044 = _1;
    }
    if (!IS_ATOM_INT(_minute_5045)) {
        _1 = (object)(DBL_PTR(_minute_5045)->dbl);
        DeRefDS(_minute_5045);
        _minute_5045 = _1;
    }

    /** datetime.e:587		d = {year, month, day, hour, minute, second}*/
    _0 = _d_5047;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _year_5041;
    ((intptr_t*)_2)[2] = _month_5042;
    ((intptr_t*)_2)[3] = _day_5043;
    ((intptr_t*)_2)[4] = _hour_5044;
    ((intptr_t*)_2)[5] = _minute_5045;
    Ref(_second_5046);
    ((intptr_t*)_2)[6] = _second_5046;
    _d_5047 = MAKE_SEQ(_1);
    DeRef(_0);

    /** datetime.e:588		if equal(d, {0,0,0,0,0,0}) then*/
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 0;
    _2538 = MAKE_SEQ(_1);
    if (_d_5047 == _2538)
    _2539 = 1;
    else if (IS_ATOM_INT(_d_5047) && IS_ATOM_INT(_2538))
    _2539 = 0;
    else
    _2539 = (compare(_d_5047, _2538) == 0);
    DeRefDS(_2538);
    _2538 = NOVALUE;
    if (_2539 == 0)
    {
        _2539 = NOVALUE;
        goto L1; // [37] 60
    }
    else{
        _2539 = NOVALUE;
    }

    /** datetime.e:589			return now()*/

    /** datetime.e:533		return from_date(date())*/
    DeRefi(_now_1__tmp_at41_5054);
    _now_1__tmp_at41_5054 = Date();
    RefDS(_now_1__tmp_at41_5054);
    _0 = _now_inlined_now_at_41_5053;
    _now_inlined_now_at_41_5053 = _17from_date(_now_1__tmp_at41_5054);
    DeRef(_0);
    DeRefi(_now_1__tmp_at41_5054);
    _now_1__tmp_at41_5054 = NOVALUE;
    DeRef(_second_5046);
    DeRef(_d_5047);
    return _now_inlined_now_at_41_5053;
    goto L2; // [57] 67
L1: 

    /** datetime.e:591			return d*/
    DeRef(_second_5046);
    return _d_5047;
L2: 
    ;
}



// 0x8AE4B7EF
