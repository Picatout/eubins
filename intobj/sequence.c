// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _24reverse(object _target_4064, object _pFrom_4065, object _pTo_4066)
{
    object _uppr_4067 = NOVALUE;
    object _n_4068 = NOVALUE;
    object _lLimit_4069 = NOVALUE;
    object _t_4070 = NOVALUE;
// skipping _1949  name type: 0
    object _1948 = NOVALUE; // 4092 1948
    object _1947 = NOVALUE; // 4091 1947
    object _1946 = NOVALUE; // 4090 1946
// skipping _1945  name type: 0
    object _1944 = NOVALUE; // 4086 1944
    object _1943 = NOVALUE; // 4085 1943
// skipping _1942  name type: 0
    object _1941 = NOVALUE; // 4082 1941
// skipping _1940  name type: 0
    object _1939 = NOVALUE; // 4080 1939
// skipping _1938  name type: 0
// skipping _1937  name type: 0
// skipping _1936  name type: 0
// skipping _1935  name type: 0
// skipping _1934  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reverse pc: 1 op: INTEGER_CHECK (96)
    // SubProg reverse pc: 3 op: INTEGER_CHECK (96)
    // SubProg reverse pc: 5 op: STARTLINE (58)

    /** sequence.e:549		n = length(target)*/
    // SubProg reverse pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_target_4064)){
            _n_4068 = SEQ_PTR(_target_4064)->length;
    }
    else {
        _n_4068 = 1;
    }
    // SubProg reverse pc: 10 op: STARTLINE (58)

    /** sequence.e:550		if n < 2 then*/
    // SubProg reverse pc: 12 op: LESS_IFW_I (119)
    if (_n_4068 >= 2)
    goto L1; // [12] 23
    // SubProg reverse pc: 16 op: STARTLINE (58)

    /** sequence.e:551			return target*/
    // SubProg reverse pc: 18 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var pFrom_4065

// block var pTo_4066

// block var uppr_4067

// block var n_4068

// block var lLimit_4069

// block var t_4070
    DeRef(_t_4070);
    return _target_4064;
    // SubProg reverse pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 4062 op: 159
    // SubProg reverse pc: 23 op: STARTLINE (58)

    /** sequence.e:553		if pFrom < 1 then*/
    // SubProg reverse pc: 25 op: LESS_IFW_I (119)
    if (_pFrom_4065 >= 1)
    goto L2; // [25] 35
    // SubProg reverse pc: 29 op: STARTLINE (58)

    /** sequence.e:554			pFrom = 1*/
    // SubProg reverse pc: 31 op: ASSIGN_I (113)
    _pFrom_4065 = 1;
    // SubProg reverse pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 4062 op: 159
    // SubProg reverse pc: 35 op: STARTLINE (58)

    /** sequence.e:556		if pTo < 1 then*/
    // SubProg reverse pc: 37 op: LESS_IFW_I (119)
    if (_pTo_4066 >= 1)
    goto L3; // [37] 48
    // SubProg reverse pc: 41 op: STARTLINE (58)

    /** sequence.e:557			pTo = n + pTo*/
    // SubProg reverse pc: 43 op: PLUS_I (115)
    _pTo_4066 = _n_4068 + _pTo_4066;
    // SubProg reverse pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 4062 op: 159
    // SubProg reverse pc: 48 op: STARTLINE (58)

    /** sequence.e:559		if pTo < pFrom or pFrom >= n then*/
    // SubProg reverse pc: 50 op: LESS (1)
    _1939 = (_pTo_4066 < _pFrom_4065);
    // SubProg reverse pc: 54 op: SC1_OR_IF (147)
    if (_1939 != 0) {
        goto L4; // [54] 67
    }
    // SubProg reverse pc: 58 op: GREATEREQ (2)
    _1941 = (_pFrom_4065 >= _n_4068);
    // SubProg reverse pc: 62 op: NOP1 (159)
    // SubProg reverse pc: 63 op: IF (20)
    if (_1941 == 0)
    {
        DeRef(_1941);
        _1941 = NOVALUE;
        goto L5; // [63] 74
    }
    else{
        DeRef(_1941);
        _1941 = NOVALUE;
    }
    // SubProg reverse pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 4062 op: 159
    // SubProg reverse pc: 67 op: STARTLINE (58)

    /** sequence.e:560			return target*/
    // SubProg reverse pc: 69 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var pFrom_4065

// block var pTo_4066

// block var uppr_4067

// block var n_4068

// block var lLimit_4069

// block var t_4070
    DeRef(_t_4070);
    DeRef(_1939);
    _1939 = NOVALUE;
    return _target_4064;
    // SubProg reverse pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 4062 op: 159
    // SubProg reverse pc: 74 op: STARTLINE (58)

    /** sequence.e:562		if pTo > n then*/
    // SubProg reverse pc: 76 op: GREATER_IFW_I (124)
    if (_pTo_4066 <= _n_4068)
    goto L6; // [76] 86
    // SubProg reverse pc: 80 op: STARTLINE (58)

    /** sequence.e:563			pTo = n*/
    // SubProg reverse pc: 82 op: ASSIGN_I (113)
    _pTo_4066 = _n_4068;
    // SubProg reverse pc: 85 op: NOP1 (159)
L6: // addr: 86 pc: 85 sub: 4062 op: 159
    // SubProg reverse pc: 86 op: STARTLINE (58)

    /** sequence.e:566		lLimit = floor((pFrom+pTo-1)/2)*/
    // SubProg reverse pc: 88 op: PLUS (11)
    _1943 = _pFrom_4065 + _pTo_4066;
    if ((object)((uintptr_t)_1943 + (uintptr_t)HIGH_BITS) >= 0){
        _1943 = NewDouble((eudouble)_1943);
    }
    // SubProg reverse pc: 92 op: MINUS (10)
    if (IS_ATOM_INT(_1943)) {
        _1944 = _1943 - 1;
        if ((object)((uintptr_t)_1944 +(uintptr_t) HIGH_BITS) >= 0){
            _1944 = NewDouble((eudouble)_1944);
        }
    }
    else {
        _1944 = NewDouble(DBL_PTR(_1943)->dbl - (eudouble)1);
    }
    DeRef(_1943);
    _1943 = NOVALUE;
    // SubProg reverse pc: 96 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_1944)) {
        _lLimit_4069 = _1944 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _1944, 2);
        _lLimit_4069 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_1944);
    _1944 = NOVALUE;
    // SubProg reverse pc: 100 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_lLimit_4069)) {
        _1 = (object)(DBL_PTR(_lLimit_4069)->dbl);
        DeRefDS(_lLimit_4069);
        _lLimit_4069 = _1;
    }
    // SubProg reverse pc: 102 op: STARTLINE (58)

    /** sequence.e:567		t = target*/
    // SubProg reverse pc: 104 op: ASSIGN (18)
    Ref(_target_4064);
    DeRef(_t_4070);
    _t_4070 = _target_4064;
    // SubProg reverse pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg reverse pc: 109 op: STARTLINE (58)

    /** sequence.e:568		uppr = pTo*/
    // SubProg reverse pc: 111 op: ASSIGN_I (113)
    _uppr_4067 = _pTo_4066;
    // SubProg reverse pc: 114 op: STARTLINE (58)

    /** sequence.e:569		for lowr = pFrom to lLimit do*/
    // SubProg reverse pc: 116 op: ASSIGN (18)
    _1946 = _lLimit_4069;
    // SubProg reverse pc: 119 op: FOR_I (125)
    {
        object _lowr_4089;
        _lowr_4089 = _pFrom_4065;
L7: // addr: 126 pc: 119 sub: 4062 op: 125
        if (_lowr_4089 > _1946){
            goto L8; // [119] 159
        }
        // SubProg reverse pc: 126 op: STARTLINE (58)

        /** sequence.e:570			t[uppr] = target[lowr]*/
        // SubProg reverse pc: 128 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_target_4064);
        _1947 = (object)*(((s1_ptr)_2)->base + _lowr_4089);
        // SubProg reverse pc: 132 op: ASSIGN_SUBS (16)
        Ref(_1947);
        _2 = (object)SEQ_PTR(_t_4070);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_4070 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _uppr_4067);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1947;
        if( _1 != _1947 ){
            DeRef(_1);
        }
        _1947 = NOVALUE;
        // SubProg reverse pc: 136 op: STARTLINE (58)

        /** sequence.e:571			t[lowr] = target[uppr]*/
        // SubProg reverse pc: 138 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_target_4064);
        _1948 = (object)*(((s1_ptr)_2)->base + _uppr_4067);
        // SubProg reverse pc: 142 op: ASSIGN_SUBS (16)
        Ref(_1948);
        _2 = (object)SEQ_PTR(_t_4070);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_4070 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lowr_4089);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1948;
        if( _1 != _1948 ){
            DeRef(_1);
        }
        _1948 = NOVALUE;
        // SubProg reverse pc: 146 op: STARTLINE (58)

        /** sequence.e:572			uppr -= 1*/
        // SubProg reverse pc: 148 op: MINUS_I (116)
        _uppr_4067 = _uppr_4067 - 1;
        // SubProg reverse pc: 152 op: STARTLINE (58)

        /** sequence.e:573		end for*/
        // SubProg reverse pc: 154 op: ENDFOR_INT_UP1 (54)
        _lowr_4089 = _lowr_4089 + 1;
        goto L7; // [154] 126
L8: // addr: 159 pc: 154 sub: 4062 op: 54
        ;
    }
    // SubProg reverse pc: 159 op: STARTLINE (58)

    /** sequence.e:574		return t*/
    // SubProg reverse pc: 161 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var target_4064
    DeRef(_target_4064);

// block var pFrom_4065

// block var pTo_4066

// block var uppr_4067

// block var n_4068

// block var lLimit_4069
    DeRef(_1939);
    _1939 = NOVALUE;
    return _t_4070;
    // SubProg reverse pc: 165 op: BADRETURNF (43)
    ;
}


object _24pad_tail(object _target_4164, object _size_4165, object _ch_4166)
{
    object _1984 = NOVALUE; // 4173 1984
    object _1983 = NOVALUE; // 4172 1983
    object _1982 = NOVALUE; // 4171 1982
    object _1981 = NOVALUE; // 4170 1981
// skipping _1980  name type: 0
    object _1979 = NOVALUE; // 4168 1979
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pad_tail pc: 1 op: INTEGER_CHECK (96)
    // SubProg pad_tail pc: 3 op: STARTLINE (58)

    /** sequence.e:1022		if size <= length(target) then*/
    // SubProg pad_tail pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_target_4164)){
            _1979 = SEQ_PTR(_target_4164)->length;
    }
    else {
        _1979 = 1;
    }
    // SubProg pad_tail pc: 8 op: LESSEQ_IFW_I (123)
    if (_size_4165 > _1979)
    goto L1; // [8] 19
    // SubProg pad_tail pc: 12 op: STARTLINE (58)

    /** sequence.e:1023			return target*/
    // SubProg pad_tail pc: 14 op: RETURNF (28)

// Exiting block BLOCK: pad_tail

// block var size_4165

// block var ch_4166
    return _target_4164;
    // SubProg pad_tail pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 4162 op: 159
    // SubProg pad_tail pc: 19 op: STARTLINE (58)

    /** sequence.e:1026		return target & repeat(ch, size - length(target))*/
    // SubProg pad_tail pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_target_4164)){
            _1981 = SEQ_PTR(_target_4164)->length;
    }
    else {
        _1981 = 1;
    }
    // SubProg pad_tail pc: 24 op: MINUS (10)
    _1982 = _size_4165 - _1981;
    _1981 = NOVALUE;
    // SubProg pad_tail pc: 28 op: REPEAT (32)
    _1983 = Repeat(_ch_4166, _1982);
    _1982 = NOVALUE;
    // SubProg pad_tail pc: 32 op: CONCAT (15)
    if (IS_SEQUENCE(_target_4164) && IS_ATOM(_1983)) {
    }
    else if (IS_ATOM(_target_4164) && IS_SEQUENCE(_1983)) {
        Ref(_target_4164);
        Prepend(&_1984, _1983, _target_4164);
    }
    else {
        Concat((object_ptr)&_1984, _target_4164, _1983);
    }
    DeRefDS(_1983);
    _1983 = NOVALUE;
    // SubProg pad_tail pc: 36 op: RETURNF (28)

// Exiting block BLOCK: pad_tail

// block var target_4164
    DeRef(_target_4164);

// block var size_4165

// block var ch_4166
    return _1984;
    // SubProg pad_tail pc: 40 op: BADRETURNF (43)
    ;
}


object _24filter(object _source_4418, object _rid_4419, object _userdata_4420, object _rangetype_4421)
{
    object _dest_4422 = NOVALUE;
    object _idx_4423 = NOVALUE;
    object _2298 = NOVALUE; // 4679 2298
    object _2297 = NOVALUE; // 4678 2297
// skipping _2296  name type: 0
    object _2295 = NOVALUE; // 4676 2295
    object _2294 = NOVALUE; // 4675 2294
    object _2293 = NOVALUE; // 4674 2293
    object _2292 = NOVALUE; // 4672 2292
    object _2291 = NOVALUE; // 4667 2291
// skipping _2290  name type: 0
// skipping _2289  name type: 0
    object _2288 = NOVALUE; // 4664 2288
    object _2287 = NOVALUE; // 4663 2287
    object _2286 = NOVALUE; // 4662 2286
    object _2285 = NOVALUE; // 4660 2285
// skipping _2284  name type: 0
// skipping _2283  name type: 0
    object _2282 = NOVALUE; // 4657 2282
    object _2281 = NOVALUE; // 4656 2281
    object _2280 = NOVALUE; // 4655 2280
    object _2279 = NOVALUE; // 4653 2279
    object _2278 = NOVALUE; // 4649 2278
// skipping _2277  name type: 0
// skipping _2276  name type: 0
    object _2275 = NOVALUE; // 4646 2275
    object _2274 = NOVALUE; // 4645 2274
    object _2273 = NOVALUE; // 4644 2273
    object _2272 = NOVALUE; // 4642 2272
// skipping _2271  name type: 0
// skipping _2270  name type: 0
    object _2269 = NOVALUE; // 4639 2269
    object _2268 = NOVALUE; // 4638 2268
    object _2267 = NOVALUE; // 4637 2267
    object _2266 = NOVALUE; // 4635 2266
    object _2265 = NOVALUE; // 4631 2265
// skipping _2264  name type: 0
// skipping _2263  name type: 0
    object _2262 = NOVALUE; // 4628 2262
    object _2261 = NOVALUE; // 4627 2261
    object _2260 = NOVALUE; // 4626 2260
    object _2259 = NOVALUE; // 4624 2259
// skipping _2258  name type: 0
// skipping _2257  name type: 0
    object _2256 = NOVALUE; // 4621 2256
    object _2255 = NOVALUE; // 4620 2255
    object _2254 = NOVALUE; // 4619 2254
    object _2253 = NOVALUE; // 4617 2253
    object _2252 = NOVALUE; // 4613 2252
// skipping _2251  name type: 0
// skipping _2250  name type: 0
    object _2249 = NOVALUE; // 4610 2249
    object _2248 = NOVALUE; // 4609 2248
    object _2247 = NOVALUE; // 4608 2247
    object _2246 = NOVALUE; // 4606 2246
// skipping _2245  name type: 0
// skipping _2244  name type: 0
    object _2243 = NOVALUE; // 4603 2243
    object _2242 = NOVALUE; // 4602 2242
    object _2241 = NOVALUE; // 4601 2241
    object _2240 = NOVALUE; // 4599 2240
    object _2239 = NOVALUE; // 4595 2239
// skipping _2238  name type: 0
// skipping _2237  name type: 0
    object _2236 = NOVALUE; // 4592 2236
    object _2235 = NOVALUE; // 4591 2235
    object _2234 = NOVALUE; // 4589 2234
    object _2230 = NOVALUE; // 4580 2230
// skipping _2229  name type: 0
// skipping _2228  name type: 0
    object _2227 = NOVALUE; // 4577 2227
    object _2226 = NOVALUE; // 4576 2226
    object _2225 = NOVALUE; // 4575 2225
// skipping _2224  name type: 0
    object _2223 = NOVALUE; // 4572 2223
    object _2222 = NOVALUE; // 4571 2222
    object _2221 = NOVALUE; // 4570 2221
    object _2220 = NOVALUE; // 4568 2220
    object _2219 = NOVALUE; // 4564 2219
// skipping _2218  name type: 0
// skipping _2217  name type: 0
    object _2216 = NOVALUE; // 4561 2216
    object _2215 = NOVALUE; // 4560 2215
    object _2214 = NOVALUE; // 4559 2214
// skipping _2213  name type: 0
    object _2212 = NOVALUE; // 4556 2212
    object _2211 = NOVALUE; // 4555 2211
    object _2210 = NOVALUE; // 4554 2210
    object _2209 = NOVALUE; // 4552 2209
    object _2208 = NOVALUE; // 4548 2208
// skipping _2207  name type: 0
// skipping _2206  name type: 0
    object _2205 = NOVALUE; // 4545 2205
    object _2204 = NOVALUE; // 4544 2204
    object _2203 = NOVALUE; // 4543 2203
// skipping _2202  name type: 0
    object _2201 = NOVALUE; // 4540 2201
    object _2200 = NOVALUE; // 4539 2200
    object _2199 = NOVALUE; // 4538 2199
    object _2198 = NOVALUE; // 4536 2198
    object _2197 = NOVALUE; // 4532 2197
// skipping _2196  name type: 0
// skipping _2195  name type: 0
    object _2194 = NOVALUE; // 4529 2194
    object _2193 = NOVALUE; // 4528 2193
    object _2192 = NOVALUE; // 4527 2192
// skipping _2191  name type: 0
    object _2190 = NOVALUE; // 4524 2190
    object _2189 = NOVALUE; // 4523 2189
    object _2188 = NOVALUE; // 4522 2188
    object _2187 = NOVALUE; // 4520 2187
    object _2186 = NOVALUE; // 4516 2186
// skipping _2185  name type: 0
    object _2184 = NOVALUE; // 4514 2184
    object _2183 = NOVALUE; // 4513 2183
    object _2182 = NOVALUE; // 4511 2182
    object _2178 = NOVALUE; // 4503 2178
// skipping _2177  name type: 0
// skipping _2176  name type: 0
    object _2175 = NOVALUE; // 4500 2175
    object _2174 = NOVALUE; // 4499 2174
    object _2173 = NOVALUE; // 4497 2173
    object _2170 = NOVALUE; // 4491 2170
// skipping _2169  name type: 0
// skipping _2168  name type: 0
    object _2167 = NOVALUE; // 4488 2167
    object _2166 = NOVALUE; // 4487 2166
    object _2165 = NOVALUE; // 4485 2165
    object _2162 = NOVALUE; // 4479 2162
// skipping _2161  name type: 0
// skipping _2160  name type: 0
    object _2159 = NOVALUE; // 4476 2159
    object _2158 = NOVALUE; // 4475 2158
    object _2157 = NOVALUE; // 4473 2157
    object _2154 = NOVALUE; // 4467 2154
// skipping _2153  name type: 0
// skipping _2152  name type: 0
    object _2151 = NOVALUE; // 4464 2151
    object _2150 = NOVALUE; // 4463 2150
    object _2149 = NOVALUE; // 4461 2149
    object _2145 = NOVALUE; // 4454 2145
// skipping _2144  name type: 0
// skipping _2143  name type: 0
    object _2142 = NOVALUE; // 4451 2142
    object _2141 = NOVALUE; // 4450 2141
    object _2140 = NOVALUE; // 4448 2140
    object _2137 = NOVALUE; // 4442 2137
// skipping _2136  name type: 0
// skipping _2135  name type: 0
    object _2134 = NOVALUE; // 4439 2134
    object _2133 = NOVALUE; // 4438 2133
    object _2132 = NOVALUE; // 4436 2132
// skipping _2127  name type: 0
    object _2126 = NOVALUE; // 4427 2126
// skipping _2125  name type: 0
    object _2124 = NOVALUE; // 4425 2124
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filter pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg filter pc: 3 op: STARTLINE (58)

