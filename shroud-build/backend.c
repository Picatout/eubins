// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _38InitBackEnd(object _x_65732)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_65732)) {
        _1 = (object)(DBL_PTR(_x_65732)->dbl);
        DeRefDS(_x_65732);
        _x_65732 = _1;
    }

    /** backend.e:31		if not BIND then*/
    if (_39BIND_16443 != 0)
    goto L1; // [7] 15

    /** backend.e:32			intoptions()	*/
    _69intoptions();
L1: 

    /** backend.e:35	end procedure*/
    return;
    ;
}


object _38get_next(object _sym_65745)
{
    object _32747 = NOVALUE;
    object _32746 = NOVALUE;
    object _32745 = NOVALUE;
    object _32744 = NOVALUE;
    object _32741 = NOVALUE;
    object _32740 = NOVALUE;
    object _32739 = NOVALUE;
    object _32738 = NOVALUE;
    object _32737 = NOVALUE;
    object _32736 = NOVALUE;
    object _32735 = NOVALUE;
    object _32734 = NOVALUE;
    object _32733 = NOVALUE;
    object _32732 = NOVALUE;
    object _32731 = NOVALUE;
    object _32730 = NOVALUE;
    object _32729 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_65745)) {
        _1 = (object)(DBL_PTR(_sym_65745)->dbl);
        DeRefDS(_sym_65745);
        _sym_65745 = _1;
    }

    /** backend.e:42		if get_backend() then*/
    _32729 = _2get_backend();
    if (_32729 == 0) {
        DeRef(_32729);
        _32729 = NOVALUE;
        goto L1; // [8] 120
    }
    else {
        if (!IS_ATOM_INT(_32729) && DBL_PTR(_32729)->dbl == 0.0){
            DeRef(_32729);
            _32729 = NOVALUE;
            goto L1; // [8] 120
        }
        DeRef(_32729);
        _32729 = NOVALUE;
    }
    DeRef(_32729);
    _32729 = NOVALUE;

    /** backend.e:43			while sym and */
L2: 
    if (_sym_65745 == 0) {
        goto L3; // [16] 165
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _32731 = (object)*(((s1_ptr)_2)->base + _sym_65745);
    _32732 = IS_SEQUENCE(_32731);
    _32731 = NOVALUE;
    if (_32732 == 0) {
        _32733 = 0;
        goto L4; // [29] 47
    }
    _32734 = _56sym_scope(_sym_65745);
    if (IS_ATOM_INT(_32734)) {
        _32735 = (_32734 == 9);
    }
    else {
        _32735 = binary_op(EQUALS, _32734, 9);
    }
    DeRef(_32734);
    _32734 = NOVALUE;
    if (IS_ATOM_INT(_32735))
    _32733 = (_32735 != 0);
    else
    _32733 = DBL_PTR(_32735)->dbl != 0.0;
L4: 
    if (_32733 != 0) {
        DeRef(_32736);
        _32736 = 1;
        goto L5; // [47] 64
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _32737 = (object)*(((s1_ptr)_2)->base + _sym_65745);
    _32738 = IS_ATOM(_32737);
    _32737 = NOVALUE;
    _32736 = (_32738 != 0);
L5: 
    if (_32736 == 0)
    {
        _32736 = NOVALUE;
        goto L3; // [65] 165
    }
    else{
        _32736 = NOVALUE;
    }

    /** backend.e:45				if sequence(SymTab[sym]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _32739 = (object)*(((s1_ptr)_2)->base + _sym_65745);
    _32740 = IS_SEQUENCE(_32739);
    _32739 = NOVALUE;
    if (_32740 == 0)
    {
        _32740 = NOVALUE;
        goto L6; // [79] 101
    }
    else{
        _32740 = NOVALUE;
    }

    /** backend.e:46					sym = SymTab[sym][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _32741 = (object)*(((s1_ptr)_2)->base + _sym_65745);
    _2 = (object)SEQ_PTR(_32741);
    _sym_65745 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_65745)){
        _sym_65745 = (object)DBL_PTR(_sym_65745)->dbl;
    }
    _32741 = NOVALUE;
    goto L2; // [98] 16
L6: 

    /** backend.e:48					sym = SymTab[sym]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _sym_65745 = (object)*(((s1_ptr)_2)->base + _sym_65745);
    if (!IS_ATOM_INT(_sym_65745)){
        _sym_65745 = (object)DBL_PTR(_sym_65745)->dbl;
    }

    /** backend.e:50			end while*/
    goto L2; // [114] 16
    goto L3; // [117] 165
L1: 

    /** backend.e:52			while sym and sym_scope( sym ) = SC_UNDEFINED do*/
L7: 
    if (_sym_65745 == 0) {
        goto L8; // [125] 164
    }
    _32745 = _56sym_scope(_sym_65745);
    if (IS_ATOM_INT(_32745)) {
        _32746 = (_32745 == 9);
    }
    else {
        _32746 = binary_op(EQUALS, _32745, 9);
    }
    DeRef(_32745);
    _32745 = NOVALUE;
    if (_32746 <= 0) {
        if (_32746 == 0) {
            DeRef(_32746);
            _32746 = NOVALUE;
            goto L8; // [140] 164
        }
        else {
            if (!IS_ATOM_INT(_32746) && DBL_PTR(_32746)->dbl == 0.0){
                DeRef(_32746);
                _32746 = NOVALUE;
                goto L8; // [140] 164
            }
            DeRef(_32746);
            _32746 = NOVALUE;
        }
    }
    DeRef(_32746);
    _32746 = NOVALUE;

    /** backend.e:53				sym = SymTab[sym][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _32747 = (object)*(((s1_ptr)_2)->base + _sym_65745);
    _2 = (object)SEQ_PTR(_32747);
    _sym_65745 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_65745)){
        _sym_65745 = (object)DBL_PTR(_sym_65745)->dbl;
    }
    _32747 = NOVALUE;

    /** backend.e:55			end while*/
    goto L7; // [161] 125
L8: 
L3: 

    /** backend.e:57		return sym*/
    DeRef(_32735);
    _32735 = NOVALUE;
    return _sym_65745;
    ;
}


void _38BackEnd(object _il_file_65787)
{
    object _addr_65788 = NOVALUE;
    object _st_65789 = NOVALUE;
    object _nm_65790 = NOVALUE;
    object _ms_65791 = NOVALUE;
    object _sl_65792 = NOVALUE;
    object _lit_65793 = NOVALUE;
    object _fn_65794 = NOVALUE;
    object _entry_addr_65795 = NOVALUE;
    object _e_addr_65796 = NOVALUE;
    object _l_addr_65797 = NOVALUE;
    object _no_name_65798 = NOVALUE;
    object _include_info_65799 = NOVALUE;
    object _include_node_65800 = NOVALUE;
    object _include_array_65801 = NOVALUE;
    object _string_size_65802 = NOVALUE;
    object _short_65803 = NOVALUE;
    object _size_65804 = NOVALUE;
    object _repcount_65805 = NOVALUE;
    object _lit_string_65806 = NOVALUE;
    object _other_strings_65807 = NOVALUE;
    object _eentry_65808 = NOVALUE;
    object _started_file_66069 = NOVALUE;
    object _external_debugger_ptr_66190 = NOVALUE;
    object _32973 = NOVALUE;
    object _32972 = NOVALUE;
    object _32970 = NOVALUE;
    object _32968 = NOVALUE;
    object _32966 = NOVALUE;
    object _32964 = NOVALUE;
    object _32962 = NOVALUE;
    object _32960 = NOVALUE;
    object _32958 = NOVALUE;
    object _32956 = NOVALUE;
    object _32954 = NOVALUE;
    object _32953 = NOVALUE;
    object _32952 = NOVALUE;
    object _32947 = NOVALUE;
    object _32946 = NOVALUE;
    object _32945 = NOVALUE;
    object _32944 = NOVALUE;
    object _32943 = NOVALUE;
    object _32942 = NOVALUE;
    object _32941 = NOVALUE;
    object _32940 = NOVALUE;
    object _32939 = NOVALUE;
    object _32938 = NOVALUE;
    object _32937 = NOVALUE;
    object _32935 = NOVALUE;
    object _32934 = NOVALUE;
    object _32933 = NOVALUE;
    object _32931 = NOVALUE;
    object _32930 = NOVALUE;
    object _32929 = NOVALUE;
    object _32928 = NOVALUE;
    object _32926 = NOVALUE;
    object _32925 = NOVALUE;
    object _32924 = NOVALUE;
    object _32923 = NOVALUE;
    object _32921 = NOVALUE;
    object _32919 = NOVALUE;
    object _32918 = NOVALUE;
    object _32917 = NOVALUE;
    object _32916 = NOVALUE;
    object _32914 = NOVALUE;
    object _32913 = NOVALUE;
    object _32912 = NOVALUE;
    object _32911 = NOVALUE;
    object _32910 = NOVALUE;
    object _32909 = NOVALUE;
    object _32908 = NOVALUE;
    object _32907 = NOVALUE;
    object _32906 = NOVALUE;
    object _32905 = NOVALUE;
    object _32904 = NOVALUE;
    object _32903 = NOVALUE;
    object _32902 = NOVALUE;
    object _32901 = NOVALUE;
    object _32900 = NOVALUE;
    object _32899 = NOVALUE;
    object _32898 = NOVALUE;
    object _32896 = NOVALUE;
    object _32895 = NOVALUE;
    object _32894 = NOVALUE;
    object _32893 = NOVALUE;
    object _32892 = NOVALUE;
    object _32891 = NOVALUE;
    object _32890 = NOVALUE;
    object _32888 = NOVALUE;
    object _32886 = NOVALUE;
    object _32884 = NOVALUE;
    object _32883 = NOVALUE;
    object _32882 = NOVALUE;
    object _32881 = NOVALUE;
    object _32879 = NOVALUE;
    object _32877 = NOVALUE;
    object _32875 = NOVALUE;
    object _32874 = NOVALUE;
    object _32873 = NOVALUE;
    object _32871 = NOVALUE;
    object _32870 = NOVALUE;
    object _32868 = NOVALUE;
    object _32867 = NOVALUE;
    object _32865 = NOVALUE;
    object _32863 = NOVALUE;
    object _32862 = NOVALUE;
    object _32861 = NOVALUE;
    object _32859 = NOVALUE;
    object _32858 = NOVALUE;
    object _32855 = NOVALUE;
    object _32852 = NOVALUE;
    object _32851 = NOVALUE;
    object _32850 = NOVALUE;
    object _32849 = NOVALUE;
    object _32848 = NOVALUE;
    object _32847 = NOVALUE;
    object _32846 = NOVALUE;
    object _32845 = NOVALUE;
    object _32843 = NOVALUE;
    object _32842 = NOVALUE;
    object _32841 = NOVALUE;
    object _32840 = NOVALUE;
    object _32839 = NOVALUE;
    object _32838 = NOVALUE;
    object _32837 = NOVALUE;
    object _32836 = NOVALUE;
    object _32835 = NOVALUE;
    object _32833 = NOVALUE;
    object _32832 = NOVALUE;
    object _32831 = NOVALUE;
    object _32830 = NOVALUE;
    object _32829 = NOVALUE;
    object _32827 = NOVALUE;
    object _32826 = NOVALUE;
    object _32825 = NOVALUE;
    object _32824 = NOVALUE;
    object _32823 = NOVALUE;
    object _32822 = NOVALUE;
    object _32821 = NOVALUE;
    object _32820 = NOVALUE;
    object _32819 = NOVALUE;
    object _32818 = NOVALUE;
    object _32817 = NOVALUE;
    object _32816 = NOVALUE;
    object _32815 = NOVALUE;
    object _32814 = NOVALUE;
    object _32813 = NOVALUE;
    object _32811 = NOVALUE;
    object _32810 = NOVALUE;
    object _32809 = NOVALUE;
    object _32808 = NOVALUE;
    object _32807 = NOVALUE;
    object _32806 = NOVALUE;
    object _32805 = NOVALUE;
    object _32804 = NOVALUE;
    object _32803 = NOVALUE;
    object _32802 = NOVALUE;
    object _32801 = NOVALUE;
    object _32799 = NOVALUE;
    object _32798 = NOVALUE;
    object _32797 = NOVALUE;
    object _32796 = NOVALUE;
    object _32795 = NOVALUE;
    object _32794 = NOVALUE;
    object _32793 = NOVALUE;
    object _32792 = NOVALUE;
    object _32791 = NOVALUE;
    object _32790 = NOVALUE;
    object _32789 = NOVALUE;
    object _32788 = NOVALUE;
    object _32787 = NOVALUE;
    object _32786 = NOVALUE;
    object _32784 = NOVALUE;
    object _32782 = NOVALUE;
    object _32781 = NOVALUE;
    object _32780 = NOVALUE;
    object _32779 = NOVALUE;
    object _32778 = NOVALUE;
    object _32777 = NOVALUE;
    object _32776 = NOVALUE;
    object _32775 = NOVALUE;
    object _32774 = NOVALUE;
    object _32773 = NOVALUE;
    object _32772 = NOVALUE;
    object _32771 = NOVALUE;
    object _32770 = NOVALUE;
    object _32769 = NOVALUE;
    object _32768 = NOVALUE;
    object _32767 = NOVALUE;
    object _32766 = NOVALUE;
    object _32765 = NOVALUE;
    object _32764 = NOVALUE;
    object _32763 = NOVALUE;
    object _32762 = NOVALUE;
    object _32761 = NOVALUE;
    object _32760 = NOVALUE;
    object _32759 = NOVALUE;
    object _32758 = NOVALUE;
    object _32757 = NOVALUE;
    object _32755 = NOVALUE;
    object _32753 = NOVALUE;
    object _32750 = NOVALUE;
    object _32749 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_il_file_65787)) {
        _1 = (object)(DBL_PTR(_il_file_65787)->dbl);
        DeRefDS(_il_file_65787);
        _il_file_65787 = _1;
    }

    /** backend.e:74		size = (1+length(SymTab)) * ST_ENTRY_SIZE */
    if (IS_SEQUENCE(_36SymTab_15404)){
            _32749 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _32749 = 1;
    }
    _32750 = _32749 + 1;
    _32749 = NOVALUE;
    _size_65804 = _32750 * _74ST_ENTRY_SIZE_65709;
    _32750 = NOVALUE;

    /** backend.e:75		st = allocate(size)  -- symbol table*/
    _0 = _st_65789;
    _st_65789 = _4allocate(_size_65804, 0);
    DeRef(_0);

    /** backend.e:76		mem_set(st, 0, size) -- all fields are 0 (NULL) by default*/
    memory_set(_st_65789, 0, _size_65804);

    /** backend.e:79		poke_pointer(st, length(SymTab))*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _32753 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _32753 = 1;
    }
    if (IS_ATOM_INT(_st_65789)){
        pokeptr_addr = (uintptr_t *)_st_65789;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_st_65789)->dbl);
    }
    *pokeptr_addr = (uintptr_t)_32753;
    _32753 = NOVALUE;

    /** backend.e:81		lit_string = "" -- literal values are stored in a string like EDS*/
    RefDS(_21928);
    DeRef(_lit_string_65806);
    _lit_string_65806 = _21928;

    /** backend.e:82		string_size = 0 -- precompute total space needed for symbol names*/
    _string_size_65802 = 0;

    /** backend.e:84		addr = st + ST_ENTRY_SIZE*/
    DeRef(_addr_65788);
    if (IS_ATOM_INT(_st_65789)) {
        _addr_65788 = _st_65789 + _74ST_ENTRY_SIZE_65709;
        if ((object)((uintptr_t)_addr_65788 + (uintptr_t)HIGH_BITS) >= 0){
            _addr_65788 = NewDouble((eudouble)_addr_65788);
        }
    }
    else {
        _addr_65788 = NewDouble(DBL_PTR(_st_65789)->dbl + (eudouble)_74ST_ENTRY_SIZE_65709);
    }

    /** backend.e:85		for i = 1 to length(SymTab) do*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _32755 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _32755 = 1;
    }
    {
        object _i_65821;
        _i_65821 = 1;
L1: 
        if (_i_65821 > _32755){
            goto L2; // [72] 819
        }

        /** backend.e:86			eentry = SymTab[i]*/
        DeRef(_eentry_65808);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _eentry_65808 = (object)*(((s1_ptr)_2)->base + _i_65821);
        Ref(_eentry_65808);

        /** backend.e:90			if atom(eentry) then*/
        _32757 = IS_ATOM(_eentry_65808);
        if (_32757 == 0)
        {
            _32757 = NOVALUE;
            goto L3; // [92] 139
        }
        else{
            _32757 = NOVALUE;
        }

        /** backend.e:92				poke_pointer(addr + ST_NEXT, get_next( eentry) ) -- NEXT*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_NEXT_65649)) {
            _32758 = _addr_65788 + _74ST_NEXT_65649;
            if ((object)((uintptr_t)_32758 + (uintptr_t)HIGH_BITS) >= 0){
                _32758 = NewDouble((eudouble)_32758);
            }
        }
        else {
            _32758 = binary_op(PLUS, _addr_65788, _74ST_NEXT_65649);
        }
        Ref(_eentry_65808);
        _32759 = _38get_next(_eentry_65808);
        if (IS_ATOM_INT(_32758)){
            pokeptr_addr = (uintptr_t *)_32758;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32758)->dbl);
        }
        if (IS_ATOM_INT(_32759)) {
            *pokeptr_addr = (uintptr_t)_32759;
        }
        else if (IS_ATOM(_32759)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32759)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32759);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32758);
        _32758 = NOVALUE;
        DeRef(_32759);
        _32759 = NOVALUE;

        /** backend.e:93				poke(addr + ST_MODE, M_TEMP) -- MODE*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_MODE_65655)) {
            _32760 = _addr_65788 + _74ST_MODE_65655;
            if ((object)((uintptr_t)_32760 + (uintptr_t)HIGH_BITS) >= 0){
                _32760 = NewDouble((eudouble)_32760);
            }
        }
        else {
            _32760 = binary_op(PLUS, _addr_65788, _74ST_MODE_65655);
        }
        if (IS_ATOM_INT(_32760)){
            poke_addr = (uint8_t *)_32760;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32760)->dbl);
        }
        *poke_addr = (uint8_t)3;
        DeRef(_32760);
        _32760 = NOVALUE;

        /** backend.e:94				poke(addr + ST_SCOPE, SC_UNDEFINED)  -- SCOPE, must be > S_PRIVATE */
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_SCOPE_65658)) {
            _32761 = _addr_65788 + _74ST_SCOPE_65658;
            if ((object)((uintptr_t)_32761 + (uintptr_t)HIGH_BITS) >= 0){
                _32761 = NewDouble((eudouble)_32761);
            }
        }
        else {
            _32761 = binary_op(PLUS, _addr_65788, _74ST_SCOPE_65658);
        }
        if (IS_ATOM_INT(_32761)){
            poke_addr = (uint8_t *)_32761;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32761)->dbl);
        }
        *poke_addr = (uint8_t)9;
        DeRef(_32761);
        _32761 = NOVALUE;
        goto L4; // [136] 804
