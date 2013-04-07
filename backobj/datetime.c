// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _19isLeap(object _year_4380)
{
    object _ly_4381 = NOVALUE;
    object _2190 = NOVALUE; // 4402 2190
    object _2189 = NOVALUE; // 4401 2189
    object _2188 = NOVALUE; // 4400 2188
    object _2187 = NOVALUE; // 4399 2187
    object _2186 = NOVALUE; // 4398 2186
    object _2185 = NOVALUE; // 4397 2185
    object _2184 = NOVALUE; // 4396 2184
    object _2183 = NOVALUE; // 4395 2183
    object _2182 = NOVALUE; // 4394 2182
// skipping _2181  name type: 0
// skipping _2180  name type: 0
    object _2179 = NOVALUE; // 4389 2179
// skipping _2178  name type: 0
    object _2177 = NOVALUE; // 4386 2177
    object _2176 = NOVALUE; // 4385 2176
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg isLeap pc: 1 op: INTEGER_CHECK (96)
    // SubProg isLeap pc: 3 op: STARTLINE (58)

    /** datetime.e:89			ly = (remainder(year, {4, 100, 400, 3200, 80000})=0)*/
    // SubProg isLeap pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 4;
    ((intptr_t*)_2)[2] = 100;
    ((intptr_t*)_2)[3] = 400;
    ((intptr_t*)_2)[4] = 3200;
    ((intptr_t*)_2)[5] = 80000;
    _2176 = MAKE_SEQ(_1);
    // SubProg isLeap pc: 13 op: REMAINDER (71)
    _2177 = binary_op(REMAINDER, _year_4380, _2176);
    DeRefDS(_2176);
    _2176 = NOVALUE;
    // SubProg isLeap pc: 17 op: EQUALS (3)
    DeRefi(_ly_4381);
    _ly_4381 = binary_op(EQUALS, _2177, 0);
    DeRefDS(_2177);
    _2177 = NOVALUE;
    // SubProg isLeap pc: 21 op: SEQUENCE_CHECK (97)
    // SubProg isLeap pc: 23 op: STARTLINE (58)

    /** datetime.e:91			if not ly[1] then return 0 end if*/
    // SubProg isLeap pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_4381);
    _2179 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg isLeap pc: 29 op: NOT_IFW (108)
    if (_2179 != 0)
    goto L1; // [29] 37
    _2179 = NOVALUE;
    // SubProg isLeap pc: 32 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_4380

// block var ly_4381
    DeRefDSi(_ly_4381);
    return 0;
    // SubProg isLeap pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 4378 op: 159
    // SubProg isLeap pc: 37 op: STARTLINE (58)

    /** datetime.e:93			if year <= Gregorian_Reformation then*/
    // SubProg isLeap pc: 39 op: LESSEQ_IFW_I (123)
    if (_year_4380 > 1752)
    goto L2; // [39] 52
    // SubProg isLeap pc: 43 op: STARTLINE (58)

    /** datetime.e:94					return 1 -- ly[1] can't possibly be 0 here so set shortcut as '1'.*/
    // SubProg isLeap pc: 45 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_4380

// block var ly_4381
    DeRefi(_ly_4381);
    return 1;
    // SubProg isLeap pc: 49 op: ELSE (23)
    goto L3; // [49] 95
    // SubProg isLeap pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 4378 op: 159
    // SubProg isLeap pc: 52 op: STARTLINE (58)

    /** datetime.e:96					return ly[1] - ly[2] + ly[3] - ly[4] + ly[5]*/
    // SubProg isLeap pc: 54 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_4381);
    _2182 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg isLeap pc: 58 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_4381);
    _2183 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg isLeap pc: 62 op: MINUS (10)
    _2184 = _2182 - _2183;
    if ((object)((uintptr_t)_2184 +(uintptr_t) HIGH_BITS) >= 0){
        _2184 = NewDouble((eudouble)_2184);
    }
    _2182 = NOVALUE;
    _2183 = NOVALUE;
    // SubProg isLeap pc: 66 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_4381);
    _2185 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg isLeap pc: 70 op: PLUS (11)
    if (IS_ATOM_INT(_2184)) {
        _2186 = _2184 + _2185;
        if ((object)((uintptr_t)_2186 + (uintptr_t)HIGH_BITS) >= 0){
            _2186 = NewDouble((eudouble)_2186);
        }
    }
    else {
        _2186 = NewDouble(DBL_PTR(_2184)->dbl + (eudouble)_2185);
    }
    DeRef(_2184);
    _2184 = NOVALUE;
    _2185 = NOVALUE;
    // SubProg isLeap pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_4381);
    _2187 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg isLeap pc: 78 op: MINUS (10)
    if (IS_ATOM_INT(_2186)) {
        _2188 = _2186 - _2187;
        if ((object)((uintptr_t)_2188 +(uintptr_t) HIGH_BITS) >= 0){
            _2188 = NewDouble((eudouble)_2188);
        }
    }
    else {
        _2188 = NewDouble(DBL_PTR(_2186)->dbl - (eudouble)_2187);
    }
    DeRef(_2186);
    _2186 = NOVALUE;
    _2187 = NOVALUE;
    // SubProg isLeap pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_4381);
    _2189 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg isLeap pc: 86 op: PLUS (11)
    if (IS_ATOM_INT(_2188)) {
        _2190 = _2188 + _2189;
        if ((object)((uintptr_t)_2190 + (uintptr_t)HIGH_BITS) >= 0){
            _2190 = NewDouble((eudouble)_2190);
        }
    }
    else {
        _2190 = NewDouble(DBL_PTR(_2188)->dbl + (eudouble)_2189);
    }
    DeRef(_2188);
    _2188 = NOVALUE;
    _2189 = NOVALUE;
    // SubProg isLeap pc: 90 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_4380

