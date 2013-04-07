// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _64block_type_name(object _opcode_24776)
{
    object _14029 = NOVALUE; // 24789 14029
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg block_type_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_opcode_24776)) {
        _1 = (object)(DBL_PTR(_opcode_24776)->dbl);
        DeRefDS(_opcode_24776);
        _opcode_24776 = _1;
    }
    // SubProg block_type_name pc: 3 op: STARTLINE (58)

    /** block.e:51		switch opcode do*/
    // SubProg block_type_name pc: 5 op: SWITCH_I (193)
    _0 = _opcode_24776;
    switch ( _0 ){ 
        // SubProg block_type_name pc: 10 op: STARTLINE (58)

        /** block.e:52			case LOOP then*/
        // SubProg block_type_name pc: 12 op: CASE (186)
        case 422:
        // SubProg block_type_name pc: 14 op: STARTLINE (58)

        /** block.e:53				return "LOOP"*/
        // SubProg block_type_name pc: 16 op: RETURNF (28)
        RefDS(_14027);

// Exiting block BLOCK: block_type_name

// block var opcode_24776
        return _14027;
        // SubProg block_type_name pc: 20 op: ELSE (23)
        goto L1; // [20] 63
        // SubProg block_type_name pc: 22 op: STARTLINE (58)

        /** block.e:54			case PROC then*/
        // SubProg block_type_name pc: 24 op: CASE (186)
        case 27:
        // SubProg block_type_name pc: 26 op: STARTLINE (58)

        /** block.e:55				return "PROC"*/
        // SubProg block_type_name pc: 28 op: RETURNF (28)
        RefDS(_12933);

// Exiting block BLOCK: block_type_name

// block var opcode_24776
        return _12933;
        // SubProg block_type_name pc: 32 op: ELSE (23)
        goto L1; // [32] 63
        // SubProg block_type_name pc: 34 op: STARTLINE (58)

        /** block.e:56			case FUNC then*/
        // SubProg block_type_name pc: 36 op: CASE (186)
        case 501:
        // SubProg block_type_name pc: 38 op: STARTLINE (58)

        /** block.e:57				return "FUNC"*/
        // SubProg block_type_name pc: 40 op: RETURNF (28)
        RefDS(_14028);

// Exiting block BLOCK: block_type_name

// block var opcode_24776
        return _14028;
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
        _2 = (object)SEQ_PTR(_60opnames_22542);
        _14029 = (object)*(((s1_ptr)_2)->base + _opcode_24776);
        // SubProg block_type_name pc: 58 op: RETURNF (28)
        RefDS(_14029);

// Exiting block BLOCK: block_type_name

// block var opcode_24776
        return _14029;
        // SubProg block_type_name pc: 62 op: NOPSWITCH (187)
    ;}L1: // addr: 63 pc: 62 sub: 24774 op: 187
    // SubProg block_type_name pc: 63 op: BADRETURNF (43)
    ;
}


void _64check_block(object _got_24792)
{
    object _expected_24793 = NOVALUE;
    object _14037 = NOVALUE; // 24806 14037
    object _14036 = NOVALUE; // 24805 14036
    object _14035 = NOVALUE; // 24804 14035
// skipping _14034  name type: 0
// skipping _14033  name type: 0
// skipping _14032  name type: 0
    object _14031 = NOVALUE; // 24795 14031
    object _14030 = NOVALUE; // 24794 14030
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_block pc: 3 op: STARTLINE (58)

    /** block.e:64		integer expected = block_stack[$][BLOCK_OPCODE]*/
    // SubProg check_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14030 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14030 = 1;
    }
    // SubProg check_block pc: 10 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14031 = (object)*(((s1_ptr)_2)->base + _14030);
    // SubProg check_block pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14031);
    _expected_24793 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_expected_24793)){
        _expected_24793 = (object)DBL_PTR(_expected_24793)->dbl;
    }
    _14031 = NOVALUE;
    // SubProg check_block pc: 20 op: STARTLINE (58)

    /** block.e:65		if got = FUNC then*/
    // SubProg check_block pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 24 op: EQUALS_IFW (104)
    if (_got_24792 != 501)
    goto L1; // [24] 38
    // SubProg check_block pc: 28 op: STARTLINE (58)

    /** block.e:66			got = PROC*/
    // SubProg check_block pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 32 op: ASSIGN (18)
    _got_24792 = 27;
    // SubProg check_block pc: 35 op: INTEGER_CHECK (96)
    // SubProg check_block pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 24790 op: 159
    // SubProg check_block pc: 38 op: STARTLINE (58)

    /** block.e:68		if got != expected then*/
    // SubProg check_block pc: 40 op: NOTEQ_IFW_I (122)
    if (_got_24792 == _expected_24793)
    goto L2; // [40] 64
    // SubProg check_block pc: 44 op: STARTLINE (58)

    /** block.e:69			CompileErr( 79, {block_type_name( expected ), block_type_name( got)} )*/
    // SubProg check_block pc: 46 op: PROC (27)
    _14035 = _64block_type_name(_expected_24793);
    // SubProg check_block pc: 50 op: PROC (27)
    _14036 = _64block_type_name(_got_24792);
    // SubProg check_block pc: 54 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14035;
    ((intptr_t *)_2)[2] = _14036;
    _14037 = MAKE_SEQ(_1);
    _14036 = NOVALUE;
    _14035 = NOVALUE;
    // SubProg check_block pc: 58 op: PROC (27)
    _49CompileErr(79, _14037, 0);
    _14037 = NOVALUE;
    // SubProg check_block pc: 63 op: NOP1 (159)
L2: // addr: 64 pc: 63 sub: 24790 op: 159
    // SubProg check_block pc: 64 op: STARTLINE (58)

    /** block.e:71	end procedure*/
    // SubProg check_block pc: 66 op: RETURNP (29)

// Exiting block BLOCK: check_block

// block var got_24792

// block var expected_24793
    return;
    // SubProg check_block pc: 69 op: BADRETURNF (43)
    ;
}


void _64Block_var(object _sym_24810)
{
    object _block_24811 = NOVALUE;
    object _14058 = NOVALUE; // 24841 14058
    object _14057 = NOVALUE; // 24840 14057
    object _14056 = NOVALUE; // 24839 14056
// skipping _14055  name type: 0
    object _14054 = NOVALUE; // 24836 14054
    object _14053 = NOVALUE; // 24835 14053
// skipping _14052  name type: 0
    object _14051 = NOVALUE; // 24830 14051
    object _14050 = NOVALUE; // 24829 14050
    object _14049 = NOVALUE; // 24828 14049
    object _14048 = NOVALUE; // 24827 14048
    object _14047 = NOVALUE; // 24825 14047
    object _14046 = NOVALUE; // 24824 14046
    object _14045 = NOVALUE; // 24822 14045
// skipping _14044  name type: 0
    object _14043 = NOVALUE; // 24819 14043
// skipping _14042  name type: 0
    object _14041 = NOVALUE; // 24816 14041
    object _14040 = NOVALUE; // 24814 14040
// skipping _14039  name type: 0
    object _14038 = NOVALUE; // 24812 14038
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Block_var pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_24810)) {
        _1 = (object)(DBL_PTR(_sym_24810)->dbl);
        DeRefDS(_sym_24810);
        _sym_24810 = _1;
    }
    // SubProg Block_var pc: 3 op: STARTLINE (58)

    /** block.e:75		sequence block = block_stack[$]*/
    // SubProg Block_var pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14038 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14038 = 1;
    }
    // SubProg Block_var pc: 10 op: RHS_SUBS (25)
    DeRef(_block_24811);
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _block_24811 = (object)*(((s1_ptr)_2)->base + _14038);
    Ref(_block_24811);
    // SubProg Block_var pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg Block_var pc: 16 op: STARTLINE (58)

    /** block.e:76		block_stack[$] = 0*/
    // SubProg Block_var pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14040 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14040 = 1;
    }
    // SubProg Block_var pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _2 = (object)(((s1_ptr)_2)->base + _14040);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg Block_var pc: 27 op: STARTLINE (58)

    /** block.e:77		if length(block_stack) > 1 then*/
    // SubProg Block_var pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14041 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14041 = 1;
    }
    // SubProg Block_var pc: 34 op: GREATER_IFW_I (124)
    if (_14041 <= 1)
    goto L1; // [34] 58
    // SubProg Block_var pc: 38 op: STARTLINE (58)

    /** block.e:79			SymTab[sym][S_BLOCK] = block[BLOCK_SYM]*/
    // SubProg Block_var pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 42 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_24810 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24811);
    _14045 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Block_var pc: 53 op: PASSIGN_SUBS (162)
    Ref(_14045);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_BLOCK_12152))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_BLOCK_12152);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14045;
    if( _1 != _14045 ){
        DeRef(_1);
    }
    _14045 = NOVALUE;
    _14043 = NOVALUE;
    // SubProg Block_var pc: 57 op: NOP1 (159)
