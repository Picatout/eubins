// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _43get_text(object _MsgNum_20049, object _LocalQuals_20050, object _DBBase_20051)
{
    object _db_res_20053 = NOVALUE;
    object _lMsgText_20054 = NOVALUE;
    object _dbname_20055 = NOVALUE;
    object _11074 = NOVALUE; // 20108 11074
// skipping _11073  name type: 0
    object _11072 = NOVALUE; // 20105 11072
// skipping _11071  name type: 0
    object _11070 = NOVALUE; // 20102 11070
    object _11069 = NOVALUE; // 20101 11069
    object _11068 = NOVALUE; // 20099 11068
// skipping _11067  name type: 0
    object _11066 = NOVALUE; // 20096 11066
    object _11065 = NOVALUE; // 20095 11065
    object _11064 = NOVALUE; // 20094 11064
// skipping _11063  name type: 0
// skipping _11062  name type: 0
// skipping _11061  name type: 0
// skipping _11060  name type: 0
// skipping _11059  name type: 0
    object _11058 = NOVALUE; // 20083 11058
    object _11057 = NOVALUE; // 20082 11057
    object _11056 = NOVALUE; // 20080 11056
// skipping _11055  name type: 0
// skipping _11054  name type: 0
// skipping _11053  name type: 0
// skipping _11051  name type: 0
// skipping _11050  name type: 0
    object _11049 = NOVALUE; // 20070 11049
// skipping _11048  name type: 0
    object _11046 = NOVALUE; // 20067 11046
    object _11044 = NOVALUE; // 20065 11044
// skipping _11043  name type: 0
    object _11042 = NOVALUE; // 20061 11042
    object _11041 = NOVALUE; // 20060 11041
    object _11040 = NOVALUE; // 20059 11040
    object _11039 = NOVALUE; // 20058 11039
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_text pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_text pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg get_text pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg get_text pc: 7 op: STARTLINE (58)

    /** locale.e:798		db_res = -1*/
    // SubProg get_text pc: 9 op: ASSIGN_I (113)
    _db_res_20053 = -1;
    // SubProg get_text pc: 12 op: STARTLINE (58)

    /** locale.e:799		lMsgText = 0*/
    // SubProg get_text pc: 14 op: ASSIGN (18)
    DeRef(_lMsgText_20054);
    _lMsgText_20054 = 0;
    // SubProg get_text pc: 17 op: STARTLINE (58)

    /** locale.e:801		if string(LocalQuals) and length(LocalQuals) > 0 then*/
    // SubProg get_text pc: 19 op: PROC (27)
    RefDS(_LocalQuals_20050);
    _11039 = _13string(_LocalQuals_20050);
    // SubProg get_text pc: 23 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_11039)) {
        if (_11039 == 0) {
            goto L1; // [23] 45
        }
    }
    else {
        if (DBL_PTR(_11039)->dbl == 0.0) {
            goto L1; // [23] 45
        }
    }
    // SubProg get_text pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_LocalQuals_20050)){
            _11041 = SEQ_PTR(_LocalQuals_20050)->length;
    }
    else {
        _11041 = 1;
    }
    // SubProg get_text pc: 30 op: GREATER (6)
    _11042 = (_11041 > 0);
    _11041 = NOVALUE;
    // SubProg get_text pc: 34 op: NOP1 (159)
    // SubProg get_text pc: 35 op: IF (20)
    if (_11042 == 0)
    {
        DeRef(_11042);
        _11042 = NOVALUE;
        goto L1; // [35] 45
    }
    else{
        DeRef(_11042);
        _11042 = NOVALUE;
    }
    // SubProg get_text pc: 38 op: STARTLINE (58)

    /** locale.e:802			LocalQuals = {LocalQuals}*/
    // SubProg get_text pc: 40 op: RIGHT_BRACE_N (31)
    _0 = _LocalQuals_20050;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_LocalQuals_20050);
    ((intptr_t*)_2)[1] = _LocalQuals_20050;
    _LocalQuals_20050 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg get_text pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 20047 op: 159
    // SubProg get_text pc: 45 op: STARTLINE (58)

    /** locale.e:804		for i = 1 to length(LocalQuals) do*/
    // SubProg get_text pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_LocalQuals_20050)){
            _11044 = SEQ_PTR(_LocalQuals_20050)->length;
    }
    else {
        _11044 = 1;
    }
    // SubProg get_text pc: 50 op: FOR_I (125)
    {
        object _i_20064;
        _i_20064 = 1;
L2: // addr: 57 pc: 50 sub: 20047 op: 125
        if (_i_20064 > _11044){
            goto L3; // [50] 136
        }
        // SubProg get_text pc: 57 op: STARTLINE (58)

        /** locale.e:805			dbname = DBBase & "_" & LocalQuals[i] & ".edb"*/
        // SubProg get_text pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_LocalQuals_20050);
        _11046 = (object)*(((s1_ptr)_2)->base + _i_20064);
        // SubProg get_text pc: 63 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _11047;
            concat_list[1] = _11046;
            concat_list[2] = _11045;
            concat_list[3] = _DBBase_20051;
            Concat_N((object_ptr)&_dbname_20055, concat_list, 4);
        }
        _11046 = NOVALUE;
        // SubProg get_text pc: 70 op: STARTLINE (58)

        /** locale.e:806			db_res = eds:db_select( filesys:locate_file( dbname ), eds:DB_LOCK_READ_ONLY)*/
        // SubProg get_text pc: 72 op: PROC (27)
        RefDS(_dbname_20055);
        RefDS(_5);
        RefDS(_5);
        _11049 = _20locate_file(_dbname_20055, _5, _5);
        // SubProg get_text pc: 78 op: PROC (27)
        _db_res_20053 = _46db_select(_11049, 3);
        _11049 = NOVALUE;
        // SubProg get_text pc: 83 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_db_res_20053)) {
            _1 = (object)(DBL_PTR(_db_res_20053)->dbl);
            DeRefDS(_db_res_20053);
            _db_res_20053 = _1;
        }
        // SubProg get_text pc: 85 op: STARTLINE (58)

        /** locale.e:807			if db_res = eds:DB_OK then*/
        // SubProg get_text pc: 87 op: EQUALS_IFW_I (121)
        if (_db_res_20053 != 0)
        goto L4; // [87] 129
        // SubProg get_text pc: 91 op: STARTLINE (58)

        /** locale.e:808				db_res = eds:db_select_table("1")*/
        // SubProg get_text pc: 93 op: PROC (27)
        RefDS(_11052);
        _db_res_20053 = _46db_select_table(_11052);
        // SubProg get_text pc: 97 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_db_res_20053)) {
            _1 = (object)(DBL_PTR(_db_res_20053)->dbl);
            DeRefDS(_db_res_20053);
            _db_res_20053 = _1;
        }
        // SubProg get_text pc: 99 op: STARTLINE (58)

        /** locale.e:809				if db_res = eds:DB_OK then*/
        // SubProg get_text pc: 101 op: EQUALS_IFW_I (121)
        if (_db_res_20053 != 0)
        goto L5; // [101] 128
        // SubProg get_text pc: 105 op: STARTLINE (58)

        /** locale.e:810					lMsgText = eds:db_fetch_record(MsgNum)*/
        // SubProg get_text pc: 107 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_text pc: 109 op: PROC (27)
        RefDS(_46current_table_name_17335);
        _0 = _lMsgText_20054;
        _lMsgText_20054 = _46db_fetch_record(_MsgNum_20049, _46current_table_name_17335);
        DeRef(_0);
        // SubProg get_text pc: 114 op: STARTLINE (58)

        /** locale.e:811					if sequence(lMsgText) then*/
        // SubProg get_text pc: 116 op: IS_A_SEQUENCE (68)
        _11056 = IS_SEQUENCE(_lMsgText_20054);
        // SubProg get_text pc: 119 op: IF (20)
        if (_11056 == 0)
        {
            _11056 = NOVALUE;
            goto L6; // [119] 127
        }
        else{
            _11056 = NOVALUE;
        }
        // SubProg get_text pc: 122 op: STARTLINE (58)

        /** locale.e:812						exit*/
        // SubProg get_text pc: 124 op: EXIT (61)
        goto L3; // [124] 136
        // SubProg get_text pc: 126 op: NOP1 (159)