L3: 

        /** backend.e:98				poke_pointer(addr + ST_NEXT, get_next( eentry[S_NEXT]) )*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_NEXT_65649)) {
            _32762 = _addr_65788 + _74ST_NEXT_65649;
            if ((object)((uintptr_t)_32762 + (uintptr_t)HIGH_BITS) >= 0){
                _32762 = NewDouble((eudouble)_32762);
            }
        }
        else {
            _32762 = binary_op(PLUS, _addr_65788, _74ST_NEXT_65649);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32763 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_32763);
        _32764 = _38get_next(_32763);
        _32763 = NOVALUE;
        if (IS_ATOM_INT(_32762)){
            pokeptr_addr = (uintptr_t *)_32762;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32762)->dbl);
        }
        if (IS_ATOM_INT(_32764)) {
            *pokeptr_addr = (uintptr_t)_32764;
        }
        else if (IS_ATOM(_32764)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32764)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32764);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32762);
        _32762 = NOVALUE;
        DeRef(_32764);
        _32764 = NOVALUE;

        /** backend.e:99				poke_pointer(addr + ST_NEXT_IN_BLOCK, eentry[S_NEXT_IN_BLOCK])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_NEXT_IN_BLOCK_65652)) {
            _32765 = _addr_65788 + _74ST_NEXT_IN_BLOCK_65652;
            if ((object)((uintptr_t)_32765 + (uintptr_t)HIGH_BITS) >= 0){
                _32765 = NewDouble((eudouble)_32765);
            }
        }
        else {
            _32765 = binary_op(PLUS, _addr_65788, _74ST_NEXT_IN_BLOCK_65652);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462)){
            _32766 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
        }
        else{
            _32766 = (object)*(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
        }
        if (IS_ATOM_INT(_32765)){
            pokeptr_addr = (uintptr_t *)_32765;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32765)->dbl);
        }
        if (IS_ATOM_INT(_32766)) {
            *pokeptr_addr = (uintptr_t)_32766;
        }
        else if (IS_ATOM(_32766)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32766)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32766);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32765);
        _32765 = NOVALUE;
        _32766 = NOVALUE;

        /** backend.e:100				poke(addr + ST_MODE, eentry[S_MODE])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_MODE_65655)) {
            _32767 = _addr_65788 + _74ST_MODE_65655;
            if ((object)((uintptr_t)_32767 + (uintptr_t)HIGH_BITS) >= 0){
                _32767 = NewDouble((eudouble)_32767);
            }
        }
        else {
            _32767 = binary_op(PLUS, _addr_65788, _74ST_MODE_65655);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32768 = (object)*(((s1_ptr)_2)->base + 3);
        if (IS_ATOM_INT(_32767)){
            poke_addr = (uint8_t *)_32767;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32767)->dbl);
        }
        if (IS_ATOM_INT(_32768)) {
            *poke_addr = (uint8_t)_32768;
        }
        else if (IS_ATOM(_32768)) {
            *poke_addr = (uint8_t)DBL_PTR(_32768)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32768);
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
        }
        DeRef(_32767);
        _32767 = NOVALUE;
        _32768 = NOVALUE;

        /** backend.e:101				poke(addr + ST_SCOPE, eentry[S_SCOPE])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_SCOPE_65658)) {
            _32769 = _addr_65788 + _74ST_SCOPE_65658;
            if ((object)((uintptr_t)_32769 + (uintptr_t)HIGH_BITS) >= 0){
                _32769 = NewDouble((eudouble)_32769);
            }
        }
        else {
            _32769 = binary_op(PLUS, _addr_65788, _74ST_SCOPE_65658);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32770 = (object)*(((s1_ptr)_2)->base + 4);
        if (IS_ATOM_INT(_32769)){
            poke_addr = (uint8_t *)_32769;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32769)->dbl);
        }
        if (IS_ATOM_INT(_32770)) {
            *poke_addr = (uint8_t)_32770;
        }
        else if (IS_ATOM(_32770)) {
            *poke_addr = (uint8_t)DBL_PTR(_32770)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32770);
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
        }
        DeRef(_32769);
        _32769 = NOVALUE;
        _32770 = NOVALUE;

        /** backend.e:103				if length(eentry) >= S_NAME and sequence(eentry[S_NAME]) then*/
        if (IS_SEQUENCE(_eentry_65808)){
                _32771 = SEQ_PTR(_eentry_65808)->length;
        }
        else {
            _32771 = 1;
        }
        if (IS_ATOM_INT(_39S_NAME_16470)) {
            _32772 = (_32771 >= _39S_NAME_16470);
        }
        else {
            _32772 = binary_op(GREATEREQ, _32771, _39S_NAME_16470);
        }
        _32771 = NOVALUE;
        if (IS_ATOM_INT(_32772)) {
            if (_32772 == 0) {
                goto L5; // [222] 295
            }
        }
        else {
            if (DBL_PTR(_32772)->dbl == 0.0) {
                goto L5; // [222] 295
            }
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _32774 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _32774 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _32775 = IS_SEQUENCE(_32774);
        _32774 = NOVALUE;
        if (_32775 == 0)
        {
            _32775 = NOVALUE;
            goto L5; // [236] 295
        }
        else{
            _32775 = NOVALUE;
        }

        /** backend.e:105					poke(addr + ST_FILE_NO, eentry[S_FILE_NO])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_FILE_NO_65661)) {
            _32776 = _addr_65788 + _74ST_FILE_NO_65661;
            if ((object)((uintptr_t)_32776 + (uintptr_t)HIGH_BITS) >= 0){
                _32776 = NewDouble((eudouble)_32776);
            }
        }
        else {
            _32776 = binary_op(PLUS, _addr_65788, _74ST_FILE_NO_65661);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _32777 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _32777 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        if (IS_ATOM_INT(_32776)){
            poke_addr = (uint8_t *)_32776;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32776)->dbl);
        }
        if (IS_ATOM_INT(_32777)) {
            *poke_addr = (uint8_t)_32777;
        }
        else if (IS_ATOM(_32777)) {
            *poke_addr = (uint8_t)DBL_PTR(_32777)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32777);
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
        }
        DeRef(_32776);
        _32776 = NOVALUE;
        _32777 = NOVALUE;

        /** backend.e:106					poke4(addr + ST_TOKEN, eentry[S_TOKEN])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_TOKEN_65667)) {
            _32778 = _addr_65788 + _74ST_TOKEN_65667;
            if ((object)((uintptr_t)_32778 + (uintptr_t)HIGH_BITS) >= 0){
                _32778 = NewDouble((eudouble)_32778);
            }
        }
        else {
            _32778 = binary_op(PLUS, _addr_65788, _74ST_TOKEN_65667);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _32779 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _32779 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        if (IS_ATOM_INT(_32778)){
            poke4_addr = (uint32_t *)_32778;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32778)->dbl);
        }
        if (IS_ATOM_INT(_32779)) {
            *poke4_addr = (uint32_t)_32779;
        }
        else if (IS_ATOM(_32779)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32779)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32779);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32778);
        _32778 = NOVALUE;
        _32779 = NOVALUE;

        /** backend.e:107					string_size += length(eentry[S_NAME])+1*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _32780 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _32780 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        if (IS_SEQUENCE(_32780)){
                _32781 = SEQ_PTR(_32780)->length;
        }
        else {
            _32781 = 1;
        }
        _32780 = NOVALUE;
        _32782 = _32781 + 1;
        _32781 = NOVALUE;
        _string_size_65802 = _string_size_65802 + _32782;
        _32782 = NOVALUE;
L5: 

        /** backend.e:110				if eentry[S_MODE] = M_NORMAL then*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32784 = (object)*(((s1_ptr)_2)->base + 3);
        if (binary_op_a(NOTEQ, _32784, 1)){
            _32784 = NOVALUE;
            goto L6; // [305] 611
        }
        _32784 = NOVALUE;

        /** backend.e:113					if find(eentry[S_TOKEN], RTN_TOKS) then*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _32786 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _32786 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _32787 = find_from(_32786, _40RTN_TOKS_16423, 1);
        _32786 = NOVALUE;
        if (_32787 == 0)
        {
            _32787 = NOVALUE;
            goto L7; // [324] 590
        }
        else{
            _32787 = NOVALUE;
        }

        /** backend.e:115						if sequence(eentry[S_CODE]) and (get_backend() or eentry[S_OPCODE]=0) then  */
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _32788 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _32788 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _32789 = IS_SEQUENCE(_32788);
        _32788 = NOVALUE;
        if (_32789 == 0) {
            goto L8; // [338] 502
        }
        _32791 = _2get_backend();
        if (IS_ATOM_INT(_32791)) {
            if (_32791 != 0) {
                DeRef(_32792);
                _32792 = 1;
                goto L9; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_32791)->dbl != 0.0) {
                DeRef(_32792);
                _32792 = 1;
                goto L9; // [345] 363
            }
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32793 = (object)*(((s1_ptr)_2)->base + 21);
        if (IS_ATOM_INT(_32793)) {
            _32794 = (_32793 == 0);
        }
        else {
            _32794 = binary_op(EQUALS, _32793, 0);
        }
        _32793 = NOVALUE;
        DeRef(_32792);
        if (IS_ATOM_INT(_32794))
        _32792 = (_32794 != 0);
        else
        _32792 = DBL_PTR(_32794)->dbl != 0.0;
L9: 
        if (_32792 == 0)
        {
            _32792 = NOVALUE;
            goto L8; // [364] 502
        }
        else{
            _32792 = NOVALUE;
        }

        /** backend.e:117							e_addr = allocate( sizeof( C_POINTER ) * (length(eentry[S_CODE]) + 1 ) ) -- IL code*/
        _32795 = eu_sizeof( 50331649 );
        DeRef(_32795);
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _32796 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _32796 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        if (IS_SEQUENCE(_32796)){
                _32797 = SEQ_PTR(_32796)->length;
        }
        else {
            _32797 = 1;
        }
        _32796 = NOVALUE;
        _32798 = _32797 + 1;
        _32797 = NOVALUE;
        if (_32795 == (short)_32795 && _32798 <= INT15){
            _32799 = _32795 * _32798;
        }
        else{
            _32799 = NewDouble(_32795 * (eudouble)_32798);
        }
        _32795 = NOVALUE;
        _32798 = NOVALUE;
        _0 = _e_addr_65796;
        _e_addr_65796 = _4allocate(_32799, 0);
        DeRef(_0);
        _32799 = NOVALUE;

        /** backend.e:118							poke_pointer(e_addr, length(eentry[S_CODE]))*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _32801 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _32801 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        if (IS_SEQUENCE(_32801)){
                _32802 = SEQ_PTR(_32801)->length;
        }
        else {
            _32802 = 1;
        }
        _32801 = NOVALUE;
        if (IS_ATOM_INT(_e_addr_65796)){
            pokeptr_addr = (uintptr_t *)_e_addr_65796;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_e_addr_65796)->dbl);
        }
        *pokeptr_addr = (uintptr_t)_32802;
        _32802 = NOVALUE;

        /** backend.e:119							poke_pointer(e_addr + sizeof( C_POINTER ), eentry[S_CODE])*/
        _32803 = eu_sizeof( 50331649 );
        DeRef(_32803);
        if (IS_ATOM_INT(_e_addr_65796)) {
            _32804 = _e_addr_65796 + _32803;
            if ((object)((uintptr_t)_32804 + (uintptr_t)HIGH_BITS) >= 0){
                _32804 = NewDouble((eudouble)_32804);
            }
        }
        else {
            _32804 = NewDouble(DBL_PTR(_e_addr_65796)->dbl + (eudouble)_32803);
        }
        _32803 = NOVALUE;
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _32805 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _32805 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        if (IS_ATOM_INT(_32804)){
            pokeptr_addr = (uintptr_t *)_32804;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32804)->dbl);
        }
        if (IS_ATOM_INT(_32805)) {
            *pokeptr_addr = (uintptr_t)_32805;
        }
        else if (IS_ATOM(_32805)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32805)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32805);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32804);
        _32804 = NOVALUE;
        _32805 = NOVALUE;

        /** backend.e:120							poke_pointer(addr + ST_CODE, e_addr)*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_CODE_65682)) {
            _32806 = _addr_65788 + _74ST_CODE_65682;
            if ((object)((uintptr_t)_32806 + (uintptr_t)HIGH_BITS) >= 0){
                _32806 = NewDouble((eudouble)_32806);
            }
        }
        else {
            _32806 = binary_op(PLUS, _addr_65788, _74ST_CODE_65682);
        }
        if (IS_ATOM_INT(_32806)){
            pokeptr_addr = (uintptr_t *)_32806;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32806)->dbl);
        }
        if (IS_ATOM_INT(_e_addr_65796)) {
            *pokeptr_addr = (uintptr_t)_e_addr_65796;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_e_addr_65796)->dbl;
        }
        DeRef(_32806);
        _32806 = NOVALUE;

        /** backend.e:122							if sequence(eentry[S_LINETAB]) then*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_LINETAB_16505)){
            _32807 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
        }
        else{
            _32807 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
        }
        _32808 = IS_SEQUENCE(_32807);
        _32807 = NOVALUE;
        if (_32808 == 0)
        {
            _32808 = NOVALUE;
            goto LA; // [452] 500
        }
        else{
            _32808 = NOVALUE;
        }

        /** backend.e:124								l_addr = allocate( 4 * length(eentry[S_LINETAB])) */
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_LINETAB_16505)){
            _32809 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
        }
        else{
            _32809 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
        }
        if (IS_SEQUENCE(_32809)){
                _32810 = SEQ_PTR(_32809)->length;
        }
        else {
            _32810 = 1;
        }
        _32809 = NOVALUE;
        if (_32810 <= INT15){
            _32811 = 4 * _32810;
        }
        else{
            _32811 = NewDouble(4 * (eudouble)_32810);
        }
        _32810 = NOVALUE;
        _0 = _l_addr_65797;
        _l_addr_65797 = _4allocate(_32811, 0);
        DeRef(_0);
        _32811 = NOVALUE;

        /** backend.e:125								poke4(l_addr, eentry[S_LINETAB])*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_LINETAB_16505)){
            _32813 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
        }
        else{
            _32813 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
        }
        if (IS_ATOM_INT(_l_addr_65797)){
            poke4_addr = (uint32_t *)_l_addr_65797;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_l_addr_65797)->dbl);
        }
        if (IS_ATOM_INT(_32813)) {
            *poke4_addr = (uint32_t)_32813;
        }
        else if (IS_ATOM(_32813)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32813)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32813);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        _32813 = NOVALUE;

        /** backend.e:126								poke_pointer(addr + ST_LINETAB, l_addr)*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_LINETAB_65694)) {
            _32814 = _addr_65788 + _74ST_LINETAB_65694;
            if ((object)((uintptr_t)_32814 + (uintptr_t)HIGH_BITS) >= 0){
                _32814 = NewDouble((eudouble)_32814);
            }
        }
        else {
            _32814 = binary_op(PLUS, _addr_65788, _74ST_LINETAB_65694);
        }
        if (IS_ATOM_INT(_32814)){
            pokeptr_addr = (uintptr_t *)_32814;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32814)->dbl);
        }
        if (IS_ATOM_INT(_l_addr_65797)) {
            *pokeptr_addr = (uintptr_t)_l_addr_65797;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_l_addr_65797)->dbl;
        }
        DeRef(_32814);
        _32814 = NOVALUE;
        goto LB; // [497] 501
LA: 
LB: 
L8: 

        /** backend.e:131						poke4(addr + ST_FIRSTLINE, eentry[S_FIRSTLINE])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_FIRSTLINE_65697)) {
            _32815 = _addr_65788 + _74ST_FIRSTLINE_65697;
            if ((object)((uintptr_t)_32815 + (uintptr_t)HIGH_BITS) >= 0){
                _32815 = NewDouble((eudouble)_32815);
            }
        }
        else {
            _32815 = binary_op(PLUS, _addr_65788, _74ST_FIRSTLINE_65697);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_FIRSTLINE_16510)){
            _32816 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRSTLINE_16510)->dbl));
        }
        else{
            _32816 = (object)*(((s1_ptr)_2)->base + _39S_FIRSTLINE_16510);
        }
        if (IS_ATOM_INT(_32815)){
            poke4_addr = (uint32_t *)_32815;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32815)->dbl);
        }
        if (IS_ATOM_INT(_32816)) {
            *poke4_addr = (uint32_t)_32816;
        }
        else if (IS_ATOM(_32816)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32816)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32816);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32815);
        _32815 = NOVALUE;
        _32816 = NOVALUE;

        /** backend.e:132						poke_pointer(addr + ST_TEMPS, eentry[S_TEMPS])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_TEMPS_65685)) {
            _32817 = _addr_65788 + _74ST_TEMPS_65685;
            if ((object)((uintptr_t)_32817 + (uintptr_t)HIGH_BITS) >= 0){
                _32817 = NewDouble((eudouble)_32817);
            }
        }
        else {
            _32817 = binary_op(PLUS, _addr_65788, _74ST_TEMPS_65685);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_TEMPS_16515)){
            _32818 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
        }
        else{
            _32818 = (object)*(((s1_ptr)_2)->base + _39S_TEMPS_16515);
        }
        if (IS_ATOM_INT(_32817)){
            pokeptr_addr = (uintptr_t *)_32817;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32817)->dbl);
        }
        if (IS_ATOM_INT(_32818)) {
            *pokeptr_addr = (uintptr_t)_32818;
        }
        else if (IS_ATOM(_32818)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32818)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32818);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32817);
        _32817 = NOVALUE;
        _32818 = NOVALUE;

        /** backend.e:133						poke4(addr + ST_NUM_ARGS, eentry[S_NUM_ARGS])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_NUM_ARGS_65700)) {
            _32819 = _addr_65788 + _74ST_NUM_ARGS_65700;
            if ((object)((uintptr_t)_32819 + (uintptr_t)HIGH_BITS) >= 0){
                _32819 = NewDouble((eudouble)_32819);
            }
        }
        else {
            _32819 = binary_op(PLUS, _addr_65788, _74ST_NUM_ARGS_65700);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
            _32820 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
        }
        else{
            _32820 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
        }
        if (IS_ATOM_INT(_32819)){
            poke4_addr = (uint32_t *)_32819;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32819)->dbl);
        }
        if (IS_ATOM_INT(_32820)) {
            *poke4_addr = (uint32_t)_32820;
        }
        else if (IS_ATOM(_32820)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32820)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32820);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32819);
        _32819 = NOVALUE;
        _32820 = NOVALUE;

        /** backend.e:136						poke4(addr + ST_STACK_SPACE, eentry[S_STACK_SPACE])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_STACK_SPACE_65706)) {
            _32821 = _addr_65788 + _74ST_STACK_SPACE_65706;
            if ((object)((uintptr_t)_32821 + (uintptr_t)HIGH_BITS) >= 0){
                _32821 = NewDouble((eudouble)_32821);
            }
        }
        else {
            _32821 = binary_op(PLUS, _addr_65788, _74ST_STACK_SPACE_65706);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
            _32822 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
        }
        else{
            _32822 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
        }
        if (IS_ATOM_INT(_32821)){
            poke4_addr = (uint32_t *)_32821;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32821)->dbl);
        }
        if (IS_ATOM_INT(_32822)) {
            *poke4_addr = (uint32_t)_32822;
        }
        else if (IS_ATOM(_32822)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32822)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32822);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32821);
        _32821 = NOVALUE;
        _32822 = NOVALUE;

        /** backend.e:137						poke_pointer(addr + ST_BLOCK, eentry[S_BLOCK])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_BLOCK_65691)) {
            _32823 = _addr_65788 + _74ST_BLOCK_65691;
            if ((object)((uintptr_t)_32823 + (uintptr_t)HIGH_BITS) >= 0){
                _32823 = NewDouble((eudouble)_32823);
            }
        }
        else {
            _32823 = binary_op(PLUS, _addr_65788, _74ST_BLOCK_65691);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_BLOCK_16490)){
            _32824 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
        }
        else{
            _32824 = (object)*(((s1_ptr)_2)->base + _39S_BLOCK_16490);
        }
        if (IS_ATOM_INT(_32823)){
            pokeptr_addr = (uintptr_t *)_32823;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32823)->dbl);
        }
        if (IS_ATOM_INT(_32824)) {
            *pokeptr_addr = (uintptr_t)_32824;
        }
        else if (IS_ATOM(_32824)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32824)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32824);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32823);
        _32823 = NOVALUE;
        _32824 = NOVALUE;
        goto LC; // [587] 803
L7: 

        /** backend.e:140						poke_pointer(addr + ST_DECLARED_IN, eentry[S_BLOCK] )*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_DECLARED_IN_65673)) {
            _32825 = _addr_65788 + _74ST_DECLARED_IN_65673;
            if ((object)((uintptr_t)_32825 + (uintptr_t)HIGH_BITS) >= 0){
                _32825 = NewDouble((eudouble)_32825);
            }
        }
        else {
            _32825 = binary_op(PLUS, _addr_65788, _74ST_DECLARED_IN_65673);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_BLOCK_16490)){
            _32826 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
        }
        else{
            _32826 = (object)*(((s1_ptr)_2)->base + _39S_BLOCK_16490);
        }
        if (IS_ATOM_INT(_32825)){
            pokeptr_addr = (uintptr_t *)_32825;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32825)->dbl);
        }
        if (IS_ATOM_INT(_32826)) {
            *pokeptr_addr = (uintptr_t)_32826;
        }
        else if (IS_ATOM(_32826)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32826)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32826);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32825);
        _32825 = NOVALUE;
        _32826 = NOVALUE;
        goto LC; // [608] 803
L6: 

        /** backend.e:143				elsif eentry[S_MODE] = M_BLOCK then*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32827 = (object)*(((s1_ptr)_2)->base + 3);
        if (binary_op_a(NOTEQ, _32827, 4)){
            _32827 = NOVALUE;
            goto LD; // [621] 708
        }
        _32827 = NOVALUE;

        /** backend.e:144					poke_pointer(addr + ST_NEXT_IN_BLOCK, eentry[S_NEXT_IN_BLOCK] )*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_NEXT_IN_BLOCK_65652)) {
            _32829 = _addr_65788 + _74ST_NEXT_IN_BLOCK_65652;
            if ((object)((uintptr_t)_32829 + (uintptr_t)HIGH_BITS) >= 0){
                _32829 = NewDouble((eudouble)_32829);
            }
        }
        else {
            _32829 = binary_op(PLUS, _addr_65788, _74ST_NEXT_IN_BLOCK_65652);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462)){
            _32830 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
        }
        else{
            _32830 = (object)*(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
        }
        if (IS_ATOM_INT(_32829)){
            pokeptr_addr = (uintptr_t *)_32829;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32829)->dbl);
        }
        if (IS_ATOM_INT(_32830)) {
            *pokeptr_addr = (uintptr_t)_32830;
        }
        else if (IS_ATOM(_32830)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32830)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32830);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32829);
        _32829 = NOVALUE;
        _32830 = NOVALUE;

        /** backend.e:145					poke_pointer(addr + ST_BLOCK, eentry[S_BLOCK])*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_BLOCK_65691)) {
            _32831 = _addr_65788 + _74ST_BLOCK_65691;
            if ((object)((uintptr_t)_32831 + (uintptr_t)HIGH_BITS) >= 0){
                _32831 = NewDouble((eudouble)_32831);
            }
        }
        else {
            _32831 = binary_op(PLUS, _addr_65788, _74ST_BLOCK_65691);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_BLOCK_16490)){
            _32832 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
        }
        else{
            _32832 = (object)*(((s1_ptr)_2)->base + _39S_BLOCK_16490);
        }
        if (IS_ATOM_INT(_32831)){
            pokeptr_addr = (uintptr_t *)_32831;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32831)->dbl);
        }
        if (IS_ATOM_INT(_32832)) {
            *pokeptr_addr = (uintptr_t)_32832;
        }
        else if (IS_ATOM(_32832)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32832)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32832);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *pokeptr_addr++ = (uintptr_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32831);
        _32831 = NOVALUE;
        _32832 = NOVALUE;

        /** backend.e:146					if length(eentry) >= S_FIRST_LINE then*/
        if (IS_SEQUENCE(_eentry_65808)){
                _32833 = SEQ_PTR(_eentry_65808)->length;
        }
        else {
            _32833 = 1;
        }
        if (binary_op_a(LESS, _32833, _39S_FIRST_LINE_16495)){
            _32833 = NOVALUE;
            goto LC; // [666] 803
        }
        _32833 = NOVALUE;

        /** backend.e:147						poke4(addr + ST_FIRST_LINE, eentry[S_FIRST_LINE] )*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_FIRST_LINE_65676)) {
            _32835 = _addr_65788 + _74ST_FIRST_LINE_65676;
            if ((object)((uintptr_t)_32835 + (uintptr_t)HIGH_BITS) >= 0){
                _32835 = NewDouble((eudouble)_32835);
            }
        }
        else {
            _32835 = binary_op(PLUS, _addr_65788, _74ST_FIRST_LINE_65676);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_FIRST_LINE_16495)){
            _32836 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRST_LINE_16495)->dbl));
        }
        else{
            _32836 = (object)*(((s1_ptr)_2)->base + _39S_FIRST_LINE_16495);
        }
        if (IS_ATOM_INT(_32835)){
            poke4_addr = (uint32_t *)_32835;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32835)->dbl);
        }
        if (IS_ATOM_INT(_32836)) {
            *poke4_addr = (uint32_t)_32836;
        }
        else if (IS_ATOM(_32836)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32836)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32836);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32835);
        _32835 = NOVALUE;
        _32836 = NOVALUE;

        /** backend.e:148						poke4(addr + ST_LAST_LINE, eentry[S_LAST_LINE] )*/
        if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74ST_LAST_LINE_65679)) {
            _32837 = _addr_65788 + _74ST_LAST_LINE_65679;
            if ((object)((uintptr_t)_32837 + (uintptr_t)HIGH_BITS) >= 0){
                _32837 = NewDouble((eudouble)_32837);
            }
        }
        else {
            _32837 = binary_op(PLUS, _addr_65788, _74ST_LAST_LINE_65679);
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!IS_ATOM_INT(_39S_LAST_LINE_16500)){
            _32838 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LAST_LINE_16500)->dbl));
        }
        else{
            _32838 = (object)*(((s1_ptr)_2)->base + _39S_LAST_LINE_16500);
        }
        if (IS_ATOM_INT(_32837)){
            poke4_addr = (uint32_t *)_32837;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32837)->dbl);
        }
        if (IS_ATOM_INT(_32838)) {
            *poke4_addr = (uint32_t)_32838;
        }
        else if (IS_ATOM(_32838)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32838)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32838);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        DeRef(_32837);
        _32837 = NOVALUE;
        _32838 = NOVALUE;
        goto LC; // [705] 803