L1: // addr: 58 pc: 57 sub: 24807 op: 159
    // SubProg Block_var pc: 58 op: STARTLINE (58)

    /** block.e:82		if length(block[BLOCK_VARS]) then*/
    // SubProg Block_var pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24811);
    _14046 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 64 op: LENGTH (42)
    if (IS_SEQUENCE(_14046)){
            _14047 = SEQ_PTR(_14046)->length;
    }
    else {
        _14047 = 1;
    }
    _14046 = NOVALUE;
    // SubProg Block_var pc: 67 op: IF (20)
    if (_14047 == 0)
    {
        _14047 = NOVALUE;
        goto L2; // [67] 99
    }
    else{
        _14047 = NOVALUE;
    }
    // SubProg Block_var pc: 70 op: STARTLINE (58)

    /** block.e:83			SymTab[block[BLOCK_VARS][$]][S_NEXT_IN_BLOCK] = sym*/
    // SubProg Block_var pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24811);
    _14048 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_14048)){
            _14049 = SEQ_PTR(_14048)->length;
    }
    else {
        _14049 = 1;
    }
    // SubProg Block_var pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14048);
    _14050 = (object)*(((s1_ptr)_2)->base + _14049);
    _14048 = NOVALUE;
    // SubProg Block_var pc: 85 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14050))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14050)->dbl));
    else
    _3 = (object)(_14050 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 92 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24810;
    DeRef(_1);
    _14051 = NOVALUE;
    // SubProg Block_var pc: 96 op: ELSE (23)
    goto L3; // [96] 119
    // SubProg Block_var pc: 98 op: NOP1 (159)
L2: // addr: 99 pc: 98 sub: 24807 op: 159
    // SubProg Block_var pc: 99 op: STARTLINE (58)

    /** block.e:85			SymTab[block[BLOCK_SYM]][S_NEXT_IN_BLOCK] = sym*/
    // SubProg Block_var pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24811);
    _14053 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Block_var pc: 107 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14053))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14053)->dbl));
    else
    _3 = (object)(_14053 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 114 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24810;
    DeRef(_1);
    _14054 = NOVALUE;
    // SubProg Block_var pc: 118 op: NOP1 (159)
L3: // addr: 119 pc: 118 sub: 24807 op: 159
    // SubProg Block_var pc: 119 op: STARTLINE (58)

    /** block.e:88		block[BLOCK_VARS] &= sym*/
    // SubProg Block_var pc: 121 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_block_24811);
    _14056 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 125 op: CONCAT (15)
    if (IS_SEQUENCE(_14056) && IS_ATOM(_sym_24810)) {
        Append(&_14057, _14056, _sym_24810);
    }
    else if (IS_ATOM(_14056) && IS_SEQUENCE(_sym_24810)) {
    }
    else {
        Concat((object_ptr)&_14057, _14056, _sym_24810);
        _14056 = NOVALUE;
    }
    _14056 = NOVALUE;
    // SubProg Block_var pc: 129 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_block_24811);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24811 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14057;
    if( _1 != _14057 ){
        DeRef(_1);
    }
    _14057 = NOVALUE;
    // SubProg Block_var pc: 133 op: STARTLINE (58)

    /** block.e:90		block_stack[$] = block*/
    // SubProg Block_var pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14058 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14058 = 1;
    }
    // SubProg Block_var pc: 140 op: ASSIGN_SUBS (16)
    RefDS(_block_24811);
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _2 = (object)(((s1_ptr)_2)->base + _14058);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _block_24811;
    DeRef(_1);
    // SubProg Block_var pc: 144 op: STARTLINE (58)

    /** block.e:91		ifdef BDEBUG then*/
    // SubProg Block_var pc: 146 op: STARTLINE (58)

    /** block.e:96	end procedure*/
    // SubProg Block_var pc: 148 op: RETURNP (29)

// Exiting block BLOCK: Block_var

// block var sym_24810

// block var block_24811
    DeRefDS(_block_24811);
    _14050 = NOVALUE;
    _14053 = NOVALUE;
    _14046 = NOVALUE;
    return;
    // SubProg Block_var pc: 151 op: BADRETURNF (43)
    ;
}


void _64NewBlock(object _opcode_24845, object _block_label_24846)
{
    object _block_24864 = NOVALUE;
// skipping _14074  name type: 0
// skipping _14073  name type: 0
    object _14072 = NOVALUE; // 24871 14072
    object _14071 = NOVALUE; // 24870 14071
    object _14070 = NOVALUE; // 24868 14070
// skipping _14069  name type: 0
    object _14068 = NOVALUE; // 24865 14068
// skipping _14067  name type: 0
    object _14066 = NOVALUE; // 24860 14066
    object _14065 = NOVALUE; // 24859 14065
// skipping _14064  name type: 0
    object _14063 = NOVALUE; // 24854 14063
    object _14062 = NOVALUE; // 24853 14062
// skipping _14061  name type: 0
    object _14060 = NOVALUE; // 24850 14060
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewBlock pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewBlock pc: 3 op: STARTLINE (58)

    /** block.e:101		SymTab = append( SymTab, repeat( 0, SIZEOF_BLOCK_ENTRY ) )*/
    // SubProg NewBlock pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 9 op: REPEAT (32)
    _14060 = Repeat(0, _5SIZEOF_BLOCK_ENTRY_12264);
    // SubProg NewBlock pc: 13 op: APPEND (35)
    RefDS(_14060);
    Append(&_7SymTab_11389, _7SymTab_11389, _14060);
    DeRefDS(_14060);
    _14060 = NOVALUE;
    // SubProg NewBlock pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg NewBlock pc: 19 op: STARTLINE (58)

    /** block.e:102		SymTab[$][S_MODE] = M_BLOCK*/
    // SubProg NewBlock pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _14062 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _14062 = 1;
    }
    // SubProg NewBlock pc: 26 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14062 + ((s1_ptr)_2)->base);
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
    _14063 = NOVALUE;
    // SubProg NewBlock pc: 39 op: STARTLINE (58)

    /** block.e:103		SymTab[$][S_FIRST_LINE] = gline_number*/
    // SubProg NewBlock pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _14065 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _14065 = 1;
    }
    // SubProg NewBlock pc: 46 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14065 + ((s1_ptr)_2)->base);
    // SubProg NewBlock pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 55 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_FIRST_LINE_12157))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FIRST_LINE_12157)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_FIRST_LINE_12157);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5gline_number_12482;
    DeRef(_1);
    _14066 = NOVALUE;
    // SubProg NewBlock pc: 59 op: STARTLINE (58)

    /** block.e:105		sequence block = repeat( 0, BLOCK_SIZE-1 )*/
    // SubProg NewBlock pc: 61 op: MINUS (10)
    _14068 = 6;
    // SubProg NewBlock pc: 65 op: REPEAT (32)
    DeRef(_block_24864);
    _block_24864 = Repeat(0, 6);
    _14068 = NOVALUE;
    // SubProg NewBlock pc: 69 op: STARTLINE (58)

    /** block.e:106		block[BLOCK_SYM]    = length(SymTab)*/
    // SubProg NewBlock pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _14070 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _14070 = 1;
    }
    // SubProg NewBlock pc: 76 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_block_24864);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24864 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    *(intptr_t *)_2 = _14070;
    if( _1 != _14070 ){
    }
    _14070 = NOVALUE;
    // SubProg NewBlock pc: 80 op: STARTLINE (58)

    /** block.e:107		block[BLOCK_OPCODE] = opcode*/
    // SubProg NewBlock pc: 82 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_block_24864);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24864 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    *(intptr_t *)_2 = _opcode_24845;
    // SubProg NewBlock pc: 86 op: STARTLINE (58)

    /** block.e:108		block[BLOCK_LABEL]  = block_label*/
    // SubProg NewBlock pc: 88 op: ASSIGN_SUBS (16)
    Ref(_block_label_24846);
    _2 = (object)SEQ_PTR(_block_24864);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24864 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    *(intptr_t *)_2 = _block_label_24846;
    // SubProg NewBlock pc: 92 op: STARTLINE (58)

    /** block.e:109		block[BLOCK_START]  = length(Code) + 1*/
    // SubProg NewBlock pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_5Code_12566)){
            _14071 = SEQ_PTR(_5Code_12566)->length;
    }
    else {
        _14071 = 1;
    }
    // SubProg NewBlock pc: 99 op: PLUS1 (93)
    _14072 = _14071 + 1;
    _14071 = NOVALUE;
    // SubProg NewBlock pc: 103 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_block_24864);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24864 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14072;
    if( _1 != _14072 ){
        DeRef(_1);
    }
    _14072 = NOVALUE;
    // SubProg NewBlock pc: 107 op: STARTLINE (58)

    /** block.e:110		block[BLOCK_VARS]   = {}*/
    // SubProg NewBlock pc: 109 op: ASSIGN_SUBS (16)
    RefDS(_5);
    _2 = (object)SEQ_PTR(_block_24864);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24864 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5;
    DeRef(_1);
    // SubProg NewBlock pc: 113 op: STARTLINE (58)

    /** block.e:112		block_stack = append( block_stack, block )*/
    // SubProg NewBlock pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 117 op: APPEND (35)
    RefDS(_block_24864);
    Append(&_64block_stack_24765, _64block_stack_24765, _block_24864);
    // SubProg NewBlock pc: 121 op: STARTLINE (58)

    /** block.e:113		current_block = length(SymTab)*/
    // SubProg NewBlock pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 125 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _64current_block_24772 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _64current_block_24772 = 1;
    }
    // SubProg NewBlock pc: 128 op: INTEGER_CHECK (96)
    // SubProg NewBlock pc: 130 op: STARTLINE (58)

    /** block.e:114	end procedure*/
    // SubProg NewBlock pc: 132 op: RETURNP (29)

// Exiting block BLOCK: NewBlock

// block var opcode_24845

// block var block_label_24846
    DeRefi(_block_label_24846);

// block var block_24864
    DeRefDS(_block_24864);
    return;
    // SubProg NewBlock pc: 135 op: BADRETURNF (43)
    ;
}


