// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _41clear_fwd_refs()
{
    object _0, _1, _2;
    

    /** fwdref.e:70		fwdref_count = 0*/
    _41fwdref_count_62153 = 0;

    /** fwdref.e:71	end procedure*/
    return;
    ;
}


object _41get_fwdref_count()
{
    object _0, _1, _2;
    

    /** fwdref.e:74		return fwdref_count*/
    return _41fwdref_count_62153;
    ;
}


void _41set_glabel_block(object _ref_62160, object _block_62162)
{
    object _30813 = NOVALUE;
    object _30812 = NOVALUE;
    object _30810 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_ref_62160)) {
        _1 = (object)(DBL_PTR(_ref_62160)->dbl);
        DeRefDS(_ref_62160);
        _ref_62160 = _1;
    }
    if (!IS_ATOM_INT(_block_62162)) {
        _1 = (object)(DBL_PTR(_block_62162)->dbl);
        DeRefDS(_block_62162);
        _block_62162 = _1;
    }

    /** fwdref.e:78		forward_references[ref][FR_DATA] &= block*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62160 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _30812 = (object)*(((s1_ptr)_2)->base + 12);
    _30810 = NOVALUE;
    if (IS_SEQUENCE(_30812) && IS_ATOM(_block_62162)) {
        Append(&_30813, _30812, _block_62162);
    }
    else if (IS_ATOM(_30812) && IS_SEQUENCE(_block_62162)) {
    }
    else {
        Concat((object_ptr)&_30813, _30812, _block_62162);
        _30812 = NOVALUE;
    }
    _30812 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30813;
    if( _1 != _30813 ){
        DeRef(_1);
    }
    _30813 = NOVALUE;
    _30810 = NOVALUE;

    /** fwdref.e:79	end procedure*/
    return;
    ;
}


void _41replace_code(object _code_62174, object _start_62175, object _finish_62176, object _subprog_62177)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_finish_62176)) {
        _1 = (object)(DBL_PTR(_finish_62176)->dbl);
        DeRefDS(_finish_62176);
        _finish_62176 = _1;
    }
    if (!IS_ATOM_INT(_subprog_62177)) {
        _1 = (object)(DBL_PTR(_subprog_62177)->dbl);
        DeRefDS(_subprog_62177);
        _subprog_62177 = _1;
    }

    /** fwdref.e:88		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_62177;

    /** fwdref.e:89		shift:replace_code( code, start, finish )*/
    RefDS(_code_62174);
    _67replace_code(_code_62174, _start_62175, _finish_62176);

    /** fwdref.e:90		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:91	end procedure*/
    DeRefDS(_code_62174);
    return;
    ;
}


void _41resolved_reference(object _ref_62180)
{
    object _file_62181 = NOVALUE;
    object _subprog_62184 = NOVALUE;
    object _tx_62187 = NOVALUE;
    object _ax_62188 = NOVALUE;
    object _sp_62189 = NOVALUE;
    object _r_62204 = NOVALUE;
    object _r_62222 = NOVALUE;
    object _30837 = NOVALUE;
    object _30836 = NOVALUE;
    object _30835 = NOVALUE;
    object _30833 = NOVALUE;
    object _30830 = NOVALUE;
    object _30828 = NOVALUE;
    object _30826 = NOVALUE;
    object _30825 = NOVALUE;
    object _30823 = NOVALUE;
    object _30821 = NOVALUE;
    object _30819 = NOVALUE;
    object _30818 = NOVALUE;
    object _30816 = NOVALUE;
    object _30814 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:95			file    = forward_references[ref][FR_FILE],*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _30814 = (object)*(((s1_ptr)_2)->base + _ref_62180);
    _2 = (object)SEQ_PTR(_30814);
    _file_62181 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_62181)){
        _file_62181 = (object)DBL_PTR(_file_62181)->dbl;
    }
    _30814 = NOVALUE;

    /** fwdref.e:96			subprog = forward_references[ref][FR_SUBPROG]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _30816 = (object)*(((s1_ptr)_2)->base + _ref_62180);
    _2 = (object)SEQ_PTR(_30816);
    _subprog_62184 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_subprog_62184)){
        _subprog_62184 = (object)DBL_PTR(_subprog_62184)->dbl;
    }
    _30816 = NOVALUE;

    /** fwdref.e:99			tx = 0,*/
    _tx_62187 = 0;

    /** fwdref.e:100			ax = 0,*/
    _ax_62188 = 0;

    /** fwdref.e:101			sp = 0*/
    _sp_62189 = 0;

    /** fwdref.e:103		if forward_references[ref][FR_SUBPROG] = TopLevelSub then*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _30818 = (object)*(((s1_ptr)_2)->base + _ref_62180);
    _2 = (object)SEQ_PTR(_30818);
    _30819 = (object)*(((s1_ptr)_2)->base + 4);
    _30818 = NOVALUE;
    if (binary_op_a(NOTEQ, _30819, _39TopLevelSub_16822)){
        _30819 = NOVALUE;
        goto L1; // [60] 80
    }
    _30819 = NOVALUE;

    /** fwdref.e:104			tx = find( ref, toplevel_references[file] )*/
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    _30821 = (object)*(((s1_ptr)_2)->base + _file_62181);
    _tx_62187 = find_from(_ref_62180, _30821, 1);
    _30821 = NOVALUE;
    goto L2; // [77] 111
L1: 

    /** fwdref.e:106			sp = find( subprog, active_subprogs[file] )*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _30823 = (object)*(((s1_ptr)_2)->base + _file_62181);
    _sp_62189 = find_from(_subprog_62184, _30823, 1);
    _30823 = NOVALUE;

    /** fwdref.e:107			ax = find( ref, active_references[file][sp] )*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _30825 = (object)*(((s1_ptr)_2)->base + _file_62181);
    _2 = (object)SEQ_PTR(_30825);
    _30826 = (object)*(((s1_ptr)_2)->base + _sp_62189);
    _30825 = NOVALUE;
    _ax_62188 = find_from(_ref_62180, _30826, 1);
    _30826 = NOVALUE;
L2: 

    /** fwdref.e:110		if ax then*/
    if (_ax_62188 == 0)
    {
        goto L3; // [113] 253
    }
    else{
    }

    /** fwdref.e:111			sequence r = active_references[file][sp] */
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _30828 = (object)*(((s1_ptr)_2)->base + _file_62181);
    DeRef(_r_62204);
    _2 = (object)SEQ_PTR(_30828);
    _r_62204 = (object)*(((s1_ptr)_2)->base + _sp_62189);
    Ref(_r_62204);
    _30828 = NOVALUE;

    /** fwdref.e:112			active_references[file][sp] = 0*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_references_62125 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62181 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62189);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30830 = NOVALUE;

    /** fwdref.e:113			r = remove( r, ax )*/
    {
        s1_ptr assign_space = SEQ_PTR(_r_62204);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ax_62188)) ? _ax_62188 : (object)(DBL_PTR(_ax_62188)->dbl);
        int stop = (IS_ATOM_INT(_ax_62188)) ? _ax_62188 : (object)(DBL_PTR(_ax_62188)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62204), start, &_r_62204 );
            }
            else Tail(SEQ_PTR(_r_62204), stop+1, &_r_62204);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62204), start, &_r_62204);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62204 = Remove_elements(start, stop, (SEQ_PTR(_r_62204)->ref == 1));
        }
    }

    /** fwdref.e:114			active_references[file][sp] = r*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_references_62125 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62181 + ((s1_ptr)_2)->base);
    RefDS(_r_62204);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62189);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62204;
    DeRef(_1);
    _30833 = NOVALUE;

    /** fwdref.e:116			if not length( active_references[file][sp] ) then*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _30835 = (object)*(((s1_ptr)_2)->base + _file_62181);
    _2 = (object)SEQ_PTR(_30835);
    _30836 = (object)*(((s1_ptr)_2)->base + _sp_62189);
    _30835 = NOVALUE;
    if (IS_SEQUENCE(_30836)){
            _30837 = SEQ_PTR(_30836)->length;
    }
    else {
        _30837 = 1;
    }
    _30836 = NOVALUE;
    if (_30837 != 0)
    goto L4; // [178] 248
    _30837 = NOVALUE;

    /** fwdref.e:117				r = active_references[file]*/
    DeRefDS(_r_62204);
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _r_62204 = (object)*(((s1_ptr)_2)->base + _file_62181);
    Ref(_r_62204);

    /** fwdref.e:118				active_references[file] = 0*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_references_62125 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** fwdref.e:119				r = remove( r, sp )*/
    {
        s1_ptr assign_space = SEQ_PTR(_r_62204);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62189)) ? _sp_62189 : (object)(DBL_PTR(_sp_62189)->dbl);
        int stop = (IS_ATOM_INT(_sp_62189)) ? _sp_62189 : (object)(DBL_PTR(_sp_62189)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62204), start, &_r_62204 );
            }
            else Tail(SEQ_PTR(_r_62204), stop+1, &_r_62204);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62204), start, &_r_62204);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62204 = Remove_elements(start, stop, (SEQ_PTR(_r_62204)->ref == 1));
        }
    }

    /** fwdref.e:120				active_references[file] = r*/
    RefDS(_r_62204);
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_references_62125 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62204;
    DeRef(_1);

    /** fwdref.e:122				r = active_subprogs[file]*/
    DeRefDS(_r_62204);
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _r_62204 = (object)*(((s1_ptr)_2)->base + _file_62181);
    Ref(_r_62204);

    /** fwdref.e:123				active_subprogs[file] = 0*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_subprogs_62124 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** fwdref.e:124				r = remove( r,   sp )*/
    {
        s1_ptr assign_space = SEQ_PTR(_r_62204);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62189)) ? _sp_62189 : (object)(DBL_PTR(_sp_62189)->dbl);
        int stop = (IS_ATOM_INT(_sp_62189)) ? _sp_62189 : (object)(DBL_PTR(_sp_62189)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62204), start, &_r_62204 );
            }
            else Tail(SEQ_PTR(_r_62204), stop+1, &_r_62204);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62204), start, &_r_62204);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62204 = Remove_elements(start, stop, (SEQ_PTR(_r_62204)->ref == 1));
        }
    }

    /** fwdref.e:125				active_subprogs[file] = r*/
    RefDS(_r_62204);
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_subprogs_62124 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62204;
    DeRef(_1);
L4: 
    DeRef(_r_62204);
    _r_62204 = NOVALUE;
    goto L5; // [250] 303
L3: 

    /** fwdref.e:127		elsif tx then*/
    if (_tx_62187 == 0)
    {
        goto L6; // [255] 296
    }
    else{
    }

    /** fwdref.e:128			sequence r = toplevel_references[file]*/
    DeRef(_r_62222);
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    _r_62222 = (object)*(((s1_ptr)_2)->base + _file_62181);
    Ref(_r_62222);

    /** fwdref.e:129			toplevel_references[file] = 0*/
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41toplevel_references_62126 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** fwdref.e:130			r = remove( r, tx )*/
    {
        s1_ptr assign_space = SEQ_PTR(_r_62222);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_tx_62187)) ? _tx_62187 : (object)(DBL_PTR(_tx_62187)->dbl);
        int stop = (IS_ATOM_INT(_tx_62187)) ? _tx_62187 : (object)(DBL_PTR(_tx_62187)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62222), start, &_r_62222 );
            }
            else Tail(SEQ_PTR(_r_62222), stop+1, &_r_62222);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62222), start, &_r_62222);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62222 = Remove_elements(start, stop, (SEQ_PTR(_r_62222)->ref == 1));
        }
    }

    /** fwdref.e:131			toplevel_references[file] = r*/
    RefDS(_r_62222);
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41toplevel_references_62126 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62181);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62222;
    DeRef(_1);
    DeRefDS(_r_62222);
    _r_62222 = NOVALUE;
    goto L5; // [293] 303
L6: 

    /** fwdref.e:134			InternalErr( 260 )*/
    RefDS(_21928);
    _52InternalErr(260, _21928);
L5: 

    /** fwdref.e:136		inactive_references &= ref*/
    Append(&_41inactive_references_62127, _41inactive_references_62127, _ref_62180);

    /** fwdref.e:137		forward_references[ref] = 0*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** fwdref.e:138	end procedure*/
    _30836 = NOVALUE;
    return;
    ;
}


void _41set_code(object _ref_62236)
{
    object _30862 = NOVALUE;
    object _30860 = NOVALUE;
    object _30859 = NOVALUE;
    object _30858 = NOVALUE;
    object _30857 = NOVALUE;
    object _30855 = NOVALUE;
    object _30853 = NOVALUE;
    object _30851 = NOVALUE;
    object _30849 = NOVALUE;
    object _30846 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:146		patch_code_sub = forward_references[ref][FR_SUBPROG]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _30846 = (object)*(((s1_ptr)_2)->base + _ref_62236);
    _2 = (object)SEQ_PTR(_30846);
    _41patch_code_sub_62231 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_41patch_code_sub_62231)){
        _41patch_code_sub_62231 = (object)DBL_PTR(_41patch_code_sub_62231)->dbl;
    }
    _30846 = NOVALUE;

    /** fwdref.e:147		if patch_code_sub != CurrentSub then*/
    if (_41patch_code_sub_62231 == _39CurrentSub_16823)
    goto L1; // [23] 136

    /** fwdref.e:149			patch_code_temp = Code*/
    RefDS(_39Code_16903);
    DeRef(_41patch_code_temp_62228);
    _41patch_code_temp_62228 = _39Code_16903;

    /** fwdref.e:150			patch_linetab_temp = LineTable*/
    RefDS(_39LineTable_16904);
    DeRef(_41patch_linetab_temp_62229);
    _41patch_linetab_temp_62229 = _39LineTable_16904;

    /** fwdref.e:152			Code = SymTab[patch_code_sub][S_CODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30849 = (object)*(((s1_ptr)_2)->base + _41patch_code_sub_62231);
    DeRefDS(_39Code_16903);
    _2 = (object)SEQ_PTR(_30849);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _39Code_16903 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _39Code_16903 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    Ref(_39Code_16903);
    _30849 = NOVALUE;

    /** fwdref.e:153			SymTab[patch_code_sub][S_CODE] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_41patch_code_sub_62231 + ((s1_ptr)_2)->base);
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
    _30851 = NOVALUE;

    /** fwdref.e:154			LineTable = SymTab[patch_code_sub][S_LINETAB]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30853 = (object)*(((s1_ptr)_2)->base + _41patch_code_sub_62231);
    DeRefDS(_39LineTable_16904);
    _2 = (object)SEQ_PTR(_30853);
    if (!IS_ATOM_INT(_39S_LINETAB_16505)){
        _39LineTable_16904 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
    }
    else{
        _39LineTable_16904 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
    }
    Ref(_39LineTable_16904);
    _30853 = NOVALUE;

    /** fwdref.e:155			SymTab[patch_code_sub][S_LINETAB] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_41patch_code_sub_62231 + ((s1_ptr)_2)->base);
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
    _30855 = NOVALUE;

    /** fwdref.e:157			patch_current_sub = CurrentSub*/
    _41patch_current_sub_62233 = _39CurrentSub_16823;

    /** fwdref.e:158			CurrentSub = patch_code_sub*/
    _39CurrentSub_16823 = _41patch_code_sub_62231;
    goto L2; // [133] 203
L1: 

    /** fwdref.e:160			patch_current_sub = patch_code_sub*/
    _41patch_current_sub_62233 = _41patch_code_sub_62231;

    /** fwdref.e:161			if sequence( SymTab[patch_current_sub][S_CODE] ) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30857 = (object)*(((s1_ptr)_2)->base + _41patch_current_sub_62233);
    _2 = (object)SEQ_PTR(_30857);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _30858 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _30858 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _30857 = NOVALUE;
    _30859 = IS_SEQUENCE(_30858);
    _30858 = NOVALUE;
    if (_30859 == 0)
    {
        _30859 = NOVALUE;
        goto L3; // [164] 202
    }
    else{
        _30859 = NOVALUE;
    }

    /** fwdref.e:162				SymTab[patch_code_sub][S_CODE] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_41patch_code_sub_62231 + ((s1_ptr)_2)->base);
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
    _30860 = NOVALUE;

    /** fwdref.e:163				SymTab[patch_code_sub][S_LINETAB] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_41patch_code_sub_62231 + ((s1_ptr)_2)->base);
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
    _30862 = NOVALUE;
L3: 
L2: 

    /** fwdref.e:166	end procedure*/
    return;
    ;
}


void _41reset_code()
{
    object _30867 = NOVALUE;
    object _30865 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:169		if patch_code_sub != patch_current_sub then*/
    if (_41patch_code_sub_62231 == _41patch_current_sub_62233)
    goto L1; // [7] 77

    /** fwdref.e:171			SymTab[patch_code_sub][S_CODE] = Code*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_41patch_code_sub_62231 + ((s1_ptr)_2)->base);
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
    _30865 = NOVALUE;

    /** fwdref.e:172			SymTab[patch_code_sub][S_LINETAB] = LineTable*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_41patch_code_sub_62231 + ((s1_ptr)_2)->base);
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
    _30867 = NOVALUE;

    /** fwdref.e:175			CurrentSub = patch_current_sub*/
    _39CurrentSub_16823 = _41patch_current_sub_62233;

    /** fwdref.e:176			Code = patch_code_temp*/
    RefDS(_41patch_code_temp_62228);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _41patch_code_temp_62228;

    /** fwdref.e:177			LineTable = patch_linetab_temp*/
    RefDS(_41patch_linetab_temp_62229);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _41patch_linetab_temp_62229;
L1: 

    /** fwdref.e:181		patch_code_temp = {}*/
    RefDS(_21928);
    DeRef(_41patch_code_temp_62228);
    _41patch_code_temp_62228 = _21928;

    /** fwdref.e:182		patch_linetab_temp = {}*/
    RefDS(_21928);
    DeRef(_41patch_linetab_temp_62229);
    _41patch_linetab_temp_62229 = _21928;

    /** fwdref.e:183	end procedure*/
    return;
    ;
}


void _41set_data(object _ref_62298, object _data_62299)
{
    object _30869 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62298 + ((s1_ptr)_2)->base);
    Ref(_data_62299);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_62299;
    DeRef(_1);
    _30869 = NOVALUE;

    /** fwdref.e:187	end procedure*/
    DeRef(_data_62299);
    return;
    ;
}


void _41add_data(object _ref_62304, object _data_62305)
{
    object _30875 = NOVALUE;
    object _30874 = NOVALUE;
    object _30873 = NOVALUE;
    object _30871 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_ref_62304)) {
        _1 = (object)(DBL_PTR(_ref_62304)->dbl);
        DeRefDS(_ref_62304);
        _ref_62304 = _1;
    }

    /** fwdref.e:190		forward_references[ref][FR_DATA] = append( forward_references[ref][FR_DATA], data )*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62304 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _30873 = (object)*(((s1_ptr)_2)->base + _ref_62304);
    _2 = (object)SEQ_PTR(_30873);
    _30874 = (object)*(((s1_ptr)_2)->base + 12);
    _30873 = NOVALUE;
    Ref(_data_62305);
    Append(&_30875, _30874, _data_62305);
    _30874 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30875;
    if( _1 != _30875 ){
        DeRef(_1);
    }
    _30875 = NOVALUE;
    _30871 = NOVALUE;

    /** fwdref.e:191	end procedure*/
    DeRef(_data_62305);
    return;
    ;
}


void _41set_line(object _ref_62313, object _line_no_62314, object _this_line_62315, object _bp_62316)
{
    object _30880 = NOVALUE;
    object _30878 = NOVALUE;
    object _30876 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_ref_62313)) {
        _1 = (object)(DBL_PTR(_ref_62313)->dbl);
        DeRefDS(_ref_62313);
        _ref_62313 = _1;
    }

    /** fwdref.e:194		forward_references[ref][FR_LINE] = line_no*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62313 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _line_no_62314;
    DeRef(_1);
    _30876 = NOVALUE;

    /** fwdref.e:195		forward_references[ref][FR_THISLINE] = this_line*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62313 + ((s1_ptr)_2)->base);
    RefDS(_this_line_62315);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _this_line_62315;
    DeRef(_1);
    _30878 = NOVALUE;

    /** fwdref.e:196		forward_references[ref][FR_BP] = bp*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62313 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bp_62316;
    DeRef(_1);
    _30880 = NOVALUE;

    /** fwdref.e:198	end procedure*/
    DeRefDS(_this_line_62315);
    return;
    ;
}


void _41add_private_symbol(object _sym_62328, object _name_62329)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_62328)) {
        _1 = (object)(DBL_PTR(_sym_62328)->dbl);
        DeRefDS(_sym_62328);
        _sym_62328 = _1;
    }

    /** fwdref.e:206		fwd_private_sym &= sym*/
    Append(&_41fwd_private_sym_62323, _41fwd_private_sym_62323, _sym_62328);

    /** fwdref.e:207		fwd_private_name = append( fwd_private_name, name )*/
    RefDS(_name_62329);
    Append(&_41fwd_private_name_62324, _41fwd_private_name_62324, _name_62329);

    /** fwdref.e:209	end procedure*/
    DeRefDS(_name_62329);
    return;
    ;
}


void _41patch_forward_goto(object _tok_62337, object _ref_62338)
{
    object _fr_62339 = NOVALUE;
    object _30896 = NOVALUE;
    object _30895 = NOVALUE;
    object _30894 = NOVALUE;
    object _30893 = NOVALUE;
    object _30892 = NOVALUE;
    object _30891 = NOVALUE;
    object _30890 = NOVALUE;
    object _30889 = NOVALUE;
    object _30887 = NOVALUE;
    object _30886 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:217		sequence fr = forward_references[ref]*/
    DeRef(_fr_62339);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62339 = (object)*(((s1_ptr)_2)->base + _ref_62338);
    Ref(_fr_62339);

    /** fwdref.e:218		set_code( ref )*/
    _41set_code(_ref_62338);

    /** fwdref.e:220		shifting_sub = fr[FR_SUBPROG]*/
    _2 = (object)SEQ_PTR(_fr_62339);
    _41shifting_sub_62152 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_41shifting_sub_62152))
    _41shifting_sub_62152 = (object)DBL_PTR(_41shifting_sub_62152)->dbl;

    /** fwdref.e:222		if length( fr[FR_DATA] ) = 2 then*/
    _2 = (object)SEQ_PTR(_fr_62339);
    _30886 = (object)*(((s1_ptr)_2)->base + 12);
    if (IS_SEQUENCE(_30886)){
            _30887 = SEQ_PTR(_30886)->length;
    }
    else {
        _30887 = 1;
    }
    _30886 = NOVALUE;
    if (_30887 != 2)
    goto L1; // [33] 62

    /** fwdref.e:223			prep_forward_error( ref )*/
    _41prep_forward_error(_ref_62338);

    /** fwdref.e:224			CompileErr( 156, { fr[FR_DATA][2] })*/
    _2 = (object)SEQ_PTR(_fr_62339);
    _30889 = (object)*(((s1_ptr)_2)->base + 12);
    _2 = (object)SEQ_PTR(_30889);
    _30890 = (object)*(((s1_ptr)_2)->base + 2);
    _30889 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30890);
    ((intptr_t*)_2)[1] = _30890;
    _30891 = MAKE_SEQ(_1);
    _30890 = NOVALUE;
    _52CompileErr(156, _30891, 0);
    _30891 = NOVALUE;
L1: 

    /** fwdref.e:227		Goto_block(  fr[FR_DATA][1], fr[FR_DATA][3], fr[FR_PC] )*/
    _2 = (object)SEQ_PTR(_fr_62339);
    _30892 = (object)*(((s1_ptr)_2)->base + 12);
    _2 = (object)SEQ_PTR(_30892);
    _30893 = (object)*(((s1_ptr)_2)->base + 1);
    _30892 = NOVALUE;
    _2 = (object)SEQ_PTR(_fr_62339);
    _30894 = (object)*(((s1_ptr)_2)->base + 12);
    _2 = (object)SEQ_PTR(_30894);
    _30895 = (object)*(((s1_ptr)_2)->base + 3);
    _30894 = NOVALUE;
    _2 = (object)SEQ_PTR(_fr_62339);
    _30896 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_30893);
    Ref(_30895);
    Ref(_30896);
    _66Goto_block(_30893, _30895, _30896);
    _30893 = NOVALUE;
    _30895 = NOVALUE;
    _30896 = NOVALUE;

    /** fwdref.e:229		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:231		reset_code()*/
    _41reset_code();

    /** fwdref.e:232		resolved_reference( ref )*/
    _41resolved_reference(_ref_62338);

    /** fwdref.e:233	end procedure*/
    DeRefDS(_fr_62339);
    _30886 = NOVALUE;
    return;
    ;
}


void _41patch_forward_call(object _tok_62360, object _ref_62361)
{
    object _fr_62362 = NOVALUE;
    object _sub_62365 = NOVALUE;
    object _defarg_62371 = NOVALUE;
    object _paramsym_62375 = NOVALUE;
    object _old_62378 = NOVALUE;
    object _tx_62382 = NOVALUE;
    object _code_sub_62392 = NOVALUE;
    object _args_62394 = NOVALUE;
    object _is_func_62399 = NOVALUE;
    object _real_file_62413 = NOVALUE;
    object _code_62417 = NOVALUE;
    object _temp_sub_62419 = NOVALUE;
    object _pc_62421 = NOVALUE;
    object _next_pc_62423 = NOVALUE;
    object _supplied_args_62424 = NOVALUE;
    object _name_62427 = NOVALUE;
    object _old_temps_allocated_62463 = NOVALUE;
    object _temp_target_62472 = NOVALUE;
    object _converted_code_62475 = NOVALUE;
    object _target_62491 = NOVALUE;
    object _has_defaults_62497 = NOVALUE;
    object _goto_target_62498 = NOVALUE;
    object _defarg_62501 = NOVALUE;
    object _code_len_62502 = NOVALUE;
    object _extra_default_args_62504 = NOVALUE;
    object _param_sym_62507 = NOVALUE;
    object _params_62508 = NOVALUE;
    object _orig_code_62510 = NOVALUE;
    object _orig_linetable_62511 = NOVALUE;
    object _ar_sp_62515 = NOVALUE;
    object _pre_refs_62519 = NOVALUE;
    object _old_fwd_params_62534 = NOVALUE;
    object _temp_shifting_sub_62575 = NOVALUE;
    object _new_code_62579 = NOVALUE;
    object _routine_type_62588 = NOVALUE;
    object _31661 = NOVALUE;
    object _31038 = NOVALUE;
    object _31037 = NOVALUE;
    object _31036 = NOVALUE;
    object _31034 = NOVALUE;
    object _31033 = NOVALUE;
    object _31032 = NOVALUE;
    object _31031 = NOVALUE;
    object _31030 = NOVALUE;
    object _31029 = NOVALUE;
    object _31028 = NOVALUE;
    object _31027 = NOVALUE;
    object _31026 = NOVALUE;
    object _31025 = NOVALUE;
    object _31024 = NOVALUE;
    object _31023 = NOVALUE;
    object _31022 = NOVALUE;
    object _31020 = NOVALUE;
    object _31019 = NOVALUE;
    object _31018 = NOVALUE;
    object _31017 = NOVALUE;
    object _31016 = NOVALUE;
    object _31015 = NOVALUE;
    object _31014 = NOVALUE;
    object _31013 = NOVALUE;
    object _31011 = NOVALUE;
    object _31008 = NOVALUE;
    object _31007 = NOVALUE;
    object _31006 = NOVALUE;
    object _31005 = NOVALUE;
    object _31000 = NOVALUE;
    object _30999 = NOVALUE;
    object _30998 = NOVALUE;
    object _30997 = NOVALUE;
    object _30996 = NOVALUE;
    object _30994 = NOVALUE;
    object _30993 = NOVALUE;
    object _30992 = NOVALUE;
    object _30991 = NOVALUE;
    object _30990 = NOVALUE;
    object _30989 = NOVALUE;
    object _30987 = NOVALUE;
    object _30986 = NOVALUE;
    object _30984 = NOVALUE;
    object _30983 = NOVALUE;
    object _30982 = NOVALUE;
    object _30981 = NOVALUE;
    object _30979 = NOVALUE;
    object _30977 = NOVALUE;
    object _30976 = NOVALUE;
    object _30975 = NOVALUE;
    object _30973 = NOVALUE;
    object _30972 = NOVALUE;
    object _30970 = NOVALUE;
    object _30968 = NOVALUE;
    object _30965 = NOVALUE;
    object _30961 = NOVALUE;
    object _30959 = NOVALUE;
    object _30958 = NOVALUE;
    object _30956 = NOVALUE;
    object _30955 = NOVALUE;
    object _30954 = NOVALUE;
    object _30953 = NOVALUE;
    object _30951 = NOVALUE;
    object _30950 = NOVALUE;
    object _30949 = NOVALUE;
    object _30948 = NOVALUE;
    object _30947 = NOVALUE;
    object _30945 = NOVALUE;
    object _30944 = NOVALUE;
    object _30943 = NOVALUE;
    object _30942 = NOVALUE;
    object _30941 = NOVALUE;
    object _30940 = NOVALUE;
    object _30939 = NOVALUE;
    object _30938 = NOVALUE;
    object _30937 = NOVALUE;
    object _30936 = NOVALUE;
    object _30935 = NOVALUE;
    object _30934 = NOVALUE;
    object _30933 = NOVALUE;
    object _30932 = NOVALUE;
    object _30930 = NOVALUE;
    object _30929 = NOVALUE;
    object _30928 = NOVALUE;
    object _30927 = NOVALUE;
    object _30926 = NOVALUE;
    object _30923 = NOVALUE;
    object _30919 = NOVALUE;
    object _30918 = NOVALUE;
    object _30917 = NOVALUE;
    object _30916 = NOVALUE;
    object _30915 = NOVALUE;
    object _30914 = NOVALUE;
    object _30912 = NOVALUE;
    object _30909 = NOVALUE;
    object _30907 = NOVALUE;
    object _30906 = NOVALUE;
    object _30904 = NOVALUE;
    object _30901 = NOVALUE;
    object _30900 = NOVALUE;
    object _30899 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:242		sequence fr = forward_references[ref]*/
    DeRef(_fr_62362);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62362 = (object)*(((s1_ptr)_2)->base + _ref_62361);
    Ref(_fr_62362);

    /** fwdref.e:243		symtab_index sub = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62360);
    _sub_62365 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sub_62365)){
        _sub_62365 = (object)DBL_PTR(_sub_62365)->dbl;
    }

    /** fwdref.e:245		if sequence( fr[FR_DATA] ) then*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _30899 = (object)*(((s1_ptr)_2)->base + 12);
    _30900 = IS_SEQUENCE(_30899);
    _30899 = NOVALUE;
    if (_30900 == 0)
    {
        _30900 = NOVALUE;
        goto L1; // [32] 117
    }
    else{
        _30900 = NOVALUE;
    }

    /** fwdref.e:246			sequence defarg = fr[FR_DATA][1]*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _30901 = (object)*(((s1_ptr)_2)->base + 12);
    DeRef(_defarg_62371);
    _2 = (object)SEQ_PTR(_30901);
    _defarg_62371 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_defarg_62371);
    _30901 = NOVALUE;

    /** fwdref.e:247			symtab_index paramsym = defarg[2]*/
    _2 = (object)SEQ_PTR(_defarg_62371);
    _paramsym_62375 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_paramsym_62375)){
        _paramsym_62375 = (object)DBL_PTR(_paramsym_62375)->dbl;
    }

    /** fwdref.e:248			token old = { RECORDED, defarg[3] }*/
    _2 = (object)SEQ_PTR(_defarg_62371);
    _30904 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_30904);
    DeRef(_old_62378);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _30904;
    _old_62378 = MAKE_SEQ(_1);
    _30904 = NOVALUE;

    /** fwdref.e:249			integer tx = find( old, SymTab[paramsym][S_CODE] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30906 = (object)*(((s1_ptr)_2)->base + _paramsym_62375);
    _2 = (object)SEQ_PTR(_30906);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _30907 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _30907 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _30906 = NOVALUE;
    _tx_62382 = find_from(_old_62378, _30907, 1);
    _30907 = NOVALUE;

    /** fwdref.e:250			SymTab[paramsym][S_CODE][tx] = tok*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_paramsym_62375 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _3 = (object)(_39S_CODE_16482 + ((s1_ptr)_2)->base);
    _30909 = NOVALUE;
    Ref(_tok_62360);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _tx_62382);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _tok_62360;
    DeRef(_1);
    _30909 = NOVALUE;

    /** fwdref.e:251			resolved_reference( ref )*/
    _41resolved_reference(_ref_62361);

    /** fwdref.e:252			return*/
    DeRefDS(_defarg_62371);
    DeRefDS(_old_62378);
    DeRef(_tok_62360);
    DeRefDS(_fr_62362);
    DeRef(_code_62417);
    DeRef(_name_62427);
    DeRef(_params_62508);
    DeRef(_orig_code_62510);
    DeRef(_orig_linetable_62511);
    DeRef(_old_fwd_params_62534);
    DeRef(_new_code_62579);
    return;
