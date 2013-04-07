// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _24sort(object _x_5221, object _order_5222)
{
    object _gap_5223 = NOVALUE;
    object _j_5224 = NOVALUE;
    object _first_5225 = NOVALUE;
    object _last_5226 = NOVALUE;
    object _tempi_5227 = NOVALUE;
    object _tempj_5228 = NOVALUE;
// skipping _2696  name type: 0
    object _2695 = NOVALUE; // 5255 2695
// skipping _2694  name type: 0
// skipping _2693  name type: 0
// skipping _2692  name type: 0
    object _2691 = NOVALUE; // 5248 2691
// skipping _2690  name type: 0
// skipping _2689  name type: 0
    object _2688 = NOVALUE; // 5245 2688
// skipping _2687  name type: 0
// skipping _2686  name type: 0
// skipping _2685  name type: 0
    object _2684 = NOVALUE; // 5239 2684
// skipping _2683  name type: 0
// skipping _2682  name type: 0
    object _2681 = NOVALUE; // 5233 2681
// skipping _2680  name type: 0
// skipping _2679  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sort pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg sort pc: 3 op: INTEGER_CHECK (96)
    // SubProg sort pc: 5 op: STARTLINE (58)

    /** sort.e:72		if order >= 0 then*/
    // SubProg sort pc: 7 op: GREATEREQ_IFW_I (120)
    // SubProg sort pc: 11 op: STARTLINE (58)

    /** sort.e:73			order = -1*/
    // SubProg sort pc: 13 op: ASSIGN_I (113)
    _order_5222 = -1;
    // SubProg sort pc: 16 op: ELSE (23)
    goto L1; // [16] 25
    // SubProg sort pc: 18 op: NOP1 (159)
    // SubProg sort pc: 19 op: STARTLINE (58)

    /** sort.e:75			order = 1*/
    // SubProg sort pc: 21 op: ASSIGN_I (113)
    _order_5222 = 1;
    // SubProg sort pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 5219 op: 159
    // SubProg sort pc: 25 op: STARTLINE (58)

    /** sort.e:79		last = length(x)*/
    // SubProg sort pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_x_5221)){
            _last_5226 = SEQ_PTR(_x_5221)->length;
    }
    else {
        _last_5226 = 1;
    }
    // SubProg sort pc: 30 op: STARTLINE (58)

    /** sort.e:80		gap = floor(last / 10) + 1*/
    // SubProg sort pc: 32 op: FLOOR_DIV (63)
    if (10 > 0 && _last_5226 >= 0) {
        _2681 = _last_5226 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_5226 / (eudouble)10);
        _2681 = (object)temp_dbl;
    }
    // SubProg sort pc: 36 op: PLUS1_I (117)
    _gap_5223 = _2681 + 1;
    _2681 = NOVALUE;
    // SubProg sort pc: 40 op: STARTLINE (58)

    /** sort.e:81		while 1 do*/
    // SubProg sort pc: 42 op: NOP2 (110)
    // SubProg sort pc: 44 op: NOPWHILE (158)
