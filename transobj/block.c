// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _65block_type_name(object _opcode_24752)
{
    object _14010 = NOVALUE; // 24765 14010
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg block_type_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_opcode_24752)) {
        _1 = (object)(DBL_PTR(_opcode_24752)->dbl);
        DeRefDS(_opcode_24752);
        _opcode_24752 = _1;
    }
    // SubProg block_type_name pc: 3 op: STARTLINE (58)

    /** block.e:51		switch opcode do*/
    // SubProg block_type_name pc: 5 op: SWITCH_I (193)
    _0 = _opcode_24752;
    switch ( _0 ){ 
        // SubProg block_type_name pc: 10 op: STARTLINE (58)

        /** block.e:52			case LOOP then*/
        // SubProg block_type_name pc: 12 op: CASE (186)
        case 422:
        // SubProg block_type_name pc: 14 op: STARTLINE (58)

        /** block.e:53				return "LOOP"*/
        // SubProg block_type_name pc: 16 op: RETURNF (28)
        RefDS(_14008);

// Exiting block BLOCK: block_type_name

// block var opcode_24752
        return _14008;
        // SubProg block_type_name pc: 20 op: ELSE (23)
        goto L1; // [20] 63
        // SubProg block_type_name pc: 22 op: STARTLINE (58)

        /** block.e:54			case PROC then*/
        // SubProg block_type_name pc: 24 op: CASE (186)
        case 27:
        // SubProg block_type_name pc: 26 op: STARTLINE (58)

        /** block.e:55				return "PROC"*/
        // SubProg block_type_name pc: 28 op: RETURNF (28)
        RefDS(_12914);

// Exiting block BLOCK: block_type_name

// block var opcode_24752
        return _12914;
        // SubProg block_type_name pc: 32 op: ELSE (23)
        goto L1; // [32] 63
        // SubProg block_type_name pc: 34 op: STARTLINE (58)

        /** block.e:56			case FUNC then*/
        // SubProg block_type_name pc: 36 op: CASE (186)
        case 501:
        // SubProg block_type_name pc: 38 op: STARTLINE (58)

        /** block.e:57				return "FUNC"*/
        // SubProg block_type_name pc: 40 op: RETURNF (28)
        RefDS(_14009);

// Exiting block BLOCK: block_type_name

// block var opcode_24752
        return _14009;
        // SubProg block_type_name pc: 44 op: ELSE (23)
        goto L1; // [44] 63
        // SubProg block_type_name pc: 46 op: STARTLINE (58)

        /** block.e:58			case else*/
        // SubProg block_type_name pc: 48 op: CASE (186)
        default:
        // SubProg block_type_name pc: 50 op: STARTLINE (58)

        /** block.e:59				return opnames[opcode]*/
        // SubProg block_type_name pc: 52 op: GLOBAL_INIT_CHECK (109)
        // SubProg block_type_name pc: 54 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_61opnames_22518);
        _14010 = (object)*(((s1_ptr)_2)->base + _opcode_24752);
        // SubProg block_type_name pc: 58 op: RETURNF (28)
        RefDS(_14010);

// Exiting block BLOCK: block_type_name

// block var opcode_24752
        return _14010;
        // SubProg block_type_name pc: 62 op: NOPSWITCH (187)
    ;}L1: // addr: 63 pc: 62 sub: 24750 op: 187
    // SubProg block_type_name pc: 63 op: BADRETURNF (43)
    ;
}


void _65check_block(object _got_24768)
{
    object _expected_24769 = NOVALUE;
    object _14018 = NOVALUE; // 24782 14018
    object _14017 = NOVALUE; // 24781 14017
    object _14016 = NOVALUE; // 24780 14016
// skipping _14015  name type: 0
// skipping _14014  name type: 0
// skipping _14013  name type: 0
    object _14012 = NOVALUE; // 24771 14012
    object _14011 = NOVALUE; // 24770 14011
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_block pc: 3 op: STARTLINE (58)

    /** block.e:64		integer expected = block_stack[$][BLOCK_OPCODE]*/
    // SubProg check_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14011 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14011 = 1;
    }
    // SubProg check_block pc: 10 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14012 = (object)*(((s1_ptr)_2)->base + _14011);
    // SubProg check_block pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14012);
    _expected_24769 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_expected_24769)){
        _expected_24769 = (object)DBL_PTR(_expected_24769)->dbl;
    }
    _14012 = NOVALUE;
    // SubProg check_block pc: 20 op: STARTLINE (58)

    /** block.e:65		if got = FUNC then*/
    // SubProg check_block pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 24 op: EQUALS_IFW (104)
    if (_got_24768 != 501)
    goto L1; // [24] 38
    // SubProg check_block pc: 28 op: STARTLINE (58)

    /** block.e:66			got = PROC*/
    // SubProg check_block pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 32 op: ASSIGN (18)
    _got_24768 = 27;
    // SubProg check_block pc: 35 op: INTEGER_CHECK (96)
    // SubProg check_block pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 24766 op: 159
    // SubProg check_block pc: 38 op: STARTLINE (58)

    /** block.e:68		if got != expected then*/
    // SubProg check_block pc: 40 op: NOTEQ_IFW_I (122)
    if (_got_24768 == _expected_24769)
    goto L2; // [40] 64
    // SubProg check_block pc: 44 op: STARTLINE (58)

    /** block.e:69			CompileErr( 79, {block_type_name( expected ), block_type_name( got)} )*/
    // SubProg check_block pc: 46 op: PROC (27)
    _14016 = _65block_type_name(_expected_24769);
    // SubProg check_block pc: 50 op: PROC (27)
    _14017 = _65block_type_name(_got_24768);
    // SubProg check_block pc: 54 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14016;
    ((intptr_t *)_2)[2] = _14017;
    _14018 = MAKE_SEQ(_1);
    _14017 = NOVALUE;
    _14016 = NOVALUE;
    // SubProg check_block pc: 58 op: PROC (27)
    _50CompileErr(79, _14018, 0);
    _14018 = NOVALUE;
    // SubProg check_block pc: 63 op: NOP1 (159)
L2: // addr: 64 pc: 63 sub: 24766 op: 159
    // SubProg check_block pc: 64 op: STARTLINE (58)

    /** block.e:71	end procedure*/
    // SubProg check_block pc: 66 op: RETURNP (29)

// Exiting block BLOCK: check_block

// block var got_24768

// block var expected_24769
    return;
    // SubProg check_block pc: 69 op: BADRETURNF (43)
    ;
}


void _65Block_var(object _sym_24786)
{
    object _block_24787 = NOVALUE;
    object _14039 = NOVALUE; // 24817 14039
    object _14038 = NOVALUE; // 24816 14038
    object _14037 = NOVALUE; // 24815 14037
// skipping _14036  name type: 0
    object _14035 = NOVALUE; // 24812 14035
    object _14034 = NOVALUE; // 24811 14034
// skipping _14033  name type: 0
    object _14032 = NOVALUE; // 24806 14032
    object _14031 = NOVALUE; // 24805 14031
    object _14030 = NOVALUE; // 24804 14030
    object _14029 = NOVALUE; // 24803 14029
    object _14028 = NOVALUE; // 24801 14028
    object _14027 = NOVALUE; // 24800 14027
    object _14026 = NOVALUE; // 24798 14026
// skipping _14025  name type: 0
    object _14024 = NOVALUE; // 24795 14024
// skipping _14023  name type: 0
    object _14022 = NOVALUE; // 24792 14022
    object _14021 = NOVALUE; // 24790 14021
// skipping _14020  name type: 0
    object _14019 = NOVALUE; // 24788 14019
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Block_var pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_24786)) {
        _1 = (object)(DBL_PTR(_sym_24786)->dbl);
        DeRefDS(_sym_24786);
        _sym_24786 = _1;
    }
    // SubProg Block_var pc: 3 op: STARTLINE (58)

    /** block.e:75		sequence block = block_stack[$]*/
    // SubProg Block_var pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14019 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14019 = 1;
    }
    // SubProg Block_var pc: 10 op: RHS_SUBS (25)
    DeRef(_block_24787);
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _block_24787 = (object)*(((s1_ptr)_2)->base + _14019);
    Ref(_block_24787);
    // SubProg Block_var pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg Block_var pc: 16 op: STARTLINE (58)

    /** block.e:76		block_stack[$] = 0*/
    // SubProg Block_var pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14021 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14021 = 1;
    }
    // SubProg Block_var pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _2 = (object)(((s1_ptr)_2)->base + _14021);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg Block_var pc: 27 op: STARTLINE (58)

    /** block.e:77		if length(block_stack) > 1 then*/
    // SubProg Block_var pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14022 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14022 = 1;
    }
    // SubProg Block_var pc: 34 op: GREATER_IFW_I (124)
    if (_14022 <= 1)
    goto L1; // [34] 58
    // SubProg Block_var pc: 38 op: STARTLINE (58)

    /** block.e:79			SymTab[sym][S_BLOCK] = block[BLOCK_SYM]*/
    // SubProg Block_var pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 42 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_24786 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24787);
    _14026 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Block_var pc: 53 op: PASSIGN_SUBS (162)
    Ref(_14026);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_BLOCK_16111))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_BLOCK_16111)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_BLOCK_16111);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14026;
    if( _1 != _14026 ){
        DeRef(_1);
    }
    _14026 = NOVALUE;
    _14024 = NOVALUE;
    // SubProg Block_var pc: 57 op: NOP1 (159)
L1: // addr: 58 pc: 57 sub: 24783 op: 159
    // SubProg Block_var pc: 58 op: STARTLINE (58)

    /** block.e:82		if length(block[BLOCK_VARS]) then*/
    // SubProg Block_var pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24787);
    _14027 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 64 op: LENGTH (42)
    if (IS_SEQUENCE(_14027)){
            _14028 = SEQ_PTR(_14027)->length;
    }
    else {
        _14028 = 1;
    }
    _14027 = NOVALUE;
    // SubProg Block_var pc: 67 op: IF (20)
    if (_14028 == 0)
    {
        _14028 = NOVALUE;
        goto L2; // [67] 99
    }
    else{
        _14028 = NOVALUE;
    }
    // SubProg Block_var pc: 70 op: STARTLINE (58)

    /** block.e:83			SymTab[block[BLOCK_VARS][$]][S_NEXT_IN_BLOCK] = sym*/
    // SubProg Block_var pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24787);
    _14029 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_14029)){
            _14030 = SEQ_PTR(_14029)->length;
    }
    else {
        _14030 = 1;
    }
    // SubProg Block_var pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14029);
    _14031 = (object)*(((s1_ptr)_2)->base + _14030);
    _14029 = NOVALUE;
    // SubProg Block_var pc: 85 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14031))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14031)->dbl));
    else
    _3 = (object)(_14031 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 92 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NEXT_IN_BLOCK_16083))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NEXT_IN_BLOCK_16083)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NEXT_IN_BLOCK_16083);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24786;
    DeRef(_1);
    _14032 = NOVALUE;
    // SubProg Block_var pc: 96 op: ELSE (23)
    goto L3; // [96] 119
    // SubProg Block_var pc: 98 op: NOP1 (159)
