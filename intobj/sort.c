// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _25sort(object _x_3543, object _order_3544)
{
    object _gap_3545 = NOVALUE;
    object _j_3546 = NOVALUE;
    object _first_3547 = NOVALUE;
    object _last_3548 = NOVALUE;
    object _tempi_3549 = NOVALUE;
    object _tempj_3550 = NOVALUE;
// skipping _1655  name type: 0
    object _1654 = NOVALUE; // 3577 1654
// skipping _1653  name type: 0
// skipping _1652  name type: 0
// skipping _1651  name type: 0
    object _1650 = NOVALUE; // 3570 1650
// skipping _1649  name type: 0
// skipping _1648  name type: 0
    object _1647 = NOVALUE; // 3567 1647
// skipping _1646  name type: 0
// skipping _1645  name type: 0
// skipping _1644  name type: 0
    object _1643 = NOVALUE; // 3561 1643
// skipping _1642  name type: 0
// skipping _1641  name type: 0
    object _1640 = NOVALUE; // 3555 1640
// skipping _1639  name type: 0
// skipping _1638  name type: 0
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
    _order_3544 = -1;
    // SubProg sort pc: 16 op: ELSE (23)
    goto L1; // [16] 25
    // SubProg sort pc: 18 op: NOP1 (159)
    // SubProg sort pc: 19 op: STARTLINE (58)

    /** sort.e:75			order = 1*/
    // SubProg sort pc: 21 op: ASSIGN_I (113)
    _order_3544 = 1;
    // SubProg sort pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 3541 op: 159
    // SubProg sort pc: 25 op: STARTLINE (58)

    /** sort.e:79		last = length(x)*/
    // SubProg sort pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_x_3543)){
            _last_3548 = SEQ_PTR(_x_3543)->length;
    }
    else {
        _last_3548 = 1;
    }
    // SubProg sort pc: 30 op: STARTLINE (58)

    /** sort.e:80		gap = floor(last / 10) + 1*/
    // SubProg sort pc: 32 op: FLOOR_DIV (63)
    if (10 > 0 && _last_3548 >= 0) {
        _1640 = _last_3548 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_3548 / (eudouble)10);
        _1640 = (object)temp_dbl;
    }
    // SubProg sort pc: 36 op: PLUS1_I (117)
    _gap_3545 = _1640 + 1;
    _1640 = NOVALUE;
    // SubProg sort pc: 40 op: STARTLINE (58)

    /** sort.e:81		while 1 do*/
    // SubProg sort pc: 42 op: NOP2 (110)
    // SubProg sort pc: 44 op: NOPWHILE (158)
