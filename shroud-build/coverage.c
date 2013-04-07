// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _53check_coverage()
{
    object _25034 = NOVALUE;
    object _25033 = NOVALUE;
    object _25032 = NOVALUE;
    object _25031 = NOVALUE;
    object _25030 = NOVALUE;
    object _25029 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:45		for i = length( file_coverage ) + 1 to length( known_files ) do*/
    if (IS_SEQUENCE(_53file_coverage_48301)){
            _25029 = SEQ_PTR(_53file_coverage_48301)->length;
    }
    else {
        _25029 = 1;
    }
    _25030 = _25029 + 1;
    _25029 = NOVALUE;
    if (IS_SEQUENCE(_36known_files_15405)){
            _25031 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _25031 = 1;
    }
    {
        object _i_48312;
        _i_48312 = _25030;
L1: 
        if (_i_48312 > _25031){
            goto L2; // [17] 58
        }

        /** coverage.e:46			file_coverage &= find( canonical_path( known_files[i],,1 ), covered_files )*/
        _2 = (object)SEQ_PTR(_36known_files_15405);
        _25032 = (object)*(((s1_ptr)_2)->base + _i_48312);
        Ref(_25032);
        _25033 = _16canonical_path(_25032, 0, 1);
        _25032 = NOVALUE;
        _25034 = find_from(_25033, _53covered_files_48300, 1);
        DeRef(_25033);
        _25033 = NOVALUE;
        Append(&_53file_coverage_48301, _53file_coverage_48301, _25034);
        _25034 = NOVALUE;

        /** coverage.e:47		end for*/
        _i_48312 = _i_48312 + 1;
        goto L1; // [53] 24
L2: 
        ;
    }

    /** coverage.e:48	end procedure*/
    DeRef(_25030);
    _25030 = NOVALUE;
    return;
    ;
}


void _53init_coverage()
{
    object _cmd_48336 = NOVALUE;
    object _25052 = NOVALUE;
    object _25051 = NOVALUE;
    object _25049 = NOVALUE;
    object _25048 = NOVALUE;
    object _25047 = NOVALUE;
    object _25045 = NOVALUE;
    object _25043 = NOVALUE;
    object _25042 = NOVALUE;
    object _25040 = NOVALUE;
    object _25039 = NOVALUE;
    object _25038 = NOVALUE;
    object _25037 = NOVALUE;
    object _25036 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:54		if initialized_coverage then*/
    if (_53initialized_coverage_48308 == 0)
    {
        goto L1; // [5] 14
    }
    else{
    }

    /** coverage.e:55			return*/
    return;
L1: 

    /** coverage.e:57		initialized_coverage = 1*/
    _53initialized_coverage_48308 = 1;

    /** coverage.e:58		for i = 1 to length( file_coverage ) do*/
    if (IS_SEQUENCE(_53file_coverage_48301)){
            _25036 = SEQ_PTR(_53file_coverage_48301)->length;
    }
    else {
        _25036 = 1;
    }
    {
        object _i_48327;
        _i_48327 = 1;
L2: 
        if (_i_48327 > _25036){
            goto L3; // [26] 67
        }

        /** coverage.e:59			file_coverage[i] = find( canonical_path( known_files[i],,1 ), covered_files )*/
        _2 = (object)SEQ_PTR(_36known_files_15405);
        _25037 = (object)*(((s1_ptr)_2)->base + _i_48327);
        Ref(_25037);
        _25038 = _16canonical_path(_25037, 0, 1);
        _25037 = NOVALUE;
        _25039 = find_from(_25038, _53covered_files_48300, 1);
        DeRef(_25038);
        _25038 = NOVALUE;
        _2 = (object)SEQ_PTR(_53file_coverage_48301);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _53file_coverage_48301 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_48327);
        *(intptr_t *)_2 = _25039;
        if( _1 != _25039 ){
        }
        _25039 = NOVALUE;

        /** coverage.e:60		end for*/
        _i_48327 = _i_48327 + 1;
        goto L2; // [62] 33
L3: 
        ;
    }

    /** coverage.e:62		if equal( coverage_db_name, "" ) then*/
    if (_53coverage_db_name_48302 == _21928)
    _25040 = 1;
    else if (IS_ATOM_INT(_53coverage_db_name_48302) && IS_ATOM_INT(_21928))
    _25040 = 0;
    else
    _25040 = (compare(_53coverage_db_name_48302, _21928) == 0);
    if (_25040 == 0)
    {
        _25040 = NOVALUE;
        goto L4; // [75] 105
    }
    else{
        _25040 = NOVALUE;
    }

    /** coverage.e:63			sequence cmd = command_line()*/
    DeRef(_cmd_48336);
    _cmd_48336 = Command_Line();

    /** coverage.e:64			coverage_db_name = canonical_path( filebase( cmd[2] ) & "-cvg.edb" )*/
    _2 = (object)SEQ_PTR(_cmd_48336);
    _25042 = (object)*(((s1_ptr)_2)->base + 2);
    RefDS(_25042);
    _25043 = _16filebase(_25042);
    _25042 = NOVALUE;
    if (IS_SEQUENCE(_25043) && IS_ATOM(_25044)) {
    }
    else if (IS_ATOM(_25043) && IS_SEQUENCE(_25044)) {
        Ref(_25043);
        Prepend(&_25045, _25044, _25043);
    }
    else {
        Concat((object_ptr)&_25045, _25043, _25044);
        DeRef(_25043);
        _25043 = NOVALUE;
    }
    DeRef(_25043);
    _25043 = NOVALUE;
    _0 = _16canonical_path(_25045, 0, 0);
    DeRefDS(_53coverage_db_name_48302);
    _53coverage_db_name_48302 = _0;
    _25045 = NOVALUE;
