// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _19get_bytes(object _fn_3169, object _n_3170)
{
    object _s_3171 = NOVALUE;
    object _c_3172 = NOVALUE;
    object _first_3173 = NOVALUE;
    object _last_3174 = NOVALUE;
    object _1454 = NOVALUE;
    object _1451 = NOVALUE;
    object _1449 = NOVALUE;
    object _1448 = NOVALUE;
    object _1447 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_n_3170)) {
        _1 = (object)(DBL_PTR(_n_3170)->dbl);
        DeRefDS(_n_3170);
        _n_3170 = _1;
    }

    /** io.e:455		if n = 0 then*/
    if (_n_3170 != 0)
    goto L1; // [7] 18

    /** io.e:456			return {}*/
    RefDS(_5);
    DeRefi(_s_3171);
    return _5;
L1: 

    /** io.e:459		c = getc(fn)*/
    if (_fn_3169 != last_r_file_no) {
        last_r_file_ptr = which_file(_fn_3169, EF_READ);
        last_r_file_no = _fn_3169;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3172 = getc((FILE*)xstdin);
        }
        else{
            _c_3172 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3172 = getc(last_r_file_ptr);
    }

    /** io.e:460		if c = EOF then*/
    if (_c_3172 != -1)
    goto L2; // [25] 36

    /** io.e:461			return {}*/
    RefDS(_5);
    DeRefi(_s_3171);
    return _5;
L2: 

    /** io.e:464		s = repeat(c, n)*/
    DeRefi(_s_3171);
    _s_3171 = Repeat(_c_3172, _n_3170);

    /** io.e:466		last = 1*/
    _last_3174 = 1;

    /** io.e:467		while last < n do*/
L3: 
    if (_last_3174 >= _n_3170)
    goto L4; // [52] 159

    /** io.e:469			first = last+1*/
    _first_3173 = _last_3174 + 1;

    /** io.e:470			last  = last+CHUNK*/
    _last_3174 = _last_3174 + 100;

    /** io.e:471			if last > n then*/
    if (_last_3174 <= _n_3170)
    goto L5; // [70] 80

    /** io.e:472				last = n*/
    _last_3174 = _n_3170;
L5: 

    /** io.e:474			for i = first to last do*/
    _1447 = _last_3174;
    {
        object _i_3188;
        _i_3188 = _first_3173;
L6: 
        if (_i_3188 > _1447){
            goto L7; // [85] 108
        }

        /** io.e:475				s[i] = getc(fn)*/
        if (_fn_3169 != last_r_file_no) {
            last_r_file_ptr = which_file(_fn_3169, EF_READ);
            last_r_file_no = _fn_3169;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _1448 = getc((FILE*)xstdin);
            }
            else{
                _1448 = getc(last_r_file_ptr);
            }
        }
        else{
            _1448 = getc(last_r_file_ptr);
        }
        _2 = (object)SEQ_PTR(_s_3171);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _s_3171 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_3188);
        *(intptr_t *)_2 = _1448;
        if( _1 != _1448 ){
        }
        _1448 = NOVALUE;

        /** io.e:476			end for*/
        _i_3188 = _i_3188 + 1;
        goto L6; // [103] 92
L7: 
        ;
    }

    /** io.e:478			if s[last] = EOF then*/
    _2 = (object)SEQ_PTR(_s_3171);
    _1449 = (object)*(((s1_ptr)_2)->base + _last_3174);
    if (_1449 != -1)
    goto L3; // [114] 52

    /** io.e:480				while s[last] = EOF do*/
L8: 
    _2 = (object)SEQ_PTR(_s_3171);
    _1451 = (object)*(((s1_ptr)_2)->base + _last_3174);
    if (_1451 != -1)
    goto L9; // [127] 142

    /** io.e:481					last -= 1*/
    _last_3174 = _last_3174 - 1;

    /** io.e:482				end while*/
    goto L8; // [139] 123
