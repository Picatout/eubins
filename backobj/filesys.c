// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _18find_first_wildcard(object _name_7182, object _from_7183)
{
    object _asterisk_at_7184 = NOVALUE;
    object _question_at_7186 = NOVALUE;
    object _first_wildcard_at_7188 = NOVALUE;
    object _3838 = NOVALUE; // 7193 3838
    object _3837 = NOVALUE; // 7192 3837
// skipping _3836  name type: 0
// skipping _3835  name type: 0
// skipping _3834  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_first_wildcard pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_first_wildcard pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_first_wildcard pc: 5 op: STARTLINE (58)

    /** filesys.e:247		integer asterisk_at = eu:find('*', name, from)*/
    // SubProg find_first_wildcard pc: 7 op: FIND_FROM (176)
    _asterisk_at_7184 = find_from(42, _name_7182, _from_7183);
    // SubProg find_first_wildcard pc: 12 op: STARTLINE (58)

    /** filesys.e:248		integer question_at = eu:find('?', name, from)*/
    // SubProg find_first_wildcard pc: 14 op: FIND_FROM (176)
    _question_at_7186 = find_from(63, _name_7182, _from_7183);
    // SubProg find_first_wildcard pc: 19 op: STARTLINE (58)

    /** filesys.e:249		integer first_wildcard_at = asterisk_at*/
    // SubProg find_first_wildcard pc: 21 op: ASSIGN_I (113)
    _first_wildcard_at_7188 = _asterisk_at_7184;
    // SubProg find_first_wildcard pc: 24 op: STARTLINE (58)

    /** filesys.e:250		if asterisk_at or question_at then*/
    // SubProg find_first_wildcard pc: 26 op: SC1_OR_IF (147)
    if (_asterisk_at_7184 != 0) {
        goto L1; // [26] 35
    }
    // SubProg find_first_wildcard pc: 30 op: NOP1 (159)
    // SubProg find_first_wildcard pc: 31 op: IF (20)
    if (_question_at_7186 == 0)
    {
        goto L2; // [31] 56
    }
    else{
    }
    // SubProg find_first_wildcard pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 7180 op: 159
    // SubProg find_first_wildcard pc: 35 op: STARTLINE (58)

    /** filesys.e:253			if question_at and question_at < asterisk_at then*/
    // SubProg find_first_wildcard pc: 37 op: SC1_AND_IF (146)
    if (_question_at_7186 == 0) {
        goto L3; // [37] 55
    }
    // SubProg find_first_wildcard pc: 41 op: LESS (1)
    _3838 = (_question_at_7186 < _asterisk_at_7184);
    // SubProg find_first_wildcard pc: 45 op: NOP1 (159)
    // SubProg find_first_wildcard pc: 46 op: IF (20)
    if (_3838 == 0)
    {
        DeRef(_3838);
        _3838 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        DeRef(_3838);
        _3838 = NOVALUE;
    }
    // SubProg find_first_wildcard pc: 49 op: STARTLINE (58)

    /** filesys.e:254				first_wildcard_at = question_at*/
    // SubProg find_first_wildcard pc: 51 op: ASSIGN_I (113)
    _first_wildcard_at_7188 = _question_at_7186;
    // SubProg find_first_wildcard pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 7180 op: 159
    // SubProg find_first_wildcard pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 7180 op: 159
    // SubProg find_first_wildcard pc: 56 op: STARTLINE (58)

    /** filesys.e:257		return first_wildcard_at*/
    // SubProg find_first_wildcard pc: 58 op: RETURNF (28)

// Exiting block BLOCK: find_first_wildcard

// block var name_7182
    DeRefDS(_name_7182);

// block var from_7183

// block var asterisk_at_7184

// block var question_at_7186
    return _first_wildcard_at_7188;
    // SubProg find_first_wildcard pc: 62 op: BADRETURNF (43)
    ;
}


object _18dir(object _name_7196)
{
    object _dir_data_7197 = NOVALUE;
    object _data_7198 = NOVALUE;
    object _the_name_7199 = NOVALUE;
    object _the_dir_7200 = NOVALUE;
    object _the_suffix_7201 = NOVALUE;
    object _idx_7202 = NOVALUE;
    object _first_wildcard_at_7203 = NOVALUE;
    object _next_slash_7218 = NOVALUE;
    object _wild_data_7250 = NOVALUE;
    object _interim_dir_7254 = NOVALUE;
    object _dir_results_7258 = NOVALUE;
// skipping _3882  name type: 0
    object _3881 = NOVALUE; // 7270 3881
    object _3880 = NOVALUE; // 7269 3880
    object _3879 = NOVALUE; // 7268 3879
// skipping _3878  name type: 0
    object _3877 = NOVALUE; // 7266 3877
    object _3876 = NOVALUE; // 7265 3876
    object _3875 = NOVALUE; // 7262 3875
// skipping _3874  name type: 0
    object _3873 = NOVALUE; // 7259 3873
// skipping _3872  name type: 0
    object _3871 = NOVALUE; // 7256 3871
    object _3870 = NOVALUE; // 7255 3870
    object _3869 = NOVALUE; // 7253 3869
    object _3868 = NOVALUE; // 7249 3868
// skipping _3867  name type: 0
    object _3866 = NOVALUE; // 7246 3866
// skipping _3865  name type: 0
    object _3864 = NOVALUE; // 7243 3864
    object _3863 = NOVALUE; // 7242 3863
    object _3862 = NOVALUE; // 7241 3862
    object _3861 = NOVALUE; // 7240 3861
    object _3860 = NOVALUE; // 7238 3860
    object _3859 = NOVALUE; // 7235 3859
// skipping _3858  name type: 0
// skipping _3857  name type: 0
    object _3856 = NOVALUE; // 7231 3856
    object _3855 = NOVALUE; // 7230 3855
// skipping _3854  name type: 0
    object _3853 = NOVALUE; // 7227 3853
// skipping _3852  name type: 0
    object _3851 = NOVALUE; // 7225 3851
    object _3850 = NOVALUE; // 7224 3850
// skipping _3849  name type: 0
// skipping _3848  name type: 0
// skipping _3847  name type: 0
// skipping _3845  name type: 0
// skipping _3844  name type: 0
    object _3843 = NOVALUE; // 7211 3843
// skipping _3842  name type: 0
    object _3841 = NOVALUE; // 7207 3841
// skipping _3840  name type: 0
// skipping _3839  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg dir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg dir pc: 3 op: STARTLINE (58)

    /** filesys.e:358		ifdef WINDOWS then*/
    // SubProg dir pc: 5 op: STARTLINE (58)

    /** filesys.e:361			object dir_data, data, the_name, the_dir, the_suffix = 0*/
    // SubProg dir pc: 7 op: ASSIGN (18)
    DeRef(_the_suffix_7201);
    _the_suffix_7201 = 0;
    // SubProg dir pc: 10 op: STARTLINE (58)

    /** filesys.e:362			integer idx*/
    // SubProg dir pc: 12 op: STARTLINE (58)

    /** filesys.e:365			integer first_wildcard_at = find_first_wildcard( name )*/
    // SubProg dir pc: 14 op: PROC (27)
    RefDS(_name_7196);
    _first_wildcard_at_7203 = _18find_first_wildcard(_name_7196, 1);
    // SubProg dir pc: 19 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_7203)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_7203)->dbl);
        DeRefDS(_first_wildcard_at_7203);
        _first_wildcard_at_7203 = _1;
    }
    // SubProg dir pc: 21 op: STARTLINE (58)

    /** filesys.e:366			if first_wildcard_at = 0 then*/
    // SubProg dir pc: 23 op: EQUALS_IFW_I (121)
    if (_first_wildcard_at_7203 != 0)
    goto L1; // [23] 38
    // SubProg dir pc: 27 op: STARTLINE (58)

    /** filesys.e:367				return machine_func(M_DIR, name)*/
    // SubProg dir pc: 29 op: MACHINE_FUNC (111)
    _3841 = machine(22, _name_7196);
    // SubProg dir pc: 33 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_7196
    DeRefDS(_name_7196);

// block var dir_data_7197
    DeRef(_dir_data_7197);

// block var data_7198
    DeRef(_data_7198);

// block var the_name_7199
    DeRef(_the_name_7199);

// block var the_dir_7200
    DeRef(_the_dir_7200);

// block var the_suffix_7201

// block var idx_7202

// block var first_wildcard_at_7203
    return _3841;
    // SubProg dir pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 7194 op: 159
    // SubProg dir pc: 38 op: STARTLINE (58)

    /** filesys.e:371			if first_wildcard_at then*/
    // SubProg dir pc: 40 op: IF (20)
    if (_first_wildcard_at_7203 == 0)
    {
        goto L2; // [40] 56
    }
    else{
    }
    // SubProg dir pc: 43 op: STARTLINE (58)

    /** filesys.e:372				idx = search:rfind(SLASH, name, first_wildcard_at )*/
    // SubProg dir pc: 45 op: PROC (27)
    RefDS(_name_7196);
    _idx_7202 = _17rfind(47, _name_7196, _first_wildcard_at_7203);
    // SubProg dir pc: 51 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_idx_7202)) {
        _1 = (object)(DBL_PTR(_idx_7202)->dbl);
        DeRefDS(_idx_7202);
        _idx_7202 = _1;
    }
    // SubProg dir pc: 53 op: ELSE (23)
    goto L3; // [53] 70
    // SubProg dir pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 7194 op: 159
    // SubProg dir pc: 56 op: STARTLINE (58)

    /** filesys.e:374				idx = search:rfind(SLASH, name )*/
    // SubProg dir pc: 58 op: LENGTH (42)
    if (IS_SEQUENCE(_name_7196)){
            _3843 = SEQ_PTR(_name_7196)->length;
    }
    else {
        _3843 = 1;
    }
    // SubProg dir pc: 61 op: PROC (27)
    RefDS(_name_7196);
    _idx_7202 = _17rfind(47, _name_7196, _3843);
    _3843 = NOVALUE;
    // SubProg dir pc: 67 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_idx_7202)) {
        _1 = (object)(DBL_PTR(_idx_7202)->dbl);
        DeRefDS(_idx_7202);
        _idx_7202 = _1;
    }
    // SubProg dir pc: 69 op: NOP1 (159)
L3: // addr: 70 pc: 69 sub: 7194 op: 159
    // SubProg dir pc: 70 op: STARTLINE (58)

    /** filesys.e:377			if idx = 0 then*/
    // SubProg dir pc: 72 op: PRIVATE_INIT_CHECK (30)
    // SubProg dir pc: 74 op: EQUALS_IFW_I (121)
    if (_idx_7202 != 0)
    goto L4; // [74] 91
    // SubProg dir pc: 78 op: STARTLINE (58)

    /** filesys.e:378				the_dir = "."*/
    // SubProg dir pc: 80 op: ASSIGN (18)
    RefDS(_3846);
    DeRef(_the_dir_7200);
    _the_dir_7200 = _3846;
    // SubProg dir pc: 83 op: STARTLINE (58)

    /** filesys.e:379				the_name = name*/
    // SubProg dir pc: 85 op: ASSIGN (18)
    RefDS(_name_7196);
    DeRef(_the_name_7199);
    _the_name_7199 = _name_7196;
    // SubProg dir pc: 88 op: ELSE (23)
    goto L5; // [88] 187
    // SubProg dir pc: 90 op: NOP1 (159)
L4: // addr: 91 pc: 90 sub: 7194 op: 159
    // SubProg dir pc: 91 op: STARTLINE (58)

    /** filesys.e:383				the_dir = name[1 .. idx]*/
    // SubProg dir pc: 93 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_dir_7200;
    RHS_Slice(_name_7196, 1, _idx_7202);
    // SubProg dir pc: 98 op: STARTLINE (58)

    /** filesys.e:384				integer next_slash = 0*/
    // SubProg dir pc: 100 op: ASSIGN_I (113)
    _next_slash_7218 = 0;
    // SubProg dir pc: 103 op: STARTLINE (58)

    /** filesys.e:385				if first_wildcard_at then*/
    // SubProg dir pc: 105 op: IF (20)
    if (_first_wildcard_at_7203 == 0)
    {
        goto L6; // [105] 116
    }
    else{
    }
    // SubProg dir pc: 108 op: STARTLINE (58)

    /** filesys.e:386					next_slash = eu:find( SLASH, name, first_wildcard_at )*/
    // SubProg dir pc: 110 op: FIND_FROM (176)
    _next_slash_7218 = find_from(47, _name_7196, _first_wildcard_at_7203);
    // SubProg dir pc: 115 op: NOP1 (159)
L6: // addr: 116 pc: 115 sub: 7194 op: 159
    // SubProg dir pc: 116 op: STARTLINE (58)

    /** filesys.e:389				if next_slash then*/
    // SubProg dir pc: 118 op: IF (20)
    if (_next_slash_7218 == 0)
    {
        goto L7; // [118] 164
    }
    else{
    }
    // SubProg dir pc: 121 op: STARTLINE (58)

    /** filesys.e:390					first_wildcard_at = find_first_wildcard( name, next_slash )*/
    // SubProg dir pc: 123 op: PROC (27)
    RefDS(_name_7196);
    _first_wildcard_at_7203 = _18find_first_wildcard(_name_7196, _next_slash_7218);
    // SubProg dir pc: 128 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_7203)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_7203)->dbl);
        DeRefDS(_first_wildcard_at_7203);
        _first_wildcard_at_7203 = _1;
    }
    // SubProg dir pc: 130 op: STARTLINE (58)

    /** filesys.e:391					if first_wildcard_at then*/
    // SubProg dir pc: 132 op: IF (20)
    if (_first_wildcard_at_7203 == 0)
    {
        goto L8; // [132] 184
    }
    else{
    }
    // SubProg dir pc: 135 op: STARTLINE (58)

    /** filesys.e:392						the_name = name[idx+1..next_slash-1]*/
    // SubProg dir pc: 137 op: PLUS1 (93)
    _3850 = _idx_7202 + 1;
    if (_3850 > MAXINT){
        _3850 = NewDouble((eudouble)_3850);
    }
    // SubProg dir pc: 141 op: MINUS (10)
    _3851 = _next_slash_7218 - 1;
    // SubProg dir pc: 145 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_name_7199;
    RHS_Slice(_name_7196, _3850, _3851);
    // SubProg dir pc: 150 op: STARTLINE (58)

    /** filesys.e:393						the_suffix = name[next_slash..$]*/
    // SubProg dir pc: 152 op: LENGTH (42)
    if (IS_SEQUENCE(_name_7196)){
            _3853 = SEQ_PTR(_name_7196)->length;
    }
    else {
        _3853 = 1;
    }
    // SubProg dir pc: 155 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_suffix_7201;
    RHS_Slice(_name_7196, _next_slash_7218, _3853);
    // SubProg dir pc: 160 op: NOP1 (159)
    // SubProg dir pc: 161 op: ELSE (23)
    goto L8; // [161] 184
    // SubProg dir pc: 163 op: NOP1 (159)
L7: // addr: 164 pc: 163 sub: 7194 op: 159
    // SubProg dir pc: 164 op: STARTLINE (58)

    /** filesys.e:396					the_name = name[idx+1 .. $]*/
    // SubProg dir pc: 166 op: PLUS1 (93)
    _3855 = _idx_7202 + 1;
    if (_3855 > MAXINT){
        _3855 = NewDouble((eudouble)_3855);
    }
    // SubProg dir pc: 170 op: LENGTH (42)
    if (IS_SEQUENCE(_name_7196)){
            _3856 = SEQ_PTR(_name_7196)->length;
    }
    else {
        _3856 = 1;
    }
    // SubProg dir pc: 173 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_name_7199;
    RHS_Slice(_name_7196, _3855, _3856);
    // SubProg dir pc: 178 op: STARTLINE (58)

    /** filesys.e:397					the_suffix = 0*/
    // SubProg dir pc: 180 op: ASSIGN (18)
    DeRef(_the_suffix_7201);
    _the_suffix_7201 = 0;
    // SubProg dir pc: 183 op: NOP1 (159)
L8: // addr: 184 pc: 183 sub: 7194 op: 159
    // SubProg dir pc: 184 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var next_slash_7218
    // SubProg dir pc: 186 op: NOP1 (159)
L5: // addr: 187 pc: 186 sub: 7194 op: 159
    // SubProg dir pc: 187 op: STARTLINE (58)

    /** filesys.e:403			dir_data = dir( the_dir )*/
    // SubProg dir pc: 189 op: PRIVATE_INIT_CHECK (30)
    // SubProg dir pc: 191 op: PROC (27)
    Ref(_the_dir_7200);
    _0 = _dir_data_7197;
    _dir_data_7197 = _18dir(_the_dir_7200);
    DeRef(_0);
    // SubProg dir pc: 195 op: STARTLINE (58)

    /** filesys.e:406			if atom(dir_data) then*/
    // SubProg dir pc: 197 op: IS_AN_ATOM (67)
    _3859 = IS_ATOM(_dir_data_7197);
    // SubProg dir pc: 200 op: IF (20)
    if (_3859 == 0)
    {
        _3859 = NOVALUE;
        goto L9; // [200] 210
    }
    else{
        _3859 = NOVALUE;
    }
    // SubProg dir pc: 203 op: STARTLINE (58)

    /** filesys.e:407				return dir_data*/
    // SubProg dir pc: 205 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_7196
    DeRefDS(_name_7196);

// block var data_7198
    DeRef(_data_7198);

// block var the_name_7199
    DeRef(_the_name_7199);

// block var the_dir_7200
    DeRef(_the_dir_7200);

// block var the_suffix_7201
    DeRef(_the_suffix_7201);

// block var idx_7202

// block var first_wildcard_at_7203
    DeRef(_3855);
    _3855 = NOVALUE;
    DeRef(_3841);
    _3841 = NOVALUE;
    DeRef(_3850);
    _3850 = NOVALUE;
    DeRef(_3851);
    _3851 = NOVALUE;
    return _dir_data_7197;
    // SubProg dir pc: 209 op: NOP1 (159)
L9: // addr: 210 pc: 209 sub: 7194 op: 159
    // SubProg dir pc: 210 op: STARTLINE (58)

    /** filesys.e:412			data = {}*/
    // SubProg dir pc: 212 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_data_7198);
    _data_7198 = _5;
    // SubProg dir pc: 215 op: STARTLINE (58)

    /** filesys.e:413			for i = 1 to length(dir_data) do*/
    // SubProg dir pc: 217 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_data_7197)){
            _3860 = SEQ_PTR(_dir_data_7197)->length;
    }
    else {
        _3860 = 1;
    }
    // SubProg dir pc: 220 op: FOR_I (125)
    {
        object _i_7237;
        _i_7237 = 1;
LA: // addr: 227 pc: 220 sub: 7194 op: 125
        if (_i_7237 > _3860){
            goto LB; // [220] 265
        }
        // SubProg dir pc: 227 op: STARTLINE (58)

        /** filesys.e:414				if wildcard:is_match(the_name, dir_data[i][1]) then*/
        // SubProg dir pc: 229 op: PRIVATE_INIT_CHECK (30)
        // SubProg dir pc: 231 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_7197);
        _3861 = (object)*(((s1_ptr)_2)->base + _i_7237);
        // SubProg dir pc: 235 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3861);
        _3862 = (object)*(((s1_ptr)_2)->base + 1);
        _3861 = NOVALUE;
        // SubProg dir pc: 239 op: PROC (27)
        Ref(_the_name_7199);
        Ref(_3862);
        _3863 = _12is_match(_the_name_7199, _3862);
        _3862 = NOVALUE;
        // SubProg dir pc: 244 op: IF (20)
        if (_3863 == 0) {
            DeRef(_3863);
            _3863 = NOVALUE;
            goto LC; // [244] 258
        }
        else {
            if (!IS_ATOM_INT(_3863) && DBL_PTR(_3863)->dbl == 0.0){
                DeRef(_3863);
                _3863 = NOVALUE;
                goto LC; // [244] 258
            }
            DeRef(_3863);
            _3863 = NOVALUE;
        }
        DeRef(_3863);
        _3863 = NOVALUE;
        // SubProg dir pc: 247 op: STARTLINE (58)

        /** filesys.e:415						data = append(data, dir_data[i])*/
        // SubProg dir pc: 249 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_7197);
        _3864 = (object)*(((s1_ptr)_2)->base + _i_7237);
        // SubProg dir pc: 253 op: APPEND (35)
        Ref(_3864);
        Append(&_data_7198, _data_7198, _3864);
        _3864 = NOVALUE;
        // SubProg dir pc: 257 op: NOP1 (159)
LC: // addr: 258 pc: 257 sub: 7194 op: 159
        // SubProg dir pc: 258 op: STARTLINE (58)

        /** filesys.e:417			end for*/
        // SubProg dir pc: 260 op: ENDFOR_INT_UP1 (54)
        _i_7237 = _i_7237 + 1;
        goto LA; // [260] 227
LB: // addr: 265 pc: 260 sub: 7194 op: 54
        ;
    }
    // SubProg dir pc: 265 op: STARTLINE (58)

    /** filesys.e:419			if not length(data) then*/
    // SubProg dir pc: 267 op: LENGTH (42)
    if (IS_SEQUENCE(_data_7198)){
            _3866 = SEQ_PTR(_data_7198)->length;
    }
    else {
        _3866 = 1;
    }
    // SubProg dir pc: 270 op: NOT_IFW (108)
    if (_3866 != 0)
    goto LD; // [270] 280
    _3866 = NOVALUE;
    // SubProg dir pc: 273 op: STARTLINE (58)

    /** filesys.e:421				return -1*/
    // SubProg dir pc: 275 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_7196
    DeRefDS(_name_7196);

// block var dir_data_7197
    DeRef(_dir_data_7197);

// block var data_7198
    DeRef(_data_7198);

// block var the_name_7199
    DeRef(_the_name_7199);

// block var the_dir_7200
    DeRef(_the_dir_7200);

// block var the_suffix_7201
    DeRef(_the_suffix_7201);

// block var idx_7202

// block var first_wildcard_at_7203
    DeRef(_3855);
    _3855 = NOVALUE;
    DeRef(_3841);
    _3841 = NOVALUE;
    DeRef(_3850);
    _3850 = NOVALUE;
    DeRef(_3851);
    _3851 = NOVALUE;
    return -1;
    // SubProg dir pc: 279 op: NOP1 (159)
LD: // addr: 280 pc: 279 sub: 7194 op: 159
    // SubProg dir pc: 280 op: STARTLINE (58)

    /** filesys.e:424			if sequence( the_suffix ) then*/
    // SubProg dir pc: 282 op: IS_A_SEQUENCE (68)
    _3868 = IS_SEQUENCE(_the_suffix_7201);
    // SubProg dir pc: 285 op: IF (20)
    if (_3868 == 0)
    {
        _3868 = NOVALUE;
        goto LE; // [285] 406
    }
    else{
        _3868 = NOVALUE;
    }
    // SubProg dir pc: 288 op: STARTLINE (58)

    /** filesys.e:425				sequence wild_data = {}*/
    // SubProg dir pc: 290 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_wild_data_7250);
    _wild_data_7250 = _5;
    // SubProg dir pc: 293 op: SEQUENCE_CHECK (97)
    // SubProg dir pc: 295 op: STARTLINE (58)

    /** filesys.e:426				for i = 1 to length( dir_data ) do*/
    // SubProg dir pc: 297 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_data_7197)){
            _3869 = SEQ_PTR(_dir_data_7197)->length;
    }
    else {
        _3869 = 1;
    }
    // SubProg dir pc: 300 op: FOR_I (125)
    {
        object _i_7252;
        _i_7252 = 1;
LF: // addr: 307 pc: 300 sub: 7194 op: 125
        if (_i_7252 > _3869){
            goto L10; // [300] 399
        }
        // SubProg dir pc: 307 op: STARTLINE (58)

        /** filesys.e:427					sequence interim_dir = the_dir & dir_data[i][D_NAME] & SLASH*/
        // SubProg dir pc: 309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_7197);
        _3870 = (object)*(((s1_ptr)_2)->base + _i_7252);
        // SubProg dir pc: 313 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_3870);
        _3871 = (object)*(((s1_ptr)_2)->base + 1);
        _3870 = NOVALUE;
        // SubProg dir pc: 317 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = 47;
            concat_list[1] = _3871;
            concat_list[2] = _the_dir_7200;
            Concat_N((object_ptr)&_interim_dir_7254, concat_list, 3);
        }
        _3871 = NOVALUE;
        // SubProg dir pc: 323 op: STARTLINE (58)

        /** filesys.e:428					object dir_results = dir( interim_dir & the_suffix )*/
        // SubProg dir pc: 325 op: CONCAT (15)
        if (IS_SEQUENCE(_interim_dir_7254) && IS_ATOM(_the_suffix_7201)) {
            Ref(_the_suffix_7201);
            Append(&_3873, _interim_dir_7254, _the_suffix_7201);
        }
        else if (IS_ATOM(_interim_dir_7254) && IS_SEQUENCE(_the_suffix_7201)) {
        }
        else {
            Concat((object_ptr)&_3873, _interim_dir_7254, _the_suffix_7201);
        }
        // SubProg dir pc: 329 op: PROC (27)
        _0 = _dir_results_7258;
        _dir_results_7258 = _18dir(_3873);
        DeRef(_0);
        _3873 = NOVALUE;
        // SubProg dir pc: 333 op: STARTLINE (58)

        /** filesys.e:429					if sequence( dir_results ) then*/
        // SubProg dir pc: 335 op: IS_A_SEQUENCE (68)
        _3875 = IS_SEQUENCE(_dir_results_7258);
        // SubProg dir pc: 338 op: IF (20)
        if (_3875 == 0)
        {
            _3875 = NOVALUE;
            goto L11; // [338] 390
        }
        else{
            _3875 = NOVALUE;
        }
        // SubProg dir pc: 341 op: STARTLINE (58)

        /** filesys.e:430						for j = 1 to length( dir_results ) do*/
        // SubProg dir pc: 343 op: LENGTH (42)
        if (IS_SEQUENCE(_dir_results_7258)){
                _3876 = SEQ_PTR(_dir_results_7258)->length;
        }
        else {
            _3876 = 1;
        }
        // SubProg dir pc: 346 op: FOR_I (125)
        {
            object _j_7264;
            _j_7264 = 1;
L12: // addr: 353 pc: 346 sub: 7194 op: 125
            if (_j_7264 > _3876){
                goto L13; // [346] 383
            }
            // SubProg dir pc: 353 op: STARTLINE (58)

            /** filesys.e:431							dir_results[j][D_NAME] = interim_dir & dir_results[j][D_NAME]*/
            // SubProg dir pc: 355 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_dir_results_7258);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _dir_results_7258 = MAKE_SEQ(_2);
            }
            _3 = (object)(_j_7264 + ((s1_ptr)_2)->base);
            // SubProg dir pc: 360 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_dir_results_7258);
            _3879 = (object)*(((s1_ptr)_2)->base + _j_7264);
            // SubProg dir pc: 364 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_3879);
            _3880 = (object)*(((s1_ptr)_2)->base + 1);
            _3879 = NOVALUE;
            // SubProg dir pc: 368 op: CONCAT (15)
            if (IS_SEQUENCE(_interim_dir_7254) && IS_ATOM(_3880)) {
                Ref(_3880);
                Append(&_3881, _interim_dir_7254, _3880);
            }
            else if (IS_ATOM(_interim_dir_7254) && IS_SEQUENCE(_3880)) {
            }
            else {
                Concat((object_ptr)&_3881, _interim_dir_7254, _3880);
            }
            _3880 = NOVALUE;
            // SubProg dir pc: 372 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 1);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _3881;
            if( _1 != _3881 ){
                DeRef(_1);
            }
            _3881 = NOVALUE;
            _3877 = NOVALUE;
            // SubProg dir pc: 376 op: STARTLINE (58)

            /** filesys.e:432						end for*/
            // SubProg dir pc: 378 op: ENDFOR_INT_UP1 (54)
            _j_7264 = _j_7264 + 1;
            goto L12; // [378] 353
L13: // addr: 383 pc: 378 sub: 7194 op: 54
            ;
        }
        // SubProg dir pc: 383 op: STARTLINE (58)

        /** filesys.e:433						wild_data &= dir_results*/
        // SubProg dir pc: 385 op: CONCAT (15)
        if (IS_SEQUENCE(_wild_data_7250) && IS_ATOM(_dir_results_7258)) {
            Ref(_dir_results_7258);
            Append(&_wild_data_7250, _wild_data_7250, _dir_results_7258);
        }
        else if (IS_ATOM(_wild_data_7250) && IS_SEQUENCE(_dir_results_7258)) {
        }
        else {
            Concat((object_ptr)&_wild_data_7250, _wild_data_7250, _dir_results_7258);
        }
        // SubProg dir pc: 389 op: NOP1 (159)
L11: // addr: 390 pc: 389 sub: 7194 op: 159
        // SubProg dir pc: 390 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var interim_dir_7254
        DeRef(_interim_dir_7254);
        _interim_dir_7254 = NOVALUE;

