// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _25pretty_out(object _text_9123)
{
    object _4947 = NOVALUE;
    object _4945 = NOVALUE;
    object _4943 = NOVALUE;
    object _4942 = NOVALUE;
    object _0, _1, _2;
    

    /** pretty.e:19		pretty_line &= text*/
    if (IS_SEQUENCE(_25pretty_line_9120) && IS_ATOM(_text_9123)) {
        Ref(_text_9123);
        Append(&_25pretty_line_9120, _25pretty_line_9120, _text_9123);
    }
    else if (IS_ATOM(_25pretty_line_9120) && IS_SEQUENCE(_text_9123)) {
    }
    else {
        Concat((object_ptr)&_25pretty_line_9120, _25pretty_line_9120, _text_9123);
    }

    /** pretty.e:20		if equal(text, '\n') and pretty_printing then*/
    if (_text_9123 == 10)
    _4942 = 1;
    else if (IS_ATOM_INT(_text_9123) && IS_ATOM_INT(10))
    _4942 = 0;
    else
    _4942 = (compare(_text_9123, 10) == 0);
    if (_4942 == 0) {
        goto L1; // [15] 50
    }
    goto L1; // [22] 50

    /** pretty.e:21			puts(pretty_file, pretty_line)*/
    EPuts(_25pretty_file_9108, _25pretty_line_9120); // DJP 

    /** pretty.e:22			pretty_line = ""*/
    RefDS(_5);
    DeRefDS(_25pretty_line_9120);
    _25pretty_line_9120 = _5;

    /** pretty.e:23			pretty_line_count += 1*/
    _25pretty_line_count_9113 = _25pretty_line_count_9113 + 1;
L1: 

    /** pretty.e:25		if atom(text) then*/
    _4945 = IS_ATOM(_text_9123);
    if (_4945 == 0)
    {
        _4945 = NOVALUE;
        goto L2; // [55] 69
    }
    else{
        _4945 = NOVALUE;
    }

    /** pretty.e:26			pretty_chars += 1*/
    _25pretty_chars_9105 = _25pretty_chars_9105 + 1;
    goto L3; // [66] 81
L2: 

    /** pretty.e:28			pretty_chars += length(text)*/
    if (IS_SEQUENCE(_text_9123)){
            _4947 = SEQ_PTR(_text_9123)->length;
    }
    else {
        _4947 = 1;
    }
    _25pretty_chars_9105 = _25pretty_chars_9105 + _4947;
    _4947 = NOVALUE;
L3: 

    /** pretty.e:30	end procedure*/
    DeRef(_text_9123);
    return;
    ;
}


void _25cut_line(object _n_9137)
{
    object _4950 = NOVALUE;
    object _0, _1, _2;
    

    /** pretty.e:34		if not pretty_line_breaks then	*/
    if (_25pretty_line_breaks_9116 != 0)
    goto L1; // [7] 21

    /** pretty.e:35			pretty_chars = 0*/
    _25pretty_chars_9105 = 0;

    /** pretty.e:36			return*/
    return;
L1: 

    /** pretty.e:38		if pretty_chars + n > pretty_end_col then*/
    _4950 = _25pretty_chars_9105 + _n_9137;
    if ((object)((uintptr_t)_4950 + (uintptr_t)HIGH_BITS) >= 0){
        _4950 = NewDouble((eudouble)_4950);
    }
    if (binary_op_a(LESSEQ, _4950, _25pretty_end_col_9104)){
        DeRef(_4950);
        _4950 = NOVALUE;
        goto L2; // [31] 46
    }
    DeRef(_4950);
    _4950 = NOVALUE;

    /** pretty.e:39			pretty_out('\n')*/
    _25pretty_out(10);

    /** pretty.e:40			pretty_chars = 0*/
    _25pretty_chars_9105 = 0;
L2: 

    /** pretty.e:42	end procedure*/
    return;
    ;
}


