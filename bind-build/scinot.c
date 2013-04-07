// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _20reverse(object _s_3629)
{
    object _lower_3630 = NOVALUE;
    object _n_3631 = NOVALUE;
    object _n2_3632 = NOVALUE;
    object _t_3633 = NOVALUE;
    object _1665 = NOVALUE;
    object _1664 = NOVALUE;
    object _1663 = NOVALUE;
    object _1660 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:87		n = length(s)*/
    if (IS_SEQUENCE(_s_3629)){
            _n_3631 = SEQ_PTR(_s_3629)->length;
    }
    else {
        _n_3631 = 1;
    }

    /** scinot.e:88		n2 = floor(n/2)+1*/
    _1660 = _n_3631 >> 1;
    _n2_3632 = _1660 + 1;
    _1660 = NOVALUE;

    /** scinot.e:89		t = repeat(0, n)*/
    DeRef(_t_3633);
    _t_3633 = Repeat(0, _n_3631);

    /** scinot.e:90		lower = 1*/
    _lower_3630 = 1;

    /** scinot.e:91		for upper = n to n2 by -1 do*/
    _1663 = _n2_3632;
    {
        object _upper_3639;
        _upper_3639 = _n_3631;
L1: 
        if (_upper_3639 < _1663){
            goto L2; // [34] 74
        }

        /** scinot.e:92			t[upper] = s[lower]*/
        _2 = (object)SEQ_PTR(_s_3629);
        _1664 = (object)*(((s1_ptr)_2)->base + _lower_3630);
        Ref(_1664);
        _2 = (object)SEQ_PTR(_t_3633);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_3633 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _upper_3639);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1664;
        if( _1 != _1664 ){
            DeRef(_1);
        }
        _1664 = NOVALUE;

        /** scinot.e:93			t[lower] = s[upper]*/
        _2 = (object)SEQ_PTR(_s_3629);
        _1665 = (object)*(((s1_ptr)_2)->base + _upper_3639);
        Ref(_1665);
        _2 = (object)SEQ_PTR(_t_3633);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_3633 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lower_3630);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1665;
        if( _1 != _1665 ){
            DeRef(_1);
        }
        _1665 = NOVALUE;

        /** scinot.e:94			lower += 1*/
        _lower_3630 = _lower_3630 + 1;

        /** scinot.e:95		end for*/
        _upper_3639 = _upper_3639 + -1;
        goto L1; // [69] 41
L2: 
        ;
    }

    /** scinot.e:96		return t*/
    DeRefDS(_s_3629);
    return _t_3633;
    ;
}


object _20carry(object _a_3646, object _radix_3647)
{
    object _q_3648 = NOVALUE;
    object _r_3649 = NOVALUE;
    object _b_3650 = NOVALUE;
    object _rmax_3651 = NOVALUE;
    object _i_3652 = NOVALUE;
    object _1679 = NOVALUE;
    object _1678 = NOVALUE;
    object _1677 = NOVALUE;
    object _1674 = NOVALUE;
    object _1668 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:102		rmax = radix - 1*/
    DeRef(_rmax_3651);
    _rmax_3651 = _radix_3647 - 1;
    if ((object)((uintptr_t)_rmax_3651 +(uintptr_t) HIGH_BITS) >= 0){
        _rmax_3651 = NewDouble((eudouble)_rmax_3651);
    }

    /** scinot.e:103		i = 1*/
    DeRef(_i_3652);
    _i_3652 = 1;

    /** scinot.e:104		while i <= length(a) do*/
L1: 
    if (IS_SEQUENCE(_a_3646)){
            _1668 = SEQ_PTR(_a_3646)->length;
    }
    else {
        _1668 = 1;
    }
    if (binary_op_a(GREATER, _i_3652, _1668)){
        _1668 = NOVALUE;
        goto L2; // [24] 104
    }
    _1668 = NOVALUE;

    /** scinot.e:105			b = a[i]*/
    DeRef(_b_3650);
    _2 = (object)SEQ_PTR(_a_3646);
    if (!IS_ATOM_INT(_i_3652)){
        _b_3650 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_3652)->dbl));
    }
    else{
        _b_3650 = (object)*(((s1_ptr)_2)->base + _i_3652);
    }
    Ref(_b_3650);

    /** scinot.e:106			if b > rmax then*/
    if (binary_op_a(LESSEQ, _b_3650, _rmax_3651)){
        goto L3; // [36] 93
    }

    /** scinot.e:107				q = floor( b / radix )*/
    DeRef(_q_3648);
    if (IS_ATOM_INT(_b_3650)) {
        if (_radix_3647 > 0 && _b_3650 >= 0) {
            _q_3648 = _b_3650 / _radix_3647;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_b_3650 / (eudouble)_radix_3647);
            if (_b_3650 != MININT)
            _q_3648 = (object)temp_dbl;
            else
            _q_3648 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _b_3650, _radix_3647);
        _q_3648 = unary_op(FLOOR, _2);
        DeRef(_2);
    }

    /** scinot.e:108				r = remainder( b, radix )*/
    DeRef(_r_3649);
    if (IS_ATOM_INT(_b_3650)) {
        _r_3649 = (_b_3650 % _radix_3647);
    }
    else {
        temp_d.dbl = (eudouble)_radix_3647;
        _r_3649 = Dremainder(DBL_PTR(_b_3650), &temp_d);
    }

    /** scinot.e:109				a[i] = r*/
    Ref(_r_3649);
    _2 = (object)SEQ_PTR(_a_3646);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_3646 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_i_3652))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_3652)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _i_3652);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_3649;
    DeRef(_1);

    /** scinot.e:110				if i = length(a) then*/
    if (IS_SEQUENCE(_a_3646)){
            _1674 = SEQ_PTR(_a_3646)->length;
    }
    else {
        _1674 = 1;
    }
    if (binary_op_a(NOTEQ, _i_3652, _1674)){
        _1674 = NOVALUE;
        goto L4; // [63] 74
    }
    _1674 = NOVALUE;

    /** scinot.e:111					a &= 0*/
    Append(&_a_3646, _a_3646, 0);
L4: 

    /** scinot.e:113				a[i+1] += q*/
    if (IS_ATOM_INT(_i_3652)) {
        _1677 = _i_3652 + 1;
    }
    else
    _1677 = binary_op(PLUS, 1, _i_3652);
    _2 = (object)SEQ_PTR(_a_3646);
    if (!IS_ATOM_INT(_1677)){
        _1678 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_1677)->dbl));
    }
    else{
        _1678 = (object)*(((s1_ptr)_2)->base + _1677);
    }
    if (IS_ATOM_INT(_1678) && IS_ATOM_INT(_q_3648)) {
        _1679 = _1678 + _q_3648;
        if ((object)((uintptr_t)_1679 + (uintptr_t)HIGH_BITS) >= 0){
            _1679 = NewDouble((eudouble)_1679);
        }
    }
    else {
        _1679 = binary_op(PLUS, _1678, _q_3648);
    }
    _1678 = NOVALUE;
    _2 = (object)SEQ_PTR(_a_3646);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_3646 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_1677))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_1677)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _1677);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1679;
    if( _1 != _1679 ){
        DeRef(_1);
    }
    _1679 = NOVALUE;
L3: 

    /** scinot.e:115			i += 1*/
    _0 = _i_3652;
    if (IS_ATOM_INT(_i_3652)) {
        _i_3652 = _i_3652 + 1;
        if (_i_3652 > MAXINT){
            _i_3652 = NewDouble((eudouble)_i_3652);
        }
    }
    else
    _i_3652 = binary_op(PLUS, 1, _i_3652);
    DeRef(_0);

    /** scinot.e:116		end while*/
    goto L1; // [101] 21
L2: 

    /** scinot.e:118		return a*/
    DeRef(_q_3648);
    DeRef(_r_3649);
    DeRef(_b_3650);
    DeRef(_rmax_3651);
    DeRef(_i_3652);
    DeRef(_1677);
    _1677 = NOVALUE;
    return _a_3646;
    ;
}


object _20add(object _a_3672, object _b_3673)
{
    object _1697 = NOVALUE;
    object _1695 = NOVALUE;
    object _1694 = NOVALUE;
    object _1693 = NOVALUE;
    object _1692 = NOVALUE;
    object _1690 = NOVALUE;
    object _1689 = NOVALUE;
    object _1687 = NOVALUE;
    object _1686 = NOVALUE;
    object _1685 = NOVALUE;
    object _1684 = NOVALUE;
    object _1682 = NOVALUE;
    object _1681 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:123		if length(a) < length(b) then*/
    if (IS_SEQUENCE(_a_3672)){
            _1681 = SEQ_PTR(_a_3672)->length;
    }
    else {
        _1681 = 1;
    }
    if (IS_SEQUENCE(_b_3673)){
            _1682 = SEQ_PTR(_b_3673)->length;
    }
    else {
        _1682 = 1;
    }
    if (_1681 >= _1682)
    goto L1; // [13] 40

    /** scinot.e:124			a &= repeat( 0, length(b) - length(a) )*/
    if (IS_SEQUENCE(_b_3673)){
            _1684 = SEQ_PTR(_b_3673)->length;
    }
    else {
        _1684 = 1;
    }
    if (IS_SEQUENCE(_a_3672)){
            _1685 = SEQ_PTR(_a_3672)->length;
    }
    else {
        _1685 = 1;
    }
    _1686 = _1684 - _1685;
    _1684 = NOVALUE;
    _1685 = NOVALUE;
    _1687 = Repeat(0, _1686);
    _1686 = NOVALUE;
    Concat((object_ptr)&_a_3672, _a_3672, _1687);
    DeRefDS(_1687);
    _1687 = NOVALUE;
    goto L2; // [37] 74
L1: 