L1: 
    DeRef(_defarg_62371);
    _defarg_62371 = NOVALUE;
    DeRef(_old_62378);
    _old_62378 = NOVALUE;

    /** fwdref.e:255		integer code_sub = fr[FR_SUBPROG]*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _code_sub_62392 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_code_sub_62392))
    _code_sub_62392 = (object)DBL_PTR(_code_sub_62392)->dbl;

    /** fwdref.e:257		integer args = SymTab[sub][S_NUM_ARGS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30912 = (object)*(((s1_ptr)_2)->base + _sub_62365);
    _2 = (object)SEQ_PTR(_30912);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _args_62394 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _args_62394 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    if (!IS_ATOM_INT(_args_62394)){
        _args_62394 = (object)DBL_PTR(_args_62394)->dbl;
    }
    _30912 = NOVALUE;

    /** fwdref.e:258		integer is_func = (SymTab[sub][S_TOKEN] = FUNC) or (SymTab[sub][S_TOKEN] = TYPE)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30914 = (object)*(((s1_ptr)_2)->base + _sub_62365);
    _2 = (object)SEQ_PTR(_30914);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _30915 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _30915 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _30914 = NOVALUE;
    if (IS_ATOM_INT(_30915)) {
        _30916 = (_30915 == 501);
    }
    else {
        _30916 = binary_op(EQUALS, _30915, 501);
    }
    _30915 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30917 = (object)*(((s1_ptr)_2)->base + _sub_62365);
    _2 = (object)SEQ_PTR(_30917);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _30918 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _30918 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _30917 = NOVALUE;
    if (IS_ATOM_INT(_30918)) {
        _30919 = (_30918 == 504);
    }
    else {
        _30919 = binary_op(EQUALS, _30918, 504);
    }
    _30918 = NOVALUE;
    if (IS_ATOM_INT(_30916) && IS_ATOM_INT(_30919)) {
        _is_func_62399 = (_30916 != 0 || _30919 != 0);
    }
    else {
        _is_func_62399 = binary_op(OR, _30916, _30919);
    }
    DeRef(_30916);
    _30916 = NOVALUE;
    DeRef(_30919);
    _30919 = NOVALUE;
    if (!IS_ATOM_INT(_is_func_62399)) {
        _1 = (object)(DBL_PTR(_is_func_62399)->dbl);
        DeRefDS(_is_func_62399);
        _is_func_62399 = _1;
    }

    /** fwdref.e:260		integer real_file = current_file_no*/
    _real_file_62413 = _39current_file_no_16815;

    /** fwdref.e:261		current_file_no = fr[FR_FILE]*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _39current_file_no_16815 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_39current_file_no_16815)){
        _39current_file_no_16815 = (object)DBL_PTR(_39current_file_no_16815)->dbl;
    }

    /** fwdref.e:263		set_code( ref )*/
    _41set_code(_ref_62361);

    /** fwdref.e:264		sequence code = Code*/
    RefDS(_39Code_16903);
    DeRef(_code_62417);
    _code_62417 = _39Code_16903;

    /** fwdref.e:265		integer temp_sub = CurrentSub*/
    _temp_sub_62419 = _39CurrentSub_16823;

    /** fwdref.e:267		integer pc = fr[FR_PC]*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _pc_62421 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62421))
    _pc_62421 = (object)DBL_PTR(_pc_62421)->dbl;

    /** fwdref.e:268		integer next_pc = pc*/
    _next_pc_62423 = _pc_62421;

    /** fwdref.e:269		integer supplied_args = code[pc+2]*/
    _30923 = _pc_62421 + 2;
    _2 = (object)SEQ_PTR(_code_62417);
    _supplied_args_62424 = (object)*(((s1_ptr)_2)->base + _30923);
    if (!IS_ATOM_INT(_supplied_args_62424))
    _supplied_args_62424 = (object)DBL_PTR(_supplied_args_62424)->dbl;

    /** fwdref.e:270		sequence name = fr[FR_NAME]*/
    DeRef(_name_62427);
    _2 = (object)SEQ_PTR(_fr_62362);
    _name_62427 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_62427);

    /** fwdref.e:272		if Code[pc] != FUNC_FORWARD and Code[pc] != PROC_FORWARD then*/
    _2 = (object)SEQ_PTR(_39Code_16903);
    _30926 = (object)*(((s1_ptr)_2)->base + _pc_62421);
    if (IS_ATOM_INT(_30926)) {
        _30927 = (_30926 != 196);
    }
    else {
        _30927 = binary_op(NOTEQ, _30926, 196);
    }
    _30926 = NOVALUE;
    if (IS_ATOM_INT(_30927)) {
        if (_30927 == 0) {
            goto L2; // [268] 332
        }
    }
    else {
        if (DBL_PTR(_30927)->dbl == 0.0) {
            goto L2; // [268] 332
        }
    }
    _2 = (object)SEQ_PTR(_39Code_16903);
    _30929 = (object)*(((s1_ptr)_2)->base + _pc_62421);
    if (IS_ATOM_INT(_30929)) {
        _30930 = (_30929 != 195);
    }
    else {
        _30930 = binary_op(NOTEQ, _30929, 195);
    }
    _30929 = NOVALUE;
    if (_30930 == 0) {
        DeRef(_30930);
        _30930 = NOVALUE;
        goto L2; // [285] 332
    }
    else {
        if (!IS_ATOM_INT(_30930) && DBL_PTR(_30930)->dbl == 0.0){
            DeRef(_30930);
            _30930 = NOVALUE;
            goto L2; // [285] 332
        }
        DeRef(_30930);
        _30930 = NOVALUE;
    }
    DeRef(_30930);
    _30930 = NOVALUE;

    /** fwdref.e:273			prep_forward_error( ref )*/
    _41prep_forward_error(_ref_62361);

    /** fwdref.e:274			CompileErr( "The forward call to [4] wasn't where we thought it would be: [1]:[2]:[3]",*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _30932 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _2 = (object)SEQ_PTR(_fr_62362);
    _30933 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_30933);
    _30934 = _56sym_name(_30933);
    _30933 = NOVALUE;
    _2 = (object)SEQ_PTR(_fr_62362);
    _30935 = (object)*(((s1_ptr)_2)->base + 6);
    _2 = (object)SEQ_PTR(_fr_62362);
    _30936 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30932);
    ((intptr_t*)_2)[1] = _30932;
    ((intptr_t*)_2)[2] = _30934;
    Ref(_30935);
    ((intptr_t*)_2)[3] = _30935;
    Ref(_30936);
    ((intptr_t*)_2)[4] = _30936;
    _30937 = MAKE_SEQ(_1);
    _30936 = NOVALUE;
    _30935 = NOVALUE;
    _30934 = NOVALUE;
    _30932 = NOVALUE;
    RefDS(_30931);
    _52CompileErr(_30931, _30937, 0);
    _30937 = NOVALUE;
L2: 

    /** fwdref.e:278		if SymTab[sub][S_DEPRECATED] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30938 = (object)*(((s1_ptr)_2)->base + _sub_62365);
    _2 = (object)SEQ_PTR(_30938);
    _30939 = (object)*(((s1_ptr)_2)->base + 30);
    _30938 = NOVALUE;
    if (_30939 == 0) {
        _30939 = NOVALUE;
        goto L3; // [346] 375
    }
    else {
        if (!IS_ATOM_INT(_30939) && DBL_PTR(_30939)->dbl == 0.0){
            _30939 = NOVALUE;
            goto L3; // [346] 375
        }
        _30939 = NOVALUE;
    }
    _30939 = NOVALUE;

    /** fwdref.e:279			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _30940 = (object)*(((s1_ptr)_2)->base + _sub_62365);
    _2 = (object)SEQ_PTR(_30940);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _30941 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _30941 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _30940 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30941);
    ((intptr_t*)_2)[1] = _30941;
    _30942 = MAKE_SEQ(_1);
    _30941 = NOVALUE;
    _52Warning(327, 16384, _30942);
    _30942 = NOVALUE;
L3: 

    /** fwdref.e:282		integer old_temps_allocated = temps_allocated*/
    _old_temps_allocated_62463 = _56temps_allocated_46788;

    /** fwdref.e:283		temps_allocated = 0*/
    _56temps_allocated_46788 = 0;

    /** fwdref.e:285		if is_func and fr[FR_OP] = PROC then*/
    if (_is_func_62399 == 0) {
        goto L4; // [393] 481
    }
    _2 = (object)SEQ_PTR(_fr_62362);
    _30944 = (object)*(((s1_ptr)_2)->base + 10);
    if (IS_ATOM_INT(_30944)) {
        _30945 = (_30944 == 27);
    }
    else {
        _30945 = binary_op(EQUALS, _30944, 27);
    }
    _30944 = NOVALUE;
    if (_30945 == 0) {
        DeRef(_30945);
        _30945 = NOVALUE;
        goto L4; // [408] 481
    }
    else {
        if (!IS_ATOM_INT(_30945) && DBL_PTR(_30945)->dbl == 0.0){
            DeRef(_30945);
            _30945 = NOVALUE;
            goto L4; // [408] 481
        }
        DeRef(_30945);
        _30945 = NOVALUE;
    }
    DeRef(_30945);
    _30945 = NOVALUE;

    /** fwdref.e:288			symtab_index temp_target = NewTempSym()*/
    _temp_target_62472 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_temp_target_62472)) {
        _1 = (object)(DBL_PTR(_temp_target_62472)->dbl);
        DeRefDS(_temp_target_62472);
        _temp_target_62472 = _1;
    }

    /** fwdref.e:289			sequence converted_code = */
    _30947 = _pc_62421 + 1;
    if (_30947 > MAXINT){
        _30947 = NewDouble((eudouble)_30947);
    }
    _30948 = _pc_62421 + 2;
    if ((object)((uintptr_t)_30948 + (uintptr_t)HIGH_BITS) >= 0){
        _30948 = NewDouble((eudouble)_30948);
    }
    if (IS_ATOM_INT(_30948)) {
        _30949 = _30948 + _supplied_args_62424;
    }
    else {
        _30949 = NewDouble(DBL_PTR(_30948)->dbl + (eudouble)_supplied_args_62424);
    }
    DeRef(_30948);
    _30948 = NOVALUE;
    rhs_slice_target = (object_ptr)&_30950;
    RHS_Slice(_39Code_16903, _30947, _30949);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 208;
    ((intptr_t *)_2)[2] = _temp_target_62472;
    _30951 = MAKE_SEQ(_1);
    {
        object concat_list[4];

        concat_list[0] = _30951;
        concat_list[1] = _temp_target_62472;
        concat_list[2] = _30950;
        concat_list[3] = 196;
        Concat_N((object_ptr)&_converted_code_62475, concat_list, 4);
    }
    DeRefDS(_30951);
    _30951 = NOVALUE;
    DeRefDS(_30950);
    _30950 = NOVALUE;

    /** fwdref.e:295			replace_code( converted_code, pc, pc + 2 + supplied_args, code_sub )*/
    _30953 = _pc_62421 + 2;
    if ((object)((uintptr_t)_30953 + (uintptr_t)HIGH_BITS) >= 0){
        _30953 = NewDouble((eudouble)_30953);
    }
    if (IS_ATOM_INT(_30953)) {
        _30954 = _30953 + _supplied_args_62424;
        if ((object)((uintptr_t)_30954 + (uintptr_t)HIGH_BITS) >= 0){
            _30954 = NewDouble((eudouble)_30954);
        }
    }
    else {
        _30954 = NewDouble(DBL_PTR(_30953)->dbl + (eudouble)_supplied_args_62424);
    }
    DeRef(_30953);
    _30953 = NOVALUE;
    RefDS(_converted_code_62475);
    _41replace_code(_converted_code_62475, _pc_62421, _30954, _code_sub_62392);
    _30954 = NOVALUE;

    /** fwdref.e:297			code = Code*/
    RefDS(_39Code_16903);
    DeRef(_code_62417);
    _code_62417 = _39Code_16903;
L4: 
    DeRef(_converted_code_62475);
    _converted_code_62475 = NOVALUE;

    /** fwdref.e:299		next_pc +=*/
    _30955 = 3 + _supplied_args_62424;
    if ((object)((uintptr_t)_30955 + (uintptr_t)HIGH_BITS) >= 0){
        _30955 = NewDouble((eudouble)_30955);
    }
    if (IS_ATOM_INT(_30955)) {
        _30956 = _30955 + _is_func_62399;
        if ((object)((uintptr_t)_30956 + (uintptr_t)HIGH_BITS) >= 0){
            _30956 = NewDouble((eudouble)_30956);
        }
    }
    else {
        _30956 = NewDouble(DBL_PTR(_30955)->dbl + (eudouble)_is_func_62399);
    }
    DeRef(_30955);
    _30955 = NOVALUE;
    if (IS_ATOM_INT(_30956)) {
        _next_pc_62423 = _next_pc_62423 + _30956;
    }
    else {
        _next_pc_62423 = NewDouble((eudouble)_next_pc_62423 + DBL_PTR(_30956)->dbl);
    }
    DeRef(_30956);
    _30956 = NOVALUE;
    if (!IS_ATOM_INT(_next_pc_62423)) {
        _1 = (object)(DBL_PTR(_next_pc_62423)->dbl);
        DeRefDS(_next_pc_62423);
        _next_pc_62423 = _1;
    }

    /** fwdref.e:303		integer target*/

    /** fwdref.e:304		if is_func then*/
    if (_is_func_62399 == 0)
    {
        goto L5; // [503] 525
    }
    else{
    }

    /** fwdref.e:305			target = Code[pc + 3 + supplied_args]*/
    _30958 = _pc_62421 + 3;
    if ((object)((uintptr_t)_30958 + (uintptr_t)HIGH_BITS) >= 0){
        _30958 = NewDouble((eudouble)_30958);
    }
    if (IS_ATOM_INT(_30958)) {
        _30959 = _30958 + _supplied_args_62424;
    }
    else {
        _30959 = NewDouble(DBL_PTR(_30958)->dbl + (eudouble)_supplied_args_62424);
    }
    DeRef(_30958);
    _30958 = NOVALUE;
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!IS_ATOM_INT(_30959)){
        _target_62491 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30959)->dbl));
    }
    else{
        _target_62491 = (object)*(((s1_ptr)_2)->base + _30959);
    }
    if (!IS_ATOM_INT(_target_62491)){
        _target_62491 = (object)DBL_PTR(_target_62491)->dbl;
    }
L5: 

    /** fwdref.e:307		integer has_defaults = 0*/
    _has_defaults_62497 = 0;

    /** fwdref.e:308		integer goto_target = length( code ) + 1*/
    if (IS_SEQUENCE(_code_62417)){
            _30961 = SEQ_PTR(_code_62417)->length;
    }
    else {
        _30961 = 1;
    }
    _goto_target_62498 = _30961 + 1;
    _30961 = NOVALUE;

    /** fwdref.e:309		integer defarg = 0*/
    _defarg_62501 = 0;

    /** fwdref.e:310		integer code_len = length(code)*/
    if (IS_SEQUENCE(_code_62417)){
            _code_len_62502 = SEQ_PTR(_code_62417)->length;
    }
    else {
        _code_len_62502 = 1;
    }

    /** fwdref.e:312		integer extra_default_args = 0*/
    _extra_default_args_62504 = 0;

    /** fwdref.e:313		set_dont_read( 1 )*/
    _63set_dont_read(1);

    /** fwdref.e:314		reset_private_lists()*/

    /** fwdref.e:212		fwd_private_sym  = {}*/
    RefDS(_21928);
    DeRefi(_41fwd_private_sym_62323);
    _41fwd_private_sym_62323 = _21928;

    /** fwdref.e:213		fwd_private_name = {}*/
    RefDS(_21928);
    DeRef(_41fwd_private_name_62324);
    _41fwd_private_name_62324 = _21928;

    /** fwdref.e:214	end procedure*/
    goto L6; // [577] 580
L6: 

    /** fwdref.e:315		integer param_sym = sub*/
    _param_sym_62507 = _sub_62365;

    /** fwdref.e:316		sequence params = repeat( 0, args )*/
    DeRef(_params_62508);
    _params_62508 = Repeat(0, _args_62394);

    /** fwdref.e:317		sequence orig_code = code*/
    RefDS(_code_62417);
    DeRef(_orig_code_62510);
    _orig_code_62510 = _code_62417;

    /** fwdref.e:318		sequence orig_linetable = LineTable*/
    RefDS(_39LineTable_16904);
    DeRef(_orig_linetable_62511);
    _orig_linetable_62511 = _39LineTable_16904;

    /** fwdref.e:319		LineTable = {}*/
    RefDS(_21928);
    DeRefDS(_39LineTable_16904);
    _39LineTable_16904 = _21928;

    /** fwdref.e:320		Code = {}*/
    RefDS(_21928);
    DeRef(_39Code_16903);
    _39Code_16903 = _21928;

    /** fwdref.e:323		integer ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _30965 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _ar_sp_62515 = find_from(_code_sub_62392, _30965, 1);
    _30965 = NOVALUE;

    /** fwdref.e:324		integer pre_refs*/

    /** fwdref.e:326		if code_sub = TopLevelSub then*/
    if (_code_sub_62392 != _39TopLevelSub_16822)
    goto L7; // [644] 664

    /** fwdref.e:327			pre_refs = length( toplevel_references[current_file_no] )*/
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    _30968 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_30968)){
            _pre_refs_62519 = SEQ_PTR(_30968)->length;
    }
    else {
        _pre_refs_62519 = 1;
    }
    _30968 = NOVALUE;
    goto L8; // [661] 697
L7: 

    /** fwdref.e:329			ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _30970 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _ar_sp_62515 = find_from(_code_sub_62392, _30970, 1);
    _30970 = NOVALUE;

    /** fwdref.e:330			pre_refs = length( active_references[current_file_no][ar_sp] )*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _30972 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _2 = (object)SEQ_PTR(_30972);
    _30973 = (object)*(((s1_ptr)_2)->base + _ar_sp_62515);
    _30972 = NOVALUE;
    if (IS_SEQUENCE(_30973)){
            _pre_refs_62519 = SEQ_PTR(_30973)->length;
    }
    else {
        _pre_refs_62519 = 1;
    }
    _30973 = NOVALUE;
L8: 

    /** fwdref.e:333		sequence old_fwd_params = {}*/
    RefDS(_21928);
    DeRef(_old_fwd_params_62534);
    _old_fwd_params_62534 = _21928;

    /** fwdref.e:334		for i = pc + 3 to pc + args + 2 do*/
    _30975 = _pc_62421 + 3;
    if ((object)((uintptr_t)_30975 + (uintptr_t)HIGH_BITS) >= 0){
        _30975 = NewDouble((eudouble)_30975);
    }
    _30976 = _pc_62421 + _args_62394;
    if ((object)((uintptr_t)_30976 + (uintptr_t)HIGH_BITS) >= 0){
        _30976 = NewDouble((eudouble)_30976);
    }
    if (IS_ATOM_INT(_30976)) {
        _30977 = _30976 + 2;
        if ((object)((uintptr_t)_30977 + (uintptr_t)HIGH_BITS) >= 0){
            _30977 = NewDouble((eudouble)_30977);
        }
    }
    else {
        _30977 = NewDouble(DBL_PTR(_30976)->dbl + (eudouble)2);
    }
    DeRef(_30976);
    _30976 = NOVALUE;
    {
        object _i_62536;
        Ref(_30975);
        _i_62536 = _30975;
L9: 
        if (binary_op_a(GREATER, _i_62536, _30977)){
            goto LA; // [718] 879
        }

        /** fwdref.e:335			defarg += 1*/
        _defarg_62501 = _defarg_62501 + 1;

        /** fwdref.e:336			param_sym = SymTab[param_sym][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30979 = (object)*(((s1_ptr)_2)->base + _param_sym_62507);
        _2 = (object)SEQ_PTR(_30979);
        _param_sym_62507 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_sym_62507)){
            _param_sym_62507 = (object)DBL_PTR(_param_sym_62507)->dbl;
        }
        _30979 = NOVALUE;

        /** fwdref.e:337			if defarg > supplied_args or i > length( code ) or not code[i] then*/
        _30981 = (_defarg_62501 > _supplied_args_62424);
        if (_30981 != 0) {
            _30982 = 1;
            goto LB; // [753] 768
        }
        if (IS_SEQUENCE(_code_62417)){
                _30983 = SEQ_PTR(_code_62417)->length;
        }
        else {
            _30983 = 1;
        }
        if (IS_ATOM_INT(_i_62536)) {
            _30984 = (_i_62536 > _30983);
        }
        else {
            _30984 = (DBL_PTR(_i_62536)->dbl > (eudouble)_30983);
        }
        _30983 = NOVALUE;
        _30982 = (_30984 != 0);
LB: 
        if (_30982 != 0) {
            goto LC; // [768] 784
        }
        _2 = (object)SEQ_PTR(_code_62417);
        if (!IS_ATOM_INT(_i_62536)){
            _30986 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62536)->dbl));
        }
        else{
            _30986 = (object)*(((s1_ptr)_2)->base + _i_62536);
        }
        if (IS_ATOM_INT(_30986)) {
            _30987 = (_30986 == 0);
        }
        else {
            _30987 = unary_op(NOT, _30986);
        }
        _30986 = NOVALUE;
        if (_30987 == 0) {
            DeRef(_30987);
            _30987 = NOVALUE;
            goto LD; // [780] 834
        }
        else {
            if (!IS_ATOM_INT(_30987) && DBL_PTR(_30987)->dbl == 0.0){
                DeRef(_30987);
                _30987 = NOVALUE;
                goto LD; // [780] 834
            }
            DeRef(_30987);
            _30987 = NOVALUE;
        }
        DeRef(_30987);
        _30987 = NOVALUE;
LC: 

        /** fwdref.e:339				has_defaults = 1*/
        _has_defaults_62497 = 1;

        /** fwdref.e:340				extra_default_args += 1*/
        _extra_default_args_62504 = _extra_default_args_62504 + 1;

        /** fwdref.e:345				show_params( sub )*/
        _56show_params(_sub_62365);

        /** fwdref.e:346				set_error_info( ref )*/
        _41set_error_info(_ref_62361);

        /** fwdref.e:347				Parse_default_arg(sub, defarg, fwd_private_name, fwd_private_sym) --call_proc( parse_arg_rid, { sub, defarg, fwd_private_name, fwd_private_sym } )*/
        RefDS(_41fwd_private_name_62324);
        RefDS(_41fwd_private_sym_62323);
        _42Parse_default_arg(_sub_62365, _defarg_62501, _41fwd_private_name_62324, _41fwd_private_sym_62323);

        /** fwdref.e:348				hide_params( sub )*/
        _56hide_params(_sub_62365);

        /** fwdref.e:349				params[defarg] = Pop()*/
        _30989 = _49Pop();
        _2 = (object)SEQ_PTR(_params_62508);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62501);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _30989;
        if( _1 != _30989 ){
            DeRef(_1);
        }
        _30989 = NOVALUE;
        goto LE; // [831] 872
LD: 

        /** fwdref.e:351				extra_default_args = 0*/
        _extra_default_args_62504 = 0;

        /** fwdref.e:352				add_private_symbol( code[i], SymTab[param_sym][S_NAME] )*/
        _2 = (object)SEQ_PTR(_code_62417);
        if (!IS_ATOM_INT(_i_62536)){
            _30990 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62536)->dbl));
        }
        else{
            _30990 = (object)*(((s1_ptr)_2)->base + _i_62536);
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _30991 = (object)*(((s1_ptr)_2)->base + _param_sym_62507);
        _2 = (object)SEQ_PTR(_30991);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _30992 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _30992 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _30991 = NOVALUE;
        Ref(_30990);
        Ref(_30992);
        _41add_private_symbol(_30990, _30992);
        _30990 = NOVALUE;
        _30992 = NOVALUE;

        /** fwdref.e:353				params[defarg] = code[i]*/
        _2 = (object)SEQ_PTR(_code_62417);
        if (!IS_ATOM_INT(_i_62536)){
            _30993 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62536)->dbl));
        }
        else{
            _30993 = (object)*(((s1_ptr)_2)->base + _i_62536);
        }
        Ref(_30993);
        _2 = (object)SEQ_PTR(_params_62508);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62501);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _30993;
        if( _1 != _30993 ){
            DeRef(_1);
        }
        _30993 = NOVALUE;