    /** sequence.e:1731		if length(source) = 0 then*/
    // SubProg filter pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_source_4418)){
            _2124 = SEQ_PTR(_source_4418)->length;
    }
    else {
        _2124 = 1;
    }
    // SubProg filter pc: 8 op: EQUALS_IFW_I (121)
    if (_2124 != 0)
    goto L1; // [8] 19
    // SubProg filter pc: 12 op: STARTLINE (58)

    /** sequence.e:1732			return source*/
    // SubProg filter pc: 14 op: RETURNF (28)

// Exiting block BLOCK: filter

// block var rid_4419

// block var userdata_4420
    DeRefDS(_userdata_4420);

// block var rangetype_4421
    DeRefDS(_rangetype_4421);

// block var dest_4422
    DeRef(_dest_4422);

// block var idx_4423
    return _source_4418;
    // SubProg filter pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 4416 op: 159
    // SubProg filter pc: 19 op: STARTLINE (58)

    /** sequence.e:1734		dest = repeat(0, length(source))*/
    // SubProg filter pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_source_4418)){
            _2126 = SEQ_PTR(_source_4418)->length;
    }
    else {
        _2126 = 1;
    }
    // SubProg filter pc: 24 op: REPEAT (32)
    DeRef(_dest_4422);
    _dest_4422 = Repeat(0, _2126);
    _2126 = NOVALUE;
    // SubProg filter pc: 28 op: STARTLINE (58)

    /** sequence.e:1735		idx = 0*/
    // SubProg filter pc: 30 op: ASSIGN_I (113)
    _idx_4423 = 0;
    // SubProg filter pc: 33 op: STARTLINE (58)

    /** sequence.e:1736		switch rid do*/
    // SubProg filter pc: 35 op: SWITCH (185)
    _1 = find(_rid_4419, _2128);
    switch ( _1 ){ 
        // SubProg filter pc: 40 op: STARTLINE (58)

        /** sequence.e:1737			case "<", "lt" then*/
        // SubProg filter pc: 42 op: CASE (186)
        case 1:
        // SubProg filter pc: 44 op: CASE (186)
        case 2:
        // SubProg filter pc: 46 op: STARTLINE (58)

        /** sequence.e:1738				for a = 1 to length(source) do*/
        // SubProg filter pc: 48 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2132 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2132 = 1;
        }
        // SubProg filter pc: 51 op: FOR_I (125)
        {
            object _a_4435;
            _a_4435 = 1;
L2: // addr: 58 pc: 51 sub: 4416 op: 125
            if (_a_4435 > _2132){
                goto L3; // [51] 96
            }
            // SubProg filter pc: 58 op: STARTLINE (58)

            /** sequence.e:1739					if compare(source[a], userdata) < 0 then*/
            // SubProg filter pc: 60 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2133 = (object)*(((s1_ptr)_2)->base + _a_4435);
            // SubProg filter pc: 64 op: COMPARE (76)
            if (IS_ATOM_INT(_2133) && IS_ATOM_INT(_userdata_4420)){
                _2134 = (_2133 < _userdata_4420) ? -1 : (_2133 > _userdata_4420);
            }
            else{
                _2134 = compare(_2133, _userdata_4420);
            }
            _2133 = NOVALUE;
            // SubProg filter pc: 68 op: LESS_IFW_I (119)
            if (_2134 >= 0)
            goto L4; // [68] 89
            // SubProg filter pc: 72 op: STARTLINE (58)

            /** sequence.e:1740						idx += 1*/
            // SubProg filter pc: 74 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 78 op: STARTLINE (58)

            /** sequence.e:1741						dest[idx] = source[a]*/
            // SubProg filter pc: 80 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2137 = (object)*(((s1_ptr)_2)->base + _a_4435);
            // SubProg filter pc: 84 op: ASSIGN_SUBS (16)
            Ref(_2137);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2137;
            if( _1 != _2137 ){
                DeRef(_1);
            }
            _2137 = NOVALUE;
            // SubProg filter pc: 88 op: NOP1 (159)
L4: // addr: 89 pc: 88 sub: 4416 op: 159
            // SubProg filter pc: 89 op: STARTLINE (58)

            /** sequence.e:1743				end for*/
            // SubProg filter pc: 91 op: ENDFOR_INT_UP1 (54)
            _a_4435 = _a_4435 + 1;
            goto L2; // [91] 58
L3: // addr: 96 pc: 91 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 96 op: ELSE (23)
        goto L5; // [96] 1304
        // SubProg filter pc: 98 op: STARTLINE (58)

        /** sequence.e:1745			case "<=", "le" then*/
        // SubProg filter pc: 100 op: CASE (186)
        case 3:
        // SubProg filter pc: 102 op: CASE (186)
        case 4:
        // SubProg filter pc: 104 op: STARTLINE (58)

        /** sequence.e:1746				for a = 1 to length(source) do*/
        // SubProg filter pc: 106 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2140 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2140 = 1;
        }
        // SubProg filter pc: 109 op: FOR_I (125)
        {
            object _a_4447;
            _a_4447 = 1;
L6: // addr: 116 pc: 109 sub: 4416 op: 125
            if (_a_4447 > _2140){
                goto L7; // [109] 154
            }
            // SubProg filter pc: 116 op: STARTLINE (58)

            /** sequence.e:1747					if compare(source[a], userdata) <= 0 then*/
            // SubProg filter pc: 118 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2141 = (object)*(((s1_ptr)_2)->base + _a_4447);
            // SubProg filter pc: 122 op: COMPARE (76)
            if (IS_ATOM_INT(_2141) && IS_ATOM_INT(_userdata_4420)){
                _2142 = (_2141 < _userdata_4420) ? -1 : (_2141 > _userdata_4420);
            }
            else{
                _2142 = compare(_2141, _userdata_4420);
            }
            _2141 = NOVALUE;
            // SubProg filter pc: 126 op: LESSEQ_IFW_I (123)
            if (_2142 > 0)
            goto L8; // [126] 147
            // SubProg filter pc: 130 op: STARTLINE (58)

            /** sequence.e:1748						idx += 1*/
            // SubProg filter pc: 132 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 136 op: STARTLINE (58)

            /** sequence.e:1749						dest[idx] = source[a]*/
            // SubProg filter pc: 138 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2145 = (object)*(((s1_ptr)_2)->base + _a_4447);
            // SubProg filter pc: 142 op: ASSIGN_SUBS (16)
            Ref(_2145);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2145;
            if( _1 != _2145 ){
                DeRef(_1);
            }
            _2145 = NOVALUE;
            // SubProg filter pc: 146 op: NOP1 (159)
L8: // addr: 147 pc: 146 sub: 4416 op: 159
            // SubProg filter pc: 147 op: STARTLINE (58)

            /** sequence.e:1751				end for*/
            // SubProg filter pc: 149 op: ENDFOR_INT_UP1 (54)
            _a_4447 = _a_4447 + 1;
            goto L6; // [149] 116
L7: // addr: 154 pc: 149 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 154 op: ELSE (23)
        goto L5; // [154] 1304
        // SubProg filter pc: 156 op: STARTLINE (58)

        /** sequence.e:1753			case "=", "==", "eq" then*/
        // SubProg filter pc: 158 op: CASE (186)
        case 5:
        // SubProg filter pc: 160 op: CASE (186)
        case 6:
        // SubProg filter pc: 162 op: CASE (186)
        case 7:
        // SubProg filter pc: 164 op: STARTLINE (58)

        /** sequence.e:1754				for a = 1 to length(source) do*/
        // SubProg filter pc: 166 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2149 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2149 = 1;
        }
        // SubProg filter pc: 169 op: FOR_I (125)
        {
            object _a_4460;
            _a_4460 = 1;
L9: // addr: 176 pc: 169 sub: 4416 op: 125
            if (_a_4460 > _2149){
                goto LA; // [169] 214
            }
            // SubProg filter pc: 176 op: STARTLINE (58)

            /** sequence.e:1755					if compare(source[a], userdata) = 0 then*/
            // SubProg filter pc: 178 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2150 = (object)*(((s1_ptr)_2)->base + _a_4460);
            // SubProg filter pc: 182 op: COMPARE (76)
            if (IS_ATOM_INT(_2150) && IS_ATOM_INT(_userdata_4420)){
                _2151 = (_2150 < _userdata_4420) ? -1 : (_2150 > _userdata_4420);
            }
            else{
                _2151 = compare(_2150, _userdata_4420);
            }
            _2150 = NOVALUE;
            // SubProg filter pc: 186 op: EQUALS_IFW_I (121)
            if (_2151 != 0)
            goto LB; // [186] 207
            // SubProg filter pc: 190 op: STARTLINE (58)

            /** sequence.e:1756						idx += 1*/
            // SubProg filter pc: 192 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 196 op: STARTLINE (58)

            /** sequence.e:1757						dest[idx] = source[a]*/
            // SubProg filter pc: 198 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2154 = (object)*(((s1_ptr)_2)->base + _a_4460);
            // SubProg filter pc: 202 op: ASSIGN_SUBS (16)
            Ref(_2154);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2154;
            if( _1 != _2154 ){
                DeRef(_1);
            }
            _2154 = NOVALUE;
            // SubProg filter pc: 206 op: NOP1 (159)
LB: // addr: 207 pc: 206 sub: 4416 op: 159
            // SubProg filter pc: 207 op: STARTLINE (58)

            /** sequence.e:1759				end for*/
            // SubProg filter pc: 209 op: ENDFOR_INT_UP1 (54)
            _a_4460 = _a_4460 + 1;
            goto L9; // [209] 176
LA: // addr: 214 pc: 209 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 214 op: ELSE (23)
        goto L5; // [214] 1304
        // SubProg filter pc: 216 op: STARTLINE (58)

        /** sequence.e:1761			case "!=", "ne" then*/
        // SubProg filter pc: 218 op: CASE (186)
        case 8:
        // SubProg filter pc: 220 op: CASE (186)
        case 9:
        // SubProg filter pc: 222 op: STARTLINE (58)

        /** sequence.e:1762				for a = 1 to length(source) do*/
        // SubProg filter pc: 224 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2157 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2157 = 1;
        }
        // SubProg filter pc: 227 op: FOR_I (125)
        {
            object _a_4472;
            _a_4472 = 1;
LC: // addr: 234 pc: 227 sub: 4416 op: 125
            if (_a_4472 > _2157){
                goto LD; // [227] 272
            }
            // SubProg filter pc: 234 op: STARTLINE (58)

            /** sequence.e:1763					if compare(source[a], userdata) != 0 then*/
            // SubProg filter pc: 236 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2158 = (object)*(((s1_ptr)_2)->base + _a_4472);
            // SubProg filter pc: 240 op: COMPARE (76)
            if (IS_ATOM_INT(_2158) && IS_ATOM_INT(_userdata_4420)){
                _2159 = (_2158 < _userdata_4420) ? -1 : (_2158 > _userdata_4420);
            }
            else{
                _2159 = compare(_2158, _userdata_4420);
            }
            _2158 = NOVALUE;
            // SubProg filter pc: 244 op: NOTEQ_IFW_I (122)
            if (_2159 == 0)
            goto LE; // [244] 265
            // SubProg filter pc: 248 op: STARTLINE (58)

            /** sequence.e:1764						idx += 1*/
            // SubProg filter pc: 250 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 254 op: STARTLINE (58)

            /** sequence.e:1765						dest[idx] = source[a]*/
            // SubProg filter pc: 256 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2162 = (object)*(((s1_ptr)_2)->base + _a_4472);
            // SubProg filter pc: 260 op: ASSIGN_SUBS (16)
            Ref(_2162);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2162;
            if( _1 != _2162 ){
                DeRef(_1);
            }
            _2162 = NOVALUE;
            // SubProg filter pc: 264 op: NOP1 (159)
LE: // addr: 265 pc: 264 sub: 4416 op: 159
            // SubProg filter pc: 265 op: STARTLINE (58)

            /** sequence.e:1767				end for*/
            // SubProg filter pc: 267 op: ENDFOR_INT_UP1 (54)
            _a_4472 = _a_4472 + 1;
            goto LC; // [267] 234
LD: // addr: 272 pc: 267 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 272 op: ELSE (23)
        goto L5; // [272] 1304
        // SubProg filter pc: 274 op: STARTLINE (58)

        /** sequence.e:1769			case ">", "gt" then*/
        // SubProg filter pc: 276 op: CASE (186)
        case 10:
        // SubProg filter pc: 278 op: CASE (186)
        case 11:
        // SubProg filter pc: 280 op: STARTLINE (58)

        /** sequence.e:1770				for a = 1 to length(source) do*/
        // SubProg filter pc: 282 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2165 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2165 = 1;
        }
        // SubProg filter pc: 285 op: FOR_I (125)
        {
            object _a_4484;
            _a_4484 = 1;
LF: // addr: 292 pc: 285 sub: 4416 op: 125
            if (_a_4484 > _2165){
                goto L10; // [285] 330
            }
            // SubProg filter pc: 292 op: STARTLINE (58)

            /** sequence.e:1771					if compare(source[a], userdata) > 0 then*/
            // SubProg filter pc: 294 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2166 = (object)*(((s1_ptr)_2)->base + _a_4484);
            // SubProg filter pc: 298 op: COMPARE (76)
            if (IS_ATOM_INT(_2166) && IS_ATOM_INT(_userdata_4420)){
                _2167 = (_2166 < _userdata_4420) ? -1 : (_2166 > _userdata_4420);
            }
            else{
                _2167 = compare(_2166, _userdata_4420);
            }
            _2166 = NOVALUE;
            // SubProg filter pc: 302 op: GREATER_IFW_I (124)
            if (_2167 <= 0)
            goto L11; // [302] 323
            // SubProg filter pc: 306 op: STARTLINE (58)

            /** sequence.e:1772						idx += 1*/
            // SubProg filter pc: 308 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 312 op: STARTLINE (58)

            /** sequence.e:1773						dest[idx] = source[a]*/
            // SubProg filter pc: 314 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2170 = (object)*(((s1_ptr)_2)->base + _a_4484);
            // SubProg filter pc: 318 op: ASSIGN_SUBS (16)
            Ref(_2170);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2170;
            if( _1 != _2170 ){
                DeRef(_1);
            }
            _2170 = NOVALUE;
            // SubProg filter pc: 322 op: NOP1 (159)
L11: // addr: 323 pc: 322 sub: 4416 op: 159
            // SubProg filter pc: 323 op: STARTLINE (58)

            /** sequence.e:1775				end for*/
            // SubProg filter pc: 325 op: ENDFOR_INT_UP1 (54)
            _a_4484 = _a_4484 + 1;
            goto LF; // [325] 292
L10: // addr: 330 pc: 325 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 330 op: ELSE (23)
        goto L5; // [330] 1304
        // SubProg filter pc: 332 op: STARTLINE (58)

        /** sequence.e:1777			case ">=", "ge" then*/
        // SubProg filter pc: 334 op: CASE (186)
        case 12:
        // SubProg filter pc: 336 op: CASE (186)
        case 13:
        // SubProg filter pc: 338 op: STARTLINE (58)

        /** sequence.e:1778				for a = 1 to length(source) do*/
        // SubProg filter pc: 340 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2173 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2173 = 1;
        }
        // SubProg filter pc: 343 op: FOR_I (125)
        {
            object _a_4496;
            _a_4496 = 1;
L12: // addr: 350 pc: 343 sub: 4416 op: 125
            if (_a_4496 > _2173){
                goto L13; // [343] 388
            }
            // SubProg filter pc: 350 op: STARTLINE (58)

            /** sequence.e:1779					if compare(source[a], userdata) >= 0 then*/
            // SubProg filter pc: 352 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2174 = (object)*(((s1_ptr)_2)->base + _a_4496);
            // SubProg filter pc: 356 op: COMPARE (76)
            if (IS_ATOM_INT(_2174) && IS_ATOM_INT(_userdata_4420)){
                _2175 = (_2174 < _userdata_4420) ? -1 : (_2174 > _userdata_4420);
            }
            else{
                _2175 = compare(_2174, _userdata_4420);
            }
            _2174 = NOVALUE;
            // SubProg filter pc: 360 op: GREATEREQ_IFW_I (120)
            if (_2175 < 0)
            goto L14; // [360] 381
            // SubProg filter pc: 364 op: STARTLINE (58)

            /** sequence.e:1780						idx += 1*/
            // SubProg filter pc: 366 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 370 op: STARTLINE (58)

            /** sequence.e:1781						dest[idx] = source[a]*/
            // SubProg filter pc: 372 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2178 = (object)*(((s1_ptr)_2)->base + _a_4496);
            // SubProg filter pc: 376 op: ASSIGN_SUBS (16)
            Ref(_2178);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2178;
            if( _1 != _2178 ){
                DeRef(_1);
            }
            _2178 = NOVALUE;
            // SubProg filter pc: 380 op: NOP1 (159)
L14: // addr: 381 pc: 380 sub: 4416 op: 159
            // SubProg filter pc: 381 op: STARTLINE (58)

            /** sequence.e:1783				end for*/
            // SubProg filter pc: 383 op: ENDFOR_INT_UP1 (54)
            _a_4496 = _a_4496 + 1;
            goto L12; // [383] 350
L13: // addr: 388 pc: 383 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 388 op: ELSE (23)
        goto L5; // [388] 1304
        // SubProg filter pc: 390 op: STARTLINE (58)

        /** sequence.e:1785			case "in" then*/
        // SubProg filter pc: 392 op: CASE (186)
        case 14:
        // SubProg filter pc: 394 op: STARTLINE (58)

        /** sequence.e:1786				switch rangetype do*/
        // SubProg filter pc: 396 op: SWITCH (185)
        _1 = find(_rangetype_4421, _2180);
        switch ( _1 ){ 
            // SubProg filter pc: 401 op: STARTLINE (58)

            /** sequence.e:1787					case "" then*/
            // SubProg filter pc: 403 op: CASE (186)
            case 1:
            // SubProg filter pc: 405 op: STARTLINE (58)

            /** sequence.e:1788						for a = 1 to length(source) do*/
            // SubProg filter pc: 407 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2182 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2182 = 1;
            }
            // SubProg filter pc: 410 op: FOR_I (125)
            {
                object _a_4510;
                _a_4510 = 1;
L15: // addr: 417 pc: 410 sub: 4416 op: 125
                if (_a_4510 > _2182){
                    goto L16; // [410] 455
                }
                // SubProg filter pc: 417 op: STARTLINE (58)

                /** sequence.e:1789							if find(source[a], userdata)  then*/
                // SubProg filter pc: 419 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2183 = (object)*(((s1_ptr)_2)->base + _a_4510);
                // SubProg filter pc: 423 op: FIND_FROM (176)
                _2184 = find_from(_2183, _userdata_4420, 1);
                _2183 = NOVALUE;
                // SubProg filter pc: 428 op: IF (20)
                if (_2184 == 0)
                {
                    _2184 = NOVALUE;
                    goto L17; // [428] 448
                }
                else{
                    _2184 = NOVALUE;
                }
                // SubProg filter pc: 431 op: STARTLINE (58)

                /** sequence.e:1790								idx += 1*/
                // SubProg filter pc: 433 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 437 op: STARTLINE (58)

                /** sequence.e:1791								dest[idx] = source[a]*/
                // SubProg filter pc: 439 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2186 = (object)*(((s1_ptr)_2)->base + _a_4510);
                // SubProg filter pc: 443 op: ASSIGN_SUBS (16)
                Ref(_2186);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2186;
                if( _1 != _2186 ){
                    DeRef(_1);
                }
                _2186 = NOVALUE;
                // SubProg filter pc: 447 op: NOP1 (159)
L17: // addr: 448 pc: 447 sub: 4416 op: 159
                // SubProg filter pc: 448 op: STARTLINE (58)

                /** sequence.e:1793						end for*/
                // SubProg filter pc: 450 op: ENDFOR_INT_UP1 (54)
                _a_4510 = _a_4510 + 1;
                goto L15; // [450] 417
L16: // addr: 455 pc: 450 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 455 op: ELSE (23)
            goto L5; // [455] 1304
            // SubProg filter pc: 457 op: STARTLINE (58)

            /** sequence.e:1795					case "[]" then*/
            // SubProg filter pc: 459 op: CASE (186)
            case 2:
            // SubProg filter pc: 461 op: STARTLINE (58)

            /** sequence.e:1796						for a = 1 to length(source) do*/
            // SubProg filter pc: 463 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2187 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2187 = 1;
            }
            // SubProg filter pc: 466 op: FOR_I (125)
            {
                object _a_4519;
                _a_4519 = 1;
L18: // addr: 473 pc: 466 sub: 4416 op: 125
                if (_a_4519 > _2187){
                    goto L19; // [466] 534
                }
                // SubProg filter pc: 473 op: STARTLINE (58)

                /** sequence.e:1797							if compare(source[a], userdata[1]) >= 0 then*/
                // SubProg filter pc: 475 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2188 = (object)*(((s1_ptr)_2)->base + _a_4519);
                // SubProg filter pc: 479 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2189 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 483 op: COMPARE (76)
                if (IS_ATOM_INT(_2188) && IS_ATOM_INT(_2189)){
                    _2190 = (_2188 < _2189) ? -1 : (_2188 > _2189);
                }
                else{
                    _2190 = compare(_2188, _2189);
                }
                _2188 = NOVALUE;
                _2189 = NOVALUE;
                // SubProg filter pc: 487 op: GREATEREQ_IFW_I (120)
                if (_2190 < 0)
                goto L1A; // [487] 527
                // SubProg filter pc: 491 op: STARTLINE (58)

                /** sequence.e:1798								if compare(source[a], userdata[2]) <= 0 then*/
                // SubProg filter pc: 493 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2192 = (object)*(((s1_ptr)_2)->base + _a_4519);
                // SubProg filter pc: 497 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2193 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 501 op: COMPARE (76)
                if (IS_ATOM_INT(_2192) && IS_ATOM_INT(_2193)){
                    _2194 = (_2192 < _2193) ? -1 : (_2192 > _2193);
                }
                else{
                    _2194 = compare(_2192, _2193);
                }
                _2192 = NOVALUE;
                _2193 = NOVALUE;
                // SubProg filter pc: 505 op: LESSEQ_IFW_I (123)
                if (_2194 > 0)
                goto L1B; // [505] 526
                // SubProg filter pc: 509 op: STARTLINE (58)

                /** sequence.e:1799									idx += 1*/
                // SubProg filter pc: 511 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 515 op: STARTLINE (58)

                /** sequence.e:1800									dest[idx] = source[a]*/
                // SubProg filter pc: 517 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2197 = (object)*(((s1_ptr)_2)->base + _a_4519);
                // SubProg filter pc: 521 op: ASSIGN_SUBS (16)
                Ref(_2197);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2197;
                if( _1 != _2197 ){
                    DeRef(_1);
                }
                _2197 = NOVALUE;
                // SubProg filter pc: 525 op: NOP1 (159)
L1B: // addr: 526 pc: 525 sub: 4416 op: 159
                // SubProg filter pc: 526 op: NOP1 (159)
L1A: // addr: 527 pc: 526 sub: 4416 op: 159
                // SubProg filter pc: 527 op: STARTLINE (58)

                /** sequence.e:1803						end for*/
                // SubProg filter pc: 529 op: ENDFOR_INT_UP1 (54)
                _a_4519 = _a_4519 + 1;
                goto L18; // [529] 473
L19: // addr: 534 pc: 529 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 534 op: ELSE (23)
            goto L5; // [534] 1304
            // SubProg filter pc: 536 op: STARTLINE (58)

            /** sequence.e:1805					case "[)" then*/
            // SubProg filter pc: 538 op: CASE (186)
            case 3:
            // SubProg filter pc: 540 op: STARTLINE (58)

            /** sequence.e:1806						for a = 1 to length(source) do*/
            // SubProg filter pc: 542 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2198 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2198 = 1;
            }
            // SubProg filter pc: 545 op: FOR_I (125)
            {
                object _a_4535;
                _a_4535 = 1;
L1C: // addr: 552 pc: 545 sub: 4416 op: 125
                if (_a_4535 > _2198){
                    goto L1D; // [545] 613
                }
                // SubProg filter pc: 552 op: STARTLINE (58)

                /** sequence.e:1807							if compare(source[a], userdata[1]) >= 0 then*/
                // SubProg filter pc: 554 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2199 = (object)*(((s1_ptr)_2)->base + _a_4535);
                // SubProg filter pc: 558 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2200 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 562 op: COMPARE (76)
                if (IS_ATOM_INT(_2199) && IS_ATOM_INT(_2200)){
                    _2201 = (_2199 < _2200) ? -1 : (_2199 > _2200);
                }
                else{
                    _2201 = compare(_2199, _2200);
                }
                _2199 = NOVALUE;
                _2200 = NOVALUE;
                // SubProg filter pc: 566 op: GREATEREQ_IFW_I (120)
                if (_2201 < 0)
                goto L1E; // [566] 606
                // SubProg filter pc: 570 op: STARTLINE (58)

                /** sequence.e:1808								if compare(source[a], userdata[2]) < 0 then*/
                // SubProg filter pc: 572 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2203 = (object)*(((s1_ptr)_2)->base + _a_4535);
                // SubProg filter pc: 576 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2204 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 580 op: COMPARE (76)
                if (IS_ATOM_INT(_2203) && IS_ATOM_INT(_2204)){
                    _2205 = (_2203 < _2204) ? -1 : (_2203 > _2204);
                }
                else{
                    _2205 = compare(_2203, _2204);
                }
                _2203 = NOVALUE;
                _2204 = NOVALUE;
                // SubProg filter pc: 584 op: LESS_IFW_I (119)
                if (_2205 >= 0)
                goto L1F; // [584] 605
                // SubProg filter pc: 588 op: STARTLINE (58)

                /** sequence.e:1809									idx += 1*/
                // SubProg filter pc: 590 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 594 op: STARTLINE (58)

                /** sequence.e:1810									dest[idx] = source[a]*/
                // SubProg filter pc: 596 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2208 = (object)*(((s1_ptr)_2)->base + _a_4535);
                // SubProg filter pc: 600 op: ASSIGN_SUBS (16)
                Ref(_2208);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2208;
                if( _1 != _2208 ){
                    DeRef(_1);
                }
                _2208 = NOVALUE;
                // SubProg filter pc: 604 op: NOP1 (159)
L1F: // addr: 605 pc: 604 sub: 4416 op: 159
                // SubProg filter pc: 605 op: NOP1 (159)
L1E: // addr: 606 pc: 605 sub: 4416 op: 159
                // SubProg filter pc: 606 op: STARTLINE (58)

                /** sequence.e:1813						end for*/
                // SubProg filter pc: 608 op: ENDFOR_INT_UP1 (54)
                _a_4535 = _a_4535 + 1;
                goto L1C; // [608] 552
L1D: // addr: 613 pc: 608 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 613 op: ELSE (23)
            goto L5; // [613] 1304
            // SubProg filter pc: 615 op: STARTLINE (58)

            /** sequence.e:1814					case "(]" then*/
            // SubProg filter pc: 617 op: CASE (186)
            case 4:
            // SubProg filter pc: 619 op: STARTLINE (58)

            /** sequence.e:1815						for a = 1 to length(source) do*/
            // SubProg filter pc: 621 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2209 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2209 = 1;
            }
            // SubProg filter pc: 624 op: FOR_I (125)
            {
                object _a_4551;
                _a_4551 = 1;
L20: // addr: 631 pc: 624 sub: 4416 op: 125
                if (_a_4551 > _2209){
                    goto L21; // [624] 692
                }
                // SubProg filter pc: 631 op: STARTLINE (58)

                /** sequence.e:1816							if compare(source[a], userdata[1]) > 0 then*/
                // SubProg filter pc: 633 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2210 = (object)*(((s1_ptr)_2)->base + _a_4551);
                // SubProg filter pc: 637 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2211 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 641 op: COMPARE (76)
                if (IS_ATOM_INT(_2210) && IS_ATOM_INT(_2211)){
                    _2212 = (_2210 < _2211) ? -1 : (_2210 > _2211);
                }
                else{
                    _2212 = compare(_2210, _2211);
                }
                _2210 = NOVALUE;
                _2211 = NOVALUE;
                // SubProg filter pc: 645 op: GREATER_IFW_I (124)
                if (_2212 <= 0)
                goto L22; // [645] 685
                // SubProg filter pc: 649 op: STARTLINE (58)

                /** sequence.e:1817								if compare(source[a], userdata[2]) <= 0 then*/
                // SubProg filter pc: 651 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2214 = (object)*(((s1_ptr)_2)->base + _a_4551);
                // SubProg filter pc: 655 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2215 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 659 op: COMPARE (76)
                if (IS_ATOM_INT(_2214) && IS_ATOM_INT(_2215)){
                    _2216 = (_2214 < _2215) ? -1 : (_2214 > _2215);
                }
                else{
                    _2216 = compare(_2214, _2215);
                }
                _2214 = NOVALUE;
                _2215 = NOVALUE;
                // SubProg filter pc: 663 op: LESSEQ_IFW_I (123)
                if (_2216 > 0)
                goto L23; // [663] 684
                // SubProg filter pc: 667 op: STARTLINE (58)

                /** sequence.e:1818									idx += 1*/
                // SubProg filter pc: 669 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 673 op: STARTLINE (58)

                /** sequence.e:1819									dest[idx] = source[a]*/
                // SubProg filter pc: 675 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2219 = (object)*(((s1_ptr)_2)->base + _a_4551);
                // SubProg filter pc: 679 op: ASSIGN_SUBS (16)
                Ref(_2219);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2219;
                if( _1 != _2219 ){
                    DeRef(_1);
                }
                _2219 = NOVALUE;
                // SubProg filter pc: 683 op: NOP1 (159)
L23: // addr: 684 pc: 683 sub: 4416 op: 159
                // SubProg filter pc: 684 op: NOP1 (159)
L22: // addr: 685 pc: 684 sub: 4416 op: 159
                // SubProg filter pc: 685 op: STARTLINE (58)

                /** sequence.e:1822						end for*/
                // SubProg filter pc: 687 op: ENDFOR_INT_UP1 (54)
                _a_4551 = _a_4551 + 1;
                goto L20; // [687] 631
L21: // addr: 692 pc: 687 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 692 op: ELSE (23)
            goto L5; // [692] 1304
            // SubProg filter pc: 694 op: STARTLINE (58)

            /** sequence.e:1823					case "()" then*/
            // SubProg filter pc: 696 op: CASE (186)
            case 5:
            // SubProg filter pc: 698 op: STARTLINE (58)

            /** sequence.e:1824						for a = 1 to length(source) do*/
            // SubProg filter pc: 700 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2220 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2220 = 1;
            }
            // SubProg filter pc: 703 op: FOR_I (125)
            {
                object _a_4567;
                _a_4567 = 1;
L24: // addr: 710 pc: 703 sub: 4416 op: 125
                if (_a_4567 > _2220){
                    goto L25; // [703] 771
                }
                // SubProg filter pc: 710 op: STARTLINE (58)

                /** sequence.e:1825							if compare(source[a], userdata[1]) > 0 then*/
                // SubProg filter pc: 712 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2221 = (object)*(((s1_ptr)_2)->base + _a_4567);
                // SubProg filter pc: 716 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2222 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 720 op: COMPARE (76)
                if (IS_ATOM_INT(_2221) && IS_ATOM_INT(_2222)){
                    _2223 = (_2221 < _2222) ? -1 : (_2221 > _2222);
                }
                else{
                    _2223 = compare(_2221, _2222);
                }
                _2221 = NOVALUE;
                _2222 = NOVALUE;
                // SubProg filter pc: 724 op: GREATER_IFW_I (124)
                if (_2223 <= 0)
                goto L26; // [724] 764
                // SubProg filter pc: 728 op: STARTLINE (58)

                /** sequence.e:1826								if compare(source[a], userdata[2]) < 0 then*/
                // SubProg filter pc: 730 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2225 = (object)*(((s1_ptr)_2)->base + _a_4567);
                // SubProg filter pc: 734 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2226 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 738 op: COMPARE (76)
                if (IS_ATOM_INT(_2225) && IS_ATOM_INT(_2226)){
                    _2227 = (_2225 < _2226) ? -1 : (_2225 > _2226);
                }
                else{
                    _2227 = compare(_2225, _2226);
                }
                _2225 = NOVALUE;
                _2226 = NOVALUE;
                // SubProg filter pc: 742 op: LESS_IFW_I (119)
                if (_2227 >= 0)
                goto L27; // [742] 763
                // SubProg filter pc: 746 op: STARTLINE (58)

                /** sequence.e:1827									idx += 1*/
                // SubProg filter pc: 748 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 752 op: STARTLINE (58)

                /** sequence.e:1828									dest[idx] = source[a]*/
                // SubProg filter pc: 754 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2230 = (object)*(((s1_ptr)_2)->base + _a_4567);
                // SubProg filter pc: 758 op: ASSIGN_SUBS (16)
                Ref(_2230);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2230;
                if( _1 != _2230 ){
                    DeRef(_1);
                }
                _2230 = NOVALUE;
                // SubProg filter pc: 762 op: NOP1 (159)
L27: // addr: 763 pc: 762 sub: 4416 op: 159
                // SubProg filter pc: 763 op: NOP1 (159)
L26: // addr: 764 pc: 763 sub: 4416 op: 159
                // SubProg filter pc: 764 op: STARTLINE (58)

                /** sequence.e:1831						end for*/
                // SubProg filter pc: 766 op: ENDFOR_INT_UP1 (54)
                _a_4567 = _a_4567 + 1;
                goto L24; // [766] 710
L25: // addr: 771 pc: 766 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 771 op: ELSE (23)
            goto L5; // [771] 1304
            // SubProg filter pc: 773 op: STARTLINE (58)

            /** sequence.e:1833					case else*/
            // SubProg filter pc: 775 op: CASE (186)
            case 0:
            // SubProg filter pc: 777 op: NOPSWITCH (187)
        ;}        // SubProg filter pc: 778 op: ELSE (23)
        goto L5; // [778] 1304
        // SubProg filter pc: 780 op: STARTLINE (58)

        /** sequence.e:1838			case "out" then*/
        // SubProg filter pc: 782 op: CASE (186)
        case 15:
        // SubProg filter pc: 784 op: STARTLINE (58)

        /** sequence.e:1839				switch rangetype do*/
        // SubProg filter pc: 786 op: SWITCH (185)
        _1 = find(_rangetype_4421, _2232);
        switch ( _1 ){ 
            // SubProg filter pc: 791 op: STARTLINE (58)

            /** sequence.e:1840					case "" then*/
            // SubProg filter pc: 793 op: CASE (186)
            case 1:
            // SubProg filter pc: 795 op: STARTLINE (58)

            /** sequence.e:1841						for a = 1 to length(source) do*/
            // SubProg filter pc: 797 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2234 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2234 = 1;
            }
            // SubProg filter pc: 800 op: FOR_I (125)
            {
                object _a_4588;
                _a_4588 = 1;
L28: // addr: 807 pc: 800 sub: 4416 op: 125
                if (_a_4588 > _2234){
                    goto L29; // [800] 845
                }
                // SubProg filter pc: 807 op: STARTLINE (58)

                /** sequence.e:1842							if not find(source[a], userdata)  then*/
                // SubProg filter pc: 809 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2235 = (object)*(((s1_ptr)_2)->base + _a_4588);
                // SubProg filter pc: 813 op: FIND_FROM (176)
                _2236 = find_from(_2235, _userdata_4420, 1);
                _2235 = NOVALUE;
                // SubProg filter pc: 818 op: NOT_IFW (108)
                if (_2236 != 0)
                goto L2A; // [818] 838
                _2236 = NOVALUE;
                // SubProg filter pc: 821 op: STARTLINE (58)

                /** sequence.e:1843								idx += 1*/
                // SubProg filter pc: 823 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 827 op: STARTLINE (58)

                /** sequence.e:1844								dest[idx] = source[a]*/
                // SubProg filter pc: 829 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2239 = (object)*(((s1_ptr)_2)->base + _a_4588);
                // SubProg filter pc: 833 op: ASSIGN_SUBS (16)
                Ref(_2239);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2239;
                if( _1 != _2239 ){
                    DeRef(_1);
                }
                _2239 = NOVALUE;
                // SubProg filter pc: 837 op: NOP1 (159)
L2A: // addr: 838 pc: 837 sub: 4416 op: 159
                // SubProg filter pc: 838 op: STARTLINE (58)

                /** sequence.e:1846						end for*/
                // SubProg filter pc: 840 op: ENDFOR_INT_UP1 (54)
                _a_4588 = _a_4588 + 1;
                goto L28; // [840] 807
L29: // addr: 845 pc: 840 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 845 op: ELSE (23)
            goto L5; // [845] 1304
            // SubProg filter pc: 847 op: STARTLINE (58)

            /** sequence.e:1848					case "[]" then*/
            // SubProg filter pc: 849 op: CASE (186)
            case 2:
            // SubProg filter pc: 851 op: STARTLINE (58)

            /** sequence.e:1849						for a = 1 to length(source) do*/
            // SubProg filter pc: 853 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2240 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2240 = 1;
            }
            // SubProg filter pc: 856 op: FOR_I (125)
            {
                object _a_4598;
                _a_4598 = 1;
L2B: // addr: 863 pc: 856 sub: 4416 op: 125
                if (_a_4598 > _2240){
                    goto L2C; // [856] 943
                }
                // SubProg filter pc: 863 op: STARTLINE (58)

                /** sequence.e:1850							if compare(source[a], userdata[1]) < 0 then*/
                // SubProg filter pc: 865 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2241 = (object)*(((s1_ptr)_2)->base + _a_4598);
                // SubProg filter pc: 869 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2242 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 873 op: COMPARE (76)
                if (IS_ATOM_INT(_2241) && IS_ATOM_INT(_2242)){
                    _2243 = (_2241 < _2242) ? -1 : (_2241 > _2242);
                }
                else{
                    _2243 = compare(_2241, _2242);
                }
                _2241 = NOVALUE;
                _2242 = NOVALUE;
                // SubProg filter pc: 877 op: LESS_IFW_I (119)
                if (_2243 >= 0)
                goto L2D; // [877] 900
                // SubProg filter pc: 881 op: STARTLINE (58)

                /** sequence.e:1851								idx += 1*/
                // SubProg filter pc: 883 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 887 op: STARTLINE (58)

                /** sequence.e:1852								dest[idx] = source[a]*/
                // SubProg filter pc: 889 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2246 = (object)*(((s1_ptr)_2)->base + _a_4598);
                // SubProg filter pc: 893 op: ASSIGN_SUBS (16)
                Ref(_2246);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2246;
                if( _1 != _2246 ){
                    DeRef(_1);
                }
                _2246 = NOVALUE;
                // SubProg filter pc: 897 op: ELSE (23)
                goto L2E; // [897] 936
                // SubProg filter pc: 899 op: NOP1 (159)
L2D: // addr: 900 pc: 899 sub: 4416 op: 159
                // SubProg filter pc: 900 op: STARTLINE (58)

                /** sequence.e:1853							elsif compare(source[a], userdata[2]) > 0 then*/
                // SubProg filter pc: 902 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2247 = (object)*(((s1_ptr)_2)->base + _a_4598);
                // SubProg filter pc: 906 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2248 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 910 op: COMPARE (76)
                if (IS_ATOM_INT(_2247) && IS_ATOM_INT(_2248)){
                    _2249 = (_2247 < _2248) ? -1 : (_2247 > _2248);
                }
                else{
                    _2249 = compare(_2247, _2248);
                }
                _2247 = NOVALUE;
                _2248 = NOVALUE;
                // SubProg filter pc: 914 op: GREATER_IFW_I (124)
                if (_2249 <= 0)
                goto L2F; // [914] 935
                // SubProg filter pc: 918 op: STARTLINE (58)

                /** sequence.e:1854								idx += 1*/
                // SubProg filter pc: 920 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 924 op: STARTLINE (58)

                /** sequence.e:1855								dest[idx] = source[a]*/
                // SubProg filter pc: 926 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2252 = (object)*(((s1_ptr)_2)->base + _a_4598);
                // SubProg filter pc: 930 op: ASSIGN_SUBS (16)
                Ref(_2252);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2252;
                if( _1 != _2252 ){
                    DeRef(_1);
                }
                _2252 = NOVALUE;
                // SubProg filter pc: 934 op: NOP1 (159)
L2F: // addr: 935 pc: 934 sub: 4416 op: 159
                // SubProg filter pc: 935 op: NOP1 (159)
L2E: // addr: 936 pc: 935 sub: 4416 op: 159
                // SubProg filter pc: 936 op: STARTLINE (58)

                /** sequence.e:1857						end for*/
                // SubProg filter pc: 938 op: ENDFOR_INT_UP1 (54)
                _a_4598 = _a_4598 + 1;
                goto L2B; // [938] 863
L2C: // addr: 943 pc: 938 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 943 op: ELSE (23)
            goto L5; // [943] 1304
            // SubProg filter pc: 945 op: STARTLINE (58)

            /** sequence.e:1859					case "[)" then*/
            // SubProg filter pc: 947 op: CASE (186)
            case 3:
            // SubProg filter pc: 949 op: STARTLINE (58)

            /** sequence.e:1860						for a = 1 to length(source) do*/
            // SubProg filter pc: 951 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2253 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2253 = 1;
            }
            // SubProg filter pc: 954 op: FOR_I (125)
            {
                object _a_4616;
                _a_4616 = 1;
L30: // addr: 961 pc: 954 sub: 4416 op: 125
                if (_a_4616 > _2253){
                    goto L31; // [954] 1041
                }
                // SubProg filter pc: 961 op: STARTLINE (58)

                /** sequence.e:1861							if compare(source[a], userdata[1]) < 0 then*/
                // SubProg filter pc: 963 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2254 = (object)*(((s1_ptr)_2)->base + _a_4616);
                // SubProg filter pc: 967 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2255 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 971 op: COMPARE (76)
                if (IS_ATOM_INT(_2254) && IS_ATOM_INT(_2255)){
                    _2256 = (_2254 < _2255) ? -1 : (_2254 > _2255);
                }
                else{
                    _2256 = compare(_2254, _2255);
                }
                _2254 = NOVALUE;
                _2255 = NOVALUE;
                // SubProg filter pc: 975 op: LESS_IFW_I (119)
                if (_2256 >= 0)
                goto L32; // [975] 998
                // SubProg filter pc: 979 op: STARTLINE (58)

                /** sequence.e:1862								idx += 1*/
                // SubProg filter pc: 981 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 985 op: STARTLINE (58)

                /** sequence.e:1863								dest[idx] = source[a]*/
                // SubProg filter pc: 987 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2259 = (object)*(((s1_ptr)_2)->base + _a_4616);
                // SubProg filter pc: 991 op: ASSIGN_SUBS (16)
                Ref(_2259);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2259;
                if( _1 != _2259 ){
                    DeRef(_1);
                }
                _2259 = NOVALUE;
                // SubProg filter pc: 995 op: ELSE (23)
                goto L33; // [995] 1034
                // SubProg filter pc: 997 op: NOP1 (159)
L32: // addr: 998 pc: 997 sub: 4416 op: 159
                // SubProg filter pc: 998 op: STARTLINE (58)

                /** sequence.e:1864							elsif compare(source[a], userdata[2]) >= 0 then*/
                // SubProg filter pc: 1000 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2260 = (object)*(((s1_ptr)_2)->base + _a_4616);
                // SubProg filter pc: 1004 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2261 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1008 op: COMPARE (76)
                if (IS_ATOM_INT(_2260) && IS_ATOM_INT(_2261)){
                    _2262 = (_2260 < _2261) ? -1 : (_2260 > _2261);
                }
                else{
                    _2262 = compare(_2260, _2261);
                }
                _2260 = NOVALUE;
                _2261 = NOVALUE;
                // SubProg filter pc: 1012 op: GREATEREQ_IFW_I (120)
                if (_2262 < 0)
                goto L34; // [1012] 1033
                // SubProg filter pc: 1016 op: STARTLINE (58)

                /** sequence.e:1865								idx += 1*/
                // SubProg filter pc: 1018 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 1022 op: STARTLINE (58)

                /** sequence.e:1866								dest[idx] = source[a]*/
                // SubProg filter pc: 1024 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2265 = (object)*(((s1_ptr)_2)->base + _a_4616);
                // SubProg filter pc: 1028 op: ASSIGN_SUBS (16)
                Ref(_2265);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2265;
                if( _1 != _2265 ){
                    DeRef(_1);
                }
                _2265 = NOVALUE;
                // SubProg filter pc: 1032 op: NOP1 (159)
L34: // addr: 1033 pc: 1032 sub: 4416 op: 159
                // SubProg filter pc: 1033 op: NOP1 (159)
L33: // addr: 1034 pc: 1033 sub: 4416 op: 159
                // SubProg filter pc: 1034 op: STARTLINE (58)

                /** sequence.e:1868						end for*/
                // SubProg filter pc: 1036 op: ENDFOR_INT_UP1 (54)
                _a_4616 = _a_4616 + 1;
                goto L30; // [1036] 961
L31: // addr: 1041 pc: 1036 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 1041 op: ELSE (23)
            goto L5; // [1041] 1304
            // SubProg filter pc: 1043 op: STARTLINE (58)

            /** sequence.e:1869					case "(]" then*/
            // SubProg filter pc: 1045 op: CASE (186)
            case 4:
            // SubProg filter pc: 1047 op: STARTLINE (58)

            /** sequence.e:1870						for a = 1 to length(source) do*/
            // SubProg filter pc: 1049 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2266 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2266 = 1;
            }
            // SubProg filter pc: 1052 op: FOR_I (125)
            {
                object _a_4634;
                _a_4634 = 1;
L35: // addr: 1059 pc: 1052 sub: 4416 op: 125
                if (_a_4634 > _2266){
                    goto L36; // [1052] 1139
                }
                // SubProg filter pc: 1059 op: STARTLINE (58)

                /** sequence.e:1871							if compare(source[a], userdata[1]) <= 0 then*/
                // SubProg filter pc: 1061 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2267 = (object)*(((s1_ptr)_2)->base + _a_4634);
                // SubProg filter pc: 1065 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2268 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 1069 op: COMPARE (76)
                if (IS_ATOM_INT(_2267) && IS_ATOM_INT(_2268)){
                    _2269 = (_2267 < _2268) ? -1 : (_2267 > _2268);
                }
                else{
                    _2269 = compare(_2267, _2268);
                }
                _2267 = NOVALUE;
                _2268 = NOVALUE;
                // SubProg filter pc: 1073 op: LESSEQ_IFW_I (123)
                if (_2269 > 0)
                goto L37; // [1073] 1096
                // SubProg filter pc: 1077 op: STARTLINE (58)

                /** sequence.e:1872								idx += 1*/
                // SubProg filter pc: 1079 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 1083 op: STARTLINE (58)

                /** sequence.e:1873								dest[idx] = source[a]*/
                // SubProg filter pc: 1085 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2272 = (object)*(((s1_ptr)_2)->base + _a_4634);
                // SubProg filter pc: 1089 op: ASSIGN_SUBS (16)
                Ref(_2272);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2272;
                if( _1 != _2272 ){
                    DeRef(_1);
                }
                _2272 = NOVALUE;
                // SubProg filter pc: 1093 op: ELSE (23)
                goto L38; // [1093] 1132
                // SubProg filter pc: 1095 op: NOP1 (159)
L37: // addr: 1096 pc: 1095 sub: 4416 op: 159
                // SubProg filter pc: 1096 op: STARTLINE (58)

                /** sequence.e:1874							elsif compare(source[a], userdata[2]) > 0 then*/
                // SubProg filter pc: 1098 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2273 = (object)*(((s1_ptr)_2)->base + _a_4634);
                // SubProg filter pc: 1102 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2274 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1106 op: COMPARE (76)
                if (IS_ATOM_INT(_2273) && IS_ATOM_INT(_2274)){
                    _2275 = (_2273 < _2274) ? -1 : (_2273 > _2274);
                }
                else{
                    _2275 = compare(_2273, _2274);
                }
                _2273 = NOVALUE;
                _2274 = NOVALUE;
                // SubProg filter pc: 1110 op: GREATER_IFW_I (124)
                if (_2275 <= 0)
                goto L39; // [1110] 1131
                // SubProg filter pc: 1114 op: STARTLINE (58)

                /** sequence.e:1875								idx += 1*/
                // SubProg filter pc: 1116 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 1120 op: STARTLINE (58)

                /** sequence.e:1876								dest[idx] = source[a]*/
                // SubProg filter pc: 1122 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2278 = (object)*(((s1_ptr)_2)->base + _a_4634);
                // SubProg filter pc: 1126 op: ASSIGN_SUBS (16)
                Ref(_2278);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2278;
                if( _1 != _2278 ){
                    DeRef(_1);
                }
                _2278 = NOVALUE;
                // SubProg filter pc: 1130 op: NOP1 (159)
L39: // addr: 1131 pc: 1130 sub: 4416 op: 159
                // SubProg filter pc: 1131 op: NOP1 (159)
L38: // addr: 1132 pc: 1131 sub: 4416 op: 159
                // SubProg filter pc: 1132 op: STARTLINE (58)

                /** sequence.e:1878						end for*/
                // SubProg filter pc: 1134 op: ENDFOR_INT_UP1 (54)
                _a_4634 = _a_4634 + 1;
                goto L35; // [1134] 1059
L36: // addr: 1139 pc: 1134 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 1139 op: ELSE (23)
            goto L5; // [1139] 1304
            // SubProg filter pc: 1141 op: STARTLINE (58)

            /** sequence.e:1879					case "()" then*/
            // SubProg filter pc: 1143 op: CASE (186)
            case 5:
            // SubProg filter pc: 1145 op: STARTLINE (58)

            /** sequence.e:1880						for a = 1 to length(source) do*/
            // SubProg filter pc: 1147 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4418)){
                    _2279 = SEQ_PTR(_source_4418)->length;
            }
            else {
                _2279 = 1;
            }
            // SubProg filter pc: 1150 op: FOR_I (125)
            {
                object _a_4652;
                _a_4652 = 1;
L3A: // addr: 1157 pc: 1150 sub: 4416 op: 125
                if (_a_4652 > _2279){
                    goto L3B; // [1150] 1237
                }
                // SubProg filter pc: 1157 op: STARTLINE (58)

                /** sequence.e:1881							if compare(source[a], userdata[1]) <= 0 then*/
                // SubProg filter pc: 1159 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2280 = (object)*(((s1_ptr)_2)->base + _a_4652);
                // SubProg filter pc: 1163 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2281 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 1167 op: COMPARE (76)
                if (IS_ATOM_INT(_2280) && IS_ATOM_INT(_2281)){
                    _2282 = (_2280 < _2281) ? -1 : (_2280 > _2281);
                }
                else{
                    _2282 = compare(_2280, _2281);
                }
                _2280 = NOVALUE;
                _2281 = NOVALUE;
                // SubProg filter pc: 1171 op: LESSEQ_IFW_I (123)
                if (_2282 > 0)
                goto L3C; // [1171] 1194
                // SubProg filter pc: 1175 op: STARTLINE (58)

                /** sequence.e:1882								idx += 1*/
                // SubProg filter pc: 1177 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 1181 op: STARTLINE (58)

                /** sequence.e:1883								dest[idx] = source[a]*/
                // SubProg filter pc: 1183 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2285 = (object)*(((s1_ptr)_2)->base + _a_4652);
                // SubProg filter pc: 1187 op: ASSIGN_SUBS (16)
                Ref(_2285);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2285;
                if( _1 != _2285 ){
                    DeRef(_1);
                }
                _2285 = NOVALUE;
                // SubProg filter pc: 1191 op: ELSE (23)
                goto L3D; // [1191] 1230
                // SubProg filter pc: 1193 op: NOP1 (159)
L3C: // addr: 1194 pc: 1193 sub: 4416 op: 159
                // SubProg filter pc: 1194 op: STARTLINE (58)

                /** sequence.e:1884							elsif compare(source[a], userdata[2]) >= 0 then*/
                // SubProg filter pc: 1196 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2286 = (object)*(((s1_ptr)_2)->base + _a_4652);
                // SubProg filter pc: 1200 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4420);
                _2287 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1204 op: COMPARE (76)
                if (IS_ATOM_INT(_2286) && IS_ATOM_INT(_2287)){
                    _2288 = (_2286 < _2287) ? -1 : (_2286 > _2287);
                }
                else{
                    _2288 = compare(_2286, _2287);
                }
                _2286 = NOVALUE;
                _2287 = NOVALUE;
                // SubProg filter pc: 1208 op: GREATEREQ_IFW_I (120)
                if (_2288 < 0)
                goto L3E; // [1208] 1229
                // SubProg filter pc: 1212 op: STARTLINE (58)

                /** sequence.e:1885								idx += 1*/
                // SubProg filter pc: 1214 op: PLUS1_I (117)
                _idx_4423 = _idx_4423 + 1;
                // SubProg filter pc: 1218 op: STARTLINE (58)

                /** sequence.e:1886								dest[idx] = source[a]*/
                // SubProg filter pc: 1220 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4418);
                _2291 = (object)*(((s1_ptr)_2)->base + _a_4652);
                // SubProg filter pc: 1224 op: ASSIGN_SUBS (16)
                Ref(_2291);
                _2 = (object)SEQ_PTR(_dest_4422);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2291;
                if( _1 != _2291 ){
                    DeRef(_1);
                }
                _2291 = NOVALUE;
                // SubProg filter pc: 1228 op: NOP1 (159)
L3E: // addr: 1229 pc: 1228 sub: 4416 op: 159
                // SubProg filter pc: 1229 op: NOP1 (159)
L3D: // addr: 1230 pc: 1229 sub: 4416 op: 159
                // SubProg filter pc: 1230 op: STARTLINE (58)

                /** sequence.e:1888						end for*/
                // SubProg filter pc: 1232 op: ENDFOR_INT_UP1 (54)
                _a_4652 = _a_4652 + 1;
                goto L3A; // [1232] 1157
L3B: // addr: 1237 pc: 1232 sub: 4416 op: 54
                ;
            }
            // SubProg filter pc: 1237 op: ELSE (23)
            goto L5; // [1237] 1304
            // SubProg filter pc: 1239 op: STARTLINE (58)

            /** sequence.e:1889					case else*/
            // SubProg filter pc: 1241 op: CASE (186)
            case 0:
            // SubProg filter pc: 1243 op: NOPSWITCH (187)
        ;}        // SubProg filter pc: 1244 op: ELSE (23)
        goto L5; // [1244] 1304
        // SubProg filter pc: 1246 op: STARTLINE (58)

        /** sequence.e:1894			case else*/
        // SubProg filter pc: 1248 op: CASE (186)
        case 0:
        // SubProg filter pc: 1250 op: STARTLINE (58)

        /** sequence.e:1895				for a = 1 to length(source) do*/
        // SubProg filter pc: 1252 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4418)){
                _2292 = SEQ_PTR(_source_4418)->length;
        }
        else {
            _2292 = 1;
        }
        // SubProg filter pc: 1255 op: FOR_I (125)
        {
            object _a_4671;
            _a_4671 = 1;
L3F: // addr: 1262 pc: 1255 sub: 4416 op: 125
            if (_a_4671 > _2292){
                goto L40; // [1255] 1303
            }
            // SubProg filter pc: 1262 op: STARTLINE (58)

            /** sequence.e:1896					if call_func(rid, {source[a], userdata}) then*/
            // SubProg filter pc: 1264 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2293 = (object)*(((s1_ptr)_2)->base + _a_4671);
            // SubProg filter pc: 1268 op: RIGHT_BRACE_2 (85)
            Ref(_userdata_4420);
            Ref(_2293);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _2293;
            ((intptr_t *)_2)[2] = _userdata_4420;
            _2294 = MAKE_SEQ(_1);
            _2293 = NOVALUE;
            // SubProg filter pc: 1272 op: CALL_FUNC (137)
            _1 = (object)SEQ_PTR(_2294);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_rid_4419].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            Ref( *(( (intptr_t*)_2) + 2) );
            _1 = (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1), 
                                *( ((intptr_t *)_2) + 2)
                                 );
            DeRef(_2295);
            _2295 = _1;
            DeRefDS(_2294);
            _2294 = NOVALUE;
            // SubProg filter pc: 1276 op: IF (20)
            if (_2295 == 0) {
                DeRef(_2295);
                _2295 = NOVALUE;
                goto L41; // [1276] 1296
            }
            else {
                if (!IS_ATOM_INT(_2295) && DBL_PTR(_2295)->dbl == 0.0){
                    DeRef(_2295);
                    _2295 = NOVALUE;
                    goto L41; // [1276] 1296
                }
                DeRef(_2295);
                _2295 = NOVALUE;
            }
            DeRef(_2295);
            _2295 = NOVALUE;
            // SubProg filter pc: 1279 op: STARTLINE (58)

            /** sequence.e:1897						idx += 1*/
            // SubProg filter pc: 1281 op: PLUS1_I (117)
            _idx_4423 = _idx_4423 + 1;
            // SubProg filter pc: 1285 op: STARTLINE (58)

            /** sequence.e:1898						dest[idx] = source[a]*/
            // SubProg filter pc: 1287 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4418);
            _2297 = (object)*(((s1_ptr)_2)->base + _a_4671);
            // SubProg filter pc: 1291 op: ASSIGN_SUBS (16)
            Ref(_2297);
            _2 = (object)SEQ_PTR(_dest_4422);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4423);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2297;
            if( _1 != _2297 ){
                DeRef(_1);
            }
            _2297 = NOVALUE;
            // SubProg filter pc: 1295 op: NOP1 (159)
