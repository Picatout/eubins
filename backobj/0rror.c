// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _49screen_output(object _f_48720, object _msg_48721)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg screen_output pc: 1 op: INTEGER_CHECK (96)
    // SubProg screen_output pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg screen_output pc: 5 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg screen_output pc: 7 op: PUTS (44)
    EPuts(2, _msg_48721); // DJP 
    // SubProg screen_output pc: 10 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg screen_output pc: 12 op: RETURNP (29)

// Exiting block BLOCK: screen_output

// block var f_48720

// block var msg_48721
    DeRefDS(_msg_48721);
    return;
    // SubProg screen_output pc: 15 op: BADRETURNF (43)
    ;
}


void _49Warning(object _msg_48724, object _mask_48725, object _args_48726)
{
    object _orig_mask_48727 = NOVALUE;
    object _text_48728 = NOVALUE;
    object _w_name_48729 = NOVALUE;
// skipping _25232  name type: 0
    object _25231 = NOVALUE; // 48770 25231
// skipping _25230  name type: 0
    object _25229 = NOVALUE; // 48767 25229
// skipping _25228  name type: 0
    object _25227 = NOVALUE; // 48763 25227
// skipping _25226  name type: 0
    object _25224 = NOVALUE; // 48758 25224
// skipping _25222  name type: 0
// skipping _25221  name type: 0
// skipping _25220  name type: 0
    object _25219 = NOVALUE; // 48749 25219
// skipping _25218  name type: 0
    object _25217 = NOVALUE; // 48746 25217
    object _25216 = NOVALUE; // 48744 25216
    object _25215 = NOVALUE; // 48742 25215
    object _25214 = NOVALUE; // 48739 25214
// skipping _25213  name type: 0
    object _25212 = NOVALUE; // 48734 25212
// skipping _25211  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Warning pc: 1 op: INTEGER_CHECK (96)
    // SubProg Warning pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 5 op: STARTLINE (58)

    /** error.e:54		if display_warnings = 0 then*/
    // SubProg Warning pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 9 op: EQUALS_IFW_I (121)
    if (_49display_warnings_48708 != 0)
    goto L1; // [9] 19
    // SubProg Warning pc: 13 op: STARTLINE (58)

    /** error.e:55			return*/
    // SubProg Warning pc: 15 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48724
    DeRef(_msg_48724);

// block var mask_48725

// block var args_48726
    DeRefDS(_args_48726);

// block var orig_mask_48727

// block var text_48728
    DeRef(_text_48728);

// block var w_name_48729
    DeRef(_w_name_48729);
    return;
    // SubProg Warning pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 48722 op: 159
    // SubProg Warning pc: 19 op: STARTLINE (58)

    /** error.e:58		if not Strict_is_on or Strict_Override then*/
    // SubProg Warning pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 23 op: NOT (7)
    _25212 = (_34Strict_is_on_15253 == 0);
    // SubProg Warning pc: 26 op: SC1_OR_IF (147)
    if (_25212 != 0) {
        goto L2; // [26] 37
    }
    // SubProg Warning pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 32 op: NOP1 (159)
    // SubProg Warning pc: 33 op: IF (20)
    if (_34Strict_Override_15254 == 0)
    {
        goto L3; // [33] 56
    }
    else{
    }
    // SubProg Warning pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 48722 op: 159
    // SubProg Warning pc: 37 op: STARTLINE (58)

    /** error.e:59			if find(mask, strict_only_warnings) then*/
    // SubProg Warning pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 41 op: FIND_FROM (176)
    _25214 = find_from(_mask_48725, _34strict_only_warnings_15251, 1);
    // SubProg Warning pc: 46 op: IF (20)
    if (_25214 == 0)
    {
        _25214 = NOVALUE;
        goto L4; // [46] 55
    }
    else{
        _25214 = NOVALUE;
    }
    // SubProg Warning pc: 49 op: STARTLINE (58)

    /** error.e:60				return*/
    // SubProg Warning pc: 51 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48724
    DeRef(_msg_48724);

// block var mask_48725

// block var args_48726
    DeRefDS(_args_48726);

// block var orig_mask_48727

// block var text_48728
    DeRef(_text_48728);

// block var w_name_48729
    DeRef(_w_name_48729);
    DeRef(_25212);
    _25212 = NOVALUE;
    return;
    // SubProg Warning pc: 54 op: NOP1 (159)
L4: // addr: 55 pc: 54 sub: 48722 op: 159
    // SubProg Warning pc: 55 op: NOP1 (159)
L3: // addr: 56 pc: 55 sub: 48722 op: 159
    // SubProg Warning pc: 56 op: STARTLINE (58)

    /** error.e:64		orig_mask = mask -- =0 for non maskable warnings - none implemented so far*/
    // SubProg Warning pc: 58 op: ASSIGN_I (113)
    _orig_mask_48727 = _mask_48725;
    // SubProg Warning pc: 61 op: STARTLINE (58)

    /** error.e:65		if Strict_is_on and Strict_Override = 0 then*/
    // SubProg Warning pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 65 op: SC1_AND_IF (146)
    if (_34Strict_is_on_15253 == 0) {
        goto L5; // [65] 85
    }
    // SubProg Warning pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 71 op: EQUALS (3)
    _25216 = (_34Strict_Override_15254 == 0);
    // SubProg Warning pc: 75 op: NOP1 (159)
    // SubProg Warning pc: 76 op: IF (20)
    if (_25216 == 0)
    {
        DeRef(_25216);
        _25216 = NOVALUE;
        goto L5; // [76] 85
    }
    else{
        DeRef(_25216);
        _25216 = NOVALUE;
    }
    // SubProg Warning pc: 79 op: STARTLINE (58)

    /** error.e:66			mask = 0*/
    // SubProg Warning pc: 81 op: ASSIGN_I (113)
    _mask_48725 = 0;
    // SubProg Warning pc: 84 op: NOP1 (159)
L5: // addr: 85 pc: 84 sub: 48722 op: 159
    // SubProg Warning pc: 85 op: STARTLINE (58)

    /** error.e:69		if mask = 0 or and_bits(OpWarning, mask) then*/
    // SubProg Warning pc: 87 op: EQUALS (3)
    _25217 = (_mask_48725 == 0);
    // SubProg Warning pc: 91 op: SC1_OR_IF (147)
    if (_25217 != 0) {
        goto L6; // [91] 106
    }
    // SubProg Warning pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 97 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_34OpWarning_15255 & (uintptr_t)_mask_48725;
         _25219 = MAKE_UINT(tu);
    }
    // SubProg Warning pc: 101 op: NOP1 (159)
    // SubProg Warning pc: 102 op: IF (20)
    if (_25219 == 0) {
        DeRef(_25219);
        _25219 = NOVALUE;
        goto L7; // [102] 213
    }
    else {
        if (!IS_ATOM_INT(_25219) && DBL_PTR(_25219)->dbl == 0.0){
            DeRef(_25219);
            _25219 = NOVALUE;
            goto L7; // [102] 213
        }
        DeRef(_25219);
        _25219 = NOVALUE;
    }
    DeRef(_25219);
    _25219 = NOVALUE;
    // SubProg Warning pc: 105 op: NOP1 (159)
L6: // addr: 106 pc: 105 sub: 48722 op: 159
    // SubProg Warning pc: 106 op: STARTLINE (58)

    /** error.e:70			if orig_mask != 0 then*/
    // SubProg Warning pc: 108 op: NOTEQ_IFW_I (122)
    if (_orig_mask_48727 == 0)
    goto L8; // [108] 122
    // SubProg Warning pc: 112 op: STARTLINE (58)

    /** error.e:71				orig_mask = find(orig_mask,warning_flags)*/
    // SubProg Warning pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 116 op: FIND_FROM (176)
    _orig_mask_48727 = find_from(_orig_mask_48727, _34warning_flags_15230, 1);
    // SubProg Warning pc: 121 op: NOP1 (159)
L8: // addr: 122 pc: 121 sub: 48722 op: 159
    // SubProg Warning pc: 122 op: STARTLINE (58)

    /** error.e:74			if orig_mask != 0 then*/
    // SubProg Warning pc: 124 op: NOTEQ_IFW_I (122)
    if (_orig_mask_48727 == 0)
    goto L9; // [124] 145
    // SubProg Warning pc: 128 op: STARTLINE (58)

    /** error.e:75				w_name = "{ " & warning_names[orig_mask] & " }"*/
    // SubProg Warning pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34warning_names_15232);
    _25224 = (object)*(((s1_ptr)_2)->base + _orig_mask_48727);
    // SubProg Warning pc: 136 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _25225;
        concat_list[1] = _25224;
        concat_list[2] = _25223;
        Concat_N((object_ptr)&_w_name_48729, concat_list, 3);
    }
    _25224 = NOVALUE;
    // SubProg Warning pc: 142 op: ELSE (23)
    goto LA; // [142] 153
    // SubProg Warning pc: 144 op: NOP1 (159)
L9: // addr: 145 pc: 144 sub: 48722 op: 159
    // SubProg Warning pc: 145 op: STARTLINE (58)

    /** error.e:77				w_name = "" -- not maskable*/
    // SubProg Warning pc: 147 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_w_name_48729);
    _w_name_48729 = _21936;
    // SubProg Warning pc: 150 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 152 op: NOP1 (159)
