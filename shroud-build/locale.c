// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _45get_text(object _MsgNum_20428, object _LocalQuals_20429, object _DBBase_20430)
{
    object _db_res_20432 = NOVALUE;
    object _lMsgText_20433 = NOVALUE;
    object _dbname_20434 = NOVALUE;
    object _11310 = NOVALUE;
    object _11308 = NOVALUE;
    object _11306 = NOVALUE;
    object _11305 = NOVALUE;
    object _11304 = NOVALUE;
    object _11302 = NOVALUE;
    object _11301 = NOVALUE;
    object _11300 = NOVALUE;
    object _11294 = NOVALUE;
    object _11293 = NOVALUE;
    object _11292 = NOVALUE;
    object _11285 = NOVALUE;
    object _11282 = NOVALUE;
    object _11280 = NOVALUE;
    object _11278 = NOVALUE;
    object _11277 = NOVALUE;
    object _11276 = NOVALUE;
    object _11275 = NOVALUE;
    object _0, _1, _2;
    

    /** locale.e:798		db_res = -1*/
    _db_res_20432 = -1;

    /** locale.e:799		lMsgText = 0*/
    DeRef(_lMsgText_20433);
    _lMsgText_20433 = 0;

    /** locale.e:801		if string(LocalQuals) and length(LocalQuals) > 0 then*/
    RefDS(_LocalQuals_20429);
    _11275 = _9string(_LocalQuals_20429);
    if (IS_ATOM_INT(_11275)) {
        if (_11275 == 0) {
            goto L1; // [23] 45
        }
    }
    else {
        if (DBL_PTR(_11275)->dbl == 0.0) {
            goto L1; // [23] 45
        }
    }
    if (IS_SEQUENCE(_LocalQuals_20429)){
            _11277 = SEQ_PTR(_LocalQuals_20429)->length;
    }
    else {
        _11277 = 1;
    }
    _11278 = (_11277 > 0);
    _11277 = NOVALUE;
    if (_11278 == 0)
    {
        DeRef(_11278);
        _11278 = NOVALUE;
        goto L1; // [35] 45
    }
    else{
        DeRef(_11278);
        _11278 = NOVALUE;
    }

    /** locale.e:802			LocalQuals = {LocalQuals}*/
    _0 = _LocalQuals_20429;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_LocalQuals_20429);
    ((intptr_t*)_2)[1] = _LocalQuals_20429;
    _LocalQuals_20429 = MAKE_SEQ(_1);
    DeRefDS(_0);
