// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _20find_first_wildcard(object _name_6120, object _from_6121)
{
    object _asterisk_at_6122 = NOVALUE;
    object _question_at_6124 = NOVALUE;
    object _first_wildcard_at_6126 = NOVALUE;
    object _3197 = NOVALUE; // 6131 3197
    object _3196 = NOVALUE; // 6130 3196
// skipping _3195  name type: 0
// skipping _3194  name type: 0
// skipping _3193  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_first_wildcard pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_first_wildcard pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_first_wildcard pc: 5 op: STARTLINE (58)

    /** filesys.e:247		integer asterisk_at = eu:find('*', name, from)*/
    // SubProg find_first_wildcard pc: 7 op: FIND_FROM (176)
    _asterisk_at_6122 = find_from(42, _name_6120, _from_6121);
    // SubProg find_first_wildcard pc: 12 op: STARTLINE (58)

    /** filesys.e:248		integer question_at = eu:find('?', name, from)*/
    // SubProg find_first_wildcard pc: 14 op: FIND_FROM (176)
    _question_at_6124 = find_from(63, _name_6120, _from_6121);
    // SubProg find_first_wildcard pc: 19 op: STARTLINE (58)

    /** filesys.e:249		integer first_wildcard_at = asterisk_at*/
    // SubProg find_first_wildcard pc: 21 op: ASSIGN_I (113)
    _first_wildcard_at_6126 = _asterisk_at_6122;
    // SubProg find_first_wildcard pc: 24 op: STARTLINE (58)

    /** filesys.e:250		if asterisk_at or question_at then*/
    // SubProg find_first_wildcard pc: 26 op: SC1_OR_IF (147)
    if (_asterisk_at_6122 != 0) {
        goto L1; // [26] 35
    }
    // SubProg find_first_wildcard pc: 30 op: NOP1 (159)
    // SubProg find_first_wildcard pc: 31 op: IF (20)
    if (_question_at_6124 == 0)
    {
        goto L2; // [31] 56
    }
    else{
    }
    // SubProg find_first_wildcard pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 6118 op: 159
    // SubProg find_first_wildcard pc: 35 op: STARTLINE (58)

    /** filesys.e:253			if question_at and question_at < asterisk_at then*/
    // SubProg find_first_wildcard pc: 37 op: SC1_AND_IF (146)
    if (_question_at_6124 == 0) {
        goto L3; // [37] 55
    }
    // SubProg find_first_wildcard pc: 41 op: LESS (1)
    _3197 = (_question_at_6124 < _asterisk_at_6122);
    // SubProg find_first_wildcard pc: 45 op: NOP1 (159)
    // SubProg find_first_wildcard pc: 46 op: IF (20)
    if (_3197 == 0)
    {
        DeRef(_3197);
        _3197 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        DeRef(_3197);
        _3197 = NOVALUE;
    }
    // SubProg find_first_wildcard pc: 49 op: STARTLINE (58)

    /** filesys.e:254				first_wildcard_at = question_at*/
    // SubProg find_first_wildcard pc: 51 op: ASSIGN_I (113)
    _first_wildcard_at_6126 = _question_at_6124;
    // SubProg find_first_wildcard pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 6118 op: 159
    // SubProg find_first_wildcard pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 6118 op: 159
    // SubProg find_first_wildcard pc: 56 op: STARTLINE (58)

    /** filesys.e:257		return first_wildcard_at*/
    // SubProg find_first_wildcard pc: 58 op: RETURNF (28)

// Exiting block BLOCK: find_first_wildcard

// block var name_6120
    DeRefDS(_name_6120);

// block var from_6121

// block var asterisk_at_6122

// block var question_at_6124
    return _first_wildcard_at_6126;
    // SubProg find_first_wildcard pc: 62 op: BADRETURNF (43)
    ;
}


object _20dir(object _name_6134)
{
    object _dir_data_6135 = NOVALUE;
    object _data_6136 = NOVALUE;
    object _the_name_6137 = NOVALUE;
    object _the_dir_6138 = NOVALUE;
    object _the_suffix_6139 = NOVALUE;
    object _idx_6140 = NOVALUE;
    object _first_wildcard_at_6141 = NOVALUE;
    object _next_slash_6156 = NOVALUE;
    object _wild_data_6188 = NOVALUE;
    object _interim_dir_6192 = NOVALUE;
    object _dir_results_6196 = NOVALUE;
// skipping _3241  name type: 0
    object _3240 = NOVALUE; // 6208 3240
    object _3239 = NOVALUE; // 6207 3239
    object _3238 = NOVALUE; // 6206 3238
// skipping _3237  name type: 0
    object _3236 = NOVALUE; // 6204 3236
    object _3235 = NOVALUE; // 6203 3235
    object _3234 = NOVALUE; // 6200 3234
// skipping _3233  name type: 0
    object _3232 = NOVALUE; // 6197 3232
// skipping _3231  name type: 0
    object _3230 = NOVALUE; // 6194 3230
    object _3229 = NOVALUE; // 6193 3229
    object _3228 = NOVALUE; // 6191 3228
    object _3227 = NOVALUE; // 6187 3227
// skipping _3226  name type: 0
    object _3225 = NOVALUE; // 6184 3225
// skipping _3224  name type: 0
    object _3223 = NOVALUE; // 6181 3223
    object _3222 = NOVALUE; // 6180 3222
    object _3221 = NOVALUE; // 6179 3221
    object _3220 = NOVALUE; // 6178 3220
    object _3219 = NOVALUE; // 6176 3219
    object _3218 = NOVALUE; // 6173 3218
// skipping _3217  name type: 0
// skipping _3216  name type: 0
    object _3215 = NOVALUE; // 6169 3215
    object _3214 = NOVALUE; // 6168 3214
// skipping _3213  name type: 0
    object _3212 = NOVALUE; // 6165 3212
// skipping _3211  name type: 0
    object _3210 = NOVALUE; // 6163 3210
    object _3209 = NOVALUE; // 6162 3209
// skipping _3208  name type: 0
// skipping _3207  name type: 0
// skipping _3206  name type: 0
// skipping _3204  name type: 0
// skipping _3203  name type: 0
    object _3202 = NOVALUE; // 6149 3202
// skipping _3201  name type: 0
    object _3200 = NOVALUE; // 6145 3200
// skipping _3199  name type: 0
// skipping _3198  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg dir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg dir pc: 3 op: STARTLINE (58)

    /** filesys.e:358		ifdef WINDOWS then*/
    // SubProg dir pc: 5 op: STARTLINE (58)

    /** filesys.e:361			object dir_data, data, the_name, the_dir, the_suffix = 0*/
    // SubProg dir pc: 7 op: ASSIGN (18)
    DeRef(_the_suffix_6139);
    _the_suffix_6139 = 0;
    // SubProg dir pc: 10 op: STARTLINE (58)

    /** filesys.e:362			integer idx*/
    // SubProg dir pc: 12 op: STARTLINE (58)

    /** filesys.e:365			integer first_wildcard_at = find_first_wildcard( name )*/
    // SubProg dir pc: 14 op: PROC (27)
    RefDS(_name_6134);
    _first_wildcard_at_6141 = _20find_first_wildcard(_name_6134, 1);
    // SubProg dir pc: 19 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_6141)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_6141)->dbl);
        DeRefDS(_first_wildcard_at_6141);
        _first_wildcard_at_6141 = _1;
    }
    // SubProg dir pc: 21 op: STARTLINE (58)

    /** filesys.e:366			if first_wildcard_at = 0 then*/
    // SubProg dir pc: 23 op: EQUALS_IFW_I (121)
    if (_first_wildcard_at_6141 != 0)
    goto L1; // [23] 38
    // SubProg dir pc: 27 op: STARTLINE (58)

    /** filesys.e:367				return machine_func(M_DIR, name)*/
    // SubProg dir pc: 29 op: MACHINE_FUNC (111)
    _3200 = machine(22, _name_6134);
    // SubProg dir pc: 33 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_6134
    DeRefDS(_name_6134);

// block var dir_data_6135
    DeRef(_dir_data_6135);

// block var data_6136
    DeRef(_data_6136);

// block var the_name_6137
    DeRef(_the_name_6137);

// block var the_dir_6138
    DeRef(_the_dir_6138);

// block var the_suffix_6139

// block var idx_6140

// block var first_wildcard_at_6141
    return _3200;
    // SubProg dir pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 6132 op: 159
    // SubProg dir pc: 38 op: STARTLINE (58)

    /** filesys.e:371			if first_wildcard_at then*/
    // SubProg dir pc: 40 op: IF (20)
    if (_first_wildcard_at_6141 == 0)
    {
        goto L2; // [40] 56
    }
    else{
    }
    // SubProg dir pc: 43 op: STARTLINE (58)

    /** filesys.e:372				idx = search:rfind(SLASH, name, first_wildcard_at )*/
    // SubProg dir pc: 45 op: PROC (27)
    RefDS(_name_6134);
    _idx_6140 = _19rfind(47, _name_6134, _first_wildcard_at_6141);
    // SubProg dir pc: 51 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_idx_6140)) {
        _1 = (object)(DBL_PTR(_idx_6140)->dbl);
        DeRefDS(_idx_6140);
        _idx_6140 = _1;
    }
    // SubProg dir pc: 53 op: ELSE (23)
    goto L3; // [53] 70
    // SubProg dir pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 6132 op: 159
    // SubProg dir pc: 56 op: STARTLINE (58)

    /** filesys.e:374				idx = search:rfind(SLASH, name )*/
    // SubProg dir pc: 58 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6134)){
            _3202 = SEQ_PTR(_name_6134)->length;
    }
    else {
        _3202 = 1;
    }
    // SubProg dir pc: 61 op: PROC (27)
    RefDS(_name_6134);
    _idx_6140 = _19rfind(47, _name_6134, _3202);
    _3202 = NOVALUE;
    // SubProg dir pc: 67 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_idx_6140)) {
        _1 = (object)(DBL_PTR(_idx_6140)->dbl);
        DeRefDS(_idx_6140);
        _idx_6140 = _1;
    }
    // SubProg dir pc: 69 op: NOP1 (159)
L3: // addr: 70 pc: 69 sub: 6132 op: 159
    // SubProg dir pc: 70 op: STARTLINE (58)

    /** filesys.e:377			if idx = 0 then*/
    // SubProg dir pc: 72 op: PRIVATE_INIT_CHECK (30)
    // SubProg dir pc: 74 op: EQUALS_IFW_I (121)
    if (_idx_6140 != 0)
    goto L4; // [74] 91
    // SubProg dir pc: 78 op: STARTLINE (58)

    /** filesys.e:378				the_dir = "."*/
    // SubProg dir pc: 80 op: ASSIGN (18)
    RefDS(_3205);
    DeRef(_the_dir_6138);
    _the_dir_6138 = _3205;
    // SubProg dir pc: 83 op: STARTLINE (58)

    /** filesys.e:379				the_name = name*/
    // SubProg dir pc: 85 op: ASSIGN (18)
    RefDS(_name_6134);
    DeRef(_the_name_6137);
    _the_name_6137 = _name_6134;
    // SubProg dir pc: 88 op: ELSE (23)
    goto L5; // [88] 187
    // SubProg dir pc: 90 op: NOP1 (159)
L4: // addr: 91 pc: 90 sub: 6132 op: 159
    // SubProg dir pc: 91 op: STARTLINE (58)

    /** filesys.e:383				the_dir = name[1 .. idx]*/
    // SubProg dir pc: 93 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_dir_6138;
    RHS_Slice(_name_6134, 1, _idx_6140);
    // SubProg dir pc: 98 op: STARTLINE (58)

    /** filesys.e:384				integer next_slash = 0*/
    // SubProg dir pc: 100 op: ASSIGN_I (113)
    _next_slash_6156 = 0;
    // SubProg dir pc: 103 op: STARTLINE (58)

    /** filesys.e:385				if first_wildcard_at then*/
    // SubProg dir pc: 105 op: IF (20)
    if (_first_wildcard_at_6141 == 0)
    {
        goto L6; // [105] 116
    }
    else{
    }
    // SubProg dir pc: 108 op: STARTLINE (58)

    /** filesys.e:386					next_slash = eu:find( SLASH, name, first_wildcard_at )*/
    // SubProg dir pc: 110 op: FIND_FROM (176)
    _next_slash_6156 = find_from(47, _name_6134, _first_wildcard_at_6141);
    // SubProg dir pc: 115 op: NOP1 (159)
L6: // addr: 116 pc: 115 sub: 6132 op: 159
    // SubProg dir pc: 116 op: STARTLINE (58)

    /** filesys.e:389				if next_slash then*/
    // SubProg dir pc: 118 op: IF (20)
    if (_next_slash_6156 == 0)
    {
        goto L7; // [118] 164
    }
    else{
    }
    // SubProg dir pc: 121 op: STARTLINE (58)

    /** filesys.e:390					first_wildcard_at = find_first_wildcard( name, next_slash )*/
    // SubProg dir pc: 123 op: PROC (27)
    RefDS(_name_6134);
    _first_wildcard_at_6141 = _20find_first_wildcard(_name_6134, _next_slash_6156);
    // SubProg dir pc: 128 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_6141)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_6141)->dbl);
        DeRefDS(_first_wildcard_at_6141);
        _first_wildcard_at_6141 = _1;
    }
    // SubProg dir pc: 130 op: STARTLINE (58)

    /** filesys.e:391					if first_wildcard_at then*/
    // SubProg dir pc: 132 op: IF (20)
    if (_first_wildcard_at_6141 == 0)
    {
        goto L8; // [132] 184
    }
    else{
    }
    // SubProg dir pc: 135 op: STARTLINE (58)

    /** filesys.e:392						the_name = name[idx+1..next_slash-1]*/
    // SubProg dir pc: 137 op: PLUS1 (93)
    _3209 = _idx_6140 + 1;
    if (_3209 > MAXINT){
        _3209 = NewDouble((eudouble)_3209);
    }
    // SubProg dir pc: 141 op: MINUS (10)
    _3210 = _next_slash_6156 - 1;
    // SubProg dir pc: 145 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_name_6137;
    RHS_Slice(_name_6134, _3209, _3210);
    // SubProg dir pc: 150 op: STARTLINE (58)

    /** filesys.e:393						the_suffix = name[next_slash..$]*/
    // SubProg dir pc: 152 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6134)){
            _3212 = SEQ_PTR(_name_6134)->length;
    }
    else {
        _3212 = 1;
    }
    // SubProg dir pc: 155 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_suffix_6139;
    RHS_Slice(_name_6134, _next_slash_6156, _3212);
    // SubProg dir pc: 160 op: NOP1 (159)
    // SubProg dir pc: 161 op: ELSE (23)
    goto L8; // [161] 184
    // SubProg dir pc: 163 op: NOP1 (159)
L7: // addr: 164 pc: 163 sub: 6132 op: 159
    // SubProg dir pc: 164 op: STARTLINE (58)

    /** filesys.e:396					the_name = name[idx+1 .. $]*/
    // SubProg dir pc: 166 op: PLUS1 (93)
    _3214 = _idx_6140 + 1;
    if (_3214 > MAXINT){
        _3214 = NewDouble((eudouble)_3214);
    }
    // SubProg dir pc: 170 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6134)){
            _3215 = SEQ_PTR(_name_6134)->length;
    }
    else {
        _3215 = 1;
    }
    // SubProg dir pc: 173 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_name_6137;
    RHS_Slice(_name_6134, _3214, _3215);
    // SubProg dir pc: 178 op: STARTLINE (58)

    /** filesys.e:397					the_suffix = 0*/
    // SubProg dir pc: 180 op: ASSIGN (18)
    DeRef(_the_suffix_6139);
    _the_suffix_6139 = 0;
    // SubProg dir pc: 183 op: NOP1 (159)
L8: // addr: 184 pc: 183 sub: 6132 op: 159
    // SubProg dir pc: 184 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var next_slash_6156
    // SubProg dir pc: 186 op: NOP1 (159)
L5: // addr: 187 pc: 186 sub: 6132 op: 159
    // SubProg dir pc: 187 op: STARTLINE (58)

    /** filesys.e:403			dir_data = dir( the_dir )*/
    // SubProg dir pc: 189 op: PRIVATE_INIT_CHECK (30)
    // SubProg dir pc: 191 op: PROC (27)
    Ref(_the_dir_6138);
    _0 = _dir_data_6135;
    _dir_data_6135 = _20dir(_the_dir_6138);
    DeRef(_0);
    // SubProg dir pc: 195 op: STARTLINE (58)

    /** filesys.e:406			if atom(dir_data) then*/
    // SubProg dir pc: 197 op: IS_AN_ATOM (67)
    _3218 = IS_ATOM(_dir_data_6135);
    // SubProg dir pc: 200 op: IF (20)
    if (_3218 == 0)
    {
        _3218 = NOVALUE;
        goto L9; // [200] 210
    }
    else{
        _3218 = NOVALUE;
    }
    // SubProg dir pc: 203 op: STARTLINE (58)

    /** filesys.e:407				return dir_data*/
    // SubProg dir pc: 205 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_6134
    DeRefDS(_name_6134);

// block var data_6136
    DeRef(_data_6136);

// block var the_name_6137
    DeRef(_the_name_6137);

// block var the_dir_6138
    DeRef(_the_dir_6138);

// block var the_suffix_6139
    DeRef(_the_suffix_6139);

// block var idx_6140

// block var first_wildcard_at_6141
    DeRef(_3214);
    _3214 = NOVALUE;
    DeRef(_3200);
    _3200 = NOVALUE;
    DeRef(_3210);
    _3210 = NOVALUE;
    DeRef(_3209);
    _3209 = NOVALUE;
    return _dir_data_6135;
    // SubProg dir pc: 209 op: NOP1 (159)
L9: // addr: 210 pc: 209 sub: 6132 op: 159
    // SubProg dir pc: 210 op: STARTLINE (58)

    /** filesys.e:412			data = {}*/
    // SubProg dir pc: 212 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_data_6136);
    _data_6136 = _5;
    // SubProg dir pc: 215 op: STARTLINE (58)

    /** filesys.e:413			for i = 1 to length(dir_data) do*/
    // SubProg dir pc: 217 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_data_6135)){
            _3219 = SEQ_PTR(_dir_data_6135)->length;
    }
    else {
        _3219 = 1;
    }
    // SubProg dir pc: 220 op: FOR_I (125)
    {
        object _i_6175;
        _i_6175 = 1;
LA: // addr: 227 pc: 220 sub: 6132 op: 125
        if (_i_6175 > _3219){
            goto LB; // [220] 265
        }
        // SubProg dir pc: 227 op: STARTLINE (58)

        /** filesys.e:414				if wildcard:is_match(the_name, dir_data[i][1]) then*/
        // SubProg dir pc: 229 op: PRIVATE_INIT_CHECK (30)
        // SubProg dir pc: 231 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_6135);
        _3220 = (object)*(((s1_ptr)_2)->base + _i_6175);
        // SubProg dir pc: 235 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3220);
        _3221 = (object)*(((s1_ptr)_2)->base + 1);
        _3220 = NOVALUE;
        // SubProg dir pc: 239 op: PROC (27)
        Ref(_the_name_6137);
        Ref(_3221);
        _3222 = _25is_match(_the_name_6137, _3221);
        _3221 = NOVALUE;
        // SubProg dir pc: 244 op: IF (20)
        if (_3222 == 0) {
            DeRef(_3222);
            _3222 = NOVALUE;
            goto LC; // [244] 258
        }
        else {
            if (!IS_ATOM_INT(_3222) && DBL_PTR(_3222)->dbl == 0.0){
                DeRef(_3222);
                _3222 = NOVALUE;
                goto LC; // [244] 258
            }
            DeRef(_3222);
            _3222 = NOVALUE;
        }
        DeRef(_3222);
        _3222 = NOVALUE;
        // SubProg dir pc: 247 op: STARTLINE (58)

        /** filesys.e:415						data = append(data, dir_data[i])*/
        // SubProg dir pc: 249 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_6135);
        _3223 = (object)*(((s1_ptr)_2)->base + _i_6175);
        // SubProg dir pc: 253 op: APPEND (35)
        Ref(_3223);
        Append(&_data_6136, _data_6136, _3223);
        _3223 = NOVALUE;
        // SubProg dir pc: 257 op: NOP1 (159)
LC: // addr: 258 pc: 257 sub: 6132 op: 159
        // SubProg dir pc: 258 op: STARTLINE (58)

        /** filesys.e:417			end for*/
        // SubProg dir pc: 260 op: ENDFOR_INT_UP1 (54)
        _i_6175 = _i_6175 + 1;
        goto LA; // [260] 227
LB: // addr: 265 pc: 260 sub: 6132 op: 54
        ;
    }
    // SubProg dir pc: 265 op: STARTLINE (58)

    /** filesys.e:419			if not length(data) then*/
    // SubProg dir pc: 267 op: LENGTH (42)
    if (IS_SEQUENCE(_data_6136)){
            _3225 = SEQ_PTR(_data_6136)->length;
    }
    else {
        _3225 = 1;
    }
    // SubProg dir pc: 270 op: NOT_IFW (108)
    if (_3225 != 0)
    goto LD; // [270] 280
    _3225 = NOVALUE;
    // SubProg dir pc: 273 op: STARTLINE (58)

    /** filesys.e:421				return -1*/
    // SubProg dir pc: 275 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_6134
    DeRefDS(_name_6134);

// block var dir_data_6135
    DeRef(_dir_data_6135);

// block var data_6136
    DeRef(_data_6136);

// block var the_name_6137
    DeRef(_the_name_6137);

// block var the_dir_6138
    DeRef(_the_dir_6138);

// block var the_suffix_6139
    DeRef(_the_suffix_6139);

// block var idx_6140

// block var first_wildcard_at_6141
    DeRef(_3214);
    _3214 = NOVALUE;
    DeRef(_3200);
    _3200 = NOVALUE;
    DeRef(_3210);
    _3210 = NOVALUE;
    DeRef(_3209);
    _3209 = NOVALUE;
    return -1;
    // SubProg dir pc: 279 op: NOP1 (159)
LD: // addr: 280 pc: 279 sub: 6132 op: 159
    // SubProg dir pc: 280 op: STARTLINE (58)

    /** filesys.e:424			if sequence( the_suffix ) then*/
    // SubProg dir pc: 282 op: IS_A_SEQUENCE (68)
    _3227 = IS_SEQUENCE(_the_suffix_6139);
    // SubProg dir pc: 285 op: IF (20)
    if (_3227 == 0)
    {
        _3227 = NOVALUE;
        goto LE; // [285] 406
    }
    else{
        _3227 = NOVALUE;
    }
    // SubProg dir pc: 288 op: STARTLINE (58)

    /** filesys.e:425				sequence wild_data = {}*/
    // SubProg dir pc: 290 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_wild_data_6188);
    _wild_data_6188 = _5;
    // SubProg dir pc: 293 op: SEQUENCE_CHECK (97)
    // SubProg dir pc: 295 op: STARTLINE (58)

    /** filesys.e:426				for i = 1 to length( dir_data ) do*/
    // SubProg dir pc: 297 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_data_6135)){
            _3228 = SEQ_PTR(_dir_data_6135)->length;
    }
    else {
        _3228 = 1;
    }
    // SubProg dir pc: 300 op: FOR_I (125)
    {
        object _i_6190;
        _i_6190 = 1;
LF: // addr: 307 pc: 300 sub: 6132 op: 125
        if (_i_6190 > _3228){
            goto L10; // [300] 399
        }
        // SubProg dir pc: 307 op: STARTLINE (58)

        /** filesys.e:427					sequence interim_dir = the_dir & dir_data[i][D_NAME] & SLASH*/
        // SubProg dir pc: 309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_6135);
        _3229 = (object)*(((s1_ptr)_2)->base + _i_6190);
        // SubProg dir pc: 313 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3229);
        _3230 = (object)*(((s1_ptr)_2)->base + 1);
        _3229 = NOVALUE;
        // SubProg dir pc: 317 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = 47;
            concat_list[1] = _3230;
            concat_list[2] = _the_dir_6138;
            Concat_N((object_ptr)&_interim_dir_6192, concat_list, 3);
        }
        _3230 = NOVALUE;
        // SubProg dir pc: 323 op: STARTLINE (58)

        /** filesys.e:428					object dir_results = dir( interim_dir & the_suffix )*/
        // SubProg dir pc: 325 op: CONCAT (15)
        if (IS_SEQUENCE(_interim_dir_6192) && IS_ATOM(_the_suffix_6139)) {
            Ref(_the_suffix_6139);
            Append(&_3232, _interim_dir_6192, _the_suffix_6139);
        }
        else if (IS_ATOM(_interim_dir_6192) && IS_SEQUENCE(_the_suffix_6139)) {
        }
        else {
            Concat((object_ptr)&_3232, _interim_dir_6192, _the_suffix_6139);
        }
        // SubProg dir pc: 329 op: PROC (27)
        _0 = _dir_results_6196;
        _dir_results_6196 = _20dir(_3232);
        DeRef(_0);
        _3232 = NOVALUE;
        // SubProg dir pc: 333 op: STARTLINE (58)

        /** filesys.e:429					if sequence( dir_results ) then*/
        // SubProg dir pc: 335 op: IS_A_SEQUENCE (68)
        _3234 = IS_SEQUENCE(_dir_results_6196);
        // SubProg dir pc: 338 op: IF (20)
        if (_3234 == 0)
        {
            _3234 = NOVALUE;
            goto L11; // [338] 390
        }
        else{
            _3234 = NOVALUE;
        }
        // SubProg dir pc: 341 op: STARTLINE (58)

        /** filesys.e:430						for j = 1 to length( dir_results ) do*/
        // SubProg dir pc: 343 op: LENGTH (42)
        if (IS_SEQUENCE(_dir_results_6196)){
                _3235 = SEQ_PTR(_dir_results_6196)->length;
        }
        else {
            _3235 = 1;
        }
        // SubProg dir pc: 346 op: FOR_I (125)
        {
            object _j_6202;
            _j_6202 = 1;
L12: // addr: 353 pc: 346 sub: 6132 op: 125
            if (_j_6202 > _3235){
                goto L13; // [346] 383
            }
            // SubProg dir pc: 353 op: STARTLINE (58)

            /** filesys.e:431							dir_results[j][D_NAME] = interim_dir & dir_results[j][D_NAME]*/
            // SubProg dir pc: 355 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_dir_results_6196);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _dir_results_6196 = MAKE_SEQ(_2);
            }
            _3 = (object)(_j_6202 + ((s1_ptr)_2)->base);
            // SubProg dir pc: 360 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_dir_results_6196);
            _3238 = (object)*(((s1_ptr)_2)->base + _j_6202);
            // SubProg dir pc: 364 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_3238);
            _3239 = (object)*(((s1_ptr)_2)->base + 1);
            _3238 = NOVALUE;
            // SubProg dir pc: 368 op: CONCAT (15)
            if (IS_SEQUENCE(_interim_dir_6192) && IS_ATOM(_3239)) {
                Ref(_3239);
                Append(&_3240, _interim_dir_6192, _3239);
            }
            else if (IS_ATOM(_interim_dir_6192) && IS_SEQUENCE(_3239)) {
            }
            else {
                Concat((object_ptr)&_3240, _interim_dir_6192, _3239);
            }
            _3239 = NOVALUE;
            // SubProg dir pc: 372 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 1);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3240;
            if( _1 != _3240 ){
                DeRef(_1);
            }
            _3240 = NOVALUE;
            _3236 = NOVALUE;
            // SubProg dir pc: 376 op: STARTLINE (58)

            /** filesys.e:432						end for*/
            // SubProg dir pc: 378 op: ENDFOR_INT_UP1 (54)
            _j_6202 = _j_6202 + 1;
            goto L12; // [378] 353
L13: // addr: 383 pc: 378 sub: 6132 op: 54
            ;
        }
        // SubProg dir pc: 383 op: STARTLINE (58)

        /** filesys.e:433						wild_data &= dir_results*/
        // SubProg dir pc: 385 op: CONCAT (15)
        if (IS_SEQUENCE(_wild_data_6188) && IS_ATOM(_dir_results_6196)) {
            Ref(_dir_results_6196);
            Append(&_wild_data_6188, _wild_data_6188, _dir_results_6196);
        }
        else if (IS_ATOM(_wild_data_6188) && IS_SEQUENCE(_dir_results_6196)) {
        }
        else {
            Concat((object_ptr)&_wild_data_6188, _wild_data_6188, _dir_results_6196);
        }
        // SubProg dir pc: 389 op: NOP1 (159)
L11: // addr: 390 pc: 389 sub: 6132 op: 159
        // SubProg dir pc: 390 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var interim_dir_6192
        DeRef(_interim_dir_6192);
        _interim_dir_6192 = NOVALUE;

// block var dir_results_6196
        DeRef(_dir_results_6196);
        _dir_results_6196 = NOVALUE;
        // SubProg dir pc: 392 op: STARTLINE (58)

        /** filesys.e:435				end for*/
        // SubProg dir pc: 394 op: ENDFOR_INT_UP1 (54)
        _i_6190 = _i_6190 + 1;
        goto LF; // [394] 307
L10: // addr: 399 pc: 394 sub: 6132 op: 54
        ;
    }
    // SubProg dir pc: 399 op: STARTLINE (58)

    /** filesys.e:436				return wild_data*/
    // SubProg dir pc: 401 op: RETURNF (28)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: dir

// block var name_6134
    DeRefDS(_name_6134);

// block var dir_data_6135
    DeRef(_dir_data_6135);

// block var data_6136
    DeRef(_data_6136);

// block var the_name_6137
    DeRef(_the_name_6137);

// block var the_dir_6138
    DeRef(_the_dir_6138);

// block var the_suffix_6139
    DeRef(_the_suffix_6139);

// block var idx_6140

// block var first_wildcard_at_6141
    DeRef(_3214);
    _3214 = NOVALUE;
    DeRef(_3200);
    _3200 = NOVALUE;
    DeRef(_3210);
    _3210 = NOVALUE;
    DeRef(_3209);
    _3209 = NOVALUE;
    return _wild_data_6188;
    // SubProg dir pc: 405 op: NOP1 (159)
LE: // addr: 406 pc: 405 sub: 6132 op: 159
    // SubProg dir pc: 406 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var wild_data_6188
    DeRef(_wild_data_6188);
    _wild_data_6188 = NOVALUE;
    // SubProg dir pc: 408 op: STARTLINE (58)

    /** filesys.e:439			return data*/
    // SubProg dir pc: 410 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_6134
    DeRefDS(_name_6134);

// block var dir_data_6135
    DeRef(_dir_data_6135);

// block var the_name_6137
    DeRef(_the_name_6137);

// block var the_dir_6138
    DeRef(_the_dir_6138);

// block var the_suffix_6139
    DeRef(_the_suffix_6139);

// block var idx_6140

// block var first_wildcard_at_6141
    DeRef(_3214);
    _3214 = NOVALUE;
    DeRef(_3200);
    _3200 = NOVALUE;
    DeRef(_3210);
    _3210 = NOVALUE;
    DeRef(_3209);
    _3209 = NOVALUE;
    return _data_6136;
    // SubProg dir pc: 414 op: BADRETURNF (43)
    ;
}


object _20current_dir()
{
    object _3242 = NOVALUE; // 6212 3242
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg current_dir pc: 1 op: STARTLINE (58)

    /** filesys.e:465		return machine_func(M_CURRENT_DIR, 0)*/
    // SubProg current_dir pc: 3 op: MACHINE_FUNC (111)
    _3242 = machine(23, 0);
    // SubProg current_dir pc: 7 op: RETURNF (28)

// Exiting block BLOCK: current_dir
    return _3242;
    // SubProg current_dir pc: 11 op: BADRETURNF (43)
    ;
}


object _20chdir(object _newdir_6215)
{
    object _3243 = NOVALUE; // 6216 3243
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg chdir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg chdir pc: 3 op: STARTLINE (58)

    /** filesys.e:501		return machine_func(M_CHDIR, newdir)*/
    // SubProg chdir pc: 5 op: MACHINE_FUNC (111)
    _3243 = machine(63, _newdir_6215);
    // SubProg chdir pc: 9 op: RETURNF (28)

// Exiting block BLOCK: chdir

// block var newdir_6215
    DeRefDS(_newdir_6215);
    return _3243;
    // SubProg chdir pc: 13 op: BADRETURNF (43)
    ;
}


object _20create_directory(object _name_6306, object _mode_6307, object _mkparent_6309)
{
    object _pname_6310 = NOVALUE;
    object _ret_6311 = NOVALUE;
    object _pos_6312 = NOVALUE;
// skipping _3316  name type: 0
    object _3315 = NOVALUE; // 6336 3315
    object _3314 = NOVALUE; // 6335 3314
// skipping _3313  name type: 0
// skipping _3312  name type: 0
    object _3311 = NOVALUE; // 6332 3311
    object _3310 = NOVALUE; // 6331 3310
    object _3309 = NOVALUE; // 6330 3309
    object _3308 = NOVALUE; // 6329 3308
// skipping _3307  name type: 0
// skipping _3306  name type: 0
    object _3305 = NOVALUE; // 6325 3305
// skipping _3304  name type: 0
// skipping _3303  name type: 0
    object _3302 = NOVALUE; // 6321 3302
    object _3301 = NOVALUE; // 6320 3301
// skipping _3300  name type: 0
    object _3299 = NOVALUE; // 6318 3299
    object _3298 = NOVALUE; // 6317 3298
// skipping _3297  name type: 0
    object _3296 = NOVALUE; // 6314 3296
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg create_directory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg create_directory pc: 3 op: INTEGER_CHECK (96)
    // SubProg create_directory pc: 5 op: INTEGER_CHECK (96)
    // SubProg create_directory pc: 7 op: STARTLINE (58)

    /** filesys.e:731		if length(name) = 0 then*/
    // SubProg create_directory pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6306)){
            _3296 = SEQ_PTR(_name_6306)->length;
    }
    else {
        _3296 = 1;
    }
    // SubProg create_directory pc: 12 op: EQUALS_IFW_I (121)
    if (_3296 != 0)
    goto L1; // [12] 23
    // SubProg create_directory pc: 16 op: STARTLINE (58)

    /** filesys.e:732			return 0 -- failed*/
    // SubProg create_directory pc: 18 op: RETURNF (28)

// Exiting block BLOCK: create_directory

// block var name_6306
    DeRefDS(_name_6306);

// block var mode_6307

// block var mkparent_6309

// block var pname_6310
    DeRef(_pname_6310);

// block var ret_6311
    DeRef(_ret_6311);

// block var pos_6312
    return 0;
    // SubProg create_directory pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 6304 op: 159
    // SubProg create_directory pc: 23 op: STARTLINE (58)

    /** filesys.e:736		if name[$] = SLASH then*/
    // SubProg create_directory pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6306)){
            _3298 = SEQ_PTR(_name_6306)->length;
    }
    else {
        _3298 = 1;
    }
    // SubProg create_directory pc: 28 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_name_6306);
    _3299 = (object)*(((s1_ptr)_2)->base + _3298);
    // SubProg create_directory pc: 32 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3299, 47)){
        _3299 = NOVALUE;
        goto L2; // [32] 51
    }
    _3299 = NOVALUE;
    // SubProg create_directory pc: 36 op: STARTLINE (58)

    /** filesys.e:737			name = name[1 .. $-1]*/
    // SubProg create_directory pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6306)){
            _3301 = SEQ_PTR(_name_6306)->length;
    }
    else {
        _3301 = 1;
    }
    // SubProg create_directory pc: 41 op: MINUS (10)
    _3302 = _3301 - 1;
    _3301 = NOVALUE;
    // SubProg create_directory pc: 45 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_name_6306;
    RHS_Slice(_name_6306, 1, _3302);
    // SubProg create_directory pc: 50 op: NOP1 (159)
