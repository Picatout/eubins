// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _5deallocate(object _addr_351)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg deallocate pc: 1 op: STARTLINE (58)

    /** memory.e:71		ifdef DATA_EXECUTE then*/
    // SubProg deallocate pc: 3 op: STARTLINE (58)

    /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
    // SubProg deallocate pc: 5 op: MACHINE_PROC (112)
    machine(17, _addr_351);
    // SubProg deallocate pc: 8 op: STARTLINE (58)

    /** memory.e:83	end procedure*/
    // SubProg deallocate pc: 10 op: RETURNP (29)

// Exiting block BLOCK: deallocate

// block var addr_351
    DeRef(_addr_351);
    return;
    // SubProg deallocate pc: 13 op: BADRETURNF (43)
    ;
}


object _5prepare_block(object _addr_377, object _a_378, object _protection_379)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg prepare_block pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_a_378)) {
        _1 = (object)(DBL_PTR(_a_378)->dbl);
        DeRefDS(_a_378);
        _a_378 = _1;
    }
    // SubProg prepare_block pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_protection_379)) {
        _1 = (object)(DBL_PTR(_protection_379)->dbl);
        DeRefDS(_protection_379);
        _protection_379 = _1;
    }
    // SubProg prepare_block pc: 5 op: STARTLINE (58)

    /** memory.e:134		return addr*/
    // SubProg prepare_block pc: 7 op: RETURNF (28)

// Exiting block BLOCK: prepare_block
    return _addr_377;
    // SubProg prepare_block pc: 11 op: BADRETURNF (43)
    ;
}



// 0xDEAA9CB2