void _25indent()
{
    object _4958 = NOVALUE;
    object _4957 = NOVALUE;
    object _4956 = NOVALUE;
    object _4955 = NOVALUE;
    object _0, _1, _2;
    

    /** pretty.e:46		if pretty_line_breaks = 0 then	*/
    if (_25pretty_line_breaks_9116 != 0)
    goto L1; // [5] 22

    /** pretty.e:47			pretty_chars = 0*/
    _25pretty_chars_9105 = 0;

    /** pretty.e:48			return*/
    return;
    goto L2; // [19] 85
L1: 

    /** pretty.e:49		elsif pretty_line_breaks = -1 then*/
    if (_25pretty_line_breaks_9116 != -1)
    goto L3; // [26] 38

    /** pretty.e:51			cut_line( 0 )*/
    _25cut_line(0);
    goto L2; // [35] 85
L3: 

    /** pretty.e:54			if pretty_chars > 0 then*/
    if (_25pretty_chars_9105 <= 0)
    goto L4; // [42] 57

    /** pretty.e:55				pretty_out('\n')*/
    _25pretty_out(10);

    /** pretty.e:56				pretty_chars = 0*/
    _25pretty_chars_9105 = 0;
L4: 

    /** pretty.e:58			pretty_out(repeat(' ', (pretty_start_col-1) + */
    _4955 = _25pretty_start_col_9106 - 1;
    if ((object)((uintptr_t)_4955 +(uintptr_t) HIGH_BITS) >= 0){
        _4955 = NewDouble((eudouble)_4955);
    }
    if (_25pretty_level_9107 == (short)_25pretty_level_9107 && _25pretty_indent_9110 <= INT15 && _25pretty_indent_9110 >= -INT15){
        _4956 = _25pretty_level_9107 * _25pretty_indent_9110;
    }
    else{
        _4956 = NewDouble(_25pretty_level_9107 * (eudouble)_25pretty_indent_9110);
    }
    if (IS_ATOM_INT(_4955) && IS_ATOM_INT(_4956)) {
        _4957 = _4955 + _4956;
    }
    else {
        if (IS_ATOM_INT(_4955)) {
            _4957 = NewDouble((eudouble)_4955 + DBL_PTR(_4956)->dbl);
        }
        else {
            if (IS_ATOM_INT(_4956)) {
                _4957 = NewDouble(DBL_PTR(_4955)->dbl + (eudouble)_4956);
            }
            else
            _4957 = NewDouble(DBL_PTR(_4955)->dbl + DBL_PTR(_4956)->dbl);
        }
    }
    DeRef(_4955);
    _4955 = NOVALUE;
    DeRef(_4956);
    _4956 = NOVALUE;
    _4958 = Repeat(32, _4957);
    DeRef(_4957);
    _4957 = NOVALUE;
    _25pretty_out(_4958);
    _4958 = NOVALUE;
L2: 

    /** pretty.e:62	end procedure*/
    return;
    ;
}


object _25esc_char(object _a_9158)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_a_9158)) {
        _1 = (object)(DBL_PTR(_a_9158)->dbl);
        DeRefDS(_a_9158);
        _a_9158 = _1;
    }

    /** pretty.e:66		switch a do*/
    _0 = _a_9158;
    switch ( _0 ){ 

        /** pretty.e:67			case'\t' then*/
        case 9:

        /** pretty.e:68				return `\t`*/
        RefDS(_4961);
        return _4961;
        goto L1; // [20] 81

        /** pretty.e:70			case'\n' then*/
        case 10:

        /** pretty.e:71				return `\n`*/
        RefDS(_4962);
        return _4962;
        goto L1; // [32] 81

        /** pretty.e:73			case'\r' then*/
        case 13:

        /** pretty.e:74				return `\r`*/
        RefDS(_4963);
        return _4963;
        goto L1; // [44] 81

        /** pretty.e:76			case'\\' then*/
        case 92:

        /** pretty.e:77				return `\\`*/
        RefDS(_1405);
        return _1405;
        goto L1; // [56] 81

        /** pretty.e:79			case'"' then*/
        case 34:

        /** pretty.e:80				return `\"`*/
        RefDS(_4964);
        return _4964;
        goto L1; // [68] 81

        /** pretty.e:82			case else*/
        default:

        /** pretty.e:83				return a*/
        return _a_9158;
    ;}L1: 
    ;
}


