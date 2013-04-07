// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _51check_coverage()
{
// skipping _25040  name type: 0
    object _25039 = NOVALUE; // 48318 25039
    object _25038 = NOVALUE; // 48317 25038
    object _25037 = NOVALUE; // 48316 25037
    object _25036 = NOVALUE; // 48313 25036
    object _25035 = NOVALUE; // 48311 25035
    object _25034 = NOVALUE; // 48310 25034
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:45		for i = length( file_coverage ) + 1 to length( known_files ) do*/
    // SubProg check_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_coverage pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_51file_coverage_48298)){
            _25034 = SEQ_PTR(_51file_coverage_48298)->length;
    }
    else {
        _25034 = 1;
    }
    // SubProg check_coverage pc: 8 op: PLUS1 (93)
    _25035 = _25034 + 1;
    _25034 = NOVALUE;
    // SubProg check_coverage pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_coverage pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _25036 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _25036 = 1;
    }
    // SubProg check_coverage pc: 17 op: FOR (21)
    {
        object _i_48309;
        _i_48309 = _25035;
L1: // addr: 24 pc: 17 sub: 48306 op: 21
        if (_i_48309 > _25036){
            goto L2; // [17] 58
        }
        // SubProg check_coverage pc: 24 op: STARTLINE (58)

        /** coverage.e:46			file_coverage &= find( canonical_path( known_files[i],,1 ), covered_files )*/
        // SubProg check_coverage pc: 26 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37known_files_15406);
        _25037 = (object)*(((s1_ptr)_2)->base + _i_48309);
        // SubProg check_coverage pc: 34 op: PROC (27)
        Ref(_25037);
        _25038 = _20canonical_path(_25037, 0, 1);
        _25037 = NOVALUE;
        // SubProg check_coverage pc: 40 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 42 op: FIND_FROM (176)
        _25039 = find_from(_25038, _51covered_files_48297, 1);
        DeRef(_25038);
        _25038 = NOVALUE;
        // SubProg check_coverage pc: 47 op: CONCAT (15)
        Append(&_51file_coverage_48298, _51file_coverage_48298, _25039);
        _25039 = NOVALUE;
        // SubProg check_coverage pc: 51 op: STARTLINE (58)

        /** coverage.e:47		end for*/
        // SubProg check_coverage pc: 53 op: ENDFOR_INT_UP1 (54)
        _i_48309 = _i_48309 + 1;
        goto L1; // [53] 24
L2: // addr: 58 pc: 53 sub: 48306 op: 54
        ;
    }
    // SubProg check_coverage pc: 58 op: STARTLINE (58)

    /** coverage.e:48	end procedure*/
    // SubProg check_coverage pc: 60 op: RETURNP (29)

// Exiting block BLOCK: check_coverage
    DeRef(_25035);
    _25035 = NOVALUE;
    return;
    // SubProg check_coverage pc: 63 op: BADRETURNF (43)
    ;
}


