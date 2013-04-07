// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _49screen_output(object _f_48792, object _msg_48793)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg screen_output pc: 1 op: INTEGER_CHECK (96)
    // SubProg screen_output pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg screen_output pc: 5 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg screen_output pc: 7 op: PUTS (44)
    EPuts(2, _msg_48793); // DJP 
    // SubProg screen_output pc: 10 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg screen_output pc: 12 op: RETURNP (29)

// Exiting block BLOCK: screen_output

// block var f_48792

// block var msg_48793
    DeRefDS(_msg_48793);
    return;
    // SubProg screen_output pc: 15 op: BADRETURNF (43)
    ;
}


void _49Warning(object _msg_48796, object _mask_48797, object _args_48798)
{
    object _orig_mask_48799 = NOVALUE;
    object _text_48800 = NOVALUE;
    object _w_name_48801 = NOVALUE;
// skipping _25298  name type: 0
    object _25297 = NOVALUE; // 48842 25297
// skipping _25296  name type: 0
    object _25295 = NOVALUE; // 48839 25295
// skipping _25294  name type: 0
    object _25293 = NOVALUE; // 48835 25293
// skipping _25292  name type: 0
    object _25290 = NOVALUE; // 48830 25290
// skipping _25288  name type: 0
// skipping _25287  name type: 0
// skipping _25286  name type: 0
    object _25285 = NOVALUE; // 48821 25285
// skipping _25284  name type: 0
    object _25283 = NOVALUE; // 48818 25283
    object _25282 = NOVALUE; // 48816 25282
    object _25281 = NOVALUE; // 48814 25281
    object _25280 = NOVALUE; // 48811 25280
// skipping _25279  name type: 0
    object _25278 = NOVALUE; // 48806 25278
// skipping _25277  name type: 0
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
    _25278 = (_5Strict_is_on_12543 == 0);
    // SubProg Warning pc: 26 op: SC1_OR_IF (147)
    if (_25278 != 0) {
        goto L1; // [26] 37
    }
    // SubProg Warning pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 32 op: NOP1 (159)
    // SubProg Warning pc: 33 op: IF (20)
    if (_5Strict_Override_12544 == 0)
    {
        goto L2; // [33] 56
    }
    else{
    }
    // SubProg Warning pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 48794 op: 159
    // SubProg Warning pc: 37 op: STARTLINE (58)

    /** error.e:59			if find(mask, strict_only_warnings) then*/
    // SubProg Warning pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 41 op: FIND_FROM (176)
    _25280 = find_from(_mask_48797, _5strict_only_warnings_12541, 1);
    // SubProg Warning pc: 46 op: IF (20)
    if (_25280 == 0)
    {
        _25280 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        _25280 = NOVALUE;
    }
    // SubProg Warning pc: 49 op: STARTLINE (58)

    /** error.e:60				return*/
    // SubProg Warning pc: 51 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48796
    DeRef(_msg_48796);

// block var mask_48797

// block var args_48798
    DeRefDS(_args_48798);

// block var orig_mask_48799

// block var text_48800
    DeRef(_text_48800);

// block var w_name_48801
    DeRef(_w_name_48801);
    DeRef(_25278);
    _25278 = NOVALUE;
    return;
    // SubProg Warning pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 48794 op: 159
    // SubProg Warning pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 48794 op: 159
    // SubProg Warning pc: 56 op: STARTLINE (58)

    /** error.e:64		orig_mask = mask -- =0 for non maskable warnings - none implemented so far*/
    // SubProg Warning pc: 58 op: ASSIGN_I (113)
    _orig_mask_48799 = _mask_48797;
    // SubProg Warning pc: 61 op: STARTLINE (58)

    /** error.e:65		if Strict_is_on and Strict_Override = 0 then*/
    // SubProg Warning pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 65 op: SC1_AND_IF (146)
    if (_5Strict_is_on_12543 == 0) {
        goto L4; // [65] 85
    }
    // SubProg Warning pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 71 op: EQUALS (3)
    _25282 = (_5Strict_Override_12544 == 0);
    // SubProg Warning pc: 75 op: NOP1 (159)
    // SubProg Warning pc: 76 op: IF (20)
    if (_25282 == 0)
    {
        DeRef(_25282);
        _25282 = NOVALUE;
        goto L4; // [76] 85
    }
    else{
        DeRef(_25282);
        _25282 = NOVALUE;
    }
    // SubProg Warning pc: 79 op: STARTLINE (58)

    /** error.e:66			mask = 0*/
    // SubProg Warning pc: 81 op: ASSIGN_I (113)
    _mask_48797 = 0;
    // SubProg Warning pc: 84 op: NOP1 (159)
L4: // addr: 85 pc: 84 sub: 48794 op: 159
    // SubProg Warning pc: 85 op: STARTLINE (58)

    /** error.e:69		if mask = 0 or and_bits(OpWarning, mask) then*/
    // SubProg Warning pc: 87 op: EQUALS (3)
    _25283 = (_mask_48797 == 0);
    // SubProg Warning pc: 91 op: SC1_OR_IF (147)
    if (_25283 != 0) {
        goto L5; // [91] 106
    }
    // SubProg Warning pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 97 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_5OpWarning_12545 & (uintptr_t)_mask_48797;
         _25285 = MAKE_UINT(tu);
    }
    // SubProg Warning pc: 101 op: NOP1 (159)
    // SubProg Warning pc: 102 op: IF (20)
    if (_25285 == 0) {
        DeRef(_25285);
        _25285 = NOVALUE;
        goto L6; // [102] 213
    }
    else {
        if (!IS_ATOM_INT(_25285) && DBL_PTR(_25285)->dbl == 0.0){
            DeRef(_25285);
            _25285 = NOVALUE;
            goto L6; // [102] 213
        }
        DeRef(_25285);
        _25285 = NOVALUE;
    }
    DeRef(_25285);
    _25285 = NOVALUE;
    // SubProg Warning pc: 105 op: NOP1 (159)
L5: // addr: 106 pc: 105 sub: 48794 op: 159
    // SubProg Warning pc: 106 op: STARTLINE (58)

    /** error.e:70			if orig_mask != 0 then*/
    // SubProg Warning pc: 108 op: NOTEQ_IFW_I (122)
    if (_orig_mask_48799 == 0)
    goto L7; // [108] 122
    // SubProg Warning pc: 112 op: STARTLINE (58)

    /** error.e:71				orig_mask = find(orig_mask,warning_flags)*/
    // SubProg Warning pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 116 op: FIND_FROM (176)
    _orig_mask_48799 = find_from(_orig_mask_48799, _5warning_flags_12520, 1);
    // SubProg Warning pc: 121 op: NOP1 (159)
L7: // addr: 122 pc: 121 sub: 48794 op: 159
    // SubProg Warning pc: 122 op: STARTLINE (58)

    /** error.e:74			if orig_mask != 0 then*/
    // SubProg Warning pc: 124 op: NOTEQ_IFW_I (122)
    if (_orig_mask_48799 == 0)
    goto L8; // [124] 145
    // SubProg Warning pc: 128 op: STARTLINE (58)

    /** error.e:75				w_name = "{ " & warning_names[orig_mask] & " }"*/
    // SubProg Warning pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5warning_names_12522);
    _25290 = (object)*(((s1_ptr)_2)->base + _orig_mask_48799);
    // SubProg Warning pc: 136 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _25291;
        concat_list[1] = _25290;
        concat_list[2] = _25289;
        Concat_N((object_ptr)&_w_name_48801, concat_list, 3);
    }
    _25290 = NOVALUE;
    // SubProg Warning pc: 142 op: ELSE (23)
    goto L9; // [142] 153
    // SubProg Warning pc: 144 op: NOP1 (159)
L8: // addr: 145 pc: 144 sub: 48794 op: 159
    // SubProg Warning pc: 145 op: STARTLINE (58)

    /** error.e:77				w_name = "" -- not maskable*/
    // SubProg Warning pc: 147 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_w_name_48801);
    _w_name_48801 = _21958;
    // SubProg Warning pc: 150 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 152 op: NOP1 (159)
L9: // addr: 153 pc: 152 sub: 48794 op: 159
    // SubProg Warning pc: 153 op: STARTLINE (58)

    /** error.e:80			if atom(msg) then*/
    // SubProg Warning pc: 155 op: IS_AN_ATOM (67)
    _25293 = IS_ATOM(_msg_48796);
    // SubProg Warning pc: 158 op: IF (20)
    if (_25293 == 0)
    {
        _25293 = NOVALUE;
        goto LA; // [158] 170
    }
    else{
        _25293 = NOVALUE;
    }
    // SubProg Warning pc: 161 op: STARTLINE (58)

    /** error.e:81				msg = GetMsgText(msg, 1, args)*/
    // SubProg Warning pc: 163 op: PROC (27)
    Ref(_msg_48796);
    RefDS(_args_48798);
    _0 = _msg_48796;
    _msg_48796 = _40GetMsgText(_msg_48796, 1, _args_48798);
    DeRef(_0);
    // SubProg Warning pc: 169 op: NOP1 (159)
