// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _9allocate(object _n_2050, object _cleanup_2051)
{
    object _iaddr_2052 = NOVALUE;
    object _eaddr_2053 = NOVALUE;
// skipping _931  name type: 0
// skipping _930  name type: 0
// skipping _929  name type: 0
    object _928 = NOVALUE; // 2055 928
    object _927 = NOVALUE; // 2054 927
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg allocate pc: 1 op: STARTLINE (58)

    /** machine.e:534		ifdef DATA_EXECUTE then*/
    // SubProg allocate pc: 3 op: STARTLINE (58)

    /** machine.e:538			iaddr = eu:machine_func( memconst:M_ALLOC, n + memory:BORDER_SPACE * 2)*/
    // SubProg allocate pc: 5 op: PLUS (11)
    _927 = 0;
    // SubProg allocate pc: 9 op: PLUS (11)
    if (IS_ATOM_INT(_n_2050)) {
        _928 = _n_2050 + 0;
        if ((object)((uintptr_t)_928 + (uintptr_t)HIGH_BITS) >= 0){
            _928 = NewDouble((eudouble)_928);
        }
    }
    else {
        _928 = NewDouble(DBL_PTR(_n_2050)->dbl + (eudouble)0);
    }
    _927 = NOVALUE;
    // SubProg allocate pc: 13 op: MACHINE_FUNC (111)
    DeRef(_iaddr_2052);
    _iaddr_2052 = machine(16, _928);
    DeRef(_928);
    _928 = NOVALUE;
    // SubProg allocate pc: 17 op: STARTLINE (58)

    /** machine.e:539			eaddr = memory:prepare_block( iaddr, n, PAGE_READ_WRITE )*/
    // SubProg allocate pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg allocate pc: 21 op: PROC (27)
    Ref(_iaddr_2052);
    Ref(_n_2050);
    Ref(_10PAGE_READ_WRITE_849);
    _0 = _eaddr_2053;
    _eaddr_2053 = _11prepare_block(_iaddr_2052, _n_2050, _10PAGE_READ_WRITE_849);
    DeRef(_0);
    // SubProg allocate pc: 27 op: STARTLINE (58)

    /** machine.e:541		if cleanup then*/
    // SubProg allocate pc: 29 op: IF (20)
    // SubProg allocate pc: 43 op: STARTLINE (58)

    /** machine.e:544		return eaddr*/
    // SubProg allocate pc: 45 op: PRIVATE_INIT_CHECK (30)
    // SubProg allocate pc: 47 op: RETURNF (28)

// Exiting block BLOCK: allocate

// block var n_2050
    DeRef(_n_2050);

// block var cleanup_2051

// block var iaddr_2052
    DeRef(_iaddr_2052);
    return _eaddr_2053;
    // SubProg allocate pc: 51 op: BADRETURNF (43)
    ;
}