L2: // addr: 45 pc: 44 sub: 3541 op: 158
    // SubProg sort pc: 45 op: STARTLINE (58)

    /** sort.e:82			first = gap + 1*/
    // SubProg sort pc: 47 op: PLUS1_I (117)
    _first_3547 = _gap_3545 + 1;
    // SubProg sort pc: 51 op: STARTLINE (58)

    /** sort.e:83			for i = first to last do*/
    // SubProg sort pc: 53 op: ASSIGN (18)
    _1643 = _last_3548;
    // SubProg sort pc: 56 op: FOR_I (125)
    {
        object _i_3560;
        _i_3560 = _first_3547;
L3: // addr: 63 pc: 56 sub: 3541 op: 125
        if (_i_3560 > _1643){
            goto L4; // [56] 152
        }
        // SubProg sort pc: 63 op: STARTLINE (58)

        /** sort.e:84				tempi = x[i]*/
        // SubProg sort pc: 65 op: RHS_SUBS (25)
        DeRef(_tempi_3549);
        _2 = (object)SEQ_PTR(_x_3543);
        _tempi_3549 = (object)*(((s1_ptr)_2)->base + _i_3560);
        Ref(_tempi_3549);
        // SubProg sort pc: 69 op: STARTLINE (58)

        /** sort.e:85				j = i - gap*/
        // SubProg sort pc: 71 op: MINUS_I (116)
        _j_3546 = _i_3560 - _gap_3545;
        // SubProg sort pc: 75 op: STARTLINE (58)

        /** sort.e:86				while 1 do*/
        // SubProg sort pc: 77 op: NOP2 (110)
        // SubProg sort pc: 79 op: NOPWHILE (158)
L5: // addr: 80 pc: 79 sub: 3541 op: 158
        // SubProg sort pc: 80 op: STARTLINE (58)

        /** sort.e:87					tempj = x[j]*/
        // SubProg sort pc: 82 op: RHS_SUBS (25)
        DeRef(_tempj_3550);
        _2 = (object)SEQ_PTR(_x_3543);
        _tempj_3550 = (object)*(((s1_ptr)_2)->base + _j_3546);
        Ref(_tempj_3550);
        // SubProg sort pc: 86 op: STARTLINE (58)

        /** sort.e:88					if eu:compare(tempi, tempj) != order then*/
        // SubProg sort pc: 88 op: COMPARE (76)
        if (IS_ATOM_INT(_tempi_3549) && IS_ATOM_INT(_tempj_3550)){
            _1647 = (_tempi_3549 < _tempj_3550) ? -1 : (_tempi_3549 > _tempj_3550);
        }
        else{
            _1647 = compare(_tempi_3549, _tempj_3550);
        }
        // SubProg sort pc: 92 op: NOTEQ_IFW_I (122)
        if (_1647 == _order_3544)
        goto L6; // [92] 107
        // SubProg sort pc: 96 op: STARTLINE (58)

        /** sort.e:89						j += gap*/
        // SubProg sort pc: 98 op: PLUS_I (115)
        _j_3546 = _j_3546 + _gap_3545;
        // SubProg sort pc: 102 op: STARTLINE (58)

        /** sort.e:90						exit*/
        // SubProg sort pc: 104 op: EXIT (61)
        goto L7; // [104] 139
        // SubProg sort pc: 106 op: NOP1 (159)
L6: // addr: 107 pc: 106 sub: 3541 op: 159
        // SubProg sort pc: 107 op: STARTLINE (58)

        /** sort.e:92					x[j+gap] = tempj*/
        // SubProg sort pc: 109 op: PLUS (11)
        _1650 = _j_3546 + _gap_3545;
        // SubProg sort pc: 113 op: ASSIGN_SUBS (16)
        Ref(_tempj_3550);
        _2 = (object)SEQ_PTR(_x_3543);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_3543 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1650);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_3550;
        DeRef(_1);
        // SubProg sort pc: 117 op: STARTLINE (58)

        /** sort.e:93					if j <= gap then*/
        // SubProg sort pc: 119 op: LESSEQ_IFW_I (123)
        if (_j_3546 > _gap_3545)
        goto L8; // [119] 128
        // SubProg sort pc: 123 op: STARTLINE (58)

        /** sort.e:94						exit*/
        // SubProg sort pc: 125 op: EXIT (61)
        goto L7; // [125] 139
        // SubProg sort pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 3541 op: 159
        // SubProg sort pc: 128 op: STARTLINE (58)

        /** sort.e:96					j -= gap*/
        // SubProg sort pc: 130 op: MINUS_I (116)
        _j_3546 = _j_3546 - _gap_3545;
        // SubProg sort pc: 134 op: STARTLINE (58)

        /** sort.e:97				end while*/
        // SubProg sort pc: 136 op: ENDWHILE (22)
        goto L5; // [136] 80
        // SubProg sort pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 3541 op: 159
        // SubProg sort pc: 139 op: STARTLINE (58)

        /** sort.e:98				x[j] = tempi*/
        // SubProg sort pc: 141 op: ASSIGN_SUBS (16)
        Ref(_tempi_3549);
        _2 = (object)SEQ_PTR(_x_3543);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_3543 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_3546);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_3549;
        DeRef(_1);
        // SubProg sort pc: 145 op: STARTLINE (58)

        /** sort.e:99			end for*/
        // SubProg sort pc: 147 op: ENDFOR_INT_UP1 (54)
        _i_3560 = _i_3560 + 1;
        goto L3; // [147] 63
L4: // addr: 152 pc: 147 sub: 3541 op: 54
        ;
    }
    // SubProg sort pc: 152 op: STARTLINE (58)

    /** sort.e:100			if gap = 1 then*/
    // SubProg sort pc: 154 op: EQUALS_IFW_I (121)
    if (_gap_3545 != 1)
    goto L9; // [154] 167
    // SubProg sort pc: 158 op: STARTLINE (58)

    /** sort.e:101				return x*/
    // SubProg sort pc: 160 op: RETURNF (28)

// Exiting block BLOCK: sort

// block var order_3544

// block var gap_3545

// block var j_3546

// block var first_3547

// block var last_3548

// block var tempi_3549
    DeRef(_tempi_3549);

// block var tempj_3550
    DeRef(_tempj_3550);
    DeRef(_1650);
    _1650 = NOVALUE;
    return _x_3543;
    // SubProg sort pc: 164 op: ELSE (23)
    goto L2; // [164] 45
    // SubProg sort pc: 166 op: NOP1 (159)
L9: // addr: 167 pc: 166 sub: 3541 op: 159
    // SubProg sort pc: 167 op: STARTLINE (58)

    /** sort.e:103				gap = floor(gap / 7) + 1*/
    // SubProg sort pc: 169 op: FLOOR_DIV (63)
    if (7 > 0 && _gap_3545 >= 0) {
        _1654 = _gap_3545 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_3545 / (eudouble)7);
        _1654 = (object)temp_dbl;
    }
    // SubProg sort pc: 173 op: PLUS1_I (117)
    _gap_3545 = _1654 + 1;
    _1654 = NOVALUE;
    // SubProg sort pc: 177 op: NOP1 (159)
    // SubProg sort pc: 178 op: STARTLINE (58)

    /** sort.e:105		end while*/
    // SubProg sort pc: 180 op: ENDWHILE (22)
    goto L2; // [180] 45
    // SubProg sort pc: 182 op: NOP1 (159)
    // SubProg sort pc: 183 op: BADRETURNF (43)
    ;
}


