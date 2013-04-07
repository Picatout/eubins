// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _50check_coverage()
{
// skipping _25106  name type: 0
    object _25105 = NOVALUE; // 48389 25105
    object _25104 = NOVALUE; // 48388 25104
    object _25103 = NOVALUE; // 48387 25103
    object _25102 = NOVALUE; // 48384 25102
    object _25101 = NOVALUE; // 48382 25101
    object _25100 = NOVALUE; // 48381 25100
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:45		for i = length( file_coverage ) + 1 to length( known_files ) do*/
    // SubProg check_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_coverage pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_50file_coverage_48369)){
            _25100 = SEQ_PTR(_50file_coverage_48369)->length;
    }
    else {
        _25100 = 1;
    }
    // SubProg check_coverage pc: 8 op: PLUS1 (93)
    _25101 = _25100 + 1;
    _25100 = NOVALUE;
    // SubProg check_coverage pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_coverage pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _25102 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _25102 = 1;
    }
    // SubProg check_coverage pc: 17 op: FOR (21)
    {
        object _i_48380;
        _i_48380 = _25101;
L1: // addr: 24 pc: 17 sub: 48377 op: 21
        if (_i_48380 > _25102){
            goto L2; // [17] 58
        }
        // SubProg check_coverage pc: 24 op: STARTLINE (58)

        /** coverage.e:46			file_coverage &= find( canonical_path( known_files[i],,1 ), covered_files )*/
        // SubProg check_coverage pc: 26 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 30 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7known_files_11390);
        _25103 = (object)*(((s1_ptr)_2)->base + _i_48380);
        // SubProg check_coverage pc: 34 op: PROC (27)
        Ref(_25103);
        _25104 = _16canonical_path(_25103, 0, 1);
        _25103 = NOVALUE;
        // SubProg check_coverage pc: 40 op: GLOBAL_INIT_CHECK (109)
        // SubProg check_coverage pc: 42 op: FIND_FROM (176)
        _25105 = find_from(_25104, _50covered_files_48368, 1);
        DeRef(_25104);
        _25104 = NOVALUE;
        // SubProg check_coverage pc: 47 op: CONCAT (15)
        Append(&_50file_coverage_48369, _50file_coverage_48369, _25105);
        _25105 = NOVALUE;
        // SubProg check_coverage pc: 51 op: STARTLINE (58)

        /** coverage.e:47		end for*/
        // SubProg check_coverage pc: 53 op: ENDFOR_INT_UP1 (54)
        _i_48380 = _i_48380 + 1;
        goto L1; // [53] 24
L2: // addr: 58 pc: 53 sub: 48377 op: 54
        ;
    }
    // SubProg check_coverage pc: 58 op: STARTLINE (58)

    /** coverage.e:48	end procedure*/
    // SubProg check_coverage pc: 60 op: RETURNP (29)

// Exiting block BLOCK: check_coverage
    DeRef(_25101);
    _25101 = NOVALUE;
    return;
    // SubProg check_coverage pc: 63 op: BADRETURNF (43)
    ;
}


void _50init_coverage()
{
    object _cmd_48404 = NOVALUE;
// skipping _25124  name type: 0
    object _25123 = NOVALUE; // 48425 25123
    object _25122 = NOVALUE; // 48422 25122
// skipping _25121  name type: 0
    object _25120 = NOVALUE; // 48419 25120
    object _25119 = NOVALUE; // 48416 25119
    object _25118 = NOVALUE; // 48414 25118
// skipping _25117  name type: 0
    object _25116 = NOVALUE; // 48411 25116
    object _25114 = NOVALUE; // 48409 25114
    object _25113 = NOVALUE; // 48408 25113
// skipping _25112  name type: 0
    object _25111 = NOVALUE; // 48403 25111
    object _25110 = NOVALUE; // 48401 25110
    object _25109 = NOVALUE; // 48400 25109
    object _25108 = NOVALUE; // 48399 25108
    object _25107 = NOVALUE; // 48396 25107
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:54		if initialized_coverage then*/
    // SubProg init_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 5 op: IF (20)
    if (_50initialized_coverage_48376 == 0)
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
L1: // addr: 14 pc: 13 sub: 48391 op: 159
    // SubProg init_coverage pc: 14 op: STARTLINE (58)

    /** coverage.e:57		initialized_coverage = 1*/
    // SubProg init_coverage pc: 16 op: ASSIGN_I (113)
    _50initialized_coverage_48376 = 1;
    // SubProg init_coverage pc: 19 op: STARTLINE (58)

    /** coverage.e:58		for i = 1 to length( file_coverage ) do*/
    // SubProg init_coverage pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_50file_coverage_48369)){
            _25107 = SEQ_PTR(_50file_coverage_48369)->length;
    }
    else {
        _25107 = 1;
    }
    // SubProg init_coverage pc: 26 op: FOR_I (125)
    {
        object _i_48395;
        _i_48395 = 1;
L2: // addr: 33 pc: 26 sub: 48391 op: 125
        if (_i_48395 > _25107){
            goto L3; // [26] 67
        }
        // SubProg init_coverage pc: 33 op: STARTLINE (58)

        /** coverage.e:59			file_coverage[i] = find( canonical_path( known_files[i],,1 ), covered_files )*/
        // SubProg init_coverage pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7known_files_11390);
        _25108 = (object)*(((s1_ptr)_2)->base + _i_48395);
        // SubProg init_coverage pc: 43 op: PROC (27)
        Ref(_25108);
        _25109 = _16canonical_path(_25108, 0, 1);
        _25108 = NOVALUE;
        // SubProg init_coverage pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg init_coverage pc: 51 op: FIND_FROM (176)
        _25110 = find_from(_25109, _50covered_files_48368, 1);
        DeRef(_25109);
        _25109 = NOVALUE;
        // SubProg init_coverage pc: 56 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_50file_coverage_48369);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _50file_coverage_48369 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_48395);
        *(intptr_t *)_2 = _25110;
        if( _1 != _25110 ){
        }
        _25110 = NOVALUE;
        // SubProg init_coverage pc: 60 op: STARTLINE (58)

        /** coverage.e:60		end for*/
        // SubProg init_coverage pc: 62 op: ENDFOR_INT_UP1 (54)
        _i_48395 = _i_48395 + 1;
        goto L2; // [62] 33
L3: // addr: 67 pc: 62 sub: 48391 op: 54
        ;
    }
    // SubProg init_coverage pc: 67 op: STARTLINE (58)

    /** coverage.e:62		if equal( coverage_db_name, "" ) then*/
    // SubProg init_coverage pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 71 op: EQUAL (153)
    if (_50coverage_db_name_48370 == _21958)
    _25111 = 1;
    else if (IS_ATOM_INT(_50coverage_db_name_48370) && IS_ATOM_INT(_21958))
    _25111 = 0;
    else
    _25111 = (compare(_50coverage_db_name_48370, _21958) == 0);
    // SubProg init_coverage pc: 75 op: IF (20)
    if (_25111 == 0)
    {
        _25111 = NOVALUE;
        goto L4; // [75] 105
    }
    else{
        _25111 = NOVALUE;
    }
    // SubProg init_coverage pc: 78 op: STARTLINE (58)

    /** coverage.e:63			sequence cmd = command_line()*/
    // SubProg init_coverage pc: 80 op: COMMAND_LINE (100)
    DeRef(_cmd_48404);
    _cmd_48404 = Command_Line();
    // SubProg init_coverage pc: 82 op: STARTLINE (58)

    /** coverage.e:64			coverage_db_name = canonical_path( filebase( cmd[2] ) & "-cvg.edb" )*/
    // SubProg init_coverage pc: 84 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_cmd_48404);
    _25113 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg init_coverage pc: 88 op: PROC (27)
    RefDS(_25113);
    _25114 = _16filebase(_25113);
    _25113 = NOVALUE;
    // SubProg init_coverage pc: 92 op: CONCAT (15)
    if (IS_SEQUENCE(_25114) && IS_ATOM(_25115)) {
    }
    else if (IS_ATOM(_25114) && IS_SEQUENCE(_25115)) {
        Ref(_25114);
        Prepend(&_25116, _25115, _25114);
    }
    else {
        Concat((object_ptr)&_25116, _25114, _25115);
        DeRef(_25114);
        _25114 = NOVALUE;
    }
    DeRef(_25114);
    _25114 = NOVALUE;
    // SubProg init_coverage pc: 96 op: PROC (27)
    _0 = _16canonical_path(_25116, 0, 0);
    DeRefDS(_50coverage_db_name_48370);
    _50coverage_db_name_48370 = _0;
    _25116 = NOVALUE;
    // SubProg init_coverage pc: 102 op: SEQUENCE_CHECK (97)
    // SubProg init_coverage pc: 104 op: NOP1 (159)