    /** scinot.e:125		elsif length(b) < length(a) then*/
    if (IS_SEQUENCE(_b_3673)){
            _1689 = SEQ_PTR(_b_3673)->length;
    }
    else {
        _1689 = 1;
    }
    if (IS_SEQUENCE(_a_3672)){
            _1690 = SEQ_PTR(_a_3672)->length;
    }
    else {
        _1690 = 1;
    }
    if (_1689 >= _1690)
    goto L3; // [48] 73

    /** scinot.e:126			b &= repeat( 0, length(a) - length(b) )*/
    if (IS_SEQUENCE(_a_3672)){
            _1692 = SEQ_PTR(_a_3672)->length;
    }
    else {
        _1692 = 1;
    }
    if (IS_SEQUENCE(_b_3673)){
            _1693 = SEQ_PTR(_b_3673)->length;
    }
    else {
        _1693 = 1;
    }
    _1694 = _1692 - _1693;
    _1692 = NOVALUE;
    _1693 = NOVALUE;
    _1695 = Repeat(0, _1694);
    _1694 = NOVALUE;
    Concat((object_ptr)&_b_3673, _b_3673, _1695);
    DeRefDS(_1695);
    _1695 = NOVALUE;
L3: 
L2: 

    /** scinot.e:129		return a + b*/
    _1697 = binary_op(PLUS, _a_3672, _b_3673);
    DeRefDS(_a_3672);
    DeRefDS(_b_3673);
    return _1697;
    ;
}


object _20borrow(object _a_3695, object _radix_3696)
{
    object _1705 = NOVALUE;
    object _1704 = NOVALUE;
    object _1703 = NOVALUE;
    object _1702 = NOVALUE;
    object _1701 = NOVALUE;
    object _1699 = NOVALUE;
    object _1698 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:134		for i = length(a) to 2 by -1 do*/
    if (IS_SEQUENCE(_a_3695)){
            _1698 = SEQ_PTR(_a_3695)->length;
    }
    else {
        _1698 = 1;
    }
    {
        object _i_3698;
        _i_3698 = _1698;
L1: 
        if (_i_3698 < 2){
            goto L2; // [10] 67
        }

        /** scinot.e:135			if a[i] < 0 then*/
        _2 = (object)SEQ_PTR(_a_3695);
        _1699 = (object)*(((s1_ptr)_2)->base + _i_3698);
        if (binary_op_a(GREATEREQ, _1699, 0)){
            _1699 = NOVALUE;
            goto L3; // [23] 60
        }
        _1699 = NOVALUE;

        /** scinot.e:136				a[i] += radix*/
        _2 = (object)SEQ_PTR(_a_3695);
        _1701 = (object)*(((s1_ptr)_2)->base + _i_3698);
        if (IS_ATOM_INT(_1701)) {
            _1702 = _1701 + _radix_3696;
            if ((object)((uintptr_t)_1702 + (uintptr_t)HIGH_BITS) >= 0){
                _1702 = NewDouble((eudouble)_1702);
            }
        }
        else {
            _1702 = binary_op(PLUS, _1701, _radix_3696);
        }
        _1701 = NOVALUE;
        _2 = (object)SEQ_PTR(_a_3695);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_3695 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_3698);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1702;
        if( _1 != _1702 ){
            DeRef(_1);
        }
        _1702 = NOVALUE;

        /** scinot.e:137				a[i-1] -= 1*/
        _1703 = _i_3698 - 1;
        _2 = (object)SEQ_PTR(_a_3695);
        _1704 = (object)*(((s1_ptr)_2)->base + _1703);
        if (IS_ATOM_INT(_1704)) {
            _1705 = _1704 - 1;
            if ((object)((uintptr_t)_1705 +(uintptr_t) HIGH_BITS) >= 0){
                _1705 = NewDouble((eudouble)_1705);
            }
        }
        else {
            _1705 = binary_op(MINUS, _1704, 1);
        }
        _1704 = NOVALUE;
        _2 = (object)SEQ_PTR(_a_3695);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_3695 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1703);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1705;
        if( _1 != _1705 ){
            DeRef(_1);
        }
        _1705 = NOVALUE;
L3: 

        /** scinot.e:139		end for*/
        _i_3698 = _i_3698 + -1;
        goto L1; // [62] 17
L2: 
        ;
    }

    /** scinot.e:140		return a*/
    DeRef(_1703);
    _1703 = NOVALUE;
    return _a_3695;
    ;
}


object _20bits_to_bytes(object _bits_3710)
{
    object _bytes_3711 = NOVALUE;
    object _r_3712 = NOVALUE;
    object _1714 = NOVALUE;
    object _1713 = NOVALUE;
    object _1712 = NOVALUE;
    object _1711 = NOVALUE;
    object _1709 = NOVALUE;
    object _1708 = NOVALUE;
    object _1706 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:155		r = remainder( length(bits), 8 )*/
    if (IS_SEQUENCE(_bits_3710)){
            _1706 = SEQ_PTR(_bits_3710)->length;
    }
    else {
        _1706 = 1;
    }
    _r_3712 = (_1706 % 8);
    _1706 = NOVALUE;

    /** scinot.e:156		if r  then*/
    if (_r_3712 == 0)
    {
        goto L1; // [14] 32
    }
    else{
    }

    /** scinot.e:157			bits &= repeat( 0, 8 - r )*/
    _1708 = 8 - _r_3712;
    _1709 = Repeat(0, _1708);
    _1708 = NOVALUE;
    Concat((object_ptr)&_bits_3710, _bits_3710, _1709);
    DeRefDS(_1709);
    _1709 = NOVALUE;
L1: 

    /** scinot.e:160		bytes = {}*/
    RefDS(_5);
    DeRef(_bytes_3711);
    _bytes_3711 = _5;

    /** scinot.e:161		for i = 1 to length(bits) by 8 do*/
    if (IS_SEQUENCE(_bits_3710)){
            _1711 = SEQ_PTR(_bits_3710)->length;
    }
    else {
        _1711 = 1;
    }
    {
        object _i_3720;
        _i_3720 = 1;
L2: 
        if (_i_3720 > _1711){
            goto L3; // [44] 77
        }

        /** scinot.e:162			bytes &= bits_to_int( bits[i..i+7] )*/
        _1712 = _i_3720 + 7;
        rhs_slice_target = (object_ptr)&_1713;
        RHS_Slice(_bits_3710, _i_3720, _1712);
        _1714 = _14bits_to_int(_1713);
        _1713 = NOVALUE;
        if (IS_SEQUENCE(_bytes_3711) && IS_ATOM(_1714)) {
            Ref(_1714);
            Append(&_bytes_3711, _bytes_3711, _1714);
        }
        else if (IS_ATOM(_bytes_3711) && IS_SEQUENCE(_1714)) {
        }
        else {
            Concat((object_ptr)&_bytes_3711, _bytes_3711, _1714);
        }
        DeRef(_1714);
        _1714 = NOVALUE;

        /** scinot.e:163		end for*/
        _i_3720 = _i_3720 + 8;
        goto L2; // [72] 51
L3: 
        ;
    }

    /** scinot.e:164		return bytes*/
    DeRefDS(_bits_3710);
    DeRef(_1712);
    _1712 = NOVALUE;
    return _bytes_3711;
    ;
}


object _20bytes_to_bits(object _bytes_3729)
{
    object _bits_3730 = NOVALUE;
    object _1718 = NOVALUE;
    object _1717 = NOVALUE;
    object _1716 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:179		bits = {}*/
    RefDS(_5);
    DeRef(_bits_3730);
    _bits_3730 = _5;

    /** scinot.e:180		for i = 1 to length(bytes) do*/
    if (IS_SEQUENCE(_bytes_3729)){
            _1716 = SEQ_PTR(_bytes_3729)->length;
    }
    else {
        _1716 = 1;
    }
    {
        object _i_3732;
        _i_3732 = 1;
L1: 
        if (_i_3732 > _1716){
            goto L2; // [15] 44
        }

        /** scinot.e:181			bits &= int_to_bits( bytes[i], 8 )*/
        _2 = (object)SEQ_PTR(_bytes_3729);
        _1717 = (object)*(((s1_ptr)_2)->base + _i_3732);
        Ref(_1717);
        _1718 = _14int_to_bits(_1717, 8);
        _1717 = NOVALUE;
        if (IS_SEQUENCE(_bits_3730) && IS_ATOM(_1718)) {
            Ref(_1718);
            Append(&_bits_3730, _bits_3730, _1718);
        }
        else if (IS_ATOM(_bits_3730) && IS_SEQUENCE(_1718)) {
        }
        else {
            Concat((object_ptr)&_bits_3730, _bits_3730, _1718);
        }
        DeRef(_1718);
        _1718 = NOVALUE;

        /** scinot.e:182		end for*/
        _i_3732 = _i_3732 + 1;
        goto L1; // [39] 22
L2: 
        ;
    }

    /** scinot.e:184		return bits*/
    DeRefDS(_bytes_3729);
    return _bits_3730;
    ;
}


object _20convert_radix(object _number_3740, object _from_radix_3741, object _to_radix_3742)
{
    object _target_3743 = NOVALUE;
    object _base_3744 = NOVALUE;
    object _1725 = NOVALUE;
    object _1724 = NOVALUE;
    object _1723 = NOVALUE;
    object _1722 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:190		base = {1}*/
    RefDS(_1720);
    DeRef(_base_3744);
    _base_3744 = _1720;

    /** scinot.e:191		target = {0}*/
    _0 = _target_3743;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _target_3743 = MAKE_SEQ(_1);
    DeRef(_0);

