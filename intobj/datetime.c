// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _17isLeap(object _year_8956)
{
    object _ly_8957 = NOVALUE;
    object _4942 = NOVALUE; // 8978 4942
    object _4941 = NOVALUE; // 8977 4941
    object _4940 = NOVALUE; // 8976 4940
    object _4939 = NOVALUE; // 8975 4939
    object _4938 = NOVALUE; // 8974 4938
    object _4937 = NOVALUE; // 8973 4937
    object _4936 = NOVALUE; // 8972 4936
    object _4935 = NOVALUE; // 8971 4935
    object _4934 = NOVALUE; // 8970 4934
// skipping _4933  name type: 0
// skipping _4932  name type: 0
    object _4931 = NOVALUE; // 8965 4931
// skipping _4930  name type: 0
    object _4929 = NOVALUE; // 8962 4929
    object _4928 = NOVALUE; // 8961 4928
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg isLeap pc: 1 op: INTEGER_CHECK (96)
    // SubProg isLeap pc: 3 op: STARTLINE (58)

    /** datetime.e:89			ly = (remainder(year, {4, 100, 400, 3200, 80000})=0)*/
    // SubProg isLeap pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 4;
    ((intptr_t*)_2)[2] = 100;
    ((intptr_t*)_2)[3] = 400;
    ((intptr_t*)_2)[4] = 3200;
    ((intptr_t*)_2)[5] = 80000;
    _4928 = MAKE_SEQ(_1);
    // SubProg isLeap pc: 13 op: REMAINDER (71)
    _4929 = binary_op(REMAINDER, _year_8956, _4928);
    DeRefDS(_4928);
    _4928 = NOVALUE;
    // SubProg isLeap pc: 17 op: EQUALS (3)
    DeRefi(_ly_8957);
    _ly_8957 = binary_op(EQUALS, _4929, 0);
    DeRefDS(_4929);
    _4929 = NOVALUE;
    // SubProg isLeap pc: 21 op: SEQUENCE_CHECK (97)
    // SubProg isLeap pc: 23 op: STARTLINE (58)

    /** datetime.e:91			if not ly[1] then return 0 end if*/
    // SubProg isLeap pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_8957);
    _4931 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg isLeap pc: 29 op: NOT_IFW (108)
    if (_4931 != 0)
    goto L1; // [29] 37
    _4931 = NOVALUE;
    // SubProg isLeap pc: 32 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_8956

// block var ly_8957
    DeRefDSi(_ly_8957);
    return 0;
    // SubProg isLeap pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 8954 op: 159
    // SubProg isLeap pc: 37 op: STARTLINE (58)

    /** datetime.e:93			if year <= Gregorian_Reformation then*/
    // SubProg isLeap pc: 39 op: LESSEQ_IFW_I (123)
    if (_year_8956 > 1752)
    goto L2; // [39] 52
    // SubProg isLeap pc: 43 op: STARTLINE (58)

    /** datetime.e:94					return 1 -- ly[1] can't possibly be 0 here so set shortcut as '1'.*/
    // SubProg isLeap pc: 45 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_8956

// block var ly_8957
    DeRefi(_ly_8957);
    return 1;
    // SubProg isLeap pc: 49 op: ELSE (23)
    goto L3; // [49] 95
    // SubProg isLeap pc: 51 op: NOP1 (159)
L2: // addr: 52 pc: 51 sub: 8954 op: 159
    // SubProg isLeap pc: 52 op: STARTLINE (58)

    /** datetime.e:96					return ly[1] - ly[2] + ly[3] - ly[4] + ly[5]*/
    // SubProg isLeap pc: 54 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_8957);
    _4934 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg isLeap pc: 58 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_8957);
    _4935 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg isLeap pc: 62 op: MINUS (10)
    _4936 = _4934 - _4935;
    if ((object)((uintptr_t)_4936 +(uintptr_t) HIGH_BITS) >= 0){
        _4936 = NewDouble((eudouble)_4936);
    }
    _4934 = NOVALUE;
    _4935 = NOVALUE;
    // SubProg isLeap pc: 66 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_8957);
    _4937 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg isLeap pc: 70 op: PLUS (11)
    if (IS_ATOM_INT(_4936)) {
        _4938 = _4936 + _4937;
        if ((object)((uintptr_t)_4938 + (uintptr_t)HIGH_BITS) >= 0){
            _4938 = NewDouble((eudouble)_4938);
        }
    }
    else {
        _4938 = NewDouble(DBL_PTR(_4936)->dbl + (eudouble)_4937);
    }
    DeRef(_4936);
    _4936 = NOVALUE;
    _4937 = NOVALUE;
    // SubProg isLeap pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_8957);
    _4939 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg isLeap pc: 78 op: MINUS (10)
    if (IS_ATOM_INT(_4938)) {
        _4940 = _4938 - _4939;
        if ((object)((uintptr_t)_4940 +(uintptr_t) HIGH_BITS) >= 0){
            _4940 = NewDouble((eudouble)_4940);
        }
    }
    else {
        _4940 = NewDouble(DBL_PTR(_4938)->dbl - (eudouble)_4939);
    }
    DeRef(_4938);
    _4938 = NOVALUE;
    _4939 = NOVALUE;
    // SubProg isLeap pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_ly_8957);
    _4941 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg isLeap pc: 86 op: PLUS (11)
    if (IS_ATOM_INT(_4940)) {
        _4942 = _4940 + _4941;
        if ((object)((uintptr_t)_4942 + (uintptr_t)HIGH_BITS) >= 0){
            _4942 = NewDouble((eudouble)_4942);
        }
    }
    else {
        _4942 = NewDouble(DBL_PTR(_4940)->dbl + (eudouble)_4941);
    }
    DeRef(_4940);
    _4940 = NOVALUE;
    _4941 = NOVALUE;
    // SubProg isLeap pc: 90 op: RETURNF (28)

