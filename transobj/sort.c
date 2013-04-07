// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _24sort(object _x_4066, object _order_4067)
{
    object _gap_4068 = NOVALUE;
    object _j_4069 = NOVALUE;
    object _first_4070 = NOVALUE;
    object _last_4071 = NOVALUE;
    object _tempi_4072 = NOVALUE;
    object _tempj_4073 = NOVALUE;
// skipping _1997  name type: 0
    object _1996 = NOVALUE; // 4100 1996
// skipping _1995  name type: 0
// skipping _1994  name type: 0
// skipping _1993  name type: 0
    object _1992 = NOVALUE; // 4093 1992
// skipping _1991  name type: 0
// skipping _1990  name type: 0
    object _1989 = NOVALUE; // 4090 1989
// skipping _1988  name type: 0
// skipping _1987  name type: 0
// skipping _1986  name type: 0
    object _1985 = NOVALUE; // 4084 1985
// skipping _1984  name type: 0
// skipping _1983  name type: 0
    object _1982 = NOVALUE; // 4078 1982
// skipping _1981  name type: 0
// skipping _1980  name type: 0
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
    _order_4067 = -1;
    // SubProg sort pc: 16 op: ELSE (23)
    goto L1; // [16] 25
    // SubProg sort pc: 18 op: NOP1 (159)
    // SubProg sort pc: 19 op: STARTLINE (58)

    /** sort.e:75			order = 1*/
    // SubProg sort pc: 21 op: ASSIGN_I (113)
    _order_4067 = 1;
    // SubProg sort pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 4064 op: 159
    // SubProg sort pc: 25 op: STARTLINE (58)

    /** sort.e:79		last = length(x)*/
    // SubProg sort pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_x_4066)){
            _last_4071 = SEQ_PTR(_x_4066)->length;
    }
    else {
        _last_4071 = 1;
    }
    // SubProg sort pc: 30 op: STARTLINE (58)

    /** sort.e:80		gap = floor(last / 10) + 1*/
    // SubProg sort pc: 32 op: FLOOR_DIV (63)
    if (10 > 0 && _last_4071 >= 0) {
        _1982 = _last_4071 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_4071 / (eudouble)10);
        _1982 = (object)temp_dbl;
    }
    // SubProg sort pc: 36 op: PLUS1_I (117)
    _gap_4068 = _1982 + 1;
    _1982 = NOVALUE;
    // SubProg sort pc: 40 op: STARTLINE (58)

    /** sort.e:81		while 1 do*/
    // SubProg sort pc: 42 op: NOP2 (110)
    // SubProg sort pc: 44 op: NOPWHILE (158)
L2: // addr: 45 pc: 44 sub: 4064 op: 158
    // SubProg sort pc: 45 op: STARTLINE (58)

    /** sort.e:82			first = gap + 1*/
    // SubProg sort pc: 47 op: PLUS1_I (117)
    _first_4070 = _gap_4068 + 1;
    // SubProg sort pc: 51 op: STARTLINE (58)

    /** sort.e:83			for i = first to last do*/
    // SubProg sort pc: 53 op: ASSIGN (18)
    _1985 = _last_4071;
    // SubProg sort pc: 56 op: FOR_I (125)
    {
        object _i_4083;
        _i_4083 = _first_4070;
L3: // addr: 63 pc: 56 sub: 4064 op: 125
        if (_i_4083 > _1985){
            goto L4; // [56] 152
        }
        // SubProg sort pc: 63 op: STARTLINE (58)

        /** sort.e:84				tempi = x[i]*/
        // SubProg sort pc: 65 op: RHS_SUBS (25)
        DeRef(_tempi_4072);
        _2 = (object)SEQ_PTR(_x_4066);
        _tempi_4072 = (object)*(((s1_ptr)_2)->base + _i_4083);
        Ref(_tempi_4072);
        // SubProg sort pc: 69 op: STARTLINE (58)

        /** sort.e:85				j = i - gap*/
        // SubProg sort pc: 71 op: MINUS_I (116)
        _j_4069 = _i_4083 - _gap_4068;
        // SubProg sort pc: 75 op: STARTLINE (58)

        /** sort.e:86				while 1 do*/
        // SubProg sort pc: 77 op: NOP2 (110)
        // SubProg sort pc: 79 op: NOPWHILE (158)
L5: // addr: 80 pc: 79 sub: 4064 op: 158
        // SubProg sort pc: 80 op: STARTLINE (58)

        /** sort.e:87					tempj = x[j]*/
        // SubProg sort pc: 82 op: RHS_SUBS (25)
        DeRef(_tempj_4073);
        _2 = (object)SEQ_PTR(_x_4066);
        _tempj_4073 = (object)*(((s1_ptr)_2)->base + _j_4069);
        Ref(_tempj_4073);
        // SubProg sort pc: 86 op: STARTLINE (58)

        /** sort.e:88					if eu:compare(tempi, tempj) != order then*/
        // SubProg sort pc: 88 op: COMPARE (76)
        if (IS_ATOM_INT(_tempi_4072) && IS_ATOM_INT(_tempj_4073)){
            _1989 = (_tempi_4072 < _tempj_4073) ? -1 : (_tempi_4072 > _tempj_4073);
        }
        else{
            _1989 = compare(_tempi_4072, _tempj_4073);
        }
        // SubProg sort pc: 92 op: NOTEQ_IFW_I (122)
        if (_1989 == _order_4067)
        goto L6; // [92] 107
        // SubProg sort pc: 96 op: STARTLINE (58)

        /** sort.e:89						j += gap*/
        // SubProg sort pc: 98 op: PLUS_I (115)
        _j_4069 = _j_4069 + _gap_4068;
        // SubProg sort pc: 102 op: STARTLINE (58)

        /** sort.e:90						exit*/
        // SubProg sort pc: 104 op: EXIT (61)
        goto L7; // [104] 139
        // SubProg sort pc: 106 op: NOP1 (159)
L6: // addr: 107 pc: 106 sub: 4064 op: 159
        // SubProg sort pc: 107 op: STARTLINE (58)

        /** sort.e:92					x[j+gap] = tempj*/
        // SubProg sort pc: 109 op: PLUS (11)
        _1992 = _j_4069 + _gap_4068;
        // SubProg sort pc: 113 op: ASSIGN_SUBS (16)
        Ref(_tempj_4073);
        _2 = (object)SEQ_PTR(_x_4066);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_4066 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1992);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_4073;
        DeRef(_1);
        // SubProg sort pc: 117 op: STARTLINE (58)

        /** sort.e:93					if j <= gap then*/
        // SubProg sort pc: 119 op: LESSEQ_IFW_I (123)
        if (_j_4069 > _gap_4068)
        goto L8; // [119] 128
        // SubProg sort pc: 123 op: STARTLINE (58)

        /** sort.e:94						exit*/
        // SubProg sort pc: 125 op: EXIT (61)
        goto L7; // [125] 139
        // SubProg sort pc: 127 op: NOP1 (159)
