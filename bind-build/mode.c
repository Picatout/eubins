// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _2set_mode(object _mode_174, object _extra_check_175)
{
    object _0, _1, _2;
    

    /** mode.e:30		interpret = equal( mode, "interpret" )*/
    if (_mode_174 == _10)
    _2interpret_150 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_10))
    _2interpret_150 = 0;
    else
    _2interpret_150 = (compare(_mode_174, _10) == 0);

    /** mode.e:31		translate = equal( mode, "translate" )*/
    if (_mode_174 == _11)
    _2translate_151 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_11))
    _2translate_151 = 0;
    else
    _2translate_151 = (compare(_mode_174, _11) == 0);

    /** mode.e:32		bind      = equal( mode, "bind" )*/
    if (_mode_174 == _12)
    _2bind_152 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_12))
    _2bind_152 = 0;
    else
    _2bind_152 = (compare(_mode_174, _12) == 0);

    /** mode.e:33		backend   = equal( mode, "backend" )*/
    if (_mode_174 == _13)
    _2backend_159 = 1;
    else if (IS_ATOM_INT(_mode_174) && IS_ATOM_INT(_13))
    _2backend_159 = 0;
    else
    _2backend_159 = (compare(_mode_174, _13) == 0);

    /** mode.e:34		do_extra_check = extra_check*/
    _2do_extra_check_153 = 0;

    /** mode.e:35	end procedure*/
    DeRefDSi(_mode_174);
    return;
    ;
}


void _2InitBackEnd(object _x_188)
{
    object _20 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_188)) {
        _1 = (object)(DBL_PTR(_x_188)->dbl);
        DeRefDS(_x_188);
        _x_188 = _1;
    }

    /** mode.e:46		call_proc( init_backend_rid, {x} )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _x_188;
    _20 = MAKE_SEQ(_1);
    _1 = (object)SEQ_PTR(_20);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_2init_backend_rid_154].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRefDS(_20);
    _20 = NOVALUE;

    /** mode.e:47	end procedure*/
    return;
    ;
}


void _2BackEnd(object _x_192)
{
    object _21 = NOVALUE;
    object _0, _1, _2;
    

    /** mode.e:50		call_proc( backend_rid, {x} )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_x_192);
    ((intptr_t*)_2)[1] = _x_192;
    _21 = MAKE_SEQ(_1);
    _1 = (object)SEQ_PTR(_21);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_2backend_rid_156].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRefDS(_21);
    _21 = NOVALUE;

    /** mode.e:51	end procedure*/
    DeRef(_x_192);
    return;
    ;
}


void _2CheckPlatform()
{
    object _0, _1, _2;
    

    /** mode.e:54		if check_platform_rid != -1 then*/

    /** mode.e:57	end procedure*/
    return;
    ;
}


object _2get_backend()
{
    object _0, _1, _2;
    

    /** mode.e:76		return backend*/
    return _2backend_159;
    ;
}


void _2set_extract_options(object _rid_213)
{
    object _0, _1, _2;
    

    /** mode.e:84		extract_options_rid = rid*/
    _2extract_options_rid_157 = _rid_213;

    /** mode.e:85	end procedure*/
    return;
    ;
}


object _2extract_options(object _s_216)
{
    object _24 = NOVALUE;
    object _23 = NOVALUE;
    object _0, _1, _2;
    

    /** mode.e:88		return call_func( extract_options_rid, {s} )*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_s_216);
    ((intptr_t*)_2)[1] = _s_216;
    _23 = MAKE_SEQ(_1);
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
    DeRefDS(_s_216);
    return _24;
    ;
}


void _2set_output_il(object _rid_221)
{
    object _0, _1, _2;
    

    /** mode.e:92		output_il_rid = rid*/
    _2output_il_rid_158 = _rid_221;

    /** mode.e:93	end procedure*/
    return;
    ;
}


void _2OutputIL()
{
    object _0, _1, _2;
    

    /** mode.e:96		call_proc( output_il_rid, {} )*/
    _0 = (object)_00[_2output_il_rid_158].addr;
    (*(intptr_t (*)())_0)(
                         );

    /** mode.e:97	end procedure*/
    return;
    ;
}



// 0x48C14F8A
