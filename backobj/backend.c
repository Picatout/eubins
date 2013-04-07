// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _1fatal(object _msg_66319)
{
    object _33029 = NOVALUE; // 66322 33029
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fatal pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg fatal pc: 3 op: STARTLINE (58)

    /** backend.ex:44	    puts(2, msg)*/
    // SubProg fatal pc: 5 op: PUTS (44)
    EPuts(2, _msg_66319); // DJP 
    // SubProg fatal pc: 8 op: STARTLINE (58)

    /** backend.ex:45	    puts(2, '\n')*/
    // SubProg fatal pc: 10 op: PUTS (44)
    EPuts(2, 10); // DJP 
    // SubProg fatal pc: 13 op: STARTLINE (58)

    /** backend.ex:46	    maybe_any_key( GetMsgText(277, 0) )*/
    // SubProg fatal pc: 15 op: PROC (27)
    RefDS(_21936);
    _33029 = _40GetMsgText(277, 0, _21936);
    // SubProg fatal pc: 21 op: PROC (27)
    _27maybe_any_key(_33029, 1);
    _33029 = NOVALUE;
    // SubProg fatal pc: 25 op: STARTLINE (58)

    /** backend.ex:47		abort(1)*/
    // SubProg fatal pc: 27 op: ABORT (126)
    UserCleanup(1);
    // SubProg fatal pc: 29 op: STARTLINE (58)

    /** backend.ex:48	end procedure*/
    // SubProg fatal pc: 31 op: RETURNP (29)

// Exiting block BLOCK: fatal

// block var msg_66319
    DeRefDS(_msg_66319);
    return;
    // SubProg fatal pc: 34 op: BADRETURNF (43)
    ;
}


void _1verify_checksum(object _size_66325, object _vchecksum_66326)
{
    object _checksum_66327 = NOVALUE;
    object _prev_c_66328 = NOVALUE;
    object _c_66329 = NOVALUE;
    object _33044 = NOVALUE; // 66353 33044
// skipping _33043  name type: 0
// skipping _33042  name type: 0
// skipping _33040  name type: 0
// skipping _33039  name type: 0
// skipping _33038  name type: 0
    object _33037 = NOVALUE; // 66343 33037
// skipping _33036  name type: 0
// skipping _33035  name type: 0
// skipping _33034  name type: 0
// skipping _33032  name type: 0
// skipping _33031  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg verify_checksum pc: 1 op: STARTLINE (58)

    /** backend.ex:56		checksum = 11352 -- magic starting point*/
    // SubProg verify_checksum pc: 3 op: ASSIGN (18)
    DeRef(_checksum_66327);
    _checksum_66327 = 11352;
    // SubProg verify_checksum pc: 6 op: STARTLINE (58)

    /** backend.ex:57		size = 0*/
    // SubProg verify_checksum pc: 8 op: ASSIGN (18)
    DeRef(_size_66325);
    _size_66325 = 0;
    // SubProg verify_checksum pc: 11 op: STARTLINE (58)

    /** backend.ex:58		prev_c = -1*/
    // SubProg verify_checksum pc: 13 op: ASSIGN_I (113)
    _prev_c_66328 = -1;
    // SubProg verify_checksum pc: 16 op: STARTLINE (58)

    /** backend.ex:60		while 1 do*/
    // SubProg verify_checksum pc: 18 op: NOP2 (110)
    // SubProg verify_checksum pc: 20 op: NOPWHILE (158)
L1: // addr: 21 pc: 20 sub: 66323 op: 158
    // SubProg verify_checksum pc: 21 op: STARTLINE (58)

    /** backend.ex:61			c = getc(current_db)*/
    // SubProg verify_checksum pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg verify_checksum pc: 25 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_66329 = getc((FILE*)xstdin);
        }
        else{
            _c_66329 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_66329 = getc(last_r_file_ptr);
    }
    // SubProg verify_checksum pc: 28 op: STARTLINE (58)

    /** backend.ex:62			if c = -1 then*/
    // SubProg verify_checksum pc: 30 op: EQUALS_IFW_I (121)
    if (_c_66329 != -1)
    goto L2; // [30] 39
    // SubProg verify_checksum pc: 34 op: STARTLINE (58)

    /** backend.ex:63				exit*/
    // SubProg verify_checksum pc: 36 op: EXIT (61)
    goto L3; // [36] 99
    // SubProg verify_checksum pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 66323 op: 159
    // SubProg verify_checksum pc: 39 op: STARTLINE (58)

    /** backend.ex:66			if c < 100 then*/
    // SubProg verify_checksum pc: 41 op: LESS_IFW_I (119)
    if (_c_66329 >= 100)
    goto L4; // [41] 61
    // SubProg verify_checksum pc: 45 op: STARTLINE (58)

    /** backend.ex:67				if c != 'A' then*/
    // SubProg verify_checksum pc: 47 op: NOTEQ_IFW_I (122)
    if (_c_66329 == 65)
    goto L5; // [47] 72
    // SubProg verify_checksum pc: 51 op: STARTLINE (58)

    /** backend.ex:68					checksum += c*/
    // SubProg verify_checksum pc: 53 op: PLUS (11)
    _0 = _checksum_66327;
    if (IS_ATOM_INT(_checksum_66327)) {
        _checksum_66327 = _checksum_66327 + _c_66329;
        if ((object)((uintptr_t)_checksum_66327 + (uintptr_t)HIGH_BITS) >= 0){
            _checksum_66327 = NewDouble((eudouble)_checksum_66327);
        }
    }
    else {
        _checksum_66327 = NewDouble(DBL_PTR(_checksum_66327)->dbl + (eudouble)_c_66329);
    }
    DeRef(_0);
    // SubProg verify_checksum pc: 57 op: NOP1 (159)
    // SubProg verify_checksum pc: 58 op: ELSE (23)
    goto L5; // [58] 72
    // SubProg verify_checksum pc: 60 op: NOP1 (159)
