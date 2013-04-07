// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _14get_bytes(object _fn_10933, object _n_10934)
{
    object _s_10935 = NOVALUE;
    object _c_10936 = NOVALUE;
    object _first_10937 = NOVALUE;
    object _last_10938 = NOVALUE;
    object _6191 = NOVALUE; // 10962 6191
// skipping _6190  name type: 0
// skipping _6189  name type: 0
    object _6188 = NOVALUE; // 10959 6188
// skipping _6187  name type: 0
    object _6186 = NOVALUE; // 10956 6186
    object _6185 = NOVALUE; // 10954 6185
    object _6184 = NOVALUE; // 10953 6184
// skipping _6183  name type: 0
// skipping _6182  name type: 0
// skipping _6181  name type: 0
// skipping _6180  name type: 0
// skipping _6179  name type: 0
// skipping _6178  name type: 0
// skipping _6177  name type: 0
// skipping _6176  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_bytes pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_bytes pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_n_10934)) {
        _1 = (object)(DBL_PTR(_n_10934)->dbl);
        DeRefDS(_n_10934);
        _n_10934 = _1;
    }
    // SubProg get_bytes pc: 5 op: STARTLINE (58)

    /** io.e:455		if n = 0 then*/
    // SubProg get_bytes pc: 7 op: EQUALS_IFW_I (121)
    if (_n_10934 != 0)
    goto L1; // [7] 18
    // SubProg get_bytes pc: 11 op: STARTLINE (58)

    /** io.e:456			return {}*/
    // SubProg get_bytes pc: 13 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_bytes

// block var fn_10933

// block var n_10934

// block var s_10935
    DeRefi(_s_10935);

// block var c_10936

// block var first_10937

// block var last_10938
    return _5;
    // SubProg get_bytes pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 10931 op: 159
    // SubProg get_bytes pc: 18 op: STARTLINE (58)

    /** io.e:459		c = getc(fn)*/
    // SubProg get_bytes pc: 20 op: GETC (33)
    if (_fn_10933 != last_r_file_no) {
        last_r_file_ptr = which_file(_fn_10933, EF_READ);
        last_r_file_no = _fn_10933;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_10936 = getc((FILE*)xstdin);
        }
        else{
            _c_10936 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_10936 = getc(last_r_file_ptr);
    }
    // SubProg get_bytes pc: 23 op: STARTLINE (58)

    /** io.e:460		if c = EOF then*/
    // SubProg get_bytes pc: 25 op: EQUALS_IFW_I (121)
    if (_c_10936 != -1)
    goto L2; // [25] 36
    // SubProg get_bytes pc: 29 op: STARTLINE (58)

    /** io.e:461			return {}*/
    // SubProg get_bytes pc: 31 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_bytes

// block var fn_10933

// block var n_10934

// block var s_10935
    DeRefi(_s_10935);

// block var c_10936

// block var first_10937

// block var last_10938
    return _5;
    // SubProg get_bytes pc: 35 op: NOP1 (159)
L2: // addr: 36 pc: 35 sub: 10931 op: 159
    // SubProg get_bytes pc: 36 op: STARTLINE (58)

    /** io.e:464		s = repeat(c, n)*/
    // SubProg get_bytes pc: 38 op: REPEAT (32)
    DeRefi(_s_10935);
    _s_10935 = Repeat(_c_10936, _n_10934);
    // SubProg get_bytes pc: 42 op: STARTLINE (58)

    /** io.e:466		last = 1*/
    // SubProg get_bytes pc: 44 op: ASSIGN_I (113)
    _last_10938 = 1;
    // SubProg get_bytes pc: 47 op: STARTLINE (58)

    /** io.e:467		while last < n do*/
    // SubProg get_bytes pc: 49 op: NOP2 (110)
    // SubProg get_bytes pc: 51 op: NOPWHILE (158)
L3: // addr: 52 pc: 51 sub: 10931 op: 158
    // SubProg get_bytes pc: 52 op: LESS_IFW_I (119)
    if (_last_10938 >= _n_10934)
    goto L4; // [52] 159
    // SubProg get_bytes pc: 56 op: STARTLINE (58)

    /** io.e:469			first = last+1*/
    // SubProg get_bytes pc: 58 op: PLUS1_I (117)
    _first_10937 = _last_10938 + 1;
    // SubProg get_bytes pc: 62 op: STARTLINE (58)

    /** io.e:470			last  = last+CHUNK*/
    // SubProg get_bytes pc: 64 op: PLUS_I (115)
    _last_10938 = _last_10938 + 100;
    // SubProg get_bytes pc: 68 op: STARTLINE (58)

    /** io.e:471			if last > n then*/
    // SubProg get_bytes pc: 70 op: GREATER_IFW_I (124)
    if (_last_10938 <= _n_10934)
    goto L5; // [70] 80
    // SubProg get_bytes pc: 74 op: STARTLINE (58)

    /** io.e:472				last = n*/
    // SubProg get_bytes pc: 76 op: ASSIGN_I (113)
    _last_10938 = _n_10934;
    // SubProg get_bytes pc: 79 op: NOP1 (159)