L2: // addr: 45 pc: 44 sub: 5219 op: 158
    // SubProg sort pc: 45 op: STARTLINE (58)

    /** sort.e:82			first = gap + 1*/
    // SubProg sort pc: 47 op: PLUS1_I (117)
    _first_5225 = _gap_5223 + 1;
    // SubProg sort pc: 51 op: STARTLINE (58)

    /** sort.e:83			for i = first to last do*/
    // SubProg sort pc: 53 op: ASSIGN (18)
    _2684 = _last_5226;
    // SubProg sort pc: 56 op: FOR_I (125)
    {
        object _i_5238;
        _i_5238 = _first_5225;
L3: // addr: 63 pc: 56 sub: 5219 op: 125
        if (_i_5238 > _2684){
            goto L4; // [56] 152
        }
        // SubProg sort pc: 63 op: STARTLINE (58)

        /** sort.e:84				tempi = x[i]*/
        // SubProg sort pc: 65 op: RHS_SUBS (25)
        DeRef(_tempi_5227);
        _2 = (object)SEQ_PTR(_x_5221);
        _tempi_5227 = (object)*(((s1_ptr)_2)->base + _i_5238);
        Ref(_tempi_5227);
        // SubProg sort pc: 69 op: STARTLINE (58)

        /** sort.e:85				j = i - gap*/
        // SubProg sort pc: 71 op: MINUS_I (116)
        _j_5224 = _i_5238 - _gap_5223;
        // SubProg sort pc: 75 op: STARTLINE (58)

        /** sort.e:86				while 1 do*/
        // SubProg sort pc: 77 op: NOP2 (110)
        // SubProg sort pc: 79 op: NOPWHILE (158)
L5: // addr: 80 pc: 79 sub: 5219 op: 158
        // SubProg sort pc: 80 op: STARTLINE (58)

        /** sort.e:87					tempj = x[j]*/
        // SubProg sort pc: 82 op: RHS_SUBS (25)
        DeRef(_tempj_5228);
        _2 = (object)SEQ_PTR(_x_5221);
        _tempj_5228 = (object)*(((s1_ptr)_2)->base + _j_5224);
        Ref(_tempj_5228);
        // SubProg sort pc: 86 op: STARTLINE (58)

        /** sort.e:88					if eu:compare(tempi, tempj) != order then*/
        // SubProg sort pc: 88 op: COMPARE (76)
        if (IS_ATOM_INT(_tempi_5227) && IS_ATOM_INT(_tempj_5228)){
            _2688 = (_tempi_5227 < _tempj_5228) ? -1 : (_tempi_5227 > _tempj_5228);
        }
        else{
            _2688 = compare(_tempi_5227, _tempj_5228);
        }
        // SubProg sort pc: 92 op: NOTEQ_IFW_I (122)
        if (_2688 == _order_5222)
        goto L6; // [92] 107
        // SubProg sort pc: 96 op: STARTLINE (58)

        /** sort.e:89						j += gap*/
        // SubProg sort pc: 98 op: PLUS_I (115)
        _j_5224 = _j_5224 + _gap_5223;
        // SubProg sort pc: 102 op: STARTLINE (58)

        /** sort.e:90						exit*/
        // SubProg sort pc: 104 op: EXIT (61)
        goto L7; // [104] 139
        // SubProg sort pc: 106 op: NOP1 (159)
L6: // addr: 107 pc: 106 sub: 5219 op: 159
        // SubProg sort pc: 107 op: STARTLINE (58)

        /** sort.e:92					x[j+gap] = tempj*/
        // SubProg sort pc: 109 op: PLUS (11)
        _2691 = _j_5224 + _gap_5223;
        // SubProg sort pc: 113 op: ASSIGN_SUBS (16)
        Ref(_tempj_5228);
        _2 = (object)SEQ_PTR(_x_5221);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5221 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _2691);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_5228;
        DeRef(_1);
        // SubProg sort pc: 117 op: STARTLINE (58)

        /** sort.e:93					if j <= gap then*/
        // SubProg sort pc: 119 op: LESSEQ_IFW_I (123)
        if (_j_5224 > _gap_5223)
        goto L8; // [119] 128
        // SubProg sort pc: 123 op: STARTLINE (58)

        /** sort.e:94						exit*/
        // SubProg sort pc: 125 op: EXIT (61)
        goto L7; // [125] 139
        // SubProg sort pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 5219 op: 159
        // SubProg sort pc: 128 op: STARTLINE (58)

        /** sort.e:96					j -= gap*/
        // SubProg sort pc: 130 op: MINUS_I (116)
        _j_5224 = _j_5224 - _gap_5223;
        // SubProg sort pc: 134 op: STARTLINE (58)

        /** sort.e:97				end while*/
        // SubProg sort pc: 136 op: ENDWHILE (22)
        goto L5; // [136] 80
        // SubProg sort pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 5219 op: 159
        // SubProg sort pc: 139 op: STARTLINE (58)

        /** sort.e:98				x[j] = tempi*/
        // SubProg sort pc: 141 op: ASSIGN_SUBS (16)
        Ref(_tempi_5227);
        _2 = (object)SEQ_PTR(_x_5221);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5221 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_5224);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_5227;
        DeRef(_1);
        // SubProg sort pc: 145 op: STARTLINE (58)

        /** sort.e:99			end for*/
        // SubProg sort pc: 147 op: ENDFOR_INT_UP1 (54)
        _i_5238 = _i_5238 + 1;
        goto L3; // [147] 63
L4: // addr: 152 pc: 147 sub: 5219 op: 54
        ;
    }
    // SubProg sort pc: 152 op: STARTLINE (58)

    /** sort.e:100			if gap = 1 then*/
    // SubProg sort pc: 154 op: EQUALS_IFW_I (121)
    if (_gap_5223 != 1)
    goto L9; // [154] 167
    // SubProg sort pc: 158 op: STARTLINE (58)

    /** sort.e:101				return x*/
    // SubProg sort pc: 160 op: RETURNF (28)

// Exiting block BLOCK: sort

// block var order_5222

// block var gap_5223

// block var j_5224

// block var first_5225

// block var last_5226

// block var tempi_5227
    DeRef(_tempi_5227);

// block var tempj_5228
    DeRef(_tempj_5228);
    DeRef(_2691);
    _2691 = NOVALUE;
    return _x_5221;
    // SubProg sort pc: 164 op: ELSE (23)
    goto L2; // [164] 45
    // SubProg sort pc: 166 op: NOP1 (159)
L9: // addr: 167 pc: 166 sub: 5219 op: 159
    // SubProg sort pc: 167 op: STARTLINE (58)

    /** sort.e:103				gap = floor(gap / 7) + 1*/
    // SubProg sort pc: 169 op: FLOOR_DIV (63)
    if (7 > 0 && _gap_5223 >= 0) {
        _2695 = _gap_5223 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_5223 / (eudouble)7);
        _2695 = (object)temp_dbl;
    }
    // SubProg sort pc: 173 op: PLUS1_I (117)
    _gap_5223 = _2695 + 1;
    _2695 = NOVALUE;
    // SubProg sort pc: 177 op: NOP1 (159)
    // SubProg sort pc: 178 op: STARTLINE (58)

    /** sort.e:105		end while*/
    // SubProg sort pc: 180 op: ENDWHILE (22)
    goto L2; // [180] 45
    // SubProg sort pc: 182 op: NOP1 (159)
    // SubProg sort pc: 183 op: BADRETURNF (43)
    ;
}


