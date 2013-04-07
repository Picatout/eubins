// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _23reverse(object _target_5742, object _pFrom_5743, object _pTo_5744)
{
    object _uppr_5745 = NOVALUE;
    object _n_5746 = NOVALUE;
    object _lLimit_5747 = NOVALUE;
    object _t_5748 = NOVALUE;
// skipping _2990  name type: 0
    object _2989 = NOVALUE; // 5770 2989
    object _2988 = NOVALUE; // 5769 2988
    object _2987 = NOVALUE; // 5768 2987
// skipping _2986  name type: 0
    object _2985 = NOVALUE; // 5764 2985
    object _2984 = NOVALUE; // 5763 2984
// skipping _2983  name type: 0
    object _2982 = NOVALUE; // 5760 2982
// skipping _2981  name type: 0
    object _2980 = NOVALUE; // 5758 2980
// skipping _2979  name type: 0
// skipping _2978  name type: 0
// skipping _2977  name type: 0
// skipping _2976  name type: 0
// skipping _2975  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reverse pc: 1 op: INTEGER_CHECK (96)
    // SubProg reverse pc: 3 op: INTEGER_CHECK (96)
    // SubProg reverse pc: 5 op: STARTLINE (58)

    /** sequence.e:549		n = length(target)*/
    // SubProg reverse pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_target_5742)){
            _n_5746 = SEQ_PTR(_target_5742)->length;
    }
    else {
        _n_5746 = 1;
    }
    // SubProg reverse pc: 10 op: STARTLINE (58)

    /** sequence.e:550		if n < 2 then*/
    // SubProg reverse pc: 12 op: LESS_IFW_I (119)
    if (_n_5746 >= 2)
    goto L1; // [12] 23
    // SubProg reverse pc: 16 op: STARTLINE (58)

    /** sequence.e:551			return target*/
    // SubProg reverse pc: 18 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var pFrom_5743

// block var pTo_5744

// block var uppr_5745

// block var n_5746

// block var lLimit_5747

// block var t_5748
    DeRef(_t_5748);
    return _target_5742;
    // SubProg reverse pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 5740 op: 159
    // SubProg reverse pc: 23 op: STARTLINE (58)

    /** sequence.e:553		if pFrom < 1 then*/
    // SubProg reverse pc: 25 op: LESS_IFW_I (119)
    if (_pFrom_5743 >= 1)
    goto L2; // [25] 35
    // SubProg reverse pc: 29 op: STARTLINE (58)

    /** sequence.e:554			pFrom = 1*/
    // SubProg reverse pc: 31 op: ASSIGN_I (113)
    _pFrom_5743 = 1;
    // SubProg reverse pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 5740 op: 159
    // SubProg reverse pc: 35 op: STARTLINE (58)

    /** sequence.e:556		if pTo < 1 then*/
    // SubProg reverse pc: 37 op: LESS_IFW_I (119)
    if (_pTo_5744 >= 1)
    goto L3; // [37] 48
    // SubProg reverse pc: 41 op: STARTLINE (58)

    /** sequence.e:557			pTo = n + pTo*/
    // SubProg reverse pc: 43 op: PLUS_I (115)
    _pTo_5744 = _n_5746 + _pTo_5744;
    // SubProg reverse pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 5740 op: 159
    // SubProg reverse pc: 48 op: STARTLINE (58)

    /** sequence.e:559		if pTo < pFrom or pFrom >= n then*/
    // SubProg reverse pc: 50 op: LESS (1)
    _2980 = (_pTo_5744 < _pFrom_5743);
    // SubProg reverse pc: 54 op: SC1_OR_IF (147)
    if (_2980 != 0) {
        goto L4; // [54] 67
    }
    // SubProg reverse pc: 58 op: GREATEREQ (2)
    _2982 = (_pFrom_5743 >= _n_5746);
    // SubProg reverse pc: 62 op: NOP1 (159)
    // SubProg reverse pc: 63 op: IF (20)
    if (_2982 == 0)
    {
        DeRef(_2982);
        _2982 = NOVALUE;
        goto L5; // [63] 74
    }
    else{
        DeRef(_2982);
        _2982 = NOVALUE;
    }
    // SubProg reverse pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 5740 op: 159
    // SubProg reverse pc: 67 op: STARTLINE (58)

    /** sequence.e:560			return target*/
    // SubProg reverse pc: 69 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var pFrom_5743

// block var pTo_5744

// block var uppr_5745

// block var n_5746

// block var lLimit_5747

// block var t_5748
    DeRef(_t_5748);
    DeRef(_2980);
    _2980 = NOVALUE;
    return _target_5742;
    // SubProg reverse pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 5740 op: 159
    // SubProg reverse pc: 74 op: STARTLINE (58)

    /** sequence.e:562		if pTo > n then*/
    // SubProg reverse pc: 76 op: GREATER_IFW_I (124)
    if (_pTo_5744 <= _n_5746)
    goto L6; // [76] 86
    // SubProg reverse pc: 80 op: STARTLINE (58)

    /** sequence.e:563			pTo = n*/
    // SubProg reverse pc: 82 op: ASSIGN_I (113)
    _pTo_5744 = _n_5746;
    // SubProg reverse pc: 85 op: NOP1 (159)
L6: // addr: 86 pc: 85 sub: 5740 op: 159
    // SubProg reverse pc: 86 op: STARTLINE (58)

    /** sequence.e:566		lLimit = floor((pFrom+pTo-1)/2)*/
    // SubProg reverse pc: 88 op: PLUS (11)
    _2984 = _pFrom_5743 + _pTo_5744;
    if ((object)((uintptr_t)_2984 + (uintptr_t)HIGH_BITS) >= 0){
        _2984 = NewDouble((eudouble)_2984);
    }
    // SubProg reverse pc: 92 op: MINUS (10)
    if (IS_ATOM_INT(_2984)) {
        _2985 = _2984 - 1;
        if ((object)((uintptr_t)_2985 +(uintptr_t) HIGH_BITS) >= 0){
            _2985 = NewDouble((eudouble)_2985);
        }
    }
    else {
        _2985 = NewDouble(DBL_PTR(_2984)->dbl - (eudouble)1);
    }
    DeRef(_2984);
    _2984 = NOVALUE;
    // SubProg reverse pc: 96 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_2985)) {
        _lLimit_5747 = _2985 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _2985, 2);
        _lLimit_5747 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_2985);
    _2985 = NOVALUE;
    // SubProg reverse pc: 100 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_lLimit_5747)) {
        _1 = (object)(DBL_PTR(_lLimit_5747)->dbl);
        DeRefDS(_lLimit_5747);
        _lLimit_5747 = _1;
    }
    // SubProg reverse pc: 102 op: STARTLINE (58)

    /** sequence.e:567		t = target*/
    // SubProg reverse pc: 104 op: ASSIGN (18)
    Ref(_target_5742);
    DeRef(_t_5748);
    _t_5748 = _target_5742;
    // SubProg reverse pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg reverse pc: 109 op: STARTLINE (58)

    /** sequence.e:568		uppr = pTo*/
    // SubProg reverse pc: 111 op: ASSIGN_I (113)
    _uppr_5745 = _pTo_5744;
    // SubProg reverse pc: 114 op: STARTLINE (58)

    /** sequence.e:569		for lowr = pFrom to lLimit do*/
    // SubProg reverse pc: 116 op: ASSIGN (18)
    _2987 = _lLimit_5747;
    // SubProg reverse pc: 119 op: FOR_I (125)
    {
        object _lowr_5767;
        _lowr_5767 = _pFrom_5743;
L7: // addr: 126 pc: 119 sub: 5740 op: 125
        if (_lowr_5767 > _2987){
            goto L8; // [119] 159
        }
        // SubProg reverse pc: 126 op: STARTLINE (58)

        /** sequence.e:570			t[uppr] = target[lowr]*/
        // SubProg reverse pc: 128 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_target_5742);
        _2988 = (object)*(((s1_ptr)_2)->base + _lowr_5767);
        // SubProg reverse pc: 132 op: ASSIGN_SUBS (16)
        Ref(_2988);
        _2 = (object)SEQ_PTR(_t_5748);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_5748 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _uppr_5745);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2988;
        if( _1 != _2988 ){
            DeRef(_1);
        }
        _2988 = NOVALUE;
        // SubProg reverse pc: 136 op: STARTLINE (58)

        /** sequence.e:571			t[lowr] = target[uppr]*/
        // SubProg reverse pc: 138 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_target_5742);
        _2989 = (object)*(((s1_ptr)_2)->base + _uppr_5745);
        // SubProg reverse pc: 142 op: ASSIGN_SUBS (16)
        Ref(_2989);
        _2 = (object)SEQ_PTR(_t_5748);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_5748 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lowr_5767);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2989;
        if( _1 != _2989 ){
            DeRef(_1);
        }
        _2989 = NOVALUE;
        // SubProg reverse pc: 146 op: STARTLINE (58)

        /** sequence.e:572			uppr -= 1*/
        // SubProg reverse pc: 148 op: MINUS_I (116)
        _uppr_5745 = _uppr_5745 - 1;
        // SubProg reverse pc: 152 op: STARTLINE (58)

        /** sequence.e:573		end for*/
        // SubProg reverse pc: 154 op: ENDFOR_INT_UP1 (54)
        _lowr_5767 = _lowr_5767 + 1;
        goto L7; // [154] 126
L8: // addr: 159 pc: 154 sub: 5740 op: 54
        ;
    }
    // SubProg reverse pc: 159 op: STARTLINE (58)

    /** sequence.e:574		return t*/
    // SubProg reverse pc: 161 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var target_5742
    DeRef(_target_5742);

// block var pFrom_5743

// block var pTo_5744

// block var uppr_5745

// block var n_5746

// block var lLimit_5747
    DeRef(_2980);
    _2980 = NOVALUE;
    return _t_5748;
    // SubProg reverse pc: 165 op: BADRETURNF (43)
    ;
}


object _23pad_tail(object _target_5842, object _size_5843, object _ch_5844)
{
    object _3025 = NOVALUE; // 5851 3025
    object _3024 = NOVALUE; // 5850 3024
    object _3023 = NOVALUE; // 5849 3023
    object _3022 = NOVALUE; // 5848 3022
// skipping _3021  name type: 0
    object _3020 = NOVALUE; // 5846 3020
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pad_tail pc: 1 op: INTEGER_CHECK (96)
    // SubProg pad_tail pc: 3 op: STARTLINE (58)

    /** sequence.e:1022		if size <= length(target) then*/
    // SubProg pad_tail pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_target_5842)){
            _3020 = SEQ_PTR(_target_5842)->length;
    }
    else {
        _3020 = 1;
    }
    // SubProg pad_tail pc: 8 op: LESSEQ_IFW_I (123)
    if (_size_5843 > _3020)
    goto L1; // [8] 19
    // SubProg pad_tail pc: 12 op: STARTLINE (58)

    /** sequence.e:1023			return target*/
    // SubProg pad_tail pc: 14 op: RETURNF (28)

// Exiting block BLOCK: pad_tail

// block var size_5843

// block var ch_5844
    return _target_5842;
    // SubProg pad_tail pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 5840 op: 159
    // SubProg pad_tail pc: 19 op: STARTLINE (58)

    /** sequence.e:1026		return target & repeat(ch, size - length(target))*/
    // SubProg pad_tail pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_target_5842)){
            _3022 = SEQ_PTR(_target_5842)->length;
    }
    else {
        _3022 = 1;
    }
    // SubProg pad_tail pc: 24 op: MINUS (10)
    _3023 = _size_5843 - _3022;
    _3022 = NOVALUE;
    // SubProg pad_tail pc: 28 op: REPEAT (32)
    _3024 = Repeat(_ch_5844, _3023);
    _3023 = NOVALUE;
    // SubProg pad_tail pc: 32 op: CONCAT (15)
    if (IS_SEQUENCE(_target_5842) && IS_ATOM(_3024)) {
    }
    else if (IS_ATOM(_target_5842) && IS_SEQUENCE(_3024)) {
        Ref(_target_5842);
        Prepend(&_3025, _3024, _target_5842);
    }
    else {
        Concat((object_ptr)&_3025, _target_5842, _3024);
    }
    DeRefDS(_3024);
    _3024 = NOVALUE;
    // SubProg pad_tail pc: 36 op: RETURNF (28)

// Exiting block BLOCK: pad_tail

// block var target_5842
    DeRef(_target_5842);

// block var size_5843

// block var ch_5844
    return _3025;
    // SubProg pad_tail pc: 40 op: BADRETURNF (43)
    ;
}


