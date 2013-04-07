// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _13char_test(object _test_data_490, object _char_set_491)
{
    object _lChr_492 = NOVALUE;
// skipping _134  name type: 0
    object _133 = NOVALUE; // 545 133
    object _132 = NOVALUE; // 542 132
    object _131 = NOVALUE; // 541 131
    object _130 = NOVALUE; // 540 130
    object _129 = NOVALUE; // 539 129
    object _128 = NOVALUE; // 538 128
    object _127 = NOVALUE; // 537 127
    object _126 = NOVALUE; // 536 126
    object _125 = NOVALUE; // 534 125
    object _124 = NOVALUE; // 531 124
    object _123 = NOVALUE; // 530 123
// skipping _122  name type: 0
// skipping _121  name type: 0
    object _120 = NOVALUE; // 526 120
    object _119 = NOVALUE; // 525 119
    object _118 = NOVALUE; // 523 118
    object _117 = NOVALUE; // 522 117
    object _115 = NOVALUE; // 519 115
// skipping _114  name type: 0
    object _113 = NOVALUE; // 515 113
    object _112 = NOVALUE; // 513 112
    object _111 = NOVALUE; // 511 111
    object _110 = NOVALUE; // 510 110
    object _109 = NOVALUE; // 508 109
    object _108 = NOVALUE; // 507 108
    object _107 = NOVALUE; // 506 107
    object _106 = NOVALUE; // 505 106
    object _105 = NOVALUE; // 504 105
    object _104 = NOVALUE; // 503 104
    object _103 = NOVALUE; // 502 103
    object _102 = NOVALUE; // 500 102
    object _101 = NOVALUE; // 497 101
    object _100 = NOVALUE; // 496 100
    object _99 = NOVALUE; // 494 99
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg char_test pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg char_test pc: 3 op: STARTLINE (58)

    /** types.e:194		if integer(test_data) then*/
    // SubProg char_test pc: 5 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_test_data_490))
    _99 = 1;
    else if (IS_ATOM_DBL(_test_data_490))
    _99 = IS_ATOM_INT(DoubleToInt(_test_data_490));
    else
    _99 = 0;
    // SubProg char_test pc: 8 op: IF (20)
    if (_99 == 0)
    {
        _99 = NOVALUE;
        goto L1; // [8] 115
    }
    else{
        _99 = NOVALUE;
    }
    // SubProg char_test pc: 11 op: STARTLINE (58)

    /** types.e:195			if sequence(char_set[1]) then*/
    // SubProg char_test pc: 13 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_char_set_491);
    _100 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg char_test pc: 17 op: IS_A_SEQUENCE (68)
    _101 = IS_SEQUENCE(_100);
    _100 = NOVALUE;
    // SubProg char_test pc: 20 op: IF (20)
    if (_101 == 0)
    {
        _101 = NOVALUE;
        goto L2; // [20] 96
    }
    else{
        _101 = NOVALUE;
    }
    // SubProg char_test pc: 23 op: STARTLINE (58)

    /** types.e:196				for j = 1 to length(char_set) do*/
    // SubProg char_test pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_char_set_491)){
            _102 = SEQ_PTR(_char_set_491)->length;
    }
    else {
        _102 = 1;
    }
    // SubProg char_test pc: 28 op: FOR_I (125)
    {
        object _j_499;
        _j_499 = 1;
L3: // addr: 35 pc: 28 sub: 488 op: 125
        if (_j_499 > _102){
            goto L4; // [28] 85
        }
        // SubProg char_test pc: 35 op: STARTLINE (58)

        /** types.e:197					if test_data >= char_set[j][1] and test_data <= char_set[j][2] then */
        // SubProg char_test pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_char_set_491);
        _103 = (object)*(((s1_ptr)_2)->base + _j_499);
        // SubProg char_test pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_103);
        _104 = (object)*(((s1_ptr)_2)->base + 1);
        _103 = NOVALUE;
        // SubProg char_test pc: 45 op: GREATEREQ (2)
        if (IS_ATOM_INT(_test_data_490) && IS_ATOM_INT(_104)) {
            _105 = (_test_data_490 >= _104);
        }
        else {
            _105 = binary_op(GREATEREQ, _test_data_490, _104);
        }
        _104 = NOVALUE;
        // SubProg char_test pc: 49 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_105)) {
            if (_105 == 0) {
                goto L5; // [49] 78
            }
        }
        else {
            if (DBL_PTR(_105)->dbl == 0.0) {
                goto L5; // [49] 78
            }
        }
        // SubProg char_test pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_char_set_491);
        _107 = (object)*(((s1_ptr)_2)->base + _j_499);
        // SubProg char_test pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_107);
        _108 = (object)*(((s1_ptr)_2)->base + 2);
        _107 = NOVALUE;
        // SubProg char_test pc: 61 op: LESSEQ (5)
        if (IS_ATOM_INT(_test_data_490) && IS_ATOM_INT(_108)) {
            _109 = (_test_data_490 <= _108);
        }
        else {
            _109 = binary_op(LESSEQ, _test_data_490, _108);
        }
        _108 = NOVALUE;
        // SubProg char_test pc: 65 op: NOP1 (159)
        // SubProg char_test pc: 66 op: IF (20)
        if (_109 == 0) {
            DeRef(_109);
            _109 = NOVALUE;
            goto L5; // [66] 78
        }
        else {
            if (!IS_ATOM_INT(_109) && DBL_PTR(_109)->dbl == 0.0){
                DeRef(_109);
                _109 = NOVALUE;
                goto L5; // [66] 78
            }
            DeRef(_109);
            _109 = NOVALUE;
        }
        DeRef(_109);
        _109 = NOVALUE;
        // SubProg char_test pc: 69 op: STARTLINE (58)

        /** types.e:198						return TRUE */
        // SubProg char_test pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 73 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
        DeRef(_test_data_490);

// block var char_set_491
        DeRefDS(_char_set_491);

// block var lChr_492
        DeRef(_105);
        _105 = NOVALUE;
        return _13TRUE_452;
        // SubProg char_test pc: 77 op: NOP1 (159)
L5: // addr: 78 pc: 77 sub: 488 op: 159
        // SubProg char_test pc: 78 op: STARTLINE (58)

        /** types.e:200				end for*/
        // SubProg char_test pc: 80 op: ENDFOR_INT_UP1 (54)
        _j_499 = _j_499 + 1;
        goto L3; // [80] 35
L4: // addr: 85 pc: 80 sub: 488 op: 54
        ;
    }
    // SubProg char_test pc: 85 op: STARTLINE (58)

    /** types.e:201				return FALSE*/
    // SubProg char_test pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 89 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
    DeRef(_test_data_490);

// block var char_set_491
    DeRefDS(_char_set_491);

