// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _16find_first_wildcard(object _name_9855, object _from_9856)
{
    object _asterisk_at_9857 = NOVALUE;
    object _question_at_9859 = NOVALUE;
    object _first_wildcard_at_9861 = NOVALUE;
    object _5467 = NOVALUE; // 9866 5467
    object _5466 = NOVALUE; // 9865 5466
// skipping _5465  name type: 0
// skipping _5464  name type: 0
// skipping _5463  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_first_wildcard pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_first_wildcard pc: 3 op: INTEGER_CHECK (96)
    // SubProg find_first_wildcard pc: 5 op: STARTLINE (58)

    /** filesys.e:247		integer asterisk_at = eu:find('*', name, from)*/
    // SubProg find_first_wildcard pc: 7 op: FIND_FROM (176)
    _asterisk_at_9857 = find_from(42, _name_9855, _from_9856);
    // SubProg find_first_wildcard pc: 12 op: STARTLINE (58)

    /** filesys.e:248		integer question_at = eu:find('?', name, from)*/
    // SubProg find_first_wildcard pc: 14 op: FIND_FROM (176)
    _question_at_9859 = find_from(63, _name_9855, _from_9856);
    // SubProg find_first_wildcard pc: 19 op: STARTLINE (58)

    /** filesys.e:249		integer first_wildcard_at = asterisk_at*/
    // SubProg find_first_wildcard pc: 21 op: ASSIGN_I (113)
    _first_wildcard_at_9861 = _asterisk_at_9857;
    // SubProg find_first_wildcard pc: 24 op: STARTLINE (58)

    /** filesys.e:250		if asterisk_at or question_at then*/
    // SubProg find_first_wildcard pc: 26 op: SC1_OR_IF (147)
    if (_asterisk_at_9857 != 0) {
        goto L1; // [26] 35
    }
    // SubProg find_first_wildcard pc: 30 op: NOP1 (159)
    // SubProg find_first_wildcard pc: 31 op: IF (20)
    if (_question_at_9859 == 0)
    {
        goto L2; // [31] 56
    }
    else{
    }
    // SubProg find_first_wildcard pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 9853 op: 159
    // SubProg find_first_wildcard pc: 35 op: STARTLINE (58)

    /** filesys.e:253			if question_at and question_at < asterisk_at then*/
    // SubProg find_first_wildcard pc: 37 op: SC1_AND_IF (146)
    if (_question_at_9859 == 0) {
        goto L3; // [37] 55
    }
    // SubProg find_first_wildcard pc: 41 op: LESS (1)
    _5467 = (_question_at_9859 < _asterisk_at_9857);
    // SubProg find_first_wildcard pc: 45 op: NOP1 (159)
    // SubProg find_first_wildcard pc: 46 op: IF (20)
    if (_5467 == 0)
    {
        DeRef(_5467);
        _5467 = NOVALUE;
        goto L3; // [46] 55
    }
    else{
        DeRef(_5467);
        _5467 = NOVALUE;
    }
    // SubProg find_first_wildcard pc: 49 op: STARTLINE (58)

    /** filesys.e:254				first_wildcard_at = question_at*/
    // SubProg find_first_wildcard pc: 51 op: ASSIGN_I (113)
    _first_wildcard_at_9861 = _question_at_9859;
    // SubProg find_first_wildcard pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 9853 op: 159
    // SubProg find_first_wildcard pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 9853 op: 159
    // SubProg find_first_wildcard pc: 56 op: STARTLINE (58)

    /** filesys.e:257		return first_wildcard_at*/
    // SubProg find_first_wildcard pc: 58 op: RETURNF (28)

// Exiting block BLOCK: find_first_wildcard

// block var name_9855
    DeRefDS(_name_9855);

// block var from_9856

// block var asterisk_at_9857

// block var question_at_9859
    return _first_wildcard_at_9861;
    // SubProg find_first_wildcard pc: 62 op: BADRETURNF (43)
    ;
}


object _16dir(object _name_9869)
{
    object _dir_data_9870 = NOVALUE;
    object _data_9871 = NOVALUE;
    object _the_name_9872 = NOVALUE;
    object _the_dir_9873 = NOVALUE;
    object _the_suffix_9874 = NOVALUE;
    object _idx_9875 = NOVALUE;
    object _first_wildcard_at_9876 = NOVALUE;
    object _next_slash_9891 = NOVALUE;
    object _wild_data_9923 = NOVALUE;
    object _interim_dir_9927 = NOVALUE;
    object _dir_results_9931 = NOVALUE;
// skipping _5511  name type: 0
    object _5510 = NOVALUE; // 9943 5510
    object _5509 = NOVALUE; // 9942 5509
    object _5508 = NOVALUE; // 9941 5508
// skipping _5507  name type: 0
    object _5506 = NOVALUE; // 9939 5506
    object _5505 = NOVALUE; // 9938 5505
    object _5504 = NOVALUE; // 9935 5504
// skipping _5503  name type: 0
    object _5502 = NOVALUE; // 9932 5502
// skipping _5501  name type: 0
    object _5500 = NOVALUE; // 9929 5500
    object _5499 = NOVALUE; // 9928 5499
    object _5498 = NOVALUE; // 9926 5498
    object _5497 = NOVALUE; // 9922 5497
// skipping _5496  name type: 0
    object _5495 = NOVALUE; // 9919 5495
// skipping _5494  name type: 0
    object _5493 = NOVALUE; // 9916 5493
    object _5492 = NOVALUE; // 9915 5492
    object _5491 = NOVALUE; // 9914 5491
    object _5490 = NOVALUE; // 9913 5490
    object _5489 = NOVALUE; // 9911 5489
    object _5488 = NOVALUE; // 9908 5488
// skipping _5487  name type: 0
// skipping _5486  name type: 0
    object _5485 = NOVALUE; // 9904 5485
    object _5484 = NOVALUE; // 9903 5484
// skipping _5483  name type: 0
    object _5482 = NOVALUE; // 9900 5482
// skipping _5481  name type: 0
    object _5480 = NOVALUE; // 9898 5480
    object _5479 = NOVALUE; // 9897 5479
// skipping _5478  name type: 0
// skipping _5477  name type: 0
// skipping _5476  name type: 0
// skipping _5474  name type: 0
// skipping _5473  name type: 0
    object _5472 = NOVALUE; // 9884 5472
// skipping _5471  name type: 0
    object _5470 = NOVALUE; // 9880 5470
// skipping _5469  name type: 0
// skipping _5468  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg dir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg dir pc: 3 op: STARTLINE (58)

    /** filesys.e:358		ifdef WINDOWS then*/
    // SubProg dir pc: 5 op: STARTLINE (58)

    /** filesys.e:361			object dir_data, data, the_name, the_dir, the_suffix = 0*/
    // SubProg dir pc: 7 op: ASSIGN (18)
    DeRef(_the_suffix_9874);
    _the_suffix_9874 = 0;
    // SubProg dir pc: 10 op: STARTLINE (58)

    /** filesys.e:362			integer idx*/
    // SubProg dir pc: 12 op: STARTLINE (58)

    /** filesys.e:365			integer first_wildcard_at = find_first_wildcard( name )*/
    // SubProg dir pc: 14 op: PROC (27)
    RefDS(_name_9869);
    _first_wildcard_at_9876 = _16find_first_wildcard(_name_9869, 1);
    // SubProg dir pc: 19 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_9876)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_9876)->dbl);
        DeRefDS(_first_wildcard_at_9876);
        _first_wildcard_at_9876 = _1;
    }
    // SubProg dir pc: 21 op: STARTLINE (58)

    /** filesys.e:366			if first_wildcard_at = 0 then*/
    // SubProg dir pc: 23 op: EQUALS_IFW_I (121)
    if (_first_wildcard_at_9876 != 0)
    goto L1; // [23] 38
    // SubProg dir pc: 27 op: STARTLINE (58)

    /** filesys.e:367				return machine_func(M_DIR, name)*/
    // SubProg dir pc: 29 op: MACHINE_FUNC (111)
    _5470 = machine(22, _name_9869);
    // SubProg dir pc: 33 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_9869
    DeRefDS(_name_9869);

// block var dir_data_9870
    DeRef(_dir_data_9870);

// block var data_9871
    DeRef(_data_9871);

// block var the_name_9872
    DeRef(_the_name_9872);

// block var the_dir_9873
    DeRef(_the_dir_9873);

// block var the_suffix_9874

// block var idx_9875

// block var first_wildcard_at_9876
    return _5470;
    // SubProg dir pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 9867 op: 159
    // SubProg dir pc: 38 op: STARTLINE (58)

    /** filesys.e:371			if first_wildcard_at then*/
    // SubProg dir pc: 40 op: IF (20)
    if (_first_wildcard_at_9876 == 0)
    {
        goto L2; // [40] 56
    }
    else{
    }
    // SubProg dir pc: 43 op: STARTLINE (58)

    /** filesys.e:372				idx = search:rfind(SLASH, name, first_wildcard_at )*/
    // SubProg dir pc: 45 op: PROC (27)
    RefDS(_name_9869);
    _idx_9875 = _22rfind(47, _name_9869, _first_wildcard_at_9876);
    // SubProg dir pc: 51 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_idx_9875)) {
        _1 = (object)(DBL_PTR(_idx_9875)->dbl);
        DeRefDS(_idx_9875);
        _idx_9875 = _1;
    }
    // SubProg dir pc: 53 op: ELSE (23)
    goto L3; // [53] 70
    // SubProg dir pc: 55 op: NOP1 (159)
L2: // addr: 56 pc: 55 sub: 9867 op: 159
    // SubProg dir pc: 56 op: STARTLINE (58)

    /** filesys.e:374				idx = search:rfind(SLASH, name )*/
    // SubProg dir pc: 58 op: LENGTH (42)
    if (IS_SEQUENCE(_name_9869)){
            _5472 = SEQ_PTR(_name_9869)->length;
    }
    else {
        _5472 = 1;
    }
    // SubProg dir pc: 61 op: PROC (27)
    RefDS(_name_9869);
    _idx_9875 = _22rfind(47, _name_9869, _5472);
    _5472 = NOVALUE;
    // SubProg dir pc: 67 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_idx_9875)) {
        _1 = (object)(DBL_PTR(_idx_9875)->dbl);
        DeRefDS(_idx_9875);
        _idx_9875 = _1;
    }
    // SubProg dir pc: 69 op: NOP1 (159)
L3: // addr: 70 pc: 69 sub: 9867 op: 159
    // SubProg dir pc: 70 op: STARTLINE (58)

    /** filesys.e:377			if idx = 0 then*/
    // SubProg dir pc: 72 op: PRIVATE_INIT_CHECK (30)
    // SubProg dir pc: 74 op: EQUALS_IFW_I (121)
    if (_idx_9875 != 0)
    goto L4; // [74] 91
    // SubProg dir pc: 78 op: STARTLINE (58)

    /** filesys.e:378				the_dir = "."*/
    // SubProg dir pc: 80 op: ASSIGN (18)
    RefDS(_5475);
    DeRef(_the_dir_9873);
    _the_dir_9873 = _5475;
    // SubProg dir pc: 83 op: STARTLINE (58)

    /** filesys.e:379				the_name = name*/
    // SubProg dir pc: 85 op: ASSIGN (18)
    RefDS(_name_9869);
    DeRef(_the_name_9872);
    _the_name_9872 = _name_9869;
    // SubProg dir pc: 88 op: ELSE (23)
    goto L5; // [88] 187
    // SubProg dir pc: 90 op: NOP1 (159)
L4: // addr: 91 pc: 90 sub: 9867 op: 159
    // SubProg dir pc: 91 op: STARTLINE (58)

    /** filesys.e:383				the_dir = name[1 .. idx]*/
    // SubProg dir pc: 93 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_dir_9873;
    RHS_Slice(_name_9869, 1, _idx_9875);
    // SubProg dir pc: 98 op: STARTLINE (58)

    /** filesys.e:384				integer next_slash = 0*/
    // SubProg dir pc: 100 op: ASSIGN_I (113)
    _next_slash_9891 = 0;
    // SubProg dir pc: 103 op: STARTLINE (58)

    /** filesys.e:385				if first_wildcard_at then*/
    // SubProg dir pc: 105 op: IF (20)
    if (_first_wildcard_at_9876 == 0)
    {
        goto L6; // [105] 116
    }
    else{
    }
    // SubProg dir pc: 108 op: STARTLINE (58)

    /** filesys.e:386					next_slash = eu:find( SLASH, name, first_wildcard_at )*/
    // SubProg dir pc: 110 op: FIND_FROM (176)
    _next_slash_9891 = find_from(47, _name_9869, _first_wildcard_at_9876);
    // SubProg dir pc: 115 op: NOP1 (159)
L6: // addr: 116 pc: 115 sub: 9867 op: 159
    // SubProg dir pc: 116 op: STARTLINE (58)

    /** filesys.e:389				if next_slash then*/
    // SubProg dir pc: 118 op: IF (20)
    if (_next_slash_9891 == 0)
    {
        goto L7; // [118] 164
    }
    else{
    }
    // SubProg dir pc: 121 op: STARTLINE (58)

    /** filesys.e:390					first_wildcard_at = find_first_wildcard( name, next_slash )*/
    // SubProg dir pc: 123 op: PROC (27)
    RefDS(_name_9869);
    _first_wildcard_at_9876 = _16find_first_wildcard(_name_9869, _next_slash_9891);
    // SubProg dir pc: 128 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_9876)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_9876)->dbl);
        DeRefDS(_first_wildcard_at_9876);
        _first_wildcard_at_9876 = _1;
    }
    // SubProg dir pc: 130 op: STARTLINE (58)

    /** filesys.e:391					if first_wildcard_at then*/
    // SubProg dir pc: 132 op: IF (20)
    if (_first_wildcard_at_9876 == 0)
    {
        goto L8; // [132] 184
    }
    else{
    }
    // SubProg dir pc: 135 op: STARTLINE (58)

    /** filesys.e:392						the_name = name[idx+1..next_slash-1]*/
    // SubProg dir pc: 137 op: PLUS1 (93)
    _5479 = _idx_9875 + 1;
    if (_5479 > MAXINT){
        _5479 = NewDouble((eudouble)_5479);
    }
    // SubProg dir pc: 141 op: MINUS (10)
    _5480 = _next_slash_9891 - 1;
    // SubProg dir pc: 145 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_name_9872;
    RHS_Slice(_name_9869, _5479, _5480);
    // SubProg dir pc: 150 op: STARTLINE (58)

    /** filesys.e:393						the_suffix = name[next_slash..$]*/
    // SubProg dir pc: 152 op: LENGTH (42)
    if (IS_SEQUENCE(_name_9869)){
            _5482 = SEQ_PTR(_name_9869)->length;
    }
    else {
        _5482 = 1;
    }
    // SubProg dir pc: 155 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_suffix_9874;
    RHS_Slice(_name_9869, _next_slash_9891, _5482);
    // SubProg dir pc: 160 op: NOP1 (159)
    // SubProg dir pc: 161 op: ELSE (23)
    goto L8; // [161] 184
    // SubProg dir pc: 163 op: NOP1 (159)
L7: // addr: 164 pc: 163 sub: 9867 op: 159
    // SubProg dir pc: 164 op: STARTLINE (58)

    /** filesys.e:396					the_name = name[idx+1 .. $]*/
    // SubProg dir pc: 166 op: PLUS1 (93)
    _5484 = _idx_9875 + 1;
    if (_5484 > MAXINT){
        _5484 = NewDouble((eudouble)_5484);
    }
    // SubProg dir pc: 170 op: LENGTH (42)
    if (IS_SEQUENCE(_name_9869)){
            _5485 = SEQ_PTR(_name_9869)->length;
    }
    else {
        _5485 = 1;
    }
    // SubProg dir pc: 173 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_the_name_9872;
    RHS_Slice(_name_9869, _5484, _5485);
    // SubProg dir pc: 178 op: STARTLINE (58)

    /** filesys.e:397					the_suffix = 0*/
    // SubProg dir pc: 180 op: ASSIGN (18)
    DeRef(_the_suffix_9874);
    _the_suffix_9874 = 0;
    // SubProg dir pc: 183 op: NOP1 (159)
L8: // addr: 184 pc: 183 sub: 9867 op: 159
    // SubProg dir pc: 184 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var next_slash_9891
    // SubProg dir pc: 186 op: NOP1 (159)
L5: // addr: 187 pc: 186 sub: 9867 op: 159
    // SubProg dir pc: 187 op: STARTLINE (58)

    /** filesys.e:403			dir_data = dir( the_dir )*/
    // SubProg dir pc: 189 op: PRIVATE_INIT_CHECK (30)
    // SubProg dir pc: 191 op: PROC (27)
    Ref(_the_dir_9873);
    _0 = _dir_data_9870;
    _dir_data_9870 = _16dir(_the_dir_9873);
    DeRef(_0);
    // SubProg dir pc: 195 op: STARTLINE (58)

    /** filesys.e:406			if atom(dir_data) then*/
    // SubProg dir pc: 197 op: IS_AN_ATOM (67)
    _5488 = IS_ATOM(_dir_data_9870);
    // SubProg dir pc: 200 op: IF (20)
    if (_5488 == 0)
    {
        _5488 = NOVALUE;
        goto L9; // [200] 210
    }
    else{
        _5488 = NOVALUE;
    }
    // SubProg dir pc: 203 op: STARTLINE (58)

    /** filesys.e:407				return dir_data*/
    // SubProg dir pc: 205 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_9869
    DeRefDS(_name_9869);

// block var data_9871
    DeRef(_data_9871);

// block var the_name_9872
    DeRef(_the_name_9872);

// block var the_dir_9873
    DeRef(_the_dir_9873);

// block var the_suffix_9874
    DeRef(_the_suffix_9874);

// block var idx_9875

// block var first_wildcard_at_9876
    DeRef(_5470);
    _5470 = NOVALUE;
    DeRef(_5480);
    _5480 = NOVALUE;
    DeRef(_5484);
    _5484 = NOVALUE;
    DeRef(_5479);
    _5479 = NOVALUE;
    return _dir_data_9870;
    // SubProg dir pc: 209 op: NOP1 (159)
L9: // addr: 210 pc: 209 sub: 9867 op: 159
    // SubProg dir pc: 210 op: STARTLINE (58)

    /** filesys.e:412			data = {}*/
    // SubProg dir pc: 212 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_data_9871);
    _data_9871 = _5;
    // SubProg dir pc: 215 op: STARTLINE (58)

    /** filesys.e:413			for i = 1 to length(dir_data) do*/
    // SubProg dir pc: 217 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_data_9870)){
            _5489 = SEQ_PTR(_dir_data_9870)->length;
    }
    else {
        _5489 = 1;
    }
    // SubProg dir pc: 220 op: FOR_I (125)
    {
        object _i_9910;
        _i_9910 = 1;
LA: // addr: 227 pc: 220 sub: 9867 op: 125
        if (_i_9910 > _5489){
            goto LB; // [220] 265
        }
        // SubProg dir pc: 227 op: STARTLINE (58)

        /** filesys.e:414				if wildcard:is_match(the_name, dir_data[i][1]) then*/
        // SubProg dir pc: 229 op: PRIVATE_INIT_CHECK (30)
        // SubProg dir pc: 231 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_9870);
        _5490 = (object)*(((s1_ptr)_2)->base + _i_9910);
        // SubProg dir pc: 235 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5490);
        _5491 = (object)*(((s1_ptr)_2)->base + 1);
        _5490 = NOVALUE;
        // SubProg dir pc: 239 op: PROC (27)
        Ref(_the_name_9872);
        Ref(_5491);
        _5492 = _4is_match(_the_name_9872, _5491);
        _5491 = NOVALUE;
        // SubProg dir pc: 244 op: IF (20)
        if (_5492 == 0) {
            DeRef(_5492);
            _5492 = NOVALUE;
            goto LC; // [244] 258
        }
        else {
            if (!IS_ATOM_INT(_5492) && DBL_PTR(_5492)->dbl == 0.0){
                DeRef(_5492);
                _5492 = NOVALUE;
                goto LC; // [244] 258
            }
            DeRef(_5492);
            _5492 = NOVALUE;
        }
        DeRef(_5492);
        _5492 = NOVALUE;
        // SubProg dir pc: 247 op: STARTLINE (58)

        /** filesys.e:415						data = append(data, dir_data[i])*/
        // SubProg dir pc: 249 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_9870);
        _5493 = (object)*(((s1_ptr)_2)->base + _i_9910);
        // SubProg dir pc: 253 op: APPEND (35)
        Ref(_5493);
        Append(&_data_9871, _data_9871, _5493);
        _5493 = NOVALUE;
        // SubProg dir pc: 257 op: NOP1 (159)
LC: // addr: 258 pc: 257 sub: 9867 op: 159
        // SubProg dir pc: 258 op: STARTLINE (58)

        /** filesys.e:417			end for*/
        // SubProg dir pc: 260 op: ENDFOR_INT_UP1 (54)
        _i_9910 = _i_9910 + 1;
        goto LA; // [260] 227
LB: // addr: 265 pc: 260 sub: 9867 op: 54
        ;
    }
    // SubProg dir pc: 265 op: STARTLINE (58)

    /** filesys.e:419			if not length(data) then*/
    // SubProg dir pc: 267 op: LENGTH (42)
    if (IS_SEQUENCE(_data_9871)){
            _5495 = SEQ_PTR(_data_9871)->length;
    }
    else {
        _5495 = 1;
    }
    // SubProg dir pc: 270 op: NOT_IFW (108)
    if (_5495 != 0)
    goto LD; // [270] 280
    _5495 = NOVALUE;
    // SubProg dir pc: 273 op: STARTLINE (58)

    /** filesys.e:421				return -1*/
    // SubProg dir pc: 275 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_9869
    DeRefDS(_name_9869);

// block var dir_data_9870
    DeRef(_dir_data_9870);

// block var data_9871
    DeRef(_data_9871);

// block var the_name_9872
    DeRef(_the_name_9872);

// block var the_dir_9873
    DeRef(_the_dir_9873);

// block var the_suffix_9874
    DeRef(_the_suffix_9874);

// block var idx_9875

// block var first_wildcard_at_9876
    DeRef(_5470);
    _5470 = NOVALUE;
    DeRef(_5480);
    _5480 = NOVALUE;
    DeRef(_5484);
    _5484 = NOVALUE;
    DeRef(_5479);
    _5479 = NOVALUE;
    return -1;
    // SubProg dir pc: 279 op: NOP1 (159)
LD: // addr: 280 pc: 279 sub: 9867 op: 159
    // SubProg dir pc: 280 op: STARTLINE (58)

    /** filesys.e:424			if sequence( the_suffix ) then*/
    // SubProg dir pc: 282 op: IS_A_SEQUENCE (68)
    _5497 = IS_SEQUENCE(_the_suffix_9874);
    // SubProg dir pc: 285 op: IF (20)
    if (_5497 == 0)
    {
        _5497 = NOVALUE;
        goto LE; // [285] 406
    }
    else{
        _5497 = NOVALUE;
    }
    // SubProg dir pc: 288 op: STARTLINE (58)

    /** filesys.e:425				sequence wild_data = {}*/
    // SubProg dir pc: 290 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_wild_data_9923);
    _wild_data_9923 = _5;
    // SubProg dir pc: 293 op: SEQUENCE_CHECK (97)
    // SubProg dir pc: 295 op: STARTLINE (58)

    /** filesys.e:426				for i = 1 to length( dir_data ) do*/
    // SubProg dir pc: 297 op: LENGTH (42)
    if (IS_SEQUENCE(_dir_data_9870)){
            _5498 = SEQ_PTR(_dir_data_9870)->length;
    }
    else {
        _5498 = 1;
    }
    // SubProg dir pc: 300 op: FOR_I (125)
    {
        object _i_9925;
        _i_9925 = 1;
LF: // addr: 307 pc: 300 sub: 9867 op: 125
        if (_i_9925 > _5498){
            goto L10; // [300] 399
        }
        // SubProg dir pc: 307 op: STARTLINE (58)

        /** filesys.e:427					sequence interim_dir = the_dir & dir_data[i][D_NAME] & SLASH*/
        // SubProg dir pc: 309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_dir_data_9870);
        _5499 = (object)*(((s1_ptr)_2)->base + _i_9925);
        // SubProg dir pc: 313 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5499);
        _5500 = (object)*(((s1_ptr)_2)->base + 1);
        _5499 = NOVALUE;
        // SubProg dir pc: 317 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = 47;
            concat_list[1] = _5500;
            concat_list[2] = _the_dir_9873;
            Concat_N((object_ptr)&_interim_dir_9927, concat_list, 3);
        }
        _5500 = NOVALUE;
        // SubProg dir pc: 323 op: STARTLINE (58)

        /** filesys.e:428					object dir_results = dir( interim_dir & the_suffix )*/
        // SubProg dir pc: 325 op: CONCAT (15)
        if (IS_SEQUENCE(_interim_dir_9927) && IS_ATOM(_the_suffix_9874)) {
            Ref(_the_suffix_9874);
            Append(&_5502, _interim_dir_9927, _the_suffix_9874);
        }
        else if (IS_ATOM(_interim_dir_9927) && IS_SEQUENCE(_the_suffix_9874)) {
        }
        else {
            Concat((object_ptr)&_5502, _interim_dir_9927, _the_suffix_9874);
        }
        // SubProg dir pc: 329 op: PROC (27)
        _0 = _dir_results_9931;
        _dir_results_9931 = _16dir(_5502);
        DeRef(_0);
        _5502 = NOVALUE;
        // SubProg dir pc: 333 op: STARTLINE (58)

        /** filesys.e:429					if sequence( dir_results ) then*/
        // SubProg dir pc: 335 op: IS_A_SEQUENCE (68)
        _5504 = IS_SEQUENCE(_dir_results_9931);
        // SubProg dir pc: 338 op: IF (20)
        if (_5504 == 0)
        {
            _5504 = NOVALUE;
            goto L11; // [338] 390
        }
        else{
            _5504 = NOVALUE;
        }
        // SubProg dir pc: 341 op: STARTLINE (58)

        /** filesys.e:430						for j = 1 to length( dir_results ) do*/
        // SubProg dir pc: 343 op: LENGTH (42)
        if (IS_SEQUENCE(_dir_results_9931)){
                _5505 = SEQ_PTR(_dir_results_9931)->length;
        }
        else {
            _5505 = 1;
        }
        // SubProg dir pc: 346 op: FOR_I (125)
        {
            object _j_9937;
            _j_9937 = 1;
L12: // addr: 353 pc: 346 sub: 9867 op: 125
            if (_j_9937 > _5505){
                goto L13; // [346] 383
            }
            // SubProg dir pc: 353 op: STARTLINE (58)

            /** filesys.e:431							dir_results[j][D_NAME] = interim_dir & dir_results[j][D_NAME]*/
            // SubProg dir pc: 355 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_dir_results_9931);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _dir_results_9931 = MAKE_SEQ(_2);
            }
            _3 = (object)(_j_9937 + ((s1_ptr)_2)->base);
            // SubProg dir pc: 360 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_dir_results_9931);
            _5508 = (object)*(((s1_ptr)_2)->base + _j_9937);
            // SubProg dir pc: 364 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_5508);
            _5509 = (object)*(((s1_ptr)_2)->base + 1);
            _5508 = NOVALUE;
            // SubProg dir pc: 368 op: CONCAT (15)
            if (IS_SEQUENCE(_interim_dir_9927) && IS_ATOM(_5509)) {
                Ref(_5509);
                Append(&_5510, _interim_dir_9927, _5509);
            }
            else if (IS_ATOM(_interim_dir_9927) && IS_SEQUENCE(_5509)) {
            }
            else {
                Concat((object_ptr)&_5510, _interim_dir_9927, _5509);
            }
            _5509 = NOVALUE;
            // SubProg dir pc: 372 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 1);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5510;
            if( _1 != _5510 ){
                DeRef(_1);
            }
            _5510 = NOVALUE;
            _5506 = NOVALUE;
            // SubProg dir pc: 376 op: STARTLINE (58)

            /** filesys.e:432						end for*/
            // SubProg dir pc: 378 op: ENDFOR_INT_UP1 (54)
            _j_9937 = _j_9937 + 1;
            goto L12; // [378] 353
L13: // addr: 383 pc: 378 sub: 9867 op: 54
            ;
        }
        // SubProg dir pc: 383 op: STARTLINE (58)

        /** filesys.e:433						wild_data &= dir_results*/
        // SubProg dir pc: 385 op: CONCAT (15)
        if (IS_SEQUENCE(_wild_data_9923) && IS_ATOM(_dir_results_9931)) {
            Ref(_dir_results_9931);
            Append(&_wild_data_9923, _wild_data_9923, _dir_results_9931);
        }
        else if (IS_ATOM(_wild_data_9923) && IS_SEQUENCE(_dir_results_9931)) {
        }
        else {
            Concat((object_ptr)&_wild_data_9923, _wild_data_9923, _dir_results_9931);
        }
        // SubProg dir pc: 389 op: NOP1 (159)
L11: // addr: 390 pc: 389 sub: 9867 op: 159
        // SubProg dir pc: 390 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var interim_dir_9927
        DeRef(_interim_dir_9927);
        _interim_dir_9927 = NOVALUE;

// block var dir_results_9931
        DeRef(_dir_results_9931);
        _dir_results_9931 = NOVALUE;
        // SubProg dir pc: 392 op: STARTLINE (58)

        /** filesys.e:435				end for*/
        // SubProg dir pc: 394 op: ENDFOR_INT_UP1 (54)
        _i_9925 = _i_9925 + 1;
        goto LF; // [394] 307