void _51init_coverage()
{
    object _cmd_48333 = NOVALUE;
// skipping _25058  name type: 0
    object _25057 = NOVALUE; // 48354 25057
    object _25056 = NOVALUE; // 48351 25056
// skipping _25055  name type: 0
    object _25054 = NOVALUE; // 48348 25054
    object _25053 = NOVALUE; // 48345 25053
    object _25052 = NOVALUE; // 48343 25052
// skipping _25051  name type: 0
    object _25050 = NOVALUE; // 48340 25050
    object _25048 = NOVALUE; // 48338 25048
    object _25047 = NOVALUE; // 48337 25047
// skipping _25046  name type: 0
    object _25045 = NOVALUE; // 48332 25045
    object _25044 = NOVALUE; // 48330 25044
    object _25043 = NOVALUE; // 48329 25043
    object _25042 = NOVALUE; // 48328 25042
    object _25041 = NOVALUE; // 48325 25041
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:54		if initialized_coverage then*/
    // SubProg init_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 5 op: IF (20)
    if (_51initialized_coverage_48305 == 0)
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
L1: // addr: 14 pc: 13 sub: 48320 op: 159
    // SubProg init_coverage pc: 14 op: STARTLINE (58)

    /** coverage.e:57		initialized_coverage = 1*/
    // SubProg init_coverage pc: 16 op: ASSIGN_I (113)
    _51initialized_coverage_48305 = 1;
    // SubProg init_coverage pc: 19 op: STARTLINE (58)

    /** coverage.e:58		for i = 1 to length( file_coverage ) do*/
    // SubProg init_coverage pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_51file_coverage_48298)){
            _25041 = SEQ_PTR(_51file_coverage_48298)->length;
    }
    else {
        _25041 = 1;
    }
    // SubProg init_coverage pc: 26 op: FOR_I (125)
    {
        object _i_48324;
        _i_48324 = 1;
L2: // addr: 33 pc: 26 sub: 48320 op: 125
        if (_i_48324 > _25041){
            goto L3; // [26] 67
        }
        // SubProg init_coverage pc: 33 op: STARTLINE (58)

        /** coverage.e:59			file_coverage[i] = find( canonical_path( known_files[i],,1 ), covered_files )*/
        // SubProg init_coverage pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37known_files_15406);
        _25042 = (object)*(((s1_ptr)_2)->base + _i_48324);
        // SubProg init_coverage pc: 43 op: PROC (27)
        Ref(_25042);
        _25043 = _20canonical_path(_25042, 0, 1);
        _25042 = NOVALUE;
        // SubProg init_coverage pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 51 op: FIND_FROM (176)
        _25044 = find_from(_25043, _51covered_files_48297, 1);
        DeRef(_25043);
        _25043 = NOVALUE;
        // SubProg init_coverage pc: 56 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_51file_coverage_48298);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _51file_coverage_48298 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_48324);
        *(intptr_t *)_2 = _25044;
        if( _1 != _25044 ){
        }
        _25044 = NOVALUE;
        // SubProg init_coverage pc: 60 op: STARTLINE (58)

        /** coverage.e:60		end for*/
        // SubProg init_coverage pc: 62 op: ENDFOR_INT_UP1 (54)
        _i_48324 = _i_48324 + 1;
        goto L2; // [62] 33
L3: // addr: 67 pc: 62 sub: 48320 op: 54
        ;
    }
    // SubProg init_coverage pc: 67 op: STARTLINE (58)

    /** coverage.e:62		if equal( coverage_db_name, "" ) then*/
    // SubProg init_coverage pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 71 op: EQUAL (153)
    if (_51coverage_db_name_48299 == _21933)
    _25045 = 1;
    else if (IS_ATOM_INT(_51coverage_db_name_48299) && IS_ATOM_INT(_21933))
    _25045 = 0;
    else
    _25045 = (compare(_51coverage_db_name_48299, _21933) == 0);
    // SubProg init_coverage pc: 75 op: IF (20)
    if (_25045 == 0)
    {
        _25045 = NOVALUE;
        goto L4; // [75] 105
    }
    else{
        _25045 = NOVALUE;
    }
    // SubProg init_coverage pc: 78 op: STARTLINE (58)

    /** coverage.e:63			sequence cmd = command_line()*/
    // SubProg init_coverage pc: 80 op: COMMAND_LINE (100)
    DeRef(_cmd_48333);
    _cmd_48333 = Command_Line();
    // SubProg init_coverage pc: 82 op: STARTLINE (58)

    /** coverage.e:64			coverage_db_name = canonical_path( filebase( cmd[2] ) & "-cvg.edb" )*/
    // SubProg init_coverage pc: 84 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_48333);
    _25047 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg init_coverage pc: 88 op: PROC (27)
    RefDS(_25047);
    _25048 = _20filebase(_25047);
    _25047 = NOVALUE;
    // SubProg init_coverage pc: 92 op: CONCAT (15)
    if (IS_SEQUENCE(_25048) && IS_ATOM(_25049)) {
    }
    else if (IS_ATOM(_25048) && IS_SEQUENCE(_25049)) {
        Ref(_25048);
        Prepend(&_25050, _25049, _25048);
    }
    else {
        Concat((object_ptr)&_25050, _25048, _25049);
        DeRef(_25048);
        _25048 = NOVALUE;
    }
    DeRef(_25048);
    _25048 = NOVALUE;
    // SubProg init_coverage pc: 96 op: PROC (27)
    _0 = _20canonical_path(_25050, 0, 0);
    DeRefDS(_51coverage_db_name_48299);
    _51coverage_db_name_48299 = _0;
    _25050 = NOVALUE;
    // SubProg init_coverage pc: 102 op: SEQUENCE_CHECK (97)
    // SubProg init_coverage pc: 104 op: NOP1 (159)
