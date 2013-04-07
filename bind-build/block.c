// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _66block_type_name(object _opcode_24754)
{
    object _14004 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_opcode_24754)) {
        _1 = (object)(DBL_PTR(_opcode_24754)->dbl);
        DeRefDS(_opcode_24754);
        _opcode_24754 = _1;
    }

    /** block.e:51		switch opcode do*/
    _0 = _opcode_24754;
    switch ( _0 ){ 

        /** block.e:52			case LOOP then*/
        case 422:

        /** block.e:53				return "LOOP"*/
        RefDS(_14002);
        return _14002;
        goto L1; // [20] 63

        /** block.e:54			case PROC then*/
        case 27:

        /** block.e:55				return "PROC"*/
        RefDS(_12908);
        return _12908;
        goto L1; // [32] 63

        /** block.e:56			case FUNC then*/
        case 501:

        /** block.e:57				return "FUNC"*/
        RefDS(_14003);
        return _14003;
        goto L1; // [44] 63

        /** block.e:58			case else*/
        default:

        /** block.e:59				return opnames[opcode]*/
        _2 = (object)SEQ_PTR(_62opnames_22520);
        _14004 = (object)*(((s1_ptr)_2)->base + _opcode_24754);
        RefDS(_14004);
        return _14004;
    ;}L1: 
    ;
}


void _66check_block(object _got_24770)
{
    object _expected_24771 = NOVALUE;
    object _14012 = NOVALUE;
    object _14011 = NOVALUE;
    object _14010 = NOVALUE;
    object _14006 = NOVALUE;
    object _14005 = NOVALUE;
    object _0, _1, _2;
    

    /** block.e:64		integer expected = block_stack[$][BLOCK_OPCODE]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14005 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14005 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14006 = (object)*(((s1_ptr)_2)->base + _14005);
    _2 = (object)SEQ_PTR(_14006);
    _expected_24771 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_expected_24771)){
        _expected_24771 = (object)DBL_PTR(_expected_24771)->dbl;
    }
    _14006 = NOVALUE;

    /** block.e:65		if got = FUNC then*/
    if (_got_24770 != 501)
    goto L1; // [24] 38

    /** block.e:66			got = PROC*/
    _got_24770 = 27;
L1: 

    /** block.e:68		if got != expected then*/
    if (_got_24770 == _expected_24771)
    goto L2; // [40] 64

    /** block.e:69			CompileErr( 79, {block_type_name( expected ), block_type_name( got)} )*/
    _14010 = _66block_type_name(_expected_24771);
    _14011 = _66block_type_name(_got_24770);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14010;
    ((intptr_t *)_2)[2] = _14011;
    _14012 = MAKE_SEQ(_1);
    _14011 = NOVALUE;
    _14010 = NOVALUE;
    _52CompileErr(79, _14012, 0);
    _14012 = NOVALUE;
L2: 

    /** block.e:71	end procedure*/
    return;
    ;
}


void _66Block_var(object _sym_24788)
{
    object _block_24789 = NOVALUE;
    object _14033 = NOVALUE;
    object _14032 = NOVALUE;
    object _14031 = NOVALUE;
    object _14029 = NOVALUE;
    object _14028 = NOVALUE;
    object _14026 = NOVALUE;
    object _14025 = NOVALUE;
    object _14024 = NOVALUE;
    object _14023 = NOVALUE;
    object _14022 = NOVALUE;
    object _14021 = NOVALUE;
    object _14020 = NOVALUE;
    object _14018 = NOVALUE;
    object _14016 = NOVALUE;
    object _14015 = NOVALUE;
    object _14013 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_sym_24788)) {
        _1 = (object)(DBL_PTR(_sym_24788)->dbl);
        DeRefDS(_sym_24788);
        _sym_24788 = _1;
    }

    /** block.e:75		sequence block = block_stack[$]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14013 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14013 = 1;
    }
    DeRef(_block_24789);
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _block_24789 = (object)*(((s1_ptr)_2)->base + _14013);
    Ref(_block_24789);

    /** block.e:76		block_stack[$] = 0*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14015 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14015 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _2 = (object)(((s1_ptr)_2)->base + _14015);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** block.e:77		if length(block_stack) > 1 then*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14016 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14016 = 1;
    }
    if (_14016 <= 1)
    goto L1; // [34] 58

    /** block.e:79			SymTab[sym][S_BLOCK] = block[BLOCK_SYM]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_24788 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_block_24789);
    _14020 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_14020);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_BLOCK_16490))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_BLOCK_16490);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14020;
    if( _1 != _14020 ){
        DeRef(_1);
    }
    _14020 = NOVALUE;
    _14018 = NOVALUE;
L1: 

    /** block.e:82		if length(block[BLOCK_VARS]) then*/
    _2 = (object)SEQ_PTR(_block_24789);
    _14021 = (object)*(((s1_ptr)_2)->base + 6);
    if (IS_SEQUENCE(_14021)){
            _14022 = SEQ_PTR(_14021)->length;
    }
    else {
        _14022 = 1;
    }
    _14021 = NOVALUE;
    if (_14022 == 0)
    {
        _14022 = NOVALUE;
        goto L2; // [67] 99
    }
    else{
        _14022 = NOVALUE;
    }

    /** block.e:83			SymTab[block[BLOCK_VARS][$]][S_NEXT_IN_BLOCK] = sym*/
    _2 = (object)SEQ_PTR(_block_24789);
    _14023 = (object)*(((s1_ptr)_2)->base + 6);
    if (IS_SEQUENCE(_14023)){
            _14024 = SEQ_PTR(_14023)->length;
    }
    else {
        _14024 = 1;
    }
    _2 = (object)SEQ_PTR(_14023);
    _14025 = (object)*(((s1_ptr)_2)->base + _14024);
    _14023 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14025))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14025)->dbl));
    else
    _3 = (object)(_14025 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24788;
    DeRef(_1);
    _14026 = NOVALUE;
    goto L3; // [96] 119
L2: 

    /** block.e:85			SymTab[block[BLOCK_SYM]][S_NEXT_IN_BLOCK] = sym*/
    _2 = (object)SEQ_PTR(_block_24789);
    _14028 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14028))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14028)->dbl));
    else
    _3 = (object)(_14028 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_24788;
    DeRef(_1);
    _14029 = NOVALUE;
L3: 

    /** block.e:88		block[BLOCK_VARS] &= sym*/
    _2 = (object)SEQ_PTR(_block_24789);
    _14031 = (object)*(((s1_ptr)_2)->base + 6);
    if (IS_SEQUENCE(_14031) && IS_ATOM(_sym_24788)) {
        Append(&_14032, _14031, _sym_24788);
    }
    else if (IS_ATOM(_14031) && IS_SEQUENCE(_sym_24788)) {
    }
    else {
        Concat((object_ptr)&_14032, _14031, _sym_24788);
        _14031 = NOVALUE;
    }
    _14031 = NOVALUE;
    _2 = (object)SEQ_PTR(_block_24789);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24789 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14032;
    if( _1 != _14032 ){
        DeRef(_1);
    }
    _14032 = NOVALUE;

    /** block.e:90		block_stack[$] = block*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14033 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14033 = 1;
    }
    RefDS(_block_24789);
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _2 = (object)(((s1_ptr)_2)->base + _14033);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _block_24789;
    DeRef(_1);

    /** block.e:91		ifdef BDEBUG then*/

    /** block.e:96	end procedure*/
    DeRefDS(_block_24789);
    _14025 = NOVALUE;
    _14028 = NOVALUE;
    _14021 = NOVALUE;
    return;
    ;
}


