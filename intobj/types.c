// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _6char_test(object _test_data_407, object _char_set_408)
{
    object _lChr_409 = NOVALUE;
// skipping _145  name type: 0
    object _144 = NOVALUE; // 462 144
    object _143 = NOVALUE; // 459 143
    object _142 = NOVALUE; // 458 142
    object _141 = NOVALUE; // 457 141
    object _140 = NOVALUE; // 456 140
    object _139 = NOVALUE; // 455 139
    object _138 = NOVALUE; // 454 138
    object _137 = NOVALUE; // 453 137
    object _136 = NOVALUE; // 451 136
    object _135 = NOVALUE; // 448 135
    object _134 = NOVALUE; // 447 134
// skipping _133  name type: 0
// skipping _132  name type: 0
    object _131 = NOVALUE; // 443 131
    object _130 = NOVALUE; // 442 130
    object _129 = NOVALUE; // 440 129
    object _128 = NOVALUE; // 439 128
    object _126 = NOVALUE; // 436 126
// skipping _125  name type: 0
    object _124 = NOVALUE; // 432 124
    object _123 = NOVALUE; // 430 123
    object _122 = NOVALUE; // 428 122
    object _121 = NOVALUE; // 427 121
    object _120 = NOVALUE; // 425 120
    object _119 = NOVALUE; // 424 119
    object _118 = NOVALUE; // 423 118
    object _117 = NOVALUE; // 422 117
    object _116 = NOVALUE; // 421 116
    object _115 = NOVALUE; // 420 115
    object _114 = NOVALUE; // 419 114
    object _113 = NOVALUE; // 417 113
    object _112 = NOVALUE; // 414 112
    object _111 = NOVALUE; // 413 111
    object _110 = NOVALUE; // 411 110
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg char_test pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg char_test pc: 3 op: STARTLINE (58)

    /** types.e:194		if integer(test_data) then*/
    // SubProg char_test pc: 5 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_test_data_407))
    _110 = 1;
    else if (IS_ATOM_DBL(_test_data_407))
    _110 = IS_ATOM_INT(DoubleToInt(_test_data_407));
    else
    _110 = 0;
    // SubProg char_test pc: 8 op: IF (20)
    if (_110 == 0)
    {
        _110 = NOVALUE;
        goto L1; // [8] 115
    }
    else{
        _110 = NOVALUE;
    }
    // SubProg char_test pc: 11 op: STARTLINE (58)

    /** types.e:195			if sequence(char_set[1]) then*/
    // SubProg char_test pc: 13 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_char_set_408);
    _111 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg char_test pc: 17 op: IS_A_SEQUENCE (68)
    _112 = IS_SEQUENCE(_111);
    _111 = NOVALUE;
    // SubProg char_test pc: 20 op: IF (20)
    if (_112 == 0)
    {
        _112 = NOVALUE;
        goto L2; // [20] 96
    }
    else{
        _112 = NOVALUE;
    }
    // SubProg char_test pc: 23 op: STARTLINE (58)

    /** types.e:196				for j = 1 to length(char_set) do*/
    // SubProg char_test pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_char_set_408)){
            _113 = SEQ_PTR(_char_set_408)->length;
    }
    else {
        _113 = 1;
    }
    // SubProg char_test pc: 28 op: FOR_I (125)
    {
        object _j_416;
        _j_416 = 1;
L3: // addr: 35 pc: 28 sub: 405 op: 125
        if (_j_416 > _113){
            goto L4; // [28] 85
        }
        // SubProg char_test pc: 35 op: STARTLINE (58)

        /** types.e:197					if test_data >= char_set[j][1] and test_data <= char_set[j][2] then */
        // SubProg char_test pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_char_set_408);
        _114 = (object)*(((s1_ptr)_2)->base + _j_416);
        // SubProg char_test pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_114);
        _115 = (object)*(((s1_ptr)_2)->base + 1);
        _114 = NOVALUE;
        // SubProg char_test pc: 45 op: GREATEREQ (2)
        if (IS_ATOM_INT(_test_data_407) && IS_ATOM_INT(_115)) {
            _116 = (_test_data_407 >= _115);
        }
        else {
            _116 = binary_op(GREATEREQ, _test_data_407, _115);
        }
        _115 = NOVALUE;
        // SubProg char_test pc: 49 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_116)) {
            if (_116 == 0) {
                goto L5; // [49] 78
            }
        }
        else {
            if (DBL_PTR(_116)->dbl == 0.0) {
                goto L5; // [49] 78
            }
        }
        // SubProg char_test pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_char_set_408);
        _118 = (object)*(((s1_ptr)_2)->base + _j_416);
        // SubProg char_test pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_118);
        _119 = (object)*(((s1_ptr)_2)->base + 2);
        _118 = NOVALUE;
        // SubProg char_test pc: 61 op: LESSEQ (5)
        if (IS_ATOM_INT(_test_data_407) && IS_ATOM_INT(_119)) {
            _120 = (_test_data_407 <= _119);
        }
        else {
            _120 = binary_op(LESSEQ, _test_data_407, _119);
        }
        _119 = NOVALUE;
        // SubProg char_test pc: 65 op: NOP1 (159)
        // SubProg char_test pc: 66 op: IF (20)
        if (_120 == 0) {
            DeRef(_120);
            _120 = NOVALUE;
            goto L5; // [66] 78
        }
        else {
            if (!IS_ATOM_INT(_120) && DBL_PTR(_120)->dbl == 0.0){
                DeRef(_120);
                _120 = NOVALUE;
                goto L5; // [66] 78
            }
            DeRef(_120);
            _120 = NOVALUE;
        }
        DeRef(_120);
        _120 = NOVALUE;
        // SubProg char_test pc: 69 op: STARTLINE (58)

        /** types.e:198						return TRUE */
        // SubProg char_test pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 73 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
        DeRef(_test_data_407);

// block var char_set_408
        DeRefDS(_char_set_408);

// block var lChr_409
        DeRef(_116);
        _116 = NOVALUE;
        return _6TRUE_365;
        // SubProg char_test pc: 77 op: NOP1 (159)
L5: // addr: 78 pc: 77 sub: 405 op: 159
        // SubProg char_test pc: 78 op: STARTLINE (58)

        /** types.e:200				end for*/
        // SubProg char_test pc: 80 op: ENDFOR_INT_UP1 (54)
        _j_416 = _j_416 + 1;
        goto L3; // [80] 35
L4: // addr: 85 pc: 80 sub: 405 op: 54
        ;
    }
    // SubProg char_test pc: 85 op: STARTLINE (58)

    /** types.e:201				return FALSE*/
    // SubProg char_test pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 89 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
    DeRef(_test_data_407);

// block var char_set_408
    DeRefDS(_char_set_408);

// block var lChr_409
    DeRef(_116);
    _116 = NOVALUE;
    return _6FALSE_363;
    // SubProg char_test pc: 93 op: ELSE (23)
    goto L6; // [93] 328
    // SubProg char_test pc: 95 op: NOP1 (159)
L2: // addr: 96 pc: 95 sub: 405 op: 159
    // SubProg char_test pc: 96 op: STARTLINE (58)

    /** types.e:203				return find(test_data, char_set) > 0*/
    // SubProg char_test pc: 98 op: FIND_FROM (176)
    _121 = find_from(_test_data_407, _char_set_408, 1);
    // SubProg char_test pc: 103 op: GREATER (6)
    _122 = (_121 > 0);
    _121 = NOVALUE;
    // SubProg char_test pc: 107 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
    DeRef(_test_data_407);

