// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _63find_category(object _tokid_23630)
{
    object _catname_23631 = NOVALUE;
// skipping _13479  name type: 0
    object _13478 = NOVALUE; // 23645 13478
    object _13477 = NOVALUE; // 23644 13477
// skipping _13476  name type: 0
    object _13475 = NOVALUE; // 23640 13475
    object _13474 = NOVALUE; // 23639 13474
    object _13473 = NOVALUE; // 23636 13473
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_category pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tokid_23630)) {
        _1 = (object)(DBL_PTR(_tokid_23630)->dbl);
        DeRefDS(_tokid_23630);
        _tokid_23630 = _1;
    }
    // SubProg find_category pc: 3 op: STARTLINE (58)

    /** keylist.e:194		sequence catname = "reserved word"*/
    // SubProg find_category pc: 5 op: ASSIGN (18)
    RefDS(_13472);
    DeRef(_catname_23631);
    _catname_23631 = _13472;
    // SubProg find_category pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg find_category pc: 10 op: STARTLINE (58)

    /** keylist.e:195		for i = 1 to length(token_category) do*/
    // SubProg find_category pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_category pc: 14 op: LENGTH (42)
    // Known sequence length:
    _13473 = 73;
    // SubProg find_category pc: 17 op: FOR_I (125)
    {
        object _i_23634;
        _i_23634 = 1;
L1: // addr: 24 pc: 17 sub: 23628 op: 125
        if (_i_23634 > 73){
            goto L2; // [17] 72
        }
        // SubProg find_category pc: 24 op: STARTLINE (58)

        /** keylist.e:196			if token_category[i][1] = tokid then*/
        // SubProg find_category pc: 26 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_category pc: 28 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_38token_category_15971);
        _13474 = (object)*(((s1_ptr)_2)->base + _i_23634);
        // SubProg find_category pc: 32 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13474);
        _13475 = (object)*(((s1_ptr)_2)->base + 1);
        _13474 = NOVALUE;
        // SubProg find_category pc: 36 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _13475, _tokid_23630)){
            _13475 = NOVALUE;
            goto L3; // [36] 65
        }
        _13475 = NOVALUE;
        // SubProg find_category pc: 40 op: STARTLINE (58)

        /** keylist.e:197				catname = token_catname[token_category[i][2]]*/
        // SubProg find_category pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_category pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_category pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_38token_category_15971);
        _13477 = (object)*(((s1_ptr)_2)->base + _i_23634);
        // SubProg find_category pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13477);
        _13478 = (object)*(((s1_ptr)_2)->base + 2);
        _13477 = NOVALUE;
        // SubProg find_category pc: 54 op: RHS_SUBS_CHECK (92)
        DeRef(_catname_23631);
        _2 = (object)SEQ_PTR(_38token_catname_15958);
        if (!IS_ATOM_INT(_13478)){
            _catname_23631 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_13478)->dbl));
        }
        else{
            _catname_23631 = (object)*(((s1_ptr)_2)->base + _13478);
        }
        RefDS(_catname_23631);
        // SubProg find_category pc: 58 op: SEQUENCE_CHECK (97)
        // SubProg find_category pc: 60 op: STARTLINE (58)

        /** keylist.e:198				exit*/
        // SubProg find_category pc: 62 op: EXIT (61)
        goto L2; // [62] 72
        // SubProg find_category pc: 64 op: NOP1 (159)
L3: // addr: 65 pc: 64 sub: 23628 op: 159
        // SubProg find_category pc: 65 op: STARTLINE (58)

        /** keylist.e:200		end for*/
        // SubProg find_category pc: 67 op: ENDFOR_INT_UP1 (54)
        _i_23634 = _i_23634 + 1;
        goto L1; // [67] 24
L2: // addr: 72 pc: 67 sub: 23628 op: 54
        ;
    }
    // SubProg find_category pc: 72 op: STARTLINE (58)

    /** keylist.e:201		return catname*/
    // SubProg find_category pc: 74 op: RETURNF (28)

// Exiting block BLOCK: find_category

// block var tokid_23630
    _13478 = NOVALUE;
    return _catname_23631;
    // SubProg find_category pc: 78 op: BADRETURNF (43)
    ;
}


object _63find_token_text(object _tokid_23649)
{
    object _13487 = NOVALUE; // 23661 13487
    object _13485 = NOVALUE; // 23658 13485
    object _13484 = NOVALUE; // 23657 13484
// skipping _13483  name type: 0
    object _13482 = NOVALUE; // 23655 13482
    object _13481 = NOVALUE; // 23654 13481
    object _13480 = NOVALUE; // 23652 13480
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_token_text pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tokid_23649)) {
        _1 = (object)(DBL_PTR(_tokid_23649)->dbl);
        DeRefDS(_tokid_23649);
        _tokid_23649 = _1;
    }
    // SubProg find_token_text pc: 3 op: STARTLINE (58)

    /** keylist.e:205		for i = 1 to length(keylist) do*/
    // SubProg find_token_text pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_token_text pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_63keylist_22748)){
            _13480 = SEQ_PTR(_63keylist_22748)->length;
    }
    else {
        _13480 = 1;
    }
    // SubProg find_token_text pc: 10 op: FOR_I (125)
    {
        object _i_23651;
        _i_23651 = 1;
L1: // addr: 17 pc: 10 sub: 23647 op: 125
        if (_i_23651 > _13480){
            goto L2; // [10] 57
        }
        // SubProg find_token_text pc: 17 op: STARTLINE (58)

        /** keylist.e:206			if keylist[i][3] = tokid then*/
        // SubProg find_token_text pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_token_text pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _13481 = (object)*(((s1_ptr)_2)->base + _i_23651);
        // SubProg find_token_text pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13481);
        _13482 = (object)*(((s1_ptr)_2)->base + 3);
        _13481 = NOVALUE;
        // SubProg find_token_text pc: 29 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _13482, _tokid_23649)){
            _13482 = NOVALUE;
            goto L3; // [29] 50
        }
        _13482 = NOVALUE;
        // SubProg find_token_text pc: 33 op: STARTLINE (58)

        /** keylist.e:207				return keylist[i][1]*/
        // SubProg find_token_text pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_token_text pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _13484 = (object)*(((s1_ptr)_2)->base + _i_23651);
        // SubProg find_token_text pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13484);
        _13485 = (object)*(((s1_ptr)_2)->base + 1);
        _13484 = NOVALUE;
        // SubProg find_token_text pc: 45 op: RETURNF (28)
        Ref(_13485);

// Exiting block BLOCK: find_token_text

// block var tokid_23649
        return _13485;
        // SubProg find_token_text pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 23647 op: 159
        // SubProg find_token_text pc: 50 op: STARTLINE (58)

        /** keylist.e:209		end for*/
        // SubProg find_token_text pc: 52 op: ENDFOR_INT_UP1 (54)
        _i_23651 = _i_23651 + 1;
        goto L1; // [52] 17
L2: // addr: 57 pc: 52 sub: 23647 op: 54
        ;
    }
    // SubProg find_token_text pc: 57 op: STARTLINE (58)

    /** keylist.e:210		return LexName(tokid, "unknown word")*/
    // SubProg find_token_text pc: 59 op: PROC (27)
    RefDS(_13486);
    _13487 = _47LexName(_tokid_23649, _13486);
    // SubProg find_token_text pc: 64 op: RETURNF (28)

// Exiting block BLOCK: find_token_text

// block var tokid_23649
    _13485 = NOVALUE;
    return _13487;
    // SubProg find_token_text pc: 68 op: BADRETURNF (43)
    ;
}



// 0xA955B644