// block var lChr_492
    DeRef(_105);
    _105 = NOVALUE;
    return _13FALSE_450;
    // SubProg char_test pc: 93 op: ELSE (23)
    goto L6; // [93] 328
    // SubProg char_test pc: 95 op: NOP1 (159)
L2: // addr: 96 pc: 95 sub: 488 op: 159
    // SubProg char_test pc: 96 op: STARTLINE (58)

    /** types.e:203				return find(test_data, char_set) > 0*/
    // SubProg char_test pc: 98 op: FIND_FROM (176)
    _110 = find_from(_test_data_490, _char_set_491, 1);
    // SubProg char_test pc: 103 op: GREATER (6)
    _111 = (_110 > 0);
    _110 = NOVALUE;
    // SubProg char_test pc: 107 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
    DeRef(_test_data_490);

// block var char_set_491
    DeRefDS(_char_set_491);

// block var lChr_492
    DeRef(_105);
    _105 = NOVALUE;
    return _111;
    // SubProg char_test pc: 111 op: NOP1 (159)
    // SubProg char_test pc: 112 op: ELSE (23)
    goto L6; // [112] 328
    // SubProg char_test pc: 114 op: NOP1 (159)
L1: // addr: 115 pc: 114 sub: 488 op: 159
    // SubProg char_test pc: 115 op: STARTLINE (58)

    /** types.e:205		elsif sequence(test_data) then*/
    // SubProg char_test pc: 117 op: IS_A_SEQUENCE (68)
    _112 = IS_SEQUENCE(_test_data_490);
    // SubProg char_test pc: 120 op: IF (20)
    if (_112 == 0)
    {
        _112 = NOVALUE;
        goto L7; // [120] 319
    }
    else{
        _112 = NOVALUE;
    }
    // SubProg char_test pc: 123 op: STARTLINE (58)

    /** types.e:206			if length(test_data) = 0 then */
    // SubProg char_test pc: 125 op: LENGTH (42)
    if (IS_SEQUENCE(_test_data_490)){
            _113 = SEQ_PTR(_test_data_490)->length;
    }
    else {
        _113 = 1;
    }
    // SubProg char_test pc: 128 op: EQUALS_IFW_I (121)
    if (_113 != 0)
    goto L8; // [128] 141
    // SubProg char_test pc: 132 op: STARTLINE (58)

    /** types.e:207				return FALSE */
    // SubProg char_test pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 136 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
    DeRef(_test_data_490);

// block var char_set_491
    DeRefDS(_char_set_491);

// block var lChr_492
    DeRef(_105);
    _105 = NOVALUE;
    DeRef(_111);
    _111 = NOVALUE;
    return _13FALSE_450;
    // SubProg char_test pc: 140 op: NOP1 (159)
L8: // addr: 141 pc: 140 sub: 488 op: 159
    // SubProg char_test pc: 141 op: STARTLINE (58)

    /** types.e:209			for i = 1 to length(test_data) label "NXTCHR" do*/
    // SubProg char_test pc: 143 op: LENGTH (42)
    if (IS_SEQUENCE(_test_data_490)){
            _115 = SEQ_PTR(_test_data_490)->length;
    }
    else {
        _115 = 1;
    }
    // SubProg char_test pc: 146 op: FOR_I (125)
    {
        object _i_518;
        _i_518 = 1;
L9: // addr: 153 pc: 146 sub: 488 op: 125
        if (_i_518 > _115){
            goto LA; // [146] 308
        }
        // SubProg char_test pc: 153 op: STARTLINE (58)

        /** types.e:210				if sequence(test_data[i]) then */
        // SubProg char_test pc: 155 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_test_data_490);
        _117 = (object)*(((s1_ptr)_2)->base + _i_518);
        // SubProg char_test pc: 159 op: IS_A_SEQUENCE (68)
        _118 = IS_SEQUENCE(_117);
        _117 = NOVALUE;
        // SubProg char_test pc: 162 op: IF (20)
        if (_118 == 0)
        {
            _118 = NOVALUE;
            goto LB; // [162] 174
        }
        else{
            _118 = NOVALUE;
        }
        // SubProg char_test pc: 165 op: STARTLINE (58)

        /** types.e:211					return FALSE*/
        // SubProg char_test pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 169 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
        DeRef(_test_data_490);

// block var char_set_491
        DeRefDS(_char_set_491);

// block var lChr_492
        DeRef(_105);
        _105 = NOVALUE;
        DeRef(_111);
        _111 = NOVALUE;
        return _13FALSE_450;
        // SubProg char_test pc: 173 op: NOP1 (159)
LB: // addr: 174 pc: 173 sub: 488 op: 159
        // SubProg char_test pc: 174 op: STARTLINE (58)

        /** types.e:213				if not integer(test_data[i]) then */
        // SubProg char_test pc: 176 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_test_data_490);
        _119 = (object)*(((s1_ptr)_2)->base + _i_518);
        // SubProg char_test pc: 180 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_119))
        _120 = 1;
        else if (IS_ATOM_DBL(_119))
        _120 = IS_ATOM_INT(DoubleToInt(_119));
        else
        _120 = 0;
        _119 = NOVALUE;
        // SubProg char_test pc: 183 op: NOT_IFW (108)
        if (_120 != 0)
        goto LC; // [183] 195
        _120 = NOVALUE;
        // SubProg char_test pc: 186 op: STARTLINE (58)

        /** types.e:214					return FALSE*/
        // SubProg char_test pc: 188 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 190 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
        DeRef(_test_data_490);

// block var char_set_491
        DeRefDS(_char_set_491);

// block var lChr_492
        DeRef(_105);
        _105 = NOVALUE;
        DeRef(_111);
        _111 = NOVALUE;
        return _13FALSE_450;
        // SubProg char_test pc: 194 op: NOP1 (159)
LC: // addr: 195 pc: 194 sub: 488 op: 159
        // SubProg char_test pc: 195 op: STARTLINE (58)

        /** types.e:216				lChr = test_data[i]*/
        // SubProg char_test pc: 197 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_test_data_490);
        _lChr_492 = (object)*(((s1_ptr)_2)->base + _i_518);
        if (!IS_ATOM_INT(_lChr_492)){
            _lChr_492 = (object)DBL_PTR(_lChr_492)->dbl;
        }
        // SubProg char_test pc: 203 op: STARTLINE (58)

        /** types.e:217				if sequence(char_set[1]) then*/
        // SubProg char_test pc: 205 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_char_set_491);
        _123 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg char_test pc: 209 op: IS_A_SEQUENCE (68)
        _124 = IS_SEQUENCE(_123);
        _123 = NOVALUE;
        // SubProg char_test pc: 212 op: IF (20)
        if (_124 == 0)
        {
            _124 = NOVALUE;
            goto LD; // [212] 276
        }
        else{
            _124 = NOVALUE;
        }
        // SubProg char_test pc: 215 op: STARTLINE (58)

        /** types.e:218					for j = 1 to length(char_set) do*/
        // SubProg char_test pc: 217 op: LENGTH (42)
        if (IS_SEQUENCE(_char_set_491)){
                _125 = SEQ_PTR(_char_set_491)->length;
        }
        else {
            _125 = 1;
        }
        // SubProg char_test pc: 220 op: FOR_I (125)
        {
            object _j_533;
            _j_533 = 1;
LE: // addr: 227 pc: 220 sub: 488 op: 125
            if (_j_533 > _125){
                goto LF; // [220] 273
            }
            // SubProg char_test pc: 227 op: STARTLINE (58)

            /** types.e:219						if lChr >= char_set[j][1] and lChr <= char_set[j][2] then*/
            // SubProg char_test pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_char_set_491);
            _126 = (object)*(((s1_ptr)_2)->base + _j_533);
            // SubProg char_test pc: 233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_126);
            _127 = (object)*(((s1_ptr)_2)->base + 1);
            _126 = NOVALUE;
            // SubProg char_test pc: 237 op: GREATEREQ (2)
            if (IS_ATOM_INT(_127)) {
                _128 = (_lChr_492 >= _127);
            }
            else {
                _128 = binary_op(GREATEREQ, _lChr_492, _127);
            }
            _127 = NOVALUE;
            // SubProg char_test pc: 241 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_128)) {
                if (_128 == 0) {
                    goto L10; // [241] 266
                }
            }
            else {
                if (DBL_PTR(_128)->dbl == 0.0) {
                    goto L10; // [241] 266
                }
            }
            // SubProg char_test pc: 245 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_char_set_491);
            _130 = (object)*(((s1_ptr)_2)->base + _j_533);
            // SubProg char_test pc: 249 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_130);
            _131 = (object)*(((s1_ptr)_2)->base + 2);
            _130 = NOVALUE;
            // SubProg char_test pc: 253 op: LESSEQ (5)
            if (IS_ATOM_INT(_131)) {
                _132 = (_lChr_492 <= _131);
            }
            else {
                _132 = binary_op(LESSEQ, _lChr_492, _131);
            }
            _131 = NOVALUE;
            // SubProg char_test pc: 257 op: NOP1 (159)
            // SubProg char_test pc: 258 op: IF (20)
            if (_132 == 0) {
                DeRef(_132);
                _132 = NOVALUE;
                goto L10; // [258] 266
            }
            else {
                if (!IS_ATOM_INT(_132) && DBL_PTR(_132)->dbl == 0.0){
                    DeRef(_132);
                    _132 = NOVALUE;
                    goto L10; // [258] 266
                }
                DeRef(_132);
                _132 = NOVALUE;
            }
            DeRef(_132);
            _132 = NOVALUE;
            // SubProg char_test pc: 261 op: STARTLINE (58)

            /** types.e:220							continue "NXTCHR" */
            // SubProg char_test pc: 263 op: ELSE (23)
            goto L11; // [263] 303
            // SubProg char_test pc: 265 op: NOP1 (159)
L10: // addr: 266 pc: 265 sub: 488 op: 159
            // SubProg char_test pc: 266 op: STARTLINE (58)

            /** types.e:222					end for*/
            // SubProg char_test pc: 268 op: ENDFOR_INT_UP1 (54)
            _j_533 = _j_533 + 1;
            goto LE; // [268] 227
LF: // addr: 273 pc: 268 sub: 488 op: 54
            ;
        }
        // SubProg char_test pc: 273 op: ELSE (23)
        goto L12; // [273] 293
        // SubProg char_test pc: 275 op: NOP1 (159)