L5: // addr: 80 pc: 79 sub: 10931 op: 159
    // SubProg get_bytes pc: 80 op: STARTLINE (58)

    /** io.e:474			for i = first to last do*/
    // SubProg get_bytes pc: 82 op: ASSIGN (18)
    _6184 = _last_10938;
    // SubProg get_bytes pc: 85 op: FOR_I (125)
    {
        object _i_10952;
        _i_10952 = _first_10937;
L6: // addr: 92 pc: 85 sub: 10931 op: 125
        if (_i_10952 > _6184){
            goto L7; // [85] 108
        }
        // SubProg get_bytes pc: 92 op: STARTLINE (58)

        /** io.e:475				s[i] = getc(fn)*/
        // SubProg get_bytes pc: 94 op: GETC (33)
        if (_fn_10933 != last_r_file_no) {
            last_r_file_ptr = which_file(_fn_10933, EF_READ);
            last_r_file_no = _fn_10933;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _6185 = getc((FILE*)xstdin);
            }
            else{
                _6185 = getc(last_r_file_ptr);
            }
        }
        else{
            _6185 = getc(last_r_file_ptr);
        }
        // SubProg get_bytes pc: 97 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_s_10935);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _s_10935 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10952);
        *(intptr_t *)_2 = _6185;
        if( _1 != _6185 ){
        }
        _6185 = NOVALUE;
        // SubProg get_bytes pc: 101 op: STARTLINE (58)

        /** io.e:476			end for*/
        // SubProg get_bytes pc: 103 op: ENDFOR_INT_UP1 (54)
        _i_10952 = _i_10952 + 1;
        goto L6; // [103] 92
L7: // addr: 108 pc: 103 sub: 10931 op: 54
        ;
    }
    // SubProg get_bytes pc: 108 op: STARTLINE (58)

    /** io.e:478			if s[last] = EOF then*/
    // SubProg get_bytes pc: 110 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_10935);
    _6186 = (object)*(((s1_ptr)_2)->base + _last_10938);
    // SubProg get_bytes pc: 114 op: EQUALS_IFW (104)
    if (_6186 != -1)
    goto L3; // [114] 52
    // SubProg get_bytes pc: 118 op: STARTLINE (58)

    /** io.e:480				while s[last] = EOF do*/
    // SubProg get_bytes pc: 120 op: NOP2 (110)
    // SubProg get_bytes pc: 122 op: NOPWHILE (158)
L8: // addr: 123 pc: 122 sub: 10931 op: 158
    // SubProg get_bytes pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_10935);
    _6188 = (object)*(((s1_ptr)_2)->base + _last_10938);
    // SubProg get_bytes pc: 127 op: EQUALS_IFW (104)
    if (_6188 != -1)
    goto L9; // [127] 142
    // SubProg get_bytes pc: 131 op: STARTLINE (58)

    /** io.e:481					last -= 1*/
    // SubProg get_bytes pc: 133 op: MINUS_I (116)
    _last_10938 = _last_10938 - 1;
    // SubProg get_bytes pc: 137 op: STARTLINE (58)

    /** io.e:482				end while*/
    // SubProg get_bytes pc: 139 op: ENDWHILE (22)
    goto L8; // [139] 123
    // SubProg get_bytes pc: 141 op: NOP1 (159)
L9: // addr: 142 pc: 141 sub: 10931 op: 159
    // SubProg get_bytes pc: 142 op: STARTLINE (58)

    /** io.e:483				return s[1..last]*/
    // SubProg get_bytes pc: 144 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6191;
    RHS_Slice(_s_10935, 1, _last_10938);
    // SubProg get_bytes pc: 149 op: RETURNF (28)

// Exiting block BLOCK: get_bytes

// block var fn_10933

// block var n_10934

// block var s_10935
    DeRefDSi(_s_10935);

// block var c_10936

// block var first_10937

// block var last_10938
    _6186 = NOVALUE;
    _6188 = NOVALUE;
    return _6191;
    // SubProg get_bytes pc: 153 op: NOP1 (159)
    // SubProg get_bytes pc: 154 op: STARTLINE (58)

    /** io.e:485		end while*/
    // SubProg get_bytes pc: 156 op: ENDWHILE (22)
    goto L3; // [156] 52
    // SubProg get_bytes pc: 158 op: NOP1 (159)
L4: // addr: 159 pc: 158 sub: 10931 op: 159
    // SubProg get_bytes pc: 159 op: STARTLINE (58)

    /** io.e:486		return s*/
    // SubProg get_bytes pc: 161 op: RETURNF (28)

// Exiting block BLOCK: get_bytes

// block var fn_10933

// block var n_10934

// block var c_10936

// block var first_10937

// block var last_10938
    _6186 = NOVALUE;
    DeRef(_6191);
    _6191 = NOVALUE;
    _6188 = NOVALUE;
    return _s_10935;
    // SubProg get_bytes pc: 165 op: BADRETURNF (43)
    ;
}


object _14seek(object _fn_11080, object _pos_11081)
{
    object _6251 = NOVALUE; // 11083 6251
    object _6250 = NOVALUE; // 11082 6250
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg seek pc: 1 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg seek pc: 3 op: RIGHT_BRACE_2 (85)
    Ref(_pos_11081);
    Ref(_fn_11080);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn_11080;
    ((intptr_t *)_2)[2] = _pos_11081;
    _6250 = MAKE_SEQ(_1);
    // SubProg seek pc: 7 op: MACHINE_FUNC (111)
    _6251 = machine(19, _6250);
    DeRefDS(_6250);
    _6250 = NOVALUE;
    // SubProg seek pc: 11 op: RETURNF (28)

// Exiting block BLOCK: seek

// block var fn_11080
    DeRef(_fn_11080);

// block var pos_11081
    DeRef(_pos_11081);
    return _6251;
    // SubProg seek pc: 15 op: BADRETURNF (43)
    ;
}


object _14where(object _fn_11086)
{
    object _6252 = NOVALUE; // 11087 6252
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg where pc: 1 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg where pc: 3 op: MACHINE_FUNC (111)
    _6252 = machine(20, _fn_11086);
    // SubProg where pc: 7 op: RETURNF (28)

// Exiting block BLOCK: where

// block var fn_11086
    DeRef(_fn_11086);
    return _6252;
    // SubProg where pc: 11 op: BADRETURNF (43)
    ;
}