L2: // addr: 99 pc: 98 sub: 24783 op: 159
    // SubProg Block_var pc: 99 op: STARTLINE (58)

    /** block.e:85			SymTab[block[BLOCK_SYM]][S_NEXT_IN_BLOCK] = sym*/
    // SubProg Block_var pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24787);
    _14034 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Block_var pc: 107 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14034))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14034)->dbl));
    else
    _3 = (object)(_14034 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 114 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NEXT_IN_BLOCK_16083))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NEXT_IN_BLOCK_16083)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NEXT_IN_BLOCK_16083);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24786;
    DeRef(_1);
    _14035 = NOVALUE;
    // SubProg Block_var pc: 118 op: NOP1 (159)
L3: // addr: 119 pc: 118 sub: 24783 op: 159
    // SubProg Block_var pc: 119 op: STARTLINE (58)

    /** block.e:88		block[BLOCK_VARS] &= sym*/
    // SubProg Block_var pc: 121 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_block_24787);
    _14037 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 125 op: CONCAT (15)
    if (IS_SEQUENCE(_14037) && IS_ATOM(_sym_24786)) {
        Append(&_14038, _14037, _sym_24786);
    }
    else if (IS_ATOM(_14037) && IS_SEQUENCE(_sym_24786)) {
    }
    else {
        Concat((object_ptr)&_14038, _14037, _sym_24786);
        _14037 = NOVALUE;
    }
    _14037 = NOVALUE;
    // SubProg Block_var pc: 129 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_block_24787);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24787 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14038;
    if( _1 != _14038 ){
        DeRef(_1);
    }
    _14038 = NOVALUE;
    // SubProg Block_var pc: 133 op: STARTLINE (58)

    /** block.e:90		block_stack[$] = block*/
    // SubProg Block_var pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14039 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14039 = 1;
    }
    // SubProg Block_var pc: 140 op: ASSIGN_SUBS (16)
    RefDS(_block_24787);
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _2 = (object)(((s1_ptr)_2)->base + _14039);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _block_24787;
    DeRef(_1);
    // SubProg Block_var pc: 144 op: STARTLINE (58)

    /** block.e:91		ifdef BDEBUG then*/
    // SubProg Block_var pc: 146 op: STARTLINE (58)

    /** block.e:96	end procedure*/
    // SubProg Block_var pc: 148 op: RETURNP (29)

// Exiting block BLOCK: Block_var

// block var sym_24786

// block var block_24787
    DeRefDS(_block_24787);
    _14034 = NOVALUE;
    _14031 = NOVALUE;
    _14027 = NOVALUE;
    return;
    // SubProg Block_var pc: 151 op: BADRETURNF (43)
    ;
}


void _65NewBlock(object _opcode_24821, object _block_label_24822)
{
    object _block_24840 = NOVALUE;
// skipping _14055  name type: 0
// skipping _14054  name type: 0
    object _14053 = NOVALUE; // 24847 14053
    object _14052 = NOVALUE; // 24846 14052
    object _14051 = NOVALUE; // 24844 14051
// skipping _14050  name type: 0
    object _14049 = NOVALUE; // 24841 14049
// skipping _14048  name type: 0
    object _14047 = NOVALUE; // 24836 14047
    object _14046 = NOVALUE; // 24835 14046
// skipping _14045  name type: 0
    object _14044 = NOVALUE; // 24830 14044
    object _14043 = NOVALUE; // 24829 14043
// skipping _14042  name type: 0
    object _14041 = NOVALUE; // 24826 14041
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewBlock pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewBlock pc: 3 op: STARTLINE (58)

    /** block.e:101		SymTab = append( SymTab, repeat( 0, SIZEOF_BLOCK_ENTRY ) )*/
    // SubProg NewBlock pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 9 op: REPEAT (32)
    _14041 = Repeat(0, _36SIZEOF_BLOCK_ENTRY_16224);
    // SubProg NewBlock pc: 13 op: APPEND (35)
    RefDS(_14041);
    Append(&_37SymTab_15405, _37SymTab_15405, _14041);
    DeRefDS(_14041);
    _14041 = NOVALUE;
    // SubProg NewBlock pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg NewBlock pc: 19 op: STARTLINE (58)

    /** block.e:102		SymTab[$][S_MODE] = M_BLOCK*/
    // SubProg NewBlock pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _14043 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _14043 = 1;
    }
    // SubProg NewBlock pc: 26 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14043 + ((s1_ptr)_2)->base);
    // SubProg NewBlock pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 35 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    _14044 = NOVALUE;
    // SubProg NewBlock pc: 39 op: STARTLINE (58)

    /** block.e:103		SymTab[$][S_FIRST_LINE] = gline_number*/
    // SubProg NewBlock pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _14046 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _14046 = 1;
    }
    // SubProg NewBlock pc: 46 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14046 + ((s1_ptr)_2)->base);
    // SubProg NewBlock pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 55 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_FIRST_LINE_16116))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FIRST_LINE_16116)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_FIRST_LINE_16116);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36gline_number_16441;
    DeRef(_1);
    _14047 = NOVALUE;
    // SubProg NewBlock pc: 59 op: STARTLINE (58)

    /** block.e:105		sequence block = repeat( 0, BLOCK_SIZE-1 )*/
    // SubProg NewBlock pc: 61 op: MINUS (10)
    _14049 = 6;
    // SubProg NewBlock pc: 65 op: REPEAT (32)
    DeRef(_block_24840);
    _block_24840 = Repeat(0, 6);
    _14049 = NOVALUE;
    // SubProg NewBlock pc: 69 op: STARTLINE (58)

    /** block.e:106		block[BLOCK_SYM]    = length(SymTab)*/
    // SubProg NewBlock pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _14051 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _14051 = 1;
    }
    // SubProg NewBlock pc: 76 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_block_24840);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24840 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    *(intptr_t *)_2 = _14051;
    if( _1 != _14051 ){
    }
    _14051 = NOVALUE;
    // SubProg NewBlock pc: 80 op: STARTLINE (58)

    /** block.e:107		block[BLOCK_OPCODE] = opcode*/
    // SubProg NewBlock pc: 82 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_block_24840);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24840 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    *(intptr_t *)_2 = _opcode_24821;
    // SubProg NewBlock pc: 86 op: STARTLINE (58)

    /** block.e:108		block[BLOCK_LABEL]  = block_label*/
    // SubProg NewBlock pc: 88 op: ASSIGN_SUBS (16)
    Ref(_block_label_24822);
    _2 = (object)SEQ_PTR(_block_24840);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24840 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    *(intptr_t *)_2 = _block_label_24822;
    // SubProg NewBlock pc: 92 op: STARTLINE (58)

    /** block.e:109		block[BLOCK_START]  = length(Code) + 1*/
    // SubProg NewBlock pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_36Code_16524)){
            _14052 = SEQ_PTR(_36Code_16524)->length;
    }
    else {
        _14052 = 1;
    }
    // SubProg NewBlock pc: 99 op: PLUS1 (93)
    _14053 = _14052 + 1;
    _14052 = NOVALUE;
    // SubProg NewBlock pc: 103 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_block_24840);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24840 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14053;
    if( _1 != _14053 ){
        DeRef(_1);
    }
    _14053 = NOVALUE;
    // SubProg NewBlock pc: 107 op: STARTLINE (58)

    /** block.e:110		block[BLOCK_VARS]   = {}*/
    // SubProg NewBlock pc: 109 op: ASSIGN_SUBS (16)
    RefDS(_5);
    _2 = (object)SEQ_PTR(_block_24840);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24840 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5;
    DeRef(_1);
    // SubProg NewBlock pc: 113 op: STARTLINE (58)

    /** block.e:112		block_stack = append( block_stack, block )*/
    // SubProg NewBlock pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 117 op: APPEND (35)
    RefDS(_block_24840);
    Append(&_65block_stack_24741, _65block_stack_24741, _block_24840);
    // SubProg NewBlock pc: 121 op: STARTLINE (58)

    /** block.e:113		current_block = length(SymTab)*/
    // SubProg NewBlock pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 125 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _65current_block_24748 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _65current_block_24748 = 1;
    }
    // SubProg NewBlock pc: 128 op: INTEGER_CHECK (96)
    // SubProg NewBlock pc: 130 op: STARTLINE (58)

    /** block.e:114	end procedure*/
    // SubProg NewBlock pc: 132 op: RETURNP (29)

// Exiting block BLOCK: NewBlock

// block var opcode_24821

// block var block_label_24822
    DeRefi(_block_label_24822);

// block var block_24840
    DeRefDS(_block_24840);
    return;
    // SubProg NewBlock pc: 135 op: BADRETURNF (43)
    ;
}


