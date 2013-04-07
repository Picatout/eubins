// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _2set_mode(object _mode_174, object _extra_check_175)
{
// skipping _19  name type: 0
// skipping _18  name type: 0
// skipping _17  name type: 0
// skipping _16  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_mode pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_mode pc: 3 op: INTEGER_CHECK (96)
    // SubProg set_mode pc: 5 op: STARTLINE (58)

    /** mode.e:30		interpret = equal( mode, "interpret" )*/
    // SubProg set_mode pc: 7 op: EQUAL (153)
    if (_mode_174 == _10)
    _2interpret_150 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_10))
    _2interpret_150 = 0;
    else
    _2interpret_150 = (compare(_mode_174, _10) == 0);
    // SubProg set_mode pc: 11 op: STARTLINE (58)

    /** mode.e:31		translate = equal( mode, "translate" )*/
    // SubProg set_mode pc: 13 op: EQUAL (153)
    if (_mode_174 == _11)
    _2translate_151 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_11))
    _2translate_151 = 0;
    else
    _2translate_151 = (compare(_mode_174, _11) == 0);
    // SubProg set_mode pc: 17 op: STARTLINE (58)

    /** mode.e:32		bind      = equal( mode, "bind" )*/
    // SubProg set_mode pc: 19 op: EQUAL (153)
    if (_mode_174 == _12)
    _2bind_152 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_12))
    _2bind_152 = 0;
    else
    _2bind_152 = (compare(_mode_174, _12) == 0);
    // SubProg set_mode pc: 23 op: STARTLINE (58)

    /** mode.e:33		backend   = equal( mode, "backend" )*/
    // SubProg set_mode pc: 25 op: EQUAL (153)
    if (_mode_174 == _13)
    _2backend_159 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_13))
    _2backend_159 = 0;
    else
    _2backend_159 = (compare(_mode_174, _13) == 0);
    // SubProg set_mode pc: 29 op: STARTLINE (58)

    /** mode.e:34		do_extra_check = extra_check*/
    // SubProg set_mode pc: 31 op: ASSIGN_I (113)
    _2do_extra_check_153 = 0;
    // SubProg set_mode pc: 34 op: STARTLINE (58)

    /** mode.e:35	end procedure*/
    // SubProg set_mode pc: 36 op: RETURNP (29)

// Exiting block BLOCK: set_mode

// block var mode_174
    DeRefDSi(_mode_174);

// block var extra_check_175
    return;
    // SubProg set_mode pc: 39 op: BADRETURNF (43)
    ;
}


void _2InitBackEnd(object _x_188)
{
    object _20 = NOVALUE; // 189 20
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitBackEnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_188)) {
        _1 = (object)(DBL_PTR(_x_188)->dbl);
        DeRefDS(_x_188);
        _x_188 = _1;
    }
    // SubProg InitBackEnd pc: 3 op: STARTLINE (58)

    /** mode.e:46		call_proc( init_backend_rid, {x} )*/
    // SubProg InitBackEnd pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 7 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _x_188;
    _20 = MAKE_SEQ(_1);
    // SubProg InitBackEnd pc: 11 op: CALL_PROC (136)
    _1 = (object)SEQ_PTR(_20);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_2init_backend_rid_154].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRefDS(_20);
    _20 = NOVALUE;
    // SubProg InitBackEnd pc: 14 op: STARTLINE (58)

    /** mode.e:47	end procedure*/
    // SubProg InitBackEnd pc: 16 op: RETURNP (29)

// Exiting block BLOCK: InitBackEnd

// block var x_188
    return;
    // SubProg InitBackEnd pc: 19 op: BADRETURNF (43)
    ;
}


