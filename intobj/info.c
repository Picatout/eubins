// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _32arch_bits()
{
    object _6907 = NOVALUE; // 12635 6907
    object _6906 = NOVALUE; // 12634 6906
    object _6905 = NOVALUE; // 12633 6905
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg arch_bits pc: 1 op: STARTLINE (58)

    /** info.e:72		return sprintf( "%d-bit", 8 * sizeof( C_POINTER ) )*/
    // SubProg arch_bits pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg arch_bits pc: 5 op: SIZEOF (217)
    _6905 = eu_sizeof( 50331649 );
    // SubProg arch_bits pc: 8 op: MULTIPLY (13)
    if (_6905 <= INT15){
        _6906 = 8 * _6905;
    }
    else{
        _6906 = NewDouble(8 * (eudouble)_6905);
    }
    _6905 = NOVALUE;
    // SubProg arch_bits pc: 12 op: SPRINTF (53)
    _6907 = EPrintf(-9999999, _6904, _6906);
    DeRef(_6906);
    _6906 = NOVALUE;
    // SubProg arch_bits pc: 16 op: RETURNF (28)

// Exiting block BLOCK: arch_bits
    return _6907;
    // SubProg arch_bits pc: 20 op: BADRETURNF (43)
    ;
}


object _32version_major()
{
    object _6916 = NOVALUE; // 12648 6916
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_major pc: 1 op: STARTLINE (58)

    /** info.e:100		return version_info[MAJ_VER]*/
    // SubProg version_major pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_major pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6916 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_major pc: 9 op: RETURNF (28)
    Ref(_6916);

// Exiting block BLOCK: version_major
    return _6916;
    // SubProg version_major pc: 13 op: BADRETURNF (43)
    ;
}


object _32version_minor()
{
    object _6917 = NOVALUE; // 12651 6917
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_minor pc: 1 op: STARTLINE (58)

    /** info.e:112		return version_info[MIN_VER]*/
    // SubProg version_minor pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_minor pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6917 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_minor pc: 9 op: RETURNF (28)
    Ref(_6917);

// Exiting block BLOCK: version_minor
    return _6917;
    // SubProg version_minor pc: 13 op: BADRETURNF (43)
    ;
}


object _32version_patch()
{
    object _6918 = NOVALUE; // 12654 6918
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_patch pc: 1 op: STARTLINE (58)

    /** info.e:124		return version_info[PAT_VER]*/
    // SubProg version_patch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_patch pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6918 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_patch pc: 9 op: RETURNF (28)
    Ref(_6918);

// Exiting block BLOCK: version_patch
    return _6918;
    // SubProg version_patch pc: 13 op: BADRETURNF (43)
    ;
}


object _32version_node(object _full_12657)
{
    object _6925 = NOVALUE; // 12665 6925
    object _6924 = NOVALUE; // 12664 6924
    object _6923 = NOVALUE; // 12663 6923
    object _6922 = NOVALUE; // 12662 6922
    object _6921 = NOVALUE; // 12661 6921
    object _6920 = NOVALUE; // 12660 6920
// skipping _6919  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_node pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_node pc: 3 op: STARTLINE (58)

    /** info.e:141		if full or length(version_info[NODE]) < 12 then*/
    // SubProg version_node pc: 5 op: SC1_OR_IF (147)
    if (0 != 0) {
        goto L1; // [5] 27
    }
    // SubProg version_node pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6920 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_6920)){
            _6921 = SEQ_PTR(_6920)->length;
    }
    else {
        _6921 = 1;
    }
    _6920 = NOVALUE;
    // SubProg version_node pc: 18 op: LESS (1)
    _6922 = (_6921 < 12);
    _6921 = NOVALUE;
    // SubProg version_node pc: 22 op: NOP1 (159)
    // SubProg version_node pc: 23 op: IF (20)
    if (_6922 == 0)
    {
        DeRef(_6922);
        _6922 = NOVALUE;
        goto L2; // [23] 40
    }
    else{
        DeRef(_6922);
        _6922 = NOVALUE;
    }
    // SubProg version_node pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 12655 op: 159
    // SubProg version_node pc: 27 op: STARTLINE (58)

    /** info.e:142			return version_info[NODE]*/
    // SubProg version_node pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6923 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 35 op: RETURNF (28)
    Ref(_6923);