L4: // addr: 105 pc: 104 sub: 48391 op: 159
    // SubProg init_coverage pc: 105 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cmd_48404
    DeRef(_cmd_48404);
    _cmd_48404 = NOVALUE;
    // SubProg init_coverage pc: 107 op: STARTLINE (58)

    /** coverage.e:67		if coverage_erase and file_exists( coverage_db_name ) then*/
    // SubProg init_coverage pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 111 op: SC1_AND_IF (146)
    if (_50coverage_erase_48371 == 0) {
        goto L5; // [111] 151
    }
    // SubProg init_coverage pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 117 op: PROC (27)
    RefDS(_50coverage_db_name_48370);
    _25119 = _16file_exists(_50coverage_db_name_48370);
    // SubProg init_coverage pc: 121 op: NOP1 (159)
    // SubProg init_coverage pc: 122 op: IF (20)
    if (_25119 == 0) {
        DeRef(_25119);
        _25119 = NOVALUE;
        goto L5; // [122] 151
    }
    else {
        if (!IS_ATOM_INT(_25119) && DBL_PTR(_25119)->dbl == 0.0){
            DeRef(_25119);
            _25119 = NOVALUE;
            goto L5; // [122] 151
        }
        DeRef(_25119);
        _25119 = NOVALUE;
    }
    DeRef(_25119);
    _25119 = NOVALUE;
    // SubProg init_coverage pc: 125 op: STARTLINE (58)

    /** coverage.e:68			if not delete_file( coverage_db_name ) then*/
    // SubProg init_coverage pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 129 op: PROC (27)
    RefDS(_50coverage_db_name_48370);
    _25120 = _16delete_file(_50coverage_db_name_48370);
    // SubProg init_coverage pc: 133 op: NOT_IFW (108)
    if (IS_ATOM_INT(_25120)) {
        if (_25120 != 0){
            DeRef(_25120);
            _25120 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    else {
        if (DBL_PTR(_25120)->dbl != 0.0){
            DeRef(_25120);
            _25120 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    DeRef(_25120);
    _25120 = NOVALUE;
    // SubProg init_coverage pc: 136 op: STARTLINE (58)

    /** coverage.e:69				CompileErr( 335, { coverage_db_name } )*/
    // SubProg init_coverage pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 140 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_50coverage_db_name_48370);
    ((intptr_t*)_2)[1] = _50coverage_db_name_48370;
    _25122 = MAKE_SEQ(_1);
    // SubProg init_coverage pc: 144 op: PROC (27)
    _49CompileErr(335, _25122, 0);
    _25122 = NOVALUE;
    // SubProg init_coverage pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 48391 op: 159
    // SubProg init_coverage pc: 150 op: NOP1 (159)
L5: // addr: 151 pc: 150 sub: 48391 op: 159
    // SubProg init_coverage pc: 151 op: STARTLINE (58)

    /** coverage.e:73		if db_open( coverage_db_name ) = DB_OK then*/
    // SubProg init_coverage pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 155 op: PROC (27)
    RefDS(_50coverage_db_name_48370);
    _25123 = _44db_open(_50coverage_db_name_48370, 0);
    // SubProg init_coverage pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg init_coverage pc: 162 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25123, 0)){
        DeRef(_25123);
        _25123 = NOVALUE;
        goto L7; // [162] 175
    }
    DeRef(_25123);
    _25123 = NOVALUE;
    // SubProg init_coverage pc: 166 op: STARTLINE (58)

    /** coverage.e:74			read_coverage_db()*/
    // SubProg init_coverage pc: 168 op: PROC (27)
    _50read_coverage_db();
    // SubProg init_coverage pc: 170 op: STARTLINE (58)

    /** coverage.e:75			db_close()*/
    // SubProg init_coverage pc: 172 op: PROC (27)
    _44db_close();
    // SubProg init_coverage pc: 174 op: NOP1 (159)
L7: // addr: 175 pc: 174 sub: 48391 op: 159
    // SubProg init_coverage pc: 175 op: STARTLINE (58)

    /** coverage.e:77	end procedure*/
    // SubProg init_coverage pc: 177 op: RETURNP (29)

// Exiting block BLOCK: init_coverage
    return;
    // SubProg init_coverage pc: 180 op: BADRETURNF (43)
    ;
}


void _50write_map(object _coverage_48433, object _table_name_48434)
{
    object _keys_48456 = NOVALUE;
    object _rec_48461 = NOVALUE;
    object _val_48465 = NOVALUE;
    object _31787 = NOVALUE; // 64000 31787
    object _25140 = NOVALUE; // 48473 25140
// skipping _25139  name type: 0
// skipping _25138  name type: 0
    object _25137 = NOVALUE; // 48466 25137
// skipping _25136  name type: 0
    object _25135 = NOVALUE; // 48463 25135
    object _25134 = NOVALUE; // 48460 25134
// skipping _25133  name type: 0
    object _25132 = NOVALUE; // 48455 25132
    object _25131 = NOVALUE; // 48452 25131
// skipping _25130  name type: 0
    object _25129 = NOVALUE; // 48448 25129
// skipping _25128  name type: 0
    object _25127 = NOVALUE; // 48443 25127
// skipping _25126  name type: 0
    object _25125 = NOVALUE; // 48438 25125
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_map pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg write_map pc: 3 op: STARTLINE (58)

    /** coverage.e:80		if db_select( coverage_db_name, DB_LOCK_EXCLUSIVE) = DB_OK then*/
    // SubProg write_map pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 9 op: PROC (27)
    RefDS(_50coverage_db_name_48370);
    _25125 = _44db_select(_50coverage_db_name_48370, 2);
    // SubProg write_map pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 16 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25125, 0)){
        DeRef(_25125);
        _25125 = NOVALUE;
        goto L1; // [16] 61
    }
    DeRef(_25125);
    _25125 = NOVALUE;
    // SubProg write_map pc: 20 op: STARTLINE (58)

    /** coverage.e:81			if db_select_table( table_name ) != DB_OK then*/
    // SubProg write_map pc: 22 op: PROC (27)
    RefDS(_table_name_48434);
    _25127 = _44db_select_table(_table_name_48434);
    // SubProg write_map pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 28 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25127, 0)){
        DeRef(_25127);
        _25127 = NOVALUE;
        goto L2; // [28] 73
    }
    DeRef(_25127);
    _25127 = NOVALUE;
    // SubProg write_map pc: 32 op: STARTLINE (58)

    /** coverage.e:82				if db_create_table( table_name ) != DB_OK then*/
    // SubProg write_map pc: 34 op: PROC (27)
    RefDS(_table_name_48434);
    _25129 = _44db_create_table(_table_name_48434, 50);
    // SubProg write_map pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_map pc: 41 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _25129, 0)){
        DeRef(_25129);
        _25129 = NOVALUE;
        goto L2; // [41] 73
    }
    DeRef(_25129);
    _25129 = NOVALUE;
    // SubProg write_map pc: 45 op: STARTLINE (58)

    /** coverage.e:83					CompileErr( 336, {table_name} )*/
    // SubProg write_map pc: 47 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_48434);
    ((intptr_t*)_2)[1] = _table_name_48434;
    _25131 = MAKE_SEQ(_1);
    // SubProg write_map pc: 51 op: PROC (27)
    _49CompileErr(336, _25131, 0);
    _25131 = NOVALUE;
    // SubProg write_map pc: 56 op: NOP1 (159)
    // SubProg write_map pc: 57 op: NOP1 (159)
    // SubProg write_map pc: 58 op: ELSE (23)
    goto L2; // [58] 73
    // SubProg write_map pc: 60 op: NOP1 (159)
L1: // addr: 61 pc: 60 sub: 48430 op: 159
    // SubProg write_map pc: 61 op: STARTLINE (58)

    /** coverage.e:87			CompileErr( 336, {table_name} )*/
    // SubProg write_map pc: 63 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_48434);
    ((intptr_t*)_2)[1] = _table_name_48434;
    _25132 = MAKE_SEQ(_1);
    // SubProg write_map pc: 67 op: PROC (27)
    _49CompileErr(336, _25132, 0);
    _25132 = NOVALUE;
    // SubProg write_map pc: 72 op: NOP1 (159)
L2: // addr: 73 pc: 72 sub: 48430 op: 159
    // SubProg write_map pc: 73 op: STARTLINE (58)

    /** coverage.e:90		sequence keys = map:keys( coverage )*/
    // SubProg write_map pc: 75 op: PROC (27)
    Ref(_coverage_48433);
    _0 = _keys_48456;
    _keys_48456 = _33keys(_coverage_48433, 0);
    DeRef(_0);
    // SubProg write_map pc: 80 op: SEQUENCE_CHECK (97)
    // SubProg write_map pc: 82 op: STARTLINE (58)

    /** coverage.e:91		for i = 1 to length( keys ) do*/
    // SubProg write_map pc: 84 op: LENGTH (42)
    if (IS_SEQUENCE(_keys_48456)){
            _25134 = SEQ_PTR(_keys_48456)->length;
    }
    else {
        _25134 = 1;
    }
    // SubProg write_map pc: 87 op: FOR_I (125)
    {
        object _i_48459;
        _i_48459 = 1;
L3: // addr: 94 pc: 87 sub: 48430 op: 125
        if (_i_48459 > _25134){
            goto L4; // [87] 167
        }
        // SubProg write_map pc: 94 op: STARTLINE (58)

        /** coverage.e:92			integer rec = db_find_key( keys[i] )*/
        // SubProg write_map pc: 96 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_keys_48456);
        _25135 = (object)*(((s1_ptr)_2)->base + _i_48459);
        // SubProg write_map pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_map pc: 102 op: PROC (27)
        Ref(_25135);
        RefDS(_44current_table_name_16090);
        _rec_48461 = _44db_find_key(_25135, _44current_table_name_16090);
        _25135 = NOVALUE;
        // SubProg write_map pc: 107 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_rec_48461)) {
            _1 = (object)(DBL_PTR(_rec_48461)->dbl);
            DeRefDS(_rec_48461);
            _rec_48461 = _1;
        }
        // SubProg write_map pc: 109 op: STARTLINE (58)

        /** coverage.e:93			integer val = map:get( coverage, keys[i] )*/
        // SubProg write_map pc: 111 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_keys_48456);
        _25137 = (object)*(((s1_ptr)_2)->base + _i_48459);
        // SubProg write_map pc: 115 op: PROC (27)
        Ref(_coverage_48433);
        Ref(_25137);
        _val_48465 = _33get(_coverage_48433, _25137, 0);
        _25137 = NOVALUE;
        // SubProg write_map pc: 121 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_val_48465)) {
            _1 = (object)(DBL_PTR(_val_48465)->dbl);
            DeRefDS(_val_48465);
            _val_48465 = _1;
        }
        // SubProg write_map pc: 123 op: STARTLINE (58)

        /** coverage.e:94			if rec > 0 then*/
        // SubProg write_map pc: 125 op: GREATER_IFW_I (124)
        if (_rec_48461 <= 0)
        goto L5; // [125] 141
        // SubProg write_map pc: 129 op: STARTLINE (58)

        /** coverage.e:95				db_replace_data( rec, val )*/
        // SubProg write_map pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_map pc: 133 op: PROC (27)
        RefDS(_44current_table_name_16090);
        _44db_replace_data(_rec_48461, _val_48465, _44current_table_name_16090);
        // SubProg write_map pc: 138 op: ELSE (23)
        goto L6; // [138] 158
        // SubProg write_map pc: 140 op: NOP1 (159)
L5: // addr: 141 pc: 140 sub: 48430 op: 159
        // SubProg write_map pc: 141 op: STARTLINE (58)

        /** coverage.e:97				db_insert( keys[i], val )*/
        // SubProg write_map pc: 143 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_keys_48456);
        _25140 = (object)*(((s1_ptr)_2)->base + _i_48459);
        // SubProg write_map pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_map pc: 149 op: PROC (27)
        Ref(_25140);
        RefDS(_44current_table_name_16090);
        _31787 = _44db_insert(_25140, _val_48465, _44current_table_name_16090);
        _25140 = NOVALUE;
        // SubProg write_map pc: 155 op: DEREF_TEMP (208)
        DeRef(_31787);
        _31787 = NOVALUE;
        // SubProg write_map pc: 157 op: NOP1 (159)
L6: // addr: 158 pc: 157 sub: 48430 op: 159
        // SubProg write_map pc: 158 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var rec_48461

// block var val_48465
        // SubProg write_map pc: 160 op: STARTLINE (58)

        /** coverage.e:99		end for*/
        // SubProg write_map pc: 162 op: ENDFOR_INT_UP1 (54)
        _i_48459 = _i_48459 + 1;
        goto L3; // [162] 94
L4: // addr: 167 pc: 162 sub: 48430 op: 54
        ;
    }
    // SubProg write_map pc: 167 op: STARTLINE (58)

    /** coverage.e:101	end procedure*/
    // SubProg write_map pc: 169 op: RETURNP (29)

// Exiting block BLOCK: write_map

// block var coverage_48433
    DeRef(_coverage_48433);

// block var table_name_48434
    DeRefDS(_table_name_48434);

// block var keys_48456
    DeRef(_keys_48456);
    return;
    // SubProg write_map pc: 172 op: BADRETURNF (43)
    ;
}


object _50write_coverage_db()
{
    object _25157 = NOVALUE; // 48505 25157
    object _25156 = NOVALUE; // 48504 25156
    object _25154 = NOVALUE; // 48502 25154
    object _25153 = NOVALUE; // 48501 25153
    object _25152 = NOVALUE; // 48500 25152
    object _25150 = NOVALUE; // 48498 25150
    object _25149 = NOVALUE; // 48497 25149
    object _25148 = NOVALUE; // 48493 25148
// skipping _25146  name type: 0
    object _25145 = NOVALUE; // 48490 25145
// skipping _25144  name type: 0
    object _25143 = NOVALUE; // 48485 25143
// skipping _25142  name type: 0
    object _25141 = NOVALUE; // 48479 25141
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_coverage_db pc: 1 op: STARTLINE (58)

    /** coverage.e:105		if wrote_coverage then*/
    // SubProg write_coverage_db pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 5 op: IF (20)
    if (_50wrote_coverage_48474 == 0)
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
L1: // addr: 15 pc: 14 sub: 48475 op: 159
    // SubProg write_coverage_db pc: 15 op: STARTLINE (58)

    /** coverage.e:108		wrote_coverage = 1*/
    // SubProg write_coverage_db pc: 17 op: ASSIGN_I (113)
    _50wrote_coverage_48474 = 1;
    // SubProg write_coverage_db pc: 20 op: STARTLINE (58)

    /** coverage.e:109		init_coverage()*/
    // SubProg write_coverage_db pc: 22 op: PROC (27)
    _50init_coverage();
    // SubProg write_coverage_db pc: 24 op: STARTLINE (58)

    /** coverage.e:110		if not length( covered_files ) then*/
    // SubProg write_coverage_db pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 28 op: LENGTH (42)
    if (IS_SEQUENCE(_50covered_files_48368)){
            _25141 = SEQ_PTR(_50covered_files_48368)->length;
    }
    else {
        _25141 = 1;
    }
    // SubProg write_coverage_db pc: 31 op: NOT_IFW (108)
    if (_25141 != 0)
    goto L2; // [31] 41
    _25141 = NOVALUE;
    // SubProg write_coverage_db pc: 34 op: STARTLINE (58)

    /** coverage.e:111			return 1*/
    // SubProg write_coverage_db pc: 36 op: RETURNF (28)

// Exiting block BLOCK: write_coverage_db
    return 1;
    // SubProg write_coverage_db pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 48475 op: 159
    // SubProg write_coverage_db pc: 41 op: STARTLINE (58)