// block var char_set_408
    DeRefDS(_char_set_408);

// block var lChr_409
    DeRef(_116);
    _116 = NOVALUE;
    return _122;
    // SubProg char_test pc: 111 op: NOP1 (159)
    // SubProg char_test pc: 112 op: ELSE (23)
    goto L6; // [112] 328
    // SubProg char_test pc: 114 op: NOP1 (159)
L1: // addr: 115 pc: 114 sub: 405 op: 159
    // SubProg char_test pc: 115 op: STARTLINE (58)

    /** types.e:205		elsif sequence(test_data) then*/
    // SubProg char_test pc: 117 op: IS_A_SEQUENCE (68)
    _123 = IS_SEQUENCE(_test_data_407);
    // SubProg char_test pc: 120 op: IF (20)
    if (_123 == 0)
    {
        _123 = NOVALUE;
        goto L7; // [120] 319
    }
    else{
        _123 = NOVALUE;
    }
    // SubProg char_test pc: 123 op: STARTLINE (58)

    /** types.e:206			if length(test_data) = 0 then */
    // SubProg char_test pc: 125 op: LENGTH (42)
    if (IS_SEQUENCE(_test_data_407)){
            _124 = SEQ_PTR(_test_data_407)->length;
    }
    else {
        _124 = 1;
    }
    // SubProg char_test pc: 128 op: EQUALS_IFW_I (121)
    if (_124 != 0)
    goto L8; // [128] 141
    // SubProg char_test pc: 132 op: STARTLINE (58)

    /** types.e:207				return FALSE */
    // SubProg char_test pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 136 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
    DeRef(_test_data_407);

// block var char_set_408
    DeRefDS(_char_set_408);

// block var lChr_409
    DeRef(_116);
    _116 = NOVALUE;
    DeRef(_122);
    _122 = NOVALUE;
    return _6FALSE_363;
    // SubProg char_test pc: 140 op: NOP1 (159)
L8: // addr: 141 pc: 140 sub: 405 op: 159
    // SubProg char_test pc: 141 op: STARTLINE (58)

    /** types.e:209			for i = 1 to length(test_data) label "NXTCHR" do*/
    // SubProg char_test pc: 143 op: LENGTH (42)
    if (IS_SEQUENCE(_test_data_407)){
            _126 = SEQ_PTR(_test_data_407)->length;
    }
    else {
        _126 = 1;
    }
    // SubProg char_test pc: 146 op: FOR_I (125)
    {
        object _i_435;
        _i_435 = 1;
L9: // addr: 153 pc: 146 sub: 405 op: 125
        if (_i_435 > _126){
            goto LA; // [146] 308
        }
        // SubProg char_test pc: 153 op: STARTLINE (58)

        /** types.e:210				if sequence(test_data[i]) then */
        // SubProg char_test pc: 155 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_test_data_407);
        _128 = (object)*(((s1_ptr)_2)->base + _i_435);
        // SubProg char_test pc: 159 op: IS_A_SEQUENCE (68)
        _129 = IS_SEQUENCE(_128);
        _128 = NOVALUE;
        // SubProg char_test pc: 162 op: IF (20)
        if (_129 == 0)
        {
            _129 = NOVALUE;
            goto LB; // [162] 174
        }
        else{
            _129 = NOVALUE;
        }
        // SubProg char_test pc: 165 op: STARTLINE (58)

        /** types.e:211					return FALSE*/
        // SubProg char_test pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 169 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
        DeRef(_test_data_407);

// block var char_set_408
        DeRefDS(_char_set_408);

// block var lChr_409
        DeRef(_116);
        _116 = NOVALUE;
        DeRef(_122);
        _122 = NOVALUE;
        return _6FALSE_363;
        // SubProg char_test pc: 173 op: NOP1 (159)
LB: // addr: 174 pc: 173 sub: 405 op: 159
        // SubProg char_test pc: 174 op: STARTLINE (58)

        /** types.e:213				if not integer(test_data[i]) then */
        // SubProg char_test pc: 176 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_test_data_407);
        _130 = (object)*(((s1_ptr)_2)->base + _i_435);
        // SubProg char_test pc: 180 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_130))
        _131 = 1;
        else if (IS_ATOM_DBL(_130))
        _131 = IS_ATOM_INT(DoubleToInt(_130));
        else
        _131 = 0;
        _130 = NOVALUE;
        // SubProg char_test pc: 183 op: NOT_IFW (108)
        if (_131 != 0)
        goto LC; // [183] 195
        _131 = NOVALUE;
        // SubProg char_test pc: 186 op: STARTLINE (58)

        /** types.e:214					return FALSE*/
        // SubProg char_test pc: 188 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 190 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
        DeRef(_test_data_407);

// block var char_set_408
        DeRefDS(_char_set_408);

// block var lChr_409
        DeRef(_116);
        _116 = NOVALUE;
        DeRef(_122);
        _122 = NOVALUE;
        return _6FALSE_363;
        // SubProg char_test pc: 194 op: NOP1 (159)
LC: // addr: 195 pc: 194 sub: 405 op: 159
        // SubProg char_test pc: 195 op: STARTLINE (58)

        /** types.e:216				lChr = test_data[i]*/
        // SubProg char_test pc: 197 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_test_data_407);
        _lChr_409 = (object)*(((s1_ptr)_2)->base + _i_435);
        if (!IS_ATOM_INT(_lChr_409)){
            _lChr_409 = (object)DBL_PTR(_lChr_409)->dbl;
        }
        // SubProg char_test pc: 203 op: STARTLINE (58)

        /** types.e:217				if sequence(char_set[1]) then*/
        // SubProg char_test pc: 205 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_char_set_408);
        _134 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg char_test pc: 209 op: IS_A_SEQUENCE (68)
        _135 = IS_SEQUENCE(_134);
        _134 = NOVALUE;
        // SubProg char_test pc: 212 op: IF (20)
        if (_135 == 0)
        {
            _135 = NOVALUE;
            goto LD; // [212] 276
        }
        else{
            _135 = NOVALUE;
        }
        // SubProg char_test pc: 215 op: STARTLINE (58)

        /** types.e:218					for j = 1 to length(char_set) do*/
        // SubProg char_test pc: 217 op: LENGTH (42)
        if (IS_SEQUENCE(_char_set_408)){
                _136 = SEQ_PTR(_char_set_408)->length;
        }
        else {
            _136 = 1;
        }
        // SubProg char_test pc: 220 op: FOR_I (125)
        {
            object _j_450;
            _j_450 = 1;
LE: // addr: 227 pc: 220 sub: 405 op: 125
            if (_j_450 > _136){
                goto LF; // [220] 273
            }
            // SubProg char_test pc: 227 op: STARTLINE (58)

            /** types.e:219						if lChr >= char_set[j][1] and lChr <= char_set[j][2] then*/
            // SubProg char_test pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_char_set_408);
            _137 = (object)*(((s1_ptr)_2)->base + _j_450);
            // SubProg char_test pc: 233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_137);
            _138 = (object)*(((s1_ptr)_2)->base + 1);
            _137 = NOVALUE;
            // SubProg char_test pc: 237 op: GREATEREQ (2)
            if (IS_ATOM_INT(_138)) {
                _139 = (_lChr_409 >= _138);
            }
            else {
                _139 = binary_op(GREATEREQ, _lChr_409, _138);
            }
            _138 = NOVALUE;
            // SubProg char_test pc: 241 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_139)) {
                if (_139 == 0) {
                    goto L10; // [241] 266
                }
            }
            else {
                if (DBL_PTR(_139)->dbl == 0.0) {
                    goto L10; // [241] 266
                }
            }
            // SubProg char_test pc: 245 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_char_set_408);
            _141 = (object)*(((s1_ptr)_2)->base + _j_450);
            // SubProg char_test pc: 249 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_141);
            _142 = (object)*(((s1_ptr)_2)->base + 2);
            _141 = NOVALUE;
            // SubProg char_test pc: 253 op: LESSEQ (5)
            if (IS_ATOM_INT(_142)) {
                _143 = (_lChr_409 <= _142);
            }
            else {
                _143 = binary_op(LESSEQ, _lChr_409, _142);
            }
            _142 = NOVALUE;
            // SubProg char_test pc: 257 op: NOP1 (159)
            // SubProg char_test pc: 258 op: IF (20)
            if (_143 == 0) {
                DeRef(_143);
                _143 = NOVALUE;
                goto L10; // [258] 266
            }
            else {
                if (!IS_ATOM_INT(_143) && DBL_PTR(_143)->dbl == 0.0){
                    DeRef(_143);
                    _143 = NOVALUE;
                    goto L10; // [258] 266
                }
                DeRef(_143);
                _143 = NOVALUE;
            }
            DeRef(_143);
            _143 = NOVALUE;
            // SubProg char_test pc: 261 op: STARTLINE (58)

            /** types.e:220							continue "NXTCHR" */
            // SubProg char_test pc: 263 op: ELSE (23)
            goto L11; // [263] 303
            // SubProg char_test pc: 265 op: NOP1 (159)
L10: // addr: 266 pc: 265 sub: 405 op: 159
            // SubProg char_test pc: 266 op: STARTLINE (58)

            /** types.e:222					end for*/
            // SubProg char_test pc: 268 op: ENDFOR_INT_UP1 (54)
            _j_450 = _j_450 + 1;
            goto LE; // [268] 227
LF: // addr: 273 pc: 268 sub: 405 op: 54
            ;
        }
        // SubProg char_test pc: 273 op: ELSE (23)
        goto L12; // [273] 293
        // SubProg char_test pc: 275 op: NOP1 (159)