void _66NewBlock(object _opcode_24823, object _block_label_24824)
{
    object _block_24842 = NOVALUE;
    object _14047 = NOVALUE;
    object _14046 = NOVALUE;
    object _14045 = NOVALUE;
    object _14043 = NOVALUE;
    object _14041 = NOVALUE;
    object _14040 = NOVALUE;
    object _14038 = NOVALUE;
    object _14037 = NOVALUE;
    object _14035 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** block.e:101		SymTab = append( SymTab, repeat( 0, SIZEOF_BLOCK_ENTRY ) )*/
    _14035 = Repeat(0, _39SIZEOF_BLOCK_ENTRY_16603);
    RefDS(_14035);
    Append(&_36SymTab_15404, _36SymTab_15404, _14035);
    DeRefDS(_14035);
    _14035 = NOVALUE;

    /** block.e:102		SymTab[$][S_MODE] = M_BLOCK*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _14037 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _14037 = 1;
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14037 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    _14038 = NOVALUE;

    /** block.e:103		SymTab[$][S_FIRST_LINE] = gline_number*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _14040 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _14040 = 1;
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14040 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FIRST_LINE_16495))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRST_LINE_16495)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FIRST_LINE_16495);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39gline_number_16820;
    DeRef(_1);
    _14041 = NOVALUE;

    /** block.e:105		sequence block = repeat( 0, BLOCK_SIZE-1 )*/
    _14043 = 6;
    DeRef(_block_24842);
    _block_24842 = Repeat(0, 6);
    _14043 = NOVALUE;

    /** block.e:106		block[BLOCK_SYM]    = length(SymTab)*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _14045 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _14045 = 1;
    }
    _2 = (object)SEQ_PTR(_block_24842);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24842 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    *(intptr_t *)_2 = _14045;
    if( _1 != _14045 ){
    }
    _14045 = NOVALUE;

    /** block.e:107		block[BLOCK_OPCODE] = opcode*/
    _2 = (object)SEQ_PTR(_block_24842);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24842 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    *(intptr_t *)_2 = _opcode_24823;

    /** block.e:108		block[BLOCK_LABEL]  = block_label*/
    Ref(_block_label_24824);
    _2 = (object)SEQ_PTR(_block_24842);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24842 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    *(intptr_t *)_2 = _block_label_24824;

    /** block.e:109		block[BLOCK_START]  = length(Code) + 1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _14046 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _14046 = 1;
    }
    _14047 = _14046 + 1;
    _14046 = NOVALUE;
    _2 = (object)SEQ_PTR(_block_24842);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24842 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14047;
    if( _1 != _14047 ){
        DeRef(_1);
    }
    _14047 = NOVALUE;

    /** block.e:110		block[BLOCK_VARS]   = {}*/
    RefDS(_5);
    _2 = (object)SEQ_PTR(_block_24842);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _block_24842 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5;
    DeRef(_1);

    /** block.e:112		block_stack = append( block_stack, block )*/
    RefDS(_block_24842);
    Append(&_66block_stack_24743, _66block_stack_24743, _block_24842);

    /** block.e:113		current_block = length(SymTab)*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _66current_block_24750 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _66current_block_24750 = 1;
    }

    /** block.e:114	end procedure*/
    DeRefi(_block_label_24824);
    DeRefDS(_block_24842);
    return;
    ;
}


