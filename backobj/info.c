// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _32arch_bits()
{
    object _6793 = NOVALUE; // 12143 6793
    object _6792 = NOVALUE; // 12142 6792
    object _6791 = NOVALUE; // 12141 6791
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg arch_bits pc: 1 op: STARTLINE (58)

    /** info.e:72		return sprintf( "%d-bit", 8 * sizeof( C_POINTER ) )*/
    // SubProg arch_bits pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg arch_bits pc: 5 op: SIZEOF (217)
    _6791 = eu_sizeof( 50331649 );
    // SubProg arch_bits pc: 8 op: MULTIPLY (13)
    if (_6791 <= INT15){
        _6792 = 8 * _6791;
    }
    else{
        _6792 = NewDouble(8 * (eudouble)_6791);
    }
    _6791 = NOVALUE;
    // SubProg arch_bits pc: 12 op: SPRINTF (53)
    _6793 = EPrintf(-9999999, _6790, _6792);
    DeRef(_6792);
    _6792 = NOVALUE;
    // SubProg arch_bits pc: 16 op: RETURNF (28)

// Exiting block BLOCK: arch_bits
    return _6793;
    // SubProg arch_bits pc: 20 op: BADRETURNF (43)
    ;
}


object _32version_node(object _full_12165)
{
    object _6811 = NOVALUE; // 12173 6811
    object _6810 = NOVALUE; // 12172 6810
    object _6809 = NOVALUE; // 12171 6809
    object _6808 = NOVALUE; // 12170 6808
    object _6807 = NOVALUE; // 12169 6807
    object _6806 = NOVALUE; // 12168 6806
// skipping _6805  name type: 0
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
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6806 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_6806)){
            _6807 = SEQ_PTR(_6806)->length;
    }
    else {
        _6807 = 1;
    }
    _6806 = NOVALUE;
    // SubProg version_node pc: 18 op: LESS (1)
    _6808 = (_6807 < 12);
    _6807 = NOVALUE;
    // SubProg version_node pc: 22 op: NOP1 (159)
    // SubProg version_node pc: 23 op: IF (20)
    if (_6808 == 0)
    {
        DeRef(_6808);
        _6808 = NOVALUE;
        goto L2; // [23] 40
    }
    else{
        DeRef(_6808);
        _6808 = NOVALUE;
    }
    // SubProg version_node pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 12163 op: 159
    // SubProg version_node pc: 27 op: STARTLINE (58)

    /** info.e:142			return version_info[NODE]*/
    // SubProg version_node pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6809 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 35 op: RETURNF (28)
    Ref(_6809);

// Exiting block BLOCK: version_node

// block var full_12165
    _6806 = NOVALUE;
    return _6809;
    // SubProg version_node pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 12163 op: 159
    // SubProg version_node pc: 40 op: STARTLINE (58)

    /** info.e:145		return version_info[NODE][1..12]*/
    // SubProg version_node pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_node pc: 44 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6810 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg version_node pc: 48 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6811;
    RHS_Slice(_6810, 1, 12);
    _6810 = NOVALUE;
    // SubProg version_node pc: 53 op: RETURNF (28)

// Exiting block BLOCK: version_node

// block var full_12165
    _6806 = NOVALUE;
    _6809 = NOVALUE;
    return _6811;
    // SubProg version_node pc: 57 op: BADRETURNF (43)
    ;
}


object _32version_date(object _full_12179)
{
    object _6820 = NOVALUE; // 12188 6820
    object _6819 = NOVALUE; // 12187 6819
    object _6818 = NOVALUE; // 12186 6818
    object _6817 = NOVALUE; // 12185 6817
    object _6816 = NOVALUE; // 12184 6816
    object _6815 = NOVALUE; // 12183 6815
// skipping _6814  name type: 0
    object _6813 = NOVALUE; // 12181 6813
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_date pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_date pc: 3 op: STARTLINE (58)