L10: // addr: 399 pc: 394 sub: 9867 op: 54
        ;
    }
    // SubProg dir pc: 399 op: STARTLINE (58)

    /** filesys.e:436				return wild_data*/
    // SubProg dir pc: 401 op: RETURNF (28)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: dir

// block var name_9869
    DeRefDS(_name_9869);

// block var dir_data_9870
    DeRef(_dir_data_9870);

// block var data_9871
    DeRef(_data_9871);

// block var the_name_9872
    DeRef(_the_name_9872);

// block var the_dir_9873
    DeRef(_the_dir_9873);

// block var the_suffix_9874
    DeRef(_the_suffix_9874);

// block var idx_9875

// block var first_wildcard_at_9876
    DeRef(_5470);
    _5470 = NOVALUE;
    DeRef(_5480);
    _5480 = NOVALUE;
    DeRef(_5484);
    _5484 = NOVALUE;
    DeRef(_5479);
    _5479 = NOVALUE;
    return _wild_data_9923;
    // SubProg dir pc: 405 op: NOP1 (159)
LE: // addr: 406 pc: 405 sub: 9867 op: 159
    // SubProg dir pc: 406 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var wild_data_9923
    DeRef(_wild_data_9923);
    _wild_data_9923 = NOVALUE;
    // SubProg dir pc: 408 op: STARTLINE (58)

    /** filesys.e:439			return data*/
    // SubProg dir pc: 410 op: RETURNF (28)

// Exiting block BLOCK: dir

// block var name_9869
    DeRefDS(_name_9869);

// block var dir_data_9870
    DeRef(_dir_data_9870);

// block var the_name_9872
    DeRef(_the_name_9872);

// block var the_dir_9873
    DeRef(_the_dir_9873);

// block var the_suffix_9874
    DeRef(_the_suffix_9874);

// block var idx_9875

// block var first_wildcard_at_9876
    DeRef(_5470);
    _5470 = NOVALUE;
    DeRef(_5480);
    _5480 = NOVALUE;
    DeRef(_5484);
    _5484 = NOVALUE;
    DeRef(_5479);
    _5479 = NOVALUE;
    return _data_9871;
    // SubProg dir pc: 414 op: BADRETURNF (43)
    ;
}


object _16current_dir()
{
    object _5512 = NOVALUE; // 9947 5512
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg current_dir pc: 1 op: STARTLINE (58)

    /** filesys.e:465		return machine_func(M_CURRENT_DIR, 0)*/
    // SubProg current_dir pc: 3 op: MACHINE_FUNC (111)
    _5512 = machine(23, 0);
    // SubProg current_dir pc: 7 op: RETURNF (28)

// Exiting block BLOCK: current_dir
    return _5512;
    // SubProg current_dir pc: 11 op: BADRETURNF (43)
    ;
}


object _16chdir(object _newdir_9950)
{
    object _5513 = NOVALUE; // 9951 5513
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg chdir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg chdir pc: 3 op: STARTLINE (58)

    /** filesys.e:501		return machine_func(M_CHDIR, newdir)*/
    // SubProg chdir pc: 5 op: MACHINE_FUNC (111)
    _5513 = machine(63, _newdir_9950);
    // SubProg chdir pc: 9 op: RETURNF (28)

// Exiting block BLOCK: chdir

// block var newdir_9950
    DeRefDS(_newdir_9950);
    return _5513;
    // SubProg chdir pc: 13 op: BADRETURNF (43)
    ;
}


object _16delete_file(object _name_10082)
{
    object _pfilename_10083 = NOVALUE;
    object _success_10085 = NOVALUE;
// skipping _5592  name type: 0
// skipping _5591  name type: 0
    object _5590 = NOVALUE; // 10086 5590
// skipping _5589  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg delete_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg delete_file pc: 3 op: STARTLINE (58)

    /** filesys.e:802		atom pfilename = machine:allocate_string(name)*/
    // SubProg delete_file pc: 5 op: PROC (27)
    RefDS(_name_10082);
    _0 = _pfilename_10083;
    _pfilename_10083 = _9allocate_string(_name_10082, 0);
    DeRef(_0);
    // SubProg delete_file pc: 10 op: STARTLINE (58)

    /** filesys.e:803		integer success = c_func(xDeleteFile, {pfilename})*/
    // SubProg delete_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg delete_file pc: 14 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_pfilename_10083);
    ((intptr_t*)_2)[1] = _pfilename_10083;
    _5590 = MAKE_SEQ(_1);
    // SubProg delete_file pc: 18 op: C_FUNC (133)
    _success_10085 = call_c(1, _16xDeleteFile_9801, _5590);
    DeRefDS(_5590);
    _5590 = NOVALUE;
    // SubProg delete_file pc: 23 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_success_10085)) {
        _1 = (object)(DBL_PTR(_success_10085)->dbl);
        DeRefDS(_success_10085);
        _success_10085 = _1;
    }
    // SubProg delete_file pc: 25 op: STARTLINE (58)

    /** filesys.e:805		ifdef UNIX then*/
    // SubProg delete_file pc: 27 op: STARTLINE (58)

    /** filesys.e:806			success = not success*/
    // SubProg delete_file pc: 29 op: NOT (7)
    _success_10085 = (_success_10085 == 0);
    // SubProg delete_file pc: 32 op: STARTLINE (58)

    /** filesys.e:809		machine:free(pfilename)*/
    // SubProg delete_file pc: 34 op: PROC (27)
    Ref(_pfilename_10083);
    _9free(_pfilename_10083);
    // SubProg delete_file pc: 37 op: STARTLINE (58)

    /** filesys.e:811		return success*/
    // SubProg delete_file pc: 39 op: RETURNF (28)

// Exiting block BLOCK: delete_file

// block var name_10082
    DeRefDS(_name_10082);

// block var pfilename_10083
    DeRef(_pfilename_10083);
    return _success_10085;
    // SubProg delete_file pc: 43 op: BADRETURNF (43)
    ;
}


object _16curdir(object _drive_id_10091)
{
    object _lCurDir_10092 = NOVALUE;
    object _current_dir_inlined_current_dir_at_6_10094 = NOVALUE;
// skipping _5596  name type: 0
// skipping _5595  name type: 0
    object _5594 = NOVALUE; // 10097 5594
    object _5593 = NOVALUE; // 10096 5593
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
    DeRefi(_lCurDir_10092);
    _lCurDir_10092 = machine(23, 0);
    // SubProg curdir pc: 13 op: NOP1 (159)
    // SubProg curdir pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg curdir pc: 16 op: STARTLINE (58)

    /** filesys.e:863		ifdef not LINUX then*/
    // SubProg curdir pc: 18 op: STARTLINE (58)

    /** filesys.e:870		if (lCurDir[$] != SLASH) then*/
    // SubProg curdir pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_lCurDir_10092)){
            _5593 = SEQ_PTR(_lCurDir_10092)->length;
    }
    else {
        _5593 = 1;
    }
    // SubProg curdir pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lCurDir_10092);
    _5594 = (object)*(((s1_ptr)_2)->base + _5593);
    // SubProg curdir pc: 27 op: NOTEQ_IFW (105)
    if (_5594 == 47)
    goto L1; // [27] 38
    // SubProg curdir pc: 31 op: STARTLINE (58)

    /** filesys.e:871			lCurDir &= SLASH*/
    // SubProg curdir pc: 33 op: CONCAT (15)
    Append(&_lCurDir_10092, _lCurDir_10092, 47);
    // SubProg curdir pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 10089 op: 159
    // SubProg curdir pc: 38 op: STARTLINE (58)

    /** filesys.e:874		return lCurDir*/
    // SubProg curdir pc: 40 op: RETURNF (28)

// Exiting block BLOCK: curdir
    _5594 = NOVALUE;
    return _lCurDir_10092;
    // SubProg curdir pc: 44 op: BADRETURNF (43)
    ;
}


object _16pathinfo(object _path_10225, object _std_slash_10226)
{
    object _slash_10227 = NOVALUE;
    object _period_10228 = NOVALUE;
    object _ch_10229 = NOVALUE;
    object _dir_name_10230 = NOVALUE;
    object _file_name_10231 = NOVALUE;
    object _file_ext_10232 = NOVALUE;
    object _file_full_10233 = NOVALUE;
    object _drive_id_10234 = NOVALUE;
    object _from_slash_10266 = NOVALUE;
    object _5696 = NOVALUE; // 10271 5696
// skipping _5695  name type: 0
// skipping _5694  name type: 0
// skipping _5693  name type: 0
// skipping _5692  name type: 0
// skipping _5691  name type: 0
// skipping _5690  name type: 0
    object _5689 = NOVALUE; // 10260 5689
    object _5688 = NOVALUE; // 10259 5688
// skipping _5687  name type: 0
// skipping _5686  name type: 0
    object _5685 = NOVALUE; // 10255 5685
    object _5684 = NOVALUE; // 10254 5684
// skipping _5683  name type: 0
    object _5682 = NOVALUE; // 10252 5682
    object _5681 = NOVALUE; // 10251 5681
// skipping _5680  name type: 0
// skipping _5679  name type: 0
    object _5678 = NOVALUE; // 10247 5678
// skipping _5677  name type: 0
    object _5676 = NOVALUE; // 10244 5676
    object _5675 = NOVALUE; // 10242 5675
    object _5674 = NOVALUE; // 10241 5674
    object _5673 = NOVALUE; // 10240 5673
// skipping _5672  name type: 0
    object _5671 = NOVALUE; // 10237 5671
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pathinfo pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 3 op: INTEGER_CHECK (96)
    // SubProg pathinfo pc: 5 op: STARTLINE (58)

    /** filesys.e:1196		dir_name  = ""*/
    // SubProg pathinfo pc: 7 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_dir_name_10230);
    _dir_name_10230 = _5;
    // SubProg pathinfo pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 12 op: STARTLINE (58)

    /** filesys.e:1197		file_name = ""*/
    // SubProg pathinfo pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_name_10231);
    _file_name_10231 = _5;
    // SubProg pathinfo pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 19 op: STARTLINE (58)

    /** filesys.e:1198		file_ext  = ""*/
    // SubProg pathinfo pc: 21 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_ext_10232);
    _file_ext_10232 = _5;
    // SubProg pathinfo pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 26 op: STARTLINE (58)

    /** filesys.e:1199		file_full = ""*/
    // SubProg pathinfo pc: 28 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_file_full_10233);
    _file_full_10233 = _5;
    // SubProg pathinfo pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 33 op: STARTLINE (58)

    /** filesys.e:1200		drive_id  = ""*/
    // SubProg pathinfo pc: 35 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_drive_id_10234);
    _drive_id_10234 = _5;
    // SubProg pathinfo pc: 38 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 40 op: STARTLINE (58)

    /** filesys.e:1202		slash = 0*/
    // SubProg pathinfo pc: 42 op: ASSIGN_I (113)
    _slash_10227 = 0;
    // SubProg pathinfo pc: 45 op: STARTLINE (58)

    /** filesys.e:1203		period = 0*/
    // SubProg pathinfo pc: 47 op: ASSIGN_I (113)
    _period_10228 = 0;
    // SubProg pathinfo pc: 50 op: STARTLINE (58)

    /** filesys.e:1205		for i = length(path) to 1 by -1 do*/
    // SubProg pathinfo pc: 52 op: LENGTH (42)
    if (IS_SEQUENCE(_path_10225)){
            _5671 = SEQ_PTR(_path_10225)->length;
    }
    else {
        _5671 = 1;
    }
    // SubProg pathinfo pc: 55 op: FOR_I (125)
    {
        object _i_10236;
        _i_10236 = _5671;
L1: // addr: 62 pc: 55 sub: 10223 op: 125
        if (_i_10236 < 1){
            goto L2; // [55] 122
        }
        // SubProg pathinfo pc: 62 op: STARTLINE (58)

        /** filesys.e:1206			ch = path[i]*/
        // SubProg pathinfo pc: 64 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_path_10225);
        _ch_10229 = (object)*(((s1_ptr)_2)->base + _i_10236);
        if (!IS_ATOM_INT(_ch_10229))
        _ch_10229 = (object)DBL_PTR(_ch_10229)->dbl;
        // SubProg pathinfo pc: 68 op: STARTLINE (58)

        /** filesys.e:1207			if period = 0 and ch = '.' then*/
        // SubProg pathinfo pc: 70 op: EQUALS (3)
        _5673 = (_period_10228 == 0);
        // SubProg pathinfo pc: 74 op: SC1_AND_IF (146)
        if (_5673 == 0) {
            goto L3; // [74] 94
        }
        // SubProg pathinfo pc: 78 op: EQUALS (3)
        _5675 = (_ch_10229 == 46);
        // SubProg pathinfo pc: 82 op: NOP1 (159)
        // SubProg pathinfo pc: 83 op: IF (20)
        if (_5675 == 0)
        {
            DeRef(_5675);
            _5675 = NOVALUE;
            goto L3; // [83] 94
        }
        else{
            DeRef(_5675);
            _5675 = NOVALUE;
        }
        // SubProg pathinfo pc: 86 op: STARTLINE (58)

        /** filesys.e:1208				period = i*/
        // SubProg pathinfo pc: 88 op: ASSIGN_I (113)
        _period_10228 = _i_10236;
        // SubProg pathinfo pc: 91 op: ELSE (23)
        goto L4; // [91] 115
        // SubProg pathinfo pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 10223 op: 159
        // SubProg pathinfo pc: 94 op: STARTLINE (58)

        /** filesys.e:1209			elsif eu:find(ch, SLASHES) then*/
        // SubProg pathinfo pc: 96 op: FIND_FROM (176)
        _5676 = find_from(_ch_10229, _16SLASHES_9825, 1);
        // SubProg pathinfo pc: 101 op: IF (20)
        if (_5676 == 0)
        {
            _5676 = NOVALUE;
            goto L5; // [101] 114
        }
        else{
            _5676 = NOVALUE;
        }
        // SubProg pathinfo pc: 104 op: STARTLINE (58)

        /** filesys.e:1210				slash = i*/
        // SubProg pathinfo pc: 106 op: ASSIGN_I (113)
        _slash_10227 = _i_10236;
        // SubProg pathinfo pc: 109 op: STARTLINE (58)

        /** filesys.e:1211				exit*/
        // SubProg pathinfo pc: 111 op: EXIT (61)
        goto L2; // [111] 122
        // SubProg pathinfo pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 10223 op: 159
        // SubProg pathinfo pc: 114 op: NOP1 (159)
L4: // addr: 115 pc: 114 sub: 10223 op: 159
        // SubProg pathinfo pc: 115 op: STARTLINE (58)

        /** filesys.e:1213		end for*/
        // SubProg pathinfo pc: 117 op: ENDFOR_GENERAL (39)
        _i_10236 = _i_10236 + -1;
        goto L1; // [117] 62
L2: // addr: 122 pc: 117 sub: 10223 op: 39
        ;
    }
    // SubProg pathinfo pc: 122 op: STARTLINE (58)

    /** filesys.e:1215		if slash > 0 then*/
    // SubProg pathinfo pc: 124 op: GREATER_IFW_I (124)
    if (_slash_10227 <= 0)
    goto L6; // [124] 142
    // SubProg pathinfo pc: 128 op: STARTLINE (58)

    /** filesys.e:1216			dir_name = path[1..slash-1]*/
    // SubProg pathinfo pc: 130 op: MINUS (10)
    _5678 = _slash_10227 - 1;
    // SubProg pathinfo pc: 134 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_dir_name_10230;
    RHS_Slice(_path_10225, 1, _5678);
    // SubProg pathinfo pc: 139 op: STARTLINE (58)

    /** filesys.e:1218			ifdef not UNIX then*/
    // SubProg pathinfo pc: 141 op: NOP1 (159)
L6: // addr: 142 pc: 141 sub: 10223 op: 159
    // SubProg pathinfo pc: 142 op: STARTLINE (58)

    /** filesys.e:1226		if period > 0 then*/
    // SubProg pathinfo pc: 144 op: GREATER_IFW_I (124)
    if (_period_10228 <= 0)
    goto L7; // [144] 188
    // SubProg pathinfo pc: 148 op: STARTLINE (58)

    /** filesys.e:1227			file_name = path[slash+1..period-1]*/
    // SubProg pathinfo pc: 150 op: PLUS1 (93)
    _5681 = _slash_10227 + 1;
    if (_5681 > MAXINT){
        _5681 = NewDouble((eudouble)_5681);
    }
    // SubProg pathinfo pc: 154 op: MINUS (10)
    _5682 = _period_10228 - 1;
    // SubProg pathinfo pc: 158 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_name_10231;
    RHS_Slice(_path_10225, _5681, _5682);
    // SubProg pathinfo pc: 163 op: STARTLINE (58)

    /** filesys.e:1228			file_ext = path[period+1..$]*/
    // SubProg pathinfo pc: 165 op: PLUS1 (93)
    _5684 = _period_10228 + 1;
    if (_5684 > MAXINT){
        _5684 = NewDouble((eudouble)_5684);
    }
    // SubProg pathinfo pc: 169 op: LENGTH (42)
    if (IS_SEQUENCE(_path_10225)){
            _5685 = SEQ_PTR(_path_10225)->length;
    }
    else {
        _5685 = 1;
    }
    // SubProg pathinfo pc: 172 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_ext_10232;
    RHS_Slice(_path_10225, _5684, _5685);
    // SubProg pathinfo pc: 177 op: STARTLINE (58)

    /** filesys.e:1229			file_full = file_name & '.' & file_ext*/
    // SubProg pathinfo pc: 179 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _file_ext_10232;
        concat_list[1] = 46;
        concat_list[2] = _file_name_10231;
        Concat_N((object_ptr)&_file_full_10233, concat_list, 3);
    }
    // SubProg pathinfo pc: 185 op: ELSE (23)
    goto L8; // [185] 210
    // SubProg pathinfo pc: 187 op: NOP1 (159)
L7: // addr: 188 pc: 187 sub: 10223 op: 159
    // SubProg pathinfo pc: 188 op: STARTLINE (58)

    /** filesys.e:1231			file_name = path[slash+1..$]*/
    // SubProg pathinfo pc: 190 op: PLUS1 (93)
    _5688 = _slash_10227 + 1;
    if (_5688 > MAXINT){
        _5688 = NewDouble((eudouble)_5688);
    }
    // SubProg pathinfo pc: 194 op: LENGTH (42)
    if (IS_SEQUENCE(_path_10225)){
            _5689 = SEQ_PTR(_path_10225)->length;
    }
    else {
        _5689 = 1;
    }
    // SubProg pathinfo pc: 197 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_file_name_10231;
    RHS_Slice(_path_10225, _5688, _5689);
    // SubProg pathinfo pc: 202 op: STARTLINE (58)

    /** filesys.e:1232			file_full = file_name*/
    // SubProg pathinfo pc: 204 op: ASSIGN (18)
    RefDS(_file_name_10231);
    DeRef(_file_full_10233);
    _file_full_10233 = _file_name_10231;
    // SubProg pathinfo pc: 207 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 209 op: NOP1 (159)
L8: // addr: 210 pc: 209 sub: 10223 op: 159
    // SubProg pathinfo pc: 210 op: STARTLINE (58)

    /** filesys.e:1235		if std_slash != 0 then*/
    // SubProg pathinfo pc: 212 op: NOTEQ_IFW_I (122)
    if (_std_slash_10226 == 0)
    goto L9; // [212] 278
    // SubProg pathinfo pc: 216 op: STARTLINE (58)

    /** filesys.e:1236			if std_slash < 0 then*/
    // SubProg pathinfo pc: 218 op: LESS_IFW_I (119)
    if (_std_slash_10226 >= 0)
    goto LA; // [218] 254
    // SubProg pathinfo pc: 222 op: STARTLINE (58)

    /** filesys.e:1237				std_slash = SLASH*/
    // SubProg pathinfo pc: 224 op: ASSIGN_I (113)
    _std_slash_10226 = 47;
    // SubProg pathinfo pc: 227 op: STARTLINE (58)

    /** filesys.e:1238				ifdef UNIX then*/
    // SubProg pathinfo pc: 229 op: STARTLINE (58)

    /** filesys.e:1239				sequence from_slash = "\\"*/
    // SubProg pathinfo pc: 231 op: ASSIGN (18)
    RefDS(_1502);
    DeRefi(_from_slash_10266);
    _from_slash_10266 = _1502;
    // SubProg pathinfo pc: 234 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 236 op: STARTLINE (58)

    /** filesys.e:1243				dir_name = search:match_replace(from_slash, dir_name, std_slash)*/
    // SubProg pathinfo pc: 238 op: PRIVATE_INIT_CHECK (30)
    // SubProg pathinfo pc: 240 op: PROC (27)
    RefDS(_from_slash_10266);
    RefDS(_dir_name_10230);
    _0 = _dir_name_10230;
    _dir_name_10230 = _22match_replace(_from_slash_10266, _dir_name_10230, 47, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 247 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 249 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var from_slash_10266
    DeRefDSi(_from_slash_10266);
    _from_slash_10266 = NOVALUE;
    // SubProg pathinfo pc: 251 op: ELSE (23)
    goto LB; // [251] 277
    // SubProg pathinfo pc: 253 op: NOP1 (159)
LA: // addr: 254 pc: 253 sub: 10223 op: 159
    // SubProg pathinfo pc: 254 op: STARTLINE (58)

    /** filesys.e:1245				dir_name = search:match_replace("\\", dir_name, std_slash)*/
    // SubProg pathinfo pc: 256 op: PROC (27)
    RefDS(_1502);
    RefDS(_dir_name_10230);
    _0 = _dir_name_10230;
    _dir_name_10230 = _22match_replace(_1502, _dir_name_10230, _std_slash_10226, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 263 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 265 op: STARTLINE (58)

    /** filesys.e:1246				dir_name = search:match_replace("/", dir_name, std_slash)*/
    // SubProg pathinfo pc: 267 op: PROC (27)
    RefDS(_5454);
    RefDS(_dir_name_10230);
    _0 = _dir_name_10230;
    _dir_name_10230 = _22match_replace(_5454, _dir_name_10230, _std_slash_10226, 0);
    DeRefDS(_0);
    // SubProg pathinfo pc: 274 op: SEQUENCE_CHECK (97)
    // SubProg pathinfo pc: 276 op: NOP1 (159)
LB: // addr: 277 pc: 276 sub: 10223 op: 159
    // SubProg pathinfo pc: 277 op: NOP1 (159)
L9: // addr: 278 pc: 277 sub: 10223 op: 159
    // SubProg pathinfo pc: 278 op: STARTLINE (58)

    /** filesys.e:1250		return {dir_name, file_full, file_name, file_ext, drive_id }*/
    // SubProg pathinfo pc: 280 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_dir_name_10230);
    ((intptr_t*)_2)[1] = _dir_name_10230;
    RefDS(_file_full_10233);
    ((intptr_t*)_2)[2] = _file_full_10233;
    RefDS(_file_name_10231);
    ((intptr_t*)_2)[3] = _file_name_10231;
    RefDS(_file_ext_10232);
    ((intptr_t*)_2)[4] = _file_ext_10232;
    RefDS(_drive_id_10234);
    ((intptr_t*)_2)[5] = _drive_id_10234;
    _5696 = MAKE_SEQ(_1);
    // SubProg pathinfo pc: 288 op: RETURNF (28)

// Exiting block BLOCK: pathinfo

// block var path_10225
    DeRefDS(_path_10225);

// block var std_slash_10226

// block var slash_10227

// block var period_10228

// block var ch_10229

// block var dir_name_10230
    DeRefDS(_dir_name_10230);

// block var file_name_10231
    DeRefDS(_file_name_10231);

// block var file_ext_10232
    DeRefDS(_file_ext_10232);

// block var file_full_10233
    DeRefDS(_file_full_10233);

// block var drive_id_10234
    DeRefDS(_drive_id_10234);
    DeRef(_5681);
    _5681 = NOVALUE;
    DeRef(_5684);
    _5684 = NOVALUE;
    DeRef(_5682);
    _5682 = NOVALUE;
    DeRef(_5688);
    _5688 = NOVALUE;
    DeRef(_5678);
    _5678 = NOVALUE;
    DeRef(_5673);
    _5673 = NOVALUE;
    return _5696;
    // SubProg pathinfo pc: 292 op: BADRETURNF (43)
    ;
}


object _16dirname(object _path_10274, object _pcd_10275)
{
    object _data_10276 = NOVALUE;
    object _5701 = NOVALUE; // 10283 5701
// skipping _5700  name type: 0
// skipping _5699  name type: 0
// skipping _5698  name type: 0
// skipping _5697  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg dirname pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg dirname pc: 3 op: INTEGER_CHECK (96)
    // SubProg dirname pc: 5 op: STARTLINE (58)

    /** filesys.e:1279		data = pathinfo(path)*/
    // SubProg dirname pc: 7 op: PROC (27)
    RefDS(_path_10274);
    _0 = _data_10276;
    _data_10276 = _16pathinfo(_path_10274, 0);
    DeRef(_0);
    // SubProg dirname pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg dirname pc: 14 op: STARTLINE (58)

    /** filesys.e:1280		if pcd then*/
    // SubProg dirname pc: 16 op: IF (20)
    // SubProg dirname pc: 40 op: STARTLINE (58)

    /** filesys.e:1285		return data[1]*/
    // SubProg dirname pc: 42 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_10276);
    _5701 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg dirname pc: 46 op: RETURNF (28)
    Ref(_5701);

// Exiting block BLOCK: dirname

// block var path_10274
    DeRefDS(_path_10274);

// block var pcd_10275

// block var data_10276
    DeRefDS(_data_10276);
    return _5701;
    // SubProg dirname pc: 50 op: BADRETURNF (43)
    ;
}


object _16filebase(object _path_10303)
{
    object _data_10304 = NOVALUE;
    object _5710 = NOVALUE; // 10306 5710
// skipping _5709  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filebase pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg filebase pc: 3 op: STARTLINE (58)

    /** filesys.e:1375		data = pathinfo(path)*/
    // SubProg filebase pc: 5 op: PROC (27)
    RefDS(_path_10303);
    _0 = _data_10304;
    _data_10304 = _16pathinfo(_path_10303, 0);
    DeRef(_0);
    // SubProg filebase pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg filebase pc: 12 op: STARTLINE (58)

    /** filesys.e:1377		return data[3]*/
    // SubProg filebase pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_10304);
    _5710 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg filebase pc: 18 op: RETURNF (28)
    Ref(_5710);

// Exiting block BLOCK: filebase

// block var path_10303
    DeRefDS(_path_10303);

// block var data_10304
    DeRefDS(_data_10304);
    return _5710;
    // SubProg filebase pc: 22 op: BADRETURNF (43)
    ;
}


object _16fileext(object _path_10309)
{
    object _data_10310 = NOVALUE;
    object _5712 = NOVALUE; // 10312 5712
// skipping _5711  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fileext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg fileext pc: 3 op: STARTLINE (58)

    /** filesys.e:1403		data = pathinfo(path)*/
    // SubProg fileext pc: 5 op: PROC (27)
    RefDS(_path_10309);
    _0 = _data_10310;
    _data_10310 = _16pathinfo(_path_10309, 0);
    DeRef(_0);
    // SubProg fileext pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg fileext pc: 12 op: STARTLINE (58)

    /** filesys.e:1404		return data[4]*/
    // SubProg fileext pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_data_10310);
    _5712 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg fileext pc: 18 op: RETURNF (28)
    Ref(_5712);

// Exiting block BLOCK: fileext

// block var path_10309
    DeRefDS(_path_10309);

// block var data_10310
    DeRefDS(_data_10310);
    return _5712;
    // SubProg fileext pc: 22 op: BADRETURNF (43)
    ;
}


object _16defaultext(object _path_10321, object _defext_10322)
{
    object _5727 = NOVALUE; // 10343 5727
// skipping _5726  name type: 0
// skipping _5725  name type: 0
    object _5724 = NOVALUE; // 10340 5724
// skipping _5723  name type: 0
    object _5722 = NOVALUE; // 10336 5722
    object _5721 = NOVALUE; // 10334 5721
    object _5720 = NOVALUE; // 10333 5720
// skipping _5719  name type: 0
    object _5718 = NOVALUE; // 10330 5718
    object _5717 = NOVALUE; // 10328 5717
// skipping _5716  name type: 0
    object _5715 = NOVALUE; // 10324 5715
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg defaultext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg defaultext pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg defaultext pc: 5 op: STARTLINE (58)

    /** filesys.e:1455		if length(defext) = 0 then*/
    // SubProg defaultext pc: 7 op: LENGTH (42)
    // Known sequence length:
    _5715 = 3;
    // SubProg defaultext pc: 10 op: EQUALS_IFW_I (121)
    // SubProg defaultext pc: 21 op: STARTLINE (58)

    /** filesys.e:1459		for i = length(path) to 1 by -1 do*/
    // SubProg defaultext pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_path_10321)){
            _5717 = SEQ_PTR(_path_10321)->length;
    }
    else {
        _5717 = 1;
    }
    // SubProg defaultext pc: 26 op: FOR_I (125)
    {
        object _i_10327;
        _i_10327 = _5717;
L1: // addr: 33 pc: 26 sub: 10319 op: 125
        if (_i_10327 < 1){
            goto L2; // [26] 95
        }
        // SubProg defaultext pc: 33 op: STARTLINE (58)

        /** filesys.e:1460			if path[i] = '.' then*/
        // SubProg defaultext pc: 35 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_path_10321);
        _5718 = (object)*(((s1_ptr)_2)->base + _i_10327);
        // SubProg defaultext pc: 39 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _5718, 46)){
            _5718 = NOVALUE;
            goto L3; // [39] 50
        }
        _5718 = NOVALUE;
        // SubProg defaultext pc: 43 op: STARTLINE (58)

        /** filesys.e:1462				return path*/
        // SubProg defaultext pc: 45 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var defext_10322
        DeRefDSi(_defext_10322);
        return _path_10321;
        // SubProg defaultext pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 10319 op: 159
        // SubProg defaultext pc: 50 op: STARTLINE (58)

        /** filesys.e:1464			if find(path[i], SLASHES) then*/
        // SubProg defaultext pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_path_10321);
        _5720 = (object)*(((s1_ptr)_2)->base + _i_10327);
        // SubProg defaultext pc: 56 op: FIND_FROM (176)
        _5721 = find_from(_5720, _16SLASHES_9825, 1);
        _5720 = NOVALUE;
        // SubProg defaultext pc: 61 op: IF (20)
        if (_5721 == 0)
        {
            _5721 = NOVALUE;
            goto L4; // [61] 88
        }
        else{
            _5721 = NOVALUE;
        }
        // SubProg defaultext pc: 64 op: STARTLINE (58)

        /** filesys.e:1465				if i = length(path) then*/
        // SubProg defaultext pc: 66 op: LENGTH (42)
        if (IS_SEQUENCE(_path_10321)){
                _5722 = SEQ_PTR(_path_10321)->length;
        }
        else {
            _5722 = 1;
        }
        // SubProg defaultext pc: 69 op: EQUALS_IFW_I (121)
        if (_i_10327 != _5722)
        goto L2; // [69] 95
        // SubProg defaultext pc: 73 op: STARTLINE (58)

        /** filesys.e:1467					return path*/
        // SubProg defaultext pc: 75 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var defext_10322
        DeRefDSi(_defext_10322);
        return _path_10321;
        // SubProg defaultext pc: 79 op: ELSE (23)
        goto L5; // [79] 87
        // SubProg defaultext pc: 81 op: NOP1 (159)
        // SubProg defaultext pc: 82 op: STARTLINE (58)

        /** filesys.e:1470					exit*/
        // SubProg defaultext pc: 84 op: EXIT (61)
        goto L2; // [84] 95
        // SubProg defaultext pc: 86 op: NOP1 (159)
L5: // addr: 87 pc: 86 sub: 10319 op: 159
        // SubProg defaultext pc: 87 op: NOP1 (159)
L4: // addr: 88 pc: 87 sub: 10319 op: 159
        // SubProg defaultext pc: 88 op: STARTLINE (58)

        /** filesys.e:1473		end for*/
        // SubProg defaultext pc: 90 op: ENDFOR_GENERAL (39)
        _i_10327 = _i_10327 + -1;
        goto L1; // [90] 33
L2: // addr: 95 pc: 90 sub: 10319 op: 39
        ;
    }
    // SubProg defaultext pc: 95 op: STARTLINE (58)

    /** filesys.e:1475		if defext[1] != '.' then*/
    // SubProg defaultext pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defext_10322);
    _5724 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg defaultext pc: 101 op: NOTEQ_IFW (105)
    if (_5724 == 46)
    goto L6; // [101] 112
    // SubProg defaultext pc: 105 op: STARTLINE (58)

    /** filesys.e:1476			path &= '.'*/
    // SubProg defaultext pc: 107 op: CONCAT (15)
    Append(&_path_10321, _path_10321, 46);
    // SubProg defaultext pc: 111 op: NOP1 (159)