void _9free_pointer_array(object _pointers_array_2095)
{
    object _saved_2096 = NOVALUE;
    object _ptr_2097 = NOVALUE;
    object _peek_pointer_inlined_peek_pointer_at_40_2102 = NOVALUE;
// skipping _943  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg free_pointer_array pc: 1 op: STARTLINE (58)

    /** machine.e:654		atom saved = pointers_array*/
    // SubProg free_pointer_array pc: 3 op: ASSIGN (18)
    Ref(_pointers_array_2095);
    DeRef(_saved_2096);
    _saved_2096 = _pointers_array_2095;
    // SubProg free_pointer_array pc: 6 op: STARTLINE (58)

    /** machine.e:657		while ptr with entry do*/
    // SubProg free_pointer_array pc: 8 op: ELSE (23)
    goto L1; // [8] 39
    // SubProg free_pointer_array pc: 10 op: NOPWHILE (158)
L2: // addr: 11 pc: 10 sub: 2093 op: 158
    // SubProg free_pointer_array pc: 11 op: PRIVATE_INIT_CHECK (30)
    // SubProg free_pointer_array pc: 13 op: WHILE (47)
    if (_ptr_2097 <= 0) {
        if (_ptr_2097 == 0) {
            goto L3; // [13] 52
        }
        else {
            if (!IS_ATOM_INT(_ptr_2097) && DBL_PTR(_ptr_2097)->dbl == 0.0){
                goto L3; // [13] 52
            }
        }
    }
    // SubProg free_pointer_array pc: 16 op: STARTLINE (58)

    /** machine.e:658			memory:deallocate( ptr )*/
    // SubProg free_pointer_array pc: 18 op: STARTLINE (58)

    /** memory.e:71		ifdef DATA_EXECUTE then*/
    // SubProg free_pointer_array pc: 20 op: STARTLINE (58)

    /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
    // SubProg free_pointer_array pc: 22 op: MACHINE_PROC (112)
    machine(17, _ptr_2097);
    // SubProg free_pointer_array pc: 25 op: STARTLINE (58)

    /** memory.e:83	end procedure*/
    // SubProg free_pointer_array pc: 27 op: ELSE (23)
    goto L4; // [27] 30
    // SubProg free_pointer_array pc: 29 op: NOP1 (159)
L4: // addr: 30 pc: 29 sub: 2093 op: 159
    // SubProg free_pointer_array pc: 30 op: STARTLINE (58)

    /** machine.e:659			pointers_array += ADDRESS_LENGTH*/
    // SubProg free_pointer_array pc: 32 op: PLUS (11)
    _0 = _pointers_array_2095;
    if (IS_ATOM_INT(_pointers_array_2095)) {
        _pointers_array_2095 = _pointers_array_2095 + 4;
        if ((object)((uintptr_t)_pointers_array_2095 + (uintptr_t)HIGH_BITS) >= 0){
            _pointers_array_2095 = NewDouble((eudouble)_pointers_array_2095);
        }
    }
    else {
        _pointers_array_2095 = NewDouble(DBL_PTR(_pointers_array_2095)->dbl + (eudouble)4);
    }
    DeRef(_0);
    // SubProg free_pointer_array pc: 36 op: STARTLINE (58)

    /** machine.e:661		entry*/
    // SubProg free_pointer_array pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 2093 op: 159
    // SubProg free_pointer_array pc: 39 op: STARTLINE (58)

    /** machine.e:662			ptr = peek_pointer(pointers_array)*/
    // SubProg free_pointer_array pc: 41 op: STARTLINE (58)

    /** machine.e:130			return peek4u(x)*/
    // SubProg free_pointer_array pc: 43 op: PEEK4U (140)
    DeRef(_ptr_2097);
    if (IS_ATOM_INT(_pointers_array_2095)) {
        _ptr_2097 = (object)*(uint32_t *)_pointers_array_2095;
        if ((uintptr_t)_ptr_2097 > (uintptr_t)MAXINT){
            _ptr_2097 = NewDouble((eudouble)(uintptr_t)_ptr_2097);
        }
    }
    else {
        _ptr_2097 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_pointers_array_2095)->dbl);
        if ((uintptr_t)_ptr_2097 > (uintptr_t)MAXINT){
            _ptr_2097 = NewDouble((eudouble)(uintptr_t)_ptr_2097);
        }
    }
    // SubProg free_pointer_array pc: 46 op: NOP1 (159)
    // SubProg free_pointer_array pc: 47 op: STARTLINE (58)

    /** machine.e:663		end while*/
    // SubProg free_pointer_array pc: 49 op: ENDWHILE (22)
    goto L2; // [49] 11
    // SubProg free_pointer_array pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 2093 op: 159
    // SubProg free_pointer_array pc: 52 op: STARTLINE (58)

    /** machine.e:665		free(saved)*/
    // SubProg free_pointer_array pc: 54 op: PROC (27)
    Ref(_saved_2096);
    _9free(_saved_2096);
    // SubProg free_pointer_array pc: 57 op: STARTLINE (58)

    /** machine.e:666	end procedure*/
    // SubProg free_pointer_array pc: 59 op: RETURNP (29)

// Exiting block BLOCK: free_pointer_array

// block var pointers_array_2095
    DeRef(_pointers_array_2095);

// block var saved_2096
    DeRef(_saved_2096);

// block var ptr_2097
    DeRef(_ptr_2097);
    return;
    // SubProg free_pointer_array pc: 62 op: BADRETURNF (43)
    ;
}


object _9allocate_string(object _s_2214, object _cleanup_2215)
{
    object _mem_2216 = NOVALUE;
// skipping _1001  name type: 0
    object _1000 = NOVALUE; // 2222 1000
    object _999 = NOVALUE; // 2221 999
// skipping _998  name type: 0
    object _997 = NOVALUE; // 2218 997
    object _996 = NOVALUE; // 2217 996
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg allocate_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg allocate_string pc: 3 op: STARTLINE (58)

