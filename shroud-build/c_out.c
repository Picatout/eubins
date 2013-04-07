// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _57c_putc(object _c_46115)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_c_46115)) {
        _1 = (object)(DBL_PTR(_c_46115)->dbl);
        DeRefDS(_c_46115);
        _c_46115 = _1;
    }

    /** c_out.e:62		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [7] 23
    }
    else{
    }

    /** c_out.e:63			puts(c_code, c)*/
    EPuts(_57c_code_46105, _c_46115); // DJP 

    /** c_out.e:64			update_checksum( c )*/
    _58update_checksum(_c_46115);
L1: 

    /** c_out.e:66	end procedure*/
    return;
    ;
}


void _57c_hputs(object _c_source_46120)
{
    object _0, _1, _2;
    

    /** c_out.e:71		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [7] 18
    }
    else{
    }

    /** c_out.e:72			puts(c_h, c_source)    */
    EPuts(_57c_h_46106, _c_source_46120); // DJP 
L1: 

    /** c_out.e:74	end procedure*/
    DeRefDS(_c_source_46120);
    return;
    ;
}


void _57c_puts(object _c_source_46124)
{
    object _0, _1, _2;
    

    /** c_out.e:79		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [7] 23
    }
    else{
    }

    /** c_out.e:80			puts(c_code, c_source)*/
    EPuts(_57c_code_46105, _c_source_46124); // DJP 

    /** c_out.e:81			update_checksum( c_source )*/
    RefDS(_c_source_46124);
    _58update_checksum(_c_source_46124);
L1: 

    /** c_out.e:83	end procedure*/
    DeRefDS(_c_source_46124);
    return;
    ;
}


void _57c_hprintf(object _format_46129, object _value_46130)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_value_46130)) {
        _1 = (object)(DBL_PTR(_value_46130)->dbl);
        DeRefDS(_value_46130);
        _value_46130 = _1;
    }

    /** c_out.e:88		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }

    /** c_out.e:89			printf(c_h, format, value)*/
    EPrintf(_57c_h_46106, _format_46129, _value_46130);
L1: 

    /** c_out.e:91	end procedure*/
    DeRefDSi(_format_46129);
    return;
    ;
}


void _57c_printf(object _format_46134, object _value_46135)
{
    object _text_46137 = NOVALUE;
    object _0, _1, _2;
    

    /** c_out.e:96		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [7] 29
    }
    else{
    }

    /** c_out.e:97			sequence text = sprintf( format, value )*/
    DeRefi(_text_46137);
    _text_46137 = EPrintf(-9999999, _format_46134, _value_46135);

    /** c_out.e:98			puts(c_code, text)*/
    EPuts(_57c_code_46105, _text_46137); // DJP 

    /** c_out.e:99			update_checksum( text )*/
    RefDS(_text_46137);
    _58update_checksum(_text_46137);
L1: 
    DeRefi(_text_46137);
    _text_46137 = NOVALUE;

    /** c_out.e:101	end procedure*/
    DeRefDSi(_format_46134);
    DeRef(_value_46135);
    return;
    ;
}