L8: // addr: 128 pc: 127 sub: 4064 op: 159
        // SubProg sort pc: 128 op: STARTLINE (58)

        /** sort.e:96					j -= gap*/
        // SubProg sort pc: 130 op: MINUS_I (116)
        _j_4069 = _j_4069 - _gap_4068;
        // SubProg sort pc: 134 op: STARTLINE (58)

        /** sort.e:97				end while*/
        // SubProg sort pc: 136 op: ENDWHILE (22)
        goto L5; // [136] 80
        // SubProg sort pc: 138 op: NOP1 (159)
L7: // addr: 139 pc: 138 sub: 4064 op: 159
        // SubProg sort pc: 139 op: STARTLINE (58)

        /** sort.e:98				x[j] = tempi*/
        // SubProg sort pc: 141 op: ASSIGN_SUBS (16)
        Ref(_tempi_4072);
        _2 = (object)SEQ_PTR(_x_4066);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_4066 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_4069);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_4072;
        DeRef(_1);
        // SubProg sort pc: 145 op: STARTLINE (58)

        /** sort.e:99			end for*/
        // SubProg sort pc: 147 op: ENDFOR_INT_UP1 (54)
        _i_4083 = _i_4083 + 1;
        goto L3; // [147] 63
L4: // addr: 152 pc: 147 sub: 4064 op: 54
        ;
    }
    // SubProg sort pc: 152 op: STARTLINE (58)

    /** sort.e:100			if gap = 1 then*/
    // SubProg sort pc: 154 op: EQUALS_IFW_I (121)
    if (_gap_4068 != 1)
    goto L9; // [154] 167
    // SubProg sort pc: 158 op: STARTLINE (58)

    /** sort.e:101				return x*/
    // SubProg sort pc: 160 op: RETURNF (28)

// Exiting block BLOCK: sort

// block var order_4067

// block var gap_4068

// block var j_4069

// block var first_4070

// block var last_4071

// block var tempi_4072
    DeRef(_tempi_4072);

// block var tempj_4073
    DeRef(_tempj_4073);
    DeRef(_1992);
    _1992 = NOVALUE;
    return _x_4066;
    // SubProg sort pc: 164 op: ELSE (23)
    goto L2; // [164] 45
    // SubProg sort pc: 166 op: NOP1 (159)
L9: // addr: 167 pc: 166 sub: 4064 op: 159
    // SubProg sort pc: 167 op: STARTLINE (58)

    /** sort.e:103				gap = floor(gap / 7) + 1*/
    // SubProg sort pc: 169 op: FLOOR_DIV (63)
    if (7 > 0 && _gap_4068 >= 0) {
        _1996 = _gap_4068 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_4068 / (eudouble)7);
        _1996 = (object)temp_dbl;
    }
    // SubProg sort pc: 173 op: PLUS1_I (117)
    _gap_4068 = _1996 + 1;
    _1996 = NOVALUE;
    // SubProg sort pc: 177 op: NOP1 (159)
    // SubProg sort pc: 178 op: STARTLINE (58)

    /** sort.e:105		end while*/
    // SubProg sort pc: 180 op: ENDWHILE (22)
    goto L2; // [180] 45
    // SubProg sort pc: 182 op: NOP1 (159)
    // SubProg sort pc: 183 op: BADRETURNF (43)
    ;
}