L9: 

    /** io.e:483				return s[1..last]*/
    rhs_slice_target = (object_ptr)&_1454;
    RHS_Slice(_s_3171, 1, _last_3174);
    DeRefDSi(_s_3171);
    _1451 = NOVALUE;
    _1449 = NOVALUE;
    return _1454;

    /** io.e:485		end while*/
    goto L3; // [156] 52
L4: 

    /** io.e:486		return s*/
    _1451 = NOVALUE;
    _1449 = NOVALUE;
    DeRef(_1454);
    _1454 = NOVALUE;
    return _s_3171;
    ;
}


object _19get_integer32(object _fh_3209)
{
    object _c_3210 = NOVALUE;
    object _1464 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:525		c = getc(fh)*/
    if (_fh_3209 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_3209, EF_READ);
        last_r_file_no = _fh_3209;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3210 = getc((FILE*)xstdin);
        }
        else{
            _c_3210 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3210 = getc(last_r_file_ptr);
    }

    /** io.e:526		poke(mem0, c)*/
    if (IS_ATOM_INT(_19mem0_3199)){
        poke_addr = (uint8_t *)_19mem0_3199;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem0_3199)->dbl);
    }
    *poke_addr = (uint8_t)_c_3210;

    /** io.e:527		c = getc(fh)*/
    if (_fh_3209 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_3209, EF_READ);
        last_r_file_no = _fh_3209;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3210 = getc((FILE*)xstdin);
        }
        else{
            _c_3210 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3210 = getc(last_r_file_ptr);
    }

    /** io.e:528		poke(mem1, c)*/
    if (IS_ATOM_INT(_19mem1_3200)){
        poke_addr = (uint8_t *)_19mem1_3200;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem1_3200)->dbl);
    }
    *poke_addr = (uint8_t)_c_3210;

    /** io.e:529		c = getc(fh)*/
    if (_fh_3209 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_3209, EF_READ);
        last_r_file_no = _fh_3209;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3210 = getc((FILE*)xstdin);
        }
        else{
            _c_3210 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3210 = getc(last_r_file_ptr);
    }

    /** io.e:530		poke(mem2, c)*/
    if (IS_ATOM_INT(_19mem2_3201)){
        poke_addr = (uint8_t *)_19mem2_3201;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem2_3201)->dbl);
    }
    *poke_addr = (uint8_t)_c_3210;

    /** io.e:531		c = getc(fh)*/
    if (_fh_3209 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_3209, EF_READ);
        last_r_file_no = _fh_3209;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3210 = getc((FILE*)xstdin);
        }
        else{
            _c_3210 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3210 = getc(last_r_file_ptr);
    }

    /** io.e:532		if c = -1 then*/
    if (_c_3210 != -1)
    goto L1; // [46] 57

    /** io.e:533			return -1*/
    return -1;
L1: 

    /** io.e:535		poke(mem3, c)*/
    if (IS_ATOM_INT(_19mem3_3202)){
        poke_addr = (uint8_t *)_19mem3_3202;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem3_3202)->dbl);
    }
    *poke_addr = (uint8_t)_c_3210;

    /** io.e:536		return peek4u(mem0)*/
    if (IS_ATOM_INT(_19mem0_3199)) {
        _1464 = (object)*(uint32_t *)_19mem0_3199;
        if ((uintptr_t)_1464 > (uintptr_t)MAXINT){
            _1464 = NewDouble((eudouble)(uintptr_t)_1464);
        }
    }
    else {
        _1464 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_19mem0_3199)->dbl);
        if ((uintptr_t)_1464 > (uintptr_t)MAXINT){
            _1464 = NewDouble((eudouble)(uintptr_t)_1464);
        }
    }
    return _1464;
    ;
}