L41: // addr: 1296 pc: 1295 sub: 4416 op: 159
            // SubProg filter pc: 1296 op: STARTLINE (58)

            /** sequence.e:1900				end for*/
            // SubProg filter pc: 1298 op: ENDFOR_INT_UP1 (54)
            _a_4671 = _a_4671 + 1;
            goto L3F; // [1298] 1262
L40: // addr: 1303 pc: 1298 sub: 4416 op: 54
            ;
        }
        // SubProg filter pc: 1303 op: NOPSWITCH (187)
    ;}L5: // addr: 1304 pc: 1303 sub: 4416 op: 187
    // SubProg filter pc: 1304 op: STARTLINE (58)

    /** sequence.e:1902		return dest[1..idx]*/
    // SubProg filter pc: 1306 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2298;
    RHS_Slice(_dest_4422, 1, _idx_4423);
    // SubProg filter pc: 1311 op: RETURNF (28)

// Exiting block BLOCK: filter

// block var source_4418
    DeRefDS(_source_4418);

// block var rid_4419

// block var userdata_4420
    DeRef(_userdata_4420);

// block var rangetype_4421
    DeRef(_rangetype_4421);

// block var dest_4422
    DeRefDS(_dest_4422);

// block var idx_4423
    return _2298;
    // SubProg filter pc: 1315 op: BADRETURNF (43)
    ;
}