L2: // addr: 51 pc: 50 sub: 6304 op: 159
    // SubProg create_directory pc: 51 op: STARTLINE (58)

    /** filesys.e:740		if mkparent != 0 then*/
    // SubProg create_directory pc: 53 op: NOTEQ_IFW_I (122)
    if (_mkparent_6309 == 0)
    goto L3; // [53] 101
    // SubProg create_directory pc: 57 op: STARTLINE (58)

    /** filesys.e:741			pos = search:rfind(SLASH, name)*/
    // SubProg create_directory pc: 59 op: LENGTH (42)
    if (IS_SEQUENCE(_name_6306)){
            _3305 = SEQ_PTR(_name_6306)->length;
    }
    else {
        _3305 = 1;
    }
    // SubProg create_directory pc: 62 op: PROC (27)
    RefDS(_name_6306);
    _pos_6312 = _19rfind(47, _name_6306, _3305);
    _3305 = NOVALUE;
    // SubProg create_directory pc: 68 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_6312)) {
        _1 = (object)(DBL_PTR(_pos_6312)->dbl);
        DeRefDS(_pos_6312);
        _pos_6312 = _1;
    }
    // SubProg create_directory pc: 70 op: STARTLINE (58)

    /** filesys.e:742			if pos != 0 then*/
    // SubProg create_directory pc: 72 op: NOTEQ_IFW_I (122)
    if (_pos_6312 == 0)
    goto L4; // [72] 100
    // SubProg create_directory pc: 76 op: STARTLINE (58)

    /** filesys.e:743				ret = create_directory(name[1.. pos-1], mode, mkparent)*/
    // SubProg create_directory pc: 78 op: MINUS (10)
    _3308 = _pos_6312 - 1;
    // SubProg create_directory pc: 82 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3309;
    RHS_Slice(_name_6306, 1, _3308);
    // SubProg create_directory pc: 87 op: ASSIGN (18)
    DeRef(_3310);
    _3310 = _mode_6307;
    // SubProg create_directory pc: 90 op: ASSIGN (18)
    DeRef(_3311);
    _3311 = _mkparent_6309;
    // SubProg create_directory pc: 93 op: PROC (27)
    _0 = _ret_6311;
    _ret_6311 = _20create_directory(_3309, _3310, _3311);
    DeRef(_0);
    _3309 = NOVALUE;
    _3310 = NOVALUE;
    _3311 = NOVALUE;
    // SubProg create_directory pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 6304 op: 159
    // SubProg create_directory pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 6304 op: 159
    // SubProg create_directory pc: 101 op: STARTLINE (58)

    /** filesys.e:747		pname = machine:allocate_string(name)*/
    // SubProg create_directory pc: 103 op: PROC (27)
    RefDS(_name_6306);
    _0 = _pname_6310;
    _pname_6310 = _9allocate_string(_name_6306, 0);
    DeRef(_0);
    // SubProg create_directory pc: 108 op: STARTLINE (58)

    /** filesys.e:749		ifdef UNIX then*/
    // SubProg create_directory pc: 110 op: STARTLINE (58)

    /** filesys.e:750			ret = not c_func(xCreateDirectory, {pname, mode})*/
    // SubProg create_directory pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg create_directory pc: 114 op: RIGHT_BRACE_2 (85)
    Ref(_pname_6310);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pname_6310;
    ((intptr_t *)_2)[2] = _mode_6307;
    _3314 = MAKE_SEQ(_1);
    // SubProg create_directory pc: 118 op: C_FUNC (133)
    _3315 = call_c(1, _20xCreateDirectory_6067, _3314);
    DeRefDS(_3314);
    _3314 = NOVALUE;
    // SubProg create_directory pc: 123 op: NOT (7)
    DeRef(_ret_6311);
    if (IS_ATOM_INT(_3315)) {
        _ret_6311 = (_3315 == 0);
    }
    else {
        _ret_6311 = unary_op(NOT, _3315);
    }
    DeRef(_3315);
    _3315 = NOVALUE;
    // SubProg create_directory pc: 126 op: STARTLINE (58)

    /** filesys.e:756		return ret*/
    // SubProg create_directory pc: 128 op: PRIVATE_INIT_CHECK (30)
    // SubProg create_directory pc: 130 op: RETURNF (28)

// Exiting block BLOCK: create_directory

// block var name_6306
    DeRefDS(_name_6306);

// block var mode_6307

// block var mkparent_6309

// block var pname_6310
    DeRef(_pname_6310);

// block var pos_6312
    DeRef(_3302);
    _3302 = NOVALUE;
    DeRef(_3308);
    _3308 = NOVALUE;
    return _ret_6311;
    // SubProg create_directory pc: 134 op: BADRETURNF (43)
    ;
}


object _20delete_file(object _name_6349)
{
    object _pfilename_6350 = NOVALUE;
    object _success_6352 = NOVALUE;
// skipping _3323  name type: 0
// skipping _3322  name type: 0
    object _3321 = NOVALUE; // 6353 3321
// skipping _3320  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg delete_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg delete_file pc: 3 op: STARTLINE (58)

    /** filesys.e:802		atom pfilename = machine:allocate_string(name)*/
    // SubProg delete_file pc: 5 op: PROC (27)
    RefDS(_name_6349);
    _0 = _pfilename_6350;
    _pfilename_6350 = _9allocate_string(_name_6349, 0);
    DeRef(_0);
    // SubProg delete_file pc: 10 op: STARTLINE (58)

    /** filesys.e:803		integer success = c_func(xDeleteFile, {pfilename})*/
    // SubProg delete_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg delete_file pc: 14 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_pfilename_6350);
    ((intptr_t*)_2)[1] = _pfilename_6350;
    _3321 = MAKE_SEQ(_1);
    // SubProg delete_file pc: 18 op: C_FUNC (133)
    _success_6352 = call_c(1, _20xDeleteFile_6063, _3321);
    DeRefDS(_3321);
    _3321 = NOVALUE;
    // SubProg delete_file pc: 23 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_success_6352)) {
        _1 = (object)(DBL_PTR(_success_6352)->dbl);
        DeRefDS(_success_6352);
        _success_6352 = _1;
    }
    // SubProg delete_file pc: 25 op: STARTLINE (58)

    /** filesys.e:805		ifdef UNIX then*/
    // SubProg delete_file pc: 27 op: STARTLINE (58)

    /** filesys.e:806			success = not success*/
    // SubProg delete_file pc: 29 op: NOT (7)
    _success_6352 = (_success_6352 == 0);
    // SubProg delete_file pc: 32 op: STARTLINE (58)

    /** filesys.e:809		machine:free(pfilename)*/
    // SubProg delete_file pc: 34 op: PROC (27)
    Ref(_pfilename_6350);
    _9free(_pfilename_6350);
    // SubProg delete_file pc: 37 op: STARTLINE (58)

    /** filesys.e:811		return success*/
    // SubProg delete_file pc: 39 op: RETURNF (28)

// Exiting block BLOCK: delete_file

// block var name_6349
    DeRefDS(_name_6349);

// block var pfilename_6350
    DeRef(_pfilename_6350);
    return _success_6352;
    // SubProg delete_file pc: 43 op: BADRETURNF (43)
    ;
}


object _20curdir(object _drive_id_6358)
{
    object _lCurDir_6359 = NOVALUE;
    object _current_dir_inlined_current_dir_at_6_6361 = NOVALUE;
// skipping _3327  name type: 0
// skipping _3326  name type: 0
    object _3325 = NOVALUE; // 6364 3325
    object _3324 = NOVALUE; // 6363 3324
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg curdir pc: 1 op: INTEGER_CHECK (96)
    // SubProg curdir pc: 3 op: STARTLINE (58)

    /** filesys.e:847		ifdef not LINUX then*/
    // SubProg curdir pc: 5 op: STARTLINE (58)

    /** filesys.e:862	    lCurDir = current_dir()*/
    // SubProg curdir pc: 7 op: STARTLINE (58)

    /** filesys.e:465		return machine_func(M_CURRENT_DIR, 0)*/
    // SubProg curdir pc: 9 op: MACHINE_FUNC (111)
    DeRefi(_lCurDir_6359);
    _lCurDir_6359 = machine(23, 0);
    // SubProg curdir pc: 13 op: NOP1 (159)
    // SubProg curdir pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg curdir pc: 16 op: STARTLINE (58)

    /** filesys.e:863		ifdef not LINUX then*/
    // SubProg curdir pc: 18 op: STARTLINE (58)

    /** filesys.e:870		if (lCurDir[$] != SLASH) then*/
    // SubProg curdir pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_lCurDir_6359)){
            _3324 = SEQ_PTR(_lCurDir_6359)->length;
    }
    else {
        _3324 = 1;
    }
    // SubProg curdir pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lCurDir_6359);
    _3325 = (object)*(((s1_ptr)_2)->base + _3324);
    // SubProg curdir pc: 27 op: NOTEQ_IFW (105)
    if (_3325 == 47)
    goto L1; // [27] 38
    // SubProg curdir pc: 31 op: STARTLINE (58)

    /** filesys.e:871			lCurDir &= SLASH*/
    // SubProg curdir pc: 33 op: CONCAT (15)
    Append(&_lCurDir_6359, _lCurDir_6359, 47);
    // SubProg curdir pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 6356 op: 159
    // SubProg curdir pc: 38 op: STARTLINE (58)

    /** filesys.e:874		return lCurDir*/
    // SubProg curdir pc: 40 op: RETURNF (28)

// Exiting block BLOCK: curdir
    _3325 = NOVALUE;
    return _lCurDir_6359;
    // SubProg curdir pc: 44 op: BADRETURNF (43)
    ;
}


object _20remove_directory(object _dir_name_6430, object _force_6431)
{
    object _pname_6432 = NOVALUE;
    object _ret_6433 = NOVALUE;
    object _files_6434 = NOVALUE;
    object _D_NAME_6435 = NOVALUE;
    object _D_ATTRIBUTES_6436 = NOVALUE;
// skipping _3401  name type: 0
// skipping _3400  name type: 0
    object _3399 = NOVALUE; // 6482 3399
// skipping _3398  name type: 0
// skipping _3397  name type: 0
// skipping _3396  name type: 0
    object _3395 = NOVALUE; // 6477 3395
    object _3394 = NOVALUE; // 6476 3394
    object _3393 = NOVALUE; // 6475 3393
// skipping _3392  name type: 0
    object _3391 = NOVALUE; // 6472 3391
    object _3390 = NOVALUE; // 6471 3390
    object _3389 = NOVALUE; // 6470 3389
    object _3388 = NOVALUE; // 6469 3388
    object _3387 = NOVALUE; // 6468 3387
    object _3386 = NOVALUE; // 6467 3386
    object _3385 = NOVALUE; // 6466 3385
    object _3384 = NOVALUE; // 6464 3384
    object _3383 = NOVALUE; // 6463 3383
    object _3382 = NOVALUE; // 6462 3382
    object _3381 = NOVALUE; // 6461 3381
    object _3380 = NOVALUE; // 6459 3380
// skipping _3379  name type: 0
// skipping _3378  name type: 0
    object _3377 = NOVALUE; // 6454 3377
    object _3376 = NOVALUE; // 6452 3376
// skipping _3375  name type: 0
// skipping _3374  name type: 0
    object _3373 = NOVALUE; // 6448 3373
// skipping _3372  name type: 0
    object _3371 = NOVALUE; // 6445 3371
    object _3370 = NOVALUE; // 6444 3370
// skipping _3369  name type: 0
    object _3368 = NOVALUE; // 6442 3368
    object _3367 = NOVALUE; // 6441 3367
// skipping _3366  name type: 0
    object _3365 = NOVALUE; // 6438 3365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg remove_directory pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg remove_directory pc: 3 op: INTEGER_CHECK (96)
    // SubProg remove_directory pc: 5 op: STARTLINE (58)

    /** filesys.e:1056		integer D_NAME = 1, D_ATTRIBUTES = 2*/
    // SubProg remove_directory pc: 7 op: ASSIGN_I (113)
    _D_NAME_6435 = 1;
    // SubProg remove_directory pc: 10 op: ASSIGN_I (113)
    _D_ATTRIBUTES_6436 = 2;
    // SubProg remove_directory pc: 13 op: STARTLINE (58)

    /** filesys.e:1059	 	if length(dir_name) > 0 then*/
    // SubProg remove_directory pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_name_6430)){
            _3365 = SEQ_PTR(_dir_name_6430)->length;
    }
    else {
        _3365 = 1;
    }
    // SubProg remove_directory pc: 18 op: GREATER_IFW_I (124)
    if (_3365 <= 0)
    goto L1; // [18] 51
    // SubProg remove_directory pc: 22 op: STARTLINE (58)

    /** filesys.e:1060			if dir_name[$] = SLASH then*/
    // SubProg remove_directory pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_name_6430)){
            _3367 = SEQ_PTR(_dir_name_6430)->length;
    }
    else {
        _3367 = 1;
    }
    // SubProg remove_directory pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_name_6430);
    _3368 = (object)*(((s1_ptr)_2)->base + _3367);
    // SubProg remove_directory pc: 31 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3368, 47)){
        _3368 = NOVALUE;
        goto L2; // [31] 50
    }
    _3368 = NOVALUE;
    // SubProg remove_directory pc: 35 op: STARTLINE (58)

    /** filesys.e:1061				dir_name = dir_name[1 .. $-1]*/
    // SubProg remove_directory pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_name_6430)){
            _3370 = SEQ_PTR(_dir_name_6430)->length;
    }
    else {
        _3370 = 1;
    }
    // SubProg remove_directory pc: 40 op: MINUS (10)
    _3371 = _3370 - 1;
    _3370 = NOVALUE;
    // SubProg remove_directory pc: 44 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_dir_name_6430;
    RHS_Slice(_dir_name_6430, 1, _3371);
    // SubProg remove_directory pc: 49 op: NOP1 (159)
L2: // addr: 50 pc: 49 sub: 6428 op: 159
    // SubProg remove_directory pc: 50 op: NOP1 (159)
L1: // addr: 51 pc: 50 sub: 6428 op: 159
    // SubProg remove_directory pc: 51 op: STARTLINE (58)

    /** filesys.e:1065		if length(dir_name) = 0 then*/
    // SubProg remove_directory pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_name_6430)){
            _3373 = SEQ_PTR(_dir_name_6430)->length;
    }
    else {
        _3373 = 1;
    }
    // SubProg remove_directory pc: 56 op: EQUALS_IFW_I (121)
    if (_3373 != 0)
    goto L3; // [56] 67
    // SubProg remove_directory pc: 60 op: STARTLINE (58)

    /** filesys.e:1066			return 0	-- nothing specified to delete.*/
    // SubProg remove_directory pc: 62 op: RETURNF (28)

// Exiting block BLOCK: remove_directory

// block var dir_name_6430
    DeRefDS(_dir_name_6430);

// block var force_6431

// block var pname_6432
    DeRef(_pname_6432);

// block var ret_6433
    DeRef(_ret_6433);

// block var files_6434
    DeRef(_files_6434);

// block var D_NAME_6435

// block var D_ATTRIBUTES_6436
    DeRef(_3371);
    _3371 = NOVALUE;
    return 0;
    // SubProg remove_directory pc: 66 op: NOP1 (159)
L3: // addr: 67 pc: 66 sub: 6428 op: 159
    // SubProg remove_directory pc: 67 op: STARTLINE (58)

    /** filesys.e:1070		ifdef WINDOWS then*/
    // SubProg remove_directory pc: 69 op: STARTLINE (58)

    /** filesys.e:1078		files = dir(dir_name)*/
    // SubProg remove_directory pc: 71 op: PROC (27)
    RefDS(_dir_name_6430);
    _0 = _files_6434;
    _files_6434 = _20dir(_dir_name_6430);
    DeRef(_0);
    // SubProg remove_directory pc: 75 op: STARTLINE (58)

    /** filesys.e:1079		if atom(files) then*/
    // SubProg remove_directory pc: 77 op: IS_AN_ATOM (67)
    _3376 = IS_ATOM(_files_6434);
    // SubProg remove_directory pc: 80 op: IF (20)
    if (_3376 == 0)
    {
        _3376 = NOVALUE;
        goto L4; // [80] 90
    }
    else{
        _3376 = NOVALUE;
    }
    // SubProg remove_directory pc: 83 op: STARTLINE (58)

    /** filesys.e:1080			return 0*/
    // SubProg remove_directory pc: 85 op: RETURNF (28)

// Exiting block BLOCK: remove_directory

// block var dir_name_6430
    DeRefDS(_dir_name_6430);

// block var force_6431

// block var pname_6432
    DeRef(_pname_6432);

// block var ret_6433
    DeRef(_ret_6433);

// block var files_6434
    DeRef(_files_6434);

// block var D_NAME_6435

// block var D_ATTRIBUTES_6436
    DeRef(_3371);
    _3371 = NOVALUE;
    return 0;
    // SubProg remove_directory pc: 89 op: NOP1 (159)
L4: // addr: 90 pc: 89 sub: 6428 op: 159
    // SubProg remove_directory pc: 90 op: STARTLINE (58)

    /** filesys.e:1082		if length( files ) < 2 then*/
    // SubProg remove_directory pc: 92 op: LENGTH (42)
    if (IS_SEQUENCE(_files_6434)){
            _3377 = SEQ_PTR(_files_6434)->length;
    }
    else {
        _3377 = 1;
    }
    // SubProg remove_directory pc: 95 op: LESS_IFW_I (119)
    if (_3377 >= 2)
    goto L5; // [95] 106
    // SubProg remove_directory pc: 99 op: STARTLINE (58)

    /** filesys.e:1083			return 0	-- Supplied dir_name was not a directory*/
    // SubProg remove_directory pc: 101 op: RETURNF (28)

// Exiting block BLOCK: remove_directory

// block var dir_name_6430
    DeRefDS(_dir_name_6430);

// block var force_6431

// block var pname_6432
    DeRef(_pname_6432);

// block var ret_6433
    DeRef(_ret_6433);

// block var files_6434
    DeRef(_files_6434);

// block var D_NAME_6435

// block var D_ATTRIBUTES_6436
    DeRef(_3371);
    _3371 = NOVALUE;
    return 0;
    // SubProg remove_directory pc: 105 op: NOP1 (159)
L5: // addr: 106 pc: 105 sub: 6428 op: 159
    // SubProg remove_directory pc: 106 op: STARTLINE (58)

    /** filesys.e:1085		ifdef WINDOWS then*/
    // SubProg remove_directory pc: 108 op: STARTLINE (58)

    /** filesys.e:1100		dir_name &= SLASH*/
    // SubProg remove_directory pc: 110 op: CONCAT (15)
    Append(&_dir_name_6430, _dir_name_6430, 47);
    // SubProg remove_directory pc: 114 op: STARTLINE (58)

    /** filesys.e:1101		ifdef WINDOWS then*/
    // SubProg remove_directory pc: 116 op: STARTLINE (58)

    /** filesys.e:1115			for i = 1 to length(files) do*/
    // SubProg remove_directory pc: 118 op: LENGTH (42)
    if (IS_SEQUENCE(_files_6434)){
            _3380 = SEQ_PTR(_files_6434)->length;
    }
    else {
        _3380 = 1;
    }
    // SubProg remove_directory pc: 121 op: FOR_I (125)
    {
        object _i_6458;
        _i_6458 = 1;
L6: // addr: 128 pc: 121 sub: 6428 op: 125
        if (_i_6458 > _3380){
            goto L7; // [121] 240
        }
        // SubProg remove_directory pc: 128 op: STARTLINE (58)

        /** filesys.e:1116				if find( files[i][D_NAME], {".",".."}) then*/
        // SubProg remove_directory pc: 130 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_6434);
        _3381 = (object)*(((s1_ptr)_2)->base + _i_6458);
        // SubProg remove_directory pc: 134 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3381);
        _3382 = (object)*(((s1_ptr)_2)->base + _D_NAME_6435);
        _3381 = NOVALUE;
        // SubProg remove_directory pc: 138 op: RIGHT_BRACE_2 (85)
        RefDS(_3272);
        RefDS(_3205);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _3205;
        ((intptr_t *)_2)[2] = _3272;
        _3383 = MAKE_SEQ(_1);
        // SubProg remove_directory pc: 142 op: FIND_FROM (176)
        _3384 = find_from(_3382, _3383, 1);
        _3382 = NOVALUE;
        DeRefDS(_3383);
        _3383 = NOVALUE;
        // SubProg remove_directory pc: 147 op: IF (20)
        if (_3384 == 0)
        {
            _3384 = NOVALUE;
            goto L8; // [147] 155
        }
        else{
            _3384 = NOVALUE;
        }
        // SubProg remove_directory pc: 150 op: STARTLINE (58)

        /** filesys.e:1117					continue*/
        // SubProg remove_directory pc: 152 op: ELSE (23)
        goto L9; // [152] 235
        // SubProg remove_directory pc: 154 op: NOP1 (159)
L8: // addr: 155 pc: 154 sub: 6428 op: 159
        // SubProg remove_directory pc: 155 op: STARTLINE (58)

        /** filesys.e:1119				if eu:find('d', files[i][D_ATTRIBUTES]) then*/
        // SubProg remove_directory pc: 157 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_6434);
        _3385 = (object)*(((s1_ptr)_2)->base + _i_6458);
        // SubProg remove_directory pc: 161 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3385);
        _3386 = (object)*(((s1_ptr)_2)->base + _D_ATTRIBUTES_6436);
        _3385 = NOVALUE;
        // SubProg remove_directory pc: 165 op: FIND_FROM (176)
        _3387 = find_from(100, _3386, 1);
        _3386 = NOVALUE;
        // SubProg remove_directory pc: 170 op: IF (20)
        if (_3387 == 0)
        {
            _3387 = NOVALUE;
            goto LA; // [170] 200
        }
        else{
            _3387 = NOVALUE;
        }
        // SubProg remove_directory pc: 173 op: STARTLINE (58)

        /** filesys.e:1120					ret = remove_directory(dir_name & files[i][D_NAME] & SLASH, force)*/
        // SubProg remove_directory pc: 175 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_6434);
        _3388 = (object)*(((s1_ptr)_2)->base + _i_6458);
        // SubProg remove_directory pc: 179 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3388);
        _3389 = (object)*(((s1_ptr)_2)->base + _D_NAME_6435);
        _3388 = NOVALUE;
        // SubProg remove_directory pc: 183 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = 47;
            concat_list[1] = _3389;
            concat_list[2] = _dir_name_6430;
            Concat_N((object_ptr)&_3390, concat_list, 3);
        }
        _3389 = NOVALUE;
        // SubProg remove_directory pc: 189 op: ASSIGN (18)
        DeRef(_3391);
        _3391 = _force_6431;
        // SubProg remove_directory pc: 192 op: PROC (27)
        _0 = _ret_6433;
        _ret_6433 = _20remove_directory(_3390, _3391);
        DeRef(_0);
        _3390 = NOVALUE;
        _3391 = NOVALUE;
        // SubProg remove_directory pc: 197 op: ELSE (23)
        goto LB; // [197] 219
        // SubProg remove_directory pc: 199 op: NOP1 (159)
LA: // addr: 200 pc: 199 sub: 6428 op: 159
        // SubProg remove_directory pc: 200 op: STARTLINE (58)

        /** filesys.e:1122					ret = delete_file(dir_name & files[i][D_NAME])*/
        // SubProg remove_directory pc: 202 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_files_6434);
        _3393 = (object)*(((s1_ptr)_2)->base + _i_6458);
        // SubProg remove_directory pc: 206 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3393);
        _3394 = (object)*(((s1_ptr)_2)->base + _D_NAME_6435);
        _3393 = NOVALUE;
        // SubProg remove_directory pc: 210 op: CONCAT (15)
        if (IS_SEQUENCE(_dir_name_6430) && IS_ATOM(_3394)) {
            Ref(_3394);
            Append(&_3395, _dir_name_6430, _3394);
        }
        else if (IS_ATOM(_dir_name_6430) && IS_SEQUENCE(_3394)) {
        }
        else {
            Concat((object_ptr)&_3395, _dir_name_6430, _3394);
        }
        _3394 = NOVALUE;
        // SubProg remove_directory pc: 214 op: PROC (27)
        _0 = _ret_6433;
        _ret_6433 = _20delete_file(_3395);
        DeRef(_0);
        _3395 = NOVALUE;
        // SubProg remove_directory pc: 218 op: NOP1 (159)
LB: // addr: 219 pc: 218 sub: 6428 op: 159
        // SubProg remove_directory pc: 219 op: STARTLINE (58)

        /** filesys.e:1124				if not ret then*/
        // SubProg remove_directory pc: 221 op: PRIVATE_INIT_CHECK (30)
        // SubProg remove_directory pc: 223 op: NOT_IFW (108)
        if (IS_ATOM_INT(_ret_6433)) {
            if (_ret_6433 != 0){
                goto LC; // [223] 233
            }
        }
        else {
            if (DBL_PTR(_ret_6433)->dbl != 0.0){
                goto LC; // [223] 233
            }
        }
        // SubProg remove_directory pc: 226 op: STARTLINE (58)

        /** filesys.e:1125					return 0*/
        // SubProg remove_directory pc: 228 op: RETURNF (28)

// Exiting block BLOCK: remove_directory

// block var dir_name_6430
        DeRefDS(_dir_name_6430);

// block var force_6431

// block var pname_6432
        DeRef(_pname_6432);

// block var ret_6433
        DeRef(_ret_6433);

// block var files_6434
        DeRef(_files_6434);

// block var D_NAME_6435

// block var D_ATTRIBUTES_6436
        DeRef(_3371);
        _3371 = NOVALUE;
        return 0;
        // SubProg remove_directory pc: 232 op: NOP1 (159)
LC: // addr: 233 pc: 232 sub: 6428 op: 159
        // SubProg remove_directory pc: 233 op: STARTLINE (58)

        /** filesys.e:1127			end for*/
        // SubProg remove_directory pc: 235 op: ENDFOR_INT_UP1 (54)
L9: // addr: 235 pc: 235 sub: 6428 op: 54
        _i_6458 = _i_6458 + 1;
        goto L6; // [235] 128
L7: // addr: 240 pc: 235 sub: 6428 op: 54
        ;
    }
    // SubProg remove_directory pc: 240 op: STARTLINE (58)

    /** filesys.e:1129		pname = machine:allocate_string(dir_name)*/
    // SubProg remove_directory pc: 242 op: PROC (27)
    RefDS(_dir_name_6430);
    _0 = _pname_6432;
    _pname_6432 = _9allocate_string(_dir_name_6430, 0);
    DeRef(_0);
    // SubProg remove_directory pc: 247 op: STARTLINE (58)

    /** filesys.e:1130		ret = c_func(xRemoveDirectory, {pname})*/
    // SubProg remove_directory pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_directory pc: 251 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_pname_6432);
    ((intptr_t*)_2)[1] = _pname_6432;
    _3399 = MAKE_SEQ(_1);
    // SubProg remove_directory pc: 255 op: C_FUNC (133)
    DeRef(_ret_6433);
    _ret_6433 = call_c(1, _20xRemoveDirectory_6071, _3399);
    DeRefDS(_3399);
    _3399 = NOVALUE;
    // SubProg remove_directory pc: 260 op: STARTLINE (58)

    /** filesys.e:1131		ifdef UNIX then*/
    // SubProg remove_directory pc: 262 op: STARTLINE (58)

    /** filesys.e:1132				ret = not ret */
    // SubProg remove_directory pc: 264 op: NOT (7)
    _0 = _ret_6433;
    if (IS_ATOM_INT(_ret_6433)) {
        _ret_6433 = (_ret_6433 == 0);
    }
    else {
        _ret_6433 = unary_op(NOT, _ret_6433);
    }
    DeRef(_0);
    // SubProg remove_directory pc: 267 op: STARTLINE (58)

    /** filesys.e:1134		machine:free(pname)*/
    // SubProg remove_directory pc: 269 op: PROC (27)
    Ref(_pname_6432);
    _9free(_pname_6432);
    // SubProg remove_directory pc: 272 op: STARTLINE (58)

    /** filesys.e:1135		return ret*/
    // SubProg remove_directory pc: 274 op: RETURNF (28)

// Exiting block BLOCK: remove_directory

// block var dir_name_6430
    DeRefDS(_dir_name_6430);

// block var force_6431

// block var pname_6432
    DeRef(_pname_6432);

// block var files_6434
    DeRef(_files_6434);

// block var D_NAME_6435

// block var D_ATTRIBUTES_6436
    DeRef(_3371);
    _3371 = NOVALUE;
    return _ret_6433;
    // SubProg remove_directory pc: 278 op: BADRETURNF (43)
    ;
}


object _20pathinfo(object _path_6492, object _std_slash_6493)
{
    object _slash_6494 = NOVALUE;
    object _period_6495 = NOVALUE;
    object _ch_6496 = NOVALUE;
    object _dir_name_6497 = NOVALUE;
    object _file_name_6498 = NOVALUE;
    object _file_ext_6499 = NOVALUE;
    object _file_full_6500 = NOVALUE;
    object _drive_id_6501 = NOVALUE;
    object _from_slash_6533 = NOVALUE;
    object _3427 = NOVALUE; // 6538 3427
// skipping _3426  name type: 0
// skipping _3425  name type: 0
// skipping _3424  name type: 0
// skipping _3423  name type: 0
// skipping _3422  name type: 0
// skipping _3421  name type: 0
    object _3420 = NOVALUE; // 6527 3420
    object _3419 = NOVALUE; // 6526 3419
// skipping _3418  name type: 0
// skipping _3417  name type: 0
    object _3416 = NOVALUE; // 6522 3416
    object _3415 = NOVALUE; // 6521 3415
// skipping _3414  name type: 0
    object _3413 = NOVALUE; // 6519 3413
    object _3412 = NOVALUE; // 6518 3412
// skipping _3411  name type: 0
// skipping _3410  name type: 0
    object _3409 = NOVALUE; // 6514 3409
// skipping _3408  name type: 0
    object _3407 = NOVALUE; // 6511 3407
    object _3406 = NOVALUE; // 6509 3406
    object _3405 = NOVALUE; // 6508 3405
    object _3404 = NOVALUE; // 6507 3404
// skipping _3403  name type: 0
    object _3402 = NOVALUE; // 6504 3402
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pathinfo pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 3 op: INTEGER_CHECK (96)
    // SubProg pathinfo pc: 5 op: STARTLINE (58)

    /** filesys.e:1196		dir_name  = ""*/
    // SubProg pathinfo pc: 7 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_dir_name_6497);
    _dir_name_6497 = _5;
    // SubProg pathinfo pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 12 op: STARTLINE (58)

    /** filesys.e:1197		file_name = ""*/
    // SubProg pathinfo pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_name_6498);
    _file_name_6498 = _5;
    // SubProg pathinfo pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 19 op: STARTLINE (58)

    /** filesys.e:1198		file_ext  = ""*/
    // SubProg pathinfo pc: 21 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_ext_6499);
    _file_ext_6499 = _5;
    // SubProg pathinfo pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 26 op: STARTLINE (58)

    /** filesys.e:1199		file_full = ""*/
    // SubProg pathinfo pc: 28 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_full_6500);
    _file_full_6500 = _5;
    // SubProg pathinfo pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 33 op: STARTLINE (58)

    /** filesys.e:1200		drive_id  = ""*/
    // SubProg pathinfo pc: 35 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_drive_id_6501);
    _drive_id_6501 = _5;
    // SubProg pathinfo pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 40 op: STARTLINE (58)

    /** filesys.e:1202		slash = 0*/
    // SubProg pathinfo pc: 42 op: ASSIGN_I (113)
    _slash_6494 = 0;
    // SubProg pathinfo pc: 45 op: STARTLINE (58)

    /** filesys.e:1203		period = 0*/
    // SubProg pathinfo pc: 47 op: ASSIGN_I (113)
    _period_6495 = 0;
    // SubProg pathinfo pc: 50 op: STARTLINE (58)

    /** filesys.e:1205		for i = length(path) to 1 by -1 do*/
    // SubProg pathinfo pc: 52 op: LENGTH (42)
    if (IS_SEQUENCE(_path_6492)){
            _3402 = SEQ_PTR(_path_6492)->length;
    }
    else {
        _3402 = 1;
    }
    // SubProg pathinfo pc: 55 op: FOR_I (125)
    {
        object _i_6503;
        _i_6503 = _3402;
L1: // addr: 62 pc: 55 sub: 6490 op: 125
        if (_i_6503 < 1){
            goto L2; // [55] 122
        }
        // SubProg pathinfo pc: 62 op: STARTLINE (58)

        /** filesys.e:1206			ch = path[i]*/
        // SubProg pathinfo pc: 64 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_path_6492);
        _ch_6496 = (object)*(((s1_ptr)_2)->base + _i_6503);
        if (!IS_ATOM_INT(_ch_6496))
        _ch_6496 = (object)DBL_PTR(_ch_6496)->dbl;
        // SubProg pathinfo pc: 68 op: STARTLINE (58)

        /** filesys.e:1207			if period = 0 and ch = '.' then*/
        // SubProg pathinfo pc: 70 op: EQUALS (3)
        _3404 = (_period_6495 == 0);
        // SubProg pathinfo pc: 74 op: SC1_AND_IF (146)
        if (_3404 == 0) {
            goto L3; // [74] 94
        }
        // SubProg pathinfo pc: 78 op: EQUALS (3)
        _3406 = (_ch_6496 == 46);
        // SubProg pathinfo pc: 82 op: NOP1 (159)
        // SubProg pathinfo pc: 83 op: IF (20)
        if (_3406 == 0)
        {
            DeRef(_3406);
            _3406 = NOVALUE;
            goto L3; // [83] 94
        }
        else{
            DeRef(_3406);
            _3406 = NOVALUE;
        }
        // SubProg pathinfo pc: 86 op: STARTLINE (58)

        /** filesys.e:1208				period = i*/
        // SubProg pathinfo pc: 88 op: ASSIGN_I (113)
        _period_6495 = _i_6503;
        // SubProg pathinfo pc: 91 op: ELSE (23)
        goto L4; // [91] 115
        // SubProg pathinfo pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 6490 op: 159
        // SubProg pathinfo pc: 94 op: STARTLINE (58)

        /** filesys.e:1209			elsif eu:find(ch, SLASHES) then*/
        // SubProg pathinfo pc: 96 op: FIND_FROM (176)
        _3407 = find_from(_ch_6496, _20SLASHES_6087, 1);
        // SubProg pathinfo pc: 101 op: IF (20)
        if (_3407 == 0)
        {
            _3407 = NOVALUE;
            goto L5; // [101] 114
        }
        else{
            _3407 = NOVALUE;
        }
        // SubProg pathinfo pc: 104 op: STARTLINE (58)

        /** filesys.e:1210				slash = i*/
        // SubProg pathinfo pc: 106 op: ASSIGN_I (113)
        _slash_6494 = _i_6503;
        // SubProg pathinfo pc: 109 op: STARTLINE (58)

        /** filesys.e:1211				exit*/
        // SubProg pathinfo pc: 111 op: EXIT (61)
        goto L2; // [111] 122
        // SubProg pathinfo pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 6490 op: 159
        // SubProg pathinfo pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 6490 op: 159
        // SubProg pathinfo pc: 115 op: STARTLINE (58)

        /** filesys.e:1213		end for*/
        // SubProg pathinfo pc: 117 op: ENDFOR_GENERAL (39)
        _i_6503 = _i_6503 + -1;
        goto L1; // [117] 62
L2: // addr: 122 pc: 117 sub: 6490 op: 39
        ;
    }
    // SubProg pathinfo pc: 122 op: STARTLINE (58)