LD: // addr: 276 pc: 275 sub: 405 op: 159
        // SubProg char_test pc: 276 op: STARTLINE (58)

        /** types.e:224					if find(lChr, char_set) > 0 then*/
        // SubProg char_test pc: 278 op: FIND_FROM (176)
        _144 = find_from(_lChr_409, _char_set_408, 1);
        // SubProg char_test pc: 283 op: GREATER_IFW_I (124)
        if (_144 <= 0)
        goto L13; // [283] 292
        // SubProg char_test pc: 287 op: STARTLINE (58)

        /** types.e:225						continue "NXTCHR"*/
        // SubProg char_test pc: 289 op: ELSE (23)
        goto L11; // [289] 303
        // SubProg char_test pc: 291 op: NOP1 (159)
L13: // addr: 292 pc: 291 sub: 405 op: 159
        // SubProg char_test pc: 292 op: NOP1 (159)
L12: // addr: 293 pc: 292 sub: 405 op: 159
        // SubProg char_test pc: 293 op: STARTLINE (58)

        /** types.e:228				return FALSE*/
        // SubProg char_test pc: 295 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 297 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
        DeRef(_test_data_407);

// block var char_set_408
        DeRefDS(_char_set_408);

// block var lChr_409
        DeRef(_116);
        _116 = NOVALUE;
        DeRef(_139);
        _139 = NOVALUE;
        DeRef(_122);
        _122 = NOVALUE;
        return _6FALSE_363;
        // SubProg char_test pc: 301 op: STARTLINE (58)

        /** types.e:229			end for*/
        // SubProg char_test pc: 303 op: ENDFOR_INT_UP1 (54)
L11: // addr: 303 pc: 303 sub: 405 op: 54
        _i_435 = _i_435 + 1;
        goto L9; // [303] 153
LA: // addr: 308 pc: 303 sub: 405 op: 54
        ;
    }
    // SubProg char_test pc: 308 op: STARTLINE (58)

    /** types.e:230			return TRUE*/
    // SubProg char_test pc: 310 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 312 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
    DeRef(_test_data_407);

// block var char_set_408
    DeRefDS(_char_set_408);

// block var lChr_409
    DeRef(_116);
    _116 = NOVALUE;
    DeRef(_139);
    _139 = NOVALUE;
    DeRef(_122);
    _122 = NOVALUE;
    return _6TRUE_365;
    // SubProg char_test pc: 316 op: ELSE (23)
    goto L6; // [316] 328
    // SubProg char_test pc: 318 op: NOP1 (159)
L7: // addr: 319 pc: 318 sub: 405 op: 159
    // SubProg char_test pc: 319 op: STARTLINE (58)

    /** types.e:232			return FALSE*/
    // SubProg char_test pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 323 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_407
    DeRef(_test_data_407);

// block var char_set_408
    DeRefDS(_char_set_408);

// block var lChr_409
    DeRef(_116);
    _116 = NOVALUE;
    DeRef(_139);
    _139 = NOVALUE;
    DeRef(_122);
    _122 = NOVALUE;
    return _6FALSE_363;
    // SubProg char_test pc: 327 op: NOP1 (159)
L6: // addr: 328 pc: 327 sub: 405 op: 159
    // SubProg char_test pc: 328 op: BADRETURNF (43)
    ;
}