object _23filter(object _source_6096, object _rid_6097, object _userdata_6098, object _rangetype_6099)
{
    object _dest_6100 = NOVALUE;
    object _idx_6101 = NOVALUE;
    object _3339 = NOVALUE; // 6357 3339
    object _3338 = NOVALUE; // 6356 3338
// skipping _3337  name type: 0
    object _3336 = NOVALUE; // 6354 3336
    object _3335 = NOVALUE; // 6353 3335
    object _3334 = NOVALUE; // 6352 3334
    object _3333 = NOVALUE; // 6350 3333
    object _3332 = NOVALUE; // 6345 3332
// skipping _3331  name type: 0
// skipping _3330  name type: 0
    object _3329 = NOVALUE; // 6342 3329
    object _3328 = NOVALUE; // 6341 3328
    object _3327 = NOVALUE; // 6340 3327
    object _3326 = NOVALUE; // 6338 3326
// skipping _3325  name type: 0
// skipping _3324  name type: 0
    object _3323 = NOVALUE; // 6335 3323
    object _3322 = NOVALUE; // 6334 3322
    object _3321 = NOVALUE; // 6333 3321
    object _3320 = NOVALUE; // 6331 3320
    object _3319 = NOVALUE; // 6327 3319
// skipping _3318  name type: 0
// skipping _3317  name type: 0
    object _3316 = NOVALUE; // 6324 3316
    object _3315 = NOVALUE; // 6323 3315
    object _3314 = NOVALUE; // 6322 3314
    object _3313 = NOVALUE; // 6320 3313
// skipping _3312  name type: 0
// skipping _3311  name type: 0
    object _3310 = NOVALUE; // 6317 3310
    object _3309 = NOVALUE; // 6316 3309
    object _3308 = NOVALUE; // 6315 3308
    object _3307 = NOVALUE; // 6313 3307
    object _3306 = NOVALUE; // 6309 3306
// skipping _3305  name type: 0
// skipping _3304  name type: 0
    object _3303 = NOVALUE; // 6306 3303
    object _3302 = NOVALUE; // 6305 3302
    object _3301 = NOVALUE; // 6304 3301
    object _3300 = NOVALUE; // 6302 3300
// skipping _3299  name type: 0
// skipping _3298  name type: 0
    object _3297 = NOVALUE; // 6299 3297
    object _3296 = NOVALUE; // 6298 3296
    object _3295 = NOVALUE; // 6297 3295
    object _3294 = NOVALUE; // 6295 3294
    object _3293 = NOVALUE; // 6291 3293
// skipping _3292  name type: 0
// skipping _3291  name type: 0
    object _3290 = NOVALUE; // 6288 3290
    object _3289 = NOVALUE; // 6287 3289
    object _3288 = NOVALUE; // 6286 3288
    object _3287 = NOVALUE; // 6284 3287
// skipping _3286  name type: 0
// skipping _3285  name type: 0
    object _3284 = NOVALUE; // 6281 3284
    object _3283 = NOVALUE; // 6280 3283
    object _3282 = NOVALUE; // 6279 3282
    object _3281 = NOVALUE; // 6277 3281
    object _3280 = NOVALUE; // 6273 3280
// skipping _3279  name type: 0
// skipping _3278  name type: 0
    object _3277 = NOVALUE; // 6270 3277
    object _3276 = NOVALUE; // 6269 3276
    object _3275 = NOVALUE; // 6267 3275
    object _3271 = NOVALUE; // 6258 3271
// skipping _3270  name type: 0
// skipping _3269  name type: 0
    object _3268 = NOVALUE; // 6255 3268
    object _3267 = NOVALUE; // 6254 3267
    object _3266 = NOVALUE; // 6253 3266
// skipping _3265  name type: 0
    object _3264 = NOVALUE; // 6250 3264
    object _3263 = NOVALUE; // 6249 3263
    object _3262 = NOVALUE; // 6248 3262
    object _3261 = NOVALUE; // 6246 3261
    object _3260 = NOVALUE; // 6242 3260
// skipping _3259  name type: 0
// skipping _3258  name type: 0
    object _3257 = NOVALUE; // 6239 3257
    object _3256 = NOVALUE; // 6238 3256
    object _3255 = NOVALUE; // 6237 3255
// skipping _3254  name type: 0
    object _3253 = NOVALUE; // 6234 3253
    object _3252 = NOVALUE; // 6233 3252
    object _3251 = NOVALUE; // 6232 3251
    object _3250 = NOVALUE; // 6230 3250
    object _3249 = NOVALUE; // 6226 3249
// skipping _3248  name type: 0
// skipping _3247  name type: 0
    object _3246 = NOVALUE; // 6223 3246
    object _3245 = NOVALUE; // 6222 3245
    object _3244 = NOVALUE; // 6221 3244
// skipping _3243  name type: 0
    object _3242 = NOVALUE; // 6218 3242
    object _3241 = NOVALUE; // 6217 3241
    object _3240 = NOVALUE; // 6216 3240
    object _3239 = NOVALUE; // 6214 3239
    object _3238 = NOVALUE; // 6210 3238
// skipping _3237  name type: 0
// skipping _3236  name type: 0
    object _3235 = NOVALUE; // 6207 3235
    object _3234 = NOVALUE; // 6206 3234
    object _3233 = NOVALUE; // 6205 3233
// skipping _3232  name type: 0
    object _3231 = NOVALUE; // 6202 3231
    object _3230 = NOVALUE; // 6201 3230
    object _3229 = NOVALUE; // 6200 3229
    object _3228 = NOVALUE; // 6198 3228
    object _3227 = NOVALUE; // 6194 3227
// skipping _3226  name type: 0
    object _3225 = NOVALUE; // 6192 3225
    object _3224 = NOVALUE; // 6191 3224
    object _3223 = NOVALUE; // 6189 3223
    object _3219 = NOVALUE; // 6181 3219
// skipping _3218  name type: 0
// skipping _3217  name type: 0
    object _3216 = NOVALUE; // 6178 3216
    object _3215 = NOVALUE; // 6177 3215
    object _3214 = NOVALUE; // 6175 3214
    object _3211 = NOVALUE; // 6169 3211
// skipping _3210  name type: 0
// skipping _3209  name type: 0
    object _3208 = NOVALUE; // 6166 3208
    object _3207 = NOVALUE; // 6165 3207
    object _3206 = NOVALUE; // 6163 3206
    object _3203 = NOVALUE; // 6157 3203
// skipping _3202  name type: 0
// skipping _3201  name type: 0
    object _3200 = NOVALUE; // 6154 3200
    object _3199 = NOVALUE; // 6153 3199
    object _3198 = NOVALUE; // 6151 3198
    object _3195 = NOVALUE; // 6145 3195
// skipping _3194  name type: 0
// skipping _3193  name type: 0
    object _3192 = NOVALUE; // 6142 3192
    object _3191 = NOVALUE; // 6141 3191
    object _3190 = NOVALUE; // 6139 3190
    object _3186 = NOVALUE; // 6132 3186
// skipping _3185  name type: 0
// skipping _3184  name type: 0
    object _3183 = NOVALUE; // 6129 3183
    object _3182 = NOVALUE; // 6128 3182
    object _3181 = NOVALUE; // 6126 3181
    object _3178 = NOVALUE; // 6120 3178
// skipping _3177  name type: 0
// skipping _3176  name type: 0
    object _3175 = NOVALUE; // 6117 3175
    object _3174 = NOVALUE; // 6116 3174
    object _3173 = NOVALUE; // 6114 3173
// skipping _3168  name type: 0
    object _3167 = NOVALUE; // 6105 3167
// skipping _3166  name type: 0
    object _3165 = NOVALUE; // 6103 3165
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filter pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg filter pc: 3 op: STARTLINE (58)

    /** sequence.e:1731		if length(source) = 0 then*/
    // SubProg filter pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_source_6096)){
            _3165 = SEQ_PTR(_source_6096)->length;
    }
    else {
        _3165 = 1;
    }
    // SubProg filter pc: 8 op: EQUALS_IFW_I (121)
    if (_3165 != 0)
    goto L1; // [8] 19
    // SubProg filter pc: 12 op: STARTLINE (58)

    /** sequence.e:1732			return source*/
    // SubProg filter pc: 14 op: RETURNF (28)

// Exiting block BLOCK: filter

// block var rid_6097

// block var userdata_6098
    DeRefDS(_userdata_6098);

// block var rangetype_6099
    DeRefDS(_rangetype_6099);

// block var dest_6100
    DeRef(_dest_6100);