object _24custom_sort(object _custom_compare_4104, object _x_4105, object _data_4106, object _order_4107)
{
    object _gap_4108 = NOVALUE;
    object _j_4109 = NOVALUE;
    object _first_4110 = NOVALUE;
    object _last_4111 = NOVALUE;
    object _tempi_4112 = NOVALUE;
    object _tempj_4113 = NOVALUE;
    object _result_4114 = NOVALUE;
    object _args_4115 = NOVALUE;
// skipping _2025  name type: 0
    object _2024 = NOVALUE; // 4155 2024
// skipping _2023  name type: 0
// skipping _2022  name type: 0
// skipping _2021  name type: 0
    object _2020 = NOVALUE; // 4148 2020
// skipping _2019  name type: 0
// skipping _2018  name type: 0
    object _2017 = NOVALUE; // 4145 2017
// skipping _2016  name type: 0
    object _2015 = NOVALUE; // 4142 2015
    object _2014 = NOVALUE; // 4141 2014
// skipping _2013  name type: 0
// skipping _2012  name type: 0
// skipping _2011  name type: 0
// skipping _2010  name type: 0
    object _2009 = NOVALUE; // 4134 2009
// skipping _2008  name type: 0
// skipping _2007  name type: 0
    object _2006 = NOVALUE; // 4128 2006
// skipping _2005  name type: 0
// skipping _2004  name type: 0
// skipping _2003  name type: 0
    object _2002 = NOVALUE; // 4124 2002
// skipping _2001  name type: 0
    object _2000 = NOVALUE; // 4121 2000
// skipping _1999  name type: 0
// skipping _1998  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg custom_sort pc: 1 op: INTEGER_CHECK (96)
    // SubProg custom_sort pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg custom_sort pc: 5 op: INTEGER_CHECK (96)
    // SubProg custom_sort pc: 7 op: STARTLINE (58)

    /** sort.e:253		sequence args = {0, 0}*/
    // SubProg custom_sort pc: 9 op: RIGHT_BRACE_2 (85)
    DeRef(_args_4115);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _args_4115 = MAKE_SEQ(_1);
    // SubProg custom_sort pc: 13 op: STARTLINE (58)

    /** sort.e:255		if order >= 0 then*/
    // SubProg custom_sort pc: 15 op: GREATEREQ_IFW_I (120)
    // SubProg custom_sort pc: 19 op: STARTLINE (58)

    /** sort.e:256			order = -1*/
    // SubProg custom_sort pc: 21 op: ASSIGN_I (113)
    _order_4107 = -1;
    // SubProg custom_sort pc: 24 op: ELSE (23)
    goto L1; // [24] 33
    // SubProg custom_sort pc: 26 op: NOP1 (159)
    // SubProg custom_sort pc: 27 op: STARTLINE (58)

    /** sort.e:258			order = 1*/
    // SubProg custom_sort pc: 29 op: ASSIGN_I (113)
    _order_4107 = 1;
    // SubProg custom_sort pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 4102 op: 159
    // SubProg custom_sort pc: 33 op: STARTLINE (58)

    /** sort.e:261		if atom(data) then*/
    // SubProg custom_sort pc: 35 op: IS_AN_ATOM (67)
    _2000 = IS_ATOM(_data_4106);
    // SubProg custom_sort pc: 38 op: IF (20)
    if (_2000 == 0)
    {
        _2000 = NOVALUE;
        goto L2; // [38] 50
    }
    else{
        _2000 = NOVALUE;
    }
    // SubProg custom_sort pc: 41 op: STARTLINE (58)

    /** sort.e:262			args &= data*/
    // SubProg custom_sort pc: 43 op: CONCAT (15)
    if (IS_SEQUENCE(_args_4115) && IS_ATOM(_data_4106)) {
        Ref(_data_4106);
        Append(&_args_4115, _args_4115, _data_4106);
    }
    else if (IS_ATOM(_args_4115) && IS_SEQUENCE(_data_4106)) {
    }
    else {
        Concat((object_ptr)&_args_4115, _args_4115, _data_4106);
    }
    // SubProg custom_sort pc: 47 op: ELSE (23)
    goto L3; // [47] 70
    // SubProg custom_sort pc: 49 op: NOP1 (159)
L2: // addr: 50 pc: 49 sub: 4102 op: 159
    // SubProg custom_sort pc: 50 op: STARTLINE (58)

