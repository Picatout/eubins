// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _6open_dll(object _file_name_948)
{
    object _fh_958 = NOVALUE;
// skipping _373  name type: 0
    object _372 = NOVALUE; // 962 372
// skipping _371  name type: 0
    object _370 = NOVALUE; // 959 370
    object _369 = NOVALUE; // 957 369
    object _368 = NOVALUE; // 954 368
    object _367 = NOVALUE; // 953 367
    object _366 = NOVALUE; // 952 366
    object _365 = NOVALUE; // 951 365
    object _364 = NOVALUE; // 950 364
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg open_dll pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg open_dll pc: 3 op: STARTLINE (58)

    /** dll.e:182		if length(file_name) > 0 and types:string(file_name) then*/
    // SubProg open_dll pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_file_name_948)){
            _364 = SEQ_PTR(_file_name_948)->length;
    }
    else {
        _364 = 1;
    }
    // SubProg open_dll pc: 8 op: GREATER (6)
    _365 = (_364 > 0);
    _364 = NOVALUE;
    // SubProg open_dll pc: 12 op: SC1_AND_IF (146)
    if (_365 == 0) {
        goto L1; // [12] 35
    }
    // SubProg open_dll pc: 16 op: PROC (27)
    RefDS(_file_name_948);
    _367 = _8string(_file_name_948);
    // SubProg open_dll pc: 20 op: NOP1 (159)
    // SubProg open_dll pc: 21 op: IF (20)
    if (_367 == 0) {
        DeRef(_367);
        _367 = NOVALUE;
        goto L1; // [21] 35
    }
    else {
        if (!IS_ATOM_INT(_367) && DBL_PTR(_367)->dbl == 0.0){
            DeRef(_367);
            _367 = NOVALUE;
            goto L1; // [21] 35
        }
        DeRef(_367);
        _367 = NOVALUE;
    }
    DeRef(_367);
    _367 = NOVALUE;
    // SubProg open_dll pc: 24 op: STARTLINE (58)

    /** dll.e:183			return machine_func(M_OPEN_DLL, file_name)*/
    // SubProg open_dll pc: 26 op: MACHINE_FUNC (111)
    _368 = machine(50, _file_name_948);
    // SubProg open_dll pc: 30 op: RETURNF (28)

// Exiting block BLOCK: open_dll

// block var file_name_948
    DeRefDS(_file_name_948);
    DeRef(_365);
    _365 = NOVALUE;
    return _368;
    // SubProg open_dll pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 946 op: 159
    // SubProg open_dll pc: 35 op: STARTLINE (58)

    /** dll.e:188		for idx = 1 to length(file_name) do*/
    // SubProg open_dll pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_file_name_948)){
            _369 = SEQ_PTR(_file_name_948)->length;
    }
    else {
        _369 = 1;
    }
    // SubProg open_dll pc: 40 op: FOR_I (125)
    {
        object _idx_956;
        _idx_956 = 1;
L2: // addr: 47 pc: 40 sub: 946 op: 125
        if (_idx_956 > _369){
            goto L3; // [40] 82
        }
        // SubProg open_dll pc: 47 op: STARTLINE (58)

        /** dll.e:189			atom fh = machine_func(M_OPEN_DLL, file_name[idx])*/
        // SubProg open_dll pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_file_name_948);
        _370 = (object)*(((s1_ptr)_2)->base + _idx_956);
        // SubProg open_dll pc: 53 op: MACHINE_FUNC (111)
        DeRef(_fh_958);
        _fh_958 = machine(50, _370);
        _370 = NOVALUE;
        // SubProg open_dll pc: 57 op: STARTLINE (58)

        /** dll.e:190			if not fh = 0 then*/
        // SubProg open_dll pc: 59 op: NOT (7)
        if (IS_ATOM_INT(_fh_958)) {
            _372 = (_fh_958 == 0);
        }
        else {
            _372 = unary_op(NOT, _fh_958);
        }
        // SubProg open_dll pc: 62 op: EQUALS_IFW (104)
        if (_372 != 0)
        goto L4; // [62] 73
        // SubProg open_dll pc: 66 op: STARTLINE (58)

        /** dll.e:191				return fh*/
        // SubProg open_dll pc: 68 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: open_dll

// block var file_name_948
        DeRefDS(_file_name_948);
        DeRef(_368);
        _368 = NOVALUE;
        DeRef(_365);
        _365 = NOVALUE;
        _372 = NOVALUE;
        return _fh_958;
        // SubProg open_dll pc: 72 op: NOP1 (159)
L4: // addr: 73 pc: 72 sub: 946 op: 159
        // SubProg open_dll pc: 73 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fh_958
        DeRef(_fh_958);
        _fh_958 = NOVALUE;
        // SubProg open_dll pc: 75 op: STARTLINE (58)

        /** dll.e:193		end for*/
        // SubProg open_dll pc: 77 op: ENDFOR_INT_UP1 (54)
        _idx_956 = _idx_956 + 1;
        goto L2; // [77] 47
L3: // addr: 82 pc: 77 sub: 946 op: 54
        ;
    }
    // SubProg open_dll pc: 82 op: STARTLINE (58)

    /** dll.e:195		return 0*/
    // SubProg open_dll pc: 84 op: RETURNF (28)