void _64Start_block(object _opcode_24877, object _block_label_24878)
{
    object _last_block_24880 = NOVALUE;
    object _label_name_24908 = NOVALUE;
    object _14094 = NOVALUE; // 24918 14094
    object _14093 = NOVALUE; // 24917 14093
    object _14092 = NOVALUE; // 24916 14092
// skipping _14090  name type: 0
    object _14089 = NOVALUE; // 24912 14089
    object _14088 = NOVALUE; // 24910 14088
// skipping _14087  name type: 0
    object _14086 = NOVALUE; // 24905 14086
    object _14085 = NOVALUE; // 24902 14085
    object _14084 = NOVALUE; // 24901 14084
    object _14083 = NOVALUE; // 24900 14083
    object _14082 = NOVALUE; // 24898 14082
// skipping _14080  name type: 0
    object _14079 = NOVALUE; // 24893 14079
// skipping _14078  name type: 0
    object _14077 = NOVALUE; // 24889 14077
    object _14076 = NOVALUE; // 24887 14076
// skipping _14075  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Start_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 3 op: STARTLINE (58)

    /** block.e:120		symtab_index last_block = current_block*/
    // SubProg Start_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 7 op: ASSIGN (18)
    _last_block_24880 = _64current_block_24772;
    // SubProg Start_block pc: 10 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 12 op: STARTLINE (58)

    /** block.e:121		if opcode = FUNC then*/
    // SubProg Start_block pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 16 op: EQUALS_IFW (104)
    if (_opcode_24877 != 501)
    goto L1; // [16] 30
    // SubProg Start_block pc: 20 op: STARTLINE (58)

    /** block.e:122			opcode = PROC*/
    // SubProg Start_block pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 24 op: ASSIGN (18)
    _opcode_24877 = 27;
    // SubProg Start_block pc: 27 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 24875 op: 159
    // SubProg Start_block pc: 30 op: STARTLINE (58)

    /** block.e:124		NewBlock( opcode, block_label )*/
    // SubProg Start_block pc: 32 op: PROC (27)
    Ref(_block_label_24878);
    _64NewBlock(_opcode_24877, _block_label_24878);
    // SubProg Start_block pc: 36 op: STARTLINE (58)

    /** block.e:126		if find(opcode, RTN_TOKS) then*/
    // SubProg Start_block pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 40 op: FIND_FROM (176)
    _14076 = find_from(_opcode_24877, _29RTN_TOKS_12080, 1);
    // SubProg Start_block pc: 45 op: IF (20)
    if (_14076 == 0)
    {
        _14076 = NOVALUE;
        goto L2; // [45] 105
    }
    else{
        _14076 = NOVALUE;
    }
    // SubProg Start_block pc: 48 op: STARTLINE (58)

    /** block.e:127			SymTab[block_label][S_BLOCK] = current_block*/
    // SubProg Start_block pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 52 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_block_label_24878))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24878)->dbl));
    else
    _3 = (object)(_block_label_24878 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 61 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_BLOCK_12152))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_BLOCK_12152);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _64current_block_24772;
    DeRef(_1);
    _14077 = NOVALUE;
    // SubProg Start_block pc: 65 op: STARTLINE (58)

    /** block.e:128			SymTab[current_block][S_NAME] = sprintf("BLOCK: %s", {SymTab[block_label][S_NAME]})*/
    // SubProg Start_block pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 71 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24772 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_block_label_24878)){
        _14082 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24878)->dbl));
    }
    else{
        _14082 = (object)*(((s1_ptr)_2)->base + _block_label_24878);
    }
    // SubProg Start_block pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14082);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _14083 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _14083 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _14082 = NOVALUE;
    // SubProg Start_block pc: 90 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_14083);
    ((intptr_t*)_2)[1] = _14083;
    _14084 = MAKE_SEQ(_1);
    _14083 = NOVALUE;
    // SubProg Start_block pc: 94 op: SPRINTF (53)
    _14085 = EPrintf(-9999999, _14081, _14084);
    DeRefDS(_14084);
    _14084 = NOVALUE;
    // SubProg Start_block pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NAME_12132))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NAME_12132);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14085;
    if( _1 != _14085 ){
        DeRef(_1);
    }
    _14085 = NOVALUE;
    _14079 = NOVALUE;
    // SubProg Start_block pc: 102 op: ELSE (23)
    goto L3; // [102] 185
    // SubProg Start_block pc: 104 op: NOP1 (159)
L2: // addr: 105 pc: 104 sub: 24875 op: 159
    // SubProg Start_block pc: 105 op: STARTLINE (58)

    /** block.e:129		elsif current_block then*/
    // SubProg Start_block pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 109 op: IF (20)
    if (_64current_block_24772 == 0)
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
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24772 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 125 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_BLOCK_12152))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_BLOCK_12152);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _last_block_24880;
    DeRef(_1);
    _14086 = NOVALUE;
    // SubProg Start_block pc: 129 op: STARTLINE (58)

    /** block.e:136			sequence label_name = ""*/
    // SubProg Start_block pc: 131 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_label_name_24908);
    _label_name_24908 = _5;
    // SubProg Start_block pc: 134 op: SEQUENCE_CHECK (97)
    // SubProg Start_block pc: 136 op: STARTLINE (58)

    /** block.e:137			if sequence(block_label) then*/
    // SubProg Start_block pc: 138 op: IS_A_SEQUENCE (68)
    _14088 = IS_SEQUENCE(_block_label_24878);
    // SubProg Start_block pc: 141 op: IF (20)
    if (_14088 == 0)
    {
        _14088 = NOVALUE;
        goto L5; // [141] 152
    }
    else{
        _14088 = NOVALUE;
    }
    // SubProg Start_block pc: 144 op: STARTLINE (58)

    /** block.e:138				label_name = block_label*/
    // SubProg Start_block pc: 146 op: ASSIGN (18)
    Ref(_block_label_24878);
    DeRefDSi(_label_name_24908);
    _label_name_24908 = _block_label_24878;
    // SubProg Start_block pc: 149 op: SEQUENCE_CHECK (97)
    // SubProg Start_block pc: 151 op: NOP1 (159)
L5: // addr: 152 pc: 151 sub: 24875 op: 159
    // SubProg Start_block pc: 152 op: STARTLINE (58)

    /** block.e:141			SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", {block_type_name(opcode), label_name})*/
    // SubProg Start_block pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 158 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24772 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 165 op: PROC (27)
    _14092 = _64block_type_name(_opcode_24877);
    // SubProg Start_block pc: 169 op: RIGHT_BRACE_2 (85)
    RefDS(_label_name_24908);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14092;
    ((intptr_t *)_2)[2] = _label_name_24908;
    _14093 = MAKE_SEQ(_1);
    _14092 = NOVALUE;
    // SubProg Start_block pc: 173 op: SPRINTF (53)
    _14094 = EPrintf(-9999999, _14091, _14093);
    DeRefDS(_14093);
    _14093 = NOVALUE;
    // SubProg Start_block pc: 177 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NAME_12132))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NAME_12132);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14094;
    if( _1 != _14094 ){
        DeRef(_1);
    }
    _14094 = NOVALUE;
    _14089 = NOVALUE;
    // SubProg Start_block pc: 181 op: NOP1 (159)
L4: // addr: 182 pc: 181 sub: 24875 op: 159
    // SubProg Start_block pc: 182 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var label_name_24908
    DeRefi(_label_name_24908);
    _label_name_24908 = NOVALUE;
    // SubProg Start_block pc: 184 op: NOP1 (159)
L3: // addr: 185 pc: 184 sub: 24875 op: 159
    // SubProg Start_block pc: 185 op: STARTLINE (58)

    /** block.e:144		ifdef BDEBUG then*/
    // SubProg Start_block pc: 187 op: STARTLINE (58)

    /** block.e:153	end procedure*/
    // SubProg Start_block pc: 189 op: RETURNP (29)

// Exiting block BLOCK: Start_block

// block var opcode_24877

// block var block_label_24878
    DeRefi(_block_label_24878);

// block var last_block_24880
    return;
    // SubProg Start_block pc: 192 op: BADRETURNF (43)
    ;
}


void _64block_label(object _label_name_24924)
{
    object _14108 = NOVALUE; // 24937 14108
    object _14107 = NOVALUE; // 24936 14107
    object _14106 = NOVALUE; // 24935 14106
    object _14105 = NOVALUE; // 24934 14105
    object _14104 = NOVALUE; // 24933 14104
    object _14103 = NOVALUE; // 24932 14103
// skipping _14102  name type: 0
    object _14101 = NOVALUE; // 24929 14101
// skipping _14100  name type: 0
    object _14099 = NOVALUE; // 24926 14099
    object _14098 = NOVALUE; // 24925 14098
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg block_label pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg block_label pc: 3 op: STARTLINE (58)

    /** block.e:157		block_stack[$][BLOCK_LABEL] = label_name*/
    // SubProg block_label pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14098 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14098 = 1;
    }
    // SubProg block_label pc: 10 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _64block_stack_24765 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14098 + ((s1_ptr)_2)->base);
    // SubProg block_label pc: 15 op: PASSIGN_SUBS (162)
    RefDS(_label_name_24924);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _label_name_24924;
    DeRef(_1);
    _14099 = NOVALUE;
    // SubProg block_label pc: 19 op: STARTLINE (58)

    /** block.e:158		SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", */
    // SubProg block_label pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 25 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24772 + ((s1_ptr)_2)->base);
    // SubProg block_label pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14103 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14103 = 1;
    }
    // SubProg block_label pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14104 = (object)*(((s1_ptr)_2)->base + _14103);
    // SubProg block_label pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14104);
    _14105 = (object)*(((s1_ptr)_2)->base + 2);
    _14104 = NOVALUE;
    // SubProg block_label pc: 45 op: PROC (27)
    Ref(_14105);
    _14106 = _64block_type_name(_14105);
    _14105 = NOVALUE;
    // SubProg block_label pc: 49 op: RIGHT_BRACE_2 (85)
    RefDS(_label_name_24924);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14106;
    ((intptr_t *)_2)[2] = _label_name_24924;
    _14107 = MAKE_SEQ(_1);
    _14106 = NOVALUE;
    // SubProg block_label pc: 53 op: SPRINTF (53)
    _14108 = EPrintf(-9999999, _14091, _14107);
    DeRefDS(_14107);
    _14107 = NOVALUE;
    // SubProg block_label pc: 57 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NAME_12132))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NAME_12132);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14108;
    if( _1 != _14108 ){
        DeRef(_1);
    }
    _14108 = NOVALUE;
    _14101 = NOVALUE;
    // SubProg block_label pc: 61 op: STARTLINE (58)

    /** block.e:160	end procedure*/
    // SubProg block_label pc: 63 op: RETURNP (29)

// Exiting block BLOCK: block_label

// block var label_name_24924
    DeRefDS(_label_name_24924);
    return;
    // SubProg block_label pc: 66 op: BADRETURNF (43)
    ;
}


object _64pop_block()
{
    object _block_24943 = NOVALUE;
    object _block_vars_24956 = NOVALUE;
    object _14137 = NOVALUE; // 24985 14137
// skipping _14136  name type: 0
    object _14135 = NOVALUE; // 24983 14135
    object _14134 = NOVALUE; // 24982 14134
    object _14133 = NOVALUE; // 24981 14133
    object _14132 = NOVALUE; // 24979 14132
    object _14130 = NOVALUE; // 24976 14130
    object _14129 = NOVALUE; // 24974 14129
    object _14128 = NOVALUE; // 24972 14128
    object _14127 = NOVALUE; // 24971 14127
    object _14126 = NOVALUE; // 24969 14126
    object _14125 = NOVALUE; // 24968 14125
    object _14124 = NOVALUE; // 24966 14124
    object _14123 = NOVALUE; // 24964 14123
    object _14122 = NOVALUE; // 24963 14122
    object _14121 = NOVALUE; // 24960 14121
// skipping _14120  name type: 0
// skipping _14118  name type: 0
    object _14117 = NOVALUE; // 24951 14117
    object _14116 = NOVALUE; // 24950 14116
// skipping _14115  name type: 0
    object _14114 = NOVALUE; // 24947 14114
    object _14113 = NOVALUE; // 24946 14113
// skipping _14112  name type: 0
    object _14111 = NOVALUE; // 24944 14111
// skipping _14110  name type: 0
    object _14109 = NOVALUE; // 24941 14109
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg pop_block pc: 1 op: STARTLINE (58)