    /** sort.e:263		elsif length(data) then*/
    // SubProg custom_sort pc: 52 op: LENGTH (42)
    // Known sequence length:
    _2002 = 0;
    // SubProg custom_sort pc: 55 op: IF (20)
    // SubProg custom_sort pc: 69 op: NOP1 (159)
L3: // addr: 70 pc: 69 sub: 4102 op: 159
    // SubProg custom_sort pc: 70 op: STARTLINE (58)

    /** sort.e:267		last = length(x)*/
    // SubProg custom_sort pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_x_4105)){
            _last_4111 = SEQ_PTR(_x_4105)->length;
    }
    else {
        _last_4111 = 1;
    }
    // SubProg custom_sort pc: 75 op: STARTLINE (58)

    /** sort.e:268		gap = floor(last / 10) + 1*/
    // SubProg custom_sort pc: 77 op: FLOOR_DIV (63)
    if (10 > 0 && _last_4111 >= 0) {
        _2006 = _last_4111 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_4111 / (eudouble)10);
        _2006 = (object)temp_dbl;
    }
    // SubProg custom_sort pc: 81 op: PLUS1_I (117)
    _gap_4108 = _2006 + 1;
    _2006 = NOVALUE;
    // SubProg custom_sort pc: 85 op: STARTLINE (58)

    /** sort.e:269		while 1 do*/
    // SubProg custom_sort pc: 87 op: NOP2 (110)
    // SubProg custom_sort pc: 89 op: NOPWHILE (158)
L4: // addr: 90 pc: 89 sub: 4102 op: 158
    // SubProg custom_sort pc: 90 op: STARTLINE (58)

    /** sort.e:270			first = gap + 1*/
    // SubProg custom_sort pc: 92 op: PLUS1_I (117)
    _first_4110 = _gap_4108 + 1;
    // SubProg custom_sort pc: 96 op: STARTLINE (58)

    /** sort.e:271			for i = first to last do*/
    // SubProg custom_sort pc: 98 op: ASSIGN (18)
    _2009 = _last_4111;
    // SubProg custom_sort pc: 101 op: FOR_I (125)
    {
        object _i_4133;
        _i_4133 = _first_4110;
L5: // addr: 108 pc: 101 sub: 4102 op: 125
        if (_i_4133 > _2009){
            goto L6; // [101] 240
        }
        // SubProg custom_sort pc: 108 op: STARTLINE (58)

        /** sort.e:272				tempi = x[i]*/
        // SubProg custom_sort pc: 110 op: RHS_SUBS (25)
        DeRef(_tempi_4112);
        _2 = (object)SEQ_PTR(_x_4105);
        _tempi_4112 = (object)*(((s1_ptr)_2)->base + _i_4133);
        Ref(_tempi_4112);
        // SubProg custom_sort pc: 114 op: STARTLINE (58)

        /** sort.e:273				args[1] = tempi*/
        // SubProg custom_sort pc: 116 op: ASSIGN_SUBS (16)
        Ref(_tempi_4112);
        _2 = (object)SEQ_PTR(_args_4115);
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_4112;
        DeRef(_1);
        // SubProg custom_sort pc: 120 op: STARTLINE (58)

        /** sort.e:274				j = i - gap*/
        // SubProg custom_sort pc: 122 op: MINUS_I (116)
        _j_4109 = _i_4133 - _gap_4108;
        // SubProg custom_sort pc: 126 op: STARTLINE (58)

        /** sort.e:275				while 1 do*/
        // SubProg custom_sort pc: 128 op: NOP2 (110)
        // SubProg custom_sort pc: 130 op: NOPWHILE (158)
L7: // addr: 131 pc: 130 sub: 4102 op: 158
        // SubProg custom_sort pc: 131 op: STARTLINE (58)

        /** sort.e:276					tempj = x[j]*/
        // SubProg custom_sort pc: 133 op: RHS_SUBS (25)
        DeRef(_tempj_4113);
        _2 = (object)SEQ_PTR(_x_4105);
        _tempj_4113 = (object)*(((s1_ptr)_2)->base + _j_4109);
        Ref(_tempj_4113);
        // SubProg custom_sort pc: 137 op: STARTLINE (58)

        /** sort.e:277					args[2] = tempj*/
        // SubProg custom_sort pc: 139 op: ASSIGN_SUBS (16)
        Ref(_tempj_4113);
        _2 = (object)SEQ_PTR(_args_4115);
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_4113;
        DeRef(_1);
        // SubProg custom_sort pc: 143 op: STARTLINE (58)

        /** sort.e:278					result = call_func(custom_compare, args)*/
        // SubProg custom_sort pc: 145 op: CALL_FUNC (137)
        _1 = (object)SEQ_PTR(_args_4115);
        _2 = (object)((s1_ptr)_1)->base;
        _0 = (object)_00[_custom_compare_4104].addr;
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
        DeRef(_result_4114);
        _result_4114 = _1;
        // SubProg custom_sort pc: 149 op: STARTLINE (58)

        /** sort.e:279					if sequence(result) then*/
        // SubProg custom_sort pc: 151 op: IS_A_SEQUENCE (68)
        _2014 = IS_SEQUENCE(_result_4114);
        // SubProg custom_sort pc: 154 op: IF (20)
        if (_2014 == 0)
        {
            _2014 = NOVALUE;
            goto L8; // [154] 174
        }
        else{
            _2014 = NOVALUE;
        }
        // SubProg custom_sort pc: 157 op: STARTLINE (58)

        /** sort.e:280						args[3] = result[2]*/
        // SubProg custom_sort pc: 159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_result_4114);
        _2015 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg custom_sort pc: 163 op: ASSIGN_SUBS (16)
        Ref(_2015);
        _2 = (object)SEQ_PTR(_args_4115);
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2015;
        if( _1 != _2015 ){
            DeRef(_1);
        }
        _2015 = NOVALUE;
        // SubProg custom_sort pc: 167 op: STARTLINE (58)

        /** sort.e:281						result = result[1]*/
        // SubProg custom_sort pc: 169 op: RHS_SUBS_CHECK (92)
        _0 = _result_4114;
        _2 = (object)SEQ_PTR(_result_4114);
        _result_4114 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_result_4114);
        DeRef(_0);
        // SubProg custom_sort pc: 173 op: NOP1 (159)