L4: 
    DeRef(_cmd_48336);
    _cmd_48336 = NOVALUE;

    /** coverage.e:67		if coverage_erase and file_exists( coverage_db_name ) then*/
    if (_53coverage_erase_48303 == 0) {
        goto L5; // [111] 151
    }
    RefDS(_53coverage_db_name_48302);
    _25048 = _16file_exists(_53coverage_db_name_48302);
    if (_25048 == 0) {
        DeRef(_25048);
        _25048 = NOVALUE;
        goto L5; // [122] 151
    }
    else {
        if (!IS_ATOM_INT(_25048) && DBL_PTR(_25048)->dbl == 0.0){
            DeRef(_25048);
            _25048 = NOVALUE;
            goto L5; // [122] 151
        }
        DeRef(_25048);
        _25048 = NOVALUE;
    }
    DeRef(_25048);
    _25048 = NOVALUE;

    /** coverage.e:68			if not delete_file( coverage_db_name ) then*/
    RefDS(_53coverage_db_name_48302);
    _25049 = _16delete_file(_53coverage_db_name_48302);
    if (IS_ATOM_INT(_25049)) {
        if (_25049 != 0){
            DeRef(_25049);
            _25049 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    else {
        if (DBL_PTR(_25049)->dbl != 0.0){
            DeRef(_25049);
            _25049 = NOVALUE;
            goto L6; // [133] 150
        }
    }
    DeRef(_25049);
    _25049 = NOVALUE;

    /** coverage.e:69				CompileErr( 335, { coverage_db_name } )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_53coverage_db_name_48302);
    ((intptr_t*)_2)[1] = _53coverage_db_name_48302;
    _25051 = MAKE_SEQ(_1);
    _52CompileErr(335, _25051, 0);
    _25051 = NOVALUE;
L6: 
L5: 

    /** coverage.e:73		if db_open( coverage_db_name ) = DB_OK then*/
    RefDS(_53coverage_db_name_48302);
    _25052 = _48db_open(_53coverage_db_name_48302, 0);
    if (binary_op_a(NOTEQ, _25052, 0)){
        DeRef(_25052);
        _25052 = NOVALUE;
        goto L7; // [162] 175
    }
    DeRef(_25052);
    _25052 = NOVALUE;

    /** coverage.e:74			read_coverage_db()*/
    _53read_coverage_db();

    /** coverage.e:75			db_close()*/
    _48db_close();
L7: 

    /** coverage.e:77	end procedure*/
    return;
    ;
}


void _53write_map(object _coverage_48365, object _table_name_48366)
{
    object _keys_48388 = NOVALUE;
    object _rec_48393 = NOVALUE;
    object _val_48397 = NOVALUE;
    object _31691 = NOVALUE;
    object _25069 = NOVALUE;
    object _25066 = NOVALUE;
    object _25064 = NOVALUE;
    object _25063 = NOVALUE;
    object _25061 = NOVALUE;
    object _25060 = NOVALUE;
    object _25058 = NOVALUE;
    object _25056 = NOVALUE;
    object _25054 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:80		if db_select( coverage_db_name, DB_LOCK_EXCLUSIVE) = DB_OK then*/
    RefDS(_53coverage_db_name_48302);
    _25054 = _48db_select(_53coverage_db_name_48302, 2);
    if (binary_op_a(NOTEQ, _25054, 0)){
        DeRef(_25054);
        _25054 = NOVALUE;
        goto L1; // [16] 61
    }
    DeRef(_25054);
    _25054 = NOVALUE;

    /** coverage.e:81			if db_select_table( table_name ) != DB_OK then*/
    RefDS(_table_name_48366);
    _25056 = _48db_select_table(_table_name_48366);
    if (binary_op_a(EQUALS, _25056, 0)){
        DeRef(_25056);
        _25056 = NOVALUE;
        goto L2; // [28] 73
    }
    DeRef(_25056);
    _25056 = NOVALUE;

    /** coverage.e:82				if db_create_table( table_name ) != DB_OK then*/
    RefDS(_table_name_48366);
    _25058 = _48db_create_table(_table_name_48366, 50);
    if (binary_op_a(EQUALS, _25058, 0)){
        DeRef(_25058);
        _25058 = NOVALUE;
        goto L2; // [41] 73
    }
    DeRef(_25058);
    _25058 = NOVALUE;

    /** coverage.e:83					CompileErr( 336, {table_name} )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_48366);
    ((intptr_t*)_2)[1] = _table_name_48366;
    _25060 = MAKE_SEQ(_1);
    _52CompileErr(336, _25060, 0);
    _25060 = NOVALUE;
    goto L2; // [58] 73
L1: 

    /** coverage.e:87			CompileErr( 336, {table_name} )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_48366);
    ((intptr_t*)_2)[1] = _table_name_48366;
    _25061 = MAKE_SEQ(_1);
    _52CompileErr(336, _25061, 0);
    _25061 = NOVALUE;
L2: 

    /** coverage.e:90		sequence keys = map:keys( coverage )*/
    Ref(_coverage_48365);
    _0 = _keys_48388;
    _keys_48388 = _30keys(_coverage_48365, 0);
    DeRef(_0);

    /** coverage.e:91		for i = 1 to length( keys ) do*/
    if (IS_SEQUENCE(_keys_48388)){
            _25063 = SEQ_PTR(_keys_48388)->length;
    }
    else {
        _25063 = 1;
    }
    {
        object _i_48391;
        _i_48391 = 1;
L3: 
        if (_i_48391 > _25063){
            goto L4; // [87] 167
        }

        /** coverage.e:92			integer rec = db_find_key( keys[i] )*/
        _2 = (object)SEQ_PTR(_keys_48388);
        _25064 = (object)*(((s1_ptr)_2)->base + _i_48391);
        Ref(_25064);
        RefDS(_48current_table_name_17714);
        _rec_48393 = _48db_find_key(_25064, _48current_table_name_17714);
        _25064 = NOVALUE;
        if (!IS_ATOM_INT(_rec_48393)) {
            _1 = (object)(DBL_PTR(_rec_48393)->dbl);
            DeRefDS(_rec_48393);
            _rec_48393 = _1;
        }

        /** coverage.e:93			integer val = map:get( coverage, keys[i] )*/
        _2 = (object)SEQ_PTR(_keys_48388);
        _25066 = (object)*(((s1_ptr)_2)->base + _i_48391);
        Ref(_coverage_48365);
        Ref(_25066);
        _val_48397 = _30get(_coverage_48365, _25066, 0);
        _25066 = NOVALUE;
        if (!IS_ATOM_INT(_val_48397)) {
            _1 = (object)(DBL_PTR(_val_48397)->dbl);
            DeRefDS(_val_48397);
            _val_48397 = _1;
        }

        /** coverage.e:94			if rec > 0 then*/
        if (_rec_48393 <= 0)
        goto L5; // [125] 141

        /** coverage.e:95				db_replace_data( rec, val )*/
        RefDS(_48current_table_name_17714);
        _48db_replace_data(_rec_48393, _val_48397, _48current_table_name_17714);
        goto L6; // [138] 158
L5: 

        /** coverage.e:97				db_insert( keys[i], val )*/
        _2 = (object)SEQ_PTR(_keys_48388);
        _25069 = (object)*(((s1_ptr)_2)->base + _i_48391);
        Ref(_25069);
        RefDS(_48current_table_name_17714);
        _31691 = _48db_insert(_25069, _val_48397, _48current_table_name_17714);
        _25069 = NOVALUE;
        DeRef(_31691);
        _31691 = NOVALUE;
L6: 

        /** coverage.e:99		end for*/
        _i_48391 = _i_48391 + 1;
        goto L3; // [162] 94
L4: 
        ;
    }

    /** coverage.e:101	end procedure*/
    DeRef(_coverage_48365);
    DeRefDS(_table_name_48366);
    DeRef(_keys_48388);
    return;
    ;
}


object _53write_coverage_db()
{
    object _25084 = NOVALUE;
    object _25083 = NOVALUE;
    object _25082 = NOVALUE;
    object _25081 = NOVALUE;
    object _25080 = NOVALUE;
    object _25079 = NOVALUE;
    object _25078 = NOVALUE;
    object _25077 = NOVALUE;
    object _25074 = NOVALUE;
    object _25072 = NOVALUE;
    object _25070 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:105		if wrote_coverage then*/
    if (_53wrote_coverage_48406 == 0)
    {
        goto L1; // [5] 15
    }
    else{
    }

    /** coverage.e:106			return 1*/
    return 1;
L1: 

    /** coverage.e:108		wrote_coverage = 1*/
    _53wrote_coverage_48406 = 1;

    /** coverage.e:109		init_coverage()*/
    _53init_coverage();

    /** coverage.e:110		if not length( covered_files ) then*/
    if (IS_SEQUENCE(_53covered_files_48300)){
            _25070 = SEQ_PTR(_53covered_files_48300)->length;
    }
    else {
        _25070 = 1;
    }
    if (_25070 != 0)
    goto L2; // [31] 41
    _25070 = NOVALUE;

    /** coverage.e:111			return 1*/
    return 1;
L2: 

    /** coverage.e:114		if DB_OK != db_open( coverage_db_name, DB_LOCK_EXCLUSIVE) then*/
    RefDS(_53coverage_db_name_48302);
    _25072 = _48db_open(_53coverage_db_name_48302, 2);
    if (binary_op_a(EQUALS, 0, _25072)){
        DeRef(_25072);
        _25072 = NOVALUE;
        goto L3; // [54] 95
    }
    DeRef(_25072);
    _25072 = NOVALUE;

    /** coverage.e:115			if DB_OK != db_create( coverage_db_name ) then*/
    RefDS(_53coverage_db_name_48302);
    _25074 = _48db_create(_53coverage_db_name_48302, 0, 5, 5);
    if (binary_op_a(EQUALS, 0, _25074)){
        DeRef(_25074);
        _25074 = NOVALUE;
        goto L4; // [71] 94
    }
    DeRef(_25074);
    _25074 = NOVALUE;

    /** coverage.e:116				printf(2, "error opening %s\n", {coverage_db_name})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_53coverage_db_name_48302);
    ((intptr_t*)_2)[1] = _53coverage_db_name_48302;
    _25077 = MAKE_SEQ(_1);
    EPrintf(2, _25076, _25077);
    DeRefDS(_25077);
    _25077 = NOVALUE;

    /** coverage.e:117				return 0*/
    return 0;
L4: 
L3: 

    /** coverage.e:121		process_lines()*/
    _53process_lines();

    /** coverage.e:122		for tx = 1 to length( routine_map ) do*/
    if (IS_SEQUENCE(_53routine_map_48306)){
            _25078 = SEQ_PTR(_53routine_map_48306)->length;
    }
    else {
        _25078 = 1;
    }
    {
        object _tx_48428;
        _tx_48428 = 1;
L5: 
        if (_tx_48428 > _25078){
            goto L6; // [106] 164
        }

        /** coverage.e:123			write_map( routine_map[tx], 'r' & covered_files[tx] )*/
        _2 = (object)SEQ_PTR(_53routine_map_48306);
        _25079 = (object)*(((s1_ptr)_2)->base + _tx_48428);
        _2 = (object)SEQ_PTR(_53covered_files_48300);
        _25080 = (object)*(((s1_ptr)_2)->base + _tx_48428);
        if (IS_SEQUENCE(114) && IS_ATOM(_25080)) {
        }
        else if (IS_ATOM(114) && IS_SEQUENCE(_25080)) {
            Prepend(&_25081, _25080, 114);
        }
        else {
            Concat((object_ptr)&_25081, 114, _25080);
        }
        _25080 = NOVALUE;
        Ref(_25079);
        _53write_map(_25079, _25081);
        _25079 = NOVALUE;
        _25081 = NOVALUE;

        /** coverage.e:124			write_map( line_map[tx],    'l' & covered_files[tx] )*/
        _2 = (object)SEQ_PTR(_53line_map_48305);
        _25082 = (object)*(((s1_ptr)_2)->base + _tx_48428);
        _2 = (object)SEQ_PTR(_53covered_files_48300);
        _25083 = (object)*(((s1_ptr)_2)->base + _tx_48428);
        if (IS_SEQUENCE(108) && IS_ATOM(_25083)) {
        }
        else if (IS_ATOM(108) && IS_SEQUENCE(_25083)) {
            Prepend(&_25084, _25083, 108);
        }
        else {
            Concat((object_ptr)&_25084, 108, _25083);
        }
        _25083 = NOVALUE;
        Ref(_25082);
        _53write_map(_25082, _25084);
        _25082 = NOVALUE;
        _25084 = NOVALUE;

        /** coverage.e:125		end for*/
        _tx_48428 = _tx_48428 + 1;
        goto L5; // [159] 113
L6: 
        ;
    }

    /** coverage.e:127		db_close()*/
    _48db_close();

    /** coverage.e:129		routine_map = {}*/
    RefDS(_21928);
    DeRef(_53routine_map_48306);
    _53routine_map_48306 = _21928;

    /** coverage.e:130		line_map    = {}*/
    RefDS(_21928);
    DeRef(_53line_map_48305);
    _53line_map_48305 = _21928;

    /** coverage.e:131		return 1*/
    return 1;
    ;
}


void _53read_coverage_db()
{
    object _tables_48439 = NOVALUE;
    object _name_48445 = NOVALUE;
    object _fx_48449 = NOVALUE;
    object _the_map_48456 = NOVALUE;
    object _31690 = NOVALUE;
    object _25100 = NOVALUE;
    object _25099 = NOVALUE;
    object _25098 = NOVALUE;
    object _25094 = NOVALUE;
    object _25093 = NOVALUE;
    object _25092 = NOVALUE;
    object _25088 = NOVALUE;
    object _25087 = NOVALUE;
    object _25086 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:135		sequence tables = db_table_list()*/
    _0 = _tables_48439;
    _tables_48439 = _48db_table_list();
    DeRef(_0);

    /** coverage.e:137		for i = 1 to length( tables ) do*/
    if (IS_SEQUENCE(_tables_48439)){
            _25086 = SEQ_PTR(_tables_48439)->length;
    }
    else {
        _25086 = 1;
    }
    {
        object _i_48443;
        _i_48443 = 1;
L1: 
        if (_i_48443 > _25086){
            goto L2; // [13] 157
        }

        /** coverage.e:138			sequence name = tables[i][2..$]*/
        _2 = (object)SEQ_PTR(_tables_48439);
        _25087 = (object)*(((s1_ptr)_2)->base + _i_48443);
        if (IS_SEQUENCE(_25087)){
                _25088 = SEQ_PTR(_25087)->length;
        }
        else {
            _25088 = 1;
        }
        rhs_slice_target = (object_ptr)&_name_48445;
        RHS_Slice(_25087, 2, _25088);
        _25087 = NOVALUE;

        /** coverage.e:139			integer fx = find( name, covered_files )*/
        _fx_48449 = find_from(_name_48445, _53covered_files_48300, 1);

        /** coverage.e:140			if not fx then*/
        if (_fx_48449 != 0)
        goto L3; // [45] 55

        /** coverage.e:141				continue*/
        DeRefDS(_name_48445);
        _name_48445 = NOVALUE;
        DeRef(_the_map_48456);
        _the_map_48456 = NOVALUE;
        goto L4; // [52] 152
L3: 

        /** coverage.e:144			db_select_table( tables[i] )*/
        _2 = (object)SEQ_PTR(_tables_48439);
        _25092 = (object)*(((s1_ptr)_2)->base + _i_48443);
        Ref(_25092);
        _31690 = _48db_select_table(_25092);
        _25092 = NOVALUE;
        DeRef(_31690);
        _31690 = NOVALUE;

        /** coverage.e:146			if tables[i][1] = 'r' then*/
        _2 = (object)SEQ_PTR(_tables_48439);
        _25093 = (object)*(((s1_ptr)_2)->base + _i_48443);
        _2 = (object)SEQ_PTR(_25093);
        _25094 = (object)*(((s1_ptr)_2)->base + 1);
        _25093 = NOVALUE;
        if (binary_op_a(NOTEQ, _25094, 114)){
            _25094 = NOVALUE;
            goto L5; // [77] 92
        }
        _25094 = NOVALUE;

        /** coverage.e:148				the_map = routine_map[fx]*/
        DeRef(_the_map_48456);
        _2 = (object)SEQ_PTR(_53routine_map_48306);
        _the_map_48456 = (object)*(((s1_ptr)_2)->base + _fx_48449);
        Ref(_the_map_48456);
        goto L6; // [89] 101
L5: 

        /** coverage.e:152				the_map = line_map[fx]*/
        DeRef(_the_map_48456);
        _2 = (object)SEQ_PTR(_53line_map_48305);
        _the_map_48456 = (object)*(((s1_ptr)_2)->base + _fx_48449);
        Ref(_the_map_48456);
L6: 

        /** coverage.e:156			for j = 1 to db_table_size() do*/
        RefDS(_48current_table_name_17714);
        _25098 = _48db_table_size(_48current_table_name_17714);
        {
            object _j_48465;
            _j_48465 = 1;
L7: 
            if (binary_op_a(GREATER, _j_48465, _25098)){
                goto L8; // [109] 148
            }

            /** coverage.e:157				map:put( the_map, db_record_key( j ), db_record_data( j ), map:ADD )*/
            Ref(_j_48465);
            RefDS(_48current_table_name_17714);
            _25099 = _48db_record_key(_j_48465, _48current_table_name_17714);
            Ref(_j_48465);
            RefDS(_48current_table_name_17714);
            _25100 = _48db_record_data(_j_48465, _48current_table_name_17714);
            Ref(_the_map_48456);
            _30put(_the_map_48456, _25099, _25100, 2, 0);
            _25099 = NOVALUE;
            _25100 = NOVALUE;

            /** coverage.e:158			end for*/
            _0 = _j_48465;
            if (IS_ATOM_INT(_j_48465)) {
                _j_48465 = _j_48465 + 1;
                if ((object)((uintptr_t)_j_48465 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_48465 = NewDouble((eudouble)_j_48465);
                }
            }
            else {
                _j_48465 = binary_op_a(PLUS, _j_48465, 1);
            }
            DeRef(_0);
            goto L7; // [143] 116
L8: 
            ;
            DeRef(_j_48465);
        }
        DeRef(_name_48445);
        _name_48445 = NOVALUE;
        DeRef(_the_map_48456);
        _the_map_48456 = NOVALUE;

        /** coverage.e:160		end for*/
L4: 
        _i_48443 = _i_48443 + 1;
        goto L1; // [152] 20
L2: 
        ;
    }

    /** coverage.e:161	end procedure*/
    DeRef(_tables_48439);
    DeRef(_25098);
    _25098 = NOVALUE;
    return;
    ;
}


void _53coverage_db(object _name_48474)
{
    object _0, _1, _2;
    

    /** coverage.e:164		coverage_db_name = name*/
    RefDS(_name_48474);
    DeRef(_53coverage_db_name_48302);
    _53coverage_db_name_48302 = _name_48474;

    /** coverage.e:165	end procedure*/
    DeRefDS(_name_48474);
    return;
    ;
}


object _53coverage_on()
{
    object _25101 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:170		return file_coverage[current_file_no]*/
    _2 = (object)SEQ_PTR(_53file_coverage_48301);
    _25101 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    return _25101;
    ;
}


void _53new_covered_path(object _name_48486)
{
    object _new_1__tmp_at14_48490 = NOVALUE;
    object _new_inlined_new_at_14_48489 = NOVALUE;
    object _new_1__tmp_at36_48494 = NOVALUE;
    object _new_inlined_new_at_36_48493 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:176		covered_files = append( covered_files, name )*/
    RefDS(_name_48486);
    Append(&_53covered_files_48300, _53covered_files_48300, _name_48486);

    /** coverage.e:177		routine_map &= map:new()*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at14_48490;
    _new_1__tmp_at14_48490 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at14_48490);
    _0 = _new_inlined_new_at_14_48489;
    _new_inlined_new_at_14_48489 = _31malloc(_new_1__tmp_at14_48490, 1);
    DeRef(_0);
    DeRef(_new_1__tmp_at14_48490);
    _new_1__tmp_at14_48490 = NOVALUE;
    if (IS_SEQUENCE(_53routine_map_48306) && IS_ATOM(_new_inlined_new_at_14_48489)) {
        Ref(_new_inlined_new_at_14_48489);
        Append(&_53routine_map_48306, _53routine_map_48306, _new_inlined_new_at_14_48489);
    }
    else if (IS_ATOM(_53routine_map_48306) && IS_SEQUENCE(_new_inlined_new_at_14_48489)) {
    }
    else {
        Concat((object_ptr)&_53routine_map_48306, _53routine_map_48306, _new_inlined_new_at_14_48489);
    }

    /** coverage.e:178		line_map    &= map:new()*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at36_48494;
    _new_1__tmp_at36_48494 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at36_48494);
    _0 = _new_inlined_new_at_36_48493;
    _new_inlined_new_at_36_48493 = _31malloc(_new_1__tmp_at36_48494, 1);
    DeRef(_0);
    DeRef(_new_1__tmp_at36_48494);
    _new_1__tmp_at36_48494 = NOVALUE;
    if (IS_SEQUENCE(_53line_map_48305) && IS_ATOM(_new_inlined_new_at_36_48493)) {
        Ref(_new_inlined_new_at_36_48493);
        Append(&_53line_map_48305, _53line_map_48305, _new_inlined_new_at_36_48493);
    }
    else if (IS_ATOM(_53line_map_48305) && IS_SEQUENCE(_new_inlined_new_at_36_48493)) {
    }
    else {
        Concat((object_ptr)&_53line_map_48305, _53line_map_48305, _new_inlined_new_at_36_48493);
    }

    /** coverage.e:179	end procedure*/
    DeRefDS(_name_48486);
    return;
    ;
}


void _53add_coverage(object _cover_this_48498)
{
    object _path_48499 = NOVALUE;
    object _files_48508 = NOVALUE;
    object _subpath_48536 = NOVALUE;
    object _25140 = NOVALUE;
    object _25139 = NOVALUE;
    object _25138 = NOVALUE;
    object _25137 = NOVALUE;
    object _25136 = NOVALUE;
    object _25135 = NOVALUE;
    object _25134 = NOVALUE;
    object _25133 = NOVALUE;
    object _25132 = NOVALUE;
    object _25131 = NOVALUE;
    object _25130 = NOVALUE;
    object _25129 = NOVALUE;
    object _25127 = NOVALUE;
    object _25126 = NOVALUE;
    object _25125 = NOVALUE;
    object _25124 = NOVALUE;
    object _25123 = NOVALUE;
    object _25122 = NOVALUE;
    object _25121 = NOVALUE;
    object _25120 = NOVALUE;
    object _25118 = NOVALUE;
    object _25117 = NOVALUE;
    object _25116 = NOVALUE;
    object _25115 = NOVALUE;
    object _25114 = NOVALUE;
    object _25113 = NOVALUE;
    object _25112 = NOVALUE;
    object _25111 = NOVALUE;
    object _25108 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:185		sequence path = canonical_path( cover_this,, CORRECT )*/
    RefDS(_cover_this_48498);
    _0 = _path_48499;
    _path_48499 = _16canonical_path(_cover_this_48498, 0, 2);
    DeRef(_0);

    /** coverage.e:187		if file_type( path ) = FILETYPE_DIRECTORY then*/
    RefDS(_path_48499);
    _25108 = _16file_type(_path_48499);
    if (binary_op_a(NOTEQ, _25108, 2)){
        DeRef(_25108);
        _25108 = NOVALUE;
        goto L1; // [23] 211
    }
    DeRef(_25108);
    _25108 = NOVALUE;

    /** coverage.e:188			sequence files = dir( path  )*/
    RefDS(_path_48499);
    _0 = _files_48508;
    _files_48508 = _16dir(_path_48499);
    DeRef(_0);

    /** coverage.e:190			for i = 1 to length( files ) do*/
    if (IS_SEQUENCE(_files_48508)){
            _25111 = SEQ_PTR(_files_48508)->length;
    }
    else {
        _25111 = 1;
    }
    {
        object _i_48512;
        _i_48512 = 1;
L2: 
        if (_i_48512 > _25111){
            goto L3; // [40] 206
        }

        /** coverage.e:191				if find( 'd', files[i][D_ATTRIBUTES] ) then*/
        _2 = (object)SEQ_PTR(_files_48508);
        _25112 = (object)*(((s1_ptr)_2)->base + _i_48512);
        _2 = (object)SEQ_PTR(_25112);
        _25113 = (object)*(((s1_ptr)_2)->base + 2);
        _25112 = NOVALUE;
        _25114 = find_from(100, _25113, 1);
        _25113 = NOVALUE;
        if (_25114 == 0)
        {
            _25114 = NOVALUE;
            goto L4; // [64] 118
        }
        else{
            _25114 = NOVALUE;
        }

        /** coverage.e:192					if not eu:find(files[i][D_NAME], {".", ".."}) then*/
        _2 = (object)SEQ_PTR(_files_48508);
        _25115 = (object)*(((s1_ptr)_2)->base + _i_48512);
        _2 = (object)SEQ_PTR(_25115);
        _25116 = (object)*(((s1_ptr)_2)->base + 1);
        _25115 = NOVALUE;
        RefDS(_23118);
        RefDS(_23119);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23119;
        ((intptr_t *)_2)[2] = _23118;
        _25117 = MAKE_SEQ(_1);
        _25118 = find_from(_25116, _25117, 1);
        _25116 = NOVALUE;
        DeRefDS(_25117);
        _25117 = NOVALUE;
        if (_25118 != 0)
        goto L5; // [88] 199
        _25118 = NOVALUE;

        /** coverage.e:193						add_coverage( cover_this & SLASH & files[i][D_NAME] )*/
        _2 = (object)SEQ_PTR(_files_48508);
        _25120 = (object)*(((s1_ptr)_2)->base + _i_48512);
        _2 = (object)SEQ_PTR(_25120);
        _25121 = (object)*(((s1_ptr)_2)->base + 1);
        _25120 = NOVALUE;
        {
            object concat_list[3];

            concat_list[0] = _25121;
            concat_list[1] = 47;
            concat_list[2] = _cover_this_48498;
            Concat_N((object_ptr)&_25122, concat_list, 3);
        }
        _25121 = NOVALUE;
        _53add_coverage(_25122);
        _25122 = NOVALUE;
        goto L5; // [115] 199
L4: 

        /** coverage.e:196				elsif regex:has_match( eu_file, files[i][D_NAME] ) then*/
        _2 = (object)SEQ_PTR(_files_48508);
        _25123 = (object)*(((s1_ptr)_2)->base + _i_48512);
        _2 = (object)SEQ_PTR(_25123);
        _25124 = (object)*(((s1_ptr)_2)->base + 1);
        _25123 = NOVALUE;
        Ref(_53eu_file_48480);
        Ref(_25124);
        _25125 = _54has_match(_53eu_file_48480, _25124, 1, 0);
        _25124 = NOVALUE;
        if (_25125 == 0) {
            DeRef(_25125);
            _25125 = NOVALUE;
            goto L6; // [139] 196
        }
        else {
            if (!IS_ATOM_INT(_25125) && DBL_PTR(_25125)->dbl == 0.0){
                DeRef(_25125);
                _25125 = NOVALUE;
                goto L6; // [139] 196
            }
            DeRef(_25125);
            _25125 = NOVALUE;
        }
        DeRef(_25125);
        _25125 = NOVALUE;

        /** coverage.e:198					sequence subpath = path & SLASH & files[i][D_NAME]*/
        _2 = (object)SEQ_PTR(_files_48508);
        _25126 = (object)*(((s1_ptr)_2)->base + _i_48512);
        _2 = (object)SEQ_PTR(_25126);
        _25127 = (object)*(((s1_ptr)_2)->base + 1);
        _25126 = NOVALUE;
        {
            object concat_list[3];

            concat_list[0] = _25127;
            concat_list[1] = 47;
            concat_list[2] = _path_48499;
            Concat_N((object_ptr)&_subpath_48536, concat_list, 3);
        }
        _25127 = NOVALUE;

        /** coverage.e:199					if not find( subpath, covered_files ) and not excluded( subpath ) then*/
        _25129 = find_from(_subpath_48536, _53covered_files_48300, 1);
        _25130 = (_25129 == 0);
        _25129 = NOVALUE;
        if (_25130 == 0) {
            goto L7; // [174] 195
        }
        RefDS(_subpath_48536);
        _25132 = _53excluded(_subpath_48536);
        if (IS_ATOM_INT(_25132)) {
            _25133 = (_25132 == 0);
        }
        else {
            _25133 = unary_op(NOT, _25132);
        }
        DeRef(_25132);
        _25132 = NOVALUE;
        if (_25133 == 0) {
            DeRef(_25133);
            _25133 = NOVALUE;
            goto L7; // [186] 195
        }
        else {
            if (!IS_ATOM_INT(_25133) && DBL_PTR(_25133)->dbl == 0.0){
                DeRef(_25133);
                _25133 = NOVALUE;
                goto L7; // [186] 195
            }
            DeRef(_25133);
            _25133 = NOVALUE;
        }
        DeRef(_25133);
        _25133 = NOVALUE;

        /** coverage.e:200						new_covered_path( subpath )*/
        RefDS(_subpath_48536);
        _53new_covered_path(_subpath_48536);
L7: 
L6: 
        DeRef(_subpath_48536);
        _subpath_48536 = NOVALUE;
L5: 

        /** coverage.e:203			end for*/
        _i_48512 = _i_48512 + 1;
        goto L2; // [201] 47
L3: 
        ;
    }
    DeRef(_files_48508);
    _files_48508 = NOVALUE;
    goto L8; // [208] 262
L1: 

    /** coverage.e:204		elsif regex:has_match( eu_file, path ) and*/
    Ref(_53eu_file_48480);
    RefDS(_path_48499);
    _25134 = _54has_match(_53eu_file_48480, _path_48499, 1, 0);
    if (IS_ATOM_INT(_25134)) {
        if (_25134 == 0) {
            DeRef(_25135);
            _25135 = 0;
            goto L9; // [222] 240
        }
    }
    else {
        if (DBL_PTR(_25134)->dbl == 0.0) {
            DeRef(_25135);
            _25135 = 0;
            goto L9; // [222] 240
        }
    }
    _25136 = find_from(_path_48499, _53covered_files_48300, 1);
    _25137 = (_25136 == 0);
    _25136 = NOVALUE;
    DeRef(_25135);
    _25135 = (_25137 != 0);
L9: 
    if (_25135 == 0) {
        goto LA; // [240] 261
    }
    RefDS(_path_48499);
    _25139 = _53excluded(_path_48499);
    if (IS_ATOM_INT(_25139)) {
        _25140 = (_25139 == 0);
    }
    else {
        _25140 = unary_op(NOT, _25139);
    }
    DeRef(_25139);
    _25139 = NOVALUE;
    if (_25140 == 0) {
        DeRef(_25140);
        _25140 = NOVALUE;
        goto LA; // [252] 261
    }
    else {
        if (!IS_ATOM_INT(_25140) && DBL_PTR(_25140)->dbl == 0.0){
            DeRef(_25140);
            _25140 = NOVALUE;
            goto LA; // [252] 261
        }
        DeRef(_25140);
        _25140 = NOVALUE;
    }
    DeRef(_25140);
    _25140 = NOVALUE;

    /** coverage.e:207			new_covered_path( path )*/
    RefDS(_path_48499);
    _53new_covered_path(_path_48499);
LA: 
L8: 

    /** coverage.e:209	end procedure*/
    DeRefDS(_cover_this_48498);
    DeRef(_path_48499);
    DeRef(_25130);
    _25130 = NOVALUE;
    DeRef(_25134);
    _25134 = NOVALUE;
    DeRef(_25137);
    _25137 = NOVALUE;
    return;
    ;
}


object _53excluded(object _file_48560)
{
    object _25143 = NOVALUE;
    object _25142 = NOVALUE;
    object _25141 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:212		for i = 1 to length( exclusion_patterns ) do*/
    if (IS_SEQUENCE(_53exclusion_patterns_48304)){
            _25141 = SEQ_PTR(_53exclusion_patterns_48304)->length;
    }
    else {
        _25141 = 1;
    }
    {
        object _i_48562;
        _i_48562 = 1;
L1: 
        if (_i_48562 > _25141){
            goto L2; // [10] 49
        }

        /** coverage.e:213			if regex:has_match( exclusion_patterns[i], file ) then*/
        _2 = (object)SEQ_PTR(_53exclusion_patterns_48304);
        _25142 = (object)*(((s1_ptr)_2)->base + _i_48562);
        Ref(_25142);
        RefDS(_file_48560);
        _25143 = _54has_match(_25142, _file_48560, 1, 0);
        _25142 = NOVALUE;
        if (_25143 == 0) {
            DeRef(_25143);
            _25143 = NOVALUE;
            goto L3; // [32] 42
        }
        else {
            if (!IS_ATOM_INT(_25143) && DBL_PTR(_25143)->dbl == 0.0){
                DeRef(_25143);
                _25143 = NOVALUE;
                goto L3; // [32] 42
            }
            DeRef(_25143);
            _25143 = NOVALUE;
        }
        DeRef(_25143);
        _25143 = NOVALUE;

        /** coverage.e:214				return 1*/
        DeRefDS(_file_48560);
        return 1;
L3: 

        /** coverage.e:216		end for*/
        _i_48562 = _i_48562 + 1;
        goto L1; // [44] 17
L2: 
        ;
    }

    /** coverage.e:217		return 0*/
    DeRefDS(_file_48560);
    return 0;
    ;
}


void _53coverage_exclude(object _patterns_48569)
{
    object _ex_48574 = NOVALUE;
    object _fx_48581 = NOVALUE;
    object _25161 = NOVALUE;
    object _25160 = NOVALUE;
    object _25159 = NOVALUE;
    object _25158 = NOVALUE;
    object _25152 = NOVALUE;
    object _25151 = NOVALUE;
    object _25149 = NOVALUE;
    object _25147 = NOVALUE;
    object _25145 = NOVALUE;
    object _25144 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:221		for i = 1 to length( patterns ) do*/
    if (IS_SEQUENCE(_patterns_48569)){
            _25144 = SEQ_PTR(_patterns_48569)->length;
    }
    else {
        _25144 = 1;
    }
    {
        object _i_48571;
        _i_48571 = 1;
L1: 
        if (_i_48571 > _25144){
            goto L2; // [8] 161
        }

        /** coverage.e:222			regex ex = regex:new( patterns[i] )*/
        _2 = (object)SEQ_PTR(_patterns_48569);
        _25145 = (object)*(((s1_ptr)_2)->base + _i_48571);
        Ref(_25145);
        _0 = _ex_48574;
        _ex_48574 = _54new(_25145, 0);
        DeRef(_0);
        _25145 = NOVALUE;

        /** coverage.e:223			if regex( ex ) then*/
        Ref(_ex_48574);
        _25147 = _54regex(_ex_48574);
        if (_25147 == 0) {
            DeRef(_25147);
            _25147 = NOVALUE;
            goto L3; // [32] 127
        }
        else {
            if (!IS_ATOM_INT(_25147) && DBL_PTR(_25147)->dbl == 0.0){
                DeRef(_25147);
                _25147 = NOVALUE;
                goto L3; // [32] 127
            }
            DeRef(_25147);
            _25147 = NOVALUE;
        }
        DeRef(_25147);
        _25147 = NOVALUE;

        /** coverage.e:224				exclusion_patterns = append( exclusion_patterns, ex )*/
        Ref(_ex_48574);
        Append(&_53exclusion_patterns_48304, _53exclusion_patterns_48304, _ex_48574);

        /** coverage.e:225				integer fx = 1*/
        _fx_48581 = 1;

        /** coverage.e:226				while fx <= length( covered_files ) do*/
L4: 
        if (IS_SEQUENCE(_53covered_files_48300)){
                _25149 = SEQ_PTR(_53covered_files_48300)->length;
        }
        else {
            _25149 = 1;
        }
        if (_fx_48581 > _25149)
        goto L5; // [58] 122

        /** coverage.e:227					if regex:has_match( ex, covered_files[fx] ) then*/
        _2 = (object)SEQ_PTR(_53covered_files_48300);
        _25151 = (object)*(((s1_ptr)_2)->base + _fx_48581);
        Ref(_ex_48574);
        Ref(_25151);
        _25152 = _54has_match(_ex_48574, _25151, 1, 0);
        _25151 = NOVALUE;
        if (_25152 == 0) {
            DeRef(_25152);
            _25152 = NOVALUE;
            goto L6; // [77] 110
        }
        else {
            if (!IS_ATOM_INT(_25152) && DBL_PTR(_25152)->dbl == 0.0){
                DeRef(_25152);
                _25152 = NOVALUE;
                goto L6; // [77] 110
            }
            DeRef(_25152);
            _25152 = NOVALUE;
        }
        DeRef(_25152);
        _25152 = NOVALUE;

        /** coverage.e:228						covered_files = remove( covered_files, fx )*/
        {
            s1_ptr assign_space = SEQ_PTR(_53covered_files_48300);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48581)) ? _fx_48581 : (object)(DBL_PTR(_fx_48581)->dbl);
            int stop = (IS_ATOM_INT(_fx_48581)) ? _fx_48581 : (object)(DBL_PTR(_fx_48581)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_53covered_files_48300), start, &_53covered_files_48300 );
                }
                else Tail(SEQ_PTR(_53covered_files_48300), stop+1, &_53covered_files_48300);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_53covered_files_48300), start, &_53covered_files_48300);
            }
            else {
                assign_slice_seq = &assign_space;
                _53covered_files_48300 = Remove_elements(start, stop, (SEQ_PTR(_53covered_files_48300)->ref == 1));
            }
        }

        /** coverage.e:229						routine_map   = remove( routine_map, fx )*/
        {
            s1_ptr assign_space = SEQ_PTR(_53routine_map_48306);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48581)) ? _fx_48581 : (object)(DBL_PTR(_fx_48581)->dbl);
            int stop = (IS_ATOM_INT(_fx_48581)) ? _fx_48581 : (object)(DBL_PTR(_fx_48581)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_53routine_map_48306), start, &_53routine_map_48306 );
                }
                else Tail(SEQ_PTR(_53routine_map_48306), stop+1, &_53routine_map_48306);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_53routine_map_48306), start, &_53routine_map_48306);
            }
            else {
                assign_slice_seq = &assign_space;
                _53routine_map_48306 = Remove_elements(start, stop, (SEQ_PTR(_53routine_map_48306)->ref == 1));
            }
        }

        /** coverage.e:230						line_map      = remove( line_map, fx )*/
        {
            s1_ptr assign_space = SEQ_PTR(_53line_map_48305);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_48581)) ? _fx_48581 : (object)(DBL_PTR(_fx_48581)->dbl);
            int stop = (IS_ATOM_INT(_fx_48581)) ? _fx_48581 : (object)(DBL_PTR(_fx_48581)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_53line_map_48305), start, &_53line_map_48305 );
                }
                else Tail(SEQ_PTR(_53line_map_48305), stop+1, &_53line_map_48305);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_53line_map_48305), start, &_53line_map_48305);
            }
            else {
                assign_slice_seq = &assign_space;
                _53line_map_48305 = Remove_elements(start, stop, (SEQ_PTR(_53line_map_48305)->ref == 1));
            }
        }
        goto L4; // [107] 53