LA: // addr: 153 pc: 152 sub: 48722 op: 159
    // SubProg Warning pc: 153 op: STARTLINE (58)

    /** error.e:80			if atom(msg) then*/
    // SubProg Warning pc: 155 op: IS_AN_ATOM (67)
    _25227 = IS_ATOM(_msg_48724);
    // SubProg Warning pc: 158 op: IF (20)
    if (_25227 == 0)
    {
        _25227 = NOVALUE;
        goto LB; // [158] 170
    }
    else{
        _25227 = NOVALUE;
    }
    // SubProg Warning pc: 161 op: STARTLINE (58)

    /** error.e:81				msg = GetMsgText(msg, 1, args)*/
    // SubProg Warning pc: 163 op: PROC (27)
    Ref(_msg_48724);
    RefDS(_args_48726);
    _0 = _msg_48724;
    _msg_48724 = _40GetMsgText(_msg_48724, 1, _args_48726);
    DeRef(_0);
    // SubProg Warning pc: 169 op: NOP1 (159)
LB: // addr: 170 pc: 169 sub: 48722 op: 159
    // SubProg Warning pc: 170 op: STARTLINE (58)

    /** error.e:84			text = GetMsgText(204, 0, {w_name, msg})*/
    // SubProg Warning pc: 172 op: PRIVATE_INIT_CHECK (30)
    // SubProg Warning pc: 174 op: RIGHT_BRACE_2 (85)
    Ref(_msg_48724);
    RefDS(_w_name_48729);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _w_name_48729;
    ((intptr_t *)_2)[2] = _msg_48724;
    _25229 = MAKE_SEQ(_1);
    // SubProg Warning pc: 178 op: PROC (27)
    _0 = _text_48728;
    _text_48728 = _40GetMsgText(204, 0, _25229);
    DeRef(_0);
    _25229 = NOVALUE;
    // SubProg Warning pc: 184 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 186 op: STARTLINE (58)

    /** error.e:85			if find(text, warning_list) then*/
    // SubProg Warning pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 190 op: FIND_FROM (176)
    _25231 = find_from(_text_48728, _49warning_list_48717, 1);
    // SubProg Warning pc: 195 op: IF (20)
    if (_25231 == 0)
    {
        _25231 = NOVALUE;
        goto LC; // [195] 204
    }
    else{
        _25231 = NOVALUE;
    }
    // SubProg Warning pc: 198 op: STARTLINE (58)

    /** error.e:86				return -- duplicate*/
    // SubProg Warning pc: 200 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48724
    DeRef(_msg_48724);

// block var mask_48725

// block var args_48726
    DeRefDS(_args_48726);

// block var orig_mask_48727

// block var text_48728
    DeRefDS(_text_48728);

// block var w_name_48729
    DeRefDS(_w_name_48729);
    DeRef(_25212);
    _25212 = NOVALUE;
    DeRef(_25217);
    _25217 = NOVALUE;
    return;
    // SubProg Warning pc: 203 op: NOP1 (159)
LC: // addr: 204 pc: 203 sub: 48722 op: 159
    // SubProg Warning pc: 204 op: STARTLINE (58)

    /** error.e:89			warning_list = append(warning_list, text)*/
    // SubProg Warning pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 208 op: APPEND (35)
    RefDS(_text_48728);
    Append(&_49warning_list_48717, _49warning_list_48717, _text_48728);
    // SubProg Warning pc: 212 op: NOP1 (159)
L7: // addr: 213 pc: 212 sub: 48722 op: 159
    // SubProg Warning pc: 213 op: STARTLINE (58)

    /** error.e:91	end procedure*/
    // SubProg Warning pc: 215 op: RETURNP (29)

// Exiting block BLOCK: Warning

// block var msg_48724
    DeRef(_msg_48724);

// block var mask_48725

// block var args_48726
    DeRefDS(_args_48726);

// block var orig_mask_48727

// block var text_48728
    DeRef(_text_48728);

// block var w_name_48729
    DeRef(_w_name_48729);
    DeRef(_25212);
    _25212 = NOVALUE;
    DeRef(_25217);
    _25217 = NOVALUE;
    return;
    // SubProg Warning pc: 218 op: BADRETURNF (43)
    ;
}


object _49ShowWarnings()
{
    object _c_48793 = NOVALUE;
    object _errfile_48794 = NOVALUE;
    object _twf_48795 = NOVALUE;
    object _25270 = NOVALUE; // 48856 25270
// skipping _25269  name type: 0
// skipping _25268  name type: 0
    object _25267 = NOVALUE; // 48851 25267
    object _25266 = NOVALUE; // 48849 25266
    object _25265 = NOVALUE; // 48848 25265
    object _25264 = NOVALUE; // 48846 25264
    object _25263 = NOVALUE; // 48845 25263
    object _25262 = NOVALUE; // 48844 25262
// skipping _25261  name type: 0
    object _25260 = NOVALUE; // 48839 25260
    object _25259 = NOVALUE; // 48838 25259
    object _25258 = NOVALUE; // 48835 25258
// skipping _25257  name type: 0
    object _25256 = NOVALUE; // 48832 25256
    object _25255 = NOVALUE; // 48828 25255
    object _25254 = NOVALUE; // 48827 25254
    object _25253 = NOVALUE; // 48823 25253
// skipping _25252  name type: 0
    object _25251 = NOVALUE; // 48816 25251
// skipping _25250  name type: 0
// skipping _25249  name type: 0
// skipping _25248  name type: 0
    object _25247 = NOVALUE; // 48808 25247
// skipping _25246  name type: 0
    object _25245 = NOVALUE; // 48801 25245
    object _25244 = NOVALUE; // 48800 25244
    object _25243 = NOVALUE; // 48799 25243
// skipping _25242  name type: 0
    object _25241 = NOVALUE; // 48797 25241
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowWarnings pc: 1 op: STARTLINE (58)

    /** error.e:117		if display_warnings = 0 or length(warning_list) = 0 then*/
    // SubProg ShowWarnings pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 5 op: EQUALS (3)
    _25241 = (_49display_warnings_48708 == 0);
    // SubProg ShowWarnings pc: 9 op: SC1_OR_IF (147)
    if (_25241 != 0) {
        goto L1; // [9] 27
    }
    // SubProg ShowWarnings pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48717)){
            _25243 = SEQ_PTR(_49warning_list_48717)->length;
    }
    else {
        _25243 = 1;
    }
    // SubProg ShowWarnings pc: 18 op: EQUALS (3)
    _25244 = (_25243 == 0);
    _25243 = NOVALUE;
    // SubProg ShowWarnings pc: 22 op: NOP1 (159)
    // SubProg ShowWarnings pc: 23 op: IF (20)
    if (_25244 == 0)
    {
        DeRef(_25244);
        _25244 = NOVALUE;
        goto L2; // [23] 39
    }
    else{
        DeRef(_25244);
        _25244 = NOVALUE;
    }
    // SubProg ShowWarnings pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 27 op: STARTLINE (58)

    /** error.e:118			return length(warning_list)*/
    // SubProg ShowWarnings pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48717)){
            _25245 = SEQ_PTR(_49warning_list_48717)->length;
    }
    else {
        _25245 = 1;
    }
    // SubProg ShowWarnings pc: 34 op: RETURNF (28)

// Exiting block BLOCK: ShowWarnings

// block var c_48793

// block var errfile_48794