// block var idx_6101
    return _source_6096;
    // SubProg filter pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 6094 op: 159
    // SubProg filter pc: 19 op: STARTLINE (58)

    /** sequence.e:1734		dest = repeat(0, length(source))*/
    // SubProg filter pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_source_6096)){
            _3167 = SEQ_PTR(_source_6096)->length;
    }
    else {
        _3167 = 1;
    }
    // SubProg filter pc: 24 op: REPEAT (32)
    DeRef(_dest_6100);
    _dest_6100 = Repeat(0, _3167);
    _3167 = NOVALUE;
    // SubProg filter pc: 28 op: STARTLINE (58)

    /** sequence.e:1735		idx = 0*/
    // SubProg filter pc: 30 op: ASSIGN_I (113)
    _idx_6101 = 0;
    // SubProg filter pc: 33 op: STARTLINE (58)

    /** sequence.e:1736		switch rid do*/
    // SubProg filter pc: 35 op: SWITCH (185)
    _1 = find(_rid_6097, _3169);
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
        if (IS_SEQUENCE(_source_6096)){
                _3173 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3173 = 1;
        }
        // SubProg filter pc: 51 op: FOR_I (125)
        {
            object _a_6113;
            _a_6113 = 1;
L2: // addr: 58 pc: 51 sub: 6094 op: 125
            if (_a_6113 > _3173){
                goto L3; // [51] 96
            }
            // SubProg filter pc: 58 op: STARTLINE (58)

            /** sequence.e:1739					if compare(source[a], userdata) < 0 then*/
            // SubProg filter pc: 60 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3174 = (object)*(((s1_ptr)_2)->base + _a_6113);
            // SubProg filter pc: 64 op: COMPARE (76)
            if (IS_ATOM_INT(_3174) && IS_ATOM_INT(_userdata_6098)){
                _3175 = (_3174 < _userdata_6098) ? -1 : (_3174 > _userdata_6098);
            }
            else{
                _3175 = compare(_3174, _userdata_6098);
            }
            _3174 = NOVALUE;
            // SubProg filter pc: 68 op: LESS_IFW_I (119)
            if (_3175 >= 0)
            goto L4; // [68] 89
            // SubProg filter pc: 72 op: STARTLINE (58)

            /** sequence.e:1740						idx += 1*/
            // SubProg filter pc: 74 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 78 op: STARTLINE (58)

            /** sequence.e:1741						dest[idx] = source[a]*/
            // SubProg filter pc: 80 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3178 = (object)*(((s1_ptr)_2)->base + _a_6113);
            // SubProg filter pc: 84 op: ASSIGN_SUBS (16)
            Ref(_3178);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3178;
            if( _1 != _3178 ){
                DeRef(_1);
            }
            _3178 = NOVALUE;
            // SubProg filter pc: 88 op: NOP1 (159)
L4: // addr: 89 pc: 88 sub: 6094 op: 159
            // SubProg filter pc: 89 op: STARTLINE (58)

            /** sequence.e:1743				end for*/
            // SubProg filter pc: 91 op: ENDFOR_INT_UP1 (54)
            _a_6113 = _a_6113 + 1;
            goto L2; // [91] 58
L3: // addr: 96 pc: 91 sub: 6094 op: 54
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
        if (IS_SEQUENCE(_source_6096)){
                _3181 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3181 = 1;
        }
        // SubProg filter pc: 109 op: FOR_I (125)
        {
            object _a_6125;
            _a_6125 = 1;
L6: // addr: 116 pc: 109 sub: 6094 op: 125
            if (_a_6125 > _3181){
                goto L7; // [109] 154
            }
            // SubProg filter pc: 116 op: STARTLINE (58)

            /** sequence.e:1747					if compare(source[a], userdata) <= 0 then*/
            // SubProg filter pc: 118 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3182 = (object)*(((s1_ptr)_2)->base + _a_6125);
            // SubProg filter pc: 122 op: COMPARE (76)
            if (IS_ATOM_INT(_3182) && IS_ATOM_INT(_userdata_6098)){
                _3183 = (_3182 < _userdata_6098) ? -1 : (_3182 > _userdata_6098);
            }
            else{
                _3183 = compare(_3182, _userdata_6098);
            }
            _3182 = NOVALUE;
            // SubProg filter pc: 126 op: LESSEQ_IFW_I (123)
            if (_3183 > 0)
            goto L8; // [126] 147
            // SubProg filter pc: 130 op: STARTLINE (58)

            /** sequence.e:1748						idx += 1*/
            // SubProg filter pc: 132 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 136 op: STARTLINE (58)

            /** sequence.e:1749						dest[idx] = source[a]*/
            // SubProg filter pc: 138 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3186 = (object)*(((s1_ptr)_2)->base + _a_6125);
            // SubProg filter pc: 142 op: ASSIGN_SUBS (16)
            Ref(_3186);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3186;
            if( _1 != _3186 ){
                DeRef(_1);
            }
            _3186 = NOVALUE;
            // SubProg filter pc: 146 op: NOP1 (159)
L8: // addr: 147 pc: 146 sub: 6094 op: 159
            // SubProg filter pc: 147 op: STARTLINE (58)

            /** sequence.e:1751				end for*/
            // SubProg filter pc: 149 op: ENDFOR_INT_UP1 (54)
            _a_6125 = _a_6125 + 1;
            goto L6; // [149] 116
L7: // addr: 154 pc: 149 sub: 6094 op: 54
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
        if (IS_SEQUENCE(_source_6096)){
                _3190 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3190 = 1;
        }
        // SubProg filter pc: 169 op: FOR_I (125)
        {
            object _a_6138;
            _a_6138 = 1;
L9: // addr: 176 pc: 169 sub: 6094 op: 125
            if (_a_6138 > _3190){
                goto LA; // [169] 214
            }
            // SubProg filter pc: 176 op: STARTLINE (58)

            /** sequence.e:1755					if compare(source[a], userdata) = 0 then*/
            // SubProg filter pc: 178 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3191 = (object)*(((s1_ptr)_2)->base + _a_6138);
            // SubProg filter pc: 182 op: COMPARE (76)
            if (IS_ATOM_INT(_3191) && IS_ATOM_INT(_userdata_6098)){
                _3192 = (_3191 < _userdata_6098) ? -1 : (_3191 > _userdata_6098);
            }
            else{
                _3192 = compare(_3191, _userdata_6098);
            }
            _3191 = NOVALUE;
            // SubProg filter pc: 186 op: EQUALS_IFW_I (121)
            if (_3192 != 0)
            goto LB; // [186] 207
            // SubProg filter pc: 190 op: STARTLINE (58)

            /** sequence.e:1756						idx += 1*/
            // SubProg filter pc: 192 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 196 op: STARTLINE (58)

            /** sequence.e:1757						dest[idx] = source[a]*/
            // SubProg filter pc: 198 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3195 = (object)*(((s1_ptr)_2)->base + _a_6138);
            // SubProg filter pc: 202 op: ASSIGN_SUBS (16)
            Ref(_3195);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3195;
            if( _1 != _3195 ){
                DeRef(_1);
            }
            _3195 = NOVALUE;
            // SubProg filter pc: 206 op: NOP1 (159)
LB: // addr: 207 pc: 206 sub: 6094 op: 159
            // SubProg filter pc: 207 op: STARTLINE (58)

            /** sequence.e:1759				end for*/
            // SubProg filter pc: 209 op: ENDFOR_INT_UP1 (54)
            _a_6138 = _a_6138 + 1;
            goto L9; // [209] 176
LA: // addr: 214 pc: 209 sub: 6094 op: 54
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
        if (IS_SEQUENCE(_source_6096)){
                _3198 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3198 = 1;
        }
        // SubProg filter pc: 227 op: FOR_I (125)
        {
            object _a_6150;
            _a_6150 = 1;
LC: // addr: 234 pc: 227 sub: 6094 op: 125
            if (_a_6150 > _3198){
                goto LD; // [227] 272
            }
            // SubProg filter pc: 234 op: STARTLINE (58)

            /** sequence.e:1763					if compare(source[a], userdata) != 0 then*/
            // SubProg filter pc: 236 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3199 = (object)*(((s1_ptr)_2)->base + _a_6150);
            // SubProg filter pc: 240 op: COMPARE (76)
            if (IS_ATOM_INT(_3199) && IS_ATOM_INT(_userdata_6098)){
                _3200 = (_3199 < _userdata_6098) ? -1 : (_3199 > _userdata_6098);
            }
            else{
                _3200 = compare(_3199, _userdata_6098);
            }
            _3199 = NOVALUE;
            // SubProg filter pc: 244 op: NOTEQ_IFW_I (122)
            if (_3200 == 0)
            goto LE; // [244] 265
            // SubProg filter pc: 248 op: STARTLINE (58)

            /** sequence.e:1764						idx += 1*/
            // SubProg filter pc: 250 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 254 op: STARTLINE (58)

            /** sequence.e:1765						dest[idx] = source[a]*/
            // SubProg filter pc: 256 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3203 = (object)*(((s1_ptr)_2)->base + _a_6150);
            // SubProg filter pc: 260 op: ASSIGN_SUBS (16)
            Ref(_3203);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3203;
            if( _1 != _3203 ){
                DeRef(_1);
            }
            _3203 = NOVALUE;
            // SubProg filter pc: 264 op: NOP1 (159)
LE: // addr: 265 pc: 264 sub: 6094 op: 159
            // SubProg filter pc: 265 op: STARTLINE (58)

            /** sequence.e:1767				end for*/
            // SubProg filter pc: 267 op: ENDFOR_INT_UP1 (54)
            _a_6150 = _a_6150 + 1;
            goto LC; // [267] 234
LD: // addr: 272 pc: 267 sub: 6094 op: 54
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
        if (IS_SEQUENCE(_source_6096)){
                _3206 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3206 = 1;
        }
        // SubProg filter pc: 285 op: FOR_I (125)
        {
            object _a_6162;
            _a_6162 = 1;
LF: // addr: 292 pc: 285 sub: 6094 op: 125
            if (_a_6162 > _3206){
                goto L10; // [285] 330
            }
            // SubProg filter pc: 292 op: STARTLINE (58)

            /** sequence.e:1771					if compare(source[a], userdata) > 0 then*/
            // SubProg filter pc: 294 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3207 = (object)*(((s1_ptr)_2)->base + _a_6162);
            // SubProg filter pc: 298 op: COMPARE (76)
            if (IS_ATOM_INT(_3207) && IS_ATOM_INT(_userdata_6098)){
                _3208 = (_3207 < _userdata_6098) ? -1 : (_3207 > _userdata_6098);
            }
            else{
                _3208 = compare(_3207, _userdata_6098);
            }
            _3207 = NOVALUE;
            // SubProg filter pc: 302 op: GREATER_IFW_I (124)
            if (_3208 <= 0)
            goto L11; // [302] 323
            // SubProg filter pc: 306 op: STARTLINE (58)

            /** sequence.e:1772						idx += 1*/
            // SubProg filter pc: 308 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 312 op: STARTLINE (58)

            /** sequence.e:1773						dest[idx] = source[a]*/
            // SubProg filter pc: 314 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3211 = (object)*(((s1_ptr)_2)->base + _a_6162);
            // SubProg filter pc: 318 op: ASSIGN_SUBS (16)
            Ref(_3211);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3211;
            if( _1 != _3211 ){
                DeRef(_1);
            }
            _3211 = NOVALUE;
            // SubProg filter pc: 322 op: NOP1 (159)
L11: // addr: 323 pc: 322 sub: 6094 op: 159
            // SubProg filter pc: 323 op: STARTLINE (58)

            /** sequence.e:1775				end for*/
            // SubProg filter pc: 325 op: ENDFOR_INT_UP1 (54)
            _a_6162 = _a_6162 + 1;
            goto LF; // [325] 292
L10: // addr: 330 pc: 325 sub: 6094 op: 54
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
        if (IS_SEQUENCE(_source_6096)){
                _3214 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3214 = 1;
        }
        // SubProg filter pc: 343 op: FOR_I (125)
        {
            object _a_6174;
            _a_6174 = 1;
L12: // addr: 350 pc: 343 sub: 6094 op: 125
            if (_a_6174 > _3214){
                goto L13; // [343] 388
            }
            // SubProg filter pc: 350 op: STARTLINE (58)

            /** sequence.e:1779					if compare(source[a], userdata) >= 0 then*/
            // SubProg filter pc: 352 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3215 = (object)*(((s1_ptr)_2)->base + _a_6174);
            // SubProg filter pc: 356 op: COMPARE (76)
            if (IS_ATOM_INT(_3215) && IS_ATOM_INT(_userdata_6098)){
                _3216 = (_3215 < _userdata_6098) ? -1 : (_3215 > _userdata_6098);
            }
            else{
                _3216 = compare(_3215, _userdata_6098);
            }
            _3215 = NOVALUE;
            // SubProg filter pc: 360 op: GREATEREQ_IFW_I (120)
            if (_3216 < 0)
            goto L14; // [360] 381
            // SubProg filter pc: 364 op: STARTLINE (58)

            /** sequence.e:1780						idx += 1*/
            // SubProg filter pc: 366 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 370 op: STARTLINE (58)

            /** sequence.e:1781						dest[idx] = source[a]*/
            // SubProg filter pc: 372 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3219 = (object)*(((s1_ptr)_2)->base + _a_6174);
            // SubProg filter pc: 376 op: ASSIGN_SUBS (16)
            Ref(_3219);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3219;
            if( _1 != _3219 ){
                DeRef(_1);
            }
            _3219 = NOVALUE;
            // SubProg filter pc: 380 op: NOP1 (159)
L14: // addr: 381 pc: 380 sub: 6094 op: 159
            // SubProg filter pc: 381 op: STARTLINE (58)

            /** sequence.e:1783				end for*/
            // SubProg filter pc: 383 op: ENDFOR_INT_UP1 (54)
            _a_6174 = _a_6174 + 1;
            goto L12; // [383] 350
L13: // addr: 388 pc: 383 sub: 6094 op: 54
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
        _1 = find(_rangetype_6099, _3221);
        switch ( _1 ){ 
            // SubProg filter pc: 401 op: STARTLINE (58)

            /** sequence.e:1787					case "" then*/
            // SubProg filter pc: 403 op: CASE (186)
            case 1:
            // SubProg filter pc: 405 op: STARTLINE (58)

            /** sequence.e:1788						for a = 1 to length(source) do*/
            // SubProg filter pc: 407 op: LENGTH (42)
            if (IS_SEQUENCE(_source_6096)){
                    _3223 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3223 = 1;
            }
            // SubProg filter pc: 410 op: FOR_I (125)
            {
                object _a_6188;
                _a_6188 = 1;
L15: // addr: 417 pc: 410 sub: 6094 op: 125
                if (_a_6188 > _3223){
                    goto L16; // [410] 455
                }
                // SubProg filter pc: 417 op: STARTLINE (58)

                /** sequence.e:1789							if find(source[a], userdata)  then*/
                // SubProg filter pc: 419 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3224 = (object)*(((s1_ptr)_2)->base + _a_6188);
                // SubProg filter pc: 423 op: FIND_FROM (176)
                _3225 = find_from(_3224, _userdata_6098, 1);
                _3224 = NOVALUE;
                // SubProg filter pc: 428 op: IF (20)
                if (_3225 == 0)
                {
                    _3225 = NOVALUE;
                    goto L17; // [428] 448
                }
                else{
                    _3225 = NOVALUE;
                }
                // SubProg filter pc: 431 op: STARTLINE (58)

                /** sequence.e:1790								idx += 1*/
                // SubProg filter pc: 433 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 437 op: STARTLINE (58)

                /** sequence.e:1791								dest[idx] = source[a]*/
                // SubProg filter pc: 439 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3227 = (object)*(((s1_ptr)_2)->base + _a_6188);
                // SubProg filter pc: 443 op: ASSIGN_SUBS (16)
                Ref(_3227);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3227;
                if( _1 != _3227 ){
                    DeRef(_1);
                }
                _3227 = NOVALUE;
                // SubProg filter pc: 447 op: NOP1 (159)
L17: // addr: 448 pc: 447 sub: 6094 op: 159
                // SubProg filter pc: 448 op: STARTLINE (58)

                /** sequence.e:1793						end for*/
                // SubProg filter pc: 450 op: ENDFOR_INT_UP1 (54)
                _a_6188 = _a_6188 + 1;
                goto L15; // [450] 417
L16: // addr: 455 pc: 450 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3228 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3228 = 1;
            }
            // SubProg filter pc: 466 op: FOR_I (125)
            {
                object _a_6197;
                _a_6197 = 1;
L18: // addr: 473 pc: 466 sub: 6094 op: 125
                if (_a_6197 > _3228){
                    goto L19; // [466] 534
                }
                // SubProg filter pc: 473 op: STARTLINE (58)

                /** sequence.e:1797							if compare(source[a], userdata[1]) >= 0 then*/
                // SubProg filter pc: 475 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3229 = (object)*(((s1_ptr)_2)->base + _a_6197);
                // SubProg filter pc: 479 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3230 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 483 op: COMPARE (76)
                if (IS_ATOM_INT(_3229) && IS_ATOM_INT(_3230)){
                    _3231 = (_3229 < _3230) ? -1 : (_3229 > _3230);
                }
                else{
                    _3231 = compare(_3229, _3230);
                }
                _3229 = NOVALUE;
                _3230 = NOVALUE;
                // SubProg filter pc: 487 op: GREATEREQ_IFW_I (120)
                if (_3231 < 0)
                goto L1A; // [487] 527
                // SubProg filter pc: 491 op: STARTLINE (58)

                /** sequence.e:1798								if compare(source[a], userdata[2]) <= 0 then*/
                // SubProg filter pc: 493 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3233 = (object)*(((s1_ptr)_2)->base + _a_6197);
                // SubProg filter pc: 497 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3234 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 501 op: COMPARE (76)
                if (IS_ATOM_INT(_3233) && IS_ATOM_INT(_3234)){
                    _3235 = (_3233 < _3234) ? -1 : (_3233 > _3234);
                }
                else{
                    _3235 = compare(_3233, _3234);
                }
                _3233 = NOVALUE;
                _3234 = NOVALUE;
                // SubProg filter pc: 505 op: LESSEQ_IFW_I (123)
                if (_3235 > 0)
                goto L1B; // [505] 526
                // SubProg filter pc: 509 op: STARTLINE (58)

                /** sequence.e:1799									idx += 1*/
                // SubProg filter pc: 511 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 515 op: STARTLINE (58)

                /** sequence.e:1800									dest[idx] = source[a]*/
                // SubProg filter pc: 517 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3238 = (object)*(((s1_ptr)_2)->base + _a_6197);
                // SubProg filter pc: 521 op: ASSIGN_SUBS (16)
                Ref(_3238);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3238;
                if( _1 != _3238 ){
                    DeRef(_1);
                }
                _3238 = NOVALUE;
                // SubProg filter pc: 525 op: NOP1 (159)
L1B: // addr: 526 pc: 525 sub: 6094 op: 159
                // SubProg filter pc: 526 op: NOP1 (159)
L1A: // addr: 527 pc: 526 sub: 6094 op: 159
                // SubProg filter pc: 527 op: STARTLINE (58)

                /** sequence.e:1803						end for*/
                // SubProg filter pc: 529 op: ENDFOR_INT_UP1 (54)
                _a_6197 = _a_6197 + 1;
                goto L18; // [529] 473
L19: // addr: 534 pc: 529 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3239 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3239 = 1;
            }
            // SubProg filter pc: 545 op: FOR_I (125)
            {
                object _a_6213;
                _a_6213 = 1;
L1C: // addr: 552 pc: 545 sub: 6094 op: 125
                if (_a_6213 > _3239){
                    goto L1D; // [545] 613
                }
                // SubProg filter pc: 552 op: STARTLINE (58)

                /** sequence.e:1807							if compare(source[a], userdata[1]) >= 0 then*/
                // SubProg filter pc: 554 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3240 = (object)*(((s1_ptr)_2)->base + _a_6213);
                // SubProg filter pc: 558 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3241 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 562 op: COMPARE (76)
                if (IS_ATOM_INT(_3240) && IS_ATOM_INT(_3241)){
                    _3242 = (_3240 < _3241) ? -1 : (_3240 > _3241);
                }
                else{
                    _3242 = compare(_3240, _3241);
                }
                _3240 = NOVALUE;
                _3241 = NOVALUE;
                // SubProg filter pc: 566 op: GREATEREQ_IFW_I (120)
                if (_3242 < 0)
                goto L1E; // [566] 606
                // SubProg filter pc: 570 op: STARTLINE (58)

                /** sequence.e:1808								if compare(source[a], userdata[2]) < 0 then*/
                // SubProg filter pc: 572 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3244 = (object)*(((s1_ptr)_2)->base + _a_6213);
                // SubProg filter pc: 576 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3245 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 580 op: COMPARE (76)
                if (IS_ATOM_INT(_3244) && IS_ATOM_INT(_3245)){
                    _3246 = (_3244 < _3245) ? -1 : (_3244 > _3245);
                }
                else{
                    _3246 = compare(_3244, _3245);
                }
                _3244 = NOVALUE;
                _3245 = NOVALUE;
                // SubProg filter pc: 584 op: LESS_IFW_I (119)
                if (_3246 >= 0)
                goto L1F; // [584] 605
                // SubProg filter pc: 588 op: STARTLINE (58)

                /** sequence.e:1809									idx += 1*/
                // SubProg filter pc: 590 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 594 op: STARTLINE (58)

                /** sequence.e:1810									dest[idx] = source[a]*/
                // SubProg filter pc: 596 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3249 = (object)*(((s1_ptr)_2)->base + _a_6213);
                // SubProg filter pc: 600 op: ASSIGN_SUBS (16)
                Ref(_3249);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3249;
                if( _1 != _3249 ){
                    DeRef(_1);
                }
                _3249 = NOVALUE;
                // SubProg filter pc: 604 op: NOP1 (159)
L1F: // addr: 605 pc: 604 sub: 6094 op: 159
                // SubProg filter pc: 605 op: NOP1 (159)
L1E: // addr: 606 pc: 605 sub: 6094 op: 159
                // SubProg filter pc: 606 op: STARTLINE (58)

                /** sequence.e:1813						end for*/
                // SubProg filter pc: 608 op: ENDFOR_INT_UP1 (54)
                _a_6213 = _a_6213 + 1;
                goto L1C; // [608] 552
L1D: // addr: 613 pc: 608 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3250 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3250 = 1;
            }
            // SubProg filter pc: 624 op: FOR_I (125)
            {
                object _a_6229;
                _a_6229 = 1;
L20: // addr: 631 pc: 624 sub: 6094 op: 125
                if (_a_6229 > _3250){
                    goto L21; // [624] 692
                }
                // SubProg filter pc: 631 op: STARTLINE (58)

                /** sequence.e:1816							if compare(source[a], userdata[1]) > 0 then*/
                // SubProg filter pc: 633 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3251 = (object)*(((s1_ptr)_2)->base + _a_6229);
                // SubProg filter pc: 637 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3252 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 641 op: COMPARE (76)
                if (IS_ATOM_INT(_3251) && IS_ATOM_INT(_3252)){
                    _3253 = (_3251 < _3252) ? -1 : (_3251 > _3252);
                }
                else{
                    _3253 = compare(_3251, _3252);
                }
                _3251 = NOVALUE;
                _3252 = NOVALUE;
                // SubProg filter pc: 645 op: GREATER_IFW_I (124)
                if (_3253 <= 0)
                goto L22; // [645] 685
                // SubProg filter pc: 649 op: STARTLINE (58)

                /** sequence.e:1817								if compare(source[a], userdata[2]) <= 0 then*/
                // SubProg filter pc: 651 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3255 = (object)*(((s1_ptr)_2)->base + _a_6229);
                // SubProg filter pc: 655 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3256 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 659 op: COMPARE (76)
                if (IS_ATOM_INT(_3255) && IS_ATOM_INT(_3256)){
                    _3257 = (_3255 < _3256) ? -1 : (_3255 > _3256);
                }
                else{
                    _3257 = compare(_3255, _3256);
                }
                _3255 = NOVALUE;
                _3256 = NOVALUE;
                // SubProg filter pc: 663 op: LESSEQ_IFW_I (123)
                if (_3257 > 0)
                goto L23; // [663] 684
                // SubProg filter pc: 667 op: STARTLINE (58)

                /** sequence.e:1818									idx += 1*/
                // SubProg filter pc: 669 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 673 op: STARTLINE (58)

                /** sequence.e:1819									dest[idx] = source[a]*/
                // SubProg filter pc: 675 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3260 = (object)*(((s1_ptr)_2)->base + _a_6229);
                // SubProg filter pc: 679 op: ASSIGN_SUBS (16)
                Ref(_3260);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3260;
                if( _1 != _3260 ){
                    DeRef(_1);
                }
                _3260 = NOVALUE;
                // SubProg filter pc: 683 op: NOP1 (159)
L23: // addr: 684 pc: 683 sub: 6094 op: 159
                // SubProg filter pc: 684 op: NOP1 (159)
L22: // addr: 685 pc: 684 sub: 6094 op: 159
                // SubProg filter pc: 685 op: STARTLINE (58)

                /** sequence.e:1822						end for*/
                // SubProg filter pc: 687 op: ENDFOR_INT_UP1 (54)
                _a_6229 = _a_6229 + 1;
                goto L20; // [687] 631
L21: // addr: 692 pc: 687 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3261 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3261 = 1;
            }
            // SubProg filter pc: 703 op: FOR_I (125)
            {
                object _a_6245;
                _a_6245 = 1;
L24: // addr: 710 pc: 703 sub: 6094 op: 125
                if (_a_6245 > _3261){
                    goto L25; // [703] 771
                }
                // SubProg filter pc: 710 op: STARTLINE (58)

                /** sequence.e:1825							if compare(source[a], userdata[1]) > 0 then*/
                // SubProg filter pc: 712 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3262 = (object)*(((s1_ptr)_2)->base + _a_6245);
                // SubProg filter pc: 716 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3263 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 720 op: COMPARE (76)
                if (IS_ATOM_INT(_3262) && IS_ATOM_INT(_3263)){
                    _3264 = (_3262 < _3263) ? -1 : (_3262 > _3263);
                }
                else{
                    _3264 = compare(_3262, _3263);
                }
                _3262 = NOVALUE;
                _3263 = NOVALUE;
                // SubProg filter pc: 724 op: GREATER_IFW_I (124)
                if (_3264 <= 0)
                goto L26; // [724] 764
                // SubProg filter pc: 728 op: STARTLINE (58)

                /** sequence.e:1826								if compare(source[a], userdata[2]) < 0 then*/
                // SubProg filter pc: 730 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3266 = (object)*(((s1_ptr)_2)->base + _a_6245);
                // SubProg filter pc: 734 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3267 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 738 op: COMPARE (76)
                if (IS_ATOM_INT(_3266) && IS_ATOM_INT(_3267)){
                    _3268 = (_3266 < _3267) ? -1 : (_3266 > _3267);
                }
                else{
                    _3268 = compare(_3266, _3267);
                }
                _3266 = NOVALUE;
                _3267 = NOVALUE;
                // SubProg filter pc: 742 op: LESS_IFW_I (119)
                if (_3268 >= 0)
                goto L27; // [742] 763
                // SubProg filter pc: 746 op: STARTLINE (58)

                /** sequence.e:1827									idx += 1*/
                // SubProg filter pc: 748 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 752 op: STARTLINE (58)

                /** sequence.e:1828									dest[idx] = source[a]*/
                // SubProg filter pc: 754 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3271 = (object)*(((s1_ptr)_2)->base + _a_6245);
                // SubProg filter pc: 758 op: ASSIGN_SUBS (16)
                Ref(_3271);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3271;
                if( _1 != _3271 ){
                    DeRef(_1);
                }
                _3271 = NOVALUE;
                // SubProg filter pc: 762 op: NOP1 (159)
L27: // addr: 763 pc: 762 sub: 6094 op: 159
                // SubProg filter pc: 763 op: NOP1 (159)
L26: // addr: 764 pc: 763 sub: 6094 op: 159
                // SubProg filter pc: 764 op: STARTLINE (58)

                /** sequence.e:1831						end for*/
                // SubProg filter pc: 766 op: ENDFOR_INT_UP1 (54)
                _a_6245 = _a_6245 + 1;
                goto L24; // [766] 710
L25: // addr: 771 pc: 766 sub: 6094 op: 54
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
        _1 = find(_rangetype_6099, _3273);
        switch ( _1 ){ 
            // SubProg filter pc: 791 op: STARTLINE (58)

            /** sequence.e:1840					case "" then*/
            // SubProg filter pc: 793 op: CASE (186)
            case 1:
            // SubProg filter pc: 795 op: STARTLINE (58)

            /** sequence.e:1841						for a = 1 to length(source) do*/
            // SubProg filter pc: 797 op: LENGTH (42)
            if (IS_SEQUENCE(_source_6096)){
                    _3275 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3275 = 1;
            }
            // SubProg filter pc: 800 op: FOR_I (125)
            {
                object _a_6266;
                _a_6266 = 1;
L28: // addr: 807 pc: 800 sub: 6094 op: 125
                if (_a_6266 > _3275){
                    goto L29; // [800] 845
                }
                // SubProg filter pc: 807 op: STARTLINE (58)

                /** sequence.e:1842							if not find(source[a], userdata)  then*/
                // SubProg filter pc: 809 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3276 = (object)*(((s1_ptr)_2)->base + _a_6266);
                // SubProg filter pc: 813 op: FIND_FROM (176)
                _3277 = find_from(_3276, _userdata_6098, 1);
                _3276 = NOVALUE;
                // SubProg filter pc: 818 op: NOT_IFW (108)
                if (_3277 != 0)
                goto L2A; // [818] 838
                _3277 = NOVALUE;
                // SubProg filter pc: 821 op: STARTLINE (58)

                /** sequence.e:1843								idx += 1*/
                // SubProg filter pc: 823 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 827 op: STARTLINE (58)

                /** sequence.e:1844								dest[idx] = source[a]*/
                // SubProg filter pc: 829 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3280 = (object)*(((s1_ptr)_2)->base + _a_6266);
                // SubProg filter pc: 833 op: ASSIGN_SUBS (16)
                Ref(_3280);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3280;
                if( _1 != _3280 ){
                    DeRef(_1);
                }
                _3280 = NOVALUE;
                // SubProg filter pc: 837 op: NOP1 (159)
L2A: // addr: 838 pc: 837 sub: 6094 op: 159
                // SubProg filter pc: 838 op: STARTLINE (58)

                /** sequence.e:1846						end for*/
                // SubProg filter pc: 840 op: ENDFOR_INT_UP1 (54)
                _a_6266 = _a_6266 + 1;
                goto L28; // [840] 807
L29: // addr: 845 pc: 840 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3281 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3281 = 1;
            }
            // SubProg filter pc: 856 op: FOR_I (125)
            {
                object _a_6276;
                _a_6276 = 1;
L2B: // addr: 863 pc: 856 sub: 6094 op: 125
                if (_a_6276 > _3281){
                    goto L2C; // [856] 943
                }
                // SubProg filter pc: 863 op: STARTLINE (58)

                /** sequence.e:1850							if compare(source[a], userdata[1]) < 0 then*/
                // SubProg filter pc: 865 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3282 = (object)*(((s1_ptr)_2)->base + _a_6276);
                // SubProg filter pc: 869 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3283 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 873 op: COMPARE (76)
                if (IS_ATOM_INT(_3282) && IS_ATOM_INT(_3283)){
                    _3284 = (_3282 < _3283) ? -1 : (_3282 > _3283);
                }
                else{
                    _3284 = compare(_3282, _3283);
                }
                _3282 = NOVALUE;
                _3283 = NOVALUE;
                // SubProg filter pc: 877 op: LESS_IFW_I (119)
                if (_3284 >= 0)
                goto L2D; // [877] 900
                // SubProg filter pc: 881 op: STARTLINE (58)

                /** sequence.e:1851								idx += 1*/
                // SubProg filter pc: 883 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 887 op: STARTLINE (58)

                /** sequence.e:1852								dest[idx] = source[a]*/
                // SubProg filter pc: 889 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3287 = (object)*(((s1_ptr)_2)->base + _a_6276);
                // SubProg filter pc: 893 op: ASSIGN_SUBS (16)
                Ref(_3287);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3287;
                if( _1 != _3287 ){
                    DeRef(_1);
                }
                _3287 = NOVALUE;
                // SubProg filter pc: 897 op: ELSE (23)
                goto L2E; // [897] 936
                // SubProg filter pc: 899 op: NOP1 (159)
L2D: // addr: 900 pc: 899 sub: 6094 op: 159
                // SubProg filter pc: 900 op: STARTLINE (58)

                /** sequence.e:1853							elsif compare(source[a], userdata[2]) > 0 then*/
                // SubProg filter pc: 902 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3288 = (object)*(((s1_ptr)_2)->base + _a_6276);
                // SubProg filter pc: 906 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3289 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 910 op: COMPARE (76)
                if (IS_ATOM_INT(_3288) && IS_ATOM_INT(_3289)){
                    _3290 = (_3288 < _3289) ? -1 : (_3288 > _3289);
                }
                else{
                    _3290 = compare(_3288, _3289);
                }
                _3288 = NOVALUE;
                _3289 = NOVALUE;
                // SubProg filter pc: 914 op: GREATER_IFW_I (124)
                if (_3290 <= 0)
                goto L2F; // [914] 935
                // SubProg filter pc: 918 op: STARTLINE (58)

                /** sequence.e:1854								idx += 1*/
                // SubProg filter pc: 920 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 924 op: STARTLINE (58)

                /** sequence.e:1855								dest[idx] = source[a]*/
                // SubProg filter pc: 926 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3293 = (object)*(((s1_ptr)_2)->base + _a_6276);
                // SubProg filter pc: 930 op: ASSIGN_SUBS (16)
                Ref(_3293);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3293;
                if( _1 != _3293 ){
                    DeRef(_1);
                }
                _3293 = NOVALUE;
                // SubProg filter pc: 934 op: NOP1 (159)
L2F: // addr: 935 pc: 934 sub: 6094 op: 159
                // SubProg filter pc: 935 op: NOP1 (159)
L2E: // addr: 936 pc: 935 sub: 6094 op: 159
                // SubProg filter pc: 936 op: STARTLINE (58)

                /** sequence.e:1857						end for*/
                // SubProg filter pc: 938 op: ENDFOR_INT_UP1 (54)
                _a_6276 = _a_6276 + 1;
                goto L2B; // [938] 863
L2C: // addr: 943 pc: 938 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3294 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3294 = 1;
            }
            // SubProg filter pc: 954 op: FOR_I (125)
            {
                object _a_6294;
                _a_6294 = 1;
L30: // addr: 961 pc: 954 sub: 6094 op: 125
                if (_a_6294 > _3294){
                    goto L31; // [954] 1041
                }
                // SubProg filter pc: 961 op: STARTLINE (58)

                /** sequence.e:1861							if compare(source[a], userdata[1]) < 0 then*/
                // SubProg filter pc: 963 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3295 = (object)*(((s1_ptr)_2)->base + _a_6294);
                // SubProg filter pc: 967 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3296 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 971 op: COMPARE (76)
                if (IS_ATOM_INT(_3295) && IS_ATOM_INT(_3296)){
                    _3297 = (_3295 < _3296) ? -1 : (_3295 > _3296);
                }
                else{
                    _3297 = compare(_3295, _3296);
                }
                _3295 = NOVALUE;
                _3296 = NOVALUE;
                // SubProg filter pc: 975 op: LESS_IFW_I (119)
                if (_3297 >= 0)
                goto L32; // [975] 998
                // SubProg filter pc: 979 op: STARTLINE (58)

                /** sequence.e:1862								idx += 1*/
                // SubProg filter pc: 981 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 985 op: STARTLINE (58)

                /** sequence.e:1863								dest[idx] = source[a]*/
                // SubProg filter pc: 987 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3300 = (object)*(((s1_ptr)_2)->base + _a_6294);
                // SubProg filter pc: 991 op: ASSIGN_SUBS (16)
                Ref(_3300);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3300;
                if( _1 != _3300 ){
                    DeRef(_1);
                }
                _3300 = NOVALUE;
                // SubProg filter pc: 995 op: ELSE (23)
                goto L33; // [995] 1034
                // SubProg filter pc: 997 op: NOP1 (159)
L32: // addr: 998 pc: 997 sub: 6094 op: 159
                // SubProg filter pc: 998 op: STARTLINE (58)

                /** sequence.e:1864							elsif compare(source[a], userdata[2]) >= 0 then*/
                // SubProg filter pc: 1000 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3301 = (object)*(((s1_ptr)_2)->base + _a_6294);
                // SubProg filter pc: 1004 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3302 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1008 op: COMPARE (76)
                if (IS_ATOM_INT(_3301) && IS_ATOM_INT(_3302)){
                    _3303 = (_3301 < _3302) ? -1 : (_3301 > _3302);
                }
                else{
                    _3303 = compare(_3301, _3302);
                }
                _3301 = NOVALUE;
                _3302 = NOVALUE;
                // SubProg filter pc: 1012 op: GREATEREQ_IFW_I (120)
                if (_3303 < 0)
                goto L34; // [1012] 1033
                // SubProg filter pc: 1016 op: STARTLINE (58)

                /** sequence.e:1865								idx += 1*/
                // SubProg filter pc: 1018 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 1022 op: STARTLINE (58)

                /** sequence.e:1866								dest[idx] = source[a]*/
                // SubProg filter pc: 1024 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3306 = (object)*(((s1_ptr)_2)->base + _a_6294);
                // SubProg filter pc: 1028 op: ASSIGN_SUBS (16)
                Ref(_3306);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3306;
                if( _1 != _3306 ){
                    DeRef(_1);
                }
                _3306 = NOVALUE;
                // SubProg filter pc: 1032 op: NOP1 (159)
L34: // addr: 1033 pc: 1032 sub: 6094 op: 159
                // SubProg filter pc: 1033 op: NOP1 (159)
L33: // addr: 1034 pc: 1033 sub: 6094 op: 159
                // SubProg filter pc: 1034 op: STARTLINE (58)

                /** sequence.e:1868						end for*/
                // SubProg filter pc: 1036 op: ENDFOR_INT_UP1 (54)
                _a_6294 = _a_6294 + 1;
                goto L30; // [1036] 961
L31: // addr: 1041 pc: 1036 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3307 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3307 = 1;
            }
            // SubProg filter pc: 1052 op: FOR_I (125)
            {
                object _a_6312;
                _a_6312 = 1;
L35: // addr: 1059 pc: 1052 sub: 6094 op: 125
                if (_a_6312 > _3307){
                    goto L36; // [1052] 1139
                }
                // SubProg filter pc: 1059 op: STARTLINE (58)

                /** sequence.e:1871							if compare(source[a], userdata[1]) <= 0 then*/
                // SubProg filter pc: 1061 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3308 = (object)*(((s1_ptr)_2)->base + _a_6312);
                // SubProg filter pc: 1065 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3309 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 1069 op: COMPARE (76)
                if (IS_ATOM_INT(_3308) && IS_ATOM_INT(_3309)){
                    _3310 = (_3308 < _3309) ? -1 : (_3308 > _3309);
                }
                else{
                    _3310 = compare(_3308, _3309);
                }
                _3308 = NOVALUE;
                _3309 = NOVALUE;
                // SubProg filter pc: 1073 op: LESSEQ_IFW_I (123)
                if (_3310 > 0)
                goto L37; // [1073] 1096
                // SubProg filter pc: 1077 op: STARTLINE (58)

                /** sequence.e:1872								idx += 1*/
                // SubProg filter pc: 1079 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 1083 op: STARTLINE (58)

                /** sequence.e:1873								dest[idx] = source[a]*/
                // SubProg filter pc: 1085 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3313 = (object)*(((s1_ptr)_2)->base + _a_6312);
                // SubProg filter pc: 1089 op: ASSIGN_SUBS (16)
                Ref(_3313);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3313;
                if( _1 != _3313 ){
                    DeRef(_1);
                }
                _3313 = NOVALUE;
                // SubProg filter pc: 1093 op: ELSE (23)
                goto L38; // [1093] 1132
                // SubProg filter pc: 1095 op: NOP1 (159)
L37: // addr: 1096 pc: 1095 sub: 6094 op: 159
                // SubProg filter pc: 1096 op: STARTLINE (58)

                /** sequence.e:1874							elsif compare(source[a], userdata[2]) > 0 then*/
                // SubProg filter pc: 1098 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3314 = (object)*(((s1_ptr)_2)->base + _a_6312);
                // SubProg filter pc: 1102 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3315 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1106 op: COMPARE (76)
                if (IS_ATOM_INT(_3314) && IS_ATOM_INT(_3315)){
                    _3316 = (_3314 < _3315) ? -1 : (_3314 > _3315);
                }
                else{
                    _3316 = compare(_3314, _3315);
                }
                _3314 = NOVALUE;
                _3315 = NOVALUE;
                // SubProg filter pc: 1110 op: GREATER_IFW_I (124)
                if (_3316 <= 0)
                goto L39; // [1110] 1131
                // SubProg filter pc: 1114 op: STARTLINE (58)

                /** sequence.e:1875								idx += 1*/
                // SubProg filter pc: 1116 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 1120 op: STARTLINE (58)

                /** sequence.e:1876								dest[idx] = source[a]*/
                // SubProg filter pc: 1122 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3319 = (object)*(((s1_ptr)_2)->base + _a_6312);
                // SubProg filter pc: 1126 op: ASSIGN_SUBS (16)
                Ref(_3319);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3319;
                if( _1 != _3319 ){
                    DeRef(_1);
                }
                _3319 = NOVALUE;
                // SubProg filter pc: 1130 op: NOP1 (159)
L39: // addr: 1131 pc: 1130 sub: 6094 op: 159
                // SubProg filter pc: 1131 op: NOP1 (159)
L38: // addr: 1132 pc: 1131 sub: 6094 op: 159
                // SubProg filter pc: 1132 op: STARTLINE (58)

                /** sequence.e:1878						end for*/
                // SubProg filter pc: 1134 op: ENDFOR_INT_UP1 (54)
                _a_6312 = _a_6312 + 1;
                goto L35; // [1134] 1059
L36: // addr: 1139 pc: 1134 sub: 6094 op: 54
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
            if (IS_SEQUENCE(_source_6096)){
                    _3320 = SEQ_PTR(_source_6096)->length;
            }
            else {
                _3320 = 1;
            }
            // SubProg filter pc: 1150 op: FOR_I (125)
            {
                object _a_6330;
                _a_6330 = 1;
L3A: // addr: 1157 pc: 1150 sub: 6094 op: 125
                if (_a_6330 > _3320){
                    goto L3B; // [1150] 1237
                }
                // SubProg filter pc: 1157 op: STARTLINE (58)

                /** sequence.e:1881							if compare(source[a], userdata[1]) <= 0 then*/
                // SubProg filter pc: 1159 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3321 = (object)*(((s1_ptr)_2)->base + _a_6330);
                // SubProg filter pc: 1163 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3322 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 1167 op: COMPARE (76)
                if (IS_ATOM_INT(_3321) && IS_ATOM_INT(_3322)){
                    _3323 = (_3321 < _3322) ? -1 : (_3321 > _3322);
                }
                else{
                    _3323 = compare(_3321, _3322);
                }
                _3321 = NOVALUE;
                _3322 = NOVALUE;
                // SubProg filter pc: 1171 op: LESSEQ_IFW_I (123)
                if (_3323 > 0)
                goto L3C; // [1171] 1194
                // SubProg filter pc: 1175 op: STARTLINE (58)

                /** sequence.e:1882								idx += 1*/
                // SubProg filter pc: 1177 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 1181 op: STARTLINE (58)

                /** sequence.e:1883								dest[idx] = source[a]*/
                // SubProg filter pc: 1183 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3326 = (object)*(((s1_ptr)_2)->base + _a_6330);
                // SubProg filter pc: 1187 op: ASSIGN_SUBS (16)
                Ref(_3326);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3326;
                if( _1 != _3326 ){
                    DeRef(_1);
                }
                _3326 = NOVALUE;
                // SubProg filter pc: 1191 op: ELSE (23)
                goto L3D; // [1191] 1230
                // SubProg filter pc: 1193 op: NOP1 (159)
L3C: // addr: 1194 pc: 1193 sub: 6094 op: 159
                // SubProg filter pc: 1194 op: STARTLINE (58)

                /** sequence.e:1884							elsif compare(source[a], userdata[2]) >= 0 then*/
                // SubProg filter pc: 1196 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3327 = (object)*(((s1_ptr)_2)->base + _a_6330);
                // SubProg filter pc: 1200 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_6098);
                _3328 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1204 op: COMPARE (76)
                if (IS_ATOM_INT(_3327) && IS_ATOM_INT(_3328)){
                    _3329 = (_3327 < _3328) ? -1 : (_3327 > _3328);
                }
                else{
                    _3329 = compare(_3327, _3328);
                }
                _3327 = NOVALUE;
                _3328 = NOVALUE;
                // SubProg filter pc: 1208 op: GREATEREQ_IFW_I (120)
                if (_3329 < 0)
                goto L3E; // [1208] 1229
                // SubProg filter pc: 1212 op: STARTLINE (58)

                /** sequence.e:1885								idx += 1*/
                // SubProg filter pc: 1214 op: PLUS1_I (117)
                _idx_6101 = _idx_6101 + 1;
                // SubProg filter pc: 1218 op: STARTLINE (58)

                /** sequence.e:1886								dest[idx] = source[a]*/
                // SubProg filter pc: 1220 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_6096);
                _3332 = (object)*(((s1_ptr)_2)->base + _a_6330);
                // SubProg filter pc: 1224 op: ASSIGN_SUBS (16)
                Ref(_3332);
                _2 = (object)SEQ_PTR(_dest_6100);
                _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _3332;
                if( _1 != _3332 ){
                    DeRef(_1);
                }
                _3332 = NOVALUE;
                // SubProg filter pc: 1228 op: NOP1 (159)
L3E: // addr: 1229 pc: 1228 sub: 6094 op: 159
                // SubProg filter pc: 1229 op: NOP1 (159)
L3D: // addr: 1230 pc: 1229 sub: 6094 op: 159
                // SubProg filter pc: 1230 op: STARTLINE (58)

                /** sequence.e:1888						end for*/
                // SubProg filter pc: 1232 op: ENDFOR_INT_UP1 (54)
                _a_6330 = _a_6330 + 1;
                goto L3A; // [1232] 1157
L3B: // addr: 1237 pc: 1232 sub: 6094 op: 54
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
        if (IS_SEQUENCE(_source_6096)){
                _3333 = SEQ_PTR(_source_6096)->length;
        }
        else {
            _3333 = 1;
        }
        // SubProg filter pc: 1255 op: FOR_I (125)
        {
            object _a_6349;
            _a_6349 = 1;
L3F: // addr: 1262 pc: 1255 sub: 6094 op: 125
            if (_a_6349 > _3333){
                goto L40; // [1255] 1303
            }
            // SubProg filter pc: 1262 op: STARTLINE (58)

            /** sequence.e:1896					if call_func(rid, {source[a], userdata}) then*/
            // SubProg filter pc: 1264 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3334 = (object)*(((s1_ptr)_2)->base + _a_6349);
            // SubProg filter pc: 1268 op: RIGHT_BRACE_2 (85)
            Ref(_userdata_6098);
            Ref(_3334);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _3334;
            ((intptr_t *)_2)[2] = _userdata_6098;
            _3335 = MAKE_SEQ(_1);
            _3334 = NOVALUE;
            // SubProg filter pc: 1272 op: CALL_FUNC (137)
            _1 = (object)SEQ_PTR(_3335);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_rid_6097].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            Ref( *(( (intptr_t*)_2) + 2) );
            _1 = (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1), 
                                *( ((intptr_t *)_2) + 2)
                                 );
            DeRef(_3336);
            _3336 = _1;
            DeRefDS(_3335);
            _3335 = NOVALUE;
            // SubProg filter pc: 1276 op: IF (20)
            if (_3336 == 0) {
                DeRef(_3336);
                _3336 = NOVALUE;
                goto L41; // [1276] 1296
            }
            else {
                if (!IS_ATOM_INT(_3336) && DBL_PTR(_3336)->dbl == 0.0){
                    DeRef(_3336);
                    _3336 = NOVALUE;
                    goto L41; // [1276] 1296
                }
                DeRef(_3336);
                _3336 = NOVALUE;
            }
            DeRef(_3336);
            _3336 = NOVALUE;
            // SubProg filter pc: 1279 op: STARTLINE (58)

            /** sequence.e:1897						idx += 1*/
            // SubProg filter pc: 1281 op: PLUS1_I (117)
            _idx_6101 = _idx_6101 + 1;
            // SubProg filter pc: 1285 op: STARTLINE (58)

            /** sequence.e:1898						dest[idx] = source[a]*/
            // SubProg filter pc: 1287 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_6096);
            _3338 = (object)*(((s1_ptr)_2)->base + _a_6349);
            // SubProg filter pc: 1291 op: ASSIGN_SUBS (16)
            Ref(_3338);
            _2 = (object)SEQ_PTR(_dest_6100);
            _2 = (object)(((s1_ptr)_2)->base + _idx_6101);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3338;
            if( _1 != _3338 ){
                DeRef(_1);
            }
            _3338 = NOVALUE;
            // SubProg filter pc: 1295 op: NOP1 (159)
L41: // addr: 1296 pc: 1295 sub: 6094 op: 159
            // SubProg filter pc: 1296 op: STARTLINE (58)

            /** sequence.e:1900				end for*/
            // SubProg filter pc: 1298 op: ENDFOR_INT_UP1 (54)
            _a_6349 = _a_6349 + 1;
            goto L3F; // [1298] 1262
L40: // addr: 1303 pc: 1298 sub: 6094 op: 54
            ;
        }
        // SubProg filter pc: 1303 op: NOPSWITCH (187)
    ;}L5: // addr: 1304 pc: 1303 sub: 6094 op: 187
    // SubProg filter pc: 1304 op: STARTLINE (58)

    /** sequence.e:1902		return dest[1..idx]*/
    // SubProg filter pc: 1306 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3339;
    RHS_Slice(_dest_6100, 1, _idx_6101);
    // SubProg filter pc: 1311 op: RETURNF (28)

// Exiting block BLOCK: filter

// block var source_6096
    DeRefDS(_source_6096);

// block var rid_6097

// block var userdata_6098
    DeRef(_userdata_6098);

// block var rangetype_6099
    DeRef(_rangetype_6099);

// block var dest_6100
    DeRefDS(_dest_6100);

// block var idx_6101
    return _3339;
    // SubProg filter pc: 1315 op: BADRETURNF (43)
    ;
}


object _23filter_alpha(object _elem_6361, object _ud_6362)
{
    object _3340 = NOVALUE; // 6364 3340
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filter_alpha pc: 1 op: STARTLINE (58)

    /** sequence.e:1907		return t_alpha(elem)*/
    // SubProg filter_alpha pc: 3 op: PROC (27)
    Ref(_elem_6361);
    _3340 = _8t_alpha(_elem_6361);
    // SubProg filter_alpha pc: 7 op: RETURNF (28)

// Exiting block BLOCK: filter_alpha

// block var elem_6361
    DeRef(_elem_6361);
    return _3340;
    // SubProg filter_alpha pc: 11 op: BADRETURNF (43)
    ;
}


object _23split(object _st_6406, object _delim_6407, object _no_empty_6408, object _limit_6409)
{
    object _ret_6410 = NOVALUE;
    object _start_6411 = NOVALUE;
    object _pos_6412 = NOVALUE;
    object _k_6464 = NOVALUE;
    object _3408 = NOVALUE; // 6481 3408
// skipping _3407  name type: 0
    object _3406 = NOVALUE; // 6479 3406
    object _3405 = NOVALUE; // 6477 3405
// skipping _3404  name type: 0
// skipping _3403  name type: 0
// skipping _3402  name type: 0
    object _3401 = NOVALUE; // 6472 3401
    object _3400 = NOVALUE; // 6471 3400
    object _3399 = NOVALUE; // 6469 3399
// skipping _3398  name type: 0
// skipping _3397  name type: 0
    object _3396 = NOVALUE; // 6462 3396
    object _3395 = NOVALUE; // 6461 3395
// skipping _3394  name type: 0
// skipping _3393  name type: 0
// skipping _3392  name type: 0
// skipping _3391  name type: 0
    object _3390 = NOVALUE; // 6455 3390
    object _3389 = NOVALUE; // 6454 3389
// skipping _3388  name type: 0
// skipping _3387  name type: 0
// skipping _3386  name type: 0
    object _3385 = NOVALUE; // 6449 3385
// skipping _3384  name type: 0
// skipping _3383  name type: 0
// skipping _3382  name type: 0
    object _3381 = NOVALUE; // 6442 3381
// skipping _3380  name type: 0
    object _3379 = NOVALUE; // 6440 3379
    object _3378 = NOVALUE; // 6439 3378
// skipping _3377  name type: 0
// skipping _3376  name type: 0
// skipping _3375  name type: 0
    object _3374 = NOVALUE; // 6434 3374
// skipping _3373  name type: 0
    object _3372 = NOVALUE; // 6431 3372
    object _3371 = NOVALUE; // 6430 3371
    object _3370 = NOVALUE; // 6429 3370
    object _3369 = NOVALUE; // 6428 3369
// skipping _3368  name type: 0
// skipping _3367  name type: 0
    object _3366 = NOVALUE; // 6424 3366
    object _3365 = NOVALUE; // 6423 3365
    object _3364 = NOVALUE; // 6422 3364
    object _3363 = NOVALUE; // 6419 3363
    object _3362 = NOVALUE; // 6417 3362
// skipping _3361  name type: 0
    object _3360 = NOVALUE; // 6414 3360
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg split pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg split pc: 3 op: INTEGER_CHECK (96)
    // SubProg split pc: 5 op: INTEGER_CHECK (96)
    // SubProg split pc: 7 op: STARTLINE (58)

    /** sequence.e:2088		sequence ret = {}*/
    // SubProg split pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_6410);
    _ret_6410 = _5;
    // SubProg split pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg split pc: 14 op: STARTLINE (58)

    /** sequence.e:2092		if length(st) = 0 then*/
    // SubProg split pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_st_6406)){
            _3360 = SEQ_PTR(_st_6406)->length;
    }
    else {
        _3360 = 1;
    }
    // SubProg split pc: 19 op: EQUALS_IFW_I (121)
    if (_3360 != 0)
    goto L1; // [19] 30
    // SubProg split pc: 23 op: STARTLINE (58)

    /** sequence.e:2093			return ret*/
    // SubProg split pc: 25 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_6406
    DeRefDS(_st_6406);

// block var delim_6407
    DeRefi(_delim_6407);

// block var no_empty_6408

// block var limit_6409

// block var start_6411

// block var pos_6412

// block var k_6464
    return _ret_6410;
    // SubProg split pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 6404 op: 159
    // SubProg split pc: 30 op: STARTLINE (58)

    /** sequence.e:2097		if sequence(delim) then*/
    // SubProg split pc: 32 op: IS_A_SEQUENCE (68)
    _3362 = IS_SEQUENCE(_delim_6407);
    // SubProg split pc: 35 op: IF (20)
    if (_3362 == 0)
    {
        _3362 = NOVALUE;
        goto L2; // [35] 211
    }
    else{
        _3362 = NOVALUE;
    }
    // SubProg split pc: 38 op: STARTLINE (58)

    /** sequence.e:2099			if equal(delim, "") then*/
    // SubProg split pc: 40 op: EQUAL (153)
    if (_delim_6407 == _5)
    _3363 = 1;
    else if (IS_ATOM_INT(_delim_6407) && IS_ATOM_INT(_5))
    _3363 = 0;
    else
    _3363 = (compare(_delim_6407, _5) == 0);
    // SubProg split pc: 44 op: IF (20)
    if (_3363 == 0)
    {
        _3363 = NOVALUE;
        goto L3; // [44] 127
    }
    else{
        _3363 = NOVALUE;
    }
    // SubProg split pc: 47 op: STARTLINE (58)

    /** sequence.e:2100				for i = 1 to length(st) do*/
    // SubProg split pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_st_6406)){
            _3364 = SEQ_PTR(_st_6406)->length;
    }
    else {
        _3364 = 1;
    }
    // SubProg split pc: 52 op: FOR_I (125)
    {
        object _i_6421;
        _i_6421 = 1;
L4: // addr: 59 pc: 52 sub: 6404 op: 125
        if (_i_6421 > _3364){
            goto L5; // [52] 120
        }
        // SubProg split pc: 59 op: STARTLINE (58)

        /** sequence.e:2101					st[i] = {st[i]}*/
        // SubProg split pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_st_6406);
        _3365 = (object)*(((s1_ptr)_2)->base + _i_6421);
        // SubProg split pc: 65 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_3365);
        ((intptr_t*)_2)[1] = _3365;
        _3366 = MAKE_SEQ(_1);
        _3365 = NOVALUE;
        // SubProg split pc: 69 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_st_6406);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _st_6406 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_6421);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3366;
        if( _1 != _3366 ){
            DeRef(_1);
        }
        _3366 = NOVALUE;
        // SubProg split pc: 73 op: STARTLINE (58)

        /** sequence.e:2102					limit -= 1*/
        // SubProg split pc: 75 op: MINUS_I (116)
        _limit_6409 = _limit_6409 - 1;
        // SubProg split pc: 79 op: STARTLINE (58)

        /** sequence.e:2103					if limit = 0 then*/
        // SubProg split pc: 81 op: EQUALS_IFW_I (121)
        if (_limit_6409 != 0)
        goto L6; // [81] 113
        // SubProg split pc: 85 op: STARTLINE (58)

        /** sequence.e:2104						st = append(st[1 .. i],st[i+1 .. $])*/
        // SubProg split pc: 87 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3369;
        RHS_Slice(_st_6406, 1, _i_6421);
        // SubProg split pc: 92 op: PLUS1 (93)
        _3370 = _i_6421 + 1;
        // SubProg split pc: 96 op: LENGTH (42)
        if (IS_SEQUENCE(_st_6406)){
                _3371 = SEQ_PTR(_st_6406)->length;
        }
        else {
            _3371 = 1;
        }
        // SubProg split pc: 99 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3372;
        RHS_Slice(_st_6406, _3370, _3371);
        // SubProg split pc: 104 op: APPEND (35)
        RefDS(_3372);
        Append(&_st_6406, _3369, _3372);
        DeRefDS(_3369);
        _3369 = NOVALUE;
        DeRefDS(_3372);
        _3372 = NOVALUE;
        // SubProg split pc: 108 op: STARTLINE (58)

        /** sequence.e:2105						exit*/
        // SubProg split pc: 110 op: EXIT (61)
        goto L5; // [110] 120
        // SubProg split pc: 112 op: NOP1 (159)
L6: // addr: 113 pc: 112 sub: 6404 op: 159
        // SubProg split pc: 113 op: STARTLINE (58)

        /** sequence.e:2107				end for*/
        // SubProg split pc: 115 op: ENDFOR_INT_UP1 (54)
        _i_6421 = _i_6421 + 1;
        goto L4; // [115] 59
L5: // addr: 120 pc: 115 sub: 6404 op: 54
        ;
    }
    // SubProg split pc: 120 op: STARTLINE (58)

    /** sequence.e:2109				return st*/
    // SubProg split pc: 122 op: RETURNF (28)

// Exiting block BLOCK: split

// block var delim_6407
    DeRefi(_delim_6407);

// block var no_empty_6408

// block var limit_6409

// block var ret_6410
    DeRef(_ret_6410);

// block var start_6411

// block var pos_6412

// block var k_6464
    DeRef(_3370);
    _3370 = NOVALUE;
    return _st_6406;
    // SubProg split pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 6404 op: 159
    // SubProg split pc: 127 op: STARTLINE (58)

    /** sequence.e:2112			start = 1*/
    // SubProg split pc: 129 op: ASSIGN_I (113)
    _start_6411 = 1;
    // SubProg split pc: 132 op: STARTLINE (58)

    /** sequence.e:2113			while start <= length(st) do*/
    // SubProg split pc: 134 op: NOP2 (110)
    // SubProg split pc: 136 op: NOPWHILE (158)
L7: // addr: 137 pc: 136 sub: 6404 op: 158
    // SubProg split pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_st_6406)){
            _3374 = SEQ_PTR(_st_6406)->length;
    }
    else {
        _3374 = 1;
    }
    // SubProg split pc: 140 op: LESSEQ_IFW_I (123)
    if (_start_6411 > _3374)
    goto L8; // [140] 290
    // SubProg split pc: 144 op: STARTLINE (58)

    /** sequence.e:2114				pos = match(delim, st, start)*/
    // SubProg split pc: 146 op: MATCH_FROM (177)
    _pos_6412 = e_match_from(_delim_6407, _st_6406, _start_6411);
    // SubProg split pc: 151 op: STARTLINE (58)

    /** sequence.e:2116				if pos = 0 then*/
    // SubProg split pc: 153 op: EQUALS_IFW_I (121)
    if (_pos_6412 != 0)
    goto L9; // [153] 162
    // SubProg split pc: 157 op: STARTLINE (58)

    /** sequence.e:2117					exit*/
    // SubProg split pc: 159 op: EXIT (61)
    goto L8; // [159] 290
    // SubProg split pc: 161 op: NOP1 (159)
L9: // addr: 162 pc: 161 sub: 6404 op: 159
    // SubProg split pc: 162 op: STARTLINE (58)

    /** sequence.e:2120				ret = append(ret, st[start..pos-1])*/
    // SubProg split pc: 164 op: MINUS (10)
    _3378 = _pos_6412 - 1;
    // SubProg split pc: 168 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3379;
    RHS_Slice(_st_6406, _start_6411, _3378);
    // SubProg split pc: 173 op: APPEND (35)
    RefDS(_3379);
    Append(&_ret_6410, _ret_6410, _3379);
    DeRefDS(_3379);
    _3379 = NOVALUE;
    // SubProg split pc: 177 op: STARTLINE (58)

    /** sequence.e:2121				start = pos+length(delim)*/
    // SubProg split pc: 179 op: LENGTH (42)
    if (IS_SEQUENCE(_delim_6407)){
            _3381 = SEQ_PTR(_delim_6407)->length;
    }
    else {
        _3381 = 1;
    }
    // SubProg split pc: 182 op: PLUS_I (115)
    _start_6411 = _pos_6412 + _3381;
    _3381 = NOVALUE;
    // SubProg split pc: 186 op: STARTLINE (58)

    /** sequence.e:2122				limit -= 1*/
    // SubProg split pc: 188 op: MINUS_I (116)
    _limit_6409 = _limit_6409 - 1;
    // SubProg split pc: 192 op: STARTLINE (58)

    /** sequence.e:2123				if limit = 0 then*/
    // SubProg split pc: 194 op: EQUALS_IFW_I (121)
    if (_limit_6409 != 0)
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
L2: // addr: 211 pc: 210 sub: 6404 op: 159
    // SubProg split pc: 211 op: STARTLINE (58)

    /** sequence.e:2128			start = 1*/
    // SubProg split pc: 213 op: ASSIGN_I (113)
    _start_6411 = 1;
    // SubProg split pc: 216 op: STARTLINE (58)

    /** sequence.e:2129			while start <= length(st) do*/
    // SubProg split pc: 218 op: NOP2 (110)
    // SubProg split pc: 220 op: NOPWHILE (158)
LA: // addr: 221 pc: 220 sub: 6404 op: 158
    // SubProg split pc: 221 op: LENGTH (42)
    if (IS_SEQUENCE(_st_6406)){
            _3385 = SEQ_PTR(_st_6406)->length;
    }
    else {
        _3385 = 1;
    }
    // SubProg split pc: 224 op: LESSEQ_IFW_I (123)
    if (_start_6411 > _3385)
    goto LB; // [224] 289
    // SubProg split pc: 228 op: STARTLINE (58)

    /** sequence.e:2130				pos = find(delim, st, start)*/
    // SubProg split pc: 230 op: FIND_FROM (176)
    _pos_6412 = find_from(_delim_6407, _st_6406, _start_6411);
    // SubProg split pc: 235 op: STARTLINE (58)

    /** sequence.e:2132				if pos = 0 then*/
    // SubProg split pc: 237 op: EQUALS_IFW_I (121)
    if (_pos_6412 != 0)
    goto LC; // [237] 246
    // SubProg split pc: 241 op: STARTLINE (58)

    /** sequence.e:2133					exit*/
    // SubProg split pc: 243 op: EXIT (61)
    goto LB; // [243] 289
    // SubProg split pc: 245 op: NOP1 (159)
LC: // addr: 246 pc: 245 sub: 6404 op: 159
    // SubProg split pc: 246 op: STARTLINE (58)

    /** sequence.e:2136				ret = append(ret, st[start..pos-1])*/
    // SubProg split pc: 248 op: MINUS (10)
    _3389 = _pos_6412 - 1;
    // SubProg split pc: 252 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3390;
    RHS_Slice(_st_6406, _start_6411, _3389);
    // SubProg split pc: 257 op: APPEND (35)
    RefDS(_3390);
    Append(&_ret_6410, _ret_6410, _3390);
    DeRefDS(_3390);
    _3390 = NOVALUE;
    // SubProg split pc: 261 op: STARTLINE (58)

    /** sequence.e:2137				start = pos + 1*/
    // SubProg split pc: 263 op: PLUS1_I (117)
    _start_6411 = _pos_6412 + 1;
    // SubProg split pc: 267 op: STARTLINE (58)

    /** sequence.e:2138				limit -= 1*/
    // SubProg split pc: 269 op: MINUS_I (116)
    _limit_6409 = _limit_6409 - 1;
    // SubProg split pc: 273 op: STARTLINE (58)

    /** sequence.e:2139				if limit = 0 then*/
    // SubProg split pc: 275 op: EQUALS_IFW_I (121)
    if (_limit_6409 != 0)
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
LB: // addr: 289 pc: 288 sub: 6404 op: 159
    // SubProg split pc: 289 op: NOP1 (159)
L8: // addr: 290 pc: 289 sub: 6404 op: 159
    // SubProg split pc: 290 op: STARTLINE (58)

    /** sequence.e:2145		ret = append(ret, st[start..$])*/
    // SubProg split pc: 292 op: PRIVATE_INIT_CHECK (30)
    // SubProg split pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_st_6406)){
            _3395 = SEQ_PTR(_st_6406)->length;
    }
    else {
        _3395 = 1;
    }
    // SubProg split pc: 297 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3396;
    RHS_Slice(_st_6406, _start_6411, _3395);
    // SubProg split pc: 302 op: APPEND (35)
    RefDS(_3396);
    Append(&_ret_6410, _ret_6410, _3396);
    DeRefDS(_3396);
    _3396 = NOVALUE;
    // SubProg split pc: 306 op: STARTLINE (58)

    /** sequence.e:2147		integer k = length(ret)*/
    // SubProg split pc: 308 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6410)){
            _k_6464 = SEQ_PTR(_ret_6410)->length;
    }
    else {
        _k_6464 = 1;
    }
    // SubProg split pc: 311 op: STARTLINE (58)

    /** sequence.e:2148		if no_empty then*/
    // SubProg split pc: 313 op: IF (20)
    if (_no_empty_6408 == 0)
    {
        goto LD; // [313] 378
    }
    else{
    }
    // SubProg split pc: 316 op: STARTLINE (58)

    /** sequence.e:2149			k = 0*/
    // SubProg split pc: 318 op: ASSIGN_I (113)
    _k_6464 = 0;
    // SubProg split pc: 321 op: STARTLINE (58)

    /** sequence.e:2150			for i = 1 to length(ret) do*/
    // SubProg split pc: 323 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6410)){
            _3399 = SEQ_PTR(_ret_6410)->length;
    }
    else {
        _3399 = 1;
    }
    // SubProg split pc: 326 op: FOR_I (125)
    {
        object _i_6468;
        _i_6468 = 1;
LE: // addr: 333 pc: 326 sub: 6404 op: 125
        if (_i_6468 > _3399){
            goto LF; // [326] 377
        }
        // SubProg split pc: 333 op: STARTLINE (58)

        /** sequence.e:2151				if length(ret[i]) != 0 then*/
        // SubProg split pc: 335 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ret_6410);
        _3400 = (object)*(((s1_ptr)_2)->base + _i_6468);
        // SubProg split pc: 339 op: LENGTH (42)
        if (IS_SEQUENCE(_3400)){
                _3401 = SEQ_PTR(_3400)->length;
        }
        else {
            _3401 = 1;
        }
        _3400 = NOVALUE;
        // SubProg split pc: 342 op: NOTEQ_IFW_I (122)
        if (_3401 == 0)
        goto L10; // [342] 370
        // SubProg split pc: 346 op: STARTLINE (58)

        /** sequence.e:2152					k += 1*/
        // SubProg split pc: 348 op: PLUS1_I (117)
        _k_6464 = _k_6464 + 1;
        // SubProg split pc: 352 op: STARTLINE (58)

        /** sequence.e:2153					if k != i then*/
        // SubProg split pc: 354 op: NOTEQ_IFW_I (122)
        if (_k_6464 == _i_6468)
        goto L11; // [354] 369
        // SubProg split pc: 358 op: STARTLINE (58)

        /** sequence.e:2154						ret[k] = ret[i]*/
        // SubProg split pc: 360 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ret_6410);
        _3405 = (object)*(((s1_ptr)_2)->base + _i_6468);
        // SubProg split pc: 364 op: ASSIGN_SUBS (16)
        Ref(_3405);
        _2 = (object)SEQ_PTR(_ret_6410);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _ret_6410 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _k_6464);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3405;
        if( _1 != _3405 ){
            DeRef(_1);
        }
        _3405 = NOVALUE;
        // SubProg split pc: 368 op: NOP1 (159)
L11: // addr: 369 pc: 368 sub: 6404 op: 159
        // SubProg split pc: 369 op: NOP1 (159)
L10: // addr: 370 pc: 369 sub: 6404 op: 159
        // SubProg split pc: 370 op: STARTLINE (58)

        /** sequence.e:2157			end for*/
        // SubProg split pc: 372 op: ENDFOR_INT_UP1 (54)
        _i_6468 = _i_6468 + 1;
        goto LE; // [372] 333
LF: // addr: 377 pc: 372 sub: 6404 op: 54
        ;
    }
    // SubProg split pc: 377 op: NOP1 (159)
LD: // addr: 378 pc: 377 sub: 6404 op: 159
    // SubProg split pc: 378 op: STARTLINE (58)

    /** sequence.e:2160		if k < length(ret) then*/
    // SubProg split pc: 380 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6410)){
            _3406 = SEQ_PTR(_ret_6410)->length;
    }
    else {
        _3406 = 1;
    }
    // SubProg split pc: 383 op: LESS_IFW_I (119)
    if (_k_6464 >= _3406)
    goto L12; // [383] 401
    // SubProg split pc: 387 op: STARTLINE (58)

    /** sequence.e:2161			return ret[1 .. k]*/
    // SubProg split pc: 389 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3408;
    RHS_Slice(_ret_6410, 1, _k_6464);
    // SubProg split pc: 394 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_6406
    DeRefDS(_st_6406);