L6: 

        /** coverage.e:232						fx += 1*/
        _fx_48581 = _fx_48581 + 1;

        /** coverage.e:234				end while*/
        goto L4; // [119] 53
L5: 
        goto L7; // [124] 152
L3: 

        /** coverage.e:236				printf( 2,"%s\n", { GetMsgText( 339, 1, {patterns[i]}) } )*/
        _2 = (object)SEQ_PTR(_patterns_48569);
        _25158 = (object)*(((s1_ptr)_2)->base + _i_48571);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_25158);
        ((intptr_t*)_2)[1] = _25158;
        _25159 = MAKE_SEQ(_1);
        _25158 = NOVALUE;
        _25160 = _44GetMsgText(339, 1, _25159);
        _25159 = NOVALUE;
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _25160;
        _25161 = MAKE_SEQ(_1);
        _25160 = NOVALUE;
        EPrintf(2, _25157, _25161);
        DeRefDS(_25161);
        _25161 = NOVALUE;
L7: 
        DeRef(_ex_48574);
        _ex_48574 = NOVALUE;

        /** coverage.e:238		end for*/
        _i_48571 = _i_48571 + 1;
        goto L1; // [156] 15
L2: 
        ;
    }

    /** coverage.e:240	end procedure*/
    DeRefDS(_patterns_48569);
    return;
    ;
}


