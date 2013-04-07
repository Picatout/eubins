// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _50screen_output(object _f_48718, object _msg_48719)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg screen_output pc: 1 op: INTEGER_CHECK (96)
    // SubProg screen_output pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg screen_output pc: 5 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg screen_output pc: 7 op: PUTS (44)
    EPuts(2, _msg_48719); // DJP 
    // SubProg screen_output pc: 10 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg screen_output pc: 12 op: RETURNP (29)

// Exiting block BLOCK: screen_output

// block var f_48718

// block var msg_48719
    DeRefDS(_msg_48719);
    return;
    // SubProg screen_output pc: 15 op: BADRETURNF (43)
    ;
}


void _50Warning(object _msg_48722, object _mask_48723, object _args_48724)
{
    object _orig_mask_48725 = NOVALUE;
    object _text_48726 = NOVALUE;
    object _w_name_48727 = NOVALUE;
// skipping _25229  name type: 0
    object _25228 = NOVALUE; // 48768 25228
// skipping _25227  name type: 0
    object _25226 = NOVALUE; // 48765 25226
// skipping _25225  name type: 0
    object _25224 = NOVALUE; // 48761 25224
// skipping _25223  name type: 0
    object _25221 = NOVALUE; // 48756 25221
// skipping _25219  name type: 0
// skipping _25218  name type: 0
// skipping _25217  name type: 0
    object _25216 = NOVALUE; // 48747 25216
// skipping _25215  name type: 0
    object _25214 = NOVALUE; // 48744 25214
    object _25213 = NOVALUE; // 48742 25213
    object _25212 = NOVALUE; // 48740 25212
    object _25211 = NOVALUE; // 48737 25211
// skipping _25210  name type: 0
    object _25209 = NOVALUE; // 48732 25209
// skipping _25208  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Warning pc: 1 op: INTEGER_CHECK (96)
    // SubProg Warning pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 5 op: STARTLINE (58)

    /** error.e:54		if display_warnings = 0 then*/
    // SubProg Warning pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 9 op: EQUALS_IFW_I (121)
    // SubProg Warning pc: 19 op: STARTLINE (58)

    /** error.e:58		if not Strict_is_on or Strict_Override then*/
    // SubProg Warning pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 23 op: NOT (7)
    _25209 = (_36Strict_is_on_16501 == 0);
    // SubProg Warning pc: 26 op: SC1_OR_IF (147)
    if (_25209 != 0) {
        goto L1; // [26] 37
    }
    // SubProg Warning pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 32 op: NOP1 (159)
    // SubProg Warning pc: 33 op: IF (20)
    if (_36Strict_Override_16502 == 0)
    {
        goto L2; // [33] 56
    }
    else{
    }
    // SubProg Warning pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 48720 op: 159
    // SubProg Warning pc: 37 op: STARTLINE (58)

    /** error.e:59			if find(mask, strict_only_warnings) then*/
    // SubProg Warning pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 41 op: FIND_FROM (176)
    _25211 = find_from(_mask_48723, _36strict_only_warnings_16499, 1);
    // SubProg Warning pc: 46 op: IF (20)
    if (_25211 == 0)
    {
        _25211 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        _25211 = NOVALUE;
    }
    // SubProg Warning pc: 49 op: STARTLINE (58)

    /** error.e:60				return*/
    // SubProg Warning pc: 51 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48722
    DeRef(_msg_48722);

// block var mask_48723

// block var args_48724
    DeRefDS(_args_48724);

// block var orig_mask_48725

// block var text_48726
    DeRef(_text_48726);

// block var w_name_48727
    DeRef(_w_name_48727);
    DeRef(_25209);
    _25209 = NOVALUE;
    return;
    // SubProg Warning pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 48720 op: 159
    // SubProg Warning pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 48720 op: 159
    // SubProg Warning pc: 56 op: STARTLINE (58)

    /** error.e:64		orig_mask = mask -- =0 for non maskable warnings - none implemented so far*/
    // SubProg Warning pc: 58 op: ASSIGN_I (113)
    _orig_mask_48725 = _mask_48723;
    // SubProg Warning pc: 61 op: STARTLINE (58)

    /** error.e:65		if Strict_is_on and Strict_Override = 0 then*/
    // SubProg Warning pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 65 op: SC1_AND_IF (146)
    if (_36Strict_is_on_16501 == 0) {
        goto L4; // [65] 85
    }
    // SubProg Warning pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 71 op: EQUALS (3)
    _25213 = (_36Strict_Override_16502 == 0);
    // SubProg Warning pc: 75 op: NOP1 (159)
    // SubProg Warning pc: 76 op: IF (20)
    if (_25213 == 0)
    {
        DeRef(_25213);
        _25213 = NOVALUE;
        goto L4; // [76] 85
    }
    else{
        DeRef(_25213);
        _25213 = NOVALUE;
    }
    // SubProg Warning pc: 79 op: STARTLINE (58)

    /** error.e:66			mask = 0*/
    // SubProg Warning pc: 81 op: ASSIGN_I (113)
    _mask_48723 = 0;
    // SubProg Warning pc: 84 op: NOP1 (159)
L4: // addr: 85 pc: 84 sub: 48720 op: 159
    // SubProg Warning pc: 85 op: STARTLINE (58)

    /** error.e:69		if mask = 0 or and_bits(OpWarning, mask) then*/
    // SubProg Warning pc: 87 op: EQUALS (3)
    _25214 = (_mask_48723 == 0);
    // SubProg Warning pc: 91 op: SC1_OR_IF (147)
    if (_25214 != 0) {
        goto L5; // [91] 106
    }
    // SubProg Warning pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 97 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_36OpWarning_16503 & (uintptr_t)_mask_48723;
         _25216 = MAKE_UINT(tu);
    }
    // SubProg Warning pc: 101 op: NOP1 (159)
    // SubProg Warning pc: 102 op: IF (20)
    if (_25216 == 0) {
        DeRef(_25216);
        _25216 = NOVALUE;
        goto L6; // [102] 213
    }
    else {
        if (!IS_ATOM_INT(_25216) && DBL_PTR(_25216)->dbl == 0.0){
            DeRef(_25216);
            _25216 = NOVALUE;
            goto L6; // [102] 213
        }
        DeRef(_25216);
        _25216 = NOVALUE;
    }
    DeRef(_25216);
    _25216 = NOVALUE;
    // SubProg Warning pc: 105 op: NOP1 (159)
L5: // addr: 106 pc: 105 sub: 48720 op: 159
    // SubProg Warning pc: 106 op: STARTLINE (58)

    /** error.e:70			if orig_mask != 0 then*/
    // SubProg Warning pc: 108 op: NOTEQ_IFW_I (122)
    if (_orig_mask_48725 == 0)
    goto L7; // [108] 122
    // SubProg Warning pc: 112 op: STARTLINE (58)

    /** error.e:71				orig_mask = find(orig_mask,warning_flags)*/
    // SubProg Warning pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 116 op: FIND_FROM (176)
    _orig_mask_48725 = find_from(_orig_mask_48725, _36warning_flags_16478, 1);
    // SubProg Warning pc: 121 op: NOP1 (159)
L7: // addr: 122 pc: 121 sub: 48720 op: 159
    // SubProg Warning pc: 122 op: STARTLINE (58)

    /** error.e:74			if orig_mask != 0 then*/
    // SubProg Warning pc: 124 op: NOTEQ_IFW_I (122)
    if (_orig_mask_48725 == 0)
    goto L8; // [124] 145
    // SubProg Warning pc: 128 op: STARTLINE (58)

    /** error.e:75				w_name = "{ " & warning_names[orig_mask] & " }"*/
    // SubProg Warning pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36warning_names_16480);
    _25221 = (object)*(((s1_ptr)_2)->base + _orig_mask_48725);
    // SubProg Warning pc: 136 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _25222;
        concat_list[1] = _25221;
        concat_list[2] = _25220;
        Concat_N((object_ptr)&_w_name_48727, concat_list, 3);
    }
    _25221 = NOVALUE;
    // SubProg Warning pc: 142 op: ELSE (23)
    goto L9; // [142] 153
    // SubProg Warning pc: 144 op: NOP1 (159)
L8: // addr: 145 pc: 144 sub: 48720 op: 159
    // SubProg Warning pc: 145 op: STARTLINE (58)

    /** error.e:77				w_name = "" -- not maskable*/
    // SubProg Warning pc: 147 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_w_name_48727);
    _w_name_48727 = _21933;
    // SubProg Warning pc: 150 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 152 op: NOP1 (159)
L9: // addr: 153 pc: 152 sub: 48720 op: 159
    // SubProg Warning pc: 153 op: STARTLINE (58)

    /** error.e:80			if atom(msg) then*/
    // SubProg Warning pc: 155 op: IS_AN_ATOM (67)
    _25224 = IS_ATOM(_msg_48722);
    // SubProg Warning pc: 158 op: IF (20)
    if (_25224 == 0)
    {
        _25224 = NOVALUE;
        goto LA; // [158] 170
    }
    else{
        _25224 = NOVALUE;
    }
    // SubProg Warning pc: 161 op: STARTLINE (58)

    /** error.e:81				msg = GetMsgText(msg, 1, args)*/
    // SubProg Warning pc: 163 op: PROC (27)
    Ref(_msg_48722);
    RefDS(_args_48724);
    _0 = _msg_48722;
    _msg_48722 = _42GetMsgText(_msg_48722, 1, _args_48724);
    DeRef(_0);
    // SubProg Warning pc: 169 op: NOP1 (159)