// Exiting block BLOCK: isLeap

// block var year_8956

// block var ly_8957
    DeRefDSi(_ly_8957);
    return _4942;
    // SubProg isLeap pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 8954 op: 159
    // SubProg isLeap pc: 95 op: BADRETURNF (43)
    ;
}


object _17daysInMonth(object _year_8981, object _month_8982)
{
    object _4950 = NOVALUE; // 8993 4950
    object _4949 = NOVALUE; // 8992 4949
    object _4948 = NOVALUE; // 8991 4948
    object _4947 = NOVALUE; // 8989 4947
// skipping _4946  name type: 0
    object _4945 = NOVALUE; // 8986 4945
    object _4944 = NOVALUE; // 8985 4944
    object _4943 = NOVALUE; // 8984 4943
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg daysInMonth pc: 1 op: INTEGER_CHECK (96)
    // SubProg daysInMonth pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_month_8982)) {
        _1 = (object)(DBL_PTR(_month_8982)->dbl);
        DeRefDS(_month_8982);
        _month_8982 = _1;
    }
    // SubProg daysInMonth pc: 5 op: STARTLINE (58)

    /** datetime.e:101		if year = Gregorian_Reformation and month = 9 then*/
    // SubProg daysInMonth pc: 7 op: EQUALS (3)
    _4943 = (_year_8981 == 1752);
    // SubProg daysInMonth pc: 11 op: SC1_AND_IF (146)
    if (_4943 == 0) {
        goto L1; // [11] 32
    }
    // SubProg daysInMonth pc: 15 op: EQUALS (3)
    _4945 = (_month_8982 == 9);
    // SubProg daysInMonth pc: 19 op: NOP1 (159)
    // SubProg daysInMonth pc: 20 op: IF (20)
    if (_4945 == 0)
    {
        DeRef(_4945);
        _4945 = NOVALUE;
        goto L1; // [20] 32
    }
    else{
        DeRef(_4945);
        _4945 = NOVALUE;
    }
    // SubProg daysInMonth pc: 23 op: STARTLINE (58)

    /** datetime.e:102			return 19*/
    // SubProg daysInMonth pc: 25 op: RETURNF (28)

// Exiting block BLOCK: daysInMonth

// block var year_8981

// block var month_8982
    DeRef(_4943);
    _4943 = NOVALUE;
    return 19;
    // SubProg daysInMonth pc: 29 op: ELSE (23)
    goto L2; // [29] 70
    // SubProg daysInMonth pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 8979 op: 159
    // SubProg daysInMonth pc: 32 op: STARTLINE (58)

    /** datetime.e:103		elsif month != 2 then*/
    // SubProg daysInMonth pc: 34 op: NOTEQ_IFW_I (122)
    if (_month_8982 == 2)
    goto L3; // [34] 51
    // SubProg daysInMonth pc: 38 op: STARTLINE (58)

    /** datetime.e:104			return DaysPerMonth[month]*/
    // SubProg daysInMonth pc: 40 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_17DaysPerMonth_8939);
    _4947 = (object)*(((s1_ptr)_2)->base + _month_8982);
    // SubProg daysInMonth pc: 44 op: RETURNF (28)
    Ref(_4947);

// Exiting block BLOCK: daysInMonth

// block var year_8981

// block var month_8982
    DeRef(_4943);
    _4943 = NOVALUE;
    return _4947;
    // SubProg daysInMonth pc: 48 op: ELSE (23)
    goto L2; // [48] 70
    // SubProg daysInMonth pc: 50 op: NOP1 (159)
L3: // addr: 51 pc: 50 sub: 8979 op: 159
    // SubProg daysInMonth pc: 51 op: STARTLINE (58)

    /** datetime.e:106			return DaysPerMonth[month] + isLeap(year)*/
    // SubProg daysInMonth pc: 53 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_17DaysPerMonth_8939);
    _4948 = (object)*(((s1_ptr)_2)->base + _month_8982);
    // SubProg daysInMonth pc: 57 op: PROC (27)
    _4949 = _17isLeap(_year_8981);
    // SubProg daysInMonth pc: 61 op: PLUS (11)
    if (IS_ATOM_INT(_4948) && IS_ATOM_INT(_4949)) {
        _4950 = _4948 + _4949;
        if ((object)((uintptr_t)_4950 + (uintptr_t)HIGH_BITS) >= 0){
            _4950 = NewDouble((eudouble)_4950);
        }
    }
    else {
        _4950 = binary_op(PLUS, _4948, _4949);
    }
    _4948 = NOVALUE;
    DeRef(_4949);
    _4949 = NOVALUE;
    // SubProg daysInMonth pc: 65 op: RETURNF (28)

