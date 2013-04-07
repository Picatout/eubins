// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _39clear_fwd_refs()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_fwd_refs pc: 1 op: STARTLINE (58)

    /** fwdref.e:70		fwdref_count = 0*/
    // SubProg clear_fwd_refs pc: 3 op: ASSIGN_I (113)
    _39fwdref_count_62150 = 0;
    // SubProg clear_fwd_refs pc: 6 op: STARTLINE (58)

    /** fwdref.e:71	end procedure*/
    // SubProg clear_fwd_refs pc: 8 op: RETURNP (29)

// Exiting block BLOCK: clear_fwd_refs
    return;
    // SubProg clear_fwd_refs pc: 11 op: BADRETURNF (43)
    ;
}


object _39get_fwdref_count()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_fwdref_count pc: 1 op: STARTLINE (58)

    /** fwdref.e:74		return fwdref_count*/
    // SubProg get_fwdref_count pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_fwdref_count pc: 5 op: RETURNF (28)

// Exiting block BLOCK: get_fwdref_count
    return _39fwdref_count_62150;
    // SubProg get_fwdref_count pc: 9 op: BADRETURNF (43)
    ;
}


void _39set_glabel_block(object _ref_62157, object _block_62159)
{
    object _30818 = NOVALUE; // 62163 30818
    object _30817 = NOVALUE; // 62162 30817
// skipping _30816  name type: 0
    object _30815 = NOVALUE; // 62160 30815
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_glabel_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62157)) {
        _1 = (object)(DBL_PTR(_ref_62157)->dbl);
        DeRefDS(_ref_62157);
        _ref_62157 = _1;
    }
    // SubProg set_glabel_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_block_62159)) {
        _1 = (object)(DBL_PTR(_block_62159)->dbl);
        DeRefDS(_block_62159);
        _block_62159 = _1;
    }
    // SubProg set_glabel_block pc: 5 op: STARTLINE (58)

    /** fwdref.e:78		forward_references[ref][FR_DATA] &= block*/
    // SubProg set_glabel_block pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_glabel_block pc: 9 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62157 + ((s1_ptr)_2)->base);
    // SubProg set_glabel_block pc: 14 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _30817 = (object)*(((s1_ptr)_2)->base + 12);
    _30815 = NOVALUE;
    // SubProg set_glabel_block pc: 18 op: CONCAT (15)
    if (IS_SEQUENCE(_30817) && IS_ATOM(_block_62159)) {
        Append(&_30818, _30817, _block_62159);
    }
    else if (IS_ATOM(_30817) && IS_SEQUENCE(_block_62159)) {
    }
    else {
        Concat((object_ptr)&_30818, _30817, _block_62159);
        _30817 = NOVALUE;
    }
    _30817 = NOVALUE;
    // SubProg set_glabel_block pc: 22 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30818;
    if( _1 != _30818 ){
        DeRef(_1);
    }
    _30818 = NOVALUE;
    _30815 = NOVALUE;
    // SubProg set_glabel_block pc: 26 op: STARTLINE (58)

    /** fwdref.e:79	end procedure*/
    // SubProg set_glabel_block pc: 28 op: RETURNP (29)

// Exiting block BLOCK: set_glabel_block

// block var ref_62157

// block var block_62159
    return;
    // SubProg set_glabel_block pc: 31 op: BADRETURNF (43)
    ;
}


void _39replace_code(object _code_62171, object _start_62172, object _finish_62173, object _subprog_62174)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_code pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg replace_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg replace_code pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_finish_62173)) {
        _1 = (object)(DBL_PTR(_finish_62173)->dbl);
        DeRefDS(_finish_62173);
        _finish_62173 = _1;
    }
    // SubProg replace_code pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_62174)) {
        _1 = (object)(DBL_PTR(_subprog_62174)->dbl);
        DeRefDS(_subprog_62174);
        _subprog_62174 = _1;
    }
    // SubProg replace_code pc: 9 op: STARTLINE (58)

    /** fwdref.e:88		shifting_sub = subprog*/
    // SubProg replace_code pc: 11 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_62174;
    // SubProg replace_code pc: 14 op: STARTLINE (58)

    /** fwdref.e:89		shift:replace_code( code, start, finish )*/
    // SubProg replace_code pc: 16 op: PROC (27)
    RefDS(_code_62171);
    _66replace_code(_code_62171, _start_62172, _finish_62173);
    // SubProg replace_code pc: 21 op: STARTLINE (58)

    /** fwdref.e:90		shifting_sub = 0*/
    // SubProg replace_code pc: 23 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg replace_code pc: 26 op: STARTLINE (58)

    /** fwdref.e:91	end procedure*/
    // SubProg replace_code pc: 28 op: RETURNP (29)

// Exiting block BLOCK: replace_code

// block var code_62171
    DeRefDS(_code_62171);

// block var start_62172

// block var finish_62173

// block var subprog_62174
    return;
    // SubProg replace_code pc: 31 op: BADRETURNF (43)
    ;
}


void _39resolved_reference(object _ref_62177)
{
    object _file_62178 = NOVALUE;
    object _subprog_62181 = NOVALUE;
    object _tx_62184 = NOVALUE;
    object _ax_62185 = NOVALUE;
    object _sp_62186 = NOVALUE;
    object _r_62201 = NOVALUE;
    object _r_62219 = NOVALUE;
// skipping _30850  name type: 0
// skipping _30849  name type: 0
// skipping _30848  name type: 0
// skipping _30847  name type: 0
// skipping _30846  name type: 0
// skipping _30845  name type: 0
// skipping _30844  name type: 0
// skipping _30843  name type: 0
    object _30842 = NOVALUE; // 62212 30842
    object _30841 = NOVALUE; // 62211 30841
    object _30840 = NOVALUE; // 62210 30840
// skipping _30839  name type: 0
    object _30838 = NOVALUE; // 62207 30838
// skipping _30837  name type: 0
// skipping _30836  name type: 0
    object _30835 = NOVALUE; // 62204 30835
// skipping _30834  name type: 0
    object _30833 = NOVALUE; // 62202 30833
// skipping _30832  name type: 0
    object _30831 = NOVALUE; // 62198 30831
    object _30830 = NOVALUE; // 62197 30830
// skipping _30829  name type: 0
    object _30828 = NOVALUE; // 62195 30828
// skipping _30827  name type: 0
    object _30826 = NOVALUE; // 62192 30826
// skipping _30825  name type: 0
    object _30824 = NOVALUE; // 62189 30824
    object _30823 = NOVALUE; // 62188 30823
// skipping _30822  name type: 0
    object _30821 = NOVALUE; // 62182 30821
// skipping _30820  name type: 0
    object _30819 = NOVALUE; // 62179 30819
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg resolved_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg resolved_reference pc: 3 op: STARTLINE (58)

    /** fwdref.e:95			file    = forward_references[ref][FR_FILE],*/
    // SubProg resolved_reference pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _30819 = (object)*(((s1_ptr)_2)->base + _ref_62177);
    // SubProg resolved_reference pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30819);
    _file_62178 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_62178)){
        _file_62178 = (object)DBL_PTR(_file_62178)->dbl;
    }
    _30819 = NOVALUE;
    // SubProg resolved_reference pc: 17 op: STARTLINE (58)

    /** fwdref.e:96			subprog = forward_references[ref][FR_SUBPROG]*/
    // SubProg resolved_reference pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _30821 = (object)*(((s1_ptr)_2)->base + _ref_62177);
    // SubProg resolved_reference pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30821);
    _subprog_62181 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_subprog_62181)){
        _subprog_62181 = (object)DBL_PTR(_subprog_62181)->dbl;
    }
    _30821 = NOVALUE;
    // SubProg resolved_reference pc: 31 op: STARTLINE (58)

    /** fwdref.e:99			tx = 0,*/
    // SubProg resolved_reference pc: 33 op: ASSIGN_I (113)
    _tx_62184 = 0;
    // SubProg resolved_reference pc: 36 op: STARTLINE (58)

    /** fwdref.e:100			ax = 0,*/
    // SubProg resolved_reference pc: 38 op: ASSIGN_I (113)
    _ax_62185 = 0;
    // SubProg resolved_reference pc: 41 op: STARTLINE (58)

    /** fwdref.e:101			sp = 0*/
    // SubProg resolved_reference pc: 43 op: ASSIGN_I (113)
    _sp_62186 = 0;
    // SubProg resolved_reference pc: 46 op: STARTLINE (58)

    /** fwdref.e:103		if forward_references[ref][FR_SUBPROG] = TopLevelSub then*/
    // SubProg resolved_reference pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 50 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _30823 = (object)*(((s1_ptr)_2)->base + _ref_62177);
    // SubProg resolved_reference pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30823);
    _30824 = (object)*(((s1_ptr)_2)->base + 4);
    _30823 = NOVALUE;
    // SubProg resolved_reference pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 60 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _30824, _36TopLevelSub_16443)){
        _30824 = NOVALUE;
        goto L1; // [60] 80
    }
    _30824 = NOVALUE;
    // SubProg resolved_reference pc: 64 op: STARTLINE (58)

    /** fwdref.e:104			tx = find( ref, toplevel_references[file] )*/
    // SubProg resolved_reference pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 68 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    _30826 = (object)*(((s1_ptr)_2)->base + _file_62178);
    // SubProg resolved_reference pc: 72 op: FIND_FROM (176)
    _tx_62184 = find_from(_ref_62177, _30826, 1);
    _30826 = NOVALUE;
    // SubProg resolved_reference pc: 77 op: ELSE (23)
    goto L2; // [77] 111
    // SubProg resolved_reference pc: 79 op: NOP1 (159)
L1: // addr: 80 pc: 79 sub: 62175 op: 159
    // SubProg resolved_reference pc: 80 op: STARTLINE (58)

    /** fwdref.e:106			sp = find( subprog, active_subprogs[file] )*/
    // SubProg resolved_reference pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 84 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _30828 = (object)*(((s1_ptr)_2)->base + _file_62178);
    // SubProg resolved_reference pc: 88 op: FIND_FROM (176)
    _sp_62186 = find_from(_subprog_62181, _30828, 1);
    _30828 = NOVALUE;
    // SubProg resolved_reference pc: 93 op: STARTLINE (58)

    /** fwdref.e:107			ax = find( ref, active_references[file][sp] )*/
    // SubProg resolved_reference pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _30830 = (object)*(((s1_ptr)_2)->base + _file_62178);
    // SubProg resolved_reference pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30830);
    _30831 = (object)*(((s1_ptr)_2)->base + _sp_62186);
    _30830 = NOVALUE;
    // SubProg resolved_reference pc: 105 op: FIND_FROM (176)
    _ax_62185 = find_from(_ref_62177, _30831, 1);
    _30831 = NOVALUE;
    // SubProg resolved_reference pc: 110 op: NOP1 (159)
L2: // addr: 111 pc: 110 sub: 62175 op: 159
    // SubProg resolved_reference pc: 111 op: STARTLINE (58)

    /** fwdref.e:110		if ax then*/
    // SubProg resolved_reference pc: 113 op: IF (20)
    if (_ax_62185 == 0)
    {
        goto L3; // [113] 253
    }
    else{
    }
    // SubProg resolved_reference pc: 116 op: STARTLINE (58)

    /** fwdref.e:111			sequence r = active_references[file][sp] */
    // SubProg resolved_reference pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _30833 = (object)*(((s1_ptr)_2)->base + _file_62178);
    // SubProg resolved_reference pc: 124 op: RHS_SUBS_CHECK (92)
    DeRef(_r_62201);
    _2 = (object)SEQ_PTR(_30833);
    _r_62201 = (object)*(((s1_ptr)_2)->base + _sp_62186);
    Ref(_r_62201);
    _30833 = NOVALUE;
    // SubProg resolved_reference pc: 128 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 130 op: STARTLINE (58)

    /** fwdref.e:112			active_references[file][sp] = 0*/
    // SubProg resolved_reference pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 134 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62178 + ((s1_ptr)_2)->base);
    // SubProg resolved_reference pc: 139 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62186);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30835 = NOVALUE;
    // SubProg resolved_reference pc: 143 op: STARTLINE (58)

    /** fwdref.e:113			r = remove( r, ax )*/
    // SubProg resolved_reference pc: 145 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62201);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ax_62185)) ? _ax_62185 : (object)(DBL_PTR(_ax_62185)->dbl);
        int stop = (IS_ATOM_INT(_ax_62185)) ? _ax_62185 : (object)(DBL_PTR(_ax_62185)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62201), start, &_r_62201 );
            }
            else Tail(SEQ_PTR(_r_62201), stop+1, &_r_62201);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62201), start, &_r_62201);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62201 = Remove_elements(start, stop, (SEQ_PTR(_r_62201)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 150 op: STARTLINE (58)

    /** fwdref.e:114			active_references[file][sp] = r*/
    // SubProg resolved_reference pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 154 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62178 + ((s1_ptr)_2)->base);
    // SubProg resolved_reference pc: 159 op: PASSIGN_SUBS (162)
    RefDS(_r_62201);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62186);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62201;
    DeRef(_1);
    _30838 = NOVALUE;
    // SubProg resolved_reference pc: 163 op: STARTLINE (58)

    /** fwdref.e:116			if not length( active_references[file][sp] ) then*/
    // SubProg resolved_reference pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _30840 = (object)*(((s1_ptr)_2)->base + _file_62178);
    // SubProg resolved_reference pc: 171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30840);
    _30841 = (object)*(((s1_ptr)_2)->base + _sp_62186);
    _30840 = NOVALUE;
    // SubProg resolved_reference pc: 175 op: LENGTH (42)
    if (IS_SEQUENCE(_30841)){
            _30842 = SEQ_PTR(_30841)->length;
    }
    else {
        _30842 = 1;
    }
    _30841 = NOVALUE;
    // SubProg resolved_reference pc: 178 op: NOT_IFW (108)
    if (_30842 != 0)
    goto L4; // [178] 248
    _30842 = NOVALUE;
    // SubProg resolved_reference pc: 181 op: STARTLINE (58)

    /** fwdref.e:117				r = active_references[file]*/
    // SubProg resolved_reference pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 185 op: RHS_SUBS (25)
    DeRefDS(_r_62201);
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _r_62201 = (object)*(((s1_ptr)_2)->base + _file_62178);
    Ref(_r_62201);
    // SubProg resolved_reference pc: 189 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 191 op: STARTLINE (58)

    /** fwdref.e:118				active_references[file] = 0*/
    // SubProg resolved_reference pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 195 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_references_62122 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 199 op: STARTLINE (58)

    /** fwdref.e:119				r = remove( r, sp )*/
    // SubProg resolved_reference pc: 201 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62201);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62186)) ? _sp_62186 : (object)(DBL_PTR(_sp_62186)->dbl);
        int stop = (IS_ATOM_INT(_sp_62186)) ? _sp_62186 : (object)(DBL_PTR(_sp_62186)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62201), start, &_r_62201 );
            }
            else Tail(SEQ_PTR(_r_62201), stop+1, &_r_62201);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62201), start, &_r_62201);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62201 = Remove_elements(start, stop, (SEQ_PTR(_r_62201)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 206 op: STARTLINE (58)

    /** fwdref.e:120				active_references[file] = r*/
    // SubProg resolved_reference pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 210 op: ASSIGN_SUBS (16)
    RefDS(_r_62201);
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_references_62122 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62201;
    DeRef(_1);
    // SubProg resolved_reference pc: 214 op: STARTLINE (58)

    /** fwdref.e:122				r = active_subprogs[file]*/
    // SubProg resolved_reference pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 218 op: RHS_SUBS (25)
    DeRefDS(_r_62201);
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _r_62201 = (object)*(((s1_ptr)_2)->base + _file_62178);
    Ref(_r_62201);
    // SubProg resolved_reference pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 224 op: STARTLINE (58)

    /** fwdref.e:123				active_subprogs[file] = 0*/
    // SubProg resolved_reference pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 228 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_subprogs_62121 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 232 op: STARTLINE (58)

    /** fwdref.e:124				r = remove( r,   sp )*/
    // SubProg resolved_reference pc: 234 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62201);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62186)) ? _sp_62186 : (object)(DBL_PTR(_sp_62186)->dbl);
        int stop = (IS_ATOM_INT(_sp_62186)) ? _sp_62186 : (object)(DBL_PTR(_sp_62186)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62201), start, &_r_62201 );
            }
            else Tail(SEQ_PTR(_r_62201), stop+1, &_r_62201);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62201), start, &_r_62201);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62201 = Remove_elements(start, stop, (SEQ_PTR(_r_62201)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 239 op: STARTLINE (58)

    /** fwdref.e:125				active_subprogs[file] = r*/
    // SubProg resolved_reference pc: 241 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 243 op: ASSIGN_SUBS (16)
    RefDS(_r_62201);
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_subprogs_62121 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62201;
    DeRef(_1);
    // SubProg resolved_reference pc: 247 op: NOP1 (159)
L4: // addr: 248 pc: 247 sub: 62175 op: 159
    // SubProg resolved_reference pc: 248 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var r_62201
    DeRef(_r_62201);
    _r_62201 = NOVALUE;
    // SubProg resolved_reference pc: 250 op: ELSE (23)
    goto L5; // [250] 303
    // SubProg resolved_reference pc: 252 op: NOP1 (159)
L3: // addr: 253 pc: 252 sub: 62175 op: 159
    // SubProg resolved_reference pc: 253 op: STARTLINE (58)

    /** fwdref.e:127		elsif tx then*/
    // SubProg resolved_reference pc: 255 op: IF (20)
    if (_tx_62184 == 0)
    {
        goto L6; // [255] 296
    }
    else{
    }
    // SubProg resolved_reference pc: 258 op: STARTLINE (58)

    /** fwdref.e:128			sequence r = toplevel_references[file]*/
    // SubProg resolved_reference pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 262 op: RHS_SUBS (25)
    DeRef(_r_62219);
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    _r_62219 = (object)*(((s1_ptr)_2)->base + _file_62178);
    Ref(_r_62219);
    // SubProg resolved_reference pc: 266 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 268 op: STARTLINE (58)

    /** fwdref.e:129			toplevel_references[file] = 0*/
    // SubProg resolved_reference pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 272 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39toplevel_references_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 276 op: STARTLINE (58)

    /** fwdref.e:130			r = remove( r, tx )*/
    // SubProg resolved_reference pc: 278 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62219);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_tx_62184)) ? _tx_62184 : (object)(DBL_PTR(_tx_62184)->dbl);
        int stop = (IS_ATOM_INT(_tx_62184)) ? _tx_62184 : (object)(DBL_PTR(_tx_62184)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62219), start, &_r_62219 );
            }
            else Tail(SEQ_PTR(_r_62219), stop+1, &_r_62219);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62219), start, &_r_62219);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62219 = Remove_elements(start, stop, (SEQ_PTR(_r_62219)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 283 op: STARTLINE (58)

    /** fwdref.e:131			toplevel_references[file] = r*/
    // SubProg resolved_reference pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 287 op: ASSIGN_SUBS (16)
    RefDS(_r_62219);
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39toplevel_references_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62178);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62219;
    DeRef(_1);
    // SubProg resolved_reference pc: 291 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var r_62219
    DeRefDS(_r_62219);
    _r_62219 = NOVALUE;
    // SubProg resolved_reference pc: 293 op: ELSE (23)
    goto L5; // [293] 303
    // SubProg resolved_reference pc: 295 op: NOP1 (159)
L6: // addr: 296 pc: 295 sub: 62175 op: 159
    // SubProg resolved_reference pc: 296 op: STARTLINE (58)

    /** fwdref.e:134			InternalErr( 260 )*/
    // SubProg resolved_reference pc: 298 op: PROC (27)
    RefDS(_21933);
    _50InternalErr(260, _21933);
    // SubProg resolved_reference pc: 302 op: NOP1 (159)
L5: // addr: 303 pc: 302 sub: 62175 op: 159
    // SubProg resolved_reference pc: 303 op: STARTLINE (58)

    /** fwdref.e:136		inactive_references &= ref*/
    // SubProg resolved_reference pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 307 op: CONCAT (15)
    Append(&_39inactive_references_62124, _39inactive_references_62124, _ref_62177);
    // SubProg resolved_reference pc: 311 op: STARTLINE (58)

    /** fwdref.e:137		forward_references[ref] = 0*/
    // SubProg resolved_reference pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 315 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_62177);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 319 op: STARTLINE (58)

    /** fwdref.e:138	end procedure*/
    // SubProg resolved_reference pc: 321 op: RETURNP (29)

// Exiting block BLOCK: resolved_reference

// block var ref_62177

// block var file_62178

// block var subprog_62181

// block var tx_62184

// block var ax_62185

// block var sp_62186
    _30841 = NOVALUE;
    return;
    // SubProg resolved_reference pc: 324 op: BADRETURNF (43)
    ;
}


void _39set_code(object _ref_62233)
{
// skipping _30868  name type: 0
    object _30867 = NOVALUE; // 62273 30867
// skipping _30866  name type: 0
    object _30865 = NOVALUE; // 62269 30865
    object _30864 = NOVALUE; // 62267 30864
    object _30863 = NOVALUE; // 62266 30863
    object _30862 = NOVALUE; // 62264 30862
// skipping _30861  name type: 0
    object _30860 = NOVALUE; // 62256 30860
// skipping _30859  name type: 0
    object _30858 = NOVALUE; // 62252 30858
// skipping _30857  name type: 0
    object _30856 = NOVALUE; // 62247 30856
// skipping _30855  name type: 0
    object _30854 = NOVALUE; // 62243 30854
// skipping _30853  name type: 0
// skipping _30852  name type: 0
    object _30851 = NOVALUE; // 62234 30851
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 3 op: STARTLINE (58)

    /** fwdref.e:146		patch_code_sub = forward_references[ref][FR_SUBPROG]*/
    // SubProg set_code pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _30851 = (object)*(((s1_ptr)_2)->base + _ref_62233);
    // SubProg set_code pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30851);
    _39patch_code_sub_62228 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_39patch_code_sub_62228)){
        _39patch_code_sub_62228 = (object)DBL_PTR(_39patch_code_sub_62228)->dbl;
    }
    _30851 = NOVALUE;
    // SubProg set_code pc: 17 op: STARTLINE (58)

    /** fwdref.e:147		if patch_code_sub != CurrentSub then*/
    // SubProg set_code pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 23 op: NOTEQ_IFW (105)
    if (_39patch_code_sub_62228 == _36CurrentSub_16444)
    goto L1; // [23] 136
    // SubProg set_code pc: 27 op: STARTLINE (58)

    /** fwdref.e:149			patch_code_temp = Code*/
    // SubProg set_code pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 31 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_39patch_code_temp_62225);
    _39patch_code_temp_62225 = _36Code_16524;
    // SubProg set_code pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 36 op: STARTLINE (58)

    /** fwdref.e:150			patch_linetab_temp = LineTable*/
    // SubProg set_code pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 40 op: ASSIGN (18)
    RefDS(_36LineTable_16525);
    DeRef(_39patch_linetab_temp_62226);
    _39patch_linetab_temp_62226 = _36LineTable_16525;
    // SubProg set_code pc: 43 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 45 op: STARTLINE (58)

    /** fwdref.e:152			Code = SymTab[patch_code_sub][S_CODE]*/
    // SubProg set_code pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30854 = (object)*(((s1_ptr)_2)->base + _39patch_code_sub_62228);
    // SubProg set_code pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 57 op: RHS_SUBS_CHECK (92)
    DeRefDS(_36Code_16524);
    _2 = (object)SEQ_PTR(_30854);
    if (!IS_ATOM_INT(_36S_CODE_16103)){
        _36Code_16524 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    }
    else{
        _36Code_16524 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
    }
    Ref(_36Code_16524);
    _30854 = NOVALUE;
    // SubProg set_code pc: 61 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 63 op: STARTLINE (58)

    /** fwdref.e:153			SymTab[patch_code_sub][S_CODE] = 0*/
    // SubProg set_code pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 69 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39patch_code_sub_62228 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 76 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_CODE_16103))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30856 = NOVALUE;
    // SubProg set_code pc: 80 op: STARTLINE (58)

    /** fwdref.e:154			LineTable = SymTab[patch_code_sub][S_LINETAB]*/
    // SubProg set_code pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30858 = (object)*(((s1_ptr)_2)->base + _39patch_code_sub_62228);
    // SubProg set_code pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 92 op: RHS_SUBS_CHECK (92)
    DeRefDS(_36LineTable_16525);
    _2 = (object)SEQ_PTR(_30858);
    if (!IS_ATOM_INT(_36S_LINETAB_16126)){
        _36LineTable_16525 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
    }
    else{
        _36LineTable_16525 = (object)*(((s1_ptr)_2)->base + _36S_LINETAB_16126);
    }
    Ref(_36LineTable_16525);
    _30858 = NOVALUE;
    // SubProg set_code pc: 96 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 98 op: STARTLINE (58)

    /** fwdref.e:155			SymTab[patch_code_sub][S_LINETAB] = 0*/
    // SubProg set_code pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 104 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39patch_code_sub_62228 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 111 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_LINETAB_16126))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_LINETAB_16126);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30860 = NOVALUE;
    // SubProg set_code pc: 115 op: STARTLINE (58)

    /** fwdref.e:157			patch_current_sub = CurrentSub*/
    // SubProg set_code pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 119 op: ASSIGN (18)
    _39patch_current_sub_62230 = _36CurrentSub_16444;
    // SubProg set_code pc: 122 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 124 op: STARTLINE (58)

    /** fwdref.e:158			CurrentSub = patch_code_sub*/
    // SubProg set_code pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 128 op: ASSIGN (18)
    _36CurrentSub_16444 = _39patch_code_sub_62228;
    // SubProg set_code pc: 131 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 133 op: ELSE (23)
    goto L2; // [133] 203
    // SubProg set_code pc: 135 op: NOP1 (159)
L1: // addr: 136 pc: 135 sub: 62231 op: 159
    // SubProg set_code pc: 136 op: STARTLINE (58)

    /** fwdref.e:160			patch_current_sub = patch_code_sub*/
    // SubProg set_code pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 140 op: ASSIGN (18)
    _39patch_current_sub_62230 = _39patch_code_sub_62228;
    // SubProg set_code pc: 143 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 145 op: STARTLINE (58)

    /** fwdref.e:161			if sequence( SymTab[patch_current_sub][S_CODE] ) then*/
    // SubProg set_code pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30862 = (object)*(((s1_ptr)_2)->base + _39patch_current_sub_62230);
    // SubProg set_code pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 157 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30862);
    if (!IS_ATOM_INT(_36S_CODE_16103)){
        _30863 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    }
    else{
        _30863 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
    }
    _30862 = NOVALUE;
    // SubProg set_code pc: 161 op: IS_A_SEQUENCE (68)
    _30864 = IS_SEQUENCE(_30863);
    _30863 = NOVALUE;
    // SubProg set_code pc: 164 op: IF (20)
    if (_30864 == 0)
    {
        _30864 = NOVALUE;
        goto L3; // [164] 202
    }
    else{
        _30864 = NOVALUE;
    }
    // SubProg set_code pc: 167 op: STARTLINE (58)

    /** fwdref.e:162				SymTab[patch_code_sub][S_CODE] = 0*/
    // SubProg set_code pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 173 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39patch_code_sub_62228 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 180 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_CODE_16103))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30865 = NOVALUE;
    // SubProg set_code pc: 184 op: STARTLINE (58)

    /** fwdref.e:163				SymTab[patch_code_sub][S_LINETAB] = 0*/
    // SubProg set_code pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 190 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39patch_code_sub_62228 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 197 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_LINETAB_16126))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_LINETAB_16126);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30867 = NOVALUE;
    // SubProg set_code pc: 201 op: NOP1 (159)
L3: // addr: 202 pc: 201 sub: 62231 op: 159
    // SubProg set_code pc: 202 op: NOP1 (159)
L2: // addr: 203 pc: 202 sub: 62231 op: 159
    // SubProg set_code pc: 203 op: STARTLINE (58)

    /** fwdref.e:166	end procedure*/
    // SubProg set_code pc: 205 op: RETURNP (29)

// Exiting block BLOCK: set_code

// block var ref_62233
    return;
    // SubProg set_code pc: 208 op: BADRETURNF (43)
    ;
}


void _39reset_code()
{
// skipping _30873  name type: 0
    object _30872 = NOVALUE; // 62286 30872
// skipping _30871  name type: 0
    object _30870 = NOVALUE; // 62281 30870
// skipping _30869  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg reset_code pc: 1 op: STARTLINE (58)

    /** fwdref.e:169		if patch_code_sub != patch_current_sub then*/
    // SubProg reset_code pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 7 op: NOTEQ_IFW (105)
    if (_39patch_code_sub_62228 == _39patch_current_sub_62230)
    goto L1; // [7] 77
    // SubProg reset_code pc: 11 op: STARTLINE (58)

    /** fwdref.e:171			SymTab[patch_code_sub][S_CODE] = Code*/
    // SubProg reset_code pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 17 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39patch_code_sub_62228 + ((s1_ptr)_2)->base);
    // SubProg reset_code pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 26 op: PASSIGN_SUBS (162)
    RefDS(_36Code_16524);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_CODE_16103))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36Code_16524;
    DeRef(_1);
    _30870 = NOVALUE;
    // SubProg reset_code pc: 30 op: STARTLINE (58)

    /** fwdref.e:172			SymTab[patch_code_sub][S_LINETAB] = LineTable*/
    // SubProg reset_code pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 36 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39patch_code_sub_62228 + ((s1_ptr)_2)->base);
    // SubProg reset_code pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 45 op: PASSIGN_SUBS (162)
    RefDS(_36LineTable_16525);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_LINETAB_16126))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_LINETAB_16126)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_LINETAB_16126);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36LineTable_16525;
    DeRef(_1);
    _30872 = NOVALUE;
    // SubProg reset_code pc: 49 op: STARTLINE (58)

    /** fwdref.e:175			CurrentSub = patch_current_sub*/
    // SubProg reset_code pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 53 op: ASSIGN (18)
    _36CurrentSub_16444 = _39patch_current_sub_62230;
    // SubProg reset_code pc: 56 op: INTEGER_CHECK (96)
    // SubProg reset_code pc: 58 op: STARTLINE (58)

    /** fwdref.e:176			Code = patch_code_temp*/
    // SubProg reset_code pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 62 op: ASSIGN (18)
    RefDS(_39patch_code_temp_62225);
    DeRefDS(_36Code_16524);
    _36Code_16524 = _39patch_code_temp_62225;
    // SubProg reset_code pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 67 op: STARTLINE (58)

    /** fwdref.e:177			LineTable = patch_linetab_temp*/
    // SubProg reset_code pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 71 op: ASSIGN (18)
    RefDS(_39patch_linetab_temp_62226);
    DeRefDS(_36LineTable_16525);
    _36LineTable_16525 = _39patch_linetab_temp_62226;
    // SubProg reset_code pc: 74 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 62276 op: 159
    // SubProg reset_code pc: 77 op: STARTLINE (58)

    /** fwdref.e:181		patch_code_temp = {}*/
    // SubProg reset_code pc: 79 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39patch_code_temp_62225);
    _39patch_code_temp_62225 = _21933;
    // SubProg reset_code pc: 82 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 84 op: STARTLINE (58)

    /** fwdref.e:182		patch_linetab_temp = {}*/
    // SubProg reset_code pc: 86 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39patch_linetab_temp_62226);
    _39patch_linetab_temp_62226 = _21933;
    // SubProg reset_code pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 91 op: STARTLINE (58)

    /** fwdref.e:183	end procedure*/
    // SubProg reset_code pc: 93 op: RETURNP (29)

// Exiting block BLOCK: reset_code
    return;
    // SubProg reset_code pc: 96 op: BADRETURNF (43)
    ;
}


void _39set_data(object _ref_62295, object _data_62296)
{
// skipping _30875  name type: 0
    object _30874 = NOVALUE; // 62297 30874
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_data pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_data pc: 3 op: STARTLINE (58)

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    // SubProg set_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_data pc: 7 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62295 + ((s1_ptr)_2)->base);
    // SubProg set_data pc: 12 op: PASSIGN_SUBS (162)
    Ref(_data_62296);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_62296;
    DeRef(_1);
    _30874 = NOVALUE;
    // SubProg set_data pc: 16 op: STARTLINE (58)

    /** fwdref.e:187	end procedure*/
    // SubProg set_data pc: 18 op: RETURNP (29)

// Exiting block BLOCK: set_data

// block var ref_62295

// block var data_62296
    DeRef(_data_62296);
    return;
    // SubProg set_data pc: 21 op: BADRETURNF (43)
    ;
}


void _39add_data(object _ref_62301, object _data_62302)
{
    object _30880 = NOVALUE; // 62307 30880
    object _30879 = NOVALUE; // 62306 30879
    object _30878 = NOVALUE; // 62305 30878
// skipping _30877  name type: 0
    object _30876 = NOVALUE; // 62303 30876
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_data pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62301)) {
        _1 = (object)(DBL_PTR(_ref_62301)->dbl);
        DeRefDS(_ref_62301);
        _ref_62301 = _1;
    }
    // SubProg add_data pc: 3 op: STARTLINE (58)

    /** fwdref.e:190		forward_references[ref][FR_DATA] = append( forward_references[ref][FR_DATA], data )*/
    // SubProg add_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_data pc: 7 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62301 + ((s1_ptr)_2)->base);
    // SubProg add_data pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_data pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _30878 = (object)*(((s1_ptr)_2)->base + _ref_62301);
    // SubProg add_data pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30878);
    _30879 = (object)*(((s1_ptr)_2)->base + 12);
    _30878 = NOVALUE;
    // SubProg add_data pc: 22 op: APPEND (35)
    Ref(_data_62302);
    Append(&_30880, _30879, _data_62302);
    _30879 = NOVALUE;
    // SubProg add_data pc: 26 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30880;
    if( _1 != _30880 ){
        DeRef(_1);
    }
    _30880 = NOVALUE;
    _30876 = NOVALUE;
    // SubProg add_data pc: 30 op: STARTLINE (58)

    /** fwdref.e:191	end procedure*/
    // SubProg add_data pc: 32 op: RETURNP (29)

// Exiting block BLOCK: add_data

// block var ref_62301

// block var data_62302
    DeRef(_data_62302);
    return;
    // SubProg add_data pc: 35 op: BADRETURNF (43)
    ;
}


void _39set_line(object _ref_62310, object _line_no_62311, object _this_line_62312, object _bp_62313)
{
// skipping _30886  name type: 0
    object _30885 = NOVALUE; // 62318 30885
// skipping _30884  name type: 0
    object _30883 = NOVALUE; // 62316 30883
// skipping _30882  name type: 0
    object _30881 = NOVALUE; // 62314 30881
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_line pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62310)) {
        _1 = (object)(DBL_PTR(_ref_62310)->dbl);
        DeRefDS(_ref_62310);
        _ref_62310 = _1;
    }
    // SubProg set_line pc: 3 op: INTEGER_CHECK (96)
    // SubProg set_line pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg set_line pc: 7 op: INTEGER_CHECK (96)
    // SubProg set_line pc: 9 op: STARTLINE (58)

    /** fwdref.e:194		forward_references[ref][FR_LINE] = line_no*/
    // SubProg set_line pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 13 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62310 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 18 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _line_no_62311;
    DeRef(_1);
    _30881 = NOVALUE;
    // SubProg set_line pc: 22 op: STARTLINE (58)

    /** fwdref.e:195		forward_references[ref][FR_THISLINE] = this_line*/
    // SubProg set_line pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 26 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62310 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 31 op: PASSIGN_SUBS (162)
    RefDS(_this_line_62312);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _this_line_62312;
    DeRef(_1);
    _30883 = NOVALUE;
    // SubProg set_line pc: 35 op: STARTLINE (58)

    /** fwdref.e:196		forward_references[ref][FR_BP] = bp*/
    // SubProg set_line pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62310 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 44 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bp_62313;
    DeRef(_1);
    _30885 = NOVALUE;
    // SubProg set_line pc: 48 op: STARTLINE (58)

    /** fwdref.e:198	end procedure*/
    // SubProg set_line pc: 50 op: RETURNP (29)

// Exiting block BLOCK: set_line

// block var ref_62310

// block var line_no_62311

// block var this_line_62312
    DeRefDS(_this_line_62312);

// block var bp_62313
    return;
    // SubProg set_line pc: 53 op: BADRETURNF (43)
    ;
}


void _39add_private_symbol(object _sym_62325, object _name_62326)
{
// skipping _30888  name type: 0
// skipping _30887  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_private_symbol pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_62325)) {
        _1 = (object)(DBL_PTR(_sym_62325)->dbl);
        DeRefDS(_sym_62325);
        _sym_62325 = _1;
    }
    // SubProg add_private_symbol pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add_private_symbol pc: 5 op: STARTLINE (58)

    /** fwdref.e:206		fwd_private_sym &= sym*/
    // SubProg add_private_symbol pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_private_symbol pc: 9 op: CONCAT (15)
    Append(&_39fwd_private_sym_62320, _39fwd_private_sym_62320, _sym_62325);
    // SubProg add_private_symbol pc: 13 op: STARTLINE (58)

    /** fwdref.e:207		fwd_private_name = append( fwd_private_name, name )*/
    // SubProg add_private_symbol pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_private_symbol pc: 17 op: APPEND (35)
    RefDS(_name_62326);
    Append(&_39fwd_private_name_62321, _39fwd_private_name_62321, _name_62326);
    // SubProg add_private_symbol pc: 21 op: STARTLINE (58)

    /** fwdref.e:209	end procedure*/
    // SubProg add_private_symbol pc: 23 op: RETURNP (29)

// Exiting block BLOCK: add_private_symbol

// block var sym_62325

// block var name_62326
    DeRefDS(_name_62326);
    return;
    // SubProg add_private_symbol pc: 26 op: BADRETURNF (43)
    ;
}


void _39patch_forward_goto(object _tok_62334, object _ref_62335)
{
    object _fr_62336 = NOVALUE;
    object _30901 = NOVALUE; // 62353 30901
    object _30900 = NOVALUE; // 62352 30900
    object _30899 = NOVALUE; // 62351 30899
    object _30898 = NOVALUE; // 62350 30898
    object _30897 = NOVALUE; // 62349 30897
    object _30896 = NOVALUE; // 62347 30896
    object _30895 = NOVALUE; // 62346 30895
    object _30894 = NOVALUE; // 62345 30894
// skipping _30893  name type: 0
    object _30892 = NOVALUE; // 62341 30892
    object _30891 = NOVALUE; // 62340 30891
// skipping _30890  name type: 0
// skipping _30889  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_forward_goto pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_goto pc: 3 op: STARTLINE (58)

    /** fwdref.e:217		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_goto pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_goto pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62336);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62336 = (object)*(((s1_ptr)_2)->base + _ref_62335);
    Ref(_fr_62336);
    // SubProg patch_forward_goto pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_goto pc: 13 op: STARTLINE (58)

    /** fwdref.e:218		set_code( ref )*/
    // SubProg patch_forward_goto pc: 15 op: PROC (27)
    _39set_code(_ref_62335);
    // SubProg patch_forward_goto pc: 18 op: STARTLINE (58)

    /** fwdref.e:220		shifting_sub = fr[FR_SUBPROG]*/
    // SubProg patch_forward_goto pc: 20 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62336);
    _39shifting_sub_62149 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_39shifting_sub_62149))
    _39shifting_sub_62149 = (object)DBL_PTR(_39shifting_sub_62149)->dbl;
    // SubProg patch_forward_goto pc: 24 op: STARTLINE (58)

    /** fwdref.e:222		if length( fr[FR_DATA] ) = 2 then*/
    // SubProg patch_forward_goto pc: 26 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62336);
    _30891 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_30891)){
            _30892 = SEQ_PTR(_30891)->length;
    }
    else {
        _30892 = 1;
    }
    _30891 = NOVALUE;
    // SubProg patch_forward_goto pc: 33 op: EQUALS_IFW_I (121)
    if (_30892 != 2)
    goto L1; // [33] 62
    // SubProg patch_forward_goto pc: 37 op: STARTLINE (58)

    /** fwdref.e:223			prep_forward_error( ref )*/
    // SubProg patch_forward_goto pc: 39 op: PROC (27)
    _39prep_forward_error(_ref_62335);
    // SubProg patch_forward_goto pc: 42 op: STARTLINE (58)

    /** fwdref.e:224			CompileErr( 156, { fr[FR_DATA][2] })*/
    // SubProg patch_forward_goto pc: 44 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62336);
    _30894 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30894);
    _30895 = (object)*(((s1_ptr)_2)->base + 2);
    _30894 = NOVALUE;
    // SubProg patch_forward_goto pc: 52 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30895);
    ((intptr_t*)_2)[1] = _30895;
    _30896 = MAKE_SEQ(_1);
    _30895 = NOVALUE;
    // SubProg patch_forward_goto pc: 56 op: PROC (27)
    _50CompileErr(156, _30896, 0);
    _30896 = NOVALUE;
    // SubProg patch_forward_goto pc: 61 op: NOP1 (159)
L1: // addr: 62 pc: 61 sub: 62331 op: 159
    // SubProg patch_forward_goto pc: 62 op: STARTLINE (58)

    /** fwdref.e:227		Goto_block(  fr[FR_DATA][1], fr[FR_DATA][3], fr[FR_PC] )*/
    // SubProg patch_forward_goto pc: 64 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62336);
    _30897 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 68 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30897);
    _30898 = (object)*(((s1_ptr)_2)->base + 1);
    _30897 = NOVALUE;
    // SubProg patch_forward_goto pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62336);
    _30899 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30899);
    _30900 = (object)*(((s1_ptr)_2)->base + 3);
    _30899 = NOVALUE;
    // SubProg patch_forward_goto pc: 80 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62336);
    _30901 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_goto pc: 84 op: PROC (27)
    Ref(_30898);
    Ref(_30900);
    Ref(_30901);
    _65Goto_block(_30898, _30900, _30901);
    _30898 = NOVALUE;
    _30900 = NOVALUE;
    _30901 = NOVALUE;
    // SubProg patch_forward_goto pc: 89 op: STARTLINE (58)

    /** fwdref.e:229		shifting_sub = 0*/
    // SubProg patch_forward_goto pc: 91 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_goto pc: 94 op: STARTLINE (58)

    /** fwdref.e:231		reset_code()*/
    // SubProg patch_forward_goto pc: 96 op: PROC (27)
    _39reset_code();
    // SubProg patch_forward_goto pc: 98 op: STARTLINE (58)

    /** fwdref.e:232		resolved_reference( ref )*/
    // SubProg patch_forward_goto pc: 100 op: PROC (27)
    _39resolved_reference(_ref_62335);
    // SubProg patch_forward_goto pc: 103 op: STARTLINE (58)

    /** fwdref.e:233	end procedure*/
    // SubProg patch_forward_goto pc: 105 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_goto

// block var ref_62335

// block var fr_62336
    DeRefDS(_fr_62336);
    _30891 = NOVALUE;
    return;
    // SubProg patch_forward_goto pc: 108 op: BADRETURNF (43)
    ;
}


void _39patch_forward_call(object _tok_62357, object _ref_62358)
{
    object _fr_62359 = NOVALUE;
    object _sub_62362 = NOVALUE;
    object _defarg_62368 = NOVALUE;
    object _paramsym_62372 = NOVALUE;
    object _old_62375 = NOVALUE;
    object _tx_62379 = NOVALUE;
    object _code_sub_62389 = NOVALUE;
    object _args_62391 = NOVALUE;
    object _is_func_62396 = NOVALUE;
    object _real_file_62410 = NOVALUE;
    object _code_62414 = NOVALUE;
    object _temp_sub_62416 = NOVALUE;
    object _pc_62418 = NOVALUE;
    object _next_pc_62420 = NOVALUE;
    object _supplied_args_62421 = NOVALUE;
    object _name_62424 = NOVALUE;
    object _old_temps_allocated_62460 = NOVALUE;
    object _temp_target_62469 = NOVALUE;
    object _converted_code_62472 = NOVALUE;
    object _target_62488 = NOVALUE;
    object _has_defaults_62494 = NOVALUE;
    object _goto_target_62495 = NOVALUE;
    object _defarg_62498 = NOVALUE;
    object _code_len_62499 = NOVALUE;
    object _extra_default_args_62501 = NOVALUE;
    object _param_sym_62504 = NOVALUE;
    object _params_62505 = NOVALUE;
    object _orig_code_62507 = NOVALUE;
    object _orig_linetable_62508 = NOVALUE;
    object _ar_sp_62512 = NOVALUE;
    object _pre_refs_62516 = NOVALUE;
    object _old_fwd_params_62531 = NOVALUE;
    object _temp_shifting_sub_62572 = NOVALUE;
    object _new_code_62576 = NOVALUE;
    object _routine_type_62585 = NOVALUE;
    object _31666 = NOVALUE; // 63874 31666
    object _31043 = NOVALUE; // 62639 31043
    object _31042 = NOVALUE; // 62638 31042
    object _31041 = NOVALUE; // 62637 31041
// skipping _31040  name type: 0
    object _31039 = NOVALUE; // 62635 31039
    object _31038 = NOVALUE; // 62634 31038
    object _31037 = NOVALUE; // 62633 31037
    object _31036 = NOVALUE; // 62632 31036
    object _31035 = NOVALUE; // 62631 31035
    object _31034 = NOVALUE; // 62630 31034
    object _31033 = NOVALUE; // 62629 31033
    object _31032 = NOVALUE; // 62628 31032
    object _31031 = NOVALUE; // 62627 31031
    object _31030 = NOVALUE; // 62626 31030
    object _31029 = NOVALUE; // 62622 31029
    object _31028 = NOVALUE; // 62621 31028
    object _31027 = NOVALUE; // 62620 31027
// skipping _31026  name type: 0
    object _31025 = NOVALUE; // 62618 31025
    object _31024 = NOVALUE; // 62617 31024
    object _31023 = NOVALUE; // 62616 31023
    object _31022 = NOVALUE; // 62615 31022
    object _31021 = NOVALUE; // 62614 31021
    object _31020 = NOVALUE; // 62613 31020
    object _31019 = NOVALUE; // 62612 31019
    object _31018 = NOVALUE; // 62611 31018
// skipping _31017  name type: 0
    object _31016 = NOVALUE; // 62605 31016
// skipping _31015  name type: 0
// skipping _31014  name type: 0
    object _31013 = NOVALUE; // 62601 31013
    object _31012 = NOVALUE; // 62599 31012
    object _31011 = NOVALUE; // 62598 31011
    object _31010 = NOVALUE; // 62596 31010
// skipping _31008  name type: 0
// skipping _31007  name type: 0
// skipping _31006  name type: 0
    object _31005 = NOVALUE; // 62583 31005
    object _31004 = NOVALUE; // 62575 31004
    object _31003 = NOVALUE; // 62574 31003
    object _31002 = NOVALUE; // 62571 31002
    object _31001 = NOVALUE; // 62570 31001
// skipping _31000  name type: 0
    object _30999 = NOVALUE; // 62565 30999
    object _30998 = NOVALUE; // 62563 30998
    object _30997 = NOVALUE; // 62562 30997
    object _30996 = NOVALUE; // 62560 30996
    object _30995 = NOVALUE; // 62558 30995
    object _30994 = NOVALUE; // 62556 30994
// skipping _30993  name type: 0
    object _30992 = NOVALUE; // 62549 30992
    object _30991 = NOVALUE; // 62548 30991
// skipping _30990  name type: 0
    object _30989 = NOVALUE; // 62546 30989
    object _30988 = NOVALUE; // 62545 30988
    object _30987 = NOVALUE; // 62544 30987
    object _30986 = NOVALUE; // 62543 30986
// skipping _30985  name type: 0
    object _30984 = NOVALUE; // 62539 30984
// skipping _30983  name type: 0
    object _30982 = NOVALUE; // 62536 30982
    object _30981 = NOVALUE; // 62535 30981
    object _30980 = NOVALUE; // 62534 30980
// skipping _30979  name type: 0
    object _30978 = NOVALUE; // 62529 30978
    object _30977 = NOVALUE; // 62528 30977
// skipping _30976  name type: 0
    object _30975 = NOVALUE; // 62525 30975
// skipping _30974  name type: 0
    object _30973 = NOVALUE; // 62521 30973
// skipping _30972  name type: 0
// skipping _30971  name type: 0
    object _30970 = NOVALUE; // 62514 30970
// skipping _30969  name type: 0
// skipping _30968  name type: 0
// skipping _30967  name type: 0
    object _30966 = NOVALUE; // 62496 30966
// skipping _30965  name type: 0
    object _30964 = NOVALUE; // 62492 30964
    object _30963 = NOVALUE; // 62491 30963
// skipping _30962  name type: 0
    object _30961 = NOVALUE; // 62486 30961
    object _30960 = NOVALUE; // 62485 30960
    object _30959 = NOVALUE; // 62483 30959
    object _30958 = NOVALUE; // 62482 30958
// skipping _30957  name type: 0
    object _30956 = NOVALUE; // 62480 30956
    object _30955 = NOVALUE; // 62478 30955
    object _30954 = NOVALUE; // 62477 30954
    object _30953 = NOVALUE; // 62476 30953
    object _30952 = NOVALUE; // 62475 30952
// skipping _30951  name type: 0
    object _30950 = NOVALUE; // 62467 30950
    object _30949 = NOVALUE; // 62465 30949
    object _30948 = NOVALUE; // 62464 30948
    object _30947 = NOVALUE; // 62459 30947
    object _30946 = NOVALUE; // 62458 30946
    object _30945 = NOVALUE; // 62456 30945
    object _30944 = NOVALUE; // 62452 30944
    object _30943 = NOVALUE; // 62450 30943
    object _30942 = NOVALUE; // 62447 30942
    object _30941 = NOVALUE; // 62446 30941
    object _30940 = NOVALUE; // 62445 30940
    object _30939 = NOVALUE; // 62444 30939
    object _30938 = NOVALUE; // 62443 30938
    object _30937 = NOVALUE; // 62441 30937
    object _30935 = NOVALUE; // 62435 30935
    object _30934 = NOVALUE; // 62433 30934
    object _30933 = NOVALUE; // 62431 30933
    object _30932 = NOVALUE; // 62430 30932
    object _30931 = NOVALUE; // 62428 30931
// skipping _30930  name type: 0
// skipping _30929  name type: 0
    object _30928 = NOVALUE; // 62422 30928
// skipping _30927  name type: 0
// skipping _30926  name type: 0
// skipping _30925  name type: 0
    object _30924 = NOVALUE; // 62408 30924
    object _30923 = NOVALUE; // 62406 30923
    object _30922 = NOVALUE; // 62404 30922
    object _30921 = NOVALUE; // 62402 30921
    object _30920 = NOVALUE; // 62400 30920
    object _30919 = NOVALUE; // 62398 30919
// skipping _30918  name type: 0
    object _30917 = NOVALUE; // 62393 30917
// skipping _30916  name type: 0
// skipping _30915  name type: 0
    object _30914 = NOVALUE; // 62386 30914
// skipping _30913  name type: 0
    object _30912 = NOVALUE; // 62383 30912
    object _30911 = NOVALUE; // 62381 30911
// skipping _30910  name type: 0
    object _30909 = NOVALUE; // 62377 30909
// skipping _30908  name type: 0
// skipping _30907  name type: 0
    object _30906 = NOVALUE; // 62369 30906
    object _30905 = NOVALUE; // 62367 30905
    object _30904 = NOVALUE; // 62366 30904
// skipping _30903  name type: 0
// skipping _30902  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_call pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 3 op: STARTLINE (58)

    /** fwdref.e:242		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_call pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62359);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62359 = (object)*(((s1_ptr)_2)->base + _ref_62358);
    Ref(_fr_62359);
    // SubProg patch_forward_call pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 13 op: STARTLINE (58)

    /** fwdref.e:243		symtab_index sub = tok[T_SYM]*/
    // SubProg patch_forward_call pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62357);
    _sub_62362 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sub_62362)){
        _sub_62362 = (object)DBL_PTR(_sub_62362)->dbl;
    }
    // SubProg patch_forward_call pc: 23 op: STARTLINE (58)

    /** fwdref.e:245		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_call pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _30904 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_call pc: 29 op: IS_A_SEQUENCE (68)
    _30905 = IS_SEQUENCE(_30904);
    _30904 = NOVALUE;
    // SubProg patch_forward_call pc: 32 op: IF (20)
    if (_30905 == 0)
    {
        _30905 = NOVALUE;
        goto L1; // [32] 117
    }
    else{
        _30905 = NOVALUE;
    }
    // SubProg patch_forward_call pc: 35 op: STARTLINE (58)

    /** fwdref.e:246			sequence defarg = fr[FR_DATA][1]*/
    // SubProg patch_forward_call pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _30906 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_call pc: 41 op: RHS_SUBS_CHECK (92)
    DeRef(_defarg_62368);
    _2 = (object)SEQ_PTR(_30906);
    _defarg_62368 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_defarg_62368);
    _30906 = NOVALUE;
    // SubProg patch_forward_call pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 47 op: STARTLINE (58)

    /** fwdref.e:247			symtab_index paramsym = defarg[2]*/
    // SubProg patch_forward_call pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defarg_62368);
    _paramsym_62372 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_paramsym_62372)){
        _paramsym_62372 = (object)DBL_PTR(_paramsym_62372)->dbl;
    }
    // SubProg patch_forward_call pc: 55 op: STARTLINE (58)

    /** fwdref.e:248			token old = { RECORDED, defarg[3] }*/
    // SubProg patch_forward_call pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defarg_62368);
    _30909 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 63 op: RIGHT_BRACE_2 (85)
    Ref(_30909);
    DeRef(_old_62375);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _30909;
    _old_62375 = MAKE_SEQ(_1);
    _30909 = NOVALUE;
    // SubProg patch_forward_call pc: 67 op: STARTLINE (58)

    /** fwdref.e:249			integer tx = find( old, SymTab[paramsym][S_CODE] )*/
    // SubProg patch_forward_call pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30911 = (object)*(((s1_ptr)_2)->base + _paramsym_62372);
    // SubProg patch_forward_call pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30911);
    if (!IS_ATOM_INT(_36S_CODE_16103)){
        _30912 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    }
    else{
        _30912 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
    }
    _30911 = NOVALUE;
    // SubProg patch_forward_call pc: 81 op: FIND_FROM (176)
    _tx_62379 = find_from(_old_62375, _30912, 1);
    _30912 = NOVALUE;
    // SubProg patch_forward_call pc: 86 op: STARTLINE (58)

    /** fwdref.e:250			SymTab[paramsym][S_CODE][tx] = tok*/
    // SubProg patch_forward_call pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 90 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_paramsym_62372 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_call pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 97 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_CODE_16103))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    else
    _3 = (object)(_36S_CODE_16103 + ((s1_ptr)_2)->base);
    _30914 = NOVALUE;
    // SubProg patch_forward_call pc: 102 op: PASSIGN_SUBS (162)
    Ref(_tok_62357);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _tx_62379);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _tok_62357;
    DeRef(_1);
    _30914 = NOVALUE;
    // SubProg patch_forward_call pc: 106 op: STARTLINE (58)

    /** fwdref.e:251			resolved_reference( ref )*/
    // SubProg patch_forward_call pc: 108 op: PROC (27)
    _39resolved_reference(_ref_62358);
    // SubProg patch_forward_call pc: 111 op: STARTLINE (58)

    /** fwdref.e:252			return*/
    // SubProg patch_forward_call pc: 113 op: RETURNP (29)

// Exiting block BLOCK: IF-

// block var defarg_62368
    DeRefDS(_defarg_62368);

// block var paramsym_62372

// block var old_62375
    DeRefDS(_old_62375);

// block var tx_62379

// Exiting block BLOCK: patch_forward_call

// block var tok_62357
    DeRef(_tok_62357);

// block var ref_62358

// block var fr_62359
    DeRefDS(_fr_62359);

// block var sub_62362

// block var code_sub_62389

// block var args_62391

// block var is_func_62396

// block var real_file_62410

// block var code_62414
    DeRef(_code_62414);

// block var temp_sub_62416

// block var pc_62418

// block var next_pc_62420

// block var supplied_args_62421

// block var name_62424
    DeRef(_name_62424);

// block var old_temps_allocated_62460

// block var target_62488

// block var has_defaults_62494

// block var goto_target_62495

// block var defarg_62498

// block var code_len_62499

// block var extra_default_args_62501

// block var param_sym_62504

// block var params_62505
    DeRef(_params_62505);

// block var orig_code_62507
    DeRef(_orig_code_62507);

// block var orig_linetable_62508
    DeRef(_orig_linetable_62508);

// block var ar_sp_62512

// block var pre_refs_62516

// block var old_fwd_params_62531
    DeRef(_old_fwd_params_62531);

// block var temp_shifting_sub_62572

// block var new_code_62576
    DeRef(_new_code_62576);
    return;
    // SubProg patch_forward_call pc: 116 op: NOP1 (159)
L1: // addr: 117 pc: 116 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 117 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var defarg_62368
    DeRef(_defarg_62368);
    _defarg_62368 = NOVALUE;

// block var paramsym_62372

// block var old_62375
    DeRef(_old_62375);
    _old_62375 = NOVALUE;

// block var tx_62379
    // SubProg patch_forward_call pc: 119 op: STARTLINE (58)

    /** fwdref.e:255		integer code_sub = fr[FR_SUBPROG]*/
    // SubProg patch_forward_call pc: 121 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62359);
    _code_sub_62389 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_code_sub_62389))
    _code_sub_62389 = (object)DBL_PTR(_code_sub_62389)->dbl;
    // SubProg patch_forward_call pc: 125 op: STARTLINE (58)

    /** fwdref.e:257		integer args = SymTab[sub][S_NUM_ARGS]*/
    // SubProg patch_forward_call pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 129 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30917 = (object)*(((s1_ptr)_2)->base + _sub_62362);
    // SubProg patch_forward_call pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30917);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _args_62391 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _args_62391 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    if (!IS_ATOM_INT(_args_62391)){
        _args_62391 = (object)DBL_PTR(_args_62391)->dbl;
    }
    _30917 = NOVALUE;
    // SubProg patch_forward_call pc: 141 op: STARTLINE (58)

    /** fwdref.e:258		integer is_func = (SymTab[sub][S_TOKEN] = FUNC) or (SymTab[sub][S_TOKEN] = TYPE)*/
    // SubProg patch_forward_call pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 145 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30919 = (object)*(((s1_ptr)_2)->base + _sub_62362);
    // SubProg patch_forward_call pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30919);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _30920 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _30920 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _30919 = NOVALUE;
    // SubProg patch_forward_call pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 157 op: EQUALS (3)
    if (IS_ATOM_INT(_30920)) {
        _30921 = (_30920 == 501);
    }
    else {
        _30921 = binary_op(EQUALS, _30920, 501);
    }
    _30920 = NOVALUE;
    // SubProg patch_forward_call pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30922 = (object)*(((s1_ptr)_2)->base + _sub_62362);
    // SubProg patch_forward_call pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 169 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30922);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _30923 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _30923 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _30922 = NOVALUE;
    // SubProg patch_forward_call pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 175 op: EQUALS (3)
    if (IS_ATOM_INT(_30923)) {
        _30924 = (_30923 == 504);
    }
    else {
        _30924 = binary_op(EQUALS, _30923, 504);
    }
    _30923 = NOVALUE;
    // SubProg patch_forward_call pc: 179 op: OR (9)
    if (IS_ATOM_INT(_30921) && IS_ATOM_INT(_30924)) {
        _is_func_62396 = (_30921 != 0 || _30924 != 0);
    }
    else {
        _is_func_62396 = binary_op(OR, _30921, _30924);
    }
    DeRef(_30921);
    _30921 = NOVALUE;
    DeRef(_30924);
    _30924 = NOVALUE;
    // SubProg patch_forward_call pc: 183 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_func_62396)) {
        _1 = (object)(DBL_PTR(_is_func_62396)->dbl);
        DeRefDS(_is_func_62396);
        _is_func_62396 = _1;
    }
    // SubProg patch_forward_call pc: 185 op: STARTLINE (58)

    /** fwdref.e:260		integer real_file = current_file_no*/
    // SubProg patch_forward_call pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 189 op: ASSIGN (18)
    _real_file_62410 = _36current_file_no_16436;
    // SubProg patch_forward_call pc: 192 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 194 op: STARTLINE (58)

    /** fwdref.e:261		current_file_no = fr[FR_FILE]*/
    // SubProg patch_forward_call pc: 196 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _36current_file_no_16436 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_36current_file_no_16436)){
        _36current_file_no_16436 = (object)DBL_PTR(_36current_file_no_16436)->dbl;
    }
    // SubProg patch_forward_call pc: 202 op: STARTLINE (58)

    /** fwdref.e:263		set_code( ref )*/
    // SubProg patch_forward_call pc: 204 op: PROC (27)
    _39set_code(_ref_62358);
    // SubProg patch_forward_call pc: 207 op: STARTLINE (58)

    /** fwdref.e:264		sequence code = Code*/
    // SubProg patch_forward_call pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 211 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_code_62414);
    _code_62414 = _36Code_16524;
    // SubProg patch_forward_call pc: 214 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 216 op: STARTLINE (58)

    /** fwdref.e:265		integer temp_sub = CurrentSub*/
    // SubProg patch_forward_call pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 220 op: ASSIGN (18)
    _temp_sub_62416 = _36CurrentSub_16444;
    // SubProg patch_forward_call pc: 223 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 225 op: STARTLINE (58)

    /** fwdref.e:267		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_call pc: 227 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62359);
    _pc_62418 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62418))
    _pc_62418 = (object)DBL_PTR(_pc_62418)->dbl;
    // SubProg patch_forward_call pc: 231 op: STARTLINE (58)

    /** fwdref.e:268		integer next_pc = pc*/
    // SubProg patch_forward_call pc: 233 op: ASSIGN_I (113)
    _next_pc_62420 = _pc_62418;
    // SubProg patch_forward_call pc: 236 op: STARTLINE (58)

    /** fwdref.e:269		integer supplied_args = code[pc+2]*/
    // SubProg patch_forward_call pc: 238 op: PLUS (11)
    _30928 = _pc_62418 + 2;
    // SubProg patch_forward_call pc: 242 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_code_62414);
    _supplied_args_62421 = (object)*(((s1_ptr)_2)->base + _30928);
    if (!IS_ATOM_INT(_supplied_args_62421))
    _supplied_args_62421 = (object)DBL_PTR(_supplied_args_62421)->dbl;
    // SubProg patch_forward_call pc: 246 op: STARTLINE (58)

    /** fwdref.e:270		sequence name = fr[FR_NAME]*/
    // SubProg patch_forward_call pc: 248 op: RHS_SUBS (25)
    DeRef(_name_62424);
    _2 = (object)SEQ_PTR(_fr_62359);
    _name_62424 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_62424);
    // SubProg patch_forward_call pc: 252 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 254 op: STARTLINE (58)

    /** fwdref.e:272		if Code[pc] != FUNC_FORWARD and Code[pc] != PROC_FORWARD then*/
    // SubProg patch_forward_call pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    _30931 = (object)*(((s1_ptr)_2)->base + _pc_62418);
    // SubProg patch_forward_call pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 264 op: NOTEQ (4)
    if (IS_ATOM_INT(_30931)) {
        _30932 = (_30931 != 196);
    }
    else {
        _30932 = binary_op(NOTEQ, _30931, 196);
    }
    _30931 = NOVALUE;
    // SubProg patch_forward_call pc: 268 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_30932)) {
        if (_30932 == 0) {
            goto L2; // [268] 332
        }
    }
    else {
        if (DBL_PTR(_30932)->dbl == 0.0) {
            goto L2; // [268] 332
        }
    }
    // SubProg patch_forward_call pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 274 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    _30934 = (object)*(((s1_ptr)_2)->base + _pc_62418);
    // SubProg patch_forward_call pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 280 op: NOTEQ (4)
    if (IS_ATOM_INT(_30934)) {
        _30935 = (_30934 != 195);
    }
    else {
        _30935 = binary_op(NOTEQ, _30934, 195);
    }
    _30934 = NOVALUE;
    // SubProg patch_forward_call pc: 284 op: NOP1 (159)
    // SubProg patch_forward_call pc: 285 op: IF (20)
    if (_30935 == 0) {
        DeRef(_30935);
        _30935 = NOVALUE;
        goto L2; // [285] 332
    }
    else {
        if (!IS_ATOM_INT(_30935) && DBL_PTR(_30935)->dbl == 0.0){
            DeRef(_30935);
            _30935 = NOVALUE;
            goto L2; // [285] 332
        }
        DeRef(_30935);
        _30935 = NOVALUE;
    }
    DeRef(_30935);
    _30935 = NOVALUE;
    // SubProg patch_forward_call pc: 288 op: STARTLINE (58)

    /** fwdref.e:273			prep_forward_error( ref )*/
    // SubProg patch_forward_call pc: 290 op: PROC (27)
    _39prep_forward_error(_ref_62358);
    // SubProg patch_forward_call pc: 293 op: STARTLINE (58)

    /** fwdref.e:274			CompileErr( "The forward call to [4] wasn't where we thought it would be: [1]:[2]:[3]",*/
    // SubProg patch_forward_call pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _30937 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg patch_forward_call pc: 303 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _30938 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_call pc: 307 op: PROC (27)
    Ref(_30938);
    _30939 = _54sym_name(_30938);
    _30938 = NOVALUE;
    // SubProg patch_forward_call pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _30940 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg patch_forward_call pc: 315 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _30941 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_call pc: 319 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30937);
    ((intptr_t*)_2)[1] = _30937;
    ((intptr_t*)_2)[2] = _30939;
    Ref(_30940);
    ((intptr_t*)_2)[3] = _30940;
    Ref(_30941);
    ((intptr_t*)_2)[4] = _30941;
    _30942 = MAKE_SEQ(_1);
    _30941 = NOVALUE;
    _30940 = NOVALUE;
    _30939 = NOVALUE;
    _30937 = NOVALUE;
    // SubProg patch_forward_call pc: 326 op: PROC (27)
    RefDS(_30936);
    _50CompileErr(_30936, _30942, 0);
    _30942 = NOVALUE;
    // SubProg patch_forward_call pc: 331 op: NOP1 (159)
L2: // addr: 332 pc: 331 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 332 op: STARTLINE (58)

    /** fwdref.e:278		if SymTab[sub][S_DEPRECATED] then*/
    // SubProg patch_forward_call pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 336 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30943 = (object)*(((s1_ptr)_2)->base + _sub_62362);
    // SubProg patch_forward_call pc: 340 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 342 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30943);
    _30944 = (object)*(((s1_ptr)_2)->base + 30);
    _30943 = NOVALUE;
    // SubProg patch_forward_call pc: 346 op: IF (20)
    if (_30944 == 0) {
        _30944 = NOVALUE;
        goto L3; // [346] 375
    }
    else {
        if (!IS_ATOM_INT(_30944) && DBL_PTR(_30944)->dbl == 0.0){
            _30944 = NOVALUE;
            goto L3; // [346] 375
        }
        _30944 = NOVALUE;
    }
    _30944 = NOVALUE;
    // SubProg patch_forward_call pc: 349 op: STARTLINE (58)

    /** fwdref.e:279			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    // SubProg patch_forward_call pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 355 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _30945 = (object)*(((s1_ptr)_2)->base + _sub_62362);
    // SubProg patch_forward_call pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 361 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30945);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _30946 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _30946 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _30945 = NOVALUE;
    // SubProg patch_forward_call pc: 365 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30946);
    ((intptr_t*)_2)[1] = _30946;
    _30947 = MAKE_SEQ(_1);
    _30946 = NOVALUE;
    // SubProg patch_forward_call pc: 369 op: PROC (27)
    _50Warning(327, 16384, _30947);
    _30947 = NOVALUE;
    // SubProg patch_forward_call pc: 374 op: NOP1 (159)
L3: // addr: 375 pc: 374 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 375 op: STARTLINE (58)

    /** fwdref.e:282		integer old_temps_allocated = temps_allocated*/
    // SubProg patch_forward_call pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 379 op: ASSIGN (18)
    _old_temps_allocated_62460 = _54temps_allocated_46785;
    // SubProg patch_forward_call pc: 382 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 384 op: STARTLINE (58)

    /** fwdref.e:283		temps_allocated = 0*/
    // SubProg patch_forward_call pc: 386 op: ASSIGN (18)
    _54temps_allocated_46785 = 0;
    // SubProg patch_forward_call pc: 389 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 391 op: STARTLINE (58)

    /** fwdref.e:285		if is_func and fr[FR_OP] = PROC then*/
    // SubProg patch_forward_call pc: 393 op: SC1_AND_IF (146)
    if (_is_func_62396 == 0) {
        goto L4; // [393] 481
    }
    // SubProg patch_forward_call pc: 397 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _30949 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_call pc: 401 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 403 op: EQUALS (3)
    if (IS_ATOM_INT(_30949)) {
        _30950 = (_30949 == 27);
    }
    else {
        _30950 = binary_op(EQUALS, _30949, 27);
    }
    _30949 = NOVALUE;
    // SubProg patch_forward_call pc: 407 op: NOP1 (159)
    // SubProg patch_forward_call pc: 408 op: IF (20)
    if (_30950 == 0) {
        DeRef(_30950);
        _30950 = NOVALUE;
        goto L4; // [408] 481
    }
    else {
        if (!IS_ATOM_INT(_30950) && DBL_PTR(_30950)->dbl == 0.0){
            DeRef(_30950);
            _30950 = NOVALUE;
            goto L4; // [408] 481
        }
        DeRef(_30950);
        _30950 = NOVALUE;
    }
    DeRef(_30950);
    _30950 = NOVALUE;
    // SubProg patch_forward_call pc: 411 op: STARTLINE (58)

    /** fwdref.e:288			symtab_index temp_target = NewTempSym()*/
    // SubProg patch_forward_call pc: 413 op: PROC (27)
    _temp_target_62469 = _54NewTempSym(0);
    // SubProg patch_forward_call pc: 417 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_temp_target_62469)) {
        _1 = (object)(DBL_PTR(_temp_target_62469)->dbl);
        DeRefDS(_temp_target_62469);
        _temp_target_62469 = _1;
    }
    // SubProg patch_forward_call pc: 419 op: STARTLINE (58)

    /** fwdref.e:289			sequence converted_code = */
    // SubProg patch_forward_call pc: 421 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 423 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 425 op: PLUS1 (93)
    _30952 = _pc_62418 + 1;
    if (_30952 > MAXINT){
        _30952 = NewDouble((eudouble)_30952);
    }
    // SubProg patch_forward_call pc: 429 op: PLUS (11)
    _30953 = _pc_62418 + 2;
    if ((object)((uintptr_t)_30953 + (uintptr_t)HIGH_BITS) >= 0){
        _30953 = NewDouble((eudouble)_30953);
    }
    // SubProg patch_forward_call pc: 433 op: PLUS (11)
    if (IS_ATOM_INT(_30953)) {
        _30954 = _30953 + _supplied_args_62421;
    }
    else {
        _30954 = NewDouble(DBL_PTR(_30953)->dbl + (eudouble)_supplied_args_62421);
    }
    DeRef(_30953);
    _30953 = NOVALUE;
    // SubProg patch_forward_call pc: 437 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_30955;
    RHS_Slice(_36Code_16524, _30952, _30954);
    // SubProg patch_forward_call pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 444 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 208;
    ((intptr_t *)_2)[2] = _temp_target_62469;
    _30956 = MAKE_SEQ(_1);
    // SubProg patch_forward_call pc: 448 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _30956;
        concat_list[1] = _temp_target_62469;
        concat_list[2] = _30955;
        concat_list[3] = 196;
        Concat_N((object_ptr)&_converted_code_62472, concat_list, 4);
    }
    DeRefDS(_30956);
    _30956 = NOVALUE;
    DeRefDS(_30955);
    _30955 = NOVALUE;
    // SubProg patch_forward_call pc: 455 op: STARTLINE (58)

    /** fwdref.e:295			replace_code( converted_code, pc, pc + 2 + supplied_args, code_sub )*/
    // SubProg patch_forward_call pc: 457 op: PLUS (11)
    _30958 = _pc_62418 + 2;
    if ((object)((uintptr_t)_30958 + (uintptr_t)HIGH_BITS) >= 0){
        _30958 = NewDouble((eudouble)_30958);
    }
    // SubProg patch_forward_call pc: 461 op: PLUS (11)
    if (IS_ATOM_INT(_30958)) {
        _30959 = _30958 + _supplied_args_62421;
        if ((object)((uintptr_t)_30959 + (uintptr_t)HIGH_BITS) >= 0){
            _30959 = NewDouble((eudouble)_30959);
        }
    }
    else {
        _30959 = NewDouble(DBL_PTR(_30958)->dbl + (eudouble)_supplied_args_62421);
    }
    DeRef(_30958);
    _30958 = NOVALUE;
    // SubProg patch_forward_call pc: 465 op: PROC (27)
    RefDS(_converted_code_62472);
    _39replace_code(_converted_code_62472, _pc_62418, _30959, _code_sub_62389);
    _30959 = NOVALUE;
    // SubProg patch_forward_call pc: 471 op: STARTLINE (58)

    /** fwdref.e:297			code = Code*/
    // SubProg patch_forward_call pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 475 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_code_62414);
    _code_62414 = _36Code_16524;
    // SubProg patch_forward_call pc: 478 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 480 op: NOP1 (159)
L4: // addr: 481 pc: 480 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var temp_target_62469

// block var converted_code_62472
    DeRef(_converted_code_62472);
    _converted_code_62472 = NOVALUE;
    // SubProg patch_forward_call pc: 483 op: STARTLINE (58)

    /** fwdref.e:299		next_pc +=*/
    // SubProg patch_forward_call pc: 485 op: PLUS (11)
    _30960 = 3 + _supplied_args_62421;
    if ((object)((uintptr_t)_30960 + (uintptr_t)HIGH_BITS) >= 0){
        _30960 = NewDouble((eudouble)_30960);
    }
    // SubProg patch_forward_call pc: 489 op: PLUS (11)
    if (IS_ATOM_INT(_30960)) {
        _30961 = _30960 + _is_func_62396;
        if ((object)((uintptr_t)_30961 + (uintptr_t)HIGH_BITS) >= 0){
            _30961 = NewDouble((eudouble)_30961);
        }
    }
    else {
        _30961 = NewDouble(DBL_PTR(_30960)->dbl + (eudouble)_is_func_62396);
    }
    DeRef(_30960);
    _30960 = NOVALUE;
    // SubProg patch_forward_call pc: 493 op: PLUS (11)
    if (IS_ATOM_INT(_30961)) {
        _next_pc_62420 = _next_pc_62420 + _30961;
    }
    else {
        _next_pc_62420 = NewDouble((eudouble)_next_pc_62420 + DBL_PTR(_30961)->dbl);
    }
    DeRef(_30961);
    _30961 = NOVALUE;
    // SubProg patch_forward_call pc: 497 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_pc_62420)) {
        _1 = (object)(DBL_PTR(_next_pc_62420)->dbl);
        DeRefDS(_next_pc_62420);
        _next_pc_62420 = _1;
    }
    // SubProg patch_forward_call pc: 499 op: STARTLINE (58)

    /** fwdref.e:303		integer target*/
    // SubProg patch_forward_call pc: 501 op: STARTLINE (58)

    /** fwdref.e:304		if is_func then*/
    // SubProg patch_forward_call pc: 503 op: IF (20)
    if (_is_func_62396 == 0)
    {
        goto L5; // [503] 525
    }
    else{
    }
    // SubProg patch_forward_call pc: 506 op: STARTLINE (58)

    /** fwdref.e:305			target = Code[pc + 3 + supplied_args]*/
    // SubProg patch_forward_call pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 510 op: PLUS (11)
    _30963 = _pc_62418 + 3;
    if ((object)((uintptr_t)_30963 + (uintptr_t)HIGH_BITS) >= 0){
        _30963 = NewDouble((eudouble)_30963);
    }
    // SubProg patch_forward_call pc: 514 op: PLUS (11)
    if (IS_ATOM_INT(_30963)) {
        _30964 = _30963 + _supplied_args_62421;
    }
    else {
        _30964 = NewDouble(DBL_PTR(_30963)->dbl + (eudouble)_supplied_args_62421);
    }
    DeRef(_30963);
    _30963 = NOVALUE;
    // SubProg patch_forward_call pc: 518 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    if (!IS_ATOM_INT(_30964)){
        _target_62488 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_30964)->dbl));
    }
    else{
        _target_62488 = (object)*(((s1_ptr)_2)->base + _30964);
    }
    if (!IS_ATOM_INT(_target_62488)){
        _target_62488 = (object)DBL_PTR(_target_62488)->dbl;
    }
    // SubProg patch_forward_call pc: 524 op: NOP1 (159)
L5: // addr: 525 pc: 524 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 525 op: STARTLINE (58)

    /** fwdref.e:307		integer has_defaults = 0*/
    // SubProg patch_forward_call pc: 527 op: ASSIGN_I (113)
    _has_defaults_62494 = 0;
    // SubProg patch_forward_call pc: 530 op: STARTLINE (58)

    /** fwdref.e:308		integer goto_target = length( code ) + 1*/
    // SubProg patch_forward_call pc: 532 op: LENGTH (42)
    if (IS_SEQUENCE(_code_62414)){
            _30966 = SEQ_PTR(_code_62414)->length;
    }
    else {
        _30966 = 1;
    }
    // SubProg patch_forward_call pc: 535 op: PLUS1_I (117)
    _goto_target_62495 = _30966 + 1;
    _30966 = NOVALUE;
    // SubProg patch_forward_call pc: 539 op: STARTLINE (58)

    /** fwdref.e:309		integer defarg = 0*/
    // SubProg patch_forward_call pc: 541 op: ASSIGN_I (113)
    _defarg_62498 = 0;
    // SubProg patch_forward_call pc: 544 op: STARTLINE (58)

    /** fwdref.e:310		integer code_len = length(code)*/
    // SubProg patch_forward_call pc: 546 op: LENGTH (42)
    if (IS_SEQUENCE(_code_62414)){
            _code_len_62499 = SEQ_PTR(_code_62414)->length;
    }
    else {
        _code_len_62499 = 1;
    }
    // SubProg patch_forward_call pc: 549 op: STARTLINE (58)

    /** fwdref.e:312		integer extra_default_args = 0*/
    // SubProg patch_forward_call pc: 551 op: ASSIGN_I (113)
    _extra_default_args_62501 = 0;
    // SubProg patch_forward_call pc: 554 op: STARTLINE (58)

    /** fwdref.e:313		set_dont_read( 1 )*/
    // SubProg patch_forward_call pc: 556 op: PROC (27)
    _62set_dont_read(1);
    // SubProg patch_forward_call pc: 559 op: STARTLINE (58)

    /** fwdref.e:314		reset_private_lists()*/
    // SubProg patch_forward_call pc: 561 op: STARTLINE (58)

    /** fwdref.e:212		fwd_private_sym  = {}*/
    // SubProg patch_forward_call pc: 563 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_39fwd_private_sym_62320);
    _39fwd_private_sym_62320 = _21933;
    // SubProg patch_forward_call pc: 566 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 568 op: STARTLINE (58)

    /** fwdref.e:213		fwd_private_name = {}*/
    // SubProg patch_forward_call pc: 570 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39fwd_private_name_62321);
    _39fwd_private_name_62321 = _21933;
    // SubProg patch_forward_call pc: 573 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 575 op: STARTLINE (58)

    /** fwdref.e:214	end procedure*/
    // SubProg patch_forward_call pc: 577 op: ELSE (23)
    goto L6; // [577] 580
    // SubProg patch_forward_call pc: 579 op: NOP1 (159)
L6: // addr: 580 pc: 579 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 580 op: STARTLINE (58)

    /** fwdref.e:315		integer param_sym = sub*/
    // SubProg patch_forward_call pc: 582 op: ASSIGN (18)
    _param_sym_62504 = _sub_62362;
    // SubProg patch_forward_call pc: 585 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 587 op: STARTLINE (58)

    /** fwdref.e:316		sequence params = repeat( 0, args )*/
    // SubProg patch_forward_call pc: 589 op: REPEAT (32)
    DeRef(_params_62505);
    _params_62505 = Repeat(0, _args_62391);
    // SubProg patch_forward_call pc: 593 op: STARTLINE (58)

    /** fwdref.e:317		sequence orig_code = code*/
    // SubProg patch_forward_call pc: 595 op: ASSIGN (18)
    RefDS(_code_62414);
    DeRef(_orig_code_62507);
    _orig_code_62507 = _code_62414;
    // SubProg patch_forward_call pc: 598 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 600 op: STARTLINE (58)

    /** fwdref.e:318		sequence orig_linetable = LineTable*/
    // SubProg patch_forward_call pc: 602 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 604 op: ASSIGN (18)
    RefDS(_36LineTable_16525);
    DeRef(_orig_linetable_62508);
    _orig_linetable_62508 = _36LineTable_16525;
    // SubProg patch_forward_call pc: 607 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 609 op: STARTLINE (58)

    /** fwdref.e:319		LineTable = {}*/
    // SubProg patch_forward_call pc: 611 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_36LineTable_16525);
    _36LineTable_16525 = _21933;
    // SubProg patch_forward_call pc: 614 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 616 op: STARTLINE (58)

    /** fwdref.e:320		Code = {}*/
    // SubProg patch_forward_call pc: 618 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_36Code_16524);
    _36Code_16524 = _21933;
    // SubProg patch_forward_call pc: 621 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 623 op: STARTLINE (58)

    /** fwdref.e:323		integer ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    // SubProg patch_forward_call pc: 625 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 629 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _30970 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg patch_forward_call pc: 633 op: FIND_FROM (176)
    _ar_sp_62512 = find_from(_code_sub_62389, _30970, 1);
    _30970 = NOVALUE;
    // SubProg patch_forward_call pc: 638 op: STARTLINE (58)

    /** fwdref.e:324		integer pre_refs*/
    // SubProg patch_forward_call pc: 640 op: STARTLINE (58)

    /** fwdref.e:326		if code_sub = TopLevelSub then*/
    // SubProg patch_forward_call pc: 642 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 644 op: EQUALS_IFW (104)
    if (_code_sub_62389 != _36TopLevelSub_16443)
    goto L7; // [644] 664
    // SubProg patch_forward_call pc: 648 op: STARTLINE (58)

    /** fwdref.e:327			pre_refs = length( toplevel_references[current_file_no] )*/
    // SubProg patch_forward_call pc: 650 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 652 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 654 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    _30973 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg patch_forward_call pc: 658 op: LENGTH (42)
    if (IS_SEQUENCE(_30973)){
            _pre_refs_62516 = SEQ_PTR(_30973)->length;
    }
    else {
        _pre_refs_62516 = 1;
    }
    _30973 = NOVALUE;
    // SubProg patch_forward_call pc: 661 op: ELSE (23)
    goto L8; // [661] 697
    // SubProg patch_forward_call pc: 663 op: NOP1 (159)
L7: // addr: 664 pc: 663 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 664 op: STARTLINE (58)

    /** fwdref.e:329			ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    // SubProg patch_forward_call pc: 666 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 668 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 670 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _30975 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg patch_forward_call pc: 674 op: FIND_FROM (176)
    _ar_sp_62512 = find_from(_code_sub_62389, _30975, 1);
    _30975 = NOVALUE;
    // SubProg patch_forward_call pc: 679 op: STARTLINE (58)

    /** fwdref.e:330			pre_refs = length( active_references[current_file_no][ar_sp] )*/
    // SubProg patch_forward_call pc: 681 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 683 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 685 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _30977 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg patch_forward_call pc: 689 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30977);
    _30978 = (object)*(((s1_ptr)_2)->base + _ar_sp_62512);
    _30977 = NOVALUE;
    // SubProg patch_forward_call pc: 693 op: LENGTH (42)
    if (IS_SEQUENCE(_30978)){
            _pre_refs_62516 = SEQ_PTR(_30978)->length;
    }
    else {
        _pre_refs_62516 = 1;
    }
    _30978 = NOVALUE;
    // SubProg patch_forward_call pc: 696 op: NOP1 (159)
L8: // addr: 697 pc: 696 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 697 op: STARTLINE (58)

    /** fwdref.e:333		sequence old_fwd_params = {}*/
    // SubProg patch_forward_call pc: 699 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_old_fwd_params_62531);
    _old_fwd_params_62531 = _21933;
    // SubProg patch_forward_call pc: 702 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 704 op: STARTLINE (58)

    /** fwdref.e:334		for i = pc + 3 to pc + args + 2 do*/
    // SubProg patch_forward_call pc: 706 op: PLUS (11)
    _30980 = _pc_62418 + 3;
    if ((object)((uintptr_t)_30980 + (uintptr_t)HIGH_BITS) >= 0){
        _30980 = NewDouble((eudouble)_30980);
    }
    // SubProg patch_forward_call pc: 710 op: PLUS (11)
    _30981 = _pc_62418 + _args_62391;
    if ((object)((uintptr_t)_30981 + (uintptr_t)HIGH_BITS) >= 0){
        _30981 = NewDouble((eudouble)_30981);
    }
    // SubProg patch_forward_call pc: 714 op: PLUS (11)
    if (IS_ATOM_INT(_30981)) {
        _30982 = _30981 + 2;
        if ((object)((uintptr_t)_30982 + (uintptr_t)HIGH_BITS) >= 0){
            _30982 = NewDouble((eudouble)_30982);
        }
    }
    else {
        _30982 = NewDouble(DBL_PTR(_30981)->dbl + (eudouble)2);
    }
    DeRef(_30981);
    _30981 = NOVALUE;
    // SubProg patch_forward_call pc: 718 op: FOR (21)
    {
        object _i_62533;
        Ref(_30980);
        _i_62533 = _30980;
L9: // addr: 725 pc: 718 sub: 62354 op: 21
        if (binary_op_a(GREATER, _i_62533, _30982)){
            goto LA; // [718] 879
        }
        // SubProg patch_forward_call pc: 725 op: STARTLINE (58)

        /** fwdref.e:335			defarg += 1*/
        // SubProg patch_forward_call pc: 727 op: PLUS1_I (117)
        _defarg_62498 = _defarg_62498 + 1;
        // SubProg patch_forward_call pc: 731 op: STARTLINE (58)

        /** fwdref.e:336			param_sym = SymTab[param_sym][S_NEXT]*/
        // SubProg patch_forward_call pc: 733 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 735 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _30984 = (object)*(((s1_ptr)_2)->base + _param_sym_62504);
        // SubProg patch_forward_call pc: 739 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 741 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_30984);
        _param_sym_62504 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_sym_62504)){
            _param_sym_62504 = (object)DBL_PTR(_param_sym_62504)->dbl;
        }
        _30984 = NOVALUE;
        // SubProg patch_forward_call pc: 747 op: STARTLINE (58)

        /** fwdref.e:337			if defarg > supplied_args or i > length( code ) or not code[i] then*/
        // SubProg patch_forward_call pc: 749 op: GREATER (6)
        _30986 = (_defarg_62498 > _supplied_args_62421);
        // SubProg patch_forward_call pc: 753 op: SC1_OR (143)
        if (_30986 != 0) {
            _30987 = 1;
            goto LB; // [753] 768
        }
        // SubProg patch_forward_call pc: 757 op: LENGTH (42)
        if (IS_SEQUENCE(_code_62414)){
                _30988 = SEQ_PTR(_code_62414)->length;
        }
        else {
            _30988 = 1;
        }
        // SubProg patch_forward_call pc: 760 op: GREATER (6)
        if (IS_ATOM_INT(_i_62533)) {
            _30989 = (_i_62533 > _30988);
        }
        else {
            _30989 = (DBL_PTR(_i_62533)->dbl > (eudouble)_30988);
        }
        _30988 = NOVALUE;
        // SubProg patch_forward_call pc: 764 op: SC2_OR (144)
        _30987 = (_30989 != 0);
        // SubProg patch_forward_call pc: 767 op: NOP1 (159)
LB: // addr: 768 pc: 767 sub: 62354 op: 159
        // SubProg patch_forward_call pc: 768 op: SC1_OR_IF (147)
        if (_30987 != 0) {
            goto LC; // [768] 784
        }
        // SubProg patch_forward_call pc: 772 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62414);
        if (!IS_ATOM_INT(_i_62533)){
            _30991 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62533)->dbl));
        }
        else{
            _30991 = (object)*(((s1_ptr)_2)->base + _i_62533);
        }
        // SubProg patch_forward_call pc: 776 op: NOT (7)
        if (IS_ATOM_INT(_30991)) {
            _30992 = (_30991 == 0);
        }
        else {
            _30992 = unary_op(NOT, _30991);
        }
        _30991 = NOVALUE;
        // SubProg patch_forward_call pc: 779 op: NOP1 (159)
        // SubProg patch_forward_call pc: 780 op: IF (20)
        if (_30992 == 0) {
            DeRef(_30992);
            _30992 = NOVALUE;
            goto LD; // [780] 834
        }
        else {
            if (!IS_ATOM_INT(_30992) && DBL_PTR(_30992)->dbl == 0.0){
                DeRef(_30992);
                _30992 = NOVALUE;
                goto LD; // [780] 834
            }
            DeRef(_30992);
            _30992 = NOVALUE;
        }
        DeRef(_30992);
        _30992 = NOVALUE;
        // SubProg patch_forward_call pc: 783 op: NOP1 (159)
LC: // addr: 784 pc: 783 sub: 62354 op: 159
        // SubProg patch_forward_call pc: 784 op: STARTLINE (58)

        /** fwdref.e:339				has_defaults = 1*/
        // SubProg patch_forward_call pc: 786 op: ASSIGN_I (113)
        _has_defaults_62494 = 1;
        // SubProg patch_forward_call pc: 789 op: STARTLINE (58)

        /** fwdref.e:340				extra_default_args += 1*/
        // SubProg patch_forward_call pc: 791 op: PLUS1_I (117)
        _extra_default_args_62501 = _extra_default_args_62501 + 1;
        // SubProg patch_forward_call pc: 795 op: STARTLINE (58)

        /** fwdref.e:345				show_params( sub )*/
        // SubProg patch_forward_call pc: 797 op: PROC (27)
        _54show_params(_sub_62362);
        // SubProg patch_forward_call pc: 800 op: STARTLINE (58)

        /** fwdref.e:346				set_error_info( ref )*/
        // SubProg patch_forward_call pc: 802 op: PROC (27)
        _39set_error_info(_ref_62358);
        // SubProg patch_forward_call pc: 805 op: STARTLINE (58)

        /** fwdref.e:347				Parse_default_arg(sub, defarg, fwd_private_name, fwd_private_sym) --call_proc( parse_arg_rid, { sub, defarg, fwd_private_name, fwd_private_sym } )*/
        // SubProg patch_forward_call pc: 807 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 809 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 811 op: PROC (27)
        RefDS(_39fwd_private_name_62321);
        RefDS(_39fwd_private_sym_62320);
        _40Parse_default_arg(_sub_62362, _defarg_62498, _39fwd_private_name_62321, _39fwd_private_sym_62320);
        // SubProg patch_forward_call pc: 817 op: STARTLINE (58)

        /** fwdref.e:348				hide_params( sub )*/
        // SubProg patch_forward_call pc: 819 op: PROC (27)
        _54hide_params(_sub_62362);
        // SubProg patch_forward_call pc: 822 op: STARTLINE (58)

        /** fwdref.e:349				params[defarg] = Pop()*/
        // SubProg patch_forward_call pc: 824 op: PROC (27)
        _30994 = _47Pop();
        // SubProg patch_forward_call pc: 827 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_params_62505);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62498);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _30994;
        if( _1 != _30994 ){
            DeRef(_1);
        }
        _30994 = NOVALUE;
        // SubProg patch_forward_call pc: 831 op: ELSE (23)
        goto LE; // [831] 872
        // SubProg patch_forward_call pc: 833 op: NOP1 (159)
LD: // addr: 834 pc: 833 sub: 62354 op: 159
        // SubProg patch_forward_call pc: 834 op: STARTLINE (58)

        /** fwdref.e:351				extra_default_args = 0*/
        // SubProg patch_forward_call pc: 836 op: ASSIGN_I (113)
        _extra_default_args_62501 = 0;
        // SubProg patch_forward_call pc: 839 op: STARTLINE (58)

        /** fwdref.e:352				add_private_symbol( code[i], SymTab[param_sym][S_NAME] )*/
        // SubProg patch_forward_call pc: 841 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62414);
        if (!IS_ATOM_INT(_i_62533)){
            _30995 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62533)->dbl));
        }
        else{
            _30995 = (object)*(((s1_ptr)_2)->base + _i_62533);
        }
        // SubProg patch_forward_call pc: 845 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 847 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _30996 = (object)*(((s1_ptr)_2)->base + _param_sym_62504);
        // SubProg patch_forward_call pc: 851 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 853 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_30996);
        if (!IS_ATOM_INT(_36S_NAME_16091)){
            _30997 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
        }
        else{
            _30997 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
        }
        _30996 = NOVALUE;
        // SubProg patch_forward_call pc: 857 op: PROC (27)
        Ref(_30995);
        Ref(_30997);
        _39add_private_symbol(_30995, _30997);
        _30995 = NOVALUE;
        _30997 = NOVALUE;
        // SubProg patch_forward_call pc: 861 op: STARTLINE (58)

        /** fwdref.e:353				params[defarg] = code[i]*/
        // SubProg patch_forward_call pc: 863 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62414);
        if (!IS_ATOM_INT(_i_62533)){
            _30998 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62533)->dbl));
        }
        else{
            _30998 = (object)*(((s1_ptr)_2)->base + _i_62533);
        }
        // SubProg patch_forward_call pc: 867 op: ASSIGN_SUBS (16)
        Ref(_30998);
        _2 = (object)SEQ_PTR(_params_62505);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62498);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _30998;
        if( _1 != _30998 ){
            DeRef(_1);
        }
        _30998 = NOVALUE;
        // SubProg patch_forward_call pc: 871 op: NOP1 (159)
LE: // addr: 872 pc: 871 sub: 62354 op: 159
        // SubProg patch_forward_call pc: 872 op: STARTLINE (58)

        /** fwdref.e:355		end for*/
        // SubProg patch_forward_call pc: 874 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62533;
        if (IS_ATOM_INT(_i_62533)) {
            _i_62533 = _i_62533 + 1;
            if ((object)((uintptr_t)_i_62533 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62533 = NewDouble((eudouble)_i_62533);
            }
        }
        else {
            _i_62533 = binary_op_a(PLUS, _i_62533, 1);
        }
        DeRef(_0);
        goto L9; // [874] 725
LA: // addr: 879 pc: 874 sub: 62354 op: 54
        ;
        DeRef(_i_62533);
    }
    // SubProg patch_forward_call pc: 879 op: STARTLINE (58)

    /** fwdref.e:357		SymTab[code_sub][S_STACK_SPACE] += temps_allocated*/
    // SubProg patch_forward_call pc: 881 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 883 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_code_sub_62389 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_call pc: 888 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 892 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151)){
        _31001 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    }
    else{
        _31001 = (object)*(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    }
    _30999 = NOVALUE;
    // SubProg patch_forward_call pc: 896 op: PLUS (11)
    if (IS_ATOM_INT(_31001)) {
        _31002 = _31001 + _54temps_allocated_46785;
        if ((object)((uintptr_t)_31002 + (uintptr_t)HIGH_BITS) >= 0){
            _31002 = NewDouble((eudouble)_31002);
        }
    }
    else {
        _31002 = binary_op(PLUS, _31001, _54temps_allocated_46785);
    }
    _31001 = NOVALUE;
    // SubProg patch_forward_call pc: 900 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31002;
    if( _1 != _31002 ){
        DeRef(_1);
    }
    _31002 = NOVALUE;
    _30999 = NOVALUE;
    // SubProg patch_forward_call pc: 904 op: STARTLINE (58)

    /** fwdref.e:358		temps_allocated = old_temps_allocated*/
    // SubProg patch_forward_call pc: 906 op: ASSIGN (18)
    _54temps_allocated_46785 = _old_temps_allocated_62460;
    // SubProg patch_forward_call pc: 909 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 911 op: STARTLINE (58)

    /** fwdref.e:363		integer temp_shifting_sub = shifting_sub*/
    // SubProg patch_forward_call pc: 913 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 915 op: ASSIGN_I (113)
    _temp_shifting_sub_62572 = _39shifting_sub_62149;
    // SubProg patch_forward_call pc: 918 op: STARTLINE (58)

    /** fwdref.e:364		shift( -pc, pc-1 )*/
    // SubProg patch_forward_call pc: 920 op: UMINUS (12)
    if ((uintptr_t)_pc_62418 == (uintptr_t)HIGH_BITS){
        _31003 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31003 = - _pc_62418;
    }
    // SubProg patch_forward_call pc: 923 op: MINUS (10)
    _31004 = _pc_62418 - 1;
    if ((object)((uintptr_t)_31004 +(uintptr_t) HIGH_BITS) >= 0){
        _31004 = NewDouble((eudouble)_31004);
    }
    // SubProg patch_forward_call pc: 927 op: ASSIGN (18)
    Ref(_31003);
    DeRef(_31666);
    _31666 = _31003;
    // SubProg patch_forward_call pc: 930 op: PROC (27)
    _66shift(_31003, _31004, _31666);
    _31003 = NOVALUE;
    _31004 = NOVALUE;
    _31666 = NOVALUE;
    // SubProg patch_forward_call pc: 935 op: STARTLINE (58)

    /** fwdref.e:366		sequence new_code = Code*/
    // SubProg patch_forward_call pc: 937 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 939 op: ASSIGN (18)
    RefDS(_36Code_16524);
    DeRef(_new_code_62576);
    _new_code_62576 = _36Code_16524;
    // SubProg patch_forward_call pc: 942 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 944 op: STARTLINE (58)

    /** fwdref.e:367		Code = orig_code*/
    // SubProg patch_forward_call pc: 946 op: ASSIGN (18)
    RefDS(_orig_code_62507);
    DeRefDS(_36Code_16524);
    _36Code_16524 = _orig_code_62507;
    // SubProg patch_forward_call pc: 949 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 951 op: STARTLINE (58)

    /** fwdref.e:368		orig_code = {}*/
    // SubProg patch_forward_call pc: 953 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_orig_code_62507);
    _orig_code_62507 = _21933;
    // SubProg patch_forward_call pc: 956 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 958 op: STARTLINE (58)

    /** fwdref.e:369		LineTable = orig_linetable*/
    // SubProg patch_forward_call pc: 960 op: ASSIGN (18)
    RefDS(_orig_linetable_62508);
    DeRef(_36LineTable_16525);
    _36LineTable_16525 = _orig_linetable_62508;
    // SubProg patch_forward_call pc: 963 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 965 op: STARTLINE (58)

    /** fwdref.e:370		orig_linetable = {}*/
    // SubProg patch_forward_call pc: 967 op: ASSIGN (18)
    RefDS(_21933);
    DeRefDS(_orig_linetable_62508);
    _orig_linetable_62508 = _21933;
    // SubProg patch_forward_call pc: 970 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 972 op: STARTLINE (58)

    /** fwdref.e:371		set_dont_read( 0 )*/
    // SubProg patch_forward_call pc: 974 op: PROC (27)
    _62set_dont_read(0);
    // SubProg patch_forward_call pc: 977 op: STARTLINE (58)

    /** fwdref.e:372		current_file_no = real_file*/
    // SubProg patch_forward_call pc: 979 op: ASSIGN (18)
    _36current_file_no_16436 = _real_file_62410;
    // SubProg patch_forward_call pc: 982 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 984 op: STARTLINE (58)

    /** fwdref.e:374		if args != ( supplied_args + extra_default_args ) then*/
    // SubProg patch_forward_call pc: 986 op: PLUS (11)
    _31005 = _supplied_args_62421 + _extra_default_args_62501;
    if ((object)((uintptr_t)_31005 + (uintptr_t)HIGH_BITS) >= 0){
        _31005 = NewDouble((eudouble)_31005);
    }
    // SubProg patch_forward_call pc: 990 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _args_62391, _31005)){
        DeRef(_31005);
        _31005 = NOVALUE;
        goto LF; // [990] 1068
    }
    DeRef(_31005);
    _31005 = NOVALUE;
    // SubProg patch_forward_call pc: 994 op: STARTLINE (58)

    /** fwdref.e:375			sequence routine_type*/
    // SubProg patch_forward_call pc: 996 op: STARTLINE (58)

    /** fwdref.e:377			if is_func then */
    // SubProg patch_forward_call pc: 998 op: IF (20)
    if (_is_func_62396 == 0)
    {
        goto L10; // [998] 1011
    }
    else{
    }
    // SubProg patch_forward_call pc: 1001 op: STARTLINE (58)

    /** fwdref.e:378				routine_type = "function"*/
    // SubProg patch_forward_call pc: 1003 op: ASSIGN (18)
    RefDS(_26128);
    DeRefi(_routine_type_62585);
    _routine_type_62585 = _26128;
    // SubProg patch_forward_call pc: 1006 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 1008 op: ELSE (23)
    goto L11; // [1008] 1019
    // SubProg patch_forward_call pc: 1010 op: NOP1 (159)
L10: // addr: 1011 pc: 1010 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 1011 op: STARTLINE (58)

    /** fwdref.e:380				routine_type = "procedure"*/
    // SubProg patch_forward_call pc: 1013 op: ASSIGN (18)
    RefDS(_26182);
    DeRefi(_routine_type_62585);
    _routine_type_62585 = _26182;
    // SubProg patch_forward_call pc: 1016 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 1018 op: NOP1 (159)
L11: // addr: 1019 pc: 1018 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 1019 op: STARTLINE (58)

    /** fwdref.e:382			current_file_no = fr[FR_FILE]*/
    // SubProg patch_forward_call pc: 1021 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _36current_file_no_16436 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_36current_file_no_16436)){
        _36current_file_no_16436 = (object)DBL_PTR(_36current_file_no_16436)->dbl;
    }
    // SubProg patch_forward_call pc: 1027 op: STARTLINE (58)

    /** fwdref.e:383			line_number = fr[FR_LINE]*/
    // SubProg patch_forward_call pc: 1029 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _36line_number_16437 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_36line_number_16437)){
        _36line_number_16437 = (object)DBL_PTR(_36line_number_16437)->dbl;
    }
    // SubProg patch_forward_call pc: 1035 op: STARTLINE (58)

    /** fwdref.e:384			CompileErr( 158,*/
    // SubProg patch_forward_call pc: 1037 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1039 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1041 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _31010 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg patch_forward_call pc: 1045 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1047 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1049 op: PLUS (11)
    _31011 = _supplied_args_62421 + _extra_default_args_62501;
    if ((object)((uintptr_t)_31011 + (uintptr_t)HIGH_BITS) >= 0){
        _31011 = NewDouble((eudouble)_31011);
    }
    // SubProg patch_forward_call pc: 1053 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_31010);
    ((intptr_t*)_2)[1] = _31010;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    RefDS(_routine_type_62585);
    ((intptr_t*)_2)[3] = _routine_type_62585;
    RefDS(_name_62424);
    ((intptr_t*)_2)[4] = _name_62424;
    ((intptr_t*)_2)[5] = _args_62391;
    ((intptr_t*)_2)[6] = _31011;
    _31012 = MAKE_SEQ(_1);
    _31011 = NOVALUE;
    _31010 = NOVALUE;
    // SubProg patch_forward_call pc: 1062 op: PROC (27)
    _50CompileErr(158, _31012, 0);
    _31012 = NOVALUE;
    // SubProg patch_forward_call pc: 1067 op: NOP1 (159)
LF: // addr: 1068 pc: 1067 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 1068 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var routine_type_62585
    DeRefi(_routine_type_62585);
    _routine_type_62585 = NOVALUE;
    // SubProg patch_forward_call pc: 1070 op: STARTLINE (58)

    /** fwdref.e:388		new_code &= PROC & sub & params*/
    // SubProg patch_forward_call pc: 1072 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1074 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _params_62505;
        concat_list[1] = _sub_62362;
        concat_list[2] = 27;
        Concat_N((object_ptr)&_31013, concat_list, 3);
    }
    // SubProg patch_forward_call pc: 1080 op: CONCAT (15)
    Concat((object_ptr)&_new_code_62576, _new_code_62576, _31013);
    DeRefDS(_31013);
    _31013 = NOVALUE;
    // SubProg patch_forward_call pc: 1084 op: STARTLINE (58)

    /** fwdref.e:389		if is_func then*/
    // SubProg patch_forward_call pc: 1086 op: IF (20)
    if (_is_func_62396 == 0)
    {
        goto L12; // [1086] 1098
    }
    else{
    }
    // SubProg patch_forward_call pc: 1089 op: STARTLINE (58)

    /** fwdref.e:390			new_code &= target*/
    // SubProg patch_forward_call pc: 1091 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1093 op: CONCAT (15)
    Append(&_new_code_62576, _new_code_62576, _target_62488);
    // SubProg patch_forward_call pc: 1097 op: NOP1 (159)
L12: // addr: 1098 pc: 1097 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 1098 op: STARTLINE (58)

    /** fwdref.e:393		replace_code( new_code, pc, next_pc - 1, code_sub )*/
    // SubProg patch_forward_call pc: 1100 op: MINUS (10)
    _31016 = _next_pc_62420 - 1;
    if ((object)((uintptr_t)_31016 +(uintptr_t) HIGH_BITS) >= 0){
        _31016 = NewDouble((eudouble)_31016);
    }
    // SubProg patch_forward_call pc: 1104 op: PROC (27)
    RefDS(_new_code_62576);
    _39replace_code(_new_code_62576, _pc_62418, _31016, _code_sub_62389);
    _31016 = NOVALUE;
    // SubProg patch_forward_call pc: 1110 op: STARTLINE (58)

    /** fwdref.e:395		if code_sub = TopLevelSub then*/
    // SubProg patch_forward_call pc: 1112 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1114 op: EQUALS_IFW (104)
    if (_code_sub_62389 != _36TopLevelSub_16443)
    goto L13; // [1114] 1195
    // SubProg patch_forward_call pc: 1118 op: STARTLINE (58)

    /** fwdref.e:396			for i = pre_refs + 1 to length( toplevel_references[fr[FR_FILE]] ) do*/
    // SubProg patch_forward_call pc: 1120 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1122 op: PLUS1 (93)
    _31018 = _pre_refs_62516 + 1;
    if (_31018 > MAXINT){
        _31018 = NewDouble((eudouble)_31018);
    }
    // SubProg patch_forward_call pc: 1126 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _31019 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 1132 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    if (!IS_ATOM_INT(_31019)){
        _31020 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31019)->dbl));
    }
    else{
        _31020 = (object)*(((s1_ptr)_2)->base + _31019);
    }
    // SubProg patch_forward_call pc: 1136 op: LENGTH (42)
    if (IS_SEQUENCE(_31020)){
            _31021 = SEQ_PTR(_31020)->length;
    }
    else {
        _31021 = 1;
    }
    _31020 = NOVALUE;
    // SubProg patch_forward_call pc: 1139 op: FOR (21)
    {
        object _i_62610;
        Ref(_31018);
        _i_62610 = _31018;
L14: // addr: 1146 pc: 1139 sub: 62354 op: 21
        if (binary_op_a(GREATER, _i_62610, _31021)){
            goto L15; // [1139] 1192
        }
        // SubProg patch_forward_call pc: 1146 op: STARTLINE (58)

        /** fwdref.e:397				forward_references[toplevel_references[fr[FR_FILE]][i]][FR_PC] += pc - 1*/
        // SubProg patch_forward_call pc: 1148 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1150 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1152 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62359);
        _31022 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_call pc: 1156 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39toplevel_references_62123);
        if (!IS_ATOM_INT(_31022)){
            _31023 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31022)->dbl));
        }
        else{
            _31023 = (object)*(((s1_ptr)_2)->base + _31022);
        }
        // SubProg patch_forward_call pc: 1160 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31023);
        if (!IS_ATOM_INT(_i_62610)){
            _31024 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62610)->dbl));
        }
        else{
            _31024 = (object)*(((s1_ptr)_2)->base + _i_62610);
        }
        _31023 = NOVALUE;
        // SubProg patch_forward_call pc: 1164 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39forward_references_62120 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31024))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31024)->dbl));
        else
        _3 = (object)(_31024 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_call pc: 1169 op: MINUS (10)
        _31027 = _pc_62418 - 1;
        if ((object)((uintptr_t)_31027 +(uintptr_t) HIGH_BITS) >= 0){
            _31027 = NewDouble((eudouble)_31027);
        }
        // SubProg patch_forward_call pc: 1173 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31028 = (object)*(((s1_ptr)_2)->base + 5);
        _31025 = NOVALUE;
        // SubProg patch_forward_call pc: 1177 op: PLUS (11)
        if (IS_ATOM_INT(_31028) && IS_ATOM_INT(_31027)) {
            _31029 = _31028 + _31027;
            if ((object)((uintptr_t)_31029 + (uintptr_t)HIGH_BITS) >= 0){
                _31029 = NewDouble((eudouble)_31029);
            }
        }
        else {
            _31029 = binary_op(PLUS, _31028, _31027);
        }
        _31028 = NOVALUE;
        DeRef(_31027);
        _31027 = NOVALUE;
        // SubProg patch_forward_call pc: 1181 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31029;
        if( _1 != _31029 ){
            DeRef(_1);
        }
        _31029 = NOVALUE;
        _31025 = NOVALUE;
        // SubProg patch_forward_call pc: 1185 op: STARTLINE (58)

        /** fwdref.e:398			end for*/
        // SubProg patch_forward_call pc: 1187 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62610;
        if (IS_ATOM_INT(_i_62610)) {
            _i_62610 = _i_62610 + 1;
            if ((object)((uintptr_t)_i_62610 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62610 = NewDouble((eudouble)_i_62610);
            }
        }
        else {
            _i_62610 = binary_op_a(PLUS, _i_62610, 1);
        }
        DeRef(_0);
        goto L14; // [1187] 1146
L15: // addr: 1192 pc: 1187 sub: 62354 op: 54
        ;
        DeRef(_i_62610);
    }
    // SubProg patch_forward_call pc: 1192 op: ELSE (23)
    goto L16; // [1192] 1278
    // SubProg patch_forward_call pc: 1194 op: NOP1 (159)
L13: // addr: 1195 pc: 1194 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 1195 op: STARTLINE (58)

    /** fwdref.e:400			for i = pre_refs + 1 to length( active_references[fr[FR_FILE]][ar_sp] ) do*/
    // SubProg patch_forward_call pc: 1197 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1199 op: PLUS1 (93)
    _31030 = _pre_refs_62516 + 1;
    if (_31030 > MAXINT){
        _31030 = NewDouble((eudouble)_31030);
    }
    // SubProg patch_forward_call pc: 1203 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62359);
    _31031 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 1209 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!IS_ATOM_INT(_31031)){
        _31032 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31031)->dbl));
    }
    else{
        _31032 = (object)*(((s1_ptr)_2)->base + _31031);
    }
    // SubProg patch_forward_call pc: 1213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31032);
    _31033 = (object)*(((s1_ptr)_2)->base + _ar_sp_62512);
    _31032 = NOVALUE;
    // SubProg patch_forward_call pc: 1217 op: LENGTH (42)
    if (IS_SEQUENCE(_31033)){
            _31034 = SEQ_PTR(_31033)->length;
    }
    else {
        _31034 = 1;
    }
    _31033 = NOVALUE;
    // SubProg patch_forward_call pc: 1220 op: FOR (21)
    {
        object _i_62625;
        Ref(_31030);
        _i_62625 = _31030;
L17: // addr: 1227 pc: 1220 sub: 62354 op: 21
        if (binary_op_a(GREATER, _i_62625, _31034)){
            goto L18; // [1220] 1277
        }
        // SubProg patch_forward_call pc: 1227 op: STARTLINE (58)

        /** fwdref.e:401				forward_references[active_references[fr[FR_FILE]][ar_sp][i]][FR_PC] += pc - 1*/
        // SubProg patch_forward_call pc: 1229 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1231 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1233 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62359);
        _31035 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_call pc: 1237 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39active_references_62122);
        if (!IS_ATOM_INT(_31035)){
            _31036 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31035)->dbl));
        }
        else{
            _31036 = (object)*(((s1_ptr)_2)->base + _31035);
        }
        // SubProg patch_forward_call pc: 1241 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31036);
        _31037 = (object)*(((s1_ptr)_2)->base + _ar_sp_62512);
        _31036 = NOVALUE;
        // SubProg patch_forward_call pc: 1245 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31037);
        if (!IS_ATOM_INT(_i_62625)){
            _31038 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62625)->dbl));
        }
        else{
            _31038 = (object)*(((s1_ptr)_2)->base + _i_62625);
        }
        _31037 = NOVALUE;
        // SubProg patch_forward_call pc: 1249 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39forward_references_62120 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31038))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31038)->dbl));
        else
        _3 = (object)(_31038 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_call pc: 1254 op: MINUS (10)
        _31041 = _pc_62418 - 1;
        if ((object)((uintptr_t)_31041 +(uintptr_t) HIGH_BITS) >= 0){
            _31041 = NewDouble((eudouble)_31041);
        }
        // SubProg patch_forward_call pc: 1258 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31042 = (object)*(((s1_ptr)_2)->base + 5);
        _31039 = NOVALUE;
        // SubProg patch_forward_call pc: 1262 op: PLUS (11)
        if (IS_ATOM_INT(_31042) && IS_ATOM_INT(_31041)) {
            _31043 = _31042 + _31041;
            if ((object)((uintptr_t)_31043 + (uintptr_t)HIGH_BITS) >= 0){
                _31043 = NewDouble((eudouble)_31043);
            }
        }
        else {
            _31043 = binary_op(PLUS, _31042, _31041);
        }
        _31042 = NOVALUE;
        DeRef(_31041);
        _31041 = NOVALUE;
        // SubProg patch_forward_call pc: 1266 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31043;
        if( _1 != _31043 ){
            DeRef(_1);
        }
        _31043 = NOVALUE;
        _31039 = NOVALUE;
        // SubProg patch_forward_call pc: 1270 op: STARTLINE (58)

        /** fwdref.e:402			end for*/
        // SubProg patch_forward_call pc: 1272 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62625;
        if (IS_ATOM_INT(_i_62625)) {
            _i_62625 = _i_62625 + 1;
            if ((object)((uintptr_t)_i_62625 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62625 = NewDouble((eudouble)_i_62625);
            }
        }
        else {
            _i_62625 = binary_op_a(PLUS, _i_62625, 1);
        }
        DeRef(_0);
        goto L17; // [1272] 1227
L18: // addr: 1277 pc: 1272 sub: 62354 op: 54
        ;
        DeRef(_i_62625);
    }
    // SubProg patch_forward_call pc: 1277 op: NOP1 (159)
L16: // addr: 1278 pc: 1277 sub: 62354 op: 159
    // SubProg patch_forward_call pc: 1278 op: STARTLINE (58)

    /** fwdref.e:405		reset_code()*/
    // SubProg patch_forward_call pc: 1280 op: PROC (27)
    _39reset_code();
    // SubProg patch_forward_call pc: 1282 op: STARTLINE (58)

    /** fwdref.e:408		resolved_reference( ref )*/
    // SubProg patch_forward_call pc: 1284 op: PROC (27)
    _39resolved_reference(_ref_62358);
    // SubProg patch_forward_call pc: 1287 op: STARTLINE (58)

    /** fwdref.e:409	end procedure*/
    // SubProg patch_forward_call pc: 1289 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_call

// block var tok_62357
    DeRef(_tok_62357);

// block var ref_62358

// block var fr_62359
    DeRef(_fr_62359);

// block var sub_62362

// block var code_sub_62389

// block var args_62391

// block var is_func_62396

// block var real_file_62410

// block var code_62414
    DeRef(_code_62414);

// block var temp_sub_62416

// block var pc_62418

// block var next_pc_62420

// block var supplied_args_62421

// block var name_62424
    DeRef(_name_62424);

// block var old_temps_allocated_62460

// block var target_62488

// block var has_defaults_62494

// block var goto_target_62495

// block var defarg_62498

// block var code_len_62499

// block var extra_default_args_62501

// block var param_sym_62504

// block var params_62505
    DeRef(_params_62505);

// block var orig_code_62507
    DeRef(_orig_code_62507);

// block var orig_linetable_62508
    DeRef(_orig_linetable_62508);

// block var ar_sp_62512

// block var pre_refs_62516

// block var old_fwd_params_62531
    DeRef(_old_fwd_params_62531);

// block var temp_shifting_sub_62572

// block var new_code_62576
    DeRef(_new_code_62576);
    DeRef(_30964);
    _30964 = NOVALUE;
    DeRef(_31030);
    _31030 = NOVALUE;
    DeRef(_30932);
    _30932 = NOVALUE;
    _31024 = NOVALUE;
    DeRef(_30989);
    _30989 = NOVALUE;
    _31031 = NOVALUE;
    _31022 = NOVALUE;
    DeRef(_31018);
    _31018 = NOVALUE;
    _31038 = NOVALUE;
    _31033 = NOVALUE;
    DeRef(_30982);
    _30982 = NOVALUE;
    _31019 = NOVALUE;
    _30973 = NOVALUE;
    DeRef(_30954);
    _30954 = NOVALUE;
    DeRef(_30952);
    _30952 = NOVALUE;
    DeRef(_30980);
    _30980 = NOVALUE;
    _31035 = NOVALUE;
    DeRef(_30928);
    _30928 = NOVALUE;
    _31020 = NOVALUE;
    _30978 = NOVALUE;
    DeRef(_30986);
    _30986 = NOVALUE;
    return;
    // SubProg patch_forward_call pc: 1292 op: BADRETURNF (43)
    ;
}


void _39set_error_info(object _ref_62642)
{
    object _fr_62643 = NOVALUE;
// skipping _31048  name type: 0
// skipping _31047  name type: 0
// skipping _31046  name type: 0
// skipping _31045  name type: 0
// skipping _31044  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_error_info pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_error_info pc: 3 op: STARTLINE (58)

    /** fwdref.e:412		sequence fr = forward_references[ref]*/
    // SubProg set_error_info pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_error_info pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62643);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62643 = (object)*(((s1_ptr)_2)->base + _ref_62642);
    Ref(_fr_62643);
    // SubProg set_error_info pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg set_error_info pc: 13 op: STARTLINE (58)

    /** fwdref.e:413		ThisLine        = fr[FR_THISLINE]*/
    // SubProg set_error_info pc: 15 op: RHS_SUBS (25)
    DeRef(_50ThisLine_48707);
    _2 = (object)SEQ_PTR(_fr_62643);
    _50ThisLine_48707 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_50ThisLine_48707);
    // SubProg set_error_info pc: 19 op: STARTLINE (58)

    /** fwdref.e:414		bp              = fr[FR_BP]*/
    // SubProg set_error_info pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62643);
    _50bp_48711 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_50bp_48711)){
        _50bp_48711 = (object)DBL_PTR(_50bp_48711)->dbl;
    }
    // SubProg set_error_info pc: 27 op: STARTLINE (58)

    /** fwdref.e:415		line_number     = fr[FR_LINE]*/
    // SubProg set_error_info pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62643);
    _36line_number_16437 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_36line_number_16437)){
        _36line_number_16437 = (object)DBL_PTR(_36line_number_16437)->dbl;
    }
    // SubProg set_error_info pc: 35 op: STARTLINE (58)

    /** fwdref.e:416		current_file_no = fr[FR_FILE]*/
    // SubProg set_error_info pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62643);
    _36current_file_no_16436 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_36current_file_no_16436)){
        _36current_file_no_16436 = (object)DBL_PTR(_36current_file_no_16436)->dbl;
    }
    // SubProg set_error_info pc: 43 op: STARTLINE (58)

    /** fwdref.e:417	end procedure*/
    // SubProg set_error_info pc: 45 op: RETURNP (29)

// Exiting block BLOCK: set_error_info

// block var ref_62642

// block var fr_62643
    DeRefDS(_fr_62643);
    return;
    // SubProg set_error_info pc: 48 op: BADRETURNF (43)
    ;
}


void _39patch_forward_variable(object _tok_62656, object _ref_62657)
{
    object _fr_62658 = NOVALUE;
    object _sym_62661 = NOVALUE;
    object _pc_62714 = NOVALUE;
    object _vx_62718 = NOVALUE;
    object _d_62735 = NOVALUE;
    object _param_62745 = NOVALUE;
    object _old_62748 = NOVALUE;
    object _new_62753 = NOVALUE;
    object _31101 = NOVALUE; // 62765 31101
    object _31100 = NOVALUE; // 62764 31100
    object _31099 = NOVALUE; // 62762 31099
// skipping _31098  name type: 0
    object _31097 = NOVALUE; // 62757 31097
// skipping _31096  name type: 0
// skipping _31095  name type: 0
    object _31094 = NOVALUE; // 62750 31094
// skipping _31093  name type: 0
    object _31092 = NOVALUE; // 62743 31092
    object _31091 = NOVALUE; // 62741 31091
    object _31090 = NOVALUE; // 62740 31090
    object _31089 = NOVALUE; // 62739 31089
// skipping _31088  name type: 0
    object _31087 = NOVALUE; // 62736 31087
    object _31086 = NOVALUE; // 62734 31086
    object _31085 = NOVALUE; // 62733 31085
    object _31084 = NOVALUE; // 62730 31084
    object _31083 = NOVALUE; // 62729 31083
// skipping _31082  name type: 0
    object _31081 = NOVALUE; // 62725 31081
// skipping _31080  name type: 0
    object _31079 = NOVALUE; // 62719 31079
// skipping _31078  name type: 0
// skipping _31077  name type: 0
    object _31076 = NOVALUE; // 62713 31076
    object _31075 = NOVALUE; // 62712 31075
    object _31074 = NOVALUE; // 62710 31074
// skipping _31073  name type: 0
    object _31072 = NOVALUE; // 62705 31072
    object _31071 = NOVALUE; // 62702 31071
    object _31070 = NOVALUE; // 62701 31070
    object _31069 = NOVALUE; // 62699 31069
// skipping _31068  name type: 0
    object _31067 = NOVALUE; // 62694 31067
// skipping _31066  name type: 0
    object _31065 = NOVALUE; // 62690 31065
    object _31063 = NOVALUE; // 62685 31063
    object _31062 = NOVALUE; // 62683 31062
    object _31061 = NOVALUE; // 62681 31061
    object _31060 = NOVALUE; // 62679 31060
    object _31059 = NOVALUE; // 62678 31059
    object _31058 = NOVALUE; // 62676 31058
    object _31057 = NOVALUE; // 62674 31057
    object _31056 = NOVALUE; // 62672 31056
    object _31055 = NOVALUE; // 62671 31055
    object _31054 = NOVALUE; // 62670 31054
    object _31053 = NOVALUE; // 62669 31053
    object _31052 = NOVALUE; // 62668 31052
    object _31051 = NOVALUE; // 62666 31051
// skipping _31050  name type: 0
// skipping _31049  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_variable pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_variable pc: 3 op: STARTLINE (58)

    /** fwdref.e:421		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_variable pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62658);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62658 = (object)*(((s1_ptr)_2)->base + _ref_62657);
    Ref(_fr_62658);
    // SubProg patch_forward_variable pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_variable pc: 13 op: STARTLINE (58)

    /** fwdref.e:422		symtab_index sym = tok[T_SYM]*/
    // SubProg patch_forward_variable pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62656);
    _sym_62661 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_62661)){
        _sym_62661 = (object)DBL_PTR(_sym_62661)->dbl;
    }
    // SubProg patch_forward_variable pc: 23 op: STARTLINE (58)

    /** fwdref.e:424		if SymTab[sym][S_FILE_NO] = fr[FR_FILE] */
    // SubProg patch_forward_variable pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31051 = (object)*(((s1_ptr)_2)->base + _sym_62661);
    // SubProg patch_forward_variable pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31051);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _31052 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _31052 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _31051 = NOVALUE;
    // SubProg patch_forward_variable pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62658);
    _31053 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_variable pc: 41 op: EQUALS (3)
    if (IS_ATOM_INT(_31052) && IS_ATOM_INT(_31053)) {
        _31054 = (_31052 == _31053);
    }
    else {
        _31054 = binary_op(EQUALS, _31052, _31053);
    }
    _31052 = NOVALUE;
    _31053 = NOVALUE;
    // SubProg patch_forward_variable pc: 45 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31054)) {
        if (_31054 == 0) {
            goto L1; // [45] 69
        }
    }
    else {
        if (DBL_PTR(_31054)->dbl == 0.0) {
            goto L1; // [45] 69
        }
    }
    // SubProg patch_forward_variable pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62658);
    _31056 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_variable pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 55 op: EQUALS (3)
    if (IS_ATOM_INT(_31056)) {
        _31057 = (_31056 == _36TopLevelSub_16443);
    }
    else {
        _31057 = binary_op(EQUALS, _31056, _36TopLevelSub_16443);
    }
    _31056 = NOVALUE;
    // SubProg patch_forward_variable pc: 59 op: NOP1 (159)
    // SubProg patch_forward_variable pc: 60 op: IF (20)
    if (_31057 == 0) {
        DeRef(_31057);
        _31057 = NOVALUE;
        goto L1; // [60] 69
    }
    else {
        if (!IS_ATOM_INT(_31057) && DBL_PTR(_31057)->dbl == 0.0){
            DeRef(_31057);
            _31057 = NOVALUE;
            goto L1; // [60] 69
        }
        DeRef(_31057);
        _31057 = NOVALUE;
    }
    DeRef(_31057);
    _31057 = NOVALUE;
    // SubProg patch_forward_variable pc: 63 op: STARTLINE (58)

    /** fwdref.e:426			return*/
    // SubProg patch_forward_variable pc: 65 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_variable

// block var tok_62656
    DeRef(_tok_62656);

// block var ref_62657

// block var fr_62658
    DeRef(_fr_62658);

// block var sym_62661

// block var pc_62714

// block var vx_62718
    DeRef(_31054);
    _31054 = NOVALUE;
    return;
    // SubProg patch_forward_variable pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 69 op: STARTLINE (58)

    /** fwdref.e:429		if fr[FR_OP] = ASSIGN and SymTab[sym][S_MODE] = M_CONSTANT then*/
    // SubProg patch_forward_variable pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62658);
    _31058 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_variable pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 77 op: EQUALS (3)
    if (IS_ATOM_INT(_31058)) {
        _31059 = (_31058 == 18);
    }
    else {
        _31059 = binary_op(EQUALS, _31058, 18);
    }
    _31058 = NOVALUE;
    // SubProg patch_forward_variable pc: 81 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31059)) {
        if (_31059 == 0) {
            goto L2; // [81] 120
        }
    }
    else {
        if (DBL_PTR(_31059)->dbl == 0.0) {
            goto L2; // [81] 120
        }
    }
    // SubProg patch_forward_variable pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31061 = (object)*(((s1_ptr)_2)->base + _sym_62661);
    // SubProg patch_forward_variable pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31061);
    _31062 = (object)*(((s1_ptr)_2)->base + 3);
    _31061 = NOVALUE;
    // SubProg patch_forward_variable pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 99 op: EQUALS (3)
    if (IS_ATOM_INT(_31062)) {
        _31063 = (_31062 == 2);
    }
    else {
        _31063 = binary_op(EQUALS, _31062, 2);
    }
    _31062 = NOVALUE;
    // SubProg patch_forward_variable pc: 103 op: NOP1 (159)
    // SubProg patch_forward_variable pc: 104 op: IF (20)
    if (_31063 == 0) {
        DeRef(_31063);
        _31063 = NOVALUE;
        goto L2; // [104] 120
    }
    else {
        if (!IS_ATOM_INT(_31063) && DBL_PTR(_31063)->dbl == 0.0){
            DeRef(_31063);
            _31063 = NOVALUE;
            goto L2; // [104] 120
        }
        DeRef(_31063);
        _31063 = NOVALUE;
    }
    DeRef(_31063);
    _31063 = NOVALUE;
    // SubProg patch_forward_variable pc: 107 op: STARTLINE (58)

    /** fwdref.e:430			prep_forward_error( ref )*/
    // SubProg patch_forward_variable pc: 109 op: PROC (27)
    _39prep_forward_error(_ref_62657);
    // SubProg patch_forward_variable pc: 112 op: STARTLINE (58)

    /** fwdref.e:431			CompileErr( 110 )*/
    // SubProg patch_forward_variable pc: 114 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(110, _21933, 0);
    // SubProg patch_forward_variable pc: 119 op: NOP1 (159)
L2: // addr: 120 pc: 119 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 120 op: STARTLINE (58)

    /** fwdref.e:434		if fr[FR_OP] = ASSIGN then*/
    // SubProg patch_forward_variable pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62658);
    _31065 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_variable pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 128 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31065, 18)){
        _31065 = NOVALUE;
        goto L3; // [128] 168
    }
    _31065 = NOVALUE;
    // SubProg patch_forward_variable pc: 132 op: STARTLINE (58)

    /** fwdref.e:435			SymTab[sym][S_USAGE] = or_bits( U_WRITTEN, SymTab[sym][S_USAGE] )*/
    // SubProg patch_forward_variable pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 136 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62661 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_variable pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31069 = (object)*(((s1_ptr)_2)->base + _sym_62661);
    // SubProg patch_forward_variable pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31069);
    _31070 = (object)*(((s1_ptr)_2)->base + 5);
    _31069 = NOVALUE;
    // SubProg patch_forward_variable pc: 157 op: OR_BITS (24)
    if (IS_ATOM_INT(_31070)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_31070;
             _31071 = MAKE_UINT(tu);
        }
    }
    else {
        _31071 = binary_op(OR_BITS, 2, _31070);
    }
    _31070 = NOVALUE;
    // SubProg patch_forward_variable pc: 161 op: PASSIGN_SUBS (162)
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
    // SubProg patch_forward_variable pc: 165 op: ELSE (23)
    goto L4; // [165] 202
    // SubProg patch_forward_variable pc: 167 op: NOP1 (159)
L3: // addr: 168 pc: 167 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 168 op: STARTLINE (58)

    /** fwdref.e:437			SymTab[sym][S_USAGE] = or_bits( U_READ, SymTab[sym][S_USAGE] )*/
    // SubProg patch_forward_variable pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 172 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62661 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_variable pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31074 = (object)*(((s1_ptr)_2)->base + _sym_62661);
    // SubProg patch_forward_variable pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 189 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31074);
    _31075 = (object)*(((s1_ptr)_2)->base + 5);
    _31074 = NOVALUE;
    // SubProg patch_forward_variable pc: 193 op: OR_BITS (24)
    if (IS_ATOM_INT(_31075)) {
        {uintptr_t tu;
             tu = (uintptr_t)1 | (uintptr_t)_31075;
             _31076 = MAKE_UINT(tu);
        }
    }
    else {
        _31076 = binary_op(OR_BITS, 1, _31075);
    }
    _31075 = NOVALUE;
    // SubProg patch_forward_variable pc: 197 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31076;
    if( _1 != _31076 ){
        DeRef(_1);
    }
    _31076 = NOVALUE;
    _31072 = NOVALUE;
    // SubProg patch_forward_variable pc: 201 op: NOP1 (159)
L4: // addr: 202 pc: 201 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 202 op: STARTLINE (58)

    /** fwdref.e:440		set_code( ref )*/
    // SubProg patch_forward_variable pc: 204 op: PROC (27)
    _39set_code(_ref_62657);
    // SubProg patch_forward_variable pc: 207 op: STARTLINE (58)

    /** fwdref.e:441		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_variable pc: 209 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62658);
    _pc_62714 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62714))
    _pc_62714 = (object)DBL_PTR(_pc_62714)->dbl;
    // SubProg patch_forward_variable pc: 213 op: STARTLINE (58)

    /** fwdref.e:442		if pc < 1 then*/
    // SubProg patch_forward_variable pc: 215 op: LESS_IFW_I (119)
    if (_pc_62714 >= 1)
    goto L5; // [215] 225
    // SubProg patch_forward_variable pc: 219 op: STARTLINE (58)

    /** fwdref.e:443			pc = 1*/
    // SubProg patch_forward_variable pc: 221 op: ASSIGN_I (113)
    _pc_62714 = 1;
    // SubProg patch_forward_variable pc: 224 op: NOP1 (159)
L5: // addr: 225 pc: 224 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 225 op: STARTLINE (58)

    /** fwdref.e:445		integer vx = find( -ref, Code, pc )*/
    // SubProg patch_forward_variable pc: 227 op: UMINUS (12)
    if ((uintptr_t)_ref_62657 == (uintptr_t)HIGH_BITS){
        _31079 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31079 = - _ref_62657;
    }
    // SubProg patch_forward_variable pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 232 op: FIND_FROM (176)
    _vx_62718 = find_from(_31079, _36Code_16524, _pc_62714);
    DeRef(_31079);
    _31079 = NOVALUE;
    // SubProg patch_forward_variable pc: 237 op: STARTLINE (58)

    /** fwdref.e:446		if vx then*/
    // SubProg patch_forward_variable pc: 239 op: IF (20)
    if (_vx_62718 == 0)
    {
        goto L6; // [239] 281
    }
    else{
    }
    // SubProg patch_forward_variable pc: 242 op: STARTLINE (58)

    /** fwdref.e:447			while vx do*/
    // SubProg patch_forward_variable pc: 244 op: NOP2 (110)
    // SubProg patch_forward_variable pc: 246 op: NOPWHILE (158)
L7: // addr: 247 pc: 246 sub: 62653 op: 158
    // SubProg patch_forward_variable pc: 247 op: WHILE (47)
    if (_vx_62718 == 0)
    {
        goto L8; // [247] 275
    }
    else{
    }
    // SubProg patch_forward_variable pc: 250 op: STARTLINE (58)

    /** fwdref.e:450				Code[vx] = sym*/
    // SubProg patch_forward_variable pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 254 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_36Code_16524);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36Code_16524 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _vx_62718);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_62661;
    DeRef(_1);
    // SubProg patch_forward_variable pc: 258 op: STARTLINE (58)

    /** fwdref.e:451				vx = find( -ref, Code, vx )*/
    // SubProg patch_forward_variable pc: 260 op: UMINUS (12)
    if ((uintptr_t)_ref_62657 == (uintptr_t)HIGH_BITS){
        _31081 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31081 = - _ref_62657;
    }
    // SubProg patch_forward_variable pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 265 op: FIND_FROM (176)
    _vx_62718 = find_from(_31081, _36Code_16524, _vx_62718);
    DeRef(_31081);
    _31081 = NOVALUE;
    // SubProg patch_forward_variable pc: 270 op: STARTLINE (58)

    /** fwdref.e:452			end while*/
    // SubProg patch_forward_variable pc: 272 op: ENDWHILE (22)
    goto L7; // [272] 247
    // SubProg patch_forward_variable pc: 274 op: NOP1 (159)
L8: // addr: 275 pc: 274 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 275 op: STARTLINE (58)

    /** fwdref.e:453			resolved_reference( ref )*/
    // SubProg patch_forward_variable pc: 277 op: PROC (27)
    _39resolved_reference(_ref_62657);
    // SubProg patch_forward_variable pc: 280 op: NOP1 (159)
L6: // addr: 281 pc: 280 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 281 op: STARTLINE (58)

    /** fwdref.e:456		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_variable pc: 283 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62658);
    _31083 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_variable pc: 287 op: IS_A_SEQUENCE (68)
    _31084 = IS_SEQUENCE(_31083);
    _31083 = NOVALUE;
    // SubProg patch_forward_variable pc: 290 op: IF (20)
    if (_31084 == 0)
    {
        _31084 = NOVALUE;
        goto L9; // [290] 422
    }
    else{
        _31084 = NOVALUE;
    }
    // SubProg patch_forward_variable pc: 293 op: STARTLINE (58)

    /** fwdref.e:457			for i = 1 to length( fr[FR_DATA] ) do*/
    // SubProg patch_forward_variable pc: 295 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62658);
    _31085 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_variable pc: 299 op: LENGTH (42)
    if (IS_SEQUENCE(_31085)){
            _31086 = SEQ_PTR(_31085)->length;
    }
    else {
        _31086 = 1;
    }
    _31085 = NOVALUE;
    // SubProg patch_forward_variable pc: 302 op: FOR_I (125)
    {
        object _i_62732;
        _i_62732 = 1;
LA: // addr: 309 pc: 302 sub: 62653 op: 125
        if (_i_62732 > _31086){
            goto LB; // [302] 416
        }
        // SubProg patch_forward_variable pc: 309 op: STARTLINE (58)

        /** fwdref.e:458				object d = fr[FR_DATA][i]*/
        // SubProg patch_forward_variable pc: 311 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62658);
        _31087 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg patch_forward_variable pc: 315 op: RHS_SUBS_CHECK (92)
        DeRef(_d_62735);
        _2 = (object)SEQ_PTR(_31087);
        _d_62735 = (object)*(((s1_ptr)_2)->base + _i_62732);
        Ref(_d_62735);
        _31087 = NOVALUE;
        // SubProg patch_forward_variable pc: 319 op: STARTLINE (58)

        /** fwdref.e:459				if sequence( d ) and d[1] = PAM_RECORD then*/
        // SubProg patch_forward_variable pc: 321 op: IS_A_SEQUENCE (68)
        _31089 = IS_SEQUENCE(_d_62735);
        // SubProg patch_forward_variable pc: 324 op: SC1_AND_IF (146)
        if (_31089 == 0) {
            goto LC; // [324] 405
        }
        // SubProg patch_forward_variable pc: 328 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62735);
        _31091 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg patch_forward_variable pc: 332 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 334 op: EQUALS (3)
        if (IS_ATOM_INT(_31091)) {
            _31092 = (_31091 == 1);
        }
        else {
            _31092 = binary_op(EQUALS, _31091, 1);
        }
        _31091 = NOVALUE;
        // SubProg patch_forward_variable pc: 338 op: NOP1 (159)
        // SubProg patch_forward_variable pc: 339 op: IF (20)
        if (_31092 == 0) {
            DeRef(_31092);
            _31092 = NOVALUE;
            goto LC; // [339] 405
        }
        else {
            if (!IS_ATOM_INT(_31092) && DBL_PTR(_31092)->dbl == 0.0){
                DeRef(_31092);
                _31092 = NOVALUE;
                goto LC; // [339] 405
            }
            DeRef(_31092);
            _31092 = NOVALUE;
        }
        DeRef(_31092);
        _31092 = NOVALUE;
        // SubProg patch_forward_variable pc: 342 op: STARTLINE (58)

        /** fwdref.e:461					symtab_index param = d[2]*/
        // SubProg patch_forward_variable pc: 344 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62735);
        _param_62745 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_62745)){
            _param_62745 = (object)DBL_PTR(_param_62745)->dbl;
        }
        // SubProg patch_forward_variable pc: 350 op: STARTLINE (58)

        /** fwdref.e:462					token old = {RECORDED, d[3]}*/
        // SubProg patch_forward_variable pc: 352 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 354 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62735);
        _31094 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_variable pc: 358 op: RIGHT_BRACE_2 (85)
        Ref(_31094);
        DeRef(_old_62748);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 508;
        ((intptr_t *)_2)[2] = _31094;
        _old_62748 = MAKE_SEQ(_1);
        _31094 = NOVALUE;
        // SubProg patch_forward_variable pc: 362 op: STARTLINE (58)

        /** fwdref.e:463					token new = {VARIABLE, sym}*/
        // SubProg patch_forward_variable pc: 364 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 366 op: RIGHT_BRACE_2 (85)
        DeRefi(_new_62753);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -100;
        ((intptr_t *)_2)[2] = _sym_62661;
        _new_62753 = MAKE_SEQ(_1);
        // SubProg patch_forward_variable pc: 370 op: STARTLINE (58)

        /** fwdref.e:464					SymTab[param][S_CODE] = find_replace( old, SymTab[param][S_CODE], new )*/
        // SubProg patch_forward_variable pc: 372 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 374 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_param_62745 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_variable pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 381 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 383 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _31099 = (object)*(((s1_ptr)_2)->base + _param_62745);
        // SubProg patch_forward_variable pc: 387 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 389 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31099);
        if (!IS_ATOM_INT(_36S_CODE_16103)){
            _31100 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
        }
        else{
            _31100 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
        }
        _31099 = NOVALUE;
        // SubProg patch_forward_variable pc: 393 op: PROC (27)
        RefDS(_old_62748);
        Ref(_31100);
        RefDS(_new_62753);
        _31101 = _19find_replace(_old_62748, _31100, _new_62753, 0);
        _31100 = NOVALUE;
        // SubProg patch_forward_variable pc: 400 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_36S_CODE_16103))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31101;
        if( _1 != _31101 ){
            DeRef(_1);
        }
        _31101 = NOVALUE;
        _31097 = NOVALUE;
        // SubProg patch_forward_variable pc: 404 op: NOP1 (159)
LC: // addr: 405 pc: 404 sub: 62653 op: 159
        // SubProg patch_forward_variable pc: 405 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var param_62745

// block var old_62748
        DeRef(_old_62748);
        _old_62748 = NOVALUE;

// block var new_62753
        DeRefi(_new_62753);
        _new_62753 = NOVALUE;
        // SubProg patch_forward_variable pc: 407 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var d_62735
        DeRef(_d_62735);
        _d_62735 = NOVALUE;
        // SubProg patch_forward_variable pc: 409 op: STARTLINE (58)

        /** fwdref.e:466			end for*/
        // SubProg patch_forward_variable pc: 411 op: ENDFOR_INT_UP1 (54)
        _i_62732 = _i_62732 + 1;
        goto LA; // [411] 309
LB: // addr: 416 pc: 411 sub: 62653 op: 54
        ;
    }
    // SubProg patch_forward_variable pc: 416 op: STARTLINE (58)

    /** fwdref.e:467			resolved_reference( ref )*/
    // SubProg patch_forward_variable pc: 418 op: PROC (27)
    _39resolved_reference(_ref_62657);
    // SubProg patch_forward_variable pc: 421 op: NOP1 (159)
L9: // addr: 422 pc: 421 sub: 62653 op: 159
    // SubProg patch_forward_variable pc: 422 op: STARTLINE (58)

    /** fwdref.e:469		reset_code()*/
    // SubProg patch_forward_variable pc: 424 op: PROC (27)
    _39reset_code();
    // SubProg patch_forward_variable pc: 426 op: STARTLINE (58)

    /** fwdref.e:470	end procedure*/
    // SubProg patch_forward_variable pc: 428 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_variable

// block var tok_62656
    DeRef(_tok_62656);

// block var ref_62657

// block var fr_62658
    DeRef(_fr_62658);

// block var sym_62661

// block var pc_62714

// block var vx_62718
    _31085 = NOVALUE;
    DeRef(_31054);
    _31054 = NOVALUE;
    DeRef(_31059);
    _31059 = NOVALUE;
    return;
    // SubProg patch_forward_variable pc: 431 op: BADRETURNF (43)
    ;
}


void _39patch_forward_init_check(object _tok_62769, object _ref_62770)
{
    object _fr_62771 = NOVALUE;
    object _31109 = NOVALUE; // 62783 31109
    object _31108 = NOVALUE; // 62781 31108
    object _31107 = NOVALUE; // 62780 31107
// skipping _31106  name type: 0
    object _31105 = NOVALUE; // 62777 31105
    object _31104 = NOVALUE; // 62775 31104
    object _31103 = NOVALUE; // 62774 31103
// skipping _31102  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_forward_init_check pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_init_check pc: 3 op: STARTLINE (58)

    /** fwdref.e:474		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_init_check pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62771);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62771 = (object)*(((s1_ptr)_2)->base + _ref_62770);
    Ref(_fr_62771);
    // SubProg patch_forward_init_check pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_init_check pc: 13 op: STARTLINE (58)

    /** fwdref.e:475		set_code( ref )*/
    // SubProg patch_forward_init_check pc: 15 op: PROC (27)
    _39set_code(_ref_62770);
    // SubProg patch_forward_init_check pc: 18 op: STARTLINE (58)

    /** fwdref.e:476		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_init_check pc: 20 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62771);
    _31103 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_init_check pc: 24 op: IS_A_SEQUENCE (68)
    _31104 = IS_SEQUENCE(_31103);
    _31103 = NOVALUE;
    // SubProg patch_forward_init_check pc: 27 op: IF (20)
    if (_31104 == 0)
    {
        _31104 = NOVALUE;
        goto L1; // [27] 38
    }
    else{
        _31104 = NOVALUE;
    }
    // SubProg patch_forward_init_check pc: 30 op: STARTLINE (58)

    /** fwdref.e:478			resolved_reference( ref )*/
    // SubProg patch_forward_init_check pc: 32 op: PROC (27)
    _39resolved_reference(_ref_62770);
    // SubProg patch_forward_init_check pc: 35 op: ELSE (23)
    goto L2; // [35] 85
    // SubProg patch_forward_init_check pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 62766 op: 159
    // SubProg patch_forward_init_check pc: 38 op: STARTLINE (58)

    /** fwdref.e:479		elsif fr[FR_PC] > 0 then*/
    // SubProg patch_forward_init_check pc: 40 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62771);
    _31105 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_init_check pc: 44 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _31105, 0)){
        _31105 = NOVALUE;
        goto L3; // [44] 78
    }
    _31105 = NOVALUE;
    // SubProg patch_forward_init_check pc: 48 op: STARTLINE (58)

    /** fwdref.e:480			Code[fr[FR_PC]+1] = tok[T_SYM]*/
    // SubProg patch_forward_init_check pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62771);
    _31107 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_init_check pc: 56 op: PLUS1 (93)
    if (IS_ATOM_INT(_31107)) {
        _31108 = _31107 + 1;
        if (_31108 > MAXINT){
            _31108 = NewDouble((eudouble)_31108);
        }
    }
    else
    _31108 = binary_op(PLUS, 1, _31107);
    _31107 = NOVALUE;
    // SubProg patch_forward_init_check pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62769);
    _31109 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_init_check pc: 66 op: ASSIGN_SUBS (16)
    Ref(_31109);
    _2 = (object)SEQ_PTR(_36Code_16524);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36Code_16524 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31108))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31108)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _31108);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31109;
    if( _1 != _31109 ){
        DeRef(_1);
    }
    _31109 = NOVALUE;
    // SubProg patch_forward_init_check pc: 70 op: STARTLINE (58)

    /** fwdref.e:481			resolved_reference( ref )*/
    // SubProg patch_forward_init_check pc: 72 op: PROC (27)
    _39resolved_reference(_ref_62770);
    // SubProg patch_forward_init_check pc: 75 op: ELSE (23)
    goto L2; // [75] 85
    // SubProg patch_forward_init_check pc: 77 op: NOP1 (159)
L3: // addr: 78 pc: 77 sub: 62766 op: 159
    // SubProg patch_forward_init_check pc: 78 op: STARTLINE (58)

    /** fwdref.e:483			forward_error( tok, ref )*/
    // SubProg patch_forward_init_check pc: 80 op: PROC (27)
    Ref(_tok_62769);
    _39forward_error(_tok_62769, _ref_62770);
    // SubProg patch_forward_init_check pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 62766 op: 159
    // SubProg patch_forward_init_check pc: 85 op: STARTLINE (58)

    /** fwdref.e:485		reset_code()*/
    // SubProg patch_forward_init_check pc: 87 op: PROC (27)
    _39reset_code();
    // SubProg patch_forward_init_check pc: 89 op: STARTLINE (58)

    /** fwdref.e:486	end procedure*/
    // SubProg patch_forward_init_check pc: 91 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_init_check

// block var tok_62769
    DeRef(_tok_62769);

// block var ref_62770

// block var fr_62771
    DeRef(_fr_62771);
    DeRef(_31108);
    _31108 = NOVALUE;
    return;
    // SubProg patch_forward_init_check pc: 94 op: BADRETURNF (43)
    ;
}


object _39expected_name(object _id_62788)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expected_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_id_62788)) {
        _1 = (object)(DBL_PTR(_id_62788)->dbl);
        DeRefDS(_id_62788);
        _id_62788 = _1;
    }
    // SubProg expected_name pc: 3 op: STARTLINE (58)

    /** fwdref.e:491		switch id with fallthru do*/
    // SubProg expected_name pc: 5 op: SWITCH_I (193)
    _0 = _id_62788;
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
        RefDS(_26180);

// Exiting block BLOCK: expected_name

// block var id_62788
        return _26180;
        // SubProg expected_name pc: 22 op: STARTLINE (58)

        /** fwdref.e:496			case FUNC then*/
        // SubProg expected_name pc: 24 op: CASE (186)
        case 501:
        // SubProg expected_name pc: 26 op: CASE (186)
        case 196:
        // SubProg expected_name pc: 28 op: STARTLINE (58)

        /** fwdref.e:498				return "a function"*/
        // SubProg expected_name pc: 30 op: RETURNF (28)
        RefDS(_26126);

// Exiting block BLOCK: expected_name

// block var id_62788
        return _26126;
        // SubProg expected_name pc: 34 op: STARTLINE (58)

        /** fwdref.e:500			case VARIABLE then*/
        // SubProg expected_name pc: 36 op: CASE (186)
        case -100:
        // SubProg expected_name pc: 38 op: STARTLINE (58)

        /** fwdref.e:501				return "a variable, constant or enum"*/
        // SubProg expected_name pc: 40 op: RETURNF (28)
        RefDS(_31112);

// Exiting block BLOCK: expected_name

// block var id_62788
        return _31112;
        // SubProg expected_name pc: 44 op: STARTLINE (58)

        /** fwdref.e:502			case else*/
        // SubProg expected_name pc: 46 op: CASE (186)
        default:
        // SubProg expected_name pc: 48 op: STARTLINE (58)

        /** fwdref.e:503				return "something"*/
        // SubProg expected_name pc: 50 op: RETURNF (28)
        RefDS(_31113);

// Exiting block BLOCK: expected_name

// block var id_62788
        return _31113;
        // SubProg expected_name pc: 54 op: NOPSWITCH (187)
    ;}    // SubProg expected_name pc: 55 op: BADRETURNF (43)
    ;
}


void _39patch_forward_type(object _tok_62805, object _ref_62806)
{
    object _fr_62807 = NOVALUE;
    object _syms_62809 = NOVALUE;
    object _31125 = NOVALUE; // 62831 31125
    object _31124 = NOVALUE; // 62830 31124
// skipping _31123  name type: 0
    object _31122 = NOVALUE; // 62825 31122
    object _31121 = NOVALUE; // 62824 31121
    object _31120 = NOVALUE; // 62820 31120
// skipping _31119  name type: 0
    object _31118 = NOVALUE; // 62816 31118
    object _31117 = NOVALUE; // 62815 31117
    object _31116 = NOVALUE; // 62813 31116
// skipping _31115  name type: 0
// skipping _31114  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type pc: 3 op: STARTLINE (58)

    /** fwdref.e:510		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_type pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62807);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62807 = (object)*(((s1_ptr)_2)->base + _ref_62806);
    Ref(_fr_62807);
    // SubProg patch_forward_type pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type pc: 13 op: STARTLINE (58)

    /** fwdref.e:511		sequence syms = fr[FR_DATA]*/
    // SubProg patch_forward_type pc: 15 op: RHS_SUBS (25)
    DeRef(_syms_62809);
    _2 = (object)SEQ_PTR(_fr_62807);
    _syms_62809 = (object)*(((s1_ptr)_2)->base + 12);
    Ref(_syms_62809);
    // SubProg patch_forward_type pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type pc: 21 op: STARTLINE (58)

    /** fwdref.e:512		for i = 2 to length( syms ) do*/
    // SubProg patch_forward_type pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_syms_62809)){
            _31116 = SEQ_PTR(_syms_62809)->length;
    }
    else {
        _31116 = 1;
    }
    // SubProg patch_forward_type pc: 26 op: FOR_I (125)
    {
        object _i_62812;
        _i_62812 = 2;
L1: // addr: 33 pc: 26 sub: 62802 op: 125
        if (_i_62812 > _31116){
            goto L2; // [26] 102
        }
        // SubProg patch_forward_type pc: 33 op: STARTLINE (58)

        /** fwdref.e:513			SymTab[syms[i]][S_VTYPE] = tok[T_SYM]*/
        // SubProg patch_forward_type pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_syms_62809);
        _31117 = (object)*(((s1_ptr)_2)->base + _i_62812);
        // SubProg patch_forward_type pc: 41 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31117))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31117)->dbl));
        else
        _3 = (object)(_31117 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_type pc: 46 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_62805);
        _31120 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg patch_forward_type pc: 54 op: PASSIGN_SUBS (162)
        Ref(_31120);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31120;
        if( _1 != _31120 ){
            DeRef(_1);
        }
        _31120 = NOVALUE;
        _31118 = NOVALUE;
        // SubProg patch_forward_type pc: 58 op: STARTLINE (58)

        /** fwdref.e:514			if TRANSLATE then*/
        // SubProg patch_forward_type pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 62 op: IF (20)
        if (_36TRANSLATE_16061 == 0)
        {
            goto L3; // [62] 95
        }
        else{
        }
        // SubProg patch_forward_type pc: 65 op: STARTLINE (58)

        /** fwdref.e:515				SymTab[syms[i]][S_GTYPE] = CompileType(tok[T_SYM])*/
        // SubProg patch_forward_type pc: 67 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_syms_62809);
        _31121 = (object)*(((s1_ptr)_2)->base + _i_62812);
        // SubProg patch_forward_type pc: 73 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31121))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31121)->dbl));
        else
        _3 = (object)(_31121 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_type pc: 78 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_62805);
        _31124 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg patch_forward_type pc: 86 op: PROC (27)
        Ref(_31124);
        _31125 = _40CompileType(_31124);
        _31124 = NOVALUE;
        // SubProg patch_forward_type pc: 90 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 36);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31125;
        if( _1 != _31125 ){
            DeRef(_1);
        }
        _31125 = NOVALUE;
        _31122 = NOVALUE;
        // SubProg patch_forward_type pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 62802 op: 159
        // SubProg patch_forward_type pc: 95 op: STARTLINE (58)

        /** fwdref.e:517		end for*/
        // SubProg patch_forward_type pc: 97 op: ENDFOR_INT_UP1 (54)
        _i_62812 = _i_62812 + 1;
        goto L1; // [97] 33
L2: // addr: 102 pc: 97 sub: 62802 op: 54
        ;
    }
    // SubProg patch_forward_type pc: 102 op: STARTLINE (58)

    /** fwdref.e:518		resolved_reference( ref )*/
    // SubProg patch_forward_type pc: 104 op: PROC (27)
    _39resolved_reference(_ref_62806);
    // SubProg patch_forward_type pc: 107 op: STARTLINE (58)

    /** fwdref.e:519	end procedure*/
    // SubProg patch_forward_type pc: 109 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_type

// block var tok_62805
    DeRef(_tok_62805);

// block var ref_62806

// block var fr_62807
    DeRef(_fr_62807);

// block var syms_62809
    DeRef(_syms_62809);
    _31117 = NOVALUE;
    _31121 = NOVALUE;
    return;
    // SubProg patch_forward_type pc: 112 op: BADRETURNF (43)
    ;
}


void _39patch_forward_case(object _tok_62835, object _ref_62836)
{
    object _fr_62837 = NOVALUE;
    object _switch_pc_62839 = NOVALUE;
    object _case_sym_62842 = NOVALUE;
    object _case_values_62871 = NOVALUE;
    object _cx_62876 = NOVALUE;
    object _negative_62884 = NOVALUE;
// skipping _31164  name type: 0
    object _31163 = NOVALUE; // 62901 31163
    object _31162 = NOVALUE; // 62899 31162
    object _31161 = NOVALUE; // 62896 31161
    object _31160 = NOVALUE; // 62895 31160
    object _31159 = NOVALUE; // 62892 31159
    object _31158 = NOVALUE; // 62891 31158
// skipping _31157  name type: 0
    object _31156 = NOVALUE; // 62889 31156
// skipping _31155  name type: 0
    object _31154 = NOVALUE; // 62887 31154
    object _31153 = NOVALUE; // 62886 31153
// skipping _31152  name type: 0
    object _31151 = NOVALUE; // 62882 31151
    object _31150 = NOVALUE; // 62881 31150
// skipping _31149  name type: 0
// skipping _31148  name type: 0
    object _31147 = NOVALUE; // 62877 31147
// skipping _31146  name type: 0
    object _31145 = NOVALUE; // 62873 31145
    object _31144 = NOVALUE; // 62870 31144
    object _31143 = NOVALUE; // 62868 31143
    object _31142 = NOVALUE; // 62867 31142
    object _31141 = NOVALUE; // 62866 31141
    object _31140 = NOVALUE; // 62865 31140
    object _31139 = NOVALUE; // 62864 31139
    object _31138 = NOVALUE; // 62862 31138
    object _31137 = NOVALUE; // 62861 31137
// skipping _31136  name type: 0
    object _31135 = NOVALUE; // 62856 31135
    object _31134 = NOVALUE; // 62855 31134
    object _31133 = NOVALUE; // 62853 31133
    object _31132 = NOVALUE; // 62852 31132
// skipping _31131  name type: 0
    object _31130 = NOVALUE; // 62848 31130
// skipping _31129  name type: 0
    object _31128 = NOVALUE; // 62844 31128
// skipping _31127  name type: 0
// skipping _31126  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_case pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_case pc: 3 op: STARTLINE (58)

    /** fwdref.e:522		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_case pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62837);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62837 = (object)*(((s1_ptr)_2)->base + _ref_62836);
    Ref(_fr_62837);
    // SubProg patch_forward_case pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_case pc: 13 op: STARTLINE (58)

    /** fwdref.e:524		integer switch_pc = fr[FR_DATA]*/
    // SubProg patch_forward_case pc: 15 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62837);
    _switch_pc_62839 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_switch_pc_62839))
    _switch_pc_62839 = (object)DBL_PTR(_switch_pc_62839)->dbl;
    // SubProg patch_forward_case pc: 19 op: STARTLINE (58)

    /** fwdref.e:527		if fr[FR_SUBPROG] = TopLevelSub then*/
    // SubProg patch_forward_case pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62837);
    _31128 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 27 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31128, _36TopLevelSub_16443)){
        _31128 = NOVALUE;
        goto L1; // [27] 48
    }
    _31128 = NOVALUE;
    // SubProg patch_forward_case pc: 31 op: STARTLINE (58)

    /** fwdref.e:528			case_sym = Code[switch_pc + 2]*/
    // SubProg patch_forward_case pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 35 op: PLUS (11)
    _31130 = _switch_pc_62839 + 2;
    // SubProg patch_forward_case pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    _case_sym_62842 = (object)*(((s1_ptr)_2)->base + _31130);
    if (!IS_ATOM_INT(_case_sym_62842)){
        _case_sym_62842 = (object)DBL_PTR(_case_sym_62842)->dbl;
    }
    // SubProg patch_forward_case pc: 45 op: ELSE (23)
    goto L2; // [45] 77
    // SubProg patch_forward_case pc: 47 op: NOP1 (159)
L1: // addr: 48 pc: 47 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 48 op: STARTLINE (58)

    /** fwdref.e:530			case_sym = SymTab[fr[FR_SUBPROG]][S_CODE][switch_pc + 2]*/
    // SubProg patch_forward_case pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62837);
    _31132 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_31132)){
        _31133 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31132)->dbl));
    }
    else{
        _31133 = (object)*(((s1_ptr)_2)->base + _31132);
    }
    // SubProg patch_forward_case pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31133);
    if (!IS_ATOM_INT(_36S_CODE_16103)){
        _31134 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    }
    else{
        _31134 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
    }
    _31133 = NOVALUE;
    // SubProg patch_forward_case pc: 66 op: PLUS (11)
    _31135 = _switch_pc_62839 + 2;
    // SubProg patch_forward_case pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31134);
    _case_sym_62842 = (object)*(((s1_ptr)_2)->base + _31135);
    if (!IS_ATOM_INT(_case_sym_62842)){
        _case_sym_62842 = (object)DBL_PTR(_case_sym_62842)->dbl;
    }
    _31134 = NOVALUE;
    // SubProg patch_forward_case pc: 76 op: NOP1 (159)
L2: // addr: 77 pc: 76 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 77 op: STARTLINE (58)

    /** fwdref.e:533		if SymTab[tok[T_SYM]][S_FILE_NO] = fr[FR_FILE] and fr[FR_SUBPROG] = TopLevelSub then*/
    // SubProg patch_forward_case pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62835);
    _31137 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_31137)){
        _31138 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31137)->dbl));
    }
    else{
        _31138 = (object)*(((s1_ptr)_2)->base + _31137);
    }
    // SubProg patch_forward_case pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31138);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _31139 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _31139 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _31138 = NOVALUE;
    // SubProg patch_forward_case pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62837);
    _31140 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_case pc: 101 op: EQUALS (3)
    if (IS_ATOM_INT(_31139) && IS_ATOM_INT(_31140)) {
        _31141 = (_31139 == _31140);
    }
    else {
        _31141 = binary_op(EQUALS, _31139, _31140);
    }
    _31139 = NOVALUE;
    _31140 = NOVALUE;
    // SubProg patch_forward_case pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31141)) {
        if (_31141 == 0) {
            goto L3; // [105] 129
        }
    }
    else {
        if (DBL_PTR(_31141)->dbl == 0.0) {
            goto L3; // [105] 129
        }
    }
    // SubProg patch_forward_case pc: 109 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62837);
    _31143 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 115 op: EQUALS (3)
    if (IS_ATOM_INT(_31143)) {
        _31144 = (_31143 == _36TopLevelSub_16443);
    }
    else {
        _31144 = binary_op(EQUALS, _31143, _36TopLevelSub_16443);
    }
    _31143 = NOVALUE;
    // SubProg patch_forward_case pc: 119 op: NOP1 (159)
    // SubProg patch_forward_case pc: 120 op: IF (20)
    if (_31144 == 0) {
        DeRef(_31144);
        _31144 = NOVALUE;
        goto L3; // [120] 129
    }
    else {
        if (!IS_ATOM_INT(_31144) && DBL_PTR(_31144)->dbl == 0.0){
            DeRef(_31144);
            _31144 = NOVALUE;
            goto L3; // [120] 129
        }
        DeRef(_31144);
        _31144 = NOVALUE;
    }
    DeRef(_31144);
    _31144 = NOVALUE;
    // SubProg patch_forward_case pc: 123 op: STARTLINE (58)

    /** fwdref.e:534			return*/
    // SubProg patch_forward_case pc: 125 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_case

// block var tok_62835
    DeRef(_tok_62835);

// block var ref_62836

// block var fr_62837
    DeRef(_fr_62837);

// block var switch_pc_62839

// block var case_sym_62842

// block var case_values_62871
    DeRef(_case_values_62871);

// block var cx_62876

// block var negative_62884
    _31132 = NOVALUE;
    DeRef(_31135);
    _31135 = NOVALUE;
    _31137 = NOVALUE;
    DeRef(_31130);
    _31130 = NOVALUE;
    DeRef(_31141);
    _31141 = NOVALUE;
    return;
    // SubProg patch_forward_case pc: 128 op: NOP1 (159)
L3: // addr: 129 pc: 128 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 129 op: STARTLINE (58)

    /** fwdref.e:537		sequence case_values = SymTab[case_sym][S_OBJ]*/
    // SubProg patch_forward_case pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 133 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_case pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31145 = (object)*(((s1_ptr)_2)->base + _case_sym_62842);
    // SubProg patch_forward_case pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 141 op: RHS_SUBS_CHECK (92)
    DeRef(_case_values_62871);
    _2 = (object)SEQ_PTR(_31145);
    _case_values_62871 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_case_values_62871);
    _31145 = NOVALUE;
    // SubProg patch_forward_case pc: 145 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_case pc: 147 op: STARTLINE (58)

    /** fwdref.e:539		integer cx = find( { ref }, case_values )*/
    // SubProg patch_forward_case pc: 149 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ref_62836;
    _31147 = MAKE_SEQ(_1);
    // SubProg patch_forward_case pc: 153 op: FIND_FROM (176)
    _cx_62876 = find_from(_31147, _case_values_62871, 1);
    DeRefDS(_31147);
    _31147 = NOVALUE;
    // SubProg patch_forward_case pc: 158 op: STARTLINE (58)

    /** fwdref.e:540		if not cx then*/
    // SubProg patch_forward_case pc: 160 op: NOT_IFW (108)
    if (_cx_62876 != 0)
    goto L4; // [160] 178
    // SubProg patch_forward_case pc: 163 op: STARTLINE (58)

    /** fwdref.e:541			cx = find( { -ref }, case_values )*/
    // SubProg patch_forward_case pc: 165 op: UMINUS (12)
    if ((uintptr_t)_ref_62836 == (uintptr_t)HIGH_BITS){
        _31150 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31150 = - _ref_62836;
    }
    // SubProg patch_forward_case pc: 168 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31150;
    _31151 = MAKE_SEQ(_1);
    _31150 = NOVALUE;
    // SubProg patch_forward_case pc: 172 op: FIND_FROM (176)
    _cx_62876 = find_from(_31151, _case_values_62871, 1);
    DeRefDS(_31151);
    _31151 = NOVALUE;
    // SubProg patch_forward_case pc: 177 op: NOP1 (159)
L4: // addr: 178 pc: 177 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 178 op: STARTLINE (58)

    /** fwdref.e:544	 	ifdef DEBUG then	*/
    // SubProg patch_forward_case pc: 180 op: STARTLINE (58)

    /** fwdref.e:551		integer negative = 0*/
    // SubProg patch_forward_case pc: 182 op: ASSIGN_I (113)
    _negative_62884 = 0;
    // SubProg patch_forward_case pc: 185 op: STARTLINE (58)

    /** fwdref.e:552		if case_values[cx][1] < 0 then*/
    // SubProg patch_forward_case pc: 187 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_case_values_62871);
    _31153 = (object)*(((s1_ptr)_2)->base + _cx_62876);
    // SubProg patch_forward_case pc: 191 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31153);
    _31154 = (object)*(((s1_ptr)_2)->base + 1);
    _31153 = NOVALUE;
    // SubProg patch_forward_case pc: 195 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _31154, 0)){
        _31154 = NOVALUE;
        goto L5; // [195] 224
    }
    _31154 = NOVALUE;
    // SubProg patch_forward_case pc: 199 op: STARTLINE (58)

    /** fwdref.e:553			negative = 1*/
    // SubProg patch_forward_case pc: 201 op: ASSIGN_I (113)
    _negative_62884 = 1;
    // SubProg patch_forward_case pc: 204 op: STARTLINE (58)

    /** fwdref.e:554			case_values[cx][1] *= -1*/
    // SubProg patch_forward_case pc: 206 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_case_values_62871);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62871 = MAKE_SEQ(_2);
    }
    _3 = (object)(_cx_62876 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_case pc: 211 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31158 = (object)*(((s1_ptr)_2)->base + 1);
    _31156 = NOVALUE;
    // SubProg patch_forward_case pc: 215 op: MULTIPLY (13)
    if (IS_ATOM_INT(_31158)) {
        if (_31158 == (short)_31158){
            _31159 = _31158 * -1;
        }
        else{
            _31159 = NewDouble(_31158 * (eudouble)-1);
        }
    }
    else {
        _31159 = binary_op(MULTIPLY, _31158, -1);
    }
    _31158 = NOVALUE;
    // SubProg patch_forward_case pc: 219 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31159;
    if( _1 != _31159 ){
        DeRef(_1);
    }
    _31159 = NOVALUE;
    _31156 = NOVALUE;
    // SubProg patch_forward_case pc: 223 op: NOP1 (159)
L5: // addr: 224 pc: 223 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 224 op: STARTLINE (58)

    /** fwdref.e:557		if negative then*/
    // SubProg patch_forward_case pc: 226 op: IF (20)
    if (_negative_62884 == 0)
    {
        goto L6; // [226] 247
    }
    else{
    }
    // SubProg patch_forward_case pc: 229 op: STARTLINE (58)

    /** fwdref.e:558			case_values[cx] = - tok[T_SYM]*/
    // SubProg patch_forward_case pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62835);
    _31160 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 237 op: UMINUS (12)
    if (IS_ATOM_INT(_31160)) {
        if ((uintptr_t)_31160 == (uintptr_t)HIGH_BITS){
            _31161 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _31161 = - _31160;
        }
    }
    else {
        _31161 = unary_op(UMINUS, _31160);
    }
    _31160 = NOVALUE;
    // SubProg patch_forward_case pc: 240 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_case_values_62871);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62871 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62876);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31161;
    if( _1 != _31161 ){
        DeRef(_1);
    }
    _31161 = NOVALUE;
    // SubProg patch_forward_case pc: 244 op: ELSE (23)
    goto L7; // [244] 260
    // SubProg patch_forward_case pc: 246 op: NOP1 (159)
L6: // addr: 247 pc: 246 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 247 op: STARTLINE (58)

    /** fwdref.e:560			case_values[cx] = tok[T_SYM]*/
    // SubProg patch_forward_case pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 251 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62835);
    _31162 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 255 op: ASSIGN_SUBS (16)
    Ref(_31162);
    _2 = (object)SEQ_PTR(_case_values_62871);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62871 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62876);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31162;
    if( _1 != _31162 ){
        DeRef(_1);
    }
    _31162 = NOVALUE;
    // SubProg patch_forward_case pc: 259 op: NOP1 (159)
L7: // addr: 260 pc: 259 sub: 62832 op: 159
    // SubProg patch_forward_case pc: 260 op: STARTLINE (58)

    /** fwdref.e:562		SymTab[case_sym][S_OBJ] = case_values*/
    // SubProg patch_forward_case pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 264 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_case_sym_62842 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_case pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 271 op: PASSIGN_SUBS (162)
    RefDS(_case_values_62871);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _case_values_62871;
    DeRef(_1);
    _31163 = NOVALUE;
    // SubProg patch_forward_case pc: 275 op: STARTLINE (58)

    /** fwdref.e:563		resolved_reference( ref )*/
    // SubProg patch_forward_case pc: 277 op: PROC (27)
    _39resolved_reference(_ref_62836);
    // SubProg patch_forward_case pc: 280 op: STARTLINE (58)

    /** fwdref.e:564	end procedure*/
    // SubProg patch_forward_case pc: 282 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_case

// block var tok_62835
    DeRef(_tok_62835);

// block var ref_62836

// block var fr_62837
    DeRef(_fr_62837);

// block var switch_pc_62839

// block var case_sym_62842

// block var case_values_62871
    DeRefDS(_case_values_62871);

// block var cx_62876

// block var negative_62884
    _31132 = NOVALUE;
    DeRef(_31135);
    _31135 = NOVALUE;
    _31137 = NOVALUE;
    DeRef(_31130);
    _31130 = NOVALUE;
    DeRef(_31141);
    _31141 = NOVALUE;
    return;
    // SubProg patch_forward_case pc: 285 op: BADRETURNF (43)
    ;
}


void _39patch_forward_type_check(object _tok_62907, object _ref_62908)
{
    object _fr_62909 = NOVALUE;
    object _which_type_62912 = NOVALUE;
    object _var_62914 = NOVALUE;
    object _pc_62947 = NOVALUE;
    object _with_type_check_62949 = NOVALUE;
    object _c_62979 = NOVALUE;
    object _subprog_inlined_insert_code_at_332_62988 = NOVALUE;
    object _code_inlined_insert_code_at_329_62987 = NOVALUE;
    object _subprog_inlined_insert_code_at_415_63004 = NOVALUE;
    object _code_inlined_insert_code_at_412_63003 = NOVALUE;
    object _subprog_inlined_insert_code_at_477_63014 = NOVALUE;
    object _code_inlined_insert_code_at_474_63013 = NOVALUE;
    object _subprog_inlined_insert_code_at_539_63024 = NOVALUE;
    object _code_inlined_insert_code_at_536_63023 = NOVALUE;
    object _start_pc_63031 = NOVALUE;
    object _subprog_inlined_insert_code_at_647_63048 = NOVALUE;
    object _code_inlined_insert_code_at_644_63047 = NOVALUE;
    object _c_63051 = NOVALUE;
    object _subprog_inlined_insert_code_at_741_63067 = NOVALUE;
    object _code_inlined_insert_code_at_738_63066 = NOVALUE;
    object _start_pc_63078 = NOVALUE;
    object _subprog_inlined_insert_code_at_886_63098 = NOVALUE;
    object _code_inlined_insert_code_at_883_63097 = NOVALUE;
    object _subprog_inlined_insert_code_at_987_63119 = NOVALUE;
    object _code_inlined_insert_code_at_984_63118 = NOVALUE;
// skipping _31254  name type: 0
    object _31253 = NOVALUE; // 63116 31253
    object _31252 = NOVALUE; // 63115 31252
    object _31251 = NOVALUE; // 63113 31251
    object _31250 = NOVALUE; // 63111 31250
    object _31249 = NOVALUE; // 63109 31249
    object _31248 = NOVALUE; // 63108 31248
    object _31247 = NOVALUE; // 63106 31247
// skipping _31246  name type: 0
    object _31245 = NOVALUE; // 63102 31245
// skipping _31244  name type: 0
    object _31243 = NOVALUE; // 63095 31243
    object _31242 = NOVALUE; // 63094 31242
    object _31241 = NOVALUE; // 63092 31241
    object _31240 = NOVALUE; // 63090 31240
    object _31239 = NOVALUE; // 63088 31239
    object _31238 = NOVALUE; // 63087 31238
    object _31237 = NOVALUE; // 63085 31237
// skipping _31236  name type: 0
    object _31235 = NOVALUE; // 63081 31235
    object _31234 = NOVALUE; // 63077 31234
    object _31233 = NOVALUE; // 63075 31233
    object _31232 = NOVALUE; // 63073 31232
    object _31231 = NOVALUE; // 63072 31231
    object _31230 = NOVALUE; // 63071 31230
// skipping _31229  name type: 0
    object _31228 = NOVALUE; // 63064 31228
    object _31227 = NOVALUE; // 63063 31227
    object _31226 = NOVALUE; // 63060 31226
    object _31225 = NOVALUE; // 63059 31225
// skipping _31224  name type: 0
    object _31223 = NOVALUE; // 63056 31223
    object _31222 = NOVALUE; // 63055 31222
// skipping _31221  name type: 0
// skipping _31220  name type: 0
    object _31219 = NOVALUE; // 63045 31219
    object _31218 = NOVALUE; // 63044 31218
// skipping _31217  name type: 0
    object _31216 = NOVALUE; // 63040 31216
    object _31215 = NOVALUE; // 63038 31215
    object _31214 = NOVALUE; // 63037 31214
    object _31213 = NOVALUE; // 63035 31213
    object _31212 = NOVALUE; // 63030 31212
    object _31211 = NOVALUE; // 63028 31211
// skipping _31210  name type: 0
    object _31209 = NOVALUE; // 63021 31209
    object _31208 = NOVALUE; // 63020 31208
// skipping _31207  name type: 0
// skipping _31206  name type: 0
    object _31205 = NOVALUE; // 63011 31205
    object _31204 = NOVALUE; // 63010 31204
// skipping _31203  name type: 0
// skipping _31202  name type: 0
    object _31201 = NOVALUE; // 63001 31201
    object _31200 = NOVALUE; // 63000 31200
// skipping _31199  name type: 0
// skipping _31198  name type: 0
// skipping _31197  name type: 0
    object _31196 = NOVALUE; // 62985 31196
    object _31195 = NOVALUE; // 62984 31195
// skipping _31194  name type: 0
    object _31193 = NOVALUE; // 62978 31193
    object _31192 = NOVALUE; // 62976 31192
// skipping _31191  name type: 0
    object _31190 = NOVALUE; // 62967 31190
    object _31189 = NOVALUE; // 62966 31189
// skipping _31188  name type: 0
// skipping _31187  name type: 0
    object _31186 = NOVALUE; // 62962 31186
// skipping _31185  name type: 0
// skipping _31184  name type: 0
    object _31183 = NOVALUE; // 62955 31183
// skipping _31182  name type: 0
    object _31181 = NOVALUE; // 62951 31181
// skipping _31180  name type: 0
// skipping _31179  name type: 0
    object _31178 = NOVALUE; // 62944 31178
    object _31177 = NOVALUE; // 62943 31177
// skipping _31176  name type: 0
// skipping _31175  name type: 0
    object _31174 = NOVALUE; // 62933 31174
// skipping _31173  name type: 0
// skipping _31172  name type: 0
// skipping _31171  name type: 0
// skipping _31170  name type: 0
    object _31169 = NOVALUE; // 62922 31169
    object _31168 = NOVALUE; // 62921 31168
// skipping _31167  name type: 0
    object _31166 = NOVALUE; // 62916 31166
// skipping _31165  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_type_check pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 3 op: STARTLINE (58)

    /** fwdref.e:568		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_type_check pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62909);
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _fr_62909 = (object)*(((s1_ptr)_2)->base + _ref_62908);
    Ref(_fr_62909);
    // SubProg patch_forward_type_check pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 13 op: STARTLINE (58)

    /** fwdref.e:572		if fr[FR_OP] = TYPE_CHECK_FORWARD then*/
    // SubProg patch_forward_type_check pc: 15 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31166 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 21 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31166, 197)){
        _31166 = NOVALUE;
        goto L1; // [21] 86
    }
    _31166 = NOVALUE;
    // SubProg patch_forward_type_check pc: 25 op: STARTLINE (58)

    /** fwdref.e:573			which_type = SymTab[tok[T_SYM]][S_VTYPE]*/
    // SubProg patch_forward_type_check pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62907);
    _31168 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_type_check pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_31168)){
        _31169 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31168)->dbl));
    }
    else{
        _31169 = (object)*(((s1_ptr)_2)->base + _31168);
    }
    // SubProg patch_forward_type_check pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31169);
    _which_type_62912 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_which_type_62912)){
        _which_type_62912 = (object)DBL_PTR(_which_type_62912)->dbl;
    }
    _31169 = NOVALUE;
    // SubProg patch_forward_type_check pc: 47 op: STARTLINE (58)

    /** fwdref.e:574			if not which_type then*/
    // SubProg patch_forward_type_check pc: 49 op: NOT_IFW (108)
    if (_which_type_62912 != 0)
    goto L2; // [49] 72
    // SubProg patch_forward_type_check pc: 52 op: STARTLINE (58)

    /** fwdref.e:575				which_type = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62907);
    _which_type_62912 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_62912)){
        _which_type_62912 = (object)DBL_PTR(_which_type_62912)->dbl;
    }
    // SubProg patch_forward_type_check pc: 62 op: STARTLINE (58)

    /** fwdref.e:576				var = 0*/
    // SubProg patch_forward_type_check pc: 64 op: ASSIGN (18)
    _var_62914 = 0;
    // SubProg patch_forward_type_check pc: 67 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 69 op: ELSE (23)
    goto L3; // [69] 144
    // SubProg patch_forward_type_check pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 72 op: STARTLINE (58)

    /** fwdref.e:578				var = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62907);
    _var_62914 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_var_62914)){
        _var_62914 = (object)DBL_PTR(_var_62914)->dbl;
    }
    // SubProg patch_forward_type_check pc: 82 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 83 op: ELSE (23)
    goto L3; // [83] 144
    // SubProg patch_forward_type_check pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 86 op: STARTLINE (58)

    /** fwdref.e:582		elsif fr[FR_OP] = TYPE then*/
    // SubProg patch_forward_type_check pc: 88 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31174 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 94 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31174, 504)){
        _31174 = NOVALUE;
        goto L4; // [94] 118
    }
    _31174 = NOVALUE;
    // SubProg patch_forward_type_check pc: 98 op: STARTLINE (58)

    /** fwdref.e:583			which_type = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62907);
    _which_type_62912 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_62912)){
        _which_type_62912 = (object)DBL_PTR(_which_type_62912)->dbl;
    }
    // SubProg patch_forward_type_check pc: 108 op: STARTLINE (58)

    /** fwdref.e:584			var = 0*/
    // SubProg patch_forward_type_check pc: 110 op: ASSIGN (18)
    _var_62914 = 0;
    // SubProg patch_forward_type_check pc: 113 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 115 op: ELSE (23)
    goto L3; // [115] 144
    // SubProg patch_forward_type_check pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 118 op: STARTLINE (58)

    /** fwdref.e:587			prep_forward_error( ref )*/
    // SubProg patch_forward_type_check pc: 120 op: PROC (27)
    _39prep_forward_error(_ref_62908);
    // SubProg patch_forward_type_check pc: 123 op: STARTLINE (58)

    /** fwdref.e:588			InternalErr( 262, { TYPE_CHECK, TYPE_CHECK_FORWARD, fr[FR_OP] })*/
    // SubProg patch_forward_type_check pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 129 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31177 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 133 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 65;
    ((intptr_t*)_2)[2] = 197;
    Ref(_31177);
    ((intptr_t*)_2)[3] = _31177;
    _31178 = MAKE_SEQ(_1);
    _31177 = NOVALUE;
    // SubProg patch_forward_type_check pc: 139 op: PROC (27)
    _50InternalErr(262, _31178);
    _31178 = NOVALUE;
    // SubProg patch_forward_type_check pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 144 op: STARTLINE (58)

    /** fwdref.e:591		if which_type < 0 then*/
    // SubProg patch_forward_type_check pc: 146 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_type_check pc: 148 op: LESS_IFW (102)
    if (_which_type_62912 >= 0)
    goto L5; // [148] 158
    // SubProg patch_forward_type_check pc: 152 op: STARTLINE (58)

    /** fwdref.e:593			return*/
    // SubProg patch_forward_type_check pc: 154 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_type_check

// block var tok_62907
    DeRef(_tok_62907);

// block var ref_62908

// block var fr_62909
    DeRef(_fr_62909);

// block var which_type_62912

// block var var_62914

// block var pc_62947

// block var with_type_check_62949
    _31168 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 157 op: NOP1 (159)
L5: // addr: 158 pc: 157 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 158 op: STARTLINE (58)

    /** fwdref.e:596		set_code( ref )*/
    // SubProg patch_forward_type_check pc: 160 op: PROC (27)
    _39set_code(_ref_62908);
    // SubProg patch_forward_type_check pc: 163 op: STARTLINE (58)

    /** fwdref.e:598		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_type_check pc: 165 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62909);
    _pc_62947 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62947))
    _pc_62947 = (object)DBL_PTR(_pc_62947)->dbl;
    // SubProg patch_forward_type_check pc: 169 op: STARTLINE (58)

    /** fwdref.e:599		integer with_type_check = Code[pc + 2]*/
    // SubProg patch_forward_type_check pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 173 op: PLUS (11)
    _31181 = _pc_62947 + 2;
    // SubProg patch_forward_type_check pc: 177 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    _with_type_check_62949 = (object)*(((s1_ptr)_2)->base + _31181);
    if (!IS_ATOM_INT(_with_type_check_62949)){
        _with_type_check_62949 = (object)DBL_PTR(_with_type_check_62949)->dbl;
    }
    // SubProg patch_forward_type_check pc: 183 op: STARTLINE (58)

    /** fwdref.e:601		if Code[pc] != TYPE_CHECK_FORWARD then*/
    // SubProg patch_forward_type_check pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 187 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    _31183 = (object)*(((s1_ptr)_2)->base + _pc_62947);
    // SubProg patch_forward_type_check pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 193 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _31183, 197)){
        _31183 = NOVALUE;
        goto L6; // [193] 204
    }
    _31183 = NOVALUE;
    // SubProg patch_forward_type_check pc: 197 op: STARTLINE (58)

    /** fwdref.e:602			forward_error( tok, ref )*/
    // SubProg patch_forward_type_check pc: 199 op: PROC (27)
    Ref(_tok_62907);
    _39forward_error(_tok_62907, _ref_62908);
    // SubProg patch_forward_type_check pc: 203 op: NOP1 (159)
L6: // addr: 204 pc: 203 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 204 op: STARTLINE (58)

    /** fwdref.e:604		if not var then*/
    // SubProg patch_forward_type_check pc: 206 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_type_check pc: 208 op: NOT_IFW (108)
    if (_var_62914 != 0)
    goto L7; // [208] 226
    // SubProg patch_forward_type_check pc: 211 op: STARTLINE (58)

    /** fwdref.e:606			var = Code[pc+1]*/
    // SubProg patch_forward_type_check pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 215 op: PLUS1 (93)
    _31186 = _pc_62947 + 1;
    // SubProg patch_forward_type_check pc: 219 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36Code_16524);
    _var_62914 = (object)*(((s1_ptr)_2)->base + _31186);
    if (!IS_ATOM_INT(_var_62914)){
        _var_62914 = (object)DBL_PTR(_var_62914)->dbl;
    }
    // SubProg patch_forward_type_check pc: 225 op: NOP1 (159)
L7: // addr: 226 pc: 225 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 226 op: STARTLINE (58)

    /** fwdref.e:609		if var < 0 then*/
    // SubProg patch_forward_type_check pc: 228 op: LESS_IFW (102)
    if (_var_62914 >= 0)
    goto L8; // [228] 238
    // SubProg patch_forward_type_check pc: 232 op: STARTLINE (58)

    /** fwdref.e:611			return*/
    // SubProg patch_forward_type_check pc: 234 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_type_check

// block var tok_62907
    DeRef(_tok_62907);

// block var ref_62908

// block var fr_62909
    DeRef(_fr_62909);

// block var which_type_62912

// block var var_62914

// block var pc_62947

// block var with_type_check_62949
    DeRef(_31186);
    _31186 = NOVALUE;
    _31168 = NOVALUE;
    DeRef(_31181);
    _31181 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 237 op: NOP1 (159)
L8: // addr: 238 pc: 237 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 238 op: STARTLINE (58)

    /** fwdref.e:615		replace_code( {}, pc, pc + 2, fr[FR_SUBPROG])*/
    // SubProg patch_forward_type_check pc: 240 op: PLUS (11)
    _31189 = _pc_62947 + 2;
    if ((object)((uintptr_t)_31189 + (uintptr_t)HIGH_BITS) >= 0){
        _31189 = NewDouble((eudouble)_31189);
    }
    // SubProg patch_forward_type_check pc: 244 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31190 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 248 op: PROC (27)
    RefDS(_21933);
    Ref(_31190);
    _39replace_code(_21933, _pc_62947, _31189, _31190);
    _31189 = NOVALUE;
    _31190 = NOVALUE;
    // SubProg patch_forward_type_check pc: 254 op: STARTLINE (58)

    /** fwdref.e:617		if TRANSLATE then*/
    // SubProg patch_forward_type_check pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 258 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L9; // [258] 364
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 261 op: STARTLINE (58)

    /** fwdref.e:618			if with_type_check then*/
    // SubProg patch_forward_type_check pc: 263 op: IF (20)
    if (_with_type_check_62949 == 0)
    {
        goto LA; // [263] 771
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 266 op: STARTLINE (58)

    /** fwdref.e:619				if which_type != object_type then*/
    // SubProg patch_forward_type_check pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 270 op: NOTEQ_IFW (105)
    if (_which_type_62912 == _54object_type_46255)
    goto LA; // [270] 771
    // SubProg patch_forward_type_check pc: 274 op: STARTLINE (58)

    /** fwdref.e:620					if SymTab[which_type][S_EFFECT] then*/
    // SubProg patch_forward_type_check pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31192 = (object)*(((s1_ptr)_2)->base + _which_type_62912);
    // SubProg patch_forward_type_check pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31192);
    _31193 = (object)*(((s1_ptr)_2)->base + 23);
    _31192 = NOVALUE;
    // SubProg patch_forward_type_check pc: 288 op: IF (20)
    if (_31193 == 0) {
        _31193 = NOVALUE;
        goto LB; // [288] 357
    }
    else {
        if (!IS_ATOM_INT(_31193) && DBL_PTR(_31193)->dbl == 0.0){
            _31193 = NOVALUE;
            goto LB; // [288] 357
        }
        _31193 = NOVALUE;
    }
    _31193 = NOVALUE;
    // SubProg patch_forward_type_check pc: 291 op: STARTLINE (58)

    /** fwdref.e:622						integer c = NewTempSym()*/
    // SubProg patch_forward_type_check pc: 293 op: PROC (27)
    _c_62979 = _54NewTempSym(0);
    // SubProg patch_forward_type_check pc: 297 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_62979)) {
        _1 = (object)(DBL_PTR(_c_62979)->dbl);
        DeRefDS(_c_62979);
        _c_62979 = _1;
    }
    // SubProg patch_forward_type_check pc: 299 op: STARTLINE (58)

    /** fwdref.e:623						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 303 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 305 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_62912;
    ((intptr_t*)_2)[3] = _var_62914;
    ((intptr_t*)_2)[4] = _c_62979;
    ((intptr_t*)_2)[5] = 65;
    _31195 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 313 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31196 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 317 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_329_62987);
    _code_inlined_insert_code_at_329_62987 = _31195;
    _31195 = NOVALUE;
    // SubProg patch_forward_type_check pc: 320 op: ASSIGN (18)
    Ref(_31196);
    DeRef(_subprog_inlined_insert_code_at_332_62988);
    _subprog_inlined_insert_code_at_332_62988 = _31196;
    _31196 = NOVALUE;
    // SubProg patch_forward_type_check pc: 323 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 325 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_332_62988)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_332_62988)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_332_62988);
        _subprog_inlined_insert_code_at_332_62988 = _1;
    }
    // SubProg patch_forward_type_check pc: 327 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 329 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_332_62988;
    // SubProg patch_forward_type_check pc: 332 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 334 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_329_62987);
    _66insert_code(_code_inlined_insert_code_at_329_62987, _pc_62947);
    // SubProg patch_forward_type_check pc: 338 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 340 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 343 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 345 op: ELSE (23)
    goto LC; // [345] 348
    // SubProg patch_forward_type_check pc: 347 op: NOP1 (159)
LC: // addr: 348 pc: 347 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 348 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 329

// block var code_inlined_insert_code_at_329_62987
    DeRefi(_code_inlined_insert_code_at_329_62987);
    _code_inlined_insert_code_at_329_62987 = NOVALUE;

// block var subprog_inlined_insert_code_at_332_62988
    DeRef(_subprog_inlined_insert_code_at_332_62988);
    _subprog_inlined_insert_code_at_332_62988 = NOVALUE;
    // SubProg patch_forward_type_check pc: 350 op: STARTLINE (58)

    /** fwdref.e:624						pc += 5*/
    // SubProg patch_forward_type_check pc: 352 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 5;
    // SubProg patch_forward_type_check pc: 356 op: NOP1 (159)
LB: // addr: 357 pc: 356 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 357 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var c_62979
    // SubProg patch_forward_type_check pc: 359 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 360 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 361 op: ELSE (23)
    goto LA; // [361] 771
    // SubProg patch_forward_type_check pc: 363 op: NOP1 (159)
L9: // addr: 364 pc: 363 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 364 op: STARTLINE (58)

    /** fwdref.e:630			if with_type_check then*/
    // SubProg patch_forward_type_check pc: 366 op: IF (20)
    if (_with_type_check_62949 == 0)
    {
        goto LD; // [366] 770
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 369 op: STARTLINE (58)

    /** fwdref.e:632				if which_type = object_type then*/
    // SubProg patch_forward_type_check pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 373 op: EQUALS_IFW (104)
    if (_which_type_62912 != _54object_type_46255)
    goto LE; // [373] 380
    // SubProg patch_forward_type_check pc: 377 op: ELSE (23)
    goto LF; // [377] 769
    // SubProg patch_forward_type_check pc: 379 op: NOP1 (159)
LE: // addr: 380 pc: 379 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 380 op: STARTLINE (58)

    /** fwdref.e:636					if which_type = integer_type then*/
    // SubProg patch_forward_type_check pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 384 op: EQUALS_IFW (104)
    if (_which_type_62912 != _54integer_type_46261)
    goto L10; // [384] 442
    // SubProg patch_forward_type_check pc: 388 op: STARTLINE (58)

    /** fwdref.e:637						insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 392 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62914;
    _31200 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 396 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31201 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 400 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_412_63003);
    _code_inlined_insert_code_at_412_63003 = _31200;
    _31200 = NOVALUE;
    // SubProg patch_forward_type_check pc: 403 op: ASSIGN (18)
    Ref(_31201);
    DeRef(_subprog_inlined_insert_code_at_415_63004);
    _subprog_inlined_insert_code_at_415_63004 = _31201;
    _31201 = NOVALUE;
    // SubProg patch_forward_type_check pc: 406 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 408 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_415_63004)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_415_63004)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_415_63004);
        _subprog_inlined_insert_code_at_415_63004 = _1;
    }
    // SubProg patch_forward_type_check pc: 410 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 412 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_415_63004;
    // SubProg patch_forward_type_check pc: 415 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 417 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_412_63003);
    _66insert_code(_code_inlined_insert_code_at_412_63003, _pc_62947);
    // SubProg patch_forward_type_check pc: 421 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 423 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 426 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 428 op: ELSE (23)
    goto L11; // [428] 431
    // SubProg patch_forward_type_check pc: 430 op: NOP1 (159)
L11: // addr: 431 pc: 430 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 431 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 412

// block var code_inlined_insert_code_at_412_63003
    DeRefi(_code_inlined_insert_code_at_412_63003);
    _code_inlined_insert_code_at_412_63003 = NOVALUE;

// block var subprog_inlined_insert_code_at_415_63004
    DeRef(_subprog_inlined_insert_code_at_415_63004);
    _subprog_inlined_insert_code_at_415_63004 = NOVALUE;
    // SubProg patch_forward_type_check pc: 433 op: STARTLINE (58)

    /** fwdref.e:638						pc += 2*/
    // SubProg patch_forward_type_check pc: 435 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 2;
    // SubProg patch_forward_type_check pc: 439 op: ELSE (23)
    goto L12; // [439] 768
    // SubProg patch_forward_type_check pc: 441 op: NOP1 (159)
L10: // addr: 442 pc: 441 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 442 op: STARTLINE (58)

    /** fwdref.e:640					elsif which_type = sequence_type then*/
    // SubProg patch_forward_type_check pc: 444 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 446 op: EQUALS_IFW (104)
    if (_which_type_62912 != _54sequence_type_46259)
    goto L13; // [446] 504
    // SubProg patch_forward_type_check pc: 450 op: STARTLINE (58)

    /** fwdref.e:641						insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG])*/
    // SubProg patch_forward_type_check pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 454 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_62914;
    _31204 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 458 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31205 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 462 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_474_63013);
    _code_inlined_insert_code_at_474_63013 = _31204;
    _31204 = NOVALUE;
    // SubProg patch_forward_type_check pc: 465 op: ASSIGN (18)
    Ref(_31205);
    DeRef(_subprog_inlined_insert_code_at_477_63014);
    _subprog_inlined_insert_code_at_477_63014 = _31205;
    _31205 = NOVALUE;
    // SubProg patch_forward_type_check pc: 468 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 470 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_477_63014)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_477_63014)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_477_63014);
        _subprog_inlined_insert_code_at_477_63014 = _1;
    }
    // SubProg patch_forward_type_check pc: 472 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 474 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_477_63014;
    // SubProg patch_forward_type_check pc: 477 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 479 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_474_63013);
    _66insert_code(_code_inlined_insert_code_at_474_63013, _pc_62947);
    // SubProg patch_forward_type_check pc: 483 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 485 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 488 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 490 op: ELSE (23)
    goto L14; // [490] 493
    // SubProg patch_forward_type_check pc: 492 op: NOP1 (159)
L14: // addr: 493 pc: 492 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 493 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 474

// block var code_inlined_insert_code_at_474_63013
    DeRefi(_code_inlined_insert_code_at_474_63013);
    _code_inlined_insert_code_at_474_63013 = NOVALUE;

// block var subprog_inlined_insert_code_at_477_63014
    DeRef(_subprog_inlined_insert_code_at_477_63014);
    _subprog_inlined_insert_code_at_477_63014 = NOVALUE;
    // SubProg patch_forward_type_check pc: 495 op: STARTLINE (58)

    /** fwdref.e:642						pc += 2*/
    // SubProg patch_forward_type_check pc: 497 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 2;
    // SubProg patch_forward_type_check pc: 501 op: ELSE (23)
    goto L12; // [501] 768
    // SubProg patch_forward_type_check pc: 503 op: NOP1 (159)
L13: // addr: 504 pc: 503 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 504 op: STARTLINE (58)

    /** fwdref.e:644					elsif which_type = atom_type then*/
    // SubProg patch_forward_type_check pc: 506 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 508 op: EQUALS_IFW (104)
    if (_which_type_62912 != _54atom_type_46257)
    goto L15; // [508] 566
    // SubProg patch_forward_type_check pc: 512 op: STARTLINE (58)

    /** fwdref.e:645						insert_code( { ATOM_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 514 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 516 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 101;
    ((intptr_t *)_2)[2] = _var_62914;
    _31208 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 520 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31209 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 524 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_536_63023);
    _code_inlined_insert_code_at_536_63023 = _31208;
    _31208 = NOVALUE;
    // SubProg patch_forward_type_check pc: 527 op: ASSIGN (18)
    Ref(_31209);
    DeRef(_subprog_inlined_insert_code_at_539_63024);
    _subprog_inlined_insert_code_at_539_63024 = _31209;
    _31209 = NOVALUE;
    // SubProg patch_forward_type_check pc: 530 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 532 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_539_63024)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_539_63024)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_539_63024);
        _subprog_inlined_insert_code_at_539_63024 = _1;
    }
    // SubProg patch_forward_type_check pc: 534 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 536 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_539_63024;
    // SubProg patch_forward_type_check pc: 539 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 541 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_536_63023);
    _66insert_code(_code_inlined_insert_code_at_536_63023, _pc_62947);
    // SubProg patch_forward_type_check pc: 545 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 547 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 550 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 552 op: ELSE (23)
    goto L16; // [552] 555
    // SubProg patch_forward_type_check pc: 554 op: NOP1 (159)
L16: // addr: 555 pc: 554 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 555 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 536

// block var code_inlined_insert_code_at_536_63023
    DeRefi(_code_inlined_insert_code_at_536_63023);
    _code_inlined_insert_code_at_536_63023 = NOVALUE;

// block var subprog_inlined_insert_code_at_539_63024
    DeRef(_subprog_inlined_insert_code_at_539_63024);
    _subprog_inlined_insert_code_at_539_63024 = NOVALUE;
    // SubProg patch_forward_type_check pc: 557 op: STARTLINE (58)

    /** fwdref.e:646						pc += 2*/
    // SubProg patch_forward_type_check pc: 559 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 2;
    // SubProg patch_forward_type_check pc: 563 op: ELSE (23)
    goto L12; // [563] 768
    // SubProg patch_forward_type_check pc: 565 op: NOP1 (159)
L15: // addr: 566 pc: 565 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 566 op: STARTLINE (58)

    /** fwdref.e:648					elsif SymTab[which_type][S_NEXT] then*/
    // SubProg patch_forward_type_check pc: 568 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 570 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31211 = (object)*(((s1_ptr)_2)->base + _which_type_62912);
    // SubProg patch_forward_type_check pc: 574 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 576 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31211);
    _31212 = (object)*(((s1_ptr)_2)->base + 2);
    _31211 = NOVALUE;
    // SubProg patch_forward_type_check pc: 580 op: IF (20)
    if (_31212 == 0) {
        _31212 = NOVALUE;
        goto L17; // [580] 765
    }
    else {
        if (!IS_ATOM_INT(_31212) && DBL_PTR(_31212)->dbl == 0.0){
            _31212 = NOVALUE;
            goto L17; // [580] 765
        }
        _31212 = NOVALUE;
    }
    _31212 = NOVALUE;
    // SubProg patch_forward_type_check pc: 583 op: STARTLINE (58)

    /** fwdref.e:649						integer start_pc = pc*/
    // SubProg patch_forward_type_check pc: 585 op: ASSIGN_I (113)
    _start_pc_63031 = _pc_62947;
    // SubProg patch_forward_type_check pc: 588 op: STARTLINE (58)

    /** fwdref.e:652						if SymTab[SymTab[which_type][S_NEXT]][S_VTYPE] = integer_type then*/
    // SubProg patch_forward_type_check pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 592 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 594 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31213 = (object)*(((s1_ptr)_2)->base + _which_type_62912);
    // SubProg patch_forward_type_check pc: 598 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 600 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31213);
    _31214 = (object)*(((s1_ptr)_2)->base + 2);
    _31213 = NOVALUE;
    // SubProg patch_forward_type_check pc: 604 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_31214)){
        _31215 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31214)->dbl));
    }
    else{
        _31215 = (object)*(((s1_ptr)_2)->base + _31214);
    }
    // SubProg patch_forward_type_check pc: 608 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 610 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31215);
    _31216 = (object)*(((s1_ptr)_2)->base + 15);
    _31215 = NOVALUE;
    // SubProg patch_forward_type_check pc: 614 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 616 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31216, _54integer_type_46261)){
        _31216 = NOVALUE;
        goto L18; // [616] 672
    }
    _31216 = NOVALUE;
    // SubProg patch_forward_type_check pc: 620 op: STARTLINE (58)

    /** fwdref.e:654							insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 624 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62914;
    _31218 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 628 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31219 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 632 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_644_63047);
    _code_inlined_insert_code_at_644_63047 = _31218;
    _31218 = NOVALUE;
    // SubProg patch_forward_type_check pc: 635 op: ASSIGN (18)
    Ref(_31219);
    DeRef(_subprog_inlined_insert_code_at_647_63048);
    _subprog_inlined_insert_code_at_647_63048 = _31219;
    _31219 = NOVALUE;
    // SubProg patch_forward_type_check pc: 638 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 640 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_647_63048)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_647_63048)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_647_63048);
        _subprog_inlined_insert_code_at_647_63048 = _1;
    }
    // SubProg patch_forward_type_check pc: 642 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 644 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_647_63048;
    // SubProg patch_forward_type_check pc: 647 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 649 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_644_63047);
    _66insert_code(_code_inlined_insert_code_at_644_63047, _pc_62947);
    // SubProg patch_forward_type_check pc: 653 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 655 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 658 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 660 op: ELSE (23)
    goto L19; // [660] 663
    // SubProg patch_forward_type_check pc: 662 op: NOP1 (159)
L19: // addr: 663 pc: 662 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 663 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 644

// block var code_inlined_insert_code_at_644_63047
    DeRefi(_code_inlined_insert_code_at_644_63047);
    _code_inlined_insert_code_at_644_63047 = NOVALUE;

// block var subprog_inlined_insert_code_at_647_63048
    DeRef(_subprog_inlined_insert_code_at_647_63048);
    _subprog_inlined_insert_code_at_647_63048 = NOVALUE;
    // SubProg patch_forward_type_check pc: 665 op: STARTLINE (58)

    /** fwdref.e:656							pc += 2*/
    // SubProg patch_forward_type_check pc: 667 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 2;
    // SubProg patch_forward_type_check pc: 671 op: NOP1 (159)
L18: // addr: 672 pc: 671 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 672 op: STARTLINE (58)

    /** fwdref.e:658						symtab_index c = NewTempSym()*/
    // SubProg patch_forward_type_check pc: 674 op: PROC (27)
    _c_63051 = _54NewTempSym(0);
    // SubProg patch_forward_type_check pc: 678 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_63051)) {
        _1 = (object)(DBL_PTR(_c_63051)->dbl);
        DeRefDS(_c_63051);
        _c_63051 = _1;
    }
    // SubProg patch_forward_type_check pc: 680 op: STARTLINE (58)

    /** fwdref.e:659						SymTab[fr[FR_SUBPROG]][S_STACK_SPACE] += 1*/
    // SubProg patch_forward_type_check pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 684 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31222 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 688 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31222))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31222)->dbl));
    else
    _3 = (object)(_31222 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_type_check pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 695 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151)){
        _31225 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    }
    else{
        _31225 = (object)*(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    }
    _31223 = NOVALUE;
    // SubProg patch_forward_type_check pc: 699 op: PLUS1 (93)
    if (IS_ATOM_INT(_31225)) {
        _31226 = _31225 + 1;
        if (_31226 > MAXINT){
            _31226 = NewDouble((eudouble)_31226);
        }
    }
    else
    _31226 = binary_op(PLUS, 1, _31225);
    _31225 = NOVALUE;
    // SubProg patch_forward_type_check pc: 703 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31226;
    if( _1 != _31226 ){
        DeRef(_1);
    }
    _31226 = NOVALUE;
    _31223 = NOVALUE;
    // SubProg patch_forward_type_check pc: 707 op: STARTLINE (58)

    /** fwdref.e:660						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 709 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 713 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_62912;
    ((intptr_t*)_2)[3] = _var_62914;
    ((intptr_t*)_2)[4] = _c_63051;
    ((intptr_t*)_2)[5] = 65;
    _31227 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 721 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31228 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 725 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_738_63066);
    _code_inlined_insert_code_at_738_63066 = _31227;
    _31227 = NOVALUE;
    // SubProg patch_forward_type_check pc: 728 op: ASSIGN (18)
    Ref(_31228);
    DeRef(_subprog_inlined_insert_code_at_741_63067);
    _subprog_inlined_insert_code_at_741_63067 = _31228;
    _31228 = NOVALUE;
    // SubProg patch_forward_type_check pc: 731 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 733 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_741_63067)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_741_63067)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_741_63067);
        _subprog_inlined_insert_code_at_741_63067 = _1;
    }
    // SubProg patch_forward_type_check pc: 735 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 737 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_741_63067;
    // SubProg patch_forward_type_check pc: 740 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 742 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_738_63066);
    _66insert_code(_code_inlined_insert_code_at_738_63066, _pc_62947);
    // SubProg patch_forward_type_check pc: 746 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 748 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 751 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 753 op: ELSE (23)
    goto L1A; // [753] 756
    // SubProg patch_forward_type_check pc: 755 op: NOP1 (159)
L1A: // addr: 756 pc: 755 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 756 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 738

// block var code_inlined_insert_code_at_738_63066
    DeRefi(_code_inlined_insert_code_at_738_63066);
    _code_inlined_insert_code_at_738_63066 = NOVALUE;

// block var subprog_inlined_insert_code_at_741_63067
    DeRef(_subprog_inlined_insert_code_at_741_63067);
    _subprog_inlined_insert_code_at_741_63067 = NOVALUE;
    // SubProg patch_forward_type_check pc: 758 op: STARTLINE (58)

    /** fwdref.e:661						pc += 4*/
    // SubProg patch_forward_type_check pc: 760 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 4;
    // SubProg patch_forward_type_check pc: 764 op: NOP1 (159)
L17: // addr: 765 pc: 764 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 765 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var start_pc_63031

// block var c_63051
    // SubProg patch_forward_type_check pc: 767 op: NOP1 (159)
L12: // addr: 768 pc: 767 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 768 op: NOP1 (159)
LF: // addr: 769 pc: 768 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 769 op: NOP1 (159)
LD: // addr: 770 pc: 769 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 770 op: NOP1 (159)
LA: // addr: 771 pc: 770 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 771 op: STARTLINE (58)

    /** fwdref.e:668		if (TRANSLATE or not with_type_check) and SymTab[which_type][S_NEXT] then*/
    // SubProg patch_forward_type_check pc: 773 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 775 op: SC1_OR (143)
    if (_36TRANSLATE_16061 != 0) {
        _31230 = 1;
        goto L1B; // [775] 786
    }
    // SubProg patch_forward_type_check pc: 779 op: NOT (7)
    _31231 = (_with_type_check_62949 == 0);
    // SubProg patch_forward_type_check pc: 782 op: SC2_OR (144)
    _31230 = (_31231 != 0);
    // SubProg patch_forward_type_check pc: 785 op: NOP1 (159)
L1B: // addr: 786 pc: 785 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 786 op: SC1_AND_IF (146)
    if (_31230 == 0) {
        goto L1C; // [786] 1013
    }
    // SubProg patch_forward_type_check pc: 790 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 792 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31233 = (object)*(((s1_ptr)_2)->base + _which_type_62912);
    // SubProg patch_forward_type_check pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 798 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31233);
    _31234 = (object)*(((s1_ptr)_2)->base + 2);
    _31233 = NOVALUE;
    // SubProg patch_forward_type_check pc: 802 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 803 op: IF (20)
    if (_31234 == 0) {
        _31234 = NOVALUE;
        goto L1C; // [803] 1013
    }
    else {
        if (!IS_ATOM_INT(_31234) && DBL_PTR(_31234)->dbl == 0.0){
            _31234 = NOVALUE;
            goto L1C; // [803] 1013
        }
        _31234 = NOVALUE;
    }
    _31234 = NOVALUE;
    // SubProg patch_forward_type_check pc: 806 op: STARTLINE (58)

    /** fwdref.e:669			integer start_pc = pc*/
    // SubProg patch_forward_type_check pc: 808 op: ASSIGN_I (113)
    _start_pc_63078 = _pc_62947;
    // SubProg patch_forward_type_check pc: 811 op: STARTLINE (58)

    /** fwdref.e:671			if which_type = sequence_type or*/
    // SubProg patch_forward_type_check pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 815 op: EQUALS (3)
    _31235 = (_which_type_62912 == _54sequence_type_46259);
    // SubProg patch_forward_type_check pc: 819 op: SC1_OR_IF (147)
    if (_31235 != 0) {
        goto L1D; // [819] 858
    }
    // SubProg patch_forward_type_check pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 827 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31237 = (object)*(((s1_ptr)_2)->base + _which_type_62912);
    // SubProg patch_forward_type_check pc: 831 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 833 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31237);
    _31238 = (object)*(((s1_ptr)_2)->base + 2);
    _31237 = NOVALUE;
    // SubProg patch_forward_type_check pc: 837 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_31238)){
        _31239 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31238)->dbl));
    }
    else{
        _31239 = (object)*(((s1_ptr)_2)->base + _31238);
    }
    // SubProg patch_forward_type_check pc: 841 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 843 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31239);
    _31240 = (object)*(((s1_ptr)_2)->base + 15);
    _31239 = NOVALUE;
    // SubProg patch_forward_type_check pc: 847 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 849 op: EQUALS (3)
    if (IS_ATOM_INT(_31240)) {
        _31241 = (_31240 == _54sequence_type_46259);
    }
    else {
        _31241 = binary_op(EQUALS, _31240, _54sequence_type_46259);
    }
    _31240 = NOVALUE;
    // SubProg patch_forward_type_check pc: 853 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 854 op: IF (20)
    if (_31241 == 0) {
        DeRef(_31241);
        _31241 = NOVALUE;
        goto L1E; // [854] 912
    }
    else {
        if (!IS_ATOM_INT(_31241) && DBL_PTR(_31241)->dbl == 0.0){
            DeRef(_31241);
            _31241 = NOVALUE;
            goto L1E; // [854] 912
        }
        DeRef(_31241);
        _31241 = NOVALUE;
    }
    DeRef(_31241);
    _31241 = NOVALUE;
    // SubProg patch_forward_type_check pc: 857 op: NOP1 (159)
L1D: // addr: 858 pc: 857 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 858 op: STARTLINE (58)

    /** fwdref.e:674				insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 860 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 862 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_62914;
    _31242 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 866 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31243 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 870 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_883_63097);
    _code_inlined_insert_code_at_883_63097 = _31242;
    _31242 = NOVALUE;
    // SubProg patch_forward_type_check pc: 873 op: ASSIGN (18)
    Ref(_31243);
    DeRef(_subprog_inlined_insert_code_at_886_63098);
    _subprog_inlined_insert_code_at_886_63098 = _31243;
    _31243 = NOVALUE;
    // SubProg patch_forward_type_check pc: 876 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 878 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_886_63098)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_886_63098)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_886_63098);
        _subprog_inlined_insert_code_at_886_63098 = _1;
    }
    // SubProg patch_forward_type_check pc: 880 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 882 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_886_63098;
    // SubProg patch_forward_type_check pc: 885 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 887 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_883_63097);
    _66insert_code(_code_inlined_insert_code_at_883_63097, _pc_62947);
    // SubProg patch_forward_type_check pc: 891 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 893 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 896 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 898 op: ELSE (23)
    goto L1F; // [898] 901
    // SubProg patch_forward_type_check pc: 900 op: NOP1 (159)
L1F: // addr: 901 pc: 900 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 901 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 883

// block var code_inlined_insert_code_at_883_63097
    DeRefi(_code_inlined_insert_code_at_883_63097);
    _code_inlined_insert_code_at_883_63097 = NOVALUE;

// block var subprog_inlined_insert_code_at_886_63098
    DeRef(_subprog_inlined_insert_code_at_886_63098);
    _subprog_inlined_insert_code_at_886_63098 = NOVALUE;
    // SubProg patch_forward_type_check pc: 903 op: STARTLINE (58)

    /** fwdref.e:675				pc += 2*/
    // SubProg patch_forward_type_check pc: 905 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 2;
    // SubProg patch_forward_type_check pc: 909 op: ELSE (23)
    goto L20; // [909] 1012
    // SubProg patch_forward_type_check pc: 911 op: NOP1 (159)
L1E: // addr: 912 pc: 911 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 912 op: STARTLINE (58)

    /** fwdref.e:677			elsif which_type = integer_type or*/
    // SubProg patch_forward_type_check pc: 914 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 916 op: EQUALS (3)
    _31245 = (_which_type_62912 == _54integer_type_46261);
    // SubProg patch_forward_type_check pc: 920 op: SC1_OR_IF (147)
    if (_31245 != 0) {
        goto L21; // [920] 959
    }
    // SubProg patch_forward_type_check pc: 924 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 926 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 928 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31247 = (object)*(((s1_ptr)_2)->base + _which_type_62912);
    // SubProg patch_forward_type_check pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 934 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31247);
    _31248 = (object)*(((s1_ptr)_2)->base + 2);
    _31247 = NOVALUE;
    // SubProg patch_forward_type_check pc: 938 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_31248)){
        _31249 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31248)->dbl));
    }
    else{
        _31249 = (object)*(((s1_ptr)_2)->base + _31248);
    }
    // SubProg patch_forward_type_check pc: 942 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 944 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31249);
    _31250 = (object)*(((s1_ptr)_2)->base + 15);
    _31249 = NOVALUE;
    // SubProg patch_forward_type_check pc: 948 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 950 op: EQUALS (3)
    if (IS_ATOM_INT(_31250)) {
        _31251 = (_31250 == _54integer_type_46261);
    }
    else {
        _31251 = binary_op(EQUALS, _31250, _54integer_type_46261);
    }
    _31250 = NOVALUE;
    // SubProg patch_forward_type_check pc: 954 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 955 op: IF (20)
    if (_31251 == 0) {
        DeRef(_31251);
        _31251 = NOVALUE;
        goto L22; // [955] 1011
    }
    else {
        if (!IS_ATOM_INT(_31251) && DBL_PTR(_31251)->dbl == 0.0){
            DeRef(_31251);
            _31251 = NOVALUE;
            goto L22; // [955] 1011
        }
        DeRef(_31251);
        _31251 = NOVALUE;
    }
    DeRef(_31251);
    _31251 = NOVALUE;
    // SubProg patch_forward_type_check pc: 958 op: NOP1 (159)
L21: // addr: 959 pc: 958 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 959 op: STARTLINE (58)

    /** fwdref.e:680				insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 961 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 963 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_62914;
    _31252 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 967 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62909);
    _31253 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 971 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_984_63118);
    _code_inlined_insert_code_at_984_63118 = _31252;
    _31252 = NOVALUE;
    // SubProg patch_forward_type_check pc: 974 op: ASSIGN (18)
    Ref(_31253);
    DeRef(_subprog_inlined_insert_code_at_987_63119);
    _subprog_inlined_insert_code_at_987_63119 = _31253;
    _31253 = NOVALUE;
    // SubProg patch_forward_type_check pc: 977 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 979 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_987_63119)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_987_63119)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_987_63119);
        _subprog_inlined_insert_code_at_987_63119 = _1;
    }
    // SubProg patch_forward_type_check pc: 981 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 983 op: ASSIGN_I (113)
    _39shifting_sub_62149 = _subprog_inlined_insert_code_at_987_63119;
    // SubProg patch_forward_type_check pc: 986 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 988 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_984_63118);
    _66insert_code(_code_inlined_insert_code_at_984_63118, _pc_62947);
    // SubProg patch_forward_type_check pc: 992 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 994 op: ASSIGN_I (113)
    _39shifting_sub_62149 = 0;
    // SubProg patch_forward_type_check pc: 997 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 999 op: ELSE (23)
    goto L23; // [999] 1002
    // SubProg patch_forward_type_check pc: 1001 op: NOP1 (159)
L23: // addr: 1002 pc: 1001 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 1002 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 984

// block var code_inlined_insert_code_at_984_63118
    DeRefi(_code_inlined_insert_code_at_984_63118);
    _code_inlined_insert_code_at_984_63118 = NOVALUE;

// block var subprog_inlined_insert_code_at_987_63119
    DeRef(_subprog_inlined_insert_code_at_987_63119);
    _subprog_inlined_insert_code_at_987_63119 = NOVALUE;
    // SubProg patch_forward_type_check pc: 1004 op: STARTLINE (58)

    /** fwdref.e:681				pc += 4*/
    // SubProg patch_forward_type_check pc: 1006 op: PLUS_I (115)
    _pc_62947 = _pc_62947 + 4;
    // SubProg patch_forward_type_check pc: 1010 op: NOP1 (159)
L22: // addr: 1011 pc: 1010 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 1011 op: NOP1 (159)
L20: // addr: 1012 pc: 1011 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 1012 op: NOP1 (159)
L1C: // addr: 1013 pc: 1012 sub: 62904 op: 159
    // SubProg patch_forward_type_check pc: 1013 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var start_pc_63078
    // SubProg patch_forward_type_check pc: 1015 op: STARTLINE (58)

    /** fwdref.e:686		resolved_reference( ref )*/
    // SubProg patch_forward_type_check pc: 1017 op: PROC (27)
    _39resolved_reference(_ref_62908);
    // SubProg patch_forward_type_check pc: 1020 op: STARTLINE (58)

    /** fwdref.e:687		reset_code()*/
    // SubProg patch_forward_type_check pc: 1022 op: PROC (27)
    _39reset_code();
    // SubProg patch_forward_type_check pc: 1024 op: STARTLINE (58)

    /** fwdref.e:688	end procedure*/
    // SubProg patch_forward_type_check pc: 1026 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_type_check

// block var tok_62907
    DeRef(_tok_62907);

// block var ref_62908

// block var fr_62909
    DeRef(_fr_62909);

// block var which_type_62912

// block var var_62914

// block var pc_62947

// block var with_type_check_62949
    _31222 = NOVALUE;
    _31214 = NOVALUE;
    _31248 = NOVALUE;
    DeRef(_31186);
    _31186 = NOVALUE;
    _31168 = NOVALUE;
    DeRef(_31245);
    _31245 = NOVALUE;
    DeRef(_31235);
    _31235 = NOVALUE;
    DeRef(_31181);
    _31181 = NOVALUE;
    DeRef(_31231);
    _31231 = NOVALUE;
    _31238 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 1029 op: BADRETURNF (43)
    ;
}


void _39prep_forward_error(object _ref_63123)
{
// skipping _31262  name type: 0
    object _31261 = NOVALUE; // 63134 31261
// skipping _31260  name type: 0
    object _31259 = NOVALUE; // 63131 31259
// skipping _31258  name type: 0
    object _31257 = NOVALUE; // 63128 31257
// skipping _31256  name type: 0
    object _31255 = NOVALUE; // 63125 31255
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg prep_forward_error pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_63123)) {
        _1 = (object)(DBL_PTR(_ref_63123)->dbl);
        DeRefDS(_ref_63123);
        _ref_63123 = _1;
    }
    // SubProg prep_forward_error pc: 3 op: STARTLINE (58)

    /** fwdref.e:691		ThisLine = forward_references[ref][FR_THISLINE]*/
    // SubProg prep_forward_error pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _31255 = (object)*(((s1_ptr)_2)->base + _ref_63123);
    // SubProg prep_forward_error pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_50ThisLine_48707);
    _2 = (object)SEQ_PTR(_31255);
    _50ThisLine_48707 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_50ThisLine_48707);
    _31255 = NOVALUE;
    // SubProg prep_forward_error pc: 15 op: STARTLINE (58)

    /** fwdref.e:692		bp = forward_references[ref][FR_BP]*/
    // SubProg prep_forward_error pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _31257 = (object)*(((s1_ptr)_2)->base + _ref_63123);
    // SubProg prep_forward_error pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31257);
    _50bp_48711 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_50bp_48711)){
        _50bp_48711 = (object)DBL_PTR(_50bp_48711)->dbl;
    }
    _31257 = NOVALUE;
    // SubProg prep_forward_error pc: 29 op: STARTLINE (58)

    /** fwdref.e:693		line_number = forward_references[ref][FR_LINE]*/
    // SubProg prep_forward_error pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 33 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _31259 = (object)*(((s1_ptr)_2)->base + _ref_63123);
    // SubProg prep_forward_error pc: 37 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31259);
    _36line_number_16437 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_36line_number_16437)){
        _36line_number_16437 = (object)DBL_PTR(_36line_number_16437)->dbl;
    }
    _31259 = NOVALUE;
    // SubProg prep_forward_error pc: 43 op: STARTLINE (58)

    /** fwdref.e:694		current_file_no = forward_references[ref][FR_FILE]*/
    // SubProg prep_forward_error pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _31261 = (object)*(((s1_ptr)_2)->base + _ref_63123);
    // SubProg prep_forward_error pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31261);
    _36current_file_no_16436 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_36current_file_no_16436)){
        _36current_file_no_16436 = (object)DBL_PTR(_36current_file_no_16436)->dbl;
    }
    _31261 = NOVALUE;
    // SubProg prep_forward_error pc: 57 op: STARTLINE (58)

    /** fwdref.e:695	end procedure*/
    // SubProg prep_forward_error pc: 59 op: RETURNP (29)

// Exiting block BLOCK: prep_forward_error

// block var ref_63123
    return;
    // SubProg prep_forward_error pc: 62 op: BADRETURNF (43)
    ;
}


void _39forward_error(object _tok_63139, object _ref_63140)
{
    object _31269 = NOVALUE; // 63149 31269
    object _31268 = NOVALUE; // 63148 31268
    object _31267 = NOVALUE; // 63147 31267
    object _31266 = NOVALUE; // 63145 31266
    object _31265 = NOVALUE; // 63144 31265
    object _31264 = NOVALUE; // 63143 31264
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg forward_error pc: 1 op: INTEGER_CHECK (96)
    // SubProg forward_error pc: 3 op: STARTLINE (58)

    /** fwdref.e:698		prep_forward_error( ref )*/
    // SubProg forward_error pc: 5 op: PROC (27)
    _39prep_forward_error(_ref_63140);
    // SubProg forward_error pc: 8 op: STARTLINE (58)

    /** fwdref.e:699		CompileErr(68, { expected_name( forward_references[ref][FR_TYPE] ),*/
    // SubProg forward_error pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg forward_error pc: 12 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _31264 = (object)*(((s1_ptr)_2)->base + _ref_63140);
    // SubProg forward_error pc: 16 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31264);
    _31265 = (object)*(((s1_ptr)_2)->base + 1);
    _31264 = NOVALUE;
    // SubProg forward_error pc: 20 op: PROC (27)
    Ref(_31265);
    _31266 = _39expected_name(_31265);
    _31265 = NOVALUE;
    // SubProg forward_error pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg forward_error pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63139);
    _31267 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg forward_error pc: 30 op: PROC (27)
    Ref(_31267);
    _31268 = _39expected_name(_31267);
    _31267 = NOVALUE;
    // SubProg forward_error pc: 34 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _31266;
    ((intptr_t *)_2)[2] = _31268;
    _31269 = MAKE_SEQ(_1);
    _31268 = NOVALUE;
    _31266 = NOVALUE;
    // SubProg forward_error pc: 38 op: PROC (27)
    _50CompileErr(68, _31269, 0);
    _31269 = NOVALUE;
    // SubProg forward_error pc: 43 op: STARTLINE (58)

    /** fwdref.e:701	end procedure*/
    // SubProg forward_error pc: 45 op: RETURNP (29)

// Exiting block BLOCK: forward_error

// block var tok_63139
    DeRef(_tok_63139);

// block var ref_63140
    return;
    // SubProg forward_error pc: 48 op: BADRETURNF (43)
    ;
}


object _39find_reference(object _fr_63152)
{
    object _name_63153 = NOVALUE;
    object _file_63155 = NOVALUE;
    object _ns_file_63157 = NOVALUE;
    object _ix_63158 = NOVALUE;
    object _ns_63162 = NOVALUE;
    object _ns_tok_63166 = NOVALUE;
    object _tok_63178 = NOVALUE;
// skipping _31282  name type: 0
    object _31281 = NOVALUE; // 63180 31281
// skipping _31280  name type: 0
// skipping _31279  name type: 0
    object _31278 = NOVALUE; // 63172 31278
// skipping _31277  name type: 0
    object _31276 = NOVALUE; // 63168 31276
// skipping _31275  name type: 0
    object _31274 = NOVALUE; // 63163 31274
// skipping _31273  name type: 0
// skipping _31271  name type: 0
// skipping _31270  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_reference pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_reference pc: 3 op: STARTLINE (58)

    /** fwdref.e:706		sequence name = fr[FR_NAME]*/
    // SubProg find_reference pc: 5 op: RHS_SUBS (25)
    DeRef(_name_63153);
    _2 = (object)SEQ_PTR(_fr_63152);
    _name_63153 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_63153);
    // SubProg find_reference pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg find_reference pc: 11 op: STARTLINE (58)

    /** fwdref.e:707		integer file  = fr[FR_FILE]*/
    // SubProg find_reference pc: 13 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63152);
    _file_63155 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_63155))
    _file_63155 = (object)DBL_PTR(_file_63155)->dbl;
    // SubProg find_reference pc: 17 op: STARTLINE (58)

    /** fwdref.e:709		integer ns_file = -1*/
    // SubProg find_reference pc: 19 op: ASSIGN_I (113)
    _ns_file_63157 = -1;
    // SubProg find_reference pc: 22 op: STARTLINE (58)

    /** fwdref.e:710		integer ix = find( ':', name )*/
    // SubProg find_reference pc: 24 op: FIND_FROM (176)
    _ix_63158 = find_from(58, _name_63153, 1);
    // SubProg find_reference pc: 29 op: STARTLINE (58)

    /** fwdref.e:711		if ix then*/
    // SubProg find_reference pc: 31 op: IF (20)
    if (_ix_63158 == 0)
    {
        goto L1; // [31] 85
    }
    else{
    }
    // SubProg find_reference pc: 34 op: STARTLINE (58)

    /** fwdref.e:712			sequence ns = name[1..ix-1]*/
    // SubProg find_reference pc: 36 op: MINUS (10)
    _31274 = _ix_63158 - 1;
    // SubProg find_reference pc: 40 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_ns_63162;
    RHS_Slice(_name_63153, 1, _31274);
    // SubProg find_reference pc: 45 op: STARTLINE (58)

    /** fwdref.e:713			token ns_tok = keyfind( ns, ns_file, file, 1, fr[FR_HASHVAL] )*/
    // SubProg find_reference pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63152);
    _31276 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg find_reference pc: 51 op: PROC (27)
    RefDS(_ns_63162);
    Ref(_31276);
    _0 = _ns_tok_63166;
    _ns_tok_63166 = _54keyfind(_ns_63162, -1, _file_63155, 1, _31276);
    DeRef(_0);
    _31276 = NOVALUE;
    // SubProg find_reference pc: 59 op: STARTLINE (58)

    /** fwdref.e:714			if ns_tok[T_ID] != NAMESPACE then*/
    // SubProg find_reference pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_reference pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ns_tok_63166);
    _31278 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_reference pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_reference pc: 69 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _31278, 523)){
        _31278 = NOVALUE;
        goto L2; // [69] 80
    }
    _31278 = NOVALUE;
    // SubProg find_reference pc: 73 op: STARTLINE (58)

    /** fwdref.e:715				return ns_tok*/
    // SubProg find_reference pc: 75 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ns_63162
    DeRefDS(_ns_63162);

// Exiting block BLOCK: find_reference

// block var fr_63152
    DeRefDS(_fr_63152);

// block var name_63153
    DeRefDS(_name_63153);

// block var file_63155

// block var ns_file_63157

// block var ix_63158

// block var tok_63178
    DeRef(_tok_63178);
    _31274 = NOVALUE;
    return _ns_tok_63166;
    // SubProg find_reference pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 63150 op: 159
    // SubProg find_reference pc: 80 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ns_63162
    DeRef(_ns_63162);
    _ns_63162 = NOVALUE;

// block var ns_tok_63166
    DeRef(_ns_tok_63166);
    _ns_tok_63166 = NOVALUE;
    // SubProg find_reference pc: 82 op: ELSE (23)
    goto L3; // [82] 92
    // SubProg find_reference pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 63150 op: 159
    // SubProg find_reference pc: 85 op: STARTLINE (58)

    /** fwdref.e:718			ns_file = fr[FR_QUALIFIED]*/
    // SubProg find_reference pc: 87 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63152);
    _ns_file_63157 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_ns_file_63157))
    _ns_file_63157 = (object)DBL_PTR(_ns_file_63157)->dbl;
    // SubProg find_reference pc: 91 op: NOP1 (159)
L3: // addr: 92 pc: 91 sub: 63150 op: 159
    // SubProg find_reference pc: 92 op: STARTLINE (58)

    /** fwdref.e:721		No_new_entry = 1*/
    // SubProg find_reference pc: 94 op: ASSIGN (18)
    _54No_new_entry_47452 = 1;
    // SubProg find_reference pc: 97 op: INTEGER_CHECK (96)
    // SubProg find_reference pc: 99 op: STARTLINE (58)

    /** fwdref.e:722		object tok = keyfind( name, ns_file, file, , fr[FR_HASHVAL] )*/
    // SubProg find_reference pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63152);
    _31281 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg find_reference pc: 105 op: PROC (27)
    RefDS(_name_63153);
    Ref(_31281);
    _0 = _tok_63178;
    _tok_63178 = _54keyfind(_name_63153, _ns_file_63157, _file_63155, 0, _31281);
    DeRef(_0);
    _31281 = NOVALUE;
    // SubProg find_reference pc: 113 op: STARTLINE (58)

    /** fwdref.e:723		No_new_entry = 0*/
    // SubProg find_reference pc: 115 op: ASSIGN (18)
    _54No_new_entry_47452 = 0;
    // SubProg find_reference pc: 118 op: INTEGER_CHECK (96)
    // SubProg find_reference pc: 120 op: STARTLINE (58)

    /** fwdref.e:724		return tok*/
    // SubProg find_reference pc: 122 op: RETURNF (28)

// Exiting block BLOCK: find_reference

// block var fr_63152
    DeRefDS(_fr_63152);

// block var name_63153
    DeRefDS(_name_63153);

// block var file_63155

// block var ns_file_63157

// block var ix_63158
    DeRef(_31274);
    _31274 = NOVALUE;
    return _tok_63178;
    // SubProg find_reference pc: 126 op: BADRETURNF (43)
    ;
}


void _39register_forward_type(object _sym_63186, object _ref_63187)
{
    object _31288 = NOVALUE; // 63194 31288
    object _31287 = NOVALUE; // 63193 31287
// skipping _31286  name type: 0
    object _31285 = NOVALUE; // 63191 31285
// skipping _31284  name type: 0
// skipping _31283  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg register_forward_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg register_forward_type pc: 3 op: INTEGER_CHECK (96)
    // SubProg register_forward_type pc: 5 op: STARTLINE (58)

    /** fwdref.e:729		if ref < 0 then*/
    // SubProg register_forward_type pc: 7 op: LESS_IFW_I (119)
    if (_ref_63187 >= 0)
    goto L1; // [7] 19
    // SubProg register_forward_type pc: 11 op: STARTLINE (58)

    /** fwdref.e:730			ref = -ref*/
    // SubProg register_forward_type pc: 13 op: UMINUS (12)
    _ref_63187 = - _ref_63187;
    // SubProg register_forward_type pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 63183 op: 159
    // SubProg register_forward_type pc: 19 op: STARTLINE (58)

    /** fwdref.e:732		forward_references[ref][FR_DATA] &= sym*/
    // SubProg register_forward_type pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg register_forward_type pc: 23 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63187 + ((s1_ptr)_2)->base);
    // SubProg register_forward_type pc: 28 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31287 = (object)*(((s1_ptr)_2)->base + 12);
    _31285 = NOVALUE;
    // SubProg register_forward_type pc: 32 op: CONCAT (15)
    if (IS_SEQUENCE(_31287) && IS_ATOM(_sym_63186)) {
        Append(&_31288, _31287, _sym_63186);
    }
    else if (IS_ATOM(_31287) && IS_SEQUENCE(_sym_63186)) {
    }
    else {
        Concat((object_ptr)&_31288, _31287, _sym_63186);
        _31287 = NOVALUE;
    }
    _31287 = NOVALUE;
    // SubProg register_forward_type pc: 36 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31288;
    if( _1 != _31288 ){
        DeRef(_1);
    }
    _31288 = NOVALUE;
    _31285 = NOVALUE;
    // SubProg register_forward_type pc: 40 op: STARTLINE (58)

    /** fwdref.e:733	end procedure*/
    // SubProg register_forward_type pc: 42 op: RETURNP (29)

// Exiting block BLOCK: register_forward_type

// block var sym_63186

// block var ref_63187
    return;
    // SubProg register_forward_type pc: 45 op: BADRETURNF (43)
    ;
}


object _39new_forward_reference(object _fwd_op_63217, object _sym_63219, object _op_63220)
{
    object _ref_63221 = NOVALUE;
    object _len_63222 = NOVALUE;
    object _hashval_63252 = NOVALUE;
    object _default_sym_63327 = NOVALUE;
    object _param_63330 = NOVALUE;
    object _set_data_2__tmp_at578_63347 = NOVALUE;
    object _set_data_1__tmp_at578_63346 = NOVALUE;
    object _data_inlined_set_data_at_575_63345 = NOVALUE;
// skipping _31375  name type: 0
    object _31374 = NOVALUE; // 63343 31374
    object _31373 = NOVALUE; // 63342 31373
    object _31372 = NOVALUE; // 63341 31372
// skipping _31371  name type: 0
// skipping _31370  name type: 0
    object _31369 = NOVALUE; // 63334 31369
// skipping _31368  name type: 0
    object _31367 = NOVALUE; // 63319 31367
    object _31366 = NOVALUE; // 63318 31366
// skipping _31365  name type: 0
    object _31364 = NOVALUE; // 63315 31364
    object _31363 = NOVALUE; // 63314 31363
    object _31362 = NOVALUE; // 63313 31362
// skipping _31361  name type: 0
    object _31360 = NOVALUE; // 63309 31360
// skipping _31359  name type: 0
    object _31358 = NOVALUE; // 63303 31358
// skipping _31357  name type: 0
    object _31356 = NOVALUE; // 63301 31356
// skipping _31355  name type: 0
// skipping _31354  name type: 0
    object _31353 = NOVALUE; // 63296 31353
    object _31352 = NOVALUE; // 63295 31352
// skipping _31351  name type: 0
    object _31350 = NOVALUE; // 63292 31350
// skipping _31349  name type: 0
    object _31348 = NOVALUE; // 63289 31348
// skipping _31347  name type: 0
    object _31346 = NOVALUE; // 63286 31346
// skipping _31345  name type: 0
    object _31344 = NOVALUE; // 63283 31344
    object _31343 = NOVALUE; // 63282 31343
    object _31342 = NOVALUE; // 63281 31342
// skipping _31341  name type: 0
    object _31340 = NOVALUE; // 63278 31340
// skipping _31339  name type: 0
// skipping _31338  name type: 0
    object _31337 = NOVALUE; // 63272 31337
// skipping _31336  name type: 0
    object _31335 = NOVALUE; // 63269 31335
// skipping _31334  name type: 0
    object _31333 = NOVALUE; // 63266 31333
    object _31332 = NOVALUE; // 63264 31332
    object _31331 = NOVALUE; // 63263 31331
    object _31330 = NOVALUE; // 63262 31330
// skipping _31329  name type: 0
    object _31328 = NOVALUE; // 63259 31328
// skipping _31327  name type: 0
// skipping _31326  name type: 0
    object _31325 = NOVALUE; // 63254 31325
    object _31324 = NOVALUE; // 63251 31324
    object _31323 = NOVALUE; // 63249 31323
// skipping _31322  name type: 0
    object _31321 = NOVALUE; // 63246 31321
    object _31320 = NOVALUE; // 63244 31320
    object _31319 = NOVALUE; // 63243 31319
    object _31318 = NOVALUE; // 63242 31318
// skipping _31317  name type: 0
    object _31316 = NOVALUE; // 63240 31316
    object _31315 = NOVALUE; // 63239 31315
    object _31314 = NOVALUE; // 63238 31314
    object _31313 = NOVALUE; // 63237 31313
// skipping _31312  name type: 0
    object _31311 = NOVALUE; // 63235 31311
// skipping _31310  name type: 0
// skipping _31309  name type: 0
    object _31308 = NOVALUE; // 63231 31308
    object _31307 = NOVALUE; // 63230 31307
// skipping _31306  name type: 0
// skipping _31305  name type: 0
// skipping _31304  name type: 0
// skipping _31303  name type: 0
// skipping _31302  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg new_forward_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_63219)) {
        _1 = (object)(DBL_PTR(_sym_63219)->dbl);
        DeRefDS(_sym_63219);
        _sym_63219 = _1;
    }
    // SubProg new_forward_reference pc: 5 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 7 op: STARTLINE (58)

    /** fwdref.e:754			len = length( inactive_references )*/
    // SubProg new_forward_reference pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_39inactive_references_62124)){
            _len_63222 = SEQ_PTR(_39inactive_references_62124)->length;
    }
    else {
        _len_63222 = 1;
    }
    // SubProg new_forward_reference pc: 14 op: STARTLINE (58)

    /** fwdref.e:757		if len then*/
    // SubProg new_forward_reference pc: 16 op: IF (20)
    if (_len_63222 == 0)
    {
        goto L1; // [16] 39
    }
    else{
    }
    // SubProg new_forward_reference pc: 19 op: STARTLINE (58)

    /** fwdref.e:758			ref = inactive_references[len]*/
    // SubProg new_forward_reference pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 23 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_39inactive_references_62124);
    _ref_63221 = (object)*(((s1_ptr)_2)->base + _len_63222);
    if (!IS_ATOM_INT(_ref_63221))
    _ref_63221 = (object)DBL_PTR(_ref_63221)->dbl;
    // SubProg new_forward_reference pc: 27 op: STARTLINE (58)

    /** fwdref.e:759			inactive_references = remove( inactive_references, len, len )*/
    // SubProg new_forward_reference pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 31 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_39inactive_references_62124);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_len_63222)) ? _len_63222 : (object)(DBL_PTR(_len_63222)->dbl);
        int stop = (IS_ATOM_INT(_len_63222)) ? _len_63222 : (object)(DBL_PTR(_len_63222)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_39inactive_references_62124), start, &_39inactive_references_62124 );
            }
            else Tail(SEQ_PTR(_39inactive_references_62124), stop+1, &_39inactive_references_62124);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_39inactive_references_62124), start, &_39inactive_references_62124);
        }
        else {
            assign_slice_seq = &assign_space;
            _39inactive_references_62124 = Remove_elements(start, stop, (SEQ_PTR(_39inactive_references_62124)->ref == 1));
        }
    }
    // SubProg new_forward_reference pc: 36 op: ELSE (23)
    goto L2; // [36] 55
    // SubProg new_forward_reference pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 39 op: STARTLINE (58)

    /** fwdref.e:761			forward_references &= 0*/
    // SubProg new_forward_reference pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 43 op: CONCAT (15)
    Append(&_39forward_references_62120, _39forward_references_62120, 0);
    // SubProg new_forward_reference pc: 47 op: STARTLINE (58)

    /** fwdref.e:762			ref = length( forward_references )*/
    // SubProg new_forward_reference pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 51 op: LENGTH (42)
    if (IS_SEQUENCE(_39forward_references_62120)){
            _ref_63221 = SEQ_PTR(_39forward_references_62120)->length;
    }
    else {
        _ref_63221 = 1;
    }
    // SubProg new_forward_reference pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 55 op: STARTLINE (58)

    /** fwdref.e:764		forward_references[ref] = repeat( 0, FR_SIZE )*/
    // SubProg new_forward_reference pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 59 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_forward_reference pc: 61 op: REPEAT (32)
    _31307 = Repeat(0, 12);
    // SubProg new_forward_reference pc: 65 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_63221);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31307;
    if( _1 != _31307 ){
        DeRef(_1);
    }
    _31307 = NOVALUE;
    // SubProg new_forward_reference pc: 69 op: STARTLINE (58)

    /** fwdref.e:766		forward_references[ref][FR_TYPE]      = fwd_op*/
    // SubProg new_forward_reference pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 73 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 78 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _fwd_op_63217;
    DeRef(_1);
    _31308 = NOVALUE;
    // SubProg new_forward_reference pc: 82 op: STARTLINE (58)

    /** fwdref.e:767		if sym < 0 then*/
    // SubProg new_forward_reference pc: 84 op: LESS_IFW (102)
    if (_sym_63219 >= 0)
    goto L3; // [84] 143
    // SubProg new_forward_reference pc: 88 op: STARTLINE (58)

    /** fwdref.e:768			forward_references[ref][FR_NAME] = forward_references[-sym][FR_NAME]*/
    // SubProg new_forward_reference pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 92 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 99 op: UMINUS (12)
    if ((uintptr_t)_sym_63219 == (uintptr_t)HIGH_BITS){
        _31313 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31313 = - _sym_63219;
    }
    // SubProg new_forward_reference pc: 102 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!IS_ATOM_INT(_31313)){
        _31314 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31313)->dbl));
    }
    else{
        _31314 = (object)*(((s1_ptr)_2)->base + _31313);
    }
    // SubProg new_forward_reference pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31314);
    _31315 = (object)*(((s1_ptr)_2)->base + 2);
    _31314 = NOVALUE;
    // SubProg new_forward_reference pc: 110 op: PASSIGN_SUBS (162)
    Ref(_31315);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31315;
    if( _1 != _31315 ){
        DeRef(_1);
    }
    _31315 = NOVALUE;
    _31311 = NOVALUE;
    // SubProg new_forward_reference pc: 114 op: STARTLINE (58)

    /** fwdref.e:769			forward_references[ref][FR_HASHVAL] = forward_references[-sym][FR_HASHVAL]*/
    // SubProg new_forward_reference pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 118 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 125 op: UMINUS (12)
    if ((uintptr_t)_sym_63219 == (uintptr_t)HIGH_BITS){
        _31318 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31318 = - _sym_63219;
    }
    // SubProg new_forward_reference pc: 128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!IS_ATOM_INT(_31318)){
        _31319 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31318)->dbl));
    }
    else{
        _31319 = (object)*(((s1_ptr)_2)->base + _31318);
    }
    // SubProg new_forward_reference pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31319);
    _31320 = (object)*(((s1_ptr)_2)->base + 11);
    _31319 = NOVALUE;
    // SubProg new_forward_reference pc: 136 op: PASSIGN_SUBS (162)
    Ref(_31320);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31320;
    if( _1 != _31320 ){
        DeRef(_1);
    }
    _31320 = NOVALUE;
    _31316 = NOVALUE;
    // SubProg new_forward_reference pc: 140 op: ELSE (23)
    goto L4; // [140] 242
    // SubProg new_forward_reference pc: 142 op: NOP1 (159)
L3: // addr: 143 pc: 142 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 143 op: STARTLINE (58)

    /** fwdref.e:771			forward_references[ref][FR_NAME] = SymTab[sym][S_NAME]*/
    // SubProg new_forward_reference pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 147 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31323 = (object)*(((s1_ptr)_2)->base + _sym_63219);
    // SubProg new_forward_reference pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 160 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31323);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _31324 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _31324 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _31323 = NOVALUE;
    // SubProg new_forward_reference pc: 164 op: PASSIGN_SUBS (162)
    Ref(_31324);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31324;
    if( _1 != _31324 ){
        DeRef(_1);
    }
    _31324 = NOVALUE;
    _31321 = NOVALUE;
    // SubProg new_forward_reference pc: 168 op: STARTLINE (58)

    /** fwdref.e:772			integer hashval = SymTab[sym][S_HASHVAL]*/
    // SubProg new_forward_reference pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 172 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31325 = (object)*(((s1_ptr)_2)->base + _sym_63219);
    // SubProg new_forward_reference pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 178 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31325);
    _hashval_63252 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hashval_63252)){
        _hashval_63252 = (object)DBL_PTR(_hashval_63252)->dbl;
    }
    _31325 = NOVALUE;
    // SubProg new_forward_reference pc: 184 op: STARTLINE (58)

    /** fwdref.e:773			if 0 = hashval then*/
    // SubProg new_forward_reference pc: 186 op: EQUALS_IFW_I (121)
    if (0 != _hashval_63252)
    goto L5; // [186] 220
    // SubProg new_forward_reference pc: 190 op: STARTLINE (58)

    /** fwdref.e:774				forward_references[ref][FR_HASHVAL] = hashfn( forward_references[ref][FR_NAME] )*/
    // SubProg new_forward_reference pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 194 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 201 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    _31330 = (object)*(((s1_ptr)_2)->base + _ref_63221);
    // SubProg new_forward_reference pc: 205 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31330);
    _31331 = (object)*(((s1_ptr)_2)->base + 2);
    _31330 = NOVALUE;
    // SubProg new_forward_reference pc: 209 op: PROC (27)
    Ref(_31331);
    _31332 = _54hashfn(_31331);
    _31331 = NOVALUE;
    // SubProg new_forward_reference pc: 213 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31332;
    if( _1 != _31332 ){
        DeRef(_1);
    }
    _31332 = NOVALUE;
    _31328 = NOVALUE;
    // SubProg new_forward_reference pc: 217 op: ELSE (23)
    goto L6; // [217] 239
    // SubProg new_forward_reference pc: 219 op: NOP1 (159)
L5: // addr: 220 pc: 219 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 220 op: STARTLINE (58)

    /** fwdref.e:776				forward_references[ref][FR_HASHVAL] = hashval*/
    // SubProg new_forward_reference pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 224 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 229 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_63252;
    DeRef(_1);
    _31333 = NOVALUE;
    // SubProg new_forward_reference pc: 233 op: STARTLINE (58)

    /** fwdref.e:777				remove_symbol( sym )*/
    // SubProg new_forward_reference pc: 235 op: PROC (27)
    _54remove_symbol(_sym_63219);
    // SubProg new_forward_reference pc: 238 op: NOP1 (159)
L6: // addr: 239 pc: 238 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 239 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hashval_63252
    // SubProg new_forward_reference pc: 241 op: NOP1 (159)
L4: // addr: 242 pc: 241 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 242 op: STARTLINE (58)

    /** fwdref.e:782		forward_references[ref][FR_FILE]      = current_file_no*/
    // SubProg new_forward_reference pc: 244 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 246 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 253 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36current_file_no_16436;
    DeRef(_1);
    _31335 = NOVALUE;
    // SubProg new_forward_reference pc: 257 op: STARTLINE (58)

    /** fwdref.e:783		forward_references[ref][FR_SUBPROG]   = CurrentSub*/
    // SubProg new_forward_reference pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 261 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 268 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36CurrentSub_16444;
    DeRef(_1);
    _31337 = NOVALUE;
    // SubProg new_forward_reference pc: 272 op: STARTLINE (58)

    /** fwdref.e:785		if fwd_op != TYPE then*/
    // SubProg new_forward_reference pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 276 op: NOTEQ_IFW (105)
    if (_fwd_op_63217 == 504)
    goto L7; // [276] 303
    // SubProg new_forward_reference pc: 280 op: STARTLINE (58)

    /** fwdref.e:786			forward_references[ref][FR_PC]        = length( Code ) + 1*/
    // SubProg new_forward_reference pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 284 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 291 op: LENGTH (42)
    if (IS_SEQUENCE(_36Code_16524)){
            _31342 = SEQ_PTR(_36Code_16524)->length;
    }
    else {
        _31342 = 1;
    }
    // SubProg new_forward_reference pc: 294 op: PLUS1 (93)
    _31343 = _31342 + 1;
    _31342 = NOVALUE;
    // SubProg new_forward_reference pc: 298 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31343;
    if( _1 != _31343 ){
        DeRef(_1);
    }
    _31343 = NOVALUE;
    _31340 = NOVALUE;
    // SubProg new_forward_reference pc: 302 op: NOP1 (159)
L7: // addr: 303 pc: 302 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 303 op: STARTLINE (58)

    /** fwdref.e:789		forward_references[ref][FR_LINE]      = fwd_line_number*/
    // SubProg new_forward_reference pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 307 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 314 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36fwd_line_number_16438;
    DeRef(_1);
    _31344 = NOVALUE;
    // SubProg new_forward_reference pc: 318 op: STARTLINE (58)

    /** fwdref.e:790		forward_references[ref][FR_THISLINE]  = ForwardLine*/
    // SubProg new_forward_reference pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 322 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 329 op: PASSIGN_SUBS (162)
    Ref(_50ForwardLine_48708);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _50ForwardLine_48708;
    DeRef(_1);
    _31346 = NOVALUE;
    // SubProg new_forward_reference pc: 333 op: STARTLINE (58)

    /** fwdref.e:791		forward_references[ref][FR_BP]        = forward_bp*/
    // SubProg new_forward_reference pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 337 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 342 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 344 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _50forward_bp_48712;
    DeRef(_1);
    _31348 = NOVALUE;
    // SubProg new_forward_reference pc: 348 op: STARTLINE (58)

    /** fwdref.e:792		forward_references[ref][FR_QUALIFIED] = get_qualified_fwd()*/
    // SubProg new_forward_reference pc: 350 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 352 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 357 op: PROC (27)
    _31352 = _62get_qualified_fwd();
    // SubProg new_forward_reference pc: 360 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31352;
    if( _1 != _31352 ){
        DeRef(_1);
    }
    _31352 = NOVALUE;
    _31350 = NOVALUE;
    // SubProg new_forward_reference pc: 364 op: STARTLINE (58)

    /** fwdref.e:793		forward_references[ref][FR_OP]        = op*/
    // SubProg new_forward_reference pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 368 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 373 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _op_63220;
    DeRef(_1);
    _31353 = NOVALUE;
    // SubProg new_forward_reference pc: 377 op: STARTLINE (58)

    /** fwdref.e:795		if op = GOTO then*/
    // SubProg new_forward_reference pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 381 op: EQUALS_IFW (104)
    if (_op_63220 != 188)
    goto L8; // [381] 403
    // SubProg new_forward_reference pc: 385 op: STARTLINE (58)

    /** fwdref.e:796			forward_references[ref][FR_DATA] = { sym }*/
    // SubProg new_forward_reference pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 389 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 394 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _sym_63219;
    _31358 = MAKE_SEQ(_1);
    // SubProg new_forward_reference pc: 398 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31358;
    if( _1 != _31358 ){
        DeRef(_1);
    }
    _31358 = NOVALUE;
    _31356 = NOVALUE;
    // SubProg new_forward_reference pc: 402 op: NOP1 (159)
L8: // addr: 403 pc: 402 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 403 op: STARTLINE (58)

    /** fwdref.e:803		if CurrentSub = TopLevelSub then*/
    // SubProg new_forward_reference pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 407 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 409 op: EQUALS_IFW (104)
    if (_36CurrentSub_16444 != _36TopLevelSub_16443)
    goto L9; // [409] 471
    // SubProg new_forward_reference pc: 413 op: STARTLINE (58)

    /** fwdref.e:804			if length( toplevel_references ) < current_file_no then*/
    // SubProg new_forward_reference pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 417 op: LENGTH (42)
    if (IS_SEQUENCE(_39toplevel_references_62123)){
            _31360 = SEQ_PTR(_39toplevel_references_62123)->length;
    }
    else {
        _31360 = 1;
    }
    // SubProg new_forward_reference pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 422 op: LESS_IFW (102)
    if (_31360 >= _36current_file_no_16436)
    goto LA; // [422] 450
    // SubProg new_forward_reference pc: 426 op: STARTLINE (58)

    /** fwdref.e:805				toplevel_references &= repeat( {}, current_file_no - length( toplevel_references ) )*/
    // SubProg new_forward_reference pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 434 op: LENGTH (42)
    if (IS_SEQUENCE(_39toplevel_references_62123)){
            _31362 = SEQ_PTR(_39toplevel_references_62123)->length;
    }
    else {
        _31362 = 1;
    }
    // SubProg new_forward_reference pc: 437 op: MINUS (10)
    _31363 = _36current_file_no_16436 - _31362;
    _31362 = NOVALUE;
    // SubProg new_forward_reference pc: 441 op: REPEAT (32)
    _31364 = Repeat(_21933, _31363);
    _31363 = NOVALUE;
    // SubProg new_forward_reference pc: 445 op: CONCAT (15)
    Concat((object_ptr)&_39toplevel_references_62123, _39toplevel_references_62123, _31364);
    DeRefDS(_31364);
    _31364 = NOVALUE;
    // SubProg new_forward_reference pc: 449 op: NOP1 (159)
LA: // addr: 450 pc: 449 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 450 op: STARTLINE (58)

    /** fwdref.e:807			toplevel_references[current_file_no] &= ref*/
    // SubProg new_forward_reference pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 456 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    _31366 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg new_forward_reference pc: 460 op: CONCAT (15)
    if (IS_SEQUENCE(_31366) && IS_ATOM(_ref_63221)) {
        Append(&_31367, _31366, _ref_63221);
    }
    else if (IS_ATOM(_31366) && IS_SEQUENCE(_ref_63221)) {
    }
    else {
        Concat((object_ptr)&_31367, _31366, _ref_63221);
        _31366 = NOVALUE;
    }
    _31366 = NOVALUE;
    // SubProg new_forward_reference pc: 464 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_39toplevel_references_62123);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39toplevel_references_62123 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31367;
    if( _1 != _31367 ){
        DeRef(_1);
    }
    _31367 = NOVALUE;
    // SubProg new_forward_reference pc: 468 op: ELSE (23)
    goto LB; // [468] 595
    // SubProg new_forward_reference pc: 470 op: NOP1 (159)
L9: // addr: 471 pc: 470 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 471 op: STARTLINE (58)

    /** fwdref.e:809			add_active_reference( ref )*/
    // SubProg new_forward_reference pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 475 op: PROC (27)
    _39add_active_reference(_ref_63221, _36current_file_no_16436);
    // SubProg new_forward_reference pc: 479 op: STARTLINE (58)

    /** fwdref.e:811			if Parser_mode = PAM_RECORD then*/
    // SubProg new_forward_reference pc: 481 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 483 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 485 op: EQUALS_IFW (104)
    if (_36Parser_mode_16541 != 1)
    goto LC; // [485] 592
    // SubProg new_forward_reference pc: 489 op: STARTLINE (58)

    /** fwdref.e:812				symtab_pointer default_sym = CurrentSub*/
    // SubProg new_forward_reference pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 493 op: ASSIGN (18)
    _default_sym_63327 = _36CurrentSub_16444;
    // SubProg new_forward_reference pc: 496 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 498 op: STARTLINE (58)

    /** fwdref.e:813				symtab_pointer param = 0*/
    // SubProg new_forward_reference pc: 500 op: ASSIGN (18)
    _param_63330 = 0;
    // SubProg new_forward_reference pc: 503 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 505 op: STARTLINE (58)

    /** fwdref.e:814				while default_sym with entry do*/
    // SubProg new_forward_reference pc: 507 op: ELSE (23)
    goto LD; // [507] 536
    // SubProg new_forward_reference pc: 509 op: NOPWHILE (158)
LE: // addr: 510 pc: 509 sub: 63215 op: 158
    // SubProg new_forward_reference pc: 510 op: WHILE (47)
    if (_default_sym_63327 == 0)
    {
        goto LF; // [510] 549
    }
    else{
    }
    // SubProg new_forward_reference pc: 513 op: STARTLINE (58)

    /** fwdref.e:815					if sym_scope( default_sym ) = SC_PRIVATE then*/
    // SubProg new_forward_reference pc: 515 op: PROC (27)
    _31369 = _54sym_scope(_default_sym_63327);
    // SubProg new_forward_reference pc: 519 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 521 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31369, 3)){
        DeRef(_31369);
        _31369 = NOVALUE;
        goto L10; // [521] 533
    }
    DeRef(_31369);
    _31369 = NOVALUE;
    // SubProg new_forward_reference pc: 525 op: STARTLINE (58)

    /** fwdref.e:816						param = default_sym*/
    // SubProg new_forward_reference pc: 527 op: ASSIGN (18)
    _param_63330 = _default_sym_63327;
    // SubProg new_forward_reference pc: 530 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 532 op: NOP1 (159)
L10: // addr: 533 pc: 532 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 533 op: STARTLINE (58)

    /** fwdref.e:818				entry*/
    // SubProg new_forward_reference pc: 535 op: NOP1 (159)
LD: // addr: 536 pc: 535 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 536 op: STARTLINE (58)

    /** fwdref.e:819					default_sym = sym_next( default_sym )*/
    // SubProg new_forward_reference pc: 538 op: PROC (27)
    _default_sym_63327 = _54sym_next(_default_sym_63327);
    // SubProg new_forward_reference pc: 542 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_default_sym_63327)) {
        _1 = (object)(DBL_PTR(_default_sym_63327)->dbl);
        DeRefDS(_default_sym_63327);
        _default_sym_63327 = _1;
    }
    // SubProg new_forward_reference pc: 544 op: STARTLINE (58)

    /** fwdref.e:820				end while*/
    // SubProg new_forward_reference pc: 546 op: ENDWHILE (22)
    goto LE; // [546] 510
    // SubProg new_forward_reference pc: 548 op: NOP1 (159)
LF: // addr: 549 pc: 548 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 549 op: STARTLINE (58)

    /** fwdref.e:821				set_data( ref, {{ PAM_RECORD, param, length( Recorded_sym ) }} )*/
    // SubProg new_forward_reference pc: 551 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 553 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 555 op: LENGTH (42)
    if (IS_SEQUENCE(_36Recorded_sym_16544)){
            _31372 = SEQ_PTR(_36Recorded_sym_16544)->length;
    }
    else {
        _31372 = 1;
    }
    // SubProg new_forward_reference pc: 558 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = _param_63330;
    ((intptr_t*)_2)[3] = _31372;
    _31373 = MAKE_SEQ(_1);
    _31372 = NOVALUE;
    // SubProg new_forward_reference pc: 564 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31373;
    _31374 = MAKE_SEQ(_1);
    _31373 = NOVALUE;
    // SubProg new_forward_reference pc: 568 op: ASSIGN (18)
    DeRef(_data_inlined_set_data_at_575_63345);
    _data_inlined_set_data_at_575_63345 = _31374;
    _31374 = NOVALUE;
    // SubProg new_forward_reference pc: 571 op: STARTLINE (58)

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    // SubProg new_forward_reference pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 575 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39forward_references_62120);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39forward_references_62120 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63221 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 580 op: PASSIGN_SUBS (162)
    RefDS(_data_inlined_set_data_at_575_63345);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_inlined_set_data_at_575_63345;
    DeRef(_1);
    // SubProg new_forward_reference pc: 584 op: STARTLINE (58)

    /** fwdref.e:187	end procedure*/
    // SubProg new_forward_reference pc: 586 op: ELSE (23)
    goto L11; // [586] 589
    // SubProg new_forward_reference pc: 588 op: NOP1 (159)
L11: // addr: 589 pc: 588 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 589 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-set_data from new_forward_reference @ 575

// block var data_inlined_set_data_at_575_63345
    DeRef(_data_inlined_set_data_at_575_63345);
    _data_inlined_set_data_at_575_63345 = NOVALUE;

// block var set_data_1__tmp_at578_63346

// block var set_data_2__tmp_at578_63347
    // SubProg new_forward_reference pc: 591 op: NOP1 (159)
LC: // addr: 592 pc: 591 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 592 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var default_sym_63327

// block var param_63330
    // SubProg new_forward_reference pc: 594 op: NOP1 (159)
LB: // addr: 595 pc: 594 sub: 63215 op: 159
    // SubProg new_forward_reference pc: 595 op: STARTLINE (58)

    /** fwdref.e:824		fwdref_count += 1*/
    // SubProg new_forward_reference pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 599 op: PLUS1_I (117)
    _39fwdref_count_62150 = _39fwdref_count_62150 + 1;
    // SubProg new_forward_reference pc: 603 op: STARTLINE (58)

    /** fwdref.e:826		ifdef EUDIS then*/
    // SubProg new_forward_reference pc: 605 op: STARTLINE (58)

    /** fwdref.e:839		return ref*/
    // SubProg new_forward_reference pc: 607 op: RETURNF (28)

// Exiting block BLOCK: new_forward_reference

// block var fwd_op_63217

// block var sym_63219

// block var op_63220

// block var len_63222
    DeRef(_31318);
    _31318 = NOVALUE;
    DeRef(_31313);
    _31313 = NOVALUE;
    return _ref_63221;
    // SubProg new_forward_reference pc: 611 op: BADRETURNF (43)
    ;
}


void _39add_active_reference(object _ref_63351, object _file_no_63352)
{
    object _sp_63366 = NOVALUE;
    object _31398 = NOVALUE; // 63382 31398
    object _31397 = NOVALUE; // 63381 31397
// skipping _31396  name type: 0
    object _31395 = NOVALUE; // 63379 31395
    object _31394 = NOVALUE; // 63378 31394
    object _31393 = NOVALUE; // 63377 31393
// skipping _31392  name type: 0
    object _31391 = NOVALUE; // 63375 31391
    object _31390 = NOVALUE; // 63374 31390
    object _31389 = NOVALUE; // 63373 31389
// skipping _31388  name type: 0
// skipping _31387  name type: 0
    object _31386 = NOVALUE; // 63368 31386
// skipping _31385  name type: 0
    object _31384 = NOVALUE; // 63364 31384
    object _31383 = NOVALUE; // 63363 31383
    object _31382 = NOVALUE; // 63362 31382
// skipping _31381  name type: 0
    object _31380 = NOVALUE; // 63360 31380
    object _31379 = NOVALUE; // 63359 31379
    object _31378 = NOVALUE; // 63358 31378
// skipping _31377  name type: 0
    object _31376 = NOVALUE; // 63356 31376
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_active_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_active_reference pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_active_reference pc: 5 op: STARTLINE (58)

    /** fwdref.e:843		if length( active_references ) < file_no then*/
    // SubProg add_active_reference pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_references_62122)){
            _31376 = SEQ_PTR(_39active_references_62122)->length;
    }
    else {
        _31376 = 1;
    }
    // SubProg add_active_reference pc: 12 op: LESS_IFW_I (119)
    if (_31376 >= _file_no_63352)
    goto L1; // [12] 59
    // SubProg add_active_reference pc: 16 op: STARTLINE (58)

    /** fwdref.e:844			active_references &= repeat( {}, file_no - length( active_references ) )*/
    // SubProg add_active_reference pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_references_62122)){
            _31378 = SEQ_PTR(_39active_references_62122)->length;
    }
    else {
        _31378 = 1;
    }
    // SubProg add_active_reference pc: 25 op: MINUS (10)
    _31379 = _file_no_63352 - _31378;
    _31378 = NOVALUE;
    // SubProg add_active_reference pc: 29 op: REPEAT (32)
    _31380 = Repeat(_21933, _31379);
    _31379 = NOVALUE;
    // SubProg add_active_reference pc: 33 op: CONCAT (15)
    Concat((object_ptr)&_39active_references_62122, _39active_references_62122, _31380);
    DeRefDS(_31380);
    _31380 = NOVALUE;
    // SubProg add_active_reference pc: 37 op: STARTLINE (58)

    /** fwdref.e:845			active_subprogs   &= repeat( {}, file_no - length( active_subprogs ) )*/
    // SubProg add_active_reference pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_subprogs_62121)){
            _31382 = SEQ_PTR(_39active_subprogs_62121)->length;
    }
    else {
        _31382 = 1;
    }
    // SubProg add_active_reference pc: 46 op: MINUS (10)
    _31383 = _file_no_63352 - _31382;
    _31382 = NOVALUE;
    // SubProg add_active_reference pc: 50 op: REPEAT (32)
    _31384 = Repeat(_21933, _31383);
    _31383 = NOVALUE;
    // SubProg add_active_reference pc: 54 op: CONCAT (15)
    Concat((object_ptr)&_39active_subprogs_62121, _39active_subprogs_62121, _31384);
    DeRefDS(_31384);
    _31384 = NOVALUE;
    // SubProg add_active_reference pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 63349 op: 159
    // SubProg add_active_reference pc: 59 op: STARTLINE (58)

    /** fwdref.e:847		integer sp = find( CurrentSub, active_subprogs[file_no] )*/
    // SubProg add_active_reference pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _31386 = (object)*(((s1_ptr)_2)->base + _file_no_63352);
    // SubProg add_active_reference pc: 69 op: FIND_FROM (176)
    _sp_63366 = find_from(_36CurrentSub_16444, _31386, 1);
    _31386 = NOVALUE;
    // SubProg add_active_reference pc: 74 op: STARTLINE (58)

    /** fwdref.e:848		if not sp then*/
    // SubProg add_active_reference pc: 76 op: NOT_IFW (108)
    if (_sp_63366 != 0)
    goto L2; // [76] 127
    // SubProg add_active_reference pc: 79 op: STARTLINE (58)

    /** fwdref.e:849			active_subprogs[file_no] &= CurrentSub*/
    // SubProg add_active_reference pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 85 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _31389 = (object)*(((s1_ptr)_2)->base + _file_no_63352);
    // SubProg add_active_reference pc: 89 op: CONCAT (15)
    if (IS_SEQUENCE(_31389) && IS_ATOM(_36CurrentSub_16444)) {
        Append(&_31390, _31389, _36CurrentSub_16444);
    }
    else if (IS_ATOM(_31389) && IS_SEQUENCE(_36CurrentSub_16444)) {
    }
    else {
        Concat((object_ptr)&_31390, _31389, _36CurrentSub_16444);
        _31389 = NOVALUE;
    }
    _31389 = NOVALUE;
    // SubProg add_active_reference pc: 93 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_subprogs_62121 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63352);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31390;
    if( _1 != _31390 ){
        DeRef(_1);
    }
    _31390 = NOVALUE;
    // SubProg add_active_reference pc: 97 op: STARTLINE (58)

    /** fwdref.e:850			sp = length( active_subprogs[file_no] )*/
    // SubProg add_active_reference pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _31391 = (object)*(((s1_ptr)_2)->base + _file_no_63352);
    // SubProg add_active_reference pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_31391)){
            _sp_63366 = SEQ_PTR(_31391)->length;
    }
    else {
        _sp_63366 = 1;
    }
    _31391 = NOVALUE;
    // SubProg add_active_reference pc: 108 op: STARTLINE (58)

    /** fwdref.e:852			active_references[file_no] = append( active_references[file_no], {} )*/
    // SubProg add_active_reference pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _31393 = (object)*(((s1_ptr)_2)->base + _file_no_63352);
    // SubProg add_active_reference pc: 118 op: APPEND (35)
    RefDS(_21933);
    Append(&_31394, _31393, _21933);
    _31393 = NOVALUE;
    // SubProg add_active_reference pc: 122 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_references_62122 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63352);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31394;
    if( _1 != _31394 ){
        DeRef(_1);
    }
    _31394 = NOVALUE;
    // SubProg add_active_reference pc: 126 op: NOP1 (159)
L2: // addr: 127 pc: 126 sub: 63349 op: 159
    // SubProg add_active_reference pc: 127 op: STARTLINE (58)

    /** fwdref.e:854		active_references[file_no][sp] &= ref*/
    // SubProg add_active_reference pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 131 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39active_references_62122 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_no_63352 + ((s1_ptr)_2)->base);
    // SubProg add_active_reference pc: 136 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31397 = (object)*(((s1_ptr)_2)->base + _sp_63366);
    _31395 = NOVALUE;
    // SubProg add_active_reference pc: 140 op: CONCAT (15)
    if (IS_SEQUENCE(_31397) && IS_ATOM(_ref_63351)) {
        Append(&_31398, _31397, _ref_63351);
    }
    else if (IS_ATOM(_31397) && IS_SEQUENCE(_ref_63351)) {
    }
    else {
        Concat((object_ptr)&_31398, _31397, _ref_63351);
        _31397 = NOVALUE;
    }
    _31397 = NOVALUE;
    // SubProg add_active_reference pc: 144 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_63366);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31398;
    if( _1 != _31398 ){
        DeRef(_1);
    }
    _31398 = NOVALUE;
    _31395 = NOVALUE;
    // SubProg add_active_reference pc: 148 op: STARTLINE (58)

    /** fwdref.e:855	end procedure*/
    // SubProg add_active_reference pc: 150 op: RETURNP (29)

// Exiting block BLOCK: add_active_reference

// block var ref_63351

// block var file_no_63352

// block var sp_63366
    _31391 = NOVALUE;
    return;
    // SubProg add_active_reference pc: 153 op: BADRETURNF (43)
    ;
}


object _39resolve_file(object _refs_63403, object _report_errors_63404, object _unincluded_ok_63405)
{
    object _errors_63406 = NOVALUE;
    object _ref_63410 = NOVALUE;
    object _fr_63412 = NOVALUE;
    object _tok_63425 = NOVALUE;
    object _code_sub_63433 = NOVALUE;
    object _fr_type_63435 = NOVALUE;
    object _sym_tok_63437 = NOVALUE;
// skipping _31453  name type: 0
    object _31452 = NOVALUE; // 63511 31452
    object _31451 = NOVALUE; // 63510 31451
    object _31450 = NOVALUE; // 63509 31450
    object _31449 = NOVALUE; // 63507 31449
    object _31448 = NOVALUE; // 63506 31448
    object _31447 = NOVALUE; // 63505 31447
// skipping _31444  name type: 0
// skipping _31443  name type: 0
    object _31442 = NOVALUE; // 63482 31442
    object _31441 = NOVALUE; // 63480 31441
    object _31440 = NOVALUE; // 63479 31440
// skipping _31439  name type: 0
    object _31438 = NOVALUE; // 63473 31438
    object _31437 = NOVALUE; // 63472 31437
    object _31434 = NOVALUE; // 63461 31434
    object _31433 = NOVALUE; // 63459 31433
    object _31432 = NOVALUE; // 63458 31432
// skipping _31431  name type: 0
// skipping _31430  name type: 0
// skipping _31429  name type: 0
    object _31428 = NOVALUE; // 63447 31428
    object _31427 = NOVALUE; // 63446 31427
// skipping _31423  name type: 0
// skipping _31422  name type: 0
// skipping _31421  name type: 0
// skipping _31420  name type: 0
    object _31419 = NOVALUE; // 63429 31419
// skipping _31418  name type: 0
    object _31417 = NOVALUE; // 63423 31417
    object _31416 = NOVALUE; // 63422 31416
    object _31415 = NOVALUE; // 63421 31415
    object _31414 = NOVALUE; // 63419 31414
    object _31413 = NOVALUE; // 63417 31413
    object _31412 = NOVALUE; // 63416 31412
// skipping _31411  name type: 0
// skipping _31410  name type: 0
    object _31409 = NOVALUE; // 63409 31409
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg resolve_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg resolve_file pc: 3 op: INTEGER_CHECK (96)
    // SubProg resolve_file pc: 5 op: INTEGER_CHECK (96)
    // SubProg resolve_file pc: 7 op: STARTLINE (58)

    /** fwdref.e:864		sequence errors = {}*/
    // SubProg resolve_file pc: 9 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_errors_63406);
    _errors_63406 = _21933;
    // SubProg resolve_file pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg resolve_file pc: 14 op: STARTLINE (58)

    /** fwdref.e:865		for ar = length( refs ) to 1 by -1 do*/
    // SubProg resolve_file pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63403)){
            _31409 = SEQ_PTR(_refs_63403)->length;
    }
    else {
        _31409 = 1;
    }
    // SubProg resolve_file pc: 19 op: FOR_I (125)
    {
        object _ar_63408;
        _ar_63408 = _31409;
L1: // addr: 26 pc: 19 sub: 63401 op: 125
        if (_ar_63408 < 1){
            goto L2; // [19] 481
        }
        // SubProg resolve_file pc: 26 op: STARTLINE (58)

        /** fwdref.e:866			integer ref = refs[ar]*/
        // SubProg resolve_file pc: 28 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_refs_63403);
        _ref_63410 = (object)*(((s1_ptr)_2)->base + _ar_63408);
        if (!IS_ATOM_INT(_ref_63410))
        _ref_63410 = (object)DBL_PTR(_ref_63410)->dbl;
        // SubProg resolve_file pc: 32 op: STARTLINE (58)

        /** fwdref.e:868			sequence fr = forward_references[ref]*/
        // SubProg resolve_file pc: 34 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 36 op: RHS_SUBS (25)
        DeRef(_fr_63412);
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        _fr_63412 = (object)*(((s1_ptr)_2)->base + _ref_63410);
        Ref(_fr_63412);
        // SubProg resolve_file pc: 40 op: SEQUENCE_CHECK (97)
        // SubProg resolve_file pc: 42 op: STARTLINE (58)

        /** fwdref.e:869			if include_matrix[fr[FR_FILE]][current_file_no] = NOT_INCLUDED and not unincluded_ok then*/
        // SubProg resolve_file pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63412);
        _31412 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg resolve_file pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!IS_ATOM_INT(_31412)){
            _31413 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31412)->dbl));
        }
        else{
            _31413 = (object)*(((s1_ptr)_2)->base + _31412);
        }
        // SubProg resolve_file pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31413);
        _31414 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
        _31413 = NOVALUE;
        // SubProg resolve_file pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 62 op: EQUALS (3)
        if (IS_ATOM_INT(_31414)) {
            _31415 = (_31414 == 0);
        }
        else {
            _31415 = binary_op(EQUALS, _31414, 0);
        }
        _31414 = NOVALUE;
        // SubProg resolve_file pc: 66 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31415)) {
            if (_31415 == 0) {
                goto L3; // [66] 84
            }
        }
        else {
            if (DBL_PTR(_31415)->dbl == 0.0) {
                goto L3; // [66] 84
            }
        }
        // SubProg resolve_file pc: 70 op: NOT (7)
        _31417 = (_unincluded_ok_63405 == 0);
        // SubProg resolve_file pc: 73 op: NOP1 (159)
        // SubProg resolve_file pc: 74 op: IF (20)
        if (_31417 == 0)
        {
            DeRef(_31417);
            _31417 = NOVALUE;
            goto L3; // [74] 84
        }
        else{
            DeRef(_31417);
            _31417 = NOVALUE;
        }
        // SubProg resolve_file pc: 77 op: STARTLINE (58)

        /** fwdref.e:870				continue*/
        // SubProg resolve_file pc: 79 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63410

// block var fr_63412
        DeRef(_fr_63412);
        _fr_63412 = NOVALUE;

// block var tok_63425
        DeRef(_tok_63425);
        _tok_63425 = NOVALUE;

// block var code_sub_63433

// block var fr_type_63435

// block var sym_tok_63437
        // SubProg resolve_file pc: 81 op: ELSE (23)
        goto L4; // [81] 476
        // SubProg resolve_file pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 63401 op: 159
        // SubProg resolve_file pc: 84 op: STARTLINE (58)

        /** fwdref.e:873			token tok = find_reference( fr )*/
        // SubProg resolve_file pc: 86 op: PROC (27)
        RefDS(_fr_63412);
        _0 = _tok_63425;
        _tok_63425 = _39find_reference(_fr_63412);
        DeRef(_0);
        // SubProg resolve_file pc: 90 op: STARTLINE (58)

        /** fwdref.e:874			if tok[T_ID] = IGNORED then*/
        // SubProg resolve_file pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 94 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63425);
        _31419 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg resolve_file pc: 98 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 100 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31419, 509)){
            _31419 = NOVALUE;
            goto L5; // [100] 117
        }
        _31419 = NOVALUE;
        // SubProg resolve_file pc: 104 op: STARTLINE (58)

        /** fwdref.e:875				errors &= ref*/
        // SubProg resolve_file pc: 106 op: CONCAT (15)
        Append(&_errors_63406, _errors_63406, _ref_63410);
        // SubProg resolve_file pc: 110 op: STARTLINE (58)

        /** fwdref.e:876				continue*/
        // SubProg resolve_file pc: 112 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63410

// block var fr_63412
        DeRefDS(_fr_63412);
        _fr_63412 = NOVALUE;

// block var tok_63425
        DeRef(_tok_63425);
        _tok_63425 = NOVALUE;

// block var code_sub_63433

// block var fr_type_63435

// block var sym_tok_63437
        // SubProg resolve_file pc: 114 op: ELSE (23)
        goto L4; // [114] 476
        // SubProg resolve_file pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 63401 op: 159
        // SubProg resolve_file pc: 117 op: STARTLINE (58)

        /** fwdref.e:880			integer code_sub = fr[FR_SUBPROG]*/
        // SubProg resolve_file pc: 119 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_fr_63412);
        _code_sub_63433 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_code_sub_63433))
        _code_sub_63433 = (object)DBL_PTR(_code_sub_63433)->dbl;
        // SubProg resolve_file pc: 123 op: STARTLINE (58)

        /** fwdref.e:881			integer fr_type  = fr[FR_TYPE]*/
        // SubProg resolve_file pc: 125 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_fr_63412);
        _fr_type_63435 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_fr_type_63435))
        _fr_type_63435 = (object)DBL_PTR(_fr_type_63435)->dbl;
        // SubProg resolve_file pc: 129 op: STARTLINE (58)

        /** fwdref.e:882			integer sym_tok*/
        // SubProg resolve_file pc: 131 op: STARTLINE (58)

        /** fwdref.e:884			switch fr_type label "fr_type" do*/
        // SubProg resolve_file pc: 133 op: SWITCH_I (193)
        _0 = _fr_type_63435;
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
            _2 = (object)SEQ_PTR(_tok_63425);
            _31427 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 154 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!IS_ATOM_INT(_31427)){
                _31428 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31427)->dbl));
            }
            else{
                _31428 = (object)*(((s1_ptr)_2)->base + _31427);
            }
            // SubProg resolve_file pc: 158 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 160 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31428);
            if (!IS_ATOM_INT(_36S_TOKEN_16096)){
                _sym_tok_63437 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
            }
            else{
                _sym_tok_63437 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
            }
            if (!IS_ATOM_INT(_sym_tok_63437)){
                _sym_tok_63437 = (object)DBL_PTR(_sym_tok_63437)->dbl;
            }
            _31428 = NOVALUE;
            // SubProg resolve_file pc: 166 op: STARTLINE (58)

            /** fwdref.e:888					if sym_tok = TYPE then*/
            // SubProg resolve_file pc: 168 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 170 op: EQUALS_IFW (104)
            if (_sym_tok_63437 != 504)
            goto L6; // [170] 184
            // SubProg resolve_file pc: 174 op: STARTLINE (58)

            /** fwdref.e:889						sym_tok = FUNC*/
            // SubProg resolve_file pc: 176 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 178 op: ASSIGN (18)
            _sym_tok_63437 = 501;
            // SubProg resolve_file pc: 181 op: INTEGER_CHECK (96)
            // SubProg resolve_file pc: 183 op: NOP1 (159)
L6: // addr: 184 pc: 183 sub: 63401 op: 159
            // SubProg resolve_file pc: 184 op: STARTLINE (58)

            /** fwdref.e:891					if sym_tok != fr_type then*/
            // SubProg resolve_file pc: 186 op: NOTEQ_IFW_I (122)
            if (_sym_tok_63437 == _fr_type_63435)
            goto L7; // [186] 220
            // SubProg resolve_file pc: 190 op: STARTLINE (58)

            /** fwdref.e:892						if sym_tok != FUNC and fr_type != PROC then*/
            // SubProg resolve_file pc: 192 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 194 op: NOTEQ (4)
            _31432 = (_sym_tok_63437 != 501);
            // SubProg resolve_file pc: 198 op: SC1_AND_IF (146)
            if (_31432 == 0) {
                goto L8; // [198] 219
            }
            // SubProg resolve_file pc: 202 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 204 op: NOTEQ (4)
            _31434 = (_fr_type_63435 != 27);
            // SubProg resolve_file pc: 208 op: NOP1 (159)
            // SubProg resolve_file pc: 209 op: IF (20)
            if (_31434 == 0)
            {
                DeRef(_31434);
                _31434 = NOVALUE;
                goto L8; // [209] 219
            }
            else{
                DeRef(_31434);
                _31434 = NOVALUE;
            }
            // SubProg resolve_file pc: 212 op: STARTLINE (58)

            /** fwdref.e:893							forward_error( tok, ref )*/
            // SubProg resolve_file pc: 214 op: PROC (27)
            Ref(_tok_63425);
            _39forward_error(_tok_63425, _ref_63410);
            // SubProg resolve_file pc: 218 op: NOP1 (159)
L8: // addr: 219 pc: 218 sub: 63401 op: 159
            // SubProg resolve_file pc: 219 op: NOP1 (159)
L7: // addr: 220 pc: 219 sub: 63401 op: 159
            // SubProg resolve_file pc: 220 op: STARTLINE (58)

            /** fwdref.e:896					switch sym_tok do*/
            // SubProg resolve_file pc: 222 op: SWITCH_I (193)
            _0 = _sym_tok_63437;
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
                Ref(_tok_63425);
                _39patch_forward_call(_tok_63425, _ref_63410);
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
                Ref(_tok_63425);
                _39forward_error(_tok_63425, _ref_63410);
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
            _2 = (object)SEQ_PTR(_tok_63425);
            _31437 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 272 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!IS_ATOM_INT(_31437)){
                _31438 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31437)->dbl));
            }
            else{
                _31438 = (object)*(((s1_ptr)_2)->base + _31437);
            }
            // SubProg resolve_file pc: 276 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 278 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31438);
            if (!IS_ATOM_INT(_36S_TOKEN_16096)){
                _sym_tok_63437 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
            }
            else{
                _sym_tok_63437 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
            }
            if (!IS_ATOM_INT(_sym_tok_63437)){
                _sym_tok_63437 = (object)DBL_PTR(_sym_tok_63437)->dbl;
            }
            _31438 = NOVALUE;
            // SubProg resolve_file pc: 284 op: STARTLINE (58)

            /** fwdref.e:908					if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
            // SubProg resolve_file pc: 286 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 288 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 290 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_tok_63425);
            _31440 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 294 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!IS_ATOM_INT(_31440)){
                _31441 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31440)->dbl));
            }
            else{
                _31441 = (object)*(((s1_ptr)_2)->base + _31440);
            }
            // SubProg resolve_file pc: 298 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 300 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31441);
            _31442 = (object)*(((s1_ptr)_2)->base + 4);
            _31441 = NOVALUE;
            // SubProg resolve_file pc: 304 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 306 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _31442, 9)){
                _31442 = NOVALUE;
                goto LA; // [306] 323
            }
            _31442 = NOVALUE;
            // SubProg resolve_file pc: 310 op: STARTLINE (58)

            /** fwdref.e:909						errors &= ref*/
            // SubProg resolve_file pc: 312 op: CONCAT (15)
            Append(&_errors_63406, _errors_63406, _ref_63410);
            // SubProg resolve_file pc: 316 op: STARTLINE (58)

            /** fwdref.e:910						continue*/
            // SubProg resolve_file pc: 318 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63410

// block var fr_63412
            DeRef(_fr_63412);
            _fr_63412 = NOVALUE;

// block var tok_63425
            DeRef(_tok_63425);
            _tok_63425 = NOVALUE;

// block var code_sub_63433

// block var fr_type_63435

// block var sym_tok_63437
            // SubProg resolve_file pc: 320 op: ELSE (23)
            goto L4; // [320] 476
            // SubProg resolve_file pc: 322 op: NOP1 (159)
LA: // addr: 323 pc: 322 sub: 63401 op: 159
            // SubProg resolve_file pc: 323 op: STARTLINE (58)

            /** fwdref.e:913					switch sym_tok do*/
            // SubProg resolve_file pc: 325 op: SWITCH_I (193)
            _0 = _sym_tok_63437;
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
                Ref(_tok_63425);
                _39patch_forward_variable(_tok_63425, _ref_63410);
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
                Ref(_tok_63425);
                _39forward_error(_tok_63425, _ref_63410);
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
            Ref(_tok_63425);
            _39patch_forward_type_check(_tok_63425, _ref_63410);
            // SubProg resolve_file pc: 373 op: ELSE (23)
            goto L9; // [373] 446
            // SubProg resolve_file pc: 375 op: STARTLINE (58)

            /** fwdref.e:924				case GLOBAL_INIT_CHECK then*/
            // SubProg resolve_file pc: 377 op: CASE (186)
            case 109:
            // SubProg resolve_file pc: 379 op: STARTLINE (58)

            /** fwdref.e:925					patch_forward_init_check( tok, ref )*/
            // SubProg resolve_file pc: 381 op: PROC (27)
            Ref(_tok_63425);
            _39patch_forward_init_check(_tok_63425, _ref_63410);
            // SubProg resolve_file pc: 385 op: ELSE (23)
            goto L9; // [385] 446
            // SubProg resolve_file pc: 387 op: STARTLINE (58)

            /** fwdref.e:927				case CASE then*/
            // SubProg resolve_file pc: 389 op: CASE (186)
            case 186:
            // SubProg resolve_file pc: 391 op: STARTLINE (58)

            /** fwdref.e:928					patch_forward_case( tok, ref )*/
            // SubProg resolve_file pc: 393 op: PROC (27)
            Ref(_tok_63425);
            _39patch_forward_case(_tok_63425, _ref_63410);
            // SubProg resolve_file pc: 397 op: ELSE (23)
            goto L9; // [397] 446
            // SubProg resolve_file pc: 399 op: STARTLINE (58)

            /** fwdref.e:930				case TYPE then*/
            // SubProg resolve_file pc: 401 op: CASE (186)
            case 504:
            // SubProg resolve_file pc: 403 op: STARTLINE (58)

            /** fwdref.e:931					patch_forward_type( tok, ref )*/
            // SubProg resolve_file pc: 405 op: PROC (27)
            Ref(_tok_63425);
            _39patch_forward_type(_tok_63425, _ref_63410);
            // SubProg resolve_file pc: 409 op: ELSE (23)
            goto L9; // [409] 446
            // SubProg resolve_file pc: 411 op: STARTLINE (58)

            /** fwdref.e:933				case GOTO then*/
            // SubProg resolve_file pc: 413 op: CASE (186)
            case 188:
            // SubProg resolve_file pc: 415 op: STARTLINE (58)

            /** fwdref.e:934					patch_forward_goto( tok, ref )*/
            // SubProg resolve_file pc: 417 op: PROC (27)
            Ref(_tok_63425);
            _39patch_forward_goto(_tok_63425, _ref_63410);
            // SubProg resolve_file pc: 421 op: ELSE (23)
            goto L9; // [421] 446
            // SubProg resolve_file pc: 423 op: STARTLINE (58)

            /** fwdref.e:936				case else*/
            // SubProg resolve_file pc: 425 op: CASE (186)
            default:
            // SubProg resolve_file pc: 427 op: STARTLINE (58)

            /** fwdref.e:938					InternalErr( 263, {fr[FR_TYPE], fr[FR_NAME]})*/
            // SubProg resolve_file pc: 429 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_fr_63412);
            _31447 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg resolve_file pc: 433 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_fr_63412);
            _31448 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 437 op: RIGHT_BRACE_2 (85)
            Ref(_31448);
            Ref(_31447);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _31447;
            ((intptr_t *)_2)[2] = _31448;
            _31449 = MAKE_SEQ(_1);
            _31448 = NOVALUE;
            _31447 = NOVALUE;
            // SubProg resolve_file pc: 441 op: PROC (27)
            _50InternalErr(263, _31449);
            _31449 = NOVALUE;
            // SubProg resolve_file pc: 445 op: NOPSWITCH (187)
        ;}L9: // addr: 446 pc: 445 sub: 63401 op: 187
        // SubProg resolve_file pc: 446 op: STARTLINE (58)

        /** fwdref.e:940			if report_errors and sequence( forward_references[ref] ) then*/
        // SubProg resolve_file pc: 448 op: SC1_AND_IF (146)
        if (_report_errors_63404 == 0) {
            goto LB; // [448] 472
        }
        // SubProg resolve_file pc: 452 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 454 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        _31451 = (object)*(((s1_ptr)_2)->base + _ref_63410);
        // SubProg resolve_file pc: 458 op: IS_A_SEQUENCE (68)
        _31452 = IS_SEQUENCE(_31451);
        _31451 = NOVALUE;
        // SubProg resolve_file pc: 461 op: NOP1 (159)
        // SubProg resolve_file pc: 462 op: IF (20)
        if (_31452 == 0)
        {
            _31452 = NOVALUE;
            goto LB; // [462] 472
        }
        else{
            _31452 = NOVALUE;
        }
        // SubProg resolve_file pc: 465 op: STARTLINE (58)

        /** fwdref.e:941				errors &= ref*/
        // SubProg resolve_file pc: 467 op: CONCAT (15)
        Append(&_errors_63406, _errors_63406, _ref_63410);
        // SubProg resolve_file pc: 471 op: NOP1 (159)
LB: // addr: 472 pc: 471 sub: 63401 op: 159
        // SubProg resolve_file pc: 472 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63410

// block var fr_63412
        DeRef(_fr_63412);
        _fr_63412 = NOVALUE;

// block var tok_63425
        DeRef(_tok_63425);
        _tok_63425 = NOVALUE;

// block var code_sub_63433

// block var fr_type_63435

// block var sym_tok_63437
        // SubProg resolve_file pc: 474 op: STARTLINE (58)

        /** fwdref.e:944		end for*/
        // SubProg resolve_file pc: 476 op: ENDFOR_GENERAL (39)
L4: // addr: 476 pc: 476 sub: 63401 op: 39
        _ar_63408 = _ar_63408 + -1;
        goto L1; // [476] 26
L2: // addr: 481 pc: 476 sub: 63401 op: 39
        ;
    }
    // SubProg resolve_file pc: 481 op: STARTLINE (58)

    /** fwdref.e:945		return errors*/
    // SubProg resolve_file pc: 483 op: RETURNF (28)

// Exiting block BLOCK: resolve_file

// block var refs_63403
    DeRefDS(_refs_63403);

// block var report_errors_63404

// block var unincluded_ok_63405
    _31427 = NOVALUE;
    DeRef(_31415);
    _31415 = NOVALUE;
    _31437 = NOVALUE;
    _31412 = NOVALUE;
    _31440 = NOVALUE;
    DeRef(_31432);
    _31432 = NOVALUE;
    return _errors_63406;
    // SubProg resolve_file pc: 487 op: BADRETURNF (43)
    ;
}


object _39file_name_based_symindex_compare(object _si1_63515, object _si2_63516)
{
    object _fn1_63537 = NOVALUE;
    object _fn2_63542 = NOVALUE;
    object _31481 = NOVALUE; // 63564 31481
    object _31480 = NOVALUE; // 63563 31480
    object _31479 = NOVALUE; // 63562 31479
    object _31478 = NOVALUE; // 63559 31478
    object _31477 = NOVALUE; // 63558 31477
    object _31476 = NOVALUE; // 63555 31476
    object _31475 = NOVALUE; // 63554 31475
    object _31474 = NOVALUE; // 63553 31474
    object _31473 = NOVALUE; // 63552 31473
    object _31472 = NOVALUE; // 63551 31472
    object _31471 = NOVALUE; // 63550 31471
    object _31470 = NOVALUE; // 63548 31470
// skipping _31469  name type: 0
    object _31468 = NOVALUE; // 63544 31468
// skipping _31467  name type: 0
    object _31466 = NOVALUE; // 63539 31466
    object _31465 = NOVALUE; // 63536 31465
    object _31464 = NOVALUE; // 63535 31464
    object _31463 = NOVALUE; // 63534 31463
    object _31462 = NOVALUE; // 63531 31462
    object _31461 = NOVALUE; // 63530 31461
    object _31460 = NOVALUE; // 63529 31460
    object _31459 = NOVALUE; // 63528 31459
    object _31458 = NOVALUE; // 63524 31458
    object _31457 = NOVALUE; // 63523 31457
// skipping _31456  name type: 0
    object _31455 = NOVALUE; // 63520 31455
    object _31454 = NOVALUE; // 63519 31454
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_name_based_symindex_compare pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_si1_63515)) {
        _1 = (object)(DBL_PTR(_si1_63515)->dbl);
        DeRefDS(_si1_63515);
        _si1_63515 = _1;
    }
    // SubProg file_name_based_symindex_compare pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_si2_63516)) {
        _1 = (object)(DBL_PTR(_si2_63516)->dbl);
        DeRefDS(_si2_63516);
        _si2_63516 = _1;
    }
    // SubProg file_name_based_symindex_compare pc: 5 op: STARTLINE (58)

    /** fwdref.e:949		if not symtab_index(si1) or not symtab_index(si2) then*/
    // SubProg file_name_based_symindex_compare pc: 7 op: PROC (27)
    _31454 = _36symtab_index(_si1_63515);
    // SubProg file_name_based_symindex_compare pc: 11 op: NOT (7)
    if (IS_ATOM_INT(_31454)) {
        _31455 = (_31454 == 0);
    }
    else {
        _31455 = unary_op(NOT, _31454);
    }
    DeRef(_31454);
    _31454 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 14 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_31455)) {
        if (_31455 != 0) {
            goto L1; // [14] 30
        }
    }
    else {
        if (DBL_PTR(_31455)->dbl != 0.0) {
            goto L1; // [14] 30
        }
    }
    // SubProg file_name_based_symindex_compare pc: 18 op: PROC (27)
    _31457 = _36symtab_index(_si2_63516);
    // SubProg file_name_based_symindex_compare pc: 22 op: NOT (7)
    if (IS_ATOM_INT(_31457)) {
        _31458 = (_31457 == 0);
    }
    else {
        _31458 = unary_op(NOT, _31457);
    }
    DeRef(_31457);
    _31457 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 25 op: NOP1 (159)
    // SubProg file_name_based_symindex_compare pc: 26 op: IF (20)
    if (_31458 == 0) {
        DeRef(_31458);
        _31458 = NOVALUE;
        goto L2; // [26] 37
    }
    else {
        if (!IS_ATOM_INT(_31458) && DBL_PTR(_31458)->dbl == 0.0){
            DeRef(_31458);
            _31458 = NOVALUE;
            goto L2; // [26] 37
        }
        DeRef(_31458);
        _31458 = NOVALUE;
    }
    DeRef(_31458);
    _31458 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 63513 op: 159
    // SubProg file_name_based_symindex_compare pc: 30 op: STARTLINE (58)

    /** fwdref.e:950			return 1 -- put non symbols last*/
    // SubProg file_name_based_symindex_compare pc: 32 op: RETURNF (28)

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63515

// block var si2_63516
    DeRef(_31455);
    _31455 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 63513 op: 159
    // SubProg file_name_based_symindex_compare pc: 37 op: STARTLINE (58)

    /** fwdref.e:952		if S_FILE_NO <= length(SymTab[si1]) and S_FILE_NO <= length(SymTab[si2]) then*/
    // SubProg file_name_based_symindex_compare pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31459 = (object)*(((s1_ptr)_2)->base + _si1_63515);
    // SubProg file_name_based_symindex_compare pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_31459)){
            _31460 = SEQ_PTR(_31459)->length;
    }
    else {
        _31460 = 1;
    }
    _31459 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 50 op: LESSEQ (5)
    if (IS_ATOM_INT(_36S_FILE_NO_16087)) {
        _31461 = (_36S_FILE_NO_16087 <= _31460);
    }
    else {
        _31461 = binary_op(LESSEQ, _36S_FILE_NO_16087, _31460);
    }
    _31460 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 54 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31461)) {
        if (_31461 == 0) {
            goto L3; // [54] 186
        }
    }
    else {
        if (DBL_PTR(_31461)->dbl == 0.0) {
            goto L3; // [54] 186
        }
    }
    // SubProg file_name_based_symindex_compare pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31463 = (object)*(((s1_ptr)_2)->base + _si2_63516);
    // SubProg file_name_based_symindex_compare pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_31463)){
            _31464 = SEQ_PTR(_31463)->length;
    }
    else {
        _31464 = 1;
    }
    _31463 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 69 op: LESSEQ (5)
    if (IS_ATOM_INT(_36S_FILE_NO_16087)) {
        _31465 = (_36S_FILE_NO_16087 <= _31464);
    }
    else {
        _31465 = binary_op(LESSEQ, _36S_FILE_NO_16087, _31464);
    }
    _31464 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 73 op: NOP1 (159)
    // SubProg file_name_based_symindex_compare pc: 74 op: IF (20)
    if (_31465 == 0) {
        DeRef(_31465);
        _31465 = NOVALUE;
        goto L3; // [74] 186
    }
    else {
        if (!IS_ATOM_INT(_31465) && DBL_PTR(_31465)->dbl == 0.0){
            DeRef(_31465);
            _31465 = NOVALUE;
            goto L3; // [74] 186
        }
        DeRef(_31465);
        _31465 = NOVALUE;
    }
    DeRef(_31465);
    _31465 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 77 op: STARTLINE (58)

    /** fwdref.e:953			integer fn1 = SymTab[si1][S_FILE_NO], fn2 = SymTab[si2][S_FILE_NO]*/
    // SubProg file_name_based_symindex_compare pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31466 = (object)*(((s1_ptr)_2)->base + _si1_63515);
    // SubProg file_name_based_symindex_compare pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31466);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _fn1_63537 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _fn1_63537 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_fn1_63537)){
        _fn1_63537 = (object)DBL_PTR(_fn1_63537)->dbl;
    }
    _31466 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31468 = (object)*(((s1_ptr)_2)->base + _si2_63516);
    // SubProg file_name_based_symindex_compare pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31468);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _fn2_63542 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _fn2_63542 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_fn2_63542)){
        _fn2_63542 = (object)DBL_PTR(_fn2_63542)->dbl;
    }
    _31468 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 107 op: STARTLINE (58)

    /** fwdref.e:954			if find(1,{fn1,fn2} > length(known_files) or {fn1,fn2} <= 0) then*/
    // SubProg file_name_based_symindex_compare pc: 109 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63537;
    ((intptr_t *)_2)[2] = _fn2_63542;
    _31470 = MAKE_SEQ(_1);
    // SubProg file_name_based_symindex_compare pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 115 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _31471 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _31471 = 1;
    }
    // SubProg file_name_based_symindex_compare pc: 118 op: GREATER (6)
    _31472 = binary_op(GREATER, _31470, _31471);
    DeRefDS(_31470);
    _31470 = NOVALUE;
    _31471 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 122 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63537;
    ((intptr_t *)_2)[2] = _fn2_63542;
    _31473 = MAKE_SEQ(_1);
    // SubProg file_name_based_symindex_compare pc: 126 op: LESSEQ (5)
    _31474 = binary_op(LESSEQ, _31473, 0);
    DeRefDS(_31473);
    _31473 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 130 op: OR (9)
    _31475 = binary_op(OR, _31472, _31474);
    DeRefDS(_31472);
    _31472 = NOVALUE;
    DeRefDS(_31474);
    _31474 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 134 op: FIND_FROM (176)
    _31476 = find_from(1, _31475, 1);
    DeRefDS(_31475);
    _31475 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 139 op: IF (20)
    if (_31476 == 0)
    {
        _31476 = NOVALUE;
        goto L4; // [139] 149
    }
    else{
        _31476 = NOVALUE;
    }
    // SubProg file_name_based_symindex_compare pc: 142 op: STARTLINE (58)

    /** fwdref.e:956				return 1*/
    // SubProg file_name_based_symindex_compare pc: 144 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fn1_63537

// block var fn2_63542

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63515

// block var si2_63516
    _31459 = NOVALUE;
    DeRef(_31455);
    _31455 = NOVALUE;
    _31463 = NOVALUE;
    DeRef(_31461);
    _31461 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 63513 op: 159
    // SubProg file_name_based_symindex_compare pc: 149 op: STARTLINE (58)

    /** fwdref.e:958			return compare(abbreviate_path(known_files[fn1]),*/
    // SubProg file_name_based_symindex_compare pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _31477 = (object)*(((s1_ptr)_2)->base + _fn1_63537);
    // SubProg file_name_based_symindex_compare pc: 157 op: PROC (27)
    Ref(_31477);
    RefDS(_21933);
    _31478 = _20abbreviate_path(_31477, _21933);
    _31477 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 164 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _31479 = (object)*(((s1_ptr)_2)->base + _fn2_63542);
    // SubProg file_name_based_symindex_compare pc: 168 op: PROC (27)
    Ref(_31479);
    RefDS(_21933);
    _31480 = _20abbreviate_path(_31479, _21933);
    _31479 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 173 op: COMPARE (76)
    if (IS_ATOM_INT(_31478) && IS_ATOM_INT(_31480)){
        _31481 = (_31478 < _31480) ? -1 : (_31478 > _31480);
    }
    else{
        _31481 = compare(_31478, _31480);
    }
    DeRef(_31478);
    _31478 = NOVALUE;
    DeRef(_31480);
    _31480 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 177 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fn1_63537

// block var fn2_63542

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63515

// block var si2_63516
    _31459 = NOVALUE;
    DeRef(_31455);
    _31455 = NOVALUE;
    _31463 = NOVALUE;
    DeRef(_31461);
    _31461 = NOVALUE;
    return _31481;
    // SubProg file_name_based_symindex_compare pc: 181 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fn1_63537

// block var fn2_63542
    // SubProg file_name_based_symindex_compare pc: 183 op: ELSE (23)
    goto L5; // [183] 193
    // SubProg file_name_based_symindex_compare pc: 185 op: NOP1 (159)
L3: // addr: 186 pc: 185 sub: 63513 op: 159
    // SubProg file_name_based_symindex_compare pc: 186 op: STARTLINE (58)

    /** fwdref.e:961			return 1 -- put non-names last*/
    // SubProg file_name_based_symindex_compare pc: 188 op: RETURNF (28)

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63515

// block var si2_63516
    _31459 = NOVALUE;
    DeRef(_31455);
    _31455 = NOVALUE;
    _31463 = NOVALUE;
    DeRef(_31461);
    _31461 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 192 op: NOP1 (159)
L5: // addr: 193 pc: 192 sub: 63513 op: 159
    // SubProg file_name_based_symindex_compare pc: 193 op: BADRETURNF (43)
    ;
}


void _39Resolve_forward_references(object _report_errors_63568)
{
    object _errors_63569 = NOVALUE;
    object _unincluded_ok_63570 = NOVALUE;
    object _msg_63631 = NOVALUE;
    object _errloc_63632 = NOVALUE;
    object _ref_63637 = NOVALUE;
    object _tok_63653 = NOVALUE;
    object _THIS_SCOPE_63655 = NOVALUE;
    object _THESE_GLOBALS_63656 = NOVALUE;
    object _syms_63715 = NOVALUE;
    object _s_63736 = NOVALUE;
    object _31616 = NOVALUE; // 63780 31616
    object _31615 = NOVALUE; // 63778 31615
    object _31614 = NOVALUE; // 63776 31614
// skipping _31612  name type: 0
    object _31611 = NOVALUE; // 63772 31611
// skipping _31610  name type: 0
// skipping _31609  name type: 0
// skipping _31608  name type: 0
// skipping _31607  name type: 0
    object _31606 = NOVALUE; // 63762 31606
// skipping _31605  name type: 0
// skipping _31604  name type: 0
    object _31603 = NOVALUE; // 63759 31603
// skipping _31602  name type: 0
    object _31601 = NOVALUE; // 63755 31601
    object _31600 = NOVALUE; // 63754 31600
    object _31599 = NOVALUE; // 63753 31599
    object _31598 = NOVALUE; // 63752 31598
    object _31597 = NOVALUE; // 63751 31597
    object _31596 = NOVALUE; // 63750 31596
    object _31595 = NOVALUE; // 63748 31595
    object _31593 = NOVALUE; // 63742 31593
    object _31592 = NOVALUE; // 63741 31592
    object _31591 = NOVALUE; // 63739 31591
// skipping _31590  name type: 0
    object _31589 = NOVALUE; // 63734 31589
// skipping _31588  name type: 0
    object _31587 = NOVALUE; // 63730 31587
    object _31586 = NOVALUE; // 63729 31586
    object _31585 = NOVALUE; // 63728 31585
    object _31584 = NOVALUE; // 63727 31584
    object _31583 = NOVALUE; // 63726 31583
    object _31582 = NOVALUE; // 63723 31582
// skipping _31580  name type: 0
    object _31579 = NOVALUE; // 63719 31579
// skipping _31577  name type: 0
// skipping _31576  name type: 0
    object _31575 = NOVALUE; // 63711 31575
    object _31574 = NOVALUE; // 63710 31574
    object _31573 = NOVALUE; // 63709 31573
    object _31572 = NOVALUE; // 63708 31572
    object _31571 = NOVALUE; // 63707 31571
    object _31570 = NOVALUE; // 63704 31570
// skipping _31568  name type: 0
    object _31567 = NOVALUE; // 63700 31567
    object _31566 = NOVALUE; // 63699 31566
    object _31565 = NOVALUE; // 63698 31565
    object _31564 = NOVALUE; // 63697 31564
    object _31563 = NOVALUE; // 63696 31563
    object _31562 = NOVALUE; // 63693 31562
// skipping _31560  name type: 0
    object _31559 = NOVALUE; // 63689 31559
    object _31558 = NOVALUE; // 63688 31558
    object _31556 = NOVALUE; // 63686 31556
    object _31555 = NOVALUE; // 63685 31555
    object _31554 = NOVALUE; // 63684 31554
    object _31553 = NOVALUE; // 63680 31553
    object _31552 = NOVALUE; // 63679 31552
    object _31551 = NOVALUE; // 63678 31551
    object _31550 = NOVALUE; // 63677 31550
    object _31549 = NOVALUE; // 63674 31549
// skipping _31547  name type: 0
    object _31546 = NOVALUE; // 63671 31546
// skipping _31545  name type: 0
    object _31544 = NOVALUE; // 63668 31544
    object _31541 = NOVALUE; // 63662 31541
// skipping _31540  name type: 0
    object _31539 = NOVALUE; // 63659 31539
// skipping _31538  name type: 0
    object _31537 = NOVALUE; // 63651 31537
    object _31536 = NOVALUE; // 63649 31536
// skipping _31535  name type: 0
    object _31534 = NOVALUE; // 63647 31534
    object _31533 = NOVALUE; // 63645 31533
    object _31532 = NOVALUE; // 63644 31532
    object _31531 = NOVALUE; // 63643 31531
    object _31530 = NOVALUE; // 63641 31530
// skipping _31529  name type: 0
    object _31528 = NOVALUE; // 63638 31528
    object _31527 = NOVALUE; // 63636 31527
    object _31525 = NOVALUE; // 63630 31525
    object _31524 = NOVALUE; // 63629 31524
// skipping _31523  name type: 0
    object _31522 = NOVALUE; // 63626 31522
    object _31521 = NOVALUE; // 63625 31521
// skipping _31520  name type: 0
    object _31519 = NOVALUE; // 63623 31519
    object _31518 = NOVALUE; // 63622 31518
    object _31517 = NOVALUE; // 63621 31517
    object _31516 = NOVALUE; // 63620 31516
    object _31515 = NOVALUE; // 63619 31515
    object _31514 = NOVALUE; // 63616 31514
    object _31513 = NOVALUE; // 63615 31513
    object _31512 = NOVALUE; // 63613 31512
    object _31511 = NOVALUE; // 63612 31511
    object _31510 = NOVALUE; // 63610 31510
    object _31509 = NOVALUE; // 63609 31509
    object _31508 = NOVALUE; // 63608 31508
    object _31507 = NOVALUE; // 63607 31507
    object _31506 = NOVALUE; // 63606 31506
    object _31505 = NOVALUE; // 63605 31505
    object _31504 = NOVALUE; // 63603 31504
// skipping _31503  name type: 0
    object _31502 = NOVALUE; // 63599 31502
    object _31501 = NOVALUE; // 63598 31501
    object _31500 = NOVALUE; // 63597 31500
    object _31499 = NOVALUE; // 63596 31499
// skipping _31498  name type: 0
    object _31497 = NOVALUE; // 63593 31497
    object _31496 = NOVALUE; // 63591 31496
// skipping _31495  name type: 0
    object _31494 = NOVALUE; // 63588 31494
    object _31493 = NOVALUE; // 63587 31493
    object _31492 = NOVALUE; // 63586 31492
    object _31491 = NOVALUE; // 63585 31491
// skipping _31490  name type: 0
    object _31489 = NOVALUE; // 63582 31489
    object _31488 = NOVALUE; // 63581 31488
    object _31487 = NOVALUE; // 63580 31487
    object _31486 = NOVALUE; // 63579 31486
// skipping _31485  name type: 0
    object _31484 = NOVALUE; // 63576 31484
    object _31483 = NOVALUE; // 63574 31483
// skipping _31482  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Resolve_forward_references pc: 1 op: INTEGER_CHECK (96)
    // SubProg Resolve_forward_references pc: 3 op: STARTLINE (58)

    /** fwdref.e:966		sequence errors = {}*/
    // SubProg Resolve_forward_references pc: 5 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_errors_63569);
    _errors_63569 = _21933;
    // SubProg Resolve_forward_references pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 10 op: STARTLINE (58)

    /** fwdref.e:967		integer unincluded_ok = get_resolve_unincluded_globals()*/
    // SubProg Resolve_forward_references pc: 12 op: PROC (27)
    _unincluded_ok_63570 = _54get_resolve_unincluded_globals();
    // SubProg Resolve_forward_references pc: 15 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_unincluded_ok_63570)) {
        _1 = (object)(DBL_PTR(_unincluded_ok_63570)->dbl);
        DeRefDS(_unincluded_ok_63570);
        _unincluded_ok_63570 = _1;
    }
    // SubProg Resolve_forward_references pc: 17 op: STARTLINE (58)

    /** fwdref.e:969		if length( active_references ) < length( known_files ) then*/
    // SubProg Resolve_forward_references pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_references_62122)){
            _31483 = SEQ_PTR(_39active_references_62122)->length;
    }
    else {
        _31483 = 1;
    }
    // SubProg Resolve_forward_references pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 26 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _31484 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _31484 = 1;
    }
    // SubProg Resolve_forward_references pc: 29 op: LESS_IFW_I (119)
    if (_31483 >= _31484)
    goto L1; // [29] 86
    // SubProg Resolve_forward_references pc: 33 op: STARTLINE (58)

    /** fwdref.e:970			active_references &= repeat( {}, length( known_files ) - length( active_references ) )*/
    // SubProg Resolve_forward_references pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 39 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _31486 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _31486 = 1;
    }
    // SubProg Resolve_forward_references pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 44 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_references_62122)){
            _31487 = SEQ_PTR(_39active_references_62122)->length;
    }
    else {
        _31487 = 1;
    }
    // SubProg Resolve_forward_references pc: 47 op: MINUS (10)
    _31488 = _31486 - _31487;
    _31486 = NOVALUE;
    _31487 = NOVALUE;
    // SubProg Resolve_forward_references pc: 51 op: REPEAT (32)
    _31489 = Repeat(_21933, _31488);
    _31488 = NOVALUE;
    // SubProg Resolve_forward_references pc: 55 op: CONCAT (15)
    Concat((object_ptr)&_39active_references_62122, _39active_references_62122, _31489);
    DeRefDS(_31489);
    _31489 = NOVALUE;
    // SubProg Resolve_forward_references pc: 59 op: STARTLINE (58)

    /** fwdref.e:971			active_subprogs   &= repeat( {}, length( known_files ) - length( active_subprogs ) )*/
    // SubProg Resolve_forward_references pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _31491 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _31491 = 1;
    }
    // SubProg Resolve_forward_references pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_subprogs_62121)){
            _31492 = SEQ_PTR(_39active_subprogs_62121)->length;
    }
    else {
        _31492 = 1;
    }
    // SubProg Resolve_forward_references pc: 73 op: MINUS (10)
    _31493 = _31491 - _31492;
    _31491 = NOVALUE;
    _31492 = NOVALUE;
    // SubProg Resolve_forward_references pc: 77 op: REPEAT (32)
    _31494 = Repeat(_21933, _31493);
    _31493 = NOVALUE;
    // SubProg Resolve_forward_references pc: 81 op: CONCAT (15)
    Concat((object_ptr)&_39active_subprogs_62121, _39active_subprogs_62121, _31494);
    DeRefDS(_31494);
    _31494 = NOVALUE;
    // SubProg Resolve_forward_references pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 63566 op: 159
    // SubProg Resolve_forward_references pc: 86 op: STARTLINE (58)

    /** fwdref.e:974		if length( toplevel_references ) < length( known_files ) then*/
    // SubProg Resolve_forward_references pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_39toplevel_references_62123)){
            _31496 = SEQ_PTR(_39toplevel_references_62123)->length;
    }
    else {
        _31496 = 1;
    }
    // SubProg Resolve_forward_references pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _31497 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _31497 = 1;
    }
    // SubProg Resolve_forward_references pc: 98 op: LESS_IFW_I (119)
    if (_31496 >= _31497)
    goto L2; // [98] 129
    // SubProg Resolve_forward_references pc: 102 op: STARTLINE (58)

    /** fwdref.e:975			toplevel_references &= repeat( {}, length( known_files ) - length( toplevel_references ) )*/
    // SubProg Resolve_forward_references pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 108 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _31499 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _31499 = 1;
    }
    // SubProg Resolve_forward_references pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_39toplevel_references_62123)){
            _31500 = SEQ_PTR(_39toplevel_references_62123)->length;
    }
    else {
        _31500 = 1;
    }
    // SubProg Resolve_forward_references pc: 116 op: MINUS (10)
    _31501 = _31499 - _31500;
    _31499 = NOVALUE;
    _31500 = NOVALUE;
    // SubProg Resolve_forward_references pc: 120 op: REPEAT (32)
    _31502 = Repeat(_21933, _31501);
    _31501 = NOVALUE;
    // SubProg Resolve_forward_references pc: 124 op: CONCAT (15)
    Concat((object_ptr)&_39toplevel_references_62123, _39toplevel_references_62123, _31502);
    DeRefDS(_31502);
    _31502 = NOVALUE;
    // SubProg Resolve_forward_references pc: 128 op: NOP1 (159)
L2: // addr: 129 pc: 128 sub: 63566 op: 159
    // SubProg Resolve_forward_references pc: 129 op: STARTLINE (58)

    /** fwdref.e:978		for i = 1 to length( active_subprogs ) do*/
    // SubProg Resolve_forward_references pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 133 op: LENGTH (42)
    if (IS_SEQUENCE(_39active_subprogs_62121)){
            _31504 = SEQ_PTR(_39active_subprogs_62121)->length;
    }
    else {
        _31504 = 1;
    }
    // SubProg Resolve_forward_references pc: 136 op: FOR_I (125)
    {
        object _i_63602;
        _i_63602 = 1;
L3: // addr: 143 pc: 136 sub: 63566 op: 125
        if (_i_63602 > _31504){
            goto L4; // [136] 280
        }
        // SubProg Resolve_forward_references pc: 143 op: STARTLINE (58)

        /** fwdref.e:979			if (length( active_subprogs[i] ) or length(toplevel_references[i])) */
        // SubProg Resolve_forward_references pc: 145 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 147 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39active_subprogs_62121);
        _31505 = (object)*(((s1_ptr)_2)->base + _i_63602);
        // SubProg Resolve_forward_references pc: 151 op: LENGTH (42)
        if (IS_SEQUENCE(_31505)){
                _31506 = SEQ_PTR(_31505)->length;
        }
        else {
            _31506 = 1;
        }
        _31505 = NOVALUE;
        // SubProg Resolve_forward_references pc: 154 op: SC1_OR (143)
        if (_31506 != 0) {
            _31507 = 1;
            goto L5; // [154] 171
        }
        // SubProg Resolve_forward_references pc: 158 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 160 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39toplevel_references_62123);
        _31508 = (object)*(((s1_ptr)_2)->base + _i_63602);
        // SubProg Resolve_forward_references pc: 164 op: LENGTH (42)
        if (IS_SEQUENCE(_31508)){
                _31509 = SEQ_PTR(_31508)->length;
        }
        else {
            _31509 = 1;
        }
        _31508 = NOVALUE;
        // SubProg Resolve_forward_references pc: 167 op: SC2_OR (144)
        _31507 = (_31509 != 0);
        // SubProg Resolve_forward_references pc: 170 op: NOP1 (159)
L5: // addr: 171 pc: 170 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 171 op: SC1_AND_IF (146)
        if (_31507 == 0) {
            goto L6; // [171] 273
        }
        // SubProg Resolve_forward_references pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 177 op: EQUALS (3)
        _31511 = (_i_63602 == _36current_file_no_16436);
        // SubProg Resolve_forward_references pc: 181 op: SC1_OR (143)
        if (_31511 != 0) {
            _31512 = 1;
            goto L7; // [181] 195
        }
        // SubProg Resolve_forward_references pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 187 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37finished_files_15408);
        _31513 = (object)*(((s1_ptr)_2)->base + _i_63602);
        // SubProg Resolve_forward_references pc: 191 op: SC2_OR (144)
        _31512 = (_31513 != 0);
        // SubProg Resolve_forward_references pc: 194 op: NOP1 (159)
L7: // addr: 195 pc: 194 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 195 op: SC1_OR (143)
        if (_31512 != 0) {
            DeRef(_31514);
            _31514 = 1;
            goto L8; // [195] 203
        }
        // SubProg Resolve_forward_references pc: 199 op: SC2_OR (144)
        _31514 = (_unincluded_ok_63570 != 0);
        // SubProg Resolve_forward_references pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 203 op: NOP1 (159)
        // SubProg Resolve_forward_references pc: 204 op: IF (20)
        if (_31514 == 0)
        {
            _31514 = NOVALUE;
            goto L6; // [204] 273
        }
        else{
            _31514 = NOVALUE;
        }
        // SubProg Resolve_forward_references pc: 207 op: STARTLINE (58)

        /** fwdref.e:982				for j = length( active_references[i] ) to 1 by -1 do*/
        // SubProg Resolve_forward_references pc: 209 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 211 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39active_references_62122);
        _31515 = (object)*(((s1_ptr)_2)->base + _i_63602);
        // SubProg Resolve_forward_references pc: 215 op: LENGTH (42)
        if (IS_SEQUENCE(_31515)){
                _31516 = SEQ_PTR(_31515)->length;
        }
        else {
            _31516 = 1;
        }
        _31515 = NOVALUE;
        // SubProg Resolve_forward_references pc: 218 op: FOR_I (125)
        {
            object _j_63618;
            _j_63618 = _31516;
L9: // addr: 225 pc: 218 sub: 63566 op: 125
            if (_j_63618 < 1){
                goto LA; // [218] 254
            }
            // SubProg Resolve_forward_references pc: 225 op: STARTLINE (58)

            /** fwdref.e:983					errors &= resolve_file( active_references[i][j], report_errors, unincluded_ok )*/
            // SubProg Resolve_forward_references pc: 227 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_39active_references_62122);
            _31517 = (object)*(((s1_ptr)_2)->base + _i_63602);
            // SubProg Resolve_forward_references pc: 233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31517);
            _31518 = (object)*(((s1_ptr)_2)->base + _j_63618);
            _31517 = NOVALUE;
            // SubProg Resolve_forward_references pc: 237 op: PROC (27)
            Ref(_31518);
            _31519 = _39resolve_file(_31518, _report_errors_63568, _unincluded_ok_63570);
            _31518 = NOVALUE;
            // SubProg Resolve_forward_references pc: 243 op: CONCAT (15)
            if (IS_SEQUENCE(_errors_63569) && IS_ATOM(_31519)) {
                Ref(_31519);
                Append(&_errors_63569, _errors_63569, _31519);
            }
            else if (IS_ATOM(_errors_63569) && IS_SEQUENCE(_31519)) {
            }
            else {
                Concat((object_ptr)&_errors_63569, _errors_63569, _31519);
            }
            DeRef(_31519);
            _31519 = NOVALUE;
            // SubProg Resolve_forward_references pc: 247 op: STARTLINE (58)

            /** fwdref.e:984				end for*/
            // SubProg Resolve_forward_references pc: 249 op: ENDFOR_GENERAL (39)
            _j_63618 = _j_63618 + -1;
            goto L9; // [249] 225
LA: // addr: 254 pc: 249 sub: 63566 op: 39
            ;
        }
        // SubProg Resolve_forward_references pc: 254 op: STARTLINE (58)

        /** fwdref.e:985				errors &= resolve_file( toplevel_references[i], report_errors, unincluded_ok )*/
        // SubProg Resolve_forward_references pc: 256 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 258 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39toplevel_references_62123);
        _31521 = (object)*(((s1_ptr)_2)->base + _i_63602);
        // SubProg Resolve_forward_references pc: 262 op: PROC (27)
        Ref(_31521);
        _31522 = _39resolve_file(_31521, _report_errors_63568, _unincluded_ok_63570);
        _31521 = NOVALUE;
        // SubProg Resolve_forward_references pc: 268 op: CONCAT (15)
        if (IS_SEQUENCE(_errors_63569) && IS_ATOM(_31522)) {
            Ref(_31522);
            Append(&_errors_63569, _errors_63569, _31522);
        }
        else if (IS_ATOM(_errors_63569) && IS_SEQUENCE(_31522)) {
        }
        else {
            Concat((object_ptr)&_errors_63569, _errors_63569, _31522);
        }
        DeRef(_31522);
        _31522 = NOVALUE;
        // SubProg Resolve_forward_references pc: 272 op: NOP1 (159)
L6: // addr: 273 pc: 272 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 273 op: STARTLINE (58)

        /** fwdref.e:987		end for*/
        // SubProg Resolve_forward_references pc: 275 op: ENDFOR_INT_UP1 (54)
        _i_63602 = _i_63602 + 1;
        goto L3; // [275] 143
L4: // addr: 280 pc: 275 sub: 63566 op: 54
        ;
    }
    // SubProg Resolve_forward_references pc: 280 op: STARTLINE (58)

    /** fwdref.e:989		if report_errors and length( errors ) then*/
    // SubProg Resolve_forward_references pc: 282 op: SC1_AND_IF (146)
    if (_report_errors_63568 == 0) {
        goto LB; // [282] 854
    }
    // SubProg Resolve_forward_references pc: 286 op: LENGTH (42)
    if (IS_SEQUENCE(_errors_63569)){
            _31525 = SEQ_PTR(_errors_63569)->length;
    }
    else {
        _31525 = 1;
    }
    // SubProg Resolve_forward_references pc: 289 op: NOP1 (159)
    // SubProg Resolve_forward_references pc: 290 op: IF (20)
    if (_31525 == 0)
    {
        _31525 = NOVALUE;
        goto LB; // [290] 854
    }
    else{
        _31525 = NOVALUE;
    }
    // SubProg Resolve_forward_references pc: 293 op: STARTLINE (58)

    /** fwdref.e:990			sequence msg = ""*/
    // SubProg Resolve_forward_references pc: 295 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_msg_63631);
    _msg_63631 = _21933;
    // SubProg Resolve_forward_references pc: 298 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 300 op: STARTLINE (58)

    /** fwdref.e:991			sequence errloc = "Internal Error - Unknown Error Message"*/
    // SubProg Resolve_forward_references pc: 302 op: ASSIGN (18)
    RefDS(_31526);
    DeRefi(_errloc_63632);
    _errloc_63632 = _31526;
    // SubProg Resolve_forward_references pc: 305 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 307 op: STARTLINE (58)

    /** fwdref.e:993			for e = length(errors) to 1 by -1 do*/
    // SubProg Resolve_forward_references pc: 309 op: LENGTH (42)
    if (IS_SEQUENCE(_errors_63569)){
            _31527 = SEQ_PTR(_errors_63569)->length;
    }
    else {
        _31527 = 1;
    }
    // SubProg Resolve_forward_references pc: 312 op: FOR_I (125)
    {
        object _e_63635;
        _e_63635 = _31527;
LC: // addr: 319 pc: 312 sub: 63566 op: 125
        if (_e_63635 < 1){
            goto LD; // [312] 828
        }
        // SubProg Resolve_forward_references pc: 319 op: STARTLINE (58)

        /** fwdref.e:994				sequence ref = forward_references[errors[e]]*/
        // SubProg Resolve_forward_references pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 323 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_errors_63569);
        _31528 = (object)*(((s1_ptr)_2)->base + _e_63635);
        // SubProg Resolve_forward_references pc: 327 op: RHS_SUBS (25)
        DeRef(_ref_63637);
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!IS_ATOM_INT(_31528)){
            _ref_63637 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31528)->dbl));
        }
        else{
            _ref_63637 = (object)*(((s1_ptr)_2)->base + _31528);
        }
        Ref(_ref_63637);
        // SubProg Resolve_forward_references pc: 331 op: SEQUENCE_CHECK (97)
        // SubProg Resolve_forward_references pc: 333 op: STARTLINE (58)

        /** fwdref.e:995				if (ref[FR_TYPE] = TYPE_CHECK and ref[FR_OP] = TYPE_CHECK) or ref[FR_TYPE] = GLOBAL_INIT_CHECK then*/
        // SubProg Resolve_forward_references pc: 335 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63637);
        _31530 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 341 op: EQUALS (3)
        if (IS_ATOM_INT(_31530)) {
            _31531 = (_31530 == 65);
        }
        else {
            _31531 = binary_op(EQUALS, _31530, 65);
        }
        _31530 = NOVALUE;
        // SubProg Resolve_forward_references pc: 345 op: SC1_AND (141)
        if (IS_ATOM_INT(_31531)) {
            if (_31531 == 0) {
                DeRef(_31532);
                _31532 = 0;
                goto LE; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_31531)->dbl == 0.0) {
                DeRef(_31532);
                _31532 = 0;
                goto LE; // [345] 363
            }
        }
        // SubProg Resolve_forward_references pc: 349 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63637);
        _31533 = (object)*(((s1_ptr)_2)->base + 10);
        // SubProg Resolve_forward_references pc: 353 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 355 op: EQUALS (3)
        if (IS_ATOM_INT(_31533)) {
            _31534 = (_31533 == 65);
        }
        else {
            _31534 = binary_op(EQUALS, _31533, 65);
        }
        _31533 = NOVALUE;
        // SubProg Resolve_forward_references pc: 359 op: SC2_AND (142)
        DeRef(_31532);
        if (IS_ATOM_INT(_31534))
        _31532 = (_31534 != 0);
        else
        _31532 = DBL_PTR(_31534)->dbl != 0.0;
        // SubProg Resolve_forward_references pc: 362 op: NOP1 (159)
LE: // addr: 363 pc: 362 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 363 op: SC1_OR_IF (147)
        if (_31532 != 0) {
            goto LF; // [363] 382
        }
        // SubProg Resolve_forward_references pc: 367 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63637);
        _31536 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 371 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 373 op: EQUALS (3)
        if (IS_ATOM_INT(_31536)) {
            _31537 = (_31536 == 109);
        }
        else {
            _31537 = binary_op(EQUALS, _31536, 109);
        }
        _31536 = NOVALUE;
        // SubProg Resolve_forward_references pc: 377 op: NOP1 (159)
        // SubProg Resolve_forward_references pc: 378 op: IF (20)
        if (_31537 == 0) {
            DeRef(_31537);
            _31537 = NOVALUE;
            goto L10; // [378] 391
        }
        else {
            if (!IS_ATOM_INT(_31537) && DBL_PTR(_31537)->dbl == 0.0){
                DeRef(_31537);
                _31537 = NOVALUE;
                goto L10; // [378] 391
            }
            DeRef(_31537);
            _31537 = NOVALUE;
        }
        DeRef(_31537);
        _31537 = NOVALUE;
        // SubProg Resolve_forward_references pc: 381 op: NOP1 (159)
LF: // addr: 382 pc: 381 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 382 op: STARTLINE (58)

        /** fwdref.e:997					continue*/
        // SubProg Resolve_forward_references pc: 384 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ref_63637
        DeRef(_ref_63637);
        _ref_63637 = NOVALUE;
        // SubProg Resolve_forward_references pc: 386 op: ELSE (23)
        goto L11; // [386] 823
        // SubProg Resolve_forward_references pc: 388 op: ELSE (23)
        goto L12; // [388] 789
        // SubProg Resolve_forward_references pc: 390 op: NOP1 (159)
L10: // addr: 391 pc: 390 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 391 op: STARTLINE (58)

        /** fwdref.e:1001					object tok = find_reference(ref)*/
        // SubProg Resolve_forward_references pc: 393 op: PROC (27)
        RefDS(_ref_63637);
        _0 = _tok_63653;
        _tok_63653 = _39find_reference(_ref_63637);
        DeRef(_0);
        // SubProg Resolve_forward_references pc: 397 op: STARTLINE (58)

        /** fwdref.e:1002					integer THIS_SCOPE = 3*/
        // SubProg Resolve_forward_references pc: 399 op: ASSIGN_I (113)
        _THIS_SCOPE_63655 = 3;
        // SubProg Resolve_forward_references pc: 402 op: STARTLINE (58)

        /** fwdref.e:1003					integer THESE_GLOBALS = 4*/
        // SubProg Resolve_forward_references pc: 404 op: ASSIGN_I (113)
        _THESE_GLOBALS_63656 = 4;
        // SubProg Resolve_forward_references pc: 407 op: STARTLINE (58)

        /** fwdref.e:1004					if tok[T_ID] = IGNORED then*/
        // SubProg Resolve_forward_references pc: 409 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 411 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63653);
        _31539 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 417 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31539, 509)){
            _31539 = NOVALUE;
            goto L13; // [417] 760
        }
        _31539 = NOVALUE;
        // SubProg Resolve_forward_references pc: 421 op: STARTLINE (58)

        /** fwdref.e:1006						switch tok[THIS_SCOPE] do*/
        // SubProg Resolve_forward_references pc: 423 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63653);
        _31541 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg Resolve_forward_references pc: 427 op: SWITCH_I (193)
        if (IS_SEQUENCE(_31541) ){
            goto L14; // [427] 756
        }
        if(!IS_ATOM_INT(_31541)){
            if( (DBL_PTR(_31541)->dbl != (eudouble) ((object) DBL_PTR(_31541)->dbl) ) ){
                goto L14; // [427] 756
            }
            _0 = (object) DBL_PTR(_31541)->dbl;
        }
        else {
            _0 = _31541;
        };
        _31541 = NOVALUE;
        switch ( _0 ){ 
            // SubProg Resolve_forward_references pc: 432 op: STARTLINE (58)

            /** fwdref.e:1007							case SC_UNDEFINED then*/
            // SubProg Resolve_forward_references pc: 434 op: CASE (186)
            case 9:
            // SubProg Resolve_forward_references pc: 436 op: STARTLINE (58)

            /** fwdref.e:1008								if ref[FR_QUALIFIED] != -1 then*/
            // SubProg Resolve_forward_references pc: 438 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31544 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 442 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _31544, -1)){
                _31544 = NOVALUE;
                goto L15; // [442] 556
            }
            _31544 = NOVALUE;
            // SubProg Resolve_forward_references pc: 446 op: STARTLINE (58)

            /** fwdref.e:1009									if ref[FR_QUALIFIED] > 0 then*/
            // SubProg Resolve_forward_references pc: 448 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31546 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 452 op: GREATER_IFW (107)
            if (binary_op_a(LESSEQ, _31546, 0)){
                _31546 = NOVALUE;
                goto L16; // [452] 517
            }
            _31546 = NOVALUE;
            // SubProg Resolve_forward_references pc: 456 op: STARTLINE (58)

            /** fwdref.e:1011										errloc = sprintf("\t\'%s\' (%s:%d) was not declared in \'%s\'.\n", */
            // SubProg Resolve_forward_references pc: 458 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31549 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 462 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 464 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31550 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 468 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37known_files_15406);
            if (!IS_ATOM_INT(_31550)){
                _31551 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31550)->dbl));
            }
            else{
                _31551 = (object)*(((s1_ptr)_2)->base + _31550);
            }
            // SubProg Resolve_forward_references pc: 472 op: PROC (27)
            Ref(_31551);
            RefDS(_21933);
            _31552 = _20abbreviate_path(_31551, _21933);
            _31551 = NOVALUE;
            // SubProg Resolve_forward_references pc: 477 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31553 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 481 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 483 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31554 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 487 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37known_files_15406);
            if (!IS_ATOM_INT(_31554)){
                _31555 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31554)->dbl));
            }
            else{
                _31555 = (object)*(((s1_ptr)_2)->base + _31554);
            }
            // SubProg Resolve_forward_references pc: 491 op: PROC (27)
            Ref(_31555);
            RefDS(_21933);
            _31556 = _20abbreviate_path(_31555, _21933);
            _31555 = NOVALUE;
            // SubProg Resolve_forward_references pc: 496 op: PROC (27)
            _31558 = _19find_replace(92, _31556, 47, 0);
            _31556 = NOVALUE;
            // SubProg Resolve_forward_references pc: 503 op: RIGHT_BRACE_N (31)
            _1 = NewS1(4);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31549);
            ((intptr_t*)_2)[1] = _31549;
            ((intptr_t*)_2)[2] = _31552;
            Ref(_31553);
            ((intptr_t*)_2)[3] = _31553;
            ((intptr_t*)_2)[4] = _31558;
            _31559 = MAKE_SEQ(_1);
            _31558 = NOVALUE;
            _31553 = NOVALUE;
            _31552 = NOVALUE;
            _31549 = NOVALUE;
            // SubProg Resolve_forward_references pc: 510 op: SPRINTF (53)
            DeRefi(_errloc_63632);
            _errloc_63632 = EPrintf(-9999999, _31548, _31559);
            DeRefDS(_31559);
            _31559 = NOVALUE;
            // SubProg Resolve_forward_references pc: 514 op: ELSE (23)
            goto L17; // [514] 759
            // SubProg Resolve_forward_references pc: 516 op: NOP1 (159)
L16: // addr: 517 pc: 516 sub: 63566 op: 159
            // SubProg Resolve_forward_references pc: 517 op: STARTLINE (58)

            /** fwdref.e:1016										errloc = sprintf("\t\'%s\' (%s:%d) is not a builtin.\n", */
            // SubProg Resolve_forward_references pc: 519 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31562 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 523 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 525 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31563 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 529 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37known_files_15406);
            if (!IS_ATOM_INT(_31563)){
                _31564 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31563)->dbl));
            }
            else{
                _31564 = (object)*(((s1_ptr)_2)->base + _31563);
            }
            // SubProg Resolve_forward_references pc: 533 op: PROC (27)
            Ref(_31564);
            RefDS(_21933);
            _31565 = _20abbreviate_path(_31564, _21933);
            _31564 = NOVALUE;
            // SubProg Resolve_forward_references pc: 538 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31566 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 542 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31562);
            ((intptr_t*)_2)[1] = _31562;
            ((intptr_t*)_2)[2] = _31565;
            Ref(_31566);
            ((intptr_t*)_2)[3] = _31566;
            _31567 = MAKE_SEQ(_1);
            _31566 = NOVALUE;
            _31565 = NOVALUE;
            _31562 = NOVALUE;
            // SubProg Resolve_forward_references pc: 548 op: SPRINTF (53)
            DeRefi(_errloc_63632);
            _errloc_63632 = EPrintf(-9999999, _31561, _31567);
            DeRefDS(_31567);
            _31567 = NOVALUE;
            // SubProg Resolve_forward_references pc: 552 op: NOP1 (159)
            // SubProg Resolve_forward_references pc: 553 op: ELSE (23)
            goto L17; // [553] 759
            // SubProg Resolve_forward_references pc: 555 op: NOP1 (159)
L15: // addr: 556 pc: 555 sub: 63566 op: 159
            // SubProg Resolve_forward_references pc: 556 op: STARTLINE (58)

            /** fwdref.e:1021									errloc = sprintf("\t\'%s\' (%s:%d) has not been declared.\n", */
            // SubProg Resolve_forward_references pc: 558 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31570 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 562 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 564 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31571 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 568 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37known_files_15406);
            if (!IS_ATOM_INT(_31571)){
                _31572 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31571)->dbl));
            }
            else{
                _31572 = (object)*(((s1_ptr)_2)->base + _31571);
            }
            // SubProg Resolve_forward_references pc: 572 op: PROC (27)
            Ref(_31572);
            RefDS(_21933);
            _31573 = _20abbreviate_path(_31572, _21933);
            _31572 = NOVALUE;
            // SubProg Resolve_forward_references pc: 577 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31574 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 581 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31570);
            ((intptr_t*)_2)[1] = _31570;
            ((intptr_t*)_2)[2] = _31573;
            Ref(_31574);
            ((intptr_t*)_2)[3] = _31574;
            _31575 = MAKE_SEQ(_1);
            _31574 = NOVALUE;
            _31573 = NOVALUE;
            _31570 = NOVALUE;
            // SubProg Resolve_forward_references pc: 587 op: SPRINTF (53)
            DeRefi(_errloc_63632);
            _errloc_63632 = EPrintf(-9999999, _31569, _31575);
            DeRefDS(_31575);
            _31575 = NOVALUE;
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
            DeRef(_syms_63715);
            _2 = (object)SEQ_PTR(_tok_63653);
            _syms_63715 = (object)*(((s1_ptr)_2)->base + _THESE_GLOBALS_63656);
            Ref(_syms_63715);
            // SubProg Resolve_forward_references pc: 604 op: SEQUENCE_CHECK (97)
            // SubProg Resolve_forward_references pc: 606 op: STARTLINE (58)

            /** fwdref.e:1026								syms = custom_sort(routine_id("file_name_based_symindex_compare"), syms,, ASCENDING)*/
            // SubProg Resolve_forward_references pc: 608 op: ROUTINE_ID (134)
            _31579 = CRoutineId(1389, 39, _31578);
            // SubProg Resolve_forward_references pc: 613 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 615 op: PROC (27)
            RefDS(_syms_63715);
            RefDS(_21933);
            _0 = _syms_63715;
            _syms_63715 = _24custom_sort(_31579, _syms_63715, _21933, 1);
            DeRefDS(_0);
            _31579 = NOVALUE;
            // SubProg Resolve_forward_references pc: 622 op: SEQUENCE_CHECK (97)
            // SubProg Resolve_forward_references pc: 624 op: STARTLINE (58)

            /** fwdref.e:1027								errloc = sprintf("\t\'%s\' (%s:%d) has been declared more than once.\n", */
            // SubProg Resolve_forward_references pc: 626 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31582 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 630 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 632 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31583 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 636 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37known_files_15406);
            if (!IS_ATOM_INT(_31583)){
                _31584 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31583)->dbl));
            }
            else{
                _31584 = (object)*(((s1_ptr)_2)->base + _31583);
            }
            // SubProg Resolve_forward_references pc: 640 op: PROC (27)
            Ref(_31584);
            RefDS(_21933);
            _31585 = _20abbreviate_path(_31584, _21933);
            _31584 = NOVALUE;
            // SubProg Resolve_forward_references pc: 645 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63637);
            _31586 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 649 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31582);
            ((intptr_t*)_2)[1] = _31582;
            ((intptr_t*)_2)[2] = _31585;
            Ref(_31586);
            ((intptr_t*)_2)[3] = _31586;
            _31587 = MAKE_SEQ(_1);
            _31586 = NOVALUE;
            _31585 = NOVALUE;
            _31582 = NOVALUE;
            // SubProg Resolve_forward_references pc: 655 op: SPRINTF (53)
            DeRefi(_errloc_63632);
            _errloc_63632 = EPrintf(-9999999, _31581, _31587);
            DeRefDS(_31587);
            _31587 = NOVALUE;
            // SubProg Resolve_forward_references pc: 659 op: STARTLINE (58)

            /** fwdref.e:1029								for si = 1 to length(syms) do*/
            // SubProg Resolve_forward_references pc: 661 op: LENGTH (42)
            if (IS_SEQUENCE(_syms_63715)){
                    _31589 = SEQ_PTR(_syms_63715)->length;
            }
            else {
                _31589 = 1;
            }
            // SubProg Resolve_forward_references pc: 664 op: FOR_I (125)
            {
                object _si_63733;
                _si_63733 = 1;
L18: // addr: 671 pc: 664 sub: 63566 op: 125
                if (_si_63733 > _31589){
                    goto L19; // [664] 750
                }
                // SubProg Resolve_forward_references pc: 671 op: STARTLINE (58)

                /** fwdref.e:1030									symtab_index s = syms[si] */
                // SubProg Resolve_forward_references pc: 673 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_syms_63715);
                _s_63736 = (object)*(((s1_ptr)_2)->base + _si_63733);
                if (!IS_ATOM_INT(_s_63736)){
                    _s_63736 = (object)DBL_PTR(_s_63736)->dbl;
                }
                // SubProg Resolve_forward_references pc: 679 op: STARTLINE (58)

                /** fwdref.e:1031									if equal(ref[FR_NAME], sym_name(s)) then*/
                // SubProg Resolve_forward_references pc: 681 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_ref_63637);
                _31591 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg Resolve_forward_references pc: 685 op: PROC (27)
                _31592 = _54sym_name(_s_63736);
                // SubProg Resolve_forward_references pc: 689 op: EQUAL (153)
                if (_31591 == _31592)
                _31593 = 1;
                else if (IS_ATOM_INT(_31591) && IS_ATOM_INT(_31592))
                _31593 = 0;
                else
                _31593 = (compare(_31591, _31592) == 0);
                _31591 = NOVALUE;
                DeRef(_31592);
                _31592 = NOVALUE;
                // SubProg Resolve_forward_references pc: 693 op: IF (20)
                if (_31593 == 0)
                {
                    _31593 = NOVALUE;
                    goto L1A; // [693] 741
                }
                else{
                    _31593 = NOVALUE;
                }
                // SubProg Resolve_forward_references pc: 696 op: STARTLINE (58)

                /** fwdref.e:1032										errloc &= sprintf("\t\tin %s\n", */
                // SubProg Resolve_forward_references pc: 698 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 700 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 702 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _31595 = (object)*(((s1_ptr)_2)->base + _s_63736);
                // SubProg Resolve_forward_references pc: 706 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 708 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_31595);
                if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
                    _31596 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
                }
                else{
                    _31596 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
                }
                _31595 = NOVALUE;
                // SubProg Resolve_forward_references pc: 712 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37known_files_15406);
                if (!IS_ATOM_INT(_31596)){
                    _31597 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31596)->dbl));
                }
                else{
                    _31597 = (object)*(((s1_ptr)_2)->base + _31596);
                }
                // SubProg Resolve_forward_references pc: 716 op: PROC (27)
                Ref(_31597);
                RefDS(_21933);
                _31598 = _20abbreviate_path(_31597, _21933);
                _31597 = NOVALUE;
                // SubProg Resolve_forward_references pc: 721 op: PROC (27)
                _31599 = _19find_replace(92, _31598, 47, 0);
                _31598 = NOVALUE;
                // SubProg Resolve_forward_references pc: 728 op: RIGHT_BRACE_N (31)
                _1 = NewS1(1);
                _2 = (object)((s1_ptr)_1)->base;
                ((intptr_t*)_2)[1] = _31599;
                _31600 = MAKE_SEQ(_1);
                _31599 = NOVALUE;
                // SubProg Resolve_forward_references pc: 732 op: SPRINTF (53)
                _31601 = EPrintf(-9999999, _31594, _31600);
                DeRefDS(_31600);
                _31600 = NOVALUE;
                // SubProg Resolve_forward_references pc: 736 op: CONCAT (15)
                Concat((object_ptr)&_errloc_63632, _errloc_63632, _31601);
                DeRefDS(_31601);
                _31601 = NOVALUE;
                // SubProg Resolve_forward_references pc: 740 op: NOP1 (159)
L1A: // addr: 741 pc: 740 sub: 63566 op: 159
                // SubProg Resolve_forward_references pc: 741 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var s_63736
                // SubProg Resolve_forward_references pc: 743 op: STARTLINE (58)

                /** fwdref.e:1035								end for*/
                // SubProg Resolve_forward_references pc: 745 op: ENDFOR_INT_UP1 (54)
                _si_63733 = _si_63733 + 1;
                goto L18; // [745] 671
L19: // addr: 750 pc: 745 sub: 63566 op: 54
                ;
            }
            // SubProg Resolve_forward_references pc: 750 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var syms_63715
            DeRef(_syms_63715);
            _syms_63715 = NOVALUE;
            // SubProg Resolve_forward_references pc: 752 op: ELSE (23)
            goto L17; // [752] 759
            // SubProg Resolve_forward_references pc: 754 op: STARTLINE (58)

            /** fwdref.e:1036							case else */
            // SubProg Resolve_forward_references pc: 756 op: CASE (186)
            default:
L14: // addr: 756 pc: 756 sub: 63566 op: 186
            // SubProg Resolve_forward_references pc: 758 op: NOPSWITCH (187)
        ;}L17: // addr: 759 pc: 758 sub: 63566 op: 187
        // SubProg Resolve_forward_references pc: 759 op: NOP1 (159)
L13: // addr: 760 pc: 759 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 760 op: STARTLINE (58)

        /** fwdref.e:1040					if not match(errloc, msg) then*/
        // SubProg Resolve_forward_references pc: 762 op: MATCH_FROM (177)
        _31603 = e_match_from(_errloc_63632, _msg_63631, 1);
        // SubProg Resolve_forward_references pc: 767 op: NOT_IFW (108)
        if (_31603 != 0)
        goto L1B; // [767] 786
        _31603 = NOVALUE;
        // SubProg Resolve_forward_references pc: 770 op: STARTLINE (58)

        /** fwdref.e:1041						msg &= errloc*/
        // SubProg Resolve_forward_references pc: 772 op: CONCAT (15)
        Concat((object_ptr)&_msg_63631, _msg_63631, _errloc_63632);
        // SubProg Resolve_forward_references pc: 776 op: STARTLINE (58)

        /** fwdref.e:1042						prep_forward_error( errors[e] )*/
        // SubProg Resolve_forward_references pc: 778 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_errors_63569);
        _31606 = (object)*(((s1_ptr)_2)->base + _e_63635);
        // SubProg Resolve_forward_references pc: 782 op: PROC (27)
        Ref(_31606);
        _39prep_forward_error(_31606);
        _31606 = NOVALUE;
        // SubProg Resolve_forward_references pc: 785 op: NOP1 (159)
L1B: // addr: 786 pc: 785 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 786 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tok_63653
        DeRef(_tok_63653);
        _tok_63653 = NOVALUE;

// block var THIS_SCOPE_63655

// block var THESE_GLOBALS_63656
        // SubProg Resolve_forward_references pc: 788 op: NOP1 (159)
L12: // addr: 789 pc: 788 sub: 63566 op: 159
        // SubProg Resolve_forward_references pc: 789 op: STARTLINE (58)

        /** fwdref.e:1045				ThisLine    = ref[FR_THISLINE]*/
        // SubProg Resolve_forward_references pc: 791 op: RHS_SUBS (25)
        DeRef(_50ThisLine_48707);
        _2 = (object)SEQ_PTR(_ref_63637);
        _50ThisLine_48707 = (object)*(((s1_ptr)_2)->base + 7);
        Ref(_50ThisLine_48707);
        // SubProg Resolve_forward_references pc: 795 op: STARTLINE (58)

        /** fwdref.e:1046				bp          = ref[FR_BP]*/
        // SubProg Resolve_forward_references pc: 797 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63637);
        _50bp_48711 = (object)*(((s1_ptr)_2)->base + 8);
        if (!IS_ATOM_INT(_50bp_48711)){
            _50bp_48711 = (object)DBL_PTR(_50bp_48711)->dbl;
        }
        // SubProg Resolve_forward_references pc: 803 op: STARTLINE (58)

        /** fwdref.e:1047				CurrentSub  = ref[FR_SUBPROG]*/
        // SubProg Resolve_forward_references pc: 805 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63637);
        _36CurrentSub_16444 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_36CurrentSub_16444)){
            _36CurrentSub_16444 = (object)DBL_PTR(_36CurrentSub_16444)->dbl;
        }
        // SubProg Resolve_forward_references pc: 811 op: STARTLINE (58)

        /** fwdref.e:1048				line_number = ref[FR_LINE]*/
        // SubProg Resolve_forward_references pc: 813 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63637);
        _36line_number_16437 = (object)*(((s1_ptr)_2)->base + 6);
        if (!IS_ATOM_INT(_36line_number_16437)){
            _36line_number_16437 = (object)DBL_PTR(_36line_number_16437)->dbl;
        }
        // SubProg Resolve_forward_references pc: 819 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ref_63637
        DeRefDS(_ref_63637);
        _ref_63637 = NOVALUE;
        // SubProg Resolve_forward_references pc: 821 op: STARTLINE (58)

        /** fwdref.e:1049			end for*/
        // SubProg Resolve_forward_references pc: 823 op: ENDFOR_GENERAL (39)
L11: // addr: 823 pc: 823 sub: 63566 op: 39
        _e_63635 = _e_63635 + -1;
        goto LC; // [823] 319
LD: // addr: 828 pc: 823 sub: 63566 op: 39
        ;
    }
    // SubProg Resolve_forward_references pc: 828 op: STARTLINE (58)

    /** fwdref.e:1050			if length(msg) > 0 then*/
    // SubProg Resolve_forward_references pc: 830 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_63631)){
            _31611 = SEQ_PTR(_msg_63631)->length;
    }
    else {
        _31611 = 1;
    }
    // SubProg Resolve_forward_references pc: 833 op: GREATER_IFW_I (124)
    if (_31611 <= 0)
    goto L1C; // [833] 849
    // SubProg Resolve_forward_references pc: 837 op: STARTLINE (58)

    /** fwdref.e:1051				CompileErr( 74, {msg} )*/
    // SubProg Resolve_forward_references pc: 839 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_msg_63631);
    ((intptr_t*)_2)[1] = _msg_63631;
    _31614 = MAKE_SEQ(_1);
    // SubProg Resolve_forward_references pc: 843 op: PROC (27)
    _50CompileErr(74, _31614, 0);
    _31614 = NOVALUE;
    // SubProg Resolve_forward_references pc: 848 op: NOP1 (159)
L1C: // addr: 849 pc: 848 sub: 63566 op: 159
    // SubProg Resolve_forward_references pc: 849 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var msg_63631
    DeRefi(_msg_63631);
    _msg_63631 = NOVALUE;

// block var errloc_63632
    DeRefi(_errloc_63632);
    _errloc_63632 = NOVALUE;
    // SubProg Resolve_forward_references pc: 851 op: ELSE (23)
    goto L1D; // [851] 899
    // SubProg Resolve_forward_references pc: 853 op: NOP1 (159)
LB: // addr: 854 pc: 853 sub: 63566 op: 159
    // SubProg Resolve_forward_references pc: 854 op: STARTLINE (58)

    /** fwdref.e:1053		elsif report_errors and not repl then*/
    // SubProg Resolve_forward_references pc: 856 op: SC1_AND_IF (146)
    if (_report_errors_63568 == 0) {
        goto L1E; // [856] 898
    }
    // SubProg Resolve_forward_references pc: 860 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 862 op: NOT (7)
    _31616 = (0 == 0);
    // SubProg Resolve_forward_references pc: 865 op: NOP1 (159)
    // SubProg Resolve_forward_references pc: 866 op: IF (20)
    if (_31616 == 0)
    {
        DeRef(_31616);
        _31616 = NOVALUE;
        goto L1E; // [866] 898
    }
    else{
        DeRef(_31616);
        _31616 = NOVALUE;
    }
    // SubProg Resolve_forward_references pc: 869 op: STARTLINE (58)

    /** fwdref.e:1055			forward_references  = {}*/
    // SubProg Resolve_forward_references pc: 871 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39forward_references_62120);
    _39forward_references_62120 = _21933;
    // SubProg Resolve_forward_references pc: 874 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 876 op: STARTLINE (58)

    /** fwdref.e:1056			active_references   = {}*/
    // SubProg Resolve_forward_references pc: 878 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39active_references_62122);
    _39active_references_62122 = _21933;
    // SubProg Resolve_forward_references pc: 881 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 883 op: STARTLINE (58)

    /** fwdref.e:1057			toplevel_references = {}*/
    // SubProg Resolve_forward_references pc: 885 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39toplevel_references_62123);
    _39toplevel_references_62123 = _21933;
    // SubProg Resolve_forward_references pc: 888 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 890 op: STARTLINE (58)

    /** fwdref.e:1058			inactive_references = {}*/
    // SubProg Resolve_forward_references pc: 892 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_39inactive_references_62124);
    _39inactive_references_62124 = _21933;
    // SubProg Resolve_forward_references pc: 895 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 897 op: NOP1 (159)
L1E: // addr: 898 pc: 897 sub: 63566 op: 159
    // SubProg Resolve_forward_references pc: 898 op: NOP1 (159)
L1D: // addr: 899 pc: 898 sub: 63566 op: 159
    // SubProg Resolve_forward_references pc: 899 op: STARTLINE (58)

    /** fwdref.e:1060		clear_last()*/
    // SubProg Resolve_forward_references pc: 901 op: PROC (27)
    _47clear_last();
    // SubProg Resolve_forward_references pc: 903 op: STARTLINE (58)

    /** fwdref.e:1061	end procedure*/
    // SubProg Resolve_forward_references pc: 905 op: RETURNP (29)

// Exiting block BLOCK: Resolve_forward_references

// block var report_errors_63568

// block var errors_63569
    DeRef(_errors_63569);

// block var unincluded_ok_63570
    _31528 = NOVALUE;
    _31596 = NOVALUE;
    _31554 = NOVALUE;
    _31571 = NOVALUE;
    DeRef(_31511);
    _31511 = NOVALUE;
    _31513 = NOVALUE;
    _31508 = NOVALUE;
    DeRef(_31531);
    _31531 = NOVALUE;
    _31505 = NOVALUE;
    _31515 = NOVALUE;
    _31583 = NOVALUE;
    _31550 = NOVALUE;
    _31563 = NOVALUE;
    DeRef(_31534);
    _31534 = NOVALUE;
    return;
    // SubProg Resolve_forward_references pc: 908 op: BADRETURNF (43)
    ;
}


void _39shift_these(object _refs_63784, object _pc_63785, object _amount_63786)
{
    object _fr_63790 = NOVALUE;
    object _31634 = NOVALUE; // 63811 31634
    object _31633 = NOVALUE; // 63810 31633
    object _31632 = NOVALUE; // 63809 31632
    object _31631 = NOVALUE; // 63808 31631
    object _31630 = NOVALUE; // 63807 31630
    object _31629 = NOVALUE; // 63806 31629
    object _31628 = NOVALUE; // 63805 31628
    object _31627 = NOVALUE; // 63803 31627
    object _31626 = NOVALUE; // 63801 31626
    object _31625 = NOVALUE; // 63800 31625
// skipping _31624  name type: 0
    object _31623 = NOVALUE; // 63798 31623
// skipping _31622  name type: 0
    object _31621 = NOVALUE; // 63795 31621
    object _31620 = NOVALUE; // 63793 31620
// skipping _31619  name type: 0
    object _31618 = NOVALUE; // 63791 31618
    object _31617 = NOVALUE; // 63789 31617
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_these pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg shift_these pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_these pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift_these pc: 7 op: STARTLINE (58)

    /** fwdref.e:1064		for i = length( refs ) to 1 by -1 do*/
    // SubProg shift_these pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63784)){
            _31617 = SEQ_PTR(_refs_63784)->length;
    }
    else {
        _31617 = 1;
    }
    // SubProg shift_these pc: 12 op: FOR_I (125)
    {
        object _i_63788;
        _i_63788 = _31617;
L1: // addr: 19 pc: 12 sub: 63782 op: 125
        if (_i_63788 < 1){
            goto L2; // [12] 147
        }
        // SubProg shift_these pc: 19 op: STARTLINE (58)

        /** fwdref.e:1065			sequence fr = forward_references[refs[i]]*/
        // SubProg shift_these pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63784);
        _31618 = (object)*(((s1_ptr)_2)->base + _i_63788);
        // SubProg shift_these pc: 27 op: RHS_SUBS (25)
        DeRef(_fr_63790);
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!IS_ATOM_INT(_31618)){
            _fr_63790 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31618)->dbl));
        }
        else{
            _fr_63790 = (object)*(((s1_ptr)_2)->base + _31618);
        }
        Ref(_fr_63790);
        // SubProg shift_these pc: 31 op: SEQUENCE_CHECK (97)
        // SubProg shift_these pc: 33 op: STARTLINE (58)

        /** fwdref.e:1066			forward_references[refs[i]] = 0*/
        // SubProg shift_these pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63784);
        _31620 = (object)*(((s1_ptr)_2)->base + _i_63788);
        // SubProg shift_these pc: 41 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39forward_references_62120 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31620))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31620)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31620);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg shift_these pc: 45 op: STARTLINE (58)

        /** fwdref.e:1067			if fr[FR_SUBPROG] = shifting_sub then*/
        // SubProg shift_these pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63790);
        _31621 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg shift_these pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 53 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31621, _39shifting_sub_62149)){
            _31621 = NOVALUE;
            goto L3; // [53] 126
        }
        _31621 = NOVALUE;
        // SubProg shift_these pc: 57 op: STARTLINE (58)

        /** fwdref.e:1068				if fr[FR_PC] >= pc then*/
        // SubProg shift_these pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63790);
        _31623 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_these pc: 63 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _31623, _pc_63785)){
            _31623 = NOVALUE;
            goto L4; // [63] 125
        }
        _31623 = NOVALUE;
        // SubProg shift_these pc: 67 op: STARTLINE (58)

        /** fwdref.e:1069					fr[FR_PC] += amount*/
        // SubProg shift_these pc: 69 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63790);
        _31625 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_these pc: 73 op: PLUS (11)
        if (IS_ATOM_INT(_31625)) {
            _31626 = _31625 + _amount_63786;
            if ((object)((uintptr_t)_31626 + (uintptr_t)HIGH_BITS) >= 0){
                _31626 = NewDouble((eudouble)_31626);
            }
        }
        else {
            _31626 = binary_op(PLUS, _31625, _amount_63786);
        }
        _31625 = NOVALUE;
        // SubProg shift_these pc: 77 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63790);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63790 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31626;
        if( _1 != _31626 ){
            DeRef(_1);
        }
        _31626 = NOVALUE;
        // SubProg shift_these pc: 81 op: STARTLINE (58)

        /** fwdref.e:1070					if fr[FR_TYPE] = CASE*/
        // SubProg shift_these pc: 83 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63790);
        _31627 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg shift_these pc: 87 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 89 op: EQUALS (3)
        if (IS_ATOM_INT(_31627)) {
            _31628 = (_31627 == 186);
        }
        else {
            _31628 = binary_op(EQUALS, _31627, 186);
        }
        _31627 = NOVALUE;
        // SubProg shift_these pc: 93 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31628)) {
            if (_31628 == 0) {
                goto L5; // [93] 124
            }
        }
        else {
            if (DBL_PTR(_31628)->dbl == 0.0) {
                goto L5; // [93] 124
            }
        }
        // SubProg shift_these pc: 97 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63790);
        _31630 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_these pc: 101 op: GREATEREQ (2)
        if (IS_ATOM_INT(_31630)) {
            _31631 = (_31630 >= _pc_63785);
        }
        else {
            _31631 = binary_op(GREATEREQ, _31630, _pc_63785);
        }
        _31630 = NOVALUE;
        // SubProg shift_these pc: 105 op: NOP1 (159)
        // SubProg shift_these pc: 106 op: IF (20)
        if (_31631 == 0) {
            DeRef(_31631);
            _31631 = NOVALUE;
            goto L5; // [106] 124
        }
        else {
            if (!IS_ATOM_INT(_31631) && DBL_PTR(_31631)->dbl == 0.0){
                DeRef(_31631);
                _31631 = NOVALUE;
                goto L5; // [106] 124
            }
            DeRef(_31631);
            _31631 = NOVALUE;
        }
        DeRef(_31631);
        _31631 = NOVALUE;
        // SubProg shift_these pc: 109 op: STARTLINE (58)

        /** fwdref.e:1073						fr[FR_DATA] += amount*/
        // SubProg shift_these pc: 111 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63790);
        _31632 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_these pc: 115 op: PLUS (11)
        if (IS_ATOM_INT(_31632)) {
            _31633 = _31632 + _amount_63786;
            if ((object)((uintptr_t)_31633 + (uintptr_t)HIGH_BITS) >= 0){
                _31633 = NewDouble((eudouble)_31633);
            }
        }
        else {
            _31633 = binary_op(PLUS, _31632, _amount_63786);
        }
        _31632 = NOVALUE;
        // SubProg shift_these pc: 119 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63790);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63790 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31633;
        if( _1 != _31633 ){
            DeRef(_1);
        }
        _31633 = NOVALUE;
        // SubProg shift_these pc: 123 op: NOP1 (159)
L5: // addr: 124 pc: 123 sub: 63782 op: 159
        // SubProg shift_these pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 63782 op: 159
        // SubProg shift_these pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 63782 op: 159
        // SubProg shift_these pc: 126 op: STARTLINE (58)

        /** fwdref.e:1077			forward_references[refs[i]] = fr*/
        // SubProg shift_these pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 130 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63784);
        _31634 = (object)*(((s1_ptr)_2)->base + _i_63788);
        // SubProg shift_these pc: 134 op: ASSIGN_SUBS (16)
        RefDS(_fr_63790);
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39forward_references_62120 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31634))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31634)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31634);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63790;
        DeRef(_1);
        // SubProg shift_these pc: 138 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fr_63790
        DeRefDS(_fr_63790);
        _fr_63790 = NOVALUE;
        // SubProg shift_these pc: 140 op: STARTLINE (58)

        /** fwdref.e:1078		end for*/
        // SubProg shift_these pc: 142 op: ENDFOR_GENERAL (39)
        _i_63788 = _i_63788 + -1;
        goto L1; // [142] 19
L2: // addr: 147 pc: 142 sub: 63782 op: 39
        ;
    }
    // SubProg shift_these pc: 147 op: STARTLINE (58)

    /** fwdref.e:1079	end procedure*/
    // SubProg shift_these pc: 149 op: RETURNP (29)

// Exiting block BLOCK: shift_these

// block var refs_63784
    DeRefDS(_refs_63784);

// block var pc_63785

// block var amount_63786
    _31618 = NOVALUE;
    DeRef(_31628);
    _31628 = NOVALUE;
    _31620 = NOVALUE;
    _31634 = NOVALUE;
    return;
    // SubProg shift_these pc: 152 op: BADRETURNF (43)
    ;
}


void _39shift_top(object _refs_63814, object _pc_63815, object _amount_63816)
{
    object _fr_63820 = NOVALUE;
    object _31650 = NOVALUE; // 63838 31650
    object _31649 = NOVALUE; // 63837 31649
    object _31648 = NOVALUE; // 63836 31648
    object _31647 = NOVALUE; // 63835 31647
    object _31646 = NOVALUE; // 63834 31646
    object _31645 = NOVALUE; // 63833 31645
    object _31644 = NOVALUE; // 63832 31644
    object _31643 = NOVALUE; // 63830 31643
    object _31642 = NOVALUE; // 63828 31642
    object _31641 = NOVALUE; // 63827 31641
// skipping _31640  name type: 0
    object _31639 = NOVALUE; // 63825 31639
    object _31638 = NOVALUE; // 63823 31638
// skipping _31637  name type: 0
    object _31636 = NOVALUE; // 63821 31636
    object _31635 = NOVALUE; // 63819 31635
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_top pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg shift_top pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_top pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift_top pc: 7 op: STARTLINE (58)

    /** fwdref.e:1083		for i = length( refs ) to 1 by -1 do*/
    // SubProg shift_top pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63814)){
            _31635 = SEQ_PTR(_refs_63814)->length;
    }
    else {
        _31635 = 1;
    }
    // SubProg shift_top pc: 12 op: FOR_I (125)
    {
        object _i_63818;
        _i_63818 = _31635;
L1: // addr: 19 pc: 12 sub: 63812 op: 125
        if (_i_63818 < 1){
            goto L2; // [12] 134
        }
        // SubProg shift_top pc: 19 op: STARTLINE (58)

        /** fwdref.e:1084			sequence fr = forward_references[refs[i]]*/
        // SubProg shift_top pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63814);
        _31636 = (object)*(((s1_ptr)_2)->base + _i_63818);
        // SubProg shift_top pc: 27 op: RHS_SUBS (25)
        DeRef(_fr_63820);
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!IS_ATOM_INT(_31636)){
            _fr_63820 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31636)->dbl));
        }
        else{
            _fr_63820 = (object)*(((s1_ptr)_2)->base + _31636);
        }
        Ref(_fr_63820);
        // SubProg shift_top pc: 31 op: SEQUENCE_CHECK (97)
        // SubProg shift_top pc: 33 op: STARTLINE (58)

        /** fwdref.e:1085			forward_references[refs[i]] = 0*/
        // SubProg shift_top pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63814);
        _31638 = (object)*(((s1_ptr)_2)->base + _i_63818);
        // SubProg shift_top pc: 41 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39forward_references_62120 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31638))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31638)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31638);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg shift_top pc: 45 op: STARTLINE (58)

        /** fwdref.e:1086			if fr[FR_PC] >= pc then*/
        // SubProg shift_top pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63820);
        _31639 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_top pc: 51 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _31639, _pc_63815)){
            _31639 = NOVALUE;
            goto L3; // [51] 113
        }
        _31639 = NOVALUE;
        // SubProg shift_top pc: 55 op: STARTLINE (58)

        /** fwdref.e:1087				fr[FR_PC] += amount*/
        // SubProg shift_top pc: 57 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63820);
        _31641 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_top pc: 61 op: PLUS (11)
        if (IS_ATOM_INT(_31641)) {
            _31642 = _31641 + _amount_63816;
            if ((object)((uintptr_t)_31642 + (uintptr_t)HIGH_BITS) >= 0){
                _31642 = NewDouble((eudouble)_31642);
            }
        }
        else {
            _31642 = binary_op(PLUS, _31641, _amount_63816);
        }
        _31641 = NOVALUE;
        // SubProg shift_top pc: 65 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63820);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63820 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31642;
        if( _1 != _31642 ){
            DeRef(_1);
        }
        _31642 = NOVALUE;
        // SubProg shift_top pc: 69 op: STARTLINE (58)

        /** fwdref.e:1088				if fr[FR_TYPE] = CASE*/
        // SubProg shift_top pc: 71 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63820);
        _31643 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg shift_top pc: 75 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 77 op: EQUALS (3)
        if (IS_ATOM_INT(_31643)) {
            _31644 = (_31643 == 186);
        }
        else {
            _31644 = binary_op(EQUALS, _31643, 186);
        }
        _31643 = NOVALUE;
        // SubProg shift_top pc: 81 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31644)) {
            if (_31644 == 0) {
                goto L4; // [81] 112
            }
        }
        else {
            if (DBL_PTR(_31644)->dbl == 0.0) {
                goto L4; // [81] 112
            }
        }
        // SubProg shift_top pc: 85 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63820);
        _31646 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_top pc: 89 op: GREATEREQ (2)
        if (IS_ATOM_INT(_31646)) {
            _31647 = (_31646 >= _pc_63815);
        }
        else {
            _31647 = binary_op(GREATEREQ, _31646, _pc_63815);
        }
        _31646 = NOVALUE;
        // SubProg shift_top pc: 93 op: NOP1 (159)
        // SubProg shift_top pc: 94 op: IF (20)
        if (_31647 == 0) {
            DeRef(_31647);
            _31647 = NOVALUE;
            goto L4; // [94] 112
        }
        else {
            if (!IS_ATOM_INT(_31647) && DBL_PTR(_31647)->dbl == 0.0){
                DeRef(_31647);
                _31647 = NOVALUE;
                goto L4; // [94] 112
            }
            DeRef(_31647);
            _31647 = NOVALUE;
        }
        DeRef(_31647);
        _31647 = NOVALUE;
        // SubProg shift_top pc: 97 op: STARTLINE (58)

        /** fwdref.e:1091					fr[FR_DATA] += amount*/
        // SubProg shift_top pc: 99 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63820);
        _31648 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_top pc: 103 op: PLUS (11)
        if (IS_ATOM_INT(_31648)) {
            _31649 = _31648 + _amount_63816;
            if ((object)((uintptr_t)_31649 + (uintptr_t)HIGH_BITS) >= 0){
                _31649 = NewDouble((eudouble)_31649);
            }
        }
        else {
            _31649 = binary_op(PLUS, _31648, _amount_63816);
        }
        _31648 = NOVALUE;
        // SubProg shift_top pc: 107 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63820);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63820 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31649;
        if( _1 != _31649 ){
            DeRef(_1);
        }
        _31649 = NOVALUE;
        // SubProg shift_top pc: 111 op: NOP1 (159)
L4: // addr: 112 pc: 111 sub: 63812 op: 159
        // SubProg shift_top pc: 112 op: NOP1 (159)
L3: // addr: 113 pc: 112 sub: 63812 op: 159
        // SubProg shift_top pc: 113 op: STARTLINE (58)

        /** fwdref.e:1094			forward_references[refs[i]] = fr*/
        // SubProg shift_top pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 117 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63814);
        _31650 = (object)*(((s1_ptr)_2)->base + _i_63818);
        // SubProg shift_top pc: 121 op: ASSIGN_SUBS (16)
        RefDS(_fr_63820);
        _2 = (object)SEQ_PTR(_39forward_references_62120);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39forward_references_62120 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31650))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31650)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31650);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63820;
        DeRef(_1);
        // SubProg shift_top pc: 125 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fr_63820
        DeRefDS(_fr_63820);
        _fr_63820 = NOVALUE;
        // SubProg shift_top pc: 127 op: STARTLINE (58)

        /** fwdref.e:1095		end for*/
        // SubProg shift_top pc: 129 op: ENDFOR_GENERAL (39)
        _i_63818 = _i_63818 + -1;
        goto L1; // [129] 19
L2: // addr: 134 pc: 129 sub: 63812 op: 39
        ;
    }
    // SubProg shift_top pc: 134 op: STARTLINE (58)

    /** fwdref.e:1096	end procedure*/
    // SubProg shift_top pc: 136 op: RETURNP (29)

// Exiting block BLOCK: shift_top

// block var refs_63814
    DeRefDS(_refs_63814);

// block var pc_63815

// block var amount_63816
    DeRef(_31644);
    _31644 = NOVALUE;
    _31638 = NOVALUE;
    _31650 = NOVALUE;
    _31636 = NOVALUE;
    return;
    // SubProg shift_top pc: 139 op: BADRETURNF (43)
    ;
}


void _39shift_fwd_refs(object _pc_63841, object _amount_63842)
{
    object _file_63853 = NOVALUE;
    object _sp_63858 = NOVALUE;
    object _31660 = NOVALUE; // 63862 31660
    object _31659 = NOVALUE; // 63861 31659
// skipping _31658  name type: 0
    object _31657 = NOVALUE; // 63859 31657
// skipping _31656  name type: 0
    object _31655 = NOVALUE; // 63855 31655
    object _31654 = NOVALUE; // 63851 31654
    object _31653 = NOVALUE; // 63850 31653
// skipping _31652  name type: 0
// skipping _31651  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_fwd_refs pc: 1 op: INTEGER_CHECK (96)
    // SubProg shift_fwd_refs pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_fwd_refs pc: 5 op: STARTLINE (58)

    /** fwdref.e:1099		if not shifting_sub then*/
    // SubProg shift_fwd_refs pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 9 op: NOT_IFW (108)
    if (_39shifting_sub_62149 != 0)
    goto L1; // [9] 18
    // SubProg shift_fwd_refs pc: 12 op: STARTLINE (58)

    /** fwdref.e:1100			return*/
    // SubProg shift_fwd_refs pc: 14 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: shift_fwd_refs

// block var pc_63841

// block var amount_63842
    return;
    // SubProg shift_fwd_refs pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 63839 op: 159
    // SubProg shift_fwd_refs pc: 18 op: STARTLINE (58)

    /** fwdref.e:1103		if shifting_sub = TopLevelSub then*/
    // SubProg shift_fwd_refs pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 24 op: EQUALS_IFW (104)
    if (_39shifting_sub_62149 != _36TopLevelSub_16443)
    goto L2; // [24] 65
    // SubProg shift_fwd_refs pc: 28 op: STARTLINE (58)

    /** fwdref.e:1104			for file = 1 to length( toplevel_references ) do*/
    // SubProg shift_fwd_refs pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_39toplevel_references_62123)){
            _31653 = SEQ_PTR(_39toplevel_references_62123)->length;
    }
    else {
        _31653 = 1;
    }
    // SubProg shift_fwd_refs pc: 35 op: FOR_I (125)
    {
        object _file_63849;
        _file_63849 = 1;
L3: // addr: 42 pc: 35 sub: 63839 op: 125
        if (_file_63849 > _31653){
            goto L4; // [35] 62
        }
        // SubProg shift_fwd_refs pc: 42 op: STARTLINE (58)

        /** fwdref.e:1105				shift_top( toplevel_references[file], pc, amount )*/
        // SubProg shift_fwd_refs pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_fwd_refs pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_39toplevel_references_62123);
        _31654 = (object)*(((s1_ptr)_2)->base + _file_63849);
        // SubProg shift_fwd_refs pc: 50 op: PROC (27)
        Ref(_31654);
        _39shift_top(_31654, _pc_63841, _amount_63842);
        _31654 = NOVALUE;
        // SubProg shift_fwd_refs pc: 55 op: STARTLINE (58)

        /** fwdref.e:1106			end for*/
        // SubProg shift_fwd_refs pc: 57 op: ENDFOR_INT_UP1 (54)
        _file_63849 = _file_63849 + 1;
        goto L3; // [57] 42
L4: // addr: 62 pc: 57 sub: 63839 op: 54
        ;
    }
    // SubProg shift_fwd_refs pc: 62 op: ELSE (23)
    goto L5; // [62] 118
    // SubProg shift_fwd_refs pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 63839 op: 159
    // SubProg shift_fwd_refs pc: 65 op: STARTLINE (58)

    /** fwdref.e:1108			integer file = SymTab[shifting_sub][S_FILE_NO]*/
    // SubProg shift_fwd_refs pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _31655 = (object)*(((s1_ptr)_2)->base + _39shifting_sub_62149);
    // SubProg shift_fwd_refs pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31655);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _file_63853 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _file_63853 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_file_63853)){
        _file_63853 = (object)DBL_PTR(_file_63853)->dbl;
    }
    _31655 = NOVALUE;
    // SubProg shift_fwd_refs pc: 83 op: STARTLINE (58)

    /** fwdref.e:1109			integer sp   = find( shifting_sub, active_subprogs[file] )*/
    // SubProg shift_fwd_refs pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_subprogs_62121);
    _31657 = (object)*(((s1_ptr)_2)->base + _file_63853);
    // SubProg shift_fwd_refs pc: 93 op: FIND_FROM (176)
    _sp_63858 = find_from(_39shifting_sub_62149, _31657, 1);
    _31657 = NOVALUE;
    // SubProg shift_fwd_refs pc: 98 op: STARTLINE (58)

    /** fwdref.e:1110			shift_these( active_references[file][sp], pc, amount )*/
    // SubProg shift_fwd_refs pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 102 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_39active_references_62122);
    _31659 = (object)*(((s1_ptr)_2)->base + _file_63853);
    // SubProg shift_fwd_refs pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31659);
    _31660 = (object)*(((s1_ptr)_2)->base + _sp_63858);
    _31659 = NOVALUE;
    // SubProg shift_fwd_refs pc: 110 op: PROC (27)
    Ref(_31660);
    _39shift_these(_31660, _pc_63841, _amount_63842);
    _31660 = NOVALUE;
    // SubProg shift_fwd_refs pc: 115 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var file_63853

// block var sp_63858
    // SubProg shift_fwd_refs pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 63839 op: 159
    // SubProg shift_fwd_refs pc: 118 op: STARTLINE (58)

    /** fwdref.e:1112	end procedure*/
    // SubProg shift_fwd_refs pc: 120 op: RETURNP (29)

// Exiting block BLOCK: shift_fwd_refs

// block var pc_63841

// block var amount_63842
    return;
    // SubProg shift_fwd_refs pc: 123 op: BADRETURNF (43)
    ;
}



// 0x9CB29FBF
