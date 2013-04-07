// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _33arch_bits()
{
    object _6759 = NOVALUE; // 12074 6759
    object _6758 = NOVALUE; // 12073 6758
    object _6757 = NOVALUE; // 12072 6757
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg arch_bits pc: 1 op: STARTLINE (58)

    /** info.e:72		return sprintf( "%d-bit", 8 * sizeof( C_POINTER ) )*/
    // SubProg arch_bits pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg arch_bits pc: 5 op: SIZEOF (217)
    _6757 = eu_sizeof( 50331649 );
    // SubProg arch_bits pc: 8 op: MULTIPLY (13)
    if (_6757 <= INT15){
        _6758 = 8 * _6757;
    }
    else{
        _6758 = NewDouble(8 * (eudouble)_6757);
    }
    _6757 = NOVALUE;
    // SubProg arch_bits pc: 12 op: SPRINTF (53)
    _6759 = EPrintf(-9999999, _6756, _6758);
    DeRef(_6758);
    _6758 = NOVALUE;
    // SubProg arch_bits pc: 16 op: RETURNF (28)

// Exiting block BLOCK: arch_bits
    return _6759;
    // SubProg arch_bits pc: 20 op: BADRETURNF (43)
    ;
}


object _33version_major()
{
    object _6768 = NOVALUE; // 12087 6768
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_major pc: 1 op: STARTLINE (58)

    /** info.e:100		return version_info[MAJ_VER]*/
    // SubProg version_major pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_major pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6768 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_major pc: 9 op: RETURNF (28)
    Ref(_6768);

// Exiting block BLOCK: version_major
    return _6768;
    // SubProg version_major pc: 13 op: BADRETURNF (43)
    ;
}


object _33version_minor()
{
    object _6769 = NOVALUE; // 12090 6769
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_minor pc: 1 op: STARTLINE (58)

    /** info.e:112		return version_info[MIN_VER]*/
    // SubProg version_minor pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_minor pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6769 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_minor pc: 9 op: RETURNF (28)
    Ref(_6769);

// Exiting block BLOCK: version_minor
    return _6769;
    // SubProg version_minor pc: 13 op: BADRETURNF (43)
    ;
}


object _33version_patch()
{
    object _6770 = NOVALUE; // 12093 6770
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_patch pc: 1 op: STARTLINE (58)

    /** info.e:124		return version_info[PAT_VER]*/
    // SubProg version_patch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_patch pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6770 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_patch pc: 9 op: RETURNF (28)
    Ref(_6770);

// Exiting block BLOCK: version_patch
    return _6770;
    // SubProg version_patch pc: 13 op: BADRETURNF (43)
    ;
}


object _33version_node(object _full_12096)
{
    object _6777 = NOVALUE; // 12104 6777
    object _6776 = NOVALUE; // 12103 6776
    object _6775 = NOVALUE; // 12102 6775
    object _6774 = NOVALUE; // 12101 6774
    object _6773 = NOVALUE; // 12100 6773
    object _6772 = NOVALUE; // 12099 6772
// skipping _6771  name type: 0
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
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6772 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_6772)){
            _6773 = SEQ_PTR(_6772)->length;
    }
    else {
        _6773 = 1;
    }
    _6772 = NOVALUE;
    // SubProg version_node pc: 18 op: LESS (1)
    _6774 = (_6773 < 12);
    _6773 = NOVALUE;
    // SubProg version_node pc: 22 op: NOP1 (159)
    // SubProg version_node pc: 23 op: IF (20)
    if (_6774 == 0)
    {
        DeRef(_6774);
        _6774 = NOVALUE;
        goto L2; // [23] 40
    }
    else{
        DeRef(_6774);
        _6774 = NOVALUE;
    }
    // SubProg version_node pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 12094 op: 159
    // SubProg version_node pc: 27 op: STARTLINE (58)

    /** info.e:142			return version_info[NODE]*/
    // SubProg version_node pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6775 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 35 op: RETURNF (28)
    Ref(_6775);

// Exiting block BLOCK: version_node

// block var full_12096
    _6772 = NOVALUE;
    return _6775;
    // SubProg version_node pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 12094 op: 159
    // SubProg version_node pc: 40 op: STARTLINE (58)

    /** info.e:145		return version_info[NODE][1..12]*/
    // SubProg version_node pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6776 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 48 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6777;
    RHS_Slice(_6776, 1, 12);
    _6776 = NOVALUE;
    // SubProg version_node pc: 53 op: RETURNF (28)

// Exiting block BLOCK: version_node

// block var full_12096
    _6775 = NOVALUE;
    _6772 = NOVALUE;
    return _6777;
    // SubProg version_node pc: 57 op: BADRETURNF (43)
    ;
}