L8: // addr: 174 pc: 173 sub: 4102 op: 159
        // SubProg custom_sort pc: 174 op: STARTLINE (58)

        /** sort.e:283					if eu:compare(result, 0) != order then*/
        // SubProg custom_sort pc: 176 op: COMPARE (76)
        if (IS_ATOM_INT(_result_4114) && IS_ATOM_INT(0)){
            _2017 = (_result_4114 < 0) ? -1 : (_result_4114 > 0);
        }
        else{
            _2017 = compare(_result_4114, 0);
        }
        // SubProg custom_sort pc: 180 op: NOTEQ_IFW_I (122)
        if (_2017 == _order_4107)
        goto L9; // [180] 195
        // SubProg custom_sort pc: 184 op: STARTLINE (58)

        /** sort.e:284						j += gap*/
        // SubProg custom_sort pc: 186 op: PLUS_I (115)
        _j_4109 = _j_4109 + _gap_4108;
        // SubProg custom_sort pc: 190 op: STARTLINE (58)

        /** sort.e:285						exit*/
        // SubProg custom_sort pc: 192 op: EXIT (61)
        goto LA; // [192] 227
        // SubProg custom_sort pc: 194 op: NOP1 (159)
L9: // addr: 195 pc: 194 sub: 4102 op: 159
        // SubProg custom_sort pc: 195 op: STARTLINE (58)

        /** sort.e:287					x[j+gap] = tempj*/
        // SubProg custom_sort pc: 197 op: PLUS (11)
        _2020 = _j_4109 + _gap_4108;
        // SubProg custom_sort pc: 201 op: ASSIGN_SUBS (16)
        Ref(_tempj_4113);
        _2 = (object)SEQ_PTR(_x_4105);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_4105 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _2020);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_4113;
        DeRef(_1);
        // SubProg custom_sort pc: 205 op: STARTLINE (58)

        /** sort.e:288					if j <= gap then*/
        // SubProg custom_sort pc: 207 op: LESSEQ_IFW_I (123)
        if (_j_4109 > _gap_4108)
        goto LB; // [207] 216
        // SubProg custom_sort pc: 211 op: STARTLINE (58)

        /** sort.e:289						exit*/
        // SubProg custom_sort pc: 213 op: EXIT (61)
        goto LA; // [213] 227
        // SubProg custom_sort pc: 215 op: NOP1 (159)
LB: // addr: 216 pc: 215 sub: 4102 op: 159
        // SubProg custom_sort pc: 216 op: STARTLINE (58)

        /** sort.e:291					j -= gap*/
        // SubProg custom_sort pc: 218 op: MINUS_I (116)
        _j_4109 = _j_4109 - _gap_4108;
        // SubProg custom_sort pc: 222 op: STARTLINE (58)

        /** sort.e:292				end while*/
        // SubProg custom_sort pc: 224 op: ENDWHILE (22)
        goto L7; // [224] 131
        // SubProg custom_sort pc: 226 op: NOP1 (159)
LA: // addr: 227 pc: 226 sub: 4102 op: 159
        // SubProg custom_sort pc: 227 op: STARTLINE (58)

        /** sort.e:293				x[j] = tempi*/
        // SubProg custom_sort pc: 229 op: ASSIGN_SUBS (16)
        Ref(_tempi_4112);
        _2 = (object)SEQ_PTR(_x_4105);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_4105 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_4109);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_4112;
        DeRef(_1);
        // SubProg custom_sort pc: 233 op: STARTLINE (58)

        /** sort.e:294			end for*/
        // SubProg custom_sort pc: 235 op: ENDFOR_INT_UP1 (54)
        _i_4133 = _i_4133 + 1;
        goto L5; // [235] 108