    /** coverage.e:114		if DB_OK != db_open( coverage_db_name, DB_LOCK_EXCLUSIVE) then*/
    // SubProg write_coverage_db pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 49 op: PROC (27)
    RefDS(_50coverage_db_name_48370);
    _25143 = _44db_open(_50coverage_db_name_48370, 2);
    // SubProg write_coverage_db pc: 54 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, 0, _25143)){
        DeRef(_25143);
        _25143 = NOVALUE;
        goto L3; // [54] 95
    }
    DeRef(_25143);
    _25143 = NOVALUE;
    // SubProg write_coverage_db pc: 58 op: STARTLINE (58)

    /** coverage.e:115			if DB_OK != db_create( coverage_db_name ) then*/
    // SubProg write_coverage_db pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 64 op: PROC (27)
    RefDS(_50coverage_db_name_48370);
    _25145 = _44db_create(_50coverage_db_name_48370, 0, 5, 5);
    // SubProg write_coverage_db pc: 71 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, 0, _25145)){
        DeRef(_25145);
        _25145 = NOVALUE;
        goto L4; // [71] 94
    }
    DeRef(_25145);
    _25145 = NOVALUE;
    // SubProg write_coverage_db pc: 75 op: STARTLINE (58)

    /** coverage.e:116				printf(2, "error opening %s\n", {coverage_db_name})*/
    // SubProg write_coverage_db pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 79 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_50coverage_db_name_48370);
    ((intptr_t*)_2)[1] = _50coverage_db_name_48370;
    _25148 = MAKE_SEQ(_1);
    // SubProg write_coverage_db pc: 83 op: PRINTF (38)
    EPrintf(2, _25147, _25148);
    DeRefDS(_25148);
    _25148 = NOVALUE;
    // SubProg write_coverage_db pc: 87 op: STARTLINE (58)

    /** coverage.e:117				return 0*/
    // SubProg write_coverage_db pc: 89 op: RETURNF (28)

// Exiting block BLOCK: write_coverage_db
    return 0;
    // SubProg write_coverage_db pc: 93 op: NOP1 (159)
L4: // addr: 94 pc: 93 sub: 48475 op: 159
    // SubProg write_coverage_db pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 48475 op: 159
    // SubProg write_coverage_db pc: 95 op: STARTLINE (58)

    /** coverage.e:121		process_lines()*/
    // SubProg write_coverage_db pc: 97 op: PROC (27)
    _50process_lines();
    // SubProg write_coverage_db pc: 99 op: STARTLINE (58)

    /** coverage.e:122		for tx = 1 to length( routine_map ) do*/
    // SubProg write_coverage_db pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg write_coverage_db pc: 103 op: LENGTH (42)
    if (IS_SEQUENCE(_50routine_map_48374)){
            _25149 = SEQ_PTR(_50routine_map_48374)->length;
    }
    else {
        _25149 = 1;
    }
    // SubProg write_coverage_db pc: 106 op: FOR_I (125)
    {
        object _tx_48496;
        _tx_48496 = 1;
L5: // addr: 113 pc: 106 sub: 48475 op: 125
        if (_tx_48496 > _25149){
            goto L6; // [106] 164
        }
        // SubProg write_coverage_db pc: 113 op: STARTLINE (58)

        /** coverage.e:123			write_map( routine_map[tx], 'r' & covered_files[tx] )*/
        // SubProg write_coverage_db pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 117 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50routine_map_48374);
        _25150 = (object)*(((s1_ptr)_2)->base + _tx_48496);
        // SubProg write_coverage_db pc: 121 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 123 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50covered_files_48368);
        _25152 = (object)*(((s1_ptr)_2)->base + _tx_48496);
        // SubProg write_coverage_db pc: 127 op: CONCAT (15)
        if (IS_SEQUENCE(114) && IS_ATOM(_25152)) {
        }
        else if (IS_ATOM(114) && IS_SEQUENCE(_25152)) {
            Prepend(&_25153, _25152, 114);
        }
        else {
            Concat((object_ptr)&_25153, 114, _25152);
        }
        _25152 = NOVALUE;
        // SubProg write_coverage_db pc: 131 op: PROC (27)
        Ref(_25150);
        _50write_map(_25150, _25153);
        _25150 = NOVALUE;
        _25153 = NOVALUE;
        // SubProg write_coverage_db pc: 135 op: STARTLINE (58)

        /** coverage.e:124			write_map( line_map[tx],    'l' & covered_files[tx] )*/
        // SubProg write_coverage_db pc: 137 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 139 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50line_map_48373);
        _25154 = (object)*(((s1_ptr)_2)->base + _tx_48496);
        // SubProg write_coverage_db pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg write_coverage_db pc: 145 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50covered_files_48368);
        _25156 = (object)*(((s1_ptr)_2)->base + _tx_48496);
        // SubProg write_coverage_db pc: 149 op: CONCAT (15)
        if (IS_SEQUENCE(108) && IS_ATOM(_25156)) {
        }
        else if (IS_ATOM(108) && IS_SEQUENCE(_25156)) {
            Prepend(&_25157, _25156, 108);
        }
        else {
            Concat((object_ptr)&_25157, 108, _25156);
        }
        _25156 = NOVALUE;
        // SubProg write_coverage_db pc: 153 op: PROC (27)
        Ref(_25154);
        _50write_map(_25154, _25157);
        _25154 = NOVALUE;
        _25157 = NOVALUE;
        // SubProg write_coverage_db pc: 157 op: STARTLINE (58)

        /** coverage.e:125		end for*/
        // SubProg write_coverage_db pc: 159 op: ENDFOR_INT_UP1 (54)
        _tx_48496 = _tx_48496 + 1;
        goto L5; // [159] 113
L6: // addr: 164 pc: 159 sub: 48475 op: 54
        ;
    }
    // SubProg write_coverage_db pc: 164 op: STARTLINE (58)

    /** coverage.e:127		db_close()*/
    // SubProg write_coverage_db pc: 166 op: PROC (27)
    _44db_close();
    // SubProg write_coverage_db pc: 168 op: STARTLINE (58)

    /** coverage.e:129		routine_map = {}*/
    // SubProg write_coverage_db pc: 170 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_50routine_map_48374);
    _50routine_map_48374 = _21958;
    // SubProg write_coverage_db pc: 173 op: SEQUENCE_CHECK (97)
    // SubProg write_coverage_db pc: 175 op: STARTLINE (58)

    /** coverage.e:130		line_map    = {}*/
    // SubProg write_coverage_db pc: 177 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_50line_map_48373);
    _50line_map_48373 = _21958;
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
    object _tables_48509 = NOVALUE;
    object _name_48515 = NOVALUE;
    object _fx_48519 = NOVALUE;
    object _the_map_48526 = NOVALUE;
    object _31786 = NOVALUE; // 63999 31786
    object _25173 = NOVALUE; // 48541 25173
    object _25172 = NOVALUE; // 48539 25172
    object _25171 = NOVALUE; // 48537 25171
// skipping _25170  name type: 0
// skipping _25169  name type: 0
// skipping _25168  name type: 0
    object _25167 = NOVALUE; // 48529 25167
    object _25166 = NOVALUE; // 48528 25166
    object _25165 = NOVALUE; // 48524 25165
// skipping _25164  name type: 0
// skipping _25163  name type: 0
// skipping _25162  name type: 0
    object _25161 = NOVALUE; // 48517 25161
    object _25160 = NOVALUE; // 48516 25160
    object _25159 = NOVALUE; // 48514 25159
// skipping _25158  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_coverage_db pc: 1 op: STARTLINE (58)

    /** coverage.e:135		sequence tables = db_table_list()*/
    // SubProg read_coverage_db pc: 3 op: PROC (27)
    _0 = _tables_48509;
    _tables_48509 = _44db_table_list();
    DeRef(_0);
    // SubProg read_coverage_db pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg read_coverage_db pc: 8 op: STARTLINE (58)

    /** coverage.e:137		for i = 1 to length( tables ) do*/
    // SubProg read_coverage_db pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_tables_48509)){
            _25159 = SEQ_PTR(_tables_48509)->length;
    }
    else {
        _25159 = 1;
    }
    // SubProg read_coverage_db pc: 13 op: FOR_I (125)
    {
        object _i_48513;
        _i_48513 = 1;
L1: // addr: 20 pc: 13 sub: 48507 op: 125
        if (_i_48513 > _25159){
            goto L2; // [13] 157
        }
        // SubProg read_coverage_db pc: 20 op: STARTLINE (58)

        /** coverage.e:138			sequence name = tables[i][2..$]*/
        // SubProg read_coverage_db pc: 22 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48509);
        _25160 = (object)*(((s1_ptr)_2)->base + _i_48513);
        // SubProg read_coverage_db pc: 26 op: LENGTH (42)
        if (IS_SEQUENCE(_25160)){
                _25161 = SEQ_PTR(_25160)->length;
        }
        else {
            _25161 = 1;
        }
        // SubProg read_coverage_db pc: 29 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_name_48515;
        RHS_Slice(_25160, 2, _25161);
        _25160 = NOVALUE;
        // SubProg read_coverage_db pc: 34 op: STARTLINE (58)

        /** coverage.e:139			integer fx = find( name, covered_files )*/
        // SubProg read_coverage_db pc: 36 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 38 op: FIND_FROM (176)
        _fx_48519 = find_from(_name_48515, _50covered_files_48368, 1);
        // SubProg read_coverage_db pc: 43 op: STARTLINE (58)

        /** coverage.e:140			if not fx then*/
        // SubProg read_coverage_db pc: 45 op: NOT_IFW (108)
        if (_fx_48519 != 0)
        goto L3; // [45] 55
        // SubProg read_coverage_db pc: 48 op: STARTLINE (58)

        /** coverage.e:141				continue*/
        // SubProg read_coverage_db pc: 50 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var name_48515
        DeRefDS(_name_48515);
        _name_48515 = NOVALUE;

// block var fx_48519

// block var the_map_48526
        DeRef(_the_map_48526);
        _the_map_48526 = NOVALUE;
        // SubProg read_coverage_db pc: 52 op: ELSE (23)
        goto L4; // [52] 152
        // SubProg read_coverage_db pc: 54 op: NOP1 (159)
L3: // addr: 55 pc: 54 sub: 48507 op: 159
        // SubProg read_coverage_db pc: 55 op: STARTLINE (58)

        /** coverage.e:144			db_select_table( tables[i] )*/
        // SubProg read_coverage_db pc: 57 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48509);
        _25165 = (object)*(((s1_ptr)_2)->base + _i_48513);
        // SubProg read_coverage_db pc: 61 op: PROC (27)
        Ref(_25165);
        _31786 = _44db_select_table(_25165);
        _25165 = NOVALUE;
        // SubProg read_coverage_db pc: 65 op: DEREF_TEMP (208)
        DeRef(_31786);
        _31786 = NOVALUE;
        // SubProg read_coverage_db pc: 67 op: STARTLINE (58)

        /** coverage.e:146			if tables[i][1] = 'r' then*/
        // SubProg read_coverage_db pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_tables_48509);
        _25166 = (object)*(((s1_ptr)_2)->base + _i_48513);
        // SubProg read_coverage_db pc: 73 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25166);
        _25167 = (object)*(((s1_ptr)_2)->base + 1);
        _25166 = NOVALUE;
        // SubProg read_coverage_db pc: 77 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _25167, 114)){
            _25167 = NOVALUE;
            goto L5; // [77] 92
        }
        _25167 = NOVALUE;
        // SubProg read_coverage_db pc: 81 op: STARTLINE (58)

        /** coverage.e:148				the_map = routine_map[fx]*/
        // SubProg read_coverage_db pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 85 op: RHS_SUBS (25)
        DeRef(_the_map_48526);
        _2 = (object)SEQ_PTR(_50routine_map_48374);
        _the_map_48526 = (object)*(((s1_ptr)_2)->base + _fx_48519);
        Ref(_the_map_48526);
        // SubProg read_coverage_db pc: 89 op: ELSE (23)
        goto L6; // [89] 101
        // SubProg read_coverage_db pc: 91 op: NOP1 (159)
L5: // addr: 92 pc: 91 sub: 48507 op: 159
        // SubProg read_coverage_db pc: 92 op: STARTLINE (58)

        /** coverage.e:152				the_map = line_map[fx]*/
        // SubProg read_coverage_db pc: 94 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 96 op: RHS_SUBS (25)
        DeRef(_the_map_48526);
        _2 = (object)SEQ_PTR(_50line_map_48373);
        _the_map_48526 = (object)*(((s1_ptr)_2)->base + _fx_48519);
        Ref(_the_map_48526);
        // SubProg read_coverage_db pc: 100 op: NOP1 (159)