    /** block.e:164		if not length(block_stack) then*/
    // SubProg pop_block pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14109 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14109 = 1;
    }
    // SubProg pop_block pc: 8 op: NOT_IFW (108)
    if (_14109 != 0)
    goto L1; // [8] 18
    _14109 = NOVALUE;
    // SubProg pop_block pc: 11 op: STARTLINE (58)

    /** block.e:165			return 0*/
    // SubProg pop_block pc: 13 op: RETURNF (28)

// Exiting block BLOCK: pop_block

// block var block_24943
    DeRef(_block_24943);

// block var block_vars_24956
    DeRef(_block_vars_24956);
    return 0;
    // SubProg pop_block pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 24938 op: 159
    // SubProg pop_block pc: 18 op: STARTLINE (58)

    /** block.e:168		sequence  block = block_stack[$]*/
    // SubProg pop_block pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14111 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14111 = 1;
    }
    // SubProg pop_block pc: 25 op: RHS_SUBS (25)
    DeRef(_block_24943);
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _block_24943 = (object)*(((s1_ptr)_2)->base + _14111);
    Ref(_block_24943);
    // SubProg pop_block pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg pop_block pc: 31 op: STARTLINE (58)

    /** block.e:169		block_stack = block_stack[1..$-1]*/
    // SubProg pop_block pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14113 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14113 = 1;
    }
    // SubProg pop_block pc: 38 op: MINUS (10)
    _14114 = _14113 - 1;
    _14113 = NOVALUE;
    // SubProg pop_block pc: 42 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_64block_stack_24765;
    RHS_Slice(_64block_stack_24765, 1, _14114);
    // SubProg pop_block pc: 47 op: STARTLINE (58)

    /** block.e:170		SymTab[block[BLOCK_SYM]][S_LAST_LINE] = gline_number*/
    // SubProg pop_block pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24943);
    _14116 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg pop_block pc: 55 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14116))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14116)->dbl));
    else
    _3 = (object)(_14116 + ((s1_ptr)_2)->base);
    // SubProg pop_block pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 64 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_LAST_LINE_12162))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LAST_LINE_12162)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_LAST_LINE_12162);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5gline_number_12482;
    DeRef(_1);
    _14117 = NOVALUE;
    // SubProg pop_block pc: 68 op: STARTLINE (58)

    /** block.e:172		ifdef BDEBUG then*/
    // SubProg pop_block pc: 70 op: STARTLINE (58)

    /** block.e:177		sequence block_vars = block[BLOCK_VARS]*/
    // SubProg pop_block pc: 72 op: RHS_SUBS (25)
    DeRef(_block_vars_24956);
    _2 = (object)SEQ_PTR(_block_24943);
    _block_vars_24956 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_block_vars_24956);
    // SubProg pop_block pc: 76 op: SEQUENCE_CHECK (97)
    // SubProg pop_block pc: 78 op: STARTLINE (58)

    /** block.e:178		for sx = 1 to length( block_vars ) do*/
    // SubProg pop_block pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_block_vars_24956)){
            _14121 = SEQ_PTR(_block_vars_24956)->length;
    }
    else {
        _14121 = 1;
    }
    // SubProg pop_block pc: 83 op: FOR_I (125)
    {
        object _sx_24959;
        _sx_24959 = 1;
L2: // addr: 90 pc: 83 sub: 24938 op: 125
        if (_sx_24959 > _14121){
            goto L3; // [83] 172
        }
        // SubProg pop_block pc: 90 op: STARTLINE (58)

        /** block.e:180			if SymTab[block_vars[sx]][S_MODE] = M_NORMAL */
        // SubProg pop_block pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 94 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24956);
        _14122 = (object)*(((s1_ptr)_2)->base + _sx_24959);
        // SubProg pop_block pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!IS_ATOM_INT(_14122)){
            _14123 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14122)->dbl));
        }
        else{
            _14123 = (object)*(((s1_ptr)_2)->base + _14122);
        }
        // SubProg pop_block pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 104 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14123);
        _14124 = (object)*(((s1_ptr)_2)->base + 3);
        _14123 = NOVALUE;
        // SubProg pop_block pc: 108 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 110 op: EQUALS (3)
        if (IS_ATOM_INT(_14124)) {
            _14125 = (_14124 == 1);
        }
        else {
            _14125 = binary_op(EQUALS, _14124, 1);
        }
        _14124 = NOVALUE;
        // SubProg pop_block pc: 114 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_14125)) {
            if (_14125 == 0) {
                goto L4; // [114] 165
            }
        }
        else {
            if (DBL_PTR(_14125)->dbl == 0.0) {
                goto L4; // [114] 165
            }
        }
        // SubProg pop_block pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 120 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24956);
        _14127 = (object)*(((s1_ptr)_2)->base + _sx_24959);
        // SubProg pop_block pc: 124 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!IS_ATOM_INT(_14127)){
            _14128 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14127)->dbl));
        }
        else{
            _14128 = (object)*(((s1_ptr)_2)->base + _14127);
        }
        // SubProg pop_block pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 130 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14128);
        _14129 = (object)*(((s1_ptr)_2)->base + 4);
        _14128 = NOVALUE;
        // SubProg pop_block pc: 134 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 136 op: LESSEQ (5)
        if (IS_ATOM_INT(_14129)) {
            _14130 = (_14129 <= 5);
        }
        else {
            _14130 = binary_op(LESSEQ, _14129, 5);
        }
        _14129 = NOVALUE;
        // SubProg pop_block pc: 140 op: NOP1 (159)
        // SubProg pop_block pc: 141 op: IF (20)
        if (_14130 == 0) {
            DeRef(_14130);
            _14130 = NOVALUE;
            goto L4; // [141] 165
        }
        else {
            if (!IS_ATOM_INT(_14130) && DBL_PTR(_14130)->dbl == 0.0){
                DeRef(_14130);
                _14130 = NOVALUE;
                goto L4; // [141] 165
            }
            DeRef(_14130);
            _14130 = NOVALUE;
        }
        DeRef(_14130);
        _14130 = NOVALUE;
        // SubProg pop_block pc: 144 op: STARTLINE (58)

        /** block.e:182				ifdef BDEBUG then*/
        // SubProg pop_block pc: 146 op: STARTLINE (58)

        /** block.e:187				Hide( block_vars[sx] )*/
        // SubProg pop_block pc: 148 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24956);
        _14132 = (object)*(((s1_ptr)_2)->base + _sx_24959);
        // SubProg pop_block pc: 152 op: PROC (27)
        Ref(_14132);
        _53Hide(_14132);
        _14132 = NOVALUE;
        // SubProg pop_block pc: 155 op: STARTLINE (58)

        /** block.e:188				LintCheck( block_vars[sx] )*/
        // SubProg pop_block pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24956);
        _14133 = (object)*(((s1_ptr)_2)->base + _sx_24959);
        // SubProg pop_block pc: 161 op: PROC (27)
        Ref(_14133);
        _53LintCheck(_14133);
        _14133 = NOVALUE;
        // SubProg pop_block pc: 164 op: NOP1 (159)
L4: // addr: 165 pc: 164 sub: 24938 op: 159
        // SubProg pop_block pc: 165 op: STARTLINE (58)

        /** block.e:191		end for*/
        // SubProg pop_block pc: 167 op: ENDFOR_INT_UP1 (54)
        _sx_24959 = _sx_24959 + 1;
        goto L2; // [167] 90
L3: // addr: 172 pc: 167 sub: 24938 op: 54
        ;
    }
    // SubProg pop_block pc: 172 op: STARTLINE (58)

    /** block.e:213		current_block = block_stack[$][BLOCK_SYM]*/
    // SubProg pop_block pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 176 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14134 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14134 = 1;
    }
    // SubProg pop_block pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14135 = (object)*(((s1_ptr)_2)->base + _14134);
    // SubProg pop_block pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14135);
    _64current_block_24772 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_64current_block_24772)){
        _64current_block_24772 = (object)DBL_PTR(_64current_block_24772)->dbl;
    }
    _14135 = NOVALUE;
    // SubProg pop_block pc: 189 op: STARTLINE (58)

    /** block.e:214		return block[BLOCK_SYM]*/
    // SubProg pop_block pc: 191 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24943);
    _14137 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg pop_block pc: 195 op: RETURNF (28)
    Ref(_14137);

// Exiting block BLOCK: pop_block

// block var block_24943
    DeRefDS(_block_24943);

// block var block_vars_24956
    DeRef(_block_vars_24956);
    DeRef(_14114);
    _14114 = NOVALUE;
    DeRef(_14125);
    _14125 = NOVALUE;
    _14122 = NOVALUE;
    _14116 = NOVALUE;
    _14127 = NOVALUE;
    return _14137;
    // SubProg pop_block pc: 199 op: BADRETURNF (43)
    ;
}


object _64top_block(object _offset_24988)
{
    object _14145 = NOVALUE; // 24999 14145
    object _14144 = NOVALUE; // 24998 14144
    object _14143 = NOVALUE; // 24997 14143
    object _14142 = NOVALUE; // 24996 14142
    object _14141 = NOVALUE; // 24994 14141
    object _14140 = NOVALUE; // 24993 14140
// skipping _14139  name type: 0
    object _14138 = NOVALUE; // 24990 14138
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg top_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg top_block pc: 3 op: STARTLINE (58)

    /** block.e:219		if offset >= length(block_stack) then*/
    // SubProg top_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14138 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14138 = 1;
    }
    // SubProg top_block pc: 10 op: GREATEREQ_IFW_I (120)
    if (_offset_24988 < _14138)
    goto L1; // [10] 33
    // SubProg top_block pc: 14 op: STARTLINE (58)

    /** block.e:220			CompileErr(107, {offset,length(block_stack)})*/
    // SubProg top_block pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14140 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14140 = 1;
    }
    // SubProg top_block pc: 21 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _offset_24988;
    ((intptr_t *)_2)[2] = _14140;
    _14141 = MAKE_SEQ(_1);
    _14140 = NOVALUE;
    // SubProg top_block pc: 25 op: PROC (27)
    _49CompileErr(107, _14141, 0);
    _14141 = NOVALUE;
    // SubProg top_block pc: 30 op: ELSE (23)
    goto L2; // [30] 57
    // SubProg top_block pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 24986 op: 159
    // SubProg top_block pc: 33 op: STARTLINE (58)

    /** block.e:222			return block_stack[$-offset][BLOCK_SYM]*/
    // SubProg top_block pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14142 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14142 = 1;
    }
    // SubProg top_block pc: 40 op: MINUS (10)
    _14143 = _14142 - _offset_24988;
    _14142 = NOVALUE;
    // SubProg top_block pc: 44 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14144 = (object)*(((s1_ptr)_2)->base + _14143);
    // SubProg top_block pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14144);
    _14145 = (object)*(((s1_ptr)_2)->base + 1);
    _14144 = NOVALUE;
    // SubProg top_block pc: 52 op: RETURNF (28)
    Ref(_14145);

