// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _50check_coverage()
{
// skipping _25043  name type: 0
    object _25042 = NOVALUE; // 48320 25042
    object _25041 = NOVALUE; // 48319 25041
    object _25040 = NOVALUE; // 48318 25040
    object _25039 = NOVALUE; // 48315 25039
    object _25038 = NOVALUE; // 48313 25038
    object _25037 = NOVALUE; // 48312 25037
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:45		for i = length( file_coverage ) + 1 to length( known_files ) do*/
    // SubProg check_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_coverage pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_50file_coverage_48300)){
            _25037 = SEQ_PTR(_50file_coverage_48300)->length;
    }
    else {
        _25037 = 1;
    }
    // SubProg check_coverage pc: 8 op: PLUS1 (93)
    _25038 = _25037 + 1;
    _25037 = NOVALUE;
    // SubProg check_coverage pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_coverage pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _25039 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _25039 = 1;
    }
    // SubProg check_coverage pc: 17 op: FOR (21)
    {
        object _i_48311;
        _i_48311 = _25038;
L1: // addr: 24 pc: 17 sub: 48308 op: 21
        if (_i_48311 > _25039){
            goto L2; // [17] 58
        }
        // SubProg check_coverage pc: 24 op: STARTLINE (58)

        /** coverage.e:46			file_coverage &= find( canonical_path( known_files[i],,1 ), covered_files )*/
        // SubProg check_coverage pc: 26 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35known_files_14157);
        _25040 = (object)*(((s1_ptr)_2)->base + _i_48311);
        // SubProg check_coverage pc: 34 op: PROC (27)
        Ref(_25040);
        _25041 = _18canonical_path(_25040, 0, 1);
        _25040 = NOVALUE;
        // SubProg check_coverage pc: 40 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 42 op: FIND_FROM (176)
        _25042 = find_from(_25041, _50covered_files_48299, 1);
        DeRef(_25041);
        _25041 = NOVALUE;
        // SubProg check_coverage pc: 47 op: CONCAT (15)
        Append(&_50file_coverage_48300, _50file_coverage_48300, _25042);
        _25042 = NOVALUE;
        // SubProg check_coverage pc: 51 op: STARTLINE (58)

        /** coverage.e:47		end for*/
        // SubProg check_coverage pc: 53 op: ENDFOR_INT_UP1 (54)
        _i_48311 = _i_48311 + 1;
        goto L1; // [53] 24
L2: // addr: 58 pc: 53 sub: 48308 op: 54
        ;
    }
    // SubProg check_coverage pc: 58 op: STARTLINE (58)

    /** coverage.e:48	end procedure*/
    // SubProg check_coverage pc: 60 op: RETURNP (29)

// Exiting block BLOCK: check_coverage
    DeRef(_25038);
    _25038 = NOVALUE;
    return;
    // SubProg check_coverage pc: 63 op: BADRETURNF (43)
    ;
}


void _50init_coverage()
{
    object _cmd_48335 = NOVALUE;
// skipping _25061  name type: 0
    object _25060 = NOVALUE; // 48356 25060
    object _25059 = NOVALUE; // 48353 25059
// skipping _25058  name type: 0
    object _25057 = NOVALUE; // 48350 25057
    object _25056 = NOVALUE; // 48347 25056
    object _25055 = NOVALUE; // 48345 25055
// skipping _25054  name type: 0
    object _25053 = NOVALUE; // 48342 25053
    object _25051 = NOVALUE; // 48340 25051
    object _25050 = NOVALUE; // 48339 25050
// skipping _25049  name type: 0
    object _25048 = NOVALUE; // 48334 25048
    object _25047 = NOVALUE; // 48332 25047
    object _25046 = NOVALUE; // 48331 25046
    object _25045 = NOVALUE; // 48330 25045
    object _25044 = NOVALUE; // 48327 25044
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:54		if initialized_coverage then*/
    // SubProg init_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 5 op: IF (20)
    if (_50initialized_coverage_48307 == 0)
    {
        goto L1; // [5] 14
    }
    else{
    }
    // SubProg init_coverage pc: 8 op: STARTLINE (58)

    /** coverage.e:55			return*/
    // SubProg init_coverage pc: 10 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: init_coverage
    return;
    // SubProg init_coverage pc: 13 op: NOP1 (159)
L1: // addr: 14 pc: 13 sub: 48322 op: 159
    // SubProg init_coverage pc: 14 op: STARTLINE (58)

    /** coverage.e:57		initialized_coverage = 1*/
    // SubProg init_coverage pc: 16 op: ASSIGN_I (113)
    _50initialized_coverage_48307 = 1;
    // SubProg init_coverage pc: 19 op: STARTLINE (58)

    /** coverage.e:58		for i = 1 to length( file_coverage ) do*/
    // SubProg init_coverage pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_50file_coverage_48300)){
            _25044 = SEQ_PTR(_50file_coverage_48300)->length;
    }
    else {
        _25044 = 1;
    }
    // SubProg init_coverage pc: 26 op: FOR_I (125)
    {
        object _i_48326;
        _i_48326 = 1;
L2: // addr: 33 pc: 26 sub: 48322 op: 125
        if (_i_48326 > _25044){
            goto L3; // [26] 67
        }
        // SubProg init_coverage pc: 33 op: STARTLINE (58)

        /** coverage.e:59			file_coverage[i] = find( canonical_path( known_files[i],,1 ), covered_files )*/
        // SubProg init_coverage pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35known_files_14157);
        _25045 = (object)*(((s1_ptr)_2)->base + _i_48326);
        // SubProg init_coverage pc: 43 op: PROC (27)
        Ref(_25045);
        _25046 = _18canonical_path(_25045, 0, 1);
        _25045 = NOVALUE;
        // SubProg init_coverage pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 51 op: FIND_FROM (176)
        _25047 = find_from(_25046, _50covered_files_48299, 1);
        DeRef(_25046);
        _25046 = NOVALUE;
        // SubProg init_coverage pc: 56 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_50file_coverage_48300);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50file_coverage_48300 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_48326);
        *(intptr_t *)_2 = _25047;
        if( _1 != _25047 ){
        }
        _25047 = NOVALUE;
        // SubProg init_coverage pc: 60 op: STARTLINE (58)

        /** coverage.e:60		end for*/
        // SubProg init_coverage pc: 62 op: ENDFOR_INT_UP1 (54)
        _i_48326 = _i_48326 + 1;
        goto L2; // [62] 33
L3: // addr: 67 pc: 62 sub: 48322 op: 54
        ;
    }
    // SubProg init_coverage pc: 67 op: STARTLINE (58)

    /** coverage.e:62		if equal( coverage_db_name, "" ) then*/
    // SubProg init_coverage pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 71 op: EQUAL (153)
    if (_50coverage_db_name_48301 == _21936)
    _25048 = 1;
    else if (IS_ATOM_INT(_50coverage_db_name_48301) && IS_ATOM_INT(_21936))
    _25048 = 0;
    else
    _25048 = (compare(_50coverage_db_name_48301, _21936) == 0);
    // SubProg init_coverage pc: 75 op: IF (20)
    if (_25048 == 0)
    {
        _25048 = NOVALUE;
        goto L4; // [75] 105
    }
    else{
        _25048 = NOVALUE;
    }
    // SubProg init_coverage pc: 78 op: STARTLINE (58)

    /** coverage.e:63			sequence cmd = command_line()*/
    // SubProg init_coverage pc: 80 op: COMMAND_LINE (100)
    DeRef(_cmd_48335);
    _cmd_48335 = Command_Line();
    // SubProg init_coverage pc: 82 op: STARTLINE (58)

    /** coverage.e:64			coverage_db_name = canonical_path( filebase( cmd[2] ) & "-cvg.edb" )*/
    // SubProg init_coverage pc: 84 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_48335);
    _25050 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg init_coverage pc: 88 op: PROC (27)
    RefDS(_25050);
    _25051 = _18filebase(_25050);
    _25050 = NOVALUE;
    // SubProg init_coverage pc: 92 op: CONCAT (15)
    if (IS_SEQUENCE(_25051) && IS_ATOM(_25052)) {
    }
    else if (IS_ATOM(_25051) && IS_SEQUENCE(_25052)) {
        Ref(_25051);
        Prepend(&_25053, _25052, _25051);
    }
    else {
        Concat((object_ptr)&_25053, _25051, _25052);
        DeRef(_25051);
        _25051 = NOVALUE;
    }
    DeRef(_25051);
    _25051 = NOVALUE;
    // SubProg init_coverage pc: 96 op: PROC (27)
    _0 = _18canonical_path(_25053, 0, 0);
    DeRefDS(_50coverage_db_name_48301);
    _50coverage_db_name_48301 = _0;
    _25053 = NOVALUE;
    // SubProg init_coverage pc: 102 op: SEQUENCE_CHECK (97)
    // SubProg init_coverage pc: 104 op: NOP1 (159)
