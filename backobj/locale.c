// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _41get_text(object _MsgNum_18801, object _LocalQuals_18802, object _DBBase_18803)
{
    object _db_res_18805 = NOVALUE;
    object _lMsgText_18806 = NOVALUE;
    object _dbname_18807 = NOVALUE;
    object _10315 = NOVALUE; // 18860 10315
// skipping _10314  name type: 0
    object _10313 = NOVALUE; // 18857 10313
// skipping _10312  name type: 0
    object _10311 = NOVALUE; // 18854 10311
    object _10310 = NOVALUE; // 18853 10310
    object _10309 = NOVALUE; // 18851 10309
// skipping _10308  name type: 0
    object _10307 = NOVALUE; // 18848 10307
    object _10306 = NOVALUE; // 18847 10306
    object _10305 = NOVALUE; // 18846 10305
// skipping _10304  name type: 0
// skipping _10303  name type: 0
// skipping _10302  name type: 0
// skipping _10301  name type: 0
// skipping _10300  name type: 0
    object _10299 = NOVALUE; // 18835 10299
    object _10298 = NOVALUE; // 18834 10298
    object _10297 = NOVALUE; // 18832 10297
// skipping _10296  name type: 0
// skipping _10295  name type: 0
// skipping _10294  name type: 0
// skipping _10292  name type: 0
// skipping _10291  name type: 0
    object _10290 = NOVALUE; // 18822 10290
// skipping _10289  name type: 0
    object _10287 = NOVALUE; // 18819 10287
    object _10285 = NOVALUE; // 18817 10285
// skipping _10284  name type: 0
    object _10283 = NOVALUE; // 18813 10283
    object _10282 = NOVALUE; // 18812 10282
    object _10281 = NOVALUE; // 18811 10281
    object _10280 = NOVALUE; // 18810 10280
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_text pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_text pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg get_text pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg get_text pc: 7 op: STARTLINE (58)

    /** locale.e:798		db_res = -1*/
    // SubProg get_text pc: 9 op: ASSIGN_I (113)
    _db_res_18805 = -1;
    // SubProg get_text pc: 12 op: STARTLINE (58)

    /** locale.e:799		lMsgText = 0*/
    // SubProg get_text pc: 14 op: ASSIGN (18)
    DeRef(_lMsgText_18806);
    _lMsgText_18806 = 0;
    // SubProg get_text pc: 17 op: STARTLINE (58)

    /** locale.e:801		if string(LocalQuals) and length(LocalQuals) > 0 then*/
    // SubProg get_text pc: 19 op: PROC (27)
    RefDS(_LocalQuals_18802);
    _10280 = _8string(_LocalQuals_18802);
    // SubProg get_text pc: 23 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_10280)) {
        if (_10280 == 0) {
            goto L1; // [23] 45
        }
    }
    else {
        if (DBL_PTR(_10280)->dbl == 0.0) {
            goto L1; // [23] 45
        }
    }
    // SubProg get_text pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_LocalQuals_18802)){
            _10282 = SEQ_PTR(_LocalQuals_18802)->length;
    }
    else {
        _10282 = 1;
    }
    // SubProg get_text pc: 30 op: GREATER (6)
    _10283 = (_10282 > 0);
    _10282 = NOVALUE;
    // SubProg get_text pc: 34 op: NOP1 (159)
    // SubProg get_text pc: 35 op: IF (20)
    if (_10283 == 0)
    {
        DeRef(_10283);
        _10283 = NOVALUE;
        goto L1; // [35] 45
    }
    else{
        DeRef(_10283);
        _10283 = NOVALUE;
    }
    // SubProg get_text pc: 38 op: STARTLINE (58)

    /** locale.e:802			LocalQuals = {LocalQuals}*/
    // SubProg get_text pc: 40 op: RIGHT_BRACE_N (31)
    _0 = _LocalQuals_18802;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_LocalQuals_18802);
    ((intptr_t*)_2)[1] = _LocalQuals_18802;
    _LocalQuals_18802 = MAKE_SEQ(_1);
    DeRefDS(_0);
    // SubProg get_text pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 18799 op: 159
    // SubProg get_text pc: 45 op: STARTLINE (58)

    /** locale.e:804		for i = 1 to length(LocalQuals) do*/
    // SubProg get_text pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_LocalQuals_18802)){
            _10285 = SEQ_PTR(_LocalQuals_18802)->length;
    }
    else {
        _10285 = 1;
    }
    // SubProg get_text pc: 50 op: FOR_I (125)
    {
        object _i_18816;
        _i_18816 = 1;
L2: // addr: 57 pc: 50 sub: 18799 op: 125
        if (_i_18816 > _10285){
            goto L3; // [50] 136
        }
        // SubProg get_text pc: 57 op: STARTLINE (58)

        /** locale.e:805			dbname = DBBase & "_" & LocalQuals[i] & ".edb"*/
        // SubProg get_text pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_LocalQuals_18802);
        _10287 = (object)*(((s1_ptr)_2)->base + _i_18816);
        // SubProg get_text pc: 63 op: CONCAT_N (157)
        {
            object concat_list[4];

            concat_list[0] = _10288;
            concat_list[1] = _10287;
            concat_list[2] = _10286;
            concat_list[3] = _DBBase_18803;
            Concat_N((object_ptr)&_dbname_18807, concat_list, 4);
        }
        _10287 = NOVALUE;
        // SubProg get_text pc: 70 op: STARTLINE (58)

        /** locale.e:806			db_res = eds:db_select( filesys:locate_file( dbname ), eds:DB_LOCK_READ_ONLY)*/
        // SubProg get_text pc: 72 op: PROC (27)
        RefDS(_dbname_18807);
        RefDS(_5);
        RefDS(_5);
        _10290 = _18locate_file(_dbname_18807, _5, _5);
        // SubProg get_text pc: 78 op: PROC (27)
        _db_res_18805 = _44db_select(_10290, 3);
        _10290 = NOVALUE;
        // SubProg get_text pc: 83 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_db_res_18805)) {
            _1 = (object)(DBL_PTR(_db_res_18805)->dbl);
            DeRefDS(_db_res_18805);
            _db_res_18805 = _1;
        }
        // SubProg get_text pc: 85 op: STARTLINE (58)

        /** locale.e:807			if db_res = eds:DB_OK then*/
        // SubProg get_text pc: 87 op: EQUALS_IFW_I (121)
        if (_db_res_18805 != 0)
        goto L4; // [87] 129
        // SubProg get_text pc: 91 op: STARTLINE (58)

        /** locale.e:808				db_res = eds:db_select_table("1")*/
        // SubProg get_text pc: 93 op: PROC (27)
        RefDS(_10293);
        _db_res_18805 = _44db_select_table(_10293);
        // SubProg get_text pc: 97 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_db_res_18805)) {
            _1 = (object)(DBL_PTR(_db_res_18805)->dbl);
            DeRefDS(_db_res_18805);
            _db_res_18805 = _1;
        }
        // SubProg get_text pc: 99 op: STARTLINE (58)

        /** locale.e:809				if db_res = eds:DB_OK then*/
        // SubProg get_text pc: 101 op: EQUALS_IFW_I (121)
        if (_db_res_18805 != 0)
        goto L5; // [101] 128
        // SubProg get_text pc: 105 op: STARTLINE (58)

        /** locale.e:810					lMsgText = eds:db_fetch_record(MsgNum)*/
        // SubProg get_text pc: 107 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_text pc: 109 op: PROC (27)
        RefDS(_44current_table_name_16087);
        _0 = _lMsgText_18806;
        _lMsgText_18806 = _44db_fetch_record(_MsgNum_18801, _44current_table_name_16087);
        DeRef(_0);
        // SubProg get_text pc: 114 op: STARTLINE (58)

        /** locale.e:811					if sequence(lMsgText) then*/
        // SubProg get_text pc: 116 op: IS_A_SEQUENCE (68)
        _10297 = IS_SEQUENCE(_lMsgText_18806);
        // SubProg get_text pc: 119 op: IF (20)
        if (_10297 == 0)
        {
            _10297 = NOVALUE;
            goto L6; // [119] 127
        }
        else{
            _10297 = NOVALUE;
        }
        // SubProg get_text pc: 122 op: STARTLINE (58)

        /** locale.e:812						exit*/
        // SubProg get_text pc: 124 op: EXIT (61)
        goto L3; // [124] 136
        // SubProg get_text pc: 126 op: NOP1 (159)