LA: // addr: 170 pc: 169 sub: 48794 op: 159
    // SubProg Warning pc: 170 op: STARTLINE (58)

    /** error.e:84			text = GetMsgText(204, 0, {w_name, msg})*/
    // SubProg Warning pc: 172 op: PRIVATE_INIT_CHECK (30)
    // SubProg Warning pc: 174 op: RIGHT_BRACE_2 (85)
    Ref(_msg_48796);
    RefDS(_w_name_48801);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _w_name_48801;
    ((intptr_t *)_2)[2] = _msg_48796;
    _25295 = MAKE_SEQ(_1);
    // SubProg Warning pc: 178 op: PROC (27)
    _0 = _text_48800;
    _text_48800 = _40GetMsgText(204, 0, _25295);
    DeRef(_0);
    _25295 = NOVALUE;
    // SubProg Warning pc: 184 op: SEQUENCE_CHECK (97)
    // SubProg Warning pc: 186 op: STARTLINE (58)

    /** error.e:85			if find(text, warning_list) then*/
    // SubProg Warning pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 190 op: FIND_FROM (176)
    _25297 = find_from(_text_48800, _49warning_list_48789, 1);
    // SubProg Warning pc: 195 op: IF (20)
    if (_25297 == 0)
    {
        _25297 = NOVALUE;
        goto LB; // [195] 204
    }
    else{
        _25297 = NOVALUE;
    }
    // SubProg Warning pc: 198 op: STARTLINE (58)

    /** error.e:86				return -- duplicate*/
    // SubProg Warning pc: 200 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Warning

// block var msg_48796
    DeRef(_msg_48796);

// block var mask_48797

// block var args_48798
    DeRefDS(_args_48798);

// block var orig_mask_48799

// block var text_48800
    DeRefDS(_text_48800);

// block var w_name_48801
    DeRefDS(_w_name_48801);
    DeRef(_25283);
    _25283 = NOVALUE;
    DeRef(_25278);
    _25278 = NOVALUE;
    return;
    // SubProg Warning pc: 203 op: NOP1 (159)
LB: // addr: 204 pc: 203 sub: 48794 op: 159
    // SubProg Warning pc: 204 op: STARTLINE (58)

    /** error.e:89			warning_list = append(warning_list, text)*/
    // SubProg Warning pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg Warning pc: 208 op: APPEND (35)
    RefDS(_text_48800);
    Append(&_49warning_list_48789, _49warning_list_48789, _text_48800);
    // SubProg Warning pc: 212 op: NOP1 (159)
L6: // addr: 213 pc: 212 sub: 48794 op: 159
    // SubProg Warning pc: 213 op: STARTLINE (58)

    /** error.e:91	end procedure*/
    // SubProg Warning pc: 215 op: RETURNP (29)

// Exiting block BLOCK: Warning

// block var msg_48796
    DeRef(_msg_48796);

// block var mask_48797

// block var args_48798
    DeRefDS(_args_48798);

// block var orig_mask_48799

// block var text_48800
    DeRef(_text_48800);

// block var w_name_48801
    DeRef(_w_name_48801);
    DeRef(_25283);
    _25283 = NOVALUE;
    DeRef(_25278);
    _25278 = NOVALUE;
    return;
    // SubProg Warning pc: 218 op: BADRETURNF (43)
    ;
}


object _49ShowWarnings()
{
    object _c_48865 = NOVALUE;
    object _errfile_48866 = NOVALUE;
    object _twf_48867 = NOVALUE;
    object _25337 = NOVALUE; // 48929 25337
// skipping _25336  name type: 0
// skipping _25334  name type: 0
    object _25333 = NOVALUE; // 48923 25333
    object _25332 = NOVALUE; // 48921 25332
    object _25331 = NOVALUE; // 48920 25331
    object _25330 = NOVALUE; // 48918 25330
    object _25329 = NOVALUE; // 48917 25329
    object _25328 = NOVALUE; // 48916 25328
// skipping _25327  name type: 0
    object _25326 = NOVALUE; // 48911 25326
    object _25325 = NOVALUE; // 48910 25325
    object _25324 = NOVALUE; // 48907 25324
// skipping _25323  name type: 0
    object _25322 = NOVALUE; // 48904 25322
    object _25321 = NOVALUE; // 48900 25321
    object _25320 = NOVALUE; // 48899 25320
    object _25319 = NOVALUE; // 48895 25319
// skipping _25318  name type: 0
    object _25317 = NOVALUE; // 48888 25317
// skipping _25316  name type: 0
// skipping _25315  name type: 0
// skipping _25314  name type: 0
    object _25313 = NOVALUE; // 48880 25313
// skipping _25312  name type: 0
    object _25311 = NOVALUE; // 48873 25311
    object _25310 = NOVALUE; // 48872 25310
    object _25309 = NOVALUE; // 48871 25309
// skipping _25308  name type: 0
    object _25307 = NOVALUE; // 48869 25307
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowWarnings pc: 1 op: STARTLINE (58)

    /** error.e:117		if display_warnings = 0 or length(warning_list) = 0 then*/
    // SubProg ShowWarnings pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 5 op: EQUALS (3)
    _25307 = (1 == 0);
    // SubProg ShowWarnings pc: 9 op: SC1_OR_IF (147)
    if (_25307 != 0) {
        goto L1; // [9] 27
    }
    // SubProg ShowWarnings pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48789)){
            _25309 = SEQ_PTR(_49warning_list_48789)->length;
    }
    else {
        _25309 = 1;
    }
    // SubProg ShowWarnings pc: 18 op: EQUALS (3)
    _25310 = (_25309 == 0);
    _25309 = NOVALUE;
    // SubProg ShowWarnings pc: 22 op: NOP1 (159)
    // SubProg ShowWarnings pc: 23 op: IF (20)
    if (_25310 == 0)
    {
        DeRef(_25310);
        _25310 = NOVALUE;
        goto L2; // [23] 39
    }
    else{
        DeRef(_25310);
        _25310 = NOVALUE;
    }
    // SubProg ShowWarnings pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 27 op: STARTLINE (58)

    /** error.e:118			return length(warning_list)*/
    // SubProg ShowWarnings pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48789)){
            _25311 = SEQ_PTR(_49warning_list_48789)->length;
    }
    else {
        _25311 = 1;
    }
    // SubProg ShowWarnings pc: 34 op: RETURNF (28)

// Exiting block BLOCK: ShowWarnings

// block var c_48865

// block var errfile_48866

// block var twf_48867
    DeRef(_25307);
    _25307 = NOVALUE;
    return _25311;
    // SubProg ShowWarnings pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 39 op: STARTLINE (58)

    /** error.e:121		if TempErrFile > 0 then*/
    // SubProg ShowWarnings pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 43 op: GREATER_IFW_I (124)
    if (_49TempErrFile_48777 <= 0)
    goto L3; // [43] 57
    // SubProg ShowWarnings pc: 47 op: STARTLINE (58)

    /** error.e:122			errfile = TempErrFile*/
    // SubProg ShowWarnings pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 51 op: ASSIGN_I (113)
    _errfile_48866 = _49TempErrFile_48777;
    // SubProg ShowWarnings pc: 54 op: ELSE (23)
    goto L4; // [54] 67
    // SubProg ShowWarnings pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 57 op: STARTLINE (58)

    /** error.e:124			errfile = STDERR*/
    // SubProg ShowWarnings pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 61 op: ASSIGN (18)
    _errfile_48866 = 2;
    // SubProg ShowWarnings pc: 64 op: INTEGER_CHECK (96)
    // SubProg ShowWarnings pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 67 op: STARTLINE (58)

    /** error.e:127		if not integer(TempWarningName) then*/
    // SubProg ShowWarnings pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 71 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_5TempWarningName_12491))
    _25313 = 1;
    else if (IS_ATOM_DBL(_5TempWarningName_12491))
    _25313 = IS_ATOM_INT(DoubleToInt(_5TempWarningName_12491));
    else
    _25313 = 0;
    // SubProg ShowWarnings pc: 74 op: NOT_IFW (108)
    if (_25313 != 0)
    goto L5; // [74] 179
    _25313 = NOVALUE;
    // SubProg ShowWarnings pc: 77 op: STARTLINE (58)

    /** error.e:128			twf = open(TempWarningName,"w")*/
    // SubProg ShowWarnings pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 81 op: OPEN (37)
    _twf_48867 = EOpen(_5TempWarningName_12491, _22103, 0);
    // SubProg ShowWarnings pc: 86 op: STARTLINE (58)

    /** error.e:129			if twf = -1 then*/
    // SubProg ShowWarnings pc: 88 op: EQUALS_IFW_I (121)
    if (_twf_48867 != -1)
    goto L6; // [88] 136
    // SubProg ShowWarnings pc: 92 op: STARTLINE (58)

    /** error.e:130				ShowMsg(errfile, 205, {TempWarningName})*/
    // SubProg ShowWarnings pc: 94 op: PRIVATE_INIT_CHECK (30)
    // SubProg ShowWarnings pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 98 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_5TempWarningName_12491);
    ((intptr_t*)_2)[1] = _5TempWarningName_12491;
    _25317 = MAKE_SEQ(_1);
    // SubProg ShowWarnings pc: 102 op: PROC (27)
    _40ShowMsg(_errfile_48866, 205, _25317, 1);
    _25317 = NOVALUE;
    // SubProg ShowWarnings pc: 108 op: STARTLINE (58)

    /** error.e:131				if errfile != STDERR then*/
    // SubProg ShowWarnings pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 112 op: NOTEQ_IFW (105)
    if (_errfile_48866 == 2)
    goto L7; // [112] 173
    // SubProg ShowWarnings pc: 116 op: STARTLINE (58)

    /** error.e:132					ShowMsg(STDERR, 205, {TempWarningName})*/
    // SubProg ShowWarnings pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 122 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_5TempWarningName_12491);
    ((intptr_t*)_2)[1] = _5TempWarningName_12491;
    _25319 = MAKE_SEQ(_1);
    // SubProg ShowWarnings pc: 126 op: PROC (27)
    _40ShowMsg(2, 205, _25319, 1);
    _25319 = NOVALUE;
    // SubProg ShowWarnings pc: 132 op: NOP1 (159)
    // SubProg ShowWarnings pc: 133 op: ELSE (23)
    goto L7; // [133] 173
    // SubProg ShowWarnings pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 136 op: STARTLINE (58)

    /** error.e:135				for i = 1 to length(warning_list) do*/
    // SubProg ShowWarnings pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48789)){
            _25320 = SEQ_PTR(_49warning_list_48789)->length;
    }
    else {
        _25320 = 1;
    }
    // SubProg ShowWarnings pc: 143 op: FOR_I (125)
    {
        object _i_48898;
        _i_48898 = 1;
L8: // addr: 150 pc: 143 sub: 48863 op: 125
        if (_i_48898 > _25320){
            goto L9; // [143] 168
        }
        // SubProg ShowWarnings pc: 150 op: STARTLINE (58)

        /** error.e:136					puts(twf, warning_list[i])*/
        // SubProg ShowWarnings pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 154 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_49warning_list_48789);
        _25321 = (object)*(((s1_ptr)_2)->base + _i_48898);
        // SubProg ShowWarnings pc: 158 op: PUTS (44)
        EPuts(_twf_48867, _25321); // DJP 
        _25321 = NOVALUE;
        // SubProg ShowWarnings pc: 161 op: STARTLINE (58)

        /** error.e:137				end for*/
        // SubProg ShowWarnings pc: 163 op: ENDFOR_INT_UP1 (54)
        _i_48898 = _i_48898 + 1;
        goto L8; // [163] 150
L9: // addr: 168 pc: 163 sub: 48863 op: 54
        ;
    }
    // SubProg ShowWarnings pc: 168 op: STARTLINE (58)

    /** error.e:138			    close(twf)*/
    // SubProg ShowWarnings pc: 170 op: CLOSE (86)
    EClose(_twf_48867);
    // SubProg ShowWarnings pc: 172 op: NOP1 (159)