// block var twf_48795
    DeRef(_25241);
    _25241 = NOVALUE;
    return _25245;
    // SubProg ShowWarnings pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 39 op: STARTLINE (58)

    /** error.e:121		if TempErrFile > 0 then*/
    // SubProg ShowWarnings pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 43 op: GREATER_IFW_I (124)
    if (_49TempErrFile_48706 <= 0)
    goto L3; // [43] 57
    // SubProg ShowWarnings pc: 47 op: STARTLINE (58)

    /** error.e:122			errfile = TempErrFile*/
    // SubProg ShowWarnings pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 51 op: ASSIGN_I (113)
    _errfile_48794 = _49TempErrFile_48706;
    // SubProg ShowWarnings pc: 54 op: ELSE (23)
    goto L4; // [54] 67
    // SubProg ShowWarnings pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 57 op: STARTLINE (58)

    /** error.e:124			errfile = STDERR*/
    // SubProg ShowWarnings pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 61 op: ASSIGN (18)
    _errfile_48794 = 2;
    // SubProg ShowWarnings pc: 64 op: INTEGER_CHECK (96)
    // SubProg ShowWarnings pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 67 op: STARTLINE (58)

    /** error.e:127		if not integer(TempWarningName) then*/
    // SubProg ShowWarnings pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 71 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_34TempWarningName_15202))
    _25247 = 1;
    else if (IS_ATOM_DBL(_34TempWarningName_15202))
    _25247 = IS_ATOM_INT(DoubleToInt(_34TempWarningName_15202));
    else
    _25247 = 0;
    // SubProg ShowWarnings pc: 74 op: NOT_IFW (108)
    if (_25247 != 0)
    goto L5; // [74] 179
    _25247 = NOVALUE;
    // SubProg ShowWarnings pc: 77 op: STARTLINE (58)

    /** error.e:128			twf = open(TempWarningName,"w")*/
    // SubProg ShowWarnings pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 81 op: OPEN (37)
    _twf_48795 = EOpen(_34TempWarningName_15202, _22072, 0);
    // SubProg ShowWarnings pc: 86 op: STARTLINE (58)

    /** error.e:129			if twf = -1 then*/
    // SubProg ShowWarnings pc: 88 op: EQUALS_IFW_I (121)
    if (_twf_48795 != -1)
    goto L6; // [88] 136
    // SubProg ShowWarnings pc: 92 op: STARTLINE (58)

    /** error.e:130				ShowMsg(errfile, 205, {TempWarningName})*/
    // SubProg ShowWarnings pc: 94 op: PRIVATE_INIT_CHECK (30)
    // SubProg ShowWarnings pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 98 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_34TempWarningName_15202);
    ((intptr_t*)_2)[1] = _34TempWarningName_15202;
    _25251 = MAKE_SEQ(_1);
    // SubProg ShowWarnings pc: 102 op: PROC (27)
    _40ShowMsg(_errfile_48794, 205, _25251, 1);
    _25251 = NOVALUE;
    // SubProg ShowWarnings pc: 108 op: STARTLINE (58)

    /** error.e:131				if errfile != STDERR then*/
    // SubProg ShowWarnings pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 112 op: NOTEQ_IFW (105)
    if (_errfile_48794 == 2)
    goto L7; // [112] 173
    // SubProg ShowWarnings pc: 116 op: STARTLINE (58)

    /** error.e:132					ShowMsg(STDERR, 205, {TempWarningName})*/
    // SubProg ShowWarnings pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 122 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_34TempWarningName_15202);
    ((intptr_t*)_2)[1] = _34TempWarningName_15202;
    _25253 = MAKE_SEQ(_1);
    // SubProg ShowWarnings pc: 126 op: PROC (27)
    _40ShowMsg(2, 205, _25253, 1);
    _25253 = NOVALUE;
    // SubProg ShowWarnings pc: 132 op: NOP1 (159)
    // SubProg ShowWarnings pc: 133 op: ELSE (23)
    goto L7; // [133] 173
    // SubProg ShowWarnings pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 136 op: STARTLINE (58)

    /** error.e:135				for i = 1 to length(warning_list) do*/
    // SubProg ShowWarnings pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48717)){
            _25254 = SEQ_PTR(_49warning_list_48717)->length;
    }
    else {
        _25254 = 1;
    }
    // SubProg ShowWarnings pc: 143 op: FOR_I (125)
    {
        object _i_48826;
        _i_48826 = 1;
L8: // addr: 150 pc: 143 sub: 48791 op: 125
        if (_i_48826 > _25254){
            goto L9; // [143] 168
        }
        // SubProg ShowWarnings pc: 150 op: STARTLINE (58)

        /** error.e:136					puts(twf, warning_list[i])*/
        // SubProg ShowWarnings pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 154 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_49warning_list_48717);
        _25255 = (object)*(((s1_ptr)_2)->base + _i_48826);
        // SubProg ShowWarnings pc: 158 op: PUTS (44)
        EPuts(_twf_48795, _25255); // DJP 
        _25255 = NOVALUE;
        // SubProg ShowWarnings pc: 161 op: STARTLINE (58)

        /** error.e:137				end for*/
        // SubProg ShowWarnings pc: 163 op: ENDFOR_INT_UP1 (54)
        _i_48826 = _i_48826 + 1;
        goto L8; // [163] 150
L9: // addr: 168 pc: 163 sub: 48791 op: 54
        ;
    }
    // SubProg ShowWarnings pc: 168 op: STARTLINE (58)

    /** error.e:138			    close(twf)*/
    // SubProg ShowWarnings pc: 170 op: CLOSE (86)
    EClose(_twf_48795);
    // SubProg ShowWarnings pc: 172 op: NOP1 (159)
L7: // addr: 173 pc: 172 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 173 op: STARTLINE (58)

    /** error.e:140			TempWarningName = 99 -- Flag that we have done this already.*/
    // SubProg ShowWarnings pc: 175 op: ASSIGN (18)
    DeRef(_34TempWarningName_15202);
    _34TempWarningName_15202 = 99;
    // SubProg ShowWarnings pc: 178 op: NOP1 (159)
L5: // addr: 179 pc: 178 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 179 op: STARTLINE (58)

    /** error.e:143		if batch_job = 0 or errfile != STDERR then*/
    // SubProg ShowWarnings pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 183 op: EQUALS (3)
    _25256 = (_34batch_job_15201 == 0);
    // SubProg ShowWarnings pc: 187 op: SC1_OR_IF (147)
    if (_25256 != 0) {
        goto LA; // [187] 204
    }
    // SubProg ShowWarnings pc: 191 op: PRIVATE_INIT_CHECK (30)
    // SubProg ShowWarnings pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 195 op: NOTEQ (4)
    _25258 = (_errfile_48794 != 2);
    // SubProg ShowWarnings pc: 199 op: NOP1 (159)
    // SubProg ShowWarnings pc: 200 op: IF (20)
    if (_25258 == 0)
    {
        DeRef(_25258);
        _25258 = NOVALUE;
        goto LB; // [200] 311
    }
    else{
        DeRef(_25258);
        _25258 = NOVALUE;
    }
    // SubProg ShowWarnings pc: 203 op: NOP1 (159)
LA: // addr: 204 pc: 203 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 204 op: STARTLINE (58)

    /** error.e:144			for i = 1 to length(warning_list) do*/
    // SubProg ShowWarnings pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 208 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48717)){
            _25259 = SEQ_PTR(_49warning_list_48717)->length;
    }
    else {
        _25259 = 1;
    }
    // SubProg ShowWarnings pc: 211 op: FOR_I (125)
    {
        object _i_48837;
        _i_48837 = 1;
LC: // addr: 218 pc: 211 sub: 48791 op: 125
        if (_i_48837 > _25259){
            goto LD; // [211] 310
        }
        // SubProg ShowWarnings pc: 218 op: STARTLINE (58)

        /** error.e:145				puts(errfile, warning_list[i])*/
        // SubProg ShowWarnings pc: 220 op: PRIVATE_INIT_CHECK (30)
        // SubProg ShowWarnings pc: 222 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 224 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_49warning_list_48717);
        _25260 = (object)*(((s1_ptr)_2)->base + _i_48837);
        // SubProg ShowWarnings pc: 228 op: PUTS (44)
        EPuts(_errfile_48794, _25260); // DJP 
        _25260 = NOVALUE;
        // SubProg ShowWarnings pc: 231 op: STARTLINE (58)

        /** error.e:146				if errfile = STDERR then*/
        // SubProg ShowWarnings pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 235 op: EQUALS_IFW (104)
        if (_errfile_48794 != 2)
        goto LE; // [235] 303
        // SubProg ShowWarnings pc: 239 op: STARTLINE (58)

        /** error.e:147					if remainder(i, 20) = 0 and batch_job = 0 and test_only = 0 then*/
        // SubProg ShowWarnings pc: 241 op: REMAINDER (71)
        _25262 = (_i_48837 % 20);
        // SubProg ShowWarnings pc: 245 op: EQUALS (3)
        _25263 = (_25262 == 0);
        _25262 = NOVALUE;
        // SubProg ShowWarnings pc: 249 op: SC1_AND (141)
        if (_25263 == 0) {
            _25264 = 0;
            goto LF; // [249] 263
        }
        // SubProg ShowWarnings pc: 253 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 255 op: EQUALS (3)
        _25265 = (_34batch_job_15201 == 0);
        // SubProg ShowWarnings pc: 259 op: SC2_AND (142)
        _25264 = (_25265 != 0);
        // SubProg ShowWarnings pc: 262 op: NOP1 (159)
LF: // addr: 263 pc: 262 sub: 48791 op: 159
        // SubProg ShowWarnings pc: 263 op: SC1_AND_IF (146)
        if (_25264 == 0) {
            goto L10; // [263] 302
        }
        // SubProg ShowWarnings pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 269 op: EQUALS (3)
        _25267 = (_34test_only_15200 == 0);
        // SubProg ShowWarnings pc: 273 op: NOP1 (159)
        // SubProg ShowWarnings pc: 274 op: IF (20)
        if (_25267 == 0)
        {
            DeRef(_25267);
            _25267 = NOVALUE;
            goto L10; // [274] 302
        }
        else{
            DeRef(_25267);
            _25267 = NOVALUE;
        }
        // SubProg ShowWarnings pc: 277 op: STARTLINE (58)

        /** error.e:148						ShowMsg(errfile, 206)*/
        // SubProg ShowWarnings pc: 279 op: PROC (27)
        RefDS(_21936);
        _40ShowMsg(_errfile_48794, 206, _21936, 1);
        // SubProg ShowWarnings pc: 285 op: STARTLINE (58)

        /** error.e:149						c = getc(0)*/
        // SubProg ShowWarnings pc: 287 op: GETC (33)
        if (0 != last_r_file_no) {
            last_r_file_ptr = which_file(0, EF_READ);
            last_r_file_no = 0;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _c_48793 = getc((FILE*)xstdin);
            }
            else{
                _c_48793 = getc(last_r_file_ptr);
            }
        }
        else{
            _c_48793 = getc(last_r_file_ptr);
        }
        // SubProg ShowWarnings pc: 290 op: STARTLINE (58)

        /** error.e:150						if c = 'q' then*/
        // SubProg ShowWarnings pc: 292 op: EQUALS_IFW_I (121)
        if (_c_48793 != 113)
        goto L11; // [292] 301
        // SubProg ShowWarnings pc: 296 op: STARTLINE (58)

        /** error.e:151							exit*/
        // SubProg ShowWarnings pc: 298 op: EXIT (61)
        goto LD; // [298] 310
        // SubProg ShowWarnings pc: 300 op: NOP1 (159)