// block var dir_results_7258
        DeRef(_dir_results_7258);
        _dir_results_7258 = NOVALUE;
        // SubProg dir pc: 392 op: STARTLINE (58)

        /** filesys.e:435				end for*/
        // SubProg dir pc: 394 op: ENDFOR_INT_UP1 (54)
        _i_7252 = _i_7252 + 1;
        goto LF; // [394] 307
L10: // addr: 399 pc: 394 sub: 7194 op: 54
        ;
    }
    // SubProg dir pc: 399 op: STARTLINE (58)

    /** filesys.e:436				return wild_data*/
    // SubProg dir pc: 401 op: RETURNF (28)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: dir

// block var name_7196
    DeRefDS(_name_7196);

// block var dir_data_7197
    DeRef(_dir_data_7197);

// block var data_7198
    DeRef(_data_7198);

// block var the_name_7199
    DeRef(_the_name_7199);

// block var the_dir_7200
    DeRef(_the_dir_7200);

// block var the_suffix_7201
    DeRef(_the_suffix_7201);

// block var idx_7202

// block var first_wildcard_at_7203
    DeRef(_3855);
    _3855 = NOVALUE;
    DeRef(_3841);
    _3841 = NOVALUE;
    DeRef(_3850);
    _3850 = NOVALUE;
    DeRef(_3851);
    _3851 = NOVALUE;
    return _wild_data_7250;
    // SubProg dir pc: 405 op: NOP1 (159)
LE: // addr: 406 pc: 405 sub: 7194 op: 159
    // SubProg dir pc: 406 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var wild_data_7250
    DeRef(_wild_data_7250);
    _wild_data_7250 = NOVALUE;
    // SubProg dir pc: 408 op: STARTLINE (58)

    /** filesys.e:439			return data*/
    // SubProg dir pc: 410 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_7196
    DeRefDS(_name_7196);

// block var dir_data_7197
    DeRef(_dir_data_7197);

// block var the_name_7199
    DeRef(_the_name_7199);

// block var the_dir_7200
    DeRef(_the_dir_7200);

// block var the_suffix_7201
    DeRef(_the_suffix_7201);

// block var idx_7202

// block var first_wildcard_at_7203
    DeRef(_3855);
    _3855 = NOVALUE;
    DeRef(_3841);
    _3841 = NOVALUE;
    DeRef(_3850);
    _3850 = NOVALUE;
    DeRef(_3851);
    _3851 = NOVALUE;
    return _data_7198;
    // SubProg dir pc: 414 op: BADRETURNF (43)
    ;
}


object _18current_dir()
{
    object _3883 = NOVALUE; // 7274 3883
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg current_dir pc: 1 op: STARTLINE (58)

    /** filesys.e:465		return machine_func(M_CURRENT_DIR, 0)*/
    // SubProg current_dir pc: 3 op: MACHINE_FUNC (111)
    _3883 = machine(23, 0);
    // SubProg current_dir pc: 7 op: RETURNF (28)

// Exiting block BLOCK: current_dir
    return _3883;
    // SubProg current_dir pc: 11 op: BADRETURNF (43)
    ;
}


object _18chdir(object _newdir_7277)
{
    object _3884 = NOVALUE; // 7278 3884
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg chdir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg chdir pc: 3 op: STARTLINE (58)

    /** filesys.e:501		return machine_func(M_CHDIR, newdir)*/
    // SubProg chdir pc: 5 op: MACHINE_FUNC (111)
    _3884 = machine(63, _newdir_7277);
    // SubProg chdir pc: 9 op: RETURNF (28)

// Exiting block BLOCK: chdir

// block var newdir_7277
    DeRefDS(_newdir_7277);
    return _3884;
    // SubProg chdir pc: 13 op: BADRETURNF (43)
    ;
}


object _18delete_file(object _name_7411)
{
    object _pfilename_7412 = NOVALUE;
    object _success_7414 = NOVALUE;
// skipping _3964  name type: 0
// skipping _3963  name type: 0
    object _3962 = NOVALUE; // 7415 3962
// skipping _3961  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg delete_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg delete_file pc: 3 op: STARTLINE (58)

    /** filesys.e:802		atom pfilename = machine:allocate_string(name)*/
    // SubProg delete_file pc: 5 op: PROC (27)
    RefDS(_name_7411);
    _0 = _pfilename_7412;
    _pfilename_7412 = _3allocate_string(_name_7411, 0);
    DeRef(_0);
    // SubProg delete_file pc: 10 op: STARTLINE (58)

    /** filesys.e:803		integer success = c_func(xDeleteFile, {pfilename})*/
    // SubProg delete_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg delete_file pc: 14 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_pfilename_7412);
    ((intptr_t*)_2)[1] = _pfilename_7412;
    _3962 = MAKE_SEQ(_1);
    // SubProg delete_file pc: 18 op: C_FUNC (133)
    _success_7414 = call_c(1, _18xDeleteFile_7126, _3962);
    DeRefDS(_3962);
    _3962 = NOVALUE;
    // SubProg delete_file pc: 23 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_success_7414)) {
        _1 = (object)(DBL_PTR(_success_7414)->dbl);
        DeRefDS(_success_7414);
        _success_7414 = _1;
    }
    // SubProg delete_file pc: 25 op: STARTLINE (58)

    /** filesys.e:805		ifdef UNIX then*/
    // SubProg delete_file pc: 27 op: STARTLINE (58)

    /** filesys.e:806			success = not success*/
    // SubProg delete_file pc: 29 op: NOT (7)
    _success_7414 = (_success_7414 == 0);
    // SubProg delete_file pc: 32 op: STARTLINE (58)

    /** filesys.e:809		machine:free(pfilename)*/
    // SubProg delete_file pc: 34 op: PROC (27)
    Ref(_pfilename_7412);
    _3free(_pfilename_7412);
    // SubProg delete_file pc: 37 op: STARTLINE (58)

    /** filesys.e:811		return success*/
    // SubProg delete_file pc: 39 op: RETURNF (28)

// Exiting block BLOCK: delete_file

// block var name_7411
    DeRefDS(_name_7411);

// block var pfilename_7412
    DeRef(_pfilename_7412);
    return _success_7414;
    // SubProg delete_file pc: 43 op: BADRETURNF (43)
    ;
}


object _18curdir(object _drive_id_7420)
{
    object _lCurDir_7421 = NOVALUE;
    object _current_dir_inlined_current_dir_at_6_7423 = NOVALUE;
// skipping _3968  name type: 0
// skipping _3967  name type: 0
    object _3966 = NOVALUE; // 7426 3966
    object _3965 = NOVALUE; // 7425 3965
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
    DeRefi(_lCurDir_7421);
    _lCurDir_7421 = machine(23, 0);
    // SubProg curdir pc: 13 op: NOP1 (159)
    // SubProg curdir pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg curdir pc: 16 op: STARTLINE (58)

    /** filesys.e:863		ifdef not LINUX then*/
    // SubProg curdir pc: 18 op: STARTLINE (58)

    /** filesys.e:870		if (lCurDir[$] != SLASH) then*/
    // SubProg curdir pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_lCurDir_7421)){
            _3965 = SEQ_PTR(_lCurDir_7421)->length;
    }
    else {
        _3965 = 1;
    }
    // SubProg curdir pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lCurDir_7421);
    _3966 = (object)*(((s1_ptr)_2)->base + _3965);
    // SubProg curdir pc: 27 op: NOTEQ_IFW (105)
    if (_3966 == 47)
    goto L1; // [27] 38
    // SubProg curdir pc: 31 op: STARTLINE (58)

    /** filesys.e:871			lCurDir &= SLASH*/
    // SubProg curdir pc: 33 op: CONCAT (15)
    Append(&_lCurDir_7421, _lCurDir_7421, 47);
    // SubProg curdir pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 7418 op: 159
    // SubProg curdir pc: 38 op: STARTLINE (58)

    /** filesys.e:874		return lCurDir*/
    // SubProg curdir pc: 40 op: RETURNF (28)

// Exiting block BLOCK: curdir
    _3966 = NOVALUE;
    return _lCurDir_7421;
    // SubProg curdir pc: 44 op: BADRETURNF (43)
    ;
}


object _18pathinfo(object _path_7554, object _std_slash_7555)
{
    object _slash_7556 = NOVALUE;
    object _period_7557 = NOVALUE;
    object _ch_7558 = NOVALUE;
    object _dir_name_7559 = NOVALUE;
    object _file_name_7560 = NOVALUE;
    object _file_ext_7561 = NOVALUE;
    object _file_full_7562 = NOVALUE;
    object _drive_id_7563 = NOVALUE;
    object _from_slash_7595 = NOVALUE;
    object _4068 = NOVALUE; // 7600 4068
// skipping _4067  name type: 0
// skipping _4066  name type: 0
// skipping _4065  name type: 0
// skipping _4064  name type: 0
// skipping _4063  name type: 0
// skipping _4062  name type: 0
    object _4061 = NOVALUE; // 7589 4061
    object _4060 = NOVALUE; // 7588 4060
// skipping _4059  name type: 0
// skipping _4058  name type: 0
    object _4057 = NOVALUE; // 7584 4057
    object _4056 = NOVALUE; // 7583 4056
// skipping _4055  name type: 0
    object _4054 = NOVALUE; // 7581 4054
    object _4053 = NOVALUE; // 7580 4053
// skipping _4052  name type: 0
// skipping _4051  name type: 0
    object _4050 = NOVALUE; // 7576 4050
// skipping _4049  name type: 0
    object _4048 = NOVALUE; // 7573 4048
    object _4047 = NOVALUE; // 7571 4047
    object _4046 = NOVALUE; // 7570 4046
    object _4045 = NOVALUE; // 7569 4045
// skipping _4044  name type: 0
    object _4043 = NOVALUE; // 7566 4043
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pathinfo pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 3 op: INTEGER_CHECK (96)
    // SubProg pathinfo pc: 5 op: STARTLINE (58)

    /** filesys.e:1196		dir_name  = ""*/
    // SubProg pathinfo pc: 7 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_dir_name_7559);
    _dir_name_7559 = _5;
    // SubProg pathinfo pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 12 op: STARTLINE (58)

    /** filesys.e:1197		file_name = ""*/
    // SubProg pathinfo pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_name_7560);
    _file_name_7560 = _5;
    // SubProg pathinfo pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 19 op: STARTLINE (58)

    /** filesys.e:1198		file_ext  = ""*/
    // SubProg pathinfo pc: 21 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_ext_7561);
    _file_ext_7561 = _5;
    // SubProg pathinfo pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 26 op: STARTLINE (58)

    /** filesys.e:1199		file_full = ""*/
    // SubProg pathinfo pc: 28 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_full_7562);
    _file_full_7562 = _5;
    // SubProg pathinfo pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 33 op: STARTLINE (58)

    /** filesys.e:1200		drive_id  = ""*/
    // SubProg pathinfo pc: 35 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_drive_id_7563);
    _drive_id_7563 = _5;
    // SubProg pathinfo pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 40 op: STARTLINE (58)

    /** filesys.e:1202		slash = 0*/
    // SubProg pathinfo pc: 42 op: ASSIGN_I (113)
    _slash_7556 = 0;
    // SubProg pathinfo pc: 45 op: STARTLINE (58)

    /** filesys.e:1203		period = 0*/
    // SubProg pathinfo pc: 47 op: ASSIGN_I (113)
    _period_7557 = 0;
    // SubProg pathinfo pc: 50 op: STARTLINE (58)

    /** filesys.e:1205		for i = length(path) to 1 by -1 do*/
    // SubProg pathinfo pc: 52 op: LENGTH (42)
    if (IS_SEQUENCE(_path_7554)){
            _4043 = SEQ_PTR(_path_7554)->length;
    }
    else {
        _4043 = 1;
    }
    // SubProg pathinfo pc: 55 op: FOR_I (125)
    {
        object _i_7565;
        _i_7565 = _4043;
L1: // addr: 62 pc: 55 sub: 7552 op: 125
        if (_i_7565 < 1){
            goto L2; // [55] 122
        }
        // SubProg pathinfo pc: 62 op: STARTLINE (58)

        /** filesys.e:1206			ch = path[i]*/
        // SubProg pathinfo pc: 64 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_path_7554);
        _ch_7558 = (object)*(((s1_ptr)_2)->base + _i_7565);
        if (!IS_ATOM_INT(_ch_7558))
        _ch_7558 = (object)DBL_PTR(_ch_7558)->dbl;
        // SubProg pathinfo pc: 68 op: STARTLINE (58)

        /** filesys.e:1207			if period = 0 and ch = '.' then*/
        // SubProg pathinfo pc: 70 op: EQUALS (3)
        _4045 = (_period_7557 == 0);
        // SubProg pathinfo pc: 74 op: SC1_AND_IF (146)
        if (_4045 == 0) {
            goto L3; // [74] 94
        }
        // SubProg pathinfo pc: 78 op: EQUALS (3)
        _4047 = (_ch_7558 == 46);
        // SubProg pathinfo pc: 82 op: NOP1 (159)
        // SubProg pathinfo pc: 83 op: IF (20)
        if (_4047 == 0)
        {
            DeRef(_4047);
            _4047 = NOVALUE;
            goto L3; // [83] 94
        }
        else{
            DeRef(_4047);
            _4047 = NOVALUE;
        }
        // SubProg pathinfo pc: 86 op: STARTLINE (58)

        /** filesys.e:1208				period = i*/
        // SubProg pathinfo pc: 88 op: ASSIGN_I (113)
        _period_7557 = _i_7565;
        // SubProg pathinfo pc: 91 op: ELSE (23)
        goto L4; // [91] 115
        // SubProg pathinfo pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 7552 op: 159
        // SubProg pathinfo pc: 94 op: STARTLINE (58)

        /** filesys.e:1209			elsif eu:find(ch, SLASHES) then*/
        // SubProg pathinfo pc: 96 op: FIND_FROM (176)
        _4048 = find_from(_ch_7558, _18SLASHES_7150, 1);
        // SubProg pathinfo pc: 101 op: IF (20)
        if (_4048 == 0)
        {
            _4048 = NOVALUE;
            goto L5; // [101] 114
        }
        else{
            _4048 = NOVALUE;
        }
        // SubProg pathinfo pc: 104 op: STARTLINE (58)

        /** filesys.e:1210				slash = i*/
        // SubProg pathinfo pc: 106 op: ASSIGN_I (113)
        _slash_7556 = _i_7565;
        // SubProg pathinfo pc: 109 op: STARTLINE (58)

        /** filesys.e:1211				exit*/
        // SubProg pathinfo pc: 111 op: EXIT (61)
        goto L2; // [111] 122
        // SubProg pathinfo pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 7552 op: 159
        // SubProg pathinfo pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 7552 op: 159
        // SubProg pathinfo pc: 115 op: STARTLINE (58)

        /** filesys.e:1213		end for*/
        // SubProg pathinfo pc: 117 op: ENDFOR_GENERAL (39)
        _i_7565 = _i_7565 + -1;
        goto L1; // [117] 62
L2: // addr: 122 pc: 117 sub: 7552 op: 39
        ;
    }
    // SubProg pathinfo pc: 122 op: STARTLINE (58)

    /** filesys.e:1215		if slash > 0 then*/
    // SubProg pathinfo pc: 124 op: GREATER_IFW_I (124)
    if (_slash_7556 <= 0)
    goto L6; // [124] 142
    // SubProg pathinfo pc: 128 op: STARTLINE (58)

    /** filesys.e:1216			dir_name = path[1..slash-1]*/
    // SubProg pathinfo pc: 130 op: MINUS (10)
    _4050 = _slash_7556 - 1;
    // SubProg pathinfo pc: 134 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_dir_name_7559;
    RHS_Slice(_path_7554, 1, _4050);
    // SubProg pathinfo pc: 139 op: STARTLINE (58)

    /** filesys.e:1218			ifdef not UNIX then*/
    // SubProg pathinfo pc: 141 op: NOP1 (159)
L6: // addr: 142 pc: 141 sub: 7552 op: 159
    // SubProg pathinfo pc: 142 op: STARTLINE (58)

    /** filesys.e:1226		if period > 0 then*/
    // SubProg pathinfo pc: 144 op: GREATER_IFW_I (124)
    if (_period_7557 <= 0)
    goto L7; // [144] 188
    // SubProg pathinfo pc: 148 op: STARTLINE (58)

    /** filesys.e:1227			file_name = path[slash+1..period-1]*/
    // SubProg pathinfo pc: 150 op: PLUS1 (93)
    _4053 = _slash_7556 + 1;
    if (_4053 > MAXINT){
        _4053 = NewDouble((eudouble)_4053);
    }
    // SubProg pathinfo pc: 154 op: MINUS (10)
    _4054 = _period_7557 - 1;
    // SubProg pathinfo pc: 158 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_name_7560;
    RHS_Slice(_path_7554, _4053, _4054);
    // SubProg pathinfo pc: 163 op: STARTLINE (58)

    /** filesys.e:1228			file_ext = path[period+1..$]*/
    // SubProg pathinfo pc: 165 op: PLUS1 (93)
    _4056 = _period_7557 + 1;
    if (_4056 > MAXINT){
        _4056 = NewDouble((eudouble)_4056);
    }
    // SubProg pathinfo pc: 169 op: LENGTH (42)
    if (IS_SEQUENCE(_path_7554)){
            _4057 = SEQ_PTR(_path_7554)->length;
    }
    else {
        _4057 = 1;
    }
    // SubProg pathinfo pc: 172 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_ext_7561;
    RHS_Slice(_path_7554, _4056, _4057);
    // SubProg pathinfo pc: 177 op: STARTLINE (58)

    /** filesys.e:1229			file_full = file_name & '.' & file_ext*/
    // SubProg pathinfo pc: 179 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _file_ext_7561;
        concat_list[1] = 46;
        concat_list[2] = _file_name_7560;
        Concat_N((object_ptr)&_file_full_7562, concat_list, 3);
    }
    // SubProg pathinfo pc: 185 op: ELSE (23)
    goto L8; // [185] 210
    // SubProg pathinfo pc: 187 op: NOP1 (159)
L7: // addr: 188 pc: 187 sub: 7552 op: 159
    // SubProg pathinfo pc: 188 op: STARTLINE (58)

    /** filesys.e:1231			file_name = path[slash+1..$]*/
    // SubProg pathinfo pc: 190 op: PLUS1 (93)
    _4060 = _slash_7556 + 1;
    if (_4060 > MAXINT){
        _4060 = NewDouble((eudouble)_4060);
    }
    // SubProg pathinfo pc: 194 op: LENGTH (42)
    if (IS_SEQUENCE(_path_7554)){
            _4061 = SEQ_PTR(_path_7554)->length;
    }
    else {
        _4061 = 1;
    }
    // SubProg pathinfo pc: 197 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_name_7560;
    RHS_Slice(_path_7554, _4060, _4061);
    // SubProg pathinfo pc: 202 op: STARTLINE (58)

    /** filesys.e:1232			file_full = file_name*/
    // SubProg pathinfo pc: 204 op: ASSIGN (18)
    RefDS(_file_name_7560);
    DeRef(_file_full_7562);
    _file_full_7562 = _file_name_7560;
    // SubProg pathinfo pc: 207 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 209 op: NOP1 (159)
L8: // addr: 210 pc: 209 sub: 7552 op: 159
    // SubProg pathinfo pc: 210 op: STARTLINE (58)

    /** filesys.e:1235		if std_slash != 0 then*/
    // SubProg pathinfo pc: 212 op: NOTEQ_IFW_I (122)
    if (_std_slash_7555 == 0)
    goto L9; // [212] 278
    // SubProg pathinfo pc: 216 op: STARTLINE (58)

    /** filesys.e:1236			if std_slash < 0 then*/
    // SubProg pathinfo pc: 218 op: LESS_IFW_I (119)
    if (_std_slash_7555 >= 0)
    goto LA; // [218] 254
    // SubProg pathinfo pc: 222 op: STARTLINE (58)

    /** filesys.e:1237				std_slash = SLASH*/
    // SubProg pathinfo pc: 224 op: ASSIGN_I (113)
    _std_slash_7555 = 47;
    // SubProg pathinfo pc: 227 op: STARTLINE (58)

    /** filesys.e:1238				ifdef UNIX then*/
    // SubProg pathinfo pc: 229 op: STARTLINE (58)

    /** filesys.e:1239				sequence from_slash = "\\"*/
    // SubProg pathinfo pc: 231 op: ASSIGN (18)
    RefDS(_1500);
    DeRefi(_from_slash_7595);
    _from_slash_7595 = _1500;
    // SubProg pathinfo pc: 234 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 236 op: STARTLINE (58)

    /** filesys.e:1243				dir_name = search:match_replace(from_slash, dir_name, std_slash)*/
    // SubProg pathinfo pc: 238 op: PRIVATE_INIT_CHECK (30)
    // SubProg pathinfo pc: 240 op: PROC (27)
    RefDS(_from_slash_7595);
    RefDS(_dir_name_7559);
    _0 = _dir_name_7559;
    _dir_name_7559 = _17match_replace(_from_slash_7595, _dir_name_7559, 47, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 247 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 249 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var from_slash_7595
    DeRefDSi(_from_slash_7595);
    _from_slash_7595 = NOVALUE;
    // SubProg pathinfo pc: 251 op: ELSE (23)
    goto LB; // [251] 277
    // SubProg pathinfo pc: 253 op: NOP1 (159)
LA: // addr: 254 pc: 253 sub: 7552 op: 159
    // SubProg pathinfo pc: 254 op: STARTLINE (58)

    /** filesys.e:1245				dir_name = search:match_replace("\\", dir_name, std_slash)*/
    // SubProg pathinfo pc: 256 op: PROC (27)
    RefDS(_1500);
    RefDS(_dir_name_7559);
    _0 = _dir_name_7559;
    _dir_name_7559 = _17match_replace(_1500, _dir_name_7559, _std_slash_7555, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 263 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 265 op: STARTLINE (58)

    /** filesys.e:1246				dir_name = search:match_replace("/", dir_name, std_slash)*/
    // SubProg pathinfo pc: 267 op: PROC (27)
    RefDS(_3823);
    RefDS(_dir_name_7559);
    _0 = _dir_name_7559;
    _dir_name_7559 = _17match_replace(_3823, _dir_name_7559, _std_slash_7555, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 274 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 276 op: NOP1 (159)
LB: // addr: 277 pc: 276 sub: 7552 op: 159
    // SubProg pathinfo pc: 277 op: NOP1 (159)
L9: // addr: 278 pc: 277 sub: 7552 op: 159
    // SubProg pathinfo pc: 278 op: STARTLINE (58)

    /** filesys.e:1250		return {dir_name, file_full, file_name, file_ext, drive_id }*/
    // SubProg pathinfo pc: 280 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_dir_name_7559);
    ((intptr_t*)_2)[1] = _dir_name_7559;
    RefDS(_file_full_7562);
    ((intptr_t*)_2)[2] = _file_full_7562;
    RefDS(_file_name_7560);
    ((intptr_t*)_2)[3] = _file_name_7560;
    RefDS(_file_ext_7561);
    ((intptr_t*)_2)[4] = _file_ext_7561;
    RefDS(_drive_id_7563);
    ((intptr_t*)_2)[5] = _drive_id_7563;
    _4068 = MAKE_SEQ(_1);
    // SubProg pathinfo pc: 288 op: RETURNF (28)

// Exiting block BLOCK: pathinfo

// block var path_7554
    DeRefDS(_path_7554);

// block var std_slash_7555

// block var slash_7556

// block var period_7557

// block var ch_7558

// block var dir_name_7559
    DeRefDS(_dir_name_7559);

// block var file_name_7560
    DeRefDS(_file_name_7560);

// block var file_ext_7561
    DeRefDS(_file_ext_7561);

// block var file_full_7562
    DeRefDS(_file_full_7562);

// block var drive_id_7563
    DeRefDS(_drive_id_7563);
    DeRef(_4060);
    _4060 = NOVALUE;
    DeRef(_4050);
    _4050 = NOVALUE;
    DeRef(_4045);
    _4045 = NOVALUE;
    DeRef(_4053);
    _4053 = NOVALUE;
    DeRef(_4056);
    _4056 = NOVALUE;
    DeRef(_4054);
    _4054 = NOVALUE;
    return _4068;
    // SubProg pathinfo pc: 292 op: BADRETURNF (43)
    ;
}


object _18dirname(object _path_7603, object _pcd_7604)
{
    object _data_7605 = NOVALUE;
    object _4073 = NOVALUE; // 7612 4073
// skipping _4072  name type: 0
// skipping _4071  name type: 0
// skipping _4070  name type: 0
// skipping _4069  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg dirname pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg dirname pc: 3 op: INTEGER_CHECK (96)
    // SubProg dirname pc: 5 op: STARTLINE (58)

    /** filesys.e:1279		data = pathinfo(path)*/
    // SubProg dirname pc: 7 op: PROC (27)
    RefDS(_path_7603);
    _0 = _data_7605;
    _data_7605 = _18pathinfo(_path_7603, 0);
    DeRef(_0);
    // SubProg dirname pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg dirname pc: 14 op: STARTLINE (58)

    /** filesys.e:1280		if pcd then*/
    // SubProg dirname pc: 16 op: IF (20)
    // SubProg dirname pc: 40 op: STARTLINE (58)

    /** filesys.e:1285		return data[1]*/
    // SubProg dirname pc: 42 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_7605);
    _4073 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg dirname pc: 46 op: RETURNF (28)
    Ref(_4073);

// Exiting block BLOCK: dirname

// block var path_7603
    DeRefDS(_path_7603);

// block var pcd_7604

// block var data_7605
    DeRefDS(_data_7605);
    return _4073;
    // SubProg dirname pc: 50 op: BADRETURNF (43)
    ;
}


object _18filebase(object _path_7632)
{
    object _data_7633 = NOVALUE;
    object _4082 = NOVALUE; // 7635 4082
// skipping _4081  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filebase pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg filebase pc: 3 op: STARTLINE (58)

    /** filesys.e:1375		data = pathinfo(path)*/
    // SubProg filebase pc: 5 op: PROC (27)
    RefDS(_path_7632);
    _0 = _data_7633;
    _data_7633 = _18pathinfo(_path_7632, 0);
    DeRef(_0);
    // SubProg filebase pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg filebase pc: 12 op: STARTLINE (58)

    /** filesys.e:1377		return data[3]*/
    // SubProg filebase pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_7633);
    _4082 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg filebase pc: 18 op: RETURNF (28)
    Ref(_4082);

// Exiting block BLOCK: filebase

// block var path_7632
    DeRefDS(_path_7632);

// block var data_7633
    DeRefDS(_data_7633);
    return _4082;
    // SubProg filebase pc: 22 op: BADRETURNF (43)
    ;
}


object _18fileext(object _path_7638)
{
    object _data_7639 = NOVALUE;
    object _4084 = NOVALUE; // 7641 4084
// skipping _4083  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fileext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg fileext pc: 3 op: STARTLINE (58)

    /** filesys.e:1403		data = pathinfo(path)*/
    // SubProg fileext pc: 5 op: PROC (27)
    RefDS(_path_7638);
    _0 = _data_7639;
    _data_7639 = _18pathinfo(_path_7638, 0);
    DeRef(_0);
    // SubProg fileext pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg fileext pc: 12 op: STARTLINE (58)

    /** filesys.e:1404		return data[4]*/
    // SubProg fileext pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_7639);
    _4084 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg fileext pc: 18 op: RETURNF (28)
    Ref(_4084);

// Exiting block BLOCK: fileext

// block var path_7638
    DeRefDS(_path_7638);

// block var data_7639
    DeRefDS(_data_7639);
    return _4084;
    // SubProg fileext pc: 22 op: BADRETURNF (43)
    ;
}


object _18defaultext(object _path_7650, object _defext_7651)
{
    object _4099 = NOVALUE; // 7672 4099
// skipping _4098  name type: 0
// skipping _4097  name type: 0
    object _4096 = NOVALUE; // 7669 4096
// skipping _4095  name type: 0
    object _4094 = NOVALUE; // 7665 4094
    object _4093 = NOVALUE; // 7663 4093
    object _4092 = NOVALUE; // 7662 4092
// skipping _4091  name type: 0
    object _4090 = NOVALUE; // 7659 4090
    object _4089 = NOVALUE; // 7657 4089
// skipping _4088  name type: 0
    object _4087 = NOVALUE; // 7653 4087
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defaultext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg defaultext pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg defaultext pc: 5 op: STARTLINE (58)

    /** filesys.e:1455		if length(defext) = 0 then*/
    // SubProg defaultext pc: 7 op: LENGTH (42)
    // Known sequence length:
    _4087 = 3;
    // SubProg defaultext pc: 10 op: EQUALS_IFW_I (121)
    // SubProg defaultext pc: 21 op: STARTLINE (58)

    /** filesys.e:1459		for i = length(path) to 1 by -1 do*/
    // SubProg defaultext pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_path_7650)){
            _4089 = SEQ_PTR(_path_7650)->length;
    }
    else {
        _4089 = 1;
    }
    // SubProg defaultext pc: 26 op: FOR_I (125)
    {
        object _i_7656;
        _i_7656 = _4089;
L1: // addr: 33 pc: 26 sub: 7648 op: 125
        if (_i_7656 < 1){
            goto L2; // [26] 95
        }
        // SubProg defaultext pc: 33 op: STARTLINE (58)

        /** filesys.e:1460			if path[i] = '.' then*/
        // SubProg defaultext pc: 35 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_path_7650);
        _4090 = (object)*(((s1_ptr)_2)->base + _i_7656);
        // SubProg defaultext pc: 39 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _4090, 46)){
            _4090 = NOVALUE;
            goto L3; // [39] 50
        }
        _4090 = NOVALUE;
        // SubProg defaultext pc: 43 op: STARTLINE (58)

        /** filesys.e:1462				return path*/
        // SubProg defaultext pc: 45 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var defext_7651
        DeRefDSi(_defext_7651);
        return _path_7650;
        // SubProg defaultext pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 7648 op: 159
        // SubProg defaultext pc: 50 op: STARTLINE (58)

        /** filesys.e:1464			if find(path[i], SLASHES) then*/
        // SubProg defaultext pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_path_7650);
        _4092 = (object)*(((s1_ptr)_2)->base + _i_7656);
        // SubProg defaultext pc: 56 op: FIND_FROM (176)
        _4093 = find_from(_4092, _18SLASHES_7150, 1);
        _4092 = NOVALUE;
        // SubProg defaultext pc: 61 op: IF (20)
        if (_4093 == 0)
        {
            _4093 = NOVALUE;
            goto L4; // [61] 88
        }
        else{
            _4093 = NOVALUE;
        }
        // SubProg defaultext pc: 64 op: STARTLINE (58)

        /** filesys.e:1465				if i = length(path) then*/
        // SubProg defaultext pc: 66 op: LENGTH (42)
        if (IS_SEQUENCE(_path_7650)){
                _4094 = SEQ_PTR(_path_7650)->length;
        }
        else {
            _4094 = 1;
        }
        // SubProg defaultext pc: 69 op: EQUALS_IFW_I (121)
        if (_i_7656 != _4094)
        goto L2; // [69] 95
        // SubProg defaultext pc: 73 op: STARTLINE (58)

        /** filesys.e:1467					return path*/
        // SubProg defaultext pc: 75 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var defext_7651
        DeRefDSi(_defext_7651);
        return _path_7650;
        // SubProg defaultext pc: 79 op: ELSE (23)
        goto L5; // [79] 87
        // SubProg defaultext pc: 81 op: NOP1 (159)
        // SubProg defaultext pc: 82 op: STARTLINE (58)

        /** filesys.e:1470					exit*/
        // SubProg defaultext pc: 84 op: EXIT (61)
        goto L2; // [84] 95
        // SubProg defaultext pc: 86 op: NOP1 (159)
L5: // addr: 87 pc: 86 sub: 7648 op: 159
        // SubProg defaultext pc: 87 op: NOP1 (159)
L4: // addr: 88 pc: 87 sub: 7648 op: 159
        // SubProg defaultext pc: 88 op: STARTLINE (58)

        /** filesys.e:1473		end for*/
        // SubProg defaultext pc: 90 op: ENDFOR_GENERAL (39)
        _i_7656 = _i_7656 + -1;
        goto L1; // [90] 33
L2: // addr: 95 pc: 90 sub: 7648 op: 39
        ;
    }
    // SubProg defaultext pc: 95 op: STARTLINE (58)

    /** filesys.e:1475		if defext[1] != '.' then*/
    // SubProg defaultext pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defext_7651);
    _4096 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg defaultext pc: 101 op: NOTEQ_IFW (105)
    if (_4096 == 46)
    goto L6; // [101] 112
    // SubProg defaultext pc: 105 op: STARTLINE (58)

    /** filesys.e:1476			path &= '.'*/
    // SubProg defaultext pc: 107 op: CONCAT (15)
    Append(&_path_7650, _path_7650, 46);
    // SubProg defaultext pc: 111 op: NOP1 (159)
L6: // addr: 112 pc: 111 sub: 7648 op: 159
    // SubProg defaultext pc: 112 op: STARTLINE (58)

    /** filesys.e:1479		return path & defext*/
    // SubProg defaultext pc: 114 op: CONCAT (15)
    Concat((object_ptr)&_4099, _path_7650, _defext_7651);
    // SubProg defaultext pc: 118 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var path_7650
    DeRefDS(_path_7650);

// block var defext_7651
    DeRefDSi(_defext_7651);
    _4096 = NOVALUE;
    return _4099;
    // SubProg defaultext pc: 122 op: BADRETURNF (43)
    ;
}