object _14read_lines(object _file_11105)
{
    object _fn_11106 = NOVALUE;
    object _ret_11107 = NOVALUE;
    object _y_11108 = NOVALUE;
    object _6281 = NOVALUE; // 11145 6281
    object _6280 = NOVALUE; // 11144 6280
    object _6279 = NOVALUE; // 11143 6279
    object _6278 = NOVALUE; // 11142 6278
// skipping _6277  name type: 0
// skipping _6276  name type: 0
// skipping _6275  name type: 0
// skipping _6274  name type: 0
    object _6273 = NOVALUE; // 11135 6273
    object _6272 = NOVALUE; // 11134 6272
// skipping _6271  name type: 0
    object _6270 = NOVALUE; // 11132 6270
    object _6269 = NOVALUE; // 11131 6269
    object _6268 = NOVALUE; // 11129 6268
// skipping _6267  name type: 0
    object _6266 = NOVALUE; // 11126 6266
    object _6265 = NOVALUE; // 11125 6265
// skipping _6264  name type: 0
    object _6263 = NOVALUE; // 11123 6263
    object _6262 = NOVALUE; // 11122 6262
    object _6261 = NOVALUE; // 11120 6261
// skipping _6260  name type: 0
// skipping _6259  name type: 0
// skipping _6258  name type: 0
    object _6257 = NOVALUE; // 11112 6257
    object _6256 = NOVALUE; // 11110 6256
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_lines pc: 1 op: STARTLINE (58)

    /** io.e:1127		if sequence(file) then*/
    // SubProg read_lines pc: 3 op: IS_A_SEQUENCE (68)
    _6256 = 1;
    // SubProg read_lines pc: 6 op: IF (20)
    if (_6256 == 0)
    {
        _6256 = NOVALUE;
        goto L1; // [6] 37
    }
    else{
        _6256 = NOVALUE;
    }
    // SubProg read_lines pc: 9 op: STARTLINE (58)

    /** io.e:1128			if length(file) = 0 then*/
    // SubProg read_lines pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_file_11105)){
            _6257 = SEQ_PTR(_file_11105)->length;
    }
    else {
        _6257 = 1;
    }
    // SubProg read_lines pc: 14 op: EQUALS_IFW_I (121)
    if (_6257 != 0)
    goto L2; // [14] 26
    // SubProg read_lines pc: 18 op: STARTLINE (58)

    /** io.e:1129				fn = 0*/
    // SubProg read_lines pc: 20 op: ASSIGN (18)
    DeRef(_fn_11106);
    _fn_11106 = 0;
    // SubProg read_lines pc: 23 op: ELSE (23)
    goto L3; // [23] 43
    // SubProg read_lines pc: 25 op: NOP1 (159)
L2: // addr: 26 pc: 25 sub: 11103 op: 159
    // SubProg read_lines pc: 26 op: STARTLINE (58)

    /** io.e:1131				fn = open(file, "r")*/
    // SubProg read_lines pc: 28 op: OPEN (37)
    DeRef(_fn_11106);
    _fn_11106 = EOpen(_file_11105, _4568, 0);
    // SubProg read_lines pc: 33 op: NOP1 (159)
    // SubProg read_lines pc: 34 op: ELSE (23)
    goto L3; // [34] 43
    // SubProg read_lines pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 11103 op: 159
    // SubProg read_lines pc: 37 op: STARTLINE (58)

    /** io.e:1134			fn = file*/
    // SubProg read_lines pc: 39 op: ASSIGN (18)
    Ref(_file_11105);
    DeRef(_fn_11106);
    _fn_11106 = _file_11105;
    // SubProg read_lines pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 11103 op: 159
    // SubProg read_lines pc: 43 op: STARTLINE (58)

    /** io.e:1136		if fn < 0 then return -1 end if*/
    // SubProg read_lines pc: 45 op: PRIVATE_INIT_CHECK (30)
    // SubProg read_lines pc: 47 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _fn_11106, 0)){
        goto L4; // [47] 56
    }
    // SubProg read_lines pc: 51 op: RETURNF (28)

// Exiting block BLOCK: read_lines

// block var file_11105
    DeRef(_file_11105);

// block var fn_11106
    DeRef(_fn_11106);

// block var ret_11107
    DeRef(_ret_11107);

// block var y_11108
    DeRefi(_y_11108);
    return -1;
    // SubProg read_lines pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 11103 op: 159
    // SubProg read_lines pc: 56 op: STARTLINE (58)

    /** io.e:1138		ret = {}*/
    // SubProg read_lines pc: 58 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_11107);
    _ret_11107 = _5;
    // SubProg read_lines pc: 61 op: STARTLINE (58)

    /** io.e:1139		while sequence(y) with entry do*/
    // SubProg read_lines pc: 63 op: ELSE (23)
    goto L5; // [63] 162
    // SubProg read_lines pc: 65 op: NOPWHILE (158)
