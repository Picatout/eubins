// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _73offset(object _data_type_65701, object _use_offset_65702)
{
    object _this_offset_65703 = NOVALUE;
// skipping _32759  name type: 0
    object _32758 = NOVALUE; // 65704 32758
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg offset pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_use_offset_65702)) {
        _1 = (object)(DBL_PTR(_use_offset_65702)->dbl);
        DeRefDS(_use_offset_65702);
        _use_offset_65702 = _1;
    }
    // SubProg offset pc: 3 op: STARTLINE (58)

    /** symstruct.e:7		integer this_offset = use_offset*/
    // SubProg offset pc: 5 op: ASSIGN_I (113)
    _this_offset_65703 = _use_offset_65702;
    // SubProg offset pc: 8 op: STARTLINE (58)

    /** symstruct.e:8		next_offset = use_offset + sizeof( data_type )*/
    // SubProg offset pc: 10 op: SIZEOF (217)
    _32758 = eu_sizeof( _data_type_65701 );
    // SubProg offset pc: 13 op: PLUS (11)
    _73next_offset_65698 = _use_offset_65702 + _32758;
    _32758 = NOVALUE;
    // SubProg offset pc: 19 op: STARTLINE (58)

    /** symstruct.e:9		return this_offset*/
    // SubProg offset pc: 21 op: RETURNF (28)

// Exiting block BLOCK: offset

// block var data_type_65701

// block var use_offset_65702
    return _this_offset_65703;
    // SubProg offset pc: 25 op: BADRETURNF (43)
    ;
}



// 0x72A5A233