LA: // addr: 170 pc: 169 sub: 48720 op: 159
    // SubProg Warning pc: 170 op: STARTLINE (58)

    /** error.e:84			text = GetMsgText(204, 0, {w_name, msg})*/
    // SubProg Warning pc: 172 op: PRIVATE_INIT_CHECK (30)
    // SubProg Warning pc: 174 op: RIGHT_BRACE_2 (85)
    Ref(_msg_48722);
    RefDS(_w_name_48727);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _w_name_48727;
    ((intptr_t *)_2)[2] = _msg_48722;
    _25226 = MAKE_SEQ(_1);
    // SubProg Warning pc: 178 op: PROC (27)
    _0 = _text_48726;
    _text_48726 = _42GetMsgText(204, 0, _25226);
    DeRef(_0);
    _25226 = NOVALUE;
    // SubProg Warning pc: 184 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 186 op: STARTLINE (58)

    /** error.e:85			if find(text, warning_list) then*/
    // SubProg Warning pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 190 op: FIND_FROM (176)
    _25228 = find_from(_text_48726, _50warning_list_48715, 1);
    // SubProg Warning pc: 195 op: IF (20)
    if (_25228 == 0)
    {
        _25228 = NOVALUE;
        goto LB; // [195] 204
    }
    else{
        _25228 = NOVALUE;
    }
    // SubProg Warning pc: 198 op: STARTLINE (58)

    /** error.e:86				return -- duplicate*/
    // SubProg Warning pc: 200 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48722
    DeRef(_msg_48722);

// block var mask_48723

// block var args_48724
    DeRefDS(_args_48724);

// block var orig_mask_48725

// block var text_48726
    DeRefDS(_text_48726);

// block var w_name_48727
    DeRefDS(_w_name_48727);
    DeRef(_25214);
    _25214 = NOVALUE;
    DeRef(_25209);
    _25209 = NOVALUE;
    return;
    // SubProg Warning pc: 203 op: NOP1 (159)
LB: // addr: 204 pc: 203 sub: 48720 op: 159
    // SubProg Warning pc: 204 op: STARTLINE (58)

    /** error.e:89			warning_list = append(warning_list, text)*/
    // SubProg Warning pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 208 op: APPEND (35)
    RefDS(_text_48726);
    Append(&_50warning_list_48715, _50warning_list_48715, _text_48726);
    // SubProg Warning pc: 212 op: NOP1 (159)
L6: // addr: 213 pc: 212 sub: 48720 op: 159
    // SubProg Warning pc: 213 op: STARTLINE (58)

    /** error.e:91	end procedure*/
    // SubProg Warning pc: 215 op: RETURNP (29)

// Exiting block BLOCK: Warning

// block var msg_48722
    DeRef(_msg_48722);

// block var mask_48723

// block var args_48724
    DeRefDS(_args_48724);

// block var orig_mask_48725

// block var text_48726
    DeRef(_text_48726);

// block var w_name_48727
    DeRef(_w_name_48727);
    DeRef(_25214);
    _25214 = NOVALUE;
    DeRef(_25209);
    _25209 = NOVALUE;
    return;
    // SubProg Warning pc: 218 op: BADRETURNF (43)
    ;
}


object _50ShowWarnings()
{
    object _c_48791 = NOVALUE;
    object _errfile_48792 = NOVALUE;
    object _twf_48793 = NOVALUE;
    object _25267 = NOVALUE; // 48854 25267
// skipping _25266  name type: 0
// skipping _25265  name type: 0
    object _25264 = NOVALUE; // 48849 25264
    object _25263 = NOVALUE; // 48847 25263
    object _25262 = NOVALUE; // 48846 25262
    object _25261 = NOVALUE; // 48844 25261
    object _25260 = NOVALUE; // 48843 25260
    object _25259 = NOVALUE; // 48842 25259
// skipping _25258  name type: 0
    object _25257 = NOVALUE; // 48837 25257
    object _25256 = NOVALUE; // 48836 25256
    object _25255 = NOVALUE; // 48833 25255
// skipping _25254  name type: 0
    object _25253 = NOVALUE; // 48830 25253
    object _25252 = NOVALUE; // 48826 25252
    object _25251 = NOVALUE; // 48825 25251
    object _25250 = NOVALUE; // 48821 25250
// skipping _25249  name type: 0
    object _25248 = NOVALUE; // 48814 25248
// skipping _25247  name type: 0
// skipping _25246  name type: 0
// skipping _25245  name type: 0
    object _25244 = NOVALUE; // 48806 25244
// skipping _25243  name type: 0
    object _25242 = NOVALUE; // 48799 25242
    object _25241 = NOVALUE; // 48798 25241
    object _25240 = NOVALUE; // 48797 25240
// skipping _25239  name type: 0
    object _25238 = NOVALUE; // 48795 25238
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowWarnings pc: 1 op: STARTLINE (58)

    /** error.e:117		if display_warnings = 0 or length(warning_list) = 0 then*/
    // SubProg ShowWarnings pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 5 op: EQUALS (3)
    _25238 = (1 == 0);
    // SubProg ShowWarnings pc: 9 op: SC1_OR_IF (147)
    if (_25238 != 0) {
        goto L1; // [9] 27
    }
    // SubProg ShowWarnings pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_50warning_list_48715)){
            _25240 = SEQ_PTR(_50warning_list_48715)->length;
    }
    else {
        _25240 = 1;
    }
    // SubProg ShowWarnings pc: 18 op: EQUALS (3)
    _25241 = (_25240 == 0);
    _25240 = NOVALUE;
    // SubProg ShowWarnings pc: 22 op: NOP1 (159)
    // SubProg ShowWarnings pc: 23 op: IF (20)
    if (_25241 == 0)
    {
        DeRef(_25241);
        _25241 = NOVALUE;
        goto L2; // [23] 39
    }
    else{
        DeRef(_25241);
        _25241 = NOVALUE;
    }
    // SubProg ShowWarnings pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 27 op: STARTLINE (58)

    /** error.e:118			return length(warning_list)*/
    // SubProg ShowWarnings pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_50warning_list_48715)){
            _25242 = SEQ_PTR(_50warning_list_48715)->length;
    }
    else {
        _25242 = 1;
    }
    // SubProg ShowWarnings pc: 34 op: RETURNF (28)

// Exiting block BLOCK: ShowWarnings

// block var c_48791

// block var errfile_48792