object _19get_integer16(object _fh_3220)
{
    object _c_3221 = NOVALUE;
    object _1468 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:568		c = getc(fh)*/
    if (_fh_3220 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_3220, EF_READ);
        last_r_file_no = _fh_3220;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3221 = getc((FILE*)xstdin);
        }
        else{
            _c_3221 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3221 = getc(last_r_file_ptr);
    }

    /** io.e:569		poke(mem0, c)*/
    if (IS_ATOM_INT(_19mem0_3199)){
        poke_addr = (uint8_t *)_19mem0_3199;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem0_3199)->dbl);
    }
    *poke_addr = (uint8_t)_c_3221;

    /** io.e:570		c = getc(fh)*/
    if (_fh_3220 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_3220, EF_READ);
        last_r_file_no = _fh_3220;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_3221 = getc((FILE*)xstdin);
        }
        else{
            _c_3221 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_3221 = getc(last_r_file_ptr);
    }

    /** io.e:571		if c = -1 then*/
    if (_c_3221 != -1)
    goto L1; // [22] 33

    /** io.e:572			return -1*/
    return -1;
L1: 

    /** io.e:574		poke(mem1, c)*/
    if (IS_ATOM_INT(_19mem1_3200)){
        poke_addr = (uint8_t *)_19mem1_3200;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem1_3200)->dbl);
    }
    *poke_addr = (uint8_t)_c_3221;

    /** io.e:575		return peek2u(mem0)*/
    if (IS_ATOM_INT(_19mem0_3199)) {
        _1468 = *(uint16_t *)_19mem0_3199;
    }
    else {
        _1468 = *(uint16_t *)(uintptr_t)(DBL_PTR(_19mem0_3199)->dbl);
    }
    return _1468;
    ;
}


object _19seek(object _fn_3316, object _pos_3317)
{
    object _1514 = NOVALUE;
    object _1513 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_3317);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn_3316;
    ((intptr_t *)_2)[2] = _pos_3317;
    _1513 = MAKE_SEQ(_1);
    _1514 = machine(19, _1513);
    DeRefDS(_1513);
    _1513 = NOVALUE;
    DeRef(_pos_3317);
    return _1514;
    ;
}


object _19where(object _fn_3322)
{
    object _1515 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    _1515 = machine(20, _fn_3322);
    return _1515;
    ;
}


object _19read_lines(object _file_3341)
{
    object _fn_3342 = NOVALUE;
    object _ret_3343 = NOVALUE;
    object _y_3344 = NOVALUE;
    object _1545 = NOVALUE;
    object _1544 = NOVALUE;
    object _1543 = NOVALUE;
    object _1542 = NOVALUE;
    object _1537 = NOVALUE;
    object _1536 = NOVALUE;
    object _1534 = NOVALUE;
    object _1533 = NOVALUE;
    object _1532 = NOVALUE;
    object _1530 = NOVALUE;
    object _1529 = NOVALUE;
    object _1527 = NOVALUE;
    object _1526 = NOVALUE;
    object _1525 = NOVALUE;
    object _1520 = NOVALUE;
    object _1519 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:1127		if sequence(file) then*/
    _1519 = 1;
    if (_1519 == 0)
    {
        _1519 = NOVALUE;
        goto L1; // [6] 37
    }
    else{
        _1519 = NOVALUE;
    }

    /** io.e:1128			if length(file) = 0 then*/
    if (IS_SEQUENCE(_file_3341)){
            _1520 = SEQ_PTR(_file_3341)->length;
    }
    else {
        _1520 = 1;
    }
    if (_1520 != 0)
    goto L2; // [14] 26

    /** io.e:1129				fn = 0*/
    DeRef(_fn_3342);
    _fn_3342 = 0;
    goto L3; // [23] 43
L2: 

    /** io.e:1131				fn = open(file, "r")*/
    DeRef(_fn_3342);
    _fn_3342 = EOpen(_file_3341, _1522, 0);
    goto L3; // [34] 43
L1: 

    /** io.e:1134			fn = file*/
    Ref(_file_3341);
    DeRef(_fn_3342);
    _fn_3342 = _file_3341;
L3: 

    /** io.e:1136		if fn < 0 then return -1 end if*/
    if (binary_op_a(GREATEREQ, _fn_3342, 0)){
        goto L4; // [47] 56
    }
    DeRef(_file_3341);
    DeRef(_fn_3342);
    DeRef(_ret_3343);
    DeRefi(_y_3344);
    return -1;
L4: 

    /** io.e:1138		ret = {}*/
    RefDS(_5);
    DeRef(_ret_3343);
    _ret_3343 = _5;