// Exiting block BLOCK: top_block

// block var offset_24988
    _14143 = NOVALUE;
    return _14145;
    // SubProg top_block pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 24986 op: 159
    // SubProg top_block pc: 57 op: BADRETURNF (43)
    ;
}


void _64End_block(object _opcode_25002)
{
    object _ix_25013 = NOVALUE;
    object _14153 = NOVALUE; // 25017 14153
// skipping _14152  name type: 0
// skipping _14151  name type: 0
    object _14150 = NOVALUE; // 25011 14150
    object _14149 = NOVALUE; // 25010 14149
    object _14148 = NOVALUE; // 25009 14148
    object _14147 = NOVALUE; // 25008 14147
// skipping _14146  name type: 0
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
    _64check_block(_opcode_25002);
    // SubProg End_block pc: 26 op: STARTLINE (58)

    /** block.e:233		if not length(block_stack[$][BLOCK_VARS]) then*/
    // SubProg End_block pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14147 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14147 = 1;
    }
    // SubProg End_block pc: 33 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14148 = (object)*(((s1_ptr)_2)->base + _14147);
    // SubProg End_block pc: 37 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14148);
    _14149 = (object)*(((s1_ptr)_2)->base + 6);
    _14148 = NOVALUE;
    // SubProg End_block pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_14149)){
            _14150 = SEQ_PTR(_14149)->length;
    }
    else {
        _14150 = 1;
    }
    _14149 = NOVALUE;
    // SubProg End_block pc: 44 op: NOT_IFW (108)
    if (_14150 != 0)
    goto L1; // [44] 64
    _14150 = NOVALUE;
    // SubProg End_block pc: 47 op: STARTLINE (58)

    /** block.e:234			integer ix = 1*/
    // SubProg End_block pc: 49 op: ASSIGN_I (113)
    _ix_25013 = 1;
    // SubProg End_block pc: 52 op: STARTLINE (58)

    /** block.e:235			ix = pop_block()*/
    // SubProg End_block pc: 54 op: PROC (27)
    _ix_25013 = _64pop_block();
    // SubProg End_block pc: 57 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ix_25013)) {
        _1 = (object)(DBL_PTR(_ix_25013)->dbl);
        DeRefDS(_ix_25013);
        _ix_25013 = _1;
    }
    // SubProg End_block pc: 59 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ix_25013
    // SubProg End_block pc: 61 op: ELSE (23)
    goto L2; // [61] 80
    // SubProg End_block pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 25000 op: 159
    // SubProg End_block pc: 64 op: STARTLINE (58)

    /** block.e:237			Push( pop_block() )*/
    // SubProg End_block pc: 66 op: PROC (27)
    _14153 = _64pop_block();
    // SubProg End_block pc: 69 op: PROC (27)
    _45Push(_14153);
    _14153 = NOVALUE;
    // SubProg End_block pc: 72 op: STARTLINE (58)

    /** block.e:238			emit_op( EXIT_BLOCK )*/
    // SubProg End_block pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 76 op: PROC (27)
    _45emit_op(206);
    // SubProg End_block pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 25000 op: 159
    // SubProg End_block pc: 80 op: STARTLINE (58)

    /** block.e:241	end procedure*/
    // SubProg End_block pc: 82 op: RETURNP (29)

// Exiting block BLOCK: End_block

// block var opcode_25002
    _14149 = NOVALUE;
    return;
    // SubProg End_block pc: 85 op: BADRETURNF (43)
    ;
}


object _64End_inline_block(object _opcode_25022)
{
    object _14160 = NOVALUE; // 25034 14160
    object _14159 = NOVALUE; // 25033 14159
    object _14158 = NOVALUE; // 25031 14158
    object _14157 = NOVALUE; // 25030 14157
    object _14156 = NOVALUE; // 25029 14156
    object _14155 = NOVALUE; // 25028 14155
// skipping _14154  name type: 0
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
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14155 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14155 = 1;
    }
    // SubProg End_inline_block pc: 28 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14156 = (object)*(((s1_ptr)_2)->base + _14155);
    // SubProg End_inline_block pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14156);
    _14157 = (object)*(((s1_ptr)_2)->base + 6);
    _14156 = NOVALUE;
    // SubProg End_inline_block pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_14157)){
            _14158 = SEQ_PTR(_14157)->length;
    }
    else {
        _14158 = 1;
    }
    _14157 = NOVALUE;
    // SubProg End_inline_block pc: 39 op: IF (20)
    if (_14158 == 0)
    {
        _14158 = NOVALUE;
        goto L1; // [39] 60
    }
    else{
        _14158 = NOVALUE;
    }
    // SubProg End_inline_block pc: 42 op: STARTLINE (58)

    /** block.e:250			return { EXIT_BLOCK, pop_block() }*/
    // SubProg End_inline_block pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_inline_block pc: 46 op: PROC (27)
    _14159 = _64pop_block();
    // SubProg End_inline_block pc: 49 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _14159;
    _14160 = MAKE_SEQ(_1);
    _14159 = NOVALUE;
    // SubProg End_inline_block pc: 53 op: RETURNF (28)

// Exiting block BLOCK: End_inline_block

// block var opcode_25022
    _14157 = NOVALUE;
    return _14160;
    // SubProg End_inline_block pc: 57 op: ELSE (23)
    goto L2; // [57] 72
    // SubProg End_inline_block pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 25020 op: 159
    // SubProg End_inline_block pc: 60 op: STARTLINE (58)

    /** block.e:252			Drop_block( opcode )*/
    // SubProg End_inline_block pc: 62 op: PROC (27)
    _64Drop_block(_opcode_25022);
    // SubProg End_inline_block pc: 65 op: STARTLINE (58)

    /** block.e:253			return {}*/
    // SubProg End_inline_block pc: 67 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: End_inline_block

// block var opcode_25022
    DeRef(_14160);
    _14160 = NOVALUE;
    _14157 = NOVALUE;
    return _5;
    // SubProg End_inline_block pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 25020 op: 159
    // SubProg End_inline_block pc: 72 op: BADRETURNF (43)
    ;
}


void _64Sibling_block(object _opcode_25039)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Sibling_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Sibling_block pc: 3 op: STARTLINE (58)

    /** block.e:261		End_block( opcode )*/
    // SubProg Sibling_block pc: 5 op: PROC (27)
    _64End_block(_opcode_25039);
    // SubProg Sibling_block pc: 8 op: STARTLINE (58)

    /** block.e:262		Start_block( opcode )*/
    // SubProg Sibling_block pc: 10 op: PROC (27)
    _64Start_block(_opcode_25039, 0);
    // SubProg Sibling_block pc: 14 op: STARTLINE (58)

    /** block.e:263	end procedure*/
    // SubProg Sibling_block pc: 16 op: RETURNP (29)

// Exiting block BLOCK: Sibling_block

// block var opcode_25039
    return;
    // SubProg Sibling_block pc: 19 op: BADRETURNF (43)
    ;
}


void _64Leave_block(object _offset_25042)
{
    object _14166 = NOVALUE; // 25050 14166
    object _14165 = NOVALUE; // 25048 14165
    object _14164 = NOVALUE; // 25047 14164
    object _14163 = NOVALUE; // 25046 14163
    object _14162 = NOVALUE; // 25045 14162
    object _14161 = NOVALUE; // 25044 14161
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Leave_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_offset_25042)) {
        _1 = (object)(DBL_PTR(_offset_25042)->dbl);
        DeRefDS(_offset_25042);
        _offset_25042 = _1;
    }
    // SubProg Leave_block pc: 3 op: STARTLINE (58)

    /** block.e:268		if length( block_stack[$-offset][BLOCK_VARS]) then*/
    // SubProg Leave_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14161 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14161 = 1;
    }
    // SubProg Leave_block pc: 10 op: MINUS (10)
    _14162 = _14161 - _offset_25042;
    _14161 = NOVALUE;
    // SubProg Leave_block pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14163 = (object)*(((s1_ptr)_2)->base + _14162);
    // SubProg Leave_block pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14163);
    _14164 = (object)*(((s1_ptr)_2)->base + 6);
    _14163 = NOVALUE;
    // SubProg Leave_block pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_14164)){
            _14165 = SEQ_PTR(_14164)->length;
    }
    else {
        _14165 = 1;
    }
    _14164 = NOVALUE;
    // SubProg Leave_block pc: 25 op: IF (20)
    if (_14165 == 0)
    {
        _14165 = NOVALUE;
        goto L1; // [25] 45
    }
    else{
        _14165 = NOVALUE;
    }
    // SubProg Leave_block pc: 28 op: STARTLINE (58)

    /** block.e:269			Push( top_block( offset ) )*/
    // SubProg Leave_block pc: 30 op: PROC (27)
    _14166 = _64top_block(_offset_25042);
    // SubProg Leave_block pc: 34 op: PROC (27)
    _45Push(_14166);
    _14166 = NOVALUE;
    // SubProg Leave_block pc: 37 op: STARTLINE (58)

    /** block.e:270			emit_op( EXIT_BLOCK )*/
    // SubProg Leave_block pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_block pc: 41 op: PROC (27)
    _45emit_op(206);
    // SubProg Leave_block pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 25040 op: 159
    // SubProg Leave_block pc: 45 op: STARTLINE (58)

    /** block.e:272	end procedure*/
    // SubProg Leave_block pc: 47 op: RETURNP (29)

// Exiting block BLOCK: Leave_block

// block var offset_25042
    DeRef(_14162);
    _14162 = NOVALUE;
    _14164 = NOVALUE;
    return;
    // SubProg Leave_block pc: 50 op: BADRETURNF (43)
    ;
}


