// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _42GetMsgText(object _MsgNum_21142, object _WithNum_21143, object _Args_21144)
{
    object _idx_21145 = NOVALUE;
    object _msgtext_21146 = NOVALUE;
    object _12113 = NOVALUE; // 21175 12113
    object _12112 = NOVALUE; // 21174 12112
// skipping _12110  name type: 0
// skipping _12109  name type: 0
    object _12108 = NOVALUE; // 21168 12108
    object _12107 = NOVALUE; // 21167 12107
// skipping _12106  name type: 0
    object _12105 = NOVALUE; // 21165 12105
// skipping _12104  name type: 0
// skipping _12103  name type: 0
    object _12102 = NOVALUE; // 21160 12102
// skipping _12101  name type: 0
    object _12100 = NOVALUE; // 21158 12100
    object _12099 = NOVALUE; // 21157 12099
    object _12098 = NOVALUE; // 21155 12098
    object _12097 = NOVALUE; // 21152 12097
// skipping _12096  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetMsgText pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_MsgNum_21142)) {
        _1 = (object)(DBL_PTR(_MsgNum_21142)->dbl);
        DeRefDS(_MsgNum_21142);
        _MsgNum_21142 = _1;
    }
    // SubProg GetMsgText pc: 3 op: INTEGER_CHECK (96)
    // SubProg GetMsgText pc: 5 op: STARTLINE (58)

    /** msgtext.e:398		integer idx = 1*/
    // SubProg GetMsgText pc: 7 op: ASSIGN_I (113)
    _idx_21145 = 1;
    // SubProg GetMsgText pc: 10 op: STARTLINE (58)

    /** msgtext.e:402		msgtext = get_text( MsgNum, LocalizeQual, LocalDB )*/
    // SubProg GetMsgText pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 16 op: PROC (27)
    RefDS(_37LocalizeQual_15424);
    RefDS(_37LocalDB_15425);
    _0 = _msgtext_21146;
    _msgtext_21146 = _43get_text(_MsgNum_21142, _37LocalizeQual_15424, _37LocalDB_15425);
    DeRef(_0);
    // SubProg GetMsgText pc: 22 op: STARTLINE (58)

    /** msgtext.e:405		if atom(msgtext) then*/
    // SubProg GetMsgText pc: 24 op: IS_AN_ATOM (67)
    _12097 = IS_ATOM(_msgtext_21146);
    // SubProg GetMsgText pc: 27 op: IF (20)
    if (_12097 == 0)
    {
        _12097 = NOVALUE;
        goto L1; // [27] 102
    }
    else{
        _12097 = NOVALUE;
    }
    // SubProg GetMsgText pc: 30 op: STARTLINE (58)

    /** msgtext.e:406			for i = 1 to length(StdErrMsgs) do*/
    // SubProg GetMsgText pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 34 op: LENGTH (42)
    // Known sequence length:
    _12098 = 365;
    // SubProg GetMsgText pc: 37 op: FOR_I (125)
    {
        object _i_21154;
        _i_21154 = 1;
L2: // addr: 44 pc: 37 sub: 21140 op: 125
        if (_i_21154 > 365){
            goto L3; // [37] 77
        }
        // SubProg GetMsgText pc: 44 op: STARTLINE (58)

        /** msgtext.e:407				if StdErrMsgs[i][1] = MsgNum then*/
        // SubProg GetMsgText pc: 46 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetMsgText pc: 48 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_42StdErrMsgs_20126);
        _12099 = (object)*(((s1_ptr)_2)->base + _i_21154);
        // SubProg GetMsgText pc: 52 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12099);
        _12100 = (object)*(((s1_ptr)_2)->base + 1);
        _12099 = NOVALUE;
        // SubProg GetMsgText pc: 56 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _12100, _MsgNum_21142)){
            _12100 = NOVALUE;
            goto L4; // [56] 70
        }
        _12100 = NOVALUE;
        // SubProg GetMsgText pc: 60 op: STARTLINE (58)

        /** msgtext.e:408					idx = i*/
        // SubProg GetMsgText pc: 62 op: ASSIGN_I (113)
        _idx_21145 = _i_21154;
        // SubProg GetMsgText pc: 65 op: STARTLINE (58)

        /** msgtext.e:409					exit*/
        // SubProg GetMsgText pc: 67 op: EXIT (61)
        goto L3; // [67] 77
        // SubProg GetMsgText pc: 69 op: NOP1 (159)
L4: // addr: 70 pc: 69 sub: 21140 op: 159
        // SubProg GetMsgText pc: 70 op: STARTLINE (58)

        /** msgtext.e:411			end for*/
        // SubProg GetMsgText pc: 72 op: ENDFOR_INT_UP1 (54)
        _i_21154 = _i_21154 + 1;
        goto L2; // [72] 44