object _33version_date(object _full_12110)
{
    object _6786 = NOVALUE; // 12119 6786
    object _6785 = NOVALUE; // 12118 6785
    object _6784 = NOVALUE; // 12117 6784
    object _6783 = NOVALUE; // 12116 6783
    object _6782 = NOVALUE; // 12115 6782
    object _6781 = NOVALUE; // 12114 6781
// skipping _6780  name type: 0
    object _6779 = NOVALUE; // 12112 6779
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_date pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_date pc: 3 op: STARTLINE (58)

    /** info.e:181		if full or is_developmental or length(version_info[REVISION_DATE]) < 10 then*/
    // SubProg version_date pc: 5 op: SC1_OR (143)
    if (_full_12110 != 0) {
        _6779 = 1;
        goto L1; // [5] 15
    }
    // SubProg version_date pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 11 op: SC2_OR (144)
    _6779 = (_33is_developmental_12053 != 0);
    // SubProg version_date pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 12108 op: 159
    // SubProg version_date pc: 15 op: SC1_OR_IF (147)
    if (_6779 != 0) {
        goto L2; // [15] 37
    }
    // SubProg version_date pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6781 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_6781)){
            _6782 = SEQ_PTR(_6781)->length;
    }
    else {
        _6782 = 1;
    }
    _6781 = NOVALUE;
    // SubProg version_date pc: 28 op: LESS (1)
    _6783 = (_6782 < 10);
    _6782 = NOVALUE;
    // SubProg version_date pc: 32 op: NOP1 (159)
    // SubProg version_date pc: 33 op: IF (20)
    if (_6783 == 0)
    {
        DeRef(_6783);
        _6783 = NOVALUE;
        goto L3; // [33] 50
    }
    else{
        DeRef(_6783);
        _6783 = NOVALUE;
    }
    // SubProg version_date pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 12108 op: 159
    // SubProg version_date pc: 37 op: STARTLINE (58)

    /** info.e:182			return version_info[REVISION_DATE]*/
    // SubProg version_date pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6784 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 45 op: RETURNF (28)
    Ref(_6784);

// Exiting block BLOCK: version_date

// block var full_12110
    _6781 = NOVALUE;
    return _6784;
    // SubProg version_date pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 12108 op: 159
    // SubProg version_date pc: 50 op: STARTLINE (58)

    /** info.e:185		return version_info[REVISION_DATE][1..10]*/
    // SubProg version_date pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6785 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 58 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6786;
    RHS_Slice(_6785, 1, 10);
    _6785 = NOVALUE;
    // SubProg version_date pc: 63 op: RETURNF (28)

// Exiting block BLOCK: version_date

// block var full_12110
    _6781 = NOVALUE;
    _6784 = NOVALUE;
    return _6786;
    // SubProg version_date pc: 67 op: BADRETURNF (43)
    ;
}


object _33version_string(object _full_12125)
{
    object _version_revision_inlined_version_revision_at_41_12134 = NOVALUE;
    object _6806 = NOVALUE; // 12148 6806
    object _6805 = NOVALUE; // 12147 6805
    object _6804 = NOVALUE; // 12146 6804
    object _6803 = NOVALUE; // 12145 6803
    object _6802 = NOVALUE; // 12144 6802
    object _6801 = NOVALUE; // 12143 6801
    object _6800 = NOVALUE; // 12142 6800
    object _6799 = NOVALUE; // 12141 6799
    object _6797 = NOVALUE; // 12138 6797
    object _6796 = NOVALUE; // 12137 6796
    object _6795 = NOVALUE; // 12136 6795
    object _6794 = NOVALUE; // 12135 6794
    object _6793 = NOVALUE; // 12132 6793
    object _6792 = NOVALUE; // 12131 6792
    object _6791 = NOVALUE; // 12130 6791
    object _6790 = NOVALUE; // 12129 6790
// skipping _6788  name type: 0
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
    if (_33is_developmental_12053 == 0)
    {
        goto L2; // [12] 80
    }
    else{
    }
    // SubProg version_string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 12123 op: 159
    // SubProg version_string pc: 16 op: STARTLINE (58)

    /** info.e:226			return sprintf("%d.%d.%d %s (%d:%s, %s)", {*/
    // SubProg version_string pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6790 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_string pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6791 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6792 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_string pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6793 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg version_string pc: 42 op: STARTLINE (58)