void _25rPrint(object _a_9173)
{
    object _sbuff_9174 = NOVALUE;
    object _multi_line_9175 = NOVALUE;
    object _all_ascii_9176 = NOVALUE;
    object _5020 = NOVALUE;
    object _5019 = NOVALUE;
    object _5018 = NOVALUE;
    object _5017 = NOVALUE;
    object _5013 = NOVALUE;
    object _5012 = NOVALUE;
    object _5011 = NOVALUE;
    object _5010 = NOVALUE;
    object _5008 = NOVALUE;
    object _5007 = NOVALUE;
    object _5005 = NOVALUE;
    object _5004 = NOVALUE;
    object _5002 = NOVALUE;
    object _5001 = NOVALUE;
    object _5000 = NOVALUE;
    object _4999 = NOVALUE;
    object _4998 = NOVALUE;
    object _4997 = NOVALUE;
    object _4996 = NOVALUE;
    object _4995 = NOVALUE;
    object _4994 = NOVALUE;
    object _4993 = NOVALUE;
    object _4992 = NOVALUE;
    object _4991 = NOVALUE;
    object _4990 = NOVALUE;
    object _4989 = NOVALUE;
    object _4988 = NOVALUE;
    object _4987 = NOVALUE;
    object _4986 = NOVALUE;
    object _4982 = NOVALUE;
    object _4981 = NOVALUE;
    object _4980 = NOVALUE;
    object _4979 = NOVALUE;
    object _4978 = NOVALUE;
    object _4977 = NOVALUE;
    object _4975 = NOVALUE;
    object _4974 = NOVALUE;
    object _4971 = NOVALUE;
    object _4970 = NOVALUE;
    object _4969 = NOVALUE;
    object _4966 = NOVALUE;
    object _4965 = NOVALUE;
    object _0, _1, _2;
    

    /** pretty.e:92		if atom(a) then*/
    _4965 = IS_ATOM(_a_9173);
    if (_4965 == 0)
    {
        _4965 = NOVALUE;
        goto L1; // [6] 176
    }
    else{
        _4965 = NOVALUE;
    }

    /** pretty.e:93			if integer(a) then*/
    if (IS_ATOM_INT(_a_9173))
    _4966 = 1;
    else if (IS_ATOM_DBL(_a_9173))
    _4966 = IS_ATOM_INT(DoubleToInt(_a_9173));
    else
    _4966 = 0;
    if (_4966 == 0)
    {
        _4966 = NOVALUE;
        goto L2; // [14] 157
    }
    else{
        _4966 = NOVALUE;
    }

    /** pretty.e:94				sbuff = sprintf(pretty_int_format, a)*/
    DeRef(_sbuff_9174);
    _sbuff_9174 = EPrintf(-9999999, _25pretty_int_format_9119, _a_9173);

    /** pretty.e:95				if pretty_ascii then */
    if (_25pretty_ascii_9109 == 0)
    {
        goto L3; // [29] 166
    }
    else{
    }

    /** pretty.e:96					if pretty_ascii >= 3 then */
    if (_25pretty_ascii_9109 < 3)
    goto L4; // [36] 103

    /** pretty.e:98						if (a >= pretty_ascii_min and a <= pretty_ascii_max) then*/
    if (IS_ATOM_INT(_a_9173)) {
        _4969 = (_a_9173 >= _25pretty_ascii_min_9111);
    }
    else {
        _4969 = binary_op(GREATEREQ, _a_9173, _25pretty_ascii_min_9111);
    }
    if (IS_ATOM_INT(_4969)) {
        if (_4969 == 0) {
            _4970 = 0;
            goto L5; // [48] 62
        }
    }
    else {
        if (DBL_PTR(_4969)->dbl == 0.0) {
            _4970 = 0;
            goto L5; // [48] 62
        }
    }
    if (IS_ATOM_INT(_a_9173)) {
        _4971 = (_a_9173 <= _25pretty_ascii_max_9112);
    }
    else {
        _4971 = binary_op(LESSEQ, _a_9173, _25pretty_ascii_max_9112);
    }
    DeRef(_4970);
    if (IS_ATOM_INT(_4971))
    _4970 = (_4971 != 0);
    else
    _4970 = DBL_PTR(_4971)->dbl != 0.0;
L5: 
    if (_4970 == 0)
    {
        _4970 = NOVALUE;
        goto L6; // [62] 76
    }
    else{
        _4970 = NOVALUE;
    }

    /** pretty.e:99							sbuff = '\'' & a & '\''  -- display char only*/
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_9173;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_9174, concat_list, 3);
    }
    goto L3; // [73] 166