object _24filter_alpha(object _elem_4683, object _ud_4684)
{
    object _2299 = NOVALUE; // 4686 2299
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filter_alpha pc: 1 op: STARTLINE (58)

    /** sequence.e:1907		return t_alpha(elem)*/
    // SubProg filter_alpha pc: 3 op: PROC (27)
    Ref(_elem_4683);
    _2299 = _6t_alpha(_elem_4683);
    // SubProg filter_alpha pc: 7 op: RETURNF (28)

// Exiting block BLOCK: filter_alpha

// block var elem_4683
    DeRef(_elem_4683);
    return _2299;
    // SubProg filter_alpha pc: 11 op: BADRETURNF (43)
    ;
}


object _24split(object _st_4728, object _delim_4729, object _no_empty_4730, object _limit_4731)
{
    object _ret_4732 = NOVALUE;
    object _start_4733 = NOVALUE;
    object _pos_4734 = NOVALUE;
    object _k_4786 = NOVALUE;
    object _2367 = NOVALUE; // 4803 2367
// skipping _2366  name type: 0
    object _2365 = NOVALUE; // 4801 2365
    object _2364 = NOVALUE; // 4799 2364
// skipping _2363  name type: 0
// skipping _2362  name type: 0
// skipping _2361  name type: 0
    object _2360 = NOVALUE; // 4794 2360
    object _2359 = NOVALUE; // 4793 2359
    object _2358 = NOVALUE; // 4791 2358
// skipping _2357  name type: 0
// skipping _2356  name type: 0
    object _2355 = NOVALUE; // 4784 2355
    object _2354 = NOVALUE; // 4783 2354
// skipping _2353  name type: 0
// skipping _2352  name type: 0
// skipping _2351  name type: 0
// skipping _2350  name type: 0
    object _2349 = NOVALUE; // 4777 2349
    object _2348 = NOVALUE; // 4776 2348
// skipping _2347  name type: 0
// skipping _2346  name type: 0
// skipping _2345  name type: 0
    object _2344 = NOVALUE; // 4771 2344
// skipping _2343  name type: 0
// skipping _2342  name type: 0
// skipping _2341  name type: 0
    object _2340 = NOVALUE; // 4764 2340
// skipping _2339  name type: 0
    object _2338 = NOVALUE; // 4762 2338
    object _2337 = NOVALUE; // 4761 2337
// skipping _2336  name type: 0
// skipping _2335  name type: 0
// skipping _2334  name type: 0
    object _2333 = NOVALUE; // 4756 2333
// skipping _2332  name type: 0
    object _2331 = NOVALUE; // 4753 2331
    object _2330 = NOVALUE; // 4752 2330
    object _2329 = NOVALUE; // 4751 2329
    object _2328 = NOVALUE; // 4750 2328
// skipping _2327  name type: 0
// skipping _2326  name type: 0
    object _2325 = NOVALUE; // 4746 2325
    object _2324 = NOVALUE; // 4745 2324
    object _2323 = NOVALUE; // 4744 2323
    object _2322 = NOVALUE; // 4741 2322
    object _2321 = NOVALUE; // 4739 2321
// skipping _2320  name type: 0
    object _2319 = NOVALUE; // 4736 2319
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg split pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg split pc: 3 op: INTEGER_CHECK (96)
    // SubProg split pc: 5 op: INTEGER_CHECK (96)
    // SubProg split pc: 7 op: STARTLINE (58)