L6: // addr: 112 pc: 111 sub: 10319 op: 159
    // SubProg defaultext pc: 112 op: STARTLINE (58)

    /** filesys.e:1479		return path & defext*/
    // SubProg defaultext pc: 114 op: CONCAT (15)
    Concat((object_ptr)&_5727, _path_10321, _defext_10322);
    // SubProg defaultext pc: 118 op: RETURNF (28)

// Exiting block BLOCK: defaultext

// block var path_10321
    DeRefDS(_path_10321);

// block var defext_10322
    DeRefDSi(_defext_10322);
    _5724 = NOVALUE;
    return _5727;
    // SubProg defaultext pc: 122 op: BADRETURNF (43)
    ;
}


object _16absolute_path(object _filename_10346)
{
    object _5731 = NOVALUE; // 10352 5731
    object _5730 = NOVALUE; // 10351 5730
// skipping _5729  name type: 0
    object _5728 = NOVALUE; // 10348 5728
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg absolute_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg absolute_path pc: 3 op: STARTLINE (58)

    /** filesys.e:1514		if length(filename) = 0 then*/
    // SubProg absolute_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_10346)){
            _5728 = SEQ_PTR(_filename_10346)->length;
    }
    else {
        _5728 = 1;
    }
    // SubProg absolute_path pc: 8 op: EQUALS_IFW_I (121)
    if (_5728 != 0)
    goto L1; // [8] 19
    // SubProg absolute_path pc: 12 op: STARTLINE (58)

    /** filesys.e:1515			return 0*/
    // SubProg absolute_path pc: 14 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_10346
    DeRefDS(_filename_10346);
    return 0;
    // SubProg absolute_path pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 10344 op: 159
    // SubProg absolute_path pc: 19 op: STARTLINE (58)

    /** filesys.e:1518		if eu:find(filename[1], SLASHES) then*/
    // SubProg absolute_path pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_filename_10346);
    _5730 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg absolute_path pc: 25 op: FIND_FROM (176)
    _5731 = find_from(_5730, _16SLASHES_9825, 1);
    _5730 = NOVALUE;
    // SubProg absolute_path pc: 30 op: IF (20)
    if (_5731 == 0)
    {
        _5731 = NOVALUE;
        goto L2; // [30] 40
    }
    else{
        _5731 = NOVALUE;
    }
    // SubProg absolute_path pc: 33 op: STARTLINE (58)

    /** filesys.e:1519			return 1*/
    // SubProg absolute_path pc: 35 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_10346
    DeRefDS(_filename_10346);
    return 1;
    // SubProg absolute_path pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 10344 op: 159
    // SubProg absolute_path pc: 40 op: STARTLINE (58)

    /** filesys.e:1522		ifdef WINDOWS then*/
    // SubProg absolute_path pc: 42 op: STARTLINE (58)

    /** filesys.e:1539		return 0*/
    // SubProg absolute_path pc: 44 op: RETURNF (28)

// Exiting block BLOCK: absolute_path

// block var filename_10346
    DeRefDS(_filename_10346);
    return 0;
    // SubProg absolute_path pc: 48 op: BADRETURNF (43)
    ;
}


object _16canonical_path(object _path_in_10366, object _directory_given_10367, object _case_flags_10368)
{
    object _lPath_10369 = NOVALUE;
    object _lPosA_10370 = NOVALUE;
    object _lPosB_10371 = NOVALUE;
    object _lLevel_10372 = NOVALUE;
    object _lHome_10373 = NOVALUE;
    object _wildcard_suffix_10415 = NOVALUE;
    object _first_wildcard_at_10416 = NOVALUE;
    object _last_slash_10419 = NOVALUE;
    object _sl_10472 = NOVALUE;
    object _short_name_10475 = NOVALUE;
    object _correct_name_10478 = NOVALUE;
    object _lower_name_10481 = NOVALUE;
    object _part_10497 = NOVALUE;
    object _list_10501 = NOVALUE;
    object _supplied_name_10504 = NOVALUE;
    object _read_name_10523 = NOVALUE;
    object _read_name_10548 = NOVALUE;
    object _5911 = NOVALUE; // 10601 5911
// skipping _5910  name type: 0
    object _5909 = NOVALUE; // 10598 5909
    object _5908 = NOVALUE; // 10597 5908
    object _5907 = NOVALUE; // 10596 5907
    object _5906 = NOVALUE; // 10595 5906
    object _5905 = NOVALUE; // 10594 5905
// skipping _5904  name type: 0
    object _5903 = NOVALUE; // 10591 5903
    object _5902 = NOVALUE; // 10590 5902
    object _5901 = NOVALUE; // 10589 5901
    object _5900 = NOVALUE; // 10588 5900
    object _5899 = NOVALUE; // 10586 5899
    object _5898 = NOVALUE; // 10585 5898
    object _5897 = NOVALUE; // 10584 5897
    object _5896 = NOVALUE; // 10583 5896
// skipping _5895  name type: 0
    object _5894 = NOVALUE; // 10580 5894
    object _5893 = NOVALUE; // 10579 5893
    object _5892 = NOVALUE; // 10578 5892
    object _5891 = NOVALUE; // 10577 5891
    object _5890 = NOVALUE; // 10576 5890
    object _5889 = NOVALUE; // 10575 5889
    object _5888 = NOVALUE; // 10573 5888
    object _5887 = NOVALUE; // 10572 5887
    object _5886 = NOVALUE; // 10571 5886
// skipping _5885  name type: 0
    object _5884 = NOVALUE; // 10569 5884
    object _5883 = NOVALUE; // 10568 5883
    object _5882 = NOVALUE; // 10567 5882
    object _5881 = NOVALUE; // 10566 5881
    object _5880 = NOVALUE; // 10565 5880
    object _5879 = NOVALUE; // 10564 5879
    object _5878 = NOVALUE; // 10563 5878
    object _5877 = NOVALUE; // 10562 5877
    object _5876 = NOVALUE; // 10561 5876
    object _5875 = NOVALUE; // 10560 5875
    object _5874 = NOVALUE; // 10559 5874
    object _5873 = NOVALUE; // 10558 5873
    object _5872 = NOVALUE; // 10556 5872
    object _5871 = NOVALUE; // 10555 5871
    object _5870 = NOVALUE; // 10553 5870
// skipping _5869  name type: 0
    object _5868 = NOVALUE; // 10549 5868
    object _5867 = NOVALUE; // 10547 5867
    object _5866 = NOVALUE; // 10544 5866
    object _5865 = NOVALUE; // 10543 5865
    object _5864 = NOVALUE; // 10542 5864
// skipping _5863  name type: 0
    object _5862 = NOVALUE; // 10540 5862
    object _5861 = NOVALUE; // 10539 5861
    object _5860 = NOVALUE; // 10538 5860
    object _5859 = NOVALUE; // 10537 5859
    object _5858 = NOVALUE; // 10536 5858
    object _5857 = NOVALUE; // 10535 5857
    object _5856 = NOVALUE; // 10534 5856
    object _5855 = NOVALUE; // 10533 5855
    object _5854 = NOVALUE; // 10532 5854
    object _5853 = NOVALUE; // 10531 5853
    object _5852 = NOVALUE; // 10530 5852
    object _5851 = NOVALUE; // 10529 5851
    object _5850 = NOVALUE; // 10527 5850
// skipping _5849  name type: 0
    object _5848 = NOVALUE; // 10524 5848
    object _5847 = NOVALUE; // 10522 5847
// skipping _5846  name type: 0
    object _5845 = NOVALUE; // 10518 5845
    object _5844 = NOVALUE; // 10517 5844
    object _5843 = NOVALUE; // 10516 5843
    object _5842 = NOVALUE; // 10515 5842
    object _5841 = NOVALUE; // 10512 5841
// skipping _5840  name type: 0
    object _5839 = NOVALUE; // 10509 5839
    object _5838 = NOVALUE; // 10508 5838
    object _5837 = NOVALUE; // 10507 5837
    object _5836 = NOVALUE; // 10506 5836
    object _5835 = NOVALUE; // 10505 5835
// skipping _5834  name type: 0
    object _5833 = NOVALUE; // 10502 5833
// skipping _5832  name type: 0
    object _5831 = NOVALUE; // 10499 5831
    object _5830 = NOVALUE; // 10498 5830
    object _5828 = NOVALUE; // 10495 5828
    object _5827 = NOVALUE; // 10494 5827
// skipping _5826  name type: 0
    object _5825 = NOVALUE; // 10490 5825
    object _5824 = NOVALUE; // 10489 5824
    object _5823 = NOVALUE; // 10488 5823
// skipping _5822  name type: 0
    object _5821 = NOVALUE; // 10486 5821
    object _5820 = NOVALUE; // 10485 5820
// skipping _5819  name type: 0
    object _5818 = NOVALUE; // 10482 5818
// skipping _5817  name type: 0
    object _5816 = NOVALUE; // 10479 5816
// skipping _5815  name type: 0
    object _5814 = NOVALUE; // 10476 5814
// skipping _5813  name type: 0
// skipping _5812  name type: 0
// skipping _5811  name type: 0
// skipping _5810  name type: 0
// skipping _5809  name type: 0
// skipping _5808  name type: 0
    object _5807 = NOVALUE; // 10463 5807
// skipping _5806  name type: 0
// skipping _5805  name type: 0
    object _5804 = NOVALUE; // 10459 5804
    object _5803 = NOVALUE; // 10458 5803
    object _5802 = NOVALUE; // 10457 5802
    object _5801 = NOVALUE; // 10456 5801
// skipping _5800  name type: 0
// skipping _5799  name type: 0
// skipping _5798  name type: 0
// skipping _5797  name type: 0
// skipping _5796  name type: 0
    object _5795 = NOVALUE; // 10448 5795
// skipping _5794  name type: 0
// skipping _5793  name type: 0
// skipping _5792  name type: 0
    object _5791 = NOVALUE; // 10443 5791
    object _5790 = NOVALUE; // 10442 5790
    object _5789 = NOVALUE; // 10441 5789
    object _5788 = NOVALUE; // 10440 5788
    object _5787 = NOVALUE; // 10439 5787
// skipping _5786  name type: 0
    object _5785 = NOVALUE; // 10436 5785
    object _5784 = NOVALUE; // 10435 5784
    object _5783 = NOVALUE; // 10434 5783
    object _5781 = NOVALUE; // 10432 5781
    object _5780 = NOVALUE; // 10431 5780
    object _5779 = NOVALUE; // 10430 5779
    object _5778 = NOVALUE; // 10429 5778
// skipping _5777  name type: 0
    object _5776 = NOVALUE; // 10424 5776
// skipping _5775  name type: 0
    object _5774 = NOVALUE; // 10422 5774
// skipping _5773  name type: 0
// skipping _5772  name type: 0
// skipping _5771  name type: 0
    object _5770 = NOVALUE; // 10413 5770
    object _5769 = NOVALUE; // 10412 5769
// skipping _5768  name type: 0
    object _5767 = NOVALUE; // 10409 5767
    object _5766 = NOVALUE; // 10408 5766
    object _5765 = NOVALUE; // 10407 5765
    object _5764 = NOVALUE; // 10406 5764
    object _5763 = NOVALUE; // 10405 5763
    object _5762 = NOVALUE; // 10404 5762
    object _5761 = NOVALUE; // 10403 5761
// skipping _5760  name type: 0
// skipping _5759  name type: 0
    object _5758 = NOVALUE; // 10399 5758
    object _5757 = NOVALUE; // 10398 5757
// skipping _5754  name type: 0
    object _5752 = NOVALUE; // 10392 5752
    object _5751 = NOVALUE; // 10391 5751
    object _5750 = NOVALUE; // 10390 5750
    object _5749 = NOVALUE; // 10389 5749
    object _5748 = NOVALUE; // 10388 5748
// skipping _5747  name type: 0
    object _5746 = NOVALUE; // 10385 5746
    object _5745 = NOVALUE; // 10384 5745
    object _5744 = NOVALUE; // 10383 5744
    object _5743 = NOVALUE; // 10382 5743
    object _5742 = NOVALUE; // 10381 5742
    object _5741 = NOVALUE; // 10380 5741
    object _5740 = NOVALUE; // 10379 5740
    object _5739 = NOVALUE; // 10378 5739
    object _5738 = NOVALUE; // 10377 5738
    object _5737 = NOVALUE; // 10376 5737
    object _5736 = NOVALUE; // 10375 5736
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg canonical_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 3 op: INTEGER_CHECK (96)
    // SubProg canonical_path pc: 5 op: INTEGER_CHECK (96)
    // SubProg canonical_path pc: 7 op: STARTLINE (58)

    /** filesys.e:1607	    sequence lPath = ""*/
    // SubProg canonical_path pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lPath_10369);
    _lPath_10369 = _5;
    // SubProg canonical_path pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 14 op: STARTLINE (58)

    /** filesys.e:1608	    integer lPosA = -1*/
    // SubProg canonical_path pc: 16 op: ASSIGN_I (113)
    _lPosA_10370 = -1;
    // SubProg canonical_path pc: 19 op: STARTLINE (58)

    /** filesys.e:1609	    integer lPosB = -1*/
    // SubProg canonical_path pc: 21 op: ASSIGN_I (113)
    _lPosB_10371 = -1;
    // SubProg canonical_path pc: 24 op: STARTLINE (58)

    /** filesys.e:1610	    sequence lLevel = ""*/
    // SubProg canonical_path pc: 26 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_lLevel_10372);
    _lLevel_10372 = _5;
    // SubProg canonical_path pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 31 op: STARTLINE (58)

    /** filesys.e:1612	    path_in = path_in*/
    // SubProg canonical_path pc: 33 op: ASSIGN (18)
    RefDS(_path_in_10366);
    DeRefDS(_path_in_10366);
    _path_in_10366 = _path_in_10366;
    // SubProg canonical_path pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 38 op: STARTLINE (58)

    /** filesys.e:1614		ifdef UNIX then*/
    // SubProg canonical_path pc: 40 op: STARTLINE (58)

    /** filesys.e:1615			lPath = path_in*/
    // SubProg canonical_path pc: 42 op: ASSIGN (18)
    RefDS(_path_in_10366);
    DeRefDS(_lPath_10369);
    _lPath_10369 = _path_in_10366;
    // SubProg canonical_path pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 47 op: STARTLINE (58)

    /** filesys.e:1623	    if (length(lPath) > 2 and lPath[1] = '"' and lPath[$] = '"') then*/
    // SubProg canonical_path pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5736 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5736 = 1;
    }
    // SubProg canonical_path pc: 52 op: GREATER (6)
    _5737 = (_5736 > 2);
    _5736 = NOVALUE;
    // SubProg canonical_path pc: 56 op: SC1_AND (141)
    if (_5737 == 0) {
        _5738 = 0;
        goto L1; // [56] 72
    }
    // SubProg canonical_path pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5739 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 64 op: EQUALS (3)
    if (IS_ATOM_INT(_5739)) {
        _5740 = (_5739 == 34);
    }
    else {
        _5740 = binary_op(EQUALS, _5739, 34);
    }
    _5739 = NOVALUE;
    // SubProg canonical_path pc: 68 op: SC2_AND (142)
    if (IS_ATOM_INT(_5740))
    _5738 = (_5740 != 0);
    else
    _5738 = DBL_PTR(_5740)->dbl != 0.0;
    // SubProg canonical_path pc: 71 op: NOP1 (159)
L1: // addr: 72 pc: 71 sub: 10364 op: 159
    // SubProg canonical_path pc: 72 op: SC1_AND (141)
    if (_5738 == 0) {
        DeRef(_5741);
        _5741 = 0;
        goto L2; // [72] 91
    }
    // SubProg canonical_path pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5742 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5742 = 1;
    }
    // SubProg canonical_path pc: 79 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5743 = (object)*(((s1_ptr)_2)->base + _5742);
    // SubProg canonical_path pc: 83 op: EQUALS (3)
    if (IS_ATOM_INT(_5743)) {
        _5744 = (_5743 == 34);
    }
    else {
        _5744 = binary_op(EQUALS, _5743, 34);
    }
    _5743 = NOVALUE;
    // SubProg canonical_path pc: 87 op: SC2_AND (142)
    if (IS_ATOM_INT(_5744))
    _5741 = (_5744 != 0);
    else
    _5741 = DBL_PTR(_5744)->dbl != 0.0;
    // SubProg canonical_path pc: 90 op: NOP1 (159)
L2: // addr: 91 pc: 90 sub: 10364 op: 159
    // SubProg canonical_path pc: 91 op: IF (20)
    if (_5741 == 0)
    {
        _5741 = NOVALUE;
        goto L3; // [91] 109
    }
    else{
        _5741 = NOVALUE;
    }
    // SubProg canonical_path pc: 94 op: STARTLINE (58)

    /** filesys.e:1624	        lPath = lPath[2..$-1]*/
    // SubProg canonical_path pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5745 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5745 = 1;
    }
    // SubProg canonical_path pc: 99 op: MINUS (10)
    _5746 = _5745 - 1;
    _5745 = NOVALUE;
    // SubProg canonical_path pc: 103 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_lPath_10369;
    RHS_Slice(_lPath_10369, 2, _5746);
    // SubProg canonical_path pc: 108 op: NOP1 (159)
L3: // addr: 109 pc: 108 sub: 10364 op: 159
    // SubProg canonical_path pc: 109 op: STARTLINE (58)

    /** filesys.e:1628	    if (length(lPath) > 0 and lPath[1] = '~') then*/
    // SubProg canonical_path pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5748 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5748 = 1;
    }
    // SubProg canonical_path pc: 114 op: GREATER (6)
    _5749 = (_5748 > 0);
    _5748 = NOVALUE;
    // SubProg canonical_path pc: 118 op: SC1_AND (141)
    if (_5749 == 0) {
        DeRef(_5750);
        _5750 = 0;
        goto L4; // [118] 134
    }
    // SubProg canonical_path pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5751 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 126 op: EQUALS (3)
    if (IS_ATOM_INT(_5751)) {
        _5752 = (_5751 == 126);
    }
    else {
        _5752 = binary_op(EQUALS, _5751, 126);
    }
    _5751 = NOVALUE;
    // SubProg canonical_path pc: 130 op: SC2_AND (142)
    if (IS_ATOM_INT(_5752))
    _5750 = (_5752 != 0);
    else
    _5750 = DBL_PTR(_5752)->dbl != 0.0;
    // SubProg canonical_path pc: 133 op: NOP1 (159)
L4: // addr: 134 pc: 133 sub: 10364 op: 159
    // SubProg canonical_path pc: 134 op: IF (20)
    if (_5750 == 0)
    {
        _5750 = NOVALUE;
        goto L5; // [134] 222
    }
    else{
        _5750 = NOVALUE;
    }
    // SubProg canonical_path pc: 137 op: STARTLINE (58)

    /** filesys.e:1630			lHome = getenv("HOME")*/
    // SubProg canonical_path pc: 139 op: GETENV (91)
    DeRefi(_lHome_10373);
    _lHome_10373 = EGetEnv(_5753);
    // SubProg canonical_path pc: 142 op: STARTLINE (58)

    /** filesys.e:1631			ifdef WINDOWS then*/
    // SubProg canonical_path pc: 144 op: STARTLINE (58)

    /** filesys.e:1637			if lHome[$] != SLASH then*/
    // SubProg canonical_path pc: 146 op: LENGTH (42)
    if (IS_SEQUENCE(_lHome_10373)){
            _5757 = SEQ_PTR(_lHome_10373)->length;
    }
    else {
        _5757 = 1;
    }
    // SubProg canonical_path pc: 149 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_lHome_10373);
    _5758 = (object)*(((s1_ptr)_2)->base + _5757);
    // SubProg canonical_path pc: 153 op: NOTEQ_IFW (105)
    if (_5758 == 47)
    goto L6; // [153] 164
    // SubProg canonical_path pc: 157 op: STARTLINE (58)

    /** filesys.e:1638				lHome &= SLASH*/
    // SubProg canonical_path pc: 159 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_10373) && IS_ATOM(47)) {
        Append(&_lHome_10373, _lHome_10373, 47);
    }
    else if (IS_ATOM(_lHome_10373) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_lHome_10373, _lHome_10373, 47);
    }
    // SubProg canonical_path pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 10364 op: 159
    // SubProg canonical_path pc: 164 op: STARTLINE (58)

    /** filesys.e:1641			if length(lPath) > 1 and lPath[2] = SLASH then*/
    // SubProg canonical_path pc: 166 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5761 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5761 = 1;
    }
    // SubProg canonical_path pc: 169 op: GREATER (6)
    _5762 = (_5761 > 1);
    _5761 = NOVALUE;
    // SubProg canonical_path pc: 173 op: SC1_AND_IF (146)
    if (_5762 == 0) {
        goto L7; // [173] 206
    }
    // SubProg canonical_path pc: 177 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5764 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg canonical_path pc: 181 op: EQUALS (3)
    if (IS_ATOM_INT(_5764)) {
        _5765 = (_5764 == 47);
    }
    else {
        _5765 = binary_op(EQUALS, _5764, 47);
    }
    _5764 = NOVALUE;
    // SubProg canonical_path pc: 185 op: NOP1 (159)
    // SubProg canonical_path pc: 186 op: IF (20)
    if (_5765 == 0) {
        DeRef(_5765);
        _5765 = NOVALUE;
        goto L7; // [186] 206
    }
    else {
        if (!IS_ATOM_INT(_5765) && DBL_PTR(_5765)->dbl == 0.0){
            DeRef(_5765);
            _5765 = NOVALUE;
            goto L7; // [186] 206
        }
        DeRef(_5765);
        _5765 = NOVALUE;
    }
    DeRef(_5765);
    _5765 = NOVALUE;
    // SubProg canonical_path pc: 189 op: STARTLINE (58)

    /** filesys.e:1642				lPath = lHome & lPath[3 .. $]*/
    // SubProg canonical_path pc: 191 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5766 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5766 = 1;
    }
    // SubProg canonical_path pc: 194 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5767;
    RHS_Slice(_lPath_10369, 3, _5766);
    // SubProg canonical_path pc: 199 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_10373) && IS_ATOM(_5767)) {
    }
    else if (IS_ATOM(_lHome_10373) && IS_SEQUENCE(_5767)) {
        Ref(_lHome_10373);
        Prepend(&_lPath_10369, _5767, _lHome_10373);
    }
    else {
        Concat((object_ptr)&_lPath_10369, _lHome_10373, _5767);
    }
    DeRefDS(_5767);
    _5767 = NOVALUE;
    // SubProg canonical_path pc: 203 op: ELSE (23)
    goto L8; // [203] 221
    // SubProg canonical_path pc: 205 op: NOP1 (159)
L7: // addr: 206 pc: 205 sub: 10364 op: 159
    // SubProg canonical_path pc: 206 op: STARTLINE (58)

    /** filesys.e:1644				lPath = lHome & lPath[2 .. $]*/
    // SubProg canonical_path pc: 208 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5769 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5769 = 1;
    }
    // SubProg canonical_path pc: 211 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_5770;
    RHS_Slice(_lPath_10369, 2, _5769);
    // SubProg canonical_path pc: 216 op: CONCAT (15)
    if (IS_SEQUENCE(_lHome_10373) && IS_ATOM(_5770)) {
    }
    else if (IS_ATOM(_lHome_10373) && IS_SEQUENCE(_5770)) {
        Ref(_lHome_10373);
        Prepend(&_lPath_10369, _5770, _lHome_10373);
    }
    else {
        Concat((object_ptr)&_lPath_10369, _lHome_10373, _5770);
    }
    DeRefDS(_5770);
    _5770 = NOVALUE;
    // SubProg canonical_path pc: 220 op: NOP1 (159)
L8: // addr: 221 pc: 220 sub: 10364 op: 159
    // SubProg canonical_path pc: 221 op: NOP1 (159)
L5: // addr: 222 pc: 221 sub: 10364 op: 159
    // SubProg canonical_path pc: 222 op: STARTLINE (58)

    /** filesys.e:1648		ifdef WINDOWS then*/
    // SubProg canonical_path pc: 224 op: STARTLINE (58)

    /** filesys.e:1658		sequence wildcard_suffix*/
    // SubProg canonical_path pc: 226 op: STARTLINE (58)

    /** filesys.e:1659		integer first_wildcard_at = find_first_wildcard( lPath )*/
    // SubProg canonical_path pc: 228 op: PROC (27)
    RefDS(_lPath_10369);
    _first_wildcard_at_10416 = _16find_first_wildcard(_lPath_10369, 1);
    // SubProg canonical_path pc: 233 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_first_wildcard_at_10416)) {
        _1 = (object)(DBL_PTR(_first_wildcard_at_10416)->dbl);
        DeRefDS(_first_wildcard_at_10416);
        _first_wildcard_at_10416 = _1;
    }
    // SubProg canonical_path pc: 235 op: STARTLINE (58)

    /** filesys.e:1660		if first_wildcard_at then*/
    // SubProg canonical_path pc: 237 op: IF (20)
    if (_first_wildcard_at_10416 == 0)
    {
        goto L9; // [237] 298
    }
    else{
    }
    // SubProg canonical_path pc: 240 op: STARTLINE (58)

    /** filesys.e:1661			integer last_slash = search:rfind( SLASH, lPath, first_wildcard_at )*/
    // SubProg canonical_path pc: 242 op: PROC (27)
    RefDS(_lPath_10369);
    _last_slash_10419 = _22rfind(47, _lPath_10369, _first_wildcard_at_10416);
    // SubProg canonical_path pc: 248 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_last_slash_10419)) {
        _1 = (object)(DBL_PTR(_last_slash_10419)->dbl);
        DeRefDS(_last_slash_10419);
        _last_slash_10419 = _1;
    }
    // SubProg canonical_path pc: 250 op: STARTLINE (58)

    /** filesys.e:1662			if last_slash then*/
    // SubProg canonical_path pc: 252 op: IF (20)
    if (_last_slash_10419 == 0)
    {
        goto LA; // [252] 278
    }
    else{
    }
    // SubProg canonical_path pc: 255 op: STARTLINE (58)

    /** filesys.e:1663				wildcard_suffix = lPath[last_slash..$]*/
    // SubProg canonical_path pc: 257 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5774 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5774 = 1;
    }
    // SubProg canonical_path pc: 260 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_wildcard_suffix_10415;
    RHS_Slice(_lPath_10369, _last_slash_10419, _5774);
    // SubProg canonical_path pc: 265 op: STARTLINE (58)

    /** filesys.e:1664				lPath = remove( lPath, last_slash, length( lPath ) )*/
    // SubProg canonical_path pc: 267 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5776 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5776 = 1;
    }
    // SubProg canonical_path pc: 270 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_10369);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_last_slash_10419)) ? _last_slash_10419 : (object)(DBL_PTR(_last_slash_10419)->dbl);
        int stop = (IS_ATOM_INT(_5776)) ? _5776 : (object)(DBL_PTR(_5776)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_10369), start, &_lPath_10369 );
            }
            else Tail(SEQ_PTR(_lPath_10369), stop+1, &_lPath_10369);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_10369), start, &_lPath_10369);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_10369 = Remove_elements(start, stop, (SEQ_PTR(_lPath_10369)->ref == 1));
        }
    }
    _5776 = NOVALUE;
    // SubProg canonical_path pc: 275 op: ELSE (23)
    goto LB; // [275] 293
    // SubProg canonical_path pc: 277 op: NOP1 (159)
