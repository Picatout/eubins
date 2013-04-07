// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _52new(object _pattern_21788, object _options_21789)
{
    object _12482 = NOVALUE; // 21794 12482
    object _12481 = NOVALUE; // 21793 12481
// skipping _12480  name type: 0
    object _12479 = NOVALUE; // 21791 12479
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** regex.e:723		if sequence(options) then */
    // SubProg new pc: 3 op: IS_A_SEQUENCE (68)
    _12479 = 0;
    // SubProg new pc: 6 op: IF (20)
    if (_12479 == 0)
    {
        _12479 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _12479 = NOVALUE;
    }
    // SubProg new pc: 9 op: STARTLINE (58)

    /** regex.e:724			options = math:or_all(options) */
    // SubProg new pc: 11 op: PROC (27)
    _options_21789 = _14or_all(_options_21789);
    // SubProg new pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 21785 op: 159
    // SubProg new pc: 16 op: STARTLINE (58)

    /** regex.e:730		return machine_func(M_PCRE_COMPILE, { pattern, options })*/
    // SubProg new pc: 18 op: RIGHT_BRACE_2 (85)
    Ref(_options_21789);
    Ref(_pattern_21788);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _pattern_21788;
    ((intptr_t *)_2)[2] = _options_21789;
    _12481 = MAKE_SEQ(_1);
    // SubProg new pc: 22 op: MACHINE_FUNC (111)
    _12482 = machine(68, _12481);
    DeRefDS(_12481);
    _12481 = NOVALUE;
    // SubProg new pc: 26 op: RETURNF (28)

// Exiting block BLOCK: new

// block var pattern_21788
    DeRefi(_pattern_21788);

// block var options_21789
    DeRef(_options_21789);
    return _12482;
    // SubProg new pc: 30 op: BADRETURNF (43)
    ;
}


object _52get_ovector_size(object _ex_21808, object _maxsize_21809)
{
    object _m_21810 = NOVALUE;
    object _12490 = NOVALUE; // 21815 12490
// skipping _12489  name type: 0
// skipping _12488  name type: 0
    object _12487 = NOVALUE; // 21811 12487
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_ovector_size pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_ovector_size pc: 3 op: STARTLINE (58)

    /** regex.e:804		integer m = machine_func(M_PCRE_GET_OVECTOR_SIZE, {ex})*/
    // SubProg get_ovector_size pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_ex_21808);
    ((intptr_t*)_2)[1] = _ex_21808;
    _12487 = MAKE_SEQ(_1);
    // SubProg get_ovector_size pc: 9 op: MACHINE_FUNC (111)
    _m_21810 = machine(97, _12487);
    DeRefDS(_12487);
    _12487 = NOVALUE;
    // SubProg get_ovector_size pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_m_21810)) {
        _1 = (object)(DBL_PTR(_m_21810)->dbl);
        DeRefDS(_m_21810);
        _m_21810 = _1;
    }
    // SubProg get_ovector_size pc: 15 op: STARTLINE (58)

    /** regex.e:805		if (m > maxsize) then*/
    // SubProg get_ovector_size pc: 17 op: GREATER_IFW_I (124)
    if (_m_21810 <= 30)
    goto L1; // [17] 28
    // SubProg get_ovector_size pc: 21 op: STARTLINE (58)

    /** regex.e:806			return maxsize*/
    // SubProg get_ovector_size pc: 23 op: RETURNF (28)

// Exiting block BLOCK: get_ovector_size

// block var ex_21808
    DeRef(_ex_21808);

// block var m_21810
    return 30;
    // SubProg get_ovector_size pc: 27 op: NOP1 (159)
L1: // addr: 28 pc: 27 sub: 21806 op: 159
    // SubProg get_ovector_size pc: 28 op: STARTLINE (58)

    /** regex.e:809		return m+1*/
    // SubProg get_ovector_size pc: 30 op: PLUS1 (93)
    _12490 = _m_21810 + 1;
    if (_12490 > MAXINT){
        _12490 = NewDouble((eudouble)_12490);
    }
    // SubProg get_ovector_size pc: 34 op: RETURNF (28)