// Exiting block BLOCK: daysInMonth

// block var year_8981

// block var month_8982
    _4947 = NOVALUE;
    DeRef(_4943);
    _4943 = NOVALUE;
    return _4950;
    // SubProg daysInMonth pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 8979 op: 159
    // SubProg daysInMonth pc: 70 op: BADRETURNF (43)
    ;
}


object _17julianDayOfYear(object _ymd_9005)
{
    object _year_9006 = NOVALUE;
    object _month_9007 = NOVALUE;
    object _day_9008 = NOVALUE;
    object _d_9009 = NOVALUE;
// skipping _4969  name type: 0
// skipping _4968  name type: 0
// skipping _4967  name type: 0
    object _4966 = NOVALUE; // 9024 4966
    object _4965 = NOVALUE; // 9023 4965
    object _4964 = NOVALUE; // 9022 4964
// skipping _4963  name type: 0
// skipping _4962  name type: 0
    object _4961 = NOVALUE; // 9018 4961
    object _4960 = NOVALUE; // 9017 4960
// skipping _4959  name type: 0
// skipping _4958  name type: 0
// skipping _4957  name type: 0
// skipping _4956  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg julianDayOfYear pc: 1 op: STARTLINE (58)

    /** datetime.e:124		year = ymd[1]*/
    // SubProg julianDayOfYear pc: 3 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_9005);
    _year_9006 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_9006)){
        _year_9006 = (object)DBL_PTR(_year_9006)->dbl;
    }
    // SubProg julianDayOfYear pc: 9 op: STARTLINE (58)

    /** datetime.e:125		month = ymd[2]*/
    // SubProg julianDayOfYear pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_9005);
    _month_9007 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_month_9007)){
        _month_9007 = (object)DBL_PTR(_month_9007)->dbl;
    }
    // SubProg julianDayOfYear pc: 17 op: STARTLINE (58)

    /** datetime.e:126		day = ymd[3]*/
    // SubProg julianDayOfYear pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_9005);
    _day_9008 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_day_9008)){
        _day_9008 = (object)DBL_PTR(_day_9008)->dbl;
    }
    // SubProg julianDayOfYear pc: 25 op: STARTLINE (58)

    /** datetime.e:128		if month = 1 then return day end if*/
    // SubProg julianDayOfYear pc: 27 op: EQUALS_IFW_I (121)
    if (_month_9007 != 1)
    goto L1; // [27] 36
    // SubProg julianDayOfYear pc: 31 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_9005
    DeRef(_ymd_9005);

// block var year_9006

// block var month_9007

// block var d_9009
    return _day_9008;
    // SubProg julianDayOfYear pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 9003 op: 159
    // SubProg julianDayOfYear pc: 36 op: STARTLINE (58)

    /** datetime.e:130		d = 0*/
    // SubProg julianDayOfYear pc: 38 op: ASSIGN_I (113)
    _d_9009 = 0;
    // SubProg julianDayOfYear pc: 41 op: STARTLINE (58)

    /** datetime.e:131		for i = 1 to month - 1 do*/
    // SubProg julianDayOfYear pc: 43 op: MINUS (10)
    _4960 = _month_9007 - 1;
    if ((object)((uintptr_t)_4960 +(uintptr_t) HIGH_BITS) >= 0){
        _4960 = NewDouble((eudouble)_4960);
    }
    // SubProg julianDayOfYear pc: 47 op: FOR (21)
    {
        object _i_9016;
        _i_9016 = 1;
L2: // addr: 54 pc: 47 sub: 9003 op: 21
        if (binary_op_a(GREATER, _i_9016, _4960)){
            goto L3; // [47] 74
        }
        // SubProg julianDayOfYear pc: 54 op: STARTLINE (58)

        /** datetime.e:132			d += daysInMonth(year, i)*/
        // SubProg julianDayOfYear pc: 56 op: PROC (27)
        Ref(_i_9016);
        _4961 = _17daysInMonth(_year_9006, _i_9016);
        // SubProg julianDayOfYear pc: 61 op: PLUS (11)
        if (IS_ATOM_INT(_4961)) {
            _d_9009 = _d_9009 + _4961;
        }
        else {
            _d_9009 = binary_op(PLUS, _d_9009, _4961);
        }
        DeRef(_4961);
        _4961 = NOVALUE;
        // SubProg julianDayOfYear pc: 65 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_d_9009)) {
            _1 = (object)(DBL_PTR(_d_9009)->dbl);
            DeRefDS(_d_9009);
            _d_9009 = _1;
        }
        // SubProg julianDayOfYear pc: 67 op: STARTLINE (58)

        /** datetime.e:133		end for*/
        // SubProg julianDayOfYear pc: 69 op: ENDFOR_INT_UP1 (54)
        _0 = _i_9016;
        if (IS_ATOM_INT(_i_9016)) {
            _i_9016 = _i_9016 + 1;
            if ((object)((uintptr_t)_i_9016 +(uintptr_t) HIGH_BITS) >= 0){
                _i_9016 = NewDouble((eudouble)_i_9016);
            }
        }
        else {
            _i_9016 = binary_op_a(PLUS, _i_9016, 1);
        }
        DeRef(_0);
        goto L2; // [69] 54