void _53new_coverage_db()
{
    object _0, _1, _2;
    

    /** coverage.e:243		coverage_erase = 1*/
    _53coverage_erase_48303 = 1;

    /** coverage.e:244	end procedure*/
    return;
    ;
}


void _53include_line(object _line_number_48604)
{
    object _25162 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:247		if coverage_on() then*/
    _25162 = _53coverage_on();
    if (_25162 == 0) {
        DeRef(_25162);
        _25162 = NOVALUE;
        goto L1; // [8] 34
    }
    else {
        if (!IS_ATOM_INT(_25162) && DBL_PTR(_25162)->dbl == 0.0){
            DeRef(_25162);
            _25162 = NOVALUE;
            goto L1; // [8] 34
        }
        DeRef(_25162);
        _25162 = NOVALUE;
    }
    DeRef(_25162);
    _25162 = NOVALUE;

    /** coverage.e:248			emit_op( COVERAGE_LINE )*/
    _49emit_op(210);

    /** coverage.e:249			emit_addr( gline_number )*/
    _49emit_addr(_39gline_number_16820);

    /** coverage.e:251			included_lines &= line_number*/
    Append(&_53included_lines_48307, _53included_lines_48307, _line_number_48604);
L1: 

    /** coverage.e:253	end procedure*/
    return;
    ;
}