void _66Start_block(object _opcode_24855, object _block_label_24856)
{
    object _last_block_24858 = NOVALUE;
    object _label_name_24886 = NOVALUE;
    object _14069 = NOVALUE;
    object _14068 = NOVALUE;
    object _14067 = NOVALUE;
    object _14064 = NOVALUE;
    object _14063 = NOVALUE;
    object _14061 = NOVALUE;
    object _14060 = NOVALUE;
    object _14059 = NOVALUE;
    object _14058 = NOVALUE;
    object _14057 = NOVALUE;
    object _14054 = NOVALUE;
    object _14052 = NOVALUE;
    object _14051 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** block.e:120		symtab_index last_block = current_block*/
    _last_block_24858 = _66current_block_24750;

    /** block.e:121		if opcode = FUNC then*/
    if (_opcode_24855 != 501)
    goto L1; // [16] 30

    /** block.e:122			opcode = PROC*/
    _opcode_24855 = 27;
L1: 

    /** block.e:124		NewBlock( opcode, block_label )*/
    Ref(_block_label_24856);
    _66NewBlock(_opcode_24855, _block_label_24856);

    /** block.e:126		if find(opcode, RTN_TOKS) then*/
    _14051 = find_from(_opcode_24855, _40RTN_TOKS_16423, 1);
    if (_14051 == 0)
    {
        _14051 = NOVALUE;
        goto L2; // [45] 105
    }
    else{
        _14051 = NOVALUE;
    }

    /** block.e:127			SymTab[block_label][S_BLOCK] = current_block*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_block_label_24856))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24856)->dbl));
    else
    _3 = (object)(_block_label_24856 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_BLOCK_16490))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_BLOCK_16490);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _66current_block_24750;
    DeRef(_1);
    _14052 = NOVALUE;

    /** block.e:128			SymTab[current_block][S_NAME] = sprintf("BLOCK: %s", {SymTab[block_label][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66current_block_24750 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_block_label_24856)){
        _14057 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_block_label_24856)->dbl));
    }
    else{
        _14057 = (object)*(((s1_ptr)_2)->base + _block_label_24856);
    }
    _2 = (object)SEQ_PTR(_14057);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _14058 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _14058 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _14057 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_14058);
    ((intptr_t*)_2)[1] = _14058;
    _14059 = MAKE_SEQ(_1);
    _14058 = NOVALUE;
    _14060 = EPrintf(-9999999, _14056, _14059);
    DeRefDS(_14059);
    _14059 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NAME_16470))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NAME_16470);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14060;
    if( _1 != _14060 ){
        DeRef(_1);
    }
    _14060 = NOVALUE;
    _14054 = NOVALUE;
    goto L3; // [102] 185
L2: 

    /** block.e:129		elsif current_block then*/
    if (_66current_block_24750 == 0)
    {
        goto L4; // [109] 182
    }
    else{
    }

    /** block.e:135			SymTab[current_block][S_BLOCK] = last_block*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66current_block_24750 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_BLOCK_16490))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_BLOCK_16490);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _last_block_24858;
    DeRef(_1);
    _14061 = NOVALUE;

    /** block.e:136			sequence label_name = ""*/
    RefDS(_5);
    DeRefi(_label_name_24886);
    _label_name_24886 = _5;

    /** block.e:137			if sequence(block_label) then*/
    _14063 = IS_SEQUENCE(_block_label_24856);
    if (_14063 == 0)
    {
        _14063 = NOVALUE;
        goto L5; // [141] 152
    }
    else{
        _14063 = NOVALUE;
    }

    /** block.e:138				label_name = block_label*/
    Ref(_block_label_24856);
    DeRefDSi(_label_name_24886);
    _label_name_24886 = _block_label_24856;
L5: 

    /** block.e:141			SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", {block_type_name(opcode), label_name})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66current_block_24750 + ((s1_ptr)_2)->base);
    _14067 = _66block_type_name(_opcode_24855);
    RefDS(_label_name_24886);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14067;
    ((intptr_t *)_2)[2] = _label_name_24886;
    _14068 = MAKE_SEQ(_1);
    _14067 = NOVALUE;
    _14069 = EPrintf(-9999999, _14066, _14068);
    DeRefDS(_14068);
    _14068 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NAME_16470))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NAME_16470);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14069;
    if( _1 != _14069 ){
        DeRef(_1);
    }
    _14069 = NOVALUE;
    _14064 = NOVALUE;
L4: 
    DeRefi(_label_name_24886);
    _label_name_24886 = NOVALUE;
L3: 

    /** block.e:144		ifdef BDEBUG then*/

    /** block.e:153	end procedure*/
    DeRefi(_block_label_24856);
    return;
    ;
}


void _66block_label(object _label_name_24902)
{
    object _14083 = NOVALUE;
    object _14082 = NOVALUE;
    object _14081 = NOVALUE;
    object _14080 = NOVALUE;
    object _14079 = NOVALUE;
    object _14078 = NOVALUE;
    object _14076 = NOVALUE;
    object _14074 = NOVALUE;
    object _14073 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** block.e:157		block_stack[$][BLOCK_LABEL] = label_name*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14073 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14073 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66block_stack_24743 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14073 + ((s1_ptr)_2)->base);
    RefDS(_label_name_24902);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _label_name_24902;
    DeRef(_1);
    _14074 = NOVALUE;

    /** block.e:158		SymTab[current_block][S_NAME] = sprintf( "BLOCK: %s-%s", */
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_66current_block_24750 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14078 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14078 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14079 = (object)*(((s1_ptr)_2)->base + _14078);
    _2 = (object)SEQ_PTR(_14079);
    _14080 = (object)*(((s1_ptr)_2)->base + 2);
    _14079 = NOVALUE;
    Ref(_14080);
    _14081 = _66block_type_name(_14080);
    _14080 = NOVALUE;
    RefDS(_label_name_24902);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14081;
    ((intptr_t *)_2)[2] = _label_name_24902;
    _14082 = MAKE_SEQ(_1);
    _14081 = NOVALUE;
    _14083 = EPrintf(-9999999, _14066, _14082);
    DeRefDS(_14082);
    _14082 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NAME_16470))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NAME_16470);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14083;
    if( _1 != _14083 ){
        DeRef(_1);
    }
    _14083 = NOVALUE;
    _14076 = NOVALUE;

    /** block.e:160	end procedure*/
    DeRefDS(_label_name_24902);
    return;
    ;
}


object _66pop_block()
{
    object _block_24921 = NOVALUE;
    object _block_vars_24934 = NOVALUE;
    object _14112 = NOVALUE;
    object _14110 = NOVALUE;
    object _14109 = NOVALUE;
    object _14108 = NOVALUE;
    object _14107 = NOVALUE;
    object _14105 = NOVALUE;
    object _14104 = NOVALUE;
    object _14103 = NOVALUE;
    object _14102 = NOVALUE;
    object _14101 = NOVALUE;
    object _14100 = NOVALUE;
    object _14099 = NOVALUE;
    object _14098 = NOVALUE;
    object _14097 = NOVALUE;
    object _14096 = NOVALUE;
    object _14092 = NOVALUE;
    object _14091 = NOVALUE;
    object _14089 = NOVALUE;
    object _14088 = NOVALUE;
    object _14086 = NOVALUE;
    object _14084 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** block.e:164		if not length(block_stack) then*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14084 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14084 = 1;
    }
    if (_14084 != 0)
    goto L1; // [8] 18
    _14084 = NOVALUE;

    /** block.e:165			return 0*/
    DeRef(_block_24921);
    DeRef(_block_vars_24934);
    return 0;
