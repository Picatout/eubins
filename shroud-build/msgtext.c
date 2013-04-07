// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _44GetMsgText(object _MsgNum_21520, object _WithNum_21521, object _Args_21522)
{
    object _idx_21523 = NOVALUE;
    object _msgtext_21524 = NOVALUE;
    object _12348 = NOVALUE;
    object _12347 = NOVALUE;
    object _12343 = NOVALUE;
    object _12342 = NOVALUE;
    object _12340 = NOVALUE;
    object _12337 = NOVALUE;
    object _12335 = NOVALUE;
    object _12334 = NOVALUE;
    object _12333 = NOVALUE;
    object _12332 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_MsgNum_21520)) {
        _1 = (object)(DBL_PTR(_MsgNum_21520)->dbl);
        DeRefDS(_MsgNum_21520);
        _MsgNum_21520 = _1;
    }

    /** msgtext.e:398		integer idx = 1*/
    _idx_21523 = 1;

    /** msgtext.e:402		msgtext = get_text( MsgNum, LocalizeQual, LocalDB )*/
    RefDS(_36LocalizeQual_15423);
    RefDS(_36LocalDB_15424);
    _0 = _msgtext_21524;
    _msgtext_21524 = _45get_text(_MsgNum_21520, _36LocalizeQual_15423, _36LocalDB_15424);
    DeRef(_0);

    /** msgtext.e:405		if atom(msgtext) then*/
    _12332 = IS_ATOM(_msgtext_21524);
    if (_12332 == 0)
    {
        _12332 = NOVALUE;
        goto L1; // [27] 102
    }
    else{
        _12332 = NOVALUE;
    }

    /** msgtext.e:406			for i = 1 to length(StdErrMsgs) do*/
    _12333 = 365;
    {
        object _i_21532;
        _i_21532 = 1;
L2: 
        if (_i_21532 > 365){
            goto L3; // [37] 77
        }

        /** msgtext.e:407				if StdErrMsgs[i][1] = MsgNum then*/
        _2 = (object)SEQ_PTR(_44StdErrMsgs_20505);
        _12334 = (object)*(((s1_ptr)_2)->base + _i_21532);
        _2 = (object)SEQ_PTR(_12334);
        _12335 = (object)*(((s1_ptr)_2)->base + 1);
        _12334 = NOVALUE;
        if (binary_op_a(NOTEQ, _12335, _MsgNum_21520)){
            _12335 = NOVALUE;
            goto L4; // [56] 70
        }
        _12335 = NOVALUE;

        /** msgtext.e:408					idx = i*/
        _idx_21523 = _i_21532;

        /** msgtext.e:409					exit*/
        goto L3; // [67] 77
L4: 

        /** msgtext.e:411			end for*/
        _i_21532 = _i_21532 + 1;
        goto L2; // [72] 44
L3: 
        ;
    }

    /** msgtext.e:412			msgtext = StdErrMsgs[idx][2]*/
    _2 = (object)SEQ_PTR(_44StdErrMsgs_20505);
    _12337 = (object)*(((s1_ptr)_2)->base + _idx_21523);
    DeRef(_msgtext_21524);
    _2 = (object)SEQ_PTR(_12337);
    _msgtext_21524 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_msgtext_21524);
    _12337 = NOVALUE;

    /** msgtext.e:413			if idx = 1 then*/
    if (_idx_21523 != 1)
    goto L5; // [91] 101

    /** msgtext.e:414				Args = MsgNum*/
    DeRef(_Args_21522);
    _Args_21522 = _MsgNum_21520;
L5: 
L1: 

    /** msgtext.e:418		if atom(Args) or length(Args) != 0 then*/
    _12340 = IS_ATOM(_Args_21522);
    if (_12340 != 0) {
        goto L6; // [107] 123
    }
    if (IS_SEQUENCE(_Args_21522)){
            _12342 = SEQ_PTR(_Args_21522)->length;
    }
    else {
        _12342 = 1;
    }
    _12343 = (_12342 != 0);
    _12342 = NOVALUE;
    if (_12343 == 0)
    {
        DeRef(_12343);
        _12343 = NOVALUE;
        goto L7; // [119] 131
    }
    else{
        DeRef(_12343);
        _12343 = NOVALUE;
    }