L6: 

    /** pretty.e:101						elsif find(a, "\t\n\r\\") then*/
    _4974 = find_from(_a_9173, _4973, 1);
    if (_4974 == 0)
    {
        _4974 = NOVALUE;
        goto L3; // [83] 166
    }
    else{
        _4974 = NOVALUE;
    }

    /** pretty.e:102							sbuff = '\'' & esc_char(a) & '\''  -- display char only*/
    Ref(_a_9173);
    _4975 = _25esc_char(_a_9173);
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _4975;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_sbuff_9174, concat_list, 3);
    }
    DeRef(_4975);
    _4975 = NOVALUE;
    goto L3; // [100] 166
L4: 

    /** pretty.e:107						if (a >= pretty_ascii_min and a <= pretty_ascii_max) and pretty_ascii < 2 then*/
    if (IS_ATOM_INT(_a_9173)) {
        _4977 = (_a_9173 >= _25pretty_ascii_min_9111);
    }
    else {
        _4977 = binary_op(GREATEREQ, _a_9173, _25pretty_ascii_min_9111);
    }
    if (IS_ATOM_INT(_4977)) {
        if (_4977 == 0) {
            DeRef(_4978);
            _4978 = 0;
            goto L7; // [111] 125
        }
    }
    else {
        if (DBL_PTR(_4977)->dbl == 0.0) {
            DeRef(_4978);
            _4978 = 0;
            goto L7; // [111] 125
        }
    }
    if (IS_ATOM_INT(_a_9173)) {
        _4979 = (_a_9173 <= _25pretty_ascii_max_9112);
    }
    else {
        _4979 = binary_op(LESSEQ, _a_9173, _25pretty_ascii_max_9112);
    }
    DeRef(_4978);
    if (IS_ATOM_INT(_4979))
    _4978 = (_4979 != 0);
    else
    _4978 = DBL_PTR(_4979)->dbl != 0.0;
L7: 
    if (_4978 == 0) {
        goto L3; // [125] 166
    }
    _4981 = (_25pretty_ascii_9109 < 2);
    if (_4981 == 0)
    {
        DeRef(_4981);
        _4981 = NOVALUE;
        goto L3; // [136] 166
    }
    else{
        DeRef(_4981);
        _4981 = NOVALUE;
    }

    /** pretty.e:108							sbuff &= '\'' & a & '\'' -- add to numeric display*/
    {
        object concat_list[3];

        concat_list[0] = 39;
        concat_list[1] = _a_9173;
        concat_list[2] = 39;
        Concat_N((object_ptr)&_4982, concat_list, 3);
    }
    Concat((object_ptr)&_sbuff_9174, _sbuff_9174, _4982);
    DeRefDS(_4982);
    _4982 = NOVALUE;
    goto L3; // [154] 166
