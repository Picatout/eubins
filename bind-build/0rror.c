// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _52screen_output(object _f_48721, object _msg_48722)
{
    object _0, _1, _2;
    

    /** error.e:44		puts(f, msg)*/
    EPuts(2, _msg_48722); // DJP 

    /** error.e:45	end procedure*/
    DeRefDS(_msg_48722);
    return;
    ;
}


void _52Warning(object _msg_48725, object _mask_48726, object _args_48727)
{
    object _orig_mask_48728 = NOVALUE;
    object _text_48729 = NOVALUE;
    object _w_name_48730 = NOVALUE;
    object _25223 = NOVALUE;
    object _25221 = NOVALUE;
    object _25219 = NOVALUE;
    object _25216 = NOVALUE;
    object _25211 = NOVALUE;
    object _25209 = NOVALUE;
    object _25208 = NOVALUE;
    object _25207 = NOVALUE;
    object _25206 = NOVALUE;
    object _25204 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:54		if display_warnings = 0 then*/

    /** error.e:58		if not Strict_is_on or Strict_Override then*/
    _25204 = (_39Strict_is_on_16880 == 0);
    if (_25204 != 0) {
        goto L1; // [26] 37
    }
    if (_39Strict_Override_16881 == 0)
    {
        goto L2; // [33] 56
    }
    else{
    }
L1: 

    /** error.e:59			if find(mask, strict_only_warnings) then*/
    _25206 = find_from(_mask_48726, _39strict_only_warnings_16878, 1);
    if (_25206 == 0)
    {
        _25206 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        _25206 = NOVALUE;
    }

    /** error.e:60				return*/
    DeRef(_msg_48725);
    DeRefDS(_args_48727);
    DeRef(_text_48729);
    DeRef(_w_name_48730);
    DeRef(_25204);
    _25204 = NOVALUE;
    return;
L3: 
L2: 

    /** error.e:64		orig_mask = mask -- =0 for non maskable warnings - none implemented so far*/
    _orig_mask_48728 = _mask_48726;

    /** error.e:65		if Strict_is_on and Strict_Override = 0 then*/
    if (_39Strict_is_on_16880 == 0) {
        goto L4; // [65] 85
    }
    _25208 = (_39Strict_Override_16881 == 0);
    if (_25208 == 0)
    {
        DeRef(_25208);
        _25208 = NOVALUE;
        goto L4; // [76] 85
    }
    else{
        DeRef(_25208);
        _25208 = NOVALUE;
    }

    /** error.e:66			mask = 0*/
    _mask_48726 = 0;
L4: 

    /** error.e:69		if mask = 0 or and_bits(OpWarning, mask) then*/
    _25209 = (_mask_48726 == 0);
    if (_25209 != 0) {
        goto L5; // [91] 106
    }
    {uintptr_t tu;
         tu = (uintptr_t)_39OpWarning_16882 & (uintptr_t)_mask_48726;
         _25211 = MAKE_UINT(tu);
    }
    if (_25211 == 0) {
        DeRef(_25211);
        _25211 = NOVALUE;
        goto L6; // [102] 213
    }
    else {
        if (!IS_ATOM_INT(_25211) && DBL_PTR(_25211)->dbl == 0.0){
            DeRef(_25211);
            _25211 = NOVALUE;
            goto L6; // [102] 213
        }
        DeRef(_25211);
        _25211 = NOVALUE;
    }
    DeRef(_25211);
    _25211 = NOVALUE;
L5: 

    /** error.e:70			if orig_mask != 0 then*/
    if (_orig_mask_48728 == 0)
    goto L7; // [108] 122

    /** error.e:71				orig_mask = find(orig_mask,warning_flags)*/
    _orig_mask_48728 = find_from(_orig_mask_48728, _39warning_flags_16857, 1);
L7: 

    /** error.e:74			if orig_mask != 0 then*/
    if (_orig_mask_48728 == 0)
    goto L8; // [124] 145

    /** error.e:75				w_name = "{ " & warning_names[orig_mask] & " }"*/
    _2 = (object)SEQ_PTR(_39warning_names_16859);
    _25216 = (object)*(((s1_ptr)_2)->base + _orig_mask_48728);
    {
        object concat_list[3];

        concat_list[0] = _25217;
        concat_list[1] = _25216;
        concat_list[2] = _25215;
        Concat_N((object_ptr)&_w_name_48730, concat_list, 3);
    }
    _25216 = NOVALUE;
    goto L9; // [142] 153
L8: 

    /** error.e:77				w_name = "" -- not maskable*/
    RefDS(_21928);
    DeRef(_w_name_48730);
    _w_name_48730 = _21928;
L9: 

    /** error.e:80			if atom(msg) then*/
    _25219 = IS_ATOM(_msg_48725);
    if (_25219 == 0)
    {
        _25219 = NOVALUE;
        goto LA; // [158] 170
    }
    else{
        _25219 = NOVALUE;
    }

    /** error.e:81				msg = GetMsgText(msg, 1, args)*/
    Ref(_msg_48725);
    RefDS(_args_48727);
    _0 = _msg_48725;
    _msg_48725 = _44GetMsgText(_msg_48725, 1, _args_48727);
    DeRef(_0);
LA: 

    /** error.e:84			text = GetMsgText(204, 0, {w_name, msg})*/
    Ref(_msg_48725);
    RefDS(_w_name_48730);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _w_name_48730;
    ((intptr_t *)_2)[2] = _msg_48725;
    _25221 = MAKE_SEQ(_1);
    _0 = _text_48729;
    _text_48729 = _44GetMsgText(204, 0, _25221);
    DeRef(_0);
    _25221 = NOVALUE;

    /** error.e:85			if find(text, warning_list) then*/
    _25223 = find_from(_text_48729, _52warning_list_48718, 1);
    if (_25223 == 0)
    {
        _25223 = NOVALUE;
        goto LB; // [195] 204
    }
    else{
        _25223 = NOVALUE;
    }

    /** error.e:86				return -- duplicate*/
    DeRef(_msg_48725);
    DeRefDS(_args_48727);
    DeRefDS(_text_48729);
    DeRefDS(_w_name_48730);
    DeRef(_25204);
    _25204 = NOVALUE;
    DeRef(_25209);
    _25209 = NOVALUE;
    return;
LB: 

    /** error.e:89			warning_list = append(warning_list, text)*/
    RefDS(_text_48729);
    Append(&_52warning_list_48718, _52warning_list_48718, _text_48729);
L6: 

    /** error.e:91	end procedure*/
    DeRef(_msg_48725);
    DeRefDS(_args_48727);
    DeRef(_text_48729);
    DeRef(_w_name_48730);
    DeRef(_25204);
    _25204 = NOVALUE;
    DeRef(_25209);
    _25209 = NOVALUE;
    return;
    ;
}