    /** info.e:181		if full or is_developmental or length(version_info[REVISION_DATE]) < 10 then*/
    // SubProg version_date pc: 5 op: SC1_OR (143)
    if (_full_12179 != 0) {
        _6813 = 1;
        goto L1; // [5] 15
    }
    // SubProg version_date pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 11 op: SC2_OR (144)
    _6813 = (_32is_developmental_12123 != 0);
    // SubProg version_date pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 12177 op: 159
    // SubProg version_date pc: 15 op: SC1_OR_IF (147)
    if (_6813 != 0) {
        goto L2; // [15] 37
    }
    // SubProg version_date pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6815 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_6815)){
            _6816 = SEQ_PTR(_6815)->length;
    }
    else {
        _6816 = 1;
    }
    _6815 = NOVALUE;
    // SubProg version_date pc: 28 op: LESS (1)
    _6817 = (_6816 < 10);
    _6816 = NOVALUE;
    // SubProg version_date pc: 32 op: NOP1 (159)
    // SubProg version_date pc: 33 op: IF (20)
    if (_6817 == 0)
    {
        DeRef(_6817);
        _6817 = NOVALUE;
        goto L3; // [33] 50
    }
    else{
        DeRef(_6817);
        _6817 = NOVALUE;
    }
    // SubProg version_date pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 12177 op: 159
    // SubProg version_date pc: 37 op: STARTLINE (58)

    /** info.e:182			return version_info[REVISION_DATE]*/
    // SubProg version_date pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6818 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 45 op: RETURNF (28)
    Ref(_6818);

// Exiting block BLOCK: version_date

// block var full_12179
    _6815 = NOVALUE;
    return _6818;
    // SubProg version_date pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 12177 op: 159
    // SubProg version_date pc: 50 op: STARTLINE (58)

    /** info.e:185		return version_info[REVISION_DATE][1..10]*/
    // SubProg version_date pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_date pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6819 = (object)*(((s1_ptr)_2)->base + 7);
    // SubProg version_date pc: 58 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_6820;
    RHS_Slice(_6819, 1, 10);
    _6819 = NOVALUE;
    // SubProg version_date pc: 63 op: RETURNF (28)

// Exiting block BLOCK: version_date

// block var full_12179
    _6818 = NOVALUE;
    _6815 = NOVALUE;
    return _6820;
    // SubProg version_date pc: 67 op: BADRETURNF (43)
    ;
}


object _32version_string(object _full_12194)
{
    object _version_revision_inlined_version_revision_at_41_12203 = NOVALUE;
    object _6840 = NOVALUE; // 12217 6840
    object _6839 = NOVALUE; // 12216 6839
    object _6838 = NOVALUE; // 12215 6838
    object _6837 = NOVALUE; // 12214 6837
    object _6836 = NOVALUE; // 12213 6836
    object _6835 = NOVALUE; // 12212 6835
    object _6834 = NOVALUE; // 12211 6834
    object _6833 = NOVALUE; // 12210 6833
    object _6831 = NOVALUE; // 12207 6831
    object _6830 = NOVALUE; // 12206 6830
    object _6829 = NOVALUE; // 12205 6829
    object _6828 = NOVALUE; // 12204 6828
    object _6827 = NOVALUE; // 12201 6827
    object _6826 = NOVALUE; // 12200 6826
    object _6825 = NOVALUE; // 12199 6825
    object _6824 = NOVALUE; // 12198 6824
// skipping _6822  name type: 0
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
    if (_32is_developmental_12123 == 0)
    {
        goto L2; // [12] 80
    }
    else{
    }
    // SubProg version_string pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 12192 op: 159
    // SubProg version_string pc: 16 op: STARTLINE (58)

    /** info.e:226			return sprintf("%d.%d.%d %s (%d:%s, %s)", {*/
    // SubProg version_string pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6824 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_string pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6825 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6826 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_string pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 38 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6827 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg version_string pc: 42 op: STARTLINE (58)

    /** info.e:157		return version_info[REVISION]*/
    // SubProg version_string pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 46 op: RHS_SUBS_CHECK (92)
    DeRef(_version_revision_inlined_version_revision_at_41_12203);
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _version_revision_inlined_version_revision_at_41_12203 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_41_12203);
    // SubProg version_string pc: 50 op: NOP1 (159)
    // SubProg version_string pc: 51 op: PROC (27)
    _6828 = _32version_node(0);
    // SubProg version_string pc: 55 op: PROC (27)
    _6829 = _32version_date(_full_12194);
    // SubProg version_string pc: 59 op: RIGHT_BRACE_N (31)
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6824);
    ((intptr_t*)_2)[1] = _6824;
    Ref(_6825);
    ((intptr_t*)_2)[2] = _6825;
    Ref(_6826);
    ((intptr_t*)_2)[3] = _6826;
    Ref(_6827);
    ((intptr_t*)_2)[4] = _6827;
    Ref(_version_revision_inlined_version_revision_at_41_12203);
    ((intptr_t*)_2)[5] = _version_revision_inlined_version_revision_at_41_12203;
    ((intptr_t*)_2)[6] = _6828;
    ((intptr_t*)_2)[7] = _6829;
    _6830 = MAKE_SEQ(_1);
    _6829 = NOVALUE;
    _6828 = NOVALUE;
    _6827 = NOVALUE;
    _6826 = NOVALUE;
    _6825 = NOVALUE;
    _6824 = NOVALUE;
    // SubProg version_string pc: 69 op: SPRINTF (53)
    _6831 = EPrintf(-9999999, _6823, _6830);
    DeRefDS(_6830);
    _6830 = NOVALUE;
    // SubProg version_string pc: 73 op: RETURNF (28)