void _6set_default_charsets()
{
    object _210 = NOVALUE; // 532 210
    object _208 = NOVALUE; // 530 208
    object _207 = NOVALUE; // 529 207
    object _205 = NOVALUE; // 527 205
    object _202 = NOVALUE; // 524 202
    object _201 = NOVALUE; // 523 201
    object _200 = NOVALUE; // 522 200
    object _199 = NOVALUE; // 521 199
    object _196 = NOVALUE; // 518 196
    object _194 = NOVALUE; // 516 194
    object _184 = NOVALUE; // 506 184
    object _177 = NOVALUE; // 499 177
    object _174 = NOVALUE; // 496 174
    object _167 = NOVALUE; // 489 167
    object _163 = NOVALUE; // 485 163
    object _162 = NOVALUE; // 484 162
    object _161 = NOVALUE; // 483 161
    object _158 = NOVALUE; // 480 158
    object _155 = NOVALUE; // 477 155
// skipping _148  name type: 0
    object _147 = NOVALUE; // 469 147
    object _146 = NOVALUE; // 468 146
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_default_charsets pc: 1 op: STARTLINE (58)

    /** types.e:247		Defined_Sets = repeat(0, CS_LAST - CS_FIRST - 1)*/
    // SubProg set_default_charsets pc: 3 op: MINUS (10)
    _146 = 20;
    // SubProg set_default_charsets pc: 7 op: MINUS (10)
    _147 = 19;
    _146 = NOVALUE;
    // SubProg set_default_charsets pc: 11 op: REPEAT (32)
    DeRef(_6Defined_Sets_465);
    _6Defined_Sets_465 = Repeat(0, 19);
    _147 = NOVALUE;
    // SubProg set_default_charsets pc: 15 op: STARTLINE (58)

    /** types.e:248		Defined_Sets[CS_Alphabetic	] = {{'a', 'z'}, {'A', 'Z'}}*/
    // SubProg set_default_charsets pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 19 op: RIGHT_BRACE_2 (85)
    RefDS(_154);
    RefDS(_151);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _151;
    ((intptr_t *)_2)[2] = _154;
    _155 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 23 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 12);
    *(intptr_t *)_2 = _155;
    if( _1 != _155 ){
    }
    _155 = NOVALUE;
    // SubProg set_default_charsets pc: 27 op: STARTLINE (58)

    /** types.e:249		Defined_Sets[CS_Alphanumeric] = {{'0', '9'}, {'a', 'z'}, {'A', 'Z'}}*/
    // SubProg set_default_charsets pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 31 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_157);
    ((intptr_t*)_2)[1] = _157;
    RefDS(_151);
    ((intptr_t*)_2)[2] = _151;
    RefDS(_154);
    ((intptr_t*)_2)[3] = _154;
    _158 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 37 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _158;
    if( _1 != _158 ){
        DeRef(_1);
    }
    _158 = NOVALUE;
    // SubProg set_default_charsets pc: 41 op: STARTLINE (58)

    /** types.e:250		Defined_Sets[CS_Identifier]   = {{'0', '9'}, {'a', 'z'}, {'A', 'Z'}, {'_', '_'}}*/
    // SubProg set_default_charsets pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 45 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_157);
    ((intptr_t*)_2)[1] = _157;
    RefDS(_151);
    ((intptr_t*)_2)[2] = _151;
    RefDS(_154);
    ((intptr_t*)_2)[3] = _154;
    RefDS(_160);
    ((intptr_t*)_2)[4] = _160;
    _161 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 52 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _161;
    if( _1 != _161 ){
        DeRef(_1);
    }
    _161 = NOVALUE;
    // SubProg set_default_charsets pc: 56 op: STARTLINE (58)

    /** types.e:251		Defined_Sets[CS_Uppercase 	] = {{'A', 'Z'}}*/
    // SubProg set_default_charsets pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 60 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_154);
    ((intptr_t*)_2)[1] = _154;
    _162 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 64 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _162;
    if( _1 != _162 ){
        DeRef(_1);
    }
    _162 = NOVALUE;
    // SubProg set_default_charsets pc: 68 op: STARTLINE (58)

    /** types.e:252		Defined_Sets[CS_Lowercase 	] = {{'a', 'z'}}*/
    // SubProg set_default_charsets pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 72 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_151);
    ((intptr_t*)_2)[1] = _151;
    _163 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 76 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _163;
    if( _1 != _163 ){
        DeRef(_1);
    }
    _163 = NOVALUE;
    // SubProg set_default_charsets pc: 80 op: STARTLINE (58)

    /** types.e:253		Defined_Sets[CS_Printable 	] = {{' ', '~'}}*/
    // SubProg set_default_charsets pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_166);
    ((intptr_t*)_2)[1] = _166;
    _167 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 88 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _167;
    if( _1 != _167 ){
        DeRef(_1);
    }
    _167 = NOVALUE;
    // SubProg set_default_charsets pc: 92 op: STARTLINE (58)

    /** types.e:254		Defined_Sets[CS_Displayable ] = {{' ', '~'}, "  ", "\t\t", "\n\n", "\r\r", {8,8}, {7,7} }*/
    // SubProg set_default_charsets pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 96 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_166);
    ((intptr_t*)_2)[1] = _166;
    RefDS(_168);
    ((intptr_t*)_2)[2] = _168;
    RefDS(_169);
    ((intptr_t*)_2)[3] = _169;
    RefDS(_170);
    ((intptr_t*)_2)[4] = _170;
    RefDS(_171);
    ((intptr_t*)_2)[5] = _171;
    RefDS(_172);
    ((intptr_t*)_2)[6] = _172;
    RefDS(_173);
    ((intptr_t*)_2)[7] = _173;
    _174 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 106 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _174;
    if( _1 != _174 ){
        DeRef(_1);
    }
    _174 = NOVALUE;
    // SubProg set_default_charsets pc: 110 op: STARTLINE (58)

    /** types.e:255		Defined_Sets[CS_Whitespace 	] = " \t\n\r" & 11 & 160*/
    // SubProg set_default_charsets pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 114 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 160;
        concat_list[1] = 11;
        concat_list[2] = _175;
        Concat_N((object_ptr)&_177, concat_list, 3);
    }
    // SubProg set_default_charsets pc: 120 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _177;
    if( _1 != _177 ){
        DeRef(_1);
    }
    _177 = NOVALUE;
    // SubProg set_default_charsets pc: 124 op: STARTLINE (58)

    /** types.e:256		Defined_Sets[CS_Consonant 	] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"*/
    // SubProg set_default_charsets pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 128 op: ASSIGN_SUBS (16)
    RefDS(_178);
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _178;
    DeRef(_1);
    // SubProg set_default_charsets pc: 132 op: STARTLINE (58)

    /** types.e:257		Defined_Sets[CS_Vowel 		] = "aeiouAEIOU"*/
    // SubProg set_default_charsets pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 136 op: ASSIGN_SUBS (16)
    RefDS(_179);
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _179;
    DeRef(_1);
    // SubProg set_default_charsets pc: 140 op: STARTLINE (58)

    /** types.e:258		Defined_Sets[CS_Hexadecimal ] = {{'0', '9'}, {'A', 'F'},{'a', 'f'}}*/
    // SubProg set_default_charsets pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 144 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_157);
    ((intptr_t*)_2)[1] = _157;
    RefDS(_181);
    ((intptr_t*)_2)[2] = _181;
    RefDS(_183);
    ((intptr_t*)_2)[3] = _183;
    _184 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 150 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _184;
    if( _1 != _184 ){
        DeRef(_1);
    }
    _184 = NOVALUE;
    // SubProg set_default_charsets pc: 154 op: STARTLINE (58)

    /** types.e:259		Defined_Sets[CS_Punctuation ] = {{' ', '/'}, {':', '?'}, {'[', '`'}, {'{', '~'}}*/
    // SubProg set_default_charsets pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 158 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_186);
    ((intptr_t*)_2)[1] = _186;
    RefDS(_188);
    ((intptr_t*)_2)[2] = _188;
    RefDS(_191);
    ((intptr_t*)_2)[3] = _191;
    RefDS(_193);
    ((intptr_t*)_2)[4] = _193;
    _194 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 165 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _194;
    if( _1 != _194 ){
        DeRef(_1);
    }
    _194 = NOVALUE;
    // SubProg set_default_charsets pc: 169 op: STARTLINE (58)

    /** types.e:260		Defined_Sets[CS_Control 	] = {{0, 31}, {127, 127}}*/
    // SubProg set_default_charsets pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 173 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 31;
    _196 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 177 op: RIGHT_BRACE_2 (85)
    RefDS(_198);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _196;
    ((intptr_t *)_2)[2] = _198;
    _199 = MAKE_SEQ(_1);
    _196 = NOVALUE;
    // SubProg set_default_charsets pc: 181 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _199;
    if( _1 != _199 ){
        DeRef(_1);
    }
    _199 = NOVALUE;
    // SubProg set_default_charsets pc: 185 op: STARTLINE (58)

    /** types.e:261		Defined_Sets[CS_ASCII 		] = {{0, 127}}*/
    // SubProg set_default_charsets pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 189 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 127;
    _200 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 193 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _200;
    _201 = MAKE_SEQ(_1);
    _200 = NOVALUE;
    // SubProg set_default_charsets pc: 197 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 13);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _201;
    if( _1 != _201 ){
        DeRef(_1);
    }
    _201 = NOVALUE;
    // SubProg set_default_charsets pc: 201 op: STARTLINE (58)

    /** types.e:262		Defined_Sets[CS_Digit 		] = {{'0', '9'}}*/
    // SubProg set_default_charsets pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 205 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_157);
    ((intptr_t*)_2)[1] = _157;
    _202 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 209 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _202;
    if( _1 != _202 ){
        DeRef(_1);
    }
    _202 = NOVALUE;
    // SubProg set_default_charsets pc: 213 op: STARTLINE (58)

    /** types.e:263		Defined_Sets[CS_Graphic 	] = {{'!', '~'}}*/
    // SubProg set_default_charsets pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 217 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_204);
    ((intptr_t*)_2)[1] = _204;
    _205 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 221 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _205;
    if( _1 != _205 ){
        DeRef(_1);
    }
    _205 = NOVALUE;
    // SubProg set_default_charsets pc: 225 op: STARTLINE (58)

    /** types.e:264		Defined_Sets[CS_Bytes	 	] = {{0, 255}}*/
    // SubProg set_default_charsets pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 229 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 255;
    _207 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 233 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _207;
    _208 = MAKE_SEQ(_1);
    _207 = NOVALUE;
    // SubProg set_default_charsets pc: 237 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 17);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _208;
    if( _1 != _208 ){
        DeRef(_1);
    }
    _208 = NOVALUE;
    // SubProg set_default_charsets pc: 241 op: STARTLINE (58)

    /** types.e:265		Defined_Sets[CS_SpecWord 	] = "_"*/
    // SubProg set_default_charsets pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 245 op: ASSIGN_SUBS (16)
    RefDS(_209);
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 18);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _209;
    DeRef(_1);
    // SubProg set_default_charsets pc: 249 op: STARTLINE (58)

    /** types.e:266		Defined_Sets[CS_Boolean     ] = {TRUE,FALSE}*/
    // SubProg set_default_charsets pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 255 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 257 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6TRUE_365;
    ((intptr_t *)_2)[2] = _6FALSE_363;
    _210 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 261 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _2 = (object)(((s1_ptr)_2)->base + 19);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _210;
    if( _1 != _210 ){
        DeRef(_1);
    }
    _210 = NOVALUE;
    // SubProg set_default_charsets pc: 265 op: STARTLINE (58)

    /** types.e:267	end procedure*/
    // SubProg set_default_charsets pc: 267 op: RETURNP (29)