L3: // addr: 77 pc: 72 sub: 21140 op: 54
        ;
    }
    // SubProg GetMsgText pc: 77 op: STARTLINE (58)

    /** msgtext.e:412			msgtext = StdErrMsgs[idx][2]*/
    // SubProg GetMsgText pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetMsgText pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_42StdErrMsgs_20126);
    _12102 = (object)*(((s1_ptr)_2)->base + _idx_21145);
    // SubProg GetMsgText pc: 85 op: RHS_SUBS_CHECK (92)
    DeRef(_msgtext_21146);
    _2 = (object)SEQ_PTR(_12102);
    _msgtext_21146 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_msgtext_21146);
    _12102 = NOVALUE;
    // SubProg GetMsgText pc: 89 op: STARTLINE (58)

    /** msgtext.e:413			if idx = 1 then*/
    // SubProg GetMsgText pc: 91 op: EQUALS_IFW_I (121)
    if (_idx_21145 != 1)
    goto L5; // [91] 101
    // SubProg GetMsgText pc: 95 op: STARTLINE (58)

    /** msgtext.e:414				Args = MsgNum*/
    // SubProg GetMsgText pc: 97 op: ASSIGN (18)
    DeRef(_Args_21144);
    _Args_21144 = _MsgNum_21142;
    // SubProg GetMsgText pc: 100 op: NOP1 (159)
L5: // addr: 101 pc: 100 sub: 21140 op: 159
    // SubProg GetMsgText pc: 101 op: NOP1 (159)
L1: // addr: 102 pc: 101 sub: 21140 op: 159
    // SubProg GetMsgText pc: 102 op: STARTLINE (58)

    /** msgtext.e:418		if atom(Args) or length(Args) != 0 then*/
    // SubProg GetMsgText pc: 104 op: IS_AN_ATOM (67)
    _12105 = IS_ATOM(_Args_21144);
    // SubProg GetMsgText pc: 107 op: SC1_OR_IF (147)
    if (_12105 != 0) {
        goto L6; // [107] 123
    }
    // SubProg GetMsgText pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_Args_21144)){
            _12107 = SEQ_PTR(_Args_21144)->length;
    }
    else {
        _12107 = 1;
    }
    // SubProg GetMsgText pc: 114 op: NOTEQ (4)
    _12108 = (_12107 != 0);
    _12107 = NOVALUE;
    // SubProg GetMsgText pc: 118 op: NOP1 (159)
    // SubProg GetMsgText pc: 119 op: IF (20)
    if (_12108 == 0)
    {
        DeRef(_12108);
        _12108 = NOVALUE;
        goto L7; // [119] 131
    }
    else{
        DeRef(_12108);
        _12108 = NOVALUE;
    }
    // SubProg GetMsgText pc: 122 op: NOP1 (159)
L6: // addr: 123 pc: 122 sub: 21140 op: 159
    // SubProg GetMsgText pc: 123 op: STARTLINE (58)

    /** msgtext.e:419			msgtext = format(msgtext, Args)*/
    // SubProg GetMsgText pc: 125 op: PROC (27)
    Ref(_msgtext_21146);
    Ref(_Args_21144);
    _0 = _msgtext_21146;
    _msgtext_21146 = _17format(_msgtext_21146, _Args_21144);
    DeRef(_0);
    // SubProg GetMsgText pc: 130 op: NOP1 (159)
L7: // addr: 131 pc: 130 sub: 21140 op: 159
    // SubProg GetMsgText pc: 131 op: STARTLINE (58)

    /** msgtext.e:422		if WithNum != 0 then*/
    // SubProg GetMsgText pc: 133 op: NOTEQ_IFW_I (122)
    if (_WithNum_21143 == 0)
    goto L8; // [133] 154
    // SubProg GetMsgText pc: 137 op: STARTLINE (58)

    /** msgtext.e:423			return sprintf("<%04d>:: %s", {MsgNum, msgtext})*/
    // SubProg GetMsgText pc: 139 op: RIGHT_BRACE_2 (85)
    Ref(_msgtext_21146);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _MsgNum_21142;
    ((intptr_t *)_2)[2] = _msgtext_21146;
    _12112 = MAKE_SEQ(_1);
    // SubProg GetMsgText pc: 143 op: SPRINTF (53)
    _12113 = EPrintf(-9999999, _12111, _12112);
    DeRefDS(_12112);
    _12112 = NOVALUE;
    // SubProg GetMsgText pc: 147 op: RETURNF (28)

// Exiting block BLOCK: GetMsgText

// block var MsgNum_21142

// block var WithNum_21143

// block var Args_21144
    DeRef(_Args_21144);

// block var idx_21145

// block var msgtext_21146
    DeRef(_msgtext_21146);
    return _12113;
    // SubProg GetMsgText pc: 151 op: ELSE (23)
    goto L9; // [151] 161
    // SubProg GetMsgText pc: 153 op: NOP1 (159)
L8: // addr: 154 pc: 153 sub: 21140 op: 159
    // SubProg GetMsgText pc: 154 op: STARTLINE (58)

    /** msgtext.e:425			return msgtext*/
    // SubProg GetMsgText pc: 156 op: RETURNF (28)

// Exiting block BLOCK: GetMsgText

// block var MsgNum_21142

// block var WithNum_21143

// block var Args_21144
    DeRef(_Args_21144);

// block var idx_21145
    DeRef(_12113);
    _12113 = NOVALUE;
    return _msgtext_21146;
    // SubProg GetMsgText pc: 160 op: NOP1 (159)
