// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _9char_test(object _test_data_482, object _char_set_483)
{
    object _lChr_484 = NOVALUE;
    object _133 = NOVALUE;
    object _132 = NOVALUE;
    object _131 = NOVALUE;
    object _130 = NOVALUE;
    object _129 = NOVALUE;
    object _128 = NOVALUE;
    object _127 = NOVALUE;
    object _126 = NOVALUE;
    object _125 = NOVALUE;
    object _124 = NOVALUE;
    object _123 = NOVALUE;
    object _120 = NOVALUE;
    object _119 = NOVALUE;
    object _118 = NOVALUE;
    object _117 = NOVALUE;
    object _115 = NOVALUE;
    object _113 = NOVALUE;
    object _112 = NOVALUE;
    object _111 = NOVALUE;
    object _110 = NOVALUE;
    object _109 = NOVALUE;
    object _108 = NOVALUE;
    object _107 = NOVALUE;
    object _106 = NOVALUE;
    object _105 = NOVALUE;
    object _104 = NOVALUE;
    object _103 = NOVALUE;
    object _102 = NOVALUE;
    object _101 = NOVALUE;
    object _100 = NOVALUE;
    object _99 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:194		if integer(test_data) then*/
    if (IS_ATOM_INT(_test_data_482))
    _99 = 1;
    else if (IS_ATOM_DBL(_test_data_482))
    _99 = IS_ATOM_INT(DoubleToInt(_test_data_482));
    else
    _99 = 0;
    if (_99 == 0)
    {
        _99 = NOVALUE;
        goto L1; // [8] 115
    }
    else{
        _99 = NOVALUE;
    }

    /** types.e:195			if sequence(char_set[1]) then*/
    _2 = (object)SEQ_PTR(_char_set_483);
    _100 = (object)*(((s1_ptr)_2)->base + 1);
    _101 = IS_SEQUENCE(_100);
    _100 = NOVALUE;
    if (_101 == 0)
    {
        _101 = NOVALUE;
        goto L2; // [20] 96
    }
    else{
        _101 = NOVALUE;
    }

    /** types.e:196				for j = 1 to length(char_set) do*/
    if (IS_SEQUENCE(_char_set_483)){
            _102 = SEQ_PTR(_char_set_483)->length;
    }
    else {
        _102 = 1;
    }
    {
        object _j_491;
        _j_491 = 1;
L3: 
        if (_j_491 > _102){
            goto L4; // [28] 85
        }

        /** types.e:197					if test_data >= char_set[j][1] and test_data <= char_set[j][2] then */
        _2 = (object)SEQ_PTR(_char_set_483);
        _103 = (object)*(((s1_ptr)_2)->base + _j_491);
        _2 = (object)SEQ_PTR(_103);
        _104 = (object)*(((s1_ptr)_2)->base + 1);
        _103 = NOVALUE;
        if (IS_ATOM_INT(_test_data_482) && IS_ATOM_INT(_104)) {
            _105 = (_test_data_482 >= _104);
        }
        else {
            _105 = binary_op(GREATEREQ, _test_data_482, _104);
        }
        _104 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_char_set_483);
        _107 = (object)*(((s1_ptr)_2)->base + _j_491);
        _2 = (object)SEQ_PTR(_107);
        _108 = (object)*(((s1_ptr)_2)->base + 2);
        _107 = NOVALUE;
        if (IS_ATOM_INT(_test_data_482) && IS_ATOM_INT(_108)) {
            _109 = (_test_data_482 <= _108);
        }
        else {
            _109 = binary_op(LESSEQ, _test_data_482, _108);
        }
        _108 = NOVALUE;
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

        /** types.e:198						return TRUE */
        DeRef(_test_data_482);
        DeRefDS(_char_set_483);
        DeRef(_105);
        _105 = NOVALUE;
        return _9TRUE_444;
L5: 

        /** types.e:200				end for*/
        _j_491 = _j_491 + 1;
        goto L3; // [80] 35
L4: 
        ;
    }

    /** types.e:201				return FALSE*/
    DeRef(_test_data_482);
    DeRefDS(_char_set_483);
    DeRef(_105);
    _105 = NOVALUE;
    return _9FALSE_442;
    goto L6; // [93] 328