LA: // addr: 278 pc: 277 sub: 10364 op: 159
    // SubProg canonical_path pc: 278 op: STARTLINE (58)

    /** filesys.e:1666				wildcard_suffix = lPath*/
    // SubProg canonical_path pc: 280 op: ASSIGN (18)
    RefDS(_lPath_10369);
    DeRef(_wildcard_suffix_10415);
    _wildcard_suffix_10415 = _lPath_10369;
    // SubProg canonical_path pc: 283 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 285 op: STARTLINE (58)

    /** filesys.e:1667				lPath = ""*/
    // SubProg canonical_path pc: 287 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_lPath_10369);
    _lPath_10369 = _5;
    // SubProg canonical_path pc: 290 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 292 op: NOP1 (159)
LB: // addr: 293 pc: 292 sub: 10364 op: 159
    // SubProg canonical_path pc: 293 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var last_slash_10419
    // SubProg canonical_path pc: 295 op: ELSE (23)
    goto LC; // [295] 306
    // SubProg canonical_path pc: 297 op: NOP1 (159)
L9: // addr: 298 pc: 297 sub: 10364 op: 159
    // SubProg canonical_path pc: 298 op: STARTLINE (58)

    /** filesys.e:1670			wildcard_suffix = ""*/
    // SubProg canonical_path pc: 300 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_wildcard_suffix_10415);
    _wildcard_suffix_10415 = _5;
    // SubProg canonical_path pc: 303 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 305 op: NOP1 (159)
LC: // addr: 306 pc: 305 sub: 10364 op: 159
    // SubProg canonical_path pc: 306 op: STARTLINE (58)

    /** filesys.e:1674		if ((length(lPath) = 0) or not find(lPath[1], "/\\")) then*/
    // SubProg canonical_path pc: 308 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5778 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5778 = 1;
    }
    // SubProg canonical_path pc: 311 op: EQUALS (3)
    _5779 = (_5778 == 0);
    _5778 = NOVALUE;
    // SubProg canonical_path pc: 315 op: SC1_OR (143)
    if (_5779 != 0) {
        DeRef(_5780);
        _5780 = 1;
        goto LD; // [315] 335
    }
    // SubProg canonical_path pc: 319 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5781 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg canonical_path pc: 323 op: FIND_FROM (176)
    _5783 = find_from(_5781, _5782, 1);
    _5781 = NOVALUE;
    // SubProg canonical_path pc: 328 op: NOT (7)
    _5784 = (_5783 == 0);
    _5783 = NOVALUE;
    // SubProg canonical_path pc: 331 op: SC2_OR (144)
    _5780 = (_5784 != 0);
    // SubProg canonical_path pc: 334 op: NOP1 (159)
LD: // addr: 335 pc: 334 sub: 10364 op: 159
    // SubProg canonical_path pc: 335 op: IF (20)
    if (_5780 == 0)
    {
        _5780 = NOVALUE;
        goto LE; // [335] 351
    }
    else{
        _5780 = NOVALUE;
    }
    // SubProg canonical_path pc: 338 op: STARTLINE (58)

    /** filesys.e:1675			ifdef UNIX then*/
    // SubProg canonical_path pc: 340 op: STARTLINE (58)

    /** filesys.e:1676				lPath = curdir() & lPath*/
    // SubProg canonical_path pc: 342 op: PROC (27)
    _5785 = _16curdir(0);
    // SubProg canonical_path pc: 346 op: CONCAT (15)
    if (IS_SEQUENCE(_5785) && IS_ATOM(_lPath_10369)) {
    }
    else if (IS_ATOM(_5785) && IS_SEQUENCE(_lPath_10369)) {
        Ref(_5785);
        Prepend(&_lPath_10369, _lPath_10369, _5785);
    }
    else {
        Concat((object_ptr)&_lPath_10369, _5785, _lPath_10369);
        DeRef(_5785);
        _5785 = NOVALUE;
    }
    DeRef(_5785);
    _5785 = NOVALUE;
    // SubProg canonical_path pc: 350 op: NOP1 (159)
LE: // addr: 351 pc: 350 sub: 10364 op: 159
    // SubProg canonical_path pc: 351 op: STARTLINE (58)

    /** filesys.e:1694		if ((directory_given != 0) and (lPath[$] != SLASH) ) then*/
    // SubProg canonical_path pc: 353 op: NOTEQ (4)
    _5787 = (_directory_given_10367 != 0);
    // SubProg canonical_path pc: 357 op: SC1_AND (141)
    if (_5787 == 0) {
        DeRef(_5788);
        _5788 = 0;
        goto LF; // [357] 376
    }
    // SubProg canonical_path pc: 361 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5789 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5789 = 1;
    }
    // SubProg canonical_path pc: 364 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5790 = (object)*(((s1_ptr)_2)->base + _5789);
    // SubProg canonical_path pc: 368 op: NOTEQ (4)
    if (IS_ATOM_INT(_5790)) {
        _5791 = (_5790 != 47);
    }
    else {
        _5791 = binary_op(NOTEQ, _5790, 47);
    }
    _5790 = NOVALUE;
    // SubProg canonical_path pc: 372 op: SC2_AND (142)
    if (IS_ATOM_INT(_5791))
    _5788 = (_5791 != 0);
    else
    _5788 = DBL_PTR(_5791)->dbl != 0.0;
    // SubProg canonical_path pc: 375 op: NOP1 (159)
LF: // addr: 376 pc: 375 sub: 10364 op: 159
    // SubProg canonical_path pc: 376 op: IF (20)
    if (_5788 == 0)
    {
        _5788 = NOVALUE;
        goto L10; // [376] 386
    }
    else{
        _5788 = NOVALUE;
    }
    // SubProg canonical_path pc: 379 op: STARTLINE (58)

    /** filesys.e:1695			lPath &= SLASH*/
    // SubProg canonical_path pc: 381 op: CONCAT (15)
    Append(&_lPath_10369, _lPath_10369, 47);
    // SubProg canonical_path pc: 385 op: NOP1 (159)
L10: // addr: 386 pc: 385 sub: 10364 op: 159
    // SubProg canonical_path pc: 386 op: STARTLINE (58)

    /** filesys.e:1699		lLevel = SLASH & '.' & SLASH*/
    // SubProg canonical_path pc: 388 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = 46;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_10372, concat_list, 3);
    }
    // SubProg canonical_path pc: 394 op: STARTLINE (58)

    /** filesys.e:1700		lPosA = 1*/
    // SubProg canonical_path pc: 396 op: ASSIGN_I (113)
    _lPosA_10370 = 1;
    // SubProg canonical_path pc: 399 op: STARTLINE (58)

    /** filesys.e:1701		while( lPosA != 0 ) with entry do*/
    // SubProg canonical_path pc: 401 op: ELSE (23)
    goto L11; // [401] 422
    // SubProg canonical_path pc: 403 op: NOPWHILE (158)
L12: // addr: 404 pc: 403 sub: 10364 op: 158
    // SubProg canonical_path pc: 404 op: NOTEQ_IFW_I (122)
    if (_lPosA_10370 == 0)
    goto L13; // [404] 434
    // SubProg canonical_path pc: 408 op: STARTLINE (58)

    /** filesys.e:1702			lPath = eu:remove(lPath, lPosA, lPosA + 1)*/
    // SubProg canonical_path pc: 410 op: PLUS1 (93)
    _5795 = _lPosA_10370 + 1;
    if (_5795 > MAXINT){
        _5795 = NewDouble((eudouble)_5795);
    }
    // SubProg canonical_path pc: 414 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_10369);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosA_10370)) ? _lPosA_10370 : (object)(DBL_PTR(_lPosA_10370)->dbl);
        int stop = (IS_ATOM_INT(_5795)) ? _5795 : (object)(DBL_PTR(_5795)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_10369), start, &_lPath_10369 );
            }
            else Tail(SEQ_PTR(_lPath_10369), stop+1, &_lPath_10369);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_10369), start, &_lPath_10369);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_10369 = Remove_elements(start, stop, (SEQ_PTR(_lPath_10369)->ref == 1));
        }
    }
    DeRef(_5795);
    _5795 = NOVALUE;
    // SubProg canonical_path pc: 419 op: STARTLINE (58)

    /** filesys.e:1704		  entry*/
    // SubProg canonical_path pc: 421 op: NOP1 (159)
L11: // addr: 422 pc: 421 sub: 10364 op: 159
    // SubProg canonical_path pc: 422 op: STARTLINE (58)

    /** filesys.e:1705			lPosA = match(lLevel, lPath, lPosA )*/
    // SubProg canonical_path pc: 424 op: MATCH_FROM (177)
    _lPosA_10370 = e_match_from(_lLevel_10372, _lPath_10369, _lPosA_10370);
    // SubProg canonical_path pc: 429 op: STARTLINE (58)

    /** filesys.e:1706		end while*/
    // SubProg canonical_path pc: 431 op: ENDWHILE (22)
    goto L12; // [431] 404
    // SubProg canonical_path pc: 433 op: NOP1 (159)
L13: // addr: 434 pc: 433 sub: 10364 op: 159
    // SubProg canonical_path pc: 434 op: STARTLINE (58)

    /** filesys.e:1709		lLevel = SLASH & ".." & SLASH*/
    // SubProg canonical_path pc: 436 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = 47;
        concat_list[1] = _5542;
        concat_list[2] = 47;
        Concat_N((object_ptr)&_lLevel_10372, concat_list, 3);
    }
    // SubProg canonical_path pc: 442 op: STARTLINE (58)

    /** filesys.e:1711		lPosB = 1*/
    // SubProg canonical_path pc: 444 op: ASSIGN_I (113)
    _lPosB_10371 = 1;
    // SubProg canonical_path pc: 447 op: STARTLINE (58)

    /** filesys.e:1712		while( lPosA != 0 ) with entry do*/
    // SubProg canonical_path pc: 449 op: ELSE (23)
    goto L14; // [449] 527
    // SubProg canonical_path pc: 451 op: NOPWHILE (158)
L15: // addr: 452 pc: 451 sub: 10364 op: 158
    // SubProg canonical_path pc: 452 op: NOTEQ_IFW_I (122)
    if (_lPosA_10370 == 0)
    goto L16; // [452] 539
    // SubProg canonical_path pc: 456 op: STARTLINE (58)

    /** filesys.e:1714			lPosB = lPosA-1*/
    // SubProg canonical_path pc: 458 op: MINUS_I (116)
    _lPosB_10371 = _lPosA_10370 - 1;
    // SubProg canonical_path pc: 462 op: STARTLINE (58)

    /** filesys.e:1715			while((lPosB > 0) and (lPath[lPosB] != SLASH)) do*/
    // SubProg canonical_path pc: 464 op: NOP2 (110)
    // SubProg canonical_path pc: 466 op: NOPWHILE (158)
L17: // addr: 467 pc: 466 sub: 10364 op: 158
    // SubProg canonical_path pc: 467 op: GREATER (6)
    _5801 = (_lPosB_10371 > 0);
    // SubProg canonical_path pc: 471 op: SC1_AND (141)
    if (_5801 == 0) {
        DeRef(_5802);
        _5802 = 0;
        goto L18; // [471] 487
    }
    // SubProg canonical_path pc: 475 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5803 = (object)*(((s1_ptr)_2)->base + _lPosB_10371);
    // SubProg canonical_path pc: 479 op: NOTEQ (4)
    if (IS_ATOM_INT(_5803)) {
        _5804 = (_5803 != 47);
    }
    else {
        _5804 = binary_op(NOTEQ, _5803, 47);
    }
    _5803 = NOVALUE;
    // SubProg canonical_path pc: 483 op: SC2_AND (142)
    if (IS_ATOM_INT(_5804))
    _5802 = (_5804 != 0);
    else
    _5802 = DBL_PTR(_5804)->dbl != 0.0;
    // SubProg canonical_path pc: 486 op: NOP1 (159)
L18: // addr: 487 pc: 486 sub: 10364 op: 159
    // SubProg canonical_path pc: 487 op: WHILE (47)
    if (_5802 == 0)
    {
        _5802 = NOVALUE;
        goto L19; // [487] 501
    }
    else{
        _5802 = NOVALUE;
    }
    // SubProg canonical_path pc: 490 op: STARTLINE (58)

    /** filesys.e:1716				lPosB -= 1*/
    // SubProg canonical_path pc: 492 op: MINUS_I (116)
    _lPosB_10371 = _lPosB_10371 - 1;
    // SubProg canonical_path pc: 496 op: STARTLINE (58)

    /** filesys.e:1717			end while*/
    // SubProg canonical_path pc: 498 op: ENDWHILE (22)
    goto L17; // [498] 467
    // SubProg canonical_path pc: 500 op: NOP1 (159)
L19: // addr: 501 pc: 500 sub: 10364 op: 159
    // SubProg canonical_path pc: 501 op: STARTLINE (58)

    /** filesys.e:1718			if (lPosB <= 0) then*/
    // SubProg canonical_path pc: 503 op: LESSEQ_IFW_I (123)
    if (_lPosB_10371 > 0)
    goto L1A; // [503] 513
    // SubProg canonical_path pc: 507 op: STARTLINE (58)

    /** filesys.e:1719				lPosB = 1*/
    // SubProg canonical_path pc: 509 op: ASSIGN_I (113)
    _lPosB_10371 = 1;
    // SubProg canonical_path pc: 512 op: NOP1 (159)
L1A: // addr: 513 pc: 512 sub: 10364 op: 159
    // SubProg canonical_path pc: 513 op: STARTLINE (58)

    /** filesys.e:1721			lPath = eu:remove(lPath, lPosB, lPosA + 2)*/
    // SubProg canonical_path pc: 515 op: PLUS (11)
    _5807 = _lPosA_10370 + 2;
    if ((object)((uintptr_t)_5807 + (uintptr_t)HIGH_BITS) >= 0){
        _5807 = NewDouble((eudouble)_5807);
    }
    // SubProg canonical_path pc: 519 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_lPath_10369);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_lPosB_10371)) ? _lPosB_10371 : (object)(DBL_PTR(_lPosB_10371)->dbl);
        int stop = (IS_ATOM_INT(_5807)) ? _5807 : (object)(DBL_PTR(_5807)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_lPath_10369), start, &_lPath_10369 );
            }
            else Tail(SEQ_PTR(_lPath_10369), stop+1, &_lPath_10369);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_lPath_10369), start, &_lPath_10369);
        }
        else {
            assign_slice_seq = &assign_space;
            _lPath_10369 = Remove_elements(start, stop, (SEQ_PTR(_lPath_10369)->ref == 1));
        }
    }
    DeRef(_5807);
    _5807 = NOVALUE;
    // SubProg canonical_path pc: 524 op: STARTLINE (58)

    /** filesys.e:1723		  entry*/
    // SubProg canonical_path pc: 526 op: NOP1 (159)
L14: // addr: 527 pc: 526 sub: 10364 op: 159
    // SubProg canonical_path pc: 527 op: STARTLINE (58)

    /** filesys.e:1724			lPosA = match(lLevel, lPath, lPosB )*/
    // SubProg canonical_path pc: 529 op: MATCH_FROM (177)
    _lPosA_10370 = e_match_from(_lLevel_10372, _lPath_10369, _lPosB_10371);
    // SubProg canonical_path pc: 534 op: STARTLINE (58)

    /** filesys.e:1725		end while*/
    // SubProg canonical_path pc: 536 op: ENDWHILE (22)
    goto L15; // [536] 452
    // SubProg canonical_path pc: 538 op: NOP1 (159)
L16: // addr: 539 pc: 538 sub: 10364 op: 159
    // SubProg canonical_path pc: 539 op: STARTLINE (58)

    /** filesys.e:1727		if case_flags = TO_LOWER then*/
    // SubProg canonical_path pc: 541 op: EQUALS_IFW_I (121)
    if (_case_flags_10368 != 1)
    goto L1B; // [541] 556
    // SubProg canonical_path pc: 545 op: STARTLINE (58)

    /** filesys.e:1728			lPath = lower( lPath )*/
    // SubProg canonical_path pc: 547 op: PROC (27)
    RefDS(_lPath_10369);
    _0 = _lPath_10369;
    _lPath_10369 = _20lower(_lPath_10369);
    DeRefDS(_0);
    // SubProg canonical_path pc: 551 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 553 op: ELSE (23)
    goto L1C; // [553] 1153
    // SubProg canonical_path pc: 555 op: NOP1 (159)
L1B: // addr: 556 pc: 555 sub: 10364 op: 159
    // SubProg canonical_path pc: 556 op: STARTLINE (58)

    /** filesys.e:1730		elsif case_flags != AS_IS then*/
    // SubProg canonical_path pc: 558 op: NOTEQ_IFW_I (122)
    if (_case_flags_10368 == 0)
    goto L1D; // [558] 1150
    // SubProg canonical_path pc: 562 op: STARTLINE (58)

    /** filesys.e:1731			sequence sl = find_all(SLASH,lPath) -- split apart lPath*/
    // SubProg canonical_path pc: 564 op: PROC (27)
    RefDS(_lPath_10369);
    _0 = _sl_10472;
    _sl_10472 = _22find_all(47, _lPath_10369, 1);
    DeRef(_0);
    // SubProg canonical_path pc: 570 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 572 op: STARTLINE (58)

    /** filesys.e:1732			integer short_name = and_bits(TO_SHORT,case_flags)=TO_SHORT*/
    // SubProg canonical_path pc: 574 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)4 & (uintptr_t)_case_flags_10368;
         _5814 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 578 op: EQUALS (3)
    if (IS_ATOM_INT(_5814)) {
        _short_name_10475 = (_5814 == 4);
    }
    else {
        _short_name_10475 = (DBL_PTR(_5814)->dbl == (eudouble)4);
    }
    DeRef(_5814);
    _5814 = NOVALUE;
    // SubProg canonical_path pc: 582 op: STARTLINE (58)

    /** filesys.e:1733			integer correct_name = and_bits(case_flags,CORRECT)=CORRECT*/
    // SubProg canonical_path pc: 584 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_case_flags_10368 & (uintptr_t)2;
         _5816 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 588 op: EQUALS (3)
    if (IS_ATOM_INT(_5816)) {
        _correct_name_10478 = (_5816 == 2);
    }
    else {
        _correct_name_10478 = (DBL_PTR(_5816)->dbl == (eudouble)2);
    }
    DeRef(_5816);
    _5816 = NOVALUE;
    // SubProg canonical_path pc: 592 op: STARTLINE (58)

    /** filesys.e:1734			integer lower_name = and_bits(TO_LOWER,case_flags)=TO_LOWER*/
    // SubProg canonical_path pc: 594 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)1 & (uintptr_t)_case_flags_10368;
         _5818 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 598 op: EQUALS (3)
    if (IS_ATOM_INT(_5818)) {
        _lower_name_10481 = (_5818 == 1);
    }
    else {
        _lower_name_10481 = (DBL_PTR(_5818)->dbl == (eudouble)1);
    }
    DeRef(_5818);
    _5818 = NOVALUE;
    // SubProg canonical_path pc: 602 op: STARTLINE (58)

    /** filesys.e:1735			if lPath[$] != SLASH then*/
    // SubProg canonical_path pc: 604 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5820 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5820 = 1;
    }
    // SubProg canonical_path pc: 607 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lPath_10369);
    _5821 = (object)*(((s1_ptr)_2)->base + _5820);
    // SubProg canonical_path pc: 611 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _5821, 47)){
        _5821 = NOVALUE;
        goto L1E; // [611] 633
    }
    _5821 = NOVALUE;
    // SubProg canonical_path pc: 615 op: STARTLINE (58)

    /** filesys.e:1736				sl = sl & {length(lPath)+1}*/
    // SubProg canonical_path pc: 617 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5823 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5823 = 1;
    }
    // SubProg canonical_path pc: 620 op: PLUS1 (93)
    _5824 = _5823 + 1;
    _5823 = NOVALUE;
    // SubProg canonical_path pc: 624 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5824;
    _5825 = MAKE_SEQ(_1);
    _5824 = NOVALUE;
    // SubProg canonical_path pc: 628 op: CONCAT (15)
    Concat((object_ptr)&_sl_10472, _sl_10472, _5825);
    DeRefDS(_5825);
    _5825 = NOVALUE;
    // SubProg canonical_path pc: 632 op: NOP1 (159)
L1E: // addr: 633 pc: 632 sub: 10364 op: 159
    // SubProg canonical_path pc: 633 op: STARTLINE (58)

    /** filesys.e:1739			for i = length(sl)-1 to 1 by -1 label "partloop" do*/
    // SubProg canonical_path pc: 635 op: LENGTH (42)
    if (IS_SEQUENCE(_sl_10472)){
            _5827 = SEQ_PTR(_sl_10472)->length;
    }
    else {
        _5827 = 1;
    }
    // SubProg canonical_path pc: 638 op: MINUS (10)
    _5828 = _5827 - 1;
    _5827 = NOVALUE;
    // SubProg canonical_path pc: 642 op: FOR (21)
    {
        object _i_10493;
        _i_10493 = _5828;
L1F: // addr: 649 pc: 642 sub: 10364 op: 21
        if (_i_10493 < 1){
            goto L20; // [642] 1115
        }
        // SubProg canonical_path pc: 649 op: STARTLINE (58)

        /** filesys.e:1740				ifdef WINDOWS then*/
        // SubProg canonical_path pc: 651 op: STARTLINE (58)

        /** filesys.e:1743					sequence part = lPath[1..sl[i]-1]*/
        // SubProg canonical_path pc: 653 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_10472);
        _5830 = (object)*(((s1_ptr)_2)->base + _i_10493);
        // SubProg canonical_path pc: 657 op: MINUS (10)
        if (IS_ATOM_INT(_5830)) {
            _5831 = _5830 - 1;
        }
        else {
            _5831 = binary_op(MINUS, _5830, 1);
        }
        _5830 = NOVALUE;
        // SubProg canonical_path pc: 661 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_part_10497;
        RHS_Slice(_lPath_10369, 1, _5831);
        // SubProg canonical_path pc: 666 op: STARTLINE (58)

        /** filesys.e:1746				object list = dir( part & SLASH )*/
        // SubProg canonical_path pc: 668 op: PRIVATE_INIT_CHECK (30)
        // SubProg canonical_path pc: 670 op: CONCAT (15)
        Append(&_5833, _part_10497, 47);
        // SubProg canonical_path pc: 674 op: PROC (27)
        _0 = _list_10501;
        _list_10501 = _16dir(_5833);
        DeRef(_0);
        _5833 = NOVALUE;
        // SubProg canonical_path pc: 678 op: STARTLINE (58)

        /** filesys.e:1747				sequence supplied_name = lPath[sl[i]+1..sl[i+1]-1]*/
        // SubProg canonical_path pc: 680 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_10472);
        _5835 = (object)*(((s1_ptr)_2)->base + _i_10493);
        // SubProg canonical_path pc: 684 op: PLUS1 (93)
        if (IS_ATOM_INT(_5835)) {
            _5836 = _5835 + 1;
            if (_5836 > MAXINT){
                _5836 = NewDouble((eudouble)_5836);
            }
        }
        else
        _5836 = binary_op(PLUS, 1, _5835);
        _5835 = NOVALUE;
        // SubProg canonical_path pc: 688 op: PLUS1 (93)
        _5837 = _i_10493 + 1;
        // SubProg canonical_path pc: 692 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_10472);
        _5838 = (object)*(((s1_ptr)_2)->base + _5837);
        // SubProg canonical_path pc: 696 op: MINUS (10)
        if (IS_ATOM_INT(_5838)) {
            _5839 = _5838 - 1;
        }
        else {
            _5839 = binary_op(MINUS, _5838, 1);
        }
        _5838 = NOVALUE;
        // SubProg canonical_path pc: 700 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_supplied_name_10504;
        RHS_Slice(_lPath_10369, _5836, _5839);
        // SubProg canonical_path pc: 705 op: STARTLINE (58)

        /** filesys.e:1749				if atom(list) then*/
        // SubProg canonical_path pc: 707 op: IS_AN_ATOM (67)
        _5841 = IS_ATOM(_list_10501);
        // SubProg canonical_path pc: 710 op: IF (20)
        if (_5841 == 0)
        {
            _5841 = NOVALUE;
            goto L21; // [710] 748
        }
        else{
            _5841 = NOVALUE;
        }
        // SubProg canonical_path pc: 713 op: STARTLINE (58)

        /** filesys.e:1750					if lower_name then*/
        // SubProg canonical_path pc: 715 op: IF (20)
        if (_lower_name_10481 == 0)
        {
            goto L22; // [715] 741
        }
        else{
        }
        // SubProg canonical_path pc: 718 op: STARTLINE (58)

        /** filesys.e:1751						lPath = part & lower(lPath[sl[i]..$])*/
        // SubProg canonical_path pc: 720 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_10472);
        _5842 = (object)*(((s1_ptr)_2)->base + _i_10493);
        // SubProg canonical_path pc: 724 op: LENGTH (42)
        if (IS_SEQUENCE(_lPath_10369)){
                _5843 = SEQ_PTR(_lPath_10369)->length;
        }
        else {
            _5843 = 1;
        }
        // SubProg canonical_path pc: 727 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5844;
        RHS_Slice(_lPath_10369, _5842, _5843);
        // SubProg canonical_path pc: 732 op: PROC (27)
        _5845 = _20lower(_5844);
        _5844 = NOVALUE;
        // SubProg canonical_path pc: 736 op: CONCAT (15)
        if (IS_SEQUENCE(_part_10497) && IS_ATOM(_5845)) {
            Ref(_5845);
            Append(&_lPath_10369, _part_10497, _5845);
        }
        else if (IS_ATOM(_part_10497) && IS_SEQUENCE(_5845)) {
        }
        else {
            Concat((object_ptr)&_lPath_10369, _part_10497, _5845);
        }
        DeRef(_5845);
        _5845 = NOVALUE;
        // SubProg canonical_path pc: 740 op: NOP1 (159)
L22: // addr: 741 pc: 740 sub: 10364 op: 159
        // SubProg canonical_path pc: 741 op: STARTLINE (58)

        /** filesys.e:1753					continue*/
        // SubProg canonical_path pc: 743 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_10497
        DeRef(_part_10497);
        _part_10497 = NOVALUE;

// block var list_10501
        DeRef(_list_10501);
        _list_10501 = NOVALUE;

// block var supplied_name_10504
        DeRef(_supplied_name_10504);
        _supplied_name_10504 = NOVALUE;
        // SubProg canonical_path pc: 745 op: ELSE (23)
        goto L23; // [745] 1110
        // SubProg canonical_path pc: 747 op: NOP1 (159)
L21: // addr: 748 pc: 747 sub: 10364 op: 159
        // SubProg canonical_path pc: 748 op: STARTLINE (58)

        /** filesys.e:1757				for j = 1 to length(list) do*/
        // SubProg canonical_path pc: 750 op: LENGTH (42)
        if (IS_SEQUENCE(_list_10501)){
                _5847 = SEQ_PTR(_list_10501)->length;
        }
        else {
            _5847 = 1;
        }
        // SubProg canonical_path pc: 753 op: FOR_I (125)
        {
            object _j_10521;
            _j_10521 = 1;
L24: // addr: 760 pc: 753 sub: 10364 op: 125
            if (_j_10521 > _5847){
                goto L25; // [753] 878
            }
            // SubProg canonical_path pc: 760 op: STARTLINE (58)

            /** filesys.e:1758					sequence read_name = list[j][D_NAME]*/
            // SubProg canonical_path pc: 762 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_10501);
            _5848 = (object)*(((s1_ptr)_2)->base + _j_10521);
            // SubProg canonical_path pc: 766 op: RHS_SUBS_CHECK (92)
            DeRef(_read_name_10523);
            _2 = (object)SEQ_PTR(_5848);
            _read_name_10523 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_10523);
            _5848 = NOVALUE;
            // SubProg canonical_path pc: 770 op: SEQUENCE_CHECK (97)
            // SubProg canonical_path pc: 772 op: STARTLINE (58)

            /** filesys.e:1759					if equal(read_name, supplied_name) then*/
            // SubProg canonical_path pc: 774 op: EQUAL (153)
            if (_read_name_10523 == _supplied_name_10504)
            _5850 = 1;
            else if (IS_ATOM_INT(_read_name_10523) && IS_ATOM_INT(_supplied_name_10504))
            _5850 = 0;
            else
            _5850 = (compare(_read_name_10523, _supplied_name_10504) == 0);
            // SubProg canonical_path pc: 778 op: IF (20)
            if (_5850 == 0)
            {
                _5850 = NOVALUE;
                goto L26; // [778] 869
            }
            else{
                _5850 = NOVALUE;
            }
            // SubProg canonical_path pc: 781 op: STARTLINE (58)

            /** filesys.e:1760						if short_name and sequence(list[j][D_ALTNAME]) then*/
            // SubProg canonical_path pc: 783 op: SC1_AND_IF (146)
            if (_short_name_10475 == 0) {
                goto L27; // [783] 860
            }
            // SubProg canonical_path pc: 787 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_10501);
            _5852 = (object)*(((s1_ptr)_2)->base + _j_10521);
            // SubProg canonical_path pc: 791 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_5852);
            _5853 = (object)*(((s1_ptr)_2)->base + 11);
            _5852 = NOVALUE;
            // SubProg canonical_path pc: 795 op: IS_A_SEQUENCE (68)
            _5854 = IS_SEQUENCE(_5853);
            _5853 = NOVALUE;
            // SubProg canonical_path pc: 798 op: NOP1 (159)
            // SubProg canonical_path pc: 799 op: IF (20)
            if (_5854 == 0)
            {
                _5854 = NOVALUE;
                goto L27; // [799] 860
            }
            else{
                _5854 = NOVALUE;
            }
            // SubProg canonical_path pc: 802 op: STARTLINE (58)

            /** filesys.e:1761							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 804 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_10472);
            _5855 = (object)*(((s1_ptr)_2)->base + _i_10493);
            // SubProg canonical_path pc: 808 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_5856;
            RHS_Slice(_lPath_10369, 1, _5855);
            // SubProg canonical_path pc: 813 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_10501);
            _5857 = (object)*(((s1_ptr)_2)->base + _j_10521);
            // SubProg canonical_path pc: 817 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_5857);
            _5858 = (object)*(((s1_ptr)_2)->base + 11);
            _5857 = NOVALUE;
            // SubProg canonical_path pc: 821 op: PLUS1 (93)
            _5859 = _i_10493 + 1;
            // SubProg canonical_path pc: 825 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_10472);
            _5860 = (object)*(((s1_ptr)_2)->base + _5859);
            // SubProg canonical_path pc: 829 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_10369)){
                    _5861 = SEQ_PTR(_lPath_10369)->length;
            }
            else {
                _5861 = 1;
            }
            // SubProg canonical_path pc: 832 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_5862;
            RHS_Slice(_lPath_10369, _5860, _5861);
            // SubProg canonical_path pc: 837 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _5862;
                concat_list[1] = _5858;
                concat_list[2] = _5856;
                Concat_N((object_ptr)&_lPath_10369, concat_list, 3);
            }
            DeRefDS(_5862);
            _5862 = NOVALUE;
            _5858 = NOVALUE;
            DeRefDS(_5856);
            _5856 = NOVALUE;
            // SubProg canonical_path pc: 843 op: STARTLINE (58)

            /** filesys.e:1762							sl[$] = length(lPath)+1*/
            // SubProg canonical_path pc: 845 op: LENGTH (42)
            if (IS_SEQUENCE(_sl_10472)){
                    _5864 = SEQ_PTR(_sl_10472)->length;
            }
            else {
                _5864 = 1;
            }
            // SubProg canonical_path pc: 848 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_10369)){
                    _5865 = SEQ_PTR(_lPath_10369)->length;
            }
            else {
                _5865 = 1;
            }
            // SubProg canonical_path pc: 851 op: PLUS1 (93)
            _5866 = _5865 + 1;
            _5865 = NOVALUE;
            // SubProg canonical_path pc: 855 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_sl_10472);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_10472 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _5864);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5866;
            if( _1 != _5866 ){
                DeRef(_1);
            }
            _5866 = NOVALUE;
            // SubProg canonical_path pc: 859 op: NOP1 (159)