// block var twf_48793
    DeRef(_25238);
    _25238 = NOVALUE;
    return _25242;
    // SubProg ShowWarnings pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 39 op: STARTLINE (58)

    /** error.e:121		if TempErrFile > 0 then*/
    // SubProg ShowWarnings pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 43 op: GREATER_IFW_I (124)
    if (_50TempErrFile_48704 <= 0)
    goto L3; // [43] 57
    // SubProg ShowWarnings pc: 47 op: STARTLINE (58)

    /** error.e:122			errfile = TempErrFile*/
    // SubProg ShowWarnings pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 51 op: ASSIGN_I (113)
    _errfile_48792 = _50TempErrFile_48704;
    // SubProg ShowWarnings pc: 54 op: ELSE (23)
    goto L4; // [54] 67
    // SubProg ShowWarnings pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 57 op: STARTLINE (58)

    /** error.e:124			errfile = STDERR*/
    // SubProg ShowWarnings pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 61 op: ASSIGN (18)
    _errfile_48792 = 2;
    // SubProg ShowWarnings pc: 64 op: INTEGER_CHECK (96)
    // SubProg ShowWarnings pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 67 op: STARTLINE (58)

    /** error.e:127		if not integer(TempWarningName) then*/
    // SubProg ShowWarnings pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 71 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_36TempWarningName_16450))
    _25244 = 1;
    else if (IS_ATOM_DBL(_36TempWarningName_16450))
    _25244 = IS_ATOM_INT(DoubleToInt(_36TempWarningName_16450));
    else
    _25244 = 0;
    // SubProg ShowWarnings pc: 74 op: NOT_IFW (108)
    if (_25244 != 0)
    goto L5; // [74] 179
    _25244 = NOVALUE;
    // SubProg ShowWarnings pc: 77 op: STARTLINE (58)

    /** error.e:128			twf = open(TempWarningName,"w")*/
    // SubProg ShowWarnings pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 81 op: OPEN (37)
    _twf_48793 = EOpen(_36TempWarningName_16450, _22069, 0);
    // SubProg ShowWarnings pc: 86 op: STARTLINE (58)

    /** error.e:129			if twf = -1 then*/
    // SubProg ShowWarnings pc: 88 op: EQUALS_IFW_I (121)
    if (_twf_48793 != -1)
    goto L6; // [88] 136
    // SubProg ShowWarnings pc: 92 op: STARTLINE (58)

    /** error.e:130				ShowMsg(errfile, 205, {TempWarningName})*/
    // SubProg ShowWarnings pc: 94 op: PRIVATE_INIT_CHECK (30)
    // SubProg ShowWarnings pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 98 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_36TempWarningName_16450);
    ((intptr_t*)_2)[1] = _36TempWarningName_16450;
    _25248 = MAKE_SEQ(_1);
    // SubProg ShowWarnings pc: 102 op: PROC (27)
    _42ShowMsg(_errfile_48792, 205, _25248, 1);
    _25248 = NOVALUE;
    // SubProg ShowWarnings pc: 108 op: STARTLINE (58)

    /** error.e:131				if errfile != STDERR then*/
    // SubProg ShowWarnings pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 112 op: NOTEQ_IFW (105)
    if (_errfile_48792 == 2)
    goto L7; // [112] 173
    // SubProg ShowWarnings pc: 116 op: STARTLINE (58)

    /** error.e:132					ShowMsg(STDERR, 205, {TempWarningName})*/
    // SubProg ShowWarnings pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 122 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_36TempWarningName_16450);
    ((intptr_t*)_2)[1] = _36TempWarningName_16450;
    _25250 = MAKE_SEQ(_1);
    // SubProg ShowWarnings pc: 126 op: PROC (27)
    _42ShowMsg(2, 205, _25250, 1);
    _25250 = NOVALUE;
    // SubProg ShowWarnings pc: 132 op: NOP1 (159)
    // SubProg ShowWarnings pc: 133 op: ELSE (23)
    goto L7; // [133] 173
    // SubProg ShowWarnings pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 136 op: STARTLINE (58)

    /** error.e:135				for i = 1 to length(warning_list) do*/
    // SubProg ShowWarnings pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_50warning_list_48715)){
            _25251 = SEQ_PTR(_50warning_list_48715)->length;
    }
    else {
        _25251 = 1;
    }
    // SubProg ShowWarnings pc: 143 op: FOR_I (125)
    {
        object _i_48824;
        _i_48824 = 1;
L8: // addr: 150 pc: 143 sub: 48789 op: 125
        if (_i_48824 > _25251){
            goto L9; // [143] 168
        }
        // SubProg ShowWarnings pc: 150 op: STARTLINE (58)

        /** error.e:136					puts(twf, warning_list[i])*/
        // SubProg ShowWarnings pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 154 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50warning_list_48715);
        _25252 = (object)*(((s1_ptr)_2)->base + _i_48824);
        // SubProg ShowWarnings pc: 158 op: PUTS (44)
        EPuts(_twf_48793, _25252); // DJP 
        _25252 = NOVALUE;
        // SubProg ShowWarnings pc: 161 op: STARTLINE (58)

        /** error.e:137				end for*/
        // SubProg ShowWarnings pc: 163 op: ENDFOR_INT_UP1 (54)
        _i_48824 = _i_48824 + 1;
        goto L8; // [163] 150
L9: // addr: 168 pc: 163 sub: 48789 op: 54
        ;
    }
    // SubProg ShowWarnings pc: 168 op: STARTLINE (58)

    /** error.e:138			    close(twf)*/
    // SubProg ShowWarnings pc: 170 op: CLOSE (86)
    EClose(_twf_48793);
    // SubProg ShowWarnings pc: 172 op: NOP1 (159)
L7: // addr: 173 pc: 172 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 173 op: STARTLINE (58)

    /** error.e:140			TempWarningName = 99 -- Flag that we have done this already.*/
    // SubProg ShowWarnings pc: 175 op: ASSIGN (18)
    DeRef(_36TempWarningName_16450);
    _36TempWarningName_16450 = 99;
    // SubProg ShowWarnings pc: 178 op: NOP1 (159)
L5: // addr: 179 pc: 178 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 179 op: STARTLINE (58)

    /** error.e:143		if batch_job = 0 or errfile != STDERR then*/
    // SubProg ShowWarnings pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 183 op: EQUALS (3)
    _25253 = (_36batch_job_16449 == 0);
    // SubProg ShowWarnings pc: 187 op: SC1_OR_IF (147)
    if (_25253 != 0) {
        goto LA; // [187] 204
    }
    // SubProg ShowWarnings pc: 191 op: PRIVATE_INIT_CHECK (30)
    // SubProg ShowWarnings pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 195 op: NOTEQ (4)
    _25255 = (_errfile_48792 != 2);
    // SubProg ShowWarnings pc: 199 op: NOP1 (159)
    // SubProg ShowWarnings pc: 200 op: IF (20)
    if (_25255 == 0)
    {
        DeRef(_25255);
        _25255 = NOVALUE;
        goto LB; // [200] 311
    }
    else{
        DeRef(_25255);
        _25255 = NOVALUE;
    }
    // SubProg ShowWarnings pc: 203 op: NOP1 (159)
LA: // addr: 204 pc: 203 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 204 op: STARTLINE (58)

    /** error.e:144			for i = 1 to length(warning_list) do*/
    // SubProg ShowWarnings pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 208 op: LENGTH (42)
    if (IS_SEQUENCE(_50warning_list_48715)){
            _25256 = SEQ_PTR(_50warning_list_48715)->length;
    }
    else {
        _25256 = 1;
    }
    // SubProg ShowWarnings pc: 211 op: FOR_I (125)
    {
        object _i_48835;
        _i_48835 = 1;
LC: // addr: 218 pc: 211 sub: 48789 op: 125
        if (_i_48835 > _25256){
            goto LD; // [211] 310
        }
        // SubProg ShowWarnings pc: 218 op: STARTLINE (58)

        /** error.e:145				puts(errfile, warning_list[i])*/
        // SubProg ShowWarnings pc: 220 op: PRIVATE_INIT_CHECK (30)
        // SubProg ShowWarnings pc: 222 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 224 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50warning_list_48715);
        _25257 = (object)*(((s1_ptr)_2)->base + _i_48835);
        // SubProg ShowWarnings pc: 228 op: PUTS (44)
        EPuts(_errfile_48792, _25257); // DJP 
        _25257 = NOVALUE;
        // SubProg ShowWarnings pc: 231 op: STARTLINE (58)

        /** error.e:146				if errfile = STDERR then*/
        // SubProg ShowWarnings pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 235 op: EQUALS_IFW (104)
        if (_errfile_48792 != 2)
        goto LE; // [235] 303
        // SubProg ShowWarnings pc: 239 op: STARTLINE (58)

        /** error.e:147					if remainder(i, 20) = 0 and batch_job = 0 and test_only = 0 then*/
        // SubProg ShowWarnings pc: 241 op: REMAINDER (71)
        _25259 = (_i_48835 % 20);
        // SubProg ShowWarnings pc: 245 op: EQUALS (3)
        _25260 = (_25259 == 0);
        _25259 = NOVALUE;
        // SubProg ShowWarnings pc: 249 op: SC1_AND (141)
        if (_25260 == 0) {
            _25261 = 0;
            goto LF; // [249] 263
        }
        // SubProg ShowWarnings pc: 253 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 255 op: EQUALS (3)
        _25262 = (_36batch_job_16449 == 0);
        // SubProg ShowWarnings pc: 259 op: SC2_AND (142)
        _25261 = (_25262 != 0);
        // SubProg ShowWarnings pc: 262 op: NOP1 (159)
LF: // addr: 263 pc: 262 sub: 48789 op: 159
        // SubProg ShowWarnings pc: 263 op: SC1_AND_IF (146)
        if (_25261 == 0) {
            goto L10; // [263] 302
        }
        // SubProg ShowWarnings pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 269 op: EQUALS (3)
        _25264 = (_36test_only_16448 == 0);
        // SubProg ShowWarnings pc: 273 op: NOP1 (159)
        // SubProg ShowWarnings pc: 274 op: IF (20)
        if (_25264 == 0)
        {
            DeRef(_25264);
            _25264 = NOVALUE;
            goto L10; // [274] 302
        }
        else{
            DeRef(_25264);
            _25264 = NOVALUE;
        }
        // SubProg ShowWarnings pc: 277 op: STARTLINE (58)

        /** error.e:148						ShowMsg(errfile, 206)*/
        // SubProg ShowWarnings pc: 279 op: PROC (27)
        RefDS(_21933);
        _42ShowMsg(_errfile_48792, 206, _21933, 1);
        // SubProg ShowWarnings pc: 285 op: STARTLINE (58)

        /** error.e:149						c = getc(0)*/
        // SubProg ShowWarnings pc: 287 op: GETC (33)
        if (0 != last_r_file_no) {
            last_r_file_ptr = which_file(0, EF_READ);
            last_r_file_no = 0;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _c_48791 = getc((FILE*)xstdin);
            }
            else{
                _c_48791 = getc(last_r_file_ptr);
            }
        }
        else{
            _c_48791 = getc(last_r_file_ptr);
        }
        // SubProg ShowWarnings pc: 290 op: STARTLINE (58)

        /** error.e:150						if c = 'q' then*/
        // SubProg ShowWarnings pc: 292 op: EQUALS_IFW_I (121)
        if (_c_48791 != 113)
        goto L11; // [292] 301
        // SubProg ShowWarnings pc: 296 op: STARTLINE (58)

        /** error.e:151							exit*/
        // SubProg ShowWarnings pc: 298 op: EXIT (61)
        goto LD; // [298] 310
        // SubProg ShowWarnings pc: 300 op: NOP1 (159)
L11: // addr: 301 pc: 300 sub: 48789 op: 159
        // SubProg ShowWarnings pc: 301 op: NOP1 (159)
L10: // addr: 302 pc: 301 sub: 48789 op: 159
        // SubProg ShowWarnings pc: 302 op: NOP1 (159)