// block var ly_4381
    DeRefDSi(_ly_4381);
    return _2190;
    // SubProg isLeap pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 4378 op: 159
    // SubProg isLeap pc: 95 op: BADRETURNF (43)
    ;
}


object _19daysInMonth(object _year_4405, object _month_4406)
{
    object _2198 = NOVALUE; // 4417 2198
    object _2197 = NOVALUE; // 4416 2197
    object _2196 = NOVALUE; // 4415 2196
    object _2195 = NOVALUE; // 4413 2195
// skipping _2194  name type: 0
    object _2193 = NOVALUE; // 4410 2193
    object _2192 = NOVALUE; // 4409 2192
    object _2191 = NOVALUE; // 4408 2191
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg daysInMonth pc: 1 op: INTEGER_CHECK (96)
    // SubProg daysInMonth pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_month_4406)) {
        _1 = (object)(DBL_PTR(_month_4406)->dbl);
        DeRefDS(_month_4406);
        _month_4406 = _1;
    }
    // SubProg daysInMonth pc: 5 op: STARTLINE (58)

    /** datetime.e:101		if year = Gregorian_Reformation and month = 9 then*/
    // SubProg daysInMonth pc: 7 op: EQUALS (3)
    _2191 = (_year_4405 == 1752);
    // SubProg daysInMonth pc: 11 op: SC1_AND_IF (146)
    if (_2191 == 0) {
        goto L1; // [11] 32
    }
    // SubProg daysInMonth pc: 15 op: EQUALS (3)
    _2193 = (_month_4406 == 9);
    // SubProg daysInMonth pc: 19 op: NOP1 (159)
    // SubProg daysInMonth pc: 20 op: IF (20)
    if (_2193 == 0)
    {
        DeRef(_2193);
        _2193 = NOVALUE;
        goto L1; // [20] 32
    }
    else{
        DeRef(_2193);
        _2193 = NOVALUE;
    }
    // SubProg daysInMonth pc: 23 op: STARTLINE (58)

    /** datetime.e:102			return 19*/
    // SubProg daysInMonth pc: 25 op: RETURNF (28)

// Exiting block BLOCK: daysInMonth

// block var year_4405

// block var month_4406
    DeRef(_2191);
    _2191 = NOVALUE;
    return 19;
    // SubProg daysInMonth pc: 29 op: ELSE (23)
    goto L2; // [29] 70
    // SubProg daysInMonth pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 4403 op: 159
    // SubProg daysInMonth pc: 32 op: STARTLINE (58)

    /** datetime.e:103		elsif month != 2 then*/
    // SubProg daysInMonth pc: 34 op: NOTEQ_IFW_I (122)
    if (_month_4406 == 2)
    goto L3; // [34] 51
    // SubProg daysInMonth pc: 38 op: STARTLINE (58)

    /** datetime.e:104			return DaysPerMonth[month]*/
    // SubProg daysInMonth pc: 40 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_19DaysPerMonth_4363);
    _2195 = (object)*(((s1_ptr)_2)->base + _month_4406);
    // SubProg daysInMonth pc: 44 op: RETURNF (28)
    Ref(_2195);

// Exiting block BLOCK: daysInMonth

// block var year_4405

// block var month_4406
    DeRef(_2191);
    _2191 = NOVALUE;
    return _2195;
    // SubProg daysInMonth pc: 48 op: ELSE (23)
    goto L2; // [48] 70
    // SubProg daysInMonth pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 4403 op: 159
    // SubProg daysInMonth pc: 51 op: STARTLINE (58)

    /** datetime.e:106			return DaysPerMonth[month] + isLeap(year)*/
    // SubProg daysInMonth pc: 53 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_19DaysPerMonth_4363);
    _2196 = (object)*(((s1_ptr)_2)->base + _month_4406);
    // SubProg daysInMonth pc: 57 op: PROC (27)
    _2197 = _19isLeap(_year_4405);
    // SubProg daysInMonth pc: 61 op: PLUS (11)
    if (IS_ATOM_INT(_2196) && IS_ATOM_INT(_2197)) {
        _2198 = _2196 + _2197;
        if ((object)((uintptr_t)_2198 + (uintptr_t)HIGH_BITS) >= 0){
            _2198 = NewDouble((eudouble)_2198);
        }
    }
    else {
        _2198 = binary_op(PLUS, _2196, _2197);
    }
    _2196 = NOVALUE;
    DeRef(_2197);
    _2197 = NOVALUE;
    // SubProg daysInMonth pc: 65 op: RETURNF (28)