L3: // addr: 74 pc: 69 sub: 9003 op: 54
        ;
        DeRef(_i_9016);
    }
    // SubProg julianDayOfYear pc: 74 op: STARTLINE (58)

    /** datetime.e:135		d += day*/
    // SubProg julianDayOfYear pc: 76 op: PLUS_I (115)
    _d_9009 = _d_9009 + _day_9008;
    // SubProg julianDayOfYear pc: 80 op: STARTLINE (58)

    /** datetime.e:137		if year = Gregorian_Reformation and month = 9 then*/
    // SubProg julianDayOfYear pc: 82 op: EQUALS (3)
    _4964 = (_year_9006 == 1752);
    // SubProg julianDayOfYear pc: 86 op: SC1_AND_IF (146)
    if (_4964 == 0) {
        goto L4; // [86] 128
    }
    // SubProg julianDayOfYear pc: 90 op: EQUALS (3)
    _4966 = (_month_9007 == 9);
    // SubProg julianDayOfYear pc: 94 op: NOP1 (159)
    // SubProg julianDayOfYear pc: 95 op: IF (20)
    if (_4966 == 0)
    {
        DeRef(_4966);
        _4966 = NOVALUE;
        goto L4; // [95] 128
    }
    else{
        DeRef(_4966);
        _4966 = NOVALUE;
    }
    // SubProg julianDayOfYear pc: 98 op: STARTLINE (58)

    /** datetime.e:138			if day > 13 then*/
    // SubProg julianDayOfYear pc: 100 op: GREATER_IFW_I (124)
    if (_day_9008 <= 13)
    goto L5; // [100] 113
    // SubProg julianDayOfYear pc: 104 op: STARTLINE (58)

    /** datetime.e:139				d -= 11*/
    // SubProg julianDayOfYear pc: 106 op: MINUS_I (116)
    _d_9009 = _d_9009 - 11;
    // SubProg julianDayOfYear pc: 110 op: ELSE (23)
    goto L6; // [110] 127
    // SubProg julianDayOfYear pc: 112 op: NOP1 (159)
L5: // addr: 113 pc: 112 sub: 9003 op: 159
    // SubProg julianDayOfYear pc: 113 op: STARTLINE (58)

    /** datetime.e:140			elsif day > 2 then*/
    // SubProg julianDayOfYear pc: 115 op: GREATER_IFW_I (124)
    if (_day_9008 <= 2)
    goto L7; // [115] 126
    // SubProg julianDayOfYear pc: 119 op: STARTLINE (58)

    /** datetime.e:141				return 0*/
    // SubProg julianDayOfYear pc: 121 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_9005
    DeRef(_ymd_9005);

// block var year_9006

// block var month_9007

// block var day_9008

// block var d_9009
    DeRef(_4964);
    _4964 = NOVALUE;
    DeRef(_4960);
    _4960 = NOVALUE;
    return 0;
    // SubProg julianDayOfYear pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 9003 op: 159
    // SubProg julianDayOfYear pc: 126 op: NOP1 (159)
L6: // addr: 127 pc: 126 sub: 9003 op: 159
    // SubProg julianDayOfYear pc: 127 op: NOP1 (159)
L4: // addr: 128 pc: 127 sub: 9003 op: 159
    // SubProg julianDayOfYear pc: 128 op: STARTLINE (58)

    /** datetime.e:145		return d*/
    // SubProg julianDayOfYear pc: 130 op: RETURNF (28)

// Exiting block BLOCK: julianDayOfYear

// block var ymd_9005
    DeRef(_ymd_9005);

// block var year_9006

// block var month_9007

// block var day_9008
    DeRef(_4964);
    _4964 = NOVALUE;
    DeRef(_4960);
    _4960 = NOVALUE;
    return _d_9009;
    // SubProg julianDayOfYear pc: 134 op: BADRETURNF (43)
    ;
}


object _17julianDay(object _ymd_9032)
{
    object _year_9033 = NOVALUE;
    object _j_9034 = NOVALUE;
    object _greg00_9035 = NOVALUE;
// skipping _4996  name type: 0
    object _4995 = NOVALUE; // 9063 4995
// skipping _4994  name type: 0
// skipping _4993  name type: 0
    object _4992 = NOVALUE; // 9059 4992
// skipping _4991  name type: 0
// skipping _4990  name type: 0
    object _4989 = NOVALUE; // 9055 4989
    object _4988 = NOVALUE; // 9054 4988
    object _4987 = NOVALUE; // 9053 4987
    object _4986 = NOVALUE; // 9052 4986
    object _4985 = NOVALUE; // 9051 4985
    object _4984 = NOVALUE; // 9050 4984
    object _4983 = NOVALUE; // 9049 4983
    object _4982 = NOVALUE; // 9048 4982
    object _4980 = NOVALUE; // 9046 4980
    object _4979 = NOVALUE; // 9045 4979
    object _4978 = NOVALUE; // 9044 4978
    object _4977 = NOVALUE; // 9043 4977
    object _4976 = NOVALUE; // 9042 4976
    object _4975 = NOVALUE; // 9041 4975
    object _4974 = NOVALUE; // 9040 4974
// skipping _4973  name type: 0
// skipping _4972  name type: 0
// skipping _4971  name type: 0
// skipping _4970  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg julianDay pc: 1 op: STARTLINE (58)

