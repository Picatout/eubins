// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _64block_type_name(object _opcode_24755)
{
    object _14014 = NOVALUE; // 24768 14014
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg block_type_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_opcode_24755)) {
        _1 = (object)(DBL_PTR(_opcode_24755)->dbl);
        DeRefDS(_opcode_24755);
        _opcode_24755 = _1;
    }
    // SubProg block_type_name pc: 3 op: STARTLINE (58)

    /** block.e:51		switch opcode do*/
    // SubProg block_type_name pc: 5 op: SWITCH_I (193)
    _0 = _opcode_24755;
    switch ( _0 ){ 
        // SubProg block_type_name pc: 10 op: STARTLINE (58)

        /** block.e:52			case LOOP then*/
        // SubProg block_type_name pc: 12 op: CASE (186)
        case 422:
        // SubProg block_type_name pc: 14 op: STARTLINE (58)

        /** block.e:53				return "LOOP"*/
        // SubProg block_type_name pc: 16 op: RETURNF (28)
        RefDS(_14012);

// Exiting block BLOCK: block_type_name

// block var opcode_24755
        return _14012;
        // SubProg block_type_name pc: 20 op: ELSE (23)
        goto L1; // [20] 63
        // SubProg block_type_name pc: 22 op: STARTLINE (58)

        /** block.e:54			case PROC then*/
        // SubProg block_type_name pc: 24 op: CASE (186)
        case 27:
        // SubProg block_type_name pc: 26 op: STARTLINE (58)

        /** block.e:55				return "PROC"*/
        // SubProg block_type_name pc: 28 op: RETURNF (28)
        RefDS(_12918);

// Exiting block BLOCK: block_type_name

// block var opcode_24755
        return _12918;
        // SubProg block_type_name pc: 32 op: ELSE (23)
        goto L1; // [32] 63
        // SubProg block_type_name pc: 34 op: STARTLINE (58)

        /** block.e:56			case FUNC then*/
        // SubProg block_type_name pc: 36 op: CASE (186)
        case 501:
        // SubProg block_type_name pc: 38 op: STARTLINE (58)

        /** block.e:57				return "FUNC"*/
        // SubProg block_type_name pc: 40 op: RETURNF (28)
        RefDS(_14013);

// Exiting block BLOCK: block_type_name

// block var opcode_24755
        return _14013;
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
        _2 = (object)SEQ_PTR(_60opnames_22521);
        _14014 = (object)*(((s1_ptr)_2)->base + _opcode_24755);
        // SubProg block_type_name pc: 58 op: RETURNF (28)
        RefDS(_14014);

// Exiting block BLOCK: block_type_name

// block var opcode_24755
        return _14014;
        // SubProg block_type_name pc: 62 op: NOPSWITCH (187)
    ;}L1: // addr: 63 pc: 62 sub: 24753 op: 187
    // SubProg block_type_name pc: 63 op: BADRETURNF (43)
    ;
}


void _64check_block(object _got_24771)
{
    object _expected_24772 = NOVALUE;
    object _14022 = NOVALUE; // 24785 14022
    object _14021 = NOVALUE; // 24784 14021
    object _14020 = NOVALUE; // 24783 14020
// skipping _14019  name type: 0
// skipping _14018  name type: 0
// skipping _14017  name type: 0
    object _14016 = NOVALUE; // 24774 14016
    object _14015 = NOVALUE; // 24773 14015
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg check_block pc: 3 op: STARTLINE (58)

    /** block.e:64		integer expected = block_stack[$][BLOCK_OPCODE]*/
    // SubProg check_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14015 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14015 = 1;
    }
    // SubProg check_block pc: 10 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14016 = (object)*(((s1_ptr)_2)->base + _14015);
    // SubProg check_block pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14016);
    _expected_24772 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_expected_24772)){
        _expected_24772 = (object)DBL_PTR(_expected_24772)->dbl;
    }
    _14016 = NOVALUE;
    // SubProg check_block pc: 20 op: STARTLINE (58)

    /** block.e:65		if got = FUNC then*/
    // SubProg check_block pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 24 op: EQUALS_IFW (104)
    if (_got_24771 != 501)
    goto L1; // [24] 38
    // SubProg check_block pc: 28 op: STARTLINE (58)

    /** block.e:66			got = PROC*/
    // SubProg check_block pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_block pc: 32 op: ASSIGN (18)
    _got_24771 = 27;
    // SubProg check_block pc: 35 op: INTEGER_CHECK (96)
    // SubProg check_block pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 24769 op: 159
    // SubProg check_block pc: 38 op: STARTLINE (58)

    /** block.e:68		if got != expected then*/
    // SubProg check_block pc: 40 op: NOTEQ_IFW_I (122)
    if (_got_24771 == _expected_24772)
    goto L2; // [40] 64
    // SubProg check_block pc: 44 op: STARTLINE (58)

    /** block.e:69			CompileErr( 79, {block_type_name( expected ), block_type_name( got)} )*/
    // SubProg check_block pc: 46 op: PROC (27)
    _14020 = _64block_type_name(_expected_24772);
    // SubProg check_block pc: 50 op: PROC (27)
    _14021 = _64block_type_name(_got_24771);
    // SubProg check_block pc: 54 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14020;
    ((intptr_t *)_2)[2] = _14021;
    _14022 = MAKE_SEQ(_1);
    _14021 = NOVALUE;
    _14020 = NOVALUE;
    // SubProg check_block pc: 58 op: PROC (27)
    _49CompileErr(79, _14022, 0);
    _14022 = NOVALUE;
    // SubProg check_block pc: 63 op: NOP1 (159)
L2: // addr: 64 pc: 63 sub: 24769 op: 159
    // SubProg check_block pc: 64 op: STARTLINE (58)

    /** block.e:71	end procedure*/
    // SubProg check_block pc: 66 op: RETURNP (29)

// Exiting block BLOCK: check_block

// block var got_24771

// block var expected_24772
    return;
    // SubProg check_block pc: 69 op: BADRETURNF (43)
    ;
}


void _64Block_var(object _sym_24789)
{
    object _block_24790 = NOVALUE;
    object _14043 = NOVALUE; // 24820 14043
    object _14042 = NOVALUE; // 24819 14042
    object _14041 = NOVALUE; // 24818 14041
// skipping _14040  name type: 0
    object _14039 = NOVALUE; // 24815 14039
    object _14038 = NOVALUE; // 24814 14038
// skipping _14037  name type: 0
    object _14036 = NOVALUE; // 24809 14036
    object _14035 = NOVALUE; // 24808 14035
    object _14034 = NOVALUE; // 24807 14034
    object _14033 = NOVALUE; // 24806 14033
    object _14032 = NOVALUE; // 24804 14032
    object _14031 = NOVALUE; // 24803 14031
    object _14030 = NOVALUE; // 24801 14030
// skipping _14029  name type: 0
    object _14028 = NOVALUE; // 24798 14028
// skipping _14027  name type: 0
    object _14026 = NOVALUE; // 24795 14026
    object _14025 = NOVALUE; // 24793 14025
// skipping _14024  name type: 0
    object _14023 = NOVALUE; // 24791 14023
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Block_var pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_24789)) {
        _1 = (object)(DBL_PTR(_sym_24789)->dbl);
        DeRefDS(_sym_24789);
        _sym_24789 = _1;
    }
    // SubProg Block_var pc: 3 op: STARTLINE (58)

    /** block.e:75		sequence block = block_stack[$]*/
    // SubProg Block_var pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14023 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14023 = 1;
    }
    // SubProg Block_var pc: 10 op: RHS_SUBS (25)
    DeRef(_block_24790);
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _block_24790 = (object)*(((s1_ptr)_2)->base + _14023);
    Ref(_block_24790);
    // SubProg Block_var pc: 14 op: SEQUENCE_CHECK (97)
    // SubProg Block_var pc: 16 op: STARTLINE (58)

    /** block.e:76		block_stack[$] = 0*/
    // SubProg Block_var pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14025 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14025 = 1;
    }
    // SubProg Block_var pc: 23 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _2 = (object)(((s1_ptr)_2)->base + _14025);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg Block_var pc: 27 op: STARTLINE (58)

    /** block.e:77		if length(block_stack) > 1 then*/
    // SubProg Block_var pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14026 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14026 = 1;
    }
    // SubProg Block_var pc: 34 op: GREATER_IFW_I (124)
    if (_14026 <= 1)
    goto L1; // [34] 58
    // SubProg Block_var pc: 38 op: STARTLINE (58)

    /** block.e:79			SymTab[sym][S_BLOCK] = block[BLOCK_SYM]*/
    // SubProg Block_var pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 42 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_24789 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24790);
    _14030 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Block_var pc: 53 op: PASSIGN_SUBS (162)
    Ref(_14030);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_BLOCK_14863))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_BLOCK_14863);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14030;
    if( _1 != _14030 ){
        DeRef(_1);
    }
    _14030 = NOVALUE;
    _14028 = NOVALUE;
    // SubProg Block_var pc: 57 op: NOP1 (159)
L1: // addr: 58 pc: 57 sub: 24786 op: 159
    // SubProg Block_var pc: 58 op: STARTLINE (58)

    /** block.e:82		if length(block[BLOCK_VARS]) then*/
    // SubProg Block_var pc: 60 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24790);
    _14031 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 64 op: LENGTH (42)
    if (IS_SEQUENCE(_14031)){
            _14032 = SEQ_PTR(_14031)->length;
    }
    else {
        _14032 = 1;
    }
    _14031 = NOVALUE;
    // SubProg Block_var pc: 67 op: IF (20)
    if (_14032 == 0)
    {
        _14032 = NOVALUE;
        goto L2; // [67] 99
    }
    else{
        _14032 = NOVALUE;
    }
    // SubProg Block_var pc: 70 op: STARTLINE (58)

    /** block.e:83			SymTab[block[BLOCK_VARS][$]][S_NEXT_IN_BLOCK] = sym*/
    // SubProg Block_var pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24790);
    _14033 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_14033)){
            _14034 = SEQ_PTR(_14033)->length;
    }
    else {
        _14034 = 1;
    }
    // SubProg Block_var pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14033);
    _14035 = (object)*(((s1_ptr)_2)->base + _14034);
    _14033 = NOVALUE;
    // SubProg Block_var pc: 85 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14035))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14035)->dbl));
    else
    _3 = (object)(_14035 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 92 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24789;
    DeRef(_1);
    _14036 = NOVALUE;
    // SubProg Block_var pc: 96 op: ELSE (23)
    goto L3; // [96] 119
    // SubProg Block_var pc: 98 op: NOP1 (159)
L2: // addr: 99 pc: 98 sub: 24786 op: 159
    // SubProg Block_var pc: 99 op: STARTLINE (58)

    /** block.e:85			SymTab[block[BLOCK_SYM]][S_NEXT_IN_BLOCK] = sym*/
    // SubProg Block_var pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24790);
    _14038 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Block_var pc: 107 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14038))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14038)->dbl));
    else
    _3 = (object)(_14038 + ((s1_ptr)_2)->base);
    // SubProg Block_var pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 114 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24789;
    DeRef(_1);
    _14039 = NOVALUE;
    // SubProg Block_var pc: 118 op: NOP1 (159)