L6: // addr: 127 pc: 126 sub: 18799 op: 159
        // SubProg get_text pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 18799 op: 159
        // SubProg get_text pc: 128 op: NOP1 (159)
L4: // addr: 129 pc: 128 sub: 18799 op: 159
        // SubProg get_text pc: 129 op: STARTLINE (58)

        /** locale.e:816		end for*/
        // SubProg get_text pc: 131 op: ENDFOR_INT_UP1 (54)
        _i_18816 = _i_18816 + 1;
        goto L2; // [131] 57
L3: // addr: 136 pc: 131 sub: 18799 op: 54
        ;
    }
    // SubProg get_text pc: 136 op: STARTLINE (58)

    /** locale.e:819		if atom(lMsgText) then*/
    // SubProg get_text pc: 138 op: IS_AN_ATOM (67)
    _10298 = IS_ATOM(_lMsgText_18806);
    // SubProg get_text pc: 141 op: IF (20)
    if (_10298 == 0)
    {
        _10298 = NOVALUE;
        goto L7; // [141] 281
    }
    else{
        _10298 = NOVALUE;
    }
    // SubProg get_text pc: 144 op: STARTLINE (58)

    /** locale.e:820			dbname = filesys:locate_file( DBBase & ".edb" )*/
    // SubProg get_text pc: 146 op: CONCAT (15)
    Concat((object_ptr)&_10299, _DBBase_18803, _10288);
    // SubProg get_text pc: 150 op: PROC (27)
    RefDS(_5);
    RefDS(_5);
    _0 = _dbname_18807;
    _dbname_18807 = _18locate_file(_10299, _5, _5);
    DeRef(_0);
    _10299 = NOVALUE;
    // SubProg get_text pc: 156 op: SEQUENCE_CHECK (97)
    // SubProg get_text pc: 158 op: STARTLINE (58)

    /** locale.e:821			db_res = eds:db_select(	dbname, DB_LOCK_READ_ONLY)*/
    // SubProg get_text pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_text pc: 162 op: PROC (27)
    RefDS(_dbname_18807);
    _db_res_18805 = _44db_select(_dbname_18807, 3);
    // SubProg get_text pc: 167 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_db_res_18805)) {
        _1 = (object)(DBL_PTR(_db_res_18805)->dbl);
        DeRefDS(_db_res_18805);
        _db_res_18805 = _1;
    }
    // SubProg get_text pc: 169 op: STARTLINE (58)

    /** locale.e:822			if db_res = eds:DB_OK then*/
    // SubProg get_text pc: 171 op: EQUALS_IFW_I (121)
    if (_db_res_18805 != 0)
    goto L8; // [171] 280
    // SubProg get_text pc: 175 op: STARTLINE (58)

    /** locale.e:823				db_res = eds:db_select_table("1")*/
    // SubProg get_text pc: 177 op: PROC (27)
    RefDS(_10293);
    _db_res_18805 = _44db_select_table(_10293);
    // SubProg get_text pc: 181 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_db_res_18805)) {
        _1 = (object)(DBL_PTR(_db_res_18805)->dbl);
        DeRefDS(_db_res_18805);
        _db_res_18805 = _1;
    }
    // SubProg get_text pc: 183 op: STARTLINE (58)

    /** locale.e:824				if db_res = eds:DB_OK then*/
    // SubProg get_text pc: 185 op: EQUALS_IFW_I (121)
    if (_db_res_18805 != 0)
    goto L9; // [185] 279
    // SubProg get_text pc: 189 op: STARTLINE (58)

    /** locale.e:825					for i = 1 to length(LocalQuals) do*/
    // SubProg get_text pc: 191 op: LENGTH (42)
    if (IS_SEQUENCE(_LocalQuals_18802)){
            _10305 = SEQ_PTR(_LocalQuals_18802)->length;
    }
    else {
        _10305 = 1;
    }
    // SubProg get_text pc: 194 op: FOR_I (125)
    {
        object _i_18845;
        _i_18845 = 1;
LA: // addr: 201 pc: 194 sub: 18799 op: 125
        if (_i_18845 > _10305){
            goto LB; // [194] 238
        }
        // SubProg get_text pc: 201 op: STARTLINE (58)

        /** locale.e:826						lMsgText = eds:db_fetch_record({LocalQuals[i],MsgNum})*/
        // SubProg get_text pc: 203 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_LocalQuals_18802);
        _10306 = (object)*(((s1_ptr)_2)->base + _i_18845);
        // SubProg get_text pc: 207 op: RIGHT_BRACE_2 (85)
        Ref(_10306);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _10306;
        ((intptr_t *)_2)[2] = _MsgNum_18801;
        _10307 = MAKE_SEQ(_1);
        _10306 = NOVALUE;
        // SubProg get_text pc: 211 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_text pc: 213 op: PROC (27)
        RefDS(_44current_table_name_16087);
        _0 = _lMsgText_18806;
        _lMsgText_18806 = _44db_fetch_record(_10307, _44current_table_name_16087);
        DeRef(_0);
        _10307 = NOVALUE;
        // SubProg get_text pc: 218 op: STARTLINE (58)

        /** locale.e:827						if sequence(lMsgText) then*/
        // SubProg get_text pc: 220 op: IS_A_SEQUENCE (68)
        _10309 = IS_SEQUENCE(_lMsgText_18806);
        // SubProg get_text pc: 223 op: IF (20)
        if (_10309 == 0)
        {
            _10309 = NOVALUE;
            goto LC; // [223] 231
        }
        else{
            _10309 = NOVALUE;
        }
        // SubProg get_text pc: 226 op: STARTLINE (58)

        /** locale.e:828							exit*/
        // SubProg get_text pc: 228 op: EXIT (61)
        goto LB; // [228] 238
        // SubProg get_text pc: 230 op: NOP1 (159)
LC: // addr: 231 pc: 230 sub: 18799 op: 159
        // SubProg get_text pc: 231 op: STARTLINE (58)

        /** locale.e:830					end for*/
        // SubProg get_text pc: 233 op: ENDFOR_INT_UP1 (54)
        _i_18845 = _i_18845 + 1;
        goto LA; // [233] 201
LB: // addr: 238 pc: 233 sub: 18799 op: 54
        ;
    }
    // SubProg get_text pc: 238 op: STARTLINE (58)

    /** locale.e:831					if atom(lMsgText) then*/
    // SubProg get_text pc: 240 op: IS_AN_ATOM (67)
    _10310 = IS_ATOM(_lMsgText_18806);
    // SubProg get_text pc: 243 op: IF (20)
    if (_10310 == 0)
    {
        _10310 = NOVALUE;
        goto LD; // [243] 260
    }
    else{
        _10310 = NOVALUE;
    }
    // SubProg get_text pc: 246 op: STARTLINE (58)

    /** locale.e:832						lMsgText = eds:db_fetch_record({"",MsgNum})*/
    // SubProg get_text pc: 248 op: RIGHT_BRACE_2 (85)
    RefDS(_5);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5;
    ((intptr_t *)_2)[2] = _MsgNum_18801;
    _10311 = MAKE_SEQ(_1);
    // SubProg get_text pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_text pc: 254 op: PROC (27)
    RefDS(_44current_table_name_16087);
    _0 = _lMsgText_18806;
    _lMsgText_18806 = _44db_fetch_record(_10311, _44current_table_name_16087);
    DeRef(_0);
    _10311 = NOVALUE;
    // SubProg get_text pc: 259 op: NOP1 (159)