LD: 

        /** backend.e:151				elsif (length(eentry) < S_NAME and eentry[S_MODE] = M_CONSTANT) or*/
        if (IS_SEQUENCE(_eentry_65808)){
                _32839 = SEQ_PTR(_eentry_65808)->length;
        }
        else {
            _32839 = 1;
        }
        if (IS_ATOM_INT(_39S_NAME_16470)) {
            _32840 = (_32839 < _39S_NAME_16470);
        }
        else {
            _32840 = binary_op(LESS, _32839, _39S_NAME_16470);
        }
        _32839 = NOVALUE;
        if (IS_ATOM_INT(_32840)) {
            if (_32840 == 0) {
                DeRef(_32841);
                _32841 = 0;
                goto LE; // [719] 739
            }
        }
        else {
            if (DBL_PTR(_32840)->dbl == 0.0) {
                DeRef(_32841);
                _32841 = 0;
                goto LE; // [719] 739
            }
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32842 = (object)*(((s1_ptr)_2)->base + 3);
        if (IS_ATOM_INT(_32842)) {
            _32843 = (_32842 == 2);
        }
        else {
            _32843 = binary_op(EQUALS, _32842, 2);
        }
        _32842 = NOVALUE;
        DeRef(_32841);
        if (IS_ATOM_INT(_32843))
        _32841 = (_32843 != 0);
        else
        _32841 = DBL_PTR(_32843)->dbl != 0.0;
LE: 
        if (_32841 != 0) {
            goto LF; // [739] 777
        }
        if (IS_SEQUENCE(_eentry_65808)){
                _32845 = SEQ_PTR(_eentry_65808)->length;
        }
        else {
            _32845 = 1;
        }
        if (IS_ATOM_INT(_39S_TOKEN_16475)) {
            _32846 = (_32845 >= _39S_TOKEN_16475);
        }
        else {
            _32846 = binary_op(GREATEREQ, _32845, _39S_TOKEN_16475);
        }
        _32845 = NOVALUE;
        if (IS_ATOM_INT(_32846)) {
            if (_32846 == 0) {
                DeRef(_32847);
                _32847 = 0;
                goto L10; // [752] 772
            }
        }
        else {
            if (DBL_PTR(_32846)->dbl == 0.0) {
                DeRef(_32847);
                _32847 = 0;
                goto L10; // [752] 772
            }
        }
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32848 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_32848) && IS_ATOM_INT(_39NOVALUE_16670)){
            _32849 = (_32848 < _39NOVALUE_16670) ? -1 : (_32848 > _39NOVALUE_16670);
        }
        else{
            _32849 = compare(_32848, _39NOVALUE_16670);
        }
        _32848 = NOVALUE;
        DeRef(_32847);
        _32847 = (_32849 != 0);