L3: // addr: 119 pc: 118 sub: 24786 op: 159
    // SubProg Block_var pc: 119 op: STARTLINE (58)

    /** block.e:88		block[BLOCK_VARS] &= sym*/
    // SubProg Block_var pc: 121 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_block_24790);
    _14041 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg Block_var pc: 125 op: CONCAT (15)
    if (IS_SEQUENCE(_14041) && IS_ATOM(_sym_24789)) {
        Append(&_14042, _14041, _sym_24789);
    }
    else if (IS_ATOM(_14041) && IS_SEQUENCE(_sym_24789)) {
    }
    else {
        Concat((object_ptr)&_14042, _14041, _sym_24789);
        _14041 = NOVALUE;
    }
    _14041 = NOVALUE;
    // SubProg Block_var pc: 129 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_block_24790);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24790 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14042;
    if( _1 != _14042 ){
        DeRef(_1);
    }
    _14042 = NOVALUE;
    // SubProg Block_var pc: 133 op: STARTLINE (58)

    /** block.e:90		block_stack[$] = block*/
    // SubProg Block_var pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg Block_var pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14043 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14043 = 1;
    }
    // SubProg Block_var pc: 140 op: ASSIGN_SUBS (16)
    RefDS(_block_24790);
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _2 = (object)(((s1_ptr)_2)->base + _14043);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _block_24790;
    DeRef(_1);
    // SubProg Block_var pc: 144 op: STARTLINE (58)

    /** block.e:91		ifdef BDEBUG then*/
    // SubProg Block_var pc: 146 op: STARTLINE (58)

    /** block.e:96	end procedure*/
    // SubProg Block_var pc: 148 op: RETURNP (29)

// Exiting block BLOCK: Block_var

// block var sym_24789

// block var block_24790
    DeRefDS(_block_24790);
    _14038 = NOVALUE;
    _14035 = NOVALUE;
    _14031 = NOVALUE;
    return;
    // SubProg Block_var pc: 151 op: BADRETURNF (43)
    ;
}


void _64NewBlock(object _opcode_24824, object _block_label_24825)
{
    object _block_24843 = NOVALUE;
// skipping _14059  name type: 0
// skipping _14058  name type: 0
    object _14057 = NOVALUE; // 24850 14057
    object _14056 = NOVALUE; // 24849 14056
    object _14055 = NOVALUE; // 24847 14055
// skipping _14054  name type: 0
    object _14053 = NOVALUE; // 24844 14053
// skipping _14052  name type: 0
    object _14051 = NOVALUE; // 24839 14051
    object _14050 = NOVALUE; // 24838 14050
// skipping _14049  name type: 0
    object _14048 = NOVALUE; // 24833 14048
    object _14047 = NOVALUE; // 24832 14047
// skipping _14046  name type: 0
    object _14045 = NOVALUE; // 24829 14045
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewBlock pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewBlock pc: 3 op: STARTLINE (58)

    /** block.e:101		SymTab = append( SymTab, repeat( 0, SIZEOF_BLOCK_ENTRY ) )*/
    // SubProg NewBlock pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 9 op: REPEAT (32)
    _14045 = Repeat(0, _34SIZEOF_BLOCK_ENTRY_14976);
    // SubProg NewBlock pc: 13 op: APPEND (35)
    RefDS(_14045);
    Append(&_35SymTab_14156, _35SymTab_14156, _14045);
    DeRefDS(_14045);
    _14045 = NOVALUE;
    // SubProg NewBlock pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg NewBlock pc: 19 op: STARTLINE (58)

    /** block.e:102		SymTab[$][S_MODE] = M_BLOCK*/
    // SubProg NewBlock pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _14047 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _14047 = 1;
    }
    // SubProg NewBlock pc: 26 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14047 + ((s1_ptr)_2)->base);
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
    _14048 = NOVALUE;
    // SubProg NewBlock pc: 39 op: STARTLINE (58)

    /** block.e:103		SymTab[$][S_FIRST_LINE] = gline_number*/
    // SubProg NewBlock pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _14050 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _14050 = 1;
    }
    // SubProg NewBlock pc: 46 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14050 + ((s1_ptr)_2)->base);
    // SubProg NewBlock pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 55 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_FIRST_LINE_14868))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FIRST_LINE_14868)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_FIRST_LINE_14868);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34gline_number_15193;
    DeRef(_1);
    _14051 = NOVALUE;
    // SubProg NewBlock pc: 59 op: STARTLINE (58)

    /** block.e:105		sequence block = repeat( 0, BLOCK_SIZE-1 )*/
    // SubProg NewBlock pc: 61 op: MINUS (10)
    _14053 = 6;
    // SubProg NewBlock pc: 65 op: REPEAT (32)
    DeRef(_block_24843);
    _block_24843 = Repeat(0, 6);
    _14053 = NOVALUE;
    // SubProg NewBlock pc: 69 op: STARTLINE (58)

    /** block.e:106		block[BLOCK_SYM]    = length(SymTab)*/
    // SubProg NewBlock pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _14055 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _14055 = 1;
    }
    // SubProg NewBlock pc: 76 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_block_24843);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24843 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    *(intptr_t *)_2 = _14055;
    if( _1 != _14055 ){
    }
    _14055 = NOVALUE;
    // SubProg NewBlock pc: 80 op: STARTLINE (58)

    /** block.e:107		block[BLOCK_OPCODE] = opcode*/
    // SubProg NewBlock pc: 82 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_block_24843);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24843 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    *(intptr_t *)_2 = _opcode_24824;
    // SubProg NewBlock pc: 86 op: STARTLINE (58)

    /** block.e:108		block[BLOCK_LABEL]  = block_label*/
    // SubProg NewBlock pc: 88 op: ASSIGN_SUBS (16)
    Ref(_block_label_24825);
    _2 = (object)SEQ_PTR(_block_24843);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24843 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    *(intptr_t *)_2 = _block_label_24825;
    // SubProg NewBlock pc: 92 op: STARTLINE (58)

    /** block.e:109		block[BLOCK_START]  = length(Code) + 1*/
    // SubProg NewBlock pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 96 op: LENGTH (42)
    if (IS_SEQUENCE(_34Code_15276)){
            _14056 = SEQ_PTR(_34Code_15276)->length;
    }
    else {
        _14056 = 1;
    }
    // SubProg NewBlock pc: 99 op: PLUS1 (93)
    _14057 = _14056 + 1;
    _14056 = NOVALUE;
    // SubProg NewBlock pc: 103 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_block_24843);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24843 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14057;
    if( _1 != _14057 ){
        DeRef(_1);
    }
    _14057 = NOVALUE;
    // SubProg NewBlock pc: 107 op: STARTLINE (58)

    /** block.e:110		block[BLOCK_VARS]   = {}*/
    // SubProg NewBlock pc: 109 op: ASSIGN_SUBS (16)
    RefDS(_5);
    _2 = (object)SEQ_PTR(_block_24843);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24843 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5;
    DeRef(_1);
    // SubProg NewBlock pc: 113 op: STARTLINE (58)

    /** block.e:112		block_stack = append( block_stack, block )*/
    // SubProg NewBlock pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 117 op: APPEND (35)
    RefDS(_block_24843);
    Append(&_64block_stack_24744, _64block_stack_24744, _block_24843);
    // SubProg NewBlock pc: 121 op: STARTLINE (58)

    /** block.e:113		current_block = length(SymTab)*/
    // SubProg NewBlock pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBlock pc: 125 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _64current_block_24751 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _64current_block_24751 = 1;
    }
    // SubProg NewBlock pc: 128 op: INTEGER_CHECK (96)
    // SubProg NewBlock pc: 130 op: STARTLINE (58)

    /** block.e:114	end procedure*/
    // SubProg NewBlock pc: 132 op: RETURNP (29)

// Exiting block BLOCK: NewBlock

// block var opcode_24824

// block var block_label_24825
    DeRefi(_block_label_24825);

// block var block_24843
    DeRefDS(_block_24843);
    return;
    // SubProg NewBlock pc: 135 op: BADRETURNF (43)
    ;
}