L2: 

    /** types.e:203				return find(test_data, char_set) > 0*/
    _110 = find_from(_test_data_482, _char_set_483, 1);
    _111 = (_110 > 0);
    _110 = NOVALUE;
    DeRef(_test_data_482);
    DeRefDS(_char_set_483);
    DeRef(_105);
    _105 = NOVALUE;
    return _111;
    goto L6; // [112] 328
L1: 

    /** types.e:205		elsif sequence(test_data) then*/
    _112 = IS_SEQUENCE(_test_data_482);
    if (_112 == 0)
    {
        _112 = NOVALUE;
        goto L7; // [120] 319
    }
    else{
        _112 = NOVALUE;
    }

    /** types.e:206			if length(test_data) = 0 then */
    if (IS_SEQUENCE(_test_data_482)){
            _113 = SEQ_PTR(_test_data_482)->length;
    }
    else {
        _113 = 1;
    }
    if (_113 != 0)
    goto L8; // [128] 141

    /** types.e:207				return FALSE */
    DeRef(_test_data_482);
    DeRefDS(_char_set_483);
    DeRef(_105);
    _105 = NOVALUE;
    DeRef(_111);
    _111 = NOVALUE;
    return _9FALSE_442;
L8: 

    /** types.e:209			for i = 1 to length(test_data) label "NXTCHR" do*/
    if (IS_SEQUENCE(_test_data_482)){
            _115 = SEQ_PTR(_test_data_482)->length;
    }
    else {
        _115 = 1;
    }
    {
        object _i_510;
        _i_510 = 1;
L9: 
        if (_i_510 > _115){
            goto LA; // [146] 308
        }

        /** types.e:210				if sequence(test_data[i]) then */
        _2 = (object)SEQ_PTR(_test_data_482);
        _117 = (object)*(((s1_ptr)_2)->base + _i_510);
        _118 = IS_SEQUENCE(_117);
        _117 = NOVALUE;
        if (_118 == 0)
        {
            _118 = NOVALUE;
            goto LB; // [162] 174
        }
        else{
            _118 = NOVALUE;
        }

        /** types.e:211					return FALSE*/
        DeRef(_test_data_482);
        DeRefDS(_char_set_483);
        DeRef(_105);
        _105 = NOVALUE;
        DeRef(_111);
        _111 = NOVALUE;
        return _9FALSE_442;
LB: 

        /** types.e:213				if not integer(test_data[i]) then */
        _2 = (object)SEQ_PTR(_test_data_482);
        _119 = (object)*(((s1_ptr)_2)->base + _i_510);
        if (IS_ATOM_INT(_119))
        _120 = 1;
        else if (IS_ATOM_DBL(_119))
        _120 = IS_ATOM_INT(DoubleToInt(_119));
        else
        _120 = 0;
        _119 = NOVALUE;
        if (_120 != 0)
        goto LC; // [183] 195
        _120 = NOVALUE;

        /** types.e:214					return FALSE*/
        DeRef(_test_data_482);
        DeRefDS(_char_set_483);
        DeRef(_105);
        _105 = NOVALUE;
        DeRef(_111);
        _111 = NOVALUE;
        return _9FALSE_442;
LC: 

        /** types.e:216				lChr = test_data[i]*/
        _2 = (object)SEQ_PTR(_test_data_482);
        _lChr_484 = (object)*(((s1_ptr)_2)->base + _i_510);
        if (!IS_ATOM_INT(_lChr_484)){
            _lChr_484 = (object)DBL_PTR(_lChr_484)->dbl;
        }

        /** types.e:217				if sequence(char_set[1]) then*/
        _2 = (object)SEQ_PTR(_char_set_483);
        _123 = (object)*(((s1_ptr)_2)->base + 1);
        _124 = IS_SEQUENCE(_123);
        _123 = NOVALUE;
        if (_124 == 0)
        {
            _124 = NOVALUE;
            goto LD; // [212] 276
        }
        else{
            _124 = NOVALUE;
        }

        /** types.e:218					for j = 1 to length(char_set) do*/
        if (IS_SEQUENCE(_char_set_483)){
                _125 = SEQ_PTR(_char_set_483)->length;
        }
        else {
            _125 = 1;
        }
        {
            object _j_525;
            _j_525 = 1;
LE: 
            if (_j_525 > _125){
                goto LF; // [220] 273
            }

            /** types.e:219						if lChr >= char_set[j][1] and lChr <= char_set[j][2] then*/
            _2 = (object)SEQ_PTR(_char_set_483);
            _126 = (object)*(((s1_ptr)_2)->base + _j_525);
            _2 = (object)SEQ_PTR(_126);
            _127 = (object)*(((s1_ptr)_2)->base + 1);
            _126 = NOVALUE;
            if (IS_ATOM_INT(_127)) {
                _128 = (_lChr_484 >= _127);
            }
            else {
                _128 = binary_op(GREATEREQ, _lChr_484, _127);
            }
            _127 = NOVALUE;
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
            _2 = (object)SEQ_PTR(_char_set_483);
            _130 = (object)*(((s1_ptr)_2)->base + _j_525);
            _2 = (object)SEQ_PTR(_130);
            _131 = (object)*(((s1_ptr)_2)->base + 2);
            _130 = NOVALUE;
            if (IS_ATOM_INT(_131)) {
                _132 = (_lChr_484 <= _131);
            }
            else {
                _132 = binary_op(LESSEQ, _lChr_484, _131);
            }
            _131 = NOVALUE;
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

            /** types.e:220							continue "NXTCHR" */
            goto L11; // [263] 303
L10: 

            /** types.e:222					end for*/
            _j_525 = _j_525 + 1;
            goto LE; // [268] 227
LF: 
            ;
        }
        goto L12; // [273] 293
LD: 

        /** types.e:224					if find(lChr, char_set) > 0 then*/
        _133 = find_from(_lChr_484, _char_set_483, 1);
        if (_133 <= 0)
        goto L13; // [283] 292

        /** types.e:225						continue "NXTCHR"*/
        goto L11; // [289] 303
L13: 
L12: 

        /** types.e:228				return FALSE*/
        DeRef(_test_data_482);
        DeRefDS(_char_set_483);
        DeRef(_105);
        _105 = NOVALUE;
        DeRef(_111);
        _111 = NOVALUE;
        DeRef(_128);
        _128 = NOVALUE;
        return _9FALSE_442;

        /** types.e:229			end for*/
L11: 
        _i_510 = _i_510 + 1;
        goto L9; // [303] 153
LA: 
        ;
    }

    /** types.e:230			return TRUE*/
    DeRef(_test_data_482);
    DeRefDS(_char_set_483);
    DeRef(_105);
    _105 = NOVALUE;
    DeRef(_111);
    _111 = NOVALUE;
    DeRef(_128);
    _128 = NOVALUE;
    return _9TRUE_444;
    goto L6; // [316] 328