L6: // addr: 66 pc: 65 sub: 11103 op: 158
    // SubProg read_lines pc: 66 op: PRIVATE_INIT_CHECK (30)
    // SubProg read_lines pc: 68 op: IS_A_SEQUENCE (68)
    _6261 = IS_SEQUENCE(_y_11108);
    // SubProg read_lines pc: 71 op: WHILE (47)
    if (_6261 == 0)
    {
        _6261 = NOVALUE;
        goto L7; // [71] 172
    }
    else{
        _6261 = NOVALUE;
    }
    // SubProg read_lines pc: 74 op: STARTLINE (58)

    /** io.e:1140			if y[$] = '\n' then*/
    // SubProg read_lines pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_y_11108)){
            _6262 = SEQ_PTR(_y_11108)->length;
    }
    else {
        _6262 = 1;
    }
    // SubProg read_lines pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_y_11108);
    _6263 = (object)*(((s1_ptr)_2)->base + _6262);
    // SubProg read_lines pc: 83 op: EQUALS_IFW (104)
    if (_6263 != 10)
    goto L8; // [83] 141
    // SubProg read_lines pc: 87 op: STARTLINE (58)

    /** io.e:1141				y = y[1..$-1]*/
    // SubProg read_lines pc: 89 op: LENGTH (42)
    if (IS_SEQUENCE(_y_11108)){
            _6265 = SEQ_PTR(_y_11108)->length;
    }
    else {
        _6265 = 1;
    }
    // SubProg read_lines pc: 92 op: MINUS (10)
    _6266 = _6265 - 1;
    _6265 = NOVALUE;
    // SubProg read_lines pc: 96 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_y_11108;
    RHS_Slice(_y_11108, 1, _6266);
    // SubProg read_lines pc: 101 op: STARTLINE (58)

    /** io.e:1142				ifdef UNIX then*/
    // SubProg read_lines pc: 103 op: STARTLINE (58)

    /** io.e:1143					if length(y) then*/
    // SubProg read_lines pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_y_11108)){
            _6268 = SEQ_PTR(_y_11108)->length;
    }
    else {
        _6268 = 1;
    }
    // SubProg read_lines pc: 108 op: IF (20)
    if (_6268 == 0)
    {
        _6268 = NOVALUE;
        goto L9; // [108] 140
    }
    else{
        _6268 = NOVALUE;
    }
    // SubProg read_lines pc: 111 op: STARTLINE (58)

    /** io.e:1144						if y[$] = '\r' then*/
    // SubProg read_lines pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_y_11108)){
            _6269 = SEQ_PTR(_y_11108)->length;
    }
    else {
        _6269 = 1;
    }
    // SubProg read_lines pc: 116 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_y_11108);
    _6270 = (object)*(((s1_ptr)_2)->base + _6269);
    // SubProg read_lines pc: 120 op: EQUALS_IFW (104)
    if (_6270 != 13)
    goto LA; // [120] 139
    // SubProg read_lines pc: 124 op: STARTLINE (58)

    /** io.e:1145							y = y[1..$-1]*/
    // SubProg read_lines pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_y_11108)){
            _6272 = SEQ_PTR(_y_11108)->length;
    }
    else {
        _6272 = 1;
    }
    // SubProg read_lines pc: 129 op: MINUS (10)
    _6273 = _6272 - 1;
    _6272 = NOVALUE;
    // SubProg read_lines pc: 133 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_y_11108;
    RHS_Slice(_y_11108, 1, _6273);
    // SubProg read_lines pc: 138 op: NOP1 (159)
LA: // addr: 139 pc: 138 sub: 11103 op: 159
    // SubProg read_lines pc: 139 op: NOP1 (159)
L9: // addr: 140 pc: 139 sub: 11103 op: 159
    // SubProg read_lines pc: 140 op: NOP1 (159)
L8: // addr: 141 pc: 140 sub: 11103 op: 159
    // SubProg read_lines pc: 141 op: STARTLINE (58)

    /** io.e:1150			ret = append(ret, y)*/
    // SubProg read_lines pc: 143 op: APPEND (35)
    Ref(_y_11108);
    Append(&_ret_11107, _ret_11107, _y_11108);
    // SubProg read_lines pc: 147 op: STARTLINE (58)

    /** io.e:1151			if fn = 0 then*/
    // SubProg read_lines pc: 149 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _fn_11106, 0)){
        goto LB; // [149] 159
    }
    // SubProg read_lines pc: 153 op: STARTLINE (58)

    /** io.e:1152				puts(2, '\n')*/
    // SubProg read_lines pc: 155 op: PUTS (44)
    EPuts(2, 10); // DJP 
    // SubProg read_lines pc: 158 op: NOP1 (159)
LB: // addr: 159 pc: 158 sub: 11103 op: 159
    // SubProg read_lines pc: 159 op: STARTLINE (58)

    /** io.e:1154		entry*/
    // SubProg read_lines pc: 161 op: NOP1 (159)
L5: // addr: 162 pc: 161 sub: 11103 op: 159
    // SubProg read_lines pc: 162 op: STARTLINE (58)

    /** io.e:1155			y = gets(fn)*/
    // SubProg read_lines pc: 164 op: GETS (17)
    DeRefi(_y_11108);
    _y_11108 = EGets(_fn_11106);
    // SubProg read_lines pc: 167 op: STARTLINE (58)

    /** io.e:1156		end while*/
    // SubProg read_lines pc: 169 op: ENDWHILE (22)
    goto L6; // [169] 66
    // SubProg read_lines pc: 171 op: NOP1 (159)