LE: 

        /** fwdref.e:355		end for*/
        _0 = _i_62536;
        if (IS_ATOM_INT(_i_62536)) {
            _i_62536 = _i_62536 + 1;
            if ((object)((uintptr_t)_i_62536 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62536 = NewDouble((eudouble)_i_62536);
            }
        }
        else {
            _i_62536 = binary_op_a(PLUS, _i_62536, 1);
        }
        DeRef(_0);
        goto L9; // [874] 725
LA: 
        ;
        DeRef(_i_62536);
    }

    /** fwdref.e:357		SymTab[code_sub][S_STACK_SPACE] += temps_allocated*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_code_sub_62392 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
        _30996 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    }
    else{
        _30996 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    }
    _30994 = NOVALUE;
    if (IS_ATOM_INT(_30996)) {
        _30997 = _30996 + _56temps_allocated_46788;
        if ((object)((uintptr_t)_30997 + (uintptr_t)HIGH_BITS) >= 0){
            _30997 = NewDouble((eudouble)_30997);
        }
    }
    else {
        _30997 = binary_op(PLUS, _30996, _56temps_allocated_46788);
    }
    _30996 = NOVALUE;
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
    *(intptr_t *)_2 = _30997;
    if( _1 != _30997 ){
        DeRef(_1);
    }
    _30997 = NOVALUE;
    _30994 = NOVALUE;

    /** fwdref.e:358		temps_allocated = old_temps_allocated*/
    _56temps_allocated_46788 = _old_temps_allocated_62463;

    /** fwdref.e:363		integer temp_shifting_sub = shifting_sub*/
    _temp_shifting_sub_62575 = _41shifting_sub_62152;

    /** fwdref.e:364		shift( -pc, pc-1 )*/
    if ((uintptr_t)_pc_62421 == (uintptr_t)HIGH_BITS){
        _30998 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _30998 = - _pc_62421;
    }
    _30999 = _pc_62421 - 1;
    if ((object)((uintptr_t)_30999 +(uintptr_t) HIGH_BITS) >= 0){
        _30999 = NewDouble((eudouble)_30999);
    }
    Ref(_30998);
    DeRef(_31661);
    _31661 = _30998;
    _67shift(_30998, _30999, _31661);
    _30998 = NOVALUE;
    _30999 = NOVALUE;
    _31661 = NOVALUE;

    /** fwdref.e:366		sequence new_code = Code*/
    RefDS(_39Code_16903);
    DeRef(_new_code_62579);
    _new_code_62579 = _39Code_16903;

    /** fwdref.e:367		Code = orig_code*/
    RefDS(_orig_code_62510);
    DeRefDS(_39Code_16903);
    _39Code_16903 = _orig_code_62510;

    /** fwdref.e:368		orig_code = {}*/
    RefDS(_21928);
    DeRefDS(_orig_code_62510);
    _orig_code_62510 = _21928;

    /** fwdref.e:369		LineTable = orig_linetable*/
    RefDS(_orig_linetable_62511);
    DeRef(_39LineTable_16904);
    _39LineTable_16904 = _orig_linetable_62511;

    /** fwdref.e:370		orig_linetable = {}*/
    RefDS(_21928);
    DeRefDS(_orig_linetable_62511);
    _orig_linetable_62511 = _21928;

    /** fwdref.e:371		set_dont_read( 0 )*/
    _63set_dont_read(0);

    /** fwdref.e:372		current_file_no = real_file*/
    _39current_file_no_16815 = _real_file_62413;

    /** fwdref.e:374		if args != ( supplied_args + extra_default_args ) then*/
    _31000 = _supplied_args_62424 + _extra_default_args_62504;
    if ((object)((uintptr_t)_31000 + (uintptr_t)HIGH_BITS) >= 0){
        _31000 = NewDouble((eudouble)_31000);
    }
    if (binary_op_a(EQUALS, _args_62394, _31000)){
        DeRef(_31000);
        _31000 = NOVALUE;
        goto LF; // [990] 1068
    }
    DeRef(_31000);
    _31000 = NOVALUE;

    /** fwdref.e:375			sequence routine_type*/

    /** fwdref.e:377			if is_func then */
    if (_is_func_62399 == 0)
    {
        goto L10; // [998] 1011
    }
    else{
    }

    /** fwdref.e:378				routine_type = "function"*/
    RefDS(_26123);
    DeRefi(_routine_type_62588);
    _routine_type_62588 = _26123;
    goto L11; // [1008] 1019
L10: 

    /** fwdref.e:380				routine_type = "procedure"*/
    RefDS(_26177);
    DeRefi(_routine_type_62588);
    _routine_type_62588 = _26177;
L11: 

    /** fwdref.e:382			current_file_no = fr[FR_FILE]*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _39current_file_no_16815 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_39current_file_no_16815)){
        _39current_file_no_16815 = (object)DBL_PTR(_39current_file_no_16815)->dbl;
    }

    /** fwdref.e:383			line_number = fr[FR_LINE]*/
    _2 = (object)SEQ_PTR(_fr_62362);
    _39line_number_16816 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_39line_number_16816)){
        _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
    }

    /** fwdref.e:384			CompileErr( 158,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _31005 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _31006 = _supplied_args_62424 + _extra_default_args_62504;
    if ((object)((uintptr_t)_31006 + (uintptr_t)HIGH_BITS) >= 0){
        _31006 = NewDouble((eudouble)_31006);
    }
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_31005);
    ((intptr_t*)_2)[1] = _31005;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    RefDS(_routine_type_62588);
    ((intptr_t*)_2)[3] = _routine_type_62588;
    RefDS(_name_62427);
    ((intptr_t*)_2)[4] = _name_62427;
    ((intptr_t*)_2)[5] = _args_62394;
    ((intptr_t*)_2)[6] = _31006;
    _31007 = MAKE_SEQ(_1);
    _31006 = NOVALUE;
    _31005 = NOVALUE;
    _52CompileErr(158, _31007, 0);
    _31007 = NOVALUE;
LF: 
    DeRefi(_routine_type_62588);
    _routine_type_62588 = NOVALUE;

    /** fwdref.e:388		new_code &= PROC & sub & params*/
    {
        object concat_list[3];

        concat_list[0] = _params_62508;
        concat_list[1] = _sub_62365;
        concat_list[2] = 27;
        Concat_N((object_ptr)&_31008, concat_list, 3);
    }
    Concat((object_ptr)&_new_code_62579, _new_code_62579, _31008);
    DeRefDS(_31008);
    _31008 = NOVALUE;

    /** fwdref.e:389		if is_func then*/
    if (_is_func_62399 == 0)
    {
        goto L12; // [1086] 1098
    }
    else{
    }

    /** fwdref.e:390			new_code &= target*/
    Append(&_new_code_62579, _new_code_62579, _target_62491);
L12: 

    /** fwdref.e:393		replace_code( new_code, pc, next_pc - 1, code_sub )*/
    _31011 = _next_pc_62423 - 1;
    if ((object)((uintptr_t)_31011 +(uintptr_t) HIGH_BITS) >= 0){
        _31011 = NewDouble((eudouble)_31011);
    }
    RefDS(_new_code_62579);
    _41replace_code(_new_code_62579, _pc_62421, _31011, _code_sub_62392);
    _31011 = NOVALUE;

    /** fwdref.e:395		if code_sub = TopLevelSub then*/
    if (_code_sub_62392 != _39TopLevelSub_16822)
    goto L13; // [1114] 1195

    /** fwdref.e:396			for i = pre_refs + 1 to length( toplevel_references[fr[FR_FILE]] ) do*/
    _31013 = _pre_refs_62519 + 1;
    if (_31013 > MAXINT){
        _31013 = NewDouble((eudouble)_31013);
    }
    _2 = (object)SEQ_PTR(_fr_62362);
    _31014 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    if (!IS_ATOM_INT(_31014)){
        _31015 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31014)->dbl));
    }
    else{
        _31015 = (object)*(((s1_ptr)_2)->base + _31014);
    }
    if (IS_SEQUENCE(_31015)){
            _31016 = SEQ_PTR(_31015)->length;
    }
    else {
        _31016 = 1;
    }
    _31015 = NOVALUE;
    {
        object _i_62613;
        Ref(_31013);
        _i_62613 = _31013;
L14: 
        if (binary_op_a(GREATER, _i_62613, _31016)){
            goto L15; // [1139] 1192
        }

        /** fwdref.e:397				forward_references[toplevel_references[fr[FR_FILE]][i]][FR_PC] += pc - 1*/
        _2 = (object)SEQ_PTR(_fr_62362);
        _31017 = (object)*(((s1_ptr)_2)->base + 3);
        _2 = (object)SEQ_PTR(_41toplevel_references_62126);
        if (!IS_ATOM_INT(_31017)){
            _31018 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31017)->dbl));
        }
        else{
            _31018 = (object)*(((s1_ptr)_2)->base + _31017);
        }
        _2 = (object)SEQ_PTR(_31018);
        if (!IS_ATOM_INT(_i_62613)){
            _31019 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62613)->dbl));
        }
        else{
            _31019 = (object)*(((s1_ptr)_2)->base + _i_62613);
        }
        _31018 = NOVALUE;
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _41forward_references_62123 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31019))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31019)->dbl));
        else
        _3 = (object)(_31019 + ((s1_ptr)_2)->base);
        _31022 = _pc_62421 - 1;
        if ((object)((uintptr_t)_31022 +(uintptr_t) HIGH_BITS) >= 0){
            _31022 = NewDouble((eudouble)_31022);
        }
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31023 = (object)*(((s1_ptr)_2)->base + 5);
        _31020 = NOVALUE;
        if (IS_ATOM_INT(_31023) && IS_ATOM_INT(_31022)) {
            _31024 = _31023 + _31022;
            if ((object)((uintptr_t)_31024 + (uintptr_t)HIGH_BITS) >= 0){
                _31024 = NewDouble((eudouble)_31024);
            }
        }
        else {
            _31024 = binary_op(PLUS, _31023, _31022);
        }
        _31023 = NOVALUE;
        DeRef(_31022);
        _31022 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31024;
        if( _1 != _31024 ){
            DeRef(_1);
        }
        _31024 = NOVALUE;
        _31020 = NOVALUE;

        /** fwdref.e:398			end for*/
        _0 = _i_62613;
        if (IS_ATOM_INT(_i_62613)) {
            _i_62613 = _i_62613 + 1;
            if ((object)((uintptr_t)_i_62613 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62613 = NewDouble((eudouble)_i_62613);
            }
        }
        else {
            _i_62613 = binary_op_a(PLUS, _i_62613, 1);
        }
        DeRef(_0);
        goto L14; // [1187] 1146
L15: 
        ;
        DeRef(_i_62613);
    }
    goto L16; // [1192] 1278
L13: 

    /** fwdref.e:400			for i = pre_refs + 1 to length( active_references[fr[FR_FILE]][ar_sp] ) do*/
    _31025 = _pre_refs_62519 + 1;
    if (_31025 > MAXINT){
        _31025 = NewDouble((eudouble)_31025);
    }
    _2 = (object)SEQ_PTR(_fr_62362);
    _31026 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!IS_ATOM_INT(_31026)){
        _31027 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31026)->dbl));
    }
    else{
        _31027 = (object)*(((s1_ptr)_2)->base + _31026);
    }
    _2 = (object)SEQ_PTR(_31027);
    _31028 = (object)*(((s1_ptr)_2)->base + _ar_sp_62515);
    _31027 = NOVALUE;
    if (IS_SEQUENCE(_31028)){
            _31029 = SEQ_PTR(_31028)->length;
    }
    else {
        _31029 = 1;
    }
    _31028 = NOVALUE;
    {
        object _i_62628;
        Ref(_31025);
        _i_62628 = _31025;
L17: 
        if (binary_op_a(GREATER, _i_62628, _31029)){
            goto L18; // [1220] 1277
        }

        /** fwdref.e:401				forward_references[active_references[fr[FR_FILE]][ar_sp][i]][FR_PC] += pc - 1*/
        _2 = (object)SEQ_PTR(_fr_62362);
        _31030 = (object)*(((s1_ptr)_2)->base + 3);
        _2 = (object)SEQ_PTR(_41active_references_62125);
        if (!IS_ATOM_INT(_31030)){
            _31031 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31030)->dbl));
        }
        else{
            _31031 = (object)*(((s1_ptr)_2)->base + _31030);
        }
        _2 = (object)SEQ_PTR(_31031);
        _31032 = (object)*(((s1_ptr)_2)->base + _ar_sp_62515);
        _31031 = NOVALUE;
        _2 = (object)SEQ_PTR(_31032);
        if (!IS_ATOM_INT(_i_62628)){
            _31033 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62628)->dbl));
        }
        else{
            _31033 = (object)*(((s1_ptr)_2)->base + _i_62628);
        }
        _31032 = NOVALUE;
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _41forward_references_62123 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31033))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31033)->dbl));
        else
        _3 = (object)(_31033 + ((s1_ptr)_2)->base);
        _31036 = _pc_62421 - 1;
        if ((object)((uintptr_t)_31036 +(uintptr_t) HIGH_BITS) >= 0){
            _31036 = NewDouble((eudouble)_31036);
        }
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31037 = (object)*(((s1_ptr)_2)->base + 5);
        _31034 = NOVALUE;
        if (IS_ATOM_INT(_31037) && IS_ATOM_INT(_31036)) {
            _31038 = _31037 + _31036;
            if ((object)((uintptr_t)_31038 + (uintptr_t)HIGH_BITS) >= 0){
                _31038 = NewDouble((eudouble)_31038);
            }
        }
        else {
            _31038 = binary_op(PLUS, _31037, _31036);
        }
        _31037 = NOVALUE;
        DeRef(_31036);
        _31036 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31038;
        if( _1 != _31038 ){
            DeRef(_1);
        }
        _31038 = NOVALUE;
        _31034 = NOVALUE;

        /** fwdref.e:402			end for*/
        _0 = _i_62628;
        if (IS_ATOM_INT(_i_62628)) {
            _i_62628 = _i_62628 + 1;
            if ((object)((uintptr_t)_i_62628 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62628 = NewDouble((eudouble)_i_62628);
            }
        }
        else {
            _i_62628 = binary_op_a(PLUS, _i_62628, 1);
        }
        DeRef(_0);
        goto L17; // [1272] 1227
L18: 
        ;
        DeRef(_i_62628);
    }
L16: 

    /** fwdref.e:405		reset_code()*/
    _41reset_code();

    /** fwdref.e:408		resolved_reference( ref )*/
    _41resolved_reference(_ref_62361);

    /** fwdref.e:409	end procedure*/
    DeRef(_tok_62360);
    DeRef(_fr_62362);
    DeRef(_code_62417);
    DeRef(_name_62427);
    DeRef(_params_62508);
    DeRef(_orig_code_62510);
    DeRef(_orig_linetable_62511);
    DeRef(_old_fwd_params_62534);
    DeRef(_new_code_62579);
    DeRef(_30975);
    _30975 = NOVALUE;
    _31028 = NOVALUE;
    _31019 = NOVALUE;
    _31026 = NOVALUE;
    DeRef(_30947);
    _30947 = NOVALUE;
    DeRef(_30984);
    _30984 = NOVALUE;
    _30968 = NOVALUE;
    DeRef(_30981);
    _30981 = NOVALUE;
    DeRef(_30949);
    _30949 = NOVALUE;
    _31030 = NOVALUE;
    _30973 = NOVALUE;
    _31033 = NOVALUE;
    DeRef(_30923);
    _30923 = NOVALUE;
    DeRef(_30927);
    _30927 = NOVALUE;
    DeRef(_31013);
    _31013 = NOVALUE;
    DeRef(_31025);
    _31025 = NOVALUE;
    _31015 = NOVALUE;
    DeRef(_30959);
    _30959 = NOVALUE;
    _31014 = NOVALUE;
    DeRef(_30977);
    _30977 = NOVALUE;
    _31017 = NOVALUE;
    return;
    ;
}


void _41set_error_info(object _ref_62645)
{
    object _fr_62646 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:412		sequence fr = forward_references[ref]*/
    DeRef(_fr_62646);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62646 = (object)*(((s1_ptr)_2)->base + _ref_62645);
    Ref(_fr_62646);

    /** fwdref.e:413		ThisLine        = fr[FR_THISLINE]*/
    DeRef(_52ThisLine_48710);
    _2 = (object)SEQ_PTR(_fr_62646);
    _52ThisLine_48710 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_52ThisLine_48710);

    /** fwdref.e:414		bp              = fr[FR_BP]*/
    _2 = (object)SEQ_PTR(_fr_62646);
    _52bp_48714 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_52bp_48714)){
        _52bp_48714 = (object)DBL_PTR(_52bp_48714)->dbl;
    }

    /** fwdref.e:415		line_number     = fr[FR_LINE]*/
    _2 = (object)SEQ_PTR(_fr_62646);
    _39line_number_16816 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_39line_number_16816)){
        _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
    }

    /** fwdref.e:416		current_file_no = fr[FR_FILE]*/
    _2 = (object)SEQ_PTR(_fr_62646);
    _39current_file_no_16815 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_39current_file_no_16815)){
        _39current_file_no_16815 = (object)DBL_PTR(_39current_file_no_16815)->dbl;
    }

    /** fwdref.e:417	end procedure*/
    DeRefDS(_fr_62646);
    return;
    ;
}


void _41patch_forward_variable(object _tok_62659, object _ref_62660)
{
    object _fr_62661 = NOVALUE;
    object _sym_62664 = NOVALUE;
    object _pc_62717 = NOVALUE;
    object _vx_62721 = NOVALUE;
    object _d_62738 = NOVALUE;
    object _param_62748 = NOVALUE;
    object _old_62751 = NOVALUE;
    object _new_62756 = NOVALUE;
    object _31096 = NOVALUE;
    object _31095 = NOVALUE;
    object _31094 = NOVALUE;
    object _31092 = NOVALUE;
    object _31089 = NOVALUE;
    object _31087 = NOVALUE;
    object _31086 = NOVALUE;
    object _31085 = NOVALUE;
    object _31084 = NOVALUE;
    object _31082 = NOVALUE;
    object _31081 = NOVALUE;
    object _31080 = NOVALUE;
    object _31079 = NOVALUE;
    object _31078 = NOVALUE;
    object _31076 = NOVALUE;
    object _31074 = NOVALUE;
    object _31071 = NOVALUE;
    object _31070 = NOVALUE;
    object _31069 = NOVALUE;
    object _31067 = NOVALUE;
    object _31066 = NOVALUE;
    object _31065 = NOVALUE;
    object _31064 = NOVALUE;
    object _31062 = NOVALUE;
    object _31060 = NOVALUE;
    object _31058 = NOVALUE;
    object _31057 = NOVALUE;
    object _31056 = NOVALUE;
    object _31055 = NOVALUE;
    object _31054 = NOVALUE;
    object _31053 = NOVALUE;
    object _31052 = NOVALUE;
    object _31051 = NOVALUE;
    object _31050 = NOVALUE;
    object _31049 = NOVALUE;
    object _31048 = NOVALUE;
    object _31047 = NOVALUE;
    object _31046 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:421		sequence fr = forward_references[ref]*/
    DeRef(_fr_62661);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62661 = (object)*(((s1_ptr)_2)->base + _ref_62660);
    Ref(_fr_62661);

    /** fwdref.e:422		symtab_index sym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62659);
    _sym_62664 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_62664)){
        _sym_62664 = (object)DBL_PTR(_sym_62664)->dbl;
    }

    /** fwdref.e:424		if SymTab[sym][S_FILE_NO] = fr[FR_FILE] */
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31046 = (object)*(((s1_ptr)_2)->base + _sym_62664);
    _2 = (object)SEQ_PTR(_31046);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _31047 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _31047 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _31046 = NOVALUE;
    _2 = (object)SEQ_PTR(_fr_62661);
    _31048 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_ATOM_INT(_31047) && IS_ATOM_INT(_31048)) {
        _31049 = (_31047 == _31048);
    }
    else {
        _31049 = binary_op(EQUALS, _31047, _31048);
    }
    _31047 = NOVALUE;
    _31048 = NOVALUE;
    if (IS_ATOM_INT(_31049)) {
        if (_31049 == 0) {
            goto L1; // [45] 69
        }
    }
    else {
        if (DBL_PTR(_31049)->dbl == 0.0) {
            goto L1; // [45] 69
        }
    }
    _2 = (object)SEQ_PTR(_fr_62661);
    _31051 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_31051)) {
        _31052 = (_31051 == _39TopLevelSub_16822);
    }
    else {
        _31052 = binary_op(EQUALS, _31051, _39TopLevelSub_16822);
    }
    _31051 = NOVALUE;
    if (_31052 == 0) {
        DeRef(_31052);
        _31052 = NOVALUE;
        goto L1; // [60] 69
    }
    else {
        if (!IS_ATOM_INT(_31052) && DBL_PTR(_31052)->dbl == 0.0){
            DeRef(_31052);
            _31052 = NOVALUE;
            goto L1; // [60] 69
        }
        DeRef(_31052);
        _31052 = NOVALUE;
    }
    DeRef(_31052);
    _31052 = NOVALUE;

    /** fwdref.e:426			return*/
    DeRef(_tok_62659);
    DeRef(_fr_62661);
    DeRef(_31049);
    _31049 = NOVALUE;
    return;
L1: 

    /** fwdref.e:429		if fr[FR_OP] = ASSIGN and SymTab[sym][S_MODE] = M_CONSTANT then*/
    _2 = (object)SEQ_PTR(_fr_62661);
    _31053 = (object)*(((s1_ptr)_2)->base + 10);
    if (IS_ATOM_INT(_31053)) {
        _31054 = (_31053 == 18);
    }
    else {
        _31054 = binary_op(EQUALS, _31053, 18);
    }
    _31053 = NOVALUE;
    if (IS_ATOM_INT(_31054)) {
        if (_31054 == 0) {
            goto L2; // [81] 120
        }
    }
    else {
        if (DBL_PTR(_31054)->dbl == 0.0) {
            goto L2; // [81] 120
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31056 = (object)*(((s1_ptr)_2)->base + _sym_62664);
    _2 = (object)SEQ_PTR(_31056);
    _31057 = (object)*(((s1_ptr)_2)->base + 3);
    _31056 = NOVALUE;
    if (IS_ATOM_INT(_31057)) {
        _31058 = (_31057 == 2);
    }
    else {
        _31058 = binary_op(EQUALS, _31057, 2);
    }
    _31057 = NOVALUE;
    if (_31058 == 0) {
        DeRef(_31058);
        _31058 = NOVALUE;
        goto L2; // [104] 120
    }
    else {
        if (!IS_ATOM_INT(_31058) && DBL_PTR(_31058)->dbl == 0.0){
            DeRef(_31058);
            _31058 = NOVALUE;
            goto L2; // [104] 120
        }
        DeRef(_31058);
        _31058 = NOVALUE;
    }
    DeRef(_31058);
    _31058 = NOVALUE;

    /** fwdref.e:430			prep_forward_error( ref )*/
    _41prep_forward_error(_ref_62660);

    /** fwdref.e:431			CompileErr( 110 )*/
    RefDS(_21928);
    _52CompileErr(110, _21928, 0);
L2: 

    /** fwdref.e:434		if fr[FR_OP] = ASSIGN then*/
    _2 = (object)SEQ_PTR(_fr_62661);
    _31060 = (object)*(((s1_ptr)_2)->base + 10);
    if (binary_op_a(NOTEQ, _31060, 18)){
        _31060 = NOVALUE;
        goto L3; // [128] 168
    }
    _31060 = NOVALUE;

    /** fwdref.e:435			SymTab[sym][S_USAGE] = or_bits( U_WRITTEN, SymTab[sym][S_USAGE] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62664 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31064 = (object)*(((s1_ptr)_2)->base + _sym_62664);
    _2 = (object)SEQ_PTR(_31064);
    _31065 = (object)*(((s1_ptr)_2)->base + 5);
    _31064 = NOVALUE;
    if (IS_ATOM_INT(_31065)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_31065;
             _31066 = MAKE_UINT(tu);
        }
    }
    else {
        _31066 = binary_op(OR_BITS, 2, _31065);
    }
    _31065 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31066;
    if( _1 != _31066 ){
        DeRef(_1);
    }
    _31066 = NOVALUE;
    _31062 = NOVALUE;
    goto L4; // [165] 202
L3: 

    /** fwdref.e:437			SymTab[sym][S_USAGE] = or_bits( U_READ, SymTab[sym][S_USAGE] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62664 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31069 = (object)*(((s1_ptr)_2)->base + _sym_62664);
    _2 = (object)SEQ_PTR(_31069);
    _31070 = (object)*(((s1_ptr)_2)->base + 5);
    _31069 = NOVALUE;
    if (IS_ATOM_INT(_31070)) {
        {uintptr_t tu;
             tu = (uintptr_t)1 | (uintptr_t)_31070;
             _31071 = MAKE_UINT(tu);
        }
    }
    else {
        _31071 = binary_op(OR_BITS, 1, _31070);
    }
    _31070 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31071;
    if( _1 != _31071 ){
        DeRef(_1);
    }
    _31071 = NOVALUE;
    _31067 = NOVALUE;
L4: 

    /** fwdref.e:440		set_code( ref )*/
    _41set_code(_ref_62660);

    /** fwdref.e:441		integer pc = fr[FR_PC]*/
    _2 = (object)SEQ_PTR(_fr_62661);
    _pc_62717 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62717))
    _pc_62717 = (object)DBL_PTR(_pc_62717)->dbl;

    /** fwdref.e:442		if pc < 1 then*/
    if (_pc_62717 >= 1)
    goto L5; // [215] 225

    /** fwdref.e:443			pc = 1*/
    _pc_62717 = 1;
L5: 

    /** fwdref.e:445		integer vx = find( -ref, Code, pc )*/
    if ((uintptr_t)_ref_62660 == (uintptr_t)HIGH_BITS){
        _31074 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31074 = - _ref_62660;
    }
    _vx_62721 = find_from(_31074, _39Code_16903, _pc_62717);
    DeRef(_31074);
    _31074 = NOVALUE;

    /** fwdref.e:446		if vx then*/
    if (_vx_62721 == 0)
    {
        goto L6; // [239] 281
    }
    else{
    }

    /** fwdref.e:447			while vx do*/
L7: 
    if (_vx_62721 == 0)
    {
        goto L8; // [247] 275
    }
    else{
    }

    /** fwdref.e:450				Code[vx] = sym*/
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _vx_62721);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_62664;
    DeRef(_1);

    /** fwdref.e:451				vx = find( -ref, Code, vx )*/
    if ((uintptr_t)_ref_62660 == (uintptr_t)HIGH_BITS){
        _31076 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31076 = - _ref_62660;
    }
    _vx_62721 = find_from(_31076, _39Code_16903, _vx_62721);
    DeRef(_31076);
    _31076 = NOVALUE;

    /** fwdref.e:452			end while*/
    goto L7; // [272] 247
L8: 

    /** fwdref.e:453			resolved_reference( ref )*/
    _41resolved_reference(_ref_62660);
L6: 

    /** fwdref.e:456		if sequence( fr[FR_DATA] ) then*/
    _2 = (object)SEQ_PTR(_fr_62661);
    _31078 = (object)*(((s1_ptr)_2)->base + 12);
    _31079 = IS_SEQUENCE(_31078);
    _31078 = NOVALUE;
    if (_31079 == 0)
    {
        _31079 = NOVALUE;
        goto L9; // [290] 422
    }
    else{
        _31079 = NOVALUE;
    }

    /** fwdref.e:457			for i = 1 to length( fr[FR_DATA] ) do*/
    _2 = (object)SEQ_PTR(_fr_62661);
    _31080 = (object)*(((s1_ptr)_2)->base + 12);
    if (IS_SEQUENCE(_31080)){
            _31081 = SEQ_PTR(_31080)->length;
    }
    else {
        _31081 = 1;
    }
    _31080 = NOVALUE;
    {
        object _i_62735;
        _i_62735 = 1;
LA: 
        if (_i_62735 > _31081){
            goto LB; // [302] 416
        }

        /** fwdref.e:458				object d = fr[FR_DATA][i]*/
        _2 = (object)SEQ_PTR(_fr_62661);
        _31082 = (object)*(((s1_ptr)_2)->base + 12);
        DeRef(_d_62738);
        _2 = (object)SEQ_PTR(_31082);
        _d_62738 = (object)*(((s1_ptr)_2)->base + _i_62735);
        Ref(_d_62738);
        _31082 = NOVALUE;

        /** fwdref.e:459				if sequence( d ) and d[1] = PAM_RECORD then*/
        _31084 = IS_SEQUENCE(_d_62738);
        if (_31084 == 0) {
            goto LC; // [324] 405
        }
        _2 = (object)SEQ_PTR(_d_62738);
        _31086 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_31086)) {
            _31087 = (_31086 == 1);
        }
        else {
            _31087 = binary_op(EQUALS, _31086, 1);
        }
        _31086 = NOVALUE;
        if (_31087 == 0) {
            DeRef(_31087);
            _31087 = NOVALUE;
            goto LC; // [339] 405
        }
        else {
            if (!IS_ATOM_INT(_31087) && DBL_PTR(_31087)->dbl == 0.0){
                DeRef(_31087);
                _31087 = NOVALUE;
                goto LC; // [339] 405
            }
            DeRef(_31087);
            _31087 = NOVALUE;
        }
        DeRef(_31087);
        _31087 = NOVALUE;

        /** fwdref.e:461					symtab_index param = d[2]*/
        _2 = (object)SEQ_PTR(_d_62738);
        _param_62748 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_62748)){
            _param_62748 = (object)DBL_PTR(_param_62748)->dbl;
        }

        /** fwdref.e:462					token old = {RECORDED, d[3]}*/
        _2 = (object)SEQ_PTR(_d_62738);
        _31089 = (object)*(((s1_ptr)_2)->base + 3);
        Ref(_31089);
        DeRef(_old_62751);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 508;
        ((intptr_t *)_2)[2] = _31089;
        _old_62751 = MAKE_SEQ(_1);
        _31089 = NOVALUE;

        /** fwdref.e:463					token new = {VARIABLE, sym}*/
        DeRefi(_new_62756);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -100;
        ((intptr_t *)_2)[2] = _sym_62664;
        _new_62756 = MAKE_SEQ(_1);

        /** fwdref.e:464					SymTab[param][S_CODE] = find_replace( old, SymTab[param][S_CODE], new )*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_param_62748 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _31094 = (object)*(((s1_ptr)_2)->base + _param_62748);
        _2 = (object)SEQ_PTR(_31094);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _31095 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _31095 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _31094 = NOVALUE;
        RefDS(_old_62751);
        Ref(_31095);
        RefDS(_new_62756);
        _31096 = _15find_replace(_old_62751, _31095, _new_62756, 0);
        _31095 = NOVALUE;
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
        *(intptr_t *)_2 = _31096;
        if( _1 != _31096 ){
            DeRef(_1);
        }
        _31096 = NOVALUE;
        _31092 = NOVALUE;
LC: 
        DeRef(_old_62751);
        _old_62751 = NOVALUE;
        DeRefi(_new_62756);
        _new_62756 = NOVALUE;
        DeRef(_d_62738);
        _d_62738 = NOVALUE;

        /** fwdref.e:466			end for*/
        _i_62735 = _i_62735 + 1;
        goto LA; // [411] 309
LB: 
        ;
    }

    /** fwdref.e:467			resolved_reference( ref )*/
    _41resolved_reference(_ref_62660);