L27: // addr: 860 pc: 859 sub: 10364 op: 159
            // SubProg canonical_path pc: 860 op: STARTLINE (58)

            /** filesys.e:1764						continue "partloop"*/
            // SubProg canonical_path pc: 862 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_10523
            DeRef(_read_name_10523);
            _read_name_10523 = NOVALUE;
            // SubProg canonical_path pc: 864 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_10497
            DeRef(_part_10497);
            _part_10497 = NOVALUE;

// block var list_10501
            DeRef(_list_10501);
            _list_10501 = NOVALUE;

// block var supplied_name_10504
            DeRef(_supplied_name_10504);
            _supplied_name_10504 = NOVALUE;
            // SubProg canonical_path pc: 866 op: ELSE (23)
            goto L23; // [866] 1110
            // SubProg canonical_path pc: 868 op: NOP1 (159)
L26: // addr: 869 pc: 868 sub: 10364 op: 159
            // SubProg canonical_path pc: 869 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_10523
            DeRef(_read_name_10523);
            _read_name_10523 = NOVALUE;
            // SubProg canonical_path pc: 871 op: STARTLINE (58)

            /** filesys.e:1766				end for*/
            // SubProg canonical_path pc: 873 op: ENDFOR_INT_UP1 (54)
            _j_10521 = _j_10521 + 1;
            goto L24; // [873] 760
L25: // addr: 878 pc: 873 sub: 10364 op: 54
            ;
        }
        // SubProg canonical_path pc: 878 op: STARTLINE (58)

        /** filesys.e:1770				for j = 1 to length(list) do*/
        // SubProg canonical_path pc: 880 op: LENGTH (42)
        if (IS_SEQUENCE(_list_10501)){
                _5867 = SEQ_PTR(_list_10501)->length;
        }
        else {
            _5867 = 1;
        }
        // SubProg canonical_path pc: 883 op: FOR_I (125)
        {
            object _j_10546;
            _j_10546 = 1;
L28: // addr: 890 pc: 883 sub: 10364 op: 125
            if (_j_10546 > _5867){
                goto L29; // [883] 1055
            }
            // SubProg canonical_path pc: 890 op: STARTLINE (58)

            /** filesys.e:1771					sequence read_name = list[j][D_NAME]*/
            // SubProg canonical_path pc: 892 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_10501);
            _5868 = (object)*(((s1_ptr)_2)->base + _j_10546);
            // SubProg canonical_path pc: 896 op: RHS_SUBS_CHECK (92)
            DeRef(_read_name_10548);
            _2 = (object)SEQ_PTR(_5868);
            _read_name_10548 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_read_name_10548);
            _5868 = NOVALUE;
            // SubProg canonical_path pc: 900 op: SEQUENCE_CHECK (97)
            // SubProg canonical_path pc: 902 op: STARTLINE (58)

            /** filesys.e:1772					if equal(lower(read_name), lower(supplied_name)) then*/
            // SubProg canonical_path pc: 904 op: PROC (27)
            RefDS(_read_name_10548);
            _5870 = _20lower(_read_name_10548);
            // SubProg canonical_path pc: 908 op: PROC (27)
            RefDS(_supplied_name_10504);
            _5871 = _20lower(_supplied_name_10504);
            // SubProg canonical_path pc: 912 op: EQUAL (153)
            if (_5870 == _5871)
            _5872 = 1;
            else if (IS_ATOM_INT(_5870) && IS_ATOM_INT(_5871))
            _5872 = 0;
            else
            _5872 = (compare(_5870, _5871) == 0);
            DeRef(_5870);
            _5870 = NOVALUE;
            DeRef(_5871);
            _5871 = NOVALUE;
            // SubProg canonical_path pc: 916 op: IF (20)
            if (_5872 == 0)
            {
                _5872 = NOVALUE;
                goto L2A; // [916] 1046
            }
            else{
                _5872 = NOVALUE;
            }
            // SubProg canonical_path pc: 919 op: STARTLINE (58)

            /** filesys.e:1773						if short_name and sequence(list[j][D_ALTNAME]) then*/
            // SubProg canonical_path pc: 921 op: SC1_AND_IF (146)
            if (_short_name_10475 == 0) {
                goto L2B; // [921] 998
            }
            // SubProg canonical_path pc: 925 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_10501);
            _5874 = (object)*(((s1_ptr)_2)->base + _j_10546);
            // SubProg canonical_path pc: 929 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_5874);
            _5875 = (object)*(((s1_ptr)_2)->base + 11);
            _5874 = NOVALUE;
            // SubProg canonical_path pc: 933 op: IS_A_SEQUENCE (68)
            _5876 = IS_SEQUENCE(_5875);
            _5875 = NOVALUE;
            // SubProg canonical_path pc: 936 op: NOP1 (159)
            // SubProg canonical_path pc: 937 op: IF (20)
            if (_5876 == 0)
            {
                _5876 = NOVALUE;
                goto L2B; // [937] 998
            }
            else{
                _5876 = NOVALUE;
            }
            // SubProg canonical_path pc: 940 op: STARTLINE (58)

            /** filesys.e:1774							lPath = lPath[1..sl[i]] & list[j][D_ALTNAME] & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 942 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_10472);
            _5877 = (object)*(((s1_ptr)_2)->base + _i_10493);
            // SubProg canonical_path pc: 946 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_5878;
            RHS_Slice(_lPath_10369, 1, _5877);
            // SubProg canonical_path pc: 951 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_list_10501);
            _5879 = (object)*(((s1_ptr)_2)->base + _j_10546);
            // SubProg canonical_path pc: 955 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_5879);
            _5880 = (object)*(((s1_ptr)_2)->base + 11);
            _5879 = NOVALUE;
            // SubProg canonical_path pc: 959 op: PLUS1 (93)
            _5881 = _i_10493 + 1;
            // SubProg canonical_path pc: 963 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_10472);
            _5882 = (object)*(((s1_ptr)_2)->base + _5881);
            // SubProg canonical_path pc: 967 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_10369)){
                    _5883 = SEQ_PTR(_lPath_10369)->length;
            }
            else {
                _5883 = 1;
            }
            // SubProg canonical_path pc: 970 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_5884;
            RHS_Slice(_lPath_10369, _5882, _5883);
            // SubProg canonical_path pc: 975 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _5884;
                concat_list[1] = _5880;
                concat_list[2] = _5878;
                Concat_N((object_ptr)&_lPath_10369, concat_list, 3);
            }
            DeRefDS(_5884);
            _5884 = NOVALUE;
            _5880 = NOVALUE;
            DeRefDS(_5878);
            _5878 = NOVALUE;
            // SubProg canonical_path pc: 981 op: STARTLINE (58)

            /** filesys.e:1775							sl[$] = length(lPath)+1*/
            // SubProg canonical_path pc: 983 op: LENGTH (42)
            if (IS_SEQUENCE(_sl_10472)){
                    _5886 = SEQ_PTR(_sl_10472)->length;
            }
            else {
                _5886 = 1;
            }
            // SubProg canonical_path pc: 986 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_10369)){
                    _5887 = SEQ_PTR(_lPath_10369)->length;
            }
            else {
                _5887 = 1;
            }
            // SubProg canonical_path pc: 989 op: PLUS1 (93)
            _5888 = _5887 + 1;
            _5887 = NOVALUE;
            // SubProg canonical_path pc: 993 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_sl_10472);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _sl_10472 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _5886);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5888;
            if( _1 != _5888 ){
                DeRef(_1);
            }
            _5888 = NOVALUE;
            // SubProg canonical_path pc: 997 op: NOP1 (159)
L2B: // addr: 998 pc: 997 sub: 10364 op: 159
            // SubProg canonical_path pc: 998 op: STARTLINE (58)

            /** filesys.e:1777						if correct_name then*/
            // SubProg canonical_path pc: 1000 op: IF (20)
            if (_correct_name_10478 == 0)
            {
                goto L2C; // [1000] 1037
            }
            else{
            }
            // SubProg canonical_path pc: 1003 op: STARTLINE (58)

            /** filesys.e:1778							lPath = lPath[1..sl[i]] & read_name & lPath[sl[i+1]..$]*/
            // SubProg canonical_path pc: 1005 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_10472);
            _5889 = (object)*(((s1_ptr)_2)->base + _i_10493);
            // SubProg canonical_path pc: 1009 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_5890;
            RHS_Slice(_lPath_10369, 1, _5889);
            // SubProg canonical_path pc: 1014 op: PLUS1 (93)
            _5891 = _i_10493 + 1;
            // SubProg canonical_path pc: 1018 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_sl_10472);
            _5892 = (object)*(((s1_ptr)_2)->base + _5891);
            // SubProg canonical_path pc: 1022 op: LENGTH (42)
            if (IS_SEQUENCE(_lPath_10369)){
                    _5893 = SEQ_PTR(_lPath_10369)->length;
            }
            else {
                _5893 = 1;
            }
            // SubProg canonical_path pc: 1025 op: RHS_SLICE (46)
            rhs_slice_target = (object_ptr)&_5894;
            RHS_Slice(_lPath_10369, _5892, _5893);
            // SubProg canonical_path pc: 1030 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _5894;
                concat_list[1] = _read_name_10548;
                concat_list[2] = _5890;
                Concat_N((object_ptr)&_lPath_10369, concat_list, 3);
            }
            DeRefDS(_5894);
            _5894 = NOVALUE;
            DeRefDS(_5890);
            _5890 = NOVALUE;
            // SubProg canonical_path pc: 1036 op: NOP1 (159)
L2C: // addr: 1037 pc: 1036 sub: 10364 op: 159
            // SubProg canonical_path pc: 1037 op: STARTLINE (58)

            /** filesys.e:1780						continue "partloop"*/
            // SubProg canonical_path pc: 1039 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_10548
            DeRef(_read_name_10548);
            _read_name_10548 = NOVALUE;
            // SubProg canonical_path pc: 1041 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_10497
            DeRef(_part_10497);
            _part_10497 = NOVALUE;

// block var list_10501
            DeRef(_list_10501);
            _list_10501 = NOVALUE;

// block var supplied_name_10504
            DeRef(_supplied_name_10504);
            _supplied_name_10504 = NOVALUE;
            // SubProg canonical_path pc: 1043 op: ELSE (23)
            goto L23; // [1043] 1110
            // SubProg canonical_path pc: 1045 op: NOP1 (159)
L2A: // addr: 1046 pc: 1045 sub: 10364 op: 159
            // SubProg canonical_path pc: 1046 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var read_name_10548
            DeRef(_read_name_10548);
            _read_name_10548 = NOVALUE;
            // SubProg canonical_path pc: 1048 op: STARTLINE (58)

            /** filesys.e:1782				end for*/
            // SubProg canonical_path pc: 1050 op: ENDFOR_INT_UP1 (54)
            _j_10546 = _j_10546 + 1;
            goto L28; // [1050] 890
L29: // addr: 1055 pc: 1050 sub: 10364 op: 54
            ;
        }
        // SubProg canonical_path pc: 1055 op: STARTLINE (58)

        /** filesys.e:1786				if and_bits(TO_LOWER,case_flags) then*/
        // SubProg canonical_path pc: 1057 op: AND_BITS (56)
        {uintptr_t tu;
             tu = (uintptr_t)1 & (uintptr_t)_case_flags_10368;
             _5896 = MAKE_UINT(tu);
        }
        // SubProg canonical_path pc: 1061 op: IF (20)
        if (_5896 == 0) {
            DeRef(_5896);
            _5896 = NOVALUE;
            goto L2D; // [1061] 1100
        }
        else {
            if (!IS_ATOM_INT(_5896) && DBL_PTR(_5896)->dbl == 0.0){
                DeRef(_5896);
                _5896 = NOVALUE;
                goto L2D; // [1061] 1100
            }
            DeRef(_5896);
            _5896 = NOVALUE;
        }
        DeRef(_5896);
        _5896 = NOVALUE;
        // SubProg canonical_path pc: 1064 op: STARTLINE (58)

        /** filesys.e:1787					lPath = lPath[1..sl[i]-1] & lower(lPath[sl[i]..$])*/
        // SubProg canonical_path pc: 1066 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_10472);
        _5897 = (object)*(((s1_ptr)_2)->base + _i_10493);
        // SubProg canonical_path pc: 1070 op: MINUS (10)
        if (IS_ATOM_INT(_5897)) {
            _5898 = _5897 - 1;
        }
        else {
            _5898 = binary_op(MINUS, _5897, 1);
        }
        _5897 = NOVALUE;
        // SubProg canonical_path pc: 1074 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5899;
        RHS_Slice(_lPath_10369, 1, _5898);
        // SubProg canonical_path pc: 1079 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sl_10472);
        _5900 = (object)*(((s1_ptr)_2)->base + _i_10493);
        // SubProg canonical_path pc: 1083 op: LENGTH (42)
        if (IS_SEQUENCE(_lPath_10369)){
                _5901 = SEQ_PTR(_lPath_10369)->length;
        }
        else {
            _5901 = 1;
        }
        // SubProg canonical_path pc: 1086 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5902;
        RHS_Slice(_lPath_10369, _5900, _5901);
        // SubProg canonical_path pc: 1091 op: PROC (27)
        _5903 = _20lower(_5902);
        _5902 = NOVALUE;
        // SubProg canonical_path pc: 1095 op: CONCAT (15)
        if (IS_SEQUENCE(_5899) && IS_ATOM(_5903)) {
            Ref(_5903);
            Append(&_lPath_10369, _5899, _5903);
        }
        else if (IS_ATOM(_5899) && IS_SEQUENCE(_5903)) {
        }
        else {
            Concat((object_ptr)&_lPath_10369, _5899, _5903);
            DeRefDS(_5899);
            _5899 = NOVALUE;
        }
        DeRef(_5899);
        _5899 = NOVALUE;
        DeRef(_5903);
        _5903 = NOVALUE;
        // SubProg canonical_path pc: 1099 op: NOP1 (159)
L2D: // addr: 1100 pc: 1099 sub: 10364 op: 159
        // SubProg canonical_path pc: 1100 op: STARTLINE (58)

        /** filesys.e:1789				exit*/
        // SubProg canonical_path pc: 1102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_10497
        DeRef(_part_10497);
        _part_10497 = NOVALUE;

// block var list_10501
        DeRef(_list_10501);
        _list_10501 = NOVALUE;

// block var supplied_name_10504
        DeRef(_supplied_name_10504);
        _supplied_name_10504 = NOVALUE;
        // SubProg canonical_path pc: 1104 op: EXIT (61)
        goto L20; // [1104] 1115
        // SubProg canonical_path pc: 1106 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-partloop

// block var part_10497

// block var list_10501

// block var supplied_name_10504
        // SubProg canonical_path pc: 1108 op: STARTLINE (58)

        /** filesys.e:1790			end for*/
        // SubProg canonical_path pc: 1110 op: ENDFOR_GENERAL (39)
L23: // addr: 1110 pc: 1110 sub: 10364 op: 39
        _i_10493 = _i_10493 + -1;
        goto L1F; // [1110] 649
L20: // addr: 1115 pc: 1110 sub: 10364 op: 39
        ;
    }
    // SubProg canonical_path pc: 1115 op: STARTLINE (58)

    /** filesys.e:1791			if and_bits(case_flags,or_bits(CORRECT,TO_LOWER))=TO_LOWER and length(lPath) then*/
    // SubProg canonical_path pc: 1117 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)2 | (uintptr_t)1;
         _5905 = MAKE_UINT(tu);
    }
    // SubProg canonical_path pc: 1121 op: AND_BITS (56)
    if (IS_ATOM_INT(_5905)) {
        {uintptr_t tu;
             tu = (uintptr_t)_case_flags_10368 & (uintptr_t)_5905;
             _5906 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_case_flags_10368;
        _5906 = Dand_bits(&temp_d, DBL_PTR(_5905));
    }
    DeRef(_5905);
    _5905 = NOVALUE;
    // SubProg canonical_path pc: 1125 op: EQUALS (3)
    if (IS_ATOM_INT(_5906)) {
        _5907 = (_5906 == 1);
    }
    else {
        _5907 = (DBL_PTR(_5906)->dbl == (eudouble)1);
    }
    DeRef(_5906);
    _5906 = NOVALUE;
    // SubProg canonical_path pc: 1129 op: SC1_AND_IF (146)
    if (_5907 == 0) {
        goto L2E; // [1129] 1149
    }
    // SubProg canonical_path pc: 1133 op: LENGTH (42)
    if (IS_SEQUENCE(_lPath_10369)){
            _5909 = SEQ_PTR(_lPath_10369)->length;
    }
    else {
        _5909 = 1;
    }
    // SubProg canonical_path pc: 1136 op: NOP1 (159)
    // SubProg canonical_path pc: 1137 op: IF (20)
    if (_5909 == 0)
    {
        _5909 = NOVALUE;
        goto L2E; // [1137] 1149
    }
    else{
        _5909 = NOVALUE;
    }
    // SubProg canonical_path pc: 1140 op: STARTLINE (58)

    /** filesys.e:1792				lPath = lower(lPath)*/
    // SubProg canonical_path pc: 1142 op: PROC (27)
    RefDS(_lPath_10369);
    _0 = _lPath_10369;
    _lPath_10369 = _20lower(_lPath_10369);
    DeRefDS(_0);
    // SubProg canonical_path pc: 1146 op: SEQUENCE_CHECK (97)
    // SubProg canonical_path pc: 1148 op: NOP1 (159)
L2E: // addr: 1149 pc: 1148 sub: 10364 op: 159
    // SubProg canonical_path pc: 1149 op: NOP1 (159)
L1D: // addr: 1150 pc: 1149 sub: 10364 op: 159
    // SubProg canonical_path pc: 1150 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sl_10472
    DeRef(_sl_10472);
    _sl_10472 = NOVALUE;

// block var short_name_10475

// block var correct_name_10478

// block var lower_name_10481
    // SubProg canonical_path pc: 1152 op: NOP1 (159)
L1C: // addr: 1153 pc: 1152 sub: 10364 op: 159
    // SubProg canonical_path pc: 1153 op: STARTLINE (58)

    /** filesys.e:1796		ifdef WINDOWS then*/
    // SubProg canonical_path pc: 1155 op: STARTLINE (58)

    /** filesys.e:1810		return lPath & wildcard_suffix*/
    // SubProg canonical_path pc: 1157 op: PRIVATE_INIT_CHECK (30)
    // SubProg canonical_path pc: 1159 op: CONCAT (15)
    Concat((object_ptr)&_5911, _lPath_10369, _wildcard_suffix_10415);
    // SubProg canonical_path pc: 1163 op: RETURNF (28)

// Exiting block BLOCK: canonical_path

// block var path_in_10366
    DeRefDS(_path_in_10366);

// block var directory_given_10367

// block var case_flags_10368

// block var lPath_10369
    DeRefDS(_lPath_10369);

// block var lPosA_10370

// block var lPosB_10371

// block var lLevel_10372
    DeRefi(_lLevel_10372);

// block var lHome_10373
    DeRefi(_lHome_10373);

// block var wildcard_suffix_10415
    DeRefDS(_wildcard_suffix_10415);

// block var first_wildcard_at_10416
    DeRef(_5752);
    _5752 = NOVALUE;
    DeRef(_5898);
    _5898 = NOVALUE;
    DeRef(_5839);
    _5839 = NOVALUE;
    _5758 = NOVALUE;
    _5877 = NOVALUE;
    DeRef(_5762);
    _5762 = NOVALUE;
    DeRef(_5744);
    _5744 = NOVALUE;
    DeRef(_5784);
    _5784 = NOVALUE;
    DeRef(_5791);
    _5791 = NOVALUE;
    DeRef(_5836);
    _5836 = NOVALUE;
    DeRef(_5891);
    _5891 = NOVALUE;
    _5900 = NOVALUE;
    DeRef(_5907);
    _5907 = NOVALUE;
    _5842 = NOVALUE;
    DeRef(_5831);
    _5831 = NOVALUE;
    _5892 = NOVALUE;
    _5855 = NOVALUE;
    DeRef(_5737);
    _5737 = NOVALUE;
    DeRef(_5746);
    _5746 = NOVALUE;
    DeRef(_5749);
    _5749 = NOVALUE;
    DeRef(_5837);
    _5837 = NOVALUE;
    DeRef(_5881);
    _5881 = NOVALUE;
    _5860 = NOVALUE;
    DeRef(_5779);
    _5779 = NOVALUE;
    DeRef(_5801);
    _5801 = NOVALUE;
    _5889 = NOVALUE;
    DeRef(_5859);
    _5859 = NOVALUE;
    DeRef(_5740);
    _5740 = NOVALUE;
    DeRef(_5804);
    _5804 = NOVALUE;
    DeRef(_5828);
    _5828 = NOVALUE;
    _5882 = NOVALUE;
    DeRef(_5787);
    _5787 = NOVALUE;
    return _5911;
    // SubProg canonical_path pc: 1167 op: BADRETURNF (43)
    ;
}


object _16abbreviate_path(object _orig_path_10607, object _base_paths_10608)
{
    object _expanded_path_10609 = NOVALUE;
    object _fs_case_inlined_fs_case_at_61_10619 = NOVALUE;
    object _lowered_expanded_path_10620 = NOVALUE;
    object _fs_case_inlined_fs_case_at_73_10622 = NOVALUE;
    object _fs_case_inlined_fs_case_at_216_10649 = NOVALUE;
    object _s_inlined_fs_case_at_213_10648 = NOVALUE;
// skipping _5948  name type: 0
    object _5947 = NOVALUE; // 10662 5947
    object _5946 = NOVALUE; // 10661 5946
// skipping _5945  name type: 0
// skipping _5944  name type: 0
    object _5943 = NOVALUE; // 10657 5943
    object _5942 = NOVALUE; // 10656 5942
    object _5941 = NOVALUE; // 10655 5941
    object _5940 = NOVALUE; // 10654 5940
    object _5939 = NOVALUE; // 10653 5939
// skipping _5938  name type: 0
    object _5937 = NOVALUE; // 10651 5937
    object _5936 = NOVALUE; // 10650 5936
    object _5935 = NOVALUE; // 10646 5935
    object _5934 = NOVALUE; // 10644 5934
    object _5933 = NOVALUE; // 10643 5933
    object _5932 = NOVALUE; // 10642 5932
    object _5931 = NOVALUE; // 10641 5931
    object _5930 = NOVALUE; // 10640 5930
// skipping _5929  name type: 0
// skipping _5928  name type: 0
    object _5927 = NOVALUE; // 10635 5927
    object _5926 = NOVALUE; // 10634 5926
    object _5925 = NOVALUE; // 10633 5925
    object _5924 = NOVALUE; // 10632 5924
    object _5923 = NOVALUE; // 10631 5923
    object _5922 = NOVALUE; // 10630 5922
    object _5921 = NOVALUE; // 10629 5921
    object _5920 = NOVALUE; // 10628 5920
    object _5919 = NOVALUE; // 10627 5919
    object _5918 = NOVALUE; // 10625 5918
    object _5917 = NOVALUE; // 10617 5917
    object _5916 = NOVALUE; // 10616 5916
    object _5915 = NOVALUE; // 10615 5915
// skipping _5914  name type: 0
    object _5913 = NOVALUE; // 10611 5913
// skipping _5912  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg abbreviate_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 5 op: STARTLINE (58)

    /** filesys.e:1881		expanded_path = canonical_path(orig_path)*/
    // SubProg abbreviate_path pc: 7 op: PROC (27)
    RefDS(_orig_path_10607);
    _0 = _expanded_path_10609;
    _expanded_path_10609 = _16canonical_path(_orig_path_10607, 0, 0);
    DeRef(_0);
    // SubProg abbreviate_path pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 15 op: STARTLINE (58)

    /** filesys.e:1884		base_paths = append(base_paths, curdir())*/
    // SubProg abbreviate_path pc: 17 op: PROC (27)
    _5913 = _16curdir(0);
    // SubProg abbreviate_path pc: 21 op: APPEND (35)
    Ref(_5913);
    Append(&_base_paths_10608, _base_paths_10608, _5913);
    DeRef(_5913);
    _5913 = NOVALUE;
    // SubProg abbreviate_path pc: 25 op: STARTLINE (58)

    /** filesys.e:1886		for i = 1 to length(base_paths) do*/
    // SubProg abbreviate_path pc: 27 op: LENGTH (42)
    // Known sequence length:
    _5915 = 1;
    // SubProg abbreviate_path pc: 30 op: FOR_I (125)
    {
        object _i_10614;
        _i_10614 = 1;
L1: // addr: 37 pc: 30 sub: 10605 op: 125
        if (_i_10614 > 1){
            goto L2; // [30] 60
        }
        // SubProg abbreviate_path pc: 37 op: STARTLINE (58)

        /** filesys.e:1887			base_paths[i] = canonical_path(base_paths[i], 1) -- assume each base path is meant to be a directory.*/
        // SubProg abbreviate_path pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_10608);
        _5916 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg abbreviate_path pc: 43 op: PROC (27)
        Ref(_5916);
        _5917 = _16canonical_path(_5916, 1, 0);
        _5916 = NOVALUE;
        // SubProg abbreviate_path pc: 49 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_base_paths_10608);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _base_paths_10608 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5917;
        if( _1 != _5917 ){
            DeRef(_1);
        }
        _5917 = NOVALUE;
        // SubProg abbreviate_path pc: 53 op: STARTLINE (58)

        /** filesys.e:1888		end for*/
        // SubProg abbreviate_path pc: 55 op: ENDFOR_INT_UP1 (54)
        _i_10614 = 1 + 1;
        goto L1; // [55] 37
L2: // addr: 60 pc: 55 sub: 10605 op: 54
        ;
    }
    // SubProg abbreviate_path pc: 60 op: STARTLINE (58)