// Exiting block BLOCK: version_node

// block var full_12657
    _6920 = NOVALUE;
    return _6923;
    // SubProg version_node pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 12655 op: 159
    // SubProg version_node pc: 40 op: STARTLINE (58)

    /** info.e:145		return version_info[NODE][1..12]*/
    // SubProg version_node pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6924 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 48 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6925;
    RHS_Slice(_6924, 1, 12);
    _6924 = NOVALUE;
    // SubProg version_node pc: 53 op: RETURNF (28)

// Exiting block BLOCK: version_node

// block var full_12657
    _6923 = NOVALUE;
    _6920 = NOVALUE;
    return _6925;
    // SubProg version_node pc: 57 op: BADRETURNF (43)
    ;
}


object _32version_date(object _full_12671)
{
    object _6934 = NOVALUE; // 12680 6934
    object _6933 = NOVALUE; // 12679 6933
    object _6932 = NOVALUE; // 12678 6932
    object _6931 = NOVALUE; // 12677 6931
    object _6930 = NOVALUE; // 12676 6930
    object _6929 = NOVALUE; // 12675 6929
// skipping _6928  name type: 0
    object _6927 = NOVALUE; // 12673 6927
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_date pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_date pc: 3 op: STARTLINE (58)

    /** info.e:181		if full or is_developmental or length(version_info[REVISION_DATE]) < 10 then*/
    // SubProg version_date pc: 5 op: SC1_OR (143)
    if (_full_12671 != 0) {
        _6927 = 1;
        goto L1; // [5] 15
    }
    // SubProg version_date pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 11 op: SC2_OR (144)
    _6927 = (_32is_developmental_12620 != 0);
    // SubProg version_date pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 12669 op: 159
    // SubProg version_date pc: 15 op: SC1_OR_IF (147)
    if (_6927 != 0) {
        goto L2; // [15] 37
    }
    // SubProg version_date pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6929 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_6929)){
            _6930 = SEQ_PTR(_6929)->length;
    }
    else {
        _6930 = 1;
    }
    _6929 = NOVALUE;
    // SubProg version_date pc: 28 op: LESS (1)
    _6931 = (_6930 < 10);
    _6930 = NOVALUE;
    // SubProg version_date pc: 32 op: NOP1 (159)
    // SubProg version_date pc: 33 op: IF (20)
    if (_6931 == 0)
    {
        DeRef(_6931);
        _6931 = NOVALUE;
        goto L3; // [33] 50
    }
    else{
        DeRef(_6931);
        _6931 = NOVALUE;
    }
    // SubProg version_date pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 12669 op: 159
    // SubProg version_date pc: 37 op: STARTLINE (58)

    /** info.e:182			return version_info[REVISION_DATE]*/
    // SubProg version_date pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6932 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 45 op: RETURNF (28)
    Ref(_6932);

// Exiting block BLOCK: version_date

// block var full_12671
    _6929 = NOVALUE;
    return _6932;
    // SubProg version_date pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 12669 op: 159
    // SubProg version_date pc: 50 op: STARTLINE (58)

    /** info.e:185		return version_info[REVISION_DATE][1..10]*/
    // SubProg version_date pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6933 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 58 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6934;
    RHS_Slice(_6933, 1, 10);
    _6933 = NOVALUE;
    // SubProg version_date pc: 63 op: RETURNF (28)

// Exiting block BLOCK: version_date