object _24custom_sort(object _custom_compare_5259, object _x_5260, object _data_5261, object _order_5262)
{
    object _gap_5263 = NOVALUE;
    object _j_5264 = NOVALUE;
    object _first_5265 = NOVALUE;
    object _last_5266 = NOVALUE;
    object _tempi_5267 = NOVALUE;
    object _tempj_5268 = NOVALUE;
    object _result_5269 = NOVALUE;
    object _args_5270 = NOVALUE;
// skipping _2724  name type: 0
    object _2723 = NOVALUE; // 5310 2723
// skipping _2722  name type: 0
// skipping _2721  name type: 0
// skipping _2720  name type: 0
    object _2719 = NOVALUE; // 5303 2719
// skipping _2718  name type: 0
// skipping _2717  name type: 0
    object _2716 = NOVALUE; // 5300 2716
// skipping _2715  name type: 0
    object _2714 = NOVALUE; // 5297 2714
    object _2713 = NOVALUE; // 5296 2713
// skipping _2712  name type: 0
// skipping _2711  name type: 0
// skipping _2710  name type: 0
// skipping _2709  name type: 0
    object _2708 = NOVALUE; // 5289 2708
// skipping _2707  name type: 0
// skipping _2706  name type: 0
    object _2705 = NOVALUE; // 5283 2705
// skipping _2704  name type: 0
// skipping _2703  name type: 0
// skipping _2702  name type: 0
    object _2701 = NOVALUE; // 5279 2701
// skipping _2700  name type: 0
    object _2699 = NOVALUE; // 5276 2699
// skipping _2698  name type: 0
// skipping _2697  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg custom_sort pc: 1 op: INTEGER_CHECK (96)
    // SubProg custom_sort pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg custom_sort pc: 5 op: INTEGER_CHECK (96)
    // SubProg custom_sort pc: 7 op: STARTLINE (58)

    /** sort.e:253		sequence args = {0, 0}*/
    // SubProg custom_sort pc: 9 op: RIGHT_BRACE_2 (85)
    DeRef(_args_5270);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _args_5270 = MAKE_SEQ(_1);
    // SubProg custom_sort pc: 13 op: STARTLINE (58)

    /** sort.e:255		if order >= 0 then*/
    // SubProg custom_sort pc: 15 op: GREATEREQ_IFW_I (120)
    // SubProg custom_sort pc: 19 op: STARTLINE (58)

    /** sort.e:256			order = -1*/
    // SubProg custom_sort pc: 21 op: ASSIGN_I (113)
    _order_5262 = -1;
    // SubProg custom_sort pc: 24 op: ELSE (23)
    goto L1; // [24] 33
    // SubProg custom_sort pc: 26 op: NOP1 (159)
    // SubProg custom_sort pc: 27 op: STARTLINE (58)

    /** sort.e:258			order = 1*/
    // SubProg custom_sort pc: 29 op: ASSIGN_I (113)
    _order_5262 = 1;
    // SubProg custom_sort pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 5257 op: 159
    // SubProg custom_sort pc: 33 op: STARTLINE (58)

    /** sort.e:261		if atom(data) then*/
    // SubProg custom_sort pc: 35 op: IS_AN_ATOM (67)
    _2699 = IS_ATOM(_data_5261);
    // SubProg custom_sort pc: 38 op: IF (20)
    if (_2699 == 0)
    {
        _2699 = NOVALUE;
        goto L2; // [38] 50
    }
    else{
        _2699 = NOVALUE;
    }
    // SubProg custom_sort pc: 41 op: STARTLINE (58)

    /** sort.e:262			args &= data*/
    // SubProg custom_sort pc: 43 op: CONCAT (15)
    if (IS_SEQUENCE(_args_5270) && IS_ATOM(_data_5261)) {
        Ref(_data_5261);
        Append(&_args_5270, _args_5270, _data_5261);
    }
    else if (IS_ATOM(_args_5270) && IS_SEQUENCE(_data_5261)) {
    }
    else {
        Concat((object_ptr)&_args_5270, _args_5270, _data_5261);
    }
    // SubProg custom_sort pc: 47 op: ELSE (23)
    goto L3; // [47] 70
    // SubProg custom_sort pc: 49 op: NOP1 (159)
L2: // addr: 50 pc: 49 sub: 5257 op: 159
    // SubProg custom_sort pc: 50 op: STARTLINE (58)

    /** sort.e:263		elsif length(data) then*/
    // SubProg custom_sort pc: 52 op: LENGTH (42)
    // Known sequence length:
    _2701 = 0;
    // SubProg custom_sort pc: 55 op: IF (20)
    // SubProg custom_sort pc: 69 op: NOP1 (159)
L3: // addr: 70 pc: 69 sub: 5257 op: 159
    // SubProg custom_sort pc: 70 op: STARTLINE (58)

    /** sort.e:267		last = length(x)*/
    // SubProg custom_sort pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_x_5260)){
            _last_5266 = SEQ_PTR(_x_5260)->length;
    }
    else {
        _last_5266 = 1;
    }
    // SubProg custom_sort pc: 75 op: STARTLINE (58)

    /** sort.e:268		gap = floor(last / 10) + 1*/
    // SubProg custom_sort pc: 77 op: FLOOR_DIV (63)
    if (10 > 0 && _last_5266 >= 0) {
        _2705 = _last_5266 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_5266 / (eudouble)10);
        _2705 = (object)temp_dbl;
    }
    // SubProg custom_sort pc: 81 op: PLUS1_I (117)
    _gap_5263 = _2705 + 1;
    _2705 = NOVALUE;
    // SubProg custom_sort pc: 85 op: STARTLINE (58)

    /** sort.e:269		while 1 do*/
    // SubProg custom_sort pc: 87 op: NOP2 (110)
    // SubProg custom_sort pc: 89 op: NOPWHILE (158)