    /** scinot.e:192		for i = 1 to length(number) do*/
    if (IS_SEQUENCE(_number_3740)){
            _1722 = SEQ_PTR(_number_3740)->length;
    }
    else {
        _1722 = 1;
    }
    {
        object _i_3748;
        _i_3748 = 1;
L1: 
        if (_i_3748 > _1722){
            goto L2; // [25] 78
        }

        /** scinot.e:193			target = carry( add( base * number[i], target ), to_radix )*/
        _2 = (object)SEQ_PTR(_number_3740);
        _1723 = (object)*(((s1_ptr)_2)->base + _i_3748);
        _1724 = binary_op(MULTIPLY, _base_3744, _1723);
        _1723 = NOVALUE;
        RefDS(_target_3743);
        _1725 = _20add(_1724, _target_3743);
        _1724 = NOVALUE;
        _0 = _target_3743;
        _target_3743 = _20carry(_1725, _to_radix_3742);
        DeRefDS(_0);
        _1725 = NOVALUE;

        /** scinot.e:194			base *= from_radix*/
        _0 = _base_3744;
        _base_3744 = binary_op(MULTIPLY, _base_3744, _from_radix_3741);
        DeRefDS(_0);

        /** scinot.e:195			base = carry( base, to_radix )*/
        RefDS(_base_3744);
        _0 = _base_3744;
        _base_3744 = _20carry(_base_3744, _to_radix_3742);
        DeRefDS(_0);

        /** scinot.e:196		end for*/
        _i_3748 = _i_3748 + 1;
        goto L1; // [73] 32
L2: 
        ;
    }

    /** scinot.e:198		return target*/
    DeRefDS(_number_3740);
    DeRef(_base_3744);
    return _target_3743;
    ;
}


object _20half(object _decimal_3758)
{
    object _quotient_3759 = NOVALUE;
    object _q_3760 = NOVALUE;
    object _Q_3761 = NOVALUE;
    object _1746 = NOVALUE;
    object _1745 = NOVALUE;
    object _1744 = NOVALUE;
    object _1743 = NOVALUE;
    object _1742 = NOVALUE;
    object _1741 = NOVALUE;
    object _1738 = NOVALUE;
    object _1736 = NOVALUE;
    object _1735 = NOVALUE;
    object _1732 = NOVALUE;
    object _1731 = NOVALUE;
    object _1729 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:205		quotient = repeat( 0, length(decimal) )*/
    if (IS_SEQUENCE(_decimal_3758)){
            _1729 = SEQ_PTR(_decimal_3758)->length;
    }
    else {
        _1729 = 1;
    }
    DeRef(_quotient_3759);
    _quotient_3759 = Repeat(0, _1729);
    _1729 = NOVALUE;

    /** scinot.e:206		for i = 1 to length( decimal ) do*/
    if (IS_SEQUENCE(_decimal_3758)){
            _1731 = SEQ_PTR(_decimal_3758)->length;
    }
    else {
        _1731 = 1;
    }
    {
        object _i_3765;
        _i_3765 = 1;
L1: 
        if (_i_3765 > _1731){
            goto L2; // [17] 101
        }

        /** scinot.e:207			q = decimal[i] / 2*/
        _2 = (object)SEQ_PTR(_decimal_3758);
        _1732 = (object)*(((s1_ptr)_2)->base + _i_3765);
        DeRef(_q_3760);
        if (IS_ATOM_INT(_1732)) {
            if (_1732 & 1) {
                _q_3760 = NewDouble((_1732 >> 1) + 0.5);
            }
            else
            _q_3760 = _1732 >> 1;
        }
        else {
            _q_3760 = binary_op(DIVIDE, _1732, 2);
        }
        _1732 = NOVALUE;

        /** scinot.e:208			Q = floor( q )*/
        DeRef(_Q_3761);
        if (IS_ATOM_INT(_q_3760))
        _Q_3761 = e_floor(_q_3760);
        else
        _Q_3761 = unary_op(FLOOR, _q_3760);

        /** scinot.e:209			quotient[i] +=  Q*/
        _2 = (object)SEQ_PTR(_quotient_3759);
        _1735 = (object)*(((s1_ptr)_2)->base + _i_3765);
        if (IS_ATOM_INT(_1735) && IS_ATOM_INT(_Q_3761)) {
            _1736 = _1735 + _Q_3761;
            if ((object)((uintptr_t)_1736 + (uintptr_t)HIGH_BITS) >= 0){
                _1736 = NewDouble((eudouble)_1736);
            }
        }
        else {
            _1736 = binary_op(PLUS, _1735, _Q_3761);
        }
        _1735 = NOVALUE;
        _2 = (object)SEQ_PTR(_quotient_3759);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_3759 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_3765);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1736;
        if( _1 != _1736 ){
            DeRef(_1);
        }
        _1736 = NOVALUE;

        /** scinot.e:211			if q != Q then*/
        if (binary_op_a(EQUALS, _q_3760, _Q_3761)){
            goto L3; // [55] 94
        }

        /** scinot.e:212				if length(quotient) = i then*/
        if (IS_SEQUENCE(_quotient_3759)){
                _1738 = SEQ_PTR(_quotient_3759)->length;
        }
        else {
            _1738 = 1;
        }
        if (_1738 != _i_3765)
        goto L4; // [64] 75

        /** scinot.e:213					quotient &= 0*/
        Append(&_quotient_3759, _quotient_3759, 0);
L4: 

        /** scinot.e:215				quotient[i+1] += 5*/
        _1741 = _i_3765 + 1;
        _2 = (object)SEQ_PTR(_quotient_3759);
        _1742 = (object)*(((s1_ptr)_2)->base + _1741);
        if (IS_ATOM_INT(_1742)) {
            _1743 = _1742 + 5;
            if ((object)((uintptr_t)_1743 + (uintptr_t)HIGH_BITS) >= 0){
                _1743 = NewDouble((eudouble)_1743);
            }
        }
        else {
            _1743 = binary_op(PLUS, _1742, 5);
        }
        _1742 = NOVALUE;
        _2 = (object)SEQ_PTR(_quotient_3759);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_3759 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _1741);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1743;
        if( _1 != _1743 ){
            DeRef(_1);
        }
        _1743 = NOVALUE;
L3: 

        /** scinot.e:217		end for*/
        _i_3765 = _i_3765 + 1;
        goto L1; // [96] 24
L2: 
        ;
    }

    /** scinot.e:218		return reverse( carry( reverse( quotient ), 10 ) )*/
    RefDS(_quotient_3759);
    _1744 = _20reverse(_quotient_3759);
    _1745 = _20carry(_1744, 10);
    _1744 = NOVALUE;
    _1746 = _20reverse(_1745);
    _1745 = NOVALUE;
    DeRefDS(_decimal_3758);
    DeRefDS(_quotient_3759);
    DeRef(_q_3760);
    DeRef(_Q_3761);
    DeRef(_1741);
    _1741 = NOVALUE;
    return _1746;
    ;
}


object _20decimals_to_bits(object _decimals_3794, object _size_3795)
{
    object _sub_3796 = NOVALUE;
    object _bits_3797 = NOVALUE;
    object _bit_3798 = NOVALUE;
    object _assigned_3799 = NOVALUE;
    object _1774 = NOVALUE;
    object _1770 = NOVALUE;
    object _1769 = NOVALUE;
    object _1768 = NOVALUE;
    object _1767 = NOVALUE;
    object _1765 = NOVALUE;
    object _1764 = NOVALUE;
    object _1763 = NOVALUE;
    object _1761 = NOVALUE;
    object _1759 = NOVALUE;
    object _1758 = NOVALUE;
    object _1757 = NOVALUE;
    object _1756 = NOVALUE;
    object _1755 = NOVALUE;
    object _1753 = NOVALUE;
    object _1751 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:233		sub = {5}*/
    RefDS(_1749);
    DeRef(_sub_3796);
    _sub_3796 = _1749;

    /** scinot.e:234		bits = repeat( 0, size )*/
    DeRef(_bits_3797);
    _bits_3797 = Repeat(0, _size_3795);

    /** scinot.e:235		bit = 1*/
    _bit_3798 = 1;

    /** scinot.e:236		assigned = 0*/
    _assigned_3799 = 0;

    /** scinot.e:240		if compare(decimals, bits) > 0 then */
    if (IS_ATOM_INT(_decimals_3794) && IS_ATOM_INT(_bits_3797)){
        _1751 = (_decimals_3794 < _bits_3797) ? -1 : (_decimals_3794 > _bits_3797);
    }
    else{
        _1751 = compare(_decimals_3794, _bits_3797);
    }
    if (_1751 <= 0)
    goto L1; // [34] 166

    /** scinot.e:242			while (not assigned) or (bit < find( 1, bits ) + size + 1)  do*/
L2: 
    _1753 = (_assigned_3799 == 0);
    if (_1753 != 0) {
        goto L3; // [46] 72
    }
    _1755 = find_from(1, _bits_3797, 1);
    _1756 = _1755 + _size_3795;
    if ((object)((uintptr_t)_1756 + (uintptr_t)HIGH_BITS) >= 0){
        _1756 = NewDouble((eudouble)_1756);
    }
    _1755 = NOVALUE;
    if (IS_ATOM_INT(_1756)) {
        _1757 = _1756 + 1;
        if (_1757 > MAXINT){
            _1757 = NewDouble((eudouble)_1757);
        }
    }
    else
    _1757 = binary_op(PLUS, 1, _1756);
    DeRef(_1756);
    _1756 = NOVALUE;
    if (IS_ATOM_INT(_1757)) {
        _1758 = (_bit_3798 < _1757);
    }
    else {
        _1758 = ((eudouble)_bit_3798 < DBL_PTR(_1757)->dbl);
    }
    DeRef(_1757);
    _1757 = NOVALUE;
    if (_1758 == 0)
    {
        DeRef(_1758);
        _1758 = NOVALUE;
        goto L4; // [68] 165
    }
    else{
        DeRef(_1758);
        _1758 = NOVALUE;
    }
L3: 

    /** scinot.e:243				if compare( sub, decimals ) <= 0 then*/
    if (IS_ATOM_INT(_sub_3796) && IS_ATOM_INT(_decimals_3794)){
        _1759 = (_sub_3796 < _decimals_3794) ? -1 : (_sub_3796 > _decimals_3794);
    }
    else{
        _1759 = compare(_sub_3796, _decimals_3794);
    }
    if (_1759 > 0)
    goto L5; // [78] 146