object _25custom_sort(object _custom_compare_3581, object _x_3582, object _data_3583, object _order_3584)
{
    object _gap_3585 = NOVALUE;
    object _j_3586 = NOVALUE;
    object _first_3587 = NOVALUE;
    object _last_3588 = NOVALUE;
    object _tempi_3589 = NOVALUE;
    object _tempj_3590 = NOVALUE;
    object _result_3591 = NOVALUE;
    object _args_3592 = NOVALUE;
// skipping _1683  name type: 0
    object _1682 = NOVALUE; // 3632 1682
// skipping _1681  name type: 0
// skipping _1680  name type: 0
// skipping _1679  name type: 0
    object _1678 = NOVALUE; // 3625 1678
// skipping _1677  name type: 0
// skipping _1676  name type: 0
    object _1675 = NOVALUE; // 3622 1675
// skipping _1674  name type: 0
    object _1673 = NOVALUE; // 3619 1673
    object _1672 = NOVALUE; // 3618 1672
// skipping _1671  name type: 0
// skipping _1670  name type: 0
// skipping _1669  name type: 0
// skipping _1668  name type: 0
    object _1667 = NOVALUE; // 3611 1667
// skipping _1666  name type: 0
// skipping _1665  name type: 0
    object _1664 = NOVALUE; // 3605 1664
// skipping _1663  name type: 0
// skipping _1662  name type: 0
// skipping _1661  name type: 0
    object _1660 = NOVALUE; // 3601 1660
// skipping _1659  name type: 0
    object _1658 = NOVALUE; // 3598 1658
// skipping _1657  name type: 0
// skipping _1656  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg custom_sort pc: 1 op: INTEGER_CHECK (96)
    // SubProg custom_sort pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg custom_sort pc: 5 op: INTEGER_CHECK (96)
    // SubProg custom_sort pc: 7 op: STARTLINE (58)

    /** sort.e:253		sequence args = {0, 0}*/
    // SubProg custom_sort pc: 9 op: RIGHT_BRACE_2 (85)
    DeRef(_args_3592);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _args_3592 = MAKE_SEQ(_1);
    // SubProg custom_sort pc: 13 op: STARTLINE (58)

    /** sort.e:255		if order >= 0 then*/
    // SubProg custom_sort pc: 15 op: GREATEREQ_IFW_I (120)
    // SubProg custom_sort pc: 19 op: STARTLINE (58)

    /** sort.e:256			order = -1*/
    // SubProg custom_sort pc: 21 op: ASSIGN_I (113)
    _order_3584 = -1;
    // SubProg custom_sort pc: 24 op: ELSE (23)
    goto L1; // [24] 33
    // SubProg custom_sort pc: 26 op: NOP1 (159)
    // SubProg custom_sort pc: 27 op: STARTLINE (58)

    /** sort.e:258			order = 1*/
    // SubProg custom_sort pc: 29 op: ASSIGN_I (113)
    _order_3584 = 1;
    // SubProg custom_sort pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 3579 op: 159
    // SubProg custom_sort pc: 33 op: STARTLINE (58)

    /** sort.e:261		if atom(data) then*/
    // SubProg custom_sort pc: 35 op: IS_AN_ATOM (67)
    _1658 = IS_ATOM(_data_3583);
    // SubProg custom_sort pc: 38 op: IF (20)
    if (_1658 == 0)
    {
        _1658 = NOVALUE;
        goto L2; // [38] 50
    }
    else{
        _1658 = NOVALUE;
    }
    // SubProg custom_sort pc: 41 op: STARTLINE (58)

    /** sort.e:262			args &= data*/
    // SubProg custom_sort pc: 43 op: CONCAT (15)
    if (IS_SEQUENCE(_args_3592) && IS_ATOM(_data_3583)) {
        Ref(_data_3583);
        Append(&_args_3592, _args_3592, _data_3583);
    }
    else if (IS_ATOM(_args_3592) && IS_SEQUENCE(_data_3583)) {
    }
    else {
        Concat((object_ptr)&_args_3592, _args_3592, _data_3583);
    }
    // SubProg custom_sort pc: 47 op: ELSE (23)
    goto L3; // [47] 70
    // SubProg custom_sort pc: 49 op: NOP1 (159)
L2: // addr: 50 pc: 49 sub: 3579 op: 159
    // SubProg custom_sort pc: 50 op: STARTLINE (58)