    /** filesys.e:1215		if slash > 0 then*/
    // SubProg pathinfo pc: 124 op: GREATER_IFW_I (124)
    if (_slash_6494 <= 0)
    goto L6; // [124] 142
    // SubProg pathinfo pc: 128 op: STARTLINE (58)

    /** filesys.e:1216			dir_name = path[1..slash-1]*/
    // SubProg pathinfo pc: 130 op: MINUS (10)
    _3409 = _slash_6494 - 1;
    // SubProg pathinfo pc: 134 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_dir_name_6497;
    RHS_Slice(_path_6492, 1, _3409);
    // SubProg pathinfo pc: 139 op: STARTLINE (58)

    /** filesys.e:1218			ifdef not UNIX then*/
    // SubProg pathinfo pc: 141 op: NOP1 (159)
L6: // addr: 142 pc: 141 sub: 6490 op: 159
    // SubProg pathinfo pc: 142 op: STARTLINE (58)

    /** filesys.e:1226		if period > 0 then*/
    // SubProg pathinfo pc: 144 op: GREATER_IFW_I (124)
    if (_period_6495 <= 0)
    goto L7; // [144] 188
    // SubProg pathinfo pc: 148 op: STARTLINE (58)

    /** filesys.e:1227			file_name = path[slash+1..period-1]*/
    // SubProg pathinfo pc: 150 op: PLUS1 (93)
    _3412 = _slash_6494 + 1;
    if (_3412 > MAXINT){
        _3412 = NewDouble((eudouble)_3412);
    }
    // SubProg pathinfo pc: 154 op: MINUS (10)
    _3413 = _period_6495 - 1;
    // SubProg pathinfo pc: 158 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_name_6498;
    RHS_Slice(_path_6492, _3412, _3413);
    // SubProg pathinfo pc: 163 op: STARTLINE (58)

    /** filesys.e:1228			file_ext = path[period+1..$]*/
    // SubProg pathinfo pc: 165 op: PLUS1 (93)
    _3415 = _period_6495 + 1;
    if (_3415 > MAXINT){
        _3415 = NewDouble((eudouble)_3415);
    }
    // SubProg pathinfo pc: 169 op: LENGTH (42)
    if (IS_SEQUENCE(_path_6492)){
            _3416 = SEQ_PTR(_path_6492)->length;
    }
    else {
        _3416 = 1;
    }
    // SubProg pathinfo pc: 172 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_ext_6499;
    RHS_Slice(_path_6492, _3415, _3416);
    // SubProg pathinfo pc: 177 op: STARTLINE (58)

    /** filesys.e:1229			file_full = file_name & '.' & file_ext*/
    // SubProg pathinfo pc: 179 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _file_ext_6499;
        concat_list[1] = 46;
        concat_list[2] = _file_name_6498;
        Concat_N((object_ptr)&_file_full_6500, concat_list, 3);
    }
    // SubProg pathinfo pc: 185 op: ELSE (23)
    goto L8; // [185] 210
    // SubProg pathinfo pc: 187 op: NOP1 (159)
L7: // addr: 188 pc: 187 sub: 6490 op: 159
    // SubProg pathinfo pc: 188 op: STARTLINE (58)

    /** filesys.e:1231			file_name = path[slash+1..$]*/
    // SubProg pathinfo pc: 190 op: PLUS1 (93)
    _3419 = _slash_6494 + 1;
    if (_3419 > MAXINT){
        _3419 = NewDouble((eudouble)_3419);
    }
    // SubProg pathinfo pc: 194 op: LENGTH (42)
    if (IS_SEQUENCE(_path_6492)){
            _3420 = SEQ_PTR(_path_6492)->length;
    }
    else {
        _3420 = 1;
    }
    // SubProg pathinfo pc: 197 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_name_6498;
    RHS_Slice(_path_6492, _3419, _3420);
    // SubProg pathinfo pc: 202 op: STARTLINE (58)

    /** filesys.e:1232			file_full = file_name*/
    // SubProg pathinfo pc: 204 op: ASSIGN (18)
    RefDS(_file_name_6498);
    DeRef(_file_full_6500);
    _file_full_6500 = _file_name_6498;
    // SubProg pathinfo pc: 207 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 209 op: NOP1 (159)
L8: // addr: 210 pc: 209 sub: 6490 op: 159
    // SubProg pathinfo pc: 210 op: STARTLINE (58)

    /** filesys.e:1235		if std_slash != 0 then*/
    // SubProg pathinfo pc: 212 op: NOTEQ_IFW_I (122)
    if (_std_slash_6493 == 0)
    goto L9; // [212] 278
    // SubProg pathinfo pc: 216 op: STARTLINE (58)

    /** filesys.e:1236			if std_slash < 0 then*/
    // SubProg pathinfo pc: 218 op: LESS_IFW_I (119)
    if (_std_slash_6493 >= 0)
    goto LA; // [218] 254
    // SubProg pathinfo pc: 222 op: STARTLINE (58)

    /** filesys.e:1237				std_slash = SLASH*/
    // SubProg pathinfo pc: 224 op: ASSIGN_I (113)
    _std_slash_6493 = 47;
    // SubProg pathinfo pc: 227 op: STARTLINE (58)

    /** filesys.e:1238				ifdef UNIX then*/
    // SubProg pathinfo pc: 229 op: STARTLINE (58)

    /** filesys.e:1239				sequence from_slash = "\\"*/
    // SubProg pathinfo pc: 231 op: ASSIGN (18)
    RefDS(_1404);
    DeRefi(_from_slash_6533);
    _from_slash_6533 = _1404;
    // SubProg pathinfo pc: 234 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 236 op: STARTLINE (58)

    /** filesys.e:1243				dir_name = search:match_replace(from_slash, dir_name, std_slash)*/
    // SubProg pathinfo pc: 238 op: PRIVATE_INIT_CHECK (30)
    // SubProg pathinfo pc: 240 op: PROC (27)
    RefDS(_from_slash_6533);
    RefDS(_dir_name_6497);
    _0 = _dir_name_6497;
    _dir_name_6497 = _19match_replace(_from_slash_6533, _dir_name_6497, 47, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 247 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 249 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var from_slash_6533
    DeRefDSi(_from_slash_6533);
    _from_slash_6533 = NOVALUE;
    // SubProg pathinfo pc: 251 op: ELSE (23)
    goto LB; // [251] 277
    // SubProg pathinfo pc: 253 op: NOP1 (159)
LA: // addr: 254 pc: 253 sub: 6490 op: 159
    // SubProg pathinfo pc: 254 op: STARTLINE (58)

    /** filesys.e:1245				dir_name = search:match_replace("\\", dir_name, std_slash)*/
    // SubProg pathinfo pc: 256 op: PROC (27)
    RefDS(_1404);
    RefDS(_dir_name_6497);
    _0 = _dir_name_6497;
    _dir_name_6497 = _19match_replace(_1404, _dir_name_6497, _std_slash_6493, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 263 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 265 op: STARTLINE (58)

    /** filesys.e:1246				dir_name = search:match_replace("/", dir_name, std_slash)*/
    // SubProg pathinfo pc: 267 op: PROC (27)
    RefDS(_3181);
    RefDS(_dir_name_6497);
    _0 = _dir_name_6497;
    _dir_name_6497 = _19match_replace(_3181, _dir_name_6497, _std_slash_6493, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 274 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 276 op: NOP1 (159)
LB: // addr: 277 pc: 276 sub: 6490 op: 159
    // SubProg pathinfo pc: 277 op: NOP1 (159)
L9: // addr: 278 pc: 277 sub: 6490 op: 159
    // SubProg pathinfo pc: 278 op: STARTLINE (58)

    /** filesys.e:1250		return {dir_name, file_full, file_name, file_ext, drive_id }*/
    // SubProg pathinfo pc: 280 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_dir_name_6497);
    ((intptr_t*)_2)[1] = _dir_name_6497;
    RefDS(_file_full_6500);
    ((intptr_t*)_2)[2] = _file_full_6500;
    RefDS(_file_name_6498);
    ((intptr_t*)_2)[3] = _file_name_6498;
    RefDS(_file_ext_6499);
    ((intptr_t*)_2)[4] = _file_ext_6499;
    RefDS(_drive_id_6501);
    ((intptr_t*)_2)[5] = _drive_id_6501;
    _3427 = MAKE_SEQ(_1);
    // SubProg pathinfo pc: 288 op: RETURNF (28)

// Exiting block BLOCK: pathinfo

// block var path_6492
    DeRefDS(_path_6492);

// block var std_slash_6493

// block var slash_6494

// block var period_6495

// block var ch_6496

// block var dir_name_6497
    DeRefDS(_dir_name_6497);

// block var file_name_6498
    DeRefDS(_file_name_6498);

// block var file_ext_6499
    DeRefDS(_file_ext_6499);

// block var file_full_6500
    DeRefDS(_file_full_6500);

// block var drive_id_6501
    DeRefDS(_drive_id_6501);
    DeRef(_3412);
    _3412 = NOVALUE;
    DeRef(_3409);
    _3409 = NOVALUE;
    DeRef(_3415);
    _3415 = NOVALUE;
    DeRef(_3404);
    _3404 = NOVALUE;
    DeRef(_3419);
    _3419 = NOVALUE;
    DeRef(_3413);
    _3413 = NOVALUE;
    return _3427;
    // SubProg pathinfo pc: 292 op: BADRETURNF (43)
    ;
}


object _20dirname(object _path_6541, object _pcd_6542)
{
    object _data_6543 = NOVALUE;
    object _3432 = NOVALUE; // 6550 3432
// skipping _3431  name type: 0
    object _3430 = NOVALUE; // 6548 3430
    object _3429 = NOVALUE; // 6547 3429
// skipping _3428  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg dirname pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg dirname pc: 3 op: INTEGER_CHECK (96)
    // SubProg dirname pc: 5 op: STARTLINE (58)

    /** filesys.e:1279		data = pathinfo(path)*/
    // SubProg dirname pc: 7 op: PROC (27)
    RefDS(_path_6541);
    _0 = _data_6543;
    _data_6543 = _20pathinfo(_path_6541, 0);
    DeRef(_0);
    // SubProg dirname pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg dirname pc: 14 op: STARTLINE (58)

    /** filesys.e:1280		if pcd then*/
    // SubProg dirname pc: 16 op: IF (20)
    if (_pcd_6542 == 0)
    {
        goto L1; // [16] 40
    }
    else{
    }
    // SubProg dirname pc: 19 op: STARTLINE (58)

    /** filesys.e:1281			if length(data[1]) = 0 then*/
    // SubProg dirname pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_6543);
    _3429 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg dirname pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_3429)){
            _3430 = SEQ_PTR(_3429)->length;
    }
    else {
        _3430 = 1;
    }
    _3429 = NOVALUE;
    // SubProg dirname pc: 28 op: EQUALS_IFW_I (121)
    if (_3430 != 0)
    goto L2; // [28] 39
    // SubProg dirname pc: 32 op: STARTLINE (58)

    /** filesys.e:1282				return "."*/
    // SubProg dirname pc: 34 op: RETURNF (28)
    RefDS(_3205);

// Exiting block BLOCK: dirname

// block var path_6541
    DeRefDS(_path_6541);

// block var pcd_6542

// block var data_6543
    DeRefDS(_data_6543);
    _3429 = NOVALUE;
    return _3205;
    // SubProg dirname pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 6539 op: 159
    // SubProg dirname pc: 39 op: NOP1 (159)
L1: // addr: 40 pc: 39 sub: 6539 op: 159
    // SubProg dirname pc: 40 op: STARTLINE (58)

    /** filesys.e:1285		return data[1]*/
    // SubProg dirname pc: 42 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_6543);
    _3432 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg dirname pc: 46 op: RETURNF (28)
    Ref(_3432);

// Exiting block BLOCK: dirname

// block var path_6541
    DeRefDS(_path_6541);

// block var pcd_6542

// block var data_6543
    DeRefDS(_data_6543);
    _3429 = NOVALUE;
    return _3432;
    // SubProg dirname pc: 50 op: BADRETURNF (43)
    ;
}


object _20filebase(object _path_6570)
{
    object _data_6571 = NOVALUE;
    object _3441 = NOVALUE; // 6573 3441
// skipping _3440  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filebase pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg filebase pc: 3 op: STARTLINE (58)

    /** filesys.e:1375		data = pathinfo(path)*/
    // SubProg filebase pc: 5 op: PROC (27)
    RefDS(_path_6570);
    _0 = _data_6571;
    _data_6571 = _20pathinfo(_path_6570, 0);
    DeRef(_0);
    // SubProg filebase pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg filebase pc: 12 op: STARTLINE (58)

    /** filesys.e:1377		return data[3]*/
    // SubProg filebase pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_6571);
    _3441 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg filebase pc: 18 op: RETURNF (28)
    Ref(_3441);

// Exiting block BLOCK: filebase

// block var path_6570
    DeRefDS(_path_6570);

// block var data_6571
    DeRefDS(_data_6571);
    return _3441;
    // SubProg filebase pc: 22 op: BADRETURNF (43)
    ;
}


object _20fileext(object _path_6576)
{
    object _data_6577 = NOVALUE;
    object _3443 = NOVALUE; // 6579 3443
// skipping _3442  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fileext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg fileext pc: 3 op: STARTLINE (58)

    /** filesys.e:1403		data = pathinfo(path)*/
    // SubProg fileext pc: 5 op: PROC (27)
    RefDS(_path_6576);
    _0 = _data_6577;
    _data_6577 = _20pathinfo(_path_6576, 0);
    DeRef(_0);
    // SubProg fileext pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg fileext pc: 12 op: STARTLINE (58)

    /** filesys.e:1404		return data[4]*/
    // SubProg fileext pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_6577);
    _3443 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg fileext pc: 18 op: RETURNF (28)
    Ref(_3443);

// Exiting block BLOCK: fileext

// block var path_6576
    DeRefDS(_path_6576);

// block var data_6577
    DeRefDS(_data_6577);
    return _3443;
    // SubProg fileext pc: 22 op: BADRETURNF (43)
    ;
}


object _20defaultext(object _path_6588, object _defext_6589)
{
    object _3458 = NOVALUE; // 6610 3458
// skipping _3457  name type: 0
// skipping _3456  name type: 0
    object _3455 = NOVALUE; // 6607 3455
// skipping _3454  name type: 0
    object _3453 = NOVALUE; // 6603 3453
    object _3452 = NOVALUE; // 6601 3452
    object _3451 = NOVALUE; // 6600 3451
// skipping _3450  name type: 0
    object _3449 = NOVALUE; // 6597 3449
    object _3448 = NOVALUE; // 6595 3448
// skipping _3447  name type: 0
    object _3446 = NOVALUE; // 6591 3446
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defaultext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg defaultext pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg defaultext pc: 5 op: STARTLINE (58)

    /** filesys.e:1455		if length(defext) = 0 then*/
    // SubProg defaultext pc: 7 op: LENGTH (42)
    // Known sequence length:
    _3446 = 3;
    // SubProg defaultext pc: 10 op: EQUALS_IFW_I (121)
    // SubProg defaultext pc: 21 op: STARTLINE (58)

    /** filesys.e:1459		for i = length(path) to 1 by -1 do*/
    // SubProg defaultext pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_path_6588)){
            _3448 = SEQ_PTR(_path_6588)->length;
    }
    else {
        _3448 = 1;
    }
    // SubProg defaultext pc: 26 op: FOR_I (125)
    {
        object _i_6594;
        _i_6594 = _3448;
L1: // addr: 33 pc: 26 sub: 6586 op: 125
        if (_i_6594 < 1){
            goto L2; // [26] 95
        }
        // SubProg defaultext pc: 33 op: STARTLINE (58)

        /** filesys.e:1460			if path[i] = '.' then*/
        // SubProg defaultext pc: 35 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_path_6588);
        _3449 = (object)*(((s1_ptr)_2)->base + _i_6594);
        // SubProg defaultext pc: 39 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _3449, 46)){
            _3449 = NOVALUE;
            goto L3; // [39] 50
        }
        _3449 = NOVALUE;
        // SubProg defaultext pc: 43 op: STARTLINE (58)

        /** filesys.e:1462				return path*/
        // SubProg defaultext pc: 45 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var defext_6589
        DeRefDSi(_defext_6589);
        return _path_6588;
        // SubProg defaultext pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 6586 op: 159
        // SubProg defaultext pc: 50 op: STARTLINE (58)

        /** filesys.e:1464			if find(path[i], SLASHES) then*/
        // SubProg defaultext pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_path_6588);
        _3451 = (object)*(((s1_ptr)_2)->base + _i_6594);
        // SubProg defaultext pc: 56 op: FIND_FROM (176)
        _3452 = find_from(_3451, _20SLASHES_6087, 1);
        _3451 = NOVALUE;
        // SubProg defaultext pc: 61 op: IF (20)
        if (_3452 == 0)
        {
            _3452 = NOVALUE;
            goto L4; // [61] 88
        }
        else{
            _3452 = NOVALUE;
        }
        // SubProg defaultext pc: 64 op: STARTLINE (58)

        /** filesys.e:1465				if i = length(path) then*/
        // SubProg defaultext pc: 66 op: LENGTH (42)
        if (IS_SEQUENCE(_path_6588)){
                _3453 = SEQ_PTR(_path_6588)->length;
        }
        else {
            _3453 = 1;
        }
        // SubProg defaultext pc: 69 op: EQUALS_IFW_I (121)
        if (_i_6594 != _3453)
        goto L2; // [69] 95
        // SubProg defaultext pc: 73 op: STARTLINE (58)

        /** filesys.e:1467					return path*/
        // SubProg defaultext pc: 75 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var defext_6589
        DeRefDSi(_defext_6589);
        return _path_6588;
        // SubProg defaultext pc: 79 op: ELSE (23)
        goto L5; // [79] 87
        // SubProg defaultext pc: 81 op: NOP1 (159)
        // SubProg defaultext pc: 82 op: STARTLINE (58)

        /** filesys.e:1470					exit*/
        // SubProg defaultext pc: 84 op: EXIT (61)
        goto L2; // [84] 95
        // SubProg defaultext pc: 86 op: NOP1 (159)
L5: // addr: 87 pc: 86 sub: 6586 op: 159
        // SubProg defaultext pc: 87 op: NOP1 (159)
L4: // addr: 88 pc: 87 sub: 6586 op: 159
        // SubProg defaultext pc: 88 op: STARTLINE (58)

        /** filesys.e:1473		end for*/
        // SubProg defaultext pc: 90 op: ENDFOR_GENERAL (39)
        _i_6594 = _i_6594 + -1;
        goto L1; // [90] 33
L2: // addr: 95 pc: 90 sub: 6586 op: 39
        ;
    }
    // SubProg defaultext pc: 95 op: STARTLINE (58)

    /** filesys.e:1475		if defext[1] != '.' then*/
    // SubProg defaultext pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defext_6589);
    _3455 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg defaultext pc: 101 op: NOTEQ_IFW (105)
    if (_3455 == 46)
    goto L6; // [101] 112
    // SubProg defaultext pc: 105 op: STARTLINE (58)

    /** filesys.e:1476			path &= '.'*/
    // SubProg defaultext pc: 107 op: CONCAT (15)
    Append(&_path_6588, _path_6588, 46);
    // SubProg defaultext pc: 111 op: NOP1 (159)
L6: // addr: 112 pc: 111 sub: 6586 op: 159
    // SubProg defaultext pc: 112 op: STARTLINE (58)

    /** filesys.e:1479		return path & defext*/
    // SubProg defaultext pc: 114 op: CONCAT (15)
    Concat((object_ptr)&_3458, _path_6588, _defext_6589);
    // SubProg defaultext pc: 118 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var path_6588
    DeRefDS(_path_6588);

// block var defext_6589
    DeRefDSi(_defext_6589);
    _3455 = NOVALUE;
    return _3458;
    // SubProg defaultext pc: 122 op: BADRETURNF (43)
    ;
}


object _20absolute_path(object _filename_6613)
{
    object _3462 = NOVALUE; // 6619 3462
    object _3461 = NOVALUE; // 6618 3461
// skipping _3460  name type: 0
    object _3459 = NOVALUE; // 6615 3459
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg absolute_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg absolute_path pc: 3 op: STARTLINE (58)

    /** filesys.e:1514		if length(filename) = 0 then*/
    // SubProg absolute_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_6613)){
            _3459 = SEQ_PTR(_filename_6613)->length;
    }
    else {
        _3459 = 1;
    }
    // SubProg absolute_path pc: 8 op: EQUALS_IFW_I (121)
    if (_3459 != 0)
    goto L1; // [8] 19
    // SubProg absolute_path pc: 12 op: STARTLINE (58)

    /** filesys.e:1515			return 0*/
    // SubProg absolute_path pc: 14 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_6613
    DeRefDS(_filename_6613);
    return 0;
    // SubProg absolute_path pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 6611 op: 159
    // SubProg absolute_path pc: 19 op: STARTLINE (58)

    /** filesys.e:1518		if eu:find(filename[1], SLASHES) then*/
    // SubProg absolute_path pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_filename_6613);
    _3461 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg absolute_path pc: 25 op: FIND_FROM (176)
    _3462 = find_from(_3461, _20SLASHES_6087, 1);
    _3461 = NOVALUE;
    // SubProg absolute_path pc: 30 op: IF (20)
    if (_3462 == 0)
    {
        _3462 = NOVALUE;
        goto L2; // [30] 40
    }
    else{
        _3462 = NOVALUE;
    }
    // SubProg absolute_path pc: 33 op: STARTLINE (58)

    /** filesys.e:1519			return 1*/
    // SubProg absolute_path pc: 35 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_6613
    DeRefDS(_filename_6613);
    return 1;
    // SubProg absolute_path pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 6611 op: 159
    // SubProg absolute_path pc: 40 op: STARTLINE (58)

    /** filesys.e:1522		ifdef WINDOWS then*/
    // SubProg absolute_path pc: 42 op: STARTLINE (58)

    /** filesys.e:1539		return 0*/
    // SubProg absolute_path pc: 44 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_6613
    DeRefDS(_filename_6613);
    return 0;
    // SubProg absolute_path pc: 48 op: BADRETURNF (43)
    ;
}


object _20canonical_path(object _path_in_6633, object _directory_given_6634, object _case_flags_6635)
{
    object _lPath_6636 = NOVALUE;
    object _lPosA_6637 = NOVALUE;
    object _lPosB_6638 = NOVALUE;
    object _lLevel_6639 = NOVALUE;
    object _lHome_6640 = NOVALUE;
    object _wildcard_suffix_6682 = NOVALUE;
    object _first_wildcard_at_6683 = NOVALUE;
    object _last_slash_6686 = NOVALUE;
    object _sl_6739 = NOVALUE;
    object _short_name_6742 = NOVALUE;
    object _correct_name_6745 = NOVALUE;
    object _lower_name_6748 = NOVALUE;
    object _part_6764 = NOVALUE;
    object _list_6768 = NOVALUE;
    object _supplied_name_6771 = NOVALUE;
    object _read_name_6790 = NOVALUE;
    object _read_name_6815 = NOVALUE;
    object _3642 = NOVALUE; // 6868 3642
// skipping _3641  name type: 0
    object _3640 = NOVALUE; // 6865 3640
    object _3639 = NOVALUE; // 6864 3639
    object _3638 = NOVALUE; // 6863 3638
    object _3637 = NOVALUE; // 6862 3637
    object _3636 = NOVALUE; // 6861 3636
// skipping _3635  name type: 0
    object _3634 = NOVALUE; // 6858 3634
    object _3633 = NOVALUE; // 6857 3633
    object _3632 = NOVALUE; // 6856 3632
    object _3631 = NOVALUE; // 6855 3631
    object _3630 = NOVALUE; // 6853 3630
    object _3629 = NOVALUE; // 6852 3629
    object _3628 = NOVALUE; // 6851 3628
    object _3627 = NOVALUE; // 6850 3627
// skipping _3626  name type: 0
    object _3625 = NOVALUE; // 6847 3625
    object _3624 = NOVALUE; // 6846 3624
    object _3623 = NOVALUE; // 6845 3623
    object _3622 = NOVALUE; // 6844 3622
    object _3621 = NOVALUE; // 6843 3621
    object _3620 = NOVALUE; // 6842 3620
    object _3619 = NOVALUE; // 6840 3619
    object _3618 = NOVALUE; // 6839 3618
    object _3617 = NOVALUE; // 6838 3617
// skipping _3616  name type: 0
    object _3615 = NOVALUE; // 6836 3615
    object _3614 = NOVALUE; // 6835 3614
    object _3613 = NOVALUE; // 6834 3613
    object _3612 = NOVALUE; // 6833 3612
    object _3611 = NOVALUE; // 6832 3611
    object _3610 = NOVALUE; // 6831 3610
    object _3609 = NOVALUE; // 6830 3609
    object _3608 = NOVALUE; // 6829 3608
    object _3607 = NOVALUE; // 6828 3607
    object _3606 = NOVALUE; // 6827 3606
    object _3605 = NOVALUE; // 6826 3605
    object _3604 = NOVALUE; // 6825 3604
    object _3603 = NOVALUE; // 6823 3603
    object _3602 = NOVALUE; // 6822 3602
    object _3601 = NOVALUE; // 6820 3601
// skipping _3600  name type: 0
    object _3599 = NOVALUE; // 6816 3599
    object _3598 = NOVALUE; // 6814 3598
    object _3597 = NOVALUE; // 6811 3597
    object _3596 = NOVALUE; // 6810 3596
    object _3595 = NOVALUE; // 6809 3595
// skipping _3594  name type: 0
    object _3593 = NOVALUE; // 6807 3593
    object _3592 = NOVALUE; // 6806 3592
    object _3591 = NOVALUE; // 6805 3591
    object _3590 = NOVALUE; // 6804 3590
    object _3589 = NOVALUE; // 6803 3589
    object _3588 = NOVALUE; // 6802 3588
    object _3587 = NOVALUE; // 6801 3587
    object _3586 = NOVALUE; // 6800 3586
    object _3585 = NOVALUE; // 6799 3585
    object _3584 = NOVALUE; // 6798 3584
    object _3583 = NOVALUE; // 6797 3583
    object _3582 = NOVALUE; // 6796 3582
    object _3581 = NOVALUE; // 6794 3581
// skipping _3580  name type: 0
    object _3579 = NOVALUE; // 6791 3579
    object _3578 = NOVALUE; // 6789 3578
// skipping _3577  name type: 0
    object _3576 = NOVALUE; // 6785 3576
    object _3575 = NOVALUE; // 6784 3575
    object _3574 = NOVALUE; // 6783 3574
    object _3573 = NOVALUE; // 6782 3573
    object _3572 = NOVALUE; // 6779 3572
// skipping _3571  name type: 0
    object _3570 = NOVALUE; // 6776 3570
    object _3569 = NOVALUE; // 6775 3569
    object _3568 = NOVALUE; // 6774 3568
    object _3567 = NOVALUE; // 6773 3567
    object _3566 = NOVALUE; // 6772 3566
// skipping _3565  name type: 0
    object _3564 = NOVALUE; // 6769 3564
// skipping _3563  name type: 0
    object _3562 = NOVALUE; // 6766 3562
    object _3561 = NOVALUE; // 6765 3561
    object _3559 = NOVALUE; // 6762 3559
    object _3558 = NOVALUE; // 6761 3558
// skipping _3557  name type: 0
    object _3556 = NOVALUE; // 6757 3556
    object _3555 = NOVALUE; // 6756 3555
    object _3554 = NOVALUE; // 6755 3554
// skipping _3553  name type: 0
    object _3552 = NOVALUE; // 6753 3552
    object _3551 = NOVALUE; // 6752 3551
// skipping _3550  name type: 0
    object _3549 = NOVALUE; // 6749 3549
// skipping _3548  name type: 0
    object _3547 = NOVALUE; // 6746 3547
// skipping _3546  name type: 0
    object _3545 = NOVALUE; // 6743 3545
// skipping _3544  name type: 0
// skipping _3543  name type: 0
// skipping _3542  name type: 0
// skipping _3541  name type: 0
// skipping _3540  name type: 0
// skipping _3539  name type: 0
    object _3538 = NOVALUE; // 6730 3538
// skipping _3537  name type: 0
// skipping _3536  name type: 0
    object _3535 = NOVALUE; // 6726 3535
    object _3534 = NOVALUE; // 6725 3534
    object _3533 = NOVALUE; // 6724 3533
    object _3532 = NOVALUE; // 6723 3532
// skipping _3531  name type: 0
// skipping _3530  name type: 0
// skipping _3529  name type: 0
// skipping _3528  name type: 0
// skipping _3527  name type: 0
    object _3526 = NOVALUE; // 6715 3526
// skipping _3525  name type: 0
// skipping _3524  name type: 0
// skipping _3523  name type: 0
    object _3522 = NOVALUE; // 6710 3522
    object _3521 = NOVALUE; // 6709 3521
    object _3520 = NOVALUE; // 6708 3520
    object _3519 = NOVALUE; // 6707 3519
    object _3518 = NOVALUE; // 6706 3518
// skipping _3517  name type: 0
    object _3516 = NOVALUE; // 6703 3516
    object _3515 = NOVALUE; // 6702 3515
    object _3514 = NOVALUE; // 6701 3514
    object _3512 = NOVALUE; // 6699 3512
    object _3511 = NOVALUE; // 6698 3511
    object _3510 = NOVALUE; // 6697 3510
    object _3509 = NOVALUE; // 6696 3509
// skipping _3508  name type: 0
    object _3507 = NOVALUE; // 6691 3507
// skipping _3506  name type: 0
    object _3505 = NOVALUE; // 6689 3505
// skipping _3504  name type: 0
// skipping _3503  name type: 0
// skipping _3502  name type: 0
    object _3501 = NOVALUE; // 6680 3501
    object _3500 = NOVALUE; // 6679 3500
// skipping _3499  name type: 0
    object _3498 = NOVALUE; // 6676 3498
    object _3497 = NOVALUE; // 6675 3497
    object _3496 = NOVALUE; // 6674 3496
    object _3495 = NOVALUE; // 6673 3495
    object _3494 = NOVALUE; // 6672 3494
    object _3493 = NOVALUE; // 6671 3493
    object _3492 = NOVALUE; // 6670 3492
// skipping _3491  name type: 0
// skipping _3490  name type: 0
    object _3489 = NOVALUE; // 6666 3489
    object _3488 = NOVALUE; // 6665 3488
// skipping _3485  name type: 0
    object _3483 = NOVALUE; // 6659 3483
    object _3482 = NOVALUE; // 6658 3482
    object _3481 = NOVALUE; // 6657 3481
    object _3480 = NOVALUE; // 6656 3480
    object _3479 = NOVALUE; // 6655 3479
// skipping _3478  name type: 0
    object _3477 = NOVALUE; // 6652 3477
    object _3476 = NOVALUE; // 6651 3476
    object _3475 = NOVALUE; // 6650 3475
    object _3474 = NOVALUE; // 6649 3474
    object _3473 = NOVALUE; // 6648 3473
    object _3472 = NOVALUE; // 6647 3472
    object _3471 = NOVALUE; // 6646 3471
    object _3470 = NOVALUE; // 6645 3470
    object _3469 = NOVALUE; // 6644 3469
    object _3468 = NOVALUE; // 6643 3468
    object _3467 = NOVALUE; // 6642 3467
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg canonical_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 3 op: INTEGER_CHECK (96)
    // SubProg canonical_path pc: 5 op: INTEGER_CHECK (96)
    // SubProg canonical_path pc: 7 op: STARTLINE (58)

    /** filesys.e:1607	    sequence lPath = ""*/
    // SubProg canonical_path pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lPath_6636);
    _lPath_6636 = _5;
    // SubProg canonical_path pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 14 op: STARTLINE (58)

    /** filesys.e:1608	    integer lPosA = -1*/
    // SubProg canonical_path pc: 16 op: ASSIGN_I (113)
    _lPosA_6637 = -1;
    // SubProg canonical_path pc: 19 op: STARTLINE (58)

    /** filesys.e:1609	    integer lPosB = -1*/
    // SubProg canonical_path pc: 21 op: ASSIGN_I (113)
    _lPosB_6638 = -1;
    // SubProg canonical_path pc: 24 op: STARTLINE (58)

    /** filesys.e:1610	    sequence lLevel = ""*/
    // SubProg canonical_path pc: 26 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_lLevel_6639);
    _lLevel_6639 = _5;
    // SubProg canonical_path pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 31 op: STARTLINE (58)

    /** filesys.e:1612	    path_in = path_in*/
    // SubProg canonical_path pc: 33 op: ASSIGN (18)
    RefDS(_path_in_6633);
    DeRefDS(_path_in_6633);
    _path_in_6633 = _path_in_6633;
    // SubProg canonical_path pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 38 op: STARTLINE (58)

    /** filesys.e:1614		ifdef UNIX then*/
    // SubProg canonical_path pc: 40 op: STARTLINE (58)

    /** filesys.e:1615			lPath = path_in*/
    // SubProg canonical_path pc: 42 op: ASSIGN (18)
    RefDS(_path_in_6633);
    DeRefDS(_lPath_6636);
    _lPath_6636 = _path_in_6633;
    // SubProg canonical_path pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 47 op: STARTLINE (58)

    /** filesys.e:1623	    if (length(lPath) > 2 and lPath[1] = '"' and lPath[$] = '"') then*/
    // SubProg canonical_path pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3467 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3467 = 1;
    }
    // SubProg canonical_path pc: 52 op: GREATER (6)
    _3468 = (_3467 > 2);
    _3467 = NOVALUE;
    // SubProg canonical_path pc: 56 op: SC1_AND (141)
    if (_3468 == 0) {
        _3469 = 0;
        goto L1; // [56] 72
    }
    // SubProg canonical_path pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3470 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 64 op: EQUALS (3)
    if (IS_ATOM_INT(_3470)) {
        _3471 = (_3470 == 34);
    }
    else {
        _3471 = binary_op(EQUALS, _3470, 34);
    }
    _3470 = NOVALUE;
    // SubProg canonical_path pc: 68 op: SC2_AND (142)
    if (IS_ATOM_INT(_3471))
    _3469 = (_3471 != 0);
    else
    _3469 = DBL_PTR(_3471)->dbl != 0.0;
    // SubProg canonical_path pc: 71 op: NOP1 (159)