L10: 
        if (_32847 == 0)
        {
            _32847 = NOVALUE;
            goto L11; // [773] 802
        }
        else{
            _32847 = NOVALUE;
        }
LF: 

        /** backend.e:154					poke_pointer(addr, length(lit_string))  -- record the current offset*/
        if (IS_SEQUENCE(_lit_string_65806)){
                _32850 = SEQ_PTR(_lit_string_65806)->length;
        }
        else {
            _32850 = 1;
        }
        if (IS_ATOM_INT(_addr_65788)){
            pokeptr_addr = (uintptr_t *)_addr_65788;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_addr_65788)->dbl);
        }
        *pokeptr_addr = (uintptr_t)_32850;
        _32850 = NOVALUE;

        /** backend.e:155					lit_string &= compress(eentry[S_OBJ])*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32851 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_32851);
        _32852 = _37compress(_32851);
        _32851 = NOVALUE;
        if (IS_SEQUENCE(_lit_string_65806) && IS_ATOM(_32852)) {
            Ref(_32852);
            Append(&_lit_string_65806, _lit_string_65806, _32852);
        }
        else if (IS_ATOM(_lit_string_65806) && IS_SEQUENCE(_32852)) {
        }
        else {
            Concat((object_ptr)&_lit_string_65806, _lit_string_65806, _32852);
        }
        DeRef(_32852);
        _32852 = NOVALUE;
L11: 
LC: 
L4: 

        /** backend.e:161			addr += ST_ENTRY_SIZE  -- could save some bytes by changing st structure*/
        _0 = _addr_65788;
        if (IS_ATOM_INT(_addr_65788)) {
            _addr_65788 = _addr_65788 + _74ST_ENTRY_SIZE_65709;
            if ((object)((uintptr_t)_addr_65788 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_65788 = NewDouble((eudouble)_addr_65788);
            }
        }
        else {
            _addr_65788 = NewDouble(DBL_PTR(_addr_65788)->dbl + (eudouble)_74ST_ENTRY_SIZE_65709);
        }
        DeRef(_0);

        /** backend.e:162		end for*/
        _i_65821 = _i_65821 + 1;
        goto L1; // [814] 79
L2: 
        ;
    }

    /** backend.e:165		lit = allocate(length(lit_string))*/
    if (IS_SEQUENCE(_lit_string_65806)){
            _32855 = SEQ_PTR(_lit_string_65806)->length;
    }
    else {
        _32855 = 1;
    }
    _0 = _lit_65793;
    _lit_65793 = _4allocate(_32855, 0);
    DeRef(_0);
    _32855 = NOVALUE;

    /** backend.e:166		poke(lit, lit_string) -- shouldn't need 0*/
    if (IS_ATOM_INT(_lit_65793)){
        poke_addr = (uint8_t *)_lit_65793;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_lit_65793)->dbl);
    }
    _1 = (object)SEQ_PTR(_lit_string_65806);
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

    /** backend.e:169		lit_string = {}*/
    RefDS(_21928);
    DeRefDS(_lit_string_65806);
    _lit_string_65806 = _21928;

    /** backend.e:172		nm = alloc_symbol_names( st, lit, string_size )*/
    Ref(_st_65789);
    Ref(_lit_65793);
    _0 = _nm_65790;
    _nm_65790 = _38alloc_symbol_names(_st_65789, _lit_65793, _string_size_65802);
    DeRef(_0);

    /** backend.e:173		poke_pointer( st + ST_NAME, nm )*/
    if (IS_ATOM_INT(_st_65789) && IS_ATOM_INT(_74ST_NAME_65670)) {
        _32858 = _st_65789 + _74ST_NAME_65670;
        if ((object)((uintptr_t)_32858 + (uintptr_t)HIGH_BITS) >= 0){
            _32858 = NewDouble((eudouble)_32858);
        }
    }
    else {
        _32858 = binary_op(PLUS, _st_65789, _74ST_NAME_65670);
    }
    if (IS_ATOM_INT(_32858)){
        pokeptr_addr = (uintptr_t *)_32858;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32858)->dbl);
    }
    if (IS_ATOM_INT(_nm_65790)) {
        *pokeptr_addr = (uintptr_t)_nm_65790;
    }
    else {
        *pokeptr_addr = (uintptr_t)DBL_PTR(_nm_65790)->dbl;
    }
    DeRef(_32858);
    _32858 = NOVALUE;

    /** backend.e:175		if not has_coverage() then*/
    _32859 = _53has_coverage();
    if (IS_ATOM_INT(_32859)) {
        if (_32859 != 0){
            DeRef(_32859);
            _32859 = NOVALUE;
            goto L12; // [865] 876
        }
    }
    else {
        if (DBL_PTR(_32859)->dbl != 0.0){
            DeRef(_32859);
            _32859 = NOVALUE;
            goto L12; // [865] 876
        }
    }
    DeRef(_32859);
    _32859 = NOVALUE;

    /** backend.e:176			SymTab = {}  -- free up some space*/
    RefDS(_21928);
    DeRef(_36SymTab_15404);
    _36SymTab_15404 = _21928;