    /** io.e:1139		while sequence(y) with entry do*/
    goto L5; // [63] 162
L6: 
    _1525 = IS_SEQUENCE(_y_3344);
    if (_1525 == 0)
    {
        _1525 = NOVALUE;
        goto L7; // [71] 172
    }
    else{
        _1525 = NOVALUE;
    }

    /** io.e:1140			if y[$] = '\n' then*/
    if (IS_SEQUENCE(_y_3344)){
            _1526 = SEQ_PTR(_y_3344)->length;
    }
    else {
        _1526 = 1;
    }
    _2 = (object)SEQ_PTR(_y_3344);
    _1527 = (object)*(((s1_ptr)_2)->base + _1526);
    if (_1527 != 10)
    goto L8; // [83] 141

    /** io.e:1141				y = y[1..$-1]*/
    if (IS_SEQUENCE(_y_3344)){
            _1529 = SEQ_PTR(_y_3344)->length;
    }
    else {
        _1529 = 1;
    }
    _1530 = _1529 - 1;
    _1529 = NOVALUE;
    rhs_slice_target = (object_ptr)&_y_3344;
    RHS_Slice(_y_3344, 1, _1530);

    /** io.e:1142				ifdef UNIX then*/

    /** io.e:1143					if length(y) then*/
    if (IS_SEQUENCE(_y_3344)){
            _1532 = SEQ_PTR(_y_3344)->length;
    }
    else {
        _1532 = 1;
    }
    if (_1532 == 0)
    {
        _1532 = NOVALUE;
        goto L9; // [108] 140
    }
    else{
        _1532 = NOVALUE;
    }

    /** io.e:1144						if y[$] = '\r' then*/
    if (IS_SEQUENCE(_y_3344)){
            _1533 = SEQ_PTR(_y_3344)->length;
    }
    else {
        _1533 = 1;
    }
    _2 = (object)SEQ_PTR(_y_3344);
    _1534 = (object)*(((s1_ptr)_2)->base + _1533);
    if (_1534 != 13)
    goto LA; // [120] 139

    /** io.e:1145							y = y[1..$-1]*/
    if (IS_SEQUENCE(_y_3344)){
            _1536 = SEQ_PTR(_y_3344)->length;
    }
    else {
        _1536 = 1;
    }
    _1537 = _1536 - 1;
    _1536 = NOVALUE;
    rhs_slice_target = (object_ptr)&_y_3344;
    RHS_Slice(_y_3344, 1, _1537);
LA: 
L9: 
L8: 

    /** io.e:1150			ret = append(ret, y)*/
    Ref(_y_3344);
    Append(&_ret_3343, _ret_3343, _y_3344);

    /** io.e:1151			if fn = 0 then*/
    if (binary_op_a(NOTEQ, _fn_3342, 0)){
        goto LB; // [149] 159
    }

    /** io.e:1152				puts(2, '\n')*/
    EPuts(2, 10); // DJP 
LB: 

    /** io.e:1154		entry*/
L5: 

    /** io.e:1155			y = gets(fn)*/
    DeRefi(_y_3344);
    _y_3344 = EGets(_fn_3342);

    /** io.e:1156		end while*/
    goto L6; // [169] 66
L7: 

    /** io.e:1158		if sequence(file) and length(file) != 0 then*/
    _1542 = IS_SEQUENCE(_file_3341);
    if (_1542 == 0) {
        goto LC; // [177] 197
    }
    if (IS_SEQUENCE(_file_3341)){
            _1544 = SEQ_PTR(_file_3341)->length;
    }
    else {
        _1544 = 1;
    }
    _1545 = (_1544 != 0);
    _1544 = NOVALUE;
    if (_1545 == 0)
    {
        DeRef(_1545);
        _1545 = NOVALUE;
        goto LC; // [189] 197
    }
    else{
        DeRef(_1545);
        _1545 = NOVALUE;
    }

    /** io.e:1159			close(fn)*/
    if (IS_ATOM_INT(_fn_3342))
    EClose(_fn_3342);
    else
    EClose((object)DBL_PTR(_fn_3342)->dbl);
LC: 