    /** sort.e:263		elsif length(data) then*/
    // SubProg custom_sort pc: 52 op: LENGTH (42)
    // Known sequence length:
    _1660 = 0;
    // SubProg custom_sort pc: 55 op: IF (20)
    // SubProg custom_sort pc: 69 op: NOP1 (159)
L3: // addr: 70 pc: 69 sub: 3579 op: 159
    // SubProg custom_sort pc: 70 op: STARTLINE (58)

    /** sort.e:267		last = length(x)*/
    // SubProg custom_sort pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_x_3582)){
            _last_3588 = SEQ_PTR(_x_3582)->length;
    }
    else {
        _last_3588 = 1;
    }
    // SubProg custom_sort pc: 75 op: STARTLINE (58)

    /** sort.e:268		gap = floor(last / 10) + 1*/
    // SubProg custom_sort pc: 77 op: FLOOR_DIV (63)
    if (10 > 0 && _last_3588 >= 0) {
        _1664 = _last_3588 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_3588 / (eudouble)10);
        _1664 = (object)temp_dbl;
    }
    // SubProg custom_sort pc: 81 op: PLUS1_I (117)
    _gap_3585 = _1664 + 1;
    _1664 = NOVALUE;
    // SubProg custom_sort pc: 85 op: STARTLINE (58)

    /** sort.e:269		while 1 do*/
    // SubProg custom_sort pc: 87 op: NOP2 (110)
    // SubProg custom_sort pc: 89 op: NOPWHILE (158)
L4: // addr: 90 pc: 89 sub: 3579 op: 158
    // SubProg custom_sort pc: 90 op: STARTLINE (58)

    /** sort.e:270			first = gap + 1*/
    // SubProg custom_sort pc: 92 op: PLUS1_I (117)
    _first_3587 = _gap_3585 + 1;
    // SubProg custom_sort pc: 96 op: STARTLINE (58)

    /** sort.e:271			for i = first to last do*/
    // SubProg custom_sort pc: 98 op: ASSIGN (18)
    _1667 = _last_3588;
    // SubProg custom_sort pc: 101 op: FOR_I (125)
    {
        object _i_3610;
        _i_3610 = _first_3587;
L5: // addr: 108 pc: 101 sub: 3579 op: 125
        if (_i_3610 > _1667){
            goto L6; // [101] 240
        }
        // SubProg custom_sort pc: 108 op: STARTLINE (58)

        /** sort.e:272				tempi = x[i]*/
        // SubProg custom_sort pc: 110 op: RHS_SUBS (25)
        DeRef(_tempi_3589);
        _2 = (object)SEQ_PTR(_x_3582);
        _tempi_3589 = (object)*(((s1_ptr)_2)->base + _i_3610);
        Ref(_tempi_3589);
        // SubProg custom_sort pc: 114 op: STARTLINE (58)

        /** sort.e:273				args[1] = tempi*/
        // SubProg custom_sort pc: 116 op: ASSIGN_SUBS (16)
        Ref(_tempi_3589);
        _2 = (object)SEQ_PTR(_args_3592);
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_3589;
        DeRef(_1);
        // SubProg custom_sort pc: 120 op: STARTLINE (58)

        /** sort.e:274				j = i - gap*/
        // SubProg custom_sort pc: 122 op: MINUS_I (116)
        _j_3586 = _i_3610 - _gap_3585;
        // SubProg custom_sort pc: 126 op: STARTLINE (58)

        /** sort.e:275				while 1 do*/
        // SubProg custom_sort pc: 128 op: NOP2 (110)
        // SubProg custom_sort pc: 130 op: NOPWHILE (158)
L7: // addr: 131 pc: 130 sub: 3579 op: 158
        // SubProg custom_sort pc: 131 op: STARTLINE (58)

        /** sort.e:276					tempj = x[j]*/
        // SubProg custom_sort pc: 133 op: RHS_SUBS (25)
        DeRef(_tempj_3590);
        _2 = (object)SEQ_PTR(_x_3582);
        _tempj_3590 = (object)*(((s1_ptr)_2)->base + _j_3586);
        Ref(_tempj_3590);
        // SubProg custom_sort pc: 137 op: STARTLINE (58)

        /** sort.e:277					args[2] = tempj*/
        // SubProg custom_sort pc: 139 op: ASSIGN_SUBS (16)
        Ref(_tempj_3590);
        _2 = (object)SEQ_PTR(_args_3592);
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_3590;
        DeRef(_1);
        // SubProg custom_sort pc: 143 op: STARTLINE (58)

        /** sort.e:278					result = call_func(custom_compare, args)*/
        // SubProg custom_sort pc: 145 op: CALL_FUNC (137)
        _1 = (object)SEQ_PTR(_args_3592);
        _2 = (object)((s1_ptr)_1)->base;
        _0 = (object)_00[_custom_compare_3581].addr;
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
        DeRef(_result_3591);
        _result_3591 = _1;
        // SubProg custom_sort pc: 149 op: STARTLINE (58)

        /** sort.e:279					if sequence(result) then*/
        // SubProg custom_sort pc: 151 op: IS_A_SEQUENCE (68)
        _1672 = IS_SEQUENCE(_result_3591);
        // SubProg custom_sort pc: 154 op: IF (20)
        if (_1672 == 0)
        {
            _1672 = NOVALUE;
            goto L8; // [154] 174
        }
        else{
            _1672 = NOVALUE;
        }
        // SubProg custom_sort pc: 157 op: STARTLINE (58)

        /** sort.e:280						args[3] = result[2]*/
        // SubProg custom_sort pc: 159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_result_3591);
        _1673 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg custom_sort pc: 163 op: ASSIGN_SUBS (16)
        Ref(_1673);
        _2 = (object)SEQ_PTR(_args_3592);
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1673;
        if( _1 != _1673 ){
            DeRef(_1);
        }
        _1673 = NOVALUE;
        // SubProg custom_sort pc: 167 op: STARTLINE (58)

        /** sort.e:281						result = result[1]*/
        // SubProg custom_sort pc: 169 op: RHS_SUBS_CHECK (92)
        _0 = _result_3591;
        _2 = (object)SEQ_PTR(_result_3591);
        _result_3591 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_result_3591);
        DeRef(_0);
        // SubProg custom_sort pc: 173 op: NOP1 (159)