L2: 

    /** pretty.e:113				sbuff = sprintf(pretty_fp_format, a)*/
    DeRef(_sbuff_9174);
    _sbuff_9174 = EPrintf(-9999999, _25pretty_fp_format_9118, _a_9173);
L3: 

    /** pretty.e:115			pretty_out(sbuff)*/
    RefDS(_sbuff_9174);
    _25pretty_out(_sbuff_9174);
    goto L8; // [173] 535
L1: 

    /** pretty.e:119			cut_line(1)*/
    _25cut_line(1);

    /** pretty.e:120			multi_line = 0*/
    _multi_line_9175 = 0;

    /** pretty.e:121			all_ascii = pretty_ascii > 1*/
    _all_ascii_9176 = (_25pretty_ascii_9109 > 1);

    /** pretty.e:122			for i = 1 to length(a) do*/
    if (IS_SEQUENCE(_a_9173)){
            _4986 = SEQ_PTR(_a_9173)->length;
    }
    else {
        _4986 = 1;
    }
    {
        object _i_9209;
        _i_9209 = 1;
L9: 
        if (_i_9209 > _4986){
            goto LA; // [199] 345
        }

        /** pretty.e:123				if sequence(a[i]) and length(a[i]) > 0 then*/
        _2 = (object)SEQ_PTR(_a_9173);
        _4987 = (object)*(((s1_ptr)_2)->base + _i_9209);
        _4988 = IS_SEQUENCE(_4987);
        _4987 = NOVALUE;
        if (_4988 == 0) {
            goto LB; // [215] 249
        }
        _2 = (object)SEQ_PTR(_a_9173);
        _4990 = (object)*(((s1_ptr)_2)->base + _i_9209);
        if (IS_SEQUENCE(_4990)){
                _4991 = SEQ_PTR(_4990)->length;
        }
        else {
            _4991 = 1;
        }
        _4990 = NOVALUE;
        _4992 = (_4991 > 0);
        _4991 = NOVALUE;
        if (_4992 == 0)
        {
            DeRef(_4992);
            _4992 = NOVALUE;
            goto LB; // [231] 249
        }
        else{
            DeRef(_4992);
            _4992 = NOVALUE;
        }

        /** pretty.e:124					multi_line = 1*/
        _multi_line_9175 = 1;

        /** pretty.e:125					all_ascii = 0*/
        _all_ascii_9176 = 0;

        /** pretty.e:126					exit*/
        goto LA; // [246] 345
LB: 

        /** pretty.e:128				if not integer(a[i]) or*/
        _2 = (object)SEQ_PTR(_a_9173);
        _4993 = (object)*(((s1_ptr)_2)->base + _i_9209);
        if (IS_ATOM_INT(_4993))
        _4994 = 1;
        else if (IS_ATOM_DBL(_4993))
        _4994 = IS_ATOM_INT(DoubleToInt(_4993));
        else
        _4994 = 0;
        _4993 = NOVALUE;
        _4995 = (_4994 == 0);
        _4994 = NOVALUE;
        if (_4995 != 0) {
            _4996 = 1;
            goto LC; // [261] 313
        }
        _2 = (object)SEQ_PTR(_a_9173);
        _4997 = (object)*(((s1_ptr)_2)->base + _i_9209);
        if (IS_ATOM_INT(_4997)) {
            _4998 = (_4997 < _25pretty_ascii_min_9111);
        }
        else {
            _4998 = binary_op(LESS, _4997, _25pretty_ascii_min_9111);
        }
        _4997 = NOVALUE;
        if (IS_ATOM_INT(_4998)) {
            if (_4998 == 0) {
                DeRef(_4999);
                _4999 = 0;
                goto LD; // [275] 309
            }
        }
        else {
            if (DBL_PTR(_4998)->dbl == 0.0) {
                DeRef(_4999);
                _4999 = 0;
                goto LD; // [275] 309
            }
        }
        _5000 = (_25pretty_ascii_9109 < 2);
        if (_5000 != 0) {
            _5001 = 1;
            goto LE; // [285] 305
        }
        _2 = (object)SEQ_PTR(_a_9173);
        _5002 = (object)*(((s1_ptr)_2)->base + _i_9209);
        _5004 = find_from(_5002, _5003, 1);
        _5002 = NOVALUE;
        _5005 = (_5004 == 0);
        _5004 = NOVALUE;
        _5001 = (_5005 != 0);
LE: 
        DeRef(_4999);
        _4999 = (_5001 != 0);
LD: 
        _4996 = (_4999 != 0);
LC: 
        if (_4996 != 0) {
            goto LF; // [313] 332
        }
        _2 = (object)SEQ_PTR(_a_9173);
        _5007 = (object)*(((s1_ptr)_2)->base + _i_9209);
        if (IS_ATOM_INT(_5007)) {
            _5008 = (_5007 > _25pretty_ascii_max_9112);
        }
        else {
            _5008 = binary_op(GREATER, _5007, _25pretty_ascii_max_9112);
        }
        _5007 = NOVALUE;
        if (_5008 == 0) {
            DeRef(_5008);
            _5008 = NOVALUE;
            goto L10; // [328] 338
        }
        else {
            if (!IS_ATOM_INT(_5008) && DBL_PTR(_5008)->dbl == 0.0){
                DeRef(_5008);
                _5008 = NOVALUE;
                goto L10; // [328] 338
            }
            DeRef(_5008);
            _5008 = NOVALUE;
        }
        DeRef(_5008);
        _5008 = NOVALUE;
LF: 

        /** pretty.e:132					all_ascii = 0*/
        _all_ascii_9176 = 0;
L10: 

        /** pretty.e:134			end for*/
        _i_9209 = _i_9209 + 1;
        goto L9; // [340] 206
LA: 
        ;
    }

    /** pretty.e:136			if all_ascii then*/
    if (_all_ascii_9176 == 0)
    {
        goto L11; // [347] 358
    }
    else{
    }

    /** pretty.e:137				pretty_out('\"')*/
    _25pretty_out(34);
    goto L12; // [355] 364