L1: 

    /** locale.e:804		for i = 1 to length(LocalQuals) do*/
    if (IS_SEQUENCE(_LocalQuals_20429)){
            _11280 = SEQ_PTR(_LocalQuals_20429)->length;
    }
    else {
        _11280 = 1;
    }
    {
        object _i_20443;
        _i_20443 = 1;
L2: 
        if (_i_20443 > _11280){
            goto L3; // [50] 136
        }

        /** locale.e:805			dbname = DBBase & "_" & LocalQuals[i] & ".edb"*/
        _2 = (object)SEQ_PTR(_LocalQuals_20429);
        _11282 = (object)*(((s1_ptr)_2)->base + _i_20443);
        {
            object concat_list[4];

            concat_list[0] = _11283;
            concat_list[1] = _11282;
            concat_list[2] = _11281;
            concat_list[3] = _DBBase_20430;
            Concat_N((object_ptr)&_dbname_20434, concat_list, 4);
        }
        _11282 = NOVALUE;

        /** locale.e:806			db_res = eds:db_select( filesys:locate_file( dbname ), eds:DB_LOCK_READ_ONLY)*/
        RefDS(_dbname_20434);
        RefDS(_5);
        RefDS(_5);
        _11285 = _16locate_file(_dbname_20434, _5, _5);
        _db_res_20432 = _48db_select(_11285, 3);
        _11285 = NOVALUE;
        if (!IS_ATOM_INT(_db_res_20432)) {
            _1 = (object)(DBL_PTR(_db_res_20432)->dbl);
            DeRefDS(_db_res_20432);
            _db_res_20432 = _1;
        }

        /** locale.e:807			if db_res = eds:DB_OK then*/
        if (_db_res_20432 != 0)
        goto L4; // [87] 129

        /** locale.e:808				db_res = eds:db_select_table("1")*/
        RefDS(_11288);
        _db_res_20432 = _48db_select_table(_11288);
        if (!IS_ATOM_INT(_db_res_20432)) {
            _1 = (object)(DBL_PTR(_db_res_20432)->dbl);
            DeRefDS(_db_res_20432);
            _db_res_20432 = _1;
        }

        /** locale.e:809				if db_res = eds:DB_OK then*/
        if (_db_res_20432 != 0)
        goto L5; // [101] 128

        /** locale.e:810					lMsgText = eds:db_fetch_record(MsgNum)*/
        RefDS(_48current_table_name_17714);
        _0 = _lMsgText_20433;
        _lMsgText_20433 = _48db_fetch_record(_MsgNum_20428, _48current_table_name_17714);
        DeRef(_0);

        /** locale.e:811					if sequence(lMsgText) then*/
        _11292 = IS_SEQUENCE(_lMsgText_20433);
        if (_11292 == 0)
        {
            _11292 = NOVALUE;
            goto L6; // [119] 127
        }
        else{
            _11292 = NOVALUE;
        }

        /** locale.e:812						exit*/
        goto L3; // [124] 136
L6: 
L5: 
L4: 

        /** locale.e:816		end for*/
        _i_20443 = _i_20443 + 1;
        goto L2; // [131] 57
L3: 
        ;
    }

    /** locale.e:819		if atom(lMsgText) then*/
    _11293 = IS_ATOM(_lMsgText_20433);
    if (_11293 == 0)
    {
        _11293 = NOVALUE;
        goto L7; // [141] 281
    }
    else{
        _11293 = NOVALUE;
    }

    /** locale.e:820			dbname = filesys:locate_file( DBBase & ".edb" )*/
    Concat((object_ptr)&_11294, _DBBase_20430, _11283);
    RefDS(_5);
    RefDS(_5);
    _0 = _dbname_20434;
    _dbname_20434 = _16locate_file(_11294, _5, _5);
    DeRef(_0);
    _11294 = NOVALUE;

    /** locale.e:821			db_res = eds:db_select(	dbname, DB_LOCK_READ_ONLY)*/
    RefDS(_dbname_20434);
    _db_res_20432 = _48db_select(_dbname_20434, 3);
    if (!IS_ATOM_INT(_db_res_20432)) {
        _1 = (object)(DBL_PTR(_db_res_20432)->dbl);
        DeRefDS(_db_res_20432);
        _db_res_20432 = _1;
    }

    /** locale.e:822			if db_res = eds:DB_OK then*/
    if (_db_res_20432 != 0)
    goto L8; // [171] 280

    /** locale.e:823				db_res = eds:db_select_table("1")*/
    RefDS(_11288);
    _db_res_20432 = _48db_select_table(_11288);
    if (!IS_ATOM_INT(_db_res_20432)) {
        _1 = (object)(DBL_PTR(_db_res_20432)->dbl);
        DeRefDS(_db_res_20432);
        _db_res_20432 = _1;
    }

    /** locale.e:824				if db_res = eds:DB_OK then*/
    if (_db_res_20432 != 0)
    goto L9; // [185] 279

    /** locale.e:825					for i = 1 to length(LocalQuals) do*/
    if (IS_SEQUENCE(_LocalQuals_20429)){
            _11300 = SEQ_PTR(_LocalQuals_20429)->length;
    }
    else {
        _11300 = 1;
    }
    {
        object _i_20472;
        _i_20472 = 1;
LA: 
        if (_i_20472 > _11300){
            goto LB; // [194] 238
        }

        /** locale.e:826						lMsgText = eds:db_fetch_record({LocalQuals[i],MsgNum})*/
        _2 = (object)SEQ_PTR(_LocalQuals_20429);
        _11301 = (object)*(((s1_ptr)_2)->base + _i_20472);
        Ref(_11301);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _11301;
        ((intptr_t *)_2)[2] = _MsgNum_20428;
        _11302 = MAKE_SEQ(_1);
        _11301 = NOVALUE;
        RefDS(_48current_table_name_17714);
        _0 = _lMsgText_20433;
        _lMsgText_20433 = _48db_fetch_record(_11302, _48current_table_name_17714);
        DeRef(_0);
        _11302 = NOVALUE;

        /** locale.e:827						if sequence(lMsgText) then*/
        _11304 = IS_SEQUENCE(_lMsgText_20433);
        if (_11304 == 0)
        {
            _11304 = NOVALUE;
            goto LC; // [223] 231
        }
        else{
            _11304 = NOVALUE;
        }

        /** locale.e:828							exit*/
        goto LB; // [228] 238
LC: 

        /** locale.e:830					end for*/
        _i_20472 = _i_20472 + 1;
        goto LA; // [233] 201
LB: 
        ;
    }

    /** locale.e:831					if atom(lMsgText) then*/
    _11305 = IS_ATOM(_lMsgText_20433);
    if (_11305 == 0)
    {
        _11305 = NOVALUE;
        goto LD; // [243] 260
    }
    else{
        _11305 = NOVALUE;
    }

    /** locale.e:832						lMsgText = eds:db_fetch_record({"",MsgNum})*/
    RefDS(_5);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5;
    ((intptr_t *)_2)[2] = _MsgNum_20428;
    _11306 = MAKE_SEQ(_1);
    RefDS(_48current_table_name_17714);
    _0 = _lMsgText_20433;
    _lMsgText_20433 = _48db_fetch_record(_11306, _48current_table_name_17714);
    DeRef(_0);
    _11306 = NOVALUE;
LD: 

    /** locale.e:834					if atom(lMsgText) then*/
    _11308 = IS_ATOM(_lMsgText_20433);
    if (_11308 == 0)
    {
        _11308 = NOVALUE;
        goto LE; // [265] 278
    }
    else{
        _11308 = NOVALUE;
    }

    /** locale.e:835						lMsgText = eds:db_fetch_record(MsgNum)*/
    RefDS(_48current_table_name_17714);
    _0 = _lMsgText_20433;
    _lMsgText_20433 = _48db_fetch_record(_MsgNum_20428, _48current_table_name_17714);
    DeRef(_0);
LE: 
L9: 
L8: 
L7: 

    /** locale.e:840		if atom(lMsgText) then*/
    _11310 = IS_ATOM(_lMsgText_20433);
    if (_11310 == 0)
    {
        _11310 = NOVALUE;
        goto LF; // [286] 298
    }
    else{
        _11310 = NOVALUE;
    }

    /** locale.e:841			return 0*/
    DeRefDS(_LocalQuals_20429);
    DeRefDS(_DBBase_20430);
    DeRef(_lMsgText_20433);
    DeRef(_dbname_20434);
    DeRef(_11275);
    _11275 = NOVALUE;
    return 0;
    goto L10; // [295] 305
LF: 

    /** locale.e:843			return lMsgText*/
    DeRefDS(_LocalQuals_20429);
    DeRefDS(_DBBase_20430);
    DeRef(_dbname_20434);
    DeRef(_11275);
    _11275 = NOVALUE;
    return _lMsgText_20433;
L10: 
    ;
}



// 0x287DCD38