L1: 

    /** block.e:168		sequence  block = block_stack[$]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14086 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14086 = 1;
    }
    DeRef(_block_24921);
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _block_24921 = (object)*(((s1_ptr)_2)->base + _14086);
    Ref(_block_24921);

    /** block.e:169		block_stack = block_stack[1..$-1]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14088 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14088 = 1;
    }
    _14089 = _14088 - 1;
    _14088 = NOVALUE;
    rhs_slice_target = (object_ptr)&_66block_stack_24743;
    RHS_Slice(_66block_stack_24743, 1, _14089);

    /** block.e:170		SymTab[block[BLOCK_SYM]][S_LAST_LINE] = gline_number*/
    _2 = (object)SEQ_PTR(_block_24921);
    _14091 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14091))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14091)->dbl));
    else
    _3 = (object)(_14091 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LAST_LINE_16500))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LAST_LINE_16500)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LAST_LINE_16500);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39gline_number_16820;
    DeRef(_1);
    _14092 = NOVALUE;

    /** block.e:172		ifdef BDEBUG then*/

    /** block.e:177		sequence block_vars = block[BLOCK_VARS]*/
    DeRef(_block_vars_24934);
    _2 = (object)SEQ_PTR(_block_24921);
    _block_vars_24934 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_block_vars_24934);

    /** block.e:178		for sx = 1 to length( block_vars ) do*/
    if (IS_SEQUENCE(_block_vars_24934)){
            _14096 = SEQ_PTR(_block_vars_24934)->length;
    }
    else {
        _14096 = 1;
    }
    {
        object _sx_24937;
        _sx_24937 = 1;
L2: 
        if (_sx_24937 > _14096){
            goto L3; // [83] 172
        }

        /** block.e:180			if SymTab[block_vars[sx]][S_MODE] = M_NORMAL */
        _2 = (object)SEQ_PTR(_block_vars_24934);
        _14097 = (object)*(((s1_ptr)_2)->base + _sx_24937);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_14097)){
            _14098 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14097)->dbl));
        }
        else{
            _14098 = (object)*(((s1_ptr)_2)->base + _14097);
        }
        _2 = (object)SEQ_PTR(_14098);
        _14099 = (object)*(((s1_ptr)_2)->base + 3);
        _14098 = NOVALUE;
        if (IS_ATOM_INT(_14099)) {
            _14100 = (_14099 == 1);
        }
        else {
            _14100 = binary_op(EQUALS, _14099, 1);
        }
        _14099 = NOVALUE;
        if (IS_ATOM_INT(_14100)) {
            if (_14100 == 0) {
                goto L4; // [114] 165
            }
        }
        else {
            if (DBL_PTR(_14100)->dbl == 0.0) {
                goto L4; // [114] 165
            }
        }
        _2 = (object)SEQ_PTR(_block_vars_24934);
        _14102 = (object)*(((s1_ptr)_2)->base + _sx_24937);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_14102)){
            _14103 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14102)->dbl));
        }
        else{
            _14103 = (object)*(((s1_ptr)_2)->base + _14102);
        }
        _2 = (object)SEQ_PTR(_14103);
        _14104 = (object)*(((s1_ptr)_2)->base + 4);
        _14103 = NOVALUE;
        if (IS_ATOM_INT(_14104)) {
            _14105 = (_14104 <= 5);
        }
        else {
            _14105 = binary_op(LESSEQ, _14104, 5);
        }
        _14104 = NOVALUE;
        if (_14105 == 0) {
            DeRef(_14105);
            _14105 = NOVALUE;
            goto L4; // [141] 165
        }
        else {
            if (!IS_ATOM_INT(_14105) && DBL_PTR(_14105)->dbl == 0.0){
                DeRef(_14105);
                _14105 = NOVALUE;
                goto L4; // [141] 165
            }
            DeRef(_14105);
            _14105 = NOVALUE;
        }
        DeRef(_14105);
        _14105 = NOVALUE;

        /** block.e:182				ifdef BDEBUG then*/

        /** block.e:187				Hide( block_vars[sx] )*/
        _2 = (object)SEQ_PTR(_block_vars_24934);
        _14107 = (object)*(((s1_ptr)_2)->base + _sx_24937);
        Ref(_14107);
        _56Hide(_14107);
        _14107 = NOVALUE;

        /** block.e:188				LintCheck( block_vars[sx] )*/
        _2 = (object)SEQ_PTR(_block_vars_24934);
        _14108 = (object)*(((s1_ptr)_2)->base + _sx_24937);
        Ref(_14108);
        _56LintCheck(_14108);
        _14108 = NOVALUE;
L4: 

        /** block.e:191		end for*/
        _sx_24937 = _sx_24937 + 1;
        goto L2; // [167] 90
L3: 
        ;
    }

    /** block.e:213		current_block = block_stack[$][BLOCK_SYM]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14109 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14109 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14110 = (object)*(((s1_ptr)_2)->base + _14109);
    _2 = (object)SEQ_PTR(_14110);
    _66current_block_24750 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_66current_block_24750)){
        _66current_block_24750 = (object)DBL_PTR(_66current_block_24750)->dbl;
    }
    _14110 = NOVALUE;

    /** block.e:214		return block[BLOCK_SYM]*/
    _2 = (object)SEQ_PTR(_block_24921);
    _14112 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_14112);
    DeRefDS(_block_24921);
    DeRef(_block_vars_24934);
    _14091 = NOVALUE;
    _14097 = NOVALUE;
    _14102 = NOVALUE;
    DeRef(_14100);
    _14100 = NOVALUE;
    DeRef(_14089);
    _14089 = NOVALUE;
    return _14112;
    ;
}


object _66top_block(object _offset_24966)
{
    object _14120 = NOVALUE;
    object _14119 = NOVALUE;
    object _14118 = NOVALUE;
    object _14117 = NOVALUE;
    object _14116 = NOVALUE;
    object _14115 = NOVALUE;
    object _14113 = NOVALUE;
    object _0, _1, _2;
    