void _64Start_block(object _opcode_24856, object _block_label_24857)
{
    object _last_block_24859 = NOVALUE;
    object _label_name_24887 = NOVALUE;
    object _14079 = NOVALUE; // 24897 14079
    object _14078 = NOVALUE; // 24896 14078
    object _14077 = NOVALUE; // 24895 14077
// skipping _14075  name type: 0
    object _14074 = NOVALUE; // 24891 14074
    object _14073 = NOVALUE; // 24889 14073
// skipping _14072  name type: 0
    object _14071 = NOVALUE; // 24884 14071
    object _14070 = NOVALUE; // 24881 14070
    object _14069 = NOVALUE; // 24880 14069
    object _14068 = NOVALUE; // 24879 14068
    object _14067 = NOVALUE; // 24877 14067
// skipping _14065  name type: 0
    object _14064 = NOVALUE; // 24872 14064
// skipping _14063  name type: 0
    object _14062 = NOVALUE; // 24868 14062
    object _14061 = NOVALUE; // 24866 14061
// skipping _14060  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Start_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 3 op: STARTLINE (58)

    /** block.e:120		symtab_index last_block = current_block*/
    // SubProg Start_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 7 op: ASSIGN (18)
    _last_block_24859 = _64current_block_24751;
    // SubProg Start_block pc: 10 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 12 op: STARTLINE (58)

    /** block.e:121		if opcode = FUNC then*/
    // SubProg Start_block pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 16 op: EQUALS_IFW (104)
    if (_opcode_24856 != 501)
    goto L1; // [16] 30
    // SubProg Start_block pc: 20 op: STARTLINE (58)

    /** block.e:122			opcode = PROC*/
    // SubProg Start_block pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 24 op: ASSIGN (18)
    _opcode_24856 = 27;
    // SubProg Start_block pc: 27 op: INTEGER_CHECK (96)
    // SubProg Start_block pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 24854 op: 159
    // SubProg Start_block pc: 30 op: STARTLINE (58)

    /** block.e:124		NewBlock( opcode, block_label )*/
    // SubProg Start_block pc: 32 op: PROC (27)
    Ref(_block_label_24857);
    _64NewBlock(_opcode_24856, _block_label_24857);
    // SubProg Start_block pc: 36 op: STARTLINE (58)

    /** block.e:126		if find(opcode, RTN_TOKS) then*/
    // SubProg Start_block pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 40 op: FIND_FROM (176)
    _14061 = find_from(_opcode_24856, _36RTN_TOKS_14796, 1);
    // SubProg Start_block pc: 45 op: IF (20)
    if (_14061 == 0)
    {
        _14061 = NOVALUE;
        goto L2; // [45] 105
    }
    else{
        _14061 = NOVALUE;
    }
    // SubProg Start_block pc: 48 op: STARTLINE (58)

    /** block.e:127			SymTab[block_label][S_BLOCK] = current_block*/
    // SubProg Start_block pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 52 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_block_label_24857))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24857)->dbl));
    else
    _3 = (object)(_block_label_24857 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 61 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_BLOCK_14863))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_BLOCK_14863);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _64current_block_24751;
    DeRef(_1);
    _14062 = NOVALUE;
    // SubProg Start_block pc: 65 op: STARTLINE (58)

    /** block.e:128			SymTab[current_block][S_NAME] = sprintf("BLOCK: %s", {SymTab[block_label][S_NAME]})*/
    // SubProg Start_block pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 71 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24751 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_block_label_24857)){
        _14067 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24857)->dbl));
    }
    else{
        _14067 = (object)*(((s1_ptr)_2)->base + _block_label_24857);
    }
    // SubProg Start_block pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14067);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _14068 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _14068 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _14067 = NOVALUE;
    // SubProg Start_block pc: 90 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_14068);
    ((intptr_t*)_2)[1] = _14068;
    _14069 = MAKE_SEQ(_1);
    _14068 = NOVALUE;
    // SubProg Start_block pc: 94 op: SPRINTF (53)
    _14070 = EPrintf(-9999999, _14066, _14069);
    DeRefDS(_14069);
    _14069 = NOVALUE;
    // SubProg Start_block pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NAME_14843))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NAME_14843);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14070;
    if( _1 != _14070 ){
        DeRef(_1);
    }
    _14070 = NOVALUE;
    _14064 = NOVALUE;
    // SubProg Start_block pc: 102 op: ELSE (23)
    goto L3; // [102] 185
    // SubProg Start_block pc: 104 op: NOP1 (159)
L2: // addr: 105 pc: 104 sub: 24854 op: 159
    // SubProg Start_block pc: 105 op: STARTLINE (58)

    /** block.e:129		elsif current_block then*/
    // SubProg Start_block pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 109 op: IF (20)
    if (_64current_block_24751 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24751 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 125 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_BLOCK_14863))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_BLOCK_14863);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _last_block_24859;
    DeRef(_1);
    _14071 = NOVALUE;
    // SubProg Start_block pc: 129 op: STARTLINE (58)

    /** block.e:136			sequence label_name = ""*/
    // SubProg Start_block pc: 131 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_label_name_24887);
    _label_name_24887 = _5;
    // SubProg Start_block pc: 134 op: SEQUENCE_CHECK (97)
    // SubProg Start_block pc: 136 op: STARTLINE (58)

    /** block.e:137			if sequence(block_label) then*/
    // SubProg Start_block pc: 138 op: IS_A_SEQUENCE (68)
    _14073 = IS_SEQUENCE(_block_label_24857);
    // SubProg Start_block pc: 141 op: IF (20)
    if (_14073 == 0)
    {
        _14073 = NOVALUE;
        goto L5; // [141] 152
    }
    else{
        _14073 = NOVALUE;
    }
    // SubProg Start_block pc: 144 op: STARTLINE (58)

    /** block.e:138				label_name = block_label*/
    // SubProg Start_block pc: 146 op: ASSIGN (18)
    Ref(_block_label_24857);
    DeRefDSi(_label_name_24887);
    _label_name_24887 = _block_label_24857;
    // SubProg Start_block pc: 149 op: SEQUENCE_CHECK (97)
    // SubProg Start_block pc: 151 op: NOP1 (159)
L5: // addr: 152 pc: 151 sub: 24854 op: 159
    // SubProg Start_block pc: 152 op: STARTLINE (58)

    /** block.e:141			SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", {block_type_name(opcode), label_name})*/
    // SubProg Start_block pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 158 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24751 + ((s1_ptr)_2)->base);
    // SubProg Start_block pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg Start_block pc: 165 op: PROC (27)
    _14077 = _64block_type_name(_opcode_24856);
    // SubProg Start_block pc: 169 op: RIGHT_BRACE_2 (85)
    RefDS(_label_name_24887);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14077;
    ((intptr_t *)_2)[2] = _label_name_24887;
    _14078 = MAKE_SEQ(_1);
    _14077 = NOVALUE;
    // SubProg Start_block pc: 173 op: SPRINTF (53)
    _14079 = EPrintf(-9999999, _14076, _14078);
    DeRefDS(_14078);
    _14078 = NOVALUE;
    // SubProg Start_block pc: 177 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NAME_14843))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NAME_14843);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14079;
    if( _1 != _14079 ){
        DeRef(_1);
    }
    _14079 = NOVALUE;
    _14074 = NOVALUE;
    // SubProg Start_block pc: 181 op: NOP1 (159)
L4: // addr: 182 pc: 181 sub: 24854 op: 159
    // SubProg Start_block pc: 182 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var label_name_24887
    DeRefi(_label_name_24887);
    _label_name_24887 = NOVALUE;
    // SubProg Start_block pc: 184 op: NOP1 (159)
L3: // addr: 185 pc: 184 sub: 24854 op: 159
    // SubProg Start_block pc: 185 op: STARTLINE (58)

    /** block.e:144		ifdef BDEBUG then*/
    // SubProg Start_block pc: 187 op: STARTLINE (58)

    /** block.e:153	end procedure*/
    // SubProg Start_block pc: 189 op: RETURNP (29)

// Exiting block BLOCK: Start_block

// block var opcode_24856

// block var block_label_24857
    DeRefi(_block_label_24857);

// block var last_block_24859
    return;
    // SubProg Start_block pc: 192 op: BADRETURNF (43)
    ;
}


void _64block_label(object _label_name_24903)
{
    object _14093 = NOVALUE; // 24916 14093
    object _14092 = NOVALUE; // 24915 14092
    object _14091 = NOVALUE; // 24914 14091
    object _14090 = NOVALUE; // 24913 14090
    object _14089 = NOVALUE; // 24912 14089
    object _14088 = NOVALUE; // 24911 14088
// skipping _14087  name type: 0
    object _14086 = NOVALUE; // 24908 14086
// skipping _14085  name type: 0
    object _14084 = NOVALUE; // 24905 14084
    object _14083 = NOVALUE; // 24904 14083
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg block_label pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg block_label pc: 3 op: STARTLINE (58)

    /** block.e:157		block_stack[$][BLOCK_LABEL] = label_name*/
    // SubProg block_label pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14083 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14083 = 1;
    }
    // SubProg block_label pc: 10 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _64block_stack_24744 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14083 + ((s1_ptr)_2)->base);
    // SubProg block_label pc: 15 op: PASSIGN_SUBS (162)
    RefDS(_label_name_24903);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _label_name_24903;
    DeRef(_1);
    _14084 = NOVALUE;
    // SubProg block_label pc: 19 op: STARTLINE (58)

    /** block.e:158		SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", */
    // SubProg block_label pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 25 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_64current_block_24751 + ((s1_ptr)_2)->base);
    // SubProg block_label pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg block_label pc: 34 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14088 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14088 = 1;
    }
    // SubProg block_label pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14089 = (object)*(((s1_ptr)_2)->base + _14088);
    // SubProg block_label pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14089);
    _14090 = (object)*(((s1_ptr)_2)->base + 2);
    _14089 = NOVALUE;
    // SubProg block_label pc: 45 op: PROC (27)
    Ref(_14090);
    _14091 = _64block_type_name(_14090);
    _14090 = NOVALUE;
    // SubProg block_label pc: 49 op: RIGHT_BRACE_2 (85)
    RefDS(_label_name_24903);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14091;
    ((intptr_t *)_2)[2] = _label_name_24903;
    _14092 = MAKE_SEQ(_1);
    _14091 = NOVALUE;
    // SubProg block_label pc: 53 op: SPRINTF (53)
    _14093 = EPrintf(-9999999, _14076, _14092);
    DeRefDS(_14092);
    _14092 = NOVALUE;
    // SubProg block_label pc: 57 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NAME_14843))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NAME_14843);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14093;
    if( _1 != _14093 ){
        DeRef(_1);
    }
    _14093 = NOVALUE;
    _14086 = NOVALUE;
    // SubProg block_label pc: 61 op: STARTLINE (58)

    /** block.e:160	end procedure*/
    // SubProg block_label pc: 63 op: RETURNP (29)

// Exiting block BLOCK: block_label

// block var label_name_24903
    DeRefDS(_label_name_24903);
    return;
    // SubProg block_label pc: 66 op: BADRETURNF (43)
    ;
}


object _64pop_block()
{
    object _block_24922 = NOVALUE;
    object _block_vars_24935 = NOVALUE;
    object _14122 = NOVALUE; // 24964 14122
// skipping _14121  name type: 0
    object _14120 = NOVALUE; // 24962 14120
    object _14119 = NOVALUE; // 24961 14119
    object _14118 = NOVALUE; // 24960 14118
    object _14117 = NOVALUE; // 24958 14117
    object _14115 = NOVALUE; // 24955 14115
    object _14114 = NOVALUE; // 24953 14114
    object _14113 = NOVALUE; // 24951 14113
    object _14112 = NOVALUE; // 24950 14112
    object _14111 = NOVALUE; // 24948 14111
    object _14110 = NOVALUE; // 24947 14110
    object _14109 = NOVALUE; // 24945 14109
    object _14108 = NOVALUE; // 24943 14108
    object _14107 = NOVALUE; // 24942 14107
    object _14106 = NOVALUE; // 24939 14106
// skipping _14105  name type: 0
// skipping _14103  name type: 0
    object _14102 = NOVALUE; // 24930 14102
    object _14101 = NOVALUE; // 24929 14101
// skipping _14100  name type: 0
    object _14099 = NOVALUE; // 24926 14099
    object _14098 = NOVALUE; // 24925 14098
// skipping _14097  name type: 0
    object _14096 = NOVALUE; // 24923 14096
// skipping _14095  name type: 0
    object _14094 = NOVALUE; // 24920 14094
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg pop_block pc: 1 op: STARTLINE (58)