// block var delim_6407
    DeRefi(_delim_6407);

// block var no_empty_6408

// block var limit_6409

// block var ret_6410
    DeRefDS(_ret_6410);

// block var start_6411

// block var pos_6412

// block var k_6464
    DeRef(_3370);
    _3370 = NOVALUE;
    _3400 = NOVALUE;
    DeRef(_3389);
    _3389 = NOVALUE;
    DeRef(_3378);
    _3378 = NOVALUE;
    return _3408;
    // SubProg split pc: 398 op: ELSE (23)
    goto L13; // [398] 408
    // SubProg split pc: 400 op: NOP1 (159)
L12: // addr: 401 pc: 400 sub: 6404 op: 159
    // SubProg split pc: 401 op: STARTLINE (58)

    /** sequence.e:2163			return ret*/
    // SubProg split pc: 403 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_6406
    DeRefDS(_st_6406);

// block var delim_6407
    DeRefi(_delim_6407);

// block var no_empty_6408

// block var limit_6409

// block var start_6411

// block var pos_6412

// block var k_6464
    DeRef(_3370);
    _3370 = NOVALUE;
    DeRef(_3408);
    _3408 = NOVALUE;
    _3400 = NOVALUE;
    DeRef(_3389);
    _3389 = NOVALUE;
    DeRef(_3378);
    _3378 = NOVALUE;
    return _ret_6410;
    // SubProg split pc: 407 op: NOP1 (159)