L4: // addr: 105 pc: 104 sub: 48322 op: 159
    // SubProg init_coverage pc: 105 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cmd_48335
    DeRef(_cmd_48335);
    _cmd_48335 = NOVALUE;
    // SubProg init_coverage pc: 107 op: STARTLINE (58)

    /** coverage.e:67		if coverage_erase and file_exists( coverage_db_name ) then*/
    // SubProg init_coverage pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 111 op: SC1_AND_IF (146)
    if (_50coverage_erase_48302 == 0) {
        goto L5; // [111] 151
    }
    // SubProg init_coverage pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 117 op: PROC (27)
    RefDS(_50coverage_db_name_48301);
    _25056 = _18file_exists(_50coverage_db_name_48301);
    // SubProg init_coverage pc: 121 op: NOP1 (159)
    // SubProg init_coverage pc: 122 op: IF (20)
    if (_25056 == 0) {
        DeRef(_25056);
        _25056 = NOVALUE;
        goto L5; // [122] 151
    }
    else {
        if (!IS_ATOM_INT(_25056) && DBL_PTR(_25056)->dbl == 0.0){
            DeRef(_25056);
            _25056 = NOVALUE;
            goto L5; // [122] 151
        }
        DeRef(_25056);
        _25056 = NOVALUE;
    }
    DeRef(_25056);
    _25056 = NOVALUE;
    // SubProg init_coverage pc: 125 op: STARTLINE (58)

    /** coverage.e:68			if not delete_file( coverage_db_name ) then*/
    // SubProg init_coverage pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 129 op: PROC (27)
    RefDS(_50coverage_db_name_48301);
    _25057 = _18delete_file(_50coverage_db_name_48301);
    // SubProg init_coverage pc: 133 op: NOT_IFW (108)
    if (IS_ATOM_INT(_25057)) {
        if (_25057 != 0){
            DeRef(_25057);
            _25057 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    else {
        if (DBL_PTR(_25057)->dbl != 0.0){
            DeRef(_25057);
            _25057 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    DeRef(_25057);
    _25057 = NOVALUE;
    // SubProg init_coverage pc: 136 op: STARTLINE (58)

    /** coverage.e:69				CompileErr( 335, { coverage_db_name } )*/
    // SubProg init_coverage pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 140 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_50coverage_db_name_48301);
    ((intptr_t*)_2)[1] = _50coverage_db_name_48301;
    _25059 = MAKE_SEQ(_1);
    // SubProg init_coverage pc: 144 op: PROC (27)
    _49CompileErr(335, _25059, 0);
    _25059 = NOVALUE;
    // SubProg init_coverage pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 48322 op: 159
    // SubProg init_coverage pc: 150 op: NOP1 (159)
L5: // addr: 151 pc: 150 sub: 48322 op: 159
    // SubProg init_coverage pc: 151 op: STARTLINE (58)

    /** coverage.e:73		if db_open( coverage_db_name ) = DB_OK then*/
    // SubProg init_coverage pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 155 op: PROC (27)
    RefDS(_50coverage_db_name_48301);
    _25060 = _44db_open(_50coverage_db_name_48301, 0);
    // SubProg init_coverage pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 162 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25060, 0)){
        DeRef(_25060);
        _25060 = NOVALUE;
        goto L7; // [162] 175
    }
    DeRef(_25060);
    _25060 = NOVALUE;
    // SubProg init_coverage pc: 166 op: STARTLINE (58)

    /** coverage.e:74			read_coverage_db()*/
    // SubProg init_coverage pc: 168 op: PROC (27)
    _50read_coverage_db();
    // SubProg init_coverage pc: 170 op: STARTLINE (58)

    /** coverage.e:75			db_close()*/
    // SubProg init_coverage pc: 172 op: PROC (27)
    _44db_close();
    // SubProg init_coverage pc: 174 op: NOP1 (159)
L7: // addr: 175 pc: 174 sub: 48322 op: 159
    // SubProg init_coverage pc: 175 op: STARTLINE (58)

    /** coverage.e:77	end procedure*/
    // SubProg init_coverage pc: 177 op: RETURNP (29)

// Exiting block BLOCK: init_coverage
    return;
    // SubProg init_coverage pc: 180 op: BADRETURNF (43)
    ;
}


void _50write_map(object _coverage_48364, object _table_name_48365)
{
    object _keys_48387 = NOVALUE;
    object _rec_48392 = NOVALUE;
    object _val_48396 = NOVALUE;
    object _31699 = NOVALUE; // 63906 31699
    object _25077 = NOVALUE; // 48404 25077
// skipping _25076  name type: 0
// skipping _25075  name type: 0
    object _25074 = NOVALUE; // 48397 25074
// skipping _25073  name type: 0
    object _25072 = NOVALUE; // 48394 25072
    object _25071 = NOVALUE; // 48391 25071
// skipping _25070  name type: 0
    object _25069 = NOVALUE; // 48386 25069
    object _25068 = NOVALUE; // 48383 25068
// skipping _25067  name type: 0
    object _25066 = NOVALUE; // 48379 25066
// skipping _25065  name type: 0
    object _25064 = NOVALUE; // 48374 25064
// skipping _25063  name type: 0
    object _25062 = NOVALUE; // 48369 25062
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_map pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg write_map pc: 3 op: STARTLINE (58)

    /** coverage.e:80		if db_select( coverage_db_name, DB_LOCK_EXCLUSIVE) = DB_OK then*/
    // SubProg write_map pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 9 op: PROC (27)
    RefDS(_50coverage_db_name_48301);
    _25062 = _44db_select(_50coverage_db_name_48301, 2);
    // SubProg write_map pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 16 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25062, 0)){
        DeRef(_25062);
        _25062 = NOVALUE;
        goto L1; // [16] 61
    }
    DeRef(_25062);
    _25062 = NOVALUE;
    // SubProg write_map pc: 20 op: STARTLINE (58)

    /** coverage.e:81			if db_select_table( table_name ) != DB_OK then*/
    // SubProg write_map pc: 22 op: PROC (27)
    RefDS(_table_name_48365);
    _25064 = _44db_select_table(_table_name_48365);
    // SubProg write_map pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 28 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25064, 0)){
        DeRef(_25064);
        _25064 = NOVALUE;
        goto L2; // [28] 73
    }
    DeRef(_25064);
    _25064 = NOVALUE;
    // SubProg write_map pc: 32 op: STARTLINE (58)

    /** coverage.e:82				if db_create_table( table_name ) != DB_OK then*/
    // SubProg write_map pc: 34 op: PROC (27)
    RefDS(_table_name_48365);
    _25066 = _44db_create_table(_table_name_48365, 50);
    // SubProg write_map pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 41 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25066, 0)){
        DeRef(_25066);
        _25066 = NOVALUE;
        goto L2; // [41] 73
    }
    DeRef(_25066);
    _25066 = NOVALUE;
    // SubProg write_map pc: 45 op: STARTLINE (58)

    /** coverage.e:83					CompileErr( 336, {table_name} )*/
    // SubProg write_map pc: 47 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_48365);
    ((intptr_t*)_2)[1] = _table_name_48365;
    _25068 = MAKE_SEQ(_1);
    // SubProg write_map pc: 51 op: PROC (27)
    _49CompileErr(336, _25068, 0);
    _25068 = NOVALUE;
    // SubProg write_map pc: 56 op: NOP1 (159)
    // SubProg write_map pc: 57 op: NOP1 (159)
    // SubProg write_map pc: 58 op: ELSE (23)
    goto L2; // [58] 73
    // SubProg write_map pc: 60 op: NOP1 (159)
L1: // addr: 61 pc: 60 sub: 48361 op: 159
    // SubProg write_map pc: 61 op: STARTLINE (58)

    /** coverage.e:87			CompileErr( 336, {table_name} )*/
    // SubProg write_map pc: 63 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_48365);
    ((intptr_t*)_2)[1] = _table_name_48365;
    _25069 = MAKE_SEQ(_1);
    // SubProg write_map pc: 67 op: PROC (27)
    _49CompileErr(336, _25069, 0);
    _25069 = NOVALUE;
    // SubProg write_map pc: 72 op: NOP1 (159)
L2: // addr: 73 pc: 72 sub: 48361 op: 159
    // SubProg write_map pc: 73 op: STARTLINE (58)

    /** coverage.e:90		sequence keys = map:keys( coverage )*/
    // SubProg write_map pc: 75 op: PROC (27)
    Ref(_coverage_48364);
    _0 = _keys_48387;
    _keys_48387 = _28keys(_coverage_48364, 0);
    DeRef(_0);
    // SubProg write_map pc: 80 op: SEQUENCE_CHECK (97)
    // SubProg write_map pc: 82 op: STARTLINE (58)

    /** coverage.e:91		for i = 1 to length( keys ) do*/
    // SubProg write_map pc: 84 op: LENGTH (42)
    if (IS_SEQUENCE(_keys_48387)){
            _25071 = SEQ_PTR(_keys_48387)->length;
    }
    else {
        _25071 = 1;
    }
    // SubProg write_map pc: 87 op: FOR_I (125)
    {
        object _i_48390;
        _i_48390 = 1;
L3: // addr: 94 pc: 87 sub: 48361 op: 125
        if (_i_48390 > _25071){
            goto L4; // [87] 167
        }
        // SubProg write_map pc: 94 op: STARTLINE (58)

        /** coverage.e:92			integer rec = db_find_key( keys[i] )*/
        // SubProg write_map pc: 96 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_keys_48387);
        _25072 = (object)*(((s1_ptr)_2)->base + _i_48390);
        // SubProg write_map pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_map pc: 102 op: PROC (27)
        Ref(_25072);
        RefDS(_44current_table_name_16087);
        _rec_48392 = _44db_find_key(_25072, _44current_table_name_16087);
        _25072 = NOVALUE;
        // SubProg write_map pc: 107 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_rec_48392)) {
            _1 = (object)(DBL_PTR(_rec_48392)->dbl);
            DeRefDS(_rec_48392);
            _rec_48392 = _1;
        }
        // SubProg write_map pc: 109 op: STARTLINE (58)

        /** coverage.e:93			integer val = map:get( coverage, keys[i] )*/
        // SubProg write_map pc: 111 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_keys_48387);
        _25074 = (object)*(((s1_ptr)_2)->base + _i_48390);
        // SubProg write_map pc: 115 op: PROC (27)
        Ref(_coverage_48364);
        Ref(_25074);
        _val_48396 = _28get(_coverage_48364, _25074, 0);
        _25074 = NOVALUE;
        // SubProg write_map pc: 121 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_val_48396)) {
            _1 = (object)(DBL_PTR(_val_48396)->dbl);
            DeRefDS(_val_48396);
            _val_48396 = _1;
        }
        // SubProg write_map pc: 123 op: STARTLINE (58)

        /** coverage.e:94			if rec > 0 then*/
        // SubProg write_map pc: 125 op: GREATER_IFW_I (124)
        if (_rec_48392 <= 0)
        goto L5; // [125] 141
        // SubProg write_map pc: 129 op: STARTLINE (58)

        /** coverage.e:95				db_replace_data( rec, val )*/
        // SubProg write_map pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_map pc: 133 op: PROC (27)
        RefDS(_44current_table_name_16087);
        _44db_replace_data(_rec_48392, _val_48396, _44current_table_name_16087);
        // SubProg write_map pc: 138 op: ELSE (23)
        goto L6; // [138] 158
        // SubProg write_map pc: 140 op: NOP1 (159)
L5: // addr: 141 pc: 140 sub: 48361 op: 159
        // SubProg write_map pc: 141 op: STARTLINE (58)

        /** coverage.e:97				db_insert( keys[i], val )*/
        // SubProg write_map pc: 143 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_keys_48387);
        _25077 = (object)*(((s1_ptr)_2)->base + _i_48390);
        // SubProg write_map pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_map pc: 149 op: PROC (27)
        Ref(_25077);
        RefDS(_44current_table_name_16087);
        _31699 = _44db_insert(_25077, _val_48396, _44current_table_name_16087);
        _25077 = NOVALUE;
        // SubProg write_map pc: 155 op: DEREF_TEMP (208)
        DeRef(_31699);
        _31699 = NOVALUE;
        // SubProg write_map pc: 157 op: NOP1 (159)
L6: // addr: 158 pc: 157 sub: 48361 op: 159
        // SubProg write_map pc: 158 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var rec_48392

// block var val_48396
        // SubProg write_map pc: 160 op: STARTLINE (58)

        /** coverage.e:99		end for*/
        // SubProg write_map pc: 162 op: ENDFOR_INT_UP1 (54)
        _i_48390 = _i_48390 + 1;
        goto L3; // [162] 94
L4: // addr: 167 pc: 162 sub: 48361 op: 54
        ;
    }
    // SubProg write_map pc: 167 op: STARTLINE (58)

    /** coverage.e:101	end procedure*/
    // SubProg write_map pc: 169 op: RETURNP (29)

// Exiting block BLOCK: write_map

// block var coverage_48364
    DeRef(_coverage_48364);

// block var table_name_48365
    DeRefDS(_table_name_48365);

// block var keys_48387
    DeRef(_keys_48387);
    return;
    // SubProg write_map pc: 172 op: BADRETURNF (43)
    ;
}


object _50write_coverage_db()
{
    object _25092 = NOVALUE; // 48434 25092
    object _25091 = NOVALUE; // 48433 25091
    object _25090 = NOVALUE; // 48432 25090
    object _25089 = NOVALUE; // 48431 25089
    object _25088 = NOVALUE; // 48430 25088
    object _25087 = NOVALUE; // 48429 25087
    object _25086 = NOVALUE; // 48428 25086
    object _25085 = NOVALUE; // 48424 25085
// skipping _25083  name type: 0
    object _25082 = NOVALUE; // 48421 25082
// skipping _25081  name type: 0
    object _25080 = NOVALUE; // 48416 25080
// skipping _25079  name type: 0
    object _25078 = NOVALUE; // 48410 25078
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_coverage_db pc: 1 op: STARTLINE (58)

    /** coverage.e:105		if wrote_coverage then*/
    // SubProg write_coverage_db pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 5 op: IF (20)
    if (_50wrote_coverage_48405 == 0)
    {
        goto L1; // [5] 15
    }
    else{
    }
    // SubProg write_coverage_db pc: 8 op: STARTLINE (58)

    /** coverage.e:106			return 1*/
    // SubProg write_coverage_db pc: 10 op: RETURNF (28)

// Exiting block BLOCK: write_coverage_db
    return 1;
    // SubProg write_coverage_db pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 48406 op: 159
    // SubProg write_coverage_db pc: 15 op: STARTLINE (58)

    /** coverage.e:108		wrote_coverage = 1*/
    // SubProg write_coverage_db pc: 17 op: ASSIGN_I (113)
    _50wrote_coverage_48405 = 1;
    // SubProg write_coverage_db pc: 20 op: STARTLINE (58)

    /** coverage.e:109		init_coverage()*/
    // SubProg write_coverage_db pc: 22 op: PROC (27)
    _50init_coverage();
    // SubProg write_coverage_db pc: 24 op: STARTLINE (58)

    /** coverage.e:110		if not length( covered_files ) then*/
    // SubProg write_coverage_db pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_50covered_files_48299)){
            _25078 = SEQ_PTR(_50covered_files_48299)->length;
    }
    else {
        _25078 = 1;
    }
    // SubProg write_coverage_db pc: 31 op: NOT_IFW (108)
    if (_25078 != 0)
    goto L2; // [31] 41
    _25078 = NOVALUE;
    // SubProg write_coverage_db pc: 34 op: STARTLINE (58)

    /** coverage.e:111			return 1*/
    // SubProg write_coverage_db pc: 36 op: RETURNF (28)