object _52ShowWarnings()
{
    object _c_48794 = NOVALUE;
    object _errfile_48795 = NOVALUE;
    object _twf_48796 = NOVALUE;
    object _25262 = NOVALUE;
    object _25259 = NOVALUE;
    object _25258 = NOVALUE;
    object _25257 = NOVALUE;
    object _25256 = NOVALUE;
    object _25255 = NOVALUE;
    object _25254 = NOVALUE;
    object _25252 = NOVALUE;
    object _25251 = NOVALUE;
    object _25250 = NOVALUE;
    object _25248 = NOVALUE;
    object _25247 = NOVALUE;
    object _25246 = NOVALUE;
    object _25245 = NOVALUE;
    object _25243 = NOVALUE;
    object _25239 = NOVALUE;
    object _25237 = NOVALUE;
    object _25236 = NOVALUE;
    object _25235 = NOVALUE;
    object _25233 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:117		if display_warnings = 0 or length(warning_list) = 0 then*/
    _25233 = (1 == 0);
    if (_25233 != 0) {
        goto L1; // [9] 27
    }
    if (IS_SEQUENCE(_52warning_list_48718)){
            _25235 = SEQ_PTR(_52warning_list_48718)->length;
    }
    else {
        _25235 = 1;
    }
    _25236 = (_25235 == 0);
    _25235 = NOVALUE;
    if (_25236 == 0)
    {
        DeRef(_25236);
        _25236 = NOVALUE;
        goto L2; // [23] 39
    }
    else{
        DeRef(_25236);
        _25236 = NOVALUE;
    }
L1: 

    /** error.e:118			return length(warning_list)*/
    if (IS_SEQUENCE(_52warning_list_48718)){
            _25237 = SEQ_PTR(_52warning_list_48718)->length;
    }
    else {
        _25237 = 1;
    }
    DeRef(_25233);
    _25233 = NOVALUE;
    return _25237;
L2: 

    /** error.e:121		if TempErrFile > 0 then*/
    if (_52TempErrFile_48707 <= 0)
    goto L3; // [43] 57

    /** error.e:122			errfile = TempErrFile*/
    _errfile_48795 = _52TempErrFile_48707;
    goto L4; // [54] 67
L3: 

    /** error.e:124			errfile = STDERR*/
    _errfile_48795 = 2;
L4: 

    /** error.e:127		if not integer(TempWarningName) then*/
    if (IS_ATOM_INT(_39TempWarningName_16829))
    _25239 = 1;
    else if (IS_ATOM_DBL(_39TempWarningName_16829))
    _25239 = IS_ATOM_INT(DoubleToInt(_39TempWarningName_16829));
    else
    _25239 = 0;
    if (_25239 != 0)
    goto L5; // [74] 179
    _25239 = NOVALUE;

    /** error.e:128			twf = open(TempWarningName,"w")*/
    _twf_48796 = EOpen(_39TempWarningName_16829, _22064, 0);