L11: // addr: 301 pc: 300 sub: 48791 op: 159
        // SubProg ShowWarnings pc: 301 op: NOP1 (159)
L10: // addr: 302 pc: 301 sub: 48791 op: 159
        // SubProg ShowWarnings pc: 302 op: NOP1 (159)
LE: // addr: 303 pc: 302 sub: 48791 op: 159
        // SubProg ShowWarnings pc: 303 op: STARTLINE (58)

        /** error.e:155			end for*/
        // SubProg ShowWarnings pc: 305 op: ENDFOR_INT_UP1 (54)
        _i_48837 = _i_48837 + 1;
        goto LC; // [305] 218
LD: // addr: 310 pc: 305 sub: 48791 op: 54
        ;
    }
    // SubProg ShowWarnings pc: 310 op: NOP1 (159)
LB: // addr: 311 pc: 310 sub: 48791 op: 159
    // SubProg ShowWarnings pc: 311 op: STARTLINE (58)

    /** error.e:158		return length(warning_list)*/
    // SubProg ShowWarnings pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 315 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48717)){
            _25270 = SEQ_PTR(_49warning_list_48717)->length;
    }
    else {
        _25270 = 1;
    }
    // SubProg ShowWarnings pc: 318 op: RETURNF (28)

// Exiting block BLOCK: ShowWarnings

// block var c_48793

// block var errfile_48794

// block var twf_48795
    DeRef(_25256);
    _25256 = NOVALUE;
    DeRef(_25241);
    _25241 = NOVALUE;
    DeRef(_25265);
    _25265 = NOVALUE;
    DeRef(_25263);
    _25263 = NOVALUE;
    return _25270;
    // SubProg ShowWarnings pc: 322 op: BADRETURNF (43)
    ;
}


void _49ShowDefines(object _errfile_48859)
{
    object _c_48860 = NOVALUE;
    object _25284 = NOVALUE; // 48884 25284
    object _25283 = NOVALUE; // 48883 25283
// skipping _25282  name type: 0
    object _25281 = NOVALUE; // 48880 25281
    object _25280 = NOVALUE; // 48879 25280
    object _25277 = NOVALUE; // 48876 25277
    object _25276 = NOVALUE; // 48873 25276
    object _25275 = NOVALUE; // 48869 25275
    object _25274 = NOVALUE; // 48868 25274
    object _25273 = NOVALUE; // 48867 25273
// skipping _25271  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowDefines pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowDefines pc: 3 op: STARTLINE (58)

    /** error.e:164		if errfile=0 then*/
    // SubProg ShowDefines pc: 5 op: EQUALS_IFW_I (121)
    if (_errfile_48859 != 0)
    goto L1; // [5] 19
    // SubProg ShowDefines pc: 9 op: STARTLINE (58)

    /** error.e:165			errfile = STDERR*/
    // SubProg ShowDefines pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowDefines pc: 13 op: ASSIGN (18)
    _errfile_48859 = 2;
    // SubProg ShowDefines pc: 16 op: INTEGER_CHECK (96)
    // SubProg ShowDefines pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 48857 op: 159
    // SubProg ShowDefines pc: 19 op: STARTLINE (58)

    /** error.e:168		puts(errfile, format("\n--- [1] ---\n", {GetMsgText(207,0)}))*/
    // SubProg ShowDefines pc: 21 op: PROC (27)
    RefDS(_21936);
    _25273 = _40GetMsgText(207, 0, _21936);
    // SubProg ShowDefines pc: 27 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25273;
    _25274 = MAKE_SEQ(_1);
    _25273 = NOVALUE;
    // SubProg ShowDefines pc: 31 op: PROC (27)
    RefDS(_25272);
    _25275 = _15format(_25272, _25274);
    _25274 = NOVALUE;
    // SubProg ShowDefines pc: 36 op: PUTS (44)
    EPuts(_errfile_48859, _25275); // DJP 
    DeRef(_25275);
    _25275 = NOVALUE;
    // SubProg ShowDefines pc: 39 op: STARTLINE (58)

    /** error.e:170		for i = 1 to length(OpDefines) do*/
    // SubProg ShowDefines pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowDefines pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_34OpDefines_15261)){
            _25276 = SEQ_PTR(_34OpDefines_15261)->length;
    }
    else {
        _25276 = 1;
    }
    // SubProg ShowDefines pc: 46 op: FOR_I (125)
    {
        object _i_48871;
        _i_48871 = 1;
L2: // addr: 53 pc: 46 sub: 48857 op: 125
        if (_i_48871 > _25276){
            goto L3; // [46] 98
        }
        // SubProg ShowDefines pc: 53 op: STARTLINE (58)

        /** error.e:171			if find(OpDefines[i], {"_PLAT_START", "_PLAT_STOP"}) = 0 then*/
        // SubProg ShowDefines pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowDefines pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34OpDefines_15261);
        _25277 = (object)*(((s1_ptr)_2)->base + _i_48871);
        // SubProg ShowDefines pc: 61 op: RIGHT_BRACE_2 (85)
        RefDS(_25279);
        RefDS(_25278);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25278;
        ((intptr_t *)_2)[2] = _25279;
        _25280 = MAKE_SEQ(_1);
        // SubProg ShowDefines pc: 65 op: FIND_FROM (176)
        _25281 = find_from(_25277, _25280, 1);
        _25277 = NOVALUE;
        DeRefDS(_25280);
        _25280 = NOVALUE;
        // SubProg ShowDefines pc: 70 op: EQUALS_IFW_I (121)
        if (_25281 != 0)
        goto L4; // [70] 91
        // SubProg ShowDefines pc: 74 op: STARTLINE (58)

        /** error.e:172				printf(errfile, "%s\n", {OpDefines[i]})*/
        // SubProg ShowDefines pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowDefines pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34OpDefines_15261);
        _25283 = (object)*(((s1_ptr)_2)->base + _i_48871);
        // SubProg ShowDefines pc: 82 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25283);
        ((intptr_t*)_2)[1] = _25283;
        _25284 = MAKE_SEQ(_1);
        _25283 = NOVALUE;
        // SubProg ShowDefines pc: 86 op: PRINTF (38)
        EPrintf(_errfile_48859, _25165, _25284);
        DeRefDS(_25284);
        _25284 = NOVALUE;
        // SubProg ShowDefines pc: 90 op: NOP1 (159)
L4: // addr: 91 pc: 90 sub: 48857 op: 159
        // SubProg ShowDefines pc: 91 op: STARTLINE (58)

        /** error.e:174		end for*/
        // SubProg ShowDefines pc: 93 op: ENDFOR_INT_UP1 (54)
        _i_48871 = _i_48871 + 1;
        goto L2; // [93] 53
L3: // addr: 98 pc: 93 sub: 48857 op: 54
        ;
    }
    // SubProg ShowDefines pc: 98 op: STARTLINE (58)

    /** error.e:175		puts(errfile, "-------------------\n")*/
    // SubProg ShowDefines pc: 100 op: PUTS (44)
    EPuts(_errfile_48859, _25285); // DJP 
    // SubProg ShowDefines pc: 103 op: STARTLINE (58)

    /** error.e:177	end procedure*/
    // SubProg ShowDefines pc: 105 op: RETURNP (29)

// Exiting block BLOCK: ShowDefines

// block var errfile_48859
    return;
    // SubProg ShowDefines pc: 108 op: BADRETURNF (43)
    ;
}