void _65Start_block(object _opcode_24853, object _block_label_24854)
{
    object _last_block_24856 = NOVALUE;
    object _label_name_24884 = NOVALUE;
    object _14075 = NOVALUE; // 24894 14075
    object _14074 = NOVALUE; // 24893 14074
    object _14073 = NOVALUE; // 24892 14073
// skipping _14071  name type: 0
    object _14070 = NOVALUE; // 24888 14070
    object _14069 = NOVALUE; // 24886 14069
// skipping _14068  name type: 0
    object _14067 = NOVALUE; // 24881 14067
    object _14066 = NOVALUE; // 24878 14066
    object _14065 = NOVALUE; // 24877 14065
    object _14064 = NOVALUE; // 24876 14064
    object _14063 = NOVALUE; // 24874 14063
// skipping _14061  name type: 0
    object _14060 = NOVALUE; // 24869 14060
// skipping _14059  name type: 0
    object _14058 = NOVALUE; // 24865 14058
    object _14057 = NOVALUE; // 24863 14057
// skipping _14056  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Start_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 3 op: STARTLINE (58)

    /** block.e:120		symtab_index last_block = current_block*/
    // SubProg Start_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 7 op: ASSIGN (18)
    _last_block_24856 = _65current_block_24748;
    // SubProg Start_block pc: 10 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 12 op: STARTLINE (58)

    /** block.e:121		if opcode = FUNC then*/
    // SubProg Start_block pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 16 op: EQUALS_IFW (104)
    if (_opcode_24853 != 501)
    goto L1; // [16] 30
    // SubProg Start_block pc: 20 op: STARTLINE (58)

    /** block.e:122			opcode = PROC*/
    // SubProg Start_block pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 24 op: ASSIGN (18)
    _opcode_24853 = 27;
    // SubProg Start_block pc: 27 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 24851 op: 159
    // SubProg Start_block pc: 30 op: STARTLINE (58)

    /** block.e:124		NewBlock( opcode, block_label )*/
    // SubProg Start_block pc: 32 op: PROC (27)
    Ref(_block_label_24854);
    _65NewBlock(_opcode_24853, _block_label_24854);
    // SubProg Start_block pc: 36 op: STARTLINE (58)

    /** block.e:126		if find(opcode, RTN_TOKS) then*/
    // SubProg Start_block pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 40 op: FIND_FROM (176)
    _14057 = find_from(_opcode_24853, _38RTN_TOKS_16044, 1);
    // SubProg Start_block pc: 45 op: IF (20)
    if (_14057 == 0)
    {
        _14057 = NOVALUE;
        goto L2; // [45] 105
    }
    else{
        _14057 = NOVALUE;
    }
    // SubProg Start_block pc: 48 op: STARTLINE (58)

    /** block.e:127			SymTab[block_label][S_BLOCK] = current_block*/
    // SubProg Start_block pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 52 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_block_label_24854))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24854)->dbl));
    else
    _3 = (object)(_block_label_24854 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 61 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_BLOCK_16111))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_BLOCK_16111)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_BLOCK_16111);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _65current_block_24748;
    DeRef(_1);
    _14058 = NOVALUE;
    // SubProg Start_block pc: 65 op: STARTLINE (58)

    /** block.e:128			SymTab[current_block][S_NAME] = sprintf("BLOCK: %s", {SymTab[block_label][S_NAME]})*/
    // SubProg Start_block pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 71 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_65current_block_24748 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_block_label_24854)){
        _14063 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24854)->dbl));
    }
    else{
        _14063 = (object)*(((s1_ptr)_2)->base + _block_label_24854);
    }
    // SubProg Start_block pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14063);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _14064 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _14064 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _14063 = NOVALUE;
    // SubProg Start_block pc: 90 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_14064);
    ((intptr_t*)_2)[1] = _14064;
    _14065 = MAKE_SEQ(_1);
    _14064 = NOVALUE;
    // SubProg Start_block pc: 94 op: SPRINTF (53)
    _14066 = EPrintf(-9999999, _14062, _14065);
    DeRefDS(_14065);
    _14065 = NOVALUE;
    // SubProg Start_block pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NAME_16091))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NAME_16091);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14066;
    if( _1 != _14066 ){
        DeRef(_1);
    }
    _14066 = NOVALUE;
    _14060 = NOVALUE;
    // SubProg Start_block pc: 102 op: ELSE (23)
    goto L3; // [102] 185
    // SubProg Start_block pc: 104 op: NOP1 (159)
L2: // addr: 105 pc: 104 sub: 24851 op: 159
    // SubProg Start_block pc: 105 op: STARTLINE (58)

    /** block.e:129		elsif current_block then*/
    // SubProg Start_block pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 109 op: IF (20)
    if (_65current_block_24748 == 0)
    {
        goto L4; // [109] 182
    }
    else{
    }
    // SubProg Start_block pc: 112 op: STARTLINE (58)

    /** block.e:135			SymTab[current_block][S_BLOCK] = last_block*/
    // SubProg Start_block pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 118 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_65current_block_24748 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 125 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_BLOCK_16111))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_BLOCK_16111)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_BLOCK_16111);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _last_block_24856;
    DeRef(_1);
    _14067 = NOVALUE;
    // SubProg Start_block pc: 129 op: STARTLINE (58)

    /** block.e:136			sequence label_name = ""*/
    // SubProg Start_block pc: 131 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_label_name_24884);
    _label_name_24884 = _5;
    // SubProg Start_block pc: 134 op: SEQUENCE_CHECK (97)
    // SubProg Start_block pc: 136 op: STARTLINE (58)

    /** block.e:137			if sequence(block_label) then*/
    // SubProg Start_block pc: 138 op: IS_A_SEQUENCE (68)
    _14069 = IS_SEQUENCE(_block_label_24854);
    // SubProg Start_block pc: 141 op: IF (20)
    if (_14069 == 0)
    {
        _14069 = NOVALUE;
        goto L5; // [141] 152
    }
    else{
        _14069 = NOVALUE;
    }
    // SubProg Start_block pc: 144 op: STARTLINE (58)

    /** block.e:138				label_name = block_label*/
    // SubProg Start_block pc: 146 op: ASSIGN (18)
    Ref(_block_label_24854);
    DeRefDSi(_label_name_24884);
    _label_name_24884 = _block_label_24854;
    // SubProg Start_block pc: 149 op: SEQUENCE_CHECK (97)
    // SubProg Start_block pc: 151 op: NOP1 (159)
L5: // addr: 152 pc: 151 sub: 24851 op: 159
    // SubProg Start_block pc: 152 op: STARTLINE (58)

    /** block.e:141			SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", {block_type_name(opcode), label_name})*/
    // SubProg Start_block pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 158 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_65current_block_24748 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 165 op: PROC (27)
    _14073 = _65block_type_name(_opcode_24853);
    // SubProg Start_block pc: 169 op: RIGHT_BRACE_2 (85)
    RefDS(_label_name_24884);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14073;
    ((intptr_t *)_2)[2] = _label_name_24884;
    _14074 = MAKE_SEQ(_1);
    _14073 = NOVALUE;
    // SubProg Start_block pc: 173 op: SPRINTF (53)
    _14075 = EPrintf(-9999999, _14072, _14074);
    DeRefDS(_14074);
    _14074 = NOVALUE;
    // SubProg Start_block pc: 177 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NAME_16091))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NAME_16091);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14075;
    if( _1 != _14075 ){
        DeRef(_1);
    }
    _14075 = NOVALUE;
    _14070 = NOVALUE;
    // SubProg Start_block pc: 181 op: NOP1 (159)
L4: // addr: 182 pc: 181 sub: 24851 op: 159
    // SubProg Start_block pc: 182 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var label_name_24884
    DeRefi(_label_name_24884);
    _label_name_24884 = NOVALUE;
    // SubProg Start_block pc: 184 op: NOP1 (159)
L3: // addr: 185 pc: 184 sub: 24851 op: 159
    // SubProg Start_block pc: 185 op: STARTLINE (58)

    /** block.e:144		ifdef BDEBUG then*/
    // SubProg Start_block pc: 187 op: STARTLINE (58)

    /** block.e:153	end procedure*/
    // SubProg Start_block pc: 189 op: RETURNP (29)

// Exiting block BLOCK: Start_block

// block var opcode_24853

// block var block_label_24854
    DeRefi(_block_label_24854);

// block var last_block_24856
    return;
    // SubProg Start_block pc: 192 op: BADRETURNF (43)
    ;
}


void _65block_label(object _label_name_24900)
{
    object _14089 = NOVALUE; // 24913 14089
    object _14088 = NOVALUE; // 24912 14088
    object _14087 = NOVALUE; // 24911 14087
    object _14086 = NOVALUE; // 24910 14086
    object _14085 = NOVALUE; // 24909 14085
    object _14084 = NOVALUE; // 24908 14084
// skipping _14083  name type: 0
    object _14082 = NOVALUE; // 24905 14082
// skipping _14081  name type: 0
    object _14080 = NOVALUE; // 24902 14080
    object _14079 = NOVALUE; // 24901 14079
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg block_label pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg block_label pc: 3 op: STARTLINE (58)

    /** block.e:157		block_stack[$][BLOCK_LABEL] = label_name*/
    // SubProg block_label pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14079 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14079 = 1;
    }
    // SubProg block_label pc: 10 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _65block_stack_24741 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14079 + ((s1_ptr)_2)->base);
    // SubProg block_label pc: 15 op: PASSIGN_SUBS (162)
    RefDS(_label_name_24900);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _label_name_24900;
    DeRef(_1);
    _14080 = NOVALUE;
    // SubProg block_label pc: 19 op: STARTLINE (58)

    /** block.e:158		SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", */
    // SubProg block_label pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 25 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_65current_block_24748 + ((s1_ptr)_2)->base);
    // SubProg block_label pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14084 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14084 = 1;
    }
    // SubProg block_label pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14085 = (object)*(((s1_ptr)_2)->base + _14084);
    // SubProg block_label pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14085);
    _14086 = (object)*(((s1_ptr)_2)->base + 2);
    _14085 = NOVALUE;
    // SubProg block_label pc: 45 op: PROC (27)
    Ref(_14086);
    _14087 = _65block_type_name(_14086);
    _14086 = NOVALUE;
    // SubProg block_label pc: 49 op: RIGHT_BRACE_2 (85)
    RefDS(_label_name_24900);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14087;
    ((intptr_t *)_2)[2] = _label_name_24900;
    _14088 = MAKE_SEQ(_1);
    _14087 = NOVALUE;
    // SubProg block_label pc: 53 op: SPRINTF (53)
    _14089 = EPrintf(-9999999, _14072, _14088);
    DeRefDS(_14088);
    _14088 = NOVALUE;
    // SubProg block_label pc: 57 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NAME_16091))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NAME_16091);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14089;
    if( _1 != _14089 ){
        DeRef(_1);
    }
    _14089 = NOVALUE;
    _14082 = NOVALUE;
    // SubProg block_label pc: 61 op: STARTLINE (58)

    /** block.e:160	end procedure*/
    // SubProg block_label pc: 63 op: RETURNP (29)

// Exiting block BLOCK: block_label

// block var label_name_24900
    DeRefDS(_label_name_24900);
    return;
    // SubProg block_label pc: 66 op: BADRETURNF (43)
    ;
}


object _65pop_block()
{
    object _block_24919 = NOVALUE;
    object _block_vars_24932 = NOVALUE;
    object _14118 = NOVALUE; // 24961 14118
// skipping _14117  name type: 0
    object _14116 = NOVALUE; // 24959 14116
    object _14115 = NOVALUE; // 24958 14115
    object _14114 = NOVALUE; // 24957 14114
    object _14113 = NOVALUE; // 24955 14113
    object _14111 = NOVALUE; // 24952 14111
    object _14110 = NOVALUE; // 24950 14110
    object _14109 = NOVALUE; // 24948 14109
    object _14108 = NOVALUE; // 24947 14108
    object _14107 = NOVALUE; // 24945 14107
    object _14106 = NOVALUE; // 24944 14106
    object _14105 = NOVALUE; // 24942 14105
    object _14104 = NOVALUE; // 24940 14104
    object _14103 = NOVALUE; // 24939 14103
    object _14102 = NOVALUE; // 24936 14102
// skipping _14101  name type: 0
// skipping _14099  name type: 0
    object _14098 = NOVALUE; // 24927 14098
    object _14097 = NOVALUE; // 24926 14097
// skipping _14096  name type: 0
    object _14095 = NOVALUE; // 24923 14095
    object _14094 = NOVALUE; // 24922 14094
// skipping _14093  name type: 0
    object _14092 = NOVALUE; // 24920 14092
// skipping _14091  name type: 0
    object _14090 = NOVALUE; // 24917 14090
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg pop_block pc: 1 op: STARTLINE (58)