    /** io.e:1162		return ret*/
    DeRef(_file_3341);
    DeRef(_fn_3342);
    DeRefi(_y_3344);
    DeRef(_1537);
    _1537 = NOVALUE;
    _1534 = NOVALUE;
    DeRef(_1530);
    _1530 = NOVALUE;
    _1527 = NOVALUE;
    return _ret_3343;
    ;
}


object _19write_lines(object _file_3436, object _lines_3437)
{
    object _fn_3438 = NOVALUE;
    object _1582 = NOVALUE;
    object _1581 = NOVALUE;
    object _1580 = NOVALUE;
    object _1576 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:1285		if sequence(file) then*/
    _1576 = 1;
    if (_1576 == 0)
    {
        _1576 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _1576 = NOVALUE;
    }

    /** io.e:1286	    	fn = open(file, "w")*/
    DeRef(_fn_3438);
    _fn_3438 = EOpen(_file_3436, _1577, 0);
    goto L2; // [18] 27
L1: 

    /** io.e:1288			fn = file*/
    Ref(_file_3436);
    DeRef(_fn_3438);
    _fn_3438 = _file_3436;
L2: 

    /** io.e:1290		if fn < 0 then return -1 end if*/
    if (binary_op_a(GREATEREQ, _fn_3438, 0)){
        goto L3; // [31] 40
    }
    DeRef(_file_3436);
    DeRefDS(_lines_3437);
    DeRef(_fn_3438);
    return -1;
L3: 

    /** io.e:1292		for i = 1 to length(lines) do*/
    if (IS_SEQUENCE(_lines_3437)){
            _1580 = SEQ_PTR(_lines_3437)->length;
    }
    else {
        _1580 = 1;
    }
    {
        object _i_3447;
        _i_3447 = 1;
L4: 
        if (_i_3447 > _1580){
            goto L5; // [45] 73
        }

        /** io.e:1293			puts(fn, lines[i])*/
        _2 = (object)SEQ_PTR(_lines_3437);
        _1581 = (object)*(((s1_ptr)_2)->base + _i_3447);
        EPuts(_fn_3438, _1581); // DJP 
        _1581 = NOVALUE;

        /** io.e:1294			puts(fn, '\n')*/
        EPuts(_fn_3438, 10); // DJP 

        /** io.e:1295		end for*/
        _i_3447 = _i_3447 + 1;
        goto L4; // [68] 52
L5: 
        ;
    }

    /** io.e:1297		if sequence(file) then*/
    _1582 = IS_SEQUENCE(_file_3436);
    if (_1582 == 0)
    {
        _1582 = NOVALUE;
        goto L6; // [78] 86
    }
    else{
        _1582 = NOVALUE;
    }

    /** io.e:1298			close(fn)*/
    if (IS_ATOM_INT(_fn_3438))
    EClose(_fn_3438);
    else
    EClose((object)DBL_PTR(_fn_3438)->dbl);
L6: 

    /** io.e:1301		return 1*/
    DeRef(_file_3436);
    DeRefDS(_lines_3437);
    DeRef(_fn_3438);
    return 1;
    ;
}