// block var full_12671
    _6932 = NOVALUE;
    _6929 = NOVALUE;
    return _6934;
    // SubProg version_date pc: 67 op: BADRETURNF (43)
    ;
}


object _32version_string(object _full_12686)
{
    object _version_revision_inlined_version_revision_at_41_12695 = NOVALUE;
    object _6954 = NOVALUE; // 12709 6954
    object _6953 = NOVALUE; // 12708 6953
    object _6952 = NOVALUE; // 12707 6952
    object _6951 = NOVALUE; // 12706 6951
    object _6950 = NOVALUE; // 12705 6950
    object _6949 = NOVALUE; // 12704 6949
    object _6948 = NOVALUE; // 12703 6948
    object _6947 = NOVALUE; // 12702 6947
    object _6945 = NOVALUE; // 12699 6945
    object _6944 = NOVALUE; // 12698 6944
    object _6943 = NOVALUE; // 12697 6943
    object _6942 = NOVALUE; // 12696 6942
    object _6941 = NOVALUE; // 12693 6941
    object _6940 = NOVALUE; // 12692 6940
    object _6939 = NOVALUE; // 12691 6939
    object _6938 = NOVALUE; // 12690 6938
// skipping _6936  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_string pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_string pc: 3 op: STARTLINE (58)

    /** info.e:225		if full or is_developmental then*/
    // SubProg version_string pc: 5 op: SC1_OR_IF (147)
    if (0 != 0) {
        goto L1; // [5] 16
    }
    // SubProg version_string pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 11 op: NOP1 (159)
    // SubProg version_string pc: 12 op: IF (20)
    if (_32is_developmental_12620 == 0)
    {
        goto L2; // [12] 80
    }
    else{
    }
    // SubProg version_string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 12684 op: 159
    // SubProg version_string pc: 16 op: STARTLINE (58)

    /** info.e:226			return sprintf("%d.%d.%d %s (%d:%s, %s)", {*/
    // SubProg version_string pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6938 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_string pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6939 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6940 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_string pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6941 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg version_string pc: 42 op: STARTLINE (58)

    /** info.e:157		return version_info[REVISION]*/
    // SubProg version_string pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 46 op: RHS_SUBS_CHECK (92)
    DeRef(_version_revision_inlined_version_revision_at_41_12695);
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _version_revision_inlined_version_revision_at_41_12695 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_41_12695);
    // SubProg version_string pc: 50 op: NOP1 (159)
    // SubProg version_string pc: 51 op: PROC (27)
    _6942 = _32version_node(0);
    // SubProg version_string pc: 55 op: PROC (27)
    _6943 = _32version_date(_full_12686);
    // SubProg version_string pc: 59 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6938);
    ((intptr_t*)_2)[1] = _6938;
    Ref(_6939);
    ((intptr_t*)_2)[2] = _6939;
    Ref(_6940);
    ((intptr_t*)_2)[3] = _6940;
    Ref(_6941);
    ((intptr_t*)_2)[4] = _6941;
    Ref(_version_revision_inlined_version_revision_at_41_12695);
    ((intptr_t*)_2)[5] = _version_revision_inlined_version_revision_at_41_12695;
    ((intptr_t*)_2)[6] = _6942;
    ((intptr_t*)_2)[7] = _6943;
    _6944 = MAKE_SEQ(_1);
    _6943 = NOVALUE;
    _6942 = NOVALUE;
    _6941 = NOVALUE;
    _6940 = NOVALUE;
    _6939 = NOVALUE;
    _6938 = NOVALUE;
    // SubProg version_string pc: 69 op: SPRINTF (53)
    _6945 = EPrintf(-9999999, _6937, _6944);
    DeRefDS(_6944);
    _6944 = NOVALUE;
    // SubProg version_string pc: 73 op: RETURNF (28)

// Exiting block BLOCK: version_string