    /** block.e:164		if not length(block_stack) then*/
    // SubProg pop_block pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14094 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14094 = 1;
    }
    // SubProg pop_block pc: 8 op: NOT_IFW (108)
    if (_14094 != 0)
    goto L1; // [8] 18
    _14094 = NOVALUE;
    // SubProg pop_block pc: 11 op: STARTLINE (58)

    /** block.e:165			return 0*/
    // SubProg pop_block pc: 13 op: RETURNF (28)

// Exiting block BLOCK: pop_block

// block var block_24922
    DeRef(_block_24922);

// block var block_vars_24935
    DeRef(_block_vars_24935);
    return 0;
    // SubProg pop_block pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 24917 op: 159
    // SubProg pop_block pc: 18 op: STARTLINE (58)

    /** block.e:168		sequence  block = block_stack[$]*/
    // SubProg pop_block pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14096 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14096 = 1;
    }
    // SubProg pop_block pc: 25 op: RHS_SUBS (25)
    DeRef(_block_24922);
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _block_24922 = (object)*(((s1_ptr)_2)->base + _14096);
    Ref(_block_24922);
    // SubProg pop_block pc: 29 op: SEQUENCE_CHECK (97)
    // SubProg pop_block pc: 31 op: STARTLINE (58)

    /** block.e:169		block_stack = block_stack[1..$-1]*/
    // SubProg pop_block pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14098 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14098 = 1;
    }
    // SubProg pop_block pc: 38 op: MINUS (10)
    _14099 = _14098 - 1;
    _14098 = NOVALUE;
    // SubProg pop_block pc: 42 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_64block_stack_24744;
    RHS_Slice(_64block_stack_24744, 1, _14099);
    // SubProg pop_block pc: 47 op: STARTLINE (58)

    /** block.e:170		SymTab[block[BLOCK_SYM]][S_LAST_LINE] = gline_number*/
    // SubProg pop_block pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24922);
    _14101 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg pop_block pc: 55 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14101))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14101)->dbl));
    else
    _3 = (object)(_14101 + ((s1_ptr)_2)->base);
    // SubProg pop_block pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 64 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_LAST_LINE_14873))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LAST_LINE_14873)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_LAST_LINE_14873);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34gline_number_15193;
    DeRef(_1);
    _14102 = NOVALUE;
    // SubProg pop_block pc: 68 op: STARTLINE (58)

    /** block.e:172		ifdef BDEBUG then*/
    // SubProg pop_block pc: 70 op: STARTLINE (58)

    /** block.e:177		sequence block_vars = block[BLOCK_VARS]*/
    // SubProg pop_block pc: 72 op: RHS_SUBS (25)
    DeRef(_block_vars_24935);
    _2 = (object)SEQ_PTR(_block_24922);
    _block_vars_24935 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_block_vars_24935);
    // SubProg pop_block pc: 76 op: SEQUENCE_CHECK (97)
    // SubProg pop_block pc: 78 op: STARTLINE (58)

    /** block.e:178		for sx = 1 to length( block_vars ) do*/
    // SubProg pop_block pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_block_vars_24935)){
            _14106 = SEQ_PTR(_block_vars_24935)->length;
    }
    else {
        _14106 = 1;
    }
    // SubProg pop_block pc: 83 op: FOR_I (125)
    {
        object _sx_24938;
        _sx_24938 = 1;
L2: // addr: 90 pc: 83 sub: 24917 op: 125
        if (_sx_24938 > _14106){
            goto L3; // [83] 172
        }
        // SubProg pop_block pc: 90 op: STARTLINE (58)

        /** block.e:180			if SymTab[block_vars[sx]][S_MODE] = M_NORMAL */
        // SubProg pop_block pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 94 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24935);
        _14107 = (object)*(((s1_ptr)_2)->base + _sx_24938);
        // SubProg pop_block pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_14107)){
            _14108 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14107)->dbl));
        }
        else{
            _14108 = (object)*(((s1_ptr)_2)->base + _14107);
        }
        // SubProg pop_block pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 104 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14108);
        _14109 = (object)*(((s1_ptr)_2)->base + 3);
        _14108 = NOVALUE;
        // SubProg pop_block pc: 108 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 110 op: EQUALS (3)
        if (IS_ATOM_INT(_14109)) {
            _14110 = (_14109 == 1);
        }
        else {
            _14110 = binary_op(EQUALS, _14109, 1);
        }
        _14109 = NOVALUE;
        // SubProg pop_block pc: 114 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_14110)) {
            if (_14110 == 0) {
                goto L4; // [114] 165
            }
        }
        else {
            if (DBL_PTR(_14110)->dbl == 0.0) {
                goto L4; // [114] 165
            }
        }
        // SubProg pop_block pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 120 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24935);
        _14112 = (object)*(((s1_ptr)_2)->base + _sx_24938);
        // SubProg pop_block pc: 124 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_14112)){
            _14113 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14112)->dbl));
        }
        else{
            _14113 = (object)*(((s1_ptr)_2)->base + _14112);
        }
        // SubProg pop_block pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 130 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14113);
        _14114 = (object)*(((s1_ptr)_2)->base + 4);
        _14113 = NOVALUE;
        // SubProg pop_block pc: 134 op: GLOBAL_INIT_CHECK (109)
        // SubProg pop_block pc: 136 op: LESSEQ (5)
        if (IS_ATOM_INT(_14114)) {
            _14115 = (_14114 <= 5);
        }
        else {
            _14115 = binary_op(LESSEQ, _14114, 5);
        }
        _14114 = NOVALUE;
        // SubProg pop_block pc: 140 op: NOP1 (159)
        // SubProg pop_block pc: 141 op: IF (20)
        if (_14115 == 0) {
            DeRef(_14115);
            _14115 = NOVALUE;
            goto L4; // [141] 165
        }
        else {
            if (!IS_ATOM_INT(_14115) && DBL_PTR(_14115)->dbl == 0.0){
                DeRef(_14115);
                _14115 = NOVALUE;
                goto L4; // [141] 165
            }
            DeRef(_14115);
            _14115 = NOVALUE;
        }
        DeRef(_14115);
        _14115 = NOVALUE;
        // SubProg pop_block pc: 144 op: STARTLINE (58)

        /** block.e:182				ifdef BDEBUG then*/
        // SubProg pop_block pc: 146 op: STARTLINE (58)

        /** block.e:187				Hide( block_vars[sx] )*/
        // SubProg pop_block pc: 148 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24935);
        _14117 = (object)*(((s1_ptr)_2)->base + _sx_24938);
        // SubProg pop_block pc: 152 op: PROC (27)
        Ref(_14117);
        _53Hide(_14117);
        _14117 = NOVALUE;
        // SubProg pop_block pc: 155 op: STARTLINE (58)

        /** block.e:188				LintCheck( block_vars[sx] )*/
        // SubProg pop_block pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_block_vars_24935);
        _14118 = (object)*(((s1_ptr)_2)->base + _sx_24938);
        // SubProg pop_block pc: 161 op: PROC (27)
        Ref(_14118);
        _53LintCheck(_14118);
        _14118 = NOVALUE;
        // SubProg pop_block pc: 164 op: NOP1 (159)
L4: // addr: 165 pc: 164 sub: 24917 op: 159
        // SubProg pop_block pc: 165 op: STARTLINE (58)

        /** block.e:191		end for*/
        // SubProg pop_block pc: 167 op: ENDFOR_INT_UP1 (54)
        _sx_24938 = _sx_24938 + 1;
        goto L2; // [167] 90
L3: // addr: 172 pc: 167 sub: 24917 op: 54
        ;
    }
    // SubProg pop_block pc: 172 op: STARTLINE (58)

    /** block.e:213		current_block = block_stack[$][BLOCK_SYM]*/
    // SubProg pop_block pc: 174 op: GLOBAL_INIT_CHECK (109)
    // SubProg pop_block pc: 176 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14119 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14119 = 1;
    }
    // SubProg pop_block pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14120 = (object)*(((s1_ptr)_2)->base + _14119);
    // SubProg pop_block pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14120);
    _64current_block_24751 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_64current_block_24751)){
        _64current_block_24751 = (object)DBL_PTR(_64current_block_24751)->dbl;
    }
    _14120 = NOVALUE;
    // SubProg pop_block pc: 189 op: STARTLINE (58)

    /** block.e:214		return block[BLOCK_SYM]*/
    // SubProg pop_block pc: 191 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_block_24922);
    _14122 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg pop_block pc: 195 op: RETURNF (28)
    Ref(_14122);

// Exiting block BLOCK: pop_block

// block var block_24922
    DeRefDS(_block_24922);

// block var block_vars_24935
    DeRef(_block_vars_24935);
    DeRef(_14110);
    _14110 = NOVALUE;
    _14107 = NOVALUE;
    _14101 = NOVALUE;
    DeRef(_14099);
    _14099 = NOVALUE;
    _14112 = NOVALUE;
    return _14122;
    // SubProg pop_block pc: 199 op: BADRETURNF (43)
    ;
}


object _64top_block(object _offset_24967)
{
    object _14130 = NOVALUE; // 24978 14130
    object _14129 = NOVALUE; // 24977 14129
    object _14128 = NOVALUE; // 24976 14128
    object _14127 = NOVALUE; // 24975 14127
    object _14126 = NOVALUE; // 24973 14126
    object _14125 = NOVALUE; // 24972 14125
// skipping _14124  name type: 0
    object _14123 = NOVALUE; // 24969 14123
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg top_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg top_block pc: 3 op: STARTLINE (58)