L6: // addr: 101 pc: 100 sub: 48507 op: 159
        // SubProg read_coverage_db pc: 101 op: STARTLINE (58)

        /** coverage.e:156			for j = 1 to db_table_size() do*/
        // SubProg read_coverage_db pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg read_coverage_db pc: 105 op: PROC (27)
        RefDS(_44current_table_name_16090);
        _25171 = _44db_table_size(_44current_table_name_16090);
        // SubProg read_coverage_db pc: 109 op: FOR (21)
        {
            object _j_48535;
            _j_48535 = 1;
L7: // addr: 116 pc: 109 sub: 48507 op: 21
            if (binary_op_a(GREATER, _j_48535, _25171)){
                goto L8; // [109] 148
            }
            // SubProg read_coverage_db pc: 116 op: STARTLINE (58)

            /** coverage.e:157				map:put( the_map, db_record_key( j ), db_record_data( j ), map:ADD )*/
            // SubProg read_coverage_db pc: 118 op: PRIVATE_INIT_CHECK (30)
            // SubProg read_coverage_db pc: 120 op: GLOBAL_INIT_CHECK (109)
            // SubProg read_coverage_db pc: 122 op: PROC (27)
            Ref(_j_48535);
            RefDS(_44current_table_name_16090);
            _25172 = _44db_record_key(_j_48535, _44current_table_name_16090);
            // SubProg read_coverage_db pc: 127 op: GLOBAL_INIT_CHECK (109)
            // SubProg read_coverage_db pc: 129 op: PROC (27)
            Ref(_j_48535);
            RefDS(_44current_table_name_16090);
            _25173 = _44db_record_data(_j_48535, _44current_table_name_16090);
            // SubProg read_coverage_db pc: 134 op: PROC (27)
            Ref(_the_map_48526);
            _33put(_the_map_48526, _25172, _25173, 2, 0);
            _25172 = NOVALUE;
            _25173 = NOVALUE;
            // SubProg read_coverage_db pc: 141 op: STARTLINE (58)

            /** coverage.e:158			end for*/
            // SubProg read_coverage_db pc: 143 op: ENDFOR_INT_UP1 (54)
            _0 = _j_48535;
            if (IS_ATOM_INT(_j_48535)) {
                _j_48535 = _j_48535 + 1;
                if ((object)((uintptr_t)_j_48535 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_48535 = NewDouble((eudouble)_j_48535);
                }
            }
            else {
                _j_48535 = binary_op_a(PLUS, _j_48535, 1);
            }
            DeRef(_0);
            goto L7; // [143] 116
L8: // addr: 148 pc: 143 sub: 48507 op: 54
            ;
            DeRef(_j_48535);
        }
        // SubProg read_coverage_db pc: 148 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var name_48515
        DeRef(_name_48515);
        _name_48515 = NOVALUE;

// block var fx_48519

// block var the_map_48526
        DeRef(_the_map_48526);
        _the_map_48526 = NOVALUE;
        // SubProg read_coverage_db pc: 150 op: STARTLINE (58)

        /** coverage.e:160		end for*/
        // SubProg read_coverage_db pc: 152 op: ENDFOR_INT_UP1 (54)
L4: // addr: 152 pc: 152 sub: 48507 op: 54
        _i_48513 = _i_48513 + 1;
        goto L1; // [152] 20
L2: // addr: 157 pc: 152 sub: 48507 op: 54
        ;
    }
    // SubProg read_coverage_db pc: 157 op: STARTLINE (58)

    /** coverage.e:161	end procedure*/
    // SubProg read_coverage_db pc: 159 op: RETURNP (29)

// Exiting block BLOCK: read_coverage_db

// block var tables_48509
    DeRef(_tables_48509);
    DeRef(_25171);
    _25171 = NOVALUE;
    return;
    // SubProg read_coverage_db pc: 162 op: BADRETURNF (43)
    ;
}


void _50coverage_db(object _name_48544)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_db pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg coverage_db pc: 3 op: STARTLINE (58)

    /** coverage.e:164		coverage_db_name = name*/
    // SubProg coverage_db pc: 5 op: ASSIGN (18)
    RefDS(_name_48544);
    DeRef(_50coverage_db_name_48370);
    _50coverage_db_name_48370 = _name_48544;
    // SubProg coverage_db pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg coverage_db pc: 10 op: STARTLINE (58)

    /** coverage.e:165	end procedure*/
    // SubProg coverage_db pc: 12 op: RETURNP (29)

// Exiting block BLOCK: coverage_db

// block var name_48544
    DeRefDS(_name_48544);
    return;
    // SubProg coverage_db pc: 15 op: BADRETURNF (43)
    ;
}


object _50coverage_on()
{
    object _25174 = NOVALUE; // 48548 25174
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_on pc: 1 op: STARTLINE (58)

    /** coverage.e:170		return file_coverage[current_file_no]*/
    // SubProg coverage_on pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg coverage_on pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg coverage_on pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50file_coverage_48369);
    _25174 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg coverage_on pc: 11 op: RETURNF (28)

// Exiting block BLOCK: coverage_on
    return _25174;
    // SubProg coverage_on pc: 15 op: BADRETURNF (43)
    ;
}


void _50new_covered_path(object _name_48556)
{
    object _new_1__tmp_at14_48560 = NOVALUE;
    object _new_inlined_new_at_14_48559 = NOVALUE;
    object _new_1__tmp_at36_48564 = NOVALUE;
    object _new_inlined_new_at_36_48563 = NOVALUE;
// skipping _25179  name type: 0
// skipping _25178  name type: 0
// skipping _25177  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_covered_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg new_covered_path pc: 3 op: STARTLINE (58)

    /** coverage.e:176		covered_files = append( covered_files, name )*/
    // SubProg new_covered_path pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_covered_path pc: 7 op: APPEND (35)
    RefDS(_name_48556);
    Append(&_50covered_files_48368, _50covered_files_48368, _name_48556);
    // SubProg new_covered_path pc: 11 op: STARTLINE (58)

    /** coverage.e:177		routine_map &= map:new()*/
    // SubProg new_covered_path pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_covered_path pc: 15 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_covered_path pc: 17 op: PROC (27)
    _0 = _new_1__tmp_at14_48560;
    _new_1__tmp_at14_48560 = _33new_map_seq(8);
    DeRef(_0);
    // SubProg new_covered_path pc: 21 op: PROC (27)
    Ref(_new_1__tmp_at14_48560);
    _0 = _new_inlined_new_at_14_48559;
    _new_inlined_new_at_14_48559 = _34malloc(_new_1__tmp_at14_48560, 1);
    DeRef(_0);
    // SubProg new_covered_path pc: 26 op: NOP1 (159)
    // SubProg new_covered_path pc: 27 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_covered_path @ 14

// block var new_1__tmp_at14_48560
    DeRef(_new_1__tmp_at14_48560);
    _new_1__tmp_at14_48560 = NOVALUE;
    // SubProg new_covered_path pc: 29 op: CONCAT (15)
    if (IS_SEQUENCE(_50routine_map_48374) && IS_ATOM(_new_inlined_new_at_14_48559)) {
        Ref(_new_inlined_new_at_14_48559);
        Append(&_50routine_map_48374, _50routine_map_48374, _new_inlined_new_at_14_48559);
    }
    else if (IS_ATOM(_50routine_map_48374) && IS_SEQUENCE(_new_inlined_new_at_14_48559)) {
    }
    else {
        Concat((object_ptr)&_50routine_map_48374, _50routine_map_48374, _new_inlined_new_at_14_48559);
    }
    // SubProg new_covered_path pc: 33 op: STARTLINE (58)

    /** coverage.e:178		line_map    &= map:new()*/
    // SubProg new_covered_path pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_covered_path pc: 37 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_covered_path pc: 39 op: PROC (27)
    _0 = _new_1__tmp_at36_48564;
    _new_1__tmp_at36_48564 = _33new_map_seq(8);
    DeRef(_0);
    // SubProg new_covered_path pc: 43 op: PROC (27)
    Ref(_new_1__tmp_at36_48564);
    _0 = _new_inlined_new_at_36_48563;
    _new_inlined_new_at_36_48563 = _34malloc(_new_1__tmp_at36_48564, 1);
    DeRef(_0);
    // SubProg new_covered_path pc: 48 op: NOP1 (159)
    // SubProg new_covered_path pc: 49 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_covered_path @ 36

// block var new_1__tmp_at36_48564
    DeRef(_new_1__tmp_at36_48564);
    _new_1__tmp_at36_48564 = NOVALUE;
    // SubProg new_covered_path pc: 51 op: CONCAT (15)
    if (IS_SEQUENCE(_50line_map_48373) && IS_ATOM(_new_inlined_new_at_36_48563)) {
        Ref(_new_inlined_new_at_36_48563);
        Append(&_50line_map_48373, _50line_map_48373, _new_inlined_new_at_36_48563);
    }
    else if (IS_ATOM(_50line_map_48373) && IS_SEQUENCE(_new_inlined_new_at_36_48563)) {
    }
    else {
        Concat((object_ptr)&_50line_map_48373, _50line_map_48373, _new_inlined_new_at_36_48563);
    }
    // SubProg new_covered_path pc: 55 op: STARTLINE (58)

    /** coverage.e:179	end procedure*/
    // SubProg new_covered_path pc: 57 op: RETURNP (29)

// Exiting block BLOCK: new_covered_path

// block var name_48556
    DeRefDS(_name_48556);
    return;
    // SubProg new_covered_path pc: 60 op: BADRETURNF (43)
    ;
}