void _19writef(object _fm_3563, object _data_3564, object _fn_3565, object _data_not_string_3566)
{
    object _real_fn_3567 = NOVALUE;
    object _close_fn_3568 = NOVALUE;
    object _out_style_3569 = NOVALUE;
    object _ts_3572 = NOVALUE;
    object _msg_inlined_crash_at_163_3597 = NOVALUE;
    object _data_inlined_crash_at_160_3596 = NOVALUE;
    object _1653 = NOVALUE;
    object _1651 = NOVALUE;
    object _1650 = NOVALUE;
    object _1649 = NOVALUE;
    object _1643 = NOVALUE;
    object _1642 = NOVALUE;
    object _1641 = NOVALUE;
    object _1640 = NOVALUE;
    object _1639 = NOVALUE;
    object _1638 = NOVALUE;
    object _1636 = NOVALUE;
    object _1635 = NOVALUE;
    object _1634 = NOVALUE;
    object _0, _1, _2;
    

    /** io.e:1608		integer real_fn = 0*/
    _real_fn_3567 = 0;

    /** io.e:1609		integer close_fn = 0*/
    _close_fn_3568 = 0;

    /** io.e:1610		sequence out_style = "w"*/
    RefDS(_1577);
    DeRefi(_out_style_3569);
    _out_style_3569 = _1577;

    /** io.e:1612		if integer(fm) then*/
    _1634 = 1;
    if (_1634 == 0)
    {
        _1634 = NOVALUE;
        goto L1; // [23] 49
    }
    else{
        _1634 = NOVALUE;
    }

    /** io.e:1613			object ts*/

    /** io.e:1615			ts = fm*/
    _ts_3572 = _fm_3563;

    /** io.e:1616			fm = data*/
    RefDS(_data_3564);
    _fm_3563 = _data_3564;

    /** io.e:1617			data = fn*/
    RefDS(_fn_3565);
    DeRefDS(_data_3564);
    _data_3564 = _fn_3565;

    /** io.e:1618			fn = ts*/
    DeRefDS(_fn_3565);
    _fn_3565 = _ts_3572;
L1: 

    /** io.e:1621		if sequence(fn) then*/
    _1635 = IS_SEQUENCE(_fn_3565);
    if (_1635 == 0)
    {
        _1635 = NOVALUE;
        goto L2; // [56] 191
    }
    else{
        _1635 = NOVALUE;
    }

    /** io.e:1622			if length(fn) = 2 then*/
    if (IS_SEQUENCE(_fn_3565)){
            _1636 = SEQ_PTR(_fn_3565)->length;
    }
    else {
        _1636 = 1;
    }
    if (_1636 != 2)
    goto L3; // [64] 142

    /** io.e:1623				if sequence(fn[1]) then*/
    _2 = (object)SEQ_PTR(_fn_3565);
    _1638 = (object)*(((s1_ptr)_2)->base + 1);
    _1639 = IS_SEQUENCE(_1638);
    _1638 = NOVALUE;
    if (_1639 == 0)
    {
        _1639 = NOVALUE;
        goto L4; // [77] 141
    }
    else{
        _1639 = NOVALUE;
    }

    /** io.e:1624					if equal(fn[2], 'a') then*/
    _2 = (object)SEQ_PTR(_fn_3565);
    _1640 = (object)*(((s1_ptr)_2)->base + 2);
    if (_1640 == 97)
    _1641 = 1;
    else if (IS_ATOM_INT(_1640) && IS_ATOM_INT(97))
    _1641 = 0;
    else
    _1641 = (compare(_1640, 97) == 0);
    _1640 = NOVALUE;
    if (_1641 == 0)
    {
        _1641 = NOVALUE;
        goto L5; // [90] 103
    }
    else{
        _1641 = NOVALUE;
    }

    /** io.e:1625						out_style = "a"*/
    RefDS(_1583);
    DeRefi(_out_style_3569);
    _out_style_3569 = _1583;
    goto L6; // [100] 134
L5: 

    /** io.e:1626					elsif not equal(fn[2], "a") then*/
    _2 = (object)SEQ_PTR(_fn_3565);
    _1642 = (object)*(((s1_ptr)_2)->base + 2);
    if (_1642 == _1583)
    _1643 = 1;
    else if (IS_ATOM_INT(_1642) && IS_ATOM_INT(_1583))
    _1643 = 0;
    else
    _1643 = (compare(_1642, _1583) == 0);
    _1642 = NOVALUE;
    if (_1643 != 0)
    goto L7; // [113] 126
    _1643 = NOVALUE;

    /** io.e:1627						out_style = "w"*/
    RefDS(_1577);
    DeRefi(_out_style_3569);
    _out_style_3569 = _1577;
    goto L6; // [123] 134
L7: 

    /** io.e:1629						out_style = "a"*/
    RefDS(_1583);
    DeRefi(_out_style_3569);
    _out_style_3569 = _1583;
L6: 

    /** io.e:1631					fn = fn[1]*/
    _0 = _fn_3565;
    _2 = (object)SEQ_PTR(_fn_3565);
    _fn_3565 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_fn_3565);
    DeRef(_0);