    /** scinot.e:244					assigned = 1*/
    _assigned_3799 = 1;

    /** scinot.e:245					if length( bits ) < bit then*/
    if (IS_SEQUENCE(_bits_3797)){
            _1761 = SEQ_PTR(_bits_3797)->length;
    }
    else {
        _1761 = 1;
    }
    if (_1761 >= _bit_3798)
    goto L6; // [92] 114

    /** scinot.e:246						bits &= repeat( 0, bit - length(bits)) */
    if (IS_SEQUENCE(_bits_3797)){
            _1763 = SEQ_PTR(_bits_3797)->length;
    }
    else {
        _1763 = 1;
    }
    _1764 = _bit_3798 - _1763;
    _1763 = NOVALUE;
    _1765 = Repeat(0, _1764);
    _1764 = NOVALUE;
    Concat((object_ptr)&_bits_3797, _bits_3797, _1765);
    DeRefDS(_1765);
    _1765 = NOVALUE;
L6: 

    /** scinot.e:249					bits[bit] += 1*/
    _2 = (object)SEQ_PTR(_bits_3797);
    _1767 = (object)*(((s1_ptr)_2)->base + _bit_3798);
    if (IS_ATOM_INT(_1767)) {
        _1768 = _1767 + 1;
        if (_1768 > MAXINT){
            _1768 = NewDouble((eudouble)_1768);
        }
    }
    else
    _1768 = binary_op(PLUS, 1, _1767);
    _1767 = NOVALUE;
    _2 = (object)SEQ_PTR(_bits_3797);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bits_3797 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _bit_3798);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1768;
    if( _1 != _1768 ){
        DeRef(_1);
    }
    _1768 = NOVALUE;

    /** scinot.e:250					decimals = borrow( add( decimals, -sub ), 10 )*/
    _1769 = unary_op(UMINUS, _sub_3796);
    RefDS(_decimals_3794);
    _1770 = _20add(_decimals_3794, _1769);
    _1769 = NOVALUE;
    _0 = _decimals_3794;
    _decimals_3794 = _20borrow(_1770, 10);
    DeRefDS(_0);
    _1770 = NOVALUE;
L5: 

    /** scinot.e:252				sub = half( sub )*/
    RefDS(_sub_3796);
    _0 = _sub_3796;
    _sub_3796 = _20half(_sub_3796);
    DeRefDS(_0);

    /** scinot.e:254				bit += 1*/
    _bit_3798 = _bit_3798 + 1;

    /** scinot.e:255			end while*/
    goto L2; // [162] 43
L4: 
L1: 

    /** scinot.e:258		return reverse(bits)*/
    RefDS(_bits_3797);
    _1774 = _20reverse(_bits_3797);
    DeRefDS(_decimals_3794);
    DeRef(_sub_3796);
    DeRefDS(_bits_3797);
    DeRef(_1753);
    _1753 = NOVALUE;
    return _1774;
    ;
}


object _20string_to_int(object _s_3832)
{
    object _int_3833 = NOVALUE;
    object _1778 = NOVALUE;
    object _1777 = NOVALUE;
    object _1775 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:263		int = 0*/
    _int_3833 = 0;

    /** scinot.e:264		for i = 1 to length(s) do*/
    if (IS_SEQUENCE(_s_3832)){
            _1775 = SEQ_PTR(_s_3832)->length;
    }
    else {
        _1775 = 1;
    }
    {
        object _i_3835;
        _i_3835 = 1;
L1: 
        if (_i_3835 > _1775){
            goto L2; // [13] 51
        }

        /** scinot.e:265			int *= 10*/
        _int_3833 = _int_3833 * 10;

        /** scinot.e:266			int += s[i] - '0'*/
        _2 = (object)SEQ_PTR(_s_3832);
        _1777 = (object)*(((s1_ptr)_2)->base + _i_3835);
        if (IS_ATOM_INT(_1777)) {
            _1778 = _1777 - 48;
            if ((object)((uintptr_t)_1778 +(uintptr_t) HIGH_BITS) >= 0){
                _1778 = NewDouble((eudouble)_1778);
            }
        }
        else {
            _1778 = binary_op(MINUS, _1777, 48);
        }
        _1777 = NOVALUE;
        if (IS_ATOM_INT(_1778)) {
            _int_3833 = _int_3833 + _1778;
        }
        else {
            _int_3833 = binary_op(PLUS, _int_3833, _1778);
        }
        DeRef(_1778);
        _1778 = NOVALUE;
        if (!IS_ATOM_INT(_int_3833)) {
            _1 = (object)(DBL_PTR(_int_3833)->dbl);
            DeRefDS(_int_3833);
            _int_3833 = _1;
        }

        /** scinot.e:267		end for*/
        _i_3835 = _i_3835 + 1;
        goto L1; // [46] 20
L2: 
        ;
    }

    /** scinot.e:268		return int*/
    DeRefDS(_s_3832);
    return _int_3833;
    ;
}


object _20trim_bits(object _bits_3843)
{
    object _1785 = NOVALUE;
    object _1784 = NOVALUE;
    object _1783 = NOVALUE;
    object _1782 = NOVALUE;
    object _1781 = NOVALUE;
    object _1780 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:272			while length(bits) and not bits[$] do*/
L1: 
    if (IS_SEQUENCE(_bits_3843)){
            _1780 = SEQ_PTR(_bits_3843)->length;
    }
    else {
        _1780 = 1;
    }
    if (_1780 == 0) {
        goto L2; // [11] 44
    }
    if (IS_SEQUENCE(_bits_3843)){
            _1782 = SEQ_PTR(_bits_3843)->length;
    }
    else {
        _1782 = 1;
    }
    _2 = (object)SEQ_PTR(_bits_3843);
    _1783 = (object)*(((s1_ptr)_2)->base + _1782);
    if (IS_ATOM_INT(_1783)) {
        _1784 = (_1783 == 0);
    }
    else {
        _1784 = unary_op(NOT, _1783);
    }
    _1783 = NOVALUE;
    if (_1784 <= 0) {
        if (_1784 == 0) {
            DeRef(_1784);
            _1784 = NOVALUE;
            goto L2; // [26] 44
        }
        else {
            if (!IS_ATOM_INT(_1784) && DBL_PTR(_1784)->dbl == 0.0){
                DeRef(_1784);
                _1784 = NOVALUE;
                goto L2; // [26] 44
            }
            DeRef(_1784);
            _1784 = NOVALUE;
        }
    }
    DeRef(_1784);
    _1784 = NOVALUE;

    /** scinot.e:273				bits = remove( bits, length( bits ) )*/
    if (IS_SEQUENCE(_bits_3843)){
            _1785 = SEQ_PTR(_bits_3843)->length;
    }
    else {
        _1785 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_bits_3843);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1785)) ? _1785 : (object)(DBL_PTR(_1785)->dbl);
        int stop = (IS_ATOM_INT(_1785)) ? _1785 : (object)(DBL_PTR(_1785)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_bits_3843), start, &_bits_3843 );
            }
            else Tail(SEQ_PTR(_bits_3843), stop+1, &_bits_3843);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_bits_3843), start, &_bits_3843);
        }
        else {
            assign_slice_seq = &assign_space;
            _bits_3843 = Remove_elements(start, stop, (SEQ_PTR(_bits_3843)->ref == 1));
        }
    }
    _1785 = NOVALUE;
    _1785 = NOVALUE;

    /** scinot.e:274			end while*/
    goto L1; // [41] 8
L2: 

    /** scinot.e:275			return bits*/
    return _bits_3843;
    ;
}