    /** datetime.e:152		year = ymd[1]*/
    // SubProg julianDay pc: 3 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ymd_9032);
    _year_9033 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_year_9033)){
        _year_9033 = (object)DBL_PTR(_year_9033)->dbl;
    }
    // SubProg julianDay pc: 9 op: STARTLINE (58)

    /** datetime.e:153		j = julianDayOfYear(ymd)*/
    // SubProg julianDay pc: 11 op: PROC (27)
    Ref(_ymd_9032);
    _j_9034 = _17julianDayOfYear(_ymd_9032);
    // SubProg julianDay pc: 15 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_9034)) {
        _1 = (object)(DBL_PTR(_j_9034)->dbl);
        DeRefDS(_j_9034);
        _j_9034 = _1;
    }
    // SubProg julianDay pc: 17 op: STARTLINE (58)

    /** datetime.e:155		year  -= 1*/
    // SubProg julianDay pc: 19 op: MINUS_I (116)
    _year_9033 = _year_9033 - 1;
    // SubProg julianDay pc: 23 op: STARTLINE (58)

    /** datetime.e:156		greg00 = year - Gregorian_Reformation00*/
    // SubProg julianDay pc: 25 op: MINUS_I (116)
    _greg00_9035 = _year_9033 - 1700;
    // SubProg julianDay pc: 29 op: STARTLINE (58)

    /** datetime.e:158		j += (*/
    // SubProg julianDay pc: 31 op: MULTIPLY (13)
    if (_year_9033 <= INT15 && _year_9033 >= -INT15){
        _4974 = 365 * _year_9033;
    }
    else{
        _4974 = NewDouble(365 * (eudouble)_year_9033);
    }
    // SubProg julianDay pc: 35 op: FLOOR_DIV (63)
    if (4 > 0 && _year_9033 >= 0) {
        _4975 = _year_9033 / 4;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_9033 / (eudouble)4);
        _4975 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 39 op: PLUS (11)
    if (IS_ATOM_INT(_4974)) {
        _4976 = _4974 + _4975;
        if ((object)((uintptr_t)_4976 + (uintptr_t)HIGH_BITS) >= 0){
            _4976 = NewDouble((eudouble)_4976);
        }
    }
    else {
        _4976 = NewDouble(DBL_PTR(_4974)->dbl + (eudouble)_4975);
    }
    DeRef(_4974);
    _4974 = NOVALUE;
    _4975 = NOVALUE;
    // SubProg julianDay pc: 43 op: GREATER (6)
    _4977 = (_greg00_9035 > 0);
    // SubProg julianDay pc: 47 op: FLOOR_DIV (63)
    if (100 > 0 && _greg00_9035 >= 0) {
        _4978 = _greg00_9035 / 100;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_greg00_9035 / (eudouble)100);
        _4978 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 51 op: UMINUS (12)
    _4979 = - _4978;
    // SubProg julianDay pc: 54 op: DIVIDE (14)
    _4980 = (_greg00_9035 % 400) ? NewDouble((eudouble)_greg00_9035 / 400) : (_greg00_9035 / 400);
    // SubProg julianDay pc: 58 op: PLUS (11)
    if (IS_ATOM_INT(_4980)) {
        _4982 = NewDouble((eudouble)_4980 + DBL_PTR(_4981)->dbl);
    }
    else {
        _4982 = NewDouble(DBL_PTR(_4980)->dbl + DBL_PTR(_4981)->dbl);
    }
    DeRef(_4980);
    _4980 = NOVALUE;
    // SubProg julianDay pc: 62 op: FLOOR (83)
    _4983 = unary_op(FLOOR, _4982);
    DeRefDS(_4982);
    _4982 = NOVALUE;
    // SubProg julianDay pc: 65 op: PLUS (11)
    if (IS_ATOM_INT(_4983)) {
        _4984 = _4979 + _4983;
        if ((object)((uintptr_t)_4984 + (uintptr_t)HIGH_BITS) >= 0){
            _4984 = NewDouble((eudouble)_4984);
        }
    }
    else {
        _4984 = binary_op(PLUS, _4979, _4983);
    }
    _4979 = NOVALUE;
    DeRef(_4983);
    _4983 = NOVALUE;
    // SubProg julianDay pc: 69 op: MULTIPLY (13)
    if (IS_ATOM_INT(_4984)) {
        if (_4984 <= INT15 && _4984 >= -INT15){
            _4985 = _4977 * _4984;
        }
        else{
            _4985 = NewDouble(_4977 * (eudouble)_4984);
        }
    }
    else {
        _4985 = binary_op(MULTIPLY, _4977, _4984);
    }
    _4977 = NOVALUE;
    DeRef(_4984);
    _4984 = NOVALUE;
    // SubProg julianDay pc: 73 op: PLUS (11)
    if (IS_ATOM_INT(_4976) && IS_ATOM_INT(_4985)) {
        _4986 = _4976 + _4985;
        if ((object)((uintptr_t)_4986 + (uintptr_t)HIGH_BITS) >= 0){
            _4986 = NewDouble((eudouble)_4986);
        }
    }
    else {
        _4986 = binary_op(PLUS, _4976, _4985);
    }
    DeRef(_4976);
    _4976 = NOVALUE;
    DeRef(_4985);
    _4985 = NOVALUE;
    // SubProg julianDay pc: 77 op: GREATEREQ (2)
    _4987 = (_year_9033 >= 1752);
    // SubProg julianDay pc: 81 op: MULTIPLY (13)
    _4988 = 11 * _4987;
    _4987 = NOVALUE;
    // SubProg julianDay pc: 85 op: MINUS (10)
    if (IS_ATOM_INT(_4986)) {
        _4989 = _4986 - _4988;
        if ((object)((uintptr_t)_4989 +(uintptr_t) HIGH_BITS) >= 0){
            _4989 = NewDouble((eudouble)_4989);
        }
    }
    else {
        _4989 = binary_op(MINUS, _4986, _4988);
    }
    DeRef(_4986);
    _4986 = NOVALUE;
    _4988 = NOVALUE;
    // SubProg julianDay pc: 89 op: PLUS (11)
    if (IS_ATOM_INT(_4989)) {
        _j_9034 = _j_9034 + _4989;
    }
    else {
        _j_9034 = binary_op(PLUS, _j_9034, _4989);
    }
    DeRef(_4989);
    _4989 = NOVALUE;
    // SubProg julianDay pc: 93 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_j_9034)) {
        _1 = (object)(DBL_PTR(_j_9034)->dbl);
        DeRefDS(_j_9034);
        _j_9034 = _1;
    }
    // SubProg julianDay pc: 95 op: STARTLINE (58)

    /** datetime.e:169		if year >= 3200 then*/
    // SubProg julianDay pc: 97 op: GREATEREQ_IFW_I (120)
    if (_year_9033 < 3200)
    goto L1; // [97] 133
    // SubProg julianDay pc: 101 op: STARTLINE (58)

    /** datetime.e:170			j -= floor(year/ 3200)*/
    // SubProg julianDay pc: 103 op: FLOOR_DIV (63)
    if (3200 > 0 && _year_9033 >= 0) {
        _4992 = _year_9033 / 3200;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_9033 / (eudouble)3200);
        _4992 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 107 op: MINUS (10)
    _j_9034 = _j_9034 - _4992;
    _4992 = NOVALUE;
    // SubProg julianDay pc: 113 op: STARTLINE (58)

    /** datetime.e:171			if year >= 80000 then*/
    // SubProg julianDay pc: 115 op: GREATEREQ_IFW_I (120)
    if (_year_9033 < 80000)
    goto L2; // [115] 132
    // SubProg julianDay pc: 119 op: STARTLINE (58)

    /** datetime.e:172				j += floor(year/80000)*/
    // SubProg julianDay pc: 121 op: FLOOR_DIV (63)
    if (80000 > 0 && _year_9033 >= 0) {
        _4995 = _year_9033 / 80000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_year_9033 / (eudouble)80000);
        _4995 = (object)temp_dbl;
    }
    // SubProg julianDay pc: 125 op: PLUS (11)
    _j_9034 = _j_9034 + _4995;
    _4995 = NOVALUE;
    // SubProg julianDay pc: 131 op: NOP1 (159)
