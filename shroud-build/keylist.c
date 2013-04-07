// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _64find_category(object _tokid_23632)
{
    object _catname_23633 = NOVALUE;
    object _13472 = NOVALUE;
    object _13471 = NOVALUE;
    object _13469 = NOVALUE;
    object _13468 = NOVALUE;
    object _13467 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_tokid_23632)) {
        _1 = (object)(DBL_PTR(_tokid_23632)->dbl);
        DeRefDS(_tokid_23632);
        _tokid_23632 = _1;
    }

    /** keylist.e:194		sequence catname = "reserved word"*/
    RefDS(_13466);
    DeRef(_catname_23633);
    _catname_23633 = _13466;

    /** keylist.e:195		for i = 1 to length(token_category) do*/
    _13467 = 73;
    {
        object _i_23636;
        _i_23636 = 1;
L1: 
        if (_i_23636 > 73){
            goto L2; // [17] 72
        }

        /** keylist.e:196			if token_category[i][1] = tokid then*/
        _2 = (object)SEQ_PTR(_40token_category_16350);
        _13468 = (object)*(((s1_ptr)_2)->base + _i_23636);
        _2 = (object)SEQ_PTR(_13468);
        _13469 = (object)*(((s1_ptr)_2)->base + 1);
        _13468 = NOVALUE;
        if (binary_op_a(NOTEQ, _13469, _tokid_23632)){
            _13469 = NOVALUE;
            goto L3; // [36] 65
        }
        _13469 = NOVALUE;

        /** keylist.e:197				catname = token_catname[token_category[i][2]]*/
        _2 = (object)SEQ_PTR(_40token_category_16350);
        _13471 = (object)*(((s1_ptr)_2)->base + _i_23636);
        _2 = (object)SEQ_PTR(_13471);
        _13472 = (object)*(((s1_ptr)_2)->base + 2);
        _13471 = NOVALUE;
        DeRef(_catname_23633);
        _2 = (object)SEQ_PTR(_40token_catname_16337);
        if (!IS_ATOM_INT(_13472)){
            _catname_23633 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_13472)->dbl));
        }
        else{
            _catname_23633 = (object)*(((s1_ptr)_2)->base + _13472);
        }
        RefDS(_catname_23633);

        /** keylist.e:198				exit*/
        goto L2; // [62] 72
L3: 

        /** keylist.e:200		end for*/
        _i_23636 = _i_23636 + 1;
        goto L1; // [67] 24
L2: 
        ;
    }

    /** keylist.e:201		return catname*/
    _13472 = NOVALUE;
    return _catname_23633;
    ;
}


object _64find_token_text(object _tokid_23651)
{
    object _13481 = NOVALUE;
    object _13479 = NOVALUE;
    object _13478 = NOVALUE;
    object _13476 = NOVALUE;
    object _13475 = NOVALUE;
    object _13474 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_tokid_23651)) {
        _1 = (object)(DBL_PTR(_tokid_23651)->dbl);
        DeRefDS(_tokid_23651);
        _tokid_23651 = _1;
    }

    /** keylist.e:205		for i = 1 to length(keylist) do*/
    if (IS_SEQUENCE(_64keylist_22750)){
            _13474 = SEQ_PTR(_64keylist_22750)->length;
    }
    else {
        _13474 = 1;
    }
    {
        object _i_23653;
        _i_23653 = 1;
L1: 
        if (_i_23653 > _13474){
            goto L2; // [10] 57
        }

        /** keylist.e:206			if keylist[i][3] = tokid then*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _13475 = (object)*(((s1_ptr)_2)->base + _i_23653);
        _2 = (object)SEQ_PTR(_13475);
        _13476 = (object)*(((s1_ptr)_2)->base + 3);
        _13475 = NOVALUE;
        if (binary_op_a(NOTEQ, _13476, _tokid_23651)){
            _13476 = NOVALUE;
            goto L3; // [29] 50
        }
        _13476 = NOVALUE;

        /** keylist.e:207				return keylist[i][1]*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _13478 = (object)*(((s1_ptr)_2)->base + _i_23653);
        _2 = (object)SEQ_PTR(_13478);
        _13479 = (object)*(((s1_ptr)_2)->base + 1);
        _13478 = NOVALUE;
        Ref(_13479);
        return _13479;
L3: 

        /** keylist.e:209		end for*/
        _i_23653 = _i_23653 + 1;
        goto L1; // [52] 17
L2: 
        ;
    }

    /** keylist.e:210		return LexName(tokid, "unknown word")*/
    RefDS(_13480);
    _13481 = _49LexName(_tokid_23651, _13480);
    _13479 = NOVALUE;
    return _13481;
    ;
}



// 0xE707BBF9
