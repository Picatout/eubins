// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _6deallocate(object _addr_351)
{
    object _0, _1, _2;
    

    /** memory.e:71		ifdef DATA_EXECUTE then*/

    /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
    machine(17, _addr_351);

    /** memory.e:83	end procedure*/
    DeRef(_addr_351);
    return;
    ;
}


object _6prepare_block(object _addr_377, object _a_378, object _protection_379)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_a_378)) {
        _1 = (object)(DBL_PTR(_a_378)->dbl);
        DeRefDS(_a_378);
        _a_378 = _1;
    }
    if (!IS_ATOM_INT(_protection_379)) {
        _1 = (object)(DBL_PTR(_protection_379)->dbl);
        DeRefDS(_protection_379);
        _protection_379 = _1;
    }

    /** memory.e:134		return addr*/
    return _addr_377;
    ;
}



// 0x6E66DBD9