L7: 

    /** types.e:232			return FALSE*/
    DeRef(_test_data_482);
    DeRefDS(_char_set_483);
    DeRef(_105);
    _105 = NOVALUE;
    DeRef(_111);
    _111 = NOVALUE;
    DeRef(_128);
    _128 = NOVALUE;
    return _9FALSE_442;
L6: 
    ;
}


void _9set_default_charsets()
{
    object _198 = NOVALUE;
    object _196 = NOVALUE;
    object _195 = NOVALUE;
    object _193 = NOVALUE;
    object _190 = NOVALUE;
    object _189 = NOVALUE;
    object _188 = NOVALUE;
    object _187 = NOVALUE;
    object _184 = NOVALUE;
    object _182 = NOVALUE;
    object _171 = NOVALUE;
    object _164 = NOVALUE;
    object _161 = NOVALUE;
    object _154 = NOVALUE;
    object _151 = NOVALUE;
    object _150 = NOVALUE;
    object _149 = NOVALUE;
    object _146 = NOVALUE;
    object _144 = NOVALUE;
    object _136 = NOVALUE;
    object _135 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:247		Defined_Sets = repeat(0, CS_LAST - CS_FIRST - 1)*/
    _135 = 20;
    _136 = 19;
    _135 = NOVALUE;
    DeRef(_9Defined_Sets_540);
    _9Defined_Sets_540 = Repeat(0, 19);
    _136 = NOVALUE;

    /** types.e:248		Defined_Sets[CS_Alphabetic	] = {{'a', 'z'}, {'A', 'Z'}}*/
    RefDS(_143);
    RefDS(_140);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _140;
    ((intptr_t *)_2)[2] = _143;
    _144 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 12);
    *(intptr_t *)_2 = _144;
    if( _1 != _144 ){
    }
    _144 = NOVALUE;

    /** types.e:249		Defined_Sets[CS_Alphanumeric] = {{'0', '9'}, {'a', 'z'}, {'A', 'Z'}}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    RefDS(_140);
    ((intptr_t*)_2)[2] = _140;
    RefDS(_143);
    ((intptr_t*)_2)[3] = _143;
    _146 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _146;
    if( _1 != _146 ){
        DeRef(_1);
    }
    _146 = NOVALUE;

    /** types.e:250		Defined_Sets[CS_Identifier]   = {{'0', '9'}, {'a', 'z'}, {'A', 'Z'}, {'_', '_'}}*/
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
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _149;
    if( _1 != _149 ){
        DeRef(_1);
    }
    _149 = NOVALUE;

    /** types.e:251		Defined_Sets[CS_Uppercase 	] = {{'A', 'Z'}}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_143);
    ((intptr_t*)_2)[1] = _143;
    _150 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _150;
    if( _1 != _150 ){
        DeRef(_1);
    }
    _150 = NOVALUE;

    /** types.e:252		Defined_Sets[CS_Lowercase 	] = {{'a', 'z'}}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_140);
    ((intptr_t*)_2)[1] = _140;
    _151 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _151;
    if( _1 != _151 ){
        DeRef(_1);
    }
    _151 = NOVALUE;

    /** types.e:253		Defined_Sets[CS_Printable 	] = {{' ', '~'}}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_153);
    ((intptr_t*)_2)[1] = _153;
    _154 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _154;
    if( _1 != _154 ){
        DeRef(_1);
    }
    _154 = NOVALUE;

    /** types.e:254		Defined_Sets[CS_Displayable ] = {{' ', '~'}, "  ", "\t\t", "\n\n", "\r\r", {8,8}, {7,7} }*/
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
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _161;
    if( _1 != _161 ){
        DeRef(_1);
    }
    _161 = NOVALUE;

    /** types.e:255		Defined_Sets[CS_Whitespace 	] = " \t\n\r" & 11 & 160*/
    {
        object concat_list[3];

        concat_list[0] = 160;
        concat_list[1] = 11;
        concat_list[2] = _162;
        Concat_N((object_ptr)&_164, concat_list, 3);
    }
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _164;
    if( _1 != _164 ){
        DeRef(_1);
    }
    _164 = NOVALUE;

    /** types.e:256		Defined_Sets[CS_Consonant 	] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"*/
    RefDS(_165);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _165;
    DeRef(_1);

    /** types.e:257		Defined_Sets[CS_Vowel 		] = "aeiouAEIOU"*/
    RefDS(_166);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _166;
    DeRef(_1);

    /** types.e:258		Defined_Sets[CS_Hexadecimal ] = {{'0', '9'}, {'A', 'F'},{'a', 'f'}}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    RefDS(_168);
    ((intptr_t*)_2)[2] = _168;
    RefDS(_170);
    ((intptr_t*)_2)[3] = _170;
    _171 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _171;
    if( _1 != _171 ){
        DeRef(_1);
    }
    _171 = NOVALUE;

    /** types.e:259		Defined_Sets[CS_Punctuation ] = {{' ', '/'}, {':', '?'}, {'[', '`'}, {'{', '~'}}*/
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
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _182;
    if( _1 != _182 ){
        DeRef(_1);
    }
    _182 = NOVALUE;

    /** types.e:260		Defined_Sets[CS_Control 	] = {{0, 31}, {127, 127}}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 31;
    _184 = MAKE_SEQ(_1);
    RefDS(_186);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _184;
    ((intptr_t *)_2)[2] = _186;
    _187 = MAKE_SEQ(_1);
    _184 = NOVALUE;
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _187;
    if( _1 != _187 ){
        DeRef(_1);
    }
    _187 = NOVALUE;

    /** types.e:261		Defined_Sets[CS_ASCII 		] = {{0, 127}}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 127;
    _188 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _188;
    _189 = MAKE_SEQ(_1);
    _188 = NOVALUE;
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 13);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _189;
    if( _1 != _189 ){
        DeRef(_1);
    }
    _189 = NOVALUE;

    /** types.e:262		Defined_Sets[CS_Digit 		] = {{'0', '9'}}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_145);
    ((intptr_t*)_2)[1] = _145;
    _190 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _190;
    if( _1 != _190 ){
        DeRef(_1);
    }
    _190 = NOVALUE;

    /** types.e:263		Defined_Sets[CS_Graphic 	] = {{'!', '~'}}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_192);
    ((intptr_t*)_2)[1] = _192;
    _193 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _193;
    if( _1 != _193 ){
        DeRef(_1);
    }
    _193 = NOVALUE;

    /** types.e:264		Defined_Sets[CS_Bytes	 	] = {{0, 255}}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 255;
    _195 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _195;
    _196 = MAKE_SEQ(_1);
    _195 = NOVALUE;
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 17);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _196;
    if( _1 != _196 ){
        DeRef(_1);
    }
    _196 = NOVALUE;

    /** types.e:265		Defined_Sets[CS_SpecWord 	] = "_"*/
    RefDS(_197);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 18);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _197;
    DeRef(_1);

    /** types.e:266		Defined_Sets[CS_Boolean     ] = {TRUE,FALSE}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _9TRUE_444;
    ((intptr_t *)_2)[2] = _9FALSE_442;
    _198 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _2 = (object)(((s1_ptr)_2)->base + 19);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _198;
    if( _1 != _198 ){
        DeRef(_1);
    }
    _198 = NOVALUE;

    /** types.e:267	end procedure*/
    return;
    ;
}