void _64Leave_blocks(object _blocks_25062, object _block_type_25063)
{
    object _bx_25064 = NOVALUE;
    object _Block_opcode_3__tmp_at29_25071 = NOVALUE;
    object _Block_opcode_2__tmp_at29_25070 = NOVALUE;
    object _Block_opcode_1__tmp_at29_25069 = NOVALUE;
    object _Block_opcode_inlined_Block_opcode_at_29_25068 = NOVALUE;
    object _14179 = NOVALUE; // 25090 14179
// skipping _14178  name type: 0
// skipping _14177  name type: 0
// skipping _14176  name type: 0
// skipping _14175  name type: 0
// skipping _14174  name type: 0
// skipping _14173  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Leave_blocks pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_blocks_25062)) {
        _1 = (object)(DBL_PTR(_blocks_25062)->dbl);
        DeRefDS(_blocks_25062);
        _blocks_25062 = _1;
    }
    // SubProg Leave_blocks pc: 3 op: INTEGER_CHECK (96)
    // SubProg Leave_blocks pc: 5 op: STARTLINE (58)

    /** block.e:284		integer bx = 0*/
    // SubProg Leave_blocks pc: 7 op: ASSIGN_I (113)
    _bx_25064 = 0;
    // SubProg Leave_blocks pc: 10 op: STARTLINE (58)

    /** block.e:285		while blocks do*/
    // SubProg Leave_blocks pc: 12 op: NOP2 (110)
    // SubProg Leave_blocks pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 25060 op: 158
    // SubProg Leave_blocks pc: 15 op: WHILE (47)
    if (_blocks_25062 == 0)
    {
        goto L2; // [15] 119
    }
    else{
    }
    // SubProg Leave_blocks pc: 18 op: STARTLINE (58)

    /** block.e:286			Leave_block( bx )*/
    // SubProg Leave_blocks pc: 20 op: PROC (27)
    _64Leave_block(_bx_25064);
    // SubProg Leave_blocks pc: 23 op: STARTLINE (58)

    /** block.e:288			if block_type then*/
    // SubProg Leave_blocks pc: 25 op: IF (20)
    if (_block_type_25063 == 0)
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
    if (IS_SEQUENCE(_64block_stack_24765)){
            _Block_opcode_1__tmp_at29_25069 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _Block_opcode_1__tmp_at29_25069 = 1;
    }
    // SubProg Leave_blocks pc: 37 op: MINUS (10)
    _Block_opcode_2__tmp_at29_25070 = _Block_opcode_1__tmp_at29_25069 - _bx_25064;
    // SubProg Leave_blocks pc: 41 op: RHS_SUBS (25)
    DeRef(_Block_opcode_3__tmp_at29_25071);
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _Block_opcode_3__tmp_at29_25071 = (object)*(((s1_ptr)_2)->base + _Block_opcode_2__tmp_at29_25070);
    Ref(_Block_opcode_3__tmp_at29_25071);
    // SubProg Leave_blocks pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_Block_opcode_inlined_Block_opcode_at_29_25068);
    _2 = (object)SEQ_PTR(_Block_opcode_3__tmp_at29_25071);
    _Block_opcode_inlined_Block_opcode_at_29_25068 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_Block_opcode_inlined_Block_opcode_at_29_25068);
    // SubProg Leave_blocks pc: 49 op: NOP1 (159)
    // SubProg Leave_blocks pc: 50 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-Block_opcode from Leave_blocks @ 29

// block var Block_opcode_1__tmp_at29_25069

// block var Block_opcode_2__tmp_at29_25070

// block var Block_opcode_3__tmp_at29_25071
    DeRef(_Block_opcode_3__tmp_at29_25071);
    _Block_opcode_3__tmp_at29_25071 = NOVALUE;
    // SubProg Leave_blocks pc: 52 op: SWITCH_I (193)
    if (IS_SEQUENCE(_Block_opcode_inlined_Block_opcode_at_29_25068) ){
        goto L4; // [52] 82
    }
    if(!IS_ATOM_INT(_Block_opcode_inlined_Block_opcode_at_29_25068)){
        if( (DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25068)->dbl != (eudouble) ((object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25068)->dbl) ) ){
            goto L4; // [52] 82
        }
        _0 = (object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25068)->dbl;
    }
    else {
        _0 = _Block_opcode_inlined_Block_opcode_at_29_25068;
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
        if (_block_type_25063 != 1)
        goto L5; // [67] 108
        // SubProg Leave_blocks pc: 71 op: STARTLINE (58)

        /** block.e:292							blocks -= 1*/
        // SubProg Leave_blocks pc: 73 op: MINUS_I (116)
        _blocks_25062 = _blocks_25062 - 1;
        // SubProg Leave_blocks pc: 77 op: NOP1 (159)
        // SubProg Leave_blocks pc: 78 op: ELSE (23)
        goto L5; // [78] 108
        // SubProg Leave_blocks pc: 80 op: STARTLINE (58)

        /** block.e:294					case else*/
        // SubProg Leave_blocks pc: 82 op: CASE (186)
        default:
L4: // addr: 82 pc: 82 sub: 25060 op: 186
        // SubProg Leave_blocks pc: 84 op: STARTLINE (58)

        /** block.e:295						if block_type = CONDITIONAL_BLOCK then*/
        // SubProg Leave_blocks pc: 86 op: EQUALS_IFW_I (121)
        if (_block_type_25063 != 2)
        goto L6; // [86] 97
        // SubProg Leave_blocks pc: 90 op: STARTLINE (58)

        /** block.e:296							blocks -= 1*/
        // SubProg Leave_blocks pc: 92 op: MINUS_I (116)
        _blocks_25062 = _blocks_25062 - 1;
        // SubProg Leave_blocks pc: 96 op: NOP1 (159)
L6: // addr: 97 pc: 96 sub: 25060 op: 159
        // SubProg Leave_blocks pc: 97 op: NOPSWITCH (187)
    ;}    // SubProg Leave_blocks pc: 98 op: ELSE (23)
    goto L5; // [98] 108
    // SubProg Leave_blocks pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 25060 op: 159
    // SubProg Leave_blocks pc: 101 op: STARTLINE (58)

    /** block.e:300				blocks -= 1*/
    // SubProg Leave_blocks pc: 103 op: MINUS_I (116)
    _blocks_25062 = _blocks_25062 - 1;
    // SubProg Leave_blocks pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 25060 op: 159
    // SubProg Leave_blocks pc: 108 op: STARTLINE (58)

    /** block.e:302			bx += 1*/
    // SubProg Leave_blocks pc: 110 op: PLUS1_I (117)
    _bx_25064 = _bx_25064 + 1;
    // SubProg Leave_blocks pc: 114 op: STARTLINE (58)

    /** block.e:303		end while*/
    // SubProg Leave_blocks pc: 116 op: ENDWHILE (22)
    goto L1; // [116] 15
    // SubProg Leave_blocks pc: 118 op: NOP1 (159)
L2: // addr: 119 pc: 118 sub: 25060 op: 159
    // SubProg Leave_blocks pc: 119 op: STARTLINE (58)

    /** block.e:304		for i = 0 to blocks - 1 do*/
    // SubProg Leave_blocks pc: 121 op: MINUS (10)
    _14179 = _blocks_25062 - 1;
    if ((object)((uintptr_t)_14179 +(uintptr_t) HIGH_BITS) >= 0){
        _14179 = NewDouble((eudouble)_14179);
    }
    // SubProg Leave_blocks pc: 125 op: FOR (21)
    {
        object _i_25089;
        _i_25089 = 0;
L7: // addr: 132 pc: 125 sub: 25060 op: 21
        if (binary_op_a(GREATER, _i_25089, _14179)){
            goto L8; // [125] 144
        }
        // SubProg Leave_blocks pc: 132 op: STARTLINE (58)

        /** block.e:305			Leave_block( i )*/
        // SubProg Leave_blocks pc: 134 op: PROC (27)
        Ref(_i_25089);
        _64Leave_block(_i_25089);
        // SubProg Leave_blocks pc: 137 op: STARTLINE (58)

        /** block.e:306		end for*/
        // SubProg Leave_blocks pc: 139 op: ENDFOR_INT_UP1 (54)
        _0 = _i_25089;
        if (IS_ATOM_INT(_i_25089)) {
            _i_25089 = _i_25089 + 1;
            if ((object)((uintptr_t)_i_25089 +(uintptr_t) HIGH_BITS) >= 0){
                _i_25089 = NewDouble((eudouble)_i_25089);
            }
        }
        else {
            _i_25089 = binary_op_a(PLUS, _i_25089, 1);
        }
        DeRef(_0);
        goto L7; // [139] 132
L8: // addr: 144 pc: 139 sub: 25060 op: 54
        ;
        DeRef(_i_25089);
    }
    // SubProg Leave_blocks pc: 144 op: STARTLINE (58)

    /** block.e:307	end procedure*/
    // SubProg Leave_blocks pc: 146 op: RETURNP (29)

// Exiting block BLOCK: Leave_blocks

// block var blocks_25062

// block var block_type_25063

// block var bx_25064
    DeRef(_14179);
    _14179 = NOVALUE;
    return;
    // SubProg Leave_blocks pc: 149 op: BADRETURNF (43)
    ;
}


void _64Drop_block(object _opcode_25093)
{
    object _x_25095 = NOVALUE;
// skipping _14180  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Drop_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Drop_block pc: 3 op: STARTLINE (58)

    /** block.e:311		check_block( opcode )*/
    // SubProg Drop_block pc: 5 op: PROC (27)
    _64check_block(_opcode_25093);
    // SubProg Drop_block pc: 8 op: STARTLINE (58)

    /** block.e:312		symtab_index x = pop_block()*/
    // SubProg Drop_block pc: 10 op: PROC (27)
    _x_25095 = _64pop_block();
    // SubProg Drop_block pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_25095)) {
        _1 = (object)(DBL_PTR(_x_25095)->dbl);
        DeRefDS(_x_25095);
        _x_25095 = _1;
    }
    // SubProg Drop_block pc: 15 op: STARTLINE (58)

    /** block.e:313	end procedure*/
    // SubProg Drop_block pc: 17 op: RETURNP (29)

// Exiting block BLOCK: Drop_block

// block var opcode_25093

// block var x_25095
    return;
    // SubProg Drop_block pc: 20 op: BADRETURNF (43)
    ;
}