L7: // addr: 173 pc: 172 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 173 op: STARTLINE (58)

    /** error.e:140			TempWarningName = 99 -- Flag that we have done this already.*/
    // SubProg ShowWarnings pc: 175 op: ASSIGN (18)
    DeRef(_5TempWarningName_12491);
    _5TempWarningName_12491 = 99;
    // SubProg ShowWarnings pc: 178 op: NOP1 (159)
L5: // addr: 179 pc: 178 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 179 op: STARTLINE (58)

    /** error.e:143		if batch_job = 0 or errfile != STDERR then*/
    // SubProg ShowWarnings pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 183 op: EQUALS (3)
    _25322 = (_5batch_job_12490 == 0);
    // SubProg ShowWarnings pc: 187 op: SC1_OR_IF (147)
    if (_25322 != 0) {
        goto LA; // [187] 204
    }
    // SubProg ShowWarnings pc: 191 op: PRIVATE_INIT_CHECK (30)
    // SubProg ShowWarnings pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 195 op: NOTEQ (4)
    _25324 = (_errfile_48866 != 2);
    // SubProg ShowWarnings pc: 199 op: NOP1 (159)
    // SubProg ShowWarnings pc: 200 op: IF (20)
    if (_25324 == 0)
    {
        DeRef(_25324);
        _25324 = NOVALUE;
        goto LB; // [200] 311
    }
    else{
        DeRef(_25324);
        _25324 = NOVALUE;
    }
    // SubProg ShowWarnings pc: 203 op: NOP1 (159)
LA: // addr: 204 pc: 203 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 204 op: STARTLINE (58)

    /** error.e:144			for i = 1 to length(warning_list) do*/
    // SubProg ShowWarnings pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 208 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48789)){
            _25325 = SEQ_PTR(_49warning_list_48789)->length;
    }
    else {
        _25325 = 1;
    }
    // SubProg ShowWarnings pc: 211 op: FOR_I (125)
    {
        object _i_48909;
        _i_48909 = 1;
LC: // addr: 218 pc: 211 sub: 48863 op: 125
        if (_i_48909 > _25325){
            goto LD; // [211] 310
        }
        // SubProg ShowWarnings pc: 218 op: STARTLINE (58)

        /** error.e:145				puts(errfile, warning_list[i])*/
        // SubProg ShowWarnings pc: 220 op: PRIVATE_INIT_CHECK (30)
        // SubProg ShowWarnings pc: 222 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 224 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_49warning_list_48789);
        _25326 = (object)*(((s1_ptr)_2)->base + _i_48909);
        // SubProg ShowWarnings pc: 228 op: PUTS (44)
        EPuts(_errfile_48866, _25326); // DJP 
        _25326 = NOVALUE;
        // SubProg ShowWarnings pc: 231 op: STARTLINE (58)

        /** error.e:146				if errfile = STDERR then*/
        // SubProg ShowWarnings pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 235 op: EQUALS_IFW (104)
        if (_errfile_48866 != 2)
        goto LE; // [235] 303
        // SubProg ShowWarnings pc: 239 op: STARTLINE (58)

        /** error.e:147					if remainder(i, 20) = 0 and batch_job = 0 and test_only = 0 then*/
        // SubProg ShowWarnings pc: 241 op: REMAINDER (71)
        _25328 = (_i_48909 % 20);
        // SubProg ShowWarnings pc: 245 op: EQUALS (3)
        _25329 = (_25328 == 0);
        _25328 = NOVALUE;
        // SubProg ShowWarnings pc: 249 op: SC1_AND (141)
        if (_25329 == 0) {
            _25330 = 0;
            goto LF; // [249] 263
        }
        // SubProg ShowWarnings pc: 253 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 255 op: EQUALS (3)
        _25331 = (_5batch_job_12490 == 0);
        // SubProg ShowWarnings pc: 259 op: SC2_AND (142)
        _25330 = (_25331 != 0);
        // SubProg ShowWarnings pc: 262 op: NOP1 (159)
LF: // addr: 263 pc: 262 sub: 48863 op: 159
        // SubProg ShowWarnings pc: 263 op: SC1_AND_IF (146)
        if (_25330 == 0) {
            goto L10; // [263] 302
        }
        // SubProg ShowWarnings pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowWarnings pc: 269 op: EQUALS (3)
        _25333 = (_5test_only_12489 == 0);
        // SubProg ShowWarnings pc: 273 op: NOP1 (159)
        // SubProg ShowWarnings pc: 274 op: IF (20)
        if (_25333 == 0)
        {
            DeRef(_25333);
            _25333 = NOVALUE;
            goto L10; // [274] 302
        }
        else{
            DeRef(_25333);
            _25333 = NOVALUE;
        }
        // SubProg ShowWarnings pc: 277 op: STARTLINE (58)

        /** error.e:148						ShowMsg(errfile, 206)*/
        // SubProg ShowWarnings pc: 279 op: PROC (27)
        RefDS(_21958);
        _40ShowMsg(_errfile_48866, 206, _21958, 1);
        // SubProg ShowWarnings pc: 285 op: STARTLINE (58)

        /** error.e:149						c = getc(0)*/
        // SubProg ShowWarnings pc: 287 op: GETC (33)
        if (0 != last_r_file_no) {
            last_r_file_ptr = which_file(0, EF_READ);
            last_r_file_no = 0;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _c_48865 = getc((FILE*)xstdin);
            }
            else{
                _c_48865 = getc(last_r_file_ptr);
            }
        }
        else{
            _c_48865 = getc(last_r_file_ptr);
        }
        // SubProg ShowWarnings pc: 290 op: STARTLINE (58)

        /** error.e:150						if c = 'q' then*/
        // SubProg ShowWarnings pc: 292 op: EQUALS_IFW_I (121)
        if (_c_48865 != 113)
        goto L11; // [292] 301
        // SubProg ShowWarnings pc: 296 op: STARTLINE (58)

        /** error.e:151							exit*/
        // SubProg ShowWarnings pc: 298 op: EXIT (61)
        goto LD; // [298] 310
        // SubProg ShowWarnings pc: 300 op: NOP1 (159)
L11: // addr: 301 pc: 300 sub: 48863 op: 159
        // SubProg ShowWarnings pc: 301 op: NOP1 (159)
L10: // addr: 302 pc: 301 sub: 48863 op: 159
        // SubProg ShowWarnings pc: 302 op: NOP1 (159)
LE: // addr: 303 pc: 302 sub: 48863 op: 159
        // SubProg ShowWarnings pc: 303 op: STARTLINE (58)

        /** error.e:155			end for*/
        // SubProg ShowWarnings pc: 305 op: ENDFOR_INT_UP1 (54)
        _i_48909 = _i_48909 + 1;
        goto LC; // [305] 218