    /** block.e:219		if offset >= length(block_stack) then*/
    // SubProg top_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14123 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14123 = 1;
    }
    // SubProg top_block pc: 10 op: GREATEREQ_IFW_I (120)
    if (_offset_24967 < _14123)
    goto L1; // [10] 33
    // SubProg top_block pc: 14 op: STARTLINE (58)

    /** block.e:220			CompileErr(107, {offset,length(block_stack)})*/
    // SubProg top_block pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 18 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14125 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14125 = 1;
    }
    // SubProg top_block pc: 21 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _offset_24967;
    ((intptr_t *)_2)[2] = _14125;
    _14126 = MAKE_SEQ(_1);
    _14125 = NOVALUE;
    // SubProg top_block pc: 25 op: PROC (27)
    _49CompileErr(107, _14126, 0);
    _14126 = NOVALUE;
    // SubProg top_block pc: 30 op: ELSE (23)
    goto L2; // [30] 57
    // SubProg top_block pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 24965 op: 159
    // SubProg top_block pc: 33 op: STARTLINE (58)

    /** block.e:222			return block_stack[$-offset][BLOCK_SYM]*/
    // SubProg top_block pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg top_block pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14127 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14127 = 1;
    }
    // SubProg top_block pc: 40 op: MINUS (10)
    _14128 = _14127 - _offset_24967;
    _14127 = NOVALUE;
    // SubProg top_block pc: 44 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14129 = (object)*(((s1_ptr)_2)->base + _14128);
    // SubProg top_block pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14129);
    _14130 = (object)*(((s1_ptr)_2)->base + 1);
    _14129 = NOVALUE;
    // SubProg top_block pc: 52 op: RETURNF (28)
    Ref(_14130);

// Exiting block BLOCK: top_block

// block var offset_24967
    _14128 = NOVALUE;
    return _14130;
    // SubProg top_block pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 24965 op: 159
    // SubProg top_block pc: 57 op: BADRETURNF (43)
    ;
}


void _64End_block(object _opcode_24981)
{
    object _ix_24992 = NOVALUE;
    object _14138 = NOVALUE; // 24996 14138
// skipping _14137  name type: 0
// skipping _14136  name type: 0
    object _14135 = NOVALUE; // 24990 14135
    object _14134 = NOVALUE; // 24989 14134
    object _14133 = NOVALUE; // 24988 14133
    object _14132 = NOVALUE; // 24987 14132
// skipping _14131  name type: 0
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
    _64check_block(_opcode_24981);
    // SubProg End_block pc: 26 op: STARTLINE (58)

    /** block.e:233		if not length(block_stack[$][BLOCK_VARS]) then*/
    // SubProg End_block pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14132 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14132 = 1;
    }
    // SubProg End_block pc: 33 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14133 = (object)*(((s1_ptr)_2)->base + _14132);
    // SubProg End_block pc: 37 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14133);
    _14134 = (object)*(((s1_ptr)_2)->base + 6);
    _14133 = NOVALUE;
    // SubProg End_block pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_14134)){
            _14135 = SEQ_PTR(_14134)->length;
    }
    else {
        _14135 = 1;
    }
    _14134 = NOVALUE;
    // SubProg End_block pc: 44 op: NOT_IFW (108)
    if (_14135 != 0)
    goto L1; // [44] 64
    _14135 = NOVALUE;
    // SubProg End_block pc: 47 op: STARTLINE (58)

    /** block.e:234			integer ix = 1*/
    // SubProg End_block pc: 49 op: ASSIGN_I (113)
    _ix_24992 = 1;
    // SubProg End_block pc: 52 op: STARTLINE (58)

    /** block.e:235			ix = pop_block()*/
    // SubProg End_block pc: 54 op: PROC (27)
    _ix_24992 = _64pop_block();
    // SubProg End_block pc: 57 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ix_24992)) {
        _1 = (object)(DBL_PTR(_ix_24992)->dbl);
        DeRefDS(_ix_24992);
        _ix_24992 = _1;
    }
    // SubProg End_block pc: 59 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ix_24992
    // SubProg End_block pc: 61 op: ELSE (23)
    goto L2; // [61] 80
    // SubProg End_block pc: 63 op: NOP1 (159)
L1: // addr: 64 pc: 63 sub: 24979 op: 159
    // SubProg End_block pc: 64 op: STARTLINE (58)

    /** block.e:237			Push( pop_block() )*/
    // SubProg End_block pc: 66 op: PROC (27)
    _14138 = _64pop_block();
    // SubProg End_block pc: 69 op: PROC (27)
    _45Push(_14138);
    _14138 = NOVALUE;
    // SubProg End_block pc: 72 op: STARTLINE (58)

    /** block.e:238			emit_op( EXIT_BLOCK )*/
    // SubProg End_block pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_block pc: 76 op: PROC (27)
    _45emit_op(206);
    // SubProg End_block pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 24979 op: 159
    // SubProg End_block pc: 80 op: STARTLINE (58)

    /** block.e:241	end procedure*/
    // SubProg End_block pc: 82 op: RETURNP (29)

// Exiting block BLOCK: End_block

// block var opcode_24981
    _14134 = NOVALUE;
    return;
    // SubProg End_block pc: 85 op: BADRETURNF (43)
    ;
}


object _64End_inline_block(object _opcode_25001)
{
    object _14145 = NOVALUE; // 25013 14145
    object _14144 = NOVALUE; // 25012 14144
    object _14143 = NOVALUE; // 25010 14143
    object _14142 = NOVALUE; // 25009 14142
    object _14141 = NOVALUE; // 25008 14141
    object _14140 = NOVALUE; // 25007 14140
// skipping _14139  name type: 0
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
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14140 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14140 = 1;
    }
    // SubProg End_inline_block pc: 28 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14141 = (object)*(((s1_ptr)_2)->base + _14140);
    // SubProg End_inline_block pc: 32 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14141);
    _14142 = (object)*(((s1_ptr)_2)->base + 6);
    _14141 = NOVALUE;
    // SubProg End_inline_block pc: 36 op: LENGTH (42)
    if (IS_SEQUENCE(_14142)){
            _14143 = SEQ_PTR(_14142)->length;
    }
    else {
        _14143 = 1;
    }
    _14142 = NOVALUE;
    // SubProg End_inline_block pc: 39 op: IF (20)
    if (_14143 == 0)
    {
        _14143 = NOVALUE;
        goto L1; // [39] 60
    }
    else{
        _14143 = NOVALUE;
    }
    // SubProg End_inline_block pc: 42 op: STARTLINE (58)

    /** block.e:250			return { EXIT_BLOCK, pop_block() }*/
    // SubProg End_inline_block pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg End_inline_block pc: 46 op: PROC (27)
    _14144 = _64pop_block();
    // SubProg End_inline_block pc: 49 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _14144;
    _14145 = MAKE_SEQ(_1);
    _14144 = NOVALUE;
    // SubProg End_inline_block pc: 53 op: RETURNF (28)

// Exiting block BLOCK: End_inline_block

// block var opcode_25001
    _14142 = NOVALUE;
    return _14145;
    // SubProg End_inline_block pc: 57 op: ELSE (23)
    goto L2; // [57] 72
    // SubProg End_inline_block pc: 59 op: NOP1 (159)
L1: // addr: 60 pc: 59 sub: 24999 op: 159
    // SubProg End_inline_block pc: 60 op: STARTLINE (58)

    /** block.e:252			Drop_block( opcode )*/
    // SubProg End_inline_block pc: 62 op: PROC (27)
    _64Drop_block(_opcode_25001);
    // SubProg End_inline_block pc: 65 op: STARTLINE (58)

    /** block.e:253			return {}*/
    // SubProg End_inline_block pc: 67 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: End_inline_block

// block var opcode_25001
    _14142 = NOVALUE;
    DeRef(_14145);
    _14145 = NOVALUE;
    return _5;
    // SubProg End_inline_block pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 24999 op: 159
    // SubProg End_inline_block pc: 72 op: BADRETURNF (43)
    ;
}


void _64Sibling_block(object _opcode_25018)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Sibling_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Sibling_block pc: 3 op: STARTLINE (58)

    /** block.e:261		End_block( opcode )*/
    // SubProg Sibling_block pc: 5 op: PROC (27)
    _64End_block(_opcode_25018);
    // SubProg Sibling_block pc: 8 op: STARTLINE (58)

    /** block.e:262		Start_block( opcode )*/
    // SubProg Sibling_block pc: 10 op: PROC (27)
    _64Start_block(_opcode_25018, 0);
    // SubProg Sibling_block pc: 14 op: STARTLINE (58)

    /** block.e:263	end procedure*/
    // SubProg Sibling_block pc: 16 op: RETURNP (29)

// Exiting block BLOCK: Sibling_block

// block var opcode_25018
    return;
    // SubProg Sibling_block pc: 19 op: BADRETURNF (43)
    ;
}


void _64Leave_block(object _offset_25021)
{
    object _14151 = NOVALUE; // 25029 14151
    object _14150 = NOVALUE; // 25027 14150
    object _14149 = NOVALUE; // 25026 14149
    object _14148 = NOVALUE; // 25025 14148
    object _14147 = NOVALUE; // 25024 14147
    object _14146 = NOVALUE; // 25023 14146
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Leave_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_offset_25021)) {
        _1 = (object)(DBL_PTR(_offset_25021)->dbl);
        DeRefDS(_offset_25021);
        _offset_25021 = _1;
    }
    // SubProg Leave_block pc: 3 op: STARTLINE (58)

    /** block.e:268		if length( block_stack[$-offset][BLOCK_VARS]) then*/
    // SubProg Leave_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_block pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14146 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14146 = 1;
    }
    // SubProg Leave_block pc: 10 op: MINUS (10)
    _14147 = _14146 - _offset_25021;
    _14146 = NOVALUE;
    // SubProg Leave_block pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14148 = (object)*(((s1_ptr)_2)->base + _14147);
    // SubProg Leave_block pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14148);
    _14149 = (object)*(((s1_ptr)_2)->base + 6);
    _14148 = NOVALUE;
    // SubProg Leave_block pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_14149)){
            _14150 = SEQ_PTR(_14149)->length;
    }
    else {
        _14150 = 1;
    }
    _14149 = NOVALUE;
    // SubProg Leave_block pc: 25 op: IF (20)
    if (_14150 == 0)
    {
        _14150 = NOVALUE;
        goto L1; // [25] 45
    }
    else{
        _14150 = NOVALUE;
    }
    // SubProg Leave_block pc: 28 op: STARTLINE (58)

    /** block.e:269			Push( top_block( offset ) )*/
    // SubProg Leave_block pc: 30 op: PROC (27)
    _14151 = _64top_block(_offset_25021);
    // SubProg Leave_block pc: 34 op: PROC (27)
    _45Push(_14151);
    _14151 = NOVALUE;
    // SubProg Leave_block pc: 37 op: STARTLINE (58)

    /** block.e:270			emit_op( EXIT_BLOCK )*/
    // SubProg Leave_block pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg Leave_block pc: 41 op: PROC (27)
    _45emit_op(206);
    // SubProg Leave_block pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 25019 op: 159
    // SubProg Leave_block pc: 45 op: STARTLINE (58)

    /** block.e:272	end procedure*/
    // SubProg Leave_block pc: 47 op: RETURNP (29)

// Exiting block BLOCK: Leave_block