object _20scientific_to_float(object _s_3866, object _fp_3867)
{
    object _dp_3868 = NOVALUE;
    object _e_3869 = NOVALUE;
    object _exp_3870 = NOVALUE;
    object _int_bits_3871 = NOVALUE;
    object _frac_bits_3872 = NOVALUE;
    object _mbits_3873 = NOVALUE;
    object _ebits_3874 = NOVALUE;
    object _sbits_3875 = NOVALUE;
    object _significand_3876 = NOVALUE;
    object _exponent_3877 = NOVALUE;
    object _min_exp_3878 = NOVALUE;
    object _exp_bias_3879 = NOVALUE;
    object _1944 = NOVALUE;
    object _1943 = NOVALUE;
    object _1941 = NOVALUE;
    object _1939 = NOVALUE;
    object _1938 = NOVALUE;
    object _1936 = NOVALUE;
    object _1935 = NOVALUE;
    object _1934 = NOVALUE;
    object _1933 = NOVALUE;
    object _1932 = NOVALUE;
    object _1931 = NOVALUE;
    object _1930 = NOVALUE;
    object _1928 = NOVALUE;
    object _1927 = NOVALUE;
    object _1925 = NOVALUE;
    object _1924 = NOVALUE;
    object _1923 = NOVALUE;
    object _1922 = NOVALUE;
    object _1919 = NOVALUE;
    object _1918 = NOVALUE;
    object _1917 = NOVALUE;
    object _1916 = NOVALUE;
    object _1915 = NOVALUE;
    object _1914 = NOVALUE;
    object _1913 = NOVALUE;
    object _1912 = NOVALUE;
    object _1909 = NOVALUE;
    object _1908 = NOVALUE;
    object _1905 = NOVALUE;
    object _1904 = NOVALUE;
    object _1903 = NOVALUE;
    object _1902 = NOVALUE;
    object _1899 = NOVALUE;
    object _1898 = NOVALUE;
    object _1896 = NOVALUE;
    object _1895 = NOVALUE;
    object _1893 = NOVALUE;
    object _1891 = NOVALUE;
    object _1890 = NOVALUE;
    object _1889 = NOVALUE;
    object _1888 = NOVALUE;
    object _1887 = NOVALUE;
    object _1886 = NOVALUE;
    object _1885 = NOVALUE;
    object _1884 = NOVALUE;
    object _1883 = NOVALUE;
    object _1882 = NOVALUE;
    object _1880 = NOVALUE;
    object _1879 = NOVALUE;
    object _1878 = NOVALUE;
    object _1877 = NOVALUE;
    object _1875 = NOVALUE;
    object _1874 = NOVALUE;
    object _1873 = NOVALUE;
    object _1872 = NOVALUE;
    object _1869 = NOVALUE;
    object _1867 = NOVALUE;
    object _1866 = NOVALUE;
    object _1865 = NOVALUE;
    object _1864 = NOVALUE;
    object _1863 = NOVALUE;
    object _1861 = NOVALUE;
    object _1860 = NOVALUE;
    object _1859 = NOVALUE;
    object _1858 = NOVALUE;
    object _1857 = NOVALUE;
    object _1856 = NOVALUE;
    object _1854 = NOVALUE;
    object _1853 = NOVALUE;
    object _1852 = NOVALUE;
    object _1851 = NOVALUE;
    object _1850 = NOVALUE;
    object _1848 = NOVALUE;
    object _1847 = NOVALUE;
    object _1845 = NOVALUE;
    object _1844 = NOVALUE;
    object _1843 = NOVALUE;
    object _1842 = NOVALUE;
    object _1841 = NOVALUE;
    object _1839 = NOVALUE;
    object _1837 = NOVALUE;
    object _1834 = NOVALUE;
    object _1833 = NOVALUE;
    object _1831 = NOVALUE;
    object _1830 = NOVALUE;
    object _1828 = NOVALUE;
    object _1824 = NOVALUE;
    object _1823 = NOVALUE;
    object _1822 = NOVALUE;
    object _1821 = NOVALUE;
    object _1819 = NOVALUE;
    object _1818 = NOVALUE;
    object _1817 = NOVALUE;
    object _1816 = NOVALUE;
    object _1814 = NOVALUE;
    object _1813 = NOVALUE;
    object _1811 = NOVALUE;
    object _1810 = NOVALUE;
    object _1809 = NOVALUE;
    object _1808 = NOVALUE;
    object _1806 = NOVALUE;
    object _1805 = NOVALUE;
    object _1798 = NOVALUE;
    object _1794 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:316		if fp = NATIVE then*/
    if (_fp_3867 != 1)
    goto L1; // [5] 17

    /** scinot.e:317			fp = NATIVE_FORMAT*/
    _fp_3867 = 2;
L1: 

    /** scinot.e:319		if fp = DOUBLE then*/
    if (_fp_3867 != 2)
    goto L2; // [19] 46

    /** scinot.e:320			significand = DOUBLE_SIGNIFICAND*/
    _significand_3876 = 52;

    /** scinot.e:321			exponent    = DOUBLE_EXPONENT*/
    _exponent_3877 = 11;

    /** scinot.e:322			min_exp     = DOUBLE_MIN_EXP*/
    _min_exp_3878 = -1023;

    /** scinot.e:323			exp_bias    = DOUBLE_EXP_BIAS*/
    _exp_bias_3879 = 1023;
    goto L3; // [43] 74
L2: 

    /** scinot.e:325		elsif fp = EXTENDED then*/
    if (_fp_3867 != 3)
    goto L4; // [48] 73

    /** scinot.e:326			significand = EXTENDED_SIGNIFICAND*/
    _significand_3876 = 64;

    /** scinot.e:327			exponent    = EXTENDED_EXPONENT*/
    _exponent_3877 = 15;

    /** scinot.e:328			min_exp     = EXTENDED_MIN_EXP*/
    _min_exp_3878 = -16383;

    /** scinot.e:329			exp_bias    = EXTENDED_EXP_BIAS*/
    _exp_bias_3879 = 16383;
L4: 
L3: 

    /** scinot.e:333		if s[1] = '-' then*/
    _2 = (object)SEQ_PTR(_s_3866);
    _1794 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _1794, 45)){
        _1794 = NOVALUE;
        goto L5; // [80] 101
    }
    _1794 = NOVALUE;

    /** scinot.e:334			sbits = {1}*/
    RefDS(_1720);
    DeRefi(_sbits_3875);
    _sbits_3875 = _1720;

    /** scinot.e:335			s = remove( s, 1 )*/
    {
        s1_ptr assign_space = SEQ_PTR(_s_3866);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_3866), start, &_s_3866 );
            }
            else Tail(SEQ_PTR(_s_3866), stop+1, &_s_3866);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_3866), start, &_s_3866);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_3866 = Remove_elements(start, stop, (SEQ_PTR(_s_3866)->ref == 1));
        }
    }
    goto L6; // [98] 126
L5: 

    /** scinot.e:337			sbits = {0}*/
    _0 = _sbits_3875;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _sbits_3875 = MAKE_SEQ(_1);
    DeRefi(_0);

    /** scinot.e:338			if s[1] = '+' then*/
    _2 = (object)SEQ_PTR(_s_3866);
    _1798 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _1798, 43)){
        _1798 = NOVALUE;
        goto L7; // [113] 125
    }
    _1798 = NOVALUE;

    /** scinot.e:339				s = remove( s, 1 )*/
    {
        s1_ptr assign_space = SEQ_PTR(_s_3866);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_3866), start, &_s_3866 );
            }
            else Tail(SEQ_PTR(_s_3866), stop+1, &_s_3866);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_3866), start, &_s_3866);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_3866 = Remove_elements(start, stop, (SEQ_PTR(_s_3866)->ref == 1));
        }
    }
L7: 
L6: 

    /** scinot.e:344		dp = find('.', s)*/
    _dp_3868 = find_from(46, _s_3866, 1);

    /** scinot.e:345		e = find( 'e', s )*/
    _e_3869 = find_from(101, _s_3866, 1);

    /** scinot.e:346		if not e then*/
    if (_e_3869 != 0)
    goto L8; // [142] 153

    /** scinot.e:347			e = find('E', s )*/
    _e_3869 = find_from(69, _s_3866, 1);
L8: 

    /** scinot.e:351		exp = 0*/
    _exp_3870 = 0;

    /** scinot.e:352		if s[e+1] = '-' then*/
    _1805 = _e_3869 + 1;
    _2 = (object)SEQ_PTR(_s_3866);
    _1806 = (object)*(((s1_ptr)_2)->base + _1805);
    if (binary_op_a(NOTEQ, _1806, 45)){
        _1806 = NOVALUE;
        goto L9; // [168] 199
    }
    _1806 = NOVALUE;

    /** scinot.e:353			exp -= string_to_int( s[e+2..$] )*/
    _1808 = _e_3869 + 2;
    if ((object)((uintptr_t)_1808 + (uintptr_t)HIGH_BITS) >= 0){
        _1808 = NewDouble((eudouble)_1808);
    }
    if (IS_SEQUENCE(_s_3866)){
            _1809 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1809 = 1;
    }
    rhs_slice_target = (object_ptr)&_1810;
    RHS_Slice(_s_3866, _1808, _1809);
    _1811 = _20string_to_int(_1810);
    _1810 = NOVALUE;
    if (IS_ATOM_INT(_1811)) {
        _exp_3870 = _exp_3870 - _1811;
    }
    else {
        _exp_3870 = binary_op(MINUS, _exp_3870, _1811);
    }
    DeRef(_1811);
    _1811 = NOVALUE;
    if (!IS_ATOM_INT(_exp_3870)) {
        _1 = (object)(DBL_PTR(_exp_3870)->dbl);
        DeRefDS(_exp_3870);
        _exp_3870 = _1;
    }
    goto LA; // [196] 266
L9: 

    /** scinot.e:356			if s[e+1] = '+' then*/
    _1813 = _e_3869 + 1;
    _2 = (object)SEQ_PTR(_s_3866);
    _1814 = (object)*(((s1_ptr)_2)->base + _1813);
    if (binary_op_a(NOTEQ, _1814, 43)){
        _1814 = NOVALUE;
        goto LB; // [209] 240
    }
    _1814 = NOVALUE;

    /** scinot.e:357				exp += string_to_int( s[e+2..$] )*/
    _1816 = _e_3869 + 2;
    if ((object)((uintptr_t)_1816 + (uintptr_t)HIGH_BITS) >= 0){
        _1816 = NewDouble((eudouble)_1816);
    }
    if (IS_SEQUENCE(_s_3866)){
            _1817 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1817 = 1;
    }
    rhs_slice_target = (object_ptr)&_1818;
    RHS_Slice(_s_3866, _1816, _1817);
    _1819 = _20string_to_int(_1818);
    _1818 = NOVALUE;
    if (IS_ATOM_INT(_1819)) {
        _exp_3870 = _exp_3870 + _1819;
    }
    else {
        _exp_3870 = binary_op(PLUS, _exp_3870, _1819);
    }
    DeRef(_1819);
    _1819 = NOVALUE;
    if (!IS_ATOM_INT(_exp_3870)) {
        _1 = (object)(DBL_PTR(_exp_3870)->dbl);
        DeRefDS(_exp_3870);
        _exp_3870 = _1;
    }
    goto LC; // [237] 265
LB: 

    /** scinot.e:359				exp += string_to_int( s[e+1..$] )*/
    _1821 = _e_3869 + 1;
    if (_1821 > MAXINT){
        _1821 = NewDouble((eudouble)_1821);
    }
    if (IS_SEQUENCE(_s_3866)){
            _1822 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1822 = 1;
    }
    rhs_slice_target = (object_ptr)&_1823;
    RHS_Slice(_s_3866, _1821, _1822);
    _1824 = _20string_to_int(_1823);
    _1823 = NOVALUE;
    if (IS_ATOM_INT(_1824)) {
        _exp_3870 = _exp_3870 + _1824;
    }
    else {
        _exp_3870 = binary_op(PLUS, _exp_3870, _1824);
    }
    DeRef(_1824);
    _1824 = NOVALUE;
    if (!IS_ATOM_INT(_exp_3870)) {
        _1 = (object)(DBL_PTR(_exp_3870)->dbl);
        DeRefDS(_exp_3870);
        _exp_3870 = _1;
    }