LD: // addr: 310 pc: 305 sub: 48863 op: 54
        ;
    }
    // SubProg ShowWarnings pc: 310 op: NOP1 (159)
LB: // addr: 311 pc: 310 sub: 48863 op: 159
    // SubProg ShowWarnings pc: 311 op: STARTLINE (58)

    /** error.e:158		return length(warning_list)*/
    // SubProg ShowWarnings pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowWarnings pc: 315 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48789)){
            _25337 = SEQ_PTR(_49warning_list_48789)->length;
    }
    else {
        _25337 = 1;
    }
    // SubProg ShowWarnings pc: 318 op: RETURNF (28)

// Exiting block BLOCK: ShowWarnings

// block var c_48865

// block var errfile_48866

// block var twf_48867
    DeRef(_25331);
    _25331 = NOVALUE;
    DeRef(_25307);
    _25307 = NOVALUE;
    DeRef(_25329);
    _25329 = NOVALUE;
    DeRef(_25322);
    _25322 = NOVALUE;
    return _25337;
    // SubProg ShowWarnings pc: 322 op: BADRETURNF (43)
    ;
}


void _49ShowDefines(object _errfile_48932)
{
    object _c_48933 = NOVALUE;
    object _25351 = NOVALUE; // 48957 25351
    object _25350 = NOVALUE; // 48956 25350
// skipping _25349  name type: 0
    object _25348 = NOVALUE; // 48953 25348
    object _25347 = NOVALUE; // 48952 25347
    object _25344 = NOVALUE; // 48949 25344
    object _25343 = NOVALUE; // 48946 25343
    object _25342 = NOVALUE; // 48942 25342
    object _25341 = NOVALUE; // 48941 25341
    object _25340 = NOVALUE; // 48940 25340
// skipping _25338  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowDefines pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowDefines pc: 3 op: STARTLINE (58)

    /** error.e:164		if errfile=0 then*/
    // SubProg ShowDefines pc: 5 op: EQUALS_IFW_I (121)
    if (_errfile_48932 != 0)
    goto L1; // [5] 19
    // SubProg ShowDefines pc: 9 op: STARTLINE (58)

    /** error.e:165			errfile = STDERR*/
    // SubProg ShowDefines pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowDefines pc: 13 op: ASSIGN (18)
    _errfile_48932 = 2;
    // SubProg ShowDefines pc: 16 op: INTEGER_CHECK (96)
    // SubProg ShowDefines pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 48930 op: 159
    // SubProg ShowDefines pc: 19 op: STARTLINE (58)

    /** error.e:168		puts(errfile, format("\n--- [1] ---\n", {GetMsgText(207,0)}))*/
    // SubProg ShowDefines pc: 21 op: PROC (27)
    RefDS(_21958);
    _25340 = _40GetMsgText(207, 0, _21958);
    // SubProg ShowDefines pc: 27 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25340;
    _25341 = MAKE_SEQ(_1);
    _25340 = NOVALUE;
    // SubProg ShowDefines pc: 31 op: PROC (27)
    RefDS(_25339);
    _25342 = _20format(_25339, _25341);
    _25341 = NOVALUE;
    // SubProg ShowDefines pc: 36 op: PUTS (44)
    EPuts(_errfile_48932, _25342); // DJP 
    DeRef(_25342);
    _25342 = NOVALUE;
    // SubProg ShowDefines pc: 39 op: STARTLINE (58)

    /** error.e:170		for i = 1 to length(OpDefines) do*/
    // SubProg ShowDefines pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowDefines pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_5OpDefines_12551)){
            _25343 = SEQ_PTR(_5OpDefines_12551)->length;
    }
    else {
        _25343 = 1;
    }
    // SubProg ShowDefines pc: 46 op: FOR_I (125)
    {
        object _i_48944;
        _i_48944 = 1;
L2: // addr: 53 pc: 46 sub: 48930 op: 125
        if (_i_48944 > _25343){
            goto L3; // [46] 98
        }
        // SubProg ShowDefines pc: 53 op: STARTLINE (58)

        /** error.e:171			if find(OpDefines[i], {"_PLAT_START", "_PLAT_STOP"}) = 0 then*/
        // SubProg ShowDefines pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowDefines pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5OpDefines_12551);
        _25344 = (object)*(((s1_ptr)_2)->base + _i_48944);
        // SubProg ShowDefines pc: 61 op: RIGHT_BRACE_2 (85)
        RefDS(_25346);
        RefDS(_25345);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25345;
        ((intptr_t *)_2)[2] = _25346;
        _25347 = MAKE_SEQ(_1);
        // SubProg ShowDefines pc: 65 op: FIND_FROM (176)
        _25348 = find_from(_25344, _25347, 1);
        _25344 = NOVALUE;
        DeRefDS(_25347);
        _25347 = NOVALUE;
        // SubProg ShowDefines pc: 70 op: EQUALS_IFW_I (121)
        if (_25348 != 0)
        goto L4; // [70] 91
        // SubProg ShowDefines pc: 74 op: STARTLINE (58)

        /** error.e:172				printf(errfile, "%s\n", {OpDefines[i]})*/
        // SubProg ShowDefines pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowDefines pc: 78 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5OpDefines_12551);
        _25350 = (object)*(((s1_ptr)_2)->base + _i_48944);
        // SubProg ShowDefines pc: 82 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25350);
        ((intptr_t*)_2)[1] = _25350;
        _25351 = MAKE_SEQ(_1);
        _25350 = NOVALUE;
        // SubProg ShowDefines pc: 86 op: PRINTF (38)
        EPrintf(_errfile_48932, _25230, _25351);
        DeRefDS(_25351);
        _25351 = NOVALUE;
        // SubProg ShowDefines pc: 90 op: NOP1 (159)
L4: // addr: 91 pc: 90 sub: 48930 op: 159
        // SubProg ShowDefines pc: 91 op: STARTLINE (58)

        /** error.e:174		end for*/
        // SubProg ShowDefines pc: 93 op: ENDFOR_INT_UP1 (54)
        _i_48944 = _i_48944 + 1;
        goto L2; // [93] 53
L3: // addr: 98 pc: 93 sub: 48930 op: 54
        ;
    }
    // SubProg ShowDefines pc: 98 op: STARTLINE (58)

    /** error.e:175		puts(errfile, "-------------------\n")*/
    // SubProg ShowDefines pc: 100 op: PUTS (44)
    EPuts(_errfile_48932, _25352); // DJP 
    // SubProg ShowDefines pc: 103 op: STARTLINE (58)

    /** error.e:177	end procedure*/
    // SubProg ShowDefines pc: 105 op: RETURNP (29)

// Exiting block BLOCK: ShowDefines

// block var errfile_48932
    return;
    // SubProg ShowDefines pc: 108 op: BADRETURNF (43)
    ;
}