L6: // addr: 127 pc: 126 sub: 20047 op: 159
        // SubProg get_text pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 20047 op: 159
        // SubProg get_text pc: 128 op: NOP1 (159)
L4: // addr: 129 pc: 128 sub: 20047 op: 159
        // SubProg get_text pc: 129 op: STARTLINE (58)

        /** locale.e:816		end for*/
        // SubProg get_text pc: 131 op: ENDFOR_INT_UP1 (54)
        _i_20064 = _i_20064 + 1;
        goto L2; // [131] 57
L3: // addr: 136 pc: 131 sub: 20047 op: 54
        ;
    }
    // SubProg get_text pc: 136 op: STARTLINE (58)

    /** locale.e:819		if atom(lMsgText) then*/
    // SubProg get_text pc: 138 op: IS_AN_ATOM (67)
    _11057 = IS_ATOM(_lMsgText_20054);
    // SubProg get_text pc: 141 op: IF (20)
    if (_11057 == 0)
    {
        _11057 = NOVALUE;
        goto L7; // [141] 281
    }
    else{
        _11057 = NOVALUE;
    }
    // SubProg get_text pc: 144 op: STARTLINE (58)

    /** locale.e:820			dbname = filesys:locate_file( DBBase & ".edb" )*/
    // SubProg get_text pc: 146 op: CONCAT (15)
    Concat((object_ptr)&_11058, _DBBase_20051, _11047);
    // SubProg get_text pc: 150 op: PROC (27)
    RefDS(_5);
    RefDS(_5);
    _0 = _dbname_20055;
    _dbname_20055 = _20locate_file(_11058, _5, _5);
    DeRef(_0);
    _11058 = NOVALUE;
    // SubProg get_text pc: 156 op: SEQUENCE_CHECK (97)
    // SubProg get_text pc: 158 op: STARTLINE (58)

    /** locale.e:821			db_res = eds:db_select(	dbname, DB_LOCK_READ_ONLY)*/
    // SubProg get_text pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_text pc: 162 op: PROC (27)
    RefDS(_dbname_20055);
    _db_res_20053 = _46db_select(_dbname_20055, 3);
    // SubProg get_text pc: 167 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_db_res_20053)) {
        _1 = (object)(DBL_PTR(_db_res_20053)->dbl);
        DeRefDS(_db_res_20053);
        _db_res_20053 = _1;
    }
    // SubProg get_text pc: 169 op: STARTLINE (58)

    /** locale.e:822			if db_res = eds:DB_OK then*/
    // SubProg get_text pc: 171 op: EQUALS_IFW_I (121)
    if (_db_res_20053 != 0)
    goto L8; // [171] 280
    // SubProg get_text pc: 175 op: STARTLINE (58)

    /** locale.e:823				db_res = eds:db_select_table("1")*/
    // SubProg get_text pc: 177 op: PROC (27)
    RefDS(_11052);
    _db_res_20053 = _46db_select_table(_11052);
    // SubProg get_text pc: 181 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_db_res_20053)) {
        _1 = (object)(DBL_PTR(_db_res_20053)->dbl);
        DeRefDS(_db_res_20053);
        _db_res_20053 = _1;
    }
    // SubProg get_text pc: 183 op: STARTLINE (58)

    /** locale.e:824				if db_res = eds:DB_OK then*/
    // SubProg get_text pc: 185 op: EQUALS_IFW_I (121)
    if (_db_res_20053 != 0)
    goto L9; // [185] 279
    // SubProg get_text pc: 189 op: STARTLINE (58)

    /** locale.e:825					for i = 1 to length(LocalQuals) do*/
    // SubProg get_text pc: 191 op: LENGTH (42)
    if (IS_SEQUENCE(_LocalQuals_20050)){
            _11064 = SEQ_PTR(_LocalQuals_20050)->length;
    }
    else {
        _11064 = 1;
    }
    // SubProg get_text pc: 194 op: FOR_I (125)
    {
        object _i_20093;
        _i_20093 = 1;
LA: // addr: 201 pc: 194 sub: 20047 op: 125
        if (_i_20093 > _11064){
            goto LB; // [194] 238
        }
        // SubProg get_text pc: 201 op: STARTLINE (58)

        /** locale.e:826						lMsgText = eds:db_fetch_record({LocalQuals[i],MsgNum})*/
        // SubProg get_text pc: 203 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_LocalQuals_20050);
        _11065 = (object)*(((s1_ptr)_2)->base + _i_20093);
        // SubProg get_text pc: 207 op: RIGHT_BRACE_2 (85)
        Ref(_11065);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _11065;
        ((intptr_t *)_2)[2] = _MsgNum_20049;
        _11066 = MAKE_SEQ(_1);
        _11065 = NOVALUE;
        // SubProg get_text pc: 211 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_text pc: 213 op: PROC (27)
        RefDS(_46current_table_name_17335);
        _0 = _lMsgText_20054;
        _lMsgText_20054 = _46db_fetch_record(_11066, _46current_table_name_17335);
        DeRef(_0);
        _11066 = NOVALUE;
        // SubProg get_text pc: 218 op: STARTLINE (58)

        /** locale.e:827						if sequence(lMsgText) then*/
        // SubProg get_text pc: 220 op: IS_A_SEQUENCE (68)
        _11068 = IS_SEQUENCE(_lMsgText_20054);
        // SubProg get_text pc: 223 op: IF (20)
        if (_11068 == 0)
        {
            _11068 = NOVALUE;
            goto LC; // [223] 231
        }
        else{
            _11068 = NOVALUE;
        }
        // SubProg get_text pc: 226 op: STARTLINE (58)

        /** locale.e:828							exit*/
        // SubProg get_text pc: 228 op: EXIT (61)
        goto LB; // [228] 238
        // SubProg get_text pc: 230 op: NOP1 (159)
LC: // addr: 231 pc: 230 sub: 20047 op: 159
        // SubProg get_text pc: 231 op: STARTLINE (58)

        /** locale.e:830					end for*/
        // SubProg get_text pc: 233 op: ENDFOR_INT_UP1 (54)
        _i_20093 = _i_20093 + 1;
        goto LA; // [233] 201
LB: // addr: 238 pc: 233 sub: 20047 op: 54
        ;
    }
    // SubProg get_text pc: 238 op: STARTLINE (58)

    /** locale.e:831					if atom(lMsgText) then*/
    // SubProg get_text pc: 240 op: IS_AN_ATOM (67)
    _11069 = IS_ATOM(_lMsgText_20054);
    // SubProg get_text pc: 243 op: IF (20)
    if (_11069 == 0)
    {
        _11069 = NOVALUE;
        goto LD; // [243] 260
    }
    else{
        _11069 = NOVALUE;
    }
    // SubProg get_text pc: 246 op: STARTLINE (58)

    /** locale.e:832						lMsgText = eds:db_fetch_record({"",MsgNum})*/
    // SubProg get_text pc: 248 op: RIGHT_BRACE_2 (85)
    RefDS(_5);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5;
    ((intptr_t *)_2)[2] = _MsgNum_20049;
    _11070 = MAKE_SEQ(_1);
    // SubProg get_text pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_text pc: 254 op: PROC (27)
    RefDS(_46current_table_name_17335);
    _0 = _lMsgText_20054;
    _lMsgText_20054 = _46db_fetch_record(_11070, _46current_table_name_17335);
    DeRef(_0);
    _11070 = NOVALUE;
    // SubProg get_text pc: 259 op: NOP1 (159)