L9: 

    /** fwdref.e:469		reset_code()*/
    _41reset_code();

    /** fwdref.e:470	end procedure*/
    DeRef(_tok_62659);
    DeRef(_fr_62661);
    DeRef(_31054);
    _31054 = NOVALUE;
    DeRef(_31049);
    _31049 = NOVALUE;
    _31080 = NOVALUE;
    return;
    ;
}


void _41patch_forward_init_check(object _tok_62772, object _ref_62773)
{
    object _fr_62774 = NOVALUE;
    object _31104 = NOVALUE;
    object _31103 = NOVALUE;
    object _31102 = NOVALUE;
    object _31100 = NOVALUE;
    object _31099 = NOVALUE;
    object _31098 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:474		sequence fr = forward_references[ref]*/
    DeRef(_fr_62774);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62774 = (object)*(((s1_ptr)_2)->base + _ref_62773);
    Ref(_fr_62774);

    /** fwdref.e:475		set_code( ref )*/
    _41set_code(_ref_62773);

    /** fwdref.e:476		if sequence( fr[FR_DATA] ) then*/
    _2 = (object)SEQ_PTR(_fr_62774);
    _31098 = (object)*(((s1_ptr)_2)->base + 12);
    _31099 = IS_SEQUENCE(_31098);
    _31098 = NOVALUE;
    if (_31099 == 0)
    {
        _31099 = NOVALUE;
        goto L1; // [27] 38
    }
    else{
        _31099 = NOVALUE;
    }

    /** fwdref.e:478			resolved_reference( ref )*/
    _41resolved_reference(_ref_62773);
    goto L2; // [35] 85
L1: 

    /** fwdref.e:479		elsif fr[FR_PC] > 0 then*/
    _2 = (object)SEQ_PTR(_fr_62774);
    _31100 = (object)*(((s1_ptr)_2)->base + 5);
    if (binary_op_a(LESSEQ, _31100, 0)){
        _31100 = NOVALUE;
        goto L3; // [44] 78
    }
    _31100 = NOVALUE;

    /** fwdref.e:480			Code[fr[FR_PC]+1] = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_fr_62774);
    _31102 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_31102)) {
        _31103 = _31102 + 1;
        if (_31103 > MAXINT){
            _31103 = NewDouble((eudouble)_31103);
        }
    }
    else
    _31103 = binary_op(PLUS, 1, _31102);
    _31102 = NOVALUE;
    _2 = (object)SEQ_PTR(_tok_62772);
    _31104 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_31104);
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31103))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31103)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _31103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31104;
    if( _1 != _31104 ){
        DeRef(_1);
    }
    _31104 = NOVALUE;

    /** fwdref.e:481			resolved_reference( ref )*/
    _41resolved_reference(_ref_62773);
    goto L2; // [75] 85
L3: 

    /** fwdref.e:483			forward_error( tok, ref )*/
    Ref(_tok_62772);
    _41forward_error(_tok_62772, _ref_62773);
L2: 

    /** fwdref.e:485		reset_code()*/
    _41reset_code();

    /** fwdref.e:486	end procedure*/
    DeRef(_tok_62772);
    DeRef(_fr_62774);
    DeRef(_31103);
    _31103 = NOVALUE;
    return;
    ;
}


object _41expected_name(object _id_62791)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_id_62791)) {
        _1 = (object)(DBL_PTR(_id_62791)->dbl);
        DeRefDS(_id_62791);
        _id_62791 = _1;
    }

    /** fwdref.e:491		switch id with fallthru do*/
    _0 = _id_62791;
    switch ( _0 ){ 

        /** fwdref.e:492			case PROC then*/
        case 27:
        case 195:

        /** fwdref.e:494				return "a procedure"*/
        RefDS(_26175);
        return _26175;

        /** fwdref.e:496			case FUNC then*/
        case 501:
        case 196:

        /** fwdref.e:498				return "a function"*/
        RefDS(_26121);
        return _26121;

        /** fwdref.e:500			case VARIABLE then*/
        case -100:

        /** fwdref.e:501				return "a variable, constant or enum"*/
        RefDS(_31107);
        return _31107;

        /** fwdref.e:502			case else*/
        default:

        /** fwdref.e:503				return "something"*/
        RefDS(_31108);
        return _31108;
    ;}    ;
}


void _41patch_forward_type(object _tok_62808, object _ref_62809)
{
    object _fr_62810 = NOVALUE;
    object _syms_62812 = NOVALUE;
    object _31120 = NOVALUE;
    object _31119 = NOVALUE;
    object _31117 = NOVALUE;
    object _31116 = NOVALUE;
    object _31115 = NOVALUE;
    object _31113 = NOVALUE;
    object _31112 = NOVALUE;
    object _31111 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:510		sequence fr = forward_references[ref]*/
    DeRef(_fr_62810);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62810 = (object)*(((s1_ptr)_2)->base + _ref_62809);
    Ref(_fr_62810);

    /** fwdref.e:511		sequence syms = fr[FR_DATA]*/
    DeRef(_syms_62812);
    _2 = (object)SEQ_PTR(_fr_62810);
    _syms_62812 = (object)*(((s1_ptr)_2)->base + 12);
    Ref(_syms_62812);

    /** fwdref.e:512		for i = 2 to length( syms ) do*/
    if (IS_SEQUENCE(_syms_62812)){
            _31111 = SEQ_PTR(_syms_62812)->length;
    }
    else {
        _31111 = 1;
    }
    {
        object _i_62815;
        _i_62815 = 2;
L1: 
        if (_i_62815 > _31111){
            goto L2; // [26] 102
        }

        /** fwdref.e:513			SymTab[syms[i]][S_VTYPE] = tok[T_SYM]*/
        _2 = (object)SEQ_PTR(_syms_62812);
        _31112 = (object)*(((s1_ptr)_2)->base + _i_62815);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31112))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31112)->dbl));
        else
        _3 = (object)(_31112 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_tok_62808);
        _31115 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_31115);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31115;
        if( _1 != _31115 ){
            DeRef(_1);
        }
        _31115 = NOVALUE;
        _31113 = NOVALUE;

        /** fwdref.e:514			if TRANSLATE then*/
        if (_39TRANSLATE_16440 == 0)
        {
            goto L3; // [62] 95
        }
        else{
        }

        /** fwdref.e:515				SymTab[syms[i]][S_GTYPE] = CompileType(tok[T_SYM])*/
        _2 = (object)SEQ_PTR(_syms_62812);
        _31116 = (object)*(((s1_ptr)_2)->base + _i_62815);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31116))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31116)->dbl));
        else
        _3 = (object)(_31116 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_tok_62808);
        _31119 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_31119);
        _31120 = _42CompileType(_31119);
        _31119 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 36);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31120;
        if( _1 != _31120 ){
            DeRef(_1);
        }
        _31120 = NOVALUE;
        _31117 = NOVALUE;
L3: 

        /** fwdref.e:517		end for*/
        _i_62815 = _i_62815 + 1;
        goto L1; // [97] 33
L2: 
        ;
    }

    /** fwdref.e:518		resolved_reference( ref )*/
    _41resolved_reference(_ref_62809);

    /** fwdref.e:519	end procedure*/
    DeRef(_tok_62808);
    DeRef(_fr_62810);
    DeRef(_syms_62812);
    _31112 = NOVALUE;
    _31116 = NOVALUE;
    return;
    ;
}


void _41patch_forward_case(object _tok_62838, object _ref_62839)
{
    object _fr_62840 = NOVALUE;
    object _switch_pc_62842 = NOVALUE;
    object _case_sym_62845 = NOVALUE;
    object _case_values_62874 = NOVALUE;
    object _cx_62879 = NOVALUE;
    object _negative_62887 = NOVALUE;
    object _31158 = NOVALUE;
    object _31157 = NOVALUE;
    object _31156 = NOVALUE;
    object _31155 = NOVALUE;
    object _31154 = NOVALUE;
    object _31153 = NOVALUE;
    object _31151 = NOVALUE;
    object _31149 = NOVALUE;
    object _31148 = NOVALUE;
    object _31146 = NOVALUE;
    object _31145 = NOVALUE;
    object _31142 = NOVALUE;
    object _31140 = NOVALUE;
    object _31139 = NOVALUE;
    object _31138 = NOVALUE;
    object _31137 = NOVALUE;
    object _31136 = NOVALUE;
    object _31135 = NOVALUE;
    object _31134 = NOVALUE;
    object _31133 = NOVALUE;
    object _31132 = NOVALUE;
    object _31130 = NOVALUE;
    object _31129 = NOVALUE;
    object _31128 = NOVALUE;
    object _31127 = NOVALUE;
    object _31125 = NOVALUE;
    object _31123 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:522		sequence fr = forward_references[ref]*/
    DeRef(_fr_62840);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62840 = (object)*(((s1_ptr)_2)->base + _ref_62839);
    Ref(_fr_62840);

    /** fwdref.e:524		integer switch_pc = fr[FR_DATA]*/
    _2 = (object)SEQ_PTR(_fr_62840);
    _switch_pc_62842 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_switch_pc_62842))
    _switch_pc_62842 = (object)DBL_PTR(_switch_pc_62842)->dbl;

    /** fwdref.e:527		if fr[FR_SUBPROG] = TopLevelSub then*/
    _2 = (object)SEQ_PTR(_fr_62840);
    _31123 = (object)*(((s1_ptr)_2)->base + 4);
    if (binary_op_a(NOTEQ, _31123, _39TopLevelSub_16822)){
        _31123 = NOVALUE;
        goto L1; // [27] 48
    }
    _31123 = NOVALUE;

    /** fwdref.e:528			case_sym = Code[switch_pc + 2]*/
    _31125 = _switch_pc_62842 + 2;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _case_sym_62845 = (object)*(((s1_ptr)_2)->base + _31125);
    if (!IS_ATOM_INT(_case_sym_62845)){
        _case_sym_62845 = (object)DBL_PTR(_case_sym_62845)->dbl;
    }
    goto L2; // [45] 77
L1: 

    /** fwdref.e:530			case_sym = SymTab[fr[FR_SUBPROG]][S_CODE][switch_pc + 2]*/
    _2 = (object)SEQ_PTR(_fr_62840);
    _31127 = (object)*(((s1_ptr)_2)->base + 4);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_31127)){
        _31128 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31127)->dbl));
    }
    else{
        _31128 = (object)*(((s1_ptr)_2)->base + _31127);
    }
    _2 = (object)SEQ_PTR(_31128);
    if (!IS_ATOM_INT(_39S_CODE_16482)){
        _31129 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    }
    else{
        _31129 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
    }
    _31128 = NOVALUE;
    _31130 = _switch_pc_62842 + 2;
    _2 = (object)SEQ_PTR(_31129);
    _case_sym_62845 = (object)*(((s1_ptr)_2)->base + _31130);
    if (!IS_ATOM_INT(_case_sym_62845)){
        _case_sym_62845 = (object)DBL_PTR(_case_sym_62845)->dbl;
    }
    _31129 = NOVALUE;
L2: 

    /** fwdref.e:533		if SymTab[tok[T_SYM]][S_FILE_NO] = fr[FR_FILE] and fr[FR_SUBPROG] = TopLevelSub then*/
    _2 = (object)SEQ_PTR(_tok_62838);
    _31132 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_31132)){
        _31133 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31132)->dbl));
    }
    else{
        _31133 = (object)*(((s1_ptr)_2)->base + _31132);
    }
    _2 = (object)SEQ_PTR(_31133);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _31134 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _31134 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _31133 = NOVALUE;
    _2 = (object)SEQ_PTR(_fr_62840);
    _31135 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_ATOM_INT(_31134) && IS_ATOM_INT(_31135)) {
        _31136 = (_31134 == _31135);
    }
    else {
        _31136 = binary_op(EQUALS, _31134, _31135);
    }
    _31134 = NOVALUE;
    _31135 = NOVALUE;
    if (IS_ATOM_INT(_31136)) {
        if (_31136 == 0) {
            goto L3; // [105] 129
        }
    }
    else {
        if (DBL_PTR(_31136)->dbl == 0.0) {
            goto L3; // [105] 129
        }
    }
    _2 = (object)SEQ_PTR(_fr_62840);
    _31138 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_31138)) {
        _31139 = (_31138 == _39TopLevelSub_16822);
    }
    else {
        _31139 = binary_op(EQUALS, _31138, _39TopLevelSub_16822);
    }
    _31138 = NOVALUE;
    if (_31139 == 0) {
        DeRef(_31139);
        _31139 = NOVALUE;
        goto L3; // [120] 129
    }
    else {
        if (!IS_ATOM_INT(_31139) && DBL_PTR(_31139)->dbl == 0.0){
            DeRef(_31139);
            _31139 = NOVALUE;
            goto L3; // [120] 129
        }
        DeRef(_31139);
        _31139 = NOVALUE;
    }
    DeRef(_31139);
    _31139 = NOVALUE;

    /** fwdref.e:534			return*/
    DeRef(_tok_62838);
    DeRef(_fr_62840);
    DeRef(_case_values_62874);
    DeRef(_31136);
    _31136 = NOVALUE;
    DeRef(_31130);
    _31130 = NOVALUE;
    _31132 = NOVALUE;
    _31127 = NOVALUE;
    DeRef(_31125);
    _31125 = NOVALUE;
    return;
L3: 

    /** fwdref.e:537		sequence case_values = SymTab[case_sym][S_OBJ]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31140 = (object)*(((s1_ptr)_2)->base + _case_sym_62845);
    DeRef(_case_values_62874);
    _2 = (object)SEQ_PTR(_31140);
    _case_values_62874 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_case_values_62874);
    _31140 = NOVALUE;

    /** fwdref.e:539		integer cx = find( { ref }, case_values )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ref_62839;
    _31142 = MAKE_SEQ(_1);
    _cx_62879 = find_from(_31142, _case_values_62874, 1);
    DeRefDS(_31142);
    _31142 = NOVALUE;

    /** fwdref.e:540		if not cx then*/
    if (_cx_62879 != 0)
    goto L4; // [160] 178

    /** fwdref.e:541			cx = find( { -ref }, case_values )*/
    if ((uintptr_t)_ref_62839 == (uintptr_t)HIGH_BITS){
        _31145 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31145 = - _ref_62839;
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31145;
    _31146 = MAKE_SEQ(_1);
    _31145 = NOVALUE;
    _cx_62879 = find_from(_31146, _case_values_62874, 1);
    DeRefDS(_31146);
    _31146 = NOVALUE;
L4: 

    /** fwdref.e:544	 	ifdef DEBUG then	*/

    /** fwdref.e:551		integer negative = 0*/
    _negative_62887 = 0;

    /** fwdref.e:552		if case_values[cx][1] < 0 then*/
    _2 = (object)SEQ_PTR(_case_values_62874);
    _31148 = (object)*(((s1_ptr)_2)->base + _cx_62879);
    _2 = (object)SEQ_PTR(_31148);
    _31149 = (object)*(((s1_ptr)_2)->base + 1);
    _31148 = NOVALUE;
    if (binary_op_a(GREATEREQ, _31149, 0)){
        _31149 = NOVALUE;
        goto L5; // [195] 224
    }
    _31149 = NOVALUE;

    /** fwdref.e:553			negative = 1*/
    _negative_62887 = 1;

    /** fwdref.e:554			case_values[cx][1] *= -1*/
    _2 = (object)SEQ_PTR(_case_values_62874);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62874 = MAKE_SEQ(_2);
    }
    _3 = (object)(_cx_62879 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31153 = (object)*(((s1_ptr)_2)->base + 1);
    _31151 = NOVALUE;
    if (IS_ATOM_INT(_31153)) {
        if (_31153 == (short)_31153){
            _31154 = _31153 * -1;
        }
        else{
            _31154 = NewDouble(_31153 * (eudouble)-1);
        }
    }
    else {
        _31154 = binary_op(MULTIPLY, _31153, -1);
    }
    _31153 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31154;
    if( _1 != _31154 ){
        DeRef(_1);
    }
    _31154 = NOVALUE;
    _31151 = NOVALUE;
L5: 

    /** fwdref.e:557		if negative then*/
    if (_negative_62887 == 0)
    {
        goto L6; // [226] 247
    }
    else{
    }

    /** fwdref.e:558			case_values[cx] = - tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62838);
    _31155 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_31155)) {
        if ((uintptr_t)_31155 == (uintptr_t)HIGH_BITS){
            _31156 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _31156 = - _31155;
        }
    }
    else {
        _31156 = unary_op(UMINUS, _31155);
    }
    _31155 = NOVALUE;
    _2 = (object)SEQ_PTR(_case_values_62874);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62874 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62879);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31156;
    if( _1 != _31156 ){
        DeRef(_1);
    }
    _31156 = NOVALUE;
    goto L7; // [244] 260
L6: 

    /** fwdref.e:560			case_values[cx] = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62838);
    _31157 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_31157);
    _2 = (object)SEQ_PTR(_case_values_62874);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62874 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62879);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31157;
    if( _1 != _31157 ){
        DeRef(_1);
    }
    _31157 = NOVALUE;
L7: 

    /** fwdref.e:562		SymTab[case_sym][S_OBJ] = case_values*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_case_sym_62845 + ((s1_ptr)_2)->base);
    RefDS(_case_values_62874);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _case_values_62874;
    DeRef(_1);
    _31158 = NOVALUE;

    /** fwdref.e:563		resolved_reference( ref )*/
    _41resolved_reference(_ref_62839);

    /** fwdref.e:564	end procedure*/
    DeRef(_tok_62838);
    DeRef(_fr_62840);
    DeRefDS(_case_values_62874);
    DeRef(_31136);
    _31136 = NOVALUE;
    DeRef(_31130);
    _31130 = NOVALUE;
    _31132 = NOVALUE;
    _31127 = NOVALUE;
    DeRef(_31125);
    _31125 = NOVALUE;
    return;
    ;
}


void _41patch_forward_type_check(object _tok_62910, object _ref_62911)
{
    object _fr_62912 = NOVALUE;
    object _which_type_62915 = NOVALUE;
    object _var_62917 = NOVALUE;
    object _pc_62950 = NOVALUE;
    object _with_type_check_62952 = NOVALUE;
    object _c_62982 = NOVALUE;
    object _subprog_inlined_insert_code_at_332_62991 = NOVALUE;
    object _code_inlined_insert_code_at_329_62990 = NOVALUE;
    object _subprog_inlined_insert_code_at_415_63007 = NOVALUE;
    object _code_inlined_insert_code_at_412_63006 = NOVALUE;
    object _subprog_inlined_insert_code_at_477_63017 = NOVALUE;
    object _code_inlined_insert_code_at_474_63016 = NOVALUE;
    object _subprog_inlined_insert_code_at_539_63027 = NOVALUE;
    object _code_inlined_insert_code_at_536_63026 = NOVALUE;
    object _start_pc_63034 = NOVALUE;
    object _subprog_inlined_insert_code_at_647_63051 = NOVALUE;
    object _code_inlined_insert_code_at_644_63050 = NOVALUE;
    object _c_63054 = NOVALUE;
    object _subprog_inlined_insert_code_at_741_63070 = NOVALUE;
    object _code_inlined_insert_code_at_738_63069 = NOVALUE;
    object _start_pc_63081 = NOVALUE;
    object _subprog_inlined_insert_code_at_886_63101 = NOVALUE;
    object _code_inlined_insert_code_at_883_63100 = NOVALUE;
    object _subprog_inlined_insert_code_at_987_63122 = NOVALUE;
    object _code_inlined_insert_code_at_984_63121 = NOVALUE;
    object _31248 = NOVALUE;
    object _31247 = NOVALUE;
    object _31246 = NOVALUE;
    object _31245 = NOVALUE;
    object _31244 = NOVALUE;
    object _31243 = NOVALUE;
    object _31242 = NOVALUE;
    object _31240 = NOVALUE;
    object _31238 = NOVALUE;
    object _31237 = NOVALUE;
    object _31236 = NOVALUE;
    object _31235 = NOVALUE;
    object _31234 = NOVALUE;
    object _31233 = NOVALUE;
    object _31232 = NOVALUE;
    object _31230 = NOVALUE;
    object _31229 = NOVALUE;
    object _31228 = NOVALUE;
    object _31227 = NOVALUE;
    object _31226 = NOVALUE;
    object _31225 = NOVALUE;
    object _31223 = NOVALUE;
    object _31222 = NOVALUE;
    object _31221 = NOVALUE;
    object _31220 = NOVALUE;
    object _31218 = NOVALUE;
    object _31217 = NOVALUE;
    object _31214 = NOVALUE;
    object _31213 = NOVALUE;
    object _31211 = NOVALUE;
    object _31210 = NOVALUE;
    object _31209 = NOVALUE;
    object _31208 = NOVALUE;
    object _31207 = NOVALUE;
    object _31206 = NOVALUE;
    object _31204 = NOVALUE;
    object _31203 = NOVALUE;
    object _31200 = NOVALUE;
    object _31199 = NOVALUE;
    object _31196 = NOVALUE;
    object _31195 = NOVALUE;
    object _31191 = NOVALUE;
    object _31190 = NOVALUE;
    object _31188 = NOVALUE;
    object _31187 = NOVALUE;
    object _31185 = NOVALUE;
    object _31184 = NOVALUE;
    object _31181 = NOVALUE;
    object _31178 = NOVALUE;
    object _31176 = NOVALUE;
    object _31173 = NOVALUE;
    object _31172 = NOVALUE;
    object _31169 = NOVALUE;
    object _31164 = NOVALUE;
    object _31163 = NOVALUE;
    object _31161 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:568		sequence fr = forward_references[ref]*/
    DeRef(_fr_62912);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _fr_62912 = (object)*(((s1_ptr)_2)->base + _ref_62911);
    Ref(_fr_62912);

    /** fwdref.e:572		if fr[FR_OP] = TYPE_CHECK_FORWARD then*/
    _2 = (object)SEQ_PTR(_fr_62912);
    _31161 = (object)*(((s1_ptr)_2)->base + 10);
    if (binary_op_a(NOTEQ, _31161, 197)){
        _31161 = NOVALUE;
        goto L1; // [21] 86
    }
    _31161 = NOVALUE;

    /** fwdref.e:573			which_type = SymTab[tok[T_SYM]][S_VTYPE]*/
    _2 = (object)SEQ_PTR(_tok_62910);
    _31163 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_31163)){
        _31164 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31163)->dbl));
    }
    else{
        _31164 = (object)*(((s1_ptr)_2)->base + _31163);
    }
    _2 = (object)SEQ_PTR(_31164);
    _which_type_62915 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_which_type_62915)){
        _which_type_62915 = (object)DBL_PTR(_which_type_62915)->dbl;
    }
    _31164 = NOVALUE;

    /** fwdref.e:574			if not which_type then*/
    if (_which_type_62915 != 0)
    goto L2; // [49] 72

    /** fwdref.e:575				which_type = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62910);
    _which_type_62915 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_62915)){
        _which_type_62915 = (object)DBL_PTR(_which_type_62915)->dbl;
    }

    /** fwdref.e:576				var = 0*/
    _var_62917 = 0;
    goto L3; // [69] 144
L2: 

    /** fwdref.e:578				var = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62910);
    _var_62917 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_var_62917)){
        _var_62917 = (object)DBL_PTR(_var_62917)->dbl;
    }
    goto L3; // [83] 144
L1: 

    /** fwdref.e:582		elsif fr[FR_OP] = TYPE then*/
    _2 = (object)SEQ_PTR(_fr_62912);
    _31169 = (object)*(((s1_ptr)_2)->base + 10);
    if (binary_op_a(NOTEQ, _31169, 504)){
        _31169 = NOVALUE;
        goto L4; // [94] 118
    }
    _31169 = NOVALUE;

    /** fwdref.e:583			which_type = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_62910);
    _which_type_62915 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_62915)){
        _which_type_62915 = (object)DBL_PTR(_which_type_62915)->dbl;
    }

    /** fwdref.e:584			var = 0*/
    _var_62917 = 0;
    goto L3; // [115] 144
L4: 

    /** fwdref.e:587			prep_forward_error( ref )*/
    _41prep_forward_error(_ref_62911);

    /** fwdref.e:588			InternalErr( 262, { TYPE_CHECK, TYPE_CHECK_FORWARD, fr[FR_OP] })*/
    _2 = (object)SEQ_PTR(_fr_62912);
    _31172 = (object)*(((s1_ptr)_2)->base + 10);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 65;
    ((intptr_t*)_2)[2] = 197;
    Ref(_31172);
    ((intptr_t*)_2)[3] = _31172;
    _31173 = MAKE_SEQ(_1);
    _31172 = NOVALUE;
    _52InternalErr(262, _31173);
    _31173 = NOVALUE;
L3: 

    /** fwdref.e:591		if which_type < 0 then*/
    if (_which_type_62915 >= 0)
    goto L5; // [148] 158

    /** fwdref.e:593			return*/
    DeRef(_tok_62910);
    DeRef(_fr_62912);
    _31163 = NOVALUE;
    return;
L5: 

    /** fwdref.e:596		set_code( ref )*/
    _41set_code(_ref_62911);

    /** fwdref.e:598		integer pc = fr[FR_PC]*/
    _2 = (object)SEQ_PTR(_fr_62912);
    _pc_62950 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62950))
    _pc_62950 = (object)DBL_PTR(_pc_62950)->dbl;

    /** fwdref.e:599		integer with_type_check = Code[pc + 2]*/
    _31176 = _pc_62950 + 2;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _with_type_check_62952 = (object)*(((s1_ptr)_2)->base + _31176);
    if (!IS_ATOM_INT(_with_type_check_62952)){
        _with_type_check_62952 = (object)DBL_PTR(_with_type_check_62952)->dbl;
    }

    /** fwdref.e:601		if Code[pc] != TYPE_CHECK_FORWARD then*/
    _2 = (object)SEQ_PTR(_39Code_16903);
    _31178 = (object)*(((s1_ptr)_2)->base + _pc_62950);
    if (binary_op_a(EQUALS, _31178, 197)){
        _31178 = NOVALUE;
        goto L6; // [193] 204
    }
    _31178 = NOVALUE;

    /** fwdref.e:602			forward_error( tok, ref )*/
    Ref(_tok_62910);
    _41forward_error(_tok_62910, _ref_62911);
L6: 

    /** fwdref.e:604		if not var then*/
    if (_var_62917 != 0)
    goto L7; // [208] 226

    /** fwdref.e:606			var = Code[pc+1]*/
    _31181 = _pc_62950 + 1;
    _2 = (object)SEQ_PTR(_39Code_16903);
    _var_62917 = (object)*(((s1_ptr)_2)->base + _31181);
    if (!IS_ATOM_INT(_var_62917)){
        _var_62917 = (object)DBL_PTR(_var_62917)->dbl;
    }
L7: 

    /** fwdref.e:609		if var < 0 then*/
    if (_var_62917 >= 0)
    goto L8; // [228] 238

    /** fwdref.e:611			return*/
    DeRef(_tok_62910);
    DeRef(_fr_62912);
    DeRef(_31181);
    _31181 = NOVALUE;
    DeRef(_31176);
    _31176 = NOVALUE;
    _31163 = NOVALUE;
    return;
L8: 

    /** fwdref.e:615		replace_code( {}, pc, pc + 2, fr[FR_SUBPROG])*/
    _31184 = _pc_62950 + 2;
    if ((object)((uintptr_t)_31184 + (uintptr_t)HIGH_BITS) >= 0){
        _31184 = NewDouble((eudouble)_31184);
    }
    _2 = (object)SEQ_PTR(_fr_62912);
    _31185 = (object)*(((s1_ptr)_2)->base + 4);
    RefDS(_21928);
    Ref(_31185);
    _41replace_code(_21928, _pc_62950, _31184, _31185);
    _31184 = NOVALUE;
    _31185 = NOVALUE;

    /** fwdref.e:617		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L9; // [258] 364
    }
    else{
    }

    /** fwdref.e:618			if with_type_check then*/
    if (_with_type_check_62952 == 0)
    {
        goto LA; // [263] 771
    }
    else{
    }

    /** fwdref.e:619				if which_type != object_type then*/
    if (_which_type_62915 == _56object_type_46258)
    goto LA; // [270] 771

    /** fwdref.e:620					if SymTab[which_type][S_EFFECT] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31187 = (object)*(((s1_ptr)_2)->base + _which_type_62915);
    _2 = (object)SEQ_PTR(_31187);
    _31188 = (object)*(((s1_ptr)_2)->base + 23);
    _31187 = NOVALUE;
    if (_31188 == 0) {
        _31188 = NOVALUE;
        goto LB; // [288] 357
    }
    else {
        if (!IS_ATOM_INT(_31188) && DBL_PTR(_31188)->dbl == 0.0){
            _31188 = NOVALUE;
            goto LB; // [288] 357
        }
        _31188 = NOVALUE;
    }
    _31188 = NOVALUE;

    /** fwdref.e:622						integer c = NewTempSym()*/
    _c_62982 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_c_62982)) {
        _1 = (object)(DBL_PTR(_c_62982)->dbl);
        DeRefDS(_c_62982);
        _c_62982 = _1;
    }

    /** fwdref.e:623						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_62915;
    ((intptr_t*)_2)[3] = _var_62917;
    ((intptr_t*)_2)[4] = _c_62982;
    ((intptr_t*)_2)[5] = 65;
    _31190 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31191 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_329_62990);
    _code_inlined_insert_code_at_329_62990 = _31190;
    _31190 = NOVALUE;
    Ref(_31191);
    DeRef(_subprog_inlined_insert_code_at_332_62991);
    _subprog_inlined_insert_code_at_332_62991 = _31191;
    _31191 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_332_62991)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_332_62991)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_332_62991);
        _subprog_inlined_insert_code_at_332_62991 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_332_62991;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_329_62990);
    _67insert_code(_code_inlined_insert_code_at_329_62990, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto LC; // [345] 348
LC: 
    DeRefi(_code_inlined_insert_code_at_329_62990);
    _code_inlined_insert_code_at_329_62990 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_332_62991);
    _subprog_inlined_insert_code_at_332_62991 = NOVALUE;

    /** fwdref.e:624						pc += 5*/
    _pc_62950 = _pc_62950 + 5;