    /** block.e:164		if not length(block_stack) then*/
    // SubProg pop_block pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14090 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14090 = 1;
    }
    // SubProg pop_block pc: 8 op: NOT_IFW (108)
    if (_14090 != 0)
    goto L1; // [8] 18
    _14090 = NOVALUE;
    // SubProg pop_block pc: 11 op: STARTLINE (58)

    /** block.e:165			return 0*/
    // SubProg pop_block pc: 13 op: RETURNF (28)

// Exiting block BLOCK: pop_block

// block var block_24919
    DeRef(_block_24919);

// block var block_vars_24932
    DeRef(_block_vars_24932);
    return 0;
    // SubProg pop_block pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 24914 op: 159
    // SubProg pop_block pc: 18 op: STARTLINE (58)

    /** block.e:168		sequence  block = block_stack[$]*/
    // SubProg pop_block pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14092 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14092 = 1;
    }
    // SubProg pop_block pc: 25 op: RHS_SUBS (25)
    DeRef(_block_24919);
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _block_24919 = (object)*(((s1_ptr)_2)->base + _14092);
    Ref(_block_24919);
    // SubProg pop_block pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg pop_block pc: 31 op: STARTLINE (58)

    /** block.e:169		block_stack = block_stack[1..$-1]*/
    // SubProg pop_block pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14094 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14094 = 1;
    }
    // SubProg pop_block pc: 38 op: MINUS (10)
    _14095 = _14094 - 1;
    _14094 = NOVALUE;
    // SubProg pop_block pc: 42 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_65block_stack_24741;
    RHS_Slice(_65block_stack_24741, 1, _14095);
    // SubProg pop_block pc: 47 op: STARTLINE (58)

    /** block.e:170		SymTab[block[BLOCK_SYM]][S_LAST_LINE] = gline_number*/
    // SubProg pop_block pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24919);
    _14097 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg pop_block pc: 55 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14097))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14097)->dbl));
    else
    _3 = (object)(_14097 + ((s1_ptr)_2)->base);
    // SubProg pop_block pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 64 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_LAST_LINE_16121))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LAST_LINE_16121)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_LAST_LINE_16121);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36gline_number_16441;
    DeRef(_1);
    _14098 = NOVALUE;
    // SubProg pop_block pc: 68 op: STARTLINE (58)

    /** block.e:172		ifdef BDEBUG then*/
    // SubProg pop_block pc: 70 op: STARTLINE (58)

    /** block.e:177		sequence block_vars = block[BLOCK_VARS]*/
    // SubProg pop_block pc: 72 op: RHS_SUBS (25)
    DeRef(_block_vars_24932);
    _2 = (object)SEQ_PTR(_block_24919);
    _block_vars_24932 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_block_vars_24932);
    // SubProg pop_block pc: 76 op: SEQUENCE_CHECK (97)
    // SubProg pop_block pc: 78 op: STARTLINE (58)

    /** block.e:178		for sx = 1 to length( block_vars ) do*/
    // SubProg pop_block pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_block_vars_24932)){
            _14102 = SEQ_PTR(_block_vars_24932)->length;
    }
    else {
        _14102 = 1;
    }
    // SubProg pop_block pc: 83 op: FOR_I (125)
    {
        object _sx_24935;
        _sx_24935 = 1;
L2: // addr: 90 pc: 83 sub: 24914 op: 125
        if (_sx_24935 > _14102){
            goto L3; // [83] 172
        }
        // SubProg pop_block pc: 90 op: STARTLINE (58)

        /** block.e:180			if SymTab[block_vars[sx]][S_MODE] = M_NORMAL */
        // SubProg pop_block pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 94 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24932);
        _14103 = (object)*(((s1_ptr)_2)->base + _sx_24935);
        // SubProg pop_block pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_14103)){
            _14104 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14103)->dbl));
        }
        else{
            _14104 = (object)*(((s1_ptr)_2)->base + _14103);
        }
        // SubProg pop_block pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 104 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14104);
        _14105 = (object)*(((s1_ptr)_2)->base + 3);
        _14104 = NOVALUE;
        // SubProg pop_block pc: 108 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 110 op: EQUALS (3)
        if (IS_ATOM_INT(_14105)) {
            _14106 = (_14105 == 1);
        }
        else {
            _14106 = binary_op(EQUALS, _14105, 1);
        }
        _14105 = NOVALUE;
        // SubProg pop_block pc: 114 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_14106)) {
            if (_14106 == 0) {
                goto L4; // [114] 165
            }
        }
        else {
            if (DBL_PTR(_14106)->dbl == 0.0) {
                goto L4; // [114] 165
            }
        }
        // SubProg pop_block pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 120 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24932);
        _14108 = (object)*(((s1_ptr)_2)->base + _sx_24935);
        // SubProg pop_block pc: 124 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_14108)){
            _14109 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14108)->dbl));
        }
        else{
            _14109 = (object)*(((s1_ptr)_2)->base + _14108);
        }
        // SubProg pop_block pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 130 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14109);
        _14110 = (object)*(((s1_ptr)_2)->base + 4);
        _14109 = NOVALUE;
        // SubProg pop_block pc: 134 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 136 op: LESSEQ (5)
        if (IS_ATOM_INT(_14110)) {
            _14111 = (_14110 <= 5);
        }
        else {
            _14111 = binary_op(LESSEQ, _14110, 5);
        }
        _14110 = NOVALUE;
        // SubProg pop_block pc: 140 op: NOP1 (159)
        // SubProg pop_block pc: 141 op: IF (20)
        if (_14111 == 0) {
            DeRef(_14111);
            _14111 = NOVALUE;
            goto L4; // [141] 165
        }
        else {
            if (!IS_ATOM_INT(_14111) && DBL_PTR(_14111)->dbl == 0.0){
                DeRef(_14111);
                _14111 = NOVALUE;
                goto L4; // [141] 165
            }
            DeRef(_14111);
            _14111 = NOVALUE;
        }
        DeRef(_14111);
        _14111 = NOVALUE;
        // SubProg pop_block pc: 144 op: STARTLINE (58)

        /** block.e:182				ifdef BDEBUG then*/
        // SubProg pop_block pc: 146 op: STARTLINE (58)

        /** block.e:187				Hide( block_vars[sx] )*/
        // SubProg pop_block pc: 148 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24932);
        _14113 = (object)*(((s1_ptr)_2)->base + _sx_24935);
        // SubProg pop_block pc: 152 op: PROC (27)
        Ref(_14113);
        _54Hide(_14113);
        _14113 = NOVALUE;
        // SubProg pop_block pc: 155 op: STARTLINE (58)

        /** block.e:188				LintCheck( block_vars[sx] )*/
        // SubProg pop_block pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24932);
        _14114 = (object)*(((s1_ptr)_2)->base + _sx_24935);
        // SubProg pop_block pc: 161 op: PROC (27)
        Ref(_14114);
        _54LintCheck(_14114);
        _14114 = NOVALUE;
        // SubProg pop_block pc: 164 op: NOP1 (159)
L4: // addr: 165 pc: 164 sub: 24914 op: 159
        // SubProg pop_block pc: 165 op: STARTLINE (58)

        /** block.e:191		end for*/
        // SubProg pop_block pc: 167 op: ENDFOR_INT_UP1 (54)
        _sx_24935 = _sx_24935 + 1;
        goto L2; // [167] 90
L3: // addr: 172 pc: 167 sub: 24914 op: 54
        ;
    }
    // SubProg pop_block pc: 172 op: STARTLINE (58)

    /** block.e:213		current_block = block_stack[$][BLOCK_SYM]*/
    // SubProg pop_block pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 176 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14115 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14115 = 1;
    }
    // SubProg pop_block pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14116 = (object)*(((s1_ptr)_2)->base + _14115);
    // SubProg pop_block pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14116);
    _65current_block_24748 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_65current_block_24748)){
        _65current_block_24748 = (object)DBL_PTR(_65current_block_24748)->dbl;
    }
    _14116 = NOVALUE;
    // SubProg pop_block pc: 189 op: STARTLINE (58)

    /** block.e:214		return block[BLOCK_SYM]*/
    // SubProg pop_block pc: 191 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24919);
    _14118 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg pop_block pc: 195 op: RETURNF (28)
    Ref(_14118);

// Exiting block BLOCK: pop_block

// block var block_24919
    DeRefDS(_block_24919);

// block var block_vars_24932
    DeRef(_block_vars_24932);
    _14108 = NOVALUE;
    _14103 = NOVALUE;
    DeRef(_14095);
    _14095 = NOVALUE;
    _14097 = NOVALUE;
    DeRef(_14106);
    _14106 = NOVALUE;
    return _14118;
    // SubProg pop_block pc: 199 op: BADRETURNF (43)
    ;
}


object _65top_block(object _offset_24964)
{
    object _14126 = NOVALUE; // 24975 14126
    object _14125 = NOVALUE; // 24974 14125
    object _14124 = NOVALUE; // 24973 14124
    object _14123 = NOVALUE; // 24972 14123
    object _14122 = NOVALUE; // 24970 14122
    object _14121 = NOVALUE; // 24969 14121
// skipping _14120  name type: 0
    object _14119 = NOVALUE; // 24966 14119
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg top_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg top_block pc: 3 op: STARTLINE (58)

    /** block.e:219		if offset >= length(block_stack) then*/
    // SubProg top_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14119 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14119 = 1;
    }
    // SubProg top_block pc: 10 op: GREATEREQ_IFW_I (120)
    if (_offset_24964 < _14119)
    goto L1; // [10] 33
    // SubProg top_block pc: 14 op: STARTLINE (58)

    /** block.e:220			CompileErr(107, {offset,length(block_stack)})*/
    // SubProg top_block pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14121 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14121 = 1;
    }
    // SubProg top_block pc: 21 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _offset_24964;
    ((intptr_t *)_2)[2] = _14121;
    _14122 = MAKE_SEQ(_1);
    _14121 = NOVALUE;
    // SubProg top_block pc: 25 op: PROC (27)
    _50CompileErr(107, _14122, 0);
    _14122 = NOVALUE;
    // SubProg top_block pc: 30 op: ELSE (23)
    goto L2; // [30] 57
    // SubProg top_block pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 24962 op: 159
    // SubProg top_block pc: 33 op: STARTLINE (58)

    /** block.e:222			return block_stack[$-offset][BLOCK_SYM]*/
    // SubProg top_block pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14123 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14123 = 1;
    }
    // SubProg top_block pc: 40 op: MINUS (10)
    _14124 = _14123 - _offset_24964;
    _14123 = NOVALUE;
    // SubProg top_block pc: 44 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14125 = (object)*(((s1_ptr)_2)->base + _14124);
    // SubProg top_block pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14125);
    _14126 = (object)*(((s1_ptr)_2)->base + 1);
    _14125 = NOVALUE;
    // SubProg top_block pc: 52 op: RETURNF (28)
    Ref(_14126);