// Exiting block BLOCK: get_ovector_size

// block var ex_21808
    DeRef(_ex_21808);

// block var maxsize_21809

// block var m_21810
    return _12490;
    // SubProg get_ovector_size pc: 38 op: BADRETURNF (43)
    ;
}


object _52find(object _re_21818, object _haystack_21820, object _from_21821, object _options_21822, object _size_21823)
{
    object _12497 = NOVALUE; // 21832 12497
    object _12496 = NOVALUE; // 21831 12496
    object _12495 = NOVALUE; // 21830 12495
// skipping _12494  name type: 0
// skipping _12493  name type: 0
    object _12492 = NOVALUE; // 21826 12492
// skipping _12491  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find pc: 1 op: INTEGER_CHECK (96)
    // SubProg find pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_size_21823)) {
        _1 = (object)(DBL_PTR(_size_21823)->dbl);
        DeRefDS(_size_21823);
        _size_21823 = _1;
    }
    // SubProg find pc: 5 op: STARTLINE (58)

    /** regex.e:872		if sequence(options) then */
    // SubProg find pc: 7 op: IS_A_SEQUENCE (68)
    _12492 = IS_SEQUENCE(_options_21822);
    // SubProg find pc: 10 op: IF (20)
    if (_12492 == 0)
    {
        _12492 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _12492 = NOVALUE;
    }
    // SubProg find pc: 13 op: STARTLINE (58)

    /** regex.e:873			options = math:or_all(options) */
    // SubProg find pc: 15 op: PROC (27)
    Ref(_options_21822);
    _0 = _options_21822;
    _options_21822 = _14or_all(_options_21822);
    DeRef(_0);
    // SubProg find pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 21816 op: 159
    // SubProg find pc: 20 op: STARTLINE (58)

    /** regex.e:876		if size < 0 then*/
    // SubProg find pc: 22 op: LESS_IFW_I (119)
    if (_size_21823 >= 0)
    goto L2; // [22] 32
    // SubProg find pc: 26 op: STARTLINE (58)

    /** regex.e:877			size = 0*/
    // SubProg find pc: 28 op: ASSIGN_I (113)
    _size_21823 = 0;
    // SubProg find pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 21816 op: 159
    // SubProg find pc: 32 op: STARTLINE (58)

    /** regex.e:880		return machine_func(M_PCRE_EXEC, { re, haystack, length(haystack), options, from, size })*/
    // SubProg find pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_haystack_21820)){
            _12495 = SEQ_PTR(_haystack_21820)->length;
    }
    else {
        _12495 = 1;
    }
    // SubProg find pc: 37 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_re_21818);
    ((intptr_t*)_2)[1] = _re_21818;
    Ref(_haystack_21820);
    ((intptr_t*)_2)[2] = _haystack_21820;
    ((intptr_t*)_2)[3] = _12495;
    Ref(_options_21822);
    ((intptr_t*)_2)[4] = _options_21822;
    ((intptr_t*)_2)[5] = _from_21821;
    ((intptr_t*)_2)[6] = _size_21823;
    _12496 = MAKE_SEQ(_1);
    _12495 = NOVALUE;
    // SubProg find pc: 46 op: MACHINE_FUNC (111)
    _12497 = machine(70, _12496);
    DeRefDS(_12496);
    _12496 = NOVALUE;
    // SubProg find pc: 50 op: RETURNF (28)

// Exiting block BLOCK: find

// block var re_21818
    DeRef(_re_21818);

// block var haystack_21820
    DeRef(_haystack_21820);

// block var from_21821

// block var options_21822
    DeRef(_options_21822);

// block var size_21823
    return _12497;
    // SubProg find pc: 54 op: BADRETURNF (43)
    ;
}