// Exiting block BLOCK: set_default_charsets
    return;
    // SubProg set_default_charsets pc: 270 op: BADRETURNF (43)
    ;
}


object _6t_identifier(object _test_data_590)
{
    object _254 = NOVALUE; // 604 254
    object _253 = NOVALUE; // 603 253
    object _252 = NOVALUE; // 602 252
    object _251 = NOVALUE; // 601 251
    object _250 = NOVALUE; // 599 250
    object _249 = NOVALUE; // 598 249
    object _248 = NOVALUE; // 597 248
    object _247 = NOVALUE; // 596 247
    object _246 = NOVALUE; // 595 246
    object _245 = NOVALUE; // 593 245
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_identifier pc: 1 op: STARTLINE (58)

    /** types.e:458		if t_digit(test_data) then*/
    // SubProg t_identifier pc: 3 op: PROC (27)
    RefDS(_test_data_590);
    _245 = _6t_digit(_test_data_590);
    // SubProg t_identifier pc: 7 op: IF (20)
    if (_245 == 0) {
        DeRef(_245);
        _245 = NOVALUE;
        goto L1; // [7] 19
    }
    else {
        if (!IS_ATOM_INT(_245) && DBL_PTR(_245)->dbl == 0.0){
            DeRef(_245);
            _245 = NOVALUE;
            goto L1; // [7] 19
        }
        DeRef(_245);
        _245 = NOVALUE;
    }
    DeRef(_245);
    _245 = NOVALUE;
    // SubProg t_identifier pc: 10 op: STARTLINE (58)

    /** types.e:459			return 0*/
    // SubProg t_identifier pc: 12 op: RETURNF (28)

// Exiting block BLOCK: t_identifier

// block var test_data_590
    DeRefDS(_test_data_590);
    return 0;
    // SubProg t_identifier pc: 16 op: ELSE (23)
    goto L2; // [16] 63
    // SubProg t_identifier pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 588 op: 159
    // SubProg t_identifier pc: 19 op: STARTLINE (58)

    /** types.e:460		elsif sequence(test_data) and length(test_data) > 0 and t_digit(test_data[1]) then*/
    // SubProg t_identifier pc: 21 op: IS_A_SEQUENCE (68)
    _246 = IS_SEQUENCE(_test_data_590);
    // SubProg t_identifier pc: 24 op: SC1_AND (141)
    if (_246 == 0) {
        _247 = 0;
        goto L3; // [24] 39
    }
    // SubProg t_identifier pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_test_data_590)){
            _248 = SEQ_PTR(_test_data_590)->length;
    }
    else {
        _248 = 1;
    }
    // SubProg t_identifier pc: 31 op: GREATER (6)
    _249 = (_248 > 0);
    _248 = NOVALUE;
    // SubProg t_identifier pc: 35 op: SC2_AND (142)
    _247 = (_249 != 0);
    // SubProg t_identifier pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 588 op: 159
    // SubProg t_identifier pc: 39 op: SC1_AND_IF (146)
    if (_247 == 0) {
        goto L4; // [39] 62
    }
    // SubProg t_identifier pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_test_data_590);
    _251 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg t_identifier pc: 47 op: PROC (27)
    Ref(_251);
    _252 = _6t_digit(_251);
    _251 = NOVALUE;
    // SubProg t_identifier pc: 51 op: NOP1 (159)
    // SubProg t_identifier pc: 52 op: IF (20)
    if (_252 == 0) {
        DeRef(_252);
        _252 = NOVALUE;
        goto L4; // [52] 62
    }
    else {
        if (!IS_ATOM_INT(_252) && DBL_PTR(_252)->dbl == 0.0){
            DeRef(_252);
            _252 = NOVALUE;
            goto L4; // [52] 62
        }
        DeRef(_252);
        _252 = NOVALUE;
    }
    DeRef(_252);
    _252 = NOVALUE;
    // SubProg t_identifier pc: 55 op: STARTLINE (58)

    /** types.e:461			return 0*/
    // SubProg t_identifier pc: 57 op: RETURNF (28)

// Exiting block BLOCK: t_identifier

// block var test_data_590
    DeRef(_test_data_590);
    DeRef(_249);
    _249 = NOVALUE;
    return 0;
    // SubProg t_identifier pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 588 op: 159
    // SubProg t_identifier pc: 62 op: NOP1 (159)
L2: // addr: 63 pc: 62 sub: 588 op: 159
    // SubProg t_identifier pc: 63 op: STARTLINE (58)

    /** types.e:464		return char_test(test_data, Defined_Sets[CS_Identifier])*/
    // SubProg t_identifier pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_identifier pc: 67 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _253 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg t_identifier pc: 71 op: PROC (27)
    Ref(_test_data_590);
    Ref(_253);
    _254 = _6char_test(_test_data_590, _253);
    _253 = NOVALUE;
    // SubProg t_identifier pc: 76 op: RETURNF (28)

