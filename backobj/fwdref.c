// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _37clear_fwd_refs()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_fwd_refs pc: 1 op: STARTLINE (58)

    /** fwdref.e:70		fwdref_count = 0*/
    // SubProg clear_fwd_refs pc: 3 op: ASSIGN_I (113)
    _37fwdref_count_62152 = 0;
    // SubProg clear_fwd_refs pc: 6 op: STARTLINE (58)

    /** fwdref.e:71	end procedure*/
    // SubProg clear_fwd_refs pc: 8 op: RETURNP (29)

// Exiting block BLOCK: clear_fwd_refs
    return;
    // SubProg clear_fwd_refs pc: 11 op: BADRETURNF (43)
    ;
}


object _37get_fwdref_count()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_fwdref_count pc: 1 op: STARTLINE (58)

    /** fwdref.e:74		return fwdref_count*/
    // SubProg get_fwdref_count pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_fwdref_count pc: 5 op: RETURNF (28)

// Exiting block BLOCK: get_fwdref_count
    return _37fwdref_count_62152;
    // SubProg get_fwdref_count pc: 9 op: BADRETURNF (43)
    ;
}


void _37set_glabel_block(object _ref_62159, object _block_62161)
{
    object _30821 = NOVALUE; // 62165 30821
    object _30820 = NOVALUE; // 62164 30820
// skipping _30819  name type: 0
    object _30818 = NOVALUE; // 62162 30818
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_glabel_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62159)) {
        _1 = (object)(DBL_PTR(_ref_62159)->dbl);
        DeRefDS(_ref_62159);
        _ref_62159 = _1;
    }
    // SubProg set_glabel_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_block_62161)) {
        _1 = (object)(DBL_PTR(_block_62161)->dbl);
        DeRefDS(_block_62161);
        _block_62161 = _1;
    }
    // SubProg set_glabel_block pc: 5 op: STARTLINE (58)

    /** fwdref.e:78		forward_references[ref][FR_DATA] &= block*/
    // SubProg set_glabel_block pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_glabel_block pc: 9 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62159 + ((s1_ptr)_2)->base);
    // SubProg set_glabel_block pc: 14 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _30820 = (object)*(((s1_ptr)_2)->base + 12);
    _30818 = NOVALUE;
    // SubProg set_glabel_block pc: 18 op: CONCAT (15)
    if (IS_SEQUENCE(_30820) && IS_ATOM(_block_62161)) {
        Append(&_30821, _30820, _block_62161);
    }
    else if (IS_ATOM(_30820) && IS_SEQUENCE(_block_62161)) {
    }
    else {
        Concat((object_ptr)&_30821, _30820, _block_62161);
        _30820 = NOVALUE;
    }
    _30820 = NOVALUE;
    // SubProg set_glabel_block pc: 22 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30821;
    if( _1 != _30821 ){
        DeRef(_1);
    }
    _30821 = NOVALUE;
    _30818 = NOVALUE;
    // SubProg set_glabel_block pc: 26 op: STARTLINE (58)

    /** fwdref.e:79	end procedure*/
    // SubProg set_glabel_block pc: 28 op: RETURNP (29)

// Exiting block BLOCK: set_glabel_block

// block var ref_62159

// block var block_62161
    return;
    // SubProg set_glabel_block pc: 31 op: BADRETURNF (43)
    ;
}


void _37replace_code(object _code_62173, object _start_62174, object _finish_62175, object _subprog_62176)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_code pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg replace_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg replace_code pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_finish_62175)) {
        _1 = (object)(DBL_PTR(_finish_62175)->dbl);
        DeRefDS(_finish_62175);
        _finish_62175 = _1;
    }
    // SubProg replace_code pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_62176)) {
        _1 = (object)(DBL_PTR(_subprog_62176)->dbl);
        DeRefDS(_subprog_62176);
        _subprog_62176 = _1;
    }
    // SubProg replace_code pc: 9 op: STARTLINE (58)

    /** fwdref.e:88		shifting_sub = subprog*/
    // SubProg replace_code pc: 11 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_62176;
    // SubProg replace_code pc: 14 op: STARTLINE (58)

    /** fwdref.e:89		shift:replace_code( code, start, finish )*/
    // SubProg replace_code pc: 16 op: PROC (27)
    RefDS(_code_62173);
    _65replace_code(_code_62173, _start_62174, _finish_62175);
    // SubProg replace_code pc: 21 op: STARTLINE (58)

    /** fwdref.e:90		shifting_sub = 0*/
    // SubProg replace_code pc: 23 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg replace_code pc: 26 op: STARTLINE (58)

    /** fwdref.e:91	end procedure*/
    // SubProg replace_code pc: 28 op: RETURNP (29)

// Exiting block BLOCK: replace_code

// block var code_62173
    DeRefDS(_code_62173);

// block var start_62174

// block var finish_62175

// block var subprog_62176
    return;
    // SubProg replace_code pc: 31 op: BADRETURNF (43)
    ;
}


void _37resolved_reference(object _ref_62179)
{
    object _file_62180 = NOVALUE;
    object _subprog_62183 = NOVALUE;
    object _tx_62186 = NOVALUE;
    object _ax_62187 = NOVALUE;
    object _sp_62188 = NOVALUE;
    object _r_62203 = NOVALUE;
    object _r_62221 = NOVALUE;
// skipping _30853  name type: 0
// skipping _30852  name type: 0
// skipping _30851  name type: 0
// skipping _30850  name type: 0
// skipping _30849  name type: 0
// skipping _30848  name type: 0
// skipping _30847  name type: 0
// skipping _30846  name type: 0
    object _30845 = NOVALUE; // 62214 30845
    object _30844 = NOVALUE; // 62213 30844
    object _30843 = NOVALUE; // 62212 30843
// skipping _30842  name type: 0
    object _30841 = NOVALUE; // 62209 30841
// skipping _30840  name type: 0
// skipping _30839  name type: 0
    object _30838 = NOVALUE; // 62206 30838
// skipping _30837  name type: 0
    object _30836 = NOVALUE; // 62204 30836
// skipping _30835  name type: 0
    object _30834 = NOVALUE; // 62200 30834
    object _30833 = NOVALUE; // 62199 30833
// skipping _30832  name type: 0
    object _30831 = NOVALUE; // 62197 30831
// skipping _30830  name type: 0
    object _30829 = NOVALUE; // 62194 30829
// skipping _30828  name type: 0
    object _30827 = NOVALUE; // 62191 30827
    object _30826 = NOVALUE; // 62190 30826
// skipping _30825  name type: 0
    object _30824 = NOVALUE; // 62184 30824
// skipping _30823  name type: 0
    object _30822 = NOVALUE; // 62181 30822
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg resolved_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg resolved_reference pc: 3 op: STARTLINE (58)

    /** fwdref.e:95			file    = forward_references[ref][FR_FILE],*/
    // SubProg resolved_reference pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _30822 = (object)*(((s1_ptr)_2)->base + _ref_62179);
    // SubProg resolved_reference pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30822);
    _file_62180 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_62180)){
        _file_62180 = (object)DBL_PTR(_file_62180)->dbl;
    }
    _30822 = NOVALUE;
    // SubProg resolved_reference pc: 17 op: STARTLINE (58)

    /** fwdref.e:96			subprog = forward_references[ref][FR_SUBPROG]*/
    // SubProg resolved_reference pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _30824 = (object)*(((s1_ptr)_2)->base + _ref_62179);
    // SubProg resolved_reference pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30824);
    _subprog_62183 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_subprog_62183)){
        _subprog_62183 = (object)DBL_PTR(_subprog_62183)->dbl;
    }
    _30824 = NOVALUE;
    // SubProg resolved_reference pc: 31 op: STARTLINE (58)

    /** fwdref.e:99			tx = 0,*/
    // SubProg resolved_reference pc: 33 op: ASSIGN_I (113)
    _tx_62186 = 0;
    // SubProg resolved_reference pc: 36 op: STARTLINE (58)

    /** fwdref.e:100			ax = 0,*/
    // SubProg resolved_reference pc: 38 op: ASSIGN_I (113)
    _ax_62187 = 0;
    // SubProg resolved_reference pc: 41 op: STARTLINE (58)

    /** fwdref.e:101			sp = 0*/
    // SubProg resolved_reference pc: 43 op: ASSIGN_I (113)
    _sp_62188 = 0;
    // SubProg resolved_reference pc: 46 op: STARTLINE (58)

    /** fwdref.e:103		if forward_references[ref][FR_SUBPROG] = TopLevelSub then*/
    // SubProg resolved_reference pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 50 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _30826 = (object)*(((s1_ptr)_2)->base + _ref_62179);
    // SubProg resolved_reference pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30826);
    _30827 = (object)*(((s1_ptr)_2)->base + 4);
    _30826 = NOVALUE;
    // SubProg resolved_reference pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 60 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _30827, _34TopLevelSub_15195)){
        _30827 = NOVALUE;
        goto L1; // [60] 80
    }
    _30827 = NOVALUE;
    // SubProg resolved_reference pc: 64 op: STARTLINE (58)

    /** fwdref.e:104			tx = find( ref, toplevel_references[file] )*/
    // SubProg resolved_reference pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 68 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    _30829 = (object)*(((s1_ptr)_2)->base + _file_62180);
    // SubProg resolved_reference pc: 72 op: FIND_FROM (176)
    _tx_62186 = find_from(_ref_62179, _30829, 1);
    _30829 = NOVALUE;
    // SubProg resolved_reference pc: 77 op: ELSE (23)
    goto L2; // [77] 111
    // SubProg resolved_reference pc: 79 op: NOP1 (159)
L1: // addr: 80 pc: 79 sub: 62177 op: 159
    // SubProg resolved_reference pc: 80 op: STARTLINE (58)

    /** fwdref.e:106			sp = find( subprog, active_subprogs[file] )*/
    // SubProg resolved_reference pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 84 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _30831 = (object)*(((s1_ptr)_2)->base + _file_62180);
    // SubProg resolved_reference pc: 88 op: FIND_FROM (176)
    _sp_62188 = find_from(_subprog_62183, _30831, 1);
    _30831 = NOVALUE;
    // SubProg resolved_reference pc: 93 op: STARTLINE (58)

    /** fwdref.e:107			ax = find( ref, active_references[file][sp] )*/
    // SubProg resolved_reference pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _30833 = (object)*(((s1_ptr)_2)->base + _file_62180);
    // SubProg resolved_reference pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30833);
    _30834 = (object)*(((s1_ptr)_2)->base + _sp_62188);
    _30833 = NOVALUE;
    // SubProg resolved_reference pc: 105 op: FIND_FROM (176)
    _ax_62187 = find_from(_ref_62179, _30834, 1);
    _30834 = NOVALUE;
    // SubProg resolved_reference pc: 110 op: NOP1 (159)
L2: // addr: 111 pc: 110 sub: 62177 op: 159
    // SubProg resolved_reference pc: 111 op: STARTLINE (58)

    /** fwdref.e:110		if ax then*/
    // SubProg resolved_reference pc: 113 op: IF (20)
    if (_ax_62187 == 0)
    {
        goto L3; // [113] 253
    }
    else{
    }
    // SubProg resolved_reference pc: 116 op: STARTLINE (58)

    /** fwdref.e:111			sequence r = active_references[file][sp] */
    // SubProg resolved_reference pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _30836 = (object)*(((s1_ptr)_2)->base + _file_62180);
    // SubProg resolved_reference pc: 124 op: RHS_SUBS_CHECK (92)
    DeRef(_r_62203);
    _2 = (object)SEQ_PTR(_30836);
    _r_62203 = (object)*(((s1_ptr)_2)->base + _sp_62188);
    Ref(_r_62203);
    _30836 = NOVALUE;
    // SubProg resolved_reference pc: 128 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 130 op: STARTLINE (58)

    /** fwdref.e:112			active_references[file][sp] = 0*/
    // SubProg resolved_reference pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 134 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_references_62124 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62180 + ((s1_ptr)_2)->base);
    // SubProg resolved_reference pc: 139 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30838 = NOVALUE;
    // SubProg resolved_reference pc: 143 op: STARTLINE (58)

    /** fwdref.e:113			r = remove( r, ax )*/
    // SubProg resolved_reference pc: 145 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62203);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ax_62187)) ? _ax_62187 : (object)(DBL_PTR(_ax_62187)->dbl);
        int stop = (IS_ATOM_INT(_ax_62187)) ? _ax_62187 : (object)(DBL_PTR(_ax_62187)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62203), start, &_r_62203 );
            }
            else Tail(SEQ_PTR(_r_62203), stop+1, &_r_62203);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62203), start, &_r_62203);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62203 = Remove_elements(start, stop, (SEQ_PTR(_r_62203)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 150 op: STARTLINE (58)

    /** fwdref.e:114			active_references[file][sp] = r*/
    // SubProg resolved_reference pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 154 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_references_62124 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62180 + ((s1_ptr)_2)->base);
    // SubProg resolved_reference pc: 159 op: PASSIGN_SUBS (162)
    RefDS(_r_62203);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62203;
    DeRef(_1);
    _30841 = NOVALUE;
    // SubProg resolved_reference pc: 163 op: STARTLINE (58)

    /** fwdref.e:116			if not length( active_references[file][sp] ) then*/
    // SubProg resolved_reference pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _30843 = (object)*(((s1_ptr)_2)->base + _file_62180);
    // SubProg resolved_reference pc: 171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30843);
    _30844 = (object)*(((s1_ptr)_2)->base + _sp_62188);
    _30843 = NOVALUE;
    // SubProg resolved_reference pc: 175 op: LENGTH (42)
    if (IS_SEQUENCE(_30844)){
            _30845 = SEQ_PTR(_30844)->length;
    }
    else {
        _30845 = 1;
    }
    _30844 = NOVALUE;
    // SubProg resolved_reference pc: 178 op: NOT_IFW (108)
    if (_30845 != 0)
    goto L4; // [178] 248
    _30845 = NOVALUE;
    // SubProg resolved_reference pc: 181 op: STARTLINE (58)

    /** fwdref.e:117				r = active_references[file]*/
    // SubProg resolved_reference pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 185 op: RHS_SUBS (25)
    DeRefDS(_r_62203);
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _r_62203 = (object)*(((s1_ptr)_2)->base + _file_62180);
    Ref(_r_62203);
    // SubProg resolved_reference pc: 189 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 191 op: STARTLINE (58)

    /** fwdref.e:118				active_references[file] = 0*/
    // SubProg resolved_reference pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 195 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_references_62124 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 199 op: STARTLINE (58)

    /** fwdref.e:119				r = remove( r, sp )*/
    // SubProg resolved_reference pc: 201 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62203);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62188)) ? _sp_62188 : (object)(DBL_PTR(_sp_62188)->dbl);
        int stop = (IS_ATOM_INT(_sp_62188)) ? _sp_62188 : (object)(DBL_PTR(_sp_62188)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62203), start, &_r_62203 );
            }
            else Tail(SEQ_PTR(_r_62203), stop+1, &_r_62203);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62203), start, &_r_62203);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62203 = Remove_elements(start, stop, (SEQ_PTR(_r_62203)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 206 op: STARTLINE (58)

    /** fwdref.e:120				active_references[file] = r*/
    // SubProg resolved_reference pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 210 op: ASSIGN_SUBS (16)
    RefDS(_r_62203);
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_references_62124 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62203;
    DeRef(_1);
    // SubProg resolved_reference pc: 214 op: STARTLINE (58)

    /** fwdref.e:122				r = active_subprogs[file]*/
    // SubProg resolved_reference pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 218 op: RHS_SUBS (25)
    DeRefDS(_r_62203);
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _r_62203 = (object)*(((s1_ptr)_2)->base + _file_62180);
    Ref(_r_62203);
    // SubProg resolved_reference pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 224 op: STARTLINE (58)

    /** fwdref.e:123				active_subprogs[file] = 0*/
    // SubProg resolved_reference pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 228 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_subprogs_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 232 op: STARTLINE (58)

    /** fwdref.e:124				r = remove( r,   sp )*/
    // SubProg resolved_reference pc: 234 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62203);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62188)) ? _sp_62188 : (object)(DBL_PTR(_sp_62188)->dbl);
        int stop = (IS_ATOM_INT(_sp_62188)) ? _sp_62188 : (object)(DBL_PTR(_sp_62188)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62203), start, &_r_62203 );
            }
            else Tail(SEQ_PTR(_r_62203), stop+1, &_r_62203);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62203), start, &_r_62203);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62203 = Remove_elements(start, stop, (SEQ_PTR(_r_62203)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 239 op: STARTLINE (58)

    /** fwdref.e:125				active_subprogs[file] = r*/
    // SubProg resolved_reference pc: 241 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 243 op: ASSIGN_SUBS (16)
    RefDS(_r_62203);
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_subprogs_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62203;
    DeRef(_1);
    // SubProg resolved_reference pc: 247 op: NOP1 (159)
L4: // addr: 248 pc: 247 sub: 62177 op: 159
    // SubProg resolved_reference pc: 248 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var r_62203
    DeRef(_r_62203);
    _r_62203 = NOVALUE;
    // SubProg resolved_reference pc: 250 op: ELSE (23)
    goto L5; // [250] 303
    // SubProg resolved_reference pc: 252 op: NOP1 (159)
L3: // addr: 253 pc: 252 sub: 62177 op: 159
    // SubProg resolved_reference pc: 253 op: STARTLINE (58)

    /** fwdref.e:127		elsif tx then*/
    // SubProg resolved_reference pc: 255 op: IF (20)
    if (_tx_62186 == 0)
    {
        goto L6; // [255] 296
    }
    else{
    }
    // SubProg resolved_reference pc: 258 op: STARTLINE (58)

    /** fwdref.e:128			sequence r = toplevel_references[file]*/
    // SubProg resolved_reference pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 262 op: RHS_SUBS (25)
    DeRef(_r_62221);
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    _r_62221 = (object)*(((s1_ptr)_2)->base + _file_62180);
    Ref(_r_62221);
    // SubProg resolved_reference pc: 266 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 268 op: STARTLINE (58)

    /** fwdref.e:129			toplevel_references[file] = 0*/
    // SubProg resolved_reference pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 272 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37toplevel_references_62125 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 276 op: STARTLINE (58)

    /** fwdref.e:130			r = remove( r, tx )*/
    // SubProg resolved_reference pc: 278 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62221);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_tx_62186)) ? _tx_62186 : (object)(DBL_PTR(_tx_62186)->dbl);
        int stop = (IS_ATOM_INT(_tx_62186)) ? _tx_62186 : (object)(DBL_PTR(_tx_62186)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62221), start, &_r_62221 );
            }
            else Tail(SEQ_PTR(_r_62221), stop+1, &_r_62221);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62221), start, &_r_62221);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62221 = Remove_elements(start, stop, (SEQ_PTR(_r_62221)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 283 op: STARTLINE (58)

    /** fwdref.e:131			toplevel_references[file] = r*/
    // SubProg resolved_reference pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 287 op: ASSIGN_SUBS (16)
    RefDS(_r_62221);
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37toplevel_references_62125 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62180);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62221;
    DeRef(_1);
    // SubProg resolved_reference pc: 291 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var r_62221
    DeRefDS(_r_62221);
    _r_62221 = NOVALUE;
    // SubProg resolved_reference pc: 293 op: ELSE (23)
    goto L5; // [293] 303
    // SubProg resolved_reference pc: 295 op: NOP1 (159)
L6: // addr: 296 pc: 295 sub: 62177 op: 159
    // SubProg resolved_reference pc: 296 op: STARTLINE (58)

    /** fwdref.e:134			InternalErr( 260 )*/
    // SubProg resolved_reference pc: 298 op: PROC (27)
    RefDS(_21936);
    _49InternalErr(260, _21936);
    // SubProg resolved_reference pc: 302 op: NOP1 (159)
L5: // addr: 303 pc: 302 sub: 62177 op: 159
    // SubProg resolved_reference pc: 303 op: STARTLINE (58)

    /** fwdref.e:136		inactive_references &= ref*/
    // SubProg resolved_reference pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 307 op: CONCAT (15)
    Append(&_37inactive_references_62126, _37inactive_references_62126, _ref_62179);
    // SubProg resolved_reference pc: 311 op: STARTLINE (58)

    /** fwdref.e:137		forward_references[ref] = 0*/
    // SubProg resolved_reference pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 315 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_62179);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 319 op: STARTLINE (58)

    /** fwdref.e:138	end procedure*/
    // SubProg resolved_reference pc: 321 op: RETURNP (29)

// Exiting block BLOCK: resolved_reference

// block var ref_62179

// block var file_62180

// block var subprog_62183

// block var tx_62186

// block var ax_62187

// block var sp_62188
    _30844 = NOVALUE;
    return;
    // SubProg resolved_reference pc: 324 op: BADRETURNF (43)
    ;
}


void _37set_code(object _ref_62235)
{
// skipping _30871  name type: 0
    object _30870 = NOVALUE; // 62275 30870
// skipping _30869  name type: 0
    object _30868 = NOVALUE; // 62271 30868
    object _30867 = NOVALUE; // 62269 30867
    object _30866 = NOVALUE; // 62268 30866
    object _30865 = NOVALUE; // 62266 30865
// skipping _30864  name type: 0
    object _30863 = NOVALUE; // 62258 30863
// skipping _30862  name type: 0
    object _30861 = NOVALUE; // 62254 30861
// skipping _30860  name type: 0
    object _30859 = NOVALUE; // 62249 30859
// skipping _30858  name type: 0
    object _30857 = NOVALUE; // 62245 30857
// skipping _30856  name type: 0
// skipping _30855  name type: 0
    object _30854 = NOVALUE; // 62236 30854
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 3 op: STARTLINE (58)

    /** fwdref.e:146		patch_code_sub = forward_references[ref][FR_SUBPROG]*/
    // SubProg set_code pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _30854 = (object)*(((s1_ptr)_2)->base + _ref_62235);
    // SubProg set_code pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30854);
    _37patch_code_sub_62230 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_37patch_code_sub_62230)){
        _37patch_code_sub_62230 = (object)DBL_PTR(_37patch_code_sub_62230)->dbl;
    }
    _30854 = NOVALUE;
    // SubProg set_code pc: 17 op: STARTLINE (58)

    /** fwdref.e:147		if patch_code_sub != CurrentSub then*/
    // SubProg set_code pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 23 op: NOTEQ_IFW (105)
    if (_37patch_code_sub_62230 == _34CurrentSub_15196)
    goto L1; // [23] 136
    // SubProg set_code pc: 27 op: STARTLINE (58)

    /** fwdref.e:149			patch_code_temp = Code*/
    // SubProg set_code pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 31 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_37patch_code_temp_62227);
    _37patch_code_temp_62227 = _34Code_15276;
    // SubProg set_code pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 36 op: STARTLINE (58)

    /** fwdref.e:150			patch_linetab_temp = LineTable*/
    // SubProg set_code pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 40 op: ASSIGN (18)
    RefDS(_34LineTable_15277);
    DeRef(_37patch_linetab_temp_62228);
    _37patch_linetab_temp_62228 = _34LineTable_15277;
    // SubProg set_code pc: 43 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 45 op: STARTLINE (58)

    /** fwdref.e:152			Code = SymTab[patch_code_sub][S_CODE]*/
    // SubProg set_code pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30857 = (object)*(((s1_ptr)_2)->base + _37patch_code_sub_62230);
    // SubProg set_code pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 57 op: RHS_SUBS_CHECK (92)
    DeRefDS(_34Code_15276);
    _2 = (object)SEQ_PTR(_30857);
    if (!IS_ATOM_INT(_34S_CODE_14855)){
        _34Code_15276 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    }
    else{
        _34Code_15276 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
    }
    Ref(_34Code_15276);
    _30857 = NOVALUE;
    // SubProg set_code pc: 61 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 63 op: STARTLINE (58)

    /** fwdref.e:153			SymTab[patch_code_sub][S_CODE] = 0*/
    // SubProg set_code pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 69 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_37patch_code_sub_62230 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 76 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_CODE_14855))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_CODE_14855);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30859 = NOVALUE;
    // SubProg set_code pc: 80 op: STARTLINE (58)

    /** fwdref.e:154			LineTable = SymTab[patch_code_sub][S_LINETAB]*/
    // SubProg set_code pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30861 = (object)*(((s1_ptr)_2)->base + _37patch_code_sub_62230);
    // SubProg set_code pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 92 op: RHS_SUBS_CHECK (92)
    DeRefDS(_34LineTable_15277);
    _2 = (object)SEQ_PTR(_30861);
    if (!IS_ATOM_INT(_34S_LINETAB_14878)){
        _34LineTable_15277 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
    }
    else{
        _34LineTable_15277 = (object)*(((s1_ptr)_2)->base + _34S_LINETAB_14878);
    }
    Ref(_34LineTable_15277);
    _30861 = NOVALUE;
    // SubProg set_code pc: 96 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 98 op: STARTLINE (58)

    /** fwdref.e:155			SymTab[patch_code_sub][S_LINETAB] = 0*/
    // SubProg set_code pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 104 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_37patch_code_sub_62230 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 111 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_LINETAB_14878))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_LINETAB_14878);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30863 = NOVALUE;
    // SubProg set_code pc: 115 op: STARTLINE (58)

    /** fwdref.e:157			patch_current_sub = CurrentSub*/
    // SubProg set_code pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 119 op: ASSIGN (18)
    _37patch_current_sub_62232 = _34CurrentSub_15196;
    // SubProg set_code pc: 122 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 124 op: STARTLINE (58)

    /** fwdref.e:158			CurrentSub = patch_code_sub*/
    // SubProg set_code pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 128 op: ASSIGN (18)
    _34CurrentSub_15196 = _37patch_code_sub_62230;
    // SubProg set_code pc: 131 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 133 op: ELSE (23)
    goto L2; // [133] 203
    // SubProg set_code pc: 135 op: NOP1 (159)
L1: // addr: 136 pc: 135 sub: 62233 op: 159
    // SubProg set_code pc: 136 op: STARTLINE (58)

    /** fwdref.e:160			patch_current_sub = patch_code_sub*/
    // SubProg set_code pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 140 op: ASSIGN (18)
    _37patch_current_sub_62232 = _37patch_code_sub_62230;
    // SubProg set_code pc: 143 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 145 op: STARTLINE (58)

    /** fwdref.e:161			if sequence( SymTab[patch_current_sub][S_CODE] ) then*/
    // SubProg set_code pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30865 = (object)*(((s1_ptr)_2)->base + _37patch_current_sub_62232);
    // SubProg set_code pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 157 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30865);
    if (!IS_ATOM_INT(_34S_CODE_14855)){
        _30866 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    }
    else{
        _30866 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
    }
    _30865 = NOVALUE;
    // SubProg set_code pc: 161 op: IS_A_SEQUENCE (68)
    _30867 = IS_SEQUENCE(_30866);
    _30866 = NOVALUE;
    // SubProg set_code pc: 164 op: IF (20)
    if (_30867 == 0)
    {
        _30867 = NOVALUE;
        goto L3; // [164] 202
    }
    else{
        _30867 = NOVALUE;
    }
    // SubProg set_code pc: 167 op: STARTLINE (58)

    /** fwdref.e:162				SymTab[patch_code_sub][S_CODE] = 0*/
    // SubProg set_code pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 173 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_37patch_code_sub_62230 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 180 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_CODE_14855))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_CODE_14855);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30868 = NOVALUE;
    // SubProg set_code pc: 184 op: STARTLINE (58)

    /** fwdref.e:163				SymTab[patch_code_sub][S_LINETAB] = 0*/
    // SubProg set_code pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 190 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_37patch_code_sub_62230 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 197 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_LINETAB_14878))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_LINETAB_14878);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30870 = NOVALUE;
    // SubProg set_code pc: 201 op: NOP1 (159)
L3: // addr: 202 pc: 201 sub: 62233 op: 159
    // SubProg set_code pc: 202 op: NOP1 (159)
L2: // addr: 203 pc: 202 sub: 62233 op: 159
    // SubProg set_code pc: 203 op: STARTLINE (58)

    /** fwdref.e:166	end procedure*/
    // SubProg set_code pc: 205 op: RETURNP (29)

// Exiting block BLOCK: set_code

// block var ref_62235
    return;
    // SubProg set_code pc: 208 op: BADRETURNF (43)
    ;
}


void _37reset_code()
{
// skipping _30876  name type: 0
    object _30875 = NOVALUE; // 62288 30875
// skipping _30874  name type: 0
    object _30873 = NOVALUE; // 62283 30873
// skipping _30872  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg reset_code pc: 1 op: STARTLINE (58)

    /** fwdref.e:169		if patch_code_sub != patch_current_sub then*/
    // SubProg reset_code pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 7 op: NOTEQ_IFW (105)
    if (_37patch_code_sub_62230 == _37patch_current_sub_62232)
    goto L1; // [7] 77
    // SubProg reset_code pc: 11 op: STARTLINE (58)

    /** fwdref.e:171			SymTab[patch_code_sub][S_CODE] = Code*/
    // SubProg reset_code pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 17 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_37patch_code_sub_62230 + ((s1_ptr)_2)->base);
    // SubProg reset_code pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 26 op: PASSIGN_SUBS (162)
    RefDS(_34Code_15276);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_CODE_14855))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_CODE_14855);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34Code_15276;
    DeRef(_1);
    _30873 = NOVALUE;
    // SubProg reset_code pc: 30 op: STARTLINE (58)

    /** fwdref.e:172			SymTab[patch_code_sub][S_LINETAB] = LineTable*/
    // SubProg reset_code pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 36 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_37patch_code_sub_62230 + ((s1_ptr)_2)->base);
    // SubProg reset_code pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 45 op: PASSIGN_SUBS (162)
    RefDS(_34LineTable_15277);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_LINETAB_14878))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_LINETAB_14878);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34LineTable_15277;
    DeRef(_1);
    _30875 = NOVALUE;
    // SubProg reset_code pc: 49 op: STARTLINE (58)

    /** fwdref.e:175			CurrentSub = patch_current_sub*/
    // SubProg reset_code pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 53 op: ASSIGN (18)
    _34CurrentSub_15196 = _37patch_current_sub_62232;
    // SubProg reset_code pc: 56 op: INTEGER_CHECK (96)
    // SubProg reset_code pc: 58 op: STARTLINE (58)

    /** fwdref.e:176			Code = patch_code_temp*/
    // SubProg reset_code pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 62 op: ASSIGN (18)
    RefDS(_37patch_code_temp_62227);
    DeRefDS(_34Code_15276);
    _34Code_15276 = _37patch_code_temp_62227;
    // SubProg reset_code pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 67 op: STARTLINE (58)

    /** fwdref.e:177			LineTable = patch_linetab_temp*/
    // SubProg reset_code pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 71 op: ASSIGN (18)
    RefDS(_37patch_linetab_temp_62228);
    DeRefDS(_34LineTable_15277);
    _34LineTable_15277 = _37patch_linetab_temp_62228;
    // SubProg reset_code pc: 74 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 62278 op: 159
    // SubProg reset_code pc: 77 op: STARTLINE (58)

    /** fwdref.e:181		patch_code_temp = {}*/
    // SubProg reset_code pc: 79 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37patch_code_temp_62227);
    _37patch_code_temp_62227 = _21936;
    // SubProg reset_code pc: 82 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 84 op: STARTLINE (58)

    /** fwdref.e:182		patch_linetab_temp = {}*/
    // SubProg reset_code pc: 86 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37patch_linetab_temp_62228);
    _37patch_linetab_temp_62228 = _21936;
    // SubProg reset_code pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 91 op: STARTLINE (58)

    /** fwdref.e:183	end procedure*/
    // SubProg reset_code pc: 93 op: RETURNP (29)

// Exiting block BLOCK: reset_code
    return;
    // SubProg reset_code pc: 96 op: BADRETURNF (43)
    ;
}


void _37set_data(object _ref_62297, object _data_62298)
{
// skipping _30878  name type: 0
    object _30877 = NOVALUE; // 62299 30877
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_data pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_data pc: 3 op: STARTLINE (58)

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    // SubProg set_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_data pc: 7 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62297 + ((s1_ptr)_2)->base);
    // SubProg set_data pc: 12 op: PASSIGN_SUBS (162)
    Ref(_data_62298);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_62298;
    DeRef(_1);
    _30877 = NOVALUE;
    // SubProg set_data pc: 16 op: STARTLINE (58)

    /** fwdref.e:187	end procedure*/
    // SubProg set_data pc: 18 op: RETURNP (29)

// Exiting block BLOCK: set_data

// block var ref_62297

// block var data_62298
    DeRef(_data_62298);
    return;
    // SubProg set_data pc: 21 op: BADRETURNF (43)
    ;
}


void _37add_data(object _ref_62303, object _data_62304)
{
    object _30883 = NOVALUE; // 62309 30883
    object _30882 = NOVALUE; // 62308 30882
    object _30881 = NOVALUE; // 62307 30881
// skipping _30880  name type: 0
    object _30879 = NOVALUE; // 62305 30879
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_data pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62303)) {
        _1 = (object)(DBL_PTR(_ref_62303)->dbl);
        DeRefDS(_ref_62303);
        _ref_62303 = _1;
    }
    // SubProg add_data pc: 3 op: STARTLINE (58)

    /** fwdref.e:190		forward_references[ref][FR_DATA] = append( forward_references[ref][FR_DATA], data )*/
    // SubProg add_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_data pc: 7 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62303 + ((s1_ptr)_2)->base);
    // SubProg add_data pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_data pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _30881 = (object)*(((s1_ptr)_2)->base + _ref_62303);
    // SubProg add_data pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30881);
    _30882 = (object)*(((s1_ptr)_2)->base + 12);
    _30881 = NOVALUE;
    // SubProg add_data pc: 22 op: APPEND (35)
    Ref(_data_62304);
    Append(&_30883, _30882, _data_62304);
    _30882 = NOVALUE;
    // SubProg add_data pc: 26 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30883;
    if( _1 != _30883 ){
        DeRef(_1);
    }
    _30883 = NOVALUE;
    _30879 = NOVALUE;
    // SubProg add_data pc: 30 op: STARTLINE (58)

    /** fwdref.e:191	end procedure*/
    // SubProg add_data pc: 32 op: RETURNP (29)

// Exiting block BLOCK: add_data

// block var ref_62303

// block var data_62304
    DeRef(_data_62304);
    return;
    // SubProg add_data pc: 35 op: BADRETURNF (43)
    ;
}


void _37set_line(object _ref_62312, object _line_no_62313, object _this_line_62314, object _bp_62315)
{
// skipping _30889  name type: 0
    object _30888 = NOVALUE; // 62320 30888
// skipping _30887  name type: 0
    object _30886 = NOVALUE; // 62318 30886
// skipping _30885  name type: 0
    object _30884 = NOVALUE; // 62316 30884
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_line pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62312)) {
        _1 = (object)(DBL_PTR(_ref_62312)->dbl);
        DeRefDS(_ref_62312);
        _ref_62312 = _1;
    }
    // SubProg set_line pc: 3 op: INTEGER_CHECK (96)
    // SubProg set_line pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg set_line pc: 7 op: INTEGER_CHECK (96)
    // SubProg set_line pc: 9 op: STARTLINE (58)

    /** fwdref.e:194		forward_references[ref][FR_LINE] = line_no*/
    // SubProg set_line pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 13 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62312 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 18 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _line_no_62313;
    DeRef(_1);
    _30884 = NOVALUE;
    // SubProg set_line pc: 22 op: STARTLINE (58)

    /** fwdref.e:195		forward_references[ref][FR_THISLINE] = this_line*/
    // SubProg set_line pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 26 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62312 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 31 op: PASSIGN_SUBS (162)
    RefDS(_this_line_62314);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _this_line_62314;
    DeRef(_1);
    _30886 = NOVALUE;
    // SubProg set_line pc: 35 op: STARTLINE (58)

    /** fwdref.e:196		forward_references[ref][FR_BP] = bp*/
    // SubProg set_line pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62312 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 44 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bp_62315;
    DeRef(_1);
    _30888 = NOVALUE;
    // SubProg set_line pc: 48 op: STARTLINE (58)

    /** fwdref.e:198	end procedure*/
    // SubProg set_line pc: 50 op: RETURNP (29)

// Exiting block BLOCK: set_line

// block var ref_62312

// block var line_no_62313

// block var this_line_62314
    DeRefDS(_this_line_62314);

// block var bp_62315
    return;
    // SubProg set_line pc: 53 op: BADRETURNF (43)
    ;
}


void _37add_private_symbol(object _sym_62327, object _name_62328)
{
// skipping _30891  name type: 0
// skipping _30890  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_private_symbol pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_62327)) {
        _1 = (object)(DBL_PTR(_sym_62327)->dbl);
        DeRefDS(_sym_62327);
        _sym_62327 = _1;
    }
    // SubProg add_private_symbol pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add_private_symbol pc: 5 op: STARTLINE (58)

    /** fwdref.e:206		fwd_private_sym &= sym*/
    // SubProg add_private_symbol pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_private_symbol pc: 9 op: CONCAT (15)
    Append(&_37fwd_private_sym_62322, _37fwd_private_sym_62322, _sym_62327);
    // SubProg add_private_symbol pc: 13 op: STARTLINE (58)

    /** fwdref.e:207		fwd_private_name = append( fwd_private_name, name )*/
    // SubProg add_private_symbol pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_private_symbol pc: 17 op: APPEND (35)
    RefDS(_name_62328);
    Append(&_37fwd_private_name_62323, _37fwd_private_name_62323, _name_62328);
    // SubProg add_private_symbol pc: 21 op: STARTLINE (58)

    /** fwdref.e:209	end procedure*/
    // SubProg add_private_symbol pc: 23 op: RETURNP (29)

// Exiting block BLOCK: add_private_symbol

// block var sym_62327

// block var name_62328
    DeRefDS(_name_62328);
    return;
    // SubProg add_private_symbol pc: 26 op: BADRETURNF (43)
    ;
}


void _37patch_forward_goto(object _tok_62336, object _ref_62337)
{
    object _fr_62338 = NOVALUE;
    object _30904 = NOVALUE; // 62355 30904
    object _30903 = NOVALUE; // 62354 30903
    object _30902 = NOVALUE; // 62353 30902
    object _30901 = NOVALUE; // 62352 30901
    object _30900 = NOVALUE; // 62351 30900
    object _30899 = NOVALUE; // 62349 30899
    object _30898 = NOVALUE; // 62348 30898
    object _30897 = NOVALUE; // 62347 30897
// skipping _30896  name type: 0
    object _30895 = NOVALUE; // 62343 30895
    object _30894 = NOVALUE; // 62342 30894
// skipping _30893  name type: 0
// skipping _30892  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_forward_goto pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_goto pc: 3 op: STARTLINE (58)

    /** fwdref.e:217		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_goto pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_goto pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62338);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62338 = (object)*(((s1_ptr)_2)->base + _ref_62337);
    Ref(_fr_62338);
    // SubProg patch_forward_goto pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_goto pc: 13 op: STARTLINE (58)

    /** fwdref.e:218		set_code( ref )*/
    // SubProg patch_forward_goto pc: 15 op: PROC (27)
    _37set_code(_ref_62337);
    // SubProg patch_forward_goto pc: 18 op: STARTLINE (58)

    /** fwdref.e:220		shifting_sub = fr[FR_SUBPROG]*/
    // SubProg patch_forward_goto pc: 20 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62338);
    _37shifting_sub_62151 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_37shifting_sub_62151))
    _37shifting_sub_62151 = (object)DBL_PTR(_37shifting_sub_62151)->dbl;
    // SubProg patch_forward_goto pc: 24 op: STARTLINE (58)

    /** fwdref.e:222		if length( fr[FR_DATA] ) = 2 then*/
    // SubProg patch_forward_goto pc: 26 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62338);
    _30894 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_30894)){
            _30895 = SEQ_PTR(_30894)->length;
    }
    else {
        _30895 = 1;
    }
    _30894 = NOVALUE;
    // SubProg patch_forward_goto pc: 33 op: EQUALS_IFW_I (121)
    if (_30895 != 2)
    goto L1; // [33] 62
    // SubProg patch_forward_goto pc: 37 op: STARTLINE (58)

    /** fwdref.e:223			prep_forward_error( ref )*/
    // SubProg patch_forward_goto pc: 39 op: PROC (27)
    _37prep_forward_error(_ref_62337);
    // SubProg patch_forward_goto pc: 42 op: STARTLINE (58)

    /** fwdref.e:224			CompileErr( 156, { fr[FR_DATA][2] })*/
    // SubProg patch_forward_goto pc: 44 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62338);
    _30897 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30897);
    _30898 = (object)*(((s1_ptr)_2)->base + 2);
    _30897 = NOVALUE;
    // SubProg patch_forward_goto pc: 52 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30898);
    ((intptr_t*)_2)[1] = _30898;
    _30899 = MAKE_SEQ(_1);
    _30898 = NOVALUE;
    // SubProg patch_forward_goto pc: 56 op: PROC (27)
    _49CompileErr(156, _30899, 0);
    _30899 = NOVALUE;
    // SubProg patch_forward_goto pc: 61 op: NOP1 (159)
L1: // addr: 62 pc: 61 sub: 62333 op: 159
    // SubProg patch_forward_goto pc: 62 op: STARTLINE (58)

    /** fwdref.e:227		Goto_block(  fr[FR_DATA][1], fr[FR_DATA][3], fr[FR_PC] )*/
    // SubProg patch_forward_goto pc: 64 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62338);
    _30900 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 68 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30900);
    _30901 = (object)*(((s1_ptr)_2)->base + 1);
    _30900 = NOVALUE;
    // SubProg patch_forward_goto pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62338);
    _30902 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30902);
    _30903 = (object)*(((s1_ptr)_2)->base + 3);
    _30902 = NOVALUE;
    // SubProg patch_forward_goto pc: 80 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62338);
    _30904 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_goto pc: 84 op: PROC (27)
    Ref(_30901);
    Ref(_30903);
    Ref(_30904);
    _64Goto_block(_30901, _30903, _30904);
    _30901 = NOVALUE;
    _30903 = NOVALUE;
    _30904 = NOVALUE;
    // SubProg patch_forward_goto pc: 89 op: STARTLINE (58)

    /** fwdref.e:229		shifting_sub = 0*/
    // SubProg patch_forward_goto pc: 91 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_goto pc: 94 op: STARTLINE (58)

    /** fwdref.e:231		reset_code()*/
    // SubProg patch_forward_goto pc: 96 op: PROC (27)
    _37reset_code();
    // SubProg patch_forward_goto pc: 98 op: STARTLINE (58)

    /** fwdref.e:232		resolved_reference( ref )*/
    // SubProg patch_forward_goto pc: 100 op: PROC (27)
    _37resolved_reference(_ref_62337);
    // SubProg patch_forward_goto pc: 103 op: STARTLINE (58)

    /** fwdref.e:233	end procedure*/
    // SubProg patch_forward_goto pc: 105 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_goto

// block var ref_62337

// block var fr_62338
    DeRefDS(_fr_62338);
    _30894 = NOVALUE;
    return;
    // SubProg patch_forward_goto pc: 108 op: BADRETURNF (43)
    ;
}


void _37patch_forward_call(object _tok_62359, object _ref_62360)
{
    object _fr_62361 = NOVALUE;
    object _sub_62364 = NOVALUE;
    object _defarg_62370 = NOVALUE;
    object _paramsym_62374 = NOVALUE;
    object _old_62377 = NOVALUE;
    object _tx_62381 = NOVALUE;
    object _code_sub_62391 = NOVALUE;
    object _args_62393 = NOVALUE;
    object _is_func_62398 = NOVALUE;
    object _real_file_62412 = NOVALUE;
    object _code_62416 = NOVALUE;
    object _temp_sub_62418 = NOVALUE;
    object _pc_62420 = NOVALUE;
    object _next_pc_62422 = NOVALUE;
    object _supplied_args_62423 = NOVALUE;
    object _name_62426 = NOVALUE;
    object _old_temps_allocated_62462 = NOVALUE;
    object _temp_target_62471 = NOVALUE;
    object _converted_code_62474 = NOVALUE;
    object _target_62490 = NOVALUE;
    object _has_defaults_62496 = NOVALUE;
    object _goto_target_62497 = NOVALUE;
    object _defarg_62500 = NOVALUE;
    object _code_len_62501 = NOVALUE;
    object _extra_default_args_62503 = NOVALUE;
    object _param_sym_62506 = NOVALUE;
    object _params_62507 = NOVALUE;
    object _orig_code_62509 = NOVALUE;
    object _orig_linetable_62510 = NOVALUE;
    object _ar_sp_62514 = NOVALUE;
    object _pre_refs_62518 = NOVALUE;
    object _old_fwd_params_62533 = NOVALUE;
    object _temp_shifting_sub_62574 = NOVALUE;
    object _new_code_62578 = NOVALUE;
    object _routine_type_62587 = NOVALUE;
    object _31669 = NOVALUE; // 63876 31669
    object _31046 = NOVALUE; // 62641 31046
    object _31045 = NOVALUE; // 62640 31045
    object _31044 = NOVALUE; // 62639 31044
// skipping _31043  name type: 0
    object _31042 = NOVALUE; // 62637 31042
    object _31041 = NOVALUE; // 62636 31041
    object _31040 = NOVALUE; // 62635 31040
    object _31039 = NOVALUE; // 62634 31039
    object _31038 = NOVALUE; // 62633 31038
    object _31037 = NOVALUE; // 62632 31037
    object _31036 = NOVALUE; // 62631 31036
    object _31035 = NOVALUE; // 62630 31035
    object _31034 = NOVALUE; // 62629 31034
    object _31033 = NOVALUE; // 62628 31033
    object _31032 = NOVALUE; // 62624 31032
    object _31031 = NOVALUE; // 62623 31031
    object _31030 = NOVALUE; // 62622 31030
// skipping _31029  name type: 0
    object _31028 = NOVALUE; // 62620 31028
    object _31027 = NOVALUE; // 62619 31027
    object _31026 = NOVALUE; // 62618 31026
    object _31025 = NOVALUE; // 62617 31025
    object _31024 = NOVALUE; // 62616 31024
    object _31023 = NOVALUE; // 62615 31023
    object _31022 = NOVALUE; // 62614 31022
    object _31021 = NOVALUE; // 62613 31021
// skipping _31020  name type: 0
    object _31019 = NOVALUE; // 62607 31019
// skipping _31018  name type: 0
// skipping _31017  name type: 0
    object _31016 = NOVALUE; // 62603 31016
    object _31015 = NOVALUE; // 62601 31015
    object _31014 = NOVALUE; // 62600 31014
    object _31013 = NOVALUE; // 62598 31013
// skipping _31011  name type: 0
// skipping _31010  name type: 0
// skipping _31009  name type: 0
    object _31008 = NOVALUE; // 62585 31008
    object _31007 = NOVALUE; // 62577 31007
    object _31006 = NOVALUE; // 62576 31006
    object _31005 = NOVALUE; // 62573 31005
    object _31004 = NOVALUE; // 62572 31004
// skipping _31003  name type: 0
    object _31002 = NOVALUE; // 62567 31002
    object _31001 = NOVALUE; // 62565 31001
    object _31000 = NOVALUE; // 62564 31000
    object _30999 = NOVALUE; // 62562 30999
    object _30998 = NOVALUE; // 62560 30998
    object _30997 = NOVALUE; // 62558 30997
// skipping _30996  name type: 0
    object _30995 = NOVALUE; // 62551 30995
    object _30994 = NOVALUE; // 62550 30994
// skipping _30993  name type: 0
    object _30992 = NOVALUE; // 62548 30992
    object _30991 = NOVALUE; // 62547 30991
    object _30990 = NOVALUE; // 62546 30990
    object _30989 = NOVALUE; // 62545 30989
// skipping _30988  name type: 0
    object _30987 = NOVALUE; // 62541 30987
// skipping _30986  name type: 0
    object _30985 = NOVALUE; // 62538 30985
    object _30984 = NOVALUE; // 62537 30984
    object _30983 = NOVALUE; // 62536 30983
// skipping _30982  name type: 0
    object _30981 = NOVALUE; // 62531 30981
    object _30980 = NOVALUE; // 62530 30980
// skipping _30979  name type: 0
    object _30978 = NOVALUE; // 62527 30978
// skipping _30977  name type: 0
    object _30976 = NOVALUE; // 62523 30976
// skipping _30975  name type: 0
// skipping _30974  name type: 0
    object _30973 = NOVALUE; // 62516 30973
// skipping _30972  name type: 0
// skipping _30971  name type: 0
// skipping _30970  name type: 0
    object _30969 = NOVALUE; // 62498 30969
// skipping _30968  name type: 0
    object _30967 = NOVALUE; // 62494 30967
    object _30966 = NOVALUE; // 62493 30966
// skipping _30965  name type: 0
    object _30964 = NOVALUE; // 62488 30964
    object _30963 = NOVALUE; // 62487 30963
    object _30962 = NOVALUE; // 62485 30962
    object _30961 = NOVALUE; // 62484 30961
// skipping _30960  name type: 0
    object _30959 = NOVALUE; // 62482 30959
    object _30958 = NOVALUE; // 62480 30958
    object _30957 = NOVALUE; // 62479 30957
    object _30956 = NOVALUE; // 62478 30956
    object _30955 = NOVALUE; // 62477 30955
// skipping _30954  name type: 0
    object _30953 = NOVALUE; // 62469 30953
    object _30952 = NOVALUE; // 62467 30952
    object _30951 = NOVALUE; // 62466 30951
    object _30950 = NOVALUE; // 62461 30950
    object _30949 = NOVALUE; // 62460 30949
    object _30948 = NOVALUE; // 62458 30948
    object _30947 = NOVALUE; // 62454 30947
    object _30946 = NOVALUE; // 62452 30946
    object _30945 = NOVALUE; // 62449 30945
    object _30944 = NOVALUE; // 62448 30944
    object _30943 = NOVALUE; // 62447 30943
    object _30942 = NOVALUE; // 62446 30942
    object _30941 = NOVALUE; // 62445 30941
    object _30940 = NOVALUE; // 62443 30940
    object _30938 = NOVALUE; // 62437 30938
    object _30937 = NOVALUE; // 62435 30937
    object _30936 = NOVALUE; // 62433 30936
    object _30935 = NOVALUE; // 62432 30935
    object _30934 = NOVALUE; // 62430 30934
// skipping _30933  name type: 0
// skipping _30932  name type: 0
    object _30931 = NOVALUE; // 62424 30931
// skipping _30930  name type: 0
// skipping _30929  name type: 0
// skipping _30928  name type: 0
    object _30927 = NOVALUE; // 62410 30927
    object _30926 = NOVALUE; // 62408 30926
    object _30925 = NOVALUE; // 62406 30925
    object _30924 = NOVALUE; // 62404 30924
    object _30923 = NOVALUE; // 62402 30923
    object _30922 = NOVALUE; // 62400 30922
// skipping _30921  name type: 0
    object _30920 = NOVALUE; // 62395 30920
// skipping _30919  name type: 0
// skipping _30918  name type: 0
    object _30917 = NOVALUE; // 62388 30917
// skipping _30916  name type: 0
    object _30915 = NOVALUE; // 62385 30915
    object _30914 = NOVALUE; // 62383 30914
// skipping _30913  name type: 0
    object _30912 = NOVALUE; // 62379 30912
// skipping _30911  name type: 0
// skipping _30910  name type: 0
    object _30909 = NOVALUE; // 62371 30909
    object _30908 = NOVALUE; // 62369 30908
    object _30907 = NOVALUE; // 62368 30907
// skipping _30906  name type: 0
// skipping _30905  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_call pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 3 op: STARTLINE (58)

    /** fwdref.e:242		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_call pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62361);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62361 = (object)*(((s1_ptr)_2)->base + _ref_62360);
    Ref(_fr_62361);
    // SubProg patch_forward_call pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 13 op: STARTLINE (58)

    /** fwdref.e:243		symtab_index sub = tok[T_SYM]*/
    // SubProg patch_forward_call pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62359);
    _sub_62364 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sub_62364)){
        _sub_62364 = (object)DBL_PTR(_sub_62364)->dbl;
    }
    // SubProg patch_forward_call pc: 23 op: STARTLINE (58)

    /** fwdref.e:245		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_call pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _30907 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_call pc: 29 op: IS_A_SEQUENCE (68)
    _30908 = IS_SEQUENCE(_30907);
    _30907 = NOVALUE;
    // SubProg patch_forward_call pc: 32 op: IF (20)
    if (_30908 == 0)
    {
        _30908 = NOVALUE;
        goto L1; // [32] 117
    }
    else{
        _30908 = NOVALUE;
    }
    // SubProg patch_forward_call pc: 35 op: STARTLINE (58)

    /** fwdref.e:246			sequence defarg = fr[FR_DATA][1]*/
    // SubProg patch_forward_call pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _30909 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_call pc: 41 op: RHS_SUBS_CHECK (92)
    DeRef(_defarg_62370);
    _2 = (object)SEQ_PTR(_30909);
    _defarg_62370 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_defarg_62370);
    _30909 = NOVALUE;
    // SubProg patch_forward_call pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 47 op: STARTLINE (58)

    /** fwdref.e:247			symtab_index paramsym = defarg[2]*/
    // SubProg patch_forward_call pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defarg_62370);
    _paramsym_62374 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_paramsym_62374)){
        _paramsym_62374 = (object)DBL_PTR(_paramsym_62374)->dbl;
    }
    // SubProg patch_forward_call pc: 55 op: STARTLINE (58)

    /** fwdref.e:248			token old = { RECORDED, defarg[3] }*/
    // SubProg patch_forward_call pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defarg_62370);
    _30912 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 63 op: RIGHT_BRACE_2 (85)
    Ref(_30912);
    DeRef(_old_62377);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _30912;
    _old_62377 = MAKE_SEQ(_1);
    _30912 = NOVALUE;
    // SubProg patch_forward_call pc: 67 op: STARTLINE (58)

    /** fwdref.e:249			integer tx = find( old, SymTab[paramsym][S_CODE] )*/
    // SubProg patch_forward_call pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30914 = (object)*(((s1_ptr)_2)->base + _paramsym_62374);
    // SubProg patch_forward_call pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30914);
    if (!IS_ATOM_INT(_34S_CODE_14855)){
        _30915 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    }
    else{
        _30915 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
    }
    _30914 = NOVALUE;
    // SubProg patch_forward_call pc: 81 op: FIND_FROM (176)
    _tx_62381 = find_from(_old_62377, _30915, 1);
    _30915 = NOVALUE;
    // SubProg patch_forward_call pc: 86 op: STARTLINE (58)

    /** fwdref.e:250			SymTab[paramsym][S_CODE][tx] = tok*/
    // SubProg patch_forward_call pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 90 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_paramsym_62374 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_call pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 97 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_CODE_14855))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    else
    _3 = (object)(_34S_CODE_14855 + ((s1_ptr)_2)->base);
    _30917 = NOVALUE;
    // SubProg patch_forward_call pc: 102 op: PASSIGN_SUBS (162)
    Ref(_tok_62359);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _tx_62381);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _tok_62359;
    DeRef(_1);
    _30917 = NOVALUE;
    // SubProg patch_forward_call pc: 106 op: STARTLINE (58)

    /** fwdref.e:251			resolved_reference( ref )*/
    // SubProg patch_forward_call pc: 108 op: PROC (27)
    _37resolved_reference(_ref_62360);
    // SubProg patch_forward_call pc: 111 op: STARTLINE (58)

    /** fwdref.e:252			return*/
    // SubProg patch_forward_call pc: 113 op: RETURNP (29)

// Exiting block BLOCK: IF-

// block var defarg_62370
    DeRefDS(_defarg_62370);

// block var paramsym_62374

// block var old_62377
    DeRefDS(_old_62377);

// block var tx_62381

// Exiting block BLOCK: patch_forward_call

// block var tok_62359
    DeRef(_tok_62359);

// block var ref_62360

// block var fr_62361
    DeRefDS(_fr_62361);

// block var sub_62364

// block var code_sub_62391

// block var args_62393

// block var is_func_62398

// block var real_file_62412

// block var code_62416
    DeRef(_code_62416);

// block var temp_sub_62418

// block var pc_62420

// block var next_pc_62422

// block var supplied_args_62423

// block var name_62426
    DeRef(_name_62426);

// block var old_temps_allocated_62462

// block var target_62490

// block var has_defaults_62496

// block var goto_target_62497

// block var defarg_62500

// block var code_len_62501

// block var extra_default_args_62503

// block var param_sym_62506

// block var params_62507
    DeRef(_params_62507);

// block var orig_code_62509
    DeRef(_orig_code_62509);

// block var orig_linetable_62510
    DeRef(_orig_linetable_62510);

// block var ar_sp_62514

// block var pre_refs_62518

// block var old_fwd_params_62533
    DeRef(_old_fwd_params_62533);

// block var temp_shifting_sub_62574

// block var new_code_62578
    DeRef(_new_code_62578);
    return;
    // SubProg patch_forward_call pc: 116 op: NOP1 (159)
L1: // addr: 117 pc: 116 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 117 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var defarg_62370
    DeRef(_defarg_62370);
    _defarg_62370 = NOVALUE;

// block var paramsym_62374

// block var old_62377
    DeRef(_old_62377);
    _old_62377 = NOVALUE;

// block var tx_62381
    // SubProg patch_forward_call pc: 119 op: STARTLINE (58)

    /** fwdref.e:255		integer code_sub = fr[FR_SUBPROG]*/
    // SubProg patch_forward_call pc: 121 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62361);
    _code_sub_62391 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_code_sub_62391))
    _code_sub_62391 = (object)DBL_PTR(_code_sub_62391)->dbl;
    // SubProg patch_forward_call pc: 125 op: STARTLINE (58)

    /** fwdref.e:257		integer args = SymTab[sub][S_NUM_ARGS]*/
    // SubProg patch_forward_call pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 129 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30920 = (object)*(((s1_ptr)_2)->base + _sub_62364);
    // SubProg patch_forward_call pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30920);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _args_62393 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _args_62393 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    if (!IS_ATOM_INT(_args_62393)){
        _args_62393 = (object)DBL_PTR(_args_62393)->dbl;
    }
    _30920 = NOVALUE;
    // SubProg patch_forward_call pc: 141 op: STARTLINE (58)

    /** fwdref.e:258		integer is_func = (SymTab[sub][S_TOKEN] = FUNC) or (SymTab[sub][S_TOKEN] = TYPE)*/
    // SubProg patch_forward_call pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 145 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30922 = (object)*(((s1_ptr)_2)->base + _sub_62364);
    // SubProg patch_forward_call pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30922);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _30923 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _30923 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _30922 = NOVALUE;
    // SubProg patch_forward_call pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 157 op: EQUALS (3)
    if (IS_ATOM_INT(_30923)) {
        _30924 = (_30923 == 501);
    }
    else {
        _30924 = binary_op(EQUALS, _30923, 501);
    }
    _30923 = NOVALUE;
    // SubProg patch_forward_call pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30925 = (object)*(((s1_ptr)_2)->base + _sub_62364);
    // SubProg patch_forward_call pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 169 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30925);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _30926 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _30926 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _30925 = NOVALUE;
    // SubProg patch_forward_call pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 175 op: EQUALS (3)
    if (IS_ATOM_INT(_30926)) {
        _30927 = (_30926 == 504);
    }
    else {
        _30927 = binary_op(EQUALS, _30926, 504);
    }
    _30926 = NOVALUE;
    // SubProg patch_forward_call pc: 179 op: OR (9)
    if (IS_ATOM_INT(_30924) && IS_ATOM_INT(_30927)) {
        _is_func_62398 = (_30924 != 0 || _30927 != 0);
    }
    else {
        _is_func_62398 = binary_op(OR, _30924, _30927);
    }
    DeRef(_30924);
    _30924 = NOVALUE;
    DeRef(_30927);
    _30927 = NOVALUE;
    // SubProg patch_forward_call pc: 183 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_func_62398)) {
        _1 = (object)(DBL_PTR(_is_func_62398)->dbl);
        DeRefDS(_is_func_62398);
        _is_func_62398 = _1;
    }
    // SubProg patch_forward_call pc: 185 op: STARTLINE (58)

    /** fwdref.e:260		integer real_file = current_file_no*/
    // SubProg patch_forward_call pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 189 op: ASSIGN (18)
    _real_file_62412 = _34current_file_no_15188;
    // SubProg patch_forward_call pc: 192 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 194 op: STARTLINE (58)

    /** fwdref.e:261		current_file_no = fr[FR_FILE]*/
    // SubProg patch_forward_call pc: 196 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _34current_file_no_15188 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_34current_file_no_15188)){
        _34current_file_no_15188 = (object)DBL_PTR(_34current_file_no_15188)->dbl;
    }
    // SubProg patch_forward_call pc: 202 op: STARTLINE (58)

    /** fwdref.e:263		set_code( ref )*/
    // SubProg patch_forward_call pc: 204 op: PROC (27)
    _37set_code(_ref_62360);
    // SubProg patch_forward_call pc: 207 op: STARTLINE (58)

    /** fwdref.e:264		sequence code = Code*/
    // SubProg patch_forward_call pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 211 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_code_62416);
    _code_62416 = _34Code_15276;
    // SubProg patch_forward_call pc: 214 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 216 op: STARTLINE (58)

    /** fwdref.e:265		integer temp_sub = CurrentSub*/
    // SubProg patch_forward_call pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 220 op: ASSIGN (18)
    _temp_sub_62418 = _34CurrentSub_15196;
    // SubProg patch_forward_call pc: 223 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 225 op: STARTLINE (58)

    /** fwdref.e:267		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_call pc: 227 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62361);
    _pc_62420 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62420))
    _pc_62420 = (object)DBL_PTR(_pc_62420)->dbl;
    // SubProg patch_forward_call pc: 231 op: STARTLINE (58)

    /** fwdref.e:268		integer next_pc = pc*/
    // SubProg patch_forward_call pc: 233 op: ASSIGN_I (113)
    _next_pc_62422 = _pc_62420;
    // SubProg patch_forward_call pc: 236 op: STARTLINE (58)

    /** fwdref.e:269		integer supplied_args = code[pc+2]*/
    // SubProg patch_forward_call pc: 238 op: PLUS (11)
    _30931 = _pc_62420 + 2;
    // SubProg patch_forward_call pc: 242 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_code_62416);
    _supplied_args_62423 = (object)*(((s1_ptr)_2)->base + _30931);
    if (!IS_ATOM_INT(_supplied_args_62423))
    _supplied_args_62423 = (object)DBL_PTR(_supplied_args_62423)->dbl;
    // SubProg patch_forward_call pc: 246 op: STARTLINE (58)

    /** fwdref.e:270		sequence name = fr[FR_NAME]*/
    // SubProg patch_forward_call pc: 248 op: RHS_SUBS (25)
    DeRef(_name_62426);
    _2 = (object)SEQ_PTR(_fr_62361);
    _name_62426 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_62426);
    // SubProg patch_forward_call pc: 252 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 254 op: STARTLINE (58)

    /** fwdref.e:272		if Code[pc] != FUNC_FORWARD and Code[pc] != PROC_FORWARD then*/
    // SubProg patch_forward_call pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    _30934 = (object)*(((s1_ptr)_2)->base + _pc_62420);
    // SubProg patch_forward_call pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 264 op: NOTEQ (4)
    if (IS_ATOM_INT(_30934)) {
        _30935 = (_30934 != 196);
    }
    else {
        _30935 = binary_op(NOTEQ, _30934, 196);
    }
    _30934 = NOVALUE;
    // SubProg patch_forward_call pc: 268 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_30935)) {
        if (_30935 == 0) {
            goto L2; // [268] 332
        }
    }
    else {
        if (DBL_PTR(_30935)->dbl == 0.0) {
            goto L2; // [268] 332
        }
    }
    // SubProg patch_forward_call pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 274 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    _30937 = (object)*(((s1_ptr)_2)->base + _pc_62420);
    // SubProg patch_forward_call pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 280 op: NOTEQ (4)
    if (IS_ATOM_INT(_30937)) {
        _30938 = (_30937 != 195);
    }
    else {
        _30938 = binary_op(NOTEQ, _30937, 195);
    }
    _30937 = NOVALUE;
    // SubProg patch_forward_call pc: 284 op: NOP1 (159)
    // SubProg patch_forward_call pc: 285 op: IF (20)
    if (_30938 == 0) {
        DeRef(_30938);
        _30938 = NOVALUE;
        goto L2; // [285] 332
    }
    else {
        if (!IS_ATOM_INT(_30938) && DBL_PTR(_30938)->dbl == 0.0){
            DeRef(_30938);
            _30938 = NOVALUE;
            goto L2; // [285] 332
        }
        DeRef(_30938);
        _30938 = NOVALUE;
    }
    DeRef(_30938);
    _30938 = NOVALUE;
    // SubProg patch_forward_call pc: 288 op: STARTLINE (58)

    /** fwdref.e:273			prep_forward_error( ref )*/
    // SubProg patch_forward_call pc: 290 op: PROC (27)
    _37prep_forward_error(_ref_62360);
    // SubProg patch_forward_call pc: 293 op: STARTLINE (58)

    /** fwdref.e:274			CompileErr( "The forward call to [4] wasn't where we thought it would be: [1]:[2]:[3]",*/
    // SubProg patch_forward_call pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _30940 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg patch_forward_call pc: 303 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _30941 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_call pc: 307 op: PROC (27)
    Ref(_30941);
    _30942 = _53sym_name(_30941);
    _30941 = NOVALUE;
    // SubProg patch_forward_call pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _30943 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg patch_forward_call pc: 315 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _30944 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_call pc: 319 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30940);
    ((intptr_t*)_2)[1] = _30940;
    ((intptr_t*)_2)[2] = _30942;
    Ref(_30943);
    ((intptr_t*)_2)[3] = _30943;
    Ref(_30944);
    ((intptr_t*)_2)[4] = _30944;
    _30945 = MAKE_SEQ(_1);
    _30944 = NOVALUE;
    _30943 = NOVALUE;
    _30942 = NOVALUE;
    _30940 = NOVALUE;
    // SubProg patch_forward_call pc: 326 op: PROC (27)
    RefDS(_30939);
    _49CompileErr(_30939, _30945, 0);
    _30945 = NOVALUE;
    // SubProg patch_forward_call pc: 331 op: NOP1 (159)
L2: // addr: 332 pc: 331 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 332 op: STARTLINE (58)

    /** fwdref.e:278		if SymTab[sub][S_DEPRECATED] then*/
    // SubProg patch_forward_call pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 336 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30946 = (object)*(((s1_ptr)_2)->base + _sub_62364);
    // SubProg patch_forward_call pc: 340 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 342 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30946);
    _30947 = (object)*(((s1_ptr)_2)->base + 30);
    _30946 = NOVALUE;
    // SubProg patch_forward_call pc: 346 op: IF (20)
    if (_30947 == 0) {
        _30947 = NOVALUE;
        goto L3; // [346] 375
    }
    else {
        if (!IS_ATOM_INT(_30947) && DBL_PTR(_30947)->dbl == 0.0){
            _30947 = NOVALUE;
            goto L3; // [346] 375
        }
        _30947 = NOVALUE;
    }
    _30947 = NOVALUE;
    // SubProg patch_forward_call pc: 349 op: STARTLINE (58)

    /** fwdref.e:279			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    // SubProg patch_forward_call pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 355 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _30948 = (object)*(((s1_ptr)_2)->base + _sub_62364);
    // SubProg patch_forward_call pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 361 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30948);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _30949 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _30949 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _30948 = NOVALUE;
    // SubProg patch_forward_call pc: 365 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30949);
    ((intptr_t*)_2)[1] = _30949;
    _30950 = MAKE_SEQ(_1);
    _30949 = NOVALUE;
    // SubProg patch_forward_call pc: 369 op: PROC (27)
    _49Warning(327, 16384, _30950);
    _30950 = NOVALUE;
    // SubProg patch_forward_call pc: 374 op: NOP1 (159)
L3: // addr: 375 pc: 374 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 375 op: STARTLINE (58)

    /** fwdref.e:282		integer old_temps_allocated = temps_allocated*/
    // SubProg patch_forward_call pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 379 op: ASSIGN (18)
    _old_temps_allocated_62462 = _53temps_allocated_46787;
    // SubProg patch_forward_call pc: 382 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 384 op: STARTLINE (58)

    /** fwdref.e:283		temps_allocated = 0*/
    // SubProg patch_forward_call pc: 386 op: ASSIGN (18)
    _53temps_allocated_46787 = 0;
    // SubProg patch_forward_call pc: 389 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 391 op: STARTLINE (58)

    /** fwdref.e:285		if is_func and fr[FR_OP] = PROC then*/
    // SubProg patch_forward_call pc: 393 op: SC1_AND_IF (146)
    if (_is_func_62398 == 0) {
        goto L4; // [393] 481
    }
    // SubProg patch_forward_call pc: 397 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _30952 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_call pc: 401 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 403 op: EQUALS (3)
    if (IS_ATOM_INT(_30952)) {
        _30953 = (_30952 == 27);
    }
    else {
        _30953 = binary_op(EQUALS, _30952, 27);
    }
    _30952 = NOVALUE;
    // SubProg patch_forward_call pc: 407 op: NOP1 (159)
    // SubProg patch_forward_call pc: 408 op: IF (20)
    if (_30953 == 0) {
        DeRef(_30953);
        _30953 = NOVALUE;
        goto L4; // [408] 481
    }
    else {
        if (!IS_ATOM_INT(_30953) && DBL_PTR(_30953)->dbl == 0.0){
            DeRef(_30953);
            _30953 = NOVALUE;
            goto L4; // [408] 481
        }
        DeRef(_30953);
        _30953 = NOVALUE;
    }
    DeRef(_30953);
    _30953 = NOVALUE;
    // SubProg patch_forward_call pc: 411 op: STARTLINE (58)

    /** fwdref.e:288			symtab_index temp_target = NewTempSym()*/
    // SubProg patch_forward_call pc: 413 op: PROC (27)
    _temp_target_62471 = _53NewTempSym(0);
    // SubProg patch_forward_call pc: 417 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_temp_target_62471)) {
        _1 = (object)(DBL_PTR(_temp_target_62471)->dbl);
        DeRefDS(_temp_target_62471);
        _temp_target_62471 = _1;
    }
    // SubProg patch_forward_call pc: 419 op: STARTLINE (58)

    /** fwdref.e:289			sequence converted_code = */
    // SubProg patch_forward_call pc: 421 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 423 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 425 op: PLUS1 (93)
    _30955 = _pc_62420 + 1;
    if (_30955 > MAXINT){
        _30955 = NewDouble((eudouble)_30955);
    }
    // SubProg patch_forward_call pc: 429 op: PLUS (11)
    _30956 = _pc_62420 + 2;
    if ((object)((uintptr_t)_30956 + (uintptr_t)HIGH_BITS) >= 0){
        _30956 = NewDouble((eudouble)_30956);
    }
    // SubProg patch_forward_call pc: 433 op: PLUS (11)
    if (IS_ATOM_INT(_30956)) {
        _30957 = _30956 + _supplied_args_62423;
    }
    else {
        _30957 = NewDouble(DBL_PTR(_30956)->dbl + (eudouble)_supplied_args_62423);
    }
    DeRef(_30956);
    _30956 = NOVALUE;
    // SubProg patch_forward_call pc: 437 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_30958;
    RHS_Slice(_34Code_15276, _30955, _30957);
    // SubProg patch_forward_call pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 444 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 208;
    ((intptr_t *)_2)[2] = _temp_target_62471;
    _30959 = MAKE_SEQ(_1);
    // SubProg patch_forward_call pc: 448 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _30959;
        concat_list[1] = _temp_target_62471;
        concat_list[2] = _30958;
        concat_list[3] = 196;
        Concat_N((object_ptr)&_converted_code_62474, concat_list, 4);
    }
    DeRefDS(_30959);
    _30959 = NOVALUE;
    DeRefDS(_30958);
    _30958 = NOVALUE;
    // SubProg patch_forward_call pc: 455 op: STARTLINE (58)

    /** fwdref.e:295			replace_code( converted_code, pc, pc + 2 + supplied_args, code_sub )*/
    // SubProg patch_forward_call pc: 457 op: PLUS (11)
    _30961 = _pc_62420 + 2;
    if ((object)((uintptr_t)_30961 + (uintptr_t)HIGH_BITS) >= 0){
        _30961 = NewDouble((eudouble)_30961);
    }
    // SubProg patch_forward_call pc: 461 op: PLUS (11)
    if (IS_ATOM_INT(_30961)) {
        _30962 = _30961 + _supplied_args_62423;
        if ((object)((uintptr_t)_30962 + (uintptr_t)HIGH_BITS) >= 0){
            _30962 = NewDouble((eudouble)_30962);
        }
    }
    else {
        _30962 = NewDouble(DBL_PTR(_30961)->dbl + (eudouble)_supplied_args_62423);
    }
    DeRef(_30961);
    _30961 = NOVALUE;
    // SubProg patch_forward_call pc: 465 op: PROC (27)
    RefDS(_converted_code_62474);
    _37replace_code(_converted_code_62474, _pc_62420, _30962, _code_sub_62391);
    _30962 = NOVALUE;
    // SubProg patch_forward_call pc: 471 op: STARTLINE (58)

    /** fwdref.e:297			code = Code*/
    // SubProg patch_forward_call pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 475 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_code_62416);
    _code_62416 = _34Code_15276;
    // SubProg patch_forward_call pc: 478 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 480 op: NOP1 (159)
L4: // addr: 481 pc: 480 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var temp_target_62471

// block var converted_code_62474
    DeRef(_converted_code_62474);
    _converted_code_62474 = NOVALUE;
    // SubProg patch_forward_call pc: 483 op: STARTLINE (58)

    /** fwdref.e:299		next_pc +=*/
    // SubProg patch_forward_call pc: 485 op: PLUS (11)
    _30963 = 3 + _supplied_args_62423;
    if ((object)((uintptr_t)_30963 + (uintptr_t)HIGH_BITS) >= 0){
        _30963 = NewDouble((eudouble)_30963);
    }
    // SubProg patch_forward_call pc: 489 op: PLUS (11)
    if (IS_ATOM_INT(_30963)) {
        _30964 = _30963 + _is_func_62398;
        if ((object)((uintptr_t)_30964 + (uintptr_t)HIGH_BITS) >= 0){
            _30964 = NewDouble((eudouble)_30964);
        }
    }
    else {
        _30964 = NewDouble(DBL_PTR(_30963)->dbl + (eudouble)_is_func_62398);
    }
    DeRef(_30963);
    _30963 = NOVALUE;
    // SubProg patch_forward_call pc: 493 op: PLUS (11)
    if (IS_ATOM_INT(_30964)) {
        _next_pc_62422 = _next_pc_62422 + _30964;
    }
    else {
        _next_pc_62422 = NewDouble((eudouble)_next_pc_62422 + DBL_PTR(_30964)->dbl);
    }
    DeRef(_30964);
    _30964 = NOVALUE;
    // SubProg patch_forward_call pc: 497 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_pc_62422)) {
        _1 = (object)(DBL_PTR(_next_pc_62422)->dbl);
        DeRefDS(_next_pc_62422);
        _next_pc_62422 = _1;
    }
    // SubProg patch_forward_call pc: 499 op: STARTLINE (58)

    /** fwdref.e:303		integer target*/
    // SubProg patch_forward_call pc: 501 op: STARTLINE (58)

    /** fwdref.e:304		if is_func then*/
    // SubProg patch_forward_call pc: 503 op: IF (20)
    if (_is_func_62398 == 0)
    {
        goto L5; // [503] 525
    }
    else{
    }
    // SubProg patch_forward_call pc: 506 op: STARTLINE (58)

    /** fwdref.e:305			target = Code[pc + 3 + supplied_args]*/
    // SubProg patch_forward_call pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 510 op: PLUS (11)
    _30966 = _pc_62420 + 3;
    if ((object)((uintptr_t)_30966 + (uintptr_t)HIGH_BITS) >= 0){
        _30966 = NewDouble((eudouble)_30966);
    }
    // SubProg patch_forward_call pc: 514 op: PLUS (11)
    if (IS_ATOM_INT(_30966)) {
        _30967 = _30966 + _supplied_args_62423;
    }
    else {
        _30967 = NewDouble(DBL_PTR(_30966)->dbl + (eudouble)_supplied_args_62423);
    }
    DeRef(_30966);
    _30966 = NOVALUE;
    // SubProg patch_forward_call pc: 518 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    if (!IS_ATOM_INT(_30967)){
        _target_62490 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30967)->dbl));
    }
    else{
        _target_62490 = (object)*(((s1_ptr)_2)->base + _30967);
    }
    if (!IS_ATOM_INT(_target_62490)){
        _target_62490 = (object)DBL_PTR(_target_62490)->dbl;
    }
    // SubProg patch_forward_call pc: 524 op: NOP1 (159)
L5: // addr: 525 pc: 524 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 525 op: STARTLINE (58)

    /** fwdref.e:307		integer has_defaults = 0*/
    // SubProg patch_forward_call pc: 527 op: ASSIGN_I (113)
    _has_defaults_62496 = 0;
    // SubProg patch_forward_call pc: 530 op: STARTLINE (58)

    /** fwdref.e:308		integer goto_target = length( code ) + 1*/
    // SubProg patch_forward_call pc: 532 op: LENGTH (42)
    if (IS_SEQUENCE(_code_62416)){
            _30969 = SEQ_PTR(_code_62416)->length;
    }
    else {
        _30969 = 1;
    }
    // SubProg patch_forward_call pc: 535 op: PLUS1_I (117)
    _goto_target_62497 = _30969 + 1;
    _30969 = NOVALUE;
    // SubProg patch_forward_call pc: 539 op: STARTLINE (58)

    /** fwdref.e:309		integer defarg = 0*/
    // SubProg patch_forward_call pc: 541 op: ASSIGN_I (113)
    _defarg_62500 = 0;
    // SubProg patch_forward_call pc: 544 op: STARTLINE (58)

    /** fwdref.e:310		integer code_len = length(code)*/
    // SubProg patch_forward_call pc: 546 op: LENGTH (42)
    if (IS_SEQUENCE(_code_62416)){
            _code_len_62501 = SEQ_PTR(_code_62416)->length;
    }
    else {
        _code_len_62501 = 1;
    }
    // SubProg patch_forward_call pc: 549 op: STARTLINE (58)

    /** fwdref.e:312		integer extra_default_args = 0*/
    // SubProg patch_forward_call pc: 551 op: ASSIGN_I (113)
    _extra_default_args_62503 = 0;
    // SubProg patch_forward_call pc: 554 op: STARTLINE (58)

    /** fwdref.e:313		set_dont_read( 1 )*/
    // SubProg patch_forward_call pc: 556 op: PROC (27)
    _61set_dont_read(1);
    // SubProg patch_forward_call pc: 559 op: STARTLINE (58)

    /** fwdref.e:314		reset_private_lists()*/
    // SubProg patch_forward_call pc: 561 op: STARTLINE (58)

    /** fwdref.e:212		fwd_private_sym  = {}*/
    // SubProg patch_forward_call pc: 563 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_37fwd_private_sym_62322);
    _37fwd_private_sym_62322 = _21936;
    // SubProg patch_forward_call pc: 566 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 568 op: STARTLINE (58)

    /** fwdref.e:213		fwd_private_name = {}*/
    // SubProg patch_forward_call pc: 570 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37fwd_private_name_62323);
    _37fwd_private_name_62323 = _21936;
    // SubProg patch_forward_call pc: 573 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 575 op: STARTLINE (58)

    /** fwdref.e:214	end procedure*/
    // SubProg patch_forward_call pc: 577 op: ELSE (23)
    goto L6; // [577] 580
    // SubProg patch_forward_call pc: 579 op: NOP1 (159)
L6: // addr: 580 pc: 579 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 580 op: STARTLINE (58)

    /** fwdref.e:315		integer param_sym = sub*/
    // SubProg patch_forward_call pc: 582 op: ASSIGN (18)
    _param_sym_62506 = _sub_62364;
    // SubProg patch_forward_call pc: 585 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 587 op: STARTLINE (58)

    /** fwdref.e:316		sequence params = repeat( 0, args )*/
    // SubProg patch_forward_call pc: 589 op: REPEAT (32)
    DeRef(_params_62507);
    _params_62507 = Repeat(0, _args_62393);
    // SubProg patch_forward_call pc: 593 op: STARTLINE (58)

    /** fwdref.e:317		sequence orig_code = code*/
    // SubProg patch_forward_call pc: 595 op: ASSIGN (18)
    RefDS(_code_62416);
    DeRef(_orig_code_62509);
    _orig_code_62509 = _code_62416;
    // SubProg patch_forward_call pc: 598 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 600 op: STARTLINE (58)

    /** fwdref.e:318		sequence orig_linetable = LineTable*/
    // SubProg patch_forward_call pc: 602 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 604 op: ASSIGN (18)
    RefDS(_34LineTable_15277);
    DeRef(_orig_linetable_62510);
    _orig_linetable_62510 = _34LineTable_15277;
    // SubProg patch_forward_call pc: 607 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 609 op: STARTLINE (58)

    /** fwdref.e:319		LineTable = {}*/
    // SubProg patch_forward_call pc: 611 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_34LineTable_15277);
    _34LineTable_15277 = _21936;
    // SubProg patch_forward_call pc: 614 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 616 op: STARTLINE (58)

    /** fwdref.e:320		Code = {}*/
    // SubProg patch_forward_call pc: 618 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_34Code_15276);
    _34Code_15276 = _21936;
    // SubProg patch_forward_call pc: 621 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 623 op: STARTLINE (58)

    /** fwdref.e:323		integer ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    // SubProg patch_forward_call pc: 625 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 629 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _30973 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg patch_forward_call pc: 633 op: FIND_FROM (176)
    _ar_sp_62514 = find_from(_code_sub_62391, _30973, 1);
    _30973 = NOVALUE;
    // SubProg patch_forward_call pc: 638 op: STARTLINE (58)

    /** fwdref.e:324		integer pre_refs*/
    // SubProg patch_forward_call pc: 640 op: STARTLINE (58)

    /** fwdref.e:326		if code_sub = TopLevelSub then*/
    // SubProg patch_forward_call pc: 642 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 644 op: EQUALS_IFW (104)
    if (_code_sub_62391 != _34TopLevelSub_15195)
    goto L7; // [644] 664
    // SubProg patch_forward_call pc: 648 op: STARTLINE (58)

    /** fwdref.e:327			pre_refs = length( toplevel_references[current_file_no] )*/
    // SubProg patch_forward_call pc: 650 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 652 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 654 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    _30976 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg patch_forward_call pc: 658 op: LENGTH (42)
    if (IS_SEQUENCE(_30976)){
            _pre_refs_62518 = SEQ_PTR(_30976)->length;
    }
    else {
        _pre_refs_62518 = 1;
    }
    _30976 = NOVALUE;
    // SubProg patch_forward_call pc: 661 op: ELSE (23)
    goto L8; // [661] 697
    // SubProg patch_forward_call pc: 663 op: NOP1 (159)
L7: // addr: 664 pc: 663 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 664 op: STARTLINE (58)

    /** fwdref.e:329			ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    // SubProg patch_forward_call pc: 666 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 668 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 670 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _30978 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg patch_forward_call pc: 674 op: FIND_FROM (176)
    _ar_sp_62514 = find_from(_code_sub_62391, _30978, 1);
    _30978 = NOVALUE;
    // SubProg patch_forward_call pc: 679 op: STARTLINE (58)

    /** fwdref.e:330			pre_refs = length( active_references[current_file_no][ar_sp] )*/
    // SubProg patch_forward_call pc: 681 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 683 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 685 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _30980 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg patch_forward_call pc: 689 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30980);
    _30981 = (object)*(((s1_ptr)_2)->base + _ar_sp_62514);
    _30980 = NOVALUE;
    // SubProg patch_forward_call pc: 693 op: LENGTH (42)
    if (IS_SEQUENCE(_30981)){
            _pre_refs_62518 = SEQ_PTR(_30981)->length;
    }
    else {
        _pre_refs_62518 = 1;
    }
    _30981 = NOVALUE;
    // SubProg patch_forward_call pc: 696 op: NOP1 (159)
L8: // addr: 697 pc: 696 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 697 op: STARTLINE (58)

    /** fwdref.e:333		sequence old_fwd_params = {}*/
    // SubProg patch_forward_call pc: 699 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_old_fwd_params_62533);
    _old_fwd_params_62533 = _21936;
    // SubProg patch_forward_call pc: 702 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 704 op: STARTLINE (58)

    /** fwdref.e:334		for i = pc + 3 to pc + args + 2 do*/
    // SubProg patch_forward_call pc: 706 op: PLUS (11)
    _30983 = _pc_62420 + 3;
    if ((object)((uintptr_t)_30983 + (uintptr_t)HIGH_BITS) >= 0){
        _30983 = NewDouble((eudouble)_30983);
    }
    // SubProg patch_forward_call pc: 710 op: PLUS (11)
    _30984 = _pc_62420 + _args_62393;
    if ((object)((uintptr_t)_30984 + (uintptr_t)HIGH_BITS) >= 0){
        _30984 = NewDouble((eudouble)_30984);
    }
    // SubProg patch_forward_call pc: 714 op: PLUS (11)
    if (IS_ATOM_INT(_30984)) {
        _30985 = _30984 + 2;
        if ((object)((uintptr_t)_30985 + (uintptr_t)HIGH_BITS) >= 0){
            _30985 = NewDouble((eudouble)_30985);
        }
    }
    else {
        _30985 = NewDouble(DBL_PTR(_30984)->dbl + (eudouble)2);
    }
    DeRef(_30984);
    _30984 = NOVALUE;
    // SubProg patch_forward_call pc: 718 op: FOR (21)
    {
        object _i_62535;
        Ref(_30983);
        _i_62535 = _30983;
L9: // addr: 725 pc: 718 sub: 62356 op: 21
        if (binary_op_a(GREATER, _i_62535, _30985)){
            goto LA; // [718] 879
        }
        // SubProg patch_forward_call pc: 725 op: STARTLINE (58)

        /** fwdref.e:335			defarg += 1*/
        // SubProg patch_forward_call pc: 727 op: PLUS1_I (117)
        _defarg_62500 = _defarg_62500 + 1;
        // SubProg patch_forward_call pc: 731 op: STARTLINE (58)

        /** fwdref.e:336			param_sym = SymTab[param_sym][S_NEXT]*/
        // SubProg patch_forward_call pc: 733 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 735 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _30987 = (object)*(((s1_ptr)_2)->base + _param_sym_62506);
        // SubProg patch_forward_call pc: 739 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 741 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_30987);
        _param_sym_62506 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_sym_62506)){
            _param_sym_62506 = (object)DBL_PTR(_param_sym_62506)->dbl;
        }
        _30987 = NOVALUE;
        // SubProg patch_forward_call pc: 747 op: STARTLINE (58)

        /** fwdref.e:337			if defarg > supplied_args or i > length( code ) or not code[i] then*/
        // SubProg patch_forward_call pc: 749 op: GREATER (6)
        _30989 = (_defarg_62500 > _supplied_args_62423);
        // SubProg patch_forward_call pc: 753 op: SC1_OR (143)
        if (_30989 != 0) {
            _30990 = 1;
            goto LB; // [753] 768
        }
        // SubProg patch_forward_call pc: 757 op: LENGTH (42)
        if (IS_SEQUENCE(_code_62416)){
                _30991 = SEQ_PTR(_code_62416)->length;
        }
        else {
            _30991 = 1;
        }
        // SubProg patch_forward_call pc: 760 op: GREATER (6)
        if (IS_ATOM_INT(_i_62535)) {
            _30992 = (_i_62535 > _30991);
        }
        else {
            _30992 = (DBL_PTR(_i_62535)->dbl > (eudouble)_30991);
        }
        _30991 = NOVALUE;
        // SubProg patch_forward_call pc: 764 op: SC2_OR (144)
        _30990 = (_30992 != 0);
        // SubProg patch_forward_call pc: 767 op: NOP1 (159)
LB: // addr: 768 pc: 767 sub: 62356 op: 159
        // SubProg patch_forward_call pc: 768 op: SC1_OR_IF (147)
        if (_30990 != 0) {
            goto LC; // [768] 784
        }
        // SubProg patch_forward_call pc: 772 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62416);
        if (!IS_ATOM_INT(_i_62535)){
            _30994 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62535)->dbl));
        }
        else{
            _30994 = (object)*(((s1_ptr)_2)->base + _i_62535);
        }
        // SubProg patch_forward_call pc: 776 op: NOT (7)
        if (IS_ATOM_INT(_30994)) {
            _30995 = (_30994 == 0);
        }
        else {
            _30995 = unary_op(NOT, _30994);
        }
        _30994 = NOVALUE;
        // SubProg patch_forward_call pc: 779 op: NOP1 (159)
        // SubProg patch_forward_call pc: 780 op: IF (20)
        if (_30995 == 0) {
            DeRef(_30995);
            _30995 = NOVALUE;
            goto LD; // [780] 834
        }
        else {
            if (!IS_ATOM_INT(_30995) && DBL_PTR(_30995)->dbl == 0.0){
                DeRef(_30995);
                _30995 = NOVALUE;
                goto LD; // [780] 834
            }
            DeRef(_30995);
            _30995 = NOVALUE;
        }
        DeRef(_30995);
        _30995 = NOVALUE;
        // SubProg patch_forward_call pc: 783 op: NOP1 (159)
LC: // addr: 784 pc: 783 sub: 62356 op: 159
        // SubProg patch_forward_call pc: 784 op: STARTLINE (58)

        /** fwdref.e:339				has_defaults = 1*/
        // SubProg patch_forward_call pc: 786 op: ASSIGN_I (113)
        _has_defaults_62496 = 1;
        // SubProg patch_forward_call pc: 789 op: STARTLINE (58)

        /** fwdref.e:340				extra_default_args += 1*/
        // SubProg patch_forward_call pc: 791 op: PLUS1_I (117)
        _extra_default_args_62503 = _extra_default_args_62503 + 1;
        // SubProg patch_forward_call pc: 795 op: STARTLINE (58)

        /** fwdref.e:345				show_params( sub )*/
        // SubProg patch_forward_call pc: 797 op: PROC (27)
        _53show_params(_sub_62364);
        // SubProg patch_forward_call pc: 800 op: STARTLINE (58)

        /** fwdref.e:346				set_error_info( ref )*/
        // SubProg patch_forward_call pc: 802 op: PROC (27)
        _37set_error_info(_ref_62360);
        // SubProg patch_forward_call pc: 805 op: STARTLINE (58)

        /** fwdref.e:347				Parse_default_arg(sub, defarg, fwd_private_name, fwd_private_sym) --call_proc( parse_arg_rid, { sub, defarg, fwd_private_name, fwd_private_sym } )*/
        // SubProg patch_forward_call pc: 807 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 809 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 811 op: PROC (27)
        RefDS(_37fwd_private_name_62323);
        RefDS(_37fwd_private_sym_62322);
        _38Parse_default_arg(_sub_62364, _defarg_62500, _37fwd_private_name_62323, _37fwd_private_sym_62322);
        // SubProg patch_forward_call pc: 817 op: STARTLINE (58)

        /** fwdref.e:348				hide_params( sub )*/
        // SubProg patch_forward_call pc: 819 op: PROC (27)
        _53hide_params(_sub_62364);
        // SubProg patch_forward_call pc: 822 op: STARTLINE (58)

        /** fwdref.e:349				params[defarg] = Pop()*/
        // SubProg patch_forward_call pc: 824 op: PROC (27)
        _30997 = _45Pop();
        // SubProg patch_forward_call pc: 827 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_params_62507);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62500);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _30997;
        if( _1 != _30997 ){
            DeRef(_1);
        }
        _30997 = NOVALUE;
        // SubProg patch_forward_call pc: 831 op: ELSE (23)
        goto LE; // [831] 872
        // SubProg patch_forward_call pc: 833 op: NOP1 (159)
LD: // addr: 834 pc: 833 sub: 62356 op: 159
        // SubProg patch_forward_call pc: 834 op: STARTLINE (58)

        /** fwdref.e:351				extra_default_args = 0*/
        // SubProg patch_forward_call pc: 836 op: ASSIGN_I (113)
        _extra_default_args_62503 = 0;
        // SubProg patch_forward_call pc: 839 op: STARTLINE (58)

        /** fwdref.e:352				add_private_symbol( code[i], SymTab[param_sym][S_NAME] )*/
        // SubProg patch_forward_call pc: 841 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62416);
        if (!IS_ATOM_INT(_i_62535)){
            _30998 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62535)->dbl));
        }
        else{
            _30998 = (object)*(((s1_ptr)_2)->base + _i_62535);
        }
        // SubProg patch_forward_call pc: 845 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 847 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _30999 = (object)*(((s1_ptr)_2)->base + _param_sym_62506);
        // SubProg patch_forward_call pc: 851 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 853 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_30999);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _31000 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _31000 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        _30999 = NOVALUE;
        // SubProg patch_forward_call pc: 857 op: PROC (27)
        Ref(_30998);
        Ref(_31000);
        _37add_private_symbol(_30998, _31000);
        _30998 = NOVALUE;
        _31000 = NOVALUE;
        // SubProg patch_forward_call pc: 861 op: STARTLINE (58)

        /** fwdref.e:353				params[defarg] = code[i]*/
        // SubProg patch_forward_call pc: 863 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62416);
        if (!IS_ATOM_INT(_i_62535)){
            _31001 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62535)->dbl));
        }
        else{
            _31001 = (object)*(((s1_ptr)_2)->base + _i_62535);
        }
        // SubProg patch_forward_call pc: 867 op: ASSIGN_SUBS (16)
        Ref(_31001);
        _2 = (object)SEQ_PTR(_params_62507);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62500);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31001;
        if( _1 != _31001 ){
            DeRef(_1);
        }
        _31001 = NOVALUE;
        // SubProg patch_forward_call pc: 871 op: NOP1 (159)
LE: // addr: 872 pc: 871 sub: 62356 op: 159
        // SubProg patch_forward_call pc: 872 op: STARTLINE (58)

        /** fwdref.e:355		end for*/
        // SubProg patch_forward_call pc: 874 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62535;
        if (IS_ATOM_INT(_i_62535)) {
            _i_62535 = _i_62535 + 1;
            if ((object)((uintptr_t)_i_62535 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62535 = NewDouble((eudouble)_i_62535);
            }
        }
        else {
            _i_62535 = binary_op_a(PLUS, _i_62535, 1);
        }
        DeRef(_0);
        goto L9; // [874] 725
LA: // addr: 879 pc: 874 sub: 62356 op: 54
        ;
        DeRef(_i_62535);
    }
    // SubProg patch_forward_call pc: 879 op: STARTLINE (58)

    /** fwdref.e:357		SymTab[code_sub][S_STACK_SPACE] += temps_allocated*/
    // SubProg patch_forward_call pc: 881 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 883 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_code_sub_62391 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_call pc: 888 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 892 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_34S_STACK_SPACE_14903)){
        _31004 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
    }
    else{
        _31004 = (object)*(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
    }
    _31002 = NOVALUE;
    // SubProg patch_forward_call pc: 896 op: PLUS (11)
    if (IS_ATOM_INT(_31004)) {
        _31005 = _31004 + _53temps_allocated_46787;
        if ((object)((uintptr_t)_31005 + (uintptr_t)HIGH_BITS) >= 0){
            _31005 = NewDouble((eudouble)_31005);
        }
    }
    else {
        _31005 = binary_op(PLUS, _31004, _53temps_allocated_46787);
    }
    _31004 = NOVALUE;
    // SubProg patch_forward_call pc: 900 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_STACK_SPACE_14903))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31005;
    if( _1 != _31005 ){
        DeRef(_1);
    }
    _31005 = NOVALUE;
    _31002 = NOVALUE;
    // SubProg patch_forward_call pc: 904 op: STARTLINE (58)

    /** fwdref.e:358		temps_allocated = old_temps_allocated*/
    // SubProg patch_forward_call pc: 906 op: ASSIGN (18)
    _53temps_allocated_46787 = _old_temps_allocated_62462;
    // SubProg patch_forward_call pc: 909 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 911 op: STARTLINE (58)

    /** fwdref.e:363		integer temp_shifting_sub = shifting_sub*/
    // SubProg patch_forward_call pc: 913 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 915 op: ASSIGN_I (113)
    _temp_shifting_sub_62574 = _37shifting_sub_62151;
    // SubProg patch_forward_call pc: 918 op: STARTLINE (58)

    /** fwdref.e:364		shift( -pc, pc-1 )*/
    // SubProg patch_forward_call pc: 920 op: UMINUS (12)
    if ((uintptr_t)_pc_62420 == (uintptr_t)HIGH_BITS){
        _31006 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31006 = - _pc_62420;
    }
    // SubProg patch_forward_call pc: 923 op: MINUS (10)
    _31007 = _pc_62420 - 1;
    if ((object)((uintptr_t)_31007 +(uintptr_t) HIGH_BITS) >= 0){
        _31007 = NewDouble((eudouble)_31007);
    }
    // SubProg patch_forward_call pc: 927 op: ASSIGN (18)
    Ref(_31006);
    DeRef(_31669);
    _31669 = _31006;
    // SubProg patch_forward_call pc: 930 op: PROC (27)
    _65shift(_31006, _31007, _31669);
    _31006 = NOVALUE;
    _31007 = NOVALUE;
    _31669 = NOVALUE;
    // SubProg patch_forward_call pc: 935 op: STARTLINE (58)

    /** fwdref.e:366		sequence new_code = Code*/
    // SubProg patch_forward_call pc: 937 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 939 op: ASSIGN (18)
    RefDS(_34Code_15276);
    DeRef(_new_code_62578);
    _new_code_62578 = _34Code_15276;
    // SubProg patch_forward_call pc: 942 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 944 op: STARTLINE (58)

    /** fwdref.e:367		Code = orig_code*/
    // SubProg patch_forward_call pc: 946 op: ASSIGN (18)
    RefDS(_orig_code_62509);
    DeRefDS(_34Code_15276);
    _34Code_15276 = _orig_code_62509;
    // SubProg patch_forward_call pc: 949 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 951 op: STARTLINE (58)

    /** fwdref.e:368		orig_code = {}*/
    // SubProg patch_forward_call pc: 953 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_orig_code_62509);
    _orig_code_62509 = _21936;
    // SubProg patch_forward_call pc: 956 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 958 op: STARTLINE (58)

    /** fwdref.e:369		LineTable = orig_linetable*/
    // SubProg patch_forward_call pc: 960 op: ASSIGN (18)
    RefDS(_orig_linetable_62510);
    DeRef(_34LineTable_15277);
    _34LineTable_15277 = _orig_linetable_62510;
    // SubProg patch_forward_call pc: 963 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 965 op: STARTLINE (58)

    /** fwdref.e:370		orig_linetable = {}*/
    // SubProg patch_forward_call pc: 967 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_orig_linetable_62510);
    _orig_linetable_62510 = _21936;
    // SubProg patch_forward_call pc: 970 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 972 op: STARTLINE (58)

    /** fwdref.e:371		set_dont_read( 0 )*/
    // SubProg patch_forward_call pc: 974 op: PROC (27)
    _61set_dont_read(0);
    // SubProg patch_forward_call pc: 977 op: STARTLINE (58)

    /** fwdref.e:372		current_file_no = real_file*/
    // SubProg patch_forward_call pc: 979 op: ASSIGN (18)
    _34current_file_no_15188 = _real_file_62412;
    // SubProg patch_forward_call pc: 982 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 984 op: STARTLINE (58)

    /** fwdref.e:374		if args != ( supplied_args + extra_default_args ) then*/
    // SubProg patch_forward_call pc: 986 op: PLUS (11)
    _31008 = _supplied_args_62423 + _extra_default_args_62503;
    if ((object)((uintptr_t)_31008 + (uintptr_t)HIGH_BITS) >= 0){
        _31008 = NewDouble((eudouble)_31008);
    }
    // SubProg patch_forward_call pc: 990 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _args_62393, _31008)){
        DeRef(_31008);
        _31008 = NOVALUE;
        goto LF; // [990] 1068
    }
    DeRef(_31008);
    _31008 = NOVALUE;
    // SubProg patch_forward_call pc: 994 op: STARTLINE (58)

    /** fwdref.e:375			sequence routine_type*/
    // SubProg patch_forward_call pc: 996 op: STARTLINE (58)

    /** fwdref.e:377			if is_func then */
    // SubProg patch_forward_call pc: 998 op: IF (20)
    if (_is_func_62398 == 0)
    {
        goto L10; // [998] 1011
    }
    else{
    }
    // SubProg patch_forward_call pc: 1001 op: STARTLINE (58)

    /** fwdref.e:378				routine_type = "function"*/
    // SubProg patch_forward_call pc: 1003 op: ASSIGN (18)
    RefDS(_26131);
    DeRefi(_routine_type_62587);
    _routine_type_62587 = _26131;
    // SubProg patch_forward_call pc: 1006 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 1008 op: ELSE (23)
    goto L11; // [1008] 1019
    // SubProg patch_forward_call pc: 1010 op: NOP1 (159)
L10: // addr: 1011 pc: 1010 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 1011 op: STARTLINE (58)

    /** fwdref.e:380				routine_type = "procedure"*/
    // SubProg patch_forward_call pc: 1013 op: ASSIGN (18)
    RefDS(_26185);
    DeRefi(_routine_type_62587);
    _routine_type_62587 = _26185;
    // SubProg patch_forward_call pc: 1016 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 1018 op: NOP1 (159)
L11: // addr: 1019 pc: 1018 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 1019 op: STARTLINE (58)

    /** fwdref.e:382			current_file_no = fr[FR_FILE]*/
    // SubProg patch_forward_call pc: 1021 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _34current_file_no_15188 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_34current_file_no_15188)){
        _34current_file_no_15188 = (object)DBL_PTR(_34current_file_no_15188)->dbl;
    }
    // SubProg patch_forward_call pc: 1027 op: STARTLINE (58)

    /** fwdref.e:383			line_number = fr[FR_LINE]*/
    // SubProg patch_forward_call pc: 1029 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _34line_number_15189 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_34line_number_15189)){
        _34line_number_15189 = (object)DBL_PTR(_34line_number_15189)->dbl;
    }
    // SubProg patch_forward_call pc: 1035 op: STARTLINE (58)

    /** fwdref.e:384			CompileErr( 158,*/
    // SubProg patch_forward_call pc: 1037 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1039 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1041 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _31013 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg patch_forward_call pc: 1045 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1047 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1049 op: PLUS (11)
    _31014 = _supplied_args_62423 + _extra_default_args_62503;
    if ((object)((uintptr_t)_31014 + (uintptr_t)HIGH_BITS) >= 0){
        _31014 = NewDouble((eudouble)_31014);
    }
    // SubProg patch_forward_call pc: 1053 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_31013);
    ((intptr_t*)_2)[1] = _31013;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    RefDS(_routine_type_62587);
    ((intptr_t*)_2)[3] = _routine_type_62587;
    RefDS(_name_62426);
    ((intptr_t*)_2)[4] = _name_62426;
    ((intptr_t*)_2)[5] = _args_62393;
    ((intptr_t*)_2)[6] = _31014;
    _31015 = MAKE_SEQ(_1);
    _31014 = NOVALUE;
    _31013 = NOVALUE;
    // SubProg patch_forward_call pc: 1062 op: PROC (27)
    _49CompileErr(158, _31015, 0);
    _31015 = NOVALUE;
    // SubProg patch_forward_call pc: 1067 op: NOP1 (159)
LF: // addr: 1068 pc: 1067 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 1068 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var routine_type_62587
    DeRefi(_routine_type_62587);
    _routine_type_62587 = NOVALUE;
    // SubProg patch_forward_call pc: 1070 op: STARTLINE (58)

    /** fwdref.e:388		new_code &= PROC & sub & params*/
    // SubProg patch_forward_call pc: 1072 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1074 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _params_62507;
        concat_list[1] = _sub_62364;
        concat_list[2] = 27;
        Concat_N((object_ptr)&_31016, concat_list, 3);
    }
    // SubProg patch_forward_call pc: 1080 op: CONCAT (15)
    Concat((object_ptr)&_new_code_62578, _new_code_62578, _31016);
    DeRefDS(_31016);
    _31016 = NOVALUE;
    // SubProg patch_forward_call pc: 1084 op: STARTLINE (58)

    /** fwdref.e:389		if is_func then*/
    // SubProg patch_forward_call pc: 1086 op: IF (20)
    if (_is_func_62398 == 0)
    {
        goto L12; // [1086] 1098
    }
    else{
    }
    // SubProg patch_forward_call pc: 1089 op: STARTLINE (58)

    /** fwdref.e:390			new_code &= target*/
    // SubProg patch_forward_call pc: 1091 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1093 op: CONCAT (15)
    Append(&_new_code_62578, _new_code_62578, _target_62490);
    // SubProg patch_forward_call pc: 1097 op: NOP1 (159)
L12: // addr: 1098 pc: 1097 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 1098 op: STARTLINE (58)

    /** fwdref.e:393		replace_code( new_code, pc, next_pc - 1, code_sub )*/
    // SubProg patch_forward_call pc: 1100 op: MINUS (10)
    _31019 = _next_pc_62422 - 1;
    if ((object)((uintptr_t)_31019 +(uintptr_t) HIGH_BITS) >= 0){
        _31019 = NewDouble((eudouble)_31019);
    }
    // SubProg patch_forward_call pc: 1104 op: PROC (27)
    RefDS(_new_code_62578);
    _37replace_code(_new_code_62578, _pc_62420, _31019, _code_sub_62391);
    _31019 = NOVALUE;
    // SubProg patch_forward_call pc: 1110 op: STARTLINE (58)

    /** fwdref.e:395		if code_sub = TopLevelSub then*/
    // SubProg patch_forward_call pc: 1112 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1114 op: EQUALS_IFW (104)
    if (_code_sub_62391 != _34TopLevelSub_15195)
    goto L13; // [1114] 1195
    // SubProg patch_forward_call pc: 1118 op: STARTLINE (58)

    /** fwdref.e:396			for i = pre_refs + 1 to length( toplevel_references[fr[FR_FILE]] ) do*/
    // SubProg patch_forward_call pc: 1120 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1122 op: PLUS1 (93)
    _31021 = _pre_refs_62518 + 1;
    if (_31021 > MAXINT){
        _31021 = NewDouble((eudouble)_31021);
    }
    // SubProg patch_forward_call pc: 1126 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _31022 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 1132 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    if (!IS_ATOM_INT(_31022)){
        _31023 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31022)->dbl));
    }
    else{
        _31023 = (object)*(((s1_ptr)_2)->base + _31022);
    }
    // SubProg patch_forward_call pc: 1136 op: LENGTH (42)
    if (IS_SEQUENCE(_31023)){
            _31024 = SEQ_PTR(_31023)->length;
    }
    else {
        _31024 = 1;
    }
    _31023 = NOVALUE;
    // SubProg patch_forward_call pc: 1139 op: FOR (21)
    {
        object _i_62612;
        Ref(_31021);
        _i_62612 = _31021;
L14: // addr: 1146 pc: 1139 sub: 62356 op: 21
        if (binary_op_a(GREATER, _i_62612, _31024)){
            goto L15; // [1139] 1192
        }
        // SubProg patch_forward_call pc: 1146 op: STARTLINE (58)

        /** fwdref.e:397				forward_references[toplevel_references[fr[FR_FILE]][i]][FR_PC] += pc - 1*/
        // SubProg patch_forward_call pc: 1148 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1150 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1152 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62361);
        _31025 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_call pc: 1156 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37toplevel_references_62125);
        if (!IS_ATOM_INT(_31025)){
            _31026 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31025)->dbl));
        }
        else{
            _31026 = (object)*(((s1_ptr)_2)->base + _31025);
        }
        // SubProg patch_forward_call pc: 1160 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31026);
        if (!IS_ATOM_INT(_i_62612)){
            _31027 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62612)->dbl));
        }
        else{
            _31027 = (object)*(((s1_ptr)_2)->base + _i_62612);
        }
        _31026 = NOVALUE;
        // SubProg patch_forward_call pc: 1164 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37forward_references_62122 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31027))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31027)->dbl));
        else
        _3 = (object)(_31027 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_call pc: 1169 op: MINUS (10)
        _31030 = _pc_62420 - 1;
        if ((object)((uintptr_t)_31030 +(uintptr_t) HIGH_BITS) >= 0){
            _31030 = NewDouble((eudouble)_31030);
        }
        // SubProg patch_forward_call pc: 1173 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31031 = (object)*(((s1_ptr)_2)->base + 5);
        _31028 = NOVALUE;
        // SubProg patch_forward_call pc: 1177 op: PLUS (11)
        if (IS_ATOM_INT(_31031) && IS_ATOM_INT(_31030)) {
            _31032 = _31031 + _31030;
            if ((object)((uintptr_t)_31032 + (uintptr_t)HIGH_BITS) >= 0){
                _31032 = NewDouble((eudouble)_31032);
            }
        }
        else {
            _31032 = binary_op(PLUS, _31031, _31030);
        }
        _31031 = NOVALUE;
        DeRef(_31030);
        _31030 = NOVALUE;
        // SubProg patch_forward_call pc: 1181 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31032;
        if( _1 != _31032 ){
            DeRef(_1);
        }
        _31032 = NOVALUE;
        _31028 = NOVALUE;
        // SubProg patch_forward_call pc: 1185 op: STARTLINE (58)

        /** fwdref.e:398			end for*/
        // SubProg patch_forward_call pc: 1187 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62612;
        if (IS_ATOM_INT(_i_62612)) {
            _i_62612 = _i_62612 + 1;
            if ((object)((uintptr_t)_i_62612 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62612 = NewDouble((eudouble)_i_62612);
            }
        }
        else {
            _i_62612 = binary_op_a(PLUS, _i_62612, 1);
        }
        DeRef(_0);
        goto L14; // [1187] 1146
L15: // addr: 1192 pc: 1187 sub: 62356 op: 54
        ;
        DeRef(_i_62612);
    }
    // SubProg patch_forward_call pc: 1192 op: ELSE (23)
    goto L16; // [1192] 1278
    // SubProg patch_forward_call pc: 1194 op: NOP1 (159)
L13: // addr: 1195 pc: 1194 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 1195 op: STARTLINE (58)

    /** fwdref.e:400			for i = pre_refs + 1 to length( active_references[fr[FR_FILE]][ar_sp] ) do*/
    // SubProg patch_forward_call pc: 1197 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1199 op: PLUS1 (93)
    _31033 = _pre_refs_62518 + 1;
    if (_31033 > MAXINT){
        _31033 = NewDouble((eudouble)_31033);
    }
    // SubProg patch_forward_call pc: 1203 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62361);
    _31034 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 1209 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!IS_ATOM_INT(_31034)){
        _31035 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31034)->dbl));
    }
    else{
        _31035 = (object)*(((s1_ptr)_2)->base + _31034);
    }
    // SubProg patch_forward_call pc: 1213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31035);
    _31036 = (object)*(((s1_ptr)_2)->base + _ar_sp_62514);
    _31035 = NOVALUE;
    // SubProg patch_forward_call pc: 1217 op: LENGTH (42)
    if (IS_SEQUENCE(_31036)){
            _31037 = SEQ_PTR(_31036)->length;
    }
    else {
        _31037 = 1;
    }
    _31036 = NOVALUE;
    // SubProg patch_forward_call pc: 1220 op: FOR (21)
    {
        object _i_62627;
        Ref(_31033);
        _i_62627 = _31033;
L17: // addr: 1227 pc: 1220 sub: 62356 op: 21
        if (binary_op_a(GREATER, _i_62627, _31037)){
            goto L18; // [1220] 1277
        }
        // SubProg patch_forward_call pc: 1227 op: STARTLINE (58)

        /** fwdref.e:401				forward_references[active_references[fr[FR_FILE]][ar_sp][i]][FR_PC] += pc - 1*/
        // SubProg patch_forward_call pc: 1229 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1231 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1233 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62361);
        _31038 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_call pc: 1237 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37active_references_62124);
        if (!IS_ATOM_INT(_31038)){
            _31039 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31038)->dbl));
        }
        else{
            _31039 = (object)*(((s1_ptr)_2)->base + _31038);
        }
        // SubProg patch_forward_call pc: 1241 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31039);
        _31040 = (object)*(((s1_ptr)_2)->base + _ar_sp_62514);
        _31039 = NOVALUE;
        // SubProg patch_forward_call pc: 1245 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31040);
        if (!IS_ATOM_INT(_i_62627)){
            _31041 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62627)->dbl));
        }
        else{
            _31041 = (object)*(((s1_ptr)_2)->base + _i_62627);
        }
        _31040 = NOVALUE;
        // SubProg patch_forward_call pc: 1249 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37forward_references_62122 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31041))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31041)->dbl));
        else
        _3 = (object)(_31041 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_call pc: 1254 op: MINUS (10)
        _31044 = _pc_62420 - 1;
        if ((object)((uintptr_t)_31044 +(uintptr_t) HIGH_BITS) >= 0){
            _31044 = NewDouble((eudouble)_31044);
        }
        // SubProg patch_forward_call pc: 1258 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31045 = (object)*(((s1_ptr)_2)->base + 5);
        _31042 = NOVALUE;
        // SubProg patch_forward_call pc: 1262 op: PLUS (11)
        if (IS_ATOM_INT(_31045) && IS_ATOM_INT(_31044)) {
            _31046 = _31045 + _31044;
            if ((object)((uintptr_t)_31046 + (uintptr_t)HIGH_BITS) >= 0){
                _31046 = NewDouble((eudouble)_31046);
            }
        }
        else {
            _31046 = binary_op(PLUS, _31045, _31044);
        }
        _31045 = NOVALUE;
        DeRef(_31044);
        _31044 = NOVALUE;
        // SubProg patch_forward_call pc: 1266 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31046;
        if( _1 != _31046 ){
            DeRef(_1);
        }
        _31046 = NOVALUE;
        _31042 = NOVALUE;
        // SubProg patch_forward_call pc: 1270 op: STARTLINE (58)

        /** fwdref.e:402			end for*/
        // SubProg patch_forward_call pc: 1272 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62627;
        if (IS_ATOM_INT(_i_62627)) {
            _i_62627 = _i_62627 + 1;
            if ((object)((uintptr_t)_i_62627 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62627 = NewDouble((eudouble)_i_62627);
            }
        }
        else {
            _i_62627 = binary_op_a(PLUS, _i_62627, 1);
        }
        DeRef(_0);
        goto L17; // [1272] 1227
L18: // addr: 1277 pc: 1272 sub: 62356 op: 54
        ;
        DeRef(_i_62627);
    }
    // SubProg patch_forward_call pc: 1277 op: NOP1 (159)
L16: // addr: 1278 pc: 1277 sub: 62356 op: 159
    // SubProg patch_forward_call pc: 1278 op: STARTLINE (58)

    /** fwdref.e:405		reset_code()*/
    // SubProg patch_forward_call pc: 1280 op: PROC (27)
    _37reset_code();
    // SubProg patch_forward_call pc: 1282 op: STARTLINE (58)

    /** fwdref.e:408		resolved_reference( ref )*/
    // SubProg patch_forward_call pc: 1284 op: PROC (27)
    _37resolved_reference(_ref_62360);
    // SubProg patch_forward_call pc: 1287 op: STARTLINE (58)

    /** fwdref.e:409	end procedure*/
    // SubProg patch_forward_call pc: 1289 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_call

// block var tok_62359
    DeRef(_tok_62359);

// block var ref_62360

// block var fr_62361
    DeRef(_fr_62361);

// block var sub_62364

// block var code_sub_62391

// block var args_62393

// block var is_func_62398

// block var real_file_62412

// block var code_62416
    DeRef(_code_62416);

// block var temp_sub_62418

// block var pc_62420

// block var next_pc_62422

// block var supplied_args_62423

// block var name_62426
    DeRef(_name_62426);

// block var old_temps_allocated_62462

// block var target_62490

// block var has_defaults_62496

// block var goto_target_62497

// block var defarg_62500

// block var code_len_62501

// block var extra_default_args_62503

// block var param_sym_62506

// block var params_62507
    DeRef(_params_62507);

// block var orig_code_62509
    DeRef(_orig_code_62509);

// block var orig_linetable_62510
    DeRef(_orig_linetable_62510);

// block var ar_sp_62514

// block var pre_refs_62518

// block var old_fwd_params_62533
    DeRef(_old_fwd_params_62533);

// block var temp_shifting_sub_62574

// block var new_code_62578
    DeRef(_new_code_62578);
    _30981 = NOVALUE;
    DeRef(_31033);
    _31033 = NOVALUE;
    DeRef(_30935);
    _30935 = NOVALUE;
    _31041 = NOVALUE;
    DeRef(_30931);
    _30931 = NOVALUE;
    DeRef(_30989);
    _30989 = NOVALUE;
    _31025 = NOVALUE;
    DeRef(_30967);
    _30967 = NOVALUE;
    DeRef(_30992);
    _30992 = NOVALUE;
    DeRef(_30983);
    _30983 = NOVALUE;
    _30976 = NOVALUE;
    _31023 = NOVALUE;
    DeRef(_30985);
    _30985 = NOVALUE;
    _31022 = NOVALUE;
    _31034 = NOVALUE;
    DeRef(_30955);
    _30955 = NOVALUE;
    DeRef(_30957);
    _30957 = NOVALUE;
    _31038 = NOVALUE;
    _31036 = NOVALUE;
    DeRef(_31021);
    _31021 = NOVALUE;
    _31027 = NOVALUE;
    return;
    // SubProg patch_forward_call pc: 1292 op: BADRETURNF (43)
    ;
}


void _37set_error_info(object _ref_62644)
{
    object _fr_62645 = NOVALUE;
// skipping _31051  name type: 0
// skipping _31050  name type: 0
// skipping _31049  name type: 0
// skipping _31048  name type: 0
// skipping _31047  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_error_info pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_error_info pc: 3 op: STARTLINE (58)

    /** fwdref.e:412		sequence fr = forward_references[ref]*/
    // SubProg set_error_info pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_error_info pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62645);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62645 = (object)*(((s1_ptr)_2)->base + _ref_62644);
    Ref(_fr_62645);
    // SubProg set_error_info pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg set_error_info pc: 13 op: STARTLINE (58)

    /** fwdref.e:413		ThisLine        = fr[FR_THISLINE]*/
    // SubProg set_error_info pc: 15 op: RHS_SUBS (25)
    DeRef(_49ThisLine_48709);
    _2 = (object)SEQ_PTR(_fr_62645);
    _49ThisLine_48709 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_49ThisLine_48709);
    // SubProg set_error_info pc: 19 op: STARTLINE (58)

    /** fwdref.e:414		bp              = fr[FR_BP]*/
    // SubProg set_error_info pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62645);
    _49bp_48713 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_49bp_48713)){
        _49bp_48713 = (object)DBL_PTR(_49bp_48713)->dbl;
    }
    // SubProg set_error_info pc: 27 op: STARTLINE (58)

    /** fwdref.e:415		line_number     = fr[FR_LINE]*/
    // SubProg set_error_info pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62645);
    _34line_number_15189 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_34line_number_15189)){
        _34line_number_15189 = (object)DBL_PTR(_34line_number_15189)->dbl;
    }
    // SubProg set_error_info pc: 35 op: STARTLINE (58)

    /** fwdref.e:416		current_file_no = fr[FR_FILE]*/
    // SubProg set_error_info pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62645);
    _34current_file_no_15188 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_34current_file_no_15188)){
        _34current_file_no_15188 = (object)DBL_PTR(_34current_file_no_15188)->dbl;
    }
    // SubProg set_error_info pc: 43 op: STARTLINE (58)

    /** fwdref.e:417	end procedure*/
    // SubProg set_error_info pc: 45 op: RETURNP (29)

// Exiting block BLOCK: set_error_info

// block var ref_62644

// block var fr_62645
    DeRefDS(_fr_62645);
    return;
    // SubProg set_error_info pc: 48 op: BADRETURNF (43)
    ;
}


void _37patch_forward_variable(object _tok_62658, object _ref_62659)
{
    object _fr_62660 = NOVALUE;
    object _sym_62663 = NOVALUE;
    object _pc_62716 = NOVALUE;
    object _vx_62720 = NOVALUE;
    object _d_62737 = NOVALUE;
    object _param_62747 = NOVALUE;
    object _old_62750 = NOVALUE;
    object _new_62755 = NOVALUE;
    object _31104 = NOVALUE; // 62767 31104
    object _31103 = NOVALUE; // 62766 31103
    object _31102 = NOVALUE; // 62764 31102
// skipping _31101  name type: 0
    object _31100 = NOVALUE; // 62759 31100
// skipping _31099  name type: 0
// skipping _31098  name type: 0
    object _31097 = NOVALUE; // 62752 31097
// skipping _31096  name type: 0
    object _31095 = NOVALUE; // 62745 31095
    object _31094 = NOVALUE; // 62743 31094
    object _31093 = NOVALUE; // 62742 31093
    object _31092 = NOVALUE; // 62741 31092
// skipping _31091  name type: 0
    object _31090 = NOVALUE; // 62738 31090
    object _31089 = NOVALUE; // 62736 31089
    object _31088 = NOVALUE; // 62735 31088
    object _31087 = NOVALUE; // 62732 31087
    object _31086 = NOVALUE; // 62731 31086
// skipping _31085  name type: 0
    object _31084 = NOVALUE; // 62727 31084
// skipping _31083  name type: 0
    object _31082 = NOVALUE; // 62721 31082
// skipping _31081  name type: 0
// skipping _31080  name type: 0
    object _31079 = NOVALUE; // 62715 31079
    object _31078 = NOVALUE; // 62714 31078
    object _31077 = NOVALUE; // 62712 31077
// skipping _31076  name type: 0
    object _31075 = NOVALUE; // 62707 31075
    object _31074 = NOVALUE; // 62704 31074
    object _31073 = NOVALUE; // 62703 31073
    object _31072 = NOVALUE; // 62701 31072
// skipping _31071  name type: 0
    object _31070 = NOVALUE; // 62696 31070
// skipping _31069  name type: 0
    object _31068 = NOVALUE; // 62692 31068
    object _31066 = NOVALUE; // 62687 31066
    object _31065 = NOVALUE; // 62685 31065
    object _31064 = NOVALUE; // 62683 31064
    object _31063 = NOVALUE; // 62681 31063
    object _31062 = NOVALUE; // 62680 31062
    object _31061 = NOVALUE; // 62678 31061
    object _31060 = NOVALUE; // 62676 31060
    object _31059 = NOVALUE; // 62674 31059
    object _31058 = NOVALUE; // 62673 31058
    object _31057 = NOVALUE; // 62672 31057
    object _31056 = NOVALUE; // 62671 31056
    object _31055 = NOVALUE; // 62670 31055
    object _31054 = NOVALUE; // 62668 31054
// skipping _31053  name type: 0
// skipping _31052  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_variable pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_variable pc: 3 op: STARTLINE (58)

    /** fwdref.e:421		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_variable pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62660);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62660 = (object)*(((s1_ptr)_2)->base + _ref_62659);
    Ref(_fr_62660);
    // SubProg patch_forward_variable pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_variable pc: 13 op: STARTLINE (58)

    /** fwdref.e:422		symtab_index sym = tok[T_SYM]*/
    // SubProg patch_forward_variable pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62658);
    _sym_62663 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_62663)){
        _sym_62663 = (object)DBL_PTR(_sym_62663)->dbl;
    }
    // SubProg patch_forward_variable pc: 23 op: STARTLINE (58)

    /** fwdref.e:424		if SymTab[sym][S_FILE_NO] = fr[FR_FILE] */
    // SubProg patch_forward_variable pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31054 = (object)*(((s1_ptr)_2)->base + _sym_62663);
    // SubProg patch_forward_variable pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31054);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _31055 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _31055 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _31054 = NOVALUE;
    // SubProg patch_forward_variable pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62660);
    _31056 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_variable pc: 41 op: EQUALS (3)
    if (IS_ATOM_INT(_31055) && IS_ATOM_INT(_31056)) {
        _31057 = (_31055 == _31056);
    }
    else {
        _31057 = binary_op(EQUALS, _31055, _31056);
    }
    _31055 = NOVALUE;
    _31056 = NOVALUE;
    // SubProg patch_forward_variable pc: 45 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31057)) {
        if (_31057 == 0) {
            goto L1; // [45] 69
        }
    }
    else {
        if (DBL_PTR(_31057)->dbl == 0.0) {
            goto L1; // [45] 69
        }
    }
    // SubProg patch_forward_variable pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62660);
    _31059 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_variable pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 55 op: EQUALS (3)
    if (IS_ATOM_INT(_31059)) {
        _31060 = (_31059 == _34TopLevelSub_15195);
    }
    else {
        _31060 = binary_op(EQUALS, _31059, _34TopLevelSub_15195);
    }
    _31059 = NOVALUE;
    // SubProg patch_forward_variable pc: 59 op: NOP1 (159)
    // SubProg patch_forward_variable pc: 60 op: IF (20)
    if (_31060 == 0) {
        DeRef(_31060);
        _31060 = NOVALUE;
        goto L1; // [60] 69
    }
    else {
        if (!IS_ATOM_INT(_31060) && DBL_PTR(_31060)->dbl == 0.0){
            DeRef(_31060);
            _31060 = NOVALUE;
            goto L1; // [60] 69
        }
        DeRef(_31060);
        _31060 = NOVALUE;
    }
    DeRef(_31060);
    _31060 = NOVALUE;
    // SubProg patch_forward_variable pc: 63 op: STARTLINE (58)

    /** fwdref.e:426			return*/
    // SubProg patch_forward_variable pc: 65 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_variable

// block var tok_62658
    DeRef(_tok_62658);

// block var ref_62659

// block var fr_62660
    DeRef(_fr_62660);

// block var sym_62663

// block var pc_62716

// block var vx_62720
    DeRef(_31057);
    _31057 = NOVALUE;
    return;
    // SubProg patch_forward_variable pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 69 op: STARTLINE (58)

    /** fwdref.e:429		if fr[FR_OP] = ASSIGN and SymTab[sym][S_MODE] = M_CONSTANT then*/
    // SubProg patch_forward_variable pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62660);
    _31061 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_variable pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 77 op: EQUALS (3)
    if (IS_ATOM_INT(_31061)) {
        _31062 = (_31061 == 18);
    }
    else {
        _31062 = binary_op(EQUALS, _31061, 18);
    }
    _31061 = NOVALUE;
    // SubProg patch_forward_variable pc: 81 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31062)) {
        if (_31062 == 0) {
            goto L2; // [81] 120
        }
    }
    else {
        if (DBL_PTR(_31062)->dbl == 0.0) {
            goto L2; // [81] 120
        }
    }
    // SubProg patch_forward_variable pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31064 = (object)*(((s1_ptr)_2)->base + _sym_62663);
    // SubProg patch_forward_variable pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31064);
    _31065 = (object)*(((s1_ptr)_2)->base + 3);
    _31064 = NOVALUE;
    // SubProg patch_forward_variable pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 99 op: EQUALS (3)
    if (IS_ATOM_INT(_31065)) {
        _31066 = (_31065 == 2);
    }
    else {
        _31066 = binary_op(EQUALS, _31065, 2);
    }
    _31065 = NOVALUE;
    // SubProg patch_forward_variable pc: 103 op: NOP1 (159)
    // SubProg patch_forward_variable pc: 104 op: IF (20)
    if (_31066 == 0) {
        DeRef(_31066);
        _31066 = NOVALUE;
        goto L2; // [104] 120
    }
    else {
        if (!IS_ATOM_INT(_31066) && DBL_PTR(_31066)->dbl == 0.0){
            DeRef(_31066);
            _31066 = NOVALUE;
            goto L2; // [104] 120
        }
        DeRef(_31066);
        _31066 = NOVALUE;
    }
    DeRef(_31066);
    _31066 = NOVALUE;
    // SubProg patch_forward_variable pc: 107 op: STARTLINE (58)

    /** fwdref.e:430			prep_forward_error( ref )*/
    // SubProg patch_forward_variable pc: 109 op: PROC (27)
    _37prep_forward_error(_ref_62659);
    // SubProg patch_forward_variable pc: 112 op: STARTLINE (58)

    /** fwdref.e:431			CompileErr( 110 )*/
    // SubProg patch_forward_variable pc: 114 op: PROC (27)
    RefDS(_21936);
    _49CompileErr(110, _21936, 0);
    // SubProg patch_forward_variable pc: 119 op: NOP1 (159)
L2: // addr: 120 pc: 119 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 120 op: STARTLINE (58)

    /** fwdref.e:434		if fr[FR_OP] = ASSIGN then*/
    // SubProg patch_forward_variable pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62660);
    _31068 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_variable pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 128 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31068, 18)){
        _31068 = NOVALUE;
        goto L3; // [128] 168
    }
    _31068 = NOVALUE;
    // SubProg patch_forward_variable pc: 132 op: STARTLINE (58)

    /** fwdref.e:435			SymTab[sym][S_USAGE] = or_bits( U_WRITTEN, SymTab[sym][S_USAGE] )*/
    // SubProg patch_forward_variable pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 136 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62663 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_variable pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31072 = (object)*(((s1_ptr)_2)->base + _sym_62663);
    // SubProg patch_forward_variable pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31072);
    _31073 = (object)*(((s1_ptr)_2)->base + 5);
    _31072 = NOVALUE;
    // SubProg patch_forward_variable pc: 157 op: OR_BITS (24)
    if (IS_ATOM_INT(_31073)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_31073;
             _31074 = MAKE_UINT(tu);
        }
    }
    else {
        _31074 = binary_op(OR_BITS, 2, _31073);
    }
    _31073 = NOVALUE;
    // SubProg patch_forward_variable pc: 161 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31074;
    if( _1 != _31074 ){
        DeRef(_1);
    }
    _31074 = NOVALUE;
    _31070 = NOVALUE;
    // SubProg patch_forward_variable pc: 165 op: ELSE (23)
    goto L4; // [165] 202
    // SubProg patch_forward_variable pc: 167 op: NOP1 (159)
L3: // addr: 168 pc: 167 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 168 op: STARTLINE (58)

    /** fwdref.e:437			SymTab[sym][S_USAGE] = or_bits( U_READ, SymTab[sym][S_USAGE] )*/
    // SubProg patch_forward_variable pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 172 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62663 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_variable pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31077 = (object)*(((s1_ptr)_2)->base + _sym_62663);
    // SubProg patch_forward_variable pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 189 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31077);
    _31078 = (object)*(((s1_ptr)_2)->base + 5);
    _31077 = NOVALUE;
    // SubProg patch_forward_variable pc: 193 op: OR_BITS (24)
    if (IS_ATOM_INT(_31078)) {
        {uintptr_t tu;
             tu = (uintptr_t)1 | (uintptr_t)_31078;
             _31079 = MAKE_UINT(tu);
        }
    }
    else {
        _31079 = binary_op(OR_BITS, 1, _31078);
    }
    _31078 = NOVALUE;
    // SubProg patch_forward_variable pc: 197 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31079;
    if( _1 != _31079 ){
        DeRef(_1);
    }
    _31079 = NOVALUE;
    _31075 = NOVALUE;
    // SubProg patch_forward_variable pc: 201 op: NOP1 (159)
L4: // addr: 202 pc: 201 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 202 op: STARTLINE (58)

    /** fwdref.e:440		set_code( ref )*/
    // SubProg patch_forward_variable pc: 204 op: PROC (27)
    _37set_code(_ref_62659);
    // SubProg patch_forward_variable pc: 207 op: STARTLINE (58)

    /** fwdref.e:441		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_variable pc: 209 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62660);
    _pc_62716 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62716))
    _pc_62716 = (object)DBL_PTR(_pc_62716)->dbl;
    // SubProg patch_forward_variable pc: 213 op: STARTLINE (58)

    /** fwdref.e:442		if pc < 1 then*/
    // SubProg patch_forward_variable pc: 215 op: LESS_IFW_I (119)
    if (_pc_62716 >= 1)
    goto L5; // [215] 225
    // SubProg patch_forward_variable pc: 219 op: STARTLINE (58)

    /** fwdref.e:443			pc = 1*/
    // SubProg patch_forward_variable pc: 221 op: ASSIGN_I (113)
    _pc_62716 = 1;
    // SubProg patch_forward_variable pc: 224 op: NOP1 (159)
L5: // addr: 225 pc: 224 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 225 op: STARTLINE (58)

    /** fwdref.e:445		integer vx = find( -ref, Code, pc )*/
    // SubProg patch_forward_variable pc: 227 op: UMINUS (12)
    if ((uintptr_t)_ref_62659 == (uintptr_t)HIGH_BITS){
        _31082 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31082 = - _ref_62659;
    }
    // SubProg patch_forward_variable pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 232 op: FIND_FROM (176)
    _vx_62720 = find_from(_31082, _34Code_15276, _pc_62716);
    DeRef(_31082);
    _31082 = NOVALUE;
    // SubProg patch_forward_variable pc: 237 op: STARTLINE (58)

    /** fwdref.e:446		if vx then*/
    // SubProg patch_forward_variable pc: 239 op: IF (20)
    if (_vx_62720 == 0)
    {
        goto L6; // [239] 281
    }
    else{
    }
    // SubProg patch_forward_variable pc: 242 op: STARTLINE (58)

    /** fwdref.e:447			while vx do*/
    // SubProg patch_forward_variable pc: 244 op: NOP2 (110)
    // SubProg patch_forward_variable pc: 246 op: NOPWHILE (158)
L7: // addr: 247 pc: 246 sub: 62655 op: 158
    // SubProg patch_forward_variable pc: 247 op: WHILE (47)
    if (_vx_62720 == 0)
    {
        goto L8; // [247] 275
    }
    else{
    }
    // SubProg patch_forward_variable pc: 250 op: STARTLINE (58)

    /** fwdref.e:450				Code[vx] = sym*/
    // SubProg patch_forward_variable pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 254 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_34Code_15276);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34Code_15276 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _vx_62720);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_62663;
    DeRef(_1);
    // SubProg patch_forward_variable pc: 258 op: STARTLINE (58)

    /** fwdref.e:451				vx = find( -ref, Code, vx )*/
    // SubProg patch_forward_variable pc: 260 op: UMINUS (12)
    if ((uintptr_t)_ref_62659 == (uintptr_t)HIGH_BITS){
        _31084 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31084 = - _ref_62659;
    }
    // SubProg patch_forward_variable pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 265 op: FIND_FROM (176)
    _vx_62720 = find_from(_31084, _34Code_15276, _vx_62720);
    DeRef(_31084);
    _31084 = NOVALUE;
    // SubProg patch_forward_variable pc: 270 op: STARTLINE (58)

    /** fwdref.e:452			end while*/
    // SubProg patch_forward_variable pc: 272 op: ENDWHILE (22)
    goto L7; // [272] 247
    // SubProg patch_forward_variable pc: 274 op: NOP1 (159)
L8: // addr: 275 pc: 274 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 275 op: STARTLINE (58)

    /** fwdref.e:453			resolved_reference( ref )*/
    // SubProg patch_forward_variable pc: 277 op: PROC (27)
    _37resolved_reference(_ref_62659);
    // SubProg patch_forward_variable pc: 280 op: NOP1 (159)
L6: // addr: 281 pc: 280 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 281 op: STARTLINE (58)

    /** fwdref.e:456		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_variable pc: 283 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62660);
    _31086 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_variable pc: 287 op: IS_A_SEQUENCE (68)
    _31087 = IS_SEQUENCE(_31086);
    _31086 = NOVALUE;
    // SubProg patch_forward_variable pc: 290 op: IF (20)
    if (_31087 == 0)
    {
        _31087 = NOVALUE;
        goto L9; // [290] 422
    }
    else{
        _31087 = NOVALUE;
    }
    // SubProg patch_forward_variable pc: 293 op: STARTLINE (58)

    /** fwdref.e:457			for i = 1 to length( fr[FR_DATA] ) do*/
    // SubProg patch_forward_variable pc: 295 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62660);
    _31088 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_variable pc: 299 op: LENGTH (42)
    if (IS_SEQUENCE(_31088)){
            _31089 = SEQ_PTR(_31088)->length;
    }
    else {
        _31089 = 1;
    }
    _31088 = NOVALUE;
    // SubProg patch_forward_variable pc: 302 op: FOR_I (125)
    {
        object _i_62734;
        _i_62734 = 1;
LA: // addr: 309 pc: 302 sub: 62655 op: 125
        if (_i_62734 > _31089){
            goto LB; // [302] 416
        }
        // SubProg patch_forward_variable pc: 309 op: STARTLINE (58)

        /** fwdref.e:458				object d = fr[FR_DATA][i]*/
        // SubProg patch_forward_variable pc: 311 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62660);
        _31090 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg patch_forward_variable pc: 315 op: RHS_SUBS_CHECK (92)
        DeRef(_d_62737);
        _2 = (object)SEQ_PTR(_31090);
        _d_62737 = (object)*(((s1_ptr)_2)->base + _i_62734);
        Ref(_d_62737);
        _31090 = NOVALUE;
        // SubProg patch_forward_variable pc: 319 op: STARTLINE (58)

        /** fwdref.e:459				if sequence( d ) and d[1] = PAM_RECORD then*/
        // SubProg patch_forward_variable pc: 321 op: IS_A_SEQUENCE (68)
        _31092 = IS_SEQUENCE(_d_62737);
        // SubProg patch_forward_variable pc: 324 op: SC1_AND_IF (146)
        if (_31092 == 0) {
            goto LC; // [324] 405
        }
        // SubProg patch_forward_variable pc: 328 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62737);
        _31094 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg patch_forward_variable pc: 332 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 334 op: EQUALS (3)
        if (IS_ATOM_INT(_31094)) {
            _31095 = (_31094 == 1);
        }
        else {
            _31095 = binary_op(EQUALS, _31094, 1);
        }
        _31094 = NOVALUE;
        // SubProg patch_forward_variable pc: 338 op: NOP1 (159)
        // SubProg patch_forward_variable pc: 339 op: IF (20)
        if (_31095 == 0) {
            DeRef(_31095);
            _31095 = NOVALUE;
            goto LC; // [339] 405
        }
        else {
            if (!IS_ATOM_INT(_31095) && DBL_PTR(_31095)->dbl == 0.0){
                DeRef(_31095);
                _31095 = NOVALUE;
                goto LC; // [339] 405
            }
            DeRef(_31095);
            _31095 = NOVALUE;
        }
        DeRef(_31095);
        _31095 = NOVALUE;
        // SubProg patch_forward_variable pc: 342 op: STARTLINE (58)

        /** fwdref.e:461					symtab_index param = d[2]*/
        // SubProg patch_forward_variable pc: 344 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62737);
        _param_62747 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_62747)){
            _param_62747 = (object)DBL_PTR(_param_62747)->dbl;
        }
        // SubProg patch_forward_variable pc: 350 op: STARTLINE (58)

        /** fwdref.e:462					token old = {RECORDED, d[3]}*/
        // SubProg patch_forward_variable pc: 352 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 354 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62737);
        _31097 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_variable pc: 358 op: RIGHT_BRACE_2 (85)
        Ref(_31097);
        DeRef(_old_62750);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 508;
        ((intptr_t *)_2)[2] = _31097;
        _old_62750 = MAKE_SEQ(_1);
        _31097 = NOVALUE;
        // SubProg patch_forward_variable pc: 362 op: STARTLINE (58)

        /** fwdref.e:463					token new = {VARIABLE, sym}*/
        // SubProg patch_forward_variable pc: 364 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 366 op: RIGHT_BRACE_2 (85)
        DeRefi(_new_62755);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -100;
        ((intptr_t *)_2)[2] = _sym_62663;
        _new_62755 = MAKE_SEQ(_1);
        // SubProg patch_forward_variable pc: 370 op: STARTLINE (58)

        /** fwdref.e:464					SymTab[param][S_CODE] = find_replace( old, SymTab[param][S_CODE], new )*/
        // SubProg patch_forward_variable pc: 372 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 374 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        _3 = (object)(_param_62747 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_variable pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 381 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 383 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _31102 = (object)*(((s1_ptr)_2)->base + _param_62747);
        // SubProg patch_forward_variable pc: 387 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 389 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31102);
        if (!IS_ATOM_INT(_34S_CODE_14855)){
            _31103 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
        }
        else{
            _31103 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
        }
        _31102 = NOVALUE;
        // SubProg patch_forward_variable pc: 393 op: PROC (27)
        RefDS(_old_62750);
        Ref(_31103);
        RefDS(_new_62755);
        _31104 = _17find_replace(_old_62750, _31103, _new_62755, 0);
        _31103 = NOVALUE;
        // SubProg patch_forward_variable pc: 400 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_34S_CODE_14855))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _34S_CODE_14855);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31104;
        if( _1 != _31104 ){
            DeRef(_1);
        }
        _31104 = NOVALUE;
        _31100 = NOVALUE;
        // SubProg patch_forward_variable pc: 404 op: NOP1 (159)
LC: // addr: 405 pc: 404 sub: 62655 op: 159
        // SubProg patch_forward_variable pc: 405 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var param_62747

// block var old_62750
        DeRef(_old_62750);
        _old_62750 = NOVALUE;

// block var new_62755
        DeRefi(_new_62755);
        _new_62755 = NOVALUE;
        // SubProg patch_forward_variable pc: 407 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var d_62737
        DeRef(_d_62737);
        _d_62737 = NOVALUE;
        // SubProg patch_forward_variable pc: 409 op: STARTLINE (58)

        /** fwdref.e:466			end for*/
        // SubProg patch_forward_variable pc: 411 op: ENDFOR_INT_UP1 (54)
        _i_62734 = _i_62734 + 1;
        goto LA; // [411] 309
LB: // addr: 416 pc: 411 sub: 62655 op: 54
        ;
    }
    // SubProg patch_forward_variable pc: 416 op: STARTLINE (58)

    /** fwdref.e:467			resolved_reference( ref )*/
    // SubProg patch_forward_variable pc: 418 op: PROC (27)
    _37resolved_reference(_ref_62659);
    // SubProg patch_forward_variable pc: 421 op: NOP1 (159)
L9: // addr: 422 pc: 421 sub: 62655 op: 159
    // SubProg patch_forward_variable pc: 422 op: STARTLINE (58)

    /** fwdref.e:469		reset_code()*/
    // SubProg patch_forward_variable pc: 424 op: PROC (27)
    _37reset_code();
    // SubProg patch_forward_variable pc: 426 op: STARTLINE (58)

    /** fwdref.e:470	end procedure*/
    // SubProg patch_forward_variable pc: 428 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_variable

// block var tok_62658
    DeRef(_tok_62658);

// block var ref_62659

// block var fr_62660
    DeRef(_fr_62660);

// block var sym_62663

// block var pc_62716

// block var vx_62720
    _31088 = NOVALUE;
    DeRef(_31057);
    _31057 = NOVALUE;
    DeRef(_31062);
    _31062 = NOVALUE;
    return;
    // SubProg patch_forward_variable pc: 431 op: BADRETURNF (43)
    ;
}


void _37patch_forward_init_check(object _tok_62771, object _ref_62772)
{
    object _fr_62773 = NOVALUE;
    object _31112 = NOVALUE; // 62785 31112
    object _31111 = NOVALUE; // 62783 31111
    object _31110 = NOVALUE; // 62782 31110
// skipping _31109  name type: 0
    object _31108 = NOVALUE; // 62779 31108
    object _31107 = NOVALUE; // 62777 31107
    object _31106 = NOVALUE; // 62776 31106
// skipping _31105  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_forward_init_check pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_init_check pc: 3 op: STARTLINE (58)

    /** fwdref.e:474		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_init_check pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62773);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62773 = (object)*(((s1_ptr)_2)->base + _ref_62772);
    Ref(_fr_62773);
    // SubProg patch_forward_init_check pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_init_check pc: 13 op: STARTLINE (58)

    /** fwdref.e:475		set_code( ref )*/
    // SubProg patch_forward_init_check pc: 15 op: PROC (27)
    _37set_code(_ref_62772);
    // SubProg patch_forward_init_check pc: 18 op: STARTLINE (58)

    /** fwdref.e:476		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_init_check pc: 20 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62773);
    _31106 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_init_check pc: 24 op: IS_A_SEQUENCE (68)
    _31107 = IS_SEQUENCE(_31106);
    _31106 = NOVALUE;
    // SubProg patch_forward_init_check pc: 27 op: IF (20)
    if (_31107 == 0)
    {
        _31107 = NOVALUE;
        goto L1; // [27] 38
    }
    else{
        _31107 = NOVALUE;
    }
    // SubProg patch_forward_init_check pc: 30 op: STARTLINE (58)

    /** fwdref.e:478			resolved_reference( ref )*/
    // SubProg patch_forward_init_check pc: 32 op: PROC (27)
    _37resolved_reference(_ref_62772);
    // SubProg patch_forward_init_check pc: 35 op: ELSE (23)
    goto L2; // [35] 85
    // SubProg patch_forward_init_check pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 62768 op: 159
    // SubProg patch_forward_init_check pc: 38 op: STARTLINE (58)

    /** fwdref.e:479		elsif fr[FR_PC] > 0 then*/
    // SubProg patch_forward_init_check pc: 40 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62773);
    _31108 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_init_check pc: 44 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _31108, 0)){
        _31108 = NOVALUE;
        goto L3; // [44] 78
    }
    _31108 = NOVALUE;
    // SubProg patch_forward_init_check pc: 48 op: STARTLINE (58)

    /** fwdref.e:480			Code[fr[FR_PC]+1] = tok[T_SYM]*/
    // SubProg patch_forward_init_check pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62773);
    _31110 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_init_check pc: 56 op: PLUS1 (93)
    if (IS_ATOM_INT(_31110)) {
        _31111 = _31110 + 1;
        if (_31111 > MAXINT){
            _31111 = NewDouble((eudouble)_31111);
        }
    }
    else
    _31111 = binary_op(PLUS, 1, _31110);
    _31110 = NOVALUE;
    // SubProg patch_forward_init_check pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62771);
    _31112 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_init_check pc: 66 op: ASSIGN_SUBS (16)
    Ref(_31112);
    _2 = (object)SEQ_PTR(_34Code_15276);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34Code_15276 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31111))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31111)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _31111);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31112;
    if( _1 != _31112 ){
        DeRef(_1);
    }
    _31112 = NOVALUE;
    // SubProg patch_forward_init_check pc: 70 op: STARTLINE (58)

    /** fwdref.e:481			resolved_reference( ref )*/
    // SubProg patch_forward_init_check pc: 72 op: PROC (27)
    _37resolved_reference(_ref_62772);
    // SubProg patch_forward_init_check pc: 75 op: ELSE (23)
    goto L2; // [75] 85
    // SubProg patch_forward_init_check pc: 77 op: NOP1 (159)
L3: // addr: 78 pc: 77 sub: 62768 op: 159
    // SubProg patch_forward_init_check pc: 78 op: STARTLINE (58)

    /** fwdref.e:483			forward_error( tok, ref )*/
    // SubProg patch_forward_init_check pc: 80 op: PROC (27)
    Ref(_tok_62771);
    _37forward_error(_tok_62771, _ref_62772);
    // SubProg patch_forward_init_check pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 62768 op: 159
    // SubProg patch_forward_init_check pc: 85 op: STARTLINE (58)

    /** fwdref.e:485		reset_code()*/
    // SubProg patch_forward_init_check pc: 87 op: PROC (27)
    _37reset_code();
    // SubProg patch_forward_init_check pc: 89 op: STARTLINE (58)

    /** fwdref.e:486	end procedure*/
    // SubProg patch_forward_init_check pc: 91 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_init_check

// block var tok_62771
    DeRef(_tok_62771);

// block var ref_62772

// block var fr_62773
    DeRef(_fr_62773);
    DeRef(_31111);
    _31111 = NOVALUE;
    return;
    // SubProg patch_forward_init_check pc: 94 op: BADRETURNF (43)
    ;
}


object _37expected_name(object _id_62790)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expected_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_id_62790)) {
        _1 = (object)(DBL_PTR(_id_62790)->dbl);
        DeRefDS(_id_62790);
        _id_62790 = _1;
    }
    // SubProg expected_name pc: 3 op: STARTLINE (58)

    /** fwdref.e:491		switch id with fallthru do*/
    // SubProg expected_name pc: 5 op: SWITCH_I (193)
    _0 = _id_62790;
    switch ( _0 ){ 
        // SubProg expected_name pc: 10 op: STARTLINE (58)

        /** fwdref.e:492			case PROC then*/
        // SubProg expected_name pc: 12 op: CASE (186)
        case 27:
        // SubProg expected_name pc: 14 op: CASE (186)
        case 195:
        // SubProg expected_name pc: 16 op: STARTLINE (58)

        /** fwdref.e:494				return "a procedure"*/
        // SubProg expected_name pc: 18 op: RETURNF (28)
        RefDS(_26183);

// Exiting block BLOCK: expected_name

// block var id_62790
        return _26183;
        // SubProg expected_name pc: 22 op: STARTLINE (58)

        /** fwdref.e:496			case FUNC then*/
        // SubProg expected_name pc: 24 op: CASE (186)
        case 501:
        // SubProg expected_name pc: 26 op: CASE (186)
        case 196:
        // SubProg expected_name pc: 28 op: STARTLINE (58)

        /** fwdref.e:498				return "a function"*/
        // SubProg expected_name pc: 30 op: RETURNF (28)
        RefDS(_26129);

// Exiting block BLOCK: expected_name

// block var id_62790
        return _26129;
        // SubProg expected_name pc: 34 op: STARTLINE (58)

        /** fwdref.e:500			case VARIABLE then*/
        // SubProg expected_name pc: 36 op: CASE (186)
        case -100:
        // SubProg expected_name pc: 38 op: STARTLINE (58)

        /** fwdref.e:501				return "a variable, constant or enum"*/
        // SubProg expected_name pc: 40 op: RETURNF (28)
        RefDS(_31115);

// Exiting block BLOCK: expected_name

// block var id_62790
        return _31115;
        // SubProg expected_name pc: 44 op: STARTLINE (58)

        /** fwdref.e:502			case else*/
        // SubProg expected_name pc: 46 op: CASE (186)
        default:
        // SubProg expected_name pc: 48 op: STARTLINE (58)

        /** fwdref.e:503				return "something"*/
        // SubProg expected_name pc: 50 op: RETURNF (28)
        RefDS(_31116);

// Exiting block BLOCK: expected_name

// block var id_62790
        return _31116;
        // SubProg expected_name pc: 54 op: NOPSWITCH (187)
    ;}    // SubProg expected_name pc: 55 op: BADRETURNF (43)
    ;
}


void _37patch_forward_type(object _tok_62807, object _ref_62808)
{
    object _fr_62809 = NOVALUE;
    object _syms_62811 = NOVALUE;
    object _31128 = NOVALUE; // 62833 31128
    object _31127 = NOVALUE; // 62832 31127
// skipping _31126  name type: 0
    object _31125 = NOVALUE; // 62827 31125
    object _31124 = NOVALUE; // 62826 31124
    object _31123 = NOVALUE; // 62822 31123
// skipping _31122  name type: 0
    object _31121 = NOVALUE; // 62818 31121
    object _31120 = NOVALUE; // 62817 31120
    object _31119 = NOVALUE; // 62815 31119
// skipping _31118  name type: 0
// skipping _31117  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type pc: 3 op: STARTLINE (58)

    /** fwdref.e:510		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_type pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62809);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62809 = (object)*(((s1_ptr)_2)->base + _ref_62808);
    Ref(_fr_62809);
    // SubProg patch_forward_type pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type pc: 13 op: STARTLINE (58)

    /** fwdref.e:511		sequence syms = fr[FR_DATA]*/
    // SubProg patch_forward_type pc: 15 op: RHS_SUBS (25)
    DeRef(_syms_62811);
    _2 = (object)SEQ_PTR(_fr_62809);
    _syms_62811 = (object)*(((s1_ptr)_2)->base + 12);
    Ref(_syms_62811);
    // SubProg patch_forward_type pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type pc: 21 op: STARTLINE (58)

    /** fwdref.e:512		for i = 2 to length( syms ) do*/
    // SubProg patch_forward_type pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_syms_62811)){
            _31119 = SEQ_PTR(_syms_62811)->length;
    }
    else {
        _31119 = 1;
    }
    // SubProg patch_forward_type pc: 26 op: FOR_I (125)
    {
        object _i_62814;
        _i_62814 = 2;
L1: // addr: 33 pc: 26 sub: 62804 op: 125
        if (_i_62814 > _31119){
            goto L2; // [26] 102
        }
        // SubProg patch_forward_type pc: 33 op: STARTLINE (58)

        /** fwdref.e:513			SymTab[syms[i]][S_VTYPE] = tok[T_SYM]*/
        // SubProg patch_forward_type pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_syms_62811);
        _31120 = (object)*(((s1_ptr)_2)->base + _i_62814);
        // SubProg patch_forward_type pc: 41 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31120))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31120)->dbl));
        else
        _3 = (object)(_31120 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_type pc: 46 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_62807);
        _31123 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg patch_forward_type pc: 54 op: PASSIGN_SUBS (162)
        Ref(_31123);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31123;
        if( _1 != _31123 ){
            DeRef(_1);
        }
        _31123 = NOVALUE;
        _31121 = NOVALUE;
        // SubProg patch_forward_type pc: 58 op: STARTLINE (58)

        /** fwdref.e:514			if TRANSLATE then*/
        // SubProg patch_forward_type pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 62 op: IF (20)
        if (_34TRANSLATE_14813 == 0)
        {
            goto L3; // [62] 95
        }
        else{
        }
        // SubProg patch_forward_type pc: 65 op: STARTLINE (58)

        /** fwdref.e:515				SymTab[syms[i]][S_GTYPE] = CompileType(tok[T_SYM])*/
        // SubProg patch_forward_type pc: 67 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_syms_62811);
        _31124 = (object)*(((s1_ptr)_2)->base + _i_62814);
        // SubProg patch_forward_type pc: 73 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31124))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31124)->dbl));
        else
        _3 = (object)(_31124 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_type pc: 78 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_62807);
        _31127 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg patch_forward_type pc: 86 op: PROC (27)
        Ref(_31127);
        _31128 = _38CompileType(_31127);
        _31127 = NOVALUE;
        // SubProg patch_forward_type pc: 90 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 36);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31128;
        if( _1 != _31128 ){
            DeRef(_1);
        }
        _31128 = NOVALUE;
        _31125 = NOVALUE;
        // SubProg patch_forward_type pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 62804 op: 159
        // SubProg patch_forward_type pc: 95 op: STARTLINE (58)

        /** fwdref.e:517		end for*/
        // SubProg patch_forward_type pc: 97 op: ENDFOR_INT_UP1 (54)
        _i_62814 = _i_62814 + 1;
        goto L1; // [97] 33
L2: // addr: 102 pc: 97 sub: 62804 op: 54
        ;
    }
    // SubProg patch_forward_type pc: 102 op: STARTLINE (58)

    /** fwdref.e:518		resolved_reference( ref )*/
    // SubProg patch_forward_type pc: 104 op: PROC (27)
    _37resolved_reference(_ref_62808);
    // SubProg patch_forward_type pc: 107 op: STARTLINE (58)

    /** fwdref.e:519	end procedure*/
    // SubProg patch_forward_type pc: 109 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_type

// block var tok_62807
    DeRef(_tok_62807);

// block var ref_62808

// block var fr_62809
    DeRef(_fr_62809);

// block var syms_62811
    DeRef(_syms_62811);
    _31124 = NOVALUE;
    _31120 = NOVALUE;
    return;
    // SubProg patch_forward_type pc: 112 op: BADRETURNF (43)
    ;
}


void _37patch_forward_case(object _tok_62837, object _ref_62838)
{
    object _fr_62839 = NOVALUE;
    object _switch_pc_62841 = NOVALUE;
    object _case_sym_62844 = NOVALUE;
    object _case_values_62873 = NOVALUE;
    object _cx_62878 = NOVALUE;
    object _negative_62886 = NOVALUE;
// skipping _31167  name type: 0
    object _31166 = NOVALUE; // 62903 31166
    object _31165 = NOVALUE; // 62901 31165
    object _31164 = NOVALUE; // 62898 31164
    object _31163 = NOVALUE; // 62897 31163
    object _31162 = NOVALUE; // 62894 31162
    object _31161 = NOVALUE; // 62893 31161
// skipping _31160  name type: 0
    object _31159 = NOVALUE; // 62891 31159
// skipping _31158  name type: 0
    object _31157 = NOVALUE; // 62889 31157
    object _31156 = NOVALUE; // 62888 31156
// skipping _31155  name type: 0
    object _31154 = NOVALUE; // 62884 31154
    object _31153 = NOVALUE; // 62883 31153
// skipping _31152  name type: 0
// skipping _31151  name type: 0
    object _31150 = NOVALUE; // 62879 31150
// skipping _31149  name type: 0
    object _31148 = NOVALUE; // 62875 31148
    object _31147 = NOVALUE; // 62872 31147
    object _31146 = NOVALUE; // 62870 31146
    object _31145 = NOVALUE; // 62869 31145
    object _31144 = NOVALUE; // 62868 31144
    object _31143 = NOVALUE; // 62867 31143
    object _31142 = NOVALUE; // 62866 31142
    object _31141 = NOVALUE; // 62864 31141
    object _31140 = NOVALUE; // 62863 31140
// skipping _31139  name type: 0
    object _31138 = NOVALUE; // 62858 31138
    object _31137 = NOVALUE; // 62857 31137
    object _31136 = NOVALUE; // 62855 31136
    object _31135 = NOVALUE; // 62854 31135
// skipping _31134  name type: 0
    object _31133 = NOVALUE; // 62850 31133
// skipping _31132  name type: 0
    object _31131 = NOVALUE; // 62846 31131
// skipping _31130  name type: 0
// skipping _31129  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_case pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_case pc: 3 op: STARTLINE (58)

    /** fwdref.e:522		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_case pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62839);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62839 = (object)*(((s1_ptr)_2)->base + _ref_62838);
    Ref(_fr_62839);
    // SubProg patch_forward_case pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_case pc: 13 op: STARTLINE (58)

    /** fwdref.e:524		integer switch_pc = fr[FR_DATA]*/
    // SubProg patch_forward_case pc: 15 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62839);
    _switch_pc_62841 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_switch_pc_62841))
    _switch_pc_62841 = (object)DBL_PTR(_switch_pc_62841)->dbl;
    // SubProg patch_forward_case pc: 19 op: STARTLINE (58)

    /** fwdref.e:527		if fr[FR_SUBPROG] = TopLevelSub then*/
    // SubProg patch_forward_case pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62839);
    _31131 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 27 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31131, _34TopLevelSub_15195)){
        _31131 = NOVALUE;
        goto L1; // [27] 48
    }
    _31131 = NOVALUE;
    // SubProg patch_forward_case pc: 31 op: STARTLINE (58)

    /** fwdref.e:528			case_sym = Code[switch_pc + 2]*/
    // SubProg patch_forward_case pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 35 op: PLUS (11)
    _31133 = _switch_pc_62841 + 2;
    // SubProg patch_forward_case pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    _case_sym_62844 = (object)*(((s1_ptr)_2)->base + _31133);
    if (!IS_ATOM_INT(_case_sym_62844)){
        _case_sym_62844 = (object)DBL_PTR(_case_sym_62844)->dbl;
    }
    // SubProg patch_forward_case pc: 45 op: ELSE (23)
    goto L2; // [45] 77
    // SubProg patch_forward_case pc: 47 op: NOP1 (159)
L1: // addr: 48 pc: 47 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 48 op: STARTLINE (58)

    /** fwdref.e:530			case_sym = SymTab[fr[FR_SUBPROG]][S_CODE][switch_pc + 2]*/
    // SubProg patch_forward_case pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62839);
    _31135 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_31135)){
        _31136 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31135)->dbl));
    }
    else{
        _31136 = (object)*(((s1_ptr)_2)->base + _31135);
    }
    // SubProg patch_forward_case pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31136);
    if (!IS_ATOM_INT(_34S_CODE_14855)){
        _31137 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
    }
    else{
        _31137 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
    }
    _31136 = NOVALUE;
    // SubProg patch_forward_case pc: 66 op: PLUS (11)
    _31138 = _switch_pc_62841 + 2;
    // SubProg patch_forward_case pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31137);
    _case_sym_62844 = (object)*(((s1_ptr)_2)->base + _31138);
    if (!IS_ATOM_INT(_case_sym_62844)){
        _case_sym_62844 = (object)DBL_PTR(_case_sym_62844)->dbl;
    }
    _31137 = NOVALUE;
    // SubProg patch_forward_case pc: 76 op: NOP1 (159)
L2: // addr: 77 pc: 76 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 77 op: STARTLINE (58)

    /** fwdref.e:533		if SymTab[tok[T_SYM]][S_FILE_NO] = fr[FR_FILE] and fr[FR_SUBPROG] = TopLevelSub then*/
    // SubProg patch_forward_case pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62837);
    _31140 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_31140)){
        _31141 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31140)->dbl));
    }
    else{
        _31141 = (object)*(((s1_ptr)_2)->base + _31140);
    }
    // SubProg patch_forward_case pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31141);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _31142 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _31142 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _31141 = NOVALUE;
    // SubProg patch_forward_case pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62839);
    _31143 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_case pc: 101 op: EQUALS (3)
    if (IS_ATOM_INT(_31142) && IS_ATOM_INT(_31143)) {
        _31144 = (_31142 == _31143);
    }
    else {
        _31144 = binary_op(EQUALS, _31142, _31143);
    }
    _31142 = NOVALUE;
    _31143 = NOVALUE;
    // SubProg patch_forward_case pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31144)) {
        if (_31144 == 0) {
            goto L3; // [105] 129
        }
    }
    else {
        if (DBL_PTR(_31144)->dbl == 0.0) {
            goto L3; // [105] 129
        }
    }
    // SubProg patch_forward_case pc: 109 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62839);
    _31146 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 115 op: EQUALS (3)
    if (IS_ATOM_INT(_31146)) {
        _31147 = (_31146 == _34TopLevelSub_15195);
    }
    else {
        _31147 = binary_op(EQUALS, _31146, _34TopLevelSub_15195);
    }
    _31146 = NOVALUE;
    // SubProg patch_forward_case pc: 119 op: NOP1 (159)
    // SubProg patch_forward_case pc: 120 op: IF (20)
    if (_31147 == 0) {
        DeRef(_31147);
        _31147 = NOVALUE;
        goto L3; // [120] 129
    }
    else {
        if (!IS_ATOM_INT(_31147) && DBL_PTR(_31147)->dbl == 0.0){
            DeRef(_31147);
            _31147 = NOVALUE;
            goto L3; // [120] 129
        }
        DeRef(_31147);
        _31147 = NOVALUE;
    }
    DeRef(_31147);
    _31147 = NOVALUE;
    // SubProg patch_forward_case pc: 123 op: STARTLINE (58)

    /** fwdref.e:534			return*/
    // SubProg patch_forward_case pc: 125 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_case

// block var tok_62837
    DeRef(_tok_62837);

// block var ref_62838

// block var fr_62839
    DeRef(_fr_62839);

// block var switch_pc_62841

// block var case_sym_62844

// block var case_values_62873
    DeRef(_case_values_62873);

// block var cx_62878

// block var negative_62886
    _31135 = NOVALUE;
    DeRef(_31133);
    _31133 = NOVALUE;
    _31140 = NOVALUE;
    DeRef(_31144);
    _31144 = NOVALUE;
    DeRef(_31138);
    _31138 = NOVALUE;
    return;
    // SubProg patch_forward_case pc: 128 op: NOP1 (159)
L3: // addr: 129 pc: 128 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 129 op: STARTLINE (58)

    /** fwdref.e:537		sequence case_values = SymTab[case_sym][S_OBJ]*/
    // SubProg patch_forward_case pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 133 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_case pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31148 = (object)*(((s1_ptr)_2)->base + _case_sym_62844);
    // SubProg patch_forward_case pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 141 op: RHS_SUBS_CHECK (92)
    DeRef(_case_values_62873);
    _2 = (object)SEQ_PTR(_31148);
    _case_values_62873 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_case_values_62873);
    _31148 = NOVALUE;
    // SubProg patch_forward_case pc: 145 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_case pc: 147 op: STARTLINE (58)

    /** fwdref.e:539		integer cx = find( { ref }, case_values )*/
    // SubProg patch_forward_case pc: 149 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ref_62838;
    _31150 = MAKE_SEQ(_1);
    // SubProg patch_forward_case pc: 153 op: FIND_FROM (176)
    _cx_62878 = find_from(_31150, _case_values_62873, 1);
    DeRefDS(_31150);
    _31150 = NOVALUE;
    // SubProg patch_forward_case pc: 158 op: STARTLINE (58)

    /** fwdref.e:540		if not cx then*/
    // SubProg patch_forward_case pc: 160 op: NOT_IFW (108)
    if (_cx_62878 != 0)
    goto L4; // [160] 178
    // SubProg patch_forward_case pc: 163 op: STARTLINE (58)

    /** fwdref.e:541			cx = find( { -ref }, case_values )*/
    // SubProg patch_forward_case pc: 165 op: UMINUS (12)
    if ((uintptr_t)_ref_62838 == (uintptr_t)HIGH_BITS){
        _31153 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31153 = - _ref_62838;
    }
    // SubProg patch_forward_case pc: 168 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31153;
    _31154 = MAKE_SEQ(_1);
    _31153 = NOVALUE;
    // SubProg patch_forward_case pc: 172 op: FIND_FROM (176)
    _cx_62878 = find_from(_31154, _case_values_62873, 1);
    DeRefDS(_31154);
    _31154 = NOVALUE;
    // SubProg patch_forward_case pc: 177 op: NOP1 (159)
L4: // addr: 178 pc: 177 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 178 op: STARTLINE (58)

    /** fwdref.e:544	 	ifdef DEBUG then	*/
    // SubProg patch_forward_case pc: 180 op: STARTLINE (58)

    /** fwdref.e:551		integer negative = 0*/
    // SubProg patch_forward_case pc: 182 op: ASSIGN_I (113)
    _negative_62886 = 0;
    // SubProg patch_forward_case pc: 185 op: STARTLINE (58)

    /** fwdref.e:552		if case_values[cx][1] < 0 then*/
    // SubProg patch_forward_case pc: 187 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_case_values_62873);
    _31156 = (object)*(((s1_ptr)_2)->base + _cx_62878);
    // SubProg patch_forward_case pc: 191 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31156);
    _31157 = (object)*(((s1_ptr)_2)->base + 1);
    _31156 = NOVALUE;
    // SubProg patch_forward_case pc: 195 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _31157, 0)){
        _31157 = NOVALUE;
        goto L5; // [195] 224
    }
    _31157 = NOVALUE;
    // SubProg patch_forward_case pc: 199 op: STARTLINE (58)

    /** fwdref.e:553			negative = 1*/
    // SubProg patch_forward_case pc: 201 op: ASSIGN_I (113)
    _negative_62886 = 1;
    // SubProg patch_forward_case pc: 204 op: STARTLINE (58)

    /** fwdref.e:554			case_values[cx][1] *= -1*/
    // SubProg patch_forward_case pc: 206 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_case_values_62873);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62873 = MAKE_SEQ(_2);
    }
    _3 = (object)(_cx_62878 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_case pc: 211 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31161 = (object)*(((s1_ptr)_2)->base + 1);
    _31159 = NOVALUE;
    // SubProg patch_forward_case pc: 215 op: MULTIPLY (13)
    if (IS_ATOM_INT(_31161)) {
        if (_31161 == (short)_31161){
            _31162 = _31161 * -1;
        }
        else{
            _31162 = NewDouble(_31161 * (eudouble)-1);
        }
    }
    else {
        _31162 = binary_op(MULTIPLY, _31161, -1);
    }
    _31161 = NOVALUE;
    // SubProg patch_forward_case pc: 219 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31162;
    if( _1 != _31162 ){
        DeRef(_1);
    }
    _31162 = NOVALUE;
    _31159 = NOVALUE;
    // SubProg patch_forward_case pc: 223 op: NOP1 (159)
L5: // addr: 224 pc: 223 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 224 op: STARTLINE (58)

    /** fwdref.e:557		if negative then*/
    // SubProg patch_forward_case pc: 226 op: IF (20)
    if (_negative_62886 == 0)
    {
        goto L6; // [226] 247
    }
    else{
    }
    // SubProg patch_forward_case pc: 229 op: STARTLINE (58)

    /** fwdref.e:558			case_values[cx] = - tok[T_SYM]*/
    // SubProg patch_forward_case pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62837);
    _31163 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 237 op: UMINUS (12)
    if (IS_ATOM_INT(_31163)) {
        if ((uintptr_t)_31163 == (uintptr_t)HIGH_BITS){
            _31164 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _31164 = - _31163;
        }
    }
    else {
        _31164 = unary_op(UMINUS, _31163);
    }
    _31163 = NOVALUE;
    // SubProg patch_forward_case pc: 240 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_case_values_62873);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62873 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62878);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31164;
    if( _1 != _31164 ){
        DeRef(_1);
    }
    _31164 = NOVALUE;
    // SubProg patch_forward_case pc: 244 op: ELSE (23)
    goto L7; // [244] 260
    // SubProg patch_forward_case pc: 246 op: NOP1 (159)
L6: // addr: 247 pc: 246 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 247 op: STARTLINE (58)

    /** fwdref.e:560			case_values[cx] = tok[T_SYM]*/
    // SubProg patch_forward_case pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 251 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62837);
    _31165 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 255 op: ASSIGN_SUBS (16)
    Ref(_31165);
    _2 = (object)SEQ_PTR(_case_values_62873);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62873 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62878);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31165;
    if( _1 != _31165 ){
        DeRef(_1);
    }
    _31165 = NOVALUE;
    // SubProg patch_forward_case pc: 259 op: NOP1 (159)
L7: // addr: 260 pc: 259 sub: 62834 op: 159
    // SubProg patch_forward_case pc: 260 op: STARTLINE (58)

    /** fwdref.e:562		SymTab[case_sym][S_OBJ] = case_values*/
    // SubProg patch_forward_case pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 264 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_case_sym_62844 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_case pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 271 op: PASSIGN_SUBS (162)
    RefDS(_case_values_62873);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _case_values_62873;
    DeRef(_1);
    _31166 = NOVALUE;
    // SubProg patch_forward_case pc: 275 op: STARTLINE (58)

    /** fwdref.e:563		resolved_reference( ref )*/
    // SubProg patch_forward_case pc: 277 op: PROC (27)
    _37resolved_reference(_ref_62838);
    // SubProg patch_forward_case pc: 280 op: STARTLINE (58)

    /** fwdref.e:564	end procedure*/
    // SubProg patch_forward_case pc: 282 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_case

// block var tok_62837
    DeRef(_tok_62837);

// block var ref_62838

// block var fr_62839
    DeRef(_fr_62839);

// block var switch_pc_62841

// block var case_sym_62844

// block var case_values_62873
    DeRefDS(_case_values_62873);

// block var cx_62878

// block var negative_62886
    _31135 = NOVALUE;
    DeRef(_31133);
    _31133 = NOVALUE;
    _31140 = NOVALUE;
    DeRef(_31144);
    _31144 = NOVALUE;
    DeRef(_31138);
    _31138 = NOVALUE;
    return;
    // SubProg patch_forward_case pc: 285 op: BADRETURNF (43)
    ;
}


void _37patch_forward_type_check(object _tok_62909, object _ref_62910)
{
    object _fr_62911 = NOVALUE;
    object _which_type_62914 = NOVALUE;
    object _var_62916 = NOVALUE;
    object _pc_62949 = NOVALUE;
    object _with_type_check_62951 = NOVALUE;
    object _c_62981 = NOVALUE;
    object _subprog_inlined_insert_code_at_332_62990 = NOVALUE;
    object _code_inlined_insert_code_at_329_62989 = NOVALUE;
    object _subprog_inlined_insert_code_at_415_63006 = NOVALUE;
    object _code_inlined_insert_code_at_412_63005 = NOVALUE;
    object _subprog_inlined_insert_code_at_477_63016 = NOVALUE;
    object _code_inlined_insert_code_at_474_63015 = NOVALUE;
    object _subprog_inlined_insert_code_at_539_63026 = NOVALUE;
    object _code_inlined_insert_code_at_536_63025 = NOVALUE;
    object _start_pc_63033 = NOVALUE;
    object _subprog_inlined_insert_code_at_647_63050 = NOVALUE;
    object _code_inlined_insert_code_at_644_63049 = NOVALUE;
    object _c_63053 = NOVALUE;
    object _subprog_inlined_insert_code_at_741_63069 = NOVALUE;
    object _code_inlined_insert_code_at_738_63068 = NOVALUE;
    object _start_pc_63080 = NOVALUE;
    object _subprog_inlined_insert_code_at_886_63100 = NOVALUE;
    object _code_inlined_insert_code_at_883_63099 = NOVALUE;
    object _subprog_inlined_insert_code_at_987_63121 = NOVALUE;
    object _code_inlined_insert_code_at_984_63120 = NOVALUE;
// skipping _31257  name type: 0
    object _31256 = NOVALUE; // 63118 31256
    object _31255 = NOVALUE; // 63117 31255
    object _31254 = NOVALUE; // 63115 31254
    object _31253 = NOVALUE; // 63113 31253
    object _31252 = NOVALUE; // 63111 31252
    object _31251 = NOVALUE; // 63110 31251
    object _31250 = NOVALUE; // 63108 31250
// skipping _31249  name type: 0
    object _31248 = NOVALUE; // 63104 31248
// skipping _31247  name type: 0
    object _31246 = NOVALUE; // 63097 31246
    object _31245 = NOVALUE; // 63096 31245
    object _31244 = NOVALUE; // 63094 31244
    object _31243 = NOVALUE; // 63092 31243
    object _31242 = NOVALUE; // 63090 31242
    object _31241 = NOVALUE; // 63089 31241
    object _31240 = NOVALUE; // 63087 31240
// skipping _31239  name type: 0
    object _31238 = NOVALUE; // 63083 31238
    object _31237 = NOVALUE; // 63079 31237
    object _31236 = NOVALUE; // 63077 31236
    object _31235 = NOVALUE; // 63075 31235
    object _31234 = NOVALUE; // 63074 31234
    object _31233 = NOVALUE; // 63073 31233
// skipping _31232  name type: 0
    object _31231 = NOVALUE; // 63066 31231
    object _31230 = NOVALUE; // 63065 31230
    object _31229 = NOVALUE; // 63062 31229
    object _31228 = NOVALUE; // 63061 31228
// skipping _31227  name type: 0
    object _31226 = NOVALUE; // 63058 31226
    object _31225 = NOVALUE; // 63057 31225
// skipping _31224  name type: 0
// skipping _31223  name type: 0
    object _31222 = NOVALUE; // 63047 31222
    object _31221 = NOVALUE; // 63046 31221
// skipping _31220  name type: 0
    object _31219 = NOVALUE; // 63042 31219
    object _31218 = NOVALUE; // 63040 31218
    object _31217 = NOVALUE; // 63039 31217
    object _31216 = NOVALUE; // 63037 31216
    object _31215 = NOVALUE; // 63032 31215
    object _31214 = NOVALUE; // 63030 31214
// skipping _31213  name type: 0
    object _31212 = NOVALUE; // 63023 31212
    object _31211 = NOVALUE; // 63022 31211
// skipping _31210  name type: 0
// skipping _31209  name type: 0
    object _31208 = NOVALUE; // 63013 31208
    object _31207 = NOVALUE; // 63012 31207
// skipping _31206  name type: 0
// skipping _31205  name type: 0
    object _31204 = NOVALUE; // 63003 31204
    object _31203 = NOVALUE; // 63002 31203
// skipping _31202  name type: 0
// skipping _31201  name type: 0
// skipping _31200  name type: 0
    object _31199 = NOVALUE; // 62987 31199
    object _31198 = NOVALUE; // 62986 31198
// skipping _31197  name type: 0
    object _31196 = NOVALUE; // 62980 31196
    object _31195 = NOVALUE; // 62978 31195
// skipping _31194  name type: 0
    object _31193 = NOVALUE; // 62969 31193
    object _31192 = NOVALUE; // 62968 31192
// skipping _31191  name type: 0
// skipping _31190  name type: 0
    object _31189 = NOVALUE; // 62964 31189
// skipping _31188  name type: 0
// skipping _31187  name type: 0
    object _31186 = NOVALUE; // 62957 31186
// skipping _31185  name type: 0
    object _31184 = NOVALUE; // 62953 31184
// skipping _31183  name type: 0
// skipping _31182  name type: 0
    object _31181 = NOVALUE; // 62946 31181
    object _31180 = NOVALUE; // 62945 31180
// skipping _31179  name type: 0
// skipping _31178  name type: 0
    object _31177 = NOVALUE; // 62935 31177
// skipping _31176  name type: 0
// skipping _31175  name type: 0
// skipping _31174  name type: 0
// skipping _31173  name type: 0
    object _31172 = NOVALUE; // 62924 31172
    object _31171 = NOVALUE; // 62923 31171
// skipping _31170  name type: 0
    object _31169 = NOVALUE; // 62918 31169
// skipping _31168  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_type_check pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 3 op: STARTLINE (58)

    /** fwdref.e:568		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_type_check pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62911);
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _fr_62911 = (object)*(((s1_ptr)_2)->base + _ref_62910);
    Ref(_fr_62911);
    // SubProg patch_forward_type_check pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 13 op: STARTLINE (58)

    /** fwdref.e:572		if fr[FR_OP] = TYPE_CHECK_FORWARD then*/
    // SubProg patch_forward_type_check pc: 15 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31169 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 21 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31169, 197)){
        _31169 = NOVALUE;
        goto L1; // [21] 86
    }
    _31169 = NOVALUE;
    // SubProg patch_forward_type_check pc: 25 op: STARTLINE (58)

    /** fwdref.e:573			which_type = SymTab[tok[T_SYM]][S_VTYPE]*/
    // SubProg patch_forward_type_check pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62909);
    _31171 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_type_check pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_31171)){
        _31172 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31171)->dbl));
    }
    else{
        _31172 = (object)*(((s1_ptr)_2)->base + _31171);
    }
    // SubProg patch_forward_type_check pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31172);
    _which_type_62914 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_which_type_62914)){
        _which_type_62914 = (object)DBL_PTR(_which_type_62914)->dbl;
    }
    _31172 = NOVALUE;
    // SubProg patch_forward_type_check pc: 47 op: STARTLINE (58)

    /** fwdref.e:574			if not which_type then*/
    // SubProg patch_forward_type_check pc: 49 op: NOT_IFW (108)
    if (_which_type_62914 != 0)
    goto L2; // [49] 72
    // SubProg patch_forward_type_check pc: 52 op: STARTLINE (58)

    /** fwdref.e:575				which_type = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62909);
    _which_type_62914 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_62914)){
        _which_type_62914 = (object)DBL_PTR(_which_type_62914)->dbl;
    }
    // SubProg patch_forward_type_check pc: 62 op: STARTLINE (58)

    /** fwdref.e:576				var = 0*/
    // SubProg patch_forward_type_check pc: 64 op: ASSIGN (18)
    _var_62916 = 0;
    // SubProg patch_forward_type_check pc: 67 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 69 op: ELSE (23)
    goto L3; // [69] 144
    // SubProg patch_forward_type_check pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 72 op: STARTLINE (58)

    /** fwdref.e:578				var = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62909);
    _var_62916 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_var_62916)){
        _var_62916 = (object)DBL_PTR(_var_62916)->dbl;
    }
    // SubProg patch_forward_type_check pc: 82 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 83 op: ELSE (23)
    goto L3; // [83] 144
    // SubProg patch_forward_type_check pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 86 op: STARTLINE (58)

    /** fwdref.e:582		elsif fr[FR_OP] = TYPE then*/
    // SubProg patch_forward_type_check pc: 88 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31177 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 94 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31177, 504)){
        _31177 = NOVALUE;
        goto L4; // [94] 118
    }
    _31177 = NOVALUE;
    // SubProg patch_forward_type_check pc: 98 op: STARTLINE (58)

    /** fwdref.e:583			which_type = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62909);
    _which_type_62914 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_62914)){
        _which_type_62914 = (object)DBL_PTR(_which_type_62914)->dbl;
    }
    // SubProg patch_forward_type_check pc: 108 op: STARTLINE (58)

    /** fwdref.e:584			var = 0*/
    // SubProg patch_forward_type_check pc: 110 op: ASSIGN (18)
    _var_62916 = 0;
    // SubProg patch_forward_type_check pc: 113 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 115 op: ELSE (23)
    goto L3; // [115] 144
    // SubProg patch_forward_type_check pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 118 op: STARTLINE (58)

    /** fwdref.e:587			prep_forward_error( ref )*/
    // SubProg patch_forward_type_check pc: 120 op: PROC (27)
    _37prep_forward_error(_ref_62910);
    // SubProg patch_forward_type_check pc: 123 op: STARTLINE (58)

    /** fwdref.e:588			InternalErr( 262, { TYPE_CHECK, TYPE_CHECK_FORWARD, fr[FR_OP] })*/
    // SubProg patch_forward_type_check pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 129 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31180 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 133 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 65;
    ((intptr_t*)_2)[2] = 197;
    Ref(_31180);
    ((intptr_t*)_2)[3] = _31180;
    _31181 = MAKE_SEQ(_1);
    _31180 = NOVALUE;
    // SubProg patch_forward_type_check pc: 139 op: PROC (27)
    _49InternalErr(262, _31181);
    _31181 = NOVALUE;
    // SubProg patch_forward_type_check pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 144 op: STARTLINE (58)

    /** fwdref.e:591		if which_type < 0 then*/
    // SubProg patch_forward_type_check pc: 146 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_type_check pc: 148 op: LESS_IFW (102)
    if (_which_type_62914 >= 0)
    goto L5; // [148] 158
    // SubProg patch_forward_type_check pc: 152 op: STARTLINE (58)

    /** fwdref.e:593			return*/
    // SubProg patch_forward_type_check pc: 154 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_type_check

// block var tok_62909
    DeRef(_tok_62909);

// block var ref_62910

// block var fr_62911
    DeRef(_fr_62911);

// block var which_type_62914

// block var var_62916

// block var pc_62949

// block var with_type_check_62951
    _31171 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 157 op: NOP1 (159)
L5: // addr: 158 pc: 157 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 158 op: STARTLINE (58)

    /** fwdref.e:596		set_code( ref )*/
    // SubProg patch_forward_type_check pc: 160 op: PROC (27)
    _37set_code(_ref_62910);
    // SubProg patch_forward_type_check pc: 163 op: STARTLINE (58)

    /** fwdref.e:598		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_type_check pc: 165 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62911);
    _pc_62949 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62949))
    _pc_62949 = (object)DBL_PTR(_pc_62949)->dbl;
    // SubProg patch_forward_type_check pc: 169 op: STARTLINE (58)

    /** fwdref.e:599		integer with_type_check = Code[pc + 2]*/
    // SubProg patch_forward_type_check pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 173 op: PLUS (11)
    _31184 = _pc_62949 + 2;
    // SubProg patch_forward_type_check pc: 177 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    _with_type_check_62951 = (object)*(((s1_ptr)_2)->base + _31184);
    if (!IS_ATOM_INT(_with_type_check_62951)){
        _with_type_check_62951 = (object)DBL_PTR(_with_type_check_62951)->dbl;
    }
    // SubProg patch_forward_type_check pc: 183 op: STARTLINE (58)

    /** fwdref.e:601		if Code[pc] != TYPE_CHECK_FORWARD then*/
    // SubProg patch_forward_type_check pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 187 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    _31186 = (object)*(((s1_ptr)_2)->base + _pc_62949);
    // SubProg patch_forward_type_check pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 193 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _31186, 197)){
        _31186 = NOVALUE;
        goto L6; // [193] 204
    }
    _31186 = NOVALUE;
    // SubProg patch_forward_type_check pc: 197 op: STARTLINE (58)

    /** fwdref.e:602			forward_error( tok, ref )*/
    // SubProg patch_forward_type_check pc: 199 op: PROC (27)
    Ref(_tok_62909);
    _37forward_error(_tok_62909, _ref_62910);
    // SubProg patch_forward_type_check pc: 203 op: NOP1 (159)
L6: // addr: 204 pc: 203 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 204 op: STARTLINE (58)

    /** fwdref.e:604		if not var then*/
    // SubProg patch_forward_type_check pc: 206 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_type_check pc: 208 op: NOT_IFW (108)
    if (_var_62916 != 0)
    goto L7; // [208] 226
    // SubProg patch_forward_type_check pc: 211 op: STARTLINE (58)

    /** fwdref.e:606			var = Code[pc+1]*/
    // SubProg patch_forward_type_check pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 215 op: PLUS1 (93)
    _31189 = _pc_62949 + 1;
    // SubProg patch_forward_type_check pc: 219 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Code_15276);
    _var_62916 = (object)*(((s1_ptr)_2)->base + _31189);
    if (!IS_ATOM_INT(_var_62916)){
        _var_62916 = (object)DBL_PTR(_var_62916)->dbl;
    }
    // SubProg patch_forward_type_check pc: 225 op: NOP1 (159)
L7: // addr: 226 pc: 225 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 226 op: STARTLINE (58)

    /** fwdref.e:609		if var < 0 then*/
    // SubProg patch_forward_type_check pc: 228 op: LESS_IFW (102)
    if (_var_62916 >= 0)
    goto L8; // [228] 238
    // SubProg patch_forward_type_check pc: 232 op: STARTLINE (58)

    /** fwdref.e:611			return*/
    // SubProg patch_forward_type_check pc: 234 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_type_check

// block var tok_62909
    DeRef(_tok_62909);

// block var ref_62910

// block var fr_62911
    DeRef(_fr_62911);

// block var which_type_62914

// block var var_62916

// block var pc_62949

// block var with_type_check_62951
    DeRef(_31189);
    _31189 = NOVALUE;
    DeRef(_31184);
    _31184 = NOVALUE;
    _31171 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 237 op: NOP1 (159)
L8: // addr: 238 pc: 237 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 238 op: STARTLINE (58)

    /** fwdref.e:615		replace_code( {}, pc, pc + 2, fr[FR_SUBPROG])*/
    // SubProg patch_forward_type_check pc: 240 op: PLUS (11)
    _31192 = _pc_62949 + 2;
    if ((object)((uintptr_t)_31192 + (uintptr_t)HIGH_BITS) >= 0){
        _31192 = NewDouble((eudouble)_31192);
    }
    // SubProg patch_forward_type_check pc: 244 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31193 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 248 op: PROC (27)
    RefDS(_21936);
    Ref(_31193);
    _37replace_code(_21936, _pc_62949, _31192, _31193);
    _31192 = NOVALUE;
    _31193 = NOVALUE;
    // SubProg patch_forward_type_check pc: 254 op: STARTLINE (58)

    /** fwdref.e:617		if TRANSLATE then*/
    // SubProg patch_forward_type_check pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 258 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L9; // [258] 364
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 261 op: STARTLINE (58)

    /** fwdref.e:618			if with_type_check then*/
    // SubProg patch_forward_type_check pc: 263 op: IF (20)
    if (_with_type_check_62951 == 0)
    {
        goto LA; // [263] 771
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 266 op: STARTLINE (58)

    /** fwdref.e:619				if which_type != object_type then*/
    // SubProg patch_forward_type_check pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 270 op: NOTEQ_IFW (105)
    if (_which_type_62914 == _53object_type_46257)
    goto LA; // [270] 771
    // SubProg patch_forward_type_check pc: 274 op: STARTLINE (58)

    /** fwdref.e:620					if SymTab[which_type][S_EFFECT] then*/
    // SubProg patch_forward_type_check pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31195 = (object)*(((s1_ptr)_2)->base + _which_type_62914);
    // SubProg patch_forward_type_check pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31195);
    _31196 = (object)*(((s1_ptr)_2)->base + 23);
    _31195 = NOVALUE;
    // SubProg patch_forward_type_check pc: 288 op: IF (20)
    if (_31196 == 0) {
        _31196 = NOVALUE;
        goto LB; // [288] 357
    }
    else {
        if (!IS_ATOM_INT(_31196) && DBL_PTR(_31196)->dbl == 0.0){
            _31196 = NOVALUE;
            goto LB; // [288] 357
        }
        _31196 = NOVALUE;
    }
    _31196 = NOVALUE;
    // SubProg patch_forward_type_check pc: 291 op: STARTLINE (58)

    /** fwdref.e:622						integer c = NewTempSym()*/
    // SubProg patch_forward_type_check pc: 293 op: PROC (27)
    _c_62981 = _53NewTempSym(0);
    // SubProg patch_forward_type_check pc: 297 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_62981)) {
        _1 = (object)(DBL_PTR(_c_62981)->dbl);
        DeRefDS(_c_62981);
        _c_62981 = _1;
    }
    // SubProg patch_forward_type_check pc: 299 op: STARTLINE (58)

    /** fwdref.e:623						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 303 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 305 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_62914;
    ((intptr_t*)_2)[3] = _var_62916;
    ((intptr_t*)_2)[4] = _c_62981;
    ((intptr_t*)_2)[5] = 65;
    _31198 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 313 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31199 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 317 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_329_62989);
    _code_inlined_insert_code_at_329_62989 = _31198;
    _31198 = NOVALUE;
    // SubProg patch_forward_type_check pc: 320 op: ASSIGN (18)
    Ref(_31199);
    DeRef(_subprog_inlined_insert_code_at_332_62990);
    _subprog_inlined_insert_code_at_332_62990 = _31199;
    _31199 = NOVALUE;
    // SubProg patch_forward_type_check pc: 323 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 325 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_332_62990)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_332_62990)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_332_62990);
        _subprog_inlined_insert_code_at_332_62990 = _1;
    }
    // SubProg patch_forward_type_check pc: 327 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 329 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_332_62990;
    // SubProg patch_forward_type_check pc: 332 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 334 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_329_62989);
    _65insert_code(_code_inlined_insert_code_at_329_62989, _pc_62949);
    // SubProg patch_forward_type_check pc: 338 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 340 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 343 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 345 op: ELSE (23)
    goto LC; // [345] 348
    // SubProg patch_forward_type_check pc: 347 op: NOP1 (159)
LC: // addr: 348 pc: 347 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 348 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 329

// block var code_inlined_insert_code_at_329_62989
    DeRefi(_code_inlined_insert_code_at_329_62989);
    _code_inlined_insert_code_at_329_62989 = NOVALUE;

// block var subprog_inlined_insert_code_at_332_62990
    DeRef(_subprog_inlined_insert_code_at_332_62990);
    _subprog_inlined_insert_code_at_332_62990 = NOVALUE;
    // SubProg patch_forward_type_check pc: 350 op: STARTLINE (58)

    /** fwdref.e:624						pc += 5*/
    // SubProg patch_forward_type_check pc: 352 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 5;
    // SubProg patch_forward_type_check pc: 356 op: NOP1 (159)
LB: // addr: 357 pc: 356 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 357 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var c_62981
    // SubProg patch_forward_type_check pc: 359 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 360 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 361 op: ELSE (23)
    goto LA; // [361] 771
    // SubProg patch_forward_type_check pc: 363 op: NOP1 (159)
L9: // addr: 364 pc: 363 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 364 op: STARTLINE (58)

    /** fwdref.e:630			if with_type_check then*/
    // SubProg patch_forward_type_check pc: 366 op: IF (20)
    if (_with_type_check_62951 == 0)
    {
        goto LD; // [366] 770
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 369 op: STARTLINE (58)

    /** fwdref.e:632				if which_type = object_type then*/
    // SubProg patch_forward_type_check pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 373 op: EQUALS_IFW (104)
    if (_which_type_62914 != _53object_type_46257)
    goto LE; // [373] 380
    // SubProg patch_forward_type_check pc: 377 op: ELSE (23)
    goto LF; // [377] 769
    // SubProg patch_forward_type_check pc: 379 op: NOP1 (159)
LE: // addr: 380 pc: 379 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 380 op: STARTLINE (58)

    /** fwdref.e:636					if which_type = integer_type then*/
    // SubProg patch_forward_type_check pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 384 op: EQUALS_IFW (104)
    if (_which_type_62914 != _53integer_type_46263)
    goto L10; // [384] 442
    // SubProg patch_forward_type_check pc: 388 op: STARTLINE (58)

    /** fwdref.e:637						insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 392 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62916;
    _31203 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 396 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31204 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 400 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_412_63005);
    _code_inlined_insert_code_at_412_63005 = _31203;
    _31203 = NOVALUE;
    // SubProg patch_forward_type_check pc: 403 op: ASSIGN (18)
    Ref(_31204);
    DeRef(_subprog_inlined_insert_code_at_415_63006);
    _subprog_inlined_insert_code_at_415_63006 = _31204;
    _31204 = NOVALUE;
    // SubProg patch_forward_type_check pc: 406 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 408 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_415_63006)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_415_63006)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_415_63006);
        _subprog_inlined_insert_code_at_415_63006 = _1;
    }
    // SubProg patch_forward_type_check pc: 410 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 412 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_415_63006;
    // SubProg patch_forward_type_check pc: 415 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 417 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_412_63005);
    _65insert_code(_code_inlined_insert_code_at_412_63005, _pc_62949);
    // SubProg patch_forward_type_check pc: 421 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 423 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 426 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 428 op: ELSE (23)
    goto L11; // [428] 431
    // SubProg patch_forward_type_check pc: 430 op: NOP1 (159)
L11: // addr: 431 pc: 430 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 431 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 412

// block var code_inlined_insert_code_at_412_63005
    DeRefi(_code_inlined_insert_code_at_412_63005);
    _code_inlined_insert_code_at_412_63005 = NOVALUE;

// block var subprog_inlined_insert_code_at_415_63006
    DeRef(_subprog_inlined_insert_code_at_415_63006);
    _subprog_inlined_insert_code_at_415_63006 = NOVALUE;
    // SubProg patch_forward_type_check pc: 433 op: STARTLINE (58)

    /** fwdref.e:638						pc += 2*/
    // SubProg patch_forward_type_check pc: 435 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 2;
    // SubProg patch_forward_type_check pc: 439 op: ELSE (23)
    goto L12; // [439] 768
    // SubProg patch_forward_type_check pc: 441 op: NOP1 (159)
L10: // addr: 442 pc: 441 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 442 op: STARTLINE (58)

    /** fwdref.e:640					elsif which_type = sequence_type then*/
    // SubProg patch_forward_type_check pc: 444 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 446 op: EQUALS_IFW (104)
    if (_which_type_62914 != _53sequence_type_46261)
    goto L13; // [446] 504
    // SubProg patch_forward_type_check pc: 450 op: STARTLINE (58)

    /** fwdref.e:641						insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG])*/
    // SubProg patch_forward_type_check pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 454 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_62916;
    _31207 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 458 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31208 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 462 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_474_63015);
    _code_inlined_insert_code_at_474_63015 = _31207;
    _31207 = NOVALUE;
    // SubProg patch_forward_type_check pc: 465 op: ASSIGN (18)
    Ref(_31208);
    DeRef(_subprog_inlined_insert_code_at_477_63016);
    _subprog_inlined_insert_code_at_477_63016 = _31208;
    _31208 = NOVALUE;
    // SubProg patch_forward_type_check pc: 468 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 470 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_477_63016)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_477_63016)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_477_63016);
        _subprog_inlined_insert_code_at_477_63016 = _1;
    }
    // SubProg patch_forward_type_check pc: 472 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 474 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_477_63016;
    // SubProg patch_forward_type_check pc: 477 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 479 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_474_63015);
    _65insert_code(_code_inlined_insert_code_at_474_63015, _pc_62949);
    // SubProg patch_forward_type_check pc: 483 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 485 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 488 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 490 op: ELSE (23)
    goto L14; // [490] 493
    // SubProg patch_forward_type_check pc: 492 op: NOP1 (159)
L14: // addr: 493 pc: 492 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 493 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 474

// block var code_inlined_insert_code_at_474_63015
    DeRefi(_code_inlined_insert_code_at_474_63015);
    _code_inlined_insert_code_at_474_63015 = NOVALUE;

// block var subprog_inlined_insert_code_at_477_63016
    DeRef(_subprog_inlined_insert_code_at_477_63016);
    _subprog_inlined_insert_code_at_477_63016 = NOVALUE;
    // SubProg patch_forward_type_check pc: 495 op: STARTLINE (58)

    /** fwdref.e:642						pc += 2*/
    // SubProg patch_forward_type_check pc: 497 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 2;
    // SubProg patch_forward_type_check pc: 501 op: ELSE (23)
    goto L12; // [501] 768
    // SubProg patch_forward_type_check pc: 503 op: NOP1 (159)
L13: // addr: 504 pc: 503 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 504 op: STARTLINE (58)

    /** fwdref.e:644					elsif which_type = atom_type then*/
    // SubProg patch_forward_type_check pc: 506 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 508 op: EQUALS_IFW (104)
    if (_which_type_62914 != _53atom_type_46259)
    goto L15; // [508] 566
    // SubProg patch_forward_type_check pc: 512 op: STARTLINE (58)

    /** fwdref.e:645						insert_code( { ATOM_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 514 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 516 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 101;
    ((intptr_t *)_2)[2] = _var_62916;
    _31211 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 520 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31212 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 524 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_536_63025);
    _code_inlined_insert_code_at_536_63025 = _31211;
    _31211 = NOVALUE;
    // SubProg patch_forward_type_check pc: 527 op: ASSIGN (18)
    Ref(_31212);
    DeRef(_subprog_inlined_insert_code_at_539_63026);
    _subprog_inlined_insert_code_at_539_63026 = _31212;
    _31212 = NOVALUE;
    // SubProg patch_forward_type_check pc: 530 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 532 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_539_63026)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_539_63026)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_539_63026);
        _subprog_inlined_insert_code_at_539_63026 = _1;
    }
    // SubProg patch_forward_type_check pc: 534 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 536 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_539_63026;
    // SubProg patch_forward_type_check pc: 539 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 541 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_536_63025);
    _65insert_code(_code_inlined_insert_code_at_536_63025, _pc_62949);
    // SubProg patch_forward_type_check pc: 545 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 547 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 550 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 552 op: ELSE (23)
    goto L16; // [552] 555
    // SubProg patch_forward_type_check pc: 554 op: NOP1 (159)
L16: // addr: 555 pc: 554 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 555 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 536

// block var code_inlined_insert_code_at_536_63025
    DeRefi(_code_inlined_insert_code_at_536_63025);
    _code_inlined_insert_code_at_536_63025 = NOVALUE;

// block var subprog_inlined_insert_code_at_539_63026
    DeRef(_subprog_inlined_insert_code_at_539_63026);
    _subprog_inlined_insert_code_at_539_63026 = NOVALUE;
    // SubProg patch_forward_type_check pc: 557 op: STARTLINE (58)

    /** fwdref.e:646						pc += 2*/
    // SubProg patch_forward_type_check pc: 559 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 2;
    // SubProg patch_forward_type_check pc: 563 op: ELSE (23)
    goto L12; // [563] 768
    // SubProg patch_forward_type_check pc: 565 op: NOP1 (159)
L15: // addr: 566 pc: 565 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 566 op: STARTLINE (58)

    /** fwdref.e:648					elsif SymTab[which_type][S_NEXT] then*/
    // SubProg patch_forward_type_check pc: 568 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 570 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31214 = (object)*(((s1_ptr)_2)->base + _which_type_62914);
    // SubProg patch_forward_type_check pc: 574 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 576 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31214);
    _31215 = (object)*(((s1_ptr)_2)->base + 2);
    _31214 = NOVALUE;
    // SubProg patch_forward_type_check pc: 580 op: IF (20)
    if (_31215 == 0) {
        _31215 = NOVALUE;
        goto L17; // [580] 765
    }
    else {
        if (!IS_ATOM_INT(_31215) && DBL_PTR(_31215)->dbl == 0.0){
            _31215 = NOVALUE;
            goto L17; // [580] 765
        }
        _31215 = NOVALUE;
    }
    _31215 = NOVALUE;
    // SubProg patch_forward_type_check pc: 583 op: STARTLINE (58)

    /** fwdref.e:649						integer start_pc = pc*/
    // SubProg patch_forward_type_check pc: 585 op: ASSIGN_I (113)
    _start_pc_63033 = _pc_62949;
    // SubProg patch_forward_type_check pc: 588 op: STARTLINE (58)

    /** fwdref.e:652						if SymTab[SymTab[which_type][S_NEXT]][S_VTYPE] = integer_type then*/
    // SubProg patch_forward_type_check pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 592 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 594 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31216 = (object)*(((s1_ptr)_2)->base + _which_type_62914);
    // SubProg patch_forward_type_check pc: 598 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 600 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31216);
    _31217 = (object)*(((s1_ptr)_2)->base + 2);
    _31216 = NOVALUE;
    // SubProg patch_forward_type_check pc: 604 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_31217)){
        _31218 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31217)->dbl));
    }
    else{
        _31218 = (object)*(((s1_ptr)_2)->base + _31217);
    }
    // SubProg patch_forward_type_check pc: 608 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 610 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31218);
    _31219 = (object)*(((s1_ptr)_2)->base + 15);
    _31218 = NOVALUE;
    // SubProg patch_forward_type_check pc: 614 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 616 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31219, _53integer_type_46263)){
        _31219 = NOVALUE;
        goto L18; // [616] 672
    }
    _31219 = NOVALUE;
    // SubProg patch_forward_type_check pc: 620 op: STARTLINE (58)

    /** fwdref.e:654							insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 624 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62916;
    _31221 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 628 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31222 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 632 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_644_63049);
    _code_inlined_insert_code_at_644_63049 = _31221;
    _31221 = NOVALUE;
    // SubProg patch_forward_type_check pc: 635 op: ASSIGN (18)
    Ref(_31222);
    DeRef(_subprog_inlined_insert_code_at_647_63050);
    _subprog_inlined_insert_code_at_647_63050 = _31222;
    _31222 = NOVALUE;
    // SubProg patch_forward_type_check pc: 638 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 640 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_647_63050)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_647_63050)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_647_63050);
        _subprog_inlined_insert_code_at_647_63050 = _1;
    }
    // SubProg patch_forward_type_check pc: 642 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 644 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_647_63050;
    // SubProg patch_forward_type_check pc: 647 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 649 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_644_63049);
    _65insert_code(_code_inlined_insert_code_at_644_63049, _pc_62949);
    // SubProg patch_forward_type_check pc: 653 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 655 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 658 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 660 op: ELSE (23)
    goto L19; // [660] 663
    // SubProg patch_forward_type_check pc: 662 op: NOP1 (159)
L19: // addr: 663 pc: 662 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 663 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 644

// block var code_inlined_insert_code_at_644_63049
    DeRefi(_code_inlined_insert_code_at_644_63049);
    _code_inlined_insert_code_at_644_63049 = NOVALUE;

// block var subprog_inlined_insert_code_at_647_63050
    DeRef(_subprog_inlined_insert_code_at_647_63050);
    _subprog_inlined_insert_code_at_647_63050 = NOVALUE;
    // SubProg patch_forward_type_check pc: 665 op: STARTLINE (58)

    /** fwdref.e:656							pc += 2*/
    // SubProg patch_forward_type_check pc: 667 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 2;
    // SubProg patch_forward_type_check pc: 671 op: NOP1 (159)
L18: // addr: 672 pc: 671 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 672 op: STARTLINE (58)

    /** fwdref.e:658						symtab_index c = NewTempSym()*/
    // SubProg patch_forward_type_check pc: 674 op: PROC (27)
    _c_63053 = _53NewTempSym(0);
    // SubProg patch_forward_type_check pc: 678 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_63053)) {
        _1 = (object)(DBL_PTR(_c_63053)->dbl);
        DeRefDS(_c_63053);
        _c_63053 = _1;
    }
    // SubProg patch_forward_type_check pc: 680 op: STARTLINE (58)

    /** fwdref.e:659						SymTab[fr[FR_SUBPROG]][S_STACK_SPACE] += 1*/
    // SubProg patch_forward_type_check pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 684 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31225 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 688 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31225))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31225)->dbl));
    else
    _3 = (object)(_31225 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_type_check pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 695 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_34S_STACK_SPACE_14903)){
        _31228 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
    }
    else{
        _31228 = (object)*(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
    }
    _31226 = NOVALUE;
    // SubProg patch_forward_type_check pc: 699 op: PLUS1 (93)
    if (IS_ATOM_INT(_31228)) {
        _31229 = _31228 + 1;
        if (_31229 > MAXINT){
            _31229 = NewDouble((eudouble)_31229);
        }
    }
    else
    _31229 = binary_op(PLUS, 1, _31228);
    _31228 = NOVALUE;
    // SubProg patch_forward_type_check pc: 703 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_STACK_SPACE_14903))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31229;
    if( _1 != _31229 ){
        DeRef(_1);
    }
    _31229 = NOVALUE;
    _31226 = NOVALUE;
    // SubProg patch_forward_type_check pc: 707 op: STARTLINE (58)

    /** fwdref.e:660						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 709 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 713 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_62914;
    ((intptr_t*)_2)[3] = _var_62916;
    ((intptr_t*)_2)[4] = _c_63053;
    ((intptr_t*)_2)[5] = 65;
    _31230 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 721 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31231 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 725 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_738_63068);
    _code_inlined_insert_code_at_738_63068 = _31230;
    _31230 = NOVALUE;
    // SubProg patch_forward_type_check pc: 728 op: ASSIGN (18)
    Ref(_31231);
    DeRef(_subprog_inlined_insert_code_at_741_63069);
    _subprog_inlined_insert_code_at_741_63069 = _31231;
    _31231 = NOVALUE;
    // SubProg patch_forward_type_check pc: 731 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 733 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_741_63069)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_741_63069)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_741_63069);
        _subprog_inlined_insert_code_at_741_63069 = _1;
    }
    // SubProg patch_forward_type_check pc: 735 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 737 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_741_63069;
    // SubProg patch_forward_type_check pc: 740 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 742 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_738_63068);
    _65insert_code(_code_inlined_insert_code_at_738_63068, _pc_62949);
    // SubProg patch_forward_type_check pc: 746 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 748 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 751 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 753 op: ELSE (23)
    goto L1A; // [753] 756
    // SubProg patch_forward_type_check pc: 755 op: NOP1 (159)
L1A: // addr: 756 pc: 755 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 756 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 738

// block var code_inlined_insert_code_at_738_63068
    DeRefi(_code_inlined_insert_code_at_738_63068);
    _code_inlined_insert_code_at_738_63068 = NOVALUE;

// block var subprog_inlined_insert_code_at_741_63069
    DeRef(_subprog_inlined_insert_code_at_741_63069);
    _subprog_inlined_insert_code_at_741_63069 = NOVALUE;
    // SubProg patch_forward_type_check pc: 758 op: STARTLINE (58)

    /** fwdref.e:661						pc += 4*/
    // SubProg patch_forward_type_check pc: 760 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 4;
    // SubProg patch_forward_type_check pc: 764 op: NOP1 (159)
L17: // addr: 765 pc: 764 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 765 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var start_pc_63033

// block var c_63053
    // SubProg patch_forward_type_check pc: 767 op: NOP1 (159)
L12: // addr: 768 pc: 767 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 768 op: NOP1 (159)
LF: // addr: 769 pc: 768 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 769 op: NOP1 (159)
LD: // addr: 770 pc: 769 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 770 op: NOP1 (159)
LA: // addr: 771 pc: 770 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 771 op: STARTLINE (58)

    /** fwdref.e:668		if (TRANSLATE or not with_type_check) and SymTab[which_type][S_NEXT] then*/
    // SubProg patch_forward_type_check pc: 773 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 775 op: SC1_OR (143)
    if (_34TRANSLATE_14813 != 0) {
        _31233 = 1;
        goto L1B; // [775] 786
    }
    // SubProg patch_forward_type_check pc: 779 op: NOT (7)
    _31234 = (_with_type_check_62951 == 0);
    // SubProg patch_forward_type_check pc: 782 op: SC2_OR (144)
    _31233 = (_31234 != 0);
    // SubProg patch_forward_type_check pc: 785 op: NOP1 (159)
L1B: // addr: 786 pc: 785 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 786 op: SC1_AND_IF (146)
    if (_31233 == 0) {
        goto L1C; // [786] 1013
    }
    // SubProg patch_forward_type_check pc: 790 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 792 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31236 = (object)*(((s1_ptr)_2)->base + _which_type_62914);
    // SubProg patch_forward_type_check pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 798 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31236);
    _31237 = (object)*(((s1_ptr)_2)->base + 2);
    _31236 = NOVALUE;
    // SubProg patch_forward_type_check pc: 802 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 803 op: IF (20)
    if (_31237 == 0) {
        _31237 = NOVALUE;
        goto L1C; // [803] 1013
    }
    else {
        if (!IS_ATOM_INT(_31237) && DBL_PTR(_31237)->dbl == 0.0){
            _31237 = NOVALUE;
            goto L1C; // [803] 1013
        }
        _31237 = NOVALUE;
    }
    _31237 = NOVALUE;
    // SubProg patch_forward_type_check pc: 806 op: STARTLINE (58)

    /** fwdref.e:669			integer start_pc = pc*/
    // SubProg patch_forward_type_check pc: 808 op: ASSIGN_I (113)
    _start_pc_63080 = _pc_62949;
    // SubProg patch_forward_type_check pc: 811 op: STARTLINE (58)

    /** fwdref.e:671			if which_type = sequence_type or*/
    // SubProg patch_forward_type_check pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 815 op: EQUALS (3)
    _31238 = (_which_type_62914 == _53sequence_type_46261);
    // SubProg patch_forward_type_check pc: 819 op: SC1_OR_IF (147)
    if (_31238 != 0) {
        goto L1D; // [819] 858
    }
    // SubProg patch_forward_type_check pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 827 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31240 = (object)*(((s1_ptr)_2)->base + _which_type_62914);
    // SubProg patch_forward_type_check pc: 831 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 833 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31240);
    _31241 = (object)*(((s1_ptr)_2)->base + 2);
    _31240 = NOVALUE;
    // SubProg patch_forward_type_check pc: 837 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_31241)){
        _31242 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31241)->dbl));
    }
    else{
        _31242 = (object)*(((s1_ptr)_2)->base + _31241);
    }
    // SubProg patch_forward_type_check pc: 841 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 843 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31242);
    _31243 = (object)*(((s1_ptr)_2)->base + 15);
    _31242 = NOVALUE;
    // SubProg patch_forward_type_check pc: 847 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 849 op: EQUALS (3)
    if (IS_ATOM_INT(_31243)) {
        _31244 = (_31243 == _53sequence_type_46261);
    }
    else {
        _31244 = binary_op(EQUALS, _31243, _53sequence_type_46261);
    }
    _31243 = NOVALUE;
    // SubProg patch_forward_type_check pc: 853 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 854 op: IF (20)
    if (_31244 == 0) {
        DeRef(_31244);
        _31244 = NOVALUE;
        goto L1E; // [854] 912
    }
    else {
        if (!IS_ATOM_INT(_31244) && DBL_PTR(_31244)->dbl == 0.0){
            DeRef(_31244);
            _31244 = NOVALUE;
            goto L1E; // [854] 912
        }
        DeRef(_31244);
        _31244 = NOVALUE;
    }
    DeRef(_31244);
    _31244 = NOVALUE;
    // SubProg patch_forward_type_check pc: 857 op: NOP1 (159)
L1D: // addr: 858 pc: 857 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 858 op: STARTLINE (58)

    /** fwdref.e:674				insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 860 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 862 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_62916;
    _31245 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 866 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31246 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 870 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_883_63099);
    _code_inlined_insert_code_at_883_63099 = _31245;
    _31245 = NOVALUE;
    // SubProg patch_forward_type_check pc: 873 op: ASSIGN (18)
    Ref(_31246);
    DeRef(_subprog_inlined_insert_code_at_886_63100);
    _subprog_inlined_insert_code_at_886_63100 = _31246;
    _31246 = NOVALUE;
    // SubProg patch_forward_type_check pc: 876 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 878 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_886_63100)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_886_63100)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_886_63100);
        _subprog_inlined_insert_code_at_886_63100 = _1;
    }
    // SubProg patch_forward_type_check pc: 880 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 882 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_886_63100;
    // SubProg patch_forward_type_check pc: 885 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 887 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_883_63099);
    _65insert_code(_code_inlined_insert_code_at_883_63099, _pc_62949);
    // SubProg patch_forward_type_check pc: 891 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 893 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 896 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 898 op: ELSE (23)
    goto L1F; // [898] 901
    // SubProg patch_forward_type_check pc: 900 op: NOP1 (159)
L1F: // addr: 901 pc: 900 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 901 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 883

// block var code_inlined_insert_code_at_883_63099
    DeRefi(_code_inlined_insert_code_at_883_63099);
    _code_inlined_insert_code_at_883_63099 = NOVALUE;

// block var subprog_inlined_insert_code_at_886_63100
    DeRef(_subprog_inlined_insert_code_at_886_63100);
    _subprog_inlined_insert_code_at_886_63100 = NOVALUE;
    // SubProg patch_forward_type_check pc: 903 op: STARTLINE (58)

    /** fwdref.e:675				pc += 2*/
    // SubProg patch_forward_type_check pc: 905 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 2;
    // SubProg patch_forward_type_check pc: 909 op: ELSE (23)
    goto L20; // [909] 1012
    // SubProg patch_forward_type_check pc: 911 op: NOP1 (159)
L1E: // addr: 912 pc: 911 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 912 op: STARTLINE (58)

    /** fwdref.e:677			elsif which_type = integer_type or*/
    // SubProg patch_forward_type_check pc: 914 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 916 op: EQUALS (3)
    _31248 = (_which_type_62914 == _53integer_type_46263);
    // SubProg patch_forward_type_check pc: 920 op: SC1_OR_IF (147)
    if (_31248 != 0) {
        goto L21; // [920] 959
    }
    // SubProg patch_forward_type_check pc: 924 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 926 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 928 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31250 = (object)*(((s1_ptr)_2)->base + _which_type_62914);
    // SubProg patch_forward_type_check pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 934 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31250);
    _31251 = (object)*(((s1_ptr)_2)->base + 2);
    _31250 = NOVALUE;
    // SubProg patch_forward_type_check pc: 938 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_31251)){
        _31252 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31251)->dbl));
    }
    else{
        _31252 = (object)*(((s1_ptr)_2)->base + _31251);
    }
    // SubProg patch_forward_type_check pc: 942 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 944 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31252);
    _31253 = (object)*(((s1_ptr)_2)->base + 15);
    _31252 = NOVALUE;
    // SubProg patch_forward_type_check pc: 948 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 950 op: EQUALS (3)
    if (IS_ATOM_INT(_31253)) {
        _31254 = (_31253 == _53integer_type_46263);
    }
    else {
        _31254 = binary_op(EQUALS, _31253, _53integer_type_46263);
    }
    _31253 = NOVALUE;
    // SubProg patch_forward_type_check pc: 954 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 955 op: IF (20)
    if (_31254 == 0) {
        DeRef(_31254);
        _31254 = NOVALUE;
        goto L22; // [955] 1011
    }
    else {
        if (!IS_ATOM_INT(_31254) && DBL_PTR(_31254)->dbl == 0.0){
            DeRef(_31254);
            _31254 = NOVALUE;
            goto L22; // [955] 1011
        }
        DeRef(_31254);
        _31254 = NOVALUE;
    }
    DeRef(_31254);
    _31254 = NOVALUE;
    // SubProg patch_forward_type_check pc: 958 op: NOP1 (159)
L21: // addr: 959 pc: 958 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 959 op: STARTLINE (58)

    /** fwdref.e:680				insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 961 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 963 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62916;
    _31255 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 967 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62911);
    _31256 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 971 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_984_63120);
    _code_inlined_insert_code_at_984_63120 = _31255;
    _31255 = NOVALUE;
    // SubProg patch_forward_type_check pc: 974 op: ASSIGN (18)
    Ref(_31256);
    DeRef(_subprog_inlined_insert_code_at_987_63121);
    _subprog_inlined_insert_code_at_987_63121 = _31256;
    _31256 = NOVALUE;
    // SubProg patch_forward_type_check pc: 977 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 979 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_987_63121)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_987_63121)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_987_63121);
        _subprog_inlined_insert_code_at_987_63121 = _1;
    }
    // SubProg patch_forward_type_check pc: 981 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 983 op: ASSIGN_I (113)
    _37shifting_sub_62151 = _subprog_inlined_insert_code_at_987_63121;
    // SubProg patch_forward_type_check pc: 986 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 988 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_984_63120);
    _65insert_code(_code_inlined_insert_code_at_984_63120, _pc_62949);
    // SubProg patch_forward_type_check pc: 992 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 994 op: ASSIGN_I (113)
    _37shifting_sub_62151 = 0;
    // SubProg patch_forward_type_check pc: 997 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 999 op: ELSE (23)
    goto L23; // [999] 1002
    // SubProg patch_forward_type_check pc: 1001 op: NOP1 (159)
L23: // addr: 1002 pc: 1001 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 1002 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 984

// block var code_inlined_insert_code_at_984_63120
    DeRefi(_code_inlined_insert_code_at_984_63120);
    _code_inlined_insert_code_at_984_63120 = NOVALUE;

// block var subprog_inlined_insert_code_at_987_63121
    DeRef(_subprog_inlined_insert_code_at_987_63121);
    _subprog_inlined_insert_code_at_987_63121 = NOVALUE;
    // SubProg patch_forward_type_check pc: 1004 op: STARTLINE (58)

    /** fwdref.e:681				pc += 4*/
    // SubProg patch_forward_type_check pc: 1006 op: PLUS_I (115)
    _pc_62949 = _pc_62949 + 4;
    // SubProg patch_forward_type_check pc: 1010 op: NOP1 (159)
L22: // addr: 1011 pc: 1010 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 1011 op: NOP1 (159)
L20: // addr: 1012 pc: 1011 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 1012 op: NOP1 (159)
L1C: // addr: 1013 pc: 1012 sub: 62906 op: 159
    // SubProg patch_forward_type_check pc: 1013 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var start_pc_63080
    // SubProg patch_forward_type_check pc: 1015 op: STARTLINE (58)

    /** fwdref.e:686		resolved_reference( ref )*/
    // SubProg patch_forward_type_check pc: 1017 op: PROC (27)
    _37resolved_reference(_ref_62910);
    // SubProg patch_forward_type_check pc: 1020 op: STARTLINE (58)

    /** fwdref.e:687		reset_code()*/
    // SubProg patch_forward_type_check pc: 1022 op: PROC (27)
    _37reset_code();
    // SubProg patch_forward_type_check pc: 1024 op: STARTLINE (58)

    /** fwdref.e:688	end procedure*/
    // SubProg patch_forward_type_check pc: 1026 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_type_check

// block var tok_62909
    DeRef(_tok_62909);

// block var ref_62910

// block var fr_62911
    DeRef(_fr_62911);

// block var which_type_62914

// block var var_62916

// block var pc_62949

// block var with_type_check_62951
    _31217 = NOVALUE;
    _31241 = NOVALUE;
    DeRef(_31189);
    _31189 = NOVALUE;
    DeRef(_31248);
    _31248 = NOVALUE;
    _31251 = NOVALUE;
    DeRef(_31234);
    _31234 = NOVALUE;
    _31225 = NOVALUE;
    DeRef(_31184);
    _31184 = NOVALUE;
    _31171 = NOVALUE;
    DeRef(_31238);
    _31238 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 1029 op: BADRETURNF (43)
    ;
}


void _37prep_forward_error(object _ref_63125)
{
// skipping _31265  name type: 0
    object _31264 = NOVALUE; // 63136 31264
// skipping _31263  name type: 0
    object _31262 = NOVALUE; // 63133 31262
// skipping _31261  name type: 0
    object _31260 = NOVALUE; // 63130 31260
// skipping _31259  name type: 0
    object _31258 = NOVALUE; // 63127 31258
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg prep_forward_error pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_63125)) {
        _1 = (object)(DBL_PTR(_ref_63125)->dbl);
        DeRefDS(_ref_63125);
        _ref_63125 = _1;
    }
    // SubProg prep_forward_error pc: 3 op: STARTLINE (58)

    /** fwdref.e:691		ThisLine = forward_references[ref][FR_THISLINE]*/
    // SubProg prep_forward_error pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _31258 = (object)*(((s1_ptr)_2)->base + _ref_63125);
    // SubProg prep_forward_error pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_49ThisLine_48709);
    _2 = (object)SEQ_PTR(_31258);
    _49ThisLine_48709 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_49ThisLine_48709);
    _31258 = NOVALUE;
    // SubProg prep_forward_error pc: 15 op: STARTLINE (58)

    /** fwdref.e:692		bp = forward_references[ref][FR_BP]*/
    // SubProg prep_forward_error pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _31260 = (object)*(((s1_ptr)_2)->base + _ref_63125);
    // SubProg prep_forward_error pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31260);
    _49bp_48713 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_49bp_48713)){
        _49bp_48713 = (object)DBL_PTR(_49bp_48713)->dbl;
    }
    _31260 = NOVALUE;
    // SubProg prep_forward_error pc: 29 op: STARTLINE (58)

    /** fwdref.e:693		line_number = forward_references[ref][FR_LINE]*/
    // SubProg prep_forward_error pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 33 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _31262 = (object)*(((s1_ptr)_2)->base + _ref_63125);
    // SubProg prep_forward_error pc: 37 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31262);
    _34line_number_15189 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_34line_number_15189)){
        _34line_number_15189 = (object)DBL_PTR(_34line_number_15189)->dbl;
    }
    _31262 = NOVALUE;
    // SubProg prep_forward_error pc: 43 op: STARTLINE (58)

    /** fwdref.e:694		current_file_no = forward_references[ref][FR_FILE]*/
    // SubProg prep_forward_error pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _31264 = (object)*(((s1_ptr)_2)->base + _ref_63125);
    // SubProg prep_forward_error pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31264);
    _34current_file_no_15188 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_34current_file_no_15188)){
        _34current_file_no_15188 = (object)DBL_PTR(_34current_file_no_15188)->dbl;
    }
    _31264 = NOVALUE;
    // SubProg prep_forward_error pc: 57 op: STARTLINE (58)

    /** fwdref.e:695	end procedure*/
    // SubProg prep_forward_error pc: 59 op: RETURNP (29)

// Exiting block BLOCK: prep_forward_error

// block var ref_63125
    return;
    // SubProg prep_forward_error pc: 62 op: BADRETURNF (43)
    ;
}


void _37forward_error(object _tok_63141, object _ref_63142)
{
    object _31272 = NOVALUE; // 63151 31272
    object _31271 = NOVALUE; // 63150 31271
    object _31270 = NOVALUE; // 63149 31270
    object _31269 = NOVALUE; // 63147 31269
    object _31268 = NOVALUE; // 63146 31268
    object _31267 = NOVALUE; // 63145 31267
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg forward_error pc: 1 op: INTEGER_CHECK (96)
    // SubProg forward_error pc: 3 op: STARTLINE (58)

    /** fwdref.e:698		prep_forward_error( ref )*/
    // SubProg forward_error pc: 5 op: PROC (27)
    _37prep_forward_error(_ref_63142);
    // SubProg forward_error pc: 8 op: STARTLINE (58)

    /** fwdref.e:699		CompileErr(68, { expected_name( forward_references[ref][FR_TYPE] ),*/
    // SubProg forward_error pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg forward_error pc: 12 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _31267 = (object)*(((s1_ptr)_2)->base + _ref_63142);
    // SubProg forward_error pc: 16 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31267);
    _31268 = (object)*(((s1_ptr)_2)->base + 1);
    _31267 = NOVALUE;
    // SubProg forward_error pc: 20 op: PROC (27)
    Ref(_31268);
    _31269 = _37expected_name(_31268);
    _31268 = NOVALUE;
    // SubProg forward_error pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg forward_error pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63141);
    _31270 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg forward_error pc: 30 op: PROC (27)
    Ref(_31270);
    _31271 = _37expected_name(_31270);
    _31270 = NOVALUE;
    // SubProg forward_error pc: 34 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _31269;
    ((intptr_t *)_2)[2] = _31271;
    _31272 = MAKE_SEQ(_1);
    _31271 = NOVALUE;
    _31269 = NOVALUE;
    // SubProg forward_error pc: 38 op: PROC (27)
    _49CompileErr(68, _31272, 0);
    _31272 = NOVALUE;
    // SubProg forward_error pc: 43 op: STARTLINE (58)

    /** fwdref.e:701	end procedure*/
    // SubProg forward_error pc: 45 op: RETURNP (29)

// Exiting block BLOCK: forward_error

// block var tok_63141
    DeRef(_tok_63141);

// block var ref_63142
    return;
    // SubProg forward_error pc: 48 op: BADRETURNF (43)
    ;
}


object _37find_reference(object _fr_63154)
{
    object _name_63155 = NOVALUE;
    object _file_63157 = NOVALUE;
    object _ns_file_63159 = NOVALUE;
    object _ix_63160 = NOVALUE;
    object _ns_63164 = NOVALUE;
    object _ns_tok_63168 = NOVALUE;
    object _tok_63180 = NOVALUE;
// skipping _31285  name type: 0
    object _31284 = NOVALUE; // 63182 31284
// skipping _31283  name type: 0
// skipping _31282  name type: 0
    object _31281 = NOVALUE; // 63174 31281
// skipping _31280  name type: 0
    object _31279 = NOVALUE; // 63170 31279
// skipping _31278  name type: 0
    object _31277 = NOVALUE; // 63165 31277
// skipping _31276  name type: 0
// skipping _31274  name type: 0
// skipping _31273  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_reference pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_reference pc: 3 op: STARTLINE (58)

    /** fwdref.e:706		sequence name = fr[FR_NAME]*/
    // SubProg find_reference pc: 5 op: RHS_SUBS (25)
    DeRef(_name_63155);
    _2 = (object)SEQ_PTR(_fr_63154);
    _name_63155 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_63155);
    // SubProg find_reference pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg find_reference pc: 11 op: STARTLINE (58)

    /** fwdref.e:707		integer file  = fr[FR_FILE]*/
    // SubProg find_reference pc: 13 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63154);
    _file_63157 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_63157))
    _file_63157 = (object)DBL_PTR(_file_63157)->dbl;
    // SubProg find_reference pc: 17 op: STARTLINE (58)

    /** fwdref.e:709		integer ns_file = -1*/
    // SubProg find_reference pc: 19 op: ASSIGN_I (113)
    _ns_file_63159 = -1;
    // SubProg find_reference pc: 22 op: STARTLINE (58)

    /** fwdref.e:710		integer ix = find( ':', name )*/
    // SubProg find_reference pc: 24 op: FIND_FROM (176)
    _ix_63160 = find_from(58, _name_63155, 1);
    // SubProg find_reference pc: 29 op: STARTLINE (58)

    /** fwdref.e:711		if ix then*/
    // SubProg find_reference pc: 31 op: IF (20)
    if (_ix_63160 == 0)
    {
        goto L1; // [31] 85
    }
    else{
    }
    // SubProg find_reference pc: 34 op: STARTLINE (58)

    /** fwdref.e:712			sequence ns = name[1..ix-1]*/
    // SubProg find_reference pc: 36 op: MINUS (10)
    _31277 = _ix_63160 - 1;
    // SubProg find_reference pc: 40 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_ns_63164;
    RHS_Slice(_name_63155, 1, _31277);
    // SubProg find_reference pc: 45 op: STARTLINE (58)

    /** fwdref.e:713			token ns_tok = keyfind( ns, ns_file, file, 1, fr[FR_HASHVAL] )*/
    // SubProg find_reference pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63154);
    _31279 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg find_reference pc: 51 op: PROC (27)
    RefDS(_ns_63164);
    Ref(_31279);
    _0 = _ns_tok_63168;
    _ns_tok_63168 = _53keyfind(_ns_63164, -1, _file_63157, 1, _31279);
    DeRef(_0);
    _31279 = NOVALUE;
    // SubProg find_reference pc: 59 op: STARTLINE (58)

    /** fwdref.e:714			if ns_tok[T_ID] != NAMESPACE then*/
    // SubProg find_reference pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_reference pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ns_tok_63168);
    _31281 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_reference pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_reference pc: 69 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _31281, 523)){
        _31281 = NOVALUE;
        goto L2; // [69] 80
    }
    _31281 = NOVALUE;
    // SubProg find_reference pc: 73 op: STARTLINE (58)

    /** fwdref.e:715				return ns_tok*/
    // SubProg find_reference pc: 75 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ns_63164
    DeRefDS(_ns_63164);

// Exiting block BLOCK: find_reference

// block var fr_63154
    DeRefDS(_fr_63154);

// block var name_63155
    DeRefDS(_name_63155);

// block var file_63157

// block var ns_file_63159

// block var ix_63160

// block var tok_63180
    DeRef(_tok_63180);
    _31277 = NOVALUE;
    return _ns_tok_63168;
    // SubProg find_reference pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 63152 op: 159
    // SubProg find_reference pc: 80 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ns_63164
    DeRef(_ns_63164);
    _ns_63164 = NOVALUE;

// block var ns_tok_63168
    DeRef(_ns_tok_63168);
    _ns_tok_63168 = NOVALUE;
    // SubProg find_reference pc: 82 op: ELSE (23)
    goto L3; // [82] 92
    // SubProg find_reference pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 63152 op: 159
    // SubProg find_reference pc: 85 op: STARTLINE (58)

    /** fwdref.e:718			ns_file = fr[FR_QUALIFIED]*/
    // SubProg find_reference pc: 87 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63154);
    _ns_file_63159 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_ns_file_63159))
    _ns_file_63159 = (object)DBL_PTR(_ns_file_63159)->dbl;
    // SubProg find_reference pc: 91 op: NOP1 (159)
L3: // addr: 92 pc: 91 sub: 63152 op: 159
    // SubProg find_reference pc: 92 op: STARTLINE (58)

    /** fwdref.e:721		No_new_entry = 1*/
    // SubProg find_reference pc: 94 op: ASSIGN (18)
    _53No_new_entry_47454 = 1;
    // SubProg find_reference pc: 97 op: INTEGER_CHECK (96)
    // SubProg find_reference pc: 99 op: STARTLINE (58)

    /** fwdref.e:722		object tok = keyfind( name, ns_file, file, , fr[FR_HASHVAL] )*/
    // SubProg find_reference pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63154);
    _31284 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg find_reference pc: 105 op: PROC (27)
    RefDS(_name_63155);
    Ref(_31284);
    _0 = _tok_63180;
    _tok_63180 = _53keyfind(_name_63155, _ns_file_63159, _file_63157, 0, _31284);
    DeRef(_0);
    _31284 = NOVALUE;
    // SubProg find_reference pc: 113 op: STARTLINE (58)

    /** fwdref.e:723		No_new_entry = 0*/
    // SubProg find_reference pc: 115 op: ASSIGN (18)
    _53No_new_entry_47454 = 0;
    // SubProg find_reference pc: 118 op: INTEGER_CHECK (96)
    // SubProg find_reference pc: 120 op: STARTLINE (58)

    /** fwdref.e:724		return tok*/
    // SubProg find_reference pc: 122 op: RETURNF (28)

// Exiting block BLOCK: find_reference

// block var fr_63154
    DeRefDS(_fr_63154);

// block var name_63155
    DeRefDS(_name_63155);

// block var file_63157

// block var ns_file_63159

// block var ix_63160
    DeRef(_31277);
    _31277 = NOVALUE;
    return _tok_63180;
    // SubProg find_reference pc: 126 op: BADRETURNF (43)
    ;
}


void _37register_forward_type(object _sym_63188, object _ref_63189)
{
    object _31291 = NOVALUE; // 63196 31291
    object _31290 = NOVALUE; // 63195 31290
// skipping _31289  name type: 0
    object _31288 = NOVALUE; // 63193 31288
// skipping _31287  name type: 0
// skipping _31286  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg register_forward_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg register_forward_type pc: 3 op: INTEGER_CHECK (96)
    // SubProg register_forward_type pc: 5 op: STARTLINE (58)

    /** fwdref.e:729		if ref < 0 then*/
    // SubProg register_forward_type pc: 7 op: LESS_IFW_I (119)
    if (_ref_63189 >= 0)
    goto L1; // [7] 19
    // SubProg register_forward_type pc: 11 op: STARTLINE (58)

    /** fwdref.e:730			ref = -ref*/
    // SubProg register_forward_type pc: 13 op: UMINUS (12)
    _ref_63189 = - _ref_63189;
    // SubProg register_forward_type pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 63185 op: 159
    // SubProg register_forward_type pc: 19 op: STARTLINE (58)

    /** fwdref.e:732		forward_references[ref][FR_DATA] &= sym*/
    // SubProg register_forward_type pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg register_forward_type pc: 23 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63189 + ((s1_ptr)_2)->base);
    // SubProg register_forward_type pc: 28 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31290 = (object)*(((s1_ptr)_2)->base + 12);
    _31288 = NOVALUE;
    // SubProg register_forward_type pc: 32 op: CONCAT (15)
    if (IS_SEQUENCE(_31290) && IS_ATOM(_sym_63188)) {
        Append(&_31291, _31290, _sym_63188);
    }
    else if (IS_ATOM(_31290) && IS_SEQUENCE(_sym_63188)) {
    }
    else {
        Concat((object_ptr)&_31291, _31290, _sym_63188);
        _31290 = NOVALUE;
    }
    _31290 = NOVALUE;
    // SubProg register_forward_type pc: 36 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31291;
    if( _1 != _31291 ){
        DeRef(_1);
    }
    _31291 = NOVALUE;
    _31288 = NOVALUE;
    // SubProg register_forward_type pc: 40 op: STARTLINE (58)

    /** fwdref.e:733	end procedure*/
    // SubProg register_forward_type pc: 42 op: RETURNP (29)

// Exiting block BLOCK: register_forward_type

// block var sym_63188

// block var ref_63189
    return;
    // SubProg register_forward_type pc: 45 op: BADRETURNF (43)
    ;
}


object _37new_forward_reference(object _fwd_op_63219, object _sym_63221, object _op_63222)
{
    object _ref_63223 = NOVALUE;
    object _len_63224 = NOVALUE;
    object _hashval_63254 = NOVALUE;
    object _default_sym_63329 = NOVALUE;
    object _param_63332 = NOVALUE;
    object _set_data_2__tmp_at578_63349 = NOVALUE;
    object _set_data_1__tmp_at578_63348 = NOVALUE;
    object _data_inlined_set_data_at_575_63347 = NOVALUE;
// skipping _31378  name type: 0
    object _31377 = NOVALUE; // 63345 31377
    object _31376 = NOVALUE; // 63344 31376
    object _31375 = NOVALUE; // 63343 31375
// skipping _31374  name type: 0
// skipping _31373  name type: 0
    object _31372 = NOVALUE; // 63336 31372
// skipping _31371  name type: 0
    object _31370 = NOVALUE; // 63321 31370
    object _31369 = NOVALUE; // 63320 31369
// skipping _31368  name type: 0
    object _31367 = NOVALUE; // 63317 31367
    object _31366 = NOVALUE; // 63316 31366
    object _31365 = NOVALUE; // 63315 31365
// skipping _31364  name type: 0
    object _31363 = NOVALUE; // 63311 31363
// skipping _31362  name type: 0
    object _31361 = NOVALUE; // 63305 31361
// skipping _31360  name type: 0
    object _31359 = NOVALUE; // 63303 31359
// skipping _31358  name type: 0
// skipping _31357  name type: 0
    object _31356 = NOVALUE; // 63298 31356
    object _31355 = NOVALUE; // 63297 31355
// skipping _31354  name type: 0
    object _31353 = NOVALUE; // 63294 31353
// skipping _31352  name type: 0
    object _31351 = NOVALUE; // 63291 31351
// skipping _31350  name type: 0
    object _31349 = NOVALUE; // 63288 31349
// skipping _31348  name type: 0
    object _31347 = NOVALUE; // 63285 31347
    object _31346 = NOVALUE; // 63284 31346
    object _31345 = NOVALUE; // 63283 31345
// skipping _31344  name type: 0
    object _31343 = NOVALUE; // 63280 31343
// skipping _31342  name type: 0
// skipping _31341  name type: 0
    object _31340 = NOVALUE; // 63274 31340
// skipping _31339  name type: 0
    object _31338 = NOVALUE; // 63271 31338
// skipping _31337  name type: 0
    object _31336 = NOVALUE; // 63268 31336
    object _31335 = NOVALUE; // 63266 31335
    object _31334 = NOVALUE; // 63265 31334
    object _31333 = NOVALUE; // 63264 31333
// skipping _31332  name type: 0
    object _31331 = NOVALUE; // 63261 31331
// skipping _31330  name type: 0
// skipping _31329  name type: 0
    object _31328 = NOVALUE; // 63256 31328
    object _31327 = NOVALUE; // 63253 31327
    object _31326 = NOVALUE; // 63251 31326
// skipping _31325  name type: 0
    object _31324 = NOVALUE; // 63248 31324
    object _31323 = NOVALUE; // 63246 31323
    object _31322 = NOVALUE; // 63245 31322
    object _31321 = NOVALUE; // 63244 31321
// skipping _31320  name type: 0
    object _31319 = NOVALUE; // 63242 31319
    object _31318 = NOVALUE; // 63241 31318
    object _31317 = NOVALUE; // 63240 31317
    object _31316 = NOVALUE; // 63239 31316
// skipping _31315  name type: 0
    object _31314 = NOVALUE; // 63237 31314
// skipping _31313  name type: 0
// skipping _31312  name type: 0
    object _31311 = NOVALUE; // 63233 31311
    object _31310 = NOVALUE; // 63232 31310
// skipping _31309  name type: 0
// skipping _31308  name type: 0
// skipping _31307  name type: 0
// skipping _31306  name type: 0
// skipping _31305  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg new_forward_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_63221)) {
        _1 = (object)(DBL_PTR(_sym_63221)->dbl);
        DeRefDS(_sym_63221);
        _sym_63221 = _1;
    }
    // SubProg new_forward_reference pc: 5 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 7 op: STARTLINE (58)

    /** fwdref.e:754			len = length( inactive_references )*/
    // SubProg new_forward_reference pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_37inactive_references_62126)){
            _len_63224 = SEQ_PTR(_37inactive_references_62126)->length;
    }
    else {
        _len_63224 = 1;
    }
    // SubProg new_forward_reference pc: 14 op: STARTLINE (58)

    /** fwdref.e:757		if len then*/
    // SubProg new_forward_reference pc: 16 op: IF (20)
    if (_len_63224 == 0)
    {
        goto L1; // [16] 39
    }
    else{
    }
    // SubProg new_forward_reference pc: 19 op: STARTLINE (58)

    /** fwdref.e:758			ref = inactive_references[len]*/
    // SubProg new_forward_reference pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 23 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_37inactive_references_62126);
    _ref_63223 = (object)*(((s1_ptr)_2)->base + _len_63224);
    if (!IS_ATOM_INT(_ref_63223))
    _ref_63223 = (object)DBL_PTR(_ref_63223)->dbl;
    // SubProg new_forward_reference pc: 27 op: STARTLINE (58)

    /** fwdref.e:759			inactive_references = remove( inactive_references, len, len )*/
    // SubProg new_forward_reference pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 31 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_37inactive_references_62126);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_len_63224)) ? _len_63224 : (object)(DBL_PTR(_len_63224)->dbl);
        int stop = (IS_ATOM_INT(_len_63224)) ? _len_63224 : (object)(DBL_PTR(_len_63224)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_37inactive_references_62126), start, &_37inactive_references_62126 );
            }
            else Tail(SEQ_PTR(_37inactive_references_62126), stop+1, &_37inactive_references_62126);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_37inactive_references_62126), start, &_37inactive_references_62126);
        }
        else {
            assign_slice_seq = &assign_space;
            _37inactive_references_62126 = Remove_elements(start, stop, (SEQ_PTR(_37inactive_references_62126)->ref == 1));
        }
    }
    // SubProg new_forward_reference pc: 36 op: ELSE (23)
    goto L2; // [36] 55
    // SubProg new_forward_reference pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 39 op: STARTLINE (58)

    /** fwdref.e:761			forward_references &= 0*/
    // SubProg new_forward_reference pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 43 op: CONCAT (15)
    Append(&_37forward_references_62122, _37forward_references_62122, 0);
    // SubProg new_forward_reference pc: 47 op: STARTLINE (58)

    /** fwdref.e:762			ref = length( forward_references )*/
    // SubProg new_forward_reference pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 51 op: LENGTH (42)
    if (IS_SEQUENCE(_37forward_references_62122)){
            _ref_63223 = SEQ_PTR(_37forward_references_62122)->length;
    }
    else {
        _ref_63223 = 1;
    }
    // SubProg new_forward_reference pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 55 op: STARTLINE (58)

    /** fwdref.e:764		forward_references[ref] = repeat( 0, FR_SIZE )*/
    // SubProg new_forward_reference pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 59 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_forward_reference pc: 61 op: REPEAT (32)
    _31310 = Repeat(0, 12);
    // SubProg new_forward_reference pc: 65 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_63223);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31310;
    if( _1 != _31310 ){
        DeRef(_1);
    }
    _31310 = NOVALUE;
    // SubProg new_forward_reference pc: 69 op: STARTLINE (58)

    /** fwdref.e:766		forward_references[ref][FR_TYPE]      = fwd_op*/
    // SubProg new_forward_reference pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 73 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 78 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _fwd_op_63219;
    DeRef(_1);
    _31311 = NOVALUE;
    // SubProg new_forward_reference pc: 82 op: STARTLINE (58)

    /** fwdref.e:767		if sym < 0 then*/
    // SubProg new_forward_reference pc: 84 op: LESS_IFW (102)
    if (_sym_63221 >= 0)
    goto L3; // [84] 143
    // SubProg new_forward_reference pc: 88 op: STARTLINE (58)

    /** fwdref.e:768			forward_references[ref][FR_NAME] = forward_references[-sym][FR_NAME]*/
    // SubProg new_forward_reference pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 92 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 99 op: UMINUS (12)
    if ((uintptr_t)_sym_63221 == (uintptr_t)HIGH_BITS){
        _31316 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31316 = - _sym_63221;
    }
    // SubProg new_forward_reference pc: 102 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!IS_ATOM_INT(_31316)){
        _31317 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31316)->dbl));
    }
    else{
        _31317 = (object)*(((s1_ptr)_2)->base + _31316);
    }
    // SubProg new_forward_reference pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31317);
    _31318 = (object)*(((s1_ptr)_2)->base + 2);
    _31317 = NOVALUE;
    // SubProg new_forward_reference pc: 110 op: PASSIGN_SUBS (162)
    Ref(_31318);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31318;
    if( _1 != _31318 ){
        DeRef(_1);
    }
    _31318 = NOVALUE;
    _31314 = NOVALUE;
    // SubProg new_forward_reference pc: 114 op: STARTLINE (58)

    /** fwdref.e:769			forward_references[ref][FR_HASHVAL] = forward_references[-sym][FR_HASHVAL]*/
    // SubProg new_forward_reference pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 118 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 125 op: UMINUS (12)
    if ((uintptr_t)_sym_63221 == (uintptr_t)HIGH_BITS){
        _31321 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31321 = - _sym_63221;
    }
    // SubProg new_forward_reference pc: 128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!IS_ATOM_INT(_31321)){
        _31322 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31321)->dbl));
    }
    else{
        _31322 = (object)*(((s1_ptr)_2)->base + _31321);
    }
    // SubProg new_forward_reference pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31322);
    _31323 = (object)*(((s1_ptr)_2)->base + 11);
    _31322 = NOVALUE;
    // SubProg new_forward_reference pc: 136 op: PASSIGN_SUBS (162)
    Ref(_31323);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31323;
    if( _1 != _31323 ){
        DeRef(_1);
    }
    _31323 = NOVALUE;
    _31319 = NOVALUE;
    // SubProg new_forward_reference pc: 140 op: ELSE (23)
    goto L4; // [140] 242
    // SubProg new_forward_reference pc: 142 op: NOP1 (159)
L3: // addr: 143 pc: 142 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 143 op: STARTLINE (58)

    /** fwdref.e:771			forward_references[ref][FR_NAME] = SymTab[sym][S_NAME]*/
    // SubProg new_forward_reference pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 147 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31326 = (object)*(((s1_ptr)_2)->base + _sym_63221);
    // SubProg new_forward_reference pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 160 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31326);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _31327 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _31327 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _31326 = NOVALUE;
    // SubProg new_forward_reference pc: 164 op: PASSIGN_SUBS (162)
    Ref(_31327);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31327;
    if( _1 != _31327 ){
        DeRef(_1);
    }
    _31327 = NOVALUE;
    _31324 = NOVALUE;
    // SubProg new_forward_reference pc: 168 op: STARTLINE (58)

    /** fwdref.e:772			integer hashval = SymTab[sym][S_HASHVAL]*/
    // SubProg new_forward_reference pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 172 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31328 = (object)*(((s1_ptr)_2)->base + _sym_63221);
    // SubProg new_forward_reference pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 178 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31328);
    _hashval_63254 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hashval_63254)){
        _hashval_63254 = (object)DBL_PTR(_hashval_63254)->dbl;
    }
    _31328 = NOVALUE;
    // SubProg new_forward_reference pc: 184 op: STARTLINE (58)

    /** fwdref.e:773			if 0 = hashval then*/
    // SubProg new_forward_reference pc: 186 op: EQUALS_IFW_I (121)
    if (0 != _hashval_63254)
    goto L5; // [186] 220
    // SubProg new_forward_reference pc: 190 op: STARTLINE (58)

    /** fwdref.e:774				forward_references[ref][FR_HASHVAL] = hashfn( forward_references[ref][FR_NAME] )*/
    // SubProg new_forward_reference pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 194 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 201 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    _31333 = (object)*(((s1_ptr)_2)->base + _ref_63223);
    // SubProg new_forward_reference pc: 205 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31333);
    _31334 = (object)*(((s1_ptr)_2)->base + 2);
    _31333 = NOVALUE;
    // SubProg new_forward_reference pc: 209 op: PROC (27)
    Ref(_31334);
    _31335 = _53hashfn(_31334);
    _31334 = NOVALUE;
    // SubProg new_forward_reference pc: 213 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31335;
    if( _1 != _31335 ){
        DeRef(_1);
    }
    _31335 = NOVALUE;
    _31331 = NOVALUE;
    // SubProg new_forward_reference pc: 217 op: ELSE (23)
    goto L6; // [217] 239
    // SubProg new_forward_reference pc: 219 op: NOP1 (159)
L5: // addr: 220 pc: 219 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 220 op: STARTLINE (58)

    /** fwdref.e:776				forward_references[ref][FR_HASHVAL] = hashval*/
    // SubProg new_forward_reference pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 224 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 229 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_63254;
    DeRef(_1);
    _31336 = NOVALUE;
    // SubProg new_forward_reference pc: 233 op: STARTLINE (58)

    /** fwdref.e:777				remove_symbol( sym )*/
    // SubProg new_forward_reference pc: 235 op: PROC (27)
    _53remove_symbol(_sym_63221);
    // SubProg new_forward_reference pc: 238 op: NOP1 (159)
L6: // addr: 239 pc: 238 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 239 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hashval_63254
    // SubProg new_forward_reference pc: 241 op: NOP1 (159)
L4: // addr: 242 pc: 241 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 242 op: STARTLINE (58)

    /** fwdref.e:782		forward_references[ref][FR_FILE]      = current_file_no*/
    // SubProg new_forward_reference pc: 244 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 246 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 253 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34current_file_no_15188;
    DeRef(_1);
    _31338 = NOVALUE;
    // SubProg new_forward_reference pc: 257 op: STARTLINE (58)

    /** fwdref.e:783		forward_references[ref][FR_SUBPROG]   = CurrentSub*/
    // SubProg new_forward_reference pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 261 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 268 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34CurrentSub_15196;
    DeRef(_1);
    _31340 = NOVALUE;
    // SubProg new_forward_reference pc: 272 op: STARTLINE (58)

    /** fwdref.e:785		if fwd_op != TYPE then*/
    // SubProg new_forward_reference pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 276 op: NOTEQ_IFW (105)
    if (_fwd_op_63219 == 504)
    goto L7; // [276] 303
    // SubProg new_forward_reference pc: 280 op: STARTLINE (58)

    /** fwdref.e:786			forward_references[ref][FR_PC]        = length( Code ) + 1*/
    // SubProg new_forward_reference pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 284 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 291 op: LENGTH (42)
    if (IS_SEQUENCE(_34Code_15276)){
            _31345 = SEQ_PTR(_34Code_15276)->length;
    }
    else {
        _31345 = 1;
    }
    // SubProg new_forward_reference pc: 294 op: PLUS1 (93)
    _31346 = _31345 + 1;
    _31345 = NOVALUE;
    // SubProg new_forward_reference pc: 298 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31346;
    if( _1 != _31346 ){
        DeRef(_1);
    }
    _31346 = NOVALUE;
    _31343 = NOVALUE;
    // SubProg new_forward_reference pc: 302 op: NOP1 (159)
L7: // addr: 303 pc: 302 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 303 op: STARTLINE (58)

    /** fwdref.e:789		forward_references[ref][FR_LINE]      = fwd_line_number*/
    // SubProg new_forward_reference pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 307 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 314 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34fwd_line_number_15190;
    DeRef(_1);
    _31347 = NOVALUE;
    // SubProg new_forward_reference pc: 318 op: STARTLINE (58)

    /** fwdref.e:790		forward_references[ref][FR_THISLINE]  = ForwardLine*/
    // SubProg new_forward_reference pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 322 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 329 op: PASSIGN_SUBS (162)
    Ref(_49ForwardLine_48710);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _49ForwardLine_48710;
    DeRef(_1);
    _31349 = NOVALUE;
    // SubProg new_forward_reference pc: 333 op: STARTLINE (58)

    /** fwdref.e:791		forward_references[ref][FR_BP]        = forward_bp*/
    // SubProg new_forward_reference pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 337 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 342 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 344 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _49forward_bp_48714;
    DeRef(_1);
    _31351 = NOVALUE;
    // SubProg new_forward_reference pc: 348 op: STARTLINE (58)

    /** fwdref.e:792		forward_references[ref][FR_QUALIFIED] = get_qualified_fwd()*/
    // SubProg new_forward_reference pc: 350 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 352 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 357 op: PROC (27)
    _31355 = _61get_qualified_fwd();
    // SubProg new_forward_reference pc: 360 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31355;
    if( _1 != _31355 ){
        DeRef(_1);
    }
    _31355 = NOVALUE;
    _31353 = NOVALUE;
    // SubProg new_forward_reference pc: 364 op: STARTLINE (58)

    /** fwdref.e:793		forward_references[ref][FR_OP]        = op*/
    // SubProg new_forward_reference pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 368 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 373 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _op_63222;
    DeRef(_1);
    _31356 = NOVALUE;
    // SubProg new_forward_reference pc: 377 op: STARTLINE (58)

    /** fwdref.e:795		if op = GOTO then*/
    // SubProg new_forward_reference pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 381 op: EQUALS_IFW (104)
    if (_op_63222 != 188)
    goto L8; // [381] 403
    // SubProg new_forward_reference pc: 385 op: STARTLINE (58)

    /** fwdref.e:796			forward_references[ref][FR_DATA] = { sym }*/
    // SubProg new_forward_reference pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 389 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 394 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _sym_63221;
    _31361 = MAKE_SEQ(_1);
    // SubProg new_forward_reference pc: 398 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31361;
    if( _1 != _31361 ){
        DeRef(_1);
    }
    _31361 = NOVALUE;
    _31359 = NOVALUE;
    // SubProg new_forward_reference pc: 402 op: NOP1 (159)
L8: // addr: 403 pc: 402 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 403 op: STARTLINE (58)

    /** fwdref.e:803		if CurrentSub = TopLevelSub then*/
    // SubProg new_forward_reference pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 407 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 409 op: EQUALS_IFW (104)
    if (_34CurrentSub_15196 != _34TopLevelSub_15195)
    goto L9; // [409] 471
    // SubProg new_forward_reference pc: 413 op: STARTLINE (58)

    /** fwdref.e:804			if length( toplevel_references ) < current_file_no then*/
    // SubProg new_forward_reference pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 417 op: LENGTH (42)
    if (IS_SEQUENCE(_37toplevel_references_62125)){
            _31363 = SEQ_PTR(_37toplevel_references_62125)->length;
    }
    else {
        _31363 = 1;
    }
    // SubProg new_forward_reference pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 422 op: LESS_IFW (102)
    if (_31363 >= _34current_file_no_15188)
    goto LA; // [422] 450
    // SubProg new_forward_reference pc: 426 op: STARTLINE (58)

    /** fwdref.e:805				toplevel_references &= repeat( {}, current_file_no - length( toplevel_references ) )*/
    // SubProg new_forward_reference pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 434 op: LENGTH (42)
    if (IS_SEQUENCE(_37toplevel_references_62125)){
            _31365 = SEQ_PTR(_37toplevel_references_62125)->length;
    }
    else {
        _31365 = 1;
    }
    // SubProg new_forward_reference pc: 437 op: MINUS (10)
    _31366 = _34current_file_no_15188 - _31365;
    _31365 = NOVALUE;
    // SubProg new_forward_reference pc: 441 op: REPEAT (32)
    _31367 = Repeat(_21936, _31366);
    _31366 = NOVALUE;
    // SubProg new_forward_reference pc: 445 op: CONCAT (15)
    Concat((object_ptr)&_37toplevel_references_62125, _37toplevel_references_62125, _31367);
    DeRefDS(_31367);
    _31367 = NOVALUE;
    // SubProg new_forward_reference pc: 449 op: NOP1 (159)
LA: // addr: 450 pc: 449 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 450 op: STARTLINE (58)

    /** fwdref.e:807			toplevel_references[current_file_no] &= ref*/
    // SubProg new_forward_reference pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 456 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    _31369 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg new_forward_reference pc: 460 op: CONCAT (15)
    if (IS_SEQUENCE(_31369) && IS_ATOM(_ref_63223)) {
        Append(&_31370, _31369, _ref_63223);
    }
    else if (IS_ATOM(_31369) && IS_SEQUENCE(_ref_63223)) {
    }
    else {
        Concat((object_ptr)&_31370, _31369, _ref_63223);
        _31369 = NOVALUE;
    }
    _31369 = NOVALUE;
    // SubProg new_forward_reference pc: 464 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37toplevel_references_62125);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37toplevel_references_62125 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _34current_file_no_15188);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31370;
    if( _1 != _31370 ){
        DeRef(_1);
    }
    _31370 = NOVALUE;
    // SubProg new_forward_reference pc: 468 op: ELSE (23)
    goto LB; // [468] 595
    // SubProg new_forward_reference pc: 470 op: NOP1 (159)
L9: // addr: 471 pc: 470 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 471 op: STARTLINE (58)

    /** fwdref.e:809			add_active_reference( ref )*/
    // SubProg new_forward_reference pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 475 op: PROC (27)
    _37add_active_reference(_ref_63223, _34current_file_no_15188);
    // SubProg new_forward_reference pc: 479 op: STARTLINE (58)

    /** fwdref.e:811			if Parser_mode = PAM_RECORD then*/
    // SubProg new_forward_reference pc: 481 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 483 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 485 op: EQUALS_IFW (104)
    if (_34Parser_mode_15293 != 1)
    goto LC; // [485] 592
    // SubProg new_forward_reference pc: 489 op: STARTLINE (58)

    /** fwdref.e:812				symtab_pointer default_sym = CurrentSub*/
    // SubProg new_forward_reference pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 493 op: ASSIGN (18)
    _default_sym_63329 = _34CurrentSub_15196;
    // SubProg new_forward_reference pc: 496 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 498 op: STARTLINE (58)

    /** fwdref.e:813				symtab_pointer param = 0*/
    // SubProg new_forward_reference pc: 500 op: ASSIGN (18)
    _param_63332 = 0;
    // SubProg new_forward_reference pc: 503 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 505 op: STARTLINE (58)

    /** fwdref.e:814				while default_sym with entry do*/
    // SubProg new_forward_reference pc: 507 op: ELSE (23)
    goto LD; // [507] 536
    // SubProg new_forward_reference pc: 509 op: NOPWHILE (158)
LE: // addr: 510 pc: 509 sub: 63217 op: 158
    // SubProg new_forward_reference pc: 510 op: WHILE (47)
    if (_default_sym_63329 == 0)
    {
        goto LF; // [510] 549
    }
    else{
    }
    // SubProg new_forward_reference pc: 513 op: STARTLINE (58)

    /** fwdref.e:815					if sym_scope( default_sym ) = SC_PRIVATE then*/
    // SubProg new_forward_reference pc: 515 op: PROC (27)
    _31372 = _53sym_scope(_default_sym_63329);
    // SubProg new_forward_reference pc: 519 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 521 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31372, 3)){
        DeRef(_31372);
        _31372 = NOVALUE;
        goto L10; // [521] 533
    }
    DeRef(_31372);
    _31372 = NOVALUE;
    // SubProg new_forward_reference pc: 525 op: STARTLINE (58)

    /** fwdref.e:816						param = default_sym*/
    // SubProg new_forward_reference pc: 527 op: ASSIGN (18)
    _param_63332 = _default_sym_63329;
    // SubProg new_forward_reference pc: 530 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 532 op: NOP1 (159)
L10: // addr: 533 pc: 532 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 533 op: STARTLINE (58)

    /** fwdref.e:818				entry*/
    // SubProg new_forward_reference pc: 535 op: NOP1 (159)
LD: // addr: 536 pc: 535 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 536 op: STARTLINE (58)

    /** fwdref.e:819					default_sym = sym_next( default_sym )*/
    // SubProg new_forward_reference pc: 538 op: PROC (27)
    _default_sym_63329 = _53sym_next(_default_sym_63329);
    // SubProg new_forward_reference pc: 542 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_default_sym_63329)) {
        _1 = (object)(DBL_PTR(_default_sym_63329)->dbl);
        DeRefDS(_default_sym_63329);
        _default_sym_63329 = _1;
    }
    // SubProg new_forward_reference pc: 544 op: STARTLINE (58)

    /** fwdref.e:820				end while*/
    // SubProg new_forward_reference pc: 546 op: ENDWHILE (22)
    goto LE; // [546] 510
    // SubProg new_forward_reference pc: 548 op: NOP1 (159)
LF: // addr: 549 pc: 548 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 549 op: STARTLINE (58)

    /** fwdref.e:821				set_data( ref, {{ PAM_RECORD, param, length( Recorded_sym ) }} )*/
    // SubProg new_forward_reference pc: 551 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 553 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 555 op: LENGTH (42)
    if (IS_SEQUENCE(_34Recorded_sym_15296)){
            _31375 = SEQ_PTR(_34Recorded_sym_15296)->length;
    }
    else {
        _31375 = 1;
    }
    // SubProg new_forward_reference pc: 558 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = _param_63332;
    ((intptr_t*)_2)[3] = _31375;
    _31376 = MAKE_SEQ(_1);
    _31375 = NOVALUE;
    // SubProg new_forward_reference pc: 564 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31376;
    _31377 = MAKE_SEQ(_1);
    _31376 = NOVALUE;
    // SubProg new_forward_reference pc: 568 op: ASSIGN (18)
    DeRef(_data_inlined_set_data_at_575_63347);
    _data_inlined_set_data_at_575_63347 = _31377;
    _31377 = NOVALUE;
    // SubProg new_forward_reference pc: 571 op: STARTLINE (58)

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    // SubProg new_forward_reference pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 575 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37forward_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37forward_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63223 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 580 op: PASSIGN_SUBS (162)
    RefDS(_data_inlined_set_data_at_575_63347);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_inlined_set_data_at_575_63347;
    DeRef(_1);
    // SubProg new_forward_reference pc: 584 op: STARTLINE (58)

    /** fwdref.e:187	end procedure*/
    // SubProg new_forward_reference pc: 586 op: ELSE (23)
    goto L11; // [586] 589
    // SubProg new_forward_reference pc: 588 op: NOP1 (159)
L11: // addr: 589 pc: 588 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 589 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-set_data from new_forward_reference @ 575

// block var data_inlined_set_data_at_575_63347
    DeRef(_data_inlined_set_data_at_575_63347);
    _data_inlined_set_data_at_575_63347 = NOVALUE;

// block var set_data_1__tmp_at578_63348

// block var set_data_2__tmp_at578_63349
    // SubProg new_forward_reference pc: 591 op: NOP1 (159)
LC: // addr: 592 pc: 591 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 592 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var default_sym_63329

// block var param_63332
    // SubProg new_forward_reference pc: 594 op: NOP1 (159)
LB: // addr: 595 pc: 594 sub: 63217 op: 159
    // SubProg new_forward_reference pc: 595 op: STARTLINE (58)

    /** fwdref.e:824		fwdref_count += 1*/
    // SubProg new_forward_reference pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 599 op: PLUS1_I (117)
    _37fwdref_count_62152 = _37fwdref_count_62152 + 1;
    // SubProg new_forward_reference pc: 603 op: STARTLINE (58)

    /** fwdref.e:826		ifdef EUDIS then*/
    // SubProg new_forward_reference pc: 605 op: STARTLINE (58)

    /** fwdref.e:839		return ref*/
    // SubProg new_forward_reference pc: 607 op: RETURNF (28)

// Exiting block BLOCK: new_forward_reference

// block var fwd_op_63219

// block var sym_63221

// block var op_63222

// block var len_63224
    DeRef(_31316);
    _31316 = NOVALUE;
    DeRef(_31321);
    _31321 = NOVALUE;
    return _ref_63223;
    // SubProg new_forward_reference pc: 611 op: BADRETURNF (43)
    ;
}


void _37add_active_reference(object _ref_63353, object _file_no_63354)
{
    object _sp_63368 = NOVALUE;
    object _31401 = NOVALUE; // 63384 31401
    object _31400 = NOVALUE; // 63383 31400
// skipping _31399  name type: 0
    object _31398 = NOVALUE; // 63381 31398
    object _31397 = NOVALUE; // 63380 31397
    object _31396 = NOVALUE; // 63379 31396
// skipping _31395  name type: 0
    object _31394 = NOVALUE; // 63377 31394
    object _31393 = NOVALUE; // 63376 31393
    object _31392 = NOVALUE; // 63375 31392
// skipping _31391  name type: 0
// skipping _31390  name type: 0
    object _31389 = NOVALUE; // 63370 31389
// skipping _31388  name type: 0
    object _31387 = NOVALUE; // 63366 31387
    object _31386 = NOVALUE; // 63365 31386
    object _31385 = NOVALUE; // 63364 31385
// skipping _31384  name type: 0
    object _31383 = NOVALUE; // 63362 31383
    object _31382 = NOVALUE; // 63361 31382
    object _31381 = NOVALUE; // 63360 31381
// skipping _31380  name type: 0
    object _31379 = NOVALUE; // 63358 31379
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_active_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_active_reference pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_active_reference pc: 5 op: STARTLINE (58)

    /** fwdref.e:843		if length( active_references ) < file_no then*/
    // SubProg add_active_reference pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_references_62124)){
            _31379 = SEQ_PTR(_37active_references_62124)->length;
    }
    else {
        _31379 = 1;
    }
    // SubProg add_active_reference pc: 12 op: LESS_IFW_I (119)
    if (_31379 >= _file_no_63354)
    goto L1; // [12] 59
    // SubProg add_active_reference pc: 16 op: STARTLINE (58)

    /** fwdref.e:844			active_references &= repeat( {}, file_no - length( active_references ) )*/
    // SubProg add_active_reference pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_references_62124)){
            _31381 = SEQ_PTR(_37active_references_62124)->length;
    }
    else {
        _31381 = 1;
    }
    // SubProg add_active_reference pc: 25 op: MINUS (10)
    _31382 = _file_no_63354 - _31381;
    _31381 = NOVALUE;
    // SubProg add_active_reference pc: 29 op: REPEAT (32)
    _31383 = Repeat(_21936, _31382);
    _31382 = NOVALUE;
    // SubProg add_active_reference pc: 33 op: CONCAT (15)
    Concat((object_ptr)&_37active_references_62124, _37active_references_62124, _31383);
    DeRefDS(_31383);
    _31383 = NOVALUE;
    // SubProg add_active_reference pc: 37 op: STARTLINE (58)

    /** fwdref.e:845			active_subprogs   &= repeat( {}, file_no - length( active_subprogs ) )*/
    // SubProg add_active_reference pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_subprogs_62123)){
            _31385 = SEQ_PTR(_37active_subprogs_62123)->length;
    }
    else {
        _31385 = 1;
    }
    // SubProg add_active_reference pc: 46 op: MINUS (10)
    _31386 = _file_no_63354 - _31385;
    _31385 = NOVALUE;
    // SubProg add_active_reference pc: 50 op: REPEAT (32)
    _31387 = Repeat(_21936, _31386);
    _31386 = NOVALUE;
    // SubProg add_active_reference pc: 54 op: CONCAT (15)
    Concat((object_ptr)&_37active_subprogs_62123, _37active_subprogs_62123, _31387);
    DeRefDS(_31387);
    _31387 = NOVALUE;
    // SubProg add_active_reference pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 63351 op: 159
    // SubProg add_active_reference pc: 59 op: STARTLINE (58)

    /** fwdref.e:847		integer sp = find( CurrentSub, active_subprogs[file_no] )*/
    // SubProg add_active_reference pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _31389 = (object)*(((s1_ptr)_2)->base + _file_no_63354);
    // SubProg add_active_reference pc: 69 op: FIND_FROM (176)
    _sp_63368 = find_from(_34CurrentSub_15196, _31389, 1);
    _31389 = NOVALUE;
    // SubProg add_active_reference pc: 74 op: STARTLINE (58)

    /** fwdref.e:848		if not sp then*/
    // SubProg add_active_reference pc: 76 op: NOT_IFW (108)
    if (_sp_63368 != 0)
    goto L2; // [76] 127
    // SubProg add_active_reference pc: 79 op: STARTLINE (58)

    /** fwdref.e:849			active_subprogs[file_no] &= CurrentSub*/
    // SubProg add_active_reference pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 85 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _31392 = (object)*(((s1_ptr)_2)->base + _file_no_63354);
    // SubProg add_active_reference pc: 89 op: CONCAT (15)
    if (IS_SEQUENCE(_31392) && IS_ATOM(_34CurrentSub_15196)) {
        Append(&_31393, _31392, _34CurrentSub_15196);
    }
    else if (IS_ATOM(_31392) && IS_SEQUENCE(_34CurrentSub_15196)) {
    }
    else {
        Concat((object_ptr)&_31393, _31392, _34CurrentSub_15196);
        _31392 = NOVALUE;
    }
    _31392 = NOVALUE;
    // SubProg add_active_reference pc: 93 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_subprogs_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63354);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31393;
    if( _1 != _31393 ){
        DeRef(_1);
    }
    _31393 = NOVALUE;
    // SubProg add_active_reference pc: 97 op: STARTLINE (58)

    /** fwdref.e:850			sp = length( active_subprogs[file_no] )*/
    // SubProg add_active_reference pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _31394 = (object)*(((s1_ptr)_2)->base + _file_no_63354);
    // SubProg add_active_reference pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_31394)){
            _sp_63368 = SEQ_PTR(_31394)->length;
    }
    else {
        _sp_63368 = 1;
    }
    _31394 = NOVALUE;
    // SubProg add_active_reference pc: 108 op: STARTLINE (58)

    /** fwdref.e:852			active_references[file_no] = append( active_references[file_no], {} )*/
    // SubProg add_active_reference pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _31396 = (object)*(((s1_ptr)_2)->base + _file_no_63354);
    // SubProg add_active_reference pc: 118 op: APPEND (35)
    RefDS(_21936);
    Append(&_31397, _31396, _21936);
    _31396 = NOVALUE;
    // SubProg add_active_reference pc: 122 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_references_62124 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63354);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31397;
    if( _1 != _31397 ){
        DeRef(_1);
    }
    _31397 = NOVALUE;
    // SubProg add_active_reference pc: 126 op: NOP1 (159)
L2: // addr: 127 pc: 126 sub: 63351 op: 159
    // SubProg add_active_reference pc: 127 op: STARTLINE (58)

    /** fwdref.e:854		active_references[file_no][sp] &= ref*/
    // SubProg add_active_reference pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 131 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37active_references_62124 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_no_63354 + ((s1_ptr)_2)->base);
    // SubProg add_active_reference pc: 136 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31400 = (object)*(((s1_ptr)_2)->base + _sp_63368);
    _31398 = NOVALUE;
    // SubProg add_active_reference pc: 140 op: CONCAT (15)
    if (IS_SEQUENCE(_31400) && IS_ATOM(_ref_63353)) {
        Append(&_31401, _31400, _ref_63353);
    }
    else if (IS_ATOM(_31400) && IS_SEQUENCE(_ref_63353)) {
    }
    else {
        Concat((object_ptr)&_31401, _31400, _ref_63353);
        _31400 = NOVALUE;
    }
    _31400 = NOVALUE;
    // SubProg add_active_reference pc: 144 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_63368);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31401;
    if( _1 != _31401 ){
        DeRef(_1);
    }
    _31401 = NOVALUE;
    _31398 = NOVALUE;
    // SubProg add_active_reference pc: 148 op: STARTLINE (58)

    /** fwdref.e:855	end procedure*/
    // SubProg add_active_reference pc: 150 op: RETURNP (29)

// Exiting block BLOCK: add_active_reference

// block var ref_63353

// block var file_no_63354

// block var sp_63368
    _31394 = NOVALUE;
    return;
    // SubProg add_active_reference pc: 153 op: BADRETURNF (43)
    ;
}


object _37resolve_file(object _refs_63405, object _report_errors_63406, object _unincluded_ok_63407)
{
    object _errors_63408 = NOVALUE;
    object _ref_63412 = NOVALUE;
    object _fr_63414 = NOVALUE;
    object _tok_63427 = NOVALUE;
    object _code_sub_63435 = NOVALUE;
    object _fr_type_63437 = NOVALUE;
    object _sym_tok_63439 = NOVALUE;
// skipping _31456  name type: 0
    object _31455 = NOVALUE; // 63513 31455
    object _31454 = NOVALUE; // 63512 31454
    object _31453 = NOVALUE; // 63511 31453
    object _31452 = NOVALUE; // 63509 31452
    object _31451 = NOVALUE; // 63508 31451
    object _31450 = NOVALUE; // 63507 31450
// skipping _31447  name type: 0
// skipping _31446  name type: 0
    object _31445 = NOVALUE; // 63484 31445
    object _31444 = NOVALUE; // 63482 31444
    object _31443 = NOVALUE; // 63481 31443
// skipping _31442  name type: 0
    object _31441 = NOVALUE; // 63475 31441
    object _31440 = NOVALUE; // 63474 31440
    object _31437 = NOVALUE; // 63463 31437
    object _31436 = NOVALUE; // 63461 31436
    object _31435 = NOVALUE; // 63460 31435
// skipping _31434  name type: 0
// skipping _31433  name type: 0
// skipping _31432  name type: 0
    object _31431 = NOVALUE; // 63449 31431
    object _31430 = NOVALUE; // 63448 31430
// skipping _31426  name type: 0
// skipping _31425  name type: 0
// skipping _31424  name type: 0
// skipping _31423  name type: 0
    object _31422 = NOVALUE; // 63431 31422
// skipping _31421  name type: 0
    object _31420 = NOVALUE; // 63425 31420
    object _31419 = NOVALUE; // 63424 31419
    object _31418 = NOVALUE; // 63423 31418
    object _31417 = NOVALUE; // 63421 31417
    object _31416 = NOVALUE; // 63419 31416
    object _31415 = NOVALUE; // 63418 31415
// skipping _31414  name type: 0
// skipping _31413  name type: 0
    object _31412 = NOVALUE; // 63411 31412
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg resolve_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg resolve_file pc: 3 op: INTEGER_CHECK (96)
    // SubProg resolve_file pc: 5 op: INTEGER_CHECK (96)
    // SubProg resolve_file pc: 7 op: STARTLINE (58)

    /** fwdref.e:864		sequence errors = {}*/
    // SubProg resolve_file pc: 9 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_errors_63408);
    _errors_63408 = _21936;
    // SubProg resolve_file pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg resolve_file pc: 14 op: STARTLINE (58)

    /** fwdref.e:865		for ar = length( refs ) to 1 by -1 do*/
    // SubProg resolve_file pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63405)){
            _31412 = SEQ_PTR(_refs_63405)->length;
    }
    else {
        _31412 = 1;
    }
    // SubProg resolve_file pc: 19 op: FOR_I (125)
    {
        object _ar_63410;
        _ar_63410 = _31412;
L1: // addr: 26 pc: 19 sub: 63403 op: 125
        if (_ar_63410 < 1){
            goto L2; // [19] 481
        }
        // SubProg resolve_file pc: 26 op: STARTLINE (58)

        /** fwdref.e:866			integer ref = refs[ar]*/
        // SubProg resolve_file pc: 28 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_refs_63405);
        _ref_63412 = (object)*(((s1_ptr)_2)->base + _ar_63410);
        if (!IS_ATOM_INT(_ref_63412))
        _ref_63412 = (object)DBL_PTR(_ref_63412)->dbl;
        // SubProg resolve_file pc: 32 op: STARTLINE (58)

        /** fwdref.e:868			sequence fr = forward_references[ref]*/
        // SubProg resolve_file pc: 34 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 36 op: RHS_SUBS (25)
        DeRef(_fr_63414);
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        _fr_63414 = (object)*(((s1_ptr)_2)->base + _ref_63412);
        Ref(_fr_63414);
        // SubProg resolve_file pc: 40 op: SEQUENCE_CHECK (97)
        // SubProg resolve_file pc: 42 op: STARTLINE (58)

        /** fwdref.e:869			if include_matrix[fr[FR_FILE]][current_file_no] = NOT_INCLUDED and not unincluded_ok then*/
        // SubProg resolve_file pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63414);
        _31415 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg resolve_file pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        if (!IS_ATOM_INT(_31415)){
            _31416 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31415)->dbl));
        }
        else{
            _31416 = (object)*(((s1_ptr)_2)->base + _31415);
        }
        // SubProg resolve_file pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31416);
        _31417 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
        _31416 = NOVALUE;
        // SubProg resolve_file pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 62 op: EQUALS (3)
        if (IS_ATOM_INT(_31417)) {
            _31418 = (_31417 == 0);
        }
        else {
            _31418 = binary_op(EQUALS, _31417, 0);
        }
        _31417 = NOVALUE;
        // SubProg resolve_file pc: 66 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31418)) {
            if (_31418 == 0) {
                goto L3; // [66] 84
            }
        }
        else {
            if (DBL_PTR(_31418)->dbl == 0.0) {
                goto L3; // [66] 84
            }
        }
        // SubProg resolve_file pc: 70 op: NOT (7)
        _31420 = (_unincluded_ok_63407 == 0);
        // SubProg resolve_file pc: 73 op: NOP1 (159)
        // SubProg resolve_file pc: 74 op: IF (20)
        if (_31420 == 0)
        {
            DeRef(_31420);
            _31420 = NOVALUE;
            goto L3; // [74] 84
        }
        else{
            DeRef(_31420);
            _31420 = NOVALUE;
        }
        // SubProg resolve_file pc: 77 op: STARTLINE (58)

        /** fwdref.e:870				continue*/
        // SubProg resolve_file pc: 79 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63412

// block var fr_63414
        DeRef(_fr_63414);
        _fr_63414 = NOVALUE;

// block var tok_63427
        DeRef(_tok_63427);
        _tok_63427 = NOVALUE;

// block var code_sub_63435

// block var fr_type_63437

// block var sym_tok_63439
        // SubProg resolve_file pc: 81 op: ELSE (23)
        goto L4; // [81] 476
        // SubProg resolve_file pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 63403 op: 159
        // SubProg resolve_file pc: 84 op: STARTLINE (58)

        /** fwdref.e:873			token tok = find_reference( fr )*/
        // SubProg resolve_file pc: 86 op: PROC (27)
        RefDS(_fr_63414);
        _0 = _tok_63427;
        _tok_63427 = _37find_reference(_fr_63414);
        DeRef(_0);
        // SubProg resolve_file pc: 90 op: STARTLINE (58)

        /** fwdref.e:874			if tok[T_ID] = IGNORED then*/
        // SubProg resolve_file pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 94 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63427);
        _31422 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg resolve_file pc: 98 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 100 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31422, 509)){
            _31422 = NOVALUE;
            goto L5; // [100] 117
        }
        _31422 = NOVALUE;
        // SubProg resolve_file pc: 104 op: STARTLINE (58)

        /** fwdref.e:875				errors &= ref*/
        // SubProg resolve_file pc: 106 op: CONCAT (15)
        Append(&_errors_63408, _errors_63408, _ref_63412);
        // SubProg resolve_file pc: 110 op: STARTLINE (58)

        /** fwdref.e:876				continue*/
        // SubProg resolve_file pc: 112 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63412

// block var fr_63414
        DeRefDS(_fr_63414);
        _fr_63414 = NOVALUE;

// block var tok_63427
        DeRef(_tok_63427);
        _tok_63427 = NOVALUE;

// block var code_sub_63435

// block var fr_type_63437

// block var sym_tok_63439
        // SubProg resolve_file pc: 114 op: ELSE (23)
        goto L4; // [114] 476
        // SubProg resolve_file pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 63403 op: 159
        // SubProg resolve_file pc: 117 op: STARTLINE (58)

        /** fwdref.e:880			integer code_sub = fr[FR_SUBPROG]*/
        // SubProg resolve_file pc: 119 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_fr_63414);
        _code_sub_63435 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_code_sub_63435))
        _code_sub_63435 = (object)DBL_PTR(_code_sub_63435)->dbl;
        // SubProg resolve_file pc: 123 op: STARTLINE (58)

        /** fwdref.e:881			integer fr_type  = fr[FR_TYPE]*/
        // SubProg resolve_file pc: 125 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_fr_63414);
        _fr_type_63437 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_fr_type_63437))
        _fr_type_63437 = (object)DBL_PTR(_fr_type_63437)->dbl;
        // SubProg resolve_file pc: 129 op: STARTLINE (58)

        /** fwdref.e:882			integer sym_tok*/
        // SubProg resolve_file pc: 131 op: STARTLINE (58)

        /** fwdref.e:884			switch fr_type label "fr_type" do*/
        // SubProg resolve_file pc: 133 op: SWITCH_I (193)
        _0 = _fr_type_63437;
        switch ( _0 ){ 
            // SubProg resolve_file pc: 138 op: STARTLINE (58)

            /** fwdref.e:885				case PROC, FUNC then*/
            // SubProg resolve_file pc: 140 op: CASE (186)
            case 27:
            // SubProg resolve_file pc: 142 op: CASE (186)
            case 501:
            // SubProg resolve_file pc: 144 op: STARTLINE (58)

            /** fwdref.e:887					sym_tok = SymTab[tok[T_SYM]][S_TOKEN]*/
            // SubProg resolve_file pc: 146 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 148 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 150 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_tok_63427);
            _31430 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 154 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35SymTab_14156);
            if (!IS_ATOM_INT(_31430)){
                _31431 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31430)->dbl));
            }
            else{
                _31431 = (object)*(((s1_ptr)_2)->base + _31430);
            }
            // SubProg resolve_file pc: 158 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 160 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31431);
            if (!IS_ATOM_INT(_34S_TOKEN_14848)){
                _sym_tok_63439 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
            }
            else{
                _sym_tok_63439 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
            }
            if (!IS_ATOM_INT(_sym_tok_63439)){
                _sym_tok_63439 = (object)DBL_PTR(_sym_tok_63439)->dbl;
            }
            _31431 = NOVALUE;
            // SubProg resolve_file pc: 166 op: STARTLINE (58)

            /** fwdref.e:888					if sym_tok = TYPE then*/
            // SubProg resolve_file pc: 168 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 170 op: EQUALS_IFW (104)
            if (_sym_tok_63439 != 504)
            goto L6; // [170] 184
            // SubProg resolve_file pc: 174 op: STARTLINE (58)

            /** fwdref.e:889						sym_tok = FUNC*/
            // SubProg resolve_file pc: 176 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 178 op: ASSIGN (18)
            _sym_tok_63439 = 501;
            // SubProg resolve_file pc: 181 op: INTEGER_CHECK (96)
            // SubProg resolve_file pc: 183 op: NOP1 (159)
L6: // addr: 184 pc: 183 sub: 63403 op: 159
            // SubProg resolve_file pc: 184 op: STARTLINE (58)

            /** fwdref.e:891					if sym_tok != fr_type then*/
            // SubProg resolve_file pc: 186 op: NOTEQ_IFW_I (122)
            if (_sym_tok_63439 == _fr_type_63437)
            goto L7; // [186] 220
            // SubProg resolve_file pc: 190 op: STARTLINE (58)

            /** fwdref.e:892						if sym_tok != FUNC and fr_type != PROC then*/
            // SubProg resolve_file pc: 192 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 194 op: NOTEQ (4)
            _31435 = (_sym_tok_63439 != 501);
            // SubProg resolve_file pc: 198 op: SC1_AND_IF (146)
            if (_31435 == 0) {
                goto L8; // [198] 219
            }
            // SubProg resolve_file pc: 202 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 204 op: NOTEQ (4)
            _31437 = (_fr_type_63437 != 27);
            // SubProg resolve_file pc: 208 op: NOP1 (159)
            // SubProg resolve_file pc: 209 op: IF (20)
            if (_31437 == 0)
            {
                DeRef(_31437);
                _31437 = NOVALUE;
                goto L8; // [209] 219
            }
            else{
                DeRef(_31437);
                _31437 = NOVALUE;
            }
            // SubProg resolve_file pc: 212 op: STARTLINE (58)

            /** fwdref.e:893							forward_error( tok, ref )*/
            // SubProg resolve_file pc: 214 op: PROC (27)
            Ref(_tok_63427);
            _37forward_error(_tok_63427, _ref_63412);
            // SubProg resolve_file pc: 218 op: NOP1 (159)
L8: // addr: 219 pc: 218 sub: 63403 op: 159
            // SubProg resolve_file pc: 219 op: NOP1 (159)
L7: // addr: 220 pc: 219 sub: 63403 op: 159
            // SubProg resolve_file pc: 220 op: STARTLINE (58)

            /** fwdref.e:896					switch sym_tok do*/
            // SubProg resolve_file pc: 222 op: SWITCH_I (193)
            _0 = _sym_tok_63439;
            switch ( _0 ){ 
                // SubProg resolve_file pc: 227 op: STARTLINE (58)

                /** fwdref.e:897						case PROC, FUNC then*/
                // SubProg resolve_file pc: 229 op: CASE (186)
                case 27:
                // SubProg resolve_file pc: 231 op: CASE (186)
                case 501:
                // SubProg resolve_file pc: 233 op: STARTLINE (58)

                /** fwdref.e:898							patch_forward_call( tok, ref )*/
                // SubProg resolve_file pc: 235 op: PROC (27)
                Ref(_tok_63427);
                _37patch_forward_call(_tok_63427, _ref_63412);
                // SubProg resolve_file pc: 239 op: STARTLINE (58)

                /** fwdref.e:899							break "fr_type"*/
                // SubProg resolve_file pc: 241 op: ELSE (23)
                goto L9; // [241] 446
                // SubProg resolve_file pc: 243 op: ELSE (23)
                goto L9; // [243] 446
                // SubProg resolve_file pc: 245 op: STARTLINE (58)

                /** fwdref.e:901						case else*/
                // SubProg resolve_file pc: 247 op: CASE (186)
                default:
                // SubProg resolve_file pc: 249 op: STARTLINE (58)

                /** fwdref.e:902							forward_error( tok, ref )*/
                // SubProg resolve_file pc: 251 op: PROC (27)
                Ref(_tok_63427);
                _37forward_error(_tok_63427, _ref_63412);
                // SubProg resolve_file pc: 255 op: NOPSWITCH (187)
            ;}            // SubProg resolve_file pc: 256 op: ELSE (23)
            goto L9; // [256] 446
            // SubProg resolve_file pc: 258 op: STARTLINE (58)

            /** fwdref.e:906				case VARIABLE then*/
            // SubProg resolve_file pc: 260 op: CASE (186)
            case -100:
            // SubProg resolve_file pc: 262 op: STARTLINE (58)

            /** fwdref.e:907					sym_tok = SymTab[tok[T_SYM]][S_TOKEN]*/
            // SubProg resolve_file pc: 264 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 266 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 268 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_tok_63427);
            _31440 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 272 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35SymTab_14156);
            if (!IS_ATOM_INT(_31440)){
                _31441 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31440)->dbl));
            }
            else{
                _31441 = (object)*(((s1_ptr)_2)->base + _31440);
            }
            // SubProg resolve_file pc: 276 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 278 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31441);
            if (!IS_ATOM_INT(_34S_TOKEN_14848)){
                _sym_tok_63439 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
            }
            else{
                _sym_tok_63439 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
            }
            if (!IS_ATOM_INT(_sym_tok_63439)){
                _sym_tok_63439 = (object)DBL_PTR(_sym_tok_63439)->dbl;
            }
            _31441 = NOVALUE;
            // SubProg resolve_file pc: 284 op: STARTLINE (58)

            /** fwdref.e:908					if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
            // SubProg resolve_file pc: 286 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 288 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 290 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_tok_63427);
            _31443 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 294 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35SymTab_14156);
            if (!IS_ATOM_INT(_31443)){
                _31444 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31443)->dbl));
            }
            else{
                _31444 = (object)*(((s1_ptr)_2)->base + _31443);
            }
            // SubProg resolve_file pc: 298 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 300 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31444);
            _31445 = (object)*(((s1_ptr)_2)->base + 4);
            _31444 = NOVALUE;
            // SubProg resolve_file pc: 304 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 306 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _31445, 9)){
                _31445 = NOVALUE;
                goto LA; // [306] 323
            }
            _31445 = NOVALUE;
            // SubProg resolve_file pc: 310 op: STARTLINE (58)

            /** fwdref.e:909						errors &= ref*/
            // SubProg resolve_file pc: 312 op: CONCAT (15)
            Append(&_errors_63408, _errors_63408, _ref_63412);
            // SubProg resolve_file pc: 316 op: STARTLINE (58)

            /** fwdref.e:910						continue*/
            // SubProg resolve_file pc: 318 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63412

// block var fr_63414
            DeRef(_fr_63414);
            _fr_63414 = NOVALUE;

// block var tok_63427
            DeRef(_tok_63427);
            _tok_63427 = NOVALUE;

// block var code_sub_63435

// block var fr_type_63437

// block var sym_tok_63439
            // SubProg resolve_file pc: 320 op: ELSE (23)
            goto L4; // [320] 476
            // SubProg resolve_file pc: 322 op: NOP1 (159)
LA: // addr: 323 pc: 322 sub: 63403 op: 159
            // SubProg resolve_file pc: 323 op: STARTLINE (58)

            /** fwdref.e:913					switch sym_tok do*/
            // SubProg resolve_file pc: 325 op: SWITCH_I (193)
            _0 = _sym_tok_63439;
            switch ( _0 ){ 
                // SubProg resolve_file pc: 330 op: STARTLINE (58)

                /** fwdref.e:914						case CONSTANT, ENUM, VARIABLE then*/
                // SubProg resolve_file pc: 332 op: CASE (186)
                case 417:
                // SubProg resolve_file pc: 334 op: CASE (186)
                case 427:
                // SubProg resolve_file pc: 336 op: CASE (186)
                case -100:
                // SubProg resolve_file pc: 338 op: STARTLINE (58)

                /** fwdref.e:915							patch_forward_variable( tok, ref )*/
                // SubProg resolve_file pc: 340 op: PROC (27)
                Ref(_tok_63427);
                _37patch_forward_variable(_tok_63427, _ref_63412);
                // SubProg resolve_file pc: 344 op: STARTLINE (58)

                /** fwdref.e:916							break "fr_type"*/
                // SubProg resolve_file pc: 346 op: ELSE (23)
                goto L9; // [346] 446
                // SubProg resolve_file pc: 348 op: ELSE (23)
                goto L9; // [348] 446
                // SubProg resolve_file pc: 350 op: STARTLINE (58)

                /** fwdref.e:917						case else*/
                // SubProg resolve_file pc: 352 op: CASE (186)
                default:
                // SubProg resolve_file pc: 354 op: STARTLINE (58)

                /** fwdref.e:918							forward_error( tok, ref )*/
                // SubProg resolve_file pc: 356 op: PROC (27)
                Ref(_tok_63427);
                _37forward_error(_tok_63427, _ref_63412);
                // SubProg resolve_file pc: 360 op: NOPSWITCH (187)
            ;}            // SubProg resolve_file pc: 361 op: ELSE (23)
            goto L9; // [361] 446
            // SubProg resolve_file pc: 363 op: STARTLINE (58)

            /** fwdref.e:921				case TYPE_CHECK then*/
            // SubProg resolve_file pc: 365 op: CASE (186)
            case 65:
            // SubProg resolve_file pc: 367 op: STARTLINE (58)

            /** fwdref.e:922					patch_forward_type_check( tok, ref )*/
            // SubProg resolve_file pc: 369 op: PROC (27)
            Ref(_tok_63427);
            _37patch_forward_type_check(_tok_63427, _ref_63412);
            // SubProg resolve_file pc: 373 op: ELSE (23)
            goto L9; // [373] 446
            // SubProg resolve_file pc: 375 op: STARTLINE (58)

            /** fwdref.e:924				case GLOBAL_INIT_CHECK then*/
            // SubProg resolve_file pc: 377 op: CASE (186)
            case 109:
            // SubProg resolve_file pc: 379 op: STARTLINE (58)

            /** fwdref.e:925					patch_forward_init_check( tok, ref )*/
            // SubProg resolve_file pc: 381 op: PROC (27)
            Ref(_tok_63427);
            _37patch_forward_init_check(_tok_63427, _ref_63412);
            // SubProg resolve_file pc: 385 op: ELSE (23)
            goto L9; // [385] 446
            // SubProg resolve_file pc: 387 op: STARTLINE (58)

            /** fwdref.e:927				case CASE then*/
            // SubProg resolve_file pc: 389 op: CASE (186)
            case 186:
            // SubProg resolve_file pc: 391 op: STARTLINE (58)

            /** fwdref.e:928					patch_forward_case( tok, ref )*/
            // SubProg resolve_file pc: 393 op: PROC (27)
            Ref(_tok_63427);
            _37patch_forward_case(_tok_63427, _ref_63412);
            // SubProg resolve_file pc: 397 op: ELSE (23)
            goto L9; // [397] 446
            // SubProg resolve_file pc: 399 op: STARTLINE (58)

            /** fwdref.e:930				case TYPE then*/
            // SubProg resolve_file pc: 401 op: CASE (186)
            case 504:
            // SubProg resolve_file pc: 403 op: STARTLINE (58)

            /** fwdref.e:931					patch_forward_type( tok, ref )*/
            // SubProg resolve_file pc: 405 op: PROC (27)
            Ref(_tok_63427);
            _37patch_forward_type(_tok_63427, _ref_63412);
            // SubProg resolve_file pc: 409 op: ELSE (23)
            goto L9; // [409] 446
            // SubProg resolve_file pc: 411 op: STARTLINE (58)

            /** fwdref.e:933				case GOTO then*/
            // SubProg resolve_file pc: 413 op: CASE (186)
            case 188:
            // SubProg resolve_file pc: 415 op: STARTLINE (58)

            /** fwdref.e:934					patch_forward_goto( tok, ref )*/
            // SubProg resolve_file pc: 417 op: PROC (27)
            Ref(_tok_63427);
            _37patch_forward_goto(_tok_63427, _ref_63412);
            // SubProg resolve_file pc: 421 op: ELSE (23)
            goto L9; // [421] 446
            // SubProg resolve_file pc: 423 op: STARTLINE (58)

            /** fwdref.e:936				case else*/
            // SubProg resolve_file pc: 425 op: CASE (186)
            default:
            // SubProg resolve_file pc: 427 op: STARTLINE (58)

            /** fwdref.e:938					InternalErr( 263, {fr[FR_TYPE], fr[FR_NAME]})*/
            // SubProg resolve_file pc: 429 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_fr_63414);
            _31450 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg resolve_file pc: 433 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_fr_63414);
            _31451 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 437 op: RIGHT_BRACE_2 (85)
            Ref(_31451);
            Ref(_31450);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _31450;
            ((intptr_t *)_2)[2] = _31451;
            _31452 = MAKE_SEQ(_1);
            _31451 = NOVALUE;
            _31450 = NOVALUE;
            // SubProg resolve_file pc: 441 op: PROC (27)
            _49InternalErr(263, _31452);
            _31452 = NOVALUE;
            // SubProg resolve_file pc: 445 op: NOPSWITCH (187)
        ;}L9: // addr: 446 pc: 445 sub: 63403 op: 187
        // SubProg resolve_file pc: 446 op: STARTLINE (58)

        /** fwdref.e:940			if report_errors and sequence( forward_references[ref] ) then*/
        // SubProg resolve_file pc: 448 op: SC1_AND_IF (146)
        if (_report_errors_63406 == 0) {
            goto LB; // [448] 472
        }
        // SubProg resolve_file pc: 452 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 454 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        _31454 = (object)*(((s1_ptr)_2)->base + _ref_63412);
        // SubProg resolve_file pc: 458 op: IS_A_SEQUENCE (68)
        _31455 = IS_SEQUENCE(_31454);
        _31454 = NOVALUE;
        // SubProg resolve_file pc: 461 op: NOP1 (159)
        // SubProg resolve_file pc: 462 op: IF (20)
        if (_31455 == 0)
        {
            _31455 = NOVALUE;
            goto LB; // [462] 472
        }
        else{
            _31455 = NOVALUE;
        }
        // SubProg resolve_file pc: 465 op: STARTLINE (58)

        /** fwdref.e:941				errors &= ref*/
        // SubProg resolve_file pc: 467 op: CONCAT (15)
        Append(&_errors_63408, _errors_63408, _ref_63412);
        // SubProg resolve_file pc: 471 op: NOP1 (159)
LB: // addr: 472 pc: 471 sub: 63403 op: 159
        // SubProg resolve_file pc: 472 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63412

// block var fr_63414
        DeRef(_fr_63414);
        _fr_63414 = NOVALUE;

// block var tok_63427
        DeRef(_tok_63427);
        _tok_63427 = NOVALUE;

// block var code_sub_63435

// block var fr_type_63437

// block var sym_tok_63439
        // SubProg resolve_file pc: 474 op: STARTLINE (58)

        /** fwdref.e:944		end for*/
        // SubProg resolve_file pc: 476 op: ENDFOR_GENERAL (39)
L4: // addr: 476 pc: 476 sub: 63403 op: 39
        _ar_63410 = _ar_63410 + -1;
        goto L1; // [476] 26
L2: // addr: 481 pc: 476 sub: 63403 op: 39
        ;
    }
    // SubProg resolve_file pc: 481 op: STARTLINE (58)

    /** fwdref.e:945		return errors*/
    // SubProg resolve_file pc: 483 op: RETURNF (28)

// Exiting block BLOCK: resolve_file

// block var refs_63405
    DeRefDS(_refs_63405);

// block var report_errors_63406

// block var unincluded_ok_63407
    _31430 = NOVALUE;
    _31443 = NOVALUE;
    _31440 = NOVALUE;
    DeRef(_31418);
    _31418 = NOVALUE;
    _31415 = NOVALUE;
    DeRef(_31435);
    _31435 = NOVALUE;
    return _errors_63408;
    // SubProg resolve_file pc: 487 op: BADRETURNF (43)
    ;
}


object _37file_name_based_symindex_compare(object _si1_63517, object _si2_63518)
{
    object _fn1_63539 = NOVALUE;
    object _fn2_63544 = NOVALUE;
    object _31484 = NOVALUE; // 63566 31484
    object _31483 = NOVALUE; // 63565 31483
    object _31482 = NOVALUE; // 63564 31482
    object _31481 = NOVALUE; // 63561 31481
    object _31480 = NOVALUE; // 63560 31480
    object _31479 = NOVALUE; // 63557 31479
    object _31478 = NOVALUE; // 63556 31478
    object _31477 = NOVALUE; // 63555 31477
    object _31476 = NOVALUE; // 63554 31476
    object _31475 = NOVALUE; // 63553 31475
    object _31474 = NOVALUE; // 63552 31474
    object _31473 = NOVALUE; // 63550 31473
// skipping _31472  name type: 0
    object _31471 = NOVALUE; // 63546 31471
// skipping _31470  name type: 0
    object _31469 = NOVALUE; // 63541 31469
    object _31468 = NOVALUE; // 63538 31468
    object _31467 = NOVALUE; // 63537 31467
    object _31466 = NOVALUE; // 63536 31466
    object _31465 = NOVALUE; // 63533 31465
    object _31464 = NOVALUE; // 63532 31464
    object _31463 = NOVALUE; // 63531 31463
    object _31462 = NOVALUE; // 63530 31462
    object _31461 = NOVALUE; // 63526 31461
    object _31460 = NOVALUE; // 63525 31460
// skipping _31459  name type: 0
    object _31458 = NOVALUE; // 63522 31458
    object _31457 = NOVALUE; // 63521 31457
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_name_based_symindex_compare pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_si1_63517)) {
        _1 = (object)(DBL_PTR(_si1_63517)->dbl);
        DeRefDS(_si1_63517);
        _si1_63517 = _1;
    }
    // SubProg file_name_based_symindex_compare pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_si2_63518)) {
        _1 = (object)(DBL_PTR(_si2_63518)->dbl);
        DeRefDS(_si2_63518);
        _si2_63518 = _1;
    }
    // SubProg file_name_based_symindex_compare pc: 5 op: STARTLINE (58)

    /** fwdref.e:949		if not symtab_index(si1) or not symtab_index(si2) then*/
    // SubProg file_name_based_symindex_compare pc: 7 op: PROC (27)
    _31457 = _34symtab_index(_si1_63517);
    // SubProg file_name_based_symindex_compare pc: 11 op: NOT (7)
    if (IS_ATOM_INT(_31457)) {
        _31458 = (_31457 == 0);
    }
    else {
        _31458 = unary_op(NOT, _31457);
    }
    DeRef(_31457);
    _31457 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 14 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_31458)) {
        if (_31458 != 0) {
            goto L1; // [14] 30
        }
    }
    else {
        if (DBL_PTR(_31458)->dbl != 0.0) {
            goto L1; // [14] 30
        }
    }
    // SubProg file_name_based_symindex_compare pc: 18 op: PROC (27)
    _31460 = _34symtab_index(_si2_63518);
    // SubProg file_name_based_symindex_compare pc: 22 op: NOT (7)
    if (IS_ATOM_INT(_31460)) {
        _31461 = (_31460 == 0);
    }
    else {
        _31461 = unary_op(NOT, _31460);
    }
    DeRef(_31460);
    _31460 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 25 op: NOP1 (159)
    // SubProg file_name_based_symindex_compare pc: 26 op: IF (20)
    if (_31461 == 0) {
        DeRef(_31461);
        _31461 = NOVALUE;
        goto L2; // [26] 37
    }
    else {
        if (!IS_ATOM_INT(_31461) && DBL_PTR(_31461)->dbl == 0.0){
            DeRef(_31461);
            _31461 = NOVALUE;
            goto L2; // [26] 37
        }
        DeRef(_31461);
        _31461 = NOVALUE;
    }
    DeRef(_31461);
    _31461 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 63515 op: 159
    // SubProg file_name_based_symindex_compare pc: 30 op: STARTLINE (58)

    /** fwdref.e:950			return 1 -- put non symbols last*/
    // SubProg file_name_based_symindex_compare pc: 32 op: RETURNF (28)

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63517

// block var si2_63518
    DeRef(_31458);
    _31458 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 63515 op: 159
    // SubProg file_name_based_symindex_compare pc: 37 op: STARTLINE (58)

    /** fwdref.e:952		if S_FILE_NO <= length(SymTab[si1]) and S_FILE_NO <= length(SymTab[si2]) then*/
    // SubProg file_name_based_symindex_compare pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31462 = (object)*(((s1_ptr)_2)->base + _si1_63517);
    // SubProg file_name_based_symindex_compare pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_31462)){
            _31463 = SEQ_PTR(_31462)->length;
    }
    else {
        _31463 = 1;
    }
    _31462 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 50 op: LESSEQ (5)
    if (IS_ATOM_INT(_34S_FILE_NO_14839)) {
        _31464 = (_34S_FILE_NO_14839 <= _31463);
    }
    else {
        _31464 = binary_op(LESSEQ, _34S_FILE_NO_14839, _31463);
    }
    _31463 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 54 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31464)) {
        if (_31464 == 0) {
            goto L3; // [54] 186
        }
    }
    else {
        if (DBL_PTR(_31464)->dbl == 0.0) {
            goto L3; // [54] 186
        }
    }
    // SubProg file_name_based_symindex_compare pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31466 = (object)*(((s1_ptr)_2)->base + _si2_63518);
    // SubProg file_name_based_symindex_compare pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_31466)){
            _31467 = SEQ_PTR(_31466)->length;
    }
    else {
        _31467 = 1;
    }
    _31466 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 69 op: LESSEQ (5)
    if (IS_ATOM_INT(_34S_FILE_NO_14839)) {
        _31468 = (_34S_FILE_NO_14839 <= _31467);
    }
    else {
        _31468 = binary_op(LESSEQ, _34S_FILE_NO_14839, _31467);
    }
    _31467 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 73 op: NOP1 (159)
    // SubProg file_name_based_symindex_compare pc: 74 op: IF (20)
    if (_31468 == 0) {
        DeRef(_31468);
        _31468 = NOVALUE;
        goto L3; // [74] 186
    }
    else {
        if (!IS_ATOM_INT(_31468) && DBL_PTR(_31468)->dbl == 0.0){
            DeRef(_31468);
            _31468 = NOVALUE;
            goto L3; // [74] 186
        }
        DeRef(_31468);
        _31468 = NOVALUE;
    }
    DeRef(_31468);
    _31468 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 77 op: STARTLINE (58)

    /** fwdref.e:953			integer fn1 = SymTab[si1][S_FILE_NO], fn2 = SymTab[si2][S_FILE_NO]*/
    // SubProg file_name_based_symindex_compare pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31469 = (object)*(((s1_ptr)_2)->base + _si1_63517);
    // SubProg file_name_based_symindex_compare pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31469);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _fn1_63539 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _fn1_63539 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_fn1_63539)){
        _fn1_63539 = (object)DBL_PTR(_fn1_63539)->dbl;
    }
    _31469 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31471 = (object)*(((s1_ptr)_2)->base + _si2_63518);
    // SubProg file_name_based_symindex_compare pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31471);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _fn2_63544 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _fn2_63544 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_fn2_63544)){
        _fn2_63544 = (object)DBL_PTR(_fn2_63544)->dbl;
    }
    _31471 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 107 op: STARTLINE (58)

    /** fwdref.e:954			if find(1,{fn1,fn2} > length(known_files) or {fn1,fn2} <= 0) then*/
    // SubProg file_name_based_symindex_compare pc: 109 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63539;
    ((intptr_t *)_2)[2] = _fn2_63544;
    _31473 = MAKE_SEQ(_1);
    // SubProg file_name_based_symindex_compare pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 115 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _31474 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _31474 = 1;
    }
    // SubProg file_name_based_symindex_compare pc: 118 op: GREATER (6)
    _31475 = binary_op(GREATER, _31473, _31474);
    DeRefDS(_31473);
    _31473 = NOVALUE;
    _31474 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 122 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63539;
    ((intptr_t *)_2)[2] = _fn2_63544;
    _31476 = MAKE_SEQ(_1);
    // SubProg file_name_based_symindex_compare pc: 126 op: LESSEQ (5)
    _31477 = binary_op(LESSEQ, _31476, 0);
    DeRefDS(_31476);
    _31476 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 130 op: OR (9)
    _31478 = binary_op(OR, _31475, _31477);
    DeRefDS(_31475);
    _31475 = NOVALUE;
    DeRefDS(_31477);
    _31477 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 134 op: FIND_FROM (176)
    _31479 = find_from(1, _31478, 1);
    DeRefDS(_31478);
    _31478 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 139 op: IF (20)
    if (_31479 == 0)
    {
        _31479 = NOVALUE;
        goto L4; // [139] 149
    }
    else{
        _31479 = NOVALUE;
    }
    // SubProg file_name_based_symindex_compare pc: 142 op: STARTLINE (58)

    /** fwdref.e:956				return 1*/
    // SubProg file_name_based_symindex_compare pc: 144 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fn1_63539

// block var fn2_63544

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63517

// block var si2_63518
    DeRef(_31458);
    _31458 = NOVALUE;
    _31466 = NOVALUE;
    DeRef(_31464);
    _31464 = NOVALUE;
    _31462 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 63515 op: 159
    // SubProg file_name_based_symindex_compare pc: 149 op: STARTLINE (58)

    /** fwdref.e:958			return compare(abbreviate_path(known_files[fn1]),*/
    // SubProg file_name_based_symindex_compare pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _31480 = (object)*(((s1_ptr)_2)->base + _fn1_63539);
    // SubProg file_name_based_symindex_compare pc: 157 op: PROC (27)
    Ref(_31480);
    RefDS(_21936);
    _31481 = _18abbreviate_path(_31480, _21936);
    _31480 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 164 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _31482 = (object)*(((s1_ptr)_2)->base + _fn2_63544);
    // SubProg file_name_based_symindex_compare pc: 168 op: PROC (27)
    Ref(_31482);
    RefDS(_21936);
    _31483 = _18abbreviate_path(_31482, _21936);
    _31482 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 173 op: COMPARE (76)
    if (IS_ATOM_INT(_31481) && IS_ATOM_INT(_31483)){
        _31484 = (_31481 < _31483) ? -1 : (_31481 > _31483);
    }
    else{
        _31484 = compare(_31481, _31483);
    }
    DeRef(_31481);
    _31481 = NOVALUE;
    DeRef(_31483);
    _31483 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 177 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fn1_63539

// block var fn2_63544

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63517

// block var si2_63518
    DeRef(_31458);
    _31458 = NOVALUE;
    _31466 = NOVALUE;
    DeRef(_31464);
    _31464 = NOVALUE;
    _31462 = NOVALUE;
    return _31484;
    // SubProg file_name_based_symindex_compare pc: 181 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fn1_63539

// block var fn2_63544
    // SubProg file_name_based_symindex_compare pc: 183 op: ELSE (23)
    goto L5; // [183] 193
    // SubProg file_name_based_symindex_compare pc: 185 op: NOP1 (159)
L3: // addr: 186 pc: 185 sub: 63515 op: 159
    // SubProg file_name_based_symindex_compare pc: 186 op: STARTLINE (58)

    /** fwdref.e:961			return 1 -- put non-names last*/
    // SubProg file_name_based_symindex_compare pc: 188 op: RETURNF (28)

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63517

// block var si2_63518
    DeRef(_31458);
    _31458 = NOVALUE;
    _31466 = NOVALUE;
    DeRef(_31464);
    _31464 = NOVALUE;
    _31462 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 192 op: NOP1 (159)
L5: // addr: 193 pc: 192 sub: 63515 op: 159
    // SubProg file_name_based_symindex_compare pc: 193 op: BADRETURNF (43)
    ;
}


void _37Resolve_forward_references(object _report_errors_63570)
{
    object _errors_63571 = NOVALUE;
    object _unincluded_ok_63572 = NOVALUE;
    object _msg_63633 = NOVALUE;
    object _errloc_63634 = NOVALUE;
    object _ref_63639 = NOVALUE;
    object _tok_63655 = NOVALUE;
    object _THIS_SCOPE_63657 = NOVALUE;
    object _THESE_GLOBALS_63658 = NOVALUE;
    object _syms_63717 = NOVALUE;
    object _s_63738 = NOVALUE;
    object _31619 = NOVALUE; // 63782 31619
    object _31618 = NOVALUE; // 63780 31618
    object _31617 = NOVALUE; // 63778 31617
// skipping _31615  name type: 0
    object _31614 = NOVALUE; // 63774 31614
// skipping _31613  name type: 0
// skipping _31612  name type: 0
// skipping _31611  name type: 0
// skipping _31610  name type: 0
    object _31609 = NOVALUE; // 63764 31609
// skipping _31608  name type: 0
// skipping _31607  name type: 0
    object _31606 = NOVALUE; // 63761 31606
// skipping _31605  name type: 0
    object _31604 = NOVALUE; // 63757 31604
    object _31603 = NOVALUE; // 63756 31603
    object _31602 = NOVALUE; // 63755 31602
    object _31601 = NOVALUE; // 63754 31601
    object _31600 = NOVALUE; // 63753 31600
    object _31599 = NOVALUE; // 63752 31599
    object _31598 = NOVALUE; // 63750 31598
    object _31596 = NOVALUE; // 63744 31596
    object _31595 = NOVALUE; // 63743 31595
    object _31594 = NOVALUE; // 63741 31594
// skipping _31593  name type: 0
    object _31592 = NOVALUE; // 63736 31592
// skipping _31591  name type: 0
    object _31590 = NOVALUE; // 63732 31590
    object _31589 = NOVALUE; // 63731 31589
    object _31588 = NOVALUE; // 63730 31588
    object _31587 = NOVALUE; // 63729 31587
    object _31586 = NOVALUE; // 63728 31586
    object _31585 = NOVALUE; // 63725 31585
// skipping _31583  name type: 0
    object _31582 = NOVALUE; // 63721 31582
// skipping _31580  name type: 0
// skipping _31579  name type: 0
    object _31578 = NOVALUE; // 63713 31578
    object _31577 = NOVALUE; // 63712 31577
    object _31576 = NOVALUE; // 63711 31576
    object _31575 = NOVALUE; // 63710 31575
    object _31574 = NOVALUE; // 63709 31574
    object _31573 = NOVALUE; // 63706 31573
// skipping _31571  name type: 0
    object _31570 = NOVALUE; // 63702 31570
    object _31569 = NOVALUE; // 63701 31569
    object _31568 = NOVALUE; // 63700 31568
    object _31567 = NOVALUE; // 63699 31567
    object _31566 = NOVALUE; // 63698 31566
    object _31565 = NOVALUE; // 63695 31565
// skipping _31563  name type: 0
    object _31562 = NOVALUE; // 63691 31562
    object _31561 = NOVALUE; // 63690 31561
    object _31559 = NOVALUE; // 63688 31559
    object _31558 = NOVALUE; // 63687 31558
    object _31557 = NOVALUE; // 63686 31557
    object _31556 = NOVALUE; // 63682 31556
    object _31555 = NOVALUE; // 63681 31555
    object _31554 = NOVALUE; // 63680 31554
    object _31553 = NOVALUE; // 63679 31553
    object _31552 = NOVALUE; // 63676 31552
// skipping _31550  name type: 0
    object _31549 = NOVALUE; // 63673 31549
// skipping _31548  name type: 0
    object _31547 = NOVALUE; // 63670 31547
    object _31544 = NOVALUE; // 63664 31544
// skipping _31543  name type: 0
    object _31542 = NOVALUE; // 63661 31542
// skipping _31541  name type: 0
    object _31540 = NOVALUE; // 63653 31540
    object _31539 = NOVALUE; // 63651 31539
// skipping _31538  name type: 0
    object _31537 = NOVALUE; // 63649 31537
    object _31536 = NOVALUE; // 63647 31536
    object _31535 = NOVALUE; // 63646 31535
    object _31534 = NOVALUE; // 63645 31534
    object _31533 = NOVALUE; // 63643 31533
// skipping _31532  name type: 0
    object _31531 = NOVALUE; // 63640 31531
    object _31530 = NOVALUE; // 63638 31530
    object _31528 = NOVALUE; // 63632 31528
    object _31527 = NOVALUE; // 63631 31527
// skipping _31526  name type: 0
    object _31525 = NOVALUE; // 63628 31525
    object _31524 = NOVALUE; // 63627 31524
// skipping _31523  name type: 0
    object _31522 = NOVALUE; // 63625 31522
    object _31521 = NOVALUE; // 63624 31521
    object _31520 = NOVALUE; // 63623 31520
    object _31519 = NOVALUE; // 63622 31519
    object _31518 = NOVALUE; // 63621 31518
    object _31517 = NOVALUE; // 63618 31517
    object _31516 = NOVALUE; // 63617 31516
    object _31515 = NOVALUE; // 63615 31515
    object _31514 = NOVALUE; // 63614 31514
    object _31513 = NOVALUE; // 63612 31513
    object _31512 = NOVALUE; // 63611 31512
    object _31511 = NOVALUE; // 63610 31511
    object _31510 = NOVALUE; // 63609 31510
    object _31509 = NOVALUE; // 63608 31509
    object _31508 = NOVALUE; // 63607 31508
    object _31507 = NOVALUE; // 63605 31507
// skipping _31506  name type: 0
    object _31505 = NOVALUE; // 63601 31505
    object _31504 = NOVALUE; // 63600 31504
    object _31503 = NOVALUE; // 63599 31503
    object _31502 = NOVALUE; // 63598 31502
// skipping _31501  name type: 0
    object _31500 = NOVALUE; // 63595 31500
    object _31499 = NOVALUE; // 63593 31499
// skipping _31498  name type: 0
    object _31497 = NOVALUE; // 63590 31497
    object _31496 = NOVALUE; // 63589 31496
    object _31495 = NOVALUE; // 63588 31495
    object _31494 = NOVALUE; // 63587 31494
// skipping _31493  name type: 0
    object _31492 = NOVALUE; // 63584 31492
    object _31491 = NOVALUE; // 63583 31491
    object _31490 = NOVALUE; // 63582 31490
    object _31489 = NOVALUE; // 63581 31489
// skipping _31488  name type: 0
    object _31487 = NOVALUE; // 63578 31487
    object _31486 = NOVALUE; // 63576 31486
// skipping _31485  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Resolve_forward_references pc: 1 op: INTEGER_CHECK (96)
    // SubProg Resolve_forward_references pc: 3 op: STARTLINE (58)

    /** fwdref.e:966		sequence errors = {}*/
    // SubProg Resolve_forward_references pc: 5 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_errors_63571);
    _errors_63571 = _21936;
    // SubProg Resolve_forward_references pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 10 op: STARTLINE (58)

    /** fwdref.e:967		integer unincluded_ok = get_resolve_unincluded_globals()*/
    // SubProg Resolve_forward_references pc: 12 op: PROC (27)
    _unincluded_ok_63572 = _53get_resolve_unincluded_globals();
    // SubProg Resolve_forward_references pc: 15 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_unincluded_ok_63572)) {
        _1 = (object)(DBL_PTR(_unincluded_ok_63572)->dbl);
        DeRefDS(_unincluded_ok_63572);
        _unincluded_ok_63572 = _1;
    }
    // SubProg Resolve_forward_references pc: 17 op: STARTLINE (58)

    /** fwdref.e:969		if length( active_references ) < length( known_files ) then*/
    // SubProg Resolve_forward_references pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_references_62124)){
            _31486 = SEQ_PTR(_37active_references_62124)->length;
    }
    else {
        _31486 = 1;
    }
    // SubProg Resolve_forward_references pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 26 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _31487 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _31487 = 1;
    }
    // SubProg Resolve_forward_references pc: 29 op: LESS_IFW_I (119)
    if (_31486 >= _31487)
    goto L1; // [29] 86
    // SubProg Resolve_forward_references pc: 33 op: STARTLINE (58)

    /** fwdref.e:970			active_references &= repeat( {}, length( known_files ) - length( active_references ) )*/
    // SubProg Resolve_forward_references pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 39 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _31489 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _31489 = 1;
    }
    // SubProg Resolve_forward_references pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 44 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_references_62124)){
            _31490 = SEQ_PTR(_37active_references_62124)->length;
    }
    else {
        _31490 = 1;
    }
    // SubProg Resolve_forward_references pc: 47 op: MINUS (10)
    _31491 = _31489 - _31490;
    _31489 = NOVALUE;
    _31490 = NOVALUE;
    // SubProg Resolve_forward_references pc: 51 op: REPEAT (32)
    _31492 = Repeat(_21936, _31491);
    _31491 = NOVALUE;
    // SubProg Resolve_forward_references pc: 55 op: CONCAT (15)
    Concat((object_ptr)&_37active_references_62124, _37active_references_62124, _31492);
    DeRefDS(_31492);
    _31492 = NOVALUE;
    // SubProg Resolve_forward_references pc: 59 op: STARTLINE (58)

    /** fwdref.e:971			active_subprogs   &= repeat( {}, length( known_files ) - length( active_subprogs ) )*/
    // SubProg Resolve_forward_references pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _31494 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _31494 = 1;
    }
    // SubProg Resolve_forward_references pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_subprogs_62123)){
            _31495 = SEQ_PTR(_37active_subprogs_62123)->length;
    }
    else {
        _31495 = 1;
    }
    // SubProg Resolve_forward_references pc: 73 op: MINUS (10)
    _31496 = _31494 - _31495;
    _31494 = NOVALUE;
    _31495 = NOVALUE;
    // SubProg Resolve_forward_references pc: 77 op: REPEAT (32)
    _31497 = Repeat(_21936, _31496);
    _31496 = NOVALUE;
    // SubProg Resolve_forward_references pc: 81 op: CONCAT (15)
    Concat((object_ptr)&_37active_subprogs_62123, _37active_subprogs_62123, _31497);
    DeRefDS(_31497);
    _31497 = NOVALUE;
    // SubProg Resolve_forward_references pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 63568 op: 159
    // SubProg Resolve_forward_references pc: 86 op: STARTLINE (58)

    /** fwdref.e:974		if length( toplevel_references ) < length( known_files ) then*/
    // SubProg Resolve_forward_references pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_37toplevel_references_62125)){
            _31499 = SEQ_PTR(_37toplevel_references_62125)->length;
    }
    else {
        _31499 = 1;
    }
    // SubProg Resolve_forward_references pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _31500 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _31500 = 1;
    }
    // SubProg Resolve_forward_references pc: 98 op: LESS_IFW_I (119)
    if (_31499 >= _31500)
    goto L2; // [98] 129
    // SubProg Resolve_forward_references pc: 102 op: STARTLINE (58)

    /** fwdref.e:975			toplevel_references &= repeat( {}, length( known_files ) - length( toplevel_references ) )*/
    // SubProg Resolve_forward_references pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 108 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _31502 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _31502 = 1;
    }
    // SubProg Resolve_forward_references pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_37toplevel_references_62125)){
            _31503 = SEQ_PTR(_37toplevel_references_62125)->length;
    }
    else {
        _31503 = 1;
    }
    // SubProg Resolve_forward_references pc: 116 op: MINUS (10)
    _31504 = _31502 - _31503;
    _31502 = NOVALUE;
    _31503 = NOVALUE;
    // SubProg Resolve_forward_references pc: 120 op: REPEAT (32)
    _31505 = Repeat(_21936, _31504);
    _31504 = NOVALUE;
    // SubProg Resolve_forward_references pc: 124 op: CONCAT (15)
    Concat((object_ptr)&_37toplevel_references_62125, _37toplevel_references_62125, _31505);
    DeRefDS(_31505);
    _31505 = NOVALUE;
    // SubProg Resolve_forward_references pc: 128 op: NOP1 (159)
L2: // addr: 129 pc: 128 sub: 63568 op: 159
    // SubProg Resolve_forward_references pc: 129 op: STARTLINE (58)

    /** fwdref.e:978		for i = 1 to length( active_subprogs ) do*/
    // SubProg Resolve_forward_references pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 133 op: LENGTH (42)
    if (IS_SEQUENCE(_37active_subprogs_62123)){
            _31507 = SEQ_PTR(_37active_subprogs_62123)->length;
    }
    else {
        _31507 = 1;
    }
    // SubProg Resolve_forward_references pc: 136 op: FOR_I (125)
    {
        object _i_63604;
        _i_63604 = 1;
L3: // addr: 143 pc: 136 sub: 63568 op: 125
        if (_i_63604 > _31507){
            goto L4; // [136] 280
        }
        // SubProg Resolve_forward_references pc: 143 op: STARTLINE (58)

        /** fwdref.e:979			if (length( active_subprogs[i] ) or length(toplevel_references[i])) */
        // SubProg Resolve_forward_references pc: 145 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 147 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37active_subprogs_62123);
        _31508 = (object)*(((s1_ptr)_2)->base + _i_63604);
        // SubProg Resolve_forward_references pc: 151 op: LENGTH (42)
        if (IS_SEQUENCE(_31508)){
                _31509 = SEQ_PTR(_31508)->length;
        }
        else {
            _31509 = 1;
        }
        _31508 = NOVALUE;
        // SubProg Resolve_forward_references pc: 154 op: SC1_OR (143)
        if (_31509 != 0) {
            _31510 = 1;
            goto L5; // [154] 171
        }
        // SubProg Resolve_forward_references pc: 158 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 160 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37toplevel_references_62125);
        _31511 = (object)*(((s1_ptr)_2)->base + _i_63604);
        // SubProg Resolve_forward_references pc: 164 op: LENGTH (42)
        if (IS_SEQUENCE(_31511)){
                _31512 = SEQ_PTR(_31511)->length;
        }
        else {
            _31512 = 1;
        }
        _31511 = NOVALUE;
        // SubProg Resolve_forward_references pc: 167 op: SC2_OR (144)
        _31510 = (_31512 != 0);
        // SubProg Resolve_forward_references pc: 170 op: NOP1 (159)
L5: // addr: 171 pc: 170 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 171 op: SC1_AND_IF (146)
        if (_31510 == 0) {
            goto L6; // [171] 273
        }
        // SubProg Resolve_forward_references pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 177 op: EQUALS (3)
        _31514 = (_i_63604 == _34current_file_no_15188);
        // SubProg Resolve_forward_references pc: 181 op: SC1_OR (143)
        if (_31514 != 0) {
            _31515 = 1;
            goto L7; // [181] 195
        }
        // SubProg Resolve_forward_references pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 187 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35finished_files_14159);
        _31516 = (object)*(((s1_ptr)_2)->base + _i_63604);
        // SubProg Resolve_forward_references pc: 191 op: SC2_OR (144)
        _31515 = (_31516 != 0);
        // SubProg Resolve_forward_references pc: 194 op: NOP1 (159)
L7: // addr: 195 pc: 194 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 195 op: SC1_OR (143)
        if (_31515 != 0) {
            DeRef(_31517);
            _31517 = 1;
            goto L8; // [195] 203
        }
        // SubProg Resolve_forward_references pc: 199 op: SC2_OR (144)
        _31517 = (_unincluded_ok_63572 != 0);
        // SubProg Resolve_forward_references pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 203 op: NOP1 (159)
        // SubProg Resolve_forward_references pc: 204 op: IF (20)
        if (_31517 == 0)
        {
            _31517 = NOVALUE;
            goto L6; // [204] 273
        }
        else{
            _31517 = NOVALUE;
        }
        // SubProg Resolve_forward_references pc: 207 op: STARTLINE (58)

        /** fwdref.e:982				for j = length( active_references[i] ) to 1 by -1 do*/
        // SubProg Resolve_forward_references pc: 209 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 211 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37active_references_62124);
        _31518 = (object)*(((s1_ptr)_2)->base + _i_63604);
        // SubProg Resolve_forward_references pc: 215 op: LENGTH (42)
        if (IS_SEQUENCE(_31518)){
                _31519 = SEQ_PTR(_31518)->length;
        }
        else {
            _31519 = 1;
        }
        _31518 = NOVALUE;
        // SubProg Resolve_forward_references pc: 218 op: FOR_I (125)
        {
            object _j_63620;
            _j_63620 = _31519;
L9: // addr: 225 pc: 218 sub: 63568 op: 125
            if (_j_63620 < 1){
                goto LA; // [218] 254
            }
            // SubProg Resolve_forward_references pc: 225 op: STARTLINE (58)

            /** fwdref.e:983					errors &= resolve_file( active_references[i][j], report_errors, unincluded_ok )*/
            // SubProg Resolve_forward_references pc: 227 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_37active_references_62124);
            _31520 = (object)*(((s1_ptr)_2)->base + _i_63604);
            // SubProg Resolve_forward_references pc: 233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31520);
            _31521 = (object)*(((s1_ptr)_2)->base + _j_63620);
            _31520 = NOVALUE;
            // SubProg Resolve_forward_references pc: 237 op: PROC (27)
            Ref(_31521);
            _31522 = _37resolve_file(_31521, _report_errors_63570, _unincluded_ok_63572);
            _31521 = NOVALUE;
            // SubProg Resolve_forward_references pc: 243 op: CONCAT (15)
            if (IS_SEQUENCE(_errors_63571) && IS_ATOM(_31522)) {
                Ref(_31522);
                Append(&_errors_63571, _errors_63571, _31522);
            }
            else if (IS_ATOM(_errors_63571) && IS_SEQUENCE(_31522)) {
            }
            else {
                Concat((object_ptr)&_errors_63571, _errors_63571, _31522);
            }
            DeRef(_31522);
            _31522 = NOVALUE;
            // SubProg Resolve_forward_references pc: 247 op: STARTLINE (58)

            /** fwdref.e:984				end for*/
            // SubProg Resolve_forward_references pc: 249 op: ENDFOR_GENERAL (39)
            _j_63620 = _j_63620 + -1;
            goto L9; // [249] 225
LA: // addr: 254 pc: 249 sub: 63568 op: 39
            ;
        }
        // SubProg Resolve_forward_references pc: 254 op: STARTLINE (58)

        /** fwdref.e:985				errors &= resolve_file( toplevel_references[i], report_errors, unincluded_ok )*/
        // SubProg Resolve_forward_references pc: 256 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 258 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37toplevel_references_62125);
        _31524 = (object)*(((s1_ptr)_2)->base + _i_63604);
        // SubProg Resolve_forward_references pc: 262 op: PROC (27)
        Ref(_31524);
        _31525 = _37resolve_file(_31524, _report_errors_63570, _unincluded_ok_63572);
        _31524 = NOVALUE;
        // SubProg Resolve_forward_references pc: 268 op: CONCAT (15)
        if (IS_SEQUENCE(_errors_63571) && IS_ATOM(_31525)) {
            Ref(_31525);
            Append(&_errors_63571, _errors_63571, _31525);
        }
        else if (IS_ATOM(_errors_63571) && IS_SEQUENCE(_31525)) {
        }
        else {
            Concat((object_ptr)&_errors_63571, _errors_63571, _31525);
        }
        DeRef(_31525);
        _31525 = NOVALUE;
        // SubProg Resolve_forward_references pc: 272 op: NOP1 (159)
L6: // addr: 273 pc: 272 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 273 op: STARTLINE (58)

        /** fwdref.e:987		end for*/
        // SubProg Resolve_forward_references pc: 275 op: ENDFOR_INT_UP1 (54)
        _i_63604 = _i_63604 + 1;
        goto L3; // [275] 143
L4: // addr: 280 pc: 275 sub: 63568 op: 54
        ;
    }
    // SubProg Resolve_forward_references pc: 280 op: STARTLINE (58)

    /** fwdref.e:989		if report_errors and length( errors ) then*/
    // SubProg Resolve_forward_references pc: 282 op: SC1_AND_IF (146)
    if (_report_errors_63570 == 0) {
        goto LB; // [282] 854
    }
    // SubProg Resolve_forward_references pc: 286 op: LENGTH (42)
    if (IS_SEQUENCE(_errors_63571)){
            _31528 = SEQ_PTR(_errors_63571)->length;
    }
    else {
        _31528 = 1;
    }
    // SubProg Resolve_forward_references pc: 289 op: NOP1 (159)
    // SubProg Resolve_forward_references pc: 290 op: IF (20)
    if (_31528 == 0)
    {
        _31528 = NOVALUE;
        goto LB; // [290] 854
    }
    else{
        _31528 = NOVALUE;
    }
    // SubProg Resolve_forward_references pc: 293 op: STARTLINE (58)

    /** fwdref.e:990			sequence msg = ""*/
    // SubProg Resolve_forward_references pc: 295 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_msg_63633);
    _msg_63633 = _21936;
    // SubProg Resolve_forward_references pc: 298 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 300 op: STARTLINE (58)

    /** fwdref.e:991			sequence errloc = "Internal Error - Unknown Error Message"*/
    // SubProg Resolve_forward_references pc: 302 op: ASSIGN (18)
    RefDS(_31529);
    DeRefi(_errloc_63634);
    _errloc_63634 = _31529;
    // SubProg Resolve_forward_references pc: 305 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 307 op: STARTLINE (58)

    /** fwdref.e:993			for e = length(errors) to 1 by -1 do*/
    // SubProg Resolve_forward_references pc: 309 op: LENGTH (42)
    if (IS_SEQUENCE(_errors_63571)){
            _31530 = SEQ_PTR(_errors_63571)->length;
    }
    else {
        _31530 = 1;
    }
    // SubProg Resolve_forward_references pc: 312 op: FOR_I (125)
    {
        object _e_63637;
        _e_63637 = _31530;
LC: // addr: 319 pc: 312 sub: 63568 op: 125
        if (_e_63637 < 1){
            goto LD; // [312] 828
        }
        // SubProg Resolve_forward_references pc: 319 op: STARTLINE (58)

        /** fwdref.e:994				sequence ref = forward_references[errors[e]]*/
        // SubProg Resolve_forward_references pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 323 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_errors_63571);
        _31531 = (object)*(((s1_ptr)_2)->base + _e_63637);
        // SubProg Resolve_forward_references pc: 327 op: RHS_SUBS (25)
        DeRef(_ref_63639);
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!IS_ATOM_INT(_31531)){
            _ref_63639 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31531)->dbl));
        }
        else{
            _ref_63639 = (object)*(((s1_ptr)_2)->base + _31531);
        }
        Ref(_ref_63639);
        // SubProg Resolve_forward_references pc: 331 op: SEQUENCE_CHECK (97)
        // SubProg Resolve_forward_references pc: 333 op: STARTLINE (58)

        /** fwdref.e:995				if (ref[FR_TYPE] = TYPE_CHECK and ref[FR_OP] = TYPE_CHECK) or ref[FR_TYPE] = GLOBAL_INIT_CHECK then*/
        // SubProg Resolve_forward_references pc: 335 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63639);
        _31533 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 341 op: EQUALS (3)
        if (IS_ATOM_INT(_31533)) {
            _31534 = (_31533 == 65);
        }
        else {
            _31534 = binary_op(EQUALS, _31533, 65);
        }
        _31533 = NOVALUE;
        // SubProg Resolve_forward_references pc: 345 op: SC1_AND (141)
        if (IS_ATOM_INT(_31534)) {
            if (_31534 == 0) {
                DeRef(_31535);
                _31535 = 0;
                goto LE; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_31534)->dbl == 0.0) {
                DeRef(_31535);
                _31535 = 0;
                goto LE; // [345] 363
            }
        }
        // SubProg Resolve_forward_references pc: 349 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63639);
        _31536 = (object)*(((s1_ptr)_2)->base + 10);
        // SubProg Resolve_forward_references pc: 353 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 355 op: EQUALS (3)
        if (IS_ATOM_INT(_31536)) {
            _31537 = (_31536 == 65);
        }
        else {
            _31537 = binary_op(EQUALS, _31536, 65);
        }
        _31536 = NOVALUE;
        // SubProg Resolve_forward_references pc: 359 op: SC2_AND (142)
        DeRef(_31535);
        if (IS_ATOM_INT(_31537))
        _31535 = (_31537 != 0);
        else
        _31535 = DBL_PTR(_31537)->dbl != 0.0;
        // SubProg Resolve_forward_references pc: 362 op: NOP1 (159)
LE: // addr: 363 pc: 362 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 363 op: SC1_OR_IF (147)
        if (_31535 != 0) {
            goto LF; // [363] 382
        }
        // SubProg Resolve_forward_references pc: 367 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63639);
        _31539 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 371 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 373 op: EQUALS (3)
        if (IS_ATOM_INT(_31539)) {
            _31540 = (_31539 == 109);
        }
        else {
            _31540 = binary_op(EQUALS, _31539, 109);
        }
        _31539 = NOVALUE;
        // SubProg Resolve_forward_references pc: 377 op: NOP1 (159)
        // SubProg Resolve_forward_references pc: 378 op: IF (20)
        if (_31540 == 0) {
            DeRef(_31540);
            _31540 = NOVALUE;
            goto L10; // [378] 391
        }
        else {
            if (!IS_ATOM_INT(_31540) && DBL_PTR(_31540)->dbl == 0.0){
                DeRef(_31540);
                _31540 = NOVALUE;
                goto L10; // [378] 391
            }
            DeRef(_31540);
            _31540 = NOVALUE;
        }
        DeRef(_31540);
        _31540 = NOVALUE;
        // SubProg Resolve_forward_references pc: 381 op: NOP1 (159)
LF: // addr: 382 pc: 381 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 382 op: STARTLINE (58)

        /** fwdref.e:997					continue*/
        // SubProg Resolve_forward_references pc: 384 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ref_63639
        DeRef(_ref_63639);
        _ref_63639 = NOVALUE;
        // SubProg Resolve_forward_references pc: 386 op: ELSE (23)
        goto L11; // [386] 823
        // SubProg Resolve_forward_references pc: 388 op: ELSE (23)
        goto L12; // [388] 789
        // SubProg Resolve_forward_references pc: 390 op: NOP1 (159)
L10: // addr: 391 pc: 390 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 391 op: STARTLINE (58)

        /** fwdref.e:1001					object tok = find_reference(ref)*/
        // SubProg Resolve_forward_references pc: 393 op: PROC (27)
        RefDS(_ref_63639);
        _0 = _tok_63655;
        _tok_63655 = _37find_reference(_ref_63639);
        DeRef(_0);
        // SubProg Resolve_forward_references pc: 397 op: STARTLINE (58)

        /** fwdref.e:1002					integer THIS_SCOPE = 3*/
        // SubProg Resolve_forward_references pc: 399 op: ASSIGN_I (113)
        _THIS_SCOPE_63657 = 3;
        // SubProg Resolve_forward_references pc: 402 op: STARTLINE (58)

        /** fwdref.e:1003					integer THESE_GLOBALS = 4*/
        // SubProg Resolve_forward_references pc: 404 op: ASSIGN_I (113)
        _THESE_GLOBALS_63658 = 4;
        // SubProg Resolve_forward_references pc: 407 op: STARTLINE (58)

        /** fwdref.e:1004					if tok[T_ID] = IGNORED then*/
        // SubProg Resolve_forward_references pc: 409 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 411 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63655);
        _31542 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 417 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31542, 509)){
            _31542 = NOVALUE;
            goto L13; // [417] 760
        }
        _31542 = NOVALUE;
        // SubProg Resolve_forward_references pc: 421 op: STARTLINE (58)

        /** fwdref.e:1006						switch tok[THIS_SCOPE] do*/
        // SubProg Resolve_forward_references pc: 423 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63655);
        _31544 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg Resolve_forward_references pc: 427 op: SWITCH_I (193)
        if (IS_SEQUENCE(_31544) ){
            goto L14; // [427] 756
        }
        if(!IS_ATOM_INT(_31544)){
            if( (DBL_PTR(_31544)->dbl != (eudouble) ((object) DBL_PTR(_31544)->dbl) ) ){
                goto L14; // [427] 756
            }
            _0 = (object) DBL_PTR(_31544)->dbl;
        }
        else {
            _0 = _31544;
        };
        _31544 = NOVALUE;
        switch ( _0 ){ 
            // SubProg Resolve_forward_references pc: 432 op: STARTLINE (58)

            /** fwdref.e:1007							case SC_UNDEFINED then*/
            // SubProg Resolve_forward_references pc: 434 op: CASE (186)
            case 9:
            // SubProg Resolve_forward_references pc: 436 op: STARTLINE (58)

            /** fwdref.e:1008								if ref[FR_QUALIFIED] != -1 then*/
            // SubProg Resolve_forward_references pc: 438 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31547 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 442 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _31547, -1)){
                _31547 = NOVALUE;
                goto L15; // [442] 556
            }
            _31547 = NOVALUE;
            // SubProg Resolve_forward_references pc: 446 op: STARTLINE (58)

            /** fwdref.e:1009									if ref[FR_QUALIFIED] > 0 then*/
            // SubProg Resolve_forward_references pc: 448 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31549 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 452 op: GREATER_IFW (107)
            if (binary_op_a(LESSEQ, _31549, 0)){
                _31549 = NOVALUE;
                goto L16; // [452] 517
            }
            _31549 = NOVALUE;
            // SubProg Resolve_forward_references pc: 456 op: STARTLINE (58)

            /** fwdref.e:1011										errloc = sprintf("\t\'%s\' (%s:%d) was not declared in \'%s\'.\n", */
            // SubProg Resolve_forward_references pc: 458 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31552 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 462 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 464 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31553 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 468 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35known_files_14157);
            if (!IS_ATOM_INT(_31553)){
                _31554 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31553)->dbl));
            }
            else{
                _31554 = (object)*(((s1_ptr)_2)->base + _31553);
            }
            // SubProg Resolve_forward_references pc: 472 op: PROC (27)
            Ref(_31554);
            RefDS(_21936);
            _31555 = _18abbreviate_path(_31554, _21936);
            _31554 = NOVALUE;
            // SubProg Resolve_forward_references pc: 477 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31556 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 481 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 483 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31557 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 487 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35known_files_14157);
            if (!IS_ATOM_INT(_31557)){
                _31558 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31557)->dbl));
            }
            else{
                _31558 = (object)*(((s1_ptr)_2)->base + _31557);
            }
            // SubProg Resolve_forward_references pc: 491 op: PROC (27)
            Ref(_31558);
            RefDS(_21936);
            _31559 = _18abbreviate_path(_31558, _21936);
            _31558 = NOVALUE;
            // SubProg Resolve_forward_references pc: 496 op: PROC (27)
            _31561 = _17find_replace(92, _31559, 47, 0);
            _31559 = NOVALUE;
            // SubProg Resolve_forward_references pc: 503 op: RIGHT_BRACE_N (31)
            _1 = NewS1(4);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31552);
            ((intptr_t*)_2)[1] = _31552;
            ((intptr_t*)_2)[2] = _31555;
            Ref(_31556);
            ((intptr_t*)_2)[3] = _31556;
            ((intptr_t*)_2)[4] = _31561;
            _31562 = MAKE_SEQ(_1);
            _31561 = NOVALUE;
            _31556 = NOVALUE;
            _31555 = NOVALUE;
            _31552 = NOVALUE;
            // SubProg Resolve_forward_references pc: 510 op: SPRINTF (53)
            DeRefi(_errloc_63634);
            _errloc_63634 = EPrintf(-9999999, _31551, _31562);
            DeRefDS(_31562);
            _31562 = NOVALUE;
            // SubProg Resolve_forward_references pc: 514 op: ELSE (23)
            goto L17; // [514] 759
            // SubProg Resolve_forward_references pc: 516 op: NOP1 (159)
L16: // addr: 517 pc: 516 sub: 63568 op: 159
            // SubProg Resolve_forward_references pc: 517 op: STARTLINE (58)

            /** fwdref.e:1016										errloc = sprintf("\t\'%s\' (%s:%d) is not a builtin.\n", */
            // SubProg Resolve_forward_references pc: 519 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31565 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 523 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 525 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31566 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 529 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35known_files_14157);
            if (!IS_ATOM_INT(_31566)){
                _31567 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31566)->dbl));
            }
            else{
                _31567 = (object)*(((s1_ptr)_2)->base + _31566);
            }
            // SubProg Resolve_forward_references pc: 533 op: PROC (27)
            Ref(_31567);
            RefDS(_21936);
            _31568 = _18abbreviate_path(_31567, _21936);
            _31567 = NOVALUE;
            // SubProg Resolve_forward_references pc: 538 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31569 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 542 op: RIGHT_BRACE_N (31)
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
            // SubProg Resolve_forward_references pc: 548 op: SPRINTF (53)
            DeRefi(_errloc_63634);
            _errloc_63634 = EPrintf(-9999999, _31564, _31570);
            DeRefDS(_31570);
            _31570 = NOVALUE;
            // SubProg Resolve_forward_references pc: 552 op: NOP1 (159)
            // SubProg Resolve_forward_references pc: 553 op: ELSE (23)
            goto L17; // [553] 759
            // SubProg Resolve_forward_references pc: 555 op: NOP1 (159)
L15: // addr: 556 pc: 555 sub: 63568 op: 159
            // SubProg Resolve_forward_references pc: 556 op: STARTLINE (58)

            /** fwdref.e:1021									errloc = sprintf("\t\'%s\' (%s:%d) has not been declared.\n", */
            // SubProg Resolve_forward_references pc: 558 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31573 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 562 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 564 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31574 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 568 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35known_files_14157);
            if (!IS_ATOM_INT(_31574)){
                _31575 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31574)->dbl));
            }
            else{
                _31575 = (object)*(((s1_ptr)_2)->base + _31574);
            }
            // SubProg Resolve_forward_references pc: 572 op: PROC (27)
            Ref(_31575);
            RefDS(_21936);
            _31576 = _18abbreviate_path(_31575, _21936);
            _31575 = NOVALUE;
            // SubProg Resolve_forward_references pc: 577 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31577 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 581 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31573);
            ((intptr_t*)_2)[1] = _31573;
            ((intptr_t*)_2)[2] = _31576;
            Ref(_31577);
            ((intptr_t*)_2)[3] = _31577;
            _31578 = MAKE_SEQ(_1);
            _31577 = NOVALUE;
            _31576 = NOVALUE;
            _31573 = NOVALUE;
            // SubProg Resolve_forward_references pc: 587 op: SPRINTF (53)
            DeRefi(_errloc_63634);
            _errloc_63634 = EPrintf(-9999999, _31572, _31578);
            DeRefDS(_31578);
            _31578 = NOVALUE;
            // SubProg Resolve_forward_references pc: 591 op: NOP1 (159)
            // SubProg Resolve_forward_references pc: 592 op: ELSE (23)
            goto L17; // [592] 759
            // SubProg Resolve_forward_references pc: 594 op: STARTLINE (58)

            /** fwdref.e:1024							case SC_MULTIPLY_DEFINED then*/
            // SubProg Resolve_forward_references pc: 596 op: CASE (186)
            case 10:
            // SubProg Resolve_forward_references pc: 598 op: STARTLINE (58)

            /** fwdref.e:1025								sequence syms = tok[THESE_GLOBALS] -- there should be no forward references in here.*/
            // SubProg Resolve_forward_references pc: 600 op: RHS_SUBS_CHECK (92)
            DeRef(_syms_63717);
            _2 = (object)SEQ_PTR(_tok_63655);
            _syms_63717 = (object)*(((s1_ptr)_2)->base + _THESE_GLOBALS_63658);
            Ref(_syms_63717);
            // SubProg Resolve_forward_references pc: 604 op: SEQUENCE_CHECK (97)
            // SubProg Resolve_forward_references pc: 606 op: STARTLINE (58)

            /** fwdref.e:1026								syms = custom_sort(routine_id("file_name_based_symindex_compare"), syms,, ASCENDING)*/
            // SubProg Resolve_forward_references pc: 608 op: ROUTINE_ID (134)
            _31582 = CRoutineId(1389, 37, _31581);
            // SubProg Resolve_forward_references pc: 613 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 615 op: PROC (27)
            RefDS(_syms_63717);
            RefDS(_21936);
            _0 = _syms_63717;
            _syms_63717 = _24custom_sort(_31582, _syms_63717, _21936, 1);
            DeRefDS(_0);
            _31582 = NOVALUE;
            // SubProg Resolve_forward_references pc: 622 op: SEQUENCE_CHECK (97)
            // SubProg Resolve_forward_references pc: 624 op: STARTLINE (58)

            /** fwdref.e:1027								errloc = sprintf("\t\'%s\' (%s:%d) has been declared more than once.\n", */
            // SubProg Resolve_forward_references pc: 626 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31585 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 630 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 632 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31586 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 636 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35known_files_14157);
            if (!IS_ATOM_INT(_31586)){
                _31587 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31586)->dbl));
            }
            else{
                _31587 = (object)*(((s1_ptr)_2)->base + _31586);
            }
            // SubProg Resolve_forward_references pc: 640 op: PROC (27)
            Ref(_31587);
            RefDS(_21936);
            _31588 = _18abbreviate_path(_31587, _21936);
            _31587 = NOVALUE;
            // SubProg Resolve_forward_references pc: 645 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63639);
            _31589 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 649 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31585);
            ((intptr_t*)_2)[1] = _31585;
            ((intptr_t*)_2)[2] = _31588;
            Ref(_31589);
            ((intptr_t*)_2)[3] = _31589;
            _31590 = MAKE_SEQ(_1);
            _31589 = NOVALUE;
            _31588 = NOVALUE;
            _31585 = NOVALUE;
            // SubProg Resolve_forward_references pc: 655 op: SPRINTF (53)
            DeRefi(_errloc_63634);
            _errloc_63634 = EPrintf(-9999999, _31584, _31590);
            DeRefDS(_31590);
            _31590 = NOVALUE;
            // SubProg Resolve_forward_references pc: 659 op: STARTLINE (58)

            /** fwdref.e:1029								for si = 1 to length(syms) do*/
            // SubProg Resolve_forward_references pc: 661 op: LENGTH (42)
            if (IS_SEQUENCE(_syms_63717)){
                    _31592 = SEQ_PTR(_syms_63717)->length;
            }
            else {
                _31592 = 1;
            }
            // SubProg Resolve_forward_references pc: 664 op: FOR_I (125)
            {
                object _si_63735;
                _si_63735 = 1;
L18: // addr: 671 pc: 664 sub: 63568 op: 125
                if (_si_63735 > _31592){
                    goto L19; // [664] 750
                }
                // SubProg Resolve_forward_references pc: 671 op: STARTLINE (58)

                /** fwdref.e:1030									symtab_index s = syms[si] */
                // SubProg Resolve_forward_references pc: 673 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_syms_63717);
                _s_63738 = (object)*(((s1_ptr)_2)->base + _si_63735);
                if (!IS_ATOM_INT(_s_63738)){
                    _s_63738 = (object)DBL_PTR(_s_63738)->dbl;
                }
                // SubProg Resolve_forward_references pc: 679 op: STARTLINE (58)

                /** fwdref.e:1031									if equal(ref[FR_NAME], sym_name(s)) then*/
                // SubProg Resolve_forward_references pc: 681 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_ref_63639);
                _31594 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg Resolve_forward_references pc: 685 op: PROC (27)
                _31595 = _53sym_name(_s_63738);
                // SubProg Resolve_forward_references pc: 689 op: EQUAL (153)
                if (_31594 == _31595)
                _31596 = 1;
                else if (IS_ATOM_INT(_31594) && IS_ATOM_INT(_31595))
                _31596 = 0;
                else
                _31596 = (compare(_31594, _31595) == 0);
                _31594 = NOVALUE;
                DeRef(_31595);
                _31595 = NOVALUE;
                // SubProg Resolve_forward_references pc: 693 op: IF (20)
                if (_31596 == 0)
                {
                    _31596 = NOVALUE;
                    goto L1A; // [693] 741
                }
                else{
                    _31596 = NOVALUE;
                }
                // SubProg Resolve_forward_references pc: 696 op: STARTLINE (58)

                /** fwdref.e:1032										errloc &= sprintf("\t\tin %s\n", */
                // SubProg Resolve_forward_references pc: 698 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 700 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 702 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_35SymTab_14156);
                _31598 = (object)*(((s1_ptr)_2)->base + _s_63738);
                // SubProg Resolve_forward_references pc: 706 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 708 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_31598);
                if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
                    _31599 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
                }
                else{
                    _31599 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
                }
                _31598 = NOVALUE;
                // SubProg Resolve_forward_references pc: 712 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_35known_files_14157);
                if (!IS_ATOM_INT(_31599)){
                    _31600 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31599)->dbl));
                }
                else{
                    _31600 = (object)*(((s1_ptr)_2)->base + _31599);
                }
                // SubProg Resolve_forward_references pc: 716 op: PROC (27)
                Ref(_31600);
                RefDS(_21936);
                _31601 = _18abbreviate_path(_31600, _21936);
                _31600 = NOVALUE;
                // SubProg Resolve_forward_references pc: 721 op: PROC (27)
                _31602 = _17find_replace(92, _31601, 47, 0);
                _31601 = NOVALUE;
                // SubProg Resolve_forward_references pc: 728 op: RIGHT_BRACE_N (31)
                _1 = NewS1(1);
                _2 = (object)((s1_ptr)_1)->base;
                ((intptr_t*)_2)[1] = _31602;
                _31603 = MAKE_SEQ(_1);
                _31602 = NOVALUE;
                // SubProg Resolve_forward_references pc: 732 op: SPRINTF (53)
                _31604 = EPrintf(-9999999, _31597, _31603);
                DeRefDS(_31603);
                _31603 = NOVALUE;
                // SubProg Resolve_forward_references pc: 736 op: CONCAT (15)
                Concat((object_ptr)&_errloc_63634, _errloc_63634, _31604);
                DeRefDS(_31604);
                _31604 = NOVALUE;
                // SubProg Resolve_forward_references pc: 740 op: NOP1 (159)
L1A: // addr: 741 pc: 740 sub: 63568 op: 159
                // SubProg Resolve_forward_references pc: 741 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var s_63738
                // SubProg Resolve_forward_references pc: 743 op: STARTLINE (58)

                /** fwdref.e:1035								end for*/
                // SubProg Resolve_forward_references pc: 745 op: ENDFOR_INT_UP1 (54)
                _si_63735 = _si_63735 + 1;
                goto L18; // [745] 671
L19: // addr: 750 pc: 745 sub: 63568 op: 54
                ;
            }
            // SubProg Resolve_forward_references pc: 750 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var syms_63717
            DeRef(_syms_63717);
            _syms_63717 = NOVALUE;
            // SubProg Resolve_forward_references pc: 752 op: ELSE (23)
            goto L17; // [752] 759
            // SubProg Resolve_forward_references pc: 754 op: STARTLINE (58)

            /** fwdref.e:1036							case else */
            // SubProg Resolve_forward_references pc: 756 op: CASE (186)
            default:
L14: // addr: 756 pc: 756 sub: 63568 op: 186
            // SubProg Resolve_forward_references pc: 758 op: NOPSWITCH (187)
        ;}L17: // addr: 759 pc: 758 sub: 63568 op: 187
        // SubProg Resolve_forward_references pc: 759 op: NOP1 (159)
L13: // addr: 760 pc: 759 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 760 op: STARTLINE (58)

        /** fwdref.e:1040					if not match(errloc, msg) then*/
        // SubProg Resolve_forward_references pc: 762 op: MATCH_FROM (177)
        _31606 = e_match_from(_errloc_63634, _msg_63633, 1);
        // SubProg Resolve_forward_references pc: 767 op: NOT_IFW (108)
        if (_31606 != 0)
        goto L1B; // [767] 786
        _31606 = NOVALUE;
        // SubProg Resolve_forward_references pc: 770 op: STARTLINE (58)

        /** fwdref.e:1041						msg &= errloc*/
        // SubProg Resolve_forward_references pc: 772 op: CONCAT (15)
        Concat((object_ptr)&_msg_63633, _msg_63633, _errloc_63634);
        // SubProg Resolve_forward_references pc: 776 op: STARTLINE (58)

        /** fwdref.e:1042						prep_forward_error( errors[e] )*/
        // SubProg Resolve_forward_references pc: 778 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_errors_63571);
        _31609 = (object)*(((s1_ptr)_2)->base + _e_63637);
        // SubProg Resolve_forward_references pc: 782 op: PROC (27)
        Ref(_31609);
        _37prep_forward_error(_31609);
        _31609 = NOVALUE;
        // SubProg Resolve_forward_references pc: 785 op: NOP1 (159)
L1B: // addr: 786 pc: 785 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 786 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tok_63655
        DeRef(_tok_63655);
        _tok_63655 = NOVALUE;

// block var THIS_SCOPE_63657

// block var THESE_GLOBALS_63658
        // SubProg Resolve_forward_references pc: 788 op: NOP1 (159)
L12: // addr: 789 pc: 788 sub: 63568 op: 159
        // SubProg Resolve_forward_references pc: 789 op: STARTLINE (58)

        /** fwdref.e:1045				ThisLine    = ref[FR_THISLINE]*/
        // SubProg Resolve_forward_references pc: 791 op: RHS_SUBS (25)
        DeRef(_49ThisLine_48709);
        _2 = (object)SEQ_PTR(_ref_63639);
        _49ThisLine_48709 = (object)*(((s1_ptr)_2)->base + 7);
        Ref(_49ThisLine_48709);
        // SubProg Resolve_forward_references pc: 795 op: STARTLINE (58)

        /** fwdref.e:1046				bp          = ref[FR_BP]*/
        // SubProg Resolve_forward_references pc: 797 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63639);
        _49bp_48713 = (object)*(((s1_ptr)_2)->base + 8);
        if (!IS_ATOM_INT(_49bp_48713)){
            _49bp_48713 = (object)DBL_PTR(_49bp_48713)->dbl;
        }
        // SubProg Resolve_forward_references pc: 803 op: STARTLINE (58)

        /** fwdref.e:1047				CurrentSub  = ref[FR_SUBPROG]*/
        // SubProg Resolve_forward_references pc: 805 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63639);
        _34CurrentSub_15196 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_34CurrentSub_15196)){
            _34CurrentSub_15196 = (object)DBL_PTR(_34CurrentSub_15196)->dbl;
        }
        // SubProg Resolve_forward_references pc: 811 op: STARTLINE (58)

        /** fwdref.e:1048				line_number = ref[FR_LINE]*/
        // SubProg Resolve_forward_references pc: 813 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63639);
        _34line_number_15189 = (object)*(((s1_ptr)_2)->base + 6);
        if (!IS_ATOM_INT(_34line_number_15189)){
            _34line_number_15189 = (object)DBL_PTR(_34line_number_15189)->dbl;
        }
        // SubProg Resolve_forward_references pc: 819 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ref_63639
        DeRefDS(_ref_63639);
        _ref_63639 = NOVALUE;
        // SubProg Resolve_forward_references pc: 821 op: STARTLINE (58)

        /** fwdref.e:1049			end for*/
        // SubProg Resolve_forward_references pc: 823 op: ENDFOR_GENERAL (39)
L11: // addr: 823 pc: 823 sub: 63568 op: 39
        _e_63637 = _e_63637 + -1;
        goto LC; // [823] 319
LD: // addr: 828 pc: 823 sub: 63568 op: 39
        ;
    }
    // SubProg Resolve_forward_references pc: 828 op: STARTLINE (58)

    /** fwdref.e:1050			if length(msg) > 0 then*/
    // SubProg Resolve_forward_references pc: 830 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_63633)){
            _31614 = SEQ_PTR(_msg_63633)->length;
    }
    else {
        _31614 = 1;
    }
    // SubProg Resolve_forward_references pc: 833 op: GREATER_IFW_I (124)
    if (_31614 <= 0)
    goto L1C; // [833] 849
    // SubProg Resolve_forward_references pc: 837 op: STARTLINE (58)

    /** fwdref.e:1051				CompileErr( 74, {msg} )*/
    // SubProg Resolve_forward_references pc: 839 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_msg_63633);
    ((intptr_t*)_2)[1] = _msg_63633;
    _31617 = MAKE_SEQ(_1);
    // SubProg Resolve_forward_references pc: 843 op: PROC (27)
    _49CompileErr(74, _31617, 0);
    _31617 = NOVALUE;
    // SubProg Resolve_forward_references pc: 848 op: NOP1 (159)
L1C: // addr: 849 pc: 848 sub: 63568 op: 159
    // SubProg Resolve_forward_references pc: 849 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var msg_63633
    DeRefi(_msg_63633);
    _msg_63633 = NOVALUE;

// block var errloc_63634
    DeRefi(_errloc_63634);
    _errloc_63634 = NOVALUE;
    // SubProg Resolve_forward_references pc: 851 op: ELSE (23)
    goto L1D; // [851] 899
    // SubProg Resolve_forward_references pc: 853 op: NOP1 (159)
LB: // addr: 854 pc: 853 sub: 63568 op: 159
    // SubProg Resolve_forward_references pc: 854 op: STARTLINE (58)

    /** fwdref.e:1053		elsif report_errors and not repl then*/
    // SubProg Resolve_forward_references pc: 856 op: SC1_AND_IF (146)
    if (_report_errors_63570 == 0) {
        goto L1E; // [856] 898
    }
    // SubProg Resolve_forward_references pc: 860 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 862 op: NOT (7)
    _31619 = (0 == 0);
    // SubProg Resolve_forward_references pc: 865 op: NOP1 (159)
    // SubProg Resolve_forward_references pc: 866 op: IF (20)
    if (_31619 == 0)
    {
        DeRef(_31619);
        _31619 = NOVALUE;
        goto L1E; // [866] 898
    }
    else{
        DeRef(_31619);
        _31619 = NOVALUE;
    }
    // SubProg Resolve_forward_references pc: 869 op: STARTLINE (58)

    /** fwdref.e:1055			forward_references  = {}*/
    // SubProg Resolve_forward_references pc: 871 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37forward_references_62122);
    _37forward_references_62122 = _21936;
    // SubProg Resolve_forward_references pc: 874 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 876 op: STARTLINE (58)

    /** fwdref.e:1056			active_references   = {}*/
    // SubProg Resolve_forward_references pc: 878 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37active_references_62124);
    _37active_references_62124 = _21936;
    // SubProg Resolve_forward_references pc: 881 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 883 op: STARTLINE (58)

    /** fwdref.e:1057			toplevel_references = {}*/
    // SubProg Resolve_forward_references pc: 885 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37toplevel_references_62125);
    _37toplevel_references_62125 = _21936;
    // SubProg Resolve_forward_references pc: 888 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 890 op: STARTLINE (58)

    /** fwdref.e:1058			inactive_references = {}*/
    // SubProg Resolve_forward_references pc: 892 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_37inactive_references_62126);
    _37inactive_references_62126 = _21936;
    // SubProg Resolve_forward_references pc: 895 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 897 op: NOP1 (159)
L1E: // addr: 898 pc: 897 sub: 63568 op: 159
    // SubProg Resolve_forward_references pc: 898 op: NOP1 (159)
L1D: // addr: 899 pc: 898 sub: 63568 op: 159
    // SubProg Resolve_forward_references pc: 899 op: STARTLINE (58)

    /** fwdref.e:1060		clear_last()*/
    // SubProg Resolve_forward_references pc: 901 op: PROC (27)
    _45clear_last();
    // SubProg Resolve_forward_references pc: 903 op: STARTLINE (58)

    /** fwdref.e:1061	end procedure*/
    // SubProg Resolve_forward_references pc: 905 op: RETURNP (29)

// Exiting block BLOCK: Resolve_forward_references

// block var report_errors_63570

// block var errors_63571
    DeRef(_errors_63571);

// block var unincluded_ok_63572
    _31566 = NOVALUE;
    _31531 = NOVALUE;
    DeRef(_31534);
    _31534 = NOVALUE;
    _31574 = NOVALUE;
    _31516 = NOVALUE;
    _31557 = NOVALUE;
    _31586 = NOVALUE;
    _31599 = NOVALUE;
    DeRef(_31537);
    _31537 = NOVALUE;
    _31511 = NOVALUE;
    DeRef(_31514);
    _31514 = NOVALUE;
    _31553 = NOVALUE;
    _31518 = NOVALUE;
    _31508 = NOVALUE;
    return;
    // SubProg Resolve_forward_references pc: 908 op: BADRETURNF (43)
    ;
}


void _37shift_these(object _refs_63786, object _pc_63787, object _amount_63788)
{
    object _fr_63792 = NOVALUE;
    object _31637 = NOVALUE; // 63813 31637
    object _31636 = NOVALUE; // 63812 31636
    object _31635 = NOVALUE; // 63811 31635
    object _31634 = NOVALUE; // 63810 31634
    object _31633 = NOVALUE; // 63809 31633
    object _31632 = NOVALUE; // 63808 31632
    object _31631 = NOVALUE; // 63807 31631
    object _31630 = NOVALUE; // 63805 31630
    object _31629 = NOVALUE; // 63803 31629
    object _31628 = NOVALUE; // 63802 31628
// skipping _31627  name type: 0
    object _31626 = NOVALUE; // 63800 31626
// skipping _31625  name type: 0
    object _31624 = NOVALUE; // 63797 31624
    object _31623 = NOVALUE; // 63795 31623
// skipping _31622  name type: 0
    object _31621 = NOVALUE; // 63793 31621
    object _31620 = NOVALUE; // 63791 31620
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_these pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg shift_these pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_these pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift_these pc: 7 op: STARTLINE (58)

    /** fwdref.e:1064		for i = length( refs ) to 1 by -1 do*/
    // SubProg shift_these pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63786)){
            _31620 = SEQ_PTR(_refs_63786)->length;
    }
    else {
        _31620 = 1;
    }
    // SubProg shift_these pc: 12 op: FOR_I (125)
    {
        object _i_63790;
        _i_63790 = _31620;
L1: // addr: 19 pc: 12 sub: 63784 op: 125
        if (_i_63790 < 1){
            goto L2; // [12] 147
        }
        // SubProg shift_these pc: 19 op: STARTLINE (58)

        /** fwdref.e:1065			sequence fr = forward_references[refs[i]]*/
        // SubProg shift_these pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63786);
        _31621 = (object)*(((s1_ptr)_2)->base + _i_63790);
        // SubProg shift_these pc: 27 op: RHS_SUBS (25)
        DeRef(_fr_63792);
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!IS_ATOM_INT(_31621)){
            _fr_63792 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31621)->dbl));
        }
        else{
            _fr_63792 = (object)*(((s1_ptr)_2)->base + _31621);
        }
        Ref(_fr_63792);
        // SubProg shift_these pc: 31 op: SEQUENCE_CHECK (97)
        // SubProg shift_these pc: 33 op: STARTLINE (58)

        /** fwdref.e:1066			forward_references[refs[i]] = 0*/
        // SubProg shift_these pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63786);
        _31623 = (object)*(((s1_ptr)_2)->base + _i_63790);
        // SubProg shift_these pc: 41 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37forward_references_62122 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31623))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31623)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31623);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg shift_these pc: 45 op: STARTLINE (58)

        /** fwdref.e:1067			if fr[FR_SUBPROG] = shifting_sub then*/
        // SubProg shift_these pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63792);
        _31624 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg shift_these pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 53 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31624, _37shifting_sub_62151)){
            _31624 = NOVALUE;
            goto L3; // [53] 126
        }
        _31624 = NOVALUE;
        // SubProg shift_these pc: 57 op: STARTLINE (58)

        /** fwdref.e:1068				if fr[FR_PC] >= pc then*/
        // SubProg shift_these pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63792);
        _31626 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_these pc: 63 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _31626, _pc_63787)){
            _31626 = NOVALUE;
            goto L4; // [63] 125
        }
        _31626 = NOVALUE;
        // SubProg shift_these pc: 67 op: STARTLINE (58)

        /** fwdref.e:1069					fr[FR_PC] += amount*/
        // SubProg shift_these pc: 69 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63792);
        _31628 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_these pc: 73 op: PLUS (11)
        if (IS_ATOM_INT(_31628)) {
            _31629 = _31628 + _amount_63788;
            if ((object)((uintptr_t)_31629 + (uintptr_t)HIGH_BITS) >= 0){
                _31629 = NewDouble((eudouble)_31629);
            }
        }
        else {
            _31629 = binary_op(PLUS, _31628, _amount_63788);
        }
        _31628 = NOVALUE;
        // SubProg shift_these pc: 77 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31629;
        if( _1 != _31629 ){
            DeRef(_1);
        }
        _31629 = NOVALUE;
        // SubProg shift_these pc: 81 op: STARTLINE (58)

        /** fwdref.e:1070					if fr[FR_TYPE] = CASE*/
        // SubProg shift_these pc: 83 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63792);
        _31630 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg shift_these pc: 87 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 89 op: EQUALS (3)
        if (IS_ATOM_INT(_31630)) {
            _31631 = (_31630 == 186);
        }
        else {
            _31631 = binary_op(EQUALS, _31630, 186);
        }
        _31630 = NOVALUE;
        // SubProg shift_these pc: 93 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31631)) {
            if (_31631 == 0) {
                goto L5; // [93] 124
            }
        }
        else {
            if (DBL_PTR(_31631)->dbl == 0.0) {
                goto L5; // [93] 124
            }
        }
        // SubProg shift_these pc: 97 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63792);
        _31633 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_these pc: 101 op: GREATEREQ (2)
        if (IS_ATOM_INT(_31633)) {
            _31634 = (_31633 >= _pc_63787);
        }
        else {
            _31634 = binary_op(GREATEREQ, _31633, _pc_63787);
        }
        _31633 = NOVALUE;
        // SubProg shift_these pc: 105 op: NOP1 (159)
        // SubProg shift_these pc: 106 op: IF (20)
        if (_31634 == 0) {
            DeRef(_31634);
            _31634 = NOVALUE;
            goto L5; // [106] 124
        }
        else {
            if (!IS_ATOM_INT(_31634) && DBL_PTR(_31634)->dbl == 0.0){
                DeRef(_31634);
                _31634 = NOVALUE;
                goto L5; // [106] 124
            }
            DeRef(_31634);
            _31634 = NOVALUE;
        }
        DeRef(_31634);
        _31634 = NOVALUE;
        // SubProg shift_these pc: 109 op: STARTLINE (58)

        /** fwdref.e:1073						fr[FR_DATA] += amount*/
        // SubProg shift_these pc: 111 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63792);
        _31635 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_these pc: 115 op: PLUS (11)
        if (IS_ATOM_INT(_31635)) {
            _31636 = _31635 + _amount_63788;
            if ((object)((uintptr_t)_31636 + (uintptr_t)HIGH_BITS) >= 0){
                _31636 = NewDouble((eudouble)_31636);
            }
        }
        else {
            _31636 = binary_op(PLUS, _31635, _amount_63788);
        }
        _31635 = NOVALUE;
        // SubProg shift_these pc: 119 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63792);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63792 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31636;
        if( _1 != _31636 ){
            DeRef(_1);
        }
        _31636 = NOVALUE;
        // SubProg shift_these pc: 123 op: NOP1 (159)
L5: // addr: 124 pc: 123 sub: 63784 op: 159
        // SubProg shift_these pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 63784 op: 159
        // SubProg shift_these pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 63784 op: 159
        // SubProg shift_these pc: 126 op: STARTLINE (58)

        /** fwdref.e:1077			forward_references[refs[i]] = fr*/
        // SubProg shift_these pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 130 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63786);
        _31637 = (object)*(((s1_ptr)_2)->base + _i_63790);
        // SubProg shift_these pc: 134 op: ASSIGN_SUBS (16)
        RefDS(_fr_63792);
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37forward_references_62122 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31637))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31637)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31637);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63792;
        DeRef(_1);
        // SubProg shift_these pc: 138 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fr_63792
        DeRefDS(_fr_63792);
        _fr_63792 = NOVALUE;
        // SubProg shift_these pc: 140 op: STARTLINE (58)

        /** fwdref.e:1078		end for*/
        // SubProg shift_these pc: 142 op: ENDFOR_GENERAL (39)
        _i_63790 = _i_63790 + -1;
        goto L1; // [142] 19
L2: // addr: 147 pc: 142 sub: 63784 op: 39
        ;
    }
    // SubProg shift_these pc: 147 op: STARTLINE (58)

    /** fwdref.e:1079	end procedure*/
    // SubProg shift_these pc: 149 op: RETURNP (29)

// Exiting block BLOCK: shift_these

// block var refs_63786
    DeRefDS(_refs_63786);

// block var pc_63787

// block var amount_63788
    _31637 = NOVALUE;
    DeRef(_31631);
    _31631 = NOVALUE;
    _31621 = NOVALUE;
    _31623 = NOVALUE;
    return;
    // SubProg shift_these pc: 152 op: BADRETURNF (43)
    ;
}


void _37shift_top(object _refs_63816, object _pc_63817, object _amount_63818)
{
    object _fr_63822 = NOVALUE;
    object _31653 = NOVALUE; // 63840 31653
    object _31652 = NOVALUE; // 63839 31652
    object _31651 = NOVALUE; // 63838 31651
    object _31650 = NOVALUE; // 63837 31650
    object _31649 = NOVALUE; // 63836 31649
    object _31648 = NOVALUE; // 63835 31648
    object _31647 = NOVALUE; // 63834 31647
    object _31646 = NOVALUE; // 63832 31646
    object _31645 = NOVALUE; // 63830 31645
    object _31644 = NOVALUE; // 63829 31644
// skipping _31643  name type: 0
    object _31642 = NOVALUE; // 63827 31642
    object _31641 = NOVALUE; // 63825 31641
// skipping _31640  name type: 0
    object _31639 = NOVALUE; // 63823 31639
    object _31638 = NOVALUE; // 63821 31638
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_top pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg shift_top pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_top pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift_top pc: 7 op: STARTLINE (58)

    /** fwdref.e:1083		for i = length( refs ) to 1 by -1 do*/
    // SubProg shift_top pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63816)){
            _31638 = SEQ_PTR(_refs_63816)->length;
    }
    else {
        _31638 = 1;
    }
    // SubProg shift_top pc: 12 op: FOR_I (125)
    {
        object _i_63820;
        _i_63820 = _31638;
L1: // addr: 19 pc: 12 sub: 63814 op: 125
        if (_i_63820 < 1){
            goto L2; // [12] 134
        }
        // SubProg shift_top pc: 19 op: STARTLINE (58)

        /** fwdref.e:1084			sequence fr = forward_references[refs[i]]*/
        // SubProg shift_top pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63816);
        _31639 = (object)*(((s1_ptr)_2)->base + _i_63820);
        // SubProg shift_top pc: 27 op: RHS_SUBS (25)
        DeRef(_fr_63822);
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!IS_ATOM_INT(_31639)){
            _fr_63822 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31639)->dbl));
        }
        else{
            _fr_63822 = (object)*(((s1_ptr)_2)->base + _31639);
        }
        Ref(_fr_63822);
        // SubProg shift_top pc: 31 op: SEQUENCE_CHECK (97)
        // SubProg shift_top pc: 33 op: STARTLINE (58)

        /** fwdref.e:1085			forward_references[refs[i]] = 0*/
        // SubProg shift_top pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63816);
        _31641 = (object)*(((s1_ptr)_2)->base + _i_63820);
        // SubProg shift_top pc: 41 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37forward_references_62122 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31641))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31641)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31641);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg shift_top pc: 45 op: STARTLINE (58)

        /** fwdref.e:1086			if fr[FR_PC] >= pc then*/
        // SubProg shift_top pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63822);
        _31642 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_top pc: 51 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _31642, _pc_63817)){
            _31642 = NOVALUE;
            goto L3; // [51] 113
        }
        _31642 = NOVALUE;
        // SubProg shift_top pc: 55 op: STARTLINE (58)

        /** fwdref.e:1087				fr[FR_PC] += amount*/
        // SubProg shift_top pc: 57 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63822);
        _31644 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_top pc: 61 op: PLUS (11)
        if (IS_ATOM_INT(_31644)) {
            _31645 = _31644 + _amount_63818;
            if ((object)((uintptr_t)_31645 + (uintptr_t)HIGH_BITS) >= 0){
                _31645 = NewDouble((eudouble)_31645);
            }
        }
        else {
            _31645 = binary_op(PLUS, _31644, _amount_63818);
        }
        _31644 = NOVALUE;
        // SubProg shift_top pc: 65 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63822);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63822 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31645;
        if( _1 != _31645 ){
            DeRef(_1);
        }
        _31645 = NOVALUE;
        // SubProg shift_top pc: 69 op: STARTLINE (58)

        /** fwdref.e:1088				if fr[FR_TYPE] = CASE*/
        // SubProg shift_top pc: 71 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63822);
        _31646 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg shift_top pc: 75 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 77 op: EQUALS (3)
        if (IS_ATOM_INT(_31646)) {
            _31647 = (_31646 == 186);
        }
        else {
            _31647 = binary_op(EQUALS, _31646, 186);
        }
        _31646 = NOVALUE;
        // SubProg shift_top pc: 81 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31647)) {
            if (_31647 == 0) {
                goto L4; // [81] 112
            }
        }
        else {
            if (DBL_PTR(_31647)->dbl == 0.0) {
                goto L4; // [81] 112
            }
        }
        // SubProg shift_top pc: 85 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63822);
        _31649 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_top pc: 89 op: GREATEREQ (2)
        if (IS_ATOM_INT(_31649)) {
            _31650 = (_31649 >= _pc_63817);
        }
        else {
            _31650 = binary_op(GREATEREQ, _31649, _pc_63817);
        }
        _31649 = NOVALUE;
        // SubProg shift_top pc: 93 op: NOP1 (159)
        // SubProg shift_top pc: 94 op: IF (20)
        if (_31650 == 0) {
            DeRef(_31650);
            _31650 = NOVALUE;
            goto L4; // [94] 112
        }
        else {
            if (!IS_ATOM_INT(_31650) && DBL_PTR(_31650)->dbl == 0.0){
                DeRef(_31650);
                _31650 = NOVALUE;
                goto L4; // [94] 112
            }
            DeRef(_31650);
            _31650 = NOVALUE;
        }
        DeRef(_31650);
        _31650 = NOVALUE;
        // SubProg shift_top pc: 97 op: STARTLINE (58)

        /** fwdref.e:1091					fr[FR_DATA] += amount*/
        // SubProg shift_top pc: 99 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63822);
        _31651 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_top pc: 103 op: PLUS (11)
        if (IS_ATOM_INT(_31651)) {
            _31652 = _31651 + _amount_63818;
            if ((object)((uintptr_t)_31652 + (uintptr_t)HIGH_BITS) >= 0){
                _31652 = NewDouble((eudouble)_31652);
            }
        }
        else {
            _31652 = binary_op(PLUS, _31651, _amount_63818);
        }
        _31651 = NOVALUE;
        // SubProg shift_top pc: 107 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63822);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63822 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31652;
        if( _1 != _31652 ){
            DeRef(_1);
        }
        _31652 = NOVALUE;
        // SubProg shift_top pc: 111 op: NOP1 (159)
L4: // addr: 112 pc: 111 sub: 63814 op: 159
        // SubProg shift_top pc: 112 op: NOP1 (159)
L3: // addr: 113 pc: 112 sub: 63814 op: 159
        // SubProg shift_top pc: 113 op: STARTLINE (58)

        /** fwdref.e:1094			forward_references[refs[i]] = fr*/
        // SubProg shift_top pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 117 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63816);
        _31653 = (object)*(((s1_ptr)_2)->base + _i_63820);
        // SubProg shift_top pc: 121 op: ASSIGN_SUBS (16)
        RefDS(_fr_63822);
        _2 = (object)SEQ_PTR(_37forward_references_62122);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37forward_references_62122 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31653))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31653)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31653);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63822;
        DeRef(_1);
        // SubProg shift_top pc: 125 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fr_63822
        DeRefDS(_fr_63822);
        _fr_63822 = NOVALUE;
        // SubProg shift_top pc: 127 op: STARTLINE (58)

        /** fwdref.e:1095		end for*/
        // SubProg shift_top pc: 129 op: ENDFOR_GENERAL (39)
        _i_63820 = _i_63820 + -1;
        goto L1; // [129] 19
L2: // addr: 134 pc: 129 sub: 63814 op: 39
        ;
    }
    // SubProg shift_top pc: 134 op: STARTLINE (58)

    /** fwdref.e:1096	end procedure*/
    // SubProg shift_top pc: 136 op: RETURNP (29)

// Exiting block BLOCK: shift_top

// block var refs_63816
    DeRefDS(_refs_63816);

// block var pc_63817

// block var amount_63818
    DeRef(_31647);
    _31647 = NOVALUE;
    _31639 = NOVALUE;
    _31653 = NOVALUE;
    _31641 = NOVALUE;
    return;
    // SubProg shift_top pc: 139 op: BADRETURNF (43)
    ;
}


void _37shift_fwd_refs(object _pc_63843, object _amount_63844)
{
    object _file_63855 = NOVALUE;
    object _sp_63860 = NOVALUE;
    object _31663 = NOVALUE; // 63864 31663
    object _31662 = NOVALUE; // 63863 31662
// skipping _31661  name type: 0
    object _31660 = NOVALUE; // 63861 31660
// skipping _31659  name type: 0
    object _31658 = NOVALUE; // 63857 31658
    object _31657 = NOVALUE; // 63853 31657
    object _31656 = NOVALUE; // 63852 31656
// skipping _31655  name type: 0
// skipping _31654  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_fwd_refs pc: 1 op: INTEGER_CHECK (96)
    // SubProg shift_fwd_refs pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_fwd_refs pc: 5 op: STARTLINE (58)

    /** fwdref.e:1099		if not shifting_sub then*/
    // SubProg shift_fwd_refs pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 9 op: NOT_IFW (108)
    if (_37shifting_sub_62151 != 0)
    goto L1; // [9] 18
    // SubProg shift_fwd_refs pc: 12 op: STARTLINE (58)

    /** fwdref.e:1100			return*/
    // SubProg shift_fwd_refs pc: 14 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: shift_fwd_refs

// block var pc_63843

// block var amount_63844
    return;
    // SubProg shift_fwd_refs pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 63841 op: 159
    // SubProg shift_fwd_refs pc: 18 op: STARTLINE (58)

    /** fwdref.e:1103		if shifting_sub = TopLevelSub then*/
    // SubProg shift_fwd_refs pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 24 op: EQUALS_IFW (104)
    if (_37shifting_sub_62151 != _34TopLevelSub_15195)
    goto L2; // [24] 65
    // SubProg shift_fwd_refs pc: 28 op: STARTLINE (58)

    /** fwdref.e:1104			for file = 1 to length( toplevel_references ) do*/
    // SubProg shift_fwd_refs pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_37toplevel_references_62125)){
            _31656 = SEQ_PTR(_37toplevel_references_62125)->length;
    }
    else {
        _31656 = 1;
    }
    // SubProg shift_fwd_refs pc: 35 op: FOR_I (125)
    {
        object _file_63851;
        _file_63851 = 1;
L3: // addr: 42 pc: 35 sub: 63841 op: 125
        if (_file_63851 > _31656){
            goto L4; // [35] 62
        }
        // SubProg shift_fwd_refs pc: 42 op: STARTLINE (58)

        /** fwdref.e:1105				shift_top( toplevel_references[file], pc, amount )*/
        // SubProg shift_fwd_refs pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_fwd_refs pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_37toplevel_references_62125);
        _31657 = (object)*(((s1_ptr)_2)->base + _file_63851);
        // SubProg shift_fwd_refs pc: 50 op: PROC (27)
        Ref(_31657);
        _37shift_top(_31657, _pc_63843, _amount_63844);
        _31657 = NOVALUE;
        // SubProg shift_fwd_refs pc: 55 op: STARTLINE (58)

        /** fwdref.e:1106			end for*/
        // SubProg shift_fwd_refs pc: 57 op: ENDFOR_INT_UP1 (54)
        _file_63851 = _file_63851 + 1;
        goto L3; // [57] 42
L4: // addr: 62 pc: 57 sub: 63841 op: 54
        ;
    }
    // SubProg shift_fwd_refs pc: 62 op: ELSE (23)
    goto L5; // [62] 118
    // SubProg shift_fwd_refs pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 63841 op: 159
    // SubProg shift_fwd_refs pc: 65 op: STARTLINE (58)

    /** fwdref.e:1108			integer file = SymTab[shifting_sub][S_FILE_NO]*/
    // SubProg shift_fwd_refs pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _31658 = (object)*(((s1_ptr)_2)->base + _37shifting_sub_62151);
    // SubProg shift_fwd_refs pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31658);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _file_63855 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _file_63855 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_file_63855)){
        _file_63855 = (object)DBL_PTR(_file_63855)->dbl;
    }
    _31658 = NOVALUE;
    // SubProg shift_fwd_refs pc: 83 op: STARTLINE (58)

    /** fwdref.e:1109			integer sp   = find( shifting_sub, active_subprogs[file] )*/
    // SubProg shift_fwd_refs pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_subprogs_62123);
    _31660 = (object)*(((s1_ptr)_2)->base + _file_63855);
    // SubProg shift_fwd_refs pc: 93 op: FIND_FROM (176)
    _sp_63860 = find_from(_37shifting_sub_62151, _31660, 1);
    _31660 = NOVALUE;
    // SubProg shift_fwd_refs pc: 98 op: STARTLINE (58)

    /** fwdref.e:1110			shift_these( active_references[file][sp], pc, amount )*/
    // SubProg shift_fwd_refs pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 102 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_37active_references_62124);
    _31662 = (object)*(((s1_ptr)_2)->base + _file_63855);
    // SubProg shift_fwd_refs pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31662);
    _31663 = (object)*(((s1_ptr)_2)->base + _sp_63860);
    _31662 = NOVALUE;
    // SubProg shift_fwd_refs pc: 110 op: PROC (27)
    Ref(_31663);
    _37shift_these(_31663, _pc_63843, _amount_63844);
    _31663 = NOVALUE;
    // SubProg shift_fwd_refs pc: 115 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var file_63855

// block var sp_63860
    // SubProg shift_fwd_refs pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 63841 op: 159
    // SubProg shift_fwd_refs pc: 118 op: STARTLINE (58)

    /** fwdref.e:1112	end procedure*/
    // SubProg shift_fwd_refs pc: 120 op: RETURNP (29)

// Exiting block BLOCK: shift_fwd_refs

// block var pc_63843

// block var amount_63844
    return;
    // SubProg shift_fwd_refs pc: 123 op: BADRETURNF (43)
    ;
}



// 0x027ACEBE