void _49Cleanup(object _status_48888)
{
    object _w_48889 = NOVALUE;
    object _show_error_48890 = NOVALUE;
    object _25303 = NOVALUE; // 48926 25303
    object _25302 = NOVALUE; // 48925 25302
    object _25301 = NOVALUE; // 48922 25301
    object _25300 = NOVALUE; // 48920 25300
    object _25299 = NOVALUE; // 48919 25299
    object _25298 = NOVALUE; // 48916 25298
    object _25297 = NOVALUE; // 48915 25297
    object _25296 = NOVALUE; // 48914 25296
    object _25295 = NOVALUE; // 48912 25295
    object _25294 = NOVALUE; // 48911 25294
// skipping _25293  name type: 0
    object _25292 = NOVALUE; // 48905 25292
    object _25291 = NOVALUE; // 48903 25291
    object _25290 = NOVALUE; // 48902 25290
    object _25289 = NOVALUE; // 48899 25289
    object _25288 = NOVALUE; // 48898 25288
// skipping _25287  name type: 0
    object _25286 = NOVALUE; // 48893 25286
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Cleanup pc: 1 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 3 op: STARTLINE (58)

    /** error.e:182		integer w, show_error = 0*/
    // SubProg Cleanup pc: 5 op: ASSIGN_I (113)
    _show_error_48890 = 0;
    // SubProg Cleanup pc: 8 op: STARTLINE (58)

    /** error.e:184		ifdef EU_EX then*/
    // SubProg Cleanup pc: 10 op: STARTLINE (58)

    /** error.e:190		show_error = 1*/
    // SubProg Cleanup pc: 12 op: ASSIGN_I (113)
    _show_error_48890 = 1;
    // SubProg Cleanup pc: 15 op: STARTLINE (58)

    /** error.e:196		if object(src_file) = 0 then*/
    // SubProg Cleanup pc: 17 op: IS_AN_OBJECT (40)
    if( NOVALUE == _34src_file_15309 ){
        _25286 = 0;
    }
    else{
        _25286 = 1;
    }
    // SubProg Cleanup pc: 20 op: EQUALS_IFW_I (121)
    if (_25286 != 0)
    goto L1; // [20] 34
    // SubProg Cleanup pc: 24 op: STARTLINE (58)

    /** error.e:197			src_file = -1*/
    // SubProg Cleanup pc: 26 op: ASSIGN (18)
    _34src_file_15309 = -1;
    // SubProg Cleanup pc: 29 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 31 op: ELSE (23)
    goto L2; // [31] 86
    // SubProg Cleanup pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 48886 op: 159
    // SubProg Cleanup pc: 34 op: STARTLINE (58)

    /** error.e:198		elsif src_file >= 0 and (src_file != repl_file or not repl) then*/
    // SubProg Cleanup pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 38 op: GREATEREQ (2)
    _25288 = (_34src_file_15309 >= 0);
    // SubProg Cleanup pc: 42 op: SC1_AND_IF (146)
    if (_25288 == 0) {
        goto L3; // [42] 85
    }
    // SubProg Cleanup pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 50 op: NOTEQ (4)
    _25290 = (_34src_file_15309 != 5555);
    // SubProg Cleanup pc: 54 op: SC1_OR (143)
    if (_25290 != 0) {
        DeRef(_25291);
        _25291 = 1;
        goto L4; // [54] 67
    }
    // SubProg Cleanup pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 60 op: NOT (7)
    _25292 = (0 == 0);
    // SubProg Cleanup pc: 63 op: SC2_OR (144)
    _25291 = (_25292 != 0);
    // SubProg Cleanup pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 48886 op: 159
    // SubProg Cleanup pc: 67 op: NOP1 (159)
    // SubProg Cleanup pc: 68 op: IF (20)
    if (_25291 == 0)
    {
        _25291 = NOVALUE;
        goto L3; // [68] 85
    }
    else{
        _25291 = NOVALUE;
    }
    // SubProg Cleanup pc: 71 op: STARTLINE (58)

    /** error.e:199			close(src_file)*/
    // SubProg Cleanup pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 75 op: CLOSE (86)
    EClose(_34src_file_15309);
    // SubProg Cleanup pc: 77 op: STARTLINE (58)

    /** error.e:200			src_file = -1*/
    // SubProg Cleanup pc: 79 op: ASSIGN (18)
    _34src_file_15309 = -1;
    // SubProg Cleanup pc: 82 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 84 op: NOP1 (159)
L3: // addr: 85 pc: 84 sub: 48886 op: 159
    // SubProg Cleanup pc: 85 op: NOP1 (159)
L2: // addr: 86 pc: 85 sub: 48886 op: 159
    // SubProg Cleanup pc: 86 op: STARTLINE (58)

    /** error.e:203		w = ShowWarnings()*/
    // SubProg Cleanup pc: 88 op: PROC (27)
    _w_48889 = _49ShowWarnings();
    // SubProg Cleanup pc: 91 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_w_48889)) {
        _1 = (object)(DBL_PTR(_w_48889)->dbl);
        DeRefDS(_w_48889);
        _w_48889 = _1;
    }
    // SubProg Cleanup pc: 93 op: STARTLINE (58)

    /** error.e:204		if not TRANSLATE and (BIND or show_error) and (w or Errors) then*/
    // SubProg Cleanup pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 97 op: NOT (7)
    _25294 = (_34TRANSLATE_14813 == 0);
    // SubProg Cleanup pc: 100 op: SC1_AND (141)
    if (_25294 == 0) {
        _25295 = 0;
        goto L5; // [100] 118
    }
    // SubProg Cleanup pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 106 op: SC1_OR (143)
    if (_34BIND_14816 != 0) {
        _25296 = 1;
        goto L6; // [106] 114
    }
    // SubProg Cleanup pc: 110 op: SC2_OR (144)
    _25296 = (_show_error_48890 != 0);
    // SubProg Cleanup pc: 113 op: NOP1 (159)
L6: // addr: 114 pc: 113 sub: 48886 op: 159
    // SubProg Cleanup pc: 114 op: SC2_AND (142)
    _25295 = (_25296 != 0);
    // SubProg Cleanup pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 48886 op: 159
    // SubProg Cleanup pc: 118 op: SC1_AND_IF (146)
    if (_25295 == 0) {
        goto L7; // [118] 177
    }
    // SubProg Cleanup pc: 122 op: SC1_OR (143)
    if (_w_48889 != 0) {
        DeRef(_25298);
        _25298 = 1;
        goto L8; // [122] 132
    }
    // SubProg Cleanup pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 128 op: SC2_OR (144)
    _25298 = (_49Errors_48705 != 0);
    // SubProg Cleanup pc: 131 op: NOP1 (159)
L8: // addr: 132 pc: 131 sub: 48886 op: 159
    // SubProg Cleanup pc: 132 op: NOP1 (159)
    // SubProg Cleanup pc: 133 op: IF (20)
    if (_25298 == 0)
    {
        _25298 = NOVALUE;
        goto L7; // [133] 177
    }
    else{
        _25298 = NOVALUE;
    }
    // SubProg Cleanup pc: 136 op: STARTLINE (58)

    /** error.e:205			if not batch_job and not test_only then*/
    // SubProg Cleanup pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 140 op: NOT (7)
    _25299 = (_34batch_job_15201 == 0);
    // SubProg Cleanup pc: 143 op: SC1_AND_IF (146)
    if (_25299 == 0) {
        goto L9; // [143] 176
    }
    // SubProg Cleanup pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 149 op: NOT (7)
    _25301 = (_34test_only_15200 == 0);
    // SubProg Cleanup pc: 152 op: NOP1 (159)
    // SubProg Cleanup pc: 153 op: IF (20)
    if (_25301 == 0)
    {
        DeRef(_25301);
        _25301 = NOVALUE;
        goto L9; // [153] 176
    }
    else{
        DeRef(_25301);
        _25301 = NOVALUE;
    }
    // SubProg Cleanup pc: 156 op: STARTLINE (58)

    /** error.e:206				screen_output(STDERR, GetMsgText(208,0))*/
    // SubProg Cleanup pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 160 op: PROC (27)
    RefDS(_21936);
    _25302 = _40GetMsgText(208, 0, _21936);
    // SubProg Cleanup pc: 166 op: PROC (27)
    _49screen_output(2, _25302);
    _25302 = NOVALUE;
    // SubProg Cleanup pc: 170 op: STARTLINE (58)

    /** error.e:207				getc(0) -- wait*/
    // SubProg Cleanup pc: 172 op: GETC (33)
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25303 = getc((FILE*)xstdin);
        }
        else{
            _25303 = getc(last_r_file_ptr);
        }
    }
    else{
        _25303 = getc(last_r_file_ptr);
    }
    // SubProg Cleanup pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 48886 op: 159
    // SubProg Cleanup pc: 176 op: NOP1 (159)
L7: // addr: 177 pc: 176 sub: 48886 op: 159
    // SubProg Cleanup pc: 177 op: STARTLINE (58)

    /** error.e:212		cleanup_open_includes()*/
    // SubProg Cleanup pc: 179 op: PROC (27)
    _61cleanup_open_includes();
    // SubProg Cleanup pc: 181 op: STARTLINE (58)

    /** error.e:213		abort(status)*/
    // SubProg Cleanup pc: 183 op: ABORT (126)
    UserCleanup(_status_48888);
    // SubProg Cleanup pc: 185 op: STARTLINE (58)

    /** error.e:214	end procedure*/
    // SubProg Cleanup pc: 187 op: RETURNP (29)

// Exiting block BLOCK: Cleanup

// block var status_48888

// block var w_48889

// block var show_error_48890
    DeRef(_25288);
    _25288 = NOVALUE;
    DeRef(_25290);
    _25290 = NOVALUE;
    DeRef(_25294);
    _25294 = NOVALUE;
    DeRef(_25299);
    _25299 = NOVALUE;
    DeRef(_25292);
    _25292 = NOVALUE;
    return;
    // SubProg Cleanup pc: 190 op: BADRETURNF (43)
    ;
}