L2: // addr: 132 pc: 131 sub: 9030 op: 159
    // SubProg julianDay pc: 132 op: NOP1 (159)
L1: // addr: 133 pc: 132 sub: 9030 op: 159
    // SubProg julianDay pc: 133 op: STARTLINE (58)

    /** datetime.e:176		return j*/
    // SubProg julianDay pc: 135 op: RETURNF (28)

// Exiting block BLOCK: julianDay

// block var ymd_9032
    DeRef(_ymd_9032);

// block var year_9033

// block var greg00_9035
    DeRef(_4978);
    _4978 = NOVALUE;
    return _j_9034;
    // SubProg julianDay pc: 139 op: BADRETURNF (43)
    ;
}


object _17datetimeToSeconds(object _dt_9121)
{
    object _5038 = NOVALUE; // 9131 5038
    object _5037 = NOVALUE; // 9130 5037
    object _5036 = NOVALUE; // 9129 5036
    object _5035 = NOVALUE; // 9128 5035
    object _5034 = NOVALUE; // 9127 5034
    object _5033 = NOVALUE; // 9126 5033
    object _5032 = NOVALUE; // 9125 5032
    object _5031 = NOVALUE; // 9124 5031
    object _5030 = NOVALUE; // 9123 5030
    object _5029 = NOVALUE; // 9122 5029
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg datetimeToSeconds pc: 1 op: STARTLINE (58)

