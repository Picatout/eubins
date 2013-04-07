// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _30clear_fwd_refs()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg clear_fwd_refs pc: 1 op: STARTLINE (58)

    /** fwdref.e:70		fwdref_count = 0*/
    // SubProg clear_fwd_refs pc: 3 op: ASSIGN_I (113)
    _30fwdref_count_62250 = 0;
    // SubProg clear_fwd_refs pc: 6 op: STARTLINE (58)

    /** fwdref.e:71	end procedure*/
    // SubProg clear_fwd_refs pc: 8 op: RETURNP (29)

// Exiting block BLOCK: clear_fwd_refs
    return;
    // SubProg clear_fwd_refs pc: 11 op: BADRETURNF (43)
    ;
}


object _30get_fwdref_count()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_fwdref_count pc: 1 op: STARTLINE (58)

    /** fwdref.e:74		return fwdref_count*/
    // SubProg get_fwdref_count pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_fwdref_count pc: 5 op: RETURNF (28)

// Exiting block BLOCK: get_fwdref_count
    return _30fwdref_count_62250;
    // SubProg get_fwdref_count pc: 9 op: BADRETURNF (43)
    ;
}


void _30set_glabel_block(object _ref_62257, object _block_62259)
{
    object _30913 = NOVALUE; // 62263 30913
    object _30912 = NOVALUE; // 62262 30912
// skipping _30911  name type: 0
    object _30910 = NOVALUE; // 62260 30910
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_glabel_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62257)) {
        _1 = (object)(DBL_PTR(_ref_62257)->dbl);
        DeRefDS(_ref_62257);
        _ref_62257 = _1;
    }
    // SubProg set_glabel_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_block_62259)) {
        _1 = (object)(DBL_PTR(_block_62259)->dbl);
        DeRefDS(_block_62259);
        _block_62259 = _1;
    }
    // SubProg set_glabel_block pc: 5 op: STARTLINE (58)

    /** fwdref.e:78		forward_references[ref][FR_DATA] &= block*/
    // SubProg set_glabel_block pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_glabel_block pc: 9 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62257 + ((s1_ptr)_2)->base);
    // SubProg set_glabel_block pc: 14 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _30912 = (object)*(((s1_ptr)_2)->base + 12);
    _30910 = NOVALUE;
    // SubProg set_glabel_block pc: 18 op: CONCAT (15)
    if (IS_SEQUENCE(_30912) && IS_ATOM(_block_62259)) {
        Append(&_30913, _30912, _block_62259);
    }
    else if (IS_ATOM(_30912) && IS_SEQUENCE(_block_62259)) {
    }
    else {
        Concat((object_ptr)&_30913, _30912, _block_62259);
        _30912 = NOVALUE;
    }
    _30912 = NOVALUE;
    // SubProg set_glabel_block pc: 22 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30913;
    if( _1 != _30913 ){
        DeRef(_1);
    }
    _30913 = NOVALUE;
    _30910 = NOVALUE;
    // SubProg set_glabel_block pc: 26 op: STARTLINE (58)

    /** fwdref.e:79	end procedure*/
    // SubProg set_glabel_block pc: 28 op: RETURNP (29)

// Exiting block BLOCK: set_glabel_block

// block var ref_62257

// block var block_62259
    return;
    // SubProg set_glabel_block pc: 31 op: BADRETURNF (43)
    ;
}


void _30replace_code(object _code_62271, object _start_62272, object _finish_62273, object _subprog_62274)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg replace_code pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg replace_code pc: 3 op: INTEGER_CHECK (96)
    // SubProg replace_code pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_finish_62273)) {
        _1 = (object)(DBL_PTR(_finish_62273)->dbl);
        DeRefDS(_finish_62273);
        _finish_62273 = _1;
    }
    // SubProg replace_code pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_62274)) {
        _1 = (object)(DBL_PTR(_subprog_62274)->dbl);
        DeRefDS(_subprog_62274);
        _subprog_62274 = _1;
    }
    // SubProg replace_code pc: 9 op: STARTLINE (58)

    /** fwdref.e:88		shifting_sub = subprog*/
    // SubProg replace_code pc: 11 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_62274;
    // SubProg replace_code pc: 14 op: STARTLINE (58)

    /** fwdref.e:89		shift:replace_code( code, start, finish )*/
    // SubProg replace_code pc: 16 op: PROC (27)
    RefDS(_code_62271);
    _65replace_code(_code_62271, _start_62272, _finish_62273);
    // SubProg replace_code pc: 21 op: STARTLINE (58)

    /** fwdref.e:90		shifting_sub = 0*/
    // SubProg replace_code pc: 23 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg replace_code pc: 26 op: STARTLINE (58)

    /** fwdref.e:91	end procedure*/
    // SubProg replace_code pc: 28 op: RETURNP (29)

// Exiting block BLOCK: replace_code

// block var code_62271
    DeRefDS(_code_62271);

// block var start_62272

// block var finish_62273

// block var subprog_62274
    return;
    // SubProg replace_code pc: 31 op: BADRETURNF (43)
    ;
}


void _30resolved_reference(object _ref_62277)
{
    object _file_62278 = NOVALUE;
    object _subprog_62281 = NOVALUE;
    object _tx_62284 = NOVALUE;
    object _ax_62285 = NOVALUE;
    object _sp_62286 = NOVALUE;
    object _r_62301 = NOVALUE;
    object _r_62319 = NOVALUE;
// skipping _30945  name type: 0
// skipping _30944  name type: 0
// skipping _30943  name type: 0
// skipping _30942  name type: 0
// skipping _30941  name type: 0
// skipping _30940  name type: 0
// skipping _30939  name type: 0
// skipping _30938  name type: 0
    object _30937 = NOVALUE; // 62312 30937
    object _30936 = NOVALUE; // 62311 30936
    object _30935 = NOVALUE; // 62310 30935
// skipping _30934  name type: 0
    object _30933 = NOVALUE; // 62307 30933
// skipping _30932  name type: 0
// skipping _30931  name type: 0
    object _30930 = NOVALUE; // 62304 30930
// skipping _30929  name type: 0
    object _30928 = NOVALUE; // 62302 30928
// skipping _30927  name type: 0
    object _30926 = NOVALUE; // 62298 30926
    object _30925 = NOVALUE; // 62297 30925
// skipping _30924  name type: 0
    object _30923 = NOVALUE; // 62295 30923
// skipping _30922  name type: 0
    object _30921 = NOVALUE; // 62292 30921
// skipping _30920  name type: 0
    object _30919 = NOVALUE; // 62289 30919
    object _30918 = NOVALUE; // 62288 30918
// skipping _30917  name type: 0
    object _30916 = NOVALUE; // 62282 30916
// skipping _30915  name type: 0
    object _30914 = NOVALUE; // 62279 30914
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg resolved_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg resolved_reference pc: 3 op: STARTLINE (58)

    /** fwdref.e:95			file    = forward_references[ref][FR_FILE],*/
    // SubProg resolved_reference pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _30914 = (object)*(((s1_ptr)_2)->base + _ref_62277);
    // SubProg resolved_reference pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30914);
    _file_62278 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_62278)){
        _file_62278 = (object)DBL_PTR(_file_62278)->dbl;
    }
    _30914 = NOVALUE;
    // SubProg resolved_reference pc: 17 op: STARTLINE (58)

    /** fwdref.e:96			subprog = forward_references[ref][FR_SUBPROG]*/
    // SubProg resolved_reference pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _30916 = (object)*(((s1_ptr)_2)->base + _ref_62277);
    // SubProg resolved_reference pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30916);
    _subprog_62281 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_subprog_62281)){
        _subprog_62281 = (object)DBL_PTR(_subprog_62281)->dbl;
    }
    _30916 = NOVALUE;
    // SubProg resolved_reference pc: 31 op: STARTLINE (58)

    /** fwdref.e:99			tx = 0,*/
    // SubProg resolved_reference pc: 33 op: ASSIGN_I (113)
    _tx_62284 = 0;
    // SubProg resolved_reference pc: 36 op: STARTLINE (58)

    /** fwdref.e:100			ax = 0,*/
    // SubProg resolved_reference pc: 38 op: ASSIGN_I (113)
    _ax_62285 = 0;
    // SubProg resolved_reference pc: 41 op: STARTLINE (58)

    /** fwdref.e:101			sp = 0*/
    // SubProg resolved_reference pc: 43 op: ASSIGN_I (113)
    _sp_62286 = 0;
    // SubProg resolved_reference pc: 46 op: STARTLINE (58)

    /** fwdref.e:103		if forward_references[ref][FR_SUBPROG] = TopLevelSub then*/
    // SubProg resolved_reference pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 50 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _30918 = (object)*(((s1_ptr)_2)->base + _ref_62277);
    // SubProg resolved_reference pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30918);
    _30919 = (object)*(((s1_ptr)_2)->base + 4);
    _30918 = NOVALUE;
    // SubProg resolved_reference pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 60 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _30919, _5TopLevelSub_12484)){
        _30919 = NOVALUE;
        goto L1; // [60] 80
    }
    _30919 = NOVALUE;
    // SubProg resolved_reference pc: 64 op: STARTLINE (58)

    /** fwdref.e:104			tx = find( ref, toplevel_references[file] )*/
    // SubProg resolved_reference pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 68 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    _30921 = (object)*(((s1_ptr)_2)->base + _file_62278);
    // SubProg resolved_reference pc: 72 op: FIND_FROM (176)
    _tx_62284 = find_from(_ref_62277, _30921, 1);
    _30921 = NOVALUE;
    // SubProg resolved_reference pc: 77 op: ELSE (23)
    goto L2; // [77] 111
    // SubProg resolved_reference pc: 79 op: NOP1 (159)
L1: // addr: 80 pc: 79 sub: 62275 op: 159
    // SubProg resolved_reference pc: 80 op: STARTLINE (58)

    /** fwdref.e:106			sp = find( subprog, active_subprogs[file] )*/
    // SubProg resolved_reference pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 84 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _30923 = (object)*(((s1_ptr)_2)->base + _file_62278);
    // SubProg resolved_reference pc: 88 op: FIND_FROM (176)
    _sp_62286 = find_from(_subprog_62281, _30923, 1);
    _30923 = NOVALUE;
    // SubProg resolved_reference pc: 93 op: STARTLINE (58)

    /** fwdref.e:107			ax = find( ref, active_references[file][sp] )*/
    // SubProg resolved_reference pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _30925 = (object)*(((s1_ptr)_2)->base + _file_62278);
    // SubProg resolved_reference pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30925);
    _30926 = (object)*(((s1_ptr)_2)->base + _sp_62286);
    _30925 = NOVALUE;
    // SubProg resolved_reference pc: 105 op: FIND_FROM (176)
    _ax_62285 = find_from(_ref_62277, _30926, 1);
    _30926 = NOVALUE;
    // SubProg resolved_reference pc: 110 op: NOP1 (159)
L2: // addr: 111 pc: 110 sub: 62275 op: 159
    // SubProg resolved_reference pc: 111 op: STARTLINE (58)

    /** fwdref.e:110		if ax then*/
    // SubProg resolved_reference pc: 113 op: IF (20)
    if (_ax_62285 == 0)
    {
        goto L3; // [113] 253
    }
    else{
    }
    // SubProg resolved_reference pc: 116 op: STARTLINE (58)

    /** fwdref.e:111			sequence r = active_references[file][sp] */
    // SubProg resolved_reference pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _30928 = (object)*(((s1_ptr)_2)->base + _file_62278);
    // SubProg resolved_reference pc: 124 op: RHS_SUBS_CHECK (92)
    DeRef(_r_62301);
    _2 = (object)SEQ_PTR(_30928);
    _r_62301 = (object)*(((s1_ptr)_2)->base + _sp_62286);
    Ref(_r_62301);
    _30928 = NOVALUE;
    // SubProg resolved_reference pc: 128 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 130 op: STARTLINE (58)

    /** fwdref.e:112			active_references[file][sp] = 0*/
    // SubProg resolved_reference pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 134 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_references_62232 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62278 + ((s1_ptr)_2)->base);
    // SubProg resolved_reference pc: 139 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62286);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30930 = NOVALUE;
    // SubProg resolved_reference pc: 143 op: STARTLINE (58)

    /** fwdref.e:113			r = remove( r, ax )*/
    // SubProg resolved_reference pc: 145 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62301);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ax_62285)) ? _ax_62285 : (object)(DBL_PTR(_ax_62285)->dbl);
        int stop = (IS_ATOM_INT(_ax_62285)) ? _ax_62285 : (object)(DBL_PTR(_ax_62285)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62301), start, &_r_62301 );
            }
            else Tail(SEQ_PTR(_r_62301), stop+1, &_r_62301);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62301), start, &_r_62301);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62301 = Remove_elements(start, stop, (SEQ_PTR(_r_62301)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 150 op: STARTLINE (58)

    /** fwdref.e:114			active_references[file][sp] = r*/
    // SubProg resolved_reference pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 154 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_references_62232 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_62278 + ((s1_ptr)_2)->base);
    // SubProg resolved_reference pc: 159 op: PASSIGN_SUBS (162)
    RefDS(_r_62301);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_62286);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62301;
    DeRef(_1);
    _30933 = NOVALUE;
    // SubProg resolved_reference pc: 163 op: STARTLINE (58)

    /** fwdref.e:116			if not length( active_references[file][sp] ) then*/
    // SubProg resolved_reference pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _30935 = (object)*(((s1_ptr)_2)->base + _file_62278);
    // SubProg resolved_reference pc: 171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30935);
    _30936 = (object)*(((s1_ptr)_2)->base + _sp_62286);
    _30935 = NOVALUE;
    // SubProg resolved_reference pc: 175 op: LENGTH (42)
    if (IS_SEQUENCE(_30936)){
            _30937 = SEQ_PTR(_30936)->length;
    }
    else {
        _30937 = 1;
    }
    _30936 = NOVALUE;
    // SubProg resolved_reference pc: 178 op: NOT_IFW (108)
    if (_30937 != 0)
    goto L4; // [178] 248
    _30937 = NOVALUE;
    // SubProg resolved_reference pc: 181 op: STARTLINE (58)

    /** fwdref.e:117				r = active_references[file]*/
    // SubProg resolved_reference pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 185 op: RHS_SUBS (25)
    DeRefDS(_r_62301);
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _r_62301 = (object)*(((s1_ptr)_2)->base + _file_62278);
    Ref(_r_62301);
    // SubProg resolved_reference pc: 189 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 191 op: STARTLINE (58)

    /** fwdref.e:118				active_references[file] = 0*/
    // SubProg resolved_reference pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 195 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_references_62232 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62278);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 199 op: STARTLINE (58)

    /** fwdref.e:119				r = remove( r, sp )*/
    // SubProg resolved_reference pc: 201 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62301);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62286)) ? _sp_62286 : (object)(DBL_PTR(_sp_62286)->dbl);
        int stop = (IS_ATOM_INT(_sp_62286)) ? _sp_62286 : (object)(DBL_PTR(_sp_62286)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62301), start, &_r_62301 );
            }
            else Tail(SEQ_PTR(_r_62301), stop+1, &_r_62301);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62301), start, &_r_62301);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62301 = Remove_elements(start, stop, (SEQ_PTR(_r_62301)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 206 op: STARTLINE (58)

    /** fwdref.e:120				active_references[file] = r*/
    // SubProg resolved_reference pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 210 op: ASSIGN_SUBS (16)
    RefDS(_r_62301);
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_references_62232 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62278);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62301;
    DeRef(_1);
    // SubProg resolved_reference pc: 214 op: STARTLINE (58)

    /** fwdref.e:122				r = active_subprogs[file]*/
    // SubProg resolved_reference pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 218 op: RHS_SUBS (25)
    DeRefDS(_r_62301);
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _r_62301 = (object)*(((s1_ptr)_2)->base + _file_62278);
    Ref(_r_62301);
    // SubProg resolved_reference pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 224 op: STARTLINE (58)

    /** fwdref.e:123				active_subprogs[file] = 0*/
    // SubProg resolved_reference pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 228 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_subprogs_62231 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62278);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 232 op: STARTLINE (58)

    /** fwdref.e:124				r = remove( r,   sp )*/
    // SubProg resolved_reference pc: 234 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62301);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_sp_62286)) ? _sp_62286 : (object)(DBL_PTR(_sp_62286)->dbl);
        int stop = (IS_ATOM_INT(_sp_62286)) ? _sp_62286 : (object)(DBL_PTR(_sp_62286)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62301), start, &_r_62301 );
            }
            else Tail(SEQ_PTR(_r_62301), stop+1, &_r_62301);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62301), start, &_r_62301);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62301 = Remove_elements(start, stop, (SEQ_PTR(_r_62301)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 239 op: STARTLINE (58)

    /** fwdref.e:125				active_subprogs[file] = r*/
    // SubProg resolved_reference pc: 241 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 243 op: ASSIGN_SUBS (16)
    RefDS(_r_62301);
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_subprogs_62231 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62278);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62301;
    DeRef(_1);
    // SubProg resolved_reference pc: 247 op: NOP1 (159)
L4: // addr: 248 pc: 247 sub: 62275 op: 159
    // SubProg resolved_reference pc: 248 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var r_62301
    DeRef(_r_62301);
    _r_62301 = NOVALUE;
    // SubProg resolved_reference pc: 250 op: ELSE (23)
    goto L5; // [250] 303
    // SubProg resolved_reference pc: 252 op: NOP1 (159)
L3: // addr: 253 pc: 252 sub: 62275 op: 159
    // SubProg resolved_reference pc: 253 op: STARTLINE (58)

    /** fwdref.e:127		elsif tx then*/
    // SubProg resolved_reference pc: 255 op: IF (20)
    if (_tx_62284 == 0)
    {
        goto L6; // [255] 296
    }
    else{
    }
    // SubProg resolved_reference pc: 258 op: STARTLINE (58)

    /** fwdref.e:128			sequence r = toplevel_references[file]*/
    // SubProg resolved_reference pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 262 op: RHS_SUBS (25)
    DeRef(_r_62319);
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    _r_62319 = (object)*(((s1_ptr)_2)->base + _file_62278);
    Ref(_r_62319);
    // SubProg resolved_reference pc: 266 op: SEQUENCE_CHECK (97)
    // SubProg resolved_reference pc: 268 op: STARTLINE (58)

    /** fwdref.e:129			toplevel_references[file] = 0*/
    // SubProg resolved_reference pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 272 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30toplevel_references_62233 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62278);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 276 op: STARTLINE (58)

    /** fwdref.e:130			r = remove( r, tx )*/
    // SubProg resolved_reference pc: 278 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_r_62319);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_tx_62284)) ? _tx_62284 : (object)(DBL_PTR(_tx_62284)->dbl);
        int stop = (IS_ATOM_INT(_tx_62284)) ? _tx_62284 : (object)(DBL_PTR(_tx_62284)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_r_62319), start, &_r_62319 );
            }
            else Tail(SEQ_PTR(_r_62319), stop+1, &_r_62319);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_r_62319), start, &_r_62319);
        }
        else {
            assign_slice_seq = &assign_space;
            _r_62319 = Remove_elements(start, stop, (SEQ_PTR(_r_62319)->ref == 1));
        }
    }
    // SubProg resolved_reference pc: 283 op: STARTLINE (58)

    /** fwdref.e:131			toplevel_references[file] = r*/
    // SubProg resolved_reference pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 287 op: ASSIGN_SUBS (16)
    RefDS(_r_62319);
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30toplevel_references_62233 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_62278);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_62319;
    DeRef(_1);
    // SubProg resolved_reference pc: 291 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var r_62319
    DeRefDS(_r_62319);
    _r_62319 = NOVALUE;
    // SubProg resolved_reference pc: 293 op: ELSE (23)
    goto L5; // [293] 303
    // SubProg resolved_reference pc: 295 op: NOP1 (159)
L6: // addr: 296 pc: 295 sub: 62275 op: 159
    // SubProg resolved_reference pc: 296 op: STARTLINE (58)

    /** fwdref.e:134			InternalErr( 260 )*/
    // SubProg resolved_reference pc: 298 op: PROC (27)
    RefDS(_21958);
    _49InternalErr(260, _21958);
    // SubProg resolved_reference pc: 302 op: NOP1 (159)
L5: // addr: 303 pc: 302 sub: 62275 op: 159
    // SubProg resolved_reference pc: 303 op: STARTLINE (58)

    /** fwdref.e:136		inactive_references &= ref*/
    // SubProg resolved_reference pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 307 op: CONCAT (15)
    Append(&_30inactive_references_62234, _30inactive_references_62234, _ref_62277);
    // SubProg resolved_reference pc: 311 op: STARTLINE (58)

    /** fwdref.e:137		forward_references[ref] = 0*/
    // SubProg resolved_reference pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg resolved_reference pc: 315 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_62277);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg resolved_reference pc: 319 op: STARTLINE (58)

    /** fwdref.e:138	end procedure*/
    // SubProg resolved_reference pc: 321 op: RETURNP (29)

// Exiting block BLOCK: resolved_reference

// block var ref_62277

// block var file_62278

// block var subprog_62281

// block var tx_62284

// block var ax_62285

// block var sp_62286
    _30936 = NOVALUE;
    return;
    // SubProg resolved_reference pc: 324 op: BADRETURNF (43)
    ;
}


void _30set_code(object _ref_62333)
{
// skipping _30963  name type: 0
    object _30962 = NOVALUE; // 62373 30962
// skipping _30961  name type: 0
    object _30960 = NOVALUE; // 62369 30960
    object _30959 = NOVALUE; // 62367 30959
    object _30958 = NOVALUE; // 62366 30958
    object _30957 = NOVALUE; // 62364 30957
// skipping _30956  name type: 0
    object _30955 = NOVALUE; // 62356 30955
// skipping _30954  name type: 0
    object _30953 = NOVALUE; // 62352 30953
// skipping _30952  name type: 0
    object _30951 = NOVALUE; // 62347 30951
// skipping _30950  name type: 0
    object _30949 = NOVALUE; // 62343 30949
// skipping _30948  name type: 0
// skipping _30947  name type: 0
    object _30946 = NOVALUE; // 62334 30946
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 3 op: STARTLINE (58)

    /** fwdref.e:146		patch_code_sub = forward_references[ref][FR_SUBPROG]*/
    // SubProg set_code pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _30946 = (object)*(((s1_ptr)_2)->base + _ref_62333);
    // SubProg set_code pc: 11 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30946);
    _30patch_code_sub_62328 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_30patch_code_sub_62328)){
        _30patch_code_sub_62328 = (object)DBL_PTR(_30patch_code_sub_62328)->dbl;
    }
    _30946 = NOVALUE;
    // SubProg set_code pc: 17 op: STARTLINE (58)

    /** fwdref.e:147		if patch_code_sub != CurrentSub then*/
    // SubProg set_code pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 23 op: NOTEQ_IFW (105)
    if (_30patch_code_sub_62328 == _5CurrentSub_12485)
    goto L1; // [23] 136
    // SubProg set_code pc: 27 op: STARTLINE (58)

    /** fwdref.e:149			patch_code_temp = Code*/
    // SubProg set_code pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 31 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_30patch_code_temp_62325);
    _30patch_code_temp_62325 = _5Code_12566;
    // SubProg set_code pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 36 op: STARTLINE (58)

    /** fwdref.e:150			patch_linetab_temp = LineTable*/
    // SubProg set_code pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 40 op: ASSIGN (18)
    RefDS(_5LineTable_12567);
    DeRef(_30patch_linetab_temp_62326);
    _30patch_linetab_temp_62326 = _5LineTable_12567;
    // SubProg set_code pc: 43 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 45 op: STARTLINE (58)

    /** fwdref.e:152			Code = SymTab[patch_code_sub][S_CODE]*/
    // SubProg set_code pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _30949 = (object)*(((s1_ptr)_2)->base + _30patch_code_sub_62328);
    // SubProg set_code pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 57 op: RHS_SUBS_CHECK (92)
    DeRefDS(_5Code_12566);
    _2 = (object)SEQ_PTR(_30949);
    if (!IS_ATOM_INT(_5S_CODE_12144)){
        _5Code_12566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    }
    else{
        _5Code_12566 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
    }
    Ref(_5Code_12566);
    _30949 = NOVALUE;
    // SubProg set_code pc: 61 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 63 op: STARTLINE (58)

    /** fwdref.e:153			SymTab[patch_code_sub][S_CODE] = 0*/
    // SubProg set_code pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 69 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_30patch_code_sub_62328 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 76 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_CODE_12144))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30951 = NOVALUE;
    // SubProg set_code pc: 80 op: STARTLINE (58)

    /** fwdref.e:154			LineTable = SymTab[patch_code_sub][S_LINETAB]*/
    // SubProg set_code pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _30953 = (object)*(((s1_ptr)_2)->base + _30patch_code_sub_62328);
    // SubProg set_code pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 92 op: RHS_SUBS_CHECK (92)
    DeRefDS(_5LineTable_12567);
    _2 = (object)SEQ_PTR(_30953);
    if (!IS_ATOM_INT(_5S_LINETAB_12167)){
        _5LineTable_12567 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
    }
    else{
        _5LineTable_12567 = (object)*(((s1_ptr)_2)->base + _5S_LINETAB_12167);
    }
    Ref(_5LineTable_12567);
    _30953 = NOVALUE;
    // SubProg set_code pc: 96 op: SEQUENCE_CHECK (97)
    // SubProg set_code pc: 98 op: STARTLINE (58)

    /** fwdref.e:155			SymTab[patch_code_sub][S_LINETAB] = 0*/
    // SubProg set_code pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 104 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_30patch_code_sub_62328 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 111 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_LINETAB_12167))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_LINETAB_12167);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30955 = NOVALUE;
    // SubProg set_code pc: 115 op: STARTLINE (58)

    /** fwdref.e:157			patch_current_sub = CurrentSub*/
    // SubProg set_code pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 119 op: ASSIGN (18)
    _30patch_current_sub_62330 = _5CurrentSub_12485;
    // SubProg set_code pc: 122 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 124 op: STARTLINE (58)

    /** fwdref.e:158			CurrentSub = patch_code_sub*/
    // SubProg set_code pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 128 op: ASSIGN (18)
    _5CurrentSub_12485 = _30patch_code_sub_62328;
    // SubProg set_code pc: 131 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 133 op: ELSE (23)
    goto L2; // [133] 203
    // SubProg set_code pc: 135 op: NOP1 (159)
L1: // addr: 136 pc: 135 sub: 62331 op: 159
    // SubProg set_code pc: 136 op: STARTLINE (58)

    /** fwdref.e:160			patch_current_sub = patch_code_sub*/
    // SubProg set_code pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 140 op: ASSIGN (18)
    _30patch_current_sub_62330 = _30patch_code_sub_62328;
    // SubProg set_code pc: 143 op: INTEGER_CHECK (96)
    // SubProg set_code pc: 145 op: STARTLINE (58)

    /** fwdref.e:161			if sequence( SymTab[patch_current_sub][S_CODE] ) then*/
    // SubProg set_code pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _30957 = (object)*(((s1_ptr)_2)->base + _30patch_current_sub_62330);
    // SubProg set_code pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 157 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30957);
    if (!IS_ATOM_INT(_5S_CODE_12144)){
        _30958 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    }
    else{
        _30958 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
    }
    _30957 = NOVALUE;
    // SubProg set_code pc: 161 op: IS_A_SEQUENCE (68)
    _30959 = IS_SEQUENCE(_30958);
    _30958 = NOVALUE;
    // SubProg set_code pc: 164 op: IF (20)
    if (_30959 == 0)
    {
        _30959 = NOVALUE;
        goto L3; // [164] 202
    }
    else{
        _30959 = NOVALUE;
    }
    // SubProg set_code pc: 167 op: STARTLINE (58)

    /** fwdref.e:162				SymTab[patch_code_sub][S_CODE] = 0*/
    // SubProg set_code pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 173 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_30patch_code_sub_62328 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 180 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_CODE_12144))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30960 = NOVALUE;
    // SubProg set_code pc: 184 op: STARTLINE (58)

    /** fwdref.e:163				SymTab[patch_code_sub][S_LINETAB] = 0*/
    // SubProg set_code pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 190 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_30patch_code_sub_62328 + ((s1_ptr)_2)->base);
    // SubProg set_code pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_code pc: 197 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_LINETAB_12167))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_LINETAB_12167);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _30962 = NOVALUE;
    // SubProg set_code pc: 201 op: NOP1 (159)
L3: // addr: 202 pc: 201 sub: 62331 op: 159
    // SubProg set_code pc: 202 op: NOP1 (159)
L2: // addr: 203 pc: 202 sub: 62331 op: 159
    // SubProg set_code pc: 203 op: STARTLINE (58)

    /** fwdref.e:166	end procedure*/
    // SubProg set_code pc: 205 op: RETURNP (29)

// Exiting block BLOCK: set_code

// block var ref_62333
    return;
    // SubProg set_code pc: 208 op: BADRETURNF (43)
    ;
}


void _30reset_code()
{
// skipping _30968  name type: 0
    object _30967 = NOVALUE; // 62386 30967
// skipping _30966  name type: 0
    object _30965 = NOVALUE; // 62381 30965
// skipping _30964  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg reset_code pc: 1 op: STARTLINE (58)

    /** fwdref.e:169		if patch_code_sub != patch_current_sub then*/
    // SubProg reset_code pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 7 op: NOTEQ_IFW (105)
    if (_30patch_code_sub_62328 == _30patch_current_sub_62330)
    goto L1; // [7] 77
    // SubProg reset_code pc: 11 op: STARTLINE (58)

    /** fwdref.e:171			SymTab[patch_code_sub][S_CODE] = Code*/
    // SubProg reset_code pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 17 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_30patch_code_sub_62328 + ((s1_ptr)_2)->base);
    // SubProg reset_code pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 26 op: PASSIGN_SUBS (162)
    RefDS(_5Code_12566);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_CODE_12144))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5Code_12566;
    DeRef(_1);
    _30965 = NOVALUE;
    // SubProg reset_code pc: 30 op: STARTLINE (58)

    /** fwdref.e:172			SymTab[patch_code_sub][S_LINETAB] = LineTable*/
    // SubProg reset_code pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 36 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_30patch_code_sub_62328 + ((s1_ptr)_2)->base);
    // SubProg reset_code pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 45 op: PASSIGN_SUBS (162)
    RefDS(_5LineTable_12567);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_LINETAB_12167))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_LINETAB_12167);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5LineTable_12567;
    DeRef(_1);
    _30967 = NOVALUE;
    // SubProg reset_code pc: 49 op: STARTLINE (58)

    /** fwdref.e:175			CurrentSub = patch_current_sub*/
    // SubProg reset_code pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 53 op: ASSIGN (18)
    _5CurrentSub_12485 = _30patch_current_sub_62330;
    // SubProg reset_code pc: 56 op: INTEGER_CHECK (96)
    // SubProg reset_code pc: 58 op: STARTLINE (58)

    /** fwdref.e:176			Code = patch_code_temp*/
    // SubProg reset_code pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 62 op: ASSIGN (18)
    RefDS(_30patch_code_temp_62325);
    DeRefDS(_5Code_12566);
    _5Code_12566 = _30patch_code_temp_62325;
    // SubProg reset_code pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 67 op: STARTLINE (58)

    /** fwdref.e:177			LineTable = patch_linetab_temp*/
    // SubProg reset_code pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset_code pc: 71 op: ASSIGN (18)
    RefDS(_30patch_linetab_temp_62326);
    DeRefDS(_5LineTable_12567);
    _5LineTable_12567 = _30patch_linetab_temp_62326;
    // SubProg reset_code pc: 74 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 62376 op: 159
    // SubProg reset_code pc: 77 op: STARTLINE (58)

    /** fwdref.e:181		patch_code_temp = {}*/
    // SubProg reset_code pc: 79 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30patch_code_temp_62325);
    _30patch_code_temp_62325 = _21958;
    // SubProg reset_code pc: 82 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 84 op: STARTLINE (58)

    /** fwdref.e:182		patch_linetab_temp = {}*/
    // SubProg reset_code pc: 86 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30patch_linetab_temp_62326);
    _30patch_linetab_temp_62326 = _21958;
    // SubProg reset_code pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg reset_code pc: 91 op: STARTLINE (58)

    /** fwdref.e:183	end procedure*/
    // SubProg reset_code pc: 93 op: RETURNP (29)

// Exiting block BLOCK: reset_code
    return;
    // SubProg reset_code pc: 96 op: BADRETURNF (43)
    ;
}


void _30set_data(object _ref_62395, object _data_62396)
{
// skipping _30970  name type: 0
    object _30969 = NOVALUE; // 62397 30969
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_data pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_data pc: 3 op: STARTLINE (58)

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    // SubProg set_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_data pc: 7 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62395 + ((s1_ptr)_2)->base);
    // SubProg set_data pc: 12 op: PASSIGN_SUBS (162)
    Ref(_data_62396);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_62396;
    DeRef(_1);
    _30969 = NOVALUE;
    // SubProg set_data pc: 16 op: STARTLINE (58)

    /** fwdref.e:187	end procedure*/
    // SubProg set_data pc: 18 op: RETURNP (29)

// Exiting block BLOCK: set_data

// block var ref_62395

// block var data_62396
    DeRef(_data_62396);
    return;
    // SubProg set_data pc: 21 op: BADRETURNF (43)
    ;
}


void _30add_data(object _ref_62401, object _data_62402)
{
    object _30975 = NOVALUE; // 62407 30975
    object _30974 = NOVALUE; // 62406 30974
    object _30973 = NOVALUE; // 62405 30973
// skipping _30972  name type: 0
    object _30971 = NOVALUE; // 62403 30971
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_data pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62401)) {
        _1 = (object)(DBL_PTR(_ref_62401)->dbl);
        DeRefDS(_ref_62401);
        _ref_62401 = _1;
    }
    // SubProg add_data pc: 3 op: STARTLINE (58)

    /** fwdref.e:190		forward_references[ref][FR_DATA] = append( forward_references[ref][FR_DATA], data )*/
    // SubProg add_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_data pc: 7 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62401 + ((s1_ptr)_2)->base);
    // SubProg add_data pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_data pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _30973 = (object)*(((s1_ptr)_2)->base + _ref_62401);
    // SubProg add_data pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30973);
    _30974 = (object)*(((s1_ptr)_2)->base + 12);
    _30973 = NOVALUE;
    // SubProg add_data pc: 22 op: APPEND (35)
    Ref(_data_62402);
    Append(&_30975, _30974, _data_62402);
    _30974 = NOVALUE;
    // SubProg add_data pc: 26 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30975;
    if( _1 != _30975 ){
        DeRef(_1);
    }
    _30975 = NOVALUE;
    _30971 = NOVALUE;
    // SubProg add_data pc: 30 op: STARTLINE (58)

    /** fwdref.e:191	end procedure*/
    // SubProg add_data pc: 32 op: RETURNP (29)

// Exiting block BLOCK: add_data

// block var ref_62401

// block var data_62402
    DeRef(_data_62402);
    return;
    // SubProg add_data pc: 35 op: BADRETURNF (43)
    ;
}


void _30set_line(object _ref_62410, object _line_no_62411, object _this_line_62412, object _bp_62413)
{
// skipping _30981  name type: 0
    object _30980 = NOVALUE; // 62418 30980
// skipping _30979  name type: 0
    object _30978 = NOVALUE; // 62416 30978
// skipping _30977  name type: 0
    object _30976 = NOVALUE; // 62414 30976
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg set_line pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_62410)) {
        _1 = (object)(DBL_PTR(_ref_62410)->dbl);
        DeRefDS(_ref_62410);
        _ref_62410 = _1;
    }
    // SubProg set_line pc: 3 op: INTEGER_CHECK (96)
    // SubProg set_line pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg set_line pc: 7 op: INTEGER_CHECK (96)
    // SubProg set_line pc: 9 op: STARTLINE (58)

    /** fwdref.e:194		forward_references[ref][FR_LINE] = line_no*/
    // SubProg set_line pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 13 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62410 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 18 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _line_no_62411;
    DeRef(_1);
    _30976 = NOVALUE;
    // SubProg set_line pc: 22 op: STARTLINE (58)

    /** fwdref.e:195		forward_references[ref][FR_THISLINE] = this_line*/
    // SubProg set_line pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 26 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62410 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 31 op: PASSIGN_SUBS (162)
    RefDS(_this_line_62412);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _this_line_62412;
    DeRef(_1);
    _30978 = NOVALUE;
    // SubProg set_line pc: 35 op: STARTLINE (58)

    /** fwdref.e:196		forward_references[ref][FR_BP] = bp*/
    // SubProg set_line pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_line pc: 39 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_62410 + ((s1_ptr)_2)->base);
    // SubProg set_line pc: 44 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bp_62413;
    DeRef(_1);
    _30980 = NOVALUE;
    // SubProg set_line pc: 48 op: STARTLINE (58)

    /** fwdref.e:198	end procedure*/
    // SubProg set_line pc: 50 op: RETURNP (29)

// Exiting block BLOCK: set_line

// block var ref_62410

// block var line_no_62411

// block var this_line_62412
    DeRefDS(_this_line_62412);

// block var bp_62413
    return;
    // SubProg set_line pc: 53 op: BADRETURNF (43)
    ;
}


void _30add_private_symbol(object _sym_62425, object _name_62426)
{
// skipping _30983  name type: 0
// skipping _30982  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_private_symbol pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_62425)) {
        _1 = (object)(DBL_PTR(_sym_62425)->dbl);
        DeRefDS(_sym_62425);
        _sym_62425 = _1;
    }
    // SubProg add_private_symbol pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add_private_symbol pc: 5 op: STARTLINE (58)

    /** fwdref.e:206		fwd_private_sym &= sym*/
    // SubProg add_private_symbol pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_private_symbol pc: 9 op: CONCAT (15)
    Append(&_30fwd_private_sym_62420, _30fwd_private_sym_62420, _sym_62425);
    // SubProg add_private_symbol pc: 13 op: STARTLINE (58)

    /** fwdref.e:207		fwd_private_name = append( fwd_private_name, name )*/
    // SubProg add_private_symbol pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_private_symbol pc: 17 op: APPEND (35)
    RefDS(_name_62426);
    Append(&_30fwd_private_name_62421, _30fwd_private_name_62421, _name_62426);
    // SubProg add_private_symbol pc: 21 op: STARTLINE (58)

    /** fwdref.e:209	end procedure*/
    // SubProg add_private_symbol pc: 23 op: RETURNP (29)

// Exiting block BLOCK: add_private_symbol

// block var sym_62425

// block var name_62426
    DeRefDS(_name_62426);
    return;
    // SubProg add_private_symbol pc: 26 op: BADRETURNF (43)
    ;
}


void _30patch_forward_goto(object _tok_62434, object _ref_62435)
{
    object _fr_62436 = NOVALUE;
    object _30996 = NOVALUE; // 62453 30996
    object _30995 = NOVALUE; // 62452 30995
    object _30994 = NOVALUE; // 62451 30994
    object _30993 = NOVALUE; // 62450 30993
    object _30992 = NOVALUE; // 62449 30992
    object _30991 = NOVALUE; // 62447 30991
    object _30990 = NOVALUE; // 62446 30990
    object _30989 = NOVALUE; // 62445 30989
// skipping _30988  name type: 0
    object _30987 = NOVALUE; // 62441 30987
    object _30986 = NOVALUE; // 62440 30986
// skipping _30985  name type: 0
// skipping _30984  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_forward_goto pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_goto pc: 3 op: STARTLINE (58)

    /** fwdref.e:217		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_goto pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_goto pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62436);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62436 = (object)*(((s1_ptr)_2)->base + _ref_62435);
    Ref(_fr_62436);
    // SubProg patch_forward_goto pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_goto pc: 13 op: STARTLINE (58)

    /** fwdref.e:218		set_code( ref )*/
    // SubProg patch_forward_goto pc: 15 op: PROC (27)
    _30set_code(_ref_62435);
    // SubProg patch_forward_goto pc: 18 op: STARTLINE (58)

    /** fwdref.e:220		shifting_sub = fr[FR_SUBPROG]*/
    // SubProg patch_forward_goto pc: 20 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62436);
    _30shifting_sub_62249 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_30shifting_sub_62249))
    _30shifting_sub_62249 = (object)DBL_PTR(_30shifting_sub_62249)->dbl;
    // SubProg patch_forward_goto pc: 24 op: STARTLINE (58)

    /** fwdref.e:222		if length( fr[FR_DATA] ) = 2 then*/
    // SubProg patch_forward_goto pc: 26 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62436);
    _30986 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 30 op: LENGTH (42)
    if (IS_SEQUENCE(_30986)){
            _30987 = SEQ_PTR(_30986)->length;
    }
    else {
        _30987 = 1;
    }
    _30986 = NOVALUE;
    // SubProg patch_forward_goto pc: 33 op: EQUALS_IFW_I (121)
    if (_30987 != 2)
    goto L1; // [33] 62
    // SubProg patch_forward_goto pc: 37 op: STARTLINE (58)

    /** fwdref.e:223			prep_forward_error( ref )*/
    // SubProg patch_forward_goto pc: 39 op: PROC (27)
    _30prep_forward_error(_ref_62435);
    // SubProg patch_forward_goto pc: 42 op: STARTLINE (58)

    /** fwdref.e:224			CompileErr( 156, { fr[FR_DATA][2] })*/
    // SubProg patch_forward_goto pc: 44 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62436);
    _30989 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30989);
    _30990 = (object)*(((s1_ptr)_2)->base + 2);
    _30989 = NOVALUE;
    // SubProg patch_forward_goto pc: 52 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_30990);
    ((intptr_t*)_2)[1] = _30990;
    _30991 = MAKE_SEQ(_1);
    _30990 = NOVALUE;
    // SubProg patch_forward_goto pc: 56 op: PROC (27)
    _49CompileErr(156, _30991, 0);
    _30991 = NOVALUE;
    // SubProg patch_forward_goto pc: 61 op: NOP1 (159)
L1: // addr: 62 pc: 61 sub: 62431 op: 159
    // SubProg patch_forward_goto pc: 62 op: STARTLINE (58)

    /** fwdref.e:227		Goto_block(  fr[FR_DATA][1], fr[FR_DATA][3], fr[FR_PC] )*/
    // SubProg patch_forward_goto pc: 64 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62436);
    _30992 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 68 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30992);
    _30993 = (object)*(((s1_ptr)_2)->base + 1);
    _30992 = NOVALUE;
    // SubProg patch_forward_goto pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62436);
    _30994 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_goto pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_30994);
    _30995 = (object)*(((s1_ptr)_2)->base + 3);
    _30994 = NOVALUE;
    // SubProg patch_forward_goto pc: 80 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62436);
    _30996 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_goto pc: 84 op: PROC (27)
    Ref(_30993);
    Ref(_30995);
    Ref(_30996);
    _64Goto_block(_30993, _30995, _30996);
    _30993 = NOVALUE;
    _30995 = NOVALUE;
    _30996 = NOVALUE;
    // SubProg patch_forward_goto pc: 89 op: STARTLINE (58)

    /** fwdref.e:229		shifting_sub = 0*/
    // SubProg patch_forward_goto pc: 91 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_goto pc: 94 op: STARTLINE (58)

    /** fwdref.e:231		reset_code()*/
    // SubProg patch_forward_goto pc: 96 op: PROC (27)
    _30reset_code();
    // SubProg patch_forward_goto pc: 98 op: STARTLINE (58)

    /** fwdref.e:232		resolved_reference( ref )*/
    // SubProg patch_forward_goto pc: 100 op: PROC (27)
    _30resolved_reference(_ref_62435);
    // SubProg patch_forward_goto pc: 103 op: STARTLINE (58)

    /** fwdref.e:233	end procedure*/
    // SubProg patch_forward_goto pc: 105 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_goto

// block var ref_62435

// block var fr_62436
    DeRefDS(_fr_62436);
    _30986 = NOVALUE;
    return;
    // SubProg patch_forward_goto pc: 108 op: BADRETURNF (43)
    ;
}


void _30patch_forward_call(object _tok_62457, object _ref_62458)
{
    object _fr_62459 = NOVALUE;
    object _sub_62462 = NOVALUE;
    object _defarg_62468 = NOVALUE;
    object _paramsym_62472 = NOVALUE;
    object _old_62475 = NOVALUE;
    object _tx_62479 = NOVALUE;
    object _code_sub_62489 = NOVALUE;
    object _args_62491 = NOVALUE;
    object _is_func_62496 = NOVALUE;
    object _real_file_62510 = NOVALUE;
    object _code_62514 = NOVALUE;
    object _temp_sub_62516 = NOVALUE;
    object _pc_62518 = NOVALUE;
    object _next_pc_62520 = NOVALUE;
    object _supplied_args_62521 = NOVALUE;
    object _name_62524 = NOVALUE;
    object _old_temps_allocated_62560 = NOVALUE;
    object _temp_target_62569 = NOVALUE;
    object _converted_code_62572 = NOVALUE;
    object _target_62588 = NOVALUE;
    object _has_defaults_62594 = NOVALUE;
    object _goto_target_62595 = NOVALUE;
    object _defarg_62598 = NOVALUE;
    object _code_len_62599 = NOVALUE;
    object _extra_default_args_62601 = NOVALUE;
    object _param_sym_62604 = NOVALUE;
    object _params_62605 = NOVALUE;
    object _orig_code_62607 = NOVALUE;
    object _orig_linetable_62608 = NOVALUE;
    object _ar_sp_62612 = NOVALUE;
    object _pre_refs_62616 = NOVALUE;
    object _old_fwd_params_62631 = NOVALUE;
    object _temp_shifting_sub_62672 = NOVALUE;
    object _new_code_62676 = NOVALUE;
    object _routine_type_62685 = NOVALUE;
    object _31757 = NOVALUE; // 63970 31757
    object _31137 = NOVALUE; // 62738 31137
    object _31136 = NOVALUE; // 62737 31136
    object _31135 = NOVALUE; // 62736 31135
// skipping _31134  name type: 0
    object _31133 = NOVALUE; // 62734 31133
    object _31132 = NOVALUE; // 62733 31132
    object _31131 = NOVALUE; // 62732 31131
    object _31130 = NOVALUE; // 62731 31130
    object _31129 = NOVALUE; // 62730 31129
    object _31128 = NOVALUE; // 62729 31128
    object _31127 = NOVALUE; // 62728 31127
    object _31126 = NOVALUE; // 62727 31126
    object _31125 = NOVALUE; // 62726 31125
    object _31124 = NOVALUE; // 62725 31124
    object _31123 = NOVALUE; // 62721 31123
    object _31122 = NOVALUE; // 62720 31122
    object _31121 = NOVALUE; // 62719 31121
// skipping _31120  name type: 0
    object _31119 = NOVALUE; // 62717 31119
    object _31118 = NOVALUE; // 62716 31118
    object _31117 = NOVALUE; // 62715 31117
    object _31116 = NOVALUE; // 62714 31116
    object _31115 = NOVALUE; // 62713 31115
    object _31114 = NOVALUE; // 62712 31114
    object _31113 = NOVALUE; // 62711 31113
    object _31112 = NOVALUE; // 62710 31112
// skipping _31111  name type: 0
    object _31110 = NOVALUE; // 62704 31110
// skipping _31109  name type: 0
// skipping _31108  name type: 0
    object _31107 = NOVALUE; // 62700 31107
    object _31106 = NOVALUE; // 62698 31106
    object _31105 = NOVALUE; // 62697 31105
    object _31104 = NOVALUE; // 62695 31104
// skipping _31103  name type: 0
// skipping _31102  name type: 0
// skipping _31101  name type: 0
    object _31100 = NOVALUE; // 62683 31100
    object _31099 = NOVALUE; // 62675 31099
    object _31098 = NOVALUE; // 62674 31098
    object _31097 = NOVALUE; // 62671 31097
    object _31096 = NOVALUE; // 62670 31096
// skipping _31095  name type: 0
    object _31094 = NOVALUE; // 62665 31094
    object _31093 = NOVALUE; // 62663 31093
    object _31092 = NOVALUE; // 62662 31092
    object _31091 = NOVALUE; // 62660 31091
    object _31090 = NOVALUE; // 62658 31090
    object _31089 = NOVALUE; // 62656 31089
// skipping _31088  name type: 0
    object _31087 = NOVALUE; // 62649 31087
    object _31086 = NOVALUE; // 62648 31086
// skipping _31085  name type: 0
    object _31084 = NOVALUE; // 62646 31084
    object _31083 = NOVALUE; // 62645 31083
    object _31082 = NOVALUE; // 62644 31082
    object _31081 = NOVALUE; // 62643 31081
// skipping _31080  name type: 0
    object _31079 = NOVALUE; // 62639 31079
// skipping _31078  name type: 0
    object _31077 = NOVALUE; // 62636 31077
    object _31076 = NOVALUE; // 62635 31076
    object _31075 = NOVALUE; // 62634 31075
// skipping _31074  name type: 0
    object _31073 = NOVALUE; // 62629 31073
    object _31072 = NOVALUE; // 62628 31072
// skipping _31071  name type: 0
    object _31070 = NOVALUE; // 62625 31070
// skipping _31069  name type: 0
    object _31068 = NOVALUE; // 62621 31068
// skipping _31067  name type: 0
// skipping _31066  name type: 0
    object _31065 = NOVALUE; // 62614 31065
// skipping _31064  name type: 0
// skipping _31063  name type: 0
// skipping _31062  name type: 0
    object _31061 = NOVALUE; // 62596 31061
// skipping _31060  name type: 0
    object _31059 = NOVALUE; // 62592 31059
    object _31058 = NOVALUE; // 62591 31058
// skipping _31057  name type: 0
    object _31056 = NOVALUE; // 62586 31056
    object _31055 = NOVALUE; // 62585 31055
    object _31054 = NOVALUE; // 62583 31054
    object _31053 = NOVALUE; // 62582 31053
// skipping _31052  name type: 0
    object _31051 = NOVALUE; // 62580 31051
    object _31050 = NOVALUE; // 62578 31050
    object _31049 = NOVALUE; // 62577 31049
    object _31048 = NOVALUE; // 62576 31048
    object _31047 = NOVALUE; // 62575 31047
// skipping _31046  name type: 0
    object _31045 = NOVALUE; // 62567 31045
    object _31044 = NOVALUE; // 62565 31044
    object _31043 = NOVALUE; // 62564 31043
    object _31042 = NOVALUE; // 62559 31042
    object _31041 = NOVALUE; // 62558 31041
    object _31040 = NOVALUE; // 62556 31040
    object _31039 = NOVALUE; // 62552 31039
    object _31038 = NOVALUE; // 62550 31038
    object _31037 = NOVALUE; // 62547 31037
    object _31036 = NOVALUE; // 62546 31036
    object _31035 = NOVALUE; // 62545 31035
    object _31034 = NOVALUE; // 62544 31034
    object _31033 = NOVALUE; // 62543 31033
    object _31032 = NOVALUE; // 62541 31032
    object _31030 = NOVALUE; // 62535 31030
    object _31029 = NOVALUE; // 62533 31029
    object _31028 = NOVALUE; // 62531 31028
    object _31027 = NOVALUE; // 62530 31027
    object _31026 = NOVALUE; // 62528 31026
// skipping _31025  name type: 0
// skipping _31024  name type: 0
    object _31023 = NOVALUE; // 62522 31023
// skipping _31022  name type: 0
// skipping _31021  name type: 0
// skipping _31020  name type: 0
    object _31019 = NOVALUE; // 62508 31019
    object _31018 = NOVALUE; // 62506 31018
    object _31017 = NOVALUE; // 62504 31017
    object _31016 = NOVALUE; // 62502 31016
    object _31015 = NOVALUE; // 62500 31015
    object _31014 = NOVALUE; // 62498 31014
// skipping _31013  name type: 0
    object _31012 = NOVALUE; // 62493 31012
// skipping _31011  name type: 0
// skipping _31010  name type: 0
    object _31009 = NOVALUE; // 62486 31009
// skipping _31008  name type: 0
    object _31007 = NOVALUE; // 62483 31007
    object _31006 = NOVALUE; // 62481 31006
// skipping _31005  name type: 0
    object _31004 = NOVALUE; // 62477 31004
// skipping _31003  name type: 0
// skipping _31002  name type: 0
    object _31001 = NOVALUE; // 62469 31001
    object _31000 = NOVALUE; // 62467 31000
    object _30999 = NOVALUE; // 62466 30999
// skipping _30998  name type: 0
// skipping _30997  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_call pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 3 op: STARTLINE (58)

    /** fwdref.e:242		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_call pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62459);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62459 = (object)*(((s1_ptr)_2)->base + _ref_62458);
    Ref(_fr_62459);
    // SubProg patch_forward_call pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 13 op: STARTLINE (58)

    /** fwdref.e:243		symtab_index sub = tok[T_SYM]*/
    // SubProg patch_forward_call pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62457);
    _sub_62462 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sub_62462)){
        _sub_62462 = (object)DBL_PTR(_sub_62462)->dbl;
    }
    // SubProg patch_forward_call pc: 23 op: STARTLINE (58)

    /** fwdref.e:245		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_call pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _30999 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_call pc: 29 op: IS_A_SEQUENCE (68)
    _31000 = IS_SEQUENCE(_30999);
    _30999 = NOVALUE;
    // SubProg patch_forward_call pc: 32 op: IF (20)
    if (_31000 == 0)
    {
        _31000 = NOVALUE;
        goto L1; // [32] 117
    }
    else{
        _31000 = NOVALUE;
    }
    // SubProg patch_forward_call pc: 35 op: STARTLINE (58)

    /** fwdref.e:246			sequence defarg = fr[FR_DATA][1]*/
    // SubProg patch_forward_call pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31001 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_call pc: 41 op: RHS_SUBS_CHECK (92)
    DeRef(_defarg_62468);
    _2 = (object)SEQ_PTR(_31001);
    _defarg_62468 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_defarg_62468);
    _31001 = NOVALUE;
    // SubProg patch_forward_call pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 47 op: STARTLINE (58)

    /** fwdref.e:247			symtab_index paramsym = defarg[2]*/
    // SubProg patch_forward_call pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defarg_62468);
    _paramsym_62472 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_paramsym_62472)){
        _paramsym_62472 = (object)DBL_PTR(_paramsym_62472)->dbl;
    }
    // SubProg patch_forward_call pc: 55 op: STARTLINE (58)

    /** fwdref.e:248			token old = { RECORDED, defarg[3] }*/
    // SubProg patch_forward_call pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_defarg_62468);
    _31004 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 63 op: RIGHT_BRACE_2 (85)
    Ref(_31004);
    DeRef(_old_62475);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _31004;
    _old_62475 = MAKE_SEQ(_1);
    _31004 = NOVALUE;
    // SubProg patch_forward_call pc: 67 op: STARTLINE (58)

    /** fwdref.e:249			integer tx = find( old, SymTab[paramsym][S_CODE] )*/
    // SubProg patch_forward_call pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31006 = (object)*(((s1_ptr)_2)->base + _paramsym_62472);
    // SubProg patch_forward_call pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31006);
    if (!IS_ATOM_INT(_5S_CODE_12144)){
        _31007 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    }
    else{
        _31007 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
    }
    _31006 = NOVALUE;
    // SubProg patch_forward_call pc: 81 op: FIND_FROM (176)
    _tx_62479 = find_from(_old_62475, _31007, 1);
    _31007 = NOVALUE;
    // SubProg patch_forward_call pc: 86 op: STARTLINE (58)

    /** fwdref.e:250			SymTab[paramsym][S_CODE][tx] = tok*/
    // SubProg patch_forward_call pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 90 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_paramsym_62472 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_call pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 97 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_CODE_12144))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    else
    _3 = (object)(_5S_CODE_12144 + ((s1_ptr)_2)->base);
    _31009 = NOVALUE;
    // SubProg patch_forward_call pc: 102 op: PASSIGN_SUBS (162)
    Ref(_tok_62457);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _tx_62479);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _tok_62457;
    DeRef(_1);
    _31009 = NOVALUE;
    // SubProg patch_forward_call pc: 106 op: STARTLINE (58)

    /** fwdref.e:251			resolved_reference( ref )*/
    // SubProg patch_forward_call pc: 108 op: PROC (27)
    _30resolved_reference(_ref_62458);
    // SubProg patch_forward_call pc: 111 op: STARTLINE (58)

    /** fwdref.e:252			return*/
    // SubProg patch_forward_call pc: 113 op: RETURNP (29)

// Exiting block BLOCK: IF-

// block var defarg_62468
    DeRefDS(_defarg_62468);

// block var paramsym_62472

// block var old_62475
    DeRefDS(_old_62475);

// block var tx_62479

// Exiting block BLOCK: patch_forward_call

// block var tok_62457
    DeRef(_tok_62457);

// block var ref_62458

// block var fr_62459
    DeRefDS(_fr_62459);

// block var sub_62462

// block var code_sub_62489

// block var args_62491

// block var is_func_62496

// block var real_file_62510

// block var code_62514
    DeRef(_code_62514);

// block var temp_sub_62516

// block var pc_62518

// block var next_pc_62520

// block var supplied_args_62521

// block var name_62524
    DeRef(_name_62524);

// block var old_temps_allocated_62560

// block var target_62588

// block var has_defaults_62594

// block var goto_target_62595

// block var defarg_62598

// block var code_len_62599

// block var extra_default_args_62601

// block var param_sym_62604

// block var params_62605
    DeRef(_params_62605);

// block var orig_code_62607
    DeRef(_orig_code_62607);

// block var orig_linetable_62608
    DeRef(_orig_linetable_62608);

// block var ar_sp_62612

// block var pre_refs_62616

// block var old_fwd_params_62631
    DeRef(_old_fwd_params_62631);

// block var temp_shifting_sub_62672

// block var new_code_62676
    DeRef(_new_code_62676);
    return;
    // SubProg patch_forward_call pc: 116 op: NOP1 (159)
L1: // addr: 117 pc: 116 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 117 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var defarg_62468
    DeRef(_defarg_62468);
    _defarg_62468 = NOVALUE;

// block var paramsym_62472

// block var old_62475
    DeRef(_old_62475);
    _old_62475 = NOVALUE;

// block var tx_62479
    // SubProg patch_forward_call pc: 119 op: STARTLINE (58)

    /** fwdref.e:255		integer code_sub = fr[FR_SUBPROG]*/
    // SubProg patch_forward_call pc: 121 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62459);
    _code_sub_62489 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_code_sub_62489))
    _code_sub_62489 = (object)DBL_PTR(_code_sub_62489)->dbl;
    // SubProg patch_forward_call pc: 125 op: STARTLINE (58)

    /** fwdref.e:257		integer args = SymTab[sub][S_NUM_ARGS]*/
    // SubProg patch_forward_call pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 129 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31012 = (object)*(((s1_ptr)_2)->base + _sub_62462);
    // SubProg patch_forward_call pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31012);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _args_62491 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _args_62491 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    if (!IS_ATOM_INT(_args_62491)){
        _args_62491 = (object)DBL_PTR(_args_62491)->dbl;
    }
    _31012 = NOVALUE;
    // SubProg patch_forward_call pc: 141 op: STARTLINE (58)

    /** fwdref.e:258		integer is_func = (SymTab[sub][S_TOKEN] = FUNC) or (SymTab[sub][S_TOKEN] = TYPE)*/
    // SubProg patch_forward_call pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 145 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31014 = (object)*(((s1_ptr)_2)->base + _sub_62462);
    // SubProg patch_forward_call pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31014);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _31015 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _31015 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _31014 = NOVALUE;
    // SubProg patch_forward_call pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 157 op: EQUALS (3)
    if (IS_ATOM_INT(_31015)) {
        _31016 = (_31015 == 501);
    }
    else {
        _31016 = binary_op(EQUALS, _31015, 501);
    }
    _31015 = NOVALUE;
    // SubProg patch_forward_call pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31017 = (object)*(((s1_ptr)_2)->base + _sub_62462);
    // SubProg patch_forward_call pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 169 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31017);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _31018 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _31018 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _31017 = NOVALUE;
    // SubProg patch_forward_call pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 175 op: EQUALS (3)
    if (IS_ATOM_INT(_31018)) {
        _31019 = (_31018 == 504);
    }
    else {
        _31019 = binary_op(EQUALS, _31018, 504);
    }
    _31018 = NOVALUE;
    // SubProg patch_forward_call pc: 179 op: OR (9)
    if (IS_ATOM_INT(_31016) && IS_ATOM_INT(_31019)) {
        _is_func_62496 = (_31016 != 0 || _31019 != 0);
    }
    else {
        _is_func_62496 = binary_op(OR, _31016, _31019);
    }
    DeRef(_31016);
    _31016 = NOVALUE;
    DeRef(_31019);
    _31019 = NOVALUE;
    // SubProg patch_forward_call pc: 183 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_func_62496)) {
        _1 = (object)(DBL_PTR(_is_func_62496)->dbl);
        DeRefDS(_is_func_62496);
        _is_func_62496 = _1;
    }
    // SubProg patch_forward_call pc: 185 op: STARTLINE (58)

    /** fwdref.e:260		integer real_file = current_file_no*/
    // SubProg patch_forward_call pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 189 op: ASSIGN (18)
    _real_file_62510 = _5current_file_no_12477;
    // SubProg patch_forward_call pc: 192 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 194 op: STARTLINE (58)

    /** fwdref.e:261		current_file_no = fr[FR_FILE]*/
    // SubProg patch_forward_call pc: 196 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _5current_file_no_12477 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_5current_file_no_12477)){
        _5current_file_no_12477 = (object)DBL_PTR(_5current_file_no_12477)->dbl;
    }
    // SubProg patch_forward_call pc: 202 op: STARTLINE (58)

    /** fwdref.e:263		set_code( ref )*/
    // SubProg patch_forward_call pc: 204 op: PROC (27)
    _30set_code(_ref_62458);
    // SubProg patch_forward_call pc: 207 op: STARTLINE (58)

    /** fwdref.e:264		sequence code = Code*/
    // SubProg patch_forward_call pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 211 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_code_62514);
    _code_62514 = _5Code_12566;
    // SubProg patch_forward_call pc: 214 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 216 op: STARTLINE (58)

    /** fwdref.e:265		integer temp_sub = CurrentSub*/
    // SubProg patch_forward_call pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 220 op: ASSIGN (18)
    _temp_sub_62516 = _5CurrentSub_12485;
    // SubProg patch_forward_call pc: 223 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 225 op: STARTLINE (58)

    /** fwdref.e:267		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_call pc: 227 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62459);
    _pc_62518 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62518))
    _pc_62518 = (object)DBL_PTR(_pc_62518)->dbl;
    // SubProg patch_forward_call pc: 231 op: STARTLINE (58)

    /** fwdref.e:268		integer next_pc = pc*/
    // SubProg patch_forward_call pc: 233 op: ASSIGN_I (113)
    _next_pc_62520 = _pc_62518;
    // SubProg patch_forward_call pc: 236 op: STARTLINE (58)

    /** fwdref.e:269		integer supplied_args = code[pc+2]*/
    // SubProg patch_forward_call pc: 238 op: PLUS (11)
    _31023 = _pc_62518 + 2;
    // SubProg patch_forward_call pc: 242 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_code_62514);
    _supplied_args_62521 = (object)*(((s1_ptr)_2)->base + _31023);
    if (!IS_ATOM_INT(_supplied_args_62521))
    _supplied_args_62521 = (object)DBL_PTR(_supplied_args_62521)->dbl;
    // SubProg patch_forward_call pc: 246 op: STARTLINE (58)

    /** fwdref.e:270		sequence name = fr[FR_NAME]*/
    // SubProg patch_forward_call pc: 248 op: RHS_SUBS (25)
    DeRef(_name_62524);
    _2 = (object)SEQ_PTR(_fr_62459);
    _name_62524 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_62524);
    // SubProg patch_forward_call pc: 252 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 254 op: STARTLINE (58)

    /** fwdref.e:272		if Code[pc] != FUNC_FORWARD and Code[pc] != PROC_FORWARD then*/
    // SubProg patch_forward_call pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    _31026 = (object)*(((s1_ptr)_2)->base + _pc_62518);
    // SubProg patch_forward_call pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 264 op: NOTEQ (4)
    if (IS_ATOM_INT(_31026)) {
        _31027 = (_31026 != 196);
    }
    else {
        _31027 = binary_op(NOTEQ, _31026, 196);
    }
    _31026 = NOVALUE;
    // SubProg patch_forward_call pc: 268 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31027)) {
        if (_31027 == 0) {
            goto L2; // [268] 332
        }
    }
    else {
        if (DBL_PTR(_31027)->dbl == 0.0) {
            goto L2; // [268] 332
        }
    }
    // SubProg patch_forward_call pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 274 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    _31029 = (object)*(((s1_ptr)_2)->base + _pc_62518);
    // SubProg patch_forward_call pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 280 op: NOTEQ (4)
    if (IS_ATOM_INT(_31029)) {
        _31030 = (_31029 != 195);
    }
    else {
        _31030 = binary_op(NOTEQ, _31029, 195);
    }
    _31029 = NOVALUE;
    // SubProg patch_forward_call pc: 284 op: NOP1 (159)
    // SubProg patch_forward_call pc: 285 op: IF (20)
    if (_31030 == 0) {
        DeRef(_31030);
        _31030 = NOVALUE;
        goto L2; // [285] 332
    }
    else {
        if (!IS_ATOM_INT(_31030) && DBL_PTR(_31030)->dbl == 0.0){
            DeRef(_31030);
            _31030 = NOVALUE;
            goto L2; // [285] 332
        }
        DeRef(_31030);
        _31030 = NOVALUE;
    }
    DeRef(_31030);
    _31030 = NOVALUE;
    // SubProg patch_forward_call pc: 288 op: STARTLINE (58)

    /** fwdref.e:273			prep_forward_error( ref )*/
    // SubProg patch_forward_call pc: 290 op: PROC (27)
    _30prep_forward_error(_ref_62458);
    // SubProg patch_forward_call pc: 293 op: STARTLINE (58)

    /** fwdref.e:274			CompileErr( "The forward call to [4] wasn't where we thought it would be: [1]:[2]:[3]",*/
    // SubProg patch_forward_call pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _31032 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg patch_forward_call pc: 303 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31033 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_call pc: 307 op: PROC (27)
    Ref(_31033);
    _31034 = _53sym_name(_31033);
    _31033 = NOVALUE;
    // SubProg patch_forward_call pc: 311 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31035 = (object)*(((s1_ptr)_2)->base + 6);
    // SubProg patch_forward_call pc: 315 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31036 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_call pc: 319 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_31032);
    ((intptr_t*)_2)[1] = _31032;
    ((intptr_t*)_2)[2] = _31034;
    Ref(_31035);
    ((intptr_t*)_2)[3] = _31035;
    Ref(_31036);
    ((intptr_t*)_2)[4] = _31036;
    _31037 = MAKE_SEQ(_1);
    _31036 = NOVALUE;
    _31035 = NOVALUE;
    _31034 = NOVALUE;
    _31032 = NOVALUE;
    // SubProg patch_forward_call pc: 326 op: PROC (27)
    RefDS(_31031);
    _49CompileErr(_31031, _31037, 0);
    _31037 = NOVALUE;
    // SubProg patch_forward_call pc: 331 op: NOP1 (159)
L2: // addr: 332 pc: 331 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 332 op: STARTLINE (58)

    /** fwdref.e:278		if SymTab[sub][S_DEPRECATED] then*/
    // SubProg patch_forward_call pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 336 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31038 = (object)*(((s1_ptr)_2)->base + _sub_62462);
    // SubProg patch_forward_call pc: 340 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 342 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31038);
    _31039 = (object)*(((s1_ptr)_2)->base + 30);
    _31038 = NOVALUE;
    // SubProg patch_forward_call pc: 346 op: IF (20)
    if (_31039 == 0) {
        _31039 = NOVALUE;
        goto L3; // [346] 375
    }
    else {
        if (!IS_ATOM_INT(_31039) && DBL_PTR(_31039)->dbl == 0.0){
            _31039 = NOVALUE;
            goto L3; // [346] 375
        }
        _31039 = NOVALUE;
    }
    _31039 = NOVALUE;
    // SubProg patch_forward_call pc: 349 op: STARTLINE (58)

    /** fwdref.e:279			Warning(327, deprecated_warning_flag, { SymTab[sub][S_NAME] })*/
    // SubProg patch_forward_call pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 355 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31040 = (object)*(((s1_ptr)_2)->base + _sub_62462);
    // SubProg patch_forward_call pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 361 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31040);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _31041 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _31041 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _31040 = NOVALUE;
    // SubProg patch_forward_call pc: 365 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_31041);
    ((intptr_t*)_2)[1] = _31041;
    _31042 = MAKE_SEQ(_1);
    _31041 = NOVALUE;
    // SubProg patch_forward_call pc: 369 op: PROC (27)
    _49Warning(327, 16384, _31042);
    _31042 = NOVALUE;
    // SubProg patch_forward_call pc: 374 op: NOP1 (159)
L3: // addr: 375 pc: 374 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 375 op: STARTLINE (58)

    /** fwdref.e:282		integer old_temps_allocated = temps_allocated*/
    // SubProg patch_forward_call pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 379 op: ASSIGN (18)
    _old_temps_allocated_62560 = _53temps_allocated_46856;
    // SubProg patch_forward_call pc: 382 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 384 op: STARTLINE (58)

    /** fwdref.e:283		temps_allocated = 0*/
    // SubProg patch_forward_call pc: 386 op: ASSIGN (18)
    _53temps_allocated_46856 = 0;
    // SubProg patch_forward_call pc: 389 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 391 op: STARTLINE (58)

    /** fwdref.e:285		if is_func and fr[FR_OP] = PROC then*/
    // SubProg patch_forward_call pc: 393 op: SC1_AND_IF (146)
    if (_is_func_62496 == 0) {
        goto L4; // [393] 481
    }
    // SubProg patch_forward_call pc: 397 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31044 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_call pc: 401 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 403 op: EQUALS (3)
    if (IS_ATOM_INT(_31044)) {
        _31045 = (_31044 == 27);
    }
    else {
        _31045 = binary_op(EQUALS, _31044, 27);
    }
    _31044 = NOVALUE;
    // SubProg patch_forward_call pc: 407 op: NOP1 (159)
    // SubProg patch_forward_call pc: 408 op: IF (20)
    if (_31045 == 0) {
        DeRef(_31045);
        _31045 = NOVALUE;
        goto L4; // [408] 481
    }
    else {
        if (!IS_ATOM_INT(_31045) && DBL_PTR(_31045)->dbl == 0.0){
            DeRef(_31045);
            _31045 = NOVALUE;
            goto L4; // [408] 481
        }
        DeRef(_31045);
        _31045 = NOVALUE;
    }
    DeRef(_31045);
    _31045 = NOVALUE;
    // SubProg patch_forward_call pc: 411 op: STARTLINE (58)

    /** fwdref.e:288			symtab_index temp_target = NewTempSym()*/
    // SubProg patch_forward_call pc: 413 op: PROC (27)
    _temp_target_62569 = _53NewTempSym(0);
    // SubProg patch_forward_call pc: 417 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_temp_target_62569)) {
        _1 = (object)(DBL_PTR(_temp_target_62569)->dbl);
        DeRefDS(_temp_target_62569);
        _temp_target_62569 = _1;
    }
    // SubProg patch_forward_call pc: 419 op: STARTLINE (58)

    /** fwdref.e:289			sequence converted_code = */
    // SubProg patch_forward_call pc: 421 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 423 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 425 op: PLUS1 (93)
    _31047 = _pc_62518 + 1;
    if (_31047 > MAXINT){
        _31047 = NewDouble((eudouble)_31047);
    }
    // SubProg patch_forward_call pc: 429 op: PLUS (11)
    _31048 = _pc_62518 + 2;
    if ((object)((uintptr_t)_31048 + (uintptr_t)HIGH_BITS) >= 0){
        _31048 = NewDouble((eudouble)_31048);
    }
    // SubProg patch_forward_call pc: 433 op: PLUS (11)
    if (IS_ATOM_INT(_31048)) {
        _31049 = _31048 + _supplied_args_62521;
    }
    else {
        _31049 = NewDouble(DBL_PTR(_31048)->dbl + (eudouble)_supplied_args_62521);
    }
    DeRef(_31048);
    _31048 = NOVALUE;
    // SubProg patch_forward_call pc: 437 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_31050;
    RHS_Slice(_5Code_12566, _31047, _31049);
    // SubProg patch_forward_call pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 444 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 208;
    ((intptr_t *)_2)[2] = _temp_target_62569;
    _31051 = MAKE_SEQ(_1);
    // SubProg patch_forward_call pc: 448 op: CONCAT_N (157)
    {
        object concat_list[4];

        concat_list[0] = _31051;
        concat_list[1] = _temp_target_62569;
        concat_list[2] = _31050;
        concat_list[3] = 196;
        Concat_N((object_ptr)&_converted_code_62572, concat_list, 4);
    }
    DeRefDS(_31051);
    _31051 = NOVALUE;
    DeRefDS(_31050);
    _31050 = NOVALUE;
    // SubProg patch_forward_call pc: 455 op: STARTLINE (58)

    /** fwdref.e:295			replace_code( converted_code, pc, pc + 2 + supplied_args, code_sub )*/
    // SubProg patch_forward_call pc: 457 op: PLUS (11)
    _31053 = _pc_62518 + 2;
    if ((object)((uintptr_t)_31053 + (uintptr_t)HIGH_BITS) >= 0){
        _31053 = NewDouble((eudouble)_31053);
    }
    // SubProg patch_forward_call pc: 461 op: PLUS (11)
    if (IS_ATOM_INT(_31053)) {
        _31054 = _31053 + _supplied_args_62521;
        if ((object)((uintptr_t)_31054 + (uintptr_t)HIGH_BITS) >= 0){
            _31054 = NewDouble((eudouble)_31054);
        }
    }
    else {
        _31054 = NewDouble(DBL_PTR(_31053)->dbl + (eudouble)_supplied_args_62521);
    }
    DeRef(_31053);
    _31053 = NOVALUE;
    // SubProg patch_forward_call pc: 465 op: PROC (27)
    RefDS(_converted_code_62572);
    _30replace_code(_converted_code_62572, _pc_62518, _31054, _code_sub_62489);
    _31054 = NOVALUE;
    // SubProg patch_forward_call pc: 471 op: STARTLINE (58)

    /** fwdref.e:297			code = Code*/
    // SubProg patch_forward_call pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 475 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_code_62514);
    _code_62514 = _5Code_12566;
    // SubProg patch_forward_call pc: 478 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 480 op: NOP1 (159)
L4: // addr: 481 pc: 480 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 481 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var temp_target_62569

// block var converted_code_62572
    DeRef(_converted_code_62572);
    _converted_code_62572 = NOVALUE;
    // SubProg patch_forward_call pc: 483 op: STARTLINE (58)

    /** fwdref.e:299		next_pc +=*/
    // SubProg patch_forward_call pc: 485 op: PLUS (11)
    _31055 = 3 + _supplied_args_62521;
    if ((object)((uintptr_t)_31055 + (uintptr_t)HIGH_BITS) >= 0){
        _31055 = NewDouble((eudouble)_31055);
    }
    // SubProg patch_forward_call pc: 489 op: PLUS (11)
    if (IS_ATOM_INT(_31055)) {
        _31056 = _31055 + _is_func_62496;
        if ((object)((uintptr_t)_31056 + (uintptr_t)HIGH_BITS) >= 0){
            _31056 = NewDouble((eudouble)_31056);
        }
    }
    else {
        _31056 = NewDouble(DBL_PTR(_31055)->dbl + (eudouble)_is_func_62496);
    }
    DeRef(_31055);
    _31055 = NOVALUE;
    // SubProg patch_forward_call pc: 493 op: PLUS (11)
    if (IS_ATOM_INT(_31056)) {
        _next_pc_62520 = _next_pc_62520 + _31056;
    }
    else {
        _next_pc_62520 = NewDouble((eudouble)_next_pc_62520 + DBL_PTR(_31056)->dbl);
    }
    DeRef(_31056);
    _31056 = NOVALUE;
    // SubProg patch_forward_call pc: 497 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_next_pc_62520)) {
        _1 = (object)(DBL_PTR(_next_pc_62520)->dbl);
        DeRefDS(_next_pc_62520);
        _next_pc_62520 = _1;
    }
    // SubProg patch_forward_call pc: 499 op: STARTLINE (58)

    /** fwdref.e:303		integer target*/
    // SubProg patch_forward_call pc: 501 op: STARTLINE (58)

    /** fwdref.e:304		if is_func then*/
    // SubProg patch_forward_call pc: 503 op: IF (20)
    if (_is_func_62496 == 0)
    {
        goto L5; // [503] 525
    }
    else{
    }
    // SubProg patch_forward_call pc: 506 op: STARTLINE (58)

    /** fwdref.e:305			target = Code[pc + 3 + supplied_args]*/
    // SubProg patch_forward_call pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 510 op: PLUS (11)
    _31058 = _pc_62518 + 3;
    if ((object)((uintptr_t)_31058 + (uintptr_t)HIGH_BITS) >= 0){
        _31058 = NewDouble((eudouble)_31058);
    }
    // SubProg patch_forward_call pc: 514 op: PLUS (11)
    if (IS_ATOM_INT(_31058)) {
        _31059 = _31058 + _supplied_args_62521;
    }
    else {
        _31059 = NewDouble(DBL_PTR(_31058)->dbl + (eudouble)_supplied_args_62521);
    }
    DeRef(_31058);
    _31058 = NOVALUE;
    // SubProg patch_forward_call pc: 518 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    if (!IS_ATOM_INT(_31059)){
        _target_62588 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31059)->dbl));
    }
    else{
        _target_62588 = (object)*(((s1_ptr)_2)->base + _31059);
    }
    if (!IS_ATOM_INT(_target_62588)){
        _target_62588 = (object)DBL_PTR(_target_62588)->dbl;
    }
    // SubProg patch_forward_call pc: 524 op: NOP1 (159)
L5: // addr: 525 pc: 524 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 525 op: STARTLINE (58)

    /** fwdref.e:307		integer has_defaults = 0*/
    // SubProg patch_forward_call pc: 527 op: ASSIGN_I (113)
    _has_defaults_62594 = 0;
    // SubProg patch_forward_call pc: 530 op: STARTLINE (58)

    /** fwdref.e:308		integer goto_target = length( code ) + 1*/
    // SubProg patch_forward_call pc: 532 op: LENGTH (42)
    if (IS_SEQUENCE(_code_62514)){
            _31061 = SEQ_PTR(_code_62514)->length;
    }
    else {
        _31061 = 1;
    }
    // SubProg patch_forward_call pc: 535 op: PLUS1_I (117)
    _goto_target_62595 = _31061 + 1;
    _31061 = NOVALUE;
    // SubProg patch_forward_call pc: 539 op: STARTLINE (58)

    /** fwdref.e:309		integer defarg = 0*/
    // SubProg patch_forward_call pc: 541 op: ASSIGN_I (113)
    _defarg_62598 = 0;
    // SubProg patch_forward_call pc: 544 op: STARTLINE (58)

    /** fwdref.e:310		integer code_len = length(code)*/
    // SubProg patch_forward_call pc: 546 op: LENGTH (42)
    if (IS_SEQUENCE(_code_62514)){
            _code_len_62599 = SEQ_PTR(_code_62514)->length;
    }
    else {
        _code_len_62599 = 1;
    }
    // SubProg patch_forward_call pc: 549 op: STARTLINE (58)

    /** fwdref.e:312		integer extra_default_args = 0*/
    // SubProg patch_forward_call pc: 551 op: ASSIGN_I (113)
    _extra_default_args_62601 = 0;
    // SubProg patch_forward_call pc: 554 op: STARTLINE (58)

    /** fwdref.e:313		set_dont_read( 1 )*/
    // SubProg patch_forward_call pc: 556 op: PROC (27)
    _61set_dont_read(1);
    // SubProg patch_forward_call pc: 559 op: STARTLINE (58)

    /** fwdref.e:314		reset_private_lists()*/
    // SubProg patch_forward_call pc: 561 op: STARTLINE (58)

    /** fwdref.e:212		fwd_private_sym  = {}*/
    // SubProg patch_forward_call pc: 563 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_30fwd_private_sym_62420);
    _30fwd_private_sym_62420 = _21958;
    // SubProg patch_forward_call pc: 566 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 568 op: STARTLINE (58)

    /** fwdref.e:213		fwd_private_name = {}*/
    // SubProg patch_forward_call pc: 570 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30fwd_private_name_62421);
    _30fwd_private_name_62421 = _21958;
    // SubProg patch_forward_call pc: 573 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 575 op: STARTLINE (58)

    /** fwdref.e:214	end procedure*/
    // SubProg patch_forward_call pc: 577 op: ELSE (23)
    goto L6; // [577] 580
    // SubProg patch_forward_call pc: 579 op: NOP1 (159)
L6: // addr: 580 pc: 579 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 580 op: STARTLINE (58)

    /** fwdref.e:315		integer param_sym = sub*/
    // SubProg patch_forward_call pc: 582 op: ASSIGN (18)
    _param_sym_62604 = _sub_62462;
    // SubProg patch_forward_call pc: 585 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 587 op: STARTLINE (58)

    /** fwdref.e:316		sequence params = repeat( 0, args )*/
    // SubProg patch_forward_call pc: 589 op: REPEAT (32)
    DeRef(_params_62605);
    _params_62605 = Repeat(0, _args_62491);
    // SubProg patch_forward_call pc: 593 op: STARTLINE (58)

    /** fwdref.e:317		sequence orig_code = code*/
    // SubProg patch_forward_call pc: 595 op: ASSIGN (18)
    RefDS(_code_62514);
    DeRef(_orig_code_62607);
    _orig_code_62607 = _code_62514;
    // SubProg patch_forward_call pc: 598 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 600 op: STARTLINE (58)

    /** fwdref.e:318		sequence orig_linetable = LineTable*/
    // SubProg patch_forward_call pc: 602 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 604 op: ASSIGN (18)
    RefDS(_5LineTable_12567);
    DeRef(_orig_linetable_62608);
    _orig_linetable_62608 = _5LineTable_12567;
    // SubProg patch_forward_call pc: 607 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 609 op: STARTLINE (58)

    /** fwdref.e:319		LineTable = {}*/
    // SubProg patch_forward_call pc: 611 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_5LineTable_12567);
    _5LineTable_12567 = _21958;
    // SubProg patch_forward_call pc: 614 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 616 op: STARTLINE (58)

    /** fwdref.e:320		Code = {}*/
    // SubProg patch_forward_call pc: 618 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_5Code_12566);
    _5Code_12566 = _21958;
    // SubProg patch_forward_call pc: 621 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 623 op: STARTLINE (58)

    /** fwdref.e:323		integer ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    // SubProg patch_forward_call pc: 625 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 629 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _31065 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg patch_forward_call pc: 633 op: FIND_FROM (176)
    _ar_sp_62612 = find_from(_code_sub_62489, _31065, 1);
    _31065 = NOVALUE;
    // SubProg patch_forward_call pc: 638 op: STARTLINE (58)

    /** fwdref.e:324		integer pre_refs*/
    // SubProg patch_forward_call pc: 640 op: STARTLINE (58)

    /** fwdref.e:326		if code_sub = TopLevelSub then*/
    // SubProg patch_forward_call pc: 642 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 644 op: EQUALS_IFW (104)
    if (_code_sub_62489 != _5TopLevelSub_12484)
    goto L7; // [644] 664
    // SubProg patch_forward_call pc: 648 op: STARTLINE (58)

    /** fwdref.e:327			pre_refs = length( toplevel_references[current_file_no] )*/
    // SubProg patch_forward_call pc: 650 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 652 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 654 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    _31068 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg patch_forward_call pc: 658 op: LENGTH (42)
    if (IS_SEQUENCE(_31068)){
            _pre_refs_62616 = SEQ_PTR(_31068)->length;
    }
    else {
        _pre_refs_62616 = 1;
    }
    _31068 = NOVALUE;
    // SubProg patch_forward_call pc: 661 op: ELSE (23)
    goto L8; // [661] 697
    // SubProg patch_forward_call pc: 663 op: NOP1 (159)
L7: // addr: 664 pc: 663 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 664 op: STARTLINE (58)

    /** fwdref.e:329			ar_sp = find( code_sub, active_subprogs[current_file_no] )*/
    // SubProg patch_forward_call pc: 666 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 668 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 670 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _31070 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg patch_forward_call pc: 674 op: FIND_FROM (176)
    _ar_sp_62612 = find_from(_code_sub_62489, _31070, 1);
    _31070 = NOVALUE;
    // SubProg patch_forward_call pc: 679 op: STARTLINE (58)

    /** fwdref.e:330			pre_refs = length( active_references[current_file_no][ar_sp] )*/
    // SubProg patch_forward_call pc: 681 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 683 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 685 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _31072 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg patch_forward_call pc: 689 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31072);
    _31073 = (object)*(((s1_ptr)_2)->base + _ar_sp_62612);
    _31072 = NOVALUE;
    // SubProg patch_forward_call pc: 693 op: LENGTH (42)
    if (IS_SEQUENCE(_31073)){
            _pre_refs_62616 = SEQ_PTR(_31073)->length;
    }
    else {
        _pre_refs_62616 = 1;
    }
    _31073 = NOVALUE;
    // SubProg patch_forward_call pc: 696 op: NOP1 (159)
L8: // addr: 697 pc: 696 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 697 op: STARTLINE (58)

    /** fwdref.e:333		sequence old_fwd_params = {}*/
    // SubProg patch_forward_call pc: 699 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_old_fwd_params_62631);
    _old_fwd_params_62631 = _21958;
    // SubProg patch_forward_call pc: 702 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 704 op: STARTLINE (58)

    /** fwdref.e:334		for i = pc + 3 to pc + args + 2 do*/
    // SubProg patch_forward_call pc: 706 op: PLUS (11)
    _31075 = _pc_62518 + 3;
    if ((object)((uintptr_t)_31075 + (uintptr_t)HIGH_BITS) >= 0){
        _31075 = NewDouble((eudouble)_31075);
    }
    // SubProg patch_forward_call pc: 710 op: PLUS (11)
    _31076 = _pc_62518 + _args_62491;
    if ((object)((uintptr_t)_31076 + (uintptr_t)HIGH_BITS) >= 0){
        _31076 = NewDouble((eudouble)_31076);
    }
    // SubProg patch_forward_call pc: 714 op: PLUS (11)
    if (IS_ATOM_INT(_31076)) {
        _31077 = _31076 + 2;
        if ((object)((uintptr_t)_31077 + (uintptr_t)HIGH_BITS) >= 0){
            _31077 = NewDouble((eudouble)_31077);
        }
    }
    else {
        _31077 = NewDouble(DBL_PTR(_31076)->dbl + (eudouble)2);
    }
    DeRef(_31076);
    _31076 = NOVALUE;
    // SubProg patch_forward_call pc: 718 op: FOR (21)
    {
        object _i_62633;
        Ref(_31075);
        _i_62633 = _31075;
L9: // addr: 725 pc: 718 sub: 62454 op: 21
        if (binary_op_a(GREATER, _i_62633, _31077)){
            goto LA; // [718] 879
        }
        // SubProg patch_forward_call pc: 725 op: STARTLINE (58)

        /** fwdref.e:335			defarg += 1*/
        // SubProg patch_forward_call pc: 727 op: PLUS1_I (117)
        _defarg_62598 = _defarg_62598 + 1;
        // SubProg patch_forward_call pc: 731 op: STARTLINE (58)

        /** fwdref.e:336			param_sym = SymTab[param_sym][S_NEXT]*/
        // SubProg patch_forward_call pc: 733 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 735 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _31079 = (object)*(((s1_ptr)_2)->base + _param_sym_62604);
        // SubProg patch_forward_call pc: 739 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 741 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31079);
        _param_sym_62604 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_sym_62604)){
            _param_sym_62604 = (object)DBL_PTR(_param_sym_62604)->dbl;
        }
        _31079 = NOVALUE;
        // SubProg patch_forward_call pc: 747 op: STARTLINE (58)

        /** fwdref.e:337			if defarg > supplied_args or i > length( code ) or not code[i] then*/
        // SubProg patch_forward_call pc: 749 op: GREATER (6)
        _31081 = (_defarg_62598 > _supplied_args_62521);
        // SubProg patch_forward_call pc: 753 op: SC1_OR (143)
        if (_31081 != 0) {
            _31082 = 1;
            goto LB; // [753] 768
        }
        // SubProg patch_forward_call pc: 757 op: LENGTH (42)
        if (IS_SEQUENCE(_code_62514)){
                _31083 = SEQ_PTR(_code_62514)->length;
        }
        else {
            _31083 = 1;
        }
        // SubProg patch_forward_call pc: 760 op: GREATER (6)
        if (IS_ATOM_INT(_i_62633)) {
            _31084 = (_i_62633 > _31083);
        }
        else {
            _31084 = (DBL_PTR(_i_62633)->dbl > (eudouble)_31083);
        }
        _31083 = NOVALUE;
        // SubProg patch_forward_call pc: 764 op: SC2_OR (144)
        _31082 = (_31084 != 0);
        // SubProg patch_forward_call pc: 767 op: NOP1 (159)
LB: // addr: 768 pc: 767 sub: 62454 op: 159
        // SubProg patch_forward_call pc: 768 op: SC1_OR_IF (147)
        if (_31082 != 0) {
            goto LC; // [768] 784
        }
        // SubProg patch_forward_call pc: 772 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62514);
        if (!IS_ATOM_INT(_i_62633)){
            _31086 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62633)->dbl));
        }
        else{
            _31086 = (object)*(((s1_ptr)_2)->base + _i_62633);
        }
        // SubProg patch_forward_call pc: 776 op: NOT (7)
        if (IS_ATOM_INT(_31086)) {
            _31087 = (_31086 == 0);
        }
        else {
            _31087 = unary_op(NOT, _31086);
        }
        _31086 = NOVALUE;
        // SubProg patch_forward_call pc: 779 op: NOP1 (159)
        // SubProg patch_forward_call pc: 780 op: IF (20)
        if (_31087 == 0) {
            DeRef(_31087);
            _31087 = NOVALUE;
            goto LD; // [780] 834
        }
        else {
            if (!IS_ATOM_INT(_31087) && DBL_PTR(_31087)->dbl == 0.0){
                DeRef(_31087);
                _31087 = NOVALUE;
                goto LD; // [780] 834
            }
            DeRef(_31087);
            _31087 = NOVALUE;
        }
        DeRef(_31087);
        _31087 = NOVALUE;
        // SubProg patch_forward_call pc: 783 op: NOP1 (159)
LC: // addr: 784 pc: 783 sub: 62454 op: 159
        // SubProg patch_forward_call pc: 784 op: STARTLINE (58)

        /** fwdref.e:339				has_defaults = 1*/
        // SubProg patch_forward_call pc: 786 op: ASSIGN_I (113)
        _has_defaults_62594 = 1;
        // SubProg patch_forward_call pc: 789 op: STARTLINE (58)

        /** fwdref.e:340				extra_default_args += 1*/
        // SubProg patch_forward_call pc: 791 op: PLUS1_I (117)
        _extra_default_args_62601 = _extra_default_args_62601 + 1;
        // SubProg patch_forward_call pc: 795 op: STARTLINE (58)

        /** fwdref.e:345				show_params( sub )*/
        // SubProg patch_forward_call pc: 797 op: PROC (27)
        _53show_params(_sub_62462);
        // SubProg patch_forward_call pc: 800 op: STARTLINE (58)

        /** fwdref.e:346				set_error_info( ref )*/
        // SubProg patch_forward_call pc: 802 op: PROC (27)
        _30set_error_info(_ref_62458);
        // SubProg patch_forward_call pc: 805 op: STARTLINE (58)

        /** fwdref.e:347				Parse_default_arg(sub, defarg, fwd_private_name, fwd_private_sym) --call_proc( parse_arg_rid, { sub, defarg, fwd_private_name, fwd_private_sym } )*/
        // SubProg patch_forward_call pc: 807 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 809 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 811 op: PROC (27)
        RefDS(_30fwd_private_name_62421);
        RefDS(_30fwd_private_sym_62420);
        _31Parse_default_arg(_sub_62462, _defarg_62598, _30fwd_private_name_62421, _30fwd_private_sym_62420);
        // SubProg patch_forward_call pc: 817 op: STARTLINE (58)

        /** fwdref.e:348				hide_params( sub )*/
        // SubProg patch_forward_call pc: 819 op: PROC (27)
        _53hide_params(_sub_62462);
        // SubProg patch_forward_call pc: 822 op: STARTLINE (58)

        /** fwdref.e:349				params[defarg] = Pop()*/
        // SubProg patch_forward_call pc: 824 op: PROC (27)
        _31089 = _45Pop();
        // SubProg patch_forward_call pc: 827 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_params_62605);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62598);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31089;
        if( _1 != _31089 ){
            DeRef(_1);
        }
        _31089 = NOVALUE;
        // SubProg patch_forward_call pc: 831 op: ELSE (23)
        goto LE; // [831] 872
        // SubProg patch_forward_call pc: 833 op: NOP1 (159)
LD: // addr: 834 pc: 833 sub: 62454 op: 159
        // SubProg patch_forward_call pc: 834 op: STARTLINE (58)

        /** fwdref.e:351				extra_default_args = 0*/
        // SubProg patch_forward_call pc: 836 op: ASSIGN_I (113)
        _extra_default_args_62601 = 0;
        // SubProg patch_forward_call pc: 839 op: STARTLINE (58)

        /** fwdref.e:352				add_private_symbol( code[i], SymTab[param_sym][S_NAME] )*/
        // SubProg patch_forward_call pc: 841 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62514);
        if (!IS_ATOM_INT(_i_62633)){
            _31090 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62633)->dbl));
        }
        else{
            _31090 = (object)*(((s1_ptr)_2)->base + _i_62633);
        }
        // SubProg patch_forward_call pc: 845 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 847 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _31091 = (object)*(((s1_ptr)_2)->base + _param_sym_62604);
        // SubProg patch_forward_call pc: 851 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 853 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31091);
        if (!IS_ATOM_INT(_5S_NAME_12132)){
            _31092 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
        }
        else{
            _31092 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
        }
        _31091 = NOVALUE;
        // SubProg patch_forward_call pc: 857 op: PROC (27)
        Ref(_31090);
        Ref(_31092);
        _30add_private_symbol(_31090, _31092);
        _31090 = NOVALUE;
        _31092 = NOVALUE;
        // SubProg patch_forward_call pc: 861 op: STARTLINE (58)

        /** fwdref.e:353				params[defarg] = code[i]*/
        // SubProg patch_forward_call pc: 863 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_code_62514);
        if (!IS_ATOM_INT(_i_62633)){
            _31093 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62633)->dbl));
        }
        else{
            _31093 = (object)*(((s1_ptr)_2)->base + _i_62633);
        }
        // SubProg patch_forward_call pc: 867 op: ASSIGN_SUBS (16)
        Ref(_31093);
        _2 = (object)SEQ_PTR(_params_62605);
        _2 = (object)(((s1_ptr)_2)->base + _defarg_62598);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31093;
        if( _1 != _31093 ){
            DeRef(_1);
        }
        _31093 = NOVALUE;
        // SubProg patch_forward_call pc: 871 op: NOP1 (159)
LE: // addr: 872 pc: 871 sub: 62454 op: 159
        // SubProg patch_forward_call pc: 872 op: STARTLINE (58)

        /** fwdref.e:355		end for*/
        // SubProg patch_forward_call pc: 874 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62633;
        if (IS_ATOM_INT(_i_62633)) {
            _i_62633 = _i_62633 + 1;
            if ((object)((uintptr_t)_i_62633 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62633 = NewDouble((eudouble)_i_62633);
            }
        }
        else {
            _i_62633 = binary_op_a(PLUS, _i_62633, 1);
        }
        DeRef(_0);
        goto L9; // [874] 725
LA: // addr: 879 pc: 874 sub: 62454 op: 54
        ;
        DeRef(_i_62633);
    }
    // SubProg patch_forward_call pc: 879 op: STARTLINE (58)

    /** fwdref.e:357		SymTab[code_sub][S_STACK_SPACE] += temps_allocated*/
    // SubProg patch_forward_call pc: 881 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 883 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_code_sub_62489 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_call pc: 888 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 892 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192)){
        _31096 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    }
    else{
        _31096 = (object)*(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    }
    _31094 = NOVALUE;
    // SubProg patch_forward_call pc: 896 op: PLUS (11)
    if (IS_ATOM_INT(_31096)) {
        _31097 = _31096 + _53temps_allocated_46856;
        if ((object)((uintptr_t)_31097 + (uintptr_t)HIGH_BITS) >= 0){
            _31097 = NewDouble((eudouble)_31097);
        }
    }
    else {
        _31097 = binary_op(PLUS, _31096, _53temps_allocated_46856);
    }
    _31096 = NOVALUE;
    // SubProg patch_forward_call pc: 900 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31097;
    if( _1 != _31097 ){
        DeRef(_1);
    }
    _31097 = NOVALUE;
    _31094 = NOVALUE;
    // SubProg patch_forward_call pc: 904 op: STARTLINE (58)

    /** fwdref.e:358		temps_allocated = old_temps_allocated*/
    // SubProg patch_forward_call pc: 906 op: ASSIGN (18)
    _53temps_allocated_46856 = _old_temps_allocated_62560;
    // SubProg patch_forward_call pc: 909 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 911 op: STARTLINE (58)

    /** fwdref.e:363		integer temp_shifting_sub = shifting_sub*/
    // SubProg patch_forward_call pc: 913 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 915 op: ASSIGN_I (113)
    _temp_shifting_sub_62672 = _30shifting_sub_62249;
    // SubProg patch_forward_call pc: 918 op: STARTLINE (58)

    /** fwdref.e:364		shift( -pc, pc-1 )*/
    // SubProg patch_forward_call pc: 920 op: UMINUS (12)
    if ((uintptr_t)_pc_62518 == (uintptr_t)HIGH_BITS){
        _31098 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31098 = - _pc_62518;
    }
    // SubProg patch_forward_call pc: 923 op: MINUS (10)
    _31099 = _pc_62518 - 1;
    if ((object)((uintptr_t)_31099 +(uintptr_t) HIGH_BITS) >= 0){
        _31099 = NewDouble((eudouble)_31099);
    }
    // SubProg patch_forward_call pc: 927 op: ASSIGN (18)
    Ref(_31098);
    DeRef(_31757);
    _31757 = _31098;
    // SubProg patch_forward_call pc: 930 op: PROC (27)
    _65shift(_31098, _31099, _31757);
    _31098 = NOVALUE;
    _31099 = NOVALUE;
    _31757 = NOVALUE;
    // SubProg patch_forward_call pc: 935 op: STARTLINE (58)

    /** fwdref.e:366		sequence new_code = Code*/
    // SubProg patch_forward_call pc: 937 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 939 op: ASSIGN (18)
    RefDS(_5Code_12566);
    DeRef(_new_code_62676);
    _new_code_62676 = _5Code_12566;
    // SubProg patch_forward_call pc: 942 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 944 op: STARTLINE (58)

    /** fwdref.e:367		Code = orig_code*/
    // SubProg patch_forward_call pc: 946 op: ASSIGN (18)
    RefDS(_orig_code_62607);
    DeRefDS(_5Code_12566);
    _5Code_12566 = _orig_code_62607;
    // SubProg patch_forward_call pc: 949 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 951 op: STARTLINE (58)

    /** fwdref.e:368		orig_code = {}*/
    // SubProg patch_forward_call pc: 953 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_orig_code_62607);
    _orig_code_62607 = _21958;
    // SubProg patch_forward_call pc: 956 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 958 op: STARTLINE (58)

    /** fwdref.e:369		LineTable = orig_linetable*/
    // SubProg patch_forward_call pc: 960 op: ASSIGN (18)
    RefDS(_orig_linetable_62608);
    DeRef(_5LineTable_12567);
    _5LineTable_12567 = _orig_linetable_62608;
    // SubProg patch_forward_call pc: 963 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 965 op: STARTLINE (58)

    /** fwdref.e:370		orig_linetable = {}*/
    // SubProg patch_forward_call pc: 967 op: ASSIGN (18)
    RefDS(_21958);
    DeRefDS(_orig_linetable_62608);
    _orig_linetable_62608 = _21958;
    // SubProg patch_forward_call pc: 970 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 972 op: STARTLINE (58)

    /** fwdref.e:371		set_dont_read( 0 )*/
    // SubProg patch_forward_call pc: 974 op: PROC (27)
    _61set_dont_read(0);
    // SubProg patch_forward_call pc: 977 op: STARTLINE (58)

    /** fwdref.e:372		current_file_no = real_file*/
    // SubProg patch_forward_call pc: 979 op: ASSIGN (18)
    _5current_file_no_12477 = _real_file_62510;
    // SubProg patch_forward_call pc: 982 op: INTEGER_CHECK (96)
    // SubProg patch_forward_call pc: 984 op: STARTLINE (58)

    /** fwdref.e:374		if args != ( supplied_args + extra_default_args ) then*/
    // SubProg patch_forward_call pc: 986 op: PLUS (11)
    _31100 = _supplied_args_62521 + _extra_default_args_62601;
    if ((object)((uintptr_t)_31100 + (uintptr_t)HIGH_BITS) >= 0){
        _31100 = NewDouble((eudouble)_31100);
    }
    // SubProg patch_forward_call pc: 990 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _args_62491, _31100)){
        DeRef(_31100);
        _31100 = NOVALUE;
        goto LF; // [990] 1068
    }
    DeRef(_31100);
    _31100 = NOVALUE;
    // SubProg patch_forward_call pc: 994 op: STARTLINE (58)

    /** fwdref.e:375			sequence routine_type*/
    // SubProg patch_forward_call pc: 996 op: STARTLINE (58)

    /** fwdref.e:377			if is_func then */
    // SubProg patch_forward_call pc: 998 op: IF (20)
    if (_is_func_62496 == 0)
    {
        goto L10; // [998] 1011
    }
    else{
    }
    // SubProg patch_forward_call pc: 1001 op: STARTLINE (58)

    /** fwdref.e:378				routine_type = "function"*/
    // SubProg patch_forward_call pc: 1003 op: ASSIGN (18)
    RefDS(_26205);
    DeRefi(_routine_type_62685);
    _routine_type_62685 = _26205;
    // SubProg patch_forward_call pc: 1006 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 1008 op: ELSE (23)
    goto L11; // [1008] 1019
    // SubProg patch_forward_call pc: 1010 op: NOP1 (159)
L10: // addr: 1011 pc: 1010 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 1011 op: STARTLINE (58)

    /** fwdref.e:380				routine_type = "procedure"*/
    // SubProg patch_forward_call pc: 1013 op: ASSIGN (18)
    RefDS(_26259);
    DeRefi(_routine_type_62685);
    _routine_type_62685 = _26259;
    // SubProg patch_forward_call pc: 1016 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_call pc: 1018 op: NOP1 (159)
L11: // addr: 1019 pc: 1018 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 1019 op: STARTLINE (58)

    /** fwdref.e:382			current_file_no = fr[FR_FILE]*/
    // SubProg patch_forward_call pc: 1021 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _5current_file_no_12477 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_5current_file_no_12477)){
        _5current_file_no_12477 = (object)DBL_PTR(_5current_file_no_12477)->dbl;
    }
    // SubProg patch_forward_call pc: 1027 op: STARTLINE (58)

    /** fwdref.e:383			line_number = fr[FR_LINE]*/
    // SubProg patch_forward_call pc: 1029 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _5line_number_12478 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_5line_number_12478)){
        _5line_number_12478 = (object)DBL_PTR(_5line_number_12478)->dbl;
    }
    // SubProg patch_forward_call pc: 1035 op: STARTLINE (58)

    /** fwdref.e:384			CompileErr( 158,*/
    // SubProg patch_forward_call pc: 1037 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1039 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1041 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _31104 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg patch_forward_call pc: 1045 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1047 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1049 op: PLUS (11)
    _31105 = _supplied_args_62521 + _extra_default_args_62601;
    if ((object)((uintptr_t)_31105 + (uintptr_t)HIGH_BITS) >= 0){
        _31105 = NewDouble((eudouble)_31105);
    }
    // SubProg patch_forward_call pc: 1053 op: RIGHT_BRACE_N (31)
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_31104);
    ((intptr_t*)_2)[1] = _31104;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    RefDS(_routine_type_62685);
    ((intptr_t*)_2)[3] = _routine_type_62685;
    RefDS(_name_62524);
    ((intptr_t*)_2)[4] = _name_62524;
    ((intptr_t*)_2)[5] = _args_62491;
    ((intptr_t*)_2)[6] = _31105;
    _31106 = MAKE_SEQ(_1);
    _31105 = NOVALUE;
    _31104 = NOVALUE;
    // SubProg patch_forward_call pc: 1062 op: PROC (27)
    _49CompileErr(158, _31106, 0);
    _31106 = NOVALUE;
    // SubProg patch_forward_call pc: 1067 op: NOP1 (159)
LF: // addr: 1068 pc: 1067 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 1068 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var routine_type_62685
    DeRefi(_routine_type_62685);
    _routine_type_62685 = NOVALUE;
    // SubProg patch_forward_call pc: 1070 op: STARTLINE (58)

    /** fwdref.e:388		new_code &= PROC & sub & params*/
    // SubProg patch_forward_call pc: 1072 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1074 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _params_62605;
        concat_list[1] = _sub_62462;
        concat_list[2] = 27;
        Concat_N((object_ptr)&_31107, concat_list, 3);
    }
    // SubProg patch_forward_call pc: 1080 op: CONCAT (15)
    Concat((object_ptr)&_new_code_62676, _new_code_62676, _31107);
    DeRefDS(_31107);
    _31107 = NOVALUE;
    // SubProg patch_forward_call pc: 1084 op: STARTLINE (58)

    /** fwdref.e:389		if is_func then*/
    // SubProg patch_forward_call pc: 1086 op: IF (20)
    if (_is_func_62496 == 0)
    {
        goto L12; // [1086] 1098
    }
    else{
    }
    // SubProg patch_forward_call pc: 1089 op: STARTLINE (58)

    /** fwdref.e:390			new_code &= target*/
    // SubProg patch_forward_call pc: 1091 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1093 op: CONCAT (15)
    Append(&_new_code_62676, _new_code_62676, _target_62588);
    // SubProg patch_forward_call pc: 1097 op: NOP1 (159)
L12: // addr: 1098 pc: 1097 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 1098 op: STARTLINE (58)

    /** fwdref.e:393		replace_code( new_code, pc, next_pc - 1, code_sub )*/
    // SubProg patch_forward_call pc: 1100 op: MINUS (10)
    _31110 = _next_pc_62520 - 1;
    if ((object)((uintptr_t)_31110 +(uintptr_t) HIGH_BITS) >= 0){
        _31110 = NewDouble((eudouble)_31110);
    }
    // SubProg patch_forward_call pc: 1104 op: PROC (27)
    RefDS(_new_code_62676);
    _30replace_code(_new_code_62676, _pc_62518, _31110, _code_sub_62489);
    _31110 = NOVALUE;
    // SubProg patch_forward_call pc: 1110 op: STARTLINE (58)

    /** fwdref.e:395		if code_sub = TopLevelSub then*/
    // SubProg patch_forward_call pc: 1112 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1114 op: EQUALS_IFW (104)
    if (_code_sub_62489 != _5TopLevelSub_12484)
    goto L13; // [1114] 1195
    // SubProg patch_forward_call pc: 1118 op: STARTLINE (58)

    /** fwdref.e:396			for i = pre_refs + 1 to length( toplevel_references[fr[FR_FILE]] ) do*/
    // SubProg patch_forward_call pc: 1120 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1122 op: PLUS1 (93)
    _31112 = _pre_refs_62616 + 1;
    if (_31112 > MAXINT){
        _31112 = NewDouble((eudouble)_31112);
    }
    // SubProg patch_forward_call pc: 1126 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31113 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 1132 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    if (!IS_ATOM_INT(_31113)){
        _31114 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31113)->dbl));
    }
    else{
        _31114 = (object)*(((s1_ptr)_2)->base + _31113);
    }
    // SubProg patch_forward_call pc: 1136 op: LENGTH (42)
    if (IS_SEQUENCE(_31114)){
            _31115 = SEQ_PTR(_31114)->length;
    }
    else {
        _31115 = 1;
    }
    _31114 = NOVALUE;
    // SubProg patch_forward_call pc: 1139 op: FOR (21)
    {
        object _i_62709;
        Ref(_31112);
        _i_62709 = _31112;
L14: // addr: 1146 pc: 1139 sub: 62454 op: 21
        if (binary_op_a(GREATER, _i_62709, _31115)){
            goto L15; // [1139] 1192
        }
        // SubProg patch_forward_call pc: 1146 op: STARTLINE (58)

        /** fwdref.e:397				forward_references[toplevel_references[fr[FR_FILE]][i]][FR_PC] += pc - 1*/
        // SubProg patch_forward_call pc: 1148 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1150 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1152 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62459);
        _31116 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_call pc: 1156 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30toplevel_references_62233);
        if (!IS_ATOM_INT(_31116)){
            _31117 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31116)->dbl));
        }
        else{
            _31117 = (object)*(((s1_ptr)_2)->base + _31116);
        }
        // SubProg patch_forward_call pc: 1160 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31117);
        if (!IS_ATOM_INT(_i_62709)){
            _31118 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62709)->dbl));
        }
        else{
            _31118 = (object)*(((s1_ptr)_2)->base + _i_62709);
        }
        _31117 = NOVALUE;
        // SubProg patch_forward_call pc: 1164 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _30forward_references_62230 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31118))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31118)->dbl));
        else
        _3 = (object)(_31118 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_call pc: 1169 op: MINUS (10)
        _31121 = _pc_62518 - 1;
        if ((object)((uintptr_t)_31121 +(uintptr_t) HIGH_BITS) >= 0){
            _31121 = NewDouble((eudouble)_31121);
        }
        // SubProg patch_forward_call pc: 1173 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31122 = (object)*(((s1_ptr)_2)->base + 5);
        _31119 = NOVALUE;
        // SubProg patch_forward_call pc: 1177 op: PLUS (11)
        if (IS_ATOM_INT(_31122) && IS_ATOM_INT(_31121)) {
            _31123 = _31122 + _31121;
            if ((object)((uintptr_t)_31123 + (uintptr_t)HIGH_BITS) >= 0){
                _31123 = NewDouble((eudouble)_31123);
            }
        }
        else {
            _31123 = binary_op(PLUS, _31122, _31121);
        }
        _31122 = NOVALUE;
        DeRef(_31121);
        _31121 = NOVALUE;
        // SubProg patch_forward_call pc: 1181 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31123;
        if( _1 != _31123 ){
            DeRef(_1);
        }
        _31123 = NOVALUE;
        _31119 = NOVALUE;
        // SubProg patch_forward_call pc: 1185 op: STARTLINE (58)

        /** fwdref.e:398			end for*/
        // SubProg patch_forward_call pc: 1187 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62709;
        if (IS_ATOM_INT(_i_62709)) {
            _i_62709 = _i_62709 + 1;
            if ((object)((uintptr_t)_i_62709 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62709 = NewDouble((eudouble)_i_62709);
            }
        }
        else {
            _i_62709 = binary_op_a(PLUS, _i_62709, 1);
        }
        DeRef(_0);
        goto L14; // [1187] 1146
L15: // addr: 1192 pc: 1187 sub: 62454 op: 54
        ;
        DeRef(_i_62709);
    }
    // SubProg patch_forward_call pc: 1192 op: ELSE (23)
    goto L16; // [1192] 1278
    // SubProg patch_forward_call pc: 1194 op: NOP1 (159)
L13: // addr: 1195 pc: 1194 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 1195 op: STARTLINE (58)

    /** fwdref.e:400			for i = pre_refs + 1 to length( active_references[fr[FR_FILE]][ar_sp] ) do*/
    // SubProg patch_forward_call pc: 1197 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_call pc: 1199 op: PLUS1 (93)
    _31124 = _pre_refs_62616 + 1;
    if (_31124 > MAXINT){
        _31124 = NewDouble((eudouble)_31124);
    }
    // SubProg patch_forward_call pc: 1203 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_call pc: 1205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62459);
    _31125 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_call pc: 1209 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!IS_ATOM_INT(_31125)){
        _31126 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31125)->dbl));
    }
    else{
        _31126 = (object)*(((s1_ptr)_2)->base + _31125);
    }
    // SubProg patch_forward_call pc: 1213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31126);
    _31127 = (object)*(((s1_ptr)_2)->base + _ar_sp_62612);
    _31126 = NOVALUE;
    // SubProg patch_forward_call pc: 1217 op: LENGTH (42)
    if (IS_SEQUENCE(_31127)){
            _31128 = SEQ_PTR(_31127)->length;
    }
    else {
        _31128 = 1;
    }
    _31127 = NOVALUE;
    // SubProg patch_forward_call pc: 1220 op: FOR (21)
    {
        object _i_62724;
        Ref(_31124);
        _i_62724 = _31124;
L17: // addr: 1227 pc: 1220 sub: 62454 op: 21
        if (binary_op_a(GREATER, _i_62724, _31128)){
            goto L18; // [1220] 1277
        }
        // SubProg patch_forward_call pc: 1227 op: STARTLINE (58)

        /** fwdref.e:401				forward_references[active_references[fr[FR_FILE]][ar_sp][i]][FR_PC] += pc - 1*/
        // SubProg patch_forward_call pc: 1229 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1231 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_call pc: 1233 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62459);
        _31129 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_call pc: 1237 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30active_references_62232);
        if (!IS_ATOM_INT(_31129)){
            _31130 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31129)->dbl));
        }
        else{
            _31130 = (object)*(((s1_ptr)_2)->base + _31129);
        }
        // SubProg patch_forward_call pc: 1241 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31130);
        _31131 = (object)*(((s1_ptr)_2)->base + _ar_sp_62612);
        _31130 = NOVALUE;
        // SubProg patch_forward_call pc: 1245 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31131);
        if (!IS_ATOM_INT(_i_62724)){
            _31132 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_62724)->dbl));
        }
        else{
            _31132 = (object)*(((s1_ptr)_2)->base + _i_62724);
        }
        _31131 = NOVALUE;
        // SubProg patch_forward_call pc: 1249 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _30forward_references_62230 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31132))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31132)->dbl));
        else
        _3 = (object)(_31132 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_call pc: 1254 op: MINUS (10)
        _31135 = _pc_62518 - 1;
        if ((object)((uintptr_t)_31135 +(uintptr_t) HIGH_BITS) >= 0){
            _31135 = NewDouble((eudouble)_31135);
        }
        // SubProg patch_forward_call pc: 1258 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _31136 = (object)*(((s1_ptr)_2)->base + 5);
        _31133 = NOVALUE;
        // SubProg patch_forward_call pc: 1262 op: PLUS (11)
        if (IS_ATOM_INT(_31136) && IS_ATOM_INT(_31135)) {
            _31137 = _31136 + _31135;
            if ((object)((uintptr_t)_31137 + (uintptr_t)HIGH_BITS) >= 0){
                _31137 = NewDouble((eudouble)_31137);
            }
        }
        else {
            _31137 = binary_op(PLUS, _31136, _31135);
        }
        _31136 = NOVALUE;
        DeRef(_31135);
        _31135 = NOVALUE;
        // SubProg patch_forward_call pc: 1266 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31137;
        if( _1 != _31137 ){
            DeRef(_1);
        }
        _31137 = NOVALUE;
        _31133 = NOVALUE;
        // SubProg patch_forward_call pc: 1270 op: STARTLINE (58)

        /** fwdref.e:402			end for*/
        // SubProg patch_forward_call pc: 1272 op: ENDFOR_INT_UP1 (54)
        _0 = _i_62724;
        if (IS_ATOM_INT(_i_62724)) {
            _i_62724 = _i_62724 + 1;
            if ((object)((uintptr_t)_i_62724 +(uintptr_t) HIGH_BITS) >= 0){
                _i_62724 = NewDouble((eudouble)_i_62724);
            }
        }
        else {
            _i_62724 = binary_op_a(PLUS, _i_62724, 1);
        }
        DeRef(_0);
        goto L17; // [1272] 1227
L18: // addr: 1277 pc: 1272 sub: 62454 op: 54
        ;
        DeRef(_i_62724);
    }
    // SubProg patch_forward_call pc: 1277 op: NOP1 (159)
L16: // addr: 1278 pc: 1277 sub: 62454 op: 159
    // SubProg patch_forward_call pc: 1278 op: STARTLINE (58)

    /** fwdref.e:405		reset_code()*/
    // SubProg patch_forward_call pc: 1280 op: PROC (27)
    _30reset_code();
    // SubProg patch_forward_call pc: 1282 op: STARTLINE (58)

    /** fwdref.e:408		resolved_reference( ref )*/
    // SubProg patch_forward_call pc: 1284 op: PROC (27)
    _30resolved_reference(_ref_62458);
    // SubProg patch_forward_call pc: 1287 op: STARTLINE (58)

    /** fwdref.e:409	end procedure*/
    // SubProg patch_forward_call pc: 1289 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_call

// block var tok_62457
    DeRef(_tok_62457);

// block var ref_62458

// block var fr_62459
    DeRef(_fr_62459);

// block var sub_62462

// block var code_sub_62489

// block var args_62491

// block var is_func_62496

// block var real_file_62510

// block var code_62514
    DeRef(_code_62514);

// block var temp_sub_62516

// block var pc_62518

// block var next_pc_62520

// block var supplied_args_62521

// block var name_62524
    DeRef(_name_62524);

// block var old_temps_allocated_62560

// block var target_62588

// block var has_defaults_62594

// block var goto_target_62595

// block var defarg_62598

// block var code_len_62599

// block var extra_default_args_62601

// block var param_sym_62604

// block var params_62605
    DeRef(_params_62605);

// block var orig_code_62607
    DeRef(_orig_code_62607);

// block var orig_linetable_62608
    DeRef(_orig_linetable_62608);

// block var ar_sp_62612

// block var pre_refs_62616

// block var old_fwd_params_62631
    DeRef(_old_fwd_params_62631);

// block var temp_shifting_sub_62672

// block var new_code_62676
    DeRef(_new_code_62676);
    _31114 = NOVALUE;
    _31116 = NOVALUE;
    DeRef(_31124);
    _31124 = NOVALUE;
    DeRef(_31077);
    _31077 = NOVALUE;
    _31068 = NOVALUE;
    _31125 = NOVALUE;
    _31118 = NOVALUE;
    DeRef(_31075);
    _31075 = NOVALUE;
    DeRef(_31081);
    _31081 = NOVALUE;
    _31073 = NOVALUE;
    DeRef(_31112);
    _31112 = NOVALUE;
    DeRef(_31047);
    _31047 = NOVALUE;
    DeRef(_31084);
    _31084 = NOVALUE;
    _31129 = NOVALUE;
    DeRef(_31023);
    _31023 = NOVALUE;
    _31132 = NOVALUE;
    DeRef(_31049);
    _31049 = NOVALUE;
    DeRef(_31059);
    _31059 = NOVALUE;
    _31127 = NOVALUE;
    DeRef(_31027);
    _31027 = NOVALUE;
    _31113 = NOVALUE;
    return;
    // SubProg patch_forward_call pc: 1292 op: BADRETURNF (43)
    ;
}


void _30set_error_info(object _ref_62741)
{
    object _fr_62742 = NOVALUE;
// skipping _31142  name type: 0
// skipping _31141  name type: 0
// skipping _31140  name type: 0
// skipping _31139  name type: 0
// skipping _31138  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_error_info pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_error_info pc: 3 op: STARTLINE (58)

    /** fwdref.e:412		sequence fr = forward_references[ref]*/
    // SubProg set_error_info pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_error_info pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62742);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62742 = (object)*(((s1_ptr)_2)->base + _ref_62741);
    Ref(_fr_62742);
    // SubProg set_error_info pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg set_error_info pc: 13 op: STARTLINE (58)

    /** fwdref.e:413		ThisLine        = fr[FR_THISLINE]*/
    // SubProg set_error_info pc: 15 op: RHS_SUBS (25)
    DeRef(_49ThisLine_48781);
    _2 = (object)SEQ_PTR(_fr_62742);
    _49ThisLine_48781 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_49ThisLine_48781);
    // SubProg set_error_info pc: 19 op: STARTLINE (58)

    /** fwdref.e:414		bp              = fr[FR_BP]*/
    // SubProg set_error_info pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62742);
    _49bp_48785 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_49bp_48785)){
        _49bp_48785 = (object)DBL_PTR(_49bp_48785)->dbl;
    }
    // SubProg set_error_info pc: 27 op: STARTLINE (58)

    /** fwdref.e:415		line_number     = fr[FR_LINE]*/
    // SubProg set_error_info pc: 29 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62742);
    _5line_number_12478 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_5line_number_12478)){
        _5line_number_12478 = (object)DBL_PTR(_5line_number_12478)->dbl;
    }
    // SubProg set_error_info pc: 35 op: STARTLINE (58)

    /** fwdref.e:416		current_file_no = fr[FR_FILE]*/
    // SubProg set_error_info pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62742);
    _5current_file_no_12477 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_5current_file_no_12477)){
        _5current_file_no_12477 = (object)DBL_PTR(_5current_file_no_12477)->dbl;
    }
    // SubProg set_error_info pc: 43 op: STARTLINE (58)

    /** fwdref.e:417	end procedure*/
    // SubProg set_error_info pc: 45 op: RETURNP (29)

// Exiting block BLOCK: set_error_info

// block var ref_62741

// block var fr_62742
    DeRefDS(_fr_62742);
    return;
    // SubProg set_error_info pc: 48 op: BADRETURNF (43)
    ;
}


void _30patch_forward_variable(object _tok_62755, object _ref_62756)
{
    object _fr_62757 = NOVALUE;
    object _sym_62760 = NOVALUE;
    object _pc_62812 = NOVALUE;
    object _vx_62816 = NOVALUE;
    object _d_62833 = NOVALUE;
    object _param_62843 = NOVALUE;
    object _old_62846 = NOVALUE;
    object _new_62851 = NOVALUE;
    object _31194 = NOVALUE; // 62863 31194
    object _31193 = NOVALUE; // 62862 31193
    object _31192 = NOVALUE; // 62860 31192
// skipping _31191  name type: 0
    object _31190 = NOVALUE; // 62855 31190
// skipping _31189  name type: 0
// skipping _31188  name type: 0
    object _31187 = NOVALUE; // 62848 31187
// skipping _31186  name type: 0
    object _31185 = NOVALUE; // 62841 31185
    object _31184 = NOVALUE; // 62839 31184
    object _31183 = NOVALUE; // 62838 31183
    object _31182 = NOVALUE; // 62837 31182
// skipping _31181  name type: 0
    object _31180 = NOVALUE; // 62834 31180
    object _31179 = NOVALUE; // 62832 31179
    object _31178 = NOVALUE; // 62831 31178
    object _31177 = NOVALUE; // 62828 31177
    object _31176 = NOVALUE; // 62827 31176
// skipping _31175  name type: 0
    object _31174 = NOVALUE; // 62823 31174
// skipping _31173  name type: 0
    object _31172 = NOVALUE; // 62817 31172
// skipping _31171  name type: 0
// skipping _31170  name type: 0
    object _31169 = NOVALUE; // 62811 31169
    object _31168 = NOVALUE; // 62810 31168
    object _31167 = NOVALUE; // 62808 31167
// skipping _31166  name type: 0
    object _31165 = NOVALUE; // 62803 31165
    object _31164 = NOVALUE; // 62800 31164
    object _31163 = NOVALUE; // 62799 31163
    object _31162 = NOVALUE; // 62797 31162
// skipping _31161  name type: 0
    object _31160 = NOVALUE; // 62792 31160
// skipping _31159  name type: 0
    object _31158 = NOVALUE; // 62788 31158
    object _31157 = NOVALUE; // 62784 31157
    object _31156 = NOVALUE; // 62782 31156
    object _31155 = NOVALUE; // 62780 31155
    object _31154 = NOVALUE; // 62778 31154
    object _31153 = NOVALUE; // 62777 31153
    object _31152 = NOVALUE; // 62775 31152
    object _31151 = NOVALUE; // 62773 31151
    object _31150 = NOVALUE; // 62771 31150
    object _31149 = NOVALUE; // 62770 31149
    object _31148 = NOVALUE; // 62769 31148
    object _31147 = NOVALUE; // 62768 31147
    object _31146 = NOVALUE; // 62767 31146
    object _31145 = NOVALUE; // 62765 31145
// skipping _31144  name type: 0
// skipping _31143  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_variable pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_variable pc: 3 op: STARTLINE (58)

    /** fwdref.e:421		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_variable pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62757);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62757 = (object)*(((s1_ptr)_2)->base + _ref_62756);
    Ref(_fr_62757);
    // SubProg patch_forward_variable pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_variable pc: 13 op: STARTLINE (58)

    /** fwdref.e:422		symtab_index sym = tok[T_SYM]*/
    // SubProg patch_forward_variable pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62755);
    _sym_62760 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_62760)){
        _sym_62760 = (object)DBL_PTR(_sym_62760)->dbl;
    }
    // SubProg patch_forward_variable pc: 23 op: STARTLINE (58)

    /** fwdref.e:424		if SymTab[sym][S_FILE_NO] = fr[FR_FILE] */
    // SubProg patch_forward_variable pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31145 = (object)*(((s1_ptr)_2)->base + _sym_62760);
    // SubProg patch_forward_variable pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31145);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _31146 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _31146 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _31145 = NOVALUE;
    // SubProg patch_forward_variable pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62757);
    _31147 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_variable pc: 41 op: EQUALS (3)
    if (IS_ATOM_INT(_31146) && IS_ATOM_INT(_31147)) {
        _31148 = (_31146 == _31147);
    }
    else {
        _31148 = binary_op(EQUALS, _31146, _31147);
    }
    _31146 = NOVALUE;
    _31147 = NOVALUE;
    // SubProg patch_forward_variable pc: 45 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31148)) {
        if (_31148 == 0) {
            goto L1; // [45] 69
        }
    }
    else {
        if (DBL_PTR(_31148)->dbl == 0.0) {
            goto L1; // [45] 69
        }
    }
    // SubProg patch_forward_variable pc: 49 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62757);
    _31150 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_variable pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 55 op: EQUALS (3)
    if (IS_ATOM_INT(_31150)) {
        _31151 = (_31150 == _5TopLevelSub_12484);
    }
    else {
        _31151 = binary_op(EQUALS, _31150, _5TopLevelSub_12484);
    }
    _31150 = NOVALUE;
    // SubProg patch_forward_variable pc: 59 op: NOP1 (159)
    // SubProg patch_forward_variable pc: 60 op: IF (20)
    if (_31151 == 0) {
        DeRef(_31151);
        _31151 = NOVALUE;
        goto L1; // [60] 69
    }
    else {
        if (!IS_ATOM_INT(_31151) && DBL_PTR(_31151)->dbl == 0.0){
            DeRef(_31151);
            _31151 = NOVALUE;
            goto L1; // [60] 69
        }
        DeRef(_31151);
        _31151 = NOVALUE;
    }
    DeRef(_31151);
    _31151 = NOVALUE;
    // SubProg patch_forward_variable pc: 63 op: STARTLINE (58)

    /** fwdref.e:426			return*/
    // SubProg patch_forward_variable pc: 65 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_variable

// block var tok_62755
    DeRef(_tok_62755);

// block var ref_62756

// block var fr_62757
    DeRef(_fr_62757);

// block var sym_62760

// block var pc_62812

// block var vx_62816
    DeRef(_31148);
    _31148 = NOVALUE;
    return;
    // SubProg patch_forward_variable pc: 68 op: NOP1 (159)
L1: // addr: 69 pc: 68 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 69 op: STARTLINE (58)

    /** fwdref.e:429		if fr[FR_OP] = ASSIGN and SymTab[sym][S_MODE] = M_CONSTANT then*/
    // SubProg patch_forward_variable pc: 71 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62757);
    _31152 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_variable pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 77 op: EQUALS (3)
    if (IS_ATOM_INT(_31152)) {
        _31153 = (_31152 == 18);
    }
    else {
        _31153 = binary_op(EQUALS, _31152, 18);
    }
    _31152 = NOVALUE;
    // SubProg patch_forward_variable pc: 81 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31153)) {
        if (_31153 == 0) {
            goto L2; // [81] 120
        }
    }
    else {
        if (DBL_PTR(_31153)->dbl == 0.0) {
            goto L2; // [81] 120
        }
    }
    // SubProg patch_forward_variable pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31155 = (object)*(((s1_ptr)_2)->base + _sym_62760);
    // SubProg patch_forward_variable pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31155);
    _31156 = (object)*(((s1_ptr)_2)->base + 3);
    _31155 = NOVALUE;
    // SubProg patch_forward_variable pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 99 op: EQUALS (3)
    if (IS_ATOM_INT(_31156)) {
        _31157 = (_31156 == 2);
    }
    else {
        _31157 = binary_op(EQUALS, _31156, 2);
    }
    _31156 = NOVALUE;
    // SubProg patch_forward_variable pc: 103 op: NOP1 (159)
    // SubProg patch_forward_variable pc: 104 op: IF (20)
    if (_31157 == 0) {
        DeRef(_31157);
        _31157 = NOVALUE;
        goto L2; // [104] 120
    }
    else {
        if (!IS_ATOM_INT(_31157) && DBL_PTR(_31157)->dbl == 0.0){
            DeRef(_31157);
            _31157 = NOVALUE;
            goto L2; // [104] 120
        }
        DeRef(_31157);
        _31157 = NOVALUE;
    }
    DeRef(_31157);
    _31157 = NOVALUE;
    // SubProg patch_forward_variable pc: 107 op: STARTLINE (58)

    /** fwdref.e:430			prep_forward_error( ref )*/
    // SubProg patch_forward_variable pc: 109 op: PROC (27)
    _30prep_forward_error(_ref_62756);
    // SubProg patch_forward_variable pc: 112 op: STARTLINE (58)

    /** fwdref.e:431			CompileErr( 110 )*/
    // SubProg patch_forward_variable pc: 114 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(110, _21958, 0);
    // SubProg patch_forward_variable pc: 119 op: NOP1 (159)
L2: // addr: 120 pc: 119 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 120 op: STARTLINE (58)

    /** fwdref.e:434		if fr[FR_OP] = ASSIGN then*/
    // SubProg patch_forward_variable pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62757);
    _31158 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_variable pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 128 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31158, 18)){
        _31158 = NOVALUE;
        goto L3; // [128] 168
    }
    _31158 = NOVALUE;
    // SubProg patch_forward_variable pc: 132 op: STARTLINE (58)

    /** fwdref.e:435			SymTab[sym][S_USAGE] = or_bits( U_WRITTEN, SymTab[sym][S_USAGE] )*/
    // SubProg patch_forward_variable pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 136 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62760 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_variable pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31162 = (object)*(((s1_ptr)_2)->base + _sym_62760);
    // SubProg patch_forward_variable pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31162);
    _31163 = (object)*(((s1_ptr)_2)->base + 5);
    _31162 = NOVALUE;
    // SubProg patch_forward_variable pc: 157 op: OR_BITS (24)
    if (IS_ATOM_INT(_31163)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_31163;
             _31164 = MAKE_UINT(tu);
        }
    }
    else {
        _31164 = binary_op(OR_BITS, 2, _31163);
    }
    _31163 = NOVALUE;
    // SubProg patch_forward_variable pc: 161 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31164;
    if( _1 != _31164 ){
        DeRef(_1);
    }
    _31164 = NOVALUE;
    _31160 = NOVALUE;
    // SubProg patch_forward_variable pc: 165 op: ELSE (23)
    goto L4; // [165] 202
    // SubProg patch_forward_variable pc: 167 op: NOP1 (159)
L3: // addr: 168 pc: 167 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 168 op: STARTLINE (58)

    /** fwdref.e:437			SymTab[sym][S_USAGE] = or_bits( U_READ, SymTab[sym][S_USAGE] )*/
    // SubProg patch_forward_variable pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 172 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_62760 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_variable pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31167 = (object)*(((s1_ptr)_2)->base + _sym_62760);
    // SubProg patch_forward_variable pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 189 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31167);
    _31168 = (object)*(((s1_ptr)_2)->base + 5);
    _31167 = NOVALUE;
    // SubProg patch_forward_variable pc: 193 op: OR_BITS (24)
    if (IS_ATOM_INT(_31168)) {
        {uintptr_t tu;
             tu = (uintptr_t)1 | (uintptr_t)_31168;
             _31169 = MAKE_UINT(tu);
        }
    }
    else {
        _31169 = binary_op(OR_BITS, 1, _31168);
    }
    _31168 = NOVALUE;
    // SubProg patch_forward_variable pc: 197 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31169;
    if( _1 != _31169 ){
        DeRef(_1);
    }
    _31169 = NOVALUE;
    _31165 = NOVALUE;
    // SubProg patch_forward_variable pc: 201 op: NOP1 (159)
L4: // addr: 202 pc: 201 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 202 op: STARTLINE (58)

    /** fwdref.e:440		set_code( ref )*/
    // SubProg patch_forward_variable pc: 204 op: PROC (27)
    _30set_code(_ref_62756);
    // SubProg patch_forward_variable pc: 207 op: STARTLINE (58)

    /** fwdref.e:441		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_variable pc: 209 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62757);
    _pc_62812 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_62812))
    _pc_62812 = (object)DBL_PTR(_pc_62812)->dbl;
    // SubProg patch_forward_variable pc: 213 op: STARTLINE (58)

    /** fwdref.e:442		if pc < 1 then*/
    // SubProg patch_forward_variable pc: 215 op: LESS_IFW_I (119)
    if (_pc_62812 >= 1)
    goto L5; // [215] 225
    // SubProg patch_forward_variable pc: 219 op: STARTLINE (58)

    /** fwdref.e:443			pc = 1*/
    // SubProg patch_forward_variable pc: 221 op: ASSIGN_I (113)
    _pc_62812 = 1;
    // SubProg patch_forward_variable pc: 224 op: NOP1 (159)
L5: // addr: 225 pc: 224 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 225 op: STARTLINE (58)

    /** fwdref.e:445		integer vx = find( -ref, Code, pc )*/
    // SubProg patch_forward_variable pc: 227 op: UMINUS (12)
    if ((uintptr_t)_ref_62756 == (uintptr_t)HIGH_BITS){
        _31172 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31172 = - _ref_62756;
    }
    // SubProg patch_forward_variable pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 232 op: FIND_FROM (176)
    _vx_62816 = find_from(_31172, _5Code_12566, _pc_62812);
    DeRef(_31172);
    _31172 = NOVALUE;
    // SubProg patch_forward_variable pc: 237 op: STARTLINE (58)

    /** fwdref.e:446		if vx then*/
    // SubProg patch_forward_variable pc: 239 op: IF (20)
    if (_vx_62816 == 0)
    {
        goto L6; // [239] 281
    }
    else{
    }
    // SubProg patch_forward_variable pc: 242 op: STARTLINE (58)

    /** fwdref.e:447			while vx do*/
    // SubProg patch_forward_variable pc: 244 op: NOP2 (110)
    // SubProg patch_forward_variable pc: 246 op: NOPWHILE (158)
L7: // addr: 247 pc: 246 sub: 62752 op: 158
    // SubProg patch_forward_variable pc: 247 op: WHILE (47)
    if (_vx_62816 == 0)
    {
        goto L8; // [247] 275
    }
    else{
    }
    // SubProg patch_forward_variable pc: 250 op: STARTLINE (58)

    /** fwdref.e:450				Code[vx] = sym*/
    // SubProg patch_forward_variable pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 254 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_5Code_12566);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _5Code_12566 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _vx_62816);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_62760;
    DeRef(_1);
    // SubProg patch_forward_variable pc: 258 op: STARTLINE (58)

    /** fwdref.e:451				vx = find( -ref, Code, vx )*/
    // SubProg patch_forward_variable pc: 260 op: UMINUS (12)
    if ((uintptr_t)_ref_62756 == (uintptr_t)HIGH_BITS){
        _31174 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31174 = - _ref_62756;
    }
    // SubProg patch_forward_variable pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_variable pc: 265 op: FIND_FROM (176)
    _vx_62816 = find_from(_31174, _5Code_12566, _vx_62816);
    DeRef(_31174);
    _31174 = NOVALUE;
    // SubProg patch_forward_variable pc: 270 op: STARTLINE (58)

    /** fwdref.e:452			end while*/
    // SubProg patch_forward_variable pc: 272 op: ENDWHILE (22)
    goto L7; // [272] 247
    // SubProg patch_forward_variable pc: 274 op: NOP1 (159)
L8: // addr: 275 pc: 274 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 275 op: STARTLINE (58)

    /** fwdref.e:453			resolved_reference( ref )*/
    // SubProg patch_forward_variable pc: 277 op: PROC (27)
    _30resolved_reference(_ref_62756);
    // SubProg patch_forward_variable pc: 280 op: NOP1 (159)
L6: // addr: 281 pc: 280 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 281 op: STARTLINE (58)

    /** fwdref.e:456		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_variable pc: 283 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62757);
    _31176 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_variable pc: 287 op: IS_A_SEQUENCE (68)
    _31177 = IS_SEQUENCE(_31176);
    _31176 = NOVALUE;
    // SubProg patch_forward_variable pc: 290 op: IF (20)
    if (_31177 == 0)
    {
        _31177 = NOVALUE;
        goto L9; // [290] 422
    }
    else{
        _31177 = NOVALUE;
    }
    // SubProg patch_forward_variable pc: 293 op: STARTLINE (58)

    /** fwdref.e:457			for i = 1 to length( fr[FR_DATA] ) do*/
    // SubProg patch_forward_variable pc: 295 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62757);
    _31178 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_variable pc: 299 op: LENGTH (42)
    if (IS_SEQUENCE(_31178)){
            _31179 = SEQ_PTR(_31178)->length;
    }
    else {
        _31179 = 1;
    }
    _31178 = NOVALUE;
    // SubProg patch_forward_variable pc: 302 op: FOR_I (125)
    {
        object _i_62830;
        _i_62830 = 1;
LA: // addr: 309 pc: 302 sub: 62752 op: 125
        if (_i_62830 > _31179){
            goto LB; // [302] 416
        }
        // SubProg patch_forward_variable pc: 309 op: STARTLINE (58)

        /** fwdref.e:458				object d = fr[FR_DATA][i]*/
        // SubProg patch_forward_variable pc: 311 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_62757);
        _31180 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg patch_forward_variable pc: 315 op: RHS_SUBS_CHECK (92)
        DeRef(_d_62833);
        _2 = (object)SEQ_PTR(_31180);
        _d_62833 = (object)*(((s1_ptr)_2)->base + _i_62830);
        Ref(_d_62833);
        _31180 = NOVALUE;
        // SubProg patch_forward_variable pc: 319 op: STARTLINE (58)

        /** fwdref.e:459				if sequence( d ) and d[1] = PAM_RECORD then*/
        // SubProg patch_forward_variable pc: 321 op: IS_A_SEQUENCE (68)
        _31182 = IS_SEQUENCE(_d_62833);
        // SubProg patch_forward_variable pc: 324 op: SC1_AND_IF (146)
        if (_31182 == 0) {
            goto LC; // [324] 405
        }
        // SubProg patch_forward_variable pc: 328 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62833);
        _31184 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg patch_forward_variable pc: 332 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 334 op: EQUALS (3)
        if (IS_ATOM_INT(_31184)) {
            _31185 = (_31184 == 1);
        }
        else {
            _31185 = binary_op(EQUALS, _31184, 1);
        }
        _31184 = NOVALUE;
        // SubProg patch_forward_variable pc: 338 op: NOP1 (159)
        // SubProg patch_forward_variable pc: 339 op: IF (20)
        if (_31185 == 0) {
            DeRef(_31185);
            _31185 = NOVALUE;
            goto LC; // [339] 405
        }
        else {
            if (!IS_ATOM_INT(_31185) && DBL_PTR(_31185)->dbl == 0.0){
                DeRef(_31185);
                _31185 = NOVALUE;
                goto LC; // [339] 405
            }
            DeRef(_31185);
            _31185 = NOVALUE;
        }
        DeRef(_31185);
        _31185 = NOVALUE;
        // SubProg patch_forward_variable pc: 342 op: STARTLINE (58)

        /** fwdref.e:461					symtab_index param = d[2]*/
        // SubProg patch_forward_variable pc: 344 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62833);
        _param_62843 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_62843)){
            _param_62843 = (object)DBL_PTR(_param_62843)->dbl;
        }
        // SubProg patch_forward_variable pc: 350 op: STARTLINE (58)

        /** fwdref.e:462					token old = {RECORDED, d[3]}*/
        // SubProg patch_forward_variable pc: 352 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 354 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_d_62833);
        _31187 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg patch_forward_variable pc: 358 op: RIGHT_BRACE_2 (85)
        Ref(_31187);
        DeRef(_old_62846);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 508;
        ((intptr_t *)_2)[2] = _31187;
        _old_62846 = MAKE_SEQ(_1);
        _31187 = NOVALUE;
        // SubProg patch_forward_variable pc: 362 op: STARTLINE (58)

        /** fwdref.e:463					token new = {VARIABLE, sym}*/
        // SubProg patch_forward_variable pc: 364 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 366 op: RIGHT_BRACE_2 (85)
        DeRefi(_new_62851);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -100;
        ((intptr_t *)_2)[2] = _sym_62760;
        _new_62851 = MAKE_SEQ(_1);
        // SubProg patch_forward_variable pc: 370 op: STARTLINE (58)

        /** fwdref.e:464					SymTab[param][S_CODE] = find_replace( old, SymTab[param][S_CODE], new )*/
        // SubProg patch_forward_variable pc: 372 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 374 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_param_62843 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_variable pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 381 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 383 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _31192 = (object)*(((s1_ptr)_2)->base + _param_62843);
        // SubProg patch_forward_variable pc: 387 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_variable pc: 389 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31192);
        if (!IS_ATOM_INT(_5S_CODE_12144)){
            _31193 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        }
        else{
            _31193 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
        }
        _31192 = NOVALUE;
        // SubProg patch_forward_variable pc: 393 op: PROC (27)
        RefDS(_old_62846);
        Ref(_31193);
        RefDS(_new_62851);
        _31194 = _22find_replace(_old_62846, _31193, _new_62851, 0);
        _31193 = NOVALUE;
        // SubProg patch_forward_variable pc: 400 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_5S_CODE_12144))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31194;
        if( _1 != _31194 ){
            DeRef(_1);
        }
        _31194 = NOVALUE;
        _31190 = NOVALUE;
        // SubProg patch_forward_variable pc: 404 op: NOP1 (159)
LC: // addr: 405 pc: 404 sub: 62752 op: 159
        // SubProg patch_forward_variable pc: 405 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var param_62843

// block var old_62846
        DeRef(_old_62846);
        _old_62846 = NOVALUE;

// block var new_62851
        DeRefi(_new_62851);
        _new_62851 = NOVALUE;
        // SubProg patch_forward_variable pc: 407 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var d_62833
        DeRef(_d_62833);
        _d_62833 = NOVALUE;
        // SubProg patch_forward_variable pc: 409 op: STARTLINE (58)

        /** fwdref.e:466			end for*/
        // SubProg patch_forward_variable pc: 411 op: ENDFOR_INT_UP1 (54)
        _i_62830 = _i_62830 + 1;
        goto LA; // [411] 309
LB: // addr: 416 pc: 411 sub: 62752 op: 54
        ;
    }
    // SubProg patch_forward_variable pc: 416 op: STARTLINE (58)

    /** fwdref.e:467			resolved_reference( ref )*/
    // SubProg patch_forward_variable pc: 418 op: PROC (27)
    _30resolved_reference(_ref_62756);
    // SubProg patch_forward_variable pc: 421 op: NOP1 (159)
L9: // addr: 422 pc: 421 sub: 62752 op: 159
    // SubProg patch_forward_variable pc: 422 op: STARTLINE (58)

    /** fwdref.e:469		reset_code()*/
    // SubProg patch_forward_variable pc: 424 op: PROC (27)
    _30reset_code();
    // SubProg patch_forward_variable pc: 426 op: STARTLINE (58)

    /** fwdref.e:470	end procedure*/
    // SubProg patch_forward_variable pc: 428 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_variable

// block var tok_62755
    DeRef(_tok_62755);

// block var ref_62756

// block var fr_62757
    DeRef(_fr_62757);

// block var sym_62760

// block var pc_62812

// block var vx_62816
    DeRef(_31153);
    _31153 = NOVALUE;
    DeRef(_31148);
    _31148 = NOVALUE;
    _31178 = NOVALUE;
    return;
    // SubProg patch_forward_variable pc: 431 op: BADRETURNF (43)
    ;
}


void _30patch_forward_init_check(object _tok_62867, object _ref_62868)
{
    object _fr_62869 = NOVALUE;
    object _31202 = NOVALUE; // 62881 31202
    object _31201 = NOVALUE; // 62879 31201
    object _31200 = NOVALUE; // 62878 31200
// skipping _31199  name type: 0
    object _31198 = NOVALUE; // 62875 31198
    object _31197 = NOVALUE; // 62873 31197
    object _31196 = NOVALUE; // 62872 31196
// skipping _31195  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_forward_init_check pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_init_check pc: 3 op: STARTLINE (58)

    /** fwdref.e:474		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_init_check pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62869);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62869 = (object)*(((s1_ptr)_2)->base + _ref_62868);
    Ref(_fr_62869);
    // SubProg patch_forward_init_check pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_init_check pc: 13 op: STARTLINE (58)

    /** fwdref.e:475		set_code( ref )*/
    // SubProg patch_forward_init_check pc: 15 op: PROC (27)
    _30set_code(_ref_62868);
    // SubProg patch_forward_init_check pc: 18 op: STARTLINE (58)

    /** fwdref.e:476		if sequence( fr[FR_DATA] ) then*/
    // SubProg patch_forward_init_check pc: 20 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62869);
    _31196 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg patch_forward_init_check pc: 24 op: IS_A_SEQUENCE (68)
    _31197 = IS_SEQUENCE(_31196);
    _31196 = NOVALUE;
    // SubProg patch_forward_init_check pc: 27 op: IF (20)
    if (_31197 == 0)
    {
        _31197 = NOVALUE;
        goto L1; // [27] 38
    }
    else{
        _31197 = NOVALUE;
    }
    // SubProg patch_forward_init_check pc: 30 op: STARTLINE (58)

    /** fwdref.e:478			resolved_reference( ref )*/
    // SubProg patch_forward_init_check pc: 32 op: PROC (27)
    _30resolved_reference(_ref_62868);
    // SubProg patch_forward_init_check pc: 35 op: ELSE (23)
    goto L2; // [35] 85
    // SubProg patch_forward_init_check pc: 37 op: NOP1 (159)
L1: // addr: 38 pc: 37 sub: 62864 op: 159
    // SubProg patch_forward_init_check pc: 38 op: STARTLINE (58)

    /** fwdref.e:479		elsif fr[FR_PC] > 0 then*/
    // SubProg patch_forward_init_check pc: 40 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62869);
    _31198 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_init_check pc: 44 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _31198, 0)){
        _31198 = NOVALUE;
        goto L3; // [44] 78
    }
    _31198 = NOVALUE;
    // SubProg patch_forward_init_check pc: 48 op: STARTLINE (58)

    /** fwdref.e:480			Code[fr[FR_PC]+1] = tok[T_SYM]*/
    // SubProg patch_forward_init_check pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62869);
    _31200 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg patch_forward_init_check pc: 56 op: PLUS1 (93)
    if (IS_ATOM_INT(_31200)) {
        _31201 = _31200 + 1;
        if (_31201 > MAXINT){
            _31201 = NewDouble((eudouble)_31201);
        }
    }
    else
    _31201 = binary_op(PLUS, 1, _31200);
    _31200 = NOVALUE;
    // SubProg patch_forward_init_check pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_init_check pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62867);
    _31202 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_init_check pc: 66 op: ASSIGN_SUBS (16)
    Ref(_31202);
    _2 = (object)SEQ_PTR(_5Code_12566);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _5Code_12566 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31201))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31201)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _31201);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31202;
    if( _1 != _31202 ){
        DeRef(_1);
    }
    _31202 = NOVALUE;
    // SubProg patch_forward_init_check pc: 70 op: STARTLINE (58)

    /** fwdref.e:481			resolved_reference( ref )*/
    // SubProg patch_forward_init_check pc: 72 op: PROC (27)
    _30resolved_reference(_ref_62868);
    // SubProg patch_forward_init_check pc: 75 op: ELSE (23)
    goto L2; // [75] 85
    // SubProg patch_forward_init_check pc: 77 op: NOP1 (159)
L3: // addr: 78 pc: 77 sub: 62864 op: 159
    // SubProg patch_forward_init_check pc: 78 op: STARTLINE (58)

    /** fwdref.e:483			forward_error( tok, ref )*/
    // SubProg patch_forward_init_check pc: 80 op: PROC (27)
    Ref(_tok_62867);
    _30forward_error(_tok_62867, _ref_62868);
    // SubProg patch_forward_init_check pc: 84 op: NOP1 (159)
L2: // addr: 85 pc: 84 sub: 62864 op: 159
    // SubProg patch_forward_init_check pc: 85 op: STARTLINE (58)

    /** fwdref.e:485		reset_code()*/
    // SubProg patch_forward_init_check pc: 87 op: PROC (27)
    _30reset_code();
    // SubProg patch_forward_init_check pc: 89 op: STARTLINE (58)

    /** fwdref.e:486	end procedure*/
    // SubProg patch_forward_init_check pc: 91 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_init_check

// block var tok_62867
    DeRef(_tok_62867);

// block var ref_62868

// block var fr_62869
    DeRef(_fr_62869);
    DeRef(_31201);
    _31201 = NOVALUE;
    return;
    // SubProg patch_forward_init_check pc: 94 op: BADRETURNF (43)
    ;
}


object _30expected_name(object _id_62886)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg expected_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_id_62886)) {
        _1 = (object)(DBL_PTR(_id_62886)->dbl);
        DeRefDS(_id_62886);
        _id_62886 = _1;
    }
    // SubProg expected_name pc: 3 op: STARTLINE (58)

    /** fwdref.e:491		switch id with fallthru do*/
    // SubProg expected_name pc: 5 op: SWITCH_I (193)
    _0 = _id_62886;
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
        RefDS(_26257);

// Exiting block BLOCK: expected_name

// block var id_62886
        return _26257;
        // SubProg expected_name pc: 22 op: STARTLINE (58)

        /** fwdref.e:496			case FUNC then*/
        // SubProg expected_name pc: 24 op: CASE (186)
        case 501:
        // SubProg expected_name pc: 26 op: CASE (186)
        case 196:
        // SubProg expected_name pc: 28 op: STARTLINE (58)

        /** fwdref.e:498				return "a function"*/
        // SubProg expected_name pc: 30 op: RETURNF (28)
        RefDS(_26203);

// Exiting block BLOCK: expected_name

// block var id_62886
        return _26203;
        // SubProg expected_name pc: 34 op: STARTLINE (58)

        /** fwdref.e:500			case VARIABLE then*/
        // SubProg expected_name pc: 36 op: CASE (186)
        case -100:
        // SubProg expected_name pc: 38 op: STARTLINE (58)

        /** fwdref.e:501				return "a variable, constant or enum"*/
        // SubProg expected_name pc: 40 op: RETURNF (28)
        RefDS(_31205);

// Exiting block BLOCK: expected_name

// block var id_62886
        return _31205;
        // SubProg expected_name pc: 44 op: STARTLINE (58)

        /** fwdref.e:502			case else*/
        // SubProg expected_name pc: 46 op: CASE (186)
        default:
        // SubProg expected_name pc: 48 op: STARTLINE (58)

        /** fwdref.e:503				return "something"*/
        // SubProg expected_name pc: 50 op: RETURNF (28)
        RefDS(_31206);

// Exiting block BLOCK: expected_name

// block var id_62886
        return _31206;
        // SubProg expected_name pc: 54 op: NOPSWITCH (187)
    ;}    // SubProg expected_name pc: 55 op: BADRETURNF (43)
    ;
}


void _30patch_forward_type(object _tok_62903, object _ref_62904)
{
    object _fr_62905 = NOVALUE;
    object _syms_62907 = NOVALUE;
    object _31218 = NOVALUE; // 62929 31218
    object _31217 = NOVALUE; // 62928 31217
// skipping _31216  name type: 0
    object _31215 = NOVALUE; // 62923 31215
    object _31214 = NOVALUE; // 62922 31214
    object _31213 = NOVALUE; // 62918 31213
// skipping _31212  name type: 0
    object _31211 = NOVALUE; // 62914 31211
    object _31210 = NOVALUE; // 62913 31210
    object _31209 = NOVALUE; // 62911 31209
// skipping _31208  name type: 0
// skipping _31207  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type pc: 3 op: STARTLINE (58)

    /** fwdref.e:510		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_type pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62905);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62905 = (object)*(((s1_ptr)_2)->base + _ref_62904);
    Ref(_fr_62905);
    // SubProg patch_forward_type pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type pc: 13 op: STARTLINE (58)

    /** fwdref.e:511		sequence syms = fr[FR_DATA]*/
    // SubProg patch_forward_type pc: 15 op: RHS_SUBS (25)
    DeRef(_syms_62907);
    _2 = (object)SEQ_PTR(_fr_62905);
    _syms_62907 = (object)*(((s1_ptr)_2)->base + 12);
    Ref(_syms_62907);
    // SubProg patch_forward_type pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type pc: 21 op: STARTLINE (58)

    /** fwdref.e:512		for i = 2 to length( syms ) do*/
    // SubProg patch_forward_type pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_syms_62907)){
            _31209 = SEQ_PTR(_syms_62907)->length;
    }
    else {
        _31209 = 1;
    }
    // SubProg patch_forward_type pc: 26 op: FOR_I (125)
    {
        object _i_62910;
        _i_62910 = 2;
L1: // addr: 33 pc: 26 sub: 62900 op: 125
        if (_i_62910 > _31209){
            goto L2; // [26] 102
        }
        // SubProg patch_forward_type pc: 33 op: STARTLINE (58)

        /** fwdref.e:513			SymTab[syms[i]][S_VTYPE] = tok[T_SYM]*/
        // SubProg patch_forward_type pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_syms_62907);
        _31210 = (object)*(((s1_ptr)_2)->base + _i_62910);
        // SubProg patch_forward_type pc: 41 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31210))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31210)->dbl));
        else
        _3 = (object)(_31210 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_type pc: 46 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_62903);
        _31213 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg patch_forward_type pc: 54 op: PASSIGN_SUBS (162)
        Ref(_31213);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31213;
        if( _1 != _31213 ){
            DeRef(_1);
        }
        _31213 = NOVALUE;
        _31211 = NOVALUE;
        // SubProg patch_forward_type pc: 58 op: STARTLINE (58)

        /** fwdref.e:514			if TRANSLATE then*/
        // SubProg patch_forward_type pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 62 op: IF (20)
        if (_5TRANSLATE_12097 == 0)
        {
            goto L3; // [62] 95
        }
        else{
        }
        // SubProg patch_forward_type pc: 65 op: STARTLINE (58)

        /** fwdref.e:515				SymTab[syms[i]][S_GTYPE] = CompileType(tok[T_SYM])*/
        // SubProg patch_forward_type pc: 67 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 69 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_syms_62907);
        _31214 = (object)*(((s1_ptr)_2)->base + _i_62910);
        // SubProg patch_forward_type pc: 73 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31214))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31214)->dbl));
        else
        _3 = (object)(_31214 + ((s1_ptr)_2)->base);
        // SubProg patch_forward_type pc: 78 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_forward_type pc: 82 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_62903);
        _31217 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg patch_forward_type pc: 86 op: PROC (27)
        Ref(_31217);
        _31218 = _31CompileType(_31217);
        _31217 = NOVALUE;
        // SubProg patch_forward_type pc: 90 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 36);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31218;
        if( _1 != _31218 ){
            DeRef(_1);
        }
        _31218 = NOVALUE;
        _31215 = NOVALUE;
        // SubProg patch_forward_type pc: 94 op: NOP1 (159)
L3: // addr: 95 pc: 94 sub: 62900 op: 159
        // SubProg patch_forward_type pc: 95 op: STARTLINE (58)

        /** fwdref.e:517		end for*/
        // SubProg patch_forward_type pc: 97 op: ENDFOR_INT_UP1 (54)
        _i_62910 = _i_62910 + 1;
        goto L1; // [97] 33
L2: // addr: 102 pc: 97 sub: 62900 op: 54
        ;
    }
    // SubProg patch_forward_type pc: 102 op: STARTLINE (58)

    /** fwdref.e:518		resolved_reference( ref )*/
    // SubProg patch_forward_type pc: 104 op: PROC (27)
    _30resolved_reference(_ref_62904);
    // SubProg patch_forward_type pc: 107 op: STARTLINE (58)

    /** fwdref.e:519	end procedure*/
    // SubProg patch_forward_type pc: 109 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_type

// block var tok_62903
    DeRef(_tok_62903);

// block var ref_62904

// block var fr_62905
    DeRef(_fr_62905);

// block var syms_62907
    DeRef(_syms_62907);
    _31210 = NOVALUE;
    _31214 = NOVALUE;
    return;
    // SubProg patch_forward_type pc: 112 op: BADRETURNF (43)
    ;
}


void _30patch_forward_case(object _tok_62933, object _ref_62934)
{
    object _fr_62935 = NOVALUE;
    object _switch_pc_62937 = NOVALUE;
    object _case_sym_62940 = NOVALUE;
    object _case_values_62969 = NOVALUE;
    object _cx_62974 = NOVALUE;
    object _negative_62982 = NOVALUE;
// skipping _31257  name type: 0
    object _31256 = NOVALUE; // 62999 31256
    object _31255 = NOVALUE; // 62997 31255
    object _31254 = NOVALUE; // 62994 31254
    object _31253 = NOVALUE; // 62993 31253
    object _31252 = NOVALUE; // 62990 31252
    object _31251 = NOVALUE; // 62989 31251
// skipping _31250  name type: 0
    object _31249 = NOVALUE; // 62987 31249
// skipping _31248  name type: 0
    object _31247 = NOVALUE; // 62985 31247
    object _31246 = NOVALUE; // 62984 31246
// skipping _31245  name type: 0
    object _31244 = NOVALUE; // 62980 31244
    object _31243 = NOVALUE; // 62979 31243
// skipping _31242  name type: 0
// skipping _31241  name type: 0
    object _31240 = NOVALUE; // 62975 31240
// skipping _31239  name type: 0
    object _31238 = NOVALUE; // 62971 31238
    object _31237 = NOVALUE; // 62968 31237
    object _31236 = NOVALUE; // 62966 31236
    object _31235 = NOVALUE; // 62965 31235
    object _31234 = NOVALUE; // 62964 31234
    object _31233 = NOVALUE; // 62963 31233
    object _31232 = NOVALUE; // 62962 31232
    object _31231 = NOVALUE; // 62960 31231
    object _31230 = NOVALUE; // 62959 31230
// skipping _31229  name type: 0
    object _31228 = NOVALUE; // 62954 31228
    object _31227 = NOVALUE; // 62953 31227
    object _31226 = NOVALUE; // 62951 31226
    object _31225 = NOVALUE; // 62950 31225
// skipping _31224  name type: 0
    object _31223 = NOVALUE; // 62946 31223
// skipping _31222  name type: 0
    object _31221 = NOVALUE; // 62942 31221
// skipping _31220  name type: 0
// skipping _31219  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_case pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_case pc: 3 op: STARTLINE (58)

    /** fwdref.e:522		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_case pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_62935);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_62935 = (object)*(((s1_ptr)_2)->base + _ref_62934);
    Ref(_fr_62935);
    // SubProg patch_forward_case pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_case pc: 13 op: STARTLINE (58)

    /** fwdref.e:524		integer switch_pc = fr[FR_DATA]*/
    // SubProg patch_forward_case pc: 15 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_62935);
    _switch_pc_62937 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_switch_pc_62937))
    _switch_pc_62937 = (object)DBL_PTR(_switch_pc_62937)->dbl;
    // SubProg patch_forward_case pc: 19 op: STARTLINE (58)

    /** fwdref.e:527		if fr[FR_SUBPROG] = TopLevelSub then*/
    // SubProg patch_forward_case pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62935);
    _31221 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 27 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31221, _5TopLevelSub_12484)){
        _31221 = NOVALUE;
        goto L1; // [27] 48
    }
    _31221 = NOVALUE;
    // SubProg patch_forward_case pc: 31 op: STARTLINE (58)

    /** fwdref.e:528			case_sym = Code[switch_pc + 2]*/
    // SubProg patch_forward_case pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 35 op: PLUS (11)
    _31223 = _switch_pc_62937 + 2;
    // SubProg patch_forward_case pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    _case_sym_62940 = (object)*(((s1_ptr)_2)->base + _31223);
    if (!IS_ATOM_INT(_case_sym_62940)){
        _case_sym_62940 = (object)DBL_PTR(_case_sym_62940)->dbl;
    }
    // SubProg patch_forward_case pc: 45 op: ELSE (23)
    goto L2; // [45] 77
    // SubProg patch_forward_case pc: 47 op: NOP1 (159)
L1: // addr: 48 pc: 47 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 48 op: STARTLINE (58)

    /** fwdref.e:530			case_sym = SymTab[fr[FR_SUBPROG]][S_CODE][switch_pc + 2]*/
    // SubProg patch_forward_case pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62935);
    _31225 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_31225)){
        _31226 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31225)->dbl));
    }
    else{
        _31226 = (object)*(((s1_ptr)_2)->base + _31225);
    }
    // SubProg patch_forward_case pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31226);
    if (!IS_ATOM_INT(_5S_CODE_12144)){
        _31227 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    }
    else{
        _31227 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
    }
    _31226 = NOVALUE;
    // SubProg patch_forward_case pc: 66 op: PLUS (11)
    _31228 = _switch_pc_62937 + 2;
    // SubProg patch_forward_case pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31227);
    _case_sym_62940 = (object)*(((s1_ptr)_2)->base + _31228);
    if (!IS_ATOM_INT(_case_sym_62940)){
        _case_sym_62940 = (object)DBL_PTR(_case_sym_62940)->dbl;
    }
    _31227 = NOVALUE;
    // SubProg patch_forward_case pc: 76 op: NOP1 (159)
L2: // addr: 77 pc: 76 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 77 op: STARTLINE (58)

    /** fwdref.e:533		if SymTab[tok[T_SYM]][S_FILE_NO] = fr[FR_FILE] and fr[FR_SUBPROG] = TopLevelSub then*/
    // SubProg patch_forward_case pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 83 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62933);
    _31230 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_31230)){
        _31231 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31230)->dbl));
    }
    else{
        _31231 = (object)*(((s1_ptr)_2)->base + _31230);
    }
    // SubProg patch_forward_case pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31231);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _31232 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _31232 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _31231 = NOVALUE;
    // SubProg patch_forward_case pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62935);
    _31233 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg patch_forward_case pc: 101 op: EQUALS (3)
    if (IS_ATOM_INT(_31232) && IS_ATOM_INT(_31233)) {
        _31234 = (_31232 == _31233);
    }
    else {
        _31234 = binary_op(EQUALS, _31232, _31233);
    }
    _31232 = NOVALUE;
    _31233 = NOVALUE;
    // SubProg patch_forward_case pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31234)) {
        if (_31234 == 0) {
            goto L3; // [105] 129
        }
    }
    else {
        if (DBL_PTR(_31234)->dbl == 0.0) {
            goto L3; // [105] 129
        }
    }
    // SubProg patch_forward_case pc: 109 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_62935);
    _31236 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_case pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 115 op: EQUALS (3)
    if (IS_ATOM_INT(_31236)) {
        _31237 = (_31236 == _5TopLevelSub_12484);
    }
    else {
        _31237 = binary_op(EQUALS, _31236, _5TopLevelSub_12484);
    }
    _31236 = NOVALUE;
    // SubProg patch_forward_case pc: 119 op: NOP1 (159)
    // SubProg patch_forward_case pc: 120 op: IF (20)
    if (_31237 == 0) {
        DeRef(_31237);
        _31237 = NOVALUE;
        goto L3; // [120] 129
    }
    else {
        if (!IS_ATOM_INT(_31237) && DBL_PTR(_31237)->dbl == 0.0){
            DeRef(_31237);
            _31237 = NOVALUE;
            goto L3; // [120] 129
        }
        DeRef(_31237);
        _31237 = NOVALUE;
    }
    DeRef(_31237);
    _31237 = NOVALUE;
    // SubProg patch_forward_case pc: 123 op: STARTLINE (58)

    /** fwdref.e:534			return*/
    // SubProg patch_forward_case pc: 125 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_case

// block var tok_62933
    DeRef(_tok_62933);

// block var ref_62934

// block var fr_62935
    DeRef(_fr_62935);

// block var switch_pc_62937

// block var case_sym_62940

// block var case_values_62969
    DeRef(_case_values_62969);

// block var cx_62974

// block var negative_62982
    DeRef(_31234);
    _31234 = NOVALUE;
    _31225 = NOVALUE;
    _31230 = NOVALUE;
    DeRef(_31228);
    _31228 = NOVALUE;
    DeRef(_31223);
    _31223 = NOVALUE;
    return;
    // SubProg patch_forward_case pc: 128 op: NOP1 (159)
L3: // addr: 129 pc: 128 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 129 op: STARTLINE (58)

    /** fwdref.e:537		sequence case_values = SymTab[case_sym][S_OBJ]*/
    // SubProg patch_forward_case pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 133 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_case pc: 135 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31238 = (object)*(((s1_ptr)_2)->base + _case_sym_62940);
    // SubProg patch_forward_case pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 141 op: RHS_SUBS_CHECK (92)
    DeRef(_case_values_62969);
    _2 = (object)SEQ_PTR(_31238);
    _case_values_62969 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_case_values_62969);
    _31238 = NOVALUE;
    // SubProg patch_forward_case pc: 145 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_case pc: 147 op: STARTLINE (58)

    /** fwdref.e:539		integer cx = find( { ref }, case_values )*/
    // SubProg patch_forward_case pc: 149 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ref_62934;
    _31240 = MAKE_SEQ(_1);
    // SubProg patch_forward_case pc: 153 op: FIND_FROM (176)
    _cx_62974 = find_from(_31240, _case_values_62969, 1);
    DeRefDS(_31240);
    _31240 = NOVALUE;
    // SubProg patch_forward_case pc: 158 op: STARTLINE (58)

    /** fwdref.e:540		if not cx then*/
    // SubProg patch_forward_case pc: 160 op: NOT_IFW (108)
    if (_cx_62974 != 0)
    goto L4; // [160] 178
    // SubProg patch_forward_case pc: 163 op: STARTLINE (58)

    /** fwdref.e:541			cx = find( { -ref }, case_values )*/
    // SubProg patch_forward_case pc: 165 op: UMINUS (12)
    if ((uintptr_t)_ref_62934 == (uintptr_t)HIGH_BITS){
        _31243 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31243 = - _ref_62934;
    }
    // SubProg patch_forward_case pc: 168 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31243;
    _31244 = MAKE_SEQ(_1);
    _31243 = NOVALUE;
    // SubProg patch_forward_case pc: 172 op: FIND_FROM (176)
    _cx_62974 = find_from(_31244, _case_values_62969, 1);
    DeRefDS(_31244);
    _31244 = NOVALUE;
    // SubProg patch_forward_case pc: 177 op: NOP1 (159)
L4: // addr: 178 pc: 177 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 178 op: STARTLINE (58)

    /** fwdref.e:544	 	ifdef DEBUG then	*/
    // SubProg patch_forward_case pc: 180 op: STARTLINE (58)

    /** fwdref.e:551		integer negative = 0*/
    // SubProg patch_forward_case pc: 182 op: ASSIGN_I (113)
    _negative_62982 = 0;
    // SubProg patch_forward_case pc: 185 op: STARTLINE (58)

    /** fwdref.e:552		if case_values[cx][1] < 0 then*/
    // SubProg patch_forward_case pc: 187 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_case_values_62969);
    _31246 = (object)*(((s1_ptr)_2)->base + _cx_62974);
    // SubProg patch_forward_case pc: 191 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31246);
    _31247 = (object)*(((s1_ptr)_2)->base + 1);
    _31246 = NOVALUE;
    // SubProg patch_forward_case pc: 195 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _31247, 0)){
        _31247 = NOVALUE;
        goto L5; // [195] 224
    }
    _31247 = NOVALUE;
    // SubProg patch_forward_case pc: 199 op: STARTLINE (58)

    /** fwdref.e:553			negative = 1*/
    // SubProg patch_forward_case pc: 201 op: ASSIGN_I (113)
    _negative_62982 = 1;
    // SubProg patch_forward_case pc: 204 op: STARTLINE (58)

    /** fwdref.e:554			case_values[cx][1] *= -1*/
    // SubProg patch_forward_case pc: 206 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_case_values_62969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62969 = MAKE_SEQ(_2);
    }
    _3 = (object)(_cx_62974 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_case pc: 211 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31251 = (object)*(((s1_ptr)_2)->base + 1);
    _31249 = NOVALUE;
    // SubProg patch_forward_case pc: 215 op: MULTIPLY (13)
    if (IS_ATOM_INT(_31251)) {
        if (_31251 == (short)_31251){
            _31252 = _31251 * -1;
        }
        else{
            _31252 = NewDouble(_31251 * (eudouble)-1);
        }
    }
    else {
        _31252 = binary_op(MULTIPLY, _31251, -1);
    }
    _31251 = NOVALUE;
    // SubProg patch_forward_case pc: 219 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31252;
    if( _1 != _31252 ){
        DeRef(_1);
    }
    _31252 = NOVALUE;
    _31249 = NOVALUE;
    // SubProg patch_forward_case pc: 223 op: NOP1 (159)
L5: // addr: 224 pc: 223 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 224 op: STARTLINE (58)

    /** fwdref.e:557		if negative then*/
    // SubProg patch_forward_case pc: 226 op: IF (20)
    if (_negative_62982 == 0)
    {
        goto L6; // [226] 247
    }
    else{
    }
    // SubProg patch_forward_case pc: 229 op: STARTLINE (58)

    /** fwdref.e:558			case_values[cx] = - tok[T_SYM]*/
    // SubProg patch_forward_case pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62933);
    _31253 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 237 op: UMINUS (12)
    if (IS_ATOM_INT(_31253)) {
        if ((uintptr_t)_31253 == (uintptr_t)HIGH_BITS){
            _31254 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _31254 = - _31253;
        }
    }
    else {
        _31254 = unary_op(UMINUS, _31253);
    }
    _31253 = NOVALUE;
    // SubProg patch_forward_case pc: 240 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_case_values_62969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62974);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31254;
    if( _1 != _31254 ){
        DeRef(_1);
    }
    _31254 = NOVALUE;
    // SubProg patch_forward_case pc: 244 op: ELSE (23)
    goto L7; // [244] 260
    // SubProg patch_forward_case pc: 246 op: NOP1 (159)
L6: // addr: 247 pc: 246 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 247 op: STARTLINE (58)

    /** fwdref.e:560			case_values[cx] = tok[T_SYM]*/
    // SubProg patch_forward_case pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 251 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_62933);
    _31255 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_case pc: 255 op: ASSIGN_SUBS (16)
    Ref(_31255);
    _2 = (object)SEQ_PTR(_case_values_62969);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _case_values_62969 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _cx_62974);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31255;
    if( _1 != _31255 ){
        DeRef(_1);
    }
    _31255 = NOVALUE;
    // SubProg patch_forward_case pc: 259 op: NOP1 (159)
L7: // addr: 260 pc: 259 sub: 62930 op: 159
    // SubProg patch_forward_case pc: 260 op: STARTLINE (58)

    /** fwdref.e:562		SymTab[case_sym][S_OBJ] = case_values*/
    // SubProg patch_forward_case pc: 262 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 264 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_case_sym_62940 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_case pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_case pc: 271 op: PASSIGN_SUBS (162)
    RefDS(_case_values_62969);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _case_values_62969;
    DeRef(_1);
    _31256 = NOVALUE;
    // SubProg patch_forward_case pc: 275 op: STARTLINE (58)

    /** fwdref.e:563		resolved_reference( ref )*/
    // SubProg patch_forward_case pc: 277 op: PROC (27)
    _30resolved_reference(_ref_62934);
    // SubProg patch_forward_case pc: 280 op: STARTLINE (58)

    /** fwdref.e:564	end procedure*/
    // SubProg patch_forward_case pc: 282 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_case

// block var tok_62933
    DeRef(_tok_62933);

// block var ref_62934

// block var fr_62935
    DeRef(_fr_62935);

// block var switch_pc_62937

// block var case_sym_62940

// block var case_values_62969
    DeRefDS(_case_values_62969);

// block var cx_62974

// block var negative_62982
    DeRef(_31234);
    _31234 = NOVALUE;
    _31225 = NOVALUE;
    _31230 = NOVALUE;
    DeRef(_31228);
    _31228 = NOVALUE;
    DeRef(_31223);
    _31223 = NOVALUE;
    return;
    // SubProg patch_forward_case pc: 285 op: BADRETURNF (43)
    ;
}


void _30patch_forward_type_check(object _tok_63005, object _ref_63006)
{
    object _fr_63007 = NOVALUE;
    object _which_type_63010 = NOVALUE;
    object _var_63012 = NOVALUE;
    object _pc_63045 = NOVALUE;
    object _with_type_check_63047 = NOVALUE;
    object _c_63077 = NOVALUE;
    object _subprog_inlined_insert_code_at_332_63086 = NOVALUE;
    object _code_inlined_insert_code_at_329_63085 = NOVALUE;
    object _subprog_inlined_insert_code_at_415_63102 = NOVALUE;
    object _code_inlined_insert_code_at_412_63101 = NOVALUE;
    object _subprog_inlined_insert_code_at_477_63112 = NOVALUE;
    object _code_inlined_insert_code_at_474_63111 = NOVALUE;
    object _subprog_inlined_insert_code_at_539_63122 = NOVALUE;
    object _code_inlined_insert_code_at_536_63121 = NOVALUE;
    object _start_pc_63129 = NOVALUE;
    object _subprog_inlined_insert_code_at_647_63146 = NOVALUE;
    object _code_inlined_insert_code_at_644_63145 = NOVALUE;
    object _c_63149 = NOVALUE;
    object _subprog_inlined_insert_code_at_741_63165 = NOVALUE;
    object _code_inlined_insert_code_at_738_63164 = NOVALUE;
    object _start_pc_63176 = NOVALUE;
    object _subprog_inlined_insert_code_at_886_63196 = NOVALUE;
    object _code_inlined_insert_code_at_883_63195 = NOVALUE;
    object _subprog_inlined_insert_code_at_987_63217 = NOVALUE;
    object _code_inlined_insert_code_at_984_63216 = NOVALUE;
// skipping _31347  name type: 0
    object _31346 = NOVALUE; // 63214 31346
    object _31345 = NOVALUE; // 63213 31345
    object _31344 = NOVALUE; // 63211 31344
    object _31343 = NOVALUE; // 63209 31343
    object _31342 = NOVALUE; // 63207 31342
    object _31341 = NOVALUE; // 63206 31341
    object _31340 = NOVALUE; // 63204 31340
// skipping _31339  name type: 0
    object _31338 = NOVALUE; // 63200 31338
// skipping _31337  name type: 0
    object _31336 = NOVALUE; // 63193 31336
    object _31335 = NOVALUE; // 63192 31335
    object _31334 = NOVALUE; // 63190 31334
    object _31333 = NOVALUE; // 63188 31333
    object _31332 = NOVALUE; // 63186 31332
    object _31331 = NOVALUE; // 63185 31331
    object _31330 = NOVALUE; // 63183 31330
// skipping _31329  name type: 0
    object _31328 = NOVALUE; // 63179 31328
    object _31327 = NOVALUE; // 63175 31327
    object _31326 = NOVALUE; // 63173 31326
    object _31325 = NOVALUE; // 63171 31325
    object _31324 = NOVALUE; // 63170 31324
    object _31323 = NOVALUE; // 63169 31323
// skipping _31322  name type: 0
    object _31321 = NOVALUE; // 63162 31321
    object _31320 = NOVALUE; // 63161 31320
    object _31319 = NOVALUE; // 63158 31319
    object _31318 = NOVALUE; // 63157 31318
// skipping _31317  name type: 0
    object _31316 = NOVALUE; // 63154 31316
    object _31315 = NOVALUE; // 63153 31315
// skipping _31314  name type: 0
// skipping _31313  name type: 0
    object _31312 = NOVALUE; // 63143 31312
    object _31311 = NOVALUE; // 63142 31311
// skipping _31310  name type: 0
    object _31309 = NOVALUE; // 63138 31309
    object _31308 = NOVALUE; // 63136 31308
    object _31307 = NOVALUE; // 63135 31307
    object _31306 = NOVALUE; // 63133 31306
    object _31305 = NOVALUE; // 63128 31305
    object _31304 = NOVALUE; // 63126 31304
// skipping _31303  name type: 0
    object _31302 = NOVALUE; // 63119 31302
    object _31301 = NOVALUE; // 63118 31301
// skipping _31300  name type: 0
// skipping _31299  name type: 0
    object _31298 = NOVALUE; // 63109 31298
    object _31297 = NOVALUE; // 63108 31297
// skipping _31296  name type: 0
// skipping _31295  name type: 0
    object _31294 = NOVALUE; // 63099 31294
    object _31293 = NOVALUE; // 63098 31293
// skipping _31292  name type: 0
// skipping _31291  name type: 0
// skipping _31290  name type: 0
    object _31289 = NOVALUE; // 63083 31289
    object _31288 = NOVALUE; // 63082 31288
// skipping _31287  name type: 0
    object _31286 = NOVALUE; // 63076 31286
    object _31285 = NOVALUE; // 63074 31285
// skipping _31284  name type: 0
    object _31283 = NOVALUE; // 63065 31283
    object _31282 = NOVALUE; // 63064 31282
// skipping _31281  name type: 0
// skipping _31280  name type: 0
    object _31279 = NOVALUE; // 63060 31279
// skipping _31278  name type: 0
// skipping _31277  name type: 0
    object _31276 = NOVALUE; // 63053 31276
// skipping _31275  name type: 0
    object _31274 = NOVALUE; // 63049 31274
// skipping _31273  name type: 0
// skipping _31272  name type: 0
    object _31271 = NOVALUE; // 63042 31271
    object _31270 = NOVALUE; // 63041 31270
// skipping _31269  name type: 0
// skipping _31268  name type: 0
    object _31267 = NOVALUE; // 63031 31267
// skipping _31266  name type: 0
// skipping _31265  name type: 0
// skipping _31264  name type: 0
// skipping _31263  name type: 0
    object _31262 = NOVALUE; // 63020 31262
    object _31261 = NOVALUE; // 63019 31261
// skipping _31260  name type: 0
    object _31259 = NOVALUE; // 63014 31259
// skipping _31258  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg patch_forward_type_check pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 3 op: STARTLINE (58)

    /** fwdref.e:568		sequence fr = forward_references[ref]*/
    // SubProg patch_forward_type_check pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 7 op: RHS_SUBS (25)
    DeRef(_fr_63007);
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _fr_63007 = (object)*(((s1_ptr)_2)->base + _ref_63006);
    Ref(_fr_63007);
    // SubProg patch_forward_type_check pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 13 op: STARTLINE (58)

    /** fwdref.e:572		if fr[FR_OP] = TYPE_CHECK_FORWARD then*/
    // SubProg patch_forward_type_check pc: 15 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31259 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 21 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31259, 197)){
        _31259 = NOVALUE;
        goto L1; // [21] 86
    }
    _31259 = NOVALUE;
    // SubProg patch_forward_type_check pc: 25 op: STARTLINE (58)

    /** fwdref.e:573			which_type = SymTab[tok[T_SYM]][S_VTYPE]*/
    // SubProg patch_forward_type_check pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63005);
    _31261 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg patch_forward_type_check pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_31261)){
        _31262 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31261)->dbl));
    }
    else{
        _31262 = (object)*(((s1_ptr)_2)->base + _31261);
    }
    // SubProg patch_forward_type_check pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31262);
    _which_type_63010 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_which_type_63010)){
        _which_type_63010 = (object)DBL_PTR(_which_type_63010)->dbl;
    }
    _31262 = NOVALUE;
    // SubProg patch_forward_type_check pc: 47 op: STARTLINE (58)

    /** fwdref.e:574			if not which_type then*/
    // SubProg patch_forward_type_check pc: 49 op: NOT_IFW (108)
    if (_which_type_63010 != 0)
    goto L2; // [49] 72
    // SubProg patch_forward_type_check pc: 52 op: STARTLINE (58)

    /** fwdref.e:575				which_type = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63005);
    _which_type_63010 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_63010)){
        _which_type_63010 = (object)DBL_PTR(_which_type_63010)->dbl;
    }
    // SubProg patch_forward_type_check pc: 62 op: STARTLINE (58)

    /** fwdref.e:576				var = 0*/
    // SubProg patch_forward_type_check pc: 64 op: ASSIGN (18)
    _var_63012 = 0;
    // SubProg patch_forward_type_check pc: 67 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 69 op: ELSE (23)
    goto L3; // [69] 144
    // SubProg patch_forward_type_check pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 72 op: STARTLINE (58)

    /** fwdref.e:578				var = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63005);
    _var_63012 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_var_63012)){
        _var_63012 = (object)DBL_PTR(_var_63012)->dbl;
    }
    // SubProg patch_forward_type_check pc: 82 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 83 op: ELSE (23)
    goto L3; // [83] 144
    // SubProg patch_forward_type_check pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 86 op: STARTLINE (58)

    /** fwdref.e:582		elsif fr[FR_OP] = TYPE then*/
    // SubProg patch_forward_type_check pc: 88 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31267 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 94 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31267, 504)){
        _31267 = NOVALUE;
        goto L4; // [94] 118
    }
    _31267 = NOVALUE;
    // SubProg patch_forward_type_check pc: 98 op: STARTLINE (58)

    /** fwdref.e:583			which_type = tok[T_SYM]*/
    // SubProg patch_forward_type_check pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63005);
    _which_type_63010 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_which_type_63010)){
        _which_type_63010 = (object)DBL_PTR(_which_type_63010)->dbl;
    }
    // SubProg patch_forward_type_check pc: 108 op: STARTLINE (58)

    /** fwdref.e:584			var = 0*/
    // SubProg patch_forward_type_check pc: 110 op: ASSIGN (18)
    _var_63012 = 0;
    // SubProg patch_forward_type_check pc: 113 op: INTEGER_CHECK (96)
    // SubProg patch_forward_type_check pc: 115 op: ELSE (23)
    goto L3; // [115] 144
    // SubProg patch_forward_type_check pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 118 op: STARTLINE (58)

    /** fwdref.e:587			prep_forward_error( ref )*/
    // SubProg patch_forward_type_check pc: 120 op: PROC (27)
    _30prep_forward_error(_ref_63006);
    // SubProg patch_forward_type_check pc: 123 op: STARTLINE (58)

    /** fwdref.e:588			InternalErr( 262, { TYPE_CHECK, TYPE_CHECK_FORWARD, fr[FR_OP] })*/
    // SubProg patch_forward_type_check pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 129 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31270 = (object)*(((s1_ptr)_2)->base + 10);
    // SubProg patch_forward_type_check pc: 133 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 65;
    ((intptr_t*)_2)[2] = 197;
    Ref(_31270);
    ((intptr_t*)_2)[3] = _31270;
    _31271 = MAKE_SEQ(_1);
    _31270 = NOVALUE;
    // SubProg patch_forward_type_check pc: 139 op: PROC (27)
    _49InternalErr(262, _31271);
    _31271 = NOVALUE;
    // SubProg patch_forward_type_check pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 144 op: STARTLINE (58)

    /** fwdref.e:591		if which_type < 0 then*/
    // SubProg patch_forward_type_check pc: 146 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_type_check pc: 148 op: LESS_IFW (102)
    if (_which_type_63010 >= 0)
    goto L5; // [148] 158
    // SubProg patch_forward_type_check pc: 152 op: STARTLINE (58)

    /** fwdref.e:593			return*/
    // SubProg patch_forward_type_check pc: 154 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_type_check

// block var tok_63005
    DeRef(_tok_63005);

// block var ref_63006

// block var fr_63007
    DeRef(_fr_63007);

// block var which_type_63010

// block var var_63012

// block var pc_63045

// block var with_type_check_63047
    _31261 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 157 op: NOP1 (159)
L5: // addr: 158 pc: 157 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 158 op: STARTLINE (58)

    /** fwdref.e:596		set_code( ref )*/
    // SubProg patch_forward_type_check pc: 160 op: PROC (27)
    _30set_code(_ref_63006);
    // SubProg patch_forward_type_check pc: 163 op: STARTLINE (58)

    /** fwdref.e:598		integer pc = fr[FR_PC]*/
    // SubProg patch_forward_type_check pc: 165 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63007);
    _pc_63045 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_pc_63045))
    _pc_63045 = (object)DBL_PTR(_pc_63045)->dbl;
    // SubProg patch_forward_type_check pc: 169 op: STARTLINE (58)

    /** fwdref.e:599		integer with_type_check = Code[pc + 2]*/
    // SubProg patch_forward_type_check pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 173 op: PLUS (11)
    _31274 = _pc_63045 + 2;
    // SubProg patch_forward_type_check pc: 177 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    _with_type_check_63047 = (object)*(((s1_ptr)_2)->base + _31274);
    if (!IS_ATOM_INT(_with_type_check_63047)){
        _with_type_check_63047 = (object)DBL_PTR(_with_type_check_63047)->dbl;
    }
    // SubProg patch_forward_type_check pc: 183 op: STARTLINE (58)

    /** fwdref.e:601		if Code[pc] != TYPE_CHECK_FORWARD then*/
    // SubProg patch_forward_type_check pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 187 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    _31276 = (object)*(((s1_ptr)_2)->base + _pc_63045);
    // SubProg patch_forward_type_check pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 193 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _31276, 197)){
        _31276 = NOVALUE;
        goto L6; // [193] 204
    }
    _31276 = NOVALUE;
    // SubProg patch_forward_type_check pc: 197 op: STARTLINE (58)

    /** fwdref.e:602			forward_error( tok, ref )*/
    // SubProg patch_forward_type_check pc: 199 op: PROC (27)
    Ref(_tok_63005);
    _30forward_error(_tok_63005, _ref_63006);
    // SubProg patch_forward_type_check pc: 203 op: NOP1 (159)
L6: // addr: 204 pc: 203 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 204 op: STARTLINE (58)

    /** fwdref.e:604		if not var then*/
    // SubProg patch_forward_type_check pc: 206 op: PRIVATE_INIT_CHECK (30)
    // SubProg patch_forward_type_check pc: 208 op: NOT_IFW (108)
    if (_var_63012 != 0)
    goto L7; // [208] 226
    // SubProg patch_forward_type_check pc: 211 op: STARTLINE (58)

    /** fwdref.e:606			var = Code[pc+1]*/
    // SubProg patch_forward_type_check pc: 213 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 215 op: PLUS1 (93)
    _31279 = _pc_63045 + 1;
    // SubProg patch_forward_type_check pc: 219 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Code_12566);
    _var_63012 = (object)*(((s1_ptr)_2)->base + _31279);
    if (!IS_ATOM_INT(_var_63012)){
        _var_63012 = (object)DBL_PTR(_var_63012)->dbl;
    }
    // SubProg patch_forward_type_check pc: 225 op: NOP1 (159)
L7: // addr: 226 pc: 225 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 226 op: STARTLINE (58)

    /** fwdref.e:609		if var < 0 then*/
    // SubProg patch_forward_type_check pc: 228 op: LESS_IFW (102)
    if (_var_63012 >= 0)
    goto L8; // [228] 238
    // SubProg patch_forward_type_check pc: 232 op: STARTLINE (58)

    /** fwdref.e:611			return*/
    // SubProg patch_forward_type_check pc: 234 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: patch_forward_type_check

// block var tok_63005
    DeRef(_tok_63005);

// block var ref_63006

// block var fr_63007
    DeRef(_fr_63007);

// block var which_type_63010

// block var var_63012

// block var pc_63045

// block var with_type_check_63047
    DeRef(_31274);
    _31274 = NOVALUE;
    _31261 = NOVALUE;
    DeRef(_31279);
    _31279 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 237 op: NOP1 (159)
L8: // addr: 238 pc: 237 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 238 op: STARTLINE (58)

    /** fwdref.e:615		replace_code( {}, pc, pc + 2, fr[FR_SUBPROG])*/
    // SubProg patch_forward_type_check pc: 240 op: PLUS (11)
    _31282 = _pc_63045 + 2;
    if ((object)((uintptr_t)_31282 + (uintptr_t)HIGH_BITS) >= 0){
        _31282 = NewDouble((eudouble)_31282);
    }
    // SubProg patch_forward_type_check pc: 244 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31283 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 248 op: PROC (27)
    RefDS(_21958);
    Ref(_31283);
    _30replace_code(_21958, _pc_63045, _31282, _31283);
    _31282 = NOVALUE;
    _31283 = NOVALUE;
    // SubProg patch_forward_type_check pc: 254 op: STARTLINE (58)

    /** fwdref.e:617		if TRANSLATE then*/
    // SubProg patch_forward_type_check pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 258 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L9; // [258] 364
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 261 op: STARTLINE (58)

    /** fwdref.e:618			if with_type_check then*/
    // SubProg patch_forward_type_check pc: 263 op: IF (20)
    if (_with_type_check_63047 == 0)
    {
        goto LA; // [263] 771
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 266 op: STARTLINE (58)

    /** fwdref.e:619				if which_type != object_type then*/
    // SubProg patch_forward_type_check pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 270 op: NOTEQ_IFW (105)
    if (_which_type_63010 == _53object_type_46324)
    goto LA; // [270] 771
    // SubProg patch_forward_type_check pc: 274 op: STARTLINE (58)

    /** fwdref.e:620					if SymTab[which_type][S_EFFECT] then*/
    // SubProg patch_forward_type_check pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31285 = (object)*(((s1_ptr)_2)->base + _which_type_63010);
    // SubProg patch_forward_type_check pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31285);
    _31286 = (object)*(((s1_ptr)_2)->base + 23);
    _31285 = NOVALUE;
    // SubProg patch_forward_type_check pc: 288 op: IF (20)
    if (_31286 == 0) {
        _31286 = NOVALUE;
        goto LB; // [288] 357
    }
    else {
        if (!IS_ATOM_INT(_31286) && DBL_PTR(_31286)->dbl == 0.0){
            _31286 = NOVALUE;
            goto LB; // [288] 357
        }
        _31286 = NOVALUE;
    }
    _31286 = NOVALUE;
    // SubProg patch_forward_type_check pc: 291 op: STARTLINE (58)

    /** fwdref.e:622						integer c = NewTempSym()*/
    // SubProg patch_forward_type_check pc: 293 op: PROC (27)
    _c_63077 = _53NewTempSym(0);
    // SubProg patch_forward_type_check pc: 297 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_63077)) {
        _1 = (object)(DBL_PTR(_c_63077)->dbl);
        DeRefDS(_c_63077);
        _c_63077 = _1;
    }
    // SubProg patch_forward_type_check pc: 299 op: STARTLINE (58)

    /** fwdref.e:623						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 303 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 305 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_63010;
    ((intptr_t*)_2)[3] = _var_63012;
    ((intptr_t*)_2)[4] = _c_63077;
    ((intptr_t*)_2)[5] = 65;
    _31288 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 313 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31289 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 317 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_329_63085);
    _code_inlined_insert_code_at_329_63085 = _31288;
    _31288 = NOVALUE;
    // SubProg patch_forward_type_check pc: 320 op: ASSIGN (18)
    Ref(_31289);
    DeRef(_subprog_inlined_insert_code_at_332_63086);
    _subprog_inlined_insert_code_at_332_63086 = _31289;
    _31289 = NOVALUE;
    // SubProg patch_forward_type_check pc: 323 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 325 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_332_63086)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_332_63086)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_332_63086);
        _subprog_inlined_insert_code_at_332_63086 = _1;
    }
    // SubProg patch_forward_type_check pc: 327 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 329 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_332_63086;
    // SubProg patch_forward_type_check pc: 332 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 334 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_329_63085);
    _65insert_code(_code_inlined_insert_code_at_329_63085, _pc_63045);
    // SubProg patch_forward_type_check pc: 338 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 340 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 343 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 345 op: ELSE (23)
    goto LC; // [345] 348
    // SubProg patch_forward_type_check pc: 347 op: NOP1 (159)
LC: // addr: 348 pc: 347 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 348 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 329

// block var code_inlined_insert_code_at_329_63085
    DeRefi(_code_inlined_insert_code_at_329_63085);
    _code_inlined_insert_code_at_329_63085 = NOVALUE;

// block var subprog_inlined_insert_code_at_332_63086
    DeRef(_subprog_inlined_insert_code_at_332_63086);
    _subprog_inlined_insert_code_at_332_63086 = NOVALUE;
    // SubProg patch_forward_type_check pc: 350 op: STARTLINE (58)

    /** fwdref.e:624						pc += 5*/
    // SubProg patch_forward_type_check pc: 352 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 5;
    // SubProg patch_forward_type_check pc: 356 op: NOP1 (159)
LB: // addr: 357 pc: 356 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 357 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var c_63077
    // SubProg patch_forward_type_check pc: 359 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 360 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 361 op: ELSE (23)
    goto LA; // [361] 771
    // SubProg patch_forward_type_check pc: 363 op: NOP1 (159)
L9: // addr: 364 pc: 363 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 364 op: STARTLINE (58)

    /** fwdref.e:630			if with_type_check then*/
    // SubProg patch_forward_type_check pc: 366 op: IF (20)
    if (_with_type_check_63047 == 0)
    {
        goto LD; // [366] 770
    }
    else{
    }
    // SubProg patch_forward_type_check pc: 369 op: STARTLINE (58)

    /** fwdref.e:632				if which_type = object_type then*/
    // SubProg patch_forward_type_check pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 373 op: EQUALS_IFW (104)
    if (_which_type_63010 != _53object_type_46324)
    goto LE; // [373] 380
    // SubProg patch_forward_type_check pc: 377 op: ELSE (23)
    goto LF; // [377] 769
    // SubProg patch_forward_type_check pc: 379 op: NOP1 (159)
LE: // addr: 380 pc: 379 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 380 op: STARTLINE (58)

    /** fwdref.e:636					if which_type = integer_type then*/
    // SubProg patch_forward_type_check pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 384 op: EQUALS_IFW (104)
    if (_which_type_63010 != _53integer_type_46330)
    goto L10; // [384] 442
    // SubProg patch_forward_type_check pc: 388 op: STARTLINE (58)

    /** fwdref.e:637						insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 392 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_63012;
    _31293 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 396 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31294 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 400 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_412_63101);
    _code_inlined_insert_code_at_412_63101 = _31293;
    _31293 = NOVALUE;
    // SubProg patch_forward_type_check pc: 403 op: ASSIGN (18)
    Ref(_31294);
    DeRef(_subprog_inlined_insert_code_at_415_63102);
    _subprog_inlined_insert_code_at_415_63102 = _31294;
    _31294 = NOVALUE;
    // SubProg patch_forward_type_check pc: 406 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 408 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_415_63102)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_415_63102)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_415_63102);
        _subprog_inlined_insert_code_at_415_63102 = _1;
    }
    // SubProg patch_forward_type_check pc: 410 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 412 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_415_63102;
    // SubProg patch_forward_type_check pc: 415 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 417 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_412_63101);
    _65insert_code(_code_inlined_insert_code_at_412_63101, _pc_63045);
    // SubProg patch_forward_type_check pc: 421 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 423 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 426 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 428 op: ELSE (23)
    goto L11; // [428] 431
    // SubProg patch_forward_type_check pc: 430 op: NOP1 (159)
L11: // addr: 431 pc: 430 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 431 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 412

// block var code_inlined_insert_code_at_412_63101
    DeRefi(_code_inlined_insert_code_at_412_63101);
    _code_inlined_insert_code_at_412_63101 = NOVALUE;

// block var subprog_inlined_insert_code_at_415_63102
    DeRef(_subprog_inlined_insert_code_at_415_63102);
    _subprog_inlined_insert_code_at_415_63102 = NOVALUE;
    // SubProg patch_forward_type_check pc: 433 op: STARTLINE (58)

    /** fwdref.e:638						pc += 2*/
    // SubProg patch_forward_type_check pc: 435 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 2;
    // SubProg patch_forward_type_check pc: 439 op: ELSE (23)
    goto L12; // [439] 768
    // SubProg patch_forward_type_check pc: 441 op: NOP1 (159)
L10: // addr: 442 pc: 441 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 442 op: STARTLINE (58)

    /** fwdref.e:640					elsif which_type = sequence_type then*/
    // SubProg patch_forward_type_check pc: 444 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 446 op: EQUALS_IFW (104)
    if (_which_type_63010 != _53sequence_type_46328)
    goto L13; // [446] 504
    // SubProg patch_forward_type_check pc: 450 op: STARTLINE (58)

    /** fwdref.e:641						insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG])*/
    // SubProg patch_forward_type_check pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 454 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_63012;
    _31297 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 458 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31298 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 462 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_474_63111);
    _code_inlined_insert_code_at_474_63111 = _31297;
    _31297 = NOVALUE;
    // SubProg patch_forward_type_check pc: 465 op: ASSIGN (18)
    Ref(_31298);
    DeRef(_subprog_inlined_insert_code_at_477_63112);
    _subprog_inlined_insert_code_at_477_63112 = _31298;
    _31298 = NOVALUE;
    // SubProg patch_forward_type_check pc: 468 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 470 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_477_63112)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_477_63112)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_477_63112);
        _subprog_inlined_insert_code_at_477_63112 = _1;
    }
    // SubProg patch_forward_type_check pc: 472 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 474 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_477_63112;
    // SubProg patch_forward_type_check pc: 477 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 479 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_474_63111);
    _65insert_code(_code_inlined_insert_code_at_474_63111, _pc_63045);
    // SubProg patch_forward_type_check pc: 483 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 485 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 488 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 490 op: ELSE (23)
    goto L14; // [490] 493
    // SubProg patch_forward_type_check pc: 492 op: NOP1 (159)
L14: // addr: 493 pc: 492 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 493 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 474

// block var code_inlined_insert_code_at_474_63111
    DeRefi(_code_inlined_insert_code_at_474_63111);
    _code_inlined_insert_code_at_474_63111 = NOVALUE;

// block var subprog_inlined_insert_code_at_477_63112
    DeRef(_subprog_inlined_insert_code_at_477_63112);
    _subprog_inlined_insert_code_at_477_63112 = NOVALUE;
    // SubProg patch_forward_type_check pc: 495 op: STARTLINE (58)

    /** fwdref.e:642						pc += 2*/
    // SubProg patch_forward_type_check pc: 497 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 2;
    // SubProg patch_forward_type_check pc: 501 op: ELSE (23)
    goto L12; // [501] 768
    // SubProg patch_forward_type_check pc: 503 op: NOP1 (159)
L13: // addr: 504 pc: 503 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 504 op: STARTLINE (58)

    /** fwdref.e:644					elsif which_type = atom_type then*/
    // SubProg patch_forward_type_check pc: 506 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 508 op: EQUALS_IFW (104)
    if (_which_type_63010 != _53atom_type_46326)
    goto L15; // [508] 566
    // SubProg patch_forward_type_check pc: 512 op: STARTLINE (58)

    /** fwdref.e:645						insert_code( { ATOM_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 514 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 516 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 101;
    ((intptr_t *)_2)[2] = _var_63012;
    _31301 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 520 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31302 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 524 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_536_63121);
    _code_inlined_insert_code_at_536_63121 = _31301;
    _31301 = NOVALUE;
    // SubProg patch_forward_type_check pc: 527 op: ASSIGN (18)
    Ref(_31302);
    DeRef(_subprog_inlined_insert_code_at_539_63122);
    _subprog_inlined_insert_code_at_539_63122 = _31302;
    _31302 = NOVALUE;
    // SubProg patch_forward_type_check pc: 530 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 532 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_539_63122)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_539_63122)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_539_63122);
        _subprog_inlined_insert_code_at_539_63122 = _1;
    }
    // SubProg patch_forward_type_check pc: 534 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 536 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_539_63122;
    // SubProg patch_forward_type_check pc: 539 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 541 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_536_63121);
    _65insert_code(_code_inlined_insert_code_at_536_63121, _pc_63045);
    // SubProg patch_forward_type_check pc: 545 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 547 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 550 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 552 op: ELSE (23)
    goto L16; // [552] 555
    // SubProg patch_forward_type_check pc: 554 op: NOP1 (159)
L16: // addr: 555 pc: 554 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 555 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 536

// block var code_inlined_insert_code_at_536_63121
    DeRefi(_code_inlined_insert_code_at_536_63121);
    _code_inlined_insert_code_at_536_63121 = NOVALUE;

// block var subprog_inlined_insert_code_at_539_63122
    DeRef(_subprog_inlined_insert_code_at_539_63122);
    _subprog_inlined_insert_code_at_539_63122 = NOVALUE;
    // SubProg patch_forward_type_check pc: 557 op: STARTLINE (58)

    /** fwdref.e:646						pc += 2*/
    // SubProg patch_forward_type_check pc: 559 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 2;
    // SubProg patch_forward_type_check pc: 563 op: ELSE (23)
    goto L12; // [563] 768
    // SubProg patch_forward_type_check pc: 565 op: NOP1 (159)
L15: // addr: 566 pc: 565 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 566 op: STARTLINE (58)

    /** fwdref.e:648					elsif SymTab[which_type][S_NEXT] then*/
    // SubProg patch_forward_type_check pc: 568 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 570 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31304 = (object)*(((s1_ptr)_2)->base + _which_type_63010);
    // SubProg patch_forward_type_check pc: 574 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 576 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31304);
    _31305 = (object)*(((s1_ptr)_2)->base + 2);
    _31304 = NOVALUE;
    // SubProg patch_forward_type_check pc: 580 op: IF (20)
    if (_31305 == 0) {
        _31305 = NOVALUE;
        goto L17; // [580] 765
    }
    else {
        if (!IS_ATOM_INT(_31305) && DBL_PTR(_31305)->dbl == 0.0){
            _31305 = NOVALUE;
            goto L17; // [580] 765
        }
        _31305 = NOVALUE;
    }
    _31305 = NOVALUE;
    // SubProg patch_forward_type_check pc: 583 op: STARTLINE (58)

    /** fwdref.e:649						integer start_pc = pc*/
    // SubProg patch_forward_type_check pc: 585 op: ASSIGN_I (113)
    _start_pc_63129 = _pc_63045;
    // SubProg patch_forward_type_check pc: 588 op: STARTLINE (58)

    /** fwdref.e:652						if SymTab[SymTab[which_type][S_NEXT]][S_VTYPE] = integer_type then*/
    // SubProg patch_forward_type_check pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 592 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 594 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31306 = (object)*(((s1_ptr)_2)->base + _which_type_63010);
    // SubProg patch_forward_type_check pc: 598 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 600 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31306);
    _31307 = (object)*(((s1_ptr)_2)->base + 2);
    _31306 = NOVALUE;
    // SubProg patch_forward_type_check pc: 604 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_31307)){
        _31308 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31307)->dbl));
    }
    else{
        _31308 = (object)*(((s1_ptr)_2)->base + _31307);
    }
    // SubProg patch_forward_type_check pc: 608 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 610 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31308);
    _31309 = (object)*(((s1_ptr)_2)->base + 15);
    _31308 = NOVALUE;
    // SubProg patch_forward_type_check pc: 614 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 616 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31309, _53integer_type_46330)){
        _31309 = NOVALUE;
        goto L18; // [616] 672
    }
    _31309 = NOVALUE;
    // SubProg patch_forward_type_check pc: 620 op: STARTLINE (58)

    /** fwdref.e:654							insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 624 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_63012;
    _31311 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 628 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31312 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 632 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_644_63145);
    _code_inlined_insert_code_at_644_63145 = _31311;
    _31311 = NOVALUE;
    // SubProg patch_forward_type_check pc: 635 op: ASSIGN (18)
    Ref(_31312);
    DeRef(_subprog_inlined_insert_code_at_647_63146);
    _subprog_inlined_insert_code_at_647_63146 = _31312;
    _31312 = NOVALUE;
    // SubProg patch_forward_type_check pc: 638 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 640 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_647_63146)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_647_63146)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_647_63146);
        _subprog_inlined_insert_code_at_647_63146 = _1;
    }
    // SubProg patch_forward_type_check pc: 642 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 644 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_647_63146;
    // SubProg patch_forward_type_check pc: 647 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 649 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_644_63145);
    _65insert_code(_code_inlined_insert_code_at_644_63145, _pc_63045);
    // SubProg patch_forward_type_check pc: 653 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 655 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 658 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 660 op: ELSE (23)
    goto L19; // [660] 663
    // SubProg patch_forward_type_check pc: 662 op: NOP1 (159)
L19: // addr: 663 pc: 662 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 663 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 644

// block var code_inlined_insert_code_at_644_63145
    DeRefi(_code_inlined_insert_code_at_644_63145);
    _code_inlined_insert_code_at_644_63145 = NOVALUE;

// block var subprog_inlined_insert_code_at_647_63146
    DeRef(_subprog_inlined_insert_code_at_647_63146);
    _subprog_inlined_insert_code_at_647_63146 = NOVALUE;
    // SubProg patch_forward_type_check pc: 665 op: STARTLINE (58)

    /** fwdref.e:656							pc += 2*/
    // SubProg patch_forward_type_check pc: 667 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 2;
    // SubProg patch_forward_type_check pc: 671 op: NOP1 (159)
L18: // addr: 672 pc: 671 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 672 op: STARTLINE (58)

    /** fwdref.e:658						symtab_index c = NewTempSym()*/
    // SubProg patch_forward_type_check pc: 674 op: PROC (27)
    _c_63149 = _53NewTempSym(0);
    // SubProg patch_forward_type_check pc: 678 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_c_63149)) {
        _1 = (object)(DBL_PTR(_c_63149)->dbl);
        DeRefDS(_c_63149);
        _c_63149 = _1;
    }
    // SubProg patch_forward_type_check pc: 680 op: STARTLINE (58)

    /** fwdref.e:659						SymTab[fr[FR_SUBPROG]][S_STACK_SPACE] += 1*/
    // SubProg patch_forward_type_check pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 684 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31315 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 688 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_31315))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31315)->dbl));
    else
    _3 = (object)(_31315 + ((s1_ptr)_2)->base);
    // SubProg patch_forward_type_check pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 695 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192)){
        _31318 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    }
    else{
        _31318 = (object)*(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    }
    _31316 = NOVALUE;
    // SubProg patch_forward_type_check pc: 699 op: PLUS1 (93)
    if (IS_ATOM_INT(_31318)) {
        _31319 = _31318 + 1;
        if (_31319 > MAXINT){
            _31319 = NewDouble((eudouble)_31319);
        }
    }
    else
    _31319 = binary_op(PLUS, 1, _31318);
    _31318 = NOVALUE;
    // SubProg patch_forward_type_check pc: 703 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31319;
    if( _1 != _31319 ){
        DeRef(_1);
    }
    _31319 = NOVALUE;
    _31316 = NOVALUE;
    // SubProg patch_forward_type_check pc: 707 op: STARTLINE (58)

    /** fwdref.e:660						insert_code( { PROC, which_type, var, c, TYPE_CHECK }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 709 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 713 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 27;
    ((intptr_t*)_2)[2] = _which_type_63010;
    ((intptr_t*)_2)[3] = _var_63012;
    ((intptr_t*)_2)[4] = _c_63149;
    ((intptr_t*)_2)[5] = 65;
    _31320 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 721 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31321 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 725 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_738_63164);
    _code_inlined_insert_code_at_738_63164 = _31320;
    _31320 = NOVALUE;
    // SubProg patch_forward_type_check pc: 728 op: ASSIGN (18)
    Ref(_31321);
    DeRef(_subprog_inlined_insert_code_at_741_63165);
    _subprog_inlined_insert_code_at_741_63165 = _31321;
    _31321 = NOVALUE;
    // SubProg patch_forward_type_check pc: 731 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 733 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_741_63165)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_741_63165)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_741_63165);
        _subprog_inlined_insert_code_at_741_63165 = _1;
    }
    // SubProg patch_forward_type_check pc: 735 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 737 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_741_63165;
    // SubProg patch_forward_type_check pc: 740 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 742 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_738_63164);
    _65insert_code(_code_inlined_insert_code_at_738_63164, _pc_63045);
    // SubProg patch_forward_type_check pc: 746 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 748 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 751 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 753 op: ELSE (23)
    goto L1A; // [753] 756
    // SubProg patch_forward_type_check pc: 755 op: NOP1 (159)
L1A: // addr: 756 pc: 755 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 756 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 738

// block var code_inlined_insert_code_at_738_63164
    DeRefi(_code_inlined_insert_code_at_738_63164);
    _code_inlined_insert_code_at_738_63164 = NOVALUE;

// block var subprog_inlined_insert_code_at_741_63165
    DeRef(_subprog_inlined_insert_code_at_741_63165);
    _subprog_inlined_insert_code_at_741_63165 = NOVALUE;
    // SubProg patch_forward_type_check pc: 758 op: STARTLINE (58)

    /** fwdref.e:661						pc += 4*/
    // SubProg patch_forward_type_check pc: 760 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 4;
    // SubProg patch_forward_type_check pc: 764 op: NOP1 (159)
L17: // addr: 765 pc: 764 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 765 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var start_pc_63129

// block var c_63149
    // SubProg patch_forward_type_check pc: 767 op: NOP1 (159)
L12: // addr: 768 pc: 767 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 768 op: NOP1 (159)
LF: // addr: 769 pc: 768 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 769 op: NOP1 (159)
LD: // addr: 770 pc: 769 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 770 op: NOP1 (159)
LA: // addr: 771 pc: 770 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 771 op: STARTLINE (58)

    /** fwdref.e:668		if (TRANSLATE or not with_type_check) and SymTab[which_type][S_NEXT] then*/
    // SubProg patch_forward_type_check pc: 773 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 775 op: SC1_OR (143)
    if (_5TRANSLATE_12097 != 0) {
        _31323 = 1;
        goto L1B; // [775] 786
    }
    // SubProg patch_forward_type_check pc: 779 op: NOT (7)
    _31324 = (_with_type_check_63047 == 0);
    // SubProg patch_forward_type_check pc: 782 op: SC2_OR (144)
    _31323 = (_31324 != 0);
    // SubProg patch_forward_type_check pc: 785 op: NOP1 (159)
L1B: // addr: 786 pc: 785 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 786 op: SC1_AND_IF (146)
    if (_31323 == 0) {
        goto L1C; // [786] 1013
    }
    // SubProg patch_forward_type_check pc: 790 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 792 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31326 = (object)*(((s1_ptr)_2)->base + _which_type_63010);
    // SubProg patch_forward_type_check pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 798 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31326);
    _31327 = (object)*(((s1_ptr)_2)->base + 2);
    _31326 = NOVALUE;
    // SubProg patch_forward_type_check pc: 802 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 803 op: IF (20)
    if (_31327 == 0) {
        _31327 = NOVALUE;
        goto L1C; // [803] 1013
    }
    else {
        if (!IS_ATOM_INT(_31327) && DBL_PTR(_31327)->dbl == 0.0){
            _31327 = NOVALUE;
            goto L1C; // [803] 1013
        }
        _31327 = NOVALUE;
    }
    _31327 = NOVALUE;
    // SubProg patch_forward_type_check pc: 806 op: STARTLINE (58)

    /** fwdref.e:669			integer start_pc = pc*/
    // SubProg patch_forward_type_check pc: 808 op: ASSIGN_I (113)
    _start_pc_63176 = _pc_63045;
    // SubProg patch_forward_type_check pc: 811 op: STARTLINE (58)

    /** fwdref.e:671			if which_type = sequence_type or*/
    // SubProg patch_forward_type_check pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 815 op: EQUALS (3)
    _31328 = (_which_type_63010 == _53sequence_type_46328);
    // SubProg patch_forward_type_check pc: 819 op: SC1_OR_IF (147)
    if (_31328 != 0) {
        goto L1D; // [819] 858
    }
    // SubProg patch_forward_type_check pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 827 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31330 = (object)*(((s1_ptr)_2)->base + _which_type_63010);
    // SubProg patch_forward_type_check pc: 831 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 833 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31330);
    _31331 = (object)*(((s1_ptr)_2)->base + 2);
    _31330 = NOVALUE;
    // SubProg patch_forward_type_check pc: 837 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_31331)){
        _31332 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31331)->dbl));
    }
    else{
        _31332 = (object)*(((s1_ptr)_2)->base + _31331);
    }
    // SubProg patch_forward_type_check pc: 841 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 843 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31332);
    _31333 = (object)*(((s1_ptr)_2)->base + 15);
    _31332 = NOVALUE;
    // SubProg patch_forward_type_check pc: 847 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 849 op: EQUALS (3)
    if (IS_ATOM_INT(_31333)) {
        _31334 = (_31333 == _53sequence_type_46328);
    }
    else {
        _31334 = binary_op(EQUALS, _31333, _53sequence_type_46328);
    }
    _31333 = NOVALUE;
    // SubProg patch_forward_type_check pc: 853 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 854 op: IF (20)
    if (_31334 == 0) {
        DeRef(_31334);
        _31334 = NOVALUE;
        goto L1E; // [854] 912
    }
    else {
        if (!IS_ATOM_INT(_31334) && DBL_PTR(_31334)->dbl == 0.0){
            DeRef(_31334);
            _31334 = NOVALUE;
            goto L1E; // [854] 912
        }
        DeRef(_31334);
        _31334 = NOVALUE;
    }
    DeRef(_31334);
    _31334 = NOVALUE;
    // SubProg patch_forward_type_check pc: 857 op: NOP1 (159)
L1D: // addr: 858 pc: 857 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 858 op: STARTLINE (58)

    /** fwdref.e:674				insert_code( { SEQUENCE_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 860 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 862 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 97;
    ((intptr_t *)_2)[2] = _var_63012;
    _31335 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 866 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31336 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 870 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_883_63195);
    _code_inlined_insert_code_at_883_63195 = _31335;
    _31335 = NOVALUE;
    // SubProg patch_forward_type_check pc: 873 op: ASSIGN (18)
    Ref(_31336);
    DeRef(_subprog_inlined_insert_code_at_886_63196);
    _subprog_inlined_insert_code_at_886_63196 = _31336;
    _31336 = NOVALUE;
    // SubProg patch_forward_type_check pc: 876 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 878 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_886_63196)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_886_63196)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_886_63196);
        _subprog_inlined_insert_code_at_886_63196 = _1;
    }
    // SubProg patch_forward_type_check pc: 880 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 882 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_886_63196;
    // SubProg patch_forward_type_check pc: 885 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 887 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_883_63195);
    _65insert_code(_code_inlined_insert_code_at_883_63195, _pc_63045);
    // SubProg patch_forward_type_check pc: 891 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 893 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 896 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 898 op: ELSE (23)
    goto L1F; // [898] 901
    // SubProg patch_forward_type_check pc: 900 op: NOP1 (159)
L1F: // addr: 901 pc: 900 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 901 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 883

// block var code_inlined_insert_code_at_883_63195
    DeRefi(_code_inlined_insert_code_at_883_63195);
    _code_inlined_insert_code_at_883_63195 = NOVALUE;

// block var subprog_inlined_insert_code_at_886_63196
    DeRef(_subprog_inlined_insert_code_at_886_63196);
    _subprog_inlined_insert_code_at_886_63196 = NOVALUE;
    // SubProg patch_forward_type_check pc: 903 op: STARTLINE (58)

    /** fwdref.e:675				pc += 2*/
    // SubProg patch_forward_type_check pc: 905 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 2;
    // SubProg patch_forward_type_check pc: 909 op: ELSE (23)
    goto L20; // [909] 1012
    // SubProg patch_forward_type_check pc: 911 op: NOP1 (159)
L1E: // addr: 912 pc: 911 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 912 op: STARTLINE (58)

    /** fwdref.e:677			elsif which_type = integer_type or*/
    // SubProg patch_forward_type_check pc: 914 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 916 op: EQUALS (3)
    _31338 = (_which_type_63010 == _53integer_type_46330);
    // SubProg patch_forward_type_check pc: 920 op: SC1_OR_IF (147)
    if (_31338 != 0) {
        goto L21; // [920] 959
    }
    // SubProg patch_forward_type_check pc: 924 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 926 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 928 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31340 = (object)*(((s1_ptr)_2)->base + _which_type_63010);
    // SubProg patch_forward_type_check pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 934 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31340);
    _31341 = (object)*(((s1_ptr)_2)->base + 2);
    _31340 = NOVALUE;
    // SubProg patch_forward_type_check pc: 938 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_31341)){
        _31342 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31341)->dbl));
    }
    else{
        _31342 = (object)*(((s1_ptr)_2)->base + _31341);
    }
    // SubProg patch_forward_type_check pc: 942 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 944 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31342);
    _31343 = (object)*(((s1_ptr)_2)->base + 15);
    _31342 = NOVALUE;
    // SubProg patch_forward_type_check pc: 948 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 950 op: EQUALS (3)
    if (IS_ATOM_INT(_31343)) {
        _31344 = (_31343 == _53integer_type_46330);
    }
    else {
        _31344 = binary_op(EQUALS, _31343, _53integer_type_46330);
    }
    _31343 = NOVALUE;
    // SubProg patch_forward_type_check pc: 954 op: NOP1 (159)
    // SubProg patch_forward_type_check pc: 955 op: IF (20)
    if (_31344 == 0) {
        DeRef(_31344);
        _31344 = NOVALUE;
        goto L22; // [955] 1011
    }
    else {
        if (!IS_ATOM_INT(_31344) && DBL_PTR(_31344)->dbl == 0.0){
            DeRef(_31344);
            _31344 = NOVALUE;
            goto L22; // [955] 1011
        }
        DeRef(_31344);
        _31344 = NOVALUE;
    }
    DeRef(_31344);
    _31344 = NOVALUE;
    // SubProg patch_forward_type_check pc: 958 op: NOP1 (159)
L21: // addr: 959 pc: 958 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 959 op: STARTLINE (58)

    /** fwdref.e:680				insert_code( { INTEGER_CHECK, var }, pc, fr[FR_SUBPROG] )*/
    // SubProg patch_forward_type_check pc: 961 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_forward_type_check pc: 963 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 96;
    ((intptr_t *)_2)[2] = _var_63012;
    _31345 = MAKE_SEQ(_1);
    // SubProg patch_forward_type_check pc: 967 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63007);
    _31346 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg patch_forward_type_check pc: 971 op: ASSIGN (18)
    DeRefi(_code_inlined_insert_code_at_984_63216);
    _code_inlined_insert_code_at_984_63216 = _31345;
    _31345 = NOVALUE;
    // SubProg patch_forward_type_check pc: 974 op: ASSIGN (18)
    Ref(_31346);
    DeRef(_subprog_inlined_insert_code_at_987_63217);
    _subprog_inlined_insert_code_at_987_63217 = _31346;
    _31346 = NOVALUE;
    // SubProg patch_forward_type_check pc: 977 op: SEQUENCE_CHECK (97)
    // SubProg patch_forward_type_check pc: 979 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_subprog_inlined_insert_code_at_987_63217)) {
        _1 = (object)(DBL_PTR(_subprog_inlined_insert_code_at_987_63217)->dbl);
        DeRefDS(_subprog_inlined_insert_code_at_987_63217);
        _subprog_inlined_insert_code_at_987_63217 = _1;
    }
    // SubProg patch_forward_type_check pc: 981 op: STARTLINE (58)

    /** fwdref.e:82		shifting_sub = subprog*/
    // SubProg patch_forward_type_check pc: 983 op: ASSIGN_I (113)
    _30shifting_sub_62249 = _subprog_inlined_insert_code_at_987_63217;
    // SubProg patch_forward_type_check pc: 986 op: STARTLINE (58)

    /** fwdref.e:83		shift:insert_code( code, index )*/
    // SubProg patch_forward_type_check pc: 988 op: PROC (27)
    RefDS(_code_inlined_insert_code_at_984_63216);
    _65insert_code(_code_inlined_insert_code_at_984_63216, _pc_63045);
    // SubProg patch_forward_type_check pc: 992 op: STARTLINE (58)

    /** fwdref.e:84		shifting_sub = 0*/
    // SubProg patch_forward_type_check pc: 994 op: ASSIGN_I (113)
    _30shifting_sub_62249 = 0;
    // SubProg patch_forward_type_check pc: 997 op: STARTLINE (58)

    /** fwdref.e:85	end procedure*/
    // SubProg patch_forward_type_check pc: 999 op: ELSE (23)
    goto L23; // [999] 1002
    // SubProg patch_forward_type_check pc: 1001 op: NOP1 (159)
L23: // addr: 1002 pc: 1001 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 1002 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-insert_code from patch_forward_type_check @ 984

// block var code_inlined_insert_code_at_984_63216
    DeRefi(_code_inlined_insert_code_at_984_63216);
    _code_inlined_insert_code_at_984_63216 = NOVALUE;

// block var subprog_inlined_insert_code_at_987_63217
    DeRef(_subprog_inlined_insert_code_at_987_63217);
    _subprog_inlined_insert_code_at_987_63217 = NOVALUE;
    // SubProg patch_forward_type_check pc: 1004 op: STARTLINE (58)

    /** fwdref.e:681				pc += 4*/
    // SubProg patch_forward_type_check pc: 1006 op: PLUS_I (115)
    _pc_63045 = _pc_63045 + 4;
    // SubProg patch_forward_type_check pc: 1010 op: NOP1 (159)
L22: // addr: 1011 pc: 1010 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 1011 op: NOP1 (159)
L20: // addr: 1012 pc: 1011 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 1012 op: NOP1 (159)
L1C: // addr: 1013 pc: 1012 sub: 63002 op: 159
    // SubProg patch_forward_type_check pc: 1013 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var start_pc_63176
    // SubProg patch_forward_type_check pc: 1015 op: STARTLINE (58)

    /** fwdref.e:686		resolved_reference( ref )*/
    // SubProg patch_forward_type_check pc: 1017 op: PROC (27)
    _30resolved_reference(_ref_63006);
    // SubProg patch_forward_type_check pc: 1020 op: STARTLINE (58)

    /** fwdref.e:687		reset_code()*/
    // SubProg patch_forward_type_check pc: 1022 op: PROC (27)
    _30reset_code();
    // SubProg patch_forward_type_check pc: 1024 op: STARTLINE (58)

    /** fwdref.e:688	end procedure*/
    // SubProg patch_forward_type_check pc: 1026 op: RETURNP (29)

// Exiting block BLOCK: patch_forward_type_check

// block var tok_63005
    DeRef(_tok_63005);

// block var ref_63006

// block var fr_63007
    DeRef(_fr_63007);

// block var which_type_63010

// block var var_63012

// block var pc_63045

// block var with_type_check_63047
    DeRef(_31338);
    _31338 = NOVALUE;
    _31341 = NOVALUE;
    DeRef(_31274);
    _31274 = NOVALUE;
    DeRef(_31328);
    _31328 = NOVALUE;
    _31261 = NOVALUE;
    DeRef(_31324);
    _31324 = NOVALUE;
    _31331 = NOVALUE;
    DeRef(_31279);
    _31279 = NOVALUE;
    _31307 = NOVALUE;
    _31315 = NOVALUE;
    return;
    // SubProg patch_forward_type_check pc: 1029 op: BADRETURNF (43)
    ;
}


void _30prep_forward_error(object _ref_63221)
{
// skipping _31355  name type: 0
    object _31354 = NOVALUE; // 63232 31354
// skipping _31353  name type: 0
    object _31352 = NOVALUE; // 63229 31352
// skipping _31351  name type: 0
    object _31350 = NOVALUE; // 63226 31350
// skipping _31349  name type: 0
    object _31348 = NOVALUE; // 63223 31348
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg prep_forward_error pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ref_63221)) {
        _1 = (object)(DBL_PTR(_ref_63221)->dbl);
        DeRefDS(_ref_63221);
        _ref_63221 = _1;
    }
    // SubProg prep_forward_error pc: 3 op: STARTLINE (58)

    /** fwdref.e:691		ThisLine = forward_references[ref][FR_THISLINE]*/
    // SubProg prep_forward_error pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _31348 = (object)*(((s1_ptr)_2)->base + _ref_63221);
    // SubProg prep_forward_error pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_49ThisLine_48781);
    _2 = (object)SEQ_PTR(_31348);
    _49ThisLine_48781 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_49ThisLine_48781);
    _31348 = NOVALUE;
    // SubProg prep_forward_error pc: 15 op: STARTLINE (58)

    /** fwdref.e:692		bp = forward_references[ref][FR_BP]*/
    // SubProg prep_forward_error pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _31350 = (object)*(((s1_ptr)_2)->base + _ref_63221);
    // SubProg prep_forward_error pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31350);
    _49bp_48785 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_49bp_48785)){
        _49bp_48785 = (object)DBL_PTR(_49bp_48785)->dbl;
    }
    _31350 = NOVALUE;
    // SubProg prep_forward_error pc: 29 op: STARTLINE (58)

    /** fwdref.e:693		line_number = forward_references[ref][FR_LINE]*/
    // SubProg prep_forward_error pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 33 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _31352 = (object)*(((s1_ptr)_2)->base + _ref_63221);
    // SubProg prep_forward_error pc: 37 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31352);
    _5line_number_12478 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_5line_number_12478)){
        _5line_number_12478 = (object)DBL_PTR(_5line_number_12478)->dbl;
    }
    _31352 = NOVALUE;
    // SubProg prep_forward_error pc: 43 op: STARTLINE (58)

    /** fwdref.e:694		current_file_no = forward_references[ref][FR_FILE]*/
    // SubProg prep_forward_error pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg prep_forward_error pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _31354 = (object)*(((s1_ptr)_2)->base + _ref_63221);
    // SubProg prep_forward_error pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31354);
    _5current_file_no_12477 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_5current_file_no_12477)){
        _5current_file_no_12477 = (object)DBL_PTR(_5current_file_no_12477)->dbl;
    }
    _31354 = NOVALUE;
    // SubProg prep_forward_error pc: 57 op: STARTLINE (58)

    /** fwdref.e:695	end procedure*/
    // SubProg prep_forward_error pc: 59 op: RETURNP (29)

// Exiting block BLOCK: prep_forward_error

// block var ref_63221
    return;
    // SubProg prep_forward_error pc: 62 op: BADRETURNF (43)
    ;
}


void _30forward_error(object _tok_63237, object _ref_63238)
{
    object _31362 = NOVALUE; // 63247 31362
    object _31361 = NOVALUE; // 63246 31361
    object _31360 = NOVALUE; // 63245 31360
    object _31359 = NOVALUE; // 63243 31359
    object _31358 = NOVALUE; // 63242 31358
    object _31357 = NOVALUE; // 63241 31357
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg forward_error pc: 1 op: INTEGER_CHECK (96)
    // SubProg forward_error pc: 3 op: STARTLINE (58)

    /** fwdref.e:698		prep_forward_error( ref )*/
    // SubProg forward_error pc: 5 op: PROC (27)
    _30prep_forward_error(_ref_63238);
    // SubProg forward_error pc: 8 op: STARTLINE (58)

    /** fwdref.e:699		CompileErr(68, { expected_name( forward_references[ref][FR_TYPE] ),*/
    // SubProg forward_error pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg forward_error pc: 12 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _31357 = (object)*(((s1_ptr)_2)->base + _ref_63238);
    // SubProg forward_error pc: 16 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31357);
    _31358 = (object)*(((s1_ptr)_2)->base + 1);
    _31357 = NOVALUE;
    // SubProg forward_error pc: 20 op: PROC (27)
    Ref(_31358);
    _31359 = _30expected_name(_31358);
    _31358 = NOVALUE;
    // SubProg forward_error pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg forward_error pc: 26 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_63237);
    _31360 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg forward_error pc: 30 op: PROC (27)
    Ref(_31360);
    _31361 = _30expected_name(_31360);
    _31360 = NOVALUE;
    // SubProg forward_error pc: 34 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _31359;
    ((intptr_t *)_2)[2] = _31361;
    _31362 = MAKE_SEQ(_1);
    _31361 = NOVALUE;
    _31359 = NOVALUE;
    // SubProg forward_error pc: 38 op: PROC (27)
    _49CompileErr(68, _31362, 0);
    _31362 = NOVALUE;
    // SubProg forward_error pc: 43 op: STARTLINE (58)

    /** fwdref.e:701	end procedure*/
    // SubProg forward_error pc: 45 op: RETURNP (29)

// Exiting block BLOCK: forward_error

// block var tok_63237
    DeRef(_tok_63237);

// block var ref_63238
    return;
    // SubProg forward_error pc: 48 op: BADRETURNF (43)
    ;
}


object _30find_reference(object _fr_63250)
{
    object _name_63251 = NOVALUE;
    object _file_63253 = NOVALUE;
    object _ns_file_63255 = NOVALUE;
    object _ix_63256 = NOVALUE;
    object _ns_63259 = NOVALUE;
    object _ns_tok_63263 = NOVALUE;
    object _tok_63275 = NOVALUE;
// skipping _31374  name type: 0
    object _31373 = NOVALUE; // 63277 31373
// skipping _31372  name type: 0
// skipping _31371  name type: 0
    object _31370 = NOVALUE; // 63269 31370
// skipping _31369  name type: 0
    object _31368 = NOVALUE; // 63265 31368
// skipping _31367  name type: 0
    object _31366 = NOVALUE; // 63260 31366
// skipping _31365  name type: 0
// skipping _31364  name type: 0
// skipping _31363  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_reference pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_reference pc: 3 op: STARTLINE (58)

    /** fwdref.e:706		sequence name = fr[FR_NAME]*/
    // SubProg find_reference pc: 5 op: RHS_SUBS (25)
    DeRef(_name_63251);
    _2 = (object)SEQ_PTR(_fr_63250);
    _name_63251 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_name_63251);
    // SubProg find_reference pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg find_reference pc: 11 op: STARTLINE (58)

    /** fwdref.e:707		integer file  = fr[FR_FILE]*/
    // SubProg find_reference pc: 13 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63250);
    _file_63253 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_file_63253))
    _file_63253 = (object)DBL_PTR(_file_63253)->dbl;
    // SubProg find_reference pc: 17 op: STARTLINE (58)

    /** fwdref.e:709		integer ns_file = -1*/
    // SubProg find_reference pc: 19 op: ASSIGN_I (113)
    _ns_file_63255 = -1;
    // SubProg find_reference pc: 22 op: STARTLINE (58)

    /** fwdref.e:710		integer ix = find( ':', name )*/
    // SubProg find_reference pc: 24 op: FIND_FROM (176)
    _ix_63256 = find_from(58, _name_63251, 1);
    // SubProg find_reference pc: 29 op: STARTLINE (58)

    /** fwdref.e:711		if ix then*/
    // SubProg find_reference pc: 31 op: IF (20)
    if (_ix_63256 == 0)
    {
        goto L1; // [31] 85
    }
    else{
    }
    // SubProg find_reference pc: 34 op: STARTLINE (58)

    /** fwdref.e:712			sequence ns = name[1..ix-1]*/
    // SubProg find_reference pc: 36 op: MINUS (10)
    _31366 = _ix_63256 - 1;
    // SubProg find_reference pc: 40 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_ns_63259;
    RHS_Slice(_name_63251, 1, _31366);
    // SubProg find_reference pc: 45 op: STARTLINE (58)

    /** fwdref.e:713			token ns_tok = keyfind( ns, ns_file, file, 1, fr[FR_HASHVAL] )*/
    // SubProg find_reference pc: 47 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63250);
    _31368 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg find_reference pc: 51 op: PROC (27)
    RefDS(_ns_63259);
    Ref(_31368);
    _0 = _ns_tok_63263;
    _ns_tok_63263 = _53keyfind(_ns_63259, -1, _file_63253, 1, _31368);
    DeRef(_0);
    _31368 = NOVALUE;
    // SubProg find_reference pc: 59 op: STARTLINE (58)

    /** fwdref.e:714			if ns_tok[T_ID] != NAMESPACE then*/
    // SubProg find_reference pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_reference pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_ns_tok_63263);
    _31370 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_reference pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_reference pc: 69 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _31370, 523)){
        _31370 = NOVALUE;
        goto L2; // [69] 80
    }
    _31370 = NOVALUE;
    // SubProg find_reference pc: 73 op: STARTLINE (58)

    /** fwdref.e:715				return ns_tok*/
    // SubProg find_reference pc: 75 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ns_63259
    DeRefDS(_ns_63259);

// Exiting block BLOCK: find_reference

// block var fr_63250
    DeRefDS(_fr_63250);

// block var name_63251
    DeRefDS(_name_63251);

// block var file_63253

// block var ns_file_63255

// block var ix_63256

// block var tok_63275
    DeRef(_tok_63275);
    _31366 = NOVALUE;
    return _ns_tok_63263;
    // SubProg find_reference pc: 79 op: NOP1 (159)
L2: // addr: 80 pc: 79 sub: 63248 op: 159
    // SubProg find_reference pc: 80 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ns_63259
    DeRef(_ns_63259);
    _ns_63259 = NOVALUE;

// block var ns_tok_63263
    DeRef(_ns_tok_63263);
    _ns_tok_63263 = NOVALUE;
    // SubProg find_reference pc: 82 op: ELSE (23)
    goto L3; // [82] 92
    // SubProg find_reference pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 63248 op: 159
    // SubProg find_reference pc: 85 op: STARTLINE (58)

    /** fwdref.e:718			ns_file = fr[FR_QUALIFIED]*/
    // SubProg find_reference pc: 87 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_fr_63250);
    _ns_file_63255 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_ns_file_63255))
    _ns_file_63255 = (object)DBL_PTR(_ns_file_63255)->dbl;
    // SubProg find_reference pc: 91 op: NOP1 (159)
L3: // addr: 92 pc: 91 sub: 63248 op: 159
    // SubProg find_reference pc: 92 op: STARTLINE (58)

    /** fwdref.e:721		No_new_entry = 1*/
    // SubProg find_reference pc: 94 op: ASSIGN (18)
    _53No_new_entry_47523 = 1;
    // SubProg find_reference pc: 97 op: INTEGER_CHECK (96)
    // SubProg find_reference pc: 99 op: STARTLINE (58)

    /** fwdref.e:722		object tok = keyfind( name, ns_file, file, , fr[FR_HASHVAL] )*/
    // SubProg find_reference pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_fr_63250);
    _31373 = (object)*(((s1_ptr)_2)->base + 11);
    // SubProg find_reference pc: 105 op: PROC (27)
    RefDS(_name_63251);
    Ref(_31373);
    _0 = _tok_63275;
    _tok_63275 = _53keyfind(_name_63251, _ns_file_63255, _file_63253, 0, _31373);
    DeRef(_0);
    _31373 = NOVALUE;
    // SubProg find_reference pc: 113 op: STARTLINE (58)

    /** fwdref.e:723		No_new_entry = 0*/
    // SubProg find_reference pc: 115 op: ASSIGN (18)
    _53No_new_entry_47523 = 0;
    // SubProg find_reference pc: 118 op: INTEGER_CHECK (96)
    // SubProg find_reference pc: 120 op: STARTLINE (58)

    /** fwdref.e:724		return tok*/
    // SubProg find_reference pc: 122 op: RETURNF (28)

// Exiting block BLOCK: find_reference

// block var fr_63250
    DeRefDS(_fr_63250);

// block var name_63251
    DeRefDS(_name_63251);

// block var file_63253

// block var ns_file_63255

// block var ix_63256
    DeRef(_31366);
    _31366 = NOVALUE;
    return _tok_63275;
    // SubProg find_reference pc: 126 op: BADRETURNF (43)
    ;
}


void _30register_forward_type(object _sym_63283, object _ref_63284)
{
    object _31380 = NOVALUE; // 63291 31380
    object _31379 = NOVALUE; // 63290 31379
// skipping _31378  name type: 0
    object _31377 = NOVALUE; // 63288 31377
// skipping _31376  name type: 0
// skipping _31375  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg register_forward_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg register_forward_type pc: 3 op: INTEGER_CHECK (96)
    // SubProg register_forward_type pc: 5 op: STARTLINE (58)

    /** fwdref.e:729		if ref < 0 then*/
    // SubProg register_forward_type pc: 7 op: LESS_IFW_I (119)
    if (_ref_63284 >= 0)
    goto L1; // [7] 19
    // SubProg register_forward_type pc: 11 op: STARTLINE (58)

    /** fwdref.e:730			ref = -ref*/
    // SubProg register_forward_type pc: 13 op: UMINUS (12)
    _ref_63284 = - _ref_63284;
    // SubProg register_forward_type pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 63280 op: 159
    // SubProg register_forward_type pc: 19 op: STARTLINE (58)

    /** fwdref.e:732		forward_references[ref][FR_DATA] &= sym*/
    // SubProg register_forward_type pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg register_forward_type pc: 23 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63284 + ((s1_ptr)_2)->base);
    // SubProg register_forward_type pc: 28 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31379 = (object)*(((s1_ptr)_2)->base + 12);
    _31377 = NOVALUE;
    // SubProg register_forward_type pc: 32 op: CONCAT (15)
    if (IS_SEQUENCE(_31379) && IS_ATOM(_sym_63283)) {
        Append(&_31380, _31379, _sym_63283);
    }
    else if (IS_ATOM(_31379) && IS_SEQUENCE(_sym_63283)) {
    }
    else {
        Concat((object_ptr)&_31380, _31379, _sym_63283);
        _31379 = NOVALUE;
    }
    _31379 = NOVALUE;
    // SubProg register_forward_type pc: 36 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31380;
    if( _1 != _31380 ){
        DeRef(_1);
    }
    _31380 = NOVALUE;
    _31377 = NOVALUE;
    // SubProg register_forward_type pc: 40 op: STARTLINE (58)

    /** fwdref.e:733	end procedure*/
    // SubProg register_forward_type pc: 42 op: RETURNP (29)

// Exiting block BLOCK: register_forward_type

// block var sym_63283

// block var ref_63284
    return;
    // SubProg register_forward_type pc: 45 op: BADRETURNF (43)
    ;
}


object _30new_forward_reference(object _fwd_op_63314, object _sym_63316, object _op_63317)
{
    object _ref_63318 = NOVALUE;
    object _len_63319 = NOVALUE;
    object _hashval_63349 = NOVALUE;
    object _default_sym_63424 = NOVALUE;
    object _param_63427 = NOVALUE;
    object _set_data_2__tmp_at578_63444 = NOVALUE;
    object _set_data_1__tmp_at578_63443 = NOVALUE;
    object _data_inlined_set_data_at_575_63442 = NOVALUE;
// skipping _31467  name type: 0
    object _31466 = NOVALUE; // 63440 31466
    object _31465 = NOVALUE; // 63439 31465
    object _31464 = NOVALUE; // 63438 31464
// skipping _31463  name type: 0
// skipping _31462  name type: 0
    object _31461 = NOVALUE; // 63431 31461
// skipping _31460  name type: 0
    object _31459 = NOVALUE; // 63416 31459
    object _31458 = NOVALUE; // 63415 31458
// skipping _31457  name type: 0
    object _31456 = NOVALUE; // 63412 31456
    object _31455 = NOVALUE; // 63411 31455
    object _31454 = NOVALUE; // 63410 31454
// skipping _31453  name type: 0
    object _31452 = NOVALUE; // 63406 31452
// skipping _31451  name type: 0
    object _31450 = NOVALUE; // 63400 31450
// skipping _31449  name type: 0
    object _31448 = NOVALUE; // 63398 31448
// skipping _31447  name type: 0
// skipping _31446  name type: 0
    object _31445 = NOVALUE; // 63393 31445
    object _31444 = NOVALUE; // 63392 31444
// skipping _31443  name type: 0
    object _31442 = NOVALUE; // 63389 31442
// skipping _31441  name type: 0
    object _31440 = NOVALUE; // 63386 31440
// skipping _31439  name type: 0
    object _31438 = NOVALUE; // 63383 31438
// skipping _31437  name type: 0
    object _31436 = NOVALUE; // 63380 31436
    object _31435 = NOVALUE; // 63379 31435
    object _31434 = NOVALUE; // 63378 31434
// skipping _31433  name type: 0
    object _31432 = NOVALUE; // 63375 31432
// skipping _31431  name type: 0
// skipping _31430  name type: 0
    object _31429 = NOVALUE; // 63369 31429
// skipping _31428  name type: 0
    object _31427 = NOVALUE; // 63366 31427
// skipping _31426  name type: 0
    object _31425 = NOVALUE; // 63363 31425
    object _31424 = NOVALUE; // 63361 31424
    object _31423 = NOVALUE; // 63360 31423
    object _31422 = NOVALUE; // 63359 31422
// skipping _31421  name type: 0
    object _31420 = NOVALUE; // 63356 31420
// skipping _31419  name type: 0
// skipping _31418  name type: 0
    object _31417 = NOVALUE; // 63351 31417
    object _31416 = NOVALUE; // 63348 31416
    object _31415 = NOVALUE; // 63346 31415
// skipping _31414  name type: 0
    object _31413 = NOVALUE; // 63343 31413
    object _31412 = NOVALUE; // 63341 31412
    object _31411 = NOVALUE; // 63340 31411
    object _31410 = NOVALUE; // 63339 31410
// skipping _31409  name type: 0
    object _31408 = NOVALUE; // 63337 31408
    object _31407 = NOVALUE; // 63336 31407
    object _31406 = NOVALUE; // 63335 31406
    object _31405 = NOVALUE; // 63334 31405
// skipping _31404  name type: 0
    object _31403 = NOVALUE; // 63332 31403
// skipping _31402  name type: 0
// skipping _31401  name type: 0
    object _31400 = NOVALUE; // 63328 31400
    object _31399 = NOVALUE; // 63327 31399
// skipping _31398  name type: 0
// skipping _31397  name type: 0
// skipping _31396  name type: 0
// skipping _31395  name type: 0
// skipping _31394  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg new_forward_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_63316)) {
        _1 = (object)(DBL_PTR(_sym_63316)->dbl);
        DeRefDS(_sym_63316);
        _sym_63316 = _1;
    }
    // SubProg new_forward_reference pc: 5 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 7 op: STARTLINE (58)

    /** fwdref.e:754			len = length( inactive_references )*/
    // SubProg new_forward_reference pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_30inactive_references_62234)){
            _len_63319 = SEQ_PTR(_30inactive_references_62234)->length;
    }
    else {
        _len_63319 = 1;
    }
    // SubProg new_forward_reference pc: 14 op: STARTLINE (58)

    /** fwdref.e:757		if len then*/
    // SubProg new_forward_reference pc: 16 op: IF (20)
    if (_len_63319 == 0)
    {
        goto L1; // [16] 39
    }
    else{
    }
    // SubProg new_forward_reference pc: 19 op: STARTLINE (58)

    /** fwdref.e:758			ref = inactive_references[len]*/
    // SubProg new_forward_reference pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 23 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_30inactive_references_62234);
    _ref_63318 = (object)*(((s1_ptr)_2)->base + _len_63319);
    if (!IS_ATOM_INT(_ref_63318))
    _ref_63318 = (object)DBL_PTR(_ref_63318)->dbl;
    // SubProg new_forward_reference pc: 27 op: STARTLINE (58)

    /** fwdref.e:759			inactive_references = remove( inactive_references, len, len )*/
    // SubProg new_forward_reference pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 31 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_30inactive_references_62234);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_len_63319)) ? _len_63319 : (object)(DBL_PTR(_len_63319)->dbl);
        int stop = (IS_ATOM_INT(_len_63319)) ? _len_63319 : (object)(DBL_PTR(_len_63319)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_30inactive_references_62234), start, &_30inactive_references_62234 );
            }
            else Tail(SEQ_PTR(_30inactive_references_62234), stop+1, &_30inactive_references_62234);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_30inactive_references_62234), start, &_30inactive_references_62234);
        }
        else {
            assign_slice_seq = &assign_space;
            _30inactive_references_62234 = Remove_elements(start, stop, (SEQ_PTR(_30inactive_references_62234)->ref == 1));
        }
    }
    // SubProg new_forward_reference pc: 36 op: ELSE (23)
    goto L2; // [36] 55
    // SubProg new_forward_reference pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 39 op: STARTLINE (58)

    /** fwdref.e:761			forward_references &= 0*/
    // SubProg new_forward_reference pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 43 op: CONCAT (15)
    Append(&_30forward_references_62230, _30forward_references_62230, 0);
    // SubProg new_forward_reference pc: 47 op: STARTLINE (58)

    /** fwdref.e:762			ref = length( forward_references )*/
    // SubProg new_forward_reference pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 51 op: LENGTH (42)
    if (IS_SEQUENCE(_30forward_references_62230)){
            _ref_63318 = SEQ_PTR(_30forward_references_62230)->length;
    }
    else {
        _ref_63318 = 1;
    }
    // SubProg new_forward_reference pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 55 op: STARTLINE (58)

    /** fwdref.e:764		forward_references[ref] = repeat( 0, FR_SIZE )*/
    // SubProg new_forward_reference pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 59 op: PRIVATE_INIT_CHECK (30)
    // SubProg new_forward_reference pc: 61 op: REPEAT (32)
    _31399 = Repeat(0, 12);
    // SubProg new_forward_reference pc: 65 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _ref_63318);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31399;
    if( _1 != _31399 ){
        DeRef(_1);
    }
    _31399 = NOVALUE;
    // SubProg new_forward_reference pc: 69 op: STARTLINE (58)

    /** fwdref.e:766		forward_references[ref][FR_TYPE]      = fwd_op*/
    // SubProg new_forward_reference pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 73 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 78 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _fwd_op_63314;
    DeRef(_1);
    _31400 = NOVALUE;
    // SubProg new_forward_reference pc: 82 op: STARTLINE (58)

    /** fwdref.e:767		if sym < 0 then*/
    // SubProg new_forward_reference pc: 84 op: LESS_IFW (102)
    if (_sym_63316 >= 0)
    goto L3; // [84] 143
    // SubProg new_forward_reference pc: 88 op: STARTLINE (58)

    /** fwdref.e:768			forward_references[ref][FR_NAME] = forward_references[-sym][FR_NAME]*/
    // SubProg new_forward_reference pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 92 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 99 op: UMINUS (12)
    if ((uintptr_t)_sym_63316 == (uintptr_t)HIGH_BITS){
        _31405 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31405 = - _sym_63316;
    }
    // SubProg new_forward_reference pc: 102 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!IS_ATOM_INT(_31405)){
        _31406 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31405)->dbl));
    }
    else{
        _31406 = (object)*(((s1_ptr)_2)->base + _31405);
    }
    // SubProg new_forward_reference pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31406);
    _31407 = (object)*(((s1_ptr)_2)->base + 2);
    _31406 = NOVALUE;
    // SubProg new_forward_reference pc: 110 op: PASSIGN_SUBS (162)
    Ref(_31407);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31407;
    if( _1 != _31407 ){
        DeRef(_1);
    }
    _31407 = NOVALUE;
    _31403 = NOVALUE;
    // SubProg new_forward_reference pc: 114 op: STARTLINE (58)

    /** fwdref.e:769			forward_references[ref][FR_HASHVAL] = forward_references[-sym][FR_HASHVAL]*/
    // SubProg new_forward_reference pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 118 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 125 op: UMINUS (12)
    if ((uintptr_t)_sym_63316 == (uintptr_t)HIGH_BITS){
        _31410 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _31410 = - _sym_63316;
    }
    // SubProg new_forward_reference pc: 128 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!IS_ATOM_INT(_31410)){
        _31411 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31410)->dbl));
    }
    else{
        _31411 = (object)*(((s1_ptr)_2)->base + _31410);
    }
    // SubProg new_forward_reference pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31411);
    _31412 = (object)*(((s1_ptr)_2)->base + 11);
    _31411 = NOVALUE;
    // SubProg new_forward_reference pc: 136 op: PASSIGN_SUBS (162)
    Ref(_31412);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31412;
    if( _1 != _31412 ){
        DeRef(_1);
    }
    _31412 = NOVALUE;
    _31408 = NOVALUE;
    // SubProg new_forward_reference pc: 140 op: ELSE (23)
    goto L4; // [140] 242
    // SubProg new_forward_reference pc: 142 op: NOP1 (159)
L3: // addr: 143 pc: 142 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 143 op: STARTLINE (58)

    /** fwdref.e:771			forward_references[ref][FR_NAME] = SymTab[sym][S_NAME]*/
    // SubProg new_forward_reference pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 147 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31415 = (object)*(((s1_ptr)_2)->base + _sym_63316);
    // SubProg new_forward_reference pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 160 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31415);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _31416 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _31416 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _31415 = NOVALUE;
    // SubProg new_forward_reference pc: 164 op: PASSIGN_SUBS (162)
    Ref(_31416);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31416;
    if( _1 != _31416 ){
        DeRef(_1);
    }
    _31416 = NOVALUE;
    _31413 = NOVALUE;
    // SubProg new_forward_reference pc: 168 op: STARTLINE (58)

    /** fwdref.e:772			integer hashval = SymTab[sym][S_HASHVAL]*/
    // SubProg new_forward_reference pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 172 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31417 = (object)*(((s1_ptr)_2)->base + _sym_63316);
    // SubProg new_forward_reference pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 178 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31417);
    _hashval_63349 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hashval_63349)){
        _hashval_63349 = (object)DBL_PTR(_hashval_63349)->dbl;
    }
    _31417 = NOVALUE;
    // SubProg new_forward_reference pc: 184 op: STARTLINE (58)

    /** fwdref.e:773			if 0 = hashval then*/
    // SubProg new_forward_reference pc: 186 op: EQUALS_IFW_I (121)
    if (0 != _hashval_63349)
    goto L5; // [186] 220
    // SubProg new_forward_reference pc: 190 op: STARTLINE (58)

    /** fwdref.e:774				forward_references[ref][FR_HASHVAL] = hashfn( forward_references[ref][FR_NAME] )*/
    // SubProg new_forward_reference pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 194 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 201 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    _31422 = (object)*(((s1_ptr)_2)->base + _ref_63318);
    // SubProg new_forward_reference pc: 205 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31422);
    _31423 = (object)*(((s1_ptr)_2)->base + 2);
    _31422 = NOVALUE;
    // SubProg new_forward_reference pc: 209 op: PROC (27)
    Ref(_31423);
    _31424 = _53hashfn(_31423);
    _31423 = NOVALUE;
    // SubProg new_forward_reference pc: 213 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31424;
    if( _1 != _31424 ){
        DeRef(_1);
    }
    _31424 = NOVALUE;
    _31420 = NOVALUE;
    // SubProg new_forward_reference pc: 217 op: ELSE (23)
    goto L6; // [217] 239
    // SubProg new_forward_reference pc: 219 op: NOP1 (159)
L5: // addr: 220 pc: 219 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 220 op: STARTLINE (58)

    /** fwdref.e:776				forward_references[ref][FR_HASHVAL] = hashval*/
    // SubProg new_forward_reference pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 224 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 229 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_63349;
    DeRef(_1);
    _31425 = NOVALUE;
    // SubProg new_forward_reference pc: 233 op: STARTLINE (58)

    /** fwdref.e:777				remove_symbol( sym )*/
    // SubProg new_forward_reference pc: 235 op: PROC (27)
    _53remove_symbol(_sym_63316);
    // SubProg new_forward_reference pc: 238 op: NOP1 (159)
L6: // addr: 239 pc: 238 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 239 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hashval_63349
    // SubProg new_forward_reference pc: 241 op: NOP1 (159)
L4: // addr: 242 pc: 241 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 242 op: STARTLINE (58)

    /** fwdref.e:782		forward_references[ref][FR_FILE]      = current_file_no*/
    // SubProg new_forward_reference pc: 244 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 246 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 253 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5current_file_no_12477;
    DeRef(_1);
    _31427 = NOVALUE;
    // SubProg new_forward_reference pc: 257 op: STARTLINE (58)

    /** fwdref.e:783		forward_references[ref][FR_SUBPROG]   = CurrentSub*/
    // SubProg new_forward_reference pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 261 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 268 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5CurrentSub_12485;
    DeRef(_1);
    _31429 = NOVALUE;
    // SubProg new_forward_reference pc: 272 op: STARTLINE (58)

    /** fwdref.e:785		if fwd_op != TYPE then*/
    // SubProg new_forward_reference pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 276 op: NOTEQ_IFW (105)
    if (_fwd_op_63314 == 504)
    goto L7; // [276] 303
    // SubProg new_forward_reference pc: 280 op: STARTLINE (58)

    /** fwdref.e:786			forward_references[ref][FR_PC]        = length( Code ) + 1*/
    // SubProg new_forward_reference pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 284 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 291 op: LENGTH (42)
    if (IS_SEQUENCE(_5Code_12566)){
            _31434 = SEQ_PTR(_5Code_12566)->length;
    }
    else {
        _31434 = 1;
    }
    // SubProg new_forward_reference pc: 294 op: PLUS1 (93)
    _31435 = _31434 + 1;
    _31434 = NOVALUE;
    // SubProg new_forward_reference pc: 298 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31435;
    if( _1 != _31435 ){
        DeRef(_1);
    }
    _31435 = NOVALUE;
    _31432 = NOVALUE;
    // SubProg new_forward_reference pc: 302 op: NOP1 (159)
L7: // addr: 303 pc: 302 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 303 op: STARTLINE (58)

    /** fwdref.e:789		forward_references[ref][FR_LINE]      = fwd_line_number*/
    // SubProg new_forward_reference pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 307 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 314 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5fwd_line_number_12479;
    DeRef(_1);
    _31436 = NOVALUE;
    // SubProg new_forward_reference pc: 318 op: STARTLINE (58)

    /** fwdref.e:790		forward_references[ref][FR_THISLINE]  = ForwardLine*/
    // SubProg new_forward_reference pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 322 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 329 op: PASSIGN_SUBS (162)
    Ref(_49ForwardLine_48782);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 7);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _49ForwardLine_48782;
    DeRef(_1);
    _31438 = NOVALUE;
    // SubProg new_forward_reference pc: 333 op: STARTLINE (58)

    /** fwdref.e:791		forward_references[ref][FR_BP]        = forward_bp*/
    // SubProg new_forward_reference pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 337 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 342 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 344 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 8);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _49forward_bp_48786;
    DeRef(_1);
    _31440 = NOVALUE;
    // SubProg new_forward_reference pc: 348 op: STARTLINE (58)

    /** fwdref.e:792		forward_references[ref][FR_QUALIFIED] = get_qualified_fwd()*/
    // SubProg new_forward_reference pc: 350 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 352 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 357 op: PROC (27)
    _31444 = _61get_qualified_fwd();
    // SubProg new_forward_reference pc: 360 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31444;
    if( _1 != _31444 ){
        DeRef(_1);
    }
    _31444 = NOVALUE;
    _31442 = NOVALUE;
    // SubProg new_forward_reference pc: 364 op: STARTLINE (58)

    /** fwdref.e:793		forward_references[ref][FR_OP]        = op*/
    // SubProg new_forward_reference pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 368 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 373 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 10);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _op_63317;
    DeRef(_1);
    _31445 = NOVALUE;
    // SubProg new_forward_reference pc: 377 op: STARTLINE (58)

    /** fwdref.e:795		if op = GOTO then*/
    // SubProg new_forward_reference pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 381 op: EQUALS_IFW (104)
    if (_op_63317 != 188)
    goto L8; // [381] 403
    // SubProg new_forward_reference pc: 385 op: STARTLINE (58)

    /** fwdref.e:796			forward_references[ref][FR_DATA] = { sym }*/
    // SubProg new_forward_reference pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 389 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 394 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _sym_63316;
    _31450 = MAKE_SEQ(_1);
    // SubProg new_forward_reference pc: 398 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31450;
    if( _1 != _31450 ){
        DeRef(_1);
    }
    _31450 = NOVALUE;
    _31448 = NOVALUE;
    // SubProg new_forward_reference pc: 402 op: NOP1 (159)
L8: // addr: 403 pc: 402 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 403 op: STARTLINE (58)

    /** fwdref.e:803		if CurrentSub = TopLevelSub then*/
    // SubProg new_forward_reference pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 407 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 409 op: EQUALS_IFW (104)
    if (_5CurrentSub_12485 != _5TopLevelSub_12484)
    goto L9; // [409] 471
    // SubProg new_forward_reference pc: 413 op: STARTLINE (58)

    /** fwdref.e:804			if length( toplevel_references ) < current_file_no then*/
    // SubProg new_forward_reference pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 417 op: LENGTH (42)
    if (IS_SEQUENCE(_30toplevel_references_62233)){
            _31452 = SEQ_PTR(_30toplevel_references_62233)->length;
    }
    else {
        _31452 = 1;
    }
    // SubProg new_forward_reference pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 422 op: LESS_IFW (102)
    if (_31452 >= _5current_file_no_12477)
    goto LA; // [422] 450
    // SubProg new_forward_reference pc: 426 op: STARTLINE (58)

    /** fwdref.e:805				toplevel_references &= repeat( {}, current_file_no - length( toplevel_references ) )*/
    // SubProg new_forward_reference pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 434 op: LENGTH (42)
    if (IS_SEQUENCE(_30toplevel_references_62233)){
            _31454 = SEQ_PTR(_30toplevel_references_62233)->length;
    }
    else {
        _31454 = 1;
    }
    // SubProg new_forward_reference pc: 437 op: MINUS (10)
    _31455 = _5current_file_no_12477 - _31454;
    _31454 = NOVALUE;
    // SubProg new_forward_reference pc: 441 op: REPEAT (32)
    _31456 = Repeat(_21958, _31455);
    _31455 = NOVALUE;
    // SubProg new_forward_reference pc: 445 op: CONCAT (15)
    Concat((object_ptr)&_30toplevel_references_62233, _30toplevel_references_62233, _31456);
    DeRefDS(_31456);
    _31456 = NOVALUE;
    // SubProg new_forward_reference pc: 449 op: NOP1 (159)
LA: // addr: 450 pc: 449 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 450 op: STARTLINE (58)

    /** fwdref.e:807			toplevel_references[current_file_no] &= ref*/
    // SubProg new_forward_reference pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 456 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    _31458 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg new_forward_reference pc: 460 op: CONCAT (15)
    if (IS_SEQUENCE(_31458) && IS_ATOM(_ref_63318)) {
        Append(&_31459, _31458, _ref_63318);
    }
    else if (IS_ATOM(_31458) && IS_SEQUENCE(_ref_63318)) {
    }
    else {
        Concat((object_ptr)&_31459, _31458, _ref_63318);
        _31458 = NOVALUE;
    }
    _31458 = NOVALUE;
    // SubProg new_forward_reference pc: 464 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30toplevel_references_62233);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30toplevel_references_62233 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31459;
    if( _1 != _31459 ){
        DeRef(_1);
    }
    _31459 = NOVALUE;
    // SubProg new_forward_reference pc: 468 op: ELSE (23)
    goto LB; // [468] 595
    // SubProg new_forward_reference pc: 470 op: NOP1 (159)
L9: // addr: 471 pc: 470 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 471 op: STARTLINE (58)

    /** fwdref.e:809			add_active_reference( ref )*/
    // SubProg new_forward_reference pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 475 op: PROC (27)
    _30add_active_reference(_ref_63318, _5current_file_no_12477);
    // SubProg new_forward_reference pc: 479 op: STARTLINE (58)

    /** fwdref.e:811			if Parser_mode = PAM_RECORD then*/
    // SubProg new_forward_reference pc: 481 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 483 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 485 op: EQUALS_IFW (104)
    if (_5Parser_mode_12583 != 1)
    goto LC; // [485] 592
    // SubProg new_forward_reference pc: 489 op: STARTLINE (58)

    /** fwdref.e:812				symtab_pointer default_sym = CurrentSub*/
    // SubProg new_forward_reference pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 493 op: ASSIGN (18)
    _default_sym_63424 = _5CurrentSub_12485;
    // SubProg new_forward_reference pc: 496 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 498 op: STARTLINE (58)

    /** fwdref.e:813				symtab_pointer param = 0*/
    // SubProg new_forward_reference pc: 500 op: ASSIGN (18)
    _param_63427 = 0;
    // SubProg new_forward_reference pc: 503 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 505 op: STARTLINE (58)

    /** fwdref.e:814				while default_sym with entry do*/
    // SubProg new_forward_reference pc: 507 op: ELSE (23)
    goto LD; // [507] 536
    // SubProg new_forward_reference pc: 509 op: NOPWHILE (158)
LE: // addr: 510 pc: 509 sub: 63312 op: 158
    // SubProg new_forward_reference pc: 510 op: WHILE (47)
    if (_default_sym_63424 == 0)
    {
        goto LF; // [510] 549
    }
    else{
    }
    // SubProg new_forward_reference pc: 513 op: STARTLINE (58)

    /** fwdref.e:815					if sym_scope( default_sym ) = SC_PRIVATE then*/
    // SubProg new_forward_reference pc: 515 op: PROC (27)
    _31461 = _53sym_scope(_default_sym_63424);
    // SubProg new_forward_reference pc: 519 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 521 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _31461, 3)){
        DeRef(_31461);
        _31461 = NOVALUE;
        goto L10; // [521] 533
    }
    DeRef(_31461);
    _31461 = NOVALUE;
    // SubProg new_forward_reference pc: 525 op: STARTLINE (58)

    /** fwdref.e:816						param = default_sym*/
    // SubProg new_forward_reference pc: 527 op: ASSIGN (18)
    _param_63427 = _default_sym_63424;
    // SubProg new_forward_reference pc: 530 op: INTEGER_CHECK (96)
    // SubProg new_forward_reference pc: 532 op: NOP1 (159)
L10: // addr: 533 pc: 532 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 533 op: STARTLINE (58)

    /** fwdref.e:818				entry*/
    // SubProg new_forward_reference pc: 535 op: NOP1 (159)
LD: // addr: 536 pc: 535 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 536 op: STARTLINE (58)

    /** fwdref.e:819					default_sym = sym_next( default_sym )*/
    // SubProg new_forward_reference pc: 538 op: PROC (27)
    _default_sym_63424 = _53sym_next(_default_sym_63424);
    // SubProg new_forward_reference pc: 542 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_default_sym_63424)) {
        _1 = (object)(DBL_PTR(_default_sym_63424)->dbl);
        DeRefDS(_default_sym_63424);
        _default_sym_63424 = _1;
    }
    // SubProg new_forward_reference pc: 544 op: STARTLINE (58)

    /** fwdref.e:820				end while*/
    // SubProg new_forward_reference pc: 546 op: ENDWHILE (22)
    goto LE; // [546] 510
    // SubProg new_forward_reference pc: 548 op: NOP1 (159)
LF: // addr: 549 pc: 548 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 549 op: STARTLINE (58)

    /** fwdref.e:821				set_data( ref, {{ PAM_RECORD, param, length( Recorded_sym ) }} )*/
    // SubProg new_forward_reference pc: 551 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 553 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 555 op: LENGTH (42)
    if (IS_SEQUENCE(_5Recorded_sym_12586)){
            _31464 = SEQ_PTR(_5Recorded_sym_12586)->length;
    }
    else {
        _31464 = 1;
    }
    // SubProg new_forward_reference pc: 558 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = _param_63427;
    ((intptr_t*)_2)[3] = _31464;
    _31465 = MAKE_SEQ(_1);
    _31464 = NOVALUE;
    // SubProg new_forward_reference pc: 564 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _31465;
    _31466 = MAKE_SEQ(_1);
    _31465 = NOVALUE;
    // SubProg new_forward_reference pc: 568 op: ASSIGN (18)
    DeRef(_data_inlined_set_data_at_575_63442);
    _data_inlined_set_data_at_575_63442 = _31466;
    _31466 = NOVALUE;
    // SubProg new_forward_reference pc: 571 op: STARTLINE (58)

    /** fwdref.e:186		forward_references[ref][FR_DATA] = data*/
    // SubProg new_forward_reference pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 575 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30forward_references_62230);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30forward_references_62230 = MAKE_SEQ(_2);
    }
    _3 = (object)(_ref_63318 + ((s1_ptr)_2)->base);
    // SubProg new_forward_reference pc: 580 op: PASSIGN_SUBS (162)
    RefDS(_data_inlined_set_data_at_575_63442);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _data_inlined_set_data_at_575_63442;
    DeRef(_1);
    // SubProg new_forward_reference pc: 584 op: STARTLINE (58)

    /** fwdref.e:187	end procedure*/
    // SubProg new_forward_reference pc: 586 op: ELSE (23)
    goto L11; // [586] 589
    // SubProg new_forward_reference pc: 588 op: NOP1 (159)
L11: // addr: 589 pc: 588 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 589 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-set_data from new_forward_reference @ 575

// block var data_inlined_set_data_at_575_63442
    DeRef(_data_inlined_set_data_at_575_63442);
    _data_inlined_set_data_at_575_63442 = NOVALUE;

// block var set_data_1__tmp_at578_63443

// block var set_data_2__tmp_at578_63444
    // SubProg new_forward_reference pc: 591 op: NOP1 (159)
LC: // addr: 592 pc: 591 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 592 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var default_sym_63424

// block var param_63427
    // SubProg new_forward_reference pc: 594 op: NOP1 (159)
LB: // addr: 595 pc: 594 sub: 63312 op: 159
    // SubProg new_forward_reference pc: 595 op: STARTLINE (58)

    /** fwdref.e:824		fwdref_count += 1*/
    // SubProg new_forward_reference pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_forward_reference pc: 599 op: PLUS1_I (117)
    _30fwdref_count_62250 = _30fwdref_count_62250 + 1;
    // SubProg new_forward_reference pc: 603 op: STARTLINE (58)

    /** fwdref.e:826		ifdef EUDIS then*/
    // SubProg new_forward_reference pc: 605 op: STARTLINE (58)

    /** fwdref.e:839		return ref*/
    // SubProg new_forward_reference pc: 607 op: RETURNF (28)

// Exiting block BLOCK: new_forward_reference

// block var fwd_op_63314

// block var sym_63316

// block var op_63317

// block var len_63319
    DeRef(_31405);
    _31405 = NOVALUE;
    DeRef(_31410);
    _31410 = NOVALUE;
    return _ref_63318;
    // SubProg new_forward_reference pc: 611 op: BADRETURNF (43)
    ;
}


void _30add_active_reference(object _ref_63448, object _file_no_63449)
{
    object _sp_63463 = NOVALUE;
    object _31490 = NOVALUE; // 63479 31490
    object _31489 = NOVALUE; // 63478 31489
// skipping _31488  name type: 0
    object _31487 = NOVALUE; // 63476 31487
    object _31486 = NOVALUE; // 63475 31486
    object _31485 = NOVALUE; // 63474 31485
// skipping _31484  name type: 0
    object _31483 = NOVALUE; // 63472 31483
    object _31482 = NOVALUE; // 63471 31482
    object _31481 = NOVALUE; // 63470 31481
// skipping _31480  name type: 0
// skipping _31479  name type: 0
    object _31478 = NOVALUE; // 63465 31478
// skipping _31477  name type: 0
    object _31476 = NOVALUE; // 63461 31476
    object _31475 = NOVALUE; // 63460 31475
    object _31474 = NOVALUE; // 63459 31474
// skipping _31473  name type: 0
    object _31472 = NOVALUE; // 63457 31472
    object _31471 = NOVALUE; // 63456 31471
    object _31470 = NOVALUE; // 63455 31470
// skipping _31469  name type: 0
    object _31468 = NOVALUE; // 63453 31468
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_active_reference pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_active_reference pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_active_reference pc: 5 op: STARTLINE (58)

    /** fwdref.e:843		if length( active_references ) < file_no then*/
    // SubProg add_active_reference pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_references_62232)){
            _31468 = SEQ_PTR(_30active_references_62232)->length;
    }
    else {
        _31468 = 1;
    }
    // SubProg add_active_reference pc: 12 op: LESS_IFW_I (119)
    if (_31468 >= _file_no_63449)
    goto L1; // [12] 59
    // SubProg add_active_reference pc: 16 op: STARTLINE (58)

    /** fwdref.e:844			active_references &= repeat( {}, file_no - length( active_references ) )*/
    // SubProg add_active_reference pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_references_62232)){
            _31470 = SEQ_PTR(_30active_references_62232)->length;
    }
    else {
        _31470 = 1;
    }
    // SubProg add_active_reference pc: 25 op: MINUS (10)
    _31471 = _file_no_63449 - _31470;
    _31470 = NOVALUE;
    // SubProg add_active_reference pc: 29 op: REPEAT (32)
    _31472 = Repeat(_21958, _31471);
    _31471 = NOVALUE;
    // SubProg add_active_reference pc: 33 op: CONCAT (15)
    Concat((object_ptr)&_30active_references_62232, _30active_references_62232, _31472);
    DeRefDS(_31472);
    _31472 = NOVALUE;
    // SubProg add_active_reference pc: 37 op: STARTLINE (58)

    /** fwdref.e:845			active_subprogs   &= repeat( {}, file_no - length( active_subprogs ) )*/
    // SubProg add_active_reference pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_subprogs_62231)){
            _31474 = SEQ_PTR(_30active_subprogs_62231)->length;
    }
    else {
        _31474 = 1;
    }
    // SubProg add_active_reference pc: 46 op: MINUS (10)
    _31475 = _file_no_63449 - _31474;
    _31474 = NOVALUE;
    // SubProg add_active_reference pc: 50 op: REPEAT (32)
    _31476 = Repeat(_21958, _31475);
    _31475 = NOVALUE;
    // SubProg add_active_reference pc: 54 op: CONCAT (15)
    Concat((object_ptr)&_30active_subprogs_62231, _30active_subprogs_62231, _31476);
    DeRefDS(_31476);
    _31476 = NOVALUE;
    // SubProg add_active_reference pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 63446 op: 159
    // SubProg add_active_reference pc: 59 op: STARTLINE (58)

    /** fwdref.e:847		integer sp = find( CurrentSub, active_subprogs[file_no] )*/
    // SubProg add_active_reference pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 65 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _31478 = (object)*(((s1_ptr)_2)->base + _file_no_63449);
    // SubProg add_active_reference pc: 69 op: FIND_FROM (176)
    _sp_63463 = find_from(_5CurrentSub_12485, _31478, 1);
    _31478 = NOVALUE;
    // SubProg add_active_reference pc: 74 op: STARTLINE (58)

    /** fwdref.e:848		if not sp then*/
    // SubProg add_active_reference pc: 76 op: NOT_IFW (108)
    if (_sp_63463 != 0)
    goto L2; // [76] 127
    // SubProg add_active_reference pc: 79 op: STARTLINE (58)

    /** fwdref.e:849			active_subprogs[file_no] &= CurrentSub*/
    // SubProg add_active_reference pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 85 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _31481 = (object)*(((s1_ptr)_2)->base + _file_no_63449);
    // SubProg add_active_reference pc: 89 op: CONCAT (15)
    if (IS_SEQUENCE(_31481) && IS_ATOM(_5CurrentSub_12485)) {
        Append(&_31482, _31481, _5CurrentSub_12485);
    }
    else if (IS_ATOM(_31481) && IS_SEQUENCE(_5CurrentSub_12485)) {
    }
    else {
        Concat((object_ptr)&_31482, _31481, _5CurrentSub_12485);
        _31481 = NOVALUE;
    }
    _31481 = NOVALUE;
    // SubProg add_active_reference pc: 93 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_subprogs_62231 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63449);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31482;
    if( _1 != _31482 ){
        DeRef(_1);
    }
    _31482 = NOVALUE;
    // SubProg add_active_reference pc: 97 op: STARTLINE (58)

    /** fwdref.e:850			sp = length( active_subprogs[file_no] )*/
    // SubProg add_active_reference pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _31483 = (object)*(((s1_ptr)_2)->base + _file_no_63449);
    // SubProg add_active_reference pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_31483)){
            _sp_63463 = SEQ_PTR(_31483)->length;
    }
    else {
        _sp_63463 = 1;
    }
    _31483 = NOVALUE;
    // SubProg add_active_reference pc: 108 op: STARTLINE (58)

    /** fwdref.e:852			active_references[file_no] = append( active_references[file_no], {} )*/
    // SubProg add_active_reference pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _31485 = (object)*(((s1_ptr)_2)->base + _file_no_63449);
    // SubProg add_active_reference pc: 118 op: APPEND (35)
    RefDS(_21958);
    Append(&_31486, _31485, _21958);
    _31485 = NOVALUE;
    // SubProg add_active_reference pc: 122 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_references_62232 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _file_no_63449);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31486;
    if( _1 != _31486 ){
        DeRef(_1);
    }
    _31486 = NOVALUE;
    // SubProg add_active_reference pc: 126 op: NOP1 (159)
L2: // addr: 127 pc: 126 sub: 63446 op: 159
    // SubProg add_active_reference pc: 127 op: STARTLINE (58)

    /** fwdref.e:854		active_references[file_no][sp] &= ref*/
    // SubProg add_active_reference pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_active_reference pc: 131 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30active_references_62232 = MAKE_SEQ(_2);
    }
    _3 = (object)(_file_no_63449 + ((s1_ptr)_2)->base);
    // SubProg add_active_reference pc: 136 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _31489 = (object)*(((s1_ptr)_2)->base + _sp_63463);
    _31487 = NOVALUE;
    // SubProg add_active_reference pc: 140 op: CONCAT (15)
    if (IS_SEQUENCE(_31489) && IS_ATOM(_ref_63448)) {
        Append(&_31490, _31489, _ref_63448);
    }
    else if (IS_ATOM(_31489) && IS_SEQUENCE(_ref_63448)) {
    }
    else {
        Concat((object_ptr)&_31490, _31489, _ref_63448);
        _31489 = NOVALUE;
    }
    _31489 = NOVALUE;
    // SubProg add_active_reference pc: 144 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _sp_63463);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31490;
    if( _1 != _31490 ){
        DeRef(_1);
    }
    _31490 = NOVALUE;
    _31487 = NOVALUE;
    // SubProg add_active_reference pc: 148 op: STARTLINE (58)

    /** fwdref.e:855	end procedure*/
    // SubProg add_active_reference pc: 150 op: RETURNP (29)

// Exiting block BLOCK: add_active_reference

// block var ref_63448

// block var file_no_63449

// block var sp_63463
    _31483 = NOVALUE;
    return;
    // SubProg add_active_reference pc: 153 op: BADRETURNF (43)
    ;
}


object _30resolve_file(object _refs_63500, object _report_errors_63501, object _unincluded_ok_63502)
{
    object _errors_63503 = NOVALUE;
    object _ref_63507 = NOVALUE;
    object _fr_63509 = NOVALUE;
    object _tok_63522 = NOVALUE;
    object _code_sub_63530 = NOVALUE;
    object _fr_type_63532 = NOVALUE;
    object _sym_tok_63534 = NOVALUE;
// skipping _31545  name type: 0
    object _31544 = NOVALUE; // 63608 31544
    object _31543 = NOVALUE; // 63607 31543
    object _31542 = NOVALUE; // 63606 31542
    object _31541 = NOVALUE; // 63604 31541
    object _31540 = NOVALUE; // 63603 31540
    object _31539 = NOVALUE; // 63602 31539
// skipping _31536  name type: 0
// skipping _31535  name type: 0
    object _31534 = NOVALUE; // 63579 31534
    object _31533 = NOVALUE; // 63577 31533
    object _31532 = NOVALUE; // 63576 31532
// skipping _31531  name type: 0
    object _31530 = NOVALUE; // 63570 31530
    object _31529 = NOVALUE; // 63569 31529
    object _31526 = NOVALUE; // 63558 31526
    object _31525 = NOVALUE; // 63556 31525
    object _31524 = NOVALUE; // 63555 31524
// skipping _31523  name type: 0
// skipping _31522  name type: 0
// skipping _31521  name type: 0
    object _31520 = NOVALUE; // 63544 31520
    object _31519 = NOVALUE; // 63543 31519
// skipping _31515  name type: 0
// skipping _31514  name type: 0
// skipping _31513  name type: 0
// skipping _31512  name type: 0
    object _31511 = NOVALUE; // 63526 31511
// skipping _31510  name type: 0
    object _31509 = NOVALUE; // 63520 31509
    object _31508 = NOVALUE; // 63519 31508
    object _31507 = NOVALUE; // 63518 31507
    object _31506 = NOVALUE; // 63516 31506
    object _31505 = NOVALUE; // 63514 31505
    object _31504 = NOVALUE; // 63513 31504
// skipping _31503  name type: 0
// skipping _31502  name type: 0
    object _31501 = NOVALUE; // 63506 31501
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg resolve_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg resolve_file pc: 3 op: INTEGER_CHECK (96)
    // SubProg resolve_file pc: 5 op: INTEGER_CHECK (96)
    // SubProg resolve_file pc: 7 op: STARTLINE (58)

    /** fwdref.e:864		sequence errors = {}*/
    // SubProg resolve_file pc: 9 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_errors_63503);
    _errors_63503 = _21958;
    // SubProg resolve_file pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg resolve_file pc: 14 op: STARTLINE (58)

    /** fwdref.e:865		for ar = length( refs ) to 1 by -1 do*/
    // SubProg resolve_file pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63500)){
            _31501 = SEQ_PTR(_refs_63500)->length;
    }
    else {
        _31501 = 1;
    }
    // SubProg resolve_file pc: 19 op: FOR_I (125)
    {
        object _ar_63505;
        _ar_63505 = _31501;
L1: // addr: 26 pc: 19 sub: 63498 op: 125
        if (_ar_63505 < 1){
            goto L2; // [19] 481
        }
        // SubProg resolve_file pc: 26 op: STARTLINE (58)

        /** fwdref.e:866			integer ref = refs[ar]*/
        // SubProg resolve_file pc: 28 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_refs_63500);
        _ref_63507 = (object)*(((s1_ptr)_2)->base + _ar_63505);
        if (!IS_ATOM_INT(_ref_63507))
        _ref_63507 = (object)DBL_PTR(_ref_63507)->dbl;
        // SubProg resolve_file pc: 32 op: STARTLINE (58)

        /** fwdref.e:868			sequence fr = forward_references[ref]*/
        // SubProg resolve_file pc: 34 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 36 op: RHS_SUBS (25)
        DeRef(_fr_63509);
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        _fr_63509 = (object)*(((s1_ptr)_2)->base + _ref_63507);
        Ref(_fr_63509);
        // SubProg resolve_file pc: 40 op: SEQUENCE_CHECK (97)
        // SubProg resolve_file pc: 42 op: STARTLINE (58)

        /** fwdref.e:869			if include_matrix[fr[FR_FILE]][current_file_no] = NOT_INCLUDED and not unincluded_ok then*/
        // SubProg resolve_file pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63509);
        _31504 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg resolve_file pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!IS_ATOM_INT(_31504)){
            _31505 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31504)->dbl));
        }
        else{
            _31505 = (object)*(((s1_ptr)_2)->base + _31504);
        }
        // SubProg resolve_file pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_31505);
        _31506 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
        _31505 = NOVALUE;
        // SubProg resolve_file pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 62 op: EQUALS (3)
        if (IS_ATOM_INT(_31506)) {
            _31507 = (_31506 == 0);
        }
        else {
            _31507 = binary_op(EQUALS, _31506, 0);
        }
        _31506 = NOVALUE;
        // SubProg resolve_file pc: 66 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31507)) {
            if (_31507 == 0) {
                goto L3; // [66] 84
            }
        }
        else {
            if (DBL_PTR(_31507)->dbl == 0.0) {
                goto L3; // [66] 84
            }
        }
        // SubProg resolve_file pc: 70 op: NOT (7)
        _31509 = (_unincluded_ok_63502 == 0);
        // SubProg resolve_file pc: 73 op: NOP1 (159)
        // SubProg resolve_file pc: 74 op: IF (20)
        if (_31509 == 0)
        {
            DeRef(_31509);
            _31509 = NOVALUE;
            goto L3; // [74] 84
        }
        else{
            DeRef(_31509);
            _31509 = NOVALUE;
        }
        // SubProg resolve_file pc: 77 op: STARTLINE (58)

        /** fwdref.e:870				continue*/
        // SubProg resolve_file pc: 79 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63507

// block var fr_63509
        DeRef(_fr_63509);
        _fr_63509 = NOVALUE;

// block var tok_63522
        DeRef(_tok_63522);
        _tok_63522 = NOVALUE;

// block var code_sub_63530

// block var fr_type_63532

// block var sym_tok_63534
        // SubProg resolve_file pc: 81 op: ELSE (23)
        goto L4; // [81] 476
        // SubProg resolve_file pc: 83 op: NOP1 (159)
L3: // addr: 84 pc: 83 sub: 63498 op: 159
        // SubProg resolve_file pc: 84 op: STARTLINE (58)

        /** fwdref.e:873			token tok = find_reference( fr )*/
        // SubProg resolve_file pc: 86 op: PROC (27)
        RefDS(_fr_63509);
        _0 = _tok_63522;
        _tok_63522 = _30find_reference(_fr_63509);
        DeRef(_0);
        // SubProg resolve_file pc: 90 op: STARTLINE (58)

        /** fwdref.e:874			if tok[T_ID] = IGNORED then*/
        // SubProg resolve_file pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 94 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63522);
        _31511 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg resolve_file pc: 98 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 100 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31511, 509)){
            _31511 = NOVALUE;
            goto L5; // [100] 117
        }
        _31511 = NOVALUE;
        // SubProg resolve_file pc: 104 op: STARTLINE (58)

        /** fwdref.e:875				errors &= ref*/
        // SubProg resolve_file pc: 106 op: CONCAT (15)
        Append(&_errors_63503, _errors_63503, _ref_63507);
        // SubProg resolve_file pc: 110 op: STARTLINE (58)

        /** fwdref.e:876				continue*/
        // SubProg resolve_file pc: 112 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63507

// block var fr_63509
        DeRefDS(_fr_63509);
        _fr_63509 = NOVALUE;

// block var tok_63522
        DeRef(_tok_63522);
        _tok_63522 = NOVALUE;

// block var code_sub_63530

// block var fr_type_63532

// block var sym_tok_63534
        // SubProg resolve_file pc: 114 op: ELSE (23)
        goto L4; // [114] 476
        // SubProg resolve_file pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 63498 op: 159
        // SubProg resolve_file pc: 117 op: STARTLINE (58)

        /** fwdref.e:880			integer code_sub = fr[FR_SUBPROG]*/
        // SubProg resolve_file pc: 119 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_fr_63509);
        _code_sub_63530 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_code_sub_63530))
        _code_sub_63530 = (object)DBL_PTR(_code_sub_63530)->dbl;
        // SubProg resolve_file pc: 123 op: STARTLINE (58)

        /** fwdref.e:881			integer fr_type  = fr[FR_TYPE]*/
        // SubProg resolve_file pc: 125 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_fr_63509);
        _fr_type_63532 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_fr_type_63532))
        _fr_type_63532 = (object)DBL_PTR(_fr_type_63532)->dbl;
        // SubProg resolve_file pc: 129 op: STARTLINE (58)

        /** fwdref.e:882			integer sym_tok*/
        // SubProg resolve_file pc: 131 op: STARTLINE (58)

        /** fwdref.e:884			switch fr_type label "fr_type" do*/
        // SubProg resolve_file pc: 133 op: SWITCH_I (193)
        _0 = _fr_type_63532;
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
            _2 = (object)SEQ_PTR(_tok_63522);
            _31519 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 154 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!IS_ATOM_INT(_31519)){
                _31520 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31519)->dbl));
            }
            else{
                _31520 = (object)*(((s1_ptr)_2)->base + _31519);
            }
            // SubProg resolve_file pc: 158 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 160 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31520);
            if (!IS_ATOM_INT(_5S_TOKEN_12137)){
                _sym_tok_63534 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
            }
            else{
                _sym_tok_63534 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
            }
            if (!IS_ATOM_INT(_sym_tok_63534)){
                _sym_tok_63534 = (object)DBL_PTR(_sym_tok_63534)->dbl;
            }
            _31520 = NOVALUE;
            // SubProg resolve_file pc: 166 op: STARTLINE (58)

            /** fwdref.e:888					if sym_tok = TYPE then*/
            // SubProg resolve_file pc: 168 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 170 op: EQUALS_IFW (104)
            if (_sym_tok_63534 != 504)
            goto L6; // [170] 184
            // SubProg resolve_file pc: 174 op: STARTLINE (58)

            /** fwdref.e:889						sym_tok = FUNC*/
            // SubProg resolve_file pc: 176 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 178 op: ASSIGN (18)
            _sym_tok_63534 = 501;
            // SubProg resolve_file pc: 181 op: INTEGER_CHECK (96)
            // SubProg resolve_file pc: 183 op: NOP1 (159)
L6: // addr: 184 pc: 183 sub: 63498 op: 159
            // SubProg resolve_file pc: 184 op: STARTLINE (58)

            /** fwdref.e:891					if sym_tok != fr_type then*/
            // SubProg resolve_file pc: 186 op: NOTEQ_IFW_I (122)
            if (_sym_tok_63534 == _fr_type_63532)
            goto L7; // [186] 220
            // SubProg resolve_file pc: 190 op: STARTLINE (58)

            /** fwdref.e:892						if sym_tok != FUNC and fr_type != PROC then*/
            // SubProg resolve_file pc: 192 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 194 op: NOTEQ (4)
            _31524 = (_sym_tok_63534 != 501);
            // SubProg resolve_file pc: 198 op: SC1_AND_IF (146)
            if (_31524 == 0) {
                goto L8; // [198] 219
            }
            // SubProg resolve_file pc: 202 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 204 op: NOTEQ (4)
            _31526 = (_fr_type_63532 != 27);
            // SubProg resolve_file pc: 208 op: NOP1 (159)
            // SubProg resolve_file pc: 209 op: IF (20)
            if (_31526 == 0)
            {
                DeRef(_31526);
                _31526 = NOVALUE;
                goto L8; // [209] 219
            }
            else{
                DeRef(_31526);
                _31526 = NOVALUE;
            }
            // SubProg resolve_file pc: 212 op: STARTLINE (58)

            /** fwdref.e:893							forward_error( tok, ref )*/
            // SubProg resolve_file pc: 214 op: PROC (27)
            Ref(_tok_63522);
            _30forward_error(_tok_63522, _ref_63507);
            // SubProg resolve_file pc: 218 op: NOP1 (159)
L8: // addr: 219 pc: 218 sub: 63498 op: 159
            // SubProg resolve_file pc: 219 op: NOP1 (159)
L7: // addr: 220 pc: 219 sub: 63498 op: 159
            // SubProg resolve_file pc: 220 op: STARTLINE (58)

            /** fwdref.e:896					switch sym_tok do*/
            // SubProg resolve_file pc: 222 op: SWITCH_I (193)
            _0 = _sym_tok_63534;
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
                Ref(_tok_63522);
                _30patch_forward_call(_tok_63522, _ref_63507);
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
                Ref(_tok_63522);
                _30forward_error(_tok_63522, _ref_63507);
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
            _2 = (object)SEQ_PTR(_tok_63522);
            _31529 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 272 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!IS_ATOM_INT(_31529)){
                _31530 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31529)->dbl));
            }
            else{
                _31530 = (object)*(((s1_ptr)_2)->base + _31529);
            }
            // SubProg resolve_file pc: 276 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 278 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31530);
            if (!IS_ATOM_INT(_5S_TOKEN_12137)){
                _sym_tok_63534 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
            }
            else{
                _sym_tok_63534 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
            }
            if (!IS_ATOM_INT(_sym_tok_63534)){
                _sym_tok_63534 = (object)DBL_PTR(_sym_tok_63534)->dbl;
            }
            _31530 = NOVALUE;
            // SubProg resolve_file pc: 284 op: STARTLINE (58)

            /** fwdref.e:908					if SymTab[tok[T_SYM]][S_SCOPE] = SC_UNDEFINED then*/
            // SubProg resolve_file pc: 286 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 288 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 290 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_tok_63522);
            _31532 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 294 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!IS_ATOM_INT(_31532)){
                _31533 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31532)->dbl));
            }
            else{
                _31533 = (object)*(((s1_ptr)_2)->base + _31532);
            }
            // SubProg resolve_file pc: 298 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 300 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31533);
            _31534 = (object)*(((s1_ptr)_2)->base + 4);
            _31533 = NOVALUE;
            // SubProg resolve_file pc: 304 op: GLOBAL_INIT_CHECK (109)
            // SubProg resolve_file pc: 306 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _31534, 9)){
                _31534 = NOVALUE;
                goto LA; // [306] 323
            }
            _31534 = NOVALUE;
            // SubProg resolve_file pc: 310 op: STARTLINE (58)

            /** fwdref.e:909						errors &= ref*/
            // SubProg resolve_file pc: 312 op: CONCAT (15)
            Append(&_errors_63503, _errors_63503, _ref_63507);
            // SubProg resolve_file pc: 316 op: STARTLINE (58)

            /** fwdref.e:910						continue*/
            // SubProg resolve_file pc: 318 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63507

// block var fr_63509
            DeRef(_fr_63509);
            _fr_63509 = NOVALUE;

// block var tok_63522
            DeRef(_tok_63522);
            _tok_63522 = NOVALUE;

// block var code_sub_63530

// block var fr_type_63532

// block var sym_tok_63534
            // SubProg resolve_file pc: 320 op: ELSE (23)
            goto L4; // [320] 476
            // SubProg resolve_file pc: 322 op: NOP1 (159)
LA: // addr: 323 pc: 322 sub: 63498 op: 159
            // SubProg resolve_file pc: 323 op: STARTLINE (58)

            /** fwdref.e:913					switch sym_tok do*/
            // SubProg resolve_file pc: 325 op: SWITCH_I (193)
            _0 = _sym_tok_63534;
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
                Ref(_tok_63522);
                _30patch_forward_variable(_tok_63522, _ref_63507);
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
                Ref(_tok_63522);
                _30forward_error(_tok_63522, _ref_63507);
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
            Ref(_tok_63522);
            _30patch_forward_type_check(_tok_63522, _ref_63507);
            // SubProg resolve_file pc: 373 op: ELSE (23)
            goto L9; // [373] 446
            // SubProg resolve_file pc: 375 op: STARTLINE (58)

            /** fwdref.e:924				case GLOBAL_INIT_CHECK then*/
            // SubProg resolve_file pc: 377 op: CASE (186)
            case 109:
            // SubProg resolve_file pc: 379 op: STARTLINE (58)

            /** fwdref.e:925					patch_forward_init_check( tok, ref )*/
            // SubProg resolve_file pc: 381 op: PROC (27)
            Ref(_tok_63522);
            _30patch_forward_init_check(_tok_63522, _ref_63507);
            // SubProg resolve_file pc: 385 op: ELSE (23)
            goto L9; // [385] 446
            // SubProg resolve_file pc: 387 op: STARTLINE (58)

            /** fwdref.e:927				case CASE then*/
            // SubProg resolve_file pc: 389 op: CASE (186)
            case 186:
            // SubProg resolve_file pc: 391 op: STARTLINE (58)

            /** fwdref.e:928					patch_forward_case( tok, ref )*/
            // SubProg resolve_file pc: 393 op: PROC (27)
            Ref(_tok_63522);
            _30patch_forward_case(_tok_63522, _ref_63507);
            // SubProg resolve_file pc: 397 op: ELSE (23)
            goto L9; // [397] 446
            // SubProg resolve_file pc: 399 op: STARTLINE (58)

            /** fwdref.e:930				case TYPE then*/
            // SubProg resolve_file pc: 401 op: CASE (186)
            case 504:
            // SubProg resolve_file pc: 403 op: STARTLINE (58)

            /** fwdref.e:931					patch_forward_type( tok, ref )*/
            // SubProg resolve_file pc: 405 op: PROC (27)
            Ref(_tok_63522);
            _30patch_forward_type(_tok_63522, _ref_63507);
            // SubProg resolve_file pc: 409 op: ELSE (23)
            goto L9; // [409] 446
            // SubProg resolve_file pc: 411 op: STARTLINE (58)

            /** fwdref.e:933				case GOTO then*/
            // SubProg resolve_file pc: 413 op: CASE (186)
            case 188:
            // SubProg resolve_file pc: 415 op: STARTLINE (58)

            /** fwdref.e:934					patch_forward_goto( tok, ref )*/
            // SubProg resolve_file pc: 417 op: PROC (27)
            Ref(_tok_63522);
            _30patch_forward_goto(_tok_63522, _ref_63507);
            // SubProg resolve_file pc: 421 op: ELSE (23)
            goto L9; // [421] 446
            // SubProg resolve_file pc: 423 op: STARTLINE (58)

            /** fwdref.e:936				case else*/
            // SubProg resolve_file pc: 425 op: CASE (186)
            default:
            // SubProg resolve_file pc: 427 op: STARTLINE (58)

            /** fwdref.e:938					InternalErr( 263, {fr[FR_TYPE], fr[FR_NAME]})*/
            // SubProg resolve_file pc: 429 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_fr_63509);
            _31539 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg resolve_file pc: 433 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_fr_63509);
            _31540 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg resolve_file pc: 437 op: RIGHT_BRACE_2 (85)
            Ref(_31540);
            Ref(_31539);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _31539;
            ((intptr_t *)_2)[2] = _31540;
            _31541 = MAKE_SEQ(_1);
            _31540 = NOVALUE;
            _31539 = NOVALUE;
            // SubProg resolve_file pc: 441 op: PROC (27)
            _49InternalErr(263, _31541);
            _31541 = NOVALUE;
            // SubProg resolve_file pc: 445 op: NOPSWITCH (187)
        ;}L9: // addr: 446 pc: 445 sub: 63498 op: 187
        // SubProg resolve_file pc: 446 op: STARTLINE (58)

        /** fwdref.e:940			if report_errors and sequence( forward_references[ref] ) then*/
        // SubProg resolve_file pc: 448 op: SC1_AND_IF (146)
        if (_report_errors_63501 == 0) {
            goto LB; // [448] 472
        }
        // SubProg resolve_file pc: 452 op: GLOBAL_INIT_CHECK (109)
        // SubProg resolve_file pc: 454 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        _31543 = (object)*(((s1_ptr)_2)->base + _ref_63507);
        // SubProg resolve_file pc: 458 op: IS_A_SEQUENCE (68)
        _31544 = IS_SEQUENCE(_31543);
        _31543 = NOVALUE;
        // SubProg resolve_file pc: 461 op: NOP1 (159)
        // SubProg resolve_file pc: 462 op: IF (20)
        if (_31544 == 0)
        {
            _31544 = NOVALUE;
            goto LB; // [462] 472
        }
        else{
            _31544 = NOVALUE;
        }
        // SubProg resolve_file pc: 465 op: STARTLINE (58)

        /** fwdref.e:941				errors &= ref*/
        // SubProg resolve_file pc: 467 op: CONCAT (15)
        Append(&_errors_63503, _errors_63503, _ref_63507);
        // SubProg resolve_file pc: 471 op: NOP1 (159)
LB: // addr: 472 pc: 471 sub: 63498 op: 159
        // SubProg resolve_file pc: 472 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-fr_type

// block var ref_63507

// block var fr_63509
        DeRef(_fr_63509);
        _fr_63509 = NOVALUE;

// block var tok_63522
        DeRef(_tok_63522);
        _tok_63522 = NOVALUE;

// block var code_sub_63530

// block var fr_type_63532

// block var sym_tok_63534
        // SubProg resolve_file pc: 474 op: STARTLINE (58)

        /** fwdref.e:944		end for*/
        // SubProg resolve_file pc: 476 op: ENDFOR_GENERAL (39)
L4: // addr: 476 pc: 476 sub: 63498 op: 39
        _ar_63505 = _ar_63505 + -1;
        goto L1; // [476] 26
L2: // addr: 481 pc: 476 sub: 63498 op: 39
        ;
    }
    // SubProg resolve_file pc: 481 op: STARTLINE (58)

    /** fwdref.e:945		return errors*/
    // SubProg resolve_file pc: 483 op: RETURNF (28)

// Exiting block BLOCK: resolve_file

// block var refs_63500
    DeRefDS(_refs_63500);

// block var report_errors_63501

// block var unincluded_ok_63502
    _31504 = NOVALUE;
    DeRef(_31524);
    _31524 = NOVALUE;
    _31519 = NOVALUE;
    _31532 = NOVALUE;
    DeRef(_31507);
    _31507 = NOVALUE;
    _31529 = NOVALUE;
    return _errors_63503;
    // SubProg resolve_file pc: 487 op: BADRETURNF (43)
    ;
}


object _30file_name_based_symindex_compare(object _si1_63612, object _si2_63613)
{
    object _fn1_63634 = NOVALUE;
    object _fn2_63639 = NOVALUE;
    object _31573 = NOVALUE; // 63661 31573
    object _31572 = NOVALUE; // 63660 31572
    object _31571 = NOVALUE; // 63659 31571
    object _31570 = NOVALUE; // 63656 31570
    object _31569 = NOVALUE; // 63655 31569
    object _31568 = NOVALUE; // 63652 31568
    object _31567 = NOVALUE; // 63651 31567
    object _31566 = NOVALUE; // 63650 31566
    object _31565 = NOVALUE; // 63649 31565
    object _31564 = NOVALUE; // 63648 31564
    object _31563 = NOVALUE; // 63647 31563
    object _31562 = NOVALUE; // 63645 31562
// skipping _31561  name type: 0
    object _31560 = NOVALUE; // 63641 31560
// skipping _31559  name type: 0
    object _31558 = NOVALUE; // 63636 31558
    object _31557 = NOVALUE; // 63633 31557
    object _31556 = NOVALUE; // 63632 31556
    object _31555 = NOVALUE; // 63631 31555
    object _31554 = NOVALUE; // 63628 31554
    object _31553 = NOVALUE; // 63627 31553
    object _31552 = NOVALUE; // 63626 31552
    object _31551 = NOVALUE; // 63625 31551
    object _31550 = NOVALUE; // 63621 31550
    object _31549 = NOVALUE; // 63620 31549
// skipping _31548  name type: 0
    object _31547 = NOVALUE; // 63617 31547
    object _31546 = NOVALUE; // 63616 31546
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg file_name_based_symindex_compare pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_si1_63612)) {
        _1 = (object)(DBL_PTR(_si1_63612)->dbl);
        DeRefDS(_si1_63612);
        _si1_63612 = _1;
    }
    // SubProg file_name_based_symindex_compare pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_si2_63613)) {
        _1 = (object)(DBL_PTR(_si2_63613)->dbl);
        DeRefDS(_si2_63613);
        _si2_63613 = _1;
    }
    // SubProg file_name_based_symindex_compare pc: 5 op: STARTLINE (58)

    /** fwdref.e:949		if not symtab_index(si1) or not symtab_index(si2) then*/
    // SubProg file_name_based_symindex_compare pc: 7 op: PROC (27)
    _31546 = _5symtab_index(_si1_63612);
    // SubProg file_name_based_symindex_compare pc: 11 op: NOT (7)
    if (IS_ATOM_INT(_31546)) {
        _31547 = (_31546 == 0);
    }
    else {
        _31547 = unary_op(NOT, _31546);
    }
    DeRef(_31546);
    _31546 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 14 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_31547)) {
        if (_31547 != 0) {
            goto L1; // [14] 30
        }
    }
    else {
        if (DBL_PTR(_31547)->dbl != 0.0) {
            goto L1; // [14] 30
        }
    }
    // SubProg file_name_based_symindex_compare pc: 18 op: PROC (27)
    _31549 = _5symtab_index(_si2_63613);
    // SubProg file_name_based_symindex_compare pc: 22 op: NOT (7)
    if (IS_ATOM_INT(_31549)) {
        _31550 = (_31549 == 0);
    }
    else {
        _31550 = unary_op(NOT, _31549);
    }
    DeRef(_31549);
    _31549 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 25 op: NOP1 (159)
    // SubProg file_name_based_symindex_compare pc: 26 op: IF (20)
    if (_31550 == 0) {
        DeRef(_31550);
        _31550 = NOVALUE;
        goto L2; // [26] 37
    }
    else {
        if (!IS_ATOM_INT(_31550) && DBL_PTR(_31550)->dbl == 0.0){
            DeRef(_31550);
            _31550 = NOVALUE;
            goto L2; // [26] 37
        }
        DeRef(_31550);
        _31550 = NOVALUE;
    }
    DeRef(_31550);
    _31550 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 63610 op: 159
    // SubProg file_name_based_symindex_compare pc: 30 op: STARTLINE (58)

    /** fwdref.e:950			return 1 -- put non symbols last*/
    // SubProg file_name_based_symindex_compare pc: 32 op: RETURNF (28)

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63612

// block var si2_63613
    DeRef(_31547);
    _31547 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 63610 op: 159
    // SubProg file_name_based_symindex_compare pc: 37 op: STARTLINE (58)

    /** fwdref.e:952		if S_FILE_NO <= length(SymTab[si1]) and S_FILE_NO <= length(SymTab[si2]) then*/
    // SubProg file_name_based_symindex_compare pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 43 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31551 = (object)*(((s1_ptr)_2)->base + _si1_63612);
    // SubProg file_name_based_symindex_compare pc: 47 op: LENGTH (42)
    if (IS_SEQUENCE(_31551)){
            _31552 = SEQ_PTR(_31551)->length;
    }
    else {
        _31552 = 1;
    }
    _31551 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 50 op: LESSEQ (5)
    if (IS_ATOM_INT(_5S_FILE_NO_12128)) {
        _31553 = (_5S_FILE_NO_12128 <= _31552);
    }
    else {
        _31553 = binary_op(LESSEQ, _5S_FILE_NO_12128, _31552);
    }
    _31552 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 54 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_31553)) {
        if (_31553 == 0) {
            goto L3; // [54] 186
        }
    }
    else {
        if (DBL_PTR(_31553)->dbl == 0.0) {
            goto L3; // [54] 186
        }
    }
    // SubProg file_name_based_symindex_compare pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31555 = (object)*(((s1_ptr)_2)->base + _si2_63613);
    // SubProg file_name_based_symindex_compare pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_31555)){
            _31556 = SEQ_PTR(_31555)->length;
    }
    else {
        _31556 = 1;
    }
    _31555 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 69 op: LESSEQ (5)
    if (IS_ATOM_INT(_5S_FILE_NO_12128)) {
        _31557 = (_5S_FILE_NO_12128 <= _31556);
    }
    else {
        _31557 = binary_op(LESSEQ, _5S_FILE_NO_12128, _31556);
    }
    _31556 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 73 op: NOP1 (159)
    // SubProg file_name_based_symindex_compare pc: 74 op: IF (20)
    if (_31557 == 0) {
        DeRef(_31557);
        _31557 = NOVALUE;
        goto L3; // [74] 186
    }
    else {
        if (!IS_ATOM_INT(_31557) && DBL_PTR(_31557)->dbl == 0.0){
            DeRef(_31557);
            _31557 = NOVALUE;
            goto L3; // [74] 186
        }
        DeRef(_31557);
        _31557 = NOVALUE;
    }
    DeRef(_31557);
    _31557 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 77 op: STARTLINE (58)

    /** fwdref.e:953			integer fn1 = SymTab[si1][S_FILE_NO], fn2 = SymTab[si2][S_FILE_NO]*/
    // SubProg file_name_based_symindex_compare pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31558 = (object)*(((s1_ptr)_2)->base + _si1_63612);
    // SubProg file_name_based_symindex_compare pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31558);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _fn1_63634 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _fn1_63634 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_fn1_63634)){
        _fn1_63634 = (object)DBL_PTR(_fn1_63634)->dbl;
    }
    _31558 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31560 = (object)*(((s1_ptr)_2)->base + _si2_63613);
    // SubProg file_name_based_symindex_compare pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31560);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _fn2_63639 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _fn2_63639 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_fn2_63639)){
        _fn2_63639 = (object)DBL_PTR(_fn2_63639)->dbl;
    }
    _31560 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 107 op: STARTLINE (58)

    /** fwdref.e:954			if find(1,{fn1,fn2} > length(known_files) or {fn1,fn2} <= 0) then*/
    // SubProg file_name_based_symindex_compare pc: 109 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63634;
    ((intptr_t *)_2)[2] = _fn2_63639;
    _31562 = MAKE_SEQ(_1);
    // SubProg file_name_based_symindex_compare pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 115 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _31563 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _31563 = 1;
    }
    // SubProg file_name_based_symindex_compare pc: 118 op: GREATER (6)
    _31564 = binary_op(GREATER, _31562, _31563);
    DeRefDS(_31562);
    _31562 = NOVALUE;
    _31563 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 122 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn1_63634;
    ((intptr_t *)_2)[2] = _fn2_63639;
    _31565 = MAKE_SEQ(_1);
    // SubProg file_name_based_symindex_compare pc: 126 op: LESSEQ (5)
    _31566 = binary_op(LESSEQ, _31565, 0);
    DeRefDS(_31565);
    _31565 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 130 op: OR (9)
    _31567 = binary_op(OR, _31564, _31566);
    DeRefDS(_31564);
    _31564 = NOVALUE;
    DeRefDS(_31566);
    _31566 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 134 op: FIND_FROM (176)
    _31568 = find_from(1, _31567, 1);
    DeRefDS(_31567);
    _31567 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 139 op: IF (20)
    if (_31568 == 0)
    {
        _31568 = NOVALUE;
        goto L4; // [139] 149
    }
    else{
        _31568 = NOVALUE;
    }
    // SubProg file_name_based_symindex_compare pc: 142 op: STARTLINE (58)

    /** fwdref.e:956				return 1*/
    // SubProg file_name_based_symindex_compare pc: 144 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fn1_63634

// block var fn2_63639

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63612

// block var si2_63613
    _31555 = NOVALUE;
    _31551 = NOVALUE;
    DeRef(_31547);
    _31547 = NOVALUE;
    DeRef(_31553);
    _31553 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 148 op: NOP1 (159)
L4: // addr: 149 pc: 148 sub: 63610 op: 159
    // SubProg file_name_based_symindex_compare pc: 149 op: STARTLINE (58)

    /** fwdref.e:958			return compare(abbreviate_path(known_files[fn1]),*/
    // SubProg file_name_based_symindex_compare pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _31569 = (object)*(((s1_ptr)_2)->base + _fn1_63634);
    // SubProg file_name_based_symindex_compare pc: 157 op: PROC (27)
    Ref(_31569);
    RefDS(_21958);
    _31570 = _16abbreviate_path(_31569, _21958);
    _31569 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg file_name_based_symindex_compare pc: 164 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _31571 = (object)*(((s1_ptr)_2)->base + _fn2_63639);
    // SubProg file_name_based_symindex_compare pc: 168 op: PROC (27)
    Ref(_31571);
    RefDS(_21958);
    _31572 = _16abbreviate_path(_31571, _21958);
    _31571 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 173 op: COMPARE (76)
    if (IS_ATOM_INT(_31570) && IS_ATOM_INT(_31572)){
        _31573 = (_31570 < _31572) ? -1 : (_31570 > _31572);
    }
    else{
        _31573 = compare(_31570, _31572);
    }
    DeRef(_31570);
    _31570 = NOVALUE;
    DeRef(_31572);
    _31572 = NOVALUE;
    // SubProg file_name_based_symindex_compare pc: 177 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fn1_63634

// block var fn2_63639

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63612

// block var si2_63613
    _31555 = NOVALUE;
    _31551 = NOVALUE;
    DeRef(_31547);
    _31547 = NOVALUE;
    DeRef(_31553);
    _31553 = NOVALUE;
    return _31573;
    // SubProg file_name_based_symindex_compare pc: 181 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fn1_63634

// block var fn2_63639
    // SubProg file_name_based_symindex_compare pc: 183 op: ELSE (23)
    goto L5; // [183] 193
    // SubProg file_name_based_symindex_compare pc: 185 op: NOP1 (159)
L3: // addr: 186 pc: 185 sub: 63610 op: 159
    // SubProg file_name_based_symindex_compare pc: 186 op: STARTLINE (58)

    /** fwdref.e:961			return 1 -- put non-names last*/
    // SubProg file_name_based_symindex_compare pc: 188 op: RETURNF (28)

// Exiting block BLOCK: file_name_based_symindex_compare

// block var si1_63612

// block var si2_63613
    _31555 = NOVALUE;
    _31551 = NOVALUE;
    DeRef(_31547);
    _31547 = NOVALUE;
    DeRef(_31553);
    _31553 = NOVALUE;
    return 1;
    // SubProg file_name_based_symindex_compare pc: 192 op: NOP1 (159)
L5: // addr: 193 pc: 192 sub: 63610 op: 159
    // SubProg file_name_based_symindex_compare pc: 193 op: BADRETURNF (43)
    ;
}


void _30Resolve_forward_references(object _report_errors_63665)
{
    object _errors_63666 = NOVALUE;
    object _unincluded_ok_63667 = NOVALUE;
    object _msg_63728 = NOVALUE;
    object _errloc_63729 = NOVALUE;
    object _ref_63734 = NOVALUE;
    object _tok_63750 = NOVALUE;
    object _THIS_SCOPE_63752 = NOVALUE;
    object _THESE_GLOBALS_63753 = NOVALUE;
    object _syms_63811 = NOVALUE;
    object _s_63832 = NOVALUE;
    object _31707 = NOVALUE; // 63876 31707
    object _31706 = NOVALUE; // 63874 31706
    object _31705 = NOVALUE; // 63872 31705
// skipping _31703  name type: 0
    object _31702 = NOVALUE; // 63868 31702
// skipping _31701  name type: 0
// skipping _31700  name type: 0
// skipping _31699  name type: 0
// skipping _31698  name type: 0
    object _31697 = NOVALUE; // 63858 31697
// skipping _31696  name type: 0
// skipping _31695  name type: 0
    object _31694 = NOVALUE; // 63855 31694
// skipping _31693  name type: 0
    object _31692 = NOVALUE; // 63851 31692
    object _31691 = NOVALUE; // 63850 31691
    object _31690 = NOVALUE; // 63849 31690
    object _31689 = NOVALUE; // 63848 31689
    object _31688 = NOVALUE; // 63847 31688
    object _31687 = NOVALUE; // 63846 31687
    object _31686 = NOVALUE; // 63844 31686
    object _31684 = NOVALUE; // 63838 31684
    object _31683 = NOVALUE; // 63837 31683
    object _31682 = NOVALUE; // 63835 31682
// skipping _31681  name type: 0
    object _31680 = NOVALUE; // 63830 31680
// skipping _31679  name type: 0
    object _31678 = NOVALUE; // 63826 31678
    object _31677 = NOVALUE; // 63825 31677
    object _31676 = NOVALUE; // 63824 31676
    object _31675 = NOVALUE; // 63823 31675
    object _31674 = NOVALUE; // 63822 31674
    object _31673 = NOVALUE; // 63819 31673
// skipping _31671  name type: 0
    object _31670 = NOVALUE; // 63815 31670
// skipping _31668  name type: 0
// skipping _31667  name type: 0
    object _31666 = NOVALUE; // 63807 31666
    object _31665 = NOVALUE; // 63806 31665
    object _31664 = NOVALUE; // 63805 31664
    object _31663 = NOVALUE; // 63804 31663
    object _31662 = NOVALUE; // 63803 31662
    object _31661 = NOVALUE; // 63800 31661
// skipping _31659  name type: 0
    object _31658 = NOVALUE; // 63796 31658
    object _31657 = NOVALUE; // 63795 31657
    object _31656 = NOVALUE; // 63794 31656
    object _31655 = NOVALUE; // 63793 31655
    object _31654 = NOVALUE; // 63792 31654
    object _31653 = NOVALUE; // 63789 31653
// skipping _31651  name type: 0
    object _31650 = NOVALUE; // 63785 31650
    object _31649 = NOVALUE; // 63784 31649
    object _31648 = NOVALUE; // 63783 31648
    object _31647 = NOVALUE; // 63782 31647
    object _31646 = NOVALUE; // 63781 31646
    object _31645 = NOVALUE; // 63777 31645
    object _31644 = NOVALUE; // 63776 31644
    object _31643 = NOVALUE; // 63775 31643
    object _31642 = NOVALUE; // 63774 31642
    object _31641 = NOVALUE; // 63771 31641
// skipping _31639  name type: 0
    object _31638 = NOVALUE; // 63768 31638
// skipping _31637  name type: 0
    object _31636 = NOVALUE; // 63765 31636
    object _31633 = NOVALUE; // 63759 31633
// skipping _31632  name type: 0
    object _31631 = NOVALUE; // 63756 31631
// skipping _31630  name type: 0
    object _31629 = NOVALUE; // 63748 31629
    object _31628 = NOVALUE; // 63746 31628
// skipping _31627  name type: 0
    object _31626 = NOVALUE; // 63744 31626
    object _31625 = NOVALUE; // 63742 31625
    object _31624 = NOVALUE; // 63741 31624
    object _31623 = NOVALUE; // 63740 31623
    object _31622 = NOVALUE; // 63738 31622
// skipping _31621  name type: 0
    object _31620 = NOVALUE; // 63735 31620
    object _31619 = NOVALUE; // 63733 31619
    object _31617 = NOVALUE; // 63727 31617
    object _31616 = NOVALUE; // 63726 31616
// skipping _31615  name type: 0
    object _31614 = NOVALUE; // 63723 31614
    object _31613 = NOVALUE; // 63722 31613
// skipping _31612  name type: 0
    object _31611 = NOVALUE; // 63720 31611
    object _31610 = NOVALUE; // 63719 31610
    object _31609 = NOVALUE; // 63718 31609
    object _31608 = NOVALUE; // 63717 31608
    object _31607 = NOVALUE; // 63716 31607
    object _31606 = NOVALUE; // 63713 31606
    object _31605 = NOVALUE; // 63712 31605
    object _31604 = NOVALUE; // 63710 31604
    object _31603 = NOVALUE; // 63709 31603
    object _31602 = NOVALUE; // 63707 31602
    object _31601 = NOVALUE; // 63706 31601
    object _31600 = NOVALUE; // 63705 31600
    object _31599 = NOVALUE; // 63704 31599
    object _31598 = NOVALUE; // 63703 31598
    object _31597 = NOVALUE; // 63702 31597
    object _31596 = NOVALUE; // 63700 31596
// skipping _31595  name type: 0
    object _31594 = NOVALUE; // 63696 31594
    object _31593 = NOVALUE; // 63695 31593
    object _31592 = NOVALUE; // 63694 31592
    object _31591 = NOVALUE; // 63693 31591
// skipping _31590  name type: 0
    object _31589 = NOVALUE; // 63690 31589
    object _31588 = NOVALUE; // 63688 31588
// skipping _31587  name type: 0
    object _31586 = NOVALUE; // 63685 31586
    object _31585 = NOVALUE; // 63684 31585
    object _31584 = NOVALUE; // 63683 31584
    object _31583 = NOVALUE; // 63682 31583
// skipping _31582  name type: 0
    object _31581 = NOVALUE; // 63679 31581
    object _31580 = NOVALUE; // 63678 31580
    object _31579 = NOVALUE; // 63677 31579
    object _31578 = NOVALUE; // 63676 31578
// skipping _31577  name type: 0
    object _31576 = NOVALUE; // 63673 31576
    object _31575 = NOVALUE; // 63671 31575
// skipping _31574  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Resolve_forward_references pc: 1 op: INTEGER_CHECK (96)
    // SubProg Resolve_forward_references pc: 3 op: STARTLINE (58)

    /** fwdref.e:966		sequence errors = {}*/
    // SubProg Resolve_forward_references pc: 5 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_errors_63666);
    _errors_63666 = _21958;
    // SubProg Resolve_forward_references pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 10 op: STARTLINE (58)

    /** fwdref.e:967		integer unincluded_ok = get_resolve_unincluded_globals()*/
    // SubProg Resolve_forward_references pc: 12 op: PROC (27)
    _unincluded_ok_63667 = _53get_resolve_unincluded_globals();
    // SubProg Resolve_forward_references pc: 15 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_unincluded_ok_63667)) {
        _1 = (object)(DBL_PTR(_unincluded_ok_63667)->dbl);
        DeRefDS(_unincluded_ok_63667);
        _unincluded_ok_63667 = _1;
    }
    // SubProg Resolve_forward_references pc: 17 op: STARTLINE (58)

    /** fwdref.e:969		if length( active_references ) < length( known_files ) then*/
    // SubProg Resolve_forward_references pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_references_62232)){
            _31575 = SEQ_PTR(_30active_references_62232)->length;
    }
    else {
        _31575 = 1;
    }
    // SubProg Resolve_forward_references pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 26 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _31576 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _31576 = 1;
    }
    // SubProg Resolve_forward_references pc: 29 op: LESS_IFW_I (119)
    if (_31575 >= _31576)
    goto L1; // [29] 86
    // SubProg Resolve_forward_references pc: 33 op: STARTLINE (58)

    /** fwdref.e:970			active_references &= repeat( {}, length( known_files ) - length( active_references ) )*/
    // SubProg Resolve_forward_references pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 39 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _31578 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _31578 = 1;
    }
    // SubProg Resolve_forward_references pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 44 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_references_62232)){
            _31579 = SEQ_PTR(_30active_references_62232)->length;
    }
    else {
        _31579 = 1;
    }
    // SubProg Resolve_forward_references pc: 47 op: MINUS (10)
    _31580 = _31578 - _31579;
    _31578 = NOVALUE;
    _31579 = NOVALUE;
    // SubProg Resolve_forward_references pc: 51 op: REPEAT (32)
    _31581 = Repeat(_21958, _31580);
    _31580 = NOVALUE;
    // SubProg Resolve_forward_references pc: 55 op: CONCAT (15)
    Concat((object_ptr)&_30active_references_62232, _30active_references_62232, _31581);
    DeRefDS(_31581);
    _31581 = NOVALUE;
    // SubProg Resolve_forward_references pc: 59 op: STARTLINE (58)

    /** fwdref.e:971			active_subprogs   &= repeat( {}, length( known_files ) - length( active_subprogs ) )*/
    // SubProg Resolve_forward_references pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _31583 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _31583 = 1;
    }
    // SubProg Resolve_forward_references pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 70 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_subprogs_62231)){
            _31584 = SEQ_PTR(_30active_subprogs_62231)->length;
    }
    else {
        _31584 = 1;
    }
    // SubProg Resolve_forward_references pc: 73 op: MINUS (10)
    _31585 = _31583 - _31584;
    _31583 = NOVALUE;
    _31584 = NOVALUE;
    // SubProg Resolve_forward_references pc: 77 op: REPEAT (32)
    _31586 = Repeat(_21958, _31585);
    _31585 = NOVALUE;
    // SubProg Resolve_forward_references pc: 81 op: CONCAT (15)
    Concat((object_ptr)&_30active_subprogs_62231, _30active_subprogs_62231, _31586);
    DeRefDS(_31586);
    _31586 = NOVALUE;
    // SubProg Resolve_forward_references pc: 85 op: NOP1 (159)
L1: // addr: 86 pc: 85 sub: 63663 op: 159
    // SubProg Resolve_forward_references pc: 86 op: STARTLINE (58)

    /** fwdref.e:974		if length( toplevel_references ) < length( known_files ) then*/
    // SubProg Resolve_forward_references pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_30toplevel_references_62233)){
            _31588 = SEQ_PTR(_30toplevel_references_62233)->length;
    }
    else {
        _31588 = 1;
    }
    // SubProg Resolve_forward_references pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _31589 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _31589 = 1;
    }
    // SubProg Resolve_forward_references pc: 98 op: LESS_IFW_I (119)
    if (_31588 >= _31589)
    goto L2; // [98] 129
    // SubProg Resolve_forward_references pc: 102 op: STARTLINE (58)

    /** fwdref.e:975			toplevel_references &= repeat( {}, length( known_files ) - length( toplevel_references ) )*/
    // SubProg Resolve_forward_references pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 108 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _31591 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _31591 = 1;
    }
    // SubProg Resolve_forward_references pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_30toplevel_references_62233)){
            _31592 = SEQ_PTR(_30toplevel_references_62233)->length;
    }
    else {
        _31592 = 1;
    }
    // SubProg Resolve_forward_references pc: 116 op: MINUS (10)
    _31593 = _31591 - _31592;
    _31591 = NOVALUE;
    _31592 = NOVALUE;
    // SubProg Resolve_forward_references pc: 120 op: REPEAT (32)
    _31594 = Repeat(_21958, _31593);
    _31593 = NOVALUE;
    // SubProg Resolve_forward_references pc: 124 op: CONCAT (15)
    Concat((object_ptr)&_30toplevel_references_62233, _30toplevel_references_62233, _31594);
    DeRefDS(_31594);
    _31594 = NOVALUE;
    // SubProg Resolve_forward_references pc: 128 op: NOP1 (159)
L2: // addr: 129 pc: 128 sub: 63663 op: 159
    // SubProg Resolve_forward_references pc: 129 op: STARTLINE (58)

    /** fwdref.e:978		for i = 1 to length( active_subprogs ) do*/
    // SubProg Resolve_forward_references pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 133 op: LENGTH (42)
    if (IS_SEQUENCE(_30active_subprogs_62231)){
            _31596 = SEQ_PTR(_30active_subprogs_62231)->length;
    }
    else {
        _31596 = 1;
    }
    // SubProg Resolve_forward_references pc: 136 op: FOR_I (125)
    {
        object _i_63699;
        _i_63699 = 1;
L3: // addr: 143 pc: 136 sub: 63663 op: 125
        if (_i_63699 > _31596){
            goto L4; // [136] 280
        }
        // SubProg Resolve_forward_references pc: 143 op: STARTLINE (58)

        /** fwdref.e:979			if (length( active_subprogs[i] ) or length(toplevel_references[i])) */
        // SubProg Resolve_forward_references pc: 145 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 147 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30active_subprogs_62231);
        _31597 = (object)*(((s1_ptr)_2)->base + _i_63699);
        // SubProg Resolve_forward_references pc: 151 op: LENGTH (42)
        if (IS_SEQUENCE(_31597)){
                _31598 = SEQ_PTR(_31597)->length;
        }
        else {
            _31598 = 1;
        }
        _31597 = NOVALUE;
        // SubProg Resolve_forward_references pc: 154 op: SC1_OR (143)
        if (_31598 != 0) {
            _31599 = 1;
            goto L5; // [154] 171
        }
        // SubProg Resolve_forward_references pc: 158 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 160 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30toplevel_references_62233);
        _31600 = (object)*(((s1_ptr)_2)->base + _i_63699);
        // SubProg Resolve_forward_references pc: 164 op: LENGTH (42)
        if (IS_SEQUENCE(_31600)){
                _31601 = SEQ_PTR(_31600)->length;
        }
        else {
            _31601 = 1;
        }
        _31600 = NOVALUE;
        // SubProg Resolve_forward_references pc: 167 op: SC2_OR (144)
        _31599 = (_31601 != 0);
        // SubProg Resolve_forward_references pc: 170 op: NOP1 (159)
L5: // addr: 171 pc: 170 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 171 op: SC1_AND_IF (146)
        if (_31599 == 0) {
            goto L6; // [171] 273
        }
        // SubProg Resolve_forward_references pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 177 op: EQUALS (3)
        _31603 = (_i_63699 == _5current_file_no_12477);
        // SubProg Resolve_forward_references pc: 181 op: SC1_OR (143)
        if (_31603 != 0) {
            _31604 = 1;
            goto L7; // [181] 195
        }
        // SubProg Resolve_forward_references pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 187 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7finished_files_11392);
        _31605 = (object)*(((s1_ptr)_2)->base + _i_63699);
        // SubProg Resolve_forward_references pc: 191 op: SC2_OR (144)
        _31604 = (_31605 != 0);
        // SubProg Resolve_forward_references pc: 194 op: NOP1 (159)
L7: // addr: 195 pc: 194 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 195 op: SC1_OR (143)
        if (_31604 != 0) {
            DeRef(_31606);
            _31606 = 1;
            goto L8; // [195] 203
        }
        // SubProg Resolve_forward_references pc: 199 op: SC2_OR (144)
        _31606 = (_unincluded_ok_63667 != 0);
        // SubProg Resolve_forward_references pc: 202 op: NOP1 (159)
L8: // addr: 203 pc: 202 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 203 op: NOP1 (159)
        // SubProg Resolve_forward_references pc: 204 op: IF (20)
        if (_31606 == 0)
        {
            _31606 = NOVALUE;
            goto L6; // [204] 273
        }
        else{
            _31606 = NOVALUE;
        }
        // SubProg Resolve_forward_references pc: 207 op: STARTLINE (58)

        /** fwdref.e:982				for j = length( active_references[i] ) to 1 by -1 do*/
        // SubProg Resolve_forward_references pc: 209 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 211 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30active_references_62232);
        _31607 = (object)*(((s1_ptr)_2)->base + _i_63699);
        // SubProg Resolve_forward_references pc: 215 op: LENGTH (42)
        if (IS_SEQUENCE(_31607)){
                _31608 = SEQ_PTR(_31607)->length;
        }
        else {
            _31608 = 1;
        }
        _31607 = NOVALUE;
        // SubProg Resolve_forward_references pc: 218 op: FOR_I (125)
        {
            object _j_63715;
            _j_63715 = _31608;
L9: // addr: 225 pc: 218 sub: 63663 op: 125
            if (_j_63715 < 1){
                goto LA; // [218] 254
            }
            // SubProg Resolve_forward_references pc: 225 op: STARTLINE (58)

            /** fwdref.e:983					errors &= resolve_file( active_references[i][j], report_errors, unincluded_ok )*/
            // SubProg Resolve_forward_references pc: 227 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 229 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_30active_references_62232);
            _31609 = (object)*(((s1_ptr)_2)->base + _i_63699);
            // SubProg Resolve_forward_references pc: 233 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_31609);
            _31610 = (object)*(((s1_ptr)_2)->base + _j_63715);
            _31609 = NOVALUE;
            // SubProg Resolve_forward_references pc: 237 op: PROC (27)
            Ref(_31610);
            _31611 = _30resolve_file(_31610, _report_errors_63665, _unincluded_ok_63667);
            _31610 = NOVALUE;
            // SubProg Resolve_forward_references pc: 243 op: CONCAT (15)
            if (IS_SEQUENCE(_errors_63666) && IS_ATOM(_31611)) {
                Ref(_31611);
                Append(&_errors_63666, _errors_63666, _31611);
            }
            else if (IS_ATOM(_errors_63666) && IS_SEQUENCE(_31611)) {
            }
            else {
                Concat((object_ptr)&_errors_63666, _errors_63666, _31611);
            }
            DeRef(_31611);
            _31611 = NOVALUE;
            // SubProg Resolve_forward_references pc: 247 op: STARTLINE (58)

            /** fwdref.e:984				end for*/
            // SubProg Resolve_forward_references pc: 249 op: ENDFOR_GENERAL (39)
            _j_63715 = _j_63715 + -1;
            goto L9; // [249] 225
LA: // addr: 254 pc: 249 sub: 63663 op: 39
            ;
        }
        // SubProg Resolve_forward_references pc: 254 op: STARTLINE (58)

        /** fwdref.e:985				errors &= resolve_file( toplevel_references[i], report_errors, unincluded_ok )*/
        // SubProg Resolve_forward_references pc: 256 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 258 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30toplevel_references_62233);
        _31613 = (object)*(((s1_ptr)_2)->base + _i_63699);
        // SubProg Resolve_forward_references pc: 262 op: PROC (27)
        Ref(_31613);
        _31614 = _30resolve_file(_31613, _report_errors_63665, _unincluded_ok_63667);
        _31613 = NOVALUE;
        // SubProg Resolve_forward_references pc: 268 op: CONCAT (15)
        if (IS_SEQUENCE(_errors_63666) && IS_ATOM(_31614)) {
            Ref(_31614);
            Append(&_errors_63666, _errors_63666, _31614);
        }
        else if (IS_ATOM(_errors_63666) && IS_SEQUENCE(_31614)) {
        }
        else {
            Concat((object_ptr)&_errors_63666, _errors_63666, _31614);
        }
        DeRef(_31614);
        _31614 = NOVALUE;
        // SubProg Resolve_forward_references pc: 272 op: NOP1 (159)
L6: // addr: 273 pc: 272 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 273 op: STARTLINE (58)

        /** fwdref.e:987		end for*/
        // SubProg Resolve_forward_references pc: 275 op: ENDFOR_INT_UP1 (54)
        _i_63699 = _i_63699 + 1;
        goto L3; // [275] 143
L4: // addr: 280 pc: 275 sub: 63663 op: 54
        ;
    }
    // SubProg Resolve_forward_references pc: 280 op: STARTLINE (58)

    /** fwdref.e:989		if report_errors and length( errors ) then*/
    // SubProg Resolve_forward_references pc: 282 op: SC1_AND_IF (146)
    if (_report_errors_63665 == 0) {
        goto LB; // [282] 854
    }
    // SubProg Resolve_forward_references pc: 286 op: LENGTH (42)
    if (IS_SEQUENCE(_errors_63666)){
            _31617 = SEQ_PTR(_errors_63666)->length;
    }
    else {
        _31617 = 1;
    }
    // SubProg Resolve_forward_references pc: 289 op: NOP1 (159)
    // SubProg Resolve_forward_references pc: 290 op: IF (20)
    if (_31617 == 0)
    {
        _31617 = NOVALUE;
        goto LB; // [290] 854
    }
    else{
        _31617 = NOVALUE;
    }
    // SubProg Resolve_forward_references pc: 293 op: STARTLINE (58)

    /** fwdref.e:990			sequence msg = ""*/
    // SubProg Resolve_forward_references pc: 295 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_msg_63728);
    _msg_63728 = _21958;
    // SubProg Resolve_forward_references pc: 298 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 300 op: STARTLINE (58)

    /** fwdref.e:991			sequence errloc = "Internal Error - Unknown Error Message"*/
    // SubProg Resolve_forward_references pc: 302 op: ASSIGN (18)
    RefDS(_31618);
    DeRefi(_errloc_63729);
    _errloc_63729 = _31618;
    // SubProg Resolve_forward_references pc: 305 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 307 op: STARTLINE (58)

    /** fwdref.e:993			for e = length(errors) to 1 by -1 do*/
    // SubProg Resolve_forward_references pc: 309 op: LENGTH (42)
    if (IS_SEQUENCE(_errors_63666)){
            _31619 = SEQ_PTR(_errors_63666)->length;
    }
    else {
        _31619 = 1;
    }
    // SubProg Resolve_forward_references pc: 312 op: FOR_I (125)
    {
        object _e_63732;
        _e_63732 = _31619;
LC: // addr: 319 pc: 312 sub: 63663 op: 125
        if (_e_63732 < 1){
            goto LD; // [312] 828
        }
        // SubProg Resolve_forward_references pc: 319 op: STARTLINE (58)

        /** fwdref.e:994				sequence ref = forward_references[errors[e]]*/
        // SubProg Resolve_forward_references pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 323 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_errors_63666);
        _31620 = (object)*(((s1_ptr)_2)->base + _e_63732);
        // SubProg Resolve_forward_references pc: 327 op: RHS_SUBS (25)
        DeRef(_ref_63734);
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!IS_ATOM_INT(_31620)){
            _ref_63734 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31620)->dbl));
        }
        else{
            _ref_63734 = (object)*(((s1_ptr)_2)->base + _31620);
        }
        Ref(_ref_63734);
        // SubProg Resolve_forward_references pc: 331 op: SEQUENCE_CHECK (97)
        // SubProg Resolve_forward_references pc: 333 op: STARTLINE (58)

        /** fwdref.e:995				if (ref[FR_TYPE] = TYPE_CHECK and ref[FR_OP] = TYPE_CHECK) or ref[FR_TYPE] = GLOBAL_INIT_CHECK then*/
        // SubProg Resolve_forward_references pc: 335 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63734);
        _31622 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 341 op: EQUALS (3)
        if (IS_ATOM_INT(_31622)) {
            _31623 = (_31622 == 65);
        }
        else {
            _31623 = binary_op(EQUALS, _31622, 65);
        }
        _31622 = NOVALUE;
        // SubProg Resolve_forward_references pc: 345 op: SC1_AND (141)
        if (IS_ATOM_INT(_31623)) {
            if (_31623 == 0) {
                DeRef(_31624);
                _31624 = 0;
                goto LE; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_31623)->dbl == 0.0) {
                DeRef(_31624);
                _31624 = 0;
                goto LE; // [345] 363
            }
        }
        // SubProg Resolve_forward_references pc: 349 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63734);
        _31625 = (object)*(((s1_ptr)_2)->base + 10);
        // SubProg Resolve_forward_references pc: 353 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 355 op: EQUALS (3)
        if (IS_ATOM_INT(_31625)) {
            _31626 = (_31625 == 65);
        }
        else {
            _31626 = binary_op(EQUALS, _31625, 65);
        }
        _31625 = NOVALUE;
        // SubProg Resolve_forward_references pc: 359 op: SC2_AND (142)
        DeRef(_31624);
        if (IS_ATOM_INT(_31626))
        _31624 = (_31626 != 0);
        else
        _31624 = DBL_PTR(_31626)->dbl != 0.0;
        // SubProg Resolve_forward_references pc: 362 op: NOP1 (159)
LE: // addr: 363 pc: 362 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 363 op: SC1_OR_IF (147)
        if (_31624 != 0) {
            goto LF; // [363] 382
        }
        // SubProg Resolve_forward_references pc: 367 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63734);
        _31628 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 371 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 373 op: EQUALS (3)
        if (IS_ATOM_INT(_31628)) {
            _31629 = (_31628 == 109);
        }
        else {
            _31629 = binary_op(EQUALS, _31628, 109);
        }
        _31628 = NOVALUE;
        // SubProg Resolve_forward_references pc: 377 op: NOP1 (159)
        // SubProg Resolve_forward_references pc: 378 op: IF (20)
        if (_31629 == 0) {
            DeRef(_31629);
            _31629 = NOVALUE;
            goto L10; // [378] 391
        }
        else {
            if (!IS_ATOM_INT(_31629) && DBL_PTR(_31629)->dbl == 0.0){
                DeRef(_31629);
                _31629 = NOVALUE;
                goto L10; // [378] 391
            }
            DeRef(_31629);
            _31629 = NOVALUE;
        }
        DeRef(_31629);
        _31629 = NOVALUE;
        // SubProg Resolve_forward_references pc: 381 op: NOP1 (159)
LF: // addr: 382 pc: 381 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 382 op: STARTLINE (58)

        /** fwdref.e:997					continue*/
        // SubProg Resolve_forward_references pc: 384 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ref_63734
        DeRef(_ref_63734);
        _ref_63734 = NOVALUE;
        // SubProg Resolve_forward_references pc: 386 op: ELSE (23)
        goto L11; // [386] 823
        // SubProg Resolve_forward_references pc: 388 op: ELSE (23)
        goto L12; // [388] 789
        // SubProg Resolve_forward_references pc: 390 op: NOP1 (159)
L10: // addr: 391 pc: 390 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 391 op: STARTLINE (58)

        /** fwdref.e:1001					object tok = find_reference(ref)*/
        // SubProg Resolve_forward_references pc: 393 op: PROC (27)
        RefDS(_ref_63734);
        _0 = _tok_63750;
        _tok_63750 = _30find_reference(_ref_63734);
        DeRef(_0);
        // SubProg Resolve_forward_references pc: 397 op: STARTLINE (58)

        /** fwdref.e:1002					integer THIS_SCOPE = 3*/
        // SubProg Resolve_forward_references pc: 399 op: ASSIGN_I (113)
        _THIS_SCOPE_63752 = 3;
        // SubProg Resolve_forward_references pc: 402 op: STARTLINE (58)

        /** fwdref.e:1003					integer THESE_GLOBALS = 4*/
        // SubProg Resolve_forward_references pc: 404 op: ASSIGN_I (113)
        _THESE_GLOBALS_63753 = 4;
        // SubProg Resolve_forward_references pc: 407 op: STARTLINE (58)

        /** fwdref.e:1004					if tok[T_ID] = IGNORED then*/
        // SubProg Resolve_forward_references pc: 409 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 411 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63750);
        _31631 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg Resolve_forward_references pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg Resolve_forward_references pc: 417 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31631, 509)){
            _31631 = NOVALUE;
            goto L13; // [417] 760
        }
        _31631 = NOVALUE;
        // SubProg Resolve_forward_references pc: 421 op: STARTLINE (58)

        /** fwdref.e:1006						switch tok[THIS_SCOPE] do*/
        // SubProg Resolve_forward_references pc: 423 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_tok_63750);
        _31633 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg Resolve_forward_references pc: 427 op: SWITCH_I (193)
        if (IS_SEQUENCE(_31633) ){
            goto L14; // [427] 756
        }
        if(!IS_ATOM_INT(_31633)){
            if( (DBL_PTR(_31633)->dbl != (eudouble) ((object) DBL_PTR(_31633)->dbl) ) ){
                goto L14; // [427] 756
            }
            _0 = (object) DBL_PTR(_31633)->dbl;
        }
        else {
            _0 = _31633;
        };
        _31633 = NOVALUE;
        switch ( _0 ){ 
            // SubProg Resolve_forward_references pc: 432 op: STARTLINE (58)

            /** fwdref.e:1007							case SC_UNDEFINED then*/
            // SubProg Resolve_forward_references pc: 434 op: CASE (186)
            case 9:
            // SubProg Resolve_forward_references pc: 436 op: STARTLINE (58)

            /** fwdref.e:1008								if ref[FR_QUALIFIED] != -1 then*/
            // SubProg Resolve_forward_references pc: 438 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31636 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 442 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _31636, -1)){
                _31636 = NOVALUE;
                goto L15; // [442] 556
            }
            _31636 = NOVALUE;
            // SubProg Resolve_forward_references pc: 446 op: STARTLINE (58)

            /** fwdref.e:1009									if ref[FR_QUALIFIED] > 0 then*/
            // SubProg Resolve_forward_references pc: 448 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31638 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 452 op: GREATER_IFW (107)
            if (binary_op_a(LESSEQ, _31638, 0)){
                _31638 = NOVALUE;
                goto L16; // [452] 517
            }
            _31638 = NOVALUE;
            // SubProg Resolve_forward_references pc: 456 op: STARTLINE (58)

            /** fwdref.e:1011										errloc = sprintf("\t\'%s\' (%s:%d) was not declared in \'%s\'.\n", */
            // SubProg Resolve_forward_references pc: 458 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31641 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 462 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 464 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31642 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 468 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7known_files_11390);
            if (!IS_ATOM_INT(_31642)){
                _31643 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31642)->dbl));
            }
            else{
                _31643 = (object)*(((s1_ptr)_2)->base + _31642);
            }
            // SubProg Resolve_forward_references pc: 472 op: PROC (27)
            Ref(_31643);
            RefDS(_21958);
            _31644 = _16abbreviate_path(_31643, _21958);
            _31643 = NOVALUE;
            // SubProg Resolve_forward_references pc: 477 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31645 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 481 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 483 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31646 = (object)*(((s1_ptr)_2)->base + 9);
            // SubProg Resolve_forward_references pc: 487 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7known_files_11390);
            if (!IS_ATOM_INT(_31646)){
                _31647 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31646)->dbl));
            }
            else{
                _31647 = (object)*(((s1_ptr)_2)->base + _31646);
            }
            // SubProg Resolve_forward_references pc: 491 op: PROC (27)
            Ref(_31647);
            RefDS(_21958);
            _31648 = _16abbreviate_path(_31647, _21958);
            _31647 = NOVALUE;
            // SubProg Resolve_forward_references pc: 496 op: PROC (27)
            _31649 = _22find_replace(92, _31648, 47, 0);
            _31648 = NOVALUE;
            // SubProg Resolve_forward_references pc: 503 op: RIGHT_BRACE_N (31)
            _1 = NewS1(4);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31641);
            ((intptr_t*)_2)[1] = _31641;
            ((intptr_t*)_2)[2] = _31644;
            Ref(_31645);
            ((intptr_t*)_2)[3] = _31645;
            ((intptr_t*)_2)[4] = _31649;
            _31650 = MAKE_SEQ(_1);
            _31649 = NOVALUE;
            _31645 = NOVALUE;
            _31644 = NOVALUE;
            _31641 = NOVALUE;
            // SubProg Resolve_forward_references pc: 510 op: SPRINTF (53)
            DeRefi(_errloc_63729);
            _errloc_63729 = EPrintf(-9999999, _31640, _31650);
            DeRefDS(_31650);
            _31650 = NOVALUE;
            // SubProg Resolve_forward_references pc: 514 op: ELSE (23)
            goto L17; // [514] 759
            // SubProg Resolve_forward_references pc: 516 op: NOP1 (159)
L16: // addr: 517 pc: 516 sub: 63663 op: 159
            // SubProg Resolve_forward_references pc: 517 op: STARTLINE (58)

            /** fwdref.e:1016										errloc = sprintf("\t\'%s\' (%s:%d) is not a builtin.\n", */
            // SubProg Resolve_forward_references pc: 519 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31653 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 523 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 525 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31654 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 529 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7known_files_11390);
            if (!IS_ATOM_INT(_31654)){
                _31655 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31654)->dbl));
            }
            else{
                _31655 = (object)*(((s1_ptr)_2)->base + _31654);
            }
            // SubProg Resolve_forward_references pc: 533 op: PROC (27)
            Ref(_31655);
            RefDS(_21958);
            _31656 = _16abbreviate_path(_31655, _21958);
            _31655 = NOVALUE;
            // SubProg Resolve_forward_references pc: 538 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31657 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 542 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31653);
            ((intptr_t*)_2)[1] = _31653;
            ((intptr_t*)_2)[2] = _31656;
            Ref(_31657);
            ((intptr_t*)_2)[3] = _31657;
            _31658 = MAKE_SEQ(_1);
            _31657 = NOVALUE;
            _31656 = NOVALUE;
            _31653 = NOVALUE;
            // SubProg Resolve_forward_references pc: 548 op: SPRINTF (53)
            DeRefi(_errloc_63729);
            _errloc_63729 = EPrintf(-9999999, _31652, _31658);
            DeRefDS(_31658);
            _31658 = NOVALUE;
            // SubProg Resolve_forward_references pc: 552 op: NOP1 (159)
            // SubProg Resolve_forward_references pc: 553 op: ELSE (23)
            goto L17; // [553] 759
            // SubProg Resolve_forward_references pc: 555 op: NOP1 (159)
L15: // addr: 556 pc: 555 sub: 63663 op: 159
            // SubProg Resolve_forward_references pc: 556 op: STARTLINE (58)

            /** fwdref.e:1021									errloc = sprintf("\t\'%s\' (%s:%d) has not been declared.\n", */
            // SubProg Resolve_forward_references pc: 558 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31661 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 562 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 564 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31662 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 568 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7known_files_11390);
            if (!IS_ATOM_INT(_31662)){
                _31663 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31662)->dbl));
            }
            else{
                _31663 = (object)*(((s1_ptr)_2)->base + _31662);
            }
            // SubProg Resolve_forward_references pc: 572 op: PROC (27)
            Ref(_31663);
            RefDS(_21958);
            _31664 = _16abbreviate_path(_31663, _21958);
            _31663 = NOVALUE;
            // SubProg Resolve_forward_references pc: 577 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31665 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 581 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31661);
            ((intptr_t*)_2)[1] = _31661;
            ((intptr_t*)_2)[2] = _31664;
            Ref(_31665);
            ((intptr_t*)_2)[3] = _31665;
            _31666 = MAKE_SEQ(_1);
            _31665 = NOVALUE;
            _31664 = NOVALUE;
            _31661 = NOVALUE;
            // SubProg Resolve_forward_references pc: 587 op: SPRINTF (53)
            DeRefi(_errloc_63729);
            _errloc_63729 = EPrintf(-9999999, _31660, _31666);
            DeRefDS(_31666);
            _31666 = NOVALUE;
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
            DeRef(_syms_63811);
            _2 = (object)SEQ_PTR(_tok_63750);
            _syms_63811 = (object)*(((s1_ptr)_2)->base + _THESE_GLOBALS_63753);
            Ref(_syms_63811);
            // SubProg Resolve_forward_references pc: 604 op: SEQUENCE_CHECK (97)
            // SubProg Resolve_forward_references pc: 606 op: STARTLINE (58)

            /** fwdref.e:1026								syms = custom_sort(routine_id("file_name_based_symindex_compare"), syms,, ASCENDING)*/
            // SubProg Resolve_forward_references pc: 608 op: ROUTINE_ID (134)
            _31670 = CRoutineId(1389, 30, _31669);
            // SubProg Resolve_forward_references pc: 613 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 615 op: PROC (27)
            RefDS(_syms_63811);
            RefDS(_21958);
            _0 = _syms_63811;
            _syms_63811 = _25custom_sort(_31670, _syms_63811, _21958, 1);
            DeRefDS(_0);
            _31670 = NOVALUE;
            // SubProg Resolve_forward_references pc: 622 op: SEQUENCE_CHECK (97)
            // SubProg Resolve_forward_references pc: 624 op: STARTLINE (58)

            /** fwdref.e:1027								errloc = sprintf("\t\'%s\' (%s:%d) has been declared more than once.\n", */
            // SubProg Resolve_forward_references pc: 626 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31673 = (object)*(((s1_ptr)_2)->base + 2);
            // SubProg Resolve_forward_references pc: 630 op: GLOBAL_INIT_CHECK (109)
            // SubProg Resolve_forward_references pc: 632 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31674 = (object)*(((s1_ptr)_2)->base + 3);
            // SubProg Resolve_forward_references pc: 636 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7known_files_11390);
            if (!IS_ATOM_INT(_31674)){
                _31675 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31674)->dbl));
            }
            else{
                _31675 = (object)*(((s1_ptr)_2)->base + _31674);
            }
            // SubProg Resolve_forward_references pc: 640 op: PROC (27)
            Ref(_31675);
            RefDS(_21958);
            _31676 = _16abbreviate_path(_31675, _21958);
            _31675 = NOVALUE;
            // SubProg Resolve_forward_references pc: 645 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_ref_63734);
            _31677 = (object)*(((s1_ptr)_2)->base + 6);
            // SubProg Resolve_forward_references pc: 649 op: RIGHT_BRACE_N (31)
            _1 = NewS1(3);
            _2 = (object)((s1_ptr)_1)->base;
            Ref(_31673);
            ((intptr_t*)_2)[1] = _31673;
            ((intptr_t*)_2)[2] = _31676;
            Ref(_31677);
            ((intptr_t*)_2)[3] = _31677;
            _31678 = MAKE_SEQ(_1);
            _31677 = NOVALUE;
            _31676 = NOVALUE;
            _31673 = NOVALUE;
            // SubProg Resolve_forward_references pc: 655 op: SPRINTF (53)
            DeRefi(_errloc_63729);
            _errloc_63729 = EPrintf(-9999999, _31672, _31678);
            DeRefDS(_31678);
            _31678 = NOVALUE;
            // SubProg Resolve_forward_references pc: 659 op: STARTLINE (58)

            /** fwdref.e:1029								for si = 1 to length(syms) do*/
            // SubProg Resolve_forward_references pc: 661 op: LENGTH (42)
            if (IS_SEQUENCE(_syms_63811)){
                    _31680 = SEQ_PTR(_syms_63811)->length;
            }
            else {
                _31680 = 1;
            }
            // SubProg Resolve_forward_references pc: 664 op: FOR_I (125)
            {
                object _si_63829;
                _si_63829 = 1;
L18: // addr: 671 pc: 664 sub: 63663 op: 125
                if (_si_63829 > _31680){
                    goto L19; // [664] 750
                }
                // SubProg Resolve_forward_references pc: 671 op: STARTLINE (58)

                /** fwdref.e:1030									symtab_index s = syms[si] */
                // SubProg Resolve_forward_references pc: 673 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_syms_63811);
                _s_63832 = (object)*(((s1_ptr)_2)->base + _si_63829);
                if (!IS_ATOM_INT(_s_63832)){
                    _s_63832 = (object)DBL_PTR(_s_63832)->dbl;
                }
                // SubProg Resolve_forward_references pc: 679 op: STARTLINE (58)

                /** fwdref.e:1031									if equal(ref[FR_NAME], sym_name(s)) then*/
                // SubProg Resolve_forward_references pc: 681 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_ref_63734);
                _31682 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg Resolve_forward_references pc: 685 op: PROC (27)
                _31683 = _53sym_name(_s_63832);
                // SubProg Resolve_forward_references pc: 689 op: EQUAL (153)
                if (_31682 == _31683)
                _31684 = 1;
                else if (IS_ATOM_INT(_31682) && IS_ATOM_INT(_31683))
                _31684 = 0;
                else
                _31684 = (compare(_31682, _31683) == 0);
                _31682 = NOVALUE;
                DeRef(_31683);
                _31683 = NOVALUE;
                // SubProg Resolve_forward_references pc: 693 op: IF (20)
                if (_31684 == 0)
                {
                    _31684 = NOVALUE;
                    goto L1A; // [693] 741
                }
                else{
                    _31684 = NOVALUE;
                }
                // SubProg Resolve_forward_references pc: 696 op: STARTLINE (58)

                /** fwdref.e:1032										errloc &= sprintf("\t\tin %s\n", */
                // SubProg Resolve_forward_references pc: 698 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 700 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 702 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _31686 = (object)*(((s1_ptr)_2)->base + _s_63832);
                // SubProg Resolve_forward_references pc: 706 op: GLOBAL_INIT_CHECK (109)
                // SubProg Resolve_forward_references pc: 708 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_31686);
                if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
                    _31687 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
                }
                else{
                    _31687 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
                }
                _31686 = NOVALUE;
                // SubProg Resolve_forward_references pc: 712 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7known_files_11390);
                if (!IS_ATOM_INT(_31687)){
                    _31688 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31687)->dbl));
                }
                else{
                    _31688 = (object)*(((s1_ptr)_2)->base + _31687);
                }
                // SubProg Resolve_forward_references pc: 716 op: PROC (27)
                Ref(_31688);
                RefDS(_21958);
                _31689 = _16abbreviate_path(_31688, _21958);
                _31688 = NOVALUE;
                // SubProg Resolve_forward_references pc: 721 op: PROC (27)
                _31690 = _22find_replace(92, _31689, 47, 0);
                _31689 = NOVALUE;
                // SubProg Resolve_forward_references pc: 728 op: RIGHT_BRACE_N (31)
                _1 = NewS1(1);
                _2 = (object)((s1_ptr)_1)->base;
                ((intptr_t*)_2)[1] = _31690;
                _31691 = MAKE_SEQ(_1);
                _31690 = NOVALUE;
                // SubProg Resolve_forward_references pc: 732 op: SPRINTF (53)
                _31692 = EPrintf(-9999999, _31685, _31691);
                DeRefDS(_31691);
                _31691 = NOVALUE;
                // SubProg Resolve_forward_references pc: 736 op: CONCAT (15)
                Concat((object_ptr)&_errloc_63729, _errloc_63729, _31692);
                DeRefDS(_31692);
                _31692 = NOVALUE;
                // SubProg Resolve_forward_references pc: 740 op: NOP1 (159)
L1A: // addr: 741 pc: 740 sub: 63663 op: 159
                // SubProg Resolve_forward_references pc: 741 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var s_63832
                // SubProg Resolve_forward_references pc: 743 op: STARTLINE (58)

                /** fwdref.e:1035								end for*/
                // SubProg Resolve_forward_references pc: 745 op: ENDFOR_INT_UP1 (54)
                _si_63829 = _si_63829 + 1;
                goto L18; // [745] 671
L19: // addr: 750 pc: 745 sub: 63663 op: 54
                ;
            }
            // SubProg Resolve_forward_references pc: 750 op: EXIT_BLOCK (206)

// Exiting block BLOCK: CASE-

// block var syms_63811
            DeRef(_syms_63811);
            _syms_63811 = NOVALUE;
            // SubProg Resolve_forward_references pc: 752 op: ELSE (23)
            goto L17; // [752] 759
            // SubProg Resolve_forward_references pc: 754 op: STARTLINE (58)

            /** fwdref.e:1036							case else */
            // SubProg Resolve_forward_references pc: 756 op: CASE (186)
            default:
L14: // addr: 756 pc: 756 sub: 63663 op: 186
            // SubProg Resolve_forward_references pc: 758 op: NOPSWITCH (187)
        ;}L17: // addr: 759 pc: 758 sub: 63663 op: 187
        // SubProg Resolve_forward_references pc: 759 op: NOP1 (159)
L13: // addr: 760 pc: 759 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 760 op: STARTLINE (58)

        /** fwdref.e:1040					if not match(errloc, msg) then*/
        // SubProg Resolve_forward_references pc: 762 op: MATCH_FROM (177)
        _31694 = e_match_from(_errloc_63729, _msg_63728, 1);
        // SubProg Resolve_forward_references pc: 767 op: NOT_IFW (108)
        if (_31694 != 0)
        goto L1B; // [767] 786
        _31694 = NOVALUE;
        // SubProg Resolve_forward_references pc: 770 op: STARTLINE (58)

        /** fwdref.e:1041						msg &= errloc*/
        // SubProg Resolve_forward_references pc: 772 op: CONCAT (15)
        Concat((object_ptr)&_msg_63728, _msg_63728, _errloc_63729);
        // SubProg Resolve_forward_references pc: 776 op: STARTLINE (58)

        /** fwdref.e:1042						prep_forward_error( errors[e] )*/
        // SubProg Resolve_forward_references pc: 778 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_errors_63666);
        _31697 = (object)*(((s1_ptr)_2)->base + _e_63732);
        // SubProg Resolve_forward_references pc: 782 op: PROC (27)
        Ref(_31697);
        _30prep_forward_error(_31697);
        _31697 = NOVALUE;
        // SubProg Resolve_forward_references pc: 785 op: NOP1 (159)
L1B: // addr: 786 pc: 785 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 786 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tok_63750
        DeRef(_tok_63750);
        _tok_63750 = NOVALUE;

// block var THIS_SCOPE_63752

// block var THESE_GLOBALS_63753
        // SubProg Resolve_forward_references pc: 788 op: NOP1 (159)
L12: // addr: 789 pc: 788 sub: 63663 op: 159
        // SubProg Resolve_forward_references pc: 789 op: STARTLINE (58)

        /** fwdref.e:1045				ThisLine    = ref[FR_THISLINE]*/
        // SubProg Resolve_forward_references pc: 791 op: RHS_SUBS (25)
        DeRef(_49ThisLine_48781);
        _2 = (object)SEQ_PTR(_ref_63734);
        _49ThisLine_48781 = (object)*(((s1_ptr)_2)->base + 7);
        Ref(_49ThisLine_48781);
        // SubProg Resolve_forward_references pc: 795 op: STARTLINE (58)

        /** fwdref.e:1046				bp          = ref[FR_BP]*/
        // SubProg Resolve_forward_references pc: 797 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63734);
        _49bp_48785 = (object)*(((s1_ptr)_2)->base + 8);
        if (!IS_ATOM_INT(_49bp_48785)){
            _49bp_48785 = (object)DBL_PTR(_49bp_48785)->dbl;
        }
        // SubProg Resolve_forward_references pc: 803 op: STARTLINE (58)

        /** fwdref.e:1047				CurrentSub  = ref[FR_SUBPROG]*/
        // SubProg Resolve_forward_references pc: 805 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63734);
        _5CurrentSub_12485 = (object)*(((s1_ptr)_2)->base + 4);
        if (!IS_ATOM_INT(_5CurrentSub_12485)){
            _5CurrentSub_12485 = (object)DBL_PTR(_5CurrentSub_12485)->dbl;
        }
        // SubProg Resolve_forward_references pc: 811 op: STARTLINE (58)

        /** fwdref.e:1048				line_number = ref[FR_LINE]*/
        // SubProg Resolve_forward_references pc: 813 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ref_63734);
        _5line_number_12478 = (object)*(((s1_ptr)_2)->base + 6);
        if (!IS_ATOM_INT(_5line_number_12478)){
            _5line_number_12478 = (object)DBL_PTR(_5line_number_12478)->dbl;
        }
        // SubProg Resolve_forward_references pc: 819 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var ref_63734
        DeRefDS(_ref_63734);
        _ref_63734 = NOVALUE;
        // SubProg Resolve_forward_references pc: 821 op: STARTLINE (58)

        /** fwdref.e:1049			end for*/
        // SubProg Resolve_forward_references pc: 823 op: ENDFOR_GENERAL (39)
L11: // addr: 823 pc: 823 sub: 63663 op: 39
        _e_63732 = _e_63732 + -1;
        goto LC; // [823] 319
LD: // addr: 828 pc: 823 sub: 63663 op: 39
        ;
    }
    // SubProg Resolve_forward_references pc: 828 op: STARTLINE (58)

    /** fwdref.e:1050			if length(msg) > 0 then*/
    // SubProg Resolve_forward_references pc: 830 op: LENGTH (42)
    if (IS_SEQUENCE(_msg_63728)){
            _31702 = SEQ_PTR(_msg_63728)->length;
    }
    else {
        _31702 = 1;
    }
    // SubProg Resolve_forward_references pc: 833 op: GREATER_IFW_I (124)
    if (_31702 <= 0)
    goto L1C; // [833] 849
    // SubProg Resolve_forward_references pc: 837 op: STARTLINE (58)

    /** fwdref.e:1051				CompileErr( 74, {msg} )*/
    // SubProg Resolve_forward_references pc: 839 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_msg_63728);
    ((intptr_t*)_2)[1] = _msg_63728;
    _31705 = MAKE_SEQ(_1);
    // SubProg Resolve_forward_references pc: 843 op: PROC (27)
    _49CompileErr(74, _31705, 0);
    _31705 = NOVALUE;
    // SubProg Resolve_forward_references pc: 848 op: NOP1 (159)
L1C: // addr: 849 pc: 848 sub: 63663 op: 159
    // SubProg Resolve_forward_references pc: 849 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var msg_63728
    DeRefi(_msg_63728);
    _msg_63728 = NOVALUE;

// block var errloc_63729
    DeRefi(_errloc_63729);
    _errloc_63729 = NOVALUE;
    // SubProg Resolve_forward_references pc: 851 op: ELSE (23)
    goto L1D; // [851] 899
    // SubProg Resolve_forward_references pc: 853 op: NOP1 (159)
LB: // addr: 854 pc: 853 sub: 63663 op: 159
    // SubProg Resolve_forward_references pc: 854 op: STARTLINE (58)

    /** fwdref.e:1053		elsif report_errors and not repl then*/
    // SubProg Resolve_forward_references pc: 856 op: SC1_AND_IF (146)
    if (_report_errors_63665 == 0) {
        goto L1E; // [856] 898
    }
    // SubProg Resolve_forward_references pc: 860 op: GLOBAL_INIT_CHECK (109)
    // SubProg Resolve_forward_references pc: 862 op: NOT (7)
    _31707 = (0 == 0);
    // SubProg Resolve_forward_references pc: 865 op: NOP1 (159)
    // SubProg Resolve_forward_references pc: 866 op: IF (20)
    if (_31707 == 0)
    {
        DeRef(_31707);
        _31707 = NOVALUE;
        goto L1E; // [866] 898
    }
    else{
        DeRef(_31707);
        _31707 = NOVALUE;
    }
    // SubProg Resolve_forward_references pc: 869 op: STARTLINE (58)

    /** fwdref.e:1055			forward_references  = {}*/
    // SubProg Resolve_forward_references pc: 871 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30forward_references_62230);
    _30forward_references_62230 = _21958;
    // SubProg Resolve_forward_references pc: 874 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 876 op: STARTLINE (58)

    /** fwdref.e:1056			active_references   = {}*/
    // SubProg Resolve_forward_references pc: 878 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30active_references_62232);
    _30active_references_62232 = _21958;
    // SubProg Resolve_forward_references pc: 881 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 883 op: STARTLINE (58)

    /** fwdref.e:1057			toplevel_references = {}*/
    // SubProg Resolve_forward_references pc: 885 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30toplevel_references_62233);
    _30toplevel_references_62233 = _21958;
    // SubProg Resolve_forward_references pc: 888 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 890 op: STARTLINE (58)

    /** fwdref.e:1058			inactive_references = {}*/
    // SubProg Resolve_forward_references pc: 892 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_30inactive_references_62234);
    _30inactive_references_62234 = _21958;
    // SubProg Resolve_forward_references pc: 895 op: SEQUENCE_CHECK (97)
    // SubProg Resolve_forward_references pc: 897 op: NOP1 (159)
L1E: // addr: 898 pc: 897 sub: 63663 op: 159
    // SubProg Resolve_forward_references pc: 898 op: NOP1 (159)
L1D: // addr: 899 pc: 898 sub: 63663 op: 159
    // SubProg Resolve_forward_references pc: 899 op: STARTLINE (58)

    /** fwdref.e:1060		clear_last()*/
    // SubProg Resolve_forward_references pc: 901 op: PROC (27)
    _45clear_last();
    // SubProg Resolve_forward_references pc: 903 op: STARTLINE (58)

    /** fwdref.e:1061	end procedure*/
    // SubProg Resolve_forward_references pc: 905 op: RETURNP (29)

// Exiting block BLOCK: Resolve_forward_references

// block var report_errors_63665

// block var errors_63666
    DeRef(_errors_63666);

// block var unincluded_ok_63667
    _31597 = NOVALUE;
    _31662 = NOVALUE;
    _31687 = NOVALUE;
    _31620 = NOVALUE;
    _31642 = NOVALUE;
    _31674 = NOVALUE;
    DeRef(_31623);
    _31623 = NOVALUE;
    DeRef(_31603);
    _31603 = NOVALUE;
    _31654 = NOVALUE;
    _31605 = NOVALUE;
    _31607 = NOVALUE;
    DeRef(_31626);
    _31626 = NOVALUE;
    _31600 = NOVALUE;
    _31646 = NOVALUE;
    return;
    // SubProg Resolve_forward_references pc: 908 op: BADRETURNF (43)
    ;
}


void _30shift_these(object _refs_63880, object _pc_63881, object _amount_63882)
{
    object _fr_63886 = NOVALUE;
    object _31725 = NOVALUE; // 63907 31725
    object _31724 = NOVALUE; // 63906 31724
    object _31723 = NOVALUE; // 63905 31723
    object _31722 = NOVALUE; // 63904 31722
    object _31721 = NOVALUE; // 63903 31721
    object _31720 = NOVALUE; // 63902 31720
    object _31719 = NOVALUE; // 63901 31719
    object _31718 = NOVALUE; // 63899 31718
    object _31717 = NOVALUE; // 63897 31717
    object _31716 = NOVALUE; // 63896 31716
// skipping _31715  name type: 0
    object _31714 = NOVALUE; // 63894 31714
// skipping _31713  name type: 0
    object _31712 = NOVALUE; // 63891 31712
    object _31711 = NOVALUE; // 63889 31711
// skipping _31710  name type: 0
    object _31709 = NOVALUE; // 63887 31709
    object _31708 = NOVALUE; // 63885 31708
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_these pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg shift_these pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_these pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift_these pc: 7 op: STARTLINE (58)

    /** fwdref.e:1064		for i = length( refs ) to 1 by -1 do*/
    // SubProg shift_these pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63880)){
            _31708 = SEQ_PTR(_refs_63880)->length;
    }
    else {
        _31708 = 1;
    }
    // SubProg shift_these pc: 12 op: FOR_I (125)
    {
        object _i_63884;
        _i_63884 = _31708;
L1: // addr: 19 pc: 12 sub: 63878 op: 125
        if (_i_63884 < 1){
            goto L2; // [12] 147
        }
        // SubProg shift_these pc: 19 op: STARTLINE (58)

        /** fwdref.e:1065			sequence fr = forward_references[refs[i]]*/
        // SubProg shift_these pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63880);
        _31709 = (object)*(((s1_ptr)_2)->base + _i_63884);
        // SubProg shift_these pc: 27 op: RHS_SUBS (25)
        DeRef(_fr_63886);
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!IS_ATOM_INT(_31709)){
            _fr_63886 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31709)->dbl));
        }
        else{
            _fr_63886 = (object)*(((s1_ptr)_2)->base + _31709);
        }
        Ref(_fr_63886);
        // SubProg shift_these pc: 31 op: SEQUENCE_CHECK (97)
        // SubProg shift_these pc: 33 op: STARTLINE (58)

        /** fwdref.e:1066			forward_references[refs[i]] = 0*/
        // SubProg shift_these pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63880);
        _31711 = (object)*(((s1_ptr)_2)->base + _i_63884);
        // SubProg shift_these pc: 41 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _30forward_references_62230 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31711))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31711)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31711);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg shift_these pc: 45 op: STARTLINE (58)

        /** fwdref.e:1067			if fr[FR_SUBPROG] = shifting_sub then*/
        // SubProg shift_these pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63886);
        _31712 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg shift_these pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 53 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _31712, _30shifting_sub_62249)){
            _31712 = NOVALUE;
            goto L3; // [53] 126
        }
        _31712 = NOVALUE;
        // SubProg shift_these pc: 57 op: STARTLINE (58)

        /** fwdref.e:1068				if fr[FR_PC] >= pc then*/
        // SubProg shift_these pc: 59 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63886);
        _31714 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_these pc: 63 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _31714, _pc_63881)){
            _31714 = NOVALUE;
            goto L4; // [63] 125
        }
        _31714 = NOVALUE;
        // SubProg shift_these pc: 67 op: STARTLINE (58)

        /** fwdref.e:1069					fr[FR_PC] += amount*/
        // SubProg shift_these pc: 69 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63886);
        _31716 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_these pc: 73 op: PLUS (11)
        if (IS_ATOM_INT(_31716)) {
            _31717 = _31716 + _amount_63882;
            if ((object)((uintptr_t)_31717 + (uintptr_t)HIGH_BITS) >= 0){
                _31717 = NewDouble((eudouble)_31717);
            }
        }
        else {
            _31717 = binary_op(PLUS, _31716, _amount_63882);
        }
        _31716 = NOVALUE;
        // SubProg shift_these pc: 77 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63886);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63886 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31717;
        if( _1 != _31717 ){
            DeRef(_1);
        }
        _31717 = NOVALUE;
        // SubProg shift_these pc: 81 op: STARTLINE (58)

        /** fwdref.e:1070					if fr[FR_TYPE] = CASE*/
        // SubProg shift_these pc: 83 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63886);
        _31718 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg shift_these pc: 87 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 89 op: EQUALS (3)
        if (IS_ATOM_INT(_31718)) {
            _31719 = (_31718 == 186);
        }
        else {
            _31719 = binary_op(EQUALS, _31718, 186);
        }
        _31718 = NOVALUE;
        // SubProg shift_these pc: 93 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31719)) {
            if (_31719 == 0) {
                goto L5; // [93] 124
            }
        }
        else {
            if (DBL_PTR(_31719)->dbl == 0.0) {
                goto L5; // [93] 124
            }
        }
        // SubProg shift_these pc: 97 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63886);
        _31721 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_these pc: 101 op: GREATEREQ (2)
        if (IS_ATOM_INT(_31721)) {
            _31722 = (_31721 >= _pc_63881);
        }
        else {
            _31722 = binary_op(GREATEREQ, _31721, _pc_63881);
        }
        _31721 = NOVALUE;
        // SubProg shift_these pc: 105 op: NOP1 (159)
        // SubProg shift_these pc: 106 op: IF (20)
        if (_31722 == 0) {
            DeRef(_31722);
            _31722 = NOVALUE;
            goto L5; // [106] 124
        }
        else {
            if (!IS_ATOM_INT(_31722) && DBL_PTR(_31722)->dbl == 0.0){
                DeRef(_31722);
                _31722 = NOVALUE;
                goto L5; // [106] 124
            }
            DeRef(_31722);
            _31722 = NOVALUE;
        }
        DeRef(_31722);
        _31722 = NOVALUE;
        // SubProg shift_these pc: 109 op: STARTLINE (58)

        /** fwdref.e:1073						fr[FR_DATA] += amount*/
        // SubProg shift_these pc: 111 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63886);
        _31723 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_these pc: 115 op: PLUS (11)
        if (IS_ATOM_INT(_31723)) {
            _31724 = _31723 + _amount_63882;
            if ((object)((uintptr_t)_31724 + (uintptr_t)HIGH_BITS) >= 0){
                _31724 = NewDouble((eudouble)_31724);
            }
        }
        else {
            _31724 = binary_op(PLUS, _31723, _amount_63882);
        }
        _31723 = NOVALUE;
        // SubProg shift_these pc: 119 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63886);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63886 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31724;
        if( _1 != _31724 ){
            DeRef(_1);
        }
        _31724 = NOVALUE;
        // SubProg shift_these pc: 123 op: NOP1 (159)
L5: // addr: 124 pc: 123 sub: 63878 op: 159
        // SubProg shift_these pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 63878 op: 159
        // SubProg shift_these pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 63878 op: 159
        // SubProg shift_these pc: 126 op: STARTLINE (58)

        /** fwdref.e:1077			forward_references[refs[i]] = fr*/
        // SubProg shift_these pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_these pc: 130 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63880);
        _31725 = (object)*(((s1_ptr)_2)->base + _i_63884);
        // SubProg shift_these pc: 134 op: ASSIGN_SUBS (16)
        RefDS(_fr_63886);
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _30forward_references_62230 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31725))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31725)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31725);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63886;
        DeRef(_1);
        // SubProg shift_these pc: 138 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fr_63886
        DeRefDS(_fr_63886);
        _fr_63886 = NOVALUE;
        // SubProg shift_these pc: 140 op: STARTLINE (58)

        /** fwdref.e:1078		end for*/
        // SubProg shift_these pc: 142 op: ENDFOR_GENERAL (39)
        _i_63884 = _i_63884 + -1;
        goto L1; // [142] 19
L2: // addr: 147 pc: 142 sub: 63878 op: 39
        ;
    }
    // SubProg shift_these pc: 147 op: STARTLINE (58)

    /** fwdref.e:1079	end procedure*/
    // SubProg shift_these pc: 149 op: RETURNP (29)

// Exiting block BLOCK: shift_these

// block var refs_63880
    DeRefDS(_refs_63880);

// block var pc_63881

// block var amount_63882
    _31711 = NOVALUE;
    DeRef(_31719);
    _31719 = NOVALUE;
    _31725 = NOVALUE;
    _31709 = NOVALUE;
    return;
    // SubProg shift_these pc: 152 op: BADRETURNF (43)
    ;
}


void _30shift_top(object _refs_63910, object _pc_63911, object _amount_63912)
{
    object _fr_63916 = NOVALUE;
    object _31741 = NOVALUE; // 63934 31741
    object _31740 = NOVALUE; // 63933 31740
    object _31739 = NOVALUE; // 63932 31739
    object _31738 = NOVALUE; // 63931 31738
    object _31737 = NOVALUE; // 63930 31737
    object _31736 = NOVALUE; // 63929 31736
    object _31735 = NOVALUE; // 63928 31735
    object _31734 = NOVALUE; // 63926 31734
    object _31733 = NOVALUE; // 63924 31733
    object _31732 = NOVALUE; // 63923 31732
// skipping _31731  name type: 0
    object _31730 = NOVALUE; // 63921 31730
    object _31729 = NOVALUE; // 63919 31729
// skipping _31728  name type: 0
    object _31727 = NOVALUE; // 63917 31727
    object _31726 = NOVALUE; // 63915 31726
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_top pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg shift_top pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_top pc: 5 op: INTEGER_CHECK (96)
    // SubProg shift_top pc: 7 op: STARTLINE (58)

    /** fwdref.e:1083		for i = length( refs ) to 1 by -1 do*/
    // SubProg shift_top pc: 9 op: LENGTH (42)
    if (IS_SEQUENCE(_refs_63910)){
            _31726 = SEQ_PTR(_refs_63910)->length;
    }
    else {
        _31726 = 1;
    }
    // SubProg shift_top pc: 12 op: FOR_I (125)
    {
        object _i_63914;
        _i_63914 = _31726;
L1: // addr: 19 pc: 12 sub: 63908 op: 125
        if (_i_63914 < 1){
            goto L2; // [12] 134
        }
        // SubProg shift_top pc: 19 op: STARTLINE (58)

        /** fwdref.e:1084			sequence fr = forward_references[refs[i]]*/
        // SubProg shift_top pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 23 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63910);
        _31727 = (object)*(((s1_ptr)_2)->base + _i_63914);
        // SubProg shift_top pc: 27 op: RHS_SUBS (25)
        DeRef(_fr_63916);
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!IS_ATOM_INT(_31727)){
            _fr_63916 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_31727)->dbl));
        }
        else{
            _fr_63916 = (object)*(((s1_ptr)_2)->base + _31727);
        }
        Ref(_fr_63916);
        // SubProg shift_top pc: 31 op: SEQUENCE_CHECK (97)
        // SubProg shift_top pc: 33 op: STARTLINE (58)

        /** fwdref.e:1085			forward_references[refs[i]] = 0*/
        // SubProg shift_top pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63910);
        _31729 = (object)*(((s1_ptr)_2)->base + _i_63914);
        // SubProg shift_top pc: 41 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _30forward_references_62230 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31729))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31729)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31729);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        // SubProg shift_top pc: 45 op: STARTLINE (58)

        /** fwdref.e:1086			if fr[FR_PC] >= pc then*/
        // SubProg shift_top pc: 47 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63916);
        _31730 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_top pc: 51 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _31730, _pc_63911)){
            _31730 = NOVALUE;
            goto L3; // [51] 113
        }
        _31730 = NOVALUE;
        // SubProg shift_top pc: 55 op: STARTLINE (58)

        /** fwdref.e:1087				fr[FR_PC] += amount*/
        // SubProg shift_top pc: 57 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63916);
        _31732 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg shift_top pc: 61 op: PLUS (11)
        if (IS_ATOM_INT(_31732)) {
            _31733 = _31732 + _amount_63912;
            if ((object)((uintptr_t)_31733 + (uintptr_t)HIGH_BITS) >= 0){
                _31733 = NewDouble((eudouble)_31733);
            }
        }
        else {
            _31733 = binary_op(PLUS, _31732, _amount_63912);
        }
        _31732 = NOVALUE;
        // SubProg shift_top pc: 65 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63916);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63916 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31733;
        if( _1 != _31733 ){
            DeRef(_1);
        }
        _31733 = NOVALUE;
        // SubProg shift_top pc: 69 op: STARTLINE (58)

        /** fwdref.e:1088				if fr[FR_TYPE] = CASE*/
        // SubProg shift_top pc: 71 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63916);
        _31734 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg shift_top pc: 75 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 77 op: EQUALS (3)
        if (IS_ATOM_INT(_31734)) {
            _31735 = (_31734 == 186);
        }
        else {
            _31735 = binary_op(EQUALS, _31734, 186);
        }
        _31734 = NOVALUE;
        // SubProg shift_top pc: 81 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_31735)) {
            if (_31735 == 0) {
                goto L4; // [81] 112
            }
        }
        else {
            if (DBL_PTR(_31735)->dbl == 0.0) {
                goto L4; // [81] 112
            }
        }
        // SubProg shift_top pc: 85 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fr_63916);
        _31737 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_top pc: 89 op: GREATEREQ (2)
        if (IS_ATOM_INT(_31737)) {
            _31738 = (_31737 >= _pc_63911);
        }
        else {
            _31738 = binary_op(GREATEREQ, _31737, _pc_63911);
        }
        _31737 = NOVALUE;
        // SubProg shift_top pc: 93 op: NOP1 (159)
        // SubProg shift_top pc: 94 op: IF (20)
        if (_31738 == 0) {
            DeRef(_31738);
            _31738 = NOVALUE;
            goto L4; // [94] 112
        }
        else {
            if (!IS_ATOM_INT(_31738) && DBL_PTR(_31738)->dbl == 0.0){
                DeRef(_31738);
                _31738 = NOVALUE;
                goto L4; // [94] 112
            }
            DeRef(_31738);
            _31738 = NOVALUE;
        }
        DeRef(_31738);
        _31738 = NOVALUE;
        // SubProg shift_top pc: 97 op: STARTLINE (58)

        /** fwdref.e:1091					fr[FR_DATA] += amount*/
        // SubProg shift_top pc: 99 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_fr_63916);
        _31739 = (object)*(((s1_ptr)_2)->base + 12);
        // SubProg shift_top pc: 103 op: PLUS (11)
        if (IS_ATOM_INT(_31739)) {
            _31740 = _31739 + _amount_63912;
            if ((object)((uintptr_t)_31740 + (uintptr_t)HIGH_BITS) >= 0){
                _31740 = NewDouble((eudouble)_31740);
            }
        }
        else {
            _31740 = binary_op(PLUS, _31739, _amount_63912);
        }
        _31739 = NOVALUE;
        // SubProg shift_top pc: 107 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_fr_63916);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _fr_63916 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 12);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _31740;
        if( _1 != _31740 ){
            DeRef(_1);
        }
        _31740 = NOVALUE;
        // SubProg shift_top pc: 111 op: NOP1 (159)
L4: // addr: 112 pc: 111 sub: 63908 op: 159
        // SubProg shift_top pc: 112 op: NOP1 (159)
L3: // addr: 113 pc: 112 sub: 63908 op: 159
        // SubProg shift_top pc: 113 op: STARTLINE (58)

        /** fwdref.e:1094			forward_references[refs[i]] = fr*/
        // SubProg shift_top pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_top pc: 117 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_refs_63910);
        _31741 = (object)*(((s1_ptr)_2)->base + _i_63914);
        // SubProg shift_top pc: 121 op: ASSIGN_SUBS (16)
        RefDS(_fr_63916);
        _2 = (object)SEQ_PTR(_30forward_references_62230);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _30forward_references_62230 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_31741))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_31741)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _31741);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _fr_63916;
        DeRef(_1);
        // SubProg shift_top pc: 125 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fr_63916
        DeRefDS(_fr_63916);
        _fr_63916 = NOVALUE;
        // SubProg shift_top pc: 127 op: STARTLINE (58)

        /** fwdref.e:1095		end for*/
        // SubProg shift_top pc: 129 op: ENDFOR_GENERAL (39)
        _i_63914 = _i_63914 + -1;
        goto L1; // [129] 19
L2: // addr: 134 pc: 129 sub: 63908 op: 39
        ;
    }
    // SubProg shift_top pc: 134 op: STARTLINE (58)

    /** fwdref.e:1096	end procedure*/
    // SubProg shift_top pc: 136 op: RETURNP (29)

// Exiting block BLOCK: shift_top

// block var refs_63910
    DeRefDS(_refs_63910);

// block var pc_63911

// block var amount_63912
    _31741 = NOVALUE;
    _31729 = NOVALUE;
    _31727 = NOVALUE;
    DeRef(_31735);
    _31735 = NOVALUE;
    return;
    // SubProg shift_top pc: 139 op: BADRETURNF (43)
    ;
}


void _30shift_fwd_refs(object _pc_63937, object _amount_63938)
{
    object _file_63949 = NOVALUE;
    object _sp_63954 = NOVALUE;
    object _31751 = NOVALUE; // 63958 31751
    object _31750 = NOVALUE; // 63957 31750
// skipping _31749  name type: 0
    object _31748 = NOVALUE; // 63955 31748
// skipping _31747  name type: 0
    object _31746 = NOVALUE; // 63951 31746
    object _31745 = NOVALUE; // 63947 31745
    object _31744 = NOVALUE; // 63946 31744
// skipping _31743  name type: 0
// skipping _31742  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg shift_fwd_refs pc: 1 op: INTEGER_CHECK (96)
    // SubProg shift_fwd_refs pc: 3 op: INTEGER_CHECK (96)
    // SubProg shift_fwd_refs pc: 5 op: STARTLINE (58)

    /** fwdref.e:1099		if not shifting_sub then*/
    // SubProg shift_fwd_refs pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 9 op: NOT_IFW (108)
    if (_30shifting_sub_62249 != 0)
    goto L1; // [9] 18
    // SubProg shift_fwd_refs pc: 12 op: STARTLINE (58)

    /** fwdref.e:1100			return*/
    // SubProg shift_fwd_refs pc: 14 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: shift_fwd_refs

// block var pc_63937

// block var amount_63938
    return;
    // SubProg shift_fwd_refs pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 63935 op: 159
    // SubProg shift_fwd_refs pc: 18 op: STARTLINE (58)

    /** fwdref.e:1103		if shifting_sub = TopLevelSub then*/
    // SubProg shift_fwd_refs pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 24 op: EQUALS_IFW (104)
    if (_30shifting_sub_62249 != _5TopLevelSub_12484)
    goto L2; // [24] 65
    // SubProg shift_fwd_refs pc: 28 op: STARTLINE (58)

    /** fwdref.e:1104			for file = 1 to length( toplevel_references ) do*/
    // SubProg shift_fwd_refs pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_30toplevel_references_62233)){
            _31744 = SEQ_PTR(_30toplevel_references_62233)->length;
    }
    else {
        _31744 = 1;
    }
    // SubProg shift_fwd_refs pc: 35 op: FOR_I (125)
    {
        object _file_63945;
        _file_63945 = 1;
L3: // addr: 42 pc: 35 sub: 63935 op: 125
        if (_file_63945 > _31744){
            goto L4; // [35] 62
        }
        // SubProg shift_fwd_refs pc: 42 op: STARTLINE (58)

        /** fwdref.e:1105				shift_top( toplevel_references[file], pc, amount )*/
        // SubProg shift_fwd_refs pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg shift_fwd_refs pc: 46 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_30toplevel_references_62233);
        _31745 = (object)*(((s1_ptr)_2)->base + _file_63945);
        // SubProg shift_fwd_refs pc: 50 op: PROC (27)
        Ref(_31745);
        _30shift_top(_31745, _pc_63937, _amount_63938);
        _31745 = NOVALUE;
        // SubProg shift_fwd_refs pc: 55 op: STARTLINE (58)

        /** fwdref.e:1106			end for*/
        // SubProg shift_fwd_refs pc: 57 op: ENDFOR_INT_UP1 (54)
        _file_63945 = _file_63945 + 1;
        goto L3; // [57] 42
L4: // addr: 62 pc: 57 sub: 63935 op: 54
        ;
    }
    // SubProg shift_fwd_refs pc: 62 op: ELSE (23)
    goto L5; // [62] 118
    // SubProg shift_fwd_refs pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 63935 op: 159
    // SubProg shift_fwd_refs pc: 65 op: STARTLINE (58)

    /** fwdref.e:1108			integer file = SymTab[shifting_sub][S_FILE_NO]*/
    // SubProg shift_fwd_refs pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _31746 = (object)*(((s1_ptr)_2)->base + _30shifting_sub_62249);
    // SubProg shift_fwd_refs pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31746);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _file_63949 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _file_63949 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_file_63949)){
        _file_63949 = (object)DBL_PTR(_file_63949)->dbl;
    }
    _31746 = NOVALUE;
    // SubProg shift_fwd_refs pc: 83 op: STARTLINE (58)

    /** fwdref.e:1109			integer sp   = find( shifting_sub, active_subprogs[file] )*/
    // SubProg shift_fwd_refs pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 89 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_subprogs_62231);
    _31748 = (object)*(((s1_ptr)_2)->base + _file_63949);
    // SubProg shift_fwd_refs pc: 93 op: FIND_FROM (176)
    _sp_63954 = find_from(_30shifting_sub_62249, _31748, 1);
    _31748 = NOVALUE;
    // SubProg shift_fwd_refs pc: 98 op: STARTLINE (58)

    /** fwdref.e:1110			shift_these( active_references[file][sp], pc, amount )*/
    // SubProg shift_fwd_refs pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg shift_fwd_refs pc: 102 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30active_references_62232);
    _31750 = (object)*(((s1_ptr)_2)->base + _file_63949);
    // SubProg shift_fwd_refs pc: 106 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_31750);
    _31751 = (object)*(((s1_ptr)_2)->base + _sp_63954);
    _31750 = NOVALUE;
    // SubProg shift_fwd_refs pc: 110 op: PROC (27)
    Ref(_31751);
    _30shift_these(_31751, _pc_63937, _amount_63938);
    _31751 = NOVALUE;
    // SubProg shift_fwd_refs pc: 115 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var file_63949

// block var sp_63954
    // SubProg shift_fwd_refs pc: 117 op: NOP1 (159)
L5: // addr: 118 pc: 117 sub: 63935 op: 159
    // SubProg shift_fwd_refs pc: 118 op: STARTLINE (58)

    /** fwdref.e:1112	end procedure*/
    // SubProg shift_fwd_refs pc: 120 op: RETURNP (29)

// Exiting block BLOCK: shift_fwd_refs

// block var pc_63937

// block var amount_63938
    return;
    // SubProg shift_fwd_refs pc: 123 op: BADRETURNF (43)
    ;
}



// 0x9F022213