// Exiting block BLOCK: daysInMonth

// block var year_4405

// block var month_4406
    DeRef(_2191);
    _2191 = NOVALUE;
    _2195 = NOVALUE;
    return _2198;
    // SubProg daysInMonth pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 4403 op: 159
    // SubProg daysInMonth pc: 70 op: BADRETURNF (43)
    ;
}


object _19julianDayOfYear(object _ymd_4429)
{
    object _year_4430 = NOVALUE;
    object _month_4431 = NOVALUE;
    object _day_4432 = NOVALUE;
    object _d_4433 = NOVALUE;
// skipping _2217  name type: 0
// skipping _2216  name type: 0
// skipping _2215  name type: 0
    object _2214 = NOVALUE; // 4448 2214
    object _2213 = NOVALUE; // 4447 2213
    object _2212 = NOVALUE; // 4446 2212
// skipping _2211  name type: 0
// skipping _2210  name type: 0
    object _2209 = NOVALUE; // 4442 2209
    object _2208 = NOVALUE; // 4441 2208
// skipping _2207  name type: 0
// skipping _2206  name type: 0
// skipping _2205  name type: 0
// skipping _2204  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg julianDayOfYear pc: 1 op: STARTLINE (58)

    /** datetime.e:124		year = ymd[1]*/
    // SubProg julianDayOfYear pc: 3 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_4429);
    _year_4430 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_4430)){
        _year_4430 = (object)DBL_PTR(_year_4430)->dbl;
    }
    // SubProg julianDayOfYear pc: 9 op: STARTLINE (58)

    /** datetime.e:125		month = ymd[2]*/
    // SubProg julianDayOfYear pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_4429);
    _month_4431 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_month_4431)){
        _month_4431 = (object)DBL_PTR(_month_4431)->dbl;
    }
    // SubProg julianDayOfYear pc: 17 op: STARTLINE (58)

    /** datetime.e:126		day = ymd[3]*/
    // SubProg julianDayOfYear pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_4429);
    _day_4432 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_day_4432)){
        _day_4432 = (object)DBL_PTR(_day_4432)->dbl;
    }
    // SubProg julianDayOfYear pc: 25 op: STARTLINE (58)

    /** datetime.e:128		if month = 1 then return day end if*/
    // SubProg julianDayOfYear pc: 27 op: EQUALS_IFW_I (121)
    if (_month_4431 != 1)
    goto L1; // [27] 36
    // SubProg julianDayOfYear pc: 31 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_4429
    DeRef(_ymd_4429);

// block var year_4430

// block var month_4431

// block var d_4433
    return _day_4432;
    // SubProg julianDayOfYear pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 4427 op: 159
    // SubProg julianDayOfYear pc: 36 op: STARTLINE (58)

    /** datetime.e:130		d = 0*/
    // SubProg julianDayOfYear pc: 38 op: ASSIGN_I (113)
    _d_4433 = 0;
    // SubProg julianDayOfYear pc: 41 op: STARTLINE (58)

    /** datetime.e:131		for i = 1 to month - 1 do*/
    // SubProg julianDayOfYear pc: 43 op: MINUS (10)
    _2208 = _month_4431 - 1;
    if ((object)((uintptr_t)_2208 +(uintptr_t) HIGH_BITS) >= 0){
        _2208 = NewDouble((eudouble)_2208);
    }
    // SubProg julianDayOfYear pc: 47 op: FOR (21)
    {
        object _i_4440;
        _i_4440 = 1;
L2: // addr: 54 pc: 47 sub: 4427 op: 21
        if (binary_op_a(GREATER, _i_4440, _2208)){
            goto L3; // [47] 74
        }
        // SubProg julianDayOfYear pc: 54 op: STARTLINE (58)

        /** datetime.e:132			d += daysInMonth(year, i)*/
        // SubProg julianDayOfYear pc: 56 op: PROC (27)
        Ref(_i_4440);
        _2209 = _19daysInMonth(_year_4430, _i_4440);
        // SubProg julianDayOfYear pc: 61 op: PLUS (11)
        if (IS_ATOM_INT(_2209)) {
            _d_4433 = _d_4433 + _2209;
        }
        else {
            _d_4433 = binary_op(PLUS, _d_4433, _2209);
        }
        DeRef(_2209);
        _2209 = NOVALUE;
        // SubProg julianDayOfYear pc: 65 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_4433)) {
            _1 = (object)(DBL_PTR(_d_4433)->dbl);
            DeRefDS(_d_4433);
            _d_4433 = _1;
        }
        // SubProg julianDayOfYear pc: 67 op: STARTLINE (58)

        /** datetime.e:133		end for*/
        // SubProg julianDayOfYear pc: 69 op: ENDFOR_INT_UP1 (54)
        _0 = _i_4440;
        if (IS_ATOM_INT(_i_4440)) {
            _i_4440 = _i_4440 + 1;
            if ((object)((uintptr_t)_i_4440 +(uintptr_t) HIGH_BITS) >= 0){
                _i_4440 = NewDouble((eudouble)_i_4440);
            }
        }
        else {
            _i_4440 = binary_op_a(PLUS, _i_4440, 1);
        }
        DeRef(_0);
        goto L2; // [69] 54