L7: // addr: 172 pc: 171 sub: 11103 op: 159
    // SubProg read_lines pc: 172 op: STARTLINE (58)

    /** io.e:1158		if sequence(file) and length(file) != 0 then*/
    // SubProg read_lines pc: 174 op: IS_A_SEQUENCE (68)
    _6278 = IS_SEQUENCE(_file_11105);
    // SubProg read_lines pc: 177 op: SC1_AND_IF (146)
    if (_6278 == 0) {
        goto LC; // [177] 197
    }
    // SubProg read_lines pc: 181 op: LENGTH (42)
    if (IS_SEQUENCE(_file_11105)){
            _6280 = SEQ_PTR(_file_11105)->length;
    }
    else {
        _6280 = 1;
    }
    // SubProg read_lines pc: 184 op: NOTEQ (4)
    _6281 = (_6280 != 0);
    _6280 = NOVALUE;
    // SubProg read_lines pc: 188 op: NOP1 (159)
    // SubProg read_lines pc: 189 op: IF (20)
    if (_6281 == 0)
    {
        DeRef(_6281);
        _6281 = NOVALUE;
        goto LC; // [189] 197
    }
    else{
        DeRef(_6281);
        _6281 = NOVALUE;
    }
    // SubProg read_lines pc: 192 op: STARTLINE (58)

    /** io.e:1159			close(fn)*/
    // SubProg read_lines pc: 194 op: CLOSE (86)
    if (IS_ATOM_INT(_fn_11106))
    EClose(_fn_11106);
    else
    EClose((object)DBL_PTR(_fn_11106)->dbl);
    // SubProg read_lines pc: 196 op: NOP1 (159)
LC: // addr: 197 pc: 196 sub: 11103 op: 159
    // SubProg read_lines pc: 197 op: STARTLINE (58)

    /** io.e:1162		return ret*/
    // SubProg read_lines pc: 199 op: RETURNF (28)

// Exiting block BLOCK: read_lines

// block var file_11105
    DeRef(_file_11105);

// block var fn_11106
    DeRef(_fn_11106);

// block var y_11108
    DeRefi(_y_11108);
    DeRef(_6266);
    _6266 = NOVALUE;
    _6263 = NOVALUE;
    _6270 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    return _ret_11107;
    // SubProg read_lines pc: 203 op: BADRETURNF (43)
    ;
}


object _14write_lines(object _file_11199, object _lines_11200)
{
    object _fn_11201 = NOVALUE;
    object _6318 = NOVALUE; // 11214 6318
    object _6317 = NOVALUE; // 11212 6317
    object _6316 = NOVALUE; // 11211 6316
// skipping _6315  name type: 0
// skipping _6314  name type: 0
    object _6312 = NOVALUE; // 11203 6312
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_lines pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg write_lines pc: 3 op: STARTLINE (58)

    /** io.e:1285		if sequence(file) then*/
    // SubProg write_lines pc: 5 op: IS_A_SEQUENCE (68)
    _6312 = 1;
    // SubProg write_lines pc: 8 op: IF (20)
    if (_6312 == 0)
    {
        _6312 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _6312 = NOVALUE;
    }
    // SubProg write_lines pc: 11 op: STARTLINE (58)

    /** io.e:1286	    	fn = open(file, "w")*/
    // SubProg write_lines pc: 13 op: OPEN (37)
    DeRef(_fn_11201);
    _fn_11201 = EOpen(_file_11199, _6313, 0);
    // SubProg write_lines pc: 18 op: ELSE (23)
    goto L2; // [18] 27
    // SubProg write_lines pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 11197 op: 159
    // SubProg write_lines pc: 21 op: STARTLINE (58)

    /** io.e:1288			fn = file*/
    // SubProg write_lines pc: 23 op: ASSIGN (18)
    Ref(_file_11199);
    DeRef(_fn_11201);
    _fn_11201 = _file_11199;
    // SubProg write_lines pc: 26 op: NOP1 (159)
L2: // addr: 27 pc: 26 sub: 11197 op: 159
    // SubProg write_lines pc: 27 op: STARTLINE (58)

    /** io.e:1290		if fn < 0 then return -1 end if*/
    // SubProg write_lines pc: 29 op: PRIVATE_INIT_CHECK (30)
    // SubProg write_lines pc: 31 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _fn_11201, 0)){
        goto L3; // [31] 40
    }
    // SubProg write_lines pc: 35 op: RETURNF (28)

// Exiting block BLOCK: write_lines

// block var file_11199
    DeRef(_file_11199);

// block var lines_11200
    DeRefDS(_lines_11200);

// block var fn_11201
    DeRef(_fn_11201);
    return -1;
    // SubProg write_lines pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 11197 op: 159
    // SubProg write_lines pc: 40 op: STARTLINE (58)

    /** io.e:1292		for i = 1 to length(lines) do*/
    // SubProg write_lines pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_lines_11200)){
            _6316 = SEQ_PTR(_lines_11200)->length;
    }
    else {
        _6316 = 1;
    }
    // SubProg write_lines pc: 45 op: FOR_I (125)
    {
        object _i_11210;
        _i_11210 = 1;
L4: // addr: 52 pc: 45 sub: 11197 op: 125
        if (_i_11210 > _6316){
            goto L5; // [45] 73
        }
        // SubProg write_lines pc: 52 op: STARTLINE (58)

        /** io.e:1293			puts(fn, lines[i])*/
        // SubProg write_lines pc: 54 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_lines_11200);
        _6317 = (object)*(((s1_ptr)_2)->base + _i_11210);
        // SubProg write_lines pc: 58 op: PUTS (44)
        EPuts(_fn_11201, _6317); // DJP 
        _6317 = NOVALUE;
        // SubProg write_lines pc: 61 op: STARTLINE (58)

        /** io.e:1294			puts(fn, '\n')*/
        // SubProg write_lines pc: 63 op: PUTS (44)
        EPuts(_fn_11201, 10); // DJP 
        // SubProg write_lines pc: 66 op: STARTLINE (58)

        /** io.e:1295		end for*/
        // SubProg write_lines pc: 68 op: ENDFOR_INT_UP1 (54)
        _i_11210 = _i_11210 + 1;
        goto L4; // [68] 52
L5: // addr: 73 pc: 68 sub: 11197 op: 54
        ;
    }
    // SubProg write_lines pc: 73 op: STARTLINE (58)

    /** io.e:1297		if sequence(file) then*/
    // SubProg write_lines pc: 75 op: IS_A_SEQUENCE (68)
    _6318 = IS_SEQUENCE(_file_11199);
    // SubProg write_lines pc: 78 op: IF (20)
    if (_6318 == 0)
    {
        _6318 = NOVALUE;
        goto L6; // [78] 86
    }
    else{
        _6318 = NOVALUE;
    }
    // SubProg write_lines pc: 81 op: STARTLINE (58)

    /** io.e:1298			close(fn)*/
    // SubProg write_lines pc: 83 op: CLOSE (86)
    if (IS_ATOM_INT(_fn_11201))
    EClose(_fn_11201);
    else
    EClose((object)DBL_PTR(_fn_11201)->dbl);
    // SubProg write_lines pc: 85 op: NOP1 (159)