LD: // addr: 276 pc: 275 sub: 488 op: 159
        // SubProg char_test pc: 276 op: STARTLINE (58)

        /** types.e:224					if find(lChr, char_set) > 0 then*/
        // SubProg char_test pc: 278 op: FIND_FROM (176)
        _133 = find_from(_lChr_492, _char_set_491, 1);
        // SubProg char_test pc: 283 op: GREATER_IFW_I (124)
        if (_133 <= 0)
        goto L13; // [283] 292
        // SubProg char_test pc: 287 op: STARTLINE (58)

        /** types.e:225						continue "NXTCHR"*/
        // SubProg char_test pc: 289 op: ELSE (23)
        goto L11; // [289] 303
        // SubProg char_test pc: 291 op: NOP1 (159)
L13: // addr: 292 pc: 291 sub: 488 op: 159
        // SubProg char_test pc: 292 op: NOP1 (159)
L12: // addr: 293 pc: 292 sub: 488 op: 159
        // SubProg char_test pc: 293 op: STARTLINE (58)

        /** types.e:228				return FALSE*/
        // SubProg char_test pc: 295 op: GLOBAL_INIT_CHECK (109)
        // SubProg char_test pc: 297 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
        DeRef(_test_data_490);

// block var char_set_491
        DeRefDS(_char_set_491);

// block var lChr_492
        DeRef(_128);
        _128 = NOVALUE;
        DeRef(_105);
        _105 = NOVALUE;
        DeRef(_111);
        _111 = NOVALUE;
        return _13FALSE_450;
        // SubProg char_test pc: 301 op: STARTLINE (58)

        /** types.e:229			end for*/
        // SubProg char_test pc: 303 op: ENDFOR_INT_UP1 (54)
L11: // addr: 303 pc: 303 sub: 488 op: 54
        _i_518 = _i_518 + 1;
        goto L9; // [303] 153
LA: // addr: 308 pc: 303 sub: 488 op: 54
        ;
    }
    // SubProg char_test pc: 308 op: STARTLINE (58)

    /** types.e:230			return TRUE*/
    // SubProg char_test pc: 310 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 312 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
    DeRef(_test_data_490);

// block var char_set_491
    DeRefDS(_char_set_491);

// block var lChr_492
    DeRef(_128);
    _128 = NOVALUE;
    DeRef(_105);
    _105 = NOVALUE;
    DeRef(_111);
    _111 = NOVALUE;
    return _13TRUE_452;
    // SubProg char_test pc: 316 op: ELSE (23)
    goto L6; // [316] 328
    // SubProg char_test pc: 318 op: NOP1 (159)
L7: // addr: 319 pc: 318 sub: 488 op: 159
    // SubProg char_test pc: 319 op: STARTLINE (58)

    /** types.e:232			return FALSE*/
    // SubProg char_test pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg char_test pc: 323 op: RETURNF (28)

// Exiting block BLOCK: char_test

// block var test_data_490
    DeRef(_test_data_490);

// block var char_set_491
    DeRefDS(_char_set_491);

// block var lChr_492
    DeRef(_128);
    _128 = NOVALUE;
    DeRef(_105);
    _105 = NOVALUE;
    DeRef(_111);
    _111 = NOVALUE;
    return _13FALSE_450;
    // SubProg char_test pc: 327 op: NOP1 (159)
