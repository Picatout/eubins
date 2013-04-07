// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _23sort(object _x_5519, object _order_5520)
{
    object _gap_5521 = NOVALUE;
    object _j_5522 = NOVALUE;
    object _first_5523 = NOVALUE;
    object _last_5524 = NOVALUE;
    object _tempi_5525 = NOVALUE;
    object _tempj_5526 = NOVALUE;
    object _2818 = NOVALUE;
    object _2814 = NOVALUE;
    object _2811 = NOVALUE;
    object _2807 = NOVALUE;
    object _2804 = NOVALUE;
    object _0, _1, _2;
    

    /** sort.e:72		if order >= 0 then*/

    /** sort.e:73			order = -1*/
    _order_5520 = -1;
    goto L1; // [16] 25

    /** sort.e:75			order = 1*/
    _order_5520 = 1;
L1: 

    /** sort.e:79		last = length(x)*/
    if (IS_SEQUENCE(_x_5519)){
            _last_5524 = SEQ_PTR(_x_5519)->length;
    }
    else {
        _last_5524 = 1;
    }

    /** sort.e:80		gap = floor(last / 10) + 1*/
    if (10 > 0 && _last_5524 >= 0) {
        _2804 = _last_5524 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_5524 / (eudouble)10);
        _2804 = (object)temp_dbl;
    }
    _gap_5521 = _2804 + 1;
    _2804 = NOVALUE;

    /** sort.e:81		while 1 do*/
L2: 

    /** sort.e:82			first = gap + 1*/
    _first_5523 = _gap_5521 + 1;

    /** sort.e:83			for i = first to last do*/
    _2807 = _last_5524;
    {
        object _i_5536;
        _i_5536 = _first_5523;
L3: 
        if (_i_5536 > _2807){
            goto L4; // [56] 152
        }

        /** sort.e:84				tempi = x[i]*/
        DeRef(_tempi_5525);
        _2 = (object)SEQ_PTR(_x_5519);
        _tempi_5525 = (object)*(((s1_ptr)_2)->base + _i_5536);
        Ref(_tempi_5525);

        /** sort.e:85				j = i - gap*/
        _j_5522 = _i_5536 - _gap_5521;

        /** sort.e:86				while 1 do*/
L5: 

        /** sort.e:87					tempj = x[j]*/
        DeRef(_tempj_5526);
        _2 = (object)SEQ_PTR(_x_5519);
        _tempj_5526 = (object)*(((s1_ptr)_2)->base + _j_5522);
        Ref(_tempj_5526);

        /** sort.e:88					if eu:compare(tempi, tempj) != order then*/
        if (IS_ATOM_INT(_tempi_5525) && IS_ATOM_INT(_tempj_5526)){
            _2811 = (_tempi_5525 < _tempj_5526) ? -1 : (_tempi_5525 > _tempj_5526);
        }
        else{
            _2811 = compare(_tempi_5525, _tempj_5526);
        }
        if (_2811 == _order_5520)
        goto L6; // [92] 107

        /** sort.e:89						j += gap*/
        _j_5522 = _j_5522 + _gap_5521;

        /** sort.e:90						exit*/
        goto L7; // [104] 139
L6: 

        /** sort.e:92					x[j+gap] = tempj*/
        _2814 = _j_5522 + _gap_5521;
        Ref(_tempj_5526);
        _2 = (object)SEQ_PTR(_x_5519);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5519 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _2814);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_5526;
        DeRef(_1);

        /** sort.e:93					if j <= gap then*/
        if (_j_5522 > _gap_5521)
        goto L8; // [119] 128

        /** sort.e:94						exit*/
        goto L7; // [125] 139
L8: 

        /** sort.e:96					j -= gap*/
        _j_5522 = _j_5522 - _gap_5521;

        /** sort.e:97				end while*/
        goto L5; // [136] 80
L7: 

        /** sort.e:98				x[j] = tempi*/
        Ref(_tempi_5525);
        _2 = (object)SEQ_PTR(_x_5519);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5519 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_5522);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_5525;
        DeRef(_1);

        /** sort.e:99			end for*/
        _i_5536 = _i_5536 + 1;
        goto L3; // [147] 63