// Exiting block BLOCK: write_coverage_db
    return 1;
    // SubProg write_coverage_db pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 48406 op: 159
    // SubProg write_coverage_db pc: 41 op: STARTLINE (58)

    /** coverage.e:114		if DB_OK != db_open( coverage_db_name, DB_LOCK_EXCLUSIVE) then*/
    // SubProg write_coverage_db pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 49 op: PROC (27)
    RefDS(_50coverage_db_name_48301);
    _25080 = _44db_open(_50coverage_db_name_48301, 2);
    // SubProg write_coverage_db pc: 54 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, 0, _25080)){
        DeRef(_25080);
        _25080 = NOVALUE;
        goto L3; // [54] 95
    }
    DeRef(_25080);
    _25080 = NOVALUE;
    // SubProg write_coverage_db pc: 58 op: STARTLINE (58)

    /** coverage.e:115			if DB_OK != db_create( coverage_db_name ) then*/
    // SubProg write_coverage_db pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 64 op: PROC (27)
    RefDS(_50coverage_db_name_48301);
    _25082 = _44db_create(_50coverage_db_name_48301, 0, 5, 5);
    // SubProg write_coverage_db pc: 71 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, 0, _25082)){
        DeRef(_25082);
        _25082 = NOVALUE;
        goto L4; // [71] 94
    }
    DeRef(_25082);
    _25082 = NOVALUE;
    // SubProg write_coverage_db pc: 75 op: STARTLINE (58)

    /** coverage.e:116				printf(2, "error opening %s\n", {coverage_db_name})*/
    // SubProg write_coverage_db pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 79 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_50coverage_db_name_48301);
    ((intptr_t*)_2)[1] = _50coverage_db_name_48301;
    _25085 = MAKE_SEQ(_1);
    // SubProg write_coverage_db pc: 83 op: PRINTF (38)
    EPrintf(2, _25084, _25085);
    DeRefDS(_25085);
    _25085 = NOVALUE;
    // SubProg write_coverage_db pc: 87 op: STARTLINE (58)

    /** coverage.e:117				return 0*/
    // SubProg write_coverage_db pc: 89 op: RETURNF (28)

// Exiting block BLOCK: write_coverage_db
    return 0;
    // SubProg write_coverage_db pc: 93 op: NOP1 (159)
L4: // addr: 94 pc: 93 sub: 48406 op: 159
    // SubProg write_coverage_db pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 48406 op: 159
    // SubProg write_coverage_db pc: 95 op: STARTLINE (58)

    /** coverage.e:121		process_lines()*/
    // SubProg write_coverage_db pc: 97 op: PROC (27)
    _50process_lines();
    // SubProg write_coverage_db pc: 99 op: STARTLINE (58)

    /** coverage.e:122		for tx = 1 to length( routine_map ) do*/
    // SubProg write_coverage_db pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_50routine_map_48305)){
            _25086 = SEQ_PTR(_50routine_map_48305)->length;
    }
    else {
        _25086 = 1;
    }
    // SubProg write_coverage_db pc: 106 op: FOR_I (125)
    {
        object _tx_48427;
        _tx_48427 = 1;
L5: // addr: 113 pc: 106 sub: 48406 op: 125
        if (_tx_48427 > _25086){
            goto L6; // [106] 164
        }
        // SubProg write_coverage_db pc: 113 op: STARTLINE (58)

        /** coverage.e:123			write_map( routine_map[tx], 'r' & covered_files[tx] )*/
        // SubProg write_coverage_db pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 117 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50routine_map_48305);
        _25087 = (object)*(((s1_ptr)_2)->base + _tx_48427);
        // SubProg write_coverage_db pc: 121 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 123 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50covered_files_48299);
        _25088 = (object)*(((s1_ptr)_2)->base + _tx_48427);
        // SubProg write_coverage_db pc: 127 op: CONCAT (15)
        if (IS_SEQUENCE(114) && IS_ATOM(_25088)) {
        }
        else if (IS_ATOM(114) && IS_SEQUENCE(_25088)) {
            Prepend(&_25089, _25088, 114);
        }
        else {
            Concat((object_ptr)&_25089, 114, _25088);
        }
        _25088 = NOVALUE;
        // SubProg write_coverage_db pc: 131 op: PROC (27)
        Ref(_25087);
        _50write_map(_25087, _25089);
        _25087 = NOVALUE;
        _25089 = NOVALUE;
        // SubProg write_coverage_db pc: 135 op: STARTLINE (58)

        /** coverage.e:124			write_map( line_map[tx],    'l' & covered_files[tx] )*/
        // SubProg write_coverage_db pc: 137 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 139 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50line_map_48304);
        _25090 = (object)*(((s1_ptr)_2)->base + _tx_48427);
        // SubProg write_coverage_db pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 145 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50covered_files_48299);
        _25091 = (object)*(((s1_ptr)_2)->base + _tx_48427);
        // SubProg write_coverage_db pc: 149 op: CONCAT (15)
        if (IS_SEQUENCE(108) && IS_ATOM(_25091)) {
        }
        else if (IS_ATOM(108) && IS_SEQUENCE(_25091)) {
            Prepend(&_25092, _25091, 108);
        }
        else {
            Concat((object_ptr)&_25092, 108, _25091);
        }
        _25091 = NOVALUE;
        // SubProg write_coverage_db pc: 153 op: PROC (27)
        Ref(_25090);
        _50write_map(_25090, _25092);
        _25090 = NOVALUE;
        _25092 = NOVALUE;
        // SubProg write_coverage_db pc: 157 op: STARTLINE (58)

        /** coverage.e:125		end for*/
        // SubProg write_coverage_db pc: 159 op: ENDFOR_INT_UP1 (54)
        _tx_48427 = _tx_48427 + 1;
        goto L5; // [159] 113
L6: // addr: 164 pc: 159 sub: 48406 op: 54
        ;
    }
    // SubProg write_coverage_db pc: 164 op: STARTLINE (58)

    /** coverage.e:127		db_close()*/
    // SubProg write_coverage_db pc: 166 op: PROC (27)
    _44db_close();
    // SubProg write_coverage_db pc: 168 op: STARTLINE (58)

    /** coverage.e:129		routine_map = {}*/
    // SubProg write_coverage_db pc: 170 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_50routine_map_48305);
    _50routine_map_48305 = _21936;
    // SubProg write_coverage_db pc: 173 op: SEQUENCE_CHECK (97)
    // SubProg write_coverage_db pc: 175 op: STARTLINE (58)

    /** coverage.e:130		line_map    = {}*/
    // SubProg write_coverage_db pc: 177 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_50line_map_48304);
    _50line_map_48304 = _21936;
    // SubProg write_coverage_db pc: 180 op: SEQUENCE_CHECK (97)
    // SubProg write_coverage_db pc: 182 op: STARTLINE (58)

    /** coverage.e:131		return 1*/
    // SubProg write_coverage_db pc: 184 op: RETURNF (28)

// Exiting block BLOCK: write_coverage_db
    return 1;
    // SubProg write_coverage_db pc: 188 op: BADRETURNF (43)
    ;
}


void _50read_coverage_db()
{
    object _tables_48438 = NOVALUE;
    object _name_48444 = NOVALUE;
    object _fx_48448 = NOVALUE;
    object _the_map_48455 = NOVALUE;
    object _31698 = NOVALUE; // 63905 31698
    object _25108 = NOVALUE; // 48470 25108
    object _25107 = NOVALUE; // 48468 25107
    object _25106 = NOVALUE; // 48466 25106
// skipping _25105  name type: 0
// skipping _25104  name type: 0
// skipping _25103  name type: 0
    object _25102 = NOVALUE; // 48458 25102
    object _25101 = NOVALUE; // 48457 25101
    object _25100 = NOVALUE; // 48453 25100
// skipping _25099  name type: 0
// skipping _25098  name type: 0
// skipping _25097  name type: 0
    object _25096 = NOVALUE; // 48446 25096
    object _25095 = NOVALUE; // 48445 25095
    object _25094 = NOVALUE; // 48443 25094
// skipping _25093  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_coverage_db pc: 1 op: STARTLINE (58)

    /** coverage.e:135		sequence tables = db_table_list()*/
    // SubProg read_coverage_db pc: 3 op: PROC (27)
    _0 = _tables_48438;
    _tables_48438 = _44db_table_list();
    DeRef(_0);
    // SubProg read_coverage_db pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg read_coverage_db pc: 8 op: STARTLINE (58)

    /** coverage.e:137		for i = 1 to length( tables ) do*/
    // SubProg read_coverage_db pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_tables_48438)){
            _25094 = SEQ_PTR(_tables_48438)->length;
    }
    else {
        _25094 = 1;
    }
    // SubProg read_coverage_db pc: 13 op: FOR_I (125)
    {
        object _i_48442;
        _i_48442 = 1;
L1: // addr: 20 pc: 13 sub: 48436 op: 125
        if (_i_48442 > _25094){
            goto L2; // [13] 157
        }
        // SubProg read_coverage_db pc: 20 op: STARTLINE (58)

        /** coverage.e:138			sequence name = tables[i][2..$]*/
        // SubProg read_coverage_db pc: 22 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48438);
        _25095 = (object)*(((s1_ptr)_2)->base + _i_48442);
        // SubProg read_coverage_db pc: 26 op: LENGTH (42)
        if (IS_SEQUENCE(_25095)){
                _25096 = SEQ_PTR(_25095)->length;
        }
        else {
            _25096 = 1;
        }
        // SubProg read_coverage_db pc: 29 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_name_48444;
        RHS_Slice(_25095, 2, _25096);
        _25095 = NOVALUE;
        // SubProg read_coverage_db pc: 34 op: STARTLINE (58)

        /** coverage.e:139			integer fx = find( name, covered_files )*/
        // SubProg read_coverage_db pc: 36 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 38 op: FIND_FROM (176)
        _fx_48448 = find_from(_name_48444, _50covered_files_48299, 1);
        // SubProg read_coverage_db pc: 43 op: STARTLINE (58)

        /** coverage.e:140			if not fx then*/
        // SubProg read_coverage_db pc: 45 op: NOT_IFW (108)
        if (_fx_48448 != 0)
        goto L3; // [45] 55
        // SubProg read_coverage_db pc: 48 op: STARTLINE (58)

        /** coverage.e:141				continue*/
        // SubProg read_coverage_db pc: 50 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var name_48444
        DeRefDS(_name_48444);
        _name_48444 = NOVALUE;

// block var fx_48448

// block var the_map_48455
        DeRef(_the_map_48455);
        _the_map_48455 = NOVALUE;
        // SubProg read_coverage_db pc: 52 op: ELSE (23)
        goto L4; // [52] 152
        // SubProg read_coverage_db pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 48436 op: 159
        // SubProg read_coverage_db pc: 55 op: STARTLINE (58)

        /** coverage.e:144			db_select_table( tables[i] )*/
        // SubProg read_coverage_db pc: 57 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48438);
        _25100 = (object)*(((s1_ptr)_2)->base + _i_48442);
        // SubProg read_coverage_db pc: 61 op: PROC (27)
        Ref(_25100);
        _31698 = _44db_select_table(_25100);
        _25100 = NOVALUE;
        // SubProg read_coverage_db pc: 65 op: DEREF_TEMP (208)
        DeRef(_31698);
        _31698 = NOVALUE;
        // SubProg read_coverage_db pc: 67 op: STARTLINE (58)

        /** coverage.e:146			if tables[i][1] = 'r' then*/
        // SubProg read_coverage_db pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48438);
        _25101 = (object)*(((s1_ptr)_2)->base + _i_48442);
        // SubProg read_coverage_db pc: 73 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25101);
        _25102 = (object)*(((s1_ptr)_2)->base + 1);
        _25101 = NOVALUE;
        // SubProg read_coverage_db pc: 77 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25102, 114)){
            _25102 = NOVALUE;
            goto L5; // [77] 92
        }
        _25102 = NOVALUE;
        // SubProg read_coverage_db pc: 81 op: STARTLINE (58)

        /** coverage.e:148				the_map = routine_map[fx]*/
        // SubProg read_coverage_db pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 85 op: RHS_SUBS (25)
        DeRef(_the_map_48455);
        _2 = (object)SEQ_PTR(_50routine_map_48305);
        _the_map_48455 = (object)*(((s1_ptr)_2)->base + _fx_48448);
        Ref(_the_map_48455);
        // SubProg read_coverage_db pc: 89 op: ELSE (23)
        goto L6; // [89] 101
        // SubProg read_coverage_db pc: 91 op: NOP1 (159)