object _18absolute_path(object _filename_7675)
{
    object _4103 = NOVALUE; // 7681 4103
    object _4102 = NOVALUE; // 7680 4102
// skipping _4101  name type: 0
    object _4100 = NOVALUE; // 7677 4100
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg absolute_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg absolute_path pc: 3 op: STARTLINE (58)

    /** filesys.e:1514		if length(filename) = 0 then*/
    // SubProg absolute_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_7675)){
            _4100 = SEQ_PTR(_filename_7675)->length;
    }
    else {
        _4100 = 1;
    }
    // SubProg absolute_path pc: 8 op: EQUALS_IFW_I (121)
    if (_4100 != 0)
    goto L1; // [8] 19
    // SubProg absolute_path pc: 12 op: STARTLINE (58)

    /** filesys.e:1515			return 0*/
    // SubProg absolute_path pc: 14 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_7675
    DeRefDS(_filename_7675);
    return 0;
    // SubProg absolute_path pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 7673 op: 159
    // SubProg absolute_path pc: 19 op: STARTLINE (58)

    /** filesys.e:1518		if eu:find(filename[1], SLASHES) then*/
    // SubProg absolute_path pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_filename_7675);
    _4102 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg absolute_path pc: 25 op: FIND_FROM (176)
    _4103 = find_from(_4102, _18SLASHES_7150, 1);
    _4102 = NOVALUE;
    // SubProg absolute_path pc: 30 op: IF (20)
    if (_4103 == 0)
    {
        _4103 = NOVALUE;
        goto L2; // [30] 40
    }
    else{
        _4103 = NOVALUE;
    }
    // SubProg absolute_path pc: 33 op: STARTLINE (58)

    /** filesys.e:1519			return 1*/
    // SubProg absolute_path pc: 35 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_7675
    DeRefDS(_filename_7675);
    return 1;
    // SubProg absolute_path pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 7673 op: 159
    // SubProg absolute_path pc: 40 op: STARTLINE (58)

    /** filesys.e:1522		ifdef WINDOWS then*/
    // SubProg absolute_path pc: 42 op: STARTLINE (58)

    /** filesys.e:1539		return 0*/
    // SubProg absolute_path pc: 44 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_7675
    DeRefDS(_filename_7675);
    return 0;
    // SubProg absolute_path pc: 48 op: BADRETURNF (43)
    ;
}


object _18canonical_path(object _path_in_7695, object _directory_given_7696, object _case_flags_7697)
{
    object _lPath_7698 = NOVALUE;
    object _lPosA_7699 = NOVALUE;
    object _lPosB_7700 = NOVALUE;
    object _lLevel_7701 = NOVALUE;
    object _lHome_7702 = NOVALUE;
    object _wildcard_suffix_7744 = NOVALUE;
    object _first_wildcard_at_7745 = NOVALUE;
    object _last_slash_7748 = NOVALUE;
    object _sl_7801 = NOVALUE;
    object _short_name_7804 = NOVALUE;
    object _correct_name_7807 = NOVALUE;
    object _lower_name_7810 = NOVALUE;
    object _part_7826 = NOVALUE;
    object _list_7830 = NOVALUE;
    object _supplied_name_7833 = NOVALUE;
    object _read_name_7852 = NOVALUE;
    object _read_name_7877 = NOVALUE;
    object _4283 = NOVALUE; // 7930 4283
// skipping _4282  name type: 0
    object _4281 = NOVALUE; // 7927 4281
    object _4280 = NOVALUE; // 7926 4280
    object _4279 = NOVALUE; // 7925 4279
    object _4278 = NOVALUE; // 7924 4278
    object _4277 = NOVALUE; // 7923 4277
// skipping _4276  name type: 0
    object _4275 = NOVALUE; // 7920 4275
    object _4274 = NOVALUE; // 7919 4274
    object _4273 = NOVALUE; // 7918 4273
    object _4272 = NOVALUE; // 7917 4272
    object _4271 = NOVALUE; // 7915 4271
    object _4270 = NOVALUE; // 7914 4270
    object _4269 = NOVALUE; // 7913 4269
    object _4268 = NOVALUE; // 7912 4268
// skipping _4267  name type: 0
    object _4266 = NOVALUE; // 7909 4266
    object _4265 = NOVALUE; // 7908 4265
    object _4264 = NOVALUE; // 7907 4264
    object _4263 = NOVALUE; // 7906 4263
    object _4262 = NOVALUE; // 7905 4262
    object _4261 = NOVALUE; // 7904 4261
    object _4260 = NOVALUE; // 7902 4260
    object _4259 = NOVALUE; // 7901 4259
    object _4258 = NOVALUE; // 7900 4258
// skipping _4257  name type: 0
    object _4256 = NOVALUE; // 7898 4256
    object _4255 = NOVALUE; // 7897 4255
    object _4254 = NOVALUE; // 7896 4254
    object _4253 = NOVALUE; // 7895 4253
    object _4252 = NOVALUE; // 7894 4252
    object _4251 = NOVALUE; // 7893 4251
    object _4250 = NOVALUE; // 7892 4250
    object _4249 = NOVALUE; // 7891 4249
    object _4248 = NOVALUE; // 7890 4248
    object _4247 = NOVALUE; // 7889 4247
    object _4246 = NOVALUE; // 7888 4246
    object _4245 = NOVALUE; // 7887 4245
    object _4244 = NOVALUE; // 7885 4244
    object _4243 = NOVALUE; // 7884 4243
    object _4242 = NOVALUE; // 7882 4242
// skipping _4241  name type: 0
    object _4240 = NOVALUE; // 7878 4240
    object _4239 = NOVALUE; // 7876 4239
    object _4238 = NOVALUE; // 7873 4238
    object _4237 = NOVALUE; // 7872 4237
    object _4236 = NOVALUE; // 7871 4236
// skipping _4235  name type: 0
    object _4234 = NOVALUE; // 7869 4234
    object _4233 = NOVALUE; // 7868 4233
    object _4232 = NOVALUE; // 7867 4232
    object _4231 = NOVALUE; // 7866 4231
    object _4230 = NOVALUE; // 7865 4230
    object _4229 = NOVALUE; // 7864 4229
    object _4228 = NOVALUE; // 7863 4228
    object _4227 = NOVALUE; // 7862 4227
    object _4226 = NOVALUE; // 7861 4226
    object _4225 = NOVALUE; // 7860 4225
    object _4224 = NOVALUE; // 7859 4224
    object _4223 = NOVALUE; // 7858 4223
    object _4222 = NOVALUE; // 7856 4222
// skipping _4221  name type: 0
    object _4220 = NOVALUE; // 7853 4220
    object _4219 = NOVALUE; // 7851 4219
// skipping _4218  name type: 0
    object _4217 = NOVALUE; // 7847 4217
    object _4216 = NOVALUE; // 7846 4216
    object _4215 = NOVALUE; // 7845 4215
    object _4214 = NOVALUE; // 7844 4214
    object _4213 = NOVALUE; // 7841 4213
// skipping _4212  name type: 0
    object _4211 = NOVALUE; // 7838 4211
    object _4210 = NOVALUE; // 7837 4210
    object _4209 = NOVALUE; // 7836 4209
    object _4208 = NOVALUE; // 7835 4208
    object _4207 = NOVALUE; // 7834 4207
// skipping _4206  name type: 0
    object _4205 = NOVALUE; // 7831 4205
// skipping _4204  name type: 0
    object _4203 = NOVALUE; // 7828 4203
    object _4202 = NOVALUE; // 7827 4202
    object _4200 = NOVALUE; // 7824 4200
    object _4199 = NOVALUE; // 7823 4199
// skipping _4198  name type: 0
    object _4197 = NOVALUE; // 7819 4197
    object _4196 = NOVALUE; // 7818 4196
    object _4195 = NOVALUE; // 7817 4195
// skipping _4194  name type: 0
    object _4193 = NOVALUE; // 7815 4193
    object _4192 = NOVALUE; // 7814 4192
// skipping _4191  name type: 0
    object _4190 = NOVALUE; // 7811 4190
// skipping _4189  name type: 0
    object _4188 = NOVALUE; // 7808 4188
// skipping _4187  name type: 0
    object _4186 = NOVALUE; // 7805 4186
// skipping _4185  name type: 0
// skipping _4184  name type: 0
// skipping _4183  name type: 0
// skipping _4182  name type: 0
// skipping _4181  name type: 0
// skipping _4180  name type: 0
    object _4179 = NOVALUE; // 7792 4179
// skipping _4178  name type: 0
// skipping _4177  name type: 0
    object _4176 = NOVALUE; // 7788 4176
    object _4175 = NOVALUE; // 7787 4175
    object _4174 = NOVALUE; // 7786 4174
    object _4173 = NOVALUE; // 7785 4173
// skipping _4172  name type: 0
// skipping _4171  name type: 0
// skipping _4170  name type: 0
// skipping _4169  name type: 0
// skipping _4168  name type: 0
    object _4167 = NOVALUE; // 7777 4167
// skipping _4166  name type: 0
// skipping _4165  name type: 0
// skipping _4164  name type: 0
    object _4163 = NOVALUE; // 7772 4163
    object _4162 = NOVALUE; // 7771 4162
    object _4161 = NOVALUE; // 7770 4161
    object _4160 = NOVALUE; // 7769 4160
    object _4159 = NOVALUE; // 7768 4159
// skipping _4158  name type: 0
    object _4157 = NOVALUE; // 7765 4157
    object _4156 = NOVALUE; // 7764 4156
    object _4155 = NOVALUE; // 7763 4155
    object _4153 = NOVALUE; // 7761 4153
    object _4152 = NOVALUE; // 7760 4152
    object _4151 = NOVALUE; // 7759 4151
    object _4150 = NOVALUE; // 7758 4150
// skipping _4149  name type: 0
    object _4148 = NOVALUE; // 7753 4148
// skipping _4147  name type: 0
    object _4146 = NOVALUE; // 7751 4146
// skipping _4145  name type: 0
// skipping _4144  name type: 0
// skipping _4143  name type: 0
    object _4142 = NOVALUE; // 7742 4142
    object _4141 = NOVALUE; // 7741 4141
// skipping _4140  name type: 0
    object _4139 = NOVALUE; // 7738 4139
    object _4138 = NOVALUE; // 7737 4138
    object _4137 = NOVALUE; // 7736 4137
    object _4136 = NOVALUE; // 7735 4136
    object _4135 = NOVALUE; // 7734 4135
    object _4134 = NOVALUE; // 7733 4134
    object _4133 = NOVALUE; // 7732 4133
// skipping _4132  name type: 0
// skipping _4131  name type: 0
    object _4130 = NOVALUE; // 7728 4130
    object _4129 = NOVALUE; // 7727 4129
// skipping _4126  name type: 0
    object _4124 = NOVALUE; // 7721 4124
    object _4123 = NOVALUE; // 7720 4123
    object _4122 = NOVALUE; // 7719 4122
    object _4121 = NOVALUE; // 7718 4121
    object _4120 = NOVALUE; // 7717 4120
// skipping _4119  name type: 0
    object _4118 = NOVALUE; // 7714 4118
    object _4117 = NOVALUE; // 7713 4117
    object _4116 = NOVALUE; // 7712 4116
    object _4115 = NOVALUE; // 7711 4115
    object _4114 = NOVALUE; // 7710 4114
    object _4113 = NOVALUE; // 7709 4113
    object _4112 = NOVALUE; // 7708 4112
    object _4111 = NOVALUE; // 7707 4111
    object _4110 = NOVALUE; // 7706 4110
    object _4109 = NOVALUE; // 7705 4109
    object _4108 = NOVALUE; // 7704 4108
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg canonical_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 3 op: INTEGER_CHECK (96)
    // SubProg canonical_path pc: 5 op: INTEGER_CHECK (96)
    // SubProg canonical_path pc: 7 op: STARTLINE (58)

    /** filesys.e:1607	    sequence lPath = ""*/
    // SubProg canonical_path pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lPath_7698);
    _lPath_7698 = _5;
    // SubProg canonical_path pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 14 op: STARTLINE (58)

    /** filesys.e:1608	    integer lPosA = -1*/
    // SubProg canonical_path pc: 16 op: ASSIGN_I (113)
    _lPosA_7699 = -1;
    // SubProg canonical_path pc: 19 op: STARTLINE (58)

    /** filesys.e:1609	    integer lPosB = -1*/
    // SubProg canonical_path pc: 21 op: ASSIGN_I (113)
    _lPosB_7700 = -1;
    // SubProg canonical_path pc: 24 op: STARTLINE (58)

    /** filesys.e:1610	    sequence lLevel = ""*/
    // SubProg canonical_path pc: 26 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_lLevel_7701);
    _lLevel_7701 = _5;
    // SubProg canonical_path pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 31 op: STARTLINE (58)

    /** filesys.e:1612	    path_in = path_in*/
    // SubProg canonical_path pc: 33 op: ASSIGN (18)
    RefDS(_path_in_7695);
    DeRefDS(_path_in_7695);
    _path_in_7695 = _path_in_7695;
    // SubProg canonical_path pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 38 op: STARTLINE (58)

    /** filesys.e:1614		ifdef UNIX then*/
    // SubProg canonical_path pc: 40 op: STARTLINE (58)

    /** filesys.e:1615			lPath = path_in*/
    // SubProg canonical_path pc: 42 op: ASSIGN (18)
    RefDS(_path_in_7695);
    DeRefDS(_lPath_7698);
    _lPath_7698 = _path_in_7695;
    // SubProg canonical_path pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 47 op: STARTLINE (58)

    /** filesys.e:1623	    if (length(lPath) > 2 and lPath[1] = '"' and lPath[$] = '"') then*/
    // SubProg canonical_path pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4108 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4108 = 1;
    }
    // SubProg canonical_path pc: 52 op: GREATER (6)
    _4109 = (_4108 > 2);
    _4108 = NOVALUE;
    // SubProg canonical_path pc: 56 op: SC1_AND (141)
    if (_4109 == 0) {
        _4110 = 0;
        goto L1; // [56] 72
    }
    // SubProg canonical_path pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4111 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 64 op: EQUALS (3)
    if (IS_ATOM_INT(_4111)) {
        _4112 = (_4111 == 34);
    }
    else {
        _4112 = binary_op(EQUALS, _4111, 34);
    }
    _4111 = NOVALUE;
    // SubProg canonical_path pc: 68 op: SC2_AND (142)
    if (IS_ATOM_INT(_4112))
    _4110 = (_4112 != 0);
    else
    _4110 = DBL_PTR(_4112)->dbl != 0.0;
    // SubProg canonical_path pc: 71 op: NOP1 (159)
L1: // addr: 72 pc: 71 sub: 7693 op: 159
    // SubProg canonical_path pc: 72 op: SC1_AND (141)
    if (_4110 == 0) {
        DeRef(_4113);
        _4113 = 0;
        goto L2; // [72] 91
    }
    // SubProg canonical_path pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4114 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4114 = 1;
    }
    // SubProg canonical_path pc: 79 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4115 = (object)*(((s1_ptr)_2)->base + _4114);
    // SubProg canonical_path pc: 83 op: EQUALS (3)
    if (IS_ATOM_INT(_4115)) {
        _4116 = (_4115 == 34);
    }
    else {
        _4116 = binary_op(EQUALS, _4115, 34);
    }
    _4115 = NOVALUE;
    // SubProg canonical_path pc: 87 op: SC2_AND (142)
    if (IS_ATOM_INT(_4116))
    _4113 = (_4116 != 0);
    else
    _4113 = DBL_PTR(_4116)->dbl != 0.0;
    // SubProg canonical_path pc: 90 op: NOP1 (159)
L2: // addr: 91 pc: 90 sub: 7693 op: 159
    // SubProg canonical_path pc: 91 op: IF (20)
    if (_4113 == 0)
    {
        _4113 = NOVALUE;
        goto L3; // [91] 109
    }
    else{
        _4113 = NOVALUE;
    }
    // SubProg canonical_path pc: 94 op: STARTLINE (58)

    /** filesys.e:1624	        lPath = lPath[2..$-1]*/
    // SubProg canonical_path pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4117 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4117 = 1;
    }
    // SubProg canonical_path pc: 99 op: MINUS (10)
    _4118 = _4117 - 1;
    _4117 = NOVALUE;
    // SubProg canonical_path pc: 103 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_lPath_7698;
    RHS_Slice(_lPath_7698, 2, _4118);
    // SubProg canonical_path pc: 108 op: NOP1 (159)
L3: // addr: 109 pc: 108 sub: 7693 op: 159
    // SubProg canonical_path pc: 109 op: STARTLINE (58)

    /** filesys.e:1628	    if (length(lPath) > 0 and lPath[1] = '~') then*/
    // SubProg canonical_path pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4120 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4120 = 1;
    }
    // SubProg canonical_path pc: 114 op: GREATER (6)
    _4121 = (_4120 > 0);
    _4120 = NOVALUE;
    // SubProg canonical_path pc: 118 op: SC1_AND (141)
    if (_4121 == 0) {
        DeRef(_4122);
        _4122 = 0;
        goto L4; // [118] 134
    }
    // SubProg canonical_path pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4123 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 126 op: EQUALS (3)
    if (IS_ATOM_INT(_4123)) {
        _4124 = (_4123 == 126);
    }
    else {
        _4124 = binary_op(EQUALS, _4123, 126);
    }
    _4123 = NOVALUE;
    // SubProg canonical_path pc: 130 op: SC2_AND (142)
    if (IS_ATOM_INT(_4124))
    _4122 = (_4124 != 0);
    else
    _4122 = DBL_PTR(_4124)->dbl != 0.0;
    // SubProg canonical_path pc: 133 op: NOP1 (159)
L4: // addr: 134 pc: 133 sub: 7693 op: 159
    // SubProg canonical_path pc: 134 op: IF (20)
    if (_4122 == 0)
    {
        _4122 = NOVALUE;
        goto L5; // [134] 222
    }
    else{
        _4122 = NOVALUE;
    }
    // SubProg canonical_path pc: 137 op: STARTLINE (58)

    /** filesys.e:1630			lHome = getenv("HOME")*/
    // SubProg canonical_path pc: 139 op: GETENV (91)
    DeRefi(_lHome_7702);
    _lHome_7702 = EGetEnv(_4125);
    // SubProg canonical_path pc: 142 op: STARTLINE (58)

    /** filesys.e:1631			ifdef WINDOWS then*/
    // SubProg canonical_path pc: 144 op: STARTLINE (58)

    /** filesys.e:1637			if lHome[$] != SLASH then*/
    // SubProg canonical_path pc: 146 op: LENGTH (42)
    if (IS_SEQUENCE(_lHome_7702)){
            _4129 = SEQ_PTR(_lHome_7702)->length;
    }
    else {
        _4129 = 1;
    }
    // SubProg canonical_path pc: 149 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_lHome_7702);
    _4130 = (object)*(((s1_ptr)_2)->base + _4129);
    // SubProg canonical_path pc: 153 op: NOTEQ_IFW (105)
    if (_4130 == 47)
    goto L6; // [153] 164
    // SubProg canonical_path pc: 157 op: STARTLINE (58)

    /** filesys.e:1638				lHome &= SLASH*/
    // SubProg canonical_path pc: 159 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_7702) && IS_ATOM(47)) {
        Append(&_lHome_7702, _lHome_7702, 47);
    }
    else if (IS_ATOM(_lHome_7702) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_lHome_7702, _lHome_7702, 47);
    }
    // SubProg canonical_path pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 7693 op: 159
    // SubProg canonical_path pc: 164 op: STARTLINE (58)

    /** filesys.e:1641			if length(lPath) > 1 and lPath[2] = SLASH then*/
    // SubProg canonical_path pc: 166 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4133 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4133 = 1;
    }
    // SubProg canonical_path pc: 169 op: GREATER (6)
    _4134 = (_4133 > 1);
    _4133 = NOVALUE;
    // SubProg canonical_path pc: 173 op: SC1_AND_IF (146)
    if (_4134 == 0) {
        goto L7; // [173] 206
    }
    // SubProg canonical_path pc: 177 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4136 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg canonical_path pc: 181 op: EQUALS (3)
    if (IS_ATOM_INT(_4136)) {
        _4137 = (_4136 == 47);
    }
    else {
        _4137 = binary_op(EQUALS, _4136, 47);
    }
    _4136 = NOVALUE;
    // SubProg canonical_path pc: 185 op: NOP1 (159)
    // SubProg canonical_path pc: 186 op: IF (20)
    if (_4137 == 0) {
        DeRef(_4137);
        _4137 = NOVALUE;
        goto L7; // [186] 206
    }
    else {
        if (!IS_ATOM_INT(_4137) && DBL_PTR(_4137)->dbl == 0.0){
            DeRef(_4137);
            _4137 = NOVALUE;
            goto L7; // [186] 206
        }
        DeRef(_4137);
        _4137 = NOVALUE;
    }
    DeRef(_4137);
    _4137 = NOVALUE;
    // SubProg canonical_path pc: 189 op: STARTLINE (58)

    /** filesys.e:1642				lPath = lHome & lPath[3 .. $]*/
    // SubProg canonical_path pc: 191 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4138 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4138 = 1;
    }
    // SubProg canonical_path pc: 194 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4139;
    RHS_Slice(_lPath_7698, 3, _4138);
    // SubProg canonical_path pc: 199 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_7702) && IS_ATOM(_4139)) {
    }
    else if (IS_ATOM(_lHome_7702) && IS_SEQUENCE(_4139)) {
        Ref(_lHome_7702);
        Prepend(&_lPath_7698, _4139, _lHome_7702);
    }
    else {
        Concat((object_ptr)&_lPath_7698, _lHome_7702, _4139);
    }
    DeRefDS(_4139);
    _4139 = NOVALUE;
    // SubProg canonical_path pc: 203 op: ELSE (23)
    goto L8; // [203] 221
    // SubProg canonical_path pc: 205 op: NOP1 (159)
L7: // addr: 206 pc: 205 sub: 7693 op: 159
    // SubProg canonical_path pc: 206 op: STARTLINE (58)

    /** filesys.e:1644				lPath = lHome & lPath[2 .. $]*/
    // SubProg canonical_path pc: 208 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4141 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4141 = 1;
    }
    // SubProg canonical_path pc: 211 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4142;
    RHS_Slice(_lPath_7698, 2, _4141);
    // SubProg canonical_path pc: 216 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_7702) && IS_ATOM(_4142)) {
    }
    else if (IS_ATOM(_lHome_7702) && IS_SEQUENCE(_4142)) {
        Ref(_lHome_7702);
        Prepend(&_lPath_7698, _4142, _lHome_7702);
    }
    else {
        Concat((object_ptr)&_lPath_7698, _lHome_7702, _4142);
    }
    DeRefDS(_4142);
    _4142 = NOVALUE;
    // SubProg canonical_path pc: 220 op: NOP1 (159)
L8: // addr: 221 pc: 220 sub: 7693 op: 159
    // SubProg canonical_path pc: 221 op: NOP1 (159)
L5: // addr: 222 pc: 221 sub: 7693 op: 159
    // SubProg canonical_path pc: 222 op: STARTLINE (58)

    /** filesys.e:1648		ifdef WINDOWS then*/
    // SubProg canonical_path pc: 224 op: STARTLINE (58)

    /** filesys.e:1658		sequence wildcard_suffix*/
    // SubProg canonical_path pc: 226 op: STARTLINE (58)

    /** filesys.e:1659		integer first_wildcard_at = find_first_wildcard( lPath )*/
    // SubProg canonical_path pc: 228 op: PROC (27)
    RefDS(_lPath_7698);
    _first_wildcard_at_7745 = _18find_first_wildcard(_lPath_7698, 1);
    // SubProg canonical_path pc: 233 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_7745)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_7745)->dbl);
        DeRefDS(_first_wildcard_at_7745);
        _first_wildcard_at_7745 = _1;
    }
    // SubProg canonical_path pc: 235 op: STARTLINE (58)

    /** filesys.e:1660		if first_wildcard_at then*/
    // SubProg canonical_path pc: 237 op: IF (20)
    if (_first_wildcard_at_7745 == 0)
    {
        goto L9; // [237] 298
    }
    else{
    }
    // SubProg canonical_path pc: 240 op: STARTLINE (58)

    /** filesys.e:1661			integer last_slash = search:rfind( SLASH, lPath, first_wildcard_at )*/
    // SubProg canonical_path pc: 242 op: PROC (27)
    RefDS(_lPath_7698);
    _last_slash_7748 = _17rfind(47, _lPath_7698, _first_wildcard_at_7745);
    // SubProg canonical_path pc: 248 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_last_slash_7748)) {
        _1 = (object)(DBL_PTR(_last_slash_7748)->dbl);
        DeRefDS(_last_slash_7748);
        _last_slash_7748 = _1;
    }
    // SubProg canonical_path pc: 250 op: STARTLINE (58)

    /** filesys.e:1662			if last_slash then*/
    // SubProg canonical_path pc: 252 op: IF (20)
    if (_last_slash_7748 == 0)
    {
        goto LA; // [252] 278
    }
    else{
    }
    // SubProg canonical_path pc: 255 op: STARTLINE (58)

    /** filesys.e:1663				wildcard_suffix = lPath[last_slash..$]*/
    // SubProg canonical_path pc: 257 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4146 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4146 = 1;
    }
    // SubProg canonical_path pc: 260 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_wildcard_suffix_7744;
    RHS_Slice(_lPath_7698, _last_slash_7748, _4146);
    // SubProg canonical_path pc: 265 op: STARTLINE (58)

    /** filesys.e:1664				lPath = remove( lPath, last_slash, length( lPath ) )*/
    // SubProg canonical_path pc: 267 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4148 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4148 = 1;
    }
    // SubProg canonical_path pc: 270 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_7698);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_last_slash_7748)) ? _last_slash_7748 : (object)(DBL_PTR(_last_slash_7748)->dbl);
        int stop = (IS_ATOM_INT(_4148)) ? _4148 : (object)(DBL_PTR(_4148)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_7698), start, &_lPath_7698 );
            }
            else Tail(SEQ_PTR(_lPath_7698), stop+1, &_lPath_7698);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_7698), start, &_lPath_7698);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_7698 = Remove_elements(start, stop, (SEQ_PTR(_lPath_7698)->ref == 1));
        }
    }
    _4148 = NOVALUE;
    // SubProg canonical_path pc: 275 op: ELSE (23)
    goto LB; // [275] 293
    // SubProg canonical_path pc: 277 op: NOP1 (159)