void _49OpenErrFile()
{
    object _25310 = NOVALUE; // 48941 25310
    object _25309 = NOVALUE; // 48940 25309
// skipping _25308  name type: 0
    object _25307 = NOVALUE; // 48936 25307
// skipping _25306  name type: 0
// skipping _25305  name type: 0
// skipping _25304  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg OpenErrFile pc: 1 op: STARTLINE (58)

    /** error.e:219	    if TempErrFile != -1 then*/
    // SubProg OpenErrFile pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 5 op: NOTEQ_IFW_I (122)
    if (_49TempErrFile_48706 == -1)
    goto L1; // [5] 19
    // SubProg OpenErrFile pc: 9 op: STARTLINE (58)

    /** error.e:220			TempErrFile = open(TempErrName, "w")*/
    // SubProg OpenErrFile pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 13 op: OPEN (37)
    _49TempErrFile_48706 = EOpen(_49TempErrName_48707, _22072, 0);
    // SubProg OpenErrFile pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 48928 op: 159
    // SubProg OpenErrFile pc: 19 op: STARTLINE (58)

    /** error.e:223		if TempErrFile = -1 then*/
    // SubProg OpenErrFile pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 23 op: EQUALS_IFW_I (121)
    if (_49TempErrFile_48706 != -1)
    goto L2; // [23] 64
    // SubProg OpenErrFile pc: 27 op: STARTLINE (58)

    /** error.e:224			if length(TempErrName) > 0 then*/
    // SubProg OpenErrFile pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_49TempErrName_48707)){
            _25307 = SEQ_PTR(_49TempErrName_48707)->length;
    }
    else {
        _25307 = 1;
    }
    // SubProg OpenErrFile pc: 34 op: GREATER_IFW_I (124)
    if (_25307 <= 0)
    goto L3; // [34] 59
    // SubProg OpenErrFile pc: 38 op: STARTLINE (58)

    /** error.e:225				screen_output(STDERR, GetMsgText(209, 0, {TempErrName}))*/
    // SubProg OpenErrFile pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 44 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_49TempErrName_48707);
    ((intptr_t*)_2)[1] = _49TempErrName_48707;
    _25309 = MAKE_SEQ(_1);
    // SubProg OpenErrFile pc: 48 op: PROC (27)
    _25310 = _40GetMsgText(209, 0, _25309);
    _25309 = NOVALUE;
    // SubProg OpenErrFile pc: 54 op: PROC (27)
    _49screen_output(2, _25310);
    _25310 = NOVALUE;
    // SubProg OpenErrFile pc: 58 op: NOP1 (159)
L3: // addr: 59 pc: 58 sub: 48928 op: 159
    // SubProg OpenErrFile pc: 59 op: STARTLINE (58)

    /** error.e:227			abort(1) -- with no clean up*/
    // SubProg OpenErrFile pc: 61 op: ABORT (126)
    UserCleanup(1);
    // SubProg OpenErrFile pc: 63 op: NOP1 (159)
L2: // addr: 64 pc: 63 sub: 48928 op: 159
    // SubProg OpenErrFile pc: 64 op: STARTLINE (58)

    /** error.e:229	end procedure*/
    // SubProg OpenErrFile pc: 66 op: RETURNP (29)

// Exiting block BLOCK: OpenErrFile
    return;
    // SubProg OpenErrFile pc: 69 op: BADRETURNF (43)
    ;
}


void _49ShowErr(object _f_48944)
{
    object _msg_inlined_screen_output_at_41_48956 = NOVALUE;
// skipping _25318  name type: 0
    object _25317 = NOVALUE; // 48963 25317
    object _25316 = NOVALUE; // 48961 25316
    object _25315 = NOVALUE; // 48954 25315
// skipping _25314  name type: 0
    object _25313 = NOVALUE; // 48950 25313
// skipping _25312  name type: 0
    object _25311 = NOVALUE; // 48947 25311
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowErr pc: 3 op: STARTLINE (58)

    /** error.e:234		if length(known_files) = 0 then*/
    // SubProg ShowErr pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _25311 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _25311 = 1;
    }
    // SubProg ShowErr pc: 10 op: EQUALS_IFW_I (121)
    if (_25311 != 0)
    goto L1; // [10] 20
    // SubProg ShowErr pc: 14 op: STARTLINE (58)

    /** error.e:235			return*/
    // SubProg ShowErr pc: 16 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: ShowErr

// block var f_48944
    return;
    // SubProg ShowErr pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 48942 op: 159
    // SubProg ShowErr pc: 20 op: STARTLINE (58)

    /** error.e:238		if ThisLine[1] = END_OF_FILE_CHAR then*/
    // SubProg ShowErr pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48709);
    _25313 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ShowErr pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 30 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25313, 26)){
        _25313 = NOVALUE;
        goto L2; // [30] 62
    }
    _25313 = NOVALUE;
    // SubProg ShowErr pc: 34 op: STARTLINE (58)

    /** error.e:239			screen_output(f, GetMsgText(210,0))*/
    // SubProg ShowErr pc: 36 op: PROC (27)
    RefDS(_21936);
    _25315 = _40GetMsgText(210, 0, _21936);
    // SubProg ShowErr pc: 42 op: ASSIGN (18)
    DeRef(_msg_inlined_screen_output_at_41_48956);
    _msg_inlined_screen_output_at_41_48956 = _25315;
    _25315 = NOVALUE;
    // SubProg ShowErr pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg ShowErr pc: 47 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 49 op: PUTS (44)
    EPuts(_f_48944, _msg_inlined_screen_output_at_41_48956); // DJP 
    // SubProg ShowErr pc: 52 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 54 op: ELSE (23)
    goto L3; // [54] 57
    // SubProg ShowErr pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 48942 op: 159
    // SubProg ShowErr pc: 57 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-screen_output from ShowErr @ 41

// block var msg_inlined_screen_output_at_41_48956
    DeRef(_msg_inlined_screen_output_at_41_48956);
    _msg_inlined_screen_output_at_41_48956 = NOVALUE;
    // SubProg ShowErr pc: 59 op: ELSE (23)
    goto L4; // [59] 79
    // SubProg ShowErr pc: 61 op: NOP1 (159)
L2: // addr: 62 pc: 61 sub: 48942 op: 159
    // SubProg ShowErr pc: 62 op: STARTLINE (58)

    /** error.e:241			screen_output(f, ThisLine)*/
    // SubProg ShowErr pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 66 op: SEQUENCE_CHECK (97)
    // SubProg ShowErr pc: 68 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 70 op: PUTS (44)
    EPuts(_f_48944, _49ThisLine_48709); // DJP 
    // SubProg ShowErr pc: 73 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 75 op: ELSE (23)
    goto L5; // [75] 78
    // SubProg ShowErr pc: 77 op: NOP1 (159)
L5: // addr: 78 pc: 77 sub: 48942 op: 159
    // SubProg ShowErr pc: 78 op: NOP1 (159)
L4: // addr: 79 pc: 78 sub: 48942 op: 159
    // SubProg ShowErr pc: 79 op: STARTLINE (58)

    /** error.e:244		for i = 1 to bp-2 do -- bp-1 points to last character read*/
    // SubProg ShowErr pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 83 op: MINUS (10)
    _25316 = _49bp_48713 - 2;
    if ((object)((uintptr_t)_25316 +(uintptr_t) HIGH_BITS) >= 0){
        _25316 = NewDouble((eudouble)_25316);
    }
    // SubProg ShowErr pc: 87 op: FOR (21)
    {
        object _i_48960;
        _i_48960 = 1;
L6: // addr: 94 pc: 87 sub: 48942 op: 21
        if (binary_op_a(GREATER, _i_48960, _25316)){
            goto L7; // [87] 141
        }
        // SubProg ShowErr pc: 94 op: STARTLINE (58)

        /** error.e:245			if ThisLine[i] = '\t' then*/
        // SubProg ShowErr pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowErr pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_49ThisLine_48709);
        if (!IS_ATOM_INT(_i_48960)){
            _25317 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_48960)->dbl));
        }
        else{
            _25317 = (object)*(((s1_ptr)_2)->base + _i_48960);
        }
        // SubProg ShowErr pc: 102 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25317, 9)){
            _25317 = NOVALUE;
            goto L8; // [102] 121
        }
        _25317 = NOVALUE;
        // SubProg ShowErr pc: 106 op: STARTLINE (58)

        /** error.e:246				screen_output(f, "\t")*/
        // SubProg ShowErr pc: 108 op: STARTLINE (58)

        /** error.e:44		puts(f, msg)*/
        // SubProg ShowErr pc: 110 op: PUTS (44)
        EPuts(_f_48944, _23877); // DJP 
        // SubProg ShowErr pc: 113 op: STARTLINE (58)

        /** error.e:45	end procedure*/
        // SubProg ShowErr pc: 115 op: ELSE (23)
        goto L9; // [115] 134
        // SubProg ShowErr pc: 117 op: NOP1 (159)
        // SubProg ShowErr pc: 118 op: ELSE (23)
        goto L9; // [118] 134
        // SubProg ShowErr pc: 120 op: NOP1 (159)
L8: // addr: 121 pc: 120 sub: 48942 op: 159
        // SubProg ShowErr pc: 121 op: STARTLINE (58)

        /** error.e:248				screen_output(f, " ")*/
        // SubProg ShowErr pc: 123 op: STARTLINE (58)

        /** error.e:44		puts(f, msg)*/
        // SubProg ShowErr pc: 125 op: PUTS (44)
        EPuts(_f_48944, _23328); // DJP 
        // SubProg ShowErr pc: 128 op: STARTLINE (58)

        /** error.e:45	end procedure*/
        // SubProg ShowErr pc: 130 op: ELSE (23)
        goto LA; // [130] 133
        // SubProg ShowErr pc: 132 op: NOP1 (159)
LA: // addr: 133 pc: 132 sub: 48942 op: 159
        // SubProg ShowErr pc: 133 op: NOP1 (159)
L9: // addr: 134 pc: 133 sub: 48942 op: 159
        // SubProg ShowErr pc: 134 op: STARTLINE (58)

        /** error.e:250		end for*/
        // SubProg ShowErr pc: 136 op: ENDFOR_INT_UP1 (54)
        _0 = _i_48960;
        if (IS_ATOM_INT(_i_48960)) {
            _i_48960 = _i_48960 + 1;
            if ((object)((uintptr_t)_i_48960 +(uintptr_t) HIGH_BITS) >= 0){
                _i_48960 = NewDouble((eudouble)_i_48960);
            }
        }
        else {
            _i_48960 = binary_op_a(PLUS, _i_48960, 1);
        }
        DeRef(_0);
        goto L6; // [136] 94