// block var offset_25021
    _14149 = NOVALUE;
    DeRef(_14147);
    _14147 = NOVALUE;
    return;
    // SubProg Leave_block pc: 50 op: BADRETURNF (43)
    ;
}


void _64Leave_blocks(object _blocks_25041, object _block_type_25042)
{
    object _bx_25043 = NOVALUE;
    object _Block_opcode_3__tmp_at29_25050 = NOVALUE;
    object _Block_opcode_2__tmp_at29_25049 = NOVALUE;
    object _Block_opcode_1__tmp_at29_25048 = NOVALUE;
    object _Block_opcode_inlined_Block_opcode_at_29_25047 = NOVALUE;
    object _14164 = NOVALUE; // 25069 14164
// skipping _14163  name type: 0
// skipping _14162  name type: 0
// skipping _14161  name type: 0
// skipping _14160  name type: 0
// skipping _14159  name type: 0
// skipping _14158  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Leave_blocks pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_blocks_25041)) {
        _1 = (object)(DBL_PTR(_blocks_25041)->dbl);
        DeRefDS(_blocks_25041);
        _blocks_25041 = _1;
    }
    // SubProg Leave_blocks pc: 3 op: INTEGER_CHECK (96)
    // SubProg Leave_blocks pc: 5 op: STARTLINE (58)

    /** block.e:284		integer bx = 0*/
    // SubProg Leave_blocks pc: 7 op: ASSIGN_I (113)
    _bx_25043 = 0;
    // SubProg Leave_blocks pc: 10 op: STARTLINE (58)

    /** block.e:285		while blocks do*/
    // SubProg Leave_blocks pc: 12 op: NOP2 (110)
    // SubProg Leave_blocks pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 25039 op: 158
    // SubProg Leave_blocks pc: 15 op: WHILE (47)
    if (_blocks_25041 == 0)
    {
        goto L2; // [15] 119
    }
    else{
    }
    // SubProg Leave_blocks pc: 18 op: STARTLINE (58)

    /** block.e:286			Leave_block( bx )*/
    // SubProg Leave_blocks pc: 20 op: PROC (27)
    _64Leave_block(_bx_25043);
    // SubProg Leave_blocks pc: 23 op: STARTLINE (58)

    /** block.e:288			if block_type then*/
    // SubProg Leave_blocks pc: 25 op: IF (20)
    if (_block_type_25042 == 0)
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
    if (IS_SEQUENCE(_64block_stack_24744)){
            _Block_opcode_1__tmp_at29_25048 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _Block_opcode_1__tmp_at29_25048 = 1;
    }
    // SubProg Leave_blocks pc: 37 op: MINUS (10)
    _Block_opcode_2__tmp_at29_25049 = _Block_opcode_1__tmp_at29_25048 - _bx_25043;
    // SubProg Leave_blocks pc: 41 op: RHS_SUBS (25)
    DeRef(_Block_opcode_3__tmp_at29_25050);
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _Block_opcode_3__tmp_at29_25050 = (object)*(((s1_ptr)_2)->base + _Block_opcode_2__tmp_at29_25049);
    Ref(_Block_opcode_3__tmp_at29_25050);
    // SubProg Leave_blocks pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_Block_opcode_inlined_Block_opcode_at_29_25047);
    _2 = (object)SEQ_PTR(_Block_opcode_3__tmp_at29_25050);
    _Block_opcode_inlined_Block_opcode_at_29_25047 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_Block_opcode_inlined_Block_opcode_at_29_25047);
    // SubProg Leave_blocks pc: 49 op: NOP1 (159)
    // SubProg Leave_blocks pc: 50 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-Block_opcode from Leave_blocks @ 29

// block var Block_opcode_1__tmp_at29_25048

// block var Block_opcode_2__tmp_at29_25049

// block var Block_opcode_3__tmp_at29_25050
    DeRef(_Block_opcode_3__tmp_at29_25050);
    _Block_opcode_3__tmp_at29_25050 = NOVALUE;
    // SubProg Leave_blocks pc: 52 op: SWITCH_I (193)
    if (IS_SEQUENCE(_Block_opcode_inlined_Block_opcode_at_29_25047) ){
        goto L4; // [52] 82
    }
    if(!IS_ATOM_INT(_Block_opcode_inlined_Block_opcode_at_29_25047)){
        if( (DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25047)->dbl != (eudouble) ((object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25047)->dbl) ) ){
            goto L4; // [52] 82
        }
        _0 = (object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25047)->dbl;
    }
    else {
        _0 = _Block_opcode_inlined_Block_opcode_at_29_25047;
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
        if (_block_type_25042 != 1)
        goto L5; // [67] 108
        // SubProg Leave_blocks pc: 71 op: STARTLINE (58)

        /** block.e:292							blocks -= 1*/
        // SubProg Leave_blocks pc: 73 op: MINUS_I (116)
        _blocks_25041 = _blocks_25041 - 1;
        // SubProg Leave_blocks pc: 77 op: NOP1 (159)
        // SubProg Leave_blocks pc: 78 op: ELSE (23)
        goto L5; // [78] 108
        // SubProg Leave_blocks pc: 80 op: STARTLINE (58)

        /** block.e:294					case else*/
        // SubProg Leave_blocks pc: 82 op: CASE (186)
        default:
L4: // addr: 82 pc: 82 sub: 25039 op: 186
        // SubProg Leave_blocks pc: 84 op: STARTLINE (58)

        /** block.e:295						if block_type = CONDITIONAL_BLOCK then*/
        // SubProg Leave_blocks pc: 86 op: EQUALS_IFW_I (121)
        if (_block_type_25042 != 2)
        goto L6; // [86] 97
        // SubProg Leave_blocks pc: 90 op: STARTLINE (58)

        /** block.e:296							blocks -= 1*/
        // SubProg Leave_blocks pc: 92 op: MINUS_I (116)
        _blocks_25041 = _blocks_25041 - 1;
        // SubProg Leave_blocks pc: 96 op: NOP1 (159)
L6: // addr: 97 pc: 96 sub: 25039 op: 159
        // SubProg Leave_blocks pc: 97 op: NOPSWITCH (187)
    ;}    // SubProg Leave_blocks pc: 98 op: ELSE (23)
    goto L5; // [98] 108
    // SubProg Leave_blocks pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 25039 op: 159
    // SubProg Leave_blocks pc: 101 op: STARTLINE (58)

    /** block.e:300				blocks -= 1*/
    // SubProg Leave_blocks pc: 103 op: MINUS_I (116)
    _blocks_25041 = _blocks_25041 - 1;
    // SubProg Leave_blocks pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 25039 op: 159
    // SubProg Leave_blocks pc: 108 op: STARTLINE (58)

    /** block.e:302			bx += 1*/
    // SubProg Leave_blocks pc: 110 op: PLUS1_I (117)
    _bx_25043 = _bx_25043 + 1;
    // SubProg Leave_blocks pc: 114 op: STARTLINE (58)

    /** block.e:303		end while*/
    // SubProg Leave_blocks pc: 116 op: ENDWHILE (22)
    goto L1; // [116] 15
    // SubProg Leave_blocks pc: 118 op: NOP1 (159)
L2: // addr: 119 pc: 118 sub: 25039 op: 159
    // SubProg Leave_blocks pc: 119 op: STARTLINE (58)

    /** block.e:304		for i = 0 to blocks - 1 do*/
    // SubProg Leave_blocks pc: 121 op: MINUS (10)
    _14164 = _blocks_25041 - 1;
    if ((object)((uintptr_t)_14164 +(uintptr_t) HIGH_BITS) >= 0){
        _14164 = NewDouble((eudouble)_14164);
    }
    // SubProg Leave_blocks pc: 125 op: FOR (21)
    {
        object _i_25068;
        _i_25068 = 0;
L7: // addr: 132 pc: 125 sub: 25039 op: 21
        if (binary_op_a(GREATER, _i_25068, _14164)){
            goto L8; // [125] 144
        }
        // SubProg Leave_blocks pc: 132 op: STARTLINE (58)

        /** block.e:305			Leave_block( i )*/
        // SubProg Leave_blocks pc: 134 op: PROC (27)
        Ref(_i_25068);
        _64Leave_block(_i_25068);
        // SubProg Leave_blocks pc: 137 op: STARTLINE (58)

        /** block.e:306		end for*/
        // SubProg Leave_blocks pc: 139 op: ENDFOR_INT_UP1 (54)
        _0 = _i_25068;
        if (IS_ATOM_INT(_i_25068)) {
            _i_25068 = _i_25068 + 1;
            if ((object)((uintptr_t)_i_25068 +(uintptr_t) HIGH_BITS) >= 0){
                _i_25068 = NewDouble((eudouble)_i_25068);
            }
        }
        else {
            _i_25068 = binary_op_a(PLUS, _i_25068, 1);
        }
        DeRef(_0);
        goto L7; // [139] 132
L8: // addr: 144 pc: 139 sub: 25039 op: 54
        ;
        DeRef(_i_25068);
    }
    // SubProg Leave_blocks pc: 144 op: STARTLINE (58)

    /** block.e:307	end procedure*/
    // SubProg Leave_blocks pc: 146 op: RETURNP (29)

// Exiting block BLOCK: Leave_blocks

// block var blocks_25041

// block var block_type_25042

// block var bx_25043
    DeRef(_14164);
    _14164 = NOVALUE;
    return;
    // SubProg Leave_blocks pc: 149 op: BADRETURNF (43)
    ;
}


void _64Drop_block(object _opcode_25072)
{
    object _x_25074 = NOVALUE;
// skipping _14165  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Drop_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg Drop_block pc: 3 op: STARTLINE (58)

    /** block.e:311		check_block( opcode )*/
    // SubProg Drop_block pc: 5 op: PROC (27)
    _64check_block(_opcode_25072);
    // SubProg Drop_block pc: 8 op: STARTLINE (58)

    /** block.e:312		symtab_index x = pop_block()*/
    // SubProg Drop_block pc: 10 op: PROC (27)
    _x_25074 = _64pop_block();
    // SubProg Drop_block pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_25074)) {
        _1 = (object)(DBL_PTR(_x_25074)->dbl);
        DeRefDS(_x_25074);
        _x_25074 = _1;
    }
    // SubProg Drop_block pc: 15 op: STARTLINE (58)

    /** block.e:313	end procedure*/
    // SubProg Drop_block pc: 17 op: RETURNP (29)

// Exiting block BLOCK: Drop_block

// block var opcode_25072

// block var x_25074
    return;
    // SubProg Drop_block pc: 20 op: BADRETURNF (43)
    ;
}