object _9t_identifier(object _test_data_664)
{
    object _242 = NOVALUE;
    object _241 = NOVALUE;
    object _240 = NOVALUE;
    object _239 = NOVALUE;
    object _238 = NOVALUE;
    object _237 = NOVALUE;
    object _236 = NOVALUE;
    object _235 = NOVALUE;
    object _234 = NOVALUE;
    object _233 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:458		if t_digit(test_data) then*/
    RefDS(_test_data_664);
    _233 = _9t_digit(_test_data_664);
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

    /** types.e:459			return 0*/
    DeRefDS(_test_data_664);
    return 0;
    goto L2; // [16] 63
L1: 

    /** types.e:460		elsif sequence(test_data) and length(test_data) > 0 and t_digit(test_data[1]) then*/
    _234 = IS_SEQUENCE(_test_data_664);
    if (_234 == 0) {
        _235 = 0;
        goto L3; // [24] 39
    }
    if (IS_SEQUENCE(_test_data_664)){
            _236 = SEQ_PTR(_test_data_664)->length;
    }
    else {
        _236 = 1;
    }
    _237 = (_236 > 0);
    _236 = NOVALUE;
    _235 = (_237 != 0);
L3: 
    if (_235 == 0) {
        goto L4; // [39] 62
    }
    _2 = (object)SEQ_PTR(_test_data_664);
    _239 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_239);
    _240 = _9t_digit(_239);
    _239 = NOVALUE;
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

    /** types.e:461			return 0*/
    DeRef(_test_data_664);
    DeRef(_237);
    _237 = NOVALUE;
    return 0;