L4: // addr: 90 pc: 89 sub: 5257 op: 158
    // SubProg custom_sort pc: 90 op: STARTLINE (58)

    /** sort.e:270			first = gap + 1*/
    // SubProg custom_sort pc: 92 op: PLUS1_I (117)
    _first_5265 = _gap_5263 + 1;
    // SubProg custom_sort pc: 96 op: STARTLINE (58)

    /** sort.e:271			for i = first to last do*/
    // SubProg custom_sort pc: 98 op: ASSIGN (18)
    _2708 = _last_5266;
    // SubProg custom_sort pc: 101 op: FOR_I (125)
    {
        object _i_5288;
        _i_5288 = _first_5265;
L5: // addr: 108 pc: 101 sub: 5257 op: 125
        if (_i_5288 > _2708){
            goto L6; // [101] 240
        }
        // SubProg custom_sort pc: 108 op: STARTLINE (58)

        /** sort.e:272				tempi = x[i]*/
        // SubProg custom_sort pc: 110 op: RHS_SUBS (25)
        DeRef(_tempi_5267);
        _2 = (object)SEQ_PTR(_x_5260);
        _tempi_5267 = (object)*(((s1_ptr)_2)->base + _i_5288);
        Ref(_tempi_5267);
        // SubProg custom_sort pc: 114 op: STARTLINE (58)

        /** sort.e:273				args[1] = tempi*/
        // SubProg custom_sort pc: 116 op: ASSIGN_SUBS (16)
        Ref(_tempi_5267);
        _2 = (object)SEQ_PTR(_args_5270);
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_5267;
        DeRef(_1);
        // SubProg custom_sort pc: 120 op: STARTLINE (58)

        /** sort.e:274				j = i - gap*/
        // SubProg custom_sort pc: 122 op: MINUS_I (116)
        _j_5264 = _i_5288 - _gap_5263;
        // SubProg custom_sort pc: 126 op: STARTLINE (58)

        /** sort.e:275				while 1 do*/
        // SubProg custom_sort pc: 128 op: NOP2 (110)
        // SubProg custom_sort pc: 130 op: NOPWHILE (158)
L7: // addr: 131 pc: 130 sub: 5257 op: 158
        // SubProg custom_sort pc: 131 op: STARTLINE (58)

        /** sort.e:276					tempj = x[j]*/
        // SubProg custom_sort pc: 133 op: RHS_SUBS (25)
        DeRef(_tempj_5268);
        _2 = (object)SEQ_PTR(_x_5260);
        _tempj_5268 = (object)*(((s1_ptr)_2)->base + _j_5264);
        Ref(_tempj_5268);
        // SubProg custom_sort pc: 137 op: STARTLINE (58)

        /** sort.e:277					args[2] = tempj*/
        // SubProg custom_sort pc: 139 op: ASSIGN_SUBS (16)
        Ref(_tempj_5268);
        _2 = (object)SEQ_PTR(_args_5270);
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_5268;
        DeRef(_1);
        // SubProg custom_sort pc: 143 op: STARTLINE (58)

        /** sort.e:278					result = call_func(custom_compare, args)*/
        // SubProg custom_sort pc: 145 op: CALL_FUNC (137)
        _1 = (object)SEQ_PTR(_args_5270);
        _2 = (object)((s1_ptr)_1)->base;
        _0 = (object)_00[_custom_compare_5259].addr;
        switch(((s1_ptr)_1)->length) {
            case 0:
                _1 = (*(intptr_t (*)())_0)(
                                     );
                break;
            case 1:
                Ref( *(( (intptr_t*)_2) + 1) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1)
                                     );
                break;
            case 2:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2)
                                     );
                break;
            case 3:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3)
                                     );
                break;
            case 4:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4)
                                     );
                break;
            case 5:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5)
                                     );
                break;
            case 6:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6)
                                     );
                break;
            case 7:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                Ref( *(( (intptr_t*)_2) + 7) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6), 
                                    *( ((intptr_t *)_2) + 7)
                                     );
                break;
            case 8:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                Ref( *(( (intptr_t*)_2) + 7) );
                Ref( *(( (intptr_t*)_2) + 8) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6), 
                                    *( ((intptr_t *)_2) + 7), 
                                    *( ((intptr_t *)_2) + 8)
                                     );
                break;
            case 9:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                Ref( *(( (intptr_t*)_2) + 7) );
                Ref( *(( (intptr_t*)_2) + 8) );
                Ref( *(( (intptr_t*)_2) + 9) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6), 
                                    *( ((intptr_t *)_2) + 7), 
                                    *( ((intptr_t *)_2) + 8), 
                                    *( ((intptr_t *)_2) + 9)
                                     );
                break;
            case 10:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                Ref( *(( (intptr_t*)_2) + 7) );
                Ref( *(( (intptr_t*)_2) + 8) );
                Ref( *(( (intptr_t*)_2) + 9) );
                Ref( *(( (intptr_t*)_2) + 10) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6), 
                                    *( ((intptr_t *)_2) + 7), 
                                    *( ((intptr_t *)_2) + 8), 
                                    *( ((intptr_t *)_2) + 9), 
                                    *( ((intptr_t *)_2) + 10)
                                     );
                break;
            case 11:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                Ref( *(( (intptr_t*)_2) + 7) );
                Ref( *(( (intptr_t*)_2) + 8) );
                Ref( *(( (intptr_t*)_2) + 9) );
                Ref( *(( (intptr_t*)_2) + 10) );
                Ref( *(( (intptr_t*)_2) + 11) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6), 
                                    *( ((intptr_t *)_2) + 7), 
                                    *( ((intptr_t *)_2) + 8), 
                                    *( ((intptr_t *)_2) + 9), 
                                    *( ((intptr_t *)_2) + 10), 
                                    *( ((intptr_t *)_2) + 11)
                                     );
                break;
            case 12:
                Ref( *(( (intptr_t*)_2) + 1) );
                Ref( *(( (intptr_t*)_2) + 2) );
                Ref( *(( (intptr_t*)_2) + 3) );
                Ref( *(( (intptr_t*)_2) + 4) );
                Ref( *(( (intptr_t*)_2) + 5) );
                Ref( *(( (intptr_t*)_2) + 6) );
                Ref( *(( (intptr_t*)_2) + 7) );
                Ref( *(( (intptr_t*)_2) + 8) );
                Ref( *(( (intptr_t*)_2) + 9) );
                Ref( *(( (intptr_t*)_2) + 10) );
                Ref( *(( (intptr_t*)_2) + 11) );
                Ref( *(( (intptr_t*)_2) + 12) );
                _1 = (*(intptr_t (*)())_0)(
                                    *( ((intptr_t *)_2) + 1), 
                                    *( ((intptr_t *)_2) + 2), 
                                    *( ((intptr_t *)_2) + 3), 
                                    *( ((intptr_t *)_2) + 4), 
                                    *( ((intptr_t *)_2) + 5), 
                                    *( ((intptr_t *)_2) + 6), 
                                    *( ((intptr_t *)_2) + 7), 
                                    *( ((intptr_t *)_2) + 8), 
                                    *( ((intptr_t *)_2) + 9), 
                                    *( ((intptr_t *)_2) + 10), 
                                    *( ((intptr_t *)_2) + 11), 
                                    *( ((intptr_t *)_2) + 12)
                                     );
                break;
        }
        DeRef(_result_5269);
        _result_5269 = _1;
        // SubProg custom_sort pc: 149 op: STARTLINE (58)

        /** sort.e:279					if sequence(result) then*/
        // SubProg custom_sort pc: 151 op: IS_A_SEQUENCE (68)
        _2713 = IS_SEQUENCE(_result_5269);
        // SubProg custom_sort pc: 154 op: IF (20)
        if (_2713 == 0)
        {
            _2713 = NOVALUE;
            goto L8; // [154] 174
        }
        else{
            _2713 = NOVALUE;
        }
        // SubProg custom_sort pc: 157 op: STARTLINE (58)

        /** sort.e:280						args[3] = result[2]*/
        // SubProg custom_sort pc: 159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_result_5269);
        _2714 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg custom_sort pc: 163 op: ASSIGN_SUBS (16)
        Ref(_2714);
        _2 = (object)SEQ_PTR(_args_5270);
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2714;
        if( _1 != _2714 ){
            DeRef(_1);
        }
        _2714 = NOVALUE;
        // SubProg custom_sort pc: 167 op: STARTLINE (58)

        /** sort.e:281						result = result[1]*/
        // SubProg custom_sort pc: 169 op: RHS_SUBS_CHECK (92)
        _0 = _result_5269;
        _2 = (object)SEQ_PTR(_result_5269);
        _result_5269 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_result_5269);
        DeRef(_0);
        // SubProg custom_sort pc: 173 op: NOP1 (159)