L12: 

    /** backend.e:183		size = 0*/
    _size_65804 = 0;

    /** backend.e:184		for i = 1 to length(slist) do*/
    if (IS_SEQUENCE(_39slist_16905)){
            _32861 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _32861 = 1;
    }
    {
        object _i_66020;
        _i_66020 = 1;
L13: 
        if (_i_66020 > _32861){
            goto L14; // [888] 940
        }

        /** backend.e:185			if sequence(slist[i]) then*/
        _2 = (object)SEQ_PTR(_39slist_16905);
        _32862 = (object)*(((s1_ptr)_2)->base + _i_66020);
        _32863 = IS_SEQUENCE(_32862);
        _32862 = NOVALUE;
        if (_32863 == 0)
        {
            _32863 = NOVALUE;
            goto L15; // [906] 918
        }
        else{
            _32863 = NOVALUE;
        }

        /** backend.e:186				size += 1*/
        _size_65804 = _size_65804 + 1;
        goto L16; // [915] 933
L15: 

        /** backend.e:188				size += slist[i]*/
        _2 = (object)SEQ_PTR(_39slist_16905);
        _32865 = (object)*(((s1_ptr)_2)->base + _i_66020);
        if (IS_ATOM_INT(_32865)) {
            _size_65804 = _size_65804 + _32865;
        }
        else {
            _size_65804 = binary_op(PLUS, _size_65804, _32865);
        }
        _32865 = NOVALUE;
        if (!IS_ATOM_INT(_size_65804)) {
            _1 = (object)(DBL_PTR(_size_65804)->dbl);
            DeRefDS(_size_65804);
            _size_65804 = _1;
        }
L16: 

        /** backend.e:190		end for*/
        _i_66020 = _i_66020 + 1;
        goto L13; // [935] 895
L14: 
        ;
    }

    /** backend.e:192		sl = allocate( (size + 1) * SL_SIZE )*/
    _32867 = _size_65804 + 1;
    if (_32867 > MAXINT){
        _32867 = NewDouble((eudouble)_32867);
    }
    if (IS_ATOM_INT(_32867) && IS_ATOM_INT(_74SL_SIZE_65725)) {
        if (_32867 == (short)_32867 && _74SL_SIZE_65725 <= INT15 && _74SL_SIZE_65725 >= -INT15){
            _32868 = _32867 * _74SL_SIZE_65725;
        }
        else{
            _32868 = NewDouble(_32867 * (eudouble)_74SL_SIZE_65725);
        }
    }
    else {
        if (IS_ATOM_INT(_32867)) {
            _32868 = NewDouble((eudouble)_32867 * DBL_PTR(_74SL_SIZE_65725)->dbl);
        }
        else {
            if (IS_ATOM_INT(_74SL_SIZE_65725)) {
                _32868 = NewDouble(DBL_PTR(_32867)->dbl * (eudouble)_74SL_SIZE_65725);
            }
            else
            _32868 = NewDouble(DBL_PTR(_32867)->dbl * DBL_PTR(_74SL_SIZE_65725)->dbl);
        }
    }
    DeRef(_32867);
    _32867 = NOVALUE;
    _0 = _sl_65792;
    _sl_65792 = _4allocate(_32868, 0);
    DeRef(_0);
    _32868 = NOVALUE;

    /** backend.e:193		mem_set(sl, 0, (size + 1) * SL_SIZE )*/
    _32870 = _size_65804 + 1;
    if (_32870 > MAXINT){
        _32870 = NewDouble((eudouble)_32870);
    }
    if (IS_ATOM_INT(_32870) && IS_ATOM_INT(_74SL_SIZE_65725)) {
        _32871 = _32870 * _74SL_SIZE_65725;
    }
    else {
        if (IS_ATOM_INT(_32870)) {
            _32871 = NewDouble((eudouble)_32870 * DBL_PTR(_74SL_SIZE_65725)->dbl);
        }
        else {
            if (IS_ATOM_INT(_74SL_SIZE_65725)) {
                _32871 = NewDouble(DBL_PTR(_32870)->dbl * (eudouble)_74SL_SIZE_65725);
            }
            else
            _32871 = NewDouble(DBL_PTR(_32870)->dbl * DBL_PTR(_74SL_SIZE_65725)->dbl);
        }
    }
    DeRef(_32870);
    _32870 = NOVALUE;
    memory_set(_sl_65792, 0, _32871);
    DeRef(_32871);
    _32871 = NOVALUE;

    /** backend.e:195		poke_pointer(sl, size)*/
    if (IS_ATOM_INT(_sl_65792)){
        pokeptr_addr = (uintptr_t *)_sl_65792;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_sl_65792)->dbl);
    }
    *pokeptr_addr = (uintptr_t)_size_65804;

    /** backend.e:196		addr = sl + SL_SIZE -- 0th element is ignored - origin 1*/
    DeRef(_addr_65788);
    if (IS_ATOM_INT(_sl_65792) && IS_ATOM_INT(_74SL_SIZE_65725)) {
        _addr_65788 = _sl_65792 + _74SL_SIZE_65725;
        if ((object)((uintptr_t)_addr_65788 + (uintptr_t)HIGH_BITS) >= 0){
            _addr_65788 = NewDouble((eudouble)_addr_65788);
        }
    }
    else {
        if (IS_ATOM_INT(_sl_65792)) {
            _addr_65788 = NewDouble((eudouble)_sl_65792 + DBL_PTR(_74SL_SIZE_65725)->dbl);
        }
        else {
            if (IS_ATOM_INT(_74SL_SIZE_65725)) {
                _addr_65788 = NewDouble(DBL_PTR(_sl_65792)->dbl + (eudouble)_74SL_SIZE_65725);
            }
            else
            _addr_65788 = NewDouble(DBL_PTR(_sl_65792)->dbl + DBL_PTR(_74SL_SIZE_65725)->dbl);
        }
    }

    /** backend.e:197		string_size = 0*/
    _string_size_65802 = 0;

    /** backend.e:199		for i = 1 to length(slist) do*/
    if (IS_SEQUENCE(_39slist_16905)){
            _32873 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _32873 = 1;
    }
    {
        object _i_66043;
        _i_66043 = 1;
L17: 
        if (_i_66043 > _32873){
            goto L18; // [998] 1358
        }

        /** backend.e:200			if sequence(slist[i]) then*/
        _2 = (object)SEQ_PTR(_39slist_16905);
        _32874 = (object)*(((s1_ptr)_2)->base + _i_66043);
        _32875 = IS_SEQUENCE(_32874);
        _32874 = NOVALUE;
        if (_32875 == 0)
        {
            _32875 = NOVALUE;
            goto L19; // [1016] 1035
        }
        else{
            _32875 = NOVALUE;
        }

        /** backend.e:201				eentry = slist[i]*/
        DeRef(_eentry_65808);
        _2 = (object)SEQ_PTR(_39slist_16905);
        _eentry_65808 = (object)*(((s1_ptr)_2)->base + _i_66043);
        Ref(_eentry_65808);

        /** backend.e:202				repcount = 1*/
        _repcount_65805 = 1;
        goto L1A; // [1032] 1101
L19: 

        /** backend.e:204				eentry = slist[i-1]*/
        _32877 = _i_66043 - 1;
        DeRef(_eentry_65808);
        _2 = (object)SEQ_PTR(_39slist_16905);
        _eentry_65808 = (object)*(((s1_ptr)_2)->base + _32877);
        Ref(_eentry_65808);

        /** backend.e:205				if length(eentry) < 4 then*/
        if (IS_SEQUENCE(_eentry_65808)){
                _32879 = SEQ_PTR(_eentry_65808)->length;
        }
        else {
            _32879 = 1;
        }
        if (_32879 >= 4)
        goto L1B; // [1052] 1073

        /** backend.e:206					eentry[1] += 1*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32881 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_32881)) {
            _32882 = _32881 + 1;
            if (_32882 > MAXINT){
                _32882 = NewDouble((eudouble)_32882);
            }
        }
        else
        _32882 = binary_op(PLUS, 1, _32881);
        _32881 = NOVALUE;
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _eentry_65808 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32882;
        if( _1 != _32882 ){
            DeRef(_1);
        }
        _32882 = NOVALUE;
        goto L1C; // [1070] 1090
L1B: 

        /** backend.e:208					eentry[LINE] += 1*/
        _2 = (object)SEQ_PTR(_eentry_65808);
        _32883 = (object)*(((s1_ptr)_2)->base + 2);
        if (IS_ATOM_INT(_32883)) {
            _32884 = _32883 + 1;
            if (_32884 > MAXINT){
                _32884 = NewDouble((eudouble)_32884);
            }
        }
        else
        _32884 = binary_op(PLUS, 1, _32883);
        _32883 = NOVALUE;
        _2 = (object)SEQ_PTR(_eentry_65808);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _eentry_65808 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32884;
        if( _1 != _32884 ){
            DeRef(_1);
        }
        _32884 = NOVALUE;
L1C: 

        /** backend.e:210				repcount = slist[i]*/
        _2 = (object)SEQ_PTR(_39slist_16905);
        _repcount_65805 = (object)*(((s1_ptr)_2)->base + _i_66043);
        if (!IS_ATOM_INT(_repcount_65805)){
            _repcount_65805 = (object)DBL_PTR(_repcount_65805)->dbl;
        }
L1A: 

        /** backend.e:213			short = length(eentry) < 4*/
        if (IS_SEQUENCE(_eentry_65808)){
                _32886 = SEQ_PTR(_eentry_65808)->length;
        }
        else {
            _32886 = 1;
        }
        _short_65803 = (_32886 < 4);
        _32886 = NOVALUE;

        /** backend.e:214			sequence started_file = repeat( 0, length( known_files ) )*/
        if (IS_SEQUENCE(_36known_files_15405)){
                _32888 = SEQ_PTR(_36known_files_15405)->length;
        }
        else {
            _32888 = 1;
        }
        DeRefi(_started_file_66069);
        _started_file_66069 = Repeat(0, _32888);
        _32888 = NOVALUE;

        /** backend.e:215			for j = 1 to repcount do*/
        _32890 = _repcount_65805;
        {
            object _j_66074;
            _j_66074 = 1;
L1D: 
            if (_j_66074 > _32890){
                goto L1E; // [1130] 1349
            }

            /** backend.e:216				poke2(addr + SL_LINE, eentry[LINE-short])  -- hits 4,5,6,7 */
            if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74SL_LINE_65713)) {
                _32891 = _addr_65788 + _74SL_LINE_65713;
                if ((object)((uintptr_t)_32891 + (uintptr_t)HIGH_BITS) >= 0){
                    _32891 = NewDouble((eudouble)_32891);
                }
            }
            else {
                _32891 = binary_op(PLUS, _addr_65788, _74SL_LINE_65713);
            }
            _32892 = 2 - _short_65803;
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32893 = (object)*(((s1_ptr)_2)->base + _32892);
            if (IS_ATOM_INT(_32891)){
                poke2_addr = (uint16_t *)_32891;
            }
            else {
                poke2_addr = (uint16_t *)(uintptr_t)(DBL_PTR(_32891)->dbl);
            }
            if (IS_ATOM_INT(_32893)) {
                *poke2_addr = (uint16_t)_32893;
            }
            else if (IS_ATOM(_32893)) {
                *poke2_addr = (uint16_t)DBL_PTR(_32893)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32893);
                _1 = (object)((s1_ptr)_1)->base;
                while (1) {
                    _1 += sizeof(object);
                    _2 = *((object *)_1);
                    if (IS_ATOM_INT(_2)) {
                        *poke2_addr++ = (uint16_t)_2;
                    }
                    else if (_2 == NOVALUE) {
                        break;
                    }
                    else {
                        *poke2_addr++ = (uint16_t)DBL_PTR(_2)->dbl;
                    }
                }
            }
            DeRef(_32891);
            _32891 = NOVALUE;
            _32893 = NOVALUE;

            /** backend.e:218				poke(addr + SL_FILE_NO, eentry[LOCAL_FILE_NO-short])*/
            if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74SL_FILE_NO_65716)) {
                _32894 = _addr_65788 + _74SL_FILE_NO_65716;
                if ((object)((uintptr_t)_32894 + (uintptr_t)HIGH_BITS) >= 0){
                    _32894 = NewDouble((eudouble)_32894);
                }
            }
            else {
                _32894 = binary_op(PLUS, _addr_65788, _74SL_FILE_NO_65716);
            }
            _32895 = 3 - _short_65803;
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32896 = (object)*(((s1_ptr)_2)->base + _32895);
            if (IS_ATOM_INT(_32894)){
                poke_addr = (uint8_t *)_32894;
            }
            else {
                poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32894)->dbl);
            }
            if (IS_ATOM_INT(_32896)) {
                *poke_addr = (uint8_t)_32896;
            }
            else if (IS_ATOM(_32896)) {
                *poke_addr = (uint8_t)DBL_PTR(_32896)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32896);
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
            }
            DeRef(_32894);
            _32894 = NOVALUE;
            _32896 = NOVALUE;

            /** backend.e:219				if not short then*/
            if (_short_65803 != 0)
            goto L1F; // [1181] 1253

            /** backend.e:220					if eentry[SRC] then*/
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32898 = (object)*(((s1_ptr)_2)->base + 1);
            if (_32898 == 0) {
                _32898 = NOVALUE;
                goto L20; // [1192] 1235
            }
            else {
                if (!IS_ATOM_INT(_32898) && DBL_PTR(_32898)->dbl == 0.0){
                    _32898 = NOVALUE;
                    goto L20; // [1192] 1235
                }
                _32898 = NOVALUE;
            }
            _32898 = NOVALUE;

            /** backend.e:221						poke_pointer(addr, all_source[1+floor(eentry[SRC]/SOURCE_CHUNK)]*/
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32899 = (object)*(((s1_ptr)_2)->base + 1);
            if (IS_ATOM_INT(_32899)) {
                if (10000 > 0 && _32899 >= 0) {
                    _32900 = _32899 / 10000;
                }
                else {
                    temp_dbl = EUFLOOR((eudouble)_32899 / (eudouble)10000);
                    if (_32899 != MININT)
                    _32900 = (object)temp_dbl;
                    else
                    _32900 = NewDouble(temp_dbl);
                }
            }
            else {
                _2 = binary_op(DIVIDE, _32899, 10000);
                _32900 = unary_op(FLOOR, _2);
                DeRef(_2);
            }
            _32899 = NOVALUE;
            if (IS_ATOM_INT(_32900)) {
                _32901 = _32900 + 1;
            }
            else
            _32901 = binary_op(PLUS, 1, _32900);
            DeRef(_32900);
            _32900 = NOVALUE;
            _2 = (object)SEQ_PTR(_36all_source_15428);
            if (!IS_ATOM_INT(_32901)){
                _32902 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32901)->dbl));
            }
            else{
                _32902 = (object)*(((s1_ptr)_2)->base + _32901);
            }
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32903 = (object)*(((s1_ptr)_2)->base + 1);
            if (IS_ATOM_INT(_32903)) {
                _32904 = (_32903 % 10000);
            }
            else {
                _32904 = binary_op(REMAINDER, _32903, 10000);
            }
            _32903 = NOVALUE;
            if (IS_ATOM_INT(_32902) && IS_ATOM_INT(_32904)) {
                _32905 = _32902 + _32904;
                if ((object)((uintptr_t)_32905 + (uintptr_t)HIGH_BITS) >= 0){
                    _32905 = NewDouble((eudouble)_32905);
                }
            }
            else {
                _32905 = binary_op(PLUS, _32902, _32904);
            }
            _32902 = NOVALUE;
            DeRef(_32904);
            _32904 = NOVALUE;
            if (IS_ATOM_INT(_addr_65788)){
                pokeptr_addr = (uintptr_t *)_addr_65788;
            }
            else {
                pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_addr_65788)->dbl);
            }
            if (IS_ATOM_INT(_32905)) {
                *pokeptr_addr = (uintptr_t)_32905;
            }
            else if (IS_ATOM(_32905)) {
                *pokeptr_addr = (uintptr_t)DBL_PTR(_32905)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32905);
                _1 = (object)((s1_ptr)_1)->base;
                while (1) {
                    _1 += sizeof(object);
                    _2 = *((object *)_1);
                    if (IS_ATOM_INT(_2)) {
                        *pokeptr_addr++ = (uintptr_t)_2;
                    }
                    else if (_2 == NOVALUE) {
                        break;
                    }
                    else {
                        *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
                    }
                }
            }
            DeRef(_32905);
            _32905 = NOVALUE;