L6: // addr: 240 pc: 235 sub: 4102 op: 54
        ;
    }
    // SubProg custom_sort pc: 240 op: STARTLINE (58)

    /** sort.e:295			if gap = 1 then*/
    // SubProg custom_sort pc: 242 op: EQUALS_IFW_I (121)
    if (_gap_4108 != 1)
    goto LC; // [242] 255
    // SubProg custom_sort pc: 246 op: STARTLINE (58)

    /** sort.e:296				return x*/
    // SubProg custom_sort pc: 248 op: RETURNF (28)

// Exiting block BLOCK: custom_sort

// block var custom_compare_4104

// block var data_4106
    DeRef(_data_4106);

// block var order_4107

// block var gap_4108

// block var j_4109

// block var first_4110

// block var last_4111

// block var tempi_4112
    DeRef(_tempi_4112);

// block var tempj_4113
    DeRef(_tempj_4113);

// block var result_4114
    DeRef(_result_4114);

// block var args_4115
    DeRef(_args_4115);
    DeRef(_2020);
    _2020 = NOVALUE;
    return _x_4105;
    // SubProg custom_sort pc: 252 op: ELSE (23)
    goto L4; // [252] 90
    // SubProg custom_sort pc: 254 op: NOP1 (159)
LC: // addr: 255 pc: 254 sub: 4102 op: 159
    // SubProg custom_sort pc: 255 op: STARTLINE (58)

    /** sort.e:298				gap = floor(gap / 7) + 1*/
    // SubProg custom_sort pc: 257 op: FLOOR_DIV (63)
    if (7 > 0 && _gap_4108 >= 0) {
        _2024 = _gap_4108 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_4108 / (eudouble)7);
        _2024 = (object)temp_dbl;
    }
    // SubProg custom_sort pc: 261 op: PLUS1_I (117)
    _gap_4108 = _2024 + 1;
    _2024 = NOVALUE;
    // SubProg custom_sort pc: 265 op: NOP1 (159)
    // SubProg custom_sort pc: 266 op: STARTLINE (58)

    /** sort.e:300		end while*/
    // SubProg custom_sort pc: 268 op: ENDWHILE (22)
    goto L4; // [268] 90
    // SubProg custom_sort pc: 270 op: NOP1 (159)
    // SubProg custom_sort pc: 271 op: BADRETURNF (43)
    ;
}


object _24column_compare(object _a_4159, object _b_4160, object _cols_4161)
{
    object _sign_4162 = NOVALUE;
    object _column_4163 = NOVALUE;
    object _2047 = NOVALUE; // 4195 2047
// skipping _2046  name type: 0
    object _2045 = NOVALUE; // 4193 2045
    object _2044 = NOVALUE; // 4190 2044
    object _2043 = NOVALUE; // 4188 2043
    object _2042 = NOVALUE; // 4187 2042
    object _2041 = NOVALUE; // 4186 2041
    object _2040 = NOVALUE; // 4185 2040
// skipping _2039  name type: 0
    object _2038 = NOVALUE; // 4183 2038
    object _2037 = NOVALUE; // 4182 2037
    object _2036 = NOVALUE; // 4181 2036
// skipping _2035  name type: 0
    object _2034 = NOVALUE; // 4178 2034
// skipping _2033  name type: 0
    object _2032 = NOVALUE; // 4175 2032
// skipping _2031  name type: 0
// skipping _2030  name type: 0
    object _2029 = NOVALUE; // 4170 2029
// skipping _2028  name type: 0
    object _2027 = NOVALUE; // 4168 2027
    object _2026 = NOVALUE; // 4166 2026
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg column_compare pc: 1 op: STARTLINE (58)

    /** sort.e:309		for i = 1 to length(cols) do*/
    // SubProg column_compare pc: 3 op: LENGTH (42)
    if (IS_SEQUENCE(_cols_4161)){
            _2026 = SEQ_PTR(_cols_4161)->length;
    }
    else {
        _2026 = 1;
    }
    // SubProg column_compare pc: 6 op: FOR_I (125)
    {
        object _i_4165;
        _i_4165 = 1;
L1: // addr: 13 pc: 6 sub: 4157 op: 125
        if (_i_4165 > _2026){
            goto L2; // [6] 176
        }
        // SubProg column_compare pc: 13 op: STARTLINE (58)

        /** sort.e:310			if cols[i] < 0 then*/
        // SubProg column_compare pc: 15 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_4161);
        _2027 = (object)*(((s1_ptr)_2)->base + _i_4165);
        // SubProg column_compare pc: 19 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _2027, 0)){
            _2027 = NOVALUE;
            goto L3; // [19] 42
        }
        _2027 = NOVALUE;
        // SubProg column_compare pc: 23 op: STARTLINE (58)

        /** sort.e:311				sign = -1*/
        // SubProg column_compare pc: 25 op: ASSIGN_I (113)
        _sign_4162 = -1;
        // SubProg column_compare pc: 28 op: STARTLINE (58)

