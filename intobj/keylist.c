// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _62find_category(object _tokid_23654)
{
    object _catname_23655 = NOVALUE;
// skipping _13498  name type: 0
    object _13497 = NOVALUE; // 23669 13497
    object _13496 = NOVALUE; // 23668 13496
// skipping _13495  name type: 0
    object _13494 = NOVALUE; // 23664 13494
    object _13493 = NOVALUE; // 23663 13493
    object _13492 = NOVALUE; // 23660 13492
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_category pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tokid_23654)) {
        _1 = (object)(DBL_PTR(_tokid_23654)->dbl);
        DeRefDS(_tokid_23654);
        _tokid_23654 = _1;
    }
    // SubProg find_category pc: 3 op: STARTLINE (58)

    /** keylist.e:194		sequence catname = "reserved word"*/
    // SubProg find_category pc: 5 op: ASSIGN (18)
    RefDS(_13491);
    DeRef(_catname_23655);
    _catname_23655 = _13491;
    // SubProg find_category pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg find_category pc: 10 op: STARTLINE (58)

    /** keylist.e:195		for i = 1 to length(token_category) do*/
    // SubProg find_category pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_category pc: 14 op: LENGTH (42)
    // Known sequence length:
    _13492 = 73;
    // SubProg find_category pc: 17 op: FOR_I (125)
    {
        object _i_23658;
        _i_23658 = 1;
L1: // addr: 24 pc: 17 sub: 23652 op: 125
        if (_i_23658 > 73){
            goto L2; // [17] 72
        }
        // SubProg find_category pc: 24 op: STARTLINE (58)

        /** keylist.e:196			if token_category[i][1] = tokid then*/
        // SubProg find_category pc: 26 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_category pc: 28 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_29token_category_12007);
        _13493 = (object)*(((s1_ptr)_2)->base + _i_23658);
        // SubProg find_category pc: 32 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13493);
        _13494 = (object)*(((s1_ptr)_2)->base + 1);
        _13493 = NOVALUE;
        // SubProg find_category pc: 36 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _13494, _tokid_23654)){
            _13494 = NOVALUE;
            goto L3; // [36] 65
        }
        _13494 = NOVALUE;
        // SubProg find_category pc: 40 op: STARTLINE (58)

        /** keylist.e:197				catname = token_catname[token_category[i][2]]*/
        // SubProg find_category pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_category pc: 44 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_category pc: 46 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_29token_category_12007);
        _13496 = (object)*(((s1_ptr)_2)->base + _i_23658);
        // SubProg find_category pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13496);
        _13497 = (object)*(((s1_ptr)_2)->base + 2);
        _13496 = NOVALUE;
        // SubProg find_category pc: 54 op: RHS_SUBS_CHECK (92)
        DeRef(_catname_23655);
        _2 = (object)SEQ_PTR(_29token_catname_11994);
        if (!IS_ATOM_INT(_13497)){
            _catname_23655 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_13497)->dbl));
        }
        else{
            _catname_23655 = (object)*(((s1_ptr)_2)->base + _13497);
        }
        RefDS(_catname_23655);
        // SubProg find_category pc: 58 op: SEQUENCE_CHECK (97)
        // SubProg find_category pc: 60 op: STARTLINE (58)

        /** keylist.e:198				exit*/
        // SubProg find_category pc: 62 op: EXIT (61)
        goto L2; // [62] 72
        // SubProg find_category pc: 64 op: NOP1 (159)
L3: // addr: 65 pc: 64 sub: 23652 op: 159
        // SubProg find_category pc: 65 op: STARTLINE (58)

        /** keylist.e:200		end for*/
        // SubProg find_category pc: 67 op: ENDFOR_INT_UP1 (54)
        _i_23658 = _i_23658 + 1;
        goto L1; // [67] 24