L8: // addr: 174 pc: 173 sub: 5257 op: 159
        // SubProg custom_sort pc: 174 op: STARTLINE (58)

        /** sort.e:283					if eu:compare(result, 0) != order then*/
        // SubProg custom_sort pc: 176 op: COMPARE (76)
        if (IS_ATOM_INT(_result_5269) && IS_ATOM_INT(0)){
            _2716 = (_result_5269 < 0) ? -1 : (_result_5269 > 0);
        }
        else{
            _2716 = compare(_result_5269, 0);
        }
        // SubProg custom_sort pc: 180 op: NOTEQ_IFW_I (122)
        if (_2716 == _order_5262)
        goto L9; // [180] 195
        // SubProg custom_sort pc: 184 op: STARTLINE (58)

        /** sort.e:284						j += gap*/
        // SubProg custom_sort pc: 186 op: PLUS_I (115)
        _j_5264 = _j_5264 + _gap_5263;
        // SubProg custom_sort pc: 190 op: STARTLINE (58)

        /** sort.e:285						exit*/
        // SubProg custom_sort pc: 192 op: EXIT (61)
        goto LA; // [192] 227
        // SubProg custom_sort pc: 194 op: NOP1 (159)
L9: // addr: 195 pc: 194 sub: 5257 op: 159
        // SubProg custom_sort pc: 195 op: STARTLINE (58)

        /** sort.e:287					x[j+gap] = tempj*/
        // SubProg custom_sort pc: 197 op: PLUS (11)
        _2719 = _j_5264 + _gap_5263;
        // SubProg custom_sort pc: 201 op: ASSIGN_SUBS (16)
        Ref(_tempj_5268);
        _2 = (object)SEQ_PTR(_x_5260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _2719);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_5268;
        DeRef(_1);
        // SubProg custom_sort pc: 205 op: STARTLINE (58)

        /** sort.e:288					if j <= gap then*/
        // SubProg custom_sort pc: 207 op: LESSEQ_IFW_I (123)
        if (_j_5264 > _gap_5263)
        goto LB; // [207] 216
        // SubProg custom_sort pc: 211 op: STARTLINE (58)

        /** sort.e:289						exit*/
        // SubProg custom_sort pc: 213 op: EXIT (61)
        goto LA; // [213] 227
        // SubProg custom_sort pc: 215 op: NOP1 (159)