L20: 

            /** backend.e:224					poke(addr + SL_OPTIONS, eentry[OPTIONS]) -- else leave it 0*/
            if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74SL_OPTIONS_65719)) {
                _32906 = _addr_65788 + _74SL_OPTIONS_65719;
                if ((object)((uintptr_t)_32906 + (uintptr_t)HIGH_BITS) >= 0){
                    _32906 = NewDouble((eudouble)_32906);
                }
            }
            else {
                _32906 = binary_op(PLUS, _addr_65788, _74SL_OPTIONS_65719);
            }
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32907 = (object)*(((s1_ptr)_2)->base + 4);
            if (IS_ATOM_INT(_32906)){
                poke_addr = (uint8_t *)_32906;
            }
            else {
                poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32906)->dbl);
            }
            if (IS_ATOM_INT(_32907)) {
                *poke_addr = (uint8_t)_32907;
            }
            else if (IS_ATOM(_32907)) {
                *poke_addr = (uint8_t)DBL_PTR(_32907)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32907);
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
            }
            DeRef(_32906);
            _32906 = NOVALUE;
            _32907 = NOVALUE;
L1F: 

            /** backend.e:226				if started_file[eentry[LOCAL_FILE_NO-short]] then*/
            _32908 = 3 - _short_65803;
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32909 = (object)*(((s1_ptr)_2)->base + _32908);
            _2 = (object)SEQ_PTR(_started_file_66069);
            if (!IS_ATOM_INT(_32909)){
                _32910 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32909)->dbl));
            }
            else{
                _32910 = (object)*(((s1_ptr)_2)->base + _32909);
            }
            if (_32910 == 0)
            {
                _32910 = NOVALUE;
                goto L21; // [1269] 1286
            }
            else{
                _32910 = NOVALUE;
            }

            /** backend.e:227					poke4( addr + SL_MULTILINE, -1 )*/
            if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74SL_MULTILINE_65722)) {
                _32911 = _addr_65788 + _74SL_MULTILINE_65722;
                if ((object)((uintptr_t)_32911 + (uintptr_t)HIGH_BITS) >= 0){
                    _32911 = NewDouble((eudouble)_32911);
                }
            }
            else {
                _32911 = binary_op(PLUS, _addr_65788, _74SL_MULTILINE_65722);
            }
            if (IS_ATOM_INT(_32911)){
                poke4_addr = (uint32_t *)_32911;
            }
            else {
                poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32911)->dbl);
            }
            *poke4_addr = (uint32_t)-1;
            DeRef(_32911);
            _32911 = NOVALUE;
            goto L22; // [1283] 1314
L21: 

            /** backend.e:229					poke4( addr + SL_MULTILINE, 0 )*/
            if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74SL_MULTILINE_65722)) {
                _32912 = _addr_65788 + _74SL_MULTILINE_65722;
                if ((object)((uintptr_t)_32912 + (uintptr_t)HIGH_BITS) >= 0){
                    _32912 = NewDouble((eudouble)_32912);
                }
            }
            else {
                _32912 = binary_op(PLUS, _addr_65788, _74SL_MULTILINE_65722);
            }
            if (IS_ATOM_INT(_32912)){
                poke4_addr = (uint32_t *)_32912;
            }
            else {
                poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32912)->dbl);
            }
            *poke4_addr = (uint32_t)0;
            DeRef(_32912);
            _32912 = NOVALUE;

            /** backend.e:230					started_file[eentry[LOCAL_FILE_NO-short]] = 1*/
            _32913 = 3 - _short_65803;
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32914 = (object)*(((s1_ptr)_2)->base + _32913);
            _2 = (object)SEQ_PTR(_started_file_66069);
            if (!IS_ATOM_INT(_32914))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_32914)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _32914);
            *(intptr_t *)_2 = 1;
L22: 

            /** backend.e:232				addr += SL_SIZE*/
            _0 = _addr_65788;
            if (IS_ATOM_INT(_addr_65788) && IS_ATOM_INT(_74SL_SIZE_65725)) {
                _addr_65788 = _addr_65788 + _74SL_SIZE_65725;
                if ((object)((uintptr_t)_addr_65788 + (uintptr_t)HIGH_BITS) >= 0){
                    _addr_65788 = NewDouble((eudouble)_addr_65788);
                }
            }
            else {
                if (IS_ATOM_INT(_addr_65788)) {
                    _addr_65788 = NewDouble((eudouble)_addr_65788 + DBL_PTR(_74SL_SIZE_65725)->dbl);
                }
                else {
                    if (IS_ATOM_INT(_74SL_SIZE_65725)) {
                        _addr_65788 = NewDouble(DBL_PTR(_addr_65788)->dbl + (eudouble)_74SL_SIZE_65725);
                    }
                    else
                    _addr_65788 = NewDouble(DBL_PTR(_addr_65788)->dbl + DBL_PTR(_74SL_SIZE_65725)->dbl);
                }
            }
            DeRef(_0);

            /** backend.e:233				eentry[LINE-short] += 1*/
            _32916 = 2 - _short_65803;
            _2 = (object)SEQ_PTR(_eentry_65808);
            _32917 = (object)*(((s1_ptr)_2)->base + _32916);
            if (IS_ATOM_INT(_32917)) {
                _32918 = _32917 + 1;
                if (_32918 > MAXINT){
                    _32918 = NewDouble((eudouble)_32918);
                }
            }
            else
            _32918 = binary_op(PLUS, 1, _32917);
            _32917 = NOVALUE;
            _2 = (object)SEQ_PTR(_eentry_65808);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _eentry_65808 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _32916);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _32918;
            if( _1 != _32918 ){
                DeRef(_1);
            }
            _32918 = NOVALUE;

            /** backend.e:234			end for*/
            _j_66074 = _j_66074 + 1;
            goto L1D; // [1344] 1137
L1E: 
            ;
        }
        DeRefi(_started_file_66069);
        _started_file_66069 = NOVALUE;

        /** backend.e:235		end for*/
        _i_66043 = _i_66043 + 1;
        goto L17; // [1353] 1005
L18: 
        ;
    }

    /** backend.e:237		if not has_coverage() then*/
    _32919 = _53has_coverage();
    if (IS_ATOM_INT(_32919)) {
        if (_32919 != 0){
            DeRef(_32919);
            _32919 = NOVALUE;
            goto L23; // [1363] 1374
        }
    }
    else {
        if (DBL_PTR(_32919)->dbl != 0.0){
            DeRef(_32919);
            _32919 = NOVALUE;
            goto L23; // [1363] 1374
        }
    }
    DeRef(_32919);
    _32919 = NOVALUE;

    /** backend.e:238			slist = {}  -- free up some space*/
    RefDS(_21928);
    DeRef(_39slist_16905);
    _39slist_16905 = _21928;
L23: 

    /** backend.e:242		other_strings = append(known_files, file_name_entered) & warning_list*/
    RefDS(_39file_name_entered_16812);
    Append(&_32921, _36known_files_15405, _39file_name_entered_16812);
    Concat((object_ptr)&_other_strings_65807, _32921, _52warning_list_48718);
    DeRefDS(_32921);
    _32921 = NOVALUE;
    DeRef(_32921);
    _32921 = NOVALUE;

    /** backend.e:243		string_size = 0*/
    _string_size_65802 = 0;

    /** backend.e:244		for i = 1 to length(other_strings) do*/
    if (IS_SEQUENCE(_other_strings_65807)){
            _32923 = SEQ_PTR(_other_strings_65807)->length;
    }
    else {
        _32923 = 1;
    }
    {
        object _i_66135;
        _i_66135 = 1;
L24: 
        if (_i_66135 > _32923){
            goto L25; // [1400] 1433
        }

        /** backend.e:245			string_size += length(other_strings[i])+1*/
        _2 = (object)SEQ_PTR(_other_strings_65807);
        _32924 = (object)*(((s1_ptr)_2)->base + _i_66135);
        if (IS_SEQUENCE(_32924)){
                _32925 = SEQ_PTR(_32924)->length;
        }
        else {
            _32925 = 1;
        }
        _32924 = NOVALUE;
        _32926 = _32925 + 1;
        _32925 = NOVALUE;
        _string_size_65802 = _string_size_65802 + _32926;
        _32926 = NOVALUE;

        /** backend.e:246		end for*/
        _i_66135 = _i_66135 + 1;
        goto L24; // [1428] 1407
L25: 
        ;
    }

    /** backend.e:248		ms = allocate( sizeof( C_POINTER ) * (10 + length(other_strings) ) ) -- miscellaneous*/
    _32928 = eu_sizeof( 50331649 );
    DeRef(_32928);
    if (IS_SEQUENCE(_other_strings_65807)){
            _32929 = SEQ_PTR(_other_strings_65807)->length;
    }
    else {
        _32929 = 1;
    }
    _32930 = 10 + _32929;
    _32929 = NOVALUE;
    if (_32928 == (short)_32928 && _32930 <= INT15){
        _32931 = _32928 * _32930;
    }
    else{
        _32931 = NewDouble(_32928 * (eudouble)_32930);
    }
    _32928 = NOVALUE;
    _32930 = NOVALUE;
    _0 = _ms_65791;
    _ms_65791 = _4allocate(_32931, 0);
    DeRef(_0);
    _32931 = NOVALUE;

    /** backend.e:249		poke_pointer( ms, {*/
    if (IS_SEQUENCE(_52warning_list_48718)){
            _32933 = SEQ_PTR(_52warning_list_48718)->length;
    }
    else {
        _32933 = 1;
    }
    if (IS_SEQUENCE(_36known_files_15405)){
            _32934 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _32934 = 1;
    }
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _39max_stack_per_call_16914;
    ((intptr_t*)_2)[2] = _36AnyTimeProfile_15426;
    ((intptr_t*)_2)[3] = _36AnyStatementProfile_15427;
    ((intptr_t*)_2)[4] = _39sample_size_16915;
    ((intptr_t*)_2)[5] = _39gline_number_16820;
    ((intptr_t*)_2)[6] = _il_file_65787;
    ((intptr_t*)_2)[7] = _32933;
    ((intptr_t*)_2)[8] = _32934;
    _32935 = MAKE_SEQ(_1);
    _32934 = NOVALUE;
    _32933 = NOVALUE;
    if (IS_ATOM_INT(_ms_65791)){
        pokeptr_addr = (uintptr_t *)_ms_65791;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_ms_65791)->dbl);
    }
    _1 = (object)SEQ_PTR(_32935);
    _1 = (object)((s1_ptr)_1)->base;
    while (1) {
        _1 += sizeof(object);
        _2 = *((object *)_1);
        if (IS_ATOM_INT(_2)) {
            *pokeptr_addr++ = (uintptr_t)_2;
        }
        else if (_2 == NOVALUE) {
            break;
        }
        else {
            *pokeptr_addr++ = (uintptr_t)DBL_PTR(_2)->dbl;
        }
    }
    DeRefDS(_32935);
    _32935 = NOVALUE;

    /** backend.e:262		fn = allocate(string_size)*/
    _0 = _fn_65794;
    _fn_65794 = _4allocate(_string_size_65802, 0);
    DeRef(_0);

    /** backend.e:264		for i = 1 to length(other_strings) do*/
    if (IS_SEQUENCE(_other_strings_65807)){
            _32937 = SEQ_PTR(_other_strings_65807)->length;
    }
    else {
        _32937 = 1;
    }
    {
        object _i_66161;
        _i_66161 = 1;
L26: 
        if (_i_66161 > _32937){
            goto L27; // [1504] 1586
        }

        /** backend.e:265			poke_pointer(ms + 8 * sizeof( C_POINTER ) + (i-1) * sizeof( C_POINTER ), fn)*/
        _32938 = eu_sizeof( 50331649 );
        DeRef(_32938);
        if (_32938 <= INT15){
            _32939 = 8 * _32938;
        }
        else{
            _32939 = NewDouble(8 * (eudouble)_32938);
        }
        _32938 = NOVALUE;
        if (IS_ATOM_INT(_ms_65791) && IS_ATOM_INT(_32939)) {
            _32940 = _ms_65791 + _32939;
            if ((object)((uintptr_t)_32940 + (uintptr_t)HIGH_BITS) >= 0){
                _32940 = NewDouble((eudouble)_32940);
            }
        }
        else {
            if (IS_ATOM_INT(_ms_65791)) {
                _32940 = NewDouble((eudouble)_ms_65791 + DBL_PTR(_32939)->dbl);
            }
            else {
                if (IS_ATOM_INT(_32939)) {
                    _32940 = NewDouble(DBL_PTR(_ms_65791)->dbl + (eudouble)_32939);
                }
                else
                _32940 = NewDouble(DBL_PTR(_ms_65791)->dbl + DBL_PTR(_32939)->dbl);
            }
        }
        DeRef(_32939);
        _32939 = NOVALUE;
        _32941 = _i_66161 - 1;
        _32942 = eu_sizeof( 50331649 );
        DeRef(_32942);
        if (_32941 == (short)_32941 && _32942 <= INT15){
            _32943 = _32941 * _32942;
        }
        else{
            _32943 = NewDouble(_32941 * (eudouble)_32942);
        }
        _32941 = NOVALUE;
        _32942 = NOVALUE;
        if (IS_ATOM_INT(_32940) && IS_ATOM_INT(_32943)) {
            _32944 = _32940 + _32943;
            if ((object)((uintptr_t)_32944 + (uintptr_t)HIGH_BITS) >= 0){
                _32944 = NewDouble((eudouble)_32944);
            }
        }
        else {
            if (IS_ATOM_INT(_32940)) {
                _32944 = NewDouble((eudouble)_32940 + DBL_PTR(_32943)->dbl);
            }
            else {
                if (IS_ATOM_INT(_32943)) {
                    _32944 = NewDouble(DBL_PTR(_32940)->dbl + (eudouble)_32943);
                }
                else
                _32944 = NewDouble(DBL_PTR(_32940)->dbl + DBL_PTR(_32943)->dbl);
            }
        }
        DeRef(_32940);
        _32940 = NOVALUE;
        DeRef(_32943);
        _32943 = NOVALUE;
        if (IS_ATOM_INT(_32944)){
            pokeptr_addr = (uintptr_t *)_32944;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32944)->dbl);
        }
        if (IS_ATOM_INT(_fn_65794)) {
            *pokeptr_addr = (uintptr_t)_fn_65794;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_fn_65794)->dbl;
        }
        DeRef(_32944);
        _32944 = NOVALUE;

        /** backend.e:267			poke(fn, other_strings[i])*/
        _2 = (object)SEQ_PTR(_other_strings_65807);
        _32945 = (object)*(((s1_ptr)_2)->base + _i_66161);
        if (IS_ATOM_INT(_fn_65794)){
            poke_addr = (uint8_t *)_fn_65794;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_fn_65794)->dbl);
        }
        if (IS_ATOM_INT(_32945)) {
            *poke_addr = (uint8_t)_32945;
        }
        else if (IS_ATOM(_32945)) {
            *poke_addr = (uint8_t)DBL_PTR(_32945)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32945);
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
        }
        _32945 = NOVALUE;

        /** backend.e:268			fn += length(other_strings[i])*/
        _2 = (object)SEQ_PTR(_other_strings_65807);
        _32946 = (object)*(((s1_ptr)_2)->base + _i_66161);
        if (IS_SEQUENCE(_32946)){
                _32947 = SEQ_PTR(_32946)->length;
        }
        else {
            _32947 = 1;
        }
        _32946 = NOVALUE;
        _0 = _fn_65794;
        if (IS_ATOM_INT(_fn_65794)) {
            _fn_65794 = _fn_65794 + _32947;
            if ((object)((uintptr_t)_fn_65794 + (uintptr_t)HIGH_BITS) >= 0){
                _fn_65794 = NewDouble((eudouble)_fn_65794);
            }
        }
        else {
            _fn_65794 = NewDouble(DBL_PTR(_fn_65794)->dbl + (eudouble)_32947);
        }
        DeRef(_0);
        _32947 = NOVALUE;

        /** backend.e:269			poke(fn, 0)*/
        if (IS_ATOM_INT(_fn_65794)){
            poke_addr = (uint8_t *)_fn_65794;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_fn_65794)->dbl);
        }
        *poke_addr = (uint8_t)0;

        /** backend.e:270			fn += 1*/
        _0 = _fn_65794;
        if (IS_ATOM_INT(_fn_65794)) {
            _fn_65794 = _fn_65794 + 1;
            if (_fn_65794 > MAXINT){
                _fn_65794 = NewDouble((eudouble)_fn_65794);
            }
        }
        else
        _fn_65794 = binary_op(PLUS, 1, _fn_65794);
        DeRef(_0);

        /** backend.e:271		end for*/
        _i_66161 = _i_66161 + 1;
        goto L26; // [1581] 1511
