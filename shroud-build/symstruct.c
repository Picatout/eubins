// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _74offset(object _data_type_65641, object _use_offset_65642)
{
    object _this_offset_65643 = NOVALUE;
    object _32695 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_use_offset_65642)) {
        _1 = (object)(DBL_PTR(_use_offset_65642)->dbl);
        DeRefDS(_use_offset_65642);
        _use_offset_65642 = _1;
    }

    /** symstruct.e:7		integer this_offset = use_offset*/
    _this_offset_65643 = _use_offset_65642;

    /** symstruct.e:8		next_offset = use_offset + sizeof( data_type )*/
    _32695 = eu_sizeof( _data_type_65641 );
    _74next_offset_65638 = _use_offset_65642 + _32695;
    _32695 = NOVALUE;

    /** symstruct.e:9		return this_offset*/
    return _this_offset_65643;
    ;
}



// 0xDC47EDB5