LB: 
    goto LA; // [361] 771
L9: 

    /** fwdref.e:630			if with_type_check then*/
    if (_with_type_check_62952 == 0)
    {
        goto LD; // [366] 770
    }
    else{
    }

    /** fwdref.e:632				if which_type = object_type then*/
    if (_which_type_62915 != _56object_type_46258)
    goto LE; // [373] 380
    goto LF; // [377] 769
LE: 

    /** fwdref.e:636					if which_type = integer_type then*/
    if (_which_type_62915 != _56integer_type_46264)
    goto L10; // [384] 442

    /** fwdref.e:637						insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62917;
    _31195 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31196 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_412_63006);
    _code_inlined_insert_code_at_412_63006 = _31195;
    _31195 = NOVALUE;
    Ref(_31196);
    DeRef(_subprog_inlined_insert_code_at_415_63007);
    _subprog_inlined_insert_code_at_415_63007 = _31196;
    _31196 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_415_63007)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_415_63007)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_415_63007);
        _subprog_inlined_insert_code_at_415_63007 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_415_63007;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_412_63006);
    _67insert_code(_code_inlined_insert_code_at_412_63006, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L11; // [428] 431
L11: 
    DeRefi(_code_inlined_insert_code_at_412_63006);
    _code_inlined_insert_code_at_412_63006 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_415_63007);
    _subprog_inlined_insert_code_at_415_63007 = NOVALUE;

    /** fwdref.e:638						pc += 2*/
    _pc_62950 = _pc_62950 + 2;
    goto L12; // [439] 768
L10: 

    /** fwdref.e:640					elsif which_type = sequence_type then*/
    if (_which_type_62915 != _56sequence_type_46262)
    goto L13; // [446] 504

    /** fwdref.e:641						insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG])*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_62917;
    _31199 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31200 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_474_63016);
    _code_inlined_insert_code_at_474_63016 = _31199;
    _31199 = NOVALUE;
    Ref(_31200);
    DeRef(_subprog_inlined_insert_code_at_477_63017);
    _subprog_inlined_insert_code_at_477_63017 = _31200;
    _31200 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_477_63017)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_477_63017)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_477_63017);
        _subprog_inlined_insert_code_at_477_63017 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_477_63017;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_474_63016);
    _67insert_code(_code_inlined_insert_code_at_474_63016, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L14; // [490] 493
L14: 
    DeRefi(_code_inlined_insert_code_at_474_63016);
    _code_inlined_insert_code_at_474_63016 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_477_63017);
    _subprog_inlined_insert_code_at_477_63017 = NOVALUE;

    /** fwdref.e:642						pc += 2*/
    _pc_62950 = _pc_62950 + 2;
    goto L12; // [501] 768
L13: 

    /** fwdref.e:644					elsif which_type = atom_type then*/
    if (_which_type_62915 != _56atom_type_46260)
    goto L15; // [508] 566

    /** fwdref.e:645						insert_code( { ATOM_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 101;
    ((intptr_t *)_2)[2] = _var_62917;
    _31203 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31204 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_536_63026);
    _code_inlined_insert_code_at_536_63026 = _31203;
    _31203 = NOVALUE;
    Ref(_31204);
    DeRef(_subprog_inlined_insert_code_at_539_63027);
    _subprog_inlined_insert_code_at_539_63027 = _31204;
    _31204 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_539_63027)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_539_63027)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_539_63027);
        _subprog_inlined_insert_code_at_539_63027 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_539_63027;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_536_63026);
    _67insert_code(_code_inlined_insert_code_at_536_63026, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L16; // [552] 555
L16: 
    DeRefi(_code_inlined_insert_code_at_536_63026);
    _code_inlined_insert_code_at_536_63026 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_539_63027);
    _subprog_inlined_insert_code_at_539_63027 = NOVALUE;

    /** fwdref.e:646						pc += 2*/
    _pc_62950 = _pc_62950 + 2;
    goto L12; // [563] 768
L15: 

    /** fwdref.e:648					elsif SymTab[which_type][S_NEXT] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31206 = (object)*(((s1_ptr)_2)->base + _which_type_62915);
    _2 = (object)SEQ_PTR(_31206);
    _31207 = (object)*(((s1_ptr)_2)->base + 2);
    _31206 = NOVALUE;
    if (_31207 == 0) {
        _31207 = NOVALUE;
        goto L17; // [580] 765
    }
    else {
        if (!IS_ATOM_INT(_31207) && DBL_PTR(_31207)->dbl == 0.0){
            _31207 = NOVALUE;
            goto L17; // [580] 765
        }
        _31207 = NOVALUE;
    }
    _31207 = NOVALUE;

    /** fwdref.e:649						integer start_pc = pc*/
    _start_pc_63034 = _pc_62950;

    /** fwdref.e:652						if SymTab[SymTab[which_type][S_NEXT]][S_VTYPE] = integer_type then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31208 = (object)*(((s1_ptr)_2)->base + _which_type_62915);
    _2 = (object)SEQ_PTR(_31208);
    _31209 = (object)*(((s1_ptr)_2)->base + 2);
    _31208 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_31209)){
        _31210 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31209)->dbl));
    }
    else{
        _31210 = (object)*(((s1_ptr)_2)->base + _31209);
    }
    _2 = (object)SEQ_PTR(_31210);
    _31211 = (object)*(((s1_ptr)_2)->base + 15);
    _31210 = NOVALUE;
    if (binary_op_a(NOTEQ, _31211, _56integer_type_46264)){
        _31211 = NOVALUE;
        goto L18; // [616] 672
    }
    _31211 = NOVALUE;

    /** fwdref.e:654							insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62917;
    _31213 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31214 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_644_63050);
    _code_inlined_insert_code_at_644_63050 = _31213;
    _31213 = NOVALUE;
    Ref(_31214);
    DeRef(_subprog_inlined_insert_code_at_647_63051);
    _subprog_inlined_insert_code_at_647_63051 = _31214;
    _31214 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_647_63051)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_647_63051)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_647_63051);
        _subprog_inlined_insert_code_at_647_63051 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_647_63051;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_644_63050);
    _67insert_code(_code_inlined_insert_code_at_644_63050, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L19; // [660] 663
L19: 
    DeRefi(_code_inlined_insert_code_at_644_63050);
    _code_inlined_insert_code_at_644_63050 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_647_63051);
    _subprog_inlined_insert_code_at_647_63051 = NOVALUE;

    /** fwdref.e:656							pc += 2*/
    _pc_62950 = _pc_62950 + 2;
L18: 

    /** fwdref.e:658						symtab_index c = NewTempSym()*/
    _c_63054 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_c_63054)) {
        _1 = (object)(DBL_PTR(_c_63054)->dbl);
        DeRefDS(_c_63054);
        _c_63054 = _1;
    }

    /** fwdref.e:659						SymTab[fr[FR_SUBPROG]][S_STACK_SPACE] += 1*/
    _2 = (object)SEQ_PTR(_fr_62912);
    _31217 = (object)*(((s1_ptr)_2)->base + 4);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31217))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31217)->dbl));
    else
    _3 = (object)(_31217 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
        _31220 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    }
    else{
        _31220 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    }
    _31218 = NOVALUE;
    if (IS_ATOM_INT(_31220)) {
        _31221 = _31220 + 1;
        if (_31221 > MAXINT){
            _31221 = NewDouble((eudouble)_31221);
        }
    }
    else
    _31221 = binary_op(PLUS, 1, _31220);
    _31220 = NOVALUE;
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
    *(intptr_t *)_2 = _31221;
    if( _1 != _31221 ){
        DeRef(_1);
    }
    _31221 = NOVALUE;
    _31218 = NOVALUE;

    /** fwdref.e:660						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_62915;
    ((intptr_t*)_2)[3] = _var_62917;
    ((intptr_t*)_2)[4] = _c_63054;
    ((intptr_t*)_2)[5] = 65;
    _31222 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31223 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_738_63069);
    _code_inlined_insert_code_at_738_63069 = _31222;
    _31222 = NOVALUE;
    Ref(_31223);
    DeRef(_subprog_inlined_insert_code_at_741_63070);
    _subprog_inlined_insert_code_at_741_63070 = _31223;
    _31223 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_741_63070)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_741_63070)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_741_63070);
        _subprog_inlined_insert_code_at_741_63070 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_741_63070;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_738_63069);
    _67insert_code(_code_inlined_insert_code_at_738_63069, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L1A; // [753] 756
L1A: 
    DeRefi(_code_inlined_insert_code_at_738_63069);
    _code_inlined_insert_code_at_738_63069 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_741_63070);
    _subprog_inlined_insert_code_at_741_63070 = NOVALUE;

    /** fwdref.e:661						pc += 4*/
    _pc_62950 = _pc_62950 + 4;
L17: 
L12: 
LF: 
LD: 
LA: 

    /** fwdref.e:668		if (TRANSLATE or not with_type_check) and SymTab[which_type][S_NEXT] then*/
    if (_39TRANSLATE_16440 != 0) {
        _31225 = 1;
        goto L1B; // [775] 786
    }
    _31226 = (_with_type_check_62952 == 0);
    _31225 = (_31226 != 0);
L1B: 
    if (_31225 == 0) {
        goto L1C; // [786] 1013
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31228 = (object)*(((s1_ptr)_2)->base + _which_type_62915);
    _2 = (object)SEQ_PTR(_31228);
    _31229 = (object)*(((s1_ptr)_2)->base + 2);
    _31228 = NOVALUE;
    if (_31229 == 0) {
        _31229 = NOVALUE;
        goto L1C; // [803] 1013
    }
    else {
        if (!IS_ATOM_INT(_31229) && DBL_PTR(_31229)->dbl == 0.0){
            _31229 = NOVALUE;
            goto L1C; // [803] 1013
        }
        _31229 = NOVALUE;
    }
    _31229 = NOVALUE;

    /** fwdref.e:669			integer start_pc = pc*/
    _start_pc_63081 = _pc_62950;

    /** fwdref.e:671			if which_type = sequence_type or*/
    _31230 = (_which_type_62915 == _56sequence_type_46262);
    if (_31230 != 0) {
        goto L1D; // [819] 858
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31232 = (object)*(((s1_ptr)_2)->base + _which_type_62915);
    _2 = (object)SEQ_PTR(_31232);
    _31233 = (object)*(((s1_ptr)_2)->base + 2);
    _31232 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_31233)){
        _31234 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31233)->dbl));
    }
    else{
        _31234 = (object)*(((s1_ptr)_2)->base + _31233);
    }
    _2 = (object)SEQ_PTR(_31234);
    _31235 = (object)*(((s1_ptr)_2)->base + 15);
    _31234 = NOVALUE;
    if (IS_ATOM_INT(_31235)) {
        _31236 = (_31235 == _56sequence_type_46262);
    }
    else {
        _31236 = binary_op(EQUALS, _31235, _56sequence_type_46262);
    }
    _31235 = NOVALUE;
    if (_31236 == 0) {
        DeRef(_31236);
        _31236 = NOVALUE;
        goto L1E; // [854] 912
    }
    else {
        if (!IS_ATOM_INT(_31236) && DBL_PTR(_31236)->dbl == 0.0){
            DeRef(_31236);
            _31236 = NOVALUE;
            goto L1E; // [854] 912
        }
        DeRef(_31236);
        _31236 = NOVALUE;
    }
    DeRef(_31236);
    _31236 = NOVALUE;
L1D: 

    /** fwdref.e:674				insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_62917;
    _31237 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31238 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_883_63100);
    _code_inlined_insert_code_at_883_63100 = _31237;
    _31237 = NOVALUE;
    Ref(_31238);
    DeRef(_subprog_inlined_insert_code_at_886_63101);
    _subprog_inlined_insert_code_at_886_63101 = _31238;
    _31238 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_886_63101)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_886_63101)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_886_63101);
        _subprog_inlined_insert_code_at_886_63101 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_886_63101;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_883_63100);
    _67insert_code(_code_inlined_insert_code_at_883_63100, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L1F; // [898] 901
L1F: 
    DeRefi(_code_inlined_insert_code_at_883_63100);
    _code_inlined_insert_code_at_883_63100 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_886_63101);
    _subprog_inlined_insert_code_at_886_63101 = NOVALUE;

    /** fwdref.e:675				pc += 2*/
    _pc_62950 = _pc_62950 + 2;
    goto L20; // [909] 1012
L1E: 

    /** fwdref.e:677			elsif which_type = integer_type or*/
    _31240 = (_which_type_62915 == _56integer_type_46264);
    if (_31240 != 0) {
        goto L21; // [920] 959
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31242 = (object)*(((s1_ptr)_2)->base + _which_type_62915);
    _2 = (object)SEQ_PTR(_31242);
    _31243 = (object)*(((s1_ptr)_2)->base + 2);
    _31242 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_31243)){
        _31244 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31243)->dbl));
    }
    else{
        _31244 = (object)*(((s1_ptr)_2)->base + _31243);
    }
    _2 = (object)SEQ_PTR(_31244);
    _31245 = (object)*(((s1_ptr)_2)->base + 15);
    _31244 = NOVALUE;
    if (IS_ATOM_INT(_31245)) {
        _31246 = (_31245 == _56integer_type_46264);
    }
    else {
        _31246 = binary_op(EQUALS, _31245, _56integer_type_46264);
    }
    _31245 = NOVALUE;
    if (_31246 == 0) {
        DeRef(_31246);
        _31246 = NOVALUE;
        goto L22; // [955] 1011
    }
    else {
        if (!IS_ATOM_INT(_31246) && DBL_PTR(_31246)->dbl == 0.0){
            DeRef(_31246);
            _31246 = NOVALUE;
            goto L22; // [955] 1011
        }
        DeRef(_31246);
        _31246 = NOVALUE;
    }
    DeRef(_31246);
    _31246 = NOVALUE;
L21: 

    /** fwdref.e:680				insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62917;
    _31247 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(_fr_62912);
    _31248 = (object)*(((s1_ptr)_2)->base + 4);
    DeRefi(_code_inlined_insert_code_at_984_63121);
    _code_inlined_insert_code_at_984_63121 = _31247;
    _31247 = NOVALUE;
    Ref(_31248);
    DeRef(_subprog_inlined_insert_code_at_987_63122);
    _subprog_inlined_insert_code_at_987_63122 = _31248;
    _31248 = NOVALUE;
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_987_63122)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_987_63122)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_987_63122);
        _subprog_inlined_insert_code_at_987_63122 = _1;
    }

    /** fwdref.e:82		shifting_sub = subprog*/
    _41shifting_sub_62152 = _subprog_inlined_insert_code_at_987_63122;

    /** fwdref.e:83		shift:insert_code( code, index )*/
    RefDS(_code_inlined_insert_code_at_984_63121);
    _67insert_code(_code_inlined_insert_code_at_984_63121, _pc_62950);

    /** fwdref.e:84		shifting_sub = 0*/
    _41shifting_sub_62152 = 0;

    /** fwdref.e:85	end procedure*/
    goto L23; // [999] 1002
L23: 
    DeRefi(_code_inlined_insert_code_at_984_63121);
    _code_inlined_insert_code_at_984_63121 = NOVALUE;
    DeRef(_subprog_inlined_insert_code_at_987_63122);
    _subprog_inlined_insert_code_at_987_63122 = NOVALUE;

    /** fwdref.e:681				pc += 4*/
    _pc_62950 = _pc_62950 + 4;
L22: 
L20: 
L1C: 

    /** fwdref.e:686		resolved_reference( ref )*/
    _41resolved_reference(_ref_62911);

    /** fwdref.e:687		reset_code()*/
    _41reset_code();

    /** fwdref.e:688	end procedure*/
    DeRef(_tok_62910);
    DeRef(_fr_62912);
    _31217 = NOVALUE;
    _31209 = NOVALUE;
    DeRef(_31181);
    _31181 = NOVALUE;
    DeRef(_31240);
    _31240 = NOVALUE;
    _31233 = NOVALUE;
    DeRef(_31176);
    _31176 = NOVALUE;
    DeRef(_31230);
    _31230 = NOVALUE;
    _31243 = NOVALUE;
    DeRef(_31226);
    _31226 = NOVALUE;
    _31163 = NOVALUE;
    return;
    ;
}


void _41prep_forward_error(object _ref_63126)
{
    object _31256 = NOVALUE;
    object _31254 = NOVALUE;
    object _31252 = NOVALUE;
    object _31250 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_ref_63126)) {
        _1 = (object)(DBL_PTR(_ref_63126)->dbl);
        DeRefDS(_ref_63126);
        _ref_63126 = _1;
    }

    /** fwdref.e:691		ThisLine = forward_references[ref][FR_THISLINE]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _31250 = (object)*(((s1_ptr)_2)->base + _ref_63126);
    DeRef(_52ThisLine_48710);
    _2 = (object)SEQ_PTR(_31250);
    _52ThisLine_48710 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_52ThisLine_48710);
    _31250 = NOVALUE;

    /** fwdref.e:692		bp = forward_references[ref][FR_BP]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _31252 = (object)*(((s1_ptr)_2)->base + _ref_63126);
    _2 = (object)SEQ_PTR(_31252);
    _52bp_48714 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_52bp_48714)){
        _52bp_48714 = (object)DBL_PTR(_52bp_48714)->dbl;
    }
    _31252 = NOVALUE;

    /** fwdref.e:693		line_number = forward_references[ref][FR_LINE]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _31254 = (object)*(((s1_ptr)_2)->base + _ref_63126);
    _2 = (object)SEQ_PTR(_31254);
    _39line_number_16816 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_39line_number_16816)){
        _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
    }
    _31254 = NOVALUE;

    /** fwdref.e:694		current_file_no = forward_references[ref][FR_FILE]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _31256 = (object)*(((s1_ptr)_2)->base + _ref_63126);
    _2 = (object)SEQ_PTR(_31256);
    _39current_file_no_16815 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_39current_file_no_16815)){
        _39current_file_no_16815 = (object)DBL_PTR(_39current_file_no_16815)->dbl;
    }
    _31256 = NOVALUE;

    /** fwdref.e:695	end procedure*/
    return;
    ;
}


void _41forward_error(object _tok_63142, object _ref_63143)
{
    object _31264 = NOVALUE;
    object _31263 = NOVALUE;
    object _31262 = NOVALUE;
    object _31261 = NOVALUE;
    object _31260 = NOVALUE;
    object _31259 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:698		prep_forward_error( ref )*/
    _41prep_forward_error(_ref_63143);

    /** fwdref.e:699		CompileErr(68, { expected_name( forward_references[ref][FR_TYPE] ),*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _31259 = (object)*(((s1_ptr)_2)->base + _ref_63143);
    _2 = (object)SEQ_PTR(_31259);
    _31260 = (object)*(((s1_ptr)_2)->base + 1);
    _31259 = NOVALUE;
    Ref(_31260);
    _31261 = _41expected_name(_31260);
    _31260 = NOVALUE;
    _2 = (object)SEQ_PTR(_tok_63142);
    _31262 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_31262);
    _31263 = _41expected_name(_31262);
    _31262 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _31261;
    ((intptr_t *)_2)[2] = _31263;
    _31264 = MAKE_SEQ(_1);
    _31263 = NOVALUE;
    _31261 = NOVALUE;
    _52CompileErr(68, _31264, 0);
    _31264 = NOVALUE;

    /** fwdref.e:701	end procedure*/
    DeRef(_tok_63142);
    return;
    ;
}


object _41find_reference(object _fr_63155)
{
    object _name_63156 = NOVALUE;
    object _file_63158 = NOVALUE;
    object _ns_file_63160 = NOVALUE;
    object _ix_63161 = NOVALUE;
    object _ns_63165 = NOVALUE;
    object _ns_tok_63169 = NOVALUE;
    object _tok_63181 = NOVALUE;
    object _31276 = NOVALUE;
    object _31273 = NOVALUE;
    object _31271 = NOVALUE;
    object _31269 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:706		sequence name = fr[FR_NAME]*/
    DeRef(_name_63156);
    _2 = (object)SEQ_PTR(_fr_63155);
    _name_63156 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_63156);

    /** fwdref.e:707		integer file  = fr[FR_FILE]*/
    _2 = (object)SEQ_PTR(_fr_63155);
    _file_63158 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_63158))
    _file_63158 = (object)DBL_PTR(_file_63158)->dbl;

    /** fwdref.e:709		integer ns_file = -1*/
    _ns_file_63160 = -1;

    /** fwdref.e:710		integer ix = find( ':', name )*/
    _ix_63161 = find_from(58, _name_63156, 1);

    /** fwdref.e:711		if ix then*/
    if (_ix_63161 == 0)
    {
        goto L1; // [31] 85
    }
    else{
    }

    /** fwdref.e:712			sequence ns = name[1..ix-1]*/
    _31269 = _ix_63161 - 1;
    rhs_slice_target = (object_ptr)&_ns_63165;
    RHS_Slice(_name_63156, 1, _31269);

    /** fwdref.e:713			token ns_tok = keyfind( ns, ns_file, file, 1, fr[FR_HASHVAL] )*/
    _2 = (object)SEQ_PTR(_fr_63155);
    _31271 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_ns_63165);
    Ref(_31271);
    _0 = _ns_tok_63169;
    _ns_tok_63169 = _56keyfind(_ns_63165, -1, _file_63158, 1, _31271);
    DeRef(_0);
    _31271 = NOVALUE;

    /** fwdref.e:714			if ns_tok[T_ID] != NAMESPACE then*/
    _2 = (object)SEQ_PTR(_ns_tok_63169);
    _31273 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _31273, 523)){
        _31273 = NOVALUE;
        goto L2; // [69] 80
    }
    _31273 = NOVALUE;

    /** fwdref.e:715				return ns_tok*/
    DeRefDS(_ns_63165);
    DeRefDS(_fr_63155);
    DeRefDS(_name_63156);
    DeRef(_tok_63181);
    _31269 = NOVALUE;
    return _ns_tok_63169;
L2: 
    DeRef(_ns_63165);
    _ns_63165 = NOVALUE;
    DeRef(_ns_tok_63169);
    _ns_tok_63169 = NOVALUE;
    goto L3; // [82] 92
L1: 

    /** fwdref.e:718			ns_file = fr[FR_QUALIFIED]*/
    _2 = (object)SEQ_PTR(_fr_63155);
    _ns_file_63160 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_ns_file_63160))
    _ns_file_63160 = (object)DBL_PTR(_ns_file_63160)->dbl;
L3: 

    /** fwdref.e:721		No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** fwdref.e:722		object tok = keyfind( name, ns_file, file, , fr[FR_HASHVAL] )*/
    _2 = (object)SEQ_PTR(_fr_63155);
    _31276 = (object)*(((s1_ptr)_2)->base + 11);
    RefDS(_name_63156);
    Ref(_31276);
    _0 = _tok_63181;
    _tok_63181 = _56keyfind(_name_63156, _ns_file_63160, _file_63158, 0, _31276);
    DeRef(_0);
    _31276 = NOVALUE;

    /** fwdref.e:723		No_new_entry = 0*/
    _56No_new_entry_47455 = 0;

    /** fwdref.e:724		return tok*/
    DeRefDS(_fr_63155);
    DeRefDS(_name_63156);
    DeRef(_31269);
    _31269 = NOVALUE;
    return _tok_63181;
    ;
}


void _41register_forward_type(object _sym_63189, object _ref_63190)
{
    object _31283 = NOVALUE;
    object _31282 = NOVALUE;
    object _31280 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:729		if ref < 0 then*/
    if (_ref_63190 >= 0)
    goto L1; // [7] 19

    /** fwdref.e:730			ref = -ref*/
    _ref_63190 = - _ref_63190;
L1: 

    /** fwdref.e:732		forward_references[ref][FR_DATA] &= sym*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63190 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31282 = (object)*(((s1_ptr)_2)->base + 12);
    _31280 = NOVALUE;
    if (IS_SEQUENCE(_31282) && IS_ATOM(_sym_63189)) {
        Append(&_31283, _31282, _sym_63189);
    }
    else if (IS_ATOM(_31282) && IS_SEQUENCE(_sym_63189)) {
    }
    else {
        Concat((object_ptr)&_31283, _31282, _sym_63189);
        _31282 = NOVALUE;
    }
    _31282 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31283;
    if( _1 != _31283 ){
        DeRef(_1);
    }
    _31283 = NOVALUE;
    _31280 = NOVALUE;

    /** fwdref.e:733	end procedure*/
    return;
    ;
}


object _41new_forward_reference(object _fwd_op_63220, object _sym_63222, object _op_63223)
{
    object _ref_63224 = NOVALUE;
    object _len_63225 = NOVALUE;
    object _hashval_63255 = NOVALUE;
    object _default_sym_63330 = NOVALUE;
    object _param_63333 = NOVALUE;
    object _set_data_2__tmp_at578_63350 = NOVALUE;
    object _set_data_1__tmp_at578_63349 = NOVALUE;
    object _data_inlined_set_data_at_575_63348 = NOVALUE;
    object _31369 = NOVALUE;
    object _31368 = NOVALUE;
    object _31367 = NOVALUE;
    object _31364 = NOVALUE;
    object _31362 = NOVALUE;
    object _31361 = NOVALUE;
    object _31359 = NOVALUE;
    object _31358 = NOVALUE;
    object _31357 = NOVALUE;
    object _31355 = NOVALUE;
    object _31353 = NOVALUE;
    object _31351 = NOVALUE;
    object _31348 = NOVALUE;
    object _31347 = NOVALUE;
    object _31345 = NOVALUE;
    object _31343 = NOVALUE;
    object _31341 = NOVALUE;
    object _31339 = NOVALUE;
    object _31338 = NOVALUE;
    object _31337 = NOVALUE;
    object _31335 = NOVALUE;
    object _31332 = NOVALUE;
    object _31330 = NOVALUE;
    object _31328 = NOVALUE;
    object _31327 = NOVALUE;
    object _31326 = NOVALUE;
    object _31325 = NOVALUE;
    object _31323 = NOVALUE;
    object _31320 = NOVALUE;
    object _31319 = NOVALUE;
    object _31318 = NOVALUE;
    object _31316 = NOVALUE;
    object _31315 = NOVALUE;
    object _31314 = NOVALUE;
    object _31313 = NOVALUE;
    object _31311 = NOVALUE;
    object _31310 = NOVALUE;
    object _31309 = NOVALUE;
    object _31308 = NOVALUE;
    object _31306 = NOVALUE;
    object _31303 = NOVALUE;
    object _31302 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_sym_63222)) {
        _1 = (object)(DBL_PTR(_sym_63222)->dbl);
        DeRefDS(_sym_63222);
        _sym_63222 = _1;
    }

    /** fwdref.e:754			len = length( inactive_references )*/
    if (IS_SEQUENCE(_41inactive_references_62127)){
            _len_63225 = SEQ_PTR(_41inactive_references_62127)->length;
    }
    else {
        _len_63225 = 1;
    }

    /** fwdref.e:757		if len then*/
    if (_len_63225 == 0)
    {
        goto L1; // [16] 39
    }
    else{
    }

    /** fwdref.e:758			ref = inactive_references[len]*/
    _2 = (object)SEQ_PTR(_41inactive_references_62127);
    _ref_63224 = (object)*(((s1_ptr)_2)->base + _len_63225);
    if (!IS_ATOM_INT(_ref_63224))
    _ref_63224 = (object)DBL_PTR(_ref_63224)->dbl;

    /** fwdref.e:759			inactive_references = remove( inactive_references, len, len )*/
    {
        s1_ptr assign_space = SEQ_PTR(_41inactive_references_62127);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_len_63225)) ? _len_63225 : (object)(DBL_PTR(_len_63225)->dbl);
        int stop = (IS_ATOM_INT(_len_63225)) ? _len_63225 : (object)(DBL_PTR(_len_63225)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_41inactive_references_62127), start, &_41inactive_references_62127 );
            }
            else Tail(SEQ_PTR(_41inactive_references_62127), stop+1, &_41inactive_references_62127);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_41inactive_references_62127), start, &_41inactive_references_62127);
        }
        else {
            assign_slice_seq = &assign_space;
            _41inactive_references_62127 = Remove_elements(start, stop, (SEQ_PTR(_41inactive_references_62127)->ref == 1));
        }
    }
    goto L2; // [36] 55
L1: 

    /** fwdref.e:761			forward_references &= 0*/
    Append(&_41forward_references_62123, _41forward_references_62123, 0);

    /** fwdref.e:762			ref = length( forward_references )*/
    if (IS_SEQUENCE(_41forward_references_62123)){
            _ref_63224 = SEQ_PTR(_41forward_references_62123)->length;
    }
    else {
        _ref_63224 = 1;
    }