L7: // addr: 141 pc: 136 sub: 48942 op: 54
        ;
        DeRef(_i_48960);
    }
    // SubProg ShowErr pc: 141 op: STARTLINE (58)

    /** error.e:252		screen_output(f, "^\n\n")*/
    // SubProg ShowErr pc: 143 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 145 op: PUTS (44)
    EPuts(_f_48944, _25319); // DJP 
    // SubProg ShowErr pc: 148 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 150 op: ELSE (23)
    goto LB; // [150] 153
    // SubProg ShowErr pc: 152 op: NOP1 (159)
LB: // addr: 153 pc: 152 sub: 48942 op: 159
    // SubProg ShowErr pc: 153 op: STARTLINE (58)

    /** error.e:253	end procedure*/
    // SubProg ShowErr pc: 155 op: RETURNP (29)

// Exiting block BLOCK: ShowErr

// block var f_48944
    DeRef(_25316);
    _25316 = NOVALUE;
    return;
    // SubProg ShowErr pc: 158 op: BADRETURNF (43)
    ;
}


void _49CompileErr(object _msg_48972, object _args_48973, object _preproc_48974)
{
    object _errmsg_48975 = NOVALUE;
    object _25340 = NOVALUE; // 49010 25340
// skipping _25339  name type: 0
// skipping _25338  name type: 0
// skipping _25337  name type: 0
    object _25336 = NOVALUE; // 49002 25336
    object _25335 = NOVALUE; // 49001 25335
    object _25334 = NOVALUE; // 49000 25334
    object _25333 = NOVALUE; // 48999 25333
    object _25332 = NOVALUE; // 48998 25332
    object _25331 = NOVALUE; // 48997 25331
// skipping _25330  name type: 0
    object _25329 = NOVALUE; // 48993 25329
    object _25328 = NOVALUE; // 48991 25328
    object _25326 = NOVALUE; // 48987 25326
    object _25325 = NOVALUE; // 48985 25325
    object _25324 = NOVALUE; // 48984 25324
// skipping _25323  name type: 0
// skipping _25322  name type: 0
// skipping _25321  name type: 0
    object _25320 = NOVALUE; // 48977 25320
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg CompileErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg CompileErr pc: 3 op: STARTLINE (58)

    /** error.e:260		if integer(msg) then*/
    // SubProg CompileErr pc: 5 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_msg_48972))
    _25320 = 1;
    else if (IS_ATOM_DBL(_msg_48972))
    _25320 = IS_ATOM_INT(DoubleToInt(_msg_48972));
    else
    _25320 = 0;
    // SubProg CompileErr pc: 8 op: IF (20)
    if (_25320 == 0)
    {
        _25320 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25320 = NOVALUE;
    }
    // SubProg CompileErr pc: 11 op: STARTLINE (58)

    /** error.e:261			msg = GetMsgText(msg)*/
    // SubProg CompileErr pc: 13 op: PROC (27)
    Ref(_msg_48972);
    RefDS(_21936);
    _0 = _msg_48972;
    _msg_48972 = _40GetMsgText(_msg_48972, 1, _21936);
    DeRefi(_0);
    // SubProg CompileErr pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 48970 op: 159
    // SubProg CompileErr pc: 20 op: STARTLINE (58)

    /** error.e:264		msg = format(msg, args)*/
    // SubProg CompileErr pc: 22 op: PROC (27)
    Ref(_msg_48972);
    Ref(_args_48973);
    _0 = _msg_48972;
    _msg_48972 = _15format(_msg_48972, _args_48973);
    DeRef(_0);
    // SubProg CompileErr pc: 27 op: STARTLINE (58)

    /** error.e:266		Errors += 1*/
    // SubProg CompileErr pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 31 op: PLUS1_I (117)
    _49Errors_48705 = _49Errors_48705 + 1;
    // SubProg CompileErr pc: 35 op: STARTLINE (58)

    /** error.e:267		if not preproc and length(known_files) then*/
    // SubProg CompileErr pc: 37 op: NOT (7)
    _25324 = (_preproc_48974 == 0);
    // SubProg CompileErr pc: 40 op: SC1_AND_IF (146)
    if (_25324 == 0) {
        goto L2; // [40] 78
    }
    // SubProg CompileErr pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 46 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _25326 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _25326 = 1;
    }
    // SubProg CompileErr pc: 49 op: NOP1 (159)
    // SubProg CompileErr pc: 50 op: IF (20)
    if (_25326 == 0)
    {
        _25326 = NOVALUE;
        goto L2; // [50] 78
    }
    else{
        _25326 = NOVALUE;
    }
    // SubProg CompileErr pc: 53 op: STARTLINE (58)

    /** error.e:268			errmsg = sprintf("%s:%d\n%s\n", {known_files[current_file_no],*/
    // SubProg CompileErr pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 59 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _25328 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg CompileErr pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 65 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25328);
    ((intptr_t*)_2)[1] = _25328;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    Ref(_msg_48972);
    ((intptr_t*)_2)[3] = _msg_48972;
    _25329 = MAKE_SEQ(_1);
    _25328 = NOVALUE;
    // SubProg CompileErr pc: 71 op: SPRINTF (53)
    DeRef(_errmsg_48975);
    _errmsg_48975 = EPrintf(-9999999, _25327, _25329);
    DeRefDS(_25329);
    _25329 = NOVALUE;
    // SubProg CompileErr pc: 75 op: ELSE (23)
    goto L3; // [75] 121
    // SubProg CompileErr pc: 77 op: NOP1 (159)
L2: // addr: 78 pc: 77 sub: 48970 op: 159
    // SubProg CompileErr pc: 78 op: STARTLINE (58)

    /** error.e:271			errmsg = msg*/
    // SubProg CompileErr pc: 80 op: ASSIGN (18)
    Ref(_msg_48972);
    DeRef(_errmsg_48975);
    _errmsg_48975 = _msg_48972;
    // SubProg CompileErr pc: 83 op: SEQUENCE_CHECK (97)
    // SubProg CompileErr pc: 85 op: STARTLINE (58)

    /** error.e:272			if length(msg) > 0 and msg[$] != '\n' then*/
    // SubProg CompileErr pc: 87 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_48972)){
            _25331 = SEQ_PTR(_msg_48972)->length;
    }
    else {
        _25331 = 1;
    }
    // SubProg CompileErr pc: 90 op: GREATER (6)
    _25332 = (_25331 > 0);
    _25331 = NOVALUE;
    // SubProg CompileErr pc: 94 op: SC1_AND_IF (146)
    if (_25332 == 0) {
        goto L4; // [94] 120
    }
    // SubProg CompileErr pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_48972)){
            _25334 = SEQ_PTR(_msg_48972)->length;
    }
    else {
        _25334 = 1;
    }
    // SubProg CompileErr pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_msg_48972);
    _25335 = (object)*(((s1_ptr)_2)->base + _25334);
    // SubProg CompileErr pc: 105 op: NOTEQ (4)
    if (IS_ATOM_INT(_25335)) {
        _25336 = (_25335 != 10);
    }
    else {
        _25336 = binary_op(NOTEQ, _25335, 10);
    }
    _25335 = NOVALUE;
    // SubProg CompileErr pc: 109 op: NOP1 (159)
    // SubProg CompileErr pc: 110 op: IF (20)
    if (_25336 == 0) {
        DeRef(_25336);
        _25336 = NOVALUE;
        goto L4; // [110] 120
    }
    else {
        if (!IS_ATOM_INT(_25336) && DBL_PTR(_25336)->dbl == 0.0){
            DeRef(_25336);
            _25336 = NOVALUE;
            goto L4; // [110] 120
        }
        DeRef(_25336);
        _25336 = NOVALUE;
    }
    DeRef(_25336);
    _25336 = NOVALUE;
    // SubProg CompileErr pc: 113 op: STARTLINE (58)

    /** error.e:273				errmsg &= '\n'*/
    // SubProg CompileErr pc: 115 op: CONCAT (15)
    Append(&_errmsg_48975, _errmsg_48975, 10);
    // SubProg CompileErr pc: 119 op: NOP1 (159)
L4: // addr: 120 pc: 119 sub: 48970 op: 159
    // SubProg CompileErr pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 48970 op: 159
    // SubProg CompileErr pc: 121 op: STARTLINE (58)

    /** error.e:277		if not preproc then*/
    // SubProg CompileErr pc: 123 op: NOT_IFW (108)
    if (_preproc_48974 != 0)
    goto L5; // [123] 131
    // SubProg CompileErr pc: 126 op: STARTLINE (58)

    /** error.e:279			OpenErrFile() -- exits if error filename is ""*/
    // SubProg CompileErr pc: 128 op: PROC (27)
    _49OpenErrFile();
    // SubProg CompileErr pc: 130 op: NOP1 (159)