    /** block.e:219		if offset >= length(block_stack) then*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14113 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14113 = 1;
    }
    if (_offset_24966 < _14113)
    goto L1; // [10] 33

    /** block.e:220			CompileErr(107, {offset,length(block_stack)})*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14115 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14115 = 1;
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _offset_24966;
    ((intptr_t *)_2)[2] = _14115;
    _14116 = MAKE_SEQ(_1);
    _14115 = NOVALUE;
    _52CompileErr(107, _14116, 0);
    _14116 = NOVALUE;
    goto L2; // [30] 57
L1: 

    /** block.e:222			return block_stack[$-offset][BLOCK_SYM]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14117 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14117 = 1;
    }
    _14118 = _14117 - _offset_24966;
    _14117 = NOVALUE;
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14119 = (object)*(((s1_ptr)_2)->base + _14118);
    _2 = (object)SEQ_PTR(_14119);
    _14120 = (object)*(((s1_ptr)_2)->base + 1);
    _14119 = NOVALUE;
    Ref(_14120);
    _14118 = NOVALUE;
    return _14120;
L2: 
    ;
}


void _66End_block(object _opcode_24980)
{
    object _ix_24991 = NOVALUE;
    object _14128 = NOVALUE;
    object _14125 = NOVALUE;
    object _14124 = NOVALUE;
    object _14123 = NOVALUE;
    object _14122 = NOVALUE;
    object _0, _1, _2;
    

    /** block.e:229		if opcode = FUNC then*/

    /** block.e:232		check_block( opcode )*/
    _66check_block(_opcode_24980);

    /** block.e:233		if not length(block_stack[$][BLOCK_VARS]) then*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14122 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14122 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14123 = (object)*(((s1_ptr)_2)->base + _14122);
    _2 = (object)SEQ_PTR(_14123);
    _14124 = (object)*(((s1_ptr)_2)->base + 6);
    _14123 = NOVALUE;
    if (IS_SEQUENCE(_14124)){
            _14125 = SEQ_PTR(_14124)->length;
    }
    else {
        _14125 = 1;
    }
    _14124 = NOVALUE;
    if (_14125 != 0)
    goto L1; // [44] 64
    _14125 = NOVALUE;

    /** block.e:234			integer ix = 1*/
    _ix_24991 = 1;

    /** block.e:235			ix = pop_block()*/
    _ix_24991 = _66pop_block();
    if (!IS_ATOM_INT(_ix_24991)) {
        _1 = (object)(DBL_PTR(_ix_24991)->dbl);
        DeRefDS(_ix_24991);
        _ix_24991 = _1;
    }
    goto L2; // [61] 80
L1: 

    /** block.e:237			Push( pop_block() )*/
    _14128 = _66pop_block();
    _49Push(_14128);
    _14128 = NOVALUE;

    /** block.e:238			emit_op( EXIT_BLOCK )*/
    _49emit_op(206);
L2: 

    /** block.e:241	end procedure*/
    _14124 = NOVALUE;
    return;
    ;
}


object _66End_inline_block(object _opcode_25000)
{
    object _14135 = NOVALUE;
    object _14134 = NOVALUE;
    object _14133 = NOVALUE;
    object _14132 = NOVALUE;
    object _14131 = NOVALUE;
    object _14130 = NOVALUE;
    object _0, _1, _2;
    

    /** block.e:246		if opcode = FUNC then*/

    /** block.e:249		if length(block_stack[$][BLOCK_VARS]) then*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14130 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14130 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14131 = (object)*(((s1_ptr)_2)->base + _14130);
    _2 = (object)SEQ_PTR(_14131);
    _14132 = (object)*(((s1_ptr)_2)->base + 6);
    _14131 = NOVALUE;
    if (IS_SEQUENCE(_14132)){
            _14133 = SEQ_PTR(_14132)->length;
    }
    else {
        _14133 = 1;
    }
    _14132 = NOVALUE;
    if (_14133 == 0)
    {
        _14133 = NOVALUE;
        goto L1; // [39] 60
    }
    else{
        _14133 = NOVALUE;
    }

    /** block.e:250			return { EXIT_BLOCK, pop_block() }*/
    _14134 = _66pop_block();
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _14134;
    _14135 = MAKE_SEQ(_1);
    _14134 = NOVALUE;
    _14132 = NOVALUE;
    return _14135;
    goto L2; // [57] 72
L1: 

    /** block.e:252			Drop_block( opcode )*/
    _66Drop_block(_opcode_25000);

    /** block.e:253			return {}*/
    RefDS(_5);
    DeRef(_14135);
    _14135 = NOVALUE;
    _14132 = NOVALUE;
    return _5;
L2: 
    ;
}


void _66Sibling_block(object _opcode_25017)
{
    object _0, _1, _2;
    

    /** block.e:261		End_block( opcode )*/
    _66End_block(_opcode_25017);

    /** block.e:262		Start_block( opcode )*/
    _66Start_block(_opcode_25017, 0);

    /** block.e:263	end procedure*/
    return;
    ;
}


void _66Leave_block(object _offset_25020)
{
    object _14141 = NOVALUE;
    object _14140 = NOVALUE;
    object _14139 = NOVALUE;
    object _14138 = NOVALUE;
    object _14137 = NOVALUE;
    object _14136 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_offset_25020)) {
        _1 = (object)(DBL_PTR(_offset_25020)->dbl);
        DeRefDS(_offset_25020);
        _offset_25020 = _1;
    }

    /** block.e:268		if length( block_stack[$-offset][BLOCK_VARS]) then*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14136 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14136 = 1;
    }
    _14137 = _14136 - _offset_25020;
    _14136 = NOVALUE;
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14138 = (object)*(((s1_ptr)_2)->base + _14137);
    _2 = (object)SEQ_PTR(_14138);
    _14139 = (object)*(((s1_ptr)_2)->base + 6);
    _14138 = NOVALUE;
    if (IS_SEQUENCE(_14139)){
            _14140 = SEQ_PTR(_14139)->length;
    }
    else {
        _14140 = 1;
    }
    _14139 = NOVALUE;
    if (_14140 == 0)
    {
        _14140 = NOVALUE;
        goto L1; // [25] 45
    }
    else{
        _14140 = NOVALUE;
    }

    /** block.e:269			Push( top_block( offset ) )*/
    _14141 = _66top_block(_offset_25020);
    _49Push(_14141);
    _14141 = NOVALUE;

    /** block.e:270			emit_op( EXIT_BLOCK )*/
    _49emit_op(206);
L1: 

    /** block.e:272	end procedure*/
    DeRef(_14137);
    _14137 = NOVALUE;
    _14139 = NOVALUE;
    return;
    ;
}