void _64Pop_block_var()
{
    object _sym_25079 = NOVALUE;
    object _block_sym_25086 = NOVALUE;
    object _14192 = NOVALUE; // 25116 14192
    object _14191 = NOVALUE; // 25115 14191
    object _14190 = NOVALUE; // 25114 14190
    object _14189 = NOVALUE; // 25113 14189
    object _14188 = NOVALUE; // 25112 14188
    object _14187 = NOVALUE; // 25111 14187
    object _14186 = NOVALUE; // 25110 14186
    object _14185 = NOVALUE; // 25109 14185
// skipping _14184  name type: 0
    object _14183 = NOVALUE; // 25107 14183
    object _14182 = NOVALUE; // 25106 14182
// skipping _14181  name type: 0
    object _14180 = NOVALUE; // 25103 14180
    object _14179 = NOVALUE; // 25101 14179
// skipping _14178  name type: 0
    object _14177 = NOVALUE; // 25097 14177
// skipping _14176  name type: 0
// skipping _14175  name type: 0
    object _14174 = NOVALUE; // 25092 14174
// skipping _14173  name type: 0
    object _14172 = NOVALUE; // 25088 14172
    object _14171 = NOVALUE; // 25087 14171
// skipping _14170  name type: 0
    object _14169 = NOVALUE; // 25083 14169
    object _14168 = NOVALUE; // 25082 14168
    object _14167 = NOVALUE; // 25081 14167
    object _14166 = NOVALUE; // 25080 14166
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Pop_block_var pc: 1 op: STARTLINE (58)

    /** block.e:316		symtab_index sym = block_stack[$][BLOCK_VARS][$]*/
    // SubProg Pop_block_var pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14166 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14166 = 1;
    }
    // SubProg Pop_block_var pc: 8 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14167 = (object)*(((s1_ptr)_2)->base + _14166);
    // SubProg Pop_block_var pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14167);
    _14168 = (object)*(((s1_ptr)_2)->base + 6);
    _14167 = NOVALUE;
    // SubProg Pop_block_var pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_14168)){
            _14169 = SEQ_PTR(_14168)->length;
    }
    else {
        _14169 = 1;
    }
    // SubProg Pop_block_var pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14168);
    _sym_25079 = (object)*(((s1_ptr)_2)->base + _14169);
    if (!IS_ATOM_INT(_sym_25079)){
        _sym_25079 = (object)DBL_PTR(_sym_25079)->dbl;
    }
    _14168 = NOVALUE;
    // SubProg Pop_block_var pc: 25 op: STARTLINE (58)

    /** block.e:317		symtab_index block_sym = block_stack[$][BLOCK_SYM]*/
    // SubProg Pop_block_var pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14171 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14171 = 1;
    }
    // SubProg Pop_block_var pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14172 = (object)*(((s1_ptr)_2)->base + _14171);
    // SubProg Pop_block_var pc: 36 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14172);
    _block_sym_25086 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_block_sym_25086)){
        _block_sym_25086 = (object)DBL_PTR(_block_sym_25086)->dbl;
    }
    _14172 = NOVALUE;
    // SubProg Pop_block_var pc: 42 op: STARTLINE (58)

    /** block.e:318		while sym_next_in_block( block_sym ) != sym do*/
    // SubProg Pop_block_var pc: 44 op: NOP2 (110)
    // SubProg Pop_block_var pc: 46 op: NOPWHILE (158)
L1: // addr: 47 pc: 46 sub: 25076 op: 158
    // SubProg Pop_block_var pc: 47 op: PROC (27)
    _14174 = _53sym_next_in_block(_block_sym_25086);
    // SubProg Pop_block_var pc: 51 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _14174, _sym_25079)){
        DeRef(_14174);
        _14174 = NOVALUE;
        goto L2; // [51] 68
    }
    DeRef(_14174);
    _14174 = NOVALUE;
    // SubProg Pop_block_var pc: 55 op: STARTLINE (58)

    /** block.e:319			block_sym = sym_next_in_block( block_sym )*/
    // SubProg Pop_block_var pc: 57 op: PROC (27)
    _block_sym_25086 = _53sym_next_in_block(_block_sym_25086);
    // SubProg Pop_block_var pc: 61 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_block_sym_25086)) {
        _1 = (object)(DBL_PTR(_block_sym_25086)->dbl);
        DeRefDS(_block_sym_25086);
        _block_sym_25086 = _1;
    }
    // SubProg Pop_block_var pc: 63 op: STARTLINE (58)

    /** block.e:320		end while*/
    // SubProg Pop_block_var pc: 65 op: ENDWHILE (22)
    goto L1; // [65] 47
    // SubProg Pop_block_var pc: 67 op: NOP1 (159)
L2: // addr: 68 pc: 67 sub: 25076 op: 159
    // SubProg Pop_block_var pc: 68 op: STARTLINE (58)

    /** block.e:322		SymTab[block_sym][S_NEXT_IN_BLOCK] = sym_next_in_block( sym )*/
    // SubProg Pop_block_var pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 72 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_block_sym_25086 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 79 op: PROC (27)
    _14179 = _53sym_next_in_block(_sym_25079);
    // SubProg Pop_block_var pc: 83 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14179;
    if( _1 != _14179 ){
        DeRef(_1);
    }
    _14179 = NOVALUE;
    _14177 = NOVALUE;
    // SubProg Pop_block_var pc: 87 op: STARTLINE (58)

    /** block.e:323		SymTab[sym][S_NEXT_IN_BLOCK] = 0*/
    // SubProg Pop_block_var pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 91 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25079 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 98 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _14180 = NOVALUE;
    // SubProg Pop_block_var pc: 102 op: STARTLINE (58)

    /** block.e:325		block_stack[$][BLOCK_VARS] = eu:remove( block_stack[$][BLOCK_VARS], */
    // SubProg Pop_block_var pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 106 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14182 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14182 = 1;
    }
    // SubProg Pop_block_var pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _64block_stack_24744 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14182 + ((s1_ptr)_2)->base);
    // SubProg Pop_block_var pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 116 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14185 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14185 = 1;
    }
    // SubProg Pop_block_var pc: 119 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14186 = (object)*(((s1_ptr)_2)->base + _14185);
    // SubProg Pop_block_var pc: 123 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14186);
    _14187 = (object)*(((s1_ptr)_2)->base + 6);
    _14186 = NOVALUE;
    // SubProg Pop_block_var pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg Pop_block_var pc: 129 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _14188 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _14188 = 1;
    }
    // SubProg Pop_block_var pc: 132 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14189 = (object)*(((s1_ptr)_2)->base + _14188);
    // SubProg Pop_block_var pc: 136 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14189);
    _14190 = (object)*(((s1_ptr)_2)->base + 6);
    _14189 = NOVALUE;
    // SubProg Pop_block_var pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_14190)){
            _14191 = SEQ_PTR(_14190)->length;
    }
    else {
        _14191 = 1;
    }
    _14190 = NOVALUE;
    // SubProg Pop_block_var pc: 143 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_14187);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14191)) ? _14191 : (object)(DBL_PTR(_14191)->dbl);
        int stop = (IS_ATOM_INT(_14191)) ? _14191 : (object)(DBL_PTR(_14191)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_14187);
            DeRef(_14192);
            _14192 = _14187;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_14187), start, &_14192 );
            }
            else Tail(SEQ_PTR(_14187), stop+1, &_14192);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_14187), start, &_14192);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_14192);
            _14192 = _1;
        }
    }
    _14187 = NOVALUE;
    _14191 = NOVALUE;
    _14191 = NOVALUE;
    // SubProg Pop_block_var pc: 148 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14192;
    if( _1 != _14192 ){
        DeRef(_1);
    }
    _14192 = NOVALUE;
    _14183 = NOVALUE;
    // SubProg Pop_block_var pc: 152 op: STARTLINE (58)

    /** block.e:327	end procedure*/
    // SubProg Pop_block_var pc: 154 op: RETURNP (29)

// Exiting block BLOCK: Pop_block_var

// block var sym_25079

// block var block_sym_25086
    _14190 = NOVALUE;
    return;
    // SubProg Pop_block_var pc: 157 op: BADRETURNF (43)
    ;
}


void _64Goto_block(object _from_block_25120, object _to_block_25122, object _pc_25123)
{
    object _code_25124 = NOVALUE;
    object _next_block_25126 = NOVALUE;
// skipping _14204  name type: 0
    object _14203 = NOVALUE; // 25144 14203
// skipping _14202  name type: 0
// skipping _14201  name type: 0
    object _14200 = NOVALUE; // 25139 14200
    object _14199 = NOVALUE; // 25137 14199
    object _14198 = NOVALUE; // 25136 14198
    object _14197 = NOVALUE; // 25134 14197
    object _14196 = NOVALUE; // 25132 14196
    object _14195 = NOVALUE; // 25131 14195
    object _14194 = NOVALUE; // 25130 14194
// skipping _14193  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Goto_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_from_block_25120)) {
        _1 = (object)(DBL_PTR(_from_block_25120)->dbl);
        DeRefDS(_from_block_25120);
        _from_block_25120 = _1;
    }
    // SubProg Goto_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_to_block_25122)) {
        _1 = (object)(DBL_PTR(_to_block_25122)->dbl);
        DeRefDS(_to_block_25122);
        _to_block_25122 = _1;
    }
    // SubProg Goto_block pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pc_25123)) {
        _1 = (object)(DBL_PTR(_pc_25123)->dbl);
        DeRefDS(_pc_25123);
        _pc_25123 = _1;
    }
    // SubProg Goto_block pc: 7 op: STARTLINE (58)

    /** block.e:330		sequence code = {}*/
    // SubProg Goto_block pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_code_25124);
    _code_25124 = _5;
    // SubProg Goto_block pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg Goto_block pc: 14 op: STARTLINE (58)

    /** block.e:331		symtab_index next_block = sym_block( from_block )*/
    // SubProg Goto_block pc: 16 op: PROC (27)
    _next_block_25126 = _53sym_block(_from_block_25120);
    // SubProg Goto_block pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_block_25126)) {
        _1 = (object)(DBL_PTR(_next_block_25126)->dbl);
        DeRefDS(_next_block_25126);
        _next_block_25126 = _1;
    }
    // SubProg Goto_block pc: 22 op: STARTLINE (58)

    /** block.e:332		while next_block */
    // SubProg Goto_block pc: 24 op: NOP2 (110)
    // SubProg Goto_block pc: 26 op: NOPWHILE (158)