L1: // addr: 72 pc: 71 sub: 6631 op: 159
    // SubProg canonical_path pc: 72 op: SC1_AND (141)
    if (_3469 == 0) {
        DeRef(_3472);
        _3472 = 0;
        goto L2; // [72] 91
    }
    // SubProg canonical_path pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3473 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3473 = 1;
    }
    // SubProg canonical_path pc: 79 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3474 = (object)*(((s1_ptr)_2)->base + _3473);
    // SubProg canonical_path pc: 83 op: EQUALS (3)
    if (IS_ATOM_INT(_3474)) {
        _3475 = (_3474 == 34);
    }
    else {
        _3475 = binary_op(EQUALS, _3474, 34);
    }
    _3474 = NOVALUE;
    // SubProg canonical_path pc: 87 op: SC2_AND (142)
    if (IS_ATOM_INT(_3475))
    _3472 = (_3475 != 0);
    else
    _3472 = DBL_PTR(_3475)->dbl != 0.0;
    // SubProg canonical_path pc: 90 op: NOP1 (159)
L2: // addr: 91 pc: 90 sub: 6631 op: 159
    // SubProg canonical_path pc: 91 op: IF (20)
    if (_3472 == 0)
    {
        _3472 = NOVALUE;
        goto L3; // [91] 109
    }
    else{
        _3472 = NOVALUE;
    }
    // SubProg canonical_path pc: 94 op: STARTLINE (58)

    /** filesys.e:1624	        lPath = lPath[2..$-1]*/
    // SubProg canonical_path pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3476 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3476 = 1;
    }
    // SubProg canonical_path pc: 99 op: MINUS (10)
    _3477 = _3476 - 1;
    _3476 = NOVALUE;
    // SubProg canonical_path pc: 103 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_lPath_6636;
    RHS_Slice(_lPath_6636, 2, _3477);
    // SubProg canonical_path pc: 108 op: NOP1 (159)
L3: // addr: 109 pc: 108 sub: 6631 op: 159
    // SubProg canonical_path pc: 109 op: STARTLINE (58)

    /** filesys.e:1628	    if (length(lPath) > 0 and lPath[1] = '~') then*/
    // SubProg canonical_path pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3479 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3479 = 1;
    }
    // SubProg canonical_path pc: 114 op: GREATER (6)
    _3480 = (_3479 > 0);
    _3479 = NOVALUE;
    // SubProg canonical_path pc: 118 op: SC1_AND (141)
    if (_3480 == 0) {
        DeRef(_3481);
        _3481 = 0;
        goto L4; // [118] 134
    }
    // SubProg canonical_path pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3482 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 126 op: EQUALS (3)
    if (IS_ATOM_INT(_3482)) {
        _3483 = (_3482 == 126);
    }
    else {
        _3483 = binary_op(EQUALS, _3482, 126);
    }
    _3482 = NOVALUE;
    // SubProg canonical_path pc: 130 op: SC2_AND (142)
    if (IS_ATOM_INT(_3483))
    _3481 = (_3483 != 0);
    else
    _3481 = DBL_PTR(_3483)->dbl != 0.0;
    // SubProg canonical_path pc: 133 op: NOP1 (159)
L4: // addr: 134 pc: 133 sub: 6631 op: 159
    // SubProg canonical_path pc: 134 op: IF (20)
    if (_3481 == 0)
    {
        _3481 = NOVALUE;
        goto L5; // [134] 222
    }
    else{
        _3481 = NOVALUE;
    }
    // SubProg canonical_path pc: 137 op: STARTLINE (58)

    /** filesys.e:1630			lHome = getenv("HOME")*/
    // SubProg canonical_path pc: 139 op: GETENV (91)
    DeRefi(_lHome_6640);
    _lHome_6640 = EGetEnv(_3484);
    // SubProg canonical_path pc: 142 op: STARTLINE (58)

    /** filesys.e:1631			ifdef WINDOWS then*/
    // SubProg canonical_path pc: 144 op: STARTLINE (58)

    /** filesys.e:1637			if lHome[$] != SLASH then*/
    // SubProg canonical_path pc: 146 op: LENGTH (42)
    if (IS_SEQUENCE(_lHome_6640)){
            _3488 = SEQ_PTR(_lHome_6640)->length;
    }
    else {
        _3488 = 1;
    }
    // SubProg canonical_path pc: 149 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_lHome_6640);
    _3489 = (object)*(((s1_ptr)_2)->base + _3488);
    // SubProg canonical_path pc: 153 op: NOTEQ_IFW (105)
    if (_3489 == 47)
    goto L6; // [153] 164
    // SubProg canonical_path pc: 157 op: STARTLINE (58)

    /** filesys.e:1638				lHome &= SLASH*/
    // SubProg canonical_path pc: 159 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_6640) && IS_ATOM(47)) {
        Append(&_lHome_6640, _lHome_6640, 47);
    }
    else if (IS_ATOM(_lHome_6640) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_lHome_6640, _lHome_6640, 47);
    }
    // SubProg canonical_path pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 6631 op: 159
    // SubProg canonical_path pc: 164 op: STARTLINE (58)

    /** filesys.e:1641			if length(lPath) > 1 and lPath[2] = SLASH then*/
    // SubProg canonical_path pc: 166 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3492 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3492 = 1;
    }
    // SubProg canonical_path pc: 169 op: GREATER (6)
    _3493 = (_3492 > 1);
    _3492 = NOVALUE;
    // SubProg canonical_path pc: 173 op: SC1_AND_IF (146)
    if (_3493 == 0) {
        goto L7; // [173] 206
    }
    // SubProg canonical_path pc: 177 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3495 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg canonical_path pc: 181 op: EQUALS (3)
    if (IS_ATOM_INT(_3495)) {
        _3496 = (_3495 == 47);
    }
    else {
        _3496 = binary_op(EQUALS, _3495, 47);
    }
    _3495 = NOVALUE;
    // SubProg canonical_path pc: 185 op: NOP1 (159)
    // SubProg canonical_path pc: 186 op: IF (20)
    if (_3496 == 0) {
        DeRef(_3496);
        _3496 = NOVALUE;
        goto L7; // [186] 206
    }
    else {
        if (!IS_ATOM_INT(_3496) && DBL_PTR(_3496)->dbl == 0.0){
            DeRef(_3496);
            _3496 = NOVALUE;
            goto L7; // [186] 206
        }
        DeRef(_3496);
        _3496 = NOVALUE;
    }
    DeRef(_3496);
    _3496 = NOVALUE;
    // SubProg canonical_path pc: 189 op: STARTLINE (58)

    /** filesys.e:1642				lPath = lHome & lPath[3 .. $]*/
    // SubProg canonical_path pc: 191 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3497 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3497 = 1;
    }
    // SubProg canonical_path pc: 194 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3498;
    RHS_Slice(_lPath_6636, 3, _3497);
    // SubProg canonical_path pc: 199 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_6640) && IS_ATOM(_3498)) {
    }
    else if (IS_ATOM(_lHome_6640) && IS_SEQUENCE(_3498)) {
        Ref(_lHome_6640);
        Prepend(&_lPath_6636, _3498, _lHome_6640);
    }
    else {
        Concat((object_ptr)&_lPath_6636, _lHome_6640, _3498);
    }
    DeRefDS(_3498);
    _3498 = NOVALUE;
    // SubProg canonical_path pc: 203 op: ELSE (23)
    goto L8; // [203] 221
    // SubProg canonical_path pc: 205 op: NOP1 (159)
L7: // addr: 206 pc: 205 sub: 6631 op: 159
    // SubProg canonical_path pc: 206 op: STARTLINE (58)

    /** filesys.e:1644				lPath = lHome & lPath[2 .. $]*/
    // SubProg canonical_path pc: 208 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3500 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3500 = 1;
    }
    // SubProg canonical_path pc: 211 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3501;
    RHS_Slice(_lPath_6636, 2, _3500);
    // SubProg canonical_path pc: 216 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_6640) && IS_ATOM(_3501)) {
    }
    else if (IS_ATOM(_lHome_6640) && IS_SEQUENCE(_3501)) {
        Ref(_lHome_6640);
        Prepend(&_lPath_6636, _3501, _lHome_6640);
    }
    else {
        Concat((object_ptr)&_lPath_6636, _lHome_6640, _3501);
    }
    DeRefDS(_3501);
    _3501 = NOVALUE;
    // SubProg canonical_path pc: 220 op: NOP1 (159)
L8: // addr: 221 pc: 220 sub: 6631 op: 159
    // SubProg canonical_path pc: 221 op: NOP1 (159)
L5: // addr: 222 pc: 221 sub: 6631 op: 159
    // SubProg canonical_path pc: 222 op: STARTLINE (58)

    /** filesys.e:1648		ifdef WINDOWS then*/
    // SubProg canonical_path pc: 224 op: STARTLINE (58)

    /** filesys.e:1658		sequence wildcard_suffix*/
    // SubProg canonical_path pc: 226 op: STARTLINE (58)

    /** filesys.e:1659		integer first_wildcard_at = find_first_wildcard( lPath )*/
    // SubProg canonical_path pc: 228 op: PROC (27)
    RefDS(_lPath_6636);
    _first_wildcard_at_6683 = _20find_first_wildcard(_lPath_6636, 1);
    // SubProg canonical_path pc: 233 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_6683)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_6683)->dbl);
        DeRefDS(_first_wildcard_at_6683);
        _first_wildcard_at_6683 = _1;
    }
    // SubProg canonical_path pc: 235 op: STARTLINE (58)

    /** filesys.e:1660		if first_wildcard_at then*/
    // SubProg canonical_path pc: 237 op: IF (20)
    if (_first_wildcard_at_6683 == 0)
    {
        goto L9; // [237] 298
    }
    else{
    }
    // SubProg canonical_path pc: 240 op: STARTLINE (58)

    /** filesys.e:1661			integer last_slash = search:rfind( SLASH, lPath, first_wildcard_at )*/
    // SubProg canonical_path pc: 242 op: PROC (27)
    RefDS(_lPath_6636);
    _last_slash_6686 = _19rfind(47, _lPath_6636, _first_wildcard_at_6683);
    // SubProg canonical_path pc: 248 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_last_slash_6686)) {
        _1 = (object)(DBL_PTR(_last_slash_6686)->dbl);
        DeRefDS(_last_slash_6686);
        _last_slash_6686 = _1;
    }
    // SubProg canonical_path pc: 250 op: STARTLINE (58)

    /** filesys.e:1662			if last_slash then*/
    // SubProg canonical_path pc: 252 op: IF (20)
    if (_last_slash_6686 == 0)
    {
        goto LA; // [252] 278
    }
    else{
    }
    // SubProg canonical_path pc: 255 op: STARTLINE (58)

    /** filesys.e:1663				wildcard_suffix = lPath[last_slash..$]*/
    // SubProg canonical_path pc: 257 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3505 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3505 = 1;
    }
    // SubProg canonical_path pc: 260 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_wildcard_suffix_6682;
    RHS_Slice(_lPath_6636, _last_slash_6686, _3505);
    // SubProg canonical_path pc: 265 op: STARTLINE (58)

    /** filesys.e:1664				lPath = remove( lPath, last_slash, length( lPath ) )*/
    // SubProg canonical_path pc: 267 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3507 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3507 = 1;
    }
    // SubProg canonical_path pc: 270 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_6636);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_last_slash_6686)) ? _last_slash_6686 : (object)(DBL_PTR(_last_slash_6686)->dbl);
        int stop = (IS_ATOM_INT(_3507)) ? _3507 : (object)(DBL_PTR(_3507)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_6636), start, &_lPath_6636 );
            }
            else Tail(SEQ_PTR(_lPath_6636), stop+1, &_lPath_6636);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_6636), start, &_lPath_6636);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_6636 = Remove_elements(start, stop, (SEQ_PTR(_lPath_6636)->ref == 1));
        }
    }
    _3507 = NOVALUE;
    // SubProg canonical_path pc: 275 op: ELSE (23)
    goto LB; // [275] 293
    // SubProg canonical_path pc: 277 op: NOP1 (159)
LA: // addr: 278 pc: 277 sub: 6631 op: 159
    // SubProg canonical_path pc: 278 op: STARTLINE (58)

    /** filesys.e:1666				wildcard_suffix = lPath*/
    // SubProg canonical_path pc: 280 op: ASSIGN (18)
    RefDS(_lPath_6636);
    DeRef(_wildcard_suffix_6682);
    _wildcard_suffix_6682 = _lPath_6636;
    // SubProg canonical_path pc: 283 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 285 op: STARTLINE (58)

    /** filesys.e:1667				lPath = ""*/
    // SubProg canonical_path pc: 287 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_lPath_6636);
    _lPath_6636 = _5;
    // SubProg canonical_path pc: 290 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 292 op: NOP1 (159)
LB: // addr: 293 pc: 292 sub: 6631 op: 159
    // SubProg canonical_path pc: 293 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var last_slash_6686
    // SubProg canonical_path pc: 295 op: ELSE (23)
    goto LC; // [295] 306
    // SubProg canonical_path pc: 297 op: NOP1 (159)
L9: // addr: 298 pc: 297 sub: 6631 op: 159
    // SubProg canonical_path pc: 298 op: STARTLINE (58)

    /** filesys.e:1670			wildcard_suffix = ""*/
    // SubProg canonical_path pc: 300 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_wildcard_suffix_6682);
    _wildcard_suffix_6682 = _5;
    // SubProg canonical_path pc: 303 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 305 op: NOP1 (159)
LC: // addr: 306 pc: 305 sub: 6631 op: 159
    // SubProg canonical_path pc: 306 op: STARTLINE (58)

    /** filesys.e:1674		if ((length(lPath) = 0) or not find(lPath[1], "/\\")) then*/
    // SubProg canonical_path pc: 308 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3509 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3509 = 1;
    }
    // SubProg canonical_path pc: 311 op: EQUALS (3)
    _3510 = (_3509 == 0);
    _3509 = NOVALUE;
    // SubProg canonical_path pc: 315 op: SC1_OR (143)
    if (_3510 != 0) {
        DeRef(_3511);
        _3511 = 1;
        goto LD; // [315] 335
    }
    // SubProg canonical_path pc: 319 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3512 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 323 op: FIND_FROM (176)
    _3514 = find_from(_3512, _3513, 1);
    _3512 = NOVALUE;
    // SubProg canonical_path pc: 328 op: NOT (7)
    _3515 = (_3514 == 0);
    _3514 = NOVALUE;
    // SubProg canonical_path pc: 331 op: SC2_OR (144)
    _3511 = (_3515 != 0);
    // SubProg canonical_path pc: 334 op: NOP1 (159)
LD: // addr: 335 pc: 334 sub: 6631 op: 159
    // SubProg canonical_path pc: 335 op: IF (20)
    if (_3511 == 0)
    {
        _3511 = NOVALUE;
        goto LE; // [335] 351
    }
    else{
        _3511 = NOVALUE;
    }
    // SubProg canonical_path pc: 338 op: STARTLINE (58)

    /** filesys.e:1675			ifdef UNIX then*/
    // SubProg canonical_path pc: 340 op: STARTLINE (58)

    /** filesys.e:1676				lPath = curdir() & lPath*/
    // SubProg canonical_path pc: 342 op: PROC (27)
    _3516 = _20curdir(0);
    // SubProg canonical_path pc: 346 op: CONCAT (15)
    if (IS_SEQUENCE(_3516) && IS_ATOM(_lPath_6636)) {
    }
    else if (IS_ATOM(_3516) && IS_SEQUENCE(_lPath_6636)) {
        Ref(_3516);
        Prepend(&_lPath_6636, _lPath_6636, _3516);
    }
    else {
        Concat((object_ptr)&_lPath_6636, _3516, _lPath_6636);
        DeRef(_3516);
        _3516 = NOVALUE;
    }
    DeRef(_3516);
    _3516 = NOVALUE;
    // SubProg canonical_path pc: 350 op: NOP1 (159)
LE: // addr: 351 pc: 350 sub: 6631 op: 159
    // SubProg canonical_path pc: 351 op: STARTLINE (58)

    /** filesys.e:1694		if ((directory_given != 0) and (lPath[$] != SLASH) ) then*/
    // SubProg canonical_path pc: 353 op: NOTEQ (4)
    _3518 = (_directory_given_6634 != 0);
    // SubProg canonical_path pc: 357 op: SC1_AND (141)
    if (_3518 == 0) {
        DeRef(_3519);
        _3519 = 0;
        goto LF; // [357] 376
    }
    // SubProg canonical_path pc: 361 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3520 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3520 = 1;
    }
    // SubProg canonical_path pc: 364 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3521 = (object)*(((s1_ptr)_2)->base + _3520);
    // SubProg canonical_path pc: 368 op: NOTEQ (4)
    if (IS_ATOM_INT(_3521)) {
        _3522 = (_3521 != 47);
    }
    else {
        _3522 = binary_op(NOTEQ, _3521, 47);
    }
    _3521 = NOVALUE;
    // SubProg canonical_path pc: 372 op: SC2_AND (142)
    if (IS_ATOM_INT(_3522))
    _3519 = (_3522 != 0);
    else
    _3519 = DBL_PTR(_3522)->dbl != 0.0;
    // SubProg canonical_path pc: 375 op: NOP1 (159)
LF: // addr: 376 pc: 375 sub: 6631 op: 159
    // SubProg canonical_path pc: 376 op: IF (20)
    if (_3519 == 0)
    {
        _3519 = NOVALUE;
        goto L10; // [376] 386
    }
    else{
        _3519 = NOVALUE;
    }
    // SubProg canonical_path pc: 379 op: STARTLINE (58)

    /** filesys.e:1695			lPath &= SLASH*/
    // SubProg canonical_path pc: 381 op: CONCAT (15)
    Append(&_lPath_6636, _lPath_6636, 47);
    // SubProg canonical_path pc: 385 op: NOP1 (159)
L10: // addr: 386 pc: 385 sub: 6631 op: 159
    // SubProg canonical_path pc: 386 op: STARTLINE (58)

    /** filesys.e:1699		lLevel = SLASH & '.' & SLASH*/
    // SubProg canonical_path pc: 388 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = 46;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_6639, concat_list, 3);
    }
    // SubProg canonical_path pc: 394 op: STARTLINE (58)

    /** filesys.e:1700		lPosA = 1*/
    // SubProg canonical_path pc: 396 op: ASSIGN_I (113)
    _lPosA_6637 = 1;
    // SubProg canonical_path pc: 399 op: STARTLINE (58)

    /** filesys.e:1701		while( lPosA != 0 ) with entry do*/
    // SubProg canonical_path pc: 401 op: ELSE (23)
    goto L11; // [401] 422
    // SubProg canonical_path pc: 403 op: NOPWHILE (158)
L12: // addr: 404 pc: 403 sub: 6631 op: 158
    // SubProg canonical_path pc: 404 op: NOTEQ_IFW_I (122)
    if (_lPosA_6637 == 0)
    goto L13; // [404] 434
    // SubProg canonical_path pc: 408 op: STARTLINE (58)

    /** filesys.e:1702			lPath = eu:remove(lPath, lPosA, lPosA + 1)*/
    // SubProg canonical_path pc: 410 op: PLUS1 (93)
    _3526 = _lPosA_6637 + 1;
    if (_3526 > MAXINT){
        _3526 = NewDouble((eudouble)_3526);
    }
    // SubProg canonical_path pc: 414 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_6636);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosA_6637)) ? _lPosA_6637 : (object)(DBL_PTR(_lPosA_6637)->dbl);
        int stop = (IS_ATOM_INT(_3526)) ? _3526 : (object)(DBL_PTR(_3526)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_6636), start, &_lPath_6636 );
            }
            else Tail(SEQ_PTR(_lPath_6636), stop+1, &_lPath_6636);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_6636), start, &_lPath_6636);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_6636 = Remove_elements(start, stop, (SEQ_PTR(_lPath_6636)->ref == 1));
        }
    }
    DeRef(_3526);
    _3526 = NOVALUE;
    // SubProg canonical_path pc: 419 op: STARTLINE (58)

    /** filesys.e:1704		  entry*/
    // SubProg canonical_path pc: 421 op: NOP1 (159)
L11: // addr: 422 pc: 421 sub: 6631 op: 159
    // SubProg canonical_path pc: 422 op: STARTLINE (58)

    /** filesys.e:1705			lPosA = match(lLevel, lPath, lPosA )*/
    // SubProg canonical_path pc: 424 op: MATCH_FROM (177)
    _lPosA_6637 = e_match_from(_lLevel_6639, _lPath_6636, _lPosA_6637);
    // SubProg canonical_path pc: 429 op: STARTLINE (58)

    /** filesys.e:1706		end while*/
    // SubProg canonical_path pc: 431 op: ENDWHILE (22)
    goto L12; // [431] 404
    // SubProg canonical_path pc: 433 op: NOP1 (159)
L13: // addr: 434 pc: 433 sub: 6631 op: 159
    // SubProg canonical_path pc: 434 op: STARTLINE (58)

    /** filesys.e:1709		lLevel = SLASH & ".." & SLASH*/
    // SubProg canonical_path pc: 436 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = _3272;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_6639, concat_list, 3);
    }
    // SubProg canonical_path pc: 442 op: STARTLINE (58)

    /** filesys.e:1711		lPosB = 1*/
    // SubProg canonical_path pc: 444 op: ASSIGN_I (113)
    _lPosB_6638 = 1;
    // SubProg canonical_path pc: 447 op: STARTLINE (58)

    /** filesys.e:1712		while( lPosA != 0 ) with entry do*/
    // SubProg canonical_path pc: 449 op: ELSE (23)
    goto L14; // [449] 527
    // SubProg canonical_path pc: 451 op: NOPWHILE (158)
L15: // addr: 452 pc: 451 sub: 6631 op: 158
    // SubProg canonical_path pc: 452 op: NOTEQ_IFW_I (122)
    if (_lPosA_6637 == 0)
    goto L16; // [452] 539
    // SubProg canonical_path pc: 456 op: STARTLINE (58)

    /** filesys.e:1714			lPosB = lPosA-1*/
    // SubProg canonical_path pc: 458 op: MINUS_I (116)
    _lPosB_6638 = _lPosA_6637 - 1;
    // SubProg canonical_path pc: 462 op: STARTLINE (58)

    /** filesys.e:1715			while((lPosB > 0) and (lPath[lPosB] != SLASH)) do*/
    // SubProg canonical_path pc: 464 op: NOP2 (110)
    // SubProg canonical_path pc: 466 op: NOPWHILE (158)
L17: // addr: 467 pc: 466 sub: 6631 op: 158
    // SubProg canonical_path pc: 467 op: GREATER (6)
    _3532 = (_lPosB_6638 > 0);
    // SubProg canonical_path pc: 471 op: SC1_AND (141)
    if (_3532 == 0) {
        DeRef(_3533);
        _3533 = 0;
        goto L18; // [471] 487
    }
    // SubProg canonical_path pc: 475 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3534 = (object)*(((s1_ptr)_2)->base + _lPosB_6638);
    // SubProg canonical_path pc: 479 op: NOTEQ (4)
    if (IS_ATOM_INT(_3534)) {
        _3535 = (_3534 != 47);
    }
    else {
        _3535 = binary_op(NOTEQ, _3534, 47);
    }
    _3534 = NOVALUE;
    // SubProg canonical_path pc: 483 op: SC2_AND (142)
    if (IS_ATOM_INT(_3535))
    _3533 = (_3535 != 0);
    else
    _3533 = DBL_PTR(_3535)->dbl != 0.0;
    // SubProg canonical_path pc: 486 op: NOP1 (159)
L18: // addr: 487 pc: 486 sub: 6631 op: 159
    // SubProg canonical_path pc: 487 op: WHILE (47)
    if (_3533 == 0)
    {
        _3533 = NOVALUE;
        goto L19; // [487] 501
    }
    else{
        _3533 = NOVALUE;
    }
    // SubProg canonical_path pc: 490 op: STARTLINE (58)

    /** filesys.e:1716				lPosB -= 1*/
    // SubProg canonical_path pc: 492 op: MINUS_I (116)
    _lPosB_6638 = _lPosB_6638 - 1;
    // SubProg canonical_path pc: 496 op: STARTLINE (58)

    /** filesys.e:1717			end while*/
    // SubProg canonical_path pc: 498 op: ENDWHILE (22)
    goto L17; // [498] 467
    // SubProg canonical_path pc: 500 op: NOP1 (159)
L19: // addr: 501 pc: 500 sub: 6631 op: 159
    // SubProg canonical_path pc: 501 op: STARTLINE (58)

    /** filesys.e:1718			if (lPosB <= 0) then*/
    // SubProg canonical_path pc: 503 op: LESSEQ_IFW_I (123)
    if (_lPosB_6638 > 0)
    goto L1A; // [503] 513
    // SubProg canonical_path pc: 507 op: STARTLINE (58)

    /** filesys.e:1719				lPosB = 1*/
    // SubProg canonical_path pc: 509 op: ASSIGN_I (113)
    _lPosB_6638 = 1;
    // SubProg canonical_path pc: 512 op: NOP1 (159)
L1A: // addr: 513 pc: 512 sub: 6631 op: 159
    // SubProg canonical_path pc: 513 op: STARTLINE (58)

    /** filesys.e:1721			lPath = eu:remove(lPath, lPosB, lPosA + 2)*/
    // SubProg canonical_path pc: 515 op: PLUS (11)
    _3538 = _lPosA_6637 + 2;
    if ((object)((uintptr_t)_3538 + (uintptr_t)HIGH_BITS) >= 0){
        _3538 = NewDouble((eudouble)_3538);
    }
    // SubProg canonical_path pc: 519 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_6636);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosB_6638)) ? _lPosB_6638 : (object)(DBL_PTR(_lPosB_6638)->dbl);
        int stop = (IS_ATOM_INT(_3538)) ? _3538 : (object)(DBL_PTR(_3538)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_6636), start, &_lPath_6636 );
            }
            else Tail(SEQ_PTR(_lPath_6636), stop+1, &_lPath_6636);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_6636), start, &_lPath_6636);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_6636 = Remove_elements(start, stop, (SEQ_PTR(_lPath_6636)->ref == 1));
        }
    }
    DeRef(_3538);
    _3538 = NOVALUE;
    // SubProg canonical_path pc: 524 op: STARTLINE (58)

    /** filesys.e:1723		  entry*/
    // SubProg canonical_path pc: 526 op: NOP1 (159)
L14: // addr: 527 pc: 526 sub: 6631 op: 159
    // SubProg canonical_path pc: 527 op: STARTLINE (58)

    /** filesys.e:1724			lPosA = match(lLevel, lPath, lPosB )*/
    // SubProg canonical_path pc: 529 op: MATCH_FROM (177)
    _lPosA_6637 = e_match_from(_lLevel_6639, _lPath_6636, _lPosB_6638);
    // SubProg canonical_path pc: 534 op: STARTLINE (58)

    /** filesys.e:1725		end while*/
    // SubProg canonical_path pc: 536 op: ENDWHILE (22)
    goto L15; // [536] 452
    // SubProg canonical_path pc: 538 op: NOP1 (159)
L16: // addr: 539 pc: 538 sub: 6631 op: 159
    // SubProg canonical_path pc: 539 op: STARTLINE (58)

    /** filesys.e:1727		if case_flags = TO_LOWER then*/
    // SubProg canonical_path pc: 541 op: EQUALS_IFW_I (121)
    if (_case_flags_6635 != 1)
    goto L1B; // [541] 556
    // SubProg canonical_path pc: 545 op: STARTLINE (58)

    /** filesys.e:1728			lPath = lower( lPath )*/
    // SubProg canonical_path pc: 547 op: PROC (27)
    RefDS(_lPath_6636);
    _0 = _lPath_6636;
    _lPath_6636 = _17lower(_lPath_6636);
    DeRefDS(_0);
    // SubProg canonical_path pc: 551 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 553 op: ELSE (23)
    goto L1C; // [553] 1153
    // SubProg canonical_path pc: 555 op: NOP1 (159)
L1B: // addr: 556 pc: 555 sub: 6631 op: 159
    // SubProg canonical_path pc: 556 op: STARTLINE (58)

    /** filesys.e:1730		elsif case_flags != AS_IS then*/
    // SubProg canonical_path pc: 558 op: NOTEQ_IFW_I (122)
    if (_case_flags_6635 == 0)
    goto L1D; // [558] 1150
    // SubProg canonical_path pc: 562 op: STARTLINE (58)

    /** filesys.e:1731			sequence sl = find_all(SLASH,lPath) -- split apart lPath*/
    // SubProg canonical_path pc: 564 op: PROC (27)
    RefDS(_lPath_6636);
    _0 = _sl_6739;
    _sl_6739 = _19find_all(47, _lPath_6636, 1);
    DeRef(_0);
    // SubProg canonical_path pc: 570 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 572 op: STARTLINE (58)

    /** filesys.e:1732			integer short_name = and_bits(TO_SHORT,case_flags)=TO_SHORT*/
    // SubProg canonical_path pc: 574 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)4 & (uintptr_t)_case_flags_6635;
         _3545 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 578 op: EQUALS (3)
    if (IS_ATOM_INT(_3545)) {
        _short_name_6742 = (_3545 == 4);
    }
    else {
        _short_name_6742 = (DBL_PTR(_3545)->dbl == (eudouble)4);
    }
    DeRef(_3545);
    _3545 = NOVALUE;
    // SubProg canonical_path pc: 582 op: STARTLINE (58)

    /** filesys.e:1733			integer correct_name = and_bits(case_flags,CORRECT)=CORRECT*/
    // SubProg canonical_path pc: 584 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_case_flags_6635 & (uintptr_t)2;
         _3547 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 588 op: EQUALS (3)
    if (IS_ATOM_INT(_3547)) {
        _correct_name_6745 = (_3547 == 2);
    }
    else {
        _correct_name_6745 = (DBL_PTR(_3547)->dbl == (eudouble)2);
    }
    DeRef(_3547);
    _3547 = NOVALUE;
    // SubProg canonical_path pc: 592 op: STARTLINE (58)

    /** filesys.e:1734			integer lower_name = and_bits(TO_LOWER,case_flags)=TO_LOWER*/
    // SubProg canonical_path pc: 594 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)1 & (uintptr_t)_case_flags_6635;
         _3549 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 598 op: EQUALS (3)
    if (IS_ATOM_INT(_3549)) {
        _lower_name_6748 = (_3549 == 1);
    }
    else {
        _lower_name_6748 = (DBL_PTR(_3549)->dbl == (eudouble)1);
    }
    DeRef(_3549);
    _3549 = NOVALUE;
    // SubProg canonical_path pc: 602 op: STARTLINE (58)

    /** filesys.e:1735			if lPath[$] != SLASH then*/
    // SubProg canonical_path pc: 604 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3551 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3551 = 1;
    }
    // SubProg canonical_path pc: 607 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_6636);
    _3552 = (object)*(((s1_ptr)_2)->base + _3551);
    // SubProg canonical_path pc: 611 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _3552, 47)){
        _3552 = NOVALUE;
        goto L1E; // [611] 633
    }
    _3552 = NOVALUE;
    // SubProg canonical_path pc: 615 op: STARTLINE (58)

    /** filesys.e:1736				sl = sl & {length(lPath)+1}*/
    // SubProg canonical_path pc: 617 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3554 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3554 = 1;
    }
    // SubProg canonical_path pc: 620 op: PLUS1 (93)
    _3555 = _3554 + 1;
    _3554 = NOVALUE;
    // SubProg canonical_path pc: 624 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _3555;
    _3556 = MAKE_SEQ(_1);
    _3555 = NOVALUE;
    // SubProg canonical_path pc: 628 op: CONCAT (15)
    Concat((object_ptr)&_sl_6739, _sl_6739, _3556);
    DeRefDS(_3556);
    _3556 = NOVALUE;
    // SubProg canonical_path pc: 632 op: NOP1 (159)