LB: // addr: 216 pc: 215 sub: 5257 op: 159
        // SubProg custom_sort pc: 216 op: STARTLINE (58)

        /** sort.e:291					j -= gap*/
        // SubProg custom_sort pc: 218 op: MINUS_I (116)
        _j_5264 = _j_5264 - _gap_5263;
        // SubProg custom_sort pc: 222 op: STARTLINE (58)

        /** sort.e:292				end while*/
        // SubProg custom_sort pc: 224 op: ENDWHILE (22)
        goto L7; // [224] 131
        // SubProg custom_sort pc: 226 op: NOP1 (159)
LA: // addr: 227 pc: 226 sub: 5257 op: 159
        // SubProg custom_sort pc: 227 op: STARTLINE (58)

        /** sort.e:293				x[j] = tempi*/
        // SubProg custom_sort pc: 229 op: ASSIGN_SUBS (16)
        Ref(_tempi_5267);
        _2 = (object)SEQ_PTR(_x_5260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_5264);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_5267;
        DeRef(_1);
        // SubProg custom_sort pc: 233 op: STARTLINE (58)

        /** sort.e:294			end for*/
        // SubProg custom_sort pc: 235 op: ENDFOR_INT_UP1 (54)
        _i_5288 = _i_5288 + 1;
        goto L5; // [235] 108
L6: // addr: 240 pc: 235 sub: 5257 op: 54
        ;
    }
    // SubProg custom_sort pc: 240 op: STARTLINE (58)

    /** sort.e:295			if gap = 1 then*/
    // SubProg custom_sort pc: 242 op: EQUALS_IFW_I (121)
    if (_gap_5263 != 1)
    goto LC; // [242] 255
    // SubProg custom_sort pc: 246 op: STARTLINE (58)

    /** sort.e:296				return x*/
    // SubProg custom_sort pc: 248 op: RETURNF (28)

// Exiting block BLOCK: custom_sort

// block var custom_compare_5259

// block var data_5261
    DeRef(_data_5261);

// block var order_5262

// block var gap_5263

// block var j_5264

// block var first_5265

// block var last_5266

// block var tempi_5267
    DeRef(_tempi_5267);

// block var tempj_5268
    DeRef(_tempj_5268);

// block var result_5269
    DeRef(_result_5269);

// block var args_5270
    DeRef(_args_5270);
    DeRef(_2719);
    _2719 = NOVALUE;
    return _x_5260;
    // SubProg custom_sort pc: 252 op: ELSE (23)
    goto L4; // [252] 90
    // SubProg custom_sort pc: 254 op: NOP1 (159)
LC: // addr: 255 pc: 254 sub: 5257 op: 159
    // SubProg custom_sort pc: 255 op: STARTLINE (58)

    /** sort.e:298				gap = floor(gap / 7) + 1*/
    // SubProg custom_sort pc: 257 op: FLOOR_DIV (63)
    if (7 > 0 && _gap_5263 >= 0) {
        _2723 = _gap_5263 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_5263 / (eudouble)7);
        _2723 = (object)temp_dbl;
    }
    // SubProg custom_sort pc: 261 op: PLUS1_I (117)
    _gap_5263 = _2723 + 1;
    _2723 = NOVALUE;
    // SubProg custom_sort pc: 265 op: NOP1 (159)
    // SubProg custom_sort pc: 266 op: STARTLINE (58)

    /** sort.e:300		end while*/
    // SubProg custom_sort pc: 268 op: ENDWHILE (22)
    goto L4; // [268] 90
    // SubProg custom_sort pc: 270 op: NOP1 (159)
    // SubProg custom_sort pc: 271 op: BADRETURNF (43)
    ;
}


object _24column_compare(object _a_5314, object _b_5315, object _cols_5316)
{
    object _sign_5317 = NOVALUE;
    object _column_5318 = NOVALUE;
    object _2746 = NOVALUE; // 5350 2746
// skipping _2745  name type: 0
    object _2744 = NOVALUE; // 5348 2744
    object _2743 = NOVALUE; // 5345 2743
    object _2742 = NOVALUE; // 5343 2742
    object _2741 = NOVALUE; // 5342 2741
    object _2740 = NOVALUE; // 5341 2740
    object _2739 = NOVALUE; // 5340 2739
// skipping _2738  name type: 0
    object _2737 = NOVALUE; // 5338 2737
    object _2736 = NOVALUE; // 5337 2736
    object _2735 = NOVALUE; // 5336 2735
// skipping _2734  name type: 0
    object _2733 = NOVALUE; // 5333 2733
// skipping _2732  name type: 0
    object _2731 = NOVALUE; // 5330 2731
// skipping _2730  name type: 0
// skipping _2729  name type: 0
    object _2728 = NOVALUE; // 5325 2728
// skipping _2727  name type: 0
    object _2726 = NOVALUE; // 5323 2726
    object _2725 = NOVALUE; // 5321 2725
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg column_compare pc: 1 op: STARTLINE (58)