void _66Leave_blocks(object _blocks_25040, object _block_type_25041)
{
    object _bx_25042 = NOVALUE;
    object _Block_opcode_3__tmp_at29_25049 = NOVALUE;
    object _Block_opcode_2__tmp_at29_25048 = NOVALUE;
    object _Block_opcode_1__tmp_at29_25047 = NOVALUE;
    object _Block_opcode_inlined_Block_opcode_at_29_25046 = NOVALUE;
    object _14154 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_blocks_25040)) {
        _1 = (object)(DBL_PTR(_blocks_25040)->dbl);
        DeRefDS(_blocks_25040);
        _blocks_25040 = _1;
    }

    /** block.e:284		integer bx = 0*/
    _bx_25042 = 0;

    /** block.e:285		while blocks do*/
L1: 
    if (_blocks_25040 == 0)
    {
        goto L2; // [15] 119
    }
    else{
    }

    /** block.e:286			Leave_block( bx )*/
    _66Leave_block(_bx_25042);

    /** block.e:288			if block_type then*/
    if (_block_type_25041 == 0)
    {
        goto L3; // [25] 101
    }
    else{
    }

    /** block.e:289				switch Block_opcode( bx ) do*/

    /** block.e:276		return block_stack[$-bx][BLOCK_OPCODE]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _Block_opcode_1__tmp_at29_25047 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _Block_opcode_1__tmp_at29_25047 = 1;
    }
    _Block_opcode_2__tmp_at29_25048 = _Block_opcode_1__tmp_at29_25047 - _bx_25042;
    DeRef(_Block_opcode_3__tmp_at29_25049);
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _Block_opcode_3__tmp_at29_25049 = (object)*(((s1_ptr)_2)->base + _Block_opcode_2__tmp_at29_25048);
    Ref(_Block_opcode_3__tmp_at29_25049);
    DeRef(_Block_opcode_inlined_Block_opcode_at_29_25046);
    _2 = (object)SEQ_PTR(_Block_opcode_3__tmp_at29_25049);
    _Block_opcode_inlined_Block_opcode_at_29_25046 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_Block_opcode_inlined_Block_opcode_at_29_25046);
    DeRef(_Block_opcode_3__tmp_at29_25049);
    _Block_opcode_3__tmp_at29_25049 = NOVALUE;
    if (IS_SEQUENCE(_Block_opcode_inlined_Block_opcode_at_29_25046) ){
        goto L4; // [52] 82
    }
    if(!IS_ATOM_INT(_Block_opcode_inlined_Block_opcode_at_29_25046)){
        if( (DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25046)->dbl != (eudouble) ((object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25046)->dbl) ) ){
            goto L4; // [52] 82
        }
        _0 = (object) DBL_PTR(_Block_opcode_inlined_Block_opcode_at_29_25046)->dbl;
    }
    else {
        _0 = _Block_opcode_inlined_Block_opcode_at_29_25046;
    };
    switch ( _0 ){ 

        /** block.e:290					case FOR, WHILE, LOOP then*/
        case 21:
        case 47:
        case 422:

        /** block.e:291						if block_type = LOOP_BLOCK then*/
        if (_block_type_25041 != 1)
        goto L5; // [67] 108

        /** block.e:292							blocks -= 1*/
        _blocks_25040 = _blocks_25040 - 1;
        goto L5; // [78] 108

        /** block.e:294					case else*/
        default:
L4: 

        /** block.e:295						if block_type = CONDITIONAL_BLOCK then*/
        if (_block_type_25041 != 2)
        goto L6; // [86] 97

        /** block.e:296							blocks -= 1*/
        _blocks_25040 = _blocks_25040 - 1;
L6: 
    ;}    goto L5; // [98] 108
L3: 

    /** block.e:300				blocks -= 1*/
    _blocks_25040 = _blocks_25040 - 1;
L5: 

    /** block.e:302			bx += 1*/
    _bx_25042 = _bx_25042 + 1;

    /** block.e:303		end while*/
    goto L1; // [116] 15
L2: 

    /** block.e:304		for i = 0 to blocks - 1 do*/
    _14154 = _blocks_25040 - 1;
    if ((object)((uintptr_t)_14154 +(uintptr_t) HIGH_BITS) >= 0){
        _14154 = NewDouble((eudouble)_14154);
    }
    {
        object _i_25067;
        _i_25067 = 0;
L7: 
        if (binary_op_a(GREATER, _i_25067, _14154)){
            goto L8; // [125] 144
        }

        /** block.e:305			Leave_block( i )*/
        Ref(_i_25067);
        _66Leave_block(_i_25067);

        /** block.e:306		end for*/
        _0 = _i_25067;
        if (IS_ATOM_INT(_i_25067)) {
            _i_25067 = _i_25067 + 1;
            if ((object)((uintptr_t)_i_25067 +(uintptr_t) HIGH_BITS) >= 0){
                _i_25067 = NewDouble((eudouble)_i_25067);
            }
        }
        else {
            _i_25067 = binary_op_a(PLUS, _i_25067, 1);
        }
        DeRef(_0);
        goto L7; // [139] 132
L8: 
        ;
        DeRef(_i_25067);
    }

    /** block.e:307	end procedure*/
    DeRef(_14154);
    _14154 = NOVALUE;
    return;
    ;
}


void _66Drop_block(object _opcode_25071)
{
    object _x_25073 = NOVALUE;
    object _0, _1, _2;
    

    /** block.e:311		check_block( opcode )*/
    _66check_block(_opcode_25071);

    /** block.e:312		symtab_index x = pop_block()*/
    _x_25073 = _66pop_block();
    if (!IS_ATOM_INT(_x_25073)) {
        _1 = (object)(DBL_PTR(_x_25073)->dbl);
        DeRefDS(_x_25073);
        _x_25073 = _1;
    }

    /** block.e:313	end procedure*/
    return;
    ;
}