        /** sort.e:312				column = -cols[i]*/
        // SubProg column_compare pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_4161);
        _2029 = (object)*(((s1_ptr)_2)->base + _i_4165);
        // SubProg column_compare pc: 34 op: UMINUS (12)
        if (IS_ATOM_INT(_2029)) {
            if ((uintptr_t)_2029 == (uintptr_t)HIGH_BITS){
                _column_4163 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _column_4163 = - _2029;
            }
        }
        else {
            _column_4163 = unary_op(UMINUS, _2029);
        }
        _2029 = NOVALUE;
        // SubProg column_compare pc: 37 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_column_4163)) {
            _1 = (object)(DBL_PTR(_column_4163)->dbl);
            DeRefDS(_column_4163);
            _column_4163 = _1;
        }
        // SubProg column_compare pc: 39 op: ELSE (23)
        goto L4; // [39] 56
        // SubProg column_compare pc: 41 op: NOP1 (159)
L3: // addr: 42 pc: 41 sub: 4157 op: 159
        // SubProg column_compare pc: 42 op: STARTLINE (58)

        /** sort.e:314				sign = 1*/
        // SubProg column_compare pc: 44 op: ASSIGN_I (113)
        _sign_4162 = 1;
        // SubProg column_compare pc: 47 op: STARTLINE (58)

        /** sort.e:315				column = cols[i]*/
        // SubProg column_compare pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_cols_4161);
        _column_4163 = (object)*(((s1_ptr)_2)->base + _i_4165);
        if (!IS_ATOM_INT(_column_4163)){
            _column_4163 = (object)DBL_PTR(_column_4163)->dbl;
        }
        // SubProg column_compare pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 4157 op: 159
        // SubProg column_compare pc: 56 op: STARTLINE (58)

        /** sort.e:317			if column <= length(a) then*/
        // SubProg column_compare pc: 58 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 60 op: LENGTH (42)
        if (IS_SEQUENCE(_a_4159)){
                _2032 = SEQ_PTR(_a_4159)->length;
        }
        else {
            _2032 = 1;
        }
        // SubProg column_compare pc: 63 op: LESSEQ_IFW_I (123)
        if (_column_4163 > _2032)
        goto L5; // [63] 137
        // SubProg column_compare pc: 67 op: STARTLINE (58)

        /** sort.e:318				if column <= length(b) then*/
        // SubProg column_compare pc: 69 op: LENGTH (42)
        if (IS_SEQUENCE(_b_4160)){
                _2034 = SEQ_PTR(_b_4160)->length;
        }
        else {
            _2034 = 1;
        }
        // SubProg column_compare pc: 72 op: LESSEQ_IFW_I (123)
        if (_column_4163 > _2034)
        goto L6; // [72] 121
        // SubProg column_compare pc: 76 op: STARTLINE (58)

        /** sort.e:319					if not equal(a[column], b[column]) then*/
        // SubProg column_compare pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_4159);
        _2036 = (object)*(((s1_ptr)_2)->base + _column_4163);
        // SubProg column_compare pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_b_4160);
        _2037 = (object)*(((s1_ptr)_2)->base + _column_4163);
        // SubProg column_compare pc: 86 op: EQUAL (153)
        if (_2036 == _2037)
        _2038 = 1;
        else if (IS_ATOM_INT(_2036) && IS_ATOM_INT(_2037))
        _2038 = 0;
        else
        _2038 = (compare(_2036, _2037) == 0);
        _2036 = NOVALUE;
        _2037 = NOVALUE;
        // SubProg column_compare pc: 90 op: NOT_IFW (108)
        if (_2038 != 0)
        goto L7; // [90] 169
        _2038 = NOVALUE;
        // SubProg column_compare pc: 93 op: STARTLINE (58)

        /** sort.e:320						return sign * eu:compare(a[column], b[column])*/
        // SubProg column_compare pc: 95 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 97 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_a_4159);
        _2040 = (object)*(((s1_ptr)_2)->base + _column_4163);
        // SubProg column_compare pc: 101 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_b_4160);
        _2041 = (object)*(((s1_ptr)_2)->base + _column_4163);
        // SubProg column_compare pc: 105 op: COMPARE (76)
        if (IS_ATOM_INT(_2040) && IS_ATOM_INT(_2041)){
            _2042 = (_2040 < _2041) ? -1 : (_2040 > _2041);
        }
        else{
            _2042 = compare(_2040, _2041);
        }
        _2040 = NOVALUE;
        _2041 = NOVALUE;
        // SubProg column_compare pc: 109 op: MULTIPLY (13)
        if (_sign_4162 == (short)_sign_4162){
            _2043 = _sign_4162 * _2042;
        }
        else{
            _2043 = NewDouble(_sign_4162 * (eudouble)_2042);
        }
        _2042 = NOVALUE;
        // SubProg column_compare pc: 113 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_4159
        DeRef(_a_4159);