void _53include_routine()
{
    object _file_no_48620 = NOVALUE;
    object _25169 = NOVALUE;
    object _25168 = NOVALUE;
    object _25167 = NOVALUE;
    object _25165 = NOVALUE;
    object _25164 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:256		if coverage_on() then*/
    _25164 = _53coverage_on();
    if (_25164 == 0) {
        DeRef(_25164);
        _25164 = NOVALUE;
        goto L1; // [6] 69
    }
    else {
        if (!IS_ATOM_INT(_25164) && DBL_PTR(_25164)->dbl == 0.0){
            DeRef(_25164);
            _25164 = NOVALUE;
            goto L1; // [6] 69
        }
        DeRef(_25164);
        _25164 = NOVALUE;
    }
    DeRef(_25164);
    _25164 = NOVALUE;

    /** coverage.e:257			emit_op( COVERAGE_ROUTINE )*/
    _49emit_op(211);

    /** coverage.e:258			emit_addr( CurrentSub )*/
    _49emit_addr(_39CurrentSub_16823);

    /** coverage.e:261			integer file_no = SymTab[CurrentSub][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _25165 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_25165);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _file_no_48620 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _file_no_48620 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_file_no_48620)){
        _file_no_48620 = (object)DBL_PTR(_file_no_48620)->dbl;
    }
    _25165 = NOVALUE;

    /** coverage.e:262			map:put( routine_map[file_coverage[file_no]], sym_name( CurrentSub ), 0, map:ADD )*/
    _2 = (object)SEQ_PTR(_53file_coverage_48301);
    _25167 = (object)*(((s1_ptr)_2)->base + _file_no_48620);
    _2 = (object)SEQ_PTR(_53routine_map_48306);
    _25168 = (object)*(((s1_ptr)_2)->base + _25167);
    _25169 = _56sym_name(_39CurrentSub_16823);
    Ref(_25168);
    _30put(_25168, _25169, 0, 2, 0);
    _25168 = NOVALUE;
    _25169 = NOVALUE;
L1: 

    /** coverage.e:264	end procedure*/
    _25167 = NOVALUE;
    return;
    ;
}