    /** filesys.e:1892		base_paths = fs_case(base_paths)*/
    // SubProg abbreviate_path pc: 62 op: STARTLINE (58)

    /** filesys.e:1825		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 64 op: STARTLINE (58)

    /** filesys.e:1828			return s*/
    // SubProg abbreviate_path pc: 66 op: ASSIGN (18)
    RefDS(_base_paths_10608);
    DeRefDS(_base_paths_10608);
    _base_paths_10608 = _base_paths_10608;
    // SubProg abbreviate_path pc: 69 op: NOP1 (159)
    // SubProg abbreviate_path pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 72 op: STARTLINE (58)

    /** filesys.e:1893		sequence lowered_expanded_path = fs_case(expanded_path)*/
    // SubProg abbreviate_path pc: 74 op: STARTLINE (58)

    /** filesys.e:1825		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 76 op: STARTLINE (58)

    /** filesys.e:1828			return s*/
    // SubProg abbreviate_path pc: 78 op: ASSIGN (18)
    RefDS(_expanded_path_10609);
    DeRef(_lowered_expanded_path_10620);
    _lowered_expanded_path_10620 = _expanded_path_10609;
    // SubProg abbreviate_path pc: 81 op: NOP1 (159)
    // SubProg abbreviate_path pc: 82 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 84 op: STARTLINE (58)

    /** filesys.e:1896		for i = 1 to length(base_paths) do*/
    // SubProg abbreviate_path pc: 86 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_10608)){
            _5918 = SEQ_PTR(_base_paths_10608)->length;
    }
    else {
        _5918 = 1;
    }
    // SubProg abbreviate_path pc: 89 op: FOR_I (125)
    {
        object _i_10624;
        _i_10624 = 1;
L3: // addr: 96 pc: 89 sub: 10605 op: 125
        if (_i_10624 > _5918){
            goto L4; // [89] 143
        }
        // SubProg abbreviate_path pc: 96 op: STARTLINE (58)

        /** filesys.e:1897			if search:begins(base_paths[i], lowered_expanded_path) then*/
        // SubProg abbreviate_path pc: 98 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_10608);
        _5919 = (object)*(((s1_ptr)_2)->base + _i_10624);
        // SubProg abbreviate_path pc: 102 op: PROC (27)
        Ref(_5919);
        RefDS(_lowered_expanded_path_10620);
        _5920 = _22begins(_5919, _lowered_expanded_path_10620);
        _5919 = NOVALUE;
        // SubProg abbreviate_path pc: 107 op: IF (20)
        if (_5920 == 0) {
            DeRef(_5920);
            _5920 = NOVALUE;
            goto L5; // [107] 136
        }
        else {
            if (!IS_ATOM_INT(_5920) && DBL_PTR(_5920)->dbl == 0.0){
                DeRef(_5920);
                _5920 = NOVALUE;
                goto L5; // [107] 136
            }
            DeRef(_5920);
            _5920 = NOVALUE;
        }
        DeRef(_5920);
        _5920 = NOVALUE;
        // SubProg abbreviate_path pc: 110 op: STARTLINE (58)

        /** filesys.e:1899				return expanded_path[length(base_paths[i]) + 1 .. $]*/
        // SubProg abbreviate_path pc: 112 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_10608);
        _5921 = (object)*(((s1_ptr)_2)->base + _i_10624);
        // SubProg abbreviate_path pc: 116 op: LENGTH (42)
        if (IS_SEQUENCE(_5921)){
                _5922 = SEQ_PTR(_5921)->length;
        }
        else {
            _5922 = 1;
        }
        _5921 = NOVALUE;
        // SubProg abbreviate_path pc: 119 op: PLUS1 (93)
        _5923 = _5922 + 1;
        _5922 = NOVALUE;
        // SubProg abbreviate_path pc: 123 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_10609)){
                _5924 = SEQ_PTR(_expanded_path_10609)->length;
        }
        else {
            _5924 = 1;
        }
        // SubProg abbreviate_path pc: 126 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5925;
        RHS_Slice(_expanded_path_10609, _5923, _5924);
        // SubProg abbreviate_path pc: 131 op: RETURNF (28)

// Exiting block BLOCK: abbreviate_path

// block var orig_path_10607
        DeRefDS(_orig_path_10607);

// block var base_paths_10608
        DeRefDS(_base_paths_10608);

// block var expanded_path_10609
        DeRefDS(_expanded_path_10609);

// block var lowered_expanded_path_10620
        DeRefDS(_lowered_expanded_path_10620);
        _5921 = NOVALUE;
        _5923 = NOVALUE;
        return _5925;
        // SubProg abbreviate_path pc: 135 op: NOP1 (159)
L5: // addr: 136 pc: 135 sub: 10605 op: 159
        // SubProg abbreviate_path pc: 136 op: STARTLINE (58)

        /** filesys.e:1901		end for*/
        // SubProg abbreviate_path pc: 138 op: ENDFOR_INT_UP1 (54)
        _i_10624 = _i_10624 + 1;
        goto L3; // [138] 96
L4: // addr: 143 pc: 138 sub: 10605 op: 54
        ;
    }
    // SubProg abbreviate_path pc: 143 op: STARTLINE (58)

    /** filesys.e:1904		ifdef WINDOWS then*/
    // SubProg abbreviate_path pc: 145 op: STARTLINE (58)

    /** filesys.e:1912		base_paths = stdseq:split(base_paths[$], SLASH)*/
    // SubProg abbreviate_path pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_10608)){
            _5926 = SEQ_PTR(_base_paths_10608)->length;
    }
    else {
        _5926 = 1;
    }
    // SubProg abbreviate_path pc: 150 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_base_paths_10608);
    _5927 = (object)*(((s1_ptr)_2)->base + _5926);
    // SubProg abbreviate_path pc: 154 op: PROC (27)
    Ref(_5927);
    _0 = _base_paths_10608;
    _base_paths_10608 = _24split(_5927, 47, 0, 0);
    DeRefDS(_0);
    _5927 = NOVALUE;
    // SubProg abbreviate_path pc: 161 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 163 op: STARTLINE (58)

    /** filesys.e:1914		expanded_path = stdseq:split(expanded_path, SLASH)*/
    // SubProg abbreviate_path pc: 165 op: PROC (27)
    RefDS(_expanded_path_10609);
    _0 = _expanded_path_10609;
    _expanded_path_10609 = _24split(_expanded_path_10609, 47, 0, 0);
    DeRefDS(_0);
    // SubProg abbreviate_path pc: 172 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 174 op: STARTLINE (58)

    /** filesys.e:1915		lowered_expanded_path = ""*/
    // SubProg abbreviate_path pc: 176 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lowered_expanded_path_10620);
    _lowered_expanded_path_10620 = _5;
    // SubProg abbreviate_path pc: 179 op: SEQUENCE_CHECK (97)
    // SubProg abbreviate_path pc: 181 op: STARTLINE (58)

    /** filesys.e:1918		for i = 1 to math:min({length(expanded_path), length(base_paths) - 1}) do*/
    // SubProg abbreviate_path pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_expanded_path_10609)){
            _5930 = SEQ_PTR(_expanded_path_10609)->length;
    }
    else {
        _5930 = 1;
    }
    // SubProg abbreviate_path pc: 186 op: LENGTH (42)
    if (IS_SEQUENCE(_base_paths_10608)){
            _5931 = SEQ_PTR(_base_paths_10608)->length;
    }
    else {
        _5931 = 1;
    }
    // SubProg abbreviate_path pc: 189 op: MINUS (10)
    _5932 = _5931 - 1;
    _5931 = NOVALUE;
    // SubProg abbreviate_path pc: 193 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5930;
    ((intptr_t *)_2)[2] = _5932;
    _5933 = MAKE_SEQ(_1);
    _5932 = NOVALUE;
    _5930 = NOVALUE;
    // SubProg abbreviate_path pc: 197 op: PROC (27)
    _5934 = _13min(_5933);
    _5933 = NOVALUE;
    // SubProg abbreviate_path pc: 201 op: FOR (21)
    {
        object _i_10639;
        _i_10639 = 1;
L6: // addr: 208 pc: 201 sub: 10605 op: 21
        if (binary_op_a(GREATER, _i_10639, _5934)){
            goto L7; // [201] 305
        }
        // SubProg abbreviate_path pc: 208 op: STARTLINE (58)

        /** filesys.e:1919			if not equal(fs_case(expanded_path[i]), base_paths[i]) then*/
        // SubProg abbreviate_path pc: 210 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_expanded_path_10609);
        if (!IS_ATOM_INT(_i_10639)){
            _5935 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_10639)->dbl));
        }
        else{
            _5935 = (object)*(((s1_ptr)_2)->base + _i_10639);
        }
        // SubProg abbreviate_path pc: 214 op: ASSIGN (18)
        Ref(_5935);
        DeRef(_s_inlined_fs_case_at_213_10648);
        _s_inlined_fs_case_at_213_10648 = _5935;
        _5935 = NOVALUE;
        // SubProg abbreviate_path pc: 217 op: SEQUENCE_CHECK (97)
        // SubProg abbreviate_path pc: 219 op: STARTLINE (58)

        /** filesys.e:1825		ifdef WINDOWS then*/
        // SubProg abbreviate_path pc: 221 op: STARTLINE (58)

        /** filesys.e:1828			return s*/
        // SubProg abbreviate_path pc: 223 op: ASSIGN (18)
        Ref(_s_inlined_fs_case_at_213_10648);
        DeRef(_fs_case_inlined_fs_case_at_216_10649);
        _fs_case_inlined_fs_case_at_216_10649 = _s_inlined_fs_case_at_213_10648;
        // SubProg abbreviate_path pc: 226 op: NOP1 (159)
        // SubProg abbreviate_path pc: 227 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-fs_case from abbreviate_path @ 213

// block var s_inlined_fs_case_at_213_10648
        DeRef(_s_inlined_fs_case_at_213_10648);
        _s_inlined_fs_case_at_213_10648 = NOVALUE;
        // SubProg abbreviate_path pc: 229 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_base_paths_10608);
        if (!IS_ATOM_INT(_i_10639)){
            _5936 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_10639)->dbl));
        }
        else{
            _5936 = (object)*(((s1_ptr)_2)->base + _i_10639);
        }
        // SubProg abbreviate_path pc: 233 op: EQUAL (153)
        if (_fs_case_inlined_fs_case_at_216_10649 == _5936)
        _5937 = 1;
        else if (IS_ATOM_INT(_fs_case_inlined_fs_case_at_216_10649) && IS_ATOM_INT(_5936))
        _5937 = 0;
        else
        _5937 = (compare(_fs_case_inlined_fs_case_at_216_10649, _5936) == 0);
        _5936 = NOVALUE;
        // SubProg abbreviate_path pc: 237 op: NOT_IFW (108)
        if (_5937 != 0)
        goto L8; // [237] 298
        _5937 = NOVALUE;
        // SubProg abbreviate_path pc: 240 op: STARTLINE (58)

        /** filesys.e:1923				expanded_path = repeat("..", length(base_paths) - i) & expanded_path[i .. $]*/
        // SubProg abbreviate_path pc: 242 op: LENGTH (42)
        if (IS_SEQUENCE(_base_paths_10608)){
                _5939 = SEQ_PTR(_base_paths_10608)->length;
        }
        else {
            _5939 = 1;
        }
        // SubProg abbreviate_path pc: 245 op: MINUS (10)
        if (IS_ATOM_INT(_i_10639)) {
            _5940 = _5939 - _i_10639;
        }
        else {
            _5940 = NewDouble((eudouble)_5939 - DBL_PTR(_i_10639)->dbl);
        }
        _5939 = NOVALUE;
        // SubProg abbreviate_path pc: 249 op: REPEAT (32)
        _5941 = Repeat(_5542, _5940);
        DeRef(_5940);
        _5940 = NOVALUE;
        // SubProg abbreviate_path pc: 253 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_10609)){
                _5942 = SEQ_PTR(_expanded_path_10609)->length;
        }
        else {
            _5942 = 1;
        }
        // SubProg abbreviate_path pc: 256 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_5943;
        RHS_Slice(_expanded_path_10609, _i_10639, _5942);
        // SubProg abbreviate_path pc: 261 op: CONCAT (15)
        Concat((object_ptr)&_expanded_path_10609, _5941, _5943);
        DeRefDS(_5941);
        _5941 = NOVALUE;
        DeRef(_5941);
        _5941 = NOVALUE;
        DeRefDS(_5943);
        _5943 = NOVALUE;
        // SubProg abbreviate_path pc: 265 op: STARTLINE (58)

        /** filesys.e:1924				expanded_path = stdseq:join(expanded_path, SLASH)*/
        // SubProg abbreviate_path pc: 267 op: PROC (27)
        RefDS(_expanded_path_10609);
        _0 = _expanded_path_10609;
        _expanded_path_10609 = _24join(_expanded_path_10609, 47);
        DeRefDS(_0);
        // SubProg abbreviate_path pc: 272 op: SEQUENCE_CHECK (97)
        // SubProg abbreviate_path pc: 274 op: STARTLINE (58)

        /** filesys.e:1925				if length(expanded_path) < length(orig_path) then*/
        // SubProg abbreviate_path pc: 276 op: LENGTH (42)
        if (IS_SEQUENCE(_expanded_path_10609)){
                _5946 = SEQ_PTR(_expanded_path_10609)->length;
        }
        else {
            _5946 = 1;
        }
        // SubProg abbreviate_path pc: 279 op: LENGTH (42)
        if (IS_SEQUENCE(_orig_path_10607)){
                _5947 = SEQ_PTR(_orig_path_10607)->length;
        }
        else {
            _5947 = 1;
        }
        // SubProg abbreviate_path pc: 282 op: LESS_IFW_I (119)
        if (_5946 >= _5947)
        goto L7; // [282] 305
        // SubProg abbreviate_path pc: 286 op: STARTLINE (58)

        /** filesys.e:1927			  		return expanded_path*/
        // SubProg abbreviate_path pc: 288 op: RETURNF (28)
        DeRef(_i_10639);

// Exiting block BLOCK: abbreviate_path

// block var orig_path_10607
        DeRefDS(_orig_path_10607);

// block var base_paths_10608
        DeRefDS(_base_paths_10608);

// block var lowered_expanded_path_10620
        DeRef(_lowered_expanded_path_10620);
        DeRef(_5925);
        _5925 = NOVALUE;
        DeRef(_5934);
        _5934 = NOVALUE;
        _5921 = NOVALUE;
        DeRef(_5923);
        _5923 = NOVALUE;
        return _expanded_path_10609;
        // SubProg abbreviate_path pc: 292 op: NOP1 (159)
        // SubProg abbreviate_path pc: 293 op: STARTLINE (58)

        /** filesys.e:1929				exit*/
        // SubProg abbreviate_path pc: 295 op: EXIT (61)
        goto L7; // [295] 305
        // SubProg abbreviate_path pc: 297 op: NOP1 (159)
L8: // addr: 298 pc: 297 sub: 10605 op: 159
        // SubProg abbreviate_path pc: 298 op: STARTLINE (58)

        /** filesys.e:1931		end for*/
        // SubProg abbreviate_path pc: 300 op: ENDFOR_INT_UP1 (54)
        _0 = _i_10639;
        if (IS_ATOM_INT(_i_10639)) {
            _i_10639 = _i_10639 + 1;
            if ((object)((uintptr_t)_i_10639 +(uintptr_t) HIGH_BITS) >= 0){
                _i_10639 = NewDouble((eudouble)_i_10639);
            }
        }
        else {
            _i_10639 = binary_op_a(PLUS, _i_10639, 1);
        }
        DeRef(_0);
        goto L6; // [300] 208
L7: // addr: 305 pc: 300 sub: 10605 op: 54
        ;
        DeRef(_i_10639);
    }
    // SubProg abbreviate_path pc: 305 op: STARTLINE (58)

    /** filesys.e:1934		return orig_path*/
    // SubProg abbreviate_path pc: 307 op: RETURNF (28)

// Exiting block BLOCK: abbreviate_path

// block var base_paths_10608
    DeRefDS(_base_paths_10608);

// block var expanded_path_10609
    DeRef(_expanded_path_10609);

// block var lowered_expanded_path_10620
    DeRef(_lowered_expanded_path_10620);
    DeRef(_5925);
    _5925 = NOVALUE;
    DeRef(_5934);
    _5934 = NOVALUE;
    _5921 = NOVALUE;
    DeRef(_5923);
    _5923 = NOVALUE;
    return _orig_path_10607;
    // SubProg abbreviate_path pc: 311 op: BADRETURNF (43)
    ;
}


object _16file_type(object _filename_10697)
{
    object _dirfil_10698 = NOVALUE;
    object _5980 = NOVALUE; // 10718 5980
    object _5979 = NOVALUE; // 10717 5979
    object _5978 = NOVALUE; // 10716 5978
    object _5977 = NOVALUE; // 10715 5977
    object _5976 = NOVALUE; // 10714 5976
// skipping _5975  name type: 0
    object _5974 = NOVALUE; // 10712 5974
    object _5973 = NOVALUE; // 10711 5973
    object _5972 = NOVALUE; // 10710 5972
    object _5971 = NOVALUE; // 10709 5971
    object _5970 = NOVALUE; // 10708 5970
    object _5969 = NOVALUE; // 10707 5969
    object _5968 = NOVALUE; // 10705 5968
// skipping _5967  name type: 0
    object _5966 = NOVALUE; // 10702 5966
// skipping _5965  name type: 0
    object _5964 = NOVALUE; // 10700 5964
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_type pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg file_type pc: 3 op: STARTLINE (58)

    /** filesys.e:2040		if eu:find('*', filename) or eu:find('?', filename) then return FILETYPE_UNDEFINED end if*/
    // SubProg file_type pc: 5 op: FIND_FROM (176)
    _5964 = find_from(42, _filename_10697, 1);
    // SubProg file_type pc: 10 op: SC1_OR_IF (147)
    if (_5964 != 0) {
        goto L1; // [10] 24
    }
    // SubProg file_type pc: 14 op: FIND_FROM (176)
    _5966 = find_from(63, _filename_10697, 1);
    // SubProg file_type pc: 19 op: NOP1 (159)
    // SubProg file_type pc: 20 op: IF (20)
    if (_5966 == 0)
    {
        _5966 = NOVALUE;
        goto L2; // [20] 29
    }
    else{
        _5966 = NOVALUE;
    }
    // SubProg file_type pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 10695 op: 159
    // SubProg file_type pc: 24 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_10697
    DeRefDS(_filename_10697);

// block var dirfil_10698
    DeRef(_dirfil_10698);
    return -1;
    // SubProg file_type pc: 28 op: NOP1 (159)
L2: // addr: 29 pc: 28 sub: 10695 op: 159
    // SubProg file_type pc: 29 op: STARTLINE (58)

    /** filesys.e:2042		ifdef WINDOWS then*/
    // SubProg file_type pc: 31 op: STARTLINE (58)

    /** filesys.e:2048		dirfil = dir(filename)*/
    // SubProg file_type pc: 33 op: PROC (27)
    RefDS(_filename_10697);
    _0 = _dirfil_10698;
    _dirfil_10698 = _16dir(_filename_10697);
    DeRef(_0);
    // SubProg file_type pc: 37 op: STARTLINE (58)

    /** filesys.e:2049		if sequence(dirfil) then*/
    // SubProg file_type pc: 39 op: IS_A_SEQUENCE (68)
    _5968 = IS_SEQUENCE(_dirfil_10698);
    // SubProg file_type pc: 42 op: IF (20)
    if (_5968 == 0)
    {
        _5968 = NOVALUE;
        goto L3; // [42] 126
    }
    else{
        _5968 = NOVALUE;
    }
    // SubProg file_type pc: 45 op: STARTLINE (58)

    /** filesys.e:2050			if length( dirfil ) > 1 or eu:find('d', dirfil[1][2]) or (length(filename)=3 and filename[2]=':') then*/
    // SubProg file_type pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_dirfil_10698)){
            _5969 = SEQ_PTR(_dirfil_10698)->length;
    }
    else {
        _5969 = 1;
    }
    // SubProg file_type pc: 50 op: GREATER (6)
    _5970 = (_5969 > 1);
    _5969 = NOVALUE;
    // SubProg file_type pc: 54 op: SC1_OR (143)
    if (_5970 != 0) {
        _5971 = 1;
        goto L4; // [54] 75
    }
    // SubProg file_type pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dirfil_10698);
    _5972 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_type pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5972);
    _5973 = (object)*(((s1_ptr)_2)->base + 2);
    _5972 = NOVALUE;
    // SubProg file_type pc: 66 op: FIND_FROM (176)
    _5974 = find_from(100, _5973, 1);
    _5973 = NOVALUE;
    // SubProg file_type pc: 71 op: SC2_OR (144)
    _5971 = (_5974 != 0);
    // SubProg file_type pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 10695 op: 159
    // SubProg file_type pc: 75 op: SC1_OR_IF (147)
    if (_5971 != 0) {
        goto L5; // [75] 107
    }
    // SubProg file_type pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_10697)){
            _5976 = SEQ_PTR(_filename_10697)->length;
    }
    else {
        _5976 = 1;
    }
    // SubProg file_type pc: 82 op: EQUALS (3)
    _5977 = (_5976 == 3);
    _5976 = NOVALUE;
    // SubProg file_type pc: 86 op: SC1_AND (141)
    if (_5977 == 0) {
        DeRef(_5978);
        _5978 = 0;
        goto L6; // [86] 102
    }
    // SubProg file_type pc: 90 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_filename_10697);
    _5979 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg file_type pc: 94 op: EQUALS (3)
    if (IS_ATOM_INT(_5979)) {
        _5980 = (_5979 == 58);
    }
    else {
        _5980 = binary_op(EQUALS, _5979, 58);
    }
    _5979 = NOVALUE;
    // SubProg file_type pc: 98 op: SC2_AND (142)
    if (IS_ATOM_INT(_5980))
    _5978 = (_5980 != 0);
    else
    _5978 = DBL_PTR(_5980)->dbl != 0.0;
    // SubProg file_type pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 10695 op: 159
    // SubProg file_type pc: 102 op: NOP1 (159)
    // SubProg file_type pc: 103 op: IF (20)
    if (_5978 == 0)
    {
        _5978 = NOVALUE;
        goto L7; // [103] 116
    }
    else{
        _5978 = NOVALUE;
    }
    // SubProg file_type pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 10695 op: 159
    // SubProg file_type pc: 107 op: STARTLINE (58)

    /** filesys.e:2051				return FILETYPE_DIRECTORY*/
    // SubProg file_type pc: 109 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_10697
    DeRefDS(_filename_10697);

// block var dirfil_10698
    DeRef(_dirfil_10698);
    DeRef(_5980);
    _5980 = NOVALUE;
    DeRef(_5977);
    _5977 = NOVALUE;
    DeRef(_5970);
    _5970 = NOVALUE;
    return 2;
    // SubProg file_type pc: 113 op: ELSE (23)
    goto L8; // [113] 133
    // SubProg file_type pc: 115 op: NOP1 (159)
L7: // addr: 116 pc: 115 sub: 10695 op: 159
    // SubProg file_type pc: 116 op: STARTLINE (58)

    /** filesys.e:2053				return FILETYPE_FILE*/
    // SubProg file_type pc: 118 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_10697
    DeRefDS(_filename_10697);

// block var dirfil_10698
    DeRef(_dirfil_10698);
    DeRef(_5980);
    _5980 = NOVALUE;
    DeRef(_5977);
    _5977 = NOVALUE;
    DeRef(_5970);
    _5970 = NOVALUE;
    return 1;
    // SubProg file_type pc: 122 op: NOP1 (159)
    // SubProg file_type pc: 123 op: ELSE (23)
    goto L8; // [123] 133
    // SubProg file_type pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 10695 op: 159
    // SubProg file_type pc: 126 op: STARTLINE (58)

    /** filesys.e:2056			return FILETYPE_NOT_FOUND*/
    // SubProg file_type pc: 128 op: RETURNF (28)

// Exiting block BLOCK: file_type

// block var filename_10697
    DeRefDS(_filename_10697);

// block var dirfil_10698
    DeRef(_dirfil_10698);
    DeRef(_5980);
    _5980 = NOVALUE;
    DeRef(_5977);
    _5977 = NOVALUE;
    DeRef(_5970);
    _5970 = NOVALUE;
    return 0;
    // SubProg file_type pc: 132 op: NOP1 (159)
L8: // addr: 133 pc: 132 sub: 10695 op: 159
    // SubProg file_type pc: 133 op: BADRETURNF (43)
    ;
}


object _16file_exists(object _name_10737)
{
    object _pName_10740 = NOVALUE;
    object _r_10742 = NOVALUE;
    object _5985 = NOVALUE; // 10745 5985
// skipping _5984  name type: 0
    object _5983 = NOVALUE; // 10743 5983
// skipping _5982  name type: 0
    object _5981 = NOVALUE; // 10739 5981
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_exists pc: 1 op: STARTLINE (58)

    /** filesys.e:2103		if atom(name) then*/
    // SubProg file_exists pc: 3 op: IS_AN_ATOM (67)
    _5981 = IS_ATOM(_name_10737);
    // SubProg file_exists pc: 6 op: IF (20)
    if (_5981 == 0)
    {
        _5981 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _5981 = NOVALUE;
    }
    // SubProg file_exists pc: 9 op: STARTLINE (58)

    /** filesys.e:2104			return 0*/
    // SubProg file_exists pc: 11 op: RETURNF (28)

// Exiting block BLOCK: file_exists

// block var name_10737
    DeRef(_name_10737);

// block var pName_10740
    DeRef(_pName_10740);

// block var r_10742
    DeRef(_r_10742);
    return 0;
    // SubProg file_exists pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 10735 op: 159
    // SubProg file_exists pc: 16 op: STARTLINE (58)

    /** filesys.e:2107		ifdef WINDOWS then*/
    // SubProg file_exists pc: 18 op: STARTLINE (58)

    /** filesys.e:2115			atom pName = machine:allocate_string(name)*/
    // SubProg file_exists pc: 20 op: PROC (27)
    Ref(_name_10737);
    _0 = _pName_10740;
    _pName_10740 = _9allocate_string(_name_10737, 0);
    DeRef(_0);
    // SubProg file_exists pc: 25 op: STARTLINE (58)

    /** filesys.e:2116			atom r = c_func(xGetFileAttributes, {pName, 0})*/
    // SubProg file_exists pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_exists pc: 29 op: RIGHT_BRACE_2 (85)
    Ref(_pName_10740);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pName_10740;
    ((intptr_t *)_2)[2] = 0;
    _5983 = MAKE_SEQ(_1);
    // SubProg file_exists pc: 33 op: C_FUNC (133)
    DeRef(_r_10742);
    _r_10742 = call_c(1, _16xGetFileAttributes_9813, _5983);
    DeRefDS(_5983);
    _5983 = NOVALUE;
    // SubProg file_exists pc: 38 op: STARTLINE (58)

    /** filesys.e:2117			machine:free(pName)*/
    // SubProg file_exists pc: 40 op: PROC (27)
    Ref(_pName_10740);
    _9free(_pName_10740);
    // SubProg file_exists pc: 43 op: STARTLINE (58)

    /** filesys.e:2119			return r = 0*/
    // SubProg file_exists pc: 45 op: EQUALS (3)
    if (IS_ATOM_INT(_r_10742)) {
        _5985 = (_r_10742 == 0);
    }
    else {
        _5985 = (DBL_PTR(_r_10742)->dbl == (eudouble)0);
    }
    // SubProg file_exists pc: 49 op: RETURNF (28)

// Exiting block BLOCK: file_exists

// block var name_10737
    DeRef(_name_10737);

// block var pName_10740
    DeRef(_pName_10740);

// block var r_10742
    DeRef(_r_10742);
    return _5985;
    // SubProg file_exists pc: 53 op: BADRETURNF (43)
    ;
}


object _16file_timestamp(object _fname_10748)
{
    object _d_10749 = NOVALUE;
    object _6000 = NOVALUE; // 10765 6000
    object _5999 = NOVALUE; // 10764 5999
    object _5998 = NOVALUE; // 10763 5998
    object _5997 = NOVALUE; // 10762 5997
    object _5996 = NOVALUE; // 10761 5996
    object _5995 = NOVALUE; // 10760 5995
    object _5994 = NOVALUE; // 10759 5994
    object _5993 = NOVALUE; // 10758 5993
    object _5992 = NOVALUE; // 10757 5992
    object _5991 = NOVALUE; // 10756 5991
    object _5990 = NOVALUE; // 10755 5990
    object _5989 = NOVALUE; // 10754 5989
    object _5988 = NOVALUE; // 10753 5988
    object _5987 = NOVALUE; // 10752 5987
// skipping _5986  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_timestamp pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg file_timestamp pc: 3 op: STARTLINE (58)

    /** filesys.e:2139		object d = dir(fname)*/
    // SubProg file_timestamp pc: 5 op: PROC (27)
    RefDS(_fname_10748);
    _0 = _d_10749;
    _d_10749 = _16dir(_fname_10748);
    DeRef(_0);
    // SubProg file_timestamp pc: 9 op: STARTLINE (58)