void _57c_printf8(object _value_46148)
{
    object _buff_46149 = NOVALUE;
    object _neg_46150 = NOVALUE;
    object _p_46151 = NOVALUE;
    object _24165 = NOVALUE;
    object _24164 = NOVALUE;
    object _24162 = NOVALUE;
    object _24161 = NOVALUE;
    object _24159 = NOVALUE;
    object _24158 = NOVALUE;
    object _24156 = NOVALUE;
    object _24155 = NOVALUE;
    object _24153 = NOVALUE;
    object _24151 = NOVALUE;
    object _24149 = NOVALUE;
    object _0, _1, _2;
    

    /** c_out.e:115		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [5] 182
    }
    else{
    }

    /** c_out.e:116			neg = 0*/
    _neg_46150 = 0;

    /** c_out.e:117			buff = sprintf("%.20eL", value)*/
    DeRef(_buff_46149);
    _buff_46149 = EPrintf(-9999999, _24147, _value_46148);

    /** c_out.e:118			if length(buff) < 10 then*/
    if (IS_SEQUENCE(_buff_46149)){
            _24149 = SEQ_PTR(_buff_46149)->length;
    }
    else {
        _24149 = 1;
    }
    if (_24149 >= 10)
    goto L2; // [24] 174

    /** c_out.e:120				p = 1*/
    _p_46151 = 1;

    /** c_out.e:121				while p <= length(buff) do*/
L3: 
    if (IS_SEQUENCE(_buff_46149)){
            _24151 = SEQ_PTR(_buff_46149)->length;
    }
    else {
        _24151 = 1;
    }
    if (_p_46151 > _24151)
    goto L4; // [41] 173

    /** c_out.e:122					if buff[p] = '-' then*/
    _2 = (object)SEQ_PTR(_buff_46149);
    _24153 = (object)*(((s1_ptr)_2)->base + _p_46151);
    if (binary_op_a(NOTEQ, _24153, 45)){
        _24153 = NOVALUE;
        goto L5; // [51] 63
    }
    _24153 = NOVALUE;

    /** c_out.e:123						neg = 1*/
    _neg_46150 = 1;
    goto L6; // [60] 162
L5: 

    /** c_out.e:125					elsif buff[p] = 'i' or buff[p] = 'I' then*/
    _2 = (object)SEQ_PTR(_buff_46149);
    _24155 = (object)*(((s1_ptr)_2)->base + _p_46151);
    if (IS_ATOM_INT(_24155)) {
        _24156 = (_24155 == 105);
    }
    else {
        _24156 = binary_op(EQUALS, _24155, 105);
    }
    _24155 = NOVALUE;
    if (IS_ATOM_INT(_24156)) {
        if (_24156 != 0) {
            goto L7; // [73] 90
        }
    }
    else {
        if (DBL_PTR(_24156)->dbl != 0.0) {
            goto L7; // [73] 90
        }
    }
    _2 = (object)SEQ_PTR(_buff_46149);
    _24158 = (object)*(((s1_ptr)_2)->base + _p_46151);
    if (IS_ATOM_INT(_24158)) {
        _24159 = (_24158 == 73);
    }
    else {
        _24159 = binary_op(EQUALS, _24158, 73);
    }
    _24158 = NOVALUE;
    if (_24159 == 0) {
        DeRef(_24159);
        _24159 = NOVALUE;
        goto L8; // [86] 114
    }
    else {
        if (!IS_ATOM_INT(_24159) && DBL_PTR(_24159)->dbl == 0.0){
            DeRef(_24159);
            _24159 = NOVALUE;
            goto L8; // [86] 114
        }
        DeRef(_24159);
        _24159 = NOVALUE;
    }
    DeRef(_24159);
    _24159 = NOVALUE;
L7: 

    /** c_out.e:127						buff = CREATE_INF*/
    RefDS(_57CREATE_INF_46140);
    DeRef(_buff_46149);
    _buff_46149 = _57CREATE_INF_46140;

    /** c_out.e:128						if neg then*/
    if (_neg_46150 == 0)
    {
        goto L4; // [97] 173
    }
    else{
    }

    /** c_out.e:129							buff = prepend(buff, '-')*/
    Prepend(&_buff_46149, _buff_46149, 45);

    /** c_out.e:131						exit*/
    goto L4; // [109] 173
    goto L6; // [111] 162
L8: 

    /** c_out.e:133					elsif buff[p] = 'n' or buff[p] = 'N' then*/
    _2 = (object)SEQ_PTR(_buff_46149);
    _24161 = (object)*(((s1_ptr)_2)->base + _p_46151);
    if (IS_ATOM_INT(_24161)) {
        _24162 = (_24161 == 110);
    }
    else {
        _24162 = binary_op(EQUALS, _24161, 110);
    }
    _24161 = NOVALUE;
    if (IS_ATOM_INT(_24162)) {
        if (_24162 != 0) {
            goto L9; // [124] 141
        }
    }
    else {
        if (DBL_PTR(_24162)->dbl != 0.0) {
            goto L9; // [124] 141
        }
    }
    _2 = (object)SEQ_PTR(_buff_46149);
    _24164 = (object)*(((s1_ptr)_2)->base + _p_46151);
    if (IS_ATOM_INT(_24164)) {
        _24165 = (_24164 == 78);
    }
    else {
        _24165 = binary_op(EQUALS, _24164, 78);
    }
    _24164 = NOVALUE;
    if (_24165 == 0) {
        DeRef(_24165);
        _24165 = NOVALUE;
        goto LA; // [137] 161
    }
    else {
        if (!IS_ATOM_INT(_24165) && DBL_PTR(_24165)->dbl == 0.0){
            DeRef(_24165);
            _24165 = NOVALUE;
            goto LA; // [137] 161
        }
        DeRef(_24165);
        _24165 = NOVALUE;
    }
    DeRef(_24165);
    _24165 = NOVALUE;
L9: 

    /** c_out.e:135						ifdef UNIX then*/

    /** c_out.e:136							buff = CREATE_NAN1*/
    RefDS(_57CREATE_NAN1_46142);
    DeRef(_buff_46149);
    _buff_46149 = _57CREATE_NAN1_46142;

    /** c_out.e:137							if neg then*/
    if (_neg_46150 == 0)
    {
        goto LB; // [150] 160
    }
    else{
    }

    /** c_out.e:138								buff = prepend(buff, '-')*/
    Prepend(&_buff_46149, _buff_46149, 45);
LB: 
LA: 
L6: 

    /** c_out.e:156					p += 1*/
    _p_46151 = _p_46151 + 1;

    /** c_out.e:157				end while*/
    goto L3; // [170] 38
L4: 
L2: 

    /** c_out.e:159			puts(c_code, buff)*/
    EPuts(_57c_code_46105, _buff_46149); // DJP 
L1: 

    /** c_out.e:161	end procedure*/
    DeRef(_value_46148);
    DeRef(_buff_46149);
    DeRef(_24156);
    _24156 = NOVALUE;
    DeRef(_24162);
    _24162 = NOVALUE;
    return;
    ;
}