void _50add_coverage(object _cover_this_48568)
{
    object _path_48569 = NOVALUE;
    object _files_48578 = NOVALUE;
    object _subpath_48606 = NOVALUE;
    object _25213 = NOVALUE; // 48627 25213
    object _25212 = NOVALUE; // 48626 25212
    object _25211 = NOVALUE; // 48624 25211
    object _25210 = NOVALUE; // 48623 25210
    object _25209 = NOVALUE; // 48622 25209
    object _25208 = NOVALUE; // 48621 25208
    object _25207 = NOVALUE; // 48620 25207
    object _25206 = NOVALUE; // 48618 25206
    object _25205 = NOVALUE; // 48617 25205
    object _25204 = NOVALUE; // 48615 25204
    object _25203 = NOVALUE; // 48614 25203
    object _25202 = NOVALUE; // 48613 25202
// skipping _25201  name type: 0
    object _25200 = NOVALUE; // 48610 25200
    object _25199 = NOVALUE; // 48608 25199
    object _25198 = NOVALUE; // 48605 25198
    object _25197 = NOVALUE; // 48604 25197
    object _25196 = NOVALUE; // 48602 25196
    object _25195 = NOVALUE; // 48600 25195
    object _25194 = NOVALUE; // 48599 25194
    object _25193 = NOVALUE; // 48597 25193
// skipping _25192  name type: 0
    object _25191 = NOVALUE; // 48594 25191
    object _25190 = NOVALUE; // 48593 25190
    object _25189 = NOVALUE; // 48592 25189
    object _25188 = NOVALUE; // 48590 25188
    object _25187 = NOVALUE; // 48588 25187
    object _25186 = NOVALUE; // 48587 25186
    object _25185 = NOVALUE; // 48585 25185
    object _25184 = NOVALUE; // 48583 25184
// skipping _25183  name type: 0
// skipping _25182  name type: 0
    object _25181 = NOVALUE; // 48575 25181
// skipping _25180  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_coverage pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_coverage pc: 3 op: STARTLINE (58)

    /** coverage.e:185		sequence path = canonical_path( cover_this,, CORRECT )*/
    // SubProg add_coverage pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 7 op: PROC (27)
    RefDS(_cover_this_48568);
    _0 = _path_48569;
    _path_48569 = _16canonical_path(_cover_this_48568, 0, 2);
    DeRef(_0);
    // SubProg add_coverage pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg add_coverage pc: 15 op: STARTLINE (58)

    /** coverage.e:187		if file_type( path ) = FILETYPE_DIRECTORY then*/
    // SubProg add_coverage pc: 17 op: PROC (27)
    RefDS(_path_48569);
    _25181 = _16file_type(_path_48569);
    // SubProg add_coverage pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 23 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25181, 2)){
        DeRef(_25181);
        _25181 = NOVALUE;
        goto L1; // [23] 211
    }
    DeRef(_25181);
    _25181 = NOVALUE;
    // SubProg add_coverage pc: 27 op: STARTLINE (58)

    /** coverage.e:188			sequence files = dir( path  )*/
    // SubProg add_coverage pc: 29 op: PROC (27)
    RefDS(_path_48569);
    _0 = _files_48578;
    _files_48578 = _16dir(_path_48569);
    DeRef(_0);
    // SubProg add_coverage pc: 33 op: SEQUENCE_CHECK (97)
    // SubProg add_coverage pc: 35 op: STARTLINE (58)

    /** coverage.e:190			for i = 1 to length( files ) do*/
    // SubProg add_coverage pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_files_48578)){
            _25184 = SEQ_PTR(_files_48578)->length;
    }
    else {
        _25184 = 1;
    }
    // SubProg add_coverage pc: 40 op: FOR_I (125)
    {
        object _i_48582;
        _i_48582 = 1;
L2: // addr: 47 pc: 40 sub: 48566 op: 125
        if (_i_48582 > _25184){
            goto L3; // [40] 206
        }
        // SubProg add_coverage pc: 47 op: STARTLINE (58)

        /** coverage.e:191				if find( 'd', files[i][D_ATTRIBUTES] ) then*/
        // SubProg add_coverage pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48578);
        _25185 = (object)*(((s1_ptr)_2)->base + _i_48582);
        // SubProg add_coverage pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25185);
        _25186 = (object)*(((s1_ptr)_2)->base + 2);
        _25185 = NOVALUE;
        // SubProg add_coverage pc: 59 op: FIND_FROM (176)
        _25187 = find_from(100, _25186, 1);
        _25186 = NOVALUE;
        // SubProg add_coverage pc: 64 op: IF (20)
        if (_25187 == 0)
        {
            _25187 = NOVALUE;
            goto L4; // [64] 118
        }
        else{
            _25187 = NOVALUE;
        }
        // SubProg add_coverage pc: 67 op: STARTLINE (58)

        /** coverage.e:192					if not eu:find(files[i][D_NAME], {".", ".."}) then*/
        // SubProg add_coverage pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48578);
        _25188 = (object)*(((s1_ptr)_2)->base + _i_48582);
        // SubProg add_coverage pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 75 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25188);
        _25189 = (object)*(((s1_ptr)_2)->base + 1);
        _25188 = NOVALUE;
        // SubProg add_coverage pc: 79 op: RIGHT_BRACE_2 (85)
        RefDS(_23170);
        RefDS(_23171);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23171;
        ((intptr_t *)_2)[2] = _23170;
        _25190 = MAKE_SEQ(_1);
        // SubProg add_coverage pc: 83 op: FIND_FROM (176)
        _25191 = find_from(_25189, _25190, 1);
        _25189 = NOVALUE;
        DeRefDS(_25190);
        _25190 = NOVALUE;
        // SubProg add_coverage pc: 88 op: NOT_IFW (108)
        if (_25191 != 0)
        goto L5; // [88] 199
        _25191 = NOVALUE;
        // SubProg add_coverage pc: 91 op: STARTLINE (58)

        /** coverage.e:193						add_coverage( cover_this & SLASH & files[i][D_NAME] )*/
        // SubProg add_coverage pc: 93 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 95 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48578);
        _25193 = (object)*(((s1_ptr)_2)->base + _i_48582);
        // SubProg add_coverage pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 101 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25193);
        _25194 = (object)*(((s1_ptr)_2)->base + 1);
        _25193 = NOVALUE;
        // SubProg add_coverage pc: 105 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _25194;
            concat_list[1] = 47;
            concat_list[2] = _cover_this_48568;
            Concat_N((object_ptr)&_25195, concat_list, 3);
        }
        _25194 = NOVALUE;
        // SubProg add_coverage pc: 111 op: PROC (27)
        _50add_coverage(_25195);
        _25195 = NOVALUE;
        // SubProg add_coverage pc: 114 op: NOP1 (159)
        // SubProg add_coverage pc: 115 op: ELSE (23)
        goto L5; // [115] 199
        // SubProg add_coverage pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 48566 op: 159
        // SubProg add_coverage pc: 118 op: STARTLINE (58)

        /** coverage.e:196				elsif regex:has_match( eu_file, files[i][D_NAME] ) then*/
        // SubProg add_coverage pc: 120 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 122 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48578);
        _25196 = (object)*(((s1_ptr)_2)->base + _i_48582);
        // SubProg add_coverage pc: 126 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 128 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25196);
        _25197 = (object)*(((s1_ptr)_2)->base + 1);
        _25196 = NOVALUE;
        // SubProg add_coverage pc: 132 op: PROC (27)
        Ref(_50eu_file_48550);
        Ref(_25197);
        _25198 = _51has_match(_50eu_file_48550, _25197, 1, 0);
        _25197 = NOVALUE;
        // SubProg add_coverage pc: 139 op: IF (20)
        if (_25198 == 0) {
            DeRef(_25198);
            _25198 = NOVALUE;
            goto L6; // [139] 196
        }
        else {
            if (!IS_ATOM_INT(_25198) && DBL_PTR(_25198)->dbl == 0.0){
                DeRef(_25198);
                _25198 = NOVALUE;
                goto L6; // [139] 196
            }
            DeRef(_25198);
            _25198 = NOVALUE;
        }
        DeRef(_25198);
        _25198 = NOVALUE;
        // SubProg add_coverage pc: 142 op: STARTLINE (58)

        /** coverage.e:198					sequence subpath = path & SLASH & files[i][D_NAME]*/
        // SubProg add_coverage pc: 144 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 146 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_files_48578);
        _25199 = (object)*(((s1_ptr)_2)->base + _i_48582);
        // SubProg add_coverage pc: 150 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 152 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25199);
        _25200 = (object)*(((s1_ptr)_2)->base + 1);
        _25199 = NOVALUE;
        // SubProg add_coverage pc: 156 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _25200;
            concat_list[1] = 47;
            concat_list[2] = _path_48569;
            Concat_N((object_ptr)&_subpath_48606, concat_list, 3);
        }
        _25200 = NOVALUE;
        // SubProg add_coverage pc: 162 op: STARTLINE (58)

        /** coverage.e:199					if not find( subpath, covered_files ) and not excluded( subpath ) then*/
        // SubProg add_coverage pc: 164 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_coverage pc: 166 op: FIND_FROM (176)
        _25202 = find_from(_subpath_48606, _50covered_files_48368, 1);
        // SubProg add_coverage pc: 171 op: NOT (7)
        _25203 = (_25202 == 0);
        _25202 = NOVALUE;
        // SubProg add_coverage pc: 174 op: SC1_AND_IF (146)
        if (_25203 == 0) {
            goto L7; // [174] 195
        }
        // SubProg add_coverage pc: 178 op: PROC (27)
        RefDS(_subpath_48606);
        _25205 = _50excluded(_subpath_48606);
        // SubProg add_coverage pc: 182 op: NOT (7)
        if (IS_ATOM_INT(_25205)) {
            _25206 = (_25205 == 0);
        }
        else {
            _25206 = unary_op(NOT, _25205);
        }
        DeRef(_25205);
        _25205 = NOVALUE;
        // SubProg add_coverage pc: 185 op: NOP1 (159)
        // SubProg add_coverage pc: 186 op: IF (20)
        if (_25206 == 0) {
            DeRef(_25206);
            _25206 = NOVALUE;
            goto L7; // [186] 195
        }
        else {
            if (!IS_ATOM_INT(_25206) && DBL_PTR(_25206)->dbl == 0.0){
                DeRef(_25206);
                _25206 = NOVALUE;
                goto L7; // [186] 195
            }
            DeRef(_25206);
            _25206 = NOVALUE;
        }
        DeRef(_25206);
        _25206 = NOVALUE;
        // SubProg add_coverage pc: 189 op: STARTLINE (58)

        /** coverage.e:200						new_covered_path( subpath )*/
        // SubProg add_coverage pc: 191 op: PROC (27)
        RefDS(_subpath_48606);
        _50new_covered_path(_subpath_48606);
        // SubProg add_coverage pc: 194 op: NOP1 (159)
L7: // addr: 195 pc: 194 sub: 48566 op: 159
        // SubProg add_coverage pc: 195 op: NOP1 (159)
L6: // addr: 196 pc: 195 sub: 48566 op: 159
        // SubProg add_coverage pc: 196 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var subpath_48606
        DeRef(_subpath_48606);
        _subpath_48606 = NOVALUE;
        // SubProg add_coverage pc: 198 op: NOP1 (159)
L5: // addr: 199 pc: 198 sub: 48566 op: 159
        // SubProg add_coverage pc: 199 op: STARTLINE (58)

        /** coverage.e:203			end for*/
        // SubProg add_coverage pc: 201 op: ENDFOR_INT_UP1 (54)
        _i_48582 = _i_48582 + 1;
        goto L2; // [201] 47
L3: // addr: 206 pc: 201 sub: 48566 op: 54
        ;
    }
    // SubProg add_coverage pc: 206 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var files_48578
    DeRef(_files_48578);
    _files_48578 = NOVALUE;
    // SubProg add_coverage pc: 208 op: ELSE (23)
    goto L8; // [208] 262
    // SubProg add_coverage pc: 210 op: NOP1 (159)
L1: // addr: 211 pc: 210 sub: 48566 op: 159
    // SubProg add_coverage pc: 211 op: STARTLINE (58)

    /** coverage.e:204		elsif regex:has_match( eu_file, path ) and*/
    // SubProg add_coverage pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 215 op: PROC (27)
    Ref(_50eu_file_48550);
    RefDS(_path_48569);
    _25207 = _51has_match(_50eu_file_48550, _path_48569, 1, 0);
    // SubProg add_coverage pc: 222 op: SC1_AND (141)
    if (IS_ATOM_INT(_25207)) {
        if (_25207 == 0) {
            DeRef(_25208);
            _25208 = 0;
            goto L9; // [222] 240
        }
    }
    else {
        if (DBL_PTR(_25207)->dbl == 0.0) {
            DeRef(_25208);
            _25208 = 0;
            goto L9; // [222] 240
        }
    }
    // SubProg add_coverage pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_coverage pc: 228 op: FIND_FROM (176)
    _25209 = find_from(_path_48569, _50covered_files_48368, 1);
    // SubProg add_coverage pc: 233 op: NOT (7)
    _25210 = (_25209 == 0);
    _25209 = NOVALUE;
    // SubProg add_coverage pc: 236 op: SC2_AND (142)
    DeRef(_25208);
    _25208 = (_25210 != 0);
    // SubProg add_coverage pc: 239 op: NOP1 (159)
L9: // addr: 240 pc: 239 sub: 48566 op: 159
    // SubProg add_coverage pc: 240 op: SC1_AND_IF (146)
    if (_25208 == 0) {
        goto LA; // [240] 261
    }
    // SubProg add_coverage pc: 244 op: PROC (27)
    RefDS(_path_48569);
    _25212 = _50excluded(_path_48569);
    // SubProg add_coverage pc: 248 op: NOT (7)
    if (IS_ATOM_INT(_25212)) {
        _25213 = (_25212 == 0);
    }
    else {
        _25213 = unary_op(NOT, _25212);
    }
    DeRef(_25212);
    _25212 = NOVALUE;
    // SubProg add_coverage pc: 251 op: NOP1 (159)
    // SubProg add_coverage pc: 252 op: IF (20)
    if (_25213 == 0) {
        DeRef(_25213);
        _25213 = NOVALUE;
        goto LA; // [252] 261
    }
    else {
        if (!IS_ATOM_INT(_25213) && DBL_PTR(_25213)->dbl == 0.0){
            DeRef(_25213);
            _25213 = NOVALUE;
            goto LA; // [252] 261
        }
        DeRef(_25213);
        _25213 = NOVALUE;
    }
    DeRef(_25213);
    _25213 = NOVALUE;
    // SubProg add_coverage pc: 255 op: STARTLINE (58)

    /** coverage.e:207			new_covered_path( path )*/
    // SubProg add_coverage pc: 257 op: PROC (27)
    RefDS(_path_48569);
    _50new_covered_path(_path_48569);
    // SubProg add_coverage pc: 260 op: NOP1 (159)