L27: 
        ;
    }

    /** backend.e:273		include_info = alloc_include_matrix()*/
    _0 = _include_info_65799;
    _include_info_65799 = _38alloc_include_matrix();
    DeRef(_0);

    /** backend.e:275		if Argc > 2 then*/
    if (_39Argc_16825 <= 2)
    goto L28; // [1595] 1627

    /** backend.e:276			Argv = {Argv[1]} & Argv[3 .. Argc]*/
    _2 = (object)SEQ_PTR(_39Argv_16826);
    _32952 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32952);
    ((intptr_t*)_2)[1] = _32952;
    _32953 = MAKE_SEQ(_1);
    _32952 = NOVALUE;
    rhs_slice_target = (object_ptr)&_32954;
    RHS_Slice(_39Argv_16826, 3, _39Argc_16825);
    Concat((object_ptr)&_39Argv_16826, _32953, _32954);
    DeRefDS(_32953);
    _32953 = NOVALUE;
    DeRef(_32953);
    _32953 = NOVALUE;
    DeRefDS(_32954);
    _32954 = NOVALUE;
L28: 

    /** backend.e:279		atom external_debugger_ptr = 0*/
    DeRef(_external_debugger_ptr_66190);
    _external_debugger_ptr_66190 = 0;

    /** backend.e:280		if sequence( external_debugger ) then*/
    _32956 = IS_SEQUENCE(_69external_debugger_63977);
    if (_32956 == 0)
    {
        _32956 = NOVALUE;
        goto L29; // [1639] 1652
    }
    else{
        _32956 = NOVALUE;
    }

    /** backend.e:281			external_debugger_ptr = allocate_string( external_debugger )*/
    Ref(_69external_debugger_63977);
    _external_debugger_ptr_66190 = _4allocate_string(_69external_debugger_63977, 0);
L29: 

    /** backend.e:285		machine_proc(65, */
    _32958 = _51get_switches();
    _32960 = CRoutineId(1465, 38, _32959);
    _32962 = CRoutineId(1465, 38, _32961);
    _32964 = CRoutineId(1465, 38, _32963);
    _32966 = CRoutineId(1465, 38, _32965);
    _32968 = CRoutineId(1465, 38, _32967);
    _32970 = CRoutineId(1465, 38, _32969);
    _32972 = CRoutineId(1465, 38, _32971);
    _1 = NewS1(16);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_st_65789);
    ((intptr_t*)_2)[1] = _st_65789;
    Ref(_sl_65792);
    ((intptr_t*)_2)[2] = _sl_65792;
    Ref(_ms_65791);
    ((intptr_t*)_2)[3] = _ms_65791;
    Ref(_lit_65793);
    ((intptr_t*)_2)[4] = _lit_65793;
    Ref(_include_info_65799);
    ((intptr_t*)_2)[5] = _include_info_65799;
    ((intptr_t*)_2)[6] = _32958;
    RefDS(_39Argv_16826);
    ((intptr_t*)_2)[7] = _39Argv_16826;
    ((intptr_t*)_2)[8] = _32960;
    ((intptr_t*)_2)[9] = _32962;
    ((intptr_t*)_2)[10] = _32964;
    ((intptr_t*)_2)[11] = _32966;
    Ref(_external_debugger_ptr_66190);
    ((intptr_t*)_2)[12] = _external_debugger_ptr_66190;
    ((intptr_t*)_2)[13] = _32968;
    ((intptr_t*)_2)[14] = _32970;
    ((intptr_t*)_2)[15] = _32972;
    ((intptr_t*)_2)[16] = _39trace_lines_63876;
    _32973 = MAKE_SEQ(_1);
    _32972 = NOVALUE;
    _32970 = NOVALUE;
    _32968 = NOVALUE;
    _32966 = NOVALUE;
    _32964 = NOVALUE;
    _32962 = NOVALUE;
    _32960 = NOVALUE;
    _32958 = NOVALUE;
    machine(65, _32973);
    DeRefDS(_32973);
    _32973 = NOVALUE;

    /** backend.e:305	end procedure*/
    DeRef(_addr_65788);
    DeRef(_st_65789);
    DeRef(_nm_65790);
    DeRef(_ms_65791);
    DeRef(_sl_65792);
    DeRef(_lit_65793);
    DeRef(_fn_65794);
    DeRef(_e_addr_65796);
    DeRef(_l_addr_65797);
    DeRef(_include_info_65799);
    DeRef(_lit_string_65806);
    DeRef(_other_strings_65807);
    DeRef(_eentry_65808);
    DeRef(_external_debugger_ptr_66190);
    DeRef(_32843);
    _32843 = NOVALUE;
    _32780 = NOVALUE;
    DeRef(_32901);
    _32901 = NOVALUE;
    _32801 = NOVALUE;
    DeRef(_32791);
    _32791 = NOVALUE;
    DeRef(_32772);
    _32772 = NOVALUE;
    DeRef(_32908);
    _32908 = NOVALUE;
    DeRef(_32916);
    _32916 = NOVALUE;
    DeRef(_32892);
    _32892 = NOVALUE;
    _32914 = NOVALUE;
    DeRef(_32895);
    _32895 = NOVALUE;
    _32809 = NOVALUE;
    _32924 = NOVALUE;
    DeRef(_32794);
    _32794 = NOVALUE;
    DeRef(_32840);
    _32840 = NOVALUE;
    _32909 = NOVALUE;
    DeRef(_32877);
    _32877 = NOVALUE;
    _32946 = NOVALUE;
    DeRef(_32913);
    _32913 = NOVALUE;
    DeRef(_32846);
    _32846 = NOVALUE;
    _32796 = NOVALUE;
    return;
    ;
}


object _38alloc_include_matrix()
{
    object _include_info_66222 = NOVALUE;
    object _include_node_66231 = NOVALUE;
    object _include_array_66239 = NOVALUE;
    object _32989 = NOVALUE;
    object _32988 = NOVALUE;
    object _32987 = NOVALUE;
    object _32985 = NOVALUE;
    object _32984 = NOVALUE;
    object _32983 = NOVALUE;
    object _32981 = NOVALUE;
    object _32979 = NOVALUE;
    object _32978 = NOVALUE;
    object _32977 = NOVALUE;
    object _32976 = NOVALUE;
    object _0, _1, _2;
    

    /** backend.e:309		atom include_info = allocate( sizeof( C_POINTER ) * (1 + length( include_matrix )) ) */
    _32976 = eu_sizeof( 50331649 );
    if (IS_SEQUENCE(_36include_matrix_15411)){
            _32977 = SEQ_PTR(_36include_matrix_15411)->length;
    }
    else {
        _32977 = 1;
    }
    _32978 = _32977 + 1;
    _32977 = NOVALUE;
    if (_32976 == (short)_32976 && _32978 <= INT15){
        _32979 = _32976 * _32978;
    }
    else{
        _32979 = NewDouble(_32976 * (eudouble)_32978);
    }
    _32976 = NOVALUE;
    _32978 = NOVALUE;
    _0 = _include_info_66222;
    _include_info_66222 = _4allocate(_32979, 0);
    DeRef(_0);
    _32979 = NOVALUE;

    /** backend.e:310		atom include_node = include_info*/
    Ref(_include_info_66222);
    DeRef(_include_node_66231);
    _include_node_66231 = _include_info_66222;

    /** backend.e:311		poke_pointer( include_info, 0 )*/
    if (IS_ATOM_INT(_include_info_66222)){
        pokeptr_addr = (uintptr_t *)_include_info_66222;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_include_info_66222)->dbl);
    }
    *pokeptr_addr = (uintptr_t)0;

    /** backend.e:312		include_node += sizeof( C_POINTER )*/
    _32981 = eu_sizeof( 50331649 );
    _0 = _include_node_66231;
    if (IS_ATOM_INT(_include_node_66231)) {
        _include_node_66231 = _include_node_66231 + _32981;
        if ((object)((uintptr_t)_include_node_66231 + (uintptr_t)HIGH_BITS) >= 0){
            _include_node_66231 = NewDouble((eudouble)_include_node_66231);
        }
    }
    else {
        _include_node_66231 = NewDouble(DBL_PTR(_include_node_66231)->dbl + (eudouble)_32981);
    }
    DeRef(_0);
    _32981 = NOVALUE;

    /** backend.e:314		for i = 1 to length( include_matrix ) do*/
    if (IS_SEQUENCE(_36include_matrix_15411)){
            _32983 = SEQ_PTR(_36include_matrix_15411)->length;
    }
    else {
        _32983 = 1;
    }
    {
        object _i_66236;
        _i_66236 = 1;
L1: 
        if (_i_66236 > _32983){
            goto L2; // [54] 117
        }

        /** backend.e:315			atom include_array = allocate( 1 + length( include_matrix ) )*/
        if (IS_SEQUENCE(_36include_matrix_15411)){
                _32984 = SEQ_PTR(_36include_matrix_15411)->length;
        }
        else {
            _32984 = 1;
        }
        _32985 = _32984 + 1;
        _32984 = NOVALUE;
        _0 = _include_array_66239;
        _include_array_66239 = _4allocate(_32985, 0);
        DeRef(_0);
        _32985 = NOVALUE;

        /** backend.e:316			poke( include_array, i & include_matrix[i] )*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _32987 = (object)*(((s1_ptr)_2)->base + _i_66236);
        if (IS_SEQUENCE(_i_66236) && IS_ATOM(_32987)) {
        }
        else if (IS_ATOM(_i_66236) && IS_SEQUENCE(_32987)) {
            Prepend(&_32988, _32987, _i_66236);
        }
        else {
            Concat((object_ptr)&_32988, _i_66236, _32987);
        }
        _32987 = NOVALUE;
        if (IS_ATOM_INT(_include_array_66239)){
            poke_addr = (uint8_t *)_include_array_66239;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_include_array_66239)->dbl);
        }
        _1 = (object)SEQ_PTR(_32988);
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
        DeRefDS(_32988);
        _32988 = NOVALUE;

        /** backend.e:317			poke_pointer( include_node, include_array )*/
        if (IS_ATOM_INT(_include_node_66231)){
            pokeptr_addr = (uintptr_t *)_include_node_66231;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_include_node_66231)->dbl);
        }
        if (IS_ATOM_INT(_include_array_66239)) {
            *pokeptr_addr = (uintptr_t)_include_array_66239;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_include_array_66239)->dbl;
        }

        /** backend.e:319			include_node += sizeof( C_POINTER )*/
        _32989 = eu_sizeof( 50331649 );
        DeRef(_32989);
        _0 = _include_node_66231;
        if (IS_ATOM_INT(_include_node_66231)) {
            _include_node_66231 = _include_node_66231 + _32989;
            if ((object)((uintptr_t)_include_node_66231 + (uintptr_t)HIGH_BITS) >= 0){
                _include_node_66231 = NewDouble((eudouble)_include_node_66231);
            }
        }
        else {
            _include_node_66231 = NewDouble(DBL_PTR(_include_node_66231)->dbl + (eudouble)_32989);
        }
        DeRef(_0);
        _32989 = NOVALUE;
        DeRef(_include_array_66239);
        _include_array_66239 = NOVALUE;

        /** backend.e:320		end for*/
        _i_66236 = _i_66236 + 1;
        goto L1; // [112] 61
L2: 
        ;
    }

    /** backend.e:321		return include_info*/
    DeRef(_include_node_66231);
    return _include_info_66222;
    ;
}