void _49Cleanup(object _status_48961)
{
    object _w_48962 = NOVALUE;
    object _show_error_48963 = NOVALUE;
    object _25370 = NOVALUE; // 48999 25370
    object _25369 = NOVALUE; // 48998 25369
    object _25368 = NOVALUE; // 48995 25368
    object _25367 = NOVALUE; // 48993 25367
    object _25366 = NOVALUE; // 48992 25366
    object _25365 = NOVALUE; // 48989 25365
    object _25364 = NOVALUE; // 48988 25364
    object _25363 = NOVALUE; // 48987 25363
    object _25362 = NOVALUE; // 48985 25362
    object _25361 = NOVALUE; // 48984 25361
// skipping _25360  name type: 0
    object _25359 = NOVALUE; // 48978 25359
    object _25358 = NOVALUE; // 48976 25358
    object _25357 = NOVALUE; // 48975 25357
    object _25356 = NOVALUE; // 48972 25356
    object _25355 = NOVALUE; // 48971 25355
// skipping _25354  name type: 0
    object _25353 = NOVALUE; // 48966 25353
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Cleanup pc: 1 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 3 op: STARTLINE (58)

    /** error.e:182		integer w, show_error = 0*/
    // SubProg Cleanup pc: 5 op: ASSIGN_I (113)
    _show_error_48963 = 0;
    // SubProg Cleanup pc: 8 op: STARTLINE (58)

    /** error.e:184		ifdef EU_EX then*/
    // SubProg Cleanup pc: 10 op: STARTLINE (58)

    /** error.e:190		show_error = 1*/
    // SubProg Cleanup pc: 12 op: ASSIGN_I (113)
    _show_error_48963 = 1;
    // SubProg Cleanup pc: 15 op: STARTLINE (58)

    /** error.e:196		if object(src_file) = 0 then*/
    // SubProg Cleanup pc: 17 op: IS_AN_OBJECT (40)
    if( NOVALUE == _5src_file_12599 ){
        _25353 = 0;
    }
    else{
        _25353 = 1;
    }
    // SubProg Cleanup pc: 20 op: EQUALS_IFW_I (121)
    if (_25353 != 0)
    goto L1; // [20] 34
    // SubProg Cleanup pc: 24 op: STARTLINE (58)

    /** error.e:197			src_file = -1*/
    // SubProg Cleanup pc: 26 op: ASSIGN (18)
    _5src_file_12599 = -1;
    // SubProg Cleanup pc: 29 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 31 op: ELSE (23)
    goto L2; // [31] 86
    // SubProg Cleanup pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 48959 op: 159
    // SubProg Cleanup pc: 34 op: STARTLINE (58)

    /** error.e:198		elsif src_file >= 0 and (src_file != repl_file or not repl) then*/
    // SubProg Cleanup pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 38 op: GREATEREQ (2)
    _25355 = (_5src_file_12599 >= 0);
    // SubProg Cleanup pc: 42 op: SC1_AND_IF (146)
    if (_25355 == 0) {
        goto L3; // [42] 85
    }
    // SubProg Cleanup pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 50 op: NOTEQ (4)
    _25357 = (_5src_file_12599 != 5555);
    // SubProg Cleanup pc: 54 op: SC1_OR (143)
    if (_25357 != 0) {
        DeRef(_25358);
        _25358 = 1;
        goto L4; // [54] 67
    }
    // SubProg Cleanup pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 60 op: NOT (7)
    _25359 = (0 == 0);
    // SubProg Cleanup pc: 63 op: SC2_OR (144)
    _25358 = (_25359 != 0);
    // SubProg Cleanup pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 48959 op: 159
    // SubProg Cleanup pc: 67 op: NOP1 (159)
    // SubProg Cleanup pc: 68 op: IF (20)
    if (_25358 == 0)
    {
        _25358 = NOVALUE;
        goto L3; // [68] 85
    }
    else{
        _25358 = NOVALUE;
    }
    // SubProg Cleanup pc: 71 op: STARTLINE (58)

    /** error.e:199			close(src_file)*/
    // SubProg Cleanup pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 75 op: CLOSE (86)
    EClose(_5src_file_12599);
    // SubProg Cleanup pc: 77 op: STARTLINE (58)

    /** error.e:200			src_file = -1*/
    // SubProg Cleanup pc: 79 op: ASSIGN (18)
    _5src_file_12599 = -1;
    // SubProg Cleanup pc: 82 op: INTEGER_CHECK (96)
    // SubProg Cleanup pc: 84 op: NOP1 (159)
L3: // addr: 85 pc: 84 sub: 48959 op: 159
    // SubProg Cleanup pc: 85 op: NOP1 (159)
L2: // addr: 86 pc: 85 sub: 48959 op: 159
    // SubProg Cleanup pc: 86 op: STARTLINE (58)

    /** error.e:203		w = ShowWarnings()*/
    // SubProg Cleanup pc: 88 op: PROC (27)
    _w_48962 = _49ShowWarnings();
    // SubProg Cleanup pc: 91 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_w_48962)) {
        _1 = (object)(DBL_PTR(_w_48962)->dbl);
        DeRefDS(_w_48962);
        _w_48962 = _1;
    }
    // SubProg Cleanup pc: 93 op: STARTLINE (58)

    /** error.e:204		if not TRANSLATE and (BIND or show_error) and (w or Errors) then*/
    // SubProg Cleanup pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 97 op: NOT (7)
    _25361 = (_5TRANSLATE_12097 == 0);
    // SubProg Cleanup pc: 100 op: SC1_AND (141)
    if (_25361 == 0) {
        _25362 = 0;
        goto L5; // [100] 118
    }
    // SubProg Cleanup pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 106 op: SC1_OR (143)
    if (_5BIND_12100 != 0) {
        _25363 = 1;
        goto L6; // [106] 114
    }
    // SubProg Cleanup pc: 110 op: SC2_OR (144)
    _25363 = (_show_error_48963 != 0);
    // SubProg Cleanup pc: 113 op: NOP1 (159)
L6: // addr: 114 pc: 113 sub: 48959 op: 159
    // SubProg Cleanup pc: 114 op: SC2_AND (142)
    _25362 = (_25363 != 0);
    // SubProg Cleanup pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 48959 op: 159
    // SubProg Cleanup pc: 118 op: SC1_AND_IF (146)
    if (_25362 == 0) {
        goto L7; // [118] 177
    }
    // SubProg Cleanup pc: 122 op: SC1_OR (143)
    if (_w_48962 != 0) {
        DeRef(_25365);
        _25365 = 1;
        goto L8; // [122] 132
    }
    // SubProg Cleanup pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 128 op: SC2_OR (144)
    _25365 = (_49Errors_48776 != 0);
    // SubProg Cleanup pc: 131 op: NOP1 (159)
L8: // addr: 132 pc: 131 sub: 48959 op: 159
    // SubProg Cleanup pc: 132 op: NOP1 (159)
    // SubProg Cleanup pc: 133 op: IF (20)
    if (_25365 == 0)
    {
        _25365 = NOVALUE;
        goto L7; // [133] 177
    }
    else{
        _25365 = NOVALUE;
    }
    // SubProg Cleanup pc: 136 op: STARTLINE (58)

    /** error.e:205			if not batch_job and not test_only then*/
    // SubProg Cleanup pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 140 op: NOT (7)
    _25366 = (_5batch_job_12490 == 0);
    // SubProg Cleanup pc: 143 op: SC1_AND_IF (146)
    if (_25366 == 0) {
        goto L9; // [143] 176
    }
    // SubProg Cleanup pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 149 op: NOT (7)
    _25368 = (_5test_only_12489 == 0);
    // SubProg Cleanup pc: 152 op: NOP1 (159)
    // SubProg Cleanup pc: 153 op: IF (20)
    if (_25368 == 0)
    {
        DeRef(_25368);
        _25368 = NOVALUE;
        goto L9; // [153] 176
    }
    else{
        DeRef(_25368);
        _25368 = NOVALUE;
    }
    // SubProg Cleanup pc: 156 op: STARTLINE (58)

    /** error.e:206				screen_output(STDERR, GetMsgText(208,0))*/
    // SubProg Cleanup pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg Cleanup pc: 160 op: PROC (27)
    RefDS(_21958);
    _25369 = _40GetMsgText(208, 0, _21958);
    // SubProg Cleanup pc: 166 op: PROC (27)
    _49screen_output(2, _25369);
    _25369 = NOVALUE;
    // SubProg Cleanup pc: 170 op: STARTLINE (58)

    /** error.e:207				getc(0) -- wait*/
    // SubProg Cleanup pc: 172 op: GETC (33)
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25370 = getc((FILE*)xstdin);
        }
        else{
            _25370 = getc(last_r_file_ptr);
        }
    }
    else{
        _25370 = getc(last_r_file_ptr);
    }
    // SubProg Cleanup pc: 175 op: NOP1 (159)
L9: // addr: 176 pc: 175 sub: 48959 op: 159
    // SubProg Cleanup pc: 176 op: NOP1 (159)
L7: // addr: 177 pc: 176 sub: 48959 op: 159
    // SubProg Cleanup pc: 177 op: STARTLINE (58)

    /** error.e:212		cleanup_open_includes()*/
    // SubProg Cleanup pc: 179 op: PROC (27)
    _61cleanup_open_includes();
    // SubProg Cleanup pc: 181 op: STARTLINE (58)

    /** error.e:213		abort(status)*/
    // SubProg Cleanup pc: 183 op: ABORT (126)
    UserCleanup(_status_48961);
    // SubProg Cleanup pc: 185 op: STARTLINE (58)

    /** error.e:214	end procedure*/
    // SubProg Cleanup pc: 187 op: RETURNP (29)

// Exiting block BLOCK: Cleanup

// block var status_48961

// block var w_48962

// block var show_error_48963
    DeRef(_25357);
    _25357 = NOVALUE;
    DeRef(_25359);
    _25359 = NOVALUE;
    DeRef(_25361);
    _25361 = NOVALUE;
    DeRef(_25366);
    _25366 = NOVALUE;
    DeRef(_25355);
    _25355 = NOVALUE;
    return;
    // SubProg Cleanup pc: 190 op: BADRETURNF (43)
    ;
}