    /** error.e:129			if twf = -1 then*/
    if (_twf_48796 != -1)
    goto L6; // [88] 136

    /** error.e:130				ShowMsg(errfile, 205, {TempWarningName})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_39TempWarningName_16829);
    ((intptr_t*)_2)[1] = _39TempWarningName_16829;
    _25243 = MAKE_SEQ(_1);
    _44ShowMsg(_errfile_48795, 205, _25243, 1);
    _25243 = NOVALUE;

    /** error.e:131				if errfile != STDERR then*/
    if (_errfile_48795 == 2)
    goto L7; // [112] 173

    /** error.e:132					ShowMsg(STDERR, 205, {TempWarningName})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_39TempWarningName_16829);
    ((intptr_t*)_2)[1] = _39TempWarningName_16829;
    _25245 = MAKE_SEQ(_1);
    _44ShowMsg(2, 205, _25245, 1);
    _25245 = NOVALUE;
    goto L7; // [133] 173
L6: 

    /** error.e:135				for i = 1 to length(warning_list) do*/
    if (IS_SEQUENCE(_52warning_list_48718)){
            _25246 = SEQ_PTR(_52warning_list_48718)->length;
    }
    else {
        _25246 = 1;
    }
    {
        object _i_48827;
        _i_48827 = 1;
L8: 
        if (_i_48827 > _25246){
            goto L9; // [143] 168
        }

        /** error.e:136					puts(twf, warning_list[i])*/
        _2 = (object)SEQ_PTR(_52warning_list_48718);
        _25247 = (object)*(((s1_ptr)_2)->base + _i_48827);
        EPuts(_twf_48796, _25247); // DJP 
        _25247 = NOVALUE;

        /** error.e:137				end for*/
        _i_48827 = _i_48827 + 1;
        goto L8; // [163] 150
L9: 
        ;
    }

    /** error.e:138			    close(twf)*/
    EClose(_twf_48796);
L7: 

    /** error.e:140			TempWarningName = 99 -- Flag that we have done this already.*/
    DeRef(_39TempWarningName_16829);
    _39TempWarningName_16829 = 99;
L5: 

    /** error.e:143		if batch_job = 0 or errfile != STDERR then*/
    _25248 = (_39batch_job_16828 == 0);
    if (_25248 != 0) {
        goto LA; // [187] 204
    }
    _25250 = (_errfile_48795 != 2);
    if (_25250 == 0)
    {
        DeRef(_25250);
        _25250 = NOVALUE;
        goto LB; // [200] 311
    }
    else{
        DeRef(_25250);
        _25250 = NOVALUE;
    }
LA: 

    /** error.e:144			for i = 1 to length(warning_list) do*/
    if (IS_SEQUENCE(_52warning_list_48718)){
            _25251 = SEQ_PTR(_52warning_list_48718)->length;
    }
    else {
        _25251 = 1;
    }
    {
        object _i_48838;
        _i_48838 = 1;
LC: 
        if (_i_48838 > _25251){
            goto LD; // [211] 310
        }

        /** error.e:145				puts(errfile, warning_list[i])*/
        _2 = (object)SEQ_PTR(_52warning_list_48718);
        _25252 = (object)*(((s1_ptr)_2)->base + _i_48838);
        EPuts(_errfile_48795, _25252); // DJP 
        _25252 = NOVALUE;

        /** error.e:146				if errfile = STDERR then*/
        if (_errfile_48795 != 2)
        goto LE; // [235] 303

        /** error.e:147					if remainder(i, 20) = 0 and batch_job = 0 and test_only = 0 then*/
        _25254 = (_i_48838 % 20);
        _25255 = (_25254 == 0);
        _25254 = NOVALUE;
        if (_25255 == 0) {
            _25256 = 0;
            goto LF; // [249] 263
        }
        _25257 = (_39batch_job_16828 == 0);
        _25256 = (_25257 != 0);
LF: 
        if (_25256 == 0) {
            goto L10; // [263] 302
        }
        _25259 = (_39test_only_16827 == 0);
        if (_25259 == 0)
        {
            DeRef(_25259);
            _25259 = NOVALUE;
            goto L10; // [274] 302
        }
        else{
            DeRef(_25259);
            _25259 = NOVALUE;
        }

        /** error.e:148						ShowMsg(errfile, 206)*/
        RefDS(_21928);
        _44ShowMsg(_errfile_48795, 206, _21928, 1);

        /** error.e:149						c = getc(0)*/
        if (0 != last_r_file_no) {
            last_r_file_ptr = which_file(0, EF_READ);
            last_r_file_no = 0;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _c_48794 = getc((FILE*)xstdin);
            }
            else{
                _c_48794 = getc(last_r_file_ptr);
            }
        }
        else{
            _c_48794 = getc(last_r_file_ptr);
        }

        /** error.e:150						if c = 'q' then*/
        if (_c_48794 != 113)
        goto L11; // [292] 301