L1E: // addr: 633 pc: 632 sub: 6631 op: 159
    // SubProg canonical_path pc: 633 op: STARTLINE (58)

    /** filesys.e:1739			for i = length(sl)-1 to 1 by -1 label "partloop" do*/
    // SubProg canonical_path pc: 635 op: LENGTH (42)
    if (IS_SEQUENCE(_sl_6739)){
            _3558 = SEQ_PTR(_sl_6739)->length;
    }
    else {
        _3558 = 1;
    }
    // SubProg canonical_path pc: 638 op: MINUS (10)
    _3559 = _3558 - 1;
    _3558 = NOVALUE;
    // SubProg canonical_path pc: 642 op: FOR (21)
    {
        object _i_6760;
        _i_6760 = _3559;
L1F: // addr: 649 pc: 642 sub: 6631 op: 21
        if (_i_6760 < 1){
            goto L20; // [642] 1115
        }
        // SubProg canonical_path pc: 649 op: STARTLINE (58)

        /** filesys.e:1740				ifdef WINDOWS then*/
        // SubProg canonical_path pc: 651 op: STARTLINE (58)

        /** filesys.e:1743					sequence part = lPath[1..sl[i]-1]*/
        // SubProg canonical_path pc: 653 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_6739);
        _3561 = (object)*(((s1_ptr)_2)->base + _i_6760);
        // SubProg canonical_path pc: 657 op: MINUS (10)
        if (IS_ATOM_INT(_3561)) {
            _3562 = _3561 - 1;
        }
        else {
            _3562 = binary_op(MINUS, _3561, 1);
        }
        _3561 = NOVALUE;
        // SubProg canonical_path pc: 661 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_part_6764;
        RHS_Slice(_lPath_6636, 1, _3562);
        // SubProg canonical_path pc: 666 op: STARTLINE (58)

        /** filesys.e:1746				object list = dir( part & SLASH )*/
        // SubProg canonical_path pc: 668 op: PRIVATE_INIT_CHECK (30)
        // SubProg canonical_path pc: 670 op: CONCAT (15)
        Append(&_3564, _part_6764, 47);
        // SubProg canonical_path pc: 674 op: PROC (27)
        _0 = _list_6768;
        _list_6768 = _20dir(_3564);
        DeRef(_0);
        _3564 = NOVALUE;
        // SubProg canonical_path pc: 678 op: STARTLINE (58)

        /** filesys.e:1747				sequence supplied_name = lPath[sl[i]+1..sl[i+1]-1]*/
        // SubProg canonical_path pc: 680 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_6739);
        _3566 = (object)*(((s1_ptr)_2)->base + _i_6760);
        // SubProg canonical_path pc: 684 op: PLUS1 (93)
        if (IS_ATOM_INT(_3566)) {
            _3567 = _3566 + 1;
            if (_3567 > MAXINT){
                _3567 = NewDouble((eudouble)_3567);
            }
        }
        else
        _3567 = binary_op(PLUS, 1, _3566);
        _3566 = NOVALUE;
        // SubProg canonical_path pc: 688 op: PLUS1 (93)
        _3568 = _i_6760 + 1;
        // SubProg canonical_path pc: 692 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_6739);
        _3569 = (object)*(((s1_ptr)_2)->base + _3568);
        // SubProg canonical_path pc: 696 op: MINUS (10)
        if (IS_ATOM_INT(_3569)) {
            _3570 = _3569 - 1;
        }
        else {
            _3570 = binary_op(MINUS, _3569, 1);
        }
        _3569 = NOVALUE;
        // SubProg canonical_path pc: 700 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_supplied_name_6771;
        RHS_Slice(_lPath_6636, _3567, _3570);
        // SubProg canonical_path pc: 705 op: STARTLINE (58)

        /** filesys.e:1749				if atom(list) then*/
        // SubProg canonical_path pc: 707 op: IS_AN_ATOM (67)
        _3572 = IS_ATOM(_list_6768);
        // SubProg canonical_path pc: 710 op: IF (20)
        if (_3572 == 0)
        {
            _3572 = NOVALUE;
            goto L21; // [710] 748
        }
        else{
            _3572 = NOVALUE;
        }
        // SubProg canonical_path pc: 713 op: STARTLINE (58)

        /** filesys.e:1750					if lower_name then*/
        // SubProg canonical_path pc: 715 op: IF (20)
        if (_lower_name_6748 == 0)
        {
            goto L22; // [715] 741
        }
        else{
        }
        // SubProg canonical_path pc: 718 op: STARTLINE (58)

        /** filesys.e:1751						lPath = part & lower(lPath[sl[i]..$])*/
        // SubProg canonical_path pc: 720 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_6739);
        _3573 = (object)*(((s1_ptr)_2)->base + _i_6760);
        // SubProg canonical_path pc: 724 op: LENGTH (42)
        if (IS_SEQUENCE(_lPath_6636)){
                _3574 = SEQ_PTR(_lPath_6636)->length;
        }
        else {
            _3574 = 1;
        }
        // SubProg canonical_path pc: 727 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3575;
        RHS_Slice(_lPath_6636, _3573, _3574);
        // SubProg canonical_path pc: 732 op: PROC (27)
        _3576 = _17lower(_3575);
        _3575 = NOVALUE;
        // SubProg canonical_path pc: 736 op: CONCAT (15)
        if (IS_SEQUENCE(_part_6764) && IS_ATOM(_3576)) {
            Ref(_3576);
            Append(&_lPath_6636, _part_6764, _3576);
        }
        else if (IS_ATOM(_part_6764) && IS_SEQUENCE(_3576)) {
        }
        else {
            Concat((object_ptr)&_lPath_6636, _part_6764, _3576);
        }
        DeRef(_3576);
        _3576 = NOVALUE;
        // SubProg canonical_path pc: 740 op: NOP1 (159)
L22: // addr: 741 pc: 740 sub: 6631 op: 159
        // SubProg canonical_path pc: 741 op: STARTLINE (58)

        /** filesys.e:1753					continue*/
        // SubProg canonical_path pc: 743 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_6764
        DeRef(_part_6764);
        _part_6764 = NOVALUE;

// block var list_6768
        DeRef(_list_6768);
        _list_6768 = NOVALUE;

// block var supplied_name_6771
        DeRef(_supplied_name_6771);
        _supplied_name_6771 = NOVALUE;
        // SubProg canonical_path pc: 745 op: ELSE (23)
        goto L23; // [745] 1110
        // SubProg canonical_path pc: 747 op: NOP1 (159)
L21: // addr: 748 pc: 747 sub: 6631 op: 159
        // SubProg canonical_path pc: 748 op: STARTLINE (58)

        /** filesys.e:1757				for j = 1 to length(list) do*/
        // SubProg canonical_path pc: 750 op: LENGTH (42)
        if (IS_SEQUENCE(_list_6768)){
                _3578 = SEQ_PTR(_list_6768)->length;
        }
        else {
            _3578 = 1;
        }
        // SubProg canonical_path pc: 753 op: FOR_I (125)
        {
            object _j_6788;
            _j_6788 = 1;
L24: // addr: 760 pc: 753 sub: 6631 op: 125
            if (_j_6788 > _3578){
                goto L25; // [753] 878
            }
            // SubProg canonical_path pc: 760 op: STARTLINE (58)

            /** filesys.e:1758					sequence read_name = list[j][D_NAME]*/
            // SubProg canonical_path pc: 762 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_6768);
            _3579 = (object)*(((s1_ptr)_2)->base + _j_6788);
            // SubProg canonical_path pc: 766 op: RHS_SUBS_CHECK (92)
            DeRef(_read_name_6790);
            _2 = (object)SEQ_PTR(_3579);
            _read_name_6790 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_6790);
            _3579 = NOVALUE;
            // SubProg canonical_path pc: 770 op: SEQUENCE_CHECK (97)
            // SubProg canonical_path pc: 772 op: STARTLINE (58)

            /** filesys.e:1759					if equal(read_name, supplied_name) then*/
            // SubProg canonical_path pc: 774 op: EQUAL (153)
            if (_read_name_6790 == _supplied_name_6771)
            _3581 = 1;
            else if (IS_ATOM_INT(_read_name_6790) && IS_ATOM_INT(_supplied_name_6771))
            _3581 = 0;
            else
            _3581 = (compare(_read_name_6790, _supplied_name_6771) == 0);
            // SubProg canonical_path pc: 778 op: IF (20)
            if (_3581 == 0)
            {
                _3581 = NOVALUE;
                goto L26; // [778] 869
            }
            else{
                _3581 = NOVALUE;
            }
            // SubProg canonical_path pc: 781 op: STARTLINE (58)

            /** filesys.e:1760						if short_name and sequence(list[j][D_ALTNAME]) then*/
            // SubProg canonical_path pc: 783 op: SC1_AND_IF (146)
            if (_short_name_6742 == 0) {
                goto L27; // [783] 860
            }
            // SubProg canonical_path pc: 787 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_6768);
            _3583 = (object)*(((s1_ptr)_2)->base + _j_6788);
            // SubProg canonical_path pc: 791 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_3583);
            _3584 = (object)*(((s1_ptr)_2)->base + 11);
            _3583 = NOVALUE;
            // SubProg canonical_path pc: 795 op: IS_A_SEQUENCE (68)
            _3585 = IS_SEQUENCE(_3584);
            _3584 = NOVALUE;
            // SubProg canonical_path pc: 798 op: NOP1 (159)
            // SubProg canonical_path pc: 799 op: IF (20)
            if (_3585 == 0)
            {
                _3585 = NOVALUE;
                goto L27; // [799] 860
            }
            else{
                _3585 = NOVALUE;
            }
            // SubProg canonical_path pc: 802 op: STARTLINE (58)

            /** filesys.e:1761							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 804 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_6739);
            _3586 = (object)*(((s1_ptr)_2)->base + _i_6760);
            // SubProg canonical_path pc: 808 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_3587;
            RHS_Slice(_lPath_6636, 1, _3586);
            // SubProg canonical_path pc: 813 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_6768);
            _3588 = (object)*(((s1_ptr)_2)->base + _j_6788);
            // SubProg canonical_path pc: 817 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_3588);
            _3589 = (object)*(((s1_ptr)_2)->base + 11);
            _3588 = NOVALUE;
            // SubProg canonical_path pc: 821 op: PLUS1 (93)
            _3590 = _i_6760 + 1;
            // SubProg canonical_path pc: 825 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_6739);
            _3591 = (object)*(((s1_ptr)_2)->base + _3590);
            // SubProg canonical_path pc: 829 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_6636)){
                    _3592 = SEQ_PTR(_lPath_6636)->length;
            }
            else {
                _3592 = 1;
            }
            // SubProg canonical_path pc: 832 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_3593;
            RHS_Slice(_lPath_6636, _3591, _3592);
            // SubProg canonical_path pc: 837 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _3593;
                concat_list[1] = _3589;
                concat_list[2] = _3587;
                Concat_N((object_ptr)&_lPath_6636, concat_list, 3);
            }
            DeRefDS(_3593);
            _3593 = NOVALUE;
            _3589 = NOVALUE;
            DeRefDS(_3587);
            _3587 = NOVALUE;
            // SubProg canonical_path pc: 843 op: STARTLINE (58)

            /** filesys.e:1762							sl[$] = length(lPath)+1*/
            // SubProg canonical_path pc: 845 op: LENGTH (42)
            if (IS_SEQUENCE(_sl_6739)){
                    _3595 = SEQ_PTR(_sl_6739)->length;
            }
            else {
                _3595 = 1;
            }
            // SubProg canonical_path pc: 848 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_6636)){
                    _3596 = SEQ_PTR(_lPath_6636)->length;
            }
            else {
                _3596 = 1;
            }
            // SubProg canonical_path pc: 851 op: PLUS1 (93)
            _3597 = _3596 + 1;
            _3596 = NOVALUE;
            // SubProg canonical_path pc: 855 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_sl_6739);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_6739 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _3595);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3597;
            if( _1 != _3597 ){
                DeRef(_1);
            }
            _3597 = NOVALUE;
            // SubProg canonical_path pc: 859 op: NOP1 (159)
L27: // addr: 860 pc: 859 sub: 6631 op: 159
            // SubProg canonical_path pc: 860 op: STARTLINE (58)

            /** filesys.e:1764						continue "partloop"*/
            // SubProg canonical_path pc: 862 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_6790
            DeRef(_read_name_6790);
            _read_name_6790 = NOVALUE;
            // SubProg canonical_path pc: 864 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_6764
            DeRef(_part_6764);
            _part_6764 = NOVALUE;

// block var list_6768
            DeRef(_list_6768);
            _list_6768 = NOVALUE;

// block var supplied_name_6771
            DeRef(_supplied_name_6771);
            _supplied_name_6771 = NOVALUE;
            // SubProg canonical_path pc: 866 op: ELSE (23)
            goto L23; // [866] 1110
            // SubProg canonical_path pc: 868 op: NOP1 (159)
L26: // addr: 869 pc: 868 sub: 6631 op: 159
            // SubProg canonical_path pc: 869 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_6790
            DeRef(_read_name_6790);
            _read_name_6790 = NOVALUE;
            // SubProg canonical_path pc: 871 op: STARTLINE (58)

            /** filesys.e:1766				end for*/
            // SubProg canonical_path pc: 873 op: ENDFOR_INT_UP1 (54)
            _j_6788 = _j_6788 + 1;
            goto L24; // [873] 760
L25: // addr: 878 pc: 873 sub: 6631 op: 54
            ;
        }
        // SubProg canonical_path pc: 878 op: STARTLINE (58)

        /** filesys.e:1770				for j = 1 to length(list) do*/
        // SubProg canonical_path pc: 880 op: LENGTH (42)
        if (IS_SEQUENCE(_list_6768)){
                _3598 = SEQ_PTR(_list_6768)->length;
        }
        else {
            _3598 = 1;
        }
        // SubProg canonical_path pc: 883 op: FOR_I (125)
        {
            object _j_6813;
            _j_6813 = 1;
L28: // addr: 890 pc: 883 sub: 6631 op: 125
            if (_j_6813 > _3598){
                goto L29; // [883] 1055
            }
            // SubProg canonical_path pc: 890 op: STARTLINE (58)

            /** filesys.e:1771					sequence read_name = list[j][D_NAME]*/
            // SubProg canonical_path pc: 892 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_6768);
            _3599 = (object)*(((s1_ptr)_2)->base + _j_6813);
            // SubProg canonical_path pc: 896 op: RHS_SUBS_CHECK (92)
            DeRef(_read_name_6815);
            _2 = (object)SEQ_PTR(_3599);
            _read_name_6815 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_6815);
            _3599 = NOVALUE;
            // SubProg canonical_path pc: 900 op: SEQUENCE_CHECK (97)
            // SubProg canonical_path pc: 902 op: STARTLINE (58)

            /** filesys.e:1772					if equal(lower(read_name), lower(supplied_name)) then*/
            // SubProg canonical_path pc: 904 op: PROC (27)
            RefDS(_read_name_6815);
            _3601 = _17lower(_read_name_6815);
            // SubProg canonical_path pc: 908 op: PROC (27)
            RefDS(_supplied_name_6771);
            _3602 = _17lower(_supplied_name_6771);
            // SubProg canonical_path pc: 912 op: EQUAL (153)
            if (_3601 == _3602)
            _3603 = 1;
            else if (IS_ATOM_INT(_3601) && IS_ATOM_INT(_3602))
            _3603 = 0;
            else
            _3603 = (compare(_3601, _3602) == 0);
            DeRef(_3601);
            _3601 = NOVALUE;
            DeRef(_3602);
            _3602 = NOVALUE;
            // SubProg canonical_path pc: 916 op: IF (20)
            if (_3603 == 0)
            {
                _3603 = NOVALUE;
                goto L2A; // [916] 1046
            }
            else{
                _3603 = NOVALUE;
            }
            // SubProg canonical_path pc: 919 op: STARTLINE (58)

            /** filesys.e:1773						if short_name and sequence(list[j][D_ALTNAME]) then*/
            // SubProg canonical_path pc: 921 op: SC1_AND_IF (146)
            if (_short_name_6742 == 0) {
                goto L2B; // [921] 998
            }
            // SubProg canonical_path pc: 925 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_6768);
            _3605 = (object)*(((s1_ptr)_2)->base + _j_6813);
            // SubProg canonical_path pc: 929 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_3605);
            _3606 = (object)*(((s1_ptr)_2)->base + 11);
            _3605 = NOVALUE;
            // SubProg canonical_path pc: 933 op: IS_A_SEQUENCE (68)
            _3607 = IS_SEQUENCE(_3606);
            _3606 = NOVALUE;
            // SubProg canonical_path pc: 936 op: NOP1 (159)
            // SubProg canonical_path pc: 937 op: IF (20)
            if (_3607 == 0)
            {
                _3607 = NOVALUE;
                goto L2B; // [937] 998
            }
            else{
                _3607 = NOVALUE;
            }
            // SubProg canonical_path pc: 940 op: STARTLINE (58)

            /** filesys.e:1774							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 942 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_6739);
            _3608 = (object)*(((s1_ptr)_2)->base + _i_6760);
            // SubProg canonical_path pc: 946 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_3609;
            RHS_Slice(_lPath_6636, 1, _3608);
            // SubProg canonical_path pc: 951 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_6768);
            _3610 = (object)*(((s1_ptr)_2)->base + _j_6813);
            // SubProg canonical_path pc: 955 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_3610);
            _3611 = (object)*(((s1_ptr)_2)->base + 11);
            _3610 = NOVALUE;
            // SubProg canonical_path pc: 959 op: PLUS1 (93)
            _3612 = _i_6760 + 1;
            // SubProg canonical_path pc: 963 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_6739);
            _3613 = (object)*(((s1_ptr)_2)->base + _3612);
            // SubProg canonical_path pc: 967 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_6636)){
                    _3614 = SEQ_PTR(_lPath_6636)->length;
            }
            else {
                _3614 = 1;
            }
            // SubProg canonical_path pc: 970 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_3615;
            RHS_Slice(_lPath_6636, _3613, _3614);
            // SubProg canonical_path pc: 975 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _3615;
                concat_list[1] = _3611;
                concat_list[2] = _3609;
                Concat_N((object_ptr)&_lPath_6636, concat_list, 3);
            }
            DeRefDS(_3615);
            _3615 = NOVALUE;
            _3611 = NOVALUE;
            DeRefDS(_3609);
            _3609 = NOVALUE;
            // SubProg canonical_path pc: 981 op: STARTLINE (58)

            /** filesys.e:1775							sl[$] = length(lPath)+1*/
            // SubProg canonical_path pc: 983 op: LENGTH (42)
            if (IS_SEQUENCE(_sl_6739)){
                    _3617 = SEQ_PTR(_sl_6739)->length;
            }
            else {
                _3617 = 1;
            }
            // SubProg canonical_path pc: 986 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_6636)){
                    _3618 = SEQ_PTR(_lPath_6636)->length;
            }
            else {
                _3618 = 1;
            }
            // SubProg canonical_path pc: 989 op: PLUS1 (93)
            _3619 = _3618 + 1;
            _3618 = NOVALUE;
            // SubProg canonical_path pc: 993 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_sl_6739);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_6739 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _3617);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3619;
            if( _1 != _3619 ){
                DeRef(_1);
            }
            _3619 = NOVALUE;
            // SubProg canonical_path pc: 997 op: NOP1 (159)
L2B: // addr: 998 pc: 997 sub: 6631 op: 159
            // SubProg canonical_path pc: 998 op: STARTLINE (58)

            /** filesys.e:1777						if correct_name then*/
            // SubProg canonical_path pc: 1000 op: IF (20)
            if (_correct_name_6745 == 0)
            {
                goto L2C; // [1000] 1037
            }
            else{
            }
            // SubProg canonical_path pc: 1003 op: STARTLINE (58)

            /** filesys.e:1778							lPath = lPath[1..sl[i]] & read_name & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 1005 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_6739);
            _3620 = (object)*(((s1_ptr)_2)->base + _i_6760);
            // SubProg canonical_path pc: 1009 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_3621;
            RHS_Slice(_lPath_6636, 1, _3620);
            // SubProg canonical_path pc: 1014 op: PLUS1 (93)
            _3622 = _i_6760 + 1;
            // SubProg canonical_path pc: 1018 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_6739);
            _3623 = (object)*(((s1_ptr)_2)->base + _3622);
            // SubProg canonical_path pc: 1022 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_6636)){
                    _3624 = SEQ_PTR(_lPath_6636)->length;
            }
            else {
                _3624 = 1;
            }
            // SubProg canonical_path pc: 1025 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_3625;
            RHS_Slice(_lPath_6636, _3623, _3624);
            // SubProg canonical_path pc: 1030 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _3625;
                concat_list[1] = _read_name_6815;
                concat_list[2] = _3621;
                Concat_N((object_ptr)&_lPath_6636, concat_list, 3);
            }
            DeRefDS(_3625);
            _3625 = NOVALUE;
            DeRefDS(_3621);
            _3621 = NOVALUE;
            // SubProg canonical_path pc: 1036 op: NOP1 (159)
L2C: // addr: 1037 pc: 1036 sub: 6631 op: 159
            // SubProg canonical_path pc: 1037 op: STARTLINE (58)

            /** filesys.e:1780						continue "partloop"*/
            // SubProg canonical_path pc: 1039 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_6815
            DeRef(_read_name_6815);
            _read_name_6815 = NOVALUE;
            // SubProg canonical_path pc: 1041 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_6764
            DeRef(_part_6764);
            _part_6764 = NOVALUE;

// block var list_6768
            DeRef(_list_6768);
            _list_6768 = NOVALUE;

// block var supplied_name_6771
            DeRef(_supplied_name_6771);
            _supplied_name_6771 = NOVALUE;
            // SubProg canonical_path pc: 1043 op: ELSE (23)
            goto L23; // [1043] 1110
            // SubProg canonical_path pc: 1045 op: NOP1 (159)
L2A: // addr: 1046 pc: 1045 sub: 6631 op: 159
            // SubProg canonical_path pc: 1046 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_6815
            DeRef(_read_name_6815);
            _read_name_6815 = NOVALUE;
            // SubProg canonical_path pc: 1048 op: STARTLINE (58)

            /** filesys.e:1782				end for*/
            // SubProg canonical_path pc: 1050 op: ENDFOR_INT_UP1 (54)
            _j_6813 = _j_6813 + 1;
            goto L28; // [1050] 890
L29: // addr: 1055 pc: 1050 sub: 6631 op: 54
            ;
        }
        // SubProg canonical_path pc: 1055 op: STARTLINE (58)

        /** filesys.e:1786				if and_bits(TO_LOWER,case_flags) then*/
        // SubProg canonical_path pc: 1057 op: AND_BITS (56)
        {uintptr_t tu;
             tu = (uintptr_t)1 & (uintptr_t)_case_flags_6635;
             _3627 = MAKE_UINT(tu);
        }
        // SubProg canonical_path pc: 1061 op: IF (20)
        if (_3627 == 0) {
            DeRef(_3627);
            _3627 = NOVALUE;
            goto L2D; // [1061] 1100
        }
        else {
            if (!IS_ATOM_INT(_3627) && DBL_PTR(_3627)->dbl == 0.0){
                DeRef(_3627);
                _3627 = NOVALUE;
                goto L2D; // [1061] 1100
            }
            DeRef(_3627);
            _3627 = NOVALUE;
        }
        DeRef(_3627);
        _3627 = NOVALUE;
        // SubProg canonical_path pc: 1064 op: STARTLINE (58)

        /** filesys.e:1787					lPath = lPath[1..sl[i]-1] & lower(lPath[sl[i]..$])*/
        // SubProg canonical_path pc: 1066 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_6739);
        _3628 = (object)*(((s1_ptr)_2)->base + _i_6760);
        // SubProg canonical_path pc: 1070 op: MINUS (10)
        if (IS_ATOM_INT(_3628)) {
            _3629 = _3628 - 1;
        }
        else {
            _3629 = binary_op(MINUS, _3628, 1);
        }
        _3628 = NOVALUE;
        // SubProg canonical_path pc: 1074 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3630;
        RHS_Slice(_lPath_6636, 1, _3629);
        // SubProg canonical_path pc: 1079 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_6739);
        _3631 = (object)*(((s1_ptr)_2)->base + _i_6760);
        // SubProg canonical_path pc: 1083 op: LENGTH (42)
        if (IS_SEQUENCE(_lPath_6636)){
                _3632 = SEQ_PTR(_lPath_6636)->length;
        }
        else {
            _3632 = 1;
        }
        // SubProg canonical_path pc: 1086 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3633;
        RHS_Slice(_lPath_6636, _3631, _3632);
        // SubProg canonical_path pc: 1091 op: PROC (27)
        _3634 = _17lower(_3633);
        _3633 = NOVALUE;
        // SubProg canonical_path pc: 1095 op: CONCAT (15)
        if (IS_SEQUENCE(_3630) && IS_ATOM(_3634)) {
            Ref(_3634);
            Append(&_lPath_6636, _3630, _3634);
        }
        else if (IS_ATOM(_3630) && IS_SEQUENCE(_3634)) {
        }
        else {
            Concat((object_ptr)&_lPath_6636, _3630, _3634);
            DeRefDS(_3630);
            _3630 = NOVALUE;
        }
        DeRef(_3630);
        _3630 = NOVALUE;
        DeRef(_3634);
        _3634 = NOVALUE;
        // SubProg canonical_path pc: 1099 op: NOP1 (159)
L2D: // addr: 1100 pc: 1099 sub: 6631 op: 159
        // SubProg canonical_path pc: 1100 op: STARTLINE (58)

        /** filesys.e:1789				exit*/
        // SubProg canonical_path pc: 1102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_6764
        DeRef(_part_6764);
        _part_6764 = NOVALUE;

// block var list_6768
        DeRef(_list_6768);
        _list_6768 = NOVALUE;

// block var supplied_name_6771
        DeRef(_supplied_name_6771);
        _supplied_name_6771 = NOVALUE;
        // SubProg canonical_path pc: 1104 op: EXIT (61)
        goto L20; // [1104] 1115
        // SubProg canonical_path pc: 1106 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_6764

// block var list_6768

// block var supplied_name_6771
        // SubProg canonical_path pc: 1108 op: STARTLINE (58)

        /** filesys.e:1790			end for*/
        // SubProg canonical_path pc: 1110 op: ENDFOR_GENERAL (39)
L23: // addr: 1110 pc: 1110 sub: 6631 op: 39
        _i_6760 = _i_6760 + -1;
        goto L1F; // [1110] 649
L20: // addr: 1115 pc: 1110 sub: 6631 op: 39
        ;
    }
    // SubProg canonical_path pc: 1115 op: STARTLINE (58)

    /** filesys.e:1791			if and_bits(case_flags,or_bits(CORRECT,TO_LOWER))=TO_LOWER and length(lPath) then*/
    // SubProg canonical_path pc: 1117 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)2 | (uintptr_t)1;
         _3636 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 1121 op: AND_BITS (56)
    if (IS_ATOM_INT(_3636)) {
        {uintptr_t tu;
             tu = (uintptr_t)_case_flags_6635 & (uintptr_t)_3636;
             _3637 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_case_flags_6635;
        _3637 = Dand_bits(&temp_d, DBL_PTR(_3636));
    }
    DeRef(_3636);
    _3636 = NOVALUE;
    // SubProg canonical_path pc: 1125 op: EQUALS (3)
    if (IS_ATOM_INT(_3637)) {
        _3638 = (_3637 == 1);
    }
    else {
        _3638 = (DBL_PTR(_3637)->dbl == (eudouble)1);
    }
    DeRef(_3637);
    _3637 = NOVALUE;
    // SubProg canonical_path pc: 1129 op: SC1_AND_IF (146)
    if (_3638 == 0) {
        goto L2E; // [1129] 1149
    }
    // SubProg canonical_path pc: 1133 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_6636)){
            _3640 = SEQ_PTR(_lPath_6636)->length;
    }
    else {
        _3640 = 1;
    }
    // SubProg canonical_path pc: 1136 op: NOP1 (159)
    // SubProg canonical_path pc: 1137 op: IF (20)
    if (_3640 == 0)
    {
        _3640 = NOVALUE;
        goto L2E; // [1137] 1149
    }
    else{
        _3640 = NOVALUE;
    }
    // SubProg canonical_path pc: 1140 op: STARTLINE (58)

    /** filesys.e:1792				lPath = lower(lPath)*/
    // SubProg canonical_path pc: 1142 op: PROC (27)
    RefDS(_lPath_6636);
    _0 = _lPath_6636;
    _lPath_6636 = _17lower(_lPath_6636);
    DeRefDS(_0);
    // SubProg canonical_path pc: 1146 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 1148 op: NOP1 (159)
L2E: // addr: 1149 pc: 1148 sub: 6631 op: 159
    // SubProg canonical_path pc: 1149 op: NOP1 (159)
L1D: // addr: 1150 pc: 1149 sub: 6631 op: 159
    // SubProg canonical_path pc: 1150 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sl_6739
    DeRef(_sl_6739);
    _sl_6739 = NOVALUE;

// block var short_name_6742

// block var correct_name_6745

// block var lower_name_6748
    // SubProg canonical_path pc: 1152 op: NOP1 (159)
L1C: // addr: 1153 pc: 1152 sub: 6631 op: 159
    // SubProg canonical_path pc: 1153 op: STARTLINE (58)

    /** filesys.e:1796		ifdef WINDOWS then*/
    // SubProg canonical_path pc: 1155 op: STARTLINE (58)

    /** filesys.e:1810		return lPath & wildcard_suffix*/
    // SubProg canonical_path pc: 1157 op: PRIVATE_INIT_CHECK (30)
    // SubProg canonical_path pc: 1159 op: CONCAT (15)
    Concat((object_ptr)&_3642, _lPath_6636, _wildcard_suffix_6682);
    // SubProg canonical_path pc: 1163 op: RETURNF (28)

// Exiting block BLOCK: canonical_path

// block var path_in_6633
    DeRefDS(_path_in_6633);

// block var directory_given_6634

// block var case_flags_6635

// block var lPath_6636
    DeRefDS(_lPath_6636);

// block var lPosA_6637

// block var lPosB_6638

// block var lLevel_6639
    DeRefi(_lLevel_6639);

// block var lHome_6640
    DeRefi(_lHome_6640);

// block var wildcard_suffix_6682
    DeRefDS(_wildcard_suffix_6682);

// block var first_wildcard_at_6683
    DeRef(_3638);
    _3638 = NOVALUE;
    _3591 = NOVALUE;
    _3608 = NOVALUE;
    DeRef(_3570);
    _3570 = NOVALUE;
    DeRef(_3477);
    _3477 = NOVALUE;
    _3573 = NOVALUE;
    _3620 = NOVALUE;
    DeRef(_3518);
    _3518 = NOVALUE;
    _3489 = NOVALUE;
    DeRef(_3568);
    _3568 = NOVALUE;
    DeRef(_3567);
    _3567 = NOVALUE;
    DeRef(_3475);
    _3475 = NOVALUE;
    _3613 = NOVALUE;
    DeRef(_3471);
    _3471 = NOVALUE;
    DeRef(_3562);
    _3562 = NOVALUE;
    DeRef(_3522);
    _3522 = NOVALUE;
    DeRef(_3590);
    _3590 = NOVALUE;
    DeRef(_3532);
    _3532 = NOVALUE;
    DeRef(_3629);
    _3629 = NOVALUE;
    _3586 = NOVALUE;
    _3623 = NOVALUE;
    DeRef(_3468);
    _3468 = NOVALUE;
    DeRef(_3483);
    _3483 = NOVALUE;
    DeRef(_3480);
    _3480 = NOVALUE;
    DeRef(_3515);
    _3515 = NOVALUE;
    DeRef(_3535);
    _3535 = NOVALUE;
    DeRef(_3510);
    _3510 = NOVALUE;
    DeRef(_3493);
    _3493 = NOVALUE;
    DeRef(_3612);
    _3612 = NOVALUE;
    DeRef(_3559);
    _3559 = NOVALUE;
    _3631 = NOVALUE;
    DeRef(_3622);
    _3622 = NOVALUE;
    return _3642;
    // SubProg canonical_path pc: 1167 op: BADRETURNF (43)
    ;
}


object _20abbreviate_path(object _orig_path_6874, object _base_paths_6875)
{
    object _expanded_path_6876 = NOVALUE;
    object _fs_case_inlined_fs_case_at_61_6886 = NOVALUE;
    object _lowered_expanded_path_6887 = NOVALUE;
    object _fs_case_inlined_fs_case_at_73_6889 = NOVALUE;
    object _fs_case_inlined_fs_case_at_216_6916 = NOVALUE;
    object _s_inlined_fs_case_at_213_6915 = NOVALUE;
// skipping _3679  name type: 0
    object _3678 = NOVALUE; // 6929 3678
    object _3677 = NOVALUE; // 6928 3677
// skipping _3676  name type: 0
// skipping _3675  name type: 0
    object _3674 = NOVALUE; // 6924 3674
    object _3673 = NOVALUE; // 6923 3673
    object _3672 = NOVALUE; // 6922 3672
    object _3671 = NOVALUE; // 6921 3671
    object _3670 = NOVALUE; // 6920 3670
// skipping _3669  name type: 0
    object _3668 = NOVALUE; // 6918 3668
    object _3667 = NOVALUE; // 6917 3667
    object _3666 = NOVALUE; // 6913 3666
    object _3665 = NOVALUE; // 6911 3665
    object _3664 = NOVALUE; // 6910 3664
    object _3663 = NOVALUE; // 6909 3663
    object _3662 = NOVALUE; // 6908 3662
    object _3661 = NOVALUE; // 6907 3661
// skipping _3660  name type: 0
// skipping _3659  name type: 0
    object _3658 = NOVALUE; // 6902 3658
    object _3657 = NOVALUE; // 6901 3657
    object _3656 = NOVALUE; // 6900 3656
    object _3655 = NOVALUE; // 6899 3655
    object _3654 = NOVALUE; // 6898 3654
    object _3653 = NOVALUE; // 6897 3653
    object _3652 = NOVALUE; // 6896 3652
    object _3651 = NOVALUE; // 6895 3651
    object _3650 = NOVALUE; // 6894 3650
    object _3649 = NOVALUE; // 6892 3649
    object _3648 = NOVALUE; // 6884 3648
    object _3647 = NOVALUE; // 6883 3647
    object _3646 = NOVALUE; // 6882 3646
// skipping _3645  name type: 0
    object _3644 = NOVALUE; // 6878 3644
// skipping _3643  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg abbreviate_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 5 op: STARTLINE (58)

    /** filesys.e:1881		expanded_path = canonical_path(orig_path)*/
    // SubProg abbreviate_path pc: 7 op: PROC (27)
    RefDS(_orig_path_6874);
    _0 = _expanded_path_6876;
    _expanded_path_6876 = _20canonical_path(_orig_path_6874, 0, 0);
    DeRef(_0);
    // SubProg abbreviate_path pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 15 op: STARTLINE (58)

    /** filesys.e:1884		base_paths = append(base_paths, curdir())*/
    // SubProg abbreviate_path pc: 17 op: PROC (27)
    _3644 = _20curdir(0);
    // SubProg abbreviate_path pc: 21 op: APPEND (35)
    Ref(_3644);
    Append(&_base_paths_6875, _base_paths_6875, _3644);
    DeRef(_3644);
    _3644 = NOVALUE;
    // SubProg abbreviate_path pc: 25 op: STARTLINE (58)

    /** filesys.e:1886		for i = 1 to length(base_paths) do*/
    // SubProg abbreviate_path pc: 27 op: LENGTH (42)
    // Known sequence length:
    _3646 = 1;
    // SubProg abbreviate_path pc: 30 op: FOR_I (125)
    {
        object _i_6881;
        _i_6881 = 1;
L1: // addr: 37 pc: 30 sub: 6872 op: 125
        if (_i_6881 > 1){
            goto L2; // [30] 60
        }
        // SubProg abbreviate_path pc: 37 op: STARTLINE (58)

        /** filesys.e:1887			base_paths[i] = canonical_path(base_paths[i], 1) -- assume each base path is meant to be a directory.*/
        // SubProg abbreviate_path pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_6875);
        _3647 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg abbreviate_path pc: 43 op: PROC (27)
        Ref(_3647);
        _3648 = _20canonical_path(_3647, 1, 0);
        _3647 = NOVALUE;
        // SubProg abbreviate_path pc: 49 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_base_paths_6875);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _base_paths_6875 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3648;
        if( _1 != _3648 ){
            DeRef(_1);
        }
        _3648 = NOVALUE;
        // SubProg abbreviate_path pc: 53 op: STARTLINE (58)

        /** filesys.e:1888		end for*/
        // SubProg abbreviate_path pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_6881 = 1 + 1;
        goto L1; // [55] 37
L2: // addr: 60 pc: 55 sub: 6872 op: 54
        ;
    }
    // SubProg abbreviate_path pc: 60 op: STARTLINE (58)

    /** filesys.e:1892		base_paths = fs_case(base_paths)*/
    // SubProg abbreviate_path pc: 62 op: STARTLINE (58)

    /** filesys.e:1825		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 64 op: STARTLINE (58)

    /** filesys.e:1828			return s*/
    // SubProg abbreviate_path pc: 66 op: ASSIGN (18)
    RefDS(_base_paths_6875);
    DeRefDS(_base_paths_6875);
    _base_paths_6875 = _base_paths_6875;
    // SubProg abbreviate_path pc: 69 op: NOP1 (159)
    // SubProg abbreviate_path pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 72 op: STARTLINE (58)

    /** filesys.e:1893		sequence lowered_expanded_path = fs_case(expanded_path)*/
    // SubProg abbreviate_path pc: 74 op: STARTLINE (58)

    /** filesys.e:1825		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 76 op: STARTLINE (58)

    /** filesys.e:1828			return s*/
    // SubProg abbreviate_path pc: 78 op: ASSIGN (18)
    RefDS(_expanded_path_6876);
    DeRef(_lowered_expanded_path_6887);
    _lowered_expanded_path_6887 = _expanded_path_6876;
    // SubProg abbreviate_path pc: 81 op: NOP1 (159)
    // SubProg abbreviate_path pc: 82 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 84 op: STARTLINE (58)