L4: // addr: 61 pc: 60 sub: 66323 op: 159
    // SubProg verify_checksum pc: 61 op: STARTLINE (58)

    /** backend.ex:71				checksum += c*2*/
    // SubProg verify_checksum pc: 63 op: PLUS (11)
    _33037 = _c_66329 + _c_66329;
    if ((object)((uintptr_t)_33037 + (uintptr_t)HIGH_BITS) >= 0){
        _33037 = NewDouble((eudouble)_33037);
    }
    // SubProg verify_checksum pc: 67 op: PLUS (11)
    _0 = _checksum_66327;
    if (IS_ATOM_INT(_checksum_66327) && IS_ATOM_INT(_33037)) {
        _checksum_66327 = _checksum_66327 + _33037;
        if ((object)((uintptr_t)_checksum_66327 + (uintptr_t)HIGH_BITS) >= 0){
            _checksum_66327 = NewDouble((eudouble)_checksum_66327);
        }
    }
    else {
        if (IS_ATOM_INT(_checksum_66327)) {
            _checksum_66327 = NewDouble((eudouble)_checksum_66327 + DBL_PTR(_33037)->dbl);
        }
        else {
            if (IS_ATOM_INT(_33037)) {
                _checksum_66327 = NewDouble(DBL_PTR(_checksum_66327)->dbl + (eudouble)_33037);
            }
            else
            _checksum_66327 = NewDouble(DBL_PTR(_checksum_66327)->dbl + DBL_PTR(_33037)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_33037);
    _33037 = NOVALUE;
    // SubProg verify_checksum pc: 71 op: NOP1 (159)
L5: // addr: 72 pc: 71 sub: 66323 op: 159
    // SubProg verify_checksum pc: 72 op: STARTLINE (58)

    /** backend.ex:73			size -= 1*/
    // SubProg verify_checksum pc: 74 op: MINUS (10)
    _0 = _size_66325;
    if (IS_ATOM_INT(_size_66325)) {
        _size_66325 = _size_66325 - 1;
        if ((object)((uintptr_t)_size_66325 +(uintptr_t) HIGH_BITS) >= 0){
            _size_66325 = NewDouble((eudouble)_size_66325);
        }
    }
    else {
        _size_66325 = NewDouble(DBL_PTR(_size_66325)->dbl - (eudouble)1);
    }
    DeRef(_0);
    // SubProg verify_checksum pc: 78 op: STARTLINE (58)

    /** backend.ex:74			if size = 0 then*/
    // SubProg verify_checksum pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _size_66325, 0)){
        goto L6; // [80] 89
    }
    // SubProg verify_checksum pc: 84 op: STARTLINE (58)

    /** backend.ex:75				exit*/
    // SubProg verify_checksum pc: 86 op: EXIT (61)
    goto L3; // [86] 99
    // SubProg verify_checksum pc: 88 op: NOP1 (159)
L6: // addr: 89 pc: 88 sub: 66323 op: 159
    // SubProg verify_checksum pc: 89 op: STARTLINE (58)

    /** backend.ex:77			prev_c = c*/
    // SubProg verify_checksum pc: 91 op: ASSIGN_I (113)
    _prev_c_66328 = _c_66329;
    // SubProg verify_checksum pc: 94 op: STARTLINE (58)

    /** backend.ex:78		end while*/
    // SubProg verify_checksum pc: 96 op: ENDWHILE (22)
    goto L1; // [96] 21
    // SubProg verify_checksum pc: 98 op: NOP1 (159)
L3: // addr: 99 pc: 98 sub: 66323 op: 159
    // SubProg verify_checksum pc: 99 op: STARTLINE (58)

    /** backend.ex:80		checksum = remainder(checksum, 1000000000)*/
    // SubProg verify_checksum pc: 101 op: REMAINDER (71)
    _0 = _checksum_66327;
    if (IS_ATOM_INT(_checksum_66327)) {
        _checksum_66327 = (_checksum_66327 % 1000000000);
    }
    else {
        temp_d.dbl = (eudouble)1000000000;
        _checksum_66327 = Dremainder(DBL_PTR(_checksum_66327), &temp_d);
    }
    DeRef(_0);
    // SubProg verify_checksum pc: 105 op: STARTLINE (58)

    /** backend.ex:81		if checksum != vchecksum then*/
    // SubProg verify_checksum pc: 107 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _checksum_66327, _vchecksum_66326)){
        goto L7; // [107] 123
    }
    // SubProg verify_checksum pc: 111 op: STARTLINE (58)

    /** backend.ex:82			fatal( GetMsgText(295) )*/
    // SubProg verify_checksum pc: 113 op: PROC (27)
    RefDS(_21936);
    _33044 = _40GetMsgText(295, 1, _21936);
    // SubProg verify_checksum pc: 119 op: PROC (27)
    _1fatal(_33044);
    _33044 = NOVALUE;
    // SubProg verify_checksum pc: 122 op: NOP1 (159)