L4: 
L3: 

    /** io.e:1634			real_fn = open(fn, out_style)*/
    _real_fn_3567 = EOpen(_fn_3565, _out_style_3569, 0);

    /** io.e:1636			if real_fn = -1 then*/
    if (_real_fn_3567 != -1)
    goto L8; // [151] 183

    /** io.e:1637				error:crash("Unable to write to '%s'", {fn})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_fn_3565);
    ((intptr_t*)_2)[1] = _fn_3565;
    _1649 = MAKE_SEQ(_1);
    DeRef(_data_inlined_crash_at_160_3596);
    _data_inlined_crash_at_160_3596 = _1649;
    _1649 = NOVALUE;

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_163_3597);
    _msg_inlined_crash_at_163_3597 = EPrintf(-9999999, _1648, _data_inlined_crash_at_160_3596);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_163_3597);

    /** error.e:53	end procedure*/
    goto L9; // [177] 180
L9: 
    DeRef(_data_inlined_crash_at_160_3596);
    _data_inlined_crash_at_160_3596 = NOVALUE;
    DeRefi(_msg_inlined_crash_at_163_3597);
    _msg_inlined_crash_at_163_3597 = NOVALUE;
L8: 

    /** io.e:1639			close_fn = 1*/
    _close_fn_3568 = 1;
    goto LA; // [188] 199
L2: 

    /** io.e:1641			real_fn = fn*/
    Ref(_fn_3565);
    _real_fn_3567 = _fn_3565;
    if (!IS_ATOM_INT(_real_fn_3567)) {
        _1 = (object)(DBL_PTR(_real_fn_3567)->dbl);
        DeRefDS(_real_fn_3567);
        _real_fn_3567 = _1;
    }
LA: 

    /** io.e:1644		if equal(data_not_string, 0) then*/
    if (_data_not_string_3566 == 0)
    _1650 = 1;
    else if (IS_ATOM_INT(_data_not_string_3566) && IS_ATOM_INT(0))
    _1650 = 0;
    else
    _1650 = (compare(_data_not_string_3566, 0) == 0);
    if (_1650 == 0)
    {
        _1650 = NOVALUE;
        goto LB; // [205] 225
    }
    else{
        _1650 = NOVALUE;
    }

    /** io.e:1645			if types:t_display(data) then*/
    Ref(_data_3564);
    _1651 = _9t_display(_data_3564);
    if (_1651 == 0) {
        DeRef(_1651);
        _1651 = NOVALUE;
        goto LC; // [214] 224
    }
    else {
        if (!IS_ATOM_INT(_1651) && DBL_PTR(_1651)->dbl == 0.0){
            DeRef(_1651);
            _1651 = NOVALUE;
            goto LC; // [214] 224
        }
        DeRef(_1651);
        _1651 = NOVALUE;
    }
    DeRef(_1651);
    _1651 = NOVALUE;

    /** io.e:1646				data = {data}*/
    _0 = _data_3564;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_data_3564);
    ((intptr_t*)_2)[1] = _data_3564;
    _data_3564 = MAKE_SEQ(_1);
    DeRef(_0);
LC: 
LB: 

    /** io.e:1649	    puts(real_fn, text:format( fm, data ) )*/
    Ref(_fm_3563);
    Ref(_data_3564);
    _1653 = _13format(_fm_3563, _data_3564);
    EPuts(_real_fn_3567, _1653); // DJP 
    DeRef(_1653);
    _1653 = NOVALUE;

    /** io.e:1650	    if close_fn then*/
    if (_close_fn_3568 == 0)
    {
        goto LD; // [237] 245
    }
    else{
    }

    /** io.e:1651	    	close(real_fn)*/
    EClose(_real_fn_3567);
LD: 

    /** io.e:1653	end procedure*/
    DeRef(_fm_3563);
    DeRef(_data_3564);
    DeRef(_fn_3565);
    DeRefi(_out_style_3569);
    return;
    ;
}



// 0x4689CE44
