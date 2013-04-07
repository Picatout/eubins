// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _4allocate(object _n_1953, object _cleanup_1954)
{
    object _iaddr_1955 = NOVALUE;
    object _eaddr_1956 = NOVALUE;
    object _870 = NOVALUE;
    object _869 = NOVALUE;
    object _0, _1, _2;
    

    /** machine.e:534		ifdef DATA_EXECUTE then*/

    /** machine.e:538			iaddr = eu:machine_func( memconst:M_ALLOC, n + memory:BORDER_SPACE * 2)*/
    _869 = 0;
    if (IS_ATOM_INT(_n_1953)) {
        _870 = _n_1953 + 0;
        if ((object)((uintptr_t)_870 + (uintptr_t)HIGH_BITS) >= 0){
            _870 = NewDouble((eudouble)_870);
        }
    }
    else {
        _870 = NewDouble(DBL_PTR(_n_1953)->dbl + (eudouble)0);
    }
    _869 = NOVALUE;
    DeRef(_iaddr_1955);
    _iaddr_1955 = machine(16, _870);
    DeRef(_870);
    _870 = NOVALUE;

    /** machine.e:539			eaddr = memory:prepare_block( iaddr, n, PAGE_READ_WRITE )*/
    Ref(_iaddr_1955);
    Ref(_n_1953);
    Ref(_5PAGE_READ_WRITE_262);
    _0 = _eaddr_1956;
    _eaddr_1956 = _6prepare_block(_iaddr_1955, _n_1953, _5PAGE_READ_WRITE_262);
    DeRef(_0);

    /** machine.e:541		if cleanup then*/

    /** machine.e:544		return eaddr*/
    DeRef(_n_1953);
    DeRef(_iaddr_1955);
    return _eaddr_1956;
    ;
}


void _4free_pointer_array(object _pointers_array_1998)
{
    object _saved_1999 = NOVALUE;
    object _ptr_2000 = NOVALUE;
    object _peek_pointer_inlined_peek_pointer_at_40_2005 = NOVALUE;
    object _0, _1, _2;
    

    /** machine.e:654		atom saved = pointers_array*/
    Ref(_pointers_array_1998);
    DeRef(_saved_1999);
    _saved_1999 = _pointers_array_1998;

    /** machine.e:657		while ptr with entry do*/
    goto L1; // [8] 39
L2: 
    if (_ptr_2000 <= 0) {
        if (_ptr_2000 == 0) {
            goto L3; // [13] 52
        }
        else {
            if (!IS_ATOM_INT(_ptr_2000) && DBL_PTR(_ptr_2000)->dbl == 0.0){
                goto L3; // [13] 52
            }
        }
    }

    /** machine.e:658			memory:deallocate( ptr )*/

    /** memory.e:71		ifdef DATA_EXECUTE then*/

    /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
    machine(17, _ptr_2000);

    /** memory.e:83	end procedure*/
    goto L4; // [27] 30
L4: 

    /** machine.e:659			pointers_array += ADDRESS_LENGTH*/
    _0 = _pointers_array_1998;
    if (IS_ATOM_INT(_pointers_array_1998)) {
        _pointers_array_1998 = _pointers_array_1998 + 4;
        if ((object)((uintptr_t)_pointers_array_1998 + (uintptr_t)HIGH_BITS) >= 0){
            _pointers_array_1998 = NewDouble((eudouble)_pointers_array_1998);
        }
    }
    else {
        _pointers_array_1998 = NewDouble(DBL_PTR(_pointers_array_1998)->dbl + (eudouble)4);
    }
    DeRef(_0);

    /** machine.e:661		entry*/
L1: 

    /** machine.e:662			ptr = peek_pointer(pointers_array)*/

    /** machine.e:130			return peek4u(x)*/
    DeRef(_ptr_2000);
    if (IS_ATOM_INT(_pointers_array_1998)) {
        _ptr_2000 = (object)*(uint32_t *)_pointers_array_1998;
        if ((uintptr_t)_ptr_2000 > (uintptr_t)MAXINT){
            _ptr_2000 = NewDouble((eudouble)(uintptr_t)_ptr_2000);
        }
    }
    else {
        _ptr_2000 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_pointers_array_1998)->dbl);
        if ((uintptr_t)_ptr_2000 > (uintptr_t)MAXINT){
            _ptr_2000 = NewDouble((eudouble)(uintptr_t)_ptr_2000);
        }
    }

    /** machine.e:663		end while*/
    goto L2; // [49] 11