    /** sort.e:309		for i = 1 to length(cols) do*/
    // SubProg column_compare pc: 3 op: LENGTH (42)
    if (IS_SEQUENCE(_cols_5316)){
            _2725 = SEQ_PTR(_cols_5316)->length;
    }
    else {
        _2725 = 1;
    }
    // SubProg column_compare pc: 6 op: FOR_I (125)
    {
        object _i_5320;
        _i_5320 = 1;
L1: // addr: 13 pc: 6 sub: 5312 op: 125
        if (_i_5320 > _2725){
            goto L2; // [6] 176
        }
        // SubProg column_compare pc: 13 op: STARTLINE (58)

        /** sort.e:310			if cols[i] < 0 then*/
        // SubProg column_compare pc: 15 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_5316);
        _2726 = (object)*(((s1_ptr)_2)->base + _i_5320);
        // SubProg column_compare pc: 19 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _2726, 0)){
            _2726 = NOVALUE;
            goto L3; // [19] 42
        }
        _2726 = NOVALUE;
        // SubProg column_compare pc: 23 op: STARTLINE (58)

        /** sort.e:311				sign = -1*/
        // SubProg column_compare pc: 25 op: ASSIGN_I (113)
        _sign_5317 = -1;
        // SubProg column_compare pc: 28 op: STARTLINE (58)

        /** sort.e:312				column = -cols[i]*/
        // SubProg column_compare pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_5316);
        _2728 = (object)*(((s1_ptr)_2)->base + _i_5320);
        // SubProg column_compare pc: 34 op: UMINUS (12)
        if (IS_ATOM_INT(_2728)) {
            if ((uintptr_t)_2728 == (uintptr_t)HIGH_BITS){
                _column_5318 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _column_5318 = - _2728;
            }
        }
        else {
            _column_5318 = unary_op(UMINUS, _2728);
        }
        _2728 = NOVALUE;
        // SubProg column_compare pc: 37 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_column_5318)) {
            _1 = (object)(DBL_PTR(_column_5318)->dbl);
            DeRefDS(_column_5318);
            _column_5318 = _1;
        }
        // SubProg column_compare pc: 39 op: ELSE (23)
        goto L4; // [39] 56
        // SubProg column_compare pc: 41 op: NOP1 (159)
L3: // addr: 42 pc: 41 sub: 5312 op: 159
        // SubProg column_compare pc: 42 op: STARTLINE (58)

        /** sort.e:314				sign = 1*/
        // SubProg column_compare pc: 44 op: ASSIGN_I (113)
        _sign_5317 = 1;
        // SubProg column_compare pc: 47 op: STARTLINE (58)

        /** sort.e:315				column = cols[i]*/
        // SubProg column_compare pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_5316);
        _column_5318 = (object)*(((s1_ptr)_2)->base + _i_5320);
        if (!IS_ATOM_INT(_column_5318)){
            _column_5318 = (object)DBL_PTR(_column_5318)->dbl;
        }
        // SubProg column_compare pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 5312 op: 159
        // SubProg column_compare pc: 56 op: STARTLINE (58)

        /** sort.e:317			if column <= length(a) then*/
        // SubProg column_compare pc: 58 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 60 op: LENGTH (42)
        if (IS_SEQUENCE(_a_5314)){
                _2731 = SEQ_PTR(_a_5314)->length;
        }
        else {
            _2731 = 1;
        }
        // SubProg column_compare pc: 63 op: LESSEQ_IFW_I (123)
        if (_column_5318 > _2731)
        goto L5; // [63] 137
        // SubProg column_compare pc: 67 op: STARTLINE (58)

        /** sort.e:318				if column <= length(b) then*/
        // SubProg column_compare pc: 69 op: LENGTH (42)
        if (IS_SEQUENCE(_b_5315)){
                _2733 = SEQ_PTR(_b_5315)->length;
        }
        else {
            _2733 = 1;
        }
        // SubProg column_compare pc: 72 op: LESSEQ_IFW_I (123)
        if (_column_5318 > _2733)
        goto L6; // [72] 121
        // SubProg column_compare pc: 76 op: STARTLINE (58)

        /** sort.e:319					if not equal(a[column], b[column]) then*/
        // SubProg column_compare pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_5314);
        _2735 = (object)*(((s1_ptr)_2)->base + _column_5318);
        // SubProg column_compare pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_b_5315);
        _2736 = (object)*(((s1_ptr)_2)->base + _column_5318);
        // SubProg column_compare pc: 86 op: EQUAL (153)
        if (_2735 == _2736)
        _2737 = 1;
        else if (IS_ATOM_INT(_2735) && IS_ATOM_INT(_2736))
        _2737 = 0;
        else
        _2737 = (compare(_2735, _2736) == 0);
        _2735 = NOVALUE;
        _2736 = NOVALUE;
        // SubProg column_compare pc: 90 op: NOT_IFW (108)
        if (_2737 != 0)
        goto L7; // [90] 169
        _2737 = NOVALUE;
        // SubProg column_compare pc: 93 op: STARTLINE (58)

        /** sort.e:320						return sign * eu:compare(a[column], b[column])*/
        // SubProg column_compare pc: 95 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 97 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_5314);
        _2739 = (object)*(((s1_ptr)_2)->base + _column_5318);
        // SubProg column_compare pc: 101 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_b_5315);
        _2740 = (object)*(((s1_ptr)_2)->base + _column_5318);
        // SubProg column_compare pc: 105 op: COMPARE (76)
        if (IS_ATOM_INT(_2739) && IS_ATOM_INT(_2740)){
            _2741 = (_2739 < _2740) ? -1 : (_2739 > _2740);
        }
        else{
            _2741 = compare(_2739, _2740);
        }
        _2739 = NOVALUE;
        _2740 = NOVALUE;
        // SubProg column_compare pc: 109 op: MULTIPLY (13)
        if (_sign_5317 == (short)_sign_5317){
            _2742 = _sign_5317 * _2741;
        }
        else{
            _2742 = NewDouble(_sign_5317 * (eudouble)_2741);
        }
        _2741 = NOVALUE;
        // SubProg column_compare pc: 113 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_5314
        DeRef(_a_5314);