void _49OpenErrFile()
{
    object _25377 = NOVALUE; // 49014 25377
    object _25376 = NOVALUE; // 49013 25376
// skipping _25375  name type: 0
    object _25374 = NOVALUE; // 49009 25374
// skipping _25373  name type: 0
// skipping _25372  name type: 0
// skipping _25371  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg OpenErrFile pc: 1 op: STARTLINE (58)

    /** error.e:219	    if TempErrFile != -1 then*/
    // SubProg OpenErrFile pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 5 op: NOTEQ_IFW_I (122)
    if (_49TempErrFile_48777 == -1)
    goto L1; // [5] 19
    // SubProg OpenErrFile pc: 9 op: STARTLINE (58)

    /** error.e:220			TempErrFile = open(TempErrName, "w")*/
    // SubProg OpenErrFile pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 13 op: OPEN (37)
    _49TempErrFile_48777 = EOpen(_49TempErrName_48779, _22103, 0);
    // SubProg OpenErrFile pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 49001 op: 159
    // SubProg OpenErrFile pc: 19 op: STARTLINE (58)

    /** error.e:223		if TempErrFile = -1 then*/
    // SubProg OpenErrFile pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 23 op: EQUALS_IFW_I (121)
    if (_49TempErrFile_48777 != -1)
    goto L2; // [23] 64
    // SubProg OpenErrFile pc: 27 op: STARTLINE (58)

    /** error.e:224			if length(TempErrName) > 0 then*/
    // SubProg OpenErrFile pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 31 op: LENGTH (42)
    // Known sequence length:
    _25374 = 6;
    // SubProg OpenErrFile pc: 34 op: GREATER_IFW_I (124)
    // SubProg OpenErrFile pc: 38 op: STARTLINE (58)

    /** error.e:225				screen_output(STDERR, GetMsgText(209, 0, {TempErrName}))*/
    // SubProg OpenErrFile pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg OpenErrFile pc: 44 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_49TempErrName_48779);
    ((intptr_t*)_2)[1] = _49TempErrName_48779;
    _25376 = MAKE_SEQ(_1);
    // SubProg OpenErrFile pc: 48 op: PROC (27)
    _25377 = _40GetMsgText(209, 0, _25376);
    _25376 = NOVALUE;
    // SubProg OpenErrFile pc: 54 op: PROC (27)
    _49screen_output(2, _25377);
    _25377 = NOVALUE;
    // SubProg OpenErrFile pc: 58 op: NOP1 (159)
    // SubProg OpenErrFile pc: 59 op: STARTLINE (58)

    /** error.e:227			abort(1) -- with no clean up*/
    // SubProg OpenErrFile pc: 61 op: ABORT (126)
    UserCleanup(1);
    // SubProg OpenErrFile pc: 63 op: NOP1 (159)
L2: // addr: 64 pc: 63 sub: 49001 op: 159
    // SubProg OpenErrFile pc: 64 op: STARTLINE (58)

    /** error.e:229	end procedure*/
    // SubProg OpenErrFile pc: 66 op: RETURNP (29)

// Exiting block BLOCK: OpenErrFile
    return;
    // SubProg OpenErrFile pc: 69 op: BADRETURNF (43)
    ;
}


void _49ShowErr(object _f_49017)
{
    object _msg_inlined_screen_output_at_41_49029 = NOVALUE;
// skipping _25385  name type: 0
    object _25384 = NOVALUE; // 49036 25384
    object _25383 = NOVALUE; // 49034 25383
    object _25382 = NOVALUE; // 49027 25382
// skipping _25381  name type: 0
    object _25380 = NOVALUE; // 49023 25380
// skipping _25379  name type: 0
    object _25378 = NOVALUE; // 49020 25378
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ShowErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg ShowErr pc: 3 op: STARTLINE (58)

    /** error.e:234		if length(known_files) = 0 then*/
    // SubProg ShowErr pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _25378 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _25378 = 1;
    }
    // SubProg ShowErr pc: 10 op: EQUALS_IFW_I (121)
    if (_25378 != 0)
    goto L1; // [10] 20
    // SubProg ShowErr pc: 14 op: STARTLINE (58)

    /** error.e:235			return*/
    // SubProg ShowErr pc: 16 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: ShowErr

// block var f_49017
    return;
    // SubProg ShowErr pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 49015 op: 159
    // SubProg ShowErr pc: 20 op: STARTLINE (58)

    /** error.e:238		if ThisLine[1] = END_OF_FILE_CHAR then*/
    // SubProg ShowErr pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48781);
    _25380 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ShowErr pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 30 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25380, 26)){
        _25380 = NOVALUE;
        goto L2; // [30] 62
    }
    _25380 = NOVALUE;
    // SubProg ShowErr pc: 34 op: STARTLINE (58)

    /** error.e:239			screen_output(f, GetMsgText(210,0))*/
    // SubProg ShowErr pc: 36 op: PROC (27)
    RefDS(_21958);
    _25382 = _40GetMsgText(210, 0, _21958);
    // SubProg ShowErr pc: 42 op: ASSIGN (18)
    DeRef(_msg_inlined_screen_output_at_41_49029);
    _msg_inlined_screen_output_at_41_49029 = _25382;
    _25382 = NOVALUE;
    // SubProg ShowErr pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg ShowErr pc: 47 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 49 op: PUTS (44)
    EPuts(_f_49017, _msg_inlined_screen_output_at_41_49029); // DJP 
    // SubProg ShowErr pc: 52 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 54 op: ELSE (23)
    goto L3; // [54] 57
    // SubProg ShowErr pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 49015 op: 159
    // SubProg ShowErr pc: 57 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-screen_output from ShowErr @ 41

// block var msg_inlined_screen_output_at_41_49029
    DeRef(_msg_inlined_screen_output_at_41_49029);
    _msg_inlined_screen_output_at_41_49029 = NOVALUE;
    // SubProg ShowErr pc: 59 op: ELSE (23)
    goto L4; // [59] 79
    // SubProg ShowErr pc: 61 op: NOP1 (159)
L2: // addr: 62 pc: 61 sub: 49015 op: 159
    // SubProg ShowErr pc: 62 op: STARTLINE (58)

    /** error.e:241			screen_output(f, ThisLine)*/
    // SubProg ShowErr pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 66 op: SEQUENCE_CHECK (97)
    // SubProg ShowErr pc: 68 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 70 op: PUTS (44)
    EPuts(_f_49017, _49ThisLine_48781); // DJP 
    // SubProg ShowErr pc: 73 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 75 op: ELSE (23)
    goto L5; // [75] 78
    // SubProg ShowErr pc: 77 op: NOP1 (159)
L5: // addr: 78 pc: 77 sub: 49015 op: 159
    // SubProg ShowErr pc: 78 op: NOP1 (159)
L4: // addr: 79 pc: 78 sub: 49015 op: 159
    // SubProg ShowErr pc: 79 op: STARTLINE (58)

    /** error.e:244		for i = 1 to bp-2 do -- bp-1 points to last character read*/
    // SubProg ShowErr pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg ShowErr pc: 83 op: MINUS (10)
    _25383 = _49bp_48785 - 2;
    if ((object)((uintptr_t)_25383 +(uintptr_t) HIGH_BITS) >= 0){
        _25383 = NewDouble((eudouble)_25383);
    }
    // SubProg ShowErr pc: 87 op: FOR (21)
    {
        object _i_49033;
        _i_49033 = 1;
L6: // addr: 94 pc: 87 sub: 49015 op: 21
        if (binary_op_a(GREATER, _i_49033, _25383)){
            goto L7; // [87] 141
        }
        // SubProg ShowErr pc: 94 op: STARTLINE (58)

        /** error.e:245			if ThisLine[i] = '\t' then*/
        // SubProg ShowErr pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg ShowErr pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_49ThisLine_48781);
        if (!IS_ATOM_INT(_i_49033)){
            _25384 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_49033)->dbl));
        }
        else{
            _25384 = (object)*(((s1_ptr)_2)->base + _i_49033);
        }
        // SubProg ShowErr pc: 102 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25384, 9)){
            _25384 = NOVALUE;
            goto L8; // [102] 121
        }
        _25384 = NOVALUE;
        // SubProg ShowErr pc: 106 op: STARTLINE (58)

        /** error.e:246				screen_output(f, "\t")*/
        // SubProg ShowErr pc: 108 op: STARTLINE (58)

        /** error.e:44		puts(f, msg)*/
        // SubProg ShowErr pc: 110 op: PUTS (44)
        EPuts(_f_49017, _23930); // DJP 
        // SubProg ShowErr pc: 113 op: STARTLINE (58)

        /** error.e:45	end procedure*/
        // SubProg ShowErr pc: 115 op: ELSE (23)
        goto L9; // [115] 134
        // SubProg ShowErr pc: 117 op: NOP1 (159)
        // SubProg ShowErr pc: 118 op: ELSE (23)
        goto L9; // [118] 134
        // SubProg ShowErr pc: 120 op: NOP1 (159)
L8: // addr: 121 pc: 120 sub: 49015 op: 159
        // SubProg ShowErr pc: 121 op: STARTLINE (58)

        /** error.e:248				screen_output(f, " ")*/
        // SubProg ShowErr pc: 123 op: STARTLINE (58)

        /** error.e:44		puts(f, msg)*/
        // SubProg ShowErr pc: 125 op: PUTS (44)
        EPuts(_f_49017, _23377); // DJP 
        // SubProg ShowErr pc: 128 op: STARTLINE (58)

        /** error.e:45	end procedure*/
        // SubProg ShowErr pc: 130 op: ELSE (23)
        goto LA; // [130] 133
        // SubProg ShowErr pc: 132 op: NOP1 (159)
LA: // addr: 133 pc: 132 sub: 49015 op: 159
        // SubProg ShowErr pc: 133 op: NOP1 (159)
L9: // addr: 134 pc: 133 sub: 49015 op: 159
        // SubProg ShowErr pc: 134 op: STARTLINE (58)

        /** error.e:250		end for*/
        // SubProg ShowErr pc: 136 op: ENDFOR_INT_UP1 (54)
        _0 = _i_49033;
        if (IS_ATOM_INT(_i_49033)) {
            _i_49033 = _i_49033 + 1;
            if ((object)((uintptr_t)_i_49033 +(uintptr_t) HIGH_BITS) >= 0){
                _i_49033 = NewDouble((eudouble)_i_49033);
            }
        }
        else {
            _i_49033 = binary_op_a(PLUS, _i_49033, 1);
        }
        DeRef(_0);
        goto L6; // [136] 94