// Exiting block BLOCK: t_identifier

// block var test_data_590
    DeRef(_test_data_590);
    DeRef(_249);
    _249 = NOVALUE;
    return _254;
    // SubProg t_identifier pc: 80 op: BADRETURNF (43)
    ;
}


object _6t_alpha(object _test_data_607)
{
    object _256 = NOVALUE; // 609 256
    object _255 = NOVALUE; // 608 255
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_alpha pc: 1 op: STARTLINE (58)

    /** types.e:494		return char_test(test_data, Defined_Sets[CS_Alphabetic])*/
    // SubProg t_alpha pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_alpha pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _255 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg t_alpha pc: 9 op: PROC (27)
    Ref(_test_data_607);
    Ref(_255);
    _256 = _6char_test(_test_data_607, _255);
    _255 = NOVALUE;
    // SubProg t_alpha pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_alpha

// block var test_data_607
    DeRef(_test_data_607);
    return _256;
    // SubProg t_alpha pc: 18 op: BADRETURNF (43)
    ;
}


object _6t_digit(object _test_data_622)
{
    object _262 = NOVALUE; // 624 262
    object _261 = NOVALUE; // 623 261
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_digit pc: 1 op: STARTLINE (58)

    /** types.e:587		return char_test(test_data, Defined_Sets[CS_Digit])*/
    // SubProg t_digit pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_digit pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _261 = (object)*(((s1_ptr)_2)->base + 15);
    // SubProg t_digit pc: 9 op: PROC (27)
    Ref(_test_data_622);
    Ref(_261);
    _262 = _6char_test(_test_data_622, _261);
    _261 = NOVALUE;
    // SubProg t_digit pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_digit

// block var test_data_622
    DeRef(_test_data_622);
    return _262;
    // SubProg t_digit pc: 18 op: BADRETURNF (43)
    ;
}


object _6t_specword(object _test_data_632)
{
    object _266 = NOVALUE; // 634 266
    object _265 = NOVALUE; // 633 265
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_specword pc: 1 op: STARTLINE (58)

    /** types.e:659		return char_test(test_data, Defined_Sets[CS_SpecWord])*/
    // SubProg t_specword pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_specword pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _265 = (object)*(((s1_ptr)_2)->base + 18);
    // SubProg t_specword pc: 9 op: PROC (27)
    Ref(_test_data_632);
    Ref(_265);
    _266 = _6char_test(_test_data_632, _265);
    _265 = NOVALUE;
    // SubProg t_specword pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_specword

// block var test_data_632
    DeRef(_test_data_632);
    return _266;
    // SubProg t_specword pc: 18 op: BADRETURNF (43)
    ;
}


object _6t_lower(object _test_data_642)
{
    object _270 = NOVALUE; // 644 270
    object _269 = NOVALUE; // 643 269
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_lower pc: 1 op: STARTLINE (58)

    /** types.e:727		return char_test(test_data, Defined_Sets[CS_Lowercase])*/
    // SubProg t_lower pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_lower pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _269 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg t_lower pc: 9 op: PROC (27)
    Ref(_test_data_642);
    Ref(_269);
    _270 = _6char_test(_test_data_642, _269);
    _269 = NOVALUE;
    // SubProg t_lower pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_lower

// block var test_data_642
    DeRef(_test_data_642);
    return _270;
    // SubProg t_lower pc: 18 op: BADRETURNF (43)
    ;
}


object _6t_display(object _test_data_652)
{
    object _274 = NOVALUE; // 654 274
    object _273 = NOVALUE; // 653 273
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_display pc: 1 op: STARTLINE (58)

    /** types.e:795		return char_test(test_data, Defined_Sets[CS_Displayable])*/
    // SubProg t_display pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_display pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _273 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg t_display pc: 9 op: PROC (27)
    Ref(_test_data_652);
    Ref(_273);
    _274 = _6char_test(_test_data_652, _273);
    _273 = NOVALUE;
    // SubProg t_display pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_display

// block var test_data_652
    DeRef(_test_data_652);
    return _274;
    // SubProg t_display pc: 18 op: BADRETURNF (43)
    ;
}


object _6t_upper(object _test_data_667)
{
    object _280 = NOVALUE; // 669 280
    object _279 = NOVALUE; // 668 279
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_upper pc: 1 op: STARTLINE (58)

    /** types.e:890		return char_test(test_data, Defined_Sets[CS_Uppercase])*/
    // SubProg t_upper pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_upper pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_6Defined_Sets_465);
    _279 = (object)*(((s1_ptr)_2)->base + 9);
    // SubProg t_upper pc: 9 op: PROC (27)
    Ref(_test_data_667);
    Ref(_279);
    _280 = _6char_test(_test_data_667, _279);
    _279 = NOVALUE;
    // SubProg t_upper pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_upper

// block var test_data_667
    DeRef(_test_data_667);
    return _280;
    // SubProg t_upper pc: 18 op: BADRETURNF (43)
    ;
}


object _6number_array(object _x_716)
{
// skipping _306  name type: 0
    object _305 = NOVALUE; // 725 305
    object _304 = NOVALUE; // 724 304
    object _303 = NOVALUE; // 722 303
// skipping _302  name type: 0
    object _301 = NOVALUE; // 718 301
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg number_array pc: 1 op: STARTLINE (58)

    /** types.e:1071		if not sequence(x) then*/
    // SubProg number_array pc: 3 op: IS_A_SEQUENCE (68)
    _301 = IS_SEQUENCE(_x_716);
    // SubProg number_array pc: 6 op: NOT_IFW (108)
    if (_301 != 0)
    goto L1; // [6] 16
    _301 = NOVALUE;
    // SubProg number_array pc: 9 op: STARTLINE (58)

    /** types.e:1072			return 0*/
    // SubProg number_array pc: 11 op: RETURNF (28)

// Exiting block BLOCK: number_array

// block var x_716
    DeRef(_x_716);
    return 0;
    // SubProg number_array pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 714 op: 159
    // SubProg number_array pc: 16 op: STARTLINE (58)

    /** types.e:1075		for i = 1 to length(x) do*/
    // SubProg number_array pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_716)){
            _303 = SEQ_PTR(_x_716)->length;
    }
    else {
        _303 = 1;
    }
    // SubProg number_array pc: 21 op: FOR_I (125)
    {
        object _i_721;
        _i_721 = 1;
L2: // addr: 28 pc: 21 sub: 714 op: 125
        if (_i_721 > _303){
            goto L3; // [21] 54
        }
        // SubProg number_array pc: 28 op: STARTLINE (58)

        /** types.e:1076			if not atom(x[i]) then*/
        // SubProg number_array pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_716);
        _304 = (object)*(((s1_ptr)_2)->base + _i_721);
        // SubProg number_array pc: 34 op: IS_AN_ATOM (67)
        _305 = IS_ATOM(_304);
        _304 = NOVALUE;
        // SubProg number_array pc: 37 op: NOT_IFW (108)
        if (_305 != 0)
        goto L4; // [37] 47
        _305 = NOVALUE;
        // SubProg number_array pc: 40 op: STARTLINE (58)

        /** types.e:1077				return 0*/
        // SubProg number_array pc: 42 op: RETURNF (28)

// Exiting block BLOCK: number_array

// block var x_716
        DeRef(_x_716);
        return 0;
        // SubProg number_array pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 714 op: 159
        // SubProg number_array pc: 47 op: STARTLINE (58)

        /** types.e:1079		end for*/
        // SubProg number_array pc: 49 op: ENDFOR_INT_UP1 (54)
        _i_721 = _i_721 + 1;
        goto L2; // [49] 28
L3: // addr: 54 pc: 49 sub: 714 op: 54
        ;
    }
    // SubProg number_array pc: 54 op: STARTLINE (58)

    /** types.e:1080		return 1*/
    // SubProg number_array pc: 56 op: RETURNF (28)