// Exiting block BLOCK: top_block

// block var offset_24964
    _14124 = NOVALUE;
    return _14126;
    // SubProg top_block pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 24962 op: 159
    // SubProg top_block pc: 57 op: BADRETURNF (43)
    ;
}


void _65End_block(object _opcode_24978)
{
    object _ix_24989 = NOVALUE;
    object _14134 = NOVALUE; // 24993 14134
// skipping _14133  name type: 0
// skipping _14132  name type: 0
    object _14131 = NOVALUE; // 24987 14131
    object _14130 = NOVALUE; // 24986 14130
    object _14129 = NOVALUE; // 24985 14129
    object _14128 = NOVALUE; // 24984 14128
// skipping _14127  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg End_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg End_block pc: 3 op: STARTLINE (58)

    /** block.e:229		if opcode = FUNC then*/
    // SubProg End_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 7 op: EQUALS_IFW (104)
    // SubProg End_block pc: 21 op: STARTLINE (58)

    /** block.e:232		check_block( opcode )*/
    // SubProg End_block pc: 23 op: PROC (27)
    _65check_block(_opcode_24978);
    // SubProg End_block pc: 26 op: STARTLINE (58)

    /** block.e:233		if not length(block_stack[$][BLOCK_VARS]) then*/
    // SubProg End_block pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14128 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14128 = 1;
    }
    // SubProg End_block pc: 33 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14129 = (object)*(((s1_ptr)_2)->base + _14128);
    // SubProg End_block pc: 37 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14129);
    _14130 = (object)*(((s1_ptr)_2)->base + 6);
    _14129 = NOVALUE;
    // SubProg End_block pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_14130)){
            _14131 = SEQ_PTR(_14130)->length;
    }
    else {
        _14131 = 1;
    }
    _14130 = NOVALUE;
    // SubProg End_block pc: 44 op: NOT_IFW (108)
    if (_14131 != 0)
    goto L1; // [44] 64
    _14131 = NOVALUE;
    // SubProg End_block pc: 47 op: STARTLINE (58)

    /** block.e:234			integer ix = 1*/
    // SubProg End_block pc: 49 op: ASSIGN_I (113)
    _ix_24989 = 1;
    // SubProg End_block pc: 52 op: STARTLINE (58)

    /** block.e:235			ix = pop_block()*/
    // SubProg End_block pc: 54 op: PROC (27)
    _ix_24989 = _65pop_block();
    // SubProg End_block pc: 57 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ix_24989)) {
        _1 = (object)(DBL_PTR(_ix_24989)->dbl);
        DeRefDS(_ix_24989);
        _ix_24989 = _1;
    }
    // SubProg End_block pc: 59 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ix_24989
    // SubProg End_block pc: 61 op: ELSE (23)
    goto L2; // [61] 80
    // SubProg End_block pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 24976 op: 159
    // SubProg End_block pc: 64 op: STARTLINE (58)

    /** block.e:237			Push( pop_block() )*/
    // SubProg End_block pc: 66 op: PROC (27)
    _14134 = _65pop_block();
    // SubProg End_block pc: 69 op: PROC (27)
    _47Push(_14134);
    _14134 = NOVALUE;
    // SubProg End_block pc: 72 op: STARTLINE (58)

    /** block.e:238			emit_op( EXIT_BLOCK )*/
    // SubProg End_block pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 76 op: PROC (27)
    _47emit_op(206);
    // SubProg End_block pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 24976 op: 159
    // SubProg End_block pc: 80 op: STARTLINE (58)

    /** block.e:241	end procedure*/
    // SubProg End_block pc: 82 op: RETURNP (29)

// Exiting block BLOCK: End_block

// block var opcode_24978
    _14130 = NOVALUE;
    return;
    // SubProg End_block pc: 85 op: BADRETURNF (43)
    ;
}


object _65End_inline_block(object _opcode_24998)
{
    object _14141 = NOVALUE; // 25010 14141
    object _14140 = NOVALUE; // 25009 14140
    object _14139 = NOVALUE; // 25007 14139
    object _14138 = NOVALUE; // 25006 14138
    object _14137 = NOVALUE; // 25005 14137
    object _14136 = NOVALUE; // 25004 14136
// skipping _14135  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg End_inline_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg End_inline_block pc: 3 op: STARTLINE (58)

    /** block.e:246		if opcode = FUNC then*/
    // SubProg End_inline_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_inline_block pc: 7 op: EQUALS_IFW (104)
    // SubProg End_inline_block pc: 21 op: STARTLINE (58)

    /** block.e:249		if length(block_stack[$][BLOCK_VARS]) then*/
    // SubProg End_inline_block pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_inline_block pc: 25 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14136 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14136 = 1;
    }
    // SubProg End_inline_block pc: 28 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14137 = (object)*(((s1_ptr)_2)->base + _14136);
    // SubProg End_inline_block pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14137);
    _14138 = (object)*(((s1_ptr)_2)->base + 6);
    _14137 = NOVALUE;
    // SubProg End_inline_block pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_14138)){
            _14139 = SEQ_PTR(_14138)->length;
    }
    else {
        _14139 = 1;
    }
    _14138 = NOVALUE;
    // SubProg End_inline_block pc: 39 op: IF (20)
    if (_14139 == 0)
    {
        _14139 = NOVALUE;
        goto L1; // [39] 60
    }
    else{
        _14139 = NOVALUE;
    }
    // SubProg End_inline_block pc: 42 op: STARTLINE (58)

    /** block.e:250			return { EXIT_BLOCK, pop_block() }*/
    // SubProg End_inline_block pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_inline_block pc: 46 op: PROC (27)
    _14140 = _65pop_block();
    // SubProg End_inline_block pc: 49 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _14140;
    _14141 = MAKE_SEQ(_1);
    _14140 = NOVALUE;
    // SubProg End_inline_block pc: 53 op: RETURNF (28)

// Exiting block BLOCK: End_inline_block

// block var opcode_24998
    _14138 = NOVALUE;
    return _14141;
    // SubProg End_inline_block pc: 57 op: ELSE (23)
    goto L2; // [57] 72
    // SubProg End_inline_block pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 24996 op: 159
    // SubProg End_inline_block pc: 60 op: STARTLINE (58)

    /** block.e:252			Drop_block( opcode )*/
    // SubProg End_inline_block pc: 62 op: PROC (27)
    _65Drop_block(_opcode_24998);
    // SubProg End_inline_block pc: 65 op: STARTLINE (58)

    /** block.e:253			return {}*/
    // SubProg End_inline_block pc: 67 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: End_inline_block

// block var opcode_24998
    _14138 = NOVALUE;
    DeRef(_14141);
    _14141 = NOVALUE;
    return _5;
    // SubProg End_inline_block pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 24996 op: 159
    // SubProg End_inline_block pc: 72 op: BADRETURNF (43)
    ;
}


void _65Sibling_block(object _opcode_25015)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Sibling_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Sibling_block pc: 3 op: STARTLINE (58)

    /** block.e:261		End_block( opcode )*/
    // SubProg Sibling_block pc: 5 op: PROC (27)
    _65End_block(_opcode_25015);
    // SubProg Sibling_block pc: 8 op: STARTLINE (58)

    /** block.e:262		Start_block( opcode )*/
    // SubProg Sibling_block pc: 10 op: PROC (27)
    _65Start_block(_opcode_25015, 0);
    // SubProg Sibling_block pc: 14 op: STARTLINE (58)

    /** block.e:263	end procedure*/
    // SubProg Sibling_block pc: 16 op: RETURNP (29)

// Exiting block BLOCK: Sibling_block

// block var opcode_25015
    return;
    // SubProg Sibling_block pc: 19 op: BADRETURNF (43)
    ;
}


void _65Leave_block(object _offset_25018)
{
    object _14147 = NOVALUE; // 25026 14147
    object _14146 = NOVALUE; // 25024 14146
    object _14145 = NOVALUE; // 25023 14145
    object _14144 = NOVALUE; // 25022 14144
    object _14143 = NOVALUE; // 25021 14143
    object _14142 = NOVALUE; // 25020 14142
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Leave_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_offset_25018)) {
        _1 = (object)(DBL_PTR(_offset_25018)->dbl);
        DeRefDS(_offset_25018);
        _offset_25018 = _1;
    }
    // SubProg Leave_block pc: 3 op: STARTLINE (58)

    /** block.e:268		if length( block_stack[$-offset][BLOCK_VARS]) then*/
    // SubProg Leave_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14142 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14142 = 1;
    }
    // SubProg Leave_block pc: 10 op: MINUS (10)
    _14143 = _14142 - _offset_25018;
    _14142 = NOVALUE;
    // SubProg Leave_block pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14144 = (object)*(((s1_ptr)_2)->base + _14143);
    // SubProg Leave_block pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14144);
    _14145 = (object)*(((s1_ptr)_2)->base + 6);
    _14144 = NOVALUE;
    // SubProg Leave_block pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_14145)){
            _14146 = SEQ_PTR(_14145)->length;
    }
    else {
        _14146 = 1;
    }
    _14145 = NOVALUE;
    // SubProg Leave_block pc: 25 op: IF (20)
    if (_14146 == 0)
    {
        _14146 = NOVALUE;
        goto L1; // [25] 45
    }
    else{
        _14146 = NOVALUE;
    }
    // SubProg Leave_block pc: 28 op: STARTLINE (58)

    /** block.e:269			Push( top_block( offset ) )*/
    // SubProg Leave_block pc: 30 op: PROC (27)
    _14147 = _65top_block(_offset_25018);
    // SubProg Leave_block pc: 34 op: PROC (27)
    _47Push(_14147);
    _14147 = NOVALUE;
    // SubProg Leave_block pc: 37 op: STARTLINE (58)

    /** block.e:270			emit_op( EXIT_BLOCK )*/
    // SubProg Leave_block pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_block pc: 41 op: PROC (27)
    _47emit_op(206);
    // SubProg Leave_block pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 25016 op: 159
    // SubProg Leave_block pc: 45 op: STARTLINE (58)

    /** block.e:272	end procedure*/
    // SubProg Leave_block pc: 47 op: RETURNP (29)

// Exiting block BLOCK: Leave_block

// block var offset_25018
    _14145 = NOVALUE;
    DeRef(_14143);
    _14143 = NOVALUE;
    return;
    // SubProg Leave_block pc: 50 op: BADRETURNF (43)
    ;
}