L7: // addr: 123 pc: 122 sub: 66323 op: 159
    // SubProg verify_checksum pc: 123 op: STARTLINE (58)

    /** backend.ex:84	end procedure   */
    // SubProg verify_checksum pc: 125 op: RETURNP (29)

// Exiting block BLOCK: verify_checksum

// block var size_66325
    DeRef(_size_66325);

// block var vchecksum_66326
    DeRef(_vchecksum_66326);

// block var checksum_66327
    DeRef(_checksum_66327);

// block var prev_c_66328

// block var c_66329
    return;
    // SubProg verify_checksum pc: 128 op: BADRETURNF (43)
    ;
}


void _1InputIL()
{
    object _c1_66356 = NOVALUE;
    object _c2_66357 = NOVALUE;
    object _start_66358 = NOVALUE;
    object _size_66359 = NOVALUE;
    object _checksum_66360 = NOVALUE;
    object _switches_66361 = NOVALUE;
// skipping _33102  name type: 0
// skipping _33101  name type: 0
// skipping _33100  name type: 0
// skipping _33099  name type: 0
// skipping _33098  name type: 0
// skipping _33097  name type: 0
// skipping _33096  name type: 0
// skipping _33095  name type: 0
// skipping _33094  name type: 0
// skipping _33093  name type: 0
// skipping _33092  name type: 0
// skipping _33091  name type: 0
    object _33090 = NOVALUE; // 66433 33090
// skipping _33089  name type: 0
    object _33088 = NOVALUE; // 66430 33088
// skipping _33087  name type: 0
// skipping _33086  name type: 0
    object _33085 = NOVALUE; // 66422 33085
    object _33084 = NOVALUE; // 66421 33084
    object _33083 = NOVALUE; // 66420 33083
    object _33082 = NOVALUE; // 66418 33082
    object _33081 = NOVALUE; // 66417 33081
    object _33080 = NOVALUE; // 66416 33080
    object _33079 = NOVALUE; // 66415 33079
    object _33078 = NOVALUE; // 66413 33078
    object _33077 = NOVALUE; // 66412 33077
    object _33076 = NOVALUE; // 66411 33076
    object _33075 = NOVALUE; // 66410 33075
    object _33074 = NOVALUE; // 66408 33074
    object _33073 = NOVALUE; // 66407 33073
// skipping _33072  name type: 0
    object _33071 = NOVALUE; // 66404 33071
    object _33069 = NOVALUE; // 66402 33069
    object _33068 = NOVALUE; // 66401 33068
    object _33067 = NOVALUE; // 66399 33067
    object _33066 = NOVALUE; // 66398 33066
    object _33064 = NOVALUE; // 66396 33064
    object _33063 = NOVALUE; // 66395 33063
    object _33062 = NOVALUE; // 66393 33062
    object _33061 = NOVALUE; // 66392 33061
    object _33060 = NOVALUE; // 66391 33060
    object _33059 = NOVALUE; // 66390 33059
    object _33058 = NOVALUE; // 66388 33058
    object _33057 = NOVALUE; // 66387 33057
    object _33056 = NOVALUE; // 66385 33056
// skipping _33055  name type: 0
    object _33054 = NOVALUE; // 66380 33054
    object _33053 = NOVALUE; // 66378 33053
// skipping _33052  name type: 0
    object _33051 = NOVALUE; // 66376 33051
// skipping _33050  name type: 0
// skipping _33049  name type: 0
    object _33048 = NOVALUE; // 66369 33048
    object _33047 = NOVALUE; // 66368 33047
// skipping _33046  name type: 0
// skipping _33045  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InputIL pc: 1 op: STARTLINE (58)

    /** backend.ex:93		c1 = getc(current_db)*/
    // SubProg InputIL pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 5 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c1_66356 = getc((FILE*)xstdin);
        }
        else{
            _c1_66356 = getc(last_r_file_ptr);
        }
    }
    else{
        _c1_66356 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 8 op: STARTLINE (58)

    /** backend.ex:94		if c1 = '#' then*/
    // SubProg InputIL pc: 10 op: EQUALS_IFW_I (121)
    if (_c1_66356 != 35)
    goto L1; // [10] 36
    // SubProg InputIL pc: 14 op: STARTLINE (58)

    /** backend.ex:96			if atom(gets(current_db)) then*/
    // SubProg InputIL pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 18 op: GETS (17)
    _33047 = EGets(_59current_db_22388);
    // SubProg InputIL pc: 21 op: IS_AN_ATOM (67)
    _33048 = IS_ATOM(_33047);
    DeRef(_33047);
    _33047 = NOVALUE;
    // SubProg InputIL pc: 24 op: IF (20)
    if (_33048 == 0)
    {
        _33048 = NOVALUE;
        goto L2; // [24] 28
    }
    else{
        _33048 = NOVALUE;
    }
    // SubProg InputIL pc: 27 op: NOP1 (159)
L2: // addr: 28 pc: 27 sub: 66354 op: 159
    // SubProg InputIL pc: 28 op: STARTLINE (58)

    /** backend.ex:98			c1 = getc(current_db)*/
    // SubProg InputIL pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 32 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c1_66356 = getc((FILE*)xstdin);
        }
        else{
            _c1_66356 = getc(last_r_file_ptr);
        }
    }
    else{
        _c1_66356 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 66354 op: 159
    // SubProg InputIL pc: 36 op: STARTLINE (58)

    /** backend.ex:101		c2 = getc(current_db) -- IL version*/
    // SubProg InputIL pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 40 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c2_66357 = getc((FILE*)xstdin);
        }
        else{
            _c2_66357 = getc(last_r_file_ptr);
        }
    }
    else{
        _c2_66357 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 43 op: STARTLINE (58)

    /** backend.ex:102		if c1 != IL_MAGIC or c2 < 10 then*/
    // SubProg InputIL pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 47 op: NOTEQ (4)
    _33051 = (_c1_66356 != 79);
    // SubProg InputIL pc: 51 op: SC1_OR_IF (147)
    if (_33051 != 0) {
        goto L3; // [51] 64
    }
    // SubProg InputIL pc: 55 op: LESS (1)
    _33053 = (_c2_66357 < 10);
    // SubProg InputIL pc: 59 op: NOP1 (159)
    // SubProg InputIL pc: 60 op: IF (20)
    if (_33053 == 0)
    {
        DeRef(_33053);
        _33053 = NOVALUE;
        goto L4; // [60] 76
    }
    else{
        DeRef(_33053);
        _33053 = NOVALUE;
    }
    // SubProg InputIL pc: 63 op: NOP1 (159)
L3: // addr: 64 pc: 63 sub: 66354 op: 159
    // SubProg InputIL pc: 64 op: STARTLINE (58)

    /** backend.ex:103			fatal( GetMsgText(296))*/
    // SubProg InputIL pc: 66 op: PROC (27)
    RefDS(_21936);
    _33054 = _40GetMsgText(296, 1, _21936);
    // SubProg InputIL pc: 72 op: PROC (27)
    _1fatal(_33054);
    _33054 = NOVALUE;
    // SubProg InputIL pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 66354 op: 159
    // SubProg InputIL pc: 76 op: STARTLINE (58)

    /** backend.ex:106		if c2 != IL_VERSION then*/
    // SubProg InputIL pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 80 op: NOTEQ_IFW (105)
    if (_c2_66357 == 13)
    goto L5; // [80] 96
    // SubProg InputIL pc: 84 op: STARTLINE (58)

    /** backend.ex:107			fatal( GetMsgText(297) )*/
    // SubProg InputIL pc: 86 op: PROC (27)
    RefDS(_21936);
    _33056 = _40GetMsgText(297, 1, _21936);
    // SubProg InputIL pc: 92 op: PROC (27)
    _1fatal(_33056);
    _33056 = NOVALUE;
    // SubProg InputIL pc: 95 op: NOP1 (159)
L5: // addr: 96 pc: 95 sub: 66354 op: 159
    // SubProg InputIL pc: 96 op: STARTLINE (58)

    /** backend.ex:111		size = (getc(current_db) - 32) +*/
    // SubProg InputIL pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 100 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33057 = getc((FILE*)xstdin);
        }
        else{
            _33057 = getc(last_r_file_ptr);
        }
    }
    else{
        _33057 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 103 op: MINUS (10)
    _33058 = _33057 - 32;
    _33057 = NOVALUE;
    // SubProg InputIL pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 109 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33059 = getc((FILE*)xstdin);
        }
        else{
            _33059 = getc(last_r_file_ptr);
        }
    }
    else{
        _33059 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 112 op: MINUS (10)
    _33060 = _33059 - 32;
    _33059 = NOVALUE;
    // SubProg InputIL pc: 116 op: MULTIPLY (13)
    _33061 = _33060 * 200;
    _33060 = NOVALUE;
    // SubProg InputIL pc: 120 op: PLUS (11)
    _33062 = _33058 + _33061;
    _33058 = NOVALUE;
    _33061 = NOVALUE;
    // SubProg InputIL pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 126 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33063 = getc((FILE*)xstdin);
        }
        else{
            _33063 = getc(last_r_file_ptr);
        }
    }
    else{
        _33063 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 129 op: MINUS (10)
    _33064 = _33063 - 32;
    _33063 = NOVALUE;
    // SubProg InputIL pc: 133 op: MULTIPLY (13)
    _33066 = _33064 * 40000;
    _33064 = NOVALUE;
    // SubProg InputIL pc: 137 op: PLUS (11)
    _33067 = _33062 + _33066;
    _33062 = NOVALUE;
    _33066 = NOVALUE;
    // SubProg InputIL pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 143 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33068 = getc((FILE*)xstdin);
        }
        else{
            _33068 = getc(last_r_file_ptr);
        }
    }
    else{
        _33068 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 146 op: MINUS (10)
    _33069 = _33068 - 32;
    _33068 = NOVALUE;
    // SubProg InputIL pc: 150 op: MULTIPLY (13)
    _33071 = NewDouble(_33069 * (eudouble)8000000);
    _33069 = NOVALUE;
    // SubProg InputIL pc: 154 op: PLUS (11)
    DeRef(_size_66359);
    if (IS_ATOM_INT(_33071)) {
        _size_66359 = _33067 + _33071;
        if ((object)((uintptr_t)_size_66359 + (uintptr_t)HIGH_BITS) >= 0){
            _size_66359 = NewDouble((eudouble)_size_66359);
        }
    }
    else {
        _size_66359 = NewDouble((eudouble)_33067 + DBL_PTR(_33071)->dbl);
    }
    _33067 = NOVALUE;
    DeRef(_33071);
    _33071 = NOVALUE;
    // SubProg InputIL pc: 158 op: STARTLINE (58)

    /** backend.ex:117		checksum = (getc(current_db) - 32) +*/
    // SubProg InputIL pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 162 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33073 = getc((FILE*)xstdin);
        }
        else{
            _33073 = getc(last_r_file_ptr);
        }
    }
    else{
        _33073 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 165 op: MINUS (10)
    _33074 = _33073 - 32;
    _33073 = NOVALUE;
    // SubProg InputIL pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 171 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33075 = getc((FILE*)xstdin);
        }
        else{
            _33075 = getc(last_r_file_ptr);
        }
    }
    else{
        _33075 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 174 op: MINUS (10)
    _33076 = _33075 - 32;
    _33075 = NOVALUE;
    // SubProg InputIL pc: 178 op: MULTIPLY (13)
    _33077 = _33076 * 200;
    _33076 = NOVALUE;
    // SubProg InputIL pc: 182 op: PLUS (11)
    _33078 = _33074 + _33077;
    _33074 = NOVALUE;
    _33077 = NOVALUE;
    // SubProg InputIL pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 188 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33079 = getc((FILE*)xstdin);
        }
        else{
            _33079 = getc(last_r_file_ptr);
        }
    }
    else{
        _33079 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 191 op: MINUS (10)
    _33080 = _33079 - 32;
    _33079 = NOVALUE;
    // SubProg InputIL pc: 195 op: MULTIPLY (13)
    _33081 = _33080 * 40000;
    _33080 = NOVALUE;
    // SubProg InputIL pc: 199 op: PLUS (11)
    _33082 = _33078 + _33081;
    _33078 = NOVALUE;
    _33081 = NOVALUE;
    // SubProg InputIL pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 205 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33083 = getc((FILE*)xstdin);
        }
        else{
            _33083 = getc(last_r_file_ptr);
        }
    }
    else{
        _33083 = getc(last_r_file_ptr);
    }
    // SubProg InputIL pc: 208 op: MINUS (10)
    _33084 = _33083 - 32;
    _33083 = NOVALUE;
    // SubProg InputIL pc: 212 op: MULTIPLY (13)
    _33085 = NewDouble(_33084 * (eudouble)8000000);
    _33084 = NOVALUE;
    // SubProg InputIL pc: 216 op: PLUS (11)
    DeRef(_checksum_66360);
    if (IS_ATOM_INT(_33085)) {
        _checksum_66360 = _33082 + _33085;
        if ((object)((uintptr_t)_checksum_66360 + (uintptr_t)HIGH_BITS) >= 0){
            _checksum_66360 = NewDouble((eudouble)_checksum_66360);
        }
    }
    else {
        _checksum_66360 = NewDouble((eudouble)_33082 + DBL_PTR(_33085)->dbl);
    }
    _33082 = NOVALUE;
    DeRef(_33085);
    _33085 = NOVALUE;
    // SubProg InputIL pc: 220 op: STARTLINE (58)

    /** backend.ex:122		start = where(current_db)*/
    // SubProg InputIL pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 224 op: PROC (27)
    _start_66358 = _14where(_59current_db_22388);
    // SubProg InputIL pc: 228 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_start_66358)) {
        _1 = (object)(DBL_PTR(_start_66358)->dbl);
        DeRefDS(_start_66358);
        _start_66358 = _1;
    }
    // SubProg InputIL pc: 230 op: STARTLINE (58)

    /** backend.ex:124		verify_checksum(size, checksum) -- reads rest of file*/
    // SubProg InputIL pc: 232 op: PROC (27)
    Ref(_size_66359);
    Ref(_checksum_66360);
    _1verify_checksum(_size_66359, _checksum_66360);
    // SubProg InputIL pc: 236 op: STARTLINE (58)

    /** backend.ex:127		if seek(current_db, start) != 0 then*/
    // SubProg InputIL pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 240 op: PROC (27)
    _33088 = _14seek(_59current_db_22388, _start_66358);
    // SubProg InputIL pc: 245 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _33088, 0)){
        DeRef(_33088);
        _33088 = NOVALUE;
        goto L6; // [245] 261
    }
    DeRef(_33088);
    _33088 = NOVALUE;
    // SubProg InputIL pc: 249 op: STARTLINE (58)

    /** backend.ex:128			fatal( GetMsgText(298) )*/
    // SubProg InputIL pc: 251 op: PROC (27)
    RefDS(_21936);
    _33090 = _40GetMsgText(298, 1, _21936);
    // SubProg InputIL pc: 257 op: PROC (27)
    _1fatal(_33090);
    _33090 = NOVALUE;
    // SubProg InputIL pc: 260 op: NOP1 (159)