LC: 
LA: 

    /** scinot.e:363		if dp then*/
    if (_dp_3868 == 0)
    {
        goto LD; // [268] 297
    }
    else{
    }

    /** scinot.e:365			s = remove( s, dp )*/
    {
        s1_ptr assign_space = SEQ_PTR(_s_3866);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_dp_3868)) ? _dp_3868 : (object)(DBL_PTR(_dp_3868)->dbl);
        int stop = (IS_ATOM_INT(_dp_3868)) ? _dp_3868 : (object)(DBL_PTR(_dp_3868)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_3866), start, &_s_3866 );
            }
            else Tail(SEQ_PTR(_s_3866), stop+1, &_s_3866);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_3866), start, &_s_3866);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_3866 = Remove_elements(start, stop, (SEQ_PTR(_s_3866)->ref == 1));
        }
    }

    /** scinot.e:366			e -= 1*/
    _e_3869 = _e_3869 - 1;

    /** scinot.e:369			exp -= e - dp*/
    _1828 = _e_3869 - _dp_3868;
    if ((object)((uintptr_t)_1828 +(uintptr_t) HIGH_BITS) >= 0){
        _1828 = NewDouble((eudouble)_1828);
    }
    if (IS_ATOM_INT(_1828)) {
        _exp_3870 = _exp_3870 - _1828;
    }
    else {
        _exp_3870 = NewDouble((eudouble)_exp_3870 - DBL_PTR(_1828)->dbl);
    }
    DeRef(_1828);
    _1828 = NOVALUE;
    if (!IS_ATOM_INT(_exp_3870)) {
        _1 = (object)(DBL_PTR(_exp_3870)->dbl);
        DeRefDS(_exp_3870);
        _exp_3870 = _1;
    }
LD: 

    /** scinot.e:374		s = s[1..e-1] - '0'*/
    _1830 = _e_3869 - 1;
    rhs_slice_target = (object_ptr)&_1831;
    RHS_Slice(_s_3866, 1, _1830);
    DeRefDS(_s_3866);
    _s_3866 = binary_op(MINUS, _1831, 48);
    DeRefDS(_1831);
    _1831 = NOVALUE;

    /** scinot.e:377		if not find(0, s = 0) then*/
    _1833 = binary_op(EQUALS, _s_3866, 0);
    _1834 = find_from(0, _1833, 1);
    DeRefDS(_1833);
    _1833 = NOVALUE;
    if (_1834 != 0)
    goto LE; // [325] 366
    _1834 = NOVALUE;

    /** scinot.e:378			if fp = DOUBLE then*/
    if (_fp_3867 != 2)
    goto LF; // [330] 347

    /** scinot.e:379				return atom_to_float64(0)*/
    _1837 = _14atom_to_float64(0);
    DeRefDS(_s_3866);
    DeRef(_int_bits_3871);
    DeRef(_frac_bits_3872);
    DeRef(_mbits_3873);
    DeRef(_ebits_3874);
    DeRefi(_sbits_3875);
    DeRef(_1805);
    _1805 = NOVALUE;
    DeRef(_1808);
    _1808 = NOVALUE;
    DeRef(_1821);
    _1821 = NOVALUE;
    DeRef(_1816);
    _1816 = NOVALUE;
    _1830 = NOVALUE;
    DeRef(_1813);
    _1813 = NOVALUE;
    return _1837;
    goto L10; // [344] 365
LF: 

    /** scinot.e:380			elsif fp = EXTENDED then*/
    if (_fp_3867 != 3)
    goto L11; // [349] 364

    /** scinot.e:381				return atom_to_float80(0)*/
    _1839 = _14atom_to_float80(0);
    DeRefDS(_s_3866);
    DeRef(_int_bits_3871);
    DeRef(_frac_bits_3872);
    DeRef(_mbits_3873);
    DeRef(_ebits_3874);
    DeRefi(_sbits_3875);
    DeRef(_1805);
    _1805 = NOVALUE;
    DeRef(_1837);
    _1837 = NOVALUE;
    DeRef(_1808);
    _1808 = NOVALUE;
    DeRef(_1821);
    _1821 = NOVALUE;
    DeRef(_1816);
    _1816 = NOVALUE;
    DeRef(_1830);
    _1830 = NOVALUE;
    DeRef(_1813);
    _1813 = NOVALUE;
    return _1839;
L11: 
L10: 
LE: 

    /** scinot.e:385		if exp >= 0 then*/
    if (_exp_3870 < 0)
    goto L12; // [368] 412

    /** scinot.e:388			int_bits = trim_bits( bytes_to_bits( convert_radix( repeat( 0, exp ) & reverse( s ), 10, #100 ) ) )*/
    _1841 = Repeat(0, _exp_3870);
    RefDS(_s_3866);
    _1842 = _20reverse(_s_3866);
    if (IS_SEQUENCE(_1841) && IS_ATOM(_1842)) {
        Ref(_1842);
        Append(&_1843, _1841, _1842);
    }
    else if (IS_ATOM(_1841) && IS_SEQUENCE(_1842)) {
    }
    else {
        Concat((object_ptr)&_1843, _1841, _1842);
        DeRefDS(_1841);
        _1841 = NOVALUE;
    }
    DeRef(_1841);
    _1841 = NOVALUE;
    DeRef(_1842);
    _1842 = NOVALUE;
    _1844 = _20convert_radix(_1843, 10, 256);
    _1843 = NOVALUE;
    _1845 = _20bytes_to_bits(_1844);
    _1844 = NOVALUE;
    _0 = _int_bits_3871;
    _int_bits_3871 = _20trim_bits(_1845);
    DeRef(_0);
    _1845 = NOVALUE;

    /** scinot.e:389			frac_bits = {}*/
    RefDS(_5);
    DeRef(_frac_bits_3872);
    _frac_bits_3872 = _5;
    goto L13; // [409] 529
L12: 

    /** scinot.e:391			if -exp > length(s) then*/
    if ((uintptr_t)_exp_3870 == (uintptr_t)HIGH_BITS){
        _1847 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _1847 = - _exp_3870;
    }
    if (IS_SEQUENCE(_s_3866)){
            _1848 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1848 = 1;
    }
    if (binary_op_a(LESSEQ, _1847, _1848)){
        DeRef(_1847);
        _1847 = NOVALUE;
        _1848 = NOVALUE;
        goto L14; // [420] 463
    }
    DeRef(_1847);
    _1847 = NOVALUE;
    _1848 = NOVALUE;

    /** scinot.e:393				int_bits = {}*/
    RefDS(_5);
    DeRef(_int_bits_3871);
    _int_bits_3871 = _5;

    /** scinot.e:394				frac_bits = decimals_to_bits( repeat( 0, -exp-length(s) ) & s, significand ) */
    if ((uintptr_t)_exp_3870 == (uintptr_t)HIGH_BITS){
        _1850 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _1850 = - _exp_3870;
    }
    if (IS_SEQUENCE(_s_3866)){
            _1851 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1851 = 1;
    }
    if (IS_ATOM_INT(_1850)) {
        _1852 = _1850 - _1851;
    }
    else {
        _1852 = NewDouble(DBL_PTR(_1850)->dbl - (eudouble)_1851);
    }
    DeRef(_1850);
    _1850 = NOVALUE;
    _1851 = NOVALUE;
    _1853 = Repeat(0, _1852);
    DeRef(_1852);
    _1852 = NOVALUE;
    Concat((object_ptr)&_1854, _1853, _s_3866);
    DeRefDS(_1853);
    _1853 = NOVALUE;
    DeRef(_1853);
    _1853 = NOVALUE;
    _0 = _frac_bits_3872;
    _frac_bits_3872 = _20decimals_to_bits(_1854, _significand_3876);
    DeRef(_0);
    _1854 = NOVALUE;
    goto L15; // [460] 528
L14: 

    /** scinot.e:398				int_bits = trim_bits( bytes_to_bits( convert_radix( reverse( s[1..$+exp] ), 10, #100 ) ) )*/
    if (IS_SEQUENCE(_s_3866)){
            _1856 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1856 = 1;
    }
    _1857 = _1856 + _exp_3870;
    _1856 = NOVALUE;
    rhs_slice_target = (object_ptr)&_1858;
    RHS_Slice(_s_3866, 1, _1857);
    _1859 = _20reverse(_1858);
    _1858 = NOVALUE;
    _1860 = _20convert_radix(_1859, 10, 256);
    _1859 = NOVALUE;
    _1861 = _20bytes_to_bits(_1860);
    _1860 = NOVALUE;
    _0 = _int_bits_3871;
    _int_bits_3871 = _20trim_bits(_1861);
    DeRef(_0);
    _1861 = NOVALUE;

    /** scinot.e:399				frac_bits =  decimals_to_bits( s[$+exp+1..$], significand )*/
    if (IS_SEQUENCE(_s_3866)){
            _1863 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1863 = 1;
    }
    _1864 = _1863 + _exp_3870;
    if ((object)((uintptr_t)_1864 + (uintptr_t)HIGH_BITS) >= 0){
        _1864 = NewDouble((eudouble)_1864);
    }
    _1863 = NOVALUE;
    if (IS_ATOM_INT(_1864)) {
        _1865 = _1864 + 1;
        if (_1865 > MAXINT){
            _1865 = NewDouble((eudouble)_1865);
        }
    }
    else
    _1865 = binary_op(PLUS, 1, _1864);
    DeRef(_1864);
    _1864 = NOVALUE;
    if (IS_SEQUENCE(_s_3866)){
            _1866 = SEQ_PTR(_s_3866)->length;
    }
    else {
        _1866 = 1;
    }
    rhs_slice_target = (object_ptr)&_1867;
    RHS_Slice(_s_3866, _1865, _1866);
    _0 = _frac_bits_3872;
    _frac_bits_3872 = _20decimals_to_bits(_1867, _significand_3876);
    DeRef(_0);
    _1867 = NOVALUE;