L3: // addr: 74 pc: 69 sub: 4427 op: 54
        ;
        DeRef(_i_4440);
    }
    // SubProg julianDayOfYear pc: 74 op: STARTLINE (58)

    /** datetime.e:135		d += day*/
    // SubProg julianDayOfYear pc: 76 op: PLUS_I (115)
    _d_4433 = _d_4433 + _day_4432;
    // SubProg julianDayOfYear pc: 80 op: STARTLINE (58)

    /** datetime.e:137		if year = Gregorian_Reformation and month = 9 then*/
    // SubProg julianDayOfYear pc: 82 op: EQUALS (3)
    _2212 = (_year_4430 == 1752);
    // SubProg julianDayOfYear pc: 86 op: SC1_AND_IF (146)
    if (_2212 == 0) {
        goto L4; // [86] 128
    }
    // SubProg julianDayOfYear pc: 90 op: EQUALS (3)
    _2214 = (_month_4431 == 9);
    // SubProg julianDayOfYear pc: 94 op: NOP1 (159)
    // SubProg julianDayOfYear pc: 95 op: IF (20)
    if (_2214 == 0)
    {
        DeRef(_2214);
        _2214 = NOVALUE;
        goto L4; // [95] 128
    }
    else{
        DeRef(_2214);
        _2214 = NOVALUE;
    }
    // SubProg julianDayOfYear pc: 98 op: STARTLINE (58)

    /** datetime.e:138			if day > 13 then*/
    // SubProg julianDayOfYear pc: 100 op: GREATER_IFW_I (124)
    if (_day_4432 <= 13)
    goto L5; // [100] 113
    // SubProg julianDayOfYear pc: 104 op: STARTLINE (58)

    /** datetime.e:139				d -= 11*/
    // SubProg julianDayOfYear pc: 106 op: MINUS_I (116)
    _d_4433 = _d_4433 - 11;
    // SubProg julianDayOfYear pc: 110 op: ELSE (23)
    goto L6; // [110] 127
    // SubProg julianDayOfYear pc: 112 op: NOP1 (159)
L5: // addr: 113 pc: 112 sub: 4427 op: 159
    // SubProg julianDayOfYear pc: 113 op: STARTLINE (58)

    /** datetime.e:140			elsif day > 2 then*/
    // SubProg julianDayOfYear pc: 115 op: GREATER_IFW_I (124)
    if (_day_4432 <= 2)
    goto L7; // [115] 126
    // SubProg julianDayOfYear pc: 119 op: STARTLINE (58)

    /** datetime.e:141				return 0*/
    // SubProg julianDayOfYear pc: 121 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_4429
    DeRef(_ymd_4429);

// block var year_4430

// block var month_4431

// block var day_4432

// block var d_4433
    DeRef(_2212);
    _2212 = NOVALUE;
    DeRef(_2208);
    _2208 = NOVALUE;
    return 0;
    // SubProg julianDayOfYear pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 4427 op: 159
    // SubProg julianDayOfYear pc: 126 op: NOP1 (159)
L6: // addr: 127 pc: 126 sub: 4427 op: 159
    // SubProg julianDayOfYear pc: 127 op: NOP1 (159)
L4: // addr: 128 pc: 127 sub: 4427 op: 159
    // SubProg julianDayOfYear pc: 128 op: STARTLINE (58)

    /** datetime.e:145		return d*/
    // SubProg julianDayOfYear pc: 130 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_4429
    DeRef(_ymd_4429);

// block var year_4430

// block var month_4431

// block var day_4432
    DeRef(_2212);
    _2212 = NOVALUE;
    DeRef(_2208);
    _2208 = NOVALUE;
    return _d_4433;
    // SubProg julianDayOfYear pc: 134 op: BADRETURNF (43)
    ;
}


object _19julianDay(object _ymd_4456)
{
    object _year_4457 = NOVALUE;
    object _j_4458 = NOVALUE;
    object _greg00_4459 = NOVALUE;
// skipping _2244  name type: 0
    object _2243 = NOVALUE; // 4487 2243
// skipping _2242  name type: 0
// skipping _2241  name type: 0
    object _2240 = NOVALUE; // 4483 2240
// skipping _2239  name type: 0
// skipping _2238  name type: 0
    object _2237 = NOVALUE; // 4479 2237
    object _2236 = NOVALUE; // 4478 2236
    object _2235 = NOVALUE; // 4477 2235
    object _2234 = NOVALUE; // 4476 2234
    object _2233 = NOVALUE; // 4475 2233
    object _2232 = NOVALUE; // 4474 2232
    object _2231 = NOVALUE; // 4473 2231
    object _2230 = NOVALUE; // 4472 2230
    object _2228 = NOVALUE; // 4470 2228
    object _2227 = NOVALUE; // 4469 2227
    object _2226 = NOVALUE; // 4468 2226
    object _2225 = NOVALUE; // 4467 2225
    object _2224 = NOVALUE; // 4466 2224
    object _2223 = NOVALUE; // 4465 2223
    object _2222 = NOVALUE; // 4464 2222
// skipping _2221  name type: 0
// skipping _2220  name type: 0
// skipping _2219  name type: 0
// skipping _2218  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg julianDay pc: 1 op: STARTLINE (58)

