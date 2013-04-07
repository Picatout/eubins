// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _12open_dll(object _file_name_1045)
{
    object _fh_1055 = NOVALUE;
// skipping _431  name type: 0
    object _430 = NOVALUE; // 1059 430
// skipping _429  name type: 0
    object _428 = NOVALUE; // 1056 428
    object _427 = NOVALUE; // 1054 427
    object _426 = NOVALUE; // 1051 426
    object _425 = NOVALUE; // 1050 425
    object _424 = NOVALUE; // 1049 424
    object _423 = NOVALUE; // 1048 423
    object _422 = NOVALUE; // 1047 422
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg open_dll pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg open_dll pc: 3 op: STARTLINE (58)

    /** dll.e:182		if length(file_name) > 0 and types:string(file_name) then*/
    // SubProg open_dll pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_file_name_1045)){
            _422 = SEQ_PTR(_file_name_1045)->length;
    }
    else {
        _422 = 1;
    }
    // SubProg open_dll pc: 8 op: GREATER (6)
    _423 = (_422 > 0);
    _422 = NOVALUE;
    // SubProg open_dll pc: 12 op: SC1_AND_IF (146)
    if (_423 == 0) {
        goto L1; // [12] 35
    }
    // SubProg open_dll pc: 16 op: PROC (27)
    RefDS(_file_name_1045);
    _425 = _6string(_file_name_1045);
    // SubProg open_dll pc: 20 op: NOP1 (159)
    // SubProg open_dll pc: 21 op: IF (20)
    if (_425 == 0) {
        DeRef(_425);
        _425 = NOVALUE;
        goto L1; // [21] 35
    }
    else {
        if (!IS_ATOM_INT(_425) && DBL_PTR(_425)->dbl == 0.0){
            DeRef(_425);
            _425 = NOVALUE;
            goto L1; // [21] 35
        }
        DeRef(_425);
        _425 = NOVALUE;
    }
    DeRef(_425);
    _425 = NOVALUE;
    // SubProg open_dll pc: 24 op: STARTLINE (58)

    /** dll.e:183			return machine_func(M_OPEN_DLL, file_name)*/
    // SubProg open_dll pc: 26 op: MACHINE_FUNC (111)
    _426 = machine(50, _file_name_1045);
    // SubProg open_dll pc: 30 op: RETURNF (28)

// Exiting block BLOCK: open_dll

// block var file_name_1045
    DeRefDS(_file_name_1045);
    DeRef(_423);
    _423 = NOVALUE;
    return _426;
    // SubProg open_dll pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 1043 op: 159
    // SubProg open_dll pc: 35 op: STARTLINE (58)

    /** dll.e:188		for idx = 1 to length(file_name) do*/
    // SubProg open_dll pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_file_name_1045)){
            _427 = SEQ_PTR(_file_name_1045)->length;
    }
    else {
        _427 = 1;
    }
    // SubProg open_dll pc: 40 op: FOR_I (125)
    {
        object _idx_1053;
        _idx_1053 = 1;
L2: // addr: 47 pc: 40 sub: 1043 op: 125
        if (_idx_1053 > _427){
            goto L3; // [40] 82
        }
        // SubProg open_dll pc: 47 op: STARTLINE (58)

        /** dll.e:189			atom fh = machine_func(M_OPEN_DLL, file_name[idx])*/
        // SubProg open_dll pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_file_name_1045);
        _428 = (object)*(((s1_ptr)_2)->base + _idx_1053);
        // SubProg open_dll pc: 53 op: MACHINE_FUNC (111)
        DeRef(_fh_1055);
        _fh_1055 = machine(50, _428);
        _428 = NOVALUE;
        // SubProg open_dll pc: 57 op: STARTLINE (58)

        /** dll.e:190			if not fh = 0 then*/
        // SubProg open_dll pc: 59 op: NOT (7)
        if (IS_ATOM_INT(_fh_1055)) {
            _430 = (_fh_1055 == 0);
        }
        else {
            _430 = unary_op(NOT, _fh_1055);
        }
        // SubProg open_dll pc: 62 op: EQUALS_IFW (104)
        if (_430 != 0)
        goto L4; // [62] 73
        // SubProg open_dll pc: 66 op: STARTLINE (58)

        /** dll.e:191				return fh*/
        // SubProg open_dll pc: 68 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: open_dll

// block var file_name_1045
        DeRefDS(_file_name_1045);
        _430 = NOVALUE;
        DeRef(_423);
        _423 = NOVALUE;
        DeRef(_426);
        _426 = NOVALUE;
        return _fh_1055;
        // SubProg open_dll pc: 72 op: NOP1 (159)
L4: // addr: 73 pc: 72 sub: 1043 op: 159
        // SubProg open_dll pc: 73 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var fh_1055
        DeRef(_fh_1055);
        _fh_1055 = NOVALUE;
        // SubProg open_dll pc: 75 op: STARTLINE (58)

        /** dll.e:193		end for*/
        // SubProg open_dll pc: 77 op: ENDFOR_INT_UP1 (54)
        _idx_1053 = _idx_1053 + 1;
        goto L2; // [77] 47
L3: // addr: 82 pc: 77 sub: 1043 op: 54
        ;
    }
    // SubProg open_dll pc: 82 op: STARTLINE (58)

    /** dll.e:195		return 0*/
    // SubProg open_dll pc: 84 op: RETURNF (28)