// block var b_4160
        DeRef(_b_4160);

// block var cols_4161
        DeRef(_cols_4161);

// block var sign_4162

// block var column_4163
        return _2043;
        // SubProg column_compare pc: 117 op: NOP1 (159)
        // SubProg column_compare pc: 118 op: ELSE (23)
        goto L7; // [118] 169
        // SubProg column_compare pc: 120 op: NOP1 (159)
L6: // addr: 121 pc: 120 sub: 4157 op: 159
        // SubProg column_compare pc: 121 op: STARTLINE (58)

        /** sort.e:323					return sign * -1*/
        // SubProg column_compare pc: 123 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 125 op: MULTIPLY (13)
        if (_sign_4162 == (short)_sign_4162){
            _2044 = _sign_4162 * -1;
        }
        else{
            _2044 = NewDouble(_sign_4162 * (eudouble)-1);
        }
        // SubProg column_compare pc: 129 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_4159
        DeRef(_a_4159);

// block var b_4160
        DeRef(_b_4160);

// block var cols_4161
        DeRef(_cols_4161);

// block var sign_4162

// block var column_4163
        DeRef(_2043);
        _2043 = NOVALUE;
        return _2044;
        // SubProg column_compare pc: 133 op: NOP1 (159)
        // SubProg column_compare pc: 134 op: ELSE (23)
        goto L7; // [134] 169
        // SubProg column_compare pc: 136 op: NOP1 (159)
L5: // addr: 137 pc: 136 sub: 4157 op: 159
        // SubProg column_compare pc: 137 op: STARTLINE (58)

        /** sort.e:326				if column <= length(b) then*/
        // SubProg column_compare pc: 139 op: LENGTH (42)
        if (IS_SEQUENCE(_b_4160)){
                _2045 = SEQ_PTR(_b_4160)->length;
        }
        else {
            _2045 = 1;
        }
        // SubProg column_compare pc: 142 op: LESSEQ_IFW_I (123)
        if (_column_4163 > _2045)
        goto L8; // [142] 161
        // SubProg column_compare pc: 146 op: STARTLINE (58)

        /** sort.e:327					return sign * 1*/
        // SubProg column_compare pc: 148 op: PRIVATE_INIT_CHECK (30)
        // SubProg column_compare pc: 150 op: MULTIPLY (13)
        _2047 = _sign_4162 * 1;
        // SubProg column_compare pc: 154 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_4159
        DeRef(_a_4159);

// block var b_4160
        DeRef(_b_4160);

// block var cols_4161
        DeRef(_cols_4161);

// block var sign_4162

// block var column_4163
        DeRef(_2043);
        _2043 = NOVALUE;
        DeRef(_2044);
        _2044 = NOVALUE;
        return _2047;
        // SubProg column_compare pc: 158 op: ELSE (23)
        goto L9; // [158] 168
        // SubProg column_compare pc: 160 op: NOP1 (159)
L8: // addr: 161 pc: 160 sub: 4157 op: 159
        // SubProg column_compare pc: 161 op: STARTLINE (58)

        /** sort.e:329					return 0*/
        // SubProg column_compare pc: 163 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_4159
        DeRef(_a_4159);

// block var b_4160
        DeRef(_b_4160);

// block var cols_4161
        DeRef(_cols_4161);

// block var sign_4162

// block var column_4163
        DeRef(_2047);
        _2047 = NOVALUE;
        DeRef(_2043);
        _2043 = NOVALUE;
        DeRef(_2044);
        _2044 = NOVALUE;
        return 0;
        // SubProg column_compare pc: 167 op: NOP1 (159)
L9: // addr: 168 pc: 167 sub: 4157 op: 159
        // SubProg column_compare pc: 168 op: NOP1 (159)
L7: // addr: 169 pc: 168 sub: 4157 op: 159
        // SubProg column_compare pc: 169 op: STARTLINE (58)

        /** sort.e:332		end for*/
        // SubProg column_compare pc: 171 op: ENDFOR_INT_UP1 (54)
        _i_4165 = _i_4165 + 1;
        goto L1; // [171] 13
L2: // addr: 176 pc: 171 sub: 4157 op: 54
        ;
    }
    // SubProg column_compare pc: 176 op: STARTLINE (58)

    /** sort.e:333		return 0*/
    // SubProg column_compare pc: 178 op: RETURNF (28)

// Exiting block BLOCK: column_compare

// block var a_4159
    DeRef(_a_4159);

// block var b_4160
    DeRef(_b_4160);

// block var cols_4161
    DeRef(_cols_4161);

// block var sign_4162

// block var column_4163
    DeRef(_2047);
    _2047 = NOVALUE;
    DeRef(_2043);
    _2043 = NOVALUE;
    DeRef(_2044);
    _2044 = NOVALUE;
    return 0;
    // SubProg column_compare pc: 182 op: BADRETURNF (43)
    ;
}



// 0x223538B3