L13: // addr: 408 pc: 407 sub: 6404 op: 159
    // SubProg split pc: 408 op: BADRETURNF (43)
    ;
}


object _23join(object _items_6533, object _delim_6534)
{
    object _ret_6536 = NOVALUE;
// skipping _3444  name type: 0
    object _3443 = NOVALUE; // 6548 3443
    object _3442 = NOVALUE; // 6547 3442
// skipping _3441  name type: 0
    object _3440 = NOVALUE; // 6545 3440
    object _3439 = NOVALUE; // 6544 3439
    object _3438 = NOVALUE; // 6543 3438
    object _3437 = NOVALUE; // 6542 3437
// skipping _3436  name type: 0
    object _3435 = NOVALUE; // 6538 3435
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg join pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg join pc: 3 op: STARTLINE (58)

    /** sequence.e:2279		if not length(items) then return {} end if*/
    // SubProg join pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_items_6533)){
            _3435 = SEQ_PTR(_items_6533)->length;
    }
    else {
        _3435 = 1;
    }
    // SubProg join pc: 8 op: NOT_IFW (108)
    if (_3435 != 0)
    goto L1; // [8] 16
    _3435 = NOVALUE;
    // SubProg join pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: join

// block var items_6533
    DeRefDS(_items_6533);

// block var delim_6534