L2: // addr: 72 pc: 67 sub: 23652 op: 54
        ;
    }
    // SubProg find_category pc: 72 op: STARTLINE (58)

    /** keylist.e:201		return catname*/
    // SubProg find_category pc: 74 op: RETURNF (28)

// Exiting block BLOCK: find_category

// block var tokid_23654
    _13497 = NOVALUE;
    return _catname_23655;
    // SubProg find_category pc: 78 op: BADRETURNF (43)
    ;
}


object _62find_token_text(object _tokid_23673)
{
    object _13506 = NOVALUE; // 23685 13506
    object _13504 = NOVALUE; // 23682 13504
    object _13503 = NOVALUE; // 23681 13503
// skipping _13502  name type: 0
    object _13501 = NOVALUE; // 23679 13501
    object _13500 = NOVALUE; // 23678 13500
    object _13499 = NOVALUE; // 23676 13499
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_token_text pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tokid_23673)) {
        _1 = (object)(DBL_PTR(_tokid_23673)->dbl);
        DeRefDS(_tokid_23673);
        _tokid_23673 = _1;
    }
    // SubProg find_token_text pc: 3 op: STARTLINE (58)

    /** keylist.e:205		for i = 1 to length(keylist) do*/
    // SubProg find_token_text pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_token_text pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_62keylist_22772)){
            _13499 = SEQ_PTR(_62keylist_22772)->length;
    }
    else {
        _13499 = 1;
    }
    // SubProg find_token_text pc: 10 op: FOR_I (125)
    {
        object _i_23675;
        _i_23675 = 1;
L1: // addr: 17 pc: 10 sub: 23671 op: 125
        if (_i_23675 > _13499){
            goto L2; // [10] 57
        }
        // SubProg find_token_text pc: 17 op: STARTLINE (58)

        /** keylist.e:206			if keylist[i][3] = tokid then*/
        // SubProg find_token_text pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_token_text pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _13500 = (object)*(((s1_ptr)_2)->base + _i_23675);
        // SubProg find_token_text pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13500);
        _13501 = (object)*(((s1_ptr)_2)->base + 3);
        _13500 = NOVALUE;
        // SubProg find_token_text pc: 29 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _13501, _tokid_23673)){
            _13501 = NOVALUE;
            goto L3; // [29] 50
        }
        _13501 = NOVALUE;
        // SubProg find_token_text pc: 33 op: STARTLINE (58)

        /** keylist.e:207				return keylist[i][1]*/
        // SubProg find_token_text pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_token_text pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _13503 = (object)*(((s1_ptr)_2)->base + _i_23675);
        // SubProg find_token_text pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_13503);
        _13504 = (object)*(((s1_ptr)_2)->base + 1);
        _13503 = NOVALUE;
        // SubProg find_token_text pc: 45 op: RETURNF (28)
        Ref(_13504);

// Exiting block BLOCK: find_token_text

// block var tokid_23673
        return _13504;
        // SubProg find_token_text pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 23671 op: 159
        // SubProg find_token_text pc: 50 op: STARTLINE (58)

        /** keylist.e:209		end for*/
        // SubProg find_token_text pc: 52 op: ENDFOR_INT_UP1 (54)
        _i_23675 = _i_23675 + 1;
        goto L1; // [52] 17
L2: // addr: 57 pc: 52 sub: 23671 op: 54
        ;
    }
    // SubProg find_token_text pc: 57 op: STARTLINE (58)

    /** keylist.e:210		return LexName(tokid, "unknown word")*/
    // SubProg find_token_text pc: 59 op: PROC (27)
    RefDS(_13505);
    _13506 = _45LexName(_tokid_23673, _13505);
    // SubProg find_token_text pc: 64 op: RETURNF (28)

// Exiting block BLOCK: find_token_text

// block var tokid_23673
    _13504 = NOVALUE;
    return _13506;
    // SubProg find_token_text pc: 68 op: BADRETURNF (43)
    ;
}



// 0x8CE25E29