    /** datetime.e:152		year = ymd[1]*/
    // SubProg julianDay pc: 3 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_4456);
    _year_4457 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_4457)){
        _year_4457 = (object)DBL_PTR(_year_4457)->dbl;
    }
    // SubProg julianDay pc: 9 op: STARTLINE (58)

    /** datetime.e:153		j = julianDayOfYear(ymd)*/
    // SubProg julianDay pc: 11 op: PROC (27)
    Ref(_ymd_4456);
    _j_4458 = _19julianDayOfYear(_ymd_4456);
    // SubProg julianDay pc: 15 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_4458)) {
        _1 = (object)(DBL_PTR(_j_4458)->dbl);
        DeRefDS(_j_4458);
        _j_4458 = _1;
    }
    // SubProg julianDay pc: 17 op: STARTLINE (58)

    /** datetime.e:155		year  -= 1*/
    // SubProg julianDay pc: 19 op: MINUS_I (116)
    _year_4457 = _year_4457 - 1;
    // SubProg julianDay pc: 23 op: STARTLINE (58)

    /** datetime.e:156		greg00 = year - Gregorian_Reformation00*/
    // SubProg julianDay pc: 25 op: MINUS_I (116)
    _greg00_4459 = _year_4457 - 1700;
    // SubProg julianDay pc: 29 op: STARTLINE (58)

    /** datetime.e:158		j += (*/
    // SubProg julianDay pc: 31 op: MULTIPLY (13)
    if (_year_4457 <= INT15 && _year_4457 >= -INT15){
        _2222 = 365 * _year_4457;
    }
    else{
        _2222 = NewDouble(365 * (eudouble)_year_4457);
    }
    // SubProg julianDay pc: 35 op: FLOOR_DIV (63)
    if (4 > 0 && _year_4457 >= 0) {
        _2223 = _year_4457 / 4;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_4457 / (eudouble)4);
        _2223 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 39 op: PLUS (11)
    if (IS_ATOM_INT(_2222)) {
        _2224 = _2222 + _2223;
        if ((object)((uintptr_t)_2224 + (uintptr_t)HIGH_BITS) >= 0){
            _2224 = NewDouble((eudouble)_2224);
        }
    }
    else {
        _2224 = NewDouble(DBL_PTR(_2222)->dbl + (eudouble)_2223);
    }
    DeRef(_2222);
    _2222 = NOVALUE;
    _2223 = NOVALUE;
    // SubProg julianDay pc: 43 op: GREATER (6)
    _2225 = (_greg00_4459 > 0);
    // SubProg julianDay pc: 47 op: FLOOR_DIV (63)
    if (100 > 0 && _greg00_4459 >= 0) {
        _2226 = _greg00_4459 / 100;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_greg00_4459 / (eudouble)100);
        _2226 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 51 op: UMINUS (12)
    _2227 = - _2226;
    // SubProg julianDay pc: 54 op: DIVIDE (14)
    _2228 = (_greg00_4459 % 400) ? NewDouble((eudouble)_greg00_4459 / 400) : (_greg00_4459 / 400);
    // SubProg julianDay pc: 58 op: PLUS (11)
    if (IS_ATOM_INT(_2228)) {
        _2230 = NewDouble((eudouble)_2228 + DBL_PTR(_2229)->dbl);
    }
    else {
        _2230 = NewDouble(DBL_PTR(_2228)->dbl + DBL_PTR(_2229)->dbl);
    }
    DeRef(_2228);
    _2228 = NOVALUE;
    // SubProg julianDay pc: 62 op: FLOOR (83)
    _2231 = unary_op(FLOOR, _2230);
    DeRefDS(_2230);
    _2230 = NOVALUE;
    // SubProg julianDay pc: 65 op: PLUS (11)
    if (IS_ATOM_INT(_2231)) {
        _2232 = _2227 + _2231;
        if ((object)((uintptr_t)_2232 + (uintptr_t)HIGH_BITS) >= 0){
            _2232 = NewDouble((eudouble)_2232);
        }
    }
    else {
        _2232 = binary_op(PLUS, _2227, _2231);
    }
    _2227 = NOVALUE;
    DeRef(_2231);
    _2231 = NOVALUE;
    // SubProg julianDay pc: 69 op: MULTIPLY (13)
    if (IS_ATOM_INT(_2232)) {
        if (_2232 <= INT15 && _2232 >= -INT15){
            _2233 = _2225 * _2232;
        }
        else{
            _2233 = NewDouble(_2225 * (eudouble)_2232);
        }
    }
    else {
        _2233 = binary_op(MULTIPLY, _2225, _2232);
    }
    _2225 = NOVALUE;
    DeRef(_2232);
    _2232 = NOVALUE;
    // SubProg julianDay pc: 73 op: PLUS (11)
    if (IS_ATOM_INT(_2224) && IS_ATOM_INT(_2233)) {
        _2234 = _2224 + _2233;
        if ((object)((uintptr_t)_2234 + (uintptr_t)HIGH_BITS) >= 0){
            _2234 = NewDouble((eudouble)_2234);
        }
    }
    else {
        _2234 = binary_op(PLUS, _2224, _2233);
    }
    DeRef(_2224);
    _2224 = NOVALUE;
    DeRef(_2233);
    _2233 = NOVALUE;
    // SubProg julianDay pc: 77 op: GREATEREQ (2)
    _2235 = (_year_4457 >= 1752);
    // SubProg julianDay pc: 81 op: MULTIPLY (13)
    _2236 = 11 * _2235;
    _2235 = NOVALUE;
    // SubProg julianDay pc: 85 op: MINUS (10)
    if (IS_ATOM_INT(_2234)) {
        _2237 = _2234 - _2236;
        if ((object)((uintptr_t)_2237 +(uintptr_t) HIGH_BITS) >= 0){
            _2237 = NewDouble((eudouble)_2237);
        }
    }
    else {
        _2237 = binary_op(MINUS, _2234, _2236);
    }
    DeRef(_2234);
    _2234 = NOVALUE;
    _2236 = NOVALUE;
    // SubProg julianDay pc: 89 op: PLUS (11)
    if (IS_ATOM_INT(_2237)) {
        _j_4458 = _j_4458 + _2237;
    }
    else {
        _j_4458 = binary_op(PLUS, _j_4458, _2237);
    }
    DeRef(_2237);
    _2237 = NOVALUE;
    // SubProg julianDay pc: 93 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_4458)) {
        _1 = (object)(DBL_PTR(_j_4458)->dbl);
        DeRefDS(_j_4458);
        _j_4458 = _1;
    }
    // SubProg julianDay pc: 95 op: STARTLINE (58)

    /** datetime.e:169		if year >= 3200 then*/
    // SubProg julianDay pc: 97 op: GREATEREQ_IFW_I (120)
    if (_year_4457 < 3200)
    goto L1; // [97] 133
    // SubProg julianDay pc: 101 op: STARTLINE (58)

    /** datetime.e:170			j -= floor(year/ 3200)*/
    // SubProg julianDay pc: 103 op: FLOOR_DIV (63)
    if (3200 > 0 && _year_4457 >= 0) {
        _2240 = _year_4457 / 3200;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_4457 / (eudouble)3200);
        _2240 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 107 op: MINUS (10)
    _j_4458 = _j_4458 - _2240;
    _2240 = NOVALUE;
    // SubProg julianDay pc: 113 op: STARTLINE (58)

    /** datetime.e:171			if year >= 80000 then*/
    // SubProg julianDay pc: 115 op: GREATEREQ_IFW_I (120)
    if (_year_4457 < 80000)
    goto L2; // [115] 132
    // SubProg julianDay pc: 119 op: STARTLINE (58)

    /** datetime.e:172				j += floor(year/80000)*/
    // SubProg julianDay pc: 121 op: FLOOR_DIV (63)
    if (80000 > 0 && _year_4457 >= 0) {
        _2243 = _year_4457 / 80000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_4457 / (eudouble)80000);
        _2243 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 125 op: PLUS (11)
    _j_4458 = _j_4458 + _2243;
    _2243 = NOVALUE;
    // SubProg julianDay pc: 131 op: NOP1 (159)