L2: 

    /** fwdref.e:764		forward_references[ref] = repeat( 0, FR_SIZE )*/
    _31302 = Repeat(0, 12);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_63224);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31302;
    if( _1 != _31302 ){
        DeRef(_1);
    }
    _31302 = NOVALUE;

    /** fwdref.e:766		forward_references[ref][FR_TYPE]      = fwd_op*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _fwd_op_63220;
    DeRef(_1);
    _31303 = NOVALUE;

    /** fwdref.e:767		if sym < 0 then*/
    if (_sym_63222 >= 0)
    goto L3; // [84] 143

    /** fwdref.e:768			forward_references[ref][FR_NAME] = forward_references[-sym][FR_NAME]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    if ((uintptr_t)_sym_63222 == (uintptr_t)HIGH_BITS){
        _31308 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31308 = - _sym_63222;
    }
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!IS_ATOM_INT(_31308)){
        _31309 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31308)->dbl));
    }
    else{
        _31309 = (object)*(((s1_ptr)_2)->base + _31308);
    }
    _2 = (object)SEQ_PTR(_31309);
    _31310 = (object)*(((s1_ptr)_2)->base + 2);
    _31309 = NOVALUE;
    Ref(_31310);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31310;
    if( _1 != _31310 ){
        DeRef(_1);
    }
    _31310 = NOVALUE;
    _31306 = NOVALUE;

    /** fwdref.e:769			forward_references[ref][FR_HASHVAL] = forward_references[-sym][FR_HASHVAL]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    if ((uintptr_t)_sym_63222 == (uintptr_t)HIGH_BITS){
        _31313 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31313 = - _sym_63222;
    }
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!IS_ATOM_INT(_31313)){
        _31314 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31313)->dbl));
    }
    else{
        _31314 = (object)*(((s1_ptr)_2)->base + _31313);
    }
    _2 = (object)SEQ_PTR(_31314);
    _31315 = (object)*(((s1_ptr)_2)->base + 11);
    _31314 = NOVALUE;
    Ref(_31315);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31315;
    if( _1 != _31315 ){
        DeRef(_1);
    }
    _31315 = NOVALUE;
    _31311 = NOVALUE;
    goto L4; // [140] 242
L3: 

    /** fwdref.e:771			forward_references[ref][FR_NAME] = SymTab[sym][S_NAME]*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31318 = (object)*(((s1_ptr)_2)->base + _sym_63222);
    _2 = (object)SEQ_PTR(_31318);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _31319 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _31319 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _31318 = NOVALUE;
    Ref(_31319);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31319;
    if( _1 != _31319 ){
        DeRef(_1);
    }
    _31319 = NOVALUE;
    _31316 = NOVALUE;

    /** fwdref.e:772			integer hashval = SymTab[sym][S_HASHVAL]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31320 = (object)*(((s1_ptr)_2)->base + _sym_63222);
    _2 = (object)SEQ_PTR(_31320);
    _hashval_63255 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hashval_63255)){
        _hashval_63255 = (object)DBL_PTR(_hashval_63255)->dbl;
    }
    _31320 = NOVALUE;

    /** fwdref.e:773			if 0 = hashval then*/
    if (0 != _hashval_63255)
    goto L5; // [186] 220

    /** fwdref.e:774				forward_references[ref][FR_HASHVAL] = hashfn( forward_references[ref][FR_NAME] )*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    _31325 = (object)*(((s1_ptr)_2)->base + _ref_63224);
    _2 = (object)SEQ_PTR(_31325);
    _31326 = (object)*(((s1_ptr)_2)->base + 2);
    _31325 = NOVALUE;
    Ref(_31326);
    _31327 = _56hashfn(_31326);
    _31326 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31327;
    if( _1 != _31327 ){
        DeRef(_1);
    }
    _31327 = NOVALUE;
    _31323 = NOVALUE;
    goto L6; // [217] 239
L5: 

    /** fwdref.e:776				forward_references[ref][FR_HASHVAL] = hashval*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_63255;
    DeRef(_1);
    _31328 = NOVALUE;

    /** fwdref.e:777				remove_symbol( sym )*/
    _56remove_symbol(_sym_63222);
L6: 
L4: 

    /** fwdref.e:782		forward_references[ref][FR_FILE]      = current_file_no*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39current_file_no_16815;
    DeRef(_1);
    _31330 = NOVALUE;

    /** fwdref.e:783		forward_references[ref][FR_SUBPROG]   = CurrentSub*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39CurrentSub_16823;
    DeRef(_1);
    _31332 = NOVALUE;

    /** fwdref.e:785		if fwd_op != TYPE then*/
    if (_fwd_op_63220 == 504)
    goto L7; // [276] 303

    /** fwdref.e:786			forward_references[ref][FR_PC]        = length( Code ) + 1*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_39Code_16903)){
            _31337 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _31337 = 1;
    }
    _31338 = _31337 + 1;
    _31337 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31338;
    if( _1 != _31338 ){
        DeRef(_1);
    }
    _31338 = NOVALUE;
    _31335 = NOVALUE;
L7: 

    /** fwdref.e:789		forward_references[ref][FR_LINE]      = fwd_line_number*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39fwd_line_number_16817;
    DeRef(_1);
    _31339 = NOVALUE;

    /** fwdref.e:790		forward_references[ref][FR_THISLINE]  = ForwardLine*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    Ref(_52ForwardLine_48711);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _52ForwardLine_48711;
    DeRef(_1);
    _31341 = NOVALUE;

    /** fwdref.e:791		forward_references[ref][FR_BP]        = forward_bp*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _52forward_bp_48715;
    DeRef(_1);
    _31343 = NOVALUE;

    /** fwdref.e:792		forward_references[ref][FR_QUALIFIED] = get_qualified_fwd()*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _31347 = _63get_qualified_fwd();
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31347;
    if( _1 != _31347 ){
        DeRef(_1);
    }
    _31347 = NOVALUE;
    _31345 = NOVALUE;

    /** fwdref.e:793		forward_references[ref][FR_OP]        = op*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _op_63223;
    DeRef(_1);
    _31348 = NOVALUE;

    /** fwdref.e:795		if op = GOTO then*/
    if (_op_63223 != 188)
    goto L8; // [381] 403

    /** fwdref.e:796			forward_references[ref][FR_DATA] = { sym }*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _sym_63222;
    _31353 = MAKE_SEQ(_1);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31353;
    if( _1 != _31353 ){
        DeRef(_1);
    }
    _31353 = NOVALUE;
    _31351 = NOVALUE;
L8: 

    /** fwdref.e:803		if CurrentSub = TopLevelSub then*/
    if (_39CurrentSub_16823 != _39TopLevelSub_16822)
    goto L9; // [409] 471

    /** fwdref.e:804			if length( toplevel_references ) < current_file_no then*/
    if (IS_SEQUENCE(_41toplevel_references_62126)){
            _31355 = SEQ_PTR(_41toplevel_references_62126)->length;
    }
    else {
        _31355 = 1;
    }
    if (_31355 >= _39current_file_no_16815)
    goto LA; // [422] 450

    /** fwdref.e:805				toplevel_references &= repeat( {}, current_file_no - length( toplevel_references ) )*/
    if (IS_SEQUENCE(_41toplevel_references_62126)){
            _31357 = SEQ_PTR(_41toplevel_references_62126)->length;
    }
    else {
        _31357 = 1;
    }
    _31358 = _39current_file_no_16815 - _31357;
    _31357 = NOVALUE;
    _31359 = Repeat(_21928, _31358);
    _31358 = NOVALUE;
    Concat((object_ptr)&_41toplevel_references_62126, _41toplevel_references_62126, _31359);
    DeRefDS(_31359);
    _31359 = NOVALUE;
LA: 

    /** fwdref.e:807			toplevel_references[current_file_no] &= ref*/
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    _31361 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_31361) && IS_ATOM(_ref_63224)) {
        Append(&_31362, _31361, _ref_63224);
    }
    else if (IS_ATOM(_31361) && IS_SEQUENCE(_ref_63224)) {
    }
    else {
        Concat((object_ptr)&_31362, _31361, _ref_63224);
        _31361 = NOVALUE;
    }
    _31361 = NOVALUE;
    _2 = (object)SEQ_PTR(_41toplevel_references_62126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41toplevel_references_62126 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31362;
    if( _1 != _31362 ){
        DeRef(_1);
    }
    _31362 = NOVALUE;
    goto LB; // [468] 595
L9: 

    /** fwdref.e:809			add_active_reference( ref )*/
    _41add_active_reference(_ref_63224, _39current_file_no_16815);

    /** fwdref.e:811			if Parser_mode = PAM_RECORD then*/
    if (_39Parser_mode_16920 != 1)
    goto LC; // [485] 592

    /** fwdref.e:812				symtab_pointer default_sym = CurrentSub*/
    _default_sym_63330 = _39CurrentSub_16823;

    /** fwdref.e:813				symtab_pointer param = 0*/
    _param_63333 = 0;

    /** fwdref.e:814				while default_sym with entry do*/
    goto LD; // [507] 536
LE: 
    if (_default_sym_63330 == 0)
    {
        goto LF; // [510] 549
    }
    else{
    }

    /** fwdref.e:815					if sym_scope( default_sym ) = SC_PRIVATE then*/
    _31364 = _56sym_scope(_default_sym_63330);
    if (binary_op_a(NOTEQ, _31364, 3)){
        DeRef(_31364);
        _31364 = NOVALUE;
        goto L10; // [521] 533
    }
    DeRef(_31364);
    _31364 = NOVALUE;

    /** fwdref.e:816						param = default_sym*/
    _param_63333 = _default_sym_63330;
L10: 

    /** fwdref.e:818				entry*/
LD: 

    /** fwdref.e:819					default_sym = sym_next( default_sym )*/
    _default_sym_63330 = _56sym_next(_default_sym_63330);
    if (!IS_ATOM_INT(_default_sym_63330)) {
        _1 = (object)(DBL_PTR(_default_sym_63330)->dbl);
        DeRefDS(_default_sym_63330);
        _default_sym_63330 = _1;
    }

    /** fwdref.e:820				end while*/
    goto LE; // [546] 510
LF: 

    /** fwdref.e:821				set_data( ref, {{ PAM_RECORD, param, length( Recorded_sym ) }} )*/
    if (IS_SEQUENCE(_39Recorded_sym_16923)){
            _31367 = SEQ_PTR(_39Recorded_sym_16923)->length;
    }
    else {
        _31367 = 1;
    }
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = _param_63333;
    ((intptr_t*)_2)[3] = _31367;
    _31368 = MAKE_SEQ(_1);
    _31367 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31368;
    _31369 = MAKE_SEQ(_1);
    _31368 = NOVALUE;
    DeRef(_data_inlined_set_data_at_575_63348);
    _data_inlined_set_data_at_575_63348 = _31369;
    _31369 = NOVALUE;

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    _2 = (object)SEQ_PTR(_41forward_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41forward_references_62123 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63224 + ((s1_ptr)_2)->base);
    RefDS(_data_inlined_set_data_at_575_63348);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_inlined_set_data_at_575_63348;
    DeRef(_1);

    /** fwdref.e:187	end procedure*/
    goto L11; // [586] 589
L11: 
    DeRef(_data_inlined_set_data_at_575_63348);
    _data_inlined_set_data_at_575_63348 = NOVALUE;
LC: 
LB: 

    /** fwdref.e:824		fwdref_count += 1*/
    _41fwdref_count_62153 = _41fwdref_count_62153 + 1;

    /** fwdref.e:826		ifdef EUDIS then*/

    /** fwdref.e:839		return ref*/
    DeRef(_31313);
    _31313 = NOVALUE;
    DeRef(_31308);
    _31308 = NOVALUE;
    return _ref_63224;
    ;
}


void _41add_active_reference(object _ref_63354, object _file_no_63355)
{
    object _sp_63369 = NOVALUE;
    object _31393 = NOVALUE;
    object _31392 = NOVALUE;
    object _31390 = NOVALUE;
    object _31389 = NOVALUE;
    object _31388 = NOVALUE;
    object _31386 = NOVALUE;
    object _31385 = NOVALUE;
    object _31384 = NOVALUE;
    object _31381 = NOVALUE;
    object _31379 = NOVALUE;
    object _31378 = NOVALUE;
    object _31377 = NOVALUE;
    object _31375 = NOVALUE;
    object _31374 = NOVALUE;
    object _31373 = NOVALUE;
    object _31371 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** fwdref.e:843		if length( active_references ) < file_no then*/
    if (IS_SEQUENCE(_41active_references_62125)){
            _31371 = SEQ_PTR(_41active_references_62125)->length;
    }
    else {
        _31371 = 1;
    }
    if (_31371 >= _file_no_63355)
    goto L1; // [12] 59

    /** fwdref.e:844			active_references &= repeat( {}, file_no - length( active_references ) )*/
    if (IS_SEQUENCE(_41active_references_62125)){
            _31373 = SEQ_PTR(_41active_references_62125)->length;
    }
    else {
        _31373 = 1;
    }
    _31374 = _file_no_63355 - _31373;
    _31373 = NOVALUE;
    _31375 = Repeat(_21928, _31374);
    _31374 = NOVALUE;
    Concat((object_ptr)&_41active_references_62125, _41active_references_62125, _31375);
    DeRefDS(_31375);
    _31375 = NOVALUE;

    /** fwdref.e:845			active_subprogs   &= repeat( {}, file_no - length( active_subprogs ) )*/
    if (IS_SEQUENCE(_41active_subprogs_62124)){
            _31377 = SEQ_PTR(_41active_subprogs_62124)->length;
    }
    else {
        _31377 = 1;
    }
    _31378 = _file_no_63355 - _31377;
    _31377 = NOVALUE;
    _31379 = Repeat(_21928, _31378);
    _31378 = NOVALUE;
    Concat((object_ptr)&_41active_subprogs_62124, _41active_subprogs_62124, _31379);
    DeRefDS(_31379);
    _31379 = NOVALUE;
L1: 

    /** fwdref.e:847		integer sp = find( CurrentSub, active_subprogs[file_no] )*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _31381 = (object)*(((s1_ptr)_2)->base + _file_no_63355);
    _sp_63369 = find_from(_39CurrentSub_16823, _31381, 1);
    _31381 = NOVALUE;

    /** fwdref.e:848		if not sp then*/
    if (_sp_63369 != 0)
    goto L2; // [76] 127

    /** fwdref.e:849			active_subprogs[file_no] &= CurrentSub*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _31384 = (object)*(((s1_ptr)_2)->base + _file_no_63355);
    if (IS_SEQUENCE(_31384) && IS_ATOM(_39CurrentSub_16823)) {
        Append(&_31385, _31384, _39CurrentSub_16823);
    }
    else if (IS_ATOM(_31384) && IS_SEQUENCE(_39CurrentSub_16823)) {
    }
    else {
        Concat((object_ptr)&_31385, _31384, _39CurrentSub_16823);
        _31384 = NOVALUE;
    }
    _31384 = NOVALUE;
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_subprogs_62124 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63355);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31385;
    if( _1 != _31385 ){
        DeRef(_1);
    }
    _31385 = NOVALUE;

    /** fwdref.e:850			sp = length( active_subprogs[file_no] )*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _31386 = (object)*(((s1_ptr)_2)->base + _file_no_63355);
    if (IS_SEQUENCE(_31386)){
            _sp_63369 = SEQ_PTR(_31386)->length;
    }
    else {
        _sp_63369 = 1;
    }
    _31386 = NOVALUE;

    /** fwdref.e:852			active_references[file_no] = append( active_references[file_no], {} )*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _31388 = (object)*(((s1_ptr)_2)->base + _file_no_63355);
    RefDS(_21928);
    Append(&_31389, _31388, _21928);
    _31388 = NOVALUE;
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_references_62125 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63355);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31389;
    if( _1 != _31389 ){
        DeRef(_1);
    }
    _31389 = NOVALUE;
L2: 

    /** fwdref.e:854		active_references[file_no][sp] &= ref*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _41active_references_62125 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_no_63355 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31392 = (object)*(((s1_ptr)_2)->base + _sp_63369);
    _31390 = NOVALUE;
    if (IS_SEQUENCE(_31392) && IS_ATOM(_ref_63354)) {
        Append(&_31393, _31392, _ref_63354);
    }
    else if (IS_ATOM(_31392) && IS_SEQUENCE(_ref_63354)) {
    }
    else {
        Concat((object_ptr)&_31393, _31392, _ref_63354);
        _31392 = NOVALUE;
    }
    _31392 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_63369);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31393;
    if( _1 != _31393 ){
        DeRef(_1);
    }
    _31393 = NOVALUE;
    _31390 = NOVALUE;

    /** fwdref.e:855	end procedure*/
    _31386 = NOVALUE;
    return;
    ;
}


object _41resolve_file(object _refs_63406, object _report_errors_63407, object _unincluded_ok_63408)
{
    object _errors_63409 = NOVALUE;
    object _ref_63413 = NOVALUE;
    object _fr_63415 = NOVALUE;
    object _tok_63428 = NOVALUE;
    object _code_sub_63436 = NOVALUE;
    object _fr_type_63438 = NOVALUE;
    object _sym_tok_63440 = NOVALUE;
    object _31447 = NOVALUE;
    object _31446 = NOVALUE;
    object _31445 = NOVALUE;
    object _31444 = NOVALUE;
    object _31443 = NOVALUE;
    object _31442 = NOVALUE;
    object _31437 = NOVALUE;
    object _31436 = NOVALUE;
    object _31435 = NOVALUE;
    object _31433 = NOVALUE;
    object _31432 = NOVALUE;
    object _31429 = NOVALUE;
    object _31428 = NOVALUE;
    object _31427 = NOVALUE;
    object _31423 = NOVALUE;
    object _31422 = NOVALUE;
    object _31414 = NOVALUE;
    object _31412 = NOVALUE;
    object _31411 = NOVALUE;
    object _31410 = NOVALUE;
    object _31409 = NOVALUE;
    object _31408 = NOVALUE;
    object _31407 = NOVALUE;
    object _31404 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:864		sequence errors = {}*/
    RefDS(_21928);
    DeRefi(_errors_63409);
    _errors_63409 = _21928;

    /** fwdref.e:865		for ar = length( refs ) to 1 by -1 do*/
    if (IS_SEQUENCE(_refs_63406)){
            _31404 = SEQ_PTR(_refs_63406)->length;
    }
    else {
        _31404 = 1;
    }
    {
        object _ar_63411;
        _ar_63411 = _31404;
L1: 
        if (_ar_63411 < 1){
            goto L2; // [19] 481
        }

        /** fwdref.e:866			integer ref = refs[ar]*/
        _2 = (object)SEQ_PTR(_refs_63406);
        _ref_63413 = (object)*(((s1_ptr)_2)->base + _ar_63411);
        if (!IS_ATOM_INT(_ref_63413))
        _ref_63413 = (object)DBL_PTR(_ref_63413)->dbl;

        /** fwdref.e:868			sequence fr = forward_references[ref]*/
        DeRef(_fr_63415);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        _fr_63415 = (object)*(((s1_ptr)_2)->base + _ref_63413);
        Ref(_fr_63415);

        /** fwdref.e:869			if include_matrix[fr[FR_FILE]][current_file_no] = NOT_INCLUDED and not unincluded_ok then*/
        _2 = (object)SEQ_PTR(_fr_63415);
        _31407 = (object)*(((s1_ptr)_2)->base + 3);
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!IS_ATOM_INT(_31407)){
            _31408 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31407)->dbl));
        }
        else{
            _31408 = (object)*(((s1_ptr)_2)->base + _31407);
        }
        _2 = (object)SEQ_PTR(_31408);
        _31409 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
        _31408 = NOVALUE;
        if (IS_ATOM_INT(_31409)) {
            _31410 = (_31409 == 0);
        }
        else {
            _31410 = binary_op(EQUALS, _31409, 0);
        }
        _31409 = NOVALUE;
        if (IS_ATOM_INT(_31410)) {
            if (_31410 == 0) {
                goto L3; // [66] 84
            }
        }
        else {
            if (DBL_PTR(_31410)->dbl == 0.0) {
                goto L3; // [66] 84
            }
        }
        _31412 = (_unincluded_ok_63408 == 0);
        if (_31412 == 0)
        {
            DeRef(_31412);
            _31412 = NOVALUE;
            goto L3; // [74] 84
        }
        else{
            DeRef(_31412);
            _31412 = NOVALUE;
        }

        /** fwdref.e:870				continue*/
        DeRef(_fr_63415);
        _fr_63415 = NOVALUE;
        DeRef(_tok_63428);
        _tok_63428 = NOVALUE;
        goto L4; // [81] 476
L3: 

        /** fwdref.e:873			token tok = find_reference( fr )*/
        RefDS(_fr_63415);
        _0 = _tok_63428;
        _tok_63428 = _41find_reference(_fr_63415);
        DeRef(_0);

        /** fwdref.e:874			if tok[T_ID] = IGNORED then*/
        _2 = (object)SEQ_PTR(_tok_63428);
        _31414 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _31414, 509)){
            _31414 = NOVALUE;
            goto L5; // [100] 117
        }
        _31414 = NOVALUE;

        /** fwdref.e:875				errors &= ref*/
        Append(&_errors_63409, _errors_63409, _ref_63413);

        /** fwdref.e:876				continue*/
        DeRefDS(_fr_63415);
        _fr_63415 = NOVALUE;
        DeRef(_tok_63428);
        _tok_63428 = NOVALUE;
        goto L4; // [114] 476
L5: 

        /** fwdref.e:880			integer code_sub = fr[FR_SUBPROG]*/
        _2 = (object)SEQ_PTR(_fr_63415);
        _code_sub_63436 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_code_sub_63436))
        _code_sub_63436 = (object)DBL_PTR(_code_sub_63436)->dbl;

        /** fwdref.e:881			integer fr_type  = fr[FR_TYPE]*/
        _2 = (object)SEQ_PTR(_fr_63415);
        _fr_type_63438 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_fr_type_63438))
        _fr_type_63438 = (object)DBL_PTR(_fr_type_63438)->dbl;

        /** fwdref.e:882			integer sym_tok*/

        /** fwdref.e:884			switch fr_type label "fr_type" do*/
        _0 = _fr_type_63438;
        switch ( _0 ){ 

            /** fwdref.e:885				case PROC, FUNC then*/
            case 27:
            case 501:

            /** fwdref.e:887					sym_tok = SymTab[tok[T_SYM]][S_TOKEN]*/
            _2 = (object)SEQ_PTR(_tok_63428);
            _31422 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!IS_ATOM_INT(_31422)){
                _31423 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31422)->dbl));
            }
            else{
                _31423 = (object)*(((s1_ptr)_2)->base + _31422);
            }
            _2 = (object)SEQ_PTR(_31423);
            if (!IS_ATOM_INT(_39S_TOKEN_16475)){
                _sym_tok_63440 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
            }
            else{
                _sym_tok_63440 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
            }
            if (!IS_ATOM_INT(_sym_tok_63440)){
                _sym_tok_63440 = (object)DBL_PTR(_sym_tok_63440)->dbl;
            }
            _31423 = NOVALUE;

            /** fwdref.e:888					if sym_tok = TYPE then*/
            if (_sym_tok_63440 != 504)
            goto L6; // [170] 184

            /** fwdref.e:889						sym_tok = FUNC*/
            _sym_tok_63440 = 501;
L6: 

            /** fwdref.e:891					if sym_tok != fr_type then*/
            if (_sym_tok_63440 == _fr_type_63438)
            goto L7; // [186] 220

            /** fwdref.e:892						if sym_tok != FUNC and fr_type != PROC then*/
            _31427 = (_sym_tok_63440 != 501);
            if (_31427 == 0) {
                goto L8; // [198] 219
            }
            _31429 = (_fr_type_63438 != 27);
            if (_31429 == 0)
            {
                DeRef(_31429);
                _31429 = NOVALUE;
                goto L8; // [209] 219
            }
            else{
                DeRef(_31429);
                _31429 = NOVALUE;
            }

            /** fwdref.e:893							forward_error( tok, ref )*/
            Ref(_tok_63428);
            _41forward_error(_tok_63428, _ref_63413);
L8: 
L7: 

            /** fwdref.e:896					switch sym_tok do*/
            _0 = _sym_tok_63440;
            switch ( _0 ){ 

                /** fwdref.e:897						case PROC, FUNC then*/
                case 27:
                case 501:

                /** fwdref.e:898							patch_forward_call( tok, ref )*/
                Ref(_tok_63428);
                _41patch_forward_call(_tok_63428, _ref_63413);

                /** fwdref.e:899							break "fr_type"*/
                goto L9; // [241] 446
                goto L9; // [243] 446

                /** fwdref.e:901						case else*/
                default:

                /** fwdref.e:902							forward_error( tok, ref )*/
                Ref(_tok_63428);
                _41forward_error(_tok_63428, _ref_63413);
            ;}            goto L9; // [256] 446

            /** fwdref.e:906				case VARIABLE then*/
            case -100:

            /** fwdref.e:907					sym_tok = SymTab[tok[T_SYM]][S_TOKEN]*/
            _2 = (object)SEQ_PTR(_tok_63428);
            _31432 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!IS_ATOM_INT(_31432)){
                _31433 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31432)->dbl));
            }
            else{
                _31433 = (object)*(((s1_ptr)_2)->base + _31432);
            }
            _2 = (object)SEQ_PTR(_31433);
            if (!IS_ATOM_INT(_39S_TOKEN_16475)){
                _sym_tok_63440 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
            }
            else{
                _sym_tok_63440 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
            }
            if (!IS_ATOM_INT(_sym_tok_63440)){
                _sym_tok_63440 = (object)DBL_PTR(_sym_tok_63440)->dbl;
            }
            _31433 = NOVALUE;

            /** fwdref.e:908					if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
            _2 = (object)SEQ_PTR(_tok_63428);
            _31435 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!IS_ATOM_INT(_31435)){
                _31436 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31435)->dbl));
            }
            else{
                _31436 = (object)*(((s1_ptr)_2)->base + _31435);
            }
            _2 = (object)SEQ_PTR(_31436);
            _31437 = (object)*(((s1_ptr)_2)->base + 4);
            _31436 = NOVALUE;
            if (binary_op_a(NOTEQ, _31437, 9)){
                _31437 = NOVALUE;
                goto LA; // [306] 323
            }
            _31437 = NOVALUE;

            /** fwdref.e:909						errors &= ref*/
            Append(&_errors_63409, _errors_63409, _ref_63413);

            /** fwdref.e:910						continue*/
            DeRef(_fr_63415);
            _fr_63415 = NOVALUE;
            DeRef(_tok_63428);
            _tok_63428 = NOVALUE;
            goto L4; // [320] 476
LA: 

            /** fwdref.e:913					switch sym_tok do*/
            _0 = _sym_tok_63440;
            switch ( _0 ){ 

                /** fwdref.e:914						case CONSTANT, ENUM, VARIABLE then*/
                case 417:
                case 427:
                case -100:

                /** fwdref.e:915							patch_forward_variable( tok, ref )*/
                Ref(_tok_63428);
                _41patch_forward_variable(_tok_63428, _ref_63413);

                /** fwdref.e:916							break "fr_type"*/
                goto L9; // [346] 446
                goto L9; // [348] 446

                /** fwdref.e:917						case else*/
                default:

                /** fwdref.e:918							forward_error( tok, ref )*/
                Ref(_tok_63428);
                _41forward_error(_tok_63428, _ref_63413);
            ;}            goto L9; // [361] 446

            /** fwdref.e:921				case TYPE_CHECK then*/
            case 65:

            /** fwdref.e:922					patch_forward_type_check( tok, ref )*/
            Ref(_tok_63428);
            _41patch_forward_type_check(_tok_63428, _ref_63413);
            goto L9; // [373] 446

            /** fwdref.e:924				case GLOBAL_INIT_CHECK then*/
            case 109:

            /** fwdref.e:925					patch_forward_init_check( tok, ref )*/
            Ref(_tok_63428);
            _41patch_forward_init_check(_tok_63428, _ref_63413);
            goto L9; // [385] 446

            /** fwdref.e:927				case CASE then*/
            case 186:

            /** fwdref.e:928					patch_forward_case( tok, ref )*/
            Ref(_tok_63428);
            _41patch_forward_case(_tok_63428, _ref_63413);
            goto L9; // [397] 446

            /** fwdref.e:930				case TYPE then*/
            case 504:

            /** fwdref.e:931					patch_forward_type( tok, ref )*/
            Ref(_tok_63428);
            _41patch_forward_type(_tok_63428, _ref_63413);
            goto L9; // [409] 446

            /** fwdref.e:933				case GOTO then*/
            case 188:

            /** fwdref.e:934					patch_forward_goto( tok, ref )*/
            Ref(_tok_63428);
            _41patch_forward_goto(_tok_63428, _ref_63413);
            goto L9; // [421] 446

            /** fwdref.e:936				case else*/
            default:

            /** fwdref.e:938					InternalErr( 263, {fr[FR_TYPE], fr[FR_NAME]})*/
            _2 = (object)SEQ_PTR(_fr_63415);
            _31442 = (object)*(((s1_ptr)_2)->base + 1);
            _2 = (object)SEQ_PTR(_fr_63415);
            _31443 = (object)*(((s1_ptr)_2)->base + 2);
            Ref(_31443);
            Ref(_31442);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _31442;
            ((intptr_t *)_2)[2] = _31443;
            _31444 = MAKE_SEQ(_1);
            _31443 = NOVALUE;
            _31442 = NOVALUE;
            _52InternalErr(263, _31444);
            _31444 = NOVALUE;
        ;}L9: 

        /** fwdref.e:940			if report_errors and sequence( forward_references[ref] ) then*/
        if (_report_errors_63407 == 0) {
            goto LB; // [448] 472
        }
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        _31446 = (object)*(((s1_ptr)_2)->base + _ref_63413);
        _31447 = IS_SEQUENCE(_31446);
        _31446 = NOVALUE;
        if (_31447 == 0)
        {
            _31447 = NOVALUE;
            goto LB; // [462] 472
        }
        else{
            _31447 = NOVALUE;
        }

        /** fwdref.e:941				errors &= ref*/
        Append(&_errors_63409, _errors_63409, _ref_63413);