L8: // addr: 174 pc: 173 sub: 3579 op: 159
        // SubProg custom_sort pc: 174 op: STARTLINE (58)

        /** sort.e:283					if eu:compare(result, 0) != order then*/
        // SubProg custom_sort pc: 176 op: COMPARE (76)
        if (IS_ATOM_INT(_result_3591) && IS_ATOM_INT(0)){
            _1675 = (_result_3591 < 0) ? -1 : (_result_3591 > 0);
        }
        else{
            _1675 = compare(_result_3591, 0);
        }
        // SubProg custom_sort pc: 180 op: NOTEQ_IFW_I (122)
        if (_1675 == _order_3584)
        goto L9; // [180] 195
        // SubProg custom_sort pc: 184 op: STARTLINE (58)

        /** sort.e:284						j += gap*/
        // SubProg custom_sort pc: 186 op: PLUS_I (115)
        _j_3586 = _j_3586 + _gap_3585;
        // SubProg custom_sort pc: 190 op: STARTLINE (58)

        /** sort.e:285						exit*/
        // SubProg custom_sort pc: 192 op: EXIT (61)
        goto LA; // [192] 227
        // SubProg custom_sort pc: 194 op: NOP1 (159)
L9: // addr: 195 pc: 194 sub: 3579 op: 159
        // SubProg custom_sort pc: 195 op: STARTLINE (58)

        /** sort.e:287					x[j+gap] = tempj*/
        // SubProg custom_sort pc: 197 op: PLUS (11)
        _1678 = _j_3586 + _gap_3585;
        // SubProg custom_sort pc: 201 op: ASSIGN_SUBS (16)
        Ref(_tempj_3590);
        _2 = (object)SEQ_PTR(_x_3582);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_3582 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1678);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_3590;
        DeRef(_1);
        // SubProg custom_sort pc: 205 op: STARTLINE (58)

        /** sort.e:288					if j <= gap then*/
        // SubProg custom_sort pc: 207 op: LESSEQ_IFW_I (123)
        if (_j_3586 > _gap_3585)
        goto LB; // [207] 216
        // SubProg custom_sort pc: 211 op: STARTLINE (58)

        /** sort.e:289						exit*/
        // SubProg custom_sort pc: 213 op: EXIT (61)
        goto LA; // [213] 227
        // SubProg custom_sort pc: 215 op: NOP1 (159)
LB: // addr: 216 pc: 215 sub: 3579 op: 159
        // SubProg custom_sort pc: 216 op: STARTLINE (58)

        /** sort.e:291					j -= gap*/
        // SubProg custom_sort pc: 218 op: MINUS_I (116)
        _j_3586 = _j_3586 - _gap_3585;
        // SubProg custom_sort pc: 222 op: STARTLINE (58)

        /** sort.e:292				end while*/
        // SubProg custom_sort pc: 224 op: ENDWHILE (22)
        goto L7; // [224] 131
        // SubProg custom_sort pc: 226 op: NOP1 (159)
LA: // addr: 227 pc: 226 sub: 3579 op: 159
        // SubProg custom_sort pc: 227 op: STARTLINE (58)

        /** sort.e:293				x[j] = tempi*/
        // SubProg custom_sort pc: 229 op: ASSIGN_SUBS (16)
        Ref(_tempi_3589);
        _2 = (object)SEQ_PTR(_x_3582);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_3582 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_3586);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_3589;
        DeRef(_1);
        // SubProg custom_sort pc: 233 op: STARTLINE (58)

        /** sort.e:294			end for*/
        // SubProg custom_sort pc: 235 op: ENDFOR_INT_UP1 (54)
        _i_3610 = _i_3610 + 1;
        goto L5; // [235] 108