L6: // addr: 328 pc: 327 sub: 488 op: 159
    // SubProg char_test pc: 328 op: BADRETURNF (43)
    ;
}


void _13set_default_charsets()
{
    object _198 = NOVALUE; // 614 198
    object _196 = NOVALUE; // 612 196
    object _195 = NOVALUE; // 611 195
    object _193 = NOVALUE; // 609 193
    object _190 = NOVALUE; // 606 190
    object _189 = NOVALUE; // 605 189
    object _188 = NOVALUE; // 604 188
    object _187 = NOVALUE; // 603 187
    object _184 = NOVALUE; // 600 184
    object _182 = NOVALUE; // 598 182
    object _171 = NOVALUE; // 587 171
    object _164 = NOVALUE; // 580 164
    object _161 = NOVALUE; // 577 161
    object _154 = NOVALUE; // 570 154
    object _151 = NOVALUE; // 567 151
    object _150 = NOVALUE; // 566 150
    object _149 = NOVALUE; // 565 149
    object _146 = NOVALUE; // 562 146
    object _144 = NOVALUE; // 560 144
// skipping _137  name type: 0
    object _136 = NOVALUE; // 552 136
    object _135 = NOVALUE; // 551 135
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_default_charsets pc: 1 op: STARTLINE (58)

    /** types.e:247		Defined_Sets = repeat(0, CS_LAST - CS_FIRST - 1)*/
    // SubProg set_default_charsets pc: 3 op: MINUS (10)
    _135 = 20;
    // SubProg set_default_charsets pc: 7 op: MINUS (10)
    _136 = 19;
    _135 = NOVALUE;
    // SubProg set_default_charsets pc: 11 op: REPEAT (32)
    DeRef(_13Defined_Sets_548);
    _13Defined_Sets_548 = Repeat(0, 19);
    _136 = NOVALUE;
    // SubProg set_default_charsets pc: 15 op: STARTLINE (58)

    /** types.e:248		Defined_Sets[CS_Alphabetic	] = {{'a', 'z'}, {'A', 'Z'}}*/
    // SubProg set_default_charsets pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 19 op: RIGHT_BRACE_2 (85)
    RefDS(_143);
    RefDS(_140);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _140;
    ((intptr_t *)_2)[2] = _143;
    _144 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 23 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 12);
    *(intptr_t *)_2 = _144;
    if( _1 != _144 ){
    }
    _144 = NOVALUE;
    // SubProg set_default_charsets pc: 27 op: STARTLINE (58)

    /** types.e:249		Defined_Sets[CS_Alphanumeric] = {{'0', '9'}, {'a', 'z'}, {'A', 'Z'}}*/
    // SubProg set_default_charsets pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 31 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    RefDS(_140);
    ((intptr_t*)_2)[2] = _140;
    RefDS(_143);
    ((intptr_t*)_2)[3] = _143;
    _146 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 37 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _146;
    if( _1 != _146 ){
        DeRef(_1);
    }
    _146 = NOVALUE;
    // SubProg set_default_charsets pc: 41 op: STARTLINE (58)

    /** types.e:250		Defined_Sets[CS_Identifier]   = {{'0', '9'}, {'a', 'z'}, {'A', 'Z'}, {'_', '_'}}*/
    // SubProg set_default_charsets pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 45 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    RefDS(_140);
    ((intptr_t*)_2)[2] = _140;
    RefDS(_143);
    ((intptr_t*)_2)[3] = _143;
    RefDS(_148);
    ((intptr_t*)_2)[4] = _148;
    _149 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 52 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _149;
    if( _1 != _149 ){
        DeRef(_1);
    }
    _149 = NOVALUE;
    // SubProg set_default_charsets pc: 56 op: STARTLINE (58)

    /** types.e:251		Defined_Sets[CS_Uppercase 	] = {{'A', 'Z'}}*/
    // SubProg set_default_charsets pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 60 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_143);
    ((intptr_t*)_2)[1] = _143;
    _150 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 64 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _150;
    if( _1 != _150 ){
        DeRef(_1);
    }
    _150 = NOVALUE;
    // SubProg set_default_charsets pc: 68 op: STARTLINE (58)

    /** types.e:252		Defined_Sets[CS_Lowercase 	] = {{'a', 'z'}}*/
    // SubProg set_default_charsets pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 72 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_140);
    ((intptr_t*)_2)[1] = _140;
    _151 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 76 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _151;
    if( _1 != _151 ){
        DeRef(_1);
    }
    _151 = NOVALUE;
    // SubProg set_default_charsets pc: 80 op: STARTLINE (58)

    /** types.e:253		Defined_Sets[CS_Printable 	] = {{' ', '~'}}*/
    // SubProg set_default_charsets pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_153);
    ((intptr_t*)_2)[1] = _153;
    _154 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 88 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _154;
    if( _1 != _154 ){
        DeRef(_1);
    }
    _154 = NOVALUE;
    // SubProg set_default_charsets pc: 92 op: STARTLINE (58)

    /** types.e:254		Defined_Sets[CS_Displayable ] = {{' ', '~'}, "  ", "\t\t", "\n\n", "\r\r", {8,8}, {7,7} }*/
    // SubProg set_default_charsets pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 96 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_153);
    ((intptr_t*)_2)[1] = _153;
    RefDS(_155);
    ((intptr_t*)_2)[2] = _155;
    RefDS(_156);
    ((intptr_t*)_2)[3] = _156;
    RefDS(_157);
    ((intptr_t*)_2)[4] = _157;
    RefDS(_158);
    ((intptr_t*)_2)[5] = _158;
    RefDS(_159);
    ((intptr_t*)_2)[6] = _159;
    RefDS(_160);
    ((intptr_t*)_2)[7] = _160;
    _161 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 106 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _161;
    if( _1 != _161 ){
        DeRef(_1);
    }
    _161 = NOVALUE;
    // SubProg set_default_charsets pc: 110 op: STARTLINE (58)

    /** types.e:255		Defined_Sets[CS_Whitespace 	] = " \t\n\r" & 11 & 160*/
    // SubProg set_default_charsets pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 114 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 160;
        concat_list[1] = 11;
        concat_list[2] = _162;
        Concat_N((object_ptr)&_164, concat_list, 3);
    }
    // SubProg set_default_charsets pc: 120 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _164;
    if( _1 != _164 ){
        DeRef(_1);
    }
    _164 = NOVALUE;
    // SubProg set_default_charsets pc: 124 op: STARTLINE (58)

    /** types.e:256		Defined_Sets[CS_Consonant 	] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"*/
    // SubProg set_default_charsets pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 128 op: ASSIGN_SUBS (16)
    RefDS(_165);
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _165;
    DeRef(_1);
    // SubProg set_default_charsets pc: 132 op: STARTLINE (58)

    /** types.e:257		Defined_Sets[CS_Vowel 		] = "aeiouAEIOU"*/
    // SubProg set_default_charsets pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 136 op: ASSIGN_SUBS (16)
    RefDS(_166);
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _166;
    DeRef(_1);
    // SubProg set_default_charsets pc: 140 op: STARTLINE (58)

    /** types.e:258		Defined_Sets[CS_Hexadecimal ] = {{'0', '9'}, {'A', 'F'},{'a', 'f'}}*/
    // SubProg set_default_charsets pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 144 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    RefDS(_168);
    ((intptr_t*)_2)[2] = _168;
    RefDS(_170);
    ((intptr_t*)_2)[3] = _170;
    _171 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 150 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _171;
    if( _1 != _171 ){
        DeRef(_1);
    }
    _171 = NOVALUE;
    // SubProg set_default_charsets pc: 154 op: STARTLINE (58)

    /** types.e:259		Defined_Sets[CS_Punctuation ] = {{' ', '/'}, {':', '?'}, {'[', '`'}, {'{', '~'}}*/
    // SubProg set_default_charsets pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 158 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_173);
    ((intptr_t*)_2)[1] = _173;
    RefDS(_176);
    ((intptr_t*)_2)[2] = _176;
    RefDS(_179);
    ((intptr_t*)_2)[3] = _179;
    RefDS(_181);
    ((intptr_t*)_2)[4] = _181;
    _182 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 165 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _182;
    if( _1 != _182 ){
        DeRef(_1);
    }
    _182 = NOVALUE;
    // SubProg set_default_charsets pc: 169 op: STARTLINE (58)

    /** types.e:260		Defined_Sets[CS_Control 	] = {{0, 31}, {127, 127}}*/
    // SubProg set_default_charsets pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 173 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 31;
    _184 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 177 op: RIGHT_BRACE_2 (85)
    RefDS(_186);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _184;
    ((intptr_t *)_2)[2] = _186;
    _187 = MAKE_SEQ(_1);
    _184 = NOVALUE;
    // SubProg set_default_charsets pc: 181 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _187;
    if( _1 != _187 ){
        DeRef(_1);
    }
    _187 = NOVALUE;
    // SubProg set_default_charsets pc: 185 op: STARTLINE (58)

    /** types.e:261		Defined_Sets[CS_ASCII 		] = {{0, 127}}*/
    // SubProg set_default_charsets pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 189 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 127;
    _188 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 193 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _188;
    _189 = MAKE_SEQ(_1);
    _188 = NOVALUE;
    // SubProg set_default_charsets pc: 197 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 13);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _189;
    if( _1 != _189 ){
        DeRef(_1);
    }
    _189 = NOVALUE;
    // SubProg set_default_charsets pc: 201 op: STARTLINE (58)

    /** types.e:262		Defined_Sets[CS_Digit 		] = {{'0', '9'}}*/
    // SubProg set_default_charsets pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 205 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    _190 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 209 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _190;
    if( _1 != _190 ){
        DeRef(_1);
    }
    _190 = NOVALUE;
    // SubProg set_default_charsets pc: 213 op: STARTLINE (58)

    /** types.e:263		Defined_Sets[CS_Graphic 	] = {{'!', '~'}}*/
    // SubProg set_default_charsets pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 217 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_192);
    ((intptr_t*)_2)[1] = _192;
    _193 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 221 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _193;
    if( _1 != _193 ){
        DeRef(_1);
    }
    _193 = NOVALUE;
    // SubProg set_default_charsets pc: 225 op: STARTLINE (58)

    /** types.e:264		Defined_Sets[CS_Bytes	 	] = {{0, 255}}*/
    // SubProg set_default_charsets pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 229 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 255;
    _195 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 233 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _195;
    _196 = MAKE_SEQ(_1);
    _195 = NOVALUE;
    // SubProg set_default_charsets pc: 237 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 17);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _196;
    if( _1 != _196 ){
        DeRef(_1);
    }
    _196 = NOVALUE;
    // SubProg set_default_charsets pc: 241 op: STARTLINE (58)

    /** types.e:265		Defined_Sets[CS_SpecWord 	] = "_"*/
    // SubProg set_default_charsets pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 245 op: ASSIGN_SUBS (16)
    RefDS(_197);
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 18);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _197;
    DeRef(_1);
    // SubProg set_default_charsets pc: 249 op: STARTLINE (58)

    /** types.e:266		Defined_Sets[CS_Boolean     ] = {TRUE,FALSE}*/
    // SubProg set_default_charsets pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 255 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_default_charsets pc: 257 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _13TRUE_452;
    ((intptr_t *)_2)[2] = _13FALSE_450;
    _198 = MAKE_SEQ(_1);
    // SubProg set_default_charsets pc: 261 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _2 = (object)(((s1_ptr)_2)->base + 19);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _198;
    if( _1 != _198 ){
        DeRef(_1);
    }
    _198 = NOVALUE;
    // SubProg set_default_charsets pc: 265 op: STARTLINE (58)

    /** types.e:267	end procedure*/
    // SubProg set_default_charsets pc: 267 op: RETURNP (29)