L2: // addr: 132 pc: 131 sub: 4454 op: 159
    // SubProg julianDay pc: 132 op: NOP1 (159)
L1: // addr: 133 pc: 132 sub: 4454 op: 159
    // SubProg julianDay pc: 133 op: STARTLINE (58)

    /** datetime.e:176		return j*/
    // SubProg julianDay pc: 135 op: RETURNF (28)

// Exiting block BLOCK: julianDay

// block var ymd_4456
    DeRef(_ymd_4456);

// block var year_4457

// block var greg00_4459
    DeRef(_2226);
    _2226 = NOVALUE;
    return _j_4458;
    // SubProg julianDay pc: 139 op: BADRETURNF (43)
    ;
}


object _19datetimeToSeconds(object _dt_4545)
{
    object _2287 = NOVALUE; // 4556 2287
    object _2286 = NOVALUE; // 4555 2286
    object _2285 = NOVALUE; // 4554 2285
    object _2284 = NOVALUE; // 4553 2284
    object _2283 = NOVALUE; // 4552 2283
    object _2282 = NOVALUE; // 4551 2282
    object _2281 = NOVALUE; // 4550 2281
    object _2279 = NOVALUE; // 4548 2279
    object _2278 = NOVALUE; // 4547 2278
    object _2277 = NOVALUE; // 4546 2277
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg datetimeToSeconds pc: 1 op: STARTLINE (58)