L5: // addr: 92 pc: 91 sub: 48436 op: 159
        // SubProg read_coverage_db pc: 92 op: STARTLINE (58)

        /** coverage.e:152				the_map = line_map[fx]*/
        // SubProg read_coverage_db pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 96 op: RHS_SUBS (25)
        DeRef(_the_map_48455);
        _2 = (object)SEQ_PTR(_50line_map_48304);
        _the_map_48455 = (object)*(((s1_ptr)_2)->base + _fx_48448);
        Ref(_the_map_48455);
        // SubProg read_coverage_db pc: 100 op: NOP1 (159)
L6: // addr: 101 pc: 100 sub: 48436 op: 159
        // SubProg read_coverage_db pc: 101 op: STARTLINE (58)

        /** coverage.e:156			for j = 1 to db_table_size() do*/
        // SubProg read_coverage_db pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 105 op: PROC (27)
        RefDS(_44current_table_name_16087);
        _25106 = _44db_table_size(_44current_table_name_16087);
        // SubProg read_coverage_db pc: 109 op: FOR (21)
        {
            object _j_48464;
            _j_48464 = 1;
L7: // addr: 116 pc: 109 sub: 48436 op: 21
            if (binary_op_a(GREATER, _j_48464, _25106)){
                goto L8; // [109] 148
            }
            // SubProg read_coverage_db pc: 116 op: STARTLINE (58)

            /** coverage.e:157				map:put( the_map, db_record_key( j ), db_record_data( j ), map:ADD )*/
            // SubProg read_coverage_db pc: 118 op: PRIVATE_INIT_CHECK (30)
            // SubProg read_coverage_db pc: 120 op: GLOBAL_INIT_CHECK (109)
            // SubProg read_coverage_db pc: 122 op: PROC (27)
            Ref(_j_48464);
            RefDS(_44current_table_name_16087);
            _25107 = _44db_record_key(_j_48464, _44current_table_name_16087);
            // SubProg read_coverage_db pc: 127 op: GLOBAL_INIT_CHECK (109)
            // SubProg read_coverage_db pc: 129 op: PROC (27)
            Ref(_j_48464);
            RefDS(_44current_table_name_16087);
            _25108 = _44db_record_data(_j_48464, _44current_table_name_16087);
            // SubProg read_coverage_db pc: 134 op: PROC (27)
            Ref(_the_map_48455);
            _28put(_the_map_48455, _25107, _25108, 2, 0);
            _25107 = NOVALUE;
            _25108 = NOVALUE;
            // SubProg read_coverage_db pc: 141 op: STARTLINE (58)

            /** coverage.e:158			end for*/
            // SubProg read_coverage_db pc: 143 op: ENDFOR_INT_UP1 (54)
            _0 = _j_48464;
            if (IS_ATOM_INT(_j_48464)) {
                _j_48464 = _j_48464 + 1;
                if ((object)((uintptr_t)_j_48464 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_48464 = NewDouble((eudouble)_j_48464);
                }
            }
            else {
                _j_48464 = binary_op_a(PLUS, _j_48464, 1);
            }
            DeRef(_0);
            goto L7; // [143] 116
L8: // addr: 148 pc: 143 sub: 48436 op: 54
            ;
            DeRef(_j_48464);
        }
        // SubProg read_coverage_db pc: 148 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var name_48444
        DeRef(_name_48444);
        _name_48444 = NOVALUE;

// block var fx_48448

// block var the_map_48455
        DeRef(_the_map_48455);
        _the_map_48455 = NOVALUE;
        // SubProg read_coverage_db pc: 150 op: STARTLINE (58)

        /** coverage.e:160		end for*/
        // SubProg read_coverage_db pc: 152 op: ENDFOR_INT_UP1 (54)
L4: // addr: 152 pc: 152 sub: 48436 op: 54
        _i_48442 = _i_48442 + 1;
        goto L1; // [152] 20
L2: // addr: 157 pc: 152 sub: 48436 op: 54
        ;
    }
    // SubProg read_coverage_db pc: 157 op: STARTLINE (58)

    /** coverage.e:161	end procedure*/
    // SubProg read_coverage_db pc: 159 op: RETURNP (29)

// Exiting block BLOCK: read_coverage_db

// block var tables_48438
    DeRef(_tables_48438);
    DeRef(_25106);
    _25106 = NOVALUE;
    return;
    // SubProg read_coverage_db pc: 162 op: BADRETURNF (43)
    ;
}


void _50coverage_db(object _name_48473)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_db pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg coverage_db pc: 3 op: STARTLINE (58)

    /** coverage.e:164		coverage_db_name = name*/
    // SubProg coverage_db pc: 5 op: ASSIGN (18)
    RefDS(_name_48473);
    DeRef(_50coverage_db_name_48301);
    _50coverage_db_name_48301 = _name_48473;
    // SubProg coverage_db pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg coverage_db pc: 10 op: STARTLINE (58)

    /** coverage.e:165	end procedure*/
    // SubProg coverage_db pc: 12 op: RETURNP (29)

// Exiting block BLOCK: coverage_db

// block var name_48473
    DeRefDS(_name_48473);
    return;
    // SubProg coverage_db pc: 15 op: BADRETURNF (43)
    ;
}


object _50coverage_on()
{
    object _25109 = NOVALUE; // 48477 25109
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_on pc: 1 op: STARTLINE (58)

    /** coverage.e:170		return file_coverage[current_file_no]*/
    // SubProg coverage_on pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg coverage_on pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg coverage_on pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50file_coverage_48300);
    _25109 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg coverage_on pc: 11 op: RETURNF (28)

// Exiting block BLOCK: coverage_on
    return _25109;
    // SubProg coverage_on pc: 15 op: BADRETURNF (43)
    ;
}


void _50new_covered_path(object _name_48485)
{
    object _new_1__tmp_at14_48489 = NOVALUE;
    object _new_inlined_new_at_14_48488 = NOVALUE;
    object _new_1__tmp_at36_48493 = NOVALUE;
    object _new_inlined_new_at_36_48492 = NOVALUE;
// skipping _25114  name type: 0
// skipping _25113  name type: 0
// skipping _25112  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_covered_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg new_covered_path pc: 3 op: STARTLINE (58)

    /** coverage.e:176		covered_files = append( covered_files, name )*/
    // SubProg new_covered_path pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_covered_path pc: 7 op: APPEND (35)
    RefDS(_name_48485);
    Append(&_50covered_files_48299, _50covered_files_48299, _name_48485);
    // SubProg new_covered_path pc: 11 op: STARTLINE (58)

    /** coverage.e:177		routine_map &= map:new()*/
    // SubProg new_covered_path pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_covered_path pc: 15 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_covered_path pc: 17 op: PROC (27)
    _0 = _new_1__tmp_at14_48489;
    _new_1__tmp_at14_48489 = _28new_map_seq(8);
    DeRef(_0);
    // SubProg new_covered_path pc: 21 op: PROC (27)
    Ref(_new_1__tmp_at14_48489);
    _0 = _new_inlined_new_at_14_48488;
    _new_inlined_new_at_14_48488 = _29malloc(_new_1__tmp_at14_48489, 1);
    DeRef(_0);
    // SubProg new_covered_path pc: 26 op: NOP1 (159)
    // SubProg new_covered_path pc: 27 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_covered_path @ 14

// block var new_1__tmp_at14_48489
    DeRef(_new_1__tmp_at14_48489);
    _new_1__tmp_at14_48489 = NOVALUE;
    // SubProg new_covered_path pc: 29 op: CONCAT (15)
    if (IS_SEQUENCE(_50routine_map_48305) && IS_ATOM(_new_inlined_new_at_14_48488)) {
        Ref(_new_inlined_new_at_14_48488);
        Append(&_50routine_map_48305, _50routine_map_48305, _new_inlined_new_at_14_48488);
    }
    else if (IS_ATOM(_50routine_map_48305) && IS_SEQUENCE(_new_inlined_new_at_14_48488)) {
    }
    else {
        Concat((object_ptr)&_50routine_map_48305, _50routine_map_48305, _new_inlined_new_at_14_48488);
    }
    // SubProg new_covered_path pc: 33 op: STARTLINE (58)

    /** coverage.e:178		line_map    &= map:new()*/
    // SubProg new_covered_path pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_covered_path pc: 37 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_covered_path pc: 39 op: PROC (27)
    _0 = _new_1__tmp_at36_48493;
    _new_1__tmp_at36_48493 = _28new_map_seq(8);
    DeRef(_0);
    // SubProg new_covered_path pc: 43 op: PROC (27)
    Ref(_new_1__tmp_at36_48493);
    _0 = _new_inlined_new_at_36_48492;
    _new_inlined_new_at_36_48492 = _29malloc(_new_1__tmp_at36_48493, 1);
    DeRef(_0);
    // SubProg new_covered_path pc: 48 op: NOP1 (159)
    // SubProg new_covered_path pc: 49 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_covered_path @ 36

// block var new_1__tmp_at36_48493
    DeRef(_new_1__tmp_at36_48493);
    _new_1__tmp_at36_48493 = NOVALUE;
    // SubProg new_covered_path pc: 51 op: CONCAT (15)
    if (IS_SEQUENCE(_50line_map_48304) && IS_ATOM(_new_inlined_new_at_36_48492)) {
        Ref(_new_inlined_new_at_36_48492);
        Append(&_50line_map_48304, _50line_map_48304, _new_inlined_new_at_36_48492);
    }
    else if (IS_ATOM(_50line_map_48304) && IS_SEQUENCE(_new_inlined_new_at_36_48492)) {
    }
    else {
        Concat((object_ptr)&_50line_map_48304, _50line_map_48304, _new_inlined_new_at_36_48492);
    }
    // SubProg new_covered_path pc: 55 op: STARTLINE (58)

    /** coverage.e:179	end procedure*/
    // SubProg new_covered_path pc: 57 op: RETURNP (29)

// Exiting block BLOCK: new_covered_path

// block var name_48485
    DeRefDS(_name_48485);
    return;
    // SubProg new_covered_path pc: 60 op: BADRETURNF (43)
    ;
}