        /** error.e:151							exit*/
        goto LD; // [298] 310
L11: 
L10: 
LE: 

        /** error.e:155			end for*/
        _i_48838 = _i_48838 + 1;
        goto LC; // [305] 218
LD: 
        ;
    }
LB: 

    /** error.e:158		return length(warning_list)*/
    if (IS_SEQUENCE(_52warning_list_48718)){
            _25262 = SEQ_PTR(_52warning_list_48718)->length;
    }
    else {
        _25262 = 1;
    }
    DeRef(_25233);
    _25233 = NOVALUE;
    DeRef(_25255);
    _25255 = NOVALUE;
    DeRef(_25248);
    _25248 = NOVALUE;
    DeRef(_25257);
    _25257 = NOVALUE;
    return _25262;
    ;
}


void _52ShowDefines(object _errfile_48860)
{
    object _c_48861 = NOVALUE;
    object _25276 = NOVALUE;
    object _25275 = NOVALUE;
    object _25273 = NOVALUE;
    object _25272 = NOVALUE;
    object _25269 = NOVALUE;
    object _25268 = NOVALUE;
    object _25267 = NOVALUE;
    object _25266 = NOVALUE;
    object _25265 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:164		if errfile=0 then*/
    if (_errfile_48860 != 0)
    goto L1; // [5] 19

    /** error.e:165			errfile = STDERR*/
    _errfile_48860 = 2;
L1: 

    /** error.e:168		puts(errfile, format("\n--- [1] ---\n", {GetMsgText(207,0)}))*/
    RefDS(_21928);
    _25265 = _44GetMsgText(207, 0, _21928);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _25265;
    _25266 = MAKE_SEQ(_1);
    _25265 = NOVALUE;
    RefDS(_25264);
    _25267 = _13format(_25264, _25266);
    _25266 = NOVALUE;
    EPuts(_errfile_48860, _25267); // DJP 
    DeRef(_25267);
    _25267 = NOVALUE;

    /** error.e:170		for i = 1 to length(OpDefines) do*/
    if (IS_SEQUENCE(_39OpDefines_16888)){
            _25268 = SEQ_PTR(_39OpDefines_16888)->length;
    }
    else {
        _25268 = 1;
    }
    {
        object _i_48872;
        _i_48872 = 1;
L2: 
        if (_i_48872 > _25268){
            goto L3; // [46] 98
        }

        /** error.e:171			if find(OpDefines[i], {"_PLAT_START", "_PLAT_STOP"}) = 0 then*/
        _2 = (object)SEQ_PTR(_39OpDefines_16888);
        _25269 = (object)*(((s1_ptr)_2)->base + _i_48872);
        RefDS(_25271);
        RefDS(_25270);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _25270;
        ((intptr_t *)_2)[2] = _25271;
        _25272 = MAKE_SEQ(_1);
        _25273 = find_from(_25269, _25272, 1);
        _25269 = NOVALUE;
        DeRefDS(_25272);
        _25272 = NOVALUE;
        if (_25273 != 0)
        goto L4; // [70] 91

        /** error.e:172				printf(errfile, "%s\n", {OpDefines[i]})*/
        _2 = (object)SEQ_PTR(_39OpDefines_16888);
        _25275 = (object)*(((s1_ptr)_2)->base + _i_48872);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25275);
        ((intptr_t*)_2)[1] = _25275;
        _25276 = MAKE_SEQ(_1);
        _25275 = NOVALUE;
        EPrintf(_errfile_48860, _25157, _25276);
        DeRefDS(_25276);
        _25276 = NOVALUE;
L4: 

        /** error.e:174		end for*/
        _i_48872 = _i_48872 + 1;
        goto L2; // [93] 53
L3: 
        ;
    }

    /** error.e:175		puts(errfile, "-------------------\n")*/
    EPuts(_errfile_48860, _25277); // DJP 

    /** error.e:177	end procedure*/
    return;
    ;
}


