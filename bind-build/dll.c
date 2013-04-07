// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _7open_dll(object _file_name_948)
{
    object _fh_958 = NOVALUE;
    object _372 = NOVALUE;
    object _370 = NOVALUE;
    object _369 = NOVALUE;
    object _368 = NOVALUE;
    object _367 = NOVALUE;
    object _366 = NOVALUE;
    object _365 = NOVALUE;
    object _364 = NOVALUE;
    object _0, _1, _2;
    

    /** dll.e:182		if length(file_name) > 0 and types:string(file_name) then*/
    if (IS_SEQUENCE(_file_name_948)){
            _364 = SEQ_PTR(_file_name_948)->length;
    }
    else {
        _364 = 1;
    }
    _365 = (_364 > 0);
    _364 = NOVALUE;
    if (_365 == 0) {
        goto L1; // [12] 35
    }
    RefDS(_file_name_948);
    _367 = _9string(_file_name_948);
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

    /** dll.e:183			return machine_func(M_OPEN_DLL, file_name)*/
    _368 = machine(50, _file_name_948);
    DeRefDS(_file_name_948);
    DeRef(_365);
    _365 = NOVALUE;
    return _368;
L1: 

    /** dll.e:188		for idx = 1 to length(file_name) do*/
    if (IS_SEQUENCE(_file_name_948)){
            _369 = SEQ_PTR(_file_name_948)->length;
    }
    else {
        _369 = 1;
    }
    {
        object _idx_956;
        _idx_956 = 1;
L2: 
        if (_idx_956 > _369){
            goto L3; // [40] 82
        }

        /** dll.e:189			atom fh = machine_func(M_OPEN_DLL, file_name[idx])*/
        _2 = (object)SEQ_PTR(_file_name_948);
        _370 = (object)*(((s1_ptr)_2)->base + _idx_956);
        DeRef(_fh_958);
        _fh_958 = machine(50, _370);
        _370 = NOVALUE;

        /** dll.e:190			if not fh = 0 then*/
        if (IS_ATOM_INT(_fh_958)) {
            _372 = (_fh_958 == 0);
        }
        else {
            _372 = unary_op(NOT, _fh_958);
        }
        if (_372 != 0)
        goto L4; // [62] 73

        /** dll.e:191				return fh*/
        DeRefDS(_file_name_948);
        DeRef(_368);
        _368 = NOVALUE;
        DeRef(_365);
        _365 = NOVALUE;
        _372 = NOVALUE;
        return _fh_958;
L4: 
        DeRef(_fh_958);
        _fh_958 = NOVALUE;

        /** dll.e:193		end for*/
        _idx_956 = _idx_956 + 1;
        goto L2; // [77] 47
L3: 
        ;
    }

    /** dll.e:195		return 0*/
    DeRefDS(_file_name_948);
    DeRef(_368);
    _368 = NOVALUE;
    DeRef(_365);
    _365 = NOVALUE;
    DeRef(_372);
    _372 = NOVALUE;
    return 0;
    ;
}


object _7define_c_func(object _lib_988, object _routine_name_989, object _arg_types_990, object _return_type_991)
{
    object _safe_address_inlined_safe_address_at_11_996 = NOVALUE;
    object _msg_inlined_crash_at_26_999 = NOVALUE;
    object _386 = NOVALUE;
    object _385 = NOVALUE;
    object _384 = NOVALUE;
    object _383 = NOVALUE;
    object _382 = NOVALUE;
    object _0, _1, _2;
    

    /** dll.e:395		  if atom(routine_name) and not machine:safe_address(routine_name, 1, machine:A_EXECUTE) then*/
    _382 = 0;
    if (_382 == 0) {
        goto L1; // [8] 46
    }

    /** memory.e:118		return 1*/
    _safe_address_inlined_safe_address_at_11_996 = 1;
    _384 = (1 == 0);
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

    /** dll.e:396		      error:crash("A C function is being defined from Non-executable memory.")*/

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_26_999);
    _msg_inlined_crash_at_26_999 = EPrintf(-9999999, _379, _5);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_26_999);

    /** error.e:53	end procedure*/
    goto L2; // [40] 43
L2: 
    DeRefi(_msg_inlined_crash_at_26_999);
    _msg_inlined_crash_at_26_999 = NOVALUE;
L1: 

    /** dll.e:398		  return machine_func(M_DEFINE_C, {lib, routine_name, arg_types, return_type})*/
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
    _386 = machine(51, _385);
    DeRefDS(_385);
    _385 = NOVALUE;
    DeRef(_lib_988);
    DeRefi(_routine_name_989);
    DeRefDSi(_arg_types_990);
    return _386;
    ;
}



// 0x71D7A33C