L6: // addr: 261 pc: 260 sub: 66354 op: 159
    // SubProg InputIL pc: 261 op: STARTLINE (58)

    /** backend.ex:131		init_compress()*/
    // SubProg InputIL pc: 263 op: PROC (27)
    _59init_compress();
    // SubProg InputIL pc: 265 op: STARTLINE (58)

    /** backend.ex:132		misc = fdecompress(0)*/
    // SubProg InputIL pc: 267 op: PROC (27)
    _0 = _59fdecompress(0);
    DeRef(_1misc_64049);
    _1misc_64049 = _0;
    // SubProg InputIL pc: 271 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 273 op: STARTLINE (58)

    /** backend.ex:133		max_stack_per_call = misc[1]*/
    // SubProg InputIL pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 277 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_1misc_64049);
    _34max_stack_per_call_15287 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_34max_stack_per_call_15287)){
        _34max_stack_per_call_15287 = (object)DBL_PTR(_34max_stack_per_call_15287)->dbl;
    }
    // SubProg InputIL pc: 283 op: STARTLINE (58)

    /** backend.ex:134		AnyTimeProfile = misc[2]*/
    // SubProg InputIL pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 287 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_1misc_64049);
    _35AnyTimeProfile_14178 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_35AnyTimeProfile_14178)){
        _35AnyTimeProfile_14178 = (object)DBL_PTR(_35AnyTimeProfile_14178)->dbl;
    }
    // SubProg InputIL pc: 293 op: STARTLINE (58)

    /** backend.ex:135		AnyStatementProfile = misc[3]*/
    // SubProg InputIL pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 297 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_1misc_64049);
    _35AnyStatementProfile_14179 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_35AnyStatementProfile_14179)){
        _35AnyStatementProfile_14179 = (object)DBL_PTR(_35AnyStatementProfile_14179)->dbl;
    }
    // SubProg InputIL pc: 303 op: STARTLINE (58)

    /** backend.ex:136		sample_size = misc[4]*/
    // SubProg InputIL pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 307 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_1misc_64049);
    _34sample_size_15288 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_34sample_size_15288)){
        _34sample_size_15288 = (object)DBL_PTR(_34sample_size_15288)->dbl;
    }
    // SubProg InputIL pc: 313 op: STARTLINE (58)

    /** backend.ex:137		gline_number = misc[5]*/
    // SubProg InputIL pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 317 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_1misc_64049);
    _34gline_number_15193 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_34gline_number_15193)){
        _34gline_number_15193 = (object)DBL_PTR(_34gline_number_15193)->dbl;
    }
    // SubProg InputIL pc: 323 op: STARTLINE (58)

    /** backend.ex:138		known_files = misc[6]*/
    // SubProg InputIL pc: 325 op: GLOBAL_INIT_CHECK (109)
    // SubProg InputIL pc: 327 op: RHS_SUBS (25)
    DeRef(_35known_files_14157);
    _2 = (object)SEQ_PTR(_1misc_64049);
    _35known_files_14157 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_35known_files_14157);
    // SubProg InputIL pc: 331 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 333 op: STARTLINE (58)

    /** backend.ex:140		SymTab = fdecompress(0)*/
    // SubProg InputIL pc: 335 op: PROC (27)
    _0 = _59fdecompress(0);
    DeRef(_35SymTab_14156);
    _35SymTab_14156 = _0;
    // SubProg InputIL pc: 339 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 341 op: STARTLINE (58)

    /** backend.ex:141		slist = fdecompress(0)*/
    // SubProg InputIL pc: 343 op: PROC (27)
    _0 = _59fdecompress(0);
    DeRef(_34slist_15278);
    _34slist_15278 = _0;
    // SubProg InputIL pc: 347 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 349 op: STARTLINE (58)

    /** backend.ex:142		file_include = fdecompress(0)*/
    // SubProg InputIL pc: 351 op: PROC (27)
    _0 = _59fdecompress(0);
    DeRef(_35file_include_14161);
    _35file_include_14161 = _0;
    // SubProg InputIL pc: 355 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 357 op: STARTLINE (58)

    /** backend.ex:143		switches = fdecompress(0)*/
    // SubProg InputIL pc: 359 op: PROC (27)
    _0 = _switches_66361;
    _switches_66361 = _59fdecompress(0);
    DeRef(_0);
    // SubProg InputIL pc: 363 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 365 op: STARTLINE (58)

    /** backend.ex:144		include_matrix = fdecompress(0)*/
    // SubProg InputIL pc: 367 op: PROC (27)
    _0 = _59fdecompress(0);
    DeRef(_35include_matrix_14163);
    _35include_matrix_14163 = _0;
    // SubProg InputIL pc: 371 op: SEQUENCE_CHECK (97)
    // SubProg InputIL pc: 373 op: STARTLINE (58)

    /** backend.ex:145	end procedure*/
    // SubProg InputIL pc: 375 op: RETURNP (29)

// Exiting block BLOCK: InputIL

// block var c1_66356

// block var c2_66357

// block var start_66358

// block var size_66359
    DeRef(_size_66359);

// block var checksum_66360
    DeRef(_checksum_66360);

// block var switches_66361
    DeRefDS(_switches_66361);
    DeRef(_33051);
    _33051 = NOVALUE;
    return;
    // SubProg InputIL pc: 378 op: BADRETURNF (43)
    ;
}



// 0xE1A202F7