LA: // addr: 261 pc: 260 sub: 48566 op: 159
    // SubProg add_coverage pc: 261 op: NOP1 (159)
L8: // addr: 262 pc: 261 sub: 48566 op: 159
    // SubProg add_coverage pc: 262 op: STARTLINE (58)

    /** coverage.e:209	end procedure*/
    // SubProg add_coverage pc: 264 op: RETURNP (29)

// Exiting block BLOCK: add_coverage

// block var cover_this_48568
    DeRefDS(_cover_this_48568);

// block var path_48569
    DeRef(_path_48569);
    DeRef(_25207);
    _25207 = NOVALUE;
    DeRef(_25203);
    _25203 = NOVALUE;
    DeRef(_25210);
    _25210 = NOVALUE;
    return;
    // SubProg add_coverage pc: 267 op: BADRETURNF (43)
    ;
}


object _50excluded(object _file_48630)
{
    object _25216 = NOVALUE; // 48636 25216
    object _25215 = NOVALUE; // 48635 25215
    object _25214 = NOVALUE; // 48633 25214
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg excluded pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg excluded pc: 3 op: STARTLINE (58)

    /** coverage.e:212		for i = 1 to length( exclusion_patterns ) do*/
    // SubProg excluded pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg excluded pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_50exclusion_patterns_48372)){
            _25214 = SEQ_PTR(_50exclusion_patterns_48372)->length;
    }
    else {
        _25214 = 1;
    }
    // SubProg excluded pc: 10 op: FOR_I (125)
    {
        object _i_48632;
        _i_48632 = 1;
L1: // addr: 17 pc: 10 sub: 48628 op: 125
        if (_i_48632 > _25214){
            goto L2; // [10] 49
        }
        // SubProg excluded pc: 17 op: STARTLINE (58)

        /** coverage.e:213			if regex:has_match( exclusion_patterns[i], file ) then*/
        // SubProg excluded pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg excluded pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50exclusion_patterns_48372);
        _25215 = (object)*(((s1_ptr)_2)->base + _i_48632);
        // SubProg excluded pc: 25 op: PROC (27)
        Ref(_25215);
        RefDS(_file_48630);
        _25216 = _51has_match(_25215, _file_48630, 1, 0);
        _25215 = NOVALUE;
        // SubProg excluded pc: 32 op: IF (20)
        if (_25216 == 0) {
            DeRef(_25216);
            _25216 = NOVALUE;
            goto L3; // [32] 42
        }
        else {
            if (!IS_ATOM_INT(_25216) && DBL_PTR(_25216)->dbl == 0.0){
                DeRef(_25216);
                _25216 = NOVALUE;
                goto L3; // [32] 42
            }
            DeRef(_25216);
            _25216 = NOVALUE;
        }
        DeRef(_25216);
        _25216 = NOVALUE;
        // SubProg excluded pc: 35 op: STARTLINE (58)

        /** coverage.e:214				return 1*/
        // SubProg excluded pc: 37 op: RETURNF (28)

// Exiting block BLOCK: excluded

// block var file_48630
        DeRefDS(_file_48630);
        return 1;
        // SubProg excluded pc: 41 op: NOP1 (159)
L3: // addr: 42 pc: 41 sub: 48628 op: 159
        // SubProg excluded pc: 42 op: STARTLINE (58)

        /** coverage.e:216		end for*/
        // SubProg excluded pc: 44 op: ENDFOR_INT_UP1 (54)
        _i_48632 = _i_48632 + 1;
        goto L1; // [44] 17
L2: // addr: 49 pc: 44 sub: 48628 op: 54
        ;
    }
    // SubProg excluded pc: 49 op: STARTLINE (58)

    /** coverage.e:217		return 0*/
    // SubProg excluded pc: 51 op: RETURNF (28)

// Exiting block BLOCK: excluded

// block var file_48630
    DeRefDS(_file_48630);
    return 0;
    // SubProg excluded pc: 55 op: BADRETURNF (43)
    ;
}


void _50coverage_exclude(object _patterns_48639)
{
    object _ex_48644 = NOVALUE;
    object _fx_48651 = NOVALUE;
    object _25234 = NOVALUE; // 48669 25234
    object _25233 = NOVALUE; // 48668 25233
    object _25232 = NOVALUE; // 48667 25232
    object _25231 = NOVALUE; // 48666 25231
// skipping _25229  name type: 0
// skipping _25228  name type: 0
// skipping _25227  name type: 0
// skipping _25226  name type: 0
    object _25225 = NOVALUE; // 48657 25225
    object _25224 = NOVALUE; // 48656 25224
// skipping _25223  name type: 0
    object _25222 = NOVALUE; // 48653 25222
// skipping _25221  name type: 0
    object _25220 = NOVALUE; // 48649 25220
// skipping _25219  name type: 0
    object _25218 = NOVALUE; // 48645 25218
    object _25217 = NOVALUE; // 48642 25217
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg coverage_exclude pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg coverage_exclude pc: 3 op: STARTLINE (58)

    /** coverage.e:221		for i = 1 to length( patterns ) do*/
    // SubProg coverage_exclude pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_patterns_48639)){
            _25217 = SEQ_PTR(_patterns_48639)->length;
    }
    else {
        _25217 = 1;
    }
    // SubProg coverage_exclude pc: 8 op: FOR_I (125)
    {
        object _i_48641;
        _i_48641 = 1;
L1: // addr: 15 pc: 8 sub: 48637 op: 125
        if (_i_48641 > _25217){
            goto L2; // [8] 161
        }
        // SubProg coverage_exclude pc: 15 op: STARTLINE (58)

        /** coverage.e:222			regex ex = regex:new( patterns[i] )*/
        // SubProg coverage_exclude pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_patterns_48639);
        _25218 = (object)*(((s1_ptr)_2)->base + _i_48641);
        // SubProg coverage_exclude pc: 21 op: PROC (27)
        Ref(_25218);
        _0 = _ex_48644;
        _ex_48644 = _51new(_25218, 0);
        DeRef(_0);
        _25218 = NOVALUE;
        // SubProg coverage_exclude pc: 26 op: STARTLINE (58)

        /** coverage.e:223			if regex( ex ) then*/
        // SubProg coverage_exclude pc: 28 op: PROC (27)
        Ref(_ex_48644);
        _25220 = _51regex(_ex_48644);
        // SubProg coverage_exclude pc: 32 op: IF (20)
        if (_25220 == 0) {
            DeRef(_25220);
            _25220 = NOVALUE;
            goto L3; // [32] 127
        }
        else {
            if (!IS_ATOM_INT(_25220) && DBL_PTR(_25220)->dbl == 0.0){
                DeRef(_25220);
                _25220 = NOVALUE;
                goto L3; // [32] 127
            }
            DeRef(_25220);
            _25220 = NOVALUE;
        }
        DeRef(_25220);
        _25220 = NOVALUE;
        // SubProg coverage_exclude pc: 35 op: STARTLINE (58)

        /** coverage.e:224				exclusion_patterns = append( exclusion_patterns, ex )*/
        // SubProg coverage_exclude pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 39 op: APPEND (35)
        Ref(_ex_48644);
        Append(&_50exclusion_patterns_48372, _50exclusion_patterns_48372, _ex_48644);
        // SubProg coverage_exclude pc: 43 op: STARTLINE (58)

        /** coverage.e:225				integer fx = 1*/
        // SubProg coverage_exclude pc: 45 op: ASSIGN_I (113)
        _fx_48651 = 1;
        // SubProg coverage_exclude pc: 48 op: STARTLINE (58)

        /** coverage.e:226				while fx <= length( covered_files ) do*/
        // SubProg coverage_exclude pc: 50 op: NOP2 (110)
        // SubProg coverage_exclude pc: 52 op: NOPWHILE (158)
L4: // addr: 53 pc: 52 sub: 48637 op: 158
        // SubProg coverage_exclude pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 55 op: LENGTH (42)
        if (IS_SEQUENCE(_50covered_files_48368)){
                _25222 = SEQ_PTR(_50covered_files_48368)->length;
        }
        else {
            _25222 = 1;
        }
        // SubProg coverage_exclude pc: 58 op: LESSEQ_IFW_I (123)
        if (_fx_48651 > _25222)
        goto L5; // [58] 122
        // SubProg coverage_exclude pc: 62 op: STARTLINE (58)

        /** coverage.e:227					if regex:has_match( ex, covered_files[fx] ) then*/
        // SubProg coverage_exclude pc: 64 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 66 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50covered_files_48368);
        _25224 = (object)*(((s1_ptr)_2)->base + _fx_48651);
        // SubProg coverage_exclude pc: 70 op: PROC (27)
        Ref(_ex_48644);
        Ref(_25224);
        _25225 = _51has_match(_ex_48644, _25224, 1, 0);
        _25224 = NOVALUE;
        // SubProg coverage_exclude pc: 77 op: IF (20)
        if (_25225 == 0) {
            DeRef(_25225);
            _25225 = NOVALUE;
            goto L6; // [77] 110
        }
        else {
            if (!IS_ATOM_INT(_25225) && DBL_PTR(_25225)->dbl == 0.0){
                DeRef(_25225);
                _25225 = NOVALUE;
                goto L6; // [77] 110
            }
            DeRef(_25225);
            _25225 = NOVALUE;
        }
        DeRef(_25225);
        _25225 = NOVALUE;
        // SubProg coverage_exclude pc: 80 op: STARTLINE (58)

        /** coverage.e:228						covered_files = remove( covered_files, fx )*/
        // SubProg coverage_exclude pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 84 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_50covered_files_48368);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48651)) ? _fx_48651 : (object)(DBL_PTR(_fx_48651)->dbl);
            int stop = (IS_ATOM_INT(_fx_48651)) ? _fx_48651 : (object)(DBL_PTR(_fx_48651)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_50covered_files_48368), start, &_50covered_files_48368 );
                }
                else Tail(SEQ_PTR(_50covered_files_48368), stop+1, &_50covered_files_48368);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_50covered_files_48368), start, &_50covered_files_48368);
            }
            else {
                assign_slice_seq = &assign_space;
                _50covered_files_48368 = Remove_elements(start, stop, (SEQ_PTR(_50covered_files_48368)->ref == 1));
            }
        }
        // SubProg coverage_exclude pc: 89 op: STARTLINE (58)

        /** coverage.e:229						routine_map   = remove( routine_map, fx )*/
        // SubProg coverage_exclude pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 93 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_50routine_map_48374);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48651)) ? _fx_48651 : (object)(DBL_PTR(_fx_48651)->dbl);
            int stop = (IS_ATOM_INT(_fx_48651)) ? _fx_48651 : (object)(DBL_PTR(_fx_48651)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_50routine_map_48374), start, &_50routine_map_48374 );
                }
                else Tail(SEQ_PTR(_50routine_map_48374), stop+1, &_50routine_map_48374);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_50routine_map_48374), start, &_50routine_map_48374);
            }
            else {
                assign_slice_seq = &assign_space;
                _50routine_map_48374 = Remove_elements(start, stop, (SEQ_PTR(_50routine_map_48374)->ref == 1));
            }
        }
        // SubProg coverage_exclude pc: 98 op: STARTLINE (58)

        /** coverage.e:230						line_map      = remove( line_map, fx )*/
        // SubProg coverage_exclude pc: 100 op: GLOBAL_INIT_CHECK (109)
        // SubProg coverage_exclude pc: 102 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_50line_map_48373);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48651)) ? _fx_48651 : (object)(DBL_PTR(_fx_48651)->dbl);
            int stop = (IS_ATOM_INT(_fx_48651)) ? _fx_48651 : (object)(DBL_PTR(_fx_48651)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_50line_map_48373), start, &_50line_map_48373 );
                }
                else Tail(SEQ_PTR(_50line_map_48373), stop+1, &_50line_map_48373);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_50line_map_48373), start, &_50line_map_48373);
            }
            else {
                assign_slice_seq = &assign_space;
                _50line_map_48373 = Remove_elements(start, stop, (SEQ_PTR(_50line_map_48373)->ref == 1));
            }
        }
        // SubProg coverage_exclude pc: 107 op: ELSE (23)
        goto L4; // [107] 53
        // SubProg coverage_exclude pc: 109 op: NOP1 (159)