    /** filesys.e:2140		if atom(d) then return -1 end if*/
    // SubProg file_timestamp pc: 11 op: IS_AN_ATOM (67)
    _5987 = IS_ATOM(_d_10749);
    // SubProg file_timestamp pc: 14 op: IF (20)
    if (_5987 == 0)
    {
        _5987 = NOVALUE;
        goto L1; // [14] 22
    }
    else{
        _5987 = NOVALUE;
    }
    // SubProg file_timestamp pc: 17 op: RETURNF (28)

// Exiting block BLOCK: file_timestamp

// block var fname_10748
    DeRefDS(_fname_10748);

// block var d_10749
    DeRef(_d_10749);
    return -1;
    // SubProg file_timestamp pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 10746 op: 159
    // SubProg file_timestamp pc: 22 op: STARTLINE (58)

    /** filesys.e:2142		return datetime:new(d[1][D_YEAR], d[1][D_MONTH], d[1][D_DAY],*/
    // SubProg file_timestamp pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_10749);
    _5988 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 28 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5988);
    _5989 = (object)*(((s1_ptr)_2)->base + 4);
    _5988 = NOVALUE;
    // SubProg file_timestamp pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_10749);
    _5990 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5990);
    _5991 = (object)*(((s1_ptr)_2)->base + 5);
    _5990 = NOVALUE;
    // SubProg file_timestamp pc: 40 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_10749);
    _5992 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5992);
    _5993 = (object)*(((s1_ptr)_2)->base + 6);
    _5992 = NOVALUE;
    // SubProg file_timestamp pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_10749);
    _5994 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 52 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5994);
    _5995 = (object)*(((s1_ptr)_2)->base + 7);
    _5994 = NOVALUE;
    // SubProg file_timestamp pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_10749);
    _5996 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5996);
    _5997 = (object)*(((s1_ptr)_2)->base + 8);
    _5996 = NOVALUE;
    // SubProg file_timestamp pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_d_10749);
    _5998 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg file_timestamp pc: 68 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5998);
    _5999 = (object)*(((s1_ptr)_2)->base + 9);
    _5998 = NOVALUE;
    // SubProg file_timestamp pc: 72 op: PROC (27)
    Ref(_5989);
    Ref(_5991);
    Ref(_5993);
    Ref(_5995);
    Ref(_5997);
    Ref(_5999);
    _6000 = _17new(_5989, _5991, _5993, _5995, _5997, _5999);
    _5989 = NOVALUE;
    _5991 = NOVALUE;
    _5993 = NOVALUE;
    _5995 = NOVALUE;
    _5997 = NOVALUE;
    _5999 = NOVALUE;
    // SubProg file_timestamp pc: 81 op: RETURNF (28)

// Exiting block BLOCK: file_timestamp

// block var fname_10748
    DeRefDS(_fname_10748);

// block var d_10749
    DeRef(_d_10749);
    return _6000;
    // SubProg file_timestamp pc: 85 op: BADRETURNF (43)
    ;
}


object _16locate_file(object _filename_10936, object _search_list_10937, object _subdir_10938)
{
    object _extra_paths_10939 = NOVALUE;
    object _this_path_10940 = NOVALUE;
    object _6171 = NOVALUE; // 11041 6171
    object _6170 = NOVALUE; // 11040 6170
// skipping _6169  name type: 0
    object _6168 = NOVALUE; // 11037 6168
// skipping _6167  name type: 0
    object _6166 = NOVALUE; // 11034 6166
// skipping _6165  name type: 0
    object _6164 = NOVALUE; // 11032 6164
    object _6163 = NOVALUE; // 11030 6163
    object _6162 = NOVALUE; // 11029 6162
// skipping _6161  name type: 0
    object _6160 = NOVALUE; // 11027 6160
    object _6159 = NOVALUE; // 11026 6159
    object _6158 = NOVALUE; // 11025 6158
// skipping _6157  name type: 0
    object _6156 = NOVALUE; // 11022 6156
    object _6155 = NOVALUE; // 11021 6155
    object _6154 = NOVALUE; // 11019 6154
// skipping _6153  name type: 0
// skipping _6152  name type: 0
    object _6151 = NOVALUE; // 11014 6151
    object _6150 = NOVALUE; // 11013 6150
// skipping _6149  name type: 0
    object _6148 = NOVALUE; // 11010 6148
// skipping _6147  name type: 0
    object _6146 = NOVALUE; // 11007 6146
    object _6145 = NOVALUE; // 11006 6145
// skipping _6144  name type: 0
// skipping _6143  name type: 0
    object _6142 = NOVALUE; // 11001 6142
// skipping _6141  name type: 0
// skipping _6139  name type: 0
// skipping _6138  name type: 0
    object _6137 = NOVALUE; // 10995 6137
// skipping _6136  name type: 0
// skipping _6134  name type: 0
    object _6133 = NOVALUE; // 10990 6133
// skipping _6128  name type: 0
// skipping _6126  name type: 0
// skipping _6124  name type: 0
    object _6123 = NOVALUE; // 10980 6123
// skipping _6121  name type: 0
    object _6120 = NOVALUE; // 10977 6120
// skipping _6118  name type: 0
    object _6117 = NOVALUE; // 10974 6117
    object _6116 = NOVALUE; // 10973 6116
// skipping _6115  name type: 0
// skipping _6113  name type: 0
    object _6112 = NOVALUE; // 10968 6112
// skipping _6110  name type: 0
    object _6109 = NOVALUE; // 10965 6109
    object _6107 = NOVALUE; // 10963 6107
// skipping _6106  name type: 0
// skipping _6104  name type: 0
    object _6103 = NOVALUE; // 10958 6103
// skipping _6102  name type: 0
    object _6101 = NOVALUE; // 10956 6101
    object _6100 = NOVALUE; // 10955 6100
// skipping _6099  name type: 0
// skipping _6098  name type: 0
// skipping _6097  name type: 0
    object _6096 = NOVALUE; // 10950 6096
    object _6095 = NOVALUE; // 10949 6095
// skipping _6094  name type: 0
// skipping _6093  name type: 0
    object _6092 = NOVALUE; // 10946 6092
// skipping _6091  name type: 0
    object _6090 = NOVALUE; // 10944 6090
    object _6089 = NOVALUE; // 10942 6089
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg locate_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 7 op: STARTLINE (58)

    /** filesys.e:2509		if absolute_path(filename) then*/
    // SubProg locate_file pc: 9 op: PROC (27)
    RefDS(_filename_10936);
    _6089 = _16absolute_path(_filename_10936);
    // SubProg locate_file pc: 13 op: IF (20)
    if (_6089 == 0) {
        DeRef(_6089);
        _6089 = NOVALUE;
        goto L1; // [13] 23
    }
    else {
        if (!IS_ATOM_INT(_6089) && DBL_PTR(_6089)->dbl == 0.0){
            DeRef(_6089);
            _6089 = NOVALUE;
            goto L1; // [13] 23
        }
        DeRef(_6089);
        _6089 = NOVALUE;
    }
    DeRef(_6089);
    _6089 = NOVALUE;
    // SubProg locate_file pc: 16 op: STARTLINE (58)

    /** filesys.e:2510			return filename*/
    // SubProg locate_file pc: 18 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var search_list_10937
    DeRefDS(_search_list_10937);

// block var subdir_10938
    DeRefDS(_subdir_10938);

// block var extra_paths_10939
    DeRef(_extra_paths_10939);

// block var this_path_10940
    DeRef(_this_path_10940);
    return _filename_10936;
    // SubProg locate_file pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 10934 op: 159
    // SubProg locate_file pc: 23 op: STARTLINE (58)

    /** filesys.e:2513		if length(search_list) = 0 then*/
    // SubProg locate_file pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_search_list_10937)){
            _6090 = SEQ_PTR(_search_list_10937)->length;
    }
    else {
        _6090 = 1;
    }
    // SubProg locate_file pc: 28 op: EQUALS_IFW_I (121)
    if (_6090 != 0)
    goto L2; // [28] 283
    // SubProg locate_file pc: 32 op: STARTLINE (58)

    /** filesys.e:2514			search_list = append(search_list, "." & SLASH)*/
    // SubProg locate_file pc: 34 op: CONCAT (15)
    Append(&_6092, _5475, 47);
    // SubProg locate_file pc: 38 op: APPEND (35)
    RefDS(_6092);
    Append(&_search_list_10937, _search_list_10937, _6092);
    DeRefDS(_6092);
    _6092 = NOVALUE;
    // SubProg locate_file pc: 42 op: STARTLINE (58)

    /** filesys.e:2516			extra_paths = command_line()*/
    // SubProg locate_file pc: 44 op: COMMAND_LINE (100)
    DeRef(_extra_paths_10939);
    _extra_paths_10939 = Command_Line();
    // SubProg locate_file pc: 46 op: STARTLINE (58)

    /** filesys.e:2517			extra_paths = canonical_path(dirname(extra_paths[2]), 1)*/
    // SubProg locate_file pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_extra_paths_10939);
    _6095 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg locate_file pc: 52 op: PROC (27)
    RefDS(_6095);
    _6096 = _16dirname(_6095, 0);
    _6095 = NOVALUE;
    // SubProg locate_file pc: 57 op: PROC (27)
    _0 = _extra_paths_10939;
    _extra_paths_10939 = _16canonical_path(_6096, 1, 0);
    DeRefDS(_0);
    _6096 = NOVALUE;
    // SubProg locate_file pc: 63 op: STARTLINE (58)

    /** filesys.e:2518			search_list = append(search_list, extra_paths)*/
    // SubProg locate_file pc: 65 op: APPEND (35)
    Ref(_extra_paths_10939);
    Append(&_search_list_10937, _search_list_10937, _extra_paths_10939);
    // SubProg locate_file pc: 69 op: STARTLINE (58)

    /** filesys.e:2520			ifdef UNIX then*/
    // SubProg locate_file pc: 71 op: STARTLINE (58)

    /** filesys.e:2521				extra_paths = getenv("HOME")*/
    // SubProg locate_file pc: 73 op: GETENV (91)
    DeRef(_extra_paths_10939);
    _extra_paths_10939 = EGetEnv(_5753);
    // SubProg locate_file pc: 76 op: STARTLINE (58)

    /** filesys.e:2527			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 78 op: IS_A_SEQUENCE (68)
    _6100 = IS_SEQUENCE(_extra_paths_10939);
    // SubProg locate_file pc: 81 op: IF (20)
    if (_6100 == 0)
    {
        _6100 = NOVALUE;
        goto L3; // [81] 95
    }
    else{
        _6100 = NOVALUE;
    }
    // SubProg locate_file pc: 84 op: STARTLINE (58)

    /** filesys.e:2528				search_list = append(search_list, extra_paths & SLASH)*/
    // SubProg locate_file pc: 86 op: CONCAT (15)
    if (IS_SEQUENCE(_extra_paths_10939) && IS_ATOM(47)) {
        Append(&_6101, _extra_paths_10939, 47);
    }
    else if (IS_ATOM(_extra_paths_10939) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_6101, _extra_paths_10939, 47);
    }
    // SubProg locate_file pc: 90 op: APPEND (35)
    RefDS(_6101);
    Append(&_search_list_10937, _search_list_10937, _6101);
    DeRefDS(_6101);
    _6101 = NOVALUE;
    // SubProg locate_file pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 10934 op: 159
    // SubProg locate_file pc: 95 op: STARTLINE (58)

    /** filesys.e:2531			search_list = append(search_list, ".." & SLASH)*/
    // SubProg locate_file pc: 97 op: CONCAT (15)
    Append(&_6103, _5542, 47);
    // SubProg locate_file pc: 101 op: APPEND (35)
    RefDS(_6103);
    Append(&_search_list_10937, _search_list_10937, _6103);
    DeRefDS(_6103);
    _6103 = NOVALUE;
    // SubProg locate_file pc: 105 op: STARTLINE (58)

    /** filesys.e:2533			extra_paths = getenv("EUDIR")*/
    // SubProg locate_file pc: 107 op: GETENV (91)
    DeRef(_extra_paths_10939);
    _extra_paths_10939 = EGetEnv(_6105);
    // SubProg locate_file pc: 110 op: STARTLINE (58)

    /** filesys.e:2534			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 112 op: IS_A_SEQUENCE (68)
    _6107 = IS_SEQUENCE(_extra_paths_10939);
    // SubProg locate_file pc: 115 op: IF (20)
    if (_6107 == 0)
    {
        _6107 = NOVALUE;
        goto L4; // [115] 145
    }
    else{
        _6107 = NOVALUE;
    }
    // SubProg locate_file pc: 118 op: STARTLINE (58)

    /** filesys.e:2535				search_list = append(search_list, extra_paths & SLASH & "bin" & SLASH)*/
    // SubProg locate_file pc: 120 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _6108;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_10939;
        Concat_N((object_ptr)&_6109, concat_list, 4);
    }
    // SubProg locate_file pc: 127 op: APPEND (35)
    RefDS(_6109);
    Append(&_search_list_10937, _search_list_10937, _6109);
    DeRefDS(_6109);
    _6109 = NOVALUE;
    // SubProg locate_file pc: 131 op: STARTLINE (58)

    /** filesys.e:2536				search_list = append(search_list, extra_paths & SLASH & "docs" & SLASH)*/
    // SubProg locate_file pc: 133 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _6111;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_10939;
        Concat_N((object_ptr)&_6112, concat_list, 4);
    }
    // SubProg locate_file pc: 140 op: APPEND (35)
    RefDS(_6112);
    Append(&_search_list_10937, _search_list_10937, _6112);
    DeRefDS(_6112);
    _6112 = NOVALUE;
    // SubProg locate_file pc: 144 op: NOP1 (159)
L4: // addr: 145 pc: 144 sub: 10934 op: 159
    // SubProg locate_file pc: 145 op: STARTLINE (58)

    /** filesys.e:2539			extra_paths = getenv("EUDIST")*/
    // SubProg locate_file pc: 147 op: GETENV (91)
    DeRef(_extra_paths_10939);
    _extra_paths_10939 = EGetEnv(_6114);
    // SubProg locate_file pc: 150 op: STARTLINE (58)

    /** filesys.e:2540			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 152 op: IS_A_SEQUENCE (68)
    _6116 = IS_SEQUENCE(_extra_paths_10939);
    // SubProg locate_file pc: 155 op: IF (20)
    if (_6116 == 0)
    {
        _6116 = NOVALUE;
        goto L5; // [155] 195
    }
    else{
        _6116 = NOVALUE;
    }
    // SubProg locate_file pc: 158 op: STARTLINE (58)

    /** filesys.e:2541				search_list = append(search_list, extra_paths & SLASH)*/
    // SubProg locate_file pc: 160 op: CONCAT (15)
    if (IS_SEQUENCE(_extra_paths_10939) && IS_ATOM(47)) {
        Append(&_6117, _extra_paths_10939, 47);
    }
    else if (IS_ATOM(_extra_paths_10939) && IS_SEQUENCE(47)) {
    }
    else {
        Concat((object_ptr)&_6117, _extra_paths_10939, 47);
    }
    // SubProg locate_file pc: 164 op: APPEND (35)
    RefDS(_6117);
    Append(&_search_list_10937, _search_list_10937, _6117);
    DeRefDS(_6117);
    _6117 = NOVALUE;
    // SubProg locate_file pc: 168 op: STARTLINE (58)

    /** filesys.e:2542				search_list = append(search_list, extra_paths & SLASH & "etc" & SLASH)*/
    // SubProg locate_file pc: 170 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _6119;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_10939;
        Concat_N((object_ptr)&_6120, concat_list, 4);
    }
    // SubProg locate_file pc: 177 op: APPEND (35)
    RefDS(_6120);
    Append(&_search_list_10937, _search_list_10937, _6120);
    DeRefDS(_6120);
    _6120 = NOVALUE;
    // SubProg locate_file pc: 181 op: STARTLINE (58)

    /** filesys.e:2543				search_list = append(search_list, extra_paths & SLASH & "data" & SLASH)*/
    // SubProg locate_file pc: 183 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = 47;
        concat_list[1] = _6122;
        concat_list[2] = 47;
        concat_list[3] = _extra_paths_10939;
        Concat_N((object_ptr)&_6123, concat_list, 4);
    }
    // SubProg locate_file pc: 190 op: APPEND (35)
    RefDS(_6123);
    Append(&_search_list_10937, _search_list_10937, _6123);
    DeRefDS(_6123);
    _6123 = NOVALUE;
    // SubProg locate_file pc: 194 op: NOP1 (159)
L5: // addr: 195 pc: 194 sub: 10934 op: 159
    // SubProg locate_file pc: 195 op: STARTLINE (58)

    /** filesys.e:2546			ifdef UNIX then*/
    // SubProg locate_file pc: 197 op: STARTLINE (58)

    /** filesys.e:2548				search_list = append( search_list, "/usr/local/share/euphoria/bin/" )*/
    // SubProg locate_file pc: 199 op: APPEND (35)
    RefDS(_6125);
    Append(&_search_list_10937, _search_list_10937, _6125);
    // SubProg locate_file pc: 203 op: STARTLINE (58)

    /** filesys.e:2549				search_list = append( search_list, "/usr/share/euphoria/bin/" )*/
    // SubProg locate_file pc: 205 op: APPEND (35)
    RefDS(_6127);
    Append(&_search_list_10937, _search_list_10937, _6127);
    // SubProg locate_file pc: 209 op: STARTLINE (58)

    /** filesys.e:2552			search_list &= include_paths(1)*/
    // SubProg locate_file pc: 211 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_6132);
    ((intptr_t*)_2)[1] = _6132;
    RefDS(_6131);
    ((intptr_t*)_2)[2] = _6131;
    RefDS(_6130);
    ((intptr_t*)_2)[3] = _6130;
    RefDS(_6129);
    ((intptr_t*)_2)[4] = _6129;
    _6133 = MAKE_SEQ(_1);
    // SubProg locate_file pc: 218 op: CONCAT (15)
    Concat((object_ptr)&_search_list_10937, _search_list_10937, _6133);
    DeRefDS(_6133);
    _6133 = NOVALUE;
    // SubProg locate_file pc: 222 op: STARTLINE (58)

    /** filesys.e:2555			extra_paths = getenv("USERPATH")*/
    // SubProg locate_file pc: 224 op: GETENV (91)
    DeRef(_extra_paths_10939);
    _extra_paths_10939 = EGetEnv(_6135);
    // SubProg locate_file pc: 227 op: STARTLINE (58)

    /** filesys.e:2556			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 229 op: IS_A_SEQUENCE (68)
    _6137 = IS_SEQUENCE(_extra_paths_10939);
    // SubProg locate_file pc: 232 op: IF (20)
    if (_6137 == 0)
    {
        _6137 = NOVALUE;
        goto L6; // [232] 251
    }
    else{
        _6137 = NOVALUE;
    }
    // SubProg locate_file pc: 235 op: STARTLINE (58)

    /** filesys.e:2557				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    // SubProg locate_file pc: 237 op: PROC (27)
    Ref(_extra_paths_10939);
    _0 = _extra_paths_10939;
    _extra_paths_10939 = _24split(_extra_paths_10939, 58, 0, 0);
    DeRefi(_0);
    // SubProg locate_file pc: 244 op: STARTLINE (58)

    /** filesys.e:2558				search_list &= extra_paths*/
    // SubProg locate_file pc: 246 op: CONCAT (15)
    if (IS_SEQUENCE(_search_list_10937) && IS_ATOM(_extra_paths_10939)) {
        Ref(_extra_paths_10939);
        Append(&_search_list_10937, _search_list_10937, _extra_paths_10939);
    }
    else if (IS_ATOM(_search_list_10937) && IS_SEQUENCE(_extra_paths_10939)) {
    }
    else {
        Concat((object_ptr)&_search_list_10937, _search_list_10937, _extra_paths_10939);
    }
    // SubProg locate_file pc: 250 op: NOP1 (159)
L6: // addr: 251 pc: 250 sub: 10934 op: 159
    // SubProg locate_file pc: 251 op: STARTLINE (58)

    /** filesys.e:2561			extra_paths = getenv("PATH")*/
    // SubProg locate_file pc: 253 op: GETENV (91)
    DeRef(_extra_paths_10939);
    _extra_paths_10939 = EGetEnv(_6140);
    // SubProg locate_file pc: 256 op: STARTLINE (58)

    /** filesys.e:2562			if sequence(extra_paths) then*/
    // SubProg locate_file pc: 258 op: IS_A_SEQUENCE (68)
    _6142 = IS_SEQUENCE(_extra_paths_10939);
    // SubProg locate_file pc: 261 op: IF (20)
    if (_6142 == 0)
    {
        _6142 = NOVALUE;
        goto L7; // [261] 308
    }
    else{
        _6142 = NOVALUE;
    }
    // SubProg locate_file pc: 264 op: STARTLINE (58)

    /** filesys.e:2563				extra_paths = stdseq:split(extra_paths, PATHSEP)*/
    // SubProg locate_file pc: 266 op: PROC (27)
    Ref(_extra_paths_10939);
    _0 = _extra_paths_10939;
    _extra_paths_10939 = _24split(_extra_paths_10939, 58, 0, 0);
    DeRefi(_0);
    // SubProg locate_file pc: 273 op: STARTLINE (58)

    /** filesys.e:2564				search_list &= extra_paths*/
    // SubProg locate_file pc: 275 op: CONCAT (15)
    if (IS_SEQUENCE(_search_list_10937) && IS_ATOM(_extra_paths_10939)) {
        Ref(_extra_paths_10939);
        Append(&_search_list_10937, _search_list_10937, _extra_paths_10939);
    }
    else if (IS_ATOM(_search_list_10937) && IS_SEQUENCE(_extra_paths_10939)) {
    }
    else {
        Concat((object_ptr)&_search_list_10937, _search_list_10937, _extra_paths_10939);
    }
    // SubProg locate_file pc: 279 op: NOP1 (159)
    // SubProg locate_file pc: 280 op: ELSE (23)
    goto L7; // [280] 308
    // SubProg locate_file pc: 282 op: NOP1 (159)
L2: // addr: 283 pc: 282 sub: 10934 op: 159
    // SubProg locate_file pc: 283 op: STARTLINE (58)

    /** filesys.e:2567			if integer(search_list[1]) then*/
    // SubProg locate_file pc: 285 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_search_list_10937);
    _6145 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg locate_file pc: 289 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_6145))
    _6146 = 1;
    else if (IS_ATOM_DBL(_6145))
    _6146 = IS_ATOM_INT(DoubleToInt(_6145));
    else
    _6146 = 0;
    _6145 = NOVALUE;
    // SubProg locate_file pc: 292 op: IF (20)
    if (_6146 == 0)
    {
        _6146 = NOVALUE;
        goto L8; // [292] 307
    }
    else{
        _6146 = NOVALUE;
    }
    // SubProg locate_file pc: 295 op: STARTLINE (58)

    /** filesys.e:2568				search_list = stdseq:split(search_list, PATHSEP)*/
    // SubProg locate_file pc: 297 op: PROC (27)
    RefDS(_search_list_10937);
    _0 = _search_list_10937;
    _search_list_10937 = _24split(_search_list_10937, 58, 0, 0);
    DeRefDS(_0);
    // SubProg locate_file pc: 304 op: SEQUENCE_CHECK (97)
    // SubProg locate_file pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 10934 op: 159
    // SubProg locate_file pc: 307 op: NOP1 (159)
L7: // addr: 308 pc: 307 sub: 10934 op: 159
    // SubProg locate_file pc: 308 op: STARTLINE (58)

    /** filesys.e:2572		if length(subdir) > 0 then*/
    // SubProg locate_file pc: 310 op: LENGTH (42)
    if (IS_SEQUENCE(_subdir_10938)){
            _6148 = SEQ_PTR(_subdir_10938)->length;
    }
    else {
        _6148 = 1;
    }
    // SubProg locate_file pc: 313 op: GREATER_IFW_I (124)
    if (_6148 <= 0)
    goto L9; // [313] 338
    // SubProg locate_file pc: 317 op: STARTLINE (58)

    /** filesys.e:2573			if subdir[$] != SLASH then*/
    // SubProg locate_file pc: 319 op: LENGTH (42)
    if (IS_SEQUENCE(_subdir_10938)){
            _6150 = SEQ_PTR(_subdir_10938)->length;
    }
    else {
        _6150 = 1;
    }
    // SubProg locate_file pc: 322 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_subdir_10938);
    _6151 = (object)*(((s1_ptr)_2)->base + _6150);
    // SubProg locate_file pc: 326 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _6151, 47)){
        _6151 = NOVALUE;
        goto LA; // [326] 337
    }
    _6151 = NOVALUE;
    // SubProg locate_file pc: 330 op: STARTLINE (58)

    /** filesys.e:2574				subdir &= SLASH*/
    // SubProg locate_file pc: 332 op: CONCAT (15)
    Append(&_subdir_10938, _subdir_10938, 47);
    // SubProg locate_file pc: 336 op: NOP1 (159)
LA: // addr: 337 pc: 336 sub: 10934 op: 159
    // SubProg locate_file pc: 337 op: NOP1 (159)
L9: // addr: 338 pc: 337 sub: 10934 op: 159
    // SubProg locate_file pc: 338 op: STARTLINE (58)

    /** filesys.e:2578		for i = 1 to length(search_list) do*/
    // SubProg locate_file pc: 340 op: LENGTH (42)
    if (IS_SEQUENCE(_search_list_10937)){
            _6154 = SEQ_PTR(_search_list_10937)->length;
    }
    else {
        _6154 = 1;
    }
    // SubProg locate_file pc: 343 op: FOR_I (125)
    {
        object _i_11018;
        _i_11018 = 1;
LB: // addr: 350 pc: 343 sub: 10934 op: 125
        if (_i_11018 > _6154){
            goto LC; // [343] 466
        }
        // SubProg locate_file pc: 350 op: STARTLINE (58)

        /** filesys.e:2579			if length(search_list[i]) = 0 then*/
        // SubProg locate_file pc: 352 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_10937);
        _6155 = (object)*(((s1_ptr)_2)->base + _i_11018);
        // SubProg locate_file pc: 356 op: LENGTH (42)
        if (IS_SEQUENCE(_6155)){
                _6156 = SEQ_PTR(_6155)->length;
        }
        else {
            _6156 = 1;
        }
        _6155 = NOVALUE;
        // SubProg locate_file pc: 359 op: EQUALS_IFW_I (121)
        if (_6156 != 0)
        goto LD; // [359] 368
        // SubProg locate_file pc: 363 op: STARTLINE (58)

        /** filesys.e:2580				continue*/
        // SubProg locate_file pc: 365 op: ELSE (23)
        goto LE; // [365] 461
        // SubProg locate_file pc: 367 op: NOP1 (159)
LD: // addr: 368 pc: 367 sub: 10934 op: 159
        // SubProg locate_file pc: 368 op: STARTLINE (58)

        /** filesys.e:2583			if search_list[i][$] != SLASH then*/
        // SubProg locate_file pc: 370 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_10937);
        _6158 = (object)*(((s1_ptr)_2)->base + _i_11018);
        // SubProg locate_file pc: 374 op: LENGTH (42)
        if (IS_SEQUENCE(_6158)){
                _6159 = SEQ_PTR(_6158)->length;
        }
        else {
            _6159 = 1;
        }
        // SubProg locate_file pc: 377 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6158);
        _6160 = (object)*(((s1_ptr)_2)->base + _6159);
        _6158 = NOVALUE;
        // SubProg locate_file pc: 381 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _6160, 47)){
            _6160 = NOVALUE;
            goto LF; // [381] 400
        }
        _6160 = NOVALUE;
        // SubProg locate_file pc: 385 op: STARTLINE (58)

        /** filesys.e:2584				search_list[i] &= SLASH*/
        // SubProg locate_file pc: 387 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_search_list_10937);
        _6162 = (object)*(((s1_ptr)_2)->base + _i_11018);
        // SubProg locate_file pc: 391 op: CONCAT (15)
        if (IS_SEQUENCE(_6162) && IS_ATOM(47)) {
            Append(&_6163, _6162, 47);
        }
        else if (IS_ATOM(_6162) && IS_SEQUENCE(47)) {
        }
        else {
            Concat((object_ptr)&_6163, _6162, 47);
            _6162 = NOVALUE;
        }
        _6162 = NOVALUE;
        // SubProg locate_file pc: 395 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_search_list_10937);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _search_list_10937 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_11018);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6163;
        if( _1 != _6163 ){
            DeRef(_1);
        }
        _6163 = NOVALUE;
        // SubProg locate_file pc: 399 op: NOP1 (159)
LF: // addr: 400 pc: 399 sub: 10934 op: 159
        // SubProg locate_file pc: 400 op: STARTLINE (58)

        /** filesys.e:2588			if length(subdir) > 0 then*/
        // SubProg locate_file pc: 402 op: LENGTH (42)
        if (IS_SEQUENCE(_subdir_10938)){
                _6164 = SEQ_PTR(_subdir_10938)->length;
        }
        else {
            _6164 = 1;
        }
        // SubProg locate_file pc: 405 op: GREATER_IFW_I (124)
        if (_6164 <= 0)
        goto L10; // [405] 424
        // SubProg locate_file pc: 409 op: STARTLINE (58)

        /** filesys.e:2589				this_path = search_list[i] & subdir & filename*/
        // SubProg locate_file pc: 411 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_10937);
        _6166 = (object)*(((s1_ptr)_2)->base + _i_11018);
        // SubProg locate_file pc: 415 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _filename_10936;
            concat_list[1] = _subdir_10938;
            concat_list[2] = _6166;
            Concat_N((object_ptr)&_this_path_10940, concat_list, 3);
        }
        _6166 = NOVALUE;
        // SubProg locate_file pc: 421 op: ELSE (23)
        goto L11; // [421] 435
        // SubProg locate_file pc: 423 op: NOP1 (159)