void _50add_coverage(object _cover_this_48497)
{
    object _path_48498 = NOVALUE;
    object _files_48507 = NOVALUE;
    object _subpath_48535 = NOVALUE;
    object _25148 = NOVALUE; // 48556 25148
    object _25147 = NOVALUE; // 48555 25147
    object _25146 = NOVALUE; // 48553 25146
    object _25145 = NOVALUE; // 48552 25145
    object _25144 = NOVALUE; // 48551 25144
    object _25143 = NOVALUE; // 48550 25143
    object _25142 = NOVALUE; // 48549 25142
    object _25141 = NOVALUE; // 48547 25141
    object _25140 = NOVALUE; // 48546 25140
    object _25139 = NOVALUE; // 48544 25139
    object _25138 = NOVALUE; // 48543 25138
    object _25137 = NOVALUE; // 48542 25137
// skipping _25136  name type: 0
    object _25135 = NOVALUE; // 48539 25135
    object _25134 = NOVALUE; // 48537 25134
    object _25133 = NOVALUE; // 48534 25133
    object _25132 = NOVALUE; // 48533 25132
    object _25131 = NOVALUE; // 48531 25131
    object _25130 = NOVALUE; // 48529 25130
    object _25129 = NOVALUE; // 48528 25129
    object _25128 = NOVALUE; // 48526 25128
// skipping _25127  name type: 0
    object _25126 = NOVALUE; // 48523 25126
    object _25125 = NOVALUE; // 48522 25125
    object _25124 = NOVALUE; // 48521 25124
    object _25123 = NOVALUE; // 48519 25123
    object _25122 = NOVALUE; // 48517 25122
    object _25121 = NOVALUE; // 48516 25121
    object _25120 = NOVALUE; // 48514 25120
    object _25119 = NOVALUE; // 48512 25119
// skipping _25118  name type: 0
// skipping _25117  name type: 0
    object _25116 = NOVALUE; // 48504 25116
// skipping _25115  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_coverage pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_coverage pc: 3 op: STARTLINE (58)

    /** coverage.e:185		sequence path = canonical_path( cover_this,, CORRECT )*/
    // SubProg add_coverage pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 7 op: PROC (27)
    RefDS(_cover_this_48497);
    _0 = _path_48498;
    _path_48498 = _18canonical_path(_cover_this_48497, 0, 2);
    DeRef(_0);
    // SubProg add_coverage pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg add_coverage pc: 15 op: STARTLINE (58)

    /** coverage.e:187		if file_type( path ) = FILETYPE_DIRECTORY then*/
    // SubProg add_coverage pc: 17 op: PROC (27)
    RefDS(_path_48498);
    _25116 = _18file_type(_path_48498);
    // SubProg add_coverage pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 23 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25116, 2)){
        DeRef(_25116);
        _25116 = NOVALUE;
        goto L1; // [23] 211
    }
    DeRef(_25116);
    _25116 = NOVALUE;
    // SubProg add_coverage pc: 27 op: STARTLINE (58)

    /** coverage.e:188			sequence files = dir( path  )*/
    // SubProg add_coverage pc: 29 op: PROC (27)
    RefDS(_path_48498);
    _0 = _files_48507;
    _files_48507 = _18dir(_path_48498);
    DeRef(_0);
    // SubProg add_coverage pc: 33 op: SEQUENCE_CHECK (97)
    // SubProg add_coverage pc: 35 op: STARTLINE (58)

    /** coverage.e:190			for i = 1 to length( files ) do*/
    // SubProg add_coverage pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_files_48507)){
            _25119 = SEQ_PTR(_files_48507)->length;
    }
    else {
        _25119 = 1;
    }
    // SubProg add_coverage pc: 40 op: FOR_I (125)
    {
        object _i_48511;
        _i_48511 = 1;
L2: // addr: 47 pc: 40 sub: 48495 op: 125
        if (_i_48511 > _25119){
            goto L3; // [40] 206
        }
        // SubProg add_coverage pc: 47 op: STARTLINE (58)

        /** coverage.e:191				if find( 'd', files[i][D_ATTRIBUTES] ) then*/
        // SubProg add_coverage pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48507);
        _25120 = (object)*(((s1_ptr)_2)->base + _i_48511);
        // SubProg add_coverage pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25120);
        _25121 = (object)*(((s1_ptr)_2)->base + 2);
        _25120 = NOVALUE;
        // SubProg add_coverage pc: 59 op: FIND_FROM (176)
        _25122 = find_from(100, _25121, 1);
        _25121 = NOVALUE;
        // SubProg add_coverage pc: 64 op: IF (20)
        if (_25122 == 0)
        {
            _25122 = NOVALUE;
            goto L4; // [64] 118
        }
        else{
            _25122 = NOVALUE;
        }
        // SubProg add_coverage pc: 67 op: STARTLINE (58)

        /** coverage.e:192					if not eu:find(files[i][D_NAME], {".", ".."}) then*/
        // SubProg add_coverage pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48507);
        _25123 = (object)*(((s1_ptr)_2)->base + _i_48511);
        // SubProg add_coverage pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 75 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25123);
        _25124 = (object)*(((s1_ptr)_2)->base + 1);
        _25123 = NOVALUE;
        // SubProg add_coverage pc: 79 op: RIGHT_BRACE_2 (85)
        RefDS(_23126);
        RefDS(_23127);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23127;
        ((intptr_t *)_2)[2] = _23126;
        _25125 = MAKE_SEQ(_1);
        // SubProg add_coverage pc: 83 op: FIND_FROM (176)
        _25126 = find_from(_25124, _25125, 1);
        _25124 = NOVALUE;
        DeRefDS(_25125);
        _25125 = NOVALUE;
        // SubProg add_coverage pc: 88 op: NOT_IFW (108)
        if (_25126 != 0)
        goto L5; // [88] 199
        _25126 = NOVALUE;
        // SubProg add_coverage pc: 91 op: STARTLINE (58)

        /** coverage.e:193						add_coverage( cover_this & SLASH & files[i][D_NAME] )*/
        // SubProg add_coverage pc: 93 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 95 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48507);
        _25128 = (object)*(((s1_ptr)_2)->base + _i_48511);
        // SubProg add_coverage pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 101 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25128);
        _25129 = (object)*(((s1_ptr)_2)->base + 1);
        _25128 = NOVALUE;
        // SubProg add_coverage pc: 105 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _25129;
            concat_list[1] = 47;
            concat_list[2] = _cover_this_48497;
            Concat_N((object_ptr)&_25130, concat_list, 3);
        }
        _25129 = NOVALUE;
        // SubProg add_coverage pc: 111 op: PROC (27)
        _50add_coverage(_25130);
        _25130 = NOVALUE;
        // SubProg add_coverage pc: 114 op: NOP1 (159)
        // SubProg add_coverage pc: 115 op: ELSE (23)
        goto L5; // [115] 199
        // SubProg add_coverage pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 48495 op: 159
        // SubProg add_coverage pc: 118 op: STARTLINE (58)

        /** coverage.e:196				elsif regex:has_match( eu_file, files[i][D_NAME] ) then*/
        // SubProg add_coverage pc: 120 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 122 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48507);
        _25131 = (object)*(((s1_ptr)_2)->base + _i_48511);
        // SubProg add_coverage pc: 126 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 128 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25131);
        _25132 = (object)*(((s1_ptr)_2)->base + 1);
        _25131 = NOVALUE;
        // SubProg add_coverage pc: 132 op: PROC (27)
        Ref(_50eu_file_48479);
        Ref(_25132);
        _25133 = _51has_match(_50eu_file_48479, _25132, 1, 0);
        _25132 = NOVALUE;
        // SubProg add_coverage pc: 139 op: IF (20)
        if (_25133 == 0) {
            DeRef(_25133);
            _25133 = NOVALUE;
            goto L6; // [139] 196
        }
        else {
            if (!IS_ATOM_INT(_25133) && DBL_PTR(_25133)->dbl == 0.0){
                DeRef(_25133);
                _25133 = NOVALUE;
                goto L6; // [139] 196
            }
            DeRef(_25133);
            _25133 = NOVALUE;
        }
        DeRef(_25133);
        _25133 = NOVALUE;
        // SubProg add_coverage pc: 142 op: STARTLINE (58)

        /** coverage.e:198					sequence subpath = path & SLASH & files[i][D_NAME]*/
        // SubProg add_coverage pc: 144 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 146 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48507);
        _25134 = (object)*(((s1_ptr)_2)->base + _i_48511);
        // SubProg add_coverage pc: 150 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 152 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25134);
        _25135 = (object)*(((s1_ptr)_2)->base + 1);
        _25134 = NOVALUE;
        // SubProg add_coverage pc: 156 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _25135;
            concat_list[1] = 47;
            concat_list[2] = _path_48498;
            Concat_N((object_ptr)&_subpath_48535, concat_list, 3);
        }
        _25135 = NOVALUE;
        // SubProg add_coverage pc: 162 op: STARTLINE (58)

        /** coverage.e:199					if not find( subpath, covered_files ) and not excluded( subpath ) then*/
        // SubProg add_coverage pc: 164 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 166 op: FIND_FROM (176)
        _25137 = find_from(_subpath_48535, _50covered_files_48299, 1);
        // SubProg add_coverage pc: 171 op: NOT (7)
        _25138 = (_25137 == 0);
        _25137 = NOVALUE;
        // SubProg add_coverage pc: 174 op: SC1_AND_IF (146)
        if (_25138 == 0) {
            goto L7; // [174] 195
        }
        // SubProg add_coverage pc: 178 op: PROC (27)
        RefDS(_subpath_48535);
        _25140 = _50excluded(_subpath_48535);
        // SubProg add_coverage pc: 182 op: NOT (7)
        if (IS_ATOM_INT(_25140)) {
            _25141 = (_25140 == 0);
        }
        else {
            _25141 = unary_op(NOT, _25140);
        }
        DeRef(_25140);
        _25140 = NOVALUE;
        // SubProg add_coverage pc: 185 op: NOP1 (159)
        // SubProg add_coverage pc: 186 op: IF (20)
        if (_25141 == 0) {
            DeRef(_25141);
            _25141 = NOVALUE;
            goto L7; // [186] 195
        }
        else {
            if (!IS_ATOM_INT(_25141) && DBL_PTR(_25141)->dbl == 0.0){
                DeRef(_25141);
                _25141 = NOVALUE;
                goto L7; // [186] 195
            }
            DeRef(_25141);
            _25141 = NOVALUE;
        }
        DeRef(_25141);
        _25141 = NOVALUE;
        // SubProg add_coverage pc: 189 op: STARTLINE (58)

        /** coverage.e:200						new_covered_path( subpath )*/
        // SubProg add_coverage pc: 191 op: PROC (27)
        RefDS(_subpath_48535);
        _50new_covered_path(_subpath_48535);
        // SubProg add_coverage pc: 194 op: NOP1 (159)
L7: // addr: 195 pc: 194 sub: 48495 op: 159
        // SubProg add_coverage pc: 195 op: NOP1 (159)
L6: // addr: 196 pc: 195 sub: 48495 op: 159
        // SubProg add_coverage pc: 196 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var subpath_48535
        DeRef(_subpath_48535);
        _subpath_48535 = NOVALUE;
        // SubProg add_coverage pc: 198 op: NOP1 (159)
L5: // addr: 199 pc: 198 sub: 48495 op: 159
        // SubProg add_coverage pc: 199 op: STARTLINE (58)

        /** coverage.e:203			end for*/
        // SubProg add_coverage pc: 201 op: ENDFOR_INT_UP1 (54)
        _i_48511 = _i_48511 + 1;
        goto L2; // [201] 47
L3: // addr: 206 pc: 201 sub: 48495 op: 54
        ;
    }
    // SubProg add_coverage pc: 206 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var files_48507
    DeRef(_files_48507);
    _files_48507 = NOVALUE;
    // SubProg add_coverage pc: 208 op: ELSE (23)
    goto L8; // [208] 262
    // SubProg add_coverage pc: 210 op: NOP1 (159)
L1: // addr: 211 pc: 210 sub: 48495 op: 159
    // SubProg add_coverage pc: 211 op: STARTLINE (58)

    /** coverage.e:204		elsif regex:has_match( eu_file, path ) and*/
    // SubProg add_coverage pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 215 op: PROC (27)
    Ref(_50eu_file_48479);
    RefDS(_path_48498);
    _25142 = _51has_match(_50eu_file_48479, _path_48498, 1, 0);
    // SubProg add_coverage pc: 222 op: SC1_AND (141)
    if (IS_ATOM_INT(_25142)) {
        if (_25142 == 0) {
            DeRef(_25143);
            _25143 = 0;
            goto L9; // [222] 240
        }
    }
    else {
        if (DBL_PTR(_25142)->dbl == 0.0) {
            DeRef(_25143);
            _25143 = 0;
            goto L9; // [222] 240
        }
    }
    // SubProg add_coverage pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 228 op: FIND_FROM (176)
    _25144 = find_from(_path_48498, _50covered_files_48299, 1);
    // SubProg add_coverage pc: 233 op: NOT (7)
    _25145 = (_25144 == 0);
    _25144 = NOVALUE;
    // SubProg add_coverage pc: 236 op: SC2_AND (142)
    DeRef(_25143);
    _25143 = (_25145 != 0);
    // SubProg add_coverage pc: 239 op: NOP1 (159)
L9: // addr: 240 pc: 239 sub: 48495 op: 159
    // SubProg add_coverage pc: 240 op: SC1_AND_IF (146)
    if (_25143 == 0) {
        goto LA; // [240] 261
    }
    // SubProg add_coverage pc: 244 op: PROC (27)
    RefDS(_path_48498);
    _25147 = _50excluded(_path_48498);
    // SubProg add_coverage pc: 248 op: NOT (7)
    if (IS_ATOM_INT(_25147)) {
        _25148 = (_25147 == 0);
    }
    else {
        _25148 = unary_op(NOT, _25147);
    }
    DeRef(_25147);
    _25147 = NOVALUE;
    // SubProg add_coverage pc: 251 op: NOP1 (159)
    // SubProg add_coverage pc: 252 op: IF (20)
    if (_25148 == 0) {
        DeRef(_25148);
        _25148 = NOVALUE;
        goto LA; // [252] 261
    }
    else {
        if (!IS_ATOM_INT(_25148) && DBL_PTR(_25148)->dbl == 0.0){
            DeRef(_25148);
            _25148 = NOVALUE;
            goto LA; // [252] 261
        }
        DeRef(_25148);
        _25148 = NOVALUE;
    }
    DeRef(_25148);
    _25148 = NOVALUE;
    // SubProg add_coverage pc: 255 op: STARTLINE (58)

    /** coverage.e:207			new_covered_path( path )*/
    // SubProg add_coverage pc: 257 op: PROC (27)
    RefDS(_path_48498);
    _50new_covered_path(_path_48498);
    // SubProg add_coverage pc: 260 op: NOP1 (159)