// Exiting block BLOCK: set_default_charsets
    return;
    // SubProg set_default_charsets pc: 270 op: BADRETURNF (43)
    ;
}


object _13t_identifier(object _test_data_672)
{
    object _242 = NOVALUE; // 686 242
    object _241 = NOVALUE; // 685 241
    object _240 = NOVALUE; // 684 240
    object _239 = NOVALUE; // 683 239
    object _238 = NOVALUE; // 681 238
    object _237 = NOVALUE; // 680 237
    object _236 = NOVALUE; // 679 236
    object _235 = NOVALUE; // 678 235
    object _234 = NOVALUE; // 677 234
    object _233 = NOVALUE; // 675 233
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_identifier pc: 1 op: STARTLINE (58)

    /** types.e:458		if t_digit(test_data) then*/
    // SubProg t_identifier pc: 3 op: PROC (27)
    RefDS(_test_data_672);
    _233 = _13t_digit(_test_data_672);
    // SubProg t_identifier pc: 7 op: IF (20)
    if (_233 == 0) {
        DeRef(_233);
        _233 = NOVALUE;
        goto L1; // [7] 19
    }
    else {
        if (!IS_ATOM_INT(_233) && DBL_PTR(_233)->dbl == 0.0){
            DeRef(_233);
            _233 = NOVALUE;
            goto L1; // [7] 19
        }
        DeRef(_233);
        _233 = NOVALUE;
    }
    DeRef(_233);
    _233 = NOVALUE;
    // SubProg t_identifier pc: 10 op: STARTLINE (58)

    /** types.e:459			return 0*/
    // SubProg t_identifier pc: 12 op: RETURNF (28)

// Exiting block BLOCK: t_identifier

// block var test_data_672
    DeRefDS(_test_data_672);
    return 0;
    // SubProg t_identifier pc: 16 op: ELSE (23)
    goto L2; // [16] 63
    // SubProg t_identifier pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 670 op: 159
    // SubProg t_identifier pc: 19 op: STARTLINE (58)