// Exiting block BLOCK: number_array

// block var x_716
    DeRef(_x_716);
    return 1;
    // SubProg number_array pc: 60 op: BADRETURNF (43)
    ;
}


object _6ascii_string(object _x_742)
{
// skipping _322  name type: 0
    object _321 = NOVALUE; // 757 321
// skipping _320  name type: 0
    object _319 = NOVALUE; // 754 319
// skipping _318  name type: 0
    object _317 = NOVALUE; // 751 317
    object _316 = NOVALUE; // 750 316
    object _315 = NOVALUE; // 748 315
// skipping _314  name type: 0
    object _313 = NOVALUE; // 744 313
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ascii_string pc: 1 op: STARTLINE (58)

    /** types.e:1132		if not sequence(x) then*/
    // SubProg ascii_string pc: 3 op: IS_A_SEQUENCE (68)
    _313 = IS_SEQUENCE(_x_742);
    // SubProg ascii_string pc: 6 op: NOT_IFW (108)
    if (_313 != 0)
    goto L1; // [6] 16
    _313 = NOVALUE;
    // SubProg ascii_string pc: 9 op: STARTLINE (58)

    /** types.e:1133			return 0*/
    // SubProg ascii_string pc: 11 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_742
    DeRef(_x_742);
    return 0;
    // SubProg ascii_string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 740 op: 159
    // SubProg ascii_string pc: 16 op: STARTLINE (58)

    /** types.e:1136		for i = 1 to length(x) do*/
    // SubProg ascii_string pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_742)){
            _315 = SEQ_PTR(_x_742)->length;
    }
    else {
        _315 = 1;
    }
    // SubProg ascii_string pc: 21 op: FOR_I (125)
    {
        object _i_747;
        _i_747 = 1;
L2: // addr: 28 pc: 21 sub: 740 op: 125
        if (_i_747 > _315){
            goto L3; // [21] 88
        }
        // SubProg ascii_string pc: 28 op: STARTLINE (58)

        /** types.e:1137			if not integer(x[i]) then*/
        // SubProg ascii_string pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_742);
        _316 = (object)*(((s1_ptr)_2)->base + _i_747);
        // SubProg ascii_string pc: 34 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_316))
        _317 = 1;
        else if (IS_ATOM_DBL(_316))
        _317 = IS_ATOM_INT(DoubleToInt(_316));
        else
        _317 = 0;
        _316 = NOVALUE;
        // SubProg ascii_string pc: 37 op: NOT_IFW (108)
        if (_317 != 0)
        goto L4; // [37] 47
        _317 = NOVALUE;
        // SubProg ascii_string pc: 40 op: STARTLINE (58)

        /** types.e:1138				return 0*/
        // SubProg ascii_string pc: 42 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_742
        DeRef(_x_742);
        return 0;
        // SubProg ascii_string pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 740 op: 159
        // SubProg ascii_string pc: 47 op: STARTLINE (58)

        /** types.e:1140			if x[i] < 0 then*/
        // SubProg ascii_string pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_742);
        _319 = (object)*(((s1_ptr)_2)->base + _i_747);
        // SubProg ascii_string pc: 53 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _319, 0)){
            _319 = NOVALUE;
            goto L5; // [53] 64
        }
        _319 = NOVALUE;
        // SubProg ascii_string pc: 57 op: STARTLINE (58)

        /** types.e:1141				return 0*/
        // SubProg ascii_string pc: 59 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_742
        DeRef(_x_742);
        return 0;
        // SubProg ascii_string pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 740 op: 159
        // SubProg ascii_string pc: 64 op: STARTLINE (58)

        /** types.e:1143			if x[i] > 127 then*/
        // SubProg ascii_string pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_742);
        _321 = (object)*(((s1_ptr)_2)->base + _i_747);
        // SubProg ascii_string pc: 70 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _321, 127)){
            _321 = NOVALUE;
            goto L6; // [70] 81
        }
        _321 = NOVALUE;
        // SubProg ascii_string pc: 74 op: STARTLINE (58)

        /** types.e:1144				return 0*/
        // SubProg ascii_string pc: 76 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_742
        DeRef(_x_742);
        return 0;
        // SubProg ascii_string pc: 80 op: NOP1 (159)
L6: // addr: 81 pc: 80 sub: 740 op: 159
        // SubProg ascii_string pc: 81 op: STARTLINE (58)

        /** types.e:1146		end for*/
        // SubProg ascii_string pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_747 = _i_747 + 1;
        goto L2; // [83] 28
L3: // addr: 88 pc: 83 sub: 740 op: 54
        ;
    }
    // SubProg ascii_string pc: 88 op: STARTLINE (58)

    /** types.e:1147		return 1*/
    // SubProg ascii_string pc: 90 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_742
    DeRef(_x_742);
    return 1;
    // SubProg ascii_string pc: 94 op: BADRETURNF (43)
    ;
}


object _6string(object _x_761)
{
// skipping _332  name type: 0
    object _331 = NOVALUE; // 776 331
// skipping _330  name type: 0
    object _329 = NOVALUE; // 773 329
// skipping _328  name type: 0
    object _327 = NOVALUE; // 770 327
    object _326 = NOVALUE; // 769 326
    object _325 = NOVALUE; // 767 325
// skipping _324  name type: 0
    object _323 = NOVALUE; // 763 323
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg string pc: 1 op: STARTLINE (58)

    /** types.e:1171		if not sequence(x) then*/
    // SubProg string pc: 3 op: IS_A_SEQUENCE (68)
    _323 = IS_SEQUENCE(_x_761);
    // SubProg string pc: 6 op: NOT_IFW (108)
    if (_323 != 0)
    goto L1; // [6] 16
    _323 = NOVALUE;
    // SubProg string pc: 9 op: STARTLINE (58)

    /** types.e:1172			return 0*/
    // SubProg string pc: 11 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_761
    DeRef(_x_761);
    return 0;
    // SubProg string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 759 op: 159
    // SubProg string pc: 16 op: STARTLINE (58)