L1: // addr: 27 pc: 26 sub: 25117 op: 158
    // SubProg Goto_block pc: 27 op: SC1_AND (141)
    if (_next_block_25126 == 0) {
        _14194 = 0;
        goto L2; // [27] 39
    }
    // SubProg Goto_block pc: 31 op: NOTEQ (4)
    _14195 = (_from_block_25120 != _to_block_25122);
    // SubProg Goto_block pc: 35 op: SC2_AND (142)
    _14194 = (_14195 != 0);
    // SubProg Goto_block pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 25117 op: 159
    // SubProg Goto_block pc: 39 op: SC1_AND_IF (146)
    if (_14194 == 0) {
        goto L3; // [39] 93
    }
    // SubProg Goto_block pc: 43 op: PROC (27)
    _14197 = _53sym_token(_next_block_25126);
    // SubProg Goto_block pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 49 op: FIND_FROM (176)
    _14198 = find_from(_14197, _36RTN_TOKS_14796, 1);
    DeRef(_14197);
    _14197 = NOVALUE;
    // SubProg Goto_block pc: 54 op: NOT (7)
    _14199 = (_14198 == 0);
    _14198 = NOVALUE;
    // SubProg Goto_block pc: 57 op: NOP1 (159)
    // SubProg Goto_block pc: 58 op: WHILE (47)
    if (_14199 == 0)
    {
        DeRef(_14199);
        _14199 = NOVALUE;
        goto L3; // [58] 93
    }
    else{
        DeRef(_14199);
        _14199 = NOVALUE;
    }
    // SubProg Goto_block pc: 61 op: STARTLINE (58)

    /** block.e:335			code &= { EXIT_BLOCK, from_block }*/
    // SubProg Goto_block pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 65 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _from_block_25120;
    _14200 = MAKE_SEQ(_1);
    // SubProg Goto_block pc: 69 op: CONCAT (15)
    Concat((object_ptr)&_code_25124, _code_25124, _14200);
    DeRefDS(_14200);
    _14200 = NOVALUE;
    // SubProg Goto_block pc: 73 op: STARTLINE (58)

    /** block.e:336			from_block = next_block*/
    // SubProg Goto_block pc: 75 op: ASSIGN (18)
    _from_block_25120 = _next_block_25126;
    // SubProg Goto_block pc: 78 op: INTEGER_CHECK (96)
    // SubProg Goto_block pc: 80 op: STARTLINE (58)

    /** block.e:337			next_block = sym_block( next_block )*/
    // SubProg Goto_block pc: 82 op: PROC (27)
    _next_block_25126 = _53sym_block(_next_block_25126);
    // SubProg Goto_block pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_block_25126)) {
        _1 = (object)(DBL_PTR(_next_block_25126)->dbl);
        DeRefDS(_next_block_25126);
        _next_block_25126 = _1;
    }
    // SubProg Goto_block pc: 88 op: STARTLINE (58)

    /** block.e:338		end while*/
    // SubProg Goto_block pc: 90 op: ENDWHILE (22)
    goto L1; // [90] 27
    // SubProg Goto_block pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 25117 op: 159
    // SubProg Goto_block pc: 93 op: STARTLINE (58)

    /** block.e:340		if length(code) then*/
    // SubProg Goto_block pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_code_25124)){
            _14203 = SEQ_PTR(_code_25124)->length;
    }
    else {
        _14203 = 1;
    }
    // SubProg Goto_block pc: 98 op: IF (20)
    if (_14203 == 0)
    {
        _14203 = NOVALUE;
        goto L4; // [98] 127
    }
    else{
        _14203 = NOVALUE;
    }
    // SubProg Goto_block pc: 101 op: STARTLINE (58)

    /** block.e:341			if pc then*/
    // SubProg Goto_block pc: 103 op: IF (20)
    if (_pc_25123 == 0)
    {
        goto L5; // [103] 115
    }
    else{
    }
    // SubProg Goto_block pc: 106 op: STARTLINE (58)

    /** block.e:342				insert_code( code, pc )*/
    // SubProg Goto_block pc: 108 op: PROC (27)
    RefDS(_code_25124);
    _65insert_code(_code_25124, _pc_25123);
    // SubProg Goto_block pc: 112 op: ELSE (23)
    goto L6; // [112] 126
    // SubProg Goto_block pc: 114 op: NOP1 (159)
L5: // addr: 115 pc: 114 sub: 25117 op: 159
    // SubProg Goto_block pc: 115 op: STARTLINE (58)

    /** block.e:344				Code &= code*/
    // SubProg Goto_block pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg Goto_block pc: 119 op: CONCAT (15)
    Concat((object_ptr)&_34Code_15276, _34Code_15276, _code_25124);
    // SubProg Goto_block pc: 123 op: SEQUENCE_CHECK (97)
    // SubProg Goto_block pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 25117 op: 159
    // SubProg Goto_block pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 25117 op: 159
    // SubProg Goto_block pc: 127 op: STARTLINE (58)

    /** block.e:348	end procedure*/
    // SubProg Goto_block pc: 129 op: RETURNP (29)

// Exiting block BLOCK: Goto_block

// block var from_block_25120

// block var to_block_25122

// block var pc_25123

// block var code_25124
    DeRefi(_code_25124);

// block var next_block_25126
    DeRef(_14195);
    _14195 = NOVALUE;
    return;
    // SubProg Goto_block pc: 132 op: BADRETURNF (43)
    ;
}


object _64Least_block()
{
    object _ix_25154 = NOVALUE;
    object _sub_block_25157 = NOVALUE;
    object _14217 = NOVALUE; // 25172 14217
    object _14216 = NOVALUE; // 25171 14216
// skipping _14215  name type: 0
    object _14214 = NOVALUE; // 25169 14214
    object _14213 = NOVALUE; // 25168 14213
    object _14212 = NOVALUE; // 25167 14212
    object _14211 = NOVALUE; // 25166 14211
    object _14210 = NOVALUE; // 25165 14210
    object _14209 = NOVALUE; // 25164 14209
    object _14208 = NOVALUE; // 25163 14208
    object _14207 = NOVALUE; // 25162 14207
// skipping _14206  name type: 0
// skipping _14205  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Least_block pc: 1 op: STARTLINE (58)

    /** block.e:358		integer ix = length( block_stack )*/
    // SubProg Least_block pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_64block_stack_24744)){
            _ix_25154 = SEQ_PTR(_64block_stack_24744)->length;
    }
    else {
        _ix_25154 = 1;
    }
    // SubProg Least_block pc: 8 op: STARTLINE (58)

    /** block.e:359		symtab_index sub_block = sym_block( CurrentSub )*/
    // SubProg Least_block pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 12 op: PROC (27)
    _sub_block_25157 = _53sym_block(_34CurrentSub_15196);
    // SubProg Least_block pc: 16 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sub_block_25157)) {
        _1 = (object)(DBL_PTR(_sub_block_25157)->dbl);
        DeRefDS(_sub_block_25157);
        _sub_block_25157 = _1;
    }
    // SubProg Least_block pc: 18 op: STARTLINE (58)

    /** block.e:360		while not length( block_stack[ix][BLOCK_VARS] ) */
    // SubProg Least_block pc: 20 op: NOP2 (110)
    // SubProg Least_block pc: 22 op: NOPWHILE (158)
L1: // addr: 23 pc: 22 sub: 25152 op: 158
    // SubProg Least_block pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14207 = (object)*(((s1_ptr)_2)->base + _ix_25154);
    // SubProg Least_block pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14207);
    _14208 = (object)*(((s1_ptr)_2)->base + 6);
    _14207 = NOVALUE;
    // SubProg Least_block pc: 33 op: LENGTH (42)
    if (IS_SEQUENCE(_14208)){
            _14209 = SEQ_PTR(_14208)->length;
    }
    else {
        _14209 = 1;
    }
    _14208 = NOVALUE;
    // SubProg Least_block pc: 36 op: NOT (7)
    _14210 = (_14209 == 0);
    _14209 = NOVALUE;
    // SubProg Least_block pc: 39 op: SC1_AND_IF (146)
    if (_14210 == 0) {
        goto L2; // [39] 72
    }
    // SubProg Least_block pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 45 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14212 = (object)*(((s1_ptr)_2)->base + _ix_25154);
    // SubProg Least_block pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14212);
    _14213 = (object)*(((s1_ptr)_2)->base + 1);
    _14212 = NOVALUE;
    // SubProg Least_block pc: 53 op: NOTEQ (4)
    if (IS_ATOM_INT(_14213)) {
        _14214 = (_14213 != _sub_block_25157);
    }
    else {
        _14214 = binary_op(NOTEQ, _14213, _sub_block_25157);
    }
    _14213 = NOVALUE;
    // SubProg Least_block pc: 57 op: NOP1 (159)
    // SubProg Least_block pc: 58 op: WHILE (47)
    if (_14214 <= 0) {
        if (_14214 == 0) {
            DeRef(_14214);
            _14214 = NOVALUE;
            goto L2; // [58] 72
        }
        else {
            if (!IS_ATOM_INT(_14214) && DBL_PTR(_14214)->dbl == 0.0){
                DeRef(_14214);
                _14214 = NOVALUE;
                goto L2; // [58] 72
            }
            DeRef(_14214);
            _14214 = NOVALUE;
        }
    }
    DeRef(_14214);
    _14214 = NOVALUE;
    // SubProg Least_block pc: 61 op: STARTLINE (58)

    /** block.e:362			ix -= 1	*/
    // SubProg Least_block pc: 63 op: MINUS_I (116)
    _ix_25154 = _ix_25154 - 1;
    // SubProg Least_block pc: 67 op: STARTLINE (58)

    /** block.e:363		end while*/
    // SubProg Least_block pc: 69 op: ENDWHILE (22)
    goto L1; // [69] 23
    // SubProg Least_block pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 25152 op: 159
    // SubProg Least_block pc: 72 op: STARTLINE (58)

    /** block.e:364		return block_stack[ix][BLOCK_SYM]*/
    // SubProg Least_block pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg Least_block pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_64block_stack_24744);
    _14216 = (object)*(((s1_ptr)_2)->base + _ix_25154);
    // SubProg Least_block pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14216);
    _14217 = (object)*(((s1_ptr)_2)->base + 1);
    _14216 = NOVALUE;
    // SubProg Least_block pc: 84 op: RETURNF (28)
    Ref(_14217);

// Exiting block BLOCK: Least_block

// block var ix_25154

// block var sub_block_25157
    _14208 = NOVALUE;
    DeRef(_14210);
    _14210 = NOVALUE;
    return _14217;
    // SubProg Least_block pc: 88 op: BADRETURNF (43)
    ;
}



// 0x1E340987