object _52matches(object _re_21898, object _haystack_21900, object _from_21901, object _options_21902)
{
    object _str_offsets_21906 = NOVALUE;
    object _match_data_21908 = NOVALUE;
    object _tmp_21918 = NOVALUE;
    object _12551 = NOVALUE; // 21934 12551
    object _12550 = NOVALUE; // 21933 12550
    object _12549 = NOVALUE; // 21932 12549
    object _12548 = NOVALUE; // 21931 12548
    object _12547 = NOVALUE; // 21930 12547
// skipping _12546  name type: 0
    object _12545 = NOVALUE; // 21927 12545
    object _12544 = NOVALUE; // 21926 12544
    object _12543 = NOVALUE; // 21925 12543
    object _12542 = NOVALUE; // 21924 12542
// skipping _12541  name type: 0
    object _12540 = NOVALUE; // 21921 12540
    object _12539 = NOVALUE; // 21920 12539
    object _12538 = NOVALUE; // 21917 12538
    object _12537 = NOVALUE; // 21914 12537
// skipping _12536  name type: 0
    object _12535 = NOVALUE; // 21911 12535
    object _12534 = NOVALUE; // 21910 12534
    object _12533 = NOVALUE; // 21909 12533
// skipping _12532  name type: 0
// skipping _12531  name type: 0
    object _12530 = NOVALUE; // 21904 12530
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg matches pc: 1 op: INTEGER_CHECK (96)
    // SubProg matches pc: 3 op: STARTLINE (58)

    /** regex.e:1038		if sequence(options) then */
    // SubProg matches pc: 5 op: IS_A_SEQUENCE (68)
    _12530 = 0;
    // SubProg matches pc: 8 op: IF (20)
    if (_12530 == 0)
    {
        _12530 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _12530 = NOVALUE;
    }
    // SubProg matches pc: 11 op: STARTLINE (58)

    /** regex.e:1039			options = math:or_all(options) */
    // SubProg matches pc: 13 op: PROC (27)
    _options_21902 = _14or_all(0);
    // SubProg matches pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 21896 op: 159
    // SubProg matches pc: 18 op: STARTLINE (58)

    /** regex.e:1041		integer str_offsets = and_bits(STRING_OFFSETS, options)*/
    // SubProg matches pc: 20 op: AND_BITS (56)
    if (IS_ATOM_INT(_options_21902)) {
        {uintptr_t tu;
             tu = (uintptr_t)201326592 & (uintptr_t)_options_21902;
             _str_offsets_21906 = MAKE_UINT(tu);
        }
    }
    else {
        _str_offsets_21906 = binary_op(AND_BITS, 201326592, _options_21902);
    }
    // SubProg matches pc: 24 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_str_offsets_21906)) {
        _1 = (object)(DBL_PTR(_str_offsets_21906)->dbl);
        DeRefDS(_str_offsets_21906);
        _str_offsets_21906 = _1;
    }
    // SubProg matches pc: 26 op: STARTLINE (58)

    /** regex.e:1042		object match_data = find(re, haystack, from, and_bits(options, not_bits(STRING_OFFSETS)))*/
    // SubProg matches pc: 28 op: NOT_BITS (51)
    _12533 = not_bits(201326592);
    // SubProg matches pc: 31 op: AND_BITS (56)
    if (IS_ATOM_INT(_options_21902) && IS_ATOM_INT(_12533)) {
        {uintptr_t tu;
             tu = (uintptr_t)_options_21902 & (uintptr_t)_12533;
             _12534 = MAKE_UINT(tu);
        }
    }
    else {
        _12534 = binary_op(AND_BITS, _options_21902, _12533);
    }
    DeRef(_12533);
    _12533 = NOVALUE;
    // SubProg matches pc: 35 op: PROC (27)
    Ref(_re_21898);
    _12535 = _52get_ovector_size(_re_21898, 30);
    // SubProg matches pc: 40 op: PROC (27)
    Ref(_re_21898);
    Ref(_haystack_21900);
    _0 = _match_data_21908;
    _match_data_21908 = _52find(_re_21898, _haystack_21900, _from_21901, _12534, _12535);
    DeRef(_0);
    _12534 = NOVALUE;
    _12535 = NOVALUE;
    // SubProg matches pc: 48 op: STARTLINE (58)

    /** regex.e:1044		if atom(match_data) then */
    // SubProg matches pc: 50 op: IS_AN_ATOM (67)
    _12537 = IS_ATOM(_match_data_21908);
    // SubProg matches pc: 53 op: IF (20)
    if (_12537 == 0)
    {
        _12537 = NOVALUE;
        goto L2; // [53] 63
    }
    else{
        _12537 = NOVALUE;
    }
    // SubProg matches pc: 56 op: STARTLINE (58)

    /** regex.e:1045			return ERROR_NOMATCH */
    // SubProg matches pc: 58 op: RETURNF (28)

