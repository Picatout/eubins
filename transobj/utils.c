// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _57iif(object _test_22128, object _ifTrue_22129, object _ifFalse_22130)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg iif pc: 1 op: STARTLINE (58)

    /** utils.e:54		if test then*/
    // SubProg iif pc: 3 op: IF (20)
    if (_test_22128 == 0)
    {
        goto L1; // [3] 13
    }
    else{
    }
    // SubProg iif pc: 6 op: STARTLINE (58)

    /** utils.e:55			return ifTrue*/
    // SubProg iif pc: 8 op: RETURNF (28)

// Exiting block BLOCK: iif

// block var test_22128

// block var ifFalse_22130
    DeRefDS(_ifFalse_22130);
    return _ifTrue_22129;
    // SubProg iif pc: 12 op: NOP1 (159)
L1: // addr: 13 pc: 12 sub: 22126 op: 159
    // SubProg iif pc: 13 op: STARTLINE (58)

    /** utils.e:57		return ifFalse*/
    // SubProg iif pc: 15 op: RETURNF (28)

// Exiting block BLOCK: iif

// block var test_22128

// block var ifTrue_22129
    DeRef(_ifTrue_22129);
    return _ifFalse_22130;
    // SubProg iif pc: 19 op: BADRETURNF (43)
    ;
}



// 0x765784D2
