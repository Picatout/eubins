// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _40GetMsgText(object _MsgNum_19894, object _WithNum_19895, object _Args_19896)
{
    object _idx_19897 = NOVALUE;
    object _msgtext_19898 = NOVALUE;
    object _11354 = NOVALUE; // 19927 11354
    object _11353 = NOVALUE; // 19926 11353
// skipping _11351  name type: 0
// skipping _11350  name type: 0
    object _11349 = NOVALUE; // 19920 11349
    object _11348 = NOVALUE; // 19919 11348
// skipping _11347  name type: 0
    object _11346 = NOVALUE; // 19917 11346
// skipping _11345  name type: 0
// skipping _11344  name type: 0
    object _11343 = NOVALUE; // 19912 11343
// skipping _11342  name type: 0
    object _11341 = NOVALUE; // 19910 11341
    object _11340 = NOVALUE; // 19909 11340
    object _11339 = NOVALUE; // 19907 11339
    object _11338 = NOVALUE; // 19904 11338
// skipping _11337  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetMsgText pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_MsgNum_19894)) {
        _1 = (object)(DBL_PTR(_MsgNum_19894)->dbl);
        DeRefDS(_MsgNum_19894);
        _MsgNum_19894 = _1;
    }
    // SubProg GetMsgText pc: 3 op: INTEGER_CHECK (96)
    // SubProg GetMsgText pc: 5 op: STARTLINE (58)

    /** msgtext.e:398		integer idx = 1*/
    // SubProg GetMsgText pc: 7 op: ASSIGN_I (113)
    _idx_19897 = 1;
    // SubProg GetMsgText pc: 10 op: STARTLINE (58)

    /** msgtext.e:402		msgtext = get_text( MsgNum, LocalizeQual, LocalDB )*/
    // SubProg GetMsgText pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 16 op: PROC (27)
    RefDS(_35LocalizeQual_14175);
    RefDS(_35LocalDB_14176);
    _0 = _msgtext_19898;
    _msgtext_19898 = _41get_text(_MsgNum_19894, _35LocalizeQual_14175, _35LocalDB_14176);
    DeRef(_0);
    // SubProg GetMsgText pc: 22 op: STARTLINE (58)

    /** msgtext.e:405		if atom(msgtext) then*/
    // SubProg GetMsgText pc: 24 op: IS_AN_ATOM (67)
    _11338 = IS_ATOM(_msgtext_19898);
    // SubProg GetMsgText pc: 27 op: IF (20)
    if (_11338 == 0)
    {
        _11338 = NOVALUE;
        goto L1; // [27] 102
    }
    else{
        _11338 = NOVALUE;
    }
    // SubProg GetMsgText pc: 30 op: STARTLINE (58)

    /** msgtext.e:406			for i = 1 to length(StdErrMsgs) do*/
    // SubProg GetMsgText pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 34 op: LENGTH (42)
    // Known sequence length:
    _11339 = 365;
    // SubProg GetMsgText pc: 37 op: FOR_I (125)
    {
        object _i_19906;
        _i_19906 = 1;
L2: // addr: 44 pc: 37 sub: 19892 op: 125
        if (_i_19906 > 365){
            goto L3; // [37] 77
        }
        // SubProg GetMsgText pc: 44 op: STARTLINE (58)

        /** msgtext.e:407				if StdErrMsgs[i][1] = MsgNum then*/
        // SubProg GetMsgText pc: 46 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetMsgText pc: 48 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_40StdErrMsgs_18878);
        _11340 = (object)*(((s1_ptr)_2)->base + _i_19906);
        // SubProg GetMsgText pc: 52 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_11340);
        _11341 = (object)*(((s1_ptr)_2)->base + 1);
        _11340 = NOVALUE;
        // SubProg GetMsgText pc: 56 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _11341, _MsgNum_19894)){
            _11341 = NOVALUE;
            goto L4; // [56] 70
        }
        _11341 = NOVALUE;
        // SubProg GetMsgText pc: 60 op: STARTLINE (58)

        /** msgtext.e:408					idx = i*/
        // SubProg GetMsgText pc: 62 op: ASSIGN_I (113)
        _idx_19897 = _i_19906;
        // SubProg GetMsgText pc: 65 op: STARTLINE (58)

        /** msgtext.e:409					exit*/
        // SubProg GetMsgText pc: 67 op: EXIT (61)
        goto L3; // [67] 77
        // SubProg GetMsgText pc: 69 op: NOP1 (159)
L4: // addr: 70 pc: 69 sub: 19892 op: 159
        // SubProg GetMsgText pc: 70 op: STARTLINE (58)

        /** msgtext.e:411			end for*/
        // SubProg GetMsgText pc: 72 op: ENDFOR_INT_UP1 (54)
        _i_19906 = _i_19906 + 1;
        goto L2; // [72] 44