    /** datetime.e:226		return julianDay(dt) * DayLengthInSeconds + (dt[4] * 60 + dt[5]) * 60 + dt[6]*/
    // SubProg datetimeToSeconds pc: 3 op: PROC (27)
    Ref(_dt_4545);
    _2277 = _19julianDay(_dt_4545);
    // SubProg datetimeToSeconds pc: 7 op: MULTIPLY (13)
    if (IS_ATOM_INT(_2277)) {
        _2278 = NewDouble(_2277 * (eudouble)86400);
    }
    else {
        _2278 = binary_op(MULTIPLY, _2277, 86400);
    }
    DeRef(_2277);
    _2277 = NOVALUE;
    // SubProg datetimeToSeconds pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_4545);
    _2279 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg datetimeToSeconds pc: 15 op: MULTIPLY (13)
    if (IS_ATOM_INT(_2279)) {
        if (_2279 == (short)_2279){
            _2281 = _2279 * 60;
        }
        else{
            _2281 = NewDouble(_2279 * (eudouble)60);
        }
    }
    else {
        _2281 = binary_op(MULTIPLY, _2279, 60);
    }
    _2279 = NOVALUE;
    // SubProg datetimeToSeconds pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_4545);
    _2282 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg datetimeToSeconds pc: 23 op: PLUS (11)
    if (IS_ATOM_INT(_2281) && IS_ATOM_INT(_2282)) {
        _2283 = _2281 + _2282;
        if ((object)((uintptr_t)_2283 + (uintptr_t)HIGH_BITS) >= 0){
            _2283 = NewDouble((eudouble)_2283);
        }
    }
    else {
        _2283 = binary_op(PLUS, _2281, _2282);
    }
    DeRef(_2281);
    _2281 = NOVALUE;
    _2282 = NOVALUE;
    // SubProg datetimeToSeconds pc: 27 op: MULTIPLY (13)
    if (IS_ATOM_INT(_2283)) {
        if (_2283 == (short)_2283){
            _2284 = _2283 * 60;
        }
        else{
            _2284 = NewDouble(_2283 * (eudouble)60);
        }
    }
    else {
        _2284 = binary_op(MULTIPLY, _2283, 60);
    }
    DeRef(_2283);
    _2283 = NOVALUE;
    // SubProg datetimeToSeconds pc: 31 op: PLUS (11)
    if (IS_ATOM_INT(_2278) && IS_ATOM_INT(_2284)) {
        _2285 = _2278 + _2284;
        if ((object)((uintptr_t)_2285 + (uintptr_t)HIGH_BITS) >= 0){
            _2285 = NewDouble((eudouble)_2285);
        }
    }
    else {
        _2285 = binary_op(PLUS, _2278, _2284);
    }
    DeRef(_2278);
    _2278 = NOVALUE;
    DeRef(_2284);
    _2284 = NOVALUE;
    // SubProg datetimeToSeconds pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_4545);
    _2286 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg datetimeToSeconds pc: 39 op: PLUS (11)
    if (IS_ATOM_INT(_2285) && IS_ATOM_INT(_2286)) {
        _2287 = _2285 + _2286;
        if ((object)((uintptr_t)_2287 + (uintptr_t)HIGH_BITS) >= 0){
            _2287 = NewDouble((eudouble)_2287);
        }
    }
    else {
        _2287 = binary_op(PLUS, _2285, _2286);
    }
    DeRef(_2285);
    _2285 = NOVALUE;
    _2286 = NOVALUE;
    // SubProg datetimeToSeconds pc: 43 op: RETURNF (28)

// Exiting block BLOCK: datetimeToSeconds

// block var dt_4545
    DeRef(_dt_4545);
    return _2287;
    // SubProg datetimeToSeconds pc: 47 op: BADRETURNF (43)
    ;
}


object _19from_date(object _src_4712)
{
    object _2402 = NOVALUE; // 4721 2402
    object _2401 = NOVALUE; // 4720 2401
    object _2400 = NOVALUE; // 4719 2400
    object _2399 = NOVALUE; // 4718 2399
    object _2398 = NOVALUE; // 4717 2398
    object _2397 = NOVALUE; // 4716 2397
    object _2396 = NOVALUE; // 4715 2396
    object _2394 = NOVALUE; // 4713 2394
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg from_date pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg from_date pc: 3 op: STARTLINE (58)

    /** datetime.e:513		return {src[YEAR]+1900, src[MONTH], src[DAY], src[HOUR], src[MINUTE], src[SECOND]}*/
    // SubProg from_date pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_4712);
    _2394 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg from_date pc: 9 op: PLUS (11)
    _2396 = _2394 + 1900;
    if ((object)((uintptr_t)_2396 + (uintptr_t)HIGH_BITS) >= 0){
        _2396 = NewDouble((eudouble)_2396);
    }
    _2394 = NOVALUE;
    // SubProg from_date pc: 13 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_4712);
    _2397 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg from_date pc: 17 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_4712);
    _2398 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg from_date pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_4712);
    _2399 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg from_date pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_4712);
    _2400 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg from_date pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_4712);
    _2401 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg from_date pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _2396;
    ((intptr_t*)_2)[2] = _2397;
    ((intptr_t*)_2)[3] = _2398;
    ((intptr_t*)_2)[4] = _2399;
    ((intptr_t*)_2)[5] = _2400;
    ((intptr_t*)_2)[6] = _2401;
    _2402 = MAKE_SEQ(_1);
    _2401 = NOVALUE;
    _2400 = NOVALUE;
    _2399 = NOVALUE;
    _2398 = NOVALUE;
    _2397 = NOVALUE;
    _2396 = NOVALUE;
    // SubProg from_date pc: 42 op: RETURNF (28)