L4: 
        ;
    }

    /** sort.e:100			if gap = 1 then*/
    if (_gap_5521 != 1)
    goto L9; // [154] 167

    /** sort.e:101				return x*/
    DeRef(_tempi_5525);
    DeRef(_tempj_5526);
    DeRef(_2814);
    _2814 = NOVALUE;
    return _x_5519;
    goto L2; // [164] 45
L9: 

    /** sort.e:103				gap = floor(gap / 7) + 1*/
    if (7 > 0 && _gap_5521 >= 0) {
        _2818 = _gap_5521 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_5521 / (eudouble)7);
        _2818 = (object)temp_dbl;
    }
    _gap_5521 = _2818 + 1;
    _2818 = NOVALUE;

    /** sort.e:105		end while*/
    goto L2; // [180] 45
    ;
}


object _23custom_sort(object _custom_compare_5557, object _x_5558, object _data_5559, object _order_5560)
{
    object _gap_5561 = NOVALUE;
    object _j_5562 = NOVALUE;
    object _first_5563 = NOVALUE;
    object _last_5564 = NOVALUE;
    object _tempi_5565 = NOVALUE;
    object _tempj_5566 = NOVALUE;
    object _result_5567 = NOVALUE;
    object _args_5568 = NOVALUE;
    object _2846 = NOVALUE;
    object _2842 = NOVALUE;
    object _2839 = NOVALUE;
    object _2837 = NOVALUE;
    object _2836 = NOVALUE;
    object _2831 = NOVALUE;
    object _2828 = NOVALUE;
    object _2824 = NOVALUE;
    object _2822 = NOVALUE;
    object _0, _1, _2;
    

    /** sort.e:253		sequence args = {0, 0}*/
    DeRef(_args_5568);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _args_5568 = MAKE_SEQ(_1);

    /** sort.e:255		if order >= 0 then*/

    /** sort.e:256			order = -1*/
    _order_5560 = -1;
    goto L1; // [24] 33

    /** sort.e:258			order = 1*/
    _order_5560 = 1;
L1: 

    /** sort.e:261		if atom(data) then*/
    _2822 = IS_ATOM(_data_5559);
    if (_2822 == 0)
    {
        _2822 = NOVALUE;
        goto L2; // [38] 50
    }
    else{
        _2822 = NOVALUE;
    }

    /** sort.e:262			args &= data*/
    if (IS_SEQUENCE(_args_5568) && IS_ATOM(_data_5559)) {
        Ref(_data_5559);
        Append(&_args_5568, _args_5568, _data_5559);
    }
    else if (IS_ATOM(_args_5568) && IS_SEQUENCE(_data_5559)) {
    }
    else {
        Concat((object_ptr)&_args_5568, _args_5568, _data_5559);
    }
    goto L3; // [47] 70
L2: 

    /** sort.e:263		elsif length(data) then*/
    _2824 = 0;
L3: 

    /** sort.e:267		last = length(x)*/
    if (IS_SEQUENCE(_x_5558)){
            _last_5564 = SEQ_PTR(_x_5558)->length;
    }
    else {
        _last_5564 = 1;
    }

    /** sort.e:268		gap = floor(last / 10) + 1*/
    if (10 > 0 && _last_5564 >= 0) {
        _2828 = _last_5564 / 10;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_last_5564 / (eudouble)10);
        _2828 = (object)temp_dbl;
    }
    _gap_5561 = _2828 + 1;
    _2828 = NOVALUE;

    /** sort.e:269		while 1 do*/
