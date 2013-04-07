// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _3warning_file(object _file_path_256)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg warning_file pc: 1 op: STARTLINE (58)

    /** error.e:167		machine_proc(M_WARNING_FILE, file_path)*/
    // SubProg warning_file pc: 3 op: MACHINE_PROC (112)
    machine(72, _file_path_256);
    // SubProg warning_file pc: 6 op: STARTLINE (58)

    /** error.e:168	end procedure*/
    // SubProg warning_file pc: 8 op: RETURNP (29)

// Exiting block BLOCK: warning_file

// block var file_path_256
    DeRef(_file_path_256);
    return;
    // SubProg warning_file pc: 11 op: BADRETURNF (43)
    ;
}



// 0x4CD98D61