L6: 

    /** msgtext.e:419			msgtext = format(msgtext, Args)*/
    Ref(_msgtext_21524);
    Ref(_Args_21522);
    _0 = _msgtext_21524;
    _msgtext_21524 = _13format(_msgtext_21524, _Args_21522);
    DeRef(_0);
L7: 

    /** msgtext.e:422		if WithNum != 0 then*/
    if (_WithNum_21521 == 0)
    goto L8; // [133] 154

    /** msgtext.e:423			return sprintf("<%04d>:: %s", {MsgNum, msgtext})*/
    Ref(_msgtext_21524);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _MsgNum_21520;
    ((intptr_t *)_2)[2] = _msgtext_21524;
    _12347 = MAKE_SEQ(_1);
    _12348 = EPrintf(-9999999, _12346, _12347);
    DeRefDS(_12347);
    _12347 = NOVALUE;
    DeRef(_Args_21522);
    DeRef(_msgtext_21524);
    return _12348;
    goto L9; // [151] 161
L8: 

    /** msgtext.e:425			return msgtext*/
    DeRef(_Args_21522);
    DeRef(_12348);
    _12348 = NOVALUE;
    return _msgtext_21524;
L9: 
    ;
}


void _44ShowMsg(object _Cons_21557, object _Msg_21558, object _Args_21559, object _NL_21560)
{
    object _12355 = NOVALUE;
    object _12354 = NOVALUE;
    object _12352 = NOVALUE;
    object _12350 = NOVALUE;
    object _12349 = NOVALUE;
    object _0, _1, _2;
    

    /** msgtext.e:431		if atom(Msg) then*/
    _12349 = 1;
    if (_12349 == 0)
    {
        _12349 = NOVALUE;
        goto L1; // [10] 25
    }
    else{
        _12349 = NOVALUE;
    }

    /** msgtext.e:432			Msg = GetMsgText(floor(Msg), 0)*/
    _12350 = e_floor(_Msg_21558);
    RefDS(_5);
    _Msg_21558 = _44GetMsgText(_12350, 0, _5);
    _12350 = NOVALUE;
L1: 

    /** msgtext.e:435		if atom(Args) or length(Args) != 0 then*/
    _12352 = IS_ATOM(_Args_21559);
    if (_12352 != 0) {
        goto L2; // [30] 46
    }
    if (IS_SEQUENCE(_Args_21559)){
            _12354 = SEQ_PTR(_Args_21559)->length;
    }
    else {
        _12354 = 1;
    }
    _12355 = (_12354 != 0);
    _12354 = NOVALUE;
    if (_12355 == 0)
    {
        DeRef(_12355);
        _12355 = NOVALUE;
        goto L3; // [42] 54
    }
    else{
        DeRef(_12355);
        _12355 = NOVALUE;
    }
L2: 

    /** msgtext.e:436			Msg = format(Msg, Args)*/
    Ref(_Msg_21558);
    Ref(_Args_21559);
    _0 = _Msg_21558;
    _Msg_21558 = _13format(_Msg_21558, _Args_21559);
    DeRef(_0);
L3: 

    /** msgtext.e:439		puts(Cons, Msg)*/
    EPuts(_Cons_21557, _Msg_21558); // DJP 

    /** msgtext.e:441		if NL then*/
    if (_NL_21560 == 0)
    {
        goto L4; // [61] 70
    }
    else{
    }

    /** msgtext.e:442			puts(Cons, '\n')*/
    EPuts(_Cons_21557, 10); // DJP 
L4: 

    /** msgtext.e:445	end procedure*/
    DeRef(_Msg_21558);
    DeRef(_Args_21559);
    return;
    ;
}



// 0x2DF679A6