L10: // addr: 424 pc: 423 sub: 10934 op: 159
        // SubProg locate_file pc: 424 op: STARTLINE (58)

        /** filesys.e:2591				this_path = search_list[i] & filename*/
        // SubProg locate_file pc: 426 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_search_list_10937);
        _6168 = (object)*(((s1_ptr)_2)->base + _i_11018);
        // SubProg locate_file pc: 430 op: CONCAT (15)
        if (IS_SEQUENCE(_6168) && IS_ATOM(_filename_10936)) {
        }
        else if (IS_ATOM(_6168) && IS_SEQUENCE(_filename_10936)) {
            Ref(_6168);
            Prepend(&_this_path_10940, _filename_10936, _6168);
        }
        else {
            Concat((object_ptr)&_this_path_10940, _6168, _filename_10936);
            _6168 = NOVALUE;
        }
        _6168 = NOVALUE;
        // SubProg locate_file pc: 434 op: NOP1 (159)
L11: // addr: 435 pc: 434 sub: 10934 op: 159
        // SubProg locate_file pc: 435 op: STARTLINE (58)

        /** filesys.e:2594			if file_exists(this_path) then*/
        // SubProg locate_file pc: 437 op: PRIVATE_INIT_CHECK (30)
        // SubProg locate_file pc: 439 op: PROC (27)
        RefDS(_this_path_10940);
        _6170 = _16file_exists(_this_path_10940);
        // SubProg locate_file pc: 443 op: IF (20)
        if (_6170 == 0) {
            DeRef(_6170);
            _6170 = NOVALUE;
            goto L12; // [443] 459
        }
        else {
            if (!IS_ATOM_INT(_6170) && DBL_PTR(_6170)->dbl == 0.0){
                DeRef(_6170);
                _6170 = NOVALUE;
                goto L12; // [443] 459
            }
            DeRef(_6170);
            _6170 = NOVALUE;
        }
        DeRef(_6170);
        _6170 = NOVALUE;
        // SubProg locate_file pc: 446 op: STARTLINE (58)

        /** filesys.e:2595				return canonical_path(this_path)*/
        // SubProg locate_file pc: 448 op: PROC (27)
        RefDS(_this_path_10940);
        _6171 = _16canonical_path(_this_path_10940, 0, 0);
        // SubProg locate_file pc: 454 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var filename_10936
        DeRefDS(_filename_10936);

// block var search_list_10937
        DeRefDS(_search_list_10937);

// block var subdir_10938
        DeRefDS(_subdir_10938);

// block var extra_paths_10939
        DeRef(_extra_paths_10939);

// block var this_path_10940
        DeRefDS(_this_path_10940);
        _6155 = NOVALUE;
        return _6171;
        // SubProg locate_file pc: 458 op: NOP1 (159)
L12: // addr: 459 pc: 458 sub: 10934 op: 159
        // SubProg locate_file pc: 459 op: STARTLINE (58)

        /** filesys.e:2598		end for*/
        // SubProg locate_file pc: 461 op: ENDFOR_INT_UP1 (54)
LE: // addr: 461 pc: 461 sub: 10934 op: 54
        _i_11018 = _i_11018 + 1;
        goto LB; // [461] 350
LC: // addr: 466 pc: 461 sub: 10934 op: 54
        ;
    }
    // SubProg locate_file pc: 466 op: STARTLINE (58)

    /** filesys.e:2599		return filename*/
    // SubProg locate_file pc: 468 op: RETURNF (28)

// Exiting block BLOCK: locate_file

// block var search_list_10937
    DeRefDS(_search_list_10937);

// block var subdir_10938
    DeRefDS(_subdir_10938);

// block var extra_paths_10939
    DeRef(_extra_paths_10939);

// block var this_path_10940
    DeRef(_this_path_10940);
    _6155 = NOVALUE;
    DeRef(_6171);
    _6171 = NOVALUE;
    return _filename_10936;
    // SubProg locate_file pc: 472 op: BADRETURNF (43)
    ;
}


object _16count_files(object _orig_path_11114, object _dir_info_11115, object _inst_11116)
{
    object _pos_11117 = NOVALUE;
    object _ext_11118 = NOVALUE;
    object _fileext_inlined_fileext_at_218_11159 = NOVALUE;
    object _data_inlined_fileext_at_218_11158 = NOVALUE;
    object _path_inlined_fileext_at_215_11157 = NOVALUE;
    object _6271 = NOVALUE; // 11196 6271
    object _6270 = NOVALUE; // 11195 6270
    object _6269 = NOVALUE; // 11194 6269
// skipping _6268  name type: 0
    object _6267 = NOVALUE; // 11192 6267
    object _6266 = NOVALUE; // 11191 6266
    object _6265 = NOVALUE; // 11190 6265
    object _6264 = NOVALUE; // 11189 6264
// skipping _6263  name type: 0
    object _6262 = NOVALUE; // 11187 6262
    object _6261 = NOVALUE; // 11186 6261
// skipping _6260  name type: 0
    object _6259 = NOVALUE; // 11184 6259
    object _6258 = NOVALUE; // 11183 6258
    object _6257 = NOVALUE; // 11182 6257
    object _6256 = NOVALUE; // 11181 6256
    object _6255 = NOVALUE; // 11180 6255
    object _6254 = NOVALUE; // 11179 6254
    object _6253 = NOVALUE; // 11178 6253
// skipping _6252  name type: 0
    object _6251 = NOVALUE; // 11176 6251
    object _6250 = NOVALUE; // 11175 6250
// skipping _6249  name type: 0
    object _6248 = NOVALUE; // 11172 6248
    object _6247 = NOVALUE; // 11171 6247
    object _6246 = NOVALUE; // 11170 6246
    object _6245 = NOVALUE; // 11169 6245
    object _6244 = NOVALUE; // 11168 6244
    object _6243 = NOVALUE; // 11167 6243
    object _6242 = NOVALUE; // 11165 6242
    object _6241 = NOVALUE; // 11164 6241
    object _6240 = NOVALUE; // 11163 6240
    object _6239 = NOVALUE; // 11162 6239
    object _6238 = NOVALUE; // 11155 6238
    object _6237 = NOVALUE; // 11154 6237
    object _6236 = NOVALUE; // 11153 6236
// skipping _6235  name type: 0
    object _6234 = NOVALUE; // 11151 6234
    object _6233 = NOVALUE; // 11150 6233
    object _6232 = NOVALUE; // 11148 6232
    object _6231 = NOVALUE; // 11147 6231
// skipping _6230  name type: 0
    object _6229 = NOVALUE; // 11145 6229
    object _6228 = NOVALUE; // 11144 6228
    object _6227 = NOVALUE; // 11143 6227
    object _6226 = NOVALUE; // 11142 6226
    object _6225 = NOVALUE; // 11140 6225
    object _6224 = NOVALUE; // 11139 6224
    object _6223 = NOVALUE; // 11138 6223
// skipping _6222  name type: 0
    object _6221 = NOVALUE; // 11136 6221
    object _6220 = NOVALUE; // 11135 6220
    object _6219 = NOVALUE; // 11134 6219
    object _6218 = NOVALUE; // 11133 6218
    object _6217 = NOVALUE; // 11131 6217
    object _6216 = NOVALUE; // 11130 6216
// skipping _6214  name type: 0
    object _6213 = NOVALUE; // 11126 6213
    object _6212 = NOVALUE; // 11124 6212
    object _6211 = NOVALUE; // 11123 6211
    object _6210 = NOVALUE; // 11121 6210
    object _6209 = NOVALUE; // 11120 6209
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg count_files pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 7 op: STARTLINE (58)

    /** filesys.e:2761		integer pos = 0*/
    // SubProg count_files pc: 9 op: ASSIGN_I (113)
    _pos_11117 = 0;
    // SubProg count_files pc: 12 op: STARTLINE (58)

    /** filesys.e:2764		orig_path = orig_path*/
    // SubProg count_files pc: 14 op: ASSIGN (18)
    RefDS(_orig_path_11114);
    DeRefDS(_orig_path_11114);
    _orig_path_11114 = _orig_path_11114;
    // SubProg count_files pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 19 op: STARTLINE (58)

    /** filesys.e:2765		if equal(dir_info[D_NAME], ".") then*/
    // SubProg count_files pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6209 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 25 op: EQUAL (153)
    if (_6209 == _5475)
    _6210 = 1;
    else if (IS_ATOM_INT(_6209) && IS_ATOM_INT(_5475))
    _6210 = 0;
    else
    _6210 = (compare(_6209, _5475) == 0);
    _6209 = NOVALUE;
    // SubProg count_files pc: 29 op: IF (20)
    if (_6210 == 0)
    {
        _6210 = NOVALUE;
        goto L1; // [29] 39
    }
    else{
        _6210 = NOVALUE;
    }
    // SubProg count_files pc: 32 op: STARTLINE (58)

    /** filesys.e:2766			return 0*/
    // SubProg count_files pc: 34 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_11114
    DeRefDS(_orig_path_11114);

// block var dir_info_11115
    DeRefDS(_dir_info_11115);

// block var inst_11116
    DeRefDS(_inst_11116);

// block var pos_11117

// block var ext_11118
    DeRef(_ext_11118);
    return 0;
    // SubProg count_files pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 11112 op: 159
    // SubProg count_files pc: 39 op: STARTLINE (58)

    /** filesys.e:2768		if equal(dir_info[D_NAME], "..") then*/
    // SubProg count_files pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6211 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 45 op: EQUAL (153)
    if (_6211 == _5542)
    _6212 = 1;
    else if (IS_ATOM_INT(_6211) && IS_ATOM_INT(_5542))
    _6212 = 0;
    else
    _6212 = (compare(_6211, _5542) == 0);
    _6211 = NOVALUE;
    // SubProg count_files pc: 49 op: IF (20)
    if (_6212 == 0)
    {
        _6212 = NOVALUE;
        goto L2; // [49] 59
    }
    else{
        _6212 = NOVALUE;
    }
    // SubProg count_files pc: 52 op: STARTLINE (58)

    /** filesys.e:2769			return 0*/
    // SubProg count_files pc: 54 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_11114
    DeRefDS(_orig_path_11114);

// block var dir_info_11115
    DeRefDS(_dir_info_11115);

// block var inst_11116
    DeRefDS(_inst_11116);

// block var pos_11117

// block var ext_11118
    DeRef(_ext_11118);
    return 0;
    // SubProg count_files pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 11112 op: 159
    // SubProg count_files pc: 59 op: STARTLINE (58)

    /** filesys.e:2773		if inst[1] = 0 then -- count all is false*/
    // SubProg count_files pc: 61 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6213 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 65 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _6213, 0)){
        _6213 = NOVALUE;
        goto L3; // [65] 112
    }
    _6213 = NOVALUE;
    // SubProg count_files pc: 69 op: STARTLINE (58)

    /** filesys.e:2774			if find('h', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6216 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 75 op: FIND_FROM (176)
    _6217 = find_from(104, _6216, 1);
    _6216 = NOVALUE;
    // SubProg count_files pc: 80 op: IF (20)
    if (_6217 == 0)
    {
        _6217 = NOVALUE;
        goto L4; // [80] 90
    }
    else{
        _6217 = NOVALUE;
    }
    // SubProg count_files pc: 83 op: STARTLINE (58)

    /** filesys.e:2775				return 0*/
    // SubProg count_files pc: 85 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_11114
    DeRefDS(_orig_path_11114);

// block var dir_info_11115
    DeRefDS(_dir_info_11115);

// block var inst_11116
    DeRefDS(_inst_11116);

// block var pos_11117

// block var ext_11118
    DeRef(_ext_11118);
    return 0;
    // SubProg count_files pc: 89 op: NOP1 (159)
L4: // addr: 90 pc: 89 sub: 11112 op: 159
    // SubProg count_files pc: 90 op: STARTLINE (58)

    /** filesys.e:2778			if find('s', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 92 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6218 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 96 op: FIND_FROM (176)
    _6219 = find_from(115, _6218, 1);
    _6218 = NOVALUE;
    // SubProg count_files pc: 101 op: IF (20)
    if (_6219 == 0)
    {
        _6219 = NOVALUE;
        goto L5; // [101] 111
    }
    else{
        _6219 = NOVALUE;
    }
    // SubProg count_files pc: 104 op: STARTLINE (58)

    /** filesys.e:2779				return 0*/
    // SubProg count_files pc: 106 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_11114
    DeRefDS(_orig_path_11114);

// block var dir_info_11115
    DeRefDS(_dir_info_11115);

// block var inst_11116
    DeRefDS(_inst_11116);

// block var pos_11117

// block var ext_11118
    DeRef(_ext_11118);
    return 0;
    // SubProg count_files pc: 110 op: NOP1 (159)
L5: // addr: 111 pc: 110 sub: 11112 op: 159
    // SubProg count_files pc: 111 op: NOP1 (159)
L3: // addr: 112 pc: 111 sub: 11112 op: 159
    // SubProg count_files pc: 112 op: STARTLINE (58)

    /** filesys.e:2783		file_counters[inst[2]][COUNT_SIZE] += dir_info[D_SIZE]*/
    // SubProg count_files pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6220 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 120 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_11111 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_6220))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_6220)->dbl));
    else
    _3 = (object)(_6220 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 125 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6223 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg count_files pc: 129 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _6224 = (object)*(((s1_ptr)_2)->base + 3);
    _6221 = NOVALUE;
    // SubProg count_files pc: 133 op: PLUS (11)
    if (IS_ATOM_INT(_6224) && IS_ATOM_INT(_6223)) {
        _6225 = _6224 + _6223;
        if ((object)((uintptr_t)_6225 + (uintptr_t)HIGH_BITS) >= 0){
            _6225 = NewDouble((eudouble)_6225);
        }
    }
    else {
        _6225 = binary_op(PLUS, _6224, _6223);
    }
    _6224 = NOVALUE;
    _6223 = NOVALUE;
    // SubProg count_files pc: 137 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6225;
    if( _1 != _6225 ){
        DeRef(_1);
    }
    _6225 = NOVALUE;
    _6221 = NOVALUE;
    // SubProg count_files pc: 141 op: STARTLINE (58)

    /** filesys.e:2784		if find('d', dir_info[D_ATTRIBUTES]) then*/
    // SubProg count_files pc: 143 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6226 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 147 op: FIND_FROM (176)
    _6227 = find_from(100, _6226, 1);
    _6226 = NOVALUE;
    // SubProg count_files pc: 152 op: IF (20)
    if (_6227 == 0)
    {
        _6227 = NOVALUE;
        goto L6; // [152] 183
    }
    else{
        _6227 = NOVALUE;
    }
    // SubProg count_files pc: 155 op: STARTLINE (58)

    /** filesys.e:2785			file_counters[inst[2]][COUNT_DIRS] += 1*/
    // SubProg count_files pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 159 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6228 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 163 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_11111 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_6228))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_6228)->dbl));
    else
    _3 = (object)(_6228 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 168 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _6231 = (object)*(((s1_ptr)_2)->base + 1);
    _6229 = NOVALUE;
    // SubProg count_files pc: 172 op: PLUS1 (93)
    if (IS_ATOM_INT(_6231)) {
        _6232 = _6231 + 1;
        if (_6232 > MAXINT){
            _6232 = NewDouble((eudouble)_6232);
        }
    }
    else
    _6232 = binary_op(PLUS, 1, _6231);
    _6231 = NOVALUE;
    // SubProg count_files pc: 176 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6232;
    if( _1 != _6232 ){
        DeRef(_1);
    }
    _6232 = NOVALUE;
    _6229 = NOVALUE;
    // SubProg count_files pc: 180 op: ELSE (23)
    goto L7; // [180] 460
    // SubProg count_files pc: 182 op: NOP1 (159)
L6: // addr: 183 pc: 182 sub: 11112 op: 159
    // SubProg count_files pc: 183 op: STARTLINE (58)

    /** filesys.e:2787			file_counters[inst[2]][COUNT_FILES] += 1*/
    // SubProg count_files pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 187 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6233 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 191 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_11111 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_6233))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_6233)->dbl));
    else
    _3 = (object)(_6233 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 196 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _6236 = (object)*(((s1_ptr)_2)->base + 2);
    _6234 = NOVALUE;
    // SubProg count_files pc: 200 op: PLUS1 (93)
    if (IS_ATOM_INT(_6236)) {
        _6237 = _6236 + 1;
        if (_6237 > MAXINT){
            _6237 = NewDouble((eudouble)_6237);
        }
    }
    else
    _6237 = binary_op(PLUS, 1, _6236);
    _6236 = NOVALUE;
    // SubProg count_files pc: 204 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6237;
    if( _1 != _6237 ){
        DeRef(_1);
    }
    _6237 = NOVALUE;
    _6234 = NOVALUE;
    // SubProg count_files pc: 208 op: STARTLINE (58)

    /** filesys.e:2788			ifdef not UNIX then*/
    // SubProg count_files pc: 210 op: STARTLINE (58)

    /** filesys.e:2791				ext = fileext(dir_info[D_NAME])*/
    // SubProg count_files pc: 212 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6238 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg count_files pc: 216 op: ASSIGN (18)
    Ref(_6238);
    DeRef(_path_inlined_fileext_at_215_11157);
    _path_inlined_fileext_at_215_11157 = _6238;
    _6238 = NOVALUE;
    // SubProg count_files pc: 219 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 221 op: STARTLINE (58)

    /** filesys.e:1403		data = pathinfo(path)*/
    // SubProg count_files pc: 223 op: PROC (27)
    Ref(_path_inlined_fileext_at_215_11157);
    _0 = _data_inlined_fileext_at_218_11158;
    _data_inlined_fileext_at_218_11158 = _16pathinfo(_path_inlined_fileext_at_215_11157, 0);
    DeRef(_0);
    // SubProg count_files pc: 228 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 230 op: STARTLINE (58)

    /** filesys.e:1404		return data[4]*/
    // SubProg count_files pc: 232 op: RHS_SUBS (25)
    DeRef(_ext_11118);
    _2 = (object)SEQ_PTR(_data_inlined_fileext_at_218_11158);
    _ext_11118 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_ext_11118);
    // SubProg count_files pc: 236 op: NOP1 (159)
    // SubProg count_files pc: 237 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-fileext from count_files @ 215

// block var path_inlined_fileext_at_215_11157
    DeRef(_path_inlined_fileext_at_215_11157);
    _path_inlined_fileext_at_215_11157 = NOVALUE;

// block var data_inlined_fileext_at_218_11158
    DeRef(_data_inlined_fileext_at_218_11158);
    _data_inlined_fileext_at_218_11158 = NOVALUE;
    // SubProg count_files pc: 239 op: SEQUENCE_CHECK (97)
    // SubProg count_files pc: 241 op: STARTLINE (58)

    /** filesys.e:2794			pos = 0*/
    // SubProg count_files pc: 243 op: ASSIGN_I (113)
    _pos_11117 = 0;
    // SubProg count_files pc: 246 op: STARTLINE (58)

    /** filesys.e:2795			for i = 1 to length(file_counters[inst[2]][COUNT_TYPES]) do*/
    // SubProg count_files pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 250 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6239 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 254 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!IS_ATOM_INT(_6239)){
        _6240 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_6239)->dbl));
    }
    else{
        _6240 = (object)*(((s1_ptr)_2)->base + _6239);
    }
    // SubProg count_files pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6240);
    _6241 = (object)*(((s1_ptr)_2)->base + 4);
    _6240 = NOVALUE;
    // SubProg count_files pc: 262 op: LENGTH (42)
    if (IS_SEQUENCE(_6241)){
            _6242 = SEQ_PTR(_6241)->length;
    }
    else {
        _6242 = 1;
    }
    _6241 = NOVALUE;
    // SubProg count_files pc: 265 op: FOR_I (125)
    {
        object _i_11161;
        _i_11161 = 1;
L8: // addr: 272 pc: 265 sub: 11112 op: 125
        if (_i_11161 > _6242){
            goto L9; // [265] 322
        }
        // SubProg count_files pc: 272 op: STARTLINE (58)

        /** filesys.e:2796				if equal(file_counters[inst[2]][COUNT_TYPES][i][EXT_NAME], ext) then*/
        // SubProg count_files pc: 274 op: GLOBAL_INIT_CHECK (109)
        // SubProg count_files pc: 276 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_inst_11116);
        _6243 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg count_files pc: 280 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_16file_counters_11111);
        if (!IS_ATOM_INT(_6243)){
            _6244 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_6243)->dbl));
        }
        else{
            _6244 = (object)*(((s1_ptr)_2)->base + _6243);
        }
        // SubProg count_files pc: 284 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6244);
        _6245 = (object)*(((s1_ptr)_2)->base + 4);
        _6244 = NOVALUE;
        // SubProg count_files pc: 288 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6245);
        _6246 = (object)*(((s1_ptr)_2)->base + _i_11161);
        _6245 = NOVALUE;
        // SubProg count_files pc: 292 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6246);
        _6247 = (object)*(((s1_ptr)_2)->base + 1);
        _6246 = NOVALUE;
        // SubProg count_files pc: 296 op: PRIVATE_INIT_CHECK (30)
        // SubProg count_files pc: 298 op: EQUAL (153)
        if (_6247 == _ext_11118)
        _6248 = 1;
        else if (IS_ATOM_INT(_6247) && IS_ATOM_INT(_ext_11118))
        _6248 = 0;
        else
        _6248 = (compare(_6247, _ext_11118) == 0);
        _6247 = NOVALUE;
        // SubProg count_files pc: 302 op: IF (20)
        if (_6248 == 0)
        {
            _6248 = NOVALUE;
            goto LA; // [302] 315
        }
        else{
            _6248 = NOVALUE;
        }
        // SubProg count_files pc: 305 op: STARTLINE (58)

        /** filesys.e:2797					pos = i*/
        // SubProg count_files pc: 307 op: ASSIGN_I (113)
        _pos_11117 = _i_11161;
        // SubProg count_files pc: 310 op: STARTLINE (58)

        /** filesys.e:2798					exit*/
        // SubProg count_files pc: 312 op: EXIT (61)
        goto L9; // [312] 322
        // SubProg count_files pc: 314 op: NOP1 (159)
LA: // addr: 315 pc: 314 sub: 11112 op: 159
        // SubProg count_files pc: 315 op: STARTLINE (58)

        /** filesys.e:2800			end for*/
        // SubProg count_files pc: 317 op: ENDFOR_INT_UP1 (54)
        _i_11161 = _i_11161 + 1;
        goto L8; // [317] 272
L9: // addr: 322 pc: 317 sub: 11112 op: 54
        ;
    }
    // SubProg count_files pc: 322 op: STARTLINE (58)

    /** filesys.e:2802			if pos = 0 then*/
    // SubProg count_files pc: 324 op: EQUALS_IFW_I (121)
    if (_pos_11117 != 0)
    goto LB; // [324] 385
    // SubProg count_files pc: 328 op: STARTLINE (58)

    /** filesys.e:2803				file_counters[inst[2]][COUNT_TYPES] &= {{ext, 0, 0}}*/
    // SubProg count_files pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 332 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6250 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 336 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_11111 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_6250))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_6250)->dbl));
    else
    _3 = (object)(_6250 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 341 op: PRIVATE_INIT_CHECK (30)
    // SubProg count_files pc: 343 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_ext_11118);
    ((intptr_t*)_2)[1] = _ext_11118;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    _6253 = MAKE_SEQ(_1);
    // SubProg count_files pc: 349 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6253;
    _6254 = MAKE_SEQ(_1);
    _6253 = NOVALUE;
    // SubProg count_files pc: 353 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _6255 = (object)*(((s1_ptr)_2)->base + 4);
    _6251 = NOVALUE;
    // SubProg count_files pc: 357 op: CONCAT (15)
    if (IS_SEQUENCE(_6255) && IS_ATOM(_6254)) {
    }
    else if (IS_ATOM(_6255) && IS_SEQUENCE(_6254)) {
        Ref(_6255);
        Prepend(&_6256, _6254, _6255);
    }
    else {
        Concat((object_ptr)&_6256, _6255, _6254);
        _6255 = NOVALUE;
    }
    _6255 = NOVALUE;
    DeRefDS(_6254);
    _6254 = NOVALUE;
    // SubProg count_files pc: 361 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6256;
    if( _1 != _6256 ){
        DeRef(_1);
    }
    _6256 = NOVALUE;
    _6251 = NOVALUE;
    // SubProg count_files pc: 365 op: STARTLINE (58)

    /** filesys.e:2804				pos = length(file_counters[inst[2]][COUNT_TYPES])*/
    // SubProg count_files pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 369 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6257 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 373 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!IS_ATOM_INT(_6257)){
        _6258 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_6257)->dbl));
    }
    else{
        _6258 = (object)*(((s1_ptr)_2)->base + _6257);
    }
    // SubProg count_files pc: 377 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6258);
    _6259 = (object)*(((s1_ptr)_2)->base + 4);
    _6258 = NOVALUE;
    // SubProg count_files pc: 381 op: LENGTH (42)
    if (IS_SEQUENCE(_6259)){
            _pos_11117 = SEQ_PTR(_6259)->length;
    }
    else {
        _pos_11117 = 1;
    }
    _6259 = NOVALUE;
    // SubProg count_files pc: 384 op: NOP1 (159)
LB: // addr: 385 pc: 384 sub: 11112 op: 159
    // SubProg count_files pc: 385 op: STARTLINE (58)

    /** filesys.e:2807			file_counters[inst[2]][COUNT_TYPES][pos][EXT_COUNT] += 1*/
    // SubProg count_files pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 389 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6261 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 393 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_11111 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_6261))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_6261)->dbl));
    else
    _3 = (object)(_6261 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 398 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _6262 = NOVALUE;
    // SubProg count_files pc: 403 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_11117 + ((s1_ptr)_2)->base);
    _6262 = NOVALUE;
    // SubProg count_files pc: 408 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _6264 = (object)*(((s1_ptr)_2)->base + 2);
    _6262 = NOVALUE;
    // SubProg count_files pc: 412 op: PLUS1 (93)
    if (IS_ATOM_INT(_6264)) {
        _6265 = _6264 + 1;
        if (_6265 > MAXINT){
            _6265 = NewDouble((eudouble)_6265);
        }
    }
    else
    _6265 = binary_op(PLUS, 1, _6264);
    _6264 = NOVALUE;
    // SubProg count_files pc: 416 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6265;
    if( _1 != _6265 ){
        DeRef(_1);
    }
    _6265 = NOVALUE;
    _6262 = NOVALUE;
    // SubProg count_files pc: 420 op: STARTLINE (58)

    /** filesys.e:2808			file_counters[inst[2]][COUNT_TYPES][pos][EXT_SIZE] += dir_info[D_SIZE]*/
    // SubProg count_files pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg count_files pc: 424 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_inst_11116);
    _6266 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg count_files pc: 428 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_16file_counters_11111);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _16file_counters_11111 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_6266))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_6266)->dbl));
    else
    _3 = (object)(_6266 + ((s1_ptr)_2)->base);
    // SubProg count_files pc: 433 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(4 + ((s1_ptr)_2)->base);
    _6267 = NOVALUE;
    // SubProg count_files pc: 438 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(_pos_11117 + ((s1_ptr)_2)->base);
    _6267 = NOVALUE;
    // SubProg count_files pc: 443 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_dir_info_11115);
    _6269 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg count_files pc: 447 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _6270 = (object)*(((s1_ptr)_2)->base + 3);
    _6267 = NOVALUE;
    // SubProg count_files pc: 451 op: PLUS (11)
    if (IS_ATOM_INT(_6270) && IS_ATOM_INT(_6269)) {
        _6271 = _6270 + _6269;
        if ((object)((uintptr_t)_6271 + (uintptr_t)HIGH_BITS) >= 0){
            _6271 = NewDouble((eudouble)_6271);
        }
    }
    else {
        _6271 = binary_op(PLUS, _6270, _6269);
    }
    _6270 = NOVALUE;
    _6269 = NOVALUE;
    // SubProg count_files pc: 455 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6271;
    if( _1 != _6271 ){
        DeRef(_1);
    }
    _6271 = NOVALUE;
    _6267 = NOVALUE;
    // SubProg count_files pc: 459 op: NOP1 (159)
L7: // addr: 460 pc: 459 sub: 11112 op: 159
    // SubProg count_files pc: 460 op: STARTLINE (58)

    /** filesys.e:2811		return 0*/
    // SubProg count_files pc: 462 op: RETURNF (28)

// Exiting block BLOCK: count_files

// block var orig_path_11114
    DeRefDS(_orig_path_11114);

// block var dir_info_11115
    DeRefDS(_dir_info_11115);

// block var inst_11116
    DeRefDS(_inst_11116);

// block var pos_11117

// block var ext_11118
    DeRef(_ext_11118);
    _6250 = NOVALUE;
    _6266 = NOVALUE;
    _6257 = NOVALUE;
    _6239 = NOVALUE;
    _6243 = NOVALUE;
    _6261 = NOVALUE;
    _6241 = NOVALUE;
    _6228 = NOVALUE;
    _6233 = NOVALUE;
    _6259 = NOVALUE;
    _6220 = NOVALUE;
    return 0;
    // SubProg count_files pc: 466 op: BADRETURNF (43)
    ;
}



// 0x68BA7653