// Exiting block BLOCK: version_string

// block var full_12194
    return _6831;
    // SubProg version_string pc: 77 op: ELSE (23)
    goto L3; // [77] 132
    // SubProg version_string pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 12192 op: 159
    // SubProg version_string pc: 80 op: STARTLINE (58)

    /** info.e:236			return sprintf("%d.%d.%d %s (%s, %s)", {*/
    // SubProg version_string pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6833 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg version_string pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 90 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6834 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg version_string pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6835 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg version_string pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg version_string pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32version_info_12121);
    _6836 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg version_string pc: 106 op: PROC (27)
    _6837 = _32version_node(0);
    // SubProg version_string pc: 110 op: PROC (27)
    _6838 = _32version_date(_full_12194);
    // SubProg version_string pc: 114 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6833);
    ((intptr_t*)_2)[1] = _6833;
    Ref(_6834);
    ((intptr_t*)_2)[2] = _6834;
    Ref(_6835);
    ((intptr_t*)_2)[3] = _6835;
    Ref(_6836);
    ((intptr_t*)_2)[4] = _6836;
    ((intptr_t*)_2)[5] = _6837;
    ((intptr_t*)_2)[6] = _6838;
    _6839 = MAKE_SEQ(_1);
    _6838 = NOVALUE;
    _6837 = NOVALUE;
    _6836 = NOVALUE;
    _6835 = NOVALUE;
    _6834 = NOVALUE;
    _6833 = NOVALUE;
    // SubProg version_string pc: 123 op: SPRINTF (53)
    _6840 = EPrintf(-9999999, _6832, _6839);
    DeRefDS(_6839);
    _6839 = NOVALUE;
    // SubProg version_string pc: 127 op: RETURNF (28)

// Exiting block BLOCK: version_string

// block var full_12194
    DeRef(_6831);
    _6831 = NOVALUE;
    return _6840;
    // SubProg version_string pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 12192 op: 159
    // SubProg version_string pc: 132 op: BADRETURNF (43)
    ;
}


object _32version_string_long(object _full_12225)
{
    object _platform_name_inlined_platform_name_at_8_12229 = NOVALUE;
    object _6847 = NOVALUE; // 12231 6847
    object _6846 = NOVALUE; // 12230 6846
    object _6844 = NOVALUE; // 12226 6844
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version_string_long pc: 1 op: INTEGER_CHECK (96)
    // SubProg version_string_long pc: 3 op: STARTLINE (58)

    /** info.e:284		return version_string(full) & " for " & platform_name() & " " & arch_bits()*/
    // SubProg version_string_long pc: 5 op: PROC (27)
    _6844 = _32version_string(0);
    // SubProg version_string_long pc: 9 op: STARTLINE (58)

    /** info.e:48		ifdef WINDOWS then*/
    // SubProg version_string_long pc: 11 op: STARTLINE (58)

    /** info.e:51			return "Linux"*/
    // SubProg version_string_long pc: 13 op: ASSIGN (18)
    RefDS(_6785);
    DeRefi(_platform_name_inlined_platform_name_at_8_12229);
    _platform_name_inlined_platform_name_at_8_12229 = _6785;
    // SubProg version_string_long pc: 16 op: NOP1 (159)
    // SubProg version_string_long pc: 17 op: PROC (27)
    _6846 = _32arch_bits();
    // SubProg version_string_long pc: 20 op: CONCAT_N (157)
    {
        object concat_list[5];

        concat_list[0] = _6846;
        concat_list[1] = _3434;
        concat_list[2] = _platform_name_inlined_platform_name_at_8_12229;
        concat_list[3] = _6845;
        concat_list[4] = _6844;
        Concat_N((object_ptr)&_6847, concat_list, 5);
    }
    DeRef(_6846);
    _6846 = NOVALUE;
    DeRef(_6844);
    _6844 = NOVALUE;
    // SubProg version_string_long pc: 28 op: RETURNF (28)

// Exiting block BLOCK: version_string_long

// block var full_12225
    return _6847;
    // SubProg version_string_long pc: 32 op: BADRETURNF (43)
    ;
}