LE: // addr: 303 pc: 302 sub: 48789 op: 159
        // SubProg ShowWarnings pc: 303 op: STARTLINE (58)

        /** error.e:155			end for*/
        // SubProg ShowWarnings pc: 305 op: ENDFOR_INT_UP1 (54)
        _i_48835 = _i_48835 + 1;
        goto LC; // [305] 218
LD: // addr: 310 pc: 305 sub: 48789 op: 54
        ;
    }
    // SubProg ShowWarnings pc: 310 op: NOP1 (159)
LB: // addr: 311 pc: 310 sub: 48789 op: 159
    // SubProg ShowWarnings pc: 311 op: STARTLINE (58)

    /** error.e:158		return length(warning_list)*/
    // SubProg ShowWarnings pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 315 op: LENGTH (42)
    if (IS_SEQUENCE(_50warning_list_48715)){
            _25267 = SEQ_PTR(_50warning_list_48715)->length;
    }
    else {
        _25267 = 1;
    }
    // SubProg ShowWarnings pc: 318 op: RETURNF (28)

// Exiting block BLOCK: ShowWarnings

// block var c_48791

// block var errfile_48792

// block var twf_48793
    DeRef(_25238);
    _25238 = NOVALUE;
    DeRef(_25262);
    _25262 = NOVALUE;
    DeRef(_25253);
    _25253 = NOVALUE;
    DeRef(_25260);
    _25260 = NOVALUE;
    return _25267;
    // SubProg ShowWarnings pc: 322 op: BADRETURNF (43)
    ;
}


void _50ShowDefines(object _errfile_48857)
{
    object _c_48858 = NOVALUE;
    object _25281 = NOVALUE; // 48882 25281
    object _25280 = NOVALUE; // 48881 25280
// skipping _25279  name type: 0
    object _25278 = NOVALUE; // 48878 25278
    object _25277 = NOVALUE; // 48877 25277
    object _25274 = NOVALUE; // 48874 25274
    object _25273 = NOVALUE; // 48871 25273
    object _25272 = NOVALUE; // 48867 25272
    object _25271 = NOVALUE; // 48866 25271
    object _25270 = NOVALUE; // 48865 25270
// skipping _25268  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowDefines pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowDefines pc: 3 op: STARTLINE (58)

    /** error.e:164		if errfile=0 then*/
    // SubProg ShowDefines pc: 5 op: EQUALS_IFW_I (121)
    if (_errfile_48857 != 0)
    goto L1; // [5] 19
    // SubProg ShowDefines pc: 9 op: STARTLINE (58)

    /** error.e:165			errfile = STDERR*/
    // SubProg ShowDefines pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowDefines pc: 13 op: ASSIGN (18)
    _errfile_48857 = 2;
    // SubProg ShowDefines pc: 16 op: INTEGER_CHECK (96)
    // SubProg ShowDefines pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 48855 op: 159
    // SubProg ShowDefines pc: 19 op: STARTLINE (58)

    /** error.e:168		puts(errfile, format("\n--- [1] ---\n", {GetMsgText(207,0)}))*/
    // SubProg ShowDefines pc: 21 op: PROC (27)
    RefDS(_21933);
    _25270 = _42GetMsgText(207, 0, _21933);
    // SubProg ShowDefines pc: 27 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25270;
    _25271 = MAKE_SEQ(_1);
    _25270 = NOVALUE;
    // SubProg ShowDefines pc: 31 op: PROC (27)
    RefDS(_25269);
    _25272 = _17format(_25269, _25271);
    _25271 = NOVALUE;
    // SubProg ShowDefines pc: 36 op: PUTS (44)
    EPuts(_errfile_48857, _25272); // DJP 
    DeRef(_25272);
    _25272 = NOVALUE;
    // SubProg ShowDefines pc: 39 op: STARTLINE (58)

    /** error.e:170		for i = 1 to length(OpDefines) do*/
    // SubProg ShowDefines pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowDefines pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_36OpDefines_16509)){
            _25273 = SEQ_PTR(_36OpDefines_16509)->length;
    }
    else {
        _25273 = 1;
    }
    // SubProg ShowDefines pc: 46 op: FOR_I (125)
    {
        object _i_48869;
        _i_48869 = 1;
L2: // addr: 53 pc: 46 sub: 48855 op: 125
        if (_i_48869 > _25273){
            goto L3; // [46] 98
        }
        // SubProg ShowDefines pc: 53 op: STARTLINE (58)

        /** error.e:171			if find(OpDefines[i], {"_PLAT_START", "_PLAT_STOP"}) = 0 then*/
        // SubProg ShowDefines pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowDefines pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36OpDefines_16509);
        _25274 = (object)*(((s1_ptr)_2)->base + _i_48869);
        // SubProg ShowDefines pc: 61 op: RIGHT_BRACE_2 (85)
        RefDS(_25276);
        RefDS(_25275);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25275;
        ((intptr_t *)_2)[2] = _25276;
        _25277 = MAKE_SEQ(_1);
        // SubProg ShowDefines pc: 65 op: FIND_FROM (176)
        _25278 = find_from(_25274, _25277, 1);
        _25274 = NOVALUE;
        DeRefDS(_25277);
        _25277 = NOVALUE;
        // SubProg ShowDefines pc: 70 op: EQUALS_IFW_I (121)
        if (_25278 != 0)
        goto L4; // [70] 91
        // SubProg ShowDefines pc: 74 op: STARTLINE (58)

        /** error.e:172				printf(errfile, "%s\n", {OpDefines[i]})*/
        // SubProg ShowDefines pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowDefines pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36OpDefines_16509);
        _25280 = (object)*(((s1_ptr)_2)->base + _i_48869);
        // SubProg ShowDefines pc: 82 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25280);
        ((intptr_t*)_2)[1] = _25280;
        _25281 = MAKE_SEQ(_1);
        _25280 = NOVALUE;
        // SubProg ShowDefines pc: 86 op: PRINTF (38)
        EPrintf(_errfile_48857, _25162, _25281);
        DeRefDS(_25281);
        _25281 = NOVALUE;
        // SubProg ShowDefines pc: 90 op: NOP1 (159)
L4: // addr: 91 pc: 90 sub: 48855 op: 159
        // SubProg ShowDefines pc: 91 op: STARTLINE (58)

        /** error.e:174		end for*/
        // SubProg ShowDefines pc: 93 op: ENDFOR_INT_UP1 (54)
        _i_48869 = _i_48869 + 1;
        goto L2; // [93] 53
L3: // addr: 98 pc: 93 sub: 48855 op: 54
        ;
    }
    // SubProg ShowDefines pc: 98 op: STARTLINE (58)

    /** error.e:175		puts(errfile, "-------------------\n")*/
    // SubProg ShowDefines pc: 100 op: PUTS (44)
    EPuts(_errfile_48857, _25282); // DJP 
    // SubProg ShowDefines pc: 103 op: STARTLINE (58)

    /** error.e:177	end procedure*/
    // SubProg ShowDefines pc: 105 op: RETURNP (29)

// Exiting block BLOCK: ShowDefines

// block var errfile_48857
    return;
    // SubProg ShowDefines pc: 108 op: BADRETURNF (43)
    ;
}