LB: 
        DeRef(_fr_63415);
        _fr_63415 = NOVALUE;
        DeRef(_tok_63428);
        _tok_63428 = NOVALUE;

        /** fwdref.e:944		end for*/
L4: 
        _ar_63411 = _ar_63411 + -1;
        goto L1; // [476] 26
L2: 
        ;
    }

    /** fwdref.e:945		return errors*/
    DeRefDS(_refs_63406);
    DeRef(_31427);
    _31427 = NOVALUE;
    _31407 = NOVALUE;
    _31432 = NOVALUE;
    _31435 = NOVALUE;
    DeRef(_31410);
    _31410 = NOVALUE;
    _31422 = NOVALUE;
    return _errors_63409;
    ;
}


object _41file_name_based_symindex_compare(object _si1_63518, object _si2_63519)
{
    object _fn1_63540 = NOVALUE;
    object _fn2_63545 = NOVALUE;
    object _31476 = NOVALUE;
    object _31475 = NOVALUE;
    object _31474 = NOVALUE;
    object _31473 = NOVALUE;
    object _31472 = NOVALUE;
    object _31471 = NOVALUE;
    object _31470 = NOVALUE;
    object _31469 = NOVALUE;
    object _31468 = NOVALUE;
    object _31467 = NOVALUE;
    object _31466 = NOVALUE;
    object _31465 = NOVALUE;
    object _31463 = NOVALUE;
    object _31461 = NOVALUE;
    object _31460 = NOVALUE;
    object _31459 = NOVALUE;
    object _31458 = NOVALUE;
    object _31457 = NOVALUE;
    object _31456 = NOVALUE;
    object _31455 = NOVALUE;
    object _31454 = NOVALUE;
    object _31453 = NOVALUE;
    object _31452 = NOVALUE;
    object _31450 = NOVALUE;
    object _31449 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_si1_63518)) {
        _1 = (object)(DBL_PTR(_si1_63518)->dbl);
        DeRefDS(_si1_63518);
        _si1_63518 = _1;
    }
    if (!IS_ATOM_INT(_si2_63519)) {
        _1 = (object)(DBL_PTR(_si2_63519)->dbl);
        DeRefDS(_si2_63519);
        _si2_63519 = _1;
    }

    /** fwdref.e:949		if not symtab_index(si1) or not symtab_index(si2) then*/
    _31449 = _39symtab_index(_si1_63518);
    if (IS_ATOM_INT(_31449)) {
        _31450 = (_31449 == 0);
    }
    else {
        _31450 = unary_op(NOT, _31449);
    }
    DeRef(_31449);
    _31449 = NOVALUE;
    if (IS_ATOM_INT(_31450)) {
        if (_31450 != 0) {
            goto L1; // [14] 30
        }
    }
    else {
        if (DBL_PTR(_31450)->dbl != 0.0) {
            goto L1; // [14] 30
        }
    }
    _31452 = _39symtab_index(_si2_63519);
    if (IS_ATOM_INT(_31452)) {
        _31453 = (_31452 == 0);
    }
    else {
        _31453 = unary_op(NOT, _31452);
    }
    DeRef(_31452);
    _31452 = NOVALUE;
    if (_31453 == 0) {
        DeRef(_31453);
        _31453 = NOVALUE;
        goto L2; // [26] 37
    }
    else {
        if (!IS_ATOM_INT(_31453) && DBL_PTR(_31453)->dbl == 0.0){
            DeRef(_31453);
            _31453 = NOVALUE;
            goto L2; // [26] 37
        }
        DeRef(_31453);
        _31453 = NOVALUE;
    }
    DeRef(_31453);
    _31453 = NOVALUE;
L1: 

    /** fwdref.e:950			return 1 -- put non symbols last*/
    DeRef(_31450);
    _31450 = NOVALUE;
    return 1;
L2: 

    /** fwdref.e:952		if S_FILE_NO <= length(SymTab[si1]) and S_FILE_NO <= length(SymTab[si2]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31454 = (object)*(((s1_ptr)_2)->base + _si1_63518);
    if (IS_SEQUENCE(_31454)){
            _31455 = SEQ_PTR(_31454)->length;
    }
    else {
        _31455 = 1;
    }
    _31454 = NOVALUE;
    if (IS_ATOM_INT(_39S_FILE_NO_16466)) {
        _31456 = (_39S_FILE_NO_16466 <= _31455);
    }
    else {
        _31456 = binary_op(LESSEQ, _39S_FILE_NO_16466, _31455);
    }
    _31455 = NOVALUE;
    if (IS_ATOM_INT(_31456)) {
        if (_31456 == 0) {
            goto L3; // [54] 186
        }
    }
    else {
        if (DBL_PTR(_31456)->dbl == 0.0) {
            goto L3; // [54] 186
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31458 = (object)*(((s1_ptr)_2)->base + _si2_63519);
    if (IS_SEQUENCE(_31458)){
            _31459 = SEQ_PTR(_31458)->length;
    }
    else {
        _31459 = 1;
    }
    _31458 = NOVALUE;
    if (IS_ATOM_INT(_39S_FILE_NO_16466)) {
        _31460 = (_39S_FILE_NO_16466 <= _31459);
    }
    else {
        _31460 = binary_op(LESSEQ, _39S_FILE_NO_16466, _31459);
    }
    _31459 = NOVALUE;
    if (_31460 == 0) {
        DeRef(_31460);
        _31460 = NOVALUE;
        goto L3; // [74] 186
    }
    else {
        if (!IS_ATOM_INT(_31460) && DBL_PTR(_31460)->dbl == 0.0){
            DeRef(_31460);
            _31460 = NOVALUE;
            goto L3; // [74] 186
        }
        DeRef(_31460);
        _31460 = NOVALUE;
    }
    DeRef(_31460);
    _31460 = NOVALUE;

    /** fwdref.e:953			integer fn1 = SymTab[si1][S_FILE_NO], fn2 = SymTab[si2][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31461 = (object)*(((s1_ptr)_2)->base + _si1_63518);
    _2 = (object)SEQ_PTR(_31461);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _fn1_63540 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _fn1_63540 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_fn1_63540)){
        _fn1_63540 = (object)DBL_PTR(_fn1_63540)->dbl;
    }
    _31461 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31463 = (object)*(((s1_ptr)_2)->base + _si2_63519);
    _2 = (object)SEQ_PTR(_31463);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _fn2_63545 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _fn2_63545 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_fn2_63545)){
        _fn2_63545 = (object)DBL_PTR(_fn2_63545)->dbl;
    }
    _31463 = NOVALUE;

    /** fwdref.e:954			if find(1,{fn1,fn2} > length(known_files) or {fn1,fn2} <= 0) then*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63540;
    ((intptr_t *)_2)[2] = _fn2_63545;
    _31465 = MAKE_SEQ(_1);
    if (IS_SEQUENCE(_36known_files_15405)){
            _31466 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _31466 = 1;
    }
    _31467 = binary_op(GREATER, _31465, _31466);
    DeRefDS(_31465);
    _31465 = NOVALUE;
    _31466 = NOVALUE;
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63540;
    ((intptr_t *)_2)[2] = _fn2_63545;
    _31468 = MAKE_SEQ(_1);
    _31469 = binary_op(LESSEQ, _31468, 0);
    DeRefDS(_31468);
    _31468 = NOVALUE;
    _31470 = binary_op(OR, _31467, _31469);
    DeRefDS(_31467);
    _31467 = NOVALUE;
    DeRefDS(_31469);
    _31469 = NOVALUE;
    _31471 = find_from(1, _31470, 1);
    DeRefDS(_31470);
    _31470 = NOVALUE;
    if (_31471 == 0)
    {
        _31471 = NOVALUE;
        goto L4; // [139] 149
    }
    else{
        _31471 = NOVALUE;
    }

    /** fwdref.e:956				return 1*/
    DeRef(_31450);
    _31450 = NOVALUE;
    _31454 = NOVALUE;
    _31458 = NOVALUE;
    DeRef(_31456);
    _31456 = NOVALUE;
    return 1;
L4: 

    /** fwdref.e:958			return compare(abbreviate_path(known_files[fn1]),*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _31472 = (object)*(((s1_ptr)_2)->base + _fn1_63540);
    Ref(_31472);
    RefDS(_21928);
    _31473 = _16abbreviate_path(_31472, _21928);
    _31472 = NOVALUE;
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _31474 = (object)*(((s1_ptr)_2)->base + _fn2_63545);
    Ref(_31474);
    RefDS(_21928);
    _31475 = _16abbreviate_path(_31474, _21928);
    _31474 = NOVALUE;
    if (IS_ATOM_INT(_31473) && IS_ATOM_INT(_31475)){
        _31476 = (_31473 < _31475) ? -1 : (_31473 > _31475);
    }
    else{
        _31476 = compare(_31473, _31475);
    }
    DeRef(_31473);
    _31473 = NOVALUE;
    DeRef(_31475);
    _31475 = NOVALUE;
    DeRef(_31450);
    _31450 = NOVALUE;
    _31454 = NOVALUE;
    _31458 = NOVALUE;
    DeRef(_31456);
    _31456 = NOVALUE;
    return _31476;
    goto L5; // [183] 193
L3: 

    /** fwdref.e:961			return 1 -- put non-names last*/
    DeRef(_31450);
    _31450 = NOVALUE;
    _31454 = NOVALUE;
    _31458 = NOVALUE;
    DeRef(_31456);
    _31456 = NOVALUE;
    return 1;
L5: 
    ;
}


void _41Resolve_forward_references(object _report_errors_63571)
{
    object _errors_63572 = NOVALUE;
    object _unincluded_ok_63573 = NOVALUE;
    object _msg_63634 = NOVALUE;
    object _errloc_63635 = NOVALUE;
    object _ref_63640 = NOVALUE;
    object _tok_63656 = NOVALUE;
    object _THIS_SCOPE_63658 = NOVALUE;
    object _THESE_GLOBALS_63659 = NOVALUE;
    object _syms_63718 = NOVALUE;
    object _s_63739 = NOVALUE;
    object _31611 = NOVALUE;
    object _31610 = NOVALUE;
    object _31609 = NOVALUE;
    object _31606 = NOVALUE;
    object _31601 = NOVALUE;
    object _31598 = NOVALUE;
    object _31596 = NOVALUE;
    object _31595 = NOVALUE;
    object _31594 = NOVALUE;
    object _31593 = NOVALUE;
    object _31592 = NOVALUE;
    object _31591 = NOVALUE;
    object _31590 = NOVALUE;
    object _31588 = NOVALUE;
    object _31587 = NOVALUE;
    object _31586 = NOVALUE;
    object _31584 = NOVALUE;
    object _31582 = NOVALUE;
    object _31581 = NOVALUE;
    object _31580 = NOVALUE;
    object _31579 = NOVALUE;
    object _31578 = NOVALUE;
    object _31577 = NOVALUE;
    object _31574 = NOVALUE;
    object _31570 = NOVALUE;
    object _31569 = NOVALUE;
    object _31568 = NOVALUE;
    object _31567 = NOVALUE;
    object _31566 = NOVALUE;
    object _31565 = NOVALUE;
    object _31562 = NOVALUE;
    object _31561 = NOVALUE;
    object _31560 = NOVALUE;
    object _31559 = NOVALUE;
    object _31558 = NOVALUE;
    object _31557 = NOVALUE;
    object _31554 = NOVALUE;
    object _31553 = NOVALUE;
    object _31551 = NOVALUE;
    object _31550 = NOVALUE;
    object _31549 = NOVALUE;
    object _31548 = NOVALUE;
    object _31547 = NOVALUE;
    object _31546 = NOVALUE;
    object _31545 = NOVALUE;
    object _31544 = NOVALUE;
    object _31541 = NOVALUE;
    object _31539 = NOVALUE;
    object _31536 = NOVALUE;
    object _31534 = NOVALUE;
    object _31532 = NOVALUE;
    object _31531 = NOVALUE;
    object _31529 = NOVALUE;
    object _31528 = NOVALUE;
    object _31527 = NOVALUE;
    object _31526 = NOVALUE;
    object _31525 = NOVALUE;
    object _31523 = NOVALUE;
    object _31522 = NOVALUE;
    object _31520 = NOVALUE;
    object _31519 = NOVALUE;
    object _31517 = NOVALUE;
    object _31516 = NOVALUE;
    object _31514 = NOVALUE;
    object _31513 = NOVALUE;
    object _31512 = NOVALUE;
    object _31511 = NOVALUE;
    object _31510 = NOVALUE;
    object _31509 = NOVALUE;
    object _31508 = NOVALUE;
    object _31507 = NOVALUE;
    object _31506 = NOVALUE;
    object _31505 = NOVALUE;
    object _31504 = NOVALUE;
    object _31503 = NOVALUE;
    object _31502 = NOVALUE;
    object _31501 = NOVALUE;
    object _31500 = NOVALUE;
    object _31499 = NOVALUE;
    object _31497 = NOVALUE;
    object _31496 = NOVALUE;
    object _31495 = NOVALUE;
    object _31494 = NOVALUE;
    object _31492 = NOVALUE;
    object _31491 = NOVALUE;
    object _31489 = NOVALUE;
    object _31488 = NOVALUE;
    object _31487 = NOVALUE;
    object _31486 = NOVALUE;
    object _31484 = NOVALUE;
    object _31483 = NOVALUE;
    object _31482 = NOVALUE;
    object _31481 = NOVALUE;
    object _31479 = NOVALUE;
    object _31478 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:966		sequence errors = {}*/
    RefDS(_21928);
    DeRef(_errors_63572);
    _errors_63572 = _21928;

    /** fwdref.e:967		integer unincluded_ok = get_resolve_unincluded_globals()*/
    _unincluded_ok_63573 = _56get_resolve_unincluded_globals();
    if (!IS_ATOM_INT(_unincluded_ok_63573)) {
        _1 = (object)(DBL_PTR(_unincluded_ok_63573)->dbl);
        DeRefDS(_unincluded_ok_63573);
        _unincluded_ok_63573 = _1;
    }

    /** fwdref.e:969		if length( active_references ) < length( known_files ) then*/
    if (IS_SEQUENCE(_41active_references_62125)){
            _31478 = SEQ_PTR(_41active_references_62125)->length;
    }
    else {
        _31478 = 1;
    }
    if (IS_SEQUENCE(_36known_files_15405)){
            _31479 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _31479 = 1;
    }
    if (_31478 >= _31479)
    goto L1; // [29] 86

    /** fwdref.e:970			active_references &= repeat( {}, length( known_files ) - length( active_references ) )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _31481 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _31481 = 1;
    }
    if (IS_SEQUENCE(_41active_references_62125)){
            _31482 = SEQ_PTR(_41active_references_62125)->length;
    }
    else {
        _31482 = 1;
    }
    _31483 = _31481 - _31482;
    _31481 = NOVALUE;
    _31482 = NOVALUE;
    _31484 = Repeat(_21928, _31483);
    _31483 = NOVALUE;
    Concat((object_ptr)&_41active_references_62125, _41active_references_62125, _31484);
    DeRefDS(_31484);
    _31484 = NOVALUE;

    /** fwdref.e:971			active_subprogs   &= repeat( {}, length( known_files ) - length( active_subprogs ) )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _31486 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _31486 = 1;
    }
    if (IS_SEQUENCE(_41active_subprogs_62124)){
            _31487 = SEQ_PTR(_41active_subprogs_62124)->length;
    }
    else {
        _31487 = 1;
    }
    _31488 = _31486 - _31487;
    _31486 = NOVALUE;
    _31487 = NOVALUE;
    _31489 = Repeat(_21928, _31488);
    _31488 = NOVALUE;
    Concat((object_ptr)&_41active_subprogs_62124, _41active_subprogs_62124, _31489);
    DeRefDS(_31489);
    _31489 = NOVALUE;
L1: 

    /** fwdref.e:974		if length( toplevel_references ) < length( known_files ) then*/
    if (IS_SEQUENCE(_41toplevel_references_62126)){
            _31491 = SEQ_PTR(_41toplevel_references_62126)->length;
    }
    else {
        _31491 = 1;
    }
    if (IS_SEQUENCE(_36known_files_15405)){
            _31492 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _31492 = 1;
    }
    if (_31491 >= _31492)
    goto L2; // [98] 129

    /** fwdref.e:975			toplevel_references &= repeat( {}, length( known_files ) - length( toplevel_references ) )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _31494 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _31494 = 1;
    }
    if (IS_SEQUENCE(_41toplevel_references_62126)){
            _31495 = SEQ_PTR(_41toplevel_references_62126)->length;
    }
    else {
        _31495 = 1;
    }
    _31496 = _31494 - _31495;
    _31494 = NOVALUE;
    _31495 = NOVALUE;
    _31497 = Repeat(_21928, _31496);
    _31496 = NOVALUE;
    Concat((object_ptr)&_41toplevel_references_62126, _41toplevel_references_62126, _31497);
    DeRefDS(_31497);
    _31497 = NOVALUE;
L2: 

    /** fwdref.e:978		for i = 1 to length( active_subprogs ) do*/
    if (IS_SEQUENCE(_41active_subprogs_62124)){
            _31499 = SEQ_PTR(_41active_subprogs_62124)->length;
    }
    else {
        _31499 = 1;
    }
    {
        object _i_63605;
        _i_63605 = 1;
L3: 
        if (_i_63605 > _31499){
            goto L4; // [136] 280
        }

        /** fwdref.e:979			if (length( active_subprogs[i] ) or length(toplevel_references[i])) */
        _2 = (object)SEQ_PTR(_41active_subprogs_62124);
        _31500 = (object)*(((s1_ptr)_2)->base + _i_63605);
        if (IS_SEQUENCE(_31500)){
                _31501 = SEQ_PTR(_31500)->length;
        }
        else {
            _31501 = 1;
        }
        _31500 = NOVALUE;
        if (_31501 != 0) {
            _31502 = 1;
            goto L5; // [154] 171
        }
        _2 = (object)SEQ_PTR(_41toplevel_references_62126);
        _31503 = (object)*(((s1_ptr)_2)->base + _i_63605);
        if (IS_SEQUENCE(_31503)){
                _31504 = SEQ_PTR(_31503)->length;
        }
        else {
            _31504 = 1;
        }
        _31503 = NOVALUE;
        _31502 = (_31504 != 0);
L5: 
        if (_31502 == 0) {
            goto L6; // [171] 273
        }
        _31506 = (_i_63605 == _39current_file_no_16815);
        if (_31506 != 0) {
            _31507 = 1;
            goto L7; // [181] 195
        }
        _2 = (object)SEQ_PTR(_36finished_files_15407);
        _31508 = (object)*(((s1_ptr)_2)->base + _i_63605);
        _31507 = (_31508 != 0);
L7: 
        if (_31507 != 0) {
            DeRef(_31509);
            _31509 = 1;
            goto L8; // [195] 203
        }
        _31509 = (_unincluded_ok_63573 != 0);
L8: 
        if (_31509 == 0)
        {
            _31509 = NOVALUE;
            goto L6; // [204] 273
        }
        else{
            _31509 = NOVALUE;
        }

        /** fwdref.e:982				for j = length( active_references[i] ) to 1 by -1 do*/
        _2 = (object)SEQ_PTR(_41active_references_62125);
        _31510 = (object)*(((s1_ptr)_2)->base + _i_63605);
        if (IS_SEQUENCE(_31510)){
                _31511 = SEQ_PTR(_31510)->length;
        }
        else {
            _31511 = 1;
        }
        _31510 = NOVALUE;
        {
            object _j_63621;
            _j_63621 = _31511;
L9: 
            if (_j_63621 < 1){
                goto LA; // [218] 254
            }

            /** fwdref.e:983					errors &= resolve_file( active_references[i][j], report_errors, unincluded_ok )*/
            _2 = (object)SEQ_PTR(_41active_references_62125);
            _31512 = (object)*(((s1_ptr)_2)->base + _i_63605);
            _2 = (object)SEQ_PTR(_31512);
            _31513 = (object)*(((s1_ptr)_2)->base + _j_63621);
            _31512 = NOVALUE;
            Ref(_31513);
            _31514 = _41resolve_file(_31513, _report_errors_63571, _unincluded_ok_63573);
            _31513 = NOVALUE;
            if (IS_SEQUENCE(_errors_63572) && IS_ATOM(_31514)) {
                Ref(_31514);
                Append(&_errors_63572, _errors_63572, _31514);
            }
            else if (IS_ATOM(_errors_63572) && IS_SEQUENCE(_31514)) {
            }
            else {
                Concat((object_ptr)&_errors_63572, _errors_63572, _31514);
            }
            DeRef(_31514);
            _31514 = NOVALUE;

            /** fwdref.e:984				end for*/
            _j_63621 = _j_63621 + -1;
            goto L9; // [249] 225
LA: 
            ;
        }

        /** fwdref.e:985				errors &= resolve_file( toplevel_references[i], report_errors, unincluded_ok )*/
        _2 = (object)SEQ_PTR(_41toplevel_references_62126);
        _31516 = (object)*(((s1_ptr)_2)->base + _i_63605);
        Ref(_31516);
        _31517 = _41resolve_file(_31516, _report_errors_63571, _unincluded_ok_63573);
        _31516 = NOVALUE;
        if (IS_SEQUENCE(_errors_63572) && IS_ATOM(_31517)) {
            Ref(_31517);
            Append(&_errors_63572, _errors_63572, _31517);
        }
        else if (IS_ATOM(_errors_63572) && IS_SEQUENCE(_31517)) {
        }
        else {
            Concat((object_ptr)&_errors_63572, _errors_63572, _31517);
        }
        DeRef(_31517);
        _31517 = NOVALUE;
L6: 

        /** fwdref.e:987		end for*/
        _i_63605 = _i_63605 + 1;
        goto L3; // [275] 143
L4: 
        ;
    }

    /** fwdref.e:989		if report_errors and length( errors ) then*/
    if (_report_errors_63571 == 0) {
        goto LB; // [282] 854
    }
    if (IS_SEQUENCE(_errors_63572)){
            _31520 = SEQ_PTR(_errors_63572)->length;
    }
    else {
        _31520 = 1;
    }
    if (_31520 == 0)
    {
        _31520 = NOVALUE;
        goto LB; // [290] 854
    }
    else{
        _31520 = NOVALUE;
    }

    /** fwdref.e:990			sequence msg = ""*/
    RefDS(_21928);
    DeRefi(_msg_63634);
    _msg_63634 = _21928;

    /** fwdref.e:991			sequence errloc = "Internal Error - Unknown Error Message"*/
    RefDS(_31521);
    DeRefi(_errloc_63635);
    _errloc_63635 = _31521;

    /** fwdref.e:993			for e = length(errors) to 1 by -1 do*/
    if (IS_SEQUENCE(_errors_63572)){
            _31522 = SEQ_PTR(_errors_63572)->length;
    }
    else {
        _31522 = 1;
    }
    {
        object _e_63638;
        _e_63638 = _31522;
LC: 
        if (_e_63638 < 1){
            goto LD; // [312] 828
        }

        /** fwdref.e:994				sequence ref = forward_references[errors[e]]*/
        _2 = (object)SEQ_PTR(_errors_63572);
        _31523 = (object)*(((s1_ptr)_2)->base + _e_63638);
        DeRef(_ref_63640);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!IS_ATOM_INT(_31523)){
            _ref_63640 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31523)->dbl));
        }
        else{
            _ref_63640 = (object)*(((s1_ptr)_2)->base + _31523);
        }
        Ref(_ref_63640);

        /** fwdref.e:995				if (ref[FR_TYPE] = TYPE_CHECK and ref[FR_OP] = TYPE_CHECK) or ref[FR_TYPE] = GLOBAL_INIT_CHECK then*/
        _2 = (object)SEQ_PTR(_ref_63640);
        _31525 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_31525)) {
            _31526 = (_31525 == 65);
        }
        else {
            _31526 = binary_op(EQUALS, _31525, 65);
        }
        _31525 = NOVALUE;
        if (IS_ATOM_INT(_31526)) {
            if (_31526 == 0) {
                DeRef(_31527);
                _31527 = 0;
                goto LE; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_31526)->dbl == 0.0) {
                DeRef(_31527);
                _31527 = 0;
                goto LE; // [345] 363
            }
        }
        _2 = (object)SEQ_PTR(_ref_63640);
        _31528 = (object)*(((s1_ptr)_2)->base + 10);
        if (IS_ATOM_INT(_31528)) {
            _31529 = (_31528 == 65);
        }
        else {
            _31529 = binary_op(EQUALS, _31528, 65);
        }
        _31528 = NOVALUE;
        DeRef(_31527);
        if (IS_ATOM_INT(_31529))
        _31527 = (_31529 != 0);
        else
        _31527 = DBL_PTR(_31529)->dbl != 0.0;
LE: 
        if (_31527 != 0) {
            goto LF; // [363] 382
        }
        _2 = (object)SEQ_PTR(_ref_63640);
        _31531 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_31531)) {
            _31532 = (_31531 == 109);
        }
        else {
            _31532 = binary_op(EQUALS, _31531, 109);
        }
        _31531 = NOVALUE;
        if (_31532 == 0) {
            DeRef(_31532);
            _31532 = NOVALUE;
            goto L10; // [378] 391
        }
        else {
            if (!IS_ATOM_INT(_31532) && DBL_PTR(_31532)->dbl == 0.0){
                DeRef(_31532);
                _31532 = NOVALUE;
                goto L10; // [378] 391
            }
            DeRef(_31532);
            _31532 = NOVALUE;
        }
        DeRef(_31532);
        _31532 = NOVALUE;
LF: 

        /** fwdref.e:997					continue*/
        DeRef(_ref_63640);
        _ref_63640 = NOVALUE;
        goto L11; // [386] 823
        goto L12; // [388] 789
L10: 

        /** fwdref.e:1001					object tok = find_reference(ref)*/
        RefDS(_ref_63640);
        _0 = _tok_63656;
        _tok_63656 = _41find_reference(_ref_63640);
        DeRef(_0);

        /** fwdref.e:1002					integer THIS_SCOPE = 3*/
        _THIS_SCOPE_63658 = 3;

        /** fwdref.e:1003					integer THESE_GLOBALS = 4*/
        _THESE_GLOBALS_63659 = 4;

        /** fwdref.e:1004					if tok[T_ID] = IGNORED then*/
        _2 = (object)SEQ_PTR(_tok_63656);
        _31534 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _31534, 509)){
            _31534 = NOVALUE;
            goto L13; // [417] 760
        }
        _31534 = NOVALUE;

        /** fwdref.e:1006						switch tok[THIS_SCOPE] do*/
        _2 = (object)SEQ_PTR(_tok_63656);
        _31536 = (object)*(((s1_ptr)_2)->base + 3);
        if (IS_SEQUENCE(_31536) ){
            goto L14; // [427] 756
        }
        if(!IS_ATOM_INT(_31536)){
            if( (DBL_PTR(_31536)->dbl != (eudouble) ((object) DBL_PTR(_31536)->dbl) ) ){
                goto L14; // [427] 756
            }
            _0 = (object) DBL_PTR(_31536)->dbl;
        }
        else {
            _0 = _31536;
        };
        _31536 = NOVALUE;
        switch ( _0 ){ 

            /** fwdref.e:1007							case SC_UNDEFINED then*/
            case 9:

            /** fwdref.e:1008								if ref[FR_QUALIFIED] != -1 then*/
            _2 = (object)SEQ_PTR(_ref_63640);
            _31539 = (object)*(((s1_ptr)_2)->base + 9);
            if (binary_op_a(EQUALS, _31539, -1)){
                _31539 = NOVALUE;
                goto L15; // [442] 556
            }
            _31539 = NOVALUE;

            /** fwdref.e:1009									if ref[FR_QUALIFIED] > 0 then*/
            _2 = (object)SEQ_PTR(_ref_63640);
            _31541 = (object)*(((s1_ptr)_2)->base + 9);
            if (binary_op_a(LESSEQ, _31541, 0)){
                _31541 = NOVALUE;
                goto L16; // [452] 517
            }
            _31541 = NOVALUE;

            /** fwdref.e:1011										errloc = sprintf("\t\'%s\' (%s:%d) was not declared in \'%s\'.\n", */
            _2 = (object)SEQ_PTR(_ref_63640);
            _31544 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_ref_63640);
            _31545 = (object)*(((s1_ptr)_2)->base + 3);
            _2 = (object)SEQ_PTR(_36known_files_15405);
            if (!IS_ATOM_INT(_31545)){
                _31546 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31545)->dbl));
            }
            else{
                _31546 = (object)*(((s1_ptr)_2)->base + _31545);
            }
            Ref(_31546);
            RefDS(_21928);
            _31547 = _16abbreviate_path(_31546, _21928);
            _31546 = NOVALUE;
            _2 = (object)SEQ_PTR(_ref_63640);
            _31548 = (object)*(((s1_ptr)_2)->base + 6);
            _2 = (object)SEQ_PTR(_ref_63640);
            _31549 = (object)*(((s1_ptr)_2)->base + 9);
            _2 = (object)SEQ_PTR(_36known_files_15405);
            if (!IS_ATOM_INT(_31549)){
                _31550 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31549)->dbl));
            }
            else{
                _31550 = (object)*(((s1_ptr)_2)->base + _31549);
            }
            Ref(_31550);
            RefDS(_21928);
            _31551 = _16abbreviate_path(_31550, _21928);
            _31550 = NOVALUE;
            _31553 = _15find_replace(92, _31551, 47, 0);
            _31551 = NOVALUE;
            _1 = NewS1(4);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31544);
            ((intptr_t*)_2)[1] = _31544;
            ((intptr_t*)_2)[2] = _31547;
            Ref(_31548);
            ((intptr_t*)_2)[3] = _31548;
            ((intptr_t*)_2)[4] = _31553;
            _31554 = MAKE_SEQ(_1);
            _31553 = NOVALUE;
            _31548 = NOVALUE;
            _31547 = NOVALUE;
            _31544 = NOVALUE;
            DeRefi(_errloc_63635);
            _errloc_63635 = EPrintf(-9999999, _31543, _31554);
            DeRefDS(_31554);
            _31554 = NOVALUE;
            goto L17; // [514] 759