    /** machine.e:2086		mem = allocate( length(s) + 1) -- Thanks to Igor*/
    // SubProg allocate_string pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_2214)){
            _996 = SEQ_PTR(_s_2214)->length;
    }
    else {
        _996 = 1;
    }
    // SubProg allocate_string pc: 8 op: PLUS1 (93)
    _997 = _996 + 1;
    _996 = NOVALUE;
    // SubProg allocate_string pc: 12 op: PROC (27)
    _0 = _mem_2216;
    _mem_2216 = _9allocate(_997, 0);
    DeRef(_0);
    _997 = NOVALUE;
    // SubProg allocate_string pc: 17 op: STARTLINE (58)

    /** machine.e:2088		if mem then*/
    // SubProg allocate_string pc: 19 op: IF (20)
    if (_mem_2216 == 0) {
        goto L1; // [19] 54
    }
    else {
        if (!IS_ATOM_INT(_mem_2216) && DBL_PTR(_mem_2216)->dbl == 0.0){
            goto L1; // [19] 54
        }
    }
    // SubProg allocate_string pc: 22 op: STARTLINE (58)

    /** machine.e:2089			poke(mem, s)*/
    // SubProg allocate_string pc: 24 op: POKE (128)
    if (IS_ATOM_INT(_mem_2216)){
        poke_addr = (uint8_t *)_mem_2216;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_mem_2216)->dbl);
    }
    _1 = (object)SEQ_PTR(_s_2214);
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
    // SubProg allocate_string pc: 27 op: STARTLINE (58)

    /** machine.e:2090			poke(mem+length(s), 0)  -- Thanks to Aku*/
    // SubProg allocate_string pc: 29 op: LENGTH (42)
    if (IS_SEQUENCE(_s_2214)){
            _999 = SEQ_PTR(_s_2214)->length;
    }
    else {
        _999 = 1;
    }
    // SubProg allocate_string pc: 32 op: PLUS (11)
    if (IS_ATOM_INT(_mem_2216)) {
        _1000 = _mem_2216 + _999;
        if ((object)((uintptr_t)_1000 + (uintptr_t)HIGH_BITS) >= 0){
            _1000 = NewDouble((eudouble)_1000);
        }
    }
    else {
        _1000 = NewDouble(DBL_PTR(_mem_2216)->dbl + (eudouble)_999);
    }
    _999 = NOVALUE;
    // SubProg allocate_string pc: 36 op: POKE (128)
    if (IS_ATOM_INT(_1000)){
        poke_addr = (uint8_t *)_1000;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_1000)->dbl);
    }
    *poke_addr = (uint8_t)0;
    DeRef(_1000);
    _1000 = NOVALUE;
    // SubProg allocate_string pc: 39 op: STARTLINE (58)

    /** machine.e:2091			if cleanup then*/
    // SubProg allocate_string pc: 41 op: IF (20)
    // SubProg allocate_string pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 2212 op: 159
    // SubProg allocate_string pc: 54 op: STARTLINE (58)

    /** machine.e:2096		return mem*/
    // SubProg allocate_string pc: 56 op: RETURNF (28)

// Exiting block BLOCK: allocate_string

// block var s_2214
    DeRefDS(_s_2214);

// block var cleanup_2215
    return _mem_2216;
    // SubProg allocate_string pc: 60 op: BADRETURNF (43)
    ;
}