void _65Leave_blocks(object _blocks_25038, object _block_type_25039)
{
    object _bx_25040 = NOVALUE;
    object _Block_opcode_3__tmp_at29_25047 = NOVALUE;
    object _Block_opcode_2__tmp_at29_25046 = NOVALUE;
    object _Block_opcode_1__tmp_at29_25045 = NOVALUE;
    object _Block_opcode_inlined_Block_opcode_at_29_25044 = NOVALUE;
    object _14160 = NOVALUE; // 25066 14160
// skipping _14159  name type: 0
// skipping _14158  name type: 0
// skipping _14157  name type: 0
// skipping _14156  name type: 0
// skipping _14155  name type: 0
// skipping _14154  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Leave_blocks pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_blocks_25038)) {
        _1 = (object)(DBL_PTR(_blocks_25038)->dbl);
        DeRefDS(_blocks_25038);
        _blocks_25038 = _1;
    }
    // SubProg Leave_blocks pc: 3 op: INTEGER_CHECK (96)
    // SubProg Leave_blocks pc: 5 op: STARTLINE (58)

    /** block.e:284		integer bx = 0*/
    // SubProg Leave_blocks pc: 7 op: ASSIGN_I (113)
    _bx_25040 = 0;
    // SubProg Leave_blocks pc: 10 op: STARTLINE (58)

    /** block.e:285		while blocks do*/
    // SubProg Leave_blocks pc: 12 op: NOP2 (110)
    // SubProg Leave_blocks pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 25036 op: 158
    // SubProg Leave_blocks pc: 15 op: WHILE (47)
    if (_blocks_25038 == 0)
    {
        goto L2; // [15] 119
    }
    else{
    }
    // SubProg Leave_blocks pc: 18 op: STARTLINE (58)

    /** block.e:286			Leave_block( bx )*/
    // SubProg Leave_blocks pc: 20 op: PROC (27)
    _65Leave_block(_bx_25040);
    // SubProg Leave_blocks pc: 23 op: STARTLINE (58)

    /** block.e:288			if block_type then*/
    // SubProg Leave_blocks pc: 25 op: IF (20)
    if (_block_type_25039 == 0)
    {
        goto L3; // [25] 101
    }
    else{
    }
    // SubProg Leave_blocks pc: 28 op: STARTLINE (58)

    /** block.e:289				switch Block_opcode( bx ) do*/
    // SubProg Leave_blocks pc: 30 op: STARTLINE (58)

    /** block.e:276		return block_stack[$-bx][BLOCK_OPCODE]*/
    // SubProg Leave_blocks pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_blocks pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _Block_opcode_1__tmp_at29_25045 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _Block_opcode_1__tmp_at29_25045 = 1;
    }
    // SubProg Leave_blocks pc: 37 op: MINUS (10)
    _Block_opcode_2__tmp_at29_25046 = _Block_opcode_1__tmp_at29_25045 - _bx_25040;
    // SubProg Leave_blocks pc: 41 op: RHS_SUBS (25)
    DeRef(_Block_opcode_3__tmp_at29_25047);
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _Block_opcode_3__tmp_at29_25047 = (object)*(((s1_ptr)_2)->base + _Block_opcode_2__tmp_at29_25046);
    Ref(_Block_opcode_3__tmp_at29_25047);
    // SubProg Leave_blocks pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_Block_opcode_inlined_Block_opcode_at_29_25044);
    _2 = (object)SEQ_PTR(_Block_opcode_3__tmp_at29_25047);
    _Block_opcode_inlined_Block_opcode_at_29_25044 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_Block_opcode_inlined_Block_opcode_at_29_25044);
    // SubProg Leave_blocks pc: 49 op: NOP1 (159)
    // SubProg Leave_blocks pc: 50 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-Block_opcode from Leave_blocks @ 29

// block var Block_opcode_1__tmp_at29_25045

// block var Block_opcode_2__tmp_at29_25046

// block var Block_opcode_3__tmp_at29_25047
    DeRef(_Block_opcode_3__tmp_at29_25047);
    _Block_opcode_3__tmp_at29_25047 = NOVALUE;
    // SubProg Leave_blocks pc: 52 op: SWITCH_I (193)
    if (IS_SEQUENCE(_Block_opcode_inlined_Block_opcode_at_29_25044) ){
        goto L4; // [52] 82
    }
    if(!IS_ATOM_INT(_Block_opcode_inlined_Block_opcode_at_29_25044)){
        if( (DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25044)->dbl != (eudouble) ((object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25044)->dbl) ) ){
            goto L4; // [52] 82
        }
        _0 = (object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25044)->dbl;
    }
    else {
        _0 = _Block_opcode_inlined_Block_opcode_at_29_25044;
    };
    switch ( _0 ){ 
        // SubProg Leave_blocks pc: 57 op: STARTLINE (58)

        /** block.e:290					case FOR, WHILE, LOOP then*/
        // SubProg Leave_blocks pc: 59 op: CASE (186)
        case 21:
        // SubProg Leave_blocks pc: 61 op: CASE (186)
        case 47:
        // SubProg Leave_blocks pc: 63 op: CASE (186)
        case 422:
        // SubProg Leave_blocks pc: 65 op: STARTLINE (58)

        /** block.e:291						if block_type = LOOP_BLOCK then*/
        // SubProg Leave_blocks pc: 67 op: EQUALS_IFW_I (121)
        if (_block_type_25039 != 1)
        goto L5; // [67] 108
        // SubProg Leave_blocks pc: 71 op: STARTLINE (58)

        /** block.e:292							blocks -= 1*/
        // SubProg Leave_blocks pc: 73 op: MINUS_I (116)
        _blocks_25038 = _blocks_25038 - 1;
        // SubProg Leave_blocks pc: 77 op: NOP1 (159)
        // SubProg Leave_blocks pc: 78 op: ELSE (23)
        goto L5; // [78] 108
        // SubProg Leave_blocks pc: 80 op: STARTLINE (58)

        /** block.e:294					case else*/
        // SubProg Leave_blocks pc: 82 op: CASE (186)
        default:
L4: // addr: 82 pc: 82 sub: 25036 op: 186
        // SubProg Leave_blocks pc: 84 op: STARTLINE (58)

        /** block.e:295						if block_type = CONDITIONAL_BLOCK then*/
        // SubProg Leave_blocks pc: 86 op: EQUALS_IFW_I (121)
        if (_block_type_25039 != 2)
        goto L6; // [86] 97
        // SubProg Leave_blocks pc: 90 op: STARTLINE (58)

        /** block.e:296							blocks -= 1*/
        // SubProg Leave_blocks pc: 92 op: MINUS_I (116)
        _blocks_25038 = _blocks_25038 - 1;
        // SubProg Leave_blocks pc: 96 op: NOP1 (159)
L6: // addr: 97 pc: 96 sub: 25036 op: 159
        // SubProg Leave_blocks pc: 97 op: NOPSWITCH (187)
    ;}    // SubProg Leave_blocks pc: 98 op: ELSE (23)
    goto L5; // [98] 108
    // SubProg Leave_blocks pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 25036 op: 159
    // SubProg Leave_blocks pc: 101 op: STARTLINE (58)

    /** block.e:300				blocks -= 1*/
    // SubProg Leave_blocks pc: 103 op: MINUS_I (116)
    _blocks_25038 = _blocks_25038 - 1;
    // SubProg Leave_blocks pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 25036 op: 159
    // SubProg Leave_blocks pc: 108 op: STARTLINE (58)

    /** block.e:302			bx += 1*/
    // SubProg Leave_blocks pc: 110 op: PLUS1_I (117)
    _bx_25040 = _bx_25040 + 1;
    // SubProg Leave_blocks pc: 114 op: STARTLINE (58)

    /** block.e:303		end while*/
    // SubProg Leave_blocks pc: 116 op: ENDWHILE (22)
    goto L1; // [116] 15
    // SubProg Leave_blocks pc: 118 op: NOP1 (159)
L2: // addr: 119 pc: 118 sub: 25036 op: 159
    // SubProg Leave_blocks pc: 119 op: STARTLINE (58)

    /** block.e:304		for i = 0 to blocks - 1 do*/
    // SubProg Leave_blocks pc: 121 op: MINUS (10)
    _14160 = _blocks_25038 - 1;
    if ((object)((uintptr_t)_14160 +(uintptr_t) HIGH_BITS) >= 0){
        _14160 = NewDouble((eudouble)_14160);
    }
    // SubProg Leave_blocks pc: 125 op: FOR (21)
    {
        object _i_25065;
        _i_25065 = 0;
L7: // addr: 132 pc: 125 sub: 25036 op: 21
        if (binary_op_a(GREATER, _i_25065, _14160)){
            goto L8; // [125] 144
        }
        // SubProg Leave_blocks pc: 132 op: STARTLINE (58)

        /** block.e:305			Leave_block( i )*/
        // SubProg Leave_blocks pc: 134 op: PROC (27)
        Ref(_i_25065);
        _65Leave_block(_i_25065);
        // SubProg Leave_blocks pc: 137 op: STARTLINE (58)

        /** block.e:306		end for*/
        // SubProg Leave_blocks pc: 139 op: ENDFOR_INT_UP1 (54)
        _0 = _i_25065;
        if (IS_ATOM_INT(_i_25065)) {
            _i_25065 = _i_25065 + 1;
            if ((object)((uintptr_t)_i_25065 +(uintptr_t) HIGH_BITS) >= 0){
                _i_25065 = NewDouble((eudouble)_i_25065);
            }
        }
        else {
            _i_25065 = binary_op_a(PLUS, _i_25065, 1);
        }
        DeRef(_0);
        goto L7; // [139] 132
L8: // addr: 144 pc: 139 sub: 25036 op: 54
        ;
        DeRef(_i_25065);
    }
    // SubProg Leave_blocks pc: 144 op: STARTLINE (58)

    /** block.e:307	end procedure*/
    // SubProg Leave_blocks pc: 146 op: RETURNP (29)

// Exiting block BLOCK: Leave_blocks

// block var blocks_25038

// block var block_type_25039

// block var bx_25040
    DeRef(_14160);
    _14160 = NOVALUE;
    return;
    // SubProg Leave_blocks pc: 149 op: BADRETURNF (43)
    ;
}


void _65Drop_block(object _opcode_25069)
{
    object _x_25071 = NOVALUE;
// skipping _14161  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Drop_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Drop_block pc: 3 op: STARTLINE (58)

    /** block.e:311		check_block( opcode )*/
    // SubProg Drop_block pc: 5 op: PROC (27)
    _65check_block(_opcode_25069);
    // SubProg Drop_block pc: 8 op: STARTLINE (58)

    /** block.e:312		symtab_index x = pop_block()*/
    // SubProg Drop_block pc: 10 op: PROC (27)
    _x_25071 = _65pop_block();
    // SubProg Drop_block pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_25071)) {
        _1 = (object)(DBL_PTR(_x_25071)->dbl);
        DeRefDS(_x_25071);
        _x_25071 = _1;
    }
    // SubProg Drop_block pc: 15 op: STARTLINE (58)

    /** block.e:313	end procedure*/
    // SubProg Drop_block pc: 17 op: RETURNP (29)