void _57adjust_indent_before(object _stmt_46187)
{
    object _i_46188 = NOVALUE;
    object _lb_46190 = NOVALUE;
    object _rb_46191 = NOVALUE;
    object _24180 = NOVALUE;
    object _24178 = NOVALUE;
    object _24176 = NOVALUE;
    object _24170 = NOVALUE;
    object _24169 = NOVALUE;
    object _0, _1, _2;
    

    /** c_out.e:177		lb = FALSE*/
    _lb_46190 = _9FALSE_442;

    /** c_out.e:178		rb = FALSE*/
    _rb_46191 = _9FALSE_442;

    /** c_out.e:180		for p = 1 to length(stmt) do*/
    if (IS_SEQUENCE(_stmt_46187)){
            _24169 = SEQ_PTR(_stmt_46187)->length;
    }
    else {
        _24169 = 1;
    }
    {
        object _p_46195;
        _p_46195 = 1;
L1: 
        if (_p_46195 > _24169){
            goto L2; // [22] 102
        }

        /** c_out.e:181			switch stmt[p] do*/
        _2 = (object)SEQ_PTR(_stmt_46187);
        _24170 = (object)*(((s1_ptr)_2)->base + _p_46195);
        if (IS_SEQUENCE(_24170) ){
            goto L3; // [35] 95
        }
        if(!IS_ATOM_INT(_24170)){
            if( (DBL_PTR(_24170)->dbl != (eudouble) ((object) DBL_PTR(_24170)->dbl) ) ){
                goto L3; // [35] 95
            }
            _0 = (object) DBL_PTR(_24170)->dbl;
        }
        else {
            _0 = _24170;
        };
        _24170 = NOVALUE;
        switch ( _0 ){ 

            /** c_out.e:182				case '\n' then*/
            case 10:

            /** c_out.e:183					exit*/
            goto L2; // [46] 102
            goto L3; // [48] 95

            /** c_out.e:185				case  '}' then*/
            case 125:

            /** c_out.e:186					rb = TRUE*/
            _rb_46191 = _9TRUE_444;

            /** c_out.e:187					if lb then*/
            if (_lb_46190 == 0)
            {
                goto L3; // [63] 95
            }
            else{
            }

            /** c_out.e:188						exit*/
            goto L2; // [68] 102
            goto L3; // [71] 95

            /** c_out.e:191				case '{' then*/
            case 123:

            /** c_out.e:192					lb = TRUE*/
            _lb_46190 = _9TRUE_444;

            /** c_out.e:193					if rb then */
            if (_rb_46191 == 0)
            {
                goto L4; // [86] 94
            }
            else{
            }

            /** c_out.e:194						exit*/
            goto L2; // [91] 102
L4: 
        ;}L3: 

        /** c_out.e:198		end for*/
        _p_46195 = _p_46195 + 1;
        goto L1; // [97] 29
L2: 
        ;
    }

    /** c_out.e:200		if rb then*/
    if (_rb_46191 == 0)
    {
        goto L5; // [104] 122
    }
    else{
    }

    /** c_out.e:201			if not lb then*/
    if (_lb_46190 != 0)
    goto L6; // [109] 121

    /** c_out.e:202				indent -= 4*/
    _57indent_46181 = _57indent_46181 - 4;
L6: 
L5: 

    /** c_out.e:206		i = indent + temp_indent*/
    _i_46188 = _57indent_46181 + _57temp_indent_46182;

    /** c_out.e:207		while i >= length(big_blanks) do*/
L7: 
    if (IS_SEQUENCE(_57big_blanks_46183)){
            _24176 = SEQ_PTR(_57big_blanks_46183)->length;
    }
    else {
        _24176 = 1;
    }
    if (_i_46188 < _24176)
    goto L8; // [140] 163

    /** c_out.e:208			c_puts(big_blanks)*/
    RefDS(_57big_blanks_46183);
    _57c_puts(_57big_blanks_46183);

    /** c_out.e:209			i -= length(big_blanks)*/
    if (IS_SEQUENCE(_57big_blanks_46183)){
            _24178 = SEQ_PTR(_57big_blanks_46183)->length;
    }
    else {
        _24178 = 1;
    }
    _i_46188 = _i_46188 - _24178;
    _24178 = NOVALUE;

    /** c_out.e:210		end while*/
    goto L7; // [160] 137
L8: 

    /** c_out.e:212		c_puts(big_blanks[1..i])*/
    rhs_slice_target = (object_ptr)&_24180;
    RHS_Slice(_57big_blanks_46183, 1, _i_46188);
    _57c_puts(_24180);
    _24180 = NOVALUE;

    /** c_out.e:214		temp_indent = 0    */
    _57temp_indent_46182 = 0;

    /** c_out.e:215	end procedure*/
    DeRefDS(_stmt_46187);
    return;
    ;
}