LD: // addr: 260 pc: 259 sub: 20047 op: 159
    // SubProg get_text pc: 260 op: STARTLINE (58)

    /** locale.e:834					if atom(lMsgText) then*/
    // SubProg get_text pc: 262 op: IS_AN_ATOM (67)
    _11072 = IS_ATOM(_lMsgText_20054);
    // SubProg get_text pc: 265 op: IF (20)
    if (_11072 == 0)
    {
        _11072 = NOVALUE;
        goto LE; // [265] 278
    }
    else{
        _11072 = NOVALUE;
    }
    // SubProg get_text pc: 268 op: STARTLINE (58)

    /** locale.e:835						lMsgText = eds:db_fetch_record(MsgNum)*/
    // SubProg get_text pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_text pc: 272 op: PROC (27)
    RefDS(_46current_table_name_17335);
    _0 = _lMsgText_20054;
    _lMsgText_20054 = _46db_fetch_record(_MsgNum_20049, _46current_table_name_17335);
    DeRef(_0);
    // SubProg get_text pc: 277 op: NOP1 (159)
LE: // addr: 278 pc: 277 sub: 20047 op: 159
    // SubProg get_text pc: 278 op: NOP1 (159)
L9: // addr: 279 pc: 278 sub: 20047 op: 159
    // SubProg get_text pc: 279 op: NOP1 (159)