    /** sequence.e:2088		sequence ret = {}*/
    // SubProg split pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_4732);
    _ret_4732 = _5;
    // SubProg split pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg split pc: 14 op: STARTLINE (58)

    /** sequence.e:2092		if length(st) = 0 then*/
    // SubProg split pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_st_4728)){
            _2319 = SEQ_PTR(_st_4728)->length;
    }
    else {
        _2319 = 1;
    }
    // SubProg split pc: 19 op: EQUALS_IFW_I (121)
    if (_2319 != 0)
    goto L1; // [19] 30
    // SubProg split pc: 23 op: STARTLINE (58)

    /** sequence.e:2093			return ret*/
    // SubProg split pc: 25 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_4728
    DeRefDS(_st_4728);

// block var delim_4729
    DeRefi(_delim_4729);

// block var no_empty_4730

// block var limit_4731

// block var start_4733

// block var pos_4734

// block var k_4786
    return _ret_4732;
    // SubProg split pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 4726 op: 159
    // SubProg split pc: 30 op: STARTLINE (58)

    /** sequence.e:2097		if sequence(delim) then*/
    // SubProg split pc: 32 op: IS_A_SEQUENCE (68)
    _2321 = IS_SEQUENCE(_delim_4729);
    // SubProg split pc: 35 op: IF (20)
    if (_2321 == 0)
    {
        _2321 = NOVALUE;
        goto L2; // [35] 211
    }
    else{
        _2321 = NOVALUE;
    }
    // SubProg split pc: 38 op: STARTLINE (58)

    /** sequence.e:2099			if equal(delim, "") then*/
    // SubProg split pc: 40 op: EQUAL (153)
    if (_delim_4729 == _5)
    _2322 = 1;
    else if (IS_ATOM_INT(_delim_4729) && IS_ATOM_INT(_5))
    _2322 = 0;
    else
    _2322 = (compare(_delim_4729, _5) == 0);
    // SubProg split pc: 44 op: IF (20)
    if (_2322 == 0)
    {
        _2322 = NOVALUE;
        goto L3; // [44] 127
    }
    else{
        _2322 = NOVALUE;
    }
    // SubProg split pc: 47 op: STARTLINE (58)

    /** sequence.e:2100				for i = 1 to length(st) do*/
    // SubProg split pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_st_4728)){
            _2323 = SEQ_PTR(_st_4728)->length;
    }
    else {
        _2323 = 1;
    }
    // SubProg split pc: 52 op: FOR_I (125)
    {
        object _i_4743;
        _i_4743 = 1;
L4: // addr: 59 pc: 52 sub: 4726 op: 125
        if (_i_4743 > _2323){
            goto L5; // [52] 120
        }
        // SubProg split pc: 59 op: STARTLINE (58)

        /** sequence.e:2101					st[i] = {st[i]}*/
        // SubProg split pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_st_4728);
        _2324 = (object)*(((s1_ptr)_2)->base + _i_4743);
        // SubProg split pc: 65 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_2324);
        ((intptr_t*)_2)[1] = _2324;
        _2325 = MAKE_SEQ(_1);
        _2324 = NOVALUE;
        // SubProg split pc: 69 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_st_4728);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _st_4728 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_4743);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2325;
        if( _1 != _2325 ){
            DeRef(_1);
        }
        _2325 = NOVALUE;
        // SubProg split pc: 73 op: STARTLINE (58)

        /** sequence.e:2102					limit -= 1*/
        // SubProg split pc: 75 op: MINUS_I (116)
        _limit_4731 = _limit_4731 - 1;
        // SubProg split pc: 79 op: STARTLINE (58)

        /** sequence.e:2103					if limit = 0 then*/
        // SubProg split pc: 81 op: EQUALS_IFW_I (121)
        if (_limit_4731 != 0)
        goto L6; // [81] 113
        // SubProg split pc: 85 op: STARTLINE (58)

        /** sequence.e:2104						st = append(st[1 .. i],st[i+1 .. $])*/
        // SubProg split pc: 87 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_2328;
        RHS_Slice(_st_4728, 1, _i_4743);
        // SubProg split pc: 92 op: PLUS1 (93)
        _2329 = _i_4743 + 1;
        // SubProg split pc: 96 op: LENGTH (42)
        if (IS_SEQUENCE(_st_4728)){
                _2330 = SEQ_PTR(_st_4728)->length;
        }
        else {
            _2330 = 1;
        }
        // SubProg split pc: 99 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_2331;
        RHS_Slice(_st_4728, _2329, _2330);
        // SubProg split pc: 104 op: APPEND (35)
        RefDS(_2331);
        Append(&_st_4728, _2328, _2331);
        DeRefDS(_2328);
        _2328 = NOVALUE;
        DeRefDS(_2331);
        _2331 = NOVALUE;
        // SubProg split pc: 108 op: STARTLINE (58)

        /** sequence.e:2105						exit*/
        // SubProg split pc: 110 op: EXIT (61)
        goto L5; // [110] 120
        // SubProg split pc: 112 op: NOP1 (159)
L6: // addr: 113 pc: 112 sub: 4726 op: 159
        // SubProg split pc: 113 op: STARTLINE (58)

        /** sequence.e:2107				end for*/
        // SubProg split pc: 115 op: ENDFOR_INT_UP1 (54)
        _i_4743 = _i_4743 + 1;
        goto L4; // [115] 59
L5: // addr: 120 pc: 115 sub: 4726 op: 54
        ;
    }
    // SubProg split pc: 120 op: STARTLINE (58)

    /** sequence.e:2109				return st*/
    // SubProg split pc: 122 op: RETURNF (28)