    /** types.e:460		elsif sequence(test_data) and length(test_data) > 0 and t_digit(test_data[1]) then*/
    // SubProg t_identifier pc: 21 op: IS_A_SEQUENCE (68)
    _234 = IS_SEQUENCE(_test_data_672);
    // SubProg t_identifier pc: 24 op: SC1_AND (141)
    if (_234 == 0) {
        _235 = 0;
        goto L3; // [24] 39
    }
    // SubProg t_identifier pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_test_data_672)){
            _236 = SEQ_PTR(_test_data_672)->length;
    }
    else {
        _236 = 1;
    }
    // SubProg t_identifier pc: 31 op: GREATER (6)
    _237 = (_236 > 0);
    _236 = NOVALUE;
    // SubProg t_identifier pc: 35 op: SC2_AND (142)
    _235 = (_237 != 0);
    // SubProg t_identifier pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 670 op: 159
    // SubProg t_identifier pc: 39 op: SC1_AND_IF (146)
    if (_235 == 0) {
        goto L4; // [39] 62
    }
    // SubProg t_identifier pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_test_data_672);
    _239 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg t_identifier pc: 47 op: PROC (27)
    Ref(_239);
    _240 = _13t_digit(_239);
    _239 = NOVALUE;
    // SubProg t_identifier pc: 51 op: NOP1 (159)
    // SubProg t_identifier pc: 52 op: IF (20)
    if (_240 == 0) {
        DeRef(_240);
        _240 = NOVALUE;
        goto L4; // [52] 62
    }
    else {
        if (!IS_ATOM_INT(_240) && DBL_PTR(_240)->dbl == 0.0){
            DeRef(_240);
            _240 = NOVALUE;
            goto L4; // [52] 62
        }
        DeRef(_240);
        _240 = NOVALUE;
    }
    DeRef(_240);
    _240 = NOVALUE;
    // SubProg t_identifier pc: 55 op: STARTLINE (58)

    /** types.e:461			return 0*/
    // SubProg t_identifier pc: 57 op: RETURNF (28)

// Exiting block BLOCK: t_identifier

// block var test_data_672
    DeRef(_test_data_672);
    DeRef(_237);
    _237 = NOVALUE;
    return 0;
    // SubProg t_identifier pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 670 op: 159
    // SubProg t_identifier pc: 62 op: NOP1 (159)
L2: // addr: 63 pc: 62 sub: 670 op: 159
    // SubProg t_identifier pc: 63 op: STARTLINE (58)

    /** types.e:464		return char_test(test_data, Defined_Sets[CS_Identifier])*/
    // SubProg t_identifier pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_identifier pc: 67 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _241 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg t_identifier pc: 71 op: PROC (27)
    Ref(_test_data_672);
    Ref(_241);
    _242 = _13char_test(_test_data_672, _241);
    _241 = NOVALUE;
    // SubProg t_identifier pc: 76 op: RETURNF (28)

// Exiting block BLOCK: t_identifier

// block var test_data_672
    DeRef(_test_data_672);
    DeRef(_237);
    _237 = NOVALUE;
    return _242;
    // SubProg t_identifier pc: 80 op: BADRETURNF (43)
    ;
}


object _13t_alpha(object _test_data_689)
{
    object _244 = NOVALUE; // 691 244
    object _243 = NOVALUE; // 690 243
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_alpha pc: 1 op: STARTLINE (58)

    /** types.e:494		return char_test(test_data, Defined_Sets[CS_Alphabetic])*/
    // SubProg t_alpha pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_alpha pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _243 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg t_alpha pc: 9 op: PROC (27)
    Ref(_test_data_689);
    Ref(_243);
    _244 = _13char_test(_test_data_689, _243);
    _243 = NOVALUE;
    // SubProg t_alpha pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_alpha

// block var test_data_689
    DeRef(_test_data_689);
    return _244;
    // SubProg t_alpha pc: 18 op: BADRETURNF (43)
    ;
}


object _13t_digit(object _test_data_704)
{
    object _250 = NOVALUE; // 706 250
    object _249 = NOVALUE; // 705 249
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_digit pc: 1 op: STARTLINE (58)

    /** types.e:587		return char_test(test_data, Defined_Sets[CS_Digit])*/
    // SubProg t_digit pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_digit pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _249 = (object)*(((s1_ptr)_2)->base + 15);
    // SubProg t_digit pc: 9 op: PROC (27)
    Ref(_test_data_704);
    Ref(_249);
    _250 = _13char_test(_test_data_704, _249);
    _249 = NOVALUE;
    // SubProg t_digit pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_digit

// block var test_data_704
    DeRef(_test_data_704);
    return _250;
    // SubProg t_digit pc: 18 op: BADRETURNF (43)
    ;
}


object _13t_specword(object _test_data_714)
{
    object _254 = NOVALUE; // 716 254
    object _253 = NOVALUE; // 715 253
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_specword pc: 1 op: STARTLINE (58)

    /** types.e:659		return char_test(test_data, Defined_Sets[CS_SpecWord])*/
    // SubProg t_specword pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_specword pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _253 = (object)*(((s1_ptr)_2)->base + 18);
    // SubProg t_specword pc: 9 op: PROC (27)
    Ref(_test_data_714);
    Ref(_253);
    _254 = _13char_test(_test_data_714, _253);
    _253 = NOVALUE;
    // SubProg t_specword pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_specword

// block var test_data_714
    DeRef(_test_data_714);
    return _254;
    // SubProg t_specword pc: 18 op: BADRETURNF (43)
    ;
}


object _13t_lower(object _test_data_724)
{
    object _258 = NOVALUE; // 726 258
    object _257 = NOVALUE; // 725 257
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_lower pc: 1 op: STARTLINE (58)

    /** types.e:727		return char_test(test_data, Defined_Sets[CS_Lowercase])*/
    // SubProg t_lower pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_lower pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _257 = (object)*(((s1_ptr)_2)->base + 8);
    // SubProg t_lower pc: 9 op: PROC (27)
    Ref(_test_data_724);
    Ref(_257);
    _258 = _13char_test(_test_data_724, _257);
    _257 = NOVALUE;
    // SubProg t_lower pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_lower

// block var test_data_724
    DeRef(_test_data_724);
    return _258;
    // SubProg t_lower pc: 18 op: BADRETURNF (43)
    ;
}


object _13t_display(object _test_data_734)
{
    object _262 = NOVALUE; // 736 262
    object _261 = NOVALUE; // 735 261
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_display pc: 1 op: STARTLINE (58)

