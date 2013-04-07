// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _29any_key(object _prompt_13801, object _con_13803)
{
    object _wait_key_inlined_wait_key_at_27_13808 = NOVALUE;
    object _7626 = NOVALUE;
    object _0, _1, _2;
    

    /** console.e:883		if not find(con, {1,2}) then*/
    _7626 = find_from(_con_13803, _7180, 1);
    if (_7626 != 0)
    goto L1; // [12] 21
    _7626 = NOVALUE;

    /** console.e:884			con = 1*/
    _con_13803 = 1;
L1: 

    /** console.e:886		puts(con, prompt)*/
    EPuts(_con_13803, _prompt_13801); // DJP 

    /** console.e:887		wait_key()*/

    /** console.e:854		return machine_func(M_WAIT_KEY, 0)*/
    _wait_key_inlined_wait_key_at_27_13808 = machine(26, 0);

    /** console.e:888		puts(con, "\n")*/
    EPuts(_con_13803, _1602); // DJP 

    /** console.e:889	end procedure*/
    DeRefDS(_prompt_13801);
    return;
    ;
}


void _29maybe_any_key(object _prompt_13811, object _con_13812)
{
    object _has_console_inlined_has_console_at_6_13815 = NOVALUE;
    object _0, _1, _2;
    

    /** console.e:923		if not has_console() then*/

    /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
    DeRef(_has_console_inlined_has_console_at_6_13815);
    _has_console_inlined_has_console_at_6_13815 = machine(99, 0);
    if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_13815)) {
        if (_has_console_inlined_has_console_at_6_13815 != 0){
            goto L1; // [14] 24
        }
    }
    else {
        if (DBL_PTR(_has_console_inlined_has_console_at_6_13815)->dbl != 0.0){
            goto L1; // [14] 24
        }
    }

    /** console.e:924			any_key(prompt, con)*/
    RefDS(_prompt_13811);
    _29any_key(_prompt_13811, _con_13812);
L1: 

    /** console.e:926	end procedure*/
    DeRefDS(_prompt_13811);
    return;
    ;
}



// 0x307B8C26