// Exiting block BLOCK: split

// block var delim_4729
    DeRefi(_delim_4729);

// block var no_empty_4730

// block var limit_4731

// block var ret_4732
    DeRef(_ret_4732);

// block var start_4733

// block var pos_4734

// block var k_4786
    DeRef(_2329);
    _2329 = NOVALUE;
    return _st_4728;
    // SubProg split pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 4726 op: 159
    // SubProg split pc: 127 op: STARTLINE (58)

    /** sequence.e:2112			start = 1*/
    // SubProg split pc: 129 op: ASSIGN_I (113)
    _start_4733 = 1;
    // SubProg split pc: 132 op: STARTLINE (58)

    /** sequence.e:2113			while start <= length(st) do*/
    // SubProg split pc: 134 op: NOP2 (110)
    // SubProg split pc: 136 op: NOPWHILE (158)
L7: // addr: 137 pc: 136 sub: 4726 op: 158
    // SubProg split pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_st_4728)){
            _2333 = SEQ_PTR(_st_4728)->length;
    }
    else {
        _2333 = 1;
    }
    // SubProg split pc: 140 op: LESSEQ_IFW_I (123)
    if (_start_4733 > _2333)
    goto L8; // [140] 290
    // SubProg split pc: 144 op: STARTLINE (58)

    /** sequence.e:2114				pos = match(delim, st, start)*/
    // SubProg split pc: 146 op: MATCH_FROM (177)
    _pos_4734 = e_match_from(_delim_4729, _st_4728, _start_4733);
    // SubProg split pc: 151 op: STARTLINE (58)

    /** sequence.e:2116				if pos = 0 then*/
    // SubProg split pc: 153 op: EQUALS_IFW_I (121)
    if (_pos_4734 != 0)
    goto L9; // [153] 162
    // SubProg split pc: 157 op: STARTLINE (58)

    /** sequence.e:2117					exit*/
    // SubProg split pc: 159 op: EXIT (61)
    goto L8; // [159] 290
    // SubProg split pc: 161 op: NOP1 (159)
L9: // addr: 162 pc: 161 sub: 4726 op: 159
    // SubProg split pc: 162 op: STARTLINE (58)

    /** sequence.e:2120				ret = append(ret, st[start..pos-1])*/
    // SubProg split pc: 164 op: MINUS (10)
    _2337 = _pos_4734 - 1;
    // SubProg split pc: 168 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2338;
    RHS_Slice(_st_4728, _start_4733, _2337);
    // SubProg split pc: 173 op: APPEND (35)
    RefDS(_2338);
    Append(&_ret_4732, _ret_4732, _2338);
    DeRefDS(_2338);
    _2338 = NOVALUE;
    // SubProg split pc: 177 op: STARTLINE (58)

    /** sequence.e:2121				start = pos+length(delim)*/
    // SubProg split pc: 179 op: LENGTH (42)
    if (IS_SEQUENCE(_delim_4729)){
            _2340 = SEQ_PTR(_delim_4729)->length;
    }
    else {
        _2340 = 1;
    }
    // SubProg split pc: 182 op: PLUS_I (115)
    _start_4733 = _pos_4734 + _2340;
    _2340 = NOVALUE;
    // SubProg split pc: 186 op: STARTLINE (58)

    /** sequence.e:2122				limit -= 1*/
    // SubProg split pc: 188 op: MINUS_I (116)
    _limit_4731 = _limit_4731 - 1;
    // SubProg split pc: 192 op: STARTLINE (58)

    /** sequence.e:2123				if limit = 0 then*/
    // SubProg split pc: 194 op: EQUALS_IFW_I (121)
    if (_limit_4731 != 0)
    goto L7; // [194] 137
    // SubProg split pc: 198 op: STARTLINE (58)

    /** sequence.e:2124					exit*/
    // SubProg split pc: 200 op: EXIT (61)
    goto L8; // [200] 290
    // SubProg split pc: 202 op: NOP1 (159)
    // SubProg split pc: 203 op: STARTLINE (58)

    /** sequence.e:2126			end while*/
    // SubProg split pc: 205 op: ENDWHILE (22)
    goto L7; // [205] 137
    // SubProg split pc: 207 op: NOP1 (159)
    // SubProg split pc: 208 op: ELSE (23)
    goto L8; // [208] 290
    // SubProg split pc: 210 op: NOP1 (159)
L2: // addr: 211 pc: 210 sub: 4726 op: 159
    // SubProg split pc: 211 op: STARTLINE (58)

    /** sequence.e:2128			start = 1*/
    // SubProg split pc: 213 op: ASSIGN_I (113)
    _start_4733 = 1;
    // SubProg split pc: 216 op: STARTLINE (58)

    /** sequence.e:2129			while start <= length(st) do*/
    // SubProg split pc: 218 op: NOP2 (110)
    // SubProg split pc: 220 op: NOPWHILE (158)
LA: // addr: 221 pc: 220 sub: 4726 op: 158
    // SubProg split pc: 221 op: LENGTH (42)
    if (IS_SEQUENCE(_st_4728)){
            _2344 = SEQ_PTR(_st_4728)->length;
    }
    else {
        _2344 = 1;
    }
    // SubProg split pc: 224 op: LESSEQ_IFW_I (123)
    if (_start_4733 > _2344)
    goto LB; // [224] 289
    // SubProg split pc: 228 op: STARTLINE (58)

    /** sequence.e:2130				pos = find(delim, st, start)*/
    // SubProg split pc: 230 op: FIND_FROM (176)
    _pos_4734 = find_from(_delim_4729, _st_4728, _start_4733);
    // SubProg split pc: 235 op: STARTLINE (58)

    /** sequence.e:2132				if pos = 0 then*/
    // SubProg split pc: 237 op: EQUALS_IFW_I (121)
    if (_pos_4734 != 0)
    goto LC; // [237] 246
    // SubProg split pc: 241 op: STARTLINE (58)

    /** sequence.e:2133					exit*/
    // SubProg split pc: 243 op: EXIT (61)
    goto LB; // [243] 289
    // SubProg split pc: 245 op: NOP1 (159)
LC: // addr: 246 pc: 245 sub: 4726 op: 159
    // SubProg split pc: 246 op: STARTLINE (58)

    /** sequence.e:2136				ret = append(ret, st[start..pos-1])*/
    // SubProg split pc: 248 op: MINUS (10)
    _2348 = _pos_4734 - 1;
    // SubProg split pc: 252 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2349;
    RHS_Slice(_st_4728, _start_4733, _2348);
    // SubProg split pc: 257 op: APPEND (35)
    RefDS(_2349);
    Append(&_ret_4732, _ret_4732, _2349);
    DeRefDS(_2349);
    _2349 = NOVALUE;
    // SubProg split pc: 261 op: STARTLINE (58)

    /** sequence.e:2137				start = pos + 1*/
    // SubProg split pc: 263 op: PLUS1_I (117)
    _start_4733 = _pos_4734 + 1;
    // SubProg split pc: 267 op: STARTLINE (58)

    /** sequence.e:2138				limit -= 1*/
    // SubProg split pc: 269 op: MINUS_I (116)
    _limit_4731 = _limit_4731 - 1;
    // SubProg split pc: 273 op: STARTLINE (58)

    /** sequence.e:2139				if limit = 0 then*/
    // SubProg split pc: 275 op: EQUALS_IFW_I (121)
    if (_limit_4731 != 0)
    goto LA; // [275] 221
    // SubProg split pc: 279 op: STARTLINE (58)

    /** sequence.e:2140					exit*/
    // SubProg split pc: 281 op: EXIT (61)
    goto LB; // [281] 289
    // SubProg split pc: 283 op: NOP1 (159)
    // SubProg split pc: 284 op: STARTLINE (58)

    /** sequence.e:2142			end while*/
    // SubProg split pc: 286 op: ENDWHILE (22)
    goto LA; // [286] 221
    // SubProg split pc: 288 op: NOP1 (159)
LB: // addr: 289 pc: 288 sub: 4726 op: 159
    // SubProg split pc: 289 op: NOP1 (159)