L4: 

    /** sort.e:270			first = gap + 1*/
    _first_5563 = _gap_5561 + 1;

    /** sort.e:271			for i = first to last do*/
    _2831 = _last_5564;
    {
        object _i_5586;
        _i_5586 = _first_5563;
L5: 
        if (_i_5586 > _2831){
            goto L6; // [101] 240
        }

        /** sort.e:272				tempi = x[i]*/
        DeRef(_tempi_5565);
        _2 = (object)SEQ_PTR(_x_5558);
        _tempi_5565 = (object)*(((s1_ptr)_2)->base + _i_5586);
        Ref(_tempi_5565);

        /** sort.e:273				args[1] = tempi*/
        Ref(_tempi_5565);
        _2 = (object)SEQ_PTR(_args_5568);
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_5565;
        DeRef(_1);

        /** sort.e:274				j = i - gap*/
        _j_5562 = _i_5586 - _gap_5561;

        /** sort.e:275				while 1 do*/
L7: 

        /** sort.e:276					tempj = x[j]*/
        DeRef(_tempj_5566);
        _2 = (object)SEQ_PTR(_x_5558);
        _tempj_5566 = (object)*(((s1_ptr)_2)->base + _j_5562);
        Ref(_tempj_5566);

        /** sort.e:277					args[2] = tempj*/
        Ref(_tempj_5566);
        _2 = (object)SEQ_PTR(_args_5568);
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_5566;
        DeRef(_1);

        /** sort.e:278					result = call_func(custom_compare, args)*/
        _1 = (object)SEQ_PTR(_args_5568);
        _2 = (object)((s1_ptr)_1)->base;
        _0 = (object)_00[_custom_compare_5557].addr;
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
        DeRef(_result_5567);
        _result_5567 = _1;

        /** sort.e:279					if sequence(result) then*/
        _2836 = IS_SEQUENCE(_result_5567);
        if (_2836 == 0)
        {
            _2836 = NOVALUE;
            goto L8; // [154] 174
        }
        else{
            _2836 = NOVALUE;
        }

        /** sort.e:280						args[3] = result[2]*/
        _2 = (object)SEQ_PTR(_result_5567);
        _2837 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_2837);
        _2 = (object)SEQ_PTR(_args_5568);
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2837;
        if( _1 != _2837 ){
            DeRef(_1);
        }
        _2837 = NOVALUE;

        /** sort.e:281						result = result[1]*/
        _0 = _result_5567;
        _2 = (object)SEQ_PTR(_result_5567);
        _result_5567 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_result_5567);
        DeRef(_0);
L8: 

        /** sort.e:283					if eu:compare(result, 0) != order then*/
        if (IS_ATOM_INT(_result_5567) && IS_ATOM_INT(0)){
            _2839 = (_result_5567 < 0) ? -1 : (_result_5567 > 0);
        }
        else{
            _2839 = compare(_result_5567, 0);
        }
        if (_2839 == _order_5560)
        goto L9; // [180] 195

        /** sort.e:284						j += gap*/
        _j_5562 = _j_5562 + _gap_5561;

        /** sort.e:285						exit*/
        goto LA; // [192] 227
L9: 

        /** sort.e:287					x[j+gap] = tempj*/
        _2842 = _j_5562 + _gap_5561;
        Ref(_tempj_5566);
        _2 = (object)SEQ_PTR(_x_5558);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5558 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _2842);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempj_5566;
        DeRef(_1);

        /** sort.e:288					if j <= gap then*/
        if (_j_5562 > _gap_5561)
        goto LB; // [207] 216

        /** sort.e:289						exit*/
        goto LA; // [213] 227
LB: 

        /** sort.e:291					j -= gap*/
        _j_5562 = _j_5562 - _gap_5561;

        /** sort.e:292				end while*/
        goto L7; // [224] 131
LA: 

        /** sort.e:293				x[j] = tempi*/
        Ref(_tempi_5565);
        _2 = (object)SEQ_PTR(_x_5558);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _x_5558 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _j_5562);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tempi_5565;
        DeRef(_1);

        /** sort.e:294			end for*/
        _i_5586 = _i_5586 + 1;
        goto L5; // [235] 108