void _53process_lines()
{
    object _sline_48648 = NOVALUE;
    object _file_48652 = NOVALUE;
    object _line_48662 = NOVALUE;
    object _25187 = NOVALUE;
    object _25185 = NOVALUE;
    object _25184 = NOVALUE;
    object _25183 = NOVALUE;
    object _25182 = NOVALUE;
    object _25181 = NOVALUE;
    object _25179 = NOVALUE;
    object _25177 = NOVALUE;
    object _25176 = NOVALUE;
    object _25174 = NOVALUE;
    object _25173 = NOVALUE;
    object _25172 = NOVALUE;
    object _25170 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:267		if not length( included_lines ) then*/
    if (IS_SEQUENCE(_53included_lines_48307)){
            _25170 = SEQ_PTR(_53included_lines_48307)->length;
    }
    else {
        _25170 = 1;
    }
    if (_25170 != 0)
    goto L1; // [8] 17
    _25170 = NOVALUE;

    /** coverage.e:268			return*/
    return;
L1: 

    /** coverage.e:270		if atom(slist[$]) then*/
    if (IS_SEQUENCE(_39slist_16905)){
            _25172 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _25172 = 1;
    }
    _2 = (object)SEQ_PTR(_39slist_16905);
    _25173 = (object)*(((s1_ptr)_2)->base + _25172);
    _25174 = IS_ATOM(_25173);
    _25173 = NOVALUE;
    if (_25174 == 0)
    {
        _25174 = NOVALUE;
        goto L2; // [31] 45
    }
    else{
        _25174 = NOVALUE;
    }

    /** coverage.e:271			slist = s_expand( slist )*/
    RefDS(_39slist_16905);
    _0 = _63s_expand(_39slist_16905);
    DeRefDS(_39slist_16905);
    _39slist_16905 = _0;
L2: 

    /** coverage.e:273		for i = 1 to length( included_lines ) do*/
    if (IS_SEQUENCE(_53included_lines_48307)){
            _25176 = SEQ_PTR(_53included_lines_48307)->length;
    }
    else {
        _25176 = 1;
    }
    {
        object _i_48646;
        _i_48646 = 1;
L3: 
        if (_i_48646 > _25176){
            goto L4; // [52] 157
        }

        /** coverage.e:274			sequence sline = slist[included_lines[i]]*/
        _2 = (object)SEQ_PTR(_53included_lines_48307);
        _25177 = (object)*(((s1_ptr)_2)->base + _i_48646);
        DeRef(_sline_48648);
        _2 = (object)SEQ_PTR(_39slist_16905);
        _sline_48648 = (object)*(((s1_ptr)_2)->base + _25177);
        Ref(_sline_48648);

        /** coverage.e:275			integer file = file_coverage[sline[LOCAL_FILE_NO]]*/
        _2 = (object)SEQ_PTR(_sline_48648);
        _25179 = (object)*(((s1_ptr)_2)->base + 3);
        _2 = (object)SEQ_PTR(_53file_coverage_48301);
        if (!IS_ATOM_INT(_25179)){
            _file_48652 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_25179)->dbl));
        }
        else{
            _file_48652 = (object)*(((s1_ptr)_2)->base + _25179);
        }

        /** coverage.e:276			if file and file <= length( line_map ) and line_map[file] then*/
        if (_file_48652 == 0) {
            _25181 = 0;
            goto L5; // [91] 108
        }
        if (IS_SEQUENCE(_53line_map_48305)){
                _25182 = SEQ_PTR(_53line_map_48305)->length;
        }
        else {
            _25182 = 1;
        }
        _25183 = (_file_48652 <= _25182);
        _25182 = NOVALUE;
        _25181 = (_25183 != 0);