L6: // addr: 86 pc: 85 sub: 11197 op: 159
    // SubProg write_lines pc: 86 op: STARTLINE (58)

    /** io.e:1301		return 1*/
    // SubProg write_lines pc: 88 op: RETURNF (28)

// Exiting block BLOCK: write_lines

// block var file_11199
    DeRef(_file_11199);

// block var lines_11200
    DeRefDS(_lines_11200);

// block var fn_11201
    DeRef(_fn_11201);
    return 1;
    // SubProg write_lines pc: 92 op: BADRETURNF (43)
    ;
}


void _14writef(object _fm_11321, object _data_11322, object _fn_11323, object _data_not_string_11324)
{
    object _real_fn_11325 = NOVALUE;
    object _close_fn_11326 = NOVALUE;
    object _out_style_11327 = NOVALUE;
    object _ts_11330 = NOVALUE;
    object _msg_inlined_crash_at_163_11355 = NOVALUE;
    object _data_inlined_crash_at_160_11354 = NOVALUE;
    object _6384 = NOVALUE; // 11362 6384
// skipping _6383  name type: 0
    object _6382 = NOVALUE; // 11360 6382
    object _6381 = NOVALUE; // 11358 6381
    object _6380 = NOVALUE; // 11352 6380
// skipping _6378  name type: 0
// skipping _6377  name type: 0
// skipping _6376  name type: 0
// skipping _6375  name type: 0
    object _6374 = NOVALUE; // 11344 6374
    object _6373 = NOVALUE; // 11343 6373
    object _6372 = NOVALUE; // 11341 6372
    object _6371 = NOVALUE; // 11340 6371
    object _6370 = NOVALUE; // 11338 6370
    object _6369 = NOVALUE; // 11337 6369
// skipping _6368  name type: 0
    object _6367 = NOVALUE; // 11334 6367
    object _6366 = NOVALUE; // 11332 6366
    object _6365 = NOVALUE; // 11329 6365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg writef pc: 1 op: STARTLINE (58)

    /** io.e:1608		integer real_fn = 0*/
    // SubProg writef pc: 3 op: ASSIGN_I (113)
    _real_fn_11325 = 0;
    // SubProg writef pc: 6 op: STARTLINE (58)

    /** io.e:1609		integer close_fn = 0*/
    // SubProg writef pc: 8 op: ASSIGN_I (113)
    _close_fn_11326 = 0;
    // SubProg writef pc: 11 op: STARTLINE (58)

    /** io.e:1610		sequence out_style = "w"*/
    // SubProg writef pc: 13 op: ASSIGN (18)
    RefDS(_6313);
    DeRefi(_out_style_11327);
    _out_style_11327 = _6313;
    // SubProg writef pc: 16 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 18 op: STARTLINE (58)

    /** io.e:1612		if integer(fm) then*/
    // SubProg writef pc: 20 op: IS_AN_INTEGER (94)
    _6365 = 1;
    // SubProg writef pc: 23 op: IF (20)
    if (_6365 == 0)
    {
        _6365 = NOVALUE;
        goto L1; // [23] 49
    }
    else{
        _6365 = NOVALUE;
    }
    // SubProg writef pc: 26 op: STARTLINE (58)

    /** io.e:1613			object ts*/
    // SubProg writef pc: 28 op: STARTLINE (58)

    /** io.e:1615			ts = fm*/
    // SubProg writef pc: 30 op: ASSIGN (18)
    _ts_11330 = _fm_11321;
    // SubProg writef pc: 33 op: STARTLINE (58)

    /** io.e:1616			fm = data*/
    // SubProg writef pc: 35 op: ASSIGN (18)
    RefDS(_data_11322);
    _fm_11321 = _data_11322;
    // SubProg writef pc: 38 op: STARTLINE (58)

    /** io.e:1617			data = fn*/
    // SubProg writef pc: 40 op: ASSIGN (18)
    RefDS(_fn_11323);
    DeRefDS(_data_11322);
    _data_11322 = _fn_11323;
    // SubProg writef pc: 43 op: STARTLINE (58)

    /** io.e:1618			fn = ts*/
    // SubProg writef pc: 45 op: ASSIGN (18)
    DeRefDS(_fn_11323);
    _fn_11323 = _ts_11330;
    // SubProg writef pc: 48 op: NOP1 (159)
L1: // addr: 49 pc: 48 sub: 11319 op: 159
    // SubProg writef pc: 49 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ts_11330
    // SubProg writef pc: 51 op: STARTLINE (58)

    /** io.e:1621		if sequence(fn) then*/
    // SubProg writef pc: 53 op: IS_A_SEQUENCE (68)
    _6366 = IS_SEQUENCE(_fn_11323);
    // SubProg writef pc: 56 op: IF (20)
    if (_6366 == 0)
    {
        _6366 = NOVALUE;
        goto L2; // [56] 191
    }
    else{
        _6366 = NOVALUE;
    }
    // SubProg writef pc: 59 op: STARTLINE (58)

    /** io.e:1622			if length(fn) = 2 then*/
    // SubProg writef pc: 61 op: LENGTH (42)
    if (IS_SEQUENCE(_fn_11323)){
            _6367 = SEQ_PTR(_fn_11323)->length;
    }
    else {
        _6367 = 1;
    }
    // SubProg writef pc: 64 op: EQUALS_IFW_I (121)
    if (_6367 != 2)
    goto L3; // [64] 142
    // SubProg writef pc: 68 op: STARTLINE (58)

    /** io.e:1623				if sequence(fn[1]) then*/
    // SubProg writef pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_11323);
    _6369 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg writef pc: 74 op: IS_A_SEQUENCE (68)
    _6370 = IS_SEQUENCE(_6369);
    _6369 = NOVALUE;
    // SubProg writef pc: 77 op: IF (20)
    if (_6370 == 0)
    {
        _6370 = NOVALUE;
        goto L4; // [77] 141
    }
    else{
        _6370 = NOVALUE;
    }
    // SubProg writef pc: 80 op: STARTLINE (58)

    /** io.e:1624					if equal(fn[2], 'a') then*/
    // SubProg writef pc: 82 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_11323);
    _6371 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg writef pc: 86 op: EQUAL (153)
    if (_6371 == 97)
    _6372 = 1;
    else if (IS_ATOM_INT(_6371) && IS_ATOM_INT(97))
    _6372 = 0;
    else
    _6372 = (compare(_6371, 97) == 0);
    _6371 = NOVALUE;
    // SubProg writef pc: 90 op: IF (20)
    if (_6372 == 0)
    {
        _6372 = NOVALUE;
        goto L5; // [90] 103
    }
    else{
        _6372 = NOVALUE;
    }
    // SubProg writef pc: 93 op: STARTLINE (58)

    /** io.e:1625						out_style = "a"*/
    // SubProg writef pc: 95 op: ASSIGN (18)
    RefDS(_6319);
    DeRefi(_out_style_11327);
    _out_style_11327 = _6319;
    // SubProg writef pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 100 op: ELSE (23)
    goto L6; // [100] 134
    // SubProg writef pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 11319 op: 159
    // SubProg writef pc: 103 op: STARTLINE (58)

    /** io.e:1626					elsif not equal(fn[2], "a") then*/
    // SubProg writef pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_11323);
    _6373 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg writef pc: 109 op: EQUAL (153)
    if (_6373 == _6319)
    _6374 = 1;
    else if (IS_ATOM_INT(_6373) && IS_ATOM_INT(_6319))
    _6374 = 0;
    else
    _6374 = (compare(_6373, _6319) == 0);
    _6373 = NOVALUE;
    // SubProg writef pc: 113 op: NOT_IFW (108)
    if (_6374 != 0)
    goto L7; // [113] 126
    _6374 = NOVALUE;
    // SubProg writef pc: 116 op: STARTLINE (58)

    /** io.e:1627						out_style = "w"*/
    // SubProg writef pc: 118 op: ASSIGN (18)
    RefDS(_6313);
    DeRefi(_out_style_11327);
    _out_style_11327 = _6313;
    // SubProg writef pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 123 op: ELSE (23)
    goto L6; // [123] 134
    // SubProg writef pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 11319 op: 159
    // SubProg writef pc: 126 op: STARTLINE (58)

    /** io.e:1629						out_style = "a"*/
    // SubProg writef pc: 128 op: ASSIGN (18)
    RefDS(_6319);
    DeRefi(_out_style_11327);
    _out_style_11327 = _6319;
    // SubProg writef pc: 131 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 11319 op: 159
    // SubProg writef pc: 134 op: STARTLINE (58)

    /** io.e:1631					fn = fn[1]*/
    // SubProg writef pc: 136 op: RHS_SUBS_CHECK (92)
    _0 = _fn_11323;
    _2 = (object)SEQ_PTR(_fn_11323);
    _fn_11323 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_fn_11323);
    DeRef(_0);
    // SubProg writef pc: 140 op: NOP1 (159)