L6: // addr: 110 pc: 109 sub: 48637 op: 159
        // SubProg coverage_exclude pc: 110 op: STARTLINE (58)

        /** coverage.e:232						fx += 1*/
        // SubProg coverage_exclude pc: 112 op: PLUS1_I (117)
        _fx_48651 = _fx_48651 + 1;
        // SubProg coverage_exclude pc: 116 op: NOP1 (159)
        // SubProg coverage_exclude pc: 117 op: STARTLINE (58)

        /** coverage.e:234				end while*/
        // SubProg coverage_exclude pc: 119 op: ENDWHILE (22)
        goto L4; // [119] 53
        // SubProg coverage_exclude pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 48637 op: 159
        // SubProg coverage_exclude pc: 122 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fx_48651
        // SubProg coverage_exclude pc: 124 op: ELSE (23)
        goto L7; // [124] 152
        // SubProg coverage_exclude pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 48637 op: 159
        // SubProg coverage_exclude pc: 127 op: STARTLINE (58)

        /** coverage.e:236				printf( 2,"%s\n", { GetMsgText( 339, 1, {patterns[i]}) } )*/
        // SubProg coverage_exclude pc: 129 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_patterns_48639);
        _25231 = (object)*(((s1_ptr)_2)->base + _i_48641);
        // SubProg coverage_exclude pc: 133 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25231);
        ((intptr_t*)_2)[1] = _25231;
        _25232 = MAKE_SEQ(_1);
        _25231 = NOVALUE;
        // SubProg coverage_exclude pc: 137 op: PROC (27)
        _25233 = _40GetMsgText(339, 1, _25232);
        _25232 = NOVALUE;
        // SubProg coverage_exclude pc: 143 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _25233;
        _25234 = MAKE_SEQ(_1);
        _25233 = NOVALUE;
        // SubProg coverage_exclude pc: 147 op: PRINTF (38)
        EPrintf(2, _25230, _25234);
        DeRefDS(_25234);
        _25234 = NOVALUE;
        // SubProg coverage_exclude pc: 151 op: NOP1 (159)
L7: // addr: 152 pc: 151 sub: 48637 op: 159
        // SubProg coverage_exclude pc: 152 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ex_48644
        DeRef(_ex_48644);
        _ex_48644 = NOVALUE;
        // SubProg coverage_exclude pc: 154 op: STARTLINE (58)

        /** coverage.e:238		end for*/
        // SubProg coverage_exclude pc: 156 op: ENDFOR_INT_UP1 (54)
        _i_48641 = _i_48641 + 1;
        goto L1; // [156] 15
L2: // addr: 161 pc: 156 sub: 48637 op: 54
        ;
    }
    // SubProg coverage_exclude pc: 161 op: STARTLINE (58)

    /** coverage.e:240	end procedure*/
    // SubProg coverage_exclude pc: 163 op: RETURNP (29)

// Exiting block BLOCK: coverage_exclude

// block var patterns_48639
    DeRefDS(_patterns_48639);
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
    _50coverage_erase_48371 = 1;
    // SubProg new_coverage_db pc: 6 op: STARTLINE (58)

    /** coverage.e:244	end procedure*/
    // SubProg new_coverage_db pc: 8 op: RETURNP (29)

// Exiting block BLOCK: new_coverage_db
    return;
    // SubProg new_coverage_db pc: 11 op: BADRETURNF (43)
    ;
}


void _50include_line(object _line_number_48674)
{
// skipping _25236  name type: 0
    object _25235 = NOVALUE; // 48676 25235
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg include_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg include_line pc: 3 op: STARTLINE (58)

    /** coverage.e:247		if coverage_on() then*/
    // SubProg include_line pc: 5 op: PROC (27)
    _25235 = _50coverage_on();
    // SubProg include_line pc: 8 op: IF (20)
    if (_25235 == 0) {
        DeRef(_25235);
        _25235 = NOVALUE;
        goto L1; // [8] 34
    }
    else {
        if (!IS_ATOM_INT(_25235) && DBL_PTR(_25235)->dbl == 0.0){
            DeRef(_25235);
            _25235 = NOVALUE;
            goto L1; // [8] 34
        }
        DeRef(_25235);
        _25235 = NOVALUE;
    }
    DeRef(_25235);
    _25235 = NOVALUE;
    // SubProg include_line pc: 11 op: STARTLINE (58)

    /** coverage.e:248			emit_op( COVERAGE_LINE )*/
    // SubProg include_line pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 15 op: PROC (27)
    _45emit_op(210);
    // SubProg include_line pc: 18 op: STARTLINE (58)

    /** coverage.e:249			emit_addr( gline_number )*/
    // SubProg include_line pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 22 op: PROC (27)
    _45emit_addr(_5gline_number_12482);
    // SubProg include_line pc: 25 op: STARTLINE (58)

    /** coverage.e:251			included_lines &= line_number*/
    // SubProg include_line pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_line pc: 29 op: CONCAT (15)
    Append(&_50included_lines_48375, _50included_lines_48375, _line_number_48674);
    // SubProg include_line pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 48672 op: 159
    // SubProg include_line pc: 34 op: STARTLINE (58)

    /** coverage.e:253	end procedure*/
    // SubProg include_line pc: 36 op: RETURNP (29)

// Exiting block BLOCK: include_line

// block var line_number_48674
    return;
    // SubProg include_line pc: 39 op: BADRETURNF (43)
    ;
}


void _50include_routine()
{
    object _file_no_48690 = NOVALUE;
    object _25242 = NOVALUE; // 48700 25242
    object _25241 = NOVALUE; // 48697 25241
    object _25240 = NOVALUE; // 48696 25240
// skipping _25239  name type: 0
    object _25238 = NOVALUE; // 48693 25238
    object _25237 = NOVALUE; // 48685 25237
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg include_routine pc: 1 op: STARTLINE (58)

    /** coverage.e:256		if coverage_on() then*/
    // SubProg include_routine pc: 3 op: PROC (27)
    _25237 = _50coverage_on();
    // SubProg include_routine pc: 6 op: IF (20)
    if (_25237 == 0) {
        DeRef(_25237);
        _25237 = NOVALUE;
        goto L1; // [6] 69
    }
    else {
        if (!IS_ATOM_INT(_25237) && DBL_PTR(_25237)->dbl == 0.0){
            DeRef(_25237);
            _25237 = NOVALUE;
            goto L1; // [6] 69
        }
        DeRef(_25237);
        _25237 = NOVALUE;
    }
    DeRef(_25237);
    _25237 = NOVALUE;
    // SubProg include_routine pc: 9 op: STARTLINE (58)

    /** coverage.e:257			emit_op( COVERAGE_ROUTINE )*/
    // SubProg include_routine pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 13 op: PROC (27)
    _45emit_op(211);
    // SubProg include_routine pc: 16 op: STARTLINE (58)

    /** coverage.e:258			emit_addr( CurrentSub )*/
    // SubProg include_routine pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 20 op: PROC (27)
    _45emit_addr(_5CurrentSub_12485);
    // SubProg include_routine pc: 23 op: STARTLINE (58)

    /** coverage.e:261			integer file_no = SymTab[CurrentSub][S_FILE_NO]*/
    // SubProg include_routine pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25238 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg include_routine pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25238);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _file_no_48690 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _file_no_48690 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_file_no_48690)){
        _file_no_48690 = (object)DBL_PTR(_file_no_48690)->dbl;
    }
    _25238 = NOVALUE;
    // SubProg include_routine pc: 41 op: STARTLINE (58)

    /** coverage.e:262			map:put( routine_map[file_coverage[file_no]], sym_name( CurrentSub ), 0, map:ADD )*/
    // SubProg include_routine pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50file_coverage_48369);
    _25240 = (object)*(((s1_ptr)_2)->base + _file_no_48690);
    // SubProg include_routine pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50routine_map_48374);
    _25241 = (object)*(((s1_ptr)_2)->base + _25240);
    // SubProg include_routine pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg include_routine pc: 57 op: PROC (27)
    _25242 = _53sym_name(_5CurrentSub_12485);
    // SubProg include_routine pc: 61 op: PROC (27)
    Ref(_25241);
    _33put(_25241, _25242, 0, 2, 0);
    _25241 = NOVALUE;
    _25242 = NOVALUE;
    // SubProg include_routine pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 48682 op: 159
    // SubProg include_routine pc: 69 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var file_no_48690
    // SubProg include_routine pc: 71 op: STARTLINE (58)

    /** coverage.e:264	end procedure*/
    // SubProg include_routine pc: 73 op: RETURNP (29)

// Exiting block BLOCK: include_routine
    _25240 = NOVALUE;
    return;
    // SubProg include_routine pc: 76 op: BADRETURNF (43)
    ;
}


void _50process_lines()
{
    object _sline_48718 = NOVALUE;
    object _file_48722 = NOVALUE;
    object _line_48732 = NOVALUE;
    object _25260 = NOVALUE; // 48735 25260
// skipping _25259  name type: 0
    object _25258 = NOVALUE; // 48731 25258
    object _25257 = NOVALUE; // 48730 25257
    object _25256 = NOVALUE; // 48729 25256
    object _25255 = NOVALUE; // 48728 25255
    object _25254 = NOVALUE; // 48727 25254
// skipping _25253  name type: 0
    object _25252 = NOVALUE; // 48724 25252
// skipping _25251  name type: 0
    object _25250 = NOVALUE; // 48720 25250
    object _25249 = NOVALUE; // 48717 25249
// skipping _25248  name type: 0
    object _25247 = NOVALUE; // 48710 25247
    object _25246 = NOVALUE; // 48709 25246
    object _25245 = NOVALUE; // 48708 25245
// skipping _25244  name type: 0
    object _25243 = NOVALUE; // 48704 25243
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg process_lines pc: 1 op: STARTLINE (58)

    /** coverage.e:267		if not length( included_lines ) then*/
    // SubProg process_lines pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_50included_lines_48375)){
            _25243 = SEQ_PTR(_50included_lines_48375)->length;
    }
    else {
        _25243 = 1;
    }
    // SubProg process_lines pc: 8 op: NOT_IFW (108)
    if (_25243 != 0)
    goto L1; // [8] 17
    _25243 = NOVALUE;
    // SubProg process_lines pc: 11 op: STARTLINE (58)

    /** coverage.e:268			return*/
    // SubProg process_lines pc: 13 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: process_lines
    return;
    // SubProg process_lines pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 48701 op: 159
    // SubProg process_lines pc: 17 op: STARTLINE (58)

    /** coverage.e:270		if atom(slist[$]) then*/
    // SubProg process_lines pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _25245 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _25245 = 1;
    }
    // SubProg process_lines pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5slist_12568);
    _25246 = (object)*(((s1_ptr)_2)->base + _25245);
    // SubProg process_lines pc: 28 op: IS_AN_ATOM (67)
    _25247 = IS_ATOM(_25246);
    _25246 = NOVALUE;
    // SubProg process_lines pc: 31 op: IF (20)
    if (_25247 == 0)
    {
        _25247 = NOVALUE;
        goto L2; // [31] 45
    }
    else{
        _25247 = NOVALUE;
    }
    // SubProg process_lines pc: 34 op: STARTLINE (58)

    /** coverage.e:271			slist = s_expand( slist )*/
    // SubProg process_lines pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 38 op: PROC (27)
    RefDS(_5slist_12568);
    _0 = _61s_expand(_5slist_12568);
    DeRefDS(_5slist_12568);
    _5slist_12568 = _0;
    // SubProg process_lines pc: 42 op: SEQUENCE_CHECK (97)
    // SubProg process_lines pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 48701 op: 159
    // SubProg process_lines pc: 45 op: STARTLINE (58)

    /** coverage.e:273		for i = 1 to length( included_lines ) do*/
    // SubProg process_lines pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg process_lines pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_50included_lines_48375)){
            _25249 = SEQ_PTR(_50included_lines_48375)->length;
    }
    else {
        _25249 = 1;
    }
    // SubProg process_lines pc: 52 op: FOR_I (125)
    {
        object _i_48716;
        _i_48716 = 1;
L3: // addr: 59 pc: 52 sub: 48701 op: 125
        if (_i_48716 > _25249){
            goto L4; // [52] 157
        }
        // SubProg process_lines pc: 59 op: STARTLINE (58)

        /** coverage.e:274			sequence sline = slist[included_lines[i]]*/
        // SubProg process_lines pc: 61 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 63 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 65 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50included_lines_48375);
        _25250 = (object)*(((s1_ptr)_2)->base + _i_48716);
        // SubProg process_lines pc: 69 op: RHS_SUBS_CHECK (92)
        DeRef(_sline_48718);
        _2 = (object)SEQ_PTR(_5slist_12568);
        _sline_48718 = (object)*(((s1_ptr)_2)->base + _25250);
        Ref(_sline_48718);
        // SubProg process_lines pc: 73 op: SEQUENCE_CHECK (97)
        // SubProg process_lines pc: 75 op: STARTLINE (58)

        /** coverage.e:275			integer file = file_coverage[sline[LOCAL_FILE_NO]]*/
        // SubProg process_lines pc: 77 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_sline_48718);
        _25252 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg process_lines pc: 85 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_50file_coverage_48369);
        if (!IS_ATOM_INT(_25252)){
            _file_48722 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_25252)->dbl));
        }
        else{
            _file_48722 = (object)*(((s1_ptr)_2)->base + _25252);
        }
        // SubProg process_lines pc: 89 op: STARTLINE (58)

        /** coverage.e:276			if file and file <= length( line_map ) and line_map[file] then*/
        // SubProg process_lines pc: 91 op: SC1_AND (141)
        if (_file_48722 == 0) {
            _25254 = 0;
            goto L5; // [91] 108
        }
        // SubProg process_lines pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 97 op: LENGTH (42)
        if (IS_SEQUENCE(_50line_map_48373)){
                _25255 = SEQ_PTR(_50line_map_48373)->length;
        }
        else {
            _25255 = 1;
        }
        // SubProg process_lines pc: 100 op: LESSEQ (5)
        _25256 = (_file_48722 <= _25255);
        _25255 = NOVALUE;
        // SubProg process_lines pc: 104 op: SC2_AND (142)
        _25254 = (_25256 != 0);
        // SubProg process_lines pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 48701 op: 159
        // SubProg process_lines pc: 108 op: SC1_AND_IF (146)
        if (_25254 == 0) {
            goto L6; // [108] 146
        }
        // SubProg process_lines pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 114 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50line_map_48373);
        _25258 = (object)*(((s1_ptr)_2)->base + _file_48722);
        // SubProg process_lines pc: 118 op: NOP1 (159)
        // SubProg process_lines pc: 119 op: IF (20)
        if (_25258 == 0) {
            _25258 = NOVALUE;
            goto L6; // [119] 146
        }
        else {
            if (!IS_ATOM_INT(_25258) && DBL_PTR(_25258)->dbl == 0.0){
                _25258 = NOVALUE;
                goto L6; // [119] 146
            }
            _25258 = NOVALUE;
        }
        _25258 = NOVALUE;
        // SubProg process_lines pc: 122 op: STARTLINE (58)

        /** coverage.e:277				integer line = sline[LINE]*/
        // SubProg process_lines pc: 124 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 126 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_sline_48718);
        _line_48732 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_line_48732))
        _line_48732 = (object)DBL_PTR(_line_48732)->dbl;
        // SubProg process_lines pc: 130 op: STARTLINE (58)

        /** coverage.e:278				map:put( line_map[file], line, 0, map:ADD )*/
        // SubProg process_lines pc: 132 op: GLOBAL_INIT_CHECK (109)
        // SubProg process_lines pc: 134 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_50line_map_48373);
        _25260 = (object)*(((s1_ptr)_2)->base + _file_48722);
        // SubProg process_lines pc: 138 op: PROC (27)
        Ref(_25260);
        _33put(_25260, _line_48732, 0, 2, 0);
        _25260 = NOVALUE;
        // SubProg process_lines pc: 145 op: NOP1 (159)