void _2BackEnd(object _x_192)
{
    object _21 = NOVALUE; // 193 21
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BackEnd pc: 1 op: STARTLINE (58)

    /** mode.e:50		call_proc( backend_rid, {x} )*/
    // SubProg BackEnd pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 5 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_x_192);
    ((intptr_t*)_2)[1] = _x_192;
    _21 = MAKE_SEQ(_1);
    // SubProg BackEnd pc: 9 op: CALL_PROC (136)
    _1 = (object)SEQ_PTR(_21);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_2backend_rid_156].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRefDS(_21);
    _21 = NOVALUE;
    // SubProg BackEnd pc: 12 op: STARTLINE (58)

    /** mode.e:51	end procedure*/
    // SubProg BackEnd pc: 14 op: RETURNP (29)

// Exiting block BLOCK: BackEnd

// block var x_192
    DeRef(_x_192);
    return;
    // SubProg BackEnd pc: 17 op: BADRETURNF (43)
    ;
}


void _2CheckPlatform()
{
// skipping _22  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg CheckPlatform pc: 1 op: STARTLINE (58)

    /** mode.e:54		if check_platform_rid != -1 then*/
    // SubProg CheckPlatform pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg CheckPlatform pc: 5 op: NOTEQ_IFW_I (122)
    // SubProg CheckPlatform pc: 17 op: STARTLINE (58)

    /** mode.e:57	end procedure*/
    // SubProg CheckPlatform pc: 19 op: RETURNP (29)

// Exiting block BLOCK: CheckPlatform
    return;
    // SubProg CheckPlatform pc: 22 op: BADRETURNF (43)
    ;
}


object _2get_backend()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_backend pc: 1 op: STARTLINE (58)

    /** mode.e:76		return backend*/
    // SubProg get_backend pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_backend pc: 5 op: RETURNF (28)

// Exiting block BLOCK: get_backend
    return _2backend_159;
    // SubProg get_backend pc: 9 op: BADRETURNF (43)
    ;
}


object _2extract_options(object _s_216)
{
    object _24 = NOVALUE; // 218 24
    object _23 = NOVALUE; // 217 23
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg extract_options pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg extract_options pc: 3 op: STARTLINE (58)

    /** mode.e:88		return call_func( extract_options_rid, {s} )*/
    // SubProg extract_options pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg extract_options pc: 7 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_s_216);
    ((intptr_t*)_2)[1] = _s_216;
    _23 = MAKE_SEQ(_1);
    // SubProg extract_options pc: 11 op: CALL_FUNC (137)
    _1 = (object)SEQ_PTR(_23);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_2extract_options_rid_157].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    _1 = (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    _24 = _1;
    DeRefDS(_23);
    _23 = NOVALUE;
    // SubProg extract_options pc: 15 op: RETURNF (28)

// Exiting block BLOCK: extract_options

// block var s_216
    DeRefDS(_s_216);
    return _24;
    // SubProg extract_options pc: 19 op: BADRETURNF (43)
    ;
}


void _2set_output_il(object _rid_221)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_output_il pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_output_il pc: 3 op: STARTLINE (58)

    /** mode.e:92		output_il_rid = rid*/
    // SubProg set_output_il pc: 5 op: ASSIGN_I (113)
    _2output_il_rid_158 = _rid_221;
    // SubProg set_output_il pc: 8 op: STARTLINE (58)

    /** mode.e:93	end procedure*/
    // SubProg set_output_il pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_output_il

// block var rid_221
    return;
    // SubProg set_output_il pc: 13 op: BADRETURNF (43)
    ;
}


void _2OutputIL()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg OutputIL pc: 1 op: STARTLINE (58)

    /** mode.e:96		call_proc( output_il_rid, {} )*/
    // SubProg OutputIL pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg OutputIL pc: 5 op: CALL_PROC (136)
    _0 = (object)_00[_2output_il_rid_158].addr;
    (*(intptr_t (*)())_0)(
                         );
    // SubProg OutputIL pc: 8 op: STARTLINE (58)

    /** mode.e:97	end procedure*/
    // SubProg OutputIL pc: 10 op: RETURNP (29)

// Exiting block BLOCK: OutputIL
    return;
    // SubProg OutputIL pc: 13 op: BADRETURNF (43)
    ;
}



// 0x3AC4CD6D
