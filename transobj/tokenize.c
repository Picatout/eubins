// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _71default_state()
{
    object _32145 = NOVALUE; // 64854 32145
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg default_state pc: 1 op: STARTLINE (58)

    /** tokenize.e:174		return {*/
    // SubProg default_state pc: 3 op: RIGHT_BRACE_N (31)
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 1;
    ((intptr_t*)_2)[2] = 1;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 1;
    ((intptr_t*)_2)[5] = 0;
    ((intptr_t*)_2)[6] = 1;
    ((intptr_t*)_2)[7] = 0;
    ((intptr_t*)_2)[8] = 0;
    _32145 = MAKE_SEQ(_1);
    // SubProg default_state pc: 14 op: RETURNF (28)

// Exiting block BLOCK: default_state
    return _32145;
    // SubProg default_state pc: 18 op: BADRETURNF (43)
    ;
}


object _71new()
{
    object _state_64860 = NOVALUE;
// skipping _32148  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: STARTLINE (58)

    /** tokenize.e:197		atom state = eumem:malloc()*/
    // SubProg new pc: 3 op: PROC (27)
    _0 = _state_64860;
    _state_64860 = _30malloc(1, 1);
    DeRef(_0);
    // SubProg new pc: 8 op: STARTLINE (58)

    /** tokenize.e:199		reset(state)*/
    // SubProg new pc: 10 op: PROC (27)
    Ref(_state_64860);
    _71reset(_state_64860);
    // SubProg new pc: 13 op: STARTLINE (58)

    /** tokenize.e:201		return state*/
    // SubProg new pc: 15 op: RETURNF (28)

// Exiting block BLOCK: new
    return _state_64860;
    // SubProg new pc: 19 op: BADRETURNF (43)
    ;
}


void _71reset(object _state_64865)
{
    object _32149 = NOVALUE; // 64866 32149
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reset pc: 1 op: STARTLINE (58)

    /** tokenize.e:212		eumem:ram_space[state] = default_state()*/
    // SubProg reset pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg reset pc: 5 op: PROC (27)
    _32149 = _71default_state();
    // SubProg reset pc: 8 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_state_64865))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_state_64865)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _state_64865);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32149;
    if( _1 != _32149 ){
        DeRef(_1);
    }
    _32149 = NOVALUE;
    // SubProg reset pc: 12 op: STARTLINE (58)

    /** tokenize.e:213	end procedure*/
    // SubProg reset pc: 14 op: RETURNP (29)

// Exiting block BLOCK: reset

// block var state_64865
    DeRef(_state_64865);
    return;
    // SubProg reset pc: 17 op: BADRETURNF (43)
    ;
}



// 0x2F016481
