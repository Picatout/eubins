// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _59iif(object _test_22506, object _ifTrue_22507, object _ifFalse_22508)
{
    object _0, _1, _2;
    

    /** utils.e:54		if test then*/
    if (_test_22506 == 0)
    {
        goto L1; // [3] 13
    }
    else{
    }

    /** utils.e:55			return ifTrue*/
    DeRefDS(_ifFalse_22508);
    return _ifTrue_22507;
L1: 

    /** utils.e:57		return ifFalse*/
    DeRef(_ifTrue_22507);
    return _ifFalse_22508;
    ;
}



// 0xC8871FB5