LA: // addr: 278 pc: 277 sub: 7693 op: 159
    // SubProg canonical_path pc: 278 op: STARTLINE (58)

    /** filesys.e:1666				wildcard_suffix = lPath*/
    // SubProg canonical_path pc: 280 op: ASSIGN (18)
    RefDS(_lPath_7698);
    DeRef(_wildcard_suffix_7744);
    _wildcard_suffix_7744 = _lPath_7698;
    // SubProg canonical_path pc: 283 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 285 op: STARTLINE (58)

    /** filesys.e:1667				lPath = ""*/
    // SubProg canonical_path pc: 287 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_lPath_7698);
    _lPath_7698 = _5;
    // SubProg canonical_path pc: 290 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 292 op: NOP1 (159)
LB: // addr: 293 pc: 292 sub: 7693 op: 159
    // SubProg canonical_path pc: 293 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var last_slash_7748
    // SubProg canonical_path pc: 295 op: ELSE (23)
    goto LC; // [295] 306
    // SubProg canonical_path pc: 297 op: NOP1 (159)
L9: // addr: 298 pc: 297 sub: 7693 op: 159
    // SubProg canonical_path pc: 298 op: STARTLINE (58)

    /** filesys.e:1670			wildcard_suffix = ""*/
    // SubProg canonical_path pc: 300 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_wildcard_suffix_7744);
    _wildcard_suffix_7744 = _5;
    // SubProg canonical_path pc: 303 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 305 op: NOP1 (159)
LC: // addr: 306 pc: 305 sub: 7693 op: 159
    // SubProg canonical_path pc: 306 op: STARTLINE (58)

    /** filesys.e:1674		if ((length(lPath) = 0) or not find(lPath[1], "/\\")) then*/
    // SubProg canonical_path pc: 308 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4150 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4150 = 1;
    }
    // SubProg canonical_path pc: 311 op: EQUALS (3)
    _4151 = (_4150 == 0);
    _4150 = NOVALUE;
    // SubProg canonical_path pc: 315 op: SC1_OR (143)
    if (_4151 != 0) {
        DeRef(_4152);
        _4152 = 1;
        goto LD; // [315] 335
    }
    // SubProg canonical_path pc: 319 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4153 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 323 op: FIND_FROM (176)
    _4155 = find_from(_4153, _4154, 1);
    _4153 = NOVALUE;
    // SubProg canonical_path pc: 328 op: NOT (7)
    _4156 = (_4155 == 0);
    _4155 = NOVALUE;
    // SubProg canonical_path pc: 331 op: SC2_OR (144)
    _4152 = (_4156 != 0);
    // SubProg canonical_path pc: 334 op: NOP1 (159)
LD: // addr: 335 pc: 334 sub: 7693 op: 159
    // SubProg canonical_path pc: 335 op: IF (20)
    if (_4152 == 0)
    {
        _4152 = NOVALUE;
        goto LE; // [335] 351
    }
    else{
        _4152 = NOVALUE;
    }
    // SubProg canonical_path pc: 338 op: STARTLINE (58)

    /** filesys.e:1675			ifdef UNIX then*/
    // SubProg canonical_path pc: 340 op: STARTLINE (58)

    /** filesys.e:1676				lPath = curdir() & lPath*/
    // SubProg canonical_path pc: 342 op: PROC (27)
    _4157 = _18curdir(0);
    // SubProg canonical_path pc: 346 op: CONCAT (15)
    if (IS_SEQUENCE(_4157) && IS_ATOM(_lPath_7698)) {
    }
    else if (IS_ATOM(_4157) && IS_SEQUENCE(_lPath_7698)) {
        Ref(_4157);
        Prepend(&_lPath_7698, _lPath_7698, _4157);
    }
    else {
        Concat((object_ptr)&_lPath_7698, _4157, _lPath_7698);
        DeRef(_4157);
        _4157 = NOVALUE;
    }
    DeRef(_4157);
    _4157 = NOVALUE;
    // SubProg canonical_path pc: 350 op: NOP1 (159)
LE: // addr: 351 pc: 350 sub: 7693 op: 159
    // SubProg canonical_path pc: 351 op: STARTLINE (58)

    /** filesys.e:1694		if ((directory_given != 0) and (lPath[$] != SLASH) ) then*/
    // SubProg canonical_path pc: 353 op: NOTEQ (4)
    _4159 = (_directory_given_7696 != 0);
    // SubProg canonical_path pc: 357 op: SC1_AND (141)
    if (_4159 == 0) {
        DeRef(_4160);
        _4160 = 0;
        goto LF; // [357] 376
    }
    // SubProg canonical_path pc: 361 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4161 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4161 = 1;
    }
    // SubProg canonical_path pc: 364 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4162 = (object)*(((s1_ptr)_2)->base + _4161);
    // SubProg canonical_path pc: 368 op: NOTEQ (4)
    if (IS_ATOM_INT(_4162)) {
        _4163 = (_4162 != 47);
    }
    else {
        _4163 = binary_op(NOTEQ, _4162, 47);
    }
    _4162 = NOVALUE;
    // SubProg canonical_path pc: 372 op: SC2_AND (142)
    if (IS_ATOM_INT(_4163))
    _4160 = (_4163 != 0);
    else
    _4160 = DBL_PTR(_4163)->dbl != 0.0;
    // SubProg canonical_path pc: 375 op: NOP1 (159)
LF: // addr: 376 pc: 375 sub: 7693 op: 159
    // SubProg canonical_path pc: 376 op: IF (20)
    if (_4160 == 0)
    {
        _4160 = NOVALUE;
        goto L10; // [376] 386
    }
    else{
        _4160 = NOVALUE;
    }
    // SubProg canonical_path pc: 379 op: STARTLINE (58)

    /** filesys.e:1695			lPath &= SLASH*/
    // SubProg canonical_path pc: 381 op: CONCAT (15)
    Append(&_lPath_7698, _lPath_7698, 47);
    // SubProg canonical_path pc: 385 op: NOP1 (159)
L10: // addr: 386 pc: 385 sub: 7693 op: 159
    // SubProg canonical_path pc: 386 op: STARTLINE (58)

    /** filesys.e:1699		lLevel = SLASH & '.' & SLASH*/
    // SubProg canonical_path pc: 388 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = 46;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_7701, concat_list, 3);
    }
    // SubProg canonical_path pc: 394 op: STARTLINE (58)

    /** filesys.e:1700		lPosA = 1*/
    // SubProg canonical_path pc: 396 op: ASSIGN_I (113)
    _lPosA_7699 = 1;
    // SubProg canonical_path pc: 399 op: STARTLINE (58)

    /** filesys.e:1701		while( lPosA != 0 ) with entry do*/
    // SubProg canonical_path pc: 401 op: ELSE (23)
    goto L11; // [401] 422
    // SubProg canonical_path pc: 403 op: NOPWHILE (158)
L12: // addr: 404 pc: 403 sub: 7693 op: 158
    // SubProg canonical_path pc: 404 op: NOTEQ_IFW_I (122)
    if (_lPosA_7699 == 0)
    goto L13; // [404] 434
    // SubProg canonical_path pc: 408 op: STARTLINE (58)

    /** filesys.e:1702			lPath = eu:remove(lPath, lPosA, lPosA + 1)*/
    // SubProg canonical_path pc: 410 op: PLUS1 (93)
    _4167 = _lPosA_7699 + 1;
    if (_4167 > MAXINT){
        _4167 = NewDouble((eudouble)_4167);
    }
    // SubProg canonical_path pc: 414 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_7698);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosA_7699)) ? _lPosA_7699 : (object)(DBL_PTR(_lPosA_7699)->dbl);
        int stop = (IS_ATOM_INT(_4167)) ? _4167 : (object)(DBL_PTR(_4167)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_7698), start, &_lPath_7698 );
            }
            else Tail(SEQ_PTR(_lPath_7698), stop+1, &_lPath_7698);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_7698), start, &_lPath_7698);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_7698 = Remove_elements(start, stop, (SEQ_PTR(_lPath_7698)->ref == 1));
        }
    }
    DeRef(_4167);
    _4167 = NOVALUE;
    // SubProg canonical_path pc: 419 op: STARTLINE (58)

    /** filesys.e:1704		  entry*/
    // SubProg canonical_path pc: 421 op: NOP1 (159)
L11: // addr: 422 pc: 421 sub: 7693 op: 159
    // SubProg canonical_path pc: 422 op: STARTLINE (58)

    /** filesys.e:1705			lPosA = match(lLevel, lPath, lPosA )*/
    // SubProg canonical_path pc: 424 op: MATCH_FROM (177)
    _lPosA_7699 = e_match_from(_lLevel_7701, _lPath_7698, _lPosA_7699);
    // SubProg canonical_path pc: 429 op: STARTLINE (58)

    /** filesys.e:1706		end while*/
    // SubProg canonical_path pc: 431 op: ENDWHILE (22)
    goto L12; // [431] 404
    // SubProg canonical_path pc: 433 op: NOP1 (159)
L13: // addr: 434 pc: 433 sub: 7693 op: 159
    // SubProg canonical_path pc: 434 op: STARTLINE (58)

    /** filesys.e:1709		lLevel = SLASH & ".." & SLASH*/
    // SubProg canonical_path pc: 436 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = _3913;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_7701, concat_list, 3);
    }
    // SubProg canonical_path pc: 442 op: STARTLINE (58)

    /** filesys.e:1711		lPosB = 1*/
    // SubProg canonical_path pc: 444 op: ASSIGN_I (113)
    _lPosB_7700 = 1;
    // SubProg canonical_path pc: 447 op: STARTLINE (58)

    /** filesys.e:1712		while( lPosA != 0 ) with entry do*/
    // SubProg canonical_path pc: 449 op: ELSE (23)
    goto L14; // [449] 527
    // SubProg canonical_path pc: 451 op: NOPWHILE (158)
L15: // addr: 452 pc: 451 sub: 7693 op: 158
    // SubProg canonical_path pc: 452 op: NOTEQ_IFW_I (122)
    if (_lPosA_7699 == 0)
    goto L16; // [452] 539
    // SubProg canonical_path pc: 456 op: STARTLINE (58)

    /** filesys.e:1714			lPosB = lPosA-1*/
    // SubProg canonical_path pc: 458 op: MINUS_I (116)
    _lPosB_7700 = _lPosA_7699 - 1;
    // SubProg canonical_path pc: 462 op: STARTLINE (58)

    /** filesys.e:1715			while((lPosB > 0) and (lPath[lPosB] != SLASH)) do*/
    // SubProg canonical_path pc: 464 op: NOP2 (110)
    // SubProg canonical_path pc: 466 op: NOPWHILE (158)
L17: // addr: 467 pc: 466 sub: 7693 op: 158
    // SubProg canonical_path pc: 467 op: GREATER (6)
    _4173 = (_lPosB_7700 > 0);
    // SubProg canonical_path pc: 471 op: SC1_AND (141)
    if (_4173 == 0) {
        DeRef(_4174);
        _4174 = 0;
        goto L18; // [471] 487
    }
    // SubProg canonical_path pc: 475 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4175 = (object)*(((s1_ptr)_2)->base + _lPosB_7700);
    // SubProg canonical_path pc: 479 op: NOTEQ (4)
    if (IS_ATOM_INT(_4175)) {
        _4176 = (_4175 != 47);
    }
    else {
        _4176 = binary_op(NOTEQ, _4175, 47);
    }
    _4175 = NOVALUE;
    // SubProg canonical_path pc: 483 op: SC2_AND (142)
    if (IS_ATOM_INT(_4176))
    _4174 = (_4176 != 0);
    else
    _4174 = DBL_PTR(_4176)->dbl != 0.0;
    // SubProg canonical_path pc: 486 op: NOP1 (159)
L18: // addr: 487 pc: 486 sub: 7693 op: 159
    // SubProg canonical_path pc: 487 op: WHILE (47)
    if (_4174 == 0)
    {
        _4174 = NOVALUE;
        goto L19; // [487] 501
    }
    else{
        _4174 = NOVALUE;
    }
    // SubProg canonical_path pc: 490 op: STARTLINE (58)

    /** filesys.e:1716				lPosB -= 1*/
    // SubProg canonical_path pc: 492 op: MINUS_I (116)
    _lPosB_7700 = _lPosB_7700 - 1;
    // SubProg canonical_path pc: 496 op: STARTLINE (58)

    /** filesys.e:1717			end while*/
    // SubProg canonical_path pc: 498 op: ENDWHILE (22)
    goto L17; // [498] 467
    // SubProg canonical_path pc: 500 op: NOP1 (159)
L19: // addr: 501 pc: 500 sub: 7693 op: 159
    // SubProg canonical_path pc: 501 op: STARTLINE (58)

    /** filesys.e:1718			if (lPosB <= 0) then*/
    // SubProg canonical_path pc: 503 op: LESSEQ_IFW_I (123)
    if (_lPosB_7700 > 0)
    goto L1A; // [503] 513
    // SubProg canonical_path pc: 507 op: STARTLINE (58)

    /** filesys.e:1719				lPosB = 1*/
    // SubProg canonical_path pc: 509 op: ASSIGN_I (113)
    _lPosB_7700 = 1;
    // SubProg canonical_path pc: 512 op: NOP1 (159)
L1A: // addr: 513 pc: 512 sub: 7693 op: 159
    // SubProg canonical_path pc: 513 op: STARTLINE (58)

    /** filesys.e:1721			lPath = eu:remove(lPath, lPosB, lPosA + 2)*/
    // SubProg canonical_path pc: 515 op: PLUS (11)
    _4179 = _lPosA_7699 + 2;
    if ((object)((uintptr_t)_4179 + (uintptr_t)HIGH_BITS) >= 0){
        _4179 = NewDouble((eudouble)_4179);
    }
    // SubProg canonical_path pc: 519 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_7698);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosB_7700)) ? _lPosB_7700 : (object)(DBL_PTR(_lPosB_7700)->dbl);
        int stop = (IS_ATOM_INT(_4179)) ? _4179 : (object)(DBL_PTR(_4179)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_7698), start, &_lPath_7698 );
            }
            else Tail(SEQ_PTR(_lPath_7698), stop+1, &_lPath_7698);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_7698), start, &_lPath_7698);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_7698 = Remove_elements(start, stop, (SEQ_PTR(_lPath_7698)->ref == 1));
        }
    }
    DeRef(_4179);
    _4179 = NOVALUE;
    // SubProg canonical_path pc: 524 op: STARTLINE (58)

    /** filesys.e:1723		  entry*/
    // SubProg canonical_path pc: 526 op: NOP1 (159)
L14: // addr: 527 pc: 526 sub: 7693 op: 159
    // SubProg canonical_path pc: 527 op: STARTLINE (58)

    /** filesys.e:1724			lPosA = match(lLevel, lPath, lPosB )*/
    // SubProg canonical_path pc: 529 op: MATCH_FROM (177)
    _lPosA_7699 = e_match_from(_lLevel_7701, _lPath_7698, _lPosB_7700);
    // SubProg canonical_path pc: 534 op: STARTLINE (58)

    /** filesys.e:1725		end while*/
    // SubProg canonical_path pc: 536 op: ENDWHILE (22)
    goto L15; // [536] 452
    // SubProg canonical_path pc: 538 op: NOP1 (159)
L16: // addr: 539 pc: 538 sub: 7693 op: 159
    // SubProg canonical_path pc: 539 op: STARTLINE (58)

    /** filesys.e:1727		if case_flags = TO_LOWER then*/
    // SubProg canonical_path pc: 541 op: EQUALS_IFW_I (121)
    if (_case_flags_7697 != 1)
    goto L1B; // [541] 556
    // SubProg canonical_path pc: 545 op: STARTLINE (58)

    /** filesys.e:1728			lPath = lower( lPath )*/
    // SubProg canonical_path pc: 547 op: PROC (27)
    RefDS(_lPath_7698);
    _0 = _lPath_7698;
    _lPath_7698 = _15lower(_lPath_7698);
    DeRefDS(_0);
    // SubProg canonical_path pc: 551 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 553 op: ELSE (23)
    goto L1C; // [553] 1153
    // SubProg canonical_path pc: 555 op: NOP1 (159)
L1B: // addr: 556 pc: 555 sub: 7693 op: 159
    // SubProg canonical_path pc: 556 op: STARTLINE (58)

    /** filesys.e:1730		elsif case_flags != AS_IS then*/
    // SubProg canonical_path pc: 558 op: NOTEQ_IFW_I (122)
    if (_case_flags_7697 == 0)
    goto L1D; // [558] 1150
    // SubProg canonical_path pc: 562 op: STARTLINE (58)

    /** filesys.e:1731			sequence sl = find_all(SLASH,lPath) -- split apart lPath*/
    // SubProg canonical_path pc: 564 op: PROC (27)
    RefDS(_lPath_7698);
    _0 = _sl_7801;
    _sl_7801 = _17find_all(47, _lPath_7698, 1);
    DeRef(_0);
    // SubProg canonical_path pc: 570 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 572 op: STARTLINE (58)

    /** filesys.e:1732			integer short_name = and_bits(TO_SHORT,case_flags)=TO_SHORT*/
    // SubProg canonical_path pc: 574 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)4 & (uintptr_t)_case_flags_7697;
         _4186 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 578 op: EQUALS (3)
    if (IS_ATOM_INT(_4186)) {
        _short_name_7804 = (_4186 == 4);
    }
    else {
        _short_name_7804 = (DBL_PTR(_4186)->dbl == (eudouble)4);
    }
    DeRef(_4186);
    _4186 = NOVALUE;
    // SubProg canonical_path pc: 582 op: STARTLINE (58)

    /** filesys.e:1733			integer correct_name = and_bits(case_flags,CORRECT)=CORRECT*/
    // SubProg canonical_path pc: 584 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_case_flags_7697 & (uintptr_t)2;
         _4188 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 588 op: EQUALS (3)
    if (IS_ATOM_INT(_4188)) {
        _correct_name_7807 = (_4188 == 2);
    }
    else {
        _correct_name_7807 = (DBL_PTR(_4188)->dbl == (eudouble)2);
    }
    DeRef(_4188);
    _4188 = NOVALUE;
    // SubProg canonical_path pc: 592 op: STARTLINE (58)

    /** filesys.e:1734			integer lower_name = and_bits(TO_LOWER,case_flags)=TO_LOWER*/
    // SubProg canonical_path pc: 594 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)1 & (uintptr_t)_case_flags_7697;
         _4190 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 598 op: EQUALS (3)
    if (IS_ATOM_INT(_4190)) {
        _lower_name_7810 = (_4190 == 1);
    }
    else {
        _lower_name_7810 = (DBL_PTR(_4190)->dbl == (eudouble)1);
    }
    DeRef(_4190);
    _4190 = NOVALUE;
    // SubProg canonical_path pc: 602 op: STARTLINE (58)

    /** filesys.e:1735			if lPath[$] != SLASH then*/
    // SubProg canonical_path pc: 604 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4192 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4192 = 1;
    }
    // SubProg canonical_path pc: 607 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_7698);
    _4193 = (object)*(((s1_ptr)_2)->base + _4192);
    // SubProg canonical_path pc: 611 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4193, 47)){
        _4193 = NOVALUE;
        goto L1E; // [611] 633
    }
    _4193 = NOVALUE;
    // SubProg canonical_path pc: 615 op: STARTLINE (58)

    /** filesys.e:1736				sl = sl & {length(lPath)+1}*/
    // SubProg canonical_path pc: 617 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4195 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4195 = 1;
    }
    // SubProg canonical_path pc: 620 op: PLUS1 (93)
    _4196 = _4195 + 1;
    _4195 = NOVALUE;
    // SubProg canonical_path pc: 624 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _4196;
    _4197 = MAKE_SEQ(_1);
    _4196 = NOVALUE;
    // SubProg canonical_path pc: 628 op: CONCAT (15)
    Concat((object_ptr)&_sl_7801, _sl_7801, _4197);
    DeRefDS(_4197);
    _4197 = NOVALUE;
    // SubProg canonical_path pc: 632 op: NOP1 (159)
L1E: // addr: 633 pc: 632 sub: 7693 op: 159
    // SubProg canonical_path pc: 633 op: STARTLINE (58)

    /** filesys.e:1739			for i = length(sl)-1 to 1 by -1 label "partloop" do*/
    // SubProg canonical_path pc: 635 op: LENGTH (42)
    if (IS_SEQUENCE(_sl_7801)){
            _4199 = SEQ_PTR(_sl_7801)->length;
    }
    else {
        _4199 = 1;
    }
    // SubProg canonical_path pc: 638 op: MINUS (10)
    _4200 = _4199 - 1;
    _4199 = NOVALUE;
    // SubProg canonical_path pc: 642 op: FOR (21)
    {
        object _i_7822;
        _i_7822 = _4200;
L1F: // addr: 649 pc: 642 sub: 7693 op: 21
        if (_i_7822 < 1){
            goto L20; // [642] 1115
        }
        // SubProg canonical_path pc: 649 op: STARTLINE (58)

        /** filesys.e:1740				ifdef WINDOWS then*/
        // SubProg canonical_path pc: 651 op: STARTLINE (58)

        /** filesys.e:1743					sequence part = lPath[1..sl[i]-1]*/
        // SubProg canonical_path pc: 653 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_7801);
        _4202 = (object)*(((s1_ptr)_2)->base + _i_7822);
        // SubProg canonical_path pc: 657 op: MINUS (10)
        if (IS_ATOM_INT(_4202)) {
            _4203 = _4202 - 1;
        }
        else {
            _4203 = binary_op(MINUS, _4202, 1);
        }
        _4202 = NOVALUE;
        // SubProg canonical_path pc: 661 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_part_7826;
        RHS_Slice(_lPath_7698, 1, _4203);
        // SubProg canonical_path pc: 666 op: STARTLINE (58)

        /** filesys.e:1746				object list = dir( part & SLASH )*/
        // SubProg canonical_path pc: 668 op: PRIVATE_INIT_CHECK (30)
        // SubProg canonical_path pc: 670 op: CONCAT (15)
        Append(&_4205, _part_7826, 47);
        // SubProg canonical_path pc: 674 op: PROC (27)
        _0 = _list_7830;
        _list_7830 = _18dir(_4205);
        DeRef(_0);
        _4205 = NOVALUE;
        // SubProg canonical_path pc: 678 op: STARTLINE (58)

        /** filesys.e:1747				sequence supplied_name = lPath[sl[i]+1..sl[i+1]-1]*/
        // SubProg canonical_path pc: 680 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_7801);
        _4207 = (object)*(((s1_ptr)_2)->base + _i_7822);
        // SubProg canonical_path pc: 684 op: PLUS1 (93)
        if (IS_ATOM_INT(_4207)) {
            _4208 = _4207 + 1;
            if (_4208 > MAXINT){
                _4208 = NewDouble((eudouble)_4208);
            }
        }
        else
        _4208 = binary_op(PLUS, 1, _4207);
        _4207 = NOVALUE;
        // SubProg canonical_path pc: 688 op: PLUS1 (93)
        _4209 = _i_7822 + 1;
        // SubProg canonical_path pc: 692 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_7801);
        _4210 = (object)*(((s1_ptr)_2)->base + _4209);
        // SubProg canonical_path pc: 696 op: MINUS (10)
        if (IS_ATOM_INT(_4210)) {
            _4211 = _4210 - 1;
        }
        else {
            _4211 = binary_op(MINUS, _4210, 1);
        }
        _4210 = NOVALUE;
        // SubProg canonical_path pc: 700 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_supplied_name_7833;
        RHS_Slice(_lPath_7698, _4208, _4211);
        // SubProg canonical_path pc: 705 op: STARTLINE (58)

        /** filesys.e:1749				if atom(list) then*/
        // SubProg canonical_path pc: 707 op: IS_AN_ATOM (67)
        _4213 = IS_ATOM(_list_7830);
        // SubProg canonical_path pc: 710 op: IF (20)
        if (_4213 == 0)
        {
            _4213 = NOVALUE;
            goto L21; // [710] 748
        }
        else{
            _4213 = NOVALUE;
        }
        // SubProg canonical_path pc: 713 op: STARTLINE (58)

        /** filesys.e:1750					if lower_name then*/
        // SubProg canonical_path pc: 715 op: IF (20)
        if (_lower_name_7810 == 0)
        {
            goto L22; // [715] 741
        }
        else{
        }
        // SubProg canonical_path pc: 718 op: STARTLINE (58)

        /** filesys.e:1751						lPath = part & lower(lPath[sl[i]..$])*/
        // SubProg canonical_path pc: 720 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_7801);
        _4214 = (object)*(((s1_ptr)_2)->base + _i_7822);
        // SubProg canonical_path pc: 724 op: LENGTH (42)
        if (IS_SEQUENCE(_lPath_7698)){
                _4215 = SEQ_PTR(_lPath_7698)->length;
        }
        else {
            _4215 = 1;
        }
        // SubProg canonical_path pc: 727 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_4216;
        RHS_Slice(_lPath_7698, _4214, _4215);
        // SubProg canonical_path pc: 732 op: PROC (27)
        _4217 = _15lower(_4216);
        _4216 = NOVALUE;
        // SubProg canonical_path pc: 736 op: CONCAT (15)
        if (IS_SEQUENCE(_part_7826) && IS_ATOM(_4217)) {
            Ref(_4217);
            Append(&_lPath_7698, _part_7826, _4217);
        }
        else if (IS_ATOM(_part_7826) && IS_SEQUENCE(_4217)) {
        }
        else {
            Concat((object_ptr)&_lPath_7698, _part_7826, _4217);
        }
        DeRef(_4217);
        _4217 = NOVALUE;
        // SubProg canonical_path pc: 740 op: NOP1 (159)
L22: // addr: 741 pc: 740 sub: 7693 op: 159
        // SubProg canonical_path pc: 741 op: STARTLINE (58)

        /** filesys.e:1753					continue*/
        // SubProg canonical_path pc: 743 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_7826
        DeRef(_part_7826);
        _part_7826 = NOVALUE;

// block var list_7830
        DeRef(_list_7830);
        _list_7830 = NOVALUE;

// block var supplied_name_7833
        DeRef(_supplied_name_7833);
        _supplied_name_7833 = NOVALUE;
        // SubProg canonical_path pc: 745 op: ELSE (23)
        goto L23; // [745] 1110
        // SubProg canonical_path pc: 747 op: NOP1 (159)
L21: // addr: 748 pc: 747 sub: 7693 op: 159
        // SubProg canonical_path pc: 748 op: STARTLINE (58)

        /** filesys.e:1757				for j = 1 to length(list) do*/
        // SubProg canonical_path pc: 750 op: LENGTH (42)
        if (IS_SEQUENCE(_list_7830)){
                _4219 = SEQ_PTR(_list_7830)->length;
        }
        else {
            _4219 = 1;
        }
        // SubProg canonical_path pc: 753 op: FOR_I (125)
        {
            object _j_7850;
            _j_7850 = 1;
L24: // addr: 760 pc: 753 sub: 7693 op: 125
            if (_j_7850 > _4219){
                goto L25; // [753] 878
            }
            // SubProg canonical_path pc: 760 op: STARTLINE (58)

            /** filesys.e:1758					sequence read_name = list[j][D_NAME]*/
            // SubProg canonical_path pc: 762 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_7830);
            _4220 = (object)*(((s1_ptr)_2)->base + _j_7850);
            // SubProg canonical_path pc: 766 op: RHS_SUBS_CHECK (92)
            DeRef(_read_name_7852);
            _2 = (object)SEQ_PTR(_4220);
            _read_name_7852 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_7852);
            _4220 = NOVALUE;
            // SubProg canonical_path pc: 770 op: SEQUENCE_CHECK (97)
            // SubProg canonical_path pc: 772 op: STARTLINE (58)

            /** filesys.e:1759					if equal(read_name, supplied_name) then*/
            // SubProg canonical_path pc: 774 op: EQUAL (153)
            if (_read_name_7852 == _supplied_name_7833)
            _4222 = 1;
            else if (IS_ATOM_INT(_read_name_7852) && IS_ATOM_INT(_supplied_name_7833))
            _4222 = 0;
            else
            _4222 = (compare(_read_name_7852, _supplied_name_7833) == 0);
            // SubProg canonical_path pc: 778 op: IF (20)
            if (_4222 == 0)
            {
                _4222 = NOVALUE;
                goto L26; // [778] 869
            }
            else{
                _4222 = NOVALUE;
            }
            // SubProg canonical_path pc: 781 op: STARTLINE (58)

            /** filesys.e:1760						if short_name and sequence(list[j][D_ALTNAME]) then*/
            // SubProg canonical_path pc: 783 op: SC1_AND_IF (146)
            if (_short_name_7804 == 0) {
                goto L27; // [783] 860
            }
            // SubProg canonical_path pc: 787 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_7830);
            _4224 = (object)*(((s1_ptr)_2)->base + _j_7850);
            // SubProg canonical_path pc: 791 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_4224);
            _4225 = (object)*(((s1_ptr)_2)->base + 11);
            _4224 = NOVALUE;
            // SubProg canonical_path pc: 795 op: IS_A_SEQUENCE (68)
            _4226 = IS_SEQUENCE(_4225);
            _4225 = NOVALUE;
            // SubProg canonical_path pc: 798 op: NOP1 (159)
            // SubProg canonical_path pc: 799 op: IF (20)
            if (_4226 == 0)
            {
                _4226 = NOVALUE;
                goto L27; // [799] 860
            }
            else{
                _4226 = NOVALUE;
            }
            // SubProg canonical_path pc: 802 op: STARTLINE (58)

            /** filesys.e:1761							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 804 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_7801);
            _4227 = (object)*(((s1_ptr)_2)->base + _i_7822);
            // SubProg canonical_path pc: 808 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_4228;
            RHS_Slice(_lPath_7698, 1, _4227);
            // SubProg canonical_path pc: 813 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_7830);
            _4229 = (object)*(((s1_ptr)_2)->base + _j_7850);
            // SubProg canonical_path pc: 817 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_4229);
            _4230 = (object)*(((s1_ptr)_2)->base + 11);
            _4229 = NOVALUE;
            // SubProg canonical_path pc: 821 op: PLUS1 (93)
            _4231 = _i_7822 + 1;
            // SubProg canonical_path pc: 825 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_7801);
            _4232 = (object)*(((s1_ptr)_2)->base + _4231);
            // SubProg canonical_path pc: 829 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_7698)){
                    _4233 = SEQ_PTR(_lPath_7698)->length;
            }
            else {
                _4233 = 1;
            }
            // SubProg canonical_path pc: 832 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_4234;
            RHS_Slice(_lPath_7698, _4232, _4233);
            // SubProg canonical_path pc: 837 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _4234;
                concat_list[1] = _4230;
                concat_list[2] = _4228;
                Concat_N((object_ptr)&_lPath_7698, concat_list, 3);
            }
            DeRefDS(_4234);
            _4234 = NOVALUE;
            _4230 = NOVALUE;
            DeRefDS(_4228);
            _4228 = NOVALUE;
            // SubProg canonical_path pc: 843 op: STARTLINE (58)

            /** filesys.e:1762							sl[$] = length(lPath)+1*/
            // SubProg canonical_path pc: 845 op: LENGTH (42)
            if (IS_SEQUENCE(_sl_7801)){
                    _4236 = SEQ_PTR(_sl_7801)->length;
            }
            else {
                _4236 = 1;
            }
            // SubProg canonical_path pc: 848 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_7698)){
                    _4237 = SEQ_PTR(_lPath_7698)->length;
            }
            else {
                _4237 = 1;
            }
            // SubProg canonical_path pc: 851 op: PLUS1 (93)
            _4238 = _4237 + 1;
            _4237 = NOVALUE;
            // SubProg canonical_path pc: 855 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_sl_7801);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_7801 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _4236);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _4238;
            if( _1 != _4238 ){
                DeRef(_1);
            }
            _4238 = NOVALUE;
            // SubProg canonical_path pc: 859 op: NOP1 (159)