void _9free(object _addr_2314)
{
    object _msg_inlined_crash_at_27_2323 = NOVALUE;
    object _data_inlined_crash_at_24_2322 = NOVALUE;
    object _addr_inlined_deallocate_at_64_2329 = NOVALUE;
    object _msg_inlined_crash_at_106_2334 = NOVALUE;
// skipping _1042  name type: 0
    object _1040 = NOVALUE; // 2331 1040
    object _1039 = NOVALUE; // 2327 1039
    object _1038 = NOVALUE; // 2326 1038
    object _1037 = NOVALUE; // 2320 1037
    object _1035 = NOVALUE; // 2318 1035
    object _1034 = NOVALUE; // 2316 1034
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg free pc: 1 op: STARTLINE (58)

    /** machine.e:2308		if types:number_array (addr) then*/
    // SubProg free pc: 3 op: PROC (27)
    Ref(_addr_2314);
    _1034 = _6number_array(_addr_2314);
    // SubProg free pc: 7 op: IF (20)
    if (_1034 == 0) {
        DeRef(_1034);
        _1034 = NOVALUE;
        goto L1; // [7] 97
    }
    else {
        if (!IS_ATOM_INT(_1034) && DBL_PTR(_1034)->dbl == 0.0){
            DeRef(_1034);
            _1034 = NOVALUE;
            goto L1; // [7] 97
        }
        DeRef(_1034);
        _1034 = NOVALUE;
    }
    DeRef(_1034);
    _1034 = NOVALUE;
    // SubProg free pc: 10 op: STARTLINE (58)

    /** machine.e:2309			if types:ascii_string(addr) then*/
    // SubProg free pc: 12 op: PROC (27)
    Ref(_addr_2314);
    _1035 = _6ascii_string(_addr_2314);
    // SubProg free pc: 16 op: IF (20)
    if (_1035 == 0) {
        DeRef(_1035);
        _1035 = NOVALUE;
        goto L2; // [16] 47
    }
    else {
        if (!IS_ATOM_INT(_1035) && DBL_PTR(_1035)->dbl == 0.0){
            DeRef(_1035);
            _1035 = NOVALUE;
            goto L2; // [16] 47
        }
        DeRef(_1035);
        _1035 = NOVALUE;
    }
    DeRef(_1035);
    _1035 = NOVALUE;
    // SubProg free pc: 19 op: STARTLINE (58)

    /** machine.e:2310				error:crash("free(\"%s\") is not a valid address", {addr})*/
    // SubProg free pc: 21 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_addr_2314);
    ((intptr_t*)_2)[1] = _addr_2314;
    _1037 = MAKE_SEQ(_1);
    // SubProg free pc: 25 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_24_2322);
    _data_inlined_crash_at_24_2322 = _1037;
    _1037 = NOVALUE;
    // SubProg free pc: 28 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg free pc: 30 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_27_2323);
    _msg_inlined_crash_at_27_2323 = EPrintf(-9999999, _1036, _data_inlined_crash_at_24_2322);
    // SubProg free pc: 34 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg free pc: 36 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_27_2323);
    // SubProg free pc: 39 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg free pc: 41 op: ELSE (23)
    goto L3; // [41] 44
    // SubProg free pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 2312 op: 159
    // SubProg free pc: 44 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from free @ 24

// block var data_inlined_crash_at_24_2322
    DeRef(_data_inlined_crash_at_24_2322);
    _data_inlined_crash_at_24_2322 = NOVALUE;

// block var msg_inlined_crash_at_27_2323
    DeRefi(_msg_inlined_crash_at_27_2323);
    _msg_inlined_crash_at_27_2323 = NOVALUE;
    // SubProg free pc: 46 op: NOP1 (159)
L2: // addr: 47 pc: 46 sub: 2312 op: 159
    // SubProg free pc: 47 op: STARTLINE (58)

    /** machine.e:2313			for i = 1 to length(addr) do*/
    // SubProg free pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_addr_2314)){
            _1038 = SEQ_PTR(_addr_2314)->length;
    }
    else {
        _1038 = 1;
    }
    // SubProg free pc: 52 op: FOR_I (125)
    {
        object _i_2325;
        _i_2325 = 1;
L4: // addr: 59 pc: 52 sub: 2312 op: 125
        if (_i_2325 > _1038){
            goto L5; // [52] 89
        }
        // SubProg free pc: 59 op: STARTLINE (58)

        /** machine.e:2314				memory:deallocate( addr[i] )*/
        // SubProg free pc: 61 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_addr_2314);
        _1039 = (object)*(((s1_ptr)_2)->base + _i_2325);
        // SubProg free pc: 65 op: ASSIGN (18)
        Ref(_1039);
        DeRef(_addr_inlined_deallocate_at_64_2329);
        _addr_inlined_deallocate_at_64_2329 = _1039;
        _1039 = NOVALUE;
        // SubProg free pc: 68 op: STARTLINE (58)

        /** memory.e:71		ifdef DATA_EXECUTE then*/
        // SubProg free pc: 70 op: STARTLINE (58)

        /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
        // SubProg free pc: 72 op: MACHINE_PROC (112)
        machine(17, _addr_inlined_deallocate_at_64_2329);
        // SubProg free pc: 75 op: STARTLINE (58)

        /** memory.e:83	end procedure*/
        // SubProg free pc: 77 op: ELSE (23)
        goto L6; // [77] 80
        // SubProg free pc: 79 op: NOP1 (159)
L6: // addr: 80 pc: 79 sub: 2312 op: 159
        // SubProg free pc: 80 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-deallocate from free @ 64

// block var addr_inlined_deallocate_at_64_2329
        DeRef(_addr_inlined_deallocate_at_64_2329);
        _addr_inlined_deallocate_at_64_2329 = NOVALUE;
        // SubProg free pc: 82 op: STARTLINE (58)

        /** machine.e:2315			end for*/
        // SubProg free pc: 84 op: ENDFOR_INT_UP1 (54)
        _i_2325 = _i_2325 + 1;
        goto L4; // [84] 59
L5: // addr: 89 pc: 84 sub: 2312 op: 54
        ;
    }
    // SubProg free pc: 89 op: STARTLINE (58)

    /** machine.e:2316			return*/
    // SubProg free pc: 91 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: free