void _64Pop_block_var()
{
    object _sym_25100 = NOVALUE;
    object _block_sym_25107 = NOVALUE;
    object _14207 = NOVALUE; // 25137 14207
    object _14206 = NOVALUE; // 25136 14206
    object _14205 = NOVALUE; // 25135 14205
    object _14204 = NOVALUE; // 25134 14204
    object _14203 = NOVALUE; // 25133 14203
    object _14202 = NOVALUE; // 25132 14202
    object _14201 = NOVALUE; // 25131 14201
    object _14200 = NOVALUE; // 25130 14200
// skipping _14199  name type: 0
    object _14198 = NOVALUE; // 25128 14198
    object _14197 = NOVALUE; // 25127 14197
// skipping _14196  name type: 0
    object _14195 = NOVALUE; // 25124 14195
    object _14194 = NOVALUE; // 25122 14194
// skipping _14193  name type: 0
    object _14192 = NOVALUE; // 25118 14192
// skipping _14191  name type: 0
// skipping _14190  name type: 0
    object _14189 = NOVALUE; // 25113 14189
// skipping _14188  name type: 0
    object _14187 = NOVALUE; // 25109 14187
    object _14186 = NOVALUE; // 25108 14186
// skipping _14185  name type: 0
    object _14184 = NOVALUE; // 25104 14184
    object _14183 = NOVALUE; // 25103 14183
    object _14182 = NOVALUE; // 25102 14182
    object _14181 = NOVALUE; // 25101 14181
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Pop_block_var pc: 1 op: STARTLINE (58)

    /** block.e:316		symtab_index sym = block_stack[$][BLOCK_VARS][$]*/
    // SubProg Pop_block_var pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14181 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14181 = 1;
    }
    // SubProg Pop_block_var pc: 8 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14182 = (object)*(((s1_ptr)_2)->base + _14181);
    // SubProg Pop_block_var pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14182);
    _14183 = (object)*(((s1_ptr)_2)->base + 6);
    _14182 = NOVALUE;
    // SubProg Pop_block_var pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_14183)){
            _14184 = SEQ_PTR(_14183)->length;
    }
    else {
        _14184 = 1;
    }
    // SubProg Pop_block_var pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14183);
    _sym_25100 = (object)*(((s1_ptr)_2)->base + _14184);
    if (!IS_ATOM_INT(_sym_25100)){
        _sym_25100 = (object)DBL_PTR(_sym_25100)->dbl;
    }
    _14183 = NOVALUE;
    // SubProg Pop_block_var pc: 25 op: STARTLINE (58)

    /** block.e:317		symtab_index block_sym = block_stack[$][BLOCK_SYM]*/
    // SubProg Pop_block_var pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14186 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14186 = 1;
    }
    // SubProg Pop_block_var pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14187 = (object)*(((s1_ptr)_2)->base + _14186);
    // SubProg Pop_block_var pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14187);
    _block_sym_25107 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_block_sym_25107)){
        _block_sym_25107 = (object)DBL_PTR(_block_sym_25107)->dbl;
    }
    _14187 = NOVALUE;
    // SubProg Pop_block_var pc: 42 op: STARTLINE (58)

    /** block.e:318		while sym_next_in_block( block_sym ) != sym do*/
    // SubProg Pop_block_var pc: 44 op: NOP2 (110)
    // SubProg Pop_block_var pc: 46 op: NOPWHILE (158)
L1: // addr: 47 pc: 46 sub: 25097 op: 158
    // SubProg Pop_block_var pc: 47 op: PROC (27)
    _14189 = _53sym_next_in_block(_block_sym_25107);
    // SubProg Pop_block_var pc: 51 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _14189, _sym_25100)){
        DeRef(_14189);
        _14189 = NOVALUE;
        goto L2; // [51] 68
    }
    DeRef(_14189);
    _14189 = NOVALUE;
    // SubProg Pop_block_var pc: 55 op: STARTLINE (58)

    /** block.e:319			block_sym = sym_next_in_block( block_sym )*/
    // SubProg Pop_block_var pc: 57 op: PROC (27)
    _block_sym_25107 = _53sym_next_in_block(_block_sym_25107);
    // SubProg Pop_block_var pc: 61 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_block_sym_25107)) {
        _1 = (object)(DBL_PTR(_block_sym_25107)->dbl);
        DeRefDS(_block_sym_25107);
        _block_sym_25107 = _1;
    }
    // SubProg Pop_block_var pc: 63 op: STARTLINE (58)

    /** block.e:320		end while*/
    // SubProg Pop_block_var pc: 65 op: ENDWHILE (22)
    goto L1; // [65] 47
    // SubProg Pop_block_var pc: 67 op: NOP1 (159)
L2: // addr: 68 pc: 67 sub: 25097 op: 159
    // SubProg Pop_block_var pc: 68 op: STARTLINE (58)

    /** block.e:322		SymTab[block_sym][S_NEXT_IN_BLOCK] = sym_next_in_block( sym )*/
    // SubProg Pop_block_var pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 72 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_block_sym_25107 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 79 op: PROC (27)
    _14194 = _53sym_next_in_block(_sym_25100);
    // SubProg Pop_block_var pc: 83 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14194;
    if( _1 != _14194 ){
        DeRef(_1);
    }
    _14194 = NOVALUE;
    _14192 = NOVALUE;
    // SubProg Pop_block_var pc: 87 op: STARTLINE (58)

    /** block.e:323		SymTab[sym][S_NEXT_IN_BLOCK] = 0*/
    // SubProg Pop_block_var pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 91 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25100 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _14195 = NOVALUE;
    // SubProg Pop_block_var pc: 102 op: STARTLINE (58)

    /** block.e:325		block_stack[$][BLOCK_VARS] = eu:remove( block_stack[$][BLOCK_VARS], */
    // SubProg Pop_block_var pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 106 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14197 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14197 = 1;
    }
    // SubProg Pop_block_var pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _64block_stack_24765 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14197 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 116 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14200 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14200 = 1;
    }
    // SubProg Pop_block_var pc: 119 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14201 = (object)*(((s1_ptr)_2)->base + _14200);
    // SubProg Pop_block_var pc: 123 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14201);
    _14202 = (object)*(((s1_ptr)_2)->base + 6);
    _14201 = NOVALUE;
    // SubProg Pop_block_var pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 129 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _14203 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _14203 = 1;
    }
    // SubProg Pop_block_var pc: 132 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14204 = (object)*(((s1_ptr)_2)->base + _14203);
    // SubProg Pop_block_var pc: 136 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14204);
    _14205 = (object)*(((s1_ptr)_2)->base + 6);
    _14204 = NOVALUE;
    // SubProg Pop_block_var pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_14205)){
            _14206 = SEQ_PTR(_14205)->length;
    }
    else {
        _14206 = 1;
    }
    _14205 = NOVALUE;
    // SubProg Pop_block_var pc: 143 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_14202);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14206)) ? _14206 : (object)(DBL_PTR(_14206)->dbl);
        int stop = (IS_ATOM_INT(_14206)) ? _14206 : (object)(DBL_PTR(_14206)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_14202);
            DeRef(_14207);
            _14207 = _14202;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_14202), start, &_14207 );
            }
            else Tail(SEQ_PTR(_14202), stop+1, &_14207);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_14202), start, &_14207);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_14207);
            _14207 = _1;
        }
    }
    _14202 = NOVALUE;
    _14206 = NOVALUE;
    _14206 = NOVALUE;
    // SubProg Pop_block_var pc: 148 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14207;
    if( _1 != _14207 ){
        DeRef(_1);
    }
    _14207 = NOVALUE;
    _14198 = NOVALUE;
    // SubProg Pop_block_var pc: 152 op: STARTLINE (58)

    /** block.e:327	end procedure*/
    // SubProg Pop_block_var pc: 154 op: RETURNP (29)

// Exiting block BLOCK: Pop_block_var

// block var sym_25100

// block var block_sym_25107
    _14205 = NOVALUE;
    return;
    // SubProg Pop_block_var pc: 157 op: BADRETURNF (43)
    ;
}


void _64Goto_block(object _from_block_25141, object _to_block_25143, object _pc_25144)
{
    object _code_25145 = NOVALUE;
    object _next_block_25147 = NOVALUE;
// skipping _14219  name type: 0
    object _14218 = NOVALUE; // 25165 14218
// skipping _14217  name type: 0
// skipping _14216  name type: 0
    object _14215 = NOVALUE; // 25160 14215
    object _14214 = NOVALUE; // 25158 14214
    object _14213 = NOVALUE; // 25157 14213
    object _14212 = NOVALUE; // 25155 14212
    object _14211 = NOVALUE; // 25153 14211
    object _14210 = NOVALUE; // 25152 14210
    object _14209 = NOVALUE; // 25151 14209
// skipping _14208  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Goto_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_from_block_25141)) {
        _1 = (object)(DBL_PTR(_from_block_25141)->dbl);
        DeRefDS(_from_block_25141);
        _from_block_25141 = _1;
    }
    // SubProg Goto_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_to_block_25143)) {
        _1 = (object)(DBL_PTR(_to_block_25143)->dbl);
        DeRefDS(_to_block_25143);
        _to_block_25143 = _1;
    }
    // SubProg Goto_block pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_25144)) {
        _1 = (object)(DBL_PTR(_pc_25144)->dbl);
        DeRefDS(_pc_25144);
        _pc_25144 = _1;
    }
    // SubProg Goto_block pc: 7 op: STARTLINE (58)

    /** block.e:330		sequence code = {}*/
    // SubProg Goto_block pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_code_25145);
    _code_25145 = _5;
    // SubProg Goto_block pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg Goto_block pc: 14 op: STARTLINE (58)

    /** block.e:331		symtab_index next_block = sym_block( from_block )*/
    // SubProg Goto_block pc: 16 op: PROC (27)
    _next_block_25147 = _53sym_block(_from_block_25141);
    // SubProg Goto_block pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_block_25147)) {
        _1 = (object)(DBL_PTR(_next_block_25147)->dbl);
        DeRefDS(_next_block_25147);
        _next_block_25147 = _1;
    }
    // SubProg Goto_block pc: 22 op: STARTLINE (58)

    /** block.e:332		while next_block */
    // SubProg Goto_block pc: 24 op: NOP2 (110)
    // SubProg Goto_block pc: 26 op: NOPWHILE (158)