    /** types.e:1175		for i = 1 to length(x) do*/
    // SubProg string pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_761)){
            _325 = SEQ_PTR(_x_761)->length;
    }
    else {
        _325 = 1;
    }
    // SubProg string pc: 21 op: FOR_I (125)
    {
        object _i_766;
        _i_766 = 1;
L2: // addr: 28 pc: 21 sub: 759 op: 125
        if (_i_766 > _325){
            goto L3; // [21] 88
        }
        // SubProg string pc: 28 op: STARTLINE (58)

        /** types.e:1176			if not integer(x[i]) then*/
        // SubProg string pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_761);
        _326 = (object)*(((s1_ptr)_2)->base + _i_766);
        // SubProg string pc: 34 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_326))
        _327 = 1;
        else if (IS_ATOM_DBL(_326))
        _327 = IS_ATOM_INT(DoubleToInt(_326));
        else
        _327 = 0;
        _326 = NOVALUE;
        // SubProg string pc: 37 op: NOT_IFW (108)
        if (_327 != 0)
        goto L4; // [37] 47
        _327 = NOVALUE;
        // SubProg string pc: 40 op: STARTLINE (58)

        /** types.e:1177				return 0*/
        // SubProg string pc: 42 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_761
        DeRef(_x_761);
        return 0;
        // SubProg string pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 759 op: 159
        // SubProg string pc: 47 op: STARTLINE (58)

        /** types.e:1179			if x[i] < 0 then*/
        // SubProg string pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_761);
        _329 = (object)*(((s1_ptr)_2)->base + _i_766);
        // SubProg string pc: 53 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _329, 0)){
            _329 = NOVALUE;
            goto L5; // [53] 64
        }
        _329 = NOVALUE;
        // SubProg string pc: 57 op: STARTLINE (58)

        /** types.e:1180				return 0*/
        // SubProg string pc: 59 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_761
        DeRef(_x_761);
        return 0;
        // SubProg string pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 759 op: 159
        // SubProg string pc: 64 op: STARTLINE (58)

        /** types.e:1182			if x[i] > 255 then*/
        // SubProg string pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_761);
        _331 = (object)*(((s1_ptr)_2)->base + _i_766);
        // SubProg string pc: 70 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _331, 255)){
            _331 = NOVALUE;
            goto L6; // [70] 81
        }
        _331 = NOVALUE;
        // SubProg string pc: 74 op: STARTLINE (58)

        /** types.e:1183				return 0*/
        // SubProg string pc: 76 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_761
        DeRef(_x_761);
        return 0;
        // SubProg string pc: 80 op: NOP1 (159)
L6: // addr: 81 pc: 80 sub: 759 op: 159
        // SubProg string pc: 81 op: STARTLINE (58)

        /** types.e:1185		end for*/
        // SubProg string pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_766 = _i_766 + 1;
        goto L2; // [83] 28
L3: // addr: 88 pc: 83 sub: 759 op: 54
        ;
    }
    // SubProg string pc: 88 op: STARTLINE (58)

    /** types.e:1186		return 1*/
    // SubProg string pc: 90 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_761
    DeRef(_x_761);
    return 1;
    // SubProg string pc: 94 op: BADRETURNF (43)
    ;
}


object _6cstring(object _x_780)
{
// skipping _342  name type: 0
    object _341 = NOVALUE; // 795 341
// skipping _340  name type: 0
    object _339 = NOVALUE; // 792 339
// skipping _338  name type: 0
    object _337 = NOVALUE; // 789 337
    object _336 = NOVALUE; // 788 336
    object _335 = NOVALUE; // 786 335
// skipping _334  name type: 0
    object _333 = NOVALUE; // 782 333
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cstring pc: 1 op: STARTLINE (58)

    /** types.e:1210		if not sequence(x) then*/
    // SubProg cstring pc: 3 op: IS_A_SEQUENCE (68)
    _333 = 1;
    // SubProg cstring pc: 6 op: NOT_IFW (108)
    if (_333 != 0)
    goto L1; // [6] 16
    _333 = NOVALUE;
    // SubProg cstring pc: 9 op: STARTLINE (58)

    /** types.e:1211			return 0*/
    // SubProg cstring pc: 11 op: RETURNF (28)

// Exiting block BLOCK: cstring

// block var x_780
    DeRefDS(_x_780);
    return 0;
    // SubProg cstring pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 778 op: 159
    // SubProg cstring pc: 16 op: STARTLINE (58)

    /** types.e:1214		for i = 1 to length(x) do*/
    // SubProg cstring pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_780)){
            _335 = SEQ_PTR(_x_780)->length;
    }
    else {
        _335 = 1;
    }
    // SubProg cstring pc: 21 op: FOR_I (125)
    {
        object _i_785;
        _i_785 = 1;
L2: // addr: 28 pc: 21 sub: 778 op: 125
        if (_i_785 > _335){
            goto L3; // [21] 88
        }
        // SubProg cstring pc: 28 op: STARTLINE (58)

        /** types.e:1215			if not integer(x[i]) then*/
        // SubProg cstring pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_780);
        _336 = (object)*(((s1_ptr)_2)->base + _i_785);
        // SubProg cstring pc: 34 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_336))
        _337 = 1;
        else if (IS_ATOM_DBL(_336))
        _337 = IS_ATOM_INT(DoubleToInt(_336));
        else
        _337 = 0;
        _336 = NOVALUE;
        // SubProg cstring pc: 37 op: NOT_IFW (108)
        if (_337 != 0)
        goto L4; // [37] 47
        _337 = NOVALUE;
        // SubProg cstring pc: 40 op: STARTLINE (58)

        /** types.e:1216				return 0*/
        // SubProg cstring pc: 42 op: RETURNF (28)

// Exiting block BLOCK: cstring

// block var x_780
        DeRef(_x_780);
        return 0;
        // SubProg cstring pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 778 op: 159
        // SubProg cstring pc: 47 op: STARTLINE (58)

        /** types.e:1218			if x[i] <= 0 then*/
        // SubProg cstring pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_780);
        _339 = (object)*(((s1_ptr)_2)->base + _i_785);
        // SubProg cstring pc: 53 op: LESSEQ_IFW (106)
        if (binary_op_a(GREATER, _339, 0)){
            _339 = NOVALUE;
            goto L5; // [53] 64
        }
        _339 = NOVALUE;
        // SubProg cstring pc: 57 op: STARTLINE (58)

        /** types.e:1219				return 0*/
        // SubProg cstring pc: 59 op: RETURNF (28)

// Exiting block BLOCK: cstring

// block var x_780
        DeRef(_x_780);
        return 0;
        // SubProg cstring pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 778 op: 159
        // SubProg cstring pc: 64 op: STARTLINE (58)

        /** types.e:1221			if x[i] > 255 then*/
        // SubProg cstring pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_780);
        _341 = (object)*(((s1_ptr)_2)->base + _i_785);
        // SubProg cstring pc: 70 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _341, 255)){
            _341 = NOVALUE;
            goto L6; // [70] 81
        }
        _341 = NOVALUE;
        // SubProg cstring pc: 74 op: STARTLINE (58)

        /** types.e:1222				return 0*/
        // SubProg cstring pc: 76 op: RETURNF (28)

// Exiting block BLOCK: cstring

// block var x_780
        DeRef(_x_780);
        return 0;
        // SubProg cstring pc: 80 op: NOP1 (159)
L6: // addr: 81 pc: 80 sub: 778 op: 159
        // SubProg cstring pc: 81 op: STARTLINE (58)

        /** types.e:1224		end for*/
        // SubProg cstring pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_785 = _i_785 + 1;
        goto L2; // [83] 28
L3: // addr: 88 pc: 83 sub: 778 op: 54
        ;
    }
    // SubProg cstring pc: 88 op: STARTLINE (58)

    /** types.e:1225		return 1*/
    // SubProg cstring pc: 90 op: RETURNF (28)

// Exiting block BLOCK: cstring

// block var x_780
    DeRef(_x_780);
    return 1;
    // SubProg cstring pc: 94 op: BADRETURNF (43)
    ;
}



// 0x53FB587D