L11: 

    /** pretty.e:139				pretty_out('{')*/
    _25pretty_out(123);
L12: 

    /** pretty.e:141			pretty_level += 1*/
    _25pretty_level_9107 = _25pretty_level_9107 + 1;

    /** pretty.e:142			for i = 1 to length(a) do*/
    if (IS_SEQUENCE(_a_9173)){
            _5010 = SEQ_PTR(_a_9173)->length;
    }
    else {
        _5010 = 1;
    }
    {
        object _i_9239;
        _i_9239 = 1;
L13: 
        if (_i_9239 > _5010){
            goto L14; // [377] 497
        }

        /** pretty.e:143				if multi_line then*/
        if (_multi_line_9175 == 0)
        {
            goto L15; // [386] 394
        }
        else{
        }

        /** pretty.e:144					indent()*/
        _25indent();
L15: 

        /** pretty.e:146				if all_ascii then*/
        if (_all_ascii_9176 == 0)
        {
            goto L16; // [396] 415
        }
        else{
        }

        /** pretty.e:147					pretty_out(esc_char(a[i]))*/
        _2 = (object)SEQ_PTR(_a_9173);
        _5011 = (object)*(((s1_ptr)_2)->base + _i_9239);
        Ref(_5011);
        _5012 = _25esc_char(_5011);
        _5011 = NOVALUE;
        _25pretty_out(_5012);
        _5012 = NOVALUE;
        goto L17; // [412] 425
L16: 

        /** pretty.e:149					rPrint(a[i])*/
        _2 = (object)SEQ_PTR(_a_9173);
        _5013 = (object)*(((s1_ptr)_2)->base + _i_9239);
        Ref(_5013);
        _25rPrint(_5013);
        _5013 = NOVALUE;
L17: 

        /** pretty.e:151				if pretty_line_count >= pretty_line_max then*/
        if (_25pretty_line_count_9113 < _25pretty_line_max_9114)
        goto L18; // [431] 459

        /** pretty.e:152					if not pretty_dots then*/
        if (_25pretty_dots_9115 != 0)
        goto L19; // [439] 448

        /** pretty.e:153						pretty_out(" ...")*/
        RefDS(_5016);
        _25pretty_out(_5016);
L19: 

        /** pretty.e:155					pretty_dots = 1*/
        _25pretty_dots_9115 = 1;

        /** pretty.e:156					return*/
        DeRef(_a_9173);
        DeRef(_sbuff_9174);
        DeRef(_4971);
        _4971 = NOVALUE;
        _4990 = NOVALUE;
        DeRef(_4977);
        _4977 = NOVALUE;
        DeRef(_4979);
        _4979 = NOVALUE;
        DeRef(_5000);
        _5000 = NOVALUE;
        DeRef(_4969);
        _4969 = NOVALUE;
        DeRef(_4995);
        _4995 = NOVALUE;
        DeRef(_5005);
        _5005 = NOVALUE;
        DeRef(_4998);
        _4998 = NOVALUE;
        return;
L18: 

        /** pretty.e:158				if i != length(a) and not all_ascii then*/
        if (IS_SEQUENCE(_a_9173)){
                _5017 = SEQ_PTR(_a_9173)->length;
        }
        else {
            _5017 = 1;
        }
        _5018 = (_i_9239 != _5017);
        _5017 = NOVALUE;
        if (_5018 == 0) {
            goto L1A; // [468] 490
        }
        _5020 = (_all_ascii_9176 == 0);
        if (_5020 == 0)
        {
            DeRef(_5020);
            _5020 = NOVALUE;
            goto L1A; // [476] 490
        }
        else{
            DeRef(_5020);
            _5020 = NOVALUE;
        }

        /** pretty.e:159					pretty_out(',')*/
        _25pretty_out(44);

        /** pretty.e:160					cut_line(6)*/
        _25cut_line(6);
L1A: 

        /** pretty.e:162			end for*/
        _i_9239 = _i_9239 + 1;
        goto L13; // [492] 384
L14: 
        ;
    }

    /** pretty.e:163			pretty_level -= 1*/
    _25pretty_level_9107 = _25pretty_level_9107 - 1;

    /** pretty.e:164			if multi_line then*/
    if (_multi_line_9175 == 0)
    {
        goto L1B; // [507] 515
    }
    else{
    }

    /** pretty.e:165				indent()*/
    _25indent();