void _52Cleanup(object _status_48889)
{
    object _w_48890 = NOVALUE;
    object _show_error_48891 = NOVALUE;
    object _25295 = NOVALUE;
    object _25294 = NOVALUE;
    object _25293 = NOVALUE;
    object _25292 = NOVALUE;
    object _25291 = NOVALUE;
    object _25290 = NOVALUE;
    object _25289 = NOVALUE;
    object _25288 = NOVALUE;
    object _25287 = NOVALUE;
    object _25286 = NOVALUE;
    object _25284 = NOVALUE;
    object _25283 = NOVALUE;
    object _25282 = NOVALUE;
    object _25281 = NOVALUE;
    object _25280 = NOVALUE;
    object _25278 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:182		integer w, show_error = 0*/
    _show_error_48891 = 0;

    /** error.e:184		ifdef EU_EX then*/

    /** error.e:190		show_error = 1*/
    _show_error_48891 = 1;

    /** error.e:196		if object(src_file) = 0 then*/
    if( NOVALUE == _39src_file_16936 ){
        _25278 = 0;
    }
    else{
        _25278 = 1;
    }
    if (_25278 != 0)
    goto L1; // [20] 34

    /** error.e:197			src_file = -1*/
    _39src_file_16936 = -1;
    goto L2; // [31] 86
L1: 

    /** error.e:198		elsif src_file >= 0 and (src_file != repl_file or not repl) then*/
    _25280 = (_39src_file_16936 >= 0);
    if (_25280 == 0) {
        goto L3; // [42] 85
    }
    _25282 = (_39src_file_16936 != 5555);
    if (_25282 != 0) {
        DeRef(_25283);
        _25283 = 1;
        goto L4; // [54] 67
    }
    _25284 = (0 == 0);
    _25283 = (_25284 != 0);
L4: 
    if (_25283 == 0)
    {
        _25283 = NOVALUE;
        goto L3; // [68] 85
    }
    else{
        _25283 = NOVALUE;
    }

    /** error.e:199			close(src_file)*/
    EClose(_39src_file_16936);

    /** error.e:200			src_file = -1*/
    _39src_file_16936 = -1;
L3: 
L2: 

    /** error.e:203		w = ShowWarnings()*/
    _w_48890 = _52ShowWarnings();
    if (!IS_ATOM_INT(_w_48890)) {
        _1 = (object)(DBL_PTR(_w_48890)->dbl);
        DeRefDS(_w_48890);
        _w_48890 = _1;
    }

    /** error.e:204		if not TRANSLATE and (BIND or show_error) and (w or Errors) then*/
    _25286 = (_39TRANSLATE_16440 == 0);
    if (_25286 == 0) {
        _25287 = 0;
        goto L5; // [100] 118
    }
    if (_39BIND_16443 != 0) {
        _25288 = 1;
        goto L6; // [106] 114
    }
    _25288 = (_show_error_48891 != 0);
L6: 
    _25287 = (_25288 != 0);
L5: 
    if (_25287 == 0) {
        goto L7; // [118] 177
    }
    if (_w_48890 != 0) {
        DeRef(_25290);
        _25290 = 1;
        goto L8; // [122] 132
    }
    _25290 = (_52Errors_48706 != 0);
L8: 
    if (_25290 == 0)
    {
        _25290 = NOVALUE;
        goto L7; // [133] 177
    }
    else{
        _25290 = NOVALUE;
    }

    /** error.e:205			if not batch_job and not test_only then*/
    _25291 = (_39batch_job_16828 == 0);
    if (_25291 == 0) {
        goto L9; // [143] 176
    }
    _25293 = (_39test_only_16827 == 0);
    if (_25293 == 0)
    {
        DeRef(_25293);
        _25293 = NOVALUE;
        goto L9; // [153] 176
    }
    else{
        DeRef(_25293);
        _25293 = NOVALUE;
    }

    /** error.e:206				screen_output(STDERR, GetMsgText(208,0))*/
    RefDS(_21928);
    _25294 = _44GetMsgText(208, 0, _21928);
    _52screen_output(2, _25294);
    _25294 = NOVALUE;

    /** error.e:207				getc(0) -- wait*/
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25295 = getc((FILE*)xstdin);
        }
        else{
            _25295 = getc(last_r_file_ptr);
        }
    }
    else{
        _25295 = getc(last_r_file_ptr);
    }
L9: 
L7: 

    /** error.e:212		cleanup_open_includes()*/
    _63cleanup_open_includes();

    /** error.e:213		abort(status)*/
    UserCleanup(_status_48889);

    /** error.e:214	end procedure*/
    DeRef(_25291);
    _25291 = NOVALUE;
    DeRef(_25284);
    _25284 = NOVALUE;
    DeRef(_25286);
    _25286 = NOVALUE;
    DeRef(_25280);
    _25280 = NOVALUE;
    DeRef(_25282);
    _25282 = NOVALUE;
    return;
    ;
}


void _52OpenErrFile()
{
    object _25302 = NOVALUE;
    object _25301 = NOVALUE;
    object _25299 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:219	    if TempErrFile != -1 then*/
    if (_52TempErrFile_48707 == -1)
    goto L1; // [5] 19

    /** error.e:220			TempErrFile = open(TempErrName, "w")*/
    _52TempErrFile_48707 = EOpen(_52TempErrName_48708, _22064, 0);
L1: 

    /** error.e:223		if TempErrFile = -1 then*/
    if (_52TempErrFile_48707 != -1)
    goto L2; // [23] 64

    /** error.e:224			if length(TempErrName) > 0 then*/
    _25299 = 6;

    /** error.e:225				screen_output(STDERR, GetMsgText(209, 0, {TempErrName}))*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_52TempErrName_48708);
    ((intptr_t*)_2)[1] = _52TempErrName_48708;
    _25301 = MAKE_SEQ(_1);
    _25302 = _44GetMsgText(209, 0, _25301);
    _25301 = NOVALUE;
    _52screen_output(2, _25302);
    _25302 = NOVALUE;

    /** error.e:227			abort(1) -- with no clean up*/
    UserCleanup(1);
L2: 

    /** error.e:229	end procedure*/
    return;
    ;
}