L6: // addr: 240 pc: 235 sub: 3579 op: 54
        ;
    }
    // SubProg custom_sort pc: 240 op: STARTLINE (58)

    /** sort.e:295			if gap = 1 then*/
    // SubProg custom_sort pc: 242 op: EQUALS_IFW_I (121)
    if (_gap_3585 != 1)
    goto LC; // [242] 255
    // SubProg custom_sort pc: 246 op: STARTLINE (58)

    /** sort.e:296				return x*/
    // SubProg custom_sort pc: 248 op: RETURNF (28)

// Exiting block BLOCK: custom_sort

// block var custom_compare_3581

// block var data_3583
    DeRef(_data_3583);

// block var order_3584

// block var gap_3585

// block var j_3586

// block var first_3587

// block var last_3588

// block var tempi_3589
    DeRef(_tempi_3589);

// block var tempj_3590
    DeRef(_tempj_3590);

// block var result_3591
    DeRef(_result_3591);

// block var args_3592
    DeRef(_args_3592);
    DeRef(_1678);
    _1678 = NOVALUE;
    return _x_3582;
    // SubProg custom_sort pc: 252 op: ELSE (23)
    goto L4; // [252] 90
    // SubProg custom_sort pc: 254 op: NOP1 (159)
LC: // addr: 255 pc: 254 sub: 3579 op: 159
    // SubProg custom_sort pc: 255 op: STARTLINE (58)

    /** sort.e:298				gap = floor(gap / 7) + 1*/
    // SubProg custom_sort pc: 257 op: FLOOR_DIV (63)
    if (7 > 0 && _gap_3585 >= 0) {
        _1682 = _gap_3585 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_3585 / (eudouble)7);
        _1682 = (object)temp_dbl;
    }
    // SubProg custom_sort pc: 261 op: PLUS1_I (117)
    _gap_3585 = _1682 + 1;
    _1682 = NOVALUE;
    // SubProg custom_sort pc: 265 op: NOP1 (159)
    // SubProg custom_sort pc: 266 op: STARTLINE (58)

    /** sort.e:300		end while*/
    // SubProg custom_sort pc: 268 op: ENDWHILE (22)
    goto L4; // [268] 90
    // SubProg custom_sort pc: 270 op: NOP1 (159)
    // SubProg custom_sort pc: 271 op: BADRETURNF (43)
    ;
}


object _25column_compare(object _a_3636, object _b_3637, object _cols_3638)
{
    object _sign_3639 = NOVALUE;
    object _column_3640 = NOVALUE;
    object _1705 = NOVALUE; // 3672 1705
// skipping _1704  name type: 0
    object _1703 = NOVALUE; // 3670 1703
    object _1702 = NOVALUE; // 3667 1702
    object _1701 = NOVALUE; // 3665 1701
    object _1700 = NOVALUE; // 3664 1700
    object _1699 = NOVALUE; // 3663 1699
    object _1698 = NOVALUE; // 3662 1698
// skipping _1697  name type: 0
    object _1696 = NOVALUE; // 3660 1696
    object _1695 = NOVALUE; // 3659 1695
    object _1694 = NOVALUE; // 3658 1694
// skipping _1693  name type: 0
    object _1692 = NOVALUE; // 3655 1692
// skipping _1691  name type: 0
    object _1690 = NOVALUE; // 3652 1690
// skipping _1689  name type: 0
// skipping _1688  name type: 0
    object _1687 = NOVALUE; // 3647 1687
// skipping _1686  name type: 0
    object _1685 = NOVALUE; // 3645 1685
    object _1684 = NOVALUE; // 3643 1684
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg column_compare pc: 1 op: STARTLINE (58)

    /** sort.e:309		for i = 1 to length(cols) do*/
    // SubProg column_compare pc: 3 op: LENGTH (42)
    if (IS_SEQUENCE(_cols_3638)){
            _1684 = SEQ_PTR(_cols_3638)->length;
    }
    else {
        _1684 = 1;
    }
    // SubProg column_compare pc: 6 op: FOR_I (125)
    {
        object _i_3642;
        _i_3642 = 1;
L1: // addr: 13 pc: 6 sub: 3634 op: 125
        if (_i_3642 > _1684){
            goto L2; // [6] 176
        }
        // SubProg column_compare pc: 13 op: STARTLINE (58)

        /** sort.e:310			if cols[i] < 0 then*/
        // SubProg column_compare pc: 15 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_3638);
        _1685 = (object)*(((s1_ptr)_2)->base + _i_3642);
        // SubProg column_compare pc: 19 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _1685, 0)){
            _1685 = NOVALUE;
            goto L3; // [19] 42
        }
        _1685 = NOVALUE;
        // SubProg column_compare pc: 23 op: STARTLINE (58)