L4: 
L2: 

    /** types.e:464		return char_test(test_data, Defined_Sets[CS_Identifier])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _241 = (object)*(((s1_ptr)_2)->base + 11);
    Ref(_test_data_664);
    Ref(_241);
    _242 = _9char_test(_test_data_664, _241);
    _241 = NOVALUE;
    DeRef(_test_data_664);
    DeRef(_237);
    _237 = NOVALUE;
    return _242;
    ;
}


object _9t_alpha(object _test_data_681)
{
    object _244 = NOVALUE;
    object _243 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:494		return char_test(test_data, Defined_Sets[CS_Alphabetic])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _243 = (object)*(((s1_ptr)_2)->base + 12);
    Ref(_test_data_681);
    Ref(_243);
    _244 = _9char_test(_test_data_681, _243);
    _243 = NOVALUE;
    DeRef(_test_data_681);
    return _244;
    ;
}


object _9t_digit(object _test_data_696)
{
    object _250 = NOVALUE;
    object _249 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:587		return char_test(test_data, Defined_Sets[CS_Digit])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _249 = (object)*(((s1_ptr)_2)->base + 15);
    Ref(_test_data_696);
    Ref(_249);
    _250 = _9char_test(_test_data_696, _249);
    _249 = NOVALUE;
    DeRef(_test_data_696);
    return _250;
    ;
}


object _9t_specword(object _test_data_706)
{
    object _254 = NOVALUE;
    object _253 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:659		return char_test(test_data, Defined_Sets[CS_SpecWord])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _253 = (object)*(((s1_ptr)_2)->base + 18);
    Ref(_test_data_706);
    Ref(_253);
    _254 = _9char_test(_test_data_706, _253);
    _253 = NOVALUE;
    DeRef(_test_data_706);
    return _254;
    ;
}


object _9t_lower(object _test_data_716)
{
    object _258 = NOVALUE;
    object _257 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:727		return char_test(test_data, Defined_Sets[CS_Lowercase])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _257 = (object)*(((s1_ptr)_2)->base + 8);
    Ref(_test_data_716);
    Ref(_257);
    _258 = _9char_test(_test_data_716, _257);
    _257 = NOVALUE;
    DeRef(_test_data_716);
    return _258;
    ;
}


object _9t_display(object _test_data_726)
{
    object _262 = NOVALUE;
    object _261 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:795		return char_test(test_data, Defined_Sets[CS_Displayable])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _261 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_test_data_726);
    Ref(_261);
    _262 = _9char_test(_test_data_726, _261);
    _261 = NOVALUE;
    DeRef(_test_data_726);
    return _262;
    ;
}


object _9t_upper(object _test_data_741)
{
    object _268 = NOVALUE;
    object _267 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:890		return char_test(test_data, Defined_Sets[CS_Uppercase])*/
    _2 = (object)SEQ_PTR(_9Defined_Sets_540);
    _267 = (object)*(((s1_ptr)_2)->base + 9);
    Ref(_test_data_741);
    Ref(_267);
    _268 = _9char_test(_test_data_741, _267);
    _267 = NOVALUE;
    DeRef(_test_data_741);
    return _268;
    ;
}


