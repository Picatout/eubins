// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _42EndLineTable()
{
    object _0, _1, _2;
    

    /** parser.e:120		LineTable = append(LineTable, -2)*/
    Append(&_39LineTable_16904, _39LineTable_16904, -2);

    /** parser.e:121	end procedure*/
    return;
    ;
}


void _42CreateTopLevel()
{
    object _27723 = NOVALUE;
    object _27721 = NOVALUE;
    object _27719 = NOVALUE;
    object _27717 = NOVALUE;
    object _27715 = NOVALUE;
    object _27713 = NOVALUE;
    object _27711 = NOVALUE;
    object _27709 = NOVALUE;
    object _27707 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:125		SymTab[TopLevelSub][S_NUM_ARGS] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _27707 = NOVALUE;

    /** parser.e:126		SymTab[TopLevelSub][S_TEMPS] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TEMPS_16515))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _27709 = NOVALUE;

    /** parser.e:127		SymTab[TopLevelSub][S_CODE] = {}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_21928);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);
    _27711 = NOVALUE;

    /** parser.e:128		SymTab[TopLevelSub][S_LINETAB] = {}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_21928);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);
    _27713 = NOVALUE;

    /** parser.e:129		SymTab[TopLevelSub][S_FIRSTLINE] = 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FIRSTLINE_16510))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRSTLINE_16510)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FIRSTLINE_16510);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _27715 = NOVALUE;

    /** parser.e:130		SymTab[TopLevelSub][S_REFLIST] = {}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_21928);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 24);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);
    _27717 = NOVALUE;

    /** parser.e:131		SymTab[TopLevelSub][S_NREFS] = 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _27719 = NOVALUE;

    /** parser.e:132		SymTab[TopLevelSub][S_RESIDENT_TASK] = 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 25);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _27721 = NOVALUE;

    /** parser.e:133		SymTab[TopLevelSub][S_SAVED_PRIVATES] = {}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_21928);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 26);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);
    _27723 = NOVALUE;

    /** parser.e:135		Start_block( PROC, TopLevelSub )*/
    _66Start_block(27, _39TopLevelSub_16822);

    /** parser.e:136	end procedure*/
    return;
    ;
}


void _42CheckForUndefinedGotoLabels()
{
    object _27738 = NOVALUE;
    object _27737 = NOVALUE;
    object _27733 = NOVALUE;
    object _27731 = NOVALUE;
    object _27729 = NOVALUE;
    object _27727 = NOVALUE;
    object _27726 = NOVALUE;
    object _27725 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:139		for i = 1 to length(goto_delay) do*/
    if (IS_SEQUENCE(_39goto_delay_16925)){
            _27725 = SEQ_PTR(_39goto_delay_16925)->length;
    }
    else {
        _27725 = 1;
    }
    {
        object _i_54467;
        _i_54467 = 1;
L1: 
        if (_i_54467 > _27725){
            goto L2; // [8] 104
        }

        /** parser.e:140			if not equal(goto_delay[i],"") then*/
        _2 = (object)SEQ_PTR(_39goto_delay_16925);
        _27726 = (object)*(((s1_ptr)_2)->base + _i_54467);
        if (_27726 == _21928)
        _27727 = 1;
        else if (IS_ATOM_INT(_27726) && IS_ATOM_INT(_21928))
        _27727 = 0;
        else
        _27727 = (compare(_27726, _21928) == 0);
        _27726 = NOVALUE;
        if (_27727 != 0)
        goto L3; // [27] 97
        _27727 = NOVALUE;

        /** parser.e:141				line_number = goto_line[i][1] -- tell compiler the correct line number*/
        _2 = (object)SEQ_PTR(_42goto_line_54373);
        _27729 = (object)*(((s1_ptr)_2)->base + _i_54467);
        _2 = (object)SEQ_PTR(_27729);
        _39line_number_16816 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_39line_number_16816)){
            _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
        }
        _27729 = NOVALUE;

        /** parser.e:142				gline_number = goto_line[i][1] -- tell compiler the correct line number*/
        _2 = (object)SEQ_PTR(_42goto_line_54373);
        _27731 = (object)*(((s1_ptr)_2)->base + _i_54467);
        _2 = (object)SEQ_PTR(_27731);
        _39gline_number_16820 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_39gline_number_16820)){
            _39gline_number_16820 = (object)DBL_PTR(_39gline_number_16820)->dbl;
        }
        _27731 = NOVALUE;

        /** parser.e:143				ThisLine = goto_line[i][2] -- tell compiler the correct line number*/
        _2 = (object)SEQ_PTR(_42goto_line_54373);
        _27733 = (object)*(((s1_ptr)_2)->base + _i_54467);
        DeRef(_52ThisLine_48710);
        _2 = (object)SEQ_PTR(_27733);
        _52ThisLine_48710 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_52ThisLine_48710);
        _27733 = NOVALUE;

        /** parser.e:144				bp = length(ThisLine)*/
        if (IS_SEQUENCE(_52ThisLine_48710)){
                _52bp_48714 = SEQ_PTR(_52ThisLine_48710)->length;
        }
        else {
            _52bp_48714 = 1;
        }

        /** parser.e:145					CompileErr(156, {goto_delay[i]})*/
        _2 = (object)SEQ_PTR(_39goto_delay_16925);
        _27737 = (object)*(((s1_ptr)_2)->base + _i_54467);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_27737);
        ((intptr_t*)_2)[1] = _27737;
        _27738 = MAKE_SEQ(_1);
        _27737 = NOVALUE;
        _52CompileErr(156, _27738, 0);
        _27738 = NOVALUE;
L3: 

        /** parser.e:147		end for*/
        _i_54467 = _i_54467 + 1;
        goto L1; // [99] 15
L2: 
        ;
    }

    /** parser.e:148	end procedure*/
    return;
    ;
}


void _42PushGoto()
{
    object _new_1__tmp_at88_54502 = NOVALUE;
    object _new_inlined_new_at_88_54501 = NOVALUE;
    object _27739 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:151		goto_stack = append(goto_stack, {goto_addr, goto_list, goto_labels, goto_delay, goto_line, goto_ref, label_block, goto_init })*/
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_42goto_addr_54375);
    ((intptr_t*)_2)[1] = _42goto_addr_54375;
    RefDS(_39goto_list_16926);
    ((intptr_t*)_2)[2] = _39goto_list_16926;
    RefDS(_42goto_labels_54374);
    ((intptr_t*)_2)[3] = _42goto_labels_54374;
    RefDS(_39goto_delay_16925);
    ((intptr_t*)_2)[4] = _39goto_delay_16925;
    RefDS(_42goto_line_54373);
    ((intptr_t*)_2)[5] = _42goto_line_54373;
    RefDS(_42goto_ref_54377);
    ((intptr_t*)_2)[6] = _42goto_ref_54377;
    RefDS(_42label_block_54378);
    ((intptr_t*)_2)[7] = _42label_block_54378;
    Ref(_42goto_init_54380);
    ((intptr_t*)_2)[8] = _42goto_init_54380;
    _27739 = MAKE_SEQ(_1);
    RefDS(_27739);
    Append(&_42goto_stack_54376, _42goto_stack_54376, _27739);
    DeRefDS(_27739);
    _27739 = NOVALUE;

    /** parser.e:152		goto_addr = {}*/
    RefDS(_21928);
    DeRefDS(_42goto_addr_54375);
    _42goto_addr_54375 = _21928;

    /** parser.e:153		goto_list = {}*/
    RefDS(_21928);
    DeRefDS(_39goto_list_16926);
    _39goto_list_16926 = _21928;

    /** parser.e:154		goto_labels = {}*/
    RefDS(_21928);
    DeRefDS(_42goto_labels_54374);
    _42goto_labels_54374 = _21928;

    /** parser.e:155		goto_delay = {}*/
    RefDS(_21928);
    DeRefDS(_39goto_delay_16925);
    _39goto_delay_16925 = _21928;

    /** parser.e:156		goto_line = {}*/
    RefDS(_21928);
    DeRefDS(_42goto_line_54373);
    _42goto_line_54373 = _21928;

    /** parser.e:157		goto_ref = {}*/
    RefDS(_21928);
    DeRefDS(_42goto_ref_54377);
    _42goto_ref_54377 = _21928;

    /** parser.e:158		label_block = {}*/
    RefDS(_21928);
    DeRefDS(_42label_block_54378);
    _42label_block_54378 = _21928;

    /** parser.e:159		goto_init = map:new()*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at88_54502;
    _new_1__tmp_at88_54502 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at88_54502);
    _0 = _31malloc(_new_1__tmp_at88_54502, 1);
    DeRef(_42goto_init_54380);
    _42goto_init_54380 = _0;
    DeRef(_new_1__tmp_at88_54502);
    _new_1__tmp_at88_54502 = NOVALUE;

    /** parser.e:160	end procedure*/
    return;
    ;
}


void _42PopGoto()
{
    object _27765 = NOVALUE;
    object _27763 = NOVALUE;
    object _27762 = NOVALUE;
    object _27760 = NOVALUE;
    object _27759 = NOVALUE;
    object _27757 = NOVALUE;
    object _27756 = NOVALUE;
    object _27754 = NOVALUE;
    object _27753 = NOVALUE;
    object _27751 = NOVALUE;
    object _27750 = NOVALUE;
    object _27748 = NOVALUE;
    object _27747 = NOVALUE;
    object _27745 = NOVALUE;
    object _27744 = NOVALUE;
    object _27742 = NOVALUE;
    object _27741 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:163		CheckForUndefinedGotoLabels()*/
    _42CheckForUndefinedGotoLabels();

    /** parser.e:164		goto_addr   = goto_stack[$][1]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27741 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27741 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27742 = (object)*(((s1_ptr)_2)->base + _27741);
    DeRef(_42goto_addr_54375);
    _2 = (object)SEQ_PTR(_27742);
    _42goto_addr_54375 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_42goto_addr_54375);
    _27742 = NOVALUE;

    /** parser.e:165		goto_list   = goto_stack[$][2]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27744 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27744 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27745 = (object)*(((s1_ptr)_2)->base + _27744);
    DeRef(_39goto_list_16926);
    _2 = (object)SEQ_PTR(_27745);
    _39goto_list_16926 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_39goto_list_16926);
    _27745 = NOVALUE;

    /** parser.e:166		goto_labels = goto_stack[$][3]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27747 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27747 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27748 = (object)*(((s1_ptr)_2)->base + _27747);
    DeRef(_42goto_labels_54374);
    _2 = (object)SEQ_PTR(_27748);
    _42goto_labels_54374 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_42goto_labels_54374);
    _27748 = NOVALUE;

    /** parser.e:167		goto_delay  = goto_stack[$][4]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27750 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27750 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27751 = (object)*(((s1_ptr)_2)->base + _27750);
    DeRef(_39goto_delay_16925);
    _2 = (object)SEQ_PTR(_27751);
    _39goto_delay_16925 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_39goto_delay_16925);
    _27751 = NOVALUE;

    /** parser.e:168		goto_line   = goto_stack[$][5]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27753 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27753 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27754 = (object)*(((s1_ptr)_2)->base + _27753);
    DeRef(_42goto_line_54373);
    _2 = (object)SEQ_PTR(_27754);
    _42goto_line_54373 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_42goto_line_54373);
    _27754 = NOVALUE;

    /** parser.e:169		goto_ref    = goto_stack[$][6]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27756 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27756 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27757 = (object)*(((s1_ptr)_2)->base + _27756);
    DeRef(_42goto_ref_54377);
    _2 = (object)SEQ_PTR(_27757);
    _42goto_ref_54377 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_42goto_ref_54377);
    _27757 = NOVALUE;

    /** parser.e:170		label_block = goto_stack[$][7]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27759 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27759 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27760 = (object)*(((s1_ptr)_2)->base + _27759);
    DeRef(_42label_block_54378);
    _2 = (object)SEQ_PTR(_27760);
    _42label_block_54378 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_42label_block_54378);
    _27760 = NOVALUE;

    /** parser.e:171		goto_init   = goto_stack[$][8]*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27762 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27762 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_stack_54376);
    _27763 = (object)*(((s1_ptr)_2)->base + _27762);
    DeRef(_42goto_init_54380);
    _2 = (object)SEQ_PTR(_27763);
    _42goto_init_54380 = (object)*(((s1_ptr)_2)->base + 8);
    Ref(_42goto_init_54380);
    _27763 = NOVALUE;

    /** parser.e:173		goto_stack = remove( goto_stack, length( goto_stack ) )*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27765 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27765 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_42goto_stack_54376);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_27765)) ? _27765 : (object)(DBL_PTR(_27765)->dbl);
        int stop = (IS_ATOM_INT(_27765)) ? _27765 : (object)(DBL_PTR(_27765)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_42goto_stack_54376), start, &_42goto_stack_54376 );
            }
            else Tail(SEQ_PTR(_42goto_stack_54376), stop+1, &_42goto_stack_54376);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_42goto_stack_54376), start, &_42goto_stack_54376);
        }
        else {
            assign_slice_seq = &assign_space;
            _42goto_stack_54376 = Remove_elements(start, stop, (SEQ_PTR(_42goto_stack_54376)->ref == 1));
        }
    }
    _27765 = NOVALUE;
    _27765 = NOVALUE;

    /** parser.e:175	end procedure*/
    return;
    ;
}


void _42EnterTopLevel(object _end_line_table_54535)
{
    object _27784 = NOVALUE;
    object _27783 = NOVALUE;
    object _27781 = NOVALUE;
    object _27780 = NOVALUE;
    object _27778 = NOVALUE;
    object _27776 = NOVALUE;
    object _27774 = NOVALUE;
    object _27772 = NOVALUE;
    object _27771 = NOVALUE;
    object _27769 = NOVALUE;
    object _27767 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:179		if CurrentSub then*/
    if (_39CurrentSub_16823 == 0)
    {
        goto L1; // [7] 59
    }
    else{
    }

    /** parser.e:180			if end_line_table then*/
    if (_end_line_table_54535 == 0)
    {
        goto L2; // [12] 58
    }
    else{
    }

    /** parser.e:181				EndLineTable()*/
    _42EndLineTable();

    /** parser.e:182				SymTab[CurrentSub][S_LINETAB] = LineTable*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    RefDS(_39LineTable_16904);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39LineTable_16904;
    DeRef(_1);
    _27767 = NOVALUE;

    /** parser.e:183				SymTab[CurrentSub][S_CODE] = Code*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    RefDS(_39Code_16903);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39Code_16903;
    DeRef(_1);
    _27769 = NOVALUE;
L2: 
L1: 

    /** parser.e:186		if length(goto_stack) then*/
    if (IS_SEQUENCE(_42goto_stack_54376)){
            _27771 = SEQ_PTR(_42goto_stack_54376)->length;
    }
    else {
        _27771 = 1;
    }
    if (_27771 == 0)
    {
        _27771 = NOVALUE;
        goto L3; // [66] 74
    }
    else{
        _27771 = NOVALUE;
    }

    /** parser.e:187			PopGoto()*/
    _42PopGoto();
L3: 

    /** parser.e:189		LineTable = SymTab[TopLevelSub][S_LINETAB]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27772 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    DeRef(_39LineTable_16904);
    _2 = (object)SEQ_PTR(_27772);
    if (!IS_ATOM_INT(_39S_LINETAB_16505)){
        _39LineTable_16904 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    }
    else{
        _39LineTable_16904 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    }
    Ref(_39LineTable_16904);
    _27772 = NOVALUE;

    /** parser.e:190		Code = SymTab[TopLevelSub][S_CODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27774 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    DeRef(_39Code_16903);
    _2 = (object)SEQ_PTR(_27774);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _39Code_16903 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _39Code_16903 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    Ref(_39Code_16903);
    _27774 = NOVALUE;

    /** parser.e:191		SymTab[TopLevelSub][S_LINETAB] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _27776 = NOVALUE;

    /** parser.e:192		SymTab[TopLevelSub][S_CODE] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _27778 = NOVALUE;

    /** parser.e:193		previous_op = -1*/
    _39previous_op_16913 = -1;

    /** parser.e:194		CurrentSub = TopLevelSub*/
    _39CurrentSub_16823 = _39TopLevelSub_16822;

    /** parser.e:195		clear_last()*/
    _49clear_last();

    /** parser.e:196		if length( branch_stack ) then*/
    if (IS_SEQUENCE(_42branch_stack_54362)){
            _27780 = SEQ_PTR(_42branch_stack_54362)->length;
    }
    else {
        _27780 = 1;
    }
    if (_27780 == 0)
    {
        _27780 = NOVALUE;
        goto L4; // [171] 205
    }
    else{
        _27780 = NOVALUE;
    }

    /** parser.e:197			branch_list = branch_stack[$]*/
    if (IS_SEQUENCE(_42branch_stack_54362)){
            _27781 = SEQ_PTR(_42branch_stack_54362)->length;
    }
    else {
        _27781 = 1;
    }
    DeRef(_42branch_list_54361);
    _2 = (object)SEQ_PTR(_42branch_stack_54362);
    _42branch_list_54361 = (object)*(((s1_ptr)_2)->base + _27781);
    Ref(_42branch_list_54361);

    /** parser.e:198			branch_stack = tail( branch_stack )*/
    if (IS_SEQUENCE(_42branch_stack_54362)){
            _27783 = SEQ_PTR(_42branch_stack_54362)->length;
    }
    else {
        _27783 = 1;
    }
    _27784 = _27783 - 1;
    _27783 = NOVALUE;
    {
        int len = SEQ_PTR(_42branch_stack_54362)->length;
        int size = (IS_ATOM_INT(_27784)) ? _27784 : (object)(DBL_PTR(_27784)->dbl);
        if (size <= 0) {
            DeRef(_42branch_stack_54362);
            _42branch_stack_54362 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_42branch_stack_54362);
            DeRef(_42branch_stack_54362);
            _42branch_stack_54362 = _42branch_stack_54362;
        }
        else Tail(SEQ_PTR(_42branch_stack_54362), len-size+1, &_42branch_stack_54362);
    }
    _27784 = NOVALUE;
L4: 

    /** parser.e:200	end procedure*/
    return;
    ;
}


void _42LeaveTopLevel()
{
    object _27789 = NOVALUE;
    object _27787 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:204		branch_stack = append( branch_stack, branch_list )*/
    RefDS(_42branch_list_54361);
    Append(&_42branch_stack_54362, _42branch_stack_54362, _42branch_list_54361);

    /** parser.e:205		branch_list = {}*/
    RefDS(_21928);
    DeRefDS(_42branch_list_54361);
    _42branch_list_54361 = _21928;

    /** parser.e:206		PushGoto()*/
    _42PushGoto();

    /** parser.e:207		LastLineNumber = -1*/
    _63LastLineNumber_25185 = -1;

    /** parser.e:208		SymTab[TopLevelSub][S_LINETAB] = LineTable*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39LineTable_16904);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39LineTable_16904;
    DeRef(_1);
    _27787 = NOVALUE;

    /** parser.e:209		SymTab[TopLevelSub][S_CODE] = Code*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39Code_16903);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39Code_16903;
    DeRef(_1);
    _27789 = NOVALUE;

    /** parser.e:210		LineTable = {}*/
    RefDS(_21928);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _21928;

    /** parser.e:211		Code = {}*/
    RefDS(_21928);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _21928;

    /** parser.e:212		previous_op = -1*/
    _39previous_op_16913 = -1;

    /** parser.e:213		clear_last()*/
    _49clear_last();

    /** parser.e:214	end procedure*/
    return;
    ;
}


void _42InitParser()
{
    object _new_1__tmp_at195_54611 = NOVALUE;
    object _new_inlined_new_at_195_54610 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:217		goto_stack = {}*/
    RefDS(_21928);
    DeRef(_42goto_stack_54376);
    _42goto_stack_54376 = _21928;

    /** parser.e:220		goto_labels = {}*/
    RefDS(_21928);
    DeRef(_42goto_labels_54374);
    _42goto_labels_54374 = _21928;

    /** parser.e:221		label_block = {}*/
    RefDS(_21928);
    DeRef(_42label_block_54378);
    _42label_block_54378 = _21928;

    /** parser.e:222		goto_ref = {}*/
    RefDS(_21928);
    DeRef(_42goto_ref_54377);
    _42goto_ref_54377 = _21928;

    /** parser.e:223		goto_addr = {}*/
    RefDS(_21928);
    DeRef(_42goto_addr_54375);
    _42goto_addr_54375 = _21928;

    /** parser.e:224		goto_line = {}*/
    RefDS(_21928);
    DeRef(_42goto_line_54373);
    _42goto_line_54373 = _21928;

    /** parser.e:225		break_list = {}*/
    RefDS(_21928);
    DeRefi(_42break_list_54381);
    _42break_list_54381 = _21928;

    /** parser.e:226		break_delay = {}*/
    RefDS(_21928);
    DeRef(_42break_delay_54382);
    _42break_delay_54382 = _21928;

    /** parser.e:227		exit_list = {}*/
    RefDS(_21928);
    DeRefi(_42exit_list_54383);
    _42exit_list_54383 = _21928;

    /** parser.e:228		exit_delay = {}*/
    RefDS(_21928);
    DeRef(_42exit_delay_54384);
    _42exit_delay_54384 = _21928;

    /** parser.e:229		continue_list = {}*/
    RefDS(_21928);
    DeRefi(_42continue_list_54385);
    _42continue_list_54385 = _21928;

    /** parser.e:230		continue_delay = {}*/
    RefDS(_21928);
    DeRef(_42continue_delay_54386);
    _42continue_delay_54386 = _21928;

    /** parser.e:231		init_stack = {}*/
    RefDS(_21928);
    DeRefi(_42init_stack_54396);
    _42init_stack_54396 = _21928;

    /** parser.e:232		CurrentSub = 0*/
    _39CurrentSub_16823 = 0;

    /** parser.e:233		CreateTopLevel()*/
    _42CreateTopLevel();

    /** parser.e:234		EnterTopLevel()*/
    _42EnterTopLevel(1);

    /** parser.e:235		backed_up_tok = {}*/
    RefDS(_21928);
    DeRef(_42backed_up_tok_54370);
    _42backed_up_tok_54370 = _21928;

    /** parser.e:236		loop_stack = {}*/
    RefDS(_21928);
    DeRefi(_42loop_stack_54397);
    _42loop_stack_54397 = _21928;

    /** parser.e:237		stmt_nest = 0*/
    _42stmt_nest_54395 = 0;

    /** parser.e:238		loop_labels = {}*/
    RefDS(_21928);
    DeRef(_42loop_labels_54391);
    _42loop_labels_54391 = _21928;

    /** parser.e:239		if_labels = {}*/
    RefDS(_21928);
    DeRef(_42if_labels_54392);
    _42if_labels_54392 = _21928;

    /** parser.e:240		if_stack = {}*/
    RefDS(_21928);
    DeRefi(_42if_stack_54398);
    _42if_stack_54398 = _21928;

    /** parser.e:241		continue_addr = {}*/
    RefDS(_21928);
    DeRefi(_42continue_addr_54388);
    _42continue_addr_54388 = _21928;

    /** parser.e:242		retry_addr = {}*/
    RefDS(_21928);
    DeRefi(_42retry_addr_54389);
    _42retry_addr_54389 = _21928;

    /** parser.e:243		entry_addr = {}*/
    RefDS(_21928);
    DeRefi(_42entry_addr_54387);
    _42entry_addr_54387 = _21928;

    /** parser.e:244		block_list = {}*/
    RefDS(_21928);
    DeRefi(_42block_list_54393);
    _42block_list_54393 = _21928;

    /** parser.e:245		block_index = 0*/
    _42block_index_54394 = 0;

    /** parser.e:246		param_num = -1*/
    _42param_num_54372 = -1;

    /** parser.e:247		entry_stack = {}*/
    RefDS(_21928);
    DeRef(_42entry_stack_54390);
    _42entry_stack_54390 = _21928;

    /** parser.e:248		goto_init = map:new()*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at195_54611;
    _new_1__tmp_at195_54611 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at195_54611);
    _0 = _31malloc(_new_1__tmp_at195_54611, 1);
    DeRef(_42goto_init_54380);
    _42goto_init_54380 = _0;
    DeRef(_new_1__tmp_at195_54611);
    _new_1__tmp_at195_54611 = NOVALUE;

    /** parser.e:249	end procedure*/
    return;
    ;
}


void _42NotReached(object _tok_54628, object _keyword_54629)
{
    object _27804 = NOVALUE;
    object _27803 = NOVALUE;
    object _27802 = NOVALUE;
    object _27801 = NOVALUE;
    object _27800 = NOVALUE;
    object _27799 = NOVALUE;
    object _27797 = NOVALUE;
    object _27796 = NOVALUE;
    object _27795 = NOVALUE;
    object _27794 = NOVALUE;
    object _27792 = NOVALUE;
    object _27791 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_tok_54628)) {
        _1 = (object)(DBL_PTR(_tok_54628)->dbl);
        DeRefDS(_tok_54628);
        _tok_54628 = _1;
    }

    /** parser.e:271		if not find(tok, {END, ELSE, ELSIF, END_OF_FILE, CASE, IFDEF, ELSIFDEF, ELSEDEF}) then*/
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 402;
    ((intptr_t*)_2)[2] = 23;
    ((intptr_t*)_2)[3] = 414;
    ((intptr_t*)_2)[4] = -21;
    ((intptr_t*)_2)[5] = 186;
    ((intptr_t*)_2)[6] = 407;
    ((intptr_t*)_2)[7] = 408;
    ((intptr_t*)_2)[8] = 409;
    _27791 = MAKE_SEQ(_1);
    _27792 = find_from(_tok_54628, _27791, 1);
    DeRefDS(_27791);
    _27791 = NOVALUE;
    if (_27792 != 0)
    goto L1; // [39] 135
    _27792 = NOVALUE;

    /** parser.e:272			if equal(keyword, "goto") and find(tok, {LOOP, LABEL, WHILE}) then*/
    if (_keyword_54629 == _26129)
    _27794 = 1;
    else if (IS_ATOM_INT(_keyword_54629) && IS_ATOM_INT(_26129))
    _27794 = 0;
    else
    _27794 = (compare(_keyword_54629, _26129) == 0);
    if (_27794 == 0) {
        goto L2; // [48] 79
    }
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 422;
    ((intptr_t*)_2)[2] = 419;
    ((intptr_t*)_2)[3] = 47;
    _27796 = MAKE_SEQ(_1);
    _27797 = find_from(_tok_54628, _27796, 1);
    DeRefDS(_27796);
    _27796 = NOVALUE;
    if (_27797 == 0)
    {
        _27797 = NOVALUE;
        goto L2; // [70] 79
    }
    else{
        _27797 = NOVALUE;
    }

    /** parser.e:273				return*/
    DeRefDSi(_keyword_54629);
    return;
L2: 

    /** parser.e:275			if equal(keyword, "abort()") and tok = LABEL then*/
    if (_keyword_54629 == _27798)
    _27799 = 1;
    else if (IS_ATOM_INT(_keyword_54629) && IS_ATOM_INT(_27798))
    _27799 = 0;
    else
    _27799 = (compare(_keyword_54629, _27798) == 0);
    if (_27799 == 0) {
        goto L3; // [85] 105
    }
    _27801 = (_tok_54628 == 419);
    if (_27801 == 0)
    {
        DeRef(_27801);
        _27801 = NOVALUE;
        goto L3; // [96] 105
    }
    else{
        DeRef(_27801);
        _27801 = NOVALUE;
    }

    /** parser.e:278				return*/
    DeRefDSi(_keyword_54629);
    return;
L3: 

    /** parser.e:280			Warning(218, not_reached_warning_flag,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _27802 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    Ref(_27802);
    _27803 = _56name_ext(_27802);
    _27802 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _27803;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    RefDS(_keyword_54629);
    ((intptr_t*)_2)[3] = _keyword_54629;
    _27804 = MAKE_SEQ(_1);
    _27803 = NOVALUE;
    _52Warning(218, 512, _27804);
    _27804 = NOVALUE;
L1: 

    /** parser.e:285	end procedure*/
    DeRefDSi(_keyword_54629);
    return;
    ;
}


void _42Forward_InitCheck(object _tok_54668, object _ref_54669)
{
    object _sym_54671 = NOVALUE;
    object _27810 = NOVALUE;
    object _27809 = NOVALUE;
    object _27808 = NOVALUE;
    object _27806 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:289		if ref then*/
    if (_ref_54669 == 0)
    {
        goto L1; // [5] 83
    }
    else{
    }

    /** parser.e:290			integer sym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_54668);
    _sym_54671 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_54671)){
        _sym_54671 = (object)DBL_PTR(_sym_54671)->dbl;
    }

    /** parser.e:291			if tok[T_ID] = QUALIFIED_VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok_54668);
    _27806 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _27806, 512)){
        _27806 = NOVALUE;
        goto L2; // [28] 50
    }
    _27806 = NOVALUE;

    /** parser.e:292				set_qualified_fwd( SymTab[sym][S_FILE_NO] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27808 = (object)*(((s1_ptr)_2)->base + _sym_54671);
    _2 = (object)SEQ_PTR(_27808);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _27809 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _27809 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _27808 = NOVALUE;
    Ref(_27809);
    _63set_qualified_fwd(_27809);
    _27809 = NOVALUE;
L2: 

    /** parser.e:294			ref = new_forward_reference( GLOBAL_INIT_CHECK, tok[T_SYM], GLOBAL_INIT_CHECK )*/
    _2 = (object)SEQ_PTR(_tok_54668);
    _27810 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_27810);
    _ref_54669 = _41new_forward_reference(109, _27810, 109);
    _27810 = NOVALUE;
    if (!IS_ATOM_INT(_ref_54669)) {
        _1 = (object)(DBL_PTR(_ref_54669)->dbl);
        DeRefDS(_ref_54669);
        _ref_54669 = _1;
    }

    /** parser.e:296			emit_op( GLOBAL_INIT_CHECK )*/
    _49emit_op(109);

    /** parser.e:297			emit_addr( sym )*/
    _49emit_addr(_sym_54671);
L1: 

    /** parser.e:299	end procedure*/
    DeRef(_tok_54668);
    return;
    ;
}


void _42InitCheck(object _sym_54696, object _ref_54697)
{
    object _27887 = NOVALUE;
    object _27886 = NOVALUE;
    object _27885 = NOVALUE;
    object _27884 = NOVALUE;
    object _27883 = NOVALUE;
    object _27882 = NOVALUE;
    object _27881 = NOVALUE;
    object _27880 = NOVALUE;
    object _27878 = NOVALUE;
    object _27876 = NOVALUE;
    object _27875 = NOVALUE;
    object _27873 = NOVALUE;
    object _27872 = NOVALUE;
    object _27871 = NOVALUE;
    object _27870 = NOVALUE;
    object _27869 = NOVALUE;
    object _27868 = NOVALUE;
    object _27867 = NOVALUE;
    object _27866 = NOVALUE;
    object _27865 = NOVALUE;
    object _27864 = NOVALUE;
    object _27863 = NOVALUE;
    object _27862 = NOVALUE;
    object _27861 = NOVALUE;
    object _27860 = NOVALUE;
    object _27858 = NOVALUE;
    object _27857 = NOVALUE;
    object _27856 = NOVALUE;
    object _27855 = NOVALUE;
    object _27854 = NOVALUE;
    object _27853 = NOVALUE;
    object _27852 = NOVALUE;
    object _27851 = NOVALUE;
    object _27850 = NOVALUE;
    object _27848 = NOVALUE;
    object _27847 = NOVALUE;
    object _27846 = NOVALUE;
    object _27845 = NOVALUE;
    object _27844 = NOVALUE;
    object _27843 = NOVALUE;
    object _27842 = NOVALUE;
    object _27841 = NOVALUE;
    object _27840 = NOVALUE;
    object _27839 = NOVALUE;
    object _27838 = NOVALUE;
    object _27837 = NOVALUE;
    object _27836 = NOVALUE;
    object _27835 = NOVALUE;
    object _27834 = NOVALUE;
    object _27833 = NOVALUE;
    object _27832 = NOVALUE;
    object _27831 = NOVALUE;
    object _27830 = NOVALUE;
    object _27829 = NOVALUE;
    object _27828 = NOVALUE;
    object _27827 = NOVALUE;
    object _27825 = NOVALUE;
    object _27824 = NOVALUE;
    object _27823 = NOVALUE;
    object _27822 = NOVALUE;
    object _27821 = NOVALUE;
    object _27820 = NOVALUE;
    object _27819 = NOVALUE;
    object _27818 = NOVALUE;
    object _27817 = NOVALUE;
    object _27816 = NOVALUE;
    object _27815 = NOVALUE;
    object _27814 = NOVALUE;
    object _27812 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:306		if sym < 0 or (SymTab[sym][S_MODE] = M_NORMAL and*/
    _27812 = (_sym_54696 < 0);
    if (_27812 != 0) {
        goto L1; // [11] 90
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27814 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27814);
    _27815 = (object)*(((s1_ptr)_2)->base + 3);
    _27814 = NOVALUE;
    if (IS_ATOM_INT(_27815)) {
        _27816 = (_27815 == 1);
    }
    else {
        _27816 = binary_op(EQUALS, _27815, 1);
    }
    _27815 = NOVALUE;
    if (IS_ATOM_INT(_27816)) {
        if (_27816 == 0) {
            _27817 = 0;
            goto L2; // [33] 59
        }
    }
    else {
        if (DBL_PTR(_27816)->dbl == 0.0) {
            _27817 = 0;
            goto L2; // [33] 59
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27818 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27818);
    _27819 = (object)*(((s1_ptr)_2)->base + 4);
    _27818 = NOVALUE;
    if (IS_ATOM_INT(_27819)) {
        _27820 = (_27819 != 2);
    }
    else {
        _27820 = binary_op(NOTEQ, _27819, 2);
    }
    _27819 = NOVALUE;
    DeRef(_27817);
    if (IS_ATOM_INT(_27820))
    _27817 = (_27820 != 0);
    else
    _27817 = DBL_PTR(_27820)->dbl != 0.0;
L2: 
    if (_27817 == 0) {
        DeRef(_27821);
        _27821 = 0;
        goto L3; // [59] 85
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27822 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27822);
    _27823 = (object)*(((s1_ptr)_2)->base + 4);
    _27822 = NOVALUE;
    if (IS_ATOM_INT(_27823)) {
        _27824 = (_27823 != 4);
    }
    else {
        _27824 = binary_op(NOTEQ, _27823, 4);
    }
    _27823 = NOVALUE;
    if (IS_ATOM_INT(_27824))
    _27821 = (_27824 != 0);
    else
    _27821 = DBL_PTR(_27824)->dbl != 0.0;
L3: 
    if (_27821 == 0)
    {
        _27821 = NOVALUE;
        goto L4; // [86] 502
    }
    else{
        _27821 = NOVALUE;
    }
L1: 

    /** parser.e:309			if sym < 0 or ((SymTab[sym][S_SCOPE] != SC_PRIVATE and*/
    _27825 = (_sym_54696 < 0);
    if (_27825 != 0) {
        goto L5; // [96] 213
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27827 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27827);
    _27828 = (object)*(((s1_ptr)_2)->base + 4);
    _27827 = NOVALUE;
    if (IS_ATOM_INT(_27828)) {
        _27829 = (_27828 != 3);
    }
    else {
        _27829 = binary_op(NOTEQ, _27828, 3);
    }
    _27828 = NOVALUE;
    if (IS_ATOM_INT(_27829)) {
        if (_27829 == 0) {
            DeRef(_27830);
            _27830 = 0;
            goto L6; // [118] 144
        }
    }
    else {
        if (DBL_PTR(_27829)->dbl == 0.0) {
            DeRef(_27830);
            _27830 = 0;
            goto L6; // [118] 144
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27831 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27831);
    _27832 = (object)*(((s1_ptr)_2)->base + 1);
    _27831 = NOVALUE;
    if (_27832 == _39NOVALUE_16670)
    _27833 = 1;
    else if (IS_ATOM_INT(_27832) && IS_ATOM_INT(_39NOVALUE_16670))
    _27833 = 0;
    else
    _27833 = (compare(_27832, _39NOVALUE_16670) == 0);
    _27832 = NOVALUE;
    DeRef(_27830);
    _27830 = (_27833 != 0);
L6: 
    if (_27830 != 0) {
        DeRef(_27834);
        _27834 = 1;
        goto L7; // [144] 208
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27835 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27835);
    _27836 = (object)*(((s1_ptr)_2)->base + 4);
    _27835 = NOVALUE;
    if (IS_ATOM_INT(_27836)) {
        _27837 = (_27836 == 3);
    }
    else {
        _27837 = binary_op(EQUALS, _27836, 3);
    }
    _27836 = NOVALUE;
    if (IS_ATOM_INT(_27837)) {
        if (_27837 == 0) {
            DeRef(_27838);
            _27838 = 0;
            goto L8; // [166] 204
        }
    }
    else {
        if (DBL_PTR(_27837)->dbl == 0.0) {
            DeRef(_27838);
            _27838 = 0;
            goto L8; // [166] 204
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27839 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27839);
    _27840 = (object)*(((s1_ptr)_2)->base + 16);
    _27839 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27841 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_27841);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _27842 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _27842 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _27841 = NOVALUE;
    if (IS_ATOM_INT(_27840) && IS_ATOM_INT(_27842)) {
        _27843 = (_27840 >= _27842);
    }
    else {
        _27843 = binary_op(GREATEREQ, _27840, _27842);
    }
    _27840 = NOVALUE;
    _27842 = NOVALUE;
    DeRef(_27838);
    if (IS_ATOM_INT(_27843))
    _27838 = (_27843 != 0);
    else
    _27838 = DBL_PTR(_27843)->dbl != 0.0;
L8: 
    DeRef(_27834);
    _27834 = (_27838 != 0);
L7: 
    if (_27834 == 0)
    {
        _27834 = NOVALUE;
        goto L9; // [209] 566
    }
    else{
        _27834 = NOVALUE;
    }
L5: 

    /** parser.e:313				if sym < 0 or (SymTab[sym][S_INITLEVEL] = -1)*/
    _27844 = (_sym_54696 < 0);
    if (_27844 != 0) {
        _27845 = 1;
        goto LA; // [219] 243
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27846 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27846);
    _27847 = (object)*(((s1_ptr)_2)->base + 14);
    _27846 = NOVALUE;
    if (IS_ATOM_INT(_27847)) {
        _27848 = (_27847 == -1);
    }
    else {
        _27848 = binary_op(EQUALS, _27847, -1);
    }
    _27847 = NOVALUE;
    if (IS_ATOM_INT(_27848))
    _27845 = (_27848 != 0);
    else
    _27845 = DBL_PTR(_27848)->dbl != 0.0;
LA: 
    if (_27845 != 0) {
        goto LB; // [243] 270
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27850 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27850);
    _27851 = (object)*(((s1_ptr)_2)->base + 4);
    _27850 = NOVALUE;
    if (IS_ATOM_INT(_27851)) {
        _27852 = (_27851 != 3);
    }
    else {
        _27852 = binary_op(NOTEQ, _27851, 3);
    }
    _27851 = NOVALUE;
    if (_27852 == 0) {
        DeRef(_27852);
        _27852 = NOVALUE;
        goto L9; // [266] 566
    }
    else {
        if (!IS_ATOM_INT(_27852) && DBL_PTR(_27852)->dbl == 0.0){
            DeRef(_27852);
            _27852 = NOVALUE;
            goto L9; // [266] 566
        }
        DeRef(_27852);
        _27852 = NOVALUE;
    }
    DeRef(_27852);
    _27852 = NOVALUE;
LB: 

    /** parser.e:316					if ref then*/
    if (_ref_54697 == 0)
    {
        goto LC; // [272] 375
    }
    else{
    }

    /** parser.e:317						if sym > 0 and (SymTab[sym][S_SCOPE] = SC_UNDEFINED) then*/
    _27853 = (_sym_54696 > 0);
    if (_27853 == 0) {
        goto LD; // [281] 317
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27855 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27855);
    _27856 = (object)*(((s1_ptr)_2)->base + 4);
    _27855 = NOVALUE;
    if (IS_ATOM_INT(_27856)) {
        _27857 = (_27856 == 9);
    }
    else {
        _27857 = binary_op(EQUALS, _27856, 9);
    }
    _27856 = NOVALUE;
    if (_27857 == 0) {
        DeRef(_27857);
        _27857 = NOVALUE;
        goto LD; // [304] 317
    }
    else {
        if (!IS_ATOM_INT(_27857) && DBL_PTR(_27857)->dbl == 0.0){
            DeRef(_27857);
            _27857 = NOVALUE;
            goto LD; // [304] 317
        }
        DeRef(_27857);
        _27857 = NOVALUE;
    }
    DeRef(_27857);
    _27857 = NOVALUE;

    /** parser.e:318							emit_op(PRIVATE_INIT_CHECK)*/
    _49emit_op(30);
    goto LE; // [314] 369
LD: 

    /** parser.e:319						elsif sym < 0 or find(SymTab[sym][S_SCOPE], SCOPE_TYPES) then*/
    _27858 = (_sym_54696 < 0);
    if (_27858 != 0) {
        goto LF; // [323] 351
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27860 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27860);
    _27861 = (object)*(((s1_ptr)_2)->base + 4);
    _27860 = NOVALUE;
    _27862 = find_from(_27861, _42SCOPE_TYPES_54354, 1);
    _27861 = NOVALUE;
    if (_27862 == 0)
    {
        _27862 = NOVALUE;
        goto L10; // [347] 361
    }
    else{
        _27862 = NOVALUE;
    }
LF: 

    /** parser.e:320							emit_op(GLOBAL_INIT_CHECK) -- will become NOP2*/
    _49emit_op(109);
    goto LE; // [358] 369
L10: 

    /** parser.e:322							emit_op(PRIVATE_INIT_CHECK)*/
    _49emit_op(30);
LE: 

    /** parser.e:324						emit_addr(sym)*/
    _49emit_addr(_sym_54696);
LC: 

    /** parser.e:326					if sym > 0 */
    _27863 = (_sym_54696 > 0);
    if (_27863 == 0) {
        _27864 = 0;
        goto L11; // [381] 411
    }
    _27865 = (_42short_circuit_54363 <= 0);
    if (_27865 != 0) {
        _27866 = 1;
        goto L12; // [391] 407
    }
    _27867 = (_42short_circuit_B_54365 == _9FALSE_442);
    _27866 = (_27867 != 0);
L12: 
    _27864 = (_27866 != 0);
L11: 
    if (_27864 == 0) {
        goto L9; // [411] 566
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27869 = (object)*(((s1_ptr)_2)->base + _sym_54696);
    _2 = (object)SEQ_PTR(_27869);
    _27870 = (object)*(((s1_ptr)_2)->base + 4);
    _27869 = NOVALUE;
    if (IS_ATOM_INT(_27870)) {
        _27871 = (_27870 != 3);
    }
    else {
        _27871 = binary_op(NOTEQ, _27870, 3);
    }
    _27870 = NOVALUE;
    if (IS_ATOM_INT(_27871)) {
        _27872 = (_27871 == 0);
    }
    else {
        _27872 = unary_op(NOT, _27871);
    }
    DeRef(_27871);
    _27871 = NOVALUE;
    if (_27872 == 0) {
        DeRef(_27872);
        _27872 = NOVALUE;
        goto L9; // [437] 566
    }
    else {
        if (!IS_ATOM_INT(_27872) && DBL_PTR(_27872)->dbl == 0.0){
            DeRef(_27872);
            _27872 = NOVALUE;
            goto L9; // [437] 566
        }
        DeRef(_27872);
        _27872 = NOVALUE;
    }
    DeRef(_27872);
    _27872 = NOVALUE;

    /** parser.e:330						if CurrentSub != TopLevelSub */
    _27873 = (_39CurrentSub_16823 != _39TopLevelSub_16822);
    if (_27873 != 0) {
        goto L13; // [450] 470
    }
    if (IS_SEQUENCE(_36known_files_15405)){
            _27875 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _27875 = 1;
    }
    _27876 = (_39current_file_no_16815 == _27875);
    _27875 = NOVALUE;
    if (_27876 == 0)
    {
        DeRef(_27876);
        _27876 = NOVALUE;
        goto L9; // [466] 566
    }
    else{
        DeRef(_27876);
        _27876 = NOVALUE;
    }
L13: 

    /** parser.e:335							init_stack = append(init_stack, sym)*/
    Append(&_42init_stack_54396, _42init_stack_54396, _sym_54696);

    /** parser.e:336							SymTab[sym][S_INITLEVEL] = stmt_nest*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_54696 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _42stmt_nest_54395;
    DeRef(_1);
    _27878 = NOVALUE;
    goto L9; // [499] 566
L4: 

    /** parser.e:343		elsif ref and sym > 0 and sym_mode( sym ) = M_CONSTANT and equal( NOVALUE, sym_obj( sym ) ) then*/
    if (_ref_54697 == 0) {
        _27880 = 0;
        goto L14; // [504] 516
    }
    _27881 = (_sym_54696 > 0);
    _27880 = (_27881 != 0);
L14: 
    if (_27880 == 0) {
        _27882 = 0;
        goto L15; // [516] 534
    }
    _27883 = _56sym_mode(_sym_54696);
    if (IS_ATOM_INT(_27883)) {
        _27884 = (_27883 == 2);
    }
    else {
        _27884 = binary_op(EQUALS, _27883, 2);
    }
    DeRef(_27883);
    _27883 = NOVALUE;
    if (IS_ATOM_INT(_27884))
    _27882 = (_27884 != 0);
    else
    _27882 = DBL_PTR(_27884)->dbl != 0.0;
L15: 
    if (_27882 == 0) {
        goto L16; // [534] 565
    }
    _27886 = _56sym_obj(_sym_54696);
    if (_39NOVALUE_16670 == _27886)
    _27887 = 1;
    else if (IS_ATOM_INT(_39NOVALUE_16670) && IS_ATOM_INT(_27886))
    _27887 = 0;
    else
    _27887 = (compare(_39NOVALUE_16670, _27886) == 0);
    DeRef(_27886);
    _27886 = NOVALUE;
    if (_27887 == 0)
    {
        _27887 = NOVALUE;
        goto L16; // [549] 565
    }
    else{
        _27887 = NOVALUE;
    }

    /** parser.e:344			emit_op( GLOBAL_INIT_CHECK )*/
    _49emit_op(109);

    /** parser.e:345			emit_addr(sym)*/
    _49emit_addr(_sym_54696);
L16: 
L9: 

    /** parser.e:349	end procedure*/
    DeRef(_27865);
    _27865 = NOVALUE;
    DeRef(_27843);
    _27843 = NOVALUE;
    DeRef(_27824);
    _27824 = NOVALUE;
    DeRef(_27816);
    _27816 = NOVALUE;
    DeRef(_27863);
    _27863 = NOVALUE;
    DeRef(_27825);
    _27825 = NOVALUE;
    DeRef(_27858);
    _27858 = NOVALUE;
    DeRef(_27867);
    _27867 = NOVALUE;
    DeRef(_27848);
    _27848 = NOVALUE;
    DeRef(_27837);
    _27837 = NOVALUE;
    DeRef(_27820);
    _27820 = NOVALUE;
    DeRef(_27881);
    _27881 = NOVALUE;
    DeRef(_27844);
    _27844 = NOVALUE;
    DeRef(_27812);
    _27812 = NOVALUE;
    DeRef(_27853);
    _27853 = NOVALUE;
    DeRef(_27884);
    _27884 = NOVALUE;
    DeRef(_27873);
    _27873 = NOVALUE;
    DeRef(_27829);
    _27829 = NOVALUE;
    return;
    ;
}


void _42InitDelete()
{
    object _27900 = NOVALUE;
    object _27899 = NOVALUE;
    object _27897 = NOVALUE;
    object _27896 = NOVALUE;
    object _27895 = NOVALUE;
    object _27894 = NOVALUE;
    object _27893 = NOVALUE;
    object _27892 = NOVALUE;
    object _27891 = NOVALUE;
    object _27890 = NOVALUE;
    object _27889 = NOVALUE;
    object _27888 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:354		while length(init_stack) and*/
L1: 
    if (IS_SEQUENCE(_42init_stack_54396)){
            _27888 = SEQ_PTR(_42init_stack_54396)->length;
    }
    else {
        _27888 = 1;
    }
    if (_27888 == 0) {
        goto L2; // [11] 91
    }
    if (IS_SEQUENCE(_42init_stack_54396)){
            _27890 = SEQ_PTR(_42init_stack_54396)->length;
    }
    else {
        _27890 = 1;
    }
    _2 = (object)SEQ_PTR(_42init_stack_54396);
    _27891 = (object)*(((s1_ptr)_2)->base + _27890);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27892 = (object)*(((s1_ptr)_2)->base + _27891);
    _2 = (object)SEQ_PTR(_27892);
    _27893 = (object)*(((s1_ptr)_2)->base + 14);
    _27892 = NOVALUE;
    if (IS_ATOM_INT(_27893)) {
        _27894 = (_27893 > _42stmt_nest_54395);
    }
    else {
        _27894 = binary_op(GREATER, _27893, _42stmt_nest_54395);
    }
    _27893 = NOVALUE;
    if (_27894 <= 0) {
        if (_27894 == 0) {
            DeRef(_27894);
            _27894 = NOVALUE;
            goto L2; // [43] 91
        }
        else {
            if (!IS_ATOM_INT(_27894) && DBL_PTR(_27894)->dbl == 0.0){
                DeRef(_27894);
                _27894 = NOVALUE;
                goto L2; // [43] 91
            }
            DeRef(_27894);
            _27894 = NOVALUE;
        }
    }
    DeRef(_27894);
    _27894 = NOVALUE;

    /** parser.e:356			SymTab[init_stack[$]][S_INITLEVEL] = -1*/
    if (IS_SEQUENCE(_42init_stack_54396)){
            _27895 = SEQ_PTR(_42init_stack_54396)->length;
    }
    else {
        _27895 = 1;
    }
    _2 = (object)SEQ_PTR(_42init_stack_54396);
    _27896 = (object)*(((s1_ptr)_2)->base + _27895);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_27896 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    _27897 = NOVALUE;

    /** parser.e:357			init_stack = init_stack[1..$-1]*/
    if (IS_SEQUENCE(_42init_stack_54396)){
            _27899 = SEQ_PTR(_42init_stack_54396)->length;
    }
    else {
        _27899 = 1;
    }
    _27900 = _27899 - 1;
    _27899 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42init_stack_54396;
    RHS_Slice(_42init_stack_54396, 1, _27900);

    /** parser.e:358		end while*/
    goto L1; // [88] 6
L2: 

    /** parser.e:359	end procedure*/
    _27896 = NOVALUE;
    _27891 = NOVALUE;
    DeRef(_27900);
    _27900 = NOVALUE;
    return;
    ;
}


void _42emit_forward_addr()
{
    object _27902 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:364		emit_addr(0)*/
    _49emit_addr(0);

    /** parser.e:365		branch_list = append(branch_list, length(Code))*/
    if (IS_SEQUENCE(_39Code_16903)){
            _27902 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _27902 = 1;
    }
    Append(&_42branch_list_54361, _42branch_list_54361, _27902);
    _27902 = NOVALUE;

    /** parser.e:366	end procedure*/
    return;
    ;
}


void _42StraightenBranches()
{
    object _br_54870 = NOVALUE;
    object _target_54871 = NOVALUE;
    object _27923 = NOVALUE;
    object _27922 = NOVALUE;
    object _27921 = NOVALUE;
    object _27920 = NOVALUE;
    object _27918 = NOVALUE;
    object _27917 = NOVALUE;
    object _27916 = NOVALUE;
    object _27914 = NOVALUE;
    object _27913 = NOVALUE;
    object _27912 = NOVALUE;
    object _27911 = NOVALUE;
    object _27909 = NOVALUE;
    object _27906 = NOVALUE;
    object _27905 = NOVALUE;
    object _27904 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:373		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [5] 14
    }
    else{
    }

    /** parser.e:374			return -- do it in back-end*/
    return;
L1: 

    /** parser.e:376		for i = length(branch_list) to 1 by -1 do*/
    if (IS_SEQUENCE(_42branch_list_54361)){
            _27904 = SEQ_PTR(_42branch_list_54361)->length;
    }
    else {
        _27904 = 1;
    }
    {
        object _i_54875;
        _i_54875 = _27904;
L2: 
        if (_i_54875 < 1){
            goto L3; // [21] 170
        }

        /** parser.e:377			if branch_list[i] > length(Code) then*/
        _2 = (object)SEQ_PTR(_42branch_list_54361);
        _27905 = (object)*(((s1_ptr)_2)->base + _i_54875);
        if (IS_SEQUENCE(_39Code_16903)){
                _27906 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _27906 = 1;
        }
        if (binary_op_a(LESSEQ, _27905, _27906)){
            _27905 = NOVALUE;
            _27906 = NOVALUE;
            goto L4; // [41] 53
        }
        _27905 = NOVALUE;
        _27906 = NOVALUE;

        /** parser.e:378				CompileErr("wtf")*/
        RefDS(_27908);
        RefDS(_21928);
        _52CompileErr(_27908, _21928, 0);
L4: 

        /** parser.e:380			target = Code[branch_list[i]]*/
        _2 = (object)SEQ_PTR(_42branch_list_54361);
        _27909 = (object)*(((s1_ptr)_2)->base + _i_54875);
        _2 = (object)SEQ_PTR(_39Code_16903);
        if (!IS_ATOM_INT(_27909)){
            _target_54871 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_27909)->dbl));
        }
        else{
            _target_54871 = (object)*(((s1_ptr)_2)->base + _27909);
        }
        if (!IS_ATOM_INT(_target_54871)){
            _target_54871 = (object)DBL_PTR(_target_54871)->dbl;
        }

        /** parser.e:381			if target <= length(Code) and target > 0 then*/
        if (IS_SEQUENCE(_39Code_16903)){
                _27911 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _27911 = 1;
        }
        _27912 = (_target_54871 <= _27911);
        _27911 = NOVALUE;
        if (_27912 == 0) {
            goto L5; // [80] 163
        }
        _27914 = (_target_54871 > 0);
        if (_27914 == 0)
        {
            DeRef(_27914);
            _27914 = NOVALUE;
            goto L5; // [89] 163
        }
        else{
            DeRef(_27914);
            _27914 = NOVALUE;
        }

        /** parser.e:382				br = Code[target]*/
        _2 = (object)SEQ_PTR(_39Code_16903);
        _br_54870 = (object)*(((s1_ptr)_2)->base + _target_54871);
        if (!IS_ATOM_INT(_br_54870)){
            _br_54870 = (object)DBL_PTR(_br_54870)->dbl;
        }

        /** parser.e:383				if br = ELSE or br = ENDWHILE or br = EXIT then*/
        _27916 = (_br_54870 == 23);
        if (_27916 != 0) {
            _27917 = 1;
            goto L6; // [110] 124
        }
        _27918 = (_br_54870 == 22);
        _27917 = (_27918 != 0);
L6: 
        if (_27917 != 0) {
            goto L7; // [124] 139
        }
        _27920 = (_br_54870 == 61);
        if (_27920 == 0)
        {
            DeRef(_27920);
            _27920 = NOVALUE;
            goto L8; // [135] 162
        }
        else{
            DeRef(_27920);
            _27920 = NOVALUE;
        }
L7: 

        /** parser.e:384					backpatch(branch_list[i], Code[target+1])*/
        _2 = (object)SEQ_PTR(_42branch_list_54361);
        _27921 = (object)*(((s1_ptr)_2)->base + _i_54875);
        _27922 = _target_54871 + 1;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _27923 = (object)*(((s1_ptr)_2)->base + _27922);
        Ref(_27921);
        Ref(_27923);
        _49backpatch(_27921, _27923);
        _27921 = NOVALUE;
        _27923 = NOVALUE;
L8: 
L5: 

        /** parser.e:387		end for*/
        _i_54875 = _i_54875 + -1;
        goto L2; // [165] 28
L3: 
        ;
    }

    /** parser.e:388		branch_list = {}*/
    RefDS(_21928);
    DeRef(_42branch_list_54361);
    _42branch_list_54361 = _21928;

    /** parser.e:389	end procedure*/
    DeRef(_27918);
    _27918 = NOVALUE;
    _27909 = NOVALUE;
    DeRef(_27916);
    _27916 = NOVALUE;
    DeRef(_27912);
    _27912 = NOVALUE;
    DeRef(_27922);
    _27922 = NOVALUE;
    return;
    ;
}


void _42PatchEList(object _base_54923)
{
    object _break_top_54924 = NOVALUE;
    object _n_54925 = NOVALUE;
    object _27940 = NOVALUE;
    object _27939 = NOVALUE;
    object _27938 = NOVALUE;
    object _27934 = NOVALUE;
    object _27933 = NOVALUE;
    object _27932 = NOVALUE;
    object _27930 = NOVALUE;
    object _27929 = NOVALUE;
    object _27927 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:410		if not length(break_list) then*/
    if (IS_SEQUENCE(_42break_list_54381)){
            _27927 = SEQ_PTR(_42break_list_54381)->length;
    }
    else {
        _27927 = 1;
    }
    if (_27927 != 0)
    goto L1; // [10] 19
    _27927 = NOVALUE;

    /** parser.e:411			return*/
    return;
L1: 

    /** parser.e:414		break_top = 0*/
    _break_top_54924 = 0;

    /** parser.e:415		for i=length(break_list) to base+1 by -1 do*/
    if (IS_SEQUENCE(_42break_list_54381)){
            _27929 = SEQ_PTR(_42break_list_54381)->length;
    }
    else {
        _27929 = 1;
    }
    _27930 = _base_54923 + 1;
    if (_27930 > MAXINT){
        _27930 = NewDouble((eudouble)_27930);
    }
    {
        object _i_54930;
        _i_54930 = _27929;
L2: 
        if (binary_op_a(LESS, _i_54930, _27930)){
            goto L3; // [35] 129
        }

        /** parser.e:416			n=break_delay[i]*/
        _2 = (object)SEQ_PTR(_42break_delay_54382);
        if (!IS_ATOM_INT(_i_54930)){
            _n_54925 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54930)->dbl));
        }
        else{
            _n_54925 = (object)*(((s1_ptr)_2)->base + _i_54930);
        }
        if (!IS_ATOM_INT(_n_54925))
        _n_54925 = (object)DBL_PTR(_n_54925)->dbl;

        /** parser.e:417			break_delay[i] -= (n>0)*/
        _27932 = (_n_54925 > 0);
        _2 = (object)SEQ_PTR(_42break_delay_54382);
        if (!IS_ATOM_INT(_i_54930)){
            _27933 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54930)->dbl));
        }
        else{
            _27933 = (object)*(((s1_ptr)_2)->base + _i_54930);
        }
        if (IS_ATOM_INT(_27933)) {
            _27934 = _27933 - _27932;
            if ((object)((uintptr_t)_27934 +(uintptr_t) HIGH_BITS) >= 0){
                _27934 = NewDouble((eudouble)_27934);
            }
        }
        else {
            _27934 = binary_op(MINUS, _27933, _27932);
        }
        _27933 = NOVALUE;
        _27932 = NOVALUE;
        _2 = (object)SEQ_PTR(_42break_delay_54382);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _42break_delay_54382 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_i_54930))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54930)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _i_54930);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27934;
        if( _1 != _27934 ){
            DeRef(_1);
        }
        _27934 = NOVALUE;

        /** parser.e:418			if n>1 then*/
        if (_n_54925 <= 1)
        goto L4; // [72] 93

        /** parser.e:419				if break_top = 0 then*/
        if (_break_top_54924 != 0)
        goto L5; // [78] 122

        /** parser.e:420					break_top = i*/
        Ref(_i_54930);
        _break_top_54924 = _i_54930;
        if (!IS_ATOM_INT(_break_top_54924)) {
            _1 = (object)(DBL_PTR(_break_top_54924)->dbl);
            DeRefDS(_break_top_54924);
            _break_top_54924 = _1;
        }
        goto L5; // [90] 122
L4: 

        /** parser.e:422			elsif n=1 then*/
        if (_n_54925 != 1)
        goto L6; // [95] 121

        /** parser.e:423				backpatch(break_list[i],length(Code)+1)*/
        _2 = (object)SEQ_PTR(_42break_list_54381);
        if (!IS_ATOM_INT(_i_54930)){
            _27938 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54930)->dbl));
        }
        else{
            _27938 = (object)*(((s1_ptr)_2)->base + _i_54930);
        }
        if (IS_SEQUENCE(_39Code_16903)){
                _27939 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _27939 = 1;
        }
        _27940 = _27939 + 1;
        _27939 = NOVALUE;
        _49backpatch(_27938, _27940);
        _27938 = NOVALUE;
        _27940 = NOVALUE;
L6: 
L5: 

        /** parser.e:425		end for*/
        _0 = _i_54930;
        if (IS_ATOM_INT(_i_54930)) {
            _i_54930 = _i_54930 + -1;
            if ((object)((uintptr_t)_i_54930 +(uintptr_t) HIGH_BITS) >= 0){
                _i_54930 = NewDouble((eudouble)_i_54930);
            }
        }
        else {
            _i_54930 = binary_op_a(PLUS, _i_54930, -1);
        }
        DeRef(_0);
        goto L2; // [124] 42
L3: 
        ;
        DeRef(_i_54930);
    }

    /** parser.e:427		if break_top=0 then*/
    if (_break_top_54924 != 0)
    goto L7; // [131] 141

    /** parser.e:428		    break_top=base*/
    _break_top_54924 = _base_54923;
L7: 

    /** parser.e:431		break_delay = break_delay[1..break_top]*/
    rhs_slice_target = (object_ptr)&_42break_delay_54382;
    RHS_Slice(_42break_delay_54382, 1, _break_top_54924);

    /** parser.e:432		break_list = break_list[1..break_top]*/
    rhs_slice_target = (object_ptr)&_42break_list_54381;
    RHS_Slice(_42break_list_54381, 1, _break_top_54924);

    /** parser.e:433	end procedure*/
    DeRef(_27930);
    _27930 = NOVALUE;
    return;
    ;
}


void _42PatchNList(object _base_54954)
{
    object _next_top_54955 = NOVALUE;
    object _n_54956 = NOVALUE;
    object _27957 = NOVALUE;
    object _27956 = NOVALUE;
    object _27955 = NOVALUE;
    object _27951 = NOVALUE;
    object _27950 = NOVALUE;
    object _27949 = NOVALUE;
    object _27947 = NOVALUE;
    object _27946 = NOVALUE;
    object _27944 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:439		if not length(continue_list) then*/
    if (IS_SEQUENCE(_42continue_list_54385)){
            _27944 = SEQ_PTR(_42continue_list_54385)->length;
    }
    else {
        _27944 = 1;
    }
    if (_27944 != 0)
    goto L1; // [10] 19
    _27944 = NOVALUE;

    /** parser.e:440			return*/
    return;
L1: 

    /** parser.e:443		next_top = 0*/
    _next_top_54955 = 0;

    /** parser.e:445		for i=length(continue_list) to base+1 by -1 do*/
    if (IS_SEQUENCE(_42continue_list_54385)){
            _27946 = SEQ_PTR(_42continue_list_54385)->length;
    }
    else {
        _27946 = 1;
    }
    _27947 = _base_54954 + 1;
    if (_27947 > MAXINT){
        _27947 = NewDouble((eudouble)_27947);
    }
    {
        object _i_54961;
        _i_54961 = _27946;
L2: 
        if (binary_op_a(LESS, _i_54961, _27947)){
            goto L3; // [35] 129
        }

        /** parser.e:446			n=continue_delay[i]*/
        _2 = (object)SEQ_PTR(_42continue_delay_54386);
        if (!IS_ATOM_INT(_i_54961)){
            _n_54956 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54961)->dbl));
        }
        else{
            _n_54956 = (object)*(((s1_ptr)_2)->base + _i_54961);
        }
        if (!IS_ATOM_INT(_n_54956))
        _n_54956 = (object)DBL_PTR(_n_54956)->dbl;

        /** parser.e:447			continue_delay[i] -= (n>0)*/
        _27949 = (_n_54956 > 0);
        _2 = (object)SEQ_PTR(_42continue_delay_54386);
        if (!IS_ATOM_INT(_i_54961)){
            _27950 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54961)->dbl));
        }
        else{
            _27950 = (object)*(((s1_ptr)_2)->base + _i_54961);
        }
        if (IS_ATOM_INT(_27950)) {
            _27951 = _27950 - _27949;
            if ((object)((uintptr_t)_27951 +(uintptr_t) HIGH_BITS) >= 0){
                _27951 = NewDouble((eudouble)_27951);
            }
        }
        else {
            _27951 = binary_op(MINUS, _27950, _27949);
        }
        _27950 = NOVALUE;
        _27949 = NOVALUE;
        _2 = (object)SEQ_PTR(_42continue_delay_54386);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _42continue_delay_54386 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_i_54961))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54961)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _i_54961);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27951;
        if( _1 != _27951 ){
            DeRef(_1);
        }
        _27951 = NOVALUE;

        /** parser.e:448			if n>1 then*/
        if (_n_54956 <= 1)
        goto L4; // [72] 93

        /** parser.e:449				if next_top = 0 then*/
        if (_next_top_54955 != 0)
        goto L5; // [78] 122

        /** parser.e:450					next_top = i*/
        Ref(_i_54961);
        _next_top_54955 = _i_54961;
        if (!IS_ATOM_INT(_next_top_54955)) {
            _1 = (object)(DBL_PTR(_next_top_54955)->dbl);
            DeRefDS(_next_top_54955);
            _next_top_54955 = _1;
        }
        goto L5; // [90] 122
L4: 

        /** parser.e:452			elsif n=1 then*/
        if (_n_54956 != 1)
        goto L6; // [95] 121

        /** parser.e:453				backpatch(continue_list[i],length(Code)+1)*/
        _2 = (object)SEQ_PTR(_42continue_list_54385);
        if (!IS_ATOM_INT(_i_54961)){
            _27955 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54961)->dbl));
        }
        else{
            _27955 = (object)*(((s1_ptr)_2)->base + _i_54961);
        }
        if (IS_SEQUENCE(_39Code_16903)){
                _27956 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _27956 = 1;
        }
        _27957 = _27956 + 1;
        _27956 = NOVALUE;
        _49backpatch(_27955, _27957);
        _27955 = NOVALUE;
        _27957 = NOVALUE;
L6: 
L5: 

        /** parser.e:455		end for*/
        _0 = _i_54961;
        if (IS_ATOM_INT(_i_54961)) {
            _i_54961 = _i_54961 + -1;
            if ((object)((uintptr_t)_i_54961 +(uintptr_t) HIGH_BITS) >= 0){
                _i_54961 = NewDouble((eudouble)_i_54961);
            }
        }
        else {
            _i_54961 = binary_op_a(PLUS, _i_54961, -1);
        }
        DeRef(_0);
        goto L2; // [124] 42
L3: 
        ;
        DeRef(_i_54961);
    }

    /** parser.e:457		if next_top=0 then*/
    if (_next_top_54955 != 0)
    goto L7; // [131] 141

    /** parser.e:458		    next_top=base*/
    _next_top_54955 = _base_54954;
L7: 

    /** parser.e:461		continue_delay =continue_delay[1..next_top]*/
    rhs_slice_target = (object_ptr)&_42continue_delay_54386;
    RHS_Slice(_42continue_delay_54386, 1, _next_top_54955);

    /** parser.e:462		continue_list = continue_list[1..next_top]*/
    rhs_slice_target = (object_ptr)&_42continue_list_54385;
    RHS_Slice(_42continue_list_54385, 1, _next_top_54955);

    /** parser.e:463	end procedure*/
    DeRef(_27947);
    _27947 = NOVALUE;
    return;
    ;
}


void _42PatchXList(object _base_54985)
{
    object _exit_top_54986 = NOVALUE;
    object _n_54987 = NOVALUE;
    object _27974 = NOVALUE;
    object _27973 = NOVALUE;
    object _27972 = NOVALUE;
    object _27968 = NOVALUE;
    object _27967 = NOVALUE;
    object _27966 = NOVALUE;
    object _27964 = NOVALUE;
    object _27963 = NOVALUE;
    object _27961 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:469		if not length(exit_list) then*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _27961 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _27961 = 1;
    }
    if (_27961 != 0)
    goto L1; // [10] 19
    _27961 = NOVALUE;

    /** parser.e:470			return*/
    return;
L1: 

    /** parser.e:473		exit_top = 0*/
    _exit_top_54986 = 0;

    /** parser.e:475		for i=length(exit_list) to base+1 by -1 do*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _27963 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _27963 = 1;
    }
    _27964 = _base_54985 + 1;
    if (_27964 > MAXINT){
        _27964 = NewDouble((eudouble)_27964);
    }
    {
        object _i_54992;
        _i_54992 = _27963;
L2: 
        if (binary_op_a(LESS, _i_54992, _27964)){
            goto L3; // [35] 129
        }

        /** parser.e:476			n=exit_delay[i]*/
        _2 = (object)SEQ_PTR(_42exit_delay_54384);
        if (!IS_ATOM_INT(_i_54992)){
            _n_54987 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54992)->dbl));
        }
        else{
            _n_54987 = (object)*(((s1_ptr)_2)->base + _i_54992);
        }
        if (!IS_ATOM_INT(_n_54987))
        _n_54987 = (object)DBL_PTR(_n_54987)->dbl;

        /** parser.e:477			exit_delay[i] -= (n>0)*/
        _27966 = (_n_54987 > 0);
        _2 = (object)SEQ_PTR(_42exit_delay_54384);
        if (!IS_ATOM_INT(_i_54992)){
            _27967 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54992)->dbl));
        }
        else{
            _27967 = (object)*(((s1_ptr)_2)->base + _i_54992);
        }
        if (IS_ATOM_INT(_27967)) {
            _27968 = _27967 - _27966;
            if ((object)((uintptr_t)_27968 +(uintptr_t) HIGH_BITS) >= 0){
                _27968 = NewDouble((eudouble)_27968);
            }
        }
        else {
            _27968 = binary_op(MINUS, _27967, _27966);
        }
        _27967 = NOVALUE;
        _27966 = NOVALUE;
        _2 = (object)SEQ_PTR(_42exit_delay_54384);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _42exit_delay_54384 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_i_54992))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54992)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _i_54992);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _27968;
        if( _1 != _27968 ){
            DeRef(_1);
        }
        _27968 = NOVALUE;

        /** parser.e:478			if n>1 then*/
        if (_n_54987 <= 1)
        goto L4; // [72] 93

        /** parser.e:479				if exit_top = 0 then*/
        if (_exit_top_54986 != 0)
        goto L5; // [78] 122

        /** parser.e:480					exit_top = i*/
        Ref(_i_54992);
        _exit_top_54986 = _i_54992;
        if (!IS_ATOM_INT(_exit_top_54986)) {
            _1 = (object)(DBL_PTR(_exit_top_54986)->dbl);
            DeRefDS(_exit_top_54986);
            _exit_top_54986 = _1;
        }
        goto L5; // [90] 122
L4: 

        /** parser.e:482			elsif n=1 then*/
        if (_n_54987 != 1)
        goto L6; // [95] 121

        /** parser.e:483				backpatch(exit_list[i],length(Code)+1)*/
        _2 = (object)SEQ_PTR(_42exit_list_54383);
        if (!IS_ATOM_INT(_i_54992)){
            _27972 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_54992)->dbl));
        }
        else{
            _27972 = (object)*(((s1_ptr)_2)->base + _i_54992);
        }
        if (IS_SEQUENCE(_39Code_16903)){
                _27973 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _27973 = 1;
        }
        _27974 = _27973 + 1;
        _27973 = NOVALUE;
        _49backpatch(_27972, _27974);
        _27972 = NOVALUE;
        _27974 = NOVALUE;
L6: 
L5: 

        /** parser.e:485		end for*/
        _0 = _i_54992;
        if (IS_ATOM_INT(_i_54992)) {
            _i_54992 = _i_54992 + -1;
            if ((object)((uintptr_t)_i_54992 +(uintptr_t) HIGH_BITS) >= 0){
                _i_54992 = NewDouble((eudouble)_i_54992);
            }
        }
        else {
            _i_54992 = binary_op_a(PLUS, _i_54992, -1);
        }
        DeRef(_0);
        goto L2; // [124] 42
L3: 
        ;
        DeRef(_i_54992);
    }

    /** parser.e:487		if exit_top=0 then*/
    if (_exit_top_54986 != 0)
    goto L7; // [131] 141

    /** parser.e:488		    exit_top=base*/
    _exit_top_54986 = _base_54985;
L7: 

    /** parser.e:491		exit_delay = exit_delay [1..exit_top]*/
    rhs_slice_target = (object_ptr)&_42exit_delay_54384;
    RHS_Slice(_42exit_delay_54384, 1, _exit_top_54986);

    /** parser.e:492		exit_list = exit_list [1..exit_top]*/
    rhs_slice_target = (object_ptr)&_42exit_list_54383;
    RHS_Slice(_42exit_list_54383, 1, _exit_top_54986);

    /** parser.e:493	end procedure*/
    DeRef(_27964);
    _27964 = NOVALUE;
    return;
    ;
}


void _42putback(object _t_55017)
{
    object _27979 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:497		backed_up_tok = append(backed_up_tok, t)*/
    Ref(_t_55017);
    Append(&_42backed_up_tok_54370, _42backed_up_tok_54370, _t_55017);

    /** parser.e:499		if t[T_SYM] then*/
    _2 = (object)SEQ_PTR(_t_55017);
    _27979 = (object)*(((s1_ptr)_2)->base + 2);
    if (_27979 == 0) {
        _27979 = NOVALUE;
        goto L1; // [17] 79
    }
    else {
        if (!IS_ATOM_INT(_27979) && DBL_PTR(_27979)->dbl == 0.0){
            _27979 = NOVALUE;
            goto L1; // [17] 79
        }
        _27979 = NOVALUE;
    }
    _27979 = NOVALUE;

    /** parser.e:500			putback_ForwardLine     = ForwardLine*/
    Ref(_52ForwardLine_48711);
    DeRef(_52putback_ForwardLine_48712);
    _52putback_ForwardLine_48712 = _52ForwardLine_48711;

    /** parser.e:501			putback_forward_bp      = forward_bp*/
    _52putback_forward_bp_48716 = _52forward_bp_48715;

    /** parser.e:502			putback_fwd_line_number = fwd_line_number*/
    _39putback_fwd_line_number_16818 = _39fwd_line_number_16817;

    /** parser.e:504			if last_fwd_line_number then*/
    if (_39last_fwd_line_number_16819 == 0)
    {
        goto L2; // [49] 78
    }
    else{
    }

    /** parser.e:505				ForwardLine     = last_ForwardLine*/
    Ref(_52last_ForwardLine_48713);
    DeRef(_52ForwardLine_48711);
    _52ForwardLine_48711 = _52last_ForwardLine_48713;

    /** parser.e:506				forward_bp      = last_forward_bp*/
    _52forward_bp_48715 = _52last_forward_bp_48717;

    /** parser.e:507				fwd_line_number = last_fwd_line_number*/
    _39fwd_line_number_16817 = _39last_fwd_line_number_16819;
L2: 
L1: 

    /** parser.e:510	end procedure*/
    DeRef(_t_55017);
    return;
    ;
}


void _42start_recording()
{
    object _0, _1, _2;
    

    /** parser.e:519		psm_stack &= Parser_mode*/
    Append(&_42psm_stack_55036, _42psm_stack_55036, _39Parser_mode_16920);

    /** parser.e:520		can_stack = append(can_stack,canned_tokens)*/
    Ref(_42canned_tokens_54407);
    Append(&_42can_stack_55037, _42can_stack_55037, _42canned_tokens_54407);

    /** parser.e:521		idx_stack &= canned_index*/
    Append(&_42idx_stack_55038, _42idx_stack_55038, _42canned_index_54408);

    /** parser.e:522		tok_stack = append(tok_stack,backed_up_tok)*/
    RefDS(_42backed_up_tok_54370);
    Append(&_42tok_stack_55039, _42tok_stack_55039, _42backed_up_tok_54370);

    /** parser.e:523		canned_tokens = {}*/
    RefDS(_21928);
    DeRef(_42canned_tokens_54407);
    _42canned_tokens_54407 = _21928;

    /** parser.e:524		Parser_mode = PAM_RECORD*/
    _39Parser_mode_16920 = 1;

    /** parser.e:525		clear_last()*/
    _49clear_last();

    /** parser.e:526	end procedure*/
    return;
    ;
}


object _42restore_parser()
{
    object _n_55052 = NOVALUE;
    object _tok_55053 = NOVALUE;
    object _x_55054 = NOVALUE;
    object _28010 = NOVALUE;
    object _28009 = NOVALUE;
    object _28008 = NOVALUE;
    object _28006 = NOVALUE;
    object _28002 = NOVALUE;
    object _28001 = NOVALUE;
    object _27999 = NOVALUE;
    object _27997 = NOVALUE;
    object _27996 = NOVALUE;
    object _27994 = NOVALUE;
    object _27992 = NOVALUE;
    object _27991 = NOVALUE;
    object _27989 = NOVALUE;
    object _27987 = NOVALUE;
    object _27986 = NOVALUE;
    object _27984 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:533		n=Parser_mode*/
    _n_55052 = _39Parser_mode_16920;

    /** parser.e:534		x = canned_tokens*/
    Ref(_42canned_tokens_54407);
    DeRef(_x_55054);
    _x_55054 = _42canned_tokens_54407;

    /** parser.e:535		canned_tokens = can_stack[$]*/
    if (IS_SEQUENCE(_42can_stack_55037)){
            _27984 = SEQ_PTR(_42can_stack_55037)->length;
    }
    else {
        _27984 = 1;
    }
    DeRef(_42canned_tokens_54407);
    _2 = (object)SEQ_PTR(_42can_stack_55037);
    _42canned_tokens_54407 = (object)*(((s1_ptr)_2)->base + _27984);
    Ref(_42canned_tokens_54407);

    /** parser.e:536		can_stack     = can_stack[1..$-1]*/
    if (IS_SEQUENCE(_42can_stack_55037)){
            _27986 = SEQ_PTR(_42can_stack_55037)->length;
    }
    else {
        _27986 = 1;
    }
    _27987 = _27986 - 1;
    _27986 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42can_stack_55037;
    RHS_Slice(_42can_stack_55037, 1, _27987);

    /** parser.e:537		canned_index  = idx_stack[$]*/
    if (IS_SEQUENCE(_42idx_stack_55038)){
            _27989 = SEQ_PTR(_42idx_stack_55038)->length;
    }
    else {
        _27989 = 1;
    }
    _2 = (object)SEQ_PTR(_42idx_stack_55038);
    _42canned_index_54408 = (object)*(((s1_ptr)_2)->base + _27989);

    /** parser.e:538		idx_stack     = idx_stack[1..$-1]*/
    if (IS_SEQUENCE(_42idx_stack_55038)){
            _27991 = SEQ_PTR(_42idx_stack_55038)->length;
    }
    else {
        _27991 = 1;
    }
    _27992 = _27991 - 1;
    _27991 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42idx_stack_55038;
    RHS_Slice(_42idx_stack_55038, 1, _27992);

    /** parser.e:539		Parser_mode   = psm_stack[$]*/
    if (IS_SEQUENCE(_42psm_stack_55036)){
            _27994 = SEQ_PTR(_42psm_stack_55036)->length;
    }
    else {
        _27994 = 1;
    }
    _2 = (object)SEQ_PTR(_42psm_stack_55036);
    _39Parser_mode_16920 = (object)*(((s1_ptr)_2)->base + _27994);

    /** parser.e:540		psm_stack     = psm_stack[1..$-1]*/
    if (IS_SEQUENCE(_42psm_stack_55036)){
            _27996 = SEQ_PTR(_42psm_stack_55036)->length;
    }
    else {
        _27996 = 1;
    }
    _27997 = _27996 - 1;
    _27996 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42psm_stack_55036;
    RHS_Slice(_42psm_stack_55036, 1, _27997);

    /** parser.e:541		tok 		  = tok_stack[$]*/
    if (IS_SEQUENCE(_42tok_stack_55039)){
            _27999 = SEQ_PTR(_42tok_stack_55039)->length;
    }
    else {
        _27999 = 1;
    }
    DeRef(_tok_55053);
    _2 = (object)SEQ_PTR(_42tok_stack_55039);
    _tok_55053 = (object)*(((s1_ptr)_2)->base + _27999);
    RefDS(_tok_55053);

    /** parser.e:542		tok_stack 	  = tok_stack[1..$-1]*/
    if (IS_SEQUENCE(_42tok_stack_55039)){
            _28001 = SEQ_PTR(_42tok_stack_55039)->length;
    }
    else {
        _28001 = 1;
    }
    _28002 = _28001 - 1;
    _28001 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42tok_stack_55039;
    RHS_Slice(_42tok_stack_55039, 1, _28002);

    /** parser.e:543		clear_last()*/
    _49clear_last();

    /** parser.e:544		if n=PAM_PLAYBACK then*/
    if (_n_55052 != -1)
    goto L1; // [137] 150

    /** parser.e:545			return {}*/
    RefDS(_21928);
    DeRefDS(_tok_55053);
    DeRefDS(_x_55054);
    _27997 = NOVALUE;
    _27992 = NOVALUE;
    _27987 = NOVALUE;
    _28002 = NOVALUE;
    return _21928;
    goto L2; // [147] 167
L1: 

    /** parser.e:547		elsif n = PAM_NORMAL then*/
    if (_n_55052 != 0)
    goto L3; // [154] 166

    /** parser.e:548			use_private_list = 0*/
    _39use_private_list_16928 = 0;
L3: 
L2: 

    /** parser.e:550		if length(backed_up_tok) > 0 then*/
    if (IS_SEQUENCE(_42backed_up_tok_54370)){
            _28006 = SEQ_PTR(_42backed_up_tok_54370)->length;
    }
    else {
        _28006 = 1;
    }
    if (_28006 <= 0)
    goto L4; // [174] 199

    /** parser.e:551			return x[1..$-1]*/
    if (IS_SEQUENCE(_x_55054)){
            _28008 = SEQ_PTR(_x_55054)->length;
    }
    else {
        _28008 = 1;
    }
    _28009 = _28008 - 1;
    _28008 = NOVALUE;
    rhs_slice_target = (object_ptr)&_28010;
    RHS_Slice(_x_55054, 1, _28009);
    DeRef(_tok_55053);
    DeRefDS(_x_55054);
    DeRef(_27997);
    _27997 = NOVALUE;
    DeRef(_27992);
    _27992 = NOVALUE;
    DeRef(_27987);
    _27987 = NOVALUE;
    DeRef(_28002);
    _28002 = NOVALUE;
    _28009 = NOVALUE;
    return _28010;
    goto L5; // [196] 206
L4: 

    /** parser.e:553			return x*/
    DeRef(_tok_55053);
    DeRef(_27997);
    _27997 = NOVALUE;
    DeRef(_27992);
    _27992 = NOVALUE;
    DeRef(_27987);
    _27987 = NOVALUE;
    DeRef(_28002);
    _28002 = NOVALUE;
    DeRef(_28009);
    _28009 = NOVALUE;
    DeRef(_28010);
    _28010 = NOVALUE;
    return _x_55054;
L5: 
    ;
}


void _42start_playback(object _s_55094)
{
    object _0, _1, _2;
    

    /** parser.e:558		psm_stack &= Parser_mode*/
    Append(&_42psm_stack_55036, _42psm_stack_55036, _39Parser_mode_16920);

    /** parser.e:559		can_stack = append(can_stack,canned_tokens)*/
    Ref(_42canned_tokens_54407);
    Append(&_42can_stack_55037, _42can_stack_55037, _42canned_tokens_54407);

    /** parser.e:560		idx_stack &= canned_index*/
    Append(&_42idx_stack_55038, _42idx_stack_55038, _42canned_index_54408);

    /** parser.e:561		tok_stack = append(tok_stack,backed_up_tok)*/
    RefDS(_42backed_up_tok_54370);
    Append(&_42tok_stack_55039, _42tok_stack_55039, _42backed_up_tok_54370);

    /** parser.e:562		canned_index = 1*/
    _42canned_index_54408 = 1;

    /** parser.e:563		canned_tokens = s*/
    RefDS(_s_55094);
    DeRef(_42canned_tokens_54407);
    _42canned_tokens_54407 = _s_55094;

    /** parser.e:564		backed_up_tok = {}*/
    RefDS(_21928);
    DeRefDS(_42backed_up_tok_54370);
    _42backed_up_tok_54370 = _21928;

    /** parser.e:565		Parser_mode = PAM_PLAYBACK*/
    _39Parser_mode_16920 = -1;

    /** parser.e:566	end procedure*/
    DeRefDS(_s_55094);
    return;
    ;
}


void _42restore_parseargs_states()
{
    object _s_55113 = NOVALUE;
    object _n_55114 = NOVALUE;
    object _28027 = NOVALUE;
    object _28026 = NOVALUE;
    object _28018 = NOVALUE;
    object _28017 = NOVALUE;
    object _28015 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:584		s = parseargs_states[$]*/
    if (IS_SEQUENCE(_42parseargs_states_55102)){
            _28015 = SEQ_PTR(_42parseargs_states_55102)->length;
    }
    else {
        _28015 = 1;
    }
    DeRef(_s_55113);
    _2 = (object)SEQ_PTR(_42parseargs_states_55102);
    _s_55113 = (object)*(((s1_ptr)_2)->base + _28015);
    RefDS(_s_55113);

    /** parser.e:585		parseargs_states = parseargs_states[1..$-1]*/
    if (IS_SEQUENCE(_42parseargs_states_55102)){
            _28017 = SEQ_PTR(_42parseargs_states_55102)->length;
    }
    else {
        _28017 = 1;
    }
    _28018 = _28017 - 1;
    _28017 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42parseargs_states_55102;
    RHS_Slice(_42parseargs_states_55102, 1, _28018);

    /** parser.e:586		n=s[PS_POSITION]*/
    _2 = (object)SEQ_PTR(_s_55113);
    _n_55114 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_n_55114))
    _n_55114 = (object)DBL_PTR(_n_55114)->dbl;

    /** parser.e:587		private_list = private_list[1..n]*/
    rhs_slice_target = (object_ptr)&_42private_list_55107;
    RHS_Slice(_42private_list_55107, 1, _n_55114);

    /** parser.e:588		private_sym = private_sym[1..n]*/
    rhs_slice_target = (object_ptr)&_39private_sym_16927;
    RHS_Slice(_39private_sym_16927, 1, _n_55114);

    /** parser.e:589		lock_scanner = s[PS_SCAN_LOCK]*/
    _2 = (object)SEQ_PTR(_s_55113);
    _42lock_scanner_55108 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_42lock_scanner_55108))
    _42lock_scanner_55108 = (object)DBL_PTR(_42lock_scanner_55108)->dbl;

    /** parser.e:590		use_private_list = s[PS_USE_LIST]*/
    _2 = (object)SEQ_PTR(_s_55113);
    _39use_private_list_16928 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_39use_private_list_16928)){
        _39use_private_list_16928 = (object)DBL_PTR(_39use_private_list_16928)->dbl;
    }

    /** parser.e:591		on_arg = s[PS_ON_ARG]*/
    _2 = (object)SEQ_PTR(_s_55113);
    _42on_arg_55109 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_42on_arg_55109))
    _42on_arg_55109 = (object)DBL_PTR(_42on_arg_55109)->dbl;

    /** parser.e:592		nested_calls = nested_calls[1..$-1]*/
    if (IS_SEQUENCE(_42nested_calls_55110)){
            _28026 = SEQ_PTR(_42nested_calls_55110)->length;
    }
    else {
        _28026 = 1;
    }
    _28027 = _28026 - 1;
    _28026 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42nested_calls_55110;
    RHS_Slice(_42nested_calls_55110, 1, _28027);

    /** parser.e:593	end procedure*/
    DeRefDS(_s_55113);
    _28027 = NOVALUE;
    _28018 = NOVALUE;
    return;
    ;
}


object _42read_recorded_token(object _n_55134)
{
    object _t_55136 = NOVALUE;
    object _p_55137 = NOVALUE;
    object _prev_Nne_55138 = NOVALUE;
    object _ts_55167 = NOVALUE;
    object _31687 = NOVALUE;
    object _31686 = NOVALUE;
    object _31685 = NOVALUE;
    object _31684 = NOVALUE;
    object _31683 = NOVALUE;
    object _31682 = NOVALUE;
    object _31681 = NOVALUE;
    object _31680 = NOVALUE;
    object _28101 = NOVALUE;
    object _28100 = NOVALUE;
    object _28099 = NOVALUE;
    object _28098 = NOVALUE;
    object _28094 = NOVALUE;
    object _28092 = NOVALUE;
    object _28091 = NOVALUE;
    object _28090 = NOVALUE;
    object _28089 = NOVALUE;
    object _28087 = NOVALUE;
    object _28086 = NOVALUE;
    object _28084 = NOVALUE;
    object _28083 = NOVALUE;
    object _28081 = NOVALUE;
    object _28078 = NOVALUE;
    object _28076 = NOVALUE;
    object _28074 = NOVALUE;
    object _28073 = NOVALUE;
    object _28072 = NOVALUE;
    object _28071 = NOVALUE;
    object _28068 = NOVALUE;
    object _28066 = NOVALUE;
    object _28062 = NOVALUE;
    object _28060 = NOVALUE;
    object _28058 = NOVALUE;
    object _28057 = NOVALUE;
    object _28056 = NOVALUE;
    object _28055 = NOVALUE;
    object _28054 = NOVALUE;
    object _28053 = NOVALUE;
    object _28052 = NOVALUE;
    object _28051 = NOVALUE;
    object _28050 = NOVALUE;
    object _28049 = NOVALUE;
    object _28048 = NOVALUE;
    object _28047 = NOVALUE;
    object _28045 = NOVALUE;
    object _28044 = NOVALUE;
    object _28042 = NOVALUE;
    object _28041 = NOVALUE;
    object _28040 = NOVALUE;
    object _28039 = NOVALUE;
    object _28038 = NOVALUE;
    object _28037 = NOVALUE;
    object _28036 = NOVALUE;
    object _28035 = NOVALUE;
    object _28032 = NOVALUE;
    object _28030 = NOVALUE;
    object _28029 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_n_55134)) {
        _1 = (object)(DBL_PTR(_n_55134)->dbl);
        DeRefDS(_n_55134);
        _n_55134 = _1;
    }

    /** parser.e:597		integer p, prev_Nne*/

    /** parser.e:598		if atom(Ns_recorded[n]) label "top if" then*/
    _2 = (object)SEQ_PTR(_39Ns_recorded_16922);
    _28029 = (object)*(((s1_ptr)_2)->base + _n_55134);
    _28030 = IS_ATOM(_28029);
    _28029 = NOVALUE;
    if (_28030 == 0)
    {
        _28030 = NOVALUE;
        goto L1; // [16] 403
    }
    else{
        _28030 = NOVALUE;
    }

    /** parser.e:599			if use_private_list then*/
    if (_39use_private_list_16928 == 0)
    {
        goto L2; // [23] 171
    }
    else{
    }

    /** parser.e:600				p = find( Recorded[n], private_list)*/
    _2 = (object)SEQ_PTR(_39Recorded_16921);
    _28032 = (object)*(((s1_ptr)_2)->base + _n_55134);
    _p_55137 = find_from(_28032, _42private_list_55107, 1);
    _28032 = NOVALUE;

    /** parser.e:601				if p > 0 then -- the value of this parameter is known, use it*/
    if (_p_55137 <= 0)
    goto L3; // [43] 170

    /** parser.e:603					if TRANSLATE*/
    if (_39TRANSLATE_16440 == 0) {
        goto L4; // [51] 150
    }
    _2 = (object)SEQ_PTR(_39private_sym_16927);
    _28036 = (object)*(((s1_ptr)_2)->base + _p_55137);
    if (IS_ATOM_INT(_28036)) {
        _28037 = (_28036 < 0);
    }
    else {
        _28037 = binary_op(LESS, _28036, 0);
    }
    _28036 = NOVALUE;
    if (IS_ATOM_INT(_28037)) {
        if (_28037 != 0) {
            _28038 = 1;
            goto L5; // [65] 97
        }
    }
    else {
        if (DBL_PTR(_28037)->dbl != 0.0) {
            _28038 = 1;
            goto L5; // [65] 97
        }
    }
    _2 = (object)SEQ_PTR(_39private_sym_16927);
    _28039 = (object)*(((s1_ptr)_2)->base + _p_55137);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28039)){
        _28040 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28039)->dbl));
    }
    else{
        _28040 = (object)*(((s1_ptr)_2)->base + _28039);
    }
    _2 = (object)SEQ_PTR(_28040);
    _28041 = (object)*(((s1_ptr)_2)->base + 3);
    _28040 = NOVALUE;
    if (IS_ATOM_INT(_28041)) {
        _28042 = (_28041 == 3);
    }
    else {
        _28042 = binary_op(EQUALS, _28041, 3);
    }
    _28041 = NOVALUE;
    DeRef(_28038);
    if (IS_ATOM_INT(_28042))
    _28038 = (_28042 != 0);
    else
    _28038 = DBL_PTR(_28042)->dbl != 0.0;
L5: 
    if (_28038 == 0)
    {
        _28038 = NOVALUE;
        goto L4; // [98] 150
    }
    else{
        _28038 = NOVALUE;
    }

    /** parser.e:610						symtab_index ts = NewTempSym()*/
    _ts_55167 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_ts_55167)) {
        _1 = (object)(DBL_PTR(_ts_55167)->dbl);
        DeRefDS(_ts_55167);
        _ts_55167 = _1;
    }

    /** parser.e:611						Code &= { ASSIGN, private_sym[p], ts }*/
    _2 = (object)SEQ_PTR(_39private_sym_16927);
    _28044 = (object)*(((s1_ptr)_2)->base + _p_55137);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 18;
    Ref(_28044);
    ((intptr_t*)_2)[2] = _28044;
    ((intptr_t*)_2)[3] = _ts_55167;
    _28045 = MAKE_SEQ(_1);
    _28044 = NOVALUE;
    Concat((object_ptr)&_39Code_16903, _39Code_16903, _28045);
    DeRefDS(_28045);
    _28045 = NOVALUE;

    /** parser.e:612						return {VARIABLE, ts}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _ts_55167;
    _28047 = MAKE_SEQ(_1);
    DeRef(_t_55136);
    _28039 = NOVALUE;
    DeRef(_28042);
    _28042 = NOVALUE;
    DeRef(_28037);
    _28037 = NOVALUE;
    return _28047;
    goto L6; // [147] 169
L4: 

    /** parser.e:614						return {VARIABLE, private_sym[p]}*/
    _2 = (object)SEQ_PTR(_39private_sym_16927);
    _28048 = (object)*(((s1_ptr)_2)->base + _p_55137);
    Ref(_28048);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _28048;
    _28049 = MAKE_SEQ(_1);
    _28048 = NOVALUE;
    DeRef(_t_55136);
    _28039 = NOVALUE;
    DeRef(_28042);
    _28042 = NOVALUE;
    DeRef(_28037);
    _28037 = NOVALUE;
    DeRef(_28047);
    _28047 = NOVALUE;
    return _28049;
L6: 
L3: 
L2: 

    /** parser.e:620			prev_Nne = No_new_entry*/
    _prev_Nne_55138 = _56No_new_entry_47455;

    /** parser.e:621			No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** parser.e:623			if Recorded_sym[n] > 0 and  sym_scope( Recorded_sym[n] ) != SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_39Recorded_sym_16923);
    _28050 = (object)*(((s1_ptr)_2)->base + _n_55134);
    if (IS_ATOM_INT(_28050)) {
        _28051 = (_28050 > 0);
    }
    else {
        _28051 = binary_op(GREATER, _28050, 0);
    }
    _28050 = NOVALUE;
    if (IS_ATOM_INT(_28051)) {
        if (_28051 == 0) {
            goto L7; // [199] 250
        }
    }
    else {
        if (DBL_PTR(_28051)->dbl == 0.0) {
            goto L7; // [199] 250
        }
    }
    _2 = (object)SEQ_PTR(_39Recorded_sym_16923);
    _28053 = (object)*(((s1_ptr)_2)->base + _n_55134);
    Ref(_28053);
    _28054 = _56sym_scope(_28053);
    _28053 = NOVALUE;
    if (IS_ATOM_INT(_28054)) {
        _28055 = (_28054 != 9);
    }
    else {
        _28055 = binary_op(NOTEQ, _28054, 9);
    }
    DeRef(_28054);
    _28054 = NOVALUE;
    if (_28055 == 0) {
        DeRef(_28055);
        _28055 = NOVALUE;
        goto L7; // [220] 250
    }
    else {
        if (!IS_ATOM_INT(_28055) && DBL_PTR(_28055)->dbl == 0.0){
            DeRef(_28055);
            _28055 = NOVALUE;
            goto L7; // [220] 250
        }
        DeRef(_28055);
        _28055 = NOVALUE;
    }
    DeRef(_28055);
    _28055 = NOVALUE;

    /** parser.e:624				t = { sym_token( Recorded_sym[n] ), Recorded_sym[n] }*/
    _2 = (object)SEQ_PTR(_39Recorded_sym_16923);
    _28056 = (object)*(((s1_ptr)_2)->base + _n_55134);
    Ref(_28056);
    _28057 = _56sym_token(_28056);
    _28056 = NOVALUE;
    _2 = (object)SEQ_PTR(_39Recorded_sym_16923);
    _28058 = (object)*(((s1_ptr)_2)->base + _n_55134);
    Ref(_28058);
    DeRef(_t_55136);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _28057;
    ((intptr_t *)_2)[2] = _28058;
    _t_55136 = MAKE_SEQ(_1);
    _28058 = NOVALUE;
    _28057 = NOVALUE;

    /** parser.e:625				break "top if"*/
    goto L8; // [247] 728
L7: 

    /** parser.e:628			t = keyfind(Recorded[n],-1)*/
    _2 = (object)SEQ_PTR(_39Recorded_16921);
    _28060 = (object)*(((s1_ptr)_2)->base + _n_55134);
    RefDS(_28060);
    DeRef(_31686);
    _31686 = _28060;
    _31687 = _56hashfn(_31686);
    _31686 = NOVALUE;
    RefDS(_28060);
    _0 = _t_55136;
    _t_55136 = _56keyfind(_28060, -1, _39current_file_no_16815, 0, _31687);
    DeRef(_0);
    _28060 = NOVALUE;
    _31687 = NOVALUE;

    /** parser.e:629			if t[T_ID] = IGNORED then*/
    _2 = (object)SEQ_PTR(_t_55136);
    _28062 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28062, 509)){
        _28062 = NOVALUE;
        goto L8; // [286] 728
    }
    _28062 = NOVALUE;

    /** parser.e:630		        p = Recorded_sym[n]*/
    _2 = (object)SEQ_PTR(_39Recorded_sym_16923);
    _p_55137 = (object)*(((s1_ptr)_2)->base + _n_55134);
    if (!IS_ATOM_INT(_p_55137)){
        _p_55137 = (object)DBL_PTR(_p_55137)->dbl;
    }

    /** parser.e:631		        if p = 0 then*/
    if (_p_55137 != 0)
    goto L9; // [302] 380

    /** parser.e:633					No_new_entry = 0*/
    _56No_new_entry_47455 = 0;

    /** parser.e:634					t = keyfind( Recorded[n], -1 )*/
    _2 = (object)SEQ_PTR(_39Recorded_16921);
    _28066 = (object)*(((s1_ptr)_2)->base + _n_55134);
    RefDS(_28066);
    DeRef(_31684);
    _31684 = _28066;
    _31685 = _56hashfn(_31684);
    _31684 = NOVALUE;
    RefDS(_28066);
    _0 = _t_55136;
    _t_55136 = _56keyfind(_28066, -1, _39current_file_no_16815, 0, _31685);
    DeRef(_0);
    _28066 = NOVALUE;
    _31685 = NOVALUE;

    /** parser.e:635					No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** parser.e:636					if t[T_ID] = IGNORED then*/
    _2 = (object)SEQ_PTR(_t_55136);
    _28068 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28068, 509)){
        _28068 = NOVALUE;
        goto L8; // [355] 728
    }
    _28068 = NOVALUE;

    /** parser.e:637						CompileErr(157,{Recorded[n]})*/
    _2 = (object)SEQ_PTR(_39Recorded_16921);
    _28071 = (object)*(((s1_ptr)_2)->base + _n_55134);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_28071);
    ((intptr_t*)_2)[1] = _28071;
    _28072 = MAKE_SEQ(_1);
    _28071 = NOVALUE;
    _52CompileErr(157, _28072, 0);
    _28072 = NOVALUE;
    goto L8; // [377] 728
L9: 

    /** parser.e:640					t = {SymTab[p][S_TOKEN], p}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28073 = (object)*(((s1_ptr)_2)->base + _p_55137);
    _2 = (object)SEQ_PTR(_28073);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _28074 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _28074 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _28073 = NOVALUE;
    Ref(_28074);
    DeRef(_t_55136);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _28074;
    ((intptr_t *)_2)[2] = _p_55137;
    _t_55136 = MAKE_SEQ(_1);
    _28074 = NOVALUE;
    goto L8; // [400] 728
L1: 

    /** parser.e:644			prev_Nne = No_new_entry*/
    _prev_Nne_55138 = _56No_new_entry_47455;

    /** parser.e:645			No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** parser.e:646			t = keyfind(Ns_recorded[n],-1, , 1)*/
    _2 = (object)SEQ_PTR(_39Ns_recorded_16922);
    _28076 = (object)*(((s1_ptr)_2)->base + _n_55134);
    Ref(_28076);
    DeRef(_31682);
    _31682 = _28076;
    _31683 = _56hashfn(_31682);
    _31682 = NOVALUE;
    Ref(_28076);
    _0 = _t_55136;
    _t_55136 = _56keyfind(_28076, -1, _39current_file_no_16815, 1, _31683);
    DeRef(_0);
    _28076 = NOVALUE;
    _31683 = NOVALUE;

    /** parser.e:647			if t[T_ID] != NAMESPACE then*/
    _2 = (object)SEQ_PTR(_t_55136);
    _28078 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _28078, 523)){
        _28078 = NOVALUE;
        goto LA; // [454] 520
    }
    _28078 = NOVALUE;

    /** parser.e:648				p = Ns_recorded_sym[n]*/
    _2 = (object)SEQ_PTR(_39Ns_recorded_sym_16924);
    _p_55137 = (object)*(((s1_ptr)_2)->base + _n_55134);
    if (!IS_ATOM_INT(_p_55137)){
        _p_55137 = (object)DBL_PTR(_p_55137)->dbl;
    }

    /** parser.e:649				if p = 0 or sym_token( p ) != NAMESPACE then*/
    _28081 = (_p_55137 == 0);
    if (_28081 != 0) {
        goto LB; // [474] 493
    }
    _28083 = _56sym_token(_p_55137);
    if (IS_ATOM_INT(_28083)) {
        _28084 = (_28083 != 523);
    }
    else {
        _28084 = binary_op(NOTEQ, _28083, 523);
    }
    DeRef(_28083);
    _28083 = NOVALUE;
    if (_28084 == 0) {
        DeRef(_28084);
        _28084 = NOVALUE;
        goto LC; // [489] 511
    }
    else {
        if (!IS_ATOM_INT(_28084) && DBL_PTR(_28084)->dbl == 0.0){
            DeRef(_28084);
            _28084 = NOVALUE;
            goto LC; // [489] 511
        }
        DeRef(_28084);
        _28084 = NOVALUE;
    }
    DeRef(_28084);
    _28084 = NOVALUE;
LB: 

    /** parser.e:650					CompileErr(153, {Ns_recorded[n]})*/
    _2 = (object)SEQ_PTR(_39Ns_recorded_16922);
    _28086 = (object)*(((s1_ptr)_2)->base + _n_55134);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_28086);
    ((intptr_t*)_2)[1] = _28086;
    _28087 = MAKE_SEQ(_1);
    _28086 = NOVALUE;
    _52CompileErr(153, _28087, 0);
    _28087 = NOVALUE;
LC: 

    /** parser.e:652				t = {NAMESPACE, p}*/
    DeRef(_t_55136);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 523;
    ((intptr_t *)_2)[2] = _p_55137;
    _t_55136 = MAKE_SEQ(_1);
LA: 

    /** parser.e:655			t = keyfind(Recorded[n],SymTab[t[T_SYM]][S_OBJ])*/
    _2 = (object)SEQ_PTR(_39Recorded_16921);
    _28089 = (object)*(((s1_ptr)_2)->base + _n_55134);
    _2 = (object)SEQ_PTR(_t_55136);
    _28090 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28090)){
        _28091 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28090)->dbl));
    }
    else{
        _28091 = (object)*(((s1_ptr)_2)->base + _28090);
    }
    _2 = (object)SEQ_PTR(_28091);
    _28092 = (object)*(((s1_ptr)_2)->base + 1);
    _28091 = NOVALUE;
    RefDS(_28089);
    DeRef(_31680);
    _31680 = _28089;
    _31681 = _56hashfn(_31680);
    _31680 = NOVALUE;
    RefDS(_28089);
    Ref(_28092);
    _0 = _t_55136;
    _t_55136 = _56keyfind(_28089, _28092, _39current_file_no_16815, 0, _31681);
    DeRef(_0);
    _28089 = NOVALUE;
    _28092 = NOVALUE;
    _31681 = NOVALUE;

    /** parser.e:656			if t[T_ID] = IGNORED then*/
    _2 = (object)SEQ_PTR(_t_55136);
    _28094 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28094, 509)){
        _28094 = NOVALUE;
        goto LD; // [573] 630
    }
    _28094 = NOVALUE;

    /** parser.e:657		        p = Recorded_sym[n]*/
    _2 = (object)SEQ_PTR(_39Recorded_sym_16923);
    _p_55137 = (object)*(((s1_ptr)_2)->base + _n_55134);
    if (!IS_ATOM_INT(_p_55137)){
        _p_55137 = (object)DBL_PTR(_p_55137)->dbl;
    }

    /** parser.e:658		        if p = 0 then*/
    if (_p_55137 != 0)
    goto LE; // [589] 611

    /** parser.e:659		        	CompileErr(157,{Recorded[n]})*/
    _2 = (object)SEQ_PTR(_39Recorded_16921);
    _28098 = (object)*(((s1_ptr)_2)->base + _n_55134);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_28098);
    ((intptr_t*)_2)[1] = _28098;
    _28099 = MAKE_SEQ(_1);
    _28098 = NOVALUE;
    _52CompileErr(157, _28099, 0);
    _28099 = NOVALUE;
LE: 

    /** parser.e:661			    t = {SymTab[p][S_TOKEN], p}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28100 = (object)*(((s1_ptr)_2)->base + _p_55137);
    _2 = (object)SEQ_PTR(_28100);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _28101 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _28101 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _28100 = NOVALUE;
    Ref(_28101);
    DeRef(_t_55136);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _28101;
    ((intptr_t *)_2)[2] = _p_55137;
    _t_55136 = MAKE_SEQ(_1);
    _28101 = NOVALUE;
LD: 

    /** parser.e:663			n = t[T_ID]*/
    _2 = (object)SEQ_PTR(_t_55136);
    _n_55134 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_n_55134)){
        _n_55134 = (object)DBL_PTR(_n_55134)->dbl;
    }

    /** parser.e:664			if n = VARIABLE then*/
    if (_n_55134 != -100)
    goto LF; // [644] 660

    /** parser.e:665				n = QUALIFIED_VARIABLE*/
    _n_55134 = 512;
    goto L10; // [657] 719
LF: 

    /** parser.e:666			elsif n = FUNC then*/
    if (_n_55134 != 501)
    goto L11; // [664] 680

    /** parser.e:667				n = QUALIFIED_FUNC*/
    _n_55134 = 520;
    goto L10; // [677] 719
L11: 

    /** parser.e:668			elsif n = PROC then*/
    if (_n_55134 != 27)
    goto L12; // [684] 700

    /** parser.e:669				n = QUALIFIED_PROC*/
    _n_55134 = 521;
    goto L10; // [697] 719
L12: 

    /** parser.e:670			elsif n = TYPE then*/
    if (_n_55134 != 504)
    goto L13; // [704] 718

    /** parser.e:671				n = QUALIFIED_TYPE*/
    _n_55134 = 522;
L13: 
L10: 

    /** parser.e:673			t[T_ID] = n*/
    _2 = (object)SEQ_PTR(_t_55136);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _t_55136 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _n_55134;
    DeRef(_1);
L8: 

    /** parser.e:675		No_new_entry = prev_Nne*/
    _56No_new_entry_47455 = _prev_Nne_55138;

    /** parser.e:676	  	return t*/
    DeRef(_28049);
    _28049 = NOVALUE;
    _28039 = NOVALUE;
    DeRef(_28081);
    _28081 = NOVALUE;
    _28090 = NOVALUE;
    DeRef(_28042);
    _28042 = NOVALUE;
    DeRef(_28051);
    _28051 = NOVALUE;
    DeRef(_28037);
    _28037 = NOVALUE;
    DeRef(_28047);
    _28047 = NOVALUE;
    return _t_55136;
    ;
}


object _42next_token()
{
    object _t_55317 = NOVALUE;
    object _s_55318 = NOVALUE;
    object _28140 = NOVALUE;
    object _28139 = NOVALUE;
    object _28138 = NOVALUE;
    object _28137 = NOVALUE;
    object _28136 = NOVALUE;
    object _28135 = NOVALUE;
    object _28134 = NOVALUE;
    object _28133 = NOVALUE;
    object _28131 = NOVALUE;
    object _28130 = NOVALUE;
    object _28129 = NOVALUE;
    object _28128 = NOVALUE;
    object _28126 = NOVALUE;
    object _28124 = NOVALUE;
    object _28122 = NOVALUE;
    object _28118 = NOVALUE;
    object _28115 = NOVALUE;
    object _28112 = NOVALUE;
    object _28110 = NOVALUE;
    object _28108 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:682		sequence s*/

    /** parser.e:684		if length(backed_up_tok) > 0 then*/
    if (IS_SEQUENCE(_42backed_up_tok_54370)){
            _28108 = SEQ_PTR(_42backed_up_tok_54370)->length;
    }
    else {
        _28108 = 1;
    }
    if (_28108 <= 0)
    goto L1; // [10] 82

    /** parser.e:685			t = backed_up_tok[$]*/
    if (IS_SEQUENCE(_42backed_up_tok_54370)){
            _28110 = SEQ_PTR(_42backed_up_tok_54370)->length;
    }
    else {
        _28110 = 1;
    }
    DeRef(_t_55317);
    _2 = (object)SEQ_PTR(_42backed_up_tok_54370);
    _t_55317 = (object)*(((s1_ptr)_2)->base + _28110);
    Ref(_t_55317);

    /** parser.e:686			backed_up_tok = remove( backed_up_tok, length( backed_up_tok ) )*/
    if (IS_SEQUENCE(_42backed_up_tok_54370)){
            _28112 = SEQ_PTR(_42backed_up_tok_54370)->length;
    }
    else {
        _28112 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_42backed_up_tok_54370);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_28112)) ? _28112 : (object)(DBL_PTR(_28112)->dbl);
        int stop = (IS_ATOM_INT(_28112)) ? _28112 : (object)(DBL_PTR(_28112)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_42backed_up_tok_54370), start, &_42backed_up_tok_54370 );
            }
            else Tail(SEQ_PTR(_42backed_up_tok_54370), stop+1, &_42backed_up_tok_54370);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_42backed_up_tok_54370), start, &_42backed_up_tok_54370);
        }
        else {
            assign_slice_seq = &assign_space;
            _42backed_up_tok_54370 = Remove_elements(start, stop, (SEQ_PTR(_42backed_up_tok_54370)->ref == 1));
        }
    }
    _28112 = NOVALUE;
    _28112 = NOVALUE;

    /** parser.e:687			if putback_fwd_line_number then*/
    if (_39putback_fwd_line_number_16818 == 0)
    {
        goto L2; // [43] 347
    }
    else{
    }

    /** parser.e:689				ForwardLine     = putback_ForwardLine*/
    Ref(_52putback_ForwardLine_48712);
    DeRef(_52ForwardLine_48711);
    _52ForwardLine_48711 = _52putback_ForwardLine_48712;

    /** parser.e:690				forward_bp      = putback_forward_bp*/
    _52forward_bp_48715 = _52putback_forward_bp_48716;

    /** parser.e:691				fwd_line_number = putback_fwd_line_number*/
    _39fwd_line_number_16817 = _39putback_fwd_line_number_16818;

    /** parser.e:693				putback_fwd_line_number = 0*/
    _39putback_fwd_line_number_16818 = 0;
    goto L2; // [79] 347
L1: 

    /** parser.e:696		elsif Parser_mode = PAM_PLAYBACK then*/
    if (_39Parser_mode_16920 != -1)
    goto L3; // [88] 300

    /** parser.e:697			if canned_index <= length(canned_tokens) then*/
    if (IS_SEQUENCE(_42canned_tokens_54407)){
            _28115 = SEQ_PTR(_42canned_tokens_54407)->length;
    }
    else {
        _28115 = 1;
    }
    if (_42canned_index_54408 > _28115)
    goto L4; // [101] 150

    /** parser.e:698				t = canned_tokens[canned_index]*/
    DeRef(_t_55317);
    _2 = (object)SEQ_PTR(_42canned_tokens_54407);
    _t_55317 = (object)*(((s1_ptr)_2)->base + _42canned_index_54408);
    Ref(_t_55317);

    /** parser.e:699				if canned_index < length(canned_tokens) then*/
    if (IS_SEQUENCE(_42canned_tokens_54407)){
            _28118 = SEQ_PTR(_42canned_tokens_54407)->length;
    }
    else {
        _28118 = 1;
    }
    if (_42canned_index_54408 >= _28118)
    goto L5; // [124] 139

    /** parser.e:700					canned_index += 1*/
    _42canned_index_54408 = _42canned_index_54408 + 1;
    goto L6; // [136] 157
L5: 

    /** parser.e:702		            s = restore_parser()*/
    _0 = _s_55318;
    _s_55318 = _42restore_parser();
    DeRef(_0);
    goto L6; // [147] 157
L4: 

    /** parser.e:705		    	InternalErr(266)*/
    RefDS(_21928);
    _52InternalErr(266, _21928);
L6: 

    /** parser.e:707			if t[T_ID] = RECORDED then*/
    _2 = (object)SEQ_PTR(_t_55317);
    _28122 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28122, 508)){
        _28122 = NOVALUE;
        goto L7; // [169] 188
    }
    _28122 = NOVALUE;

    /** parser.e:708				t=read_recorded_token(t[T_SYM])*/
    _2 = (object)SEQ_PTR(_t_55317);
    _28124 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28124);
    _0 = _t_55317;
    _t_55317 = _42read_recorded_token(_28124);
    DeRef(_0);
    _28124 = NOVALUE;
    goto L2; // [185] 347
L7: 

    /** parser.e:709			elsif t[T_ID] = DEF_PARAM then*/
    _2 = (object)SEQ_PTR(_t_55317);
    _28126 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28126, 510)){
        _28126 = NOVALUE;
        goto L2; // [198] 347
    }
    _28126 = NOVALUE;

    /** parser.e:710	        	for i=length(nested_calls) to 1 by -1 do*/
    if (IS_SEQUENCE(_42nested_calls_55110)){
            _28128 = SEQ_PTR(_42nested_calls_55110)->length;
    }
    else {
        _28128 = 1;
    }
    {
        object _i_55365;
        _i_55365 = _28128;
L8: 
        if (_i_55365 < 1){
            goto L9; // [209] 288
        }

        /** parser.e:711	        	    if nested_calls[i] = t[T_SYM][2] then*/
        _2 = (object)SEQ_PTR(_42nested_calls_55110);
        _28129 = (object)*(((s1_ptr)_2)->base + _i_55365);
        _2 = (object)SEQ_PTR(_t_55317);
        _28130 = (object)*(((s1_ptr)_2)->base + 2);
        _2 = (object)SEQ_PTR(_28130);
        _28131 = (object)*(((s1_ptr)_2)->base + 2);
        _28130 = NOVALUE;
        if (binary_op_a(NOTEQ, _28129, _28131)){
            _28129 = NOVALUE;
            _28131 = NOVALUE;
            goto LA; // [234] 281
        }
        _28129 = NOVALUE;
        _28131 = NOVALUE;

        /** parser.e:712						return {VARIABLE, private_sym[parseargs_states[i][PS_POSITION]+t[T_SYM][1]]}*/
        _2 = (object)SEQ_PTR(_42parseargs_states_55102);
        _28133 = (object)*(((s1_ptr)_2)->base + _i_55365);
        _2 = (object)SEQ_PTR(_28133);
        _28134 = (object)*(((s1_ptr)_2)->base + 1);
        _28133 = NOVALUE;
        _2 = (object)SEQ_PTR(_t_55317);
        _28135 = (object)*(((s1_ptr)_2)->base + 2);
        _2 = (object)SEQ_PTR(_28135);
        _28136 = (object)*(((s1_ptr)_2)->base + 1);
        _28135 = NOVALUE;
        if (IS_ATOM_INT(_28134) && IS_ATOM_INT(_28136)) {
            _28137 = _28134 + _28136;
        }
        else {
            _28137 = binary_op(PLUS, _28134, _28136);
        }
        _28134 = NOVALUE;
        _28136 = NOVALUE;
        _2 = (object)SEQ_PTR(_39private_sym_16927);
        if (!IS_ATOM_INT(_28137)){
            _28138 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28137)->dbl));
        }
        else{
            _28138 = (object)*(((s1_ptr)_2)->base + _28137);
        }
        Ref(_28138);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -100;
        ((intptr_t *)_2)[2] = _28138;
        _28139 = MAKE_SEQ(_1);
        _28138 = NOVALUE;
        DeRef(_t_55317);
        DeRef(_s_55318);
        DeRef(_28137);
        _28137 = NOVALUE;
        return _28139;
LA: 

        /** parser.e:714				end for*/
        _i_55365 = _i_55365 + -1;
        goto L8; // [283] 216
L9: 
        ;
    }

    /** parser.e:715				CompileErr(98)*/
    RefDS(_21928);
    _52CompileErr(98, _21928, 0);
    goto L2; // [297] 347
L3: 

    /** parser.e:717		elsif lock_scanner then*/
    if (_42lock_scanner_55108 == 0)
    {
        goto LB; // [304] 322
    }
    else{
    }

    /** parser.e:718			return {PLAYBACK_ENDS,0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 505;
    ((intptr_t *)_2)[2] = 0;
    _28140 = MAKE_SEQ(_1);
    DeRef(_t_55317);
    DeRef(_s_55318);
    DeRef(_28137);
    _28137 = NOVALUE;
    DeRef(_28139);
    _28139 = NOVALUE;
    return _28140;
    goto L2; // [319] 347
LB: 

    /** parser.e:720		    t = Scanner()*/
    _0 = _t_55317;
    _t_55317 = _63Scanner();
    DeRef(_0);

    /** parser.e:721		    if Parser_mode = PAM_RECORD then*/
    if (_39Parser_mode_16920 != 1)
    goto LC; // [333] 346

    /** parser.e:722		        canned_tokens = append(canned_tokens,t)*/
    Ref(_t_55317);
    Append(&_42canned_tokens_54407, _42canned_tokens_54407, _t_55317);
LC: 
L2: 

    /** parser.e:725		putback_fwd_line_number = 0*/
    _39putback_fwd_line_number_16818 = 0;

    /** parser.e:726		return t*/
    DeRef(_s_55318);
    DeRef(_28137);
    _28137 = NOVALUE;
    DeRef(_28140);
    _28140 = NOVALUE;
    DeRef(_28139);
    _28139 = NOVALUE;
    return _t_55317;
    ;
}


object _42Expr_list()
{
    object _tok_55400 = NOVALUE;
    object _n_55401 = NOVALUE;
    object _28156 = NOVALUE;
    object _28153 = NOVALUE;
    object _28152 = NOVALUE;
    object _28150 = NOVALUE;
    object _28149 = NOVALUE;
    object _28145 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:734		integer n*/

    /** parser.e:736		tok = next_token()*/
    _0 = _tok_55400;
    _tok_55400 = _42next_token();
    DeRef(_0);

    /** parser.e:737		putback(tok)*/
    Ref(_tok_55400);
    _42putback(_tok_55400);

    /** parser.e:738		if tok[T_ID] = RIGHT_BRACE then*/
    _2 = (object)SEQ_PTR(_tok_55400);
    _28145 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28145, -25)){
        _28145 = NOVALUE;
        goto L1; // [23] 36
    }
    _28145 = NOVALUE;

    /** parser.e:739			return 0*/
    DeRef(_tok_55400);
    return 0;
    goto L2; // [33] 142
L1: 

    /** parser.e:741			n = 0*/
    _n_55401 = 0;

    /** parser.e:742			short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:743			while TRUE do*/
L3: 
    if (_9TRUE_444 == 0)
    {
        goto L4; // [56] 133
    }
    else{
    }

    /** parser.e:744				gListItem &= 1*/
    Append(&_42gListItem_54399, _42gListItem_54399, 1);

    /** parser.e:745				Expr()*/
    _42Expr();

    /** parser.e:746				n += gListItem[$]*/
    if (IS_SEQUENCE(_42gListItem_54399)){
            _28149 = SEQ_PTR(_42gListItem_54399)->length;
    }
    else {
        _28149 = 1;
    }
    _2 = (object)SEQ_PTR(_42gListItem_54399);
    _28150 = (object)*(((s1_ptr)_2)->base + _28149);
    _n_55401 = _n_55401 + _28150;
    _28150 = NOVALUE;

    /** parser.e:747				gListItem = gListItem[1 .. $-1]*/
    if (IS_SEQUENCE(_42gListItem_54399)){
            _28152 = SEQ_PTR(_42gListItem_54399)->length;
    }
    else {
        _28152 = 1;
    }
    _28153 = _28152 - 1;
    _28152 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42gListItem_54399;
    RHS_Slice(_42gListItem_54399, 1, _28153);

    /** parser.e:748				tok = next_token()*/
    _0 = _tok_55400;
    _tok_55400 = _42next_token();
    DeRef(_0);

    /** parser.e:749				if tok[T_ID] != COMMA then*/
    _2 = (object)SEQ_PTR(_tok_55400);
    _28156 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _28156, -30)){
        _28156 = NOVALUE;
        goto L3; // [119] 54
    }
    _28156 = NOVALUE;

    /** parser.e:750					exit*/
    goto L4; // [125] 133

    /** parser.e:752			end while*/
    goto L3; // [130] 54
L4: 

    /** parser.e:753			short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;
L2: 

    /** parser.e:755		putback(tok)*/
    Ref(_tok_55400);
    _42putback(_tok_55400);

    /** parser.e:756		return n*/
    DeRef(_tok_55400);
    DeRef(_28153);
    _28153 = NOVALUE;
    return _n_55401;
    ;
}


void _42tok_match(object _tok_55429, object _prevtok_55430)
{
    object _t_55432 = NOVALUE;
    object _expected_55433 = NOVALUE;
    object _actual_55434 = NOVALUE;
    object _prevname_55435 = NOVALUE;
    object _28169 = NOVALUE;
    object _28166 = NOVALUE;
    object _28163 = NOVALUE;
    object _28160 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:762		sequence expected, actual, prevname*/

    /** parser.e:764		t = next_token()*/
    _0 = _t_55432;
    _t_55432 = _42next_token();
    DeRef(_0);

    /** parser.e:765		if t[T_ID] != tok then*/
    _2 = (object)SEQ_PTR(_t_55432);
    _28160 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _28160, _tok_55429)){
        _28160 = NOVALUE;
        goto L1; // [20] 92
    }
    _28160 = NOVALUE;

    /** parser.e:766			expected = LexName(tok)*/
    RefDS(_26260);
    _0 = _expected_55433;
    _expected_55433 = _49LexName(_tok_55429, _26260);
    DeRef(_0);

    /** parser.e:767			actual = LexName(t[T_ID])*/
    _2 = (object)SEQ_PTR(_t_55432);
    _28163 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28163);
    RefDS(_26260);
    _0 = _actual_55434;
    _actual_55434 = _49LexName(_28163, _26260);
    DeRef(_0);
    _28163 = NOVALUE;

    /** parser.e:768			if prevtok = 0 then*/
    if (_prevtok_55430 != 0)
    goto L2; // [50] 68

    /** parser.e:769				CompileErr(132, {expected, actual})*/
    RefDS(_actual_55434);
    RefDS(_expected_55433);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _expected_55433;
    ((intptr_t *)_2)[2] = _actual_55434;
    _28166 = MAKE_SEQ(_1);
    _52CompileErr(132, _28166, 0);
    _28166 = NOVALUE;
    goto L3; // [65] 91
L2: 

    /** parser.e:771				prevname = LexName(prevtok)*/
    RefDS(_26260);
    _0 = _prevname_55435;
    _prevname_55435 = _49LexName(_prevtok_55430, _26260);
    DeRef(_0);

    /** parser.e:772				CompileErr(138, {expected, prevname, actual})*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_expected_55433);
    ((intptr_t*)_2)[1] = _expected_55433;
    RefDS(_prevname_55435);
    ((intptr_t*)_2)[2] = _prevname_55435;
    RefDS(_actual_55434);
    ((intptr_t*)_2)[3] = _actual_55434;
    _28169 = MAKE_SEQ(_1);
    _52CompileErr(138, _28169, 0);
    _28169 = NOVALUE;
L3: 
L1: 

    /** parser.e:775	end procedure*/
    DeRef(_t_55432);
    DeRef(_expected_55433);
    DeRef(_actual_55434);
    DeRef(_prevname_55435);
    return;
    ;
}


void _42UndefinedVar(object _s_55470)
{
    object _dup_55472 = NOVALUE;
    object _errmsg_55473 = NOVALUE;
    object _rname_55474 = NOVALUE;
    object _fname_55475 = NOVALUE;
    object _28192 = NOVALUE;
    object _28191 = NOVALUE;
    object _28189 = NOVALUE;
    object _28187 = NOVALUE;
    object _28186 = NOVALUE;
    object _28184 = NOVALUE;
    object _28182 = NOVALUE;
    object _28180 = NOVALUE;
    object _28179 = NOVALUE;
    object _28178 = NOVALUE;
    object _28177 = NOVALUE;
    object _28176 = NOVALUE;
    object _28174 = NOVALUE;
    object _28173 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_s_55470)) {
        _1 = (object)(DBL_PTR(_s_55470)->dbl);
        DeRefDS(_s_55470);
        _s_55470 = _1;
    }

    /** parser.e:790		sequence errmsg*/

    /** parser.e:791		sequence rname*/

    /** parser.e:792		sequence fname*/

    /** parser.e:794		if SymTab[s][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28173 = (object)*(((s1_ptr)_2)->base + _s_55470);
    _2 = (object)SEQ_PTR(_28173);
    _28174 = (object)*(((s1_ptr)_2)->base + 4);
    _28173 = NOVALUE;
    if (binary_op_a(NOTEQ, _28174, 9)){
        _28174 = NOVALUE;
        goto L1; // [25] 55
    }
    _28174 = NOVALUE;

    /** parser.e:795			CompileErr(19, {SymTab[s][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28176 = (object)*(((s1_ptr)_2)->base + _s_55470);
    _2 = (object)SEQ_PTR(_28176);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28177 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28177 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28176 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_28177);
    ((intptr_t*)_2)[1] = _28177;
    _28178 = MAKE_SEQ(_1);
    _28177 = NOVALUE;
    _52CompileErr(19, _28178, 0);
    _28178 = NOVALUE;
    goto L2; // [52] 202
L1: 

    /** parser.e:797		elsif SymTab[s][S_SCOPE] = SC_MULTIPLY_DEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28179 = (object)*(((s1_ptr)_2)->base + _s_55470);
    _2 = (object)SEQ_PTR(_28179);
    _28180 = (object)*(((s1_ptr)_2)->base + 4);
    _28179 = NOVALUE;
    if (binary_op_a(NOTEQ, _28180, 10)){
        _28180 = NOVALUE;
        goto L3; // [71] 179
    }
    _28180 = NOVALUE;

    /** parser.e:798			rname = SymTab[s][S_NAME]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28182 = (object)*(((s1_ptr)_2)->base + _s_55470);
    DeRef(_rname_55474);
    _2 = (object)SEQ_PTR(_28182);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _rname_55474 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _rname_55474 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_rname_55474);
    _28182 = NOVALUE;

    /** parser.e:799			errmsg = ""*/
    RefDS(_21928);
    DeRef(_errmsg_55473);
    _errmsg_55473 = _21928;

    /** parser.e:801			for i = 1 to length(dup_globals) do*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _28184 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _28184 = 1;
    }
    {
        object _i_55501;
        _i_55501 = 1;
L4: 
        if (_i_55501 > _28184){
            goto L5; // [105] 163
        }

        /** parser.e:802				dup = dup_globals[i]*/
        _2 = (object)SEQ_PTR(_56dup_globals_47444);
        _dup_55472 = (object)*(((s1_ptr)_2)->base + _i_55501);
        if (!IS_ATOM_INT(_dup_55472)){
            _dup_55472 = (object)DBL_PTR(_dup_55472)->dbl;
        }

        /** parser.e:803				fname = known_files[SymTab[dup][S_FILE_NO]]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28186 = (object)*(((s1_ptr)_2)->base + _dup_55472);
        _2 = (object)SEQ_PTR(_28186);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _28187 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _28187 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _28186 = NOVALUE;
        DeRef(_fname_55475);
        _2 = (object)SEQ_PTR(_36known_files_15405);
        if (!IS_ATOM_INT(_28187)){
            _fname_55475 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28187)->dbl));
        }
        else{
            _fname_55475 = (object)*(((s1_ptr)_2)->base + _28187);
        }
        Ref(_fname_55475);

        /** parser.e:804				errmsg &= "    " & fname & "\n"*/
        {
            object concat_list[3];

            concat_list[0] = _22123;
            concat_list[1] = _fname_55475;
            concat_list[2] = _24811;
            Concat_N((object_ptr)&_28189, concat_list, 3);
        }
        Concat((object_ptr)&_errmsg_55473, _errmsg_55473, _28189);
        DeRefDS(_28189);
        _28189 = NOVALUE;

        /** parser.e:806			end for*/
        _i_55501 = _i_55501 + 1;
        goto L4; // [158] 112
L5: 
        ;
    }

    /** parser.e:808			CompileErr(23, {rname, rname, errmsg})*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDSn(_rname_55474, 2);
    ((intptr_t*)_2)[1] = _rname_55474;
    ((intptr_t*)_2)[2] = _rname_55474;
    RefDS(_errmsg_55473);
    ((intptr_t*)_2)[3] = _errmsg_55473;
    _28191 = MAKE_SEQ(_1);
    _52CompileErr(23, _28191, 0);
    _28191 = NOVALUE;
    goto L2; // [176] 202
L3: 

    /** parser.e:810		elsif length(symbol_resolution_warning) then*/
    if (IS_SEQUENCE(_39symbol_resolution_warning_16916)){
            _28192 = SEQ_PTR(_39symbol_resolution_warning_16916)->length;
    }
    else {
        _28192 = 1;
    }
    if (_28192 == 0)
    {
        _28192 = NOVALUE;
        goto L6; // [186] 201
    }
    else{
        _28192 = NOVALUE;
    }

    /** parser.e:811			Warning( symbol_resolution_warning, resolution_warning_flag)*/
    RefDS(_39symbol_resolution_warning_16916);
    RefDS(_21928);
    _52Warning(_39symbol_resolution_warning_16916, 1, _21928);
L6: 
L2: 

    /** parser.e:813	end procedure*/
    DeRef(_errmsg_55473);
    DeRef(_rname_55474);
    DeRef(_fname_55475);
    _28187 = NOVALUE;
    return;
    ;
}


void _42WrongNumberArgs(object _subsym_55525, object _only_55526)
{
    object _msgno_55527 = NOVALUE;
    object _28204 = NOVALUE;
    object _28203 = NOVALUE;
    object _28202 = NOVALUE;
    object _28201 = NOVALUE;
    object _28200 = NOVALUE;
    object _28198 = NOVALUE;
    object _28196 = NOVALUE;
    object _28194 = NOVALUE;
    object _28193 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_subsym_55525)) {
        _1 = (object)(DBL_PTR(_subsym_55525)->dbl);
        DeRefDS(_subsym_55525);
        _subsym_55525 = _1;
    }

    /** parser.e:819		if SymTab[subsym][S_NUM_ARGS] = 1 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28193 = (object)*(((s1_ptr)_2)->base + _subsym_55525);
    _2 = (object)SEQ_PTR(_28193);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _28194 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _28194 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _28193 = NOVALUE;
    if (binary_op_a(NOTEQ, _28194, 1)){
        _28194 = NOVALUE;
        goto L1; // [19] 49
    }
    _28194 = NOVALUE;

    /** parser.e:820			if length(only) = 0 then*/
    if (IS_SEQUENCE(_only_55526)){
            _28196 = SEQ_PTR(_only_55526)->length;
    }
    else {
        _28196 = 1;
    }
    if (_28196 != 0)
    goto L2; // [28] 40

    /** parser.e:821				msgno = 20*/
    _msgno_55527 = 20;
    goto L3; // [37] 73
L2: 

    /** parser.e:823				msgno = 237*/
    _msgno_55527 = 237;
    goto L3; // [46] 73
L1: 

    /** parser.e:826			if length(only) = 0 then*/
    if (IS_SEQUENCE(_only_55526)){
            _28198 = SEQ_PTR(_only_55526)->length;
    }
    else {
        _28198 = 1;
    }
    if (_28198 != 0)
    goto L4; // [54] 66

    /** parser.e:827				msgno = 236*/
    _msgno_55527 = 236;
    goto L5; // [63] 72
L4: 

    /** parser.e:829				msgno = 238*/
    _msgno_55527 = 238;
L5: 
L3: 

    /** parser.e:833		CompileErr(msgno, {SymTab[subsym][S_NAME], SymTab[subsym][S_NUM_ARGS]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28200 = (object)*(((s1_ptr)_2)->base + _subsym_55525);
    _2 = (object)SEQ_PTR(_28200);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28201 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28201 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28200 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28202 = (object)*(((s1_ptr)_2)->base + _subsym_55525);
    _2 = (object)SEQ_PTR(_28202);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _28203 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _28203 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _28202 = NOVALUE;
    Ref(_28203);
    Ref(_28201);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _28201;
    ((intptr_t *)_2)[2] = _28203;
    _28204 = MAKE_SEQ(_1);
    _28203 = NOVALUE;
    _28201 = NOVALUE;
    _52CompileErr(_msgno_55527, _28204, 0);
    _28204 = NOVALUE;

    /** parser.e:834	end procedure*/
    DeRefDSi(_only_55526);
    return;
    ;
}


void _42MissingArgs(object _subsym_55556)
{
    object _eentry_55557 = NOVALUE;
    object _28209 = NOVALUE;
    object _28208 = NOVALUE;
    object _28207 = NOVALUE;
    object _28206 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:837		sequence eentry = SymTab[subsym]*/
    DeRef(_eentry_55557);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_55557 = (object)*(((s1_ptr)_2)->base + _subsym_55556);
    Ref(_eentry_55557);

    /** parser.e:839		CompileErr(235, {eentry[S_NAME], eentry[S_DEF_ARGS][2]})*/
    _2 = (object)SEQ_PTR(_eentry_55557);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28206 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28206 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _2 = (object)SEQ_PTR(_eentry_55557);
    _28207 = (object)*(((s1_ptr)_2)->base + 28);
    _2 = (object)SEQ_PTR(_28207);
    _28208 = (object)*(((s1_ptr)_2)->base + 2);
    _28207 = NOVALUE;
    Ref(_28208);
    Ref(_28206);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _28206;
    ((intptr_t *)_2)[2] = _28208;
    _28209 = MAKE_SEQ(_1);
    _28208 = NOVALUE;
    _28206 = NOVALUE;
    _52CompileErr(235, _28209, 0);
    _28209 = NOVALUE;

    /** parser.e:840	end procedure*/
    DeRefDS(_eentry_55557);
    return;
    ;
}


void _42Parse_default_arg(object _subsym_55570, object _arg_55571, object _fwd_private_list_55572, object _fwd_private_sym_55573)
{
    object _param_55575 = NOVALUE;
    object _28229 = NOVALUE;
    object _28228 = NOVALUE;
    object _28227 = NOVALUE;
    object _28226 = NOVALUE;
    object _28225 = NOVALUE;
    object _28224 = NOVALUE;
    object _28223 = NOVALUE;
    object _28222 = NOVALUE;
    object _28221 = NOVALUE;
    object _28220 = NOVALUE;
    object _28219 = NOVALUE;
    object _28218 = NOVALUE;
    object _28217 = NOVALUE;
    object _28215 = NOVALUE;
    object _28214 = NOVALUE;
    object _28211 = NOVALUE;
    object _28210 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:843		symtab_index param = subsym*/
    _param_55575 = _subsym_55570;

    /** parser.e:844		on_arg = arg*/
    _42on_arg_55109 = _arg_55571;

    /** parser.e:845		parseargs_states = append(parseargs_states,*/
    if (IS_SEQUENCE(_42private_list_55107)){
            _28210 = SEQ_PTR(_42private_list_55107)->length;
    }
    else {
        _28210 = 1;
    }
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _28210;
    ((intptr_t*)_2)[2] = _42lock_scanner_55108;
    ((intptr_t*)_2)[3] = _39use_private_list_16928;
    ((intptr_t*)_2)[4] = _42on_arg_55109;
    _28211 = MAKE_SEQ(_1);
    _28210 = NOVALUE;
    RefDS(_28211);
    Append(&_42parseargs_states_55102, _42parseargs_states_55102, _28211);
    DeRefDS(_28211);
    _28211 = NOVALUE;

    /** parser.e:847		nested_calls &= subsym*/
    Append(&_42nested_calls_55110, _42nested_calls_55110, _subsym_55570);

    /** parser.e:849		for i = 1 to arg do*/
    _28214 = _arg_55571;
    {
        object _i_55582;
        _i_55582 = 1;
L1: 
        if (_i_55582 > _28214){
            goto L2; // [60] 90
        }

        /** parser.e:850			param = SymTab[param][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28215 = (object)*(((s1_ptr)_2)->base + _param_55575);
        _2 = (object)SEQ_PTR(_28215);
        _param_55575 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_55575)){
            _param_55575 = (object)DBL_PTR(_param_55575)->dbl;
        }
        _28215 = NOVALUE;

        /** parser.e:851		end for*/
        _i_55582 = _i_55582 + 1;
        goto L1; // [85] 67
L2: 
        ;
    }

    /** parser.e:853		private_list = fwd_private_list*/
    RefDS(_fwd_private_list_55572);
    DeRef(_42private_list_55107);
    _42private_list_55107 = _fwd_private_list_55572;

    /** parser.e:854		private_sym  = fwd_private_sym*/
    RefDS(_fwd_private_sym_55573);
    DeRef(_39private_sym_16927);
    _39private_sym_16927 = _fwd_private_sym_55573;

    /** parser.e:856		if atom(SymTab[param][S_CODE]) then  -- but no default set*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28217 = (object)*(((s1_ptr)_2)->base + _param_55575);
    _2 = (object)SEQ_PTR(_28217);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _28218 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _28218 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _28217 = NOVALUE;
    _28219 = IS_ATOM(_28218);
    _28218 = NOVALUE;
    if (_28219 == 0)
    {
        _28219 = NOVALUE;
        goto L3; // [121] 162
    }
    else{
        _28219 = NOVALUE;
    }

    /** parser.e:857			CompileErr(26, {arg, SymTab[subsym][S_NAME], SymTab[param][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28220 = (object)*(((s1_ptr)_2)->base + _subsym_55570);
    _2 = (object)SEQ_PTR(_28220);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28221 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28221 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28220 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28222 = (object)*(((s1_ptr)_2)->base + _param_55575);
    _2 = (object)SEQ_PTR(_28222);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28223 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28223 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28222 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _arg_55571;
    Ref(_28221);
    ((intptr_t*)_2)[2] = _28221;
    Ref(_28223);
    ((intptr_t*)_2)[3] = _28223;
    _28224 = MAKE_SEQ(_1);
    _28223 = NOVALUE;
    _28221 = NOVALUE;
    _52CompileErr(26, _28224, 0);
    _28224 = NOVALUE;
L3: 

    /** parser.e:860		use_private_list = 1*/
    _39use_private_list_16928 = 1;

    /** parser.e:861		lock_scanner = 1*/
    _42lock_scanner_55108 = 1;

    /** parser.e:862		start_playback(SymTab[param][S_CODE] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28225 = (object)*(((s1_ptr)_2)->base + _param_55575);
    _2 = (object)SEQ_PTR(_28225);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _28226 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _28226 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _28225 = NOVALUE;
    Ref(_28226);
    _42start_playback(_28226);
    _28226 = NOVALUE;

    /** parser.e:863		call_proc(forward_expr, {})*/
    _0 = (object)_00[_42forward_expr_55396].addr;
    (*(intptr_t (*)())_0)(
                         );

    /** parser.e:865		add_private_symbol( Top(), SymTab[param][S_NAME] )*/
    _28227 = _49Top();
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28228 = (object)*(((s1_ptr)_2)->base + _param_55575);
    _2 = (object)SEQ_PTR(_28228);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28229 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28229 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28228 = NOVALUE;
    Ref(_28229);
    _41add_private_symbol(_28227, _28229);
    _28227 = NOVALUE;
    _28229 = NOVALUE;

    /** parser.e:866		lock_scanner = 0*/
    _42lock_scanner_55108 = 0;

    /** parser.e:867		restore_parseargs_states()*/
    _42restore_parseargs_states();

    /** parser.e:868	end procedure*/
    DeRefDS(_fwd_private_list_55572);
    DeRefDSi(_fwd_private_sym_55573);
    return;
    ;
}


void _42ParseArgs(object _subsym_55620)
{
    object _n_55621 = NOVALUE;
    object _fda_55622 = NOVALUE;
    object _lnda_55623 = NOVALUE;
    object _tok_55625 = NOVALUE;
    object _s_55627 = NOVALUE;
    object _var_code_55628 = NOVALUE;
    object _name_55629 = NOVALUE;
    object _28339 = NOVALUE;
    object _28337 = NOVALUE;
    object _28333 = NOVALUE;
    object _28332 = NOVALUE;
    object _28331 = NOVALUE;
    object _28328 = NOVALUE;
    object _28325 = NOVALUE;
    object _28323 = NOVALUE;
    object _28321 = NOVALUE;
    object _28319 = NOVALUE;
    object _28317 = NOVALUE;
    object _28316 = NOVALUE;
    object _28315 = NOVALUE;
    object _28314 = NOVALUE;
    object _28313 = NOVALUE;
    object _28312 = NOVALUE;
    object _28311 = NOVALUE;
    object _28305 = NOVALUE;
    object _28304 = NOVALUE;
    object _28303 = NOVALUE;
    object _28302 = NOVALUE;
    object _28301 = NOVALUE;
    object _28300 = NOVALUE;
    object _28297 = NOVALUE;
    object _28294 = NOVALUE;
    object _28289 = NOVALUE;
    object _28287 = NOVALUE;
    object _28286 = NOVALUE;
    object _28285 = NOVALUE;
    object _28283 = NOVALUE;
    object _28280 = NOVALUE;
    object _28277 = NOVALUE;
    object _28275 = NOVALUE;
    object _28273 = NOVALUE;
    object _28271 = NOVALUE;
    object _28269 = NOVALUE;
    object _28268 = NOVALUE;
    object _28267 = NOVALUE;
    object _28266 = NOVALUE;
    object _28265 = NOVALUE;
    object _28264 = NOVALUE;
    object _28263 = NOVALUE;
    object _28261 = NOVALUE;
    object _28260 = NOVALUE;
    object _28259 = NOVALUE;
    object _28258 = NOVALUE;
    object _28257 = NOVALUE;
    object _28256 = NOVALUE;
    object _28253 = NOVALUE;
    object _28252 = NOVALUE;
    object _28251 = NOVALUE;
    object _28249 = NOVALUE;
    object _28248 = NOVALUE;
    object _28246 = NOVALUE;
    object _28242 = NOVALUE;
    object _28241 = NOVALUE;
    object _28239 = NOVALUE;
    object _28238 = NOVALUE;
    object _28236 = NOVALUE;
    object _28235 = NOVALUE;
    object _28234 = NOVALUE;
    object _28233 = NOVALUE;
    object _28232 = NOVALUE;
    object _28230 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_subsym_55620)) {
        _1 = (object)(DBL_PTR(_subsym_55620)->dbl);
        DeRefDS(_subsym_55620);
        _subsym_55620 = _1;
    }

    /** parser.e:875		object var_code*/

    /** parser.e:876		sequence name*/

    /** parser.e:878		n = SymTab[subsym][S_NUM_ARGS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28230 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
    _2 = (object)SEQ_PTR(_28230);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _n_55621 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _n_55621 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    if (!IS_ATOM_INT(_n_55621)){
        _n_55621 = (object)DBL_PTR(_n_55621)->dbl;
    }
    _28230 = NOVALUE;

    /** parser.e:879		if sequence(SymTab[subsym][S_DEF_ARGS]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28232 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
    _2 = (object)SEQ_PTR(_28232);
    _28233 = (object)*(((s1_ptr)_2)->base + 28);
    _28232 = NOVALUE;
    _28234 = IS_SEQUENCE(_28233);
    _28233 = NOVALUE;
    if (_28234 == 0)
    {
        _28234 = NOVALUE;
        goto L1; // [40] 86
    }
    else{
        _28234 = NOVALUE;
    }

    /** parser.e:880			fda = SymTab[subsym][S_DEF_ARGS][1]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28235 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
    _2 = (object)SEQ_PTR(_28235);
    _28236 = (object)*(((s1_ptr)_2)->base + 28);
    _28235 = NOVALUE;
    _2 = (object)SEQ_PTR(_28236);
    _fda_55622 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_fda_55622)){
        _fda_55622 = (object)DBL_PTR(_fda_55622)->dbl;
    }
    _28236 = NOVALUE;

    /** parser.e:881			lnda = SymTab[subsym][S_DEF_ARGS][2]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28238 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
    _2 = (object)SEQ_PTR(_28238);
    _28239 = (object)*(((s1_ptr)_2)->base + 28);
    _28238 = NOVALUE;
    _2 = (object)SEQ_PTR(_28239);
    _lnda_55623 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_lnda_55623)){
        _lnda_55623 = (object)DBL_PTR(_lnda_55623)->dbl;
    }
    _28239 = NOVALUE;
    goto L2; // [83] 97
L1: 

    /** parser.e:883			fda = 0*/
    _fda_55622 = 0;

    /** parser.e:884			lnda = 0*/
    _lnda_55623 = 0;
L2: 

    /** parser.e:886		s = subsym*/
    _s_55627 = _subsym_55620;

    /** parser.e:888		parseargs_states = append(parseargs_states,*/
    if (IS_SEQUENCE(_42private_list_55107)){
            _28241 = SEQ_PTR(_42private_list_55107)->length;
    }
    else {
        _28241 = 1;
    }
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _28241;
    ((intptr_t*)_2)[2] = _42lock_scanner_55108;
    ((intptr_t*)_2)[3] = _39use_private_list_16928;
    ((intptr_t*)_2)[4] = _42on_arg_55109;
    _28242 = MAKE_SEQ(_1);
    _28241 = NOVALUE;
    RefDS(_28242);
    Append(&_42parseargs_states_55102, _42parseargs_states_55102, _28242);
    DeRefDS(_28242);
    _28242 = NOVALUE;

    /** parser.e:890		nested_calls &= subsym*/
    Append(&_42nested_calls_55110, _42nested_calls_55110, _subsym_55620);

    /** parser.e:891		lock_scanner = 0*/
    _42lock_scanner_55108 = 0;

    /** parser.e:892		on_arg = 0*/
    _42on_arg_55109 = 0;

    /** parser.e:894		short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:895		for i = 1 to n do*/
    _28246 = _n_55621;
    {
        object _i_55658;
        _i_55658 = 1;
L3: 
        if (_i_55658 > _28246){
            goto L4; // [161] 1044
        }

        /** parser.e:897		  	tok = next_token()*/
        _0 = _tok_55625;
        _tok_55625 = _42next_token();
        DeRef(_0);

        /** parser.e:899			if tok[T_ID] = QUESTION_MARK or tok[T_ID] = COMMA then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28248 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_28248)) {
            _28249 = (_28248 == -31);
        }
        else {
            _28249 = binary_op(EQUALS, _28248, -31);
        }
        _28248 = NOVALUE;
        if (IS_ATOM_INT(_28249)) {
            if (_28249 != 0) {
                goto L5; // [187] 208
            }
        }
        else {
            if (DBL_PTR(_28249)->dbl != 0.0) {
                goto L5; // [187] 208
            }
        }
        _2 = (object)SEQ_PTR(_tok_55625);
        _28251 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_28251)) {
            _28252 = (_28251 == -30);
        }
        else {
            _28252 = binary_op(EQUALS, _28251, -30);
        }
        _28251 = NOVALUE;
        if (_28252 == 0) {
            DeRef(_28252);
            _28252 = NOVALUE;
            goto L6; // [204] 501
        }
        else {
            if (!IS_ATOM_INT(_28252) && DBL_PTR(_28252)->dbl == 0.0){
                DeRef(_28252);
                _28252 = NOVALUE;
                goto L6; // [204] 501
            }
            DeRef(_28252);
            _28252 = NOVALUE;
        }
        DeRef(_28252);
        _28252 = NOVALUE;
L5: 

        /** parser.e:902				if tok[T_ID] = QUESTION_MARK then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28253 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28253, -31)){
            _28253 = NOVALUE;
            goto L7; // [218] 295
        }
        _28253 = NOVALUE;

        /** parser.e:903					tok = next_token()*/
        _0 = _tok_55625;
        _tok_55625 = _42next_token();
        DeRef(_0);

        /** parser.e:904					if tok[T_ID] != RIGHT_ROUND and tok[T_ID] != COMMA then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28256 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_28256)) {
            _28257 = (_28256 != -27);
        }
        else {
            _28257 = binary_op(NOTEQ, _28256, -27);
        }
        _28256 = NOVALUE;
        if (IS_ATOM_INT(_28257)) {
            if (_28257 == 0) {
                goto L8; // [241] 271
            }
        }
        else {
            if (DBL_PTR(_28257)->dbl == 0.0) {
                goto L8; // [241] 271
            }
        }
        _2 = (object)SEQ_PTR(_tok_55625);
        _28259 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_28259)) {
            _28260 = (_28259 != -30);
        }
        else {
            _28260 = binary_op(NOTEQ, _28259, -30);
        }
        _28259 = NOVALUE;
        if (_28260 == 0) {
            DeRef(_28260);
            _28260 = NOVALUE;
            goto L8; // [258] 271
        }
        else {
            if (!IS_ATOM_INT(_28260) && DBL_PTR(_28260)->dbl == 0.0){
                DeRef(_28260);
                _28260 = NOVALUE;
                goto L8; // [258] 271
            }
            DeRef(_28260);
            _28260 = NOVALUE;
        }
        DeRef(_28260);
        _28260 = NOVALUE;

        /** parser.e:905						CompileErr( 41 )*/
        RefDS(_21928);
        _52CompileErr(41, _21928, 0);
        goto L9; // [268] 296
L8: 

        /** parser.e:906					elsif tok[T_ID] = RIGHT_ROUND then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28261 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28261, -27)){
            _28261 = NOVALUE;
            goto L9; // [281] 296
        }
        _28261 = NOVALUE;

        /** parser.e:907						putback( tok )*/
        Ref(_tok_55625);
        _42putback(_tok_55625);
        goto L9; // [292] 296
L7: 
L9: 

        /** parser.e:912				if SymTab[subsym][S_OPCODE] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28263 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28263);
        _28264 = (object)*(((s1_ptr)_2)->base + 21);
        _28263 = NOVALUE;
        if (_28264 == 0) {
            _28264 = NOVALUE;
            goto LA; // [310] 370
        }
        else {
            if (!IS_ATOM_INT(_28264) && DBL_PTR(_28264)->dbl == 0.0){
                _28264 = NOVALUE;
                goto LA; // [310] 370
            }
            _28264 = NOVALUE;
        }
        _28264 = NOVALUE;

        /** parser.e:913					if atom(SymTab[subsym][S_CODE]) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28265 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28265);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _28266 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _28266 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _28265 = NOVALUE;
        _28267 = IS_ATOM(_28266);
        _28266 = NOVALUE;
        if (_28267 == 0)
        {
            _28267 = NOVALUE;
            goto LB; // [330] 341
        }
        else{
            _28267 = NOVALUE;
        }

        /** parser.e:914						var_code = 0*/
        DeRef(_var_code_55628);
        _var_code_55628 = 0;
        goto LC; // [338] 360
LB: 

        /** parser.e:916						var_code = SymTab[subsym][S_CODE][i]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28268 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28268);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _28269 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _28269 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _28268 = NOVALUE;
        DeRef(_var_code_55628);
        _2 = (object)SEQ_PTR(_28269);
        _var_code_55628 = (object)*(((s1_ptr)_2)->base + _i_55658);
        Ref(_var_code_55628);
        _28269 = NOVALUE;
LC: 

        /** parser.e:918					name = ""*/
        RefDS(_21928);
        DeRef(_name_55629);
        _name_55629 = _21928;
        goto LD; // [367] 417
LA: 

        /** parser.e:920					s = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28271 = (object)*(((s1_ptr)_2)->base + _s_55627);
        _2 = (object)SEQ_PTR(_28271);
        _s_55627 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_55627)){
            _s_55627 = (object)DBL_PTR(_s_55627)->dbl;
        }
        _28271 = NOVALUE;

        /** parser.e:921					var_code = SymTab[s][S_CODE]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28273 = (object)*(((s1_ptr)_2)->base + _s_55627);
        DeRef(_var_code_55628);
        _2 = (object)SEQ_PTR(_28273);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _var_code_55628 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _var_code_55628 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        Ref(_var_code_55628);
        _28273 = NOVALUE;

        /** parser.e:922					name = SymTab[s][S_NAME]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28275 = (object)*(((s1_ptr)_2)->base + _s_55627);
        DeRef(_name_55629);
        _2 = (object)SEQ_PTR(_28275);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _name_55629 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _name_55629 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        Ref(_name_55629);
        _28275 = NOVALUE;
LD: 

        /** parser.e:925				if atom(var_code) then  -- but no default set*/
        _28277 = IS_ATOM(_var_code_55628);
        if (_28277 == 0)
        {
            _28277 = NOVALUE;
            goto LE; // [424] 435
        }
        else{
            _28277 = NOVALUE;
        }

        /** parser.e:926					CompileErr(29,i)*/
        _52CompileErr(29, _i_55658, 0);
LE: 

        /** parser.e:929				use_private_list = 1*/
        _39use_private_list_16928 = 1;

        /** parser.e:930				start_playback(var_code)*/
        Ref(_var_code_55628);
        _42start_playback(_var_code_55628);

        /** parser.e:931				lock_scanner=1*/
        _42lock_scanner_55108 = 1;

        /** parser.e:934				Expr()*/
        _42Expr();

        /** parser.e:935				lock_scanner=0*/
        _42lock_scanner_55108 = 0;

        /** parser.e:936				on_arg += 1*/
        _42on_arg_55109 = _42on_arg_55109 + 1;

        /** parser.e:937				private_list = append(private_list,name)*/
        RefDS(_name_55629);
        Append(&_42private_list_55107, _42private_list_55107, _name_55629);

        /** parser.e:938				private_sym &= Top()*/
        _28280 = _49Top();
        if (IS_SEQUENCE(_39private_sym_16927) && IS_ATOM(_28280)) {
            Ref(_28280);
            Append(&_39private_sym_16927, _39private_sym_16927, _28280);
        }
        else if (IS_ATOM(_39private_sym_16927) && IS_SEQUENCE(_28280)) {
        }
        else {
            Concat((object_ptr)&_39private_sym_16927, _39private_sym_16927, _28280);
        }
        DeRef(_28280);
        _28280 = NOVALUE;

        /** parser.e:939				backed_up_tok = {tok} -- ????*/
        _0 = _42backed_up_tok_54370;
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_tok_55625);
        ((intptr_t*)_2)[1] = _tok_55625;
        _42backed_up_tok_54370 = MAKE_SEQ(_1);
        DeRef(_0);
        goto LF; // [498] 629
L6: 

        /** parser.e:942			elsif tok[T_ID] != RIGHT_ROUND then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28283 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(EQUALS, _28283, -27)){
            _28283 = NOVALUE;
            goto L10; // [511] 628
        }
        _28283 = NOVALUE;

        /** parser.e:944				if SymTab[subsym][S_OPCODE] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28285 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28285);
        _28286 = (object)*(((s1_ptr)_2)->base + 21);
        _28285 = NOVALUE;
        if (_28286 == 0) {
            _28286 = NOVALUE;
            goto L11; // [529] 542
        }
        else {
            if (!IS_ATOM_INT(_28286) && DBL_PTR(_28286)->dbl == 0.0){
                _28286 = NOVALUE;
                goto L11; // [529] 542
            }
            _28286 = NOVALUE;
        }
        _28286 = NOVALUE;

        /** parser.e:945					name = ""*/
        RefDS(_21928);
        DeRef(_name_55629);
        _name_55629 = _21928;
        goto L12; // [539] 575
L11: 

        /** parser.e:947					s = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28287 = (object)*(((s1_ptr)_2)->base + _s_55627);
        _2 = (object)SEQ_PTR(_28287);
        _s_55627 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_55627)){
            _s_55627 = (object)DBL_PTR(_s_55627)->dbl;
        }
        _28287 = NOVALUE;

        /** parser.e:948					name = SymTab[s][S_NAME]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28289 = (object)*(((s1_ptr)_2)->base + _s_55627);
        DeRef(_name_55629);
        _2 = (object)SEQ_PTR(_28289);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _name_55629 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _name_55629 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        Ref(_name_55629);
        _28289 = NOVALUE;
L12: 

        /** parser.e:951				use_private_list = Parser_mode != PAM_NORMAL*/
        _39use_private_list_16928 = (_39Parser_mode_16920 != 0);

        /** parser.e:952				putback(tok)*/
        Ref(_tok_55625);
        _42putback(_tok_55625);

        /** parser.e:953				Expr()*/
        _42Expr();

        /** parser.e:954				on_arg += 1*/
        _42on_arg_55109 = _42on_arg_55109 + 1;

        /** parser.e:955				private_list = append(private_list,name)*/
        RefDS(_name_55629);
        Append(&_42private_list_55107, _42private_list_55107, _name_55629);

        /** parser.e:956				private_sym &= Top()*/
        _28294 = _49Top();
        if (IS_SEQUENCE(_39private_sym_16927) && IS_ATOM(_28294)) {
            Ref(_28294);
            Append(&_39private_sym_16927, _39private_sym_16927, _28294);
        }
        else if (IS_ATOM(_39private_sym_16927) && IS_SEQUENCE(_28294)) {
        }
        else {
            Concat((object_ptr)&_39private_sym_16927, _39private_sym_16927, _28294);
        }
        DeRef(_28294);
        _28294 = NOVALUE;
L10: 
LF: 

        /** parser.e:959			if on_arg != n then*/
        if (_42on_arg_55109 == _n_55621)
        goto L13; // [633] 1037

        /** parser.e:960				if tok[T_ID] = RIGHT_ROUND then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28297 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28297, -27)){
            _28297 = NOVALUE;
            goto L14; // [647] 657
        }
        _28297 = NOVALUE;

        /** parser.e:961					putback( tok )*/
        Ref(_tok_55625);
        _42putback(_tok_55625);
L14: 

        /** parser.e:963				tok = next_token()*/
        _0 = _tok_55625;
        _tok_55625 = _42next_token();
        DeRef(_0);

        /** parser.e:964				if tok[T_ID] != COMMA and tok[T_ID] != QUESTION_MARK then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28300 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_28300)) {
            _28301 = (_28300 != -30);
        }
        else {
            _28301 = binary_op(NOTEQ, _28300, -30);
        }
        _28300 = NOVALUE;
        if (IS_ATOM_INT(_28301)) {
            if (_28301 == 0) {
                goto L15; // [676] 1036
            }
        }
        else {
            if (DBL_PTR(_28301)->dbl == 0.0) {
                goto L15; // [676] 1036
            }
        }
        _2 = (object)SEQ_PTR(_tok_55625);
        _28303 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_28303)) {
            _28304 = (_28303 != -31);
        }
        else {
            _28304 = binary_op(NOTEQ, _28303, -31);
        }
        _28303 = NOVALUE;
        if (_28304 == 0) {
            DeRef(_28304);
            _28304 = NOVALUE;
            goto L15; // [693] 1036
        }
        else {
            if (!IS_ATOM_INT(_28304) && DBL_PTR(_28304)->dbl == 0.0){
                DeRef(_28304);
                _28304 = NOVALUE;
                goto L15; // [693] 1036
            }
            DeRef(_28304);
            _28304 = NOVALUE;
        }
        DeRef(_28304);
        _28304 = NOVALUE;

        /** parser.e:966			  		if tok[T_ID] = RIGHT_ROUND then*/
        _2 = (object)SEQ_PTR(_tok_55625);
        _28305 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28305, -27)){
            _28305 = NOVALUE;
            goto L16; // [706] 1021
        }
        _28305 = NOVALUE;

        /** parser.e:968						if fda=0 then*/
        if (_fda_55622 != 0)
        goto L17; // [714] 727

        /** parser.e:969							WrongNumberArgs(subsym, "")*/
        RefDS(_21928);
        _42WrongNumberArgs(_subsym_55620, _21928);
        goto L18; // [724] 742
L17: 

        /** parser.e:970						elsif i<lnda then*/
        if (_i_55658 >= _lnda_55623)
        goto L19; // [731] 741

        /** parser.e:971							MissingArgs(subsym)*/
        _42MissingArgs(_subsym_55620);
L19: 
L18: 

        /** parser.e:973						lock_scanner = 1*/
        _42lock_scanner_55108 = 1;

        /** parser.e:974						use_private_list = 1*/
        _39use_private_list_16928 = 1;

        /** parser.e:977						while on_arg < n do*/
L1A: 
        if (_42on_arg_55109 >= _n_55621)
        goto L1B; // [761] 970

        /** parser.e:978							on_arg += 1*/
        _42on_arg_55109 = _42on_arg_55109 + 1;

        /** parser.e:979							if SymTab[subsym][S_OPCODE] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28311 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28311);
        _28312 = (object)*(((s1_ptr)_2)->base + 21);
        _28311 = NOVALUE;
        if (_28312 == 0) {
            _28312 = NOVALUE;
            goto L1C; // [787] 849
        }
        else {
            if (!IS_ATOM_INT(_28312) && DBL_PTR(_28312)->dbl == 0.0){
                _28312 = NOVALUE;
                goto L1C; // [787] 849
            }
            _28312 = NOVALUE;
        }
        _28312 = NOVALUE;

        /** parser.e:980								if atom(SymTab[subsym][S_CODE]) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28313 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28313);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _28314 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _28314 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _28313 = NOVALUE;
        _28315 = IS_ATOM(_28314);
        _28314 = NOVALUE;
        if (_28315 == 0)
        {
            _28315 = NOVALUE;
            goto L1D; // [807] 818
        }
        else{
            _28315 = NOVALUE;
        }

        /** parser.e:981									var_code = 0*/
        DeRef(_var_code_55628);
        _var_code_55628 = 0;
        goto L1E; // [815] 839
L1D: 

        /** parser.e:983									var_code = SymTab[subsym][S_CODE][on_arg]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28316 = (object)*(((s1_ptr)_2)->base + _subsym_55620);
        _2 = (object)SEQ_PTR(_28316);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _28317 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _28317 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _28316 = NOVALUE;
        DeRef(_var_code_55628);
        _2 = (object)SEQ_PTR(_28317);
        _var_code_55628 = (object)*(((s1_ptr)_2)->base + _42on_arg_55109);
        Ref(_var_code_55628);
        _28317 = NOVALUE;
L1E: 

        /** parser.e:986								name = ""*/
        RefDS(_21928);
        DeRef(_name_55629);
        _name_55629 = _21928;
        goto L1F; // [846] 896
L1C: 

        /** parser.e:989								s = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28319 = (object)*(((s1_ptr)_2)->base + _s_55627);
        _2 = (object)SEQ_PTR(_28319);
        _s_55627 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_55627)){
            _s_55627 = (object)DBL_PTR(_s_55627)->dbl;
        }
        _28319 = NOVALUE;

        /** parser.e:990								var_code = SymTab[s][S_CODE]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28321 = (object)*(((s1_ptr)_2)->base + _s_55627);
        DeRef(_var_code_55628);
        _2 = (object)SEQ_PTR(_28321);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _var_code_55628 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _var_code_55628 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        Ref(_var_code_55628);
        _28321 = NOVALUE;

        /** parser.e:991								name = SymTab[s][S_NAME]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28323 = (object)*(((s1_ptr)_2)->base + _s_55627);
        DeRef(_name_55629);
        _2 = (object)SEQ_PTR(_28323);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _name_55629 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _name_55629 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        Ref(_name_55629);
        _28323 = NOVALUE;
L1F: 

        /** parser.e:993							if sequence(var_code) then*/
        _28325 = IS_SEQUENCE(_var_code_55628);
        if (_28325 == 0)
        {
            _28325 = NOVALUE;
            goto L20; // [903] 955
        }
        else{
            _28325 = NOVALUE;
        }

        /** parser.e:995								putback( tok )*/
        Ref(_tok_55625);
        _42putback(_tok_55625);

        /** parser.e:996								start_playback(var_code)*/
        Ref(_var_code_55628);
        _42start_playback(_var_code_55628);

        /** parser.e:999								Expr()*/
        _42Expr();

        /** parser.e:1000								if on_arg < n then*/
        if (_42on_arg_55109 >= _n_55621)
        goto L1A; // [924] 759

        /** parser.e:1001									private_list = append(private_list,name)*/
        RefDS(_name_55629);
        Append(&_42private_list_55107, _42private_list_55107, _name_55629);

        /** parser.e:1002									private_sym &= Top()*/
        _28328 = _49Top();
        if (IS_SEQUENCE(_39private_sym_16927) && IS_ATOM(_28328)) {
            Ref(_28328);
            Append(&_39private_sym_16927, _39private_sym_16927, _28328);
        }
        else if (IS_ATOM(_39private_sym_16927) && IS_SEQUENCE(_28328)) {
        }
        else {
            Concat((object_ptr)&_39private_sym_16927, _39private_sym_16927, _28328);
        }
        DeRef(_28328);
        _28328 = NOVALUE;
        goto L1A; // [952] 759
L20: 

        /** parser.e:1005								CompileErr(29, on_arg)*/
        _52CompileErr(29, _42on_arg_55109, 0);

        /** parser.e:1007			  		    end while*/
        goto L1A; // [967] 759
L1B: 

        /** parser.e:1009						short_circuit += 1*/
        _42short_circuit_54363 = _42short_circuit_54363 + 1;

        /** parser.e:1010						if backed_up_tok[$][T_ID] = PLAYBACK_ENDS then*/
        if (IS_SEQUENCE(_42backed_up_tok_54370)){
                _28331 = SEQ_PTR(_42backed_up_tok_54370)->length;
        }
        else {
            _28331 = 1;
        }
        _2 = (object)SEQ_PTR(_42backed_up_tok_54370);
        _28332 = (object)*(((s1_ptr)_2)->base + _28331);
        _2 = (object)SEQ_PTR(_28332);
        _28333 = (object)*(((s1_ptr)_2)->base + 1);
        _28332 = NOVALUE;
        if (binary_op_a(NOTEQ, _28333, 505)){
            _28333 = NOVALUE;
            goto L21; // [997] 1009
        }
        _28333 = NOVALUE;

        /** parser.e:1011							backed_up_tok = {}*/
        RefDS(_21928);
        DeRefDS(_42backed_up_tok_54370);
        _42backed_up_tok_54370 = _21928;
L21: 

        /** parser.e:1014						restore_parseargs_states()*/
        _42restore_parseargs_states();

        /** parser.e:1016						return*/
        DeRef(_tok_55625);
        DeRef(_var_code_55628);
        DeRef(_name_55629);
        DeRef(_28249);
        _28249 = NOVALUE;
        DeRef(_28257);
        _28257 = NOVALUE;
        DeRef(_28301);
        _28301 = NOVALUE;
        return;
        goto L22; // [1018] 1035
L16: 

        /** parser.e:1018						putback(tok)*/
        Ref(_tok_55625);
        _42putback(_tok_55625);

        /** parser.e:1019						tok_match(COMMA)*/
        _42tok_match(-30, 0);
L22: 
L15: 
L13: 

        /** parser.e:1024		end for*/
        _i_55658 = _i_55658 + 1;
        goto L3; // [1039] 168
L4: 
        ;
    }

    /** parser.e:1025		tok = next_token()*/
    _0 = _tok_55625;
    _tok_55625 = _42next_token();
    DeRef(_0);

    /** parser.e:1026		short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;

    /** parser.e:1027		if tok[T_ID] != RIGHT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok_55625);
    _28337 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _28337, -27)){
        _28337 = NOVALUE;
        goto L23; // [1067] 1109
    }
    _28337 = NOVALUE;

    /** parser.e:1028			if tok[T_ID] = COMMA then*/
    _2 = (object)SEQ_PTR(_tok_55625);
    _28339 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28339, -30)){
        _28339 = NOVALUE;
        goto L24; // [1081] 1094
    }
    _28339 = NOVALUE;

    /** parser.e:1029				WrongNumberArgs(subsym, "only ")*/
    RefDS(_28341);
    _42WrongNumberArgs(_subsym_55620, _28341);
    goto L25; // [1091] 1108
L24: 

    /** parser.e:1031				putback(tok)*/
    Ref(_tok_55625);
    _42putback(_tok_55625);

    /** parser.e:1032				tok_match(RIGHT_ROUND)*/
    _42tok_match(-27, 0);
L25: 
L23: 

    /** parser.e:1036		restore_parseargs_states()*/
    _42restore_parseargs_states();

    /** parser.e:1037	end procedure*/
    DeRef(_tok_55625);
    DeRef(_var_code_55628);
    DeRef(_name_55629);
    DeRef(_28249);
    _28249 = NOVALUE;
    DeRef(_28257);
    _28257 = NOVALUE;
    DeRef(_28301);
    _28301 = NOVALUE;
    return;
    ;
}


void _42Forward_var(object _tok_55867, object _init_check_55868, object _op_55869)
{
    object _ref_55873 = NOVALUE;
    object _28345 = NOVALUE;
    object _28343 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_op_55869)) {
        _1 = (object)(DBL_PTR(_op_55869)->dbl);
        DeRefDS(_op_55869);
        _op_55869 = _1;
    }

    /** parser.e:1041		ref = new_forward_reference( VARIABLE, tok[T_SYM], op )*/
    _2 = (object)SEQ_PTR(_tok_55867);
    _28343 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28343);
    _ref_55873 = _41new_forward_reference(-100, _28343, _op_55869);
    _28343 = NOVALUE;
    if (!IS_ATOM_INT(_ref_55873)) {
        _1 = (object)(DBL_PTR(_ref_55873)->dbl);
        DeRefDS(_ref_55873);
        _ref_55873 = _1;
    }

    /** parser.e:1042		emit_opnd( - ref )*/
    if ((uintptr_t)_ref_55873 == (uintptr_t)HIGH_BITS){
        _28345 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _28345 = - _ref_55873;
    }
    _49emit_opnd(_28345);
    _28345 = NOVALUE;

    /** parser.e:1043		if init_check != -1 then*/
    if (_init_check_55868 == -1)
    goto L1; // [33] 44

    /** parser.e:1044			Forward_InitCheck( tok, init_check )*/
    Ref(_tok_55867);
    _42Forward_InitCheck(_tok_55867, _init_check_55868);
L1: 

    /** parser.e:1047	end procedure*/
    DeRef(_tok_55867);
    return;
    ;
}


void _42Forward_call(object _tok_55886, object _opcode_55887)
{
    object _args_55890 = NOVALUE;
    object _proc_55892 = NOVALUE;
    object _tok_id_55895 = NOVALUE;
    object _id_55902 = NOVALUE;
    object _fc_pc_55925 = NOVALUE;
    object _28364 = NOVALUE;
    object _28363 = NOVALUE;
    object _28360 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1050		integer args = 0*/
    _args_55890 = 0;

    /** parser.e:1051		symtab_index proc = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_55886);
    _proc_55892 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_proc_55892)){
        _proc_55892 = (object)DBL_PTR(_proc_55892)->dbl;
    }

    /** parser.e:1052		integer tok_id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_55886);
    _tok_id_55895 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_tok_id_55895)){
        _tok_id_55895 = (object)DBL_PTR(_tok_id_55895)->dbl;
    }

    /** parser.e:1053		remove_symbol( proc )*/
    _56remove_symbol(_proc_55892);

    /** parser.e:1054		short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:1055		while 1 do*/
L1: 

    /** parser.e:1056			tok = next_token()*/
    _0 = _tok_55886;
    _tok_55886 = _42next_token();
    DeRef(_0);

    /** parser.e:1057			integer id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_55886);
    _id_55902 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_55902)){
        _id_55902 = (object)DBL_PTR(_id_55902)->dbl;
    }

    /** parser.e:1059			switch id do*/
    _0 = _id_55902;
    switch ( _0 ){ 

        /** parser.e:1060				case COMMA then*/
        case -30:

        /** parser.e:1061					emit_opnd( 0 ) -- clean this up later*/
        _49emit_opnd(0);

        /** parser.e:1062					args += 1*/
        _args_55890 = _args_55890 + 1;
        goto L2; // [83] 166

        /** parser.e:1064				case RIGHT_ROUND then*/
        case -27:

        /** parser.e:1065					exit*/
        goto L3; // [93] 173
        goto L2; // [95] 166

        /** parser.e:1067				case else*/
        default:

        /** parser.e:1068					putback( tok )*/
        Ref(_tok_55886);
        _42putback(_tok_55886);

        /** parser.e:1069					call_proc( forward_expr, {} )*/
        _0 = (object)_00[_42forward_expr_55396].addr;
        (*(intptr_t (*)())_0)(
                             );

        /** parser.e:1070					args += 1*/
        _args_55890 = _args_55890 + 1;

        /** parser.e:1072					tok = next_token()*/
        _0 = _tok_55886;
        _tok_55886 = _42next_token();
        DeRef(_0);

        /** parser.e:1073					id = tok[T_ID]*/
        _2 = (object)SEQ_PTR(_tok_55886);
        _id_55902 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_id_55902)){
            _id_55902 = (object)DBL_PTR(_id_55902)->dbl;
        }

        /** parser.e:1074					if id = RIGHT_ROUND then*/
        if (_id_55902 != -27)
        goto L4; // [138] 149

        /** parser.e:1075						exit*/
        goto L3; // [146] 173
L4: 

        /** parser.e:1078					if id != COMMA then*/
        if (_id_55902 == -30)
        goto L5; // [153] 165

        /** parser.e:1079							CompileErr(69)*/
        RefDS(_21928);
        _52CompileErr(69, _21928, 0);
L5: 
    ;}L2: 

    /** parser.e:1082		end while*/
    goto L1; // [170] 46
L3: 

    /** parser.e:1084		integer fc_pc = length( Code ) + 1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28360 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28360 = 1;
    }
    _fc_pc_55925 = _28360 + 1;
    _28360 = NOVALUE;

    /** parser.e:1085		emit_opnd( args )*/
    _49emit_opnd(_args_55890);

    /** parser.e:1087		op_info1 = proc*/
    _49op_info1_50372 = _proc_55892;

    /** parser.e:1088		if tok_id = QUALIFIED_VARIABLE then*/
    if (_tok_id_55895 != 512)
    goto L6; // [200] 224

    /** parser.e:1089			set_qualified_fwd( SymTab[proc][S_FILE_NO] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28363 = (object)*(((s1_ptr)_2)->base + _proc_55892);
    _2 = (object)SEQ_PTR(_28363);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _28364 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _28364 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _28363 = NOVALUE;
    Ref(_28364);
    _63set_qualified_fwd(_28364);
    _28364 = NOVALUE;
    goto L7; // [221] 230
L6: 

    /** parser.e:1091			set_qualified_fwd( -1 )*/
    _63set_qualified_fwd(-1);
L7: 

    /** parser.e:1093		emit_op( opcode )*/
    _49emit_op(_opcode_55887);

    /** parser.e:1094		if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L8; // [239] 258

    /** parser.e:1095			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L9; // [246] 257
    }
    else{
    }

    /** parser.e:1096				emit_op(UPDATE_GLOBALS)*/
    _49emit_op(89);
L9: 
L8: 

    /** parser.e:1099		short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;

    /** parser.e:1100	end procedure*/
    DeRef(_tok_55886);
    return;
    ;
}


void _42Object_call(object _tok_55953)
{
    object _tok2_55955 = NOVALUE;
    object _tok3_55956 = NOVALUE;
    object _save_factors_55957 = NOVALUE;
    object _save_lhs_subs_level_55958 = NOVALUE;
    object _sym_55960 = NOVALUE;
    object _28422 = NOVALUE;
    object _28420 = NOVALUE;
    object _28417 = NOVALUE;
    object _28413 = NOVALUE;
    object _28407 = NOVALUE;
    object _28404 = NOVALUE;
    object _28403 = NOVALUE;
    object _28402 = NOVALUE;
    object _28400 = NOVALUE;
    object _28399 = NOVALUE;
    object _28397 = NOVALUE;
    object _28396 = NOVALUE;
    object _28393 = NOVALUE;
    object _28392 = NOVALUE;
    object _28391 = NOVALUE;
    object _28389 = NOVALUE;
    object _28388 = NOVALUE;
    object _28386 = NOVALUE;
    object _28385 = NOVALUE;
    object _28384 = NOVALUE;
    object _28383 = NOVALUE;
    object _28381 = NOVALUE;
    object _28380 = NOVALUE;
    object _28378 = NOVALUE;
    object _28377 = NOVALUE;
    object _28374 = NOVALUE;
    object _28372 = NOVALUE;
    object _28371 = NOVALUE;
    object _28369 = NOVALUE;
    object _28368 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:1104		integer save_factors, save_lhs_subs_level*/

    /** parser.e:1107		tok2 = next_token()*/
    _0 = _tok2_55955;
    _tok2_55955 = _42next_token();
    DeRef(_0);

    /** parser.e:1108		if tok2[T_ID] = VARIABLE or tok2[T_ID] = QUALIFIED_VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28368 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28368)) {
        _28369 = (_28368 == -100);
    }
    else {
        _28369 = binary_op(EQUALS, _28368, -100);
    }
    _28368 = NOVALUE;
    if (IS_ATOM_INT(_28369)) {
        if (_28369 != 0) {
            goto L1; // [22] 43
        }
    }
    else {
        if (DBL_PTR(_28369)->dbl != 0.0) {
            goto L1; // [22] 43
        }
    }
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28371 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28371)) {
        _28372 = (_28371 == 512);
    }
    else {
        _28372 = binary_op(EQUALS, _28371, 512);
    }
    _28371 = NOVALUE;
    if (_28372 == 0) {
        DeRef(_28372);
        _28372 = NOVALUE;
        goto L2; // [39] 582
    }
    else {
        if (!IS_ATOM_INT(_28372) && DBL_PTR(_28372)->dbl == 0.0){
            DeRef(_28372);
            _28372 = NOVALUE;
            goto L2; // [39] 582
        }
        DeRef(_28372);
        _28372 = NOVALUE;
    }
    DeRef(_28372);
    _28372 = NOVALUE;
L1: 

    /** parser.e:1109			tok3 = next_token()*/
    _0 = _tok3_55956;
    _tok3_55956 = _42next_token();
    DeRef(_0);

    /** parser.e:1110			if tok3[T_ID] = RIGHT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok3_55956);
    _28374 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28374, -27)){
        _28374 = NOVALUE;
        goto L3; // [58] 155
    }
    _28374 = NOVALUE;

    /** parser.e:1112				sym = tok2[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _sym_55960 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_55960)){
        _sym_55960 = (object)DBL_PTR(_sym_55960)->dbl;
    }

    /** parser.e:1113				if SymTab[sym][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28377 = (object)*(((s1_ptr)_2)->base + _sym_55960);
    _2 = (object)SEQ_PTR(_28377);
    _28378 = (object)*(((s1_ptr)_2)->base + 4);
    _28377 = NOVALUE;
    if (binary_op_a(NOTEQ, _28378, 9)){
        _28378 = NOVALUE;
        goto L4; // [88] 108
    }
    _28378 = NOVALUE;

    /** parser.e:1114					Forward_var( tok2 )*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28380 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tok2_55955);
    Ref(_28380);
    _42Forward_var(_tok2_55955, -1, _28380);
    _28380 = NOVALUE;
    goto L5; // [105] 147
L4: 

    /** parser.e:1116					SymTab[sym][S_USAGE] = or_bits(SymTab[sym][S_USAGE], U_READ)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_55960 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28383 = (object)*(((s1_ptr)_2)->base + _sym_55960);
    _2 = (object)SEQ_PTR(_28383);
    _28384 = (object)*(((s1_ptr)_2)->base + 5);
    _28383 = NOVALUE;
    if (IS_ATOM_INT(_28384)) {
        {uintptr_t tu;
             tu = (uintptr_t)_28384 | (uintptr_t)1;
             _28385 = MAKE_UINT(tu);
        }
    }
    else {
        _28385 = binary_op(OR_BITS, _28384, 1);
    }
    _28384 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28385;
    if( _1 != _28385 ){
        DeRef(_1);
    }
    _28385 = NOVALUE;
    _28381 = NOVALUE;

    /** parser.e:1118					emit_opnd(sym)*/
    _49emit_opnd(_sym_55960);
L5: 

    /** parser.e:1120				putback( tok3 )*/
    Ref(_tok3_55956);
    _42putback(_tok3_55956);
    goto L6; // [152] 571
L3: 

    /** parser.e:1122			elsif tok3[T_ID] = COMMA then*/
    _2 = (object)SEQ_PTR(_tok3_55956);
    _28386 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28386, -30)){
        _28386 = NOVALUE;
        goto L7; // [165] 184
    }
    _28386 = NOVALUE;

    /** parser.e:1124				WrongNumberArgs(tok[T_SYM], "")*/
    _2 = (object)SEQ_PTR(_tok_55953);
    _28388 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28388);
    RefDS(_21928);
    _42WrongNumberArgs(_28388, _21928);
    _28388 = NOVALUE;
    goto L6; // [181] 571
L7: 

    /** parser.e:1126			elsif tok3[T_ID] = LEFT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok3_55956);
    _28389 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28389, -26)){
        _28389 = NOVALUE;
        goto L8; // [194] 244
    }
    _28389 = NOVALUE;

    /** parser.e:1127				if SymTab[tok2[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28391 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28391)){
        _28392 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28391)->dbl));
    }
    else{
        _28392 = (object)*(((s1_ptr)_2)->base + _28391);
    }
    _2 = (object)SEQ_PTR(_28392);
    _28393 = (object)*(((s1_ptr)_2)->base + 4);
    _28392 = NOVALUE;
    if (binary_op_a(NOTEQ, _28393, 9)){
        _28393 = NOVALUE;
        goto L9; // [220] 235
    }
    _28393 = NOVALUE;

    /** parser.e:1128					Forward_call( tok2, FUNC_FORWARD )*/
    Ref(_tok2_55955);
    _42Forward_call(_tok2_55955, 196);
    goto L6; // [232] 571
L9: 

    /** parser.e:1130					Function_call( tok2 )*/
    Ref(_tok2_55955);
    _42Function_call(_tok2_55955);
    goto L6; // [241] 571
L8: 

    /** parser.e:1139				sym = tok2[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _sym_55960 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_55960)){
        _sym_55960 = (object)DBL_PTR(_sym_55960)->dbl;
    }

    /** parser.e:1140				if SymTab[sym][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28396 = (object)*(((s1_ptr)_2)->base + _sym_55960);
    _2 = (object)SEQ_PTR(_28396);
    _28397 = (object)*(((s1_ptr)_2)->base + 4);
    _28396 = NOVALUE;
    if (binary_op_a(NOTEQ, _28397, 9)){
        _28397 = NOVALUE;
        goto LA; // [270] 292
    }
    _28397 = NOVALUE;

    /** parser.e:1141					Forward_var( tok2, TRUE )*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28399 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tok2_55955);
    Ref(_28399);
    _42Forward_var(_tok2_55955, _9TRUE_444, _28399);
    _28399 = NOVALUE;
    goto LB; // [289] 339
LA: 

    /** parser.e:1143					SymTab[sym][S_USAGE] = or_bits(SymTab[sym][S_USAGE], U_READ)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_55960 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28402 = (object)*(((s1_ptr)_2)->base + _sym_55960);
    _2 = (object)SEQ_PTR(_28402);
    _28403 = (object)*(((s1_ptr)_2)->base + 5);
    _28402 = NOVALUE;
    if (IS_ATOM_INT(_28403)) {
        {uintptr_t tu;
             tu = (uintptr_t)_28403 | (uintptr_t)1;
             _28404 = MAKE_UINT(tu);
        }
    }
    else {
        _28404 = binary_op(OR_BITS, _28403, 1);
    }
    _28403 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28404;
    if( _1 != _28404 ){
        DeRef(_1);
    }
    _28404 = NOVALUE;
    _28400 = NOVALUE;

    /** parser.e:1144					InitCheck(sym, TRUE)*/
    _42InitCheck(_sym_55960, _9TRUE_444);

    /** parser.e:1145					emit_opnd(sym)*/
    _49emit_opnd(_sym_55960);
LB: 

    /** parser.e:1149				if sym = left_sym then*/
    if (_sym_55960 != _42left_sym_54404)
    goto LC; // [343] 353

    /** parser.e:1150					lhs_subs_level = 0*/
    _42lhs_subs_level_54402 = 0;
LC: 

    /** parser.e:1155				tok2 = tok3*/
    Ref(_tok3_55956);
    DeRef(_tok2_55955);
    _tok2_55955 = _tok3_55956;

    /** parser.e:1156				current_sequence = append(current_sequence, sym)*/
    Append(&_49current_sequence_50380, _49current_sequence_50380, _sym_55960);

    /** parser.e:1157				while tok2[T_ID] = LEFT_SQUARE do*/
LD: 
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28407 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28407, -28)){
        _28407 = NOVALUE;
        goto LE; // [381] 549
    }
    _28407 = NOVALUE;

    /** parser.e:1158					subs_depth += 1*/
    _42subs_depth_54405 = _42subs_depth_54405 + 1;

    /** parser.e:1159					if lhs_subs_level >= 0 then*/
    if (_42lhs_subs_level_54402 < 0)
    goto LF; // [397] 410

    /** parser.e:1160						lhs_subs_level += 1*/
    _42lhs_subs_level_54402 = _42lhs_subs_level_54402 + 1;
LF: 

    /** parser.e:1162					save_factors = factors*/
    _save_factors_55957 = _42factors_54401;

    /** parser.e:1163					save_lhs_subs_level = lhs_subs_level*/
    _save_lhs_subs_level_55958 = _42lhs_subs_level_54402;

    /** parser.e:1164					call_proc(forward_expr, {})*/
    _0 = (object)_00[_42forward_expr_55396].addr;
    (*(intptr_t (*)())_0)(
                         );

    /** parser.e:1165					tok2 = next_token()*/
    _0 = _tok2_55955;
    _tok2_55955 = _42next_token();
    DeRef(_0);

    /** parser.e:1166					if tok2[T_ID] = SLICE then*/
    _2 = (object)SEQ_PTR(_tok2_55955);
    _28413 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28413, 513)){
        _28413 = NOVALUE;
        goto L10; // [446] 484
    }
    _28413 = NOVALUE;

    /** parser.e:1167						call_proc(forward_expr, {})*/
    _0 = (object)_00[_42forward_expr_55396].addr;
    (*(intptr_t (*)())_0)(
                         );

    /** parser.e:1168						emit_op(RHS_SLICE)*/
    _49emit_op(46);

    /** parser.e:1169						tok_match(RIGHT_SQUARE)*/
    _42tok_match(-29, 0);

    /** parser.e:1170						tok2 = next_token()*/
    _0 = _tok2_55955;
    _tok2_55955 = _42next_token();
    DeRef(_0);

    /** parser.e:1171						exit*/
    goto LE; // [479] 549
    goto L11; // [481] 529
L10: 

    /** parser.e:1173						putback(tok2)*/
    Ref(_tok2_55955);
    _42putback(_tok2_55955);

    /** parser.e:1174						tok_match(RIGHT_SQUARE)*/
    _42tok_match(-29, 0);

    /** parser.e:1175						subs_depth -= 1*/
    _42subs_depth_54405 = _42subs_depth_54405 - 1;

    /** parser.e:1176						current_sequence = remove( current_sequence, length( current_sequence ) )*/
    if (IS_SEQUENCE(_49current_sequence_50380)){
            _28417 = SEQ_PTR(_49current_sequence_50380)->length;
    }
    else {
        _28417 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_49current_sequence_50380);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_28417)) ? _28417 : (object)(DBL_PTR(_28417)->dbl);
        int stop = (IS_ATOM_INT(_28417)) ? _28417 : (object)(DBL_PTR(_28417)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380 );
            }
            else Tail(SEQ_PTR(_49current_sequence_50380), stop+1, &_49current_sequence_50380);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380);
        }
        else {
            assign_slice_seq = &assign_space;
            _49current_sequence_50380 = Remove_elements(start, stop, (SEQ_PTR(_49current_sequence_50380)->ref == 1));
        }
    }
    _28417 = NOVALUE;
    _28417 = NOVALUE;

    /** parser.e:1177						emit_op(RHS_SUBS)*/
    _49emit_op(25);
L11: 

    /** parser.e:1180					factors = save_factors*/
    _42factors_54401 = _save_factors_55957;

    /** parser.e:1181					lhs_subs_level = save_lhs_subs_level*/
    _42lhs_subs_level_54402 = _save_lhs_subs_level_55958;

    /** parser.e:1182					tok2 = next_token()*/
    _0 = _tok2_55955;
    _tok2_55955 = _42next_token();
    DeRef(_0);

    /** parser.e:1183				end while*/
    goto LD; // [546] 373
LE: 

    /** parser.e:1184				current_sequence = remove( current_sequence, length( current_sequence ) )*/
    if (IS_SEQUENCE(_49current_sequence_50380)){
            _28420 = SEQ_PTR(_49current_sequence_50380)->length;
    }
    else {
        _28420 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_49current_sequence_50380);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_28420)) ? _28420 : (object)(DBL_PTR(_28420)->dbl);
        int stop = (IS_ATOM_INT(_28420)) ? _28420 : (object)(DBL_PTR(_28420)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380 );
            }
            else Tail(SEQ_PTR(_49current_sequence_50380), stop+1, &_49current_sequence_50380);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380);
        }
        else {
            assign_slice_seq = &assign_space;
            _49current_sequence_50380 = Remove_elements(start, stop, (SEQ_PTR(_49current_sequence_50380)->ref == 1));
        }
    }
    _28420 = NOVALUE;
    _28420 = NOVALUE;

    /** parser.e:1185				putback(tok2)*/
    Ref(_tok2_55955);
    _42putback(_tok2_55955);
L6: 

    /** parser.e:1189			tok_match( RIGHT_ROUND )*/
    _42tok_match(-27, 0);
    goto L12; // [579] 599
L2: 

    /** parser.e:1191			putback(tok2)*/
    Ref(_tok2_55955);
    _42putback(_tok2_55955);

    /** parser.e:1192			ParseArgs(tok[T_SYM])*/
    _2 = (object)SEQ_PTR(_tok_55953);
    _28422 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28422);
    _42ParseArgs(_28422);
    _28422 = NOVALUE;
L12: 

    /** parser.e:1194	end procedure*/
    DeRef(_tok_55953);
    DeRef(_tok2_55955);
    DeRef(_tok3_55956);
    _28391 = NOVALUE;
    DeRef(_28369);
    _28369 = NOVALUE;
    return;
    ;
}


void _42Function_call(object _tok_56098)
{
    object _id_56099 = NOVALUE;
    object _scope_56100 = NOVALUE;
    object _opcode_56101 = NOVALUE;
    object _e_56102 = NOVALUE;
    object _28463 = NOVALUE;
    object _28462 = NOVALUE;
    object _28461 = NOVALUE;
    object _28460 = NOVALUE;
    object _28459 = NOVALUE;
    object _28458 = NOVALUE;
    object _28457 = NOVALUE;
    object _28455 = NOVALUE;
    object _28454 = NOVALUE;
    object _28452 = NOVALUE;
    object _28451 = NOVALUE;
    object _28450 = NOVALUE;
    object _28449 = NOVALUE;
    object _28448 = NOVALUE;
    object _28447 = NOVALUE;
    object _28446 = NOVALUE;
    object _28445 = NOVALUE;
    object _28444 = NOVALUE;
    object _28443 = NOVALUE;
    object _28442 = NOVALUE;
    object _28441 = NOVALUE;
    object _28440 = NOVALUE;
    object _28439 = NOVALUE;
    object _28438 = NOVALUE;
    object _28436 = NOVALUE;
    object _28434 = NOVALUE;
    object _28433 = NOVALUE;
    object _28431 = NOVALUE;
    object _28429 = NOVALUE;
    object _28428 = NOVALUE;
    object _28427 = NOVALUE;
    object _28426 = NOVALUE;
    object _28424 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:1200		id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _id_56099 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_56099)){
        _id_56099 = (object)DBL_PTR(_id_56099)->dbl;
    }

    /** parser.e:1201		if id = FUNC or id = TYPE then*/
    _28424 = (_id_56099 == 501);
    if (_28424 != 0) {
        goto L1; // [19] 34
    }
    _28426 = (_id_56099 == 504);
    if (_28426 == 0)
    {
        DeRef(_28426);
        _28426 = NOVALUE;
        goto L2; // [30] 46
    }
    else{
        DeRef(_28426);
        _28426 = NOVALUE;
    }
L1: 

    /** parser.e:1203			UndefinedVar( tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _28427 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28427);
    _42UndefinedVar(_28427);
    _28427 = NOVALUE;
L2: 

    /** parser.e:1206		e = SymTab[tok[T_SYM]][S_EFFECT]*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _28428 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28428)){
        _28429 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28428)->dbl));
    }
    else{
        _28429 = (object)*(((s1_ptr)_2)->base + _28428);
    }
    _2 = (object)SEQ_PTR(_28429);
    _e_56102 = (object)*(((s1_ptr)_2)->base + 23);
    if (!IS_ATOM_INT(_e_56102)){
        _e_56102 = (object)DBL_PTR(_e_56102)->dbl;
    }
    _28429 = NOVALUE;

    /** parser.e:1207		if e then*/
    if (_e_56102 == 0)
    {
        goto L3; // [70] 229
    }
    else{
    }

    /** parser.e:1209			if e = E_ALL_EFFECT or tok[T_SYM] > left_sym then*/
    _28431 = (_e_56102 == 1073741823);
    if (_28431 != 0) {
        goto L4; // [81] 102
    }
    _2 = (object)SEQ_PTR(_tok_56098);
    _28433 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_28433)) {
        _28434 = (_28433 > _42left_sym_54404);
    }
    else {
        _28434 = binary_op(GREATER, _28433, _42left_sym_54404);
    }
    _28433 = NOVALUE;
    if (_28434 == 0) {
        DeRef(_28434);
        _28434 = NOVALUE;
        goto L5; // [98] 111
    }
    else {
        if (!IS_ATOM_INT(_28434) && DBL_PTR(_28434)->dbl == 0.0){
            DeRef(_28434);
            _28434 = NOVALUE;
            goto L5; // [98] 111
        }
        DeRef(_28434);
        _28434 = NOVALUE;
    }
    DeRef(_28434);
    _28434 = NOVALUE;
L4: 

    /** parser.e:1211				side_effect_calls = or_bits(side_effect_calls, e)*/
    {uintptr_t tu;
         tu = (uintptr_t)_42side_effect_calls_54400 | (uintptr_t)_e_56102;
         _42side_effect_calls_54400 = MAKE_UINT(tu);
    }
L5: 

    /** parser.e:1214			SymTab[CurrentSub][S_EFFECT] = or_bits(SymTab[CurrentSub][S_EFFECT], e)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28438 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_28438);
    _28439 = (object)*(((s1_ptr)_2)->base + 23);
    _28438 = NOVALUE;
    if (IS_ATOM_INT(_28439)) {
        {uintptr_t tu;
             tu = (uintptr_t)_28439 | (uintptr_t)_e_56102;
             _28440 = MAKE_UINT(tu);
        }
    }
    else {
        _28440 = binary_op(OR_BITS, _28439, _e_56102);
    }
    _28439 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 23);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28440;
    if( _1 != _28440 ){
        DeRef(_1);
    }
    _28440 = NOVALUE;
    _28436 = NOVALUE;

    /** parser.e:1216			if short_circuit > 0 and short_circuit_B and*/
    _28441 = (_42short_circuit_54363 > 0);
    if (_28441 == 0) {
        _28442 = 0;
        goto L6; // [154] 164
    }
    _28442 = (_42short_circuit_B_54365 != 0);
L6: 
    if (_28442 == 0) {
        goto L7; // [164] 228
    }
    _28444 = find_from(_id_56099, _40FUNC_TOKS_16435, 1);
    if (_28444 == 0)
    {
        _28444 = NOVALUE;
        goto L7; // [176] 228
    }
    else{
        _28444 = NOVALUE;
    }

    /** parser.e:1218				Warning(219, short_circuit_warning_flag,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _28445 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    Ref(_28445);
    RefDS(_21928);
    _28446 = _16abbreviate_path(_28445, _21928);
    _28445 = NOVALUE;
    _2 = (object)SEQ_PTR(_tok_56098);
    _28447 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28447)){
        _28448 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28447)->dbl));
    }
    else{
        _28448 = (object)*(((s1_ptr)_2)->base + _28447);
    }
    _2 = (object)SEQ_PTR(_28448);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28449 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28449 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28448 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _28446;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    Ref(_28449);
    ((intptr_t*)_2)[3] = _28449;
    _28450 = MAKE_SEQ(_1);
    _28449 = NOVALUE;
    _28446 = NOVALUE;
    _52Warning(219, 2, _28450);
    _28450 = NOVALUE;
L7: 
L3: 

    /** parser.e:1222		tok_match(LEFT_ROUND)*/
    _42tok_match(-26, 0);

    /** parser.e:1223		scope = SymTab[tok[T_SYM]][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _28451 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28451)){
        _28452 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28451)->dbl));
    }
    else{
        _28452 = (object)*(((s1_ptr)_2)->base + _28451);
    }
    _2 = (object)SEQ_PTR(_28452);
    _scope_56100 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_56100)){
        _scope_56100 = (object)DBL_PTR(_scope_56100)->dbl;
    }
    _28452 = NOVALUE;

    /** parser.e:1224		opcode = SymTab[tok[T_SYM]][S_OPCODE]*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _28454 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28454)){
        _28455 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28454)->dbl));
    }
    else{
        _28455 = (object)*(((s1_ptr)_2)->base + _28454);
    }
    _2 = (object)SEQ_PTR(_28455);
    _opcode_56101 = (object)*(((s1_ptr)_2)->base + 21);
    if (!IS_ATOM_INT(_opcode_56101)){
        _opcode_56101 = (object)DBL_PTR(_opcode_56101)->dbl;
    }
    _28455 = NOVALUE;

    /** parser.e:1225		if equal(SymTab[tok[T_SYM]][S_NAME],"object") and scope = SC_PREDEF then*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _28457 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28457)){
        _28458 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28457)->dbl));
    }
    else{
        _28458 = (object)*(((s1_ptr)_2)->base + _28457);
    }
    _2 = (object)SEQ_PTR(_28458);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _28459 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _28459 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _28458 = NOVALUE;
    if (_28459 == _22890)
    _28460 = 1;
    else if (IS_ATOM_INT(_28459) && IS_ATOM_INT(_22890))
    _28460 = 0;
    else
    _28460 = (compare(_28459, _22890) == 0);
    _28459 = NOVALUE;
    if (_28460 == 0) {
        goto L8; // [305] 327
    }
    _28462 = (_scope_56100 == 7);
    if (_28462 == 0)
    {
        DeRef(_28462);
        _28462 = NOVALUE;
        goto L8; // [316] 327
    }
    else{
        DeRef(_28462);
        _28462 = NOVALUE;
    }

    /** parser.e:1227			Object_call( tok )*/
    Ref(_tok_56098);
    _42Object_call(_tok_56098);
    goto L9; // [324] 339
L8: 

    /** parser.e:1230			ParseArgs(tok[T_SYM])*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _28463 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28463);
    _42ParseArgs(_28463);
    _28463 = NOVALUE;
L9: 

    /** parser.e:1233		if scope = SC_PREDEF then*/
    if (_scope_56100 != 7)
    goto LA; // [343] 355

    /** parser.e:1234			emit_op(opcode)*/
    _49emit_op(_opcode_56101);
    goto LB; // [352] 393
LA: 

    /** parser.e:1236			op_info1 = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_56098);
    _49op_info1_50372 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_49op_info1_50372)){
        _49op_info1_50372 = (object)DBL_PTR(_49op_info1_50372)->dbl;
    }

    /** parser.e:1238			emit_or_inline()*/
    _68emit_or_inline();

    /** parser.e:1239			if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto LC; // [373] 392

    /** parser.e:1240				if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto LD; // [380] 391
    }
    else{
    }

    /** parser.e:1241					emit_op(UPDATE_GLOBALS)*/
    _49emit_op(89);
LD: 
LC: 
LB: 

    /** parser.e:1245	end procedure*/
    DeRef(_tok_56098);
    _28447 = NOVALUE;
    _28451 = NOVALUE;
    DeRef(_28431);
    _28431 = NOVALUE;
    _28457 = NOVALUE;
    DeRef(_28424);
    _28424 = NOVALUE;
    DeRef(_28441);
    _28441 = NOVALUE;
    _28428 = NOVALUE;
    _28454 = NOVALUE;
    return;
    ;
}


void _42Factor()
{
    object _tok_56206 = NOVALUE;
    object _id_56207 = NOVALUE;
    object _n_56208 = NOVALUE;
    object _save_factors_56209 = NOVALUE;
    object _save_lhs_subs_level_56210 = NOVALUE;
    object _sym_56212 = NOVALUE;
    object _forward_56243 = NOVALUE;
    object _28523 = NOVALUE;
    object _28522 = NOVALUE;
    object _28521 = NOVALUE;
    object _28519 = NOVALUE;
    object _28518 = NOVALUE;
    object _28517 = NOVALUE;
    object _28516 = NOVALUE;
    object _28515 = NOVALUE;
    object _28513 = NOVALUE;
    object _28509 = NOVALUE;
    object _28506 = NOVALUE;
    object _28502 = NOVALUE;
    object _28496 = NOVALUE;
    object _28491 = NOVALUE;
    object _28490 = NOVALUE;
    object _28489 = NOVALUE;
    object _28487 = NOVALUE;
    object _28486 = NOVALUE;
    object _28484 = NOVALUE;
    object _28482 = NOVALUE;
    object _28481 = NOVALUE;
    object _28480 = NOVALUE;
    object _28478 = NOVALUE;
    object _28471 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:1250		integer id, n*/

    /** parser.e:1251		integer save_factors, save_lhs_subs_level*/

    /** parser.e:1254		factors += 1*/
    _42factors_54401 = _42factors_54401 + 1;

    /** parser.e:1255		tok = next_token()*/
    _0 = _tok_56206;
    _tok_56206 = _42next_token();
    DeRef(_0);

    /** parser.e:1256		id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56206);
    _id_56207 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_56207)){
        _id_56207 = (object)DBL_PTR(_id_56207)->dbl;
    }

    /** parser.e:1257		if id = RECORDED then*/
    if (_id_56207 != 508)
    goto L1; // [32] 59

    /** parser.e:1258			tok = read_recorded_token(tok[T_SYM])*/
    _2 = (object)SEQ_PTR(_tok_56206);
    _28471 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28471);
    _0 = _tok_56206;
    _tok_56206 = _42read_recorded_token(_28471);
    DeRef(_0);
    _28471 = NOVALUE;

    /** parser.e:1259			id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56206);
    _id_56207 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_56207)){
        _id_56207 = (object)DBL_PTR(_id_56207)->dbl;
    }
L1: 

    /** parser.e:1261		switch id label "factor" do*/
    _0 = _id_56207;
    switch ( _0 ){ 

        /** parser.e:1262			case VARIABLE, QUALIFIED_VARIABLE then*/
        case -100:
        case 512:

        /** parser.e:1263				sym = tok[T_SYM]*/
        _2 = (object)SEQ_PTR(_tok_56206);
        _sym_56212 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_sym_56212)){
            _sym_56212 = (object)DBL_PTR(_sym_56212)->dbl;
        }

        /** parser.e:1264				if sym < 0 or SymTab[sym][S_SCOPE] = SC_UNDEFINED then*/
        _28478 = (_sym_56212 < 0);
        if (_28478 != 0) {
            goto L2; // [88] 115
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28480 = (object)*(((s1_ptr)_2)->base + _sym_56212);
        _2 = (object)SEQ_PTR(_28480);
        _28481 = (object)*(((s1_ptr)_2)->base + 4);
        _28480 = NOVALUE;
        if (IS_ATOM_INT(_28481)) {
            _28482 = (_28481 == 9);
        }
        else {
            _28482 = binary_op(EQUALS, _28481, 9);
        }
        _28481 = NOVALUE;
        if (_28482 == 0) {
            DeRef(_28482);
            _28482 = NOVALUE;
            goto L3; // [111] 177
        }
        else {
            if (!IS_ATOM_INT(_28482) && DBL_PTR(_28482)->dbl == 0.0){
                DeRef(_28482);
                _28482 = NOVALUE;
                goto L3; // [111] 177
            }
            DeRef(_28482);
            _28482 = NOVALUE;
        }
        DeRef(_28482);
        _28482 = NOVALUE;
L2: 

        /** parser.e:1265					token forward = next_token()*/
        _0 = _forward_56243;
        _forward_56243 = _42next_token();
        DeRef(_0);

        /** parser.e:1266					if forward[T_ID] = LEFT_ROUND then*/
        _2 = (object)SEQ_PTR(_forward_56243);
        _28484 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28484, -26)){
            _28484 = NOVALUE;
            goto L4; // [130] 151
        }
        _28484 = NOVALUE;

        /** parser.e:1267						Forward_call( tok, FUNC_FORWARD )*/
        Ref(_tok_56206);
        _42Forward_call(_tok_56206, 196);

        /** parser.e:1268						break "factor"*/
        DeRef(_forward_56243);
        _forward_56243 = NOVALUE;
        goto L5; // [146] 690
        goto L6; // [148] 172
L4: 

        /** parser.e:1270						putback( forward )*/
        Ref(_forward_56243);
        _42putback(_forward_56243);

        /** parser.e:1271						Forward_var( tok, TRUE )*/
        _2 = (object)SEQ_PTR(_tok_56206);
        _28486 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_tok_56206);
        Ref(_28486);
        _42Forward_var(_tok_56206, _9TRUE_444, _28486);
        _28486 = NOVALUE;
L6: 
        DeRef(_forward_56243);
        _forward_56243 = NOVALUE;
        goto L7; // [174] 229
L3: 

        /** parser.e:1275					UndefinedVar(sym)*/
        _42UndefinedVar(_sym_56212);

        /** parser.e:1276					SymTab[sym][S_USAGE] = or_bits(SymTab[sym][S_USAGE], U_READ)*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_sym_56212 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28489 = (object)*(((s1_ptr)_2)->base + _sym_56212);
        _2 = (object)SEQ_PTR(_28489);
        _28490 = (object)*(((s1_ptr)_2)->base + 5);
        _28489 = NOVALUE;
        if (IS_ATOM_INT(_28490)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_28490 | (uintptr_t)1;
                 _28491 = MAKE_UINT(tu);
            }
        }
        else {
            _28491 = binary_op(OR_BITS, _28490, 1);
        }
        _28490 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _28491;
        if( _1 != _28491 ){
            DeRef(_1);
        }
        _28491 = NOVALUE;
        _28487 = NOVALUE;

        /** parser.e:1277					InitCheck(sym, TRUE)*/
        _42InitCheck(_sym_56212, _9TRUE_444);

        /** parser.e:1278					emit_opnd(sym)*/
        _49emit_opnd(_sym_56212);
L7: 

        /** parser.e:1281				if sym = left_sym then*/
        if (_sym_56212 != _42left_sym_54404)
        goto L8; // [233] 243

        /** parser.e:1282					lhs_subs_level = 0 -- start counting subscripts*/
        _42lhs_subs_level_54402 = 0;
L8: 

        /** parser.e:1285				short_circuit -= 1*/
        _42short_circuit_54363 = _42short_circuit_54363 - 1;

        /** parser.e:1286				tok = next_token()*/
        _0 = _tok_56206;
        _tok_56206 = _42next_token();
        DeRef(_0);

        /** parser.e:1287				current_sequence = append(current_sequence, sym)*/
        Append(&_49current_sequence_50380, _49current_sequence_50380, _sym_56212);

        /** parser.e:1288				while tok[T_ID] = LEFT_SQUARE do*/
L9: 
        _2 = (object)SEQ_PTR(_tok_56206);
        _28496 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28496, -28)){
            _28496 = NOVALUE;
            goto LA; // [279] 447
        }
        _28496 = NOVALUE;

        /** parser.e:1289					subs_depth += 1*/
        _42subs_depth_54405 = _42subs_depth_54405 + 1;

        /** parser.e:1290					if lhs_subs_level >= 0 then*/
        if (_42lhs_subs_level_54402 < 0)
        goto LB; // [295] 308

        /** parser.e:1291						lhs_subs_level += 1*/
        _42lhs_subs_level_54402 = _42lhs_subs_level_54402 + 1;
LB: 

        /** parser.e:1293					save_factors = factors*/
        _save_factors_56209 = _42factors_54401;

        /** parser.e:1294					save_lhs_subs_level = lhs_subs_level*/
        _save_lhs_subs_level_56210 = _42lhs_subs_level_54402;

        /** parser.e:1295					call_proc(forward_expr, {})*/
        _0 = (object)_00[_42forward_expr_55396].addr;
        (*(intptr_t (*)())_0)(
                             );

        /** parser.e:1296					tok = next_token()*/
        _0 = _tok_56206;
        _tok_56206 = _42next_token();
        DeRef(_0);

        /** parser.e:1297					if tok[T_ID] = SLICE then*/
        _2 = (object)SEQ_PTR(_tok_56206);
        _28502 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28502, 513)){
            _28502 = NOVALUE;
            goto LC; // [344] 382
        }
        _28502 = NOVALUE;

        /** parser.e:1298						call_proc(forward_expr, {})*/
        _0 = (object)_00[_42forward_expr_55396].addr;
        (*(intptr_t (*)())_0)(
                             );

        /** parser.e:1299						emit_op(RHS_SLICE)*/
        _49emit_op(46);

        /** parser.e:1300						tok_match(RIGHT_SQUARE)*/
        _42tok_match(-29, 0);

        /** parser.e:1301						tok = next_token()*/
        _0 = _tok_56206;
        _tok_56206 = _42next_token();
        DeRef(_0);

        /** parser.e:1302						exit*/
        goto LA; // [377] 447
        goto LD; // [379] 427
LC: 

        /** parser.e:1304						putback(tok)*/
        Ref(_tok_56206);
        _42putback(_tok_56206);

        /** parser.e:1305						tok_match(RIGHT_SQUARE)*/
        _42tok_match(-29, 0);

        /** parser.e:1306						subs_depth -= 1*/
        _42subs_depth_54405 = _42subs_depth_54405 - 1;

        /** parser.e:1307						current_sequence = remove( current_sequence, length( current_sequence ) )*/
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _28506 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _28506 = 1;
        }
        {
            s1_ptr assign_space = SEQ_PTR(_49current_sequence_50380);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_28506)) ? _28506 : (object)(DBL_PTR(_28506)->dbl);
            int stop = (IS_ATOM_INT(_28506)) ? _28506 : (object)(DBL_PTR(_28506)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380 );
                }
                else Tail(SEQ_PTR(_49current_sequence_50380), stop+1, &_49current_sequence_50380);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380);
            }
            else {
                assign_slice_seq = &assign_space;
                _49current_sequence_50380 = Remove_elements(start, stop, (SEQ_PTR(_49current_sequence_50380)->ref == 1));
            }
        }
        _28506 = NOVALUE;
        _28506 = NOVALUE;

        /** parser.e:1308						emit_op(RHS_SUBS) -- current_sequence will be updated*/
        _49emit_op(25);
LD: 

        /** parser.e:1310					factors = save_factors*/
        _42factors_54401 = _save_factors_56209;

        /** parser.e:1311					lhs_subs_level = save_lhs_subs_level*/
        _42lhs_subs_level_54402 = _save_lhs_subs_level_56210;

        /** parser.e:1312					tok = next_token()*/
        _0 = _tok_56206;
        _tok_56206 = _42next_token();
        DeRef(_0);

        /** parser.e:1313				end while*/
        goto L9; // [444] 271
LA: 

        /** parser.e:1314				current_sequence = remove( current_sequence, length( current_sequence ) )*/
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _28509 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _28509 = 1;
        }
        {
            s1_ptr assign_space = SEQ_PTR(_49current_sequence_50380);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_28509)) ? _28509 : (object)(DBL_PTR(_28509)->dbl);
            int stop = (IS_ATOM_INT(_28509)) ? _28509 : (object)(DBL_PTR(_28509)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380 );
                }
                else Tail(SEQ_PTR(_49current_sequence_50380), stop+1, &_49current_sequence_50380);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380);
            }
            else {
                assign_slice_seq = &assign_space;
                _49current_sequence_50380 = Remove_elements(start, stop, (SEQ_PTR(_49current_sequence_50380)->ref == 1));
            }
        }
        _28509 = NOVALUE;
        _28509 = NOVALUE;

        /** parser.e:1315				putback(tok)*/
        Ref(_tok_56206);
        _42putback(_tok_56206);

        /** parser.e:1316				short_circuit += 1*/
        _42short_circuit_54363 = _42short_circuit_54363 + 1;
        goto L5; // [476] 690

        /** parser.e:1318			case DOLLAR then*/
        case -22:

        /** parser.e:1319				tok = next_token()*/
        _0 = _tok_56206;
        _tok_56206 = _42next_token();
        DeRef(_0);

        /** parser.e:1320				putback(tok)*/
        Ref(_tok_56206);
        _42putback(_tok_56206);

        /** parser.e:1321				if tok[T_ID] = RIGHT_BRACE then*/
        _2 = (object)SEQ_PTR(_tok_56206);
        _28513 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _28513, -25)){
            _28513 = NOVALUE;
            goto LE; // [502] 520
        }
        _28513 = NOVALUE;

        /** parser.e:1322					gListItem[$] = 0*/
        if (IS_SEQUENCE(_42gListItem_54399)){
                _28515 = SEQ_PTR(_42gListItem_54399)->length;
        }
        else {
            _28515 = 1;
        }
        _2 = (object)SEQ_PTR(_42gListItem_54399);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _42gListItem_54399 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _28515);
        *(intptr_t *)_2 = 0;
        goto L5; // [517] 690
LE: 

        /** parser.e:1324					if subs_depth > 0 and length(current_sequence) then*/
        _28516 = (_42subs_depth_54405 > 0);
        if (_28516 == 0) {
            goto LF; // [528] 551
        }
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _28518 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _28518 = 1;
        }
        if (_28518 == 0)
        {
            _28518 = NOVALUE;
            goto LF; // [538] 551
        }
        else{
            _28518 = NOVALUE;
        }

        /** parser.e:1325						emit_op(DOLLAR)*/
        _49emit_op(-22);
        goto L5; // [548] 690
LF: 

        /** parser.e:1327						CompileErr(21)*/
        RefDS(_21928);
        _52CompileErr(21, _21928, 0);
        goto L5; // [560] 690

        /** parser.e:1331			case ATOM then*/
        case 502:

        /** parser.e:1332				emit_opnd(tok[T_SYM])*/
        _2 = (object)SEQ_PTR(_tok_56206);
        _28519 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_28519);
        _49emit_opnd(_28519);
        _28519 = NOVALUE;
        goto L5; // [577] 690

        /** parser.e:1334			case LEFT_BRACE then*/
        case -24:

        /** parser.e:1335				n = Expr_list()*/
        _n_56208 = _42Expr_list();
        if (!IS_ATOM_INT(_n_56208)) {
            _1 = (object)(DBL_PTR(_n_56208)->dbl);
            DeRefDS(_n_56208);
            _n_56208 = _1;
        }

        /** parser.e:1336				tok_match(RIGHT_BRACE)*/
        _42tok_match(-25, 0);

        /** parser.e:1337				op_info1 = n*/
        _49op_info1_50372 = _n_56208;

        /** parser.e:1338				emit_op(RIGHT_BRACE_N)*/
        _49emit_op(31);
        goto L5; // [612] 690

        /** parser.e:1340			case STRING then*/
        case 503:

        /** parser.e:1341				emit_opnd(tok[T_SYM])*/
        _2 = (object)SEQ_PTR(_tok_56206);
        _28521 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_28521);
        _49emit_opnd(_28521);
        _28521 = NOVALUE;
        goto L5; // [629] 690

        /** parser.e:1343			case LEFT_ROUND then*/
        case -26:

        /** parser.e:1344				call_proc(forward_expr, {})*/
        _0 = (object)_00[_42forward_expr_55396].addr;
        (*(intptr_t (*)())_0)(
                             );

        /** parser.e:1345				tok_match(RIGHT_ROUND)*/
        _42tok_match(-27, 0);
        goto L5; // [650] 690

        /** parser.e:1347			case FUNC, TYPE, QUALIFIED_FUNC, QUALIFIED_TYPE then*/
        case 501:
        case 504:
        case 520:
        case 522:

        /** parser.e:1348				Function_call( tok )*/
        Ref(_tok_56206);
        _42Function_call(_tok_56206);
        goto L5; // [667] 690

        /** parser.e:1350			case else*/
        default:

        /** parser.e:1351				CompileErr(135, {LexName(id)})*/
        RefDS(_26260);
        _28522 = _49LexName(_id_56207, _26260);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _28522;
        _28523 = MAKE_SEQ(_1);
        _28522 = NOVALUE;
        _52CompileErr(135, _28523, 0);
        _28523 = NOVALUE;
    ;}L5: 

    /** parser.e:1353	end procedure*/
    DeRef(_tok_56206);
    DeRef(_28516);
    _28516 = NOVALUE;
    DeRef(_28478);
    _28478 = NOVALUE;
    return;
    ;
}


void _42UFactor()
{
    object _tok_56363 = NOVALUE;
    object _28529 = NOVALUE;
    object _28527 = NOVALUE;
    object _28525 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1359		tok = next_token()*/
    _0 = _tok_56363;
    _tok_56363 = _42next_token();
    DeRef(_0);

    /** parser.e:1361		if tok[T_ID] = MINUS then*/
    _2 = (object)SEQ_PTR(_tok_56363);
    _28525 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28525, 10)){
        _28525 = NOVALUE;
        goto L1; // [16] 34
    }
    _28525 = NOVALUE;

    /** parser.e:1362			Factor()*/
    _42Factor();

    /** parser.e:1363			emit_op(UMINUS)*/
    _49emit_op(12);
    goto L2; // [31] 93
L1: 

    /** parser.e:1365		elsif tok[T_ID] = NOT then*/
    _2 = (object)SEQ_PTR(_tok_56363);
    _28527 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28527, 7)){
        _28527 = NOVALUE;
        goto L3; // [44] 62
    }
    _28527 = NOVALUE;

    /** parser.e:1366			Factor()*/
    _42Factor();

    /** parser.e:1367			emit_op(NOT)*/
    _49emit_op(7);
    goto L2; // [59] 93
L3: 

    /** parser.e:1369		elsif tok[T_ID] = PLUS then*/
    _2 = (object)SEQ_PTR(_tok_56363);
    _28529 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28529, 11)){
        _28529 = NOVALUE;
        goto L4; // [72] 83
    }
    _28529 = NOVALUE;

    /** parser.e:1370			Factor()*/
    _42Factor();
    goto L2; // [80] 93
L4: 

    /** parser.e:1373			putback(tok)*/
    Ref(_tok_56363);
    _42putback(_tok_56363);

    /** parser.e:1374			Factor()*/
    _42Factor();
L2: 

    /** parser.e:1377	end procedure*/
    DeRef(_tok_56363);
    return;
    ;
}


object _42Term()
{
    object _tok_56388 = NOVALUE;
    object _28537 = NOVALUE;
    object _28536 = NOVALUE;
    object _28535 = NOVALUE;
    object _28533 = NOVALUE;
    object _28532 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1383		UFactor()*/
    _42UFactor();

    /** parser.e:1384		tok = next_token()*/
    _0 = _tok_56388;
    _tok_56388 = _42next_token();
    DeRef(_0);

    /** parser.e:1385		while tok[T_ID] = reserved:MULTIPLY or tok[T_ID] = reserved:DIVIDE do*/
L1: 
    _2 = (object)SEQ_PTR(_tok_56388);
    _28532 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28532)) {
        _28533 = (_28532 == 13);
    }
    else {
        _28533 = binary_op(EQUALS, _28532, 13);
    }
    _28532 = NOVALUE;
    if (IS_ATOM_INT(_28533)) {
        if (_28533 != 0) {
            goto L2; // [25] 44
        }
    }
    else {
        if (DBL_PTR(_28533)->dbl != 0.0) {
            goto L2; // [25] 44
        }
    }
    _2 = (object)SEQ_PTR(_tok_56388);
    _28535 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28535)) {
        _28536 = (_28535 == 14);
    }
    else {
        _28536 = binary_op(EQUALS, _28535, 14);
    }
    _28535 = NOVALUE;
    if (_28536 <= 0) {
        if (_28536 == 0) {
            DeRef(_28536);
            _28536 = NOVALUE;
            goto L3; // [40] 69
        }
        else {
            if (!IS_ATOM_INT(_28536) && DBL_PTR(_28536)->dbl == 0.0){
                DeRef(_28536);
                _28536 = NOVALUE;
                goto L3; // [40] 69
            }
            DeRef(_28536);
            _28536 = NOVALUE;
        }
    }
    DeRef(_28536);
    _28536 = NOVALUE;
L2: 

    /** parser.e:1386			UFactor()*/
    _42UFactor();

    /** parser.e:1387			emit_op(tok[T_ID])*/
    _2 = (object)SEQ_PTR(_tok_56388);
    _28537 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28537);
    _49emit_op(_28537);
    _28537 = NOVALUE;

    /** parser.e:1388			tok = next_token()*/
    _0 = _tok_56388;
    _tok_56388 = _42next_token();
    DeRef(_0);

    /** parser.e:1389		end while*/
    goto L1; // [66] 15
L3: 

    /** parser.e:1390		return tok*/
    DeRef(_28533);
    _28533 = NOVALUE;
    return _tok_56388;
    ;
}


object _42aexpr()
{
    object _tok_56405 = NOVALUE;
    object _id_56406 = NOVALUE;
    object _28544 = NOVALUE;
    object _28543 = NOVALUE;
    object _28541 = NOVALUE;
    object _28540 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1396		integer id*/

    /** parser.e:1398		tok = Term()*/
    _0 = _tok_56405;
    _tok_56405 = _42Term();
    DeRef(_0);

    /** parser.e:1399		while tok[T_ID] = PLUS or tok[T_ID] = MINUS do*/
L1: 
    _2 = (object)SEQ_PTR(_tok_56405);
    _28540 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28540)) {
        _28541 = (_28540 == 11);
    }
    else {
        _28541 = binary_op(EQUALS, _28540, 11);
    }
    _28540 = NOVALUE;
    if (IS_ATOM_INT(_28541)) {
        if (_28541 != 0) {
            goto L2; // [25] 46
        }
    }
    else {
        if (DBL_PTR(_28541)->dbl != 0.0) {
            goto L2; // [25] 46
        }
    }
    _2 = (object)SEQ_PTR(_tok_56405);
    _28543 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28543)) {
        _28544 = (_28543 == 10);
    }
    else {
        _28544 = binary_op(EQUALS, _28543, 10);
    }
    _28543 = NOVALUE;
    if (_28544 <= 0) {
        if (_28544 == 0) {
            DeRef(_28544);
            _28544 = NOVALUE;
            goto L3; // [42] 71
        }
        else {
            if (!IS_ATOM_INT(_28544) && DBL_PTR(_28544)->dbl == 0.0){
                DeRef(_28544);
                _28544 = NOVALUE;
                goto L3; // [42] 71
            }
            DeRef(_28544);
            _28544 = NOVALUE;
        }
    }
    DeRef(_28544);
    _28544 = NOVALUE;
L2: 

    /** parser.e:1400			id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56405);
    _id_56406 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_56406)){
        _id_56406 = (object)DBL_PTR(_id_56406)->dbl;
    }

    /** parser.e:1401			tok = Term()*/
    _0 = _tok_56405;
    _tok_56405 = _42Term();
    DeRef(_0);

    /** parser.e:1402			emit_op(id)*/
    _49emit_op(_id_56406);

    /** parser.e:1403		end while*/
    goto L1; // [68] 13
L3: 

    /** parser.e:1404		return tok*/
    DeRef(_28541);
    _28541 = NOVALUE;
    return _tok_56405;
    ;
}


object _42cexpr()
{
    object _tok_56425 = NOVALUE;
    object _concat_count_56426 = NOVALUE;
    object _28548 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1410		integer concat_count*/

    /** parser.e:1412		tok = aexpr()*/
    _0 = _tok_56425;
    _tok_56425 = _42aexpr();
    DeRef(_0);

    /** parser.e:1413		concat_count = 0*/
    _concat_count_56426 = 0;

    /** parser.e:1414		while tok[T_ID] = reserved:CONCAT do*/
L1: 
    _2 = (object)SEQ_PTR(_tok_56425);
    _28548 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28548, 15)){
        _28548 = NOVALUE;
        goto L2; // [24] 44
    }
    _28548 = NOVALUE;

    /** parser.e:1415			tok = aexpr()*/
    _0 = _tok_56425;
    _tok_56425 = _42aexpr();
    DeRef(_0);

    /** parser.e:1416			concat_count += 1*/
    _concat_count_56426 = _concat_count_56426 + 1;

    /** parser.e:1417		end while*/
    goto L1; // [41] 18
L2: 

    /** parser.e:1419		if concat_count = 1 then*/
    if (_concat_count_56426 != 1)
    goto L3; // [46] 58

    /** parser.e:1420			emit_op( reserved:CONCAT )*/
    _49emit_op(15);
    goto L4; // [55] 81
L3: 

    /** parser.e:1422		elsif concat_count > 1 then*/
    if (_concat_count_56426 <= 1)
    goto L5; // [60] 80

    /** parser.e:1423			op_info1 = concat_count+1*/
    _49op_info1_50372 = _concat_count_56426 + 1;

    /** parser.e:1424			emit_op(CONCAT_N)*/
    _49emit_op(157);
L5: 
L4: 

    /** parser.e:1427		return tok*/
    return _tok_56425;
    ;
}


object _42rexpr()
{
    object _tok_56446 = NOVALUE;
    object _id_56447 = NOVALUE;
    object _28560 = NOVALUE;
    object _28559 = NOVALUE;
    object _28558 = NOVALUE;
    object _28557 = NOVALUE;
    object _28556 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1433		integer id*/

    /** parser.e:1435		tok = cexpr()*/
    _0 = _tok_56446;
    _tok_56446 = _42cexpr();
    DeRef(_0);

    /** parser.e:1436		while tok[T_ID] <= GREATER and tok[T_ID] >= LESS do*/
L1: 
    _2 = (object)SEQ_PTR(_tok_56446);
    _28556 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28556)) {
        _28557 = (_28556 <= 6);
    }
    else {
        _28557 = binary_op(LESSEQ, _28556, 6);
    }
    _28556 = NOVALUE;
    if (IS_ATOM_INT(_28557)) {
        if (_28557 == 0) {
            goto L2; // [25] 70
        }
    }
    else {
        if (DBL_PTR(_28557)->dbl == 0.0) {
            goto L2; // [25] 70
        }
    }
    _2 = (object)SEQ_PTR(_tok_56446);
    _28559 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28559)) {
        _28560 = (_28559 >= 1);
    }
    else {
        _28560 = binary_op(GREATEREQ, _28559, 1);
    }
    _28559 = NOVALUE;
    if (_28560 <= 0) {
        if (_28560 == 0) {
            DeRef(_28560);
            _28560 = NOVALUE;
            goto L2; // [42] 70
        }
        else {
            if (!IS_ATOM_INT(_28560) && DBL_PTR(_28560)->dbl == 0.0){
                DeRef(_28560);
                _28560 = NOVALUE;
                goto L2; // [42] 70
            }
            DeRef(_28560);
            _28560 = NOVALUE;
        }
    }
    DeRef(_28560);
    _28560 = NOVALUE;

    /** parser.e:1437			id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56446);
    _id_56447 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_56447)){
        _id_56447 = (object)DBL_PTR(_id_56447)->dbl;
    }

    /** parser.e:1438			tok = cexpr()*/
    _0 = _tok_56446;
    _tok_56446 = _42cexpr();
    DeRef(_0);

    /** parser.e:1439			emit_op(id)*/
    _49emit_op(_id_56447);

    /** parser.e:1440		end while*/
    goto L1; // [67] 13
L2: 

    /** parser.e:1441		return tok*/
    DeRef(_28557);
    _28557 = NOVALUE;
    return _tok_56446;
    ;
}


void _42Expr()
{
    object _tok_56473 = NOVALUE;
    object _id_56474 = NOVALUE;
    object _patch_56475 = NOVALUE;
    object _28583 = NOVALUE;
    object _28581 = NOVALUE;
    object _28580 = NOVALUE;
    object _28578 = NOVALUE;
    object _28577 = NOVALUE;
    object _28576 = NOVALUE;
    object _28575 = NOVALUE;
    object _28574 = NOVALUE;
    object _28568 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1451		integer id*/

    /** parser.e:1452		integer patch*/

    /** parser.e:1454		ExprLine = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_42ExprLine_56468);
    _42ExprLine_56468 = _52ThisLine_48710;

    /** parser.e:1455		expr_bp = bp*/
    _42expr_bp_56469 = _52bp_48714;

    /** parser.e:1456		id = -1*/
    _id_56474 = -1;

    /** parser.e:1457		patch = 0*/
    _patch_56475 = 0;

    /** parser.e:1458		while TRUE do*/
L1: 
    if (_9TRUE_444 == 0)
    {
        goto L2; // [40] 300
    }
    else{
    }

    /** parser.e:1459			if id != -1 then*/
    if (_id_56474 == -1)
    goto L3; // [45] 116

    /** parser.e:1460				if id != XOR then*/
    if (_id_56474 == 152)
    goto L4; // [53] 115

    /** parser.e:1461					if short_circuit > 0 then*/
    if (_42short_circuit_54363 <= 0)
    goto L5; // [61] 114

    /** parser.e:1462						if id = OR then*/
    if (_id_56474 != 9)
    goto L6; // [69] 83

    /** parser.e:1463							emit_op(SC1_OR)*/
    _49emit_op(143);
    goto L7; // [80] 91
L6: 

    /** parser.e:1465							emit_op(SC1_AND)*/
    _49emit_op(141);
L7: 

    /** parser.e:1467						patch = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28568 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28568 = 1;
    }
    _patch_56475 = _28568 + 1;
    _28568 = NOVALUE;

    /** parser.e:1468						emit_forward_addr()*/
    _42emit_forward_addr();

    /** parser.e:1469						short_circuit_B = TRUE*/
    _42short_circuit_B_54365 = _9TRUE_444;
L5: 
L4: 
L3: 

    /** parser.e:1474			tok = rexpr()*/
    _0 = _tok_56473;
    _tok_56473 = _42rexpr();
    DeRef(_0);

    /** parser.e:1476			if id != -1 then*/
    if (_id_56474 == -1)
    goto L8; // [123] 268

    /** parser.e:1477				if id != XOR then*/
    if (_id_56474 == 152)
    goto L9; // [131] 261

    /** parser.e:1478					if short_circuit > 0 then*/
    if (_42short_circuit_54363 <= 0)
    goto LA; // [139] 252

    /** parser.e:1479						if tok[T_ID] != THEN and tok[T_ID] != DO then*/
    _2 = (object)SEQ_PTR(_tok_56473);
    _28574 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28574)) {
        _28575 = (_28574 != 410);
    }
    else {
        _28575 = binary_op(NOTEQ, _28574, 410);
    }
    _28574 = NOVALUE;
    if (IS_ATOM_INT(_28575)) {
        if (_28575 == 0) {
            goto LB; // [157] 206
        }
    }
    else {
        if (DBL_PTR(_28575)->dbl == 0.0) {
            goto LB; // [157] 206
        }
    }
    _2 = (object)SEQ_PTR(_tok_56473);
    _28577 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28577)) {
        _28578 = (_28577 != 411);
    }
    else {
        _28578 = binary_op(NOTEQ, _28577, 411);
    }
    _28577 = NOVALUE;
    if (_28578 == 0) {
        DeRef(_28578);
        _28578 = NOVALUE;
        goto LB; // [174] 206
    }
    else {
        if (!IS_ATOM_INT(_28578) && DBL_PTR(_28578)->dbl == 0.0){
            DeRef(_28578);
            _28578 = NOVALUE;
            goto LB; // [174] 206
        }
        DeRef(_28578);
        _28578 = NOVALUE;
    }
    DeRef(_28578);
    _28578 = NOVALUE;

    /** parser.e:1480							if id = OR then*/
    if (_id_56474 != 9)
    goto LC; // [181] 195

    /** parser.e:1481								emit_op(SC2_OR)*/
    _49emit_op(144);
    goto LD; // [192] 219
LC: 

    /** parser.e:1483								emit_op(SC2_AND)*/
    _49emit_op(142);
    goto LD; // [203] 219
LB: 

    /** parser.e:1486							SC1_type = id -- if/while/elsif must patch*/
    _42SC1_type_54368 = _id_56474;

    /** parser.e:1487							emit_op(SC2_NULL)*/
    _49emit_op(145);
LD: 

    /** parser.e:1489						if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LE; // [223] 234
    }
    else{
    }

    /** parser.e:1490							emit_op(NOP1)   -- to get label here*/
    _49emit_op(159);
LE: 

    /** parser.e:1492						backpatch(patch, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28580 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28580 = 1;
    }
    _28581 = _28580 + 1;
    _28580 = NOVALUE;
    _49backpatch(_patch_56475, _28581);
    _28581 = NOVALUE;
    goto LF; // [249] 267
LA: 

    /** parser.e:1494						emit_op(id)*/
    _49emit_op(_id_56474);
    goto LF; // [258] 267
L9: 

    /** parser.e:1497					emit_op(id)*/
    _49emit_op(_id_56474);
LF: 
L8: 

    /** parser.e:1500			id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56473);
    _id_56474 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_56474)){
        _id_56474 = (object)DBL_PTR(_id_56474)->dbl;
    }

    /** parser.e:1501			if not find(id, boolOps) then*/
    _28583 = find_from(_id_56474, _42boolOps_56463, 1);
    if (_28583 != 0)
    goto L1; // [287] 38
    _28583 = NOVALUE;

    /** parser.e:1502				exit*/
    goto L2; // [292] 300

    /** parser.e:1504		end while*/
    goto L1; // [297] 38
L2: 

    /** parser.e:1505		putback(tok)*/
    Ref(_tok_56473);
    _42putback(_tok_56473);

    /** parser.e:1506		SC1_patch = patch -- extra line*/
    _42SC1_patch_54367 = _patch_56475;

    /** parser.e:1507	end procedure*/
    DeRef(_tok_56473);
    DeRef(_28575);
    _28575 = NOVALUE;
    return;
    ;
}


void _42TypeCheck(object _var_56550)
{
    object _which_type_56551 = NOVALUE;
    object _ref_56561 = NOVALUE;
    object _ref_56594 = NOVALUE;
    object _28639 = NOVALUE;
    object _28638 = NOVALUE;
    object _28637 = NOVALUE;
    object _28636 = NOVALUE;
    object _28635 = NOVALUE;
    object _28633 = NOVALUE;
    object _28632 = NOVALUE;
    object _28631 = NOVALUE;
    object _28630 = NOVALUE;
    object _28629 = NOVALUE;
    object _28628 = NOVALUE;
    object _28626 = NOVALUE;
    object _28625 = NOVALUE;
    object _28622 = NOVALUE;
    object _28621 = NOVALUE;
    object _28620 = NOVALUE;
    object _28619 = NOVALUE;
    object _28614 = NOVALUE;
    object _28613 = NOVALUE;
    object _28609 = NOVALUE;
    object _28607 = NOVALUE;
    object _28606 = NOVALUE;
    object _28605 = NOVALUE;
    object _28603 = NOVALUE;
    object _28602 = NOVALUE;
    object _28601 = NOVALUE;
    object _28600 = NOVALUE;
    object _28599 = NOVALUE;
    object _28598 = NOVALUE;
    object _28595 = NOVALUE;
    object _28593 = NOVALUE;
    object _28591 = NOVALUE;
    object _28590 = NOVALUE;
    object _28589 = NOVALUE;
    object _28587 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_var_56550)) {
        _1 = (object)(DBL_PTR(_var_56550)->dbl);
        DeRefDS(_var_56550);
        _var_56550 = _1;
    }

    /** parser.e:1515		if var < 0 or SymTab[var][S_SCOPE] = SC_UNDEFINED then*/
    _28587 = (_var_56550 < 0);
    if (_28587 != 0) {
        goto L1; // [9] 36
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28589 = (object)*(((s1_ptr)_2)->base + _var_56550);
    _2 = (object)SEQ_PTR(_28589);
    _28590 = (object)*(((s1_ptr)_2)->base + 4);
    _28589 = NOVALUE;
    if (IS_ATOM_INT(_28590)) {
        _28591 = (_28590 == 9);
    }
    else {
        _28591 = binary_op(EQUALS, _28590, 9);
    }
    _28590 = NOVALUE;
    if (_28591 == 0) {
        DeRef(_28591);
        _28591 = NOVALUE;
        goto L2; // [32] 76
    }
    else {
        if (!IS_ATOM_INT(_28591) && DBL_PTR(_28591)->dbl == 0.0){
            DeRef(_28591);
            _28591 = NOVALUE;
            goto L2; // [32] 76
        }
        DeRef(_28591);
        _28591 = NOVALUE;
    }
    DeRef(_28591);
    _28591 = NOVALUE;
L1: 

    /** parser.e:1517			integer ref = new_forward_reference( TYPE_CHECK, var, TYPE_CHECK_FORWARD )*/
    _ref_56561 = _41new_forward_reference(65, _var_56550, 197);
    if (!IS_ATOM_INT(_ref_56561)) {
        _1 = (object)(DBL_PTR(_ref_56561)->dbl);
        DeRefDS(_ref_56561);
        _ref_56561 = _1;
    }

    /** parser.e:1518			Code &= { TYPE_CHECK_FORWARD, var, OpTypeCheck }*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 197;
    ((intptr_t*)_2)[2] = _var_56550;
    ((intptr_t*)_2)[3] = _39OpTypeCheck_16885;
    _28593 = MAKE_SEQ(_1);
    Concat((object_ptr)&_39Code_16903, _39Code_16903, _28593);
    DeRefDS(_28593);
    _28593 = NOVALUE;

    /** parser.e:1519			return*/
    DeRef(_28587);
    _28587 = NOVALUE;
    return;
L2: 

    /** parser.e:1522		which_type = SymTab[var][S_VTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28595 = (object)*(((s1_ptr)_2)->base + _var_56550);
    _2 = (object)SEQ_PTR(_28595);
    _which_type_56551 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_which_type_56551)){
        _which_type_56551 = (object)DBL_PTR(_which_type_56551)->dbl;
    }
    _28595 = NOVALUE;

    /** parser.e:1523		if which_type = 0 then*/
    if (_which_type_56551 != 0)
    goto L3; // [96] 106

    /** parser.e:1524			return	-- Not a typed identifier.*/
    DeRef(_28587);
    _28587 = NOVALUE;
    return;
L3: 

    /** parser.e:1526		if which_type > 0 and length(SymTab[which_type]) < S_TOKEN then*/
    _28598 = (_which_type_56551 > 0);
    if (_28598 == 0) {
        goto L4; // [112] 141
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28600 = (object)*(((s1_ptr)_2)->base + _which_type_56551);
    if (IS_SEQUENCE(_28600)){
            _28601 = SEQ_PTR(_28600)->length;
    }
    else {
        _28601 = 1;
    }
    _28600 = NOVALUE;
    if (IS_ATOM_INT(_39S_TOKEN_16475)) {
        _28602 = (_28601 < _39S_TOKEN_16475);
    }
    else {
        _28602 = binary_op(LESS, _28601, _39S_TOKEN_16475);
    }
    _28601 = NOVALUE;
    if (_28602 == 0) {
        DeRef(_28602);
        _28602 = NOVALUE;
        goto L4; // [132] 141
    }
    else {
        if (!IS_ATOM_INT(_28602) && DBL_PTR(_28602)->dbl == 0.0){
            DeRef(_28602);
            _28602 = NOVALUE;
            goto L4; // [132] 141
        }
        DeRef(_28602);
        _28602 = NOVALUE;
    }
    DeRef(_28602);
    _28602 = NOVALUE;

    /** parser.e:1527			return	-- Not a typed identifier.*/
    _28600 = NOVALUE;
    DeRef(_28598);
    _28598 = NOVALUE;
    DeRef(_28587);
    _28587 = NOVALUE;
    return;
L4: 

    /** parser.e:1530		if which_type < 0 or SymTab[which_type][S_TOKEN] = VARIABLE  then*/
    _28603 = (_which_type_56551 < 0);
    if (_28603 != 0) {
        goto L5; // [147] 174
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28605 = (object)*(((s1_ptr)_2)->base + _which_type_56551);
    _2 = (object)SEQ_PTR(_28605);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _28606 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _28606 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _28605 = NOVALUE;
    if (IS_ATOM_INT(_28606)) {
        _28607 = (_28606 == -100);
    }
    else {
        _28607 = binary_op(EQUALS, _28606, -100);
    }
    _28606 = NOVALUE;
    if (_28607 == 0) {
        DeRef(_28607);
        _28607 = NOVALUE;
        goto L6; // [170] 214
    }
    else {
        if (!IS_ATOM_INT(_28607) && DBL_PTR(_28607)->dbl == 0.0){
            DeRef(_28607);
            _28607 = NOVALUE;
            goto L6; // [170] 214
        }
        DeRef(_28607);
        _28607 = NOVALUE;
    }
    DeRef(_28607);
    _28607 = NOVALUE;
L5: 

    /** parser.e:1531			integer ref = new_forward_reference( TYPE_CHECK, which_type, TYPE )*/
    _ref_56594 = _41new_forward_reference(65, _which_type_56551, 504);
    if (!IS_ATOM_INT(_ref_56594)) {
        _1 = (object)(DBL_PTR(_ref_56594)->dbl);
        DeRefDS(_ref_56594);
        _ref_56594 = _1;
    }

    /** parser.e:1532			Code &= { TYPE_CHECK_FORWARD, var, OpTypeCheck }*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 197;
    ((intptr_t*)_2)[2] = _var_56550;
    ((intptr_t*)_2)[3] = _39OpTypeCheck_16885;
    _28609 = MAKE_SEQ(_1);
    Concat((object_ptr)&_39Code_16903, _39Code_16903, _28609);
    DeRefDS(_28609);
    _28609 = NOVALUE;

    /** parser.e:1534			return*/
    _28600 = NOVALUE;
    DeRef(_28598);
    _28598 = NOVALUE;
    DeRef(_28603);
    _28603 = NOVALUE;
    DeRef(_28587);
    _28587 = NOVALUE;
    return;
L6: 

    /** parser.e:1537		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L7; // [220] 317
    }
    else{
    }

    /** parser.e:1538			if OpTypeCheck then*/
    if (_39OpTypeCheck_16885 == 0)
    {
        goto L8; // [227] 481
    }
    else{
    }

    /** parser.e:1539				switch which_type do*/
    if( _42_56608_cases == 0 ){
        _42_56608_cases = 1;
        SEQ_PTR( _28611 )->base[1] = _56object_type_46258;
        SEQ_PTR( _28611 )->base[2] = _56sequence_type_46262;
        SEQ_PTR( _28611 )->base[3] = _56atom_type_46260;
        SEQ_PTR( _28611 )->base[4] = _56integer_type_46264;
    }
    _1 = find(_which_type_56551, _28611);
    switch ( _1 ){ 

        /** parser.e:1540					case object_type, sequence_type, atom_type then*/
        case 1:
        case 2:
        case 3:

        /** parser.e:1542					case integer_type then*/
        goto L8; // [247] 481
        case 4:

        /** parser.e:1544						op_info1 = var*/
        _49op_info1_50372 = _var_56550;

        /** parser.e:1545						emit_op(INTEGER_CHECK)*/
        _49emit_op(96);
        goto L8; // [265] 481

        /** parser.e:1546					case else*/
        case 0:

        /** parser.e:1547						if SymTab[which_type][S_EFFECT] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _28613 = (object)*(((s1_ptr)_2)->base + _which_type_56551);
        _2 = (object)SEQ_PTR(_28613);
        _28614 = (object)*(((s1_ptr)_2)->base + 23);
        _28613 = NOVALUE;
        if (_28614 == 0) {
            _28614 = NOVALUE;
            goto L9; // [285] 312
        }
        else {
            if (!IS_ATOM_INT(_28614) && DBL_PTR(_28614)->dbl == 0.0){
                _28614 = NOVALUE;
                goto L9; // [285] 312
            }
            _28614 = NOVALUE;
        }
        _28614 = NOVALUE;

        /** parser.e:1549							emit_opnd(var)*/
        _49emit_opnd(_var_56550);

        /** parser.e:1550							op_info1 = which_type*/
        _49op_info1_50372 = _which_type_56551;

        /** parser.e:1552							emit_or_inline()*/
        _68emit_or_inline();

        /** parser.e:1553							emit_op(TYPE_CHECK)*/
        _49emit_op(65);
L9: 
    ;}    goto L8; // [314] 481
L7: 

    /** parser.e:1559			if OpTypeCheck then*/
    if (_39OpTypeCheck_16885 == 0)
    {
        goto LA; // [321] 480
    }
    else{
    }

    /** parser.e:1560				if which_type != object_type then*/
    if (_which_type_56551 == _56object_type_46258)
    goto LB; // [328] 479

    /** parser.e:1561					if which_type = integer_type then*/
    if (_which_type_56551 != _56integer_type_46264)
    goto LC; // [336] 357

    /** parser.e:1562							op_info1 = var*/
    _49op_info1_50372 = _var_56550;

    /** parser.e:1563							emit_op(INTEGER_CHECK)*/
    _49emit_op(96);
    goto LD; // [354] 478
LC: 

    /** parser.e:1565					elsif which_type = sequence_type then*/
    if (_which_type_56551 != _56sequence_type_46262)
    goto LE; // [361] 382

    /** parser.e:1566							op_info1 = var*/
    _49op_info1_50372 = _var_56550;

    /** parser.e:1567							emit_op(SEQUENCE_CHECK)*/
    _49emit_op(97);
    goto LD; // [379] 478
LE: 

    /** parser.e:1569					elsif which_type = atom_type then*/
    if (_which_type_56551 != _56atom_type_46260)
    goto LF; // [386] 407

    /** parser.e:1570							op_info1 = var*/
    _49op_info1_50372 = _var_56550;

    /** parser.e:1571							emit_op(ATOM_CHECK)*/
    _49emit_op(101);
    goto LD; // [404] 478
LF: 

    /** parser.e:1575							if SymTab[SymTab[which_type][S_NEXT]][S_VTYPE] =*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28619 = (object)*(((s1_ptr)_2)->base + _which_type_56551);
    _2 = (object)SEQ_PTR(_28619);
    _28620 = (object)*(((s1_ptr)_2)->base + 2);
    _28619 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28620)){
        _28621 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28620)->dbl));
    }
    else{
        _28621 = (object)*(((s1_ptr)_2)->base + _28620);
    }
    _2 = (object)SEQ_PTR(_28621);
    _28622 = (object)*(((s1_ptr)_2)->base + 15);
    _28621 = NOVALUE;
    if (binary_op_a(NOTEQ, _28622, _56integer_type_46264)){
        _28622 = NOVALUE;
        goto L10; // [435] 454
    }
    _28622 = NOVALUE;

    /** parser.e:1577								op_info1 = var*/
    _49op_info1_50372 = _var_56550;

    /** parser.e:1578								emit_op(INTEGER_CHECK) -- need integer conversion*/
    _49emit_op(96);
L10: 

    /** parser.e:1580							emit_opnd(var)*/
    _49emit_opnd(_var_56550);

    /** parser.e:1581							op_info1 = which_type*/
    _49op_info1_50372 = _which_type_56551;

    /** parser.e:1582							emit_or_inline()*/
    _68emit_or_inline();

    /** parser.e:1584							emit_op(TYPE_CHECK)*/
    _49emit_op(65);
LD: 
LB: 
LA: 
L8: 

    /** parser.e:1590		if TRANSLATE or not OpTypeCheck then*/
    if (_39TRANSLATE_16440 != 0) {
        goto L11; // [485] 499
    }
    _28625 = (_39OpTypeCheck_16885 == 0);
    if (_28625 == 0)
    {
        DeRef(_28625);
        _28625 = NOVALUE;
        goto L12; // [495] 620
    }
    else{
        DeRef(_28625);
        _28625 = NOVALUE;
    }
L11: 

    /** parser.e:1591			op_info1 = var*/
    _49op_info1_50372 = _var_56550;

    /** parser.e:1592			if which_type = sequence_type or*/
    _28626 = (_which_type_56551 == _56sequence_type_46262);
    if (_28626 != 0) {
        goto L13; // [514] 553
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28628 = (object)*(((s1_ptr)_2)->base + _which_type_56551);
    _2 = (object)SEQ_PTR(_28628);
    _28629 = (object)*(((s1_ptr)_2)->base + 2);
    _28628 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28629)){
        _28630 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28629)->dbl));
    }
    else{
        _28630 = (object)*(((s1_ptr)_2)->base + _28629);
    }
    _2 = (object)SEQ_PTR(_28630);
    _28631 = (object)*(((s1_ptr)_2)->base + 15);
    _28630 = NOVALUE;
    if (IS_ATOM_INT(_28631)) {
        _28632 = (_28631 == _56sequence_type_46262);
    }
    else {
        _28632 = binary_op(EQUALS, _28631, _56sequence_type_46262);
    }
    _28631 = NOVALUE;
    if (_28632 == 0) {
        DeRef(_28632);
        _28632 = NOVALUE;
        goto L14; // [549] 563
    }
    else {
        if (!IS_ATOM_INT(_28632) && DBL_PTR(_28632)->dbl == 0.0){
            DeRef(_28632);
            _28632 = NOVALUE;
            goto L14; // [549] 563
        }
        DeRef(_28632);
        _28632 = NOVALUE;
    }
    DeRef(_28632);
    _28632 = NOVALUE;
L13: 

    /** parser.e:1595				emit_op(SEQUENCE_CHECK)*/
    _49emit_op(97);
    goto L15; // [560] 619
L14: 

    /** parser.e:1597			elsif which_type = integer_type or*/
    _28633 = (_which_type_56551 == _56integer_type_46264);
    if (_28633 != 0) {
        goto L16; // [571] 610
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28635 = (object)*(((s1_ptr)_2)->base + _which_type_56551);
    _2 = (object)SEQ_PTR(_28635);
    _28636 = (object)*(((s1_ptr)_2)->base + 2);
    _28635 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28636)){
        _28637 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28636)->dbl));
    }
    else{
        _28637 = (object)*(((s1_ptr)_2)->base + _28636);
    }
    _2 = (object)SEQ_PTR(_28637);
    _28638 = (object)*(((s1_ptr)_2)->base + 15);
    _28637 = NOVALUE;
    if (IS_ATOM_INT(_28638)) {
        _28639 = (_28638 == _56integer_type_46264);
    }
    else {
        _28639 = binary_op(EQUALS, _28638, _56integer_type_46264);
    }
    _28638 = NOVALUE;
    if (_28639 == 0) {
        DeRef(_28639);
        _28639 = NOVALUE;
        goto L17; // [606] 618
    }
    else {
        if (!IS_ATOM_INT(_28639) && DBL_PTR(_28639)->dbl == 0.0){
            DeRef(_28639);
            _28639 = NOVALUE;
            goto L17; // [606] 618
        }
        DeRef(_28639);
        _28639 = NOVALUE;
    }
    DeRef(_28639);
    _28639 = NOVALUE;
L16: 

    /** parser.e:1600				emit_op(INTEGER_CHECK)*/
    _49emit_op(96);
L17: 
L15: 
L12: 

    /** parser.e:1603	end procedure*/
    _28636 = NOVALUE;
    _28600 = NOVALUE;
    DeRef(_28598);
    _28598 = NOVALUE;
    _28629 = NOVALUE;
    DeRef(_28626);
    _28626 = NOVALUE;
    DeRef(_28603);
    _28603 = NOVALUE;
    _28620 = NOVALUE;
    DeRef(_28633);
    _28633 = NOVALUE;
    DeRef(_28587);
    _28587 = NOVALUE;
    return;
    ;
}


void _42Assignment(object _left_var_56715)
{
    object _tok_56717 = NOVALUE;
    object _subs_56718 = NOVALUE;
    object _slice_56719 = NOVALUE;
    object _assign_op_56720 = NOVALUE;
    object _subs1_patch_56721 = NOVALUE;
    object _dangerous_56723 = NOVALUE;
    object _lname_56846 = NOVALUE;
    object _temp_len_56863 = NOVALUE;
    object _28736 = NOVALUE;
    object _28735 = NOVALUE;
    object _28734 = NOVALUE;
    object _28733 = NOVALUE;
    object _28732 = NOVALUE;
    object _28731 = NOVALUE;
    object _28730 = NOVALUE;
    object _28721 = NOVALUE;
    object _28720 = NOVALUE;
    object _28719 = NOVALUE;
    object _28718 = NOVALUE;
    object _28717 = NOVALUE;
    object _28716 = NOVALUE;
    object _28715 = NOVALUE;
    object _28714 = NOVALUE;
    object _28713 = NOVALUE;
    object _28712 = NOVALUE;
    object _28711 = NOVALUE;
    object _28710 = NOVALUE;
    object _28709 = NOVALUE;
    object _28708 = NOVALUE;
    object _28707 = NOVALUE;
    object _28705 = NOVALUE;
    object _28704 = NOVALUE;
    object _28703 = NOVALUE;
    object _28701 = NOVALUE;
    object _28696 = NOVALUE;
    object _28695 = NOVALUE;
    object _28692 = NOVALUE;
    object _28691 = NOVALUE;
    object _28689 = NOVALUE;
    object _28683 = NOVALUE;
    object _28678 = NOVALUE;
    object _28675 = NOVALUE;
    object _28672 = NOVALUE;
    object _28669 = NOVALUE;
    object _28668 = NOVALUE;
    object _28667 = NOVALUE;
    object _28665 = NOVALUE;
    object _28664 = NOVALUE;
    object _28663 = NOVALUE;
    object _28662 = NOVALUE;
    object _28661 = NOVALUE;
    object _28660 = NOVALUE;
    object _28658 = NOVALUE;
    object _28657 = NOVALUE;
    object _28656 = NOVALUE;
    object _28655 = NOVALUE;
    object _28653 = NOVALUE;
    object _28652 = NOVALUE;
    object _28651 = NOVALUE;
    object _28650 = NOVALUE;
    object _28649 = NOVALUE;
    object _28647 = NOVALUE;
    object _28646 = NOVALUE;
    object _28645 = NOVALUE;
    object _28642 = NOVALUE;
    object _28641 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:1608		integer subs, slice, assign_op, subs1_patch*/

    /** parser.e:1611		left_sym = left_var[T_SYM]*/
    _2 = (object)SEQ_PTR(_left_var_56715);
    _42left_sym_54404 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_42left_sym_54404)){
        _42left_sym_54404 = (object)DBL_PTR(_42left_sym_54404)->dbl;
    }

    /** parser.e:1612		if SymTab[left_sym][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28641 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28641);
    _28642 = (object)*(((s1_ptr)_2)->base + 4);
    _28641 = NOVALUE;
    if (binary_op_a(NOTEQ, _28642, 9)){
        _28642 = NOVALUE;
        goto L1; // [31] 54
    }
    _28642 = NOVALUE;

    /** parser.e:1613			Forward_var( left_var, ,ASSIGN )*/
    Ref(_left_var_56715);
    _42Forward_var(_left_var_56715, -1, 18);

    /** parser.e:1614			left_sym = Pop() -- pops off what forward var emitted, because it gets emitted later*/
    _0 = _49Pop();
    _42left_sym_54404 = _0;
    if (!IS_ATOM_INT(_42left_sym_54404)) {
        _1 = (object)(DBL_PTR(_42left_sym_54404)->dbl);
        DeRefDS(_42left_sym_54404);
        _42left_sym_54404 = _1;
    }
    goto L2; // [51] 267
L1: 

    /** parser.e:1616			UndefinedVar(left_sym)*/
    _42UndefinedVar(_42left_sym_54404);

    /** parser.e:1617			if SymTab[left_sym][S_SCOPE] = SC_LOOP_VAR or*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28645 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28645);
    _28646 = (object)*(((s1_ptr)_2)->base + 4);
    _28645 = NOVALUE;
    if (IS_ATOM_INT(_28646)) {
        _28647 = (_28646 == 2);
    }
    else {
        _28647 = binary_op(EQUALS, _28646, 2);
    }
    _28646 = NOVALUE;
    if (IS_ATOM_INT(_28647)) {
        if (_28647 != 0) {
            goto L3; // [83] 112
        }
    }
    else {
        if (DBL_PTR(_28647)->dbl != 0.0) {
            goto L3; // [83] 112
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28649 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28649);
    _28650 = (object)*(((s1_ptr)_2)->base + 4);
    _28649 = NOVALUE;
    if (IS_ATOM_INT(_28650)) {
        _28651 = (_28650 == 4);
    }
    else {
        _28651 = binary_op(EQUALS, _28650, 4);
    }
    _28650 = NOVALUE;
    if (_28651 == 0) {
        DeRef(_28651);
        _28651 = NOVALUE;
        goto L4; // [108] 122
    }
    else {
        if (!IS_ATOM_INT(_28651) && DBL_PTR(_28651)->dbl == 0.0){
            DeRef(_28651);
            _28651 = NOVALUE;
            goto L4; // [108] 122
        }
        DeRef(_28651);
        _28651 = NOVALUE;
    }
    DeRef(_28651);
    _28651 = NOVALUE;
L3: 

    /** parser.e:1619				CompileErr(109)*/
    RefDS(_21928);
    _52CompileErr(109, _21928, 0);
    goto L5; // [119] 229
L4: 

    /** parser.e:1621			elsif SymTab[left_sym][S_MODE] = M_CONSTANT then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28652 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28652);
    _28653 = (object)*(((s1_ptr)_2)->base + 3);
    _28652 = NOVALUE;
    if (binary_op_a(NOTEQ, _28653, 2)){
        _28653 = NOVALUE;
        goto L6; // [140] 154
    }
    _28653 = NOVALUE;

    /** parser.e:1622				CompileErr(110)*/
    RefDS(_21928);
    _52CompileErr(110, _21928, 0);
    goto L5; // [151] 229
L6: 

    /** parser.e:1624			elsif find(SymTab[left_sym][S_SCOPE], SCOPE_TYPES) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28655 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28655);
    _28656 = (object)*(((s1_ptr)_2)->base + 4);
    _28655 = NOVALUE;
    _28657 = find_from(_28656, _42SCOPE_TYPES_54354, 1);
    _28656 = NOVALUE;
    if (_28657 == 0)
    {
        _28657 = NOVALUE;
        goto L7; // [177] 228
    }
    else{
        _28657 = NOVALUE;
    }

    /** parser.e:1626				SymTab[CurrentSub][S_EFFECT] = or_bits(SymTab[CurrentSub][S_EFFECT],*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28660 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_28660);
    _28661 = (object)*(((s1_ptr)_2)->base + 23);
    _28660 = NOVALUE;
    _28662 = (_42left_sym_54404 % 29);
    _28663 = power(2, _28662);
    _28662 = NOVALUE;
    if (IS_ATOM_INT(_28661) && IS_ATOM_INT(_28663)) {
        {uintptr_t tu;
             tu = (uintptr_t)_28661 | (uintptr_t)_28663;
             _28664 = MAKE_UINT(tu);
        }
    }
    else {
        _28664 = binary_op(OR_BITS, _28661, _28663);
    }
    _28661 = NOVALUE;
    DeRef(_28663);
    _28663 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 23);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28664;
    if( _1 != _28664 ){
        DeRef(_1);
    }
    _28664 = NOVALUE;
    _28658 = NOVALUE;
L7: 
L5: 

    /** parser.e:1630			SymTab[left_sym][S_USAGE] = or_bits(SymTab[left_sym][S_USAGE], U_WRITTEN)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_42left_sym_54404 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28667 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28667);
    _28668 = (object)*(((s1_ptr)_2)->base + 5);
    _28667 = NOVALUE;
    if (IS_ATOM_INT(_28668)) {
        {uintptr_t tu;
             tu = (uintptr_t)_28668 | (uintptr_t)2;
             _28669 = MAKE_UINT(tu);
        }
    }
    else {
        _28669 = binary_op(OR_BITS, _28668, 2);
    }
    _28668 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28669;
    if( _1 != _28669 ){
        DeRef(_1);
    }
    _28669 = NOVALUE;
    _28665 = NOVALUE;
L2: 

    /** parser.e:1635		tok = next_token()*/
    _0 = _tok_56717;
    _tok_56717 = _42next_token();
    DeRef(_0);

    /** parser.e:1636		subs = 0*/
    _subs_56718 = 0;

    /** parser.e:1637		slice = FALSE*/
    _slice_56719 = _9FALSE_442;

    /** parser.e:1639		dangerous = FALSE*/
    _dangerous_56723 = _9FALSE_442;

    /** parser.e:1640		side_effect_calls = 0*/
    _42side_effect_calls_54400 = 0;

    /** parser.e:1643		emit_opnd(left_sym)*/
    _49emit_opnd(_42left_sym_54404);

    /** parser.e:1644		current_sequence = append(current_sequence, left_sym)*/
    Append(&_49current_sequence_50380, _49current_sequence_50380, _42left_sym_54404);

    /** parser.e:1646		while tok[T_ID] = LEFT_SQUARE do*/
L8: 
    _2 = (object)SEQ_PTR(_tok_56717);
    _28672 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28672, -28)){
        _28672 = NOVALUE;
        goto L9; // [330] 519
    }
    _28672 = NOVALUE;

    /** parser.e:1647			subs_depth += 1*/
    _42subs_depth_54405 = _42subs_depth_54405 + 1;

    /** parser.e:1648			if lhs_ptr then*/
    if (_49lhs_ptr_50382 == 0)
    {
        goto LA; // [346] 401
    }
    else{
    }

    /** parser.e:1650				current_sequence = remove( current_sequence, length( current_sequence ) )*/
    if (IS_SEQUENCE(_49current_sequence_50380)){
            _28675 = SEQ_PTR(_49current_sequence_50380)->length;
    }
    else {
        _28675 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_49current_sequence_50380);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_28675)) ? _28675 : (object)(DBL_PTR(_28675)->dbl);
        int stop = (IS_ATOM_INT(_28675)) ? _28675 : (object)(DBL_PTR(_28675)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380 );
            }
            else Tail(SEQ_PTR(_49current_sequence_50380), stop+1, &_49current_sequence_50380);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380);
        }
        else {
            assign_slice_seq = &assign_space;
            _49current_sequence_50380 = Remove_elements(start, stop, (SEQ_PTR(_49current_sequence_50380)->ref == 1));
        }
    }
    _28675 = NOVALUE;
    _28675 = NOVALUE;

    /** parser.e:1651				if subs = 1 then*/
    if (_subs_56718 != 1)
    goto LB; // [367] 392

    /** parser.e:1653					subs1_patch = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28678 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28678 = 1;
    }
    _subs1_patch_56721 = _28678 + 1;
    _28678 = NOVALUE;

    /** parser.e:1654					emit_op(LHS_SUBS1) -- creates new current_sequence*/
    _49emit_op(161);
    goto LC; // [389] 400
LB: 

    /** parser.e:1657					emit_op(LHS_SUBS) -- adds to current_sequence*/
    _49emit_op(95);
LC: 
LA: 

    /** parser.e:1660			subs += 1*/
    _subs_56718 = _subs_56718 + 1;

    /** parser.e:1661			if subs = 1 then*/
    if (_subs_56718 != 1)
    goto LD; // [409] 424

    /** parser.e:1662				InitCheck(left_sym, TRUE)*/
    _42InitCheck(_42left_sym_54404, _9TRUE_444);
LD: 

    /** parser.e:1664			Expr()*/
    _42Expr();

    /** parser.e:1665			tok = next_token()*/
    _0 = _tok_56717;
    _tok_56717 = _42next_token();
    DeRef(_0);

    /** parser.e:1666			if tok[T_ID] = SLICE then*/
    _2 = (object)SEQ_PTR(_tok_56717);
    _28683 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28683, 513)){
        _28683 = NOVALUE;
        goto LE; // [443] 480
    }
    _28683 = NOVALUE;

    /** parser.e:1667				Expr()*/
    _42Expr();

    /** parser.e:1668				slice = TRUE*/
    _slice_56719 = _9TRUE_444;

    /** parser.e:1669				tok_match(RIGHT_SQUARE)*/
    _42tok_match(-29, 0);

    /** parser.e:1670				tok = next_token()*/
    _0 = _tok_56717;
    _tok_56717 = _42next_token();
    DeRef(_0);

    /** parser.e:1671				exit  -- no further subs or slices allowed*/
    goto L9; // [475] 519
    goto LF; // [477] 502
LE: 

    /** parser.e:1673				putback(tok)*/
    Ref(_tok_56717);
    _42putback(_tok_56717);

    /** parser.e:1674				tok_match(RIGHT_SQUARE)*/
    _42tok_match(-29, 0);

    /** parser.e:1675				subs_depth -= 1*/
    _42subs_depth_54405 = _42subs_depth_54405 - 1;
LF: 

    /** parser.e:1677			tok = next_token()*/
    _0 = _tok_56717;
    _tok_56717 = _42next_token();
    DeRef(_0);

    /** parser.e:1678			lhs_ptr = TRUE*/
    _49lhs_ptr_50382 = _9TRUE_444;

    /** parser.e:1679		end while*/
    goto L8; // [516] 322
L9: 

    /** parser.e:1681		lhs_ptr = FALSE*/
    _49lhs_ptr_50382 = _9FALSE_442;

    /** parser.e:1683		assign_op = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_56717);
    _assign_op_56720 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_assign_op_56720)){
        _assign_op_56720 = (object)DBL_PTR(_assign_op_56720)->dbl;
    }

    /** parser.e:1684		if not find(assign_op, ASSIGN_OPS) then*/
    _28689 = find_from(_assign_op_56720, _42ASSIGN_OPS_54346, 1);
    if (_28689 != 0)
    goto L10; // [545] 605
    _28689 = NOVALUE;

    /** parser.e:1685			sequence lname = SymTab[left_var[T_SYM]][S_NAME]*/
    _2 = (object)SEQ_PTR(_left_var_56715);
    _28691 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28691)){
        _28692 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28691)->dbl));
    }
    else{
        _28692 = (object)*(((s1_ptr)_2)->base + _28691);
    }
    DeRef(_lname_56846);
    _2 = (object)SEQ_PTR(_28692);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _lname_56846 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _lname_56846 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_lname_56846);
    _28692 = NOVALUE;

    /** parser.e:1686			if assign_op = COLON then*/
    if (_assign_op_56720 != -23)
    goto L11; // [574] 592

    /** parser.e:1687				CompileErr(133, {lname})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_lname_56846);
    ((intptr_t*)_2)[1] = _lname_56846;
    _28695 = MAKE_SEQ(_1);
    _52CompileErr(133, _28695, 0);
    _28695 = NOVALUE;
    goto L12; // [589] 604
L11: 

    /** parser.e:1689				CompileErr(76, {lname})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_lname_56846);
    ((intptr_t*)_2)[1] = _lname_56846;
    _28696 = MAKE_SEQ(_1);
    _52CompileErr(76, _28696, 0);
    _28696 = NOVALUE;
L12: 
L10: 
    DeRef(_lname_56846);
    _lname_56846 = NOVALUE;

    /** parser.e:1693		if subs = 0 then*/
    if (_subs_56718 != 0)
    goto L13; // [609] 737

    /** parser.e:1695			integer temp_len = length(Code)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _temp_len_56863 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _temp_len_56863 = 1;
    }

    /** parser.e:1696			if assign_op = EQUALS then*/
    if (_assign_op_56720 != 3)
    goto L14; // [624] 645

    /** parser.e:1697				Expr() -- RHS expression*/
    _42Expr();

    /** parser.e:1698				InitCheck(left_sym, FALSE)*/
    _42InitCheck(_42left_sym_54404, _9FALSE_442);
    goto L15; // [642] 718
L14: 

    /** parser.e:1700				InitCheck(left_sym, TRUE)*/
    _42InitCheck(_42left_sym_54404, _9TRUE_444);

    /** parser.e:1701				if left_sym > 0 then*/
    if (_42left_sym_54404 <= 0)
    goto L16; // [659] 701

    /** parser.e:1702					SymTab[left_sym][S_USAGE] = or_bits(SymTab[left_sym][S_USAGE], U_READ)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_42left_sym_54404 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28703 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28703);
    _28704 = (object)*(((s1_ptr)_2)->base + 5);
    _28703 = NOVALUE;
    if (IS_ATOM_INT(_28704)) {
        {uintptr_t tu;
             tu = (uintptr_t)_28704 | (uintptr_t)1;
             _28705 = MAKE_UINT(tu);
        }
    }
    else {
        _28705 = binary_op(OR_BITS, _28704, 1);
    }
    _28704 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28705;
    if( _1 != _28705 ){
        DeRef(_1);
    }
    _28705 = NOVALUE;
    _28701 = NOVALUE;
L16: 

    /** parser.e:1704				emit_opnd(left_sym)*/
    _49emit_opnd(_42left_sym_54404);

    /** parser.e:1705				Expr() -- RHS expression*/
    _42Expr();

    /** parser.e:1706				emit_assign_op(assign_op)*/
    _49emit_assign_op(_assign_op_56720);
L15: 

    /** parser.e:1708			emit_op(ASSIGN)*/
    _49emit_op(18);

    /** parser.e:1709			TypeCheck(left_sym)*/
    _42TypeCheck(_42left_sym_54404);
    goto L17; // [734] 1161
L13: 

    /** parser.e:1712			factors = 0*/
    _42factors_54401 = 0;

    /** parser.e:1713			lhs_subs_level = -1*/
    _42lhs_subs_level_54402 = -1;

    /** parser.e:1714			Expr() -- RHS expression*/
    _42Expr();

    /** parser.e:1716			if subs > 1 then*/
    if (_subs_56718 <= 1)
    goto L18; // [753] 892

    /** parser.e:1717				if left_sym < 0 or SymTab[left_sym][S_SCOPE] != SC_PRIVATE and*/
    _28707 = (_42left_sym_54404 < 0);
    if (_28707 != 0) {
        _28708 = 1;
        goto L19; // [765] 793
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28709 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28709);
    _28710 = (object)*(((s1_ptr)_2)->base + 4);
    _28709 = NOVALUE;
    if (IS_ATOM_INT(_28710)) {
        _28711 = (_28710 != 3);
    }
    else {
        _28711 = binary_op(NOTEQ, _28710, 3);
    }
    _28710 = NOVALUE;
    if (IS_ATOM_INT(_28711))
    _28708 = (_28711 != 0);
    else
    _28708 = DBL_PTR(_28711)->dbl != 0.0;
L19: 
    if (_28708 == 0) {
        goto L1A; // [793] 827
    }
    _28713 = (_42left_sym_54404 % 29);
    _28714 = power(2, _28713);
    _28713 = NOVALUE;
    if (IS_ATOM_INT(_28714)) {
        {uintptr_t tu;
             tu = (uintptr_t)_42side_effect_calls_54400 & (uintptr_t)_28714;
             _28715 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_42side_effect_calls_54400;
        _28715 = Dand_bits(&temp_d, DBL_PTR(_28714));
    }
    DeRef(_28714);
    _28714 = NOVALUE;
    if (_28715 == 0) {
        DeRef(_28715);
        _28715 = NOVALUE;
        goto L1A; // [816] 827
    }
    else {
        if (!IS_ATOM_INT(_28715) && DBL_PTR(_28715)->dbl == 0.0){
            DeRef(_28715);
            _28715 = NOVALUE;
            goto L1A; // [816] 827
        }
        DeRef(_28715);
        _28715 = NOVALUE;
    }
    DeRef(_28715);
    _28715 = NOVALUE;

    /** parser.e:1722					dangerous = TRUE*/
    _dangerous_56723 = _9TRUE_444;
L1A: 

    /** parser.e:1725				if factors = 1 and*/
    _28716 = (_42factors_54401 == 1);
    if (_28716 == 0) {
        _28717 = 0;
        goto L1B; // [835] 849
    }
    _28718 = (_42lhs_subs_level_54402 >= 0);
    _28717 = (_28718 != 0);
L1B: 
    if (_28717 == 0) {
        goto L1C; // [849] 875
    }
    _28720 = _subs_56718 + _slice_56719;
    if ((object)((uintptr_t)_28720 + (uintptr_t)HIGH_BITS) >= 0){
        _28720 = NewDouble((eudouble)_28720);
    }
    if (IS_ATOM_INT(_28720)) {
        _28721 = (_42lhs_subs_level_54402 < _28720);
    }
    else {
        _28721 = ((eudouble)_42lhs_subs_level_54402 < DBL_PTR(_28720)->dbl);
    }
    DeRef(_28720);
    _28720 = NOVALUE;
    if (_28721 == 0)
    {
        DeRef(_28721);
        _28721 = NOVALUE;
        goto L1C; // [864] 875
    }
    else{
        DeRef(_28721);
        _28721 = NOVALUE;
    }

    /** parser.e:1729					dangerous = TRUE*/
    _dangerous_56723 = _9TRUE_444;
L1C: 

    /** parser.e:1732				if dangerous then*/
    if (_dangerous_56723 == 0)
    {
        goto L1D; // [877] 891
    }
    else{
    }

    /** parser.e:1738					backpatch(subs1_patch, LHS_SUBS1_COPY)*/
    _49backpatch(_subs1_patch_56721, 166);
L1D: 
L18: 

    /** parser.e:1742			if slice then*/
    if (_slice_56719 == 0)
    {
        goto L1E; // [894] 962
    }
    else{
    }

    /** parser.e:1743				if assign_op != EQUALS then*/
    if (_assign_op_56720 == 3)
    goto L1F; // [901] 935

    /** parser.e:1744					if subs = 1 then*/
    if (_subs_56718 != 1)
    goto L20; // [907] 921

    /** parser.e:1745						emit_op(ASSIGN_OP_SLICE)*/
    _49emit_op(150);
    goto L21; // [918] 929
L20: 

    /** parser.e:1747						emit_op(PASSIGN_OP_SLICE)*/
    _49emit_op(165);
L21: 

    /** parser.e:1749					emit_assign_op(assign_op)*/
    _49emit_assign_op(_assign_op_56720);
L1F: 

    /** parser.e:1751				if subs = 1 then*/
    if (_subs_56718 != 1)
    goto L22; // [937] 951

    /** parser.e:1752					emit_op(ASSIGN_SLICE)*/
    _49emit_op(45);
    goto L23; // [948] 1052
L22: 

    /** parser.e:1754					emit_op(PASSIGN_SLICE)*/
    _49emit_op(163);
    goto L23; // [959] 1052
L1E: 

    /** parser.e:1757				if assign_op = EQUALS then*/
    if (_assign_op_56720 != 3)
    goto L24; // [966] 997

    /** parser.e:1758					if subs = 1 then*/
    if (_subs_56718 != 1)
    goto L25; // [972] 986

    /** parser.e:1759						emit_op(ASSIGN_SUBS)*/
    _49emit_op(16);
    goto L26; // [983] 1051
L25: 

    /** parser.e:1761						emit_op(PASSIGN_SUBS)*/
    _49emit_op(162);
    goto L26; // [994] 1051
L24: 

    /** parser.e:1764					if subs = 1 then*/
    if (_subs_56718 != 1)
    goto L27; // [999] 1013

    /** parser.e:1765						emit_op(ASSIGN_OP_SUBS)*/
    _49emit_op(149);
    goto L28; // [1010] 1021
L27: 

    /** parser.e:1767						emit_op(PASSIGN_OP_SUBS)*/
    _49emit_op(164);
L28: 

    /** parser.e:1769					emit_assign_op(assign_op)*/
    _49emit_assign_op(_assign_op_56720);

    /** parser.e:1770					if subs = 1 then*/
    if (_subs_56718 != 1)
    goto L29; // [1028] 1042

    /** parser.e:1771						emit_op(ASSIGN_SUBS2)*/
    _49emit_op(148);
    goto L2A; // [1039] 1050
L29: 

    /** parser.e:1773						emit_op(PASSIGN_SUBS)*/
    _49emit_op(162);
L2A: 
L26: 
L23: 

    /** parser.e:1778			if subs > 1 then*/
    if (_subs_56718 <= 1)
    goto L2B; // [1054] 1106

    /** parser.e:1779				if dangerous then*/
    if (_dangerous_56723 == 0)
    {
        goto L2C; // [1060] 1097
    }
    else{
    }

    /** parser.e:1781					emit_opnd(left_sym)*/
    _49emit_opnd(_42left_sym_54404);

    /** parser.e:1782					emit_opnd(lhs_subs1_copy_temp) -- will be freed*/
    _49emit_opnd(_49lhs_subs1_copy_temp_50385);

    /** parser.e:1783					emit_temp( lhs_subs1_copy_temp, NEW_REFERENCE )*/
    _49emit_temp(_49lhs_subs1_copy_temp_50385, 1);

    /** parser.e:1784					emit_op(ASSIGN)*/
    _49emit_op(18);
    goto L2D; // [1094] 1105
L2C: 

    /** parser.e:1787					TempFree(lhs_subs1_copy_temp)*/
    _49TempFree(_49lhs_subs1_copy_temp_50385);
L2D: 
L2B: 

    /** parser.e:1791			if OpTypeCheck and (left_sym < 0 or SymTab[left_sym][S_VTYPE] != sequence_type) then*/
    if (_39OpTypeCheck_16885 == 0) {
        goto L2E; // [1110] 1160
    }
    _28731 = (_42left_sym_54404 < 0);
    if (_28731 != 0) {
        DeRef(_28732);
        _28732 = 1;
        goto L2F; // [1120] 1148
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28733 = (object)*(((s1_ptr)_2)->base + _42left_sym_54404);
    _2 = (object)SEQ_PTR(_28733);
    _28734 = (object)*(((s1_ptr)_2)->base + 15);
    _28733 = NOVALUE;
    if (IS_ATOM_INT(_28734)) {
        _28735 = (_28734 != _56sequence_type_46262);
    }
    else {
        _28735 = binary_op(NOTEQ, _28734, _56sequence_type_46262);
    }
    _28734 = NOVALUE;
    if (IS_ATOM_INT(_28735))
    _28732 = (_28735 != 0);
    else
    _28732 = DBL_PTR(_28735)->dbl != 0.0;
L2F: 
    if (_28732 == 0)
    {
        _28732 = NOVALUE;
        goto L2E; // [1149] 1160
    }
    else{
        _28732 = NOVALUE;
    }

    /** parser.e:1792				TypeCheck(left_sym)*/
    _42TypeCheck(_42left_sym_54404);
L2E: 
L17: 

    /** parser.e:1796		current_sequence = remove( current_sequence, length( current_sequence ) )*/
    if (IS_SEQUENCE(_49current_sequence_50380)){
            _28736 = SEQ_PTR(_49current_sequence_50380)->length;
    }
    else {
        _28736 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_49current_sequence_50380);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_28736)) ? _28736 : (object)(DBL_PTR(_28736)->dbl);
        int stop = (IS_ATOM_INT(_28736)) ? _28736 : (object)(DBL_PTR(_28736)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380 );
            }
            else Tail(SEQ_PTR(_49current_sequence_50380), stop+1, &_49current_sequence_50380);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49current_sequence_50380), start, &_49current_sequence_50380);
        }
        else {
            assign_slice_seq = &assign_space;
            _49current_sequence_50380 = Remove_elements(start, stop, (SEQ_PTR(_49current_sequence_50380)->ref == 1));
        }
    }
    _28736 = NOVALUE;
    _28736 = NOVALUE;

    /** parser.e:1798		if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L30; // [1181] 1207

    /** parser.e:1799			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L31; // [1188] 1206
    }
    else{
    }

    /** parser.e:1800				emit_op(DISPLAY_VAR)*/
    _49emit_op(87);

    /** parser.e:1801				emit_addr(left_sym)*/
    _49emit_addr(_42left_sym_54404);
L31: 
L30: 

    /** parser.e:1804	end procedure*/
    DeRef(_left_var_56715);
    DeRef(_tok_56717);
    DeRef(_28718);
    _28718 = NOVALUE;
    DeRef(_28707);
    _28707 = NOVALUE;
    DeRef(_28647);
    _28647 = NOVALUE;
    DeRef(_28711);
    _28711 = NOVALUE;
    DeRef(_28731);
    _28731 = NOVALUE;
    _28691 = NOVALUE;
    DeRef(_28735);
    _28735 = NOVALUE;
    DeRef(_28716);
    _28716 = NOVALUE;
    return;
    ;
}


void _42Multi_assign()
{
    object _lhs_syms_57003 = NOVALUE;
    object _lhs_list_57004 = NOVALUE;
    object _tok_57006 = NOVALUE;
    object _need_comma_57007 = NOVALUE;
    object _temp_sym_57068 = NOVALUE;
    object _temps_57071 = NOVALUE;
    object _len_57119 = NOVALUE;
    object _28795 = NOVALUE;
    object _28793 = NOVALUE;
    object _28791 = NOVALUE;
    object _28789 = NOVALUE;
    object _28788 = NOVALUE;
    object _28787 = NOVALUE;
    object _28786 = NOVALUE;
    object _28785 = NOVALUE;
    object _28784 = NOVALUE;
    object _28782 = NOVALUE;
    object _28781 = NOVALUE;
    object _28780 = NOVALUE;
    object _28779 = NOVALUE;
    object _28778 = NOVALUE;
    object _28776 = NOVALUE;
    object _28775 = NOVALUE;
    object _28774 = NOVALUE;
    object _28773 = NOVALUE;
    object _28772 = NOVALUE;
    object _28768 = NOVALUE;
    object _28767 = NOVALUE;
    object _28766 = NOVALUE;
    object _28765 = NOVALUE;
    object _28762 = NOVALUE;
    object _28761 = NOVALUE;
    object _28759 = NOVALUE;
    object _28758 = NOVALUE;
    object _28757 = NOVALUE;
    object _28755 = NOVALUE;
    object _28754 = NOVALUE;
    object _28753 = NOVALUE;
    object _28752 = NOVALUE;
    object _28750 = NOVALUE;
    object _28749 = NOVALUE;
    object _28748 = NOVALUE;
    object _28746 = NOVALUE;
    object _28745 = NOVALUE;
    object _28742 = NOVALUE;
    object _28739 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:1811		sequence lhs_syms = {}*/
    RefDS(_21928);
    DeRef(_lhs_syms_57003);
    _lhs_syms_57003 = _21928;

    /** parser.e:1812		sequence lhs_list = {} -- make sure we don't repeat anything*/
    RefDS(_21928);
    DeRef(_lhs_list_57004);
    _lhs_list_57004 = _21928;

    /** parser.e:1814		integer need_comma = 0*/
    _need_comma_57007 = 0;

    /** parser.e:1815		while tok[T_ID] != RIGHT_BRACE with entry do*/
    goto L1; // [22] 213
L2: 
    _2 = (object)SEQ_PTR(_tok_57006);
    _28739 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _28739, -25)){
        _28739 = NOVALUE;
        goto L3; // [35] 223
    }
    _28739 = NOVALUE;

    /** parser.e:1817			if need_comma then*/
    if (_need_comma_57007 == 0)
    {
        goto L4; // [41] 63
    }
    else{
    }

    /** parser.e:1818				putback( tok )*/
    Ref(_tok_57006);
    _42putback(_tok_57006);

    /** parser.e:1819				tok_match( COMMA )*/
    _42tok_match(-30, 0);

    /** parser.e:1820				tok = next_token()*/
    _0 = _tok_57006;
    _tok_57006 = _42next_token();
    DeRef(_0);
L4: 

    /** parser.e:1823			if tok[T_ID] = QUESTION_MARK then*/
    _2 = (object)SEQ_PTR(_tok_57006);
    _28742 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28742, -31)){
        _28742 = NOVALUE;
        goto L5; // [73] 86
    }
    _28742 = NOVALUE;

    /** parser.e:1825				lhs_syms &= 0*/
    Append(&_lhs_syms_57003, _lhs_syms_57003, 0);
    goto L6; // [83] 205
L5: 

    /** parser.e:1826			elsif tok[T_ID] = VARIABLE or tok[T_ID] = QUALIFIED_VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok_57006);
    _28745 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28745)) {
        _28746 = (_28745 == -100);
    }
    else {
        _28746 = binary_op(EQUALS, _28745, -100);
    }
    _28745 = NOVALUE;
    if (IS_ATOM_INT(_28746)) {
        if (_28746 != 0) {
            goto L7; // [100] 121
        }
    }
    else {
        if (DBL_PTR(_28746)->dbl != 0.0) {
            goto L7; // [100] 121
        }
    }
    _2 = (object)SEQ_PTR(_tok_57006);
    _28748 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28748)) {
        _28749 = (_28748 == 512);
    }
    else {
        _28749 = binary_op(EQUALS, _28748, 512);
    }
    _28748 = NOVALUE;
    if (_28749 == 0) {
        DeRef(_28749);
        _28749 = NOVALUE;
        goto L8; // [117] 197
    }
    else {
        if (!IS_ATOM_INT(_28749) && DBL_PTR(_28749)->dbl == 0.0){
            DeRef(_28749);
            _28749 = NOVALUE;
            goto L8; // [117] 197
        }
        DeRef(_28749);
        _28749 = NOVALUE;
    }
    DeRef(_28749);
    _28749 = NOVALUE;
L7: 

    /** parser.e:1827				lhs_syms &= tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_57006);
    _28750 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_lhs_syms_57003) && IS_ATOM(_28750)) {
        Ref(_28750);
        Append(&_lhs_syms_57003, _lhs_syms_57003, _28750);
    }
    else if (IS_ATOM(_lhs_syms_57003) && IS_SEQUENCE(_28750)) {
    }
    else {
        Concat((object_ptr)&_lhs_syms_57003, _lhs_syms_57003, _28750);
    }
    _28750 = NOVALUE;

    /** parser.e:1828				if SymTab[lhs_syms[$]][S_SCOPE] = SC_UNDEFINED then*/
    if (IS_SEQUENCE(_lhs_syms_57003)){
            _28752 = SEQ_PTR(_lhs_syms_57003)->length;
    }
    else {
        _28752 = 1;
    }
    _2 = (object)SEQ_PTR(_lhs_syms_57003);
    _28753 = (object)*(((s1_ptr)_2)->base + _28752);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28753)){
        _28754 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28753)->dbl));
    }
    else{
        _28754 = (object)*(((s1_ptr)_2)->base + _28753);
    }
    _2 = (object)SEQ_PTR(_28754);
    _28755 = (object)*(((s1_ptr)_2)->base + 4);
    _28754 = NOVALUE;
    if (binary_op_a(NOTEQ, _28755, 9)){
        _28755 = NOVALUE;
        goto L9; // [156] 180
    }
    _28755 = NOVALUE;

    /** parser.e:1829					lhs_list = append( lhs_list, sym_name( lhs_syms[$] ) )*/
    if (IS_SEQUENCE(_lhs_syms_57003)){
            _28757 = SEQ_PTR(_lhs_syms_57003)->length;
    }
    else {
        _28757 = 1;
    }
    _2 = (object)SEQ_PTR(_lhs_syms_57003);
    _28758 = (object)*(((s1_ptr)_2)->base + _28757);
    Ref(_28758);
    _28759 = _56sym_name(_28758);
    _28758 = NOVALUE;
    Ref(_28759);
    Append(&_lhs_list_57004, _lhs_list_57004, _28759);
    DeRef(_28759);
    _28759 = NOVALUE;
    goto L6; // [177] 205
L9: 

    /** parser.e:1831					lhs_list &= lhs_syms[$]*/
    if (IS_SEQUENCE(_lhs_syms_57003)){
            _28761 = SEQ_PTR(_lhs_syms_57003)->length;
    }
    else {
        _28761 = 1;
    }
    _2 = (object)SEQ_PTR(_lhs_syms_57003);
    _28762 = (object)*(((s1_ptr)_2)->base + _28761);
    if (IS_SEQUENCE(_lhs_list_57004) && IS_ATOM(_28762)) {
        Ref(_28762);
        Append(&_lhs_list_57004, _lhs_list_57004, _28762);
    }
    else if (IS_ATOM(_lhs_list_57004) && IS_SEQUENCE(_28762)) {
    }
    else {
        Concat((object_ptr)&_lhs_list_57004, _lhs_list_57004, _28762);
    }
    _28762 = NOVALUE;
    goto L6; // [194] 205
L8: 

    /** parser.e:1834				CompileErr( 24 )*/
    RefDS(_21928);
    _52CompileErr(24, _21928, 0);
L6: 

    /** parser.e:1837			need_comma = 1*/
    _need_comma_57007 = 1;

    /** parser.e:1838		entry*/
L1: 

    /** parser.e:1839			tok = next_token()*/
    _0 = _tok_57006;
    _tok_57006 = _42next_token();
    DeRef(_0);

    /** parser.e:1840		end while*/
    goto L2; // [220] 25
L3: 

    /** parser.e:1843		if length( lhs_list ) != length( remove_dups( sort( lhs_list ) ) ) then*/
    if (IS_SEQUENCE(_lhs_list_57004)){
            _28765 = SEQ_PTR(_lhs_list_57004)->length;
    }
    else {
        _28765 = 1;
    }
    RefDS(_lhs_list_57004);
    _28766 = _23sort(_lhs_list_57004, 1);
    _28767 = _22remove_dups(_28766, 2);
    _28766 = NOVALUE;
    if (IS_SEQUENCE(_28767)){
            _28768 = SEQ_PTR(_28767)->length;
    }
    else {
        _28768 = 1;
    }
    DeRef(_28767);
    _28767 = NOVALUE;
    if (_28765 == _28768)
    goto LA; // [241] 255

    /** parser.e:1844			CompileErr( DUPLICATE_MULTI_ASSIGN )*/
    RefDS(_21928);
    _52CompileErr(602, _21928, 0);
LA: 

    /** parser.e:1846		tok_match( EQUALS )*/
    _42tok_match(3, 0);

    /** parser.e:1849		Expr()*/
    _42Expr();

    /** parser.e:1851		symtab_index temp_sym = Pop()*/
    _temp_sym_57068 = _49Pop();
    if (!IS_ATOM_INT(_temp_sym_57068)) {
        _1 = (object)(DBL_PTR(_temp_sym_57068)->dbl);
        DeRefDS(_temp_sym_57068);
        _temp_sym_57068 = _1;
    }

    /** parser.e:1852		sequence temps = pop_temps()*/
    _0 = _temps_57071;
    _temps_57071 = _49pop_temps();
    DeRef(_0);

    /** parser.e:1853		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LB; // [285] 301
    }
    else{
    }

    /** parser.e:1854			emit_opnd( temp_sym )*/
    _49emit_opnd(_temp_sym_57068);

    /** parser.e:1855			emit_op( REF_TEMP )*/
    _49emit_op(207);
LB: 

    /** parser.e:1858		for i = 1 to length( lhs_syms ) do*/
    if (IS_SEQUENCE(_lhs_syms_57003)){
            _28772 = SEQ_PTR(_lhs_syms_57003)->length;
    }
    else {
        _28772 = 1;
    }
    {
        object _i_57080;
        _i_57080 = 1;
LC: 
        if (_i_57080 > _28772){
            goto LD; // [306] 510
        }

        /** parser.e:1859			if lhs_syms[i] then*/
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28773 = (object)*(((s1_ptr)_2)->base + _i_57080);
        if (_28773 == 0) {
            _28773 = NOVALUE;
            goto LE; // [319] 501
        }
        else {
            if (!IS_ATOM_INT(_28773) && DBL_PTR(_28773)->dbl == 0.0){
                _28773 = NOVALUE;
                goto LE; // [319] 501
            }
            _28773 = NOVALUE;
        }
        _28773 = NOVALUE;

        /** parser.e:1860				if SymTab[lhs_syms[i]][S_SCOPE] = SC_UNDEFINED then*/
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28774 = (object)*(((s1_ptr)_2)->base + _i_57080);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_28774)){
            _28775 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28774)->dbl));
        }
        else{
            _28775 = (object)*(((s1_ptr)_2)->base + _28774);
        }
        _2 = (object)SEQ_PTR(_28775);
        _28776 = (object)*(((s1_ptr)_2)->base + 4);
        _28775 = NOVALUE;
        if (binary_op_a(NOTEQ, _28776, 9)){
            _28776 = NOVALUE;
            goto LF; // [342] 377
        }
        _28776 = NOVALUE;

        /** parser.e:1861					Forward_var( { VARIABLE, lhs_syms[i]}, ,ASSIGN )*/
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28778 = (object)*(((s1_ptr)_2)->base + _i_57080);
        Ref(_28778);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -100;
        ((intptr_t *)_2)[2] = _28778;
        _28779 = MAKE_SEQ(_1);
        _28778 = NOVALUE;
        _42Forward_var(_28779, -1, 18);
        _28779 = NOVALUE;

        /** parser.e:1862					lhs_syms[i] = Pop()*/
        _28780 = _49Pop();
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _lhs_syms_57003 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_57080);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _28780;
        if( _1 != _28780 ){
            DeRef(_1);
        }
        _28780 = NOVALUE;
        goto L10; // [374] 419
LF: 

        /** parser.e:1864					SymTab[lhs_syms[i]][S_USAGE] = or_bits(SymTab[lhs_syms[i]][S_USAGE], U_WRITTEN)*/
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28781 = (object)*(((s1_ptr)_2)->base + _i_57080);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_28781))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_28781)->dbl));
        else
        _3 = (object)(_28781 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28784 = (object)*(((s1_ptr)_2)->base + _i_57080);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_28784)){
            _28785 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28784)->dbl));
        }
        else{
            _28785 = (object)*(((s1_ptr)_2)->base + _28784);
        }
        _2 = (object)SEQ_PTR(_28785);
        _28786 = (object)*(((s1_ptr)_2)->base + 5);
        _28785 = NOVALUE;
        if (IS_ATOM_INT(_28786)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_28786 | (uintptr_t)2;
                 _28787 = MAKE_UINT(tu);
            }
        }
        else {
            _28787 = binary_op(OR_BITS, _28786, 2);
        }
        _28786 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _28787;
        if( _1 != _28787 ){
            DeRef(_1);
        }
        _28787 = NOVALUE;
        _28782 = NOVALUE;
L10: 

        /** parser.e:1867				emit_opnd( lhs_syms[i] )*/
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28788 = (object)*(((s1_ptr)_2)->base + _i_57080);
        Ref(_28788);
        _49emit_opnd(_28788);
        _28788 = NOVALUE;

        /** parser.e:1869				emit_opnd( temp_sym )*/
        _49emit_opnd(_temp_sym_57068);

        /** parser.e:1870				emit_opnd( NewIntSym( i ) )*/
        _28789 = _56NewIntSym(_i_57080);
        _49emit_opnd(_28789);
        _28789 = NOVALUE;

        /** parser.e:1871				emit_op( RHS_SUBS )*/
        _49emit_op(25);

        /** parser.e:1872				integer len = length( Code )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _len_57119 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _len_57119 = 1;
        }

        /** parser.e:1873				if Code[len] = temp_sym then*/
        _2 = (object)SEQ_PTR(_39Code_16903);
        _28791 = (object)*(((s1_ptr)_2)->base + _len_57119);
        if (binary_op_a(NOTEQ, _28791, _temp_sym_57068)){
            _28791 = NOVALUE;
            goto L11; // [464] 484
        }
        _28791 = NOVALUE;

        /** parser.e:1875					Code = remove( Code, len - 1, len )*/
        _28793 = _len_57119 - 1;
        {
            s1_ptr assign_space = SEQ_PTR(_39Code_16903);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_28793)) ? _28793 : (object)(DBL_PTR(_28793)->dbl);
            int stop = (IS_ATOM_INT(_len_57119)) ? _len_57119 : (object)(DBL_PTR(_len_57119)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_39Code_16903), start, &_39Code_16903 );
                }
                else Tail(SEQ_PTR(_39Code_16903), stop+1, &_39Code_16903);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_39Code_16903), start, &_39Code_16903);
            }
            else {
                assign_slice_seq = &assign_space;
                _39Code_16903 = Remove_elements(start, stop, (SEQ_PTR(_39Code_16903)->ref == 1));
            }
        }
        _28793 = NOVALUE;
L11: 

        /** parser.e:1877				emit_op( ASSIGN )*/
        _49emit_op(18);

        /** parser.e:1879				TypeCheck( lhs_syms[i] )*/
        _2 = (object)SEQ_PTR(_lhs_syms_57003);
        _28795 = (object)*(((s1_ptr)_2)->base + _i_57080);
        Ref(_28795);
        _42TypeCheck(_28795);
        _28795 = NOVALUE;
LE: 

        /** parser.e:1882		end for*/
        _i_57080 = _i_57080 + 1;
        goto LC; // [505] 313
LD: 
        ;
    }

    /** parser.e:1884		push_temps( temps )*/
    RefDS(_temps_57071);
    _49push_temps(_temps_57071);

    /** parser.e:1885		flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:1887		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L12; // [524] 540
    }
    else{
    }

    /** parser.e:1888			emit_opnd( temp_sym )*/
    _49emit_opnd(_temp_sym_57068);

    /** parser.e:1889			emit_op( DEREF_TEMP )*/
    _49emit_op(208);
L12: 

    /** parser.e:1891	end procedure*/
    DeRef(_lhs_syms_57003);
    DeRef(_lhs_list_57004);
    DeRef(_tok_57006);
    DeRef(_temps_57071);
    _28753 = NOVALUE;
    _28774 = NOVALUE;
    _28767 = NOVALUE;
    _28781 = NOVALUE;
    _28784 = NOVALUE;
    DeRef(_28746);
    _28746 = NOVALUE;
    return;
    ;
}


void _42Return_statement()
{
    object _tok_57143 = NOVALUE;
    object _pop_57144 = NOVALUE;
    object _last_op_57150 = NOVALUE;
    object _last_pc_57153 = NOVALUE;
    object _is_tail_57156 = NOVALUE;
    object _28827 = NOVALUE;
    object _28825 = NOVALUE;
    object _28824 = NOVALUE;
    object _28823 = NOVALUE;
    object _28822 = NOVALUE;
    object _28820 = NOVALUE;
    object _28819 = NOVALUE;
    object _28818 = NOVALUE;
    object _28817 = NOVALUE;
    object _28816 = NOVALUE;
    object _28815 = NOVALUE;
    object _28814 = NOVALUE;
    object _28813 = NOVALUE;
    object _28809 = NOVALUE;
    object _28808 = NOVALUE;
    object _28806 = NOVALUE;
    object _28805 = NOVALUE;
    object _28804 = NOVALUE;
    object _28803 = NOVALUE;
    object _28802 = NOVALUE;
    object _28801 = NOVALUE;
    object _28800 = NOVALUE;
    object _28799 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1897		integer pop*/

    /** parser.e:1898		if CurrentSub = TopLevelSub then*/
    if (_39CurrentSub_16823 != _39TopLevelSub_16822)
    goto L1; // [9] 21

    /** parser.e:1899			CompileErr(130)*/
    RefDS(_21928);
    _52CompileErr(130, _21928, 0);
L1: 

    /** parser.e:1902		integer*/

    /** parser.e:1903			last_op = Last_op(),*/
    _last_op_57150 = _49Last_op();
    if (!IS_ATOM_INT(_last_op_57150)) {
        _1 = (object)(DBL_PTR(_last_op_57150)->dbl);
        DeRefDS(_last_op_57150);
        _last_op_57150 = _1;
    }

    /** parser.e:1904			last_pc = Last_pc(),*/
    _last_pc_57153 = _49Last_pc();
    if (!IS_ATOM_INT(_last_pc_57153)) {
        _1 = (object)(DBL_PTR(_last_pc_57153)->dbl);
        DeRefDS(_last_pc_57153);
        _last_pc_57153 = _1;
    }

    /** parser.e:1905			is_tail = 0*/
    _is_tail_57156 = 0;

    /** parser.e:1907		if last_op = PROC and length(Code) > last_pc and Code[last_pc+1] = CurrentSub then*/
    _28799 = (_last_op_57150 == 27);
    if (_28799 == 0) {
        _28800 = 0;
        goto L2; // [50] 67
    }
    if (IS_SEQUENCE(_39Code_16903)){
            _28801 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28801 = 1;
    }
    _28802 = (_28801 > _last_pc_57153);
    _28801 = NOVALUE;
    _28800 = (_28802 != 0);
L2: 
    if (_28800 == 0) {
        goto L3; // [67] 97
    }
    _28804 = _last_pc_57153 + 1;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _28805 = (object)*(((s1_ptr)_2)->base + _28804);
    if (IS_ATOM_INT(_28805)) {
        _28806 = (_28805 == _39CurrentSub_16823);
    }
    else {
        _28806 = binary_op(EQUALS, _28805, _39CurrentSub_16823);
    }
    _28805 = NOVALUE;
    if (_28806 == 0) {
        DeRef(_28806);
        _28806 = NOVALUE;
        goto L3; // [88] 97
    }
    else {
        if (!IS_ATOM_INT(_28806) && DBL_PTR(_28806)->dbl == 0.0){
            DeRef(_28806);
            _28806 = NOVALUE;
            goto L3; // [88] 97
        }
        DeRef(_28806);
        _28806 = NOVALUE;
    }
    DeRef(_28806);
    _28806 = NOVALUE;

    /** parser.e:1908			is_tail = 1*/
    _is_tail_57156 = 1;
L3: 

    /** parser.e:1911		if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L4; // [101] 127

    /** parser.e:1912			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L5; // [108] 126
    }
    else{
    }

    /** parser.e:1913				emit_op(ERASE_PRIVATE_NAMES)*/
    _49emit_op(88);

    /** parser.e:1914				emit_addr(CurrentSub)*/
    _49emit_addr(_39CurrentSub_16823);
L5: 
L4: 

    /** parser.e:1917		if SymTab[CurrentSub][S_TOKEN] != PROC then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _28808 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_28808);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _28809 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _28809 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _28808 = NOVALUE;
    if (binary_op_a(EQUALS, _28809, 27)){
        _28809 = NOVALUE;
        goto L6; // [145] 271
    }
    _28809 = NOVALUE;

    /** parser.e:1918			Expr()*/
    _42Expr();

    /** parser.e:1919			last_op = Last_op()*/
    _last_op_57150 = _49Last_op();
    if (!IS_ATOM_INT(_last_op_57150)) {
        _1 = (object)(DBL_PTR(_last_op_57150)->dbl);
        DeRefDS(_last_op_57150);
        _last_op_57150 = _1;
    }

    /** parser.e:1920			last_pc = Last_pc()*/
    _last_pc_57153 = _49Last_pc();
    if (!IS_ATOM_INT(_last_pc_57153)) {
        _1 = (object)(DBL_PTR(_last_pc_57153)->dbl);
        DeRefDS(_last_pc_57153);
        _last_pc_57153 = _1;
    }

    /** parser.e:1921			if last_op = PROC and length(Code) > last_pc and Code[last_pc+1] = CurrentSub then*/
    _28813 = (_last_op_57150 == 27);
    if (_28813 == 0) {
        _28814 = 0;
        goto L7; // [175] 192
    }
    if (IS_SEQUENCE(_39Code_16903)){
            _28815 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28815 = 1;
    }
    _28816 = (_28815 > _last_pc_57153);
    _28815 = NOVALUE;
    _28814 = (_28816 != 0);
L7: 
    if (_28814 == 0) {
        goto L8; // [192] 251
    }
    _28818 = _last_pc_57153 + 1;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _28819 = (object)*(((s1_ptr)_2)->base + _28818);
    if (IS_ATOM_INT(_28819)) {
        _28820 = (_28819 == _39CurrentSub_16823);
    }
    else {
        _28820 = binary_op(EQUALS, _28819, _39CurrentSub_16823);
    }
    _28819 = NOVALUE;
    if (_28820 == 0) {
        DeRef(_28820);
        _28820 = NOVALUE;
        goto L8; // [213] 251
    }
    else {
        if (!IS_ATOM_INT(_28820) && DBL_PTR(_28820)->dbl == 0.0){
            DeRef(_28820);
            _28820 = NOVALUE;
            goto L8; // [213] 251
        }
        DeRef(_28820);
        _28820 = NOVALUE;
    }
    DeRef(_28820);
    _28820 = NOVALUE;

    /** parser.e:1922				pop = Pop() -- prevent cg_stack (code generation stack) leakage*/
    _pop_57144 = _49Pop();
    if (!IS_ATOM_INT(_pop_57144)) {
        _1 = (object)(DBL_PTR(_pop_57144)->dbl);
        DeRefDS(_pop_57144);
        _pop_57144 = _1;
    }

    /** parser.e:1923				Code[Last_pc()] = PROC_TAIL*/
    _28822 = _49Last_pc();
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_28822))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_28822)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _28822);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 203;
    DeRef(_1);

    /** parser.e:1924				if object(pop_temps()) then end if*/
    _28823 = _49pop_temps();
    if( NOVALUE == _28823 ){
        _28824 = 0;
    }
    else{
        if (IS_ATOM_INT(_28823))
        _28824 = 1;
        else if (IS_ATOM_DBL(_28823)) {
             if (IS_ATOM_INT(DoubleToInt(_28823))) {
                 _28824 = 1;
                 } else {
                     _28824 = 2;
                } } else if (IS_SEQUENCE(_28823))
                _28824 = 3;
                else
                _28824 = 0;
            }
            DeRef(_28823);
            _28823 = NOVALUE;
            if (_28824 == 0)
            {
                _28824 = NOVALUE;
                goto L9; // [244] 298
            }
            else{
                _28824 = NOVALUE;
            }
            goto L9; // [248] 298
L8: 

            /** parser.e:1926				FuncReturn = TRUE*/
            _42FuncReturn_54371 = _9TRUE_444;

            /** parser.e:1927				emit_op(RETURNF)*/
            _49emit_op(28);
            goto L9; // [268] 298
L6: 

            /** parser.e:1930			if is_tail then*/
            if (_is_tail_57156 == 0)
            {
                goto LA; // [273] 290
            }
            else{
            }

            /** parser.e:1931				Code[Last_pc()] = PROC_TAIL*/
            _28825 = _49Last_pc();
            _2 = (object)SEQ_PTR(_39Code_16903);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _39Code_16903 = MAKE_SEQ(_2);
            }
            if (!IS_ATOM_INT(_28825))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_28825)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _28825);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 203;
            DeRef(_1);
LA: 

            /** parser.e:1933			emit_op(RETURNP)*/
            _49emit_op(29);
L9: 

            /** parser.e:1936		tok = next_token()*/
            _0 = _tok_57143;
            _tok_57143 = _42next_token();
            DeRef(_0);

            /** parser.e:1937		putback(tok)*/
            Ref(_tok_57143);
            _42putback(_tok_57143);

            /** parser.e:1938		NotReached(tok[T_ID], "return")*/
            _2 = (object)SEQ_PTR(_tok_57143);
            _28827 = (object)*(((s1_ptr)_2)->base + 1);
            Ref(_28827);
            RefDS(_26187);
            _42NotReached(_28827, _26187);
            _28827 = NOVALUE;

            /** parser.e:1939	end procedure*/
            DeRef(_tok_57143);
            DeRef(_28799);
            _28799 = NOVALUE;
            DeRef(_28813);
            _28813 = NOVALUE;
            DeRef(_28804);
            _28804 = NOVALUE;
            DeRef(_28816);
            _28816 = NOVALUE;
            DeRef(_28822);
            _28822 = NOVALUE;
            DeRef(_28825);
            _28825 = NOVALUE;
            DeRef(_28818);
            _28818 = NOVALUE;
            DeRef(_28802);
            _28802 = NOVALUE;
            return;
    ;
}


object _42exit_level(object _tok_57232, object _flag_57233)
{
    object _arg_57234 = NOVALUE;
    object _n_57235 = NOVALUE;
    object _num_labels_57236 = NOVALUE;
    object _negative_57237 = NOVALUE;
    object _labels_57238 = NOVALUE;
    object _28857 = NOVALUE;
    object _28856 = NOVALUE;
    object _28855 = NOVALUE;
    object _28854 = NOVALUE;
    object _28853 = NOVALUE;
    object _28849 = NOVALUE;
    object _28848 = NOVALUE;
    object _28847 = NOVALUE;
    object _28845 = NOVALUE;
    object _28844 = NOVALUE;
    object _28843 = NOVALUE;
    object _28842 = NOVALUE;
    object _28840 = NOVALUE;
    object _28835 = NOVALUE;
    object _28834 = NOVALUE;
    object _28832 = NOVALUE;
    object _28829 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1946		integer negative = 0*/
    _negative_57237 = 0;

    /** parser.e:1949		if flag then*/
    if (_flag_57233 == 0)
    {
        goto L1; // [10] 25
    }
    else{
    }

    /** parser.e:1950			labels = if_labels*/
    RefDS(_42if_labels_54392);
    DeRef(_labels_57238);
    _labels_57238 = _42if_labels_54392;
    goto L2; // [22] 35
L1: 

    /** parser.e:1952			labels = loop_labels*/
    RefDS(_42loop_labels_54391);
    DeRef(_labels_57238);
    _labels_57238 = _42loop_labels_54391;
L2: 

    /** parser.e:1954		num_labels = length(labels)*/
    if (IS_SEQUENCE(_labels_57238)){
            _num_labels_57236 = SEQ_PTR(_labels_57238)->length;
    }
    else {
        _num_labels_57236 = 1;
    }

    /** parser.e:1956		if tok[T_ID] = MINUS then*/
    _2 = (object)SEQ_PTR(_tok_57232);
    _28829 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28829, 10)){
        _28829 = NOVALUE;
        goto L3; // [52] 67
    }
    _28829 = NOVALUE;

    /** parser.e:1957			tok = next_token()*/
    _0 = _tok_57232;
    _tok_57232 = _42next_token();
    DeRef(_0);

    /** parser.e:1958			negative = 1*/
    _negative_57237 = 1;
L3: 

    /** parser.e:1961		if tok[T_ID]=ATOM then*/
    _2 = (object)SEQ_PTR(_tok_57232);
    _28832 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28832, 502)){
        _28832 = NOVALUE;
        goto L4; // [77] 178
    }
    _28832 = NOVALUE;

    /** parser.e:1962			arg = SymTab[tok[T_SYM]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_tok_57232);
    _28834 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28834)){
        _28835 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28834)->dbl));
    }
    else{
        _28835 = (object)*(((s1_ptr)_2)->base + _28834);
    }
    DeRef(_arg_57234);
    _2 = (object)SEQ_PTR(_28835);
    _arg_57234 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_arg_57234);
    _28835 = NOVALUE;

    /** parser.e:1963			n = floor(arg)*/
    if (IS_ATOM_INT(_arg_57234))
    _n_57235 = e_floor(_arg_57234);
    else
    _n_57235 = unary_op(FLOOR, _arg_57234);
    if (!IS_ATOM_INT(_n_57235)) {
        _1 = (object)(DBL_PTR(_n_57235)->dbl);
        DeRefDS(_n_57235);
        _n_57235 = _1;
    }

    /** parser.e:1964			if negative then*/
    if (_negative_57237 == 0)
    {
        goto L5; // [110] 122
    }
    else{
    }

    /** parser.e:1965				n = num_labels - n*/
    _n_57235 = _num_labels_57236 - _n_57235;
    goto L6; // [119] 135
L5: 

    /** parser.e:1966			elsif n = 0 then*/
    if (_n_57235 != 0)
    goto L7; // [124] 134

    /** parser.e:1967				n = num_labels*/
    _n_57235 = _num_labels_57236;
L7: 
L6: 

    /** parser.e:1969			if n<=0 or n>num_labels then*/
    _28840 = (_n_57235 <= 0);
    if (_28840 != 0) {
        goto L8; // [141] 154
    }
    _28842 = (_n_57235 > _num_labels_57236);
    if (_28842 == 0)
    {
        DeRef(_28842);
        _28842 = NOVALUE;
        goto L9; // [150] 162
    }
    else{
        DeRef(_28842);
        _28842 = NOVALUE;
    }
L8: 

    /** parser.e:1970				CompileErr(87)*/
    RefDS(_21928);
    _52CompileErr(87, _21928, 0);
L9: 

    /** parser.e:1972			return {n, next_token()}*/
    _28843 = _42next_token();
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _n_57235;
    ((intptr_t *)_2)[2] = _28843;
    _28844 = MAKE_SEQ(_1);
    _28843 = NOVALUE;
    DeRef(_tok_57232);
    DeRef(_arg_57234);
    DeRef(_labels_57238);
    DeRef(_28840);
    _28840 = NOVALUE;
    _28834 = NOVALUE;
    return _28844;
    goto LA; // [175] 266
L4: 

    /** parser.e:1973		elsif tok[T_ID]=STRING then*/
    _2 = (object)SEQ_PTR(_tok_57232);
    _28845 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28845, 503)){
        _28845 = NOVALUE;
        goto LB; // [188] 255
    }
    _28845 = NOVALUE;

    /** parser.e:1974			n = find(SymTab[tok[T_SYM]][S_OBJ],labels)*/
    _2 = (object)SEQ_PTR(_tok_57232);
    _28847 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28847)){
        _28848 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28847)->dbl));
    }
    else{
        _28848 = (object)*(((s1_ptr)_2)->base + _28847);
    }
    _2 = (object)SEQ_PTR(_28848);
    _28849 = (object)*(((s1_ptr)_2)->base + 1);
    _28848 = NOVALUE;
    _n_57235 = find_from(_28849, _labels_57238, 1);
    _28849 = NOVALUE;

    /** parser.e:1975			if n = 0 then*/
    if (_n_57235 != 0)
    goto LC; // [219] 231

    /** parser.e:1976				CompileErr(152)*/
    RefDS(_21928);
    _52CompileErr(152, _21928, 0);
LC: 

    /** parser.e:1978			return {num_labels + 1 - n, next_token()}*/
    _28853 = _num_labels_57236 + 1;
    if (_28853 > MAXINT){
        _28853 = NewDouble((eudouble)_28853);
    }
    if (IS_ATOM_INT(_28853)) {
        _28854 = _28853 - _n_57235;
        if ((object)((uintptr_t)_28854 +(uintptr_t) HIGH_BITS) >= 0){
            _28854 = NewDouble((eudouble)_28854);
        }
    }
    else {
        _28854 = NewDouble(DBL_PTR(_28853)->dbl - (eudouble)_n_57235);
    }
    DeRef(_28853);
    _28853 = NOVALUE;
    _28855 = _42next_token();
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _28854;
    ((intptr_t *)_2)[2] = _28855;
    _28856 = MAKE_SEQ(_1);
    _28855 = NOVALUE;
    _28854 = NOVALUE;
    DeRef(_tok_57232);
    DeRef(_arg_57234);
    DeRef(_labels_57238);
    DeRef(_28840);
    _28840 = NOVALUE;
    _28847 = NOVALUE;
    _28834 = NOVALUE;
    DeRef(_28844);
    _28844 = NOVALUE;
    return _28856;
    goto LA; // [252] 266
LB: 

    /** parser.e:1980			return {1, tok} -- no parameters*/
    Ref(_tok_57232);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _tok_57232;
    _28857 = MAKE_SEQ(_1);
    DeRef(_tok_57232);
    DeRef(_arg_57234);
    DeRef(_labels_57238);
    DeRef(_28840);
    _28840 = NOVALUE;
    _28847 = NOVALUE;
    DeRef(_28856);
    _28856 = NOVALUE;
    _28834 = NOVALUE;
    DeRef(_28844);
    _28844 = NOVALUE;
    return _28857;
LA: 
    ;
}


void _42GLabel_statement()
{
    object _tok_57296 = NOVALUE;
    object _labbel_57297 = NOVALUE;
    object _laddr_57298 = NOVALUE;
    object _n_57299 = NOVALUE;
    object _28876 = NOVALUE;
    object _28874 = NOVALUE;
    object _28873 = NOVALUE;
    object _28872 = NOVALUE;
    object _28871 = NOVALUE;
    object _28869 = NOVALUE;
    object _28866 = NOVALUE;
    object _28864 = NOVALUE;
    object _28862 = NOVALUE;
    object _28861 = NOVALUE;
    object _28859 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:1986		object labbel*/

    /** parser.e:1987		object laddr*/

    /** parser.e:1988		integer n*/

    /** parser.e:1990		tok = next_token()*/
    _0 = _tok_57296;
    _tok_57296 = _42next_token();
    DeRef(_0);

    /** parser.e:1992		if tok[T_ID] != STRING then*/
    _2 = (object)SEQ_PTR(_tok_57296);
    _28859 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _28859, 503)){
        _28859 = NOVALUE;
        goto L1; // [22] 34
    }
    _28859 = NOVALUE;

    /** parser.e:1993			CompileErr(35)*/
    RefDS(_21928);
    _52CompileErr(35, _21928, 0);
L1: 

    /** parser.e:1996		labbel = SymTab[tok[T_SYM]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_tok_57296);
    _28861 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28861)){
        _28862 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28861)->dbl));
    }
    else{
        _28862 = (object)*(((s1_ptr)_2)->base + _28861);
    }
    DeRef(_labbel_57297);
    _2 = (object)SEQ_PTR(_28862);
    _labbel_57297 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_labbel_57297);
    _28862 = NOVALUE;

    /** parser.e:1997		laddr = length(Code) + 1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28864 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28864 = 1;
    }
    _laddr_57298 = _28864 + 1;
    _28864 = NOVALUE;

    /** parser.e:1999		if find(labbel, goto_labels) then*/
    _28866 = find_from(_labbel_57297, _42goto_labels_54374, 1);
    if (_28866 == 0)
    {
        _28866 = NOVALUE;
        goto L2; // [74] 85
    }
    else{
        _28866 = NOVALUE;
    }

    /** parser.e:2000			CompileErr(59)*/
    RefDS(_21928);
    _52CompileErr(59, _21928, 0);
L2: 

    /** parser.e:2003		goto_labels = append(goto_labels, labbel)*/
    Ref(_labbel_57297);
    Append(&_42goto_labels_54374, _42goto_labels_54374, _labbel_57297);

    /** parser.e:2004		goto_addr = append(goto_addr, laddr)*/
    Append(&_42goto_addr_54375, _42goto_addr_54375, _laddr_57298);

    /** parser.e:2005		label_block = append( label_block, top_block() )*/
    _28869 = _66top_block(0);
    Ref(_28869);
    Append(&_42label_block_54378, _42label_block_54378, _28869);
    DeRef(_28869);
    _28869 = NOVALUE;

    /** parser.e:2007		while n with entry do*/
    goto L3; // [115] 174
L4: 
    if (_n_57299 == 0)
    {
        goto L5; // [120] 188
    }
    else{
    }

    /** parser.e:2008			backpatch(goto_list[n], laddr)*/
    _2 = (object)SEQ_PTR(_39goto_list_16926);
    _28871 = (object)*(((s1_ptr)_2)->base + _n_57299);
    Ref(_28871);
    _49backpatch(_28871, _laddr_57298);
    _28871 = NOVALUE;

    /** parser.e:2009			set_glabel_block( goto_ref[n], top_block() )*/
    _2 = (object)SEQ_PTR(_42goto_ref_54377);
    _28872 = (object)*(((s1_ptr)_2)->base + _n_57299);
    _28873 = _66top_block(0);
    Ref(_28872);
    _41set_glabel_block(_28872, _28873);
    _28872 = NOVALUE;
    _28873 = NOVALUE;

    /** parser.e:2010			goto_delay[n] = "" --clear it*/
    RefDS(_21928);
    _2 = (object)SEQ_PTR(_39goto_delay_16925);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39goto_delay_16925 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _n_57299);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);

    /** parser.e:2011			goto_line[n] = {-1,""} --clear it*/
    RefDS(_21928);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _21928;
    _28874 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_42goto_line_54373);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42goto_line_54373 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _n_57299);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28874;
    if( _1 != _28874 ){
        DeRef(_1);
    }
    _28874 = NOVALUE;

    /** parser.e:2013		entry*/
L3: 

    /** parser.e:2014			n = find(labbel, goto_delay)*/
    _n_57299 = find_from(_labbel_57297, _39goto_delay_16925, 1);

    /** parser.e:2015		end while*/
    goto L4; // [185] 118
L5: 

    /** parser.e:2017		force_uninitialize( map:get( goto_init, labbel, {} ) )*/
    Ref(_42goto_init_54380);
    Ref(_labbel_57297);
    RefDS(_21928);
    _28876 = _30get(_42goto_init_54380, _labbel_57297, _21928);
    _42force_uninitialize(_28876);
    _28876 = NOVALUE;

    /** parser.e:2019		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [205] 221
    }
    else{
    }

    /** parser.e:2020			emit_op(GLABEL)*/
    _49emit_op(189);

    /** parser.e:2021			emit_addr(laddr)*/
    _49emit_addr(_laddr_57298);
L6: 

    /** parser.e:2023	end procedure*/
    DeRef(_tok_57296);
    DeRef(_labbel_57297);
    _28861 = NOVALUE;
    return;
    ;
}


void _42Goto_statement()
{
    object _tok_57346 = NOVALUE;
    object _n_57347 = NOVALUE;
    object _num_labels_57348 = NOVALUE;
    object _31679 = NOVALUE;
    object _28915 = NOVALUE;
    object _28914 = NOVALUE;
    object _28911 = NOVALUE;
    object _28910 = NOVALUE;
    object _28909 = NOVALUE;
    object _28908 = NOVALUE;
    object _28907 = NOVALUE;
    object _28906 = NOVALUE;
    object _28905 = NOVALUE;
    object _28904 = NOVALUE;
    object _28903 = NOVALUE;
    object _28902 = NOVALUE;
    object _28901 = NOVALUE;
    object _28900 = NOVALUE;
    object _28898 = NOVALUE;
    object _28897 = NOVALUE;
    object _28895 = NOVALUE;
    object _28894 = NOVALUE;
    object _28892 = NOVALUE;
    object _28891 = NOVALUE;
    object _28889 = NOVALUE;
    object _28888 = NOVALUE;
    object _28887 = NOVALUE;
    object _28886 = NOVALUE;
    object _28883 = NOVALUE;
    object _28882 = NOVALUE;
    object _28881 = NOVALUE;
    object _28879 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2028		integer n*/

    /** parser.e:2029		integer num_labels*/

    /** parser.e:2031		tok = next_token()*/
    _0 = _tok_57346;
    _tok_57346 = _42next_token();
    DeRef(_0);

    /** parser.e:2032		num_labels = length(goto_labels)*/
    if (IS_SEQUENCE(_42goto_labels_54374)){
            _num_labels_57348 = SEQ_PTR(_42goto_labels_54374)->length;
    }
    else {
        _num_labels_57348 = 1;
    }

    /** parser.e:2034		if tok[T_ID]=STRING then*/
    _2 = (object)SEQ_PTR(_tok_57346);
    _28879 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28879, 503)){
        _28879 = NOVALUE;
        goto L1; // [27] 267
    }
    _28879 = NOVALUE;

    /** parser.e:2035			n = find(SymTab[tok[T_SYM]][S_OBJ],goto_labels)*/
    _2 = (object)SEQ_PTR(_tok_57346);
    _28881 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28881)){
        _28882 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28881)->dbl));
    }
    else{
        _28882 = (object)*(((s1_ptr)_2)->base + _28881);
    }
    _2 = (object)SEQ_PTR(_28882);
    _28883 = (object)*(((s1_ptr)_2)->base + 1);
    _28882 = NOVALUE;
    _n_57347 = find_from(_28883, _42goto_labels_54374, 1);
    _28883 = NOVALUE;

    /** parser.e:2036			if n = 0 then*/
    if (_n_57347 != 0)
    goto L2; // [60] 241

    /** parser.e:2037				goto_delay &= {SymTab[tok[T_SYM]][S_OBJ]}*/
    _2 = (object)SEQ_PTR(_tok_57346);
    _28886 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28886)){
        _28887 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28886)->dbl));
    }
    else{
        _28887 = (object)*(((s1_ptr)_2)->base + _28886);
    }
    _2 = (object)SEQ_PTR(_28887);
    _28888 = (object)*(((s1_ptr)_2)->base + 1);
    _28887 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_28888);
    ((intptr_t*)_2)[1] = _28888;
    _28889 = MAKE_SEQ(_1);
    _28888 = NOVALUE;
    Concat((object_ptr)&_39goto_delay_16925, _39goto_delay_16925, _28889);
    DeRefDS(_28889);
    _28889 = NOVALUE;

    /** parser.e:2038				goto_list &= length(Code)+2 --not 1???*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28891 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28891 = 1;
    }
    _28892 = _28891 + 2;
    _28891 = NOVALUE;
    Append(&_39goto_list_16926, _39goto_list_16926, _28892);
    _28892 = NOVALUE;

    /** parser.e:2039				goto_line &= {{line_number,ThisLine}}*/
    Ref(_52ThisLine_48710);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _39line_number_16816;
    ((intptr_t *)_2)[2] = _52ThisLine_48710;
    _28894 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _28894;
    _28895 = MAKE_SEQ(_1);
    _28894 = NOVALUE;
    Concat((object_ptr)&_42goto_line_54373, _42goto_line_54373, _28895);
    DeRefDS(_28895);
    _28895 = NOVALUE;

    /** parser.e:2040				goto_ref &= new_forward_reference( GOTO, top_block() )*/
    _28897 = _66top_block(0);
    _31679 = 188;
    _28898 = _41new_forward_reference(188, _28897, 188);
    _28897 = NOVALUE;
    _31679 = NOVALUE;
    if (IS_SEQUENCE(_42goto_ref_54377) && IS_ATOM(_28898)) {
        Ref(_28898);
        Append(&_42goto_ref_54377, _42goto_ref_54377, _28898);
    }
    else if (IS_ATOM(_42goto_ref_54377) && IS_SEQUENCE(_28898)) {
    }
    else {
        Concat((object_ptr)&_42goto_ref_54377, _42goto_ref_54377, _28898);
    }
    DeRef(_28898);
    _28898 = NOVALUE;

    /** parser.e:2041				map:put( goto_init, SymTab[tok[T_SYM]][S_OBJ], get_private_uninitialized() )*/
    _2 = (object)SEQ_PTR(_tok_57346);
    _28900 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_28900)){
        _28901 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28900)->dbl));
    }
    else{
        _28901 = (object)*(((s1_ptr)_2)->base + _28900);
    }
    _2 = (object)SEQ_PTR(_28901);
    _28902 = (object)*(((s1_ptr)_2)->base + 1);
    _28901 = NOVALUE;
    _28903 = _42get_private_uninitialized();
    Ref(_42goto_init_54380);
    Ref(_28902);
    _30put(_42goto_init_54380, _28902, _28903, 1, 0);
    _28902 = NOVALUE;
    _28903 = NOVALUE;

    /** parser.e:2042				add_data( goto_ref[$], sym_obj( tok[T_SYM] ) )*/
    if (IS_SEQUENCE(_42goto_ref_54377)){
            _28904 = SEQ_PTR(_42goto_ref_54377)->length;
    }
    else {
        _28904 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_ref_54377);
    _28905 = (object)*(((s1_ptr)_2)->base + _28904);
    _2 = (object)SEQ_PTR(_tok_57346);
    _28906 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_28906);
    _28907 = _56sym_obj(_28906);
    _28906 = NOVALUE;
    Ref(_28905);
    _41add_data(_28905, _28907);
    _28905 = NOVALUE;
    _28907 = NOVALUE;

    /** parser.e:2043				set_line( goto_ref[$], line_number, ThisLine, bp )*/
    if (IS_SEQUENCE(_42goto_ref_54377)){
            _28908 = SEQ_PTR(_42goto_ref_54377)->length;
    }
    else {
        _28908 = 1;
    }
    _2 = (object)SEQ_PTR(_42goto_ref_54377);
    _28909 = (object)*(((s1_ptr)_2)->base + _28908);
    Ref(_28909);
    Ref(_52ThisLine_48710);
    _41set_line(_28909, _39line_number_16816, _52ThisLine_48710, _52bp_48714);
    _28909 = NOVALUE;
    goto L3; // [238] 259
L2: 

    /** parser.e:2045				Goto_block( top_block(), label_block[n] )*/
    _28910 = _66top_block(0);
    _2 = (object)SEQ_PTR(_42label_block_54378);
    _28911 = (object)*(((s1_ptr)_2)->base + _n_57347);
    Ref(_28911);
    _66Goto_block(_28910, _28911, 0);
    _28910 = NOVALUE;
    _28911 = NOVALUE;
L3: 

    /** parser.e:2047			tok = next_token()*/
    _0 = _tok_57346;
    _tok_57346 = _42next_token();
    DeRef(_0);
    goto L4; // [264] 275
L1: 

    /** parser.e:2049			CompileErr(96)*/
    RefDS(_21928);
    _52CompileErr(96, _21928, 0);
L4: 

    /** parser.e:2052		emit_op(GOTO)*/
    _49emit_op(188);

    /** parser.e:2053		if n = 0 then*/
    if (_n_57347 != 0)
    goto L5; // [286] 298

    /** parser.e:2054			emit_addr(0) -- to be back-patched*/
    _49emit_addr(0);
    goto L6; // [295] 310
L5: 

    /** parser.e:2056			emit_addr(goto_addr[n])*/
    _2 = (object)SEQ_PTR(_42goto_addr_54375);
    _28914 = (object)*(((s1_ptr)_2)->base + _n_57347);
    Ref(_28914);
    _49emit_addr(_28914);
    _28914 = NOVALUE;
L6: 

    /** parser.e:2059		putback(tok)*/
    Ref(_tok_57346);
    _42putback(_tok_57346);

    /** parser.e:2060		NotReached(tok[T_ID], "goto")*/
    _2 = (object)SEQ_PTR(_tok_57346);
    _28915 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28915);
    RefDS(_26129);
    _42NotReached(_28915, _26129);
    _28915 = NOVALUE;

    /** parser.e:2061	end procedure*/
    DeRef(_tok_57346);
    _28881 = NOVALUE;
    _28900 = NOVALUE;
    _28886 = NOVALUE;
    return;
    ;
}


void _42Exit_statement()
{
    object _addr_inlined_AppendXList_at_63_57449 = NOVALUE;
    object _tok_57432 = NOVALUE;
    object _by_ref_57433 = NOVALUE;
    object _28923 = NOVALUE;
    object _28922 = NOVALUE;
    object _28921 = NOVALUE;
    object _28920 = NOVALUE;
    object _28918 = NOVALUE;
    object _28916 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2066		sequence by_ref*/

    /** parser.e:2068		if not length(loop_stack) then*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _28916 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _28916 = 1;
    }
    if (_28916 != 0)
    goto L1; // [10] 21
    _28916 = NOVALUE;

    /** parser.e:2069			CompileErr(88)*/
    RefDS(_21928);
    _52CompileErr(88, _21928, 0);
L1: 

    /** parser.e:2072		by_ref = exit_level(next_token(),0) -- can't pass tok by reference*/
    _28918 = _42next_token();
    _0 = _by_ref_57433;
    _by_ref_57433 = _42exit_level(_28918, 0);
    DeRef(_0);
    _28918 = NOVALUE;

    /** parser.e:2073		Leave_blocks( by_ref[1], LOOP_BLOCK )*/
    _2 = (object)SEQ_PTR(_by_ref_57433);
    _28920 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28920);
    _66Leave_blocks(_28920, 1);
    _28920 = NOVALUE;

    /** parser.e:2074		emit_op(EXIT)*/
    _49emit_op(61);

    /** parser.e:2075		AppendXList(length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28921 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28921 = 1;
    }
    _28922 = _28921 + 1;
    _28921 = NOVALUE;
    _addr_inlined_AppendXList_at_63_57449 = _28922;
    _28922 = NOVALUE;

    /** parser.e:398		exit_list = append(exit_list, addr)*/
    Append(&_42exit_list_54383, _42exit_list_54383, _addr_inlined_AppendXList_at_63_57449);

    /** parser.e:399	end procedure*/
    goto L2; // [78] 81
L2: 

    /** parser.e:2076		exit_delay &= by_ref[1]*/
    _2 = (object)SEQ_PTR(_by_ref_57433);
    _28923 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_42exit_delay_54384) && IS_ATOM(_28923)) {
        Ref(_28923);
        Append(&_42exit_delay_54384, _42exit_delay_54384, _28923);
    }
    else if (IS_ATOM(_42exit_delay_54384) && IS_SEQUENCE(_28923)) {
    }
    else {
        Concat((object_ptr)&_42exit_delay_54384, _42exit_delay_54384, _28923);
    }
    _28923 = NOVALUE;

    /** parser.e:2077		emit_forward_addr()    -- to be back-patched*/
    _42emit_forward_addr();

    /** parser.e:2078		tok = by_ref[2]*/
    DeRef(_tok_57432);
    _2 = (object)SEQ_PTR(_by_ref_57433);
    _tok_57432 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tok_57432);

    /** parser.e:2079		putback(tok)*/
    Ref(_tok_57432);
    _42putback(_tok_57432);

    /** parser.e:2080	end procedure*/
    DeRef(_tok_57432);
    DeRefDS(_by_ref_57433);
    return;
    ;
}


void _42Continue_statement()
{
    object _addr_inlined_AppendNList_at_149_57493 = NOVALUE;
    object _tok_57456 = NOVALUE;
    object _by_ref_57457 = NOVALUE;
    object _loop_level_57458 = NOVALUE;
    object _28949 = NOVALUE;
    object _28946 = NOVALUE;
    object _28945 = NOVALUE;
    object _28944 = NOVALUE;
    object _28943 = NOVALUE;
    object _28942 = NOVALUE;
    object _28941 = NOVALUE;
    object _28939 = NOVALUE;
    object _28938 = NOVALUE;
    object _28937 = NOVALUE;
    object _28936 = NOVALUE;
    object _28935 = NOVALUE;
    object _28934 = NOVALUE;
    object _28933 = NOVALUE;
    object _28932 = NOVALUE;
    object _28930 = NOVALUE;
    object _28928 = NOVALUE;
    object _28926 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2085		sequence by_ref*/

    /** parser.e:2086		integer loop_level*/

    /** parser.e:2088		if not length(loop_stack) then*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _28926 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _28926 = 1;
    }
    if (_28926 != 0)
    goto L1; // [12] 23
    _28926 = NOVALUE;

    /** parser.e:2089			CompileErr(49)*/
    RefDS(_21928);
    _52CompileErr(49, _21928, 0);
L1: 

    /** parser.e:2092		by_ref = exit_level(next_token(),0) -- can't pass tok by reference*/
    _28928 = _42next_token();
    _0 = _by_ref_57457;
    _by_ref_57457 = _42exit_level(_28928, 0);
    DeRef(_0);
    _28928 = NOVALUE;

    /** parser.e:2093		Leave_blocks( by_ref[1], LOOP_BLOCK )*/
    _2 = (object)SEQ_PTR(_by_ref_57457);
    _28930 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28930);
    _66Leave_blocks(_28930, 1);
    _28930 = NOVALUE;

    /** parser.e:2094		emit_op(ELSE)*/
    _49emit_op(23);

    /** parser.e:2095		loop_level = by_ref[1]*/
    _2 = (object)SEQ_PTR(_by_ref_57457);
    _loop_level_57458 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_loop_level_57458))
    _loop_level_57458 = (object)DBL_PTR(_loop_level_57458)->dbl;

    /** parser.e:2098		if continue_addr[$+1-loop_level] then -- address is known for while loops*/
    if (IS_SEQUENCE(_42continue_addr_54388)){
            _28932 = SEQ_PTR(_42continue_addr_54388)->length;
    }
    else {
        _28932 = 1;
    }
    _28933 = _28932 + 1;
    _28932 = NOVALUE;
    _28934 = _28933 - _loop_level_57458;
    _28933 = NOVALUE;
    _2 = (object)SEQ_PTR(_42continue_addr_54388);
    _28935 = (object)*(((s1_ptr)_2)->base + _28934);
    if (_28935 == 0)
    {
        _28935 = NOVALUE;
        goto L2; // [79] 138
    }
    else{
        _28935 = NOVALUE;
    }

    /** parser.e:2099			if continue_addr[$+1-loop_level] < 0 then*/
    if (IS_SEQUENCE(_42continue_addr_54388)){
            _28936 = SEQ_PTR(_42continue_addr_54388)->length;
    }
    else {
        _28936 = 1;
    }
    _28937 = _28936 + 1;
    _28936 = NOVALUE;
    _28938 = _28937 - _loop_level_57458;
    _28937 = NOVALUE;
    _2 = (object)SEQ_PTR(_42continue_addr_54388);
    _28939 = (object)*(((s1_ptr)_2)->base + _28938);
    if (_28939 >= 0)
    goto L3; // [101] 113

    /** parser.e:2101				CompileErr(49)*/
    RefDS(_21928);
    _52CompileErr(49, _21928, 0);
L3: 

    /** parser.e:2103			emit_addr(continue_addr[$+1-loop_level])*/
    if (IS_SEQUENCE(_42continue_addr_54388)){
            _28941 = SEQ_PTR(_42continue_addr_54388)->length;
    }
    else {
        _28941 = 1;
    }
    _28942 = _28941 + 1;
    _28941 = NOVALUE;
    _28943 = _28942 - _loop_level_57458;
    _28942 = NOVALUE;
    _2 = (object)SEQ_PTR(_42continue_addr_54388);
    _28944 = (object)*(((s1_ptr)_2)->base + _28943);
    _49emit_addr(_28944);
    _28944 = NOVALUE;
    goto L4; // [135] 182
L2: 

    /** parser.e:2105			AppendNList(length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28945 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28945 = 1;
    }
    _28946 = _28945 + 1;
    _28945 = NOVALUE;
    _addr_inlined_AppendNList_at_149_57493 = _28946;
    _28946 = NOVALUE;

    /** parser.e:403		continue_list = append(continue_list, addr)*/
    Append(&_42continue_list_54385, _42continue_list_54385, _addr_inlined_AppendNList_at_149_57493);

    /** parser.e:404	end procedure*/
    goto L5; // [164] 167
L5: 

    /** parser.e:2106			continue_delay &= loop_level*/
    Append(&_42continue_delay_54386, _42continue_delay_54386, _loop_level_57458);

    /** parser.e:2107			emit_forward_addr()    -- to be back-patched*/
    _42emit_forward_addr();
L4: 

    /** parser.e:2110		tok = by_ref[2]*/
    DeRef(_tok_57456);
    _2 = (object)SEQ_PTR(_by_ref_57457);
    _tok_57456 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tok_57456);

    /** parser.e:2111		putback(tok)*/
    Ref(_tok_57456);
    _42putback(_tok_57456);

    /** parser.e:2113		NotReached(tok[T_ID], "continue")*/
    _2 = (object)SEQ_PTR(_tok_57456);
    _28949 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28949);
    RefDS(_26091);
    _42NotReached(_28949, _26091);
    _28949 = NOVALUE;

    /** parser.e:2114	end procedure*/
    DeRef(_tok_57456);
    DeRefDS(_by_ref_57457);
    DeRef(_28934);
    _28934 = NOVALUE;
    _28939 = NOVALUE;
    DeRef(_28943);
    _28943 = NOVALUE;
    DeRef(_28938);
    _28938 = NOVALUE;
    return;
    ;
}


void _42Retry_statement()
{
    object _by_ref_57500 = NOVALUE;
    object _tok_57502 = NOVALUE;
    object _28973 = NOVALUE;
    object _28971 = NOVALUE;
    object _28970 = NOVALUE;
    object _28969 = NOVALUE;
    object _28968 = NOVALUE;
    object _28967 = NOVALUE;
    object _28965 = NOVALUE;
    object _28964 = NOVALUE;
    object _28963 = NOVALUE;
    object _28962 = NOVALUE;
    object _28961 = NOVALUE;
    object _28959 = NOVALUE;
    object _28958 = NOVALUE;
    object _28957 = NOVALUE;
    object _28956 = NOVALUE;
    object _28955 = NOVALUE;
    object _28954 = NOVALUE;
    object _28952 = NOVALUE;
    object _28950 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2122		if not length(loop_stack) then*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _28950 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _28950 = 1;
    }
    if (_28950 != 0)
    goto L1; // [8] 19
    _28950 = NOVALUE;

    /** parser.e:2123			CompileErr(131)*/
    RefDS(_21928);
    _52CompileErr(131, _21928, 0);
L1: 

    /** parser.e:2126		by_ref = exit_level(next_token(),0) -- can't pass tok by reference*/
    _28952 = _42next_token();
    _0 = _by_ref_57500;
    _by_ref_57500 = _42exit_level(_28952, 0);
    DeRef(_0);
    _28952 = NOVALUE;

    /** parser.e:2127		Leave_blocks( by_ref[1], LOOP_BLOCK )*/
    _2 = (object)SEQ_PTR(_by_ref_57500);
    _28954 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28954);
    _66Leave_blocks(_28954, 1);
    _28954 = NOVALUE;

    /** parser.e:2128		if loop_stack[$+1-by_ref[1]]=FOR then*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _28955 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _28955 = 1;
    }
    _28956 = _28955 + 1;
    _28955 = NOVALUE;
    _2 = (object)SEQ_PTR(_by_ref_57500);
    _28957 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28957)) {
        _28958 = _28956 - _28957;
    }
    else {
        _28958 = binary_op(MINUS, _28956, _28957);
    }
    _28956 = NOVALUE;
    _28957 = NOVALUE;
    _2 = (object)SEQ_PTR(_42loop_stack_54397);
    if (!IS_ATOM_INT(_28958)){
        _28959 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28958)->dbl));
    }
    else{
        _28959 = (object)*(((s1_ptr)_2)->base + _28958);
    }
    if (_28959 != 21)
    goto L2; // [68] 82

    /** parser.e:2129			emit_op(RETRY) -- for Translator to emit a label at the right place*/
    _49emit_op(184);
    goto L3; // [79] 125
L2: 

    /** parser.e:2131			if retry_addr[$+1-by_ref[1]] < 0 then*/
    if (IS_SEQUENCE(_42retry_addr_54389)){
            _28961 = SEQ_PTR(_42retry_addr_54389)->length;
    }
    else {
        _28961 = 1;
    }
    _28962 = _28961 + 1;
    _28961 = NOVALUE;
    _2 = (object)SEQ_PTR(_by_ref_57500);
    _28963 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28963)) {
        _28964 = _28962 - _28963;
    }
    else {
        _28964 = binary_op(MINUS, _28962, _28963);
    }
    _28962 = NOVALUE;
    _28963 = NOVALUE;
    _2 = (object)SEQ_PTR(_42retry_addr_54389);
    if (!IS_ATOM_INT(_28964)){
        _28965 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28964)->dbl));
    }
    else{
        _28965 = (object)*(((s1_ptr)_2)->base + _28964);
    }
    if (_28965 >= 0)
    goto L4; // [105] 117

    /** parser.e:2133				CompileErr(131)*/
    RefDS(_21928);
    _52CompileErr(131, _21928, 0);
L4: 

    /** parser.e:2135			emit_op(ELSE)*/
    _49emit_op(23);
L3: 

    /** parser.e:2138		emit_addr(retry_addr[$+1-by_ref[1]])*/
    if (IS_SEQUENCE(_42retry_addr_54389)){
            _28967 = SEQ_PTR(_42retry_addr_54389)->length;
    }
    else {
        _28967 = 1;
    }
    _28968 = _28967 + 1;
    _28967 = NOVALUE;
    _2 = (object)SEQ_PTR(_by_ref_57500);
    _28969 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_28969)) {
        _28970 = _28968 - _28969;
    }
    else {
        _28970 = binary_op(MINUS, _28968, _28969);
    }
    _28968 = NOVALUE;
    _28969 = NOVALUE;
    _2 = (object)SEQ_PTR(_42retry_addr_54389);
    if (!IS_ATOM_INT(_28970)){
        _28971 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_28970)->dbl));
    }
    else{
        _28971 = (object)*(((s1_ptr)_2)->base + _28970);
    }
    _49emit_addr(_28971);
    _28971 = NOVALUE;

    /** parser.e:2139		tok = by_ref[2]*/
    DeRef(_tok_57502);
    _2 = (object)SEQ_PTR(_by_ref_57500);
    _tok_57502 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tok_57502);

    /** parser.e:2140		putback(tok)*/
    Ref(_tok_57502);
    _42putback(_tok_57502);

    /** parser.e:2141		NotReached(tok[T_ID], "retry")*/
    _2 = (object)SEQ_PTR(_tok_57502);
    _28973 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28973);
    RefDS(_26185);
    _42NotReached(_28973, _26185);
    _28973 = NOVALUE;

    /** parser.e:2142	end procedure*/
    DeRefDS(_by_ref_57500);
    DeRef(_tok_57502);
    _28959 = NOVALUE;
    DeRef(_28958);
    _28958 = NOVALUE;
    _28965 = NOVALUE;
    DeRef(_28964);
    _28964 = NOVALUE;
    DeRef(_28970);
    _28970 = NOVALUE;
    return;
    ;
}


object _42in_switch()
{
    object _28978 = NOVALUE;
    object _28977 = NOVALUE;
    object _28976 = NOVALUE;
    object _28975 = NOVALUE;
    object _28974 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2145		if length( if_stack ) and if_stack[$] = SWITCH then*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _28974 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _28974 = 1;
    }
    if (_28974 == 0) {
        goto L1; // [8] 40
    }
    if (IS_SEQUENCE(_42if_stack_54398)){
            _28976 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _28976 = 1;
    }
    _2 = (object)SEQ_PTR(_42if_stack_54398);
    _28977 = (object)*(((s1_ptr)_2)->base + _28976);
    _28978 = (_28977 == 185);
    _28977 = NOVALUE;
    if (_28978 == 0)
    {
        DeRef(_28978);
        _28978 = NOVALUE;
        goto L1; // [28] 40
    }
    else{
        DeRef(_28978);
        _28978 = NOVALUE;
    }

    /** parser.e:2146			return 1*/
    return 1;
    goto L2; // [37] 47
L1: 

    /** parser.e:2148			return 0*/
    return 0;
L2: 
    ;
}


void _42Break_statement()
{
    object _addr_inlined_AppendEList_at_63_57572 = NOVALUE;
    object _tok_57555 = NOVALUE;
    object _by_ref_57556 = NOVALUE;
    object _28989 = NOVALUE;
    object _28986 = NOVALUE;
    object _28985 = NOVALUE;
    object _28984 = NOVALUE;
    object _28983 = NOVALUE;
    object _28981 = NOVALUE;
    object _28979 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2154		sequence by_ref*/

    /** parser.e:2156		if not length(if_labels) then*/
    if (IS_SEQUENCE(_42if_labels_54392)){
            _28979 = SEQ_PTR(_42if_labels_54392)->length;
    }
    else {
        _28979 = 1;
    }
    if (_28979 != 0)
    goto L1; // [10] 21
    _28979 = NOVALUE;

    /** parser.e:2157			CompileErr(40)*/
    RefDS(_21928);
    _52CompileErr(40, _21928, 0);
L1: 

    /** parser.e:2160		by_ref = exit_level(next_token(),1)*/
    _28981 = _42next_token();
    _0 = _by_ref_57556;
    _by_ref_57556 = _42exit_level(_28981, 1);
    DeRef(_0);
    _28981 = NOVALUE;

    /** parser.e:2161		Leave_blocks( by_ref[1], CONDITIONAL_BLOCK )*/
    _2 = (object)SEQ_PTR(_by_ref_57556);
    _28983 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28983);
    _66Leave_blocks(_28983, 2);
    _28983 = NOVALUE;

    /** parser.e:2162		emit_op(ELSE)*/
    _49emit_op(23);

    /** parser.e:2163		AppendEList(length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _28984 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _28984 = 1;
    }
    _28985 = _28984 + 1;
    _28984 = NOVALUE;
    _addr_inlined_AppendEList_at_63_57572 = _28985;
    _28985 = NOVALUE;

    /** parser.e:393		break_list = append(break_list, addr)*/
    Append(&_42break_list_54381, _42break_list_54381, _addr_inlined_AppendEList_at_63_57572);

    /** parser.e:394	end procedure*/
    goto L2; // [78] 81
L2: 

    /** parser.e:2165		break_delay &= by_ref[1]*/
    _2 = (object)SEQ_PTR(_by_ref_57556);
    _28986 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_42break_delay_54382) && IS_ATOM(_28986)) {
        Ref(_28986);
        Append(&_42break_delay_54382, _42break_delay_54382, _28986);
    }
    else if (IS_ATOM(_42break_delay_54382) && IS_SEQUENCE(_28986)) {
    }
    else {
        Concat((object_ptr)&_42break_delay_54382, _42break_delay_54382, _28986);
    }
    _28986 = NOVALUE;

    /** parser.e:2166		emit_forward_addr()    -- to be back-patched*/
    _42emit_forward_addr();

    /** parser.e:2167		tok = by_ref[2]*/
    DeRef(_tok_57555);
    _2 = (object)SEQ_PTR(_by_ref_57556);
    _tok_57555 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tok_57555);

    /** parser.e:2168		putback(tok)*/
    Ref(_tok_57555);
    _42putback(_tok_57555);

    /** parser.e:2169		NotReached(tok[T_ID], "break")*/
    _2 = (object)SEQ_PTR(_tok_57555);
    _28989 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_28989);
    RefDS(_26075);
    _42NotReached(_28989, _26075);
    _28989 = NOVALUE;

    /** parser.e:2170	end procedure*/
    DeRef(_tok_57555);
    DeRefDS(_by_ref_57556);
    return;
    ;
}


object _42finish_block_header(object _opcode_57581)
{
    object _tok_57583 = NOVALUE;
    object _labbel_57584 = NOVALUE;
    object _has_entry_57585 = NOVALUE;
    object _29043 = NOVALUE;
    object _29042 = NOVALUE;
    object _29041 = NOVALUE;
    object _29040 = NOVALUE;
    object _29037 = NOVALUE;
    object _29032 = NOVALUE;
    object _29029 = NOVALUE;
    object _29027 = NOVALUE;
    object _29024 = NOVALUE;
    object _29023 = NOVALUE;
    object _29021 = NOVALUE;
    object _29018 = NOVALUE;
    object _29015 = NOVALUE;
    object _29014 = NOVALUE;
    object _29012 = NOVALUE;
    object _29010 = NOVALUE;
    object _29007 = NOVALUE;
    object _29004 = NOVALUE;
    object _29003 = NOVALUE;
    object _29001 = NOVALUE;
    object _28999 = NOVALUE;
    object _28998 = NOVALUE;
    object _28997 = NOVALUE;
    object _28994 = NOVALUE;
    object _28991 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2176		object labbel*/

    /** parser.e:2177		integer has_entry*/

    /** parser.e:2179		tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);

    /** parser.e:2180		has_entry=0*/
    _has_entry_57585 = 0;

    /** parser.e:2182		if tok[T_ID] = WITH then*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _28991 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _28991, 420)){
        _28991 = NOVALUE;
        goto L1; // [27] 154
    }
    _28991 = NOVALUE;

    /** parser.e:2183			tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);

    /** parser.e:2184			switch tok[T_ID] do*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _28994 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_28994) ){
        goto L2; // [44] 136
    }
    if(!IS_ATOM_INT(_28994)){
        if( (DBL_PTR(_28994)->dbl != (eudouble) ((object) DBL_PTR(_28994)->dbl) ) ){
            goto L2; // [44] 136
        }
        _0 = (object) DBL_PTR(_28994)->dbl;
    }
    else {
        _0 = _28994;
    };
    _28994 = NOVALUE;
    switch ( _0 ){ 

        /** parser.e:2185			    case ENTRY then*/
        case 424:

        /** parser.e:2186					if not (opcode = WHILE or opcode = LOOP) then*/
        _28997 = (_opcode_57581 == 47);
        if (_28997 != 0) {
            DeRef(_28998);
            _28998 = 1;
            goto L3; // [61] 75
        }
        _28999 = (_opcode_57581 == 422);
        _28998 = (_28999 != 0);
L3: 
        if (_28998 != 0)
        goto L4; // [75] 86
        _28998 = NOVALUE;

        /** parser.e:2187						CompileErr(14)*/
        RefDS(_21928);
        _52CompileErr(14, _21928, 0);
L4: 

        /** parser.e:2190				    has_entry = 1*/
        _has_entry_57585 = 1;
        goto L5; // [91] 146

        /** parser.e:2192				case FALLTHRU then*/
        case 431:

        /** parser.e:2193					if not opcode = SWITCH then*/
        _29001 = (_opcode_57581 == 0);
        if (_29001 != 185)
        goto L6; // [104] 116

        /** parser.e:2194						CompileErr(13)*/
        RefDS(_21928);
        _52CompileErr(13, _21928, 0);
L6: 

        /** parser.e:2197					switch_stack[$][SWITCH_FALLTHRU] = 1*/
        if (IS_SEQUENCE(_42switch_stack_54612)){
                _29003 = SEQ_PTR(_42switch_stack_54612)->length;
        }
        else {
            _29003 = 1;
        }
        _2 = (object)SEQ_PTR(_42switch_stack_54612);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _42switch_stack_54612 = MAKE_SEQ(_2);
        }
        _3 = (object)(_29003 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 1;
        DeRef(_1);
        _29004 = NOVALUE;
        goto L5; // [132] 146

        /** parser.e:2199				case else*/
        default:
L2: 

        /** parser.e:2200				    CompileErr(27)*/
        RefDS(_21928);
        _52CompileErr(27, _21928, 0);
    ;}L5: 

    /** parser.e:2203	        tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);
    goto L7; // [151] 240
L1: 

    /** parser.e:2204		elsif tok[T_ID] = WITHOUT then*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _29007 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29007, 421)){
        _29007 = NOVALUE;
        goto L8; // [164] 239
    }
    _29007 = NOVALUE;

    /** parser.e:2205			tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);

    /** parser.e:2206			if tok[T_ID] = FALLTHRU then*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _29010 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29010, 431)){
        _29010 = NOVALUE;
        goto L9; // [183] 225
    }
    _29010 = NOVALUE;

    /** parser.e:2207				if not opcode = SWITCH then*/
    _29012 = (_opcode_57581 == 0);
    if (_29012 != 185)
    goto LA; // [194] 206

    /** parser.e:2208					CompileErr(15)*/
    RefDS(_21928);
    _52CompileErr(15, _21928, 0);
LA: 

    /** parser.e:2211				switch_stack[$][SWITCH_FALLTHRU] = 0*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29014 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29014 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29014 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _29015 = NOVALUE;
    goto LB; // [222] 233
L9: 

    /** parser.e:2214				CompileErr(27)*/
    RefDS(_21928);
    _52CompileErr(27, _21928, 0);
LB: 

    /** parser.e:2216	        tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);
L8: 
L7: 

    /** parser.e:2219		labbel=0*/
    DeRef(_labbel_57584);
    _labbel_57584 = 0;

    /** parser.e:2220		if tok[T_ID]=LABEL then*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _29018 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29018, 419)){
        _29018 = NOVALUE;
        goto LC; // [255] 317
    }
    _29018 = NOVALUE;

    /** parser.e:2221			tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);

    /** parser.e:2222			if tok[T_ID] != STRING then*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _29021 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _29021, 503)){
        _29021 = NOVALUE;
        goto LD; // [274] 286
    }
    _29021 = NOVALUE;

    /** parser.e:2223				CompileErr(38)*/
    RefDS(_21928);
    _52CompileErr(38, _21928, 0);
LD: 

    /** parser.e:2225			labbel = SymTab[tok[T_SYM]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _29023 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_29023)){
        _29024 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_29023)->dbl));
    }
    else{
        _29024 = (object)*(((s1_ptr)_2)->base + _29023);
    }
    DeRef(_labbel_57584);
    _2 = (object)SEQ_PTR(_29024);
    _labbel_57584 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_labbel_57584);
    _29024 = NOVALUE;

    /** parser.e:2226			block_label( labbel )*/
    Ref(_labbel_57584);
    _66block_label(_labbel_57584);

    /** parser.e:2227			tok = next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);
LC: 

    /** parser.e:2229		if opcode = IF or opcode = SWITCH then*/
    _29027 = (_opcode_57581 == 20);
    if (_29027 != 0) {
        goto LE; // [325] 340
    }
    _29029 = (_opcode_57581 == 185);
    if (_29029 == 0)
    {
        DeRef(_29029);
        _29029 = NOVALUE;
        goto LF; // [336] 351
    }
    else{
        DeRef(_29029);
        _29029 = NOVALUE;
    }
LE: 

    /** parser.e:2230			if_labels = append(if_labels,labbel)*/
    Ref(_labbel_57584);
    Append(&_42if_labels_54392, _42if_labels_54392, _labbel_57584);
    goto L10; // [348] 360
LF: 

    /** parser.e:2232			loop_labels = append(loop_labels,labbel)*/
    Ref(_labbel_57584);
    Append(&_42loop_labels_54391, _42loop_labels_54391, _labbel_57584);
L10: 

    /** parser.e:2234		if block_index=length(block_list) then*/
    if (IS_SEQUENCE(_42block_list_54393)){
            _29032 = SEQ_PTR(_42block_list_54393)->length;
    }
    else {
        _29032 = 1;
    }
    if (_42block_index_54394 != _29032)
    goto L11; // [369] 392

    /** parser.e:2235		    block_list &= opcode*/
    Append(&_42block_list_54393, _42block_list_54393, _opcode_57581);

    /** parser.e:2236		    block_index += 1*/
    _42block_index_54394 = _42block_index_54394 + 1;
    goto L12; // [389] 411
L11: 

    /** parser.e:2238		    block_index += 1*/
    _42block_index_54394 = _42block_index_54394 + 1;

    /** parser.e:2239		    block_list[block_index] = opcode*/
    _2 = (object)SEQ_PTR(_42block_list_54393);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42block_list_54393 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _42block_index_54394);
    *(intptr_t *)_2 = _opcode_57581;
L12: 

    /** parser.e:2241		if tok[T_ID]=ENTRY then*/
    _2 = (object)SEQ_PTR(_tok_57583);
    _29037 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29037, 424)){
        _29037 = NOVALUE;
        goto L13; // [421] 449
    }
    _29037 = NOVALUE;

    /** parser.e:2242		    if has_entry then*/
    if (_has_entry_57585 == 0)
    {
        goto L14; // [427] 438
    }
    else{
    }

    /** parser.e:2243		        CompileErr(64)*/
    RefDS(_21928);
    _52CompileErr(64, _21928, 0);
L14: 

    /** parser.e:2245		    has_entry=1*/
    _has_entry_57585 = 1;

    /** parser.e:2246		    tok=next_token()*/
    _0 = _tok_57583;
    _tok_57583 = _42next_token();
    DeRef(_0);
L13: 

    /** parser.e:2248		if has_entry and (opcode = IF or opcode = SWITCH) then*/
    if (_has_entry_57585 == 0) {
        goto L15; // [451] 487
    }
    _29041 = (_opcode_57581 == 20);
    if (_29041 != 0) {
        DeRef(_29042);
        _29042 = 1;
        goto L16; // [461] 475
    }
    _29043 = (_opcode_57581 == 185);
    _29042 = (_29043 != 0);
L16: 
    if (_29042 == 0)
    {
        _29042 = NOVALUE;
        goto L15; // [476] 487
    }
    else{
        _29042 = NOVALUE;
    }

    /** parser.e:2249			CompileErr(80)*/
    RefDS(_21928);
    _52CompileErr(80, _21928, 0);
L15: 

    /** parser.e:2251		if opcode = IF then*/
    if (_opcode_57581 != 20)
    goto L17; // [491] 507

    /** parser.e:2252			opcode = THEN*/
    _opcode_57581 = 410;
    goto L18; // [504] 517
L17: 

    /** parser.e:2254			opcode = DO*/
    _opcode_57581 = 411;
L18: 

    /** parser.e:2256		putback(tok)*/
    Ref(_tok_57583);
    _42putback(_tok_57583);

    /** parser.e:2257		tok_match(opcode)*/
    _42tok_match(_opcode_57581, 0);

    /** parser.e:2258		return has_entry*/
    DeRef(_tok_57583);
    DeRef(_labbel_57584);
    DeRef(_29043);
    _29043 = NOVALUE;
    DeRef(_29041);
    _29041 = NOVALUE;
    DeRef(_29001);
    _29001 = NOVALUE;
    DeRef(_28999);
    _28999 = NOVALUE;
    _29023 = NOVALUE;
    DeRef(_29012);
    _29012 = NOVALUE;
    DeRef(_29027);
    _29027 = NOVALUE;
    DeRef(_28997);
    _28997 = NOVALUE;
    return _has_entry_57585;
    ;
}


void _42If_statement()
{
    object _addr_inlined_AppendEList_at_624_57831 = NOVALUE;
    object _addr_inlined_AppendEList_at_260_57760 = NOVALUE;
    object _tok_57703 = NOVALUE;
    object _prev_false_57704 = NOVALUE;
    object _prev_false2_57705 = NOVALUE;
    object _elist_base_57706 = NOVALUE;
    object _temps_57714 = NOVALUE;
    object _31678 = NOVALUE;
    object _29109 = NOVALUE;
    object _29108 = NOVALUE;
    object _29105 = NOVALUE;
    object _29104 = NOVALUE;
    object _29102 = NOVALUE;
    object _29101 = NOVALUE;
    object _29100 = NOVALUE;
    object _29098 = NOVALUE;
    object _29097 = NOVALUE;
    object _29095 = NOVALUE;
    object _29094 = NOVALUE;
    object _29093 = NOVALUE;
    object _29091 = NOVALUE;
    object _29090 = NOVALUE;
    object _29088 = NOVALUE;
    object _29087 = NOVALUE;
    object _29086 = NOVALUE;
    object _29085 = NOVALUE;
    object _29083 = NOVALUE;
    object _29082 = NOVALUE;
    object _29079 = NOVALUE;
    object _29077 = NOVALUE;
    object _29076 = NOVALUE;
    object _29075 = NOVALUE;
    object _29072 = NOVALUE;
    object _29069 = NOVALUE;
    object _29068 = NOVALUE;
    object _29066 = NOVALUE;
    object _29065 = NOVALUE;
    object _29063 = NOVALUE;
    object _29062 = NOVALUE;
    object _29060 = NOVALUE;
    object _29057 = NOVALUE;
    object _29055 = NOVALUE;
    object _29054 = NOVALUE;
    object _29053 = NOVALUE;
    object _29049 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2265		integer prev_false*/

    /** parser.e:2266		integer prev_false2*/

    /** parser.e:2267		integer elist_base*/

    /** parser.e:2269		if_stack &= IF*/
    Append(&_42if_stack_54398, _42if_stack_54398, 20);

    /** parser.e:2271		Start_block( IF )*/
    _66Start_block(20, 0);

    /** parser.e:2273		elist_base = length(break_list)*/
    if (IS_SEQUENCE(_42break_list_54381)){
            _elist_base_57706 = SEQ_PTR(_42break_list_54381)->length;
    }
    else {
        _elist_base_57706 = 1;
    }

    /** parser.e:2274		short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;

    /** parser.e:2275		short_circuit_B = FALSE*/
    _42short_circuit_B_54365 = _9FALSE_442;

    /** parser.e:2276		SC1_type = 0*/
    _42SC1_type_54368 = 0;

    /** parser.e:2277		Expr()*/
    _42Expr();

    /** parser.e:2279		sequence temps = get_temps()*/
    _31678 = Repeat(_21928, 2);
    _0 = _temps_57714;
    _temps_57714 = _49get_temps(_31678);
    DeRef(_0);
    _31678 = NOVALUE;

    /** parser.e:2281		emit_op(IF)*/
    _49emit_op(20);

    /** parser.e:2282		prev_false = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29049 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29049 = 1;
    }
    _prev_false_57704 = _29049 + 1;
    _29049 = NOVALUE;

    /** parser.e:2283		emit_forward_addr() -- to be patched*/
    _42emit_forward_addr();

    /** parser.e:2284		prev_false2=finish_block_header(IF)  -- 0*/
    _prev_false2_57705 = _42finish_block_header(20);
    if (!IS_ATOM_INT(_prev_false2_57705)) {
        _1 = (object)(DBL_PTR(_prev_false2_57705)->dbl);
        DeRefDS(_prev_false2_57705);
        _prev_false2_57705 = _1;
    }

    /** parser.e:2285		if SC1_type = OR then*/
    if (_42SC1_type_54368 != 9)
    goto L1; // [106] 159

    /** parser.e:2286			backpatch(SC1_patch-3, SC1_OR_IF)*/
    _29053 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29053 +(uintptr_t) HIGH_BITS) >= 0){
        _29053 = NewDouble((eudouble)_29053);
    }
    _49backpatch(_29053, 147);
    _29053 = NOVALUE;

    /** parser.e:2287			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2; // [128] 139
    }
    else{
    }

    /** parser.e:2288				emit_op(NOP1)  -- to get label here*/
    _49emit_op(159);
L2: 

    /** parser.e:2290			backpatch(SC1_patch, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29054 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29054 = 1;
    }
    _29055 = _29054 + 1;
    _29054 = NOVALUE;
    _49backpatch(_42SC1_patch_54367, _29055);
    _29055 = NOVALUE;
    goto L3; // [156] 192
L1: 

    /** parser.e:2291		elsif SC1_type = AND then*/
    if (_42SC1_type_54368 != 8)
    goto L4; // [165] 191

    /** parser.e:2292			backpatch(SC1_patch-3, SC1_AND_IF)*/
    _29057 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29057 +(uintptr_t) HIGH_BITS) >= 0){
        _29057 = NewDouble((eudouble)_29057);
    }
    _49backpatch(_29057, 146);
    _29057 = NOVALUE;

    /** parser.e:2293			prev_false2 = SC1_patch*/
    _prev_false2_57705 = _42SC1_patch_54367;
L4: 
L3: 

    /** parser.e:2295		short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:2298		Statement_list()*/
    _42Statement_list();

    /** parser.e:2299		tok = next_token()*/
    _0 = _tok_57703;
    _tok_57703 = _42next_token();
    DeRef(_0);

    /** parser.e:2301		while tok[T_ID] = ELSIF do*/
L5: 
    _2 = (object)SEQ_PTR(_tok_57703);
    _29060 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29060, 414)){
        _29060 = NOVALUE;
        goto L6; // [222] 530
    }
    _29060 = NOVALUE;

    /** parser.e:2302			Sibling_block( IF )*/
    _66Sibling_block(20);

    /** parser.e:2305			emit_op(ELSE)*/
    _49emit_op(23);

    /** parser.e:2306			AppendEList(length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29062 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29062 = 1;
    }
    _29063 = _29062 + 1;
    _29062 = NOVALUE;
    _addr_inlined_AppendEList_at_260_57760 = _29063;
    _29063 = NOVALUE;

    /** parser.e:393		break_list = append(break_list, addr)*/
    Append(&_42break_list_54381, _42break_list_54381, _addr_inlined_AppendEList_at_260_57760);

    /** parser.e:394	end procedure*/
    goto L7; // [266] 269
L7: 

    /** parser.e:2307			break_delay &= 1*/
    Append(&_42break_delay_54382, _42break_delay_54382, 1);

    /** parser.e:2308			emit_forward_addr()  -- to be patched*/
    _42emit_forward_addr();

    /** parser.e:2309			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L8; // [287] 298
    }
    else{
    }

    /** parser.e:2310				emit_op(NOP1)*/
    _49emit_op(159);
L8: 

    /** parser.e:2312			backpatch(prev_false, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29065 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29065 = 1;
    }
    _29066 = _29065 + 1;
    _29065 = NOVALUE;
    _49backpatch(_prev_false_57704, _29066);
    _29066 = NOVALUE;

    /** parser.e:2313			if prev_false2 != 0 then*/
    if (_prev_false2_57705 == 0)
    goto L9; // [315] 335

    /** parser.e:2314				backpatch(prev_false2, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29068 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29068 = 1;
    }
    _29069 = _29068 + 1;
    _29068 = NOVALUE;
    _49backpatch(_prev_false2_57705, _29069);
    _29069 = NOVALUE;
L9: 

    /** parser.e:2317			StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:2318			short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;

    /** parser.e:2319			short_circuit_B = FALSE*/
    _42short_circuit_B_54365 = _9FALSE_442;

    /** parser.e:2320			SC1_type = 0*/
    _42SC1_type_54368 = 0;

    /** parser.e:2322			push_temps( temps )*/
    RefDS(_temps_57714);
    _49push_temps(_temps_57714);

    /** parser.e:2323			Expr()*/
    _42Expr();

    /** parser.e:2325			temps = get_temps( temps )*/
    RefDS(_temps_57714);
    _0 = _temps_57714;
    _temps_57714 = _49get_temps(_temps_57714);
    DeRefDS(_0);

    /** parser.e:2327			emit_op(IF)*/
    _49emit_op(20);

    /** parser.e:2328			prev_false = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29072 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29072 = 1;
    }
    _prev_false_57704 = _29072 + 1;
    _29072 = NOVALUE;

    /** parser.e:2329			prev_false2 = 0*/
    _prev_false2_57705 = 0;

    /** parser.e:2330			emit_forward_addr() -- to be patched*/
    _42emit_forward_addr();

    /** parser.e:2331			if SC1_type = OR then*/
    if (_42SC1_type_54368 != 9)
    goto LA; // [414] 467

    /** parser.e:2332				backpatch(SC1_patch-3, SC1_OR_IF)*/
    _29075 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29075 +(uintptr_t) HIGH_BITS) >= 0){
        _29075 = NewDouble((eudouble)_29075);
    }
    _49backpatch(_29075, 147);
    _29075 = NOVALUE;

    /** parser.e:2333				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LB; // [436] 447
    }
    else{
    }

    /** parser.e:2334					emit_op(NOP1)*/
    _49emit_op(159);
LB: 

    /** parser.e:2336				backpatch(SC1_patch, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29076 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29076 = 1;
    }
    _29077 = _29076 + 1;
    _29076 = NOVALUE;
    _49backpatch(_42SC1_patch_54367, _29077);
    _29077 = NOVALUE;
    goto LC; // [464] 500
LA: 

    /** parser.e:2337			elsif SC1_type = AND then*/
    if (_42SC1_type_54368 != 8)
    goto LD; // [473] 499

    /** parser.e:2338				backpatch(SC1_patch-3, SC1_AND_IF)*/
    _29079 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29079 +(uintptr_t) HIGH_BITS) >= 0){
        _29079 = NewDouble((eudouble)_29079);
    }
    _49backpatch(_29079, 146);
    _29079 = NOVALUE;

    /** parser.e:2339				prev_false2 = SC1_patch*/
    _prev_false2_57705 = _42SC1_patch_54367;
LD: 
LC: 

    /** parser.e:2341			short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:2342			tok_match(THEN)*/
    _42tok_match(410, 0);

    /** parser.e:2345			Statement_list()*/
    _42Statement_list();

    /** parser.e:2346			tok = next_token()*/
    _0 = _tok_57703;
    _tok_57703 = _42next_token();
    DeRef(_0);

    /** parser.e:2347		end while*/
    goto L5; // [527] 214
L6: 

    /** parser.e:2349		if tok[T_ID] = ELSE or length(temps[1]) then*/
    _2 = (object)SEQ_PTR(_tok_57703);
    _29082 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_29082)) {
        _29083 = (_29082 == 23);
    }
    else {
        _29083 = binary_op(EQUALS, _29082, 23);
    }
    _29082 = NOVALUE;
    if (IS_ATOM_INT(_29083)) {
        if (_29083 != 0) {
            goto LE; // [544] 560
        }
    }
    else {
        if (DBL_PTR(_29083)->dbl != 0.0) {
            goto LE; // [544] 560
        }
    }
    _2 = (object)SEQ_PTR(_temps_57714);
    _29085 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_29085)){
            _29086 = SEQ_PTR(_29085)->length;
    }
    else {
        _29086 = 1;
    }
    _29085 = NOVALUE;
    if (_29086 == 0)
    {
        _29086 = NOVALUE;
        goto LF; // [556] 715
    }
    else{
        _29086 = NOVALUE;
    }
LE: 

    /** parser.e:2354			Sibling_block( IF )*/
    _66Sibling_block(20);

    /** parser.e:2356			StartSourceLine(FALSE, , COVERAGE_SUPPRESS )*/
    _49StartSourceLine(_9FALSE_442, 0, 1);

    /** parser.e:2357			emit_op(ELSE)*/
    _49emit_op(23);

    /** parser.e:2358			AppendEList(length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29087 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29087 = 1;
    }
    _29088 = _29087 + 1;
    _29087 = NOVALUE;
    _addr_inlined_AppendEList_at_624_57831 = _29088;
    _29088 = NOVALUE;

    /** parser.e:393		break_list = append(break_list, addr)*/
    Append(&_42break_list_54381, _42break_list_54381, _addr_inlined_AppendEList_at_624_57831);

    /** parser.e:394	end procedure*/
    goto L10; // [611] 614
L10: 

    /** parser.e:2359			break_delay &= 1*/
    Append(&_42break_delay_54382, _42break_delay_54382, 1);

    /** parser.e:2360			emit_forward_addr() -- to be patched*/
    _42emit_forward_addr();

    /** parser.e:2361			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L11; // [632] 643
    }
    else{
    }

    /** parser.e:2362				emit_op(NOP1)*/
    _49emit_op(159);
L11: 

    /** parser.e:2364			backpatch(prev_false, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29090 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29090 = 1;
    }
    _29091 = _29090 + 1;
    _29090 = NOVALUE;
    _49backpatch(_prev_false_57704, _29091);
    _29091 = NOVALUE;

    /** parser.e:2365			if prev_false2 != 0 then*/
    if (_prev_false2_57705 == 0)
    goto L12; // [660] 680

    /** parser.e:2366				backpatch(prev_false2, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29093 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29093 = 1;
    }
    _29094 = _29093 + 1;
    _29093 = NOVALUE;
    _49backpatch(_prev_false2_57705, _29094);
    _29094 = NOVALUE;
L12: 

    /** parser.e:2369			push_temps( temps )*/
    RefDS(_temps_57714);
    _49push_temps(_temps_57714);

    /** parser.e:2371			if tok[T_ID] = ELSE then*/
    _2 = (object)SEQ_PTR(_tok_57703);
    _29095 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29095, 23)){
        _29095 = NOVALUE;
        goto L13; // [695] 706
    }
    _29095 = NOVALUE;

    /** parser.e:2372				Statement_list()*/
    _42Statement_list();
    goto L14; // [703] 773
L13: 

    /** parser.e:2374				putback(tok)*/
    Ref(_tok_57703);
    _42putback(_tok_57703);
    goto L14; // [712] 773
LF: 

    /** parser.e:2377			putback(tok)*/
    Ref(_tok_57703);
    _42putback(_tok_57703);

    /** parser.e:2378			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L15; // [724] 735
    }
    else{
    }

    /** parser.e:2379				emit_op(NOP1)*/
    _49emit_op(159);
L15: 

    /** parser.e:2381			backpatch(prev_false, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29097 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29097 = 1;
    }
    _29098 = _29097 + 1;
    _29097 = NOVALUE;
    _49backpatch(_prev_false_57704, _29098);
    _29098 = NOVALUE;

    /** parser.e:2382			if prev_false2 != 0 then*/
    if (_prev_false2_57705 == 0)
    goto L16; // [752] 772

    /** parser.e:2383				backpatch(prev_false2, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29100 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29100 = 1;
    }
    _29101 = _29100 + 1;
    _29100 = NOVALUE;
    _49backpatch(_prev_false2_57705, _29101);
    _29101 = NOVALUE;
L16: 
L14: 

    /** parser.e:2387		tok_match(END)*/
    _42tok_match(402, 0);

    /** parser.e:2388		tok_match(IF, END)*/
    _42tok_match(20, 402);

    /** parser.e:2390		End_block( IF )*/
    _66End_block(20);

    /** parser.e:2392		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L17; // [802] 825
    }
    else{
    }

    /** parser.e:2393			if length(break_list) > elist_base then*/
    if (IS_SEQUENCE(_42break_list_54381)){
            _29102 = SEQ_PTR(_42break_list_54381)->length;
    }
    else {
        _29102 = 1;
    }
    if (_29102 <= _elist_base_57706)
    goto L18; // [812] 824

    /** parser.e:2394				emit_op(NOP1)  -- to emit label here*/
    _49emit_op(159);
L18: 
L17: 

    /** parser.e:2397		PatchEList(elist_base)*/
    _42PatchEList(_elist_base_57706);

    /** parser.e:2398		if_labels = if_labels[1..$-1]*/
    if (IS_SEQUENCE(_42if_labels_54392)){
            _29104 = SEQ_PTR(_42if_labels_54392)->length;
    }
    else {
        _29104 = 1;
    }
    _29105 = _29104 - 1;
    _29104 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42if_labels_54392;
    RHS_Slice(_42if_labels_54392, 1, _29105);

    /** parser.e:2399		block_index -= 1*/
    _42block_index_54394 = _42block_index_54394 - 1;

    /** parser.e:2400		if_stack = if_stack[1..$-1]*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _29108 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _29108 = 1;
    }
    _29109 = _29108 - 1;
    _29108 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42if_stack_54398;
    RHS_Slice(_42if_stack_54398, 1, _29109);

    /** parser.e:2402	end procedure*/
    DeRef(_tok_57703);
    DeRef(_temps_57714);
    _29105 = NOVALUE;
    _29085 = NOVALUE;
    _29109 = NOVALUE;
    DeRef(_29083);
    _29083 = NOVALUE;
    return;
    ;
}


void _42exit_loop(object _exit_base_57891)
{
    object _29124 = NOVALUE;
    object _29123 = NOVALUE;
    object _29121 = NOVALUE;
    object _29120 = NOVALUE;
    object _29118 = NOVALUE;
    object _29117 = NOVALUE;
    object _29115 = NOVALUE;
    object _29114 = NOVALUE;
    object _29112 = NOVALUE;
    object _29111 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2405		PatchXList(exit_base)*/
    _42PatchXList(_exit_base_57891);

    /** parser.e:2406		loop_labels = loop_labels[1..$-1]*/
    if (IS_SEQUENCE(_42loop_labels_54391)){
            _29111 = SEQ_PTR(_42loop_labels_54391)->length;
    }
    else {
        _29111 = 1;
    }
    _29112 = _29111 - 1;
    _29111 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42loop_labels_54391;
    RHS_Slice(_42loop_labels_54391, 1, _29112);

    /** parser.e:2407		loop_stack = loop_stack[1..$-1]*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _29114 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _29114 = 1;
    }
    _29115 = _29114 - 1;
    _29114 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42loop_stack_54397;
    RHS_Slice(_42loop_stack_54397, 1, _29115);

    /** parser.e:2408		continue_addr = continue_addr[1..$-1]*/
    if (IS_SEQUENCE(_42continue_addr_54388)){
            _29117 = SEQ_PTR(_42continue_addr_54388)->length;
    }
    else {
        _29117 = 1;
    }
    _29118 = _29117 - 1;
    _29117 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42continue_addr_54388;
    RHS_Slice(_42continue_addr_54388, 1, _29118);

    /** parser.e:2409		retry_addr = retry_addr[1..$-1]*/
    if (IS_SEQUENCE(_42retry_addr_54389)){
            _29120 = SEQ_PTR(_42retry_addr_54389)->length;
    }
    else {
        _29120 = 1;
    }
    _29121 = _29120 - 1;
    _29120 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42retry_addr_54389;
    RHS_Slice(_42retry_addr_54389, 1, _29121);

    /** parser.e:2410		entry_addr = entry_addr[1..$-1]*/
    if (IS_SEQUENCE(_42entry_addr_54387)){
            _29123 = SEQ_PTR(_42entry_addr_54387)->length;
    }
    else {
        _29123 = 1;
    }
    _29124 = _29123 - 1;
    _29123 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42entry_addr_54387;
    RHS_Slice(_42entry_addr_54387, 1, _29124);

    /** parser.e:2411		block_index -= 1*/
    _42block_index_54394 = _42block_index_54394 - 1;

    /** parser.e:2412	end procedure*/
    _29115 = NOVALUE;
    _29112 = NOVALUE;
    _29124 = NOVALUE;
    _29118 = NOVALUE;
    _29121 = NOVALUE;
    return;
    ;
}


void _42push_switch()
{
    object _new_1__tmp_at14_57914 = NOVALUE;
    object _new_inlined_new_at_14_57913 = NOVALUE;
    object _29128 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2415		if_stack &= SWITCH*/
    Append(&_42if_stack_54398, _42if_stack_54398, 185);

    /** parser.e:2416		switch_stack = append( switch_stack,*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at14_57914;
    _new_1__tmp_at14_57914 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at14_57914);
    _0 = _new_inlined_new_at_14_57913;
    _new_inlined_new_at_14_57913 = _31malloc(_new_1__tmp_at14_57914, 1);
    DeRef(_0);
    DeRef(_new_1__tmp_at14_57914);
    _new_1__tmp_at14_57914 = NOVALUE;
    _1 = NewS1(13);
    _2 = (object)((s1_ptr)_1)->base;
    RefDSn(_21928, 2);
    ((intptr_t*)_2)[1] = _21928;
    ((intptr_t*)_2)[2] = _21928;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 0;
    Ref(_new_inlined_new_at_14_57913);
    ((intptr_t*)_2)[7] = _new_inlined_new_at_14_57913;
    RefDS(_21928);
    ((intptr_t*)_2)[8] = _21928;
    ((intptr_t*)_2)[9] = 0;
    RefDSn(_21928, 4);
    ((intptr_t*)_2)[10] = _21928;
    ((intptr_t*)_2)[11] = _21928;
    ((intptr_t*)_2)[12] = _21928;
    ((intptr_t*)_2)[13] = _21928;
    _29128 = MAKE_SEQ(_1);
    RefDS(_29128);
    Append(&_42switch_stack_54612, _42switch_stack_54612, _29128);
    DeRefDS(_29128);
    _29128 = NOVALUE;

    /** parser.e:2433	end procedure*/
    return;
    ;
}


void _42pop_switch(object _break_base_57919)
{
    object _29143 = NOVALUE;
    object _29142 = NOVALUE;
    object _29140 = NOVALUE;
    object _29139 = NOVALUE;
    object _29137 = NOVALUE;
    object _29136 = NOVALUE;
    object _29134 = NOVALUE;
    object _29133 = NOVALUE;
    object _29132 = NOVALUE;
    object _29131 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2438		PatchEList( break_base )*/
    _42PatchEList(_break_base_57919);

    /** parser.e:2439		block_index -= 1*/
    _42block_index_54394 = _42block_index_54394 - 1;

    /** parser.e:2440		if length(switch_stack[$][SWITCH_CASES]) > 0 then*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29131 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29131 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29132 = (object)*(((s1_ptr)_2)->base + _29131);
    _2 = (object)SEQ_PTR(_29132);
    _29133 = (object)*(((s1_ptr)_2)->base + 1);
    _29132 = NOVALUE;
    if (IS_SEQUENCE(_29133)){
            _29134 = SEQ_PTR(_29133)->length;
    }
    else {
        _29134 = 1;
    }
    _29133 = NOVALUE;
    if (_29134 <= 0)
    goto L1; // [34] 46

    /** parser.e:2441			End_block( CASE )*/
    _66End_block(186);
L1: 

    /** parser.e:2443		if_labels = if_labels[1..$-1]*/
    if (IS_SEQUENCE(_42if_labels_54392)){
            _29136 = SEQ_PTR(_42if_labels_54392)->length;
    }
    else {
        _29136 = 1;
    }
    _29137 = _29136 - 1;
    _29136 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42if_labels_54392;
    RHS_Slice(_42if_labels_54392, 1, _29137);

    /** parser.e:2444		if_stack  = if_stack[1..$-1]*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _29139 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _29139 = 1;
    }
    _29140 = _29139 - 1;
    _29139 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42if_stack_54398;
    RHS_Slice(_42if_stack_54398, 1, _29140);

    /** parser.e:2445		switch_stack  = switch_stack[1..$-1]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29142 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29142 = 1;
    }
    _29143 = _29142 - 1;
    _29142 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42switch_stack_54612;
    RHS_Slice(_42switch_stack_54612, 1, _29143);

    /** parser.e:2446	end procedure*/
    _29133 = NOVALUE;
    _29140 = NOVALUE;
    _29137 = NOVALUE;
    _29143 = NOVALUE;
    return;
    ;
}


void _42add_case(object _sym_57940, object _sign_57941)
{
    object _29190 = NOVALUE;
    object _29189 = NOVALUE;
    object _29188 = NOVALUE;
    object _29187 = NOVALUE;
    object _29186 = NOVALUE;
    object _29185 = NOVALUE;
    object _29183 = NOVALUE;
    object _29182 = NOVALUE;
    object _29181 = NOVALUE;
    object _29180 = NOVALUE;
    object _29178 = NOVALUE;
    object _29177 = NOVALUE;
    object _29176 = NOVALUE;
    object _29175 = NOVALUE;
    object _29173 = NOVALUE;
    object _29172 = NOVALUE;
    object _29171 = NOVALUE;
    object _29170 = NOVALUE;
    object _29169 = NOVALUE;
    object _29167 = NOVALUE;
    object _29166 = NOVALUE;
    object _29165 = NOVALUE;
    object _29164 = NOVALUE;
    object _29163 = NOVALUE;
    object _29162 = NOVALUE;
    object _29160 = NOVALUE;
    object _29159 = NOVALUE;
    object _29158 = NOVALUE;
    object _29157 = NOVALUE;
    object _29156 = NOVALUE;
    object _29155 = NOVALUE;
    object _29153 = NOVALUE;
    object _29152 = NOVALUE;
    object _29150 = NOVALUE;
    object _29149 = NOVALUE;
    object _29148 = NOVALUE;
    object _29147 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2450		if sign < 0 then*/
    if (_sign_57941 >= 0)
    goto L1; // [5] 15

    /** parser.e:2451			sym = -sym*/
    _0 = _sym_57940;
    if (IS_ATOM_INT(_sym_57940)) {
        if ((uintptr_t)_sym_57940 == (uintptr_t)HIGH_BITS){
            _sym_57940 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _sym_57940 = - _sym_57940;
        }
    }
    else {
        _sym_57940 = unary_op(UMINUS, _sym_57940);
    }
    DeRefi(_0);
L1: 

    /** parser.e:2454		if find(sym, switch_stack[$][SWITCH_CASES] ) = 0 then*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29147 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29147 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29148 = (object)*(((s1_ptr)_2)->base + _29147);
    _2 = (object)SEQ_PTR(_29148);
    _29149 = (object)*(((s1_ptr)_2)->base + 1);
    _29148 = NOVALUE;
    _29150 = find_from(_sym_57940, _29149, 1);
    _29149 = NOVALUE;
    if (_29150 != 0)
    goto L2; // [35] 252

    /** parser.e:2455			switch_stack[$][SWITCH_CASES]            = append( switch_stack[$][SWITCH_CASES], sym )*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29152 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29152 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29152 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29155 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29155 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29156 = (object)*(((s1_ptr)_2)->base + _29155);
    _2 = (object)SEQ_PTR(_29156);
    _29157 = (object)*(((s1_ptr)_2)->base + 1);
    _29156 = NOVALUE;
    Ref(_sym_57940);
    Append(&_29158, _29157, _sym_57940);
    _29157 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29158;
    if( _1 != _29158 ){
        DeRef(_1);
    }
    _29158 = NOVALUE;
    _29153 = NOVALUE;

    /** parser.e:2456			switch_stack[$][SWITCH_JUMP_TABLE]      &= length(Code) + 1*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29159 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29159 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29159 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_39Code_16903)){
            _29162 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29162 = 1;
    }
    _29163 = _29162 + 1;
    _29162 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _29164 = (object)*(((s1_ptr)_2)->base + 2);
    _29160 = NOVALUE;
    if (IS_SEQUENCE(_29164) && IS_ATOM(_29163)) {
        Append(&_29165, _29164, _29163);
    }
    else if (IS_ATOM(_29164) && IS_SEQUENCE(_29163)) {
    }
    else {
        Concat((object_ptr)&_29165, _29164, _29163);
        _29164 = NOVALUE;
    }
    _29164 = NOVALUE;
    _29163 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29165;
    if( _1 != _29165 ){
        DeRef(_1);
    }
    _29165 = NOVALUE;
    _29160 = NOVALUE;

    /** parser.e:2457			switch_stack[$][SWITCH_THISLINE]        &= {ThisLine}*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29166 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29166 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29166 + ((s1_ptr)_2)->base);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_52ThisLine_48710);
    ((intptr_t*)_2)[1] = _52ThisLine_48710;
    _29169 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _29170 = (object)*(((s1_ptr)_2)->base + 10);
    _29167 = NOVALUE;
    if (IS_SEQUENCE(_29170) && IS_ATOM(_29169)) {
    }
    else if (IS_ATOM(_29170) && IS_SEQUENCE(_29169)) {
        Ref(_29170);
        Prepend(&_29171, _29169, _29170);
    }
    else {
        Concat((object_ptr)&_29171, _29170, _29169);
        _29170 = NOVALUE;
    }
    _29170 = NOVALUE;
    DeRefDS(_29169);
    _29169 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29171;
    if( _1 != _29171 ){
        DeRef(_1);
    }
    _29171 = NOVALUE;
    _29167 = NOVALUE;

    /** parser.e:2458			switch_stack[$][SWITCH_BP]              &= bp*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29172 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29172 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29172 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _29175 = (object)*(((s1_ptr)_2)->base + 11);
    _29173 = NOVALUE;
    if (IS_SEQUENCE(_29175) && IS_ATOM(_52bp_48714)) {
        Append(&_29176, _29175, _52bp_48714);
    }
    else if (IS_ATOM(_29175) && IS_SEQUENCE(_52bp_48714)) {
    }
    else {
        Concat((object_ptr)&_29176, _29175, _52bp_48714);
        _29175 = NOVALUE;
    }
    _29175 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29176;
    if( _1 != _29176 ){
        DeRef(_1);
    }
    _29176 = NOVALUE;
    _29173 = NOVALUE;

    /** parser.e:2459			switch_stack[$][SWITCH_LINE_NUMBER]     &= line_number*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29177 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29177 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29177 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _29180 = (object)*(((s1_ptr)_2)->base + 12);
    _29178 = NOVALUE;
    if (IS_SEQUENCE(_29180) && IS_ATOM(_39line_number_16816)) {
        Append(&_29181, _29180, _39line_number_16816);
    }
    else if (IS_ATOM(_29180) && IS_SEQUENCE(_39line_number_16816)) {
    }
    else {
        Concat((object_ptr)&_29181, _29180, _39line_number_16816);
        _29180 = NOVALUE;
    }
    _29180 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29181;
    if( _1 != _29181 ){
        DeRef(_1);
    }
    _29181 = NOVALUE;
    _29178 = NOVALUE;

    /** parser.e:2460			switch_stack[$][SWITCH_CURRENT_FILE_NO] &= current_file_no*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29182 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29182 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29182 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _29185 = (object)*(((s1_ptr)_2)->base + 13);
    _29183 = NOVALUE;
    if (IS_SEQUENCE(_29185) && IS_ATOM(_39current_file_no_16815)) {
        Append(&_29186, _29185, _39current_file_no_16815);
    }
    else if (IS_ATOM(_29185) && IS_SEQUENCE(_39current_file_no_16815)) {
    }
    else {
        Concat((object_ptr)&_29186, _29185, _39current_file_no_16815);
        _29185 = NOVALUE;
    }
    _29185 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 13);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29186;
    if( _1 != _29186 ){
        DeRef(_1);
    }
    _29186 = NOVALUE;
    _29183 = NOVALUE;

    /** parser.e:2462			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3; // [217] 260
    }
    else{
    }

    /** parser.e:2463				emit_addr( CASE )*/
    _49emit_addr(186);

    /** parser.e:2464				emit_addr( length( switch_stack[$][SWITCH_CASES] ) )*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29187 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29187 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29188 = (object)*(((s1_ptr)_2)->base + _29187);
    _2 = (object)SEQ_PTR(_29188);
    _29189 = (object)*(((s1_ptr)_2)->base + 1);
    _29188 = NOVALUE;
    if (IS_SEQUENCE(_29189)){
            _29190 = SEQ_PTR(_29189)->length;
    }
    else {
        _29190 = 1;
    }
    _29189 = NOVALUE;
    _49emit_addr(_29190);
    _29190 = NOVALUE;
    goto L3; // [249] 260
L2: 

    /** parser.e:2467			CompileErr( 63 )*/
    RefDS(_21928);
    _52CompileErr(63, _21928, 0);
L3: 

    /** parser.e:2469	end procedure*/
    DeRef(_sym_57940);
    _29189 = NOVALUE;
    return;
    ;
}


void _42case_else()
{
    object _29198 = NOVALUE;
    object _29197 = NOVALUE;
    object _29195 = NOVALUE;
    object _29194 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2476		switch_stack[$][SWITCH_ELSE] = length(Code) + 1*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29194 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29194 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29194 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_39Code_16903)){
            _29197 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29197 = 1;
    }
    _29198 = _29197 + 1;
    _29197 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29198;
    if( _1 != _29198 ){
        DeRef(_1);
    }
    _29198 = NOVALUE;
    _29195 = NOVALUE;

    /** parser.e:2477		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [30] 46
    }
    else{
    }

    /** parser.e:2478			emit_addr( CASE )*/
    _49emit_addr(186);

    /** parser.e:2479			emit_addr( 0 )*/
    _49emit_addr(0);
L1: 

    /** parser.e:2482	end procedure*/
    return;
    ;
}


void _42Case_statement()
{
    object _else_case_2__tmp_at145_58062 = NOVALUE;
    object _else_case_1__tmp_at145_58061 = NOVALUE;
    object _else_case_inlined_else_case_at_145_58060 = NOVALUE;
    object _tok_58024 = NOVALUE;
    object _condition_58026 = NOVALUE;
    object _start_line_58055 = NOVALUE;
    object _sign_58066 = NOVALUE;
    object _fwd_58079 = NOVALUE;
    object _symi_58089 = NOVALUE;
    object _fwdref_58158 = NOVALUE;
    object _31677 = NOVALUE;
    object _29280 = NOVALUE;
    object _29279 = NOVALUE;
    object _29278 = NOVALUE;
    object _29277 = NOVALUE;
    object _29276 = NOVALUE;
    object _29275 = NOVALUE;
    object _29273 = NOVALUE;
    object _29272 = NOVALUE;
    object _29271 = NOVALUE;
    object _29270 = NOVALUE;
    object _29269 = NOVALUE;
    object _29268 = NOVALUE;
    object _29266 = NOVALUE;
    object _29263 = NOVALUE;
    object _29260 = NOVALUE;
    object _29259 = NOVALUE;
    object _29258 = NOVALUE;
    object _29257 = NOVALUE;
    object _29254 = NOVALUE;
    object _29253 = NOVALUE;
    object _29252 = NOVALUE;
    object _29251 = NOVALUE;
    object _29248 = NOVALUE;
    object _29247 = NOVALUE;
    object _29246 = NOVALUE;
    object _29245 = NOVALUE;
    object _29243 = NOVALUE;
    object _29242 = NOVALUE;
    object _29241 = NOVALUE;
    object _29239 = NOVALUE;
    object _29238 = NOVALUE;
    object _29237 = NOVALUE;
    object _29236 = NOVALUE;
    object _29235 = NOVALUE;
    object _29233 = NOVALUE;
    object _29232 = NOVALUE;
    object _29230 = NOVALUE;
    object _29229 = NOVALUE;
    object _29228 = NOVALUE;
    object _29227 = NOVALUE;
    object _29223 = NOVALUE;
    object _29222 = NOVALUE;
    object _29221 = NOVALUE;
    object _29218 = NOVALUE;
    object _29215 = NOVALUE;
    object _29212 = NOVALUE;
    object _29211 = NOVALUE;
    object _29210 = NOVALUE;
    object _29209 = NOVALUE;
    object _29208 = NOVALUE;
    object _29207 = NOVALUE;
    object _29206 = NOVALUE;
    object _29204 = NOVALUE;
    object _29203 = NOVALUE;
    object _29202 = NOVALUE;
    object _29201 = NOVALUE;
    object _29199 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2489		if not in_switch() then*/
    _29199 = _42in_switch();
    if (IS_ATOM_INT(_29199)) {
        if (_29199 != 0){
            DeRef(_29199);
            _29199 = NOVALUE;
            goto L1; // [6] 17
        }
    }
    else {
        if (DBL_PTR(_29199)->dbl != 0.0){
            DeRef(_29199);
            _29199 = NOVALUE;
            goto L1; // [6] 17
        }
    }
    DeRef(_29199);
    _29199 = NOVALUE;

    /** parser.e:2490			CompileErr( 34 )*/
    RefDS(_21928);
    _52CompileErr(34, _21928, 0);
L1: 

    /** parser.e:2493		if length(switch_stack[$][SWITCH_CASES]) > 0 then*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29201 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29201 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29202 = (object)*(((s1_ptr)_2)->base + _29201);
    _2 = (object)SEQ_PTR(_29202);
    _29203 = (object)*(((s1_ptr)_2)->base + 1);
    _29202 = NOVALUE;
    if (IS_SEQUENCE(_29203)){
            _29204 = SEQ_PTR(_29203)->length;
    }
    else {
        _29204 = 1;
    }
    _29203 = NOVALUE;
    if (_29204 <= 0)
    goto L2; // [35] 101

    /** parser.e:2495			Sibling_block( CASE )*/
    _66Sibling_block(186);

    /** parser.e:2497			if not switch_stack[$][SWITCH_FALLTHRU] and*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29206 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29206 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29207 = (object)*(((s1_ptr)_2)->base + _29206);
    _2 = (object)SEQ_PTR(_29207);
    _29208 = (object)*(((s1_ptr)_2)->base + 5);
    _29207 = NOVALUE;
    if (IS_ATOM_INT(_29208)) {
        _29209 = (_29208 == 0);
    }
    else {
        _29209 = unary_op(NOT, _29208);
    }
    _29208 = NOVALUE;
    if (IS_ATOM_INT(_29209)) {
        if (_29209 == 0) {
            goto L3; // [64] 110
        }
    }
    else {
        if (DBL_PTR(_29209)->dbl == 0.0) {
            goto L3; // [64] 110
        }
    }
    _29211 = (_42fallthru_case_58020 == 0);
    if (_29211 == 0)
    {
        DeRef(_29211);
        _29211 = NOVALUE;
        goto L3; // [74] 110
    }
    else{
        DeRef(_29211);
        _29211 = NOVALUE;
    }

    /** parser.e:2501				putback( {CASE, 0} )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 186;
    ((intptr_t *)_2)[2] = 0;
    _29212 = MAKE_SEQ(_1);
    _42putback(_29212);
    _29212 = NOVALUE;

    /** parser.e:2502				Break_statement()*/
    _42Break_statement();

    /** parser.e:2503				tok = next_token()*/
    _0 = _tok_58024;
    _tok_58024 = _42next_token();
    DeRef(_0);
    goto L3; // [98] 110
L2: 

    /** parser.e:2506			Start_block( CASE )*/
    _66Start_block(186, 0);
L3: 

    /** parser.e:2509		StartSourceLine(TRUE, , COVERAGE_SUPPRESS)*/
    _49StartSourceLine(_9TRUE_444, 0, 1);

    /** parser.e:2511		fallthru_case = 0*/
    _42fallthru_case_58020 = 0;

    /** parser.e:2512		integer start_line = line_number*/
    _start_line_58055 = _39line_number_16816;

    /** parser.e:2513		while 1 do*/
L4: 

    /** parser.e:2515			if else_case() then*/

    /** parser.e:2472		return switch_stack[$][SWITCH_ELSE]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _else_case_1__tmp_at145_58061 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _else_case_1__tmp_at145_58061 = 1;
    }
    DeRef(_else_case_2__tmp_at145_58062);
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _else_case_2__tmp_at145_58062 = (object)*(((s1_ptr)_2)->base + _else_case_1__tmp_at145_58061);
    RefDS(_else_case_2__tmp_at145_58062);
    DeRef(_else_case_inlined_else_case_at_145_58060);
    _2 = (object)SEQ_PTR(_else_case_2__tmp_at145_58062);
    _else_case_inlined_else_case_at_145_58060 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_else_case_inlined_else_case_at_145_58060);
    DeRef(_else_case_2__tmp_at145_58062);
    _else_case_2__tmp_at145_58062 = NOVALUE;
    if (_else_case_inlined_else_case_at_145_58060 == 0) {
        goto L5; // [160] 171
    }
    else {
        if (!IS_ATOM_INT(_else_case_inlined_else_case_at_145_58060) && DBL_PTR(_else_case_inlined_else_case_at_145_58060)->dbl == 0.0){
            goto L5; // [160] 171
        }
    }

    /** parser.e:2516				CompileErr( 33 )*/
    RefDS(_21928);
    _52CompileErr(33, _21928, 0);
L5: 

    /** parser.e:2518			maybe_namespace()*/
    _63maybe_namespace();

    /** parser.e:2519			tok = next_token()*/
    _0 = _tok_58024;
    _tok_58024 = _42next_token();
    DeRef(_0);

    /** parser.e:2520			integer sign = 1*/
    _sign_58066 = 1;

    /** parser.e:2521			if tok[T_ID] = MINUS then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29215 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29215, 10)){
        _29215 = NOVALUE;
        goto L6; // [195] 212
    }
    _29215 = NOVALUE;

    /** parser.e:2522				sign = -1*/
    _sign_58066 = -1;

    /** parser.e:2523				tok = next_token()*/
    _0 = _tok_58024;
    _tok_58024 = _42next_token();
    DeRef(_0);
    goto L7; // [209] 233
L6: 

    /** parser.e:2524			elsif tok[T_ID] = PLUS then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29218 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29218, 11)){
        _29218 = NOVALUE;
        goto L8; // [222] 232
    }
    _29218 = NOVALUE;

    /** parser.e:2525				tok = next_token()*/
    _0 = _tok_58024;
    _tok_58024 = _42next_token();
    DeRef(_0);
L8: 
L7: 

    /** parser.e:2528			integer fwd*/

    /** parser.e:2529			if not find( tok[T_ID], {ATOM, STRING, ELSE} ) then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29221 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 502;
    ((intptr_t*)_2)[2] = 503;
    ((intptr_t*)_2)[3] = 23;
    _29222 = MAKE_SEQ(_1);
    _29223 = find_from(_29221, _29222, 1);
    _29221 = NOVALUE;
    DeRefDS(_29222);
    _29222 = NOVALUE;
    if (_29223 != 0)
    goto L9; // [260] 435
    _29223 = NOVALUE;

    /** parser.e:2531				integer symi = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _symi_58089 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_symi_58089)){
        _symi_58089 = (object)DBL_PTR(_symi_58089)->dbl;
    }

    /** parser.e:2532				fwd = -1*/
    _fwd_58079 = -1;

    /** parser.e:2533				if symi > 0 then*/
    if (_symi_58089 <= 0)
    goto LA; // [280] 430

    /** parser.e:2534					if find(tok[T_ID] , VAR_TOKS) then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29227 = (object)*(((s1_ptr)_2)->base + 1);
    _29228 = find_from(_29227, _40VAR_TOKS_16433, 1);
    _29227 = NOVALUE;
    if (_29228 == 0)
    {
        _29228 = NOVALUE;
        goto LB; // [299] 429
    }
    else{
        _29228 = NOVALUE;
    }

    /** parser.e:2535						if SymTab[symi][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29229 = (object)*(((s1_ptr)_2)->base + _symi_58089);
    _2 = (object)SEQ_PTR(_29229);
    _29230 = (object)*(((s1_ptr)_2)->base + 4);
    _29229 = NOVALUE;
    if (binary_op_a(NOTEQ, _29230, 9)){
        _29230 = NOVALUE;
        goto LC; // [318] 330
    }
    _29230 = NOVALUE;

    /** parser.e:2537							fwd = symi*/
    _fwd_58079 = _symi_58089;
    goto LD; // [327] 428
LC: 

    /** parser.e:2538						elsif SymTab[symi][S_MODE] = M_CONSTANT then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29232 = (object)*(((s1_ptr)_2)->base + _symi_58089);
    _2 = (object)SEQ_PTR(_29232);
    _29233 = (object)*(((s1_ptr)_2)->base + 3);
    _29232 = NOVALUE;
    if (binary_op_a(NOTEQ, _29233, 2)){
        _29233 = NOVALUE;
        goto LE; // [346] 427
    }
    _29233 = NOVALUE;

    /** parser.e:2539							fwd = 0*/
    _fwd_58079 = 0;

    /** parser.e:2540							if SymTab[symi][S_CODE] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29235 = (object)*(((s1_ptr)_2)->base + _symi_58089);
    _2 = (object)SEQ_PTR(_29235);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _29236 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _29236 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _29235 = NOVALUE;
    if (_29236 == 0) {
        _29236 = NOVALUE;
        goto LF; // [369] 393
    }
    else {
        if (!IS_ATOM_INT(_29236) && DBL_PTR(_29236)->dbl == 0.0){
            _29236 = NOVALUE;
            goto LF; // [369] 393
        }
        _29236 = NOVALUE;
    }
    _29236 = NOVALUE;

    /** parser.e:2541								tok[T_SYM] = SymTab[symi][S_CODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29237 = (object)*(((s1_ptr)_2)->base + _symi_58089);
    _2 = (object)SEQ_PTR(_29237);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _29238 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _29238 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _29237 = NOVALUE;
    Ref(_29238);
    _2 = (object)SEQ_PTR(_tok_58024);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_58024 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29238;
    if( _1 != _29238 ){
        DeRef(_1);
    }
    _29238 = NOVALUE;
LF: 

    /** parser.e:2543							SymTab[symi][S_USAGE] = or_bits( SymTab[symi][S_USAGE], U_READ )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_symi_58089 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29241 = (object)*(((s1_ptr)_2)->base + _symi_58089);
    _2 = (object)SEQ_PTR(_29241);
    _29242 = (object)*(((s1_ptr)_2)->base + 5);
    _29241 = NOVALUE;
    if (IS_ATOM_INT(_29242)) {
        {uintptr_t tu;
             tu = (uintptr_t)_29242 | (uintptr_t)1;
             _29243 = MAKE_UINT(tu);
        }
    }
    else {
        _29243 = binary_op(OR_BITS, _29242, 1);
    }
    _29242 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29243;
    if( _1 != _29243 ){
        DeRef(_1);
    }
    _29243 = NOVALUE;
    _29239 = NOVALUE;
LE: 
LD: 
LB: 
LA: 
    goto L10; // [432] 441
L9: 

    /** parser.e:2548				fwd = 0*/
    _fwd_58079 = 0;
L10: 

    /** parser.e:2551			if fwd < 0 then*/
    if (_fwd_58079 >= 0)
    goto L11; // [445] 471

    /** parser.e:2552				CompileErr( 91, {find_category(tok[T_ID])})*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29245 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_29245);
    _29246 = _64find_category(_29245);
    _29245 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _29246;
    _29247 = MAKE_SEQ(_1);
    _29246 = NOVALUE;
    _52CompileErr(91, _29247, 0);
    _29247 = NOVALUE;
L11: 

    /** parser.e:2555			if tok[T_ID] = ELSE then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29248 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29248, 23)){
        _29248 = NOVALUE;
        goto L12; // [481] 542
    }
    _29248 = NOVALUE;

    /** parser.e:2556				if sign = -1 then*/
    if (_sign_58066 != -1)
    goto L13; // [487] 499

    /** parser.e:2557					CompileErr( 71 )*/
    RefDS(_21928);
    _52CompileErr(71, _21928, 0);
L13: 

    /** parser.e:2559				if length(switch_stack[$][SWITCH_CASES]) = 0 then*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29251 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29251 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29252 = (object)*(((s1_ptr)_2)->base + _29251);
    _2 = (object)SEQ_PTR(_29252);
    _29253 = (object)*(((s1_ptr)_2)->base + 1);
    _29252 = NOVALUE;
    if (IS_SEQUENCE(_29253)){
            _29254 = SEQ_PTR(_29253)->length;
    }
    else {
        _29254 = 1;
    }
    _29253 = NOVALUE;
    if (_29254 != 0)
    goto L14; // [517] 529

    /** parser.e:2560					CompileErr( 44 )*/
    RefDS(_21928);
    _52CompileErr(44, _21928, 0);
L14: 

    /** parser.e:2562				case_else()*/
    _42case_else();

    /** parser.e:2563				exit*/
    goto L15; // [537] 777
    goto L16; // [539] 613
L12: 

    /** parser.e:2565			elsif fwd then*/
    if (_fwd_58079 == 0)
    {
        goto L17; // [544] 596
    }
    else{
    }

    /** parser.e:2566				integer fwdref = new_forward_reference( CASE, fwd )*/
    DeRef(_31677);
    _31677 = 186;
    _fwdref_58158 = _41new_forward_reference(186, _fwd_58079, 186);
    _31677 = NOVALUE;
    if (!IS_ATOM_INT(_fwdref_58158)) {
        _1 = (object)(DBL_PTR(_fwdref_58158)->dbl);
        DeRefDS(_fwdref_58158);
        _fwdref_58158 = _1;
    }

    /** parser.e:2567				add_case( {fwdref}, sign )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _fwdref_58158;
    _29257 = MAKE_SEQ(_1);
    _42add_case(_29257, _sign_58066);
    _29257 = NOVALUE;

    /** parser.e:2568				fwd:set_data( fwdref, switch_stack[$][SWITCH_PC] )*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29258 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29258 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29259 = (object)*(((s1_ptr)_2)->base + _29258);
    _2 = (object)SEQ_PTR(_29259);
    _29260 = (object)*(((s1_ptr)_2)->base + 4);
    _29259 = NOVALUE;
    Ref(_29260);
    _41set_data(_fwdref_58158, _29260);
    _29260 = NOVALUE;
    goto L16; // [593] 613
L17: 

    /** parser.e:2571				condition = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _condition_58026 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_condition_58026)){
        _condition_58026 = (object)DBL_PTR(_condition_58026)->dbl;
    }

    /** parser.e:2572				add_case( condition, sign )*/
    _42add_case(_condition_58026, _sign_58066);
L16: 

    /** parser.e:2575			tok = next_token()*/
    _0 = _tok_58024;
    _tok_58024 = _42next_token();
    DeRef(_0);

    /** parser.e:2576			if tok[T_ID] = THEN then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29263 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29263, 410)){
        _29263 = NOVALUE;
        goto L18; // [628] 732
    }
    _29263 = NOVALUE;

    /** parser.e:2577				tok = next_token()*/
    _0 = _tok_58024;
    _tok_58024 = _42next_token();
    DeRef(_0);

    /** parser.e:2579				if tok[T_ID] = CASE then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29266 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29266, 186)){
        _29266 = NOVALUE;
        goto L19; // [647] 717
    }
    _29266 = NOVALUE;

    /** parser.e:2580					if switch_stack[$][SWITCH_FALLTHRU] then*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29268 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29268 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29269 = (object)*(((s1_ptr)_2)->base + _29268);
    _2 = (object)SEQ_PTR(_29269);
    _29270 = (object)*(((s1_ptr)_2)->base + 5);
    _29269 = NOVALUE;
    if (_29270 == 0) {
        _29270 = NOVALUE;
        goto L1A; // [666] 681
    }
    else {
        if (!IS_ATOM_INT(_29270) && DBL_PTR(_29270)->dbl == 0.0){
            _29270 = NOVALUE;
            goto L1A; // [666] 681
        }
        _29270 = NOVALUE;
    }
    _29270 = NOVALUE;

    /** parser.e:2581						start_line = line_number*/
    _start_line_58055 = _39line_number_16816;
    goto L1B; // [678] 770
L1A: 

    /** parser.e:2583						putback( tok )*/
    Ref(_tok_58024);
    _42putback(_tok_58024);

    /** parser.e:2584						Warning(220, empty_case_warning_flag,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _29271 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    Ref(_29271);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _29271;
    ((intptr_t *)_2)[2] = _start_line_58055;
    _29272 = MAKE_SEQ(_1);
    _29271 = NOVALUE;
    _52Warning(220, 2048, _29272);
    _29272 = NOVALUE;

    /** parser.e:2586						exit*/
    goto L15; // [711] 777
    goto L1B; // [714] 770
L19: 

    /** parser.e:2589					putback( tok )*/
    Ref(_tok_58024);
    _42putback(_tok_58024);

    /** parser.e:2590					exit*/
    goto L15; // [726] 777
    goto L1B; // [729] 770
L18: 

    /** parser.e:2593			elsif tok[T_ID] != COMMA then*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29273 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _29273, -30)){
        _29273 = NOVALUE;
        goto L1C; // [742] 769
    }
    _29273 = NOVALUE;

    /** parser.e:2594				CompileErr(66,{LexName(tok[T_ID])})*/
    _2 = (object)SEQ_PTR(_tok_58024);
    _29275 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_29275);
    RefDS(_26260);
    _29276 = _49LexName(_29275, _26260);
    _29275 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _29276;
    _29277 = MAKE_SEQ(_1);
    _29276 = NOVALUE;
    _52CompileErr(66, _29277, 0);
    _29277 = NOVALUE;
L1C: 
L1B: 

    /** parser.e:2597		end while*/
    goto L4; // [774] 140
L15: 

    /** parser.e:2598		StartSourceLine( TRUE )*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:2599		emit_temp( switch_stack[$][SWITCH_VALUE], NEW_REFERENCE )*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29278 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29278 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29279 = (object)*(((s1_ptr)_2)->base + _29278);
    _2 = (object)SEQ_PTR(_29279);
    _29280 = (object)*(((s1_ptr)_2)->base + 6);
    _29279 = NOVALUE;
    Ref(_29280);
    _49emit_temp(_29280, 1);
    _29280 = NOVALUE;

    /** parser.e:2600		flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:2601	end procedure*/
    DeRef(_tok_58024);
    DeRef(_29209);
    _29209 = NOVALUE;
    _29203 = NOVALUE;
    _29253 = NOVALUE;
    return;
    ;
}


void _42Fallthru_statement()
{
    object _29281 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2604		if not in_switch() then*/
    _29281 = _42in_switch();
    if (IS_ATOM_INT(_29281)) {
        if (_29281 != 0){
            DeRef(_29281);
            _29281 = NOVALUE;
            goto L1; // [6] 17
        }
    }
    else {
        if (DBL_PTR(_29281)->dbl != 0.0){
            DeRef(_29281);
            _29281 = NOVALUE;
            goto L1; // [6] 17
        }
    }
    DeRef(_29281);
    _29281 = NOVALUE;

    /** parser.e:2605			CompileErr( 22 )*/
    RefDS(_21928);
    _52CompileErr(22, _21928, 0);
L1: 

    /** parser.e:2607		tok_match( CASE )*/
    _42tok_match(186, 0);

    /** parser.e:2608		fallthru_case = 1*/
    _42fallthru_case_58020 = 1;

    /** parser.e:2609		Case_statement()*/
    _42Case_statement();

    /** parser.e:2610	end procedure*/
    return;
    ;
}


void _42update_translator_info(object _sym_58224, object _all_ints_58225, object _has_integer_58226, object _has_atom_58227, object _has_sequence_58228)
{
    object _29306 = NOVALUE;
    object _29304 = NOVALUE;
    object _29302 = NOVALUE;
    object _29300 = NOVALUE;
    object _29298 = NOVALUE;
    object _29297 = NOVALUE;
    object _29295 = NOVALUE;
    object _29293 = NOVALUE;
    object _29292 = NOVALUE;
    object _29291 = NOVALUE;
    object _29290 = NOVALUE;
    object _29289 = NOVALUE;
    object _29287 = NOVALUE;
    object _29285 = NOVALUE;
    object _29283 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2615		SymTab[sym][S_MODE] = M_TEMP    -- override CONSTANT for compile*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _29283 = NOVALUE;

    /** parser.e:2616		SymTab[sym][S_GTYPE] = TYPE_SEQUENCE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    _29285 = NOVALUE;

    /** parser.e:2617		SymTab[sym][S_SEQ_LEN] = length( SymTab[sym][S_OBJ] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29289 = (object)*(((s1_ptr)_2)->base + _sym_58224);
    _2 = (object)SEQ_PTR(_29289);
    _29290 = (object)*(((s1_ptr)_2)->base + 1);
    _29289 = NOVALUE;
    if (IS_SEQUENCE(_29290)){
            _29291 = SEQ_PTR(_29290)->length;
    }
    else {
        _29291 = 1;
    }
    _29290 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29291;
    if( _1 != _29291 ){
        DeRef(_1);
    }
    _29291 = NOVALUE;
    _29287 = NOVALUE;

    /** parser.e:2619		if SymTab[sym][S_SEQ_LEN] > 0 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29292 = (object)*(((s1_ptr)_2)->base + _sym_58224);
    _2 = (object)SEQ_PTR(_29292);
    _29293 = (object)*(((s1_ptr)_2)->base + 32);
    _29292 = NOVALUE;
    if (binary_op_a(LESSEQ, _29293, 0)){
        _29293 = NOVALUE;
        goto L1; // [89] 198
    }
    _29293 = NOVALUE;

    /** parser.e:2620			if all_ints then*/
    if (_all_ints_58225 == 0)
    {
        goto L2; // [95] 118
    }
    else{
    }

    /** parser.e:2621				SymTab[sym][S_SEQ_ELEM] = TYPE_INTEGER*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _29295 = NOVALUE;
    goto L3; // [115] 216
L2: 

    /** parser.e:2623			elsif has_atom + has_sequence + has_integer > 1 then*/
    _29297 = _has_atom_58227 + _has_sequence_58228;
    if ((object)((uintptr_t)_29297 + (uintptr_t)HIGH_BITS) >= 0){
        _29297 = NewDouble((eudouble)_29297);
    }
    if (IS_ATOM_INT(_29297)) {
        _29298 = _29297 + _has_integer_58226;
        if ((object)((uintptr_t)_29298 + (uintptr_t)HIGH_BITS) >= 0){
            _29298 = NewDouble((eudouble)_29298);
        }
    }
    else {
        _29298 = NewDouble(DBL_PTR(_29297)->dbl + (eudouble)_has_integer_58226);
    }
    DeRef(_29297);
    _29297 = NOVALUE;
    if (binary_op_a(LESSEQ, _29298, 1)){
        DeRef(_29298);
        _29298 = NOVALUE;
        goto L4; // [128] 152
    }
    DeRef(_29298);
    _29298 = NOVALUE;

    /** parser.e:2624				SymTab[sym][S_SEQ_ELEM] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _29300 = NOVALUE;
    goto L3; // [149] 216
L4: 

    /** parser.e:2626			elsif has_atom then*/
    if (_has_atom_58227 == 0)
    {
        goto L5; // [154] 177
    }
    else{
    }

    /** parser.e:2627				SymTab[sym][S_SEQ_ELEM] = TYPE_ATOM*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    _29302 = NOVALUE;
    goto L3; // [174] 216
L5: 

    /** parser.e:2630				SymTab[sym][S_SEQ_ELEM] = TYPE_SEQUENCE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    _29304 = NOVALUE;
    goto L3; // [195] 216
L1: 

    /** parser.e:2634			SymTab[sym][S_SEQ_ELEM] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_58224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _29306 = NOVALUE;
L3: 

    /** parser.e:2636	end procedure*/
    _29290 = NOVALUE;
    return;
    ;
}


void _42optimize_switch(object _switch_pc_58289, object _else_bp_58290, object _cases_58291, object _jump_table_58292)
{
    object _values_58293 = NOVALUE;
    object _min_58297 = NOVALUE;
    object _max_58299 = NOVALUE;
    object _all_ints_58301 = NOVALUE;
    object _has_integer_58302 = NOVALUE;
    object _has_atom_58303 = NOVALUE;
    object _has_sequence_58304 = NOVALUE;
    object _has_unassigned_58305 = NOVALUE;
    object _has_fwdref_58306 = NOVALUE;
    object _unique_values_58307 = NOVALUE;
    object _unique_jumps_58309 = NOVALUE;
    object _new_1__tmp_at74_58312 = NOVALUE;
    object _new_inlined_new_at_74_58311 = NOVALUE;
    object _jump_58313 = NOVALUE;
    object _jump_offset_58317 = NOVALUE;
    object _sym_58324 = NOVALUE;
    object _sign_58326 = NOVALUE;
    object _value_i_58339 = NOVALUE;
    object _v_58363 = NOVALUE;
    object _else_target_58449 = NOVALUE;
    object _opcode_58452 = NOVALUE;
    object _delta_58458 = NOVALUE;
    object _switch_table_58468 = NOVALUE;
    object _offset_58471 = NOVALUE;
    object _29420 = NOVALUE;
    object _29419 = NOVALUE;
    object _29418 = NOVALUE;
    object _29417 = NOVALUE;
    object _29415 = NOVALUE;
    object _29413 = NOVALUE;
    object _29410 = NOVALUE;
    object _29409 = NOVALUE;
    object _29408 = NOVALUE;
    object _29407 = NOVALUE;
    object _29406 = NOVALUE;
    object _29405 = NOVALUE;
    object _29404 = NOVALUE;
    object _29401 = NOVALUE;
    object _29400 = NOVALUE;
    object _29399 = NOVALUE;
    object _29398 = NOVALUE;
    object _29397 = NOVALUE;
    object _29396 = NOVALUE;
    object _29392 = NOVALUE;
    object _29391 = NOVALUE;
    object _29389 = NOVALUE;
    object _29388 = NOVALUE;
    object _29387 = NOVALUE;
    object _29386 = NOVALUE;
    object _29385 = NOVALUE;
    object _29384 = NOVALUE;
    object _29383 = NOVALUE;
    object _29382 = NOVALUE;
    object _29381 = NOVALUE;
    object _29380 = NOVALUE;
    object _29378 = NOVALUE;
    object _29377 = NOVALUE;
    object _29373 = NOVALUE;
    object _29371 = NOVALUE;
    object _29370 = NOVALUE;
    object _29369 = NOVALUE;
    object _29367 = NOVALUE;
    object _29364 = NOVALUE;
    object _29363 = NOVALUE;
    object _29362 = NOVALUE;
    object _29360 = NOVALUE;
    object _29359 = NOVALUE;
    object _29358 = NOVALUE;
    object _29356 = NOVALUE;
    object _29355 = NOVALUE;
    object _29354 = NOVALUE;
    object _29352 = NOVALUE;
    object _29351 = NOVALUE;
    object _29350 = NOVALUE;
    object _29348 = NOVALUE;
    object _29345 = NOVALUE;
    object _29344 = NOVALUE;
    object _29343 = NOVALUE;
    object _29342 = NOVALUE;
    object _29341 = NOVALUE;
    object _29340 = NOVALUE;
    object _29339 = NOVALUE;
    object _29338 = NOVALUE;
    object _29337 = NOVALUE;
    object _29336 = NOVALUE;
    object _29335 = NOVALUE;
    object _29334 = NOVALUE;
    object _29331 = NOVALUE;
    object _29330 = NOVALUE;
    object _29329 = NOVALUE;
    object _29327 = NOVALUE;
    object _29326 = NOVALUE;
    object _29324 = NOVALUE;
    object _29323 = NOVALUE;
    object _29322 = NOVALUE;
    object _29318 = NOVALUE;
    object _29317 = NOVALUE;
    object _29316 = NOVALUE;
    object _29314 = NOVALUE;
    object _29313 = NOVALUE;
    object _29309 = NOVALUE;
    object _29308 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2641		sequence values = switch_stack[$][SWITCH_CASES]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29308 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29308 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29309 = (object)*(((s1_ptr)_2)->base + _29308);
    DeRef(_values_58293);
    _2 = (object)SEQ_PTR(_29309);
    _values_58293 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_values_58293);
    _29309 = NOVALUE;

    /** parser.e:2642		atom min =  1e+300*/
    RefDS(_29311);
    DeRef(_min_58297);
    _min_58297 = _29311;

    /** parser.e:2643		atom max = -1e+300*/
    RefDS(_29312);
    DeRef(_max_58299);
    _max_58299 = _29312;

    /** parser.e:2644		integer all_ints = 1*/
    _all_ints_58301 = 1;

    /** parser.e:2645		integer has_integer    = 0*/
    _has_integer_58302 = 0;

    /** parser.e:2646		integer has_atom       = 0*/
    _has_atom_58303 = 0;

    /** parser.e:2647		integer has_sequence   = 0*/
    _has_sequence_58304 = 0;

    /** parser.e:2648		integer has_unassigned = 0*/
    _has_unassigned_58305 = 0;

    /** parser.e:2649		integer has_fwdref     = 0*/
    _has_fwdref_58306 = 0;

    /** parser.e:2650		sequence unique_values = {}*/
    RefDS(_21928);
    DeRef(_unique_values_58307);
    _unique_values_58307 = _21928;

    /** parser.e:2651		map unique_jumps = map:new()*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at74_58312;
    _new_1__tmp_at74_58312 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at74_58312);
    _0 = _unique_jumps_58309;
    _unique_jumps_58309 = _31malloc(_new_1__tmp_at74_58312, 1);
    DeRef(_0);
    DeRef(_new_1__tmp_at74_58312);
    _new_1__tmp_at74_58312 = NOVALUE;

    /** parser.e:2653		sequence jump = switch_stack[$][SWITCH_JUMP_TABLE]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29313 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29313 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29314 = (object)*(((s1_ptr)_2)->base + _29313);
    DeRef(_jump_58313);
    _2 = (object)SEQ_PTR(_29314);
    _jump_58313 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_jump_58313);
    _29314 = NOVALUE;

    /** parser.e:2654		integer jump_offset = 0*/
    _jump_offset_58317 = 0;

    /** parser.e:2655		for i = 1 to length( values ) do*/
    if (IS_SEQUENCE(_values_58293)){
            _29316 = SEQ_PTR(_values_58293)->length;
    }
    else {
        _29316 = 1;
    }
    {
        object _i_58319;
        _i_58319 = 1;
L1: 
        if (_i_58319 > _29316){
            goto L2; // [116] 586
        }

        /** parser.e:2656			if sequence( values[i] ) then*/
        _2 = (object)SEQ_PTR(_values_58293);
        _29317 = (object)*(((s1_ptr)_2)->base + _i_58319);
        _29318 = IS_SEQUENCE(_29317);
        _29317 = NOVALUE;
        if (_29318 == 0)
        {
            _29318 = NOVALUE;
            goto L3; // [132] 145
        }
        else{
            _29318 = NOVALUE;
        }

        /** parser.e:2657				has_fwdref = 1*/
        _has_fwdref_58306 = 1;

        /** parser.e:2658				exit*/
        goto L2; // [142] 586
L3: 

        /** parser.e:2660			integer sym = values[i]*/
        _2 = (object)SEQ_PTR(_values_58293);
        _sym_58324 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (!IS_ATOM_INT(_sym_58324))
        _sym_58324 = (object)DBL_PTR(_sym_58324)->dbl;

        /** parser.e:2661			integer sign*/

        /** parser.e:2663			if sym < 0 then*/
        if (_sym_58324 >= 0)
        goto L4; // [155] 174

        /** parser.e:2664				sign = -1*/
        _sign_58326 = -1;

        /** parser.e:2665				sym = -sym*/
        _sym_58324 = - _sym_58324;
        goto L5; // [171] 180
L4: 

        /** parser.e:2667				sign = 1*/
        _sign_58326 = 1;
L5: 

        /** parser.e:2669			if not equal(SymTab[sym][S_OBJ], NOVALUE) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _29322 = (object)*(((s1_ptr)_2)->base + _sym_58324);
        _2 = (object)SEQ_PTR(_29322);
        _29323 = (object)*(((s1_ptr)_2)->base + 1);
        _29322 = NOVALUE;
        if (_29323 == _39NOVALUE_16670)
        _29324 = 1;
        else if (IS_ATOM_INT(_29323) && IS_ATOM_INT(_39NOVALUE_16670))
        _29324 = 0;
        else
        _29324 = (compare(_29323, _39NOVALUE_16670) == 0);
        _29323 = NOVALUE;
        if (_29324 != 0)
        goto L6; // [200] 565
        _29324 = NOVALUE;

        /** parser.e:2670				object value_i = sign * SymTab[sym][S_OBJ]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _29326 = (object)*(((s1_ptr)_2)->base + _sym_58324);
        _2 = (object)SEQ_PTR(_29326);
        _29327 = (object)*(((s1_ptr)_2)->base + 1);
        _29326 = NOVALUE;
        DeRef(_value_i_58339);
        if (IS_ATOM_INT(_29327)) {
            if (_sign_58326 == (short)_sign_58326 && _29327 <= INT15 && _29327 >= -INT15){
                _value_i_58339 = _sign_58326 * _29327;
            }
            else{
                _value_i_58339 = NewDouble(_sign_58326 * (eudouble)_29327);
            }
        }
        else {
            _value_i_58339 = binary_op(MULTIPLY, _sign_58326, _29327);
        }
        _29327 = NOVALUE;

        /** parser.e:2671				values[i] = value_i*/
        Ref(_value_i_58339);
        _2 = (object)SEQ_PTR(_values_58293);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _values_58293 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_58319);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _value_i_58339;
        DeRef(_1);

        /** parser.e:2672				if TRANSLATE then*/
        if (_39TRANSLATE_16440 == 0)
        {
            goto L7; // [233] 274
        }
        else{
        }

        /** parser.e:2673					if Code[jump[i]-2] = CASE then*/
        _2 = (object)SEQ_PTR(_jump_58313);
        _29329 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (IS_ATOM_INT(_29329)) {
            _29330 = _29329 - 2;
        }
        else {
            _29330 = binary_op(MINUS, _29329, 2);
        }
        _29329 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        if (!IS_ATOM_INT(_29330)){
            _29331 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_29330)->dbl));
        }
        else{
            _29331 = (object)*(((s1_ptr)_2)->base + _29330);
        }
        if (binary_op_a(NOTEQ, _29331, 186)){
            _29331 = NOVALUE;
            goto L8; // [254] 267
        }
        _29331 = NOVALUE;

        /** parser.e:2674						jump_offset -=2*/
        _jump_offset_58317 = _jump_offset_58317 - 2;
        goto L9; // [264] 273
L8: 

        /** parser.e:2676						jump_offset = 0*/
        _jump_offset_58317 = 0;
L9: 
L7: 

        /** parser.e:2680				if find( value_i, map:get( unique_jumps, jump[i] + jump_offset, {}) ) then*/
        _2 = (object)SEQ_PTR(_jump_58313);
        _29334 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (IS_ATOM_INT(_29334)) {
            _29335 = _29334 + _jump_offset_58317;
            if ((object)((uintptr_t)_29335 + (uintptr_t)HIGH_BITS) >= 0){
                _29335 = NewDouble((eudouble)_29335);
            }
        }
        else {
            _29335 = binary_op(PLUS, _29334, _jump_offset_58317);
        }
        _29334 = NOVALUE;
        Ref(_unique_jumps_58309);
        RefDS(_21928);
        _29336 = _30get(_unique_jumps_58309, _29335, _21928);
        _29335 = NOVALUE;
        _29337 = find_from(_value_i_58339, _29336, 1);
        DeRef(_29336);
        _29336 = NOVALUE;
        if (_29337 == 0)
        {
            _29337 = NOVALUE;
            goto LA; // [295] 301
        }
        else{
            _29337 = NOVALUE;
        }
        goto LB; // [298] 560
LA: 

        /** parser.e:2683				elsif find( value_i, unique_values ) then*/
        _29338 = find_from(_value_i_58339, _unique_values_58307, 1);
        if (_29338 == 0)
        {
            _29338 = NOVALUE;
            goto LC; // [308] 467
        }
        else{
            _29338 = NOVALUE;
        }

        /** parser.e:2686					object v = ""*/
        RefDS(_21928);
        DeRef(_v_58363);
        _v_58363 = _21928;

        /** parser.e:2687					if length( SymTab[sym] ) > S_NAME and sequence( sym_name( sym ) ) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _29339 = (object)*(((s1_ptr)_2)->base + _sym_58324);
        if (IS_SEQUENCE(_29339)){
                _29340 = SEQ_PTR(_29339)->length;
        }
        else {
            _29340 = 1;
        }
        _29339 = NOVALUE;
        if (IS_ATOM_INT(_39S_NAME_16470)) {
            _29341 = (_29340 > _39S_NAME_16470);
        }
        else {
            _29341 = binary_op(GREATER, _29340, _39S_NAME_16470);
        }
        _29340 = NOVALUE;
        if (IS_ATOM_INT(_29341)) {
            if (_29341 == 0) {
                goto LD; // [333] 359
            }
        }
        else {
            if (DBL_PTR(_29341)->dbl == 0.0) {
                goto LD; // [333] 359
            }
        }
        _29343 = _56sym_name(_sym_58324);
        _29344 = IS_SEQUENCE(_29343);
        DeRef(_29343);
        _29343 = NOVALUE;
        if (_29344 == 0)
        {
            _29344 = NOVALUE;
            goto LD; // [345] 359
        }
        else{
            _29344 = NOVALUE;
        }

        /** parser.e:2688						v = sym_name( sym ) & " = " */
        _29345 = _56sym_name(_sym_58324);
        if (IS_SEQUENCE(_29345) && IS_ATOM(_29346)) {
        }
        else if (IS_ATOM(_29345) && IS_SEQUENCE(_29346)) {
            Ref(_29345);
            Prepend(&_v_58363, _29346, _29345);
        }
        else {
            Concat((object_ptr)&_v_58363, _29345, _29346);
            DeRef(_29345);
            _29345 = NOVALUE;
        }
        DeRef(_29345);
        _29345 = NOVALUE;
LD: 

        /** parser.e:2691					v &= sprint( value_i )*/
        Ref(_value_i_58339);
        _29348 = _13sprint(_value_i_58339);
        if (IS_SEQUENCE(_v_58363) && IS_ATOM(_29348)) {
            Ref(_29348);
            Append(&_v_58363, _v_58363, _29348);
        }
        else if (IS_ATOM(_v_58363) && IS_SEQUENCE(_29348)) {
            Ref(_v_58363);
            Prepend(&_v_58363, _29348, _v_58363);
        }
        else {
            Concat((object_ptr)&_v_58363, _v_58363, _29348);
        }
        DeRef(_29348);
        _29348 = NOVALUE;

        /** parser.e:2692					ThisLine        = switch_stack[$][SWITCH_THISLINE][i]*/
        if (IS_SEQUENCE(_42switch_stack_54612)){
                _29350 = SEQ_PTR(_42switch_stack_54612)->length;
        }
        else {
            _29350 = 1;
        }
        _2 = (object)SEQ_PTR(_42switch_stack_54612);
        _29351 = (object)*(((s1_ptr)_2)->base + _29350);
        _2 = (object)SEQ_PTR(_29351);
        _29352 = (object)*(((s1_ptr)_2)->base + 10);
        _29351 = NOVALUE;
        DeRef(_52ThisLine_48710);
        _2 = (object)SEQ_PTR(_29352);
        _52ThisLine_48710 = (object)*(((s1_ptr)_2)->base + _i_58319);
        Ref(_52ThisLine_48710);
        _29352 = NOVALUE;

        /** parser.e:2693					bp              = switch_stack[$][SWITCH_BP][i]*/
        if (IS_SEQUENCE(_42switch_stack_54612)){
                _29354 = SEQ_PTR(_42switch_stack_54612)->length;
        }
        else {
            _29354 = 1;
        }
        _2 = (object)SEQ_PTR(_42switch_stack_54612);
        _29355 = (object)*(((s1_ptr)_2)->base + _29354);
        _2 = (object)SEQ_PTR(_29355);
        _29356 = (object)*(((s1_ptr)_2)->base + 11);
        _29355 = NOVALUE;
        _2 = (object)SEQ_PTR(_29356);
        _52bp_48714 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (!IS_ATOM_INT(_52bp_48714)){
            _52bp_48714 = (object)DBL_PTR(_52bp_48714)->dbl;
        }
        _29356 = NOVALUE;

        /** parser.e:2694					line_number     = switch_stack[$][SWITCH_LINE_NUMBER][i]*/
        if (IS_SEQUENCE(_42switch_stack_54612)){
                _29358 = SEQ_PTR(_42switch_stack_54612)->length;
        }
        else {
            _29358 = 1;
        }
        _2 = (object)SEQ_PTR(_42switch_stack_54612);
        _29359 = (object)*(((s1_ptr)_2)->base + _29358);
        _2 = (object)SEQ_PTR(_29359);
        _29360 = (object)*(((s1_ptr)_2)->base + 12);
        _29359 = NOVALUE;
        _2 = (object)SEQ_PTR(_29360);
        _39line_number_16816 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (!IS_ATOM_INT(_39line_number_16816)){
            _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
        }
        _29360 = NOVALUE;

        /** parser.e:2695					current_file_no = switch_stack[$][SWITCH_CURRENT_FILE_NO][i]*/
        if (IS_SEQUENCE(_42switch_stack_54612)){
                _29362 = SEQ_PTR(_42switch_stack_54612)->length;
        }
        else {
            _29362 = 1;
        }
        _2 = (object)SEQ_PTR(_42switch_stack_54612);
        _29363 = (object)*(((s1_ptr)_2)->base + _29362);
        _2 = (object)SEQ_PTR(_29363);
        _29364 = (object)*(((s1_ptr)_2)->base + 13);
        _29363 = NOVALUE;
        _2 = (object)SEQ_PTR(_29364);
        _39current_file_no_16815 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (!IS_ATOM_INT(_39current_file_no_16815)){
            _39current_file_no_16815 = (object)DBL_PTR(_39current_file_no_16815)->dbl;
        }
        _29364 = NOVALUE;

        /** parser.e:2697					CompileErr("duplicate case value used in switch: [1]", {v})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_v_58363);
        ((intptr_t*)_2)[1] = _v_58363;
        _29367 = MAKE_SEQ(_1);
        RefDS(_29366);
        _52CompileErr(_29366, _29367, 0);
        _29367 = NOVALUE;
        DeRefDS(_v_58363);
        _v_58363 = NOVALUE;
        goto LB; // [464] 560
LC: 

        /** parser.e:2700					unique_values   &= value_i*/
        if (IS_SEQUENCE(_unique_values_58307) && IS_ATOM(_value_i_58339)) {
            Ref(_value_i_58339);
            Append(&_unique_values_58307, _unique_values_58307, _value_i_58339);
        }
        else if (IS_ATOM(_unique_values_58307) && IS_SEQUENCE(_value_i_58339)) {
        }
        else {
            Concat((object_ptr)&_unique_values_58307, _unique_values_58307, _value_i_58339);
        }

        /** parser.e:2701					map:put( unique_jumps, jump[i] + jump_offset, value_i, map:APPEND )*/
        _2 = (object)SEQ_PTR(_jump_58313);
        _29369 = (object)*(((s1_ptr)_2)->base + _i_58319);
        if (IS_ATOM_INT(_29369)) {
            _29370 = _29369 + _jump_offset_58317;
            if ((object)((uintptr_t)_29370 + (uintptr_t)HIGH_BITS) >= 0){
                _29370 = NewDouble((eudouble)_29370);
            }
        }
        else {
            _29370 = binary_op(PLUS, _29369, _jump_offset_58317);
        }
        _29369 = NOVALUE;
        Ref(_unique_jumps_58309);
        Ref(_value_i_58339);
        _30put(_unique_jumps_58309, _29370, _value_i_58339, 6, 0);
        _29370 = NOVALUE;

        /** parser.e:2703					if not is_integer( value_i ) then*/
        Ref(_value_i_58339);
        _29371 = _39is_integer(_value_i_58339);
        if (IS_ATOM_INT(_29371)) {
            if (_29371 != 0){
                DeRef(_29371);
                _29371 = NOVALUE;
                goto LE; // [496] 529
            }
        }
        else {
            if (DBL_PTR(_29371)->dbl != 0.0){
                DeRef(_29371);
                _29371 = NOVALUE;
                goto LE; // [496] 529
            }
        }
        DeRef(_29371);
        _29371 = NOVALUE;

        /** parser.e:2704						all_ints = 0*/
        _all_ints_58301 = 0;

        /** parser.e:2705						if atom( value_i ) then*/
        _29373 = IS_ATOM(_value_i_58339);
        if (_29373 == 0)
        {
            _29373 = NOVALUE;
            goto LF; // [509] 520
        }
        else{
            _29373 = NOVALUE;
        }

        /** parser.e:2706							has_atom = 1*/
        _has_atom_58303 = 1;
        goto L10; // [517] 559
LF: 

        /** parser.e:2708							has_sequence = 1*/
        _has_sequence_58304 = 1;
        goto L10; // [526] 559
LE: 

        /** parser.e:2711						has_integer = 1*/
        _has_integer_58302 = 1;

        /** parser.e:2713						if value_i < min then*/
        if (binary_op_a(GREATEREQ, _value_i_58339, _min_58297)){
            goto L11; // [536] 546
        }

        /** parser.e:2714							min = value_i*/
        Ref(_value_i_58339);
        DeRef(_min_58297);
        _min_58297 = _value_i_58339;
L11: 

        /** parser.e:2717						if value_i > max then*/
        if (binary_op_a(LESSEQ, _value_i_58339, _max_58299)){
            goto L12; // [548] 558
        }

        /** parser.e:2718							max = value_i*/
        Ref(_value_i_58339);
        DeRef(_max_58299);
        _max_58299 = _value_i_58339;
L12: 
L10: 
LB: 
        DeRef(_value_i_58339);
        _value_i_58339 = NOVALUE;
        goto L13; // [562] 577
L6: 

        /** parser.e:2723				has_unassigned = 1*/
        _has_unassigned_58305 = 1;

        /** parser.e:2724				exit*/
        goto L2; // [574] 586
L13: 

        /** parser.e:2726		end for*/
        _i_58319 = _i_58319 + 1;
        goto L1; // [581] 123
L2: 
        ;
    }

    /** parser.e:2728		if has_unassigned or has_fwdref then*/
    if (_has_unassigned_58305 != 0) {
        goto L14; // [588] 597
    }
    if (_has_fwdref_58306 == 0)
    {
        goto L15; // [593] 615
    }
    else{
    }
L14: 

    /** parser.e:2729			values = switch_stack[$][SWITCH_CASES]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29377 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29377 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29378 = (object)*(((s1_ptr)_2)->base + _29377);
    DeRef(_values_58293);
    _2 = (object)SEQ_PTR(_29378);
    _values_58293 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_values_58293);
    _29378 = NOVALUE;
L15: 

    /** parser.e:2732		if switch_stack[$][SWITCH_ELSE] then*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29380 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29380 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29381 = (object)*(((s1_ptr)_2)->base + _29380);
    _2 = (object)SEQ_PTR(_29381);
    _29382 = (object)*(((s1_ptr)_2)->base + 3);
    _29381 = NOVALUE;
    if (_29382 == 0) {
        _29382 = NOVALUE;
        goto L16; // [630] 657
    }
    else {
        if (!IS_ATOM_INT(_29382) && DBL_PTR(_29382)->dbl == 0.0){
            _29382 = NOVALUE;
            goto L16; // [630] 657
        }
        _29382 = NOVALUE;
    }
    _29382 = NOVALUE;

    /** parser.e:2733				Code[else_bp] = switch_stack[$][SWITCH_ELSE]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29383 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29383 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29384 = (object)*(((s1_ptr)_2)->base + _29383);
    _2 = (object)SEQ_PTR(_29384);
    _29385 = (object)*(((s1_ptr)_2)->base + 3);
    _29384 = NOVALUE;
    Ref(_29385);
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _else_bp_58290);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29385;
    if( _1 != _29385 ){
        DeRef(_1);
    }
    _29385 = NOVALUE;
    goto L17; // [654] 681
L16: 

    /** parser.e:2736			Code[else_bp] = length(Code) + 1 + TRANSLATE*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29386 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29386 = 1;
    }
    _29387 = _29386 + 1;
    _29386 = NOVALUE;
    _29388 = _29387 + _39TRANSLATE_16440;
    _29387 = NOVALUE;
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _else_bp_58290);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29388;
    if( _1 != _29388 ){
        DeRef(_1);
    }
    _29388 = NOVALUE;
L17: 

    /** parser.e:2739		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L18; // [685] 712
    }
    else{
    }

    /** parser.e:2744			SymTab[cases][S_OBJ] &= 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_cases_58291 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _29391 = (object)*(((s1_ptr)_2)->base + 1);
    _29389 = NOVALUE;
    if (IS_SEQUENCE(_29391) && IS_ATOM(0)) {
        Append(&_29392, _29391, 0);
    }
    else if (IS_ATOM(_29391) && IS_SEQUENCE(0)) {
    }
    else {
        Concat((object_ptr)&_29392, _29391, 0);
        _29391 = NOVALUE;
    }
    _29391 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29392;
    if( _1 != _29392 ){
        DeRef(_1);
    }
    _29392 = NOVALUE;
    _29389 = NOVALUE;
L18: 

    /** parser.e:2748		integer else_target = Code[else_bp]*/
    _2 = (object)SEQ_PTR(_39Code_16903);
    _else_target_58449 = (object)*(((s1_ptr)_2)->base + _else_bp_58290);
    if (!IS_ATOM_INT(_else_target_58449)){
        _else_target_58449 = (object)DBL_PTR(_else_target_58449)->dbl;
    }

    /** parser.e:2749		integer opcode = SWITCH*/
    _opcode_58452 = 185;

    /** parser.e:2750		if has_unassigned or has_fwdref then*/
    if (_has_unassigned_58305 != 0) {
        goto L19; // [733] 742
    }
    if (_has_fwdref_58306 == 0)
    {
        goto L1A; // [738] 754
    }
    else{
    }
L19: 

    /** parser.e:2751			opcode = SWITCH_RT*/
    _opcode_58452 = 202;
    goto L1B; // [751] 907
L1A: 

    /** parser.e:2753		elsif all_ints then*/
    if (_all_ints_58301 == 0)
    {
        goto L1C; // [756] 904
    }
    else{
    }

    /** parser.e:2754			atom delta = max - min*/
    DeRef(_delta_58458);
    if (IS_ATOM_INT(_max_58299) && IS_ATOM_INT(_min_58297)) {
        _delta_58458 = _max_58299 - _min_58297;
        if ((object)((uintptr_t)_delta_58458 +(uintptr_t) HIGH_BITS) >= 0){
            _delta_58458 = NewDouble((eudouble)_delta_58458);
        }
    }
    else {
        if (IS_ATOM_INT(_max_58299)) {
            _delta_58458 = NewDouble((eudouble)_max_58299 - DBL_PTR(_min_58297)->dbl);
        }
        else {
            if (IS_ATOM_INT(_min_58297)) {
                _delta_58458 = NewDouble(DBL_PTR(_max_58299)->dbl - (eudouble)_min_58297);
            }
            else
            _delta_58458 = NewDouble(DBL_PTR(_max_58299)->dbl - DBL_PTR(_min_58297)->dbl);
        }
    }

    /** parser.e:2755			if not TRANSLATE and  delta < 1024 and delta >= 0 then*/
    _29396 = (_39TRANSLATE_16440 == 0);
    if (_29396 == 0) {
        _29397 = 0;
        goto L1D; // [772] 784
    }
    if (IS_ATOM_INT(_delta_58458)) {
        _29398 = (_delta_58458 < 1024);
    }
    else {
        _29398 = (DBL_PTR(_delta_58458)->dbl < (eudouble)1024);
    }
    _29397 = (_29398 != 0);
L1D: 
    if (_29397 == 0) {
        goto L1E; // [784] 893
    }
    if (IS_ATOM_INT(_delta_58458)) {
        _29400 = (_delta_58458 >= 0);
    }
    else {
        _29400 = (DBL_PTR(_delta_58458)->dbl >= (eudouble)0);
    }
    if (_29400 == 0)
    {
        DeRef(_29400);
        _29400 = NOVALUE;
        goto L1E; // [793] 893
    }
    else{
        DeRef(_29400);
        _29400 = NOVALUE;
    }

    /** parser.e:2756				opcode = SWITCH_SPI*/
    _opcode_58452 = 192;

    /** parser.e:2758				sequence switch_table = repeat( else_target, delta + 1 )*/
    if (IS_ATOM_INT(_delta_58458)) {
        _29401 = _delta_58458 + 1;
    }
    else
    _29401 = binary_op(PLUS, 1, _delta_58458);
    DeRef(_switch_table_58468);
    _switch_table_58468 = Repeat(_else_target_58449, _29401);
    DeRef(_29401);
    _29401 = NOVALUE;

    /** parser.e:2759				integer offset = min - 1*/
    if (IS_ATOM_INT(_min_58297)) {
        _offset_58471 = _min_58297 - 1;
    }
    else {
        _offset_58471 = NewDouble(DBL_PTR(_min_58297)->dbl - (eudouble)1);
    }
    if (!IS_ATOM_INT(_offset_58471)) {
        _1 = (object)(DBL_PTR(_offset_58471)->dbl);
        DeRefDS(_offset_58471);
        _offset_58471 = _1;
    }

    /** parser.e:2760				for i = 1 to length( values ) do*/
    if (IS_SEQUENCE(_values_58293)){
            _29404 = SEQ_PTR(_values_58293)->length;
    }
    else {
        _29404 = 1;
    }
    {
        object _i_58474;
        _i_58474 = 1;
L1F: 
        if (_i_58474 > _29404){
            goto L20; // [828] 860
        }

        /** parser.e:2761					switch_table[values[i] - offset] = jump[i]*/
        _2 = (object)SEQ_PTR(_values_58293);
        _29405 = (object)*(((s1_ptr)_2)->base + _i_58474);
        if (IS_ATOM_INT(_29405)) {
            _29406 = _29405 - _offset_58471;
            if ((object)((uintptr_t)_29406 +(uintptr_t) HIGH_BITS) >= 0){
                _29406 = NewDouble((eudouble)_29406);
            }
        }
        else {
            _29406 = binary_op(MINUS, _29405, _offset_58471);
        }
        _29405 = NOVALUE;
        _2 = (object)SEQ_PTR(_jump_58313);
        _29407 = (object)*(((s1_ptr)_2)->base + _i_58474);
        Ref(_29407);
        _2 = (object)SEQ_PTR(_switch_table_58468);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _switch_table_58468 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_29406))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_29406)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _29406);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _29407;
        if( _1 != _29407 ){
            DeRef(_1);
        }
        _29407 = NOVALUE;

        /** parser.e:2762				end for*/
        _i_58474 = _i_58474 + 1;
        goto L1F; // [855] 835
L20: 
        ;
    }

    /** parser.e:2763				Code[switch_pc + 2] = offset*/
    _29408 = _switch_pc_58289 + 2;
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _29408);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _offset_58471;
    DeRef(_1);

    /** parser.e:2764				switch_stack[$][SWITCH_JUMP_TABLE] = switch_table*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29409 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29409 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29409 + ((s1_ptr)_2)->base);
    RefDS(_switch_table_58468);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _switch_table_58468;
    DeRef(_1);
    _29410 = NOVALUE;
    DeRefDS(_switch_table_58468);
    _switch_table_58468 = NOVALUE;
    goto L21; // [890] 903
L1E: 

    /** parser.e:2766				opcode = SWITCH_I*/
    _opcode_58452 = 193;
L21: 
L1C: 
    DeRef(_delta_58458);
    _delta_58458 = NOVALUE;
L1B: 

    /** parser.e:2770		Code[switch_pc] = opcode*/
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _switch_pc_58289);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _opcode_58452;
    DeRef(_1);

    /** parser.e:2771		if opcode != SWITCH_SPI then*/
    if (_opcode_58452 == 192)
    goto L22; // [919] 956

    /** parser.e:2772			SymTab[cases][S_OBJ] = values*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_cases_58291 + ((s1_ptr)_2)->base);
    RefDS(_values_58293);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _values_58293;
    DeRef(_1);
    _29413 = NOVALUE;

    /** parser.e:2773			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L23; // [942] 955
    }
    else{
    }

    /** parser.e:2774				update_translator_info( cases, all_ints, has_integer, has_atom, has_sequence )*/
    _42update_translator_info(_cases_58291, _all_ints_58301, _has_integer_58302, _has_atom_58303, _has_sequence_58304);
L23: 
L22: 

    /** parser.e:2779		SymTab[jump_table][S_OBJ] = switch_stack[$][SWITCH_JUMP_TABLE] - switch_pc*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_jump_table_58292 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29417 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29417 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29418 = (object)*(((s1_ptr)_2)->base + _29417);
    _2 = (object)SEQ_PTR(_29418);
    _29419 = (object)*(((s1_ptr)_2)->base + 2);
    _29418 = NOVALUE;
    if (IS_ATOM_INT(_29419)) {
        _29420 = _29419 - _switch_pc_58289;
        if ((object)((uintptr_t)_29420 +(uintptr_t) HIGH_BITS) >= 0){
            _29420 = NewDouble((eudouble)_29420);
        }
    }
    else {
        _29420 = binary_op(MINUS, _29419, _switch_pc_58289);
    }
    _29419 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29420;
    if( _1 != _29420 ){
        DeRef(_1);
    }
    _29420 = NOVALUE;
    _29415 = NOVALUE;

    /** parser.e:2781	end procedure*/
    DeRef(_values_58293);
    DeRef(_min_58297);
    DeRef(_max_58299);
    DeRef(_unique_values_58307);
    DeRef(_unique_jumps_58309);
    DeRef(_jump_58313);
    DeRef(_29398);
    _29398 = NOVALUE;
    DeRef(_29341);
    _29341 = NOVALUE;
    DeRef(_29406);
    _29406 = NOVALUE;
    DeRef(_29396);
    _29396 = NOVALUE;
    _29339 = NOVALUE;
    DeRef(_29330);
    _29330 = NOVALUE;
    DeRef(_29408);
    _29408 = NOVALUE;
    return;
    ;
}


void _42Switch_statement()
{
    object _else_case_2__tmp_at250_58568 = NOVALUE;
    object _else_case_1__tmp_at250_58567 = NOVALUE;
    object _else_case_inlined_else_case_at_250_58566 = NOVALUE;
    object _break_base_58506 = NOVALUE;
    object _cases_58508 = NOVALUE;
    object _jump_table_58509 = NOVALUE;
    object _else_bp_58510 = NOVALUE;
    object _switch_pc_58511 = NOVALUE;
    object _t_58548 = NOVALUE;
    object _29451 = NOVALUE;
    object _29450 = NOVALUE;
    object _29449 = NOVALUE;
    object _29448 = NOVALUE;
    object _29447 = NOVALUE;
    object _29443 = NOVALUE;
    object _29439 = NOVALUE;
    object _29438 = NOVALUE;
    object _29436 = NOVALUE;
    object _29435 = NOVALUE;
    object _29433 = NOVALUE;
    object _29432 = NOVALUE;
    object _29430 = NOVALUE;
    object _29429 = NOVALUE;
    object _29428 = NOVALUE;
    object _29427 = NOVALUE;
    object _29426 = NOVALUE;
    object _29425 = NOVALUE;
    object _29423 = NOVALUE;
    object _29422 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:2786		integer else_bp*/

    /** parser.e:2787		integer switch_pc*/

    /** parser.e:2789		push_switch()*/
    _42push_switch();

    /** parser.e:2790		break_base = length(break_list)*/
    if (IS_SEQUENCE(_42break_list_54381)){
            _break_base_58506 = SEQ_PTR(_42break_list_54381)->length;
    }
    else {
        _break_base_58506 = 1;
    }

    /** parser.e:2792		Expr()*/
    _42Expr();

    /** parser.e:2793		switch_stack[$][SWITCH_VALUE] = Top()*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29422 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29422 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29422 + ((s1_ptr)_2)->base);
    _29425 = _49Top();
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29425;
    if( _1 != _29425 ){
        DeRef(_1);
    }
    _29425 = NOVALUE;
    _29423 = NOVALUE;

    /** parser.e:2794		clear_temp( switch_stack[$][SWITCH_VALUE] )*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29426 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29426 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29427 = (object)*(((s1_ptr)_2)->base + _29426);
    _2 = (object)SEQ_PTR(_29427);
    _29428 = (object)*(((s1_ptr)_2)->base + 6);
    _29427 = NOVALUE;
    Ref(_29428);
    _49clear_temp(_29428);
    _29428 = NOVALUE;

    /** parser.e:2796		cases = NewStringSym( {-1, length(SymTab) } )*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _29429 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _29429 = 1;
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _29429;
    _29430 = MAKE_SEQ(_1);
    _29429 = NOVALUE;
    _cases_58508 = _56NewStringSym(_29430);
    _29430 = NOVALUE;
    if (!IS_ATOM_INT(_cases_58508)) {
        _1 = (object)(DBL_PTR(_cases_58508)->dbl);
        DeRefDS(_cases_58508);
        _cases_58508 = _1;
    }

    /** parser.e:2798		emit_opnd( cases )*/
    _49emit_opnd(_cases_58508);

    /** parser.e:2800		jump_table = NewStringSym( {-2, length(SymTab) } )*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _29432 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _29432 = 1;
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -2;
    ((intptr_t *)_2)[2] = _29432;
    _29433 = MAKE_SEQ(_1);
    _29432 = NOVALUE;
    _jump_table_58509 = _56NewStringSym(_29433);
    _29433 = NOVALUE;
    if (!IS_ATOM_INT(_jump_table_58509)) {
        _1 = (object)(DBL_PTR(_jump_table_58509)->dbl);
        DeRefDS(_jump_table_58509);
        _jump_table_58509 = _1;
    }

    /** parser.e:2801		emit_opnd( jump_table )*/
    _49emit_opnd(_jump_table_58509);

    /** parser.e:2803		if finish_block_header(SWITCH) then end if*/
    _29435 = _42finish_block_header(185);
    if (_29435 == 0) {
        DeRef(_29435);
        _29435 = NOVALUE;
        goto L1; // [109] 113
    }
    else {
        if (!IS_ATOM_INT(_29435) && DBL_PTR(_29435)->dbl == 0.0){
            DeRef(_29435);
            _29435 = NOVALUE;
            goto L1; // [109] 113
        }
        DeRef(_29435);
        _29435 = NOVALUE;
    }
    DeRef(_29435);
    _29435 = NOVALUE;
L1: 

    /** parser.e:2805		switch_pc = length(Code) + 1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29436 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29436 = 1;
    }
    _switch_pc_58511 = _29436 + 1;
    _29436 = NOVALUE;

    /** parser.e:2806		switch_stack[$][SWITCH_PC] = switch_pc*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29438 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29438 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42switch_stack_54612 = MAKE_SEQ(_2);
    }
    _3 = (object)(_29438 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _switch_pc_58511;
    DeRef(_1);
    _29439 = NOVALUE;

    /** parser.e:2808		emit_op(SWITCH)*/
    _49emit_op(185);

    /** parser.e:2809		emit_forward_addr()  -- the else*/
    _42emit_forward_addr();

    /** parser.e:2810		else_bp = length( Code )*/
    if (IS_SEQUENCE(_39Code_16903)){
            _else_bp_58510 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _else_bp_58510 = 1;
    }

    /** parser.e:2813		t = next_token()*/
    _0 = _t_58548;
    _t_58548 = _42next_token();
    DeRef(_0);

    /** parser.e:2814		if t[T_ID] = CASE then*/
    _2 = (object)SEQ_PTR(_t_58548);
    _29443 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29443, 186)){
        _29443 = NOVALUE;
        goto L2; // [173] 188
    }
    _29443 = NOVALUE;

    /** parser.e:2816			Case_statement()*/
    _42Case_statement();

    /** parser.e:2818			Statement_list()*/
    _42Statement_list();
    goto L3; // [185] 194
L2: 

    /** parser.e:2821			putback(t)*/
    Ref(_t_58548);
    _42putback(_t_58548);
L3: 

    /** parser.e:2824		optimize_switch( switch_pc, else_bp, cases, jump_table )*/
    _42optimize_switch(_switch_pc_58511, _else_bp_58510, _cases_58508, _jump_table_58509);

    /** parser.e:2825		tok_match(END)*/
    _42tok_match(402, 0);

    /** parser.e:2826		tok_match(SWITCH, END)*/
    _42tok_match(185, 402);

    /** parser.e:2827		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L4; // [224] 235
    }
    else{
    }

    /** parser.e:2828			emit_op(NOPSWITCH)*/
    _49emit_op(187);
L4: 

    /** parser.e:2831		if not else_case() then*/

    /** parser.e:2472		return switch_stack[$][SWITCH_ELSE]*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _else_case_1__tmp_at250_58567 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _else_case_1__tmp_at250_58567 = 1;
    }
    DeRef(_else_case_2__tmp_at250_58568);
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _else_case_2__tmp_at250_58568 = (object)*(((s1_ptr)_2)->base + _else_case_1__tmp_at250_58567);
    RefDS(_else_case_2__tmp_at250_58568);
    DeRef(_else_case_inlined_else_case_at_250_58566);
    _2 = (object)SEQ_PTR(_else_case_2__tmp_at250_58568);
    _else_case_inlined_else_case_at_250_58566 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_else_case_inlined_else_case_at_250_58566);
    DeRef(_else_case_2__tmp_at250_58568);
    _else_case_2__tmp_at250_58568 = NOVALUE;
    if (IS_ATOM_INT(_else_case_inlined_else_case_at_250_58566)) {
        if (_else_case_inlined_else_case_at_250_58566 != 0){
            goto L5; // [255] 327
        }
    }
    else {
        if (DBL_PTR(_else_case_inlined_else_case_at_250_58566)->dbl != 0.0){
            goto L5; // [255] 327
        }
    }

    /** parser.e:2832			if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L6; // [262] 303

    /** parser.e:2833				StartSourceLine( TRUE, , COVERAGE_SUPPRESS )*/
    _49StartSourceLine(_9TRUE_444, 0, 1);

    /** parser.e:2834				emit_temp( switch_stack[$][SWITCH_VALUE], NEW_REFERENCE )*/
    if (IS_SEQUENCE(_42switch_stack_54612)){
            _29447 = SEQ_PTR(_42switch_stack_54612)->length;
    }
    else {
        _29447 = 1;
    }
    _2 = (object)SEQ_PTR(_42switch_stack_54612);
    _29448 = (object)*(((s1_ptr)_2)->base + _29447);
    _2 = (object)SEQ_PTR(_29448);
    _29449 = (object)*(((s1_ptr)_2)->base + 6);
    _29448 = NOVALUE;
    Ref(_29449);
    _49emit_temp(_29449, 1);
    _29449 = NOVALUE;

    /** parser.e:2835				flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);
L6: 

    /** parser.e:2838			Warning(221, no_case_else_warning_flag,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _29450 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    Ref(_29450);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _29450;
    ((intptr_t *)_2)[2] = _39line_number_16816;
    _29451 = MAKE_SEQ(_1);
    _29450 = NOVALUE;
    _52Warning(221, 4096, _29451);
    _29451 = NOVALUE;
L5: 

    /** parser.e:2841		pop_switch( break_base )*/
    _42pop_switch(_break_base_58506);

    /** parser.e:2842	end procedure*/
    DeRef(_t_58548);
    return;
    ;
}


object _42get_private_uninitialized()
{
    object _uninitialized_58591 = NOVALUE;
    object _s_58597 = NOVALUE;
    object _pu_58603 = NOVALUE;
    object _29468 = NOVALUE;
    object _29466 = NOVALUE;
    object _29465 = NOVALUE;
    object _29464 = NOVALUE;
    object _29463 = NOVALUE;
    object _29462 = NOVALUE;
    object _29461 = NOVALUE;
    object _29460 = NOVALUE;
    object _29459 = NOVALUE;
    object _29458 = NOVALUE;
    object _29457 = NOVALUE;
    object _29456 = NOVALUE;
    object _29453 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2845		sequence uninitialized = {}*/
    RefDS(_21928);
    DeRefi(_uninitialized_58591);
    _uninitialized_58591 = _21928;

    /** parser.e:2846		if CurrentSub != TopLevelSub then*/
    if (_39CurrentSub_16823 == _39TopLevelSub_16822)
    goto L1; // [14] 149

    /** parser.e:2847			symtab_pointer s = SymTab[CurrentSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29453 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_29453);
    _s_58597 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_58597)){
        _s_58597 = (object)DBL_PTR(_s_58597)->dbl;
    }
    _29453 = NOVALUE;

    /** parser.e:2848			sequence pu = { SC_PRIVATE, SC_UNDEFINED }*/
    DeRefi(_pu_58603);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 3;
    ((intptr_t *)_2)[2] = 9;
    _pu_58603 = MAKE_SEQ(_1);

    /** parser.e:2849			while s and find( SymTab[s][S_SCOPE], pu ) do*/
L2: 
    if (_s_58597 == 0) {
        goto L3; // [51] 148
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29457 = (object)*(((s1_ptr)_2)->base + _s_58597);
    _2 = (object)SEQ_PTR(_29457);
    _29458 = (object)*(((s1_ptr)_2)->base + 4);
    _29457 = NOVALUE;
    _29459 = find_from(_29458, _pu_58603, 1);
    _29458 = NOVALUE;
    if (_29459 == 0)
    {
        _29459 = NOVALUE;
        goto L3; // [73] 148
    }
    else{
        _29459 = NOVALUE;
    }

    /** parser.e:2850				if SymTab[s][S_SCOPE] = SC_PRIVATE and SymTab[s][S_INITLEVEL] = -1 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29460 = (object)*(((s1_ptr)_2)->base + _s_58597);
    _2 = (object)SEQ_PTR(_29460);
    _29461 = (object)*(((s1_ptr)_2)->base + 4);
    _29460 = NOVALUE;
    if (IS_ATOM_INT(_29461)) {
        _29462 = (_29461 == 3);
    }
    else {
        _29462 = binary_op(EQUALS, _29461, 3);
    }
    _29461 = NOVALUE;
    if (IS_ATOM_INT(_29462)) {
        if (_29462 == 0) {
            goto L4; // [96] 127
        }
    }
    else {
        if (DBL_PTR(_29462)->dbl == 0.0) {
            goto L4; // [96] 127
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29464 = (object)*(((s1_ptr)_2)->base + _s_58597);
    _2 = (object)SEQ_PTR(_29464);
    _29465 = (object)*(((s1_ptr)_2)->base + 14);
    _29464 = NOVALUE;
    if (IS_ATOM_INT(_29465)) {
        _29466 = (_29465 == -1);
    }
    else {
        _29466 = binary_op(EQUALS, _29465, -1);
    }
    _29465 = NOVALUE;
    if (_29466 == 0) {
        DeRef(_29466);
        _29466 = NOVALUE;
        goto L4; // [117] 127
    }
    else {
        if (!IS_ATOM_INT(_29466) && DBL_PTR(_29466)->dbl == 0.0){
            DeRef(_29466);
            _29466 = NOVALUE;
            goto L4; // [117] 127
        }
        DeRef(_29466);
        _29466 = NOVALUE;
    }
    DeRef(_29466);
    _29466 = NOVALUE;

    /** parser.e:2851					uninitialized &= s*/
    Append(&_uninitialized_58591, _uninitialized_58591, _s_58597);
L4: 

    /** parser.e:2853				s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29468 = (object)*(((s1_ptr)_2)->base + _s_58597);
    _2 = (object)SEQ_PTR(_29468);
    _s_58597 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_58597)){
        _s_58597 = (object)DBL_PTR(_s_58597)->dbl;
    }
    _29468 = NOVALUE;

    /** parser.e:2854			end while*/
    goto L2; // [145] 51
L3: 
L1: 
    DeRefi(_pu_58603);
    _pu_58603 = NOVALUE;

    /** parser.e:2856		return uninitialized*/
    DeRef(_29462);
    _29462 = NOVALUE;
    return _uninitialized_58591;
    ;
}


void _42While_statement()
{
    object _bp1_58634 = NOVALUE;
    object _bp2_58635 = NOVALUE;
    object _exit_base_58636 = NOVALUE;
    object _next_base_58637 = NOVALUE;
    object _uninitialized_58638 = NOVALUE;
    object _temps_58708 = NOVALUE;
    object _29504 = NOVALUE;
    object _29503 = NOVALUE;
    object _29502 = NOVALUE;
    object _29498 = NOVALUE;
    object _29497 = NOVALUE;
    object _29495 = NOVALUE;
    object _29493 = NOVALUE;
    object _29492 = NOVALUE;
    object _29491 = NOVALUE;
    object _29487 = NOVALUE;
    object _29485 = NOVALUE;
    object _29483 = NOVALUE;
    object _29477 = NOVALUE;
    object _29475 = NOVALUE;
    object _29474 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2865		sequence uninitialized = get_private_uninitialized()*/
    _0 = _uninitialized_58638;
    _uninitialized_58638 = _42get_private_uninitialized();
    DeRef(_0);

    /** parser.e:2867		entry_stack = append( entry_stack, uninitialized )*/
    RefDS(_uninitialized_58638);
    Append(&_42entry_stack_54390, _42entry_stack_54390, _uninitialized_58638);

    /** parser.e:2869		Start_block( WHILE )*/
    _66Start_block(47, 0);

    /** parser.e:2871		exit_base = length(exit_list)*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _exit_base_58636 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _exit_base_58636 = 1;
    }

    /** parser.e:2872		next_base = length(continue_list)*/
    if (IS_SEQUENCE(_42continue_list_54385)){
            _next_base_58637 = SEQ_PTR(_42continue_list_54385)->length;
    }
    else {
        _next_base_58637 = 1;
    }

    /** parser.e:2873		entry_addr &= length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29474 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29474 = 1;
    }
    _29475 = _29474 + 1;
    _29474 = NOVALUE;
    Append(&_42entry_addr_54387, _42entry_addr_54387, _29475);
    _29475 = NOVALUE;

    /** parser.e:2874		emit_op(NOP2) -- Entry_statement may patch this later*/
    _49emit_op(110);

    /** parser.e:2875		emit_addr(0)*/
    _49emit_addr(0);

    /** parser.e:2876		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [71] 82
    }
    else{
    }

    /** parser.e:2877			emit_op(NOPWHILE)*/
    _49emit_op(158);
L1: 

    /** parser.e:2879		bp1 = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29477 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29477 = 1;
    }
    _bp1_58634 = _29477 + 1;
    _29477 = NOVALUE;

    /** parser.e:2880		continue_addr &= bp1*/
    Append(&_42continue_addr_54388, _42continue_addr_54388, _bp1_58634);

    /** parser.e:2881		short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;

    /** parser.e:2882		short_circuit_B = FALSE*/
    _42short_circuit_B_54365 = _9FALSE_442;

    /** parser.e:2883		SC1_type = 0*/
    _42SC1_type_54368 = 0;

    /** parser.e:2884		Expr()*/
    _42Expr();

    /** parser.e:2885		optimized_while = FALSE*/
    _49optimized_while_50374 = _9FALSE_442;

    /** parser.e:2886		emit_op(WHILE)*/
    _49emit_op(47);

    /** parser.e:2887		short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:2888		if not optimized_while then*/
    if (_49optimized_while_50374 != 0)
    goto L2; // [153] 174

    /** parser.e:2890			bp2 = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29483 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29483 = 1;
    }
    _bp2_58635 = _29483 + 1;
    _29483 = NOVALUE;

    /** parser.e:2891			emit_forward_addr() -- will be patched*/
    _42emit_forward_addr();
    goto L3; // [171] 180
L2: 

    /** parser.e:2893			bp2 = 0*/
    _bp2_58635 = 0;
L3: 

    /** parser.e:2895		if finish_block_header(WHILE)=0 then*/
    _29485 = _42finish_block_header(47);
    if (binary_op_a(NOTEQ, _29485, 0)){
        DeRef(_29485);
        _29485 = NOVALUE;
        goto L4; // [188] 204
    }
    DeRef(_29485);
    _29485 = NOVALUE;

    /** parser.e:2896			entry_addr[$]=-1*/
    if (IS_SEQUENCE(_42entry_addr_54387)){
            _29487 = SEQ_PTR(_42entry_addr_54387)->length;
    }
    else {
        _29487 = 1;
    }
    _2 = (object)SEQ_PTR(_42entry_addr_54387);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42entry_addr_54387 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _29487);
    *(intptr_t *)_2 = -1;
L4: 

    /** parser.e:2899		loop_stack &= WHILE*/
    Append(&_42loop_stack_54397, _42loop_stack_54397, 47);

    /** parser.e:2901		exit_base = length(exit_list)*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _exit_base_58636 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _exit_base_58636 = 1;
    }

    /** parser.e:2902		if SC1_type = OR then*/
    if (_42SC1_type_54368 != 9)
    goto L5; // [227] 280

    /** parser.e:2903			backpatch(SC1_patch-3, SC1_OR_IF)*/
    _29491 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29491 +(uintptr_t) HIGH_BITS) >= 0){
        _29491 = NewDouble((eudouble)_29491);
    }
    _49backpatch(_29491, 147);
    _29491 = NOVALUE;

    /** parser.e:2904			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [249] 260
    }
    else{
    }

    /** parser.e:2905				emit_op(NOP1)*/
    _49emit_op(159);
L6: 

    /** parser.e:2907			backpatch(SC1_patch, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29492 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29492 = 1;
    }
    _29493 = _29492 + 1;
    _29492 = NOVALUE;
    _49backpatch(_42SC1_patch_54367, _29493);
    _29493 = NOVALUE;
    goto L7; // [277] 331
L5: 

    /** parser.e:2908		elsif SC1_type = AND then*/
    if (_42SC1_type_54368 != 8)
    goto L8; // [286] 330

    /** parser.e:2909			backpatch(SC1_patch-3, SC1_AND_IF)*/
    _29495 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29495 +(uintptr_t) HIGH_BITS) >= 0){
        _29495 = NewDouble((eudouble)_29495);
    }
    _49backpatch(_29495, 146);
    _29495 = NOVALUE;

    /** parser.e:2910			AppendXList(SC1_patch)*/

    /** parser.e:398		exit_list = append(exit_list, addr)*/
    Append(&_42exit_list_54383, _42exit_list_54383, _42SC1_patch_54367);

    /** parser.e:399	end procedure*/
    goto L9; // [318] 321
L9: 

    /** parser.e:2911			exit_delay &= 1*/
    Append(&_42exit_delay_54384, _42exit_delay_54384, 1);
L8: 
L7: 

    /** parser.e:2913		retry_addr &= length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29497 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29497 = 1;
    }
    _29498 = _29497 + 1;
    _29497 = NOVALUE;
    Append(&_42retry_addr_54389, _42retry_addr_54389, _29498);
    _29498 = NOVALUE;

    /** parser.e:2915		sequence temps = pop_temps()*/
    _0 = _temps_58708;
    _temps_58708 = _49pop_temps();
    DeRef(_0);

    /** parser.e:2917		push_temps( temps )*/
    RefDS(_temps_58708);
    _49push_temps(_temps_58708);

    /** parser.e:2919		Statement_list()*/
    _42Statement_list();

    /** parser.e:2920		PatchNList(next_base)*/
    _42PatchNList(_next_base_58637);

    /** parser.e:2921		tok_match(END)*/
    _42tok_match(402, 0);

    /** parser.e:2922		tok_match(WHILE, END)*/
    _42tok_match(47, 402);

    /** parser.e:2924		End_block( WHILE )*/
    _66End_block(47);

    /** parser.e:2926		StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:2927		emit_op(ENDWHILE)*/
    _49emit_op(22);

    /** parser.e:2928		emit_addr(bp1)*/
    _49emit_addr(_bp1_58634);

    /** parser.e:2929		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LA; // [419] 430
    }
    else{
    }

    /** parser.e:2930			emit_op(NOP1)*/
    _49emit_op(159);
LA: 

    /** parser.e:2932		if bp2 != 0 then*/
    if (_bp2_58635 == 0)
    goto LB; // [434] 454

    /** parser.e:2933			backpatch(bp2, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29502 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29502 = 1;
    }
    _29503 = _29502 + 1;
    _29502 = NOVALUE;
    _49backpatch(_bp2_58635, _29503);
    _29503 = NOVALUE;
LB: 

    /** parser.e:2935		exit_loop(exit_base)*/
    _42exit_loop(_exit_base_58636);

    /** parser.e:2936		entry_stack = remove( entry_stack, length( entry_stack ) )*/
    if (IS_SEQUENCE(_42entry_stack_54390)){
            _29504 = SEQ_PTR(_42entry_stack_54390)->length;
    }
    else {
        _29504 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_42entry_stack_54390);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_29504)) ? _29504 : (object)(DBL_PTR(_29504)->dbl);
        int stop = (IS_ATOM_INT(_29504)) ? _29504 : (object)(DBL_PTR(_29504)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_42entry_stack_54390), start, &_42entry_stack_54390 );
            }
            else Tail(SEQ_PTR(_42entry_stack_54390), stop+1, &_42entry_stack_54390);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_42entry_stack_54390), start, &_42entry_stack_54390);
        }
        else {
            assign_slice_seq = &assign_space;
            _42entry_stack_54390 = Remove_elements(start, stop, (SEQ_PTR(_42entry_stack_54390)->ref == 1));
        }
    }
    _29504 = NOVALUE;
    _29504 = NOVALUE;

    /** parser.e:2937		push_temps( temps )*/
    RefDS(_temps_58708);
    _49push_temps(_temps_58708);

    /** parser.e:2938	end procedure*/
    DeRef(_uninitialized_58638);
    DeRefDS(_temps_58708);
    return;
    ;
}


void _42Loop_statement()
{
    object _bp1_58738 = NOVALUE;
    object _exit_base_58739 = NOVALUE;
    object _next_base_58740 = NOVALUE;
    object _t_58742 = NOVALUE;
    object _uninitialized_58745 = NOVALUE;
    object _29528 = NOVALUE;
    object _29526 = NOVALUE;
    object _29525 = NOVALUE;
    object _29524 = NOVALUE;
    object _29518 = NOVALUE;
    object _29517 = NOVALUE;
    object _29515 = NOVALUE;
    object _29512 = NOVALUE;
    object _29511 = NOVALUE;
    object _29510 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:2946		Start_block( LOOP )*/
    _66Start_block(422, 0);

    /** parser.e:2948		sequence uninitialized = get_private_uninitialized()*/
    _0 = _uninitialized_58745;
    _uninitialized_58745 = _42get_private_uninitialized();
    DeRef(_0);

    /** parser.e:2949		entry_stack = append( entry_stack, uninitialized )*/
    RefDS(_uninitialized_58745);
    Append(&_42entry_stack_54390, _42entry_stack_54390, _uninitialized_58745);

    /** parser.e:2951		exit_base = length(exit_list)*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _exit_base_58739 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _exit_base_58739 = 1;
    }

    /** parser.e:2952		next_base = length(continue_list)*/
    if (IS_SEQUENCE(_42continue_list_54385)){
            _next_base_58740 = SEQ_PTR(_42continue_list_54385)->length;
    }
    else {
        _next_base_58740 = 1;
    }

    /** parser.e:2953		emit_op(NOP2) -- Entry_statement() may patch this*/
    _49emit_op(110);

    /** parser.e:2954		emit_addr(0)*/
    _49emit_addr(0);

    /** parser.e:2955		if finish_block_header(LOOP) then*/
    _29510 = _42finish_block_header(422);
    if (_29510 == 0) {
        DeRef(_29510);
        _29510 = NOVALUE;
        goto L1; // [58] 81
    }
    else {
        if (!IS_ATOM_INT(_29510) && DBL_PTR(_29510)->dbl == 0.0){
            DeRef(_29510);
            _29510 = NOVALUE;
            goto L1; // [58] 81
        }
        DeRef(_29510);
        _29510 = NOVALUE;
    }
    DeRef(_29510);
    _29510 = NOVALUE;

    /** parser.e:2956		    entry_addr &= length(Code)-1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29511 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29511 = 1;
    }
    _29512 = _29511 - 1;
    _29511 = NOVALUE;
    Append(&_42entry_addr_54387, _42entry_addr_54387, _29512);
    _29512 = NOVALUE;
    goto L2; // [78] 90
L1: 

    /** parser.e:2958			entry_addr &= -1*/
    Append(&_42entry_addr_54387, _42entry_addr_54387, -1);
L2: 

    /** parser.e:2962		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3; // [94] 105
    }
    else{
    }

    /** parser.e:2963			emit_op(NOP1)*/
    _49emit_op(159);
L3: 

    /** parser.e:2965		bp1 = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29515 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29515 = 1;
    }
    _bp1_58738 = _29515 + 1;
    _29515 = NOVALUE;

    /** parser.e:2966		retry_addr &= length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29517 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29517 = 1;
    }
    _29518 = _29517 + 1;
    _29517 = NOVALUE;
    Append(&_42retry_addr_54389, _42retry_addr_54389, _29518);
    _29518 = NOVALUE;

    /** parser.e:2967		continue_addr &= 0*/
    Append(&_42continue_addr_54388, _42continue_addr_54388, 0);

    /** parser.e:2968		loop_stack &= LOOP*/
    Append(&_42loop_stack_54397, _42loop_stack_54397, 422);

    /** parser.e:2970		Statement_list()*/
    _42Statement_list();

    /** parser.e:2972		End_block( LOOP )*/
    _66End_block(422);

    /** parser.e:2974		tok_match(UNTIL)*/
    _42tok_match(423, 0);

    /** parser.e:2975		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L4; // [174] 185
    }
    else{
    }

    /** parser.e:2976			emit_op(NOP1)*/
    _49emit_op(159);
L4: 

    /** parser.e:2978		PatchNList(next_base)*/
    _42PatchNList(_next_base_58740);

    /** parser.e:2979		StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:2980		short_circuit += 1*/
    _42short_circuit_54363 = _42short_circuit_54363 + 1;

    /** parser.e:2981		short_circuit_B = FALSE*/
    _42short_circuit_B_54365 = _9FALSE_442;

    /** parser.e:2982		SC1_type = 0*/
    _42SC1_type_54368 = 0;

    /** parser.e:2983		Expr()*/
    _42Expr();

    /** parser.e:2984		if SC1_type = OR then*/
    if (_42SC1_type_54368 != 9)
    goto L5; // [229] 282

    /** parser.e:2985			backpatch(SC1_patch-3, SC1_OR_IF)*/
    _29524 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29524 +(uintptr_t) HIGH_BITS) >= 0){
        _29524 = NewDouble((eudouble)_29524);
    }
    _49backpatch(_29524, 147);
    _29524 = NOVALUE;

    /** parser.e:2986			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [251] 262
    }
    else{
    }

    /** parser.e:2987			    emit_op(NOP1)  -- to get label here*/
    _49emit_op(159);
L6: 

    /** parser.e:2989			backpatch(SC1_patch, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29525 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29525 = 1;
    }
    _29526 = _29525 + 1;
    _29525 = NOVALUE;
    _49backpatch(_42SC1_patch_54367, _29526);
    _29526 = NOVALUE;
    goto L7; // [279] 308
L5: 

    /** parser.e:2990		elsif SC1_type = AND then*/
    if (_42SC1_type_54368 != 8)
    goto L8; // [288] 307

    /** parser.e:2991			backpatch(SC1_patch-3, SC1_AND_IF)*/
    _29528 = _42SC1_patch_54367 - 3;
    if ((object)((uintptr_t)_29528 +(uintptr_t) HIGH_BITS) >= 0){
        _29528 = NewDouble((eudouble)_29528);
    }
    _49backpatch(_29528, 146);
    _29528 = NOVALUE;
L8: 
L7: 

    /** parser.e:2993		short_circuit -= 1*/
    _42short_circuit_54363 = _42short_circuit_54363 - 1;

    /** parser.e:2994		emit_op(IF)*/
    _49emit_op(20);

    /** parser.e:2995		emit_addr(bp1)*/
    _49emit_addr(_bp1_58738);

    /** parser.e:2996		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L9; // [332] 343
    }
    else{
    }

    /** parser.e:2997			emit_op(NOP1)*/
    _49emit_op(159);
L9: 

    /** parser.e:2999		exit_loop(exit_base)*/
    _42exit_loop(_exit_base_58739);

    /** parser.e:3001		tok_match(END)*/
    _42tok_match(402, 0);

    /** parser.e:3002		tok_match(LOOP, END)*/
    _42tok_match(422, 402);

    /** parser.e:3004	end procedure*/
    DeRef(_uninitialized_58745);
    return;
    ;
}


void _42Ifdef_statement()
{
    object _option_58824 = NOVALUE;
    object _matched_58825 = NOVALUE;
    object _has_matched_58826 = NOVALUE;
    object _in_matched_58827 = NOVALUE;
    object _dead_ifdef_58828 = NOVALUE;
    object _in_elsedef_58829 = NOVALUE;
    object _tok_58831 = NOVALUE;
    object _keyw_58832 = NOVALUE;
    object _parser_id_58836 = NOVALUE;
    object _negate_58852 = NOVALUE;
    object _conjunction_58853 = NOVALUE;
    object _at_start_58854 = NOVALUE;
    object _prev_conj_58855 = NOVALUE;
    object _this_matched_58928 = NOVALUE;
    object _gotword_58944 = NOVALUE;
    object _gotthen_58945 = NOVALUE;
    object _if_lvl_58946 = NOVALUE;
    object _29645 = NOVALUE;
    object _29644 = NOVALUE;
    object _29640 = NOVALUE;
    object _29638 = NOVALUE;
    object _29635 = NOVALUE;
    object _29633 = NOVALUE;
    object _29632 = NOVALUE;
    object _29628 = NOVALUE;
    object _29625 = NOVALUE;
    object _29622 = NOVALUE;
    object _29618 = NOVALUE;
    object _29616 = NOVALUE;
    object _29615 = NOVALUE;
    object _29614 = NOVALUE;
    object _29613 = NOVALUE;
    object _29612 = NOVALUE;
    object _29611 = NOVALUE;
    object _29610 = NOVALUE;
    object _29606 = NOVALUE;
    object _29603 = NOVALUE;
    object _29602 = NOVALUE;
    object _29601 = NOVALUE;
    object _29597 = NOVALUE;
    object _29596 = NOVALUE;
    object _29595 = NOVALUE;
    object _29592 = NOVALUE;
    object _29589 = NOVALUE;
    object _29588 = NOVALUE;
    object _29587 = NOVALUE;
    object _29585 = NOVALUE;
    object _29574 = NOVALUE;
    object _29572 = NOVALUE;
    object _29571 = NOVALUE;
    object _29570 = NOVALUE;
    object _29569 = NOVALUE;
    object _29568 = NOVALUE;
    object _29567 = NOVALUE;
    object _29566 = NOVALUE;
    object _29563 = NOVALUE;
    object _29562 = NOVALUE;
    object _29560 = NOVALUE;
    object _29558 = NOVALUE;
    object _29557 = NOVALUE;
    object _29555 = NOVALUE;
    object _29553 = NOVALUE;
    object _29552 = NOVALUE;
    object _29550 = NOVALUE;
    object _29549 = NOVALUE;
    object _29548 = NOVALUE;
    object _29545 = NOVALUE;
    object _29543 = NOVALUE;
    object _29540 = NOVALUE;
    object _29539 = NOVALUE;
    object _29538 = NOVALUE;
    object _29536 = NOVALUE;
    object _29534 = NOVALUE;
    object _29533 = NOVALUE;
    object _29532 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:3012		integer matched = 0, has_matched = 0,  in_matched = 0, dead_ifdef = 0, in_elsedef = 0*/
    _matched_58825 = 0;
    _has_matched_58826 = 0;
    _in_matched_58827 = 0;
    _dead_ifdef_58828 = 0;
    _in_elsedef_58829 = 0;

    /** parser.e:3014		sequence keyw ="ifdef"*/
    RefDS(_26137);
    DeRefi(_keyw_58832);
    _keyw_58832 = _26137;

    /** parser.e:3016		live_ifdef += 1*/
    _42live_ifdef_58820 = _42live_ifdef_58820 + 1;

    /** parser.e:3017		ifdef_lineno &= line_number*/
    Append(&_42ifdef_lineno_58821, _42ifdef_lineno_58821, _39line_number_16816);

    /** parser.e:3019		integer parser_id*/

    /** parser.e:3020		if CurrentSub != TopLevelSub or length(if_labels) or length(loop_labels) then*/
    _29532 = (_39CurrentSub_16823 != _39TopLevelSub_16822);
    if (_29532 != 0) {
        _29533 = 1;
        goto L1; // [55] 68
    }
    if (IS_SEQUENCE(_42if_labels_54392)){
            _29534 = SEQ_PTR(_42if_labels_54392)->length;
    }
    else {
        _29534 = 1;
    }
    _29533 = (_29534 != 0);
L1: 
    if (_29533 != 0) {
        goto L2; // [68] 82
    }
    if (IS_SEQUENCE(_42loop_labels_54391)){
            _29536 = SEQ_PTR(_42loop_labels_54391)->length;
    }
    else {
        _29536 = 1;
    }
    if (_29536 == 0)
    {
        _29536 = NOVALUE;
        goto L3; // [78] 92
    }
    else{
        _29536 = NOVALUE;
    }
L2: 

    /** parser.e:3021			parser_id = forward_Statement_list*/
    _parser_id_58836 = _42forward_Statement_list_57578;
    goto L4; // [89] 100
L3: 

    /** parser.e:3023			parser_id = top_level_parser*/
    _parser_id_58836 = _42top_level_parser_58819;
L4: 

    /** parser.e:3026		while 1 label "top" do*/
L5: 

    /** parser.e:3027			if matched = 0 and in_elsedef = 0 then*/
    _29538 = (_matched_58825 == 0);
    if (_29538 == 0) {
        goto L6; // [111] 632
    }
    _29540 = (_in_elsedef_58829 == 0);
    if (_29540 == 0)
    {
        DeRef(_29540);
        _29540 = NOVALUE;
        goto L6; // [120] 632
    }
    else{
        DeRef(_29540);
        _29540 = NOVALUE;
    }

    /** parser.e:3028				integer negate = 0, conjunction = 0*/
    _negate_58852 = 0;
    _conjunction_58853 = 0;

    /** parser.e:3029				integer at_start = 1*/
    _at_start_58854 = 1;

    /** parser.e:3030				sequence prev_conj = ""*/
    RefDS(_21928);
    DeRef(_prev_conj_58855);
    _prev_conj_58855 = _21928;

    /** parser.e:3032				while 1 label "deflist" do*/
L7: 

    /** parser.e:3033					option = StringToken()*/
    RefDS(_5);
    _0 = _option_58824;
    _option_58824 = _63StringToken(_5);
    DeRef(_0);

    /** parser.e:3034					if equal(option, "then") then*/
    if (_option_58824 == _26204)
    _29543 = 1;
    else if (IS_ATOM_INT(_option_58824) && IS_ATOM_INT(_26204))
    _29543 = 0;
    else
    _29543 = (compare(_option_58824, _26204) == 0);
    if (_29543 == 0)
    {
        _29543 = NOVALUE;
        goto L8; // [162] 234
    }
    else{
        _29543 = NOVALUE;
    }

    /** parser.e:3035						if at_start = 1 then*/
    if (_at_start_58854 != 1)
    goto L9; // [167] 185

    /** parser.e:3036							CompileErr(6, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29545 = MAKE_SEQ(_1);
    _52CompileErr(6, _29545, 0);
    _29545 = NOVALUE;
    goto LA; // [182] 518
L9: 

    /** parser.e:3037						elsif conjunction = 0 then*/
    if (_conjunction_58853 != 0)
    goto LB; // [187] 219

    /** parser.e:3038							if negate = 0 then*/
    if (_negate_58852 != 0)
    goto LC; // [193] 204

    /** parser.e:3039								exit "deflist"*/
    goto LD; // [199] 606
    goto LA; // [201] 518
LC: 

    /** parser.e:3041								CompileErr(11, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29548 = MAKE_SEQ(_1);
    _52CompileErr(11, _29548, 0);
    _29548 = NOVALUE;
    goto LA; // [216] 518
LB: 

    /** parser.e:3044							CompileErr(8, {keyw, prev_conj})*/
    RefDS(_prev_conj_58855);
    RefDS(_keyw_58832);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _keyw_58832;
    ((intptr_t *)_2)[2] = _prev_conj_58855;
    _29549 = MAKE_SEQ(_1);
    _52CompileErr(8, _29549, 0);
    _29549 = NOVALUE;
    goto LA; // [231] 518
L8: 

    /** parser.e:3046					elsif equal(option, "not") then*/
    if (_option_58824 == _26165)
    _29550 = 1;
    else if (IS_ATOM_INT(_option_58824) && IS_ATOM_INT(_26165))
    _29550 = 0;
    else
    _29550 = (compare(_option_58824, _26165) == 0);
    if (_29550 == 0)
    {
        _29550 = NOVALUE;
        goto LE; // [240] 276
    }
    else{
        _29550 = NOVALUE;
    }

    /** parser.e:3047						if negate = 0 then*/
    if (_negate_58852 != 0)
    goto LF; // [245] 261

    /** parser.e:3048							negate = 1*/
    _negate_58852 = 1;

    /** parser.e:3049							continue "deflist"*/
    goto L7; // [256] 148
    goto LA; // [258] 518
LF: 

    /** parser.e:3051							CompileErr(7, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29552 = MAKE_SEQ(_1);
    _52CompileErr(7, _29552, 0);
    _29552 = NOVALUE;
    goto LA; // [273] 518
LE: 

    /** parser.e:3053					elsif equal(option, "and") then*/
    if (_option_58824 == _26069)
    _29553 = 1;
    else if (IS_ATOM_INT(_option_58824) && IS_ATOM_INT(_26069))
    _29553 = 0;
    else
    _29553 = (compare(_option_58824, _26069) == 0);
    if (_29553 == 0)
    {
        _29553 = NOVALUE;
        goto L10; // [282] 345
    }
    else{
        _29553 = NOVALUE;
    }

    /** parser.e:3054						if at_start = 1 then*/
    if (_at_start_58854 != 1)
    goto L11; // [287] 305

    /** parser.e:3055							CompileErr(2, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29555 = MAKE_SEQ(_1);
    _52CompileErr(2, _29555, 0);
    _29555 = NOVALUE;
    goto LA; // [302] 518
L11: 

    /** parser.e:3056						elsif conjunction = 0 then*/
    if (_conjunction_58853 != 0)
    goto L12; // [307] 330

    /** parser.e:3057							conjunction = 1*/
    _conjunction_58853 = 1;

    /** parser.e:3058							prev_conj = option*/
    RefDS(_option_58824);
    DeRef(_prev_conj_58855);
    _prev_conj_58855 = _option_58824;

    /** parser.e:3059							continue "deflist"*/
    goto L7; // [325] 148
    goto LA; // [327] 518
L12: 

    /** parser.e:3061							CompileErr(10,{keyw,prev_conj})*/
    RefDS(_prev_conj_58855);
    RefDS(_keyw_58832);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _keyw_58832;
    ((intptr_t *)_2)[2] = _prev_conj_58855;
    _29557 = MAKE_SEQ(_1);
    _52CompileErr(10, _29557, 0);
    _29557 = NOVALUE;
    goto LA; // [342] 518
L10: 

    /** parser.e:3063					elsif equal(option, "or") then*/
    if (_option_58824 == _26169)
    _29558 = 1;
    else if (IS_ATOM_INT(_option_58824) && IS_ATOM_INT(_26169))
    _29558 = 0;
    else
    _29558 = (compare(_option_58824, _26169) == 0);
    if (_29558 == 0)
    {
        _29558 = NOVALUE;
        goto L13; // [351] 414
    }
    else{
        _29558 = NOVALUE;
    }

    /** parser.e:3064						if at_start = 1 then*/
    if (_at_start_58854 != 1)
    goto L14; // [356] 374

    /** parser.e:3065							CompileErr(6, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29560 = MAKE_SEQ(_1);
    _52CompileErr(6, _29560, 0);
    _29560 = NOVALUE;
    goto LA; // [371] 518
L14: 

    /** parser.e:3066						elsif conjunction = 0 then*/
    if (_conjunction_58853 != 0)
    goto L15; // [376] 399

    /** parser.e:3067							conjunction = 2*/
    _conjunction_58853 = 2;

    /** parser.e:3068							prev_conj = option*/
    RefDS(_option_58824);
    DeRef(_prev_conj_58855);
    _prev_conj_58855 = _option_58824;

    /** parser.e:3069							continue "deflist"*/
    goto L7; // [394] 148
    goto LA; // [396] 518
L15: 

    /** parser.e:3071							CompileErr(9, {keyw, prev_conj})*/
    RefDS(_prev_conj_58855);
    RefDS(_keyw_58832);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _keyw_58832;
    ((intptr_t *)_2)[2] = _prev_conj_58855;
    _29562 = MAKE_SEQ(_1);
    _52CompileErr(9, _29562, 0);
    _29562 = NOVALUE;
    goto LA; // [411] 518
L13: 

    /** parser.e:3073					elsif length(option) = 0 then*/
    if (IS_SEQUENCE(_option_58824)){
            _29563 = SEQ_PTR(_option_58824)->length;
    }
    else {
        _29563 = 1;
    }
    if (_29563 != 0)
    goto L16; // [419] 454

    /** parser.e:3074						if at_start = 1 then*/
    if (_at_start_58854 != 1)
    goto L17; // [425] 443

    /** parser.e:3075							CompileErr(122, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29566 = MAKE_SEQ(_1);
    _52CompileErr(122, _29566, 0);
    _29566 = NOVALUE;
    goto LA; // [440] 518
L17: 

    /** parser.e:3077							CompileErr(82)*/
    RefDS(_21928);
    _52CompileErr(82, _21928, 0);
    goto LA; // [451] 518
L16: 

    /** parser.e:3079					elsif not at_start and length(prev_conj) = 0 then*/
    _29567 = (_at_start_58854 == 0);
    if (_29567 == 0) {
        goto L18; // [459] 488
    }
    if (IS_SEQUENCE(_prev_conj_58855)){
            _29569 = SEQ_PTR(_prev_conj_58855)->length;
    }
    else {
        _29569 = 1;
    }
    _29570 = (_29569 == 0);
    _29569 = NOVALUE;
    if (_29570 == 0)
    {
        DeRef(_29570);
        _29570 = NOVALUE;
        goto L18; // [471] 488
    }
    else{
        DeRef(_29570);
        _29570 = NOVALUE;
    }

    /** parser.e:3080						CompileErr(4, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29571 = MAKE_SEQ(_1);
    _52CompileErr(4, _29571, 0);
    _29571 = NOVALUE;
    goto LA; // [485] 518
L18: 

    /** parser.e:3081					elsif t_identifier(option) = 0 then*/
    RefDS(_option_58824);
    _29572 = _9t_identifier(_option_58824);
    if (binary_op_a(NOTEQ, _29572, 0)){
        DeRef(_29572);
        _29572 = NOVALUE;
        goto L19; // [494] 512
    }
    DeRef(_29572);
    _29572 = NOVALUE;

    /** parser.e:3082						CompileErr(3, {keyw})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_keyw_58832);
    ((intptr_t*)_2)[1] = _keyw_58832;
    _29574 = MAKE_SEQ(_1);
    _52CompileErr(3, _29574, 0);
    _29574 = NOVALUE;
    goto LA; // [509] 518
L19: 

    /** parser.e:3084						at_start = 0*/
    _at_start_58854 = 0;
LA: 

    /** parser.e:3087					integer this_matched = find(option, OpDefines)*/
    _this_matched_58928 = find_from(_option_58824, _39OpDefines_16888, 1);

    /** parser.e:3088					if negate then*/
    if (_negate_58852 == 0)
    {
        goto L1A; // [529] 543
    }
    else{
    }

    /** parser.e:3089						this_matched = not this_matched*/
    _this_matched_58928 = (_this_matched_58928 == 0);

    /** parser.e:3090						negate = 0*/
    _negate_58852 = 0;
L1A: 

    /** parser.e:3093					if conjunction = 0 then*/
    if (_conjunction_58853 != 0)
    goto L1B; // [545] 557

    /** parser.e:3094						matched = this_matched*/
    _matched_58825 = _this_matched_58928;
    goto L1C; // [554] 599
L1B: 

    /** parser.e:3096						if conjunction = 1 then*/
    if (_conjunction_58853 != 1)
    goto L1D; // [559] 572

    /** parser.e:3097							matched = matched and this_matched*/
    _matched_58825 = (_matched_58825 != 0 && _this_matched_58928 != 0);
    goto L1E; // [569] 586
L1D: 

    /** parser.e:3098						elsif conjunction = 2 then*/
    if (_conjunction_58853 != 2)
    goto L1F; // [574] 585

    /** parser.e:3099							matched = matched or this_matched*/
    _matched_58825 = (_matched_58825 != 0 || _this_matched_58928 != 0);
L1F: 
L1E: 

    /** parser.e:3101						conjunction = 0*/
    _conjunction_58853 = 0;

    /** parser.e:3102						prev_conj = ""*/
    RefDS(_21928);
    DeRef(_prev_conj_58855);
    _prev_conj_58855 = _21928;
L1C: 

    /** parser.e:3104				end while*/
    goto L7; // [603] 148
LD: 

    /** parser.e:3106				in_matched = matched*/
    _in_matched_58827 = _matched_58825;

    /** parser.e:3107				if matched then*/
    if (_matched_58825 == 0)
    {
        goto L20; // [613] 631
    }
    else{
    }

    /** parser.e:3108					No_new_entry = 0*/
    _56No_new_entry_47455 = 0;

    /** parser.e:3109					call_proc(parser_id, {})*/
    _0 = (object)_00[_parser_id_58836].addr;
    (*(intptr_t (*)())_0)(
                         );
L20: 
L6: 
    DeRef(_prev_conj_58855);
    _prev_conj_58855 = NOVALUE;

    /** parser.e:3115			integer gotword = 0*/
    _gotword_58944 = 0;

    /** parser.e:3116			integer gotthen = 0*/
    _gotthen_58945 = 0;

    /** parser.e:3117			integer if_lvl  = 0*/
    _if_lvl_58946 = 0;

    /** parser.e:3118			No_new_entry = not matched*/
    _56No_new_entry_47455 = (_matched_58825 == 0);

    /** parser.e:3119			has_matched = has_matched or matched*/
    _has_matched_58826 = (_has_matched_58826 != 0 || _matched_58825 != 0);

    /** parser.e:3120			keyw = "elsifdef"*/
    RefDS(_26105);
    DeRefi(_keyw_58832);
    _keyw_58832 = _26105;

    /** parser.e:3121			while 1 do*/
L21: 

    /** parser.e:3122				tok = next_token()*/
    _0 = _tok_58831;
    _tok_58831 = _42next_token();
    DeRef(_0);

    /** parser.e:3123				if tok[T_ID] = END_OF_FILE then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29585 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29585, -21)){
        _29585 = NOVALUE;
        goto L22; // [689] 712
    }
    _29585 = NOVALUE;

    /** parser.e:3124					CompileErr(65, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _29587 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _29587 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _29588 = (object)*(((s1_ptr)_2)->base + _29587);
    _52CompileErr(65, _29588, 0);
    _29588 = NOVALUE;
    goto L21; // [709] 674
L22: 

    /** parser.e:3125				elsif tok[T_ID] = END then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29589 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29589, 402)){
        _29589 = NOVALUE;
        goto L23; // [722] 844
    }
    _29589 = NOVALUE;

    /** parser.e:3126					tok = next_token()*/
    _0 = _tok_58831;
    _tok_58831 = _42next_token();
    DeRef(_0);

    /** parser.e:3127					if tok[T_ID] = IFDEF then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29592 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29592, 407)){
        _29592 = NOVALUE;
        goto L24; // [741] 769
    }
    _29592 = NOVALUE;

    /** parser.e:3128						if dead_ifdef then*/
    if (_dead_ifdef_58828 == 0)
    {
        goto L25; // [747] 759
    }
    else{
    }

    /** parser.e:3129							dead_ifdef -= 1*/
    _dead_ifdef_58828 = _dead_ifdef_58828 - 1;
    goto L21; // [756] 674
L25: 

    /** parser.e:3131							exit "top"*/
    goto L26; // [763] 1312
    goto L21; // [766] 674
L24: 

    /** parser.e:3133					elsif in_matched then*/
    if (_in_matched_58827 == 0)
    {
        goto L27; // [771] 793
    }
    else{
    }

    /** parser.e:3135						CompileErr(75, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _29595 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _29595 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _29596 = (object)*(((s1_ptr)_2)->base + _29595);
    _52CompileErr(75, _29596, 0);
    _29596 = NOVALUE;
    goto L21; // [790] 674
L27: 

    /** parser.e:3137						if tok[T_ID] = IF then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29597 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29597, 20)){
        _29597 = NOVALUE;
        goto L21; // [803] 674
    }
    _29597 = NOVALUE;

    /** parser.e:3138							if if_lvl > 0 then*/
    if (_if_lvl_58946 <= 0)
    goto L28; // [809] 822

    /** parser.e:3139								if_lvl -= 1*/
    _if_lvl_58946 = _if_lvl_58946 - 1;
    goto L21; // [819] 674
L28: 

    /** parser.e:3141								CompileErr(111, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _29601 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _29601 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _29602 = (object)*(((s1_ptr)_2)->base + _29601);
    _52CompileErr(111, _29602, 0);
    _29602 = NOVALUE;
    goto L21; // [841] 674
L23: 

    /** parser.e:3145				elsif tok[T_ID] = IF then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29603 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29603, 20)){
        _29603 = NOVALUE;
        goto L29; // [854] 867
    }
    _29603 = NOVALUE;

    /** parser.e:3146					if_lvl += 1*/
    _if_lvl_58946 = _if_lvl_58946 + 1;
    goto L21; // [864] 674
L29: 

    /** parser.e:3147				elsif tok[T_ID] = ELSE then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29606 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29606, 23)){
        _29606 = NOVALUE;
        goto L2A; // [877] 913
    }
    _29606 = NOVALUE;

    /** parser.e:3148					if not in_matched then*/
    if (_in_matched_58827 != 0)
    goto L21; // [883] 674

    /** parser.e:3149						if if_lvl = 0 then*/
    if (_if_lvl_58946 != 0)
    goto L21; // [888] 674

    /** parser.e:3150							CompileErr(108, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _29610 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _29610 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _29611 = (object)*(((s1_ptr)_2)->base + _29610);
    _52CompileErr(108, _29611, 0);
    _29611 = NOVALUE;
    goto L21; // [910] 674
L2A: 

    /** parser.e:3153				elsif tok[T_ID] = ELSIFDEF and not dead_ifdef then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29612 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_29612)) {
        _29613 = (_29612 == 408);
    }
    else {
        _29613 = binary_op(EQUALS, _29612, 408);
    }
    _29612 = NOVALUE;
    if (IS_ATOM_INT(_29613)) {
        if (_29613 == 0) {
            goto L2B; // [927] 1065
        }
    }
    else {
        if (DBL_PTR(_29613)->dbl == 0.0) {
            goto L2B; // [927] 1065
        }
    }
    _29615 = (_dead_ifdef_58828 == 0);
    if (_29615 == 0)
    {
        DeRef(_29615);
        _29615 = NOVALUE;
        goto L2B; // [935] 1065
    }
    else{
        DeRef(_29615);
        _29615 = NOVALUE;
    }

    /** parser.e:3154					if has_matched then*/
    if (_has_matched_58826 == 0)
    {
        goto L2C; // [940] 1305
    }
    else{
    }

    /** parser.e:3155						in_matched = 0*/
    _in_matched_58827 = 0;

    /** parser.e:3156						No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** parser.e:3157						gotword = 0*/
    _gotword_58944 = 0;

    /** parser.e:3158						gotthen = 0*/
    _gotthen_58945 = 0;

    /** parser.e:3159						while length(option) > 0 with entry do*/
    goto L2D; // [967] 1009
L2E: 
    if (IS_SEQUENCE(_option_58824)){
            _29616 = SEQ_PTR(_option_58824)->length;
    }
    else {
        _29616 = 1;
    }
    if (_29616 <= 0)
    goto L2F; // [975] 1022

    /** parser.e:3160							if equal(option, "then") then*/
    if (_option_58824 == _26204)
    _29618 = 1;
    else if (IS_ATOM_INT(_option_58824) && IS_ATOM_INT(_26204))
    _29618 = 0;
    else
    _29618 = (compare(_option_58824, _26204) == 0);
    if (_29618 == 0)
    {
        _29618 = NOVALUE;
        goto L30; // [985] 1000
    }
    else{
        _29618 = NOVALUE;
    }

    /** parser.e:3161								gotthen = 1*/
    _gotthen_58945 = 1;

    /** parser.e:3162								exit*/
    goto L2F; // [995] 1022
    goto L31; // [997] 1006
L30: 

    /** parser.e:3164								gotword = 1*/
    _gotword_58944 = 1;
L31: 

    /** parser.e:3166						entry*/
L2D: 

    /** parser.e:3167							option = StringToken()*/
    RefDS(_5);
    _0 = _option_58824;
    _option_58824 = _63StringToken(_5);
    DeRef(_0);

    /** parser.e:3168						end while*/
    goto L2E; // [1019] 970
L2F: 

    /** parser.e:3169						if gotword = 0 then*/
    if (_gotword_58944 != 0)
    goto L32; // [1024] 1036

    /** parser.e:3170							CompileErr(78)*/
    RefDS(_21928);
    _52CompileErr(78, _21928, 0);
L32: 

    /** parser.e:3172						if gotthen = 0 then*/
    if (_gotthen_58945 != 0)
    goto L33; // [1038] 1050

    /** parser.e:3173							CompileErr(77)*/
    RefDS(_21928);
    _52CompileErr(77, _21928, 0);
L33: 

    /** parser.e:3175						read_line()*/
    _63read_line();
    goto L21; // [1054] 674

    /** parser.e:3177						exit*/
    goto L2C; // [1059] 1305
    goto L21; // [1062] 674
L2B: 

    /** parser.e:3179				elsif tok[T_ID] = ELSEDEF then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29622 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29622, 409)){
        _29622 = NOVALUE;
        goto L34; // [1075] 1235
    }
    _29622 = NOVALUE;

    /** parser.e:3180					gotword = line_number*/
    _gotword_58944 = _39line_number_16816;

    /** parser.e:3181					option = StringToken()*/
    RefDS(_5);
    _0 = _option_58824;
    _option_58824 = _63StringToken(_5);
    DeRef(_0);

    /** parser.e:3182					if length(option) > 0 then*/
    if (IS_SEQUENCE(_option_58824)){
            _29625 = SEQ_PTR(_option_58824)->length;
    }
    else {
        _29625 = 1;
    }
    if (_29625 <= 0)
    goto L35; // [1101] 1135

    /** parser.e:3183						if line_number = gotword then*/
    if (_39line_number_16816 != _gotword_58944)
    goto L36; // [1109] 1121

    /** parser.e:3184							CompileErr(116)*/
    RefDS(_21928);
    _52CompileErr(116, _21928, 0);
L36: 

    /** parser.e:3186						bp -= length(option)*/
    if (IS_SEQUENCE(_option_58824)){
            _29628 = SEQ_PTR(_option_58824)->length;
    }
    else {
        _29628 = 1;
    }
    _52bp_48714 = _52bp_48714 - _29628;
    _29628 = NOVALUE;
L35: 

    /** parser.e:3188					if not dead_ifdef then*/
    if (_dead_ifdef_58828 != 0)
    goto L21; // [1137] 674

    /** parser.e:3189						if has_matched then*/
    if (_has_matched_58826 == 0)
    {
        goto L37; // [1142] 1164
    }
    else{
    }

    /** parser.e:3190							in_matched = 0*/
    _in_matched_58827 = 0;

    /** parser.e:3191							No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** parser.e:3192							read_line()*/
    _63read_line();
    goto L21; // [1161] 674
L37: 

    /** parser.e:3194							No_new_entry = 0*/
    _56No_new_entry_47455 = 0;

    /** parser.e:3195							in_elsedef = 1*/
    _in_elsedef_58829 = 1;

    /** parser.e:3196							call_proc(parser_id, {})*/
    _0 = (object)_00[_parser_id_58836].addr;
    (*(intptr_t (*)())_0)(
                         );

    /** parser.e:3197							tok_match(END)*/
    _42tok_match(402, 0);

    /** parser.e:3198							tok_match(IFDEF, END)*/
    _42tok_match(407, 402);

    /** parser.e:3199							live_ifdef -= 1*/
    _42live_ifdef_58820 = _42live_ifdef_58820 - 1;

    /** parser.e:3200							ifdef_lineno = ifdef_lineno[1..$-1]*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _29632 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _29632 = 1;
    }
    _29633 = _29632 - 1;
    _29632 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42ifdef_lineno_58821;
    RHS_Slice(_42ifdef_lineno_58821, 1, _29633);

    /** parser.e:3201							return*/
    DeRef(_option_58824);
    DeRef(_tok_58831);
    DeRefi(_keyw_58832);
    DeRef(_29613);
    _29613 = NOVALUE;
    _29633 = NOVALUE;
    DeRef(_29567);
    _29567 = NOVALUE;
    DeRef(_29532);
    _29532 = NOVALUE;
    DeRef(_29538);
    _29538 = NOVALUE;
    return;
    goto L21; // [1232] 674
L34: 

    /** parser.e:3204				elsif tok[T_ID] = IFDEF then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29635 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29635, 407)){
        _29635 = NOVALUE;
        goto L38; // [1245] 1258
    }
    _29635 = NOVALUE;

    /** parser.e:3205					dead_ifdef += 1*/
    _dead_ifdef_58828 = _dead_ifdef_58828 + 1;
    goto L21; // [1255] 674
L38: 

    /** parser.e:3207				elsif tok[T_ID] = INCLUDE then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29638 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29638, 418)){
        _29638 = NOVALUE;
        goto L39; // [1268] 1279
    }
    _29638 = NOVALUE;

    /** parser.e:3209					read_line()*/
    _63read_line();
    goto L21; // [1276] 674
L39: 

    /** parser.e:3211				elsif tok[T_ID] = CASE then*/
    _2 = (object)SEQ_PTR(_tok_58831);
    _29640 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29640, 186)){
        _29640 = NOVALUE;
        goto L21; // [1289] 674
    }
    _29640 = NOVALUE;

    /** parser.e:3213					tok = next_token()*/
    _0 = _tok_58831;
    _tok_58831 = _42next_token();
    DeRef(_0);

    /** parser.e:3216			end while*/
    goto L21; // [1302] 674
L2C: 

    /** parser.e:3217		end while*/
    goto L5; // [1309] 105
L26: 

    /** parser.e:3219		live_ifdef -= 1*/
    _42live_ifdef_58820 = _42live_ifdef_58820 - 1;

    /** parser.e:3220		ifdef_lineno = ifdef_lineno[1..$-1]*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _29644 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _29644 = 1;
    }
    _29645 = _29644 - 1;
    _29644 = NOVALUE;
    rhs_slice_target = (object_ptr)&_42ifdef_lineno_58821;
    RHS_Slice(_42ifdef_lineno_58821, 1, _29645);

    /** parser.e:3221		No_new_entry = 0*/
    _56No_new_entry_47455 = 0;

    /** parser.e:3222	end procedure*/
    DeRef(_option_58824);
    DeRef(_tok_58831);
    DeRefi(_keyw_58832);
    DeRef(_29613);
    _29613 = NOVALUE;
    DeRef(_29633);
    _29633 = NOVALUE;
    DeRef(_29567);
    _29567 = NOVALUE;
    _29645 = NOVALUE;
    DeRef(_29532);
    _29532 = NOVALUE;
    DeRef(_29538);
    _29538 = NOVALUE;
    return;
    ;
}


object _42SetPrivateScope(object _s_59092, object _type_sym_59094, object _n_59095)
{
    object _hashval_59096 = NOVALUE;
    object _scope_59097 = NOVALUE;
    object _t_59099 = NOVALUE;
    object _29666 = NOVALUE;
    object _29665 = NOVALUE;
    object _29664 = NOVALUE;
    object _29663 = NOVALUE;
    object _29662 = NOVALUE;
    object _29661 = NOVALUE;
    object _29658 = NOVALUE;
    object _29655 = NOVALUE;
    object _29653 = NOVALUE;
    object _29651 = NOVALUE;
    object _29647 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_s_59092)) {
        _1 = (object)(DBL_PTR(_s_59092)->dbl);
        DeRefDS(_s_59092);
        _s_59092 = _1;
    }

    /** parser.e:3230		scope = SymTab[s][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29647 = (object)*(((s1_ptr)_2)->base + _s_59092);
    _2 = (object)SEQ_PTR(_29647);
    _scope_59097 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_59097)){
        _scope_59097 = (object)DBL_PTR(_scope_59097)->dbl;
    }
    _29647 = NOVALUE;

    /** parser.e:3231		switch scope do*/
    _0 = _scope_59097;
    switch ( _0 ){ 

        /** parser.e:3232			case SC_PRIVATE then*/
        case 3:

        /** parser.e:3233				DefinedYet(s)*/
        _56DefinedYet(_s_59092);

        /** parser.e:3234				Block_var( s )*/
        _66Block_var(_s_59092);

        /** parser.e:3235				return s*/
        return _s_59092;
        goto L1; // [50] 260

        /** parser.e:3237			case SC_LOOP_VAR then*/
        case 2:

        /** parser.e:3238				DefinedYet(s)*/
        _56DefinedYet(_s_59092);

        /** parser.e:3239				return s*/
        return _s_59092;
        goto L1; // [67] 260

        /** parser.e:3241			case SC_UNDEFINED, SC_MULTIPLY_DEFINED then*/
        case 9:
        case 10:

        /** parser.e:3242				SymTab[s][S_SCOPE] = SC_PRIVATE*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_s_59092 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 3;
        DeRef(_1);
        _29651 = NOVALUE;

        /** parser.e:3243				SymTab[s][S_VARNUM] = n*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_s_59092 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 16);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _n_59095;
        DeRef(_1);
        _29653 = NOVALUE;

        /** parser.e:3244				SymTab[s][S_VTYPE] = type_sym*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_s_59092 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _type_sym_59094;
        DeRef(_1);
        _29655 = NOVALUE;

        /** parser.e:3245				if type_sym < 0 then*/
        if (_type_sym_59094 >= 0)
        goto L2; // [124] 135

        /** parser.e:3246					register_forward_type( s, type_sym )*/
        _41register_forward_type(_s_59092, _type_sym_59094);
L2: 

        /** parser.e:3248				Block_var( s )*/
        _66Block_var(_s_59092);

        /** parser.e:3249				return s*/
        return _s_59092;
        goto L1; // [146] 260

        /** parser.e:3251			case SC_LOCAL, SC_GLOBAL, SC_PREDEF, SC_PUBLIC, SC_EXPORT then*/
        case 5:
        case 6:
        case 7:
        case 13:
        case 11:

        /** parser.e:3252				hashval = SymTab[s][S_HASHVAL]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _29658 = (object)*(((s1_ptr)_2)->base + _s_59092);
        _2 = (object)SEQ_PTR(_29658);
        _hashval_59096 = (object)*(((s1_ptr)_2)->base + 11);
        if (!IS_ATOM_INT(_hashval_59096)){
            _hashval_59096 = (object)DBL_PTR(_hashval_59096)->dbl;
        }
        _29658 = NOVALUE;

        /** parser.e:3253				t = buckets[hashval]*/
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _t_59099 = (object)*(((s1_ptr)_2)->base + _hashval_59096);
        if (!IS_ATOM_INT(_t_59099)){
            _t_59099 = (object)DBL_PTR(_t_59099)->dbl;
        }

        /** parser.e:3254				buckets[hashval] = NewEntry(SymTab[s][S_NAME], n, SC_PRIVATE,*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _29661 = (object)*(((s1_ptr)_2)->base + _s_59092);
        _2 = (object)SEQ_PTR(_29661);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _29662 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _29662 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _29661 = NOVALUE;
        Ref(_29662);
        _29663 = _56NewEntry(_29662, _n_59095, 3, -100, _hashval_59096, _t_59099, _type_sym_59094);
        _29662 = NOVALUE;
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _2 = (object)(((s1_ptr)_2)->base + _hashval_59096);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _29663;
        if( _1 != _29663 ){
            DeRef(_1);
        }
        _29663 = NOVALUE;

        /** parser.e:3256				Block_var( buckets[hashval] )*/
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _29664 = (object)*(((s1_ptr)_2)->base + _hashval_59096);
        Ref(_29664);
        _66Block_var(_29664);
        _29664 = NOVALUE;

        /** parser.e:3257				return buckets[hashval]*/
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _29665 = (object)*(((s1_ptr)_2)->base + _hashval_59096);
        Ref(_29665);
        return _29665;
        goto L1; // [243] 260

        /** parser.e:3259			case else*/
        default:

        /** parser.e:3260				InternalErr(267, {scope})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _scope_59097;
        _29666 = MAKE_SEQ(_1);
        _52InternalErr(267, _29666);
        _29666 = NOVALUE;
    ;}L1: 

    /** parser.e:3264		return 0*/
    _29665 = NOVALUE;
    return 0;
    ;
}


void _42For_statement()
{
    object _bp1_59164 = NOVALUE;
    object _bp2_59165 = NOVALUE;
    object _exit_base_59166 = NOVALUE;
    object _next_base_59167 = NOVALUE;
    object _end_op_59168 = NOVALUE;
    object _tok_59170 = NOVALUE;
    object _loop_var_59171 = NOVALUE;
    object _loop_var_sym_59173 = NOVALUE;
    object _save_syms_59174 = NOVALUE;
    object _29713 = NOVALUE;
    object _29711 = NOVALUE;
    object _29710 = NOVALUE;
    object _29704 = NOVALUE;
    object _29702 = NOVALUE;
    object _29700 = NOVALUE;
    object _29699 = NOVALUE;
    object _29698 = NOVALUE;
    object _29697 = NOVALUE;
    object _29695 = NOVALUE;
    object _29693 = NOVALUE;
    object _29692 = NOVALUE;
    object _29691 = NOVALUE;
    object _29690 = NOVALUE;
    object _29688 = NOVALUE;
    object _29686 = NOVALUE;
    object _29682 = NOVALUE;
    object _29680 = NOVALUE;
    object _29677 = NOVALUE;
    object _29675 = NOVALUE;
    object _29669 = NOVALUE;
    object _29668 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:3273		sequence save_syms*/

    /** parser.e:3275		Start_block( FOR )*/
    _66Start_block(21, 0);

    /** parser.e:3276		loop_var = next_token()*/
    _0 = _loop_var_59171;
    _loop_var_59171 = _42next_token();
    DeRef(_0);

    /** parser.e:3277		if not find(loop_var[T_ID], ADDR_TOKS) then*/
    _2 = (object)SEQ_PTR(_loop_var_59171);
    _29668 = (object)*(((s1_ptr)_2)->base + 1);
    _29669 = find_from(_29668, _40ADDR_TOKS_16427, 1);
    _29668 = NOVALUE;
    if (_29669 != 0)
    goto L1; // [31] 42
    _29669 = NOVALUE;

    /** parser.e:3278			CompileErr(28)*/
    RefDS(_21928);
    _52CompileErr(28, _21928, 0);
L1: 

    /** parser.e:3281		if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L2; // [46] 55
    }
    else{
    }

    /** parser.e:3282			add_ref(loop_var)*/
    Ref(_loop_var_59171);
    _56add_ref(_loop_var_59171);
L2: 

    /** parser.e:3285		tok_match(EQUALS)*/
    _42tok_match(3, 0);

    /** parser.e:3286		exit_base = length(exit_list)*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _exit_base_59166 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _exit_base_59166 = 1;
    }

    /** parser.e:3287		next_base = length(continue_list)*/
    if (IS_SEQUENCE(_42continue_list_54385)){
            _next_base_59167 = SEQ_PTR(_42continue_list_54385)->length;
    }
    else {
        _next_base_59167 = 1;
    }

    /** parser.e:3288		Expr()*/
    _42Expr();

    /** parser.e:3289		tok_match(TO)*/
    _42tok_match(403, 0);

    /** parser.e:3290		exit_base = length(exit_list)*/
    if (IS_SEQUENCE(_42exit_list_54383)){
            _exit_base_59166 = SEQ_PTR(_42exit_list_54383)->length;
    }
    else {
        _exit_base_59166 = 1;
    }

    /** parser.e:3291		Expr()*/
    _42Expr();

    /** parser.e:3292		tok = next_token()*/
    _0 = _tok_59170;
    _tok_59170 = _42next_token();
    DeRef(_0);

    /** parser.e:3293		if tok[T_ID] = BY then*/
    _2 = (object)SEQ_PTR(_tok_59170);
    _29675 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29675, 404)){
        _29675 = NOVALUE;
        goto L3; // [115] 135
    }
    _29675 = NOVALUE;

    /** parser.e:3294			Expr()*/
    _42Expr();

    /** parser.e:3295			end_op = ENDFOR_GENERAL -- will be set at runtime by FOR op*/
    _end_op_59168 = 39;
    goto L4; // [132] 159
L3: 

    /** parser.e:3298			emit_opnd(NewIntSym(1))*/
    _29677 = _56NewIntSym(1);
    _49emit_opnd(_29677);
    _29677 = NOVALUE;

    /** parser.e:3299			putback(tok)*/
    Ref(_tok_59170);
    _42putback(_tok_59170);

    /** parser.e:3300			end_op = ENDFOR_INT_UP1*/
    _end_op_59168 = 54;
L4: 

    /** parser.e:3303		loop_var_sym = loop_var[T_SYM]*/
    _2 = (object)SEQ_PTR(_loop_var_59171);
    _loop_var_sym_59173 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_loop_var_sym_59173)){
        _loop_var_sym_59173 = (object)DBL_PTR(_loop_var_sym_59173)->dbl;
    }

    /** parser.e:3304		if CurrentSub = TopLevelSub then*/
    if (_39CurrentSub_16823 != _39TopLevelSub_16822)
    goto L5; // [175] 221

    /** parser.e:3305			DefinedYet(loop_var_sym)*/
    _56DefinedYet(_loop_var_sym_59173);

    /** parser.e:3306			SymTab[loop_var_sym][S_SCOPE] = SC_GLOOP_VAR*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_loop_var_sym_59173 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    _29680 = NOVALUE;

    /** parser.e:3307			SymTab[loop_var_sym][S_VTYPE] = object_type*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_loop_var_sym_59173 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56object_type_46258;
    DeRef(_1);
    _29682 = NOVALUE;
    goto L6; // [218] 265
L5: 

    /** parser.e:3309			loop_var_sym = SetPrivateScope(loop_var_sym, object_type, param_num)*/
    _loop_var_sym_59173 = _42SetPrivateScope(_loop_var_sym_59173, _56object_type_46258, _42param_num_54372);
    if (!IS_ATOM_INT(_loop_var_sym_59173)) {
        _1 = (object)(DBL_PTR(_loop_var_sym_59173)->dbl);
        DeRefDS(_loop_var_sym_59173);
        _loop_var_sym_59173 = _1;
    }

    /** parser.e:3310			param_num += 1*/
    _42param_num_54372 = _42param_num_54372 + 1;

    /** parser.e:3311			SymTab[loop_var_sym][S_SCOPE] = SC_LOOP_VAR*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_loop_var_sym_59173 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _29686 = NOVALUE;

    /** parser.e:3312			Pop_block_var()*/
    _66Pop_block_var();
L6: 

    /** parser.e:3314		SymTab[loop_var_sym][S_USAGE] = or_bits(SymTab[loop_var_sym][S_USAGE], U_USED)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_loop_var_sym_59173 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29690 = (object)*(((s1_ptr)_2)->base + _loop_var_sym_59173);
    _2 = (object)SEQ_PTR(_29690);
    _29691 = (object)*(((s1_ptr)_2)->base + 5);
    _29690 = NOVALUE;
    if (IS_ATOM_INT(_29691)) {
        {uintptr_t tu;
             tu = (uintptr_t)_29691 | (uintptr_t)3;
             _29692 = MAKE_UINT(tu);
        }
    }
    else {
        _29692 = binary_op(OR_BITS, _29691, 3);
    }
    _29691 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29692;
    if( _1 != _29692 ){
        DeRef(_1);
    }
    _29692 = NOVALUE;
    _29688 = NOVALUE;

    /** parser.e:3316		op_info1 = loop_var_sym*/
    _49op_info1_50372 = _loop_var_sym_59173;

    /** parser.e:3317		emit_op(FOR)*/
    _49emit_op(21);

    /** parser.e:3318		emit_addr(loop_var_sym)*/
    _49emit_addr(_loop_var_sym_59173);

    /** parser.e:3319		if finish_block_header(FOR) then*/
    _29693 = _42finish_block_header(21);
    if (_29693 == 0) {
        DeRef(_29693);
        _29693 = NOVALUE;
        goto L7; // [325] 336
    }
    else {
        if (!IS_ATOM_INT(_29693) && DBL_PTR(_29693)->dbl == 0.0){
            DeRef(_29693);
            _29693 = NOVALUE;
            goto L7; // [325] 336
        }
        DeRef(_29693);
        _29693 = NOVALUE;
    }
    DeRef(_29693);
    _29693 = NOVALUE;

    /** parser.e:3320			CompileErr(83)*/
    RefDS(_21928);
    _52CompileErr(83, _21928, 0);
L7: 

    /** parser.e:3322		entry_addr &= 0*/
    Append(&_42entry_addr_54387, _42entry_addr_54387, 0);

    /** parser.e:3323		bp1 = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29695 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29695 = 1;
    }
    _bp1_59164 = _29695 + 1;
    _29695 = NOVALUE;

    /** parser.e:3324		emit_addr(0) -- will be patched - don't straighten*/
    _49emit_addr(0);

    /** parser.e:3326		save_syms = Code[$-5..$-3] -- could be temps, but can't get rid of them yet*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29697 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29697 = 1;
    }
    _29698 = _29697 - 5;
    _29697 = NOVALUE;
    if (IS_SEQUENCE(_39Code_16903)){
            _29699 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29699 = 1;
    }
    _29700 = _29699 - 3;
    _29699 = NOVALUE;
    rhs_slice_target = (object_ptr)&_save_syms_59174;
    RHS_Slice(_39Code_16903, _29698, _29700);

    /** parser.e:3327		for i = 1 to 3 do*/
    {
        object _i_59262;
        _i_59262 = 1;
L8: 
        if (_i_59262 > 3){
            goto L9; // [385] 408
        }

        /** parser.e:3328			clear_temp( save_syms[i] )*/
        _2 = (object)SEQ_PTR(_save_syms_59174);
        _29702 = (object)*(((s1_ptr)_2)->base + _i_59262);
        Ref(_29702);
        _49clear_temp(_29702);
        _29702 = NOVALUE;

        /** parser.e:3329		end for*/
        _i_59262 = _i_59262 + 1;
        goto L8; // [403] 392
L9: 
        ;
    }

    /** parser.e:3330		flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:3332		bp2 = length(Code)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _bp2_59165 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _bp2_59165 = 1;
    }

    /** parser.e:3333		retry_addr &= bp2 + 1*/
    _29704 = _bp2_59165 + 1;
    Append(&_42retry_addr_54389, _42retry_addr_54389, _29704);
    _29704 = NOVALUE;

    /** parser.e:3334		continue_addr &= 0*/
    Append(&_42continue_addr_54388, _42continue_addr_54388, 0);

    /** parser.e:3336		loop_stack &= FOR*/
    Append(&_42loop_stack_54397, _42loop_stack_54397, 21);

    /** parser.e:3338		if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto LA; // [454] 478

    /** parser.e:3339			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto LB; // [461] 477
    }
    else{
    }

    /** parser.e:3340				emit_op(DISPLAY_VAR)*/
    _49emit_op(87);

    /** parser.e:3341				emit_addr(loop_var_sym)*/
    _49emit_addr(_loop_var_sym_59173);
LB: 
LA: 

    /** parser.e:3345		Statement_list()*/
    _42Statement_list();

    /** parser.e:3346		tok_match(END)*/
    _42tok_match(402, 0);

    /** parser.e:3347		tok_match(FOR, END)*/
    _42tok_match(21, 402);

    /** parser.e:3349		End_block( FOR )*/
    _66End_block(21);

    /** parser.e:3351		StartSourceLine(TRUE, TRANSLATE)*/
    _49StartSourceLine(_9TRUE_444, _39TRANSLATE_16440, 2);

    /** parser.e:3352		op_info1 = loop_var_sym*/
    _49op_info1_50372 = _loop_var_sym_59173;

    /** parser.e:3353		op_info2 = bp2 + 1*/
    _49op_info2_50373 = _bp2_59165 + 1;

    /** parser.e:3354		PatchNList(next_base)*/
    _42PatchNList(_next_base_59167);

    /** parser.e:3355		emit_op(end_op)*/
    _49emit_op(_end_op_59168);

    /** parser.e:3356		backpatch(bp1, length(Code)+1)*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29710 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29710 = 1;
    }
    _29711 = _29710 + 1;
    _29710 = NOVALUE;
    _49backpatch(_bp1_59164, _29711);
    _29711 = NOVALUE;

    /** parser.e:3357		if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto LC; // [564] 588

    /** parser.e:3358			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto LD; // [571] 587
    }
    else{
    }

    /** parser.e:3359				emit_op(ERASE_SYMBOL)*/
    _49emit_op(90);

    /** parser.e:3360				emit_addr(loop_var_sym)*/
    _49emit_addr(_loop_var_sym_59173);
LD: 
LC: 

    /** parser.e:3364		Hide(loop_var_sym)*/
    _56Hide(_loop_var_sym_59173);

    /** parser.e:3365		exit_loop(exit_base)*/
    _42exit_loop(_exit_base_59166);

    /** parser.e:3366		for i = 1 to 3 do*/
    {
        object _i_59308;
        _i_59308 = 1;
LE: 
        if (_i_59308 > 3){
            goto LF; // [600] 626
        }

        /** parser.e:3367			emit_temp( save_syms[i], NEW_REFERENCE )*/
        _2 = (object)SEQ_PTR(_save_syms_59174);
        _29713 = (object)*(((s1_ptr)_2)->base + _i_59308);
        Ref(_29713);
        _49emit_temp(_29713, 1);
        _29713 = NOVALUE;

        /** parser.e:3368		end for*/
        _i_59308 = _i_59308 + 1;
        goto LE; // [621] 607
LF: 
        ;
    }

    /** parser.e:3369		flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:3370	end procedure*/
    DeRef(_tok_59170);
    DeRef(_loop_var_59171);
    DeRef(_save_syms_59174);
    DeRef(_29700);
    _29700 = NOVALUE;
    DeRef(_29698);
    _29698 = NOVALUE;
    return;
    ;
}


object _42CompileType(object _type_ptr_59316)
{
    object _t_59317 = NOVALUE;
    object _29724 = NOVALUE;
    object _29723 = NOVALUE;
    object _29722 = NOVALUE;
    object _29716 = NOVALUE;
    object _29715 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_type_ptr_59316)) {
        _1 = (object)(DBL_PTR(_type_ptr_59316)->dbl);
        DeRefDS(_type_ptr_59316);
        _type_ptr_59316 = _1;
    }

    /** parser.e:3376		if type_ptr < 0 then*/
    if (_type_ptr_59316 >= 0)
    goto L1; // [5] 16

    /** parser.e:3378			return type_ptr*/
    return _type_ptr_59316;
L1: 

    /** parser.e:3381		if SymTab[type_ptr][S_TOKEN] = OBJECT then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29715 = (object)*(((s1_ptr)_2)->base + _type_ptr_59316);
    _2 = (object)SEQ_PTR(_29715);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _29716 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _29716 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _29715 = NOVALUE;
    if (binary_op_a(NOTEQ, _29716, 415)){
        _29716 = NOVALUE;
        goto L2; // [32] 47
    }
    _29716 = NOVALUE;

    /** parser.e:3382			return TYPE_OBJECT*/
    return 16;
    goto L3; // [44] 218
L2: 

    /** parser.e:3384		elsif type_ptr = integer_type then*/
    if (_type_ptr_59316 != _56integer_type_46264)
    goto L4; // [51] 66

    /** parser.e:3385			return TYPE_INTEGER*/
    return 1;
    goto L3; // [63] 218
L4: 

    /** parser.e:3387		elsif type_ptr = atom_type then*/
    if (_type_ptr_59316 != _56atom_type_46260)
    goto L5; // [70] 85

    /** parser.e:3388			return TYPE_ATOM*/
    return 4;
    goto L3; // [82] 218
L5: 

    /** parser.e:3390		elsif type_ptr = sequence_type then*/
    if (_type_ptr_59316 != _56sequence_type_46262)
    goto L6; // [89] 104

    /** parser.e:3391			return TYPE_SEQUENCE*/
    return 8;
    goto L3; // [101] 218
L6: 

    /** parser.e:3393		elsif type_ptr = object_type then*/
    if (_type_ptr_59316 != _56object_type_46258)
    goto L7; // [108] 123

    /** parser.e:3394			return TYPE_OBJECT*/
    return 16;
    goto L3; // [120] 218
L7: 

    /** parser.e:3398			t = SymTab[SymTab[type_ptr][S_NEXT]][S_VTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29722 = (object)*(((s1_ptr)_2)->base + _type_ptr_59316);
    _2 = (object)SEQ_PTR(_29722);
    _29723 = (object)*(((s1_ptr)_2)->base + 2);
    _29722 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_29723)){
        _29724 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_29723)->dbl));
    }
    else{
        _29724 = (object)*(((s1_ptr)_2)->base + _29723);
    }
    _2 = (object)SEQ_PTR(_29724);
    _t_59317 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_t_59317)){
        _t_59317 = (object)DBL_PTR(_t_59317)->dbl;
    }
    _29724 = NOVALUE;

    /** parser.e:3399			if t = integer_type then*/
    if (_t_59317 != _56integer_type_46264)
    goto L8; // [155] 170

    /** parser.e:3400				return TYPE_INTEGER*/
    _29723 = NOVALUE;
    return 1;
    goto L9; // [167] 217
L8: 

    /** parser.e:3401			elsif t = atom_type then*/
    if (_t_59317 != _56atom_type_46260)
    goto LA; // [174] 189

    /** parser.e:3402				return TYPE_ATOM*/
    _29723 = NOVALUE;
    return 4;
    goto L9; // [186] 217
LA: 

    /** parser.e:3403			elsif t = sequence_type then*/
    if (_t_59317 != _56sequence_type_46262)
    goto LB; // [193] 208

    /** parser.e:3404				return TYPE_SEQUENCE*/
    _29723 = NOVALUE;
    return 8;
    goto L9; // [205] 217
LB: 

    /** parser.e:3406				return TYPE_OBJECT*/
    _29723 = NOVALUE;
    return 16;
L9: 
L3: 
    ;
}


object _42get_assigned_sym()
{
    object _29737 = NOVALUE;
    object _29736 = NOVALUE;
    object _29735 = NOVALUE;
    object _29733 = NOVALUE;
    object _29732 = NOVALUE;
    object _29731 = NOVALUE;
    object _29730 = NOVALUE;
    object _29729 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:3416		if not find( Code[$-2], {ASSIGN, ASSIGN_I}) then*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29729 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29729 = 1;
    }
    _29730 = _29729 - 2;
    _29729 = NOVALUE;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _29731 = (object)*(((s1_ptr)_2)->base + _29730);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 18;
    ((intptr_t *)_2)[2] = 113;
    _29732 = MAKE_SEQ(_1);
    _29733 = find_from(_29731, _29732, 1);
    _29731 = NOVALUE;
    DeRefDS(_29732);
    _29732 = NOVALUE;
    if (_29733 != 0)
    goto L1; // [29] 39
    _29733 = NOVALUE;

    /** parser.e:3417			return 0*/
    _29730 = NOVALUE;
    return 0;
L1: 

    /** parser.e:3419		return Code[$-1]*/
    if (IS_SEQUENCE(_39Code_16903)){
            _29735 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _29735 = 1;
    }
    _29736 = _29735 - 1;
    _29735 = NOVALUE;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _29737 = (object)*(((s1_ptr)_2)->base + _29736);
    Ref(_29737);
    _29736 = NOVALUE;
    DeRef(_29730);
    _29730 = NOVALUE;
    return _29737;
    ;
}


void _42Assign_Constant(object _sym_59386)
{
    object _valsym_59388 = NOVALUE;
    object _val_59391 = NOVALUE;
    object _29764 = NOVALUE;
    object _29763 = NOVALUE;
    object _29761 = NOVALUE;
    object _29760 = NOVALUE;
    object _29759 = NOVALUE;
    object _29757 = NOVALUE;
    object _29756 = NOVALUE;
    object _29755 = NOVALUE;
    object _29753 = NOVALUE;
    object _29752 = NOVALUE;
    object _29751 = NOVALUE;
    object _29749 = NOVALUE;
    object _29748 = NOVALUE;
    object _29747 = NOVALUE;
    object _29745 = NOVALUE;
    object _29743 = NOVALUE;
    object _29741 = NOVALUE;
    object _29739 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:3423		symtab_index valsym = Pop() -- pop the sym for the constant, too*/
    _valsym_59388 = _49Pop();
    if (!IS_ATOM_INT(_valsym_59388)) {
        _1 = (object)(DBL_PTR(_valsym_59388)->dbl);
        DeRefDS(_valsym_59388);
        _valsym_59388 = _1;
    }

    /** parser.e:3424		object val = SymTab[valsym][S_OBJ]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29739 = (object)*(((s1_ptr)_2)->base + _valsym_59388);
    DeRef(_val_59391);
    _2 = (object)SEQ_PTR(_29739);
    _val_59391 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_val_59391);
    _29739 = NOVALUE;

    /** parser.e:3426		SymTab[sym][S_OBJ] = val*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    Ref(_val_59391);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_59391;
    DeRef(_1);
    _29741 = NOVALUE;

    /** parser.e:3427		SymTab[sym][S_INITLEVEL] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _29743 = NOVALUE;

    /** parser.e:3429		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [58] 197
    }
    else{
    }

    /** parser.e:3431			SymTab[sym][S_GTYPE] = SymTab[valsym][S_GTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29747 = (object)*(((s1_ptr)_2)->base + _valsym_59388);
    _2 = (object)SEQ_PTR(_29747);
    _29748 = (object)*(((s1_ptr)_2)->base + 36);
    _29747 = NOVALUE;
    Ref(_29748);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29748;
    if( _1 != _29748 ){
        DeRef(_1);
    }
    _29748 = NOVALUE;
    _29745 = NOVALUE;

    /** parser.e:3432			SymTab[sym][S_SEQ_ELEM] = SymTab[valsym][S_SEQ_ELEM]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29751 = (object)*(((s1_ptr)_2)->base + _valsym_59388);
    _2 = (object)SEQ_PTR(_29751);
    _29752 = (object)*(((s1_ptr)_2)->base + 33);
    _29751 = NOVALUE;
    Ref(_29752);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29752;
    if( _1 != _29752 ){
        DeRef(_1);
    }
    _29752 = NOVALUE;
    _29749 = NOVALUE;

    /** parser.e:3433			SymTab[sym][S_OBJ_MIN] = SymTab[valsym][S_OBJ_MIN]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29755 = (object)*(((s1_ptr)_2)->base + _valsym_59388);
    _2 = (object)SEQ_PTR(_29755);
    _29756 = (object)*(((s1_ptr)_2)->base + 30);
    _29755 = NOVALUE;
    Ref(_29756);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29756;
    if( _1 != _29756 ){
        DeRef(_1);
    }
    _29756 = NOVALUE;
    _29753 = NOVALUE;

    /** parser.e:3434			SymTab[sym][S_OBJ_MAX] = SymTab[valsym][S_OBJ_MAX]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29759 = (object)*(((s1_ptr)_2)->base + _valsym_59388);
    _2 = (object)SEQ_PTR(_29759);
    _29760 = (object)*(((s1_ptr)_2)->base + 31);
    _29759 = NOVALUE;
    Ref(_29760);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29760;
    if( _1 != _29760 ){
        DeRef(_1);
    }
    _29760 = NOVALUE;
    _29757 = NOVALUE;

    /** parser.e:3435			SymTab[sym][S_SEQ_LEN] = SymTab[valsym][S_SEQ_LEN]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59386 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29763 = (object)*(((s1_ptr)_2)->base + _valsym_59388);
    _2 = (object)SEQ_PTR(_29763);
    _29764 = (object)*(((s1_ptr)_2)->base + 32);
    _29763 = NOVALUE;
    Ref(_29764);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29764;
    if( _1 != _29764 ){
        DeRef(_1);
    }
    _29764 = NOVALUE;
    _29761 = NOVALUE;
L1: 

    /** parser.e:3437	end procedure*/
    DeRef(_val_59391);
    return;
    ;
}


object _42Global_declaration(object _type_ptr_59448, object _scope_59449)
{
    object _new_symbols_59450 = NOVALUE;
    object _tok_59452 = NOVALUE;
    object _tsym_59453 = NOVALUE;
    object _prevtok_59454 = NOVALUE;
    object _sym_59456 = NOVALUE;
    object _valsym_59457 = NOVALUE;
    object _h_59458 = NOVALUE;
    object _count_59459 = NOVALUE;
    object _val_59460 = NOVALUE;
    object _usedval_59461 = NOVALUE;
    object _deltafunc_59462 = NOVALUE;
    object _delta_59463 = NOVALUE;
    object _is_fwd_ref_59464 = NOVALUE;
    object _ptok_59481 = NOVALUE;
    object _negate_59497 = NOVALUE;
    object _negate_59743 = NOVALUE;
    object _31676 = NOVALUE;
    object _31675 = NOVALUE;
    object _31674 = NOVALUE;
    object _30004 = NOVALUE;
    object _30002 = NOVALUE;
    object _30000 = NOVALUE;
    object _29998 = NOVALUE;
    object _29996 = NOVALUE;
    object _29993 = NOVALUE;
    object _29991 = NOVALUE;
    object _29990 = NOVALUE;
    object _29989 = NOVALUE;
    object _29988 = NOVALUE;
    object _29987 = NOVALUE;
    object _29986 = NOVALUE;
    object _29984 = NOVALUE;
    object _29980 = NOVALUE;
    object _29978 = NOVALUE;
    object _29976 = NOVALUE;
    object _29974 = NOVALUE;
    object _29972 = NOVALUE;
    object _29970 = NOVALUE;
    object _29969 = NOVALUE;
    object _29967 = NOVALUE;
    object _29966 = NOVALUE;
    object _29965 = NOVALUE;
    object _29963 = NOVALUE;
    object _29961 = NOVALUE;
    object _29959 = NOVALUE;
    object _29958 = NOVALUE;
    object _29957 = NOVALUE;
    object _29955 = NOVALUE;
    object _29954 = NOVALUE;
    object _29953 = NOVALUE;
    object _29951 = NOVALUE;
    object _29949 = NOVALUE;
    object _29947 = NOVALUE;
    object _29946 = NOVALUE;
    object _29945 = NOVALUE;
    object _29944 = NOVALUE;
    object _29943 = NOVALUE;
    object _29940 = NOVALUE;
    object _29938 = NOVALUE;
    object _29936 = NOVALUE;
    object _29935 = NOVALUE;
    object _29934 = NOVALUE;
    object _29930 = NOVALUE;
    object _29929 = NOVALUE;
    object _29928 = NOVALUE;
    object _29924 = NOVALUE;
    object _29923 = NOVALUE;
    object _29922 = NOVALUE;
    object _29920 = NOVALUE;
    object _29919 = NOVALUE;
    object _29918 = NOVALUE;
    object _29917 = NOVALUE;
    object _29916 = NOVALUE;
    object _29915 = NOVALUE;
    object _29914 = NOVALUE;
    object _29913 = NOVALUE;
    object _29912 = NOVALUE;
    object _29909 = NOVALUE;
    object _29907 = NOVALUE;
    object _29906 = NOVALUE;
    object _29904 = NOVALUE;
    object _29903 = NOVALUE;
    object _29901 = NOVALUE;
    object _29900 = NOVALUE;
    object _29899 = NOVALUE;
    object _29898 = NOVALUE;
    object _29896 = NOVALUE;
    object _29894 = NOVALUE;
    object _29892 = NOVALUE;
    object _29889 = NOVALUE;
    object _29886 = NOVALUE;
    object _29883 = NOVALUE;
    object _29881 = NOVALUE;
    object _29880 = NOVALUE;
    object _29879 = NOVALUE;
    object _29878 = NOVALUE;
    object _29876 = NOVALUE;
    object _29875 = NOVALUE;
    object _29874 = NOVALUE;
    object _29873 = NOVALUE;
    object _29869 = NOVALUE;
    object _29868 = NOVALUE;
    object _29867 = NOVALUE;
    object _29866 = NOVALUE;
    object _29865 = NOVALUE;
    object _29864 = NOVALUE;
    object _29861 = NOVALUE;
    object _29859 = NOVALUE;
    object _29858 = NOVALUE;
    object _29857 = NOVALUE;
    object _29856 = NOVALUE;
    object _29855 = NOVALUE;
    object _29852 = NOVALUE;
    object _29850 = NOVALUE;
    object _29848 = NOVALUE;
    object _29847 = NOVALUE;
    object _29846 = NOVALUE;
    object _29845 = NOVALUE;
    object _29844 = NOVALUE;
    object _29843 = NOVALUE;
    object _29842 = NOVALUE;
    object _29840 = NOVALUE;
    object _29837 = NOVALUE;
    object _29835 = NOVALUE;
    object _29834 = NOVALUE;
    object _29833 = NOVALUE;
    object _29832 = NOVALUE;
    object _29831 = NOVALUE;
    object _29830 = NOVALUE;
    object _29829 = NOVALUE;
    object _29828 = NOVALUE;
    object _29825 = NOVALUE;
    object _29824 = NOVALUE;
    object _29823 = NOVALUE;
    object _29821 = NOVALUE;
    object _29820 = NOVALUE;
    object _29819 = NOVALUE;
    object _29818 = NOVALUE;
    object _29817 = NOVALUE;
    object _29815 = NOVALUE;
    object _29814 = NOVALUE;
    object _29813 = NOVALUE;
    object _29811 = NOVALUE;
    object _29810 = NOVALUE;
    object _29808 = NOVALUE;
    object _29805 = NOVALUE;
    object _29803 = NOVALUE;
    object _29801 = NOVALUE;
    object _29793 = NOVALUE;
    object _29792 = NOVALUE;
    object _29790 = NOVALUE;
    object _29787 = NOVALUE;
    object _29780 = NOVALUE;
    object _29777 = NOVALUE;
    object _29776 = NOVALUE;
    object _29774 = NOVALUE;
    object _29770 = NOVALUE;
    object _29769 = NOVALUE;
    object _29768 = NOVALUE;
    object _29767 = NOVALUE;
    object _29766 = NOVALUE;
    object _29765 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_type_ptr_59448)) {
        _1 = (object)(DBL_PTR(_type_ptr_59448)->dbl);
        DeRefDS(_type_ptr_59448);
        _type_ptr_59448 = _1;
    }

    /** parser.e:3447		object tsym*/

    /** parser.e:3448		object prevtok = 0*/
    DeRef(_prevtok_59454);
    _prevtok_59454 = 0;

    /** parser.e:3450		integer h, count = 0*/
    _count_59459 = 0;

    /** parser.e:3451		atom val = 1, usedval*/
    DeRef(_val_59460);
    _val_59460 = 1;

    /** parser.e:3452		integer deltafunc = '+'*/
    _deltafunc_59462 = 43;

    /** parser.e:3453		atom delta = 1*/
    DeRef(_delta_59463);
    _delta_59463 = 1;

    /** parser.e:3455		new_symbols = {}*/
    RefDS(_21928);
    DeRefi(_new_symbols_59450);
    _new_symbols_59450 = _21928;

    /** parser.e:3456		integer is_fwd_ref = 0*/
    _is_fwd_ref_59464 = 0;

    /** parser.e:3457		if type_ptr > 0 and SymTab[type_ptr][S_SCOPE] = SC_UNDEFINED then*/
    _29765 = (_type_ptr_59448 > 0);
    if (_29765 == 0) {
        goto L1; // [50] 105
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29767 = (object)*(((s1_ptr)_2)->base + _type_ptr_59448);
    _2 = (object)SEQ_PTR(_29767);
    _29768 = (object)*(((s1_ptr)_2)->base + 4);
    _29767 = NOVALUE;
    if (IS_ATOM_INT(_29768)) {
        _29769 = (_29768 == 9);
    }
    else {
        _29769 = binary_op(EQUALS, _29768, 9);
    }
    _29768 = NOVALUE;
    if (_29769 == 0) {
        DeRef(_29769);
        _29769 = NOVALUE;
        goto L1; // [73] 105
    }
    else {
        if (!IS_ATOM_INT(_29769) && DBL_PTR(_29769)->dbl == 0.0){
            DeRef(_29769);
            _29769 = NOVALUE;
            goto L1; // [73] 105
        }
        DeRef(_29769);
        _29769 = NOVALUE;
    }
    DeRef(_29769);
    _29769 = NOVALUE;

    /** parser.e:3458			is_fwd_ref = 1*/
    _is_fwd_ref_59464 = 1;

    /** parser.e:3459			Hide(type_ptr)*/
    _56Hide(_type_ptr_59448);

    /** parser.e:3460			type_ptr = -new_forward_reference( TYPE, type_ptr )*/
    DeRef(_31676);
    _31676 = 504;
    _29770 = _41new_forward_reference(504, _type_ptr_59448, 504);
    _31676 = NOVALUE;
    if (IS_ATOM_INT(_29770)) {
        if ((uintptr_t)_29770 == (uintptr_t)HIGH_BITS){
            _type_ptr_59448 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _type_ptr_59448 = - _29770;
        }
    }
    else {
        _type_ptr_59448 = unary_op(UMINUS, _29770);
    }
    DeRef(_29770);
    _29770 = NOVALUE;
    if (!IS_ATOM_INT(_type_ptr_59448)) {
        _1 = (object)(DBL_PTR(_type_ptr_59448)->dbl);
        DeRefDS(_type_ptr_59448);
        _type_ptr_59448 = _1;
    }
L1: 

    /** parser.e:3463		if type_ptr = -1 then*/
    if (_type_ptr_59448 != -1)
    goto L2; // [107] 424

    /** parser.e:3465			sequence ptok = next_token()*/
    _0 = _ptok_59481;
    _ptok_59481 = _42next_token();
    DeRef(_0);

    /** parser.e:3466			if ptok[T_ID] = TYPE_DECL then*/
    _2 = (object)SEQ_PTR(_ptok_59481);
    _29774 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29774, 416)){
        _29774 = NOVALUE;
        goto L3; // [128] 172
    }
    _29774 = NOVALUE;

    /** parser.e:3469				putback(keyfind("enum",-1))*/
    RefDS(_26113);
    DeRef(_31674);
    _31674 = _26113;
    _31675 = _56hashfn(_31674);
    _31674 = NOVALUE;
    RefDS(_26113);
    _29776 = _56keyfind(_26113, -1, _39current_file_no_16815, 0, _31675);
    _31675 = NOVALUE;
    _42putback(_29776);
    _29776 = NOVALUE;

    /** parser.e:3470				SubProg(TYPE_DECL, scope, 0)*/
    _42SubProg(416, _scope_59449, 0);

    /** parser.e:3471				return {}*/
    RefDS(_21928);
    DeRefDS(_ptok_59481);
    DeRefi(_new_symbols_59450);
    DeRef(_tok_59452);
    DeRef(_tsym_59453);
    DeRef(_prevtok_59454);
    DeRef(_val_59460);
    DeRef(_usedval_59461);
    DeRef(_delta_59463);
    DeRef(_29765);
    _29765 = NOVALUE;
    return _21928;
    goto L4; // [169] 423
L3: 

    /** parser.e:3472			elsif ptok[T_ID] = BY then*/
    _2 = (object)SEQ_PTR(_ptok_59481);
    _29777 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29777, 404)){
        _29777 = NOVALUE;
        goto L5; // [182] 417
    }
    _29777 = NOVALUE;

    /** parser.e:3474				integer negate = 0*/
    _negate_59497 = 0;

    /** parser.e:3475				ptok = next_token()*/
    _0 = _ptok_59481;
    _ptok_59481 = _42next_token();
    DeRefDS(_0);

    /** parser.e:3476				switch ptok[T_ID] do*/
    _2 = (object)SEQ_PTR(_ptok_59481);
    _29780 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_29780) ){
        goto L6; // [206] 285
    }
    if(!IS_ATOM_INT(_29780)){
        if( (DBL_PTR(_29780)->dbl != (eudouble) ((object) DBL_PTR(_29780)->dbl) ) ){
            goto L6; // [206] 285
        }
        _0 = (object) DBL_PTR(_29780)->dbl;
    }
    else {
        _0 = _29780;
    };
    _29780 = NOVALUE;
    switch ( _0 ){ 

        /** parser.e:3477					case reserved:MULTIPLY then*/
        case 13:

        /** parser.e:3478						deltafunc = '*'*/
        _deltafunc_59462 = 42;

        /** parser.e:3479						ptok = next_token()*/
        _0 = _ptok_59481;
        _ptok_59481 = _42next_token();
        DeRef(_0);
        goto L7; // [227] 293

        /** parser.e:3481					case reserved:DIVIDE then*/
        case 14:

        /** parser.e:3482						deltafunc = '/'*/
        _deltafunc_59462 = 47;

        /** parser.e:3483						ptok = next_token()*/
        _0 = _ptok_59481;
        _ptok_59481 = _42next_token();
        DeRef(_0);
        goto L7; // [245] 293

        /** parser.e:3485					case MINUS then*/
        case 10:

        /** parser.e:3486						deltafunc = '-'*/
        _deltafunc_59462 = 45;

        /** parser.e:3487						ptok = next_token()*/
        _0 = _ptok_59481;
        _ptok_59481 = _42next_token();
        DeRef(_0);
        goto L7; // [263] 293

        /** parser.e:3489					case PLUS then*/
        case 11:

        /** parser.e:3490						deltafunc = '+'*/
        _deltafunc_59462 = 43;

        /** parser.e:3491						ptok = next_token()*/
        _0 = _ptok_59481;
        _ptok_59481 = _42next_token();
        DeRef(_0);
        goto L7; // [281] 293

        /** parser.e:3493					case else*/
        default:
L6: 

        /** parser.e:3494						deltafunc = '+'*/
        _deltafunc_59462 = 43;
    ;}L7: 

    /** parser.e:3498				if ptok[T_ID] = MINUS then*/
    _2 = (object)SEQ_PTR(_ptok_59481);
    _29787 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29787, 10)){
        _29787 = NOVALUE;
        goto L8; // [303] 320
    }
    _29787 = NOVALUE;

    /** parser.e:3499					negate = 1*/
    _negate_59497 = 1;

    /** parser.e:3500					ptok = next_token()*/
    _0 = _ptok_59481;
    _ptok_59481 = _42next_token();
    DeRefDS(_0);
L8: 

    /** parser.e:3502				if ptok[T_ID] != ATOM then*/
    _2 = (object)SEQ_PTR(_ptok_59481);
    _29790 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _29790, 502)){
        _29790 = NOVALUE;
        goto L9; // [330] 342
    }
    _29790 = NOVALUE;

    /** parser.e:3503					CompileErr( 344 )*/
    RefDS(_21928);
    _52CompileErr(344, _21928, 0);
L9: 

    /** parser.e:3506				delta = SymTab[ptok[T_SYM]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_ptok_59481);
    _29792 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_29792)){
        _29793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_29792)->dbl));
    }
    else{
        _29793 = (object)*(((s1_ptr)_2)->base + _29792);
    }
    DeRef(_delta_59463);
    _2 = (object)SEQ_PTR(_29793);
    _delta_59463 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_delta_59463);
    _29793 = NOVALUE;

    /** parser.e:3507				if negate then*/
    if (_negate_59497 == 0)
    {
        goto LA; // [364] 373
    }
    else{
    }

    /** parser.e:3508					delta = -delta*/
    _0 = _delta_59463;
    if (IS_ATOM_INT(_delta_59463)) {
        if ((uintptr_t)_delta_59463 == (uintptr_t)HIGH_BITS){
            _delta_59463 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _delta_59463 = - _delta_59463;
        }
    }
    else {
        _delta_59463 = unary_op(UMINUS, _delta_59463);
    }
    DeRef(_0);
LA: 

    /** parser.e:3511				switch deltafunc do*/
    _0 = _deltafunc_59462;
    switch ( _0 ){ 

        /** parser.e:3512					case '/' then*/
        case 47:

        /** parser.e:3513						delta = 1 / delta*/
        _0 = _delta_59463;
        if (IS_ATOM_INT(_delta_59463)) {
            _delta_59463 = (1 % _delta_59463) ? NewDouble((eudouble)1 / _delta_59463) : (1 / _delta_59463);
        }
        else {
            _delta_59463 = NewDouble((eudouble)1 / DBL_PTR(_delta_59463)->dbl);
        }
        DeRef(_0);

        /** parser.e:3514						deltafunc = '*'*/
        _deltafunc_59462 = 42;
        goto LB; // [395] 412

        /** parser.e:3516					case '-' then*/
        case 45:

        /** parser.e:3517						delta = -delta*/
        _0 = _delta_59463;
        if (IS_ATOM_INT(_delta_59463)) {
            if ((uintptr_t)_delta_59463 == (uintptr_t)HIGH_BITS){
                _delta_59463 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _delta_59463 = - _delta_59463;
            }
        }
        else {
            _delta_59463 = unary_op(UMINUS, _delta_59463);
        }
        DeRef(_0);

        /** parser.e:3518						deltafunc = '+'*/
        _deltafunc_59462 = 43;
    ;}LB: 
    goto L4; // [414] 423
L5: 

    /** parser.e:3523				putback(ptok)*/
    RefDS(_ptok_59481);
    _42putback(_ptok_59481);
L4: 
L2: 
    DeRef(_ptok_59481);
    _ptok_59481 = NOVALUE;

    /** parser.e:3527		valsym = 0*/
    _valsym_59457 = 0;

    /** parser.e:3528		while TRUE do*/
LC: 
    if (_9TRUE_444 == 0)
    {
        goto LD; // [440] 2287
    }
    else{
    }

    /** parser.e:3529			tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);

    /** parser.e:3530			if tok[T_ID] = DOLLAR then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29801 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29801, -22)){
        _29801 = NOVALUE;
        goto LE; // [458] 497
    }
    _29801 = NOVALUE;

    /** parser.e:3531				if not equal(prevtok, 0) then*/
    if (_prevtok_59454 == 0)
    _29803 = 1;
    else if (IS_ATOM_INT(_prevtok_59454) && IS_ATOM_INT(0))
    _29803 = 0;
    else
    _29803 = (compare(_prevtok_59454, 0) == 0);
    if (_29803 != 0)
    goto LF; // [468] 496
    _29803 = NOVALUE;

    /** parser.e:3532					if prevtok[T_ID] = COMMA then*/
    _2 = (object)SEQ_PTR(_prevtok_59454);
    _29805 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29805, -30)){
        _29805 = NOVALUE;
        goto L10; // [481] 495
    }
    _29805 = NOVALUE;

    /** parser.e:3534						tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);

    /** parser.e:3535						exit*/
    goto LD; // [492] 2287
L10: 
LF: 
LE: 

    /** parser.e:3539			if tok[T_ID] = END_OF_FILE then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29808 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29808, -21)){
        _29808 = NOVALUE;
        goto L11; // [507] 519
    }
    _29808 = NOVALUE;

    /** parser.e:3540				CompileErr( 32 )*/
    RefDS(_21928);
    _52CompileErr(32, _21928, 0);
L11: 

    /** parser.e:3543			if not find(tok[T_ID], ADDR_TOKS) then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29810 = (object)*(((s1_ptr)_2)->base + 1);
    _29811 = find_from(_29810, _40ADDR_TOKS_16427, 1);
    _29810 = NOVALUE;
    if (_29811 != 0)
    goto L12; // [534] 559
    _29811 = NOVALUE;

    /** parser.e:3544				CompileErr(25, {find_category(tok[T_ID])} )*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29813 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_29813);
    _29814 = _64find_category(_29813);
    _29813 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _29814;
    _29815 = MAKE_SEQ(_1);
    _29814 = NOVALUE;
    _52CompileErr(25, _29815, 0);
    _29815 = NOVALUE;
L12: 

    /** parser.e:3546			sym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _sym_59456 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_59456)){
        _sym_59456 = (object)DBL_PTR(_sym_59456)->dbl;
    }

    /** parser.e:3547			DefinedYet(sym)*/
    _56DefinedYet(_sym_59456);

    /** parser.e:3548			if find(SymTab[sym][S_SCOPE], {SC_GLOBAL, SC_PREDEF, SC_PUBLIC, SC_EXPORT}) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29817 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29817);
    _29818 = (object)*(((s1_ptr)_2)->base + 4);
    _29817 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 7;
    ((intptr_t*)_2)[3] = 13;
    ((intptr_t*)_2)[4] = 11;
    _29819 = MAKE_SEQ(_1);
    _29820 = find_from(_29818, _29819, 1);
    _29818 = NOVALUE;
    DeRefDS(_29819);
    _29819 = NOVALUE;
    if (_29820 == 0)
    {
        _29820 = NOVALUE;
        goto L13; // [608] 670
    }
    else{
        _29820 = NOVALUE;
    }

    /** parser.e:3549				h = SymTab[sym][S_HASHVAL]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29821 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29821);
    _h_59458 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_h_59458)){
        _h_59458 = (object)DBL_PTR(_h_59458)->dbl;
    }
    _29821 = NOVALUE;

    /** parser.e:3551				sym = NewEntry(SymTab[sym][S_NAME], 0, 0, VARIABLE, h, buckets[h], 0)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29823 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29823);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _29824 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _29824 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _29823 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _29825 = (object)*(((s1_ptr)_2)->base + _h_59458);
    Ref(_29824);
    Ref(_29825);
    _sym_59456 = _56NewEntry(_29824, 0, 0, -100, _h_59458, _29825, 0);
    _29824 = NOVALUE;
    _29825 = NOVALUE;
    if (!IS_ATOM_INT(_sym_59456)) {
        _1 = (object)(DBL_PTR(_sym_59456)->dbl);
        DeRefDS(_sym_59456);
        _sym_59456 = _1;
    }

    /** parser.e:3552				buckets[h] = sym*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _2 = (object)(((s1_ptr)_2)->base + _h_59458);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_59456;
    DeRef(_1);
L13: 

    /** parser.e:3555			new_symbols = append(new_symbols, sym)*/
    Append(&_new_symbols_59450, _new_symbols_59450, _sym_59456);

    /** parser.e:3556			Block_var( sym )*/
    _66Block_var(_sym_59456);

    /** parser.e:3557			if SymTab[sym][S_SCOPE] = SC_UNDEFINED and SymTab[sym][S_FILE_NO] != current_file_no then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29828 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29828);
    _29829 = (object)*(((s1_ptr)_2)->base + 4);
    _29828 = NOVALUE;
    if (IS_ATOM_INT(_29829)) {
        _29830 = (_29829 == 9);
    }
    else {
        _29830 = binary_op(EQUALS, _29829, 9);
    }
    _29829 = NOVALUE;
    if (IS_ATOM_INT(_29830)) {
        if (_29830 == 0) {
            goto L14; // [701] 745
        }
    }
    else {
        if (DBL_PTR(_29830)->dbl == 0.0) {
            goto L14; // [701] 745
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29832 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29832);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _29833 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _29833 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _29832 = NOVALUE;
    if (IS_ATOM_INT(_29833)) {
        _29834 = (_29833 != _39current_file_no_16815);
    }
    else {
        _29834 = binary_op(NOTEQ, _29833, _39current_file_no_16815);
    }
    _29833 = NOVALUE;
    if (_29834 == 0) {
        DeRef(_29834);
        _29834 = NOVALUE;
        goto L14; // [724] 745
    }
    else {
        if (!IS_ATOM_INT(_29834) && DBL_PTR(_29834)->dbl == 0.0){
            DeRef(_29834);
            _29834 = NOVALUE;
            goto L14; // [724] 745
        }
        DeRef(_29834);
        _29834 = NOVALUE;
    }
    DeRef(_29834);
    _29834 = NOVALUE;

    /** parser.e:3558				SymTab[sym][S_FILE_NO] = current_file_no*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FILE_NO_16466))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39current_file_no_16815;
    DeRef(_1);
    _29835 = NOVALUE;
L14: 

    /** parser.e:3560			SymTab[sym][S_SCOPE] = scope*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _scope_59449;
    DeRef(_1);
    _29837 = NOVALUE;

    /** parser.e:3562			if type_ptr = 0 then*/
    if (_type_ptr_59448 != 0)
    goto L15; // [762] 1097

    /** parser.e:3564				SymTab[sym][S_MODE] = M_CONSTANT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _29840 = NOVALUE;

    /** parser.e:3566				buckets[SymTab[sym][S_HASHVAL]] = SymTab[sym][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29842 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29842);
    _29843 = (object)*(((s1_ptr)_2)->base + 11);
    _29842 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29844 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29844);
    _29845 = (object)*(((s1_ptr)_2)->base + 9);
    _29844 = NOVALUE;
    Ref(_29845);
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_29843))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_29843)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _29843);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29845;
    if( _1 != _29845 ){
        DeRef(_1);
    }
    _29845 = NOVALUE;

    /** parser.e:3567				tok_match(EQUALS)*/
    _42tok_match(3, 0);

    /** parser.e:3568				StartSourceLine(FALSE, , COVERAGE_OVERRIDE)*/
    _49StartSourceLine(_9FALSE_442, 0, 3);

    /** parser.e:3569				emit_opnd(sym)*/
    _49emit_opnd(_sym_59456);

    /** parser.e:3570				Expr()  -- no new symbols can be defined in here*/
    _42Expr();

    /** parser.e:3571				buckets[SymTab[sym][S_HASHVAL]] = sym*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29846 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29846);
    _29847 = (object)*(((s1_ptr)_2)->base + 11);
    _29846 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_29847))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_29847)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _29847);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_59456;
    DeRef(_1);

    /** parser.e:3572				SymTab[sym][S_USAGE] = U_WRITTEN*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _29848 = NOVALUE;

    /** parser.e:3573				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L16; // [884] 922
    }
    else{
    }

    /** parser.e:3574					SymTab[sym][S_GTYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _29850 = NOVALUE;

    /** parser.e:3575					SymTab[sym][S_OBJ] = NOVALUE     -- distinguish from literals*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    _29852 = NOVALUE;
L16: 

    /** parser.e:3577				valsym = Top()*/
    _valsym_59457 = _49Top();
    if (!IS_ATOM_INT(_valsym_59457)) {
        _1 = (object)(DBL_PTR(_valsym_59457)->dbl);
        DeRefDS(_valsym_59457);
        _valsym_59457 = _1;
    }

    /** parser.e:3579				if valsym > 0 and compare( SymTab[valsym][S_OBJ], NOVALUE ) then*/
    _29855 = (_valsym_59457 > 0);
    if (_29855 == 0) {
        goto L17; // [935] 976
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29857 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29857);
    _29858 = (object)*(((s1_ptr)_2)->base + 1);
    _29857 = NOVALUE;
    if (IS_ATOM_INT(_29858) && IS_ATOM_INT(_39NOVALUE_16670)){
        _29859 = (_29858 < _39NOVALUE_16670) ? -1 : (_29858 > _39NOVALUE_16670);
    }
    else{
        _29859 = compare(_29858, _39NOVALUE_16670);
    }
    _29858 = NOVALUE;
    if (_29859 == 0)
    {
        _29859 = NOVALUE;
        goto L17; // [958] 976
    }
    else{
        _29859 = NOVALUE;
    }

    /** parser.e:3580					Assign_Constant( sym )*/
    _42Assign_Constant(_sym_59456);

    /** parser.e:3581					sym = Pop()*/
    _sym_59456 = _49Pop();
    if (!IS_ATOM_INT(_sym_59456)) {
        _1 = (object)(DBL_PTR(_sym_59456)->dbl);
        DeRefDS(_sym_59456);
        _sym_59456 = _1;
    }
    goto L18; // [973] 2253
L17: 

    /** parser.e:3584					emit_op(ASSIGN)*/
    _49emit_op(18);

    /** parser.e:3585					if Last_op() = ASSIGN then*/
    _29861 = _49Last_op();
    if (binary_op_a(NOTEQ, _29861, 18)){
        DeRef(_29861);
        _29861 = NOVALUE;
        goto L19; // [990] 1004
    }
    DeRef(_29861);
    _29861 = NOVALUE;

    /** parser.e:3586						valsym = get_assigned_sym()*/
    _valsym_59457 = _42get_assigned_sym();
    if (!IS_ATOM_INT(_valsym_59457)) {
        _1 = (object)(DBL_PTR(_valsym_59457)->dbl);
        DeRefDS(_valsym_59457);
        _valsym_59457 = _1;
    }
    goto L1A; // [1001] 1012
L19: 

    /** parser.e:3589						valsym = -1*/
    _valsym_59457 = -1;
L1A: 

    /** parser.e:3591					if valsym > 0 and compare( SymTab[valsym][S_OBJ], NOVALUE ) then*/
    _29864 = (_valsym_59457 > 0);
    if (_29864 == 0) {
        goto L1B; // [1018] 1060
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29866 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29866);
    _29867 = (object)*(((s1_ptr)_2)->base + 1);
    _29866 = NOVALUE;
    if (IS_ATOM_INT(_29867) && IS_ATOM_INT(_39NOVALUE_16670)){
        _29868 = (_29867 < _39NOVALUE_16670) ? -1 : (_29867 > _39NOVALUE_16670);
    }
    else{
        _29868 = compare(_29867, _39NOVALUE_16670);
    }
    _29867 = NOVALUE;
    if (_29868 == 0)
    {
        _29868 = NOVALUE;
        goto L1B; // [1041] 1060
    }
    else{
        _29868 = NOVALUE;
    }

    /** parser.e:3593						SymTab[sym][S_CODE] = valsym*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _valsym_59457;
    DeRef(_1);
    _29869 = NOVALUE;
L1B: 

    /** parser.e:3596					if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L18; // [1064] 2253
    }
    else{
    }

    /** parser.e:3597						count += 1*/
    _count_59459 = _count_59459 + 1;

    /** parser.e:3598						if count = 10 then*/
    if (_count_59459 != 10)
    goto L18; // [1075] 2253

    /** parser.e:3599							count = 0*/
    _count_59459 = 0;

    /** parser.e:3601							emit_op( RETURNT )*/
    _49emit_op(34);
    goto L18; // [1094] 2253
L15: 

    /** parser.e:3606			elsif type_ptr = -1 and not is_fwd_ref then*/
    _29873 = (_type_ptr_59448 == -1);
    if (_29873 == 0) {
        goto L1C; // [1103] 2080
    }
    _29875 = (_is_fwd_ref_59464 == 0);
    if (_29875 == 0)
    {
        DeRef(_29875);
        _29875 = NOVALUE;
        goto L1C; // [1111] 2080
    }
    else{
        DeRef(_29875);
        _29875 = NOVALUE;
    }

    /** parser.e:3608				StartSourceLine(FALSE, , COVERAGE_OVERRIDE )*/
    _49StartSourceLine(_9FALSE_442, 0, 3);

    /** parser.e:3609				SymTab[sym][S_MODE] = M_CONSTANT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _29876 = NOVALUE;

    /** parser.e:3611				buckets[SymTab[sym][S_HASHVAL]] = SymTab[sym][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29878 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29878);
    _29879 = (object)*(((s1_ptr)_2)->base + 11);
    _29878 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29880 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29880);
    _29881 = (object)*(((s1_ptr)_2)->base + 9);
    _29880 = NOVALUE;
    Ref(_29881);
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_29879))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_29879)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _29879);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29881;
    if( _1 != _29881 ){
        DeRef(_1);
    }
    _29881 = NOVALUE;

    /** parser.e:3612				tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);

    /** parser.e:3615				emit_opnd(sym)*/
    _49emit_opnd(_sym_59456);

    /** parser.e:3617				if tok[T_ID] = EQUALS then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29883 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29883, 3)){
        _29883 = NOVALUE;
        goto L1D; // [1194] 1591
    }
    _29883 = NOVALUE;

    /** parser.e:3618					integer negate = 1*/
    _negate_59743 = 1;

    /** parser.e:3620					tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);

    /** parser.e:3621					if tok[T_ID] = MINUS then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29886 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29886, 10)){
        _29886 = NOVALUE;
        goto L1E; // [1218] 1233
    }
    _29886 = NOVALUE;

    /** parser.e:3622						negate = -1*/
    _negate_59743 = -1;

    /** parser.e:3623						tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);
L1E: 

    /** parser.e:3626					if tok[T_ID] = ATOM then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29889 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29889, 502)){
        _29889 = NOVALUE;
        goto L1F; // [1243] 1260
    }
    _29889 = NOVALUE;

    /** parser.e:3627						valsym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _valsym_59457 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_valsym_59457)){
        _valsym_59457 = (object)DBL_PTR(_valsym_59457)->dbl;
    }
    goto L20; // [1257] 1450
L1F: 

    /** parser.e:3628					elsif tok[T_SYM] > 0 then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29892 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(LESSEQ, _29892, 0)){
        _29892 = NOVALUE;
        goto L21; // [1268] 1442
    }
    _29892 = NOVALUE;

    /** parser.e:3629						tsym = SymTab[tok[T_SYM]]*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _29894 = (object)*(((s1_ptr)_2)->base + 2);
    DeRef(_tsym_59453);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_29894)){
        _tsym_59453 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_29894)->dbl));
    }
    else{
        _tsym_59453 = (object)*(((s1_ptr)_2)->base + _29894);
    }
    Ref(_tsym_59453);

    /** parser.e:3630						if tsym[S_MODE] = M_CONSTANT then*/
    _2 = (object)SEQ_PTR(_tsym_59453);
    _29896 = (object)*(((s1_ptr)_2)->base + 3);
    if (binary_op_a(NOTEQ, _29896, 2)){
        _29896 = NOVALUE;
        goto L22; // [1296] 1405
    }
    _29896 = NOVALUE;

    /** parser.e:3631							if length(tsym) >= S_CODE and tsym[S_CODE] then*/
    if (IS_SEQUENCE(_tsym_59453)){
            _29898 = SEQ_PTR(_tsym_59453)->length;
    }
    else {
        _29898 = 1;
    }
    if (IS_ATOM_INT(_39S_CODE_16482)) {
        _29899 = (_29898 >= _39S_CODE_16482);
    }
    else {
        _29899 = binary_op(GREATEREQ, _29898, _39S_CODE_16482);
    }
    _29898 = NOVALUE;
    if (IS_ATOM_INT(_29899)) {
        if (_29899 == 0) {
            goto L23; // [1311] 1338
        }
    }
    else {
        if (DBL_PTR(_29899)->dbl == 0.0) {
            goto L23; // [1311] 1338
        }
    }
    _2 = (object)SEQ_PTR(_tsym_59453);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _29901 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _29901 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    if (_29901 == 0) {
        _29901 = NOVALUE;
        goto L23; // [1322] 1338
    }
    else {
        if (!IS_ATOM_INT(_29901) && DBL_PTR(_29901)->dbl == 0.0){
            _29901 = NOVALUE;
            goto L23; // [1322] 1338
        }
        _29901 = NOVALUE;
    }
    _29901 = NOVALUE;

    /** parser.e:3632								valsym = tsym[S_CODE]*/
    _2 = (object)SEQ_PTR(_tsym_59453);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _valsym_59457 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _valsym_59457 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    if (!IS_ATOM_INT(_valsym_59457)){
        _valsym_59457 = (object)DBL_PTR(_valsym_59457)->dbl;
    }
    goto L20; // [1335] 1450
L23: 

    /** parser.e:3634							elsif not equal( tsym[S_OBJ], NOVALUE ) then*/
    _2 = (object)SEQ_PTR(_tsym_59453);
    _29903 = (object)*(((s1_ptr)_2)->base + 1);
    if (_29903 == _39NOVALUE_16670)
    _29904 = 1;
    else if (IS_ATOM_INT(_29903) && IS_ATOM_INT(_39NOVALUE_16670))
    _29904 = 0;
    else
    _29904 = (compare(_29903, _39NOVALUE_16670) == 0);
    _29903 = NOVALUE;
    if (_29904 != 0)
    goto L24; // [1352] 1394
    _29904 = NOVALUE;

    /** parser.e:3635								if is_integer(tsym[S_OBJ]) then*/
    _2 = (object)SEQ_PTR(_tsym_59453);
    _29906 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_29906);
    _29907 = _39is_integer(_29906);
    _29906 = NOVALUE;
    if (_29907 == 0) {
        DeRef(_29907);
        _29907 = NOVALUE;
        goto L25; // [1367] 1383
    }
    else {
        if (!IS_ATOM_INT(_29907) && DBL_PTR(_29907)->dbl == 0.0){
            DeRef(_29907);
            _29907 = NOVALUE;
            goto L25; // [1367] 1383
        }
        DeRef(_29907);
        _29907 = NOVALUE;
    }
    DeRef(_29907);
    _29907 = NOVALUE;

    /** parser.e:3636									valsym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _valsym_59457 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_valsym_59457)){
        _valsym_59457 = (object)DBL_PTR(_valsym_59457)->dbl;
    }
    goto L20; // [1380] 1450
L25: 

    /** parser.e:3638									CompileErr(30)*/
    RefDS(_21928);
    _52CompileErr(30, _21928, 0);
    goto L20; // [1391] 1450
L24: 

    /** parser.e:3641								CompileErr(70)*/
    RefDS(_21928);
    _52CompileErr(70, _21928, 0);
    goto L20; // [1402] 1450
L22: 

    /** parser.e:3643						elsif tsym[S_OBJ] = NOVALUE then*/
    _2 = (object)SEQ_PTR(_tsym_59453);
    _29909 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _29909, _39NOVALUE_16670)){
        _29909 = NOVALUE;
        goto L26; // [1415] 1431
    }
    _29909 = NOVALUE;

    /** parser.e:3645							CompileErr(ENUM_FWD_REFERENCES_NOT_SUPPORTED)*/
    RefDS(_21928);
    _52CompileErr(331, _21928, 0);
    goto L20; // [1428] 1450
L26: 

    /** parser.e:3647							CompileErr(99)*/
    RefDS(_21928);
    _52CompileErr(99, _21928, 0);
    goto L20; // [1439] 1450
L21: 

    /** parser.e:3651							CompileErr(99)*/
    RefDS(_21928);
    _52CompileErr(99, _21928, 0);
L20: 

    /** parser.e:3653					valsym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _valsym_59457 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_valsym_59457)){
        _valsym_59457 = (object)DBL_PTR(_valsym_59457)->dbl;
    }

    /** parser.e:3654					if not atom( SymTab[valsym][S_OBJ] ) and tsym[S_SCOPE] != SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29912 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29912);
    _29913 = (object)*(((s1_ptr)_2)->base + 1);
    _29912 = NOVALUE;
    _29914 = IS_ATOM(_29913);
    _29913 = NOVALUE;
    _29915 = (_29914 == 0);
    _29914 = NOVALUE;
    if (_29915 == 0) {
        goto L27; // [1480] 1510
    }
    _2 = (object)SEQ_PTR(_tsym_59453);
    _29917 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_29917)) {
        _29918 = (_29917 != 9);
    }
    else {
        _29918 = binary_op(NOTEQ, _29917, 9);
    }
    _29917 = NOVALUE;
    if (_29918 == 0) {
        DeRef(_29918);
        _29918 = NOVALUE;
        goto L27; // [1499] 1510
    }
    else {
        if (!IS_ATOM_INT(_29918) && DBL_PTR(_29918)->dbl == 0.0){
            DeRef(_29918);
            _29918 = NOVALUE;
            goto L27; // [1499] 1510
        }
        DeRef(_29918);
        _29918 = NOVALUE;
    }
    DeRef(_29918);
    _29918 = NOVALUE;

    /** parser.e:3655						CompileErr(84)*/
    RefDS(_21928);
    _52CompileErr(84, _21928, 0);
L27: 

    /** parser.e:3657					val = SymTab[valsym][S_OBJ] * negate*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29919 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29919);
    _29920 = (object)*(((s1_ptr)_2)->base + 1);
    _29919 = NOVALUE;
    DeRef(_val_59460);
    if (IS_ATOM_INT(_29920)) {
        if (_29920 == (short)_29920 && _negate_59743 <= INT15 && _negate_59743 >= -INT15){
            _val_59460 = _29920 * _negate_59743;
        }
        else{
            _val_59460 = NewDouble(_29920 * (eudouble)_negate_59743);
        }
    }
    else {
        _val_59460 = binary_op(MULTIPLY, _29920, _negate_59743);
    }
    _29920 = NOVALUE;

    /** parser.e:3658					if is_integer(val) then*/
    Ref(_val_59460);
    _29922 = _39is_integer(_val_59460);
    if (_29922 == 0) {
        DeRef(_29922);
        _29922 = NOVALUE;
        goto L28; // [1534] 1549
    }
    else {
        if (!IS_ATOM_INT(_29922) && DBL_PTR(_29922)->dbl == 0.0){
            DeRef(_29922);
            _29922 = NOVALUE;
            goto L28; // [1534] 1549
        }
        DeRef(_29922);
        _29922 = NOVALUE;
    }
    DeRef(_29922);
    _29922 = NOVALUE;

    /** parser.e:3659						Push(NewIntSym(val))*/
    Ref(_val_59460);
    _29923 = _56NewIntSym(_val_59460);
    _49Push(_29923);
    _29923 = NOVALUE;
    goto L29; // [1546] 1559
L28: 

    /** parser.e:3661						Push(NewDoubleSym(val))*/
    Ref(_val_59460);
    _29924 = _56NewDoubleSym(_val_59460);
    _49Push(_29924);
    _29924 = NOVALUE;
L29: 

    /** parser.e:3663					usedval = val*/
    Ref(_val_59460);
    DeRef(_usedval_59461);
    _usedval_59461 = _val_59460;

    /** parser.e:3664					if deltafunc = '+' then*/
    if (_deltafunc_59462 != 43)
    goto L2A; // [1566] 1579

    /** parser.e:3665						val += delta*/
    _0 = _val_59460;
    if (IS_ATOM_INT(_val_59460) && IS_ATOM_INT(_delta_59463)) {
        _val_59460 = _val_59460 + _delta_59463;
        if ((object)((uintptr_t)_val_59460 + (uintptr_t)HIGH_BITS) >= 0){
            _val_59460 = NewDouble((eudouble)_val_59460);
        }
    }
    else {
        if (IS_ATOM_INT(_val_59460)) {
            _val_59460 = NewDouble((eudouble)_val_59460 + DBL_PTR(_delta_59463)->dbl);
        }
        else {
            if (IS_ATOM_INT(_delta_59463)) {
                _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl + (eudouble)_delta_59463);
            }
            else
            _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl + DBL_PTR(_delta_59463)->dbl);
        }
    }
    DeRef(_0);
    goto L2B; // [1576] 1586
L2A: 

    /** parser.e:3667						val *= delta*/
    _0 = _val_59460;
    if (IS_ATOM_INT(_val_59460) && IS_ATOM_INT(_delta_59463)) {
        if (_val_59460 == (short)_val_59460 && _delta_59463 <= INT15 && _delta_59463 >= -INT15){
            _val_59460 = _val_59460 * _delta_59463;
        }
        else{
            _val_59460 = NewDouble(_val_59460 * (eudouble)_delta_59463);
        }
    }
    else {
        if (IS_ATOM_INT(_val_59460)) {
            _val_59460 = NewDouble((eudouble)_val_59460 * DBL_PTR(_delta_59463)->dbl);
        }
        else {
            if (IS_ATOM_INT(_delta_59463)) {
                _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl * (eudouble)_delta_59463);
            }
            else
            _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl * DBL_PTR(_delta_59463)->dbl);
        }
    }
    DeRef(_0);
L2B: 
    goto L2C; // [1588] 1662
L1D: 

    /** parser.e:3670					putback(tok)*/
    Ref(_tok_59452);
    _42putback(_tok_59452);

    /** parser.e:3671					if is_integer(val) then*/
    Ref(_val_59460);
    _29928 = _39is_integer(_val_59460);
    if (_29928 == 0) {
        DeRef(_29928);
        _29928 = NOVALUE;
        goto L2D; // [1602] 1617
    }
    else {
        if (!IS_ATOM_INT(_29928) && DBL_PTR(_29928)->dbl == 0.0){
            DeRef(_29928);
            _29928 = NOVALUE;
            goto L2D; // [1602] 1617
        }
        DeRef(_29928);
        _29928 = NOVALUE;
    }
    DeRef(_29928);
    _29928 = NOVALUE;

    /** parser.e:3672						Push(NewIntSym(val))*/
    Ref(_val_59460);
    _29929 = _56NewIntSym(_val_59460);
    _49Push(_29929);
    _29929 = NOVALUE;
    goto L2E; // [1614] 1627
L2D: 

    /** parser.e:3674						Push(NewDoubleSym(val))*/
    Ref(_val_59460);
    _29930 = _56NewDoubleSym(_val_59460);
    _49Push(_29930);
    _29930 = NOVALUE;
L2E: 

    /** parser.e:3676					usedval = val*/
    Ref(_val_59460);
    DeRef(_usedval_59461);
    _usedval_59461 = _val_59460;

    /** parser.e:3677					if deltafunc = '+' then*/
    if (_deltafunc_59462 != 43)
    goto L2F; // [1634] 1647

    /** parser.e:3678						val += delta*/
    _0 = _val_59460;
    if (IS_ATOM_INT(_val_59460) && IS_ATOM_INT(_delta_59463)) {
        _val_59460 = _val_59460 + _delta_59463;
        if ((object)((uintptr_t)_val_59460 + (uintptr_t)HIGH_BITS) >= 0){
            _val_59460 = NewDouble((eudouble)_val_59460);
        }
    }
    else {
        if (IS_ATOM_INT(_val_59460)) {
            _val_59460 = NewDouble((eudouble)_val_59460 + DBL_PTR(_delta_59463)->dbl);
        }
        else {
            if (IS_ATOM_INT(_delta_59463)) {
                _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl + (eudouble)_delta_59463);
            }
            else
            _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl + DBL_PTR(_delta_59463)->dbl);
        }
    }
    DeRef(_0);
    goto L30; // [1644] 1654
L2F: 

    /** parser.e:3680						val *= delta*/
    _0 = _val_59460;
    if (IS_ATOM_INT(_val_59460) && IS_ATOM_INT(_delta_59463)) {
        if (_val_59460 == (short)_val_59460 && _delta_59463 <= INT15 && _delta_59463 >= -INT15){
            _val_59460 = _val_59460 * _delta_59463;
        }
        else{
            _val_59460 = NewDouble(_val_59460 * (eudouble)_delta_59463);
        }
    }
    else {
        if (IS_ATOM_INT(_val_59460)) {
            _val_59460 = NewDouble((eudouble)_val_59460 * DBL_PTR(_delta_59463)->dbl);
        }
        else {
            if (IS_ATOM_INT(_delta_59463)) {
                _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl * (eudouble)_delta_59463);
            }
            else
            _val_59460 = NewDouble(DBL_PTR(_val_59460)->dbl * DBL_PTR(_delta_59463)->dbl);
        }
    }
    DeRef(_0);
L30: 

    /** parser.e:3682					valsym = 0*/
    _valsym_59457 = 0;
L2C: 

    /** parser.e:3684				buckets[SymTab[sym][S_HASHVAL]] = sym*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29934 = (object)*(((s1_ptr)_2)->base + _sym_59456);
    _2 = (object)SEQ_PTR(_29934);
    _29935 = (object)*(((s1_ptr)_2)->base + 11);
    _29934 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_29935))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_29935)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _29935);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_59456;
    DeRef(_1);

    /** parser.e:3685				SymTab[sym][S_USAGE] = U_WRITTEN*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _29936 = NOVALUE;

    /** parser.e:3687				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L31; // [1703] 1741
    }
    else{
    }

    /** parser.e:3688					SymTab[sym][S_GTYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _29938 = NOVALUE;

    /** parser.e:3689					SymTab[sym][S_OBJ] = NOVALUE     -- distinguish from literals*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    _29940 = NOVALUE;
L31: 

    /** parser.e:3692				if valsym < 0 then*/
    if (_valsym_59457 >= 0)
    goto L32; // [1743] 1748
L32: 

    /** parser.e:3697				if valsym and compare( SymTab[valsym][S_OBJ], NOVALUE ) then*/
    if (_valsym_59457 == 0) {
        goto L33; // [1750] 1930
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29944 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29944);
    _29945 = (object)*(((s1_ptr)_2)->base + 1);
    _29944 = NOVALUE;
    if (IS_ATOM_INT(_29945) && IS_ATOM_INT(_39NOVALUE_16670)){
        _29946 = (_29945 < _39NOVALUE_16670) ? -1 : (_29945 > _39NOVALUE_16670);
    }
    else{
        _29946 = compare(_29945, _39NOVALUE_16670);
    }
    _29945 = NOVALUE;
    if (_29946 == 0)
    {
        _29946 = NOVALUE;
        goto L33; // [1773] 1930
    }
    else{
        _29946 = NOVALUE;
    }

    /** parser.e:3699					SymTab[sym][S_CODE] = valsym*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _valsym_59457;
    DeRef(_1);
    _29947 = NOVALUE;

    /** parser.e:3700					SymTab[sym][S_OBJ]  = usedval*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_usedval_59461);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _usedval_59461;
    DeRef(_1);
    _29949 = NOVALUE;

    /** parser.e:3702					if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L34; // [1812] 2063
    }
    else{
    }

    /** parser.e:3704						SymTab[sym][S_GTYPE] = SymTab[valsym][S_GTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29953 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29953);
    _29954 = (object)*(((s1_ptr)_2)->base + 36);
    _29953 = NOVALUE;
    Ref(_29954);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29954;
    if( _1 != _29954 ){
        DeRef(_1);
    }
    _29954 = NOVALUE;
    _29951 = NOVALUE;

    /** parser.e:3705						SymTab[sym][S_SEQ_ELEM] = SymTab[valsym][S_SEQ_ELEM]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29957 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29957);
    _29958 = (object)*(((s1_ptr)_2)->base + 33);
    _29957 = NOVALUE;
    Ref(_29958);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29958;
    if( _1 != _29958 ){
        DeRef(_1);
    }
    _29958 = NOVALUE;
    _29955 = NOVALUE;

    /** parser.e:3706						SymTab[sym][S_OBJ_MIN] = usedval*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_usedval_59461);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _usedval_59461;
    DeRef(_1);
    _29959 = NOVALUE;

    /** parser.e:3707						SymTab[sym][S_OBJ_MAX] = usedval*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_usedval_59461);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _usedval_59461;
    DeRef(_1);
    _29961 = NOVALUE;

    /** parser.e:3708						SymTab[sym][S_SEQ_LEN] = SymTab[valsym][S_SEQ_LEN]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29965 = (object)*(((s1_ptr)_2)->base + _valsym_59457);
    _2 = (object)SEQ_PTR(_29965);
    _29966 = (object)*(((s1_ptr)_2)->base + 32);
    _29965 = NOVALUE;
    Ref(_29966);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29966;
    if( _1 != _29966 ){
        DeRef(_1);
    }
    _29966 = NOVALUE;
    _29963 = NOVALUE;
    goto L34; // [1927] 2063
L33: 

    /** parser.e:3711					SymTab[sym][S_OBJ] = usedval*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_usedval_59461);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _usedval_59461;
    DeRef(_1);
    _29967 = NOVALUE;

    /** parser.e:3712					if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L35; // [1951] 2062
    }
    else{
    }

    /** parser.e:3714						if is_integer( usedval ) then*/
    Ref(_usedval_59461);
    _29969 = _39is_integer(_usedval_59461);
    if (_29969 == 0) {
        DeRef(_29969);
        _29969 = NOVALUE;
        goto L36; // [1960] 1983
    }
    else {
        if (!IS_ATOM_INT(_29969) && DBL_PTR(_29969)->dbl == 0.0){
            DeRef(_29969);
            _29969 = NOVALUE;
            goto L36; // [1960] 1983
        }
        DeRef(_29969);
        _29969 = NOVALUE;
    }
    DeRef(_29969);
    _29969 = NOVALUE;

    /** parser.e:3715							SymTab[sym][S_GTYPE] = TYPE_INTEGER*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _29970 = NOVALUE;
    goto L37; // [1980] 2001
L36: 

    /** parser.e:3717							SymTab[sym][S_GTYPE] = TYPE_DOUBLE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _29972 = NOVALUE;
L37: 

    /** parser.e:3719						SymTab[sym][S_SEQ_ELEM] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _29974 = NOVALUE;

    /** parser.e:3720						SymTab[sym][S_OBJ_MIN] = usedval*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_usedval_59461);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _usedval_59461;
    DeRef(_1);
    _29976 = NOVALUE;

    /** parser.e:3721						SymTab[sym][S_OBJ_MAX] = usedval*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    Ref(_usedval_59461);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _usedval_59461;
    DeRef(_1);
    _29978 = NOVALUE;

    /** parser.e:3722						SymTab[sym][S_SEQ_LEN] = 0 --SymTab[valsym][S_SEQ_LEN]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _29980 = NOVALUE;
L35: 
L34: 

    /** parser.e:3725				valsym = Pop()*/
    _valsym_59457 = _49Pop();
    if (!IS_ATOM_INT(_valsym_59457)) {
        _1 = (object)(DBL_PTR(_valsym_59457)->dbl);
        DeRefDS(_valsym_59457);
        _valsym_59457 = _1;
    }

    /** parser.e:3726				valsym = Pop()*/
    _valsym_59457 = _49Pop();
    if (!IS_ATOM_INT(_valsym_59457)) {
        _1 = (object)(DBL_PTR(_valsym_59457)->dbl);
        DeRefDS(_valsym_59457);
        _valsym_59457 = _1;
    }
    goto L18; // [2077] 2253
L1C: 

    /** parser.e:3729				SymTab[sym][S_MODE] = M_NORMAL*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _29984 = NOVALUE;

    /** parser.e:3730				if type_ptr > 0 and SymTab[type_ptr][S_TOKEN] = OBJECT then*/
    _29986 = (_type_ptr_59448 > 0);
    if (_29986 == 0) {
        goto L38; // [2103] 2149
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _29988 = (object)*(((s1_ptr)_2)->base + _type_ptr_59448);
    _2 = (object)SEQ_PTR(_29988);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _29989 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _29989 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _29988 = NOVALUE;
    if (IS_ATOM_INT(_29989)) {
        _29990 = (_29989 == 415);
    }
    else {
        _29990 = binary_op(EQUALS, _29989, 415);
    }
    _29989 = NOVALUE;
    if (_29990 == 0) {
        DeRef(_29990);
        _29990 = NOVALUE;
        goto L38; // [2126] 2149
    }
    else {
        if (!IS_ATOM_INT(_29990) && DBL_PTR(_29990)->dbl == 0.0){
            DeRef(_29990);
            _29990 = NOVALUE;
            goto L38; // [2126] 2149
        }
        DeRef(_29990);
        _29990 = NOVALUE;
    }
    DeRef(_29990);
    _29990 = NOVALUE;

    /** parser.e:3731					SymTab[sym][S_VTYPE] = object_type*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56object_type_46258;
    DeRef(_1);
    _29991 = NOVALUE;
    goto L39; // [2146] 2178
L38: 

    /** parser.e:3733					SymTab[sym][S_VTYPE] = type_ptr*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _type_ptr_59448;
    DeRef(_1);
    _29993 = NOVALUE;

    /** parser.e:3734					if type_ptr < 0 then*/
    if (_type_ptr_59448 >= 0)
    goto L3A; // [2166] 2177

    /** parser.e:3735						register_forward_type( sym, type_ptr )*/
    _41register_forward_type(_sym_59456, _type_ptr_59448);
L3A: 
L39: 

    /** parser.e:3739				if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3B; // [2182] 2205
    }
    else{
    }

    /** parser.e:3740					SymTab[sym][S_GTYPE] = CompileType(type_ptr)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_59456 + ((s1_ptr)_2)->base);
    _29998 = _42CompileType(_type_ptr_59448);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29998;
    if( _1 != _29998 ){
        DeRef(_1);
    }
    _29998 = NOVALUE;
    _29996 = NOVALUE;
L3B: 

    /** parser.e:3743		   		tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);

    /** parser.e:3744	   			putback(tok)*/
    Ref(_tok_59452);
    _42putback(_tok_59452);

    /** parser.e:3745		   		if tok[T_ID] = EQUALS then -- assign on declare*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _30000 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30000, 3)){
        _30000 = NOVALUE;
        goto L3C; // [2225] 2252
    }
    _30000 = NOVALUE;

    /** parser.e:3746		   			StartSourceLine( FALSE, , COVERAGE_OVERRIDE )*/
    _49StartSourceLine(_9FALSE_442, 0, 3);

    /** parser.e:3747		   			Assignment({VARIABLE,sym})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _sym_59456;
    _30002 = MAKE_SEQ(_1);
    _42Assignment(_30002);
    _30002 = NOVALUE;
L3C: 
L18: 

    /** parser.e:3750			tok = next_token()*/
    _0 = _tok_59452;
    _tok_59452 = _42next_token();
    DeRef(_0);

    /** parser.e:3751			if tok[T_ID] != COMMA then*/
    _2 = (object)SEQ_PTR(_tok_59452);
    _30004 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _30004, -30)){
        _30004 = NOVALUE;
        goto L3D; // [2268] 2277
    }
    _30004 = NOVALUE;

    /** parser.e:3752				exit*/
    goto LD; // [2274] 2287
L3D: 

    /** parser.e:3754			prevtok = tok*/
    Ref(_tok_59452);
    DeRef(_prevtok_59454);
    _prevtok_59454 = _tok_59452;

    /** parser.e:3755		end while*/
    goto LC; // [2284] 438
LD: 

    /** parser.e:3756		putback(tok)*/
    Ref(_tok_59452);
    _42putback(_tok_59452);

    /** parser.e:3757		return new_symbols*/
    DeRef(_tok_59452);
    DeRef(_tsym_59453);
    DeRef(_prevtok_59454);
    DeRef(_val_59460);
    DeRef(_usedval_59461);
    DeRef(_delta_59463);
    _29843 = NOVALUE;
    DeRef(_29864);
    _29864 = NOVALUE;
    DeRef(_29986);
    _29986 = NOVALUE;
    DeRef(_29915);
    _29915 = NOVALUE;
    DeRef(_29765);
    _29765 = NOVALUE;
    DeRef(_29873);
    _29873 = NOVALUE;
    _29935 = NOVALUE;
    _29847 = NOVALUE;
    _29879 = NOVALUE;
    DeRef(_29830);
    _29830 = NOVALUE;
    _29792 = NOVALUE;
    DeRef(_29899);
    _29899 = NOVALUE;
    _29894 = NOVALUE;
    DeRef(_29855);
    _29855 = NOVALUE;
    return _new_symbols_59450;
    ;
}


void _42Private_declaration(object _type_sym_60029)
{
    object _tok_60031 = NOVALUE;
    object _sym_60033 = NOVALUE;
    object _31673 = NOVALUE;
    object _31672 = NOVALUE;
    object _31671 = NOVALUE;
    object _30030 = NOVALUE;
    object _30028 = NOVALUE;
    object _30026 = NOVALUE;
    object _30024 = NOVALUE;
    object _30022 = NOVALUE;
    object _30020 = NOVALUE;
    object _30018 = NOVALUE;
    object _30015 = NOVALUE;
    object _30013 = NOVALUE;
    object _30012 = NOVALUE;
    object _30009 = NOVALUE;
    object _30007 = NOVALUE;
    object _30006 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_type_sym_60029)) {
        _1 = (object)(DBL_PTR(_type_sym_60029)->dbl);
        DeRefDS(_type_sym_60029);
        _type_sym_60029 = _1;
    }

    /** parser.e:3765		if SymTab[type_sym][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30006 = (object)*(((s1_ptr)_2)->base + _type_sym_60029);
    _2 = (object)SEQ_PTR(_30006);
    _30007 = (object)*(((s1_ptr)_2)->base + 4);
    _30006 = NOVALUE;
    if (binary_op_a(NOTEQ, _30007, 9)){
        _30007 = NOVALUE;
        goto L1; // [19] 47
    }
    _30007 = NOVALUE;

    /** parser.e:3766			Hide( type_sym )*/
    _56Hide(_type_sym_60029);

    /** parser.e:3767			type_sym = -new_forward_reference( TYPE, type_sym )*/
    _31673 = 504;
    _30009 = _41new_forward_reference(504, _type_sym_60029, 504);
    _31673 = NOVALUE;
    if (IS_ATOM_INT(_30009)) {
        if ((uintptr_t)_30009 == (uintptr_t)HIGH_BITS){
            _type_sym_60029 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _type_sym_60029 = - _30009;
        }
    }
    else {
        _type_sym_60029 = unary_op(UMINUS, _30009);
    }
    DeRef(_30009);
    _30009 = NOVALUE;
    if (!IS_ATOM_INT(_type_sym_60029)) {
        _1 = (object)(DBL_PTR(_type_sym_60029)->dbl);
        DeRefDS(_type_sym_60029);
        _type_sym_60029 = _1;
    }
L1: 

    /** parser.e:3770		while TRUE do*/
L2: 
    if (_9TRUE_444 == 0)
    {
        goto L3; // [54] 255
    }
    else{
    }

    /** parser.e:3771			tok = next_token()*/
    _0 = _tok_60031;
    _tok_60031 = _42next_token();
    DeRef(_0);

    /** parser.e:3772			if not find(tok[T_ID], ID_TOKS) then*/
    _2 = (object)SEQ_PTR(_tok_60031);
    _30012 = (object)*(((s1_ptr)_2)->base + 1);
    _30013 = find_from(_30012, _40ID_TOKS_16429, 1);
    _30012 = NOVALUE;
    if (_30013 != 0)
    goto L4; // [77] 88
    _30013 = NOVALUE;

    /** parser.e:3773				CompileErr(24)*/
    RefDS(_21928);
    _52CompileErr(24, _21928, 0);
L4: 

    /** parser.e:3775			sym = SetPrivateScope(tok[T_SYM], type_sym, param_num)*/
    _2 = (object)SEQ_PTR(_tok_60031);
    _30015 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30015);
    _sym_60033 = _42SetPrivateScope(_30015, _type_sym_60029, _42param_num_54372);
    _30015 = NOVALUE;
    if (!IS_ATOM_INT(_sym_60033)) {
        _1 = (object)(DBL_PTR(_sym_60033)->dbl);
        DeRefDS(_sym_60033);
        _sym_60033 = _1;
    }

    /** parser.e:3776			param_num += 1*/
    _42param_num_54372 = _42param_num_54372 + 1;

    /** parser.e:3778			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L5; // [118] 141
    }
    else{
    }

    /** parser.e:3779				SymTab[sym][S_GTYPE] = CompileType(type_sym)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_60033 + ((s1_ptr)_2)->base);
    _30020 = _42CompileType(_type_sym_60029);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30020;
    if( _1 != _30020 ){
        DeRef(_1);
    }
    _30020 = NOVALUE;
    _30018 = NOVALUE;
L5: 

    /** parser.e:3782	   		tok = next_token()*/
    _0 = _tok_60031;
    _tok_60031 = _42next_token();
    DeRef(_0);

    /** parser.e:3783	   		if tok[T_ID] = EQUALS then -- assign on declare*/
    _2 = (object)SEQ_PTR(_tok_60031);
    _30022 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30022, 3)){
        _30022 = NOVALUE;
        goto L6; // [156] 231
    }
    _30022 = NOVALUE;

    /** parser.e:3784			    putback(tok)*/
    Ref(_tok_60031);
    _42putback(_tok_60031);

    /** parser.e:3785			    StartSourceLine( TRUE )*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3797			    Assignment({VARIABLE,sym})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _sym_60033;
    _30024 = MAKE_SEQ(_1);
    _42Assignment(_30024);
    _30024 = NOVALUE;

    /** parser.e:3800				tok = next_token()*/
    _0 = _tok_60031;
    _tok_60031 = _42next_token();
    DeRef(_0);

    /** parser.e:3801				if tok[T_ID]=IGNORED then*/
    _2 = (object)SEQ_PTR(_tok_60031);
    _30026 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30026, 509)){
        _30026 = NOVALUE;
        goto L7; // [200] 230
    }
    _30026 = NOVALUE;

    /** parser.e:3802					tok = keyfind(tok[T_SYM],-1)*/
    _2 = (object)SEQ_PTR(_tok_60031);
    _30028 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30028);
    DeRef(_31671);
    _31671 = _30028;
    _31672 = _56hashfn(_31671);
    _31671 = NOVALUE;
    Ref(_30028);
    _0 = _tok_60031;
    _tok_60031 = _56keyfind(_30028, -1, _39current_file_no_16815, 0, _31672);
    DeRef(_0);
    _30028 = NOVALUE;
    _31672 = NOVALUE;
L7: 
L6: 

    /** parser.e:3806			if tok[T_ID] != COMMA then*/
    _2 = (object)SEQ_PTR(_tok_60031);
    _30030 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _30030, -30)){
        _30030 = NOVALUE;
        goto L2; // [241] 52
    }
    _30030 = NOVALUE;

    /** parser.e:3807				exit*/
    goto L3; // [247] 255

    /** parser.e:3809		end while*/
    goto L2; // [252] 52
L3: 

    /** parser.e:3810		putback(tok)*/
    Ref(_tok_60031);
    _42putback(_tok_60031);

    /** parser.e:3811	end procedure*/
    DeRef(_tok_60031);
    return;
    ;
}


void _42Procedure_call(object _tok_60095)
{
    object _n_60096 = NOVALUE;
    object _scope_60097 = NOVALUE;
    object _opcode_60098 = NOVALUE;
    object _temp_tok_60100 = NOVALUE;
    object _s_60102 = NOVALUE;
    object _sub_60103 = NOVALUE;
    object _30066 = NOVALUE;
    object _30061 = NOVALUE;
    object _30060 = NOVALUE;
    object _30059 = NOVALUE;
    object _30058 = NOVALUE;
    object _30057 = NOVALUE;
    object _30056 = NOVALUE;
    object _30055 = NOVALUE;
    object _30054 = NOVALUE;
    object _30053 = NOVALUE;
    object _30052 = NOVALUE;
    object _30051 = NOVALUE;
    object _30049 = NOVALUE;
    object _30048 = NOVALUE;
    object _30047 = NOVALUE;
    object _30046 = NOVALUE;
    object _30045 = NOVALUE;
    object _30044 = NOVALUE;
    object _30043 = NOVALUE;
    object _30041 = NOVALUE;
    object _30040 = NOVALUE;
    object _30039 = NOVALUE;
    object _30037 = NOVALUE;
    object _30035 = NOVALUE;
    object _30033 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:3820		tok_match(LEFT_ROUND)*/
    _42tok_match(-26, 0);

    /** parser.e:3821		s = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_60095);
    _s_60102 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_60102)){
        _s_60102 = (object)DBL_PTR(_s_60102)->dbl;
    }

    /** parser.e:3822		sub=s*/
    _sub_60103 = _s_60102;

    /** parser.e:3823		n = SymTab[s][S_NUM_ARGS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30033 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30033);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _n_60096 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _n_60096 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    if (!IS_ATOM_INT(_n_60096)){
        _n_60096 = (object)DBL_PTR(_n_60096)->dbl;
    }
    _30033 = NOVALUE;

    /** parser.e:3824		scope = SymTab[s][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30035 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30035);
    _scope_60097 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_60097)){
        _scope_60097 = (object)DBL_PTR(_scope_60097)->dbl;
    }
    _30035 = NOVALUE;

    /** parser.e:3825		opcode = SymTab[s][S_OPCODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30037 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30037);
    _opcode_60098 = (object)*(((s1_ptr)_2)->base + 21);
    if (!IS_ATOM_INT(_opcode_60098)){
        _opcode_60098 = (object)DBL_PTR(_opcode_60098)->dbl;
    }
    _30037 = NOVALUE;

    /** parser.e:3826		if SymTab[s][S_EFFECT] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30039 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30039);
    _30040 = (object)*(((s1_ptr)_2)->base + 23);
    _30039 = NOVALUE;
    if (_30040 == 0) {
        _30040 = NOVALUE;
        goto L1; // [88] 139
    }
    else {
        if (!IS_ATOM_INT(_30040) && DBL_PTR(_30040)->dbl == 0.0){
            _30040 = NOVALUE;
            goto L1; // [88] 139
        }
        _30040 = NOVALUE;
    }
    _30040 = NOVALUE;

    /** parser.e:3827			SymTab[CurrentSub][S_EFFECT] = or_bits(SymTab[CurrentSub][S_EFFECT],*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30043 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_30043);
    _30044 = (object)*(((s1_ptr)_2)->base + 23);
    _30043 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30045 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30045);
    _30046 = (object)*(((s1_ptr)_2)->base + 23);
    _30045 = NOVALUE;
    if (IS_ATOM_INT(_30044) && IS_ATOM_INT(_30046)) {
        {uintptr_t tu;
             tu = (uintptr_t)_30044 | (uintptr_t)_30046;
             _30047 = MAKE_UINT(tu);
        }
    }
    else {
        _30047 = binary_op(OR_BITS, _30044, _30046);
    }
    _30044 = NOVALUE;
    _30046 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 23);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30047;
    if( _1 != _30047 ){
        DeRef(_1);
    }
    _30047 = NOVALUE;
    _30041 = NOVALUE;
L1: 

    /** parser.e:3830		ParseArgs(s)*/
    _42ParseArgs(_s_60102);

    /** parser.e:3833		for i=1 to n+1 do*/
    _30048 = _n_60096 + 1;
    if (_30048 > MAXINT){
        _30048 = NewDouble((eudouble)_30048);
    }
    {
        object _i_60140;
        _i_60140 = 1;
L2: 
        if (binary_op_a(GREATER, _i_60140, _30048)){
            goto L3; // [150] 180
        }

        /** parser.e:3834			s = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30049 = (object)*(((s1_ptr)_2)->base + _s_60102);
        _2 = (object)SEQ_PTR(_30049);
        _s_60102 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_60102)){
            _s_60102 = (object)DBL_PTR(_s_60102)->dbl;
        }
        _30049 = NOVALUE;

        /** parser.e:3835		end for*/
        _0 = _i_60140;
        if (IS_ATOM_INT(_i_60140)) {
            _i_60140 = _i_60140 + 1;
            if ((object)((uintptr_t)_i_60140 +(uintptr_t) HIGH_BITS) >= 0){
                _i_60140 = NewDouble((eudouble)_i_60140);
            }
        }
        else {
            _i_60140 = binary_op_a(PLUS, _i_60140, 1);
        }
        DeRef(_0);
        goto L2; // [175] 157
L3: 
        ;
        DeRef(_i_60140);
    }

    /** parser.e:3836		while s and SymTab[s][S_SCOPE]=SC_PRIVATE do*/
L4: 
    if (_s_60102 == 0) {
        goto L5; // [185] 281
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30052 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30052);
    _30053 = (object)*(((s1_ptr)_2)->base + 4);
    _30052 = NOVALUE;
    if (IS_ATOM_INT(_30053)) {
        _30054 = (_30053 == 3);
    }
    else {
        _30054 = binary_op(EQUALS, _30053, 3);
    }
    _30053 = NOVALUE;
    if (_30054 <= 0) {
        if (_30054 == 0) {
            DeRef(_30054);
            _30054 = NOVALUE;
            goto L5; // [208] 281
        }
        else {
            if (!IS_ATOM_INT(_30054) && DBL_PTR(_30054)->dbl == 0.0){
                DeRef(_30054);
                _30054 = NOVALUE;
                goto L5; // [208] 281
            }
            DeRef(_30054);
            _30054 = NOVALUE;
        }
    }
    DeRef(_30054);
    _30054 = NOVALUE;

    /** parser.e:3837			if sequence(SymTab[s][S_CODE]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30055 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30055);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _30056 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _30056 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _30055 = NOVALUE;
    _30057 = IS_SEQUENCE(_30056);
    _30056 = NOVALUE;
    if (_30057 == 0)
    {
        _30057 = NOVALUE;
        goto L6; // [228] 260
    }
    else{
        _30057 = NOVALUE;
    }

    /** parser.e:3838				start_playback(SymTab[s][S_CODE])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30058 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30058);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _30059 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _30059 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _30058 = NOVALUE;
    Ref(_30059);
    _42start_playback(_30059);
    _30059 = NOVALUE;

    /** parser.e:3839				Assignment({VARIABLE,s})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _s_60102;
    _30060 = MAKE_SEQ(_1);
    _42Assignment(_30060);
    _30060 = NOVALUE;
L6: 

    /** parser.e:3841			s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30061 = (object)*(((s1_ptr)_2)->base + _s_60102);
    _2 = (object)SEQ_PTR(_30061);
    _s_60102 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_60102)){
        _s_60102 = (object)DBL_PTR(_s_60102)->dbl;
    }
    _30061 = NOVALUE;

    /** parser.e:3842		end while*/
    goto L4; // [278] 185
L5: 

    /** parser.e:3844		s = sub*/
    _s_60102 = _sub_60103;

    /** parser.e:3845		if scope = SC_PREDEF then*/
    if (_scope_60097 != 7)
    goto L7; // [292] 335

    /** parser.e:3846			emit_op(opcode)*/
    _49emit_op(_opcode_60098);

    /** parser.e:3847			if opcode = ABORT then*/
    if (_opcode_60098 != 126)
    goto L8; // [305] 370

    /** parser.e:3848				temp_tok = next_token()*/
    _0 = _temp_tok_60100;
    _temp_tok_60100 = _42next_token();
    DeRef(_0);

    /** parser.e:3849				putback(temp_tok)*/
    Ref(_temp_tok_60100);
    _42putback(_temp_tok_60100);

    /** parser.e:3850				NotReached(temp_tok[T_ID], "abort()")*/
    _2 = (object)SEQ_PTR(_temp_tok_60100);
    _30066 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30066);
    RefDS(_27798);
    _42NotReached(_30066, _27798);
    _30066 = NOVALUE;
    goto L8; // [332] 370
L7: 

    /** parser.e:3853			op_info1 = s*/
    _49op_info1_50372 = _s_60102;

    /** parser.e:3855			emit_or_inline()*/
    _68emit_or_inline();

    /** parser.e:3856			if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L9; // [350] 369

    /** parser.e:3857				if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto LA; // [357] 368
    }
    else{
    }

    /** parser.e:3858					emit_op(UPDATE_GLOBALS)*/
    _49emit_op(89);
LA: 
L9: 
L8: 

    /** parser.e:3862	end procedure*/
    DeRef(_tok_60095);
    DeRef(_temp_tok_60100);
    DeRef(_30048);
    _30048 = NOVALUE;
    return;
    ;
}


void _42Print_statement()
{
    object _30073 = NOVALUE;
    object _30072 = NOVALUE;
    object _30071 = NOVALUE;
    object _30069 = NOVALUE;
    object _30068 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:3866		emit_opnd(NewIntSym(1)) -- stdout*/
    _30068 = _56NewIntSym(1);
    _49emit_opnd(_30068);
    _30068 = NOVALUE;

    /** parser.e:3867		Expr()*/
    _42Expr();

    /** parser.e:3868		emit_op(QPRINT)*/
    _49emit_op(36);

    /** parser.e:3869		SymTab[CurrentSub][S_EFFECT] = or_bits(SymTab[CurrentSub][S_EFFECT],*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30071 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_30071);
    _30072 = (object)*(((s1_ptr)_2)->base + 23);
    _30071 = NOVALUE;
    if (IS_ATOM_INT(_30072)) {
        {uintptr_t tu;
             tu = (uintptr_t)_30072 | (uintptr_t)536870912;
             _30073 = MAKE_UINT(tu);
        }
    }
    else {
        _30073 = binary_op(OR_BITS, _30072, 536870912);
    }
    _30072 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 23);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30073;
    if( _1 != _30073 ){
        DeRef(_1);
    }
    _30073 = NOVALUE;
    _30069 = NOVALUE;

    /** parser.e:3871	end procedure*/
    return;
    ;
}


void _42Entry_statement()
{
    object _addr_60211 = NOVALUE;
    object _30103 = NOVALUE;
    object _30102 = NOVALUE;
    object _30101 = NOVALUE;
    object _30100 = NOVALUE;
    object _30099 = NOVALUE;
    object _30098 = NOVALUE;
    object _30097 = NOVALUE;
    object _30096 = NOVALUE;
    object _30088 = NOVALUE;
    object _30085 = NOVALUE;
    object _30084 = NOVALUE;
    object _30082 = NOVALUE;
    object _30081 = NOVALUE;
    object _30079 = NOVALUE;
    object _30078 = NOVALUE;
    object _30077 = NOVALUE;
    object _30075 = NOVALUE;
    object _30074 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:3878		if not length(loop_stack) or block_index=0 then*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _30074 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _30074 = 1;
    }
    _30075 = (_30074 == 0);
    _30074 = NOVALUE;
    if (_30075 != 0) {
        goto L1; // [11] 26
    }
    _30077 = (_42block_index_54394 == 0);
    if (_30077 == 0)
    {
        DeRef(_30077);
        _30077 = NOVALUE;
        goto L2; // [22] 34
    }
    else{
        DeRef(_30077);
        _30077 = NOVALUE;
    }
L1: 

    /** parser.e:3879			CompileErr(144)*/
    RefDS(_21928);
    _52CompileErr(144, _21928, 0);
L2: 

    /** parser.e:3881		if block_list[block_index]=IF or block_list[block_index]=SWITCH then*/
    _2 = (object)SEQ_PTR(_42block_list_54393);
    _30078 = (object)*(((s1_ptr)_2)->base + _42block_index_54394);
    _30079 = (_30078 == 20);
    _30078 = NOVALUE;
    if (_30079 != 0) {
        goto L3; // [50] 73
    }
    _2 = (object)SEQ_PTR(_42block_list_54393);
    _30081 = (object)*(((s1_ptr)_2)->base + _42block_index_54394);
    _30082 = (_30081 == 185);
    _30081 = NOVALUE;
    if (_30082 == 0)
    {
        DeRef(_30082);
        _30082 = NOVALUE;
        goto L4; // [69] 83
    }
    else{
        DeRef(_30082);
        _30082 = NOVALUE;
    }
L3: 

    /** parser.e:3882			CompileErr(143)*/
    RefDS(_21928);
    _52CompileErr(143, _21928, 0);
    goto L5; // [80] 109
L4: 

    /** parser.e:3883		elsif loop_stack[$] = FOR then  -- not allowed in an innermost for loop*/
    if (IS_SEQUENCE(_42loop_stack_54397)){
            _30084 = SEQ_PTR(_42loop_stack_54397)->length;
    }
    else {
        _30084 = 1;
    }
    _2 = (object)SEQ_PTR(_42loop_stack_54397);
    _30085 = (object)*(((s1_ptr)_2)->base + _30084);
    if (_30085 != 21)
    goto L6; // [96] 108

    /** parser.e:3884			CompileErr(142)*/
    RefDS(_21928);
    _52CompileErr(142, _21928, 0);
L6: 
L5: 

    /** parser.e:3886		addr = entry_addr[$]*/
    if (IS_SEQUENCE(_42entry_addr_54387)){
            _30088 = SEQ_PTR(_42entry_addr_54387)->length;
    }
    else {
        _30088 = 1;
    }
    _2 = (object)SEQ_PTR(_42entry_addr_54387);
    _addr_60211 = (object)*(((s1_ptr)_2)->base + _30088);

    /** parser.e:3887		if addr=0  then*/
    if (_addr_60211 != 0)
    goto L7; // [122] 136

    /** parser.e:3888			CompileErr(141)*/
    RefDS(_21928);
    _52CompileErr(141, _21928, 0);
    goto L8; // [133] 151
L7: 

    /** parser.e:3889		elsif addr<0 then*/
    if (_addr_60211 >= 0)
    goto L9; // [138] 150

    /** parser.e:3890			CompileErr(73)*/
    RefDS(_21928);
    _52CompileErr(73, _21928, 0);
L9: 
L8: 

    /** parser.e:3892		backpatch(addr,ELSE)*/
    _49backpatch(_addr_60211, 23);

    /** parser.e:3893		backpatch(addr+1,length(Code)+1+(TRANSLATE>0))*/
    _30096 = _addr_60211 + 1;
    if (_30096 > MAXINT){
        _30096 = NewDouble((eudouble)_30096);
    }
    if (IS_SEQUENCE(_39Code_16903)){
            _30097 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _30097 = 1;
    }
    _30098 = _30097 + 1;
    _30097 = NOVALUE;
    _30099 = (_39TRANSLATE_16440 > 0);
    _30100 = _30098 + _30099;
    _30098 = NOVALUE;
    _30099 = NOVALUE;
    _49backpatch(_30096, _30100);
    _30096 = NOVALUE;
    _30100 = NOVALUE;

    /** parser.e:3894		entry_addr[$] = 0*/
    if (IS_SEQUENCE(_42entry_addr_54387)){
            _30101 = SEQ_PTR(_42entry_addr_54387)->length;
    }
    else {
        _30101 = 1;
    }
    _2 = (object)SEQ_PTR(_42entry_addr_54387);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _42entry_addr_54387 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _30101);
    *(intptr_t *)_2 = 0;

    /** parser.e:3895		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LA; // [203] 214
    }
    else{
    }

    /** parser.e:3896		    emit_op(NOP1)*/
    _49emit_op(159);
LA: 

    /** parser.e:3899		force_uninitialize( entry_stack[$] )*/
    if (IS_SEQUENCE(_42entry_stack_54390)){
            _30102 = SEQ_PTR(_42entry_stack_54390)->length;
    }
    else {
        _30102 = 1;
    }
    _2 = (object)SEQ_PTR(_42entry_stack_54390);
    _30103 = (object)*(((s1_ptr)_2)->base + _30102);
    Ref(_30103);
    _42force_uninitialize(_30103);
    _30103 = NOVALUE;

    /** parser.e:3901	end procedure*/
    DeRef(_30079);
    _30079 = NOVALUE;
    _30085 = NOVALUE;
    DeRef(_30075);
    _30075 = NOVALUE;
    return;
    ;
}


void _42force_uninitialize(object _uninitialized_60267)
{
    object _30106 = NOVALUE;
    object _30105 = NOVALUE;
    object _30104 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:3907		for i = 1 to length( uninitialized ) do*/
    if (IS_SEQUENCE(_uninitialized_60267)){
            _30104 = SEQ_PTR(_uninitialized_60267)->length;
    }
    else {
        _30104 = 1;
    }
    {
        object _i_60269;
        _i_60269 = 1;
L1: 
        if (_i_60269 > _30104){
            goto L2; // [8] 41
        }

        /** parser.e:3908			SymTab[uninitialized[i]][S_INITLEVEL] = -1*/
        _2 = (object)SEQ_PTR(_uninitialized_60267);
        _30105 = (object)*(((s1_ptr)_2)->base + _i_60269);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_30105))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_30105)->dbl));
        else
        _3 = (object)(_30105 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 14);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        _30106 = NOVALUE;

        /** parser.e:3909		end for*/
        _i_60269 = _i_60269 + 1;
        goto L1; // [36] 15
L2: 
        ;
    }

    /** parser.e:3910	end procedure*/
    DeRefDS(_uninitialized_60267);
    _30105 = NOVALUE;
    return;
    ;
}


void _42Statement_list()
{
    object _tok_60280 = NOVALUE;
    object _id_60281 = NOVALUE;
    object _forward_60304 = NOVALUE;
    object _test_60453 = NOVALUE;
    object _30183 = NOVALUE;
    object _30182 = NOVALUE;
    object _30178 = NOVALUE;
    object _30175 = NOVALUE;
    object _30174 = NOVALUE;
    object _30170 = NOVALUE;
    object _30167 = NOVALUE;
    object _30166 = NOVALUE;
    object _30165 = NOVALUE;
    object _30162 = NOVALUE;
    object _30160 = NOVALUE;
    object _30158 = NOVALUE;
    object _30156 = NOVALUE;
    object _30138 = NOVALUE;
    object _30137 = NOVALUE;
    object _30135 = NOVALUE;
    object _30133 = NOVALUE;
    object _30132 = NOVALUE;
    object _30130 = NOVALUE;
    object _30128 = NOVALUE;
    object _30127 = NOVALUE;
    object _30126 = NOVALUE;
    object _30125 = NOVALUE;
    object _30120 = NOVALUE;
    object _30117 = NOVALUE;
    object _30116 = NOVALUE;
    object _30115 = NOVALUE;
    object _30114 = NOVALUE;
    object _30112 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:3915		integer id*/

    /** parser.e:3917		stmt_nest += 1*/
    _42stmt_nest_54395 = _42stmt_nest_54395 + 1;

    /** parser.e:3918		while TRUE do*/
L1: 
    if (_9TRUE_444 == 0)
    {
        goto L2; // [18] 1117
    }
    else{
    }

    /** parser.e:3919			tok = next_token()*/
    _0 = _tok_60280;
    _tok_60280 = _42next_token();
    DeRef(_0);

    /** parser.e:3920			id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_60280);
    _id_60281 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_60281)){
        _id_60281 = (object)DBL_PTR(_id_60281)->dbl;
    }

    /** parser.e:3921			if id = VARIABLE or id = QUALIFIED_VARIABLE then*/
    _30112 = (_id_60281 == -100);
    if (_30112 != 0) {
        goto L3; // [44] 59
    }
    _30114 = (_id_60281 == 512);
    if (_30114 == 0)
    {
        DeRef(_30114);
        _30114 = NOVALUE;
        goto L4; // [55] 229
    }
    else{
        DeRef(_30114);
        _30114 = NOVALUE;
    }
L3: 

    /** parser.e:3922				if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_tok_60280);
    _30115 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30115)){
        _30116 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30115)->dbl));
    }
    else{
        _30116 = (object)*(((s1_ptr)_2)->base + _30115);
    }
    _2 = (object)SEQ_PTR(_30116);
    _30117 = (object)*(((s1_ptr)_2)->base + 4);
    _30116 = NOVALUE;
    if (binary_op_a(NOTEQ, _30117, 9)){
        _30117 = NOVALUE;
        goto L5; // [81] 210
    }
    _30117 = NOVALUE;

    /** parser.e:3923					token forward = next_token()*/
    _0 = _forward_60304;
    _forward_60304 = _42next_token();
    DeRef(_0);

    /** parser.e:3924					switch forward[T_ID] do*/
    _2 = (object)SEQ_PTR(_forward_60304);
    _30120 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_30120) ){
        goto L6; // [98] 204
    }
    if(!IS_ATOM_INT(_30120)){
        if( (DBL_PTR(_30120)->dbl != (eudouble) ((object) DBL_PTR(_30120)->dbl) ) ){
            goto L6; // [98] 204
        }
        _0 = (object) DBL_PTR(_30120)->dbl;
    }
    else {
        _0 = _30120;
    };
    _30120 = NOVALUE;
    switch ( _0 ){ 

        /** parser.e:3925						case LEFT_ROUND then*/
        case -26:

        /** parser.e:3926							StartSourceLine( TRUE )*/
        _49StartSourceLine(_9TRUE_444, 0, 2);

        /** parser.e:3928							Forward_call( tok )*/
        Ref(_tok_60280);
        _42Forward_call(_tok_60280, 195);

        /** parser.e:3929							flush_temps()*/
        RefDS(_21928);
        _49flush_temps(_21928);

        /** parser.e:3930							continue*/
        DeRef(_forward_60304);
        _forward_60304 = NOVALUE;
        goto L1; // [133] 16
        goto L6; // [135] 204

        /** parser.e:3932						case VARIABLE then*/
        case -100:

        /** parser.e:3933							putback( forward )*/
        Ref(_forward_60304);
        _42putback(_forward_60304);

        /** parser.e:3934							if param_num != -1 then*/
        if (_42param_num_54372 == -1)
        goto L7; // [150] 176

        /** parser.e:3936								param_num += 1*/
        _42param_num_54372 = _42param_num_54372 + 1;

        /** parser.e:3937								Private_declaration( tok[T_SYM] )*/
        _2 = (object)SEQ_PTR(_tok_60280);
        _30125 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_30125);
        _42Private_declaration(_30125);
        _30125 = NOVALUE;
        goto L8; // [173] 192
L7: 

        /** parser.e:3939								Global_declaration( tok[T_SYM], SC_LOCAL )*/
        _2 = (object)SEQ_PTR(_tok_60280);
        _30126 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_30126);
        _30127 = _42Global_declaration(_30126, 5);
        _30126 = NOVALUE;
L8: 

        /** parser.e:3941							flush_temps()*/
        RefDS(_21928);
        _49flush_temps(_21928);

        /** parser.e:3942							continue*/
        DeRef(_forward_60304);
        _forward_60304 = NOVALUE;
        goto L1; // [201] 16
    ;}L6: 

    /** parser.e:3945					putback( forward )*/
    Ref(_forward_60304);
    _42putback(_forward_60304);
L5: 
    DeRef(_forward_60304);
    _forward_60304 = NOVALUE;

    /** parser.e:3947				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3948				Assignment(tok)*/
    Ref(_tok_60280);
    _42Assignment(_tok_60280);
    goto L9; // [226] 1107
L4: 

    /** parser.e:3950			elsif id = PROC or id = QUALIFIED_PROC then*/
    _30128 = (_id_60281 == 27);
    if (_30128 != 0) {
        goto LA; // [237] 252
    }
    _30130 = (_id_60281 == 521);
    if (_30130 == 0)
    {
        DeRef(_30130);
        _30130 = NOVALUE;
        goto LB; // [248] 289
    }
    else{
        DeRef(_30130);
        _30130 = NOVALUE;
    }
LA: 

    /** parser.e:3951				if id = PROC then*/
    if (_id_60281 != 27)
    goto LC; // [256] 272

    /** parser.e:3953					UndefinedVar( tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_60280);
    _30132 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30132);
    _42UndefinedVar(_30132);
    _30132 = NOVALUE;
LC: 

    /** parser.e:3955				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3956				Procedure_call(tok)*/
    Ref(_tok_60280);
    _42Procedure_call(_tok_60280);
    goto L9; // [286] 1107
LB: 

    /** parser.e:3958			elsif id = FUNC or id = QUALIFIED_FUNC then*/
    _30133 = (_id_60281 == 501);
    if (_30133 != 0) {
        goto LD; // [297] 312
    }
    _30135 = (_id_60281 == 520);
    if (_30135 == 0)
    {
        DeRef(_30135);
        _30135 = NOVALUE;
        goto LE; // [308] 362
    }
    else{
        DeRef(_30135);
        _30135 = NOVALUE;
    }
LD: 

    /** parser.e:3959				if id = FUNC then*/
    if (_id_60281 != 501)
    goto LF; // [316] 332

    /** parser.e:3961					UndefinedVar( tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_60280);
    _30137 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30137);
    _42UndefinedVar(_30137);
    _30137 = NOVALUE;
LF: 

    /** parser.e:3963				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3964				Procedure_call(tok)*/
    Ref(_tok_60280);
    _42Procedure_call(_tok_60280);

    /** parser.e:3965				clear_op()*/
    _49clear_op();

    /** parser.e:3966				if Pop() then end if*/
    _30138 = _49Pop();
    if (_30138 == 0) {
        DeRef(_30138);
        _30138 = NOVALUE;
        goto L9; // [355] 1107
    }
    else {
        if (!IS_ATOM_INT(_30138) && DBL_PTR(_30138)->dbl == 0.0){
            DeRef(_30138);
            _30138 = NOVALUE;
            goto L9; // [355] 1107
        }
        DeRef(_30138);
        _30138 = NOVALUE;
    }
    DeRef(_30138);
    _30138 = NOVALUE;
    goto L9; // [359] 1107
LE: 

    /** parser.e:3968			elsif id = IF then*/
    if (_id_60281 != 20)
    goto L10; // [366] 386

    /** parser.e:3969				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3970				If_statement()*/
    _42If_statement();
    goto L9; // [383] 1107
L10: 

    /** parser.e:3972			elsif id = FOR then*/
    if (_id_60281 != 21)
    goto L11; // [390] 410

    /** parser.e:3973				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3974				For_statement()*/
    _42For_statement();
    goto L9; // [407] 1107
L11: 

    /** parser.e:3976			elsif id = RETURN then*/
    if (_id_60281 != 413)
    goto L12; // [414] 434

    /** parser.e:3977				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3978				Return_statement()*/
    _42Return_statement();
    goto L9; // [431] 1107
L12: 

    /** parser.e:3980			elsif id = LABEL then*/
    if (_id_60281 != 419)
    goto L13; // [438] 460

    /** parser.e:3981				StartSourceLine(TRUE, , COVERAGE_SUPPRESS )*/
    _49StartSourceLine(_9TRUE_444, 0, 1);

    /** parser.e:3982				GLabel_statement()*/
    _42GLabel_statement();
    goto L9; // [457] 1107
L13: 

    /** parser.e:3984			elsif id = GOTO then*/
    if (_id_60281 != 188)
    goto L14; // [464] 484

    /** parser.e:3985				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3986				Goto_statement()*/
    _42Goto_statement();
    goto L9; // [481] 1107
L14: 

    /** parser.e:3988			elsif id = EXIT then*/
    if (_id_60281 != 61)
    goto L15; // [488] 508

    /** parser.e:3989				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3990				Exit_statement()*/
    _42Exit_statement();
    goto L9; // [505] 1107
L15: 

    /** parser.e:3992			elsif id = BREAK then*/
    if (_id_60281 != 425)
    goto L16; // [512] 532

    /** parser.e:3993				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3994				Break_statement()*/
    _42Break_statement();
    goto L9; // [529] 1107
L16: 

    /** parser.e:3996			elsif id = WHILE then*/
    if (_id_60281 != 47)
    goto L17; // [536] 556

    /** parser.e:3997				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:3998				While_statement()*/
    _42While_statement();
    goto L9; // [553] 1107
L17: 

    /** parser.e:4000			elsif id = LOOP then*/
    if (_id_60281 != 422)
    goto L18; // [560] 580

    /** parser.e:4001			    StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4002		        Loop_statement()*/
    _42Loop_statement();
    goto L9; // [577] 1107
L18: 

    /** parser.e:4004			elsif id = ENTRY then*/
    if (_id_60281 != 424)
    goto L19; // [584] 606

    /** parser.e:4005			    StartSourceLine(TRUE, , COVERAGE_SUPPRESS )*/
    _49StartSourceLine(_9TRUE_444, 0, 1);

    /** parser.e:4006			    Entry_statement()*/
    _42Entry_statement();
    goto L9; // [603] 1107
L19: 

    /** parser.e:4008			elsif id = QUESTION_MARK then*/
    if (_id_60281 != -31)
    goto L1A; // [610] 630

    /** parser.e:4009				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4010				Print_statement()*/
    _42Print_statement();
    goto L9; // [627] 1107
L1A: 

    /** parser.e:4012			elsif id = CONTINUE then*/
    if (_id_60281 != 426)
    goto L1B; // [634] 654

    /** parser.e:4013				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4014				Continue_statement()*/
    _42Continue_statement();
    goto L9; // [651] 1107
L1B: 

    /** parser.e:4016			elsif id = RETRY then*/
    if (_id_60281 != 184)
    goto L1C; // [658] 678

    /** parser.e:4017				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4018				Retry_statement()*/
    _42Retry_statement();
    goto L9; // [675] 1107
L1C: 

    /** parser.e:4020			elsif id = IFDEF then*/
    if (_id_60281 != 407)
    goto L1D; // [682] 702

    /** parser.e:4021				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4022				Ifdef_statement()*/
    _42Ifdef_statement();
    goto L9; // [699] 1107
L1D: 

    /** parser.e:4024			elsif id = CASE then*/
    if (_id_60281 != 186)
    goto L1E; // [706] 717

    /** parser.e:4025				Case_statement()*/
    _42Case_statement();
    goto L9; // [714] 1107
L1E: 

    /** parser.e:4027			elsif id = SWITCH then*/
    if (_id_60281 != 185)
    goto L1F; // [721] 741

    /** parser.e:4028				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4029				Switch_statement()*/
    _42Switch_statement();
    goto L9; // [738] 1107
L1F: 

    /** parser.e:4031			elsif id = FALLTHRU then*/
    if (_id_60281 != 431)
    goto L20; // [745] 756

    /** parser.e:4032				Fallthru_statement()*/
    _42Fallthru_statement();
    goto L9; // [753] 1107
L20: 

    /** parser.e:4034			elsif id = TYPE or id = QUALIFIED_TYPE then*/
    _30156 = (_id_60281 == 504);
    if (_30156 != 0) {
        goto L21; // [764] 779
    }
    _30158 = (_id_60281 == 522);
    if (_30158 == 0)
    {
        DeRef(_30158);
        _30158 = NOVALUE;
        goto L22; // [775] 904
    }
    else{
        DeRef(_30158);
        _30158 = NOVALUE;
    }
L21: 

    /** parser.e:4035				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4036				token test = next_token()*/
    _0 = _test_60453;
    _test_60453 = _42next_token();
    DeRef(_0);

    /** parser.e:4037				putback( test )*/
    Ref(_test_60453);
    _42putback(_test_60453);

    /** parser.e:4038				if test[T_ID] = LEFT_ROUND then*/
    _2 = (object)SEQ_PTR(_test_60453);
    _30160 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30160, -26)){
        _30160 = NOVALUE;
        goto L23; // [808] 852
    }
    _30160 = NOVALUE;

    /** parser.e:4039					StartSourceLine( TRUE )*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4040					Procedure_call(tok)*/
    Ref(_tok_60280);
    _42Procedure_call(_tok_60280);

    /** parser.e:4041					clear_op()*/
    _49clear_op();

    /** parser.e:4042					if Pop() then end if*/
    _30162 = _49Pop();
    if (_30162 == 0) {
        DeRef(_30162);
        _30162 = NOVALUE;
        goto L24; // [835] 839
    }
    else {
        if (!IS_ATOM_INT(_30162) && DBL_PTR(_30162)->dbl == 0.0){
            DeRef(_30162);
            _30162 = NOVALUE;
            goto L24; // [835] 839
        }
        DeRef(_30162);
        _30162 = NOVALUE;
    }
    DeRef(_30162);
    _30162 = NOVALUE;
L24: 

    /** parser.e:4043					ExecCommand()*/
    _42ExecCommand();

    /** parser.e:4044					continue*/
    DeRef(_test_60453);
    _test_60453 = NOVALUE;
    goto L1; // [847] 16
    goto L25; // [849] 899
L23: 

    /** parser.e:4047					if param_num != -1 then*/
    if (_42param_num_54372 == -1)
    goto L26; // [856] 882

    /** parser.e:4049						param_num += 1*/
    _42param_num_54372 = _42param_num_54372 + 1;

    /** parser.e:4050						Private_declaration( tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_60280);
    _30165 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30165);
    _42Private_declaration(_30165);
    _30165 = NOVALUE;
    goto L27; // [879] 898
L26: 

    /** parser.e:4052						Global_declaration( tok[T_SYM], SC_LOCAL )*/
    _2 = (object)SEQ_PTR(_tok_60280);
    _30166 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30166);
    _30167 = _42Global_declaration(_30166, 5);
    _30166 = NOVALUE;
L27: 
L25: 
    DeRef(_test_60453);
    _test_60453 = NOVALUE;
    goto L9; // [901] 1107
L22: 

    /** parser.e:4055			elsif id = LEFT_BRACE then*/
    if (_id_60281 != -24)
    goto L28; // [908] 928

    /** parser.e:4056				StartSourceLine( TRUE )*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4057				Multi_assign()*/
    _42Multi_assign();
    goto L9; // [925] 1107
L28: 

    /** parser.e:4060				if id = ELSE then*/
    if (_id_60281 != 23)
    goto L29; // [932] 986

    /** parser.e:4061					if length(if_stack) = 0 then*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _30170 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _30170 = 1;
    }
    if (_30170 != 0)
    goto L2A; // [943] 1043

    /** parser.e:4062						if live_ifdef > 0 then*/
    if (_42live_ifdef_58820 <= 0)
    goto L2B; // [951] 974

    /** parser.e:4063							CompileErr(134, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _30174 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _30174 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _30175 = (object)*(((s1_ptr)_2)->base + _30174);
    _52CompileErr(134, _30175, 0);
    _30175 = NOVALUE;
    goto L2A; // [971] 1043
L2B: 

    /** parser.e:4065							CompileErr(118)*/
    RefDS(_21928);
    _52CompileErr(118, _21928, 0);
    goto L2A; // [983] 1043
L29: 

    /** parser.e:4068				elsif id = ELSIF then*/
    if (_id_60281 != 414)
    goto L2C; // [990] 1042

    /** parser.e:4069					if length(if_stack) = 0 then*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _30178 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _30178 = 1;
    }
    if (_30178 != 0)
    goto L2D; // [1001] 1041

    /** parser.e:4070						if live_ifdef > 0 then*/
    if (_42live_ifdef_58820 <= 0)
    goto L2E; // [1009] 1032

    /** parser.e:4071							CompileErr(139, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _30182 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _30182 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _30183 = (object)*(((s1_ptr)_2)->base + _30182);
    _52CompileErr(139, _30183, 0);
    _30183 = NOVALUE;
    goto L2F; // [1029] 1040
L2E: 

    /** parser.e:4073							CompileErr(119)*/
    RefDS(_21928);
    _52CompileErr(119, _21928, 0);
L2F: 
L2D: 
L2C: 
L2A: 

    /** parser.e:4078				putback( tok )*/
    Ref(_tok_60280);
    _42putback(_tok_60280);

    /** parser.e:4080				switch id do*/
    _0 = _id_60281;
    switch ( _0 ){ 

        /** parser.e:4081					case END, ELSEDEF, ELSIFDEF, ELSIF, ELSE, UNTIL then*/
        case 402:
        case 409:
        case 408:
        case 414:
        case 23:
        case 423:

        /** parser.e:4083						stmt_nest -= 1*/
        _42stmt_nest_54395 = _42stmt_nest_54395 - 1;

        /** parser.e:4084						InitDelete()*/
        _42InitDelete();

        /** parser.e:4085						flush_temps()*/
        RefDS(_21928);
        _49flush_temps(_21928);

        /** parser.e:4086						return*/
        DeRef(_tok_60280);
        DeRef(_30112);
        _30112 = NOVALUE;
        _30115 = NOVALUE;
        DeRef(_30127);
        _30127 = NOVALUE;
        DeRef(_30167);
        _30167 = NOVALUE;
        DeRef(_30128);
        _30128 = NOVALUE;
        DeRef(_30133);
        _30133 = NOVALUE;
        DeRef(_30156);
        _30156 = NOVALUE;
        return;
        goto L30; // [1091] 1106

        /** parser.e:4088					case else*/
        default:

        /** parser.e:4089						tok_match( END )*/
        _42tok_match(402, 0);
    ;}L30: 
L9: 

    /** parser.e:4094			flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:4095		end while*/
    goto L1; // [1114] 16
L2: 

    /** parser.e:4096	end procedure*/
    DeRef(_tok_60280);
    DeRef(_30112);
    _30112 = NOVALUE;
    _30115 = NOVALUE;
    DeRef(_30127);
    _30127 = NOVALUE;
    DeRef(_30167);
    _30167 = NOVALUE;
    DeRef(_30128);
    _30128 = NOVALUE;
    DeRef(_30133);
    _30133 = NOVALUE;
    DeRef(_30156);
    _30156 = NOVALUE;
    return;
    ;
}


void _42SubProg(object _prog_type_60532, object _scope_60533, object _deprecated_60534)
{
    object _h_60535 = NOVALUE;
    object _pt_60536 = NOVALUE;
    object _p_60538 = NOVALUE;
    object _type_sym_60539 = NOVALUE;
    object _sym_60540 = NOVALUE;
    object _tok_60542 = NOVALUE;
    object _prog_name_60543 = NOVALUE;
    object _first_def_arg_60544 = NOVALUE;
    object _again_60545 = NOVALUE;
    object _type_enum_60546 = NOVALUE;
    object _seq_sym_60547 = NOVALUE;
    object _i1_sym_60548 = NOVALUE;
    object _enum_syms_60549 = NOVALUE;
    object _type_enum_gline_60550 = NOVALUE;
    object _real_gline_60551 = NOVALUE;
    object _tsym_60563 = NOVALUE;
    object _seq_symbol_60574 = NOVALUE;
    object _middle_def_args_60778 = NOVALUE;
    object _last_nda_60779 = NOVALUE;
    object _start_def_60780 = NOVALUE;
    object _last_link_60782 = NOVALUE;
    object _temptok_60809 = NOVALUE;
    object _undef_type_60811 = NOVALUE;
    object _tokcat_60861 = NOVALUE;
    object _31670 = NOVALUE;
    object _31669 = NOVALUE;
    object _31668 = NOVALUE;
    object _31667 = NOVALUE;
    object _31666 = NOVALUE;
    object _31665 = NOVALUE;
    object _31664 = NOVALUE;
    object _31663 = NOVALUE;
    object _31662 = NOVALUE;
    object _30460 = NOVALUE;
    object _30458 = NOVALUE;
    object _30457 = NOVALUE;
    object _30455 = NOVALUE;
    object _30454 = NOVALUE;
    object _30453 = NOVALUE;
    object _30452 = NOVALUE;
    object _30451 = NOVALUE;
    object _30449 = NOVALUE;
    object _30448 = NOVALUE;
    object _30445 = NOVALUE;
    object _30444 = NOVALUE;
    object _30443 = NOVALUE;
    object _30442 = NOVALUE;
    object _30440 = NOVALUE;
    object _30429 = NOVALUE;
    object _30427 = NOVALUE;
    object _30426 = NOVALUE;
    object _30425 = NOVALUE;
    object _30424 = NOVALUE;
    object _30421 = NOVALUE;
    object _30420 = NOVALUE;
    object _30419 = NOVALUE;
    object _30417 = NOVALUE;
    object _30414 = NOVALUE;
    object _30413 = NOVALUE;
    object _30412 = NOVALUE;
    object _30410 = NOVALUE;
    object _30409 = NOVALUE;
    object _30406 = NOVALUE;
    object _30404 = NOVALUE;
    object _30402 = NOVALUE;
    object _30401 = NOVALUE;
    object _30400 = NOVALUE;
    object _30399 = NOVALUE;
    object _30397 = NOVALUE;
    object _30395 = NOVALUE;
    object _30394 = NOVALUE;
    object _30393 = NOVALUE;
    object _30392 = NOVALUE;
    object _30391 = NOVALUE;
    object _30388 = NOVALUE;
    object _30386 = NOVALUE;
    object _30384 = NOVALUE;
    object _30381 = NOVALUE;
    object _30378 = NOVALUE;
    object _30375 = NOVALUE;
    object _30373 = NOVALUE;
    object _30372 = NOVALUE;
    object _30369 = NOVALUE;
    object _30365 = NOVALUE;
    object _30364 = NOVALUE;
    object _30362 = NOVALUE;
    object _30360 = NOVALUE;
    object _30358 = NOVALUE;
    object _30356 = NOVALUE;
    object _30354 = NOVALUE;
    object _30352 = NOVALUE;
    object _30351 = NOVALUE;
    object _30350 = NOVALUE;
    object _30349 = NOVALUE;
    object _30348 = NOVALUE;
    object _30347 = NOVALUE;
    object _30346 = NOVALUE;
    object _30345 = NOVALUE;
    object _30344 = NOVALUE;
    object _30343 = NOVALUE;
    object _30342 = NOVALUE;
    object _30341 = NOVALUE;
    object _30338 = NOVALUE;
    object _30337 = NOVALUE;
    object _30336 = NOVALUE;
    object _30335 = NOVALUE;
    object _30333 = NOVALUE;
    object _30332 = NOVALUE;
    object _30331 = NOVALUE;
    object _30330 = NOVALUE;
    object _30328 = NOVALUE;
    object _30327 = NOVALUE;
    object _30326 = NOVALUE;
    object _30325 = NOVALUE;
    object _30324 = NOVALUE;
    object _30323 = NOVALUE;
    object _30322 = NOVALUE;
    object _30320 = NOVALUE;
    object _30318 = NOVALUE;
    object _30317 = NOVALUE;
    object _30311 = NOVALUE;
    object _30310 = NOVALUE;
    object _30308 = NOVALUE;
    object _30307 = NOVALUE;
    object _30306 = NOVALUE;
    object _30305 = NOVALUE;
    object _30304 = NOVALUE;
    object _30303 = NOVALUE;
    object _30302 = NOVALUE;
    object _30301 = NOVALUE;
    object _30300 = NOVALUE;
    object _30299 = NOVALUE;
    object _30297 = NOVALUE;
    object _30296 = NOVALUE;
    object _30294 = NOVALUE;
    object _30293 = NOVALUE;
    object _30292 = NOVALUE;
    object _30291 = NOVALUE;
    object _30290 = NOVALUE;
    object _30289 = NOVALUE;
    object _30288 = NOVALUE;
    object _30286 = NOVALUE;
    object _30283 = NOVALUE;
    object _30281 = NOVALUE;
    object _30279 = NOVALUE;
    object _30277 = NOVALUE;
    object _30275 = NOVALUE;
    object _30273 = NOVALUE;
    object _30271 = NOVALUE;
    object _30269 = NOVALUE;
    object _30267 = NOVALUE;
    object _30265 = NOVALUE;
    object _30264 = NOVALUE;
    object _30263 = NOVALUE;
    object _30262 = NOVALUE;
    object _30261 = NOVALUE;
    object _30260 = NOVALUE;
    object _30259 = NOVALUE;
    object _30257 = NOVALUE;
    object _30256 = NOVALUE;
    object _30254 = NOVALUE;
    object _30252 = NOVALUE;
    object _30250 = NOVALUE;
    object _30249 = NOVALUE;
    object _30246 = NOVALUE;
    object _30245 = NOVALUE;
    object _30244 = NOVALUE;
    object _30243 = NOVALUE;
    object _30242 = NOVALUE;
    object _30240 = NOVALUE;
    object _30239 = NOVALUE;
    object _30238 = NOVALUE;
    object _30237 = NOVALUE;
    object _30236 = NOVALUE;
    object _30234 = NOVALUE;
    object _30233 = NOVALUE;
    object _30232 = NOVALUE;
    object _30230 = NOVALUE;
    object _30229 = NOVALUE;
    object _30228 = NOVALUE;
    object _30227 = NOVALUE;
    object _30223 = NOVALUE;
    object _30222 = NOVALUE;
    object _30221 = NOVALUE;
    object _30219 = NOVALUE;
    object _30218 = NOVALUE;
    object _30217 = NOVALUE;
    object _30216 = NOVALUE;
    object _30215 = NOVALUE;
    object _30214 = NOVALUE;
    object _30210 = NOVALUE;
    object _30209 = NOVALUE;
    object _30208 = NOVALUE;
    object _30206 = NOVALUE;
    object _30205 = NOVALUE;
    object _30204 = NOVALUE;
    object _30201 = NOVALUE;
    object _30200 = NOVALUE;
    object _30198 = NOVALUE;
    object _30197 = NOVALUE;
    object _30196 = NOVALUE;
    object _30191 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_prog_type_60532)) {
        _1 = (object)(DBL_PTR(_prog_type_60532)->dbl);
        DeRefDS(_prog_type_60532);
        _prog_type_60532 = _1;
    }

    /** parser.e:4105		integer first_def_arg*/

    /** parser.e:4106		integer again*/

    /** parser.e:4107		integer type_enum*/

    /** parser.e:4108		object seq_sym*/

    /** parser.e:4109		object i1_sym*/

    /** parser.e:4110		sequence enum_syms = {}*/
    RefDS(_21928);
    DeRef(_enum_syms_60549);
    _enum_syms_60549 = _21928;

    /** parser.e:4111		integer type_enum_gline, real_gline*/

    /** parser.e:4113		LeaveTopLevel()*/
    _42LeaveTopLevel();

    /** parser.e:4114		prog_name = next_token()*/
    _0 = _prog_name_60543;
    _prog_name_60543 = _42next_token();
    DeRef(_0);

    /** parser.e:4115		if prog_name[T_ID] = END_OF_FILE then*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _30191 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30191, -21)){
        _30191 = NOVALUE;
        goto L1; // [45] 57
    }
    _30191 = NOVALUE;

    /** parser.e:4116			CompileErr( 32 )*/
    RefDS(_21928);
    _52CompileErr(32, _21928, 0);
L1: 

    /** parser.e:4118		type_enum =  0*/
    _type_enum_60546 = 0;

    /** parser.e:4119		if prog_type = TYPE_DECL then*/
    if (_prog_type_60532 != 416)
    goto L2; // [66] 318

    /** parser.e:4120			object tsym = prog_name[T_SYM]*/
    DeRef(_tsym_60563);
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _tsym_60563 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tsym_60563);

    /** parser.e:4121			if equal(sym_name(prog_name[T_SYM]),"enum") then*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _30196 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30196);
    _30197 = _56sym_name(_30196);
    _30196 = NOVALUE;
    if (_30197 == _26113)
    _30198 = 1;
    else if (IS_ATOM_INT(_30197) && IS_ATOM_INT(_26113))
    _30198 = 0;
    else
    _30198 = (compare(_30197, _26113) == 0);
    DeRef(_30197);
    _30197 = NOVALUE;
    if (_30198 == 0)
    {
        _30198 = NOVALUE;
        goto L3; // [94] 315
    }
    else{
        _30198 = NOVALUE;
    }

    /** parser.e:4125				EnterTopLevel( FALSE )*/
    _42EnterTopLevel(_9FALSE_442);

    /** parser.e:4126				type_enum_gline = gline_number*/
    _type_enum_gline_60550 = _39gline_number_16820;

    /** parser.e:4127				type_enum = 1*/
    _type_enum_60546 = 1;

    /** parser.e:4128				sequence seq_symbol*/

    /** parser.e:4129				prog_name = next_token()*/
    _0 = _prog_name_60543;
    _prog_name_60543 = _42next_token();
    DeRef(_0);

    /** parser.e:4130				if not find(prog_name[T_ID], ADDR_TOKS) then*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _30200 = (object)*(((s1_ptr)_2)->base + 1);
    _30201 = find_from(_30200, _40ADDR_TOKS_16427, 1);
    _30200 = NOVALUE;
    if (_30201 != 0)
    goto L4; // [140] 165
    _30201 = NOVALUE;

    /** parser.e:4131					CompileErr(25, {find_category(prog_name[T_ID])} )*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _30204 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30204);
    _30205 = _64find_category(_30204);
    _30204 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30205;
    _30206 = MAKE_SEQ(_1);
    _30205 = NOVALUE;
    _52CompileErr(25, _30206, 0);
    _30206 = NOVALUE;
L4: 

    /** parser.e:4133				enum_syms = Global_declaration(-1, scope)*/
    _0 = _enum_syms_60549;
    _enum_syms_60549 = _42Global_declaration(-1, _scope_60533);
    DeRef(_0);

    /** parser.e:4134				seq_symbol = enum_syms*/
    RefDS(_enum_syms_60549);
    DeRef(_seq_symbol_60574);
    _seq_symbol_60574 = _enum_syms_60549;

    /** parser.e:4135				for i = 1 to length( enum_syms ) do*/
    if (IS_SEQUENCE(_enum_syms_60549)){
            _30208 = SEQ_PTR(_enum_syms_60549)->length;
    }
    else {
        _30208 = 1;
    }
    {
        object _i_60591;
        _i_60591 = 1;
L5: 
        if (_i_60591 > _30208){
            goto L6; // [186] 214
        }

        /** parser.e:4136					seq_symbol[i] = sym_obj(enum_syms[i])*/
        _2 = (object)SEQ_PTR(_enum_syms_60549);
        _30209 = (object)*(((s1_ptr)_2)->base + _i_60591);
        Ref(_30209);
        _30210 = _56sym_obj(_30209);
        _30209 = NOVALUE;
        _2 = (object)SEQ_PTR(_seq_symbol_60574);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _seq_symbol_60574 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_60591);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _30210;
        if( _1 != _30210 ){
            DeRef(_1);
        }
        _30210 = NOVALUE;

        /** parser.e:4137				end for*/
        _i_60591 = _i_60591 + 1;
        goto L5; // [209] 193
L6: 
        ;
    }

    /** parser.e:4142				i1_sym = keyfind("i1",-1)*/
    RefDS(_30211);
    DeRef(_31669);
    _31669 = _30211;
    _31670 = _56hashfn(_31669);
    _31669 = NOVALUE;
    RefDS(_30211);
    _0 = _i1_sym_60548;
    _i1_sym_60548 = _56keyfind(_30211, -1, _39current_file_no_16815, 0, _31670);
    DeRef(_0);
    _31670 = NOVALUE;

    /** parser.e:4143				seq_sym = NewStringSym(seq_symbol)*/
    RefDS(_seq_symbol_60574);
    _0 = _seq_sym_60547;
    _seq_sym_60547 = _56NewStringSym(_seq_symbol_60574);
    DeRef(_0);

    /** parser.e:4144				putback(keyfind("return",-1))*/
    RefDS(_26187);
    DeRef(_31667);
    _31667 = _26187;
    _31668 = _56hashfn(_31667);
    _31667 = NOVALUE;
    RefDS(_26187);
    _30214 = _56keyfind(_26187, -1, _39current_file_no_16815, 0, _31668);
    _31668 = NOVALUE;
    _42putback(_30214);
    _30214 = NOVALUE;

    /** parser.e:4145				putback({RIGHT_ROUND,0})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -27;
    ((intptr_t *)_2)[2] = 0;
    _30215 = MAKE_SEQ(_1);
    _42putback(_30215);
    _30215 = NOVALUE;

    /** parser.e:4146				putback(i1_sym)*/
    Ref(_i1_sym_60548);
    _42putback(_i1_sym_60548);

    /** parser.e:4147				putback(keyfind("object",-1))*/
    RefDS(_22890);
    DeRef(_31665);
    _31665 = _22890;
    _31666 = _56hashfn(_31665);
    _31665 = NOVALUE;
    RefDS(_22890);
    _30216 = _56keyfind(_22890, -1, _39current_file_no_16815, 0, _31666);
    _31666 = NOVALUE;
    _42putback(_30216);
    _30216 = NOVALUE;

    /** parser.e:4148				putback({LEFT_ROUND,0})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -26;
    ((intptr_t *)_2)[2] = 0;
    _30217 = MAKE_SEQ(_1);
    _42putback(_30217);
    _30217 = NOVALUE;

    /** parser.e:4150				LeaveTopLevel()*/
    _42LeaveTopLevel();
L3: 
    DeRef(_seq_symbol_60574);
    _seq_symbol_60574 = NOVALUE;
L2: 
    DeRef(_tsym_60563);
    _tsym_60563 = NOVALUE;

    /** parser.e:4153		if not find(prog_name[T_ID], ADDR_TOKS) then*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _30218 = (object)*(((s1_ptr)_2)->base + 1);
    _30219 = find_from(_30218, _40ADDR_TOKS_16427, 1);
    _30218 = NOVALUE;
    if (_30219 != 0)
    goto L7; // [335] 360
    _30219 = NOVALUE;

    /** parser.e:4154			CompileErr(25, {find_category(prog_name[T_ID])} )*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _30221 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30221);
    _30222 = _64find_category(_30221);
    _30221 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30222;
    _30223 = MAKE_SEQ(_1);
    _30222 = NOVALUE;
    _52CompileErr(25, _30223, 0);
    _30223 = NOVALUE;
L7: 

    /** parser.e:4156		p = prog_name[T_SYM]*/
    _2 = (object)SEQ_PTR(_prog_name_60543);
    _p_60538 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_60538)){
        _p_60538 = (object)DBL_PTR(_p_60538)->dbl;
    }

    /** parser.e:4157		DefinedYet(p)*/
    _56DefinedYet(_p_60538);

    /** parser.e:4158		if prog_type = PROCEDURE then*/
    if (_prog_type_60532 != 405)
    goto L8; // [379] 395

    /** parser.e:4159			pt = PROC*/
    _pt_60536 = 27;
    goto L9; // [392] 425
L8: 

    /** parser.e:4160		elsif prog_type = FUNCTION then*/
    if (_prog_type_60532 != 406)
    goto LA; // [399] 415

    /** parser.e:4161			pt = FUNC*/
    _pt_60536 = 501;
    goto L9; // [412] 425
LA: 

    /** parser.e:4163			pt = TYPE*/
    _pt_60536 = 504;
L9: 

    /** parser.e:4166		clear_fwd_refs()*/
    _41clear_fwd_refs();

    /** parser.e:4167		if find(SymTab[p][S_SCOPE], {SC_PREDEF, SC_GLOBAL, SC_PUBLIC, SC_EXPORT, SC_OVERRIDE}) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30227 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30227);
    _30228 = (object)*(((s1_ptr)_2)->base + 4);
    _30227 = NOVALUE;
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 7;
    ((intptr_t*)_2)[2] = 6;
    ((intptr_t*)_2)[3] = 13;
    ((intptr_t*)_2)[4] = 11;
    ((intptr_t*)_2)[5] = 12;
    _30229 = MAKE_SEQ(_1);
    _30230 = find_from(_30228, _30229, 1);
    _30228 = NOVALUE;
    DeRefDS(_30229);
    _30229 = NOVALUE;
    if (_30230 == 0)
    {
        _30230 = NOVALUE;
        goto LB; // [466] 662
    }
    else{
        _30230 = NOVALUE;
    }

    /** parser.e:4169			if scope = SC_OVERRIDE then*/
    if (_scope_60533 != 12)
    goto LC; // [473] 599

    /** parser.e:4170				if SymTab[p][S_SCOPE] = SC_PREDEF or SymTab[p][S_SCOPE] = SC_OVERRIDE then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30232 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30232);
    _30233 = (object)*(((s1_ptr)_2)->base + 4);
    _30232 = NOVALUE;
    if (IS_ATOM_INT(_30233)) {
        _30234 = (_30233 == 7);
    }
    else {
        _30234 = binary_op(EQUALS, _30233, 7);
    }
    _30233 = NOVALUE;
    if (IS_ATOM_INT(_30234)) {
        if (_30234 != 0) {
            goto LD; // [497] 524
        }
    }
    else {
        if (DBL_PTR(_30234)->dbl != 0.0) {
            goto LD; // [497] 524
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30236 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30236);
    _30237 = (object)*(((s1_ptr)_2)->base + 4);
    _30236 = NOVALUE;
    if (IS_ATOM_INT(_30237)) {
        _30238 = (_30237 == 12);
    }
    else {
        _30238 = binary_op(EQUALS, _30237, 12);
    }
    _30237 = NOVALUE;
    if (_30238 == 0) {
        DeRef(_30238);
        _30238 = NOVALUE;
        goto LE; // [520] 598
    }
    else {
        if (!IS_ATOM_INT(_30238) && DBL_PTR(_30238)->dbl == 0.0){
            DeRef(_30238);
            _30238 = NOVALUE;
            goto LE; // [520] 598
        }
        DeRef(_30238);
        _30238 = NOVALUE;
    }
    DeRef(_30238);
    _30238 = NOVALUE;
LD: 

    /** parser.e:4171						if SymTab[p][S_SCOPE] = SC_OVERRIDE then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30239 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30239);
    _30240 = (object)*(((s1_ptr)_2)->base + 4);
    _30239 = NOVALUE;
    if (binary_op_a(NOTEQ, _30240, 12)){
        _30240 = NOVALUE;
        goto LF; // [540] 552
    }
    _30240 = NOVALUE;

    /** parser.e:4172							again = 223*/
    _again_60545 = 223;
    goto L10; // [549] 558
LF: 

    /** parser.e:4174							again = 222*/
    _again_60545 = 222;
L10: 

    /** parser.e:4176						Warning(again, override_warning_flag,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _30242 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30243 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30243);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _30244 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _30244 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _30243 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30242);
    ((intptr_t*)_2)[1] = _30242;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    Ref(_30244);
    ((intptr_t*)_2)[3] = _30244;
    _30245 = MAKE_SEQ(_1);
    _30244 = NOVALUE;
    _30242 = NOVALUE;
    _52Warning(_again_60545, 4, _30245);
    _30245 = NOVALUE;
LE: 
LC: 

    /** parser.e:4181			h = SymTab[p][S_HASHVAL]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30246 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30246);
    _h_60535 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_h_60535)){
        _h_60535 = (object)DBL_PTR(_h_60535)->dbl;
    }
    _30246 = NOVALUE;

    /** parser.e:4182			sym = buckets[h]*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _sym_60540 = (object)*(((s1_ptr)_2)->base + _h_60535);
    if (!IS_ATOM_INT(_sym_60540)){
        _sym_60540 = (object)DBL_PTR(_sym_60540)->dbl;
    }

    /** parser.e:4183			p = NewEntry(SymTab[p][S_NAME], 0, 0, pt, h, sym, 0)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30249 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30249);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _30250 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _30250 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _30249 = NOVALUE;
    Ref(_30250);
    _p_60538 = _56NewEntry(_30250, 0, 0, _pt_60536, _h_60535, _sym_60540, 0);
    _30250 = NOVALUE;
    if (!IS_ATOM_INT(_p_60538)) {
        _1 = (object)(DBL_PTR(_p_60538)->dbl);
        DeRefDS(_p_60538);
        _p_60538 = _1;
    }

    /** parser.e:4184			buckets[h] = p*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _2 = (object)(((s1_ptr)_2)->base + _h_60535);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_60538;
    DeRef(_1);
LB: 

    /** parser.e:4187		Start_block( pt, p )*/
    _66Start_block(_pt_60536, _p_60538);

    /** parser.e:4189		CurrentSub = p*/
    _39CurrentSub_16823 = _p_60538;

    /** parser.e:4190		first_def_arg = 0*/
    _first_def_arg_60544 = 0;

    /** parser.e:4191		temps_allocated = 0*/
    _56temps_allocated_46788 = 0;

    /** parser.e:4193		SymTab[p][S_SCOPE] = scope*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _scope_60533;
    DeRef(_1);
    _30252 = NOVALUE;

    /** parser.e:4195		SymTab[p][S_TOKEN] = pt*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TOKEN_16475))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _pt_60536;
    DeRef(_1);
    _30254 = NOVALUE;

    /** parser.e:4197		if length(SymTab[p]) < SIZEOF_ROUTINE_ENTRY then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30256 = (object)*(((s1_ptr)_2)->base + _p_60538);
    if (IS_SEQUENCE(_30256)){
            _30257 = SEQ_PTR(_30256)->length;
    }
    else {
        _30257 = 1;
    }
    _30256 = NOVALUE;
    if (_30257 >= _39SIZEOF_ROUTINE_ENTRY_16597)
    goto L11; // [732] 774

    /** parser.e:4199			SymTab[p] = SymTab[p] & repeat(0, SIZEOF_ROUTINE_ENTRY -*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30259 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30260 = (object)*(((s1_ptr)_2)->base + _p_60538);
    if (IS_SEQUENCE(_30260)){
            _30261 = SEQ_PTR(_30260)->length;
    }
    else {
        _30261 = 1;
    }
    _30260 = NOVALUE;
    _30262 = _39SIZEOF_ROUTINE_ENTRY_16597 - _30261;
    _30261 = NOVALUE;
    _30263 = Repeat(0, _30262);
    _30262 = NOVALUE;
    if (IS_SEQUENCE(_30259) && IS_ATOM(_30263)) {
    }
    else if (IS_ATOM(_30259) && IS_SEQUENCE(_30263)) {
        Ref(_30259);
        Prepend(&_30264, _30263, _30259);
    }
    else {
        Concat((object_ptr)&_30264, _30259, _30263);
        _30259 = NOVALUE;
    }
    _30259 = NOVALUE;
    DeRefDS(_30263);
    _30263 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _p_60538);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30264;
    if( _1 != _30264 ){
        DeRef(_1);
    }
    _30264 = NOVALUE;
L11: 

    /** parser.e:4203		SymTab[p][S_CODE] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30265 = NOVALUE;

    /** parser.e:4204		SymTab[p][S_LINETAB] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30267 = NOVALUE;

    /** parser.e:4205		SymTab[p][S_EFFECT] = E_PURE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 23);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30269 = NOVALUE;

    /** parser.e:4206		SymTab[p][S_REFLIST] = {}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    RefDS(_21928);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 24);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);
    _30271 = NOVALUE;

    /** parser.e:4207		SymTab[p][S_FIRSTLINE] = gline_number*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FIRSTLINE_16510))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRSTLINE_16510)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FIRSTLINE_16510);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39gline_number_16820;
    DeRef(_1);
    _30273 = NOVALUE;

    /** parser.e:4208		SymTab[p][S_TEMPS] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TEMPS_16515))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30275 = NOVALUE;

    /** parser.e:4209		SymTab[p][S_RESIDENT_TASK] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 25);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30277 = NOVALUE;

    /** parser.e:4210		SymTab[p][S_SAVED_PRIVATES] = {}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    RefDS(_21928);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 26);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _21928;
    DeRef(_1);
    _30279 = NOVALUE;

    /** parser.e:4211		SymTab[p][S_DEPRECATED] = deprecated*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _deprecated_60534;
    DeRef(_1);
    _30281 = NOVALUE;

    /** parser.e:4213		if type_enum then*/
    if (_type_enum_60546 == 0)
    {
        goto L12; // [915] 972
    }
    else{
    }

    /** parser.e:4214			SymTab[p][S_FIRSTLINE] = type_enum_gline*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FIRSTLINE_16510))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRSTLINE_16510)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FIRSTLINE_16510);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _type_enum_gline_60550;
    DeRef(_1);
    _30283 = NOVALUE;

    /** parser.e:4215			real_gline = gline_number*/
    _real_gline_60551 = _39gline_number_16820;

    /** parser.e:4216			gline_number = type_enum_gline*/
    _39gline_number_16820 = _type_enum_gline_60550;

    /** parser.e:4217			StartSourceLine( FALSE, , COVERAGE_OVERRIDE )*/
    _49StartSourceLine(_9FALSE_442, 0, 3);

    /** parser.e:4218			gline_number = real_gline*/
    _39gline_number_16820 = _real_gline_60551;
    goto L13; // [969] 984
L12: 

    /** parser.e:4220			StartSourceLine(FALSE, , COVERAGE_OVERRIDE)*/
    _49StartSourceLine(_9FALSE_442, 0, 3);
L13: 

    /** parser.e:4223		tok_match(LEFT_ROUND)*/
    _42tok_match(-26, 0);

    /** parser.e:4224		tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4225		param_num = 0*/
    _42param_num_54372 = 0;

    /** parser.e:4228		sequence middle_def_args = {}*/
    RefDS(_21928);
    DeRef(_middle_def_args_60778);
    _middle_def_args_60778 = _21928;

    /** parser.e:4229		integer last_nda = 0, start_def = 0*/
    _last_nda_60779 = 0;
    _start_def_60780 = 0;

    /** parser.e:4230		symtab_index last_link = p*/
    _last_link_60782 = _p_60538;

    /** parser.e:4231		while tok[T_ID] != RIGHT_ROUND do*/
L14: 
    _2 = (object)SEQ_PTR(_tok_60542);
    _30286 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _30286, -27)){
        _30286 = NOVALUE;
        goto L15; // [1037] 1810
    }
    _30286 = NOVALUE;

    /** parser.e:4234			if tok[T_ID] != TYPE and tok[T_ID] != QUALIFIED_TYPE then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30288 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30288)) {
        _30289 = (_30288 != 504);
    }
    else {
        _30289 = binary_op(NOTEQ, _30288, 504);
    }
    _30288 = NOVALUE;
    if (IS_ATOM_INT(_30289)) {
        if (_30289 == 0) {
            goto L16; // [1055] 1279
        }
    }
    else {
        if (DBL_PTR(_30289)->dbl == 0.0) {
            goto L16; // [1055] 1279
        }
    }
    _2 = (object)SEQ_PTR(_tok_60542);
    _30291 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30291)) {
        _30292 = (_30291 != 522);
    }
    else {
        _30292 = binary_op(NOTEQ, _30291, 522);
    }
    _30291 = NOVALUE;
    if (_30292 == 0) {
        DeRef(_30292);
        _30292 = NOVALUE;
        goto L16; // [1072] 1279
    }
    else {
        if (!IS_ATOM_INT(_30292) && DBL_PTR(_30292)->dbl == 0.0){
            DeRef(_30292);
            _30292 = NOVALUE;
            goto L16; // [1072] 1279
        }
        DeRef(_30292);
        _30292 = NOVALUE;
    }
    DeRef(_30292);
    _30292 = NOVALUE;

    /** parser.e:4235				if tok[T_ID] = VARIABLE or tok[T_ID] = QUALIFIED_VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30293 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30293)) {
        _30294 = (_30293 == -100);
    }
    else {
        _30294 = binary_op(EQUALS, _30293, -100);
    }
    _30293 = NOVALUE;
    if (IS_ATOM_INT(_30294)) {
        if (_30294 != 0) {
            goto L17; // [1089] 1110
        }
    }
    else {
        if (DBL_PTR(_30294)->dbl != 0.0) {
            goto L17; // [1089] 1110
        }
    }
    _2 = (object)SEQ_PTR(_tok_60542);
    _30296 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30296)) {
        _30297 = (_30296 == 512);
    }
    else {
        _30297 = binary_op(EQUALS, _30296, 512);
    }
    _30296 = NOVALUE;
    if (_30297 == 0) {
        DeRef(_30297);
        _30297 = NOVALUE;
        goto L18; // [1106] 1270
    }
    else {
        if (!IS_ATOM_INT(_30297) && DBL_PTR(_30297)->dbl == 0.0){
            DeRef(_30297);
            _30297 = NOVALUE;
            goto L18; // [1106] 1270
        }
        DeRef(_30297);
        _30297 = NOVALUE;
    }
    DeRef(_30297);
    _30297 = NOVALUE;
L17: 

    /** parser.e:4237					token temptok = next_token()*/
    _0 = _temptok_60809;
    _temptok_60809 = _42next_token();
    DeRef(_0);

    /** parser.e:4238					integer undef_type = 0*/
    _undef_type_60811 = 0;

    /** parser.e:4239					if temptok[T_ID] != TYPE and temptok[T_ID] != QUALIFIED_TYPE then*/
    _2 = (object)SEQ_PTR(_temptok_60809);
    _30299 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30299)) {
        _30300 = (_30299 != 504);
    }
    else {
        _30300 = binary_op(NOTEQ, _30299, 504);
    }
    _30299 = NOVALUE;
    if (IS_ATOM_INT(_30300)) {
        if (_30300 == 0) {
            goto L19; // [1134] 1235
        }
    }
    else {
        if (DBL_PTR(_30300)->dbl == 0.0) {
            goto L19; // [1134] 1235
        }
    }
    _2 = (object)SEQ_PTR(_temptok_60809);
    _30302 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30302)) {
        _30303 = (_30302 != 522);
    }
    else {
        _30303 = binary_op(NOTEQ, _30302, 522);
    }
    _30302 = NOVALUE;
    if (_30303 == 0) {
        DeRef(_30303);
        _30303 = NOVALUE;
        goto L19; // [1151] 1235
    }
    else {
        if (!IS_ATOM_INT(_30303) && DBL_PTR(_30303)->dbl == 0.0){
            DeRef(_30303);
            _30303 = NOVALUE;
            goto L19; // [1151] 1235
        }
        DeRef(_30303);
        _30303 = NOVALUE;
    }
    DeRef(_30303);
    _30303 = NOVALUE;

    /** parser.e:4240						if find( temptok[T_ID], FULL_ID_TOKS) then*/
    _2 = (object)SEQ_PTR(_temptok_60809);
    _30304 = (object)*(((s1_ptr)_2)->base + 1);
    _30305 = find_from(_30304, _40FULL_ID_TOKS_16431, 1);
    _30304 = NOVALUE;
    if (_30305 == 0)
    {
        _30305 = NOVALUE;
        goto L1A; // [1169] 1234
    }
    else{
        _30305 = NOVALUE;
    }

    /** parser.e:4242							if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30306 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30306)){
        _30307 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30306)->dbl));
    }
    else{
        _30307 = (object)*(((s1_ptr)_2)->base + _30306);
    }
    _2 = (object)SEQ_PTR(_30307);
    _30308 = (object)*(((s1_ptr)_2)->base + 4);
    _30307 = NOVALUE;
    if (binary_op_a(NOTEQ, _30308, 9)){
        _30308 = NOVALUE;
        goto L1B; // [1194] 1225
    }
    _30308 = NOVALUE;

    /** parser.e:4245								undef_type = - new_forward_reference( TYPE, tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30310 = (object)*(((s1_ptr)_2)->base + 2);
    DeRef(_31664);
    _31664 = 504;
    Ref(_30310);
    _30311 = _41new_forward_reference(504, _30310, 504);
    _30310 = NOVALUE;
    _31664 = NOVALUE;
    if (IS_ATOM_INT(_30311)) {
        if ((uintptr_t)_30311 == (uintptr_t)HIGH_BITS){
            _undef_type_60811 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _undef_type_60811 = - _30311;
        }
    }
    else {
        _undef_type_60811 = unary_op(UMINUS, _30311);
    }
    DeRef(_30311);
    _30311 = NOVALUE;
    if (!IS_ATOM_INT(_undef_type_60811)) {
        _1 = (object)(DBL_PTR(_undef_type_60811)->dbl);
        DeRefDS(_undef_type_60811);
        _undef_type_60811 = _1;
    }
    goto L1C; // [1222] 1233
L1B: 

    /** parser.e:4247								CompileErr(37)*/
    RefDS(_21928);
    _52CompileErr(37, _21928, 0);
L1C: 
L1A: 
L19: 

    /** parser.e:4251					putback(temptok) -- Return whatever came after the name back onto the token stream.*/
    Ref(_temptok_60809);
    _42putback(_temptok_60809);

    /** parser.e:4252					if undef_type != 0 then*/
    if (_undef_type_60811 == 0)
    goto L1D; // [1242] 1257

    /** parser.e:4254						tok[T_SYM] = undef_type*/
    _2 = (object)SEQ_PTR(_tok_60542);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_60542 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _undef_type_60811;
    DeRef(_1);
    goto L1E; // [1254] 1265
L1D: 

    /** parser.e:4256						CompileErr(37)*/
    RefDS(_21928);
    _52CompileErr(37, _21928, 0);
L1E: 
    DeRef(_temptok_60809);
    _temptok_60809 = NOVALUE;
    goto L1F; // [1267] 1278
L18: 

    /** parser.e:4259					CompileErr(37)*/
    RefDS(_21928);
    _52CompileErr(37, _21928, 0);
L1F: 
L16: 

    /** parser.e:4262			type_sym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _type_sym_60539 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_type_sym_60539)){
        _type_sym_60539 = (object)DBL_PTR(_type_sym_60539)->dbl;
    }

    /** parser.e:4263			tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4264			if not find(tok[T_ID], ID_TOKS) then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30317 = (object)*(((s1_ptr)_2)->base + 1);
    _30318 = find_from(_30317, _40ID_TOKS_16429, 1);
    _30317 = NOVALUE;
    if (_30318 != 0)
    goto L20; // [1309] 1423
    _30318 = NOVALUE;

    /** parser.e:4265				sequence tokcat = find_category(tok[T_ID])*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30320 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30320);
    _0 = _tokcat_60861;
    _tokcat_60861 = _64find_category(_30320);
    DeRef(_0);
    _30320 = NOVALUE;

    /** parser.e:4266				if tok[T_SYM] != 0 and length(SymTab[tok[T_SYM]]) >= S_NAME then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30322 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_30322)) {
        _30323 = (_30322 != 0);
    }
    else {
        _30323 = binary_op(NOTEQ, _30322, 0);
    }
    _30322 = NOVALUE;
    if (IS_ATOM_INT(_30323)) {
        if (_30323 == 0) {
            goto L21; // [1338] 1399
        }
    }
    else {
        if (DBL_PTR(_30323)->dbl == 0.0) {
            goto L21; // [1338] 1399
        }
    }
    _2 = (object)SEQ_PTR(_tok_60542);
    _30325 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30325)){
        _30326 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30325)->dbl));
    }
    else{
        _30326 = (object)*(((s1_ptr)_2)->base + _30325);
    }
    if (IS_SEQUENCE(_30326)){
            _30327 = SEQ_PTR(_30326)->length;
    }
    else {
        _30327 = 1;
    }
    _30326 = NOVALUE;
    if (IS_ATOM_INT(_39S_NAME_16470)) {
        _30328 = (_30327 >= _39S_NAME_16470);
    }
    else {
        _30328 = binary_op(GREATEREQ, _30327, _39S_NAME_16470);
    }
    _30327 = NOVALUE;
    if (_30328 == 0) {
        DeRef(_30328);
        _30328 = NOVALUE;
        goto L21; // [1364] 1399
    }
    else {
        if (!IS_ATOM_INT(_30328) && DBL_PTR(_30328)->dbl == 0.0){
            DeRef(_30328);
            _30328 = NOVALUE;
            goto L21; // [1364] 1399
        }
        DeRef(_30328);
        _30328 = NOVALUE;
    }
    DeRef(_30328);
    _30328 = NOVALUE;

    /** parser.e:4267					CompileErr(90, {tokcat, SymTab[tok[T_SYM]][S_NAME]})*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30330 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30330)){
        _30331 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30330)->dbl));
    }
    else{
        _30331 = (object)*(((s1_ptr)_2)->base + _30330);
    }
    _2 = (object)SEQ_PTR(_30331);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _30332 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _30332 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _30331 = NOVALUE;
    Ref(_30332);
    RefDS(_tokcat_60861);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _tokcat_60861;
    ((intptr_t *)_2)[2] = _30332;
    _30333 = MAKE_SEQ(_1);
    _30332 = NOVALUE;
    _52CompileErr(90, _30333, 0);
    _30333 = NOVALUE;
    goto L22; // [1396] 1422
L21: 

    /** parser.e:4269					CompileErr(92, {LexName(tok[T_ID])})*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30335 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30335);
    RefDS(_26260);
    _30336 = _49LexName(_30335, _26260);
    _30335 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30336;
    _30337 = MAKE_SEQ(_1);
    _30336 = NOVALUE;
    _52CompileErr(92, _30337, 0);
    _30337 = NOVALUE;
L22: 
L20: 
    DeRef(_tokcat_60861);
    _tokcat_60861 = NOVALUE;

    /** parser.e:4272			sym = SetPrivateScope(tok[T_SYM], type_sym, param_num)*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30338 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30338);
    _sym_60540 = _42SetPrivateScope(_30338, _type_sym_60539, _42param_num_54372);
    _30338 = NOVALUE;
    if (!IS_ATOM_INT(_sym_60540)) {
        _1 = (object)(DBL_PTR(_sym_60540)->dbl);
        DeRefDS(_sym_60540);
        _sym_60540 = _1;
    }

    /** parser.e:4273			param_num += 1*/
    _42param_num_54372 = _42param_num_54372 + 1;

    /** parser.e:4275			if SymTab[last_link][S_NEXT] != sym*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30341 = (object)*(((s1_ptr)_2)->base + _last_link_60782);
    _2 = (object)SEQ_PTR(_30341);
    _30342 = (object)*(((s1_ptr)_2)->base + 2);
    _30341 = NOVALUE;
    if (IS_ATOM_INT(_30342)) {
        _30343 = (_30342 != _sym_60540);
    }
    else {
        _30343 = binary_op(NOTEQ, _30342, _sym_60540);
    }
    _30342 = NOVALUE;
    if (IS_ATOM_INT(_30343)) {
        if (_30343 == 0) {
            goto L23; // [1469] 1550
        }
    }
    else {
        if (DBL_PTR(_30343)->dbl == 0.0) {
            goto L23; // [1469] 1550
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30345 = (object)*(((s1_ptr)_2)->base + _last_link_60782);
    _2 = (object)SEQ_PTR(_30345);
    _30346 = (object)*(((s1_ptr)_2)->base + 2);
    _30345 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30346)){
        _30347 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30346)->dbl));
    }
    else{
        _30347 = (object)*(((s1_ptr)_2)->base + _30346);
    }
    _2 = (object)SEQ_PTR(_30347);
    _30348 = (object)*(((s1_ptr)_2)->base + 4);
    _30347 = NOVALUE;
    if (IS_ATOM_INT(_30348)) {
        _30349 = (_30348 == 9);
    }
    else {
        _30349 = binary_op(EQUALS, _30348, 9);
    }
    _30348 = NOVALUE;
    if (_30349 == 0) {
        DeRef(_30349);
        _30349 = NOVALUE;
        goto L23; // [1504] 1550
    }
    else {
        if (!IS_ATOM_INT(_30349) && DBL_PTR(_30349)->dbl == 0.0){
            DeRef(_30349);
            _30349 = NOVALUE;
            goto L23; // [1504] 1550
        }
        DeRef(_30349);
        _30349 = NOVALUE;
    }
    DeRef(_30349);
    _30349 = NOVALUE;

    /** parser.e:4278				SymTab[SymTab[last_link][S_NEXT]][S_NEXT] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30350 = (object)*(((s1_ptr)_2)->base + _last_link_60782);
    _2 = (object)SEQ_PTR(_30350);
    _30351 = (object)*(((s1_ptr)_2)->base + 2);
    _30350 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_30351))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_30351)->dbl));
    else
    _3 = (object)(_30351 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30352 = NOVALUE;

    /** parser.e:4279				SymTab[last_link][S_NEXT] = sym*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_last_link_60782 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_60540;
    DeRef(_1);
    _30354 = NOVALUE;
L23: 

    /** parser.e:4282			last_link = sym*/
    _last_link_60782 = _sym_60540;

    /** parser.e:4284			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L24; // [1561] 1584
    }
    else{
    }

    /** parser.e:4285				SymTab[sym][S_GTYPE] = CompileType(type_sym)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_60540 + ((s1_ptr)_2)->base);
    _30358 = _42CompileType(_type_sym_60539);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30358;
    if( _1 != _30358 ){
        DeRef(_1);
    }
    _30358 = NOVALUE;
    _30356 = NOVALUE;
L24: 

    /** parser.e:4289			tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4290			if tok[T_ID] = EQUALS then -- defaulted parameter*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30360 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30360, 3)){
        _30360 = NOVALUE;
        goto L25; // [1599] 1681
    }
    _30360 = NOVALUE;

    /** parser.e:4291				start_recording()*/
    _42start_recording();

    /** parser.e:4292				Expr()*/
    _42Expr();

    /** parser.e:4293				SymTab[sym][S_CODE] = restore_parser()*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_60540 + ((s1_ptr)_2)->base);
    _30364 = _42restore_parser();
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30364;
    if( _1 != _30364 ){
        DeRef(_1);
    }
    _30364 = NOVALUE;
    _30362 = NOVALUE;

    /** parser.e:4294				if Pop() then end if -- don't leak the default argument*/
    _30365 = _49Pop();
    if (_30365 == 0) {
        DeRef(_30365);
        _30365 = NOVALUE;
        goto L26; // [1634] 1638
    }
    else {
        if (!IS_ATOM_INT(_30365) && DBL_PTR(_30365)->dbl == 0.0){
            DeRef(_30365);
            _30365 = NOVALUE;
            goto L26; // [1634] 1638
        }
        DeRef(_30365);
        _30365 = NOVALUE;
    }
    DeRef(_30365);
    _30365 = NOVALUE;
L26: 

    /** parser.e:4295				tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4296				if first_def_arg = 0 then*/
    if (_first_def_arg_60544 != 0)
    goto L27; // [1645] 1657

    /** parser.e:4297					first_def_arg = param_num*/
    _first_def_arg_60544 = _42param_num_54372;
L27: 

    /** parser.e:4299				previous_op = -1 -- no interferences betwen defparms, or them and subsequent code*/
    _39previous_op_16913 = -1;

    /** parser.e:4300				if start_def = 0 then*/
    if (_start_def_60780 != 0)
    goto L28; // [1666] 1738

    /** parser.e:4301					start_def = param_num*/
    _start_def_60780 = _42param_num_54372;
    goto L28; // [1678] 1738
L25: 

    /** parser.e:4304				last_nda = param_num*/
    _last_nda_60779 = _42param_num_54372;

    /** parser.e:4305				if start_def then*/
    if (_start_def_60780 == 0)
    {
        goto L29; // [1690] 1737
    }
    else{
    }

    /** parser.e:4306					if start_def = param_num-1 then*/
    _30369 = _42param_num_54372 - 1;
    if ((object)((uintptr_t)_30369 +(uintptr_t) HIGH_BITS) >= 0){
        _30369 = NewDouble((eudouble)_30369);
    }
    if (binary_op_a(NOTEQ, _start_def_60780, _30369)){
        DeRef(_30369);
        _30369 = NOVALUE;
        goto L2A; // [1701] 1714
    }
    DeRef(_30369);
    _30369 = NOVALUE;

    /** parser.e:4307						middle_def_args &= start_def*/
    Append(&_middle_def_args_60778, _middle_def_args_60778, _start_def_60780);
    goto L2B; // [1711] 1731
L2A: 

    /** parser.e:4309						middle_def_args = append(middle_def_args, {start_def, param_num-1})*/
    _30372 = _42param_num_54372 - 1;
    if ((object)((uintptr_t)_30372 +(uintptr_t) HIGH_BITS) >= 0){
        _30372 = NewDouble((eudouble)_30372);
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _start_def_60780;
    ((intptr_t *)_2)[2] = _30372;
    _30373 = MAKE_SEQ(_1);
    _30372 = NOVALUE;
    RefDS(_30373);
    Append(&_middle_def_args_60778, _middle_def_args_60778, _30373);
    DeRefDS(_30373);
    _30373 = NOVALUE;
L2B: 

    /** parser.e:4311					start_def = 0*/
    _start_def_60780 = 0;
L29: 
L28: 

    /** parser.e:4314			if tok[T_ID] = COMMA then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30375 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30375, -30)){
        _30375 = NOVALUE;
        goto L2C; // [1748] 1782
    }
    _30375 = NOVALUE;

    /** parser.e:4315				tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4316				if tok[T_ID] = RIGHT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30378 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30378, -27)){
        _30378 = NOVALUE;
        goto L14; // [1767] 1029
    }
    _30378 = NOVALUE;

    /** parser.e:4317					CompileErr(85)*/
    RefDS(_21928);
    _52CompileErr(85, _21928, 0);
    goto L14; // [1779] 1029
L2C: 

    /** parser.e:4319			elsif tok[T_ID] != RIGHT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30381 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _30381, -27)){
        _30381 = NOVALUE;
        goto L14; // [1792] 1029
    }
    _30381 = NOVALUE;

    /** parser.e:4320				CompileErr(41)*/
    RefDS(_21928);
    _52CompileErr(41, _21928, 0);

    /** parser.e:4322		end while*/
    goto L14; // [1807] 1029
L15: 

    /** parser.e:4323		Code = {} -- removes any spurious code emitted while recording parameters*/
    RefDS(_21928);
    DeRef(_39Code_16903);
    _39Code_16903 = _21928;

    /** parser.e:4325		SymTab[p][S_NUM_ARGS] = param_num*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _42param_num_54372;
    DeRef(_1);
    _30384 = NOVALUE;

    /** parser.e:4326		SymTab[p][S_DEF_ARGS] = {first_def_arg, last_nda, middle_def_args}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _first_def_arg_60544;
    ((intptr_t*)_2)[2] = _last_nda_60779;
    RefDS(_middle_def_args_60778);
    ((intptr_t*)_2)[3] = _middle_def_args_60778;
    _30388 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 28);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30388;
    if( _1 != _30388 ){
        DeRef(_1);
    }
    _30388 = NOVALUE;
    _30386 = NOVALUE;

    /** parser.e:4327		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2D; // [1859] 1893
    }
    else{
    }

    /** parser.e:4328			if param_num > max_params then*/
    if (_42param_num_54372 <= _49max_params_50378)
    goto L2E; // [1868] 1882

    /** parser.e:4329				max_params = param_num*/
    _49max_params_50378 = _42param_num_54372;
L2E: 

    /** parser.e:4331			num_routines += 1*/
    _39num_routines_16824 = _39num_routines_16824 + 1;
L2D: 

    /** parser.e:4333		if SymTab[p][S_TOKEN] = TYPE and param_num != 1 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30391 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30391);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _30392 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _30392 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _30391 = NOVALUE;
    if (IS_ATOM_INT(_30392)) {
        _30393 = (_30392 == 504);
    }
    else {
        _30393 = binary_op(EQUALS, _30392, 504);
    }
    _30392 = NOVALUE;
    if (IS_ATOM_INT(_30393)) {
        if (_30393 == 0) {
            goto L2F; // [1913] 1935
        }
    }
    else {
        if (DBL_PTR(_30393)->dbl == 0.0) {
            goto L2F; // [1913] 1935
        }
    }
    _30395 = (_42param_num_54372 != 1);
    if (_30395 == 0)
    {
        DeRef(_30395);
        _30395 = NOVALUE;
        goto L2F; // [1924] 1935
    }
    else{
        DeRef(_30395);
        _30395 = NOVALUE;
    }

    /** parser.e:4334			CompileErr(148)*/
    RefDS(_21928);
    _52CompileErr(148, _21928, 0);
L2F: 

    /** parser.e:4337		include_routine()*/
    _53include_routine();

    /** parser.e:4340		sym = SymTab[p][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30397 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30397);
    _sym_60540 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_60540)){
        _sym_60540 = (object)DBL_PTR(_sym_60540)->dbl;
    }
    _30397 = NOVALUE;

    /** parser.e:4341		for i = 1 to SymTab[p][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30399 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30399);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _30400 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _30400 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _30399 = NOVALUE;
    {
        object _i_61020;
        _i_61020 = 1;
L30: 
        if (binary_op_a(GREATER, _i_61020, _30400)){
            goto L31; // [1969] 2048
        }

        /** parser.e:4342			while SymTab[sym][S_SCOPE] != SC_PRIVATE do*/
L32: 
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30401 = (object)*(((s1_ptr)_2)->base + _sym_60540);
        _2 = (object)SEQ_PTR(_30401);
        _30402 = (object)*(((s1_ptr)_2)->base + 4);
        _30401 = NOVALUE;
        if (binary_op_a(EQUALS, _30402, 3)){
            _30402 = NOVALUE;
            goto L33; // [1995] 2020
        }
        _30402 = NOVALUE;

        /** parser.e:4343				sym = SymTab[sym][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30404 = (object)*(((s1_ptr)_2)->base + _sym_60540);
        _2 = (object)SEQ_PTR(_30404);
        _sym_60540 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_sym_60540)){
            _sym_60540 = (object)DBL_PTR(_sym_60540)->dbl;
        }
        _30404 = NOVALUE;

        /** parser.e:4344			end while*/
        goto L32; // [2017] 1981
L33: 

        /** parser.e:4345			TypeCheck(sym)*/
        _42TypeCheck(_sym_60540);

        /** parser.e:4346			sym = SymTab[sym][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30406 = (object)*(((s1_ptr)_2)->base + _sym_60540);
        _2 = (object)SEQ_PTR(_30406);
        _sym_60540 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_sym_60540)){
            _sym_60540 = (object)DBL_PTR(_sym_60540)->dbl;
        }
        _30406 = NOVALUE;

        /** parser.e:4347		end for*/
        _0 = _i_61020;
        if (IS_ATOM_INT(_i_61020)) {
            _i_61020 = _i_61020 + 1;
            if ((object)((uintptr_t)_i_61020 +(uintptr_t) HIGH_BITS) >= 0){
                _i_61020 = NewDouble((eudouble)_i_61020);
            }
        }
        else {
            _i_61020 = binary_op_a(PLUS, _i_61020, 1);
        }
        DeRef(_0);
        goto L30; // [2043] 1976
L31: 
        ;
        DeRef(_i_61020);
    }

    /** parser.e:4352		tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4353		while tok[T_ID] = TYPE or tok[T_ID] = QUALIFIED_TYPE do*/
L34: 
    _2 = (object)SEQ_PTR(_tok_60542);
    _30409 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30409)) {
        _30410 = (_30409 == 504);
    }
    else {
        _30410 = binary_op(EQUALS, _30409, 504);
    }
    _30409 = NOVALUE;
    if (IS_ATOM_INT(_30410)) {
        if (_30410 != 0) {
            goto L35; // [2070] 2091
        }
    }
    else {
        if (DBL_PTR(_30410)->dbl != 0.0) {
            goto L35; // [2070] 2091
        }
    }
    _2 = (object)SEQ_PTR(_tok_60542);
    _30412 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30412)) {
        _30413 = (_30412 == 522);
    }
    else {
        _30413 = binary_op(EQUALS, _30412, 522);
    }
    _30412 = NOVALUE;
    if (_30413 <= 0) {
        if (_30413 == 0) {
            DeRef(_30413);
            _30413 = NOVALUE;
            goto L36; // [2087] 2112
        }
        else {
            if (!IS_ATOM_INT(_30413) && DBL_PTR(_30413)->dbl == 0.0){
                DeRef(_30413);
                _30413 = NOVALUE;
                goto L36; // [2087] 2112
            }
            DeRef(_30413);
            _30413 = NOVALUE;
        }
    }
    DeRef(_30413);
    _30413 = NOVALUE;
L35: 

    /** parser.e:4354			Private_declaration(tok[T_SYM])*/
    _2 = (object)SEQ_PTR(_tok_60542);
    _30414 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30414);
    _42Private_declaration(_30414);
    _30414 = NOVALUE;

    /** parser.e:4355			tok = next_token()*/
    _0 = _tok_60542;
    _tok_60542 = _42next_token();
    DeRef(_0);

    /** parser.e:4356		end while*/
    goto L34; // [2109] 2058
L36: 

    /** parser.e:4358		if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L37; // [2116] 2219

    /** parser.e:4359			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L38; // [2123] 2218
    }
    else{
    }

    /** parser.e:4361				emit_op(ERASE_PRIVATE_NAMES)*/
    _49emit_op(88);

    /** parser.e:4362				emit_addr(p)*/
    _49emit_addr(_p_60538);

    /** parser.e:4364				sym = SymTab[p][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30417 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30417);
    _sym_60540 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_60540)){
        _sym_60540 = (object)DBL_PTR(_sym_60540)->dbl;
    }
    _30417 = NOVALUE;

    /** parser.e:4365				for i = 1 to SymTab[p][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30419 = (object)*(((s1_ptr)_2)->base + _p_60538);
    _2 = (object)SEQ_PTR(_30419);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _30420 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _30420 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _30419 = NOVALUE;
    {
        object _i_61067;
        _i_61067 = 1;
L39: 
        if (binary_op_a(GREATER, _i_61067, _30420)){
            goto L3A; // [2168] 2210
        }

        /** parser.e:4366					emit_op(DISPLAY_VAR)*/
        _49emit_op(87);

        /** parser.e:4367					emit_addr(sym)*/
        _49emit_addr(_sym_60540);

        /** parser.e:4368					sym = SymTab[sym][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30421 = (object)*(((s1_ptr)_2)->base + _sym_60540);
        _2 = (object)SEQ_PTR(_30421);
        _sym_60540 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_sym_60540)){
            _sym_60540 = (object)DBL_PTR(_sym_60540)->dbl;
        }
        _30421 = NOVALUE;

        /** parser.e:4369				end for*/
        _0 = _i_61067;
        if (IS_ATOM_INT(_i_61067)) {
            _i_61067 = _i_61067 + 1;
            if ((object)((uintptr_t)_i_61067 +(uintptr_t) HIGH_BITS) >= 0){
                _i_61067 = NewDouble((eudouble)_i_61067);
            }
        }
        else {
            _i_61067 = binary_op_a(PLUS, _i_61067, 1);
        }
        DeRef(_0);
        goto L39; // [2205] 2175
L3A: 
        ;
        DeRef(_i_61067);
    }

    /** parser.e:4371				emit_op(UPDATE_GLOBALS)*/
    _49emit_op(89);
L38: 
L37: 

    /** parser.e:4374		putback(tok)*/
    Ref(_tok_60542);
    _42putback(_tok_60542);

    /** parser.e:4377		FuncReturn = FALSE*/
    _42FuncReturn_54371 = _9FALSE_442;

    /** parser.e:4378		if type_enum then*/
    if (_type_enum_60546 == 0)
    {
        goto L3B; // [2235] 2404
    }
    else{
    }

    /** parser.e:4380			stmt_nest += 1*/
    _42stmt_nest_54395 = _42stmt_nest_54395 + 1;

    /** parser.e:4381			tok_match(RETURN)*/
    _42tok_match(413, 0);

    /** parser.e:4382			putback({RIGHT_ROUND,0})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -27;
    ((intptr_t *)_2)[2] = 0;
    _30424 = MAKE_SEQ(_1);
    _42putback(_30424);
    _30424 = NOVALUE;

    /** parser.e:4383			putback({VARIABLE,seq_sym})*/
    Ref(_seq_sym_60547);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _seq_sym_60547;
    _30425 = MAKE_SEQ(_1);
    _42putback(_30425);
    _30425 = NOVALUE;

    /** parser.e:4384			putback({COMMA,0})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -30;
    ((intptr_t *)_2)[2] = 0;
    _30426 = MAKE_SEQ(_1);
    _42putback(_30426);
    _30426 = NOVALUE;

    /** parser.e:4385			putback(i1_sym)*/
    Ref(_i1_sym_60548);
    _42putback(_i1_sym_60548);

    /** parser.e:4386			putback({LEFT_ROUND,0})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -26;
    ((intptr_t *)_2)[2] = 0;
    _30427 = MAKE_SEQ(_1);
    _42putback(_30427);
    _30427 = NOVALUE;

    /** parser.e:4387			putback(keyfind("find",-1))*/
    RefDS(_30428);
    DeRef(_31662);
    _31662 = _30428;
    _31663 = _56hashfn(_31662);
    _31662 = NOVALUE;
    RefDS(_30428);
    _30429 = _56keyfind(_30428, -1, _39current_file_no_16815, 0, _31663);
    _31663 = NOVALUE;
    _42putback(_30429);
    _30429 = NOVALUE;

    /** parser.e:4388			if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L3C; // [2333] 2359

    /** parser.e:4389				if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L3D; // [2340] 2358
    }
    else{
    }

    /** parser.e:4390					emit_op(ERASE_PRIVATE_NAMES)*/
    _49emit_op(88);

    /** parser.e:4391					emit_addr(CurrentSub)*/
    _49emit_addr(_39CurrentSub_16823);
L3D: 
L3C: 

    /** parser.e:4394			Expr()*/
    _42Expr();

    /** parser.e:4395			FuncReturn = TRUE*/
    _42FuncReturn_54371 = _9TRUE_444;

    /** parser.e:4396			emit_op(RETURNF)*/
    _49emit_op(28);

    /** parser.e:4397			flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:4398			stmt_nest -= 1*/
    _42stmt_nest_54395 = _42stmt_nest_54395 - 1;

    /** parser.e:4399			InitDelete()*/
    _42InitDelete();

    /** parser.e:4400			flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);
    goto L3E; // [2401] 2417
L3B: 

    /** parser.e:4402			Statement_list()*/
    _42Statement_list();

    /** parser.e:4404			tok_match(END)*/
    _42tok_match(402, 0);
L3E: 

    /** parser.e:4408		tok_match(prog_type, END)*/
    _42tok_match(_prog_type_60532, 402);

    /** parser.e:4410		if prog_type != PROCEDURE then*/
    if (_prog_type_60532 == 405)
    goto L3F; // [2429] 2477

    /** parser.e:4411			if not FuncReturn then*/
    if (_42FuncReturn_54371 != 0)
    goto L40; // [2437] 2467

    /** parser.e:4412				if prog_type = FUNCTION then*/
    if (_prog_type_60532 != 406)
    goto L41; // [2444] 2458

    /** parser.e:4413					CompileErr(120)*/
    RefDS(_21928);
    _52CompileErr(120, _21928, 0);
    goto L42; // [2455] 2466
L41: 

    /** parser.e:4415					CompileErr(149)*/
    RefDS(_21928);
    _52CompileErr(149, _21928, 0);
L42: 
L40: 

    /** parser.e:4418			emit_op(BADRETURNF) -- function/type shouldn't reach here*/
    _49emit_op(43);
    goto L43; // [2474] 2537
L3F: 

    /** parser.e:4421			StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4422			if not TRANSLATE then*/
    if (_39TRANSLATE_16440 != 0)
    goto L44; // [2490] 2514

    /** parser.e:4423				if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L45; // [2497] 2513
    }
    else{
    }

    /** parser.e:4424					emit_op(ERASE_PRIVATE_NAMES)*/
    _49emit_op(88);

    /** parser.e:4425					emit_addr(p)*/
    _49emit_addr(_p_60538);
L45: 
L44: 

    /** parser.e:4428			emit_op(RETURNP)*/
    _49emit_op(29);

    /** parser.e:4429			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L46; // [2525] 2536
    }
    else{
    }

    /** parser.e:4430				emit_op(BADRETURNF) -- just to mark end of procedure*/
    _49emit_op(43);
L46: 
L43: 

    /** parser.e:4433		Drop_block( pt )*/
    _66Drop_block(_pt_60536);

    /** parser.e:4435		if Strict_Override > 0 then*/
    if (_39Strict_Override_16881 <= 0)
    goto L47; // [2546] 2561

    /** parser.e:4436			Strict_Override -= 1	-- Reset at the end of each routine.*/
    _39Strict_Override_16881 = _39Strict_Override_16881 - 1;
L47: 

    /** parser.e:4439		SymTab[p][S_STACK_SPACE] += temps_allocated + param_num*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    _30442 = _56temps_allocated_46788 + _42param_num_54372;
    if ((object)((uintptr_t)_30442 + (uintptr_t)HIGH_BITS) >= 0){
        _30442 = NewDouble((eudouble)_30442);
    }
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
        _30443 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    }
    else{
        _30443 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    }
    _30440 = NOVALUE;
    if (IS_ATOM_INT(_30443) && IS_ATOM_INT(_30442)) {
        _30444 = _30443 + _30442;
        if ((object)((uintptr_t)_30444 + (uintptr_t)HIGH_BITS) >= 0){
            _30444 = NewDouble((eudouble)_30444);
        }
    }
    else {
        _30444 = binary_op(PLUS, _30443, _30442);
    }
    _30443 = NOVALUE;
    DeRef(_30442);
    _30442 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30444;
    if( _1 != _30444 ){
        DeRef(_1);
    }
    _30444 = NOVALUE;
    _30440 = NOVALUE;

    /** parser.e:4440		if temps_allocated + param_num > max_stack_per_call then*/
    _30445 = _56temps_allocated_46788 + _42param_num_54372;
    if ((object)((uintptr_t)_30445 + (uintptr_t)HIGH_BITS) >= 0){
        _30445 = NewDouble((eudouble)_30445);
    }
    if (binary_op_a(LESSEQ, _30445, _39max_stack_per_call_16914)){
        DeRef(_30445);
        _30445 = NOVALUE;
        goto L48; // [2604] 2621
    }
    DeRef(_30445);
    _30445 = NOVALUE;

    /** parser.e:4441			max_stack_per_call = temps_allocated + param_num*/
    _39max_stack_per_call_16914 = _56temps_allocated_46788 + _42param_num_54372;
L48: 

    /** parser.e:4443		param_num = -1*/
    _42param_num_54372 = -1;

    /** parser.e:4445		StraightenBranches()*/
    _42StraightenBranches();

    /** parser.e:4446		check_inline( p )*/
    _68check_inline(_p_60538);

    /** parser.e:4447		param_num = -1*/
    _42param_num_54372 = -1;

    /** parser.e:4448		EnterTopLevel()*/
    _42EnterTopLevel(1);

    /** parser.e:4451		if length( enum_syms ) then*/
    if (IS_SEQUENCE(_enum_syms_60549)){
            _30448 = SEQ_PTR(_enum_syms_60549)->length;
    }
    else {
        _30448 = 1;
    }
    if (_30448 == 0)
    {
        _30448 = NOVALUE;
        goto L49; // [2650] 2737
    }
    else{
        _30448 = NOVALUE;
    }

    /** parser.e:4452			SymTab[p][S_NEXT] = SymTab[enum_syms[$]][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_60538 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_enum_syms_60549)){
            _30451 = SEQ_PTR(_enum_syms_60549)->length;
    }
    else {
        _30451 = 1;
    }
    _2 = (object)SEQ_PTR(_enum_syms_60549);
    _30452 = (object)*(((s1_ptr)_2)->base + _30451);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30452)){
        _30453 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30452)->dbl));
    }
    else{
        _30453 = (object)*(((s1_ptr)_2)->base + _30452);
    }
    _2 = (object)SEQ_PTR(_30453);
    _30454 = (object)*(((s1_ptr)_2)->base + 2);
    _30453 = NOVALUE;
    Ref(_30454);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30454;
    if( _1 != _30454 ){
        DeRef(_1);
    }
    _30454 = NOVALUE;
    _30449 = NOVALUE;

    /** parser.e:4453			SymTab[last_sym][S_NEXT] = enum_syms[1]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_56last_sym_46267 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_enum_syms_60549);
    _30457 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30457);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30457;
    if( _1 != _30457 ){
        DeRef(_1);
    }
    _30457 = NOVALUE;
    _30455 = NOVALUE;

    /** parser.e:4454			last_sym = enum_syms[$]*/
    if (IS_SEQUENCE(_enum_syms_60549)){
            _30458 = SEQ_PTR(_enum_syms_60549)->length;
    }
    else {
        _30458 = 1;
    }
    _2 = (object)SEQ_PTR(_enum_syms_60549);
    _56last_sym_46267 = (object)*(((s1_ptr)_2)->base + _30458);
    if (!IS_ATOM_INT(_56last_sym_46267)){
        _56last_sym_46267 = (object)DBL_PTR(_56last_sym_46267)->dbl;
    }

    /** parser.e:4455			SymTab[last_sym][S_NEXT] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_56last_sym_46267 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30460 = NOVALUE;
L49: 

    /** parser.e:4457	end procedure*/
    DeRef(_tok_60542);
    DeRef(_prog_name_60543);
    DeRef(_seq_sym_60547);
    DeRef(_i1_sym_60548);
    DeRef(_enum_syms_60549);
    DeRef(_middle_def_args_60778);
    DeRef(_30300);
    _30300 = NOVALUE;
    _30346 = NOVALUE;
    _30256 = NOVALUE;
    _30330 = NOVALUE;
    _30325 = NOVALUE;
    DeRef(_30410);
    _30410 = NOVALUE;
    DeRef(_30289);
    _30289 = NOVALUE;
    _30260 = NOVALUE;
    _30306 = NOVALUE;
    _30400 = NOVALUE;
    _30420 = NOVALUE;
    DeRef(_30234);
    _30234 = NOVALUE;
    DeRef(_30343);
    _30343 = NOVALUE;
    DeRef(_30294);
    _30294 = NOVALUE;
    DeRef(_30323);
    _30323 = NOVALUE;
    _30452 = NOVALUE;
    _30351 = NOVALUE;
    _30326 = NOVALUE;
    DeRef(_30393);
    _30393 = NOVALUE;
    return;
    ;
}


void _42InitGlobals()
{
    object _30479 = NOVALUE;
    object _30477 = NOVALUE;
    object _30476 = NOVALUE;
    object _30475 = NOVALUE;
    object _30474 = NOVALUE;
    object _30473 = NOVALUE;
    object _30472 = NOVALUE;
    object _30470 = NOVALUE;
    object _30469 = NOVALUE;
    object _30468 = NOVALUE;
    object _30467 = NOVALUE;
    object _30465 = NOVALUE;
    object _30464 = NOVALUE;
    object _30463 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:4461		ResetTP()*/
    _63ResetTP();

    /** parser.e:4462		OpTypeCheck = TRUE*/
    _39OpTypeCheck_16885 = _9TRUE_444;

    /** parser.e:4464		OpDefines &= {*/
    _30463 = _27version_major();
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30463;
    _30464 = MAKE_SEQ(_1);
    _30463 = NOVALUE;
    _30465 = EPrintf(-9999999, _30462, _30464);
    DeRefDS(_30464);
    _30464 = NOVALUE;
    _30467 = _27version_major();
    _30468 = _27version_minor();
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _30467;
    ((intptr_t *)_2)[2] = _30468;
    _30469 = MAKE_SEQ(_1);
    _30468 = NOVALUE;
    _30467 = NOVALUE;
    _30470 = EPrintf(-9999999, _30466, _30469);
    DeRefDS(_30469);
    _30469 = NOVALUE;
    _30472 = _27version_major();
    _30473 = _27version_minor();
    _30474 = _27version_patch();
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30472;
    ((intptr_t*)_2)[2] = _30473;
    ((intptr_t*)_2)[3] = _30474;
    _30475 = MAKE_SEQ(_1);
    _30474 = NOVALUE;
    _30473 = NOVALUE;
    _30472 = NOVALUE;
    _30476 = EPrintf(-9999999, _30471, _30475);
    DeRefDS(_30475);
    _30475 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30465;
    ((intptr_t*)_2)[2] = _30470;
    ((intptr_t*)_2)[3] = _30476;
    _30477 = MAKE_SEQ(_1);
    _30476 = NOVALUE;
    _30470 = NOVALUE;
    _30465 = NOVALUE;
    Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _30477);
    DeRefDS(_30477);
    _30477 = NOVALUE;

    /** parser.e:4470		OpDefines &= GetPlatformDefines()*/
    _30479 = _43GetPlatformDefines(0);
    if (IS_SEQUENCE(_39OpDefines_16888) && IS_ATOM(_30479)) {
        Ref(_30479);
        Append(&_39OpDefines_16888, _39OpDefines_16888, _30479);
    }
    else if (IS_ATOM(_39OpDefines_16888) && IS_SEQUENCE(_30479)) {
    }
    else {
        Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _30479);
    }
    DeRef(_30479);
    _30479 = NOVALUE;

    /** parser.e:4472		if repl then*/

    /** parser.e:4476			OpInline = DEFAULT_INLINE*/
    _39OpInline_16889 = 30;

    /** parser.e:4478		OpIndirectInclude = 1*/
    _39OpIndirectInclude_16890 = 1;

    /** parser.e:4479	end procedure*/
    return;
    ;
}


void _42not_supported_compile(object _feature_61237)
{
    object _30482 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:4483		CompileErr(5, {feature, version_name})*/
    RefDS(_39version_name_16454);
    RefDS(_feature_61237);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _feature_61237;
    ((intptr_t *)_2)[2] = _39version_name_16454;
    _30482 = MAKE_SEQ(_1);
    _52CompileErr(5, _30482, 0);
    _30482 = NOVALUE;

    /** parser.e:4484	end procedure*/
    DeRefDSi(_feature_61237);
    return;
    ;
}


void _42SetWith(object _on_off_61244)
{
    object _option_61245 = NOVALUE;
    object _idx_61246 = NOVALUE;
    object _reset_flags_61247 = NOVALUE;
    object _tok_61299 = NOVALUE;
    object _good_sofar_61349 = NOVALUE;
    object _tok_61352 = NOVALUE;
    object _warning_extra_61354 = NOVALUE;
    object _endlist_61446 = NOVALUE;
    object _tok_61595 = NOVALUE;
    object _30635 = NOVALUE;
    object _30633 = NOVALUE;
    object _30632 = NOVALUE;
    object _30631 = NOVALUE;
    object _30630 = NOVALUE;
    object _30627 = NOVALUE;
    object _30626 = NOVALUE;
    object _30625 = NOVALUE;
    object _30623 = NOVALUE;
    object _30621 = NOVALUE;
    object _30620 = NOVALUE;
    object _30619 = NOVALUE;
    object _30616 = NOVALUE;
    object _30614 = NOVALUE;
    object _30613 = NOVALUE;
    object _30612 = NOVALUE;
    object _30611 = NOVALUE;
    object _30610 = NOVALUE;
    object _30605 = NOVALUE;
    object _30602 = NOVALUE;
    object _30600 = NOVALUE;
    object _30596 = NOVALUE;
    object _30591 = NOVALUE;
    object _30590 = NOVALUE;
    object _30584 = NOVALUE;
    object _30583 = NOVALUE;
    object _30582 = NOVALUE;
    object _30581 = NOVALUE;
    object _30580 = NOVALUE;
    object _30579 = NOVALUE;
    object _30578 = NOVALUE;
    object _30577 = NOVALUE;
    object _30576 = NOVALUE;
    object _30575 = NOVALUE;
    object _30573 = NOVALUE;
    object _30572 = NOVALUE;
    object _30570 = NOVALUE;
    object _30569 = NOVALUE;
    object _30568 = NOVALUE;
    object _30566 = NOVALUE;
    object _30565 = NOVALUE;
    object _30563 = NOVALUE;
    object _30560 = NOVALUE;
    object _30558 = NOVALUE;
    object _30555 = NOVALUE;
    object _30554 = NOVALUE;
    object _30553 = NOVALUE;
    object _30552 = NOVALUE;
    object _30545 = NOVALUE;
    object _30544 = NOVALUE;
    object _30542 = NOVALUE;
    object _30539 = NOVALUE;
    object _30538 = NOVALUE;
    object _30536 = NOVALUE;
    object _30535 = NOVALUE;
    object _30534 = NOVALUE;
    object _30533 = NOVALUE;
    object _30532 = NOVALUE;
    object _30531 = NOVALUE;
    object _30528 = NOVALUE;
    object _30526 = NOVALUE;
    object _30525 = NOVALUE;
    object _30524 = NOVALUE;
    object _30523 = NOVALUE;
    object _30522 = NOVALUE;
    object _30519 = NOVALUE;
    object _30518 = NOVALUE;
    object _30517 = NOVALUE;
    object _30515 = NOVALUE;
    object _30512 = NOVALUE;
    object _30509 = NOVALUE;
    object _30508 = NOVALUE;
    object _30506 = NOVALUE;
    object _30505 = NOVALUE;
    object _30504 = NOVALUE;
    object _30503 = NOVALUE;
    object _30502 = NOVALUE;
    object _30501 = NOVALUE;
    object _30499 = NOVALUE;
    object _30496 = NOVALUE;
    object _30495 = NOVALUE;
    object _30494 = NOVALUE;
    object _30493 = NOVALUE;
    object _30491 = NOVALUE;
    object _30490 = NOVALUE;
    object _30489 = NOVALUE;
    object _30488 = NOVALUE;
    object _30486 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:4490		integer reset_flags = 1*/
    _reset_flags_61247 = 1;

    /** parser.e:4493		option = StringToken("&+=")*/
    RefDS(_30483);
    _0 = _option_61245;
    _option_61245 = _63StringToken(_30483);
    DeRef(_0);

    /** parser.e:4495		if equal(option, "type_check") then*/
    if (_option_61245 == _30485)
    _30486 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30485))
    _30486 = 0;
    else
    _30486 = (compare(_option_61245, _30485) == 0);
    if (_30486 == 0)
    {
        _30486 = NOVALUE;
        goto L1; // [22] 35
    }
    else{
        _30486 = NOVALUE;
    }

    /** parser.e:4496			OpTypeCheck = on_off*/
    _39OpTypeCheck_16885 = _on_off_61244;
    goto L2; // [32] 1532
L1: 

    /** parser.e:4498		elsif equal(option, "profile") then*/
    if (_option_61245 == _30487)
    _30488 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30487))
    _30488 = 0;
    else
    _30488 = (compare(_option_61245, _30487) == 0);
    if (_30488 == 0)
    {
        _30488 = NOVALUE;
        goto L3; // [41] 121
    }
    else{
        _30488 = NOVALUE;
    }

    /** parser.e:4499			if not TRANSLATE and not BIND then*/
    _30489 = (_39TRANSLATE_16440 == 0);
    if (_30489 == 0) {
        goto L2; // [51] 1532
    }
    _30491 = (_39BIND_16443 == 0);
    if (_30491 == 0)
    {
        DeRef(_30491);
        _30491 = NOVALUE;
        goto L2; // [61] 1532
    }
    else{
        DeRef(_30491);
        _30491 = NOVALUE;
    }

    /** parser.e:4500				OpProfileStatement = on_off*/
    _39OpProfileStatement_16886 = _on_off_61244;

    /** parser.e:4501				if OpProfileStatement then*/
    if (_39OpProfileStatement_16886 == 0)
    {
        goto L2; // [75] 1532
    }
    else{
    }

    /** parser.e:4502					if AnyTimeProfile then*/
    if (_36AnyTimeProfile_15426 == 0)
    {
        goto L4; // [82] 106
    }
    else{
    }

    /** parser.e:4503						Warning(224, mixed_profile_warning_flag)*/
    RefDS(_21928);
    _52Warning(224, 1024, _21928);

    /** parser.e:4504						OpProfileStatement = FALSE*/
    _39OpProfileStatement_16886 = _9FALSE_442;
    goto L2; // [103] 1532
L4: 

    /** parser.e:4506						AnyStatementProfile = TRUE*/
    _36AnyStatementProfile_15427 = _9TRUE_444;
    goto L2; // [118] 1532
L3: 

    /** parser.e:4511		elsif equal(option, "profile_time") then*/
    if (_option_61245 == _30492)
    _30493 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30492))
    _30493 = 0;
    else
    _30493 = (compare(_option_61245, _30492) == 0);
    if (_30493 == 0)
    {
        _30493 = NOVALUE;
        goto L5; // [127] 362
    }
    else{
        _30493 = NOVALUE;
    }

    /** parser.e:4512			if not TRANSLATE and not BIND then*/
    _30494 = (_39TRANSLATE_16440 == 0);
    if (_30494 == 0) {
        goto L2; // [137] 1532
    }
    _30496 = (_39BIND_16443 == 0);
    if (_30496 == 0)
    {
        DeRef(_30496);
        _30496 = NOVALUE;
        goto L2; // [147] 1532
    }
    else{
        DeRef(_30496);
        _30496 = NOVALUE;
    }

    /** parser.e:4513				if not IWINDOWS then*/

    /** parser.e:4514					if on_off then*/
    if (_on_off_61244 == 0)
    {
        goto L6; // [159] 168
    }
    else{
    }

    /** parser.e:4515						not_supported_compile("profile_time")*/
    RefDS(_30492);
    _42not_supported_compile(_30492);
L6: 

    /** parser.e:4518				OpProfileTime = on_off*/
    _39OpProfileTime_16887 = _on_off_61244;

    /** parser.e:4519				if OpProfileTime then*/
    if (_39OpProfileTime_16887 == 0)
    {
        goto L7; // [180] 356
    }
    else{
    }

    /** parser.e:4520					if AnyStatementProfile then*/
    if (_36AnyStatementProfile_15427 == 0)
    {
        goto L8; // [187] 209
    }
    else{
    }

    /** parser.e:4521						Warning(224,mixed_profile_warning_flag)*/
    RefDS(_21928);
    _52Warning(224, 1024, _21928);

    /** parser.e:4522						OpProfileTime = FALSE*/
    _39OpProfileTime_16887 = _9FALSE_442;
L8: 

    /** parser.e:4524					token tok = next_token()*/
    _0 = _tok_61299;
    _tok_61299 = _42next_token();
    DeRef(_0);

    /** parser.e:4525					if tok[T_ID] = ATOM then*/
    _2 = (object)SEQ_PTR(_tok_61299);
    _30499 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30499, 502)){
        _30499 = NOVALUE;
        goto L9; // [224] 317
    }
    _30499 = NOVALUE;

    /** parser.e:4526						if is_integer(SymTab[tok[T_SYM]][S_OBJ]) then*/
    _2 = (object)SEQ_PTR(_tok_61299);
    _30501 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30501)){
        _30502 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30501)->dbl));
    }
    else{
        _30502 = (object)*(((s1_ptr)_2)->base + _30501);
    }
    _2 = (object)SEQ_PTR(_30502);
    _30503 = (object)*(((s1_ptr)_2)->base + 1);
    _30502 = NOVALUE;
    Ref(_30503);
    _30504 = _39is_integer(_30503);
    _30503 = NOVALUE;
    if (_30504 == 0) {
        DeRef(_30504);
        _30504 = NOVALUE;
        goto LA; // [252] 280
    }
    else {
        if (!IS_ATOM_INT(_30504) && DBL_PTR(_30504)->dbl == 0.0){
            DeRef(_30504);
            _30504 = NOVALUE;
            goto LA; // [252] 280
        }
        DeRef(_30504);
        _30504 = NOVALUE;
    }
    DeRef(_30504);
    _30504 = NOVALUE;

    /** parser.e:4527							sample_size = SymTab[tok[T_SYM]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_tok_61299);
    _30505 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30505)){
        _30506 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30505)->dbl));
    }
    else{
        _30506 = (object)*(((s1_ptr)_2)->base + _30505);
    }
    _2 = (object)SEQ_PTR(_30506);
    _39sample_size_16915 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_39sample_size_16915)){
        _39sample_size_16915 = (object)DBL_PTR(_39sample_size_16915)->dbl;
    }
    _30506 = NOVALUE;
    goto LB; // [277] 288
LA: 

    /** parser.e:4529							sample_size = -1*/
    _39sample_size_16915 = -1;
LB: 

    /** parser.e:4531						if sample_size < 1 and OpProfileTime then*/
    _30508 = (_39sample_size_16915 < 1);
    if (_30508 == 0) {
        goto LC; // [296] 330
    }
    if (_39OpProfileTime_16887 == 0)
    {
        goto LC; // [303] 330
    }
    else{
    }

    /** parser.e:4532							CompileErr(136)*/
    RefDS(_21928);
    _52CompileErr(136, _21928, 0);
    goto LC; // [314] 330
L9: 

    /** parser.e:4535						putback(tok)*/
    Ref(_tok_61299);
    _42putback(_tok_61299);

    /** parser.e:4536						sample_size = DEFAULT_SAMPLE_SIZE*/
    _39sample_size_16915 = 25000;
LC: 

    /** parser.e:4538					if OpProfileTime then*/
    if (_39OpProfileTime_16887 == 0)
    {
        goto LD; // [334] 355
    }
    else{
    }

    /** parser.e:4539						if IWINDOWS then*/
LD: 
L7: 
    DeRef(_tok_61299);
    _tok_61299 = NOVALUE;
    goto L2; // [359] 1532
L5: 

    /** parser.e:4546		elsif equal(option, "trace") then*/
    if (_option_61245 == _30511)
    _30512 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30511))
    _30512 = 0;
    else
    _30512 = (compare(_option_61245, _30511) == 0);
    if (_30512 == 0)
    {
        _30512 = NOVALUE;
        goto LE; // [368] 389
    }
    else{
        _30512 = NOVALUE;
    }

    /** parser.e:4547			if not BIND then*/
    if (_39BIND_16443 != 0)
    goto L2; // [375] 1532

    /** parser.e:4548				OpTrace = on_off*/
    _39OpTrace_16884 = _on_off_61244;
    goto L2; // [386] 1532
LE: 

    /** parser.e:4551		elsif equal(option, "warning") then*/
    if (_option_61245 == _30514)
    _30515 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30514))
    _30515 = 0;
    else
    _30515 = (compare(_option_61245, _30514) == 0);
    if (_30515 == 0)
    {
        _30515 = NOVALUE;
        goto LF; // [395] 1235
    }
    else{
        _30515 = NOVALUE;
    }

    /** parser.e:4552			integer good_sofar = line_number*/
    _good_sofar_61349 = _39line_number_16816;

    /** parser.e:4553			reset_flags = 1*/
    _reset_flags_61247 = 1;

    /** parser.e:4554			token tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4555			integer warning_extra = 1*/
    _warning_extra_61354 = 1;

    /** parser.e:4556			if find(tok[T_ID], {CONCAT_EQUALS, PLUS_EQUALS}) != 0 then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30517 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 519;
    ((intptr_t *)_2)[2] = 515;
    _30518 = MAKE_SEQ(_1);
    _30519 = find_from(_30517, _30518, 1);
    _30517 = NOVALUE;
    DeRefDS(_30518);
    _30518 = NOVALUE;
    if (_30519 == 0)
    goto L10; // [443] 502

    /** parser.e:4557				tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4558				if tok[T_ID] != LEFT_BRACE and tok[T_ID] != LEFT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30522 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30522)) {
        _30523 = (_30522 != -24);
    }
    else {
        _30523 = binary_op(NOTEQ, _30522, -24);
    }
    _30522 = NOVALUE;
    if (IS_ATOM_INT(_30523)) {
        if (_30523 == 0) {
            goto L11; // [466] 494
        }
    }
    else {
        if (DBL_PTR(_30523)->dbl == 0.0) {
            goto L11; // [466] 494
        }
    }
    _2 = (object)SEQ_PTR(_tok_61352);
    _30525 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30525)) {
        _30526 = (_30525 != -26);
    }
    else {
        _30526 = binary_op(NOTEQ, _30525, -26);
    }
    _30525 = NOVALUE;
    if (_30526 == 0) {
        DeRef(_30526);
        _30526 = NOVALUE;
        goto L11; // [483] 494
    }
    else {
        if (!IS_ATOM_INT(_30526) && DBL_PTR(_30526)->dbl == 0.0){
            DeRef(_30526);
            _30526 = NOVALUE;
            goto L11; // [483] 494
        }
        DeRef(_30526);
        _30526 = NOVALUE;
    }
    DeRef(_30526);
    _30526 = NOVALUE;

    /** parser.e:4559					CompileErr(160)*/
    RefDS(_21928);
    _52CompileErr(160, _21928, 0);
L11: 

    /** parser.e:4561				reset_flags = 0*/
    _reset_flags_61247 = 0;
    goto L12; // [499] 728
L10: 

    /** parser.e:4562			elsif tok[T_ID] = EQUALS then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30528 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30528, 3)){
        _30528 = NOVALUE;
        goto L13; // [512] 571
    }
    _30528 = NOVALUE;

    /** parser.e:4563				tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4564				if tok[T_ID] != LEFT_BRACE and tok[T_ID] != LEFT_ROUND then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30531 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30531)) {
        _30532 = (_30531 != -24);
    }
    else {
        _30532 = binary_op(NOTEQ, _30531, -24);
    }
    _30531 = NOVALUE;
    if (IS_ATOM_INT(_30532)) {
        if (_30532 == 0) {
            goto L14; // [535] 563
        }
    }
    else {
        if (DBL_PTR(_30532)->dbl == 0.0) {
            goto L14; // [535] 563
        }
    }
    _2 = (object)SEQ_PTR(_tok_61352);
    _30534 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_30534)) {
        _30535 = (_30534 != -26);
    }
    else {
        _30535 = binary_op(NOTEQ, _30534, -26);
    }
    _30534 = NOVALUE;
    if (_30535 == 0) {
        DeRef(_30535);
        _30535 = NOVALUE;
        goto L14; // [552] 563
    }
    else {
        if (!IS_ATOM_INT(_30535) && DBL_PTR(_30535)->dbl == 0.0){
            DeRef(_30535);
            _30535 = NOVALUE;
            goto L14; // [552] 563
        }
        DeRef(_30535);
        _30535 = NOVALUE;
    }
    DeRef(_30535);
    _30535 = NOVALUE;

    /** parser.e:4565					CompileErr(160)*/
    RefDS(_21928);
    _52CompileErr(160, _21928, 0);
L14: 

    /** parser.e:4567				reset_flags = 1*/
    _reset_flags_61247 = 1;
    goto L12; // [568] 728
L13: 

    /** parser.e:4568			elsif tok[T_ID] = VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30536 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30536, -100)){
        _30536 = NOVALUE;
        goto L15; // [581] 727
    }
    _30536 = NOVALUE;

    /** parser.e:4569				option = SymTab[tok[T_SYM]][S_NAME]*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30538 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30538)){
        _30539 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30538)->dbl));
    }
    else{
        _30539 = (object)*(((s1_ptr)_2)->base + _30538);
    }
    DeRef(_option_61245);
    _2 = (object)SEQ_PTR(_30539);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _option_61245 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _option_61245 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_option_61245);
    _30539 = NOVALUE;

    /** parser.e:4570				if equal(option, "save") then*/
    if (_option_61245 == _30541)
    _30542 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30541))
    _30542 = 0;
    else
    _30542 = (compare(_option_61245, _30541) == 0);
    if (_30542 == 0)
    {
        _30542 = NOVALUE;
        goto L16; // [613] 637
    }
    else{
        _30542 = NOVALUE;
    }

    /** parser.e:4571					prev_OpWarning = OpWarning*/
    _39prev_OpWarning_16883 = _39OpWarning_16882;

    /** parser.e:4572					warning_extra = FALSE*/
    _warning_extra_61354 = _9FALSE_442;
    goto L17; // [634] 726
L16: 

    /** parser.e:4574				elsif equal(option, "restore") then*/
    if (_option_61245 == _30543)
    _30544 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30543))
    _30544 = 0;
    else
    _30544 = (compare(_option_61245, _30543) == 0);
    if (_30544 == 0)
    {
        _30544 = NOVALUE;
        goto L18; // [643] 667
    }
    else{
        _30544 = NOVALUE;
    }

    /** parser.e:4575					OpWarning = prev_OpWarning*/
    _39OpWarning_16882 = _39prev_OpWarning_16883;

    /** parser.e:4576					warning_extra = FALSE*/
    _warning_extra_61354 = _9FALSE_442;
    goto L17; // [664] 726
L18: 

    /** parser.e:4578				elsif equal(option, "strict") then*/
    if (_option_61245 == _25399)
    _30545 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_25399))
    _30545 = 0;
    else
    _30545 = (compare(_option_61245, _25399) == 0);
    if (_30545 == 0)
    {
        _30545 = NOVALUE;
        goto L19; // [673] 725
    }
    else{
        _30545 = NOVALUE;
    }

    /** parser.e:4579					if on_off = 0 then*/
    if (_on_off_61244 != 0)
    goto L1A; // [678] 695

    /** parser.e:4580						Strict_Override += 1*/
    _39Strict_Override_16881 = _39Strict_Override_16881 + 1;
    goto L1B; // [692] 715
L1A: 

    /** parser.e:4581					elsif Strict_Override > 0 then*/
    if (_39Strict_Override_16881 <= 0)
    goto L1C; // [699] 714

    /** parser.e:4582						Strict_Override -= 1*/
    _39Strict_Override_16881 = _39Strict_Override_16881 - 1;
L1C: 
L1B: 

    /** parser.e:4584					warning_extra = FALSE*/
    _warning_extra_61354 = _9FALSE_442;
L19: 
L17: 
L15: 
L12: 

    /** parser.e:4588			if warning_extra = TRUE then*/
    if (_warning_extra_61354 != _9TRUE_444)
    goto L1D; // [732] 1230

    /** parser.e:4589				if reset_flags then*/
    if (_reset_flags_61247 == 0)
    {
        goto L1E; // [738] 770
    }
    else{
    }

    /** parser.e:4590					if on_off = 0 then*/
    if (_on_off_61244 != 0)
    goto L1F; // [743] 759

    /** parser.e:4591						OpWarning = no_warning_flag*/
    _39OpWarning_16882 = 0;
    goto L20; // [756] 769
L1F: 

    /** parser.e:4593						OpWarning = all_warning_flag*/
    _39OpWarning_16882 = 32767;
L20: 
L1E: 

    /** parser.e:4597				if find(tok[T_ID], {LEFT_BRACE, LEFT_ROUND}) then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30552 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -24;
    ((intptr_t *)_2)[2] = -26;
    _30553 = MAKE_SEQ(_1);
    _30554 = find_from(_30552, _30553, 1);
    _30552 = NOVALUE;
    DeRefDS(_30553);
    _30553 = NOVALUE;
    if (_30554 == 0)
    {
        _30554 = NOVALUE;
        goto L21; // [791] 1223
    }
    else{
        _30554 = NOVALUE;
    }

    /** parser.e:4598					integer endlist*/

    /** parser.e:4599					if tok[T_ID] = LEFT_BRACE then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30555 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30555, -24)){
        _30555 = NOVALUE;
        goto L22; // [806] 822
    }
    _30555 = NOVALUE;

    /** parser.e:4600						endlist = RIGHT_BRACE*/
    _endlist_61446 = -25;
    goto L23; // [819] 832
L22: 

    /** parser.e:4602						endlist = RIGHT_ROUND*/
    _endlist_61446 = -27;
L23: 

    /** parser.e:4604					tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4605					while tok[T_ID] != endlist do*/
L24: 
    _2 = (object)SEQ_PTR(_tok_61352);
    _30558 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _30558, _endlist_61446)){
        _30558 = NOVALUE;
        goto L25; // [850] 1218
    }
    _30558 = NOVALUE;

    /** parser.e:4606						if tok[T_ID] = COMMA then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30560 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30560, -30)){
        _30560 = NOVALUE;
        goto L26; // [864] 878
    }
    _30560 = NOVALUE;

    /** parser.e:4607							tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4608							continue*/
    goto L24; // [875] 842
L26: 

    /** parser.e:4611						if tok[T_ID] = STRING then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30563 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30563, 503)){
        _30563 = NOVALUE;
        goto L27; // [888] 917
    }
    _30563 = NOVALUE;

    /** parser.e:4612							option = SymTab[tok[T_SYM]][S_OBJ]*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30565 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30565)){
        _30566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30565)->dbl));
    }
    else{
        _30566 = (object)*(((s1_ptr)_2)->base + _30565);
    }
    DeRef(_option_61245);
    _2 = (object)SEQ_PTR(_30566);
    _option_61245 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_option_61245);
    _30566 = NOVALUE;
    goto L28; // [914] 1065
L27: 

    /** parser.e:4613						elsif length(SymTab[tok[T_SYM]]) >= S_NAME then*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30568 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30568)){
        _30569 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30568)->dbl));
    }
    else{
        _30569 = (object)*(((s1_ptr)_2)->base + _30568);
    }
    if (IS_SEQUENCE(_30569)){
            _30570 = SEQ_PTR(_30569)->length;
    }
    else {
        _30570 = 1;
    }
    _30569 = NOVALUE;
    if (binary_op_a(LESS, _30570, _39S_NAME_16470)){
        _30570 = NOVALUE;
        goto L29; // [936] 965
    }
    _30570 = NOVALUE;

    /** parser.e:4614							option = SymTab[tok[T_SYM]][S_NAME]*/
    _2 = (object)SEQ_PTR(_tok_61352);
    _30572 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30572)){
        _30573 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30572)->dbl));
    }
    else{
        _30573 = (object)*(((s1_ptr)_2)->base + _30572);
    }
    DeRef(_option_61245);
    _2 = (object)SEQ_PTR(_30573);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _option_61245 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _option_61245 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_option_61245);
    _30573 = NOVALUE;
    goto L28; // [962] 1065
L29: 

    /** parser.e:4616							option = ""*/
    RefDS(_21928);
    DeRef(_option_61245);
    _option_61245 = _21928;

    /** parser.e:4617							for k = 1 to length(keylist) do*/
    if (IS_SEQUENCE(_64keylist_22750)){
            _30575 = SEQ_PTR(_64keylist_22750)->length;
    }
    else {
        _30575 = 1;
    }
    {
        object _k_61493;
        _k_61493 = 1;
L2A: 
        if (_k_61493 > _30575){
            goto L2B; // [979] 1064
        }

        /** parser.e:4618								if keylist[k][S_SCOPE] = SC_KEYWORD and*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _30576 = (object)*(((s1_ptr)_2)->base + _k_61493);
        _2 = (object)SEQ_PTR(_30576);
        _30577 = (object)*(((s1_ptr)_2)->base + 4);
        _30576 = NOVALUE;
        if (IS_ATOM_INT(_30577)) {
            _30578 = (_30577 == 8);
        }
        else {
            _30578 = binary_op(EQUALS, _30577, 8);
        }
        _30577 = NOVALUE;
        if (IS_ATOM_INT(_30578)) {
            if (_30578 == 0) {
                goto L2C; // [1006] 1057
            }
        }
        else {
            if (DBL_PTR(_30578)->dbl == 0.0) {
                goto L2C; // [1006] 1057
            }
        }
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _30580 = (object)*(((s1_ptr)_2)->base + _k_61493);
        _2 = (object)SEQ_PTR(_30580);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _30581 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _30581 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _30580 = NOVALUE;
        _2 = (object)SEQ_PTR(_tok_61352);
        _30582 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_30581) && IS_ATOM_INT(_30582)) {
            _30583 = (_30581 == _30582);
        }
        else {
            _30583 = binary_op(EQUALS, _30581, _30582);
        }
        _30581 = NOVALUE;
        _30582 = NOVALUE;
        if (_30583 == 0) {
            DeRef(_30583);
            _30583 = NOVALUE;
            goto L2C; // [1033] 1057
        }
        else {
            if (!IS_ATOM_INT(_30583) && DBL_PTR(_30583)->dbl == 0.0){
                DeRef(_30583);
                _30583 = NOVALUE;
                goto L2C; // [1033] 1057
            }
            DeRef(_30583);
            _30583 = NOVALUE;
        }
        DeRef(_30583);
        _30583 = NOVALUE;

        /** parser.e:4621										option = keylist[k][S_NAME]*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _30584 = (object)*(((s1_ptr)_2)->base + _k_61493);
        DeRef(_option_61245);
        _2 = (object)SEQ_PTR(_30584);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _option_61245 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _option_61245 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        Ref(_option_61245);
        _30584 = NOVALUE;

        /** parser.e:4622										exit*/
        goto L2B; // [1054] 1064
L2C: 

        /** parser.e:4624							end for*/
        _k_61493 = _k_61493 + 1;
        goto L2A; // [1059] 986
L2B: 
        ;
    }
L28: 

    /** parser.e:4628						idx = find(option, warning_names)*/
    _idx_61246 = find_from(_option_61245, _39warning_names_16859, 1);

    /** parser.e:4629						if idx = 0 then*/
    if (_idx_61246 != 0)
    goto L2D; // [1076] 1129

    /** parser.e:4630		 					if good_sofar != line_number then*/
    if (_good_sofar_61349 == _39line_number_16816)
    goto L2E; // [1084] 1096

    /** parser.e:4631	 							CompileErr(147)*/
    RefDS(_21928);
    _52CompileErr(147, _21928, 0);
L2E: 

    /** parser.e:4633							Warning(225, 0,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _30590 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30590);
    ((intptr_t*)_2)[1] = _30590;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    RefDS(_option_61245);
    ((intptr_t*)_2)[3] = _option_61245;
    _30591 = MAKE_SEQ(_1);
    _30590 = NOVALUE;
    _52Warning(225, 0, _30591);
    _30591 = NOVALUE;

    /** parser.e:4635							tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4636							continue*/
    goto L24; // [1126] 842
L2D: 

    /** parser.e:4639						idx = warning_flags[idx]*/
    _2 = (object)SEQ_PTR(_39warning_flags_16857);
    _idx_61246 = (object)*(((s1_ptr)_2)->base + _idx_61246);

    /** parser.e:4640						if idx = 0 then*/
    if (_idx_61246 != 0)
    goto L2F; // [1141] 1175

    /** parser.e:4641							if on_off then*/
    if (_on_off_61244 == 0)
    {
        goto L30; // [1147] 1162
    }
    else{
    }

    /** parser.e:4642								OpWarning = no_warning_flag*/
    _39OpWarning_16882 = 0;
    goto L31; // [1159] 1208
L30: 

    /** parser.e:4644							    OpWarning = all_warning_flag*/
    _39OpWarning_16882 = 32767;
    goto L31; // [1172] 1208
L2F: 

    /** parser.e:4647							if on_off then*/
    if (_on_off_61244 == 0)
    {
        goto L32; // [1177] 1193
    }
    else{
    }

    /** parser.e:4648								OpWarning = or_bits(OpWarning, idx)*/
    {uintptr_t tu;
         tu = (uintptr_t)_39OpWarning_16882 | (uintptr_t)_idx_61246;
         _39OpWarning_16882 = MAKE_UINT(tu);
    }
    if (!IS_ATOM_INT(_39OpWarning_16882)) {
        _1 = (object)(DBL_PTR(_39OpWarning_16882)->dbl);
        DeRefDS(_39OpWarning_16882);
        _39OpWarning_16882 = _1;
    }
    goto L33; // [1190] 1207
L32: 

    /** parser.e:4650							    OpWarning = and_bits(OpWarning, not_bits(idx))*/
    _30596 = not_bits(_idx_61246);
    if (IS_ATOM_INT(_30596)) {
        {uintptr_t tu;
             tu = (uintptr_t)_39OpWarning_16882 & (uintptr_t)_30596;
             _39OpWarning_16882 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_39OpWarning_16882;
        _39OpWarning_16882 = Dand_bits(&temp_d, DBL_PTR(_30596));
    }
    DeRef(_30596);
    _30596 = NOVALUE;
    if (!IS_ATOM_INT(_39OpWarning_16882)) {
        _1 = (object)(DBL_PTR(_39OpWarning_16882)->dbl);
        DeRefDS(_39OpWarning_16882);
        _39OpWarning_16882 = _1;
    }
L33: 
L31: 

    /** parser.e:4653						tok = next_token()*/
    _0 = _tok_61352;
    _tok_61352 = _42next_token();
    DeRef(_0);

    /** parser.e:4654					end while*/
    goto L24; // [1215] 842
L25: 
    goto L34; // [1220] 1229
L21: 

    /** parser.e:4656					putback(tok)*/
    Ref(_tok_61352);
    _42putback(_tok_61352);
L34: 
L1D: 
    DeRef(_tok_61352);
    _tok_61352 = NOVALUE;
    goto L2; // [1232] 1532
LF: 

    /** parser.e:4659		elsif equal(option, "define") then*/
    if (_option_61245 == _30599)
    _30600 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30599))
    _30600 = 0;
    else
    _30600 = (compare(_option_61245, _30599) == 0);
    if (_30600 == 0)
    {
        _30600 = NOVALUE;
        goto L35; // [1241] 1364
    }
    else{
        _30600 = NOVALUE;
    }

    /** parser.e:4660			option = StringToken()*/
    RefDS(_5);
    _0 = _option_61245;
    _option_61245 = _63StringToken(_5);
    DeRefDS(_0);

    /** parser.e:4661			if length(option) = 0 then*/
    if (IS_SEQUENCE(_option_61245)){
            _30602 = SEQ_PTR(_option_61245)->length;
    }
    else {
        _30602 = 1;
    }
    if (_30602 != 0)
    goto L36; // [1257] 1271

    /** parser.e:4662				CompileErr(81)*/
    RefDS(_21928);
    _52CompileErr(81, _21928, 0);
    goto L37; // [1268] 1289
L36: 

    /** parser.e:4664			elsif not t_identifier(option) then*/
    RefDS(_option_61245);
    _30605 = _9t_identifier(_option_61245);
    if (IS_ATOM_INT(_30605)) {
        if (_30605 != 0){
            DeRef(_30605);
            _30605 = NOVALUE;
            goto L38; // [1277] 1288
        }
    }
    else {
        if (DBL_PTR(_30605)->dbl != 0.0){
            DeRef(_30605);
            _30605 = NOVALUE;
            goto L38; // [1277] 1288
        }
    }
    DeRef(_30605);
    _30605 = NOVALUE;

    /** parser.e:4665				CompileErr(61)*/
    RefDS(_21928);
    _52CompileErr(61, _21928, 0);
L38: 
L37: 

    /** parser.e:4668			if on_off = 0 then*/
    if (_on_off_61244 != 0)
    goto L39; // [1291] 1346

    /** parser.e:4669				idx = find(option, OpDefines)*/
    _idx_61246 = find_from(_option_61245, _39OpDefines_16888, 1);

    /** parser.e:4670				if idx then*/
    if (_idx_61246 == 0)
    {
        goto L2; // [1306] 1532
    }
    else{
    }

    /** parser.e:4671					OpDefines = OpDefines[1..idx-1]&OpDefines[idx+1..$]*/
    _30610 = _idx_61246 - 1;
    rhs_slice_target = (object_ptr)&_30611;
    RHS_Slice(_39OpDefines_16888, 1, _30610);
    _30612 = _idx_61246 + 1;
    if (IS_SEQUENCE(_39OpDefines_16888)){
            _30613 = SEQ_PTR(_39OpDefines_16888)->length;
    }
    else {
        _30613 = 1;
    }
    rhs_slice_target = (object_ptr)&_30614;
    RHS_Slice(_39OpDefines_16888, _30612, _30613);
    Concat((object_ptr)&_39OpDefines_16888, _30611, _30614);
    DeRefDS(_30611);
    _30611 = NOVALUE;
    DeRef(_30611);
    _30611 = NOVALUE;
    DeRefDS(_30614);
    _30614 = NOVALUE;
    goto L2; // [1343] 1532
L39: 

    /** parser.e:4674				OpDefines &= {option}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_option_61245);
    ((intptr_t*)_2)[1] = _option_61245;
    _30616 = MAKE_SEQ(_1);
    Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _30616);
    DeRefDS(_30616);
    _30616 = NOVALUE;
    goto L2; // [1361] 1532
L35: 

    /** parser.e:4677		elsif equal(option, "inline") then*/
    if (_option_61245 == _30618)
    _30619 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30618))
    _30619 = 0;
    else
    _30619 = (compare(_option_61245, _30618) == 0);
    if (_30619 == 0)
    {
        _30619 = NOVALUE;
        goto L3A; // [1370] 1466
    }
    else{
        _30619 = NOVALUE;
    }

    /** parser.e:4679			if on_off and not repl then*/
    if (_on_off_61244 == 0) {
        goto L3B; // [1375] 1455
    }
    _30621 = (0 == 0);
    if (_30621 == 0)
    {
        DeRef(_30621);
        _30621 = NOVALUE;
        goto L3B; // [1385] 1455
    }
    else{
        DeRef(_30621);
        _30621 = NOVALUE;
    }

    /** parser.e:4680				token tok = next_token()*/
    _0 = _tok_61595;
    _tok_61595 = _42next_token();
    DeRef(_0);

    /** parser.e:4681				if tok[T_ID] = ATOM then*/
    _2 = (object)SEQ_PTR(_tok_61595);
    _30623 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30623, 502)){
        _30623 = NOVALUE;
        goto L3C; // [1403] 1435
    }
    _30623 = NOVALUE;

    /** parser.e:4682					OpInline = floor( SymTab[tok[T_SYM]][S_OBJ] )*/
    _2 = (object)SEQ_PTR(_tok_61595);
    _30625 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30625)){
        _30626 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30625)->dbl));
    }
    else{
        _30626 = (object)*(((s1_ptr)_2)->base + _30625);
    }
    _2 = (object)SEQ_PTR(_30626);
    _30627 = (object)*(((s1_ptr)_2)->base + 1);
    _30626 = NOVALUE;
    if (IS_ATOM_INT(_30627))
    _39OpInline_16889 = e_floor(_30627);
    else
    _39OpInline_16889 = unary_op(FLOOR, _30627);
    _30627 = NOVALUE;
    if (!IS_ATOM_INT(_39OpInline_16889)) {
        _1 = (object)(DBL_PTR(_39OpInline_16889)->dbl);
        DeRefDS(_39OpInline_16889);
        _39OpInline_16889 = _1;
    }
    goto L3D; // [1432] 1450
L3C: 

    /** parser.e:4684					putback(tok)*/
    Ref(_tok_61595);
    _42putback(_tok_61595);

    /** parser.e:4685					OpInline = DEFAULT_INLINE*/
    _39OpInline_16889 = 30;
L3D: 
    DeRef(_tok_61595);
    _tok_61595 = NOVALUE;
    goto L2; // [1452] 1532
L3B: 

    /** parser.e:4688				OpInline = 0*/
    _39OpInline_16889 = 0;
    goto L2; // [1463] 1532
L3A: 

    /** parser.e:4692		elsif equal( option, "indirect_includes" ) then*/
    if (_option_61245 == _30629)
    _30630 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_30629))
    _30630 = 0;
    else
    _30630 = (compare(_option_61245, _30629) == 0);
    if (_30630 == 0)
    {
        _30630 = NOVALUE;
        goto L3E; // [1472] 1485
    }
    else{
        _30630 = NOVALUE;
    }

    /** parser.e:4693			OpIndirectInclude = on_off*/
    _39OpIndirectInclude_16890 = _on_off_61244;
    goto L2; // [1482] 1532
L3E: 

    /** parser.e:4695		elsif equal(option, "batch") then*/
    if (_option_61245 == _25396)
    _30631 = 1;
    else if (IS_ATOM_INT(_option_61245) && IS_ATOM_INT(_25396))
    _30631 = 0;
    else
    _30631 = (compare(_option_61245, _25396) == 0);
    if (_30631 == 0)
    {
        _30631 = NOVALUE;
        goto L3F; // [1491] 1504
    }
    else{
        _30631 = NOVALUE;
    }

    /** parser.e:4696			batch_job = on_off*/
    _39batch_job_16828 = _on_off_61244;
    goto L2; // [1501] 1532
L3F: 

    /** parser.e:4698		elsif integer(to_number(option, -1)) then*/
    RefDS(_option_61245);
    _30632 = _14to_number(_option_61245, -1);
    if (IS_ATOM_INT(_30632))
    _30633 = 1;
    else if (IS_ATOM_DBL(_30632))
    _30633 = IS_ATOM_INT(DoubleToInt(_30632));
    else
    _30633 = 0;
    DeRef(_30632);
    _30632 = NOVALUE;
    if (_30633 == 0)
    {
        _30633 = NOVALUE;
        goto L40; // [1514] 1520
    }
    else{
        _30633 = NOVALUE;
    }
    goto L2; // [1517] 1532
L40: 

    /** parser.e:4702			CompileErr(154, {option})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_option_61245);
    ((intptr_t*)_2)[1] = _option_61245;
    _30635 = MAKE_SEQ(_1);
    _52CompileErr(154, _30635, 0);
    _30635 = NOVALUE;
L2: 

    /** parser.e:4705	end procedure*/
    DeRef(_option_61245);
    _30501 = NOVALUE;
    _30625 = NOVALUE;
    DeRef(_30523);
    _30523 = NOVALUE;
    _30565 = NOVALUE;
    _30538 = NOVALUE;
    DeRef(_30532);
    _30532 = NOVALUE;
    _30569 = NOVALUE;
    _30568 = NOVALUE;
    DeRef(_30610);
    _30610 = NOVALUE;
    DeRef(_30489);
    _30489 = NOVALUE;
    DeRef(_30508);
    _30508 = NOVALUE;
    _30572 = NOVALUE;
    DeRef(_30578);
    _30578 = NOVALUE;
    DeRef(_30494);
    _30494 = NOVALUE;
    DeRef(_30612);
    _30612 = NOVALUE;
    _30505 = NOVALUE;
    return;
    ;
}


void _42ExecCommand()
{
    object _0, _1, _2;
    

    /** parser.e:4709		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [5] 16
    }
    else{
    }

    /** parser.e:4710			emit_op(RETURNT)*/
    _49emit_op(34);
L1: 

    /** parser.e:4712		StraightenBranches()  -- straighten top-level*/
    _42StraightenBranches();

    /** parser.e:4713	end procedure*/
    return;
    ;
}


object _42undefined_var(object _tok_61639, object _scope_61640)
{
    object _forward_61642 = NOVALUE;
    object _30641 = NOVALUE;
    object _30640 = NOVALUE;
    object _30637 = NOVALUE;
    object _0, _1, _2;
    

    /** parser.e:4716		token forward = next_token()*/
    _0 = _forward_61642;
    _forward_61642 = _42next_token();
    DeRef(_0);

    /** parser.e:4717			switch forward[T_ID] do*/
    _2 = (object)SEQ_PTR(_forward_61642);
    _30637 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_30637) ){
        goto L1; // [16] 82
    }
    if(!IS_ATOM_INT(_30637)){
        if( (DBL_PTR(_30637)->dbl != (eudouble) ((object) DBL_PTR(_30637)->dbl) ) ){
            goto L1; // [16] 82
        }
        _0 = (object) DBL_PTR(_30637)->dbl;
    }
    else {
        _0 = _30637;
    };
    _30637 = NOVALUE;
    switch ( _0 ){ 

        /** parser.e:4718				case LEFT_ROUND then*/
        case -26:

        /** parser.e:4719					StartSourceLine( TRUE )*/
        _49StartSourceLine(_9TRUE_444, 0, 2);

        /** parser.e:4720					Forward_call( tok )*/
        Ref(_tok_61639);
        _42Forward_call(_tok_61639, 195);

        /** parser.e:4721					return 1*/
        DeRef(_tok_61639);
        DeRef(_forward_61642);
        return 1;
        goto L2; // [48] 96

        /** parser.e:4723				case VARIABLE then*/
        case -100:

        /** parser.e:4724					putback( forward )*/
        Ref(_forward_61642);
        _42putback(_forward_61642);

        /** parser.e:4725					Global_declaration( tok[T_SYM], scope )*/
        _2 = (object)SEQ_PTR(_tok_61639);
        _30640 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_30640);
        _30641 = _42Global_declaration(_30640, _scope_61640);
        _30640 = NOVALUE;

        /** parser.e:4726					return 1*/
        DeRef(_tok_61639);
        DeRef(_forward_61642);
        DeRef(_30641);
        _30641 = NOVALUE;
        return 1;
        goto L2; // [78] 96

        /** parser.e:4728				case else*/
        default:
L1: 

        /** parser.e:4729					putback( forward )*/
        Ref(_forward_61642);
        _42putback(_forward_61642);

        /** parser.e:4730					return 0*/
        DeRef(_tok_61639);
        DeRef(_forward_61642);
        DeRef(_30641);
        _30641 = NOVALUE;
        return 0;
    ;}L2: 
    ;
}


void _42real_parser(object _nested_61661)
{
    object _tok_61663 = NOVALUE;
    object _id_61664 = NOVALUE;
    object _scope_61665 = NOVALUE;
    object _deprecated_61727 = NOVALUE;
    object _test_61822 = NOVALUE;
    object _30791 = NOVALUE;
    object _30789 = NOVALUE;
    object _30788 = NOVALUE;
    object _30787 = NOVALUE;
    object _30786 = NOVALUE;
    object _30784 = NOVALUE;
    object _30783 = NOVALUE;
    object _30782 = NOVALUE;
    object _30776 = NOVALUE;
    object _30775 = NOVALUE;
    object _30772 = NOVALUE;
    object _30770 = NOVALUE;
    object _30769 = NOVALUE;
    object _30766 = NOVALUE;
    object _30747 = NOVALUE;
    object _30739 = NOVALUE;
    object _30738 = NOVALUE;
    object _30736 = NOVALUE;
    object _30734 = NOVALUE;
    object _30733 = NOVALUE;
    object _30731 = NOVALUE;
    object _30729 = NOVALUE;
    object _30724 = NOVALUE;
    object _30722 = NOVALUE;
    object _30720 = NOVALUE;
    object _30719 = NOVALUE;
    object _30718 = NOVALUE;
    object _30716 = NOVALUE;
    object _30714 = NOVALUE;
    object _30712 = NOVALUE;
    object _30708 = NOVALUE;
    object _30707 = NOVALUE;
    object _30706 = NOVALUE;
    object _30705 = NOVALUE;
    object _30704 = NOVALUE;
    object _30703 = NOVALUE;
    object _30702 = NOVALUE;
    object _30701 = NOVALUE;
    object _30700 = NOVALUE;
    object _30699 = NOVALUE;
    object _30698 = NOVALUE;
    object _30697 = NOVALUE;
    object _30696 = NOVALUE;
    object _30695 = NOVALUE;
    object _30693 = NOVALUE;
    object _30692 = NOVALUE;
    object _30691 = NOVALUE;
    object _30690 = NOVALUE;
    object _30688 = NOVALUE;
    object _30686 = NOVALUE;
    object _30685 = NOVALUE;
    object _30684 = NOVALUE;
    object _30682 = NOVALUE;
    object _30671 = NOVALUE;
    object _30669 = NOVALUE;
    object _30668 = NOVALUE;
    object _30667 = NOVALUE;
    object _30666 = NOVALUE;
    object _30665 = NOVALUE;
    object _30664 = NOVALUE;
    object _30663 = NOVALUE;
    object _30662 = NOVALUE;
    object _30661 = NOVALUE;
    object _30659 = NOVALUE;
    object _30658 = NOVALUE;
    object _30657 = NOVALUE;
    object _30656 = NOVALUE;
    object _30655 = NOVALUE;
    object _30654 = NOVALUE;
    object _30653 = NOVALUE;
    object _30652 = NOVALUE;
    object _30651 = NOVALUE;
    object _30650 = NOVALUE;
    object _30648 = NOVALUE;
    object _30644 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:4737		integer id*/

    /** parser.e:4738		integer scope*/

    /** parser.e:4740		while TRUE do  -- infinite loop until scanner aborts*/
L1: 
    if (_9TRUE_444 == 0)
    {
        goto L2; // [14] 1897
    }
    else{
    }

    /** parser.e:4741			if OpInline = 25000 then*/
    if (_39OpInline_16889 != 25000)
    goto L3; // [21] 35

    /** parser.e:4742				CompileErr("OpInline went nuts: [1]", OpInline )*/
    RefDS(_30643);
    _52CompileErr(_30643, _39OpInline_16889, 0);
L3: 

    /** parser.e:4744			start_index = length(Code)+1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _30644 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _30644 = 1;
    }
    _42start_index_54369 = _30644 + 1;
    _30644 = NOVALUE;

    /** parser.e:4745			tok = next_token()*/
    _0 = _tok_61663;
    _tok_61663 = _42next_token();
    DeRef(_0);

    /** parser.e:4746			id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _id_61664 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_61664)){
        _id_61664 = (object)DBL_PTR(_id_61664)->dbl;
    }

    /** parser.e:4747			if id = VARIABLE or id = QUALIFIED_VARIABLE then*/
    _30648 = (_id_61664 == -100);
    if (_30648 != 0) {
        goto L4; // [69] 84
    }
    _30650 = (_id_61664 == 512);
    if (_30650 == 0)
    {
        DeRef(_30650);
        _30650 = NOVALUE;
        goto L5; // [80] 151
    }
    else{
        DeRef(_30650);
        _30650 = NOVALUE;
    }
L4: 

    /** parser.e:4748				if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30651 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30651)){
        _30652 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30651)->dbl));
    }
    else{
        _30652 = (object)*(((s1_ptr)_2)->base + _30651);
    }
    _2 = (object)SEQ_PTR(_30652);
    _30653 = (object)*(((s1_ptr)_2)->base + 4);
    _30652 = NOVALUE;
    if (IS_ATOM_INT(_30653)) {
        _30654 = (_30653 == 9);
    }
    else {
        _30654 = binary_op(EQUALS, _30653, 9);
    }
    _30653 = NOVALUE;
    if (IS_ATOM_INT(_30654)) {
        if (_30654 == 0) {
            goto L6; // [110] 130
        }
    }
    else {
        if (DBL_PTR(_30654)->dbl == 0.0) {
            goto L6; // [110] 130
        }
    }
    Ref(_tok_61663);
    _30656 = _42undefined_var(_tok_61663, 5);
    if (_30656 == 0) {
        DeRef(_30656);
        _30656 = NOVALUE;
        goto L6; // [122] 130
    }
    else {
        if (!IS_ATOM_INT(_30656) && DBL_PTR(_30656)->dbl == 0.0){
            DeRef(_30656);
            _30656 = NOVALUE;
            goto L6; // [122] 130
        }
        DeRef(_30656);
        _30656 = NOVALUE;
    }
    DeRef(_30656);
    _30656 = NOVALUE;

    /** parser.e:4750					continue*/
    goto L1; // [127] 12
L6: 

    /** parser.e:4752				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4753				Assignment(tok)*/
    Ref(_tok_61663);
    _42Assignment(_tok_61663);

    /** parser.e:4754				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [148] 1887
L5: 

    /** parser.e:4756			elsif id = PROCEDURE or id = FUNCTION or id = TYPE_DECL then*/
    _30657 = (_id_61664 == 405);
    if (_30657 != 0) {
        _30658 = 1;
        goto L8; // [159] 173
    }
    _30659 = (_id_61664 == 406);
    _30658 = (_30659 != 0);
L8: 
    if (_30658 != 0) {
        goto L9; // [173] 188
    }
    _30661 = (_id_61664 == 416);
    if (_30661 == 0)
    {
        DeRef(_30661);
        _30661 = NOVALUE;
        goto LA; // [184] 206
    }
    else{
        DeRef(_30661);
        _30661 = NOVALUE;
    }
L9: 

    /** parser.e:4757				SubProg(tok[T_ID], SC_LOCAL, 0)*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30662 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30662);
    _42SubProg(_30662, 5, 0);
    _30662 = NOVALUE;
    goto L7; // [203] 1887
LA: 

    /** parser.e:4759			elsif id = GLOBAL or id = EXPORT or id = OVERRIDE or id = PUBLIC or id = DEPRECATE then*/
    _30663 = (_id_61664 == 412);
    if (_30663 != 0) {
        _30664 = 1;
        goto LB; // [214] 228
    }
    _30665 = (_id_61664 == 428);
    _30664 = (_30665 != 0);
LB: 
    if (_30664 != 0) {
        _30666 = 1;
        goto LC; // [228] 242
    }
    _30667 = (_id_61664 == 429);
    _30666 = (_30667 != 0);
LC: 
    if (_30666 != 0) {
        _30668 = 1;
        goto LD; // [242] 256
    }
    _30669 = (_id_61664 == 430);
    _30668 = (_30669 != 0);
LD: 
    if (_30668 != 0) {
        goto LE; // [256] 271
    }
    _30671 = (_id_61664 == 433);
    if (_30671 == 0)
    {
        DeRef(_30671);
        _30671 = NOVALUE;
        goto LF; // [267] 688
    }
    else{
        DeRef(_30671);
        _30671 = NOVALUE;
    }
LE: 

    /** parser.e:4760				integer deprecated = 0*/
    _deprecated_61727 = 0;

    /** parser.e:4762				if id = DEPRECATE then*/
    if (_id_61664 != 433)
    goto L10; // [280] 305

    /** parser.e:4763					deprecated = 1*/
    _deprecated_61727 = 1;

    /** parser.e:4765					tok = next_token()*/
    _0 = _tok_61663;
    _tok_61663 = _42next_token();
    DeRef(_0);

    /** parser.e:4766					id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _id_61664 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_61664)){
        _id_61664 = (object)DBL_PTR(_id_61664)->dbl;
    }
L10: 

    /** parser.e:4769				scope = SC_LOCAL*/
    _scope_61665 = 5;

    /** parser.e:4770				if id = GLOBAL then*/
    if (_id_61664 != 412)
    goto L11; // [318] 334

    /** parser.e:4771				    scope = SC_GLOBAL*/
    _scope_61665 = 6;
    goto L12; // [331] 393
L11: 

    /** parser.e:4772				elsif id = EXPORT then*/
    if (_id_61664 != 428)
    goto L13; // [338] 354

    /** parser.e:4773					scope = SC_EXPORT*/
    _scope_61665 = 11;
    goto L12; // [351] 393
L13: 

    /** parser.e:4774				elsif id = OVERRIDE then*/
    if (_id_61664 != 429)
    goto L14; // [358] 374

    /** parser.e:4775					scope = SC_OVERRIDE*/
    _scope_61665 = 12;
    goto L12; // [371] 393
L14: 

    /** parser.e:4776				elsif id = PUBLIC then*/
    if (_id_61664 != 430)
    goto L15; // [378] 392

    /** parser.e:4777					scope = SC_PUBLIC*/
    _scope_61665 = 13;
L15: 
L12: 

    /** parser.e:4781				if scope != SC_LOCAL then*/
    if (_scope_61665 == 5)
    goto L16; // [397] 417

    /** parser.e:4782					tok = next_token()*/
    _0 = _tok_61663;
    _tok_61663 = _42next_token();
    DeRef(_0);

    /** parser.e:4783					id = tok[T_ID]*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _id_61664 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_id_61664)){
        _id_61664 = (object)DBL_PTR(_id_61664)->dbl;
    }
L16: 

    /** parser.e:4786				if id = TYPE or id = QUALIFIED_TYPE then*/
    _30682 = (_id_61664 == 504);
    if (_30682 != 0) {
        goto L17; // [425] 440
    }
    _30684 = (_id_61664 == 522);
    if (_30684 == 0)
    {
        DeRef(_30684);
        _30684 = NOVALUE;
        goto L18; // [436] 456
    }
    else{
        DeRef(_30684);
        _30684 = NOVALUE;
    }
L17: 

    /** parser.e:4787					Global_declaration(tok[T_SYM], scope )*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30685 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30685);
    _30686 = _42Global_declaration(_30685, _scope_61665);
    _30685 = NOVALUE;
    goto L19; // [453] 683
L18: 

    /** parser.e:4789				elsif id = CONSTANT then*/
    if (_id_61664 != 417)
    goto L1A; // [460] 478

    /** parser.e:4790					Global_declaration(0, scope )*/
    _30688 = _42Global_declaration(0, _scope_61665);

    /** parser.e:4791					ExecCommand()*/
    _42ExecCommand();
    goto L19; // [475] 683
L1A: 

    /** parser.e:4793				elsif id = ENUM then*/
    if (_id_61664 != 427)
    goto L1B; // [482] 500

    /** parser.e:4794					Global_declaration(-1, scope )*/
    _30690 = _42Global_declaration(-1, _scope_61665);

    /** parser.e:4795					ExecCommand()*/
    _42ExecCommand();
    goto L19; // [497] 683
L1B: 

    /** parser.e:4797				elsif id = PROCEDURE or id = FUNCTION or id = TYPE_DECL then*/
    _30691 = (_id_61664 == 405);
    if (_30691 != 0) {
        _30692 = 1;
        goto L1C; // [508] 522
    }
    _30693 = (_id_61664 == 406);
    _30692 = (_30693 != 0);
L1C: 
    if (_30692 != 0) {
        goto L1D; // [522] 537
    }
    _30695 = (_id_61664 == 416);
    if (_30695 == 0)
    {
        DeRef(_30695);
        _30695 = NOVALUE;
        goto L1E; // [533] 547
    }
    else{
        DeRef(_30695);
        _30695 = NOVALUE;
    }
L1D: 

    /** parser.e:4798					SubProg(id, scope, deprecated)*/
    _42SubProg(_id_61664, _scope_61665, _deprecated_61727);
    goto L19; // [544] 683
L1E: 

    /** parser.e:4800				elsif (scope = SC_PUBLIC) and id = INCLUDE then*/
    _30696 = (_scope_61665 == 13);
    if (_30696 == 0) {
        goto L1F; // [555] 581
    }
    _30698 = (_id_61664 == 418);
    if (_30698 == 0)
    {
        DeRef(_30698);
        _30698 = NOVALUE;
        goto L1F; // [566] 581
    }
    else{
        DeRef(_30698);
        _30698 = NOVALUE;
    }

    /** parser.e:4801					IncludeScan( 1 )*/
    _63IncludeScan(1);

    /** parser.e:4802					PushGoto()*/
    _42PushGoto();
    goto L19; // [578] 683
L1F: 

    /** parser.e:4803				elsif (id = VARIABLE or id = QUALIFIED_VARIABLE)*/
    _30699 = (_id_61664 == -100);
    if (_30699 != 0) {
        _30700 = 1;
        goto L20; // [589] 603
    }
    _30701 = (_id_61664 == 512);
    _30700 = (_30701 != 0);
L20: 
    if (_30700 == 0) {
        _30702 = 0;
        goto L21; // [603] 635
    }
    _2 = (object)SEQ_PTR(_tok_61663);
    _30703 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_30703)){
        _30704 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30703)->dbl));
    }
    else{
        _30704 = (object)*(((s1_ptr)_2)->base + _30703);
    }
    _2 = (object)SEQ_PTR(_30704);
    _30705 = (object)*(((s1_ptr)_2)->base + 4);
    _30704 = NOVALUE;
    if (IS_ATOM_INT(_30705)) {
        _30706 = (_30705 == 9);
    }
    else {
        _30706 = binary_op(EQUALS, _30705, 9);
    }
    _30705 = NOVALUE;
    if (IS_ATOM_INT(_30706))
    _30702 = (_30706 != 0);
    else
    _30702 = DBL_PTR(_30706)->dbl != 0.0;
L21: 
    if (_30702 == 0) {
        goto L22; // [635] 657
    }
    Ref(_tok_61663);
    _30708 = _42undefined_var(_tok_61663, _scope_61665);
    if (_30708 == 0) {
        DeRef(_30708);
        _30708 = NOVALUE;
        goto L22; // [645] 657
    }
    else {
        if (!IS_ATOM_INT(_30708) && DBL_PTR(_30708)->dbl == 0.0){
            DeRef(_30708);
            _30708 = NOVALUE;
            goto L22; // [645] 657
        }
        DeRef(_30708);
        _30708 = NOVALUE;
    }
    DeRef(_30708);
    _30708 = NOVALUE;

    /** parser.e:4807					continue*/
    goto L1; // [652] 12
    goto L19; // [654] 683
L22: 

    /** parser.e:4809				elsif scope = SC_GLOBAL then*/
    if (_scope_61665 != 6)
    goto L23; // [661] 675

    /** parser.e:4810					CompileErr( 18 )*/
    RefDS(_21928);
    _52CompileErr(18, _21928, 0);
    goto L19; // [672] 683
L23: 

    /** parser.e:4812					CompileErr( 16 )*/
    RefDS(_21928);
    _52CompileErr(16, _21928, 0);
L19: 
    goto L7; // [685] 1887
LF: 

    /** parser.e:4815			elsif id = TYPE or id = QUALIFIED_TYPE then*/
    _30712 = (_id_61664 == 504);
    if (_30712 != 0) {
        goto L24; // [696] 711
    }
    _30714 = (_id_61664 == 522);
    if (_30714 == 0)
    {
        DeRef(_30714);
        _30714 = NOVALUE;
        goto L25; // [707] 796
    }
    else{
        DeRef(_30714);
        _30714 = NOVALUE;
    }
L24: 

    /** parser.e:4816				token test = next_token()*/
    _0 = _test_61822;
    _test_61822 = _42next_token();
    DeRef(_0);

    /** parser.e:4817				putback( test )*/
    Ref(_test_61822);
    _42putback(_test_61822);

    /** parser.e:4818				if test[T_ID] = LEFT_ROUND then*/
    _2 = (object)SEQ_PTR(_test_61822);
    _30716 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _30716, -26)){
        _30716 = NOVALUE;
        goto L26; // [731] 769
    }
    _30716 = NOVALUE;

    /** parser.e:4819						StartSourceLine( TRUE )*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4820						Procedure_call(tok)*/
    Ref(_tok_61663);
    _42Procedure_call(_tok_61663);

    /** parser.e:4821						clear_op()*/
    _49clear_op();

    /** parser.e:4822						if Pop() then end if*/
    _30718 = _49Pop();
    if (_30718 == 0) {
        DeRef(_30718);
        _30718 = NOVALUE;
        goto L27; // [758] 762
    }
    else {
        if (!IS_ATOM_INT(_30718) && DBL_PTR(_30718)->dbl == 0.0){
            DeRef(_30718);
            _30718 = NOVALUE;
            goto L27; // [758] 762
        }
        DeRef(_30718);
        _30718 = NOVALUE;
    }
    DeRef(_30718);
    _30718 = NOVALUE;
L27: 

    /** parser.e:4823						ExecCommand()*/
    _42ExecCommand();
    goto L28; // [766] 785
L26: 

    /** parser.e:4826					Global_declaration( tok[T_SYM], SC_LOCAL )*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30719 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30719);
    _30720 = _42Global_declaration(_30719, 5);
    _30719 = NOVALUE;
L28: 

    /** parser.e:4829				continue*/
    DeRef(_test_61822);
    _test_61822 = NOVALUE;
    goto L1; // [789] 12
    goto L7; // [793] 1887
L25: 

    /** parser.e:4831			elsif id = CONSTANT then*/
    if (_id_61664 != 417)
    goto L29; // [800] 820

    /** parser.e:4832				Global_declaration(0, SC_LOCAL)*/
    _30722 = _42Global_declaration(0, 5);

    /** parser.e:4833				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [817] 1887
L29: 

    /** parser.e:4835			elsif id = ENUM then*/
    if (_id_61664 != 427)
    goto L2A; // [824] 844

    /** parser.e:4836				Global_declaration(-1, SC_LOCAL)*/
    _30724 = _42Global_declaration(-1, 5);

    /** parser.e:4837				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [841] 1887
L2A: 

    /** parser.e:4839			elsif id = IF then*/
    if (_id_61664 != 20)
    goto L2B; // [848] 872

    /** parser.e:4840				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4841				If_statement()*/
    _42If_statement();

    /** parser.e:4842				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [869] 1887
L2B: 

    /** parser.e:4844			elsif id = FOR then*/
    if (_id_61664 != 21)
    goto L2C; // [876] 900

    /** parser.e:4845				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4846				For_statement()*/
    _42For_statement();

    /** parser.e:4847				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [897] 1887
L2C: 

    /** parser.e:4849			elsif id = WHILE then*/
    if (_id_61664 != 47)
    goto L2D; // [904] 928

    /** parser.e:4850				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4851				While_statement()*/
    _42While_statement();

    /** parser.e:4852				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [925] 1887
L2D: 

    /** parser.e:4854			elsif id = LOOP then*/
    if (_id_61664 != 422)
    goto L2E; // [932] 956

    /** parser.e:4855			    StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4856			    Loop_statement()*/
    _42Loop_statement();

    /** parser.e:4857			    ExecCommand()*/
    _42ExecCommand();
    goto L7; // [953] 1887
L2E: 

    /** parser.e:4859			elsif id = PROC or id = QUALIFIED_PROC then*/
    _30729 = (_id_61664 == 27);
    if (_30729 != 0) {
        goto L2F; // [964] 979
    }
    _30731 = (_id_61664 == 521);
    if (_30731 == 0)
    {
        DeRef(_30731);
        _30731 = NOVALUE;
        goto L30; // [975] 1020
    }
    else{
        DeRef(_30731);
        _30731 = NOVALUE;
    }
L2F: 

    /** parser.e:4860				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4861				if id = PROC then*/
    if (_id_61664 != 27)
    goto L31; // [992] 1008

    /** parser.e:4863					UndefinedVar( tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30733 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30733);
    _42UndefinedVar(_30733);
    _30733 = NOVALUE;
L31: 

    /** parser.e:4866				Procedure_call(tok)*/
    Ref(_tok_61663);
    _42Procedure_call(_tok_61663);

    /** parser.e:4867				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [1017] 1887
L30: 

    /** parser.e:4869			elsif id = FUNC or id = QUALIFIED_FUNC then*/
    _30734 = (_id_61664 == 501);
    if (_30734 != 0) {
        goto L32; // [1028] 1043
    }
    _30736 = (_id_61664 == 520);
    if (_30736 == 0)
    {
        DeRef(_30736);
        _30736 = NOVALUE;
        goto L33; // [1039] 1097
    }
    else{
        DeRef(_30736);
        _30736 = NOVALUE;
    }
L32: 

    /** parser.e:4870				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4871				if id = FUNC then*/
    if (_id_61664 != 501)
    goto L34; // [1056] 1072

    /** parser.e:4873					UndefinedVar( tok[T_SYM] )*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30738 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_30738);
    _42UndefinedVar(_30738);
    _30738 = NOVALUE;
L34: 

    /** parser.e:4876				Procedure_call(tok)*/
    Ref(_tok_61663);
    _42Procedure_call(_tok_61663);

    /** parser.e:4877				clear_op()*/
    _49clear_op();

    /** parser.e:4878				if Pop() then end if*/
    _30739 = _49Pop();
    if (_30739 == 0) {
        DeRef(_30739);
        _30739 = NOVALUE;
        goto L35; // [1086] 1090
    }
    else {
        if (!IS_ATOM_INT(_30739) && DBL_PTR(_30739)->dbl == 0.0){
            DeRef(_30739);
            _30739 = NOVALUE;
            goto L35; // [1086] 1090
        }
        DeRef(_30739);
        _30739 = NOVALUE;
    }
    DeRef(_30739);
    _30739 = NOVALUE;
L35: 

    /** parser.e:4879				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [1094] 1887
L33: 

    /** parser.e:4881			elsif id = RETURN then*/
    if (_id_61664 != 413)
    goto L36; // [1101] 1112

    /** parser.e:4882				Return_statement() -- will fail - not allowed at top level*/
    _42Return_statement();
    goto L7; // [1109] 1887
L36: 

    /** parser.e:4884			elsif id = EXIT then*/
    if (_id_61664 != 61)
    goto L37; // [1116] 1152

    /** parser.e:4885				if nested then*/
    if (_nested_61661 == 0)
    {
        goto L38; // [1122] 1141
    }
    else{
    }

    /** parser.e:4886				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4887				Exit_statement()*/
    _42Exit_statement();
    goto L7; // [1138] 1887
L38: 

    /** parser.e:4889				CompileErr(89)*/
    RefDS(_21928);
    _52CompileErr(89, _21928, 0);
    goto L7; // [1149] 1887
L37: 

    /** parser.e:4892			elsif id = INCLUDE then*/
    if (_id_61664 != 418)
    goto L39; // [1156] 1172

    /** parser.e:4893				IncludeScan( 0 )*/
    _63IncludeScan(0);

    /** parser.e:4894				PushGoto()*/
    _42PushGoto();
    goto L7; // [1169] 1887
L39: 

    /** parser.e:4896			elsif id = WITH then*/
    if (_id_61664 != 420)
    goto L3A; // [1176] 1190

    /** parser.e:4897				SetWith(TRUE)*/
    _42SetWith(_9TRUE_444);
    goto L7; // [1187] 1887
L3A: 

    /** parser.e:4899			elsif id = WITHOUT then*/
    if (_id_61664 != 421)
    goto L3B; // [1194] 1208

    /** parser.e:4900				SetWith(FALSE)*/
    _42SetWith(_9FALSE_442);
    goto L7; // [1205] 1887
L3B: 

    /** parser.e:4902			elsif id = END_OF_FILE then*/
    if (_id_61664 != -21)
    goto L3C; // [1212] 1329

    /** parser.e:4903				if IncludePop() then*/
    _30747 = _63IncludePop();
    if (_30747 == 0) {
        DeRef(_30747);
        _30747 = NOVALUE;
        goto L3D; // [1221] 1317
    }
    else {
        if (!IS_ATOM_INT(_30747) && DBL_PTR(_30747)->dbl == 0.0){
            DeRef(_30747);
            _30747 = NOVALUE;
            goto L3D; // [1221] 1317
        }
        DeRef(_30747);
        _30747 = NOVALUE;
    }
    DeRef(_30747);
    _30747 = NOVALUE;

    /** parser.e:4904					backed_up_tok = {}*/
    RefDS(_21928);
    DeRef(_42backed_up_tok_54370);
    _42backed_up_tok_54370 = _21928;

    /** parser.e:4905					PopGoto()*/
    _42PopGoto();

    /** parser.e:4906					read_line()*/
    _63read_line();

    /** parser.e:4908					last_ForwardLine     = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52last_ForwardLine_48713);
    _52last_ForwardLine_48713 = _52ThisLine_48710;

    /** parser.e:4909					last_fwd_line_number = line_number*/
    _39last_fwd_line_number_16819 = _39line_number_16816;

    /** parser.e:4910					last_forward_bp      = bp*/
    _52last_forward_bp_48717 = _52bp_48714;

    /** parser.e:4912					putback_ForwardLine     = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52putback_ForwardLine_48712);
    _52putback_ForwardLine_48712 = _52ThisLine_48710;

    /** parser.e:4913					putback_fwd_line_number = line_number*/
    _39putback_fwd_line_number_16818 = _39line_number_16816;

    /** parser.e:4914					putback_forward_bp      = bp*/
    _52putback_forward_bp_48716 = _52bp_48714;

    /** parser.e:4916					ForwardLine     = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52ForwardLine_48711);
    _52ForwardLine_48711 = _52ThisLine_48710;

    /** parser.e:4917					fwd_line_number = line_number*/
    _39fwd_line_number_16817 = _39line_number_16816;

    /** parser.e:4918					forward_bp      = bp*/
    _52forward_bp_48715 = _52bp_48714;
    goto L7; // [1314] 1887
L3D: 

    /** parser.e:4921					CheckForUndefinedGotoLabels()*/
    _42CheckForUndefinedGotoLabels();

    /** parser.e:4922					exit -- all finished*/
    goto L2; // [1323] 1897
    goto L7; // [1326] 1887
L3C: 

    /** parser.e:4925			elsif id = QUESTION_MARK then*/
    if (_id_61664 != -31)
    goto L3E; // [1333] 1357

    /** parser.e:4926				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4927				Print_statement()*/
    _42Print_statement();

    /** parser.e:4928				ExecCommand()*/
    _42ExecCommand();
    goto L7; // [1354] 1887
L3E: 

    /** parser.e:4930			elsif id = LABEL then*/
    if (_id_61664 != 419)
    goto L3F; // [1361] 1383

    /** parser.e:4931				StartSourceLine(TRUE, , COVERAGE_SUPPRESS)*/
    _49StartSourceLine(_9TRUE_444, 0, 1);

    /** parser.e:4932				GLabel_statement()*/
    _42GLabel_statement();
    goto L7; // [1380] 1887
L3F: 

    /** parser.e:4934			elsif id = GOTO then*/
    if (_id_61664 != 188)
    goto L40; // [1387] 1407

    /** parser.e:4935				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4936				Goto_statement()*/
    _42Goto_statement();
    goto L7; // [1404] 1887
L40: 

    /** parser.e:4938			elsif id = CONTINUE then*/
    if (_id_61664 != 426)
    goto L41; // [1411] 1447

    /** parser.e:4939				if nested then*/
    if (_nested_61661 == 0)
    {
        goto L42; // [1417] 1436
    }
    else{
    }

    /** parser.e:4940					StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4941					Continue_statement()*/
    _42Continue_statement();
    goto L7; // [1433] 1887
L42: 

    /** parser.e:4943					CompileErr(50)*/
    RefDS(_21928);
    _52CompileErr(50, _21928, 0);
    goto L7; // [1444] 1887
L41: 

    /** parser.e:4946			elsif id = RETRY then*/
    if (_id_61664 != 184)
    goto L43; // [1451] 1487

    /** parser.e:4947				if nested then*/
    if (_nested_61661 == 0)
    {
        goto L44; // [1457] 1476
    }
    else{
    }

    /** parser.e:4948					StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4949					Retry_statement()*/
    _42Retry_statement();
    goto L7; // [1473] 1887
L44: 

    /** parser.e:4951					CompileErr(128)*/
    RefDS(_21928);
    _52CompileErr(128, _21928, 0);
    goto L7; // [1484] 1887
L43: 

    /** parser.e:4954			elsif id = BREAK then*/
    if (_id_61664 != 425)
    goto L45; // [1491] 1527

    /** parser.e:4955				if nested then*/
    if (_nested_61661 == 0)
    {
        goto L46; // [1497] 1516
    }
    else{
    }

    /** parser.e:4956					StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4957					Break_statement()*/
    _42Break_statement();
    goto L7; // [1513] 1887
L46: 

    /** parser.e:4959					CompileErr(39)*/
    RefDS(_21928);
    _52CompileErr(39, _21928, 0);
    goto L7; // [1524] 1887
L45: 

    /** parser.e:4962			elsif id = ENTRY then*/
    if (_id_61664 != 424)
    goto L47; // [1531] 1569

    /** parser.e:4963				if nested then*/
    if (_nested_61661 == 0)
    {
        goto L48; // [1537] 1558
    }
    else{
    }

    /** parser.e:4964				    StartSourceLine(TRUE, , COVERAGE_SUPPRESS)*/
    _49StartSourceLine(_9TRUE_444, 0, 1);

    /** parser.e:4965				    Entry_statement()*/
    _42Entry_statement();
    goto L7; // [1555] 1887
L48: 

    /** parser.e:4967					CompileErr(72)*/
    RefDS(_21928);
    _52CompileErr(72, _21928, 0);
    goto L7; // [1566] 1887
L47: 

    /** parser.e:4970			elsif id = IFDEF then*/
    if (_id_61664 != 407)
    goto L49; // [1573] 1593

    /** parser.e:4971				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4972				Ifdef_statement()*/
    _42Ifdef_statement();
    goto L7; // [1590] 1887
L49: 

    /** parser.e:4974			elsif id = CASE then*/
    if (_id_61664 != 186)
    goto L4A; // [1597] 1608

    /** parser.e:4975				Case_statement()*/
    _42Case_statement();
    goto L7; // [1605] 1887
L4A: 

    /** parser.e:4977			elsif id = SWITCH then*/
    if (_id_61664 != 185)
    goto L4B; // [1612] 1632

    /** parser.e:4978				StartSourceLine(TRUE)*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4979				Switch_statement()*/
    _42Switch_statement();
    goto L7; // [1629] 1887
L4B: 

    /** parser.e:4981			elsif id = LEFT_BRACE then*/
    if (_id_61664 != -24)
    goto L4C; // [1636] 1656

    /** parser.e:4982				StartSourceLine( TRUE )*/
    _49StartSourceLine(_9TRUE_444, 0, 2);

    /** parser.e:4983				Multi_assign()*/
    _42Multi_assign();
    goto L7; // [1653] 1887
L4C: 

    /** parser.e:4985			elsif id = ILLEGAL_CHAR then*/
    if (_id_61664 != -20)
    goto L4D; // [1660] 1674

    /** parser.e:4986				CompileErr(102)*/
    RefDS(_21928);
    _52CompileErr(102, _21928, 0);
    goto L7; // [1671] 1887
L4D: 

    /** parser.e:4989				if nested then*/
    if (_nested_61661 == 0)
    {
        goto L4E; // [1676] 1828
    }
    else{
    }

    /** parser.e:4990					if id = ELSE then*/
    if (_id_61664 != 23)
    goto L4F; // [1683] 1737

    /** parser.e:4991						if length(if_stack) = 0 then*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _30766 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _30766 = 1;
    }
    if (_30766 != 0)
    goto L50; // [1694] 1794

    /** parser.e:4992							if live_ifdef > 0 then*/
    if (_42live_ifdef_58820 <= 0)
    goto L51; // [1702] 1725

    /** parser.e:4993								CompileErr(134, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _30769 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _30769 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _30770 = (object)*(((s1_ptr)_2)->base + _30769);
    _52CompileErr(134, _30770, 0);
    _30770 = NOVALUE;
    goto L50; // [1722] 1794
L51: 

    /** parser.e:4995								CompileErr(118)*/
    RefDS(_21928);
    _52CompileErr(118, _21928, 0);
    goto L50; // [1734] 1794
L4F: 

    /** parser.e:4998					elsif id = ELSIF then*/
    if (_id_61664 != 414)
    goto L52; // [1741] 1793

    /** parser.e:4999						if length(if_stack) = 0 then*/
    if (IS_SEQUENCE(_42if_stack_54398)){
            _30772 = SEQ_PTR(_42if_stack_54398)->length;
    }
    else {
        _30772 = 1;
    }
    if (_30772 != 0)
    goto L53; // [1752] 1792

    /** parser.e:5000							if live_ifdef > 0 then*/
    if (_42live_ifdef_58820 <= 0)
    goto L54; // [1760] 1783

    /** parser.e:5001								CompileErr(139, ifdef_lineno[$])*/
    if (IS_SEQUENCE(_42ifdef_lineno_58821)){
            _30775 = SEQ_PTR(_42ifdef_lineno_58821)->length;
    }
    else {
        _30775 = 1;
    }
    _2 = (object)SEQ_PTR(_42ifdef_lineno_58821);
    _30776 = (object)*(((s1_ptr)_2)->base + _30775);
    _52CompileErr(139, _30776, 0);
    _30776 = NOVALUE;
    goto L55; // [1780] 1791
L54: 

    /** parser.e:5003								CompileErr(119)*/
    RefDS(_21928);
    _52CompileErr(119, _21928, 0);
L55: 
L53: 
L52: 
L50: 

    /** parser.e:5007					putback(tok)*/
    Ref(_tok_61663);
    _42putback(_tok_61663);

    /** parser.e:5008					if stmt_nest > 0 then*/
    if (_42stmt_nest_54395 <= 0)
    goto L56; // [1803] 1820

    /** parser.e:5009						stmt_nest -= 1*/
    _42stmt_nest_54395 = _42stmt_nest_54395 - 1;

    /** parser.e:5010						InitDelete()*/
    _42InitDelete();
L56: 

    /** parser.e:5012					return*/
    DeRef(_tok_61663);
    DeRef(_30688);
    _30688 = NOVALUE;
    _30703 = NOVALUE;
    DeRef(_30699);
    _30699 = NOVALUE;
    DeRef(_30669);
    _30669 = NOVALUE;
    DeRef(_30691);
    _30691 = NOVALUE;
    DeRef(_30701);
    _30701 = NOVALUE;
    DeRef(_30706);
    _30706 = NOVALUE;
    DeRef(_30729);
    _30729 = NOVALUE;
    DeRef(_30696);
    _30696 = NOVALUE;
    DeRef(_30682);
    _30682 = NOVALUE;
    DeRef(_30657);
    _30657 = NOVALUE;
    DeRef(_30686);
    _30686 = NOVALUE;
    _30651 = NOVALUE;
    DeRef(_30722);
    _30722 = NOVALUE;
    DeRef(_30654);
    _30654 = NOVALUE;
    DeRef(_30648);
    _30648 = NOVALUE;
    DeRef(_30724);
    _30724 = NOVALUE;
    DeRef(_30659);
    _30659 = NOVALUE;
    DeRef(_30693);
    _30693 = NOVALUE;
    DeRef(_30665);
    _30665 = NOVALUE;
    DeRef(_30720);
    _30720 = NOVALUE;
    DeRef(_30690);
    _30690 = NOVALUE;
    DeRef(_30667);
    _30667 = NOVALUE;
    DeRef(_30712);
    _30712 = NOVALUE;
    DeRef(_30734);
    _30734 = NOVALUE;
    DeRef(_30663);
    _30663 = NOVALUE;
    return;
    goto L57; // [1825] 1886
L4E: 

    /** parser.e:5014					if id = END then*/
    if (_id_61664 != 402)
    goto L58; // [1832] 1863

    /** parser.e:5015						tok = next_token()*/
    _0 = _tok_61663;
    _tok_61663 = _42next_token();
    DeRef(_0);

    /** parser.e:5016						CompileErr(17, {find_token_text(tok[T_ID])})*/
    _2 = (object)SEQ_PTR(_tok_61663);
    _30782 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_30782);
    _30783 = _64find_token_text(_30782);
    _30782 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30783;
    _30784 = MAKE_SEQ(_1);
    _30783 = NOVALUE;
    _52CompileErr(17, _30784, 0);
    _30784 = NOVALUE;
L58: 

    /** parser.e:5019					CompileErr(117, { match_replace(",", find_token_text(id), "") })*/
    _30786 = _64find_token_text(_id_61664);
    RefDS(_26083);
    RefDS(_21928);
    _30787 = _15match_replace(_26083, _30786, _21928, 0);
    _30786 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _30787;
    _30788 = MAKE_SEQ(_1);
    _30787 = NOVALUE;
    _52CompileErr(117, _30788, 0);
    _30788 = NOVALUE;
L57: 
L7: 

    /** parser.e:5024			flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** parser.e:5025		end while*/
    goto L1; // [1894] 12
L2: 

    /** parser.e:5026		emit_op(RETURNT)*/
    _49emit_op(34);

    /** parser.e:5027		clear_last()*/
    _49clear_last();

    /** parser.e:5028		StraightenBranches()*/
    _42StraightenBranches();

    /** parser.e:5029		SymTab[TopLevelSub][S_CODE] = Code*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39Code_16903);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39Code_16903;
    DeRef(_1);
    _30789 = NOVALUE;

    /** parser.e:5030		EndLineTable()*/
    _42EndLineTable();

    /** parser.e:5031		SymTab[TopLevelSub][S_LINETAB] = LineTable*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39LineTable_16904);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39LineTable_16904;
    DeRef(_1);
    _30791 = NOVALUE;

    /** parser.e:5032	end procedure*/
    DeRef(_tok_61663);
    DeRef(_30688);
    _30688 = NOVALUE;
    _30703 = NOVALUE;
    DeRef(_30699);
    _30699 = NOVALUE;
    DeRef(_30669);
    _30669 = NOVALUE;
    DeRef(_30691);
    _30691 = NOVALUE;
    DeRef(_30701);
    _30701 = NOVALUE;
    DeRef(_30706);
    _30706 = NOVALUE;
    DeRef(_30729);
    _30729 = NOVALUE;
    DeRef(_30696);
    _30696 = NOVALUE;
    DeRef(_30682);
    _30682 = NOVALUE;
    DeRef(_30657);
    _30657 = NOVALUE;
    DeRef(_30686);
    _30686 = NOVALUE;
    _30651 = NOVALUE;
    DeRef(_30722);
    _30722 = NOVALUE;
    DeRef(_30654);
    _30654 = NOVALUE;
    DeRef(_30648);
    _30648 = NOVALUE;
    DeRef(_30724);
    _30724 = NOVALUE;
    DeRef(_30659);
    _30659 = NOVALUE;
    DeRef(_30693);
    _30693 = NOVALUE;
    DeRef(_30665);
    _30665 = NOVALUE;
    DeRef(_30720);
    _30720 = NOVALUE;
    DeRef(_30690);
    _30690 = NOVALUE;
    DeRef(_30667);
    _30667 = NOVALUE;
    DeRef(_30712);
    _30712 = NOVALUE;
    DeRef(_30734);
    _30734 = NOVALUE;
    DeRef(_30663);
    _30663 = NOVALUE;
    return;
    ;
}


void _42parser()
{
    object _30795 = NOVALUE;
    object _30793 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** parser.e:5035		real_parser(0)*/
    _42real_parser(0);

    /** parser.e:5036		mark_final_targets()*/
    _56mark_final_targets();

    /** parser.e:5037		resolve_unincluded_globals( 1 )*/
    _56resolve_unincluded_globals(1);

    /** parser.e:5038		Resolve_forward_references( 1 )*/
    _41Resolve_forward_references(1);

    /** parser.e:5039		SymTab[TopLevelSub][S_CODE] = Code*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39Code_16903);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39Code_16903;
    DeRef(_1);
    _30793 = NOVALUE;

    /** parser.e:5040		SymTab[TopLevelSub][S_LINETAB] = LineTable*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39LineTable_16904);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_LINETAB_16505))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39LineTable_16904;
    DeRef(_1);
    _30795 = NOVALUE;

    /** parser.e:5041		Code = {}*/
    RefDS(_21928);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _21928;

    /** parser.e:5042		LineTable = {}*/
    RefDS(_21928);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _21928;

    /** parser.e:5043		inline_deferred_calls()*/
    _68inline_deferred_calls();

    /** parser.e:5044		if not repl then*/

    /** parser.e:5045		End_block( PROC )*/
    _66End_block(27);

    /** parser.e:5046		Code = {}*/
    RefDS(_21928);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _21928;

    /** parser.e:5047		LineTable = {}*/
    RefDS(_21928);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _21928;

    /** parser.e:5049	end procedure*/
    return;
    ;
}


void _42nested_parser()
{
    object _0, _1, _2;
    

    /** parser.e:5052		real_parser(1)*/
    _42real_parser(1);

    /** parser.e:5053	end procedure*/
    return;
    ;
}



// 0x1CDD40BA