    /** types.e:795		return char_test(test_data, Defined_Sets[CS_Displayable])*/
    // SubProg t_display pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_display pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _261 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg t_display pc: 9 op: PROC (27)
    Ref(_test_data_734);
    Ref(_261);
    _262 = _13char_test(_test_data_734, _261);
    _261 = NOVALUE;
    // SubProg t_display pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_display

// block var test_data_734
    DeRef(_test_data_734);
    return _262;
    // SubProg t_display pc: 18 op: BADRETURNF (43)
    ;
}


object _13t_upper(object _test_data_749)
{
    object _268 = NOVALUE; // 751 268
    object _267 = NOVALUE; // 750 267
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg t_upper pc: 1 op: STARTLINE (58)

    /** types.e:890		return char_test(test_data, Defined_Sets[CS_Uppercase])*/
    // SubProg t_upper pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg t_upper pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_13Defined_Sets_548);
    _267 = (object)*(((s1_ptr)_2)->base + 9);
    // SubProg t_upper pc: 9 op: PROC (27)
    Ref(_test_data_749);
    Ref(_267);
    _268 = _13char_test(_test_data_749, _267);
    _267 = NOVALUE;
    // SubProg t_upper pc: 14 op: RETURNF (28)

// Exiting block BLOCK: t_upper

// block var test_data_749
    DeRef(_test_data_749);
    return _268;
    // SubProg t_upper pc: 18 op: BADRETURNF (43)
    ;
}


object _13number_array(object _x_798)
{
// skipping _294  name type: 0
    object _293 = NOVALUE; // 807 293
    object _292 = NOVALUE; // 806 292
    object _291 = NOVALUE; // 804 291
// skipping _290  name type: 0
    object _289 = NOVALUE; // 800 289
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg number_array pc: 1 op: STARTLINE (58)

    /** types.e:1071		if not sequence(x) then*/
    // SubProg number_array pc: 3 op: IS_A_SEQUENCE (68)
    _289 = IS_SEQUENCE(_x_798);
    // SubProg number_array pc: 6 op: NOT_IFW (108)
    if (_289 != 0)
    goto L1; // [6] 16
    _289 = NOVALUE;
    // SubProg number_array pc: 9 op: STARTLINE (58)

    /** types.e:1072			return 0*/
    // SubProg number_array pc: 11 op: RETURNF (28)

// Exiting block BLOCK: number_array

// block var x_798
    DeRef(_x_798);
    return 0;
    // SubProg number_array pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 796 op: 159
    // SubProg number_array pc: 16 op: STARTLINE (58)

    /** types.e:1075		for i = 1 to length(x) do*/
    // SubProg number_array pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_798)){
            _291 = SEQ_PTR(_x_798)->length;
    }
    else {
        _291 = 1;
    }
    // SubProg number_array pc: 21 op: FOR_I (125)
    {
        object _i_803;
        _i_803 = 1;
L2: // addr: 28 pc: 21 sub: 796 op: 125
        if (_i_803 > _291){
            goto L3; // [21] 54
        }
        // SubProg number_array pc: 28 op: STARTLINE (58)

        /** types.e:1076			if not atom(x[i]) then*/
        // SubProg number_array pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_798);
        _292 = (object)*(((s1_ptr)_2)->base + _i_803);
        // SubProg number_array pc: 34 op: IS_AN_ATOM (67)
        _293 = IS_ATOM(_292);
        _292 = NOVALUE;
        // SubProg number_array pc: 37 op: NOT_IFW (108)
        if (_293 != 0)
        goto L4; // [37] 47
        _293 = NOVALUE;
        // SubProg number_array pc: 40 op: STARTLINE (58)

        /** types.e:1077				return 0*/
        // SubProg number_array pc: 42 op: RETURNF (28)

// Exiting block BLOCK: number_array

// block var x_798
        DeRef(_x_798);
        return 0;
        // SubProg number_array pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 796 op: 159
        // SubProg number_array pc: 47 op: STARTLINE (58)

        /** types.e:1079		end for*/
        // SubProg number_array pc: 49 op: ENDFOR_INT_UP1 (54)
        _i_803 = _i_803 + 1;
        goto L2; // [49] 28
L3: // addr: 54 pc: 49 sub: 796 op: 54
        ;
    }
    // SubProg number_array pc: 54 op: STARTLINE (58)

    /** types.e:1080		return 1*/
    // SubProg number_array pc: 56 op: RETURNF (28)

// Exiting block BLOCK: number_array

// block var x_798
    DeRef(_x_798);
    return 1;
    // SubProg number_array pc: 60 op: BADRETURNF (43)
    ;
}


object _13ascii_string(object _x_824)
{
// skipping _310  name type: 0
    object _309 = NOVALUE; // 839 309
// skipping _308  name type: 0
    object _307 = NOVALUE; // 836 307
// skipping _306  name type: 0
    object _305 = NOVALUE; // 833 305
    object _304 = NOVALUE; // 832 304
    object _303 = NOVALUE; // 830 303
// skipping _302  name type: 0
    object _301 = NOVALUE; // 826 301
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ascii_string pc: 1 op: STARTLINE (58)

    /** types.e:1132		if not sequence(x) then*/
    // SubProg ascii_string pc: 3 op: IS_A_SEQUENCE (68)
    _301 = IS_SEQUENCE(_x_824);
    // SubProg ascii_string pc: 6 op: NOT_IFW (108)
    if (_301 != 0)
    goto L1; // [6] 16
    _301 = NOVALUE;
    // SubProg ascii_string pc: 9 op: STARTLINE (58)

    /** types.e:1133			return 0*/
    // SubProg ascii_string pc: 11 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_824
    DeRef(_x_824);
    return 0;
    // SubProg ascii_string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 822 op: 159
    // SubProg ascii_string pc: 16 op: STARTLINE (58)