    /** datetime.e:226		return julianDay(dt) * DayLengthInSeconds + (dt[4] * 60 + dt[5]) * 60 + dt[6]*/
    // SubProg datetimeToSeconds pc: 3 op: PROC (27)
    Ref(_dt_9121);
    _5029 = _17julianDay(_dt_9121);
    // SubProg datetimeToSeconds pc: 7 op: MULTIPLY (13)
    if (IS_ATOM_INT(_5029)) {
        _5030 = NewDouble(_5029 * (eudouble)86400);
    }
    else {
        _5030 = binary_op(MULTIPLY, _5029, 86400);
    }
    DeRef(_5029);
    _5029 = NOVALUE;
    // SubProg datetimeToSeconds pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_9121);
    _5031 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg datetimeToSeconds pc: 15 op: MULTIPLY (13)
    if (IS_ATOM_INT(_5031)) {
        if (_5031 == (short)_5031){
            _5032 = _5031 * 60;
        }
        else{
            _5032 = NewDouble(_5031 * (eudouble)60);
        }
    }
    else {
        _5032 = binary_op(MULTIPLY, _5031, 60);
    }
    _5031 = NOVALUE;
    // SubProg datetimeToSeconds pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_9121);
    _5033 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg datetimeToSeconds pc: 23 op: PLUS (11)
    if (IS_ATOM_INT(_5032) && IS_ATOM_INT(_5033)) {
        _5034 = _5032 + _5033;
        if ((object)((uintptr_t)_5034 + (uintptr_t)HIGH_BITS) >= 0){
            _5034 = NewDouble((eudouble)_5034);
        }
    }
    else {
        _5034 = binary_op(PLUS, _5032, _5033);
    }
    DeRef(_5032);
    _5032 = NOVALUE;
    _5033 = NOVALUE;
    // SubProg datetimeToSeconds pc: 27 op: MULTIPLY (13)
    if (IS_ATOM_INT(_5034)) {
        if (_5034 == (short)_5034){
            _5035 = _5034 * 60;
        }
        else{
            _5035 = NewDouble(_5034 * (eudouble)60);
        }
    }
    else {
        _5035 = binary_op(MULTIPLY, _5034, 60);
    }
    DeRef(_5034);
    _5034 = NOVALUE;
    // SubProg datetimeToSeconds pc: 31 op: PLUS (11)
    if (IS_ATOM_INT(_5030) && IS_ATOM_INT(_5035)) {
        _5036 = _5030 + _5035;
        if ((object)((uintptr_t)_5036 + (uintptr_t)HIGH_BITS) >= 0){
            _5036 = NewDouble((eudouble)_5036);
        }
    }
    else {
        _5036 = binary_op(PLUS, _5030, _5035);
    }
    DeRef(_5030);
    _5030 = NOVALUE;
    DeRef(_5035);
    _5035 = NOVALUE;
    // SubProg datetimeToSeconds pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_dt_9121);
    _5037 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg datetimeToSeconds pc: 39 op: PLUS (11)
    if (IS_ATOM_INT(_5036) && IS_ATOM_INT(_5037)) {
        _5038 = _5036 + _5037;
        if ((object)((uintptr_t)_5038 + (uintptr_t)HIGH_BITS) >= 0){
            _5038 = NewDouble((eudouble)_5038);
        }
    }
    else {
        _5038 = binary_op(PLUS, _5036, _5037);
    }
    DeRef(_5036);
    _5036 = NOVALUE;
    _5037 = NOVALUE;
    // SubProg datetimeToSeconds pc: 43 op: RETURNF (28)

// Exiting block BLOCK: datetimeToSeconds

// block var dt_9121
    DeRef(_dt_9121);
    return _5038;
    // SubProg datetimeToSeconds pc: 47 op: BADRETURNF (43)
    ;
}


object _17from_date(object _src_9285)
{
    object _5151 = NOVALUE; // 9294 5151
    object _5150 = NOVALUE; // 9293 5150
    object _5149 = NOVALUE; // 9292 5149
    object _5148 = NOVALUE; // 9291 5148
    object _5147 = NOVALUE; // 9290 5147
    object _5146 = NOVALUE; // 9289 5146
    object _5145 = NOVALUE; // 9288 5145
    object _5143 = NOVALUE; // 9286 5143
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg from_date pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg from_date pc: 3 op: STARTLINE (58)

    /** datetime.e:513		return {src[YEAR]+1900, src[MONTH], src[DAY], src[HOUR], src[MINUTE], src[SECOND]}*/
    // SubProg from_date pc: 5 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_9285);
    _5143 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg from_date pc: 9 op: PLUS (11)
    _5145 = _5143 + 1900;
    if ((object)((uintptr_t)_5145 + (uintptr_t)HIGH_BITS) >= 0){
        _5145 = NewDouble((eudouble)_5145);
    }
    _5143 = NOVALUE;
    // SubProg from_date pc: 13 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_9285);
    _5146 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg from_date pc: 17 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_9285);
    _5147 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg from_date pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_9285);
    _5148 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg from_date pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_9285);
    _5149 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg from_date pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_src_9285);
    _5150 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg from_date pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5145;
    ((intptr_t*)_2)[2] = _5146;
    ((intptr_t*)_2)[3] = _5147;
    ((intptr_t*)_2)[4] = _5148;
    ((intptr_t*)_2)[5] = _5149;
    ((intptr_t*)_2)[6] = _5150;
    _5151 = MAKE_SEQ(_1);
    _5150 = NOVALUE;
    _5149 = NOVALUE;
    _5148 = NOVALUE;
    _5147 = NOVALUE;
    _5146 = NOVALUE;
    _5145 = NOVALUE;
    // SubProg from_date pc: 42 op: RETURNF (28)