// Exiting block BLOCK: open_dll

// block var file_name_948
    DeRefDS(_file_name_948);
    DeRef(_368);
    _368 = NOVALUE;
    DeRef(_365);
    _365 = NOVALUE;
    DeRef(_372);
    _372 = NOVALUE;
    return 0;
    // SubProg open_dll pc: 88 op: BADRETURNF (43)
    ;
}


object _6define_c_func(object _lib_988, object _routine_name_989, object _arg_types_990, object _return_type_991)
{
    object _safe_address_inlined_safe_address_at_11_996 = NOVALUE;
    object _msg_inlined_crash_at_26_999 = NOVALUE;
    object _386 = NOVALUE; // 1001 386
    object _385 = NOVALUE; // 1000 385
    object _384 = NOVALUE; // 997 384
    object _383 = NOVALUE; // 994 383
    object _382 = NOVALUE; // 993 382
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg define_c_func pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg define_c_func pc: 3 op: STARTLINE (58)

    /** dll.e:395		  if atom(routine_name) and not machine:safe_address(routine_name, 1, machine:A_EXECUTE) then*/
    // SubProg define_c_func pc: 5 op: IS_AN_ATOM (67)
    _382 = 0;
    // SubProg define_c_func pc: 8 op: SC1_AND_IF (146)
    if (_382 == 0) {
        goto L1; // [8] 46
    }
    // SubProg define_c_func pc: 12 op: STARTLINE (58)

    /** memory.e:118		return 1*/
    // SubProg define_c_func pc: 14 op: ASSIGN (18)
    _safe_address_inlined_safe_address_at_11_996 = 1;
    // SubProg define_c_func pc: 17 op: NOP1 (159)
    // SubProg define_c_func pc: 18 op: NOT (7)
    _384 = (1 == 0);
    // SubProg define_c_func pc: 21 op: NOP1 (159)
    // SubProg define_c_func pc: 22 op: IF (20)
    if (_384 == 0)
    {
        DeRef(_384);
        _384 = NOVALUE;
        goto L1; // [22] 46
    }
    else{
        DeRef(_384);
        _384 = NOVALUE;
    }
    // SubProg define_c_func pc: 25 op: STARTLINE (58)

    /** dll.e:396		      error:crash("A C function is being defined from Non-executable memory.")*/
    // SubProg define_c_func pc: 27 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg define_c_func pc: 29 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_26_999);
    _msg_inlined_crash_at_26_999 = EPrintf(-9999999, _379, _5);
    // SubProg define_c_func pc: 33 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg define_c_func pc: 35 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_26_999);
    // SubProg define_c_func pc: 38 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg define_c_func pc: 40 op: ELSE (23)
    goto L2; // [40] 43
    // SubProg define_c_func pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 986 op: 159
    // SubProg define_c_func pc: 43 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from define_c_func @ 26

// block var msg_inlined_crash_at_26_999
    DeRefi(_msg_inlined_crash_at_26_999);
    _msg_inlined_crash_at_26_999 = NOVALUE;
    // SubProg define_c_func pc: 45 op: NOP1 (159)
L1: // addr: 46 pc: 45 sub: 986 op: 159
    // SubProg define_c_func pc: 46 op: STARTLINE (58)

    /** dll.e:398		  return machine_func(M_DEFINE_C, {lib, routine_name, arg_types, return_type})*/
    // SubProg define_c_func pc: 48 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_lib_988);
    ((intptr_t*)_2)[1] = _lib_988;
    Ref(_routine_name_989);
    ((intptr_t*)_2)[2] = _routine_name_989;
    RefDS(_arg_types_990);
    ((intptr_t*)_2)[3] = _arg_types_990;
    ((intptr_t*)_2)[4] = _return_type_991;
    _385 = MAKE_SEQ(_1);
    // SubProg define_c_func pc: 55 op: MACHINE_FUNC (111)
    _386 = machine(51, _385);
    DeRefDS(_385);
    _385 = NOVALUE;
    // SubProg define_c_func pc: 59 op: RETURNF (28)

// Exiting block BLOCK: define_c_func

// block var lib_988
    DeRef(_lib_988);

// block var routine_name_989
    DeRefi(_routine_name_989);

// block var arg_types_990
    DeRefDSi(_arg_types_990);

// block var return_type_991
    return _386;
    // SubProg define_c_func pc: 63 op: BADRETURNF (43)
    ;
}



// 0x71E7BBB1