L3: 

    /** machine.e:665		free(saved)*/
    Ref(_saved_1999);
    _4free(_saved_1999);

    /** machine.e:666	end procedure*/
    DeRef(_pointers_array_1998);
    DeRef(_saved_1999);
    DeRef(_ptr_2000);
    return;
    ;
}


object _4allocate_string(object _s_2117, object _cleanup_2118)
{
    object _mem_2119 = NOVALUE;
    object _942 = NOVALUE;
    object _941 = NOVALUE;
    object _939 = NOVALUE;
    object _938 = NOVALUE;
    object _0, _1, _2;
    

    /** machine.e:2086		mem = allocate( length(s) + 1) -- Thanks to Igor*/
    if (IS_SEQUENCE(_s_2117)){
            _938 = SEQ_PTR(_s_2117)->length;
    }
    else {
        _938 = 1;
    }
    _939 = _938 + 1;
    _938 = NOVALUE;
    _0 = _mem_2119;
    _mem_2119 = _4allocate(_939, 0);
    DeRef(_0);
    _939 = NOVALUE;

    /** machine.e:2088		if mem then*/
    if (_mem_2119 == 0) {
        goto L1; // [19] 54
    }
    else {
        if (!IS_ATOM_INT(_mem_2119) && DBL_PTR(_mem_2119)->dbl == 0.0){
            goto L1; // [19] 54
        }
    }

    /** machine.e:2089			poke(mem, s)*/
    if (IS_ATOM_INT(_mem_2119)){
        poke_addr = (uint8_t *)_mem_2119;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_mem_2119)->dbl);
    }
    _1 = (object)SEQ_PTR(_s_2117);
    _1 = (object)((s1_ptr)_1)->base;
    while (1) {
        _1 += sizeof(object);
        _2 = *((object *)_1);
        if (IS_ATOM_INT(_2)) {
            *poke_addr++ = (uint8_t)_2;
        }
        else if (_2 == NOVALUE) {
            break;
        }
        else {
            *poke_addr++ = (uint8_t)DBL_PTR(_2)->dbl;
        }
    }

    /** machine.e:2090			poke(mem+length(s), 0)  -- Thanks to Aku*/
    if (IS_SEQUENCE(_s_2117)){
            _941 = SEQ_PTR(_s_2117)->length;
    }
    else {
        _941 = 1;
    }
    if (IS_ATOM_INT(_mem_2119)) {
        _942 = _mem_2119 + _941;
        if ((object)((uintptr_t)_942 + (uintptr_t)HIGH_BITS) >= 0){
            _942 = NewDouble((eudouble)_942);
        }
    }
    else {
        _942 = NewDouble(DBL_PTR(_mem_2119)->dbl + (eudouble)_941);
    }
    _941 = NOVALUE;
    if (IS_ATOM_INT(_942)){
        poke_addr = (uint8_t *)_942;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_942)->dbl);
    }
    *poke_addr = (uint8_t)0;
    DeRef(_942);
    _942 = NOVALUE;

    /** machine.e:2091			if cleanup then*/
L1: 

    /** machine.e:2096		return mem*/
    DeRefDS(_s_2117);
    return _mem_2119;
    ;
}