// block var b_5315
        DeRef(_b_5315);

// block var cols_5316
        DeRef(_cols_5316);

// block var sign_5317

// block var column_5318
        return _2742;
        // SubProg column_compare pc: 117 op: NOP1 (159)
        // SubProg column_compare pc: 118 op: ELSE (23)
        goto L7; // [118] 169
        // SubProg column_compare pc: 120 op: NOP1 (159)
L6: // addr: 121 pc: 120 sub: 5312 op: 159
        // SubProg column_compare pc: 121 op: STARTLINE (58)

        /** sort.e:323					return sign * -1*/
        // SubProg column_compare pc: 123 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 125 op: MULTIPLY (13)
        if (_sign_5317 == (short)_sign_5317){
            _2743 = _sign_5317 * -1;
        }
        else{
            _2743 = NewDouble(_sign_5317 * (eudouble)-1);
        }
        // SubProg column_compare pc: 129 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_5314
        DeRef(_a_5314);

// block var b_5315
        DeRef(_b_5315);

// block var cols_5316
        DeRef(_cols_5316);

// block var sign_5317

// block var column_5318
        DeRef(_2742);
        _2742 = NOVALUE;
        return _2743;
        // SubProg column_compare pc: 133 op: NOP1 (159)
        // SubProg column_compare pc: 134 op: ELSE (23)
        goto L7; // [134] 169
        // SubProg column_compare pc: 136 op: NOP1 (159)
L5: // addr: 137 pc: 136 sub: 5312 op: 159
        // SubProg column_compare pc: 137 op: STARTLINE (58)

        /** sort.e:326				if column <= length(b) then*/
        // SubProg column_compare pc: 139 op: LENGTH (42)
        if (IS_SEQUENCE(_b_5315)){
                _2744 = SEQ_PTR(_b_5315)->length;
        }
        else {
            _2744 = 1;
        }
        // SubProg column_compare pc: 142 op: LESSEQ_IFW_I (123)
        if (_column_5318 > _2744)
        goto L8; // [142] 161
        // SubProg column_compare pc: 146 op: STARTLINE (58)

        /** sort.e:327					return sign * 1*/
        // SubProg column_compare pc: 148 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 150 op: MULTIPLY (13)
        _2746 = _sign_5317 * 1;
        // SubProg column_compare pc: 154 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_5314
        DeRef(_a_5314);

// block var b_5315
        DeRef(_b_5315);

// block var cols_5316
        DeRef(_cols_5316);

// block var sign_5317

// block var column_5318
        DeRef(_2743);
        _2743 = NOVALUE;
        DeRef(_2742);
        _2742 = NOVALUE;
        return _2746;
        // SubProg column_compare pc: 158 op: ELSE (23)
        goto L9; // [158] 168
        // SubProg column_compare pc: 160 op: NOP1 (159)
L8: // addr: 161 pc: 160 sub: 5312 op: 159
        // SubProg column_compare pc: 161 op: STARTLINE (58)

        /** sort.e:329					return 0*/
        // SubProg column_compare pc: 163 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_5314
        DeRef(_a_5314);

// block var b_5315
        DeRef(_b_5315);

// block var cols_5316
        DeRef(_cols_5316);

// block var sign_5317

// block var column_5318
        DeRef(_2746);
        _2746 = NOVALUE;
        DeRef(_2743);
        _2743 = NOVALUE;
        DeRef(_2742);
        _2742 = NOVALUE;
        return 0;
        // SubProg column_compare pc: 167 op: NOP1 (159)
L9: // addr: 168 pc: 167 sub: 5312 op: 159
        // SubProg column_compare pc: 168 op: NOP1 (159)
L7: // addr: 169 pc: 168 sub: 5312 op: 159
        // SubProg column_compare pc: 169 op: STARTLINE (58)

        /** sort.e:332		end for*/
        // SubProg column_compare pc: 171 op: ENDFOR_INT_UP1 (54)
        _i_5320 = _i_5320 + 1;
        goto L1; // [171] 13
L2: // addr: 176 pc: 171 sub: 5312 op: 54
        ;
    }
    // SubProg column_compare pc: 176 op: STARTLINE (58)

    /** sort.e:333		return 0*/
    // SubProg column_compare pc: 178 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_5314
    DeRef(_a_5314);

// block var b_5315
    DeRef(_b_5315);

// block var cols_5316
    DeRef(_cols_5316);

// block var sign_5317

// block var column_5318
    DeRef(_2746);
    _2746 = NOVALUE;
    DeRef(_2743);
    _2743 = NOVALUE;
    DeRef(_2742);
    _2742 = NOVALUE;
    return 0;
    // SubProg column_compare pc: 182 op: BADRETURNF (43)
    ;
}



// 0xE836FC96