// Exiting block BLOCK: Drop_block

// block var opcode_25069

// block var x_25071
    return;
    // SubProg Drop_block pc: 20 op: BADRETURNF (43)
    ;
}


void _65Pop_block_var()
{
    object _sym_25076 = NOVALUE;
    object _block_sym_25083 = NOVALUE;
    object _14188 = NOVALUE; // 25113 14188
    object _14187 = NOVALUE; // 25112 14187
    object _14186 = NOVALUE; // 25111 14186
    object _14185 = NOVALUE; // 25110 14185
    object _14184 = NOVALUE; // 25109 14184
    object _14183 = NOVALUE; // 25108 14183
    object _14182 = NOVALUE; // 25107 14182
    object _14181 = NOVALUE; // 25106 14181
// skipping _14180  name type: 0
    object _14179 = NOVALUE; // 25104 14179
    object _14178 = NOVALUE; // 25103 14178
// skipping _14177  name type: 0
    object _14176 = NOVALUE; // 25100 14176
    object _14175 = NOVALUE; // 25098 14175
// skipping _14174  name type: 0
    object _14173 = NOVALUE; // 25094 14173
// skipping _14172  name type: 0
// skipping _14171  name type: 0
    object _14170 = NOVALUE; // 25089 14170
// skipping _14169  name type: 0
    object _14168 = NOVALUE; // 25085 14168
    object _14167 = NOVALUE; // 25084 14167
// skipping _14166  name type: 0
    object _14165 = NOVALUE; // 25080 14165
    object _14164 = NOVALUE; // 25079 14164
    object _14163 = NOVALUE; // 25078 14163
    object _14162 = NOVALUE; // 25077 14162
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Pop_block_var pc: 1 op: STARTLINE (58)

    /** block.e:316		symtab_index sym = block_stack[$][BLOCK_VARS][$]*/
    // SubProg Pop_block_var pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14162 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14162 = 1;
    }
    // SubProg Pop_block_var pc: 8 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14163 = (object)*(((s1_ptr)_2)->base + _14162);
    // SubProg Pop_block_var pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14163);
    _14164 = (object)*(((s1_ptr)_2)->base + 6);
    _14163 = NOVALUE;
    // SubProg Pop_block_var pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_14164)){
            _14165 = SEQ_PTR(_14164)->length;
    }
    else {
        _14165 = 1;
    }
    // SubProg Pop_block_var pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14164);
    _sym_25076 = (object)*(((s1_ptr)_2)->base + _14165);
    if (!IS_ATOM_INT(_sym_25076)){
        _sym_25076 = (object)DBL_PTR(_sym_25076)->dbl;
    }
    _14164 = NOVALUE;
    // SubProg Pop_block_var pc: 25 op: STARTLINE (58)

    /** block.e:317		symtab_index block_sym = block_stack[$][BLOCK_SYM]*/
    // SubProg Pop_block_var pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14167 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14167 = 1;
    }
    // SubProg Pop_block_var pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14168 = (object)*(((s1_ptr)_2)->base + _14167);
    // SubProg Pop_block_var pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14168);
    _block_sym_25083 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_block_sym_25083)){
        _block_sym_25083 = (object)DBL_PTR(_block_sym_25083)->dbl;
    }
    _14168 = NOVALUE;
    // SubProg Pop_block_var pc: 42 op: STARTLINE (58)

    /** block.e:318		while sym_next_in_block( block_sym ) != sym do*/
    // SubProg Pop_block_var pc: 44 op: NOP2 (110)
    // SubProg Pop_block_var pc: 46 op: NOPWHILE (158)
L1: // addr: 47 pc: 46 sub: 25073 op: 158
    // SubProg Pop_block_var pc: 47 op: PROC (27)
    _14170 = _54sym_next_in_block(_block_sym_25083);
    // SubProg Pop_block_var pc: 51 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _14170, _sym_25076)){
        DeRef(_14170);
        _14170 = NOVALUE;
        goto L2; // [51] 68
    }
    DeRef(_14170);
    _14170 = NOVALUE;
    // SubProg Pop_block_var pc: 55 op: STARTLINE (58)

    /** block.e:319			block_sym = sym_next_in_block( block_sym )*/
    // SubProg Pop_block_var pc: 57 op: PROC (27)
    _block_sym_25083 = _54sym_next_in_block(_block_sym_25083);
    // SubProg Pop_block_var pc: 61 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_block_sym_25083)) {
        _1 = (object)(DBL_PTR(_block_sym_25083)->dbl);
        DeRefDS(_block_sym_25083);
        _block_sym_25083 = _1;
    }
    // SubProg Pop_block_var pc: 63 op: STARTLINE (58)

    /** block.e:320		end while*/
    // SubProg Pop_block_var pc: 65 op: ENDWHILE (22)
    goto L1; // [65] 47
    // SubProg Pop_block_var pc: 67 op: NOP1 (159)
L2: // addr: 68 pc: 67 sub: 25073 op: 159
    // SubProg Pop_block_var pc: 68 op: STARTLINE (58)

    /** block.e:322		SymTab[block_sym][S_NEXT_IN_BLOCK] = sym_next_in_block( sym )*/
    // SubProg Pop_block_var pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 72 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_block_sym_25083 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 79 op: PROC (27)
    _14175 = _54sym_next_in_block(_sym_25076);
    // SubProg Pop_block_var pc: 83 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NEXT_IN_BLOCK_16083))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NEXT_IN_BLOCK_16083)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NEXT_IN_BLOCK_16083);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14175;
    if( _1 != _14175 ){
        DeRef(_1);
    }
    _14175 = NOVALUE;
    _14173 = NOVALUE;
    // SubProg Pop_block_var pc: 87 op: STARTLINE (58)

    /** block.e:323		SymTab[sym][S_NEXT_IN_BLOCK] = 0*/
    // SubProg Pop_block_var pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 91 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25076 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NEXT_IN_BLOCK_16083))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NEXT_IN_BLOCK_16083)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NEXT_IN_BLOCK_16083);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _14176 = NOVALUE;
    // SubProg Pop_block_var pc: 102 op: STARTLINE (58)

    /** block.e:325		block_stack[$][BLOCK_VARS] = eu:remove( block_stack[$][BLOCK_VARS], */
    // SubProg Pop_block_var pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 106 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14178 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14178 = 1;
    }
    // SubProg Pop_block_var pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _65block_stack_24741 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14178 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 116 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14181 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14181 = 1;
    }
    // SubProg Pop_block_var pc: 119 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14182 = (object)*(((s1_ptr)_2)->base + _14181);
    // SubProg Pop_block_var pc: 123 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14182);
    _14183 = (object)*(((s1_ptr)_2)->base + 6);
    _14182 = NOVALUE;
    // SubProg Pop_block_var pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 129 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _14184 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _14184 = 1;
    }
    // SubProg Pop_block_var pc: 132 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14185 = (object)*(((s1_ptr)_2)->base + _14184);
    // SubProg Pop_block_var pc: 136 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14185);
    _14186 = (object)*(((s1_ptr)_2)->base + 6);
    _14185 = NOVALUE;
    // SubProg Pop_block_var pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_14186)){
            _14187 = SEQ_PTR(_14186)->length;
    }
    else {
        _14187 = 1;
    }
    _14186 = NOVALUE;
    // SubProg Pop_block_var pc: 143 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_14183);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14187)) ? _14187 : (object)(DBL_PTR(_14187)->dbl);
        int stop = (IS_ATOM_INT(_14187)) ? _14187 : (object)(DBL_PTR(_14187)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_14183);
            DeRef(_14188);
            _14188 = _14183;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_14183), start, &_14188 );
            }
            else Tail(SEQ_PTR(_14183), stop+1, &_14188);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_14183), start, &_14188);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_14188);
            _14188 = _1;
        }
    }
    _14183 = NOVALUE;
    _14187 = NOVALUE;
    _14187 = NOVALUE;
    // SubProg Pop_block_var pc: 148 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14188;
    if( _1 != _14188 ){
        DeRef(_1);
    }
    _14188 = NOVALUE;
    _14179 = NOVALUE;
    // SubProg Pop_block_var pc: 152 op: STARTLINE (58)

    /** block.e:327	end procedure*/
    // SubProg Pop_block_var pc: 154 op: RETURNP (29)

// Exiting block BLOCK: Pop_block_var

// block var sym_25076

// block var block_sym_25083
    _14186 = NOVALUE;
    return;
    // SubProg Pop_block_var pc: 157 op: BADRETURNF (43)
    ;
}


void _65Goto_block(object _from_block_25117, object _to_block_25119, object _pc_25120)
{
    object _code_25121 = NOVALUE;
    object _next_block_25123 = NOVALUE;
// skipping _14200  name type: 0
    object _14199 = NOVALUE; // 25141 14199
// skipping _14198  name type: 0
// skipping _14197  name type: 0
    object _14196 = NOVALUE; // 25136 14196
    object _14195 = NOVALUE; // 25134 14195
    object _14194 = NOVALUE; // 25133 14194
    object _14193 = NOVALUE; // 25131 14193
    object _14192 = NOVALUE; // 25129 14192
    object _14191 = NOVALUE; // 25128 14191
    object _14190 = NOVALUE; // 25127 14190
// skipping _14189  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Goto_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_from_block_25117)) {
        _1 = (object)(DBL_PTR(_from_block_25117)->dbl);
        DeRefDS(_from_block_25117);
        _from_block_25117 = _1;
    }
    // SubProg Goto_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_to_block_25119)) {
        _1 = (object)(DBL_PTR(_to_block_25119)->dbl);
        DeRefDS(_to_block_25119);
        _to_block_25119 = _1;
    }
    // SubProg Goto_block pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_25120)) {
        _1 = (object)(DBL_PTR(_pc_25120)->dbl);
        DeRefDS(_pc_25120);
        _pc_25120 = _1;
    }
    // SubProg Goto_block pc: 7 op: STARTLINE (58)

    /** block.e:330		sequence code = {}*/
    // SubProg Goto_block pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_code_25121);
    _code_25121 = _5;
    // SubProg Goto_block pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg Goto_block pc: 14 op: STARTLINE (58)

    /** block.e:331		symtab_index next_block = sym_block( from_block )*/
    // SubProg Goto_block pc: 16 op: PROC (27)
    _next_block_25123 = _54sym_block(_from_block_25117);
    // SubProg Goto_block pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_block_25123)) {
        _1 = (object)(DBL_PTR(_next_block_25123)->dbl);
        DeRefDS(_next_block_25123);
        _next_block_25123 = _1;
    }
    // SubProg Goto_block pc: 22 op: STARTLINE (58)

    /** block.e:332		while next_block */
    // SubProg Goto_block pc: 24 op: NOP2 (110)
    // SubProg Goto_block pc: 26 op: NOPWHILE (158)