L5: // addr: 131 pc: 130 sub: 48970 op: 159
    // SubProg CompileErr pc: 131 op: STARTLINE (58)

    /** error.e:281		screen_output(STDERR, errmsg)*/
    // SubProg CompileErr pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 135 op: PRIVATE_INIT_CHECK (30)
    // SubProg CompileErr pc: 137 op: PROC (27)
    RefDS(_errmsg_48975);
    _49screen_output(2, _errmsg_48975);
    // SubProg CompileErr pc: 141 op: STARTLINE (58)

    /** error.e:283		if not preproc then*/
    // SubProg CompileErr pc: 143 op: NOT_IFW (108)
    if (_preproc_48974 != 0)
    goto L6; // [143] 198
    // SubProg CompileErr pc: 146 op: STARTLINE (58)

    /** error.e:284			ShowErr(STDERR)*/
    // SubProg CompileErr pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 150 op: PROC (27)
    _49ShowErr(2);
    // SubProg CompileErr pc: 153 op: STARTLINE (58)

    /** error.e:286			puts(TempErrFile, errmsg)*/
    // SubProg CompileErr pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 157 op: PUTS (44)
    EPuts(_49TempErrFile_48706, _errmsg_48975); // DJP 
    // SubProg CompileErr pc: 160 op: STARTLINE (58)

    /** error.e:288			ShowErr(TempErrFile)*/
    // SubProg CompileErr pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 164 op: PROC (27)
    _49ShowErr(_49TempErrFile_48706);
    // SubProg CompileErr pc: 167 op: STARTLINE (58)

    /** error.e:290			ShowWarnings()*/
    // SubProg CompileErr pc: 169 op: PROC (27)
    _25340 = _49ShowWarnings();
    // SubProg CompileErr pc: 172 op: STARTLINE (58)

    /** error.e:292			ShowDefines(TempErrFile)*/
    // SubProg CompileErr pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 176 op: PROC (27)
    _49ShowDefines(_49TempErrFile_48706);
    // SubProg CompileErr pc: 179 op: STARTLINE (58)

    /** error.e:294			close(TempErrFile)*/
    // SubProg CompileErr pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 183 op: CLOSE (86)
    EClose(_49TempErrFile_48706);
    // SubProg CompileErr pc: 185 op: STARTLINE (58)

    /** error.e:295			TempErrFile = -2*/
    // SubProg CompileErr pc: 187 op: ASSIGN_I (113)
    _49TempErrFile_48706 = -2;
    // SubProg CompileErr pc: 190 op: STARTLINE (58)

    /** error.e:296			ifdef CRASH_ON_ERROR then*/
    // SubProg CompileErr pc: 192 op: STARTLINE (58)

    /** error.e:299			Cleanup(1)*/
    // SubProg CompileErr pc: 194 op: PROC (27)
    _49Cleanup(1);
    // SubProg CompileErr pc: 197 op: NOP1 (159)
L6: // addr: 198 pc: 197 sub: 48970 op: 159
    // SubProg CompileErr pc: 198 op: STARTLINE (58)

    /** error.e:302	end procedure*/
    // SubProg CompileErr pc: 200 op: RETURNP (29)

// Exiting block BLOCK: CompileErr

// block var msg_48972
    DeRef(_msg_48972);

// block var args_48973
    DeRef(_args_48973);

// block var preproc_48974

// block var errmsg_48975
    DeRef(_errmsg_48975);
    DeRef(_25332);
    _25332 = NOVALUE;
    DeRef(_25324);
    _25324 = NOVALUE;
    DeRef(_25340);
    _25340 = NOVALUE;
    return;
    // SubProg CompileErr pc: 203 op: BADRETURNF (43)
    ;
}


void _49InternalErr(object _msgno_49018, object _args_49019)
{
    object _msg_49020 = NOVALUE;
    object _25355 = NOVALUE; // 49052 25355
    object _25354 = NOVALUE; // 49050 25354
    object _25353 = NOVALUE; // 49049 25353
    object _25352 = NOVALUE; // 49046 25352
    object _25351 = NOVALUE; // 49044 25351
    object _25350 = NOVALUE; // 49043 25350
    object _25349 = NOVALUE; // 49040 25349
    object _25348 = NOVALUE; // 49039 25348
    object _25347 = NOVALUE; // 49037 25347
    object _25346 = NOVALUE; // 49031 25346
    object _25345 = NOVALUE; // 49030 25345
// skipping _25344  name type: 0
// skipping _25343  name type: 0
    object _25342 = NOVALUE; // 49022 25342
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InternalErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg InternalErr pc: 3 op: STARTLINE (58)

    /** error.e:316		if atom(args) then*/
    // SubProg InternalErr pc: 5 op: IS_AN_ATOM (67)
    _25342 = 0;
    // SubProg InternalErr pc: 8 op: IF (20)
    if (_25342 == 0)
    {
        _25342 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _25342 = NOVALUE;
    }
    // SubProg InternalErr pc: 11 op: STARTLINE (58)

    /** error.e:317			args = {args}*/
    // SubProg InternalErr pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _args_49019;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_args_49019);
    ((intptr_t*)_2)[1] = _args_49019;
    _args_49019 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg InternalErr pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 49016 op: 159
    // SubProg InternalErr pc: 18 op: STARTLINE (58)

    /** error.e:320		msg = GetMsgText(msgno, 1, args)*/
    // SubProg InternalErr pc: 20 op: PROC (27)
    Ref(_args_49019);
    _0 = _msg_49020;
    _msg_49020 = _40GetMsgText(_msgno_49018, 1, _args_49019);
    DeRef(_0);
    // SubProg InternalErr pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg InternalErr pc: 28 op: STARTLINE (58)

    /** error.e:321		if TRANSLATE then*/
    // SubProg InternalErr pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 32 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
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
    RefDS(_msg_49020);
    ((intptr_t*)_2)[1] = _msg_49020;
    _25345 = MAKE_SEQ(_1);
    // SubProg InternalErr pc: 43 op: PROC (27)
    _25346 = _40GetMsgText(211, 1, _25345);
    _25345 = NOVALUE;
    // SubProg InternalErr pc: 49 op: PROC (27)
    _49screen_output(2, _25346);
    _25346 = NOVALUE;
    // SubProg InternalErr pc: 53 op: ELSE (23)
    goto L3; // [53] 87
    // SubProg InternalErr pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 49016 op: 159
    // SubProg InternalErr pc: 56 op: STARTLINE (58)

    /** error.e:324			screen_output(STDERR, GetMsgText(212, 1, {known_files[current_file_no], line_number, msg}))*/
    // SubProg InternalErr pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _25347 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg InternalErr pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 70 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25347);
    ((intptr_t*)_2)[1] = _25347;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    RefDS(_msg_49020);
    ((intptr_t*)_2)[3] = _msg_49020;
    _25348 = MAKE_SEQ(_1);
    _25347 = NOVALUE;
    // SubProg InternalErr pc: 76 op: PROC (27)
    _25349 = _40GetMsgText(212, 1, _25348);
    _25348 = NOVALUE;
    // SubProg InternalErr pc: 82 op: PROC (27)
    _49screen_output(2, _25349);
    _25349 = NOVALUE;
    // SubProg InternalErr pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 49016 op: 159
    // SubProg InternalErr pc: 87 op: STARTLINE (58)

    /** error.e:327		if not batch_job and not test_only then*/
    // SubProg InternalErr pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 91 op: NOT (7)
    _25350 = (_34batch_job_15201 == 0);
    // SubProg InternalErr pc: 94 op: SC1_AND_IF (146)
    if (_25350 == 0) {
        goto L4; // [94] 127
    }
    // SubProg InternalErr pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 100 op: NOT (7)
    _25352 = (_34test_only_15200 == 0);
    // SubProg InternalErr pc: 103 op: NOP1 (159)
    // SubProg InternalErr pc: 104 op: IF (20)
    if (_25352 == 0)
    {
        DeRef(_25352);
        _25352 = NOVALUE;
        goto L4; // [104] 127
    }
    else{
        DeRef(_25352);
        _25352 = NOVALUE;
    }
    // SubProg InternalErr pc: 107 op: STARTLINE (58)

    /** error.e:328			screen_output(STDERR, GetMsgText(208, 0))*/
    // SubProg InternalErr pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 111 op: PROC (27)
    RefDS(_21936);
    _25353 = _40GetMsgText(208, 0, _21936);
    // SubProg InternalErr pc: 117 op: PROC (27)
    _49screen_output(2, _25353);
    _25353 = NOVALUE;
    // SubProg InternalErr pc: 121 op: STARTLINE (58)

    /** error.e:329			getc(0)*/
    // SubProg InternalErr pc: 123 op: GETC (33)
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25354 = getc((FILE*)xstdin);
        }
        else{
            _25354 = getc(last_r_file_ptr);
        }
    }
    else{
        _25354 = getc(last_r_file_ptr);
    }
    // SubProg InternalErr pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 49016 op: 159
    // SubProg InternalErr pc: 127 op: STARTLINE (58)

    /** error.e:333		machine_proc(67, GetMsgText(213))*/
    // SubProg InternalErr pc: 129 op: PROC (27)
    RefDS(_21936);
    _25355 = _40GetMsgText(213, 1, _21936);
    // SubProg InternalErr pc: 135 op: MACHINE_PROC (112)
    machine(67, _25355);
    DeRef(_25355);
    _25355 = NOVALUE;
    // SubProg InternalErr pc: 138 op: STARTLINE (58)

    /** error.e:334	end procedure*/
    // SubProg InternalErr pc: 140 op: RETURNP (29)

// Exiting block BLOCK: InternalErr

// block var msgno_49018

// block var args_49019
    DeRef(_args_49019);

// block var msg_49020
    DeRef(_msg_49020);
    DeRef(_25350);
    _25350 = NOVALUE;
    return;
    // SubProg InternalErr pc: 143 op: BADRETURNF (43)
    ;
}



// 0xA1CF72C2