void _52ShowErr(object _f_48945)
{
    object _msg_inlined_screen_output_at_41_48957 = NOVALUE;
    object _25309 = NOVALUE;
    object _25308 = NOVALUE;
    object _25307 = NOVALUE;
    object _25305 = NOVALUE;
    object _25303 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:234		if length(known_files) = 0 then*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _25303 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _25303 = 1;
    }
    if (_25303 != 0)
    goto L1; // [10] 20

    /** error.e:235			return*/
    return;
L1: 

    /** error.e:238		if ThisLine[1] = END_OF_FILE_CHAR then*/
    _2 = (object)SEQ_PTR(_52ThisLine_48710);
    _25305 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _25305, 26)){
        _25305 = NOVALUE;
        goto L2; // [30] 62
    }
    _25305 = NOVALUE;

    /** error.e:239			screen_output(f, GetMsgText(210,0))*/
    RefDS(_21928);
    _25307 = _44GetMsgText(210, 0, _21928);
    DeRef(_msg_inlined_screen_output_at_41_48957);
    _msg_inlined_screen_output_at_41_48957 = _25307;
    _25307 = NOVALUE;

    /** error.e:44		puts(f, msg)*/
    EPuts(_f_48945, _msg_inlined_screen_output_at_41_48957); // DJP 

    /** error.e:45	end procedure*/
    goto L3; // [54] 57
L3: 
    DeRef(_msg_inlined_screen_output_at_41_48957);
    _msg_inlined_screen_output_at_41_48957 = NOVALUE;
    goto L4; // [59] 79
L2: 

    /** error.e:241			screen_output(f, ThisLine)*/

    /** error.e:44		puts(f, msg)*/
    EPuts(_f_48945, _52ThisLine_48710); // DJP 

    /** error.e:45	end procedure*/
    goto L5; // [75] 78
L5: 
L4: 

    /** error.e:244		for i = 1 to bp-2 do -- bp-1 points to last character read*/
    _25308 = _52bp_48714 - 2;
    if ((object)((uintptr_t)_25308 +(uintptr_t) HIGH_BITS) >= 0){
        _25308 = NewDouble((eudouble)_25308);
    }
    {
        object _i_48961;
        _i_48961 = 1;
L6: 
        if (binary_op_a(GREATER, _i_48961, _25308)){
            goto L7; // [87] 141
        }

        /** error.e:245			if ThisLine[i] = '\t' then*/
        _2 = (object)SEQ_PTR(_52ThisLine_48710);
        if (!IS_ATOM_INT(_i_48961)){
            _25309 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_48961)->dbl));
        }
        else{
            _25309 = (object)*(((s1_ptr)_2)->base + _i_48961);
        }
        if (binary_op_a(NOTEQ, _25309, 9)){
            _25309 = NOVALUE;
            goto L8; // [102] 121
        }
        _25309 = NOVALUE;

        /** error.e:246				screen_output(f, "\t")*/

        /** error.e:44		puts(f, msg)*/
        EPuts(_f_48945, _23869); // DJP 

        /** error.e:45	end procedure*/
        goto L9; // [115] 134
        goto L9; // [118] 134
L8: 

        /** error.e:248				screen_output(f, " ")*/

        /** error.e:44		puts(f, msg)*/
        EPuts(_f_48945, _23320); // DJP 

        /** error.e:45	end procedure*/
        goto LA; // [130] 133
LA: 
L9: 

        /** error.e:250		end for*/
        _0 = _i_48961;
        if (IS_ATOM_INT(_i_48961)) {
            _i_48961 = _i_48961 + 1;
            if ((object)((uintptr_t)_i_48961 +(uintptr_t) HIGH_BITS) >= 0){
                _i_48961 = NewDouble((eudouble)_i_48961);
            }
        }
        else {
            _i_48961 = binary_op_a(PLUS, _i_48961, 1);
        }
        DeRef(_0);
        goto L6; // [136] 94
L7: 
        ;
        DeRef(_i_48961);
    }

    /** error.e:252		screen_output(f, "^\n\n")*/

    /** error.e:44		puts(f, msg)*/
    EPuts(_f_48945, _25311); // DJP 

    /** error.e:45	end procedure*/
    goto LB; // [150] 153
LB: 

    /** error.e:253	end procedure*/
    DeRef(_25308);
    _25308 = NOVALUE;
    return;
    ;
}