void _57adjust_indent_after(object _stmt_46220)
{
    object _24201 = NOVALUE;
    object _24200 = NOVALUE;
    object _24198 = NOVALUE;
    object _24196 = NOVALUE;
    object _24195 = NOVALUE;
    object _24192 = NOVALUE;
    object _24190 = NOVALUE;
    object _24189 = NOVALUE;
    object _24186 = NOVALUE;
    object _24182 = NOVALUE;
    object _24181 = NOVALUE;
    object _0, _1, _2;
    

    /** c_out.e:221		for p = 1 to length(stmt) do*/
    if (IS_SEQUENCE(_stmt_46220)){
            _24181 = SEQ_PTR(_stmt_46220)->length;
    }
    else {
        _24181 = 1;
    }
    {
        object _p_46222;
        _p_46222 = 1;
L1: 
        if (_p_46222 > _24181){
            goto L2; // [8] 61
        }

        /** c_out.e:222			switch stmt[p] do*/
        _2 = (object)SEQ_PTR(_stmt_46220);
        _24182 = (object)*(((s1_ptr)_2)->base + _p_46222);
        if (IS_SEQUENCE(_24182) ){
            goto L3; // [21] 54
        }
        if(!IS_ATOM_INT(_24182)){
            if( (DBL_PTR(_24182)->dbl != (eudouble) ((object) DBL_PTR(_24182)->dbl) ) ){
                goto L3; // [21] 54
            }
            _0 = (object) DBL_PTR(_24182)->dbl;
        }
        else {
            _0 = _24182;
        };
        _24182 = NOVALUE;
        switch ( _0 ){ 

            /** c_out.e:223				case '\n' then*/
            case 10:

            /** c_out.e:224					exit*/
            goto L2; // [32] 61
            goto L3; // [34] 54

            /** c_out.e:226				case '{' then*/
            case 123:

            /** c_out.e:227					indent += 4*/
            _57indent_46181 = _57indent_46181 + 4;

            /** c_out.e:228					return*/
            DeRefDS(_stmt_46220);
            return;
        ;}L3: 

        /** c_out.e:230		end for*/
        _p_46222 = _p_46222 + 1;
        goto L1; // [56] 15
L2: 
        ;
    }

    /** c_out.e:232		if length(stmt) < 3 then*/
    if (IS_SEQUENCE(_stmt_46220)){
            _24186 = SEQ_PTR(_stmt_46220)->length;
    }
    else {
        _24186 = 1;
    }
    if (_24186 >= 3)
    goto L4; // [66] 76

    /** c_out.e:233			return*/
    DeRefDS(_stmt_46220);
    return;
L4: 

    /** c_out.e:236		if not equal("if ", stmt[1..3]) then*/
    rhs_slice_target = (object_ptr)&_24189;
    RHS_Slice(_stmt_46220, 1, 3);
    if (_24188 == _24189)
    _24190 = 1;
    else if (IS_ATOM_INT(_24188) && IS_ATOM_INT(_24189))
    _24190 = 0;
    else
    _24190 = (compare(_24188, _24189) == 0);
    DeRefDS(_24189);
    _24189 = NOVALUE;
    if (_24190 != 0)
    goto L5; // [87] 96
    _24190 = NOVALUE;

    /** c_out.e:237			return*/
    DeRefDS(_stmt_46220);
    return;
L5: 

    /** c_out.e:240		if length(stmt) < 5 then*/
    if (IS_SEQUENCE(_stmt_46220)){
            _24192 = SEQ_PTR(_stmt_46220)->length;
    }
    else {
        _24192 = 1;
    }
    if (_24192 >= 5)
    goto L6; // [101] 111

    /** c_out.e:241			return*/
    DeRefDS(_stmt_46220);
    return;
L6: 

    /** c_out.e:244		if not equal("else", stmt[1..4]) then*/
    rhs_slice_target = (object_ptr)&_24195;
    RHS_Slice(_stmt_46220, 1, 4);
    if (_24194 == _24195)
    _24196 = 1;
    else if (IS_ATOM_INT(_24194) && IS_ATOM_INT(_24195))
    _24196 = 0;
    else
    _24196 = (compare(_24194, _24195) == 0);
    DeRefDS(_24195);
    _24195 = NOVALUE;
    if (_24196 != 0)
    goto L7; // [122] 131
    _24196 = NOVALUE;

    /** c_out.e:245			return*/
    DeRefDS(_stmt_46220);
    return;
L7: 

    /** c_out.e:248		if not find(stmt[5], {" \n"}) then*/
    _2 = (object)SEQ_PTR(_stmt_46220);
    _24198 = (object)*(((s1_ptr)_2)->base + 5);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_24199);
    ((intptr_t*)_2)[1] = _24199;
    _24200 = MAKE_SEQ(_1);
    _24201 = find_from(_24198, _24200, 1);
    _24198 = NOVALUE;
    DeRefDS(_24200);
    _24200 = NOVALUE;
    if (_24201 != 0)
    goto L8; // [146] 155
    _24201 = NOVALUE;

    /** c_out.e:249			return*/
    DeRefDS(_stmt_46220);
    return;
L8: 

    /** c_out.e:252		temp_indent = 4*/
    _57temp_indent_46182 = 4;

    /** c_out.e:254	end procedure*/
    DeRefDS(_stmt_46220);
    return;
    ;
}



// 0x07E09BB0