// Exiting block BLOCK: matches

// block var re_21898
    DeRef(_re_21898);

// block var haystack_21900
    DeRef(_haystack_21900);

// block var from_21901

// block var options_21902
    DeRef(_options_21902);

// block var str_offsets_21906

// block var match_data_21908
    DeRef(_match_data_21908);
    return -1;
    // SubProg matches pc: 62 op: NOP1 (159)
L2: // addr: 63 pc: 62 sub: 21896 op: 159
    // SubProg matches pc: 63 op: STARTLINE (58)

    /** regex.e:1048		for i = 1 to length(match_data) do*/
    // SubProg matches pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_match_data_21908)){
            _12538 = SEQ_PTR(_match_data_21908)->length;
    }
    else {
        _12538 = 1;
    }
    // SubProg matches pc: 68 op: FOR_I (125)
    {
        object _i_21916;
        _i_21916 = 1;
L3: // addr: 75 pc: 68 sub: 21896 op: 125
        if (_i_21916 > _12538){
            goto L4; // [68] 181
        }
        // SubProg matches pc: 75 op: STARTLINE (58)

        /** regex.e:1049			sequence tmp*/
        // SubProg matches pc: 77 op: STARTLINE (58)

        /** regex.e:1050			if match_data[i][1] = 0 then*/
        // SubProg matches pc: 79 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_match_data_21908);
        _12539 = (object)*(((s1_ptr)_2)->base + _i_21916);
        // SubProg matches pc: 83 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12539);
        _12540 = (object)*(((s1_ptr)_2)->base + 1);
        _12539 = NOVALUE;
        // SubProg matches pc: 87 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _12540, 0)){
            _12540 = NOVALUE;
            goto L5; // [87] 101
        }
        _12540 = NOVALUE;
        // SubProg matches pc: 91 op: STARTLINE (58)

        /** regex.e:1051				tmp = ""*/
        // SubProg matches pc: 93 op: ASSIGN (18)
        RefDS(_5);
        DeRef(_tmp_21918);
        _tmp_21918 = _5;
        // SubProg matches pc: 96 op: SEQUENCE_CHECK (97)
        // SubProg matches pc: 98 op: ELSE (23)
        goto L6; // [98] 125
        // SubProg matches pc: 100 op: NOP1 (159)
L5: // addr: 101 pc: 100 sub: 21896 op: 159
        // SubProg matches pc: 101 op: STARTLINE (58)

        /** regex.e:1053				tmp = haystack[match_data[i][1]..match_data[i][2]]*/
        // SubProg matches pc: 103 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_match_data_21908);
        _12542 = (object)*(((s1_ptr)_2)->base + _i_21916);
        // SubProg matches pc: 107 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12542);
        _12543 = (object)*(((s1_ptr)_2)->base + 1);
        _12542 = NOVALUE;
        // SubProg matches pc: 111 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_match_data_21908);
        _12544 = (object)*(((s1_ptr)_2)->base + _i_21916);
        // SubProg matches pc: 115 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12544);
        _12545 = (object)*(((s1_ptr)_2)->base + 2);
        _12544 = NOVALUE;
        // SubProg matches pc: 119 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_tmp_21918;
        RHS_Slice(_haystack_21900, _12543, _12545);
        // SubProg matches pc: 124 op: NOP1 (159)