// Exiting block BLOCK: open_dll

// block var file_name_1045
    DeRefDS(_file_name_1045);
    DeRef(_430);
    _430 = NOVALUE;
    DeRef(_423);
    _423 = NOVALUE;
    DeRef(_426);
    _426 = NOVALUE;
    return 0;
    // SubProg open_dll pc: 88 op: BADRETURNF (43)
    ;
}


object _12define_c_func(object _lib_1085, object _routine_name_1086, object _arg_types_1087, object _return_type_1088)
{
    object _safe_address_inlined_safe_address_at_11_1093 = NOVALUE;
    object _msg_inlined_crash_at_26_1096 = NOVALUE;
    object _444 = NOVALUE; // 1098 444
    object _443 = NOVALUE; // 1097 443
    object _442 = NOVALUE; // 1094 442
    object _441 = NOVALUE; // 1091 441
    object _440 = NOVALUE; // 1090 440
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg define_c_func pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg define_c_func pc: 3 op: STARTLINE (58)

    /** dll.e:395		  if atom(routine_name) and not machine:safe_address(routine_name, 1, machine:A_EXECUTE) then*/
    // SubProg define_c_func pc: 5 op: IS_AN_ATOM (67)
    _440 = 0;
    // SubProg define_c_func pc: 8 op: SC1_AND_IF (146)
    if (_440 == 0) {
        goto L1; // [8] 46
    }
    // SubProg define_c_func pc: 12 op: STARTLINE (58)

    /** memory.e:118		return 1*/
    // SubProg define_c_func pc: 14 op: ASSIGN (18)
    _safe_address_inlined_safe_address_at_11_1093 = 1;
    // SubProg define_c_func pc: 17 op: NOP1 (159)
    // SubProg define_c_func pc: 18 op: NOT (7)
    _442 = (1 == 0);
    // SubProg define_c_func pc: 21 op: NOP1 (159)
    // SubProg define_c_func pc: 22 op: IF (20)
    if (_442 == 0)
    {
        DeRef(_442);
        _442 = NOVALUE;
        goto L1; // [22] 46
    }
    else{
        DeRef(_442);
        _442 = NOVALUE;
    }
    // SubProg define_c_func pc: 25 op: STARTLINE (58)

    /** dll.e:396		      error:crash("A C function is being defined from Non-executable memory.")*/
    // SubProg define_c_func pc: 27 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg define_c_func pc: 29 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_26_1096);
    _msg_inlined_crash_at_26_1096 = EPrintf(-9999999, _437, _5);
    // SubProg define_c_func pc: 33 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg define_c_func pc: 35 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_26_1096);
    // SubProg define_c_func pc: 38 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg define_c_func pc: 40 op: ELSE (23)
    goto L2; // [40] 43
    // SubProg define_c_func pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 1083 op: 159
    // SubProg define_c_func pc: 43 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from define_c_func @ 26

// block var msg_inlined_crash_at_26_1096
    DeRefi(_msg_inlined_crash_at_26_1096);
    _msg_inlined_crash_at_26_1096 = NOVALUE;
    // SubProg define_c_func pc: 45 op: NOP1 (159)
L1: // addr: 46 pc: 45 sub: 1083 op: 159
    // SubProg define_c_func pc: 46 op: STARTLINE (58)

    /** dll.e:398		  return machine_func(M_DEFINE_C, {lib, routine_name, arg_types, return_type})*/
    // SubProg define_c_func pc: 48 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_lib_1085);
    ((intptr_t*)_2)[1] = _lib_1085;
    Ref(_routine_name_1086);
    ((intptr_t*)_2)[2] = _routine_name_1086;
    RefDS(_arg_types_1087);
    ((intptr_t*)_2)[3] = _arg_types_1087;
    ((intptr_t*)_2)[4] = _return_type_1088;
    _443 = MAKE_SEQ(_1);
    // SubProg define_c_func pc: 55 op: MACHINE_FUNC (111)
    _444 = machine(51, _443);
    DeRefDS(_443);
    _443 = NOVALUE;
    // SubProg define_c_func pc: 59 op: RETURNF (28)

// Exiting block BLOCK: define_c_func

// block var lib_1085
    DeRef(_lib_1085);

// block var routine_name_1086
    DeRefi(_routine_name_1086);

// block var arg_types_1087
    DeRefDSi(_arg_types_1087);

// block var return_type_1088
    return _444;
    // SubProg define_c_func pc: 63 op: BADRETURNF (43)
    ;
}



// 0x3FB88581