L1: // addr: 27 pc: 26 sub: 25114 op: 158
    // SubProg Goto_block pc: 27 op: SC1_AND (141)
    if (_next_block_25123 == 0) {
        _14190 = 0;
        goto L2; // [27] 39
    }
    // SubProg Goto_block pc: 31 op: NOTEQ (4)
    _14191 = (_from_block_25117 != _to_block_25119);
    // SubProg Goto_block pc: 35 op: SC2_AND (142)
    _14190 = (_14191 != 0);
    // SubProg Goto_block pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 25114 op: 159
    // SubProg Goto_block pc: 39 op: SC1_AND_IF (146)
    if (_14190 == 0) {
        goto L3; // [39] 93
    }
    // SubProg Goto_block pc: 43 op: PROC (27)
    _14193 = _54sym_token(_next_block_25123);
    // SubProg Goto_block pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 49 op: FIND_FROM (176)
    _14194 = find_from(_14193, _38RTN_TOKS_16044, 1);
    DeRef(_14193);
    _14193 = NOVALUE;
    // SubProg Goto_block pc: 54 op: NOT (7)
    _14195 = (_14194 == 0);
    _14194 = NOVALUE;
    // SubProg Goto_block pc: 57 op: NOP1 (159)
    // SubProg Goto_block pc: 58 op: WHILE (47)
    if (_14195 == 0)
    {
        DeRef(_14195);
        _14195 = NOVALUE;
        goto L3; // [58] 93
    }
    else{
        DeRef(_14195);
        _14195 = NOVALUE;
    }
    // SubProg Goto_block pc: 61 op: STARTLINE (58)

    /** block.e:335			code &= { EXIT_BLOCK, from_block }*/
    // SubProg Goto_block pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 65 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _from_block_25117;
    _14196 = MAKE_SEQ(_1);
    // SubProg Goto_block pc: 69 op: CONCAT (15)
    Concat((object_ptr)&_code_25121, _code_25121, _14196);
    DeRefDS(_14196);
    _14196 = NOVALUE;
    // SubProg Goto_block pc: 73 op: STARTLINE (58)

    /** block.e:336			from_block = next_block*/
    // SubProg Goto_block pc: 75 op: ASSIGN (18)
    _from_block_25117 = _next_block_25123;
    // SubProg Goto_block pc: 78 op: INTEGER_CHECK (96)
    // SubProg Goto_block pc: 80 op: STARTLINE (58)

    /** block.e:337			next_block = sym_block( next_block )*/
    // SubProg Goto_block pc: 82 op: PROC (27)
    _next_block_25123 = _54sym_block(_next_block_25123);
    // SubProg Goto_block pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_block_25123)) {
        _1 = (object)(DBL_PTR(_next_block_25123)->dbl);
        DeRefDS(_next_block_25123);
        _next_block_25123 = _1;
    }
    // SubProg Goto_block pc: 88 op: STARTLINE (58)

    /** block.e:338		end while*/
    // SubProg Goto_block pc: 90 op: ENDWHILE (22)
    goto L1; // [90] 27
    // SubProg Goto_block pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 25114 op: 159
    // SubProg Goto_block pc: 93 op: STARTLINE (58)

    /** block.e:340		if length(code) then*/
    // SubProg Goto_block pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_code_25121)){
            _14199 = SEQ_PTR(_code_25121)->length;
    }
    else {
        _14199 = 1;
    }
    // SubProg Goto_block pc: 98 op: IF (20)
    if (_14199 == 0)
    {
        _14199 = NOVALUE;
        goto L4; // [98] 127
    }
    else{
        _14199 = NOVALUE;
    }
    // SubProg Goto_block pc: 101 op: STARTLINE (58)

    /** block.e:341			if pc then*/
    // SubProg Goto_block pc: 103 op: IF (20)
    if (_pc_25120 == 0)
    {
        goto L5; // [103] 115
    }
    else{
    }
    // SubProg Goto_block pc: 106 op: STARTLINE (58)

    /** block.e:342				insert_code( code, pc )*/
    // SubProg Goto_block pc: 108 op: PROC (27)
    RefDS(_code_25121);
    _66insert_code(_code_25121, _pc_25120);
    // SubProg Goto_block pc: 112 op: ELSE (23)
    goto L6; // [112] 126
    // SubProg Goto_block pc: 114 op: NOP1 (159)
L5: // addr: 115 pc: 114 sub: 25114 op: 159
    // SubProg Goto_block pc: 115 op: STARTLINE (58)

    /** block.e:344				Code &= code*/
    // SubProg Goto_block pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 119 op: CONCAT (15)
    Concat((object_ptr)&_36Code_16524, _36Code_16524, _code_25121);
    // SubProg Goto_block pc: 123 op: SEQUENCE_CHECK (97)
    // SubProg Goto_block pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 25114 op: 159
    // SubProg Goto_block pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 25114 op: 159
    // SubProg Goto_block pc: 127 op: STARTLINE (58)

    /** block.e:348	end procedure*/
    // SubProg Goto_block pc: 129 op: RETURNP (29)

// Exiting block BLOCK: Goto_block

// block var from_block_25117

// block var to_block_25119

// block var pc_25120

// block var code_25121
    DeRefi(_code_25121);

// block var next_block_25123
    DeRef(_14191);
    _14191 = NOVALUE;
    return;
    // SubProg Goto_block pc: 132 op: BADRETURNF (43)
    ;
}


object _65Least_block()
{
    object _ix_25151 = NOVALUE;
    object _sub_block_25154 = NOVALUE;
    object _14213 = NOVALUE; // 25169 14213
    object _14212 = NOVALUE; // 25168 14212
// skipping _14211  name type: 0
    object _14210 = NOVALUE; // 25166 14210
    object _14209 = NOVALUE; // 25165 14209
    object _14208 = NOVALUE; // 25164 14208
    object _14207 = NOVALUE; // 25163 14207
    object _14206 = NOVALUE; // 25162 14206
    object _14205 = NOVALUE; // 25161 14205
    object _14204 = NOVALUE; // 25160 14204
    object _14203 = NOVALUE; // 25159 14203
// skipping _14202  name type: 0
// skipping _14201  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Least_block pc: 1 op: STARTLINE (58)

    /** block.e:358		integer ix = length( block_stack )*/
    // SubProg Least_block pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_65block_stack_24741)){
            _ix_25151 = SEQ_PTR(_65block_stack_24741)->length;
    }
    else {
        _ix_25151 = 1;
    }
    // SubProg Least_block pc: 8 op: STARTLINE (58)

    /** block.e:359		symtab_index sub_block = sym_block( CurrentSub )*/
    // SubProg Least_block pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 12 op: PROC (27)
    _sub_block_25154 = _54sym_block(_36CurrentSub_16444);
    // SubProg Least_block pc: 16 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sub_block_25154)) {
        _1 = (object)(DBL_PTR(_sub_block_25154)->dbl);
        DeRefDS(_sub_block_25154);
        _sub_block_25154 = _1;
    }
    // SubProg Least_block pc: 18 op: STARTLINE (58)

    /** block.e:360		while not length( block_stack[ix][BLOCK_VARS] ) */
    // SubProg Least_block pc: 20 op: NOP2 (110)
    // SubProg Least_block pc: 22 op: NOPWHILE (158)
L1: // addr: 23 pc: 22 sub: 25149 op: 158
    // SubProg Least_block pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14203 = (object)*(((s1_ptr)_2)->base + _ix_25151);
    // SubProg Least_block pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14203);
    _14204 = (object)*(((s1_ptr)_2)->base + 6);
    _14203 = NOVALUE;
    // SubProg Least_block pc: 33 op: LENGTH (42)
    if (IS_SEQUENCE(_14204)){
            _14205 = SEQ_PTR(_14204)->length;
    }
    else {
        _14205 = 1;
    }
    _14204 = NOVALUE;
    // SubProg Least_block pc: 36 op: NOT (7)
    _14206 = (_14205 == 0);
    _14205 = NOVALUE;
    // SubProg Least_block pc: 39 op: SC1_AND_IF (146)
    if (_14206 == 0) {
        goto L2; // [39] 72
    }
    // SubProg Least_block pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 45 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14208 = (object)*(((s1_ptr)_2)->base + _ix_25151);
    // SubProg Least_block pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14208);
    _14209 = (object)*(((s1_ptr)_2)->base + 1);
    _14208 = NOVALUE;
    // SubProg Least_block pc: 53 op: NOTEQ (4)
    if (IS_ATOM_INT(_14209)) {
        _14210 = (_14209 != _sub_block_25154);
    }
    else {
        _14210 = binary_op(NOTEQ, _14209, _sub_block_25154);
    }
    _14209 = NOVALUE;
    // SubProg Least_block pc: 57 op: NOP1 (159)
    // SubProg Least_block pc: 58 op: WHILE (47)
    if (_14210 <= 0) {
        if (_14210 == 0) {
            DeRef(_14210);
            _14210 = NOVALUE;
            goto L2; // [58] 72
        }
        else {
            if (!IS_ATOM_INT(_14210) && DBL_PTR(_14210)->dbl == 0.0){
                DeRef(_14210);
                _14210 = NOVALUE;
                goto L2; // [58] 72
            }
            DeRef(_14210);
            _14210 = NOVALUE;
        }
    }
    DeRef(_14210);
    _14210 = NOVALUE;
    // SubProg Least_block pc: 61 op: STARTLINE (58)

    /** block.e:362			ix -= 1	*/
    // SubProg Least_block pc: 63 op: MINUS_I (116)
    _ix_25151 = _ix_25151 - 1;
    // SubProg Least_block pc: 67 op: STARTLINE (58)

    /** block.e:363		end while*/
    // SubProg Least_block pc: 69 op: ENDWHILE (22)
    goto L1; // [69] 23
    // SubProg Least_block pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 25149 op: 159
    // SubProg Least_block pc: 72 op: STARTLINE (58)

    /** block.e:364		return block_stack[ix][BLOCK_SYM]*/
    // SubProg Least_block pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_65block_stack_24741);
    _14212 = (object)*(((s1_ptr)_2)->base + _ix_25151);
    // SubProg Least_block pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14212);
    _14213 = (object)*(((s1_ptr)_2)->base + 1);
    _14212 = NOVALUE;
    // SubProg Least_block pc: 84 op: RETURNF (28)
    Ref(_14213);

// Exiting block BLOCK: Least_block

// block var ix_25151

// block var sub_block_25154
    _14204 = NOVALUE;
    DeRef(_14206);
    _14206 = NOVALUE;
    return _14213;
    // SubProg Least_block pc: 88 op: BADRETURNF (43)
    ;
}



// 0x7A8F54F7