// block var addr_2314
    DeRef(_addr_2314);
    return;
    // SubProg free pc: 94 op: ELSE (23)
    goto L7; // [94] 127
    // SubProg free pc: 96 op: NOP1 (159)
L1: // addr: 97 pc: 96 sub: 2312 op: 159
    // SubProg free pc: 97 op: STARTLINE (58)

    /** machine.e:2317		elsif sequence(addr) then*/
    // SubProg free pc: 99 op: IS_A_SEQUENCE (68)
    _1040 = IS_SEQUENCE(_addr_2314);
    // SubProg free pc: 102 op: IF (20)
    if (_1040 == 0)
    {
        _1040 = NOVALUE;
        goto L8; // [102] 126
    }
    else{
        _1040 = NOVALUE;
    }
    // SubProg free pc: 105 op: STARTLINE (58)

    /** machine.e:2318			error:crash("free() called with nested sequence")*/
    // SubProg free pc: 107 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg free pc: 109 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_106_2334);
    _msg_inlined_crash_at_106_2334 = EPrintf(-9999999, _1041, _5);
    // SubProg free pc: 113 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg free pc: 115 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_106_2334);
    // SubProg free pc: 118 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg free pc: 120 op: ELSE (23)
    goto L9; // [120] 123
    // SubProg free pc: 122 op: NOP1 (159)
L9: // addr: 123 pc: 122 sub: 2312 op: 159
    // SubProg free pc: 123 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from free @ 106

// block var msg_inlined_crash_at_106_2334
    DeRefi(_msg_inlined_crash_at_106_2334);
    _msg_inlined_crash_at_106_2334 = NOVALUE;
    // SubProg free pc: 125 op: NOP1 (159)
L8: // addr: 126 pc: 125 sub: 2312 op: 159
    // SubProg free pc: 126 op: NOP1 (159)
L7: // addr: 127 pc: 126 sub: 2312 op: 159
    // SubProg free pc: 127 op: STARTLINE (58)

    /** machine.e:2321		if addr = 0 then*/
    // SubProg free pc: 129 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _addr_2314, 0)){
        goto LA; // [129] 139
    }
    // SubProg free pc: 133 op: STARTLINE (58)

    /** machine.e:2324			return*/
    // SubProg free pc: 135 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: free

// block var addr_2314
    DeRef(_addr_2314);
    return;
    // SubProg free pc: 138 op: NOP1 (159)
LA: // addr: 139 pc: 138 sub: 2312 op: 159
    // SubProg free pc: 139 op: STARTLINE (58)

    /** machine.e:2327		memory:deallocate( addr )*/
    // SubProg free pc: 141 op: STARTLINE (58)

    /** memory.e:71		ifdef DATA_EXECUTE then*/
    // SubProg free pc: 143 op: STARTLINE (58)

    /** memory.e:82	   	machine_proc( memconst:M_FREE, addr)*/
    // SubProg free pc: 145 op: MACHINE_PROC (112)
    machine(17, _addr_2314);
    // SubProg free pc: 148 op: STARTLINE (58)

    /** memory.e:83	end procedure*/
    // SubProg free pc: 150 op: ELSE (23)
    goto LB; // [150] 153
    // SubProg free pc: 152 op: NOP1 (159)
LB: // addr: 153 pc: 152 sub: 2312 op: 159
    // SubProg free pc: 153 op: STARTLINE (58)

    /** machine.e:2328	end procedure*/
    // SubProg free pc: 155 op: RETURNP (29)

// Exiting block BLOCK: free

// block var addr_2314
    DeRef(_addr_2314);
    return;
    // SubProg free pc: 158 op: BADRETURNF (43)
    ;
}



// 0xE4078E8A