L9: // addr: 161 pc: 160 sub: 21140 op: 159
    // SubProg GetMsgText pc: 161 op: BADRETURNF (43)
    ;
}


void _42ShowMsg(object _Cons_21179, object _Msg_21180, object _Args_21181, object _NL_21182)
{
// skipping _12121  name type: 0
    object _12120 = NOVALUE; // 21191 12120
    object _12119 = NOVALUE; // 21190 12119
// skipping _12118  name type: 0
    object _12117 = NOVALUE; // 21188 12117
// skipping _12116  name type: 0
    object _12115 = NOVALUE; // 21185 12115
    object _12114 = NOVALUE; // 21184 12114
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowMsg pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowMsg pc: 3 op: INTEGER_CHECK (96)
    // SubProg ShowMsg pc: 5 op: STARTLINE (58)

    /** msgtext.e:431		if atom(Msg) then*/
    // SubProg ShowMsg pc: 7 op: IS_AN_ATOM (67)
    _12114 = 1;
    // SubProg ShowMsg pc: 10 op: IF (20)
    if (_12114 == 0)
    {
        _12114 = NOVALUE;
        goto L1; // [10] 25
    }
    else{
        _12114 = NOVALUE;
    }
    // SubProg ShowMsg pc: 13 op: STARTLINE (58)

    /** msgtext.e:432			Msg = GetMsgText(floor(Msg), 0)*/
    // SubProg ShowMsg pc: 15 op: FLOOR (83)
    _12115 = e_floor(_Msg_21180);
    // SubProg ShowMsg pc: 18 op: PROC (27)
    RefDS(_5);
    _Msg_21180 = _42GetMsgText(_12115, 0, _5);
    _12115 = NOVALUE;
    // SubProg ShowMsg pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 21177 op: 159
    // SubProg ShowMsg pc: 25 op: STARTLINE (58)

    /** msgtext.e:435		if atom(Args) or length(Args) != 0 then*/
    // SubProg ShowMsg pc: 27 op: IS_AN_ATOM (67)
    _12117 = IS_ATOM(_Args_21181);
    // SubProg ShowMsg pc: 30 op: SC1_OR_IF (147)
    if (_12117 != 0) {
        goto L2; // [30] 46
    }
    // SubProg ShowMsg pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_Args_21181)){
            _12119 = SEQ_PTR(_Args_21181)->length;
    }
    else {
        _12119 = 1;
    }
    // SubProg ShowMsg pc: 37 op: NOTEQ (4)
    _12120 = (_12119 != 0);
    _12119 = NOVALUE;
    // SubProg ShowMsg pc: 41 op: NOP1 (159)
    // SubProg ShowMsg pc: 42 op: IF (20)
    if (_12120 == 0)
    {
        DeRef(_12120);
        _12120 = NOVALUE;
        goto L3; // [42] 54
    }
    else{
        DeRef(_12120);
        _12120 = NOVALUE;
    }
    // SubProg ShowMsg pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 21177 op: 159
    // SubProg ShowMsg pc: 46 op: STARTLINE (58)

    /** msgtext.e:436			Msg = format(Msg, Args)*/
    // SubProg ShowMsg pc: 48 op: PROC (27)
    Ref(_Msg_21180);
    Ref(_Args_21181);
    _0 = _Msg_21180;
    _Msg_21180 = _17format(_Msg_21180, _Args_21181);
    DeRef(_0);
    // SubProg ShowMsg pc: 53 op: NOP1 (159)
L3: // addr: 54 pc: 53 sub: 21177 op: 159
    // SubProg ShowMsg pc: 54 op: STARTLINE (58)

    /** msgtext.e:439		puts(Cons, Msg)*/
    // SubProg ShowMsg pc: 56 op: PUTS (44)
    EPuts(_Cons_21179, _Msg_21180); // DJP 
    // SubProg ShowMsg pc: 59 op: STARTLINE (58)

    /** msgtext.e:441		if NL then*/
    // SubProg ShowMsg pc: 61 op: IF (20)
    if (_NL_21182 == 0)
    {
        goto L4; // [61] 70
    }
    else{
    }
    // SubProg ShowMsg pc: 64 op: STARTLINE (58)

    /** msgtext.e:442			puts(Cons, '\n')*/
    // SubProg ShowMsg pc: 66 op: PUTS (44)
    EPuts(_Cons_21179, 10); // DJP 
    // SubProg ShowMsg pc: 69 op: NOP1 (159)
L4: // addr: 70 pc: 69 sub: 21177 op: 159
    // SubProg ShowMsg pc: 70 op: STARTLINE (58)

    /** msgtext.e:445	end procedure*/
    // SubProg ShowMsg pc: 72 op: RETURNP (29)

// Exiting block BLOCK: ShowMsg

// block var Cons_21179

// block var Msg_21180
    DeRef(_Msg_21180);

// block var Args_21181
    DeRef(_Args_21181);

// block var NL_21182
    return;
    // SubProg ShowMsg pc: 75 op: BADRETURNF (43)
    ;
}



// 0x59998AD6