LD: // addr: 260 pc: 259 sub: 18799 op: 159
    // SubProg get_text pc: 260 op: STARTLINE (58)

    /** locale.e:834					if atom(lMsgText) then*/
    // SubProg get_text pc: 262 op: IS_AN_ATOM (67)
    _10313 = IS_ATOM(_lMsgText_18806);
    // SubProg get_text pc: 265 op: IF (20)
    if (_10313 == 0)
    {
        _10313 = NOVALUE;
        goto LE; // [265] 278
    }
    else{
        _10313 = NOVALUE;
    }
    // SubProg get_text pc: 268 op: STARTLINE (58)

    /** locale.e:835						lMsgText = eds:db_fetch_record(MsgNum)*/
    // SubProg get_text pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_text pc: 272 op: PROC (27)
    RefDS(_44current_table_name_16087);
    _0 = _lMsgText_18806;
    _lMsgText_18806 = _44db_fetch_record(_MsgNum_18801, _44current_table_name_16087);
    DeRef(_0);
    // SubProg get_text pc: 277 op: NOP1 (159)
LE: // addr: 278 pc: 277 sub: 18799 op: 159
    // SubProg get_text pc: 278 op: NOP1 (159)
L9: // addr: 279 pc: 278 sub: 18799 op: 159
    // SubProg get_text pc: 279 op: NOP1 (159)