void _50Cleanup(object _status_48886)
{
    object _w_48887 = NOVALUE;
    object _show_error_48888 = NOVALUE;
    object _25300 = NOVALUE; // 48924 25300
    object _25299 = NOVALUE; // 48923 25299
    object _25298 = NOVALUE; // 48920 25298
    object _25297 = NOVALUE; // 48918 25297
    object _25296 = NOVALUE; // 48917 25296
    object _25295 = NOVALUE; // 48914 25295
    object _25294 = NOVALUE; // 48913 25294
    object _25293 = NOVALUE; // 48912 25293
    object _25292 = NOVALUE; // 48910 25292
    object _25291 = NOVALUE; // 48909 25291
// skipping _25290  name type: 0
    object _25289 = NOVALUE; // 48903 25289
    object _25288 = NOVALUE; // 48901 25288
    object _25287 = NOVALUE; // 48900 25287
    object _25286 = NOVALUE; // 48897 25286
    object _25285 = NOVALUE; // 48896 25285
// skipping _25284  name type: 0
    object _25283 = NOVALUE; // 48891 25283
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Cleanup pc: 1 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 3 op: STARTLINE (58)

    /** error.e:182		integer w, show_error = 0*/
    // SubProg Cleanup pc: 5 op: ASSIGN_I (113)
    _show_error_48888 = 0;
    // SubProg Cleanup pc: 8 op: STARTLINE (58)

    /** error.e:184		ifdef EU_EX then*/
    // SubProg Cleanup pc: 10 op: STARTLINE (58)

    /** error.e:190		show_error = 1*/
    // SubProg Cleanup pc: 12 op: ASSIGN_I (113)
    _show_error_48888 = 1;
    // SubProg Cleanup pc: 15 op: STARTLINE (58)

    /** error.e:196		if object(src_file) = 0 then*/
    // SubProg Cleanup pc: 17 op: IS_AN_OBJECT (40)
    if( NOVALUE == _36src_file_16557 ){
        _25283 = 0;
    }
    else{
        _25283 = 1;
    }
    // SubProg Cleanup pc: 20 op: EQUALS_IFW_I (121)
    if (_25283 != 0)
    goto L1; // [20] 34
    // SubProg Cleanup pc: 24 op: STARTLINE (58)

    /** error.e:197			src_file = -1*/
    // SubProg Cleanup pc: 26 op: ASSIGN (18)
    _36src_file_16557 = -1;
    // SubProg Cleanup pc: 29 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 31 op: ELSE (23)
    goto L2; // [31] 86
    // SubProg Cleanup pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 48884 op: 159
    // SubProg Cleanup pc: 34 op: STARTLINE (58)

    /** error.e:198		elsif src_file >= 0 and (src_file != repl_file or not repl) then*/
    // SubProg Cleanup pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 38 op: GREATEREQ (2)
    _25285 = (_36src_file_16557 >= 0);
    // SubProg Cleanup pc: 42 op: SC1_AND_IF (146)
    if (_25285 == 0) {
        goto L3; // [42] 85
    }
    // SubProg Cleanup pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 50 op: NOTEQ (4)
    _25287 = (_36src_file_16557 != 5555);
    // SubProg Cleanup pc: 54 op: SC1_OR (143)
    if (_25287 != 0) {
        DeRef(_25288);
        _25288 = 1;
        goto L4; // [54] 67
    }
    // SubProg Cleanup pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 60 op: NOT (7)
    _25289 = (0 == 0);
    // SubProg Cleanup pc: 63 op: SC2_OR (144)
    _25288 = (_25289 != 0);
    // SubProg Cleanup pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 48884 op: 159
    // SubProg Cleanup pc: 67 op: NOP1 (159)
    // SubProg Cleanup pc: 68 op: IF (20)
    if (_25288 == 0)
    {
        _25288 = NOVALUE;
        goto L3; // [68] 85
    }
    else{
        _25288 = NOVALUE;
    }
    // SubProg Cleanup pc: 71 op: STARTLINE (58)

    /** error.e:199			close(src_file)*/
    // SubProg Cleanup pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 75 op: CLOSE (86)
    EClose(_36src_file_16557);
    // SubProg Cleanup pc: 77 op: STARTLINE (58)

    /** error.e:200			src_file = -1*/
    // SubProg Cleanup pc: 79 op: ASSIGN (18)
    _36src_file_16557 = -1;
    // SubProg Cleanup pc: 82 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 84 op: NOP1 (159)
L3: // addr: 85 pc: 84 sub: 48884 op: 159
    // SubProg Cleanup pc: 85 op: NOP1 (159)
L2: // addr: 86 pc: 85 sub: 48884 op: 159
    // SubProg Cleanup pc: 86 op: STARTLINE (58)

    /** error.e:203		w = ShowWarnings()*/
    // SubProg Cleanup pc: 88 op: PROC (27)
    _w_48887 = _50ShowWarnings();
    // SubProg Cleanup pc: 91 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_w_48887)) {
        _1 = (object)(DBL_PTR(_w_48887)->dbl);
        DeRefDS(_w_48887);
        _w_48887 = _1;
    }
    // SubProg Cleanup pc: 93 op: STARTLINE (58)

    /** error.e:204		if not TRANSLATE and (BIND or show_error) and (w or Errors) then*/
    // SubProg Cleanup pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 97 op: NOT (7)
    _25291 = (_36TRANSLATE_16061 == 0);
    // SubProg Cleanup pc: 100 op: SC1_AND (141)
    if (_25291 == 0) {
        _25292 = 0;
        goto L5; // [100] 118
    }
    // SubProg Cleanup pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 106 op: SC1_OR (143)
    if (_36BIND_16064 != 0) {
        _25293 = 1;
        goto L6; // [106] 114
    }
    // SubProg Cleanup pc: 110 op: SC2_OR (144)
    _25293 = (_show_error_48888 != 0);
    // SubProg Cleanup pc: 113 op: NOP1 (159)
L6: // addr: 114 pc: 113 sub: 48884 op: 159
    // SubProg Cleanup pc: 114 op: SC2_AND (142)
    _25292 = (_25293 != 0);
    // SubProg Cleanup pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 48884 op: 159
    // SubProg Cleanup pc: 118 op: SC1_AND_IF (146)
    if (_25292 == 0) {
        goto L7; // [118] 177
    }
    // SubProg Cleanup pc: 122 op: SC1_OR (143)
    if (_w_48887 != 0) {
        DeRef(_25295);
        _25295 = 1;
        goto L8; // [122] 132
    }
    // SubProg Cleanup pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 128 op: SC2_OR (144)
    _25295 = (_50Errors_48703 != 0);
    // SubProg Cleanup pc: 131 op: NOP1 (159)
L8: // addr: 132 pc: 131 sub: 48884 op: 159
    // SubProg Cleanup pc: 132 op: NOP1 (159)
    // SubProg Cleanup pc: 133 op: IF (20)
    if (_25295 == 0)
    {
        _25295 = NOVALUE;
        goto L7; // [133] 177
    }
    else{
        _25295 = NOVALUE;
    }
    // SubProg Cleanup pc: 136 op: STARTLINE (58)

    /** error.e:205			if not batch_job and not test_only then*/
    // SubProg Cleanup pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 140 op: NOT (7)
    _25296 = (_36batch_job_16449 == 0);
    // SubProg Cleanup pc: 143 op: SC1_AND_IF (146)
    if (_25296 == 0) {
        goto L9; // [143] 176
    }
    // SubProg Cleanup pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 149 op: NOT (7)
    _25298 = (_36test_only_16448 == 0);
    // SubProg Cleanup pc: 152 op: NOP1 (159)
    // SubProg Cleanup pc: 153 op: IF (20)
    if (_25298 == 0)
    {
        DeRef(_25298);
        _25298 = NOVALUE;
        goto L9; // [153] 176
    }
    else{
        DeRef(_25298);
        _25298 = NOVALUE;
    }
    // SubProg Cleanup pc: 156 op: STARTLINE (58)

    /** error.e:206				screen_output(STDERR, GetMsgText(208,0))*/
    // SubProg Cleanup pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 160 op: PROC (27)
    RefDS(_21933);
    _25299 = _42GetMsgText(208, 0, _21933);
    // SubProg Cleanup pc: 166 op: PROC (27)
    _50screen_output(2, _25299);
    _25299 = NOVALUE;
    // SubProg Cleanup pc: 170 op: STARTLINE (58)

    /** error.e:207				getc(0) -- wait*/
    // SubProg Cleanup pc: 172 op: GETC (33)
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25300 = getc((FILE*)xstdin);
        }
        else{
            _25300 = getc(last_r_file_ptr);
        }
    }
    else{
        _25300 = getc(last_r_file_ptr);
    }
    // SubProg Cleanup pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 48884 op: 159
    // SubProg Cleanup pc: 176 op: NOP1 (159)
L7: // addr: 177 pc: 176 sub: 48884 op: 159
    // SubProg Cleanup pc: 177 op: STARTLINE (58)

    /** error.e:212		cleanup_open_includes()*/
    // SubProg Cleanup pc: 179 op: PROC (27)
    _62cleanup_open_includes();
    // SubProg Cleanup pc: 181 op: STARTLINE (58)

    /** error.e:213		abort(status)*/
    // SubProg Cleanup pc: 183 op: ABORT (126)
    UserCleanup(_status_48886);
    // SubProg Cleanup pc: 185 op: STARTLINE (58)

    /** error.e:214	end procedure*/
    // SubProg Cleanup pc: 187 op: RETURNP (29)

// Exiting block BLOCK: Cleanup

// block var status_48886

// block var w_48887

// block var show_error_48888
    DeRef(_25291);
    _25291 = NOVALUE;
    DeRef(_25287);
    _25287 = NOVALUE;
    DeRef(_25285);
    _25285 = NOVALUE;
    DeRef(_25296);
    _25296 = NOVALUE;
    DeRef(_25289);
    _25289 = NOVALUE;
    return;
    // SubProg Cleanup pc: 190 op: BADRETURNF (43)
    ;
}