object _9number_array(object _x_790)
{
    object _293 = NOVALUE;
    object _292 = NOVALUE;
    object _291 = NOVALUE;
    object _289 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:1071		if not sequence(x) then*/
    _289 = IS_SEQUENCE(_x_790);
    if (_289 != 0)
    goto L1; // [6] 16
    _289 = NOVALUE;

    /** types.e:1072			return 0*/
    DeRef(_x_790);
    return 0;
L1: 

    /** types.e:1075		for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_790)){
            _291 = SEQ_PTR(_x_790)->length;
    }
    else {
        _291 = 1;
    }
    {
        object _i_795;
        _i_795 = 1;
L2: 
        if (_i_795 > _291){
            goto L3; // [21] 54
        }

        /** types.e:1076			if not atom(x[i]) then*/
        _2 = (object)SEQ_PTR(_x_790);
        _292 = (object)*(((s1_ptr)_2)->base + _i_795);
        _293 = IS_ATOM(_292);
        _292 = NOVALUE;
        if (_293 != 0)
        goto L4; // [37] 47
        _293 = NOVALUE;

        /** types.e:1077				return 0*/
        DeRef(_x_790);
        return 0;
L4: 

        /** types.e:1079		end for*/
        _i_795 = _i_795 + 1;
        goto L2; // [49] 28
L3: 
        ;
    }

    /** types.e:1080		return 1*/
    DeRef(_x_790);
    return 1;
    ;
}