// block var full_12686
    return _6945;
    // SubProg version_string pc: 77 op: ELSE (23)
    goto L3; // [77] 132
    // SubProg version_string pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 12684 op: 159
    // SubProg version_string pc: 80 op: STARTLINE (58)

    /** info.e:236			return sprintf("%d.%d.%d %s (%s, %s)", {*/
    // SubProg version_string pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6947 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_string pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 90 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6948 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_string pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6949 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_string pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12618);
    _6950 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg version_string pc: 106 op: PROC (27)
    _6951 = _32version_node(0);
    // SubProg version_string pc: 110 op: PROC (27)
    _6952 = _32version_date(_full_12686);
    // SubProg version_string pc: 114 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6947);
    ((intptr_t*)_2)[1] = _6947;
    Ref(_6948);
    ((intptr_t*)_2)[2] = _6948;
    Ref(_6949);
    ((intptr_t*)_2)[3] = _6949;
    Ref(_6950);
    ((intptr_t*)_2)[4] = _6950;
    ((intptr_t*)_2)[5] = _6951;
    ((intptr_t*)_2)[6] = _6952;
    _6953 = MAKE_SEQ(_1);
    _6952 = NOVALUE;
    _6951 = NOVALUE;
    _6950 = NOVALUE;
    _6949 = NOVALUE;
    _6948 = NOVALUE;
    _6947 = NOVALUE;
    // SubProg version_string pc: 123 op: SPRINTF (53)
    _6954 = EPrintf(-9999999, _6946, _6953);
    DeRefDS(_6953);
    _6953 = NOVALUE;
    // SubProg version_string pc: 127 op: RETURNF (28)

// Exiting block BLOCK: version_string

// block var full_12686
    DeRef(_6945);
    _6945 = NOVALUE;
    return _6954;
    // SubProg version_string pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 12684 op: 159
    // SubProg version_string pc: 132 op: BADRETURNF (43)
    ;
}


object _32version_string_long(object _full_12717)
{
    object _platform_name_inlined_platform_name_at_8_12721 = NOVALUE;
    object _6961 = NOVALUE; // 12723 6961
    object _6960 = NOVALUE; // 12722 6960
    object _6958 = NOVALUE; // 12718 6958
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_string_long pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_string_long pc: 3 op: STARTLINE (58)

    /** info.e:284		return version_string(full) & " for " & platform_name() & " " & arch_bits()*/
    // SubProg version_string_long pc: 5 op: PROC (27)
    _6958 = _32version_string(0);
    // SubProg version_string_long pc: 9 op: STARTLINE (58)

    /** info.e:48		ifdef WINDOWS then*/
    // SubProg version_string_long pc: 11 op: STARTLINE (58)

    /** info.e:51			return "Linux"*/
    // SubProg version_string_long pc: 13 op: ASSIGN (18)
    RefDS(_6714);
    DeRefi(_platform_name_inlined_platform_name_at_8_12721);
    _platform_name_inlined_platform_name_at_8_12721 = _6714;
    // SubProg version_string_long pc: 16 op: NOP1 (159)
    // SubProg version_string_long pc: 17 op: PROC (27)
    _6960 = _32arch_bits();
    // SubProg version_string_long pc: 20 op: CONCAT_N (157)
    {
        object concat_list[5];

        concat_list[0] = _6960;
        concat_list[1] = _2393;
        concat_list[2] = _platform_name_inlined_platform_name_at_8_12721;
        concat_list[3] = _6959;
        concat_list[4] = _6958;
        Concat_N((object_ptr)&_6961, concat_list, 5);
    }
    DeRef(_6960);
    _6960 = NOVALUE;
    DeRef(_6958);
    _6958 = NOVALUE;
    // SubProg version_string_long pc: 28 op: RETURNF (28)

// Exiting block BLOCK: version_string_long

// block var full_12717
    return _6961;
    // SubProg version_string_long pc: 32 op: BADRETURNF (43)
    ;
}


