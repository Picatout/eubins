// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _56iif(object _test_22152, object _ifTrue_22153, object _ifFalse_22154)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg iif pc: 1 op: STARTLINE (58)

    /** utils.e:54		if test then*/
    // SubProg iif pc: 3 op: IF (20)
    if (_test_22152 == 0)
    {
        goto L1; // [3] 13
    }
    else{
    }
    // SubProg iif pc: 6 op: STARTLINE (58)

    /** utils.e:55			return ifTrue*/
    // SubProg iif pc: 8 op: RETURNF (28)

// Exiting block BLOCK: iif

// block var test_22152

// block var ifFalse_22154
    DeRefDS(_ifFalse_22154);
    return _ifTrue_22153;
    // SubProg iif pc: 12 op: NOP1 (159)
L1: // addr: 13 pc: 12 sub: 22150 op: 159
    // SubProg iif pc: 13 op: STARTLINE (58)

    /** utils.e:57		return ifFalse*/
    // SubProg iif pc: 15 op: RETURNF (28)

// Exiting block BLOCK: iif

// block var test_22152

// block var ifTrue_22153
    DeRef(_ifTrue_22153);
    return _ifFalse_22154;
    // SubProg iif pc: 19 op: BADRETURNF (43)
    ;
}



// 0x1B51482C