L27: // addr: 860 pc: 859 sub: 7693 op: 159
            // SubProg canonical_path pc: 860 op: STARTLINE (58)

            /** filesys.e:1764						continue "partloop"*/
            // SubProg canonical_path pc: 862 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_7852
            DeRef(_read_name_7852);
            _read_name_7852 = NOVALUE;
            // SubProg canonical_path pc: 864 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_7826
            DeRef(_part_7826);
            _part_7826 = NOVALUE;

// block var list_7830
            DeRef(_list_7830);
            _list_7830 = NOVALUE;

// block var supplied_name_7833
            DeRef(_supplied_name_7833);
            _supplied_name_7833 = NOVALUE;
            // SubProg canonical_path pc: 866 op: ELSE (23)
            goto L23; // [866] 1110
            // SubProg canonical_path pc: 868 op: NOP1 (159)
L26: // addr: 869 pc: 868 sub: 7693 op: 159
            // SubProg canonical_path pc: 869 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_7852
            DeRef(_read_name_7852);
            _read_name_7852 = NOVALUE;
            // SubProg canonical_path pc: 871 op: STARTLINE (58)

            /** filesys.e:1766				end for*/
            // SubProg canonical_path pc: 873 op: ENDFOR_INT_UP1 (54)
            _j_7850 = _j_7850 + 1;
            goto L24; // [873] 760
L25: // addr: 878 pc: 873 sub: 7693 op: 54
            ;
        }
        // SubProg canonical_path pc: 878 op: STARTLINE (58)

        /** filesys.e:1770				for j = 1 to length(list) do*/
        // SubProg canonical_path pc: 880 op: LENGTH (42)
        if (IS_SEQUENCE(_list_7830)){
                _4239 = SEQ_PTR(_list_7830)->length;
        }
        else {
            _4239 = 1;
        }
        // SubProg canonical_path pc: 883 op: FOR_I (125)
        {
            object _j_7875;
            _j_7875 = 1;
L28: // addr: 890 pc: 883 sub: 7693 op: 125
            if (_j_7875 > _4239){
                goto L29; // [883] 1055
            }
            // SubProg canonical_path pc: 890 op: STARTLINE (58)

            /** filesys.e:1771					sequence read_name = list[j][D_NAME]*/
            // SubProg canonical_path pc: 892 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_7830);
            _4240 = (object)*(((s1_ptr)_2)->base + _j_7875);
            // SubProg canonical_path pc: 896 op: RHS_SUBS_CHECK (92)
            DeRef(_read_name_7877);
            _2 = (object)SEQ_PTR(_4240);
            _read_name_7877 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_7877);
            _4240 = NOVALUE;
            // SubProg canonical_path pc: 900 op: SEQUENCE_CHECK (97)
            // SubProg canonical_path pc: 902 op: STARTLINE (58)

            /** filesys.e:1772					if equal(lower(read_name), lower(supplied_name)) then*/
            // SubProg canonical_path pc: 904 op: PROC (27)
            RefDS(_read_name_7877);
            _4242 = _15lower(_read_name_7877);
            // SubProg canonical_path pc: 908 op: PROC (27)
            RefDS(_supplied_name_7833);
            _4243 = _15lower(_supplied_name_7833);
            // SubProg canonical_path pc: 912 op: EQUAL (153)
            if (_4242 == _4243)
            _4244 = 1;
            else if (IS_ATOM_INT(_4242) && IS_ATOM_INT(_4243))
            _4244 = 0;
            else
            _4244 = (compare(_4242, _4243) == 0);
            DeRef(_4242);
            _4242 = NOVALUE;
            DeRef(_4243);
            _4243 = NOVALUE;
            // SubProg canonical_path pc: 916 op: IF (20)
            if (_4244 == 0)
            {
                _4244 = NOVALUE;
                goto L2A; // [916] 1046
            }
            else{
                _4244 = NOVALUE;
            }
            // SubProg canonical_path pc: 919 op: STARTLINE (58)

            /** filesys.e:1773						if short_name and sequence(list[j][D_ALTNAME]) then*/
            // SubProg canonical_path pc: 921 op: SC1_AND_IF (146)
            if (_short_name_7804 == 0) {
                goto L2B; // [921] 998
            }
            // SubProg canonical_path pc: 925 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_7830);
            _4246 = (object)*(((s1_ptr)_2)->base + _j_7875);
            // SubProg canonical_path pc: 929 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_4246);
            _4247 = (object)*(((s1_ptr)_2)->base + 11);
            _4246 = NOVALUE;
            // SubProg canonical_path pc: 933 op: IS_A_SEQUENCE (68)
            _4248 = IS_SEQUENCE(_4247);
            _4247 = NOVALUE;
            // SubProg canonical_path pc: 936 op: NOP1 (159)
            // SubProg canonical_path pc: 937 op: IF (20)
            if (_4248 == 0)
            {
                _4248 = NOVALUE;
                goto L2B; // [937] 998
            }
            else{
                _4248 = NOVALUE;
            }
            // SubProg canonical_path pc: 940 op: STARTLINE (58)

            /** filesys.e:1774							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 942 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_7801);
            _4249 = (object)*(((s1_ptr)_2)->base + _i_7822);
            // SubProg canonical_path pc: 946 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_4250;
            RHS_Slice(_lPath_7698, 1, _4249);
            // SubProg canonical_path pc: 951 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_7830);
            _4251 = (object)*(((s1_ptr)_2)->base + _j_7875);
            // SubProg canonical_path pc: 955 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_4251);
            _4252 = (object)*(((s1_ptr)_2)->base + 11);
            _4251 = NOVALUE;
            // SubProg canonical_path pc: 959 op: PLUS1 (93)
            _4253 = _i_7822 + 1;
            // SubProg canonical_path pc: 963 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_7801);
            _4254 = (object)*(((s1_ptr)_2)->base + _4253);
            // SubProg canonical_path pc: 967 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_7698)){
                    _4255 = SEQ_PTR(_lPath_7698)->length;
            }
            else {
                _4255 = 1;
            }
            // SubProg canonical_path pc: 970 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_4256;
            RHS_Slice(_lPath_7698, _4254, _4255);
            // SubProg canonical_path pc: 975 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _4256;
                concat_list[1] = _4252;
                concat_list[2] = _4250;
                Concat_N((object_ptr)&_lPath_7698, concat_list, 3);
            }
            DeRefDS(_4256);
            _4256 = NOVALUE;
            _4252 = NOVALUE;
            DeRefDS(_4250);
            _4250 = NOVALUE;
            // SubProg canonical_path pc: 981 op: STARTLINE (58)

            /** filesys.e:1775							sl[$] = length(lPath)+1*/
            // SubProg canonical_path pc: 983 op: LENGTH (42)
            if (IS_SEQUENCE(_sl_7801)){
                    _4258 = SEQ_PTR(_sl_7801)->length;
            }
            else {
                _4258 = 1;
            }
            // SubProg canonical_path pc: 986 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_7698)){
                    _4259 = SEQ_PTR(_lPath_7698)->length;
            }
            else {
                _4259 = 1;
            }
            // SubProg canonical_path pc: 989 op: PLUS1 (93)
            _4260 = _4259 + 1;
            _4259 = NOVALUE;
            // SubProg canonical_path pc: 993 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_sl_7801);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_7801 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _4258);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _4260;
            if( _1 != _4260 ){
                DeRef(_1);
            }
            _4260 = NOVALUE;
            // SubProg canonical_path pc: 997 op: NOP1 (159)
L2B: // addr: 998 pc: 997 sub: 7693 op: 159
            // SubProg canonical_path pc: 998 op: STARTLINE (58)

            /** filesys.e:1777						if correct_name then*/
            // SubProg canonical_path pc: 1000 op: IF (20)
            if (_correct_name_7807 == 0)
            {
                goto L2C; // [1000] 1037
            }
            else{
            }
            // SubProg canonical_path pc: 1003 op: STARTLINE (58)

            /** filesys.e:1778							lPath = lPath[1..sl[i]] & read_name & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 1005 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_7801);
            _4261 = (object)*(((s1_ptr)_2)->base + _i_7822);
            // SubProg canonical_path pc: 1009 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_4262;
            RHS_Slice(_lPath_7698, 1, _4261);
            // SubProg canonical_path pc: 1014 op: PLUS1 (93)
            _4263 = _i_7822 + 1;
            // SubProg canonical_path pc: 1018 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_7801);
            _4264 = (object)*(((s1_ptr)_2)->base + _4263);
            // SubProg canonical_path pc: 1022 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_7698)){
                    _4265 = SEQ_PTR(_lPath_7698)->length;
            }
            else {
                _4265 = 1;
            }
            // SubProg canonical_path pc: 1025 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_4266;
            RHS_Slice(_lPath_7698, _4264, _4265);
            // SubProg canonical_path pc: 1030 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _4266;
                concat_list[1] = _read_name_7877;
                concat_list[2] = _4262;
                Concat_N((object_ptr)&_lPath_7698, concat_list, 3);
            }
            DeRefDS(_4266);
            _4266 = NOVALUE;
            DeRefDS(_4262);
            _4262 = NOVALUE;
            // SubProg canonical_path pc: 1036 op: NOP1 (159)
L2C: // addr: 1037 pc: 1036 sub: 7693 op: 159
            // SubProg canonical_path pc: 1037 op: STARTLINE (58)

            /** filesys.e:1780						continue "partloop"*/
            // SubProg canonical_path pc: 1039 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_7877
            DeRef(_read_name_7877);
            _read_name_7877 = NOVALUE;
            // SubProg canonical_path pc: 1041 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_7826
            DeRef(_part_7826);
            _part_7826 = NOVALUE;

// block var list_7830
            DeRef(_list_7830);
            _list_7830 = NOVALUE;

// block var supplied_name_7833
            DeRef(_supplied_name_7833);
            _supplied_name_7833 = NOVALUE;
            // SubProg canonical_path pc: 1043 op: ELSE (23)
            goto L23; // [1043] 1110
            // SubProg canonical_path pc: 1045 op: NOP1 (159)
L2A: // addr: 1046 pc: 1045 sub: 7693 op: 159
            // SubProg canonical_path pc: 1046 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_7877
            DeRef(_read_name_7877);
            _read_name_7877 = NOVALUE;
            // SubProg canonical_path pc: 1048 op: STARTLINE (58)

            /** filesys.e:1782				end for*/
            // SubProg canonical_path pc: 1050 op: ENDFOR_INT_UP1 (54)
            _j_7875 = _j_7875 + 1;
            goto L28; // [1050] 890
L29: // addr: 1055 pc: 1050 sub: 7693 op: 54
            ;
        }
        // SubProg canonical_path pc: 1055 op: STARTLINE (58)

        /** filesys.e:1786				if and_bits(TO_LOWER,case_flags) then*/
        // SubProg canonical_path pc: 1057 op: AND_BITS (56)
        {uintptr_t tu;
             tu = (uintptr_t)1 & (uintptr_t)_case_flags_7697;
             _4268 = MAKE_UINT(tu);
        }
        // SubProg canonical_path pc: 1061 op: IF (20)
        if (_4268 == 0) {
            DeRef(_4268);
            _4268 = NOVALUE;
            goto L2D; // [1061] 1100
        }
        else {
            if (!IS_ATOM_INT(_4268) && DBL_PTR(_4268)->dbl == 0.0){
                DeRef(_4268);
                _4268 = NOVALUE;
                goto L2D; // [1061] 1100
            }
            DeRef(_4268);
            _4268 = NOVALUE;
        }
        DeRef(_4268);
        _4268 = NOVALUE;
        // SubProg canonical_path pc: 1064 op: STARTLINE (58)

        /** filesys.e:1787					lPath = lPath[1..sl[i]-1] & lower(lPath[sl[i]..$])*/
        // SubProg canonical_path pc: 1066 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_7801);
        _4269 = (object)*(((s1_ptr)_2)->base + _i_7822);
        // SubProg canonical_path pc: 1070 op: MINUS (10)
        if (IS_ATOM_INT(_4269)) {
            _4270 = _4269 - 1;
        }
        else {
            _4270 = binary_op(MINUS, _4269, 1);
        }
        _4269 = NOVALUE;
        // SubProg canonical_path pc: 1074 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_4271;
        RHS_Slice(_lPath_7698, 1, _4270);
        // SubProg canonical_path pc: 1079 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_7801);
        _4272 = (object)*(((s1_ptr)_2)->base + _i_7822);
        // SubProg canonical_path pc: 1083 op: LENGTH (42)
        if (IS_SEQUENCE(_lPath_7698)){
                _4273 = SEQ_PTR(_lPath_7698)->length;
        }
        else {
            _4273 = 1;
        }
        // SubProg canonical_path pc: 1086 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_4274;
        RHS_Slice(_lPath_7698, _4272, _4273);
        // SubProg canonical_path pc: 1091 op: PROC (27)
        _4275 = _15lower(_4274);
        _4274 = NOVALUE;
        // SubProg canonical_path pc: 1095 op: CONCAT (15)
        if (IS_SEQUENCE(_4271) && IS_ATOM(_4275)) {
            Ref(_4275);
            Append(&_lPath_7698, _4271, _4275);
        }
        else if (IS_ATOM(_4271) && IS_SEQUENCE(_4275)) {
        }
        else {
            Concat((object_ptr)&_lPath_7698, _4271, _4275);
            DeRefDS(_4271);
            _4271 = NOVALUE;
        }
        DeRef(_4271);
        _4271 = NOVALUE;
        DeRef(_4275);
        _4275 = NOVALUE;
        // SubProg canonical_path pc: 1099 op: NOP1 (159)
L2D: // addr: 1100 pc: 1099 sub: 7693 op: 159
        // SubProg canonical_path pc: 1100 op: STARTLINE (58)

        /** filesys.e:1789				exit*/
        // SubProg canonical_path pc: 1102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_7826
        DeRef(_part_7826);
        _part_7826 = NOVALUE;

// block var list_7830
        DeRef(_list_7830);
        _list_7830 = NOVALUE;

// block var supplied_name_7833
        DeRef(_supplied_name_7833);
        _supplied_name_7833 = NOVALUE;
        // SubProg canonical_path pc: 1104 op: EXIT (61)
        goto L20; // [1104] 1115
        // SubProg canonical_path pc: 1106 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_7826

// block var list_7830

// block var supplied_name_7833
        // SubProg canonical_path pc: 1108 op: STARTLINE (58)

        /** filesys.e:1790			end for*/
        // SubProg canonical_path pc: 1110 op: ENDFOR_GENERAL (39)
L23: // addr: 1110 pc: 1110 sub: 7693 op: 39
        _i_7822 = _i_7822 + -1;
        goto L1F; // [1110] 649
L20: // addr: 1115 pc: 1110 sub: 7693 op: 39
        ;
    }
    // SubProg canonical_path pc: 1115 op: STARTLINE (58)

    /** filesys.e:1791			if and_bits(case_flags,or_bits(CORRECT,TO_LOWER))=TO_LOWER and length(lPath) then*/
    // SubProg canonical_path pc: 1117 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)2 | (uintptr_t)1;
         _4277 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 1121 op: AND_BITS (56)
    if (IS_ATOM_INT(_4277)) {
        {uintptr_t tu;
             tu = (uintptr_t)_case_flags_7697 & (uintptr_t)_4277;
             _4278 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_case_flags_7697;
        _4278 = Dand_bits(&temp_d, DBL_PTR(_4277));
    }
    DeRef(_4277);
    _4277 = NOVALUE;
    // SubProg canonical_path pc: 1125 op: EQUALS (3)
    if (IS_ATOM_INT(_4278)) {
        _4279 = (_4278 == 1);
    }
    else {
        _4279 = (DBL_PTR(_4278)->dbl == (eudouble)1);
    }
    DeRef(_4278);
    _4278 = NOVALUE;
    // SubProg canonical_path pc: 1129 op: SC1_AND_IF (146)
    if (_4279 == 0) {
        goto L2E; // [1129] 1149
    }
    // SubProg canonical_path pc: 1133 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_7698)){
            _4281 = SEQ_PTR(_lPath_7698)->length;
    }
    else {
        _4281 = 1;
    }
    // SubProg canonical_path pc: 1136 op: NOP1 (159)
    // SubProg canonical_path pc: 1137 op: IF (20)
    if (_4281 == 0)
    {
        _4281 = NOVALUE;
        goto L2E; // [1137] 1149
    }
    else{
        _4281 = NOVALUE;
    }
    // SubProg canonical_path pc: 1140 op: STARTLINE (58)

    /** filesys.e:1792				lPath = lower(lPath)*/
    // SubProg canonical_path pc: 1142 op: PROC (27)
    RefDS(_lPath_7698);
    _0 = _lPath_7698;
    _lPath_7698 = _15lower(_lPath_7698);
    DeRefDS(_0);
    // SubProg canonical_path pc: 1146 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 1148 op: NOP1 (159)
L2E: // addr: 1149 pc: 1148 sub: 7693 op: 159
    // SubProg canonical_path pc: 1149 op: NOP1 (159)
L1D: // addr: 1150 pc: 1149 sub: 7693 op: 159
    // SubProg canonical_path pc: 1150 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sl_7801
    DeRef(_sl_7801);
    _sl_7801 = NOVALUE;

// block var short_name_7804

// block var correct_name_7807

// block var lower_name_7810
    // SubProg canonical_path pc: 1152 op: NOP1 (159)
L1C: // addr: 1153 pc: 1152 sub: 7693 op: 159
    // SubProg canonical_path pc: 1153 op: STARTLINE (58)

    /** filesys.e:1796		ifdef WINDOWS then*/
    // SubProg canonical_path pc: 1155 op: STARTLINE (58)

    /** filesys.e:1810		return lPath & wildcard_suffix*/
    // SubProg canonical_path pc: 1157 op: PRIVATE_INIT_CHECK (30)
    // SubProg canonical_path pc: 1159 op: CONCAT (15)
    Concat((object_ptr)&_4283, _lPath_7698, _wildcard_suffix_7744);
    // SubProg canonical_path pc: 1163 op: RETURNF (28)

// Exiting block BLOCK: canonical_path

// block var path_in_7695
    DeRefDS(_path_in_7695);

// block var directory_given_7696

// block var case_flags_7697

// block var lPath_7698
    DeRefDS(_lPath_7698);

// block var lPosA_7699

// block var lPosB_7700

// block var lLevel_7701
    DeRefi(_lLevel_7701);

// block var lHome_7702
    DeRefi(_lHome_7702);

// block var wildcard_suffix_7744
    DeRefDS(_wildcard_suffix_7744);

// block var first_wildcard_at_7745
    DeRef(_4124);
    _4124 = NOVALUE;
    DeRef(_4231);
    _4231 = NOVALUE;
    _4261 = NOVALUE;
    DeRef(_4118);
    _4118 = NOVALUE;
    DeRef(_4163);
    _4163 = NOVALUE;
    DeRef(_4134);
    _4134 = NOVALUE;
    DeRef(_4203);
    _4203 = NOVALUE;
    DeRef(_4200);
    _4200 = NOVALUE;
    DeRef(_4121);
    _4121 = NOVALUE;
    DeRef(_4116);
    _4116 = NOVALUE;
    DeRef(_4208);
    _4208 = NOVALUE;
    _4272 = NOVALUE;
    DeRef(_4151);
    _4151 = NOVALUE;
    DeRef(_4253);
    _4253 = NOVALUE;
    DeRef(_4211);
    _4211 = NOVALUE;
    _4214 = NOVALUE;
    _4264 = NOVALUE;
    _4254 = NOVALUE;
    _4249 = NOVALUE;
    DeRef(_4159);
    _4159 = NOVALUE;
    _4227 = NOVALUE;
    DeRef(_4209);
    _4209 = NOVALUE;
    DeRef(_4263);
    _4263 = NOVALUE;
    DeRef(_4176);
    _4176 = NOVALUE;
    DeRef(_4109);
    _4109 = NOVALUE;
    DeRef(_4173);
    _4173 = NOVALUE;
    _4232 = NOVALUE;
    DeRef(_4112);
    _4112 = NOVALUE;
    DeRef(_4156);
    _4156 = NOVALUE;
    DeRef(_4279);
    _4279 = NOVALUE;
    DeRef(_4270);
    _4270 = NOVALUE;
    _4130 = NOVALUE;
    return _4283;
    // SubProg canonical_path pc: 1167 op: BADRETURNF (43)
    ;
}


object _18abbreviate_path(object _orig_path_7936, object _base_paths_7937)
{
    object _expanded_path_7938 = NOVALUE;
    object _fs_case_inlined_fs_case_at_61_7948 = NOVALUE;
    object _lowered_expanded_path_7949 = NOVALUE;
    object _fs_case_inlined_fs_case_at_73_7951 = NOVALUE;
    object _fs_case_inlined_fs_case_at_216_7978 = NOVALUE;
    object _s_inlined_fs_case_at_213_7977 = NOVALUE;
// skipping _4320  name type: 0
    object _4319 = NOVALUE; // 7991 4319
    object _4318 = NOVALUE; // 7990 4318
// skipping _4317  name type: 0
// skipping _4316  name type: 0
    object _4315 = NOVALUE; // 7986 4315
    object _4314 = NOVALUE; // 7985 4314
    object _4313 = NOVALUE; // 7984 4313
    object _4312 = NOVALUE; // 7983 4312
    object _4311 = NOVALUE; // 7982 4311
// skipping _4310  name type: 0
    object _4309 = NOVALUE; // 7980 4309
    object _4308 = NOVALUE; // 7979 4308
    object _4307 = NOVALUE; // 7975 4307
    object _4306 = NOVALUE; // 7973 4306
    object _4305 = NOVALUE; // 7972 4305
    object _4304 = NOVALUE; // 7971 4304
    object _4303 = NOVALUE; // 7970 4303
    object _4302 = NOVALUE; // 7969 4302
// skipping _4301  name type: 0
// skipping _4300  name type: 0
    object _4299 = NOVALUE; // 7964 4299
    object _4298 = NOVALUE; // 7963 4298
    object _4297 = NOVALUE; // 7962 4297
    object _4296 = NOVALUE; // 7961 4296
    object _4295 = NOVALUE; // 7960 4295
    object _4294 = NOVALUE; // 7959 4294
    object _4293 = NOVALUE; // 7958 4293
    object _4292 = NOVALUE; // 7957 4292
    object _4291 = NOVALUE; // 7956 4291
    object _4290 = NOVALUE; // 7954 4290
    object _4289 = NOVALUE; // 7946 4289
    object _4288 = NOVALUE; // 7945 4288
    object _4287 = NOVALUE; // 7944 4287
// skipping _4286  name type: 0
    object _4285 = NOVALUE; // 7940 4285
// skipping _4284  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg abbreviate_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 5 op: STARTLINE (58)

    /** filesys.e:1881		expanded_path = canonical_path(orig_path)*/
    // SubProg abbreviate_path pc: 7 op: PROC (27)
    RefDS(_orig_path_7936);
    _0 = _expanded_path_7938;
    _expanded_path_7938 = _18canonical_path(_orig_path_7936, 0, 0);
    DeRef(_0);
    // SubProg abbreviate_path pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 15 op: STARTLINE (58)

    /** filesys.e:1884		base_paths = append(base_paths, curdir())*/
    // SubProg abbreviate_path pc: 17 op: PROC (27)
    _4285 = _18curdir(0);
    // SubProg abbreviate_path pc: 21 op: APPEND (35)
    Ref(_4285);
    Append(&_base_paths_7937, _base_paths_7937, _4285);
    DeRef(_4285);
    _4285 = NOVALUE;
    // SubProg abbreviate_path pc: 25 op: STARTLINE (58)

    /** filesys.e:1886		for i = 1 to length(base_paths) do*/
    // SubProg abbreviate_path pc: 27 op: LENGTH (42)
    // Known sequence length:
    _4287 = 1;
    // SubProg abbreviate_path pc: 30 op: FOR_I (125)
    {
        object _i_7943;
        _i_7943 = 1;
L1: // addr: 37 pc: 30 sub: 7934 op: 125
        if (_i_7943 > 1){
            goto L2; // [30] 60
        }
        // SubProg abbreviate_path pc: 37 op: STARTLINE (58)

        /** filesys.e:1887			base_paths[i] = canonical_path(base_paths[i], 1) -- assume each base path is meant to be a directory.*/
        // SubProg abbreviate_path pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_7937);
        _4288 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg abbreviate_path pc: 43 op: PROC (27)
        Ref(_4288);
        _4289 = _18canonical_path(_4288, 1, 0);
        _4288 = NOVALUE;
        // SubProg abbreviate_path pc: 49 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_base_paths_7937);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _base_paths_7937 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4289;
        if( _1 != _4289 ){
            DeRef(_1);
        }
        _4289 = NOVALUE;
        // SubProg abbreviate_path pc: 53 op: STARTLINE (58)

        /** filesys.e:1888		end for*/
        // SubProg abbreviate_path pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_7943 = 1 + 1;
        goto L1; // [55] 37
L2: // addr: 60 pc: 55 sub: 7934 op: 54
        ;
    }
    // SubProg abbreviate_path pc: 60 op: STARTLINE (58)