object _38alloc_symbol_names(object _st_66253, object _lit_66254, object _string_size_66255)
{
    object _nm_66256 = NOVALUE;
    object _addr_66260 = NOVALUE;
    object _entry_addr_66261 = NOVALUE;
    object _no_name_66262 = NOVALUE;
    object _eentry_66270 = NOVALUE;
    object _33020 = NOVALUE;
    object _33019 = NOVALUE;
    object _33017 = NOVALUE;
    object _33016 = NOVALUE;
    object _33015 = NOVALUE;
    object _33014 = NOVALUE;
    object _33013 = NOVALUE;
    object _33011 = NOVALUE;
    object _33010 = NOVALUE;
    object _33009 = NOVALUE;
    object _33006 = NOVALUE;
    object _33005 = NOVALUE;
    object _33004 = NOVALUE;
    object _33003 = NOVALUE;
    object _33002 = NOVALUE;
    object _33001 = NOVALUE;
    object _32999 = NOVALUE;
    object _32998 = NOVALUE;
    object _32995 = NOVALUE;
    object _32991 = NOVALUE;
    object _0, _1, _2;
    

    /** backend.e:326		atom nm = allocate(1+string_size)  */
    _32991 = _string_size_66255 + 1;
    if (_32991 > MAXINT){
        _32991 = NewDouble((eudouble)_32991);
    }
    _0 = _nm_66256;
    _nm_66256 = _4allocate(_32991, 0);
    DeRef(_0);
    _32991 = NOVALUE;

    /** backend.e:327		atom addr = nm*/
    Ref(_nm_66256);
    DeRef(_addr_66260);
    _addr_66260 = _nm_66256;

    /** backend.e:328		atom entry_addr = st*/
    Ref(_st_66253);
    DeRef(_entry_addr_66261);
    _entry_addr_66261 = _st_66253;

    /** backend.e:329		atom no_name = allocate_string("<no-name>")*/
    RefDS(_32993);
    _0 = _no_name_66262;
    _no_name_66262 = _4allocate_string(_32993, 0);
    DeRef(_0);

    /** backend.e:330		for i = 1 to length(SymTab) do*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _32995 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _32995 = 1;
    }
    {
        object _i_66267;
        _i_66267 = 1;
L1: 
        if (_i_66267 > _32995){
            goto L2; // [38] 246
        }

        /** backend.e:331			object eentry = SymTab[i]*/
        DeRef(_eentry_66270);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _eentry_66270 = (object)*(((s1_ptr)_2)->base + _i_66267);
        Ref(_eentry_66270);

        /** backend.e:332			entry_addr += ST_ENTRY_SIZE*/
        _0 = _entry_addr_66261;
        if (IS_ATOM_INT(_entry_addr_66261)) {
            _entry_addr_66261 = _entry_addr_66261 + _74ST_ENTRY_SIZE_65709;
            if ((object)((uintptr_t)_entry_addr_66261 + (uintptr_t)HIGH_BITS) >= 0){
                _entry_addr_66261 = NewDouble((eudouble)_entry_addr_66261);
            }
        }
        else {
            _entry_addr_66261 = NewDouble(DBL_PTR(_entry_addr_66261)->dbl + (eudouble)_74ST_ENTRY_SIZE_65709);
        }
        DeRef(_0);

        /** backend.e:333			if sequence(eentry) then */
        _32998 = IS_SEQUENCE(_eentry_66270);
        if (_32998 == 0)
        {
            _32998 = NOVALUE;
            goto L3; // [66] 237
        }
        else{
            _32998 = NOVALUE;
        }

        /** backend.e:334				if length(eentry) >= S_NAME then*/
        if (IS_SEQUENCE(_eentry_66270)){
                _32999 = SEQ_PTR(_eentry_66270)->length;
        }
        else {
            _32999 = 1;
        }
        if (binary_op_a(LESS, _32999, _39S_NAME_16470)){
            _32999 = NOVALUE;
            goto L4; // [76] 208
        }
        _32999 = NOVALUE;

        /** backend.e:335					if sequence(eentry[S_NAME]) then*/
        _2 = (object)SEQ_PTR(_eentry_66270);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33001 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33001 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _33002 = IS_SEQUENCE(_33001);
        _33001 = NOVALUE;
        if (_33002 == 0)
        {
            _33002 = NOVALUE;
            goto L5; // [91] 145
        }
        else{
            _33002 = NOVALUE;
        }

        /** backend.e:337						poke_pointer(entry_addr + ST_NAME, addr) */
        if (IS_ATOM_INT(_entry_addr_66261) && IS_ATOM_INT(_74ST_NAME_65670)) {
            _33003 = _entry_addr_66261 + _74ST_NAME_65670;
            if ((object)((uintptr_t)_33003 + (uintptr_t)HIGH_BITS) >= 0){
                _33003 = NewDouble((eudouble)_33003);
            }
        }
        else {
            _33003 = binary_op(PLUS, _entry_addr_66261, _74ST_NAME_65670);
        }
        if (IS_ATOM_INT(_33003)){
            pokeptr_addr = (uintptr_t *)_33003;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33003)->dbl);
        }
        if (IS_ATOM_INT(_addr_66260)) {
            *pokeptr_addr = (uintptr_t)_addr_66260;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_addr_66260)->dbl;
        }
        DeRef(_33003);
        _33003 = NOVALUE;

        /** backend.e:339						poke(addr, eentry[S_NAME])*/
        _2 = (object)SEQ_PTR(_eentry_66270);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33004 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33004 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        if (IS_ATOM_INT(_addr_66260)){
            poke_addr = (uint8_t *)_addr_66260;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_addr_66260)->dbl);
        }
        if (IS_ATOM_INT(_33004)) {
            *poke_addr = (uint8_t)_33004;
        }
        else if (IS_ATOM(_33004)) {
            *poke_addr = (uint8_t)DBL_PTR(_33004)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_33004);
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
        }
        _33004 = NOVALUE;

        /** backend.e:340						addr += length(eentry[S_NAME])*/
        _2 = (object)SEQ_PTR(_eentry_66270);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33005 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33005 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        if (IS_SEQUENCE(_33005)){
                _33006 = SEQ_PTR(_33005)->length;
        }
        else {
            _33006 = 1;
        }
        _33005 = NOVALUE;
        _0 = _addr_66260;
        if (IS_ATOM_INT(_addr_66260)) {
            _addr_66260 = _addr_66260 + _33006;
            if ((object)((uintptr_t)_addr_66260 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_66260 = NewDouble((eudouble)_addr_66260);
            }
        }
        else {
            _addr_66260 = NewDouble(DBL_PTR(_addr_66260)->dbl + (eudouble)_33006);
        }
        DeRef(_0);
        _33006 = NOVALUE;

        /** backend.e:341						poke(addr, 0)  -- 0-delimited string*/
        if (IS_ATOM_INT(_addr_66260)){
            poke_addr = (uint8_t *)_addr_66260;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_addr_66260)->dbl);
        }
        *poke_addr = (uint8_t)0;

        /** backend.e:342						addr += 1*/
        _0 = _addr_66260;
        if (IS_ATOM_INT(_addr_66260)) {
            _addr_66260 = _addr_66260 + 1;
            if (_addr_66260 > MAXINT){
                _addr_66260 = NewDouble((eudouble)_addr_66260);
            }
        }
        else
        _addr_66260 = binary_op(PLUS, 1, _addr_66260);
        DeRef(_0);
        goto L6; // [142] 157
L5: 

        /** backend.e:346						poke_pointer(entry_addr + ST_NAME, no_name)*/
        if (IS_ATOM_INT(_entry_addr_66261) && IS_ATOM_INT(_74ST_NAME_65670)) {
            _33009 = _entry_addr_66261 + _74ST_NAME_65670;
            if ((object)((uintptr_t)_33009 + (uintptr_t)HIGH_BITS) >= 0){
                _33009 = NewDouble((eudouble)_33009);
            }
        }
        else {
            _33009 = binary_op(PLUS, _entry_addr_66261, _74ST_NAME_65670);
        }
        if (IS_ATOM_INT(_33009)){
            pokeptr_addr = (uintptr_t *)_33009;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33009)->dbl);
        }
        if (IS_ATOM_INT(_no_name_66262)) {
            *pokeptr_addr = (uintptr_t)_no_name_66262;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_no_name_66262)->dbl;
        }
        DeRef(_33009);
        _33009 = NOVALUE;
L6: 

        /** backend.e:349					if eentry[S_TOKEN] = NAMESPACE or compare( eentry[S_OBJ], NOVALUE ) then*/
        _2 = (object)SEQ_PTR(_eentry_66270);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _33010 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _33010 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        if (IS_ATOM_INT(_33010)) {
            _33011 = (_33010 == 523);
        }
        else {
            _33011 = binary_op(EQUALS, _33010, 523);
        }
        _33010 = NOVALUE;
        if (IS_ATOM_INT(_33011)) {
            if (_33011 != 0) {
                goto L7; // [171] 192
            }
        }
        else {
            if (DBL_PTR(_33011)->dbl != 0.0) {
                goto L7; // [171] 192
            }
        }
        _2 = (object)SEQ_PTR(_eentry_66270);
        _33013 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_33013) && IS_ATOM_INT(_39NOVALUE_16670)){
            _33014 = (_33013 < _39NOVALUE_16670) ? -1 : (_33013 > _39NOVALUE_16670);
        }
        else{
            _33014 = compare(_33013, _39NOVALUE_16670);
        }
        _33013 = NOVALUE;
        if (_33014 == 0)
        {
            _33014 = NOVALUE;
            goto L8; // [188] 236
        }
        else{
            _33014 = NOVALUE;
        }
L7: 

        /** backend.e:351						poke_pointer(entry_addr, peek_pointer( entry_addr ) + lit )*/
        if (IS_ATOM_INT(_entry_addr_66261)) {
            _33015 = *(intptr_t *)_entry_addr_66261;
            if ((uintptr_t)_33015 > (uintptr_t)MAXINT){
                _33015 = NewDouble((eudouble)(uintptr_t)_33015);
            }
        }
        else {
            _33015 = *(uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66261)->dbl);
            if ((uintptr_t)_33015 > (uintptr_t)MAXINT){
                _33015 = NewDouble((eudouble)(uintptr_t)_33015);
            }
        }
        if (IS_ATOM_INT(_33015) && IS_ATOM_INT(_lit_66254)) {
            _33016 = _33015 + _lit_66254;
            if ((object)((uintptr_t)_33016 + (uintptr_t)HIGH_BITS) >= 0){
                _33016 = NewDouble((eudouble)_33016);
            }
        }
        else {
            if (IS_ATOM_INT(_33015)) {
                _33016 = NewDouble((eudouble)_33015 + DBL_PTR(_lit_66254)->dbl);
            }
            else {
                if (IS_ATOM_INT(_lit_66254)) {
                    _33016 = NewDouble(DBL_PTR(_33015)->dbl + (eudouble)_lit_66254);
                }
                else
                _33016 = NewDouble(DBL_PTR(_33015)->dbl + DBL_PTR(_lit_66254)->dbl);
            }
        }
        DeRef(_33015);
        _33015 = NOVALUE;
        if (IS_ATOM_INT(_entry_addr_66261)){
            pokeptr_addr = (uintptr_t *)_entry_addr_66261;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66261)->dbl);
        }
        if (IS_ATOM_INT(_33016)) {
            *pokeptr_addr = (uintptr_t)_33016;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_33016)->dbl;
        }
        DeRef(_33016);
        _33016 = NOVALUE;
        goto L8; // [205] 236
L4: 

        /** backend.e:353				elsif eentry[S_MODE] = M_CONSTANT then*/
        _2 = (object)SEQ_PTR(_eentry_66270);
        _33017 = (object)*(((s1_ptr)_2)->base + 3);
        if (binary_op_a(NOTEQ, _33017, 2)){
            _33017 = NOVALUE;
            goto L9; // [218] 235
        }
        _33017 = NOVALUE;

        /** backend.e:355					poke_pointer(entry_addr, peek_pointer( entry_addr ) + lit) */
        if (IS_ATOM_INT(_entry_addr_66261)) {
            _33019 = *(intptr_t *)_entry_addr_66261;
            if ((uintptr_t)_33019 > (uintptr_t)MAXINT){
                _33019 = NewDouble((eudouble)(uintptr_t)_33019);
            }
        }
        else {
            _33019 = *(uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66261)->dbl);
            if ((uintptr_t)_33019 > (uintptr_t)MAXINT){
                _33019 = NewDouble((eudouble)(uintptr_t)_33019);
            }
        }
        if (IS_ATOM_INT(_33019) && IS_ATOM_INT(_lit_66254)) {
            _33020 = _33019 + _lit_66254;
            if ((object)((uintptr_t)_33020 + (uintptr_t)HIGH_BITS) >= 0){
                _33020 = NewDouble((eudouble)_33020);
            }
        }
        else {
            if (IS_ATOM_INT(_33019)) {
                _33020 = NewDouble((eudouble)_33019 + DBL_PTR(_lit_66254)->dbl);
            }
            else {
                if (IS_ATOM_INT(_lit_66254)) {
                    _33020 = NewDouble(DBL_PTR(_33019)->dbl + (eudouble)_lit_66254);
                }
                else
                _33020 = NewDouble(DBL_PTR(_33019)->dbl + DBL_PTR(_lit_66254)->dbl);
            }
        }
        DeRef(_33019);
        _33019 = NOVALUE;
        if (IS_ATOM_INT(_entry_addr_66261)){
            pokeptr_addr = (uintptr_t *)_entry_addr_66261;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66261)->dbl);
        }
        if (IS_ATOM_INT(_33020)) {
            *pokeptr_addr = (uintptr_t)_33020;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_33020)->dbl;
        }
        DeRef(_33020);
        _33020 = NOVALUE;
L9: 
L8: 
L3: 
        DeRef(_eentry_66270);
        _eentry_66270 = NOVALUE;

        /** backend.e:359		end for*/
        _i_66267 = _i_66267 + 1;
        goto L1; // [241] 45
L2: 
        ;
    }

    /** backend.e:360		return nm*/
    DeRef(_st_66253);
    DeRef(_lit_66254);
    DeRef(_addr_66260);
    DeRef(_entry_addr_66261);
    DeRef(_no_name_66262);
    _33005 = NOVALUE;
    DeRef(_33011);
    _33011 = NOVALUE;
    return _nm_66256;
    ;
}



// 0xE0240525