L15: 
L13: 

    /** scinot.e:403		if length(int_bits) > significand then*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1869 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1869 = 1;
    }
    if (_1869 <= _significand_3876)
    goto L16; // [538] 668

    /** scinot.e:406			if fp = DOUBLE then*/
    if (_fp_3867 != 2)
    goto L17; // [544] 572

    /** scinot.e:408				mbits = int_bits[$-significand..$-1]*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1872 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1872 = 1;
    }
    _1873 = _1872 - _significand_3876;
    if ((object)((uintptr_t)_1873 +(uintptr_t) HIGH_BITS) >= 0){
        _1873 = NewDouble((eudouble)_1873);
    }
    _1872 = NOVALUE;
    if (IS_SEQUENCE(_int_bits_3871)){
            _1874 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1874 = 1;
    }
    _1875 = _1874 - 1;
    _1874 = NOVALUE;
    rhs_slice_target = (object_ptr)&_mbits_3873;
    RHS_Slice(_int_bits_3871, _1873, _1875);
    goto L18; // [569] 594
L17: 

    /** scinot.e:411				mbits = int_bits[$-significand+1..$]*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1877 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1877 = 1;
    }
    _1878 = _1877 - _significand_3876;
    if ((object)((uintptr_t)_1878 +(uintptr_t) HIGH_BITS) >= 0){
        _1878 = NewDouble((eudouble)_1878);
    }
    _1877 = NOVALUE;
    if (IS_ATOM_INT(_1878)) {
        _1879 = _1878 + 1;
        if (_1879 > MAXINT){
            _1879 = NewDouble((eudouble)_1879);
        }
    }
    else
    _1879 = binary_op(PLUS, 1, _1878);
    DeRef(_1878);
    _1878 = NOVALUE;
    if (IS_SEQUENCE(_int_bits_3871)){
            _1880 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1880 = 1;
    }
    rhs_slice_target = (object_ptr)&_mbits_3873;
    RHS_Slice(_int_bits_3871, _1879, _1880);
L18: 

    /** scinot.e:414			if length(int_bits) > significand + 1 and int_bits[$-(significand+1)] then*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1882 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1882 = 1;
    }
    _1883 = _significand_3876 + 1;
    if (_1883 > MAXINT){
        _1883 = NewDouble((eudouble)_1883);
    }
    if (IS_ATOM_INT(_1883)) {
        _1884 = (_1882 > _1883);
    }
    else {
        _1884 = ((eudouble)_1882 > DBL_PTR(_1883)->dbl);
    }
    _1882 = NOVALUE;
    DeRef(_1883);
    _1883 = NOVALUE;
    if (_1884 == 0) {
        goto L19; // [607] 656
    }
    if (IS_SEQUENCE(_int_bits_3871)){
            _1886 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1886 = 1;
    }
    _1887 = _significand_3876 + 1;
    if (_1887 > MAXINT){
        _1887 = NewDouble((eudouble)_1887);
    }
    if (IS_ATOM_INT(_1887)) {
        _1888 = _1886 - _1887;
    }
    else {
        _1888 = NewDouble((eudouble)_1886 - DBL_PTR(_1887)->dbl);
    }
    _1886 = NOVALUE;
    DeRef(_1887);
    _1887 = NOVALUE;
    _2 = (object)SEQ_PTR(_int_bits_3871);
    if (!IS_ATOM_INT(_1888)){
        _1889 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_1888)->dbl));
    }
    else{
        _1889 = (object)*(((s1_ptr)_2)->base + _1888);
    }
    if (_1889 == 0) {
        _1889 = NOVALUE;
        goto L19; // [627] 656
    }
    else {
        if (!IS_ATOM_INT(_1889) && DBL_PTR(_1889)->dbl == 0.0){
            _1889 = NOVALUE;
            goto L19; // [627] 656
        }
        _1889 = NOVALUE;
    }
    _1889 = NOVALUE;

    /** scinot.e:416				mbits[1] += 1*/
    _2 = (object)SEQ_PTR(_mbits_3873);
    _1890 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_1890)) {
        _1891 = _1890 + 1;
        if (_1891 > MAXINT){
            _1891 = NewDouble((eudouble)_1891);
        }
    }
    else
    _1891 = binary_op(PLUS, 1, _1890);
    _1890 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_3873 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1891;
    if( _1 != _1891 ){
        DeRef(_1);
    }
    _1891 = NOVALUE;

    /** scinot.e:417				mbits = carry( mbits, 2 )*/
    RefDS(_mbits_3873);
    _0 = _mbits_3873;
    _mbits_3873 = _20carry(_mbits_3873, 2);
    DeRefDS(_0);
L19: 

    /** scinot.e:419			exp = length(int_bits)-1*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1893 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1893 = 1;
    }
    _exp_3870 = _1893 - 1;
    _1893 = NOVALUE;
    goto L1A; // [665] 940
L16: 

    /** scinot.e:422			if length(int_bits) then*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1895 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1895 = 1;
    }
    if (_1895 == 0)
    {
        _1895 = NOVALUE;
        goto L1B; // [673] 688
    }
    else{
        _1895 = NOVALUE;
    }

    /** scinot.e:424				exp = length(int_bits)-1*/
    if (IS_SEQUENCE(_int_bits_3871)){
            _1896 = SEQ_PTR(_int_bits_3871)->length;
    }
    else {
        _1896 = 1;
    }
    _exp_3870 = _1896 - 1;
    _1896 = NOVALUE;
    goto L1C; // [685] 748
L1B: 

    /** scinot.e:428				exp = - find( 1, reverse( frac_bits ) )*/
    RefDS(_frac_bits_3872);
    _1898 = _20reverse(_frac_bits_3872);
    _1899 = find_from(1, _1898, 1);
    DeRef(_1898);
    _1898 = NOVALUE;
    _exp_3870 = - _1899;

    /** scinot.e:429				if exp < min_exp then*/
    if (_exp_3870 >= _min_exp_3878)
    goto L1D; // [710] 720

    /** scinot.e:432					exp = min_exp*/
    _exp_3870 = _min_exp_3878;
L1D: 

    /** scinot.e:435				if exp then*/
    if (_exp_3870 == 0)
    {
        goto L1E; // [722] 747
    }
    else{
    }

    /** scinot.e:437					frac_bits = remove( frac_bits, length(frac_bits) + exp + 2, length( frac_bits ) )*/
    if (IS_SEQUENCE(_frac_bits_3872)){
            _1902 = SEQ_PTR(_frac_bits_3872)->length;
    }
    else {
        _1902 = 1;
    }
    _1903 = _1902 + _exp_3870;
    if ((object)((uintptr_t)_1903 + (uintptr_t)HIGH_BITS) >= 0){
        _1903 = NewDouble((eudouble)_1903);
    }
    _1902 = NOVALUE;
    if (IS_ATOM_INT(_1903)) {
        _1904 = _1903 + 2;
        if ((object)((uintptr_t)_1904 + (uintptr_t)HIGH_BITS) >= 0){
            _1904 = NewDouble((eudouble)_1904);
        }
    }
    else {
        _1904 = NewDouble(DBL_PTR(_1903)->dbl + (eudouble)2);
    }
    DeRef(_1903);
    _1903 = NOVALUE;
    if (IS_SEQUENCE(_frac_bits_3872)){
            _1905 = SEQ_PTR(_frac_bits_3872)->length;
    }
    else {
        _1905 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_frac_bits_3872);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_1904)) ? _1904 : (object)(DBL_PTR(_1904)->dbl);
        int stop = (IS_ATOM_INT(_1905)) ? _1905 : (object)(DBL_PTR(_1905)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_frac_bits_3872), start, &_frac_bits_3872 );
            }
            else Tail(SEQ_PTR(_frac_bits_3872), stop+1, &_frac_bits_3872);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_frac_bits_3872), start, &_frac_bits_3872);
        }
        else {
            assign_slice_seq = &assign_space;
            _frac_bits_3872 = Remove_elements(start, stop, (SEQ_PTR(_frac_bits_3872)->ref == 1));
        }
    }
    DeRef(_1904);
    _1904 = NOVALUE;
    _1905 = NOVALUE;