L16: 

            /** fwdref.e:1016										errloc = sprintf("\t\'%s\' (%s:%d) is not a builtin.\n", */
            _2 = (object)SEQ_PTR(_ref_63640);
            _31557 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_ref_63640);
            _31558 = (object)*(((s1_ptr)_2)->base + 3);
            _2 = (object)SEQ_PTR(_36known_files_15405);
            if (!IS_ATOM_INT(_31558)){
                _31559 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31558)->dbl));
            }
            else{
                _31559 = (object)*(((s1_ptr)_2)->base + _31558);
            }
            Ref(_31559);
            RefDS(_21928);
            _31560 = _16abbreviate_path(_31559, _21928);
            _31559 = NOVALUE;
            _2 = (object)SEQ_PTR(_ref_63640);
            _31561 = (object)*(((s1_ptr)_2)->base + 6);
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31557);
            ((intptr_t*)_2)[1] = _31557;
            ((intptr_t*)_2)[2] = _31560;
            Ref(_31561);
            ((intptr_t*)_2)[3] = _31561;
            _31562 = MAKE_SEQ(_1);
            _31561 = NOVALUE;
            _31560 = NOVALUE;
            _31557 = NOVALUE;
            DeRefi(_errloc_63635);
            _errloc_63635 = EPrintf(-9999999, _31556, _31562);
            DeRefDS(_31562);
            _31562 = NOVALUE;
            goto L17; // [553] 759
L15: 

            /** fwdref.e:1021									errloc = sprintf("\t\'%s\' (%s:%d) has not been declared.\n", */
            _2 = (object)SEQ_PTR(_ref_63640);
            _31565 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_ref_63640);
            _31566 = (object)*(((s1_ptr)_2)->base + 3);
            _2 = (object)SEQ_PTR(_36known_files_15405);
            if (!IS_ATOM_INT(_31566)){
                _31567 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31566)->dbl));
            }
            else{
                _31567 = (object)*(((s1_ptr)_2)->base + _31566);
            }
            Ref(_31567);
            RefDS(_21928);
            _31568 = _16abbreviate_path(_31567, _21928);
            _31567 = NOVALUE;
            _2 = (object)SEQ_PTR(_ref_63640);
            _31569 = (object)*(((s1_ptr)_2)->base + 6);
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31565);
            ((intptr_t*)_2)[1] = _31565;
            ((intptr_t*)_2)[2] = _31568;
            Ref(_31569);
            ((intptr_t*)_2)[3] = _31569;
            _31570 = MAKE_SEQ(_1);
            _31569 = NOVALUE;
            _31568 = NOVALUE;
            _31565 = NOVALUE;
            DeRefi(_errloc_63635);
            _errloc_63635 = EPrintf(-9999999, _31564, _31570);
            DeRefDS(_31570);
            _31570 = NOVALUE;
            goto L17; // [592] 759

            /** fwdref.e:1024							case SC_MULTIPLY_DEFINED then*/
            case 10:

            /** fwdref.e:1025								sequence syms = tok[THESE_GLOBALS] -- there should be no forward references in here.*/
            DeRef(_syms_63718);
            _2 = (object)SEQ_PTR(_tok_63656);
            _syms_63718 = (object)*(((s1_ptr)_2)->base + _THESE_GLOBALS_63659);
            Ref(_syms_63718);

            /** fwdref.e:1026								syms = custom_sort(routine_id("file_name_based_symindex_compare"), syms,, ASCENDING)*/
            _31574 = CRoutineId(1390, 41, _31573);
            RefDS(_syms_63718);
            RefDS(_21928);
            _0 = _syms_63718;
            _syms_63718 = _23custom_sort(_31574, _syms_63718, _21928, 1);
            DeRefDS(_0);
            _31574 = NOVALUE;

            /** fwdref.e:1027								errloc = sprintf("\t\'%s\' (%s:%d) has been declared more than once.\n", */
            _2 = (object)SEQ_PTR(_ref_63640);
            _31577 = (object)*(((s1_ptr)_2)->base + 2);
            _2 = (object)SEQ_PTR(_ref_63640);
            _31578 = (object)*(((s1_ptr)_2)->base + 3);
            _2 = (object)SEQ_PTR(_36known_files_15405);
            if (!IS_ATOM_INT(_31578)){
                _31579 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31578)->dbl));
            }
            else{
                _31579 = (object)*(((s1_ptr)_2)->base + _31578);
            }
            Ref(_31579);
            RefDS(_21928);
            _31580 = _16abbreviate_path(_31579, _21928);
            _31579 = NOVALUE;
            _2 = (object)SEQ_PTR(_ref_63640);
            _31581 = (object)*(((s1_ptr)_2)->base + 6);
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31577);
            ((intptr_t*)_2)[1] = _31577;
            ((intptr_t*)_2)[2] = _31580;
            Ref(_31581);
            ((intptr_t*)_2)[3] = _31581;
            _31582 = MAKE_SEQ(_1);
            _31581 = NOVALUE;
            _31580 = NOVALUE;
            _31577 = NOVALUE;
            DeRefi(_errloc_63635);
            _errloc_63635 = EPrintf(-9999999, _31576, _31582);
            DeRefDS(_31582);
            _31582 = NOVALUE;

            /** fwdref.e:1029								for si = 1 to length(syms) do*/
            if (IS_SEQUENCE(_syms_63718)){
                    _31584 = SEQ_PTR(_syms_63718)->length;
            }
            else {
                _31584 = 1;
            }
            {
                object _si_63736;
                _si_63736 = 1;
L18: 
                if (_si_63736 > _31584){
                    goto L19; // [664] 750
                }

                /** fwdref.e:1030									symtab_index s = syms[si] */
                _2 = (object)SEQ_PTR(_syms_63718);
                _s_63739 = (object)*(((s1_ptr)_2)->base + _si_63736);
                if (!IS_ATOM_INT(_s_63739)){
                    _s_63739 = (object)DBL_PTR(_s_63739)->dbl;
                }

                /** fwdref.e:1031									if equal(ref[FR_NAME], sym_name(s)) then*/
                _2 = (object)SEQ_PTR(_ref_63640);
                _31586 = (object)*(((s1_ptr)_2)->base + 2);
                _31587 = _56sym_name(_s_63739);
                if (_31586 == _31587)
                _31588 = 1;
                else if (IS_ATOM_INT(_31586) && IS_ATOM_INT(_31587))
                _31588 = 0;
                else
                _31588 = (compare(_31586, _31587) == 0);
                _31586 = NOVALUE;
                DeRef(_31587);
                _31587 = NOVALUE;
                if (_31588 == 0)
                {
                    _31588 = NOVALUE;
                    goto L1A; // [693] 741
                }
                else{
                    _31588 = NOVALUE;
                }

                /** fwdref.e:1032										errloc &= sprintf("\t\tin %s\n", */
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _31590 = (object)*(((s1_ptr)_2)->base + _s_63739);
                _2 = (object)SEQ_PTR(_31590);
                if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
                    _31591 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
                }
                else{
                    _31591 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
                }
                _31590 = NOVALUE;
                _2 = (object)SEQ_PTR(_36known_files_15405);
                if (!IS_ATOM_INT(_31591)){
                    _31592 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31591)->dbl));
                }
                else{
                    _31592 = (object)*(((s1_ptr)_2)->base + _31591);
                }
                Ref(_31592);
                RefDS(_21928);
                _31593 = _16abbreviate_path(_31592, _21928);
                _31592 = NOVALUE;
                _31594 = _15find_replace(92, _31593, 47, 0);
                _31593 = NOVALUE;
                _1 = NewS1(1);
                _2 = (object)((s1_ptr)_1)->base;
                ((intptr_t*)_2)[1] = _31594;
                _31595 = MAKE_SEQ(_1);
                _31594 = NOVALUE;
                _31596 = EPrintf(-9999999, _31589, _31595);
                DeRefDS(_31595);
                _31595 = NOVALUE;
                Concat((object_ptr)&_errloc_63635, _errloc_63635, _31596);
                DeRefDS(_31596);
                _31596 = NOVALUE;
L1A: 

                /** fwdref.e:1035								end for*/
                _si_63736 = _si_63736 + 1;
                goto L18; // [745] 671
L19: 
                ;
            }
            DeRef(_syms_63718);
            _syms_63718 = NOVALUE;
            goto L17; // [752] 759

            /** fwdref.e:1036							case else */
            default:
L14: 
        ;}L17: 
L13: 

        /** fwdref.e:1040					if not match(errloc, msg) then*/
        _31598 = e_match_from(_errloc_63635, _msg_63634, 1);
        if (_31598 != 0)
        goto L1B; // [767] 786
        _31598 = NOVALUE;

        /** fwdref.e:1041						msg &= errloc*/
        Concat((object_ptr)&_msg_63634, _msg_63634, _errloc_63635);

        /** fwdref.e:1042						prep_forward_error( errors[e] )*/
        _2 = (object)SEQ_PTR(_errors_63572);
        _31601 = (object)*(((s1_ptr)_2)->base + _e_63638);
        Ref(_31601);
        _41prep_forward_error(_31601);
        _31601 = NOVALUE;
L1B: 
        DeRef(_tok_63656);
        _tok_63656 = NOVALUE;
L12: 

        /** fwdref.e:1045				ThisLine    = ref[FR_THISLINE]*/
        DeRef(_52ThisLine_48710);
        _2 = (object)SEQ_PTR(_ref_63640);
        _52ThisLine_48710 = (object)*(((s1_ptr)_2)->base + 7);
        Ref(_52ThisLine_48710);

        /** fwdref.e:1046				bp          = ref[FR_BP]*/
        _2 = (object)SEQ_PTR(_ref_63640);
        _52bp_48714 = (object)*(((s1_ptr)_2)->base + 8);
        if (!IS_ATOM_INT(_52bp_48714)){
            _52bp_48714 = (object)DBL_PTR(_52bp_48714)->dbl;
        }

        /** fwdref.e:1047				CurrentSub  = ref[FR_SUBPROG]*/
        _2 = (object)SEQ_PTR(_ref_63640);
        _39CurrentSub_16823 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_39CurrentSub_16823)){
            _39CurrentSub_16823 = (object)DBL_PTR(_39CurrentSub_16823)->dbl;
        }

        /** fwdref.e:1048				line_number = ref[FR_LINE]*/
        _2 = (object)SEQ_PTR(_ref_63640);
        _39line_number_16816 = (object)*(((s1_ptr)_2)->base + 6);
        if (!IS_ATOM_INT(_39line_number_16816)){
            _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
        }
        DeRefDS(_ref_63640);
        _ref_63640 = NOVALUE;

        /** fwdref.e:1049			end for*/
L11: 
        _e_63638 = _e_63638 + -1;
        goto LC; // [823] 319
LD: 
        ;
    }

    /** fwdref.e:1050			if length(msg) > 0 then*/
    if (IS_SEQUENCE(_msg_63634)){
            _31606 = SEQ_PTR(_msg_63634)->length;
    }
    else {
        _31606 = 1;
    }
    if (_31606 <= 0)
    goto L1C; // [833] 849

    /** fwdref.e:1051				CompileErr( 74, {msg} )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_msg_63634);
    ((intptr_t*)_2)[1] = _msg_63634;
    _31609 = MAKE_SEQ(_1);
    _52CompileErr(74, _31609, 0);
    _31609 = NOVALUE;
L1C: 
    DeRefi(_msg_63634);
    _msg_63634 = NOVALUE;
    DeRefi(_errloc_63635);
    _errloc_63635 = NOVALUE;
    goto L1D; // [851] 899
LB: 

    /** fwdref.e:1053		elsif report_errors and not repl then*/
    if (_report_errors_63571 == 0) {
        goto L1E; // [856] 898
    }
    _31611 = (0 == 0);
    if (_31611 == 0)
    {
        DeRef(_31611);
        _31611 = NOVALUE;
        goto L1E; // [866] 898
    }
    else{
        DeRef(_31611);
        _31611 = NOVALUE;
    }

    /** fwdref.e:1055			forward_references  = {}*/
    RefDS(_21928);
    DeRef(_41forward_references_62123);
    _41forward_references_62123 = _21928;

    /** fwdref.e:1056			active_references   = {}*/
    RefDS(_21928);
    DeRef(_41active_references_62125);
    _41active_references_62125 = _21928;

    /** fwdref.e:1057			toplevel_references = {}*/
    RefDS(_21928);
    DeRef(_41toplevel_references_62126);
    _41toplevel_references_62126 = _21928;

    /** fwdref.e:1058			inactive_references = {}*/
    RefDS(_21928);
    DeRef(_41inactive_references_62127);
    _41inactive_references_62127 = _21928;
L1E: 
L1D: 

    /** fwdref.e:1060		clear_last()*/
    _49clear_last();

    /** fwdref.e:1061	end procedure*/
    DeRef(_errors_63572);
    _31591 = NOVALUE;
    DeRef(_31529);
    _31529 = NOVALUE;
    _31558 = NOVALUE;
    _31545 = NOVALUE;
    _31510 = NOVALUE;
    DeRef(_31506);
    _31506 = NOVALUE;
    _31500 = NOVALUE;
    _31578 = NOVALUE;
    _31503 = NOVALUE;
    _31508 = NOVALUE;
    _31523 = NOVALUE;
    _31549 = NOVALUE;
    DeRef(_31526);
    _31526 = NOVALUE;
    _31566 = NOVALUE;
    return;
    ;
}


void _41shift_these(object _refs_63787, object _pc_63788, object _amount_63789)
{
    object _fr_63793 = NOVALUE;
    object _31629 = NOVALUE;
    object _31628 = NOVALUE;
    object _31627 = NOVALUE;
    object _31626 = NOVALUE;
    object _31625 = NOVALUE;
    object _31624 = NOVALUE;
    object _31623 = NOVALUE;
    object _31622 = NOVALUE;
    object _31621 = NOVALUE;
    object _31620 = NOVALUE;
    object _31618 = NOVALUE;
    object _31616 = NOVALUE;
    object _31615 = NOVALUE;
    object _31613 = NOVALUE;
    object _31612 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:1064		for i = length( refs ) to 1 by -1 do*/
    if (IS_SEQUENCE(_refs_63787)){
            _31612 = SEQ_PTR(_refs_63787)->length;
    }
    else {
        _31612 = 1;
    }
    {
        object _i_63791;
        _i_63791 = _31612;
L1: 
        if (_i_63791 < 1){
            goto L2; // [12] 147
        }

        /** fwdref.e:1065			sequence fr = forward_references[refs[i]]*/
        _2 = (object)SEQ_PTR(_refs_63787);
        _31613 = (object)*(((s1_ptr)_2)->base + _i_63791);
        DeRef(_fr_63793);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!IS_ATOM_INT(_31613)){
            _fr_63793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31613)->dbl));
        }
        else{
            _fr_63793 = (object)*(((s1_ptr)_2)->base + _31613);
        }
        Ref(_fr_63793);

        /** fwdref.e:1066			forward_references[refs[i]] = 0*/
        _2 = (object)SEQ_PTR(_refs_63787);
        _31615 = (object)*(((s1_ptr)_2)->base + _i_63791);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _41forward_references_62123 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31615))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31615)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31615);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);

        /** fwdref.e:1067			if fr[FR_SUBPROG] = shifting_sub then*/
        _2 = (object)SEQ_PTR(_fr_63793);
        _31616 = (object)*(((s1_ptr)_2)->base + 4);
        if (binary_op_a(NOTEQ, _31616, _41shifting_sub_62152)){
            _31616 = NOVALUE;
            goto L3; // [53] 126
        }
        _31616 = NOVALUE;

        /** fwdref.e:1068				if fr[FR_PC] >= pc then*/
        _2 = (object)SEQ_PTR(_fr_63793);
        _31618 = (object)*(((s1_ptr)_2)->base + 5);
        if (binary_op_a(LESS, _31618, _pc_63788)){
            _31618 = NOVALUE;
            goto L4; // [63] 125
        }
        _31618 = NOVALUE;

        /** fwdref.e:1069					fr[FR_PC] += amount*/
        _2 = (object)SEQ_PTR(_fr_63793);
        _31620 = (object)*(((s1_ptr)_2)->base + 5);
        if (IS_ATOM_INT(_31620)) {
            _31621 = _31620 + _amount_63789;
            if ((object)((uintptr_t)_31621 + (uintptr_t)HIGH_BITS) >= 0){
                _31621 = NewDouble((eudouble)_31621);
            }
        }
        else {
            _31621 = binary_op(PLUS, _31620, _amount_63789);
        }
        _31620 = NOVALUE;
        _2 = (object)SEQ_PTR(_fr_63793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31621;
        if( _1 != _31621 ){
            DeRef(_1);
        }
        _31621 = NOVALUE;

        /** fwdref.e:1070					if fr[FR_TYPE] = CASE*/
        _2 = (object)SEQ_PTR(_fr_63793);
        _31622 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_31622)) {
            _31623 = (_31622 == 186);
        }
        else {
            _31623 = binary_op(EQUALS, _31622, 186);
        }
        _31622 = NOVALUE;
        if (IS_ATOM_INT(_31623)) {
            if (_31623 == 0) {
                goto L5; // [93] 124
            }
        }
        else {
            if (DBL_PTR(_31623)->dbl == 0.0) {
                goto L5; // [93] 124
            }
        }
        _2 = (object)SEQ_PTR(_fr_63793);
        _31625 = (object)*(((s1_ptr)_2)->base + 12);
        if (IS_ATOM_INT(_31625)) {
            _31626 = (_31625 >= _pc_63788);
        }
        else {
            _31626 = binary_op(GREATEREQ, _31625, _pc_63788);
        }
        _31625 = NOVALUE;
        if (_31626 == 0) {
            DeRef(_31626);
            _31626 = NOVALUE;
            goto L5; // [106] 124
        }
        else {
            if (!IS_ATOM_INT(_31626) && DBL_PTR(_31626)->dbl == 0.0){
                DeRef(_31626);
                _31626 = NOVALUE;
                goto L5; // [106] 124
            }
            DeRef(_31626);
            _31626 = NOVALUE;
        }
        DeRef(_31626);
        _31626 = NOVALUE;

        /** fwdref.e:1073						fr[FR_DATA] += amount*/
        _2 = (object)SEQ_PTR(_fr_63793);
        _31627 = (object)*(((s1_ptr)_2)->base + 12);
        if (IS_ATOM_INT(_31627)) {
            _31628 = _31627 + _amount_63789;
            if ((object)((uintptr_t)_31628 + (uintptr_t)HIGH_BITS) >= 0){
                _31628 = NewDouble((eudouble)_31628);
            }
        }
        else {
            _31628 = binary_op(PLUS, _31627, _amount_63789);
        }
        _31627 = NOVALUE;
        _2 = (object)SEQ_PTR(_fr_63793);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63793 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31628;
        if( _1 != _31628 ){
            DeRef(_1);
        }
        _31628 = NOVALUE;
L5: 
L4: 
L3: 

        /** fwdref.e:1077			forward_references[refs[i]] = fr*/
        _2 = (object)SEQ_PTR(_refs_63787);
        _31629 = (object)*(((s1_ptr)_2)->base + _i_63791);
        RefDS(_fr_63793);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _41forward_references_62123 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31629))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31629)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31629);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63793;
        DeRef(_1);
        DeRefDS(_fr_63793);
        _fr_63793 = NOVALUE;

        /** fwdref.e:1078		end for*/
        _i_63791 = _i_63791 + -1;
        goto L1; // [142] 19
L2: 
        ;
    }

    /** fwdref.e:1079	end procedure*/
    DeRefDS(_refs_63787);
    _31613 = NOVALUE;
    DeRef(_31623);
    _31623 = NOVALUE;
    _31615 = NOVALUE;
    _31629 = NOVALUE;
    return;
    ;
}


void _41shift_top(object _refs_63817, object _pc_63818, object _amount_63819)
{
    object _fr_63823 = NOVALUE;
    object _31645 = NOVALUE;
    object _31644 = NOVALUE;
    object _31643 = NOVALUE;
    object _31642 = NOVALUE;
    object _31641 = NOVALUE;
    object _31640 = NOVALUE;
    object _31639 = NOVALUE;
    object _31638 = NOVALUE;
    object _31637 = NOVALUE;
    object _31636 = NOVALUE;
    object _31634 = NOVALUE;
    object _31633 = NOVALUE;
    object _31631 = NOVALUE;
    object _31630 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:1083		for i = length( refs ) to 1 by -1 do*/
    if (IS_SEQUENCE(_refs_63817)){
            _31630 = SEQ_PTR(_refs_63817)->length;
    }
    else {
        _31630 = 1;
    }
    {
        object _i_63821;
        _i_63821 = _31630;
L1: 
        if (_i_63821 < 1){
            goto L2; // [12] 134
        }

        /** fwdref.e:1084			sequence fr = forward_references[refs[i]]*/
        _2 = (object)SEQ_PTR(_refs_63817);
        _31631 = (object)*(((s1_ptr)_2)->base + _i_63821);
        DeRef(_fr_63823);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!IS_ATOM_INT(_31631)){
            _fr_63823 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31631)->dbl));
        }
        else{
            _fr_63823 = (object)*(((s1_ptr)_2)->base + _31631);
        }
        Ref(_fr_63823);

        /** fwdref.e:1085			forward_references[refs[i]] = 0*/
        _2 = (object)SEQ_PTR(_refs_63817);
        _31633 = (object)*(((s1_ptr)_2)->base + _i_63821);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _41forward_references_62123 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31633))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31633)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31633);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);

        /** fwdref.e:1086			if fr[FR_PC] >= pc then*/
        _2 = (object)SEQ_PTR(_fr_63823);
        _31634 = (object)*(((s1_ptr)_2)->base + 5);
        if (binary_op_a(LESS, _31634, _pc_63818)){
            _31634 = NOVALUE;
            goto L3; // [51] 113
        }
        _31634 = NOVALUE;

        /** fwdref.e:1087				fr[FR_PC] += amount*/
        _2 = (object)SEQ_PTR(_fr_63823);
        _31636 = (object)*(((s1_ptr)_2)->base + 5);
        if (IS_ATOM_INT(_31636)) {
            _31637 = _31636 + _amount_63819;
            if ((object)((uintptr_t)_31637 + (uintptr_t)HIGH_BITS) >= 0){
                _31637 = NewDouble((eudouble)_31637);
            }
        }
        else {
            _31637 = binary_op(PLUS, _31636, _amount_63819);
        }
        _31636 = NOVALUE;
        _2 = (object)SEQ_PTR(_fr_63823);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63823 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31637;
        if( _1 != _31637 ){
            DeRef(_1);
        }
        _31637 = NOVALUE;

        /** fwdref.e:1088				if fr[FR_TYPE] = CASE*/
        _2 = (object)SEQ_PTR(_fr_63823);
        _31638 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_31638)) {
            _31639 = (_31638 == 186);
        }
        else {
            _31639 = binary_op(EQUALS, _31638, 186);
        }
        _31638 = NOVALUE;
        if (IS_ATOM_INT(_31639)) {
            if (_31639 == 0) {
                goto L4; // [81] 112
            }
        }
        else {
            if (DBL_PTR(_31639)->dbl == 0.0) {
                goto L4; // [81] 112
            }
        }
        _2 = (object)SEQ_PTR(_fr_63823);
        _31641 = (object)*(((s1_ptr)_2)->base + 12);
        if (IS_ATOM_INT(_31641)) {
            _31642 = (_31641 >= _pc_63818);
        }
        else {
            _31642 = binary_op(GREATEREQ, _31641, _pc_63818);
        }
        _31641 = NOVALUE;
        if (_31642 == 0) {
            DeRef(_31642);
            _31642 = NOVALUE;
            goto L4; // [94] 112
        }
        else {
            if (!IS_ATOM_INT(_31642) && DBL_PTR(_31642)->dbl == 0.0){
                DeRef(_31642);
                _31642 = NOVALUE;
                goto L4; // [94] 112
            }
            DeRef(_31642);
            _31642 = NOVALUE;
        }
        DeRef(_31642);
        _31642 = NOVALUE;

        /** fwdref.e:1091					fr[FR_DATA] += amount*/
        _2 = (object)SEQ_PTR(_fr_63823);
        _31643 = (object)*(((s1_ptr)_2)->base + 12);
        if (IS_ATOM_INT(_31643)) {
            _31644 = _31643 + _amount_63819;
            if ((object)((uintptr_t)_31644 + (uintptr_t)HIGH_BITS) >= 0){
                _31644 = NewDouble((eudouble)_31644);
            }
        }
        else {
            _31644 = binary_op(PLUS, _31643, _amount_63819);
        }
        _31643 = NOVALUE;
        _2 = (object)SEQ_PTR(_fr_63823);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63823 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31644;
        if( _1 != _31644 ){
            DeRef(_1);
        }
        _31644 = NOVALUE;
L4: 
L3: 

        /** fwdref.e:1094			forward_references[refs[i]] = fr*/
        _2 = (object)SEQ_PTR(_refs_63817);
        _31645 = (object)*(((s1_ptr)_2)->base + _i_63821);
        RefDS(_fr_63823);
        _2 = (object)SEQ_PTR(_41forward_references_62123);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _41forward_references_62123 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31645))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31645)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31645);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63823;
        DeRef(_1);
        DeRefDS(_fr_63823);
        _fr_63823 = NOVALUE;

        /** fwdref.e:1095		end for*/
        _i_63821 = _i_63821 + -1;
        goto L1; // [129] 19
L2: 
        ;
    }

    /** fwdref.e:1096	end procedure*/
    DeRefDS(_refs_63817);
    _31645 = NOVALUE;
    DeRef(_31639);
    _31639 = NOVALUE;
    _31631 = NOVALUE;
    _31633 = NOVALUE;
    return;
    ;
}


void _41shift_fwd_refs(object _pc_63844, object _amount_63845)
{
    object _file_63856 = NOVALUE;
    object _sp_63861 = NOVALUE;
    object _31655 = NOVALUE;
    object _31654 = NOVALUE;
    object _31652 = NOVALUE;
    object _31650 = NOVALUE;
    object _31649 = NOVALUE;
    object _31648 = NOVALUE;
    object _0, _1, _2;
    

    /** fwdref.e:1099		if not shifting_sub then*/
    if (_41shifting_sub_62152 != 0)
    goto L1; // [9] 18

    /** fwdref.e:1100			return*/
    return;
L1: 

    /** fwdref.e:1103		if shifting_sub = TopLevelSub then*/
    if (_41shifting_sub_62152 != _39TopLevelSub_16822)
    goto L2; // [24] 65

    /** fwdref.e:1104			for file = 1 to length( toplevel_references ) do*/
    if (IS_SEQUENCE(_41toplevel_references_62126)){
            _31648 = SEQ_PTR(_41toplevel_references_62126)->length;
    }
    else {
        _31648 = 1;
    }
    {
        object _file_63852;
        _file_63852 = 1;
L3: 
        if (_file_63852 > _31648){
            goto L4; // [35] 62
        }

        /** fwdref.e:1105				shift_top( toplevel_references[file], pc, amount )*/
        _2 = (object)SEQ_PTR(_41toplevel_references_62126);
        _31649 = (object)*(((s1_ptr)_2)->base + _file_63852);
        Ref(_31649);
        _41shift_top(_31649, _pc_63844, _amount_63845);
        _31649 = NOVALUE;

        /** fwdref.e:1106			end for*/
        _file_63852 = _file_63852 + 1;
        goto L3; // [57] 42
L4: 
        ;
    }
    goto L5; // [62] 118
L2: 

    /** fwdref.e:1108			integer file = SymTab[shifting_sub][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _31650 = (object)*(((s1_ptr)_2)->base + _41shifting_sub_62152);
    _2 = (object)SEQ_PTR(_31650);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _file_63856 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _file_63856 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_file_63856)){
        _file_63856 = (object)DBL_PTR(_file_63856)->dbl;
    }
    _31650 = NOVALUE;

    /** fwdref.e:1109			integer sp   = find( shifting_sub, active_subprogs[file] )*/
    _2 = (object)SEQ_PTR(_41active_subprogs_62124);
    _31652 = (object)*(((s1_ptr)_2)->base + _file_63856);
    _sp_63861 = find_from(_41shifting_sub_62152, _31652, 1);
    _31652 = NOVALUE;

    /** fwdref.e:1110			shift_these( active_references[file][sp], pc, amount )*/
    _2 = (object)SEQ_PTR(_41active_references_62125);
    _31654 = (object)*(((s1_ptr)_2)->base + _file_63856);
    _2 = (object)SEQ_PTR(_31654);
    _31655 = (object)*(((s1_ptr)_2)->base + _sp_63861);
    _31654 = NOVALUE;
    Ref(_31655);
    _41shift_these(_31655, _pc_63844, _amount_63845);
    _31655 = NOVALUE;
L5: 

    /** fwdref.e:1112	end procedure*/
    return;
    ;
}



// 0xB292610B