L3: // addr: 77 pc: 72 sub: 19892 op: 54
        ;
    }
    // SubProg GetMsgText pc: 77 op: STARTLINE (58)

    /** msgtext.e:412			msgtext = StdErrMsgs[idx][2]*/
    // SubProg GetMsgText pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_40StdErrMsgs_18878);
    _11343 = (object)*(((s1_ptr)_2)->base + _idx_19897);
    // SubProg GetMsgText pc: 85 op: RHS_SUBS_CHECK (92)
    DeRef(_msgtext_19898);
    _2 = (object)SEQ_PTR(_11343);
    _msgtext_19898 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_msgtext_19898);
    _11343 = NOVALUE;
    // SubProg GetMsgText pc: 89 op: STARTLINE (58)

    /** msgtext.e:413			if idx = 1 then*/
    // SubProg GetMsgText pc: 91 op: EQUALS_IFW_I (121)
    if (_idx_19897 != 1)
    goto L5; // [91] 101
    // SubProg GetMsgText pc: 95 op: STARTLINE (58)

    /** msgtext.e:414				Args = MsgNum*/
    // SubProg GetMsgText pc: 97 op: ASSIGN (18)
    DeRef(_Args_19896);
    _Args_19896 = _MsgNum_19894;
    // SubProg GetMsgText pc: 100 op: NOP1 (159)
L5: // addr: 101 pc: 100 sub: 19892 op: 159
    // SubProg GetMsgText pc: 101 op: NOP1 (159)
L1: // addr: 102 pc: 101 sub: 19892 op: 159
    // SubProg GetMsgText pc: 102 op: STARTLINE (58)

    /** msgtext.e:418		if atom(Args) or length(Args) != 0 then*/
    // SubProg GetMsgText pc: 104 op: IS_AN_ATOM (67)
    _11346 = IS_ATOM(_Args_19896);
    // SubProg GetMsgText pc: 107 op: SC1_OR_IF (147)
    if (_11346 != 0) {
        goto L6; // [107] 123
    }
    // SubProg GetMsgText pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_Args_19896)){
            _11348 = SEQ_PTR(_Args_19896)->length;
    }
    else {
        _11348 = 1;
    }
    // SubProg GetMsgText pc: 114 op: NOTEQ (4)
    _11349 = (_11348 != 0);
    _11348 = NOVALUE;
    // SubProg GetMsgText pc: 118 op: NOP1 (159)
    // SubProg GetMsgText pc: 119 op: IF (20)
    if (_11349 == 0)
    {
        DeRef(_11349);
        _11349 = NOVALUE;
        goto L7; // [119] 131
    }
    else{
        DeRef(_11349);
        _11349 = NOVALUE;
    }
    // SubProg GetMsgText pc: 122 op: NOP1 (159)
L6: // addr: 123 pc: 122 sub: 19892 op: 159
    // SubProg GetMsgText pc: 123 op: STARTLINE (58)

    /** msgtext.e:419			msgtext = format(msgtext, Args)*/
    // SubProg GetMsgText pc: 125 op: PROC (27)
    Ref(_msgtext_19898);
    Ref(_Args_19896);
    _0 = _msgtext_19898;
    _msgtext_19898 = _15format(_msgtext_19898, _Args_19896);
    DeRef(_0);
    // SubProg GetMsgText pc: 130 op: NOP1 (159)
L7: // addr: 131 pc: 130 sub: 19892 op: 159
    // SubProg GetMsgText pc: 131 op: STARTLINE (58)

    /** msgtext.e:422		if WithNum != 0 then*/
    // SubProg GetMsgText pc: 133 op: NOTEQ_IFW_I (122)
    if (_WithNum_19895 == 0)
    goto L8; // [133] 154
    // SubProg GetMsgText pc: 137 op: STARTLINE (58)

    /** msgtext.e:423			return sprintf("<%04d>:: %s", {MsgNum, msgtext})*/
    // SubProg GetMsgText pc: 139 op: RIGHT_BRACE_2 (85)
    Ref(_msgtext_19898);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _MsgNum_19894;
    ((intptr_t *)_2)[2] = _msgtext_19898;
    _11353 = MAKE_SEQ(_1);
    // SubProg GetMsgText pc: 143 op: SPRINTF (53)
    _11354 = EPrintf(-9999999, _11352, _11353);
    DeRefDS(_11353);
    _11353 = NOVALUE;
    // SubProg GetMsgText pc: 147 op: RETURNF (28)

// Exiting block BLOCK: GetMsgText

// block var MsgNum_19894

// block var WithNum_19895

// block var Args_19896
    DeRef(_Args_19896);

// block var idx_19897

// block var msgtext_19898
    DeRef(_msgtext_19898);
    return _11354;
    // SubProg GetMsgText pc: 151 op: ELSE (23)
    goto L9; // [151] 161
    // SubProg GetMsgText pc: 153 op: NOP1 (159)
L8: // addr: 154 pc: 153 sub: 19892 op: 159
    // SubProg GetMsgText pc: 154 op: STARTLINE (58)

    /** msgtext.e:425			return msgtext*/
    // SubProg GetMsgText pc: 156 op: RETURNF (28)

// Exiting block BLOCK: GetMsgText

// block var MsgNum_19894

// block var WithNum_19895

// block var Args_19896
    DeRef(_Args_19896);

// block var idx_19897
    DeRef(_11354);
    _11354 = NOVALUE;
    return _msgtext_19898;
    // SubProg GetMsgText pc: 160 op: NOP1 (159)