void _66Pop_block_var()
{
    object _sym_25078 = NOVALUE;
    object _block_sym_25085 = NOVALUE;
    object _14182 = NOVALUE;
    object _14181 = NOVALUE;
    object _14180 = NOVALUE;
    object _14179 = NOVALUE;
    object _14178 = NOVALUE;
    object _14177 = NOVALUE;
    object _14176 = NOVALUE;
    object _14175 = NOVALUE;
    object _14173 = NOVALUE;
    object _14172 = NOVALUE;
    object _14170 = NOVALUE;
    object _14169 = NOVALUE;
    object _14167 = NOVALUE;
    object _14164 = NOVALUE;
    object _14162 = NOVALUE;
    object _14161 = NOVALUE;
    object _14159 = NOVALUE;
    object _14158 = NOVALUE;
    object _14157 = NOVALUE;
    object _14156 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** block.e:316		symtab_index sym = block_stack[$][BLOCK_VARS][$]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14156 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14156 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14157 = (object)*(((s1_ptr)_2)->base + _14156);
    _2 = (object)SEQ_PTR(_14157);
    _14158 = (object)*(((s1_ptr)_2)->base + 6);
    _14157 = NOVALUE;
    if (IS_SEQUENCE(_14158)){
            _14159 = SEQ_PTR(_14158)->length;
    }
    else {
        _14159 = 1;
    }
    _2 = (object)SEQ_PTR(_14158);
    _sym_25078 = (object)*(((s1_ptr)_2)->base + _14159);
    if (!IS_ATOM_INT(_sym_25078)){
        _sym_25078 = (object)DBL_PTR(_sym_25078)->dbl;
    }
    _14158 = NOVALUE;

    /** block.e:317		symtab_index block_sym = block_stack[$][BLOCK_SYM]*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14161 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14161 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14162 = (object)*(((s1_ptr)_2)->base + _14161);
    _2 = (object)SEQ_PTR(_14162);
    _block_sym_25085 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_block_sym_25085)){
        _block_sym_25085 = (object)DBL_PTR(_block_sym_25085)->dbl;
    }
    _14162 = NOVALUE;

    /** block.e:318		while sym_next_in_block( block_sym ) != sym do*/
L1: 
    _14164 = _56sym_next_in_block(_block_sym_25085);
    if (binary_op_a(EQUALS, _14164, _sym_25078)){
        DeRef(_14164);
        _14164 = NOVALUE;
        goto L2; // [51] 68
    }
    DeRef(_14164);
    _14164 = NOVALUE;

    /** block.e:319			block_sym = sym_next_in_block( block_sym )*/
    _block_sym_25085 = _56sym_next_in_block(_block_sym_25085);
    if (!IS_ATOM_INT(_block_sym_25085)) {
        _1 = (object)(DBL_PTR(_block_sym_25085)->dbl);
        DeRefDS(_block_sym_25085);
        _block_sym_25085 = _1;
    }

    /** block.e:320		end while*/
    goto L1; // [65] 47
L2: 

    /** block.e:322		SymTab[block_sym][S_NEXT_IN_BLOCK] = sym_next_in_block( sym )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_block_sym_25085 + ((s1_ptr)_2)->base);
    _14169 = _56sym_next_in_block(_sym_25078);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14169;
    if( _1 != _14169 ){
        DeRef(_1);
    }
    _14169 = NOVALUE;
    _14167 = NOVALUE;

    /** block.e:323		SymTab[sym][S_NEXT_IN_BLOCK] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25078 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _14170 = NOVALUE;

    /** block.e:325		block_stack[$][BLOCK_VARS] = eu:remove( block_stack[$][BLOCK_VARS], */
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14172 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14172 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _66block_stack_24743 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14172 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14175 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14175 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14176 = (object)*(((s1_ptr)_2)->base + _14175);
    _2 = (object)SEQ_PTR(_14176);
    _14177 = (object)*(((s1_ptr)_2)->base + 6);
    _14176 = NOVALUE;
    if (IS_SEQUENCE(_66block_stack_24743)){
            _14178 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _14178 = 1;
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14179 = (object)*(((s1_ptr)_2)->base + _14178);
    _2 = (object)SEQ_PTR(_14179);
    _14180 = (object)*(((s1_ptr)_2)->base + 6);
    _14179 = NOVALUE;
    if (IS_SEQUENCE(_14180)){
            _14181 = SEQ_PTR(_14180)->length;
    }
    else {
        _14181 = 1;
    }
    _14180 = NOVALUE;
    {
        s1_ptr assign_space = SEQ_PTR(_14177);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14181)) ? _14181 : (object)(DBL_PTR(_14181)->dbl);
        int stop = (IS_ATOM_INT(_14181)) ? _14181 : (object)(DBL_PTR(_14181)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_14177);
            DeRef(_14182);
            _14182 = _14177;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_14177), start, &_14182 );
            }
            else Tail(SEQ_PTR(_14177), stop+1, &_14182);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_14177), start, &_14182);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_14182);
            _14182 = _1;
        }
    }
    _14177 = NOVALUE;
    _14181 = NOVALUE;
    _14181 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14182;
    if( _1 != _14182 ){
        DeRef(_1);
    }
    _14182 = NOVALUE;
    _14173 = NOVALUE;

    /** block.e:327	end procedure*/
    _14180 = NOVALUE;
    return;
    ;
}


void _66Goto_block(object _from_block_25119, object _to_block_25121, object _pc_25122)
{
    object _code_25123 = NOVALUE;
    object _next_block_25125 = NOVALUE;
    object _14193 = NOVALUE;
    object _14190 = NOVALUE;
    object _14189 = NOVALUE;
    object _14188 = NOVALUE;
    object _14187 = NOVALUE;
    object _14186 = NOVALUE;
    object _14185 = NOVALUE;
    object _14184 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_from_block_25119)) {
        _1 = (object)(DBL_PTR(_from_block_25119)->dbl);
        DeRefDS(_from_block_25119);
        _from_block_25119 = _1;
    }
    if (!IS_ATOM_INT(_to_block_25121)) {
        _1 = (object)(DBL_PTR(_to_block_25121)->dbl);
        DeRefDS(_to_block_25121);
        _to_block_25121 = _1;
    }
    if (!IS_ATOM_INT(_pc_25122)) {
        _1 = (object)(DBL_PTR(_pc_25122)->dbl);
        DeRefDS(_pc_25122);
        _pc_25122 = _1;
    }

    /** block.e:330		sequence code = {}*/
    RefDS(_5);
    DeRefi(_code_25123);
    _code_25123 = _5;

    /** block.e:331		symtab_index next_block = sym_block( from_block )*/
    _next_block_25125 = _56sym_block(_from_block_25119);
    if (!IS_ATOM_INT(_next_block_25125)) {
        _1 = (object)(DBL_PTR(_next_block_25125)->dbl);
        DeRefDS(_next_block_25125);
        _next_block_25125 = _1;
    }

    /** block.e:332		while next_block */