L1: // addr: 27 pc: 26 sub: 25138 op: 158
    // SubProg Goto_block pc: 27 op: SC1_AND (141)
    if (_next_block_25147 == 0) {
        _14209 = 0;
        goto L2; // [27] 39
    }
    // SubProg Goto_block pc: 31 op: NOTEQ (4)
    _14210 = (_from_block_25141 != _to_block_25143);
    // SubProg Goto_block pc: 35 op: SC2_AND (142)
    _14209 = (_14210 != 0);
    // SubProg Goto_block pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 25138 op: 159
    // SubProg Goto_block pc: 39 op: SC1_AND_IF (146)
    if (_14209 == 0) {
        goto L3; // [39] 93
    }
    // SubProg Goto_block pc: 43 op: PROC (27)
    _14212 = _53sym_token(_next_block_25147);
    // SubProg Goto_block pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 49 op: FIND_FROM (176)
    _14213 = find_from(_14212, _29RTN_TOKS_12080, 1);
    DeRef(_14212);
    _14212 = NOVALUE;
    // SubProg Goto_block pc: 54 op: NOT (7)
    _14214 = (_14213 == 0);
    _14213 = NOVALUE;
    // SubProg Goto_block pc: 57 op: NOP1 (159)
    // SubProg Goto_block pc: 58 op: WHILE (47)
    if (_14214 == 0)
    {
        DeRef(_14214);
        _14214 = NOVALUE;
        goto L3; // [58] 93
    }
    else{
        DeRef(_14214);
        _14214 = NOVALUE;
    }
    // SubProg Goto_block pc: 61 op: STARTLINE (58)

    /** block.e:335			code &= { EXIT_BLOCK, from_block }*/
    // SubProg Goto_block pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 65 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _from_block_25141;
    _14215 = MAKE_SEQ(_1);
    // SubProg Goto_block pc: 69 op: CONCAT (15)
    Concat((object_ptr)&_code_25145, _code_25145, _14215);
    DeRefDS(_14215);
    _14215 = NOVALUE;
    // SubProg Goto_block pc: 73 op: STARTLINE (58)

    /** block.e:336			from_block = next_block*/
    // SubProg Goto_block pc: 75 op: ASSIGN (18)
    _from_block_25141 = _next_block_25147;
    // SubProg Goto_block pc: 78 op: INTEGER_CHECK (96)
    // SubProg Goto_block pc: 80 op: STARTLINE (58)

    /** block.e:337			next_block = sym_block( next_block )*/
    // SubProg Goto_block pc: 82 op: PROC (27)
    _next_block_25147 = _53sym_block(_next_block_25147);
    // SubProg Goto_block pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_block_25147)) {
        _1 = (object)(DBL_PTR(_next_block_25147)->dbl);
        DeRefDS(_next_block_25147);
        _next_block_25147 = _1;
    }
    // SubProg Goto_block pc: 88 op: STARTLINE (58)

    /** block.e:338		end while*/
    // SubProg Goto_block pc: 90 op: ENDWHILE (22)
    goto L1; // [90] 27
    // SubProg Goto_block pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 25138 op: 159
    // SubProg Goto_block pc: 93 op: STARTLINE (58)

    /** block.e:340		if length(code) then*/
    // SubProg Goto_block pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_code_25145)){
            _14218 = SEQ_PTR(_code_25145)->length;
    }
    else {
        _14218 = 1;
    }
    // SubProg Goto_block pc: 98 op: IF (20)
    if (_14218 == 0)
    {
        _14218 = NOVALUE;
        goto L4; // [98] 127
    }
    else{
        _14218 = NOVALUE;
    }
    // SubProg Goto_block pc: 101 op: STARTLINE (58)

    /** block.e:341			if pc then*/
    // SubProg Goto_block pc: 103 op: IF (20)
    if (_pc_25144 == 0)
    {
        goto L5; // [103] 115
    }
    else{
    }
    // SubProg Goto_block pc: 106 op: STARTLINE (58)

    /** block.e:342				insert_code( code, pc )*/
    // SubProg Goto_block pc: 108 op: PROC (27)
    RefDS(_code_25145);
    _65insert_code(_code_25145, _pc_25144);
    // SubProg Goto_block pc: 112 op: ELSE (23)
    goto L6; // [112] 126
    // SubProg Goto_block pc: 114 op: NOP1 (159)
L5: // addr: 115 pc: 114 sub: 25138 op: 159
    // SubProg Goto_block pc: 115 op: STARTLINE (58)

    /** block.e:344				Code &= code*/
    // SubProg Goto_block pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 119 op: CONCAT (15)
    Concat((object_ptr)&_5Code_12566, _5Code_12566, _code_25145);
    // SubProg Goto_block pc: 123 op: SEQUENCE_CHECK (97)
    // SubProg Goto_block pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 25138 op: 159
    // SubProg Goto_block pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 25138 op: 159
    // SubProg Goto_block pc: 127 op: STARTLINE (58)

    /** block.e:348	end procedure*/
    // SubProg Goto_block pc: 129 op: RETURNP (29)

// Exiting block BLOCK: Goto_block

// block var from_block_25141

// block var to_block_25143

// block var pc_25144

// block var code_25145
    DeRefi(_code_25145);

// block var next_block_25147
    DeRef(_14210);
    _14210 = NOVALUE;
    return;
    // SubProg Goto_block pc: 132 op: BADRETURNF (43)
    ;
}


object _64Least_block()
{
    object _ix_25175 = NOVALUE;
    object _sub_block_25178 = NOVALUE;
    object _14232 = NOVALUE; // 25193 14232
    object _14231 = NOVALUE; // 25192 14231
// skipping _14230  name type: 0
    object _14229 = NOVALUE; // 25190 14229
    object _14228 = NOVALUE; // 25189 14228
    object _14227 = NOVALUE; // 25188 14227
    object _14226 = NOVALUE; // 25187 14226
    object _14225 = NOVALUE; // 25186 14225
    object _14224 = NOVALUE; // 25185 14224
    object _14223 = NOVALUE; // 25184 14223
    object _14222 = NOVALUE; // 25183 14222
// skipping _14221  name type: 0
// skipping _14220  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Least_block pc: 1 op: STARTLINE (58)

    /** block.e:358		integer ix = length( block_stack )*/
    // SubProg Least_block pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24765)){
            _ix_25175 = SEQ_PTR(_64block_stack_24765)->length;
    }
    else {
        _ix_25175 = 1;
    }
    // SubProg Least_block pc: 8 op: STARTLINE (58)

    /** block.e:359		symtab_index sub_block = sym_block( CurrentSub )*/
    // SubProg Least_block pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 12 op: PROC (27)
    _sub_block_25178 = _53sym_block(_5CurrentSub_12485);
    // SubProg Least_block pc: 16 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sub_block_25178)) {
        _1 = (object)(DBL_PTR(_sub_block_25178)->dbl);
        DeRefDS(_sub_block_25178);
        _sub_block_25178 = _1;
    }
    // SubProg Least_block pc: 18 op: STARTLINE (58)

    /** block.e:360		while not length( block_stack[ix][BLOCK_VARS] ) */
    // SubProg Least_block pc: 20 op: NOP2 (110)
    // SubProg Least_block pc: 22 op: NOPWHILE (158)
L1: // addr: 23 pc: 22 sub: 25173 op: 158
    // SubProg Least_block pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14222 = (object)*(((s1_ptr)_2)->base + _ix_25175);
    // SubProg Least_block pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14222);
    _14223 = (object)*(((s1_ptr)_2)->base + 6);
    _14222 = NOVALUE;
    // SubProg Least_block pc: 33 op: LENGTH (42)
    if (IS_SEQUENCE(_14223)){
            _14224 = SEQ_PTR(_14223)->length;
    }
    else {
        _14224 = 1;
    }
    _14223 = NOVALUE;
    // SubProg Least_block pc: 36 op: NOT (7)
    _14225 = (_14224 == 0);
    _14224 = NOVALUE;
    // SubProg Least_block pc: 39 op: SC1_AND_IF (146)
    if (_14225 == 0) {
        goto L2; // [39] 72
    }
    // SubProg Least_block pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 45 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14227 = (object)*(((s1_ptr)_2)->base + _ix_25175);
    // SubProg Least_block pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14227);
    _14228 = (object)*(((s1_ptr)_2)->base + 1);
    _14227 = NOVALUE;
    // SubProg Least_block pc: 53 op: NOTEQ (4)
    if (IS_ATOM_INT(_14228)) {
        _14229 = (_14228 != _sub_block_25178);
    }
    else {
        _14229 = binary_op(NOTEQ, _14228, _sub_block_25178);
    }
    _14228 = NOVALUE;
    // SubProg Least_block pc: 57 op: NOP1 (159)
    // SubProg Least_block pc: 58 op: WHILE (47)
    if (_14229 <= 0) {
        if (_14229 == 0) {
            DeRef(_14229);
            _14229 = NOVALUE;
            goto L2; // [58] 72
        }
        else {
            if (!IS_ATOM_INT(_14229) && DBL_PTR(_14229)->dbl == 0.0){
                DeRef(_14229);
                _14229 = NOVALUE;
                goto L2; // [58] 72
            }
            DeRef(_14229);
            _14229 = NOVALUE;
        }
    }
    DeRef(_14229);
    _14229 = NOVALUE;
    // SubProg Least_block pc: 61 op: STARTLINE (58)

    /** block.e:362			ix -= 1	*/
    // SubProg Least_block pc: 63 op: MINUS_I (116)
    _ix_25175 = _ix_25175 - 1;
    // SubProg Least_block pc: 67 op: STARTLINE (58)

    /** block.e:363		end while*/
    // SubProg Least_block pc: 69 op: ENDWHILE (22)
    goto L1; // [69] 23
    // SubProg Least_block pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 25173 op: 159
    // SubProg Least_block pc: 72 op: STARTLINE (58)

    /** block.e:364		return block_stack[ix][BLOCK_SYM]*/
    // SubProg Least_block pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24765);
    _14231 = (object)*(((s1_ptr)_2)->base + _ix_25175);
    // SubProg Least_block pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14231);
    _14232 = (object)*(((s1_ptr)_2)->base + 1);
    _14231 = NOVALUE;
    // SubProg Least_block pc: 84 op: RETURNF (28)
    Ref(_14232);

// Exiting block BLOCK: Least_block

// block var ix_25175

// block var sub_block_25178
    _14223 = NOVALUE;
    DeRef(_14225);
    _14225 = NOVALUE;
    return _14232;
    // SubProg Least_block pc: 88 op: BADRETURNF (43)
    ;
}



// 0x4B18ED95