// Exiting block BLOCK: from_date

// block var src_4712
    DeRefDSi(_src_4712);
    return _2402;
    // SubProg from_date pc: 46 op: BADRETURNF (43)
    ;
}


object _19new(object _year_4744, object _month_4745, object _day_4746, object _hour_4747, object _minute_4748, object _second_4749)
{
    object _d_4750 = NOVALUE;
    object _now_1__tmp_at41_4757 = NOVALUE;
    object _now_inlined_now_at_41_4756 = NOVALUE;
    object _2417 = NOVALUE; // 4754 2417
    object _2416 = NOVALUE; // 4753 2416
// skipping _2415  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_year_4744)) {
        _1 = (object)(DBL_PTR(_year_4744)->dbl);
        DeRefDS(_year_4744);
        _year_4744 = _1;
    }
    // SubProg new pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_month_4745)) {
        _1 = (object)(DBL_PTR(_month_4745)->dbl);
        DeRefDS(_month_4745);
        _month_4745 = _1;
    }
    // SubProg new pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_day_4746)) {
        _1 = (object)(DBL_PTR(_day_4746)->dbl);
        DeRefDS(_day_4746);
        _day_4746 = _1;
    }
    // SubProg new pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_hour_4747)) {
        _1 = (object)(DBL_PTR(_hour_4747)->dbl);
        DeRefDS(_hour_4747);
        _hour_4747 = _1;
    }
    // SubProg new pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_minute_4748)) {
        _1 = (object)(DBL_PTR(_minute_4748)->dbl);
        DeRefDS(_minute_4748);
        _minute_4748 = _1;
    }
    // SubProg new pc: 11 op: STARTLINE (58)

    /** datetime.e:587		d = {year, month, day, hour, minute, second}*/
    // SubProg new pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _d_4750;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _year_4744;
    ((intptr_t*)_2)[2] = _month_4745;
    ((intptr_t*)_2)[3] = _day_4746;
    ((intptr_t*)_2)[4] = _hour_4747;
    ((intptr_t*)_2)[5] = _minute_4748;
    Ref(_second_4749);
    ((intptr_t*)_2)[6] = _second_4749;
    _d_4750 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg new pc: 22 op: STARTLINE (58)

    /** datetime.e:588		if equal(d, {0,0,0,0,0,0}) then*/
    // SubProg new pc: 24 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 0;
    _2416 = MAKE_SEQ(_1);
    // SubProg new pc: 33 op: EQUAL (153)
    if (_d_4750 == _2416)
    _2417 = 1;
    else if (IS_ATOM_INT(_d_4750) && IS_ATOM_INT(_2416))
    _2417 = 0;
    else
    _2417 = (compare(_d_4750, _2416) == 0);
    DeRefDS(_2416);
    _2416 = NOVALUE;
    // SubProg new pc: 37 op: IF (20)
    if (_2417 == 0)
    {
        _2417 = NOVALUE;
        goto L1; // [37] 60
    }
    else{
        _2417 = NOVALUE;
    }
    // SubProg new pc: 40 op: STARTLINE (58)

    /** datetime.e:589			return now()*/
    // SubProg new pc: 42 op: STARTLINE (58)

    /** datetime.e:533		return from_date(date())*/
    // SubProg new pc: 44 op: DATE (69)
    DeRefi(_now_1__tmp_at41_4757);
    _now_1__tmp_at41_4757 = Date();
    // SubProg new pc: 46 op: PROC (27)
    RefDS(_now_1__tmp_at41_4757);
    _0 = _now_inlined_now_at_41_4756;
    _now_inlined_now_at_41_4756 = _19from_date(_now_1__tmp_at41_4757);
    DeRef(_0);
    // SubProg new pc: 50 op: NOP1 (159)
    // SubProg new pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-now from new @ 41

// block var now_1__tmp_at41_4757
    DeRefi(_now_1__tmp_at41_4757);
    _now_1__tmp_at41_4757 = NOVALUE;
    // SubProg new pc: 53 op: RETURNF (28)

// Exiting block BLOCK: new

// block var year_4744

// block var month_4745

// block var day_4746

// block var hour_4747

// block var minute_4748

// block var second_4749
    DeRef(_second_4749);

// block var d_4750
    DeRef(_d_4750);
    return _now_inlined_now_at_41_4756;
    // SubProg new pc: 57 op: ELSE (23)
    goto L2; // [57] 67
    // SubProg new pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 4742 op: 159
    // SubProg new pc: 60 op: STARTLINE (58)

    /** datetime.e:591			return d*/
    // SubProg new pc: 62 op: RETURNF (28)

// Exiting block BLOCK: new

// block var year_4744

// block var month_4745

// block var day_4746

// block var hour_4747

// block var minute_4748

// block var second_4749
    DeRef(_second_4749);
    return _d_4750;
    // SubProg new pc: 66 op: NOP1 (159)
L2: // addr: 67 pc: 66 sub: 4742 op: 159
    // SubProg new pc: 67 op: BADRETURNF (43)
    ;
}



// 0x44D1B989