// block var ret_6536
    DeRef(_ret_6536);
    return _5;
    // SubProg join pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 6531 op: 159
    // SubProg join pc: 16 op: STARTLINE (58)

    /** sequence.e:2281		ret = {}*/
    // SubProg join pc: 18 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_6536);
    _ret_6536 = _5;
    // SubProg join pc: 21 op: STARTLINE (58)

    /** sequence.e:2282		for i=1 to length(items)-1 do*/
    // SubProg join pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_items_6533)){
            _3437 = SEQ_PTR(_items_6533)->length;
    }
    else {
        _3437 = 1;
    }
    // SubProg join pc: 26 op: MINUS (10)
    _3438 = _3437 - 1;
    _3437 = NOVALUE;
    // SubProg join pc: 30 op: FOR (21)
    {
        object _i_6541;
        _i_6541 = 1;
L2: // addr: 37 pc: 30 sub: 6531 op: 21
        if (_i_6541 > _3438){
            goto L3; // [30] 58
        }
        // SubProg join pc: 37 op: STARTLINE (58)

        /** sequence.e:2283			ret &= items[i] & delim*/
        // SubProg join pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_items_6533);
        _3439 = (object)*(((s1_ptr)_2)->base + _i_6541);
        // SubProg join pc: 43 op: CONCAT (15)
        if (IS_SEQUENCE(_3439) && IS_ATOM(_delim_6534)) {
            Append(&_3440, _3439, _delim_6534);
        }
        else if (IS_ATOM(_3439) && IS_SEQUENCE(_delim_6534)) {
        }
        else {
            Concat((object_ptr)&_3440, _3439, _delim_6534);
            _3439 = NOVALUE;
        }
        _3439 = NOVALUE;
        // SubProg join pc: 47 op: CONCAT (15)
        if (IS_SEQUENCE(_ret_6536) && IS_ATOM(_3440)) {
        }
        else if (IS_ATOM(_ret_6536) && IS_SEQUENCE(_3440)) {
            Ref(_ret_6536);
            Prepend(&_ret_6536, _3440, _ret_6536);
        }
        else {
            Concat((object_ptr)&_ret_6536, _ret_6536, _3440);
        }
        DeRefDS(_3440);
        _3440 = NOVALUE;
        // SubProg join pc: 51 op: STARTLINE (58)

        /** sequence.e:2284		end for*/
        // SubProg join pc: 53 op: ENDFOR_INT_UP1 (54)
        _i_6541 = _i_6541 + 1;
        goto L2; // [53] 37
L3: // addr: 58 pc: 53 sub: 6531 op: 54
        ;
    }
    // SubProg join pc: 58 op: STARTLINE (58)

    /** sequence.e:2286		ret &= items[$]*/
    // SubProg join pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_items_6533)){
            _3442 = SEQ_PTR(_items_6533)->length;
    }
    else {
        _3442 = 1;
    }
    // SubProg join pc: 63 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_items_6533);
    _3443 = (object)*(((s1_ptr)_2)->base + _3442);
    // SubProg join pc: 67 op: CONCAT (15)
    if (IS_SEQUENCE(_ret_6536) && IS_ATOM(_3443)) {
        Ref(_3443);
        Append(&_ret_6536, _ret_6536, _3443);
    }
    else if (IS_ATOM(_ret_6536) && IS_SEQUENCE(_3443)) {
        Ref(_ret_6536);
        Prepend(&_ret_6536, _3443, _ret_6536);
    }
    else {
        Concat((object_ptr)&_ret_6536, _ret_6536, _3443);
    }
    _3443 = NOVALUE;
    // SubProg join pc: 71 op: STARTLINE (58)

    /** sequence.e:2288		return ret*/
    // SubProg join pc: 73 op: RETURNF (28)