L7: // addr: 141 pc: 136 sub: 49015 op: 54
        ;
        DeRef(_i_49033);
    }
    // SubProg ShowErr pc: 141 op: STARTLINE (58)

    /** error.e:252		screen_output(f, "^\n\n")*/
    // SubProg ShowErr pc: 143 op: STARTLINE (58)

    /** error.e:44		puts(f, msg)*/
    // SubProg ShowErr pc: 145 op: PUTS (44)
    EPuts(_f_49017, _25386); // DJP 
    // SubProg ShowErr pc: 148 op: STARTLINE (58)

    /** error.e:45	end procedure*/
    // SubProg ShowErr pc: 150 op: ELSE (23)
    goto LB; // [150] 153
    // SubProg ShowErr pc: 152 op: NOP1 (159)
LB: // addr: 153 pc: 152 sub: 49015 op: 159
    // SubProg ShowErr pc: 153 op: STARTLINE (58)

    /** error.e:253	end procedure*/
    // SubProg ShowErr pc: 155 op: RETURNP (29)

// Exiting block BLOCK: ShowErr

// block var f_49017
    DeRef(_25383);
    _25383 = NOVALUE;
    return;
    // SubProg ShowErr pc: 158 op: BADRETURNF (43)
    ;
}


void _49CompileErr(object _msg_49045, object _args_49046, object _preproc_49047)
{
    object _errmsg_49048 = NOVALUE;
    object _25407 = NOVALUE; // 49083 25407
// skipping _25406  name type: 0
// skipping _25405  name type: 0
// skipping _25404  name type: 0
    object _25403 = NOVALUE; // 49075 25403
    object _25402 = NOVALUE; // 49074 25402
    object _25401 = NOVALUE; // 49073 25401
    object _25400 = NOVALUE; // 49072 25400
    object _25399 = NOVALUE; // 49071 25399
    object _25398 = NOVALUE; // 49070 25398
// skipping _25397  name type: 0
    object _25396 = NOVALUE; // 49066 25396
    object _25395 = NOVALUE; // 49064 25395
    object _25393 = NOVALUE; // 49060 25393
    object _25392 = NOVALUE; // 49058 25392
    object _25391 = NOVALUE; // 49057 25391
// skipping _25390  name type: 0
// skipping _25389  name type: 0
// skipping _25388  name type: 0
    object _25387 = NOVALUE; // 49050 25387
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg CompileErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg CompileErr pc: 3 op: STARTLINE (58)

    /** error.e:260		if integer(msg) then*/
    // SubProg CompileErr pc: 5 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_msg_49045))
    _25387 = 1;
    else if (IS_ATOM_DBL(_msg_49045))
    _25387 = IS_ATOM_INT(DoubleToInt(_msg_49045));
    else
    _25387 = 0;
    // SubProg CompileErr pc: 8 op: IF (20)
    if (_25387 == 0)
    {
        _25387 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25387 = NOVALUE;
    }
    // SubProg CompileErr pc: 11 op: STARTLINE (58)

    /** error.e:261			msg = GetMsgText(msg)*/
    // SubProg CompileErr pc: 13 op: PROC (27)
    Ref(_msg_49045);
    RefDS(_21958);
    _0 = _msg_49045;
    _msg_49045 = _40GetMsgText(_msg_49045, 1, _21958);
    DeRefi(_0);
    // SubProg CompileErr pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 49043 op: 159
    // SubProg CompileErr pc: 20 op: STARTLINE (58)

    /** error.e:264		msg = format(msg, args)*/
    // SubProg CompileErr pc: 22 op: PROC (27)
    Ref(_msg_49045);
    Ref(_args_49046);
    _0 = _msg_49045;
    _msg_49045 = _20format(_msg_49045, _args_49046);
    DeRef(_0);
    // SubProg CompileErr pc: 27 op: STARTLINE (58)

    /** error.e:266		Errors += 1*/
    // SubProg CompileErr pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 31 op: PLUS1_I (117)
    _49Errors_48776 = _49Errors_48776 + 1;
    // SubProg CompileErr pc: 35 op: STARTLINE (58)

    /** error.e:267		if not preproc and length(known_files) then*/
    // SubProg CompileErr pc: 37 op: NOT (7)
    _25391 = (_preproc_49047 == 0);
    // SubProg CompileErr pc: 40 op: SC1_AND_IF (146)
    if (_25391 == 0) {
        goto L2; // [40] 78
    }
    // SubProg CompileErr pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 46 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _25393 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _25393 = 1;
    }
    // SubProg CompileErr pc: 49 op: NOP1 (159)
    // SubProg CompileErr pc: 50 op: IF (20)
    if (_25393 == 0)
    {
        _25393 = NOVALUE;
        goto L2; // [50] 78
    }
    else{
        _25393 = NOVALUE;
    }
    // SubProg CompileErr pc: 53 op: STARTLINE (58)

    /** error.e:268			errmsg = sprintf("%s:%d\n%s\n", {known_files[current_file_no],*/
    // SubProg CompileErr pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 59 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _25395 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg CompileErr pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 65 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25395);
    ((intptr_t*)_2)[1] = _25395;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    Ref(_msg_49045);
    ((intptr_t*)_2)[3] = _msg_49045;
    _25396 = MAKE_SEQ(_1);
    _25395 = NOVALUE;
    // SubProg CompileErr pc: 71 op: SPRINTF (53)
    DeRef(_errmsg_49048);
    _errmsg_49048 = EPrintf(-9999999, _25394, _25396);
    DeRefDS(_25396);
    _25396 = NOVALUE;
    // SubProg CompileErr pc: 75 op: ELSE (23)
    goto L3; // [75] 121
    // SubProg CompileErr pc: 77 op: NOP1 (159)
L2: // addr: 78 pc: 77 sub: 49043 op: 159
    // SubProg CompileErr pc: 78 op: STARTLINE (58)

    /** error.e:271			errmsg = msg*/
    // SubProg CompileErr pc: 80 op: ASSIGN (18)
    Ref(_msg_49045);
    DeRef(_errmsg_49048);
    _errmsg_49048 = _msg_49045;
    // SubProg CompileErr pc: 83 op: SEQUENCE_CHECK (97)
    // SubProg CompileErr pc: 85 op: STARTLINE (58)

    /** error.e:272			if length(msg) > 0 and msg[$] != '\n' then*/
    // SubProg CompileErr pc: 87 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_49045)){
            _25398 = SEQ_PTR(_msg_49045)->length;
    }
    else {
        _25398 = 1;
    }
    // SubProg CompileErr pc: 90 op: GREATER (6)
    _25399 = (_25398 > 0);
    _25398 = NOVALUE;
    // SubProg CompileErr pc: 94 op: SC1_AND_IF (146)
    if (_25399 == 0) {
        goto L4; // [94] 120
    }
    // SubProg CompileErr pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_49045)){
            _25401 = SEQ_PTR(_msg_49045)->length;
    }
    else {
        _25401 = 1;
    }
    // SubProg CompileErr pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_msg_49045);
    _25402 = (object)*(((s1_ptr)_2)->base + _25401);
    // SubProg CompileErr pc: 105 op: NOTEQ (4)
    if (IS_ATOM_INT(_25402)) {
        _25403 = (_25402 != 10);
    }
    else {
        _25403 = binary_op(NOTEQ, _25402, 10);
    }
    _25402 = NOVALUE;
    // SubProg CompileErr pc: 109 op: NOP1 (159)
    // SubProg CompileErr pc: 110 op: IF (20)
    if (_25403 == 0) {
        DeRef(_25403);
        _25403 = NOVALUE;
        goto L4; // [110] 120
    }
    else {
        if (!IS_ATOM_INT(_25403) && DBL_PTR(_25403)->dbl == 0.0){
            DeRef(_25403);
            _25403 = NOVALUE;
            goto L4; // [110] 120
        }
        DeRef(_25403);
        _25403 = NOVALUE;
    }
    DeRef(_25403);
    _25403 = NOVALUE;
    // SubProg CompileErr pc: 113 op: STARTLINE (58)

    /** error.e:273				errmsg &= '\n'*/
    // SubProg CompileErr pc: 115 op: CONCAT (15)
    Append(&_errmsg_49048, _errmsg_49048, 10);
    // SubProg CompileErr pc: 119 op: NOP1 (159)
L4: // addr: 120 pc: 119 sub: 49043 op: 159
    // SubProg CompileErr pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 49043 op: 159
    // SubProg CompileErr pc: 121 op: STARTLINE (58)

    /** error.e:277		if not preproc then*/
    // SubProg CompileErr pc: 123 op: NOT_IFW (108)
    if (_preproc_49047 != 0)
    goto L5; // [123] 131
    // SubProg CompileErr pc: 126 op: STARTLINE (58)

    /** error.e:279			OpenErrFile() -- exits if error filename is ""*/
    // SubProg CompileErr pc: 128 op: PROC (27)
    _49OpenErrFile();
    // SubProg CompileErr pc: 130 op: NOP1 (159)