// Exiting block BLOCK: from_date

// block var src_9285
    DeRefDSi(_src_9285);
    return _5151;
    // SubProg from_date pc: 46 op: BADRETURNF (43)
    ;
}


object _17new(object _year_9317, object _month_9318, object _day_9319, object _hour_9320, object _minute_9321, object _second_9322)
{
    object _d_9323 = NOVALUE;
    object _now_1__tmp_at41_9330 = NOVALUE;
    object _now_inlined_now_at_41_9329 = NOVALUE;
    object _5166 = NOVALUE; // 9327 5166
    object _5165 = NOVALUE; // 9326 5165
// skipping _5164  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_year_9317)) {
        _1 = (object)(DBL_PTR(_year_9317)->dbl);
        DeRefDS(_year_9317);
        _year_9317 = _1;
    }
    // SubProg new pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_month_9318)) {
        _1 = (object)(DBL_PTR(_month_9318)->dbl);
        DeRefDS(_month_9318);
        _month_9318 = _1;
    }
    // SubProg new pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_day_9319)) {
        _1 = (object)(DBL_PTR(_day_9319)->dbl);
        DeRefDS(_day_9319);
        _day_9319 = _1;
    }
    // SubProg new pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_hour_9320)) {
        _1 = (object)(DBL_PTR(_hour_9320)->dbl);
        DeRefDS(_hour_9320);
        _hour_9320 = _1;
    }
    // SubProg new pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_minute_9321)) {
        _1 = (object)(DBL_PTR(_minute_9321)->dbl);
        DeRefDS(_minute_9321);
        _minute_9321 = _1;
    }
    // SubProg new pc: 11 op: STARTLINE (58)

    /** datetime.e:587		d = {year, month, day, hour, minute, second}*/
    // SubProg new pc: 13 op: RIGHT_BRACE_N (31)
    _0 = _d_9323;
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _year_9317;
    ((intptr_t*)_2)[2] = _month_9318;
    ((intptr_t*)_2)[3] = _day_9319;
    ((intptr_t*)_2)[4] = _hour_9320;
    ((intptr_t*)_2)[5] = _minute_9321;
    Ref(_second_9322);
    ((intptr_t*)_2)[6] = _second_9322;
    _d_9323 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg new pc: 22 op: STARTLINE (58)

    /** datetime.e:588		if equal(d, {0,0,0,0,0,0}) then*/
    // SubProg new pc: 24 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 0;
    _5165 = MAKE_SEQ(_1);
    // SubProg new pc: 33 op: EQUAL (153)
    if (_d_9323 == _5165)
    _5166 = 1;
    else if (IS_ATOM_INT(_d_9323) && IS_ATOM_INT(_5165))
    _5166 = 0;
    else
    _5166 = (compare(_d_9323, _5165) == 0);
    DeRefDS(_5165);
    _5165 = NOVALUE;
    // SubProg new pc: 37 op: IF (20)
    if (_5166 == 0)
    {
        _5166 = NOVALUE;
        goto L1; // [37] 60
    }
    else{
        _5166 = NOVALUE;
    }
    // SubProg new pc: 40 op: STARTLINE (58)

    /** datetime.e:589			return now()*/
    // SubProg new pc: 42 op: STARTLINE (58)

    /** datetime.e:533		return from_date(date())*/
    // SubProg new pc: 44 op: DATE (69)
    DeRefi(_now_1__tmp_at41_9330);
    _now_1__tmp_at41_9330 = Date();
    // SubProg new pc: 46 op: PROC (27)
    RefDS(_now_1__tmp_at41_9330);
    _0 = _now_inlined_now_at_41_9329;
    _now_inlined_now_at_41_9329 = _17from_date(_now_1__tmp_at41_9330);
    DeRef(_0);
    // SubProg new pc: 50 op: NOP1 (159)
    // SubProg new pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-now from new @ 41

// block var now_1__tmp_at41_9330
    DeRefi(_now_1__tmp_at41_9330);
    _now_1__tmp_at41_9330 = NOVALUE;
    // SubProg new pc: 53 op: RETURNF (28)

// Exiting block BLOCK: new

// block var year_9317

// block var month_9318

// block var day_9319

// block var hour_9320

// block var minute_9321

// block var second_9322
    DeRef(_second_9322);

// block var d_9323
    DeRef(_d_9323);
    return _now_inlined_now_at_41_9329;
    // SubProg new pc: 57 op: ELSE (23)
    goto L2; // [57] 67
    // SubProg new pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 9315 op: 159
    // SubProg new pc: 60 op: STARTLINE (58)

    /** datetime.e:591			return d*/
    // SubProg new pc: 62 op: RETURNF (28)

// Exiting block BLOCK: new

// block var year_9317

// block var month_9318

// block var day_9319

// block var hour_9320

// block var minute_9321

// block var second_9322
    DeRef(_second_9322);
    return _d_9323;
    // SubProg new pc: 66 op: NOP1 (159)
L2: // addr: 67 pc: 66 sub: 9315 op: 159
    // SubProg new pc: 67 op: BADRETURNF (43)
    ;
}



// 0x9B014B1F