// Exiting block BLOCK: join

// block var items_6533
    DeRefDS(_items_6533);

// block var delim_6534
    DeRef(_3438);
    _3438 = NOVALUE;
    return _ret_6536;
    // SubProg join pc: 77 op: BADRETURNF (43)
    ;
}


object _23flatten(object _s_6643, object _delim_6644)
{
    object _ret_6645 = NOVALUE;
    object _x_6646 = NOVALUE;
    object _len_6647 = NOVALUE;
    object _pos_6648 = NOVALUE;
    object _temp_6666 = NOVALUE;
// skipping _3532  name type: 0
// skipping _3531  name type: 0
// skipping _3530  name type: 0
    object _3529 = NOVALUE; // 6681 3529
    object _3528 = NOVALUE; // 6680 3528
    object _3527 = NOVALUE; // 6679 3527
// skipping _3526  name type: 0
    object _3525 = NOVALUE; // 6676 3525
    object _3524 = NOVALUE; // 6675 3524
    object _3523 = NOVALUE; // 6674 3523
// skipping _3522  name type: 0
    object _3521 = NOVALUE; // 6672 3521
// skipping _3520  name type: 0
    object _3519 = NOVALUE; // 6669 3519
    object _3518 = NOVALUE; // 6668 3518
    object _3517 = NOVALUE; // 6667 3517
// skipping _3516  name type: 0
    object _3515 = NOVALUE; // 6663 3515
    object _3514 = NOVALUE; // 6662 3514
    object _3513 = NOVALUE; // 6661 3513
    object _3512 = NOVALUE; // 6660 3512
    object _3511 = NOVALUE; // 6659 3511
    object _3510 = NOVALUE; // 6658 3510
// skipping _3509  name type: 0
    object _3508 = NOVALUE; // 6656 3508
    object _3507 = NOVALUE; // 6654 3507
// skipping _3506  name type: 0
// skipping _3505  name type: 0
// skipping _3504  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flatten pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg flatten pc: 3 op: STARTLINE (58)

    /** sequence.e:2491		ret = s*/
    // SubProg flatten pc: 5 op: ASSIGN (18)
    RefDS(_s_6643);
    DeRef(_ret_6645);
    _ret_6645 = _s_6643;
    // SubProg flatten pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg flatten pc: 10 op: STARTLINE (58)

    /** sequence.e:2492		pos = 1*/
    // SubProg flatten pc: 12 op: ASSIGN_I (113)
    _pos_6648 = 1;
    // SubProg flatten pc: 15 op: STARTLINE (58)

    /** sequence.e:2493		len = length(ret)*/
    // SubProg flatten pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6645)){
            _len_6647 = SEQ_PTR(_ret_6645)->length;
    }
    else {
        _len_6647 = 1;
    }
    // SubProg flatten pc: 20 op: STARTLINE (58)

    /** sequence.e:2494		while pos <= len do*/
    // SubProg flatten pc: 22 op: NOP2 (110)
    // SubProg flatten pc: 24 op: NOPWHILE (158)
L1: // addr: 25 pc: 24 sub: 6641 op: 158
    // SubProg flatten pc: 25 op: LESSEQ_IFW_I (123)
    if (_pos_6648 > _len_6647)
    goto L2; // [25] 183
    // SubProg flatten pc: 29 op: STARTLINE (58)

    /** sequence.e:2495			x = ret[pos]*/
    // SubProg flatten pc: 31 op: RHS_SUBS (25)
    DeRef(_x_6646);
    _2 = (object)SEQ_PTR(_ret_6645);
    _x_6646 = (object)*(((s1_ptr)_2)->base + _pos_6648);
    Ref(_x_6646);
    // SubProg flatten pc: 35 op: STARTLINE (58)

    /** sequence.e:2496			if sequence(x) then*/
    // SubProg flatten pc: 37 op: IS_A_SEQUENCE (68)
    _3507 = IS_SEQUENCE(_x_6646);
    // SubProg flatten pc: 40 op: IF (20)
    if (_3507 == 0)
    {
        _3507 = NOVALUE;
        goto L3; // [40] 171
    }
    else{
        _3507 = NOVALUE;
    }
    // SubProg flatten pc: 43 op: STARTLINE (58)

    /** sequence.e:2497				if length(delim) = 0 then*/
    // SubProg flatten pc: 45 op: LENGTH (42)
    if (IS_SEQUENCE(_delim_6644)){
            _3508 = SEQ_PTR(_delim_6644)->length;
    }
    else {
        _3508 = 1;
    }
    // SubProg flatten pc: 48 op: EQUALS_IFW_I (121)
    if (_3508 != 0)
    goto L4; // [48] 89
    // SubProg flatten pc: 52 op: STARTLINE (58)

    /** sequence.e:2498					ret = ret[1..pos-1] & flatten(x) & ret[pos+1 .. $]*/
    // SubProg flatten pc: 54 op: MINUS (10)
    _3510 = _pos_6648 - 1;
    // SubProg flatten pc: 58 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3511;
    RHS_Slice(_ret_6645, 1, _3510);
    // SubProg flatten pc: 63 op: PROC (27)
    Ref(_x_6646);
    RefDS(_5);
    _3512 = _23flatten(_x_6646, _5);
    // SubProg flatten pc: 68 op: PLUS1 (93)
    _3513 = _pos_6648 + 1;
    if (_3513 > MAXINT){
        _3513 = NewDouble((eudouble)_3513);
    }
    // SubProg flatten pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6645)){
            _3514 = SEQ_PTR(_ret_6645)->length;
    }
    else {
        _3514 = 1;
    }
    // SubProg flatten pc: 75 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3515;
    RHS_Slice(_ret_6645, _3513, _3514);
    // SubProg flatten pc: 80 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3515;
        concat_list[1] = _3512;
        concat_list[2] = _3511;
        Concat_N((object_ptr)&_ret_6645, concat_list, 3);
    }
    DeRefDS(_3515);
    _3515 = NOVALUE;
    DeRef(_3512);
    _3512 = NOVALUE;
    DeRefDS(_3511);
    _3511 = NOVALUE;
    // SubProg flatten pc: 86 op: ELSE (23)
    goto L5; // [86] 163
    // SubProg flatten pc: 88 op: NOP1 (159)
L4: // addr: 89 pc: 88 sub: 6641 op: 159
    // SubProg flatten pc: 89 op: STARTLINE (58)

    /** sequence.e:2500					sequence temp = ret[1..pos-1] & flatten(x)*/
    // SubProg flatten pc: 91 op: MINUS (10)
    _3517 = _pos_6648 - 1;
    // SubProg flatten pc: 95 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3518;
    RHS_Slice(_ret_6645, 1, _3517);
    // SubProg flatten pc: 100 op: PROC (27)
    Ref(_x_6646);
    RefDS(_5);
    _3519 = _23flatten(_x_6646, _5);
    // SubProg flatten pc: 105 op: CONCAT (15)
    if (IS_SEQUENCE(_3518) && IS_ATOM(_3519)) {
        Ref(_3519);
        Append(&_temp_6666, _3518, _3519);
    }
    else if (IS_ATOM(_3518) && IS_SEQUENCE(_3519)) {
    }
    else {
        Concat((object_ptr)&_temp_6666, _3518, _3519);
        DeRefDS(_3518);
        _3518 = NOVALUE;
    }
    DeRef(_3518);
    _3518 = NOVALUE;
    DeRef(_3519);
    _3519 = NOVALUE;
    // SubProg flatten pc: 109 op: STARTLINE (58)

    /** sequence.e:2501					if pos != length(ret) then*/
    // SubProg flatten pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6645)){
            _3521 = SEQ_PTR(_ret_6645)->length;
    }
    else {
        _3521 = 1;
    }
    // SubProg flatten pc: 114 op: NOTEQ_IFW_I (122)
    if (_pos_6648 == _3521)
    goto L6; // [114] 141
    // SubProg flatten pc: 118 op: STARTLINE (58)

    /** sequence.e:2502						ret = temp &  delim & ret[pos+1 .. $]*/
    // SubProg flatten pc: 120 op: PLUS1 (93)
    _3523 = _pos_6648 + 1;
    if (_3523 > MAXINT){
        _3523 = NewDouble((eudouble)_3523);
    }
    // SubProg flatten pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6645)){
            _3524 = SEQ_PTR(_ret_6645)->length;
    }
    else {
        _3524 = 1;
    }
    // SubProg flatten pc: 127 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3525;
    RHS_Slice(_ret_6645, _3523, _3524);
    // SubProg flatten pc: 132 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _3525;
        concat_list[1] = _delim_6644;
        concat_list[2] = _temp_6666;
        Concat_N((object_ptr)&_ret_6645, concat_list, 3);
    }
    DeRefDS(_3525);
    _3525 = NOVALUE;
    // SubProg flatten pc: 138 op: ELSE (23)
    goto L7; // [138] 160
    // SubProg flatten pc: 140 op: NOP1 (159)