void _4free(object _addr_2217)
{
    object _msg_inlined_crash_at_27_2226 = NOVALUE;
    object _data_inlined_crash_at_24_2225 = NOVALUE;
    object _addr_inlined_deallocate_at_64_2232 = NOVALUE;
    object _msg_inlined_crash_at_106_2237 = NOVALUE;
    object _982 = NOVALUE;
    object _981 = NOVALUE;
    object _980 = NOVALUE;
    object _979 = NOVALUE;
    object _977 = NOVALUE;
    object _976 = NOVALUE;
    object _0, _1, _2;
    

    /** machine.e:2308		if types:number_array (addr) then*/
    Ref(_addr_2217);
    _976 = _9number_array(_addr_2217);
    if (_976 == 0) {
        DeRef(_976);
        _976 = NOVALUE;
        goto L1; // [7] 97
    }
    else {
        if (!IS_ATOM_INT(_976) && DBL_PTR(_976)->dbl == 0.0){
            DeRef(_976);
            _976 = NOVALUE;
            goto L1; // [7] 97
        }
        DeRef(_976);
        _976 = NOVALUE;
    }
    DeRef(_976);
    _976 = NOVALUE;

    /** machine.e:2309			if types:ascii_string(addr) then*/
    Ref(_addr_2217);
    _977 = _9ascii_string(_addr_2217);
    if (_977 == 0) {
        DeRef(_977);
        _977 = NOVALUE;
        goto L2; // [16] 47
    }
    else {
        if (!IS_ATOM_INT(_977) && DBL_PTR(_977)->dbl == 0.0){
            DeRef(_977);
            _977 = NOVALUE;
            goto L2; // [16] 47
        }
        DeRef(_977);
        _977 = NOVALUE;
    }
    DeRef(_977);
    _977 = NOVALUE;

    /** machine.e:2310				error:crash("free(\"%s\") is not a valid address", {addr})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_addr_2217);
    ((intptr_t*)_2)[1] = _addr_2217;
    _979 = MAKE_SEQ(_1);
    DeRef(_data_inlined_crash_at_24_2225);
    _data_inlined_crash_at_24_2225 = _979;
    _979 = NOVALUE;

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_27_2226);
    _msg_inlined_crash_at_27_2226 = EPrintf(-9999999, _978, _data_inlined_crash_at_24_2225);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_27_2226);

    /** error.e:53	end procedure*/
    goto L3; // [41] 44
L3: 
    DeRef(_data_inlined_crash_at_24_2225);
    _data_inlined_crash_at_24_2225 = NOVALUE;
    DeRefi(_msg_inlined_crash_at_27_2226);
    _msg_inlined_crash_at_27_2226 = NOVALUE;
L2: 

    /** machine.e:2313			for i = 1 to length(addr) do*/
    if (IS_SEQUENCE(_addr_2217)){
            _980 = SEQ_PTR(_addr_2217)->length;
    }
    else {
        _980 = 1;
    }
    {
        object _i_2228;
        _i_2228 = 1;
L4: 
        if (_i_2228 > _980){
            goto L5; // [52] 89
        }

        /** machine.e:2314				memory:deallocate( addr[i] )*/
        _2 = (object)SEQ_PTR(_addr_2217);
        _981 = (object)*(((s1_ptr)_2)->base + _i_2228);
        Ref(_981);
        DeRef(_addr_inlined_deallocate_at_64_2232);
        _addr_inlined_deallocate_at_64_2232 = _981;
        _981 = NOVALUE;

        /** memory.e:71		ifdef DATA_EXECUTE then*/

        /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
        machine(17, _addr_inlined_deallocate_at_64_2232);

        /** memory.e:83	end procedure*/
        goto L6; // [77] 80
L6: 
        DeRef(_addr_inlined_deallocate_at_64_2232);
        _addr_inlined_deallocate_at_64_2232 = NOVALUE;

        /** machine.e:2315			end for*/
        _i_2228 = _i_2228 + 1;
        goto L4; // [84] 59
L5: 
        ;
    }

    /** machine.e:2316			return*/
    DeRef(_addr_2217);
    return;
    goto L7; // [94] 127
L1: 

    /** machine.e:2317		elsif sequence(addr) then*/
    _982 = IS_SEQUENCE(_addr_2217);
    if (_982 == 0)
    {
        _982 = NOVALUE;
        goto L8; // [102] 126
    }
    else{
        _982 = NOVALUE;
    }

    /** machine.e:2318			error:crash("free() called with nested sequence")*/

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_106_2237);
    _msg_inlined_crash_at_106_2237 = EPrintf(-9999999, _983, _5);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_106_2237);

    /** error.e:53	end procedure*/
    goto L9; // [120] 123
L9: 
    DeRefi(_msg_inlined_crash_at_106_2237);
    _msg_inlined_crash_at_106_2237 = NOVALUE;
L8: 
L7: 

    /** machine.e:2321		if addr = 0 then*/
    if (binary_op_a(NOTEQ, _addr_2217, 0)){
        goto LA; // [129] 139
    }

    /** machine.e:2324			return*/
    DeRef(_addr_2217);
    return;
LA: 

    /** machine.e:2327		memory:deallocate( addr )*/

    /** memory.e:71		ifdef DATA_EXECUTE then*/

    /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
    machine(17, _addr_2217);

    /** memory.e:83	end procedure*/
    goto LB; // [150] 153
LB: 

    /** machine.e:2328	end procedure*/
    DeRef(_addr_2217);
    return;
    ;
}



// 0x5042E28A