void _50OpenErrFile()
{
    object _25307 = NOVALUE; // 48939 25307
    object _25306 = NOVALUE; // 48938 25306
// skipping _25305  name type: 0
    object _25304 = NOVALUE; // 48934 25304
// skipping _25303  name type: 0
// skipping _25302  name type: 0
// skipping _25301  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg OpenErrFile pc: 1 op: STARTLINE (58)

    /** error.e:219	    if TempErrFile != -1 then*/
    // SubProg OpenErrFile pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 5 op: NOTEQ_IFW_I (122)
    if (_50TempErrFile_48704 == -1)
    goto L1; // [5] 19
    // SubProg OpenErrFile pc: 9 op: STARTLINE (58)

    /** error.e:220			TempErrFile = open(TempErrName, "w")*/
    // SubProg OpenErrFile pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 13 op: OPEN (37)
    _50TempErrFile_48704 = EOpen(_50TempErrName_48705, _22069, 0);
    // SubProg OpenErrFile pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 48926 op: 159
    // SubProg OpenErrFile pc: 19 op: STARTLINE (58)

    /** error.e:223		if TempErrFile = -1 then*/
    // SubProg OpenErrFile pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 23 op: EQUALS_IFW_I (121)
    if (_50TempErrFile_48704 != -1)
    goto L2; // [23] 64
    // SubProg OpenErrFile pc: 27 op: STARTLINE (58)

    /** error.e:224			if length(TempErrName) > 0 then*/
    // SubProg OpenErrFile pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 31 op: LENGTH (42)
    // Known sequence length:
    _25304 = 6;
    // SubProg OpenErrFile pc: 34 op: GREATER_IFW_I (124)
    // SubProg OpenErrFile pc: 38 op: STARTLINE (58)

    /** error.e:225				screen_output(STDERR, GetMsgText(209, 0, {TempErrName}))*/
    // SubProg OpenErrFile pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 44 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_50TempErrName_48705);
    ((intptr_t*)_2)[1] = _50TempErrName_48705;
    _25306 = MAKE_SEQ(_1);
    // SubProg OpenErrFile pc: 48 op: PROC (27)
    _25307 = _42GetMsgText(209, 0, _25306);
    _25306 = NOVALUE;
    // SubProg OpenErrFile pc: 54 op: PROC (27)
    _50screen_output(2, _25307);
    _25307 = NOVALUE;
    // SubProg OpenErrFile pc: 58 op: NOP1 (159)
    // SubProg OpenErrFile pc: 59 op: STARTLINE (58)

    /** error.e:227			abort(1) -- with no clean up*/
    // SubProg OpenErrFile pc: 61 op: ABORT (126)
    UserCleanup(1);
    // SubProg OpenErrFile pc: 63 op: NOP1 (159)
L2: // addr: 64 pc: 63 sub: 48926 op: 159
    // SubProg OpenErrFile pc: 64 op: STARTLINE (58)

    /** error.e:229	end procedure*/
    // SubProg OpenErrFile pc: 66 op: RETURNP (29)

// Exiting block BLOCK: OpenErrFile
    return;
    // SubProg OpenErrFile pc: 69 op: BADRETURNF (43)
    ;
}


void _50ShowErr(object _f_48942)
{
    object _msg_inlined_screen_output_at_41_48954 = NOVALUE;
// skipping _25315  name type: 0
    object _25314 = NOVALUE; // 48961 25314
    object _25313 = NOVALUE; // 48959 25313
    object _25312 = NOVALUE; // 48952 25312
// skipping _25311  name type: 0
    object _25310 = NOVALUE; // 48948 25310
// skipping _25309  name type: 0
    object _25308 = NOVALUE; // 48945 25308
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowErr pc: 3 op: STARTLINE (58)

    /** error.e:234		if length(known_files) = 0 then*/
    // SubProg ShowErr pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _25308 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _25308 = 1;
    }
    // SubProg ShowErr pc: 10 op: EQUALS_IFW_I (121)
    if (_25308 != 0)
    goto L1; // [10] 20
    // SubProg ShowErr pc: 14 op: STARTLINE (58)

    /** error.e:235			return*/
    // SubProg ShowErr pc: 16 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: ShowErr

// block var f_48942
    return;
    // SubProg ShowErr pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 48940 op: 159
    // SubProg ShowErr pc: 20 op: STARTLINE (58)

    /** error.e:238		if ThisLine[1] = END_OF_FILE_CHAR then*/
    // SubProg ShowErr pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_50ThisLine_48707);
    _25310 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ShowErr pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 30 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25310, 26)){
        _25310 = NOVALUE;
        goto L2; // [30] 62
    }
    _25310 = NOVALUE;
    // SubProg ShowErr pc: 34 op: STARTLINE (58)

    /** error.e:239			screen_output(f, GetMsgText(210,0))*/
    // SubProg ShowErr pc: 36 op: PROC (27)
    RefDS(_21933);
    _25312 = _42GetMsgText(210, 0, _21933);
    // SubProg ShowErr pc: 42 op: ASSIGN (18)
    DeRef(_msg_inlined_screen_output_at_41_48954);
    _msg_inlined_screen_output_at_41_48954 = _25312;
    _25312 = NOVALUE;
    // SubProg ShowErr pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg ShowErr pc: 47 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 49 op: PUTS (44)
    EPuts(_f_48942, _msg_inlined_screen_output_at_41_48954); // DJP 
    // SubProg ShowErr pc: 52 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 54 op: ELSE (23)
    goto L3; // [54] 57
    // SubProg ShowErr pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 48940 op: 159
    // SubProg ShowErr pc: 57 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-screen_output from ShowErr @ 41

// block var msg_inlined_screen_output_at_41_48954
    DeRef(_msg_inlined_screen_output_at_41_48954);
    _msg_inlined_screen_output_at_41_48954 = NOVALUE;
    // SubProg ShowErr pc: 59 op: ELSE (23)
    goto L4; // [59] 79
    // SubProg ShowErr pc: 61 op: NOP1 (159)
L2: // addr: 62 pc: 61 sub: 48940 op: 159
    // SubProg ShowErr pc: 62 op: STARTLINE (58)

    /** error.e:241			screen_output(f, ThisLine)*/
    // SubProg ShowErr pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 66 op: SEQUENCE_CHECK (97)
    // SubProg ShowErr pc: 68 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 70 op: PUTS (44)
    EPuts(_f_48942, _50ThisLine_48707); // DJP 
    // SubProg ShowErr pc: 73 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 75 op: ELSE (23)
    goto L5; // [75] 78
    // SubProg ShowErr pc: 77 op: NOP1 (159)
L5: // addr: 78 pc: 77 sub: 48940 op: 159
    // SubProg ShowErr pc: 78 op: NOP1 (159)
L4: // addr: 79 pc: 78 sub: 48940 op: 159
    // SubProg ShowErr pc: 79 op: STARTLINE (58)

    /** error.e:244		for i = 1 to bp-2 do -- bp-1 points to last character read*/
    // SubProg ShowErr pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 83 op: MINUS (10)
    _25313 = _50bp_48711 - 2;
    if ((object)((uintptr_t)_25313 +(uintptr_t) HIGH_BITS) >= 0){
        _25313 = NewDouble((eudouble)_25313);
    }
    // SubProg ShowErr pc: 87 op: FOR (21)
    {
        object _i_48958;
        _i_48958 = 1;
L6: // addr: 94 pc: 87 sub: 48940 op: 21
        if (binary_op_a(GREATER, _i_48958, _25313)){
            goto L7; // [87] 141
        }
        // SubProg ShowErr pc: 94 op: STARTLINE (58)

        /** error.e:245			if ThisLine[i] = '\t' then*/
        // SubProg ShowErr pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowErr pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_50ThisLine_48707);
        if (!IS_ATOM_INT(_i_48958)){
            _25314 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_48958)->dbl));
        }
        else{
            _25314 = (object)*(((s1_ptr)_2)->base + _i_48958);
        }
        // SubProg ShowErr pc: 102 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25314, 9)){
            _25314 = NOVALUE;
            goto L8; // [102] 121
        }
        _25314 = NOVALUE;
        // SubProg ShowErr pc: 106 op: STARTLINE (58)

        /** error.e:246				screen_output(f, "\t")*/
        // SubProg ShowErr pc: 108 op: STARTLINE (58)

        /** error.e:44		puts(f, msg)*/
        // SubProg ShowErr pc: 110 op: PUTS (44)
        EPuts(_f_48942, _23874); // DJP 
        // SubProg ShowErr pc: 113 op: STARTLINE (58)

        /** error.e:45	end procedure*/
        // SubProg ShowErr pc: 115 op: ELSE (23)
        goto L9; // [115] 134
        // SubProg ShowErr pc: 117 op: NOP1 (159)
        // SubProg ShowErr pc: 118 op: ELSE (23)
        goto L9; // [118] 134
        // SubProg ShowErr pc: 120 op: NOP1 (159)
L8: // addr: 121 pc: 120 sub: 48940 op: 159
        // SubProg ShowErr pc: 121 op: STARTLINE (58)

        /** error.e:248				screen_output(f, " ")*/
        // SubProg ShowErr pc: 123 op: STARTLINE (58)

        /** error.e:44		puts(f, msg)*/
        // SubProg ShowErr pc: 125 op: PUTS (44)
        EPuts(_f_48942, _23325); // DJP 
        // SubProg ShowErr pc: 128 op: STARTLINE (58)

        /** error.e:45	end procedure*/
        // SubProg ShowErr pc: 130 op: ELSE (23)
        goto LA; // [130] 133
        // SubProg ShowErr pc: 132 op: NOP1 (159)
LA: // addr: 133 pc: 132 sub: 48940 op: 159
        // SubProg ShowErr pc: 133 op: NOP1 (159)
L9: // addr: 134 pc: 133 sub: 48940 op: 159
        // SubProg ShowErr pc: 134 op: STARTLINE (58)

        /** error.e:250		end for*/
        // SubProg ShowErr pc: 136 op: ENDFOR_INT_UP1 (54)
        _0 = _i_48958;
        if (IS_ATOM_INT(_i_48958)) {
            _i_48958 = _i_48958 + 1;
            if ((object)((uintptr_t)_i_48958 +(uintptr_t) HIGH_BITS) >= 0){
                _i_48958 = NewDouble((eudouble)_i_48958);
            }
        }
        else {
            _i_48958 = binary_op_a(PLUS, _i_48958, 1);
        }
        DeRef(_0);
        goto L6; // [136] 94
L7: // addr: 141 pc: 136 sub: 48940 op: 54
        ;
        DeRef(_i_48958);
    }
    // SubProg ShowErr pc: 141 op: STARTLINE (58)

    /** error.e:252		screen_output(f, "^\n\n")*/
    // SubProg ShowErr pc: 143 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 145 op: PUTS (44)
    EPuts(_f_48942, _25316); // DJP 
    // SubProg ShowErr pc: 148 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 150 op: ELSE (23)
    goto LB; // [150] 153
    // SubProg ShowErr pc: 152 op: NOP1 (159)