    /** filesys.e:1896		for i = 1 to length(base_paths) do*/
    // SubProg abbreviate_path pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_6875)){
            _3649 = SEQ_PTR(_base_paths_6875)->length;
    }
    else {
        _3649 = 1;
    }
    // SubProg abbreviate_path pc: 89 op: FOR_I (125)
    {
        object _i_6891;
        _i_6891 = 1;
L3: // addr: 96 pc: 89 sub: 6872 op: 125
        if (_i_6891 > _3649){
            goto L4; // [89] 143
        }
        // SubProg abbreviate_path pc: 96 op: STARTLINE (58)

        /** filesys.e:1897			if search:begins(base_paths[i], lowered_expanded_path) then*/
        // SubProg abbreviate_path pc: 98 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_6875);
        _3650 = (object)*(((s1_ptr)_2)->base + _i_6891);
        // SubProg abbreviate_path pc: 102 op: PROC (27)
        Ref(_3650);
        RefDS(_lowered_expanded_path_6887);
        _3651 = _19begins(_3650, _lowered_expanded_path_6887);
        _3650 = NOVALUE;
        // SubProg abbreviate_path pc: 107 op: IF (20)
        if (_3651 == 0) {
            DeRef(_3651);
            _3651 = NOVALUE;
            goto L5; // [107] 136
        }
        else {
            if (!IS_ATOM_INT(_3651) && DBL_PTR(_3651)->dbl == 0.0){
                DeRef(_3651);
                _3651 = NOVALUE;
                goto L5; // [107] 136
            }
            DeRef(_3651);
            _3651 = NOVALUE;
        }
        DeRef(_3651);
        _3651 = NOVALUE;
        // SubProg abbreviate_path pc: 110 op: STARTLINE (58)

        /** filesys.e:1899				return expanded_path[length(base_paths[i]) + 1 .. $]*/
        // SubProg abbreviate_path pc: 112 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_6875);
        _3652 = (object)*(((s1_ptr)_2)->base + _i_6891);
        // SubProg abbreviate_path pc: 116 op: LENGTH (42)
        if (IS_SEQUENCE(_3652)){
                _3653 = SEQ_PTR(_3652)->length;
        }
        else {
            _3653 = 1;
        }
        _3652 = NOVALUE;
        // SubProg abbreviate_path pc: 119 op: PLUS1 (93)
        _3654 = _3653 + 1;
        _3653 = NOVALUE;
        // SubProg abbreviate_path pc: 123 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_6876)){
                _3655 = SEQ_PTR(_expanded_path_6876)->length;
        }
        else {
            _3655 = 1;
        }
        // SubProg abbreviate_path pc: 126 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3656;
        RHS_Slice(_expanded_path_6876, _3654, _3655);
        // SubProg abbreviate_path pc: 131 op: RETURNF (28)

// Exiting block BLOCK: abbreviate_path

// block var orig_path_6874
        DeRefDS(_orig_path_6874);

// block var base_paths_6875
        DeRefDS(_base_paths_6875);

// block var expanded_path_6876
        DeRefDS(_expanded_path_6876);

// block var lowered_expanded_path_6887
        DeRefDS(_lowered_expanded_path_6887);
        _3652 = NOVALUE;
        _3654 = NOVALUE;
        return _3656;
        // SubProg abbreviate_path pc: 135 op: NOP1 (159)
L5: // addr: 136 pc: 135 sub: 6872 op: 159
        // SubProg abbreviate_path pc: 136 op: STARTLINE (58)

        /** filesys.e:1901		end for*/
        // SubProg abbreviate_path pc: 138 op: ENDFOR_INT_UP1 (54)
        _i_6891 = _i_6891 + 1;
        goto L3; // [138] 96
L4: // addr: 143 pc: 138 sub: 6872 op: 54
        ;
    }
    // SubProg abbreviate_path pc: 143 op: STARTLINE (58)

    /** filesys.e:1904		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 145 op: STARTLINE (58)

    /** filesys.e:1912		base_paths = stdseq:split(base_paths[$], SLASH)*/
    // SubProg abbreviate_path pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_6875)){
            _3657 = SEQ_PTR(_base_paths_6875)->length;
    }
    else {
        _3657 = 1;
    }
    // SubProg abbreviate_path pc: 150 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_base_paths_6875);
    _3658 = (object)*(((s1_ptr)_2)->base + _3657);
    // SubProg abbreviate_path pc: 154 op: PROC (27)
    Ref(_3658);
    _0 = _base_paths_6875;
    _base_paths_6875 = _23split(_3658, 47, 0, 0);
    DeRefDS(_0);
    _3658 = NOVALUE;
    // SubProg abbreviate_path pc: 161 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 163 op: STARTLINE (58)

    /** filesys.e:1914		expanded_path = stdseq:split(expanded_path, SLASH)*/
    // SubProg abbreviate_path pc: 165 op: PROC (27)
    RefDS(_expanded_path_6876);
    _0 = _expanded_path_6876;
    _expanded_path_6876 = _23split(_expanded_path_6876, 47, 0, 0);
    DeRefDS(_0);
    // SubProg abbreviate_path pc: 172 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 174 op: STARTLINE (58)

    /** filesys.e:1915		lowered_expanded_path = ""*/
    // SubProg abbreviate_path pc: 176 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lowered_expanded_path_6887);
    _lowered_expanded_path_6887 = _5;
    // SubProg abbreviate_path pc: 179 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 181 op: STARTLINE (58)

    /** filesys.e:1918		for i = 1 to math:min({length(expanded_path), length(base_paths) - 1}) do*/
    // SubProg abbreviate_path pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_expanded_path_6876)){
            _3661 = SEQ_PTR(_expanded_path_6876)->length;
    }
    else {
        _3661 = 1;
    }
    // SubProg abbreviate_path pc: 186 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_6875)){
            _3662 = SEQ_PTR(_base_paths_6875)->length;
    }
    else {
        _3662 = 1;
    }
    // SubProg abbreviate_path pc: 189 op: MINUS (10)
    _3663 = _3662 - 1;
    _3662 = NOVALUE;
    // SubProg abbreviate_path pc: 193 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3661;
    ((intptr_t *)_2)[2] = _3663;
    _3664 = MAKE_SEQ(_1);
    _3663 = NOVALUE;
    _3661 = NOVALUE;
    // SubProg abbreviate_path pc: 197 op: PROC (27)
    _3665 = _14min(_3664);
    _3664 = NOVALUE;
    // SubProg abbreviate_path pc: 201 op: FOR (21)
    {
        object _i_6906;
        _i_6906 = 1;
L6: // addr: 208 pc: 201 sub: 6872 op: 21
        if (binary_op_a(GREATER, _i_6906, _3665)){
            goto L7; // [201] 305
        }
        // SubProg abbreviate_path pc: 208 op: STARTLINE (58)

        /** filesys.e:1919			if not equal(fs_case(expanded_path[i]), base_paths[i]) then*/
        // SubProg abbreviate_path pc: 210 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_expanded_path_6876);
        if (!IS_ATOM_INT(_i_6906)){
            _3666 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_6906)->dbl));
        }
        else{
            _3666 = (object)*(((s1_ptr)_2)->base + _i_6906);
        }
        // SubProg abbreviate_path pc: 214 op: ASSIGN (18)
        Ref(_3666);
        DeRef(_s_inlined_fs_case_at_213_6915);
        _s_inlined_fs_case_at_213_6915 = _3666;
        _3666 = NOVALUE;
        // SubProg abbreviate_path pc: 217 op: SEQUENCE_CHECK (97)
        // SubProg abbreviate_path pc: 219 op: STARTLINE (58)

        /** filesys.e:1825		ifdef WINDOWS then*/
        // SubProg abbreviate_path pc: 221 op: STARTLINE (58)

        /** filesys.e:1828			return s*/
        // SubProg abbreviate_path pc: 223 op: ASSIGN (18)
        Ref(_s_inlined_fs_case_at_213_6915);
        DeRef(_fs_case_inlined_fs_case_at_216_6916);
        _fs_case_inlined_fs_case_at_216_6916 = _s_inlined_fs_case_at_213_6915;
        // SubProg abbreviate_path pc: 226 op: NOP1 (159)
        // SubProg abbreviate_path pc: 227 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-fs_case from abbreviate_path @ 213

// block var s_inlined_fs_case_at_213_6915
        DeRef(_s_inlined_fs_case_at_213_6915);
        _s_inlined_fs_case_at_213_6915 = NOVALUE;
        // SubProg abbreviate_path pc: 229 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_6875);
        if (!IS_ATOM_INT(_i_6906)){
            _3667 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_6906)->dbl));
        }
        else{
            _3667 = (object)*(((s1_ptr)_2)->base + _i_6906);
        }
        // SubProg abbreviate_path pc: 233 op: EQUAL (153)
        if (_fs_case_inlined_fs_case_at_216_6916 == _3667)
        _3668 = 1;
        else if (IS_ATOM_INT(_fs_case_inlined_fs_case_at_216_6916) && IS_ATOM_INT(_3667))
        _3668 = 0;
        else
        _3668 = (compare(_fs_case_inlined_fs_case_at_216_6916, _3667) == 0);
        _3667 = NOVALUE;
        // SubProg abbreviate_path pc: 237 op: NOT_IFW (108)
        if (_3668 != 0)
        goto L8; // [237] 298
        _3668 = NOVALUE;
        // SubProg abbreviate_path pc: 240 op: STARTLINE (58)

        /** filesys.e:1923				expanded_path = repeat("..", length(base_paths) - i) & expanded_path[i .. $]*/
        // SubProg abbreviate_path pc: 242 op: LENGTH (42)
        if (IS_SEQUENCE(_base_paths_6875)){
                _3670 = SEQ_PTR(_base_paths_6875)->length;
        }
        else {
            _3670 = 1;
        }
        // SubProg abbreviate_path pc: 245 op: MINUS (10)
        if (IS_ATOM_INT(_i_6906)) {
            _3671 = _3670 - _i_6906;
        }
        else {
            _3671 = NewDouble((eudouble)_3670 - DBL_PTR(_i_6906)->dbl);
        }
        _3670 = NOVALUE;
        // SubProg abbreviate_path pc: 249 op: REPEAT (32)
        _3672 = Repeat(_3272, _3671);
        DeRef(_3671);
        _3671 = NOVALUE;
        // SubProg abbreviate_path pc: 253 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_6876)){
                _3673 = SEQ_PTR(_expanded_path_6876)->length;
        }
        else {
            _3673 = 1;
        }
        // SubProg abbreviate_path pc: 256 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_3674;
        RHS_Slice(_expanded_path_6876, _i_6906, _3673);
        // SubProg abbreviate_path pc: 261 op: CONCAT (15)
        Concat((object_ptr)&_expanded_path_6876, _3672, _3674);
        DeRefDS(_3672);
        _3672 = NOVALUE;
        DeRef(_3672);
        _3672 = NOVALUE;
        DeRefDS(_3674);
        _3674 = NOVALUE;
        // SubProg abbreviate_path pc: 265 op: STARTLINE (58)

        /** filesys.e:1924				expanded_path = stdseq:join(expanded_path, SLASH)*/
        // SubProg abbreviate_path pc: 267 op: PROC (27)
        RefDS(_expanded_path_6876);
        _0 = _expanded_path_6876;
        _expanded_path_6876 = _23join(_expanded_path_6876, 47);
        DeRefDS(_0);
        // SubProg abbreviate_path pc: 272 op: SEQUENCE_CHECK (97)
        // SubProg abbreviate_path pc: 274 op: STARTLINE (58)

        /** filesys.e:1925				if length(expanded_path) < length(orig_path) then*/
        // SubProg abbreviate_path pc: 276 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_6876)){
                _3677 = SEQ_PTR(_expanded_path_6876)->length;
        }
        else {
            _3677 = 1;
        }
        // SubProg abbreviate_path pc: 279 op: LENGTH (42)
        if (IS_SEQUENCE(_orig_path_6874)){
                _3678 = SEQ_PTR(_orig_path_6874)->length;
        }
        else {
            _3678 = 1;
        }
        // SubProg abbreviate_path pc: 282 op: LESS_IFW_I (119)
        if (_3677 >= _3678)
        goto L7; // [282] 305
        // SubProg abbreviate_path pc: 286 op: STARTLINE (58)

        /** filesys.e:1927			  		return expanded_path*/
        // SubProg abbreviate_path pc: 288 op: RETURNF (28)
        DeRef(_i_6906);

// Exiting block BLOCK: abbreviate_path

// block var orig_path_6874
        DeRefDS(_orig_path_6874);

// block var base_paths_6875
        DeRefDS(_base_paths_6875);

// block var lowered_expanded_path_6887
        DeRef(_lowered_expanded_path_6887);
        _3652 = NOVALUE;
        DeRef(_3654);
        _3654 = NOVALUE;
        DeRef(_3665);
        _3665 = NOVALUE;
        DeRef(_3656);
        _3656 = NOVALUE;
        return _expanded_path_6876;
        // SubProg abbreviate_path pc: 292 op: NOP1 (159)
        // SubProg abbreviate_path pc: 293 op: STARTLINE (58)

        /** filesys.e:1929				exit*/
        // SubProg abbreviate_path pc: 295 op: EXIT (61)
        goto L7; // [295] 305
        // SubProg abbreviate_path pc: 297 op: NOP1 (159)
L8: // addr: 298 pc: 297 sub: 6872 op: 159
        // SubProg abbreviate_path pc: 298 op: STARTLINE (58)

        /** filesys.e:1931		end for*/
        // SubProg abbreviate_path pc: 300 op: ENDFOR_INT_UP1 (54)
        _0 = _i_6906;
        if (IS_ATOM_INT(_i_6906)) {
            _i_6906 = _i_6906 + 1;
            if ((object)((uintptr_t)_i_6906 +(uintptr_t) HIGH_BITS) >= 0){
                _i_6906 = NewDouble((eudouble)_i_6906);
            }
        }
        else {
            _i_6906 = binary_op_a(PLUS, _i_6906, 1);
        }
        DeRef(_0);
        goto L6; // [300] 208
L7: // addr: 305 pc: 300 sub: 6872 op: 54
        ;
        DeRef(_i_6906);
    }
    // SubProg abbreviate_path pc: 305 op: STARTLINE (58)

    /** filesys.e:1934		return orig_path*/
    // SubProg abbreviate_path pc: 307 op: RETURNF (28)

// Exiting block BLOCK: abbreviate_path

// block var base_paths_6875
    DeRefDS(_base_paths_6875);

// block var expanded_path_6876
    DeRef(_expanded_path_6876);

// block var lowered_expanded_path_6887
    DeRef(_lowered_expanded_path_6887);
    _3652 = NOVALUE;
    DeRef(_3654);
    _3654 = NOVALUE;
    DeRef(_3665);
    _3665 = NOVALUE;
    DeRef(_3656);
    _3656 = NOVALUE;
    return _orig_path_6874;
    // SubProg abbreviate_path pc: 311 op: BADRETURNF (43)
    ;
}


object _20file_type(object _filename_6964)
{
    object _dirfil_6965 = NOVALUE;
    object _3711 = NOVALUE; // 6985 3711
    object _3710 = NOVALUE; // 6984 3710
    object _3709 = NOVALUE; // 6983 3709
    object _3708 = NOVALUE; // 6982 3708
    object _3707 = NOVALUE; // 6981 3707
// skipping _3706  name type: 0
    object _3705 = NOVALUE; // 6979 3705
    object _3704 = NOVALUE; // 6978 3704
    object _3703 = NOVALUE; // 6977 3703
    object _3702 = NOVALUE; // 6976 3702
    object _3701 = NOVALUE; // 6975 3701
    object _3700 = NOVALUE; // 6974 3700
    object _3699 = NOVALUE; // 6972 3699
// skipping _3698  name type: 0
    object _3697 = NOVALUE; // 6969 3697
// skipping _3696  name type: 0
    object _3695 = NOVALUE; // 6967 3695
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_type pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg file_type pc: 3 op: STARTLINE (58)

    /** filesys.e:2040		if eu:find('*', filename) or eu:find('?', filename) then return FILETYPE_UNDEFINED end if*/
    // SubProg file_type pc: 5 op: FIND_FROM (176)
    _3695 = find_from(42, _filename_6964, 1);
    // SubProg file_type pc: 10 op: SC1_OR_IF (147)
    if (_3695 != 0) {
        goto L1; // [10] 24
    }
    // SubProg file_type pc: 14 op: FIND_FROM (176)
    _3697 = find_from(63, _filename_6964, 1);
    // SubProg file_type pc: 19 op: NOP1 (159)
    // SubProg file_type pc: 20 op: IF (20)
    if (_3697 == 0)
    {
        _3697 = NOVALUE;
        goto L2; // [20] 29
    }
    else{
        _3697 = NOVALUE;
    }
    // SubProg file_type pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 6962 op: 159
    // SubProg file_type pc: 24 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_6964
    DeRefDS(_filename_6964);

// block var dirfil_6965
    DeRef(_dirfil_6965);
    return -1;
    // SubProg file_type pc: 28 op: NOP1 (159)
L2: // addr: 29 pc: 28 sub: 6962 op: 159
    // SubProg file_type pc: 29 op: STARTLINE (58)

    /** filesys.e:2042		ifdef WINDOWS then*/
    // SubProg file_type pc: 31 op: STARTLINE (58)

    /** filesys.e:2048		dirfil = dir(filename)*/
    // SubProg file_type pc: 33 op: PROC (27)
    RefDS(_filename_6964);
    _0 = _dirfil_6965;
    _dirfil_6965 = _20dir(_filename_6964);
    DeRef(_0);
    // SubProg file_type pc: 37 op: STARTLINE (58)

    /** filesys.e:2049		if sequence(dirfil) then*/
    // SubProg file_type pc: 39 op: IS_A_SEQUENCE (68)
    _3699 = IS_SEQUENCE(_dirfil_6965);
    // SubProg file_type pc: 42 op: IF (20)
    if (_3699 == 0)
    {
        _3699 = NOVALUE;
        goto L3; // [42] 126
    }
    else{
        _3699 = NOVALUE;
    }
    // SubProg file_type pc: 45 op: STARTLINE (58)

    /** filesys.e:2050			if length( dirfil ) > 1 or eu:find('d', dirfil[1][2]) or (length(filename)=3 and filename[2]=':') then*/
    // SubProg file_type pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_dirfil_6965)){
            _3700 = SEQ_PTR(_dirfil_6965)->length;
    }
    else {
        _3700 = 1;
    }
    // SubProg file_type pc: 50 op: GREATER (6)
    _3701 = (_3700 > 1);
    _3700 = NOVALUE;
    // SubProg file_type pc: 54 op: SC1_OR (143)
    if (_3701 != 0) {
        _3702 = 1;
        goto L4; // [54] 75
    }
    // SubProg file_type pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dirfil_6965);
    _3703 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_type pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3703);
    _3704 = (object)*(((s1_ptr)_2)->base + 2);
    _3703 = NOVALUE;
    // SubProg file_type pc: 66 op: FIND_FROM (176)
    _3705 = find_from(100, _3704, 1);
    _3704 = NOVALUE;
    // SubProg file_type pc: 71 op: SC2_OR (144)
    _3702 = (_3705 != 0);
    // SubProg file_type pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 6962 op: 159
    // SubProg file_type pc: 75 op: SC1_OR_IF (147)
    if (_3702 != 0) {
        goto L5; // [75] 107
    }
    // SubProg file_type pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_6964)){
            _3707 = SEQ_PTR(_filename_6964)->length;
    }
    else {
        _3707 = 1;
    }
    // SubProg file_type pc: 82 op: EQUALS (3)
    _3708 = (_3707 == 3);
    _3707 = NOVALUE;
    // SubProg file_type pc: 86 op: SC1_AND (141)
    if (_3708 == 0) {
        DeRef(_3709);
        _3709 = 0;
        goto L6; // [86] 102
    }
    // SubProg file_type pc: 90 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_filename_6964);
    _3710 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg file_type pc: 94 op: EQUALS (3)
    if (IS_ATOM_INT(_3710)) {
        _3711 = (_3710 == 58);
    }
    else {
        _3711 = binary_op(EQUALS, _3710, 58);
    }
    _3710 = NOVALUE;
    // SubProg file_type pc: 98 op: SC2_AND (142)
    if (IS_ATOM_INT(_3711))
    _3709 = (_3711 != 0);
    else
    _3709 = DBL_PTR(_3711)->dbl != 0.0;
    // SubProg file_type pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 6962 op: 159
    // SubProg file_type pc: 102 op: NOP1 (159)
    // SubProg file_type pc: 103 op: IF (20)
    if (_3709 == 0)
    {
        _3709 = NOVALUE;
        goto L7; // [103] 116
    }
    else{
        _3709 = NOVALUE;
    }
    // SubProg file_type pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 6962 op: 159
    // SubProg file_type pc: 107 op: STARTLINE (58)

    /** filesys.e:2051				return FILETYPE_DIRECTORY*/
    // SubProg file_type pc: 109 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_6964
    DeRefDS(_filename_6964);

// block var dirfil_6965
    DeRef(_dirfil_6965);
    DeRef(_3701);
    _3701 = NOVALUE;
    DeRef(_3708);
    _3708 = NOVALUE;
    DeRef(_3711);
    _3711 = NOVALUE;
    return 2;
    // SubProg file_type pc: 113 op: ELSE (23)
    goto L8; // [113] 133
    // SubProg file_type pc: 115 op: NOP1 (159)
L7: // addr: 116 pc: 115 sub: 6962 op: 159
    // SubProg file_type pc: 116 op: STARTLINE (58)

    /** filesys.e:2053				return FILETYPE_FILE*/
    // SubProg file_type pc: 118 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_6964
    DeRefDS(_filename_6964);

// block var dirfil_6965
    DeRef(_dirfil_6965);
    DeRef(_3701);
    _3701 = NOVALUE;
    DeRef(_3708);
    _3708 = NOVALUE;
    DeRef(_3711);
    _3711 = NOVALUE;
    return 1;
    // SubProg file_type pc: 122 op: NOP1 (159)
    // SubProg file_type pc: 123 op: ELSE (23)
    goto L8; // [123] 133
    // SubProg file_type pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 6962 op: 159
    // SubProg file_type pc: 126 op: STARTLINE (58)

    /** filesys.e:2056			return FILETYPE_NOT_FOUND*/
    // SubProg file_type pc: 128 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_6964
    DeRefDS(_filename_6964);

// block var dirfil_6965
    DeRef(_dirfil_6965);
    DeRef(_3701);
    _3701 = NOVALUE;
    DeRef(_3708);
    _3708 = NOVALUE;
    DeRef(_3711);
    _3711 = NOVALUE;
    return 0;
    // SubProg file_type pc: 132 op: NOP1 (159)
L8: // addr: 133 pc: 132 sub: 6962 op: 159
    // SubProg file_type pc: 133 op: BADRETURNF (43)
    ;
}


object _20file_exists(object _name_7004)
{
    object _pName_7007 = NOVALUE;
    object _r_7009 = NOVALUE;
    object _3716 = NOVALUE; // 7012 3716
// skipping _3715  name type: 0
    object _3714 = NOVALUE; // 7010 3714
// skipping _3713  name type: 0
    object _3712 = NOVALUE; // 7006 3712
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_exists pc: 1 op: STARTLINE (58)

    /** filesys.e:2103		if atom(name) then*/
    // SubProg file_exists pc: 3 op: IS_AN_ATOM (67)
    _3712 = IS_ATOM(_name_7004);
    // SubProg file_exists pc: 6 op: IF (20)
    if (_3712 == 0)
    {
        _3712 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _3712 = NOVALUE;
    }
    // SubProg file_exists pc: 9 op: STARTLINE (58)

    /** filesys.e:2104			return 0*/
    // SubProg file_exists pc: 11 op: RETURNF (28)

// Exiting block BLOCK: file_exists

// block var name_7004
    DeRef(_name_7004);

// block var pName_7007
    DeRef(_pName_7007);

// block var r_7009
    DeRef(_r_7009);
    return 0;
    // SubProg file_exists pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 7002 op: 159
    // SubProg file_exists pc: 16 op: STARTLINE (58)

    /** filesys.e:2107		ifdef WINDOWS then*/
    // SubProg file_exists pc: 18 op: STARTLINE (58)

    /** filesys.e:2115			atom pName = machine:allocate_string(name)*/
    // SubProg file_exists pc: 20 op: PROC (27)
    Ref(_name_7004);
    _0 = _pName_7007;
    _pName_7007 = _9allocate_string(_name_7004, 0);
    DeRef(_0);
    // SubProg file_exists pc: 25 op: STARTLINE (58)

    /** filesys.e:2116			atom r = c_func(xGetFileAttributes, {pName, 0})*/
    // SubProg file_exists pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_exists pc: 29 op: RIGHT_BRACE_2 (85)
    Ref(_pName_7007);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pName_7007;
    ((intptr_t *)_2)[2] = 0;
    _3714 = MAKE_SEQ(_1);
    // SubProg file_exists pc: 33 op: C_FUNC (133)
    DeRef(_r_7009);
    _r_7009 = call_c(1, _20xGetFileAttributes_6075, _3714);
    DeRefDS(_3714);
    _3714 = NOVALUE;
    // SubProg file_exists pc: 38 op: STARTLINE (58)

    /** filesys.e:2117			machine:free(pName)*/
    // SubProg file_exists pc: 40 op: PROC (27)
    Ref(_pName_7007);
    _9free(_pName_7007);
    // SubProg file_exists pc: 43 op: STARTLINE (58)

    /** filesys.e:2119			return r = 0*/
    // SubProg file_exists pc: 45 op: EQUALS (3)
    if (IS_ATOM_INT(_r_7009)) {
        _3716 = (_r_7009 == 0);
    }
    else {
        _3716 = (DBL_PTR(_r_7009)->dbl == (eudouble)0);
    }
    // SubProg file_exists pc: 49 op: RETURNF (28)

// Exiting block BLOCK: file_exists

// block var name_7004
    DeRef(_name_7004);

// block var pName_7007
    DeRef(_pName_7007);

// block var r_7009
    DeRef(_r_7009);
    return _3716;
    // SubProg file_exists pc: 53 op: BADRETURNF (43)
    ;
}


object _20file_timestamp(object _fname_7015)
{
    object _d_7016 = NOVALUE;
    object _3731 = NOVALUE; // 7032 3731
    object _3730 = NOVALUE; // 7031 3730
    object _3729 = NOVALUE; // 7030 3729
    object _3728 = NOVALUE; // 7029 3728
    object _3727 = NOVALUE; // 7028 3727
    object _3726 = NOVALUE; // 7027 3726
    object _3725 = NOVALUE; // 7026 3725
    object _3724 = NOVALUE; // 7025 3724
    object _3723 = NOVALUE; // 7024 3723
    object _3722 = NOVALUE; // 7023 3722
    object _3721 = NOVALUE; // 7022 3721
    object _3720 = NOVALUE; // 7021 3720
    object _3719 = NOVALUE; // 7020 3719
    object _3718 = NOVALUE; // 7019 3718
// skipping _3717  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_timestamp pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg file_timestamp pc: 3 op: STARTLINE (58)

    /** filesys.e:2139		object d = dir(fname)*/
    // SubProg file_timestamp pc: 5 op: PROC (27)
    RefDS(_fname_7015);
    _0 = _d_7016;
    _d_7016 = _20dir(_fname_7015);
    DeRef(_0);
    // SubProg file_timestamp pc: 9 op: STARTLINE (58)

    /** filesys.e:2140		if atom(d) then return -1 end if*/
    // SubProg file_timestamp pc: 11 op: IS_AN_ATOM (67)
    _3718 = IS_ATOM(_d_7016);
    // SubProg file_timestamp pc: 14 op: IF (20)
    if (_3718 == 0)
    {
        _3718 = NOVALUE;
        goto L1; // [14] 22
    }
    else{
        _3718 = NOVALUE;
    }
    // SubProg file_timestamp pc: 17 op: RETURNF (28)

// Exiting block BLOCK: file_timestamp

// block var fname_7015
    DeRefDS(_fname_7015);

// block var d_7016
    DeRef(_d_7016);
    return -1;
    // SubProg file_timestamp pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 7013 op: 159
    // SubProg file_timestamp pc: 22 op: STARTLINE (58)

    /** filesys.e:2142		return datetime:new(d[1][D_YEAR], d[1][D_MONTH], d[1][D_DAY],*/
    // SubProg file_timestamp pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_7016);
    _3719 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 28 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3719);
    _3720 = (object)*(((s1_ptr)_2)->base + 4);
    _3719 = NOVALUE;
    // SubProg file_timestamp pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_7016);
    _3721 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3721);
    _3722 = (object)*(((s1_ptr)_2)->base + 5);
    _3721 = NOVALUE;
    // SubProg file_timestamp pc: 40 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_7016);
    _3723 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3723);
    _3724 = (object)*(((s1_ptr)_2)->base + 6);
    _3723 = NOVALUE;
    // SubProg file_timestamp pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_7016);
    _3725 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 52 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3725);
    _3726 = (object)*(((s1_ptr)_2)->base + 7);
    _3725 = NOVALUE;
    // SubProg file_timestamp pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_7016);
    _3727 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3727);
    _3728 = (object)*(((s1_ptr)_2)->base + 8);
    _3727 = NOVALUE;
    // SubProg file_timestamp pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_7016);
    _3729 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 68 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3729);
    _3730 = (object)*(((s1_ptr)_2)->base + 9);
    _3729 = NOVALUE;
    // SubProg file_timestamp pc: 72 op: PROC (27)
    Ref(_3720);
    Ref(_3722);
    Ref(_3724);
    Ref(_3726);
    Ref(_3728);
    Ref(_3730);
    _3731 = _21new(_3720, _3722, _3724, _3726, _3728, _3730);
    _3720 = NOVALUE;
    _3722 = NOVALUE;
    _3724 = NOVALUE;
    _3726 = NOVALUE;
    _3728 = NOVALUE;
    _3730 = NOVALUE;
    // SubProg file_timestamp pc: 81 op: RETURNF (28)

// Exiting block BLOCK: file_timestamp

// block var fname_7015
    DeRefDS(_fname_7015);

// block var d_7016
    DeRef(_d_7016);
    return _3731;
    // SubProg file_timestamp pc: 85 op: BADRETURNF (43)
    ;
}


object _20locate_file(object _filename_7206, object _search_list_7207, object _subdir_7208)
{
    object _extra_paths_7209 = NOVALUE;
    object _this_path_7210 = NOVALUE;
    object _3905 = NOVALUE; // 7311 3905
    object _3904 = NOVALUE; // 7310 3904
// skipping _3903  name type: 0
    object _3902 = NOVALUE; // 7307 3902
// skipping _3901  name type: 0
    object _3900 = NOVALUE; // 7304 3900
// skipping _3899  name type: 0
    object _3898 = NOVALUE; // 7302 3898
    object _3897 = NOVALUE; // 7300 3897
    object _3896 = NOVALUE; // 7299 3896
// skipping _3895  name type: 0
    object _3894 = NOVALUE; // 7297 3894
    object _3893 = NOVALUE; // 7296 3893
    object _3892 = NOVALUE; // 7295 3892
// skipping _3891  name type: 0
    object _3890 = NOVALUE; // 7292 3890
    object _3889 = NOVALUE; // 7291 3889
    object _3888 = NOVALUE; // 7289 3888
// skipping _3887  name type: 0
// skipping _3886  name type: 0
    object _3885 = NOVALUE; // 7284 3885
    object _3884 = NOVALUE; // 7283 3884
// skipping _3883  name type: 0
    object _3882 = NOVALUE; // 7280 3882
// skipping _3881  name type: 0
    object _3880 = NOVALUE; // 7277 3880
    object _3879 = NOVALUE; // 7276 3879
// skipping _3878  name type: 0
// skipping _3877  name type: 0
    object _3876 = NOVALUE; // 7271 3876
// skipping _3875  name type: 0
// skipping _3873  name type: 0
// skipping _3872  name type: 0
    object _3871 = NOVALUE; // 7265 3871
// skipping _3870  name type: 0
// skipping _3868  name type: 0
    object _3867 = NOVALUE; // 7260 3867
// skipping _3862  name type: 0
// skipping _3860  name type: 0
// skipping _3858  name type: 0
    object _3857 = NOVALUE; // 7250 3857
// skipping _3855  name type: 0
    object _3854 = NOVALUE; // 7247 3854
// skipping _3852  name type: 0
    object _3851 = NOVALUE; // 7244 3851
    object _3850 = NOVALUE; // 7243 3850
// skipping _3849  name type: 0
// skipping _3847  name type: 0
    object _3846 = NOVALUE; // 7238 3846
// skipping _3844  name type: 0
    object _3843 = NOVALUE; // 7235 3843
    object _3841 = NOVALUE; // 7233 3841
// skipping _3840  name type: 0
// skipping _3838  name type: 0
    object _3837 = NOVALUE; // 7228 3837
// skipping _3836  name type: 0
    object _3835 = NOVALUE; // 7226 3835
    object _3834 = NOVALUE; // 7225 3834
// skipping _3833  name type: 0
// skipping _3832  name type: 0
// skipping _3831  name type: 0
    object _3830 = NOVALUE; // 7220 3830
    object _3829 = NOVALUE; // 7219 3829
// skipping _3828  name type: 0
// skipping _3827  name type: 0
    object _3826 = NOVALUE; // 7216 3826
// skipping _3825  name type: 0
    object _3824 = NOVALUE; // 7214 3824
    object _3823 = NOVALUE; // 7212 3823
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg locate_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 7 op: STARTLINE (58)

    /** filesys.e:2509		if absolute_path(filename) then*/
    // SubProg locate_file pc: 9 op: PROC (27)
    RefDS(_filename_7206);
    _3823 = _20absolute_path(_filename_7206);
    // SubProg locate_file pc: 13 op: IF (20)
    if (_3823 == 0) {
        DeRef(_3823);
        _3823 = NOVALUE;
        goto L1; // [13] 23
    }
    else {
        if (!IS_ATOM_INT(_3823) && DBL_PTR(_3823)->dbl == 0.0){
            DeRef(_3823);
            _3823 = NOVALUE;
            goto L1; // [13] 23
        }
        DeRef(_3823);
        _3823 = NOVALUE;
    }
    DeRef(_3823);
    _3823 = NOVALUE;
    // SubProg locate_file pc: 16 op: STARTLINE (58)

    /** filesys.e:2510			return filename*/
    // SubProg locate_file pc: 18 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var search_list_7207
    DeRefDS(_search_list_7207);

// block var subdir_7208
    DeRefDS(_subdir_7208);

// block var extra_paths_7209
    DeRef(_extra_paths_7209);

// block var this_path_7210
    DeRef(_this_path_7210);
    return _filename_7206;
    // SubProg locate_file pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 7204 op: 159
    // SubProg locate_file pc: 23 op: STARTLINE (58)