LA: // addr: 261 pc: 260 sub: 48495 op: 159
    // SubProg add_coverage pc: 261 op: NOP1 (159)
L8: // addr: 262 pc: 261 sub: 48495 op: 159
    // SubProg add_coverage pc: 262 op: STARTLINE (58)

    /** coverage.e:209	end procedure*/
    // SubProg add_coverage pc: 264 op: RETURNP (29)

// Exiting block BLOCK: add_coverage

// block var cover_this_48497
    DeRefDS(_cover_this_48497);

// block var path_48498
    DeRef(_path_48498);
    DeRef(_25142);
    _25142 = NOVALUE;
    DeRef(_25145);
    _25145 = NOVALUE;
    DeRef(_25138);
    _25138 = NOVALUE;
    return;
    // SubProg add_coverage pc: 267 op: BADRETURNF (43)
    ;
}


object _50excluded(object _file_48559)
{
    object _25151 = NOVALUE; // 48565 25151
    object _25150 = NOVALUE; // 48564 25150
    object _25149 = NOVALUE; // 48562 25149
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg excluded pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg excluded pc: 3 op: STARTLINE (58)

    /** coverage.e:212		for i = 1 to length( exclusion_patterns ) do*/
    // SubProg excluded pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg excluded pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_50exclusion_patterns_48303)){
            _25149 = SEQ_PTR(_50exclusion_patterns_48303)->length;
    }
    else {
        _25149 = 1;
    }
    // SubProg excluded pc: 10 op: FOR_I (125)
    {
        object _i_48561;
        _i_48561 = 1;
L1: // addr: 17 pc: 10 sub: 48557 op: 125
        if (_i_48561 > _25149){
            goto L2; // [10] 49
        }
        // SubProg excluded pc: 17 op: STARTLINE (58)

        /** coverage.e:213			if regex:has_match( exclusion_patterns[i], file ) then*/
        // SubProg excluded pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg excluded pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50exclusion_patterns_48303);
        _25150 = (object)*(((s1_ptr)_2)->base + _i_48561);
        // SubProg excluded pc: 25 op: PROC (27)
        Ref(_25150);
        RefDS(_file_48559);
        _25151 = _51has_match(_25150, _file_48559, 1, 0);
        _25150 = NOVALUE;
        // SubProg excluded pc: 32 op: IF (20)
        if (_25151 == 0) {
            DeRef(_25151);
            _25151 = NOVALUE;
            goto L3; // [32] 42
        }
        else {
            if (!IS_ATOM_INT(_25151) && DBL_PTR(_25151)->dbl == 0.0){
                DeRef(_25151);
                _25151 = NOVALUE;
                goto L3; // [32] 42
            }
            DeRef(_25151);
            _25151 = NOVALUE;
        }
        DeRef(_25151);
        _25151 = NOVALUE;
        // SubProg excluded pc: 35 op: STARTLINE (58)

        /** coverage.e:214				return 1*/
        // SubProg excluded pc: 37 op: RETURNF (28)

// Exiting block BLOCK: excluded

// block var file_48559
        DeRefDS(_file_48559);
        return 1;
        // SubProg excluded pc: 41 op: NOP1 (159)
L3: // addr: 42 pc: 41 sub: 48557 op: 159
        // SubProg excluded pc: 42 op: STARTLINE (58)

        /** coverage.e:216		end for*/
        // SubProg excluded pc: 44 op: ENDFOR_INT_UP1 (54)
        _i_48561 = _i_48561 + 1;
        goto L1; // [44] 17
L2: // addr: 49 pc: 44 sub: 48557 op: 54
        ;
    }
    // SubProg excluded pc: 49 op: STARTLINE (58)

    /** coverage.e:217		return 0*/
    // SubProg excluded pc: 51 op: RETURNF (28)

// Exiting block BLOCK: excluded

// block var file_48559
    DeRefDS(_file_48559);
    return 0;
    // SubProg excluded pc: 55 op: BADRETURNF (43)
    ;
}


void _50coverage_exclude(object _patterns_48568)
{
    object _ex_48573 = NOVALUE;
    object _fx_48580 = NOVALUE;
    object _25169 = NOVALUE; // 48598 25169
    object _25168 = NOVALUE; // 48597 25168
    object _25167 = NOVALUE; // 48596 25167
    object _25166 = NOVALUE; // 48595 25166
// skipping _25164  name type: 0
// skipping _25163  name type: 0
// skipping _25162  name type: 0
// skipping _25161  name type: 0
    object _25160 = NOVALUE; // 48586 25160
    object _25159 = NOVALUE; // 48585 25159
// skipping _25158  name type: 0
    object _25157 = NOVALUE; // 48582 25157
// skipping _25156  name type: 0
    object _25155 = NOVALUE; // 48578 25155
// skipping _25154  name type: 0
    object _25153 = NOVALUE; // 48574 25153
    object _25152 = NOVALUE; // 48571 25152
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_exclude pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg coverage_exclude pc: 3 op: STARTLINE (58)

    /** coverage.e:221		for i = 1 to length( patterns ) do*/
    // SubProg coverage_exclude pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_patterns_48568)){
            _25152 = SEQ_PTR(_patterns_48568)->length;
    }
    else {
        _25152 = 1;
    }
    // SubProg coverage_exclude pc: 8 op: FOR_I (125)
    {
        object _i_48570;
        _i_48570 = 1;
L1: // addr: 15 pc: 8 sub: 48566 op: 125
        if (_i_48570 > _25152){
            goto L2; // [8] 161
        }
        // SubProg coverage_exclude pc: 15 op: STARTLINE (58)

        /** coverage.e:222			regex ex = regex:new( patterns[i] )*/
        // SubProg coverage_exclude pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_patterns_48568);
        _25153 = (object)*(((s1_ptr)_2)->base + _i_48570);
        // SubProg coverage_exclude pc: 21 op: PROC (27)
        Ref(_25153);
        _0 = _ex_48573;
        _ex_48573 = _51new(_25153, 0);
        DeRef(_0);
        _25153 = NOVALUE;
        // SubProg coverage_exclude pc: 26 op: STARTLINE (58)

        /** coverage.e:223			if regex( ex ) then*/
        // SubProg coverage_exclude pc: 28 op: PROC (27)
        Ref(_ex_48573);
        _25155 = _51regex(_ex_48573);
        // SubProg coverage_exclude pc: 32 op: IF (20)
        if (_25155 == 0) {
            DeRef(_25155);
            _25155 = NOVALUE;
            goto L3; // [32] 127
        }
        else {
            if (!IS_ATOM_INT(_25155) && DBL_PTR(_25155)->dbl == 0.0){
                DeRef(_25155);
                _25155 = NOVALUE;
                goto L3; // [32] 127
            }
            DeRef(_25155);
            _25155 = NOVALUE;
        }
        DeRef(_25155);
        _25155 = NOVALUE;
        // SubProg coverage_exclude pc: 35 op: STARTLINE (58)

        /** coverage.e:224				exclusion_patterns = append( exclusion_patterns, ex )*/
        // SubProg coverage_exclude pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 39 op: APPEND (35)
        Ref(_ex_48573);
        Append(&_50exclusion_patterns_48303, _50exclusion_patterns_48303, _ex_48573);
        // SubProg coverage_exclude pc: 43 op: STARTLINE (58)

        /** coverage.e:225				integer fx = 1*/
        // SubProg coverage_exclude pc: 45 op: ASSIGN_I (113)
        _fx_48580 = 1;
        // SubProg coverage_exclude pc: 48 op: STARTLINE (58)

        /** coverage.e:226				while fx <= length( covered_files ) do*/
        // SubProg coverage_exclude pc: 50 op: NOP2 (110)
        // SubProg coverage_exclude pc: 52 op: NOPWHILE (158)
L4: // addr: 53 pc: 52 sub: 48566 op: 158
        // SubProg coverage_exclude pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 55 op: LENGTH (42)
        if (IS_SEQUENCE(_50covered_files_48299)){
                _25157 = SEQ_PTR(_50covered_files_48299)->length;
        }
        else {
            _25157 = 1;
        }
        // SubProg coverage_exclude pc: 58 op: LESSEQ_IFW_I (123)
        if (_fx_48580 > _25157)
        goto L5; // [58] 122
        // SubProg coverage_exclude pc: 62 op: STARTLINE (58)

        /** coverage.e:227					if regex:has_match( ex, covered_files[fx] ) then*/
        // SubProg coverage_exclude pc: 64 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 66 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50covered_files_48299);
        _25159 = (object)*(((s1_ptr)_2)->base + _fx_48580);
        // SubProg coverage_exclude pc: 70 op: PROC (27)
        Ref(_ex_48573);
        Ref(_25159);
        _25160 = _51has_match(_ex_48573, _25159, 1, 0);
        _25159 = NOVALUE;
        // SubProg coverage_exclude pc: 77 op: IF (20)
        if (_25160 == 0) {
            DeRef(_25160);
            _25160 = NOVALUE;
            goto L6; // [77] 110
        }
        else {
            if (!IS_ATOM_INT(_25160) && DBL_PTR(_25160)->dbl == 0.0){
                DeRef(_25160);
                _25160 = NOVALUE;
                goto L6; // [77] 110
            }
            DeRef(_25160);
            _25160 = NOVALUE;
        }
        DeRef(_25160);
        _25160 = NOVALUE;
        // SubProg coverage_exclude pc: 80 op: STARTLINE (58)

        /** coverage.e:228						covered_files = remove( covered_files, fx )*/
        // SubProg coverage_exclude pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 84 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_50covered_files_48299);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48580)) ? _fx_48580 : (object)(DBL_PTR(_fx_48580)->dbl);
            int stop = (IS_ATOM_INT(_fx_48580)) ? _fx_48580 : (object)(DBL_PTR(_fx_48580)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_50covered_files_48299), start, &_50covered_files_48299 );
                }
                else Tail(SEQ_PTR(_50covered_files_48299), stop+1, &_50covered_files_48299);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_50covered_files_48299), start, &_50covered_files_48299);
            }
            else {
                assign_slice_seq = &assign_space;
                _50covered_files_48299 = Remove_elements(start, stop, (SEQ_PTR(_50covered_files_48299)->ref == 1));
            }
        }
        // SubProg coverage_exclude pc: 89 op: STARTLINE (58)

        /** coverage.e:229						routine_map   = remove( routine_map, fx )*/
        // SubProg coverage_exclude pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 93 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_50routine_map_48305);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48580)) ? _fx_48580 : (object)(DBL_PTR(_fx_48580)->dbl);
            int stop = (IS_ATOM_INT(_fx_48580)) ? _fx_48580 : (object)(DBL_PTR(_fx_48580)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_50routine_map_48305), start, &_50routine_map_48305 );
                }
                else Tail(SEQ_PTR(_50routine_map_48305), stop+1, &_50routine_map_48305);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_50routine_map_48305), start, &_50routine_map_48305);
            }
            else {
                assign_slice_seq = &assign_space;
                _50routine_map_48305 = Remove_elements(start, stop, (SEQ_PTR(_50routine_map_48305)->ref == 1));
            }
        }
        // SubProg coverage_exclude pc: 98 op: STARTLINE (58)

        /** coverage.e:230						line_map      = remove( line_map, fx )*/
        // SubProg coverage_exclude pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 102 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_50line_map_48304);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48580)) ? _fx_48580 : (object)(DBL_PTR(_fx_48580)->dbl);
            int stop = (IS_ATOM_INT(_fx_48580)) ? _fx_48580 : (object)(DBL_PTR(_fx_48580)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_50line_map_48304), start, &_50line_map_48304 );
                }
                else Tail(SEQ_PTR(_50line_map_48304), stop+1, &_50line_map_48304);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_50line_map_48304), start, &_50line_map_48304);
            }
            else {
                assign_slice_seq = &assign_space;
                _50line_map_48304 = Remove_elements(start, stop, (SEQ_PTR(_50line_map_48304)->ref == 1));
            }
        }
        // SubProg coverage_exclude pc: 107 op: ELSE (23)
        goto L4; // [107] 53
        // SubProg coverage_exclude pc: 109 op: NOP1 (159)