    /** info.e:157		return version_info[REVISION]*/
    // SubProg version_string pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 46 op: RHS_SUBS_CHECK (92)
    DeRef(_version_revision_inlined_version_revision_at_41_12134);
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _version_revision_inlined_version_revision_at_41_12134 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_41_12134);
    // SubProg version_string pc: 50 op: NOP1 (159)
    // SubProg version_string pc: 51 op: PROC (27)
    _6794 = _33version_node(0);
    // SubProg version_string pc: 55 op: PROC (27)
    _6795 = _33version_date(_full_12125);
    // SubProg version_string pc: 59 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6790);
    ((intptr_t*)_2)[1] = _6790;
    Ref(_6791);
    ((intptr_t*)_2)[2] = _6791;
    Ref(_6792);
    ((intptr_t*)_2)[3] = _6792;
    Ref(_6793);
    ((intptr_t*)_2)[4] = _6793;
    Ref(_version_revision_inlined_version_revision_at_41_12134);
    ((intptr_t*)_2)[5] = _version_revision_inlined_version_revision_at_41_12134;
    ((intptr_t*)_2)[6] = _6794;
    ((intptr_t*)_2)[7] = _6795;
    _6796 = MAKE_SEQ(_1);
    _6795 = NOVALUE;
    _6794 = NOVALUE;
    _6793 = NOVALUE;
    _6792 = NOVALUE;
    _6791 = NOVALUE;
    _6790 = NOVALUE;
    // SubProg version_string pc: 69 op: SPRINTF (53)
    _6797 = EPrintf(-9999999, _6789, _6796);
    DeRefDS(_6796);
    _6796 = NOVALUE;
    // SubProg version_string pc: 73 op: RETURNF (28)

// Exiting block BLOCK: version_string

// block var full_12125
    return _6797;
    // SubProg version_string pc: 77 op: ELSE (23)
    goto L3; // [77] 132
    // SubProg version_string pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 12123 op: 159
    // SubProg version_string pc: 80 op: STARTLINE (58)

    /** info.e:236			return sprintf("%d.%d.%d %s (%s, %s)", {*/
    // SubProg version_string pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6799 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_string pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 90 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6800 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_string pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6801 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_string pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_33version_info_12051);
    _6802 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg version_string pc: 106 op: PROC (27)
    _6803 = _33version_node(0);
    // SubProg version_string pc: 110 op: PROC (27)
    _6804 = _33version_date(_full_12125);
    // SubProg version_string pc: 114 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6799);
    ((intptr_t*)_2)[1] = _6799;
    Ref(_6800);
    ((intptr_t*)_2)[2] = _6800;
    Ref(_6801);
    ((intptr_t*)_2)[3] = _6801;
    Ref(_6802);
    ((intptr_t*)_2)[4] = _6802;
    ((intptr_t*)_2)[5] = _6803;
    ((intptr_t*)_2)[6] = _6804;
    _6805 = MAKE_SEQ(_1);
    _6804 = NOVALUE;
    _6803 = NOVALUE;
    _6802 = NOVALUE;
    _6801 = NOVALUE;
    _6800 = NOVALUE;
    _6799 = NOVALUE;
    // SubProg version_string pc: 123 op: SPRINTF (53)
    _6806 = EPrintf(-9999999, _6798, _6805);
    DeRefDS(_6805);
    _6805 = NOVALUE;
    // SubProg version_string pc: 127 op: RETURNF (28)

// Exiting block BLOCK: version_string

// block var full_12125
    DeRef(_6797);
    _6797 = NOVALUE;
    return _6806;
    // SubProg version_string pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 12123 op: 159
    // SubProg version_string pc: 132 op: BADRETURNF (43)
    ;
}


object _33version_string_long(object _full_12156)
{
    object _platform_name_inlined_platform_name_at_8_12160 = NOVALUE;
    object _6813 = NOVALUE; // 12162 6813
    object _6812 = NOVALUE; // 12161 6812
    object _6810 = NOVALUE; // 12157 6810
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_string_long pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_string_long pc: 3 op: STARTLINE (58)

    /** info.e:284		return version_string(full) & " for " & platform_name() & " " & arch_bits()*/
    // SubProg version_string_long pc: 5 op: PROC (27)
    _6810 = _33version_string(0);
    // SubProg version_string_long pc: 9 op: STARTLINE (58)

    /** info.e:48		ifdef WINDOWS then*/
    // SubProg version_string_long pc: 11 op: STARTLINE (58)