L1B: 

    /** pretty.e:167			if all_ascii then*/
    if (_all_ascii_9176 == 0)
    {
        goto L1C; // [517] 528
    }
    else{
    }

    /** pretty.e:168				pretty_out('\"')*/
    _25pretty_out(34);
    goto L1D; // [525] 534
L1C: 

    /** pretty.e:170				pretty_out('}')*/
    _25pretty_out(125);
L1D: 
L8: 

    /** pretty.e:173	end procedure*/
    DeRef(_a_9173);
    DeRef(_sbuff_9174);
    DeRef(_4971);
    _4971 = NOVALUE;
    _4990 = NOVALUE;
    DeRef(_4977);
    _4977 = NOVALUE;
    DeRef(_4979);
    _4979 = NOVALUE;
    DeRef(_5000);
    _5000 = NOVALUE;
    DeRef(_5018);
    _5018 = NOVALUE;
    DeRef(_4969);
    _4969 = NOVALUE;
    DeRef(_4995);
    _4995 = NOVALUE;
    DeRef(_5005);
    _5005 = NOVALUE;
    DeRef(_4998);
    _4998 = NOVALUE;
    return;
    ;
}


void _25pretty(object _x_9278, object _options_9279)
{
    object _5027 = NOVALUE;
    object _5026 = NOVALUE;
    object _0, _1, _2;
    

    /** pretty.e:197		if length(options) < length( PRETTY_DEFAULT ) then*/
    _5026 = 10;
    _5027 = 10;

    /** pretty.e:202		pretty_ascii = options[DISPLAY_ASCII] */
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_ascii_9109 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_25pretty_ascii_9109))
    _25pretty_ascii_9109 = (object)DBL_PTR(_25pretty_ascii_9109)->dbl;

    /** pretty.e:203		pretty_indent = options[INDENT]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_indent_9110 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_25pretty_indent_9110))
    _25pretty_indent_9110 = (object)DBL_PTR(_25pretty_indent_9110)->dbl;

    /** pretty.e:204		pretty_start_col = options[START_COLUMN]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_start_col_9106 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_25pretty_start_col_9106))
    _25pretty_start_col_9106 = (object)DBL_PTR(_25pretty_start_col_9106)->dbl;

    /** pretty.e:205		pretty_end_col = options[WRAP]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_end_col_9104 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_25pretty_end_col_9104))
    _25pretty_end_col_9104 = (object)DBL_PTR(_25pretty_end_col_9104)->dbl;

    /** pretty.e:206		pretty_int_format = options[INT_FORMAT]*/
    DeRef(_25pretty_int_format_9119);
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_int_format_9119 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_25pretty_int_format_9119);

    /** pretty.e:207		pretty_fp_format = options[FP_FORMAT]*/
    DeRef(_25pretty_fp_format_9118);
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_fp_format_9118 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_25pretty_fp_format_9118);

    /** pretty.e:208		pretty_ascii_min = options[MIN_ASCII]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_ascii_min_9111 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_25pretty_ascii_min_9111))
    _25pretty_ascii_min_9111 = (object)DBL_PTR(_25pretty_ascii_min_9111)->dbl;

    /** pretty.e:209		pretty_ascii_max = options[MAX_ASCII]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_ascii_max_9112 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_25pretty_ascii_max_9112))
    _25pretty_ascii_max_9112 = (object)DBL_PTR(_25pretty_ascii_max_9112)->dbl;

    /** pretty.e:210		pretty_line_max = options[MAX_LINES]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_line_max_9114 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_25pretty_line_max_9114))
    _25pretty_line_max_9114 = (object)DBL_PTR(_25pretty_line_max_9114)->dbl;

    /** pretty.e:211		pretty_line_breaks = options[LINE_BREAKS]*/
    _2 = (object)SEQ_PTR(_options_9279);
    _25pretty_line_breaks_9116 = (object)*(((s1_ptr)_2)->base + 10);
    if (!IS_ATOM_INT(_25pretty_line_breaks_9116))
    _25pretty_line_breaks_9116 = (object)DBL_PTR(_25pretty_line_breaks_9116)->dbl;

    /** pretty.e:213		pretty_chars = pretty_start_col*/
    _25pretty_chars_9105 = _25pretty_start_col_9106;

    /** pretty.e:215		pretty_level = 0 */
    _25pretty_level_9107 = 0;

    /** pretty.e:216		pretty_line = ""*/
    RefDS(_5);
    DeRef(_25pretty_line_9120);
    _25pretty_line_9120 = _5;

    /** pretty.e:217		pretty_line_count = 0*/
    _25pretty_line_count_9113 = 0;

    /** pretty.e:218		pretty_dots = 0*/
    _25pretty_dots_9115 = 0;

    /** pretty.e:219		rPrint(x)*/
    Ref(_x_9278);
    _25rPrint(_x_9278);

    /** pretty.e:220	end procedure*/
    DeRef(_x_9278);
    DeRefDS(_options_9279);
    return;
    ;
}



// 0x8CA22CC2