L8: // addr: 280 pc: 279 sub: 18799 op: 159
    // SubProg get_text pc: 280 op: NOP1 (159)
L7: // addr: 281 pc: 280 sub: 18799 op: 159
    // SubProg get_text pc: 281 op: STARTLINE (58)

    /** locale.e:840		if atom(lMsgText) then*/
    // SubProg get_text pc: 283 op: IS_AN_ATOM (67)
    _10315 = IS_ATOM(_lMsgText_18806);
    // SubProg get_text pc: 286 op: IF (20)
    if (_10315 == 0)
    {
        _10315 = NOVALUE;
        goto LF; // [286] 298
    }
    else{
        _10315 = NOVALUE;
    }
    // SubProg get_text pc: 289 op: STARTLINE (58)

    /** locale.e:841			return 0*/
    // SubProg get_text pc: 291 op: RETURNF (28)

// Exiting block BLOCK: get_text

// block var MsgNum_18801

// block var LocalQuals_18802
    DeRefDS(_LocalQuals_18802);

// block var DBBase_18803
    DeRefDS(_DBBase_18803);

// block var db_res_18805

// block var lMsgText_18806
    DeRef(_lMsgText_18806);

// block var dbname_18807
    DeRef(_dbname_18807);
    DeRef(_10280);
    _10280 = NOVALUE;
    return 0;
    // SubProg get_text pc: 295 op: ELSE (23)
    goto L10; // [295] 305
    // SubProg get_text pc: 297 op: NOP1 (159)
LF: // addr: 298 pc: 297 sub: 18799 op: 159
    // SubProg get_text pc: 298 op: STARTLINE (58)

    /** locale.e:843			return lMsgText*/
    // SubProg get_text pc: 300 op: RETURNF (28)

// Exiting block BLOCK: get_text

// block var MsgNum_18801

// block var LocalQuals_18802
    DeRefDS(_LocalQuals_18802);

// block var DBBase_18803
    DeRefDS(_DBBase_18803);

// block var db_res_18805

// block var dbname_18807
    DeRef(_dbname_18807);
    DeRef(_10280);
    _10280 = NOVALUE;
    return _lMsgText_18806;
    // SubProg get_text pc: 304 op: NOP1 (159)
L10: // addr: 305 pc: 304 sub: 18799 op: 159
    // SubProg get_text pc: 305 op: BADRETURNF (43)
    ;
}



// 0x1F5534B5