L4: // addr: 141 pc: 140 sub: 11319 op: 159
    // SubProg writef pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 11319 op: 159
    // SubProg writef pc: 142 op: STARTLINE (58)

    /** io.e:1634			real_fn = open(fn, out_style)*/
    // SubProg writef pc: 144 op: OPEN (37)
    _real_fn_11325 = EOpen(_fn_11323, _out_style_11327, 0);
    // SubProg writef pc: 149 op: STARTLINE (58)

    /** io.e:1636			if real_fn = -1 then*/
    // SubProg writef pc: 151 op: EQUALS_IFW_I (121)
    if (_real_fn_11325 != -1)
    goto L8; // [151] 183
    // SubProg writef pc: 155 op: STARTLINE (58)

    /** io.e:1637				error:crash("Unable to write to '%s'", {fn})*/
    // SubProg writef pc: 157 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_fn_11323);
    ((intptr_t*)_2)[1] = _fn_11323;
    _6380 = MAKE_SEQ(_1);
    // SubProg writef pc: 161 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_160_11354);
    _data_inlined_crash_at_160_11354 = _6380;
    _6380 = NOVALUE;
    // SubProg writef pc: 164 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg writef pc: 166 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_163_11355);
    _msg_inlined_crash_at_163_11355 = EPrintf(-9999999, _6379, _data_inlined_crash_at_160_11354);
    // SubProg writef pc: 170 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg writef pc: 172 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_163_11355);
    // SubProg writef pc: 175 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg writef pc: 177 op: ELSE (23)
    goto L9; // [177] 180
    // SubProg writef pc: 179 op: NOP1 (159)