object _32all_copyrights()
{
    object _pcre_copyright_inlined_pcre_copyright_at_19_12743 = NOVALUE;
    object _euphoria_copyright_2__tmp_at2_12741 = NOVALUE;
    object _euphoria_copyright_1__tmp_at2_12740 = NOVALUE;
    object _euphoria_copyright_inlined_euphoria_copyright_at_2_12739 = NOVALUE;
    object _6970 = NOVALUE; // 12744 6970
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg all_copyrights pc: 1 op: STARTLINE (58)

    /** info.e:355		return {*/
    // SubProg all_copyrights pc: 3 op: STARTLINE (58)

    /** info.e:309		return {*/
    // SubProg all_copyrights pc: 5 op: PROC (27)
    _0 = _euphoria_copyright_1__tmp_at2_12740;
    _euphoria_copyright_1__tmp_at2_12740 = _32version_string_long(0);
    DeRef(_0);
    // SubProg all_copyrights pc: 9 op: CONCAT (15)
    if (IS_SEQUENCE(_6962) && IS_ATOM(_euphoria_copyright_1__tmp_at2_12740)) {
        Ref(_euphoria_copyright_1__tmp_at2_12740);
        Append(&_euphoria_copyright_2__tmp_at2_12741, _6962, _euphoria_copyright_1__tmp_at2_12740);
    }
    else if (IS_ATOM(_6962) && IS_SEQUENCE(_euphoria_copyright_1__tmp_at2_12740)) {
    }
    else {
        Concat((object_ptr)&_euphoria_copyright_2__tmp_at2_12741, _6962, _euphoria_copyright_1__tmp_at2_12740);
    }
    // SubProg all_copyrights pc: 13 op: RIGHT_BRACE_2 (85)
    RefDS(_6965);
    RefDS(_euphoria_copyright_2__tmp_at2_12741);
    DeRef(_euphoria_copyright_inlined_euphoria_copyright_at_2_12739);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_2__tmp_at2_12741;
    ((intptr_t *)_2)[2] = _6965;
    _euphoria_copyright_inlined_euphoria_copyright_at_2_12739 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 17 op: NOP1 (159)
    // SubProg all_copyrights pc: 18 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-euphoria_copyright from all_copyrights @ 2

// block var euphoria_copyright_1__tmp_at2_12740
    DeRef(_euphoria_copyright_1__tmp_at2_12740);
    _euphoria_copyright_1__tmp_at2_12740 = NOVALUE;

// block var euphoria_copyright_2__tmp_at2_12741
    DeRef(_euphoria_copyright_2__tmp_at2_12741);
    _euphoria_copyright_2__tmp_at2_12741 = NOVALUE;
    // SubProg all_copyrights pc: 20 op: STARTLINE (58)

    /** info.e:331		return {*/
    // SubProg all_copyrights pc: 22 op: RIGHT_BRACE_2 (85)
    RefDS(_6968);
    RefDS(_6967);
    DeRef(_pcre_copyright_inlined_pcre_copyright_at_19_12743);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6967;
    ((intptr_t *)_2)[2] = _6968;
    _pcre_copyright_inlined_pcre_copyright_at_19_12743 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 26 op: NOP1 (159)
    // SubProg all_copyrights pc: 27 op: RIGHT_BRACE_2 (85)
    RefDS(_pcre_copyright_inlined_pcre_copyright_at_19_12743);
    RefDS(_euphoria_copyright_inlined_euphoria_copyright_at_2_12739);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_inlined_euphoria_copyright_at_2_12739;
    ((intptr_t *)_2)[2] = _pcre_copyright_inlined_pcre_copyright_at_19_12743;
    _6970 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 31 op: RETURNF (28)

// Exiting block BLOCK: all_copyrights
    return _6970;
    // SubProg all_copyrights pc: 35 op: BADRETURNF (43)
    ;
}



// 0xD595B7FA
