// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _5any_key(object _prompt_13800, object _con_13802)
{
    object _wait_key_inlined_wait_key_at_27_13807 = NOVALUE;
// skipping _7633  name type: 0
    object _7632 = NOVALUE; // 13804 7632
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg any_key pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg any_key pc: 3 op: INTEGER_CHECK (96)
    // SubProg any_key pc: 5 op: STARTLINE (58)

    /** console.e:883		if not find(con, {1,2}) then*/
    // SubProg any_key pc: 7 op: FIND_FROM (176)
    _7632 = find_from(_con_13802, _7186, 1);
    // SubProg any_key pc: 12 op: NOT_IFW (108)
    if (_7632 != 0)
    goto L1; // [12] 21
    _7632 = NOVALUE;
    // SubProg any_key pc: 15 op: STARTLINE (58)

    /** console.e:884			con = 1*/
    // SubProg any_key pc: 17 op: ASSIGN_I (113)
    _con_13802 = 1;
    // SubProg any_key pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 13798 op: 159
    // SubProg any_key pc: 21 op: STARTLINE (58)

    /** console.e:886		puts(con, prompt)*/
    // SubProg any_key pc: 23 op: PUTS (44)
    EPuts(_con_13802, _prompt_13800); // DJP 
    // SubProg any_key pc: 26 op: STARTLINE (58)

    /** console.e:887		wait_key()*/
    // SubProg any_key pc: 28 op: STARTLINE (58)

    /** console.e:854		return machine_func(M_WAIT_KEY, 0)*/
    // SubProg any_key pc: 30 op: MACHINE_FUNC (111)
    _wait_key_inlined_wait_key_at_27_13807 = machine(26, 0);
    // SubProg any_key pc: 34 op: NOP1 (159)
    // SubProg any_key pc: 35 op: STARTLINE (58)

    /** console.e:888		puts(con, "\n")*/
    // SubProg any_key pc: 37 op: PUTS (44)
    EPuts(_con_13802, _3182); // DJP 
    // SubProg any_key pc: 40 op: STARTLINE (58)

    /** console.e:889	end procedure*/
    // SubProg any_key pc: 42 op: RETURNP (29)

// Exiting block BLOCK: any_key

// block var prompt_13800
    DeRefDS(_prompt_13800);

// block var con_13802
    return;
    // SubProg any_key pc: 45 op: BADRETURNF (43)
    ;
}


void _5maybe_any_key(object _prompt_13810, object _con_13811)
{
    object _has_console_inlined_has_console_at_6_13814 = NOVALUE;
// skipping _7634  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg maybe_any_key pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg maybe_any_key pc: 3 op: INTEGER_CHECK (96)
    // SubProg maybe_any_key pc: 5 op: STARTLINE (58)

    /** console.e:923		if not has_console() then*/
    // SubProg maybe_any_key pc: 7 op: STARTLINE (58)

    /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
    // SubProg maybe_any_key pc: 9 op: MACHINE_FUNC (111)
    DeRef(_has_console_inlined_has_console_at_6_13814);
    _has_console_inlined_has_console_at_6_13814 = machine(99, 0);
    // SubProg maybe_any_key pc: 13 op: NOP1 (159)
    // SubProg maybe_any_key pc: 14 op: NOT_IFW (108)
    if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_13814)) {
        if (_has_console_inlined_has_console_at_6_13814 != 0){
            goto L1; // [14] 24
        }
    }
    else {
        if (DBL_PTR(_has_console_inlined_has_console_at_6_13814)->dbl != 0.0){
            goto L1; // [14] 24
        }
    }
    // SubProg maybe_any_key pc: 17 op: STARTLINE (58)

    /** console.e:924			any_key(prompt, con)*/
    // SubProg maybe_any_key pc: 19 op: PROC (27)
    RefDS(_prompt_13810);
    _5any_key(_prompt_13810, _con_13811);
    // SubProg maybe_any_key pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 13808 op: 159
    // SubProg maybe_any_key pc: 24 op: STARTLINE (58)

    /** console.e:926	end procedure*/
    // SubProg maybe_any_key pc: 26 op: RETURNP (29)

// Exiting block BLOCK: maybe_any_key

// block var prompt_13810
    DeRefDS(_prompt_13810);

// block var con_13811
    return;
    // SubProg maybe_any_key pc: 29 op: BADRETURNF (43)
    ;
}



// 0xA45D7A88