L5: // addr: 131 pc: 130 sub: 49043 op: 159
    // SubProg CompileErr pc: 131 op: STARTLINE (58)

    /** error.e:281		screen_output(STDERR, errmsg)*/
    // SubProg CompileErr pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 135 op: PRIVATE_INIT_CHECK (30)
    // SubProg CompileErr pc: 137 op: PROC (27)
    RefDS(_errmsg_49048);
    _49screen_output(2, _errmsg_49048);
    // SubProg CompileErr pc: 141 op: STARTLINE (58)

    /** error.e:283		if not preproc then*/
    // SubProg CompileErr pc: 143 op: NOT_IFW (108)
    if (_preproc_49047 != 0)
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
    EPuts(_49TempErrFile_48777, _errmsg_49048); // DJP 
    // SubProg CompileErr pc: 160 op: STARTLINE (58)

    /** error.e:288			ShowErr(TempErrFile)*/
    // SubProg CompileErr pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 164 op: PROC (27)
    _49ShowErr(_49TempErrFile_48777);
    // SubProg CompileErr pc: 167 op: STARTLINE (58)

    /** error.e:290			ShowWarnings()*/
    // SubProg CompileErr pc: 169 op: PROC (27)
    _25407 = _49ShowWarnings();
    // SubProg CompileErr pc: 172 op: STARTLINE (58)

    /** error.e:292			ShowDefines(TempErrFile)*/
    // SubProg CompileErr pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 176 op: PROC (27)
    _49ShowDefines(_49TempErrFile_48777);
    // SubProg CompileErr pc: 179 op: STARTLINE (58)

    /** error.e:294			close(TempErrFile)*/
    // SubProg CompileErr pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg CompileErr pc: 183 op: CLOSE (86)
    EClose(_49TempErrFile_48777);
    // SubProg CompileErr pc: 185 op: STARTLINE (58)

    /** error.e:295			TempErrFile = -2*/
    // SubProg CompileErr pc: 187 op: ASSIGN_I (113)
    _49TempErrFile_48777 = -2;
    // SubProg CompileErr pc: 190 op: STARTLINE (58)

    /** error.e:296			ifdef CRASH_ON_ERROR then*/
    // SubProg CompileErr pc: 192 op: STARTLINE (58)

    /** error.e:299			Cleanup(1)*/
    // SubProg CompileErr pc: 194 op: PROC (27)
    _49Cleanup(1);
    // SubProg CompileErr pc: 197 op: NOP1 (159)
L6: // addr: 198 pc: 197 sub: 49043 op: 159
    // SubProg CompileErr pc: 198 op: STARTLINE (58)

    /** error.e:302	end procedure*/
    // SubProg CompileErr pc: 200 op: RETURNP (29)

// Exiting block BLOCK: CompileErr

// block var msg_49045
    DeRef(_msg_49045);

// block var args_49046
    DeRef(_args_49046);

// block var preproc_49047

// block var errmsg_49048
    DeRef(_errmsg_49048);
    DeRef(_25399);
    _25399 = NOVALUE;
    DeRef(_25391);
    _25391 = NOVALUE;
    DeRef(_25407);
    _25407 = NOVALUE;
    return;
    // SubProg CompileErr pc: 203 op: BADRETURNF (43)
    ;
}


void _49InternalErr(object _msgno_49091, object _args_49092)
{
    object _msg_49093 = NOVALUE;
    object _25423 = NOVALUE; // 49126 25423
    object _25421 = NOVALUE; // 49123 25421
    object _25420 = NOVALUE; // 49122 25420
    object _25419 = NOVALUE; // 49119 25419
    object _25418 = NOVALUE; // 49117 25418
    object _25417 = NOVALUE; // 49116 25417
    object _25416 = NOVALUE; // 49113 25416
    object _25415 = NOVALUE; // 49112 25415
    object _25414 = NOVALUE; // 49110 25414
    object _25413 = NOVALUE; // 49104 25413
    object _25412 = NOVALUE; // 49103 25412
// skipping _25411  name type: 0
// skipping _25410  name type: 0
    object _25409 = NOVALUE; // 49095 25409
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InternalErr pc: 1 op: INTEGER_CHECK (96)
    // SubProg InternalErr pc: 3 op: STARTLINE (58)

    /** error.e:316		if atom(args) then*/
    // SubProg InternalErr pc: 5 op: IS_AN_ATOM (67)
    _25409 = 0;
    // SubProg InternalErr pc: 8 op: IF (20)
    if (_25409 == 0)
    {
        _25409 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _25409 = NOVALUE;
    }
    // SubProg InternalErr pc: 11 op: STARTLINE (58)

    /** error.e:317			args = {args}*/
    // SubProg InternalErr pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _args_49092;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_args_49092);
    ((intptr_t*)_2)[1] = _args_49092;
    _args_49092 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg InternalErr pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 49089 op: 159
    // SubProg InternalErr pc: 18 op: STARTLINE (58)

    /** error.e:320		msg = GetMsgText(msgno, 1, args)*/
    // SubProg InternalErr pc: 20 op: PROC (27)
    Ref(_args_49092);
    _0 = _msg_49093;
    _msg_49093 = _40GetMsgText(_msgno_49091, 1, _args_49092);
    DeRef(_0);
    // SubProg InternalErr pc: 26 op: SEQUENCE_CHECK (97)
    // SubProg InternalErr pc: 28 op: STARTLINE (58)

    /** error.e:321		if TRANSLATE then*/
    // SubProg InternalErr pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 32 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
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
    RefDS(_msg_49093);
    ((intptr_t*)_2)[1] = _msg_49093;
    _25412 = MAKE_SEQ(_1);
    // SubProg InternalErr pc: 43 op: PROC (27)
    _25413 = _40GetMsgText(211, 1, _25412);
    _25412 = NOVALUE;
    // SubProg InternalErr pc: 49 op: PROC (27)
    _49screen_output(2, _25413);
    _25413 = NOVALUE;
    // SubProg InternalErr pc: 53 op: ELSE (23)
    goto L3; // [53] 87
    // SubProg InternalErr pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 49089 op: 159
    // SubProg InternalErr pc: 56 op: STARTLINE (58)

    /** error.e:324			screen_output(STDERR, GetMsgText(212, 1, {known_files[current_file_no], line_number, msg}))*/
    // SubProg InternalErr pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _25414 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg InternalErr pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 70 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25414);
    ((intptr_t*)_2)[1] = _25414;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    RefDS(_msg_49093);
    ((intptr_t*)_2)[3] = _msg_49093;
    _25415 = MAKE_SEQ(_1);
    _25414 = NOVALUE;
    // SubProg InternalErr pc: 76 op: PROC (27)
    _25416 = _40GetMsgText(212, 1, _25415);
    _25415 = NOVALUE;
    // SubProg InternalErr pc: 82 op: PROC (27)
    _49screen_output(2, _25416);
    _25416 = NOVALUE;
    // SubProg InternalErr pc: 86 op: NOP1 (159)
L3: // addr: 87 pc: 86 sub: 49089 op: 159
    // SubProg InternalErr pc: 87 op: STARTLINE (58)

    /** error.e:327		if not batch_job and not test_only then*/
    // SubProg InternalErr pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 91 op: NOT (7)
    _25417 = (_5batch_job_12490 == 0);
    // SubProg InternalErr pc: 94 op: SC1_AND_IF (146)
    if (_25417 == 0) {
        goto L4; // [94] 127
    }
    // SubProg InternalErr pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 100 op: NOT (7)
    _25419 = (_5test_only_12489 == 0);
    // SubProg InternalErr pc: 103 op: NOP1 (159)
    // SubProg InternalErr pc: 104 op: IF (20)
    if (_25419 == 0)
    {
        DeRef(_25419);
        _25419 = NOVALUE;
        goto L4; // [104] 127
    }
    else{
        DeRef(_25419);
        _25419 = NOVALUE;
    }
    // SubProg InternalErr pc: 107 op: STARTLINE (58)

    /** error.e:328			screen_output(STDERR, GetMsgText(208, 0))*/
    // SubProg InternalErr pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg InternalErr pc: 111 op: PROC (27)
    RefDS(_21958);
    _25420 = _40GetMsgText(208, 0, _21958);
    // SubProg InternalErr pc: 117 op: PROC (27)
    _49screen_output(2, _25420);
    _25420 = NOVALUE;
    // SubProg InternalErr pc: 121 op: STARTLINE (58)

    /** error.e:329			getc(0)*/
    // SubProg InternalErr pc: 123 op: GETC (33)
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25421 = getc((FILE*)xstdin);
        }
        else{
            _25421 = getc(last_r_file_ptr);
        }
    }
    else{
        _25421 = getc(last_r_file_ptr);
    }
    // SubProg InternalErr pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 49089 op: 159
    // SubProg InternalErr pc: 127 op: STARTLINE (58)

    /** error.e:333		machine_proc(67, GetMsgText(213))*/
    // SubProg InternalErr pc: 129 op: PROC (27)
    RefDS(_21958);
    _25423 = _40GetMsgText(213, 1, _21958);
    // SubProg InternalErr pc: 135 op: MACHINE_PROC (112)
    machine(67, _25423);
    DeRef(_25423);
    _25423 = NOVALUE;
    // SubProg InternalErr pc: 138 op: STARTLINE (58)

    /** error.e:334	end procedure*/
    // SubProg InternalErr pc: 140 op: RETURNP (29)

// Exiting block BLOCK: InternalErr

// block var msgno_49091

// block var args_49092
    DeRef(_args_49092);

// block var msg_49093
    DeRef(_msg_49093);
    DeRef(_25417);
    _25417 = NOVALUE;
    return;
    // SubProg InternalErr pc: 143 op: BADRETURNF (43)
    ;
}



// 0xADE48B9B