void _52CompileErr(object _msg_48973, object _args_48974, object _preproc_48975)
{
    object _errmsg_48976 = NOVALUE;
    object _25332 = NOVALUE;
    object _25328 = NOVALUE;
    object _25327 = NOVALUE;
    object _25326 = NOVALUE;
    object _25325 = NOVALUE;
    object _25324 = NOVALUE;
    object _25323 = NOVALUE;
    object _25321 = NOVALUE;
    object _25320 = NOVALUE;
    object _25318 = NOVALUE;
    object _25317 = NOVALUE;
    object _25316 = NOVALUE;
    object _25312 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:260		if integer(msg) then*/
    if (IS_ATOM_INT(_msg_48973))
    _25312 = 1;
    else if (IS_ATOM_DBL(_msg_48973))
    _25312 = IS_ATOM_INT(DoubleToInt(_msg_48973));
    else
    _25312 = 0;
    if (_25312 == 0)
    {
        _25312 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _25312 = NOVALUE;
    }

    /** error.e:261			msg = GetMsgText(msg)*/
    Ref(_msg_48973);
    RefDS(_21928);
    _0 = _msg_48973;
    _msg_48973 = _44GetMsgText(_msg_48973, 1, _21928);
    DeRefi(_0);
L1: 

    /** error.e:264		msg = format(msg, args)*/
    Ref(_msg_48973);
    Ref(_args_48974);
    _0 = _msg_48973;
    _msg_48973 = _13format(_msg_48973, _args_48974);
    DeRef(_0);

    /** error.e:266		Errors += 1*/
    _52Errors_48706 = _52Errors_48706 + 1;

    /** error.e:267		if not preproc and length(known_files) then*/
    _25316 = (_preproc_48975 == 0);
    if (_25316 == 0) {
        goto L2; // [40] 78
    }
    if (IS_SEQUENCE(_36known_files_15405)){
            _25318 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _25318 = 1;
    }
    if (_25318 == 0)
    {
        _25318 = NOVALUE;
        goto L2; // [50] 78
    }
    else{
        _25318 = NOVALUE;
    }

    /** error.e:268			errmsg = sprintf("%s:%d\n%s\n", {known_files[current_file_no],*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _25320 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25320);
    ((intptr_t*)_2)[1] = _25320;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    Ref(_msg_48973);
    ((intptr_t*)_2)[3] = _msg_48973;
    _25321 = MAKE_SEQ(_1);
    _25320 = NOVALUE;
    DeRef(_errmsg_48976);
    _errmsg_48976 = EPrintf(-9999999, _25319, _25321);
    DeRefDS(_25321);
    _25321 = NOVALUE;
    goto L3; // [75] 121
L2: 

    /** error.e:271			errmsg = msg*/
    Ref(_msg_48973);
    DeRef(_errmsg_48976);
    _errmsg_48976 = _msg_48973;

    /** error.e:272			if length(msg) > 0 and msg[$] != '\n' then*/
    if (IS_SEQUENCE(_msg_48973)){
            _25323 = SEQ_PTR(_msg_48973)->length;
    }
    else {
        _25323 = 1;
    }
    _25324 = (_25323 > 0);
    _25323 = NOVALUE;
    if (_25324 == 0) {
        goto L4; // [94] 120
    }
    if (IS_SEQUENCE(_msg_48973)){
            _25326 = SEQ_PTR(_msg_48973)->length;
    }
    else {
        _25326 = 1;
    }
    _2 = (object)SEQ_PTR(_msg_48973);
    _25327 = (object)*(((s1_ptr)_2)->base + _25326);
    if (IS_ATOM_INT(_25327)) {
        _25328 = (_25327 != 10);
    }
    else {
        _25328 = binary_op(NOTEQ, _25327, 10);
    }
    _25327 = NOVALUE;
    if (_25328 == 0) {
        DeRef(_25328);
        _25328 = NOVALUE;
        goto L4; // [110] 120
    }
    else {
        if (!IS_ATOM_INT(_25328) && DBL_PTR(_25328)->dbl == 0.0){
            DeRef(_25328);
            _25328 = NOVALUE;
            goto L4; // [110] 120
        }
        DeRef(_25328);
        _25328 = NOVALUE;
    }
    DeRef(_25328);
    _25328 = NOVALUE;

    /** error.e:273				errmsg &= '\n'*/
    Append(&_errmsg_48976, _errmsg_48976, 10);
L4: 
L3: 

    /** error.e:277		if not preproc then*/
    if (_preproc_48975 != 0)
    goto L5; // [123] 131

    /** error.e:279			OpenErrFile() -- exits if error filename is ""*/
    _52OpenErrFile();
L5: 

    /** error.e:281		screen_output(STDERR, errmsg)*/
    RefDS(_errmsg_48976);
    _52screen_output(2, _errmsg_48976);

    /** error.e:283		if not preproc then*/
    if (_preproc_48975 != 0)
    goto L6; // [143] 198

    /** error.e:284			ShowErr(STDERR)*/
    _52ShowErr(2);

    /** error.e:286			puts(TempErrFile, errmsg)*/
    EPuts(_52TempErrFile_48707, _errmsg_48976); // DJP 

    /** error.e:288			ShowErr(TempErrFile)*/
    _52ShowErr(_52TempErrFile_48707);

    /** error.e:290			ShowWarnings()*/
    _25332 = _52ShowWarnings();

    /** error.e:292			ShowDefines(TempErrFile)*/
    _52ShowDefines(_52TempErrFile_48707);

    /** error.e:294			close(TempErrFile)*/
    EClose(_52TempErrFile_48707);

    /** error.e:295			TempErrFile = -2*/
    _52TempErrFile_48707 = -2;

    /** error.e:296			ifdef CRASH_ON_ERROR then*/

    /** error.e:299			Cleanup(1)*/
    _52Cleanup(1);
L6: 

    /** error.e:302	end procedure*/
    DeRef(_msg_48973);
    DeRef(_args_48974);
    DeRef(_errmsg_48976);
    DeRef(_25316);
    _25316 = NOVALUE;
    DeRef(_25324);
    _25324 = NOVALUE;
    DeRef(_25332);
    _25332 = NOVALUE;
    return;
    ;
}