L1E: 
L1C: 

    /** scinot.e:444			mbits = frac_bits & int_bits*/
    Concat((object_ptr)&_mbits_3873, _frac_bits_3872, _int_bits_3871);

    /** scinot.e:445			mbits = repeat( 0, significand + 1 ) & mbits*/
    _1908 = _significand_3876 + 1;
    _1909 = Repeat(0, _1908);
    _1908 = NOVALUE;
    Concat((object_ptr)&_mbits_3873, _1909, _mbits_3873);
    DeRefDS(_1909);
    _1909 = NOVALUE;
    DeRef(_1909);
    _1909 = NOVALUE;

    /** scinot.e:447			if exp > min_exp then*/
    if (_exp_3870 <= _min_exp_3878)
    goto L1F; // [774] 877

    /** scinot.e:449				if mbits[$-(significand+1)] then*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1912 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1912 = 1;
    }
    _1913 = _significand_3876 + 1;
    if (_1913 > MAXINT){
        _1913 = NewDouble((eudouble)_1913);
    }
    if (IS_ATOM_INT(_1913)) {
        _1914 = _1912 - _1913;
    }
    else {
        _1914 = NewDouble((eudouble)_1912 - DBL_PTR(_1913)->dbl);
    }
    _1912 = NOVALUE;
    DeRef(_1913);
    _1913 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    if (!IS_ATOM_INT(_1914)){
        _1915 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_1914)->dbl));
    }
    else{
        _1915 = (object)*(((s1_ptr)_2)->base + _1914);
    }
    if (_1915 == 0) {
        _1915 = NOVALUE;
        goto L20; // [795] 829
    }
    else {
        if (!IS_ATOM_INT(_1915) && DBL_PTR(_1915)->dbl == 0.0){
            _1915 = NOVALUE;
            goto L20; // [795] 829
        }
        _1915 = NOVALUE;
    }
    _1915 = NOVALUE;

    /** scinot.e:451					mbits[$-significand] += 1*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1916 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1916 = 1;
    }
    _1917 = _1916 - _significand_3876;
    _1916 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    _1918 = (object)*(((s1_ptr)_2)->base + _1917);
    if (IS_ATOM_INT(_1918)) {
        _1919 = _1918 + 1;
        if (_1919 > MAXINT){
            _1919 = NewDouble((eudouble)_1919);
        }
    }
    else
    _1919 = binary_op(PLUS, 1, _1918);
    _1918 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_3873 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _1917);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1919;
    if( _1 != _1919 ){
        DeRef(_1);
    }
    _1919 = NOVALUE;

    /** scinot.e:452					mbits = carry( mbits, 2 )*/
    RefDS(_mbits_3873);
    _0 = _mbits_3873;
    _mbits_3873 = _20carry(_mbits_3873, 2);
    DeRefDS(_0);
L20: 

    /** scinot.e:454				if fp = DOUBLE then*/
    if (_fp_3867 != 2)
    goto L21; // [831] 859

    /** scinot.e:456					mbits = mbits[$-significand..$-1]*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1922 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1922 = 1;
    }
    _1923 = _1922 - _significand_3876;
    if ((object)((uintptr_t)_1923 +(uintptr_t) HIGH_BITS) >= 0){
        _1923 = NewDouble((eudouble)_1923);
    }
    _1922 = NOVALUE;
    if (IS_SEQUENCE(_mbits_3873)){
            _1924 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1924 = 1;
    }
    _1925 = _1924 - 1;
    _1924 = NOVALUE;
    rhs_slice_target = (object_ptr)&_mbits_3873;
    RHS_Slice(_mbits_3873, _1923, _1925);
    goto L22; // [856] 939
L21: 

    /** scinot.e:459					mbits = remove( mbits, 1, length(mbits) - significand )*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1927 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1927 = 1;
    }
    _1928 = _1927 - _significand_3876;
    if ((object)((uintptr_t)_1928 +(uintptr_t) HIGH_BITS) >= 0){
        _1928 = NewDouble((eudouble)_1928);
    }
    _1927 = NOVALUE;
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_3873);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_1928)) ? _1928 : (object)(DBL_PTR(_1928)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_3873), start, &_mbits_3873 );
            }
            else Tail(SEQ_PTR(_mbits_3873), stop+1, &_mbits_3873);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_3873), start, &_mbits_3873);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_3873 = Remove_elements(start, stop, (SEQ_PTR(_mbits_3873)->ref == 1));
        }
    }
    DeRef(_1928);
    _1928 = NOVALUE;
    goto L22; // [874] 939
L1F: 

    /** scinot.e:463				if mbits[$-significand] then*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1930 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1930 = 1;
    }
    _1931 = _1930 - _significand_3876;
    _1930 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    _1932 = (object)*(((s1_ptr)_2)->base + _1931);
    if (_1932 == 0) {
        _1932 = NOVALUE;
        goto L23; // [890] 924
    }
    else {
        if (!IS_ATOM_INT(_1932) && DBL_PTR(_1932)->dbl == 0.0){
            _1932 = NOVALUE;
            goto L23; // [890] 924
        }
        _1932 = NOVALUE;
    }
    _1932 = NOVALUE;

    /** scinot.e:465					mbits[$-significand] += 1*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1933 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1933 = 1;
    }
    _1934 = _1933 - _significand_3876;
    _1933 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    _1935 = (object)*(((s1_ptr)_2)->base + _1934);
    if (IS_ATOM_INT(_1935)) {
        _1936 = _1935 + 1;
        if (_1936 > MAXINT){
            _1936 = NewDouble((eudouble)_1936);
        }
    }
    else
    _1936 = binary_op(PLUS, 1, _1935);
    _1935 = NOVALUE;
    _2 = (object)SEQ_PTR(_mbits_3873);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_3873 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _1934);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _1936;
    if( _1 != _1936 ){
        DeRef(_1);
    }
    _1936 = NOVALUE;

    /** scinot.e:466					mbits = carry( mbits, 2 )*/
    RefDS(_mbits_3873);
    _0 = _mbits_3873;
    _mbits_3873 = _20carry(_mbits_3873, 2);
    DeRefDS(_0);
L23: 

    /** scinot.e:468				mbits = remove( mbits, 1, length(mbits) - significand )*/
    if (IS_SEQUENCE(_mbits_3873)){
            _1938 = SEQ_PTR(_mbits_3873)->length;
    }
    else {
        _1938 = 1;
    }
    _1939 = _1938 - _significand_3876;
    if ((object)((uintptr_t)_1939 +(uintptr_t) HIGH_BITS) >= 0){
        _1939 = NewDouble((eudouble)_1939);
    }
    _1938 = NOVALUE;
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_3873);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_1939)) ? _1939 : (object)(DBL_PTR(_1939)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_3873), start, &_mbits_3873 );
            }
            else Tail(SEQ_PTR(_mbits_3873), stop+1, &_mbits_3873);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_3873), start, &_mbits_3873);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_3873 = Remove_elements(start, stop, (SEQ_PTR(_mbits_3873)->ref == 1));
        }
    }
    DeRef(_1939);
    _1939 = NOVALUE;
L22: 
L1A: 

    /** scinot.e:474		ebits = int_to_bits( exp + exp_bias, exponent )*/
    _1941 = _exp_3870 + _exp_bias_3879;
    if ((object)((uintptr_t)_1941 + (uintptr_t)HIGH_BITS) >= 0){
        _1941 = NewDouble((eudouble)_1941);
    }
    _0 = _ebits_3874;
    _ebits_3874 = _14int_to_bits(_1941, _exponent_3877);
    DeRef(_0);
    _1941 = NOVALUE;

    /** scinot.e:477		return bits_to_bytes( mbits & ebits & sbits )*/
    {
        object concat_list[3];

        concat_list[0] = _sbits_3875;
        concat_list[1] = _ebits_3874;
        concat_list[2] = _mbits_3873;
        Concat_N((object_ptr)&_1943, concat_list, 3);
    }
    _1944 = _20bits_to_bytes(_1943);
    _1943 = NOVALUE;
    DeRefDS(_s_3866);
    DeRef(_int_bits_3871);
    DeRef(_frac_bits_3872);
    DeRefDS(_mbits_3873);
    DeRefDS(_ebits_3874);
    DeRefDSi(_sbits_3875);
    DeRef(_1917);
    _1917 = NOVALUE;
    DeRef(_1914);
    _1914 = NOVALUE;
    DeRef(_1805);
    _1805 = NOVALUE;
    DeRef(_1923);
    _1923 = NOVALUE;
    DeRef(_1837);
    _1837 = NOVALUE;
    DeRef(_1873);
    _1873 = NOVALUE;
    DeRef(_1875);
    _1875 = NOVALUE;
    DeRef(_1808);
    _1808 = NOVALUE;
    DeRef(_1839);
    _1839 = NOVALUE;
    DeRef(_1934);
    _1934 = NOVALUE;
    DeRef(_1888);
    _1888 = NOVALUE;
    DeRef(_1884);
    _1884 = NOVALUE;
    DeRef(_1931);
    _1931 = NOVALUE;
    DeRef(_1821);
    _1821 = NOVALUE;
    DeRef(_1925);
    _1925 = NOVALUE;
    DeRef(_1816);
    _1816 = NOVALUE;
    DeRef(_1830);
    _1830 = NOVALUE;
    DeRef(_1857);
    _1857 = NOVALUE;
    DeRef(_1865);
    _1865 = NOVALUE;
    DeRef(_1813);
    _1813 = NOVALUE;
    DeRef(_1879);
    _1879 = NOVALUE;
    return _1944;
    ;
}


object _20scientific_to_atom(object _s_4073, object _fp_4074)
{
    object _float_4077 = NOVALUE;
    object _1950 = NOVALUE;
    object _1948 = NOVALUE;
    object _0, _1, _2;
    

    /** scinot.e:495		if fp = NATIVE then*/
    if (_fp_4074 != 1)
    goto L1; // [5] 17

    /** scinot.e:496			fp = NATIVE_FORMAT*/
    _fp_4074 = 2;
L1: 

    /** scinot.e:498		sequence float = scientific_to_float( s, fp )*/
    RefDS(_s_4073);
    _0 = _float_4077;
    _float_4077 = _20scientific_to_float(_s_4073, _fp_4074);
    DeRef(_0);

    /** scinot.e:499		if fp = DOUBLE then*/
    if (_fp_4074 != 2)
    goto L2; // [28] 45

    /** scinot.e:500			return float64_to_atom( float )*/
    RefDS(_float_4077);
    _1948 = _14float64_to_atom(_float_4077);
    DeRefDS(_s_4073);
    DeRefDS(_float_4077);
    return _1948;
    goto L3; // [42] 63
L2: 

    /** scinot.e:501		elsif fp = EXTENDED then*/
    if (_fp_4074 != 3)
    goto L4; // [47] 62

    /** scinot.e:502			return float80_to_atom( float )*/
    RefDS(_float_4077);
    _1950 = _14float80_to_atom(_float_4077);
    DeRefDS(_s_4073);
    DeRefDS(_float_4077);
    DeRef(_1948);
    _1948 = NOVALUE;
    return _1950;
L4: 
L3: 
    ;
}



// 0x2D355D58