    /** filesys.e:1892		base_paths = fs_case(base_paths)*/
    // SubProg abbreviate_path pc: 62 op: STARTLINE (58)

    /** filesys.e:1825		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 64 op: STARTLINE (58)

    /** filesys.e:1828			return s*/
    // SubProg abbreviate_path pc: 66 op: ASSIGN (18)
    RefDS(_base_paths_7937);
    DeRefDS(_base_paths_7937);
    _base_paths_7937 = _base_paths_7937;
    // SubProg abbreviate_path pc: 69 op: NOP1 (159)
    // SubProg abbreviate_path pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 72 op: STARTLINE (58)

    /** filesys.e:1893		sequence lowered_expanded_path = fs_case(expanded_path)*/
    // SubProg abbreviate_path pc: 74 op: STARTLINE (58)

    /** filesys.e:1825		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 76 op: STARTLINE (58)

    /** filesys.e:1828			return s*/
    // SubProg abbreviate_path pc: 78 op: ASSIGN (18)
    RefDS(_expanded_path_7938);
    DeRef(_lowered_expanded_path_7949);
    _lowered_expanded_path_7949 = _expanded_path_7938;
    // SubProg abbreviate_path pc: 81 op: NOP1 (159)
    // SubProg abbreviate_path pc: 82 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 84 op: STARTLINE (58)

    /** filesys.e:1896		for i = 1 to length(base_paths) do*/
    // SubProg abbreviate_path pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_7937)){
            _4290 = SEQ_PTR(_base_paths_7937)->length;
    }
    else {
        _4290 = 1;
    }
    // SubProg abbreviate_path pc: 89 op: FOR_I (125)
    {
        object _i_7953;
        _i_7953 = 1;
L3: // addr: 96 pc: 89 sub: 7934 op: 125
        if (_i_7953 > _4290){
            goto L4; // [89] 143
        }
        // SubProg abbreviate_path pc: 96 op: STARTLINE (58)

        /** filesys.e:1897			if search:begins(base_paths[i], lowered_expanded_path) then*/
        // SubProg abbreviate_path pc: 98 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_7937);
        _4291 = (object)*(((s1_ptr)_2)->base + _i_7953);
        // SubProg abbreviate_path pc: 102 op: PROC (27)
        Ref(_4291);
        RefDS(_lowered_expanded_path_7949);
        _4292 = _17begins(_4291, _lowered_expanded_path_7949);
        _4291 = NOVALUE;
        // SubProg abbreviate_path pc: 107 op: IF (20)
        if (_4292 == 0) {
            DeRef(_4292);
            _4292 = NOVALUE;
            goto L5; // [107] 136
        }
        else {
            if (!IS_ATOM_INT(_4292) && DBL_PTR(_4292)->dbl == 0.0){
                DeRef(_4292);
                _4292 = NOVALUE;
                goto L5; // [107] 136
            }
            DeRef(_4292);
            _4292 = NOVALUE;
        }
        DeRef(_4292);
        _4292 = NOVALUE;
        // SubProg abbreviate_path pc: 110 op: STARTLINE (58)

        /** filesys.e:1899				return expanded_path[length(base_paths[i]) + 1 .. $]*/
        // SubProg abbreviate_path pc: 112 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_7937);
        _4293 = (object)*(((s1_ptr)_2)->base + _i_7953);
        // SubProg abbreviate_path pc: 116 op: LENGTH (42)
        if (IS_SEQUENCE(_4293)){
                _4294 = SEQ_PTR(_4293)->length;
        }
        else {
            _4294 = 1;
        }
        _4293 = NOVALUE;
        // SubProg abbreviate_path pc: 119 op: PLUS1 (93)
        _4295 = _4294 + 1;
        _4294 = NOVALUE;
        // SubProg abbreviate_path pc: 123 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_7938)){
                _4296 = SEQ_PTR(_expanded_path_7938)->length;
        }
        else {
            _4296 = 1;
        }
        // SubProg abbreviate_path pc: 126 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_4297;
        RHS_Slice(_expanded_path_7938, _4295, _4296);
        // SubProg abbreviate_path pc: 131 op: RETURNF (28)

// Exiting block BLOCK: abbreviate_path

// block var orig_path_7936
        DeRefDS(_orig_path_7936);

// block var base_paths_7937
        DeRefDS(_base_paths_7937);

// block var expanded_path_7938
        DeRefDS(_expanded_path_7938);

// block var lowered_expanded_path_7949
        DeRefDS(_lowered_expanded_path_7949);
        _4293 = NOVALUE;
        _4295 = NOVALUE;
        return _4297;
        // SubProg abbreviate_path pc: 135 op: NOP1 (159)
L5: // addr: 136 pc: 135 sub: 7934 op: 159
        // SubProg abbreviate_path pc: 136 op: STARTLINE (58)

        /** filesys.e:1901		end for*/
        // SubProg abbreviate_path pc: 138 op: ENDFOR_INT_UP1 (54)
        _i_7953 = _i_7953 + 1;
        goto L3; // [138] 96
L4: // addr: 143 pc: 138 sub: 7934 op: 54
        ;
    }
    // SubProg abbreviate_path pc: 143 op: STARTLINE (58)

    /** filesys.e:1904		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 145 op: STARTLINE (58)

    /** filesys.e:1912		base_paths = stdseq:split(base_paths[$], SLASH)*/
    // SubProg abbreviate_path pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_7937)){
            _4298 = SEQ_PTR(_base_paths_7937)->length;
    }
    else {
        _4298 = 1;
    }
    // SubProg abbreviate_path pc: 150 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_base_paths_7937);
    _4299 = (object)*(((s1_ptr)_2)->base + _4298);
    // SubProg abbreviate_path pc: 154 op: PROC (27)
    Ref(_4299);
    _0 = _base_paths_7937;
    _base_paths_7937 = _23split(_4299, 47, 0, 0);
    DeRefDS(_0);
    _4299 = NOVALUE;
    // SubProg abbreviate_path pc: 161 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 163 op: STARTLINE (58)

    /** filesys.e:1914		expanded_path = stdseq:split(expanded_path, SLASH)*/
    // SubProg abbreviate_path pc: 165 op: PROC (27)
    RefDS(_expanded_path_7938);
    _0 = _expanded_path_7938;
    _expanded_path_7938 = _23split(_expanded_path_7938, 47, 0, 0);
    DeRefDS(_0);
    // SubProg abbreviate_path pc: 172 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 174 op: STARTLINE (58)

    /** filesys.e:1915		lowered_expanded_path = ""*/
    // SubProg abbreviate_path pc: 176 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lowered_expanded_path_7949);
    _lowered_expanded_path_7949 = _5;
    // SubProg abbreviate_path pc: 179 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 181 op: STARTLINE (58)

    /** filesys.e:1918		for i = 1 to math:min({length(expanded_path), length(base_paths) - 1}) do*/
    // SubProg abbreviate_path pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_expanded_path_7938)){
            _4302 = SEQ_PTR(_expanded_path_7938)->length;
    }
    else {
        _4302 = 1;
    }
    // SubProg abbreviate_path pc: 186 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_7937)){
            _4303 = SEQ_PTR(_base_paths_7937)->length;
    }
    else {
        _4303 = 1;
    }
    // SubProg abbreviate_path pc: 189 op: MINUS (10)
    _4304 = _4303 - 1;
    _4303 = NOVALUE;
    // SubProg abbreviate_path pc: 193 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _4302;
    ((intptr_t *)_2)[2] = _4304;
    _4305 = MAKE_SEQ(_1);
    _4304 = NOVALUE;
    _4302 = NOVALUE;
    // SubProg abbreviate_path pc: 197 op: PROC (27)
    _4306 = _9min(_4305);
    _4305 = NOVALUE;
    // SubProg abbreviate_path pc: 201 op: FOR (21)
    {
        object _i_7968;
        _i_7968 = 1;
L6: // addr: 208 pc: 201 sub: 7934 op: 21
        if (binary_op_a(GREATER, _i_7968, _4306)){
            goto L7; // [201] 305
        }
        // SubProg abbreviate_path pc: 208 op: STARTLINE (58)

        /** filesys.e:1919			if not equal(fs_case(expanded_path[i]), base_paths[i]) then*/
        // SubProg abbreviate_path pc: 210 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_expanded_path_7938);
        if (!IS_ATOM_INT(_i_7968)){
            _4307 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_7968)->dbl));
        }
        else{
            _4307 = (object)*(((s1_ptr)_2)->base + _i_7968);
        }
        // SubProg abbreviate_path pc: 214 op: ASSIGN (18)
        Ref(_4307);
        DeRef(_s_inlined_fs_case_at_213_7977);
        _s_inlined_fs_case_at_213_7977 = _4307;
        _4307 = NOVALUE;
        // SubProg abbreviate_path pc: 217 op: SEQUENCE_CHECK (97)
        // SubProg abbreviate_path pc: 219 op: STARTLINE (58)

        /** filesys.e:1825		ifdef WINDOWS then*/
        // SubProg abbreviate_path pc: 221 op: STARTLINE (58)

        /** filesys.e:1828			return s*/
        // SubProg abbreviate_path pc: 223 op: ASSIGN (18)
        Ref(_s_inlined_fs_case_at_213_7977);
        DeRef(_fs_case_inlined_fs_case_at_216_7978);
        _fs_case_inlined_fs_case_at_216_7978 = _s_inlined_fs_case_at_213_7977;
        // SubProg abbreviate_path pc: 226 op: NOP1 (159)
        // SubProg abbreviate_path pc: 227 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-fs_case from abbreviate_path @ 213

// block var s_inlined_fs_case_at_213_7977
        DeRef(_s_inlined_fs_case_at_213_7977);
        _s_inlined_fs_case_at_213_7977 = NOVALUE;
        // SubProg abbreviate_path pc: 229 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_7937);
        if (!IS_ATOM_INT(_i_7968)){
            _4308 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_7968)->dbl));
        }
        else{
            _4308 = (object)*(((s1_ptr)_2)->base + _i_7968);
        }
        // SubProg abbreviate_path pc: 233 op: EQUAL (153)
        if (_fs_case_inlined_fs_case_at_216_7978 == _4308)
        _4309 = 1;
        else if (IS_ATOM_INT(_fs_case_inlined_fs_case_at_216_7978) && IS_ATOM_INT(_4308))
        _4309 = 0;
        else
        _4309 = (compare(_fs_case_inlined_fs_case_at_216_7978, _4308) == 0);
        _4308 = NOVALUE;
        // SubProg abbreviate_path pc: 237 op: NOT_IFW (108)
        if (_4309 != 0)
        goto L8; // [237] 298
        _4309 = NOVALUE;
        // SubProg abbreviate_path pc: 240 op: STARTLINE (58)

        /** filesys.e:1923				expanded_path = repeat("..", length(base_paths) - i) & expanded_path[i .. $]*/
        // SubProg abbreviate_path pc: 242 op: LENGTH (42)
        if (IS_SEQUENCE(_base_paths_7937)){
                _4311 = SEQ_PTR(_base_paths_7937)->length;
        }
        else {
            _4311 = 1;
        }
        // SubProg abbreviate_path pc: 245 op: MINUS (10)
        if (IS_ATOM_INT(_i_7968)) {
            _4312 = _4311 - _i_7968;
        }
        else {
            _4312 = NewDouble((eudouble)_4311 - DBL_PTR(_i_7968)->dbl);
        }
        _4311 = NOVALUE;
        // SubProg abbreviate_path pc: 249 op: REPEAT (32)
        _4313 = Repeat(_3913, _4312);
        DeRef(_4312);
        _4312 = NOVALUE;
        // SubProg abbreviate_path pc: 253 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_7938)){
                _4314 = SEQ_PTR(_expanded_path_7938)->length;
        }
        else {
            _4314 = 1;
        }
        // SubProg abbreviate_path pc: 256 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_4315;
        RHS_Slice(_expanded_path_7938, _i_7968, _4314);
        // SubProg abbreviate_path pc: 261 op: CONCAT (15)
        Concat((object_ptr)&_expanded_path_7938, _4313, _4315);
        DeRefDS(_4313);
        _4313 = NOVALUE;
        DeRef(_4313);
        _4313 = NOVALUE;
        DeRefDS(_4315);
        _4315 = NOVALUE;
        // SubProg abbreviate_path pc: 265 op: STARTLINE (58)

        /** filesys.e:1924				expanded_path = stdseq:join(expanded_path, SLASH)*/
        // SubProg abbreviate_path pc: 267 op: PROC (27)
        RefDS(_expanded_path_7938);
        _0 = _expanded_path_7938;
        _expanded_path_7938 = _23join(_expanded_path_7938, 47);
        DeRefDS(_0);
        // SubProg abbreviate_path pc: 272 op: SEQUENCE_CHECK (97)
        // SubProg abbreviate_path pc: 274 op: STARTLINE (58)

        /** filesys.e:1925				if length(expanded_path) < length(orig_path) then*/
        // SubProg abbreviate_path pc: 276 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_7938)){
                _4318 = SEQ_PTR(_expanded_path_7938)->length;
        }
        else {
            _4318 = 1;
        }
        // SubProg abbreviate_path pc: 279 op: LENGTH (42)
        if (IS_SEQUENCE(_orig_path_7936)){
                _4319 = SEQ_PTR(_orig_path_7936)->length;
        }
        else {
            _4319 = 1;
        }
        // SubProg abbreviate_path pc: 282 op: LESS_IFW_I (119)
        if (_4318 >= _4319)
        goto L7; // [282] 305
        // SubProg abbreviate_path pc: 286 op: STARTLINE (58)

        /** filesys.e:1927			  		return expanded_path*/
        // SubProg abbreviate_path pc: 288 op: RETURNF (28)
        DeRef(_i_7968);

// Exiting block BLOCK: abbreviate_path

// block var orig_path_7936
        DeRefDS(_orig_path_7936);

// block var base_paths_7937
        DeRefDS(_base_paths_7937);

// block var lowered_expanded_path_7949
        DeRef(_lowered_expanded_path_7949);
        _4293 = NOVALUE;
        DeRef(_4297);
        _4297 = NOVALUE;
        DeRef(_4295);
        _4295 = NOVALUE;
        DeRef(_4306);
        _4306 = NOVALUE;
        return _expanded_path_7938;
        // SubProg abbreviate_path pc: 292 op: NOP1 (159)
        // SubProg abbreviate_path pc: 293 op: STARTLINE (58)

        /** filesys.e:1929				exit*/
        // SubProg abbreviate_path pc: 295 op: EXIT (61)
        goto L7; // [295] 305
        // SubProg abbreviate_path pc: 297 op: NOP1 (159)
L8: // addr: 298 pc: 297 sub: 7934 op: 159
        // SubProg abbreviate_path pc: 298 op: STARTLINE (58)

        /** filesys.e:1931		end for*/
        // SubProg abbreviate_path pc: 300 op: ENDFOR_INT_UP1 (54)
        _0 = _i_7968;
        if (IS_ATOM_INT(_i_7968)) {
            _i_7968 = _i_7968 + 1;
            if ((object)((uintptr_t)_i_7968 +(uintptr_t) HIGH_BITS) >= 0){
                _i_7968 = NewDouble((eudouble)_i_7968);
            }
        }
        else {
            _i_7968 = binary_op_a(PLUS, _i_7968, 1);
        }
        DeRef(_0);
        goto L6; // [300] 208
L7: // addr: 305 pc: 300 sub: 7934 op: 54
        ;
        DeRef(_i_7968);
    }
    // SubProg abbreviate_path pc: 305 op: STARTLINE (58)

    /** filesys.e:1934		return orig_path*/
    // SubProg abbreviate_path pc: 307 op: RETURNF (28)

// Exiting block BLOCK: abbreviate_path

// block var base_paths_7937
    DeRefDS(_base_paths_7937);

// block var expanded_path_7938
    DeRef(_expanded_path_7938);

// block var lowered_expanded_path_7949
    DeRef(_lowered_expanded_path_7949);
    _4293 = NOVALUE;
    DeRef(_4297);
    _4297 = NOVALUE;
    DeRef(_4295);
    _4295 = NOVALUE;
    DeRef(_4306);
    _4306 = NOVALUE;
    return _orig_path_7936;
    // SubProg abbreviate_path pc: 311 op: BADRETURNF (43)
    ;
}


object _18file_type(object _filename_8026)
{
    object _dirfil_8027 = NOVALUE;
    object _4352 = NOVALUE; // 8047 4352
    object _4351 = NOVALUE; // 8046 4351
    object _4350 = NOVALUE; // 8045 4350
    object _4349 = NOVALUE; // 8044 4349
    object _4348 = NOVALUE; // 8043 4348
// skipping _4347  name type: 0
    object _4346 = NOVALUE; // 8041 4346
    object _4345 = NOVALUE; // 8040 4345
    object _4344 = NOVALUE; // 8039 4344
    object _4343 = NOVALUE; // 8038 4343
    object _4342 = NOVALUE; // 8037 4342
    object _4341 = NOVALUE; // 8036 4341
    object _4340 = NOVALUE; // 8034 4340
// skipping _4339  name type: 0
    object _4338 = NOVALUE; // 8031 4338
// skipping _4337  name type: 0
    object _4336 = NOVALUE; // 8029 4336
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_type pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg file_type pc: 3 op: STARTLINE (58)

    /** filesys.e:2040		if eu:find('*', filename) or eu:find('?', filename) then return FILETYPE_UNDEFINED end if*/
    // SubProg file_type pc: 5 op: FIND_FROM (176)
    _4336 = find_from(42, _filename_8026, 1);
    // SubProg file_type pc: 10 op: SC1_OR_IF (147)
    if (_4336 != 0) {
        goto L1; // [10] 24
    }
    // SubProg file_type pc: 14 op: FIND_FROM (176)
    _4338 = find_from(63, _filename_8026, 1);
    // SubProg file_type pc: 19 op: NOP1 (159)
    // SubProg file_type pc: 20 op: IF (20)
    if (_4338 == 0)
    {
        _4338 = NOVALUE;
        goto L2; // [20] 29
    }
    else{
        _4338 = NOVALUE;
    }
    // SubProg file_type pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 8024 op: 159
    // SubProg file_type pc: 24 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_8026
    DeRefDS(_filename_8026);

// block var dirfil_8027
    DeRef(_dirfil_8027);
    return -1;
    // SubProg file_type pc: 28 op: NOP1 (159)
L2: // addr: 29 pc: 28 sub: 8024 op: 159
    // SubProg file_type pc: 29 op: STARTLINE (58)

    /** filesys.e:2042		ifdef WINDOWS then*/
    // SubProg file_type pc: 31 op: STARTLINE (58)

    /** filesys.e:2048		dirfil = dir(filename)*/
    // SubProg file_type pc: 33 op: PROC (27)
    RefDS(_filename_8026);
    _0 = _dirfil_8027;
    _dirfil_8027 = _18dir(_filename_8026);
    DeRef(_0);
    // SubProg file_type pc: 37 op: STARTLINE (58)

    /** filesys.e:2049		if sequence(dirfil) then*/
    // SubProg file_type pc: 39 op: IS_A_SEQUENCE (68)
    _4340 = IS_SEQUENCE(_dirfil_8027);
    // SubProg file_type pc: 42 op: IF (20)
    if (_4340 == 0)
    {
        _4340 = NOVALUE;
        goto L3; // [42] 126
    }
    else{
        _4340 = NOVALUE;
    }
    // SubProg file_type pc: 45 op: STARTLINE (58)

    /** filesys.e:2050			if length( dirfil ) > 1 or eu:find('d', dirfil[1][2]) or (length(filename)=3 and filename[2]=':') then*/
    // SubProg file_type pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_dirfil_8027)){
            _4341 = SEQ_PTR(_dirfil_8027)->length;
    }
    else {
        _4341 = 1;
    }
    // SubProg file_type pc: 50 op: GREATER (6)
    _4342 = (_4341 > 1);
    _4341 = NOVALUE;
    // SubProg file_type pc: 54 op: SC1_OR (143)
    if (_4342 != 0) {
        _4343 = 1;
        goto L4; // [54] 75
    }
    // SubProg file_type pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dirfil_8027);
    _4344 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_type pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4344);
    _4345 = (object)*(((s1_ptr)_2)->base + 2);
    _4344 = NOVALUE;
    // SubProg file_type pc: 66 op: FIND_FROM (176)
    _4346 = find_from(100, _4345, 1);
    _4345 = NOVALUE;
    // SubProg file_type pc: 71 op: SC2_OR (144)
    _4343 = (_4346 != 0);
    // SubProg file_type pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 8024 op: 159
    // SubProg file_type pc: 75 op: SC1_OR_IF (147)
    if (_4343 != 0) {
        goto L5; // [75] 107
    }
    // SubProg file_type pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_8026)){
            _4348 = SEQ_PTR(_filename_8026)->length;
    }
    else {
        _4348 = 1;
    }
    // SubProg file_type pc: 82 op: EQUALS (3)
    _4349 = (_4348 == 3);
    _4348 = NOVALUE;
    // SubProg file_type pc: 86 op: SC1_AND (141)
    if (_4349 == 0) {
        DeRef(_4350);
        _4350 = 0;
        goto L6; // [86] 102
    }
    // SubProg file_type pc: 90 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_filename_8026);
    _4351 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg file_type pc: 94 op: EQUALS (3)
    if (IS_ATOM_INT(_4351)) {
        _4352 = (_4351 == 58);
    }
    else {
        _4352 = binary_op(EQUALS, _4351, 58);
    }
    _4351 = NOVALUE;
    // SubProg file_type pc: 98 op: SC2_AND (142)
    if (IS_ATOM_INT(_4352))
    _4350 = (_4352 != 0);
    else
    _4350 = DBL_PTR(_4352)->dbl != 0.0;
    // SubProg file_type pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 8024 op: 159
    // SubProg file_type pc: 102 op: NOP1 (159)
    // SubProg file_type pc: 103 op: IF (20)
    if (_4350 == 0)
    {
        _4350 = NOVALUE;
        goto L7; // [103] 116
    }
    else{
        _4350 = NOVALUE;
    }
    // SubProg file_type pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 8024 op: 159
    // SubProg file_type pc: 107 op: STARTLINE (58)

    /** filesys.e:2051				return FILETYPE_DIRECTORY*/
    // SubProg file_type pc: 109 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_8026
    DeRefDS(_filename_8026);

// block var dirfil_8027
    DeRef(_dirfil_8027);
    DeRef(_4352);
    _4352 = NOVALUE;
    DeRef(_4342);
    _4342 = NOVALUE;
    DeRef(_4349);
    _4349 = NOVALUE;
    return 2;
    // SubProg file_type pc: 113 op: ELSE (23)
    goto L8; // [113] 133
    // SubProg file_type pc: 115 op: NOP1 (159)
L7: // addr: 116 pc: 115 sub: 8024 op: 159
    // SubProg file_type pc: 116 op: STARTLINE (58)

    /** filesys.e:2053				return FILETYPE_FILE*/
    // SubProg file_type pc: 118 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_8026
    DeRefDS(_filename_8026);

// block var dirfil_8027
    DeRef(_dirfil_8027);
    DeRef(_4352);
    _4352 = NOVALUE;
    DeRef(_4342);
    _4342 = NOVALUE;
    DeRef(_4349);
    _4349 = NOVALUE;
    return 1;
    // SubProg file_type pc: 122 op: NOP1 (159)
    // SubProg file_type pc: 123 op: ELSE (23)
    goto L8; // [123] 133
    // SubProg file_type pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 8024 op: 159
    // SubProg file_type pc: 126 op: STARTLINE (58)

    /** filesys.e:2056			return FILETYPE_NOT_FOUND*/
    // SubProg file_type pc: 128 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_8026
    DeRefDS(_filename_8026);

// block var dirfil_8027
    DeRef(_dirfil_8027);
    DeRef(_4352);
    _4352 = NOVALUE;
    DeRef(_4342);
    _4342 = NOVALUE;
    DeRef(_4349);
    _4349 = NOVALUE;
    return 0;
    // SubProg file_type pc: 132 op: NOP1 (159)
L8: // addr: 133 pc: 132 sub: 8024 op: 159
    // SubProg file_type pc: 133 op: BADRETURNF (43)
    ;
}


object _18file_exists(object _name_8066)
{
    object _pName_8069 = NOVALUE;
    object _r_8071 = NOVALUE;
    object _4357 = NOVALUE; // 8074 4357
// skipping _4356  name type: 0
    object _4355 = NOVALUE; // 8072 4355
// skipping _4354  name type: 0
    object _4353 = NOVALUE; // 8068 4353
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_exists pc: 1 op: STARTLINE (58)

    /** filesys.e:2103		if atom(name) then*/
    // SubProg file_exists pc: 3 op: IS_AN_ATOM (67)
    _4353 = IS_ATOM(_name_8066);
    // SubProg file_exists pc: 6 op: IF (20)
    if (_4353 == 0)
    {
        _4353 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _4353 = NOVALUE;
    }
    // SubProg file_exists pc: 9 op: STARTLINE (58)

    /** filesys.e:2104			return 0*/
    // SubProg file_exists pc: 11 op: RETURNF (28)

// Exiting block BLOCK: file_exists

// block var name_8066
    DeRef(_name_8066);

// block var pName_8069
    DeRef(_pName_8069);

// block var r_8071
    DeRef(_r_8071);
    return 0;
    // SubProg file_exists pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 8064 op: 159
    // SubProg file_exists pc: 16 op: STARTLINE (58)

    /** filesys.e:2107		ifdef WINDOWS then*/
    // SubProg file_exists pc: 18 op: STARTLINE (58)

    /** filesys.e:2115			atom pName = machine:allocate_string(name)*/
    // SubProg file_exists pc: 20 op: PROC (27)
    Ref(_name_8066);
    _0 = _pName_8069;
    _pName_8069 = _3allocate_string(_name_8066, 0);
    DeRef(_0);
    // SubProg file_exists pc: 25 op: STARTLINE (58)

    /** filesys.e:2116			atom r = c_func(xGetFileAttributes, {pName, 0})*/
    // SubProg file_exists pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_exists pc: 29 op: RIGHT_BRACE_2 (85)
    Ref(_pName_8069);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pName_8069;
    ((intptr_t *)_2)[2] = 0;
    _4355 = MAKE_SEQ(_1);
    // SubProg file_exists pc: 33 op: C_FUNC (133)
    DeRef(_r_8071);
    _r_8071 = call_c(1, _18xGetFileAttributes_7138, _4355);
    DeRefDS(_4355);
    _4355 = NOVALUE;
    // SubProg file_exists pc: 38 op: STARTLINE (58)

    /** filesys.e:2117			machine:free(pName)*/
    // SubProg file_exists pc: 40 op: PROC (27)
    Ref(_pName_8069);
    _3free(_pName_8069);
    // SubProg file_exists pc: 43 op: STARTLINE (58)

    /** filesys.e:2119			return r = 0*/
    // SubProg file_exists pc: 45 op: EQUALS (3)
    if (IS_ATOM_INT(_r_8071)) {
        _4357 = (_r_8071 == 0);
    }
    else {
        _4357 = (DBL_PTR(_r_8071)->dbl == (eudouble)0);
    }
    // SubProg file_exists pc: 49 op: RETURNF (28)

// Exiting block BLOCK: file_exists

// block var name_8066
    DeRef(_name_8066);

// block var pName_8069
    DeRef(_pName_8069);

// block var r_8071
    DeRef(_r_8071);
    return _4357;
    // SubProg file_exists pc: 53 op: BADRETURNF (43)
    ;
}


object _18file_timestamp(object _fname_8077)
{
    object _d_8078 = NOVALUE;
    object _4372 = NOVALUE; // 8094 4372
    object _4371 = NOVALUE; // 8093 4371
    object _4370 = NOVALUE; // 8092 4370
    object _4369 = NOVALUE; // 8091 4369
    object _4368 = NOVALUE; // 8090 4368
    object _4367 = NOVALUE; // 8089 4367
    object _4366 = NOVALUE; // 8088 4366
    object _4365 = NOVALUE; // 8087 4365
    object _4364 = NOVALUE; // 8086 4364
    object _4363 = NOVALUE; // 8085 4363
    object _4362 = NOVALUE; // 8084 4362
    object _4361 = NOVALUE; // 8083 4361
    object _4360 = NOVALUE; // 8082 4360
    object _4359 = NOVALUE; // 8081 4359
// skipping _4358  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_timestamp pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg file_timestamp pc: 3 op: STARTLINE (58)

    /** filesys.e:2139		object d = dir(fname)*/
    // SubProg file_timestamp pc: 5 op: PROC (27)
    RefDS(_fname_8077);
    _0 = _d_8078;
    _d_8078 = _18dir(_fname_8077);
    DeRef(_0);
    // SubProg file_timestamp pc: 9 op: STARTLINE (58)