L8: // addr: 280 pc: 279 sub: 20047 op: 159
    // SubProg get_text pc: 280 op: NOP1 (159)
L7: // addr: 281 pc: 280 sub: 20047 op: 159
    // SubProg get_text pc: 281 op: STARTLINE (58)

    /** locale.e:840		if atom(lMsgText) then*/
    // SubProg get_text pc: 283 op: IS_AN_ATOM (67)
    _11074 = IS_ATOM(_lMsgText_20054);
    // SubProg get_text pc: 286 op: IF (20)
    if (_11074 == 0)
    {
        _11074 = NOVALUE;
        goto LF; // [286] 298
    }
    else{
        _11074 = NOVALUE;
    }
    // SubProg get_text pc: 289 op: STARTLINE (58)

    /** locale.e:841			return 0*/
    // SubProg get_text pc: 291 op: RETURNF (28)

// Exiting block BLOCK: get_text

// block var MsgNum_20049

// block var LocalQuals_20050
    DeRefDS(_LocalQuals_20050);

// block var DBBase_20051
    DeRefDS(_DBBase_20051);

// block var db_res_20053

// block var lMsgText_20054
    DeRef(_lMsgText_20054);

// block var dbname_20055
    DeRef(_dbname_20055);
    DeRef(_11039);
    _11039 = NOVALUE;
    return 0;
    // SubProg get_text pc: 295 op: ELSE (23)
    goto L10; // [295] 305
    // SubProg get_text pc: 297 op: NOP1 (159)
LF: // addr: 298 pc: 297 sub: 20047 op: 159
    // SubProg get_text pc: 298 op: STARTLINE (58)

    /** locale.e:843			return lMsgText*/
    // SubProg get_text pc: 300 op: RETURNF (28)

// Exiting block BLOCK: get_text

// block var MsgNum_20049

// block var LocalQuals_20050
    DeRefDS(_LocalQuals_20050);

// block var DBBase_20051
    DeRefDS(_DBBase_20051);

// block var db_res_20053

// block var dbname_20055
    DeRef(_dbname_20055);
    DeRef(_11039);
    _11039 = NOVALUE;
    return _lMsgText_20054;
    // SubProg get_text pc: 304 op: NOP1 (159)
L10: // addr: 305 pc: 304 sub: 20047 op: 159
    // SubProg get_text pc: 305 op: BADRETURNF (43)
    ;
}



// 0xB152CAB3