L6: // addr: 110 pc: 109 sub: 48566 op: 159
        // SubProg coverage_exclude pc: 110 op: STARTLINE (58)

        /** coverage.e:232						fx += 1*/
        // SubProg coverage_exclude pc: 112 op: PLUS1_I (117)
        _fx_48580 = _fx_48580 + 1;
        // SubProg coverage_exclude pc: 116 op: NOP1 (159)
        // SubProg coverage_exclude pc: 117 op: STARTLINE (58)

        /** coverage.e:234				end while*/
        // SubProg coverage_exclude pc: 119 op: ENDWHILE (22)
        goto L4; // [119] 53
        // SubProg coverage_exclude pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 48566 op: 159
        // SubProg coverage_exclude pc: 122 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fx_48580
        // SubProg coverage_exclude pc: 124 op: ELSE (23)
        goto L7; // [124] 152
        // SubProg coverage_exclude pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 48566 op: 159
        // SubProg coverage_exclude pc: 127 op: STARTLINE (58)

        /** coverage.e:236				printf( 2,"%s\n", { GetMsgText( 339, 1, {patterns[i]}) } )*/
        // SubProg coverage_exclude pc: 129 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_patterns_48568);
        _25166 = (object)*(((s1_ptr)_2)->base + _i_48570);
        // SubProg coverage_exclude pc: 133 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25166);
        ((intptr_t*)_2)[1] = _25166;
        _25167 = MAKE_SEQ(_1);
        _25166 = NOVALUE;
        // SubProg coverage_exclude pc: 137 op: PROC (27)
        _25168 = _40GetMsgText(339, 1, _25167);
        _25167 = NOVALUE;
        // SubProg coverage_exclude pc: 143 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _25168;
        _25169 = MAKE_SEQ(_1);
        _25168 = NOVALUE;
        // SubProg coverage_exclude pc: 147 op: PRINTF (38)
        EPrintf(2, _25165, _25169);
        DeRefDS(_25169);
        _25169 = NOVALUE;
        // SubProg coverage_exclude pc: 151 op: NOP1 (159)
L7: // addr: 152 pc: 151 sub: 48566 op: 159
        // SubProg coverage_exclude pc: 152 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ex_48573
        DeRef(_ex_48573);
        _ex_48573 = NOVALUE;
        // SubProg coverage_exclude pc: 154 op: STARTLINE (58)

        /** coverage.e:238		end for*/
        // SubProg coverage_exclude pc: 156 op: ENDFOR_INT_UP1 (54)
        _i_48570 = _i_48570 + 1;
        goto L1; // [156] 15
L2: // addr: 161 pc: 156 sub: 48566 op: 54
        ;
    }
    // SubProg coverage_exclude pc: 161 op: STARTLINE (58)

    /** coverage.e:240	end procedure*/
    // SubProg coverage_exclude pc: 163 op: RETURNP (29)

// Exiting block BLOCK: coverage_exclude

// block var patterns_48568
    DeRefDS(_patterns_48568);
    return;
    // SubProg coverage_exclude pc: 166 op: BADRETURNF (43)
    ;
}


void _50new_coverage_db()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_coverage_db pc: 1 op: STARTLINE (58)

    /** coverage.e:243		coverage_erase = 1*/
    // SubProg new_coverage_db pc: 3 op: ASSIGN_I (113)
    _50coverage_erase_48302 = 1;
    // SubProg new_coverage_db pc: 6 op: STARTLINE (58)

    /** coverage.e:244	end procedure*/
    // SubProg new_coverage_db pc: 8 op: RETURNP (29)

// Exiting block BLOCK: new_coverage_db
    return;
    // SubProg new_coverage_db pc: 11 op: BADRETURNF (43)
    ;
}


void _50include_line(object _line_number_48603)
{
// skipping _25171  name type: 0
    object _25170 = NOVALUE; // 48605 25170
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg include_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg include_line pc: 3 op: STARTLINE (58)

    /** coverage.e:247		if coverage_on() then*/
    // SubProg include_line pc: 5 op: PROC (27)
    _25170 = _50coverage_on();
    // SubProg include_line pc: 8 op: IF (20)
    if (_25170 == 0) {
        DeRef(_25170);
        _25170 = NOVALUE;
        goto L1; // [8] 34
    }
    else {
        if (!IS_ATOM_INT(_25170) && DBL_PTR(_25170)->dbl == 0.0){
            DeRef(_25170);
            _25170 = NOVALUE;
            goto L1; // [8] 34
        }
        DeRef(_25170);
        _25170 = NOVALUE;
    }
    DeRef(_25170);
    _25170 = NOVALUE;
    // SubProg include_line pc: 11 op: STARTLINE (58)

    /** coverage.e:248			emit_op( COVERAGE_LINE )*/
    // SubProg include_line pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 15 op: PROC (27)
    _45emit_op(210);
    // SubProg include_line pc: 18 op: STARTLINE (58)

    /** coverage.e:249			emit_addr( gline_number )*/
    // SubProg include_line pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 22 op: PROC (27)
    _45emit_addr(_34gline_number_15193);
    // SubProg include_line pc: 25 op: STARTLINE (58)

    /** coverage.e:251			included_lines &= line_number*/
    // SubProg include_line pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 29 op: CONCAT (15)
    Append(&_50included_lines_48306, _50included_lines_48306, _line_number_48603);
    // SubProg include_line pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 48601 op: 159
    // SubProg include_line pc: 34 op: STARTLINE (58)

    /** coverage.e:253	end procedure*/
    // SubProg include_line pc: 36 op: RETURNP (29)

// Exiting block BLOCK: include_line

// block var line_number_48603
    return;
    // SubProg include_line pc: 39 op: BADRETURNF (43)
    ;
}


void _50include_routine()
{
    object _file_no_48619 = NOVALUE;
    object _25177 = NOVALUE; // 48629 25177
    object _25176 = NOVALUE; // 48626 25176
    object _25175 = NOVALUE; // 48625 25175
// skipping _25174  name type: 0
    object _25173 = NOVALUE; // 48622 25173
    object _25172 = NOVALUE; // 48614 25172
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg include_routine pc: 1 op: STARTLINE (58)

    /** coverage.e:256		if coverage_on() then*/
    // SubProg include_routine pc: 3 op: PROC (27)
    _25172 = _50coverage_on();
    // SubProg include_routine pc: 6 op: IF (20)
    if (_25172 == 0) {
        DeRef(_25172);
        _25172 = NOVALUE;
        goto L1; // [6] 69
    }
    else {
        if (!IS_ATOM_INT(_25172) && DBL_PTR(_25172)->dbl == 0.0){
            DeRef(_25172);
            _25172 = NOVALUE;
            goto L1; // [6] 69
        }
        DeRef(_25172);
        _25172 = NOVALUE;
    }
    DeRef(_25172);
    _25172 = NOVALUE;
    // SubProg include_routine pc: 9 op: STARTLINE (58)

    /** coverage.e:257			emit_op( COVERAGE_ROUTINE )*/
    // SubProg include_routine pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 13 op: PROC (27)
    _45emit_op(211);
    // SubProg include_routine pc: 16 op: STARTLINE (58)

    /** coverage.e:258			emit_addr( CurrentSub )*/
    // SubProg include_routine pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 20 op: PROC (27)
    _45emit_addr(_34CurrentSub_15196);
    // SubProg include_routine pc: 23 op: STARTLINE (58)

    /** coverage.e:261			integer file_no = SymTab[CurrentSub][S_FILE_NO]*/
    // SubProg include_routine pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25173 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg include_routine pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25173);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _file_no_48619 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _file_no_48619 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_file_no_48619)){
        _file_no_48619 = (object)DBL_PTR(_file_no_48619)->dbl;
    }
    _25173 = NOVALUE;
    // SubProg include_routine pc: 41 op: STARTLINE (58)

    /** coverage.e:262			map:put( routine_map[file_coverage[file_no]], sym_name( CurrentSub ), 0, map:ADD )*/
    // SubProg include_routine pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50file_coverage_48300);
    _25175 = (object)*(((s1_ptr)_2)->base + _file_no_48619);
    // SubProg include_routine pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50routine_map_48305);
    _25176 = (object)*(((s1_ptr)_2)->base + _25175);
    // SubProg include_routine pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 57 op: PROC (27)
    _25177 = _53sym_name(_34CurrentSub_15196);
    // SubProg include_routine pc: 61 op: PROC (27)
    Ref(_25176);
    _28put(_25176, _25177, 0, 2, 0);
    _25176 = NOVALUE;
    _25177 = NOVALUE;
    // SubProg include_routine pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 48611 op: 159
    // SubProg include_routine pc: 69 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var file_no_48619
    // SubProg include_routine pc: 71 op: STARTLINE (58)

    /** coverage.e:264	end procedure*/
    // SubProg include_routine pc: 73 op: RETURNP (29)

// Exiting block BLOCK: include_routine
    _25175 = NOVALUE;
    return;
    // SubProg include_routine pc: 76 op: BADRETURNF (43)
    ;
}