L8: // addr: 290 pc: 289 sub: 4726 op: 159
    // SubProg split pc: 290 op: STARTLINE (58)

    /** sequence.e:2145		ret = append(ret, st[start..$])*/
    // SubProg split pc: 292 op: PRIVATE_INIT_CHECK (30)
    // SubProg split pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_st_4728)){
            _2354 = SEQ_PTR(_st_4728)->length;
    }
    else {
        _2354 = 1;
    }
    // SubProg split pc: 297 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2355;
    RHS_Slice(_st_4728, _start_4733, _2354);
    // SubProg split pc: 302 op: APPEND (35)
    RefDS(_2355);
    Append(&_ret_4732, _ret_4732, _2355);
    DeRefDS(_2355);
    _2355 = NOVALUE;
    // SubProg split pc: 306 op: STARTLINE (58)

    /** sequence.e:2147		integer k = length(ret)*/
    // SubProg split pc: 308 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4732)){
            _k_4786 = SEQ_PTR(_ret_4732)->length;
    }
    else {
        _k_4786 = 1;
    }
    // SubProg split pc: 311 op: STARTLINE (58)

    /** sequence.e:2148		if no_empty then*/
    // SubProg split pc: 313 op: IF (20)
    if (_no_empty_4730 == 0)
    {
        goto LD; // [313] 378
    }
    else{
    }
    // SubProg split pc: 316 op: STARTLINE (58)

    /** sequence.e:2149			k = 0*/
    // SubProg split pc: 318 op: ASSIGN_I (113)
    _k_4786 = 0;
    // SubProg split pc: 321 op: STARTLINE (58)

    /** sequence.e:2150			for i = 1 to length(ret) do*/
    // SubProg split pc: 323 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4732)){
            _2358 = SEQ_PTR(_ret_4732)->length;
    }
    else {
        _2358 = 1;
    }
    // SubProg split pc: 326 op: FOR_I (125)
    {
        object _i_4790;
        _i_4790 = 1;
LE: // addr: 333 pc: 326 sub: 4726 op: 125
        if (_i_4790 > _2358){
            goto LF; // [326] 377
        }
        // SubProg split pc: 333 op: STARTLINE (58)

        /** sequence.e:2151				if length(ret[i]) != 0 then*/
        // SubProg split pc: 335 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ret_4732);
        _2359 = (object)*(((s1_ptr)_2)->base + _i_4790);
        // SubProg split pc: 339 op: LENGTH (42)
        if (IS_SEQUENCE(_2359)){
                _2360 = SEQ_PTR(_2359)->length;
        }
        else {
            _2360 = 1;
        }
        _2359 = NOVALUE;
        // SubProg split pc: 342 op: NOTEQ_IFW_I (122)
        if (_2360 == 0)
        goto L10; // [342] 370
        // SubProg split pc: 346 op: STARTLINE (58)

        /** sequence.e:2152					k += 1*/
        // SubProg split pc: 348 op: PLUS1_I (117)
        _k_4786 = _k_4786 + 1;
        // SubProg split pc: 352 op: STARTLINE (58)

        /** sequence.e:2153					if k != i then*/
        // SubProg split pc: 354 op: NOTEQ_IFW_I (122)
        if (_k_4786 == _i_4790)
        goto L11; // [354] 369
        // SubProg split pc: 358 op: STARTLINE (58)

        /** sequence.e:2154						ret[k] = ret[i]*/
        // SubProg split pc: 360 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ret_4732);
        _2364 = (object)*(((s1_ptr)_2)->base + _i_4790);
        // SubProg split pc: 364 op: ASSIGN_SUBS (16)
        Ref(_2364);
        _2 = (object)SEQ_PTR(_ret_4732);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _ret_4732 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _k_4786);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2364;
        if( _1 != _2364 ){
            DeRef(_1);
        }
        _2364 = NOVALUE;
        // SubProg split pc: 368 op: NOP1 (159)
L11: // addr: 369 pc: 368 sub: 4726 op: 159
        // SubProg split pc: 369 op: NOP1 (159)
L10: // addr: 370 pc: 369 sub: 4726 op: 159
        // SubProg split pc: 370 op: STARTLINE (58)

        /** sequence.e:2157			end for*/
        // SubProg split pc: 372 op: ENDFOR_INT_UP1 (54)
        _i_4790 = _i_4790 + 1;
        goto LE; // [372] 333
LF: // addr: 377 pc: 372 sub: 4726 op: 54
        ;
    }
    // SubProg split pc: 377 op: NOP1 (159)
LD: // addr: 378 pc: 377 sub: 4726 op: 159
    // SubProg split pc: 378 op: STARTLINE (58)

    /** sequence.e:2160		if k < length(ret) then*/
    // SubProg split pc: 380 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4732)){
            _2365 = SEQ_PTR(_ret_4732)->length;
    }
    else {
        _2365 = 1;
    }
    // SubProg split pc: 383 op: LESS_IFW_I (119)
    if (_k_4786 >= _2365)
    goto L12; // [383] 401
    // SubProg split pc: 387 op: STARTLINE (58)

    /** sequence.e:2161			return ret[1 .. k]*/
    // SubProg split pc: 389 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2367;
    RHS_Slice(_ret_4732, 1, _k_4786);
    // SubProg split pc: 394 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_4728
    DeRefDS(_st_4728);

// block var delim_4729
    DeRefi(_delim_4729);

// block var no_empty_4730

// block var limit_4731

// block var ret_4732
    DeRefDS(_ret_4732);

// block var start_4733

// block var pos_4734

// block var k_4786
    DeRef(_2329);
    _2329 = NOVALUE;
    DeRef(_2348);
    _2348 = NOVALUE;
    DeRef(_2337);
    _2337 = NOVALUE;
    _2359 = NOVALUE;
    return _2367;
    // SubProg split pc: 398 op: ELSE (23)
    goto L13; // [398] 408
    // SubProg split pc: 400 op: NOP1 (159)
L12: // addr: 401 pc: 400 sub: 4726 op: 159
    // SubProg split pc: 401 op: STARTLINE (58)

    /** sequence.e:2163			return ret*/
    // SubProg split pc: 403 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_4728
    DeRefDS(_st_4728);

// block var delim_4729
    DeRefi(_delim_4729);

// block var no_empty_4730

// block var limit_4731

// block var start_4733

// block var pos_4734

// block var k_4786
    DeRef(_2329);
    _2329 = NOVALUE;
    DeRef(_2367);
    _2367 = NOVALUE;
    DeRef(_2348);
    _2348 = NOVALUE;
    DeRef(_2337);
    _2337 = NOVALUE;
    _2359 = NOVALUE;
    return _ret_4732;
    // SubProg split pc: 407 op: NOP1 (159)
L13: // addr: 408 pc: 407 sub: 4726 op: 159
    // SubProg split pc: 408 op: BADRETURNF (43)
    ;
}


object _24join(object _items_4855, object _delim_4856)
{
    object _ret_4858 = NOVALUE;
// skipping _2403  name type: 0
    object _2402 = NOVALUE; // 4870 2402
    object _2401 = NOVALUE; // 4869 2401
// skipping _2400  name type: 0
    object _2399 = NOVALUE; // 4867 2399
    object _2398 = NOVALUE; // 4866 2398
    object _2397 = NOVALUE; // 4865 2397
    object _2396 = NOVALUE; // 4864 2396
// skipping _2395  name type: 0
    object _2394 = NOVALUE; // 4860 2394
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg join pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg join pc: 3 op: STARTLINE (58)

    /** sequence.e:2279		if not length(items) then return {} end if*/
    // SubProg join pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_items_4855)){
            _2394 = SEQ_PTR(_items_4855)->length;
    }
    else {
        _2394 = 1;
    }
    // SubProg join pc: 8 op: NOT_IFW (108)
    if (_2394 != 0)
    goto L1; // [8] 16
    _2394 = NOVALUE;
    // SubProg join pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: join

// block var items_4855
    DeRefDS(_items_4855);

// block var delim_4856

// block var ret_4858
    DeRef(_ret_4858);
    return _5;
    // SubProg join pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 4853 op: 159
    // SubProg join pc: 16 op: STARTLINE (58)

    /** sequence.e:2281		ret = {}*/
    // SubProg join pc: 18 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_4858);
    _ret_4858 = _5;
    // SubProg join pc: 21 op: STARTLINE (58)

    /** sequence.e:2282		for i=1 to length(items)-1 do*/
    // SubProg join pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_items_4855)){
            _2396 = SEQ_PTR(_items_4855)->length;
    }
    else {
        _2396 = 1;
    }
    // SubProg join pc: 26 op: MINUS (10)
    _2397 = _2396 - 1;
    _2396 = NOVALUE;
    // SubProg join pc: 30 op: FOR (21)
    {
        object _i_4863;
        _i_4863 = 1;
L2: // addr: 37 pc: 30 sub: 4853 op: 21
        if (_i_4863 > _2397){
            goto L3; // [30] 58
        }
        // SubProg join pc: 37 op: STARTLINE (58)

        /** sequence.e:2283			ret &= items[i] & delim*/
        // SubProg join pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_items_4855);
        _2398 = (object)*(((s1_ptr)_2)->base + _i_4863);
        // SubProg join pc: 43 op: CONCAT (15)
        if (IS_SEQUENCE(_2398) && IS_ATOM(_delim_4856)) {
            Append(&_2399, _2398, _delim_4856);
        }
        else if (IS_ATOM(_2398) && IS_SEQUENCE(_delim_4856)) {
        }
        else {
            Concat((object_ptr)&_2399, _2398, _delim_4856);
            _2398 = NOVALUE;
        }
        _2398 = NOVALUE;
        // SubProg join pc: 47 op: CONCAT (15)
        if (IS_SEQUENCE(_ret_4858) && IS_ATOM(_2399)) {
        }
        else if (IS_ATOM(_ret_4858) && IS_SEQUENCE(_2399)) {
            Ref(_ret_4858);
            Prepend(&_ret_4858, _2399, _ret_4858);
        }
        else {
            Concat((object_ptr)&_ret_4858, _ret_4858, _2399);
        }
        DeRefDS(_2399);
        _2399 = NOVALUE;
        // SubProg join pc: 51 op: STARTLINE (58)

        /** sequence.e:2284		end for*/
        // SubProg join pc: 53 op: ENDFOR_INT_UP1 (54)
        _i_4863 = _i_4863 + 1;
        goto L2; // [53] 37
L3: // addr: 58 pc: 53 sub: 4853 op: 54
        ;
    }
    // SubProg join pc: 58 op: STARTLINE (58)

    /** sequence.e:2286		ret &= items[$]*/
    // SubProg join pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_items_4855)){
            _2401 = SEQ_PTR(_items_4855)->length;
    }
    else {
        _2401 = 1;
    }
    // SubProg join pc: 63 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_items_4855);
    _2402 = (object)*(((s1_ptr)_2)->base + _2401);
    // SubProg join pc: 67 op: CONCAT (15)
    if (IS_SEQUENCE(_ret_4858) && IS_ATOM(_2402)) {
        Ref(_2402);
        Append(&_ret_4858, _ret_4858, _2402);
    }
    else if (IS_ATOM(_ret_4858) && IS_SEQUENCE(_2402)) {
        Ref(_ret_4858);
        Prepend(&_ret_4858, _2402, _ret_4858);
    }
    else {
        Concat((object_ptr)&_ret_4858, _ret_4858, _2402);
    }
    _2402 = NOVALUE;
    // SubProg join pc: 71 op: STARTLINE (58)

    /** sequence.e:2288		return ret*/
    // SubProg join pc: 73 op: RETURNF (28)

// Exiting block BLOCK: join

// block var items_4855
    DeRefDS(_items_4855);

// block var delim_4856
    DeRef(_2397);
    _2397 = NOVALUE;
    return _ret_4858;
    // SubProg join pc: 77 op: BADRETURNF (43)
    ;
}


object _24flatten(object _s_4965, object _delim_4966)
{
    object _ret_4967 = NOVALUE;
    object _x_4968 = NOVALUE;
    object _len_4969 = NOVALUE;
    object _pos_4970 = NOVALUE;
    object _temp_4988 = NOVALUE;
// skipping _2491  name type: 0
// skipping _2490  name type: 0
// skipping _2489  name type: 0
    object _2488 = NOVALUE; // 5003 2488
    object _2487 = NOVALUE; // 5002 2487
    object _2486 = NOVALUE; // 5001 2486
// skipping _2485  name type: 0
    object _2484 = NOVALUE; // 4998 2484
    object _2483 = NOVALUE; // 4997 2483
    object _2482 = NOVALUE; // 4996 2482
// skipping _2481  name type: 0
    object _2480 = NOVALUE; // 4994 2480
// skipping _2479  name type: 0
    object _2478 = NOVALUE; // 4991 2478
    object _2477 = NOVALUE; // 4990 2477
    object _2476 = NOVALUE; // 4989 2476
// skipping _2475  name type: 0
    object _2474 = NOVALUE; // 4985 2474
    object _2473 = NOVALUE; // 4984 2473
    object _2472 = NOVALUE; // 4983 2472
    object _2471 = NOVALUE; // 4982 2471
    object _2470 = NOVALUE; // 4981 2470
    object _2469 = NOVALUE; // 4980 2469
// skipping _2468  name type: 0
    object _2467 = NOVALUE; // 4978 2467
    object _2466 = NOVALUE; // 4976 2466
// skipping _2465  name type: 0
// skipping _2464  name type: 0
// skipping _2463  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flatten pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg flatten pc: 3 op: STARTLINE (58)

    /** sequence.e:2491		ret = s*/
    // SubProg flatten pc: 5 op: ASSIGN (18)
    RefDS(_s_4965);
    DeRef(_ret_4967);
    _ret_4967 = _s_4965;
    // SubProg flatten pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg flatten pc: 10 op: STARTLINE (58)

    /** sequence.e:2492		pos = 1*/
    // SubProg flatten pc: 12 op: ASSIGN_I (113)
    _pos_4970 = 1;
    // SubProg flatten pc: 15 op: STARTLINE (58)

    /** sequence.e:2493		len = length(ret)*/
    // SubProg flatten pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4967)){
            _len_4969 = SEQ_PTR(_ret_4967)->length;
    }
    else {
        _len_4969 = 1;
    }
    // SubProg flatten pc: 20 op: STARTLINE (58)

    /** sequence.e:2494		while pos <= len do*/
    // SubProg flatten pc: 22 op: NOP2 (110)
    // SubProg flatten pc: 24 op: NOPWHILE (158)
L1: // addr: 25 pc: 24 sub: 4963 op: 158
    // SubProg flatten pc: 25 op: LESSEQ_IFW_I (123)
    if (_pos_4970 > _len_4969)
    goto L2; // [25] 183
    // SubProg flatten pc: 29 op: STARTLINE (58)

    /** sequence.e:2495			x = ret[pos]*/
    // SubProg flatten pc: 31 op: RHS_SUBS (25)
    DeRef(_x_4968);
    _2 = (object)SEQ_PTR(_ret_4967);
    _x_4968 = (object)*(((s1_ptr)_2)->base + _pos_4970);
    Ref(_x_4968);
    // SubProg flatten pc: 35 op: STARTLINE (58)

    /** sequence.e:2496			if sequence(x) then*/
    // SubProg flatten pc: 37 op: IS_A_SEQUENCE (68)
    _2466 = IS_SEQUENCE(_x_4968);
    // SubProg flatten pc: 40 op: IF (20)
    if (_2466 == 0)
    {
        _2466 = NOVALUE;
        goto L3; // [40] 171
    }
    else{
        _2466 = NOVALUE;
    }
    // SubProg flatten pc: 43 op: STARTLINE (58)

    /** sequence.e:2497				if length(delim) = 0 then*/
    // SubProg flatten pc: 45 op: LENGTH (42)
    if (IS_SEQUENCE(_delim_4966)){
            _2467 = SEQ_PTR(_delim_4966)->length;
    }
    else {
        _2467 = 1;
    }
    // SubProg flatten pc: 48 op: EQUALS_IFW_I (121)
    if (_2467 != 0)
    goto L4; // [48] 89
    // SubProg flatten pc: 52 op: STARTLINE (58)

    /** sequence.e:2498					ret = ret[1..pos-1] & flatten(x) & ret[pos+1 .. $]*/
    // SubProg flatten pc: 54 op: MINUS (10)
    _2469 = _pos_4970 - 1;
    // SubProg flatten pc: 58 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2470;
    RHS_Slice(_ret_4967, 1, _2469);
    // SubProg flatten pc: 63 op: PROC (27)
    Ref(_x_4968);
    RefDS(_5);
    _2471 = _24flatten(_x_4968, _5);
    // SubProg flatten pc: 68 op: PLUS1 (93)
    _2472 = _pos_4970 + 1;
    if (_2472 > MAXINT){
        _2472 = NewDouble((eudouble)_2472);
    }
    // SubProg flatten pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4967)){
            _2473 = SEQ_PTR(_ret_4967)->length;
    }
    else {
        _2473 = 1;
    }
    // SubProg flatten pc: 75 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2474;
    RHS_Slice(_ret_4967, _2472, _2473);
    // SubProg flatten pc: 80 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _2474;
        concat_list[1] = _2471;
        concat_list[2] = _2470;
        Concat_N((object_ptr)&_ret_4967, concat_list, 3);
    }
    DeRefDS(_2474);
    _2474 = NOVALUE;
    DeRef(_2471);
    _2471 = NOVALUE;
    DeRefDS(_2470);
    _2470 = NOVALUE;
    // SubProg flatten pc: 86 op: ELSE (23)
    goto L5; // [86] 163
    // SubProg flatten pc: 88 op: NOP1 (159)