L4: // addr: 105 pc: 104 sub: 48320 op: 159
    // SubProg init_coverage pc: 105 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cmd_48333
    DeRef(_cmd_48333);
    _cmd_48333 = NOVALUE;
    // SubProg init_coverage pc: 107 op: STARTLINE (58)

    /** coverage.e:67		if coverage_erase and file_exists( coverage_db_name ) then*/
    // SubProg init_coverage pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 111 op: SC1_AND_IF (146)
    if (0 == 0) {
        goto L5; // [111] 151
    }
    // SubProg init_coverage pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 117 op: PROC (27)
    RefDS(_51coverage_db_name_48299);
    _25053 = _20file_exists(_51coverage_db_name_48299);
    // SubProg init_coverage pc: 121 op: NOP1 (159)
    // SubProg init_coverage pc: 122 op: IF (20)
    if (_25053 == 0) {
        DeRef(_25053);
        _25053 = NOVALUE;
        goto L5; // [122] 151
    }
    else {
        if (!IS_ATOM_INT(_25053) && DBL_PTR(_25053)->dbl == 0.0){
            DeRef(_25053);
            _25053 = NOVALUE;
            goto L5; // [122] 151
        }
        DeRef(_25053);
        _25053 = NOVALUE;
    }
    DeRef(_25053);
    _25053 = NOVALUE;
    // SubProg init_coverage pc: 125 op: STARTLINE (58)

    /** coverage.e:68			if not delete_file( coverage_db_name ) then*/
    // SubProg init_coverage pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 129 op: PROC (27)
    RefDS(_51coverage_db_name_48299);
    _25054 = _20delete_file(_51coverage_db_name_48299);
    // SubProg init_coverage pc: 133 op: NOT_IFW (108)
    if (IS_ATOM_INT(_25054)) {
        if (_25054 != 0){
            DeRef(_25054);
            _25054 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    else {
        if (DBL_PTR(_25054)->dbl != 0.0){
            DeRef(_25054);
            _25054 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    DeRef(_25054);
    _25054 = NOVALUE;
    // SubProg init_coverage pc: 136 op: STARTLINE (58)

    /** coverage.e:69				CompileErr( 335, { coverage_db_name } )*/
    // SubProg init_coverage pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 140 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_51coverage_db_name_48299);
    ((intptr_t*)_2)[1] = _51coverage_db_name_48299;
    _25056 = MAKE_SEQ(_1);
    // SubProg init_coverage pc: 144 op: PROC (27)
    _50CompileErr(335, _25056, 0);
    _25056 = NOVALUE;
    // SubProg init_coverage pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 48320 op: 159
    // SubProg init_coverage pc: 150 op: NOP1 (159)
L5: // addr: 151 pc: 150 sub: 48320 op: 159
    // SubProg init_coverage pc: 151 op: STARTLINE (58)

    /** coverage.e:73		if db_open( coverage_db_name ) = DB_OK then*/
    // SubProg init_coverage pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 155 op: PROC (27)
    RefDS(_51coverage_db_name_48299);
    _25057 = _46db_open(_51coverage_db_name_48299, 0);
    // SubProg init_coverage pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 162 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25057, 0)){
        DeRef(_25057);
        _25057 = NOVALUE;
        goto L7; // [162] 175
    }
    DeRef(_25057);
    _25057 = NOVALUE;
    // SubProg init_coverage pc: 166 op: STARTLINE (58)

    /** coverage.e:74			read_coverage_db()*/
    // SubProg init_coverage pc: 168 op: PROC (27)
    _51read_coverage_db();
    // SubProg init_coverage pc: 170 op: STARTLINE (58)

    /** coverage.e:75			db_close()*/
    // SubProg init_coverage pc: 172 op: PROC (27)
    _46db_close();
    // SubProg init_coverage pc: 174 op: NOP1 (159)
L7: // addr: 175 pc: 174 sub: 48320 op: 159
    // SubProg init_coverage pc: 175 op: STARTLINE (58)

    /** coverage.e:77	end procedure*/
    // SubProg init_coverage pc: 177 op: RETURNP (29)

// Exiting block BLOCK: init_coverage
    return;
    // SubProg init_coverage pc: 180 op: BADRETURNF (43)
    ;
}


void _51read_coverage_db()
{
    object _tables_48436 = NOVALUE;
    object _name_48442 = NOVALUE;
    object _fx_48446 = NOVALUE;
    object _the_map_48453 = NOVALUE;
    object _31695 = NOVALUE; // 63903 31695
    object _25105 = NOVALUE; // 48468 25105
    object _25104 = NOVALUE; // 48466 25104
    object _25103 = NOVALUE; // 48464 25103
// skipping _25102  name type: 0
// skipping _25101  name type: 0
// skipping _25100  name type: 0
    object _25099 = NOVALUE; // 48456 25099
    object _25098 = NOVALUE; // 48455 25098
    object _25097 = NOVALUE; // 48451 25097
// skipping _25096  name type: 0
// skipping _25095  name type: 0
// skipping _25094  name type: 0
    object _25093 = NOVALUE; // 48444 25093
    object _25092 = NOVALUE; // 48443 25092
    object _25091 = NOVALUE; // 48441 25091
// skipping _25090  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_coverage_db pc: 1 op: STARTLINE (58)

    /** coverage.e:135		sequence tables = db_table_list()*/
    // SubProg read_coverage_db pc: 3 op: PROC (27)
    _0 = _tables_48436;
    _tables_48436 = _46db_table_list();
    DeRef(_0);
    // SubProg read_coverage_db pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg read_coverage_db pc: 8 op: STARTLINE (58)

    /** coverage.e:137		for i = 1 to length( tables ) do*/
    // SubProg read_coverage_db pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_tables_48436)){
            _25091 = SEQ_PTR(_tables_48436)->length;
    }
    else {
        _25091 = 1;
    }
    // SubProg read_coverage_db pc: 13 op: FOR_I (125)
    {
        object _i_48440;
        _i_48440 = 1;
L1: // addr: 20 pc: 13 sub: 48434 op: 125
        if (_i_48440 > _25091){
            goto L2; // [13] 157
        }
        // SubProg read_coverage_db pc: 20 op: STARTLINE (58)

        /** coverage.e:138			sequence name = tables[i][2..$]*/
        // SubProg read_coverage_db pc: 22 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48436);
        _25092 = (object)*(((s1_ptr)_2)->base + _i_48440);
        // SubProg read_coverage_db pc: 26 op: LENGTH (42)
        if (IS_SEQUENCE(_25092)){
                _25093 = SEQ_PTR(_25092)->length;
        }
        else {
            _25093 = 1;
        }
        // SubProg read_coverage_db pc: 29 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_name_48442;
        RHS_Slice(_25092, 2, _25093);
        _25092 = NOVALUE;
        // SubProg read_coverage_db pc: 34 op: STARTLINE (58)

        /** coverage.e:139			integer fx = find( name, covered_files )*/
        // SubProg read_coverage_db pc: 36 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 38 op: FIND_FROM (176)
        _fx_48446 = find_from(_name_48442, _51covered_files_48297, 1);
        // SubProg read_coverage_db pc: 43 op: STARTLINE (58)

        /** coverage.e:140			if not fx then*/
        // SubProg read_coverage_db pc: 45 op: NOT_IFW (108)
        if (_fx_48446 != 0)
        goto L3; // [45] 55
        // SubProg read_coverage_db pc: 48 op: STARTLINE (58)

        /** coverage.e:141				continue*/
        // SubProg read_coverage_db pc: 50 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var name_48442
        DeRefDS(_name_48442);
        _name_48442 = NOVALUE;

// block var fx_48446

// block var the_map_48453
        DeRef(_the_map_48453);
        _the_map_48453 = NOVALUE;
        // SubProg read_coverage_db pc: 52 op: ELSE (23)
        goto L4; // [52] 152
        // SubProg read_coverage_db pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 48434 op: 159
        // SubProg read_coverage_db pc: 55 op: STARTLINE (58)

        /** coverage.e:144			db_select_table( tables[i] )*/
        // SubProg read_coverage_db pc: 57 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48436);
        _25097 = (object)*(((s1_ptr)_2)->base + _i_48440);
        // SubProg read_coverage_db pc: 61 op: PROC (27)
        Ref(_25097);
        _31695 = _46db_select_table(_25097);
        _25097 = NOVALUE;
        // SubProg read_coverage_db pc: 65 op: DEREF_TEMP (208)
        DeRef(_31695);
        _31695 = NOVALUE;
        // SubProg read_coverage_db pc: 67 op: STARTLINE (58)

        /** coverage.e:146			if tables[i][1] = 'r' then*/
        // SubProg read_coverage_db pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48436);
        _25098 = (object)*(((s1_ptr)_2)->base + _i_48440);
        // SubProg read_coverage_db pc: 73 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25098);
        _25099 = (object)*(((s1_ptr)_2)->base + 1);
        _25098 = NOVALUE;
        // SubProg read_coverage_db pc: 77 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25099, 114)){
            _25099 = NOVALUE;
            goto L5; // [77] 92
        }
        _25099 = NOVALUE;
        // SubProg read_coverage_db pc: 81 op: STARTLINE (58)

        /** coverage.e:148				the_map = routine_map[fx]*/
        // SubProg read_coverage_db pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 85 op: RHS_SUBS (25)
        DeRef(_the_map_48453);
        _2 = (object)SEQ_PTR(_51routine_map_48303);
        _the_map_48453 = (object)*(((s1_ptr)_2)->base + _fx_48446);
        Ref(_the_map_48453);
        // SubProg read_coverage_db pc: 89 op: ELSE (23)
        goto L6; // [89] 101
        // SubProg read_coverage_db pc: 91 op: NOP1 (159)
L5: // addr: 92 pc: 91 sub: 48434 op: 159
        // SubProg read_coverage_db pc: 92 op: STARTLINE (58)

        /** coverage.e:152				the_map = line_map[fx]*/
        // SubProg read_coverage_db pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 96 op: RHS_SUBS (25)
        DeRef(_the_map_48453);
        _2 = (object)SEQ_PTR(_51line_map_48302);
        _the_map_48453 = (object)*(((s1_ptr)_2)->base + _fx_48446);
        Ref(_the_map_48453);
        // SubProg read_coverage_db pc: 100 op: NOP1 (159)
L6: // addr: 101 pc: 100 sub: 48434 op: 159
        // SubProg read_coverage_db pc: 101 op: STARTLINE (58)

        /** coverage.e:156			for j = 1 to db_table_size() do*/
        // SubProg read_coverage_db pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 105 op: PROC (27)
        RefDS(_46current_table_name_17335);
        _25103 = _46db_table_size(_46current_table_name_17335);
        // SubProg read_coverage_db pc: 109 op: FOR (21)
        {
            object _j_48462;
            _j_48462 = 1;
L7: // addr: 116 pc: 109 sub: 48434 op: 21
            if (binary_op_a(GREATER, _j_48462, _25103)){
                goto L8; // [109] 148
            }
            // SubProg read_coverage_db pc: 116 op: STARTLINE (58)

            /** coverage.e:157				map:put( the_map, db_record_key( j ), db_record_data( j ), map:ADD )*/
            // SubProg read_coverage_db pc: 118 op: PRIVATE_INIT_CHECK (30)
            // SubProg read_coverage_db pc: 120 op: GLOBAL_INIT_CHECK (109)
            // SubProg read_coverage_db pc: 122 op: PROC (27)
            Ref(_j_48462);
            RefDS(_46current_table_name_17335);
            _25104 = _46db_record_key(_j_48462, _46current_table_name_17335);
            // SubProg read_coverage_db pc: 127 op: GLOBAL_INIT_CHECK (109)
            // SubProg read_coverage_db pc: 129 op: PROC (27)
            Ref(_j_48462);
            RefDS(_46current_table_name_17335);
            _25105 = _46db_record_data(_j_48462, _46current_table_name_17335);
            // SubProg read_coverage_db pc: 134 op: PROC (27)
            Ref(_the_map_48453);
            _29put(_the_map_48453, _25104, _25105, 2, 0);
            _25104 = NOVALUE;
            _25105 = NOVALUE;
            // SubProg read_coverage_db pc: 141 op: STARTLINE (58)

            /** coverage.e:158			end for*/
            // SubProg read_coverage_db pc: 143 op: ENDFOR_INT_UP1 (54)
            _0 = _j_48462;
            if (IS_ATOM_INT(_j_48462)) {
                _j_48462 = _j_48462 + 1;
                if ((object)((uintptr_t)_j_48462 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_48462 = NewDouble((eudouble)_j_48462);
                }
            }
            else {
                _j_48462 = binary_op_a(PLUS, _j_48462, 1);
            }
            DeRef(_0);
            goto L7; // [143] 116
L8: // addr: 148 pc: 143 sub: 48434 op: 54
            ;
            DeRef(_j_48462);
        }
        // SubProg read_coverage_db pc: 148 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var name_48442
        DeRef(_name_48442);
        _name_48442 = NOVALUE;

// block var fx_48446

// block var the_map_48453
        DeRef(_the_map_48453);
        _the_map_48453 = NOVALUE;
        // SubProg read_coverage_db pc: 150 op: STARTLINE (58)

        /** coverage.e:160		end for*/
        // SubProg read_coverage_db pc: 152 op: ENDFOR_INT_UP1 (54)
L4: // addr: 152 pc: 152 sub: 48434 op: 54
        _i_48440 = _i_48440 + 1;
        goto L1; // [152] 20
L2: // addr: 157 pc: 152 sub: 48434 op: 54
        ;
    }
    // SubProg read_coverage_db pc: 157 op: STARTLINE (58)

    /** coverage.e:161	end procedure*/
    // SubProg read_coverage_db pc: 159 op: RETURNP (29)

// Exiting block BLOCK: read_coverage_db

// block var tables_48436
    DeRef(_tables_48436);
    DeRef(_25103);
    _25103 = NOVALUE;
    return;
    // SubProg read_coverage_db pc: 162 op: BADRETURNF (43)
    ;
}


object _51coverage_on()
{
    object _25106 = NOVALUE; // 48475 25106
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_on pc: 1 op: STARTLINE (58)

    /** coverage.e:170		return file_coverage[current_file_no]*/
    // SubProg coverage_on pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg coverage_on pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg coverage_on pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_51file_coverage_48298);
    _25106 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg coverage_on pc: 11 op: RETURNF (28)

// Exiting block BLOCK: coverage_on
    return _25106;
    // SubProg coverage_on pc: 15 op: BADRETURNF (43)
    ;
}


void _51include_line(object _line_number_48601)
{
// skipping _25168  name type: 0
    object _25167 = NOVALUE; // 48603 25167
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg include_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg include_line pc: 3 op: STARTLINE (58)

    /** coverage.e:247		if coverage_on() then*/
    // SubProg include_line pc: 5 op: PROC (27)
    _25167 = _51coverage_on();
    // SubProg include_line pc: 8 op: IF (20)
    if (_25167 == 0) {
        DeRef(_25167);
        _25167 = NOVALUE;
        goto L1; // [8] 34
    }
    else {
        if (!IS_ATOM_INT(_25167) && DBL_PTR(_25167)->dbl == 0.0){
            DeRef(_25167);
            _25167 = NOVALUE;
            goto L1; // [8] 34
        }
        DeRef(_25167);
        _25167 = NOVALUE;
    }
    DeRef(_25167);
    _25167 = NOVALUE;
    // SubProg include_line pc: 11 op: STARTLINE (58)

    /** coverage.e:248			emit_op( COVERAGE_LINE )*/
    // SubProg include_line pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 15 op: PROC (27)
    _47emit_op(210);
    // SubProg include_line pc: 18 op: STARTLINE (58)

    /** coverage.e:249			emit_addr( gline_number )*/
    // SubProg include_line pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 22 op: PROC (27)
    _47emit_addr(_36gline_number_16441);
    // SubProg include_line pc: 25 op: STARTLINE (58)

    /** coverage.e:251			included_lines &= line_number*/
    // SubProg include_line pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 29 op: CONCAT (15)
    Append(&_51included_lines_48304, _51included_lines_48304, _line_number_48601);
    // SubProg include_line pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 48599 op: 159
    // SubProg include_line pc: 34 op: STARTLINE (58)

    /** coverage.e:253	end procedure*/
    // SubProg include_line pc: 36 op: RETURNP (29)

// Exiting block BLOCK: include_line

// block var line_number_48601
    return;
    // SubProg include_line pc: 39 op: BADRETURNF (43)
    ;
}


void _51include_routine()
{
    object _file_no_48617 = NOVALUE;
    object _25174 = NOVALUE; // 48627 25174
    object _25173 = NOVALUE; // 48624 25173
    object _25172 = NOVALUE; // 48623 25172
// skipping _25171  name type: 0
    object _25170 = NOVALUE; // 48620 25170
    object _25169 = NOVALUE; // 48612 25169
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg include_routine pc: 1 op: STARTLINE (58)

    /** coverage.e:256		if coverage_on() then*/
    // SubProg include_routine pc: 3 op: PROC (27)
    _25169 = _51coverage_on();
    // SubProg include_routine pc: 6 op: IF (20)
    if (_25169 == 0) {
        DeRef(_25169);
        _25169 = NOVALUE;
        goto L1; // [6] 69
    }
    else {
        if (!IS_ATOM_INT(_25169) && DBL_PTR(_25169)->dbl == 0.0){
            DeRef(_25169);
            _25169 = NOVALUE;
            goto L1; // [6] 69
        }
        DeRef(_25169);
        _25169 = NOVALUE;
    }
    DeRef(_25169);
    _25169 = NOVALUE;
    // SubProg include_routine pc: 9 op: STARTLINE (58)

    /** coverage.e:257			emit_op( COVERAGE_ROUTINE )*/
    // SubProg include_routine pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 13 op: PROC (27)
    _47emit_op(211);
    // SubProg include_routine pc: 16 op: STARTLINE (58)

    /** coverage.e:258			emit_addr( CurrentSub )*/
    // SubProg include_routine pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 20 op: PROC (27)
    _47emit_addr(_36CurrentSub_16444);
    // SubProg include_routine pc: 23 op: STARTLINE (58)

    /** coverage.e:261			integer file_no = SymTab[CurrentSub][S_FILE_NO]*/
    // SubProg include_routine pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _25170 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg include_routine pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25170);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _file_no_48617 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _file_no_48617 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_file_no_48617)){
        _file_no_48617 = (object)DBL_PTR(_file_no_48617)->dbl;
    }
    _25170 = NOVALUE;
    // SubProg include_routine pc: 41 op: STARTLINE (58)

    /** coverage.e:262			map:put( routine_map[file_coverage[file_no]], sym_name( CurrentSub ), 0, map:ADD )*/
    // SubProg include_routine pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_51file_coverage_48298);
    _25172 = (object)*(((s1_ptr)_2)->base + _file_no_48617);
    // SubProg include_routine pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_51routine_map_48303);
    _25173 = (object)*(((s1_ptr)_2)->base + _25172);
    // SubProg include_routine pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 57 op: PROC (27)
    _25174 = _54sym_name(_36CurrentSub_16444);
    // SubProg include_routine pc: 61 op: PROC (27)
    Ref(_25173);
    _29put(_25173, _25174, 0, 2, 0);
    _25173 = NOVALUE;
    _25174 = NOVALUE;
    // SubProg include_routine pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 48609 op: 159
    // SubProg include_routine pc: 69 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var file_no_48617
    // SubProg include_routine pc: 71 op: STARTLINE (58)

    /** coverage.e:264	end procedure*/
    // SubProg include_routine pc: 73 op: RETURNP (29)

// Exiting block BLOCK: include_routine
    _25172 = NOVALUE;
    return;
    // SubProg include_routine pc: 76 op: BADRETURNF (43)
    ;
}



// 0x67826BFC