void _50process_lines()
{
    object _sline_48647 = NOVALUE;
    object _file_48651 = NOVALUE;
    object _line_48661 = NOVALUE;
    object _25195 = NOVALUE; // 48664 25195
// skipping _25194  name type: 0
    object _25193 = NOVALUE; // 48660 25193
    object _25192 = NOVALUE; // 48659 25192
    object _25191 = NOVALUE; // 48658 25191
    object _25190 = NOVALUE; // 48657 25190
    object _25189 = NOVALUE; // 48656 25189
// skipping _25188  name type: 0
    object _25187 = NOVALUE; // 48653 25187
// skipping _25186  name type: 0
    object _25185 = NOVALUE; // 48649 25185
    object _25184 = NOVALUE; // 48646 25184
// skipping _25183  name type: 0
    object _25182 = NOVALUE; // 48639 25182
    object _25181 = NOVALUE; // 48638 25181
    object _25180 = NOVALUE; // 48637 25180
// skipping _25179  name type: 0
    object _25178 = NOVALUE; // 48633 25178
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg process_lines pc: 1 op: STARTLINE (58)

    /** coverage.e:267		if not length( included_lines ) then*/
    // SubProg process_lines pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_50included_lines_48306)){
            _25178 = SEQ_PTR(_50included_lines_48306)->length;
    }
    else {
        _25178 = 1;
    }
    // SubProg process_lines pc: 8 op: NOT_IFW (108)
    if (_25178 != 0)
    goto L1; // [8] 17
    _25178 = NOVALUE;
    // SubProg process_lines pc: 11 op: STARTLINE (58)

    /** coverage.e:268			return*/
    // SubProg process_lines pc: 13 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: process_lines
    return;
    // SubProg process_lines pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 48630 op: 159
    // SubProg process_lines pc: 17 op: STARTLINE (58)

    /** coverage.e:270		if atom(slist[$]) then*/
    // SubProg process_lines pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _25180 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _25180 = 1;
    }
    // SubProg process_lines pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34slist_15278);
    _25181 = (object)*(((s1_ptr)_2)->base + _25180);
    // SubProg process_lines pc: 28 op: IS_AN_ATOM (67)
    _25182 = IS_ATOM(_25181);
    _25181 = NOVALUE;
    // SubProg process_lines pc: 31 op: IF (20)
    if (_25182 == 0)
    {
        _25182 = NOVALUE;
        goto L2; // [31] 45
    }
    else{
        _25182 = NOVALUE;
    }
    // SubProg process_lines pc: 34 op: STARTLINE (58)

    /** coverage.e:271			slist = s_expand( slist )*/
    // SubProg process_lines pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 38 op: PROC (27)
    RefDS(_34slist_15278);
    _0 = _61s_expand(_34slist_15278);
    DeRefDS(_34slist_15278);
    _34slist_15278 = _0;
    // SubProg process_lines pc: 42 op: SEQUENCE_CHECK (97)
    // SubProg process_lines pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 48630 op: 159
    // SubProg process_lines pc: 45 op: STARTLINE (58)

    /** coverage.e:273		for i = 1 to length( included_lines ) do*/
    // SubProg process_lines pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_50included_lines_48306)){
            _25184 = SEQ_PTR(_50included_lines_48306)->length;
    }
    else {
        _25184 = 1;
    }
    // SubProg process_lines pc: 52 op: FOR_I (125)
    {
        object _i_48645;
        _i_48645 = 1;
L3: // addr: 59 pc: 52 sub: 48630 op: 125
        if (_i_48645 > _25184){
            goto L4; // [52] 157
        }
        // SubProg process_lines pc: 59 op: STARTLINE (58)

        /** coverage.e:274			sequence sline = slist[included_lines[i]]*/
        // SubProg process_lines pc: 61 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 63 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 65 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50included_lines_48306);
        _25185 = (object)*(((s1_ptr)_2)->base + _i_48645);
        // SubProg process_lines pc: 69 op: RHS_SUBS_CHECK (92)
        DeRef(_sline_48647);
        _2 = (object)SEQ_PTR(_34slist_15278);
        _sline_48647 = (object)*(((s1_ptr)_2)->base + _25185);
        Ref(_sline_48647);
        // SubProg process_lines pc: 73 op: SEQUENCE_CHECK (97)
        // SubProg process_lines pc: 75 op: STARTLINE (58)

        /** coverage.e:275			integer file = file_coverage[sline[LOCAL_FILE_NO]]*/
        // SubProg process_lines pc: 77 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sline_48647);
        _25187 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg process_lines pc: 85 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_50file_coverage_48300);
        if (!IS_ATOM_INT(_25187)){
            _file_48651 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_25187)->dbl));
        }
        else{
            _file_48651 = (object)*(((s1_ptr)_2)->base + _25187);
        }
        // SubProg process_lines pc: 89 op: STARTLINE (58)

        /** coverage.e:276			if file and file <= length( line_map ) and line_map[file] then*/
        // SubProg process_lines pc: 91 op: SC1_AND (141)
        if (_file_48651 == 0) {
            _25189 = 0;
            goto L5; // [91] 108
        }
        // SubProg process_lines pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 97 op: LENGTH (42)
        if (IS_SEQUENCE(_50line_map_48304)){
                _25190 = SEQ_PTR(_50line_map_48304)->length;
        }
        else {
            _25190 = 1;
        }
        // SubProg process_lines pc: 100 op: LESSEQ (5)
        _25191 = (_file_48651 <= _25190);
        _25190 = NOVALUE;
        // SubProg process_lines pc: 104 op: SC2_AND (142)
        _25189 = (_25191 != 0);
        // SubProg process_lines pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 48630 op: 159
        // SubProg process_lines pc: 108 op: SC1_AND_IF (146)
        if (_25189 == 0) {
            goto L6; // [108] 146
        }
        // SubProg process_lines pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 114 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50line_map_48304);
        _25193 = (object)*(((s1_ptr)_2)->base + _file_48651);
        // SubProg process_lines pc: 118 op: NOP1 (159)
        // SubProg process_lines pc: 119 op: IF (20)
        if (_25193 == 0) {
            _25193 = NOVALUE;
            goto L6; // [119] 146
        }
        else {
            if (!IS_ATOM_INT(_25193) && DBL_PTR(_25193)->dbl == 0.0){
                _25193 = NOVALUE;
                goto L6; // [119] 146
            }
            _25193 = NOVALUE;
        }
        _25193 = NOVALUE;
        // SubProg process_lines pc: 122 op: STARTLINE (58)

        /** coverage.e:277				integer line = sline[LINE]*/
        // SubProg process_lines pc: 124 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 126 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_sline_48647);
        _line_48661 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_line_48661))
        _line_48661 = (object)DBL_PTR(_line_48661)->dbl;
        // SubProg process_lines pc: 130 op: STARTLINE (58)

        /** coverage.e:278				map:put( line_map[file], line, 0, map:ADD )*/
        // SubProg process_lines pc: 132 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 134 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50line_map_48304);
        _25195 = (object)*(((s1_ptr)_2)->base + _file_48651);
        // SubProg process_lines pc: 138 op: PROC (27)
        Ref(_25195);
        _28put(_25195, _line_48661, 0, 2, 0);
        _25195 = NOVALUE;
        // SubProg process_lines pc: 145 op: NOP1 (159)
L6: // addr: 146 pc: 145 sub: 48630 op: 159
        // SubProg process_lines pc: 146 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var line_48661
        // SubProg process_lines pc: 148 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var sline_48647
        DeRef(_sline_48647);
        _sline_48647 = NOVALUE;

// block var file_48651
        // SubProg process_lines pc: 150 op: STARTLINE (58)

        /** coverage.e:280		end for*/
        // SubProg process_lines pc: 152 op: ENDFOR_INT_UP1 (54)
        _i_48645 = _i_48645 + 1;
        goto L3; // [152] 59
L4: // addr: 157 pc: 152 sub: 48630 op: 54
        ;
    }
    // SubProg process_lines pc: 157 op: STARTLINE (58)

    /** coverage.e:281	end procedure*/
    // SubProg process_lines pc: 159 op: RETURNP (29)

// Exiting block BLOCK: process_lines
    DeRef(_25191);
    _25191 = NOVALUE;
    _25187 = NOVALUE;
    _25185 = NOVALUE;
    return;
    // SubProg process_lines pc: 162 op: BADRETURNF (43)
    ;
}


object _50cover_line(object _gline_number_48667)
{
    object _sline_48677 = NOVALUE;
    object _file_48680 = NOVALUE;
    object _line_48685 = NOVALUE;
    object _25204 = NOVALUE; // 48688 25204
// skipping _25203  name type: 0
// skipping _25202  name type: 0
    object _25201 = NOVALUE; // 48682 25201
// skipping _25200  name type: 0
// skipping _25199  name type: 0
    object _25198 = NOVALUE; // 48672 25198
    object _25197 = NOVALUE; // 48671 25197
    object _25196 = NOVALUE; // 48670 25196
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cover_line pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_gline_number_48667)) {
        _1 = (object)(DBL_PTR(_gline_number_48667)->dbl);
        DeRefDS(_gline_number_48667);
        _gline_number_48667 = _1;
    }
    // SubProg cover_line pc: 3 op: STARTLINE (58)

    /** coverage.e:284		if atom(slist[$]) then*/
    // SubProg cover_line pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _25196 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _25196 = 1;
    }
    // SubProg cover_line pc: 10 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34slist_15278);
    _25197 = (object)*(((s1_ptr)_2)->base + _25196);
    // SubProg cover_line pc: 14 op: IS_AN_ATOM (67)
    _25198 = IS_ATOM(_25197);
    _25197 = NOVALUE;
    // SubProg cover_line pc: 17 op: IF (20)
    if (_25198 == 0)
    {
        _25198 = NOVALUE;
        goto L1; // [17] 31
    }
    else{
        _25198 = NOVALUE;
    }
    // SubProg cover_line pc: 20 op: STARTLINE (58)

    /** coverage.e:285			slist = s_expand(slist)*/
    // SubProg cover_line pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 24 op: PROC (27)
    RefDS(_34slist_15278);
    _0 = _61s_expand(_34slist_15278);
    DeRefDS(_34slist_15278);
    _34slist_15278 = _0;
    // SubProg cover_line pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg cover_line pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 48665 op: 159
    // SubProg cover_line pc: 31 op: STARTLINE (58)

    /** coverage.e:287		sequence sline = slist[gline_number]*/
    // SubProg cover_line pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 35 op: RHS_SUBS_CHECK (92)
    DeRef(_sline_48677);
    _2 = (object)SEQ_PTR(_34slist_15278);
    _sline_48677 = (object)*(((s1_ptr)_2)->base + _gline_number_48667);
    Ref(_sline_48677);
    // SubProg cover_line pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg cover_line pc: 41 op: STARTLINE (58)

    /** coverage.e:288		integer file = file_coverage[sline[LOCAL_FILE_NO]]*/
    // SubProg cover_line pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sline_48677);
    _25201 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg cover_line pc: 51 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_50file_coverage_48300);
    if (!IS_ATOM_INT(_25201)){
        _file_48680 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_25201)->dbl));
    }
    else{
        _file_48680 = (object)*(((s1_ptr)_2)->base + _25201);
    }
    // SubProg cover_line pc: 55 op: STARTLINE (58)

    /** coverage.e:289		if file then*/
    // SubProg cover_line pc: 57 op: IF (20)
    if (_file_48680 == 0)
    {
        goto L2; // [57] 84
    }
    else{
    }
    // SubProg cover_line pc: 60 op: STARTLINE (58)

    /** coverage.e:290			integer line = sline[LINE]*/
    // SubProg cover_line pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 64 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sline_48677);
    _line_48685 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_line_48685))
    _line_48685 = (object)DBL_PTR(_line_48685)->dbl;
    // SubProg cover_line pc: 68 op: STARTLINE (58)

    /** coverage.e:291			map:put( line_map[file], line, 1, map:ADD )*/
    // SubProg cover_line pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50line_map_48304);
    _25204 = (object)*(((s1_ptr)_2)->base + _file_48680);
    // SubProg cover_line pc: 76 op: PROC (27)
    Ref(_25204);
    _28put(_25204, _line_48685, 1, 2, 0);
    _25204 = NOVALUE;
    // SubProg cover_line pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 48665 op: 159
    // SubProg cover_line pc: 84 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var line_48685
    // SubProg cover_line pc: 86 op: STARTLINE (58)

    /** coverage.e:293		return 0*/
    // SubProg cover_line pc: 88 op: RETURNF (28)

// Exiting block BLOCK: cover_line

// block var gline_number_48667

// block var sline_48677
    DeRef(_sline_48677);

// block var file_48680
    _25201 = NOVALUE;
    return 0;
    // SubProg cover_line pc: 92 op: BADRETURNF (43)
    ;
}


object _50cover_routine(object _sub_48692)
{
    object _file_no_48693 = NOVALUE;
    object _25209 = NOVALUE; // 48701 25209
    object _25208 = NOVALUE; // 48699 25208
    object _25207 = NOVALUE; // 48698 25207
// skipping _25206  name type: 0
    object _25205 = NOVALUE; // 48695 25205
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cover_routine pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sub_48692)) {
        _1 = (object)(DBL_PTR(_sub_48692)->dbl);
        DeRefDS(_sub_48692);
        _sub_48692 = _1;
    }
    // SubProg cover_routine pc: 3 op: STARTLINE (58)

    /** coverage.e:297		integer file_no = SymTab[sub][S_FILE_NO]*/
    // SubProg cover_routine pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25205 = (object)*(((s1_ptr)_2)->base + _sub_48692);
    // SubProg cover_routine pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25205);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _file_no_48693 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _file_no_48693 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_file_no_48693)){
        _file_no_48693 = (object)DBL_PTR(_file_no_48693)->dbl;
    }
    _25205 = NOVALUE;
    // SubProg cover_routine pc: 19 op: STARTLINE (58)

    /** coverage.e:298		map:put( routine_map[file_coverage[file_no]], sym_name( sub ), 1, map:ADD )*/
    // SubProg cover_routine pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50file_coverage_48300);
    _25207 = (object)*(((s1_ptr)_2)->base + _file_no_48693);
    // SubProg cover_routine pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50routine_map_48305);
    _25208 = (object)*(((s1_ptr)_2)->base + _25207);
    // SubProg cover_routine pc: 33 op: PROC (27)
    _25209 = _53sym_name(_sub_48692);
    // SubProg cover_routine pc: 37 op: PROC (27)
    Ref(_25208);
    _28put(_25208, _25209, 1, 2, 0);
    _25208 = NOVALUE;
    _25209 = NOVALUE;
    // SubProg cover_routine pc: 44 op: STARTLINE (58)

    /** coverage.e:299		return 0*/
    // SubProg cover_routine pc: 46 op: RETURNF (28)

// Exiting block BLOCK: cover_routine

// block var sub_48692

// block var file_no_48693
    _25207 = NOVALUE;
    return 0;
    // SubProg cover_routine pc: 50 op: BADRETURNF (43)
    ;
}


object _50has_coverage()
{
    object _25210 = NOVALUE; // 48704 25210
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:303		return length( covered_files )*/
    // SubProg has_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_coverage pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_50covered_files_48299)){
            _25210 = SEQ_PTR(_50covered_files_48299)->length;
    }
    else {
        _25210 = 1;
    }
    // SubProg has_coverage pc: 8 op: RETURNF (28)

// Exiting block BLOCK: has_coverage
    return _25210;
    // SubProg has_coverage pc: 12 op: BADRETURNF (43)
    ;
}



// 0x38C957F3