    /** info.e:51			return "Linux"*/
    // SubProg version_string_long pc: 13 op: ASSIGN (18)
    RefDS(_6750);
    DeRefi(_platform_name_inlined_platform_name_at_8_12160);
    _platform_name_inlined_platform_name_at_8_12160 = _6750;
    // SubProg version_string_long pc: 16 op: NOP1 (159)
    // SubProg version_string_long pc: 17 op: PROC (27)
    _6812 = _33arch_bits();
    // SubProg version_string_long pc: 20 op: CONCAT_N (157)
    {
        object concat_list[5];

        concat_list[0] = _6812;
        concat_list[1] = _2736;
        concat_list[2] = _platform_name_inlined_platform_name_at_8_12160;
        concat_list[3] = _6811;
        concat_list[4] = _6810;
        Concat_N((object_ptr)&_6813, concat_list, 5);
    }
    DeRef(_6812);
    _6812 = NOVALUE;
    DeRef(_6810);
    _6810 = NOVALUE;
    // SubProg version_string_long pc: 28 op: RETURNF (28)

// Exiting block BLOCK: version_string_long

// block var full_12156
    return _6813;
    // SubProg version_string_long pc: 32 op: BADRETURNF (43)
    ;
}


object _33all_copyrights()
{
    object _pcre_copyright_inlined_pcre_copyright_at_19_12182 = NOVALUE;
    object _euphoria_copyright_2__tmp_at2_12180 = NOVALUE;
    object _euphoria_copyright_1__tmp_at2_12179 = NOVALUE;
    object _euphoria_copyright_inlined_euphoria_copyright_at_2_12178 = NOVALUE;
    object _6822 = NOVALUE; // 12183 6822
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg all_copyrights pc: 1 op: STARTLINE (58)

    /** info.e:355		return {*/
    // SubProg all_copyrights pc: 3 op: STARTLINE (58)

    /** info.e:309		return {*/
    // SubProg all_copyrights pc: 5 op: PROC (27)
    _0 = _euphoria_copyright_1__tmp_at2_12179;
    _euphoria_copyright_1__tmp_at2_12179 = _33version_string_long(0);
    DeRef(_0);
    // SubProg all_copyrights pc: 9 op: CONCAT (15)
    if (IS_SEQUENCE(_6814) && IS_ATOM(_euphoria_copyright_1__tmp_at2_12179)) {
        Ref(_euphoria_copyright_1__tmp_at2_12179);
        Append(&_euphoria_copyright_2__tmp_at2_12180, _6814, _euphoria_copyright_1__tmp_at2_12179);
    }
    else if (IS_ATOM(_6814) && IS_SEQUENCE(_euphoria_copyright_1__tmp_at2_12179)) {
    }
    else {
        Concat((object_ptr)&_euphoria_copyright_2__tmp_at2_12180, _6814, _euphoria_copyright_1__tmp_at2_12179);
    }
    // SubProg all_copyrights pc: 13 op: RIGHT_BRACE_2 (85)
    RefDS(_6817);
    RefDS(_euphoria_copyright_2__tmp_at2_12180);
    DeRef(_euphoria_copyright_inlined_euphoria_copyright_at_2_12178);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_2__tmp_at2_12180;
    ((intptr_t *)_2)[2] = _6817;
    _euphoria_copyright_inlined_euphoria_copyright_at_2_12178 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 17 op: NOP1 (159)
    // SubProg all_copyrights pc: 18 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-euphoria_copyright from all_copyrights @ 2

// block var euphoria_copyright_1__tmp_at2_12179
    DeRef(_euphoria_copyright_1__tmp_at2_12179);
    _euphoria_copyright_1__tmp_at2_12179 = NOVALUE;

// block var euphoria_copyright_2__tmp_at2_12180
    DeRef(_euphoria_copyright_2__tmp_at2_12180);
    _euphoria_copyright_2__tmp_at2_12180 = NOVALUE;
    // SubProg all_copyrights pc: 20 op: STARTLINE (58)

    /** info.e:331		return {*/
    // SubProg all_copyrights pc: 22 op: RIGHT_BRACE_2 (85)
    RefDS(_6820);
    RefDS(_6819);
    DeRef(_pcre_copyright_inlined_pcre_copyright_at_19_12182);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6819;
    ((intptr_t *)_2)[2] = _6820;
    _pcre_copyright_inlined_pcre_copyright_at_19_12182 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 26 op: NOP1 (159)
    // SubProg all_copyrights pc: 27 op: RIGHT_BRACE_2 (85)
    RefDS(_pcre_copyright_inlined_pcre_copyright_at_19_12182);
    RefDS(_euphoria_copyright_inlined_euphoria_copyright_at_2_12178);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_inlined_euphoria_copyright_at_2_12178;
    ((intptr_t *)_2)[2] = _pcre_copyright_inlined_pcre_copyright_at_19_12182;
    _6822 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 31 op: RETURNF (28)

// Exiting block BLOCK: all_copyrights
    return _6822;
    // SubProg all_copyrights pc: 35 op: BADRETURNF (43)
    ;
}



// 0x033D3BE3