L9: // addr: 161 pc: 160 sub: 19892 op: 159
    // SubProg GetMsgText pc: 161 op: BADRETURNF (43)
    ;
}


void _40ShowMsg(object _Cons_19931, object _Msg_19932, object _Args_19933, object _NL_19934)
{
// skipping _11362  name type: 0
    object _11361 = NOVALUE; // 19943 11361
    object _11360 = NOVALUE; // 19942 11360
// skipping _11359  name type: 0
    object _11358 = NOVALUE; // 19940 11358
// skipping _11357  name type: 0
    object _11356 = NOVALUE; // 19937 11356
    object _11355 = NOVALUE; // 19936 11355
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowMsg pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowMsg pc: 3 op: INTEGER_CHECK (96)
    // SubProg ShowMsg pc: 5 op: STARTLINE (58)

    /** msgtext.e:431		if atom(Msg) then*/
    // SubProg ShowMsg pc: 7 op: IS_AN_ATOM (67)
    _11355 = 1;
    // SubProg ShowMsg pc: 10 op: IF (20)
    if (_11355 == 0)
    {
        _11355 = NOVALUE;
        goto L1; // [10] 25
    }
    else{
        _11355 = NOVALUE;
    }
    // SubProg ShowMsg pc: 13 op: STARTLINE (58)

    /** msgtext.e:432			Msg = GetMsgText(floor(Msg), 0)*/
    // SubProg ShowMsg pc: 15 op: FLOOR (83)
    _11356 = e_floor(_Msg_19932);
    // SubProg ShowMsg pc: 18 op: PROC (27)
    RefDS(_5);
    _Msg_19932 = _40GetMsgText(_11356, 0, _5);
    _11356 = NOVALUE;
    // SubProg ShowMsg pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 19929 op: 159
    // SubProg ShowMsg pc: 25 op: STARTLINE (58)

    /** msgtext.e:435		if atom(Args) or length(Args) != 0 then*/
    // SubProg ShowMsg pc: 27 op: IS_AN_ATOM (67)
    _11358 = IS_ATOM(_Args_19933);
    // SubProg ShowMsg pc: 30 op: SC1_OR_IF (147)
    if (_11358 != 0) {
        goto L2; // [30] 46
    }
    // SubProg ShowMsg pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_Args_19933)){
            _11360 = SEQ_PTR(_Args_19933)->length;
    }
    else {
        _11360 = 1;
    }
    // SubProg ShowMsg pc: 37 op: NOTEQ (4)
    _11361 = (_11360 != 0);
    _11360 = NOVALUE;
    // SubProg ShowMsg pc: 41 op: NOP1 (159)
    // SubProg ShowMsg pc: 42 op: IF (20)
    if (_11361 == 0)
    {
        DeRef(_11361);
        _11361 = NOVALUE;
        goto L3; // [42] 54
    }
    else{
        DeRef(_11361);
        _11361 = NOVALUE;
    }
    // SubProg ShowMsg pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 19929 op: 159
    // SubProg ShowMsg pc: 46 op: STARTLINE (58)

    /** msgtext.e:436			Msg = format(Msg, Args)*/
    // SubProg ShowMsg pc: 48 op: PROC (27)
    Ref(_Msg_19932);
    Ref(_Args_19933);
    _0 = _Msg_19932;
    _Msg_19932 = _15format(_Msg_19932, _Args_19933);
    DeRef(_0);
    // SubProg ShowMsg pc: 53 op: NOP1 (159)
L3: // addr: 54 pc: 53 sub: 19929 op: 159
    // SubProg ShowMsg pc: 54 op: STARTLINE (58)

    /** msgtext.e:439		puts(Cons, Msg)*/
    // SubProg ShowMsg pc: 56 op: PUTS (44)
    EPuts(_Cons_19931, _Msg_19932); // DJP 
    // SubProg ShowMsg pc: 59 op: STARTLINE (58)

    /** msgtext.e:441		if NL then*/
    // SubProg ShowMsg pc: 61 op: IF (20)
    if (_NL_19934 == 0)
    {
        goto L4; // [61] 70
    }
    else{
    }
    // SubProg ShowMsg pc: 64 op: STARTLINE (58)

    /** msgtext.e:442			puts(Cons, '\n')*/
    // SubProg ShowMsg pc: 66 op: PUTS (44)
    EPuts(_Cons_19931, 10); // DJP 
    // SubProg ShowMsg pc: 69 op: NOP1 (159)
L4: // addr: 70 pc: 69 sub: 19929 op: 159
    // SubProg ShowMsg pc: 70 op: STARTLINE (58)

    /** msgtext.e:445	end procedure*/
    // SubProg ShowMsg pc: 72 op: RETURNP (29)

// Exiting block BLOCK: ShowMsg

// block var Cons_19931

// block var Msg_19932
    DeRef(_Msg_19932);

// block var Args_19933
    DeRef(_Args_19933);

// block var NL_19934
    return;
    // SubProg ShowMsg pc: 75 op: BADRETURNF (43)
    ;
}



// 0x790261FD