    /** types.e:1136		for i = 1 to length(x) do*/
    // SubProg ascii_string pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_824)){
            _303 = SEQ_PTR(_x_824)->length;
    }
    else {
        _303 = 1;
    }
    // SubProg ascii_string pc: 21 op: FOR_I (125)
    {
        object _i_829;
        _i_829 = 1;
L2: // addr: 28 pc: 21 sub: 822 op: 125
        if (_i_829 > _303){
            goto L3; // [21] 88
        }
        // SubProg ascii_string pc: 28 op: STARTLINE (58)

        /** types.e:1137			if not integer(x[i]) then*/
        // SubProg ascii_string pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_824);
        _304 = (object)*(((s1_ptr)_2)->base + _i_829);
        // SubProg ascii_string pc: 34 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_304))
        _305 = 1;
        else if (IS_ATOM_DBL(_304))
        _305 = IS_ATOM_INT(DoubleToInt(_304));
        else
        _305 = 0;
        _304 = NOVALUE;
        // SubProg ascii_string pc: 37 op: NOT_IFW (108)
        if (_305 != 0)
        goto L4; // [37] 47
        _305 = NOVALUE;
        // SubProg ascii_string pc: 40 op: STARTLINE (58)

        /** types.e:1138				return 0*/
        // SubProg ascii_string pc: 42 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_824
        DeRef(_x_824);
        return 0;
        // SubProg ascii_string pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 822 op: 159
        // SubProg ascii_string pc: 47 op: STARTLINE (58)

        /** types.e:1140			if x[i] < 0 then*/
        // SubProg ascii_string pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_824);
        _307 = (object)*(((s1_ptr)_2)->base + _i_829);
        // SubProg ascii_string pc: 53 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _307, 0)){
            _307 = NOVALUE;
            goto L5; // [53] 64
        }
        _307 = NOVALUE;
        // SubProg ascii_string pc: 57 op: STARTLINE (58)

        /** types.e:1141				return 0*/
        // SubProg ascii_string pc: 59 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_824
        DeRef(_x_824);
        return 0;
        // SubProg ascii_string pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 822 op: 159
        // SubProg ascii_string pc: 64 op: STARTLINE (58)

        /** types.e:1143			if x[i] > 127 then*/
        // SubProg ascii_string pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_824);
        _309 = (object)*(((s1_ptr)_2)->base + _i_829);
        // SubProg ascii_string pc: 70 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _309, 127)){
            _309 = NOVALUE;
            goto L6; // [70] 81
        }
        _309 = NOVALUE;
        // SubProg ascii_string pc: 74 op: STARTLINE (58)

        /** types.e:1144				return 0*/
        // SubProg ascii_string pc: 76 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_824
        DeRef(_x_824);
        return 0;
        // SubProg ascii_string pc: 80 op: NOP1 (159)
L6: // addr: 81 pc: 80 sub: 822 op: 159
        // SubProg ascii_string pc: 81 op: STARTLINE (58)

        /** types.e:1146		end for*/
        // SubProg ascii_string pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_829 = _i_829 + 1;
        goto L2; // [83] 28
L3: // addr: 88 pc: 83 sub: 822 op: 54
        ;
    }
    // SubProg ascii_string pc: 88 op: STARTLINE (58)

    /** types.e:1147		return 1*/
    // SubProg ascii_string pc: 90 op: RETURNF (28)

// Exiting block BLOCK: ascii_string

// block var x_824
    DeRef(_x_824);
    return 1;
    // SubProg ascii_string pc: 94 op: BADRETURNF (43)
    ;
}


object _13string(object _x_843)
{
// skipping _320  name type: 0
    object _319 = NOVALUE; // 858 319
// skipping _318  name type: 0
    object _317 = NOVALUE; // 855 317
// skipping _316  name type: 0
    object _315 = NOVALUE; // 852 315
    object _314 = NOVALUE; // 851 314
    object _313 = NOVALUE; // 849 313
// skipping _312  name type: 0
    object _311 = NOVALUE; // 845 311
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg string pc: 1 op: STARTLINE (58)

    /** types.e:1171		if not sequence(x) then*/
    // SubProg string pc: 3 op: IS_A_SEQUENCE (68)
    _311 = IS_SEQUENCE(_x_843);
    // SubProg string pc: 6 op: NOT_IFW (108)
    if (_311 != 0)
    goto L1; // [6] 16
    _311 = NOVALUE;
    // SubProg string pc: 9 op: STARTLINE (58)

    /** types.e:1172			return 0*/
    // SubProg string pc: 11 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_843
    DeRef(_x_843);
    return 0;
    // SubProg string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 841 op: 159
    // SubProg string pc: 16 op: STARTLINE (58)

    /** types.e:1175		for i = 1 to length(x) do*/
    // SubProg string pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_x_843)){
            _313 = SEQ_PTR(_x_843)->length;
    }
    else {
        _313 = 1;
    }
    // SubProg string pc: 21 op: FOR_I (125)
    {
        object _i_848;
        _i_848 = 1;
L2: // addr: 28 pc: 21 sub: 841 op: 125
        if (_i_848 > _313){
            goto L3; // [21] 88
        }
        // SubProg string pc: 28 op: STARTLINE (58)

        /** types.e:1176			if not integer(x[i]) then*/
        // SubProg string pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_843);
        _314 = (object)*(((s1_ptr)_2)->base + _i_848);
        // SubProg string pc: 34 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_314))
        _315 = 1;
        else if (IS_ATOM_DBL(_314))
        _315 = IS_ATOM_INT(DoubleToInt(_314));
        else
        _315 = 0;
        _314 = NOVALUE;
        // SubProg string pc: 37 op: NOT_IFW (108)
        if (_315 != 0)
        goto L4; // [37] 47
        _315 = NOVALUE;
        // SubProg string pc: 40 op: STARTLINE (58)

        /** types.e:1177				return 0*/
        // SubProg string pc: 42 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_843
        DeRef(_x_843);
        return 0;
        // SubProg string pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 841 op: 159
        // SubProg string pc: 47 op: STARTLINE (58)

        /** types.e:1179			if x[i] < 0 then*/
        // SubProg string pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_843);
        _317 = (object)*(((s1_ptr)_2)->base + _i_848);
        // SubProg string pc: 53 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _317, 0)){
            _317 = NOVALUE;
            goto L5; // [53] 64
        }
        _317 = NOVALUE;
        // SubProg string pc: 57 op: STARTLINE (58)

        /** types.e:1180				return 0*/
        // SubProg string pc: 59 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_843
        DeRef(_x_843);
        return 0;
        // SubProg string pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 841 op: 159
        // SubProg string pc: 64 op: STARTLINE (58)

        /** types.e:1182			if x[i] > 255 then*/
        // SubProg string pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_843);
        _319 = (object)*(((s1_ptr)_2)->base + _i_848);
        // SubProg string pc: 70 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _319, 255)){
            _319 = NOVALUE;
            goto L6; // [70] 81
        }
        _319 = NOVALUE;
        // SubProg string pc: 74 op: STARTLINE (58)

        /** types.e:1183				return 0*/
        // SubProg string pc: 76 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_843
        DeRef(_x_843);
        return 0;
        // SubProg string pc: 80 op: NOP1 (159)
L6: // addr: 81 pc: 80 sub: 841 op: 159
        // SubProg string pc: 81 op: STARTLINE (58)

        /** types.e:1185		end for*/
        // SubProg string pc: 83 op: ENDFOR_INT_UP1 (54)
        _i_848 = _i_848 + 1;
        goto L2; // [83] 28
L3: // addr: 88 pc: 83 sub: 841 op: 54
        ;
    }
    // SubProg string pc: 88 op: STARTLINE (58)

    /** types.e:1186		return 1*/
    // SubProg string pc: 90 op: RETURNF (28)

// Exiting block BLOCK: string

// block var x_843
    DeRef(_x_843);
    return 1;
    // SubProg string pc: 94 op: BADRETURNF (43)
    ;
}



// 0x7CC0718C