L6: // addr: 125 pc: 124 sub: 21896 op: 159
        // SubProg matches pc: 125 op: STARTLINE (58)

        /** regex.e:1055			if str_offsets then*/
        // SubProg matches pc: 127 op: IF (20)
        if (_str_offsets_21906 == 0)
        {
            goto L7; // [127] 163
        }
        else{
        }
        // SubProg matches pc: 130 op: STARTLINE (58)

        /** regex.e:1056				match_data[i] = { tmp, match_data[i][1], match_data[i][2] }*/
        // SubProg matches pc: 132 op: PRIVATE_INIT_CHECK (30)
        // SubProg matches pc: 134 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_match_data_21908);
        _12547 = (object)*(((s1_ptr)_2)->base + _i_21916);
        // SubProg matches pc: 138 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12547);
        _12548 = (object)*(((s1_ptr)_2)->base + 1);
        _12547 = NOVALUE;
        // SubProg matches pc: 142 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_match_data_21908);
        _12549 = (object)*(((s1_ptr)_2)->base + _i_21916);
        // SubProg matches pc: 146 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_12549);
        _12550 = (object)*(((s1_ptr)_2)->base + 2);
        _12549 = NOVALUE;
        // SubProg matches pc: 150 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_tmp_21918);
        ((intptr_t*)_2)[1] = _tmp_21918;
        Ref(_12548);
        ((intptr_t*)_2)[2] = _12548;
        Ref(_12550);
        ((intptr_t*)_2)[3] = _12550;
        _12551 = MAKE_SEQ(_1);
        _12550 = NOVALUE;
        _12548 = NOVALUE;
        // SubProg matches pc: 156 op: ASSIGN_SUBS_CHECK (84)
        _2 = (object)SEQ_PTR(_match_data_21908);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _match_data_21908 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_21916);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _12551;
        if( _1 != _12551 ){
            DeRef(_1);
        }
        _12551 = NOVALUE;
        // SubProg matches pc: 160 op: ELSE (23)
        goto L8; // [160] 172
        // SubProg matches pc: 162 op: NOP1 (159)
L7: // addr: 163 pc: 162 sub: 21896 op: 159
        // SubProg matches pc: 163 op: STARTLINE (58)

        /** regex.e:1058				match_data[i] = tmp*/
        // SubProg matches pc: 165 op: PRIVATE_INIT_CHECK (30)
        // SubProg matches pc: 167 op: ASSIGN_SUBS_CHECK (84)
        RefDS(_tmp_21918);
        _2 = (object)SEQ_PTR(_match_data_21908);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _match_data_21908 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_21916);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _tmp_21918;
        DeRef(_1);
        // SubProg matches pc: 171 op: NOP1 (159)
L8: // addr: 172 pc: 171 sub: 21896 op: 159
        // SubProg matches pc: 172 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var tmp_21918
        DeRef(_tmp_21918);
        _tmp_21918 = NOVALUE;
        // SubProg matches pc: 174 op: STARTLINE (58)

        /** regex.e:1060		end for*/
        // SubProg matches pc: 176 op: ENDFOR_INT_UP1 (54)
        _i_21916 = _i_21916 + 1;
        goto L3; // [176] 75
L4: // addr: 181 pc: 176 sub: 21896 op: 54
        ;
    }
    // SubProg matches pc: 181 op: STARTLINE (58)

    /** regex.e:1062		return match_data*/
    // SubProg matches pc: 183 op: RETURNF (28)

// Exiting block BLOCK: matches

// block var re_21898
    DeRef(_re_21898);

// block var haystack_21900
    DeRef(_haystack_21900);

// block var from_21901

// block var options_21902
    DeRef(_options_21902);

// block var str_offsets_21906
    _12545 = NOVALUE;
    _12543 = NOVALUE;
    return _match_data_21908;
    // SubProg matches pc: 187 op: BADRETURNF (43)
    ;
}



// 0xB6D8AB15