void _52InternalErr(object _msgno_49019, object _args_49020)
{
    object _msg_49021 = NOVALUE;
    object _25347 = NOVALUE;
    object _25346 = NOVALUE;
    object _25345 = NOVALUE;
    object _25344 = NOVALUE;
    object _25343 = NOVALUE;
    object _25342 = NOVALUE;
    object _25341 = NOVALUE;
    object _25340 = NOVALUE;
    object _25339 = NOVALUE;
    object _25338 = NOVALUE;
    object _25337 = NOVALUE;
    object _25334 = NOVALUE;
    object _0, _1, _2;
    

    /** error.e:316		if atom(args) then*/
    _25334 = 0;
    if (_25334 == 0)
    {
        _25334 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _25334 = NOVALUE;
    }

    /** error.e:317			args = {args}*/
    _0 = _args_49020;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_args_49020);
    ((intptr_t*)_2)[1] = _args_49020;
    _args_49020 = MAKE_SEQ(_1);
    DeRefDS(_0);
L1: 

    /** error.e:320		msg = GetMsgText(msgno, 1, args)*/
    Ref(_args_49020);
    _0 = _msg_49021;
    _msg_49021 = _44GetMsgText(_msgno_49019, 1, _args_49020);
    DeRef(_0);

    /** error.e:321		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2; // [32] 56
    }
    else{
    }

    /** error.e:322			screen_output(STDERR, GetMsgText(211, 1, {msg}))*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_msg_49021);
    ((intptr_t*)_2)[1] = _msg_49021;
    _25337 = MAKE_SEQ(_1);
    _25338 = _44GetMsgText(211, 1, _25337);
    _25337 = NOVALUE;
    _52screen_output(2, _25338);
    _25338 = NOVALUE;
    goto L3; // [53] 87
L2: 

    /** error.e:324			screen_output(STDERR, GetMsgText(212, 1, {known_files[current_file_no], line_number, msg}))*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _25339 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_25339);
    ((intptr_t*)_2)[1] = _25339;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    RefDS(_msg_49021);
    ((intptr_t*)_2)[3] = _msg_49021;
    _25340 = MAKE_SEQ(_1);
    _25339 = NOVALUE;
    _25341 = _44GetMsgText(212, 1, _25340);
    _25340 = NOVALUE;
    _52screen_output(2, _25341);
    _25341 = NOVALUE;
L3: 

    /** error.e:327		if not batch_job and not test_only then*/
    _25342 = (_39batch_job_16828 == 0);
    if (_25342 == 0) {
        goto L4; // [94] 127
    }
    _25344 = (_39test_only_16827 == 0);
    if (_25344 == 0)
    {
        DeRef(_25344);
        _25344 = NOVALUE;
        goto L4; // [104] 127
    }
    else{
        DeRef(_25344);
        _25344 = NOVALUE;
    }

    /** error.e:328			screen_output(STDERR, GetMsgText(208, 0))*/
    RefDS(_21928);
    _25345 = _44GetMsgText(208, 0, _21928);
    _52screen_output(2, _25345);
    _25345 = NOVALUE;

    /** error.e:329			getc(0)*/
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _25346 = getc((FILE*)xstdin);
        }
        else{
            _25346 = getc(last_r_file_ptr);
        }
    }
    else{
        _25346 = getc(last_r_file_ptr);
    }
L4: 

    /** error.e:333		machine_proc(67, GetMsgText(213))*/
    RefDS(_21928);
    _25347 = _44GetMsgText(213, 1, _21928);
    machine(67, _25347);
    DeRef(_25347);
    _25347 = NOVALUE;

    /** error.e:334	end procedure*/
    DeRef(_args_49020);
    DeRef(_msg_49021);
    DeRef(_25342);
    _25342 = NOVALUE;
    return;
    ;
}



// 0xCC8B99CD