LB: // addr: 153 pc: 152 sub: 48940 op: 159
    // SubProg ShowErr pc: 153 op: STARTLINE (58)

    /** error.e:253	end procedure*/
    // SubProg ShowErr pc: 155 op: RETURNP (29)

// Exiting block BLOCK: ShowErr

// block var f_48942
    DeRef(_25313);
    _25313 = NOVALUE;
    return;
    // SubProg ShowErr pc: 158 op: BADRETURNF (43)
    ;
}


void _50CompileErr(object _msg_48970, object _args_48971, object _preproc_48972)
{
    object _errmsg_48973 = NOVALUE;
    object _25337 = NOVALUE; // 49008 25337
// skipping _25336  name type: 0
// skipping _25335  name type: 0
// skipping _25334  name type: 0
    object _25333 = NOVALUE; // 49000 25333
    object _25332 = NOVALUE; // 48999 25332
    object _25331 = NOVALUE; // 48998 25331
    object _25330 = NOVALUE; // 48997 25330
    object _25329 = NOVALUE; // 48996 25329
    object _25328 = NOVALUE; // 48995 25328
// skipping _25327  name type: 0
    object _25326 = NOVALUE; // 48991 25326
    object _25325 = NOVALUE; // 48989 25325
    object _25323 = NOVALUE; // 48985 25323
    object _25322 = NOVALUE; // 48983 25322
    object _25321 = NOVALUE; // 48982 25321
// skipping _25320  name type: 0
// skipping _25319  name type: 0
// skipping _25318  name type: 0
    object _25317 = NOVALUE; // 48975 25317
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg CompileErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg CompileErr pc: 3 op: STARTLINE (58)

    /** error.e:260		if integer(msg) then*/
    // SubProg CompileErr pc: 5 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_msg_48970))
    _25317 = 1;
    else if (IS_ATOM_DBL(_msg_48970))
    _25317 = IS_ATOM_INT(DoubleToInt(_msg_48970));
    else
    _25317 = 0;
    // SubProg CompileErr pc: 8 op: IF (20)
    if (_25317 == 0)
    {
        _25317 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25317 = NOVALUE;
    }
    // SubProg CompileErr pc: 11 op: STARTLINE (58)

    /** error.e:261			msg = GetMsgText(msg)*/
    // SubProg CompileErr pc: 13 op: PROC (27)
    Ref(_msg_48970);
    RefDS(_21933);
    _0 = _msg_48970;
    _msg_48970 = _42GetMsgText(_msg_48970, 1, _21933);
    DeRefi(_0);
    // SubProg CompileErr pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 48968 op: 159
    // SubProg CompileErr pc: 20 op: STARTLINE (58)

    /** error.e:264		msg = format(msg, args)*/
    // SubProg CompileErr pc: 22 op: PROC (27)
    Ref(_msg_48970);
    Ref(_args_48971);
    _0 = _msg_48970;
    _msg_48970 = _17format(_msg_48970, _args_48971);
    DeRef(_0);
    // SubProg CompileErr pc: 27 op: STARTLINE (58)

    /** error.e:266		Errors += 1*/
    // SubProg CompileErr pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 31 op: PLUS1_I (117)
    _50Errors_48703 = _50Errors_48703 + 1;
    // SubProg CompileErr pc: 35 op: STARTLINE (58)

    /** error.e:267		if not preproc and length(known_files) then*/
    // SubProg CompileErr pc: 37 op: NOT (7)
    _25321 = (_preproc_48972 == 0);
    // SubProg CompileErr pc: 40 op: SC1_AND_IF (146)
    if (_25321 == 0) {
        goto L2; // [40] 78
    }
    // SubProg CompileErr pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 46 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _25323 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _25323 = 1;
    }
    // SubProg CompileErr pc: 49 op: NOP1 (159)
    // SubProg CompileErr pc: 50 op: IF (20)
    if (_25323 == 0)
    {
        _25323 = NOVALUE;
        goto L2; // [50] 78
    }
    else{
        _25323 = NOVALUE;
    }
    // SubProg CompileErr pc: 53 op: STARTLINE (58)

    /** error.e:268			errmsg = sprintf("%s:%d\n%s\n", {known_files[current_file_no],*/
    // SubProg CompileErr pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 59 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _25325 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg CompileErr pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 65 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25325);
    ((intptr_t*)_2)[1] = _25325;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    Ref(_msg_48970);
    ((intptr_t*)_2)[3] = _msg_48970;
    _25326 = MAKE_SEQ(_1);
    _25325 = NOVALUE;
    // SubProg CompileErr pc: 71 op: SPRINTF (53)
    DeRef(_errmsg_48973);
    _errmsg_48973 = EPrintf(-9999999, _25324, _25326);
    DeRefDS(_25326);
    _25326 = NOVALUE;
    // SubProg CompileErr pc: 75 op: ELSE (23)
    goto L3; // [75] 121
    // SubProg CompileErr pc: 77 op: NOP1 (159)
L2: // addr: 78 pc: 77 sub: 48968 op: 159
    // SubProg CompileErr pc: 78 op: STARTLINE (58)

    /** error.e:271			errmsg = msg*/
    // SubProg CompileErr pc: 80 op: ASSIGN (18)
    Ref(_msg_48970);
    DeRef(_errmsg_48973);
    _errmsg_48973 = _msg_48970;
    // SubProg CompileErr pc: 83 op: SEQUENCE_CHECK (97)
    // SubProg CompileErr pc: 85 op: STARTLINE (58)

    /** error.e:272			if length(msg) > 0 and msg[$] != '\n' then*/
    // SubProg CompileErr pc: 87 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_48970)){
            _25328 = SEQ_PTR(_msg_48970)->length;
    }
    else {
        _25328 = 1;
    }
    // SubProg CompileErr pc: 90 op: GREATER (6)
    _25329 = (_25328 > 0);
    _25328 = NOVALUE;
    // SubProg CompileErr pc: 94 op: SC1_AND_IF (146)
    if (_25329 == 0) {
        goto L4; // [94] 120
    }
    // SubProg CompileErr pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_48970)){
            _25331 = SEQ_PTR(_msg_48970)->length;
    }
    else {
        _25331 = 1;
    }
    // SubProg CompileErr pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_msg_48970);
    _25332 = (object)*(((s1_ptr)_2)->base + _25331);
    // SubProg CompileErr pc: 105 op: NOTEQ (4)
    if (IS_ATOM_INT(_25332)) {
        _25333 = (_25332 != 10);
    }
    else {
        _25333 = binary_op(NOTEQ, _25332, 10);
    }
    _25332 = NOVALUE;
    // SubProg CompileErr pc: 109 op: NOP1 (159)
    // SubProg CompileErr pc: 110 op: IF (20)
    if (_25333 == 0) {
        DeRef(_25333);
        _25333 = NOVALUE;
        goto L4; // [110] 120
    }
    else {
        if (!IS_ATOM_INT(_25333) && DBL_PTR(_25333)->dbl == 0.0){
            DeRef(_25333);
            _25333 = NOVALUE;
            goto L4; // [110] 120
        }
        DeRef(_25333);
        _25333 = NOVALUE;
    }
    DeRef(_25333);
    _25333 = NOVALUE;
    // SubProg CompileErr pc: 113 op: STARTLINE (58)

    /** error.e:273				errmsg &= '\n'*/
    // SubProg CompileErr pc: 115 op: CONCAT (15)
    Append(&_errmsg_48973, _errmsg_48973, 10);
    // SubProg CompileErr pc: 119 op: NOP1 (159)
L4: // addr: 120 pc: 119 sub: 48968 op: 159
    // SubProg CompileErr pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 48968 op: 159
    // SubProg CompileErr pc: 121 op: STARTLINE (58)

    /** error.e:277		if not preproc then*/
    // SubProg CompileErr pc: 123 op: NOT_IFW (108)
    if (_preproc_48972 != 0)
    goto L5; // [123] 131
    // SubProg CompileErr pc: 126 op: STARTLINE (58)

    /** error.e:279			OpenErrFile() -- exits if error filename is ""*/
    // SubProg CompileErr pc: 128 op: PROC (27)
    _50OpenErrFile();
    // SubProg CompileErr pc: 130 op: NOP1 (159)