L6: // addr: 141 pc: 140 sub: 6641 op: 159
    // SubProg flatten pc: 141 op: STARTLINE (58)

    /** sequence.e:2504						ret = temp & ret[pos+1 .. $]*/
    // SubProg flatten pc: 143 op: PLUS1 (93)
    _3527 = _pos_6648 + 1;
    if (_3527 > MAXINT){
        _3527 = NewDouble((eudouble)_3527);
    }
    // SubProg flatten pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6645)){
            _3528 = SEQ_PTR(_ret_6645)->length;
    }
    else {
        _3528 = 1;
    }
    // SubProg flatten pc: 150 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3529;
    RHS_Slice(_ret_6645, _3527, _3528);
    // SubProg flatten pc: 155 op: CONCAT (15)
    Concat((object_ptr)&_ret_6645, _temp_6666, _3529);
    DeRefDS(_3529);
    _3529 = NOVALUE;
    // SubProg flatten pc: 159 op: NOP1 (159)
L7: // addr: 160 pc: 159 sub: 6641 op: 159
    // SubProg flatten pc: 160 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var temp_6666
    DeRef(_temp_6666);
    _temp_6666 = NOVALUE;
    // SubProg flatten pc: 162 op: NOP1 (159)
L5: // addr: 163 pc: 162 sub: 6641 op: 159
    // SubProg flatten pc: 163 op: STARTLINE (58)

    /** sequence.e:2507				len = length(ret)*/
    // SubProg flatten pc: 165 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_6645)){
            _len_6647 = SEQ_PTR(_ret_6645)->length;
    }
    else {
        _len_6647 = 1;
    }
    // SubProg flatten pc: 168 op: ELSE (23)
    goto L1; // [168] 25
    // SubProg flatten pc: 170 op: NOP1 (159)
L3: // addr: 171 pc: 170 sub: 6641 op: 159
    // SubProg flatten pc: 171 op: STARTLINE (58)

    /** sequence.e:2509				pos += 1*/
    // SubProg flatten pc: 173 op: PLUS1_I (117)
    _pos_6648 = _pos_6648 + 1;
    // SubProg flatten pc: 177 op: NOP1 (159)
    // SubProg flatten pc: 178 op: STARTLINE (58)

    /** sequence.e:2511		end while*/
    // SubProg flatten pc: 180 op: ENDWHILE (22)
    goto L1; // [180] 25
    // SubProg flatten pc: 182 op: NOP1 (159)
L2: // addr: 183 pc: 182 sub: 6641 op: 159
    // SubProg flatten pc: 183 op: STARTLINE (58)

    /** sequence.e:2513		return ret*/
    // SubProg flatten pc: 185 op: RETURNF (28)

// Exiting block BLOCK: flatten

// block var s_6643
    DeRefDS(_s_6643);

// block var delim_6644
    DeRefi(_delim_6644);

// block var x_6646
    DeRef(_x_6646);

// block var len_6647

// block var pos_6648
    DeRef(_3523);
    _3523 = NOVALUE;
    DeRef(_3517);
    _3517 = NOVALUE;
    DeRef(_3510);
    _3510 = NOVALUE;
    DeRef(_3527);
    _3527 = NOVALUE;
    DeRef(_3513);
    _3513 = NOVALUE;
    return _ret_6645;
    // SubProg flatten pc: 189 op: BADRETURNF (43)
    ;
}


object _23remove_dups(object _source_data_7013, object _proc_option_7014)
{
    object _lTo_7015 = NOVALUE;
    object _lFrom_7016 = NOVALUE;
    object _lResult_7039 = NOVALUE;
// skipping _3759  name type: 0
    object _3758 = NOVALUE; // 7047 3758
// skipping _3757  name type: 0
    object _3756 = NOVALUE; // 7045 3756
    object _3755 = NOVALUE; // 7044 3755
    object _3754 = NOVALUE; // 7042 3754
    object _3753 = NOVALUE; // 7038 3753
// skipping _3752  name type: 0
    object _3751 = NOVALUE; // 7036 3751
// skipping _3750  name type: 0
// skipping _3749  name type: 0
// skipping _3748  name type: 0
    object _3747 = NOVALUE; // 7031 3747
    object _3746 = NOVALUE; // 7030 3746
    object _3745 = NOVALUE; // 7029 3745
// skipping _3744  name type: 0
    object _3743 = NOVALUE; // 7026 3743
// skipping _3742  name type: 0
// skipping _3741  name type: 0
// skipping _3740  name type: 0
// skipping _3739  name type: 0
    object _3738 = NOVALUE; // 7018 3738
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg remove_dups pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 3 op: INTEGER_CHECK (96)
    // SubProg remove_dups pc: 5 op: STARTLINE (58)

    /** sequence.e:3111		if length(source_data) < 2 then*/
    // SubProg remove_dups pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_7013)){
            _3738 = SEQ_PTR(_source_data_7013)->length;
    }
    else {
        _3738 = 1;
    }
    // SubProg remove_dups pc: 10 op: LESS_IFW_I (119)
    if (_3738 >= 2)
    goto L1; // [10] 21
    // SubProg remove_dups pc: 14 op: STARTLINE (58)

    /** sequence.e:3112			return source_data*/
    // SubProg remove_dups pc: 16 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var proc_option_7014

// block var lTo_7015

// block var lFrom_7016

// block var lResult_7039
    DeRef(_lResult_7039);
    return _source_data_7013;
    // SubProg remove_dups pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 7011 op: 159
    // SubProg remove_dups pc: 21 op: STARTLINE (58)

    /** sequence.e:3115		if proc_option = RD_SORT then*/
    // SubProg remove_dups pc: 23 op: EQUALS_IFW_I (121)
    if (_proc_option_7014 != 3)
    goto L2; // [23] 42
    // SubProg remove_dups pc: 27 op: STARTLINE (58)

    /** sequence.e:3116			source_data = stdsort:sort(source_data)*/
    // SubProg remove_dups pc: 29 op: PROC (27)
    RefDS(_source_data_7013);
    _0 = _source_data_7013;
    _source_data_7013 = _24sort(_source_data_7013, 1);
    DeRefDS(_0);
    // SubProg remove_dups pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 36 op: STARTLINE (58)

    /** sequence.e:3117			proc_option = RD_PRESORTED*/
    // SubProg remove_dups pc: 38 op: ASSIGN_I (113)
    _proc_option_7014 = 2;
    // SubProg remove_dups pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 7011 op: 159
    // SubProg remove_dups pc: 42 op: STARTLINE (58)

    /** sequence.e:3119		if proc_option = RD_PRESORTED then*/
    // SubProg remove_dups pc: 44 op: EQUALS_IFW_I (121)
    if (_proc_option_7014 != 2)
    goto L3; // [44] 134
    // SubProg remove_dups pc: 48 op: STARTLINE (58)

    /** sequence.e:3120			lTo = 1*/
    // SubProg remove_dups pc: 50 op: ASSIGN_I (113)
    _lTo_7015 = 1;
    // SubProg remove_dups pc: 53 op: STARTLINE (58)

    /** sequence.e:3121			lFrom = 2*/
    // SubProg remove_dups pc: 55 op: ASSIGN_I (113)
    _lFrom_7016 = 2;
    // SubProg remove_dups pc: 58 op: STARTLINE (58)

    /** sequence.e:3123			while lFrom <= length(source_data) do*/
    // SubProg remove_dups pc: 60 op: NOP2 (110)
    // SubProg remove_dups pc: 62 op: NOPWHILE (158)
L4: // addr: 63 pc: 62 sub: 7011 op: 158
    // SubProg remove_dups pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_7013)){
            _3743 = SEQ_PTR(_source_data_7013)->length;
    }
    else {
        _3743 = 1;
    }
    // SubProg remove_dups pc: 66 op: LESSEQ_IFW_I (123)
    if (_lFrom_7016 > _3743)
    goto L5; // [66] 122
    // SubProg remove_dups pc: 70 op: STARTLINE (58)

    /** sequence.e:3124				if not equal(source_data[lFrom], source_data[lTo]) then*/
    // SubProg remove_dups pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_7013);
    _3745 = (object)*(((s1_ptr)_2)->base + _lFrom_7016);
    // SubProg remove_dups pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_7013);
    _3746 = (object)*(((s1_ptr)_2)->base + _lTo_7015);
    // SubProg remove_dups pc: 80 op: EQUAL (153)
    if (_3745 == _3746)
    _3747 = 1;
    else if (IS_ATOM_INT(_3745) && IS_ATOM_INT(_3746))
    _3747 = 0;
    else
    _3747 = (compare(_3745, _3746) == 0);
    _3745 = NOVALUE;
    _3746 = NOVALUE;
    // SubProg remove_dups pc: 84 op: NOT_IFW (108)
    if (_3747 != 0)
    goto L6; // [84] 111
    _3747 = NOVALUE;
    // SubProg remove_dups pc: 87 op: STARTLINE (58)

    /** sequence.e:3125					lTo += 1*/
    // SubProg remove_dups pc: 89 op: PLUS1_I (117)
    _lTo_7015 = _lTo_7015 + 1;
    // SubProg remove_dups pc: 93 op: STARTLINE (58)

    /** sequence.e:3126					if lTo != lFrom then*/
    // SubProg remove_dups pc: 95 op: NOTEQ_IFW_I (122)
    if (_lTo_7015 == _lFrom_7016)
    goto L7; // [95] 110
    // SubProg remove_dups pc: 99 op: STARTLINE (58)

    /** sequence.e:3127						source_data[lTo] = source_data[lFrom]*/
    // SubProg remove_dups pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_7013);
    _3751 = (object)*(((s1_ptr)_2)->base + _lFrom_7016);
    // SubProg remove_dups pc: 105 op: ASSIGN_SUBS (16)
    Ref(_3751);
    _2 = (object)SEQ_PTR(_source_data_7013);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _source_data_7013 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _lTo_7015);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3751;
    if( _1 != _3751 ){
        DeRef(_1);
    }
    _3751 = NOVALUE;
    // SubProg remove_dups pc: 109 op: NOP1 (159)
L7: // addr: 110 pc: 109 sub: 7011 op: 159
    // SubProg remove_dups pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 7011 op: 159
    // SubProg remove_dups pc: 111 op: STARTLINE (58)

    /** sequence.e:3130				lFrom += 1*/
    // SubProg remove_dups pc: 113 op: PLUS1_I (117)
    _lFrom_7016 = _lFrom_7016 + 1;
    // SubProg remove_dups pc: 117 op: STARTLINE (58)

    /** sequence.e:3131			end while*/
    // SubProg remove_dups pc: 119 op: ENDWHILE (22)
    goto L4; // [119] 63
    // SubProg remove_dups pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 7011 op: 159
    // SubProg remove_dups pc: 122 op: STARTLINE (58)

    /** sequence.e:3132			return source_data[1 .. lTo]*/
    // SubProg remove_dups pc: 124 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3753;
    RHS_Slice(_source_data_7013, 1, _lTo_7015);
    // SubProg remove_dups pc: 129 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var source_data_7013
    DeRefDS(_source_data_7013);

// block var proc_option_7014

// block var lTo_7015

// block var lFrom_7016

// block var lResult_7039
    DeRef(_lResult_7039);
    return _3753;
    // SubProg remove_dups pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 7011 op: 159
    // SubProg remove_dups pc: 134 op: STARTLINE (58)

    /** sequence.e:3135		sequence lResult*/
    // SubProg remove_dups pc: 136 op: STARTLINE (58)

    /** sequence.e:3136		lResult = {}*/
    // SubProg remove_dups pc: 138 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lResult_7039);
    _lResult_7039 = _5;
    // SubProg remove_dups pc: 141 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 143 op: STARTLINE (58)

    /** sequence.e:3137		for i = 1 to length(source_data) do*/
    // SubProg remove_dups pc: 145 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_7013)){
            _3754 = SEQ_PTR(_source_data_7013)->length;
    }
    else {
        _3754 = 1;
    }
    // SubProg remove_dups pc: 148 op: FOR_I (125)
    {
        object _i_7041;
        _i_7041 = 1;
L8: // addr: 155 pc: 148 sub: 7011 op: 125
        if (_i_7041 > _3754){
            goto L9; // [148] 187
        }
        // SubProg remove_dups pc: 155 op: STARTLINE (58)

        /** sequence.e:3138			if not find(source_data[i], lResult) then*/
        // SubProg remove_dups pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_source_data_7013);
        _3755 = (object)*(((s1_ptr)_2)->base + _i_7041);
        // SubProg remove_dups pc: 161 op: FIND_FROM (176)
        _3756 = find_from(_3755, _lResult_7039, 1);
        _3755 = NOVALUE;
        // SubProg remove_dups pc: 166 op: NOT_IFW (108)
        if (_3756 != 0)
        goto LA; // [166] 180
        _3756 = NOVALUE;
        // SubProg remove_dups pc: 169 op: STARTLINE (58)

        /** sequence.e:3139				lResult = append(lResult, source_data[i])*/
        // SubProg remove_dups pc: 171 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_source_data_7013);
        _3758 = (object)*(((s1_ptr)_2)->base + _i_7041);
        // SubProg remove_dups pc: 175 op: APPEND (35)
        Ref(_3758);
        Append(&_lResult_7039, _lResult_7039, _3758);
        _3758 = NOVALUE;
        // SubProg remove_dups pc: 179 op: NOP1 (159)
LA: // addr: 180 pc: 179 sub: 7011 op: 159
        // SubProg remove_dups pc: 180 op: STARTLINE (58)

        /** sequence.e:3141		end for*/
        // SubProg remove_dups pc: 182 op: ENDFOR_INT_UP1 (54)
        _i_7041 = _i_7041 + 1;
        goto L8; // [182] 155
L9: // addr: 187 pc: 182 sub: 7011 op: 54
        ;
    }
    // SubProg remove_dups pc: 187 op: STARTLINE (58)

    /** sequence.e:3142		return lResult*/
    // SubProg remove_dups pc: 189 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var source_data_7013
    DeRefDS(_source_data_7013);

// block var proc_option_7014

// block var lTo_7015

// block var lFrom_7016
    DeRef(_3753);
    _3753 = NOVALUE;
    return _lResult_7039;
    // SubProg remove_dups pc: 193 op: BADRETURNF (43)
    ;
}



// 0x114F1361