L6: 
        ;
    }

    /** sort.e:295			if gap = 1 then*/
    if (_gap_5561 != 1)
    goto LC; // [242] 255

    /** sort.e:296				return x*/
    DeRef(_data_5559);
    DeRef(_tempi_5565);
    DeRef(_tempj_5566);
    DeRef(_result_5567);
    DeRef(_args_5568);
    DeRef(_2842);
    _2842 = NOVALUE;
    return _x_5558;
    goto L4; // [252] 90
LC: 

    /** sort.e:298				gap = floor(gap / 7) + 1*/
    if (7 > 0 && _gap_5561 >= 0) {
        _2846 = _gap_5561 / 7;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_gap_5561 / (eudouble)7);
        _2846 = (object)temp_dbl;
    }
    _gap_5561 = _2846 + 1;
    _2846 = NOVALUE;

    /** sort.e:300		end while*/
    goto L4; // [268] 90
    ;
}


object _23column_compare(object _a_5612, object _b_5613, object _cols_5614)
{
    object _sign_5615 = NOVALUE;
    object _column_5616 = NOVALUE;
    object _2869 = NOVALUE;
    object _2867 = NOVALUE;
    object _2866 = NOVALUE;
    object _2865 = NOVALUE;
    object _2864 = NOVALUE;
    object _2863 = NOVALUE;
    object _2862 = NOVALUE;
    object _2860 = NOVALUE;
    object _2859 = NOVALUE;
    object _2858 = NOVALUE;
    object _2856 = NOVALUE;
    object _2854 = NOVALUE;
    object _2851 = NOVALUE;
    object _2849 = NOVALUE;
    object _2848 = NOVALUE;
    object _0, _1, _2;
    