L9: // addr: 180 pc: 179 sub: 11319 op: 159
    // SubProg writef pc: 180 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from writef @ 160

// block var data_inlined_crash_at_160_11354
    DeRef(_data_inlined_crash_at_160_11354);
    _data_inlined_crash_at_160_11354 = NOVALUE;

// block var msg_inlined_crash_at_163_11355
    DeRefi(_msg_inlined_crash_at_163_11355);
    _msg_inlined_crash_at_163_11355 = NOVALUE;
    // SubProg writef pc: 182 op: NOP1 (159)
L8: // addr: 183 pc: 182 sub: 11319 op: 159
    // SubProg writef pc: 183 op: STARTLINE (58)

    /** io.e:1639			close_fn = 1*/
    // SubProg writef pc: 185 op: ASSIGN_I (113)
    _close_fn_11326 = 1;
    // SubProg writef pc: 188 op: ELSE (23)
    goto LA; // [188] 199
    // SubProg writef pc: 190 op: NOP1 (159)
L2: // addr: 191 pc: 190 sub: 11319 op: 159
    // SubProg writef pc: 191 op: STARTLINE (58)

    /** io.e:1641			real_fn = fn*/
    // SubProg writef pc: 193 op: ASSIGN (18)
    Ref(_fn_11323);
    _real_fn_11325 = _fn_11323;
    // SubProg writef pc: 196 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_real_fn_11325)) {
        _1 = (object)(DBL_PTR(_real_fn_11325)->dbl);
        DeRefDS(_real_fn_11325);
        _real_fn_11325 = _1;
    }
    // SubProg writef pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 11319 op: 159
    // SubProg writef pc: 199 op: STARTLINE (58)

    /** io.e:1644		if equal(data_not_string, 0) then*/
    // SubProg writef pc: 201 op: EQUAL (153)
    if (_data_not_string_11324 == 0)
    _6381 = 1;
    else if (IS_ATOM_INT(_data_not_string_11324) && IS_ATOM_INT(0))
    _6381 = 0;
    else
    _6381 = (compare(_data_not_string_11324, 0) == 0);
    // SubProg writef pc: 205 op: IF (20)
    if (_6381 == 0)
    {
        _6381 = NOVALUE;
        goto LB; // [205] 225
    }
    else{
        _6381 = NOVALUE;
    }
    // SubProg writef pc: 208 op: STARTLINE (58)

    /** io.e:1645			if types:t_display(data) then*/
    // SubProg writef pc: 210 op: PROC (27)
    Ref(_data_11322);
    _6382 = _8t_display(_data_11322);
    // SubProg writef pc: 214 op: IF (20)
    if (_6382 == 0) {
        DeRef(_6382);
        _6382 = NOVALUE;
        goto LC; // [214] 224
    }
    else {
        if (!IS_ATOM_INT(_6382) && DBL_PTR(_6382)->dbl == 0.0){
            DeRef(_6382);
            _6382 = NOVALUE;
            goto LC; // [214] 224
        }
        DeRef(_6382);
        _6382 = NOVALUE;
    }
    DeRef(_6382);
    _6382 = NOVALUE;
    // SubProg writef pc: 217 op: STARTLINE (58)

    /** io.e:1646				data = {data}*/
    // SubProg writef pc: 219 op: RIGHT_BRACE_N (31)
    _0 = _data_11322;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_data_11322);
    ((intptr_t*)_2)[1] = _data_11322;
    _data_11322 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg writef pc: 223 op: NOP1 (159)
LC: // addr: 224 pc: 223 sub: 11319 op: 159
    // SubProg writef pc: 224 op: NOP1 (159)
LB: // addr: 225 pc: 224 sub: 11319 op: 159
    // SubProg writef pc: 225 op: STARTLINE (58)

    /** io.e:1649	    puts(real_fn, text:format( fm, data ) )*/
    // SubProg writef pc: 227 op: PROC (27)
    Ref(_fm_11321);
    Ref(_data_11322);
    _6384 = _15format(_fm_11321, _data_11322);
    // SubProg writef pc: 232 op: PUTS (44)
    EPuts(_real_fn_11325, _6384); // DJP 
    DeRef(_6384);
    _6384 = NOVALUE;
    // SubProg writef pc: 235 op: STARTLINE (58)

    /** io.e:1650	    if close_fn then*/
    // SubProg writef pc: 237 op: IF (20)
    if (_close_fn_11326 == 0)
    {
        goto LD; // [237] 245
    }
    else{
    }
    // SubProg writef pc: 240 op: STARTLINE (58)

    /** io.e:1651	    	close(real_fn)*/
    // SubProg writef pc: 242 op: CLOSE (86)
    EClose(_real_fn_11325);
    // SubProg writef pc: 244 op: NOP1 (159)
LD: // addr: 245 pc: 244 sub: 11319 op: 159
    // SubProg writef pc: 245 op: STARTLINE (58)

    /** io.e:1653	end procedure*/
    // SubProg writef pc: 247 op: RETURNP (29)

// Exiting block BLOCK: writef

// block var fm_11321
    DeRef(_fm_11321);

// block var data_11322
    DeRef(_data_11322);

// block var fn_11323
    DeRef(_fn_11323);

// block var data_not_string_11324

// block var real_fn_11325

// block var close_fn_11326

// block var out_style_11327
    DeRefi(_out_style_11327);
    return;
    // SubProg writef pc: 250 op: BADRETURNF (43)
    ;
}



// 0x6290F526