object _32all_copyrights()
{
    object _pcre_copyright_inlined_pcre_copyright_at_19_12251 = NOVALUE;
    object _euphoria_copyright_2__tmp_at2_12249 = NOVALUE;
    object _euphoria_copyright_1__tmp_at2_12248 = NOVALUE;
    object _euphoria_copyright_inlined_euphoria_copyright_at_2_12247 = NOVALUE;
    object _6856 = NOVALUE; // 12252 6856
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg all_copyrights pc: 1 op: STARTLINE (58)

    /** info.e:355		return {*/
    // SubProg all_copyrights pc: 3 op: STARTLINE (58)

    /** info.e:309		return {*/
    // SubProg all_copyrights pc: 5 op: PROC (27)
    _0 = _euphoria_copyright_1__tmp_at2_12248;
    _euphoria_copyright_1__tmp_at2_12248 = _32version_string_long(0);
    DeRef(_0);
    // SubProg all_copyrights pc: 9 op: CONCAT (15)
    if (IS_SEQUENCE(_6848) && IS_ATOM(_euphoria_copyright_1__tmp_at2_12248)) {
        Ref(_euphoria_copyright_1__tmp_at2_12248);
        Append(&_euphoria_copyright_2__tmp_at2_12249, _6848, _euphoria_copyright_1__tmp_at2_12248);
    }
    else if (IS_ATOM(_6848) && IS_SEQUENCE(_euphoria_copyright_1__tmp_at2_12248)) {
    }
    else {
        Concat((object_ptr)&_euphoria_copyright_2__tmp_at2_12249, _6848, _euphoria_copyright_1__tmp_at2_12248);
    }
    // SubProg all_copyrights pc: 13 op: RIGHT_BRACE_2 (85)
    RefDS(_6851);
    RefDS(_euphoria_copyright_2__tmp_at2_12249);
    DeRef(_euphoria_copyright_inlined_euphoria_copyright_at_2_12247);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_2__tmp_at2_12249;
    ((intptr_t *)_2)[2] = _6851;
    _euphoria_copyright_inlined_euphoria_copyright_at_2_12247 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 17 op: NOP1 (159)
    // SubProg all_copyrights pc: 18 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-euphoria_copyright from all_copyrights @ 2

// block var euphoria_copyright_1__tmp_at2_12248
    DeRef(_euphoria_copyright_1__tmp_at2_12248);
    _euphoria_copyright_1__tmp_at2_12248 = NOVALUE;

// block var euphoria_copyright_2__tmp_at2_12249
    DeRef(_euphoria_copyright_2__tmp_at2_12249);
    _euphoria_copyright_2__tmp_at2_12249 = NOVALUE;
    // SubProg all_copyrights pc: 20 op: STARTLINE (58)

    /** info.e:331		return {*/
    // SubProg all_copyrights pc: 22 op: RIGHT_BRACE_2 (85)
    RefDS(_6854);
    RefDS(_6853);
    DeRef(_pcre_copyright_inlined_pcre_copyright_at_19_12251);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6853;
    ((intptr_t *)_2)[2] = _6854;
    _pcre_copyright_inlined_pcre_copyright_at_19_12251 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 26 op: NOP1 (159)
    // SubProg all_copyrights pc: 27 op: RIGHT_BRACE_2 (85)
    RefDS(_pcre_copyright_inlined_pcre_copyright_at_19_12251);
    RefDS(_euphoria_copyright_inlined_euphoria_copyright_at_2_12247);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_inlined_euphoria_copyright_at_2_12247;
    ((intptr_t *)_2)[2] = _pcre_copyright_inlined_pcre_copyright_at_19_12251;
    _6856 = MAKE_SEQ(_1);
    // SubProg all_copyrights pc: 31 op: RETURNF (28)

// Exiting block BLOCK: all_copyrights
    return _6856;
    // SubProg all_copyrights pc: 35 op: BADRETURNF (43)
    ;
}



// 0x70748AAC