L1: 
    if (_next_block_25125 == 0) {
        _14184 = 0;
        goto L2; // [27] 39
    }
    _14185 = (_from_block_25119 != _to_block_25121);
    _14184 = (_14185 != 0);
L2: 
    if (_14184 == 0) {
        goto L3; // [39] 93
    }
    _14187 = _56sym_token(_next_block_25125);
    _14188 = find_from(_14187, _40RTN_TOKS_16423, 1);
    DeRef(_14187);
    _14187 = NOVALUE;
    _14189 = (_14188 == 0);
    _14188 = NOVALUE;
    if (_14189 == 0)
    {
        DeRef(_14189);
        _14189 = NOVALUE;
        goto L3; // [58] 93
    }
    else{
        DeRef(_14189);
        _14189 = NOVALUE;
    }

    /** block.e:335			code &= { EXIT_BLOCK, from_block }*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 206;
    ((intptr_t *)_2)[2] = _from_block_25119;
    _14190 = MAKE_SEQ(_1);
    Concat((object_ptr)&_code_25123, _code_25123, _14190);
    DeRefDS(_14190);
    _14190 = NOVALUE;

    /** block.e:336			from_block = next_block*/
    _from_block_25119 = _next_block_25125;

    /** block.e:337			next_block = sym_block( next_block )*/
    _next_block_25125 = _56sym_block(_next_block_25125);
    if (!IS_ATOM_INT(_next_block_25125)) {
        _1 = (object)(DBL_PTR(_next_block_25125)->dbl);
        DeRefDS(_next_block_25125);
        _next_block_25125 = _1;
    }

    /** block.e:338		end while*/
    goto L1; // [90] 27
L3: 

    /** block.e:340		if length(code) then*/
    if (IS_SEQUENCE(_code_25123)){
            _14193 = SEQ_PTR(_code_25123)->length;
    }
    else {
        _14193 = 1;
    }
    if (_14193 == 0)
    {
        _14193 = NOVALUE;
        goto L4; // [98] 127
    }
    else{
        _14193 = NOVALUE;
    }

    /** block.e:341			if pc then*/
    if (_pc_25122 == 0)
    {
        goto L5; // [103] 115
    }
    else{
    }

    /** block.e:342				insert_code( code, pc )*/
    RefDS(_code_25123);
    _67insert_code(_code_25123, _pc_25122);
    goto L6; // [112] 126
L5: 

    /** block.e:344				Code &= code*/
    Concat((object_ptr)&_39Code_16903, _39Code_16903, _code_25123);
L6: 
L4: 

    /** block.e:348	end procedure*/
    DeRefi(_code_25123);
    DeRef(_14185);
    _14185 = NOVALUE;
    return;
    ;
}


object _66Least_block()
{
    object _ix_25153 = NOVALUE;
    object _sub_block_25156 = NOVALUE;
    object _14207 = NOVALUE;
    object _14206 = NOVALUE;
    object _14204 = NOVALUE;
    object _14203 = NOVALUE;
    object _14202 = NOVALUE;
    object _14201 = NOVALUE;
    object _14200 = NOVALUE;
    object _14199 = NOVALUE;
    object _14198 = NOVALUE;
    object _14197 = NOVALUE;
    object _0, _1, _2;
    

    /** block.e:358		integer ix = length( block_stack )*/
    if (IS_SEQUENCE(_66block_stack_24743)){
            _ix_25153 = SEQ_PTR(_66block_stack_24743)->length;
    }
    else {
        _ix_25153 = 1;
    }

    /** block.e:359		symtab_index sub_block = sym_block( CurrentSub )*/
    _sub_block_25156 = _56sym_block(_39CurrentSub_16823);
    if (!IS_ATOM_INT(_sub_block_25156)) {
        _1 = (object)(DBL_PTR(_sub_block_25156)->dbl);
        DeRefDS(_sub_block_25156);
        _sub_block_25156 = _1;
    }

    /** block.e:360		while not length( block_stack[ix][BLOCK_VARS] ) */
L1: 
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14197 = (object)*(((s1_ptr)_2)->base + _ix_25153);
    _2 = (object)SEQ_PTR(_14197);
    _14198 = (object)*(((s1_ptr)_2)->base + 6);
    _14197 = NOVALUE;
    if (IS_SEQUENCE(_14198)){
            _14199 = SEQ_PTR(_14198)->length;
    }
    else {
        _14199 = 1;
    }
    _14198 = NOVALUE;
    _14200 = (_14199 == 0);
    _14199 = NOVALUE;
    if (_14200 == 0) {
        goto L2; // [39] 72
    }
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14202 = (object)*(((s1_ptr)_2)->base + _ix_25153);
    _2 = (object)SEQ_PTR(_14202);
    _14203 = (object)*(((s1_ptr)_2)->base + 1);
    _14202 = NOVALUE;
    if (IS_ATOM_INT(_14203)) {
        _14204 = (_14203 != _sub_block_25156);
    }
    else {
        _14204 = binary_op(NOTEQ, _14203, _sub_block_25156);
    }
    _14203 = NOVALUE;
    if (_14204 <= 0) {
        if (_14204 == 0) {
            DeRef(_14204);
            _14204 = NOVALUE;
            goto L2; // [58] 72
        }
        else {
            if (!IS_ATOM_INT(_14204) && DBL_PTR(_14204)->dbl == 0.0){
                DeRef(_14204);
                _14204 = NOVALUE;
                goto L2; // [58] 72
            }
            DeRef(_14204);
            _14204 = NOVALUE;
        }
    }
    DeRef(_14204);
    _14204 = NOVALUE;

    /** block.e:362			ix -= 1	*/
    _ix_25153 = _ix_25153 - 1;

    /** block.e:363		end while*/
    goto L1; // [69] 23
L2: 

    /** block.e:364		return block_stack[ix][BLOCK_SYM]*/
    _2 = (object)SEQ_PTR(_66block_stack_24743);
    _14206 = (object)*(((s1_ptr)_2)->base + _ix_25153);
    _2 = (object)SEQ_PTR(_14206);
    _14207 = (object)*(((s1_ptr)_2)->base + 1);
    _14206 = NOVALUE;
    Ref(_14207);
    _14198 = NOVALUE;
    DeRef(_14200);
    _14200 = NOVALUE;
    return _14207;
    ;
}



// 0xE0518D43