        /** sort.e:311				sign = -1*/
        // SubProg column_compare pc: 25 op: ASSIGN_I (113)
        _sign_3639 = -1;
        // SubProg column_compare pc: 28 op: STARTLINE (58)

        /** sort.e:312				column = -cols[i]*/
        // SubProg column_compare pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_3638);
        _1687 = (object)*(((s1_ptr)_2)->base + _i_3642);
        // SubProg column_compare pc: 34 op: UMINUS (12)
        if (IS_ATOM_INT(_1687)) {
            if ((uintptr_t)_1687 == (uintptr_t)HIGH_BITS){
                _column_3640 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _column_3640 = - _1687;
            }
        }
        else {
            _column_3640 = unary_op(UMINUS, _1687);
        }
        _1687 = NOVALUE;
        // SubProg column_compare pc: 37 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_column_3640)) {
            _1 = (object)(DBL_PTR(_column_3640)->dbl);
            DeRefDS(_column_3640);
            _column_3640 = _1;
        }
        // SubProg column_compare pc: 39 op: ELSE (23)
        goto L4; // [39] 56
        // SubProg column_compare pc: 41 op: NOP1 (159)
L3: // addr: 42 pc: 41 sub: 3634 op: 159
        // SubProg column_compare pc: 42 op: STARTLINE (58)

        /** sort.e:314				sign = 1*/
        // SubProg column_compare pc: 44 op: ASSIGN_I (113)
        _sign_3639 = 1;
        // SubProg column_compare pc: 47 op: STARTLINE (58)

        /** sort.e:315				column = cols[i]*/
        // SubProg column_compare pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_3638);
        _column_3640 = (object)*(((s1_ptr)_2)->base + _i_3642);
        if (!IS_ATOM_INT(_column_3640)){
            _column_3640 = (object)DBL_PTR(_column_3640)->dbl;
        }
        // SubProg column_compare pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 3634 op: 159
        // SubProg column_compare pc: 56 op: STARTLINE (58)

        /** sort.e:317			if column <= length(a) then*/
        // SubProg column_compare pc: 58 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 60 op: LENGTH (42)
        if (IS_SEQUENCE(_a_3636)){
                _1690 = SEQ_PTR(_a_3636)->length;
        }
        else {
            _1690 = 1;
        }
        // SubProg column_compare pc: 63 op: LESSEQ_IFW_I (123)
        if (_column_3640 > _1690)
        goto L5; // [63] 137
        // SubProg column_compare pc: 67 op: STARTLINE (58)

        /** sort.e:318				if column <= length(b) then*/
        // SubProg column_compare pc: 69 op: LENGTH (42)
        if (IS_SEQUENCE(_b_3637)){
                _1692 = SEQ_PTR(_b_3637)->length;
        }
        else {
            _1692 = 1;
        }
        // SubProg column_compare pc: 72 op: LESSEQ_IFW_I (123)
        if (_column_3640 > _1692)
        goto L6; // [72] 121
        // SubProg column_compare pc: 76 op: STARTLINE (58)

        /** sort.e:319					if not equal(a[column], b[column]) then*/
        // SubProg column_compare pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3636);
        _1694 = (object)*(((s1_ptr)_2)->base + _column_3640);
        // SubProg column_compare pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_b_3637);
        _1695 = (object)*(((s1_ptr)_2)->base + _column_3640);
        // SubProg column_compare pc: 86 op: EQUAL (153)
        if (_1694 == _1695)
        _1696 = 1;
        else if (IS_ATOM_INT(_1694) && IS_ATOM_INT(_1695))
        _1696 = 0;
        else
        _1696 = (compare(_1694, _1695) == 0);
        _1694 = NOVALUE;
        _1695 = NOVALUE;
        // SubProg column_compare pc: 90 op: NOT_IFW (108)
        if (_1696 != 0)
        goto L7; // [90] 169
        _1696 = NOVALUE;
        // SubProg column_compare pc: 93 op: STARTLINE (58)

        /** sort.e:320						return sign * eu:compare(a[column], b[column])*/
        // SubProg column_compare pc: 95 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 97 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_3636);
        _1698 = (object)*(((s1_ptr)_2)->base + _column_3640);
        // SubProg column_compare pc: 101 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_b_3637);
        _1699 = (object)*(((s1_ptr)_2)->base + _column_3640);
        // SubProg column_compare pc: 105 op: COMPARE (76)
        if (IS_ATOM_INT(_1698) && IS_ATOM_INT(_1699)){
            _1700 = (_1698 < _1699) ? -1 : (_1698 > _1699);
        }
        else{
            _1700 = compare(_1698, _1699);
        }
        _1698 = NOVALUE;
        _1699 = NOVALUE;
        // SubProg column_compare pc: 109 op: MULTIPLY (13)
        if (_sign_3639 == (short)_sign_3639){
            _1701 = _sign_3639 * _1700;
        }
        else{
            _1701 = NewDouble(_sign_3639 * (eudouble)_1700);
        }
        _1700 = NOVALUE;
        // SubProg column_compare pc: 113 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_3636
        DeRef(_a_3636);