    /** filesys.e:2513		if length(search_list) = 0 then*/
    // SubProg locate_file pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_search_list_7207)){
            _3824 = SEQ_PTR(_search_list_7207)->length;
    }
    else {
        _3824 = 1;
    }
    // SubProg locate_file pc: 28 op: EQUALS_IFW_I (121)
    if (_3824 != 0)
    goto L2; // [28] 283
    // SubProg locate_file pc: 32 op: STARTLINE (58)

    /** filesys.e:2514			search_list = append(search_list, "." & SLASH)*/
    // SubProg locate_file pc: 34 op: CONCAT (15)
    Append(&_3826, _3205, 47);
    // SubProg locate_file pc: 38 op: APPEND (35)
    RefDS(_3826);
    Append(&_search_list_7207, _search_list_7207, _3826);
    DeRefDS(_3826);
    _3826 = NOVALUE;
    // SubProg locate_file pc: 42 op: STARTLINE (58)

    /** filesys.e:2516			extra_paths = command_line()*/
    // SubProg locate_file pc: 44 op: COMMAND_LINE (100)
    DeRef(_extra_paths_7209);
    _extra_paths_7209 = Command_Line();
    // SubProg locate_file pc: 46 op: STARTLINE (58)

    /** filesys.e:2517			extra_paths = canonical_path(dirname(extra_paths[2]), 1)*/
    // SubProg locate_file pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_extra_paths_7209);
    _3829 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg locate_file pc: 52 op: PROC (27)
    RefDS(_3829);
    _3830 = _20dirname(_3829, 0);
    _3829 = NOVALUE;
    // SubProg locate_file pc: 57 op: PROC (27)
    _0 = _extra_paths_7209;
    _extra_paths_7209 = _20canonical_path(_3830, 1, 0);
    DeRefDS(_0);
    _3830 = NOVALUE;
    // SubProg locate_file pc: 63 op: STARTLINE (58)

    /** filesys.e:2518			search_list = append(search_list, extra_paths)*/
    // SubProg locate_file pc: 65 op: APPEND (35)
    Ref(_extra_paths_7209);
    Append(&_search_list_7207, _search_list_7207, _extra_paths_7209);
    // SubProg locate_file pc: 69 op: STARTLINE (58)

    /** filesys.e:2520			ifdef UNIX then*/
    // SubProg locate_file pc: 71 op: STARTLINE (58)

    /** filesys.e:2521				extra_paths = getenv("HOME")*/
    // SubProg locate_file pc: 73 op: GETENV (91)
    DeRef(_extra_paths_7209);
    _extra_paths_7209 = EGetEnv(_3484);
    // SubProg locate_file pc: 76 op: STARTLINE (58)

    /** filesys.e:2527			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 78 op: IS_A_SEQUENCE (68)
    _3834 = IS_SEQUENCE(_extra_paths_7209);
    // SubProg locate_file pc: 81 op: IF (20)
    if (_3834 == 0)
    {
        _3834 = NOVALUE;
        goto L3; // [81] 95
    }
    else{
        _3834 = NOVALUE;
    }
    // SubProg locate_file pc: 84 op: STARTLINE (58)

    /** filesys.e:2528				search_list = append(search_list, extra_paths & SLASH)*/
    // SubProg locate_file pc: 86 op: CONCAT (15)
    if (IS_SEQUENCE(_extra_paths_7209) && IS_ATOM(47)) {
        Append(&_3835, _extra_paths_7209, 47);
    }
    else if (IS_ATOM(_extra_paths_7209) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_3835, _extra_paths_7209, 47);
    }
    // SubProg locate_file pc: 90 op: APPEND (35)
    RefDS(_3835);
    Append(&_search_list_7207, _search_list_7207, _3835);
    DeRefDS(_3835);
    _3835 = NOVALUE;
    // SubProg locate_file pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 7204 op: 159
    // SubProg locate_file pc: 95 op: STARTLINE (58)

    /** filesys.e:2531			search_list = append(search_list, ".." & SLASH)*/
    // SubProg locate_file pc: 97 op: CONCAT (15)
    Append(&_3837, _3272, 47);
    // SubProg locate_file pc: 101 op: APPEND (35)
    RefDS(_3837);
    Append(&_search_list_7207, _search_list_7207, _3837);
    DeRefDS(_3837);
    _3837 = NOVALUE;
    // SubProg locate_file pc: 105 op: STARTLINE (58)

    /** filesys.e:2533			extra_paths = getenv("EUDIR")*/
    // SubProg locate_file pc: 107 op: GETENV (91)
    DeRef(_extra_paths_7209);
    _extra_paths_7209 = EGetEnv(_3839);
    // SubProg locate_file pc: 110 op: STARTLINE (58)

    /** filesys.e:2534			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 112 op: IS_A_SEQUENCE (68)
    _3841 = IS_SEQUENCE(_extra_paths_7209);
    // SubProg locate_file pc: 115 op: IF (20)
    if (_3841 == 0)
    {
        _3841 = NOVALUE;
        goto L4; // [115] 145
    }
    else{
        _3841 = NOVALUE;
    }
    // SubProg locate_file pc: 118 op: STARTLINE (58)

    /** filesys.e:2535				search_list = append(search_list, extra_paths & SLASH & "bin" & SLASH)*/
    // SubProg locate_file pc: 120 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _3842;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_7209;
        Concat_N((object_ptr)&_3843, concat_list, 4);
    }
    // SubProg locate_file pc: 127 op: APPEND (35)
    RefDS(_3843);
    Append(&_search_list_7207, _search_list_7207, _3843);
    DeRefDS(_3843);
    _3843 = NOVALUE;
    // SubProg locate_file pc: 131 op: STARTLINE (58)

    /** filesys.e:2536				search_list = append(search_list, extra_paths & SLASH & "docs" & SLASH)*/
    // SubProg locate_file pc: 133 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _3845;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_7209;
        Concat_N((object_ptr)&_3846, concat_list, 4);
    }
    // SubProg locate_file pc: 140 op: APPEND (35)
    RefDS(_3846);
    Append(&_search_list_7207, _search_list_7207, _3846);
    DeRefDS(_3846);
    _3846 = NOVALUE;
    // SubProg locate_file pc: 144 op: NOP1 (159)
L4: // addr: 145 pc: 144 sub: 7204 op: 159
    // SubProg locate_file pc: 145 op: STARTLINE (58)

    /** filesys.e:2539			extra_paths = getenv("EUDIST")*/
    // SubProg locate_file pc: 147 op: GETENV (91)
    DeRef(_extra_paths_7209);
    _extra_paths_7209 = EGetEnv(_3848);
    // SubProg locate_file pc: 150 op: STARTLINE (58)

    /** filesys.e:2540			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 152 op: IS_A_SEQUENCE (68)
    _3850 = IS_SEQUENCE(_extra_paths_7209);
    // SubProg locate_file pc: 155 op: IF (20)
    if (_3850 == 0)
    {
        _3850 = NOVALUE;
        goto L5; // [155] 195
    }
    else{
        _3850 = NOVALUE;
    }
    // SubProg locate_file pc: 158 op: STARTLINE (58)

    /** filesys.e:2541				search_list = append(search_list, extra_paths & SLASH)*/
    // SubProg locate_file pc: 160 op: CONCAT (15)
    if (IS_SEQUENCE(_extra_paths_7209) && IS_ATOM(47)) {
        Append(&_3851, _extra_paths_7209, 47);
    }
    else if (IS_ATOM(_extra_paths_7209) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_3851, _extra_paths_7209, 47);
    }
    // SubProg locate_file pc: 164 op: APPEND (35)
    RefDS(_3851);
    Append(&_search_list_7207, _search_list_7207, _3851);
    DeRefDS(_3851);
    _3851 = NOVALUE;
    // SubProg locate_file pc: 168 op: STARTLINE (58)

    /** filesys.e:2542				search_list = append(search_list, extra_paths & SLASH & "etc" & SLASH)*/
    // SubProg locate_file pc: 170 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _3853;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_7209;
        Concat_N((object_ptr)&_3854, concat_list, 4);
    }
    // SubProg locate_file pc: 177 op: APPEND (35)
    RefDS(_3854);
    Append(&_search_list_7207, _search_list_7207, _3854);
    DeRefDS(_3854);
    _3854 = NOVALUE;
    // SubProg locate_file pc: 181 op: STARTLINE (58)

    /** filesys.e:2543				search_list = append(search_list, extra_paths & SLASH & "data" & SLASH)*/
    // SubProg locate_file pc: 183 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _3856;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_7209;
        Concat_N((object_ptr)&_3857, concat_list, 4);
    }
    // SubProg locate_file pc: 190 op: APPEND (35)
    RefDS(_3857);
    Append(&_search_list_7207, _search_list_7207, _3857);
    DeRefDS(_3857);
    _3857 = NOVALUE;
    // SubProg locate_file pc: 194 op: NOP1 (159)
L5: // addr: 195 pc: 194 sub: 7204 op: 159
    // SubProg locate_file pc: 195 op: STARTLINE (58)

    /** filesys.e:2546			ifdef UNIX then*/
    // SubProg locate_file pc: 197 op: STARTLINE (58)

    /** filesys.e:2548				search_list = append( search_list, "/usr/local/share/euphoria/bin/" )*/
    // SubProg locate_file pc: 199 op: APPEND (35)
    RefDS(_3859);
    Append(&_search_list_7207, _search_list_7207, _3859);
    // SubProg locate_file pc: 203 op: STARTLINE (58)

    /** filesys.e:2549				search_list = append( search_list, "/usr/share/euphoria/bin/" )*/
    // SubProg locate_file pc: 205 op: APPEND (35)
    RefDS(_3861);
    Append(&_search_list_7207, _search_list_7207, _3861);
    // SubProg locate_file pc: 209 op: STARTLINE (58)

    /** filesys.e:2552			search_list &= include_paths(1)*/
    // SubProg locate_file pc: 211 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_3866);
    ((intptr_t*)_2)[1] = _3866;
    RefDS(_3865);
    ((intptr_t*)_2)[2] = _3865;
    RefDS(_3864);
    ((intptr_t*)_2)[3] = _3864;
    RefDS(_3863);
    ((intptr_t*)_2)[4] = _3863;
    _3867 = MAKE_SEQ(_1);
    // SubProg locate_file pc: 218 op: CONCAT (15)
    Concat((object_ptr)&_search_list_7207, _search_list_7207, _3867);
    DeRefDS(_3867);
    _3867 = NOVALUE;
    // SubProg locate_file pc: 222 op: STARTLINE (58)

    /** filesys.e:2555			extra_paths = getenv("USERPATH")*/
    // SubProg locate_file pc: 224 op: GETENV (91)
    DeRef(_extra_paths_7209);
    _extra_paths_7209 = EGetEnv(_3869);
    // SubProg locate_file pc: 227 op: STARTLINE (58)

    /** filesys.e:2556			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 229 op: IS_A_SEQUENCE (68)
    _3871 = IS_SEQUENCE(_extra_paths_7209);
    // SubProg locate_file pc: 232 op: IF (20)
    if (_3871 == 0)
    {
        _3871 = NOVALUE;
        goto L6; // [232] 251
    }
    else{
        _3871 = NOVALUE;
    }
    // SubProg locate_file pc: 235 op: STARTLINE (58)

    /** filesys.e:2557				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    // SubProg locate_file pc: 237 op: PROC (27)
    Ref(_extra_paths_7209);
    _0 = _extra_paths_7209;
    _extra_paths_7209 = _23split(_extra_paths_7209, 58, 0, 0);
    DeRefi(_0);
    // SubProg locate_file pc: 244 op: STARTLINE (58)

    /** filesys.e:2558				search_list &= extra_paths*/
    // SubProg locate_file pc: 246 op: CONCAT (15)
    if (IS_SEQUENCE(_search_list_7207) && IS_ATOM(_extra_paths_7209)) {
        Ref(_extra_paths_7209);
        Append(&_search_list_7207, _search_list_7207, _extra_paths_7209);
    }
    else if (IS_ATOM(_search_list_7207) && IS_SEQUENCE(_extra_paths_7209)) {
    }
    else {
        Concat((object_ptr)&_search_list_7207, _search_list_7207, _extra_paths_7209);
    }
    // SubProg locate_file pc: 250 op: NOP1 (159)
L6: // addr: 251 pc: 250 sub: 7204 op: 159
    // SubProg locate_file pc: 251 op: STARTLINE (58)

    /** filesys.e:2561			extra_paths = getenv("PATH")*/
    // SubProg locate_file pc: 253 op: GETENV (91)
    DeRef(_extra_paths_7209);
    _extra_paths_7209 = EGetEnv(_3874);
    // SubProg locate_file pc: 256 op: STARTLINE (58)

    /** filesys.e:2562			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 258 op: IS_A_SEQUENCE (68)
    _3876 = IS_SEQUENCE(_extra_paths_7209);
    // SubProg locate_file pc: 261 op: IF (20)
    if (_3876 == 0)
    {
        _3876 = NOVALUE;
        goto L7; // [261] 308
    }
    else{
        _3876 = NOVALUE;
    }
    // SubProg locate_file pc: 264 op: STARTLINE (58)

    /** filesys.e:2563				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    // SubProg locate_file pc: 266 op: PROC (27)
    Ref(_extra_paths_7209);
    _0 = _extra_paths_7209;
    _extra_paths_7209 = _23split(_extra_paths_7209, 58, 0, 0);
    DeRefi(_0);
    // SubProg locate_file pc: 273 op: STARTLINE (58)

    /** filesys.e:2564				search_list &= extra_paths*/
    // SubProg locate_file pc: 275 op: CONCAT (15)
    if (IS_SEQUENCE(_search_list_7207) && IS_ATOM(_extra_paths_7209)) {
        Ref(_extra_paths_7209);
        Append(&_search_list_7207, _search_list_7207, _extra_paths_7209);
    }
    else if (IS_ATOM(_search_list_7207) && IS_SEQUENCE(_extra_paths_7209)) {
    }
    else {
        Concat((object_ptr)&_search_list_7207, _search_list_7207, _extra_paths_7209);
    }
    // SubProg locate_file pc: 279 op: NOP1 (159)
    // SubProg locate_file pc: 280 op: ELSE (23)
    goto L7; // [280] 308
    // SubProg locate_file pc: 282 op: NOP1 (159)
L2: // addr: 283 pc: 282 sub: 7204 op: 159
    // SubProg locate_file pc: 283 op: STARTLINE (58)

    /** filesys.e:2567			if integer(search_list[1]) then*/
    // SubProg locate_file pc: 285 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_search_list_7207);
    _3879 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg locate_file pc: 289 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_3879))
    _3880 = 1;
    else if (IS_ATOM_DBL(_3879))
    _3880 = IS_ATOM_INT(DoubleToInt(_3879));
    else
    _3880 = 0;
    _3879 = NOVALUE;
    // SubProg locate_file pc: 292 op: IF (20)
    if (_3880 == 0)
    {
        _3880 = NOVALUE;
        goto L8; // [292] 307
    }
    else{
        _3880 = NOVALUE;
    }
    // SubProg locate_file pc: 295 op: STARTLINE (58)

    /** filesys.e:2568				search_list = stdseq:split(search_list, PATHSEP)*/
    // SubProg locate_file pc: 297 op: PROC (27)
    RefDS(_search_list_7207);
    _0 = _search_list_7207;
    _search_list_7207 = _23split(_search_list_7207, 58, 0, 0);
    DeRefDS(_0);
    // SubProg locate_file pc: 304 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 7204 op: 159
    // SubProg locate_file pc: 307 op: NOP1 (159)
L7: // addr: 308 pc: 307 sub: 7204 op: 159
    // SubProg locate_file pc: 308 op: STARTLINE (58)

    /** filesys.e:2572		if length(subdir) > 0 then*/
    // SubProg locate_file pc: 310 op: LENGTH (42)
    if (IS_SEQUENCE(_subdir_7208)){
            _3882 = SEQ_PTR(_subdir_7208)->length;
    }
    else {
        _3882 = 1;
    }
    // SubProg locate_file pc: 313 op: GREATER_IFW_I (124)
    if (_3882 <= 0)
    goto L9; // [313] 338
    // SubProg locate_file pc: 317 op: STARTLINE (58)

    /** filesys.e:2573			if subdir[$] != SLASH then*/
    // SubProg locate_file pc: 319 op: LENGTH (42)
    if (IS_SEQUENCE(_subdir_7208)){
            _3884 = SEQ_PTR(_subdir_7208)->length;
    }
    else {
        _3884 = 1;
    }
    // SubProg locate_file pc: 322 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_subdir_7208);
    _3885 = (object)*(((s1_ptr)_2)->base + _3884);
    // SubProg locate_file pc: 326 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _3885, 47)){
        _3885 = NOVALUE;
        goto LA; // [326] 337
    }
    _3885 = NOVALUE;
    // SubProg locate_file pc: 330 op: STARTLINE (58)

    /** filesys.e:2574				subdir &= SLASH*/
    // SubProg locate_file pc: 332 op: CONCAT (15)
    Append(&_subdir_7208, _subdir_7208, 47);
    // SubProg locate_file pc: 336 op: NOP1 (159)
LA: // addr: 337 pc: 336 sub: 7204 op: 159
    // SubProg locate_file pc: 337 op: NOP1 (159)
L9: // addr: 338 pc: 337 sub: 7204 op: 159
    // SubProg locate_file pc: 338 op: STARTLINE (58)

    /** filesys.e:2578		for i = 1 to length(search_list) do*/
    // SubProg locate_file pc: 340 op: LENGTH (42)
    if (IS_SEQUENCE(_search_list_7207)){
            _3888 = SEQ_PTR(_search_list_7207)->length;
    }
    else {
        _3888 = 1;
    }
    // SubProg locate_file pc: 343 op: FOR_I (125)
    {
        object _i_7288;
        _i_7288 = 1;
LB: // addr: 350 pc: 343 sub: 7204 op: 125
        if (_i_7288 > _3888){
            goto LC; // [343] 466
        }
        // SubProg locate_file pc: 350 op: STARTLINE (58)

        /** filesys.e:2579			if length(search_list[i]) = 0 then*/
        // SubProg locate_file pc: 352 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_7207);
        _3889 = (object)*(((s1_ptr)_2)->base + _i_7288);
        // SubProg locate_file pc: 356 op: LENGTH (42)
        if (IS_SEQUENCE(_3889)){
                _3890 = SEQ_PTR(_3889)->length;
        }
        else {
            _3890 = 1;
        }
        _3889 = NOVALUE;
        // SubProg locate_file pc: 359 op: EQUALS_IFW_I (121)
        if (_3890 != 0)
        goto LD; // [359] 368
        // SubProg locate_file pc: 363 op: STARTLINE (58)

        /** filesys.e:2580				continue*/
        // SubProg locate_file pc: 365 op: ELSE (23)
        goto LE; // [365] 461
        // SubProg locate_file pc: 367 op: NOP1 (159)
LD: // addr: 368 pc: 367 sub: 7204 op: 159
        // SubProg locate_file pc: 368 op: STARTLINE (58)

        /** filesys.e:2583			if search_list[i][$] != SLASH then*/
        // SubProg locate_file pc: 370 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_7207);
        _3892 = (object)*(((s1_ptr)_2)->base + _i_7288);
        // SubProg locate_file pc: 374 op: LENGTH (42)
        if (IS_SEQUENCE(_3892)){
                _3893 = SEQ_PTR(_3892)->length;
        }
        else {
            _3893 = 1;
        }
        // SubProg locate_file pc: 377 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3892);
        _3894 = (object)*(((s1_ptr)_2)->base + _3893);
        _3892 = NOVALUE;
        // SubProg locate_file pc: 381 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _3894, 47)){
            _3894 = NOVALUE;
            goto LF; // [381] 400
        }
        _3894 = NOVALUE;
        // SubProg locate_file pc: 385 op: STARTLINE (58)

        /** filesys.e:2584				search_list[i] &= SLASH*/
        // SubProg locate_file pc: 387 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_search_list_7207);
        _3896 = (object)*(((s1_ptr)_2)->base + _i_7288);
        // SubProg locate_file pc: 391 op: CONCAT (15)
        if (IS_SEQUENCE(_3896) && IS_ATOM(47)) {
            Append(&_3897, _3896, 47);
        }
        else if (IS_ATOM(_3896) && IS_SEQUENCE(47)) {
        }
        else {
            Concat((object_ptr)&_3897, _3896, 47);
            _3896 = NOVALUE;
        }
        _3896 = NOVALUE;
        // SubProg locate_file pc: 395 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_search_list_7207);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _search_list_7207 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_7288);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _3897;
        if( _1 != _3897 ){
            DeRef(_1);
        }
        _3897 = NOVALUE;
        // SubProg locate_file pc: 399 op: NOP1 (159)
LF: // addr: 400 pc: 399 sub: 7204 op: 159
        // SubProg locate_file pc: 400 op: STARTLINE (58)

        /** filesys.e:2588			if length(subdir) > 0 then*/
        // SubProg locate_file pc: 402 op: LENGTH (42)
        if (IS_SEQUENCE(_subdir_7208)){
                _3898 = SEQ_PTR(_subdir_7208)->length;
        }
        else {
            _3898 = 1;
        }
        // SubProg locate_file pc: 405 op: GREATER_IFW_I (124)
        if (_3898 <= 0)
        goto L10; // [405] 424
        // SubProg locate_file pc: 409 op: STARTLINE (58)

        /** filesys.e:2589				this_path = search_list[i] & subdir & filename*/
        // SubProg locate_file pc: 411 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_7207);
        _3900 = (object)*(((s1_ptr)_2)->base + _i_7288);
        // SubProg locate_file pc: 415 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _filename_7206;
            concat_list[1] = _subdir_7208;
            concat_list[2] = _3900;
            Concat_N((object_ptr)&_this_path_7210, concat_list, 3);
        }
        _3900 = NOVALUE;
        // SubProg locate_file pc: 421 op: ELSE (23)
        goto L11; // [421] 435
        // SubProg locate_file pc: 423 op: NOP1 (159)
L10: // addr: 424 pc: 423 sub: 7204 op: 159
        // SubProg locate_file pc: 424 op: STARTLINE (58)

        /** filesys.e:2591				this_path = search_list[i] & filename*/
        // SubProg locate_file pc: 426 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_7207);
        _3902 = (object)*(((s1_ptr)_2)->base + _i_7288);
        // SubProg locate_file pc: 430 op: CONCAT (15)
        if (IS_SEQUENCE(_3902) && IS_ATOM(_filename_7206)) {
        }
        else if (IS_ATOM(_3902) && IS_SEQUENCE(_filename_7206)) {
            Ref(_3902);
            Prepend(&_this_path_7210, _filename_7206, _3902);
        }
        else {
            Concat((object_ptr)&_this_path_7210, _3902, _filename_7206);
            _3902 = NOVALUE;
        }
        _3902 = NOVALUE;
        // SubProg locate_file pc: 434 op: NOP1 (159)
L11: // addr: 435 pc: 434 sub: 7204 op: 159
        // SubProg locate_file pc: 435 op: STARTLINE (58)

        /** filesys.e:2594			if file_exists(this_path) then*/
        // SubProg locate_file pc: 437 op: PRIVATE_INIT_CHECK (30)
        // SubProg locate_file pc: 439 op: PROC (27)
        RefDS(_this_path_7210);
        _3904 = _20file_exists(_this_path_7210);
        // SubProg locate_file pc: 443 op: IF (20)
        if (_3904 == 0) {
            DeRef(_3904);
            _3904 = NOVALUE;
            goto L12; // [443] 459
        }
        else {
            if (!IS_ATOM_INT(_3904) && DBL_PTR(_3904)->dbl == 0.0){
                DeRef(_3904);
                _3904 = NOVALUE;
                goto L12; // [443] 459
            }
            DeRef(_3904);
            _3904 = NOVALUE;
        }
        DeRef(_3904);
        _3904 = NOVALUE;
        // SubProg locate_file pc: 446 op: STARTLINE (58)

        /** filesys.e:2595				return canonical_path(this_path)*/
        // SubProg locate_file pc: 448 op: PROC (27)
        RefDS(_this_path_7210);
        _3905 = _20canonical_path(_this_path_7210, 0, 0);
        // SubProg locate_file pc: 454 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var filename_7206
        DeRefDS(_filename_7206);

// block var search_list_7207
        DeRefDS(_search_list_7207);

// block var subdir_7208
        DeRefDS(_subdir_7208);

// block var extra_paths_7209
        DeRef(_extra_paths_7209);

// block var this_path_7210
        DeRefDS(_this_path_7210);
        _3889 = NOVALUE;
        return _3905;
        // SubProg locate_file pc: 458 op: NOP1 (159)
L12: // addr: 459 pc: 458 sub: 7204 op: 159
        // SubProg locate_file pc: 459 op: STARTLINE (58)

        /** filesys.e:2598		end for*/
        // SubProg locate_file pc: 461 op: ENDFOR_INT_UP1 (54)
LE: // addr: 461 pc: 461 sub: 7204 op: 54
        _i_7288 = _i_7288 + 1;
        goto LB; // [461] 350
LC: // addr: 466 pc: 461 sub: 7204 op: 54
        ;
    }
    // SubProg locate_file pc: 466 op: STARTLINE (58)

    /** filesys.e:2599		return filename*/
    // SubProg locate_file pc: 468 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var search_list_7207
    DeRefDS(_search_list_7207);

// block var subdir_7208
    DeRefDS(_subdir_7208);

// block var extra_paths_7209
    DeRef(_extra_paths_7209);

// block var this_path_7210
    DeRef(_this_path_7210);
    DeRef(_3905);
    _3905 = NOVALUE;
    _3889 = NOVALUE;
    return _filename_7206;
    // SubProg locate_file pc: 472 op: BADRETURNF (43)
    ;
}


object _20count_files(object _orig_path_7387, object _dir_info_7388, object _inst_7389)
{
    object _pos_7390 = NOVALUE;
    object _ext_7391 = NOVALUE;
    object _fileext_inlined_fileext_at_218_7432 = NOVALUE;
    object _data_inlined_fileext_at_218_7431 = NOVALUE;
    object _path_inlined_fileext_at_215_7430 = NOVALUE;
    object _4011 = NOVALUE; // 7469 4011
    object _4010 = NOVALUE; // 7468 4010
    object _4009 = NOVALUE; // 7467 4009
// skipping _4008  name type: 0
    object _4007 = NOVALUE; // 7465 4007
    object _4006 = NOVALUE; // 7464 4006
    object _4005 = NOVALUE; // 7463 4005
    object _4004 = NOVALUE; // 7462 4004
// skipping _4003  name type: 0
    object _4002 = NOVALUE; // 7460 4002
    object _4001 = NOVALUE; // 7459 4001
// skipping _4000  name type: 0
    object _3999 = NOVALUE; // 7457 3999
    object _3998 = NOVALUE; // 7456 3998
    object _3997 = NOVALUE; // 7455 3997
    object _3996 = NOVALUE; // 7454 3996
    object _3995 = NOVALUE; // 7453 3995
    object _3994 = NOVALUE; // 7452 3994
    object _3993 = NOVALUE; // 7451 3993
// skipping _3992  name type: 0
    object _3991 = NOVALUE; // 7449 3991
    object _3990 = NOVALUE; // 7448 3990
// skipping _3989  name type: 0
    object _3988 = NOVALUE; // 7445 3988
    object _3987 = NOVALUE; // 7444 3987
    object _3986 = NOVALUE; // 7443 3986
    object _3985 = NOVALUE; // 7442 3985
    object _3984 = NOVALUE; // 7441 3984
    object _3983 = NOVALUE; // 7440 3983
    object _3982 = NOVALUE; // 7438 3982
    object _3981 = NOVALUE; // 7437 3981
    object _3980 = NOVALUE; // 7436 3980
    object _3979 = NOVALUE; // 7435 3979
    object _3978 = NOVALUE; // 7428 3978
    object _3977 = NOVALUE; // 7427 3977
    object _3976 = NOVALUE; // 7426 3976
// skipping _3975  name type: 0
    object _3974 = NOVALUE; // 7424 3974
    object _3973 = NOVALUE; // 7423 3973
    object _3972 = NOVALUE; // 7421 3972
    object _3971 = NOVALUE; // 7420 3971
// skipping _3970  name type: 0
    object _3969 = NOVALUE; // 7418 3969
    object _3968 = NOVALUE; // 7417 3968
    object _3967 = NOVALUE; // 7416 3967
    object _3966 = NOVALUE; // 7415 3966
    object _3965 = NOVALUE; // 7413 3965
    object _3964 = NOVALUE; // 7412 3964
    object _3963 = NOVALUE; // 7411 3963
// skipping _3962  name type: 0
    object _3961 = NOVALUE; // 7409 3961
    object _3960 = NOVALUE; // 7408 3960
    object _3959 = NOVALUE; // 7407 3959
    object _3958 = NOVALUE; // 7406 3958
    object _3957 = NOVALUE; // 7404 3957
    object _3956 = NOVALUE; // 7403 3956
// skipping _3954  name type: 0
    object _3953 = NOVALUE; // 7399 3953
    object _3952 = NOVALUE; // 7397 3952
    object _3951 = NOVALUE; // 7396 3951
    object _3950 = NOVALUE; // 7394 3950
    object _3949 = NOVALUE; // 7393 3949
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg count_files pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 7 op: STARTLINE (58)

    /** filesys.e:2761		integer pos = 0*/
    // SubProg count_files pc: 9 op: ASSIGN_I (113)
    _pos_7390 = 0;
    // SubProg count_files pc: 12 op: STARTLINE (58)

    /** filesys.e:2764		orig_path = orig_path*/
    // SubProg count_files pc: 14 op: ASSIGN (18)
    RefDS(_orig_path_7387);
    DeRefDS(_orig_path_7387);
    _orig_path_7387 = _orig_path_7387;
    // SubProg count_files pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 19 op: STARTLINE (58)

    /** filesys.e:2765		if equal(dir_info[D_NAME], ".") then*/
    // SubProg count_files pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3949 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 25 op: EQUAL (153)
    if (_3949 == _3205)
    _3950 = 1;
    else if (IS_ATOM_INT(_3949) && IS_ATOM_INT(_3205))
    _3950 = 0;
    else
    _3950 = (compare(_3949, _3205) == 0);
    _3949 = NOVALUE;
    // SubProg count_files pc: 29 op: IF (20)
    if (_3950 == 0)
    {
        _3950 = NOVALUE;
        goto L1; // [29] 39
    }
    else{
        _3950 = NOVALUE;
    }
    // SubProg count_files pc: 32 op: STARTLINE (58)

    /** filesys.e:2766			return 0*/
    // SubProg count_files pc: 34 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_7387
    DeRefDS(_orig_path_7387);

// block var dir_info_7388
    DeRefDS(_dir_info_7388);

// block var inst_7389
    DeRefDS(_inst_7389);

// block var pos_7390

// block var ext_7391
    DeRef(_ext_7391);
    return 0;
    // SubProg count_files pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 7385 op: 159
    // SubProg count_files pc: 39 op: STARTLINE (58)

    /** filesys.e:2768		if equal(dir_info[D_NAME], "..") then*/
    // SubProg count_files pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3951 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 45 op: EQUAL (153)
    if (_3951 == _3272)
    _3952 = 1;
    else if (IS_ATOM_INT(_3951) && IS_ATOM_INT(_3272))
    _3952 = 0;
    else
    _3952 = (compare(_3951, _3272) == 0);
    _3951 = NOVALUE;
    // SubProg count_files pc: 49 op: IF (20)
    if (_3952 == 0)
    {
        _3952 = NOVALUE;
        goto L2; // [49] 59
    }
    else{
        _3952 = NOVALUE;
    }
    // SubProg count_files pc: 52 op: STARTLINE (58)

    /** filesys.e:2769			return 0*/
    // SubProg count_files pc: 54 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_7387
    DeRefDS(_orig_path_7387);

// block var dir_info_7388
    DeRefDS(_dir_info_7388);

// block var inst_7389
    DeRefDS(_inst_7389);

// block var pos_7390

// block var ext_7391
    DeRef(_ext_7391);
    return 0;
    // SubProg count_files pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 7385 op: 159
    // SubProg count_files pc: 59 op: STARTLINE (58)

    /** filesys.e:2773		if inst[1] = 0 then -- count all is false*/
    // SubProg count_files pc: 61 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3953 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 65 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _3953, 0)){
        _3953 = NOVALUE;
        goto L3; // [65] 112
    }
    _3953 = NOVALUE;
    // SubProg count_files pc: 69 op: STARTLINE (58)

    /** filesys.e:2774			if find('h', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3956 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 75 op: FIND_FROM (176)
    _3957 = find_from(104, _3956, 1);
    _3956 = NOVALUE;
    // SubProg count_files pc: 80 op: IF (20)
    if (_3957 == 0)
    {
        _3957 = NOVALUE;
        goto L4; // [80] 90
    }
    else{
        _3957 = NOVALUE;
    }
    // SubProg count_files pc: 83 op: STARTLINE (58)

    /** filesys.e:2775				return 0*/
    // SubProg count_files pc: 85 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_7387
    DeRefDS(_orig_path_7387);

// block var dir_info_7388
    DeRefDS(_dir_info_7388);

// block var inst_7389
    DeRefDS(_inst_7389);

// block var pos_7390

// block var ext_7391
    DeRef(_ext_7391);
    return 0;
    // SubProg count_files pc: 89 op: NOP1 (159)
L4: // addr: 90 pc: 89 sub: 7385 op: 159
    // SubProg count_files pc: 90 op: STARTLINE (58)

    /** filesys.e:2778			if find('s', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 92 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3958 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 96 op: FIND_FROM (176)
    _3959 = find_from(115, _3958, 1);
    _3958 = NOVALUE;
    // SubProg count_files pc: 101 op: IF (20)
    if (_3959 == 0)
    {
        _3959 = NOVALUE;
        goto L5; // [101] 111
    }
    else{
        _3959 = NOVALUE;
    }
    // SubProg count_files pc: 104 op: STARTLINE (58)

    /** filesys.e:2779				return 0*/
    // SubProg count_files pc: 106 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_7387
    DeRefDS(_orig_path_7387);

// block var dir_info_7388
    DeRefDS(_dir_info_7388);

// block var inst_7389
    DeRefDS(_inst_7389);

// block var pos_7390

// block var ext_7391
    DeRef(_ext_7391);
    return 0;
    // SubProg count_files pc: 110 op: NOP1 (159)
L5: // addr: 111 pc: 110 sub: 7385 op: 159
    // SubProg count_files pc: 111 op: NOP1 (159)