object _9ascii_string(object _x_816)
{
    object _309 = NOVALUE;
    object _307 = NOVALUE;
    object _305 = NOVALUE;
    object _304 = NOVALUE;
    object _303 = NOVALUE;
    object _301 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:1132		if not sequence(x) then*/
    _301 = IS_SEQUENCE(_x_816);
    if (_301 != 0)
    goto L1; // [6] 16
    _301 = NOVALUE;

    /** types.e:1133			return 0*/
    DeRef(_x_816);
    return 0;
L1: 

    /** types.e:1136		for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_816)){
            _303 = SEQ_PTR(_x_816)->length;
    }
    else {
        _303 = 1;
    }
    {
        object _i_821;
        _i_821 = 1;
L2: 
        if (_i_821 > _303){
            goto L3; // [21] 88
        }

        /** types.e:1137			if not integer(x[i]) then*/
        _2 = (object)SEQ_PTR(_x_816);
        _304 = (object)*(((s1_ptr)_2)->base + _i_821);
        if (IS_ATOM_INT(_304))
        _305 = 1;
        else if (IS_ATOM_DBL(_304))
        _305 = IS_ATOM_INT(DoubleToInt(_304));
        else
        _305 = 0;
        _304 = NOVALUE;
        if (_305 != 0)
        goto L4; // [37] 47
        _305 = NOVALUE;

        /** types.e:1138				return 0*/
        DeRef(_x_816);
        return 0;
L4: 

        /** types.e:1140			if x[i] < 0 then*/
        _2 = (object)SEQ_PTR(_x_816);
        _307 = (object)*(((s1_ptr)_2)->base + _i_821);
        if (binary_op_a(GREATEREQ, _307, 0)){
            _307 = NOVALUE;
            goto L5; // [53] 64
        }
        _307 = NOVALUE;

        /** types.e:1141				return 0*/
        DeRef(_x_816);
        return 0;
L5: 

        /** types.e:1143			if x[i] > 127 then*/
        _2 = (object)SEQ_PTR(_x_816);
        _309 = (object)*(((s1_ptr)_2)->base + _i_821);
        if (binary_op_a(LESSEQ, _309, 127)){
            _309 = NOVALUE;
            goto L6; // [70] 81
        }
        _309 = NOVALUE;

        /** types.e:1144				return 0*/
        DeRef(_x_816);
        return 0;
L6: 

        /** types.e:1146		end for*/
        _i_821 = _i_821 + 1;
        goto L2; // [83] 28
L3: 
        ;
    }

    /** types.e:1147		return 1*/
    DeRef(_x_816);
    return 1;
    ;
}


object _9string(object _x_835)
{
    object _319 = NOVALUE;
    object _317 = NOVALUE;
    object _315 = NOVALUE;
    object _314 = NOVALUE;
    object _313 = NOVALUE;
    object _311 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:1171		if not sequence(x) then*/
    _311 = IS_SEQUENCE(_x_835);
    if (_311 != 0)
    goto L1; // [6] 16
    _311 = NOVALUE;

    /** types.e:1172			return 0*/
    DeRef(_x_835);
    return 0;
L1: 

    /** types.e:1175		for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_835)){
            _313 = SEQ_PTR(_x_835)->length;
    }
    else {
        _313 = 1;
    }
    {
        object _i_840;
        _i_840 = 1;
L2: 
        if (_i_840 > _313){
            goto L3; // [21] 88
        }

        /** types.e:1176			if not integer(x[i]) then*/
        _2 = (object)SEQ_PTR(_x_835);
        _314 = (object)*(((s1_ptr)_2)->base + _i_840);
        if (IS_ATOM_INT(_314))
        _315 = 1;
        else if (IS_ATOM_DBL(_314))
        _315 = IS_ATOM_INT(DoubleToInt(_314));
        else
        _315 = 0;
        _314 = NOVALUE;
        if (_315 != 0)
        goto L4; // [37] 47
        _315 = NOVALUE;