    /** filesys.e:2140		if atom(d) then return -1 end if*/
    // SubProg file_timestamp pc: 11 op: IS_AN_ATOM (67)
    _4359 = IS_ATOM(_d_8078);
    // SubProg file_timestamp pc: 14 op: IF (20)
    if (_4359 == 0)
    {
        _4359 = NOVALUE;
        goto L1; // [14] 22
    }
    else{
        _4359 = NOVALUE;
    }
    // SubProg file_timestamp pc: 17 op: RETURNF (28)

// Exiting block BLOCK: file_timestamp

// block var fname_8077
    DeRefDS(_fname_8077);

// block var d_8078
    DeRef(_d_8078);
    return -1;
    // SubProg file_timestamp pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 8075 op: 159
    // SubProg file_timestamp pc: 22 op: STARTLINE (58)

    /** filesys.e:2142		return datetime:new(d[1][D_YEAR], d[1][D_MONTH], d[1][D_DAY],*/
    // SubProg file_timestamp pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_8078);
    _4360 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 28 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4360);
    _4361 = (object)*(((s1_ptr)_2)->base + 4);
    _4360 = NOVALUE;
    // SubProg file_timestamp pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_8078);
    _4362 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4362);
    _4363 = (object)*(((s1_ptr)_2)->base + 5);
    _4362 = NOVALUE;
    // SubProg file_timestamp pc: 40 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_8078);
    _4364 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4364);
    _4365 = (object)*(((s1_ptr)_2)->base + 6);
    _4364 = NOVALUE;
    // SubProg file_timestamp pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_8078);
    _4366 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 52 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4366);
    _4367 = (object)*(((s1_ptr)_2)->base + 7);
    _4366 = NOVALUE;
    // SubProg file_timestamp pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_8078);
    _4368 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4368);
    _4369 = (object)*(((s1_ptr)_2)->base + 8);
    _4368 = NOVALUE;
    // SubProg file_timestamp pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_8078);
    _4370 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 68 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4370);
    _4371 = (object)*(((s1_ptr)_2)->base + 9);
    _4370 = NOVALUE;
    // SubProg file_timestamp pc: 72 op: PROC (27)
    Ref(_4361);
    Ref(_4363);
    Ref(_4365);
    Ref(_4367);
    Ref(_4369);
    Ref(_4371);
    _4372 = _19new(_4361, _4363, _4365, _4367, _4369, _4371);
    _4361 = NOVALUE;
    _4363 = NOVALUE;
    _4365 = NOVALUE;
    _4367 = NOVALUE;
    _4369 = NOVALUE;
    _4371 = NOVALUE;
    // SubProg file_timestamp pc: 81 op: RETURNF (28)

// Exiting block BLOCK: file_timestamp

// block var fname_8077
    DeRefDS(_fname_8077);

// block var d_8078
    DeRef(_d_8078);
    return _4372;
    // SubProg file_timestamp pc: 85 op: BADRETURNF (43)
    ;
}


object _18locate_file(object _filename_8267, object _search_list_8268, object _subdir_8269)
{
    object _extra_paths_8270 = NOVALUE;
    object _this_path_8271 = NOVALUE;
    object _4545 = NOVALUE; // 8372 4545
    object _4544 = NOVALUE; // 8371 4544
// skipping _4543  name type: 0
    object _4542 = NOVALUE; // 8368 4542
// skipping _4541  name type: 0
    object _4540 = NOVALUE; // 8365 4540
// skipping _4539  name type: 0
    object _4538 = NOVALUE; // 8363 4538
    object _4537 = NOVALUE; // 8361 4537
    object _4536 = NOVALUE; // 8360 4536
// skipping _4535  name type: 0
    object _4534 = NOVALUE; // 8358 4534
    object _4533 = NOVALUE; // 8357 4533
    object _4532 = NOVALUE; // 8356 4532
// skipping _4531  name type: 0
    object _4530 = NOVALUE; // 8353 4530
    object _4529 = NOVALUE; // 8352 4529
    object _4528 = NOVALUE; // 8350 4528
// skipping _4527  name type: 0
// skipping _4526  name type: 0
    object _4525 = NOVALUE; // 8345 4525
    object _4524 = NOVALUE; // 8344 4524
// skipping _4523  name type: 0
    object _4522 = NOVALUE; // 8341 4522
// skipping _4521  name type: 0
    object _4520 = NOVALUE; // 8338 4520
    object _4519 = NOVALUE; // 8337 4519
// skipping _4518  name type: 0
// skipping _4517  name type: 0
    object _4516 = NOVALUE; // 8332 4516
// skipping _4515  name type: 0
// skipping _4513  name type: 0
// skipping _4512  name type: 0
    object _4511 = NOVALUE; // 8326 4511
// skipping _4510  name type: 0
// skipping _4508  name type: 0
    object _4507 = NOVALUE; // 8321 4507
// skipping _4502  name type: 0
// skipping _4500  name type: 0
// skipping _4498  name type: 0
    object _4497 = NOVALUE; // 8311 4497
// skipping _4495  name type: 0
    object _4494 = NOVALUE; // 8308 4494
// skipping _4492  name type: 0
    object _4491 = NOVALUE; // 8305 4491
    object _4490 = NOVALUE; // 8304 4490
// skipping _4489  name type: 0
// skipping _4487  name type: 0
    object _4486 = NOVALUE; // 8299 4486
// skipping _4484  name type: 0
    object _4483 = NOVALUE; // 8296 4483
    object _4481 = NOVALUE; // 8294 4481
// skipping _4480  name type: 0
// skipping _4478  name type: 0
    object _4477 = NOVALUE; // 8289 4477
// skipping _4476  name type: 0
    object _4475 = NOVALUE; // 8287 4475
    object _4474 = NOVALUE; // 8286 4474
// skipping _4473  name type: 0
// skipping _4472  name type: 0
// skipping _4471  name type: 0
    object _4470 = NOVALUE; // 8281 4470
    object _4469 = NOVALUE; // 8280 4469
// skipping _4468  name type: 0
// skipping _4467  name type: 0
    object _4466 = NOVALUE; // 8277 4466
// skipping _4465  name type: 0
    object _4464 = NOVALUE; // 8275 4464
    object _4463 = NOVALUE; // 8273 4463
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg locate_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 7 op: STARTLINE (58)

    /** filesys.e:2509		if absolute_path(filename) then*/
    // SubProg locate_file pc: 9 op: PROC (27)
    RefDS(_filename_8267);
    _4463 = _18absolute_path(_filename_8267);
    // SubProg locate_file pc: 13 op: IF (20)
    if (_4463 == 0) {
        DeRef(_4463);
        _4463 = NOVALUE;
        goto L1; // [13] 23
    }
    else {
        if (!IS_ATOM_INT(_4463) && DBL_PTR(_4463)->dbl == 0.0){
            DeRef(_4463);
            _4463 = NOVALUE;
            goto L1; // [13] 23
        }
        DeRef(_4463);
        _4463 = NOVALUE;
    }
    DeRef(_4463);
    _4463 = NOVALUE;
    // SubProg locate_file pc: 16 op: STARTLINE (58)

    /** filesys.e:2510			return filename*/
    // SubProg locate_file pc: 18 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var search_list_8268
    DeRefDS(_search_list_8268);

// block var subdir_8269
    DeRefDS(_subdir_8269);

// block var extra_paths_8270
    DeRef(_extra_paths_8270);

// block var this_path_8271
    DeRef(_this_path_8271);
    return _filename_8267;
    // SubProg locate_file pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 8265 op: 159
    // SubProg locate_file pc: 23 op: STARTLINE (58)

    /** filesys.e:2513		if length(search_list) = 0 then*/
    // SubProg locate_file pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_search_list_8268)){
            _4464 = SEQ_PTR(_search_list_8268)->length;
    }
    else {
        _4464 = 1;
    }
    // SubProg locate_file pc: 28 op: EQUALS_IFW_I (121)
    if (_4464 != 0)
    goto L2; // [28] 283
    // SubProg locate_file pc: 32 op: STARTLINE (58)

    /** filesys.e:2514			search_list = append(search_list, "." & SLASH)*/
    // SubProg locate_file pc: 34 op: CONCAT (15)
    Append(&_4466, _3846, 47);
    // SubProg locate_file pc: 38 op: APPEND (35)
    RefDS(_4466);
    Append(&_search_list_8268, _search_list_8268, _4466);
    DeRefDS(_4466);
    _4466 = NOVALUE;
    // SubProg locate_file pc: 42 op: STARTLINE (58)

    /** filesys.e:2516			extra_paths = command_line()*/
    // SubProg locate_file pc: 44 op: COMMAND_LINE (100)
    DeRef(_extra_paths_8270);
    _extra_paths_8270 = Command_Line();
    // SubProg locate_file pc: 46 op: STARTLINE (58)

    /** filesys.e:2517			extra_paths = canonical_path(dirname(extra_paths[2]), 1)*/
    // SubProg locate_file pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_extra_paths_8270);
    _4469 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg locate_file pc: 52 op: PROC (27)
    RefDS(_4469);
    _4470 = _18dirname(_4469, 0);
    _4469 = NOVALUE;
    // SubProg locate_file pc: 57 op: PROC (27)
    _0 = _extra_paths_8270;
    _extra_paths_8270 = _18canonical_path(_4470, 1, 0);
    DeRefDS(_0);
    _4470 = NOVALUE;
    // SubProg locate_file pc: 63 op: STARTLINE (58)

    /** filesys.e:2518			search_list = append(search_list, extra_paths)*/
    // SubProg locate_file pc: 65 op: APPEND (35)
    Ref(_extra_paths_8270);
    Append(&_search_list_8268, _search_list_8268, _extra_paths_8270);
    // SubProg locate_file pc: 69 op: STARTLINE (58)

    /** filesys.e:2520			ifdef UNIX then*/
    // SubProg locate_file pc: 71 op: STARTLINE (58)

    /** filesys.e:2521				extra_paths = getenv("HOME")*/
    // SubProg locate_file pc: 73 op: GETENV (91)
    DeRef(_extra_paths_8270);
    _extra_paths_8270 = EGetEnv(_4125);
    // SubProg locate_file pc: 76 op: STARTLINE (58)

    /** filesys.e:2527			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 78 op: IS_A_SEQUENCE (68)
    _4474 = IS_SEQUENCE(_extra_paths_8270);
    // SubProg locate_file pc: 81 op: IF (20)
    if (_4474 == 0)
    {
        _4474 = NOVALUE;
        goto L3; // [81] 95
    }
    else{
        _4474 = NOVALUE;
    }
    // SubProg locate_file pc: 84 op: STARTLINE (58)

    /** filesys.e:2528				search_list = append(search_list, extra_paths & SLASH)*/
    // SubProg locate_file pc: 86 op: CONCAT (15)
    if (IS_SEQUENCE(_extra_paths_8270) && IS_ATOM(47)) {
        Append(&_4475, _extra_paths_8270, 47);
    }
    else if (IS_ATOM(_extra_paths_8270) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_4475, _extra_paths_8270, 47);
    }
    // SubProg locate_file pc: 90 op: APPEND (35)
    RefDS(_4475);
    Append(&_search_list_8268, _search_list_8268, _4475);
    DeRefDS(_4475);
    _4475 = NOVALUE;
    // SubProg locate_file pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 8265 op: 159
    // SubProg locate_file pc: 95 op: STARTLINE (58)

    /** filesys.e:2531			search_list = append(search_list, ".." & SLASH)*/
    // SubProg locate_file pc: 97 op: CONCAT (15)
    Append(&_4477, _3913, 47);
    // SubProg locate_file pc: 101 op: APPEND (35)
    RefDS(_4477);
    Append(&_search_list_8268, _search_list_8268, _4477);
    DeRefDS(_4477);
    _4477 = NOVALUE;
    // SubProg locate_file pc: 105 op: STARTLINE (58)

    /** filesys.e:2533			extra_paths = getenv("EUDIR")*/
    // SubProg locate_file pc: 107 op: GETENV (91)
    DeRef(_extra_paths_8270);
    _extra_paths_8270 = EGetEnv(_4479);
    // SubProg locate_file pc: 110 op: STARTLINE (58)

    /** filesys.e:2534			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 112 op: IS_A_SEQUENCE (68)
    _4481 = IS_SEQUENCE(_extra_paths_8270);
    // SubProg locate_file pc: 115 op: IF (20)
    if (_4481 == 0)
    {
        _4481 = NOVALUE;
        goto L4; // [115] 145
    }
    else{
        _4481 = NOVALUE;
    }
    // SubProg locate_file pc: 118 op: STARTLINE (58)

    /** filesys.e:2535				search_list = append(search_list, extra_paths & SLASH & "bin" & SLASH)*/
    // SubProg locate_file pc: 120 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4482;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8270;
        Concat_N((object_ptr)&_4483, concat_list, 4);
    }
    // SubProg locate_file pc: 127 op: APPEND (35)
    RefDS(_4483);
    Append(&_search_list_8268, _search_list_8268, _4483);
    DeRefDS(_4483);
    _4483 = NOVALUE;
    // SubProg locate_file pc: 131 op: STARTLINE (58)

    /** filesys.e:2536				search_list = append(search_list, extra_paths & SLASH & "docs" & SLASH)*/
    // SubProg locate_file pc: 133 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4485;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8270;
        Concat_N((object_ptr)&_4486, concat_list, 4);
    }
    // SubProg locate_file pc: 140 op: APPEND (35)
    RefDS(_4486);
    Append(&_search_list_8268, _search_list_8268, _4486);
    DeRefDS(_4486);
    _4486 = NOVALUE;
    // SubProg locate_file pc: 144 op: NOP1 (159)
L4: // addr: 145 pc: 144 sub: 8265 op: 159
    // SubProg locate_file pc: 145 op: STARTLINE (58)

    /** filesys.e:2539			extra_paths = getenv("EUDIST")*/
    // SubProg locate_file pc: 147 op: GETENV (91)
    DeRef(_extra_paths_8270);
    _extra_paths_8270 = EGetEnv(_4488);
    // SubProg locate_file pc: 150 op: STARTLINE (58)

    /** filesys.e:2540			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 152 op: IS_A_SEQUENCE (68)
    _4490 = IS_SEQUENCE(_extra_paths_8270);
    // SubProg locate_file pc: 155 op: IF (20)
    if (_4490 == 0)
    {
        _4490 = NOVALUE;
        goto L5; // [155] 195
    }
    else{
        _4490 = NOVALUE;
    }
    // SubProg locate_file pc: 158 op: STARTLINE (58)

    /** filesys.e:2541				search_list = append(search_list, extra_paths & SLASH)*/
    // SubProg locate_file pc: 160 op: CONCAT (15)
    if (IS_SEQUENCE(_extra_paths_8270) && IS_ATOM(47)) {
        Append(&_4491, _extra_paths_8270, 47);
    }
    else if (IS_ATOM(_extra_paths_8270) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_4491, _extra_paths_8270, 47);
    }
    // SubProg locate_file pc: 164 op: APPEND (35)
    RefDS(_4491);
    Append(&_search_list_8268, _search_list_8268, _4491);
    DeRefDS(_4491);
    _4491 = NOVALUE;
    // SubProg locate_file pc: 168 op: STARTLINE (58)

    /** filesys.e:2542				search_list = append(search_list, extra_paths & SLASH & "etc" & SLASH)*/
    // SubProg locate_file pc: 170 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4493;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8270;
        Concat_N((object_ptr)&_4494, concat_list, 4);
    }
    // SubProg locate_file pc: 177 op: APPEND (35)
    RefDS(_4494);
    Append(&_search_list_8268, _search_list_8268, _4494);
    DeRefDS(_4494);
    _4494 = NOVALUE;
    // SubProg locate_file pc: 181 op: STARTLINE (58)

    /** filesys.e:2543				search_list = append(search_list, extra_paths & SLASH & "data" & SLASH)*/
    // SubProg locate_file pc: 183 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _4496;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_8270;
        Concat_N((object_ptr)&_4497, concat_list, 4);
    }
    // SubProg locate_file pc: 190 op: APPEND (35)
    RefDS(_4497);
    Append(&_search_list_8268, _search_list_8268, _4497);
    DeRefDS(_4497);
    _4497 = NOVALUE;
    // SubProg locate_file pc: 194 op: NOP1 (159)
L5: // addr: 195 pc: 194 sub: 8265 op: 159
    // SubProg locate_file pc: 195 op: STARTLINE (58)

    /** filesys.e:2546			ifdef UNIX then*/
    // SubProg locate_file pc: 197 op: STARTLINE (58)

    /** filesys.e:2548				search_list = append( search_list, "/usr/local/share/euphoria/bin/" )*/
    // SubProg locate_file pc: 199 op: APPEND (35)
    RefDS(_4499);
    Append(&_search_list_8268, _search_list_8268, _4499);
    // SubProg locate_file pc: 203 op: STARTLINE (58)

    /** filesys.e:2549				search_list = append( search_list, "/usr/share/euphoria/bin/" )*/
    // SubProg locate_file pc: 205 op: APPEND (35)
    RefDS(_4501);
    Append(&_search_list_8268, _search_list_8268, _4501);
    // SubProg locate_file pc: 209 op: STARTLINE (58)

    /** filesys.e:2552			search_list &= include_paths(1)*/
    // SubProg locate_file pc: 211 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_4506);
    ((intptr_t*)_2)[1] = _4506;
    RefDS(_4505);
    ((intptr_t*)_2)[2] = _4505;
    RefDS(_4504);
    ((intptr_t*)_2)[3] = _4504;
    RefDS(_4503);
    ((intptr_t*)_2)[4] = _4503;
    _4507 = MAKE_SEQ(_1);
    // SubProg locate_file pc: 218 op: CONCAT (15)
    Concat((object_ptr)&_search_list_8268, _search_list_8268, _4507);
    DeRefDS(_4507);
    _4507 = NOVALUE;
    // SubProg locate_file pc: 222 op: STARTLINE (58)

    /** filesys.e:2555			extra_paths = getenv("USERPATH")*/
    // SubProg locate_file pc: 224 op: GETENV (91)
    DeRef(_extra_paths_8270);
    _extra_paths_8270 = EGetEnv(_4509);
    // SubProg locate_file pc: 227 op: STARTLINE (58)

    /** filesys.e:2556			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 229 op: IS_A_SEQUENCE (68)
    _4511 = IS_SEQUENCE(_extra_paths_8270);
    // SubProg locate_file pc: 232 op: IF (20)
    if (_4511 == 0)
    {
        _4511 = NOVALUE;
        goto L6; // [232] 251
    }
    else{
        _4511 = NOVALUE;
    }
    // SubProg locate_file pc: 235 op: STARTLINE (58)

    /** filesys.e:2557				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    // SubProg locate_file pc: 237 op: PROC (27)
    Ref(_extra_paths_8270);
    _0 = _extra_paths_8270;
    _extra_paths_8270 = _23split(_extra_paths_8270, 58, 0, 0);
    DeRefi(_0);
    // SubProg locate_file pc: 244 op: STARTLINE (58)

    /** filesys.e:2558				search_list &= extra_paths*/
    // SubProg locate_file pc: 246 op: CONCAT (15)
    if (IS_SEQUENCE(_search_list_8268) && IS_ATOM(_extra_paths_8270)) {
        Ref(_extra_paths_8270);
        Append(&_search_list_8268, _search_list_8268, _extra_paths_8270);
    }
    else if (IS_ATOM(_search_list_8268) && IS_SEQUENCE(_extra_paths_8270)) {
    }
    else {
        Concat((object_ptr)&_search_list_8268, _search_list_8268, _extra_paths_8270);
    }
    // SubProg locate_file pc: 250 op: NOP1 (159)
L6: // addr: 251 pc: 250 sub: 8265 op: 159
    // SubProg locate_file pc: 251 op: STARTLINE (58)

    /** filesys.e:2561			extra_paths = getenv("PATH")*/
    // SubProg locate_file pc: 253 op: GETENV (91)
    DeRef(_extra_paths_8270);
    _extra_paths_8270 = EGetEnv(_4514);
    // SubProg locate_file pc: 256 op: STARTLINE (58)

    /** filesys.e:2562			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 258 op: IS_A_SEQUENCE (68)
    _4516 = IS_SEQUENCE(_extra_paths_8270);
    // SubProg locate_file pc: 261 op: IF (20)
    if (_4516 == 0)
    {
        _4516 = NOVALUE;
        goto L7; // [261] 308
    }
    else{
        _4516 = NOVALUE;
    }
    // SubProg locate_file pc: 264 op: STARTLINE (58)

    /** filesys.e:2563				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    // SubProg locate_file pc: 266 op: PROC (27)
    Ref(_extra_paths_8270);
    _0 = _extra_paths_8270;
    _extra_paths_8270 = _23split(_extra_paths_8270, 58, 0, 0);
    DeRefi(_0);
    // SubProg locate_file pc: 273 op: STARTLINE (58)

    /** filesys.e:2564				search_list &= extra_paths*/
    // SubProg locate_file pc: 275 op: CONCAT (15)
    if (IS_SEQUENCE(_search_list_8268) && IS_ATOM(_extra_paths_8270)) {
        Ref(_extra_paths_8270);
        Append(&_search_list_8268, _search_list_8268, _extra_paths_8270);
    }
    else if (IS_ATOM(_search_list_8268) && IS_SEQUENCE(_extra_paths_8270)) {
    }
    else {
        Concat((object_ptr)&_search_list_8268, _search_list_8268, _extra_paths_8270);
    }
    // SubProg locate_file pc: 279 op: NOP1 (159)
    // SubProg locate_file pc: 280 op: ELSE (23)
    goto L7; // [280] 308
    // SubProg locate_file pc: 282 op: NOP1 (159)
L2: // addr: 283 pc: 282 sub: 8265 op: 159
    // SubProg locate_file pc: 283 op: STARTLINE (58)

    /** filesys.e:2567			if integer(search_list[1]) then*/
    // SubProg locate_file pc: 285 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_search_list_8268);
    _4519 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg locate_file pc: 289 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_4519))
    _4520 = 1;
    else if (IS_ATOM_DBL(_4519))
    _4520 = IS_ATOM_INT(DoubleToInt(_4519));
    else
    _4520 = 0;
    _4519 = NOVALUE;
    // SubProg locate_file pc: 292 op: IF (20)
    if (_4520 == 0)
    {
        _4520 = NOVALUE;
        goto L8; // [292] 307
    }
    else{
        _4520 = NOVALUE;
    }
    // SubProg locate_file pc: 295 op: STARTLINE (58)

    /** filesys.e:2568				search_list = stdseq:split(search_list, PATHSEP)*/
    // SubProg locate_file pc: 297 op: PROC (27)
    RefDS(_search_list_8268);
    _0 = _search_list_8268;
    _search_list_8268 = _23split(_search_list_8268, 58, 0, 0);
    DeRefDS(_0);
    // SubProg locate_file pc: 304 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 8265 op: 159
    // SubProg locate_file pc: 307 op: NOP1 (159)
L7: // addr: 308 pc: 307 sub: 8265 op: 159
    // SubProg locate_file pc: 308 op: STARTLINE (58)

    /** filesys.e:2572		if length(subdir) > 0 then*/
    // SubProg locate_file pc: 310 op: LENGTH (42)
    if (IS_SEQUENCE(_subdir_8269)){
            _4522 = SEQ_PTR(_subdir_8269)->length;
    }
    else {
        _4522 = 1;
    }
    // SubProg locate_file pc: 313 op: GREATER_IFW_I (124)
    if (_4522 <= 0)
    goto L9; // [313] 338
    // SubProg locate_file pc: 317 op: STARTLINE (58)

    /** filesys.e:2573			if subdir[$] != SLASH then*/
    // SubProg locate_file pc: 319 op: LENGTH (42)
    if (IS_SEQUENCE(_subdir_8269)){
            _4524 = SEQ_PTR(_subdir_8269)->length;
    }
    else {
        _4524 = 1;
    }
    // SubProg locate_file pc: 322 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_subdir_8269);
    _4525 = (object)*(((s1_ptr)_2)->base + _4524);
    // SubProg locate_file pc: 326 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _4525, 47)){
        _4525 = NOVALUE;
        goto LA; // [326] 337
    }
    _4525 = NOVALUE;
    // SubProg locate_file pc: 330 op: STARTLINE (58)

    /** filesys.e:2574				subdir &= SLASH*/
    // SubProg locate_file pc: 332 op: CONCAT (15)
    Append(&_subdir_8269, _subdir_8269, 47);
    // SubProg locate_file pc: 336 op: NOP1 (159)
LA: // addr: 337 pc: 336 sub: 8265 op: 159
    // SubProg locate_file pc: 337 op: NOP1 (159)
L9: // addr: 338 pc: 337 sub: 8265 op: 159
    // SubProg locate_file pc: 338 op: STARTLINE (58)

    /** filesys.e:2578		for i = 1 to length(search_list) do*/
    // SubProg locate_file pc: 340 op: LENGTH (42)
    if (IS_SEQUENCE(_search_list_8268)){
            _4528 = SEQ_PTR(_search_list_8268)->length;
    }
    else {
        _4528 = 1;
    }
    // SubProg locate_file pc: 343 op: FOR_I (125)
    {
        object _i_8349;
        _i_8349 = 1;
LB: // addr: 350 pc: 343 sub: 8265 op: 125
        if (_i_8349 > _4528){
            goto LC; // [343] 466
        }
        // SubProg locate_file pc: 350 op: STARTLINE (58)

        /** filesys.e:2579			if length(search_list[i]) = 0 then*/
        // SubProg locate_file pc: 352 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_8268);
        _4529 = (object)*(((s1_ptr)_2)->base + _i_8349);
        // SubProg locate_file pc: 356 op: LENGTH (42)
        if (IS_SEQUENCE(_4529)){
                _4530 = SEQ_PTR(_4529)->length;
        }
        else {
            _4530 = 1;
        }
        _4529 = NOVALUE;
        // SubProg locate_file pc: 359 op: EQUALS_IFW_I (121)
        if (_4530 != 0)
        goto LD; // [359] 368
        // SubProg locate_file pc: 363 op: STARTLINE (58)

        /** filesys.e:2580				continue*/
        // SubProg locate_file pc: 365 op: ELSE (23)
        goto LE; // [365] 461
        // SubProg locate_file pc: 367 op: NOP1 (159)
LD: // addr: 368 pc: 367 sub: 8265 op: 159
        // SubProg locate_file pc: 368 op: STARTLINE (58)

        /** filesys.e:2583			if search_list[i][$] != SLASH then*/
        // SubProg locate_file pc: 370 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_8268);
        _4532 = (object)*(((s1_ptr)_2)->base + _i_8349);
        // SubProg locate_file pc: 374 op: LENGTH (42)
        if (IS_SEQUENCE(_4532)){
                _4533 = SEQ_PTR(_4532)->length;
        }
        else {
            _4533 = 1;
        }
        // SubProg locate_file pc: 377 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_4532);
        _4534 = (object)*(((s1_ptr)_2)->base + _4533);
        _4532 = NOVALUE;
        // SubProg locate_file pc: 381 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _4534, 47)){
            _4534 = NOVALUE;
            goto LF; // [381] 400
        }
        _4534 = NOVALUE;
        // SubProg locate_file pc: 385 op: STARTLINE (58)

        /** filesys.e:2584				search_list[i] &= SLASH*/
        // SubProg locate_file pc: 387 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_search_list_8268);
        _4536 = (object)*(((s1_ptr)_2)->base + _i_8349);
        // SubProg locate_file pc: 391 op: CONCAT (15)
        if (IS_SEQUENCE(_4536) && IS_ATOM(47)) {
            Append(&_4537, _4536, 47);
        }
        else if (IS_ATOM(_4536) && IS_SEQUENCE(47)) {
        }
        else {
            Concat((object_ptr)&_4537, _4536, 47);
            _4536 = NOVALUE;
        }
        _4536 = NOVALUE;
        // SubProg locate_file pc: 395 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_search_list_8268);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _search_list_8268 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8349);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4537;
        if( _1 != _4537 ){
            DeRef(_1);
        }
        _4537 = NOVALUE;
        // SubProg locate_file pc: 399 op: NOP1 (159)
LF: // addr: 400 pc: 399 sub: 8265 op: 159
        // SubProg locate_file pc: 400 op: STARTLINE (58)

        /** filesys.e:2588			if length(subdir) > 0 then*/
        // SubProg locate_file pc: 402 op: LENGTH (42)
        if (IS_SEQUENCE(_subdir_8269)){
                _4538 = SEQ_PTR(_subdir_8269)->length;
        }
        else {
            _4538 = 1;
        }
        // SubProg locate_file pc: 405 op: GREATER_IFW_I (124)
        if (_4538 <= 0)
        goto L10; // [405] 424
        // SubProg locate_file pc: 409 op: STARTLINE (58)

        /** filesys.e:2589				this_path = search_list[i] & subdir & filename*/
        // SubProg locate_file pc: 411 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_8268);
        _4540 = (object)*(((s1_ptr)_2)->base + _i_8349);
        // SubProg locate_file pc: 415 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _filename_8267;
            concat_list[1] = _subdir_8269;
            concat_list[2] = _4540;
            Concat_N((object_ptr)&_this_path_8271, concat_list, 3);
        }
        _4540 = NOVALUE;
        // SubProg locate_file pc: 421 op: ELSE (23)
        goto L11; // [421] 435
        // SubProg locate_file pc: 423 op: NOP1 (159)