L4: // addr: 89 pc: 88 sub: 4963 op: 159
    // SubProg flatten pc: 89 op: STARTLINE (58)

    /** sequence.e:2500					sequence temp = ret[1..pos-1] & flatten(x)*/
    // SubProg flatten pc: 91 op: MINUS (10)
    _2476 = _pos_4970 - 1;
    // SubProg flatten pc: 95 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2477;
    RHS_Slice(_ret_4967, 1, _2476);
    // SubProg flatten pc: 100 op: PROC (27)
    Ref(_x_4968);
    RefDS(_5);
    _2478 = _24flatten(_x_4968, _5);
    // SubProg flatten pc: 105 op: CONCAT (15)
    if (IS_SEQUENCE(_2477) && IS_ATOM(_2478)) {
        Ref(_2478);
        Append(&_temp_4988, _2477, _2478);
    }
    else if (IS_ATOM(_2477) && IS_SEQUENCE(_2478)) {
    }
    else {
        Concat((object_ptr)&_temp_4988, _2477, _2478);
        DeRefDS(_2477);
        _2477 = NOVALUE;
    }
    DeRef(_2477);
    _2477 = NOVALUE;
    DeRef(_2478);
    _2478 = NOVALUE;
    // SubProg flatten pc: 109 op: STARTLINE (58)

    /** sequence.e:2501					if pos != length(ret) then*/
    // SubProg flatten pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4967)){
            _2480 = SEQ_PTR(_ret_4967)->length;
    }
    else {
        _2480 = 1;
    }
    // SubProg flatten pc: 114 op: NOTEQ_IFW_I (122)
    if (_pos_4970 == _2480)
    goto L6; // [114] 141
    // SubProg flatten pc: 118 op: STARTLINE (58)

    /** sequence.e:2502						ret = temp &  delim & ret[pos+1 .. $]*/
    // SubProg flatten pc: 120 op: PLUS1 (93)
    _2482 = _pos_4970 + 1;
    if (_2482 > MAXINT){
        _2482 = NewDouble((eudouble)_2482);
    }
    // SubProg flatten pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4967)){
            _2483 = SEQ_PTR(_ret_4967)->length;
    }
    else {
        _2483 = 1;
    }
    // SubProg flatten pc: 127 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2484;
    RHS_Slice(_ret_4967, _2482, _2483);
    // SubProg flatten pc: 132 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _2484;
        concat_list[1] = _delim_4966;
        concat_list[2] = _temp_4988;
        Concat_N((object_ptr)&_ret_4967, concat_list, 3);
    }
    DeRefDS(_2484);
    _2484 = NOVALUE;
    // SubProg flatten pc: 138 op: ELSE (23)
    goto L7; // [138] 160
    // SubProg flatten pc: 140 op: NOP1 (159)
L6: // addr: 141 pc: 140 sub: 4963 op: 159
    // SubProg flatten pc: 141 op: STARTLINE (58)

    /** sequence.e:2504						ret = temp & ret[pos+1 .. $]*/
    // SubProg flatten pc: 143 op: PLUS1 (93)
    _2486 = _pos_4970 + 1;
    if (_2486 > MAXINT){
        _2486 = NewDouble((eudouble)_2486);
    }
    // SubProg flatten pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4967)){
            _2487 = SEQ_PTR(_ret_4967)->length;
    }
    else {
        _2487 = 1;
    }
    // SubProg flatten pc: 150 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2488;
    RHS_Slice(_ret_4967, _2486, _2487);
    // SubProg flatten pc: 155 op: CONCAT (15)
    Concat((object_ptr)&_ret_4967, _temp_4988, _2488);
    DeRefDS(_2488);
    _2488 = NOVALUE;
    // SubProg flatten pc: 159 op: NOP1 (159)
L7: // addr: 160 pc: 159 sub: 4963 op: 159
    // SubProg flatten pc: 160 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var temp_4988
    DeRef(_temp_4988);
    _temp_4988 = NOVALUE;
    // SubProg flatten pc: 162 op: NOP1 (159)
L5: // addr: 163 pc: 162 sub: 4963 op: 159
    // SubProg flatten pc: 163 op: STARTLINE (58)

    /** sequence.e:2507				len = length(ret)*/
    // SubProg flatten pc: 165 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_4967)){
            _len_4969 = SEQ_PTR(_ret_4967)->length;
    }
    else {
        _len_4969 = 1;
    }
    // SubProg flatten pc: 168 op: ELSE (23)
    goto L1; // [168] 25
    // SubProg flatten pc: 170 op: NOP1 (159)
L3: // addr: 171 pc: 170 sub: 4963 op: 159
    // SubProg flatten pc: 171 op: STARTLINE (58)

    /** sequence.e:2509				pos += 1*/
    // SubProg flatten pc: 173 op: PLUS1_I (117)
    _pos_4970 = _pos_4970 + 1;
    // SubProg flatten pc: 177 op: NOP1 (159)
    // SubProg flatten pc: 178 op: STARTLINE (58)

    /** sequence.e:2511		end while*/
    // SubProg flatten pc: 180 op: ENDWHILE (22)
    goto L1; // [180] 25
    // SubProg flatten pc: 182 op: NOP1 (159)
L2: // addr: 183 pc: 182 sub: 4963 op: 159
    // SubProg flatten pc: 183 op: STARTLINE (58)

    /** sequence.e:2513		return ret*/
    // SubProg flatten pc: 185 op: RETURNF (28)

// Exiting block BLOCK: flatten

// block var s_4965
    DeRefDS(_s_4965);

// block var delim_4966
    DeRefi(_delim_4966);

// block var x_4968
    DeRef(_x_4968);

// block var len_4969

// block var pos_4970
    DeRef(_2469);
    _2469 = NOVALUE;
    DeRef(_2482);
    _2482 = NOVALUE;
    DeRef(_2476);
    _2476 = NOVALUE;
    DeRef(_2486);
    _2486 = NOVALUE;
    DeRef(_2472);
    _2472 = NOVALUE;
    return _ret_4967;
    // SubProg flatten pc: 189 op: BADRETURNF (43)
    ;
}


object _24remove_dups(object _source_data_5335, object _proc_option_5336)
{
    object _lTo_5337 = NOVALUE;
    object _lFrom_5338 = NOVALUE;
    object _lResult_5361 = NOVALUE;
// skipping _2718  name type: 0
    object _2717 = NOVALUE; // 5369 2717
// skipping _2716  name type: 0
    object _2715 = NOVALUE; // 5367 2715
    object _2714 = NOVALUE; // 5366 2714
    object _2713 = NOVALUE; // 5364 2713
    object _2712 = NOVALUE; // 5360 2712
// skipping _2711  name type: 0
    object _2710 = NOVALUE; // 5358 2710
// skipping _2709  name type: 0
// skipping _2708  name type: 0
// skipping _2707  name type: 0
    object _2706 = NOVALUE; // 5353 2706
    object _2705 = NOVALUE; // 5352 2705
    object _2704 = NOVALUE; // 5351 2704
// skipping _2703  name type: 0
    object _2702 = NOVALUE; // 5348 2702
// skipping _2701  name type: 0
// skipping _2700  name type: 0
// skipping _2699  name type: 0
// skipping _2698  name type: 0
    object _2697 = NOVALUE; // 5340 2697
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg remove_dups pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 3 op: INTEGER_CHECK (96)
    // SubProg remove_dups pc: 5 op: STARTLINE (58)

    /** sequence.e:3111		if length(source_data) < 2 then*/
    // SubProg remove_dups pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_5335)){
            _2697 = SEQ_PTR(_source_data_5335)->length;
    }
    else {
        _2697 = 1;
    }
    // SubProg remove_dups pc: 10 op: LESS_IFW_I (119)
    if (_2697 >= 2)
    goto L1; // [10] 21
    // SubProg remove_dups pc: 14 op: STARTLINE (58)

    /** sequence.e:3112			return source_data*/
    // SubProg remove_dups pc: 16 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var proc_option_5336

// block var lTo_5337

// block var lFrom_5338

// block var lResult_5361
    DeRef(_lResult_5361);
    return _source_data_5335;
    // SubProg remove_dups pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 5333 op: 159
    // SubProg remove_dups pc: 21 op: STARTLINE (58)

    /** sequence.e:3115		if proc_option = RD_SORT then*/
    // SubProg remove_dups pc: 23 op: EQUALS_IFW_I (121)
    if (_proc_option_5336 != 3)
    goto L2; // [23] 42
    // SubProg remove_dups pc: 27 op: STARTLINE (58)

    /** sequence.e:3116			source_data = stdsort:sort(source_data)*/
    // SubProg remove_dups pc: 29 op: PROC (27)
    RefDS(_source_data_5335);
    _0 = _source_data_5335;
    _source_data_5335 = _25sort(_source_data_5335, 1);
    DeRefDS(_0);
    // SubProg remove_dups pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 36 op: STARTLINE (58)

    /** sequence.e:3117			proc_option = RD_PRESORTED*/
    // SubProg remove_dups pc: 38 op: ASSIGN_I (113)
    _proc_option_5336 = 2;
    // SubProg remove_dups pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 5333 op: 159
    // SubProg remove_dups pc: 42 op: STARTLINE (58)

    /** sequence.e:3119		if proc_option = RD_PRESORTED then*/
    // SubProg remove_dups pc: 44 op: EQUALS_IFW_I (121)
    if (_proc_option_5336 != 2)
    goto L3; // [44] 134
    // SubProg remove_dups pc: 48 op: STARTLINE (58)

    /** sequence.e:3120			lTo = 1*/
    // SubProg remove_dups pc: 50 op: ASSIGN_I (113)
    _lTo_5337 = 1;
    // SubProg remove_dups pc: 53 op: STARTLINE (58)

    /** sequence.e:3121			lFrom = 2*/
    // SubProg remove_dups pc: 55 op: ASSIGN_I (113)
    _lFrom_5338 = 2;
    // SubProg remove_dups pc: 58 op: STARTLINE (58)

    /** sequence.e:3123			while lFrom <= length(source_data) do*/
    // SubProg remove_dups pc: 60 op: NOP2 (110)
    // SubProg remove_dups pc: 62 op: NOPWHILE (158)
L4: // addr: 63 pc: 62 sub: 5333 op: 158
    // SubProg remove_dups pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_5335)){
            _2702 = SEQ_PTR(_source_data_5335)->length;
    }
    else {
        _2702 = 1;
    }
    // SubProg remove_dups pc: 66 op: LESSEQ_IFW_I (123)
    if (_lFrom_5338 > _2702)
    goto L5; // [66] 122
    // SubProg remove_dups pc: 70 op: STARTLINE (58)

    /** sequence.e:3124				if not equal(source_data[lFrom], source_data[lTo]) then*/
    // SubProg remove_dups pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_5335);
    _2704 = (object)*(((s1_ptr)_2)->base + _lFrom_5338);
    // SubProg remove_dups pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_5335);
    _2705 = (object)*(((s1_ptr)_2)->base + _lTo_5337);
    // SubProg remove_dups pc: 80 op: EQUAL (153)
    if (_2704 == _2705)
    _2706 = 1;
    else if (IS_ATOM_INT(_2704) && IS_ATOM_INT(_2705))
    _2706 = 0;
    else
    _2706 = (compare(_2704, _2705) == 0);
    _2704 = NOVALUE;
    _2705 = NOVALUE;
    // SubProg remove_dups pc: 84 op: NOT_IFW (108)
    if (_2706 != 0)
    goto L6; // [84] 111
    _2706 = NOVALUE;
    // SubProg remove_dups pc: 87 op: STARTLINE (58)

    /** sequence.e:3125					lTo += 1*/
    // SubProg remove_dups pc: 89 op: PLUS1_I (117)
    _lTo_5337 = _lTo_5337 + 1;
    // SubProg remove_dups pc: 93 op: STARTLINE (58)

    /** sequence.e:3126					if lTo != lFrom then*/
    // SubProg remove_dups pc: 95 op: NOTEQ_IFW_I (122)
    if (_lTo_5337 == _lFrom_5338)
    goto L7; // [95] 110
    // SubProg remove_dups pc: 99 op: STARTLINE (58)

    /** sequence.e:3127						source_data[lTo] = source_data[lFrom]*/
    // SubProg remove_dups pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_5335);
    _2710 = (object)*(((s1_ptr)_2)->base + _lFrom_5338);
    // SubProg remove_dups pc: 105 op: ASSIGN_SUBS (16)
    Ref(_2710);
    _2 = (object)SEQ_PTR(_source_data_5335);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _source_data_5335 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _lTo_5337);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _2710;
    if( _1 != _2710 ){
        DeRef(_1);
    }
    _2710 = NOVALUE;
    // SubProg remove_dups pc: 109 op: NOP1 (159)
L7: // addr: 110 pc: 109 sub: 5333 op: 159
    // SubProg remove_dups pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 5333 op: 159
    // SubProg remove_dups pc: 111 op: STARTLINE (58)

    /** sequence.e:3130				lFrom += 1*/
    // SubProg remove_dups pc: 113 op: PLUS1_I (117)
    _lFrom_5338 = _lFrom_5338 + 1;
    // SubProg remove_dups pc: 117 op: STARTLINE (58)

    /** sequence.e:3131			end while*/
    // SubProg remove_dups pc: 119 op: ENDWHILE (22)
    goto L4; // [119] 63
    // SubProg remove_dups pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 5333 op: 159
    // SubProg remove_dups pc: 122 op: STARTLINE (58)

    /** sequence.e:3132			return source_data[1 .. lTo]*/
    // SubProg remove_dups pc: 124 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2712;
    RHS_Slice(_source_data_5335, 1, _lTo_5337);
    // SubProg remove_dups pc: 129 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var source_data_5335
    DeRefDS(_source_data_5335);

// block var proc_option_5336

// block var lTo_5337

// block var lFrom_5338

// block var lResult_5361
    DeRef(_lResult_5361);
    return _2712;
    // SubProg remove_dups pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 5333 op: 159
    // SubProg remove_dups pc: 134 op: STARTLINE (58)

    /** sequence.e:3135		sequence lResult*/
    // SubProg remove_dups pc: 136 op: STARTLINE (58)

    /** sequence.e:3136		lResult = {}*/
    // SubProg remove_dups pc: 138 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lResult_5361);
    _lResult_5361 = _5;
    // SubProg remove_dups pc: 141 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 143 op: STARTLINE (58)

    /** sequence.e:3137		for i = 1 to length(source_data) do*/
    // SubProg remove_dups pc: 145 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_5335)){
            _2713 = SEQ_PTR(_source_data_5335)->length;
    }
    else {
        _2713 = 1;
    }
    // SubProg remove_dups pc: 148 op: FOR_I (125)
    {
        object _i_5363;
        _i_5363 = 1;
L8: // addr: 155 pc: 148 sub: 5333 op: 125
        if (_i_5363 > _2713){
            goto L9; // [148] 187
        }
        // SubProg remove_dups pc: 155 op: STARTLINE (58)

        /** sequence.e:3138			if not find(source_data[i], lResult) then*/
        // SubProg remove_dups pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_source_data_5335);
        _2714 = (object)*(((s1_ptr)_2)->base + _i_5363);
        // SubProg remove_dups pc: 161 op: FIND_FROM (176)
        _2715 = find_from(_2714, _lResult_5361, 1);
        _2714 = NOVALUE;
        // SubProg remove_dups pc: 166 op: NOT_IFW (108)
        if (_2715 != 0)
        goto LA; // [166] 180
        _2715 = NOVALUE;
        // SubProg remove_dups pc: 169 op: STARTLINE (58)

        /** sequence.e:3139				lResult = append(lResult, source_data[i])*/
        // SubProg remove_dups pc: 171 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_source_data_5335);
        _2717 = (object)*(((s1_ptr)_2)->base + _i_5363);
        // SubProg remove_dups pc: 175 op: APPEND (35)
        Ref(_2717);
        Append(&_lResult_5361, _lResult_5361, _2717);
        _2717 = NOVALUE;
        // SubProg remove_dups pc: 179 op: NOP1 (159)
LA: // addr: 180 pc: 179 sub: 5333 op: 159
        // SubProg remove_dups pc: 180 op: STARTLINE (58)

        /** sequence.e:3141		end for*/
        // SubProg remove_dups pc: 182 op: ENDFOR_INT_UP1 (54)
        _i_5363 = _i_5363 + 1;
        goto L8; // [182] 155
L9: // addr: 187 pc: 182 sub: 5333 op: 54
        ;
    }
    // SubProg remove_dups pc: 187 op: STARTLINE (58)

    /** sequence.e:3142		return lResult*/
    // SubProg remove_dups pc: 189 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var source_data_5335
    DeRefDS(_source_data_5335);

// block var proc_option_5336

// block var lTo_5337

// block var lFrom_5338
    DeRef(_2712);
    _2712 = NOVALUE;
    return _lResult_5361;
    // SubProg remove_dups pc: 193 op: BADRETURNF (43)
    ;
}



// 0x38115C40