        /** types.e:1177				return 0*/
        DeRef(_x_835);
        return 0;
L4: 

        /** types.e:1179			if x[i] < 0 then*/
        _2 = (object)SEQ_PTR(_x_835);
        _317 = (object)*(((s1_ptr)_2)->base + _i_840);
        if (binary_op_a(GREATEREQ, _317, 0)){
            _317 = NOVALUE;
            goto L5; // [53] 64
        }
        _317 = NOVALUE;

        /** types.e:1180				return 0*/
        DeRef(_x_835);
        return 0;
L5: 

        /** types.e:1182			if x[i] > 255 then*/
        _2 = (object)SEQ_PTR(_x_835);
        _319 = (object)*(((s1_ptr)_2)->base + _i_840);
        if (binary_op_a(LESSEQ, _319, 255)){
            _319 = NOVALUE;
            goto L6; // [70] 81
        }
        _319 = NOVALUE;

        /** types.e:1183				return 0*/
        DeRef(_x_835);
        return 0;
L6: 

        /** types.e:1185		end for*/
        _i_840 = _i_840 + 1;
        goto L2; // [83] 28
L3: 
        ;
    }

    /** types.e:1186		return 1*/
    DeRef(_x_835);
    return 1;
    ;
}


object _9cstring(object _x_854)
{
    object _329 = NOVALUE;
    object _327 = NOVALUE;
    object _325 = NOVALUE;
    object _324 = NOVALUE;
    object _323 = NOVALUE;
    object _321 = NOVALUE;
    object _0, _1, _2;
    

    /** types.e:1210		if not sequence(x) then*/
    _321 = 1;
    if (_321 != 0)
    goto L1; // [6] 16
    _321 = NOVALUE;

    /** types.e:1211			return 0*/
    DeRefDS(_x_854);
    return 0;
L1: 

    /** types.e:1214		for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_854)){
            _323 = SEQ_PTR(_x_854)->length;
    }
    else {
        _323 = 1;
    }
    {
        object _i_859;
        _i_859 = 1;
L2: 
        if (_i_859 > _323){
            goto L3; // [21] 88
        }

        /** types.e:1215			if not integer(x[i]) then*/
        _2 = (object)SEQ_PTR(_x_854);
        _324 = (object)*(((s1_ptr)_2)->base + _i_859);
        if (IS_ATOM_INT(_324))
        _325 = 1;
        else if (IS_ATOM_DBL(_324))
        _325 = IS_ATOM_INT(DoubleToInt(_324));
        else
        _325 = 0;
        _324 = NOVALUE;
        if (_325 != 0)
        goto L4; // [37] 47
        _325 = NOVALUE;

        /** types.e:1216				return 0*/
        DeRef(_x_854);
        return 0;
L4: 

        /** types.e:1218			if x[i] <= 0 then*/
        _2 = (object)SEQ_PTR(_x_854);
        _327 = (object)*(((s1_ptr)_2)->base + _i_859);
        if (binary_op_a(GREATER, _327, 0)){
            _327 = NOVALUE;
            goto L5; // [53] 64
        }
        _327 = NOVALUE;

        /** types.e:1219				return 0*/
        DeRef(_x_854);
        return 0;
L5: 

        /** types.e:1221			if x[i] > 255 then*/
        _2 = (object)SEQ_PTR(_x_854);
        _329 = (object)*(((s1_ptr)_2)->base + _i_859);
        if (binary_op_a(LESSEQ, _329, 255)){
            _329 = NOVALUE;
            goto L6; // [70] 81
        }
        _329 = NOVALUE;

        /** types.e:1222				return 0*/
        DeRef(_x_854);
        return 0;
L6: 

        /** types.e:1224		end for*/
        _i_859 = _i_859 + 1;
        goto L2; // [83] 28
L3: 
        ;
    }

    /** types.e:1225		return 1*/
    DeRef(_x_854);
    return 1;
    ;
}



// 0x5743F1A1