L10: // addr: 424 pc: 423 sub: 8265 op: 159
        // SubProg locate_file pc: 424 op: STARTLINE (58)

        /** filesys.e:2591				this_path = search_list[i] & filename*/
        // SubProg locate_file pc: 426 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_8268);
        _4542 = (object)*(((s1_ptr)_2)->base + _i_8349);
        // SubProg locate_file pc: 430 op: CONCAT (15)
        if (IS_SEQUENCE(_4542) && IS_ATOM(_filename_8267)) {
        }
        else if (IS_ATOM(_4542) && IS_SEQUENCE(_filename_8267)) {
            Ref(_4542);
            Prepend(&_this_path_8271, _filename_8267, _4542);
        }
        else {
            Concat((object_ptr)&_this_path_8271, _4542, _filename_8267);
            _4542 = NOVALUE;
        }
        _4542 = NOVALUE;
        // SubProg locate_file pc: 434 op: NOP1 (159)
L11: // addr: 435 pc: 434 sub: 8265 op: 159
        // SubProg locate_file pc: 435 op: STARTLINE (58)

        /** filesys.e:2594			if file_exists(this_path) then*/
        // SubProg locate_file pc: 437 op: PRIVATE_INIT_CHECK (30)
        // SubProg locate_file pc: 439 op: PROC (27)
        RefDS(_this_path_8271);
        _4544 = _18file_exists(_this_path_8271);
        // SubProg locate_file pc: 443 op: IF (20)
        if (_4544 == 0) {
            DeRef(_4544);
            _4544 = NOVALUE;
            goto L12; // [443] 459
        }
        else {
            if (!IS_ATOM_INT(_4544) && DBL_PTR(_4544)->dbl == 0.0){
                DeRef(_4544);
                _4544 = NOVALUE;
                goto L12; // [443] 459
            }
            DeRef(_4544);
            _4544 = NOVALUE;
        }
        DeRef(_4544);
        _4544 = NOVALUE;
        // SubProg locate_file pc: 446 op: STARTLINE (58)

        /** filesys.e:2595				return canonical_path(this_path)*/
        // SubProg locate_file pc: 448 op: PROC (27)
        RefDS(_this_path_8271);
        _4545 = _18canonical_path(_this_path_8271, 0, 0);
        // SubProg locate_file pc: 454 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var filename_8267
        DeRefDS(_filename_8267);

// block var search_list_8268
        DeRefDS(_search_list_8268);

// block var subdir_8269
        DeRefDS(_subdir_8269);

// block var extra_paths_8270
        DeRef(_extra_paths_8270);

// block var this_path_8271
        DeRefDS(_this_path_8271);
        _4529 = NOVALUE;
        return _4545;
        // SubProg locate_file pc: 458 op: NOP1 (159)
L12: // addr: 459 pc: 458 sub: 8265 op: 159
        // SubProg locate_file pc: 459 op: STARTLINE (58)

        /** filesys.e:2598		end for*/
        // SubProg locate_file pc: 461 op: ENDFOR_INT_UP1 (54)
LE: // addr: 461 pc: 461 sub: 8265 op: 54
        _i_8349 = _i_8349 + 1;
        goto LB; // [461] 350
LC: // addr: 466 pc: 461 sub: 8265 op: 54
        ;
    }
    // SubProg locate_file pc: 466 op: STARTLINE (58)

    /** filesys.e:2599		return filename*/
    // SubProg locate_file pc: 468 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var search_list_8268
    DeRefDS(_search_list_8268);

// block var subdir_8269
    DeRefDS(_subdir_8269);

// block var extra_paths_8270
    DeRef(_extra_paths_8270);

// block var this_path_8271
    DeRef(_this_path_8271);
    DeRef(_4545);
    _4545 = NOVALUE;
    _4529 = NOVALUE;
    return _filename_8267;
    // SubProg locate_file pc: 472 op: BADRETURNF (43)
    ;
}


object _18count_files(object _orig_path_8448, object _dir_info_8449, object _inst_8450)
{
    object _pos_8451 = NOVALUE;
    object _ext_8452 = NOVALUE;
    object _fileext_inlined_fileext_at_218_8493 = NOVALUE;
    object _data_inlined_fileext_at_218_8492 = NOVALUE;
    object _path_inlined_fileext_at_215_8491 = NOVALUE;
    object _4648 = NOVALUE; // 8530 4648
    object _4647 = NOVALUE; // 8529 4647
    object _4646 = NOVALUE; // 8528 4646
// skipping _4645  name type: 0
    object _4644 = NOVALUE; // 8526 4644
    object _4643 = NOVALUE; // 8525 4643
    object _4642 = NOVALUE; // 8524 4642
    object _4641 = NOVALUE; // 8523 4641
// skipping _4640  name type: 0
    object _4639 = NOVALUE; // 8521 4639
    object _4638 = NOVALUE; // 8520 4638
// skipping _4637  name type: 0
    object _4636 = NOVALUE; // 8518 4636
    object _4635 = NOVALUE; // 8517 4635
    object _4634 = NOVALUE; // 8516 4634
    object _4633 = NOVALUE; // 8515 4633
    object _4632 = NOVALUE; // 8514 4632
    object _4631 = NOVALUE; // 8513 4631
    object _4630 = NOVALUE; // 8512 4630
// skipping _4629  name type: 0
    object _4628 = NOVALUE; // 8510 4628
    object _4627 = NOVALUE; // 8509 4627
// skipping _4626  name type: 0
    object _4625 = NOVALUE; // 8506 4625
    object _4624 = NOVALUE; // 8505 4624
    object _4623 = NOVALUE; // 8504 4623
    object _4622 = NOVALUE; // 8503 4622
    object _4621 = NOVALUE; // 8502 4621
    object _4620 = NOVALUE; // 8501 4620
    object _4619 = NOVALUE; // 8499 4619
    object _4618 = NOVALUE; // 8498 4618
    object _4617 = NOVALUE; // 8497 4617
    object _4616 = NOVALUE; // 8496 4616
    object _4615 = NOVALUE; // 8489 4615
    object _4614 = NOVALUE; // 8488 4614
    object _4613 = NOVALUE; // 8487 4613
// skipping _4612  name type: 0
    object _4611 = NOVALUE; // 8485 4611
    object _4610 = NOVALUE; // 8484 4610
    object _4609 = NOVALUE; // 8482 4609
    object _4608 = NOVALUE; // 8481 4608
// skipping _4607  name type: 0
    object _4606 = NOVALUE; // 8479 4606
    object _4605 = NOVALUE; // 8478 4605
    object _4604 = NOVALUE; // 8477 4604
    object _4603 = NOVALUE; // 8476 4603
    object _4602 = NOVALUE; // 8474 4602
    object _4601 = NOVALUE; // 8473 4601
    object _4600 = NOVALUE; // 8472 4600
// skipping _4599  name type: 0
    object _4598 = NOVALUE; // 8470 4598
    object _4597 = NOVALUE; // 8469 4597
    object _4596 = NOVALUE; // 8468 4596
    object _4595 = NOVALUE; // 8467 4595
    object _4594 = NOVALUE; // 8465 4594
    object _4593 = NOVALUE; // 8464 4593
// skipping _4591  name type: 0
    object _4590 = NOVALUE; // 8460 4590
    object _4589 = NOVALUE; // 8458 4589
    object _4588 = NOVALUE; // 8457 4588
    object _4587 = NOVALUE; // 8455 4587
    object _4586 = NOVALUE; // 8454 4586
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg count_files pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 7 op: STARTLINE (58)

    /** filesys.e:2761		integer pos = 0*/
    // SubProg count_files pc: 9 op: ASSIGN_I (113)
    _pos_8451 = 0;
    // SubProg count_files pc: 12 op: STARTLINE (58)

    /** filesys.e:2764		orig_path = orig_path*/
    // SubProg count_files pc: 14 op: ASSIGN (18)
    RefDS(_orig_path_8448);
    DeRefDS(_orig_path_8448);
    _orig_path_8448 = _orig_path_8448;
    // SubProg count_files pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 19 op: STARTLINE (58)

    /** filesys.e:2765		if equal(dir_info[D_NAME], ".") then*/
    // SubProg count_files pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4586 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 25 op: EQUAL (153)
    if (_4586 == _3846)
    _4587 = 1;
    else if (IS_ATOM_INT(_4586) && IS_ATOM_INT(_3846))
    _4587 = 0;
    else
    _4587 = (compare(_4586, _3846) == 0);
    _4586 = NOVALUE;
    // SubProg count_files pc: 29 op: IF (20)
    if (_4587 == 0)
    {
        _4587 = NOVALUE;
        goto L1; // [29] 39
    }
    else{
        _4587 = NOVALUE;
    }
    // SubProg count_files pc: 32 op: STARTLINE (58)

    /** filesys.e:2766			return 0*/
    // SubProg count_files pc: 34 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_8448
    DeRefDS(_orig_path_8448);

// block var dir_info_8449
    DeRefDS(_dir_info_8449);

// block var inst_8450
    DeRefDS(_inst_8450);

// block var pos_8451

// block var ext_8452
    DeRef(_ext_8452);
    return 0;
    // SubProg count_files pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 8446 op: 159
    // SubProg count_files pc: 39 op: STARTLINE (58)

    /** filesys.e:2768		if equal(dir_info[D_NAME], "..") then*/
    // SubProg count_files pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4588 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 45 op: EQUAL (153)
    if (_4588 == _3913)
    _4589 = 1;
    else if (IS_ATOM_INT(_4588) && IS_ATOM_INT(_3913))
    _4589 = 0;
    else
    _4589 = (compare(_4588, _3913) == 0);
    _4588 = NOVALUE;
    // SubProg count_files pc: 49 op: IF (20)
    if (_4589 == 0)
    {
        _4589 = NOVALUE;
        goto L2; // [49] 59
    }
    else{
        _4589 = NOVALUE;
    }
    // SubProg count_files pc: 52 op: STARTLINE (58)

    /** filesys.e:2769			return 0*/
    // SubProg count_files pc: 54 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_8448
    DeRefDS(_orig_path_8448);

// block var dir_info_8449
    DeRefDS(_dir_info_8449);

// block var inst_8450
    DeRefDS(_inst_8450);

// block var pos_8451

// block var ext_8452
    DeRef(_ext_8452);
    return 0;
    // SubProg count_files pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 8446 op: 159
    // SubProg count_files pc: 59 op: STARTLINE (58)

    /** filesys.e:2773		if inst[1] = 0 then -- count all is false*/
    // SubProg count_files pc: 61 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4590 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 65 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4590, 0)){
        _4590 = NOVALUE;
        goto L3; // [65] 112
    }
    _4590 = NOVALUE;
    // SubProg count_files pc: 69 op: STARTLINE (58)

    /** filesys.e:2774			if find('h', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4593 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 75 op: FIND_FROM (176)
    _4594 = find_from(104, _4593, 1);
    _4593 = NOVALUE;
    // SubProg count_files pc: 80 op: IF (20)
    if (_4594 == 0)
    {
        _4594 = NOVALUE;
        goto L4; // [80] 90
    }
    else{
        _4594 = NOVALUE;
    }
    // SubProg count_files pc: 83 op: STARTLINE (58)

    /** filesys.e:2775				return 0*/
    // SubProg count_files pc: 85 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_8448
    DeRefDS(_orig_path_8448);

// block var dir_info_8449
    DeRefDS(_dir_info_8449);

// block var inst_8450
    DeRefDS(_inst_8450);

// block var pos_8451

// block var ext_8452
    DeRef(_ext_8452);
    return 0;
    // SubProg count_files pc: 89 op: NOP1 (159)
L4: // addr: 90 pc: 89 sub: 8446 op: 159
    // SubProg count_files pc: 90 op: STARTLINE (58)

    /** filesys.e:2778			if find('s', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 92 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4595 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 96 op: FIND_FROM (176)
    _4596 = find_from(115, _4595, 1);
    _4595 = NOVALUE;
    // SubProg count_files pc: 101 op: IF (20)
    if (_4596 == 0)
    {
        _4596 = NOVALUE;
        goto L5; // [101] 111
    }
    else{
        _4596 = NOVALUE;
    }
    // SubProg count_files pc: 104 op: STARTLINE (58)

    /** filesys.e:2779				return 0*/
    // SubProg count_files pc: 106 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_8448
    DeRefDS(_orig_path_8448);

// block var dir_info_8449
    DeRefDS(_dir_info_8449);

// block var inst_8450
    DeRefDS(_inst_8450);

// block var pos_8451

// block var ext_8452
    DeRef(_ext_8452);
    return 0;
    // SubProg count_files pc: 110 op: NOP1 (159)
L5: // addr: 111 pc: 110 sub: 8446 op: 159
    // SubProg count_files pc: 111 op: NOP1 (159)
L3: // addr: 112 pc: 111 sub: 8446 op: 159
    // SubProg count_files pc: 112 op: STARTLINE (58)

    /** filesys.e:2783		file_counters[inst[2]][COUNT_SIZE] += dir_info[D_SIZE]*/
    // SubProg count_files pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4597 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 120 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _18file_counters_8445 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4597))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4597)->dbl));
    else
    _3 = (object)(_4597 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 125 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4600 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg count_files pc: 129 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4601 = (object)*(((s1_ptr)_2)->base + 3);
    _4598 = NOVALUE;
    // SubProg count_files pc: 133 op: PLUS (11)
    if (IS_ATOM_INT(_4601) && IS_ATOM_INT(_4600)) {
        _4602 = _4601 + _4600;
        if ((object)((uintptr_t)_4602 + (uintptr_t)HIGH_BITS) >= 0){
            _4602 = NewDouble((eudouble)_4602);
        }
    }
    else {
        _4602 = binary_op(PLUS, _4601, _4600);
    }
    _4601 = NOVALUE;
    _4600 = NOVALUE;
    // SubProg count_files pc: 137 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4602;
    if( _1 != _4602 ){
        DeRef(_1);
    }
    _4602 = NOVALUE;
    _4598 = NOVALUE;
    // SubProg count_files pc: 141 op: STARTLINE (58)

    /** filesys.e:2784		if find('d', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 143 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4603 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 147 op: FIND_FROM (176)
    _4604 = find_from(100, _4603, 1);
    _4603 = NOVALUE;
    // SubProg count_files pc: 152 op: IF (20)
    if (_4604 == 0)
    {
        _4604 = NOVALUE;
        goto L6; // [152] 183
    }
    else{
        _4604 = NOVALUE;
    }
    // SubProg count_files pc: 155 op: STARTLINE (58)

    /** filesys.e:2785			file_counters[inst[2]][COUNT_DIRS] += 1*/
    // SubProg count_files pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 159 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4605 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 163 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _18file_counters_8445 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4605))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4605)->dbl));
    else
    _3 = (object)(_4605 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 168 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4608 = (object)*(((s1_ptr)_2)->base + 1);
    _4606 = NOVALUE;
    // SubProg count_files pc: 172 op: PLUS1 (93)
    if (IS_ATOM_INT(_4608)) {
        _4609 = _4608 + 1;
        if (_4609 > MAXINT){
            _4609 = NewDouble((eudouble)_4609);
        }
    }
    else
    _4609 = binary_op(PLUS, 1, _4608);
    _4608 = NOVALUE;
    // SubProg count_files pc: 176 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4609;
    if( _1 != _4609 ){
        DeRef(_1);
    }
    _4609 = NOVALUE;
    _4606 = NOVALUE;
    // SubProg count_files pc: 180 op: ELSE (23)
    goto L7; // [180] 460
    // SubProg count_files pc: 182 op: NOP1 (159)
L6: // addr: 183 pc: 182 sub: 8446 op: 159
    // SubProg count_files pc: 183 op: STARTLINE (58)

    /** filesys.e:2787			file_counters[inst[2]][COUNT_FILES] += 1*/
    // SubProg count_files pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 187 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4610 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 191 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _18file_counters_8445 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4610))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4610)->dbl));
    else
    _3 = (object)(_4610 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 196 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4613 = (object)*(((s1_ptr)_2)->base + 2);
    _4611 = NOVALUE;
    // SubProg count_files pc: 200 op: PLUS1 (93)
    if (IS_ATOM_INT(_4613)) {
        _4614 = _4613 + 1;
        if (_4614 > MAXINT){
            _4614 = NewDouble((eudouble)_4614);
        }
    }
    else
    _4614 = binary_op(PLUS, 1, _4613);
    _4613 = NOVALUE;
    // SubProg count_files pc: 204 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4614;
    if( _1 != _4614 ){
        DeRef(_1);
    }
    _4614 = NOVALUE;
    _4611 = NOVALUE;
    // SubProg count_files pc: 208 op: STARTLINE (58)

    /** filesys.e:2788			ifdef not UNIX then*/
    // SubProg count_files pc: 210 op: STARTLINE (58)

    /** filesys.e:2791				ext = fileext(dir_info[D_NAME])*/
    // SubProg count_files pc: 212 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4615 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 216 op: ASSIGN (18)
    Ref(_4615);
    DeRef(_path_inlined_fileext_at_215_8491);
    _path_inlined_fileext_at_215_8491 = _4615;
    _4615 = NOVALUE;
    // SubProg count_files pc: 219 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 221 op: STARTLINE (58)

    /** filesys.e:1403		data = pathinfo(path)*/
    // SubProg count_files pc: 223 op: PROC (27)
    Ref(_path_inlined_fileext_at_215_8491);
    _0 = _data_inlined_fileext_at_218_8492;
    _data_inlined_fileext_at_218_8492 = _18pathinfo(_path_inlined_fileext_at_215_8491, 0);
    DeRef(_0);
    // SubProg count_files pc: 228 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 230 op: STARTLINE (58)

    /** filesys.e:1404		return data[4]*/
    // SubProg count_files pc: 232 op: RHS_SUBS (25)
    DeRef(_ext_8452);
    _2 = (object)SEQ_PTR(_data_inlined_fileext_at_218_8492);
    _ext_8452 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_ext_8452);
    // SubProg count_files pc: 236 op: NOP1 (159)
    // SubProg count_files pc: 237 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-fileext from count_files @ 215

// block var path_inlined_fileext_at_215_8491
    DeRef(_path_inlined_fileext_at_215_8491);
    _path_inlined_fileext_at_215_8491 = NOVALUE;

// block var data_inlined_fileext_at_218_8492
    DeRef(_data_inlined_fileext_at_218_8492);
    _data_inlined_fileext_at_218_8492 = NOVALUE;
    // SubProg count_files pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 241 op: STARTLINE (58)

    /** filesys.e:2794			pos = 0*/
    // SubProg count_files pc: 243 op: ASSIGN_I (113)
    _pos_8451 = 0;
    // SubProg count_files pc: 246 op: STARTLINE (58)

    /** filesys.e:2795			for i = 1 to length(file_counters[inst[2]][COUNT_TYPES]) do*/
    // SubProg count_files pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 250 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4616 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 254 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!IS_ATOM_INT(_4616)){
        _4617 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4616)->dbl));
    }
    else{
        _4617 = (object)*(((s1_ptr)_2)->base + _4616);
    }
    // SubProg count_files pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4617);
    _4618 = (object)*(((s1_ptr)_2)->base + 4);
    _4617 = NOVALUE;
    // SubProg count_files pc: 262 op: LENGTH (42)
    if (IS_SEQUENCE(_4618)){
            _4619 = SEQ_PTR(_4618)->length;
    }
    else {
        _4619 = 1;
    }
    _4618 = NOVALUE;
    // SubProg count_files pc: 265 op: FOR_I (125)
    {
        object _i_8495;
        _i_8495 = 1;
L8: // addr: 272 pc: 265 sub: 8446 op: 125
        if (_i_8495 > _4619){
            goto L9; // [265] 322
        }
        // SubProg count_files pc: 272 op: STARTLINE (58)

        /** filesys.e:2796				if equal(file_counters[inst[2]][COUNT_TYPES][i][EXT_NAME], ext) then*/
        // SubProg count_files pc: 274 op: GLOBAL_INIT_CHECK (109)
        // SubProg count_files pc: 276 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_inst_8450);
        _4620 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg count_files pc: 280 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_18file_counters_8445);
        if (!IS_ATOM_INT(_4620)){
            _4621 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4620)->dbl));
        }
        else{
            _4621 = (object)*(((s1_ptr)_2)->base + _4620);
        }
        // SubProg count_files pc: 284 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_4621);
        _4622 = (object)*(((s1_ptr)_2)->base + 4);
        _4621 = NOVALUE;
        // SubProg count_files pc: 288 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_4622);
        _4623 = (object)*(((s1_ptr)_2)->base + _i_8495);
        _4622 = NOVALUE;
        // SubProg count_files pc: 292 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_4623);
        _4624 = (object)*(((s1_ptr)_2)->base + 1);
        _4623 = NOVALUE;
        // SubProg count_files pc: 296 op: PRIVATE_INIT_CHECK (30)
        // SubProg count_files pc: 298 op: EQUAL (153)
        if (_4624 == _ext_8452)
        _4625 = 1;
        else if (IS_ATOM_INT(_4624) && IS_ATOM_INT(_ext_8452))
        _4625 = 0;
        else
        _4625 = (compare(_4624, _ext_8452) == 0);
        _4624 = NOVALUE;
        // SubProg count_files pc: 302 op: IF (20)
        if (_4625 == 0)
        {
            _4625 = NOVALUE;
            goto LA; // [302] 315
        }
        else{
            _4625 = NOVALUE;
        }
        // SubProg count_files pc: 305 op: STARTLINE (58)

        /** filesys.e:2797					pos = i*/
        // SubProg count_files pc: 307 op: ASSIGN_I (113)
        _pos_8451 = _i_8495;
        // SubProg count_files pc: 310 op: STARTLINE (58)

        /** filesys.e:2798					exit*/
        // SubProg count_files pc: 312 op: EXIT (61)
        goto L9; // [312] 322
        // SubProg count_files pc: 314 op: NOP1 (159)
LA: // addr: 315 pc: 314 sub: 8446 op: 159
        // SubProg count_files pc: 315 op: STARTLINE (58)

        /** filesys.e:2800			end for*/
        // SubProg count_files pc: 317 op: ENDFOR_INT_UP1 (54)
        _i_8495 = _i_8495 + 1;
        goto L8; // [317] 272
L9: // addr: 322 pc: 317 sub: 8446 op: 54
        ;
    }
    // SubProg count_files pc: 322 op: STARTLINE (58)

    /** filesys.e:2802			if pos = 0 then*/
    // SubProg count_files pc: 324 op: EQUALS_IFW_I (121)
    if (_pos_8451 != 0)
    goto LB; // [324] 385
    // SubProg count_files pc: 328 op: STARTLINE (58)

    /** filesys.e:2803				file_counters[inst[2]][COUNT_TYPES] &= {{ext, 0, 0}}*/
    // SubProg count_files pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 332 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4627 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 336 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _18file_counters_8445 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4627))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4627)->dbl));
    else
    _3 = (object)(_4627 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 341 op: PRIVATE_INIT_CHECK (30)
    // SubProg count_files pc: 343 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_ext_8452);
    ((intptr_t*)_2)[1] = _ext_8452;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _4630 = MAKE_SEQ(_1);
    // SubProg count_files pc: 349 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _4630;
    _4631 = MAKE_SEQ(_1);
    _4630 = NOVALUE;
    // SubProg count_files pc: 353 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4632 = (object)*(((s1_ptr)_2)->base + 4);
    _4628 = NOVALUE;
    // SubProg count_files pc: 357 op: CONCAT (15)
    if (IS_SEQUENCE(_4632) && IS_ATOM(_4631)) {
    }
    else if (IS_ATOM(_4632) && IS_SEQUENCE(_4631)) {
        Ref(_4632);
        Prepend(&_4633, _4631, _4632);
    }
    else {
        Concat((object_ptr)&_4633, _4632, _4631);
        _4632 = NOVALUE;
    }
    _4632 = NOVALUE;
    DeRefDS(_4631);
    _4631 = NOVALUE;
    // SubProg count_files pc: 361 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4633;
    if( _1 != _4633 ){
        DeRef(_1);
    }
    _4633 = NOVALUE;
    _4628 = NOVALUE;
    // SubProg count_files pc: 365 op: STARTLINE (58)

    /** filesys.e:2804				pos = length(file_counters[inst[2]][COUNT_TYPES])*/
    // SubProg count_files pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 369 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4634 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 373 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!IS_ATOM_INT(_4634)){
        _4635 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4634)->dbl));
    }
    else{
        _4635 = (object)*(((s1_ptr)_2)->base + _4634);
    }
    // SubProg count_files pc: 377 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_4635);
    _4636 = (object)*(((s1_ptr)_2)->base + 4);
    _4635 = NOVALUE;
    // SubProg count_files pc: 381 op: LENGTH (42)
    if (IS_SEQUENCE(_4636)){
            _pos_8451 = SEQ_PTR(_4636)->length;
    }
    else {
        _pos_8451 = 1;
    }
    _4636 = NOVALUE;
    // SubProg count_files pc: 384 op: NOP1 (159)
LB: // addr: 385 pc: 384 sub: 8446 op: 159
    // SubProg count_files pc: 385 op: STARTLINE (58)

    /** filesys.e:2807			file_counters[inst[2]][COUNT_TYPES][pos][EXT_COUNT] += 1*/
    // SubProg count_files pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 389 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4638 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 393 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _18file_counters_8445 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4638))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4638)->dbl));
    else
    _3 = (object)(_4638 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 398 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _4639 = NOVALUE;
    // SubProg count_files pc: 403 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_8451 + ((s1_ptr)_2)->base);
    _4639 = NOVALUE;
    // SubProg count_files pc: 408 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4641 = (object)*(((s1_ptr)_2)->base + 2);
    _4639 = NOVALUE;
    // SubProg count_files pc: 412 op: PLUS1 (93)
    if (IS_ATOM_INT(_4641)) {
        _4642 = _4641 + 1;
        if (_4642 > MAXINT){
            _4642 = NewDouble((eudouble)_4642);
        }
    }
    else
    _4642 = binary_op(PLUS, 1, _4641);
    _4641 = NOVALUE;
    // SubProg count_files pc: 416 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4642;
    if( _1 != _4642 ){
        DeRef(_1);
    }
    _4642 = NOVALUE;
    _4639 = NOVALUE;
    // SubProg count_files pc: 420 op: STARTLINE (58)

    /** filesys.e:2808			file_counters[inst[2]][COUNT_TYPES][pos][EXT_SIZE] += dir_info[D_SIZE]*/
    // SubProg count_files pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 424 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_8450);
    _4643 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 428 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_18file_counters_8445);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _18file_counters_8445 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4643))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4643)->dbl));
    else
    _3 = (object)(_4643 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 433 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _4644 = NOVALUE;
    // SubProg count_files pc: 438 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_8451 + ((s1_ptr)_2)->base);
    _4644 = NOVALUE;
    // SubProg count_files pc: 443 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_8449);
    _4646 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg count_files pc: 447 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _4647 = (object)*(((s1_ptr)_2)->base + 3);
    _4644 = NOVALUE;
    // SubProg count_files pc: 451 op: PLUS (11)
    if (IS_ATOM_INT(_4647) && IS_ATOM_INT(_4646)) {
        _4648 = _4647 + _4646;
        if ((object)((uintptr_t)_4648 + (uintptr_t)HIGH_BITS) >= 0){
            _4648 = NewDouble((eudouble)_4648);
        }
    }
    else {
        _4648 = binary_op(PLUS, _4647, _4646);
    }
    _4647 = NOVALUE;
    _4646 = NOVALUE;
    // SubProg count_files pc: 455 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4648;
    if( _1 != _4648 ){
        DeRef(_1);
    }
    _4648 = NOVALUE;
    _4644 = NOVALUE;
    // SubProg count_files pc: 459 op: NOP1 (159)
L7: // addr: 460 pc: 459 sub: 8446 op: 159
    // SubProg count_files pc: 460 op: STARTLINE (58)

    /** filesys.e:2811		return 0*/
    // SubProg count_files pc: 462 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_8448
    DeRefDS(_orig_path_8448);

// block var dir_info_8449
    DeRefDS(_dir_info_8449);

// block var inst_8450
    DeRefDS(_inst_8450);

// block var pos_8451

// block var ext_8452
    DeRef(_ext_8452);
    _4616 = NOVALUE;
    _4627 = NOVALUE;
    _4620 = NOVALUE;
    _4638 = NOVALUE;
    _4610 = NOVALUE;
    _4643 = NOVALUE;
    _4618 = NOVALUE;
    _4634 = NOVALUE;
    _4605 = NOVALUE;
    _4597 = NOVALUE;
    _4636 = NOVALUE;
    return 0;
    // SubProg count_files pc: 466 op: BADRETURNF (43)
    ;
}



// 0x518FD3C4