    /** sort.e:309		for i = 1 to length(cols) do*/
    if (IS_SEQUENCE(_cols_5614)){
            _2848 = SEQ_PTR(_cols_5614)->length;
    }
    else {
        _2848 = 1;
    }
    {
        object _i_5618;
        _i_5618 = 1;
L1: 
        if (_i_5618 > _2848){
            goto L2; // [6] 176
        }

        /** sort.e:310			if cols[i] < 0 then*/
        _2 = (object)SEQ_PTR(_cols_5614);
        _2849 = (object)*(((s1_ptr)_2)->base + _i_5618);
        if (binary_op_a(GREATEREQ, _2849, 0)){
            _2849 = NOVALUE;
            goto L3; // [19] 42
        }
        _2849 = NOVALUE;

        /** sort.e:311				sign = -1*/
        _sign_5615 = -1;

        /** sort.e:312				column = -cols[i]*/
        _2 = (object)SEQ_PTR(_cols_5614);
        _2851 = (object)*(((s1_ptr)_2)->base + _i_5618);
        if (IS_ATOM_INT(_2851)) {
            if ((uintptr_t)_2851 == (uintptr_t)HIGH_BITS){
                _column_5616 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _column_5616 = - _2851;
            }
        }
        else {
            _column_5616 = unary_op(UMINUS, _2851);
        }
        _2851 = NOVALUE;
        if (!IS_ATOM_INT(_column_5616)) {
            _1 = (object)(DBL_PTR(_column_5616)->dbl);
            DeRefDS(_column_5616);
            _column_5616 = _1;
        }
        goto L4; // [39] 56
L3: 

        /** sort.e:314				sign = 1*/
        _sign_5615 = 1;

        /** sort.e:315				column = cols[i]*/
        _2 = (object)SEQ_PTR(_cols_5614);
        _column_5616 = (object)*(((s1_ptr)_2)->base + _i_5618);
        if (!IS_ATOM_INT(_column_5616)){
            _column_5616 = (object)DBL_PTR(_column_5616)->dbl;
        }
L4: 

        /** sort.e:317			if column <= length(a) then*/
        if (IS_SEQUENCE(_a_5612)){
                _2854 = SEQ_PTR(_a_5612)->length;
        }
        else {
            _2854 = 1;
        }
        if (_column_5616 > _2854)
        goto L5; // [63] 137

        /** sort.e:318				if column <= length(b) then*/
        if (IS_SEQUENCE(_b_5613)){
                _2856 = SEQ_PTR(_b_5613)->length;
        }
        else {
            _2856 = 1;
        }
        if (_column_5616 > _2856)
        goto L6; // [72] 121

        /** sort.e:319					if not equal(a[column], b[column]) then*/
        _2 = (object)SEQ_PTR(_a_5612);
        _2858 = (object)*(((s1_ptr)_2)->base + _column_5616);
        _2 = (object)SEQ_PTR(_b_5613);
        _2859 = (object)*(((s1_ptr)_2)->base + _column_5616);
        if (_2858 == _2859)
        _2860 = 1;
        else if (IS_ATOM_INT(_2858) && IS_ATOM_INT(_2859))
        _2860 = 0;
        else
        _2860 = (compare(_2858, _2859) == 0);
        _2858 = NOVALUE;
        _2859 = NOVALUE;
        if (_2860 != 0)
        goto L7; // [90] 169
        _2860 = NOVALUE;

        /** sort.e:320						return sign * eu:compare(a[column], b[column])*/
        _2 = (object)SEQ_PTR(_a_5612);
        _2862 = (object)*(((s1_ptr)_2)->base + _column_5616);
        _2 = (object)SEQ_PTR(_b_5613);
        _2863 = (object)*(((s1_ptr)_2)->base + _column_5616);
        if (IS_ATOM_INT(_2862) && IS_ATOM_INT(_2863)){
            _2864 = (_2862 < _2863) ? -1 : (_2862 > _2863);
        }
        else{
            _2864 = compare(_2862, _2863);
        }
        _2862 = NOVALUE;
        _2863 = NOVALUE;
        if (_sign_5615 == (short)_sign_5615){
            _2865 = _sign_5615 * _2864;
        }
        else{
            _2865 = NewDouble(_sign_5615 * (eudouble)_2864);
        }
        _2864 = NOVALUE;
        DeRef(_a_5612);
        DeRef(_b_5613);
        DeRef(_cols_5614);
        return _2865;
        goto L7; // [118] 169
L6: 

        /** sort.e:323					return sign * -1*/
        if (_sign_5615 == (short)_sign_5615){
            _2866 = _sign_5615 * -1;
        }
        else{
            _2866 = NewDouble(_sign_5615 * (eudouble)-1);
        }
        DeRef(_a_5612);
        DeRef(_b_5613);
        DeRef(_cols_5614);
        DeRef(_2865);
        _2865 = NOVALUE;
        return _2866;
        goto L7; // [134] 169
L5: 

        /** sort.e:326				if column <= length(b) then*/
        if (IS_SEQUENCE(_b_5613)){
                _2867 = SEQ_PTR(_b_5613)->length;
        }
        else {
            _2867 = 1;
        }
        if (_column_5616 > _2867)
        goto L8; // [142] 161

        /** sort.e:327					return sign * 1*/
        _2869 = _sign_5615 * 1;
        DeRef(_a_5612);
        DeRef(_b_5613);
        DeRef(_cols_5614);
        DeRef(_2866);
        _2866 = NOVALUE;
        DeRef(_2865);
        _2865 = NOVALUE;
        return _2869;
        goto L9; // [158] 168
L8: 

        /** sort.e:329					return 0*/
        DeRef(_a_5612);
        DeRef(_b_5613);
        DeRef(_cols_5614);
        DeRef(_2869);
        _2869 = NOVALUE;
        DeRef(_2866);
        _2866 = NOVALUE;
        DeRef(_2865);
        _2865 = NOVALUE;
        return 0;
L9: 
L7: 

        /** sort.e:332		end for*/
        _i_5618 = _i_5618 + 1;
        goto L1; // [171] 13
L2: 
        ;
    }

    /** sort.e:333		return 0*/
    DeRef(_a_5612);
    DeRef(_b_5613);
    DeRef(_cols_5614);
    DeRef(_2869);
    _2869 = NOVALUE;
    DeRef(_2866);
    _2866 = NOVALUE;
    DeRef(_2865);
    _2865 = NOVALUE;
    return 0;
    ;
}



// 0xA4E90CC0