L3: // addr: 112 pc: 111 sub: 7385 op: 159
    // SubProg count_files pc: 112 op: STARTLINE (58)

    /** filesys.e:2783		file_counters[inst[2]][COUNT_SIZE] += dir_info[D_SIZE]*/
    // SubProg count_files pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3960 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 120 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _20file_counters_7384 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_3960))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_3960)->dbl));
    else
    _3 = (object)(_3960 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 125 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3963 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg count_files pc: 129 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _3964 = (object)*(((s1_ptr)_2)->base + 3);
    _3961 = NOVALUE;
    // SubProg count_files pc: 133 op: PLUS (11)
    if (IS_ATOM_INT(_3964) && IS_ATOM_INT(_3963)) {
        _3965 = _3964 + _3963;
        if ((object)((uintptr_t)_3965 + (uintptr_t)HIGH_BITS) >= 0){
            _3965 = NewDouble((eudouble)_3965);
        }
    }
    else {
        _3965 = binary_op(PLUS, _3964, _3963);
    }
    _3964 = NOVALUE;
    _3963 = NOVALUE;
    // SubProg count_files pc: 137 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3965;
    if( _1 != _3965 ){
        DeRef(_1);
    }
    _3965 = NOVALUE;
    _3961 = NOVALUE;
    // SubProg count_files pc: 141 op: STARTLINE (58)

    /** filesys.e:2784		if find('d', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 143 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3966 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 147 op: FIND_FROM (176)
    _3967 = find_from(100, _3966, 1);
    _3966 = NOVALUE;
    // SubProg count_files pc: 152 op: IF (20)
    if (_3967 == 0)
    {
        _3967 = NOVALUE;
        goto L6; // [152] 183
    }
    else{
        _3967 = NOVALUE;
    }
    // SubProg count_files pc: 155 op: STARTLINE (58)

    /** filesys.e:2785			file_counters[inst[2]][COUNT_DIRS] += 1*/
    // SubProg count_files pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 159 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3968 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 163 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _20file_counters_7384 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_3968))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_3968)->dbl));
    else
    _3 = (object)(_3968 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 168 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _3971 = (object)*(((s1_ptr)_2)->base + 1);
    _3969 = NOVALUE;
    // SubProg count_files pc: 172 op: PLUS1 (93)
    if (IS_ATOM_INT(_3971)) {
        _3972 = _3971 + 1;
        if (_3972 > MAXINT){
            _3972 = NewDouble((eudouble)_3972);
        }
    }
    else
    _3972 = binary_op(PLUS, 1, _3971);
    _3971 = NOVALUE;
    // SubProg count_files pc: 176 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3972;
    if( _1 != _3972 ){
        DeRef(_1);
    }
    _3972 = NOVALUE;
    _3969 = NOVALUE;
    // SubProg count_files pc: 180 op: ELSE (23)
    goto L7; // [180] 460
    // SubProg count_files pc: 182 op: NOP1 (159)
L6: // addr: 183 pc: 182 sub: 7385 op: 159
    // SubProg count_files pc: 183 op: STARTLINE (58)

    /** filesys.e:2787			file_counters[inst[2]][COUNT_FILES] += 1*/
    // SubProg count_files pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 187 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3973 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 191 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _20file_counters_7384 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_3973))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_3973)->dbl));
    else
    _3 = (object)(_3973 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 196 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _3976 = (object)*(((s1_ptr)_2)->base + 2);
    _3974 = NOVALUE;
    // SubProg count_files pc: 200 op: PLUS1 (93)
    if (IS_ATOM_INT(_3976)) {
        _3977 = _3976 + 1;
        if (_3977 > MAXINT){
            _3977 = NewDouble((eudouble)_3977);
        }
    }
    else
    _3977 = binary_op(PLUS, 1, _3976);
    _3976 = NOVALUE;
    // SubProg count_files pc: 204 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3977;
    if( _1 != _3977 ){
        DeRef(_1);
    }
    _3977 = NOVALUE;
    _3974 = NOVALUE;
    // SubProg count_files pc: 208 op: STARTLINE (58)

    /** filesys.e:2788			ifdef not UNIX then*/
    // SubProg count_files pc: 210 op: STARTLINE (58)

    /** filesys.e:2791				ext = fileext(dir_info[D_NAME])*/
    // SubProg count_files pc: 212 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _3978 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 216 op: ASSIGN (18)
    Ref(_3978);
    DeRef(_path_inlined_fileext_at_215_7430);
    _path_inlined_fileext_at_215_7430 = _3978;
    _3978 = NOVALUE;
    // SubProg count_files pc: 219 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 221 op: STARTLINE (58)

    /** filesys.e:1403		data = pathinfo(path)*/
    // SubProg count_files pc: 223 op: PROC (27)
    Ref(_path_inlined_fileext_at_215_7430);
    _0 = _data_inlined_fileext_at_218_7431;
    _data_inlined_fileext_at_218_7431 = _20pathinfo(_path_inlined_fileext_at_215_7430, 0);
    DeRef(_0);
    // SubProg count_files pc: 228 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 230 op: STARTLINE (58)

    /** filesys.e:1404		return data[4]*/
    // SubProg count_files pc: 232 op: RHS_SUBS (25)
    DeRef(_ext_7391);
    _2 = (object)SEQ_PTR(_data_inlined_fileext_at_218_7431);
    _ext_7391 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_ext_7391);
    // SubProg count_files pc: 236 op: NOP1 (159)
    // SubProg count_files pc: 237 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-fileext from count_files @ 215

// block var path_inlined_fileext_at_215_7430
    DeRef(_path_inlined_fileext_at_215_7430);
    _path_inlined_fileext_at_215_7430 = NOVALUE;

// block var data_inlined_fileext_at_218_7431
    DeRef(_data_inlined_fileext_at_218_7431);
    _data_inlined_fileext_at_218_7431 = NOVALUE;
    // SubProg count_files pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 241 op: STARTLINE (58)

    /** filesys.e:2794			pos = 0*/
    // SubProg count_files pc: 243 op: ASSIGN_I (113)
    _pos_7390 = 0;
    // SubProg count_files pc: 246 op: STARTLINE (58)

    /** filesys.e:2795			for i = 1 to length(file_counters[inst[2]][COUNT_TYPES]) do*/
    // SubProg count_files pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 250 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3979 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 254 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!IS_ATOM_INT(_3979)){
        _3980 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_3979)->dbl));
    }
    else{
        _3980 = (object)*(((s1_ptr)_2)->base + _3979);
    }
    // SubProg count_files pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3980);
    _3981 = (object)*(((s1_ptr)_2)->base + 4);
    _3980 = NOVALUE;
    // SubProg count_files pc: 262 op: LENGTH (42)
    if (IS_SEQUENCE(_3981)){
            _3982 = SEQ_PTR(_3981)->length;
    }
    else {
        _3982 = 1;
    }
    _3981 = NOVALUE;
    // SubProg count_files pc: 265 op: FOR_I (125)
    {
        object _i_7434;
        _i_7434 = 1;
L8: // addr: 272 pc: 265 sub: 7385 op: 125
        if (_i_7434 > _3982){
            goto L9; // [265] 322
        }
        // SubProg count_files pc: 272 op: STARTLINE (58)

        /** filesys.e:2796				if equal(file_counters[inst[2]][COUNT_TYPES][i][EXT_NAME], ext) then*/
        // SubProg count_files pc: 274 op: GLOBAL_INIT_CHECK (109)
        // SubProg count_files pc: 276 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_inst_7389);
        _3983 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg count_files pc: 280 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_20file_counters_7384);
        if (!IS_ATOM_INT(_3983)){
            _3984 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_3983)->dbl));
        }
        else{
            _3984 = (object)*(((s1_ptr)_2)->base + _3983);
        }
        // SubProg count_files pc: 284 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3984);
        _3985 = (object)*(((s1_ptr)_2)->base + 4);
        _3984 = NOVALUE;
        // SubProg count_files pc: 288 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3985);
        _3986 = (object)*(((s1_ptr)_2)->base + _i_7434);
        _3985 = NOVALUE;
        // SubProg count_files pc: 292 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3986);
        _3987 = (object)*(((s1_ptr)_2)->base + 1);
        _3986 = NOVALUE;
        // SubProg count_files pc: 296 op: PRIVATE_INIT_CHECK (30)
        // SubProg count_files pc: 298 op: EQUAL (153)
        if (_3987 == _ext_7391)
        _3988 = 1;
        else if (IS_ATOM_INT(_3987) && IS_ATOM_INT(_ext_7391))
        _3988 = 0;
        else
        _3988 = (compare(_3987, _ext_7391) == 0);
        _3987 = NOVALUE;
        // SubProg count_files pc: 302 op: IF (20)
        if (_3988 == 0)
        {
            _3988 = NOVALUE;
            goto LA; // [302] 315
        }
        else{
            _3988 = NOVALUE;
        }
        // SubProg count_files pc: 305 op: STARTLINE (58)

        /** filesys.e:2797					pos = i*/
        // SubProg count_files pc: 307 op: ASSIGN_I (113)
        _pos_7390 = _i_7434;
        // SubProg count_files pc: 310 op: STARTLINE (58)

        /** filesys.e:2798					exit*/
        // SubProg count_files pc: 312 op: EXIT (61)
        goto L9; // [312] 322
        // SubProg count_files pc: 314 op: NOP1 (159)
LA: // addr: 315 pc: 314 sub: 7385 op: 159
        // SubProg count_files pc: 315 op: STARTLINE (58)

        /** filesys.e:2800			end for*/
        // SubProg count_files pc: 317 op: ENDFOR_INT_UP1 (54)
        _i_7434 = _i_7434 + 1;
        goto L8; // [317] 272
L9: // addr: 322 pc: 317 sub: 7385 op: 54
        ;
    }
    // SubProg count_files pc: 322 op: STARTLINE (58)

    /** filesys.e:2802			if pos = 0 then*/
    // SubProg count_files pc: 324 op: EQUALS_IFW_I (121)
    if (_pos_7390 != 0)
    goto LB; // [324] 385
    // SubProg count_files pc: 328 op: STARTLINE (58)

    /** filesys.e:2803				file_counters[inst[2]][COUNT_TYPES] &= {{ext, 0, 0}}*/
    // SubProg count_files pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 332 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3990 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 336 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _20file_counters_7384 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_3990))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_3990)->dbl));
    else
    _3 = (object)(_3990 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 341 op: PRIVATE_INIT_CHECK (30)
    // SubProg count_files pc: 343 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_ext_7391);
    ((intptr_t*)_2)[1] = _ext_7391;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _3993 = MAKE_SEQ(_1);
    // SubProg count_files pc: 349 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _3993;
    _3994 = MAKE_SEQ(_1);
    _3993 = NOVALUE;
    // SubProg count_files pc: 353 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _3995 = (object)*(((s1_ptr)_2)->base + 4);
    _3991 = NOVALUE;
    // SubProg count_files pc: 357 op: CONCAT (15)
    if (IS_SEQUENCE(_3995) && IS_ATOM(_3994)) {
    }
    else if (IS_ATOM(_3995) && IS_SEQUENCE(_3994)) {
        Ref(_3995);
        Prepend(&_3996, _3994, _3995);
    }
    else {
        Concat((object_ptr)&_3996, _3995, _3994);
        _3995 = NOVALUE;
    }
    _3995 = NOVALUE;
    DeRefDS(_3994);
    _3994 = NOVALUE;
    // SubProg count_files pc: 361 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3996;
    if( _1 != _3996 ){
        DeRef(_1);
    }
    _3996 = NOVALUE;
    _3991 = NOVALUE;
    // SubProg count_files pc: 365 op: STARTLINE (58)

    /** filesys.e:2804				pos = length(file_counters[inst[2]][COUNT_TYPES])*/
    // SubProg count_files pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 369 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _3997 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 373 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!IS_ATOM_INT(_3997)){
        _3998 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_3997)->dbl));
    }
    else{
        _3998 = (object)*(((s1_ptr)_2)->base + _3997);
    }
    // SubProg count_files pc: 377 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_3998);
    _3999 = (object)*(((s1_ptr)_2)->base + 4);
    _3998 = NOVALUE;
    // SubProg count_files pc: 381 op: LENGTH (42)
    if (IS_SEQUENCE(_3999)){
            _pos_7390 = SEQ_PTR(_3999)->length;
    }
    else {
        _pos_7390 = 1;
    }
    _3999 = NOVALUE;
    // SubProg count_files pc: 384 op: NOP1 (159)
LB: // addr: 385 pc: 384 sub: 7385 op: 159
    // SubProg count_files pc: 385 op: STARTLINE (58)

    /** filesys.e:2807			file_counters[inst[2]][COUNT_TYPES][pos][EXT_COUNT] += 1*/
    // SubProg count_files pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 389 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _4001 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 393 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _20file_counters_7384 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4001))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4001)->dbl));
    else
    _3 = (object)(_4001 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 398 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _4002 = NOVALUE;
    // SubProg count_files pc: 403 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_7390 + ((s1_ptr)_2)->base);
    _4002 = NOVALUE;
    // SubProg count_files pc: 408 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4004 = (object)*(((s1_ptr)_2)->base + 2);
    _4002 = NOVALUE;
    // SubProg count_files pc: 412 op: PLUS1 (93)
    if (IS_ATOM_INT(_4004)) {
        _4005 = _4004 + 1;
        if (_4005 > MAXINT){
            _4005 = NewDouble((eudouble)_4005);
        }
    }
    else
    _4005 = binary_op(PLUS, 1, _4004);
    _4004 = NOVALUE;
    // SubProg count_files pc: 416 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4005;
    if( _1 != _4005 ){
        DeRef(_1);
    }
    _4005 = NOVALUE;
    _4002 = NOVALUE;
    // SubProg count_files pc: 420 op: STARTLINE (58)

    /** filesys.e:2808			file_counters[inst[2]][COUNT_TYPES][pos][EXT_SIZE] += dir_info[D_SIZE]*/
    // SubProg count_files pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 424 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_7389);
    _4006 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 428 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_20file_counters_7384);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _20file_counters_7384 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4006))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4006)->dbl));
    else
    _3 = (object)(_4006 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 433 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _4007 = NOVALUE;
    // SubProg count_files pc: 438 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_7390 + ((s1_ptr)_2)->base);
    _4007 = NOVALUE;
    // SubProg count_files pc: 443 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_7388);
    _4009 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg count_files pc: 447 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4010 = (object)*(((s1_ptr)_2)->base + 3);
    _4007 = NOVALUE;
    // SubProg count_files pc: 451 op: PLUS (11)
    if (IS_ATOM_INT(_4010) && IS_ATOM_INT(_4009)) {
        _4011 = _4010 + _4009;
        if ((object)((uintptr_t)_4011 + (uintptr_t)HIGH_BITS) >= 0){
            _4011 = NewDouble((eudouble)_4011);
        }
    }
    else {
        _4011 = binary_op(PLUS, _4010, _4009);
    }
    _4010 = NOVALUE;
    _4009 = NOVALUE;
    // SubProg count_files pc: 455 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4011;
    if( _1 != _4011 ){
        DeRef(_1);
    }
    _4011 = NOVALUE;
    _4007 = NOVALUE;
    // SubProg count_files pc: 459 op: NOP1 (159)
L7: // addr: 460 pc: 459 sub: 7385 op: 159
    // SubProg count_files pc: 460 op: STARTLINE (58)

    /** filesys.e:2811		return 0*/
    // SubProg count_files pc: 462 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_7387
    DeRefDS(_orig_path_7387);

// block var dir_info_7388
    DeRefDS(_dir_info_7388);

// block var inst_7389
    DeRefDS(_inst_7389);

// block var pos_7390

// block var ext_7391
    DeRef(_ext_7391);
    _3999 = NOVALUE;
    _3960 = NOVALUE;
    _4001 = NOVALUE;
    _3968 = NOVALUE;
    _4006 = NOVALUE;
    _3983 = NOVALUE;
    _3973 = NOVALUE;
    _3990 = NOVALUE;
    _3981 = NOVALUE;
    _3997 = NOVALUE;
    _3979 = NOVALUE;
    return 0;
    // SubProg count_files pc: 466 op: BADRETURNF (43)
    ;
}


object _20temp_file(object _temp_location_7492, object _temp_prefix_7493, object _temp_extn_7494, object _reserve_temp_7496)
{
    object _randname_7497 = NOVALUE;
    object _envtmp_7501 = NOVALUE;
    object _tdir_7520 = NOVALUE;
    object _6353 = NOVALUE; // 11307 6353
// skipping _4064  name type: 0
    object _4063 = NOVALUE; // 7552 4063
// skipping _4062  name type: 0
    object _4061 = NOVALUE; // 7549 4061
// skipping _4060  name type: 0
    object _4059 = NOVALUE; // 7545 4059
// skipping _4058  name type: 0
    object _4057 = NOVALUE; // 7542 4057
    object _4056 = NOVALUE; // 7541 4056
    object _4055 = NOVALUE; // 7540 4055
// skipping _4052  name type: 0
    object _4051 = NOVALUE; // 7535 4051
    object _4050 = NOVALUE; // 7534 4050
    object _4049 = NOVALUE; // 7533 4049
    object _4048 = NOVALUE; // 7532 4048
// skipping _4047  name type: 0
// skipping _4046  name type: 0
    object _4045 = NOVALUE; // 7528 4045
    object _4044 = NOVALUE; // 7527 4044
    object _4043 = NOVALUE; // 7523 4043
// skipping _4042  name type: 0
// skipping _4041  name type: 0
    object _4038 = NOVALUE; // 7513 4038
    object _4036 = NOVALUE; // 7510 4036
// skipping _4034  name type: 0
    object _4032 = NOVALUE; // 7505 4032
// skipping _4031  name type: 0
// skipping _4029  name type: 0
    object _4028 = NOVALUE; // 7499 4028
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg temp_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg temp_file pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg temp_file pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg temp_file pc: 7 op: INTEGER_CHECK (96)
    // SubProg temp_file pc: 9 op: STARTLINE (58)

    /** filesys.e:2903		if length(temp_location) = 0 then*/
    // SubProg temp_file pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_temp_location_7492)){
            _4028 = SEQ_PTR(_temp_location_7492)->length;
    }
    else {
        _4028 = 1;
    }
    // SubProg temp_file pc: 14 op: EQUALS_IFW_I (121)
    if (_4028 != 0)
    goto L1; // [14] 67
    // SubProg temp_file pc: 18 op: STARTLINE (58)

    /** filesys.e:2904			object envtmp*/
    // SubProg temp_file pc: 20 op: STARTLINE (58)

    /** filesys.e:2905			envtmp = getenv("TEMP")*/
    // SubProg temp_file pc: 22 op: GETENV (91)
    DeRefi(_envtmp_7501);
    _envtmp_7501 = EGetEnv(_4030);
    // SubProg temp_file pc: 25 op: STARTLINE (58)

    /** filesys.e:2906			if atom(envtmp) then*/
    // SubProg temp_file pc: 27 op: IS_AN_ATOM (67)
    _4032 = IS_ATOM(_envtmp_7501);
    // SubProg temp_file pc: 30 op: IF (20)
    if (_4032 == 0)
    {
        _4032 = NOVALUE;
        goto L2; // [30] 39
    }
    else{
        _4032 = NOVALUE;
    }
    // SubProg temp_file pc: 33 op: STARTLINE (58)

    /** filesys.e:2907				envtmp = getenv("TMP")*/
    // SubProg temp_file pc: 35 op: GETENV (91)
    DeRefi(_envtmp_7501);
    _envtmp_7501 = EGetEnv(_4033);
    // SubProg temp_file pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 7490 op: 159
    // SubProg temp_file pc: 39 op: STARTLINE (58)

    /** filesys.e:2909			ifdef WINDOWS then			*/
    // SubProg temp_file pc: 41 op: STARTLINE (58)

    /** filesys.e:2914				if atom(envtmp) then*/
    // SubProg temp_file pc: 43 op: IS_AN_ATOM (67)
    _4036 = IS_ATOM(_envtmp_7501);
    // SubProg temp_file pc: 46 op: IF (20)
    if (_4036 == 0)
    {
        _4036 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        _4036 = NOVALUE;
    }
    // SubProg temp_file pc: 49 op: STARTLINE (58)

    /** filesys.e:2915					envtmp = "/tmp/"*/
    // SubProg temp_file pc: 51 op: ASSIGN (18)
    RefDS(_4037);
    DeRefi(_envtmp_7501);
    _envtmp_7501 = _4037;
    // SubProg temp_file pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 7490 op: 159
    // SubProg temp_file pc: 55 op: STARTLINE (58)

    /** filesys.e:2918			temp_location = envtmp*/
    // SubProg temp_file pc: 57 op: ASSIGN (18)
    Ref(_envtmp_7501);
    DeRefDS(_temp_location_7492);
    _temp_location_7492 = _envtmp_7501;
    // SubProg temp_file pc: 60 op: SEQUENCE_CHECK (97)
    // SubProg temp_file pc: 62 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var envtmp_7501
    DeRefi(_envtmp_7501);
    _envtmp_7501 = NOVALUE;
    // SubProg temp_file pc: 64 op: ELSE (23)
    goto L4; // [64] 161
    // SubProg temp_file pc: 66 op: NOP1 (159)
L1: // addr: 67 pc: 66 sub: 7490 op: 159
    // SubProg temp_file pc: 67 op: STARTLINE (58)

    /** filesys.e:2920			switch file_type(temp_location) do*/
    // SubProg temp_file pc: 69 op: PROC (27)
    RefDS(_temp_location_7492);
    _4038 = _20file_type(_temp_location_7492);
    // SubProg temp_file pc: 73 op: SWITCH_I (193)
    if (IS_SEQUENCE(_4038) ){
        goto L5; // [73] 150
    }
    if(!IS_ATOM_INT(_4038)){
        if( (DBL_PTR(_4038)->dbl != (eudouble) ((object) DBL_PTR(_4038)->dbl) ) ){
            goto L5; // [73] 150
        }
        _0 = (object) DBL_PTR(_4038)->dbl;
    }
    else {
        _0 = _4038;
    };
    DeRef(_4038);
    _4038 = NOVALUE;
    switch ( _0 ){ 
        // SubProg temp_file pc: 78 op: STARTLINE (58)

        /** filesys.e:2921				case FILETYPE_FILE then*/
        // SubProg temp_file pc: 80 op: CASE (186)
        case 1:
        // SubProg temp_file pc: 82 op: STARTLINE (58)

        /** filesys.e:2922					temp_location = dirname(temp_location, 1)*/
        // SubProg temp_file pc: 84 op: PROC (27)
        RefDS(_temp_location_7492);
        _0 = _temp_location_7492;
        _temp_location_7492 = _20dirname(_temp_location_7492, 1);
        DeRefDS(_0);
        // SubProg temp_file pc: 89 op: SEQUENCE_CHECK (97)
        // SubProg temp_file pc: 91 op: ELSE (23)
        goto L6; // [91] 160
        // SubProg temp_file pc: 93 op: STARTLINE (58)

        /** filesys.e:2924				case FILETYPE_DIRECTORY then*/
        // SubProg temp_file pc: 95 op: CASE (186)
        case 2:
        // SubProg temp_file pc: 97 op: STARTLINE (58)

        /** filesys.e:2926					temp_location = temp_location*/
        // SubProg temp_file pc: 99 op: ASSIGN (18)
        RefDS(_temp_location_7492);
        DeRefDS(_temp_location_7492);
        _temp_location_7492 = _temp_location_7492;
        // SubProg temp_file pc: 102 op: SEQUENCE_CHECK (97)
        // SubProg temp_file pc: 104 op: ELSE (23)
        goto L6; // [104] 160
        // SubProg temp_file pc: 106 op: STARTLINE (58)

        /** filesys.e:2928				case FILETYPE_NOT_FOUND then*/
        // SubProg temp_file pc: 108 op: CASE (186)
        case 0:
        // SubProg temp_file pc: 110 op: STARTLINE (58)

        /** filesys.e:2929					object tdir = dirname(temp_location, 1)*/
        // SubProg temp_file pc: 112 op: PROC (27)
        RefDS(_temp_location_7492);
        _0 = _tdir_7520;
        _tdir_7520 = _20dirname(_temp_location_7492, 1);
        DeRef(_0);
        // SubProg temp_file pc: 117 op: STARTLINE (58)

        /** filesys.e:2930					if file_exists(tdir) then*/
        // SubProg temp_file pc: 119 op: PROC (27)
        Ref(_tdir_7520);
        _4043 = _20file_exists(_tdir_7520);
        // SubProg temp_file pc: 123 op: IF (20)
        if (_4043 == 0) {
            DeRef(_4043);
            _4043 = NOVALUE;
            goto L7; // [123] 136
        }
        else {
            if (!IS_ATOM_INT(_4043) && DBL_PTR(_4043)->dbl == 0.0){
                DeRef(_4043);
                _4043 = NOVALUE;
                goto L7; // [123] 136
            }
            DeRef(_4043);
            _4043 = NOVALUE;
        }
        DeRef(_4043);
        _4043 = NOVALUE;
        // SubProg temp_file pc: 126 op: STARTLINE (58)

        /** filesys.e:2931						temp_location = tdir*/
        // SubProg temp_file pc: 128 op: ASSIGN (18)
        Ref(_tdir_7520);
        DeRefDS(_temp_location_7492);
        _temp_location_7492 = _tdir_7520;
        // SubProg temp_file pc: 131 op: SEQUENCE_CHECK (97)
        // SubProg temp_file pc: 133 op: ELSE (23)
        goto L8; // [133] 144
        // SubProg temp_file pc: 135 op: NOP1 (159)
L7: // addr: 136 pc: 135 sub: 7490 op: 159
        // SubProg temp_file pc: 136 op: STARTLINE (58)

        /** filesys.e:2933						temp_location = "."*/
        // SubProg temp_file pc: 138 op: ASSIGN (18)
        RefDS(_3205);
        DeRefDS(_temp_location_7492);
        _temp_location_7492 = _3205;
        // SubProg temp_file pc: 141 op: SEQUENCE_CHECK (97)
        // SubProg temp_file pc: 143 op: NOP1 (159)
L8: // addr: 144 pc: 143 sub: 7490 op: 159
        // SubProg temp_file pc: 144 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var tdir_7520
        DeRef(_tdir_7520);
        _tdir_7520 = NOVALUE;
        // SubProg temp_file pc: 146 op: ELSE (23)
        goto L6; // [146] 160
        // SubProg temp_file pc: 148 op: STARTLINE (58)

        /** filesys.e:2936				case else*/
        // SubProg temp_file pc: 150 op: CASE (186)
        default:
L5: // addr: 150 pc: 150 sub: 7490 op: 186
        // SubProg temp_file pc: 152 op: STARTLINE (58)

        /** filesys.e:2937					temp_location = "."*/
        // SubProg temp_file pc: 154 op: ASSIGN (18)
        RefDS(_3205);
        DeRefDS(_temp_location_7492);
        _temp_location_7492 = _3205;
        // SubProg temp_file pc: 157 op: SEQUENCE_CHECK (97)
        // SubProg temp_file pc: 159 op: NOPSWITCH (187)
    ;}L6: // addr: 160 pc: 159 sub: 7490 op: 187
    // SubProg temp_file pc: 160 op: NOP1 (159)
L4: // addr: 161 pc: 160 sub: 7490 op: 159
    // SubProg temp_file pc: 161 op: STARTLINE (58)

    /** filesys.e:2942		if temp_location[$] != SLASH then*/
    // SubProg temp_file pc: 163 op: LENGTH (42)
    if (IS_SEQUENCE(_temp_location_7492)){
            _4044 = SEQ_PTR(_temp_location_7492)->length;
    }
    else {
        _4044 = 1;
    }
    // SubProg temp_file pc: 166 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_temp_location_7492);
    _4045 = (object)*(((s1_ptr)_2)->base + _4044);
    // SubProg temp_file pc: 170 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4045, 47)){
        _4045 = NOVALUE;
        goto L9; // [170] 181
    }
    _4045 = NOVALUE;
    // SubProg temp_file pc: 174 op: STARTLINE (58)

    /** filesys.e:2943			temp_location &= SLASH*/
    // SubProg temp_file pc: 176 op: CONCAT (15)
    Append(&_temp_location_7492, _temp_location_7492, 47);
    // SubProg temp_file pc: 180 op: NOP1 (159)
L9: // addr: 181 pc: 180 sub: 7490 op: 159
    // SubProg temp_file pc: 181 op: STARTLINE (58)

    /** filesys.e:2946		if length(temp_extn) and temp_extn[1] != '.' then*/
    // SubProg temp_file pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_temp_extn_7494)){
            _4048 = SEQ_PTR(_temp_extn_7494)->length;
    }
    else {
        _4048 = 1;
    }
    // SubProg temp_file pc: 186 op: SC1_AND_IF (146)
    if (_4048 == 0) {
        goto LA; // [186] 209
    }
    // SubProg temp_file pc: 190 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_temp_extn_7494);
    _4050 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg temp_file pc: 194 op: NOTEQ (4)
    if (IS_ATOM_INT(_4050)) {
        _4051 = (_4050 != 46);
    }
    else {
        _4051 = binary_op(NOTEQ, _4050, 46);
    }
    _4050 = NOVALUE;
    // SubProg temp_file pc: 198 op: NOP1 (159)
    // SubProg temp_file pc: 199 op: IF (20)
    if (_4051 == 0) {
        DeRef(_4051);
        _4051 = NOVALUE;
        goto LA; // [199] 209
    }
    else {
        if (!IS_ATOM_INT(_4051) && DBL_PTR(_4051)->dbl == 0.0){
            DeRef(_4051);
            _4051 = NOVALUE;
            goto LA; // [199] 209
        }
        DeRef(_4051);
        _4051 = NOVALUE;
    }
    DeRef(_4051);
    _4051 = NOVALUE;
    // SubProg temp_file pc: 202 op: STARTLINE (58)

    /** filesys.e:2947			temp_extn = '.' & temp_extn*/
    // SubProg temp_file pc: 204 op: CONCAT (15)
    Prepend(&_temp_extn_7494, _temp_extn_7494, 46);
    // SubProg temp_file pc: 208 op: NOP1 (159)
LA: // addr: 209 pc: 208 sub: 7490 op: 159
    // SubProg temp_file pc: 209 op: STARTLINE (58)

    /** filesys.e:2950		while 1 do*/
    // SubProg temp_file pc: 211 op: NOP2 (110)
    // SubProg temp_file pc: 213 op: NOPWHILE (158)
LB: // addr: 214 pc: 213 sub: 7490 op: 158
    // SubProg temp_file pc: 214 op: STARTLINE (58)

    /** filesys.e:2951			randname = sprintf("%s%s%06d%s", {temp_location, temp_prefix, rand(1_000_000) - 1, temp_extn})*/
    // SubProg temp_file pc: 216 op: RAND (62)
    _4055 = good_rand() % ((uint32_t)1000000) + 1;
    // SubProg temp_file pc: 219 op: MINUS (10)
    _4056 = _4055 - 1;
    _4055 = NOVALUE;
    // SubProg temp_file pc: 223 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_temp_location_7492);
    ((intptr_t*)_2)[1] = _temp_location_7492;
    RefDS(_temp_prefix_7493);
    ((intptr_t*)_2)[2] = _temp_prefix_7493;
    ((intptr_t*)_2)[3] = _4056;
    RefDS(_temp_extn_7494);
    ((intptr_t*)_2)[4] = _temp_extn_7494;
    _4057 = MAKE_SEQ(_1);
    _4056 = NOVALUE;
    // SubProg temp_file pc: 230 op: SPRINTF (53)
    DeRefi(_randname_7497);
    _randname_7497 = EPrintf(-9999999, _4053, _4057);
    DeRefDS(_4057);
    _4057 = NOVALUE;
    // SubProg temp_file pc: 234 op: STARTLINE (58)

    /** filesys.e:2952			if not file_exists( randname ) then*/
    // SubProg temp_file pc: 236 op: PROC (27)
    RefDS(_randname_7497);
    _4059 = _20file_exists(_randname_7497);
    // SubProg temp_file pc: 240 op: NOT_IFW (108)
    if (IS_ATOM_INT(_4059)) {
        if (_4059 != 0){
            DeRef(_4059);
            _4059 = NOVALUE;
            goto LB; // [240] 214
        }
    }
    else {
        if (DBL_PTR(_4059)->dbl != 0.0){
            DeRef(_4059);
            _4059 = NOVALUE;
            goto LB; // [240] 214
        }
    }
    DeRef(_4059);
    _4059 = NOVALUE;
    // SubProg temp_file pc: 243 op: STARTLINE (58)

    /** filesys.e:2953				exit*/
    // SubProg temp_file pc: 245 op: EXIT (61)
    goto LC; // [245] 253
    // SubProg temp_file pc: 247 op: NOP1 (159)
    // SubProg temp_file pc: 248 op: STARTLINE (58)

    /** filesys.e:2955		end while*/
    // SubProg temp_file pc: 250 op: ENDWHILE (22)
    goto LB; // [250] 214
    // SubProg temp_file pc: 252 op: NOP1 (159)
LC: // addr: 253 pc: 252 sub: 7490 op: 159
    // SubProg temp_file pc: 253 op: STARTLINE (58)

    /** filesys.e:2957		if reserve_temp then*/
    // SubProg temp_file pc: 255 op: IF (20)
    if (_reserve_temp_7496 == 0)
    {
        goto LD; // [255] 300
    }
    else{
    }
    // SubProg temp_file pc: 258 op: STARTLINE (58)

    /** filesys.e:2959			if not file_exists(temp_location) then*/
    // SubProg temp_file pc: 260 op: PROC (27)
    RefDS(_temp_location_7492);
    _4061 = _20file_exists(_temp_location_7492);
    // SubProg temp_file pc: 264 op: NOT_IFW (108)
    if (IS_ATOM_INT(_4061)) {
        if (_4061 != 0){
            DeRef(_4061);
            _4061 = NOVALUE;
            goto LE; // [264] 287
        }
    }
    else {
        if (DBL_PTR(_4061)->dbl != 0.0){
            DeRef(_4061);
            _4061 = NOVALUE;
            goto LE; // [264] 287
        }
    }
    DeRef(_4061);
    _4061 = NOVALUE;
    // SubProg temp_file pc: 267 op: STARTLINE (58)

    /** filesys.e:2960				if create_directory(temp_location) = 0 then*/
    // SubProg temp_file pc: 269 op: PROC (27)
    RefDS(_temp_location_7492);
    _4063 = _20create_directory(_temp_location_7492, 448, 1);
    // SubProg temp_file pc: 275 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4063, 0)){
        DeRef(_4063);
        _4063 = NOVALUE;
        goto LF; // [275] 286
    }
    DeRef(_4063);
    _4063 = NOVALUE;
    // SubProg temp_file pc: 279 op: STARTLINE (58)

    /** filesys.e:2961					return ""*/
    // SubProg temp_file pc: 281 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: temp_file

// block var temp_location_7492
    DeRefDS(_temp_location_7492);

// block var temp_prefix_7493
    DeRefDSi(_temp_prefix_7493);

// block var temp_extn_7494
    DeRefDS(_temp_extn_7494);

// block var reserve_temp_7496

// block var randname_7497
    DeRefi(_randname_7497);
    return _5;
    // SubProg temp_file pc: 285 op: NOP1 (159)
LF: // addr: 286 pc: 285 sub: 7490 op: 159
    // SubProg temp_file pc: 286 op: NOP1 (159)
LE: // addr: 287 pc: 286 sub: 7490 op: 159
    // SubProg temp_file pc: 287 op: STARTLINE (58)

    /** filesys.e:2964			io:write_file(randname, "")*/
    // SubProg temp_file pc: 289 op: PRIVATE_INIT_CHECK (30)
    // SubProg temp_file pc: 291 op: PROC (27)
    RefDS(_randname_7497);
    RefDS(_5);
    _6353 = _8write_file(_randname_7497, _5, 1);
    // SubProg temp_file pc: 297 op: DEREF_TEMP (208)
    DeRef(_6353);
    _6353 = NOVALUE;
    // SubProg temp_file pc: 299 op: NOP1 (159)
LD: // addr: 300 pc: 299 sub: 7490 op: 159
    // SubProg temp_file pc: 300 op: STARTLINE (58)

    /** filesys.e:2967		return randname*/
    // SubProg temp_file pc: 302 op: PRIVATE_INIT_CHECK (30)
    // SubProg temp_file pc: 304 op: RETURNF (28)

// Exiting block BLOCK: temp_file

// block var temp_location_7492
    DeRefDS(_temp_location_7492);

// block var temp_prefix_7493
    DeRefDSi(_temp_prefix_7493);

// block var temp_extn_7494
    DeRefDS(_temp_extn_7494);

// block var reserve_temp_7496
    return _randname_7497;
    // SubProg temp_file pc: 308 op: BADRETURNF (43)
    ;
}



// 0xC6275703