L5: 
        if (_25181 == 0) {
            goto L6; // [108] 146
        }
        _2 = (object)SEQ_PTR(_53line_map_48305);
        _25185 = (object)*(((s1_ptr)_2)->base + _file_48652);
        if (_25185 == 0) {
            _25185 = NOVALUE;
            goto L6; // [119] 146
        }
        else {
            if (!IS_ATOM_INT(_25185) && DBL_PTR(_25185)->dbl == 0.0){
                _25185 = NOVALUE;
                goto L6; // [119] 146
            }
            _25185 = NOVALUE;
        }
        _25185 = NOVALUE;

        /** coverage.e:277				integer line = sline[LINE]*/
        _2 = (object)SEQ_PTR(_sline_48648);
        _line_48662 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_line_48662))
        _line_48662 = (object)DBL_PTR(_line_48662)->dbl;

        /** coverage.e:278				map:put( line_map[file], line, 0, map:ADD )*/
        _2 = (object)SEQ_PTR(_53line_map_48305);
        _25187 = (object)*(((s1_ptr)_2)->base + _file_48652);
        Ref(_25187);
        _30put(_25187, _line_48662, 0, 2, 0);
        _25187 = NOVALUE;
L6: 
        DeRef(_sline_48648);
        _sline_48648 = NOVALUE;

        /** coverage.e:280		end for*/
        _i_48646 = _i_48646 + 1;
        goto L3; // [152] 59