L5: // addr: 131 pc: 130 sub: 48968 op: 159
    // SubProg CompileErr pc: 131 op: STARTLINE (58)

    /** error.e:281		screen_output(STDERR, errmsg)*/
    // SubProg CompileErr pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 135 op: PRIVATE_INIT_CHECK (30)
    // SubProg CompileErr pc: 137 op: PROC (27)
    RefDS(_errmsg_48973);
    _50screen_output(2, _errmsg_48973);
    // SubProg CompileErr pc: 141 op: STARTLINE (58)

    /** error.e:283		if not preproc then*/
    // SubProg CompileErr pc: 143 op: NOT_IFW (108)
    if (_preproc_48972 != 0)
    goto L6; // [143] 198
    // SubProg CompileErr pc: 146 op: STARTLINE (58)

    /** error.e:284			ShowErr(STDERR)*/
    // SubProg CompileErr pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 150 op: PROC (27)
    _50ShowErr(2);
    // SubProg CompileErr pc: 153 op: STARTLINE (58)

    /** error.e:286			puts(TempErrFile, errmsg)*/
    // SubProg CompileErr pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 157 op: PUTS (44)
    EPuts(_50TempErrFile_48704, _errmsg_48973); // DJP 
    // SubProg CompileErr pc: 160 op: STARTLINE (58)

    /** error.e:288			ShowErr(TempErrFile)*/
    // SubProg CompileErr pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 164 op: PROC (27)
    _50ShowErr(_50TempErrFile_48704);
    // SubProg CompileErr pc: 167 op: STARTLINE (58)

    /** error.e:290			ShowWarnings()*/
    // SubProg CompileErr pc: 169 op: PROC (27)
    _25337 = _50ShowWarnings();
    // SubProg CompileErr pc: 172 op: STARTLINE (58)

    /** error.e:292			ShowDefines(TempErrFile)*/
    // SubProg CompileErr pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 176 op: PROC (27)
    _50ShowDefines(_50TempErrFile_48704);
    // SubProg CompileErr pc: 179 op: STARTLINE (58)

    /** error.e:294			close(TempErrFile)*/
    // SubProg CompileErr pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 183 op: CLOSE (86)
    EClose(_50TempErrFile_48704);
    // SubProg CompileErr pc: 185 op: STARTLINE (58)

    /** error.e:295			TempErrFile = -2*/
    // SubProg CompileErr pc: 187 op: ASSIGN_I (113)
    _50TempErrFile_48704 = -2;
    // SubProg CompileErr pc: 190 op: STARTLINE (58)

    /** error.e:296			ifdef CRASH_ON_ERROR then*/
    // SubProg CompileErr pc: 192 op: STARTLINE (58)

    /** error.e:299			Cleanup(1)*/
    // SubProg CompileErr pc: 194 op: PROC (27)
    _50Cleanup(1);
    // SubProg CompileErr pc: 197 op: NOP1 (159)
L6: // addr: 198 pc: 197 sub: 48968 op: 159
    // SubProg CompileErr pc: 198 op: STARTLINE (58)

    /** error.e:302	end procedure*/
    // SubProg CompileErr pc: 200 op: RETURNP (29)

// Exiting block BLOCK: CompileErr

// block var msg_48970
    DeRef(_msg_48970);

// block var args_48971
    DeRef(_args_48971);

// block var preproc_48972

// block var errmsg_48973
    DeRef(_errmsg_48973);
    DeRef(_25321);
    _25321 = NOVALUE;
    DeRef(_25329);
    _25329 = NOVALUE;
    DeRef(_25337);
    _25337 = NOVALUE;
    return;
    // SubProg CompileErr pc: 203 op: BADRETURNF (43)
    ;
}


void _50InternalErr(object _msgno_49016, object _args_49017)
{
    object _msg_49018 = NOVALUE;
    object _25352 = NOVALUE; // 49050 25352
    object _25351 = NOVALUE; // 49048 25351
    object _25350 = NOVALUE; // 49047 25350
    object _25349 = NOVALUE; // 49044 25349
    object _25348 = NOVALUE; // 49042 25348
    object _25347 = NOVALUE; // 49041 25347
    object _25346 = NOVALUE; // 49038 25346
    object _25345 = NOVALUE; // 49037 25345
    object _25344 = NOVALUE; // 49035 25344
    object _25343 = NOVALUE; // 49029 25343
    object _25342 = NOVALUE; // 49028 25342
// skipping _25341  name type: 0
// skipping _25340  name type: 0
    object _25339 = NOVALUE; // 49020 25339
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InternalErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg InternalErr pc: 3 op: STARTLINE (58)

    /** error.e:316		if atom(args) then*/
    // SubProg InternalErr pc: 5 op: IS_AN_ATOM (67)
    _25339 = 0;
    // SubProg InternalErr pc: 8 op: IF (20)
    if (_25339 == 0)
    {
        _25339 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _25339 = NOVALUE;
    }
    // SubProg InternalErr pc: 11 op: STARTLINE (58)

    /** error.e:317			args = {args}*/
    // SubProg InternalErr pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _args_49017;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_args_49017);
    ((intptr_t*)_2)[1] = _args_49017;
    _args_49017 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg InternalErr pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 49014 op: 159
    // SubProg InternalErr pc: 18 op: STARTLINE (58)

    /** error.e:320		msg = GetMsgText(msgno, 1, args)*/
    // SubProg InternalErr pc: 20 op: PROC (27)
    Ref(_args_49017);
    _0 = _msg_49018;
    _msg_49018 = _42GetMsgText(_msgno_49016, 1, _args_49017);
    DeRef(_0);
    // SubProg InternalErr pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg InternalErr pc: 28 op: STARTLINE (58)

    /** error.e:321		if TRANSLATE then*/
    // SubProg InternalErr pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 32 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L2; // [32] 56
    }
    else{
    }
    // SubProg InternalErr pc: 35 op: STARTLINE (58)

    /** error.e:322			screen_output(STDERR, GetMsgText(211, 1, {msg}))*/
    // SubProg InternalErr pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 39 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_msg_49018);
    ((intptr_t*)_2)[1] = _msg_49018;
    _25342 = MAKE_SEQ(_1);
    // SubProg InternalErr pc: 43 op: PROC (27)
    _25343 = _42GetMsgText(211, 1, _25342);
    _25342 = NOVALUE;
    // SubProg InternalErr pc: 49 op: PROC (27)
    _50screen_output(2, _25343);
    _25343 = NOVALUE;
    // SubProg InternalErr pc: 53 op: ELSE (23)
    goto L3; // [53] 87
    // SubProg InternalErr pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 49014 op: 159
    // SubProg InternalErr pc: 56 op: STARTLINE (58)

    /** error.e:324			screen_output(STDERR, GetMsgText(212, 1, {known_files[current_file_no], line_number, msg}))*/
    // SubProg InternalErr pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _25344 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg InternalErr pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 70 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25344);
    ((intptr_t*)_2)[1] = _25344;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    RefDS(_msg_49018);
    ((intptr_t*)_2)[3] = _msg_49018;
    _25345 = MAKE_SEQ(_1);
    _25344 = NOVALUE;
    // SubProg InternalErr pc: 76 op: PROC (27)
    _25346 = _42GetMsgText(212, 1, _25345);
    _25345 = NOVALUE;
    // SubProg InternalErr pc: 82 op: PROC (27)
    _50screen_output(2, _25346);
    _25346 = NOVALUE;
    // SubProg InternalErr pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 49014 op: 159
    // SubProg InternalErr pc: 87 op: STARTLINE (58)

    /** error.e:327		if not batch_job and not test_only then*/
    // SubProg InternalErr pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 91 op: NOT (7)
    _25347 = (_36batch_job_16449 == 0);
    // SubProg InternalErr pc: 94 op: SC1_AND_IF (146)
    if (_25347 == 0) {
        goto L4; // [94] 127
    }
    // SubProg InternalErr pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 100 op: NOT (7)
    _25349 = (_36test_only_16448 == 0);
    // SubProg InternalErr pc: 103 op: NOP1 (159)
    // SubProg InternalErr pc: 104 op: IF (20)
    if (_25349 == 0)
    {
        DeRef(_25349);
        _25349 = NOVALUE;
        goto L4; // [104] 127
    }
    else{
        DeRef(_25349);
        _25349 = NOVALUE;
    }
    // SubProg InternalErr pc: 107 op: STARTLINE (58)

    /** error.e:328			screen_output(STDERR, GetMsgText(208, 0))*/
    // SubProg InternalErr pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 111 op: PROC (27)
    RefDS(_21933);
    _25350 = _42GetMsgText(208, 0, _21933);
    // SubProg InternalErr pc: 117 op: PROC (27)
    _50screen_output(2, _25350);
    _25350 = NOVALUE;
    // SubProg InternalErr pc: 121 op: STARTLINE (58)

    /** error.e:329			getc(0)*/
    // SubProg InternalErr pc: 123 op: GETC (33)
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25351 = getc((FILE*)xstdin);
        }
        else{
            _25351 = getc(last_r_file_ptr);
        }
    }
    else{
        _25351 = getc(last_r_file_ptr);
    }
    // SubProg InternalErr pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 49014 op: 159
    // SubProg InternalErr pc: 127 op: STARTLINE (58)

    /** error.e:333		machine_proc(67, GetMsgText(213))*/
    // SubProg InternalErr pc: 129 op: PROC (27)
    RefDS(_21933);
    _25352 = _42GetMsgText(213, 1, _21933);
    // SubProg InternalErr pc: 135 op: MACHINE_PROC (112)
    machine(67, _25352);
    DeRef(_25352);
    _25352 = NOVALUE;
    // SubProg InternalErr pc: 138 op: STARTLINE (58)

    /** error.e:334	end procedure*/
    // SubProg InternalErr pc: 140 op: RETURNP (29)

// Exiting block BLOCK: InternalErr

// block var msgno_49016

// block var args_49017
    DeRef(_args_49017);

// block var msg_49018
    DeRef(_msg_49018);
    DeRef(_25347);
    _25347 = NOVALUE;
    return;
    // SubProg InternalErr pc: 143 op: BADRETURNF (43)
    ;
}



// 0x7342E7DC