L6: // addr: 146 pc: 145 sub: 48701 op: 159
        // SubProg process_lines pc: 146 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var line_48732
        // SubProg process_lines pc: 148 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var sline_48718
        DeRef(_sline_48718);
        _sline_48718 = NOVALUE;

// block var file_48722
        // SubProg process_lines pc: 150 op: STARTLINE (58)

        /** coverage.e:280		end for*/
        // SubProg process_lines pc: 152 op: ENDFOR_INT_UP1 (54)
        _i_48716 = _i_48716 + 1;
        goto L3; // [152] 59
L4: // addr: 157 pc: 152 sub: 48701 op: 54
        ;
    }
    // SubProg process_lines pc: 157 op: STARTLINE (58)

    /** coverage.e:281	end procedure*/
    // SubProg process_lines pc: 159 op: RETURNP (29)

// Exiting block BLOCK: process_lines
    _25250 = NOVALUE;
    _25252 = NOVALUE;
    DeRef(_25256);
    _25256 = NOVALUE;
    return;
    // SubProg process_lines pc: 162 op: BADRETURNF (43)
    ;
}


object _50cover_line(object _gline_number_48738)
{
    object _sline_48748 = NOVALUE;
    object _file_48751 = NOVALUE;
    object _line_48756 = NOVALUE;
    object _25269 = NOVALUE; // 48759 25269
// skipping _25268  name type: 0
// skipping _25267  name type: 0
    object _25266 = NOVALUE; // 48753 25266
// skipping _25265  name type: 0
// skipping _25264  name type: 0
    object _25263 = NOVALUE; // 48743 25263
    object _25262 = NOVALUE; // 48742 25262
    object _25261 = NOVALUE; // 48741 25261
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cover_line pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_gline_number_48738)) {
        _1 = (object)(DBL_PTR(_gline_number_48738)->dbl);
        DeRefDS(_gline_number_48738);
        _gline_number_48738 = _1;
    }
    // SubProg cover_line pc: 3 op: STARTLINE (58)

    /** coverage.e:284		if atom(slist[$]) then*/
    // SubProg cover_line pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _25261 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _25261 = 1;
    }
    // SubProg cover_line pc: 10 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5slist_12568);
    _25262 = (object)*(((s1_ptr)_2)->base + _25261);
    // SubProg cover_line pc: 14 op: IS_AN_ATOM (67)
    _25263 = IS_ATOM(_25262);
    _25262 = NOVALUE;
    // SubProg cover_line pc: 17 op: IF (20)
    if (_25263 == 0)
    {
        _25263 = NOVALUE;
        goto L1; // [17] 31
    }
    else{
        _25263 = NOVALUE;
    }
    // SubProg cover_line pc: 20 op: STARTLINE (58)

    /** coverage.e:285			slist = s_expand(slist)*/
    // SubProg cover_line pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 24 op: PROC (27)
    RefDS(_5slist_12568);
    _0 = _61s_expand(_5slist_12568);
    DeRefDS(_5slist_12568);
    _5slist_12568 = _0;
    // SubProg cover_line pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg cover_line pc: 30 op: NOP1 (159)
L1: // addr: 31 pc: 30 sub: 48736 op: 159
    // SubProg cover_line pc: 31 op: STARTLINE (58)

    /** coverage.e:287		sequence sline = slist[gline_number]*/
    // SubProg cover_line pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 35 op: RHS_SUBS_CHECK (92)
    DeRef(_sline_48748);
    _2 = (object)SEQ_PTR(_5slist_12568);
    _sline_48748 = (object)*(((s1_ptr)_2)->base + _gline_number_48738);
    Ref(_sline_48748);
    // SubProg cover_line pc: 39 op: SEQUENCE_CHECK (97)
    // SubProg cover_line pc: 41 op: STARTLINE (58)

    /** coverage.e:288		integer file = file_coverage[sline[LOCAL_FILE_NO]]*/
    // SubProg cover_line pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sline_48748);
    _25266 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg cover_line pc: 51 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_50file_coverage_48369);
    if (!IS_ATOM_INT(_25266)){
        _file_48751 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_25266)->dbl));
    }
    else{
        _file_48751 = (object)*(((s1_ptr)_2)->base + _25266);
    }
    // SubProg cover_line pc: 55 op: STARTLINE (58)

    /** coverage.e:289		if file then*/
    // SubProg cover_line pc: 57 op: IF (20)
    if (_file_48751 == 0)
    {
        goto L2; // [57] 84
    }
    else{
    }
    // SubProg cover_line pc: 60 op: STARTLINE (58)

    /** coverage.e:290			integer line = sline[LINE]*/
    // SubProg cover_line pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 64 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sline_48748);
    _line_48756 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_line_48756))
    _line_48756 = (object)DBL_PTR(_line_48756)->dbl;
    // SubProg cover_line pc: 68 op: STARTLINE (58)

    /** coverage.e:291			map:put( line_map[file], line, 1, map:ADD )*/
    // SubProg cover_line pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_line pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50line_map_48373);
    _25269 = (object)*(((s1_ptr)_2)->base + _file_48751);
    // SubProg cover_line pc: 76 op: PROC (27)
    Ref(_25269);
    _33put(_25269, _line_48756, 1, 2, 0);
    _25269 = NOVALUE;
    // SubProg cover_line pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 48736 op: 159
    // SubProg cover_line pc: 84 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var line_48756
    // SubProg cover_line pc: 86 op: STARTLINE (58)

    /** coverage.e:293		return 0*/
    // SubProg cover_line pc: 88 op: RETURNF (28)

// Exiting block BLOCK: cover_line

// block var gline_number_48738

// block var sline_48748
    DeRef(_sline_48748);

// block var file_48751
    _25266 = NOVALUE;
    return 0;
    // SubProg cover_line pc: 92 op: BADRETURNF (43)
    ;
}


object _50cover_routine(object _sub_48763)
{
    object _file_no_48764 = NOVALUE;
    object _25274 = NOVALUE; // 48772 25274
    object _25273 = NOVALUE; // 48770 25273
    object _25272 = NOVALUE; // 48769 25272
// skipping _25271  name type: 0
    object _25270 = NOVALUE; // 48766 25270
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cover_routine pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sub_48763)) {
        _1 = (object)(DBL_PTR(_sub_48763)->dbl);
        DeRefDS(_sub_48763);
        _sub_48763 = _1;
    }
    // SubProg cover_routine pc: 3 op: STARTLINE (58)

    /** coverage.e:297		integer file_no = SymTab[sub][S_FILE_NO]*/
    // SubProg cover_routine pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25270 = (object)*(((s1_ptr)_2)->base + _sub_48763);
    // SubProg cover_routine pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25270);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _file_no_48764 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _file_no_48764 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_file_no_48764)){
        _file_no_48764 = (object)DBL_PTR(_file_no_48764)->dbl;
    }
    _25270 = NOVALUE;
    // SubProg cover_routine pc: 19 op: STARTLINE (58)

    /** coverage.e:298		map:put( routine_map[file_coverage[file_no]], sym_name( sub ), 1, map:ADD )*/
    // SubProg cover_routine pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg cover_routine pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50file_coverage_48369);
    _25272 = (object)*(((s1_ptr)_2)->base + _file_no_48764);
    // SubProg cover_routine pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_50routine_map_48374);
    _25273 = (object)*(((s1_ptr)_2)->base + _25272);
    // SubProg cover_routine pc: 33 op: PROC (27)
    _25274 = _53sym_name(_sub_48763);
    // SubProg cover_routine pc: 37 op: PROC (27)
    Ref(_25273);
    _33put(_25273, _25274, 1, 2, 0);
    _25273 = NOVALUE;
    _25274 = NOVALUE;
    // SubProg cover_routine pc: 44 op: STARTLINE (58)

    /** coverage.e:299		return 0*/
    // SubProg cover_routine pc: 46 op: RETURNF (28)

// Exiting block BLOCK: cover_routine

// block var sub_48763

// block var file_no_48764
    _25272 = NOVALUE;
    return 0;
    // SubProg cover_routine pc: 50 op: BADRETURNF (43)
    ;
}


object _50has_coverage()
{
    object _25275 = NOVALUE; // 48775 25275
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has_coverage pc: 1 op: STARTLINE (58)

    /** coverage.e:303		return length( covered_files )*/
    // SubProg has_coverage pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg has_coverage pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_50covered_files_48368)){
            _25275 = SEQ_PTR(_50covered_files_48368)->length;
    }
    else {
        _25275 = 1;
    }
    // SubProg has_coverage pc: 8 op: RETURNF (28)

// Exiting block BLOCK: has_coverage
    return _25275;
    // SubProg has_coverage pc: 12 op: BADRETURNF (43)
    ;
}



// 0x7F3E87AA