L4: 
        ;
    }

    /** coverage.e:281	end procedure*/
    DeRef(_25183);
    _25183 = NOVALUE;
    _25177 = NOVALUE;
    _25179 = NOVALUE;
    return;
    ;
}


object _53cover_line(object _gline_number_48668)
{
    object _sline_48678 = NOVALUE;
    object _file_48681 = NOVALUE;
    object _line_48686 = NOVALUE;
    object _25196 = NOVALUE;
    object _25193 = NOVALUE;
    object _25190 = NOVALUE;
    object _25189 = NOVALUE;
    object _25188 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_gline_number_48668)) {
        _1 = (object)(DBL_PTR(_gline_number_48668)->dbl);
        DeRefDS(_gline_number_48668);
        _gline_number_48668 = _1;
    }

    /** coverage.e:284		if atom(slist[$]) then*/
    if (IS_SEQUENCE(_39slist_16905)){
            _25188 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _25188 = 1;
    }
    _2 = (object)SEQ_PTR(_39slist_16905);
    _25189 = (object)*(((s1_ptr)_2)->base + _25188);
    _25190 = IS_ATOM(_25189);
    _25189 = NOVALUE;
    if (_25190 == 0)
    {
        _25190 = NOVALUE;
        goto L1; // [17] 31
    }
    else{
        _25190 = NOVALUE;
    }

    /** coverage.e:285			slist = s_expand(slist)*/
    RefDS(_39slist_16905);
    _0 = _63s_expand(_39slist_16905);
    DeRefDS(_39slist_16905);
    _39slist_16905 = _0;
L1: 

    /** coverage.e:287		sequence sline = slist[gline_number]*/
    DeRef(_sline_48678);
    _2 = (object)SEQ_PTR(_39slist_16905);
    _sline_48678 = (object)*(((s1_ptr)_2)->base + _gline_number_48668);
    Ref(_sline_48678);

    /** coverage.e:288		integer file = file_coverage[sline[LOCAL_FILE_NO]]*/
    _2 = (object)SEQ_PTR(_sline_48678);
    _25193 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(_53file_coverage_48301);
    if (!IS_ATOM_INT(_25193)){
        _file_48681 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_25193)->dbl));
    }
    else{
        _file_48681 = (object)*(((s1_ptr)_2)->base + _25193);
    }

    /** coverage.e:289		if file then*/
    if (_file_48681 == 0)
    {
        goto L2; // [57] 84
    }
    else{
    }

    /** coverage.e:290			integer line = sline[LINE]*/
    _2 = (object)SEQ_PTR(_sline_48678);
    _line_48686 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_line_48686))
    _line_48686 = (object)DBL_PTR(_line_48686)->dbl;

    /** coverage.e:291			map:put( line_map[file], line, 1, map:ADD )*/
    _2 = (object)SEQ_PTR(_53line_map_48305);
    _25196 = (object)*(((s1_ptr)_2)->base + _file_48681);
    Ref(_25196);
    _30put(_25196, _line_48686, 1, 2, 0);
    _25196 = NOVALUE;
L2: 

    /** coverage.e:293		return 0*/
    DeRef(_sline_48678);
    _25193 = NOVALUE;
    return 0;
    ;
}


object _53cover_routine(object _sub_48693)
{
    object _file_no_48694 = NOVALUE;
    object _25201 = NOVALUE;
    object _25200 = NOVALUE;
    object _25199 = NOVALUE;
    object _25197 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sub_48693)) {
        _1 = (object)(DBL_PTR(_sub_48693)->dbl);
        DeRefDS(_sub_48693);
        _sub_48693 = _1;
    }

    /** coverage.e:297		integer file_no = SymTab[sub][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _25197 = (object)*(((s1_ptr)_2)->base + _sub_48693);
    _2 = (object)SEQ_PTR(_25197);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _file_no_48694 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _file_no_48694 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_file_no_48694)){
        _file_no_48694 = (object)DBL_PTR(_file_no_48694)->dbl;
    }
    _25197 = NOVALUE;

    /** coverage.e:298		map:put( routine_map[file_coverage[file_no]], sym_name( sub ), 1, map:ADD )*/
    _2 = (object)SEQ_PTR(_53file_coverage_48301);
    _25199 = (object)*(((s1_ptr)_2)->base + _file_no_48694);
    _2 = (object)SEQ_PTR(_53routine_map_48306);
    _25200 = (object)*(((s1_ptr)_2)->base + _25199);
    _25201 = _56sym_name(_sub_48693);
    Ref(_25200);
    _30put(_25200, _25201, 1, 2, 0);
    _25200 = NOVALUE;
    _25201 = NOVALUE;

    /** coverage.e:299		return 0*/
    _25199 = NOVALUE;
    return 0;
    ;
}


object _53has_coverage()
{
    object _25202 = NOVALUE;
    object _0, _1, _2;
    

    /** coverage.e:303		return length( covered_files )*/
    if (IS_SEQUENCE(_53covered_files_48300)){
            _25202 = SEQ_PTR(_53covered_files_48300)->length;
    }
    else {
        _25202 = 1;
    }
    return _25202;
    ;
}



// 0x7341FAB3