// block var b_3637
        DeRef(_b_3637);

// block var cols_3638
        DeRef(_cols_3638);

// block var sign_3639

// block var column_3640
        return _1701;
        // SubProg column_compare pc: 117 op: NOP1 (159)
        // SubProg column_compare pc: 118 op: ELSE (23)
        goto L7; // [118] 169
        // SubProg column_compare pc: 120 op: NOP1 (159)
L6: // addr: 121 pc: 120 sub: 3634 op: 159
        // SubProg column_compare pc: 121 op: STARTLINE (58)

        /** sort.e:323					return sign * -1*/
        // SubProg column_compare pc: 123 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 125 op: MULTIPLY (13)
        if (_sign_3639 == (short)_sign_3639){
            _1702 = _sign_3639 * -1;
        }
        else{
            _1702 = NewDouble(_sign_3639 * (eudouble)-1);
        }
        // SubProg column_compare pc: 129 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_3636
        DeRef(_a_3636);

// block var b_3637
        DeRef(_b_3637);

// block var cols_3638
        DeRef(_cols_3638);

// block var sign_3639

// block var column_3640
        DeRef(_1701);
        _1701 = NOVALUE;
        return _1702;
        // SubProg column_compare pc: 133 op: NOP1 (159)
        // SubProg column_compare pc: 134 op: ELSE (23)
        goto L7; // [134] 169
        // SubProg column_compare pc: 136 op: NOP1 (159)
L5: // addr: 137 pc: 136 sub: 3634 op: 159
        // SubProg column_compare pc: 137 op: STARTLINE (58)

        /** sort.e:326				if column <= length(b) then*/
        // SubProg column_compare pc: 139 op: LENGTH (42)
        if (IS_SEQUENCE(_b_3637)){
                _1703 = SEQ_PTR(_b_3637)->length;
        }
        else {
            _1703 = 1;
        }
        // SubProg column_compare pc: 142 op: LESSEQ_IFW_I (123)
        if (_column_3640 > _1703)
        goto L8; // [142] 161
        // SubProg column_compare pc: 146 op: STARTLINE (58)

        /** sort.e:327					return sign * 1*/
        // SubProg column_compare pc: 148 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 150 op: MULTIPLY (13)
        _1705 = _sign_3639 * 1;
        // SubProg column_compare pc: 154 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_3636
        DeRef(_a_3636);

// block var b_3637
        DeRef(_b_3637);

// block var cols_3638
        DeRef(_cols_3638);

// block var sign_3639

// block var column_3640
        DeRef(_1702);
        _1702 = NOVALUE;
        DeRef(_1701);
        _1701 = NOVALUE;
        return _1705;
        // SubProg column_compare pc: 158 op: ELSE (23)
        goto L9; // [158] 168
        // SubProg column_compare pc: 160 op: NOP1 (159)
L8: // addr: 161 pc: 160 sub: 3634 op: 159
        // SubProg column_compare pc: 161 op: STARTLINE (58)

        /** sort.e:329					return 0*/
        // SubProg column_compare pc: 163 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_3636
        DeRef(_a_3636);

// block var b_3637
        DeRef(_b_3637);

// block var cols_3638
        DeRef(_cols_3638);

// block var sign_3639

// block var column_3640
        DeRef(_1702);
        _1702 = NOVALUE;
        DeRef(_1701);
        _1701 = NOVALUE;
        DeRef(_1705);
        _1705 = NOVALUE;
        return 0;
        // SubProg column_compare pc: 167 op: NOP1 (159)
L9: // addr: 168 pc: 167 sub: 3634 op: 159
        // SubProg column_compare pc: 168 op: NOP1 (159)
L7: // addr: 169 pc: 168 sub: 3634 op: 159
        // SubProg column_compare pc: 169 op: STARTLINE (58)

        /** sort.e:332		end for*/
        // SubProg column_compare pc: 171 op: ENDFOR_INT_UP1 (54)
        _i_3642 = _i_3642 + 1;
        goto L1; // [171] 13
L2: // addr: 176 pc: 171 sub: 3634 op: 54
        ;
    }
    // SubProg column_compare pc: 176 op: STARTLINE (58)

    /** sort.e:333		return 0*/
    // SubProg column_compare pc: 178 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_3636
    DeRef(_a_3636);

// block var b_3637
    DeRef(_b_3637);

// block var cols_3638
    DeRef(_cols_3638);

// block var sign_3639

// block var column_3640
    DeRef(_1702);
    _1702 = NOVALUE;
    DeRef(_1701);
    _1701 = NOVALUE;
    DeRef(_1705);
    _1705 = NOVALUE;
    return 0;
    // SubProg column_compare pc: 182 op: BADRETURNF (43)
    ;
}



// 0x7374BAEB
