// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _68InitBackEnd(object _x_65733)
{
// skipping _32734  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitBackEnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_65733)) {
        _1 = (object)(DBL_PTR(_x_65733)->dbl);
        DeRefDS(_x_65733);
        _x_65733 = _1;
    }
    // SubProg InitBackEnd pc: 3 op: STARTLINE (58)

    /** backend.e:31		if not BIND then*/
    // SubProg InitBackEnd pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 7 op: NOT_IFW (108)
    if (_34BIND_14816 != 0)
    goto L1; // [7] 15
    // SubProg InitBackEnd pc: 10 op: STARTLINE (58)

    /** backend.e:32			intoptions()	*/
    // SubProg InitBackEnd pc: 12 op: PROC (27)
    _67intoptions();
    // SubProg InitBackEnd pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 65731 op: 159
    // SubProg InitBackEnd pc: 15 op: STARTLINE (58)

    /** backend.e:35	end procedure*/
    // SubProg InitBackEnd pc: 17 op: RETURNP (29)

// Exiting block BLOCK: InitBackEnd
    return;
    // SubProg InitBackEnd pc: 20 op: BADRETURNF (43)
    ;
}


object _68get_next(object _sym_65746)
{
// skipping _32756  name type: 0
    object _32755 = NOVALUE; // 65783 32755
    object _32754 = NOVALUE; // 65781 32754
    object _32753 = NOVALUE; // 65779 32753
    object _32752 = NOVALUE; // 65777 32752
// skipping _32751  name type: 0
// skipping _32750  name type: 0
    object _32749 = NOVALUE; // 65769 32749
    object _32748 = NOVALUE; // 65767 32748
    object _32747 = NOVALUE; // 65766 32747
    object _32746 = NOVALUE; // 65763 32746
    object _32745 = NOVALUE; // 65762 32745
    object _32744 = NOVALUE; // 65760 32744
    object _32743 = NOVALUE; // 65759 32743
    object _32742 = NOVALUE; // 65757 32742
    object _32741 = NOVALUE; // 65755 32741
    object _32740 = NOVALUE; // 65754 32740
    object _32739 = NOVALUE; // 65753 32739
    object _32738 = NOVALUE; // 65751 32738
    object _32737 = NOVALUE; // 65749 32737
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_next pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_65746)) {
        _1 = (object)(DBL_PTR(_sym_65746)->dbl);
        DeRefDS(_sym_65746);
        _sym_65746 = _1;
    }
    // SubProg get_next pc: 3 op: STARTLINE (58)

    /** backend.e:42		if get_backend() then*/
    // SubProg get_next pc: 5 op: PROC (27)
    _32737 = _2get_backend();
    // SubProg get_next pc: 8 op: IF (20)
    if (_32737 == 0) {
        DeRef(_32737);
        _32737 = NOVALUE;
        goto L1; // [8] 120
    }
    else {
        if (!IS_ATOM_INT(_32737) && DBL_PTR(_32737)->dbl == 0.0){
            DeRef(_32737);
            _32737 = NOVALUE;
            goto L1; // [8] 120
        }
        DeRef(_32737);
        _32737 = NOVALUE;
    }
    DeRef(_32737);
    _32737 = NOVALUE;
    // SubProg get_next pc: 11 op: STARTLINE (58)

    /** backend.e:43			while sym and */
    // SubProg get_next pc: 13 op: NOP2 (110)
    // SubProg get_next pc: 15 op: NOPWHILE (158)
L2: // addr: 16 pc: 15 sub: 65743 op: 158
    // SubProg get_next pc: 16 op: SC1_AND_IF (146)
    if (_sym_65746 == 0) {
        goto L3; // [16] 165
    }
    // SubProg get_next pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _32739 = (object)*(((s1_ptr)_2)->base + _sym_65746);
    // SubProg get_next pc: 26 op: IS_A_SEQUENCE (68)
    _32740 = IS_SEQUENCE(_32739);
    _32739 = NOVALUE;
    // SubProg get_next pc: 29 op: SC1_AND (141)
    if (_32740 == 0) {
        _32741 = 0;
        goto L4; // [29] 47
    }
    // SubProg get_next pc: 33 op: PROC (27)
    _32742 = _53sym_scope(_sym_65746);
    // SubProg get_next pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 39 op: EQUALS (3)
    if (IS_ATOM_INT(_32742)) {
        _32743 = (_32742 == 9);
    }
    else {
        _32743 = binary_op(EQUALS, _32742, 9);
    }
    DeRef(_32742);
    _32742 = NOVALUE;
    // SubProg get_next pc: 43 op: SC2_AND (142)
    if (IS_ATOM_INT(_32743))
    _32741 = (_32743 != 0);
    else
    _32741 = DBL_PTR(_32743)->dbl != 0.0;
    // SubProg get_next pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 65743 op: 159
    // SubProg get_next pc: 47 op: SC1_OR (143)
    if (_32741 != 0) {
        DeRef(_32744);
        _32744 = 1;
        goto L5; // [47] 64
    }
    // SubProg get_next pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 53 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _32745 = (object)*(((s1_ptr)_2)->base + _sym_65746);
    // SubProg get_next pc: 57 op: IS_AN_ATOM (67)
    _32746 = IS_ATOM(_32745);
    _32745 = NOVALUE;
    // SubProg get_next pc: 60 op: SC2_OR (144)
    _32744 = (_32746 != 0);
    // SubProg get_next pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 65743 op: 159
    // SubProg get_next pc: 64 op: NOP1 (159)
    // SubProg get_next pc: 65 op: WHILE (47)
    if (_32744 == 0)
    {
        _32744 = NOVALUE;
        goto L3; // [65] 165
    }
    else{
        _32744 = NOVALUE;
    }
    // SubProg get_next pc: 68 op: STARTLINE (58)

    /** backend.e:45				if sequence(SymTab[sym]) then*/
    // SubProg get_next pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _32747 = (object)*(((s1_ptr)_2)->base + _sym_65746);
    // SubProg get_next pc: 76 op: IS_A_SEQUENCE (68)
    _32748 = IS_SEQUENCE(_32747);
    _32747 = NOVALUE;
    // SubProg get_next pc: 79 op: IF (20)
    if (_32748 == 0)
    {
        _32748 = NOVALUE;
        goto L6; // [79] 101
    }
    else{
        _32748 = NOVALUE;
    }
    // SubProg get_next pc: 82 op: STARTLINE (58)

    /** backend.e:46					sym = SymTab[sym][S_NEXT]*/
    // SubProg get_next pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _32749 = (object)*(((s1_ptr)_2)->base + _sym_65746);
    // SubProg get_next pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 92 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32749);
    _sym_65746 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_65746)){
        _sym_65746 = (object)DBL_PTR(_sym_65746)->dbl;
    }
    _32749 = NOVALUE;
    // SubProg get_next pc: 98 op: ELSE (23)
    goto L2; // [98] 16
    // SubProg get_next pc: 100 op: NOP1 (159)
L6: // addr: 101 pc: 100 sub: 65743 op: 159
    // SubProg get_next pc: 101 op: STARTLINE (58)

    /** backend.e:48					sym = SymTab[sym]*/
    // SubProg get_next pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _sym_65746 = (object)*(((s1_ptr)_2)->base + _sym_65746);
    if (!IS_ATOM_INT(_sym_65746)){
        _sym_65746 = (object)DBL_PTR(_sym_65746)->dbl;
    }
    // SubProg get_next pc: 111 op: NOP1 (159)
    // SubProg get_next pc: 112 op: STARTLINE (58)

    /** backend.e:50			end while*/
    // SubProg get_next pc: 114 op: ENDWHILE (22)
    goto L2; // [114] 16
    // SubProg get_next pc: 116 op: NOP1 (159)
    // SubProg get_next pc: 117 op: ELSE (23)
    goto L3; // [117] 165
    // SubProg get_next pc: 119 op: NOP1 (159)
L1: // addr: 120 pc: 119 sub: 65743 op: 159
    // SubProg get_next pc: 120 op: STARTLINE (58)

    /** backend.e:52			while sym and sym_scope( sym ) = SC_UNDEFINED do*/
    // SubProg get_next pc: 122 op: NOP2 (110)
    // SubProg get_next pc: 124 op: NOPWHILE (158)
L7: // addr: 125 pc: 124 sub: 65743 op: 158
    // SubProg get_next pc: 125 op: SC1_AND_IF (146)
    if (_sym_65746 == 0) {
        goto L8; // [125] 164
    }
    // SubProg get_next pc: 129 op: PROC (27)
    _32753 = _53sym_scope(_sym_65746);
    // SubProg get_next pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 135 op: EQUALS (3)
    if (IS_ATOM_INT(_32753)) {
        _32754 = (_32753 == 9);
    }
    else {
        _32754 = binary_op(EQUALS, _32753, 9);
    }
    DeRef(_32753);
    _32753 = NOVALUE;
    // SubProg get_next pc: 139 op: NOP1 (159)
    // SubProg get_next pc: 140 op: WHILE (47)
    if (_32754 <= 0) {
        if (_32754 == 0) {
            DeRef(_32754);
            _32754 = NOVALUE;
            goto L8; // [140] 164
        }
        else {
            if (!IS_ATOM_INT(_32754) && DBL_PTR(_32754)->dbl == 0.0){
                DeRef(_32754);
                _32754 = NOVALUE;
                goto L8; // [140] 164
            }
            DeRef(_32754);
            _32754 = NOVALUE;
        }
    }
    DeRef(_32754);
    _32754 = NOVALUE;
    // SubProg get_next pc: 143 op: STARTLINE (58)

    /** backend.e:53				sym = SymTab[sym][S_NEXT]*/
    // SubProg get_next pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _32755 = (object)*(((s1_ptr)_2)->base + _sym_65746);
    // SubProg get_next pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32755);
    _sym_65746 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_65746)){
        _sym_65746 = (object)DBL_PTR(_sym_65746)->dbl;
    }
    _32755 = NOVALUE;
    // SubProg get_next pc: 159 op: STARTLINE (58)

    /** backend.e:55			end while*/
    // SubProg get_next pc: 161 op: ENDWHILE (22)
    goto L7; // [161] 125
    // SubProg get_next pc: 163 op: NOP1 (159)
L8: // addr: 164 pc: 163 sub: 65743 op: 159
    // SubProg get_next pc: 164 op: NOP1 (159)
L3: // addr: 165 pc: 164 sub: 65743 op: 159
    // SubProg get_next pc: 165 op: STARTLINE (58)

    /** backend.e:57		return sym*/
    // SubProg get_next pc: 167 op: RETURNF (28)

// Exiting block BLOCK: get_next
    DeRef(_32743);
    _32743 = NOVALUE;
    return _sym_65746;
    // SubProg get_next pc: 171 op: BADRETURNF (43)
    ;
}


void _68BackEnd(object _il_file_65788)
{
    object _addr_65789 = NOVALUE;
    object _st_65790 = NOVALUE;
    object _nm_65791 = NOVALUE;
    object _ms_65792 = NOVALUE;
    object _sl_65793 = NOVALUE;
    object _lit_65794 = NOVALUE;
    object _fn_65795 = NOVALUE;
    object _entry_addr_65796 = NOVALUE;
    object _e_addr_65797 = NOVALUE;
    object _l_addr_65798 = NOVALUE;
    object _no_name_65799 = NOVALUE;
    object _include_info_65800 = NOVALUE;
    object _include_node_65801 = NOVALUE;
    object _include_array_65802 = NOVALUE;
    object _string_size_65803 = NOVALUE;
    object _short_65804 = NOVALUE;
    object _size_65805 = NOVALUE;
    object _repcount_65806 = NOVALUE;
    object _lit_string_65807 = NOVALUE;
    object _other_strings_65808 = NOVALUE;
    object _eentry_65809 = NOVALUE;
    object _started_file_66070 = NOVALUE;
    object _external_debugger_ptr_66191 = NOVALUE;
    object _32981 = NOVALUE; // 66216 32981
    object _32980 = NOVALUE; // 66214 32980
    object _32978 = NOVALUE; // 66212 32978
    object _32976 = NOVALUE; // 66210 32976
    object _32974 = NOVALUE; // 66208 32974
    object _32972 = NOVALUE; // 66206 32972
    object _32970 = NOVALUE; // 66204 32970
    object _32968 = NOVALUE; // 66202 32968
    object _32966 = NOVALUE; // 66199 32966
// skipping _32965  name type: 0
    object _32964 = NOVALUE; // 66194 32964
// skipping _32963  name type: 0
    object _32962 = NOVALUE; // 66189 32962
    object _32961 = NOVALUE; // 66186 32961
    object _32960 = NOVALUE; // 66185 32960
// skipping _32959  name type: 0
// skipping _32958  name type: 0
// skipping _32957  name type: 0
// skipping _32956  name type: 0
    object _32955 = NOVALUE; // 66175 32955
    object _32954 = NOVALUE; // 66174 32954
    object _32953 = NOVALUE; // 66173 32953
    object _32952 = NOVALUE; // 66172 32952
    object _32951 = NOVALUE; // 66171 32951
    object _32950 = NOVALUE; // 66170 32950
    object _32949 = NOVALUE; // 66168 32949
    object _32948 = NOVALUE; // 66167 32948
    object _32947 = NOVALUE; // 66166 32947
    object _32946 = NOVALUE; // 66165 32946
    object _32945 = NOVALUE; // 66163 32945
// skipping _32944  name type: 0
    object _32943 = NOVALUE; // 66158 32943
    object _32942 = NOVALUE; // 66157 32942
    object _32941 = NOVALUE; // 66155 32941
// skipping _32940  name type: 0
    object _32939 = NOVALUE; // 66147 32939
    object _32938 = NOVALUE; // 66146 32938
    object _32937 = NOVALUE; // 66145 32937
    object _32936 = NOVALUE; // 66144 32936
// skipping _32935  name type: 0
    object _32934 = NOVALUE; // 66140 32934
    object _32933 = NOVALUE; // 66139 32933
    object _32932 = NOVALUE; // 66138 32932
    object _32931 = NOVALUE; // 66137 32931
// skipping _32930  name type: 0
    object _32929 = NOVALUE; // 66132 32929
// skipping _32928  name type: 0
    object _32927 = NOVALUE; // 66127 32927
    object _32926 = NOVALUE; // 66124 32926
    object _32925 = NOVALUE; // 66123 32925
    object _32924 = NOVALUE; // 66122 32924
// skipping _32923  name type: 0
    object _32922 = NOVALUE; // 66118 32922
    object _32921 = NOVALUE; // 66117 32921
    object _32920 = NOVALUE; // 66115 32920
    object _32919 = NOVALUE; // 66112 32919
    object _32918 = NOVALUE; // 66110 32918
    object _32917 = NOVALUE; // 66109 32917
    object _32916 = NOVALUE; // 66108 32916
    object _32915 = NOVALUE; // 66105 32915
    object _32914 = NOVALUE; // 66103 32914
    object _32913 = NOVALUE; // 66101 32913
    object _32912 = NOVALUE; // 66100 32912
    object _32911 = NOVALUE; // 66099 32911
    object _32910 = NOVALUE; // 66097 32910
    object _32909 = NOVALUE; // 66096 32909
    object _32908 = NOVALUE; // 66095 32908
    object _32907 = NOVALUE; // 66094 32907
    object _32906 = NOVALUE; // 66091 32906
// skipping _32905  name type: 0
    object _32904 = NOVALUE; // 66086 32904
    object _32903 = NOVALUE; // 66085 32903
    object _32902 = NOVALUE; // 66083 32902
    object _32901 = NOVALUE; // 66081 32901
    object _32900 = NOVALUE; // 66080 32900
    object _32899 = NOVALUE; // 66078 32899
    object _32898 = NOVALUE; // 66076 32898
// skipping _32897  name type: 0
    object _32896 = NOVALUE; // 66072 32896
// skipping _32895  name type: 0
    object _32894 = NOVALUE; // 66068 32894
// skipping _32893  name type: 0
    object _32892 = NOVALUE; // 66065 32892
    object _32891 = NOVALUE; // 66064 32891
    object _32890 = NOVALUE; // 66061 32890
    object _32889 = NOVALUE; // 66060 32889
// skipping _32888  name type: 0
    object _32887 = NOVALUE; // 66058 32887
// skipping _32886  name type: 0
    object _32885 = NOVALUE; // 66055 32885
// skipping _32884  name type: 0
    object _32883 = NOVALUE; // 66050 32883
    object _32882 = NOVALUE; // 66049 32882
    object _32881 = NOVALUE; // 66046 32881
// skipping _32880  name type: 0
    object _32879 = NOVALUE; // 66040 32879
    object _32878 = NOVALUE; // 66038 32878
// skipping _32877  name type: 0
    object _32876 = NOVALUE; // 66036 32876
    object _32875 = NOVALUE; // 66034 32875
// skipping _32874  name type: 0
    object _32873 = NOVALUE; // 66031 32873
// skipping _32872  name type: 0
    object _32871 = NOVALUE; // 66027 32871
    object _32870 = NOVALUE; // 66026 32870
    object _32869 = NOVALUE; // 66023 32869
// skipping _32868  name type: 0
    object _32867 = NOVALUE; // 66017 32867
    object _32866 = NOVALUE; // 66014 32866
// skipping _32865  name type: 0
// skipping _32864  name type: 0
    object _32863 = NOVALUE; // 66009 32863
// skipping _32862  name type: 0
// skipping _32861  name type: 0
    object _32860 = NOVALUE; // 66004 32860
    object _32859 = NOVALUE; // 66003 32859
    object _32858 = NOVALUE; // 66000 32858
    object _32857 = NOVALUE; // 65999 32857
    object _32856 = NOVALUE; // 65997 32856
    object _32855 = NOVALUE; // 65995 32855
    object _32854 = NOVALUE; // 65994 32854
    object _32853 = NOVALUE; // 65992 32853
// skipping _32852  name type: 0
    object _32851 = NOVALUE; // 65990 32851
    object _32850 = NOVALUE; // 65988 32850
    object _32849 = NOVALUE; // 65986 32849
    object _32848 = NOVALUE; // 65985 32848
    object _32847 = NOVALUE; // 65983 32847
    object _32846 = NOVALUE; // 65981 32846
    object _32845 = NOVALUE; // 65979 32845
    object _32844 = NOVALUE; // 65977 32844
    object _32843 = NOVALUE; // 65975 32843
// skipping _32842  name type: 0
    object _32841 = NOVALUE; // 65971 32841
    object _32840 = NOVALUE; // 65969 32840
    object _32839 = NOVALUE; // 65967 32839
    object _32838 = NOVALUE; // 65965 32838
    object _32837 = NOVALUE; // 65963 32837
// skipping _32836  name type: 0
    object _32835 = NOVALUE; // 65959 32835
    object _32834 = NOVALUE; // 65956 32834
    object _32833 = NOVALUE; // 65954 32833
    object _32832 = NOVALUE; // 65951 32832
    object _32831 = NOVALUE; // 65949 32831
    object _32830 = NOVALUE; // 65947 32830
    object _32829 = NOVALUE; // 65945 32829
    object _32828 = NOVALUE; // 65943 32828
    object _32827 = NOVALUE; // 65941 32827
    object _32826 = NOVALUE; // 65939 32826
    object _32825 = NOVALUE; // 65937 32825
    object _32824 = NOVALUE; // 65935 32824
    object _32823 = NOVALUE; // 65933 32823
    object _32822 = NOVALUE; // 65930 32822
    object _32821 = NOVALUE; // 65928 32821
// skipping _32820  name type: 0
    object _32819 = NOVALUE; // 65925 32819
    object _32818 = NOVALUE; // 65924 32818
    object _32817 = NOVALUE; // 65923 32817
    object _32816 = NOVALUE; // 65920 32816
    object _32815 = NOVALUE; // 65919 32815
    object _32814 = NOVALUE; // 65916 32814
    object _32813 = NOVALUE; // 65914 32813
    object _32812 = NOVALUE; // 65912 32812
    object _32811 = NOVALUE; // 65911 32811
    object _32810 = NOVALUE; // 65909 32810
    object _32809 = NOVALUE; // 65908 32809
// skipping _32808  name type: 0
    object _32807 = NOVALUE; // 65905 32807
    object _32806 = NOVALUE; // 65904 32806
    object _32805 = NOVALUE; // 65903 32805
    object _32804 = NOVALUE; // 65902 32804
    object _32803 = NOVALUE; // 65900 32803
    object _32802 = NOVALUE; // 65897 32802
    object _32801 = NOVALUE; // 65896 32801
    object _32800 = NOVALUE; // 65894 32800
    object _32799 = NOVALUE; // 65893 32799
    object _32798 = NOVALUE; // 65891 32798
    object _32797 = NOVALUE; // 65890 32797
    object _32796 = NOVALUE; // 65889 32796
    object _32795 = NOVALUE; // 65886 32795
    object _32794 = NOVALUE; // 65884 32794
// skipping _32793  name type: 0
    object _32792 = NOVALUE; // 65879 32792
// skipping _32791  name type: 0
    object _32790 = NOVALUE; // 65875 32790
    object _32789 = NOVALUE; // 65874 32789
    object _32788 = NOVALUE; // 65873 32788
    object _32787 = NOVALUE; // 65871 32787
    object _32786 = NOVALUE; // 65869 32786
    object _32785 = NOVALUE; // 65867 32785
    object _32784 = NOVALUE; // 65865 32784
    object _32783 = NOVALUE; // 65863 32783
    object _32782 = NOVALUE; // 65862 32782
    object _32781 = NOVALUE; // 65860 32781
    object _32780 = NOVALUE; // 65859 32780
    object _32779 = NOVALUE; // 65857 32779
    object _32778 = NOVALUE; // 65855 32778
    object _32777 = NOVALUE; // 65853 32777
    object _32776 = NOVALUE; // 65851 32776
    object _32775 = NOVALUE; // 65849 32775
    object _32774 = NOVALUE; // 65847 32774
    object _32773 = NOVALUE; // 65845 32773
    object _32772 = NOVALUE; // 65843 32772
    object _32771 = NOVALUE; // 65842 32771
    object _32770 = NOVALUE; // 65840 32770
    object _32769 = NOVALUE; // 65836 32769
    object _32768 = NOVALUE; // 65833 32768
    object _32767 = NOVALUE; // 65831 32767
    object _32766 = NOVALUE; // 65830 32766
    object _32765 = NOVALUE; // 65828 32765
// skipping _32764  name type: 0
    object _32763 = NOVALUE; // 65824 32763
// skipping _32762  name type: 0
    object _32761 = NOVALUE; // 65818 32761
// skipping _32760  name type: 0
// skipping _32759  name type: 0
    object _32758 = NOVALUE; // 65812 32758
    object _32757 = NOVALUE; // 65811 32757
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BackEnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_il_file_65788)) {
        _1 = (object)(DBL_PTR(_il_file_65788)->dbl);
        DeRefDS(_il_file_65788);
        _il_file_65788 = _1;
    }
    // SubProg BackEnd pc: 3 op: STARTLINE (58)

    /** backend.e:74		size = (1+length(SymTab)) * ST_ENTRY_SIZE */
    // SubProg BackEnd pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _32757 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _32757 = 1;
    }
    // SubProg BackEnd pc: 10 op: PLUS1 (93)
    _32758 = _32757 + 1;
    _32757 = NOVALUE;
    // SubProg BackEnd pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 16 op: MULTIPLY (13)
    _size_65805 = _32758 * _73ST_ENTRY_SIZE_65710;
    _32758 = NOVALUE;
    // SubProg BackEnd pc: 22 op: STARTLINE (58)

    /** backend.e:75		st = allocate(size)  -- symbol table*/
    // SubProg BackEnd pc: 24 op: PROC (27)
    _0 = _st_65790;
    _st_65790 = _3allocate(_size_65805, 0);
    DeRef(_0);
    // SubProg BackEnd pc: 29 op: STARTLINE (58)

    /** backend.e:76		mem_set(st, 0, size) -- all fields are 0 (NULL) by default*/
    // SubProg BackEnd pc: 31 op: MEM_SET (131)
    memory_set(_st_65790, 0, _size_65805);
    // SubProg BackEnd pc: 35 op: STARTLINE (58)

    /** backend.e:79		poke_pointer(st, length(SymTab))*/
    // SubProg BackEnd pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 39 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _32761 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _32761 = 1;
    }
    // SubProg BackEnd pc: 42 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_st_65790)){
        pokeptr_addr = (uintptr_t *)_st_65790;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_st_65790)->dbl);
    }
    *pokeptr_addr = (uintptr_t)_32761;
    _32761 = NOVALUE;
    // SubProg BackEnd pc: 45 op: STARTLINE (58)

    /** backend.e:81		lit_string = "" -- literal values are stored in a string like EDS*/
    // SubProg BackEnd pc: 47 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_lit_string_65807);
    _lit_string_65807 = _21936;
    // SubProg BackEnd pc: 50 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 52 op: STARTLINE (58)

    /** backend.e:82		string_size = 0 -- precompute total space needed for symbol names*/
    // SubProg BackEnd pc: 54 op: ASSIGN_I (113)
    _string_size_65803 = 0;
    // SubProg BackEnd pc: 57 op: STARTLINE (58)

    /** backend.e:84		addr = st + ST_ENTRY_SIZE*/
    // SubProg BackEnd pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 61 op: PLUS (11)
    DeRef(_addr_65789);
    if (IS_ATOM_INT(_st_65790)) {
        _addr_65789 = _st_65790 + _73ST_ENTRY_SIZE_65710;
        if ((object)((uintptr_t)_addr_65789 + (uintptr_t)HIGH_BITS) >= 0){
            _addr_65789 = NewDouble((eudouble)_addr_65789);
        }
    }
    else {
        _addr_65789 = NewDouble(DBL_PTR(_st_65790)->dbl + (eudouble)_73ST_ENTRY_SIZE_65710);
    }
    // SubProg BackEnd pc: 65 op: STARTLINE (58)

    /** backend.e:85		for i = 1 to length(SymTab) do*/
    // SubProg BackEnd pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 69 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _32763 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _32763 = 1;
    }
    // SubProg BackEnd pc: 72 op: FOR_I (125)
    {
        object _i_65822;
        _i_65822 = 1;
L1: // addr: 79 pc: 72 sub: 65786 op: 125
        if (_i_65822 > _32763){
            goto L2; // [72] 819
        }
        // SubProg BackEnd pc: 79 op: STARTLINE (58)

        /** backend.e:86			eentry = SymTab[i]*/
        // SubProg BackEnd pc: 81 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 83 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_65809);
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _eentry_65809 = (object)*(((s1_ptr)_2)->base + _i_65822);
        Ref(_eentry_65809);
        // SubProg BackEnd pc: 87 op: STARTLINE (58)

        /** backend.e:90			if atom(eentry) then*/
        // SubProg BackEnd pc: 89 op: IS_AN_ATOM (67)
        _32765 = IS_ATOM(_eentry_65809);
        // SubProg BackEnd pc: 92 op: IF (20)
        if (_32765 == 0)
        {
            _32765 = NOVALUE;
            goto L3; // [92] 139
        }
        else{
            _32765 = NOVALUE;
        }
        // SubProg BackEnd pc: 95 op: STARTLINE (58)

        /** backend.e:92				poke_pointer(addr + ST_NEXT, get_next( eentry) ) -- NEXT*/
        // SubProg BackEnd pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 99 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_NEXT_65650)) {
            _32766 = _addr_65789 + _73ST_NEXT_65650;
            if ((object)((uintptr_t)_32766 + (uintptr_t)HIGH_BITS) >= 0){
                _32766 = NewDouble((eudouble)_32766);
            }
        }
        else {
            _32766 = binary_op(PLUS, _addr_65789, _73ST_NEXT_65650);
        }
        // SubProg BackEnd pc: 103 op: PROC (27)
        Ref(_eentry_65809);
        _32767 = _68get_next(_eentry_65809);
        // SubProg BackEnd pc: 107 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32766)){
            pokeptr_addr = (uintptr_t *)_32766;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32766)->dbl);
        }
        if (IS_ATOM_INT(_32767)) {
            *pokeptr_addr = (uintptr_t)_32767;
        }
        else if (IS_ATOM(_32767)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32767)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32767);
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
        DeRef(_32766);
        _32766 = NOVALUE;
        DeRef(_32767);
        _32767 = NOVALUE;
        // SubProg BackEnd pc: 110 op: STARTLINE (58)

        /** backend.e:93				poke(addr + ST_MODE, M_TEMP) -- MODE*/
        // SubProg BackEnd pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 114 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_MODE_65656)) {
            _32768 = _addr_65789 + _73ST_MODE_65656;
            if ((object)((uintptr_t)_32768 + (uintptr_t)HIGH_BITS) >= 0){
                _32768 = NewDouble((eudouble)_32768);
            }
        }
        else {
            _32768 = binary_op(PLUS, _addr_65789, _73ST_MODE_65656);
        }
        // SubProg BackEnd pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 120 op: POKE (128)
        if (IS_ATOM_INT(_32768)){
            poke_addr = (uint8_t *)_32768;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32768)->dbl);
        }
        *poke_addr = (uint8_t)3;
        DeRef(_32768);
        _32768 = NOVALUE;
        // SubProg BackEnd pc: 123 op: STARTLINE (58)

        /** backend.e:94				poke(addr + ST_SCOPE, SC_UNDEFINED)  -- SCOPE, must be > S_PRIVATE */
        // SubProg BackEnd pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 127 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_SCOPE_65659)) {
            _32769 = _addr_65789 + _73ST_SCOPE_65659;
            if ((object)((uintptr_t)_32769 + (uintptr_t)HIGH_BITS) >= 0){
                _32769 = NewDouble((eudouble)_32769);
            }
        }
        else {
            _32769 = binary_op(PLUS, _addr_65789, _73ST_SCOPE_65659);
        }
        // SubProg BackEnd pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 133 op: POKE (128)
        if (IS_ATOM_INT(_32769)){
            poke_addr = (uint8_t *)_32769;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32769)->dbl);
        }
        *poke_addr = (uint8_t)9;
        DeRef(_32769);
        _32769 = NOVALUE;
        // SubProg BackEnd pc: 136 op: ELSE (23)
        goto L4; // [136] 804
        // SubProg BackEnd pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 65786 op: 159
        // SubProg BackEnd pc: 139 op: STARTLINE (58)

        /** backend.e:98				poke_pointer(addr + ST_NEXT, get_next( eentry[S_NEXT]) )*/
        // SubProg BackEnd pc: 141 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 143 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_NEXT_65650)) {
            _32770 = _addr_65789 + _73ST_NEXT_65650;
            if ((object)((uintptr_t)_32770 + (uintptr_t)HIGH_BITS) >= 0){
                _32770 = NewDouble((eudouble)_32770);
            }
        }
        else {
            _32770 = binary_op(PLUS, _addr_65789, _73ST_NEXT_65650);
        }
        // SubProg BackEnd pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 149 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32771 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg BackEnd pc: 153 op: PROC (27)
        Ref(_32771);
        _32772 = _68get_next(_32771);
        _32771 = NOVALUE;
        // SubProg BackEnd pc: 157 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32770)){
            pokeptr_addr = (uintptr_t *)_32770;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32770)->dbl);
        }
        if (IS_ATOM_INT(_32772)) {
            *pokeptr_addr = (uintptr_t)_32772;
        }
        else if (IS_ATOM(_32772)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32772)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32772);
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
        DeRef(_32770);
        _32770 = NOVALUE;
        DeRef(_32772);
        _32772 = NOVALUE;
        // SubProg BackEnd pc: 160 op: STARTLINE (58)

        /** backend.e:99				poke_pointer(addr + ST_NEXT_IN_BLOCK, eentry[S_NEXT_IN_BLOCK])*/
        // SubProg BackEnd pc: 162 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 164 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_NEXT_IN_BLOCK_65653)) {
            _32773 = _addr_65789 + _73ST_NEXT_IN_BLOCK_65653;
            if ((object)((uintptr_t)_32773 + (uintptr_t)HIGH_BITS) >= 0){
                _32773 = NewDouble((eudouble)_32773);
            }
        }
        else {
            _32773 = binary_op(PLUS, _addr_65789, _73ST_NEXT_IN_BLOCK_65653);
        }
        // SubProg BackEnd pc: 168 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 170 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835)){
            _32774 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
        }
        else{
            _32774 = (object)*(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
        }
        // SubProg BackEnd pc: 174 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32773)){
            pokeptr_addr = (uintptr_t *)_32773;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32773)->dbl);
        }
        if (IS_ATOM_INT(_32774)) {
            *pokeptr_addr = (uintptr_t)_32774;
        }
        else if (IS_ATOM(_32774)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32774)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32774);
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
        DeRef(_32773);
        _32773 = NOVALUE;
        _32774 = NOVALUE;
        // SubProg BackEnd pc: 177 op: STARTLINE (58)

        /** backend.e:100				poke(addr + ST_MODE, eentry[S_MODE])*/
        // SubProg BackEnd pc: 179 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 181 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_MODE_65656)) {
            _32775 = _addr_65789 + _73ST_MODE_65656;
            if ((object)((uintptr_t)_32775 + (uintptr_t)HIGH_BITS) >= 0){
                _32775 = NewDouble((eudouble)_32775);
            }
        }
        else {
            _32775 = binary_op(PLUS, _addr_65789, _73ST_MODE_65656);
        }
        // SubProg BackEnd pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 187 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32776 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 191 op: POKE (128)
        if (IS_ATOM_INT(_32775)){
            poke_addr = (uint8_t *)_32775;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32775)->dbl);
        }
        if (IS_ATOM_INT(_32776)) {
            *poke_addr = (uint8_t)_32776;
        }
        else if (IS_ATOM(_32776)) {
            *poke_addr = (uint8_t)DBL_PTR(_32776)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32776);
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
        DeRef(_32775);
        _32775 = NOVALUE;
        _32776 = NOVALUE;
        // SubProg BackEnd pc: 194 op: STARTLINE (58)

        /** backend.e:101				poke(addr + ST_SCOPE, eentry[S_SCOPE])*/
        // SubProg BackEnd pc: 196 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 198 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_SCOPE_65659)) {
            _32777 = _addr_65789 + _73ST_SCOPE_65659;
            if ((object)((uintptr_t)_32777 + (uintptr_t)HIGH_BITS) >= 0){
                _32777 = NewDouble((eudouble)_32777);
            }
        }
        else {
            _32777 = binary_op(PLUS, _addr_65789, _73ST_SCOPE_65659);
        }
        // SubProg BackEnd pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 204 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32778 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg BackEnd pc: 208 op: POKE (128)
        if (IS_ATOM_INT(_32777)){
            poke_addr = (uint8_t *)_32777;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32777)->dbl);
        }
        if (IS_ATOM_INT(_32778)) {
            *poke_addr = (uint8_t)_32778;
        }
        else if (IS_ATOM(_32778)) {
            *poke_addr = (uint8_t)DBL_PTR(_32778)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32778);
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
        DeRef(_32777);
        _32777 = NOVALUE;
        _32778 = NOVALUE;
        // SubProg BackEnd pc: 211 op: STARTLINE (58)

        /** backend.e:103				if length(eentry) >= S_NAME and sequence(eentry[S_NAME]) then*/
        // SubProg BackEnd pc: 213 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65809)){
                _32779 = SEQ_PTR(_eentry_65809)->length;
        }
        else {
            _32779 = 1;
        }
        // SubProg BackEnd pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 218 op: GREATEREQ (2)
        if (IS_ATOM_INT(_34S_NAME_14843)) {
            _32780 = (_32779 >= _34S_NAME_14843);
        }
        else {
            _32780 = binary_op(GREATEREQ, _32779, _34S_NAME_14843);
        }
        _32779 = NOVALUE;
        // SubProg BackEnd pc: 222 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_32780)) {
            if (_32780 == 0) {
                goto L5; // [222] 295
            }
        }
        else {
            if (DBL_PTR(_32780)->dbl == 0.0) {
                goto L5; // [222] 295
            }
        }
        // SubProg BackEnd pc: 226 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 228 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _32782 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _32782 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        // SubProg BackEnd pc: 232 op: IS_A_SEQUENCE (68)
        _32783 = IS_SEQUENCE(_32782);
        _32782 = NOVALUE;
        // SubProg BackEnd pc: 235 op: NOP1 (159)
        // SubProg BackEnd pc: 236 op: IF (20)
        if (_32783 == 0)
        {
            _32783 = NOVALUE;
            goto L5; // [236] 295
        }
        else{
            _32783 = NOVALUE;
        }
        // SubProg BackEnd pc: 239 op: STARTLINE (58)

        /** backend.e:105					poke(addr + ST_FILE_NO, eentry[S_FILE_NO])*/
        // SubProg BackEnd pc: 241 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 243 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_FILE_NO_65662)) {
            _32784 = _addr_65789 + _73ST_FILE_NO_65662;
            if ((object)((uintptr_t)_32784 + (uintptr_t)HIGH_BITS) >= 0){
                _32784 = NewDouble((eudouble)_32784);
            }
        }
        else {
            _32784 = binary_op(PLUS, _addr_65789, _73ST_FILE_NO_65662);
        }
        // SubProg BackEnd pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 249 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _32785 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _32785 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        // SubProg BackEnd pc: 253 op: POKE (128)
        if (IS_ATOM_INT(_32784)){
            poke_addr = (uint8_t *)_32784;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32784)->dbl);
        }
        if (IS_ATOM_INT(_32785)) {
            *poke_addr = (uint8_t)_32785;
        }
        else if (IS_ATOM(_32785)) {
            *poke_addr = (uint8_t)DBL_PTR(_32785)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32785);
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
        DeRef(_32784);
        _32784 = NOVALUE;
        _32785 = NOVALUE;
        // SubProg BackEnd pc: 256 op: STARTLINE (58)

        /** backend.e:106					poke4(addr + ST_TOKEN, eentry[S_TOKEN])*/
        // SubProg BackEnd pc: 258 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 260 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_TOKEN_65668)) {
            _32786 = _addr_65789 + _73ST_TOKEN_65668;
            if ((object)((uintptr_t)_32786 + (uintptr_t)HIGH_BITS) >= 0){
                _32786 = NewDouble((eudouble)_32786);
            }
        }
        else {
            _32786 = binary_op(PLUS, _addr_65789, _73ST_TOKEN_65668);
        }
        // SubProg BackEnd pc: 264 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 266 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _32787 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _32787 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        // SubProg BackEnd pc: 270 op: POKE4 (138)
        if (IS_ATOM_INT(_32786)){
            poke4_addr = (uint32_t *)_32786;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32786)->dbl);
        }
        if (IS_ATOM_INT(_32787)) {
            *poke4_addr = (uint32_t)_32787;
        }
        else if (IS_ATOM(_32787)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32787)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32787);
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
        DeRef(_32786);
        _32786 = NOVALUE;
        _32787 = NOVALUE;
        // SubProg BackEnd pc: 273 op: STARTLINE (58)

        /** backend.e:107					string_size += length(eentry[S_NAME])+1*/
        // SubProg BackEnd pc: 275 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 277 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _32788 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _32788 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        // SubProg BackEnd pc: 281 op: LENGTH (42)
        if (IS_SEQUENCE(_32788)){
                _32789 = SEQ_PTR(_32788)->length;
        }
        else {
            _32789 = 1;
        }
        _32788 = NOVALUE;
        // SubProg BackEnd pc: 284 op: PLUS1 (93)
        _32790 = _32789 + 1;
        _32789 = NOVALUE;
        // SubProg BackEnd pc: 288 op: PLUS (11)
        _string_size_65803 = _string_size_65803 + _32790;
        _32790 = NOVALUE;
        // SubProg BackEnd pc: 294 op: NOP1 (159)
L5: // addr: 295 pc: 294 sub: 65786 op: 159
        // SubProg BackEnd pc: 295 op: STARTLINE (58)

        /** backend.e:110				if eentry[S_MODE] = M_NORMAL then*/
        // SubProg BackEnd pc: 297 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 299 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32792 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 305 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _32792, 1)){
            _32792 = NOVALUE;
            goto L6; // [305] 611
        }
        _32792 = NOVALUE;
        // SubProg BackEnd pc: 309 op: STARTLINE (58)

        /** backend.e:113					if find(eentry[S_TOKEN], RTN_TOKS) then*/
        // SubProg BackEnd pc: 311 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 313 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _32794 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _32794 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        // SubProg BackEnd pc: 317 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 319 op: FIND_FROM (176)
        _32795 = find_from(_32794, _36RTN_TOKS_14796, 1);
        _32794 = NOVALUE;
        // SubProg BackEnd pc: 324 op: IF (20)
        if (_32795 == 0)
        {
            _32795 = NOVALUE;
            goto L7; // [324] 590
        }
        else{
            _32795 = NOVALUE;
        }
        // SubProg BackEnd pc: 327 op: STARTLINE (58)

        /** backend.e:115						if sequence(eentry[S_CODE]) and (get_backend() or eentry[S_OPCODE]=0) then  */
        // SubProg BackEnd pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 331 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_CODE_14855)){
            _32796 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
        }
        else{
            _32796 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
        }
        // SubProg BackEnd pc: 335 op: IS_A_SEQUENCE (68)
        _32797 = IS_SEQUENCE(_32796);
        _32796 = NOVALUE;
        // SubProg BackEnd pc: 338 op: SC1_AND_IF (146)
        if (_32797 == 0) {
            goto L8; // [338] 502
        }
        // SubProg BackEnd pc: 342 op: PROC (27)
        _32799 = _2get_backend();
        // SubProg BackEnd pc: 345 op: SC1_OR (143)
        if (IS_ATOM_INT(_32799)) {
            if (_32799 != 0) {
                DeRef(_32800);
                _32800 = 1;
                goto L9; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_32799)->dbl != 0.0) {
                DeRef(_32800);
                _32800 = 1;
                goto L9; // [345] 363
            }
        }
        // SubProg BackEnd pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 351 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32801 = (object)*(((s1_ptr)_2)->base + 21);
        // SubProg BackEnd pc: 355 op: EQUALS (3)
        if (IS_ATOM_INT(_32801)) {
            _32802 = (_32801 == 0);
        }
        else {
            _32802 = binary_op(EQUALS, _32801, 0);
        }
        _32801 = NOVALUE;
        // SubProg BackEnd pc: 359 op: SC2_OR (144)
        DeRef(_32800);
        if (IS_ATOM_INT(_32802))
        _32800 = (_32802 != 0);
        else
        _32800 = DBL_PTR(_32802)->dbl != 0.0;
        // SubProg BackEnd pc: 362 op: NOP1 (159)
L9: // addr: 363 pc: 362 sub: 65786 op: 159
        // SubProg BackEnd pc: 363 op: NOP1 (159)
        // SubProg BackEnd pc: 364 op: IF (20)
        if (_32800 == 0)
        {
            _32800 = NOVALUE;
            goto L8; // [364] 502
        }
        else{
            _32800 = NOVALUE;
        }
        // SubProg BackEnd pc: 367 op: STARTLINE (58)

        /** backend.e:117							e_addr = allocate( sizeof( C_POINTER ) * (length(eentry[S_CODE]) + 1 ) ) -- IL code*/
        // SubProg BackEnd pc: 369 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 371 op: SIZEOF (217)
        _32803 = eu_sizeof( 50331649 );
        DeRef(_32803);
        // SubProg BackEnd pc: 374 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_CODE_14855)){
            _32804 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
        }
        else{
            _32804 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
        }
        // SubProg BackEnd pc: 380 op: LENGTH (42)
        if (IS_SEQUENCE(_32804)){
                _32805 = SEQ_PTR(_32804)->length;
        }
        else {
            _32805 = 1;
        }
        _32804 = NOVALUE;
        // SubProg BackEnd pc: 383 op: PLUS1 (93)
        _32806 = _32805 + 1;
        _32805 = NOVALUE;
        // SubProg BackEnd pc: 387 op: MULTIPLY (13)
        if (_32803 == (short)_32803 && _32806 <= INT15){
            _32807 = _32803 * _32806;
        }
        else{
            _32807 = NewDouble(_32803 * (eudouble)_32806);
        }
        _32803 = NOVALUE;
        _32806 = NOVALUE;
        // SubProg BackEnd pc: 391 op: PROC (27)
        _0 = _e_addr_65797;
        _e_addr_65797 = _3allocate(_32807, 0);
        DeRef(_0);
        _32807 = NOVALUE;
        // SubProg BackEnd pc: 396 op: STARTLINE (58)

        /** backend.e:118							poke_pointer(e_addr, length(eentry[S_CODE]))*/
        // SubProg BackEnd pc: 398 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 400 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_CODE_14855)){
            _32809 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
        }
        else{
            _32809 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
        }
        // SubProg BackEnd pc: 404 op: LENGTH (42)
        if (IS_SEQUENCE(_32809)){
                _32810 = SEQ_PTR(_32809)->length;
        }
        else {
            _32810 = 1;
        }
        _32809 = NOVALUE;
        // SubProg BackEnd pc: 407 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_e_addr_65797)){
            pokeptr_addr = (uintptr_t *)_e_addr_65797;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_e_addr_65797)->dbl);
        }
        *pokeptr_addr = (uintptr_t)_32810;
        _32810 = NOVALUE;
        // SubProg BackEnd pc: 410 op: STARTLINE (58)

        /** backend.e:119							poke_pointer(e_addr + sizeof( C_POINTER ), eentry[S_CODE])*/
        // SubProg BackEnd pc: 412 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 414 op: SIZEOF (217)
        _32811 = eu_sizeof( 50331649 );
        DeRef(_32811);
        // SubProg BackEnd pc: 417 op: PLUS (11)
        if (IS_ATOM_INT(_e_addr_65797)) {
            _32812 = _e_addr_65797 + _32811;
            if ((object)((uintptr_t)_32812 + (uintptr_t)HIGH_BITS) >= 0){
                _32812 = NewDouble((eudouble)_32812);
            }
        }
        else {
            _32812 = NewDouble(DBL_PTR(_e_addr_65797)->dbl + (eudouble)_32811);
        }
        _32811 = NOVALUE;
        // SubProg BackEnd pc: 421 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 423 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_CODE_14855)){
            _32813 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_CODE_14855)->dbl));
        }
        else{
            _32813 = (object)*(((s1_ptr)_2)->base + _34S_CODE_14855);
        }
        // SubProg BackEnd pc: 427 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32812)){
            pokeptr_addr = (uintptr_t *)_32812;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32812)->dbl);
        }
        if (IS_ATOM_INT(_32813)) {
            *pokeptr_addr = (uintptr_t)_32813;
        }
        else if (IS_ATOM(_32813)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32813)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32813);
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
        DeRef(_32812);
        _32812 = NOVALUE;
        _32813 = NOVALUE;
        // SubProg BackEnd pc: 430 op: STARTLINE (58)

        /** backend.e:120							poke_pointer(addr + ST_CODE, e_addr)*/
        // SubProg BackEnd pc: 432 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 434 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_CODE_65683)) {
            _32814 = _addr_65789 + _73ST_CODE_65683;
            if ((object)((uintptr_t)_32814 + (uintptr_t)HIGH_BITS) >= 0){
                _32814 = NewDouble((eudouble)_32814);
            }
        }
        else {
            _32814 = binary_op(PLUS, _addr_65789, _73ST_CODE_65683);
        }
        // SubProg BackEnd pc: 438 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32814)){
            pokeptr_addr = (uintptr_t *)_32814;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32814)->dbl);
        }
        if (IS_ATOM_INT(_e_addr_65797)) {
            *pokeptr_addr = (uintptr_t)_e_addr_65797;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_e_addr_65797)->dbl;
        }
        DeRef(_32814);
        _32814 = NOVALUE;
        // SubProg BackEnd pc: 441 op: STARTLINE (58)

        /** backend.e:122							if sequence(eentry[S_LINETAB]) then*/
        // SubProg BackEnd pc: 443 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 445 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_LINETAB_14878)){
            _32815 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
        }
        else{
            _32815 = (object)*(((s1_ptr)_2)->base + _34S_LINETAB_14878);
        }
        // SubProg BackEnd pc: 449 op: IS_A_SEQUENCE (68)
        _32816 = IS_SEQUENCE(_32815);
        _32815 = NOVALUE;
        // SubProg BackEnd pc: 452 op: IF (20)
        if (_32816 == 0)
        {
            _32816 = NOVALUE;
            goto LA; // [452] 500
        }
        else{
            _32816 = NOVALUE;
        }
        // SubProg BackEnd pc: 455 op: STARTLINE (58)

        /** backend.e:124								l_addr = allocate( 4 * length(eentry[S_LINETAB])) */
        // SubProg BackEnd pc: 457 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 459 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_LINETAB_14878)){
            _32817 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
        }
        else{
            _32817 = (object)*(((s1_ptr)_2)->base + _34S_LINETAB_14878);
        }
        // SubProg BackEnd pc: 463 op: LENGTH (42)
        if (IS_SEQUENCE(_32817)){
                _32818 = SEQ_PTR(_32817)->length;
        }
        else {
            _32818 = 1;
        }
        _32817 = NOVALUE;
        // SubProg BackEnd pc: 466 op: MULTIPLY (13)
        if (_32818 <= INT15){
            _32819 = 4 * _32818;
        }
        else{
            _32819 = NewDouble(4 * (eudouble)_32818);
        }
        _32818 = NOVALUE;
        // SubProg BackEnd pc: 470 op: PROC (27)
        _0 = _l_addr_65798;
        _l_addr_65798 = _3allocate(_32819, 0);
        DeRef(_0);
        _32819 = NOVALUE;
        // SubProg BackEnd pc: 475 op: STARTLINE (58)

        /** backend.e:125								poke4(l_addr, eentry[S_LINETAB])*/
        // SubProg BackEnd pc: 477 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 479 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_LINETAB_14878)){
            _32821 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LINETAB_14878)->dbl));
        }
        else{
            _32821 = (object)*(((s1_ptr)_2)->base + _34S_LINETAB_14878);
        }
        // SubProg BackEnd pc: 483 op: POKE4 (138)
        if (IS_ATOM_INT(_l_addr_65798)){
            poke4_addr = (uint32_t *)_l_addr_65798;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_l_addr_65798)->dbl);
        }
        if (IS_ATOM_INT(_32821)) {
            *poke4_addr = (uint32_t)_32821;
        }
        else if (IS_ATOM(_32821)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32821)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32821);
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
        _32821 = NOVALUE;
        // SubProg BackEnd pc: 486 op: STARTLINE (58)

        /** backend.e:126								poke_pointer(addr + ST_LINETAB, l_addr)*/
        // SubProg BackEnd pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 490 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_LINETAB_65695)) {
            _32822 = _addr_65789 + _73ST_LINETAB_65695;
            if ((object)((uintptr_t)_32822 + (uintptr_t)HIGH_BITS) >= 0){
                _32822 = NewDouble((eudouble)_32822);
            }
        }
        else {
            _32822 = binary_op(PLUS, _addr_65789, _73ST_LINETAB_65695);
        }
        // SubProg BackEnd pc: 494 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32822)){
            pokeptr_addr = (uintptr_t *)_32822;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32822)->dbl);
        }
        if (IS_ATOM_INT(_l_addr_65798)) {
            *pokeptr_addr = (uintptr_t)_l_addr_65798;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_l_addr_65798)->dbl;
        }
        DeRef(_32822);
        _32822 = NOVALUE;
        // SubProg BackEnd pc: 497 op: ELSE (23)
        goto LB; // [497] 501
        // SubProg BackEnd pc: 499 op: NOP1 (159)
LA: // addr: 500 pc: 499 sub: 65786 op: 159
        // SubProg BackEnd pc: 500 op: NOP1 (159)
LB: // addr: 501 pc: 500 sub: 65786 op: 159
        // SubProg BackEnd pc: 501 op: NOP1 (159)
L8: // addr: 502 pc: 501 sub: 65786 op: 159
        // SubProg BackEnd pc: 502 op: STARTLINE (58)

        /** backend.e:131						poke4(addr + ST_FIRSTLINE, eentry[S_FIRSTLINE])*/
        // SubProg BackEnd pc: 504 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 506 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_FIRSTLINE_65698)) {
            _32823 = _addr_65789 + _73ST_FIRSTLINE_65698;
            if ((object)((uintptr_t)_32823 + (uintptr_t)HIGH_BITS) >= 0){
                _32823 = NewDouble((eudouble)_32823);
            }
        }
        else {
            _32823 = binary_op(PLUS, _addr_65789, _73ST_FIRSTLINE_65698);
        }
        // SubProg BackEnd pc: 510 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 512 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_FIRSTLINE_14883)){
            _32824 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FIRSTLINE_14883)->dbl));
        }
        else{
            _32824 = (object)*(((s1_ptr)_2)->base + _34S_FIRSTLINE_14883);
        }
        // SubProg BackEnd pc: 516 op: POKE4 (138)
        if (IS_ATOM_INT(_32823)){
            poke4_addr = (uint32_t *)_32823;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32823)->dbl);
        }
        if (IS_ATOM_INT(_32824)) {
            *poke4_addr = (uint32_t)_32824;
        }
        else if (IS_ATOM(_32824)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32824)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32824);
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
        DeRef(_32823);
        _32823 = NOVALUE;
        _32824 = NOVALUE;
        // SubProg BackEnd pc: 519 op: STARTLINE (58)

        /** backend.e:132						poke_pointer(addr + ST_TEMPS, eentry[S_TEMPS])*/
        // SubProg BackEnd pc: 521 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 523 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_TEMPS_65686)) {
            _32825 = _addr_65789 + _73ST_TEMPS_65686;
            if ((object)((uintptr_t)_32825 + (uintptr_t)HIGH_BITS) >= 0){
                _32825 = NewDouble((eudouble)_32825);
            }
        }
        else {
            _32825 = binary_op(PLUS, _addr_65789, _73ST_TEMPS_65686);
        }
        // SubProg BackEnd pc: 527 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 529 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_TEMPS_14888)){
            _32826 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TEMPS_14888)->dbl));
        }
        else{
            _32826 = (object)*(((s1_ptr)_2)->base + _34S_TEMPS_14888);
        }
        // SubProg BackEnd pc: 533 op: POKE_POINTER (215)
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
        // SubProg BackEnd pc: 536 op: STARTLINE (58)

        /** backend.e:133						poke4(addr + ST_NUM_ARGS, eentry[S_NUM_ARGS])*/
        // SubProg BackEnd pc: 538 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 540 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_NUM_ARGS_65701)) {
            _32827 = _addr_65789 + _73ST_NUM_ARGS_65701;
            if ((object)((uintptr_t)_32827 + (uintptr_t)HIGH_BITS) >= 0){
                _32827 = NewDouble((eudouble)_32827);
            }
        }
        else {
            _32827 = binary_op(PLUS, _addr_65789, _73ST_NUM_ARGS_65701);
        }
        // SubProg BackEnd pc: 544 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 546 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
            _32828 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
        }
        else{
            _32828 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
        }
        // SubProg BackEnd pc: 550 op: POKE4 (138)
        if (IS_ATOM_INT(_32827)){
            poke4_addr = (uint32_t *)_32827;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32827)->dbl);
        }
        if (IS_ATOM_INT(_32828)) {
            *poke4_addr = (uint32_t)_32828;
        }
        else if (IS_ATOM(_32828)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32828)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32828);
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
        DeRef(_32827);
        _32827 = NOVALUE;
        _32828 = NOVALUE;
        // SubProg BackEnd pc: 553 op: STARTLINE (58)

        /** backend.e:136						poke4(addr + ST_STACK_SPACE, eentry[S_STACK_SPACE])*/
        // SubProg BackEnd pc: 555 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 557 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_STACK_SPACE_65707)) {
            _32829 = _addr_65789 + _73ST_STACK_SPACE_65707;
            if ((object)((uintptr_t)_32829 + (uintptr_t)HIGH_BITS) >= 0){
                _32829 = NewDouble((eudouble)_32829);
            }
        }
        else {
            _32829 = binary_op(PLUS, _addr_65789, _73ST_STACK_SPACE_65707);
        }
        // SubProg BackEnd pc: 561 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 563 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_STACK_SPACE_14903)){
            _32830 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
        }
        else{
            _32830 = (object)*(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
        }
        // SubProg BackEnd pc: 567 op: POKE4 (138)
        if (IS_ATOM_INT(_32829)){
            poke4_addr = (uint32_t *)_32829;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32829)->dbl);
        }
        if (IS_ATOM_INT(_32830)) {
            *poke4_addr = (uint32_t)_32830;
        }
        else if (IS_ATOM(_32830)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32830)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32830);
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
        DeRef(_32829);
        _32829 = NOVALUE;
        _32830 = NOVALUE;
        // SubProg BackEnd pc: 570 op: STARTLINE (58)

        /** backend.e:137						poke_pointer(addr + ST_BLOCK, eentry[S_BLOCK])*/
        // SubProg BackEnd pc: 572 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 574 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_BLOCK_65692)) {
            _32831 = _addr_65789 + _73ST_BLOCK_65692;
            if ((object)((uintptr_t)_32831 + (uintptr_t)HIGH_BITS) >= 0){
                _32831 = NewDouble((eudouble)_32831);
            }
        }
        else {
            _32831 = binary_op(PLUS, _addr_65789, _73ST_BLOCK_65692);
        }
        // SubProg BackEnd pc: 578 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 580 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_BLOCK_14863)){
            _32832 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
        }
        else{
            _32832 = (object)*(((s1_ptr)_2)->base + _34S_BLOCK_14863);
        }
        // SubProg BackEnd pc: 584 op: POKE_POINTER (215)
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
        // SubProg BackEnd pc: 587 op: ELSE (23)
        goto LC; // [587] 803
        // SubProg BackEnd pc: 589 op: NOP1 (159)
L7: // addr: 590 pc: 589 sub: 65786 op: 159
        // SubProg BackEnd pc: 590 op: STARTLINE (58)

        /** backend.e:140						poke_pointer(addr + ST_DECLARED_IN, eentry[S_BLOCK] )*/
        // SubProg BackEnd pc: 592 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 594 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_DECLARED_IN_65674)) {
            _32833 = _addr_65789 + _73ST_DECLARED_IN_65674;
            if ((object)((uintptr_t)_32833 + (uintptr_t)HIGH_BITS) >= 0){
                _32833 = NewDouble((eudouble)_32833);
            }
        }
        else {
            _32833 = binary_op(PLUS, _addr_65789, _73ST_DECLARED_IN_65674);
        }
        // SubProg BackEnd pc: 598 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 600 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_BLOCK_14863)){
            _32834 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
        }
        else{
            _32834 = (object)*(((s1_ptr)_2)->base + _34S_BLOCK_14863);
        }
        // SubProg BackEnd pc: 604 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32833)){
            pokeptr_addr = (uintptr_t *)_32833;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32833)->dbl);
        }
        if (IS_ATOM_INT(_32834)) {
            *pokeptr_addr = (uintptr_t)_32834;
        }
        else if (IS_ATOM(_32834)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32834)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32834);
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
        DeRef(_32833);
        _32833 = NOVALUE;
        _32834 = NOVALUE;
        // SubProg BackEnd pc: 607 op: NOP1 (159)
        // SubProg BackEnd pc: 608 op: ELSE (23)
        goto LC; // [608] 803
        // SubProg BackEnd pc: 610 op: NOP1 (159)
L6: // addr: 611 pc: 610 sub: 65786 op: 159
        // SubProg BackEnd pc: 611 op: STARTLINE (58)

        /** backend.e:143				elsif eentry[S_MODE] = M_BLOCK then*/
        // SubProg BackEnd pc: 613 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 615 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32835 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 619 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 621 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _32835, 4)){
            _32835 = NOVALUE;
            goto LD; // [621] 708
        }
        _32835 = NOVALUE;
        // SubProg BackEnd pc: 625 op: STARTLINE (58)

        /** backend.e:144					poke_pointer(addr + ST_NEXT_IN_BLOCK, eentry[S_NEXT_IN_BLOCK] )*/
        // SubProg BackEnd pc: 627 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 629 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_NEXT_IN_BLOCK_65653)) {
            _32837 = _addr_65789 + _73ST_NEXT_IN_BLOCK_65653;
            if ((object)((uintptr_t)_32837 + (uintptr_t)HIGH_BITS) >= 0){
                _32837 = NewDouble((eudouble)_32837);
            }
        }
        else {
            _32837 = binary_op(PLUS, _addr_65789, _73ST_NEXT_IN_BLOCK_65653);
        }
        // SubProg BackEnd pc: 633 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 635 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835)){
            _32838 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
        }
        else{
            _32838 = (object)*(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
        }
        // SubProg BackEnd pc: 639 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32837)){
            pokeptr_addr = (uintptr_t *)_32837;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32837)->dbl);
        }
        if (IS_ATOM_INT(_32838)) {
            *pokeptr_addr = (uintptr_t)_32838;
        }
        else if (IS_ATOM(_32838)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32838)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32838);
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
        DeRef(_32837);
        _32837 = NOVALUE;
        _32838 = NOVALUE;
        // SubProg BackEnd pc: 642 op: STARTLINE (58)

        /** backend.e:145					poke_pointer(addr + ST_BLOCK, eentry[S_BLOCK])*/
        // SubProg BackEnd pc: 644 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 646 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_BLOCK_65692)) {
            _32839 = _addr_65789 + _73ST_BLOCK_65692;
            if ((object)((uintptr_t)_32839 + (uintptr_t)HIGH_BITS) >= 0){
                _32839 = NewDouble((eudouble)_32839);
            }
        }
        else {
            _32839 = binary_op(PLUS, _addr_65789, _73ST_BLOCK_65692);
        }
        // SubProg BackEnd pc: 650 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 652 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_BLOCK_14863)){
            _32840 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
        }
        else{
            _32840 = (object)*(((s1_ptr)_2)->base + _34S_BLOCK_14863);
        }
        // SubProg BackEnd pc: 656 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32839)){
            pokeptr_addr = (uintptr_t *)_32839;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32839)->dbl);
        }
        if (IS_ATOM_INT(_32840)) {
            *pokeptr_addr = (uintptr_t)_32840;
        }
        else if (IS_ATOM(_32840)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32840)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32840);
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
        DeRef(_32839);
        _32839 = NOVALUE;
        _32840 = NOVALUE;
        // SubProg BackEnd pc: 659 op: STARTLINE (58)

        /** backend.e:146					if length(eentry) >= S_FIRST_LINE then*/
        // SubProg BackEnd pc: 661 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65809)){
                _32841 = SEQ_PTR(_eentry_65809)->length;
        }
        else {
            _32841 = 1;
        }
        // SubProg BackEnd pc: 664 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 666 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _32841, _34S_FIRST_LINE_14868)){
            _32841 = NOVALUE;
            goto LC; // [666] 803
        }
        _32841 = NOVALUE;
        // SubProg BackEnd pc: 670 op: STARTLINE (58)

        /** backend.e:147						poke4(addr + ST_FIRST_LINE, eentry[S_FIRST_LINE] )*/
        // SubProg BackEnd pc: 672 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 674 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_FIRST_LINE_65677)) {
            _32843 = _addr_65789 + _73ST_FIRST_LINE_65677;
            if ((object)((uintptr_t)_32843 + (uintptr_t)HIGH_BITS) >= 0){
                _32843 = NewDouble((eudouble)_32843);
            }
        }
        else {
            _32843 = binary_op(PLUS, _addr_65789, _73ST_FIRST_LINE_65677);
        }
        // SubProg BackEnd pc: 678 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 680 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_FIRST_LINE_14868)){
            _32844 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FIRST_LINE_14868)->dbl));
        }
        else{
            _32844 = (object)*(((s1_ptr)_2)->base + _34S_FIRST_LINE_14868);
        }
        // SubProg BackEnd pc: 684 op: POKE4 (138)
        if (IS_ATOM_INT(_32843)){
            poke4_addr = (uint32_t *)_32843;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32843)->dbl);
        }
        if (IS_ATOM_INT(_32844)) {
            *poke4_addr = (uint32_t)_32844;
        }
        else if (IS_ATOM(_32844)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32844)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32844);
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
        DeRef(_32843);
        _32843 = NOVALUE;
        _32844 = NOVALUE;
        // SubProg BackEnd pc: 687 op: STARTLINE (58)

        /** backend.e:148						poke4(addr + ST_LAST_LINE, eentry[S_LAST_LINE] )*/
        // SubProg BackEnd pc: 689 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 691 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73ST_LAST_LINE_65680)) {
            _32845 = _addr_65789 + _73ST_LAST_LINE_65680;
            if ((object)((uintptr_t)_32845 + (uintptr_t)HIGH_BITS) >= 0){
                _32845 = NewDouble((eudouble)_32845);
            }
        }
        else {
            _32845 = binary_op(PLUS, _addr_65789, _73ST_LAST_LINE_65680);
        }
        // SubProg BackEnd pc: 695 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 697 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!IS_ATOM_INT(_34S_LAST_LINE_14873)){
            _32846 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_LAST_LINE_14873)->dbl));
        }
        else{
            _32846 = (object)*(((s1_ptr)_2)->base + _34S_LAST_LINE_14873);
        }
        // SubProg BackEnd pc: 701 op: POKE4 (138)
        if (IS_ATOM_INT(_32845)){
            poke4_addr = (uint32_t *)_32845;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32845)->dbl);
        }
        if (IS_ATOM_INT(_32846)) {
            *poke4_addr = (uint32_t)_32846;
        }
        else if (IS_ATOM(_32846)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32846)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32846);
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
        DeRef(_32845);
        _32845 = NOVALUE;
        _32846 = NOVALUE;
        // SubProg BackEnd pc: 704 op: NOP1 (159)
        // SubProg BackEnd pc: 705 op: ELSE (23)
        goto LC; // [705] 803
        // SubProg BackEnd pc: 707 op: NOP1 (159)
LD: // addr: 708 pc: 707 sub: 65786 op: 159
        // SubProg BackEnd pc: 708 op: STARTLINE (58)

        /** backend.e:151				elsif (length(eentry) < S_NAME and eentry[S_MODE] = M_CONSTANT) or*/
        // SubProg BackEnd pc: 710 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65809)){
                _32847 = SEQ_PTR(_eentry_65809)->length;
        }
        else {
            _32847 = 1;
        }
        // SubProg BackEnd pc: 713 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 715 op: LESS (1)
        if (IS_ATOM_INT(_34S_NAME_14843)) {
            _32848 = (_32847 < _34S_NAME_14843);
        }
        else {
            _32848 = binary_op(LESS, _32847, _34S_NAME_14843);
        }
        _32847 = NOVALUE;
        // SubProg BackEnd pc: 719 op: SC1_AND (141)
        if (IS_ATOM_INT(_32848)) {
            if (_32848 == 0) {
                DeRef(_32849);
                _32849 = 0;
                goto LE; // [719] 739
            }
        }
        else {
            if (DBL_PTR(_32848)->dbl == 0.0) {
                DeRef(_32849);
                _32849 = 0;
                goto LE; // [719] 739
            }
        }
        // SubProg BackEnd pc: 723 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 725 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32850 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 729 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 731 op: EQUALS (3)
        if (IS_ATOM_INT(_32850)) {
            _32851 = (_32850 == 2);
        }
        else {
            _32851 = binary_op(EQUALS, _32850, 2);
        }
        _32850 = NOVALUE;
        // SubProg BackEnd pc: 735 op: SC2_AND (142)
        DeRef(_32849);
        if (IS_ATOM_INT(_32851))
        _32849 = (_32851 != 0);
        else
        _32849 = DBL_PTR(_32851)->dbl != 0.0;
        // SubProg BackEnd pc: 738 op: NOP1 (159)
LE: // addr: 739 pc: 738 sub: 65786 op: 159
        // SubProg BackEnd pc: 739 op: SC1_OR_IF (147)
        if (_32849 != 0) {
            goto LF; // [739] 777
        }
        // SubProg BackEnd pc: 743 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65809)){
                _32853 = SEQ_PTR(_eentry_65809)->length;
        }
        else {
            _32853 = 1;
        }
        // SubProg BackEnd pc: 746 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 748 op: GREATEREQ (2)
        if (IS_ATOM_INT(_34S_TOKEN_14848)) {
            _32854 = (_32853 >= _34S_TOKEN_14848);
        }
        else {
            _32854 = binary_op(GREATEREQ, _32853, _34S_TOKEN_14848);
        }
        _32853 = NOVALUE;
        // SubProg BackEnd pc: 752 op: SC1_AND (141)
        if (IS_ATOM_INT(_32854)) {
            if (_32854 == 0) {
                DeRef(_32855);
                _32855 = 0;
                goto L10; // [752] 772
            }
        }
        else {
            if (DBL_PTR(_32854)->dbl == 0.0) {
                DeRef(_32855);
                _32855 = 0;
                goto L10; // [752] 772
            }
        }
        // SubProg BackEnd pc: 756 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 758 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32856 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BackEnd pc: 762 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 764 op: COMPARE (76)
        if (IS_ATOM_INT(_32856) && IS_ATOM_INT(_34NOVALUE_15043)){
            _32857 = (_32856 < _34NOVALUE_15043) ? -1 : (_32856 > _34NOVALUE_15043);
        }
        else{
            _32857 = compare(_32856, _34NOVALUE_15043);
        }
        _32856 = NOVALUE;
        // SubProg BackEnd pc: 768 op: SC2_AND (142)
        DeRef(_32855);
        _32855 = (_32857 != 0);
        // SubProg BackEnd pc: 771 op: NOP1 (159)
L10: // addr: 772 pc: 771 sub: 65786 op: 159
        // SubProg BackEnd pc: 772 op: NOP1 (159)
        // SubProg BackEnd pc: 773 op: IF (20)
        if (_32855 == 0)
        {
            _32855 = NOVALUE;
            goto L11; // [773] 802
        }
        else{
            _32855 = NOVALUE;
        }
        // SubProg BackEnd pc: 776 op: NOP1 (159)
LF: // addr: 777 pc: 776 sub: 65786 op: 159
        // SubProg BackEnd pc: 777 op: STARTLINE (58)

        /** backend.e:154					poke_pointer(addr, length(lit_string))  -- record the current offset*/
        // SubProg BackEnd pc: 779 op: LENGTH (42)
        if (IS_SEQUENCE(_lit_string_65807)){
                _32858 = SEQ_PTR(_lit_string_65807)->length;
        }
        else {
            _32858 = 1;
        }
        // SubProg BackEnd pc: 782 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_addr_65789)){
            pokeptr_addr = (uintptr_t *)_addr_65789;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_addr_65789)->dbl);
        }
        *pokeptr_addr = (uintptr_t)_32858;
        _32858 = NOVALUE;
        // SubProg BackEnd pc: 785 op: STARTLINE (58)

        /** backend.e:155					lit_string &= compress(eentry[S_OBJ])*/
        // SubProg BackEnd pc: 787 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 789 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32859 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BackEnd pc: 793 op: PROC (27)
        Ref(_32859);
        _32860 = _59compress(_32859);
        _32859 = NOVALUE;
        // SubProg BackEnd pc: 797 op: CONCAT (15)
        if (IS_SEQUENCE(_lit_string_65807) && IS_ATOM(_32860)) {
            Ref(_32860);
            Append(&_lit_string_65807, _lit_string_65807, _32860);
        }
        else if (IS_ATOM(_lit_string_65807) && IS_SEQUENCE(_32860)) {
        }
        else {
            Concat((object_ptr)&_lit_string_65807, _lit_string_65807, _32860);
        }
        DeRef(_32860);
        _32860 = NOVALUE;
        // SubProg BackEnd pc: 801 op: NOP1 (159)
L11: // addr: 802 pc: 801 sub: 65786 op: 159
        // SubProg BackEnd pc: 802 op: NOP1 (159)
LC: // addr: 803 pc: 802 sub: 65786 op: 159
        // SubProg BackEnd pc: 803 op: NOP1 (159)
L4: // addr: 804 pc: 803 sub: 65786 op: 159
        // SubProg BackEnd pc: 804 op: STARTLINE (58)

        /** backend.e:161			addr += ST_ENTRY_SIZE  -- could save some bytes by changing st structure*/
        // SubProg BackEnd pc: 806 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 808 op: PLUS (11)
        _0 = _addr_65789;
        if (IS_ATOM_INT(_addr_65789)) {
            _addr_65789 = _addr_65789 + _73ST_ENTRY_SIZE_65710;
            if ((object)((uintptr_t)_addr_65789 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_65789 = NewDouble((eudouble)_addr_65789);
            }
        }
        else {
            _addr_65789 = NewDouble(DBL_PTR(_addr_65789)->dbl + (eudouble)_73ST_ENTRY_SIZE_65710);
        }
        DeRef(_0);
        // SubProg BackEnd pc: 812 op: STARTLINE (58)

        /** backend.e:162		end for*/
        // SubProg BackEnd pc: 814 op: ENDFOR_INT_UP1 (54)
        _i_65822 = _i_65822 + 1;
        goto L1; // [814] 79
L2: // addr: 819 pc: 814 sub: 65786 op: 54
        ;
    }
    // SubProg BackEnd pc: 819 op: STARTLINE (58)

    /** backend.e:165		lit = allocate(length(lit_string))*/
    // SubProg BackEnd pc: 821 op: LENGTH (42)
    if (IS_SEQUENCE(_lit_string_65807)){
            _32863 = SEQ_PTR(_lit_string_65807)->length;
    }
    else {
        _32863 = 1;
    }
    // SubProg BackEnd pc: 824 op: PROC (27)
    _0 = _lit_65794;
    _lit_65794 = _3allocate(_32863, 0);
    DeRef(_0);
    _32863 = NOVALUE;
    // SubProg BackEnd pc: 829 op: STARTLINE (58)

    /** backend.e:166		poke(lit, lit_string) -- shouldn't need 0*/
    // SubProg BackEnd pc: 831 op: POKE (128)
    if (IS_ATOM_INT(_lit_65794)){
        poke_addr = (uint8_t *)_lit_65794;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_lit_65794)->dbl);
    }
    _1 = (object)SEQ_PTR(_lit_string_65807);
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
    // SubProg BackEnd pc: 834 op: STARTLINE (58)

    /** backend.e:169		lit_string = {}*/
    // SubProg BackEnd pc: 836 op: ASSIGN (18)
    RefDS(_21936);
    DeRefDS(_lit_string_65807);
    _lit_string_65807 = _21936;
    // SubProg BackEnd pc: 839 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 841 op: STARTLINE (58)

    /** backend.e:172		nm = alloc_symbol_names( st, lit, string_size )*/
    // SubProg BackEnd pc: 843 op: PROC (27)
    Ref(_st_65790);
    Ref(_lit_65794);
    _0 = _nm_65791;
    _nm_65791 = _68alloc_symbol_names(_st_65790, _lit_65794, _string_size_65803);
    DeRef(_0);
    // SubProg BackEnd pc: 849 op: STARTLINE (58)

    /** backend.e:173		poke_pointer( st + ST_NAME, nm )*/
    // SubProg BackEnd pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 853 op: PLUS (11)
    if (IS_ATOM_INT(_st_65790) && IS_ATOM_INT(_73ST_NAME_65671)) {
        _32866 = _st_65790 + _73ST_NAME_65671;
        if ((object)((uintptr_t)_32866 + (uintptr_t)HIGH_BITS) >= 0){
            _32866 = NewDouble((eudouble)_32866);
        }
    }
    else {
        _32866 = binary_op(PLUS, _st_65790, _73ST_NAME_65671);
    }
    // SubProg BackEnd pc: 857 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_32866)){
        pokeptr_addr = (uintptr_t *)_32866;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32866)->dbl);
    }
    if (IS_ATOM_INT(_nm_65791)) {
        *pokeptr_addr = (uintptr_t)_nm_65791;
    }
    else {
        *pokeptr_addr = (uintptr_t)DBL_PTR(_nm_65791)->dbl;
    }
    DeRef(_32866);
    _32866 = NOVALUE;
    // SubProg BackEnd pc: 860 op: STARTLINE (58)

    /** backend.e:175		if not has_coverage() then*/
    // SubProg BackEnd pc: 862 op: PROC (27)
    _32867 = _50has_coverage();
    // SubProg BackEnd pc: 865 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32867)) {
        if (_32867 != 0){
            DeRef(_32867);
            _32867 = NOVALUE;
            goto L12; // [865] 876
        }
    }
    else {
        if (DBL_PTR(_32867)->dbl != 0.0){
            DeRef(_32867);
            _32867 = NOVALUE;
            goto L12; // [865] 876
        }
    }
    DeRef(_32867);
    _32867 = NOVALUE;
    // SubProg BackEnd pc: 868 op: STARTLINE (58)

    /** backend.e:176			SymTab = {}  -- free up some space*/
    // SubProg BackEnd pc: 870 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_35SymTab_14156);
    _35SymTab_14156 = _21936;
    // SubProg BackEnd pc: 873 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 875 op: NOP1 (159)
L12: // addr: 876 pc: 875 sub: 65786 op: 159
    // SubProg BackEnd pc: 876 op: STARTLINE (58)

    /** backend.e:183		size = 0*/
    // SubProg BackEnd pc: 878 op: ASSIGN_I (113)
    _size_65805 = 0;
    // SubProg BackEnd pc: 881 op: STARTLINE (58)

    /** backend.e:184		for i = 1 to length(slist) do*/
    // SubProg BackEnd pc: 883 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 885 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _32869 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _32869 = 1;
    }
    // SubProg BackEnd pc: 888 op: FOR_I (125)
    {
        object _i_66021;
        _i_66021 = 1;
L13: // addr: 895 pc: 888 sub: 65786 op: 125
        if (_i_66021 > _32869){
            goto L14; // [888] 940
        }
        // SubProg BackEnd pc: 895 op: STARTLINE (58)

        /** backend.e:185			if sequence(slist[i]) then*/
        // SubProg BackEnd pc: 897 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 899 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34slist_15278);
        _32870 = (object)*(((s1_ptr)_2)->base + _i_66021);
        // SubProg BackEnd pc: 903 op: IS_A_SEQUENCE (68)
        _32871 = IS_SEQUENCE(_32870);
        _32870 = NOVALUE;
        // SubProg BackEnd pc: 906 op: IF (20)
        if (_32871 == 0)
        {
            _32871 = NOVALUE;
            goto L15; // [906] 918
        }
        else{
            _32871 = NOVALUE;
        }
        // SubProg BackEnd pc: 909 op: STARTLINE (58)

        /** backend.e:186				size += 1*/
        // SubProg BackEnd pc: 911 op: PLUS1_I (117)
        _size_65805 = _size_65805 + 1;
        // SubProg BackEnd pc: 915 op: ELSE (23)
        goto L16; // [915] 933
        // SubProg BackEnd pc: 917 op: NOP1 (159)
L15: // addr: 918 pc: 917 sub: 65786 op: 159
        // SubProg BackEnd pc: 918 op: STARTLINE (58)

        /** backend.e:188				size += slist[i]*/
        // SubProg BackEnd pc: 920 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 922 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34slist_15278);
        _32873 = (object)*(((s1_ptr)_2)->base + _i_66021);
        // SubProg BackEnd pc: 926 op: PLUS (11)
        if (IS_ATOM_INT(_32873)) {
            _size_65805 = _size_65805 + _32873;
        }
        else {
            _size_65805 = binary_op(PLUS, _size_65805, _32873);
        }
        _32873 = NOVALUE;
        // SubProg BackEnd pc: 930 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_size_65805)) {
            _1 = (object)(DBL_PTR(_size_65805)->dbl);
            DeRefDS(_size_65805);
            _size_65805 = _1;
        }
        // SubProg BackEnd pc: 932 op: NOP1 (159)
L16: // addr: 933 pc: 932 sub: 65786 op: 159
        // SubProg BackEnd pc: 933 op: STARTLINE (58)

        /** backend.e:190		end for*/
        // SubProg BackEnd pc: 935 op: ENDFOR_INT_UP1 (54)
        _i_66021 = _i_66021 + 1;
        goto L13; // [935] 895
L14: // addr: 940 pc: 935 sub: 65786 op: 54
        ;
    }
    // SubProg BackEnd pc: 940 op: STARTLINE (58)

    /** backend.e:192		sl = allocate( (size + 1) * SL_SIZE )*/
    // SubProg BackEnd pc: 942 op: PLUS1 (93)
    _32875 = _size_65805 + 1;
    if (_32875 > MAXINT){
        _32875 = NewDouble((eudouble)_32875);
    }
    // SubProg BackEnd pc: 946 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 948 op: MULTIPLY (13)
    if (IS_ATOM_INT(_32875) && IS_ATOM_INT(_73SL_SIZE_65726)) {
        if (_32875 == (short)_32875 && _73SL_SIZE_65726 <= INT15 && _73SL_SIZE_65726 >= -INT15){
            _32876 = _32875 * _73SL_SIZE_65726;
        }
        else{
            _32876 = NewDouble(_32875 * (eudouble)_73SL_SIZE_65726);
        }
    }
    else {
        if (IS_ATOM_INT(_32875)) {
            _32876 = NewDouble((eudouble)_32875 * DBL_PTR(_73SL_SIZE_65726)->dbl);
        }
        else {
            if (IS_ATOM_INT(_73SL_SIZE_65726)) {
                _32876 = NewDouble(DBL_PTR(_32875)->dbl * (eudouble)_73SL_SIZE_65726);
            }
            else
            _32876 = NewDouble(DBL_PTR(_32875)->dbl * DBL_PTR(_73SL_SIZE_65726)->dbl);
        }
    }
    DeRef(_32875);
    _32875 = NOVALUE;
    // SubProg BackEnd pc: 952 op: PROC (27)
    _0 = _sl_65793;
    _sl_65793 = _3allocate(_32876, 0);
    DeRef(_0);
    _32876 = NOVALUE;
    // SubProg BackEnd pc: 957 op: STARTLINE (58)

    /** backend.e:193		mem_set(sl, 0, (size + 1) * SL_SIZE )*/
    // SubProg BackEnd pc: 959 op: PLUS1 (93)
    _32878 = _size_65805 + 1;
    if (_32878 > MAXINT){
        _32878 = NewDouble((eudouble)_32878);
    }
    // SubProg BackEnd pc: 963 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 965 op: MULTIPLY (13)
    if (IS_ATOM_INT(_32878) && IS_ATOM_INT(_73SL_SIZE_65726)) {
        _32879 = _32878 * _73SL_SIZE_65726;
    }
    else {
        if (IS_ATOM_INT(_32878)) {
            _32879 = NewDouble((eudouble)_32878 * DBL_PTR(_73SL_SIZE_65726)->dbl);
        }
        else {
            if (IS_ATOM_INT(_73SL_SIZE_65726)) {
                _32879 = NewDouble(DBL_PTR(_32878)->dbl * (eudouble)_73SL_SIZE_65726);
            }
            else
            _32879 = NewDouble(DBL_PTR(_32878)->dbl * DBL_PTR(_73SL_SIZE_65726)->dbl);
        }
    }
    DeRef(_32878);
    _32878 = NOVALUE;
    // SubProg BackEnd pc: 969 op: MEM_SET (131)
    memory_set(_sl_65793, 0, _32879);
    DeRef(_32879);
    _32879 = NOVALUE;
    // SubProg BackEnd pc: 973 op: STARTLINE (58)

    /** backend.e:195		poke_pointer(sl, size)*/
    // SubProg BackEnd pc: 975 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_sl_65793)){
        pokeptr_addr = (uintptr_t *)_sl_65793;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_sl_65793)->dbl);
    }
    *pokeptr_addr = (uintptr_t)_size_65805;
    // SubProg BackEnd pc: 978 op: STARTLINE (58)

    /** backend.e:196		addr = sl + SL_SIZE -- 0th element is ignored - origin 1*/
    // SubProg BackEnd pc: 980 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 982 op: PLUS (11)
    DeRef(_addr_65789);
    if (IS_ATOM_INT(_sl_65793) && IS_ATOM_INT(_73SL_SIZE_65726)) {
        _addr_65789 = _sl_65793 + _73SL_SIZE_65726;
        if ((object)((uintptr_t)_addr_65789 + (uintptr_t)HIGH_BITS) >= 0){
            _addr_65789 = NewDouble((eudouble)_addr_65789);
        }
    }
    else {
        if (IS_ATOM_INT(_sl_65793)) {
            _addr_65789 = NewDouble((eudouble)_sl_65793 + DBL_PTR(_73SL_SIZE_65726)->dbl);
        }
        else {
            if (IS_ATOM_INT(_73SL_SIZE_65726)) {
                _addr_65789 = NewDouble(DBL_PTR(_sl_65793)->dbl + (eudouble)_73SL_SIZE_65726);
            }
            else
            _addr_65789 = NewDouble(DBL_PTR(_sl_65793)->dbl + DBL_PTR(_73SL_SIZE_65726)->dbl);
        }
    }
    // SubProg BackEnd pc: 986 op: STARTLINE (58)

    /** backend.e:197		string_size = 0*/
    // SubProg BackEnd pc: 988 op: ASSIGN_I (113)
    _string_size_65803 = 0;
    // SubProg BackEnd pc: 991 op: STARTLINE (58)

    /** backend.e:199		for i = 1 to length(slist) do*/
    // SubProg BackEnd pc: 993 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 995 op: LENGTH (42)
    if (IS_SEQUENCE(_34slist_15278)){
            _32881 = SEQ_PTR(_34slist_15278)->length;
    }
    else {
        _32881 = 1;
    }
    // SubProg BackEnd pc: 998 op: FOR_I (125)
    {
        object _i_66044;
        _i_66044 = 1;
L17: // addr: 1005 pc: 998 sub: 65786 op: 125
        if (_i_66044 > _32881){
            goto L18; // [998] 1358
        }
        // SubProg BackEnd pc: 1005 op: STARTLINE (58)

        /** backend.e:200			if sequence(slist[i]) then*/
        // SubProg BackEnd pc: 1007 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1009 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34slist_15278);
        _32882 = (object)*(((s1_ptr)_2)->base + _i_66044);
        // SubProg BackEnd pc: 1013 op: IS_A_SEQUENCE (68)
        _32883 = IS_SEQUENCE(_32882);
        _32882 = NOVALUE;
        // SubProg BackEnd pc: 1016 op: IF (20)
        if (_32883 == 0)
        {
            _32883 = NOVALUE;
            goto L19; // [1016] 1035
        }
        else{
            _32883 = NOVALUE;
        }
        // SubProg BackEnd pc: 1019 op: STARTLINE (58)

        /** backend.e:201				eentry = slist[i]*/
        // SubProg BackEnd pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1023 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_65809);
        _2 = (object)SEQ_PTR(_34slist_15278);
        _eentry_65809 = (object)*(((s1_ptr)_2)->base + _i_66044);
        Ref(_eentry_65809);
        // SubProg BackEnd pc: 1027 op: STARTLINE (58)

        /** backend.e:202				repcount = 1*/
        // SubProg BackEnd pc: 1029 op: ASSIGN_I (113)
        _repcount_65806 = 1;
        // SubProg BackEnd pc: 1032 op: ELSE (23)
        goto L1A; // [1032] 1101
        // SubProg BackEnd pc: 1034 op: NOP1 (159)
L19: // addr: 1035 pc: 1034 sub: 65786 op: 159
        // SubProg BackEnd pc: 1035 op: STARTLINE (58)

        /** backend.e:204				eentry = slist[i-1]*/
        // SubProg BackEnd pc: 1037 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1039 op: MINUS (10)
        _32885 = _i_66044 - 1;
        // SubProg BackEnd pc: 1043 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_65809);
        _2 = (object)SEQ_PTR(_34slist_15278);
        _eentry_65809 = (object)*(((s1_ptr)_2)->base + _32885);
        Ref(_eentry_65809);
        // SubProg BackEnd pc: 1047 op: STARTLINE (58)

        /** backend.e:205				if length(eentry) < 4 then*/
        // SubProg BackEnd pc: 1049 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65809)){
                _32887 = SEQ_PTR(_eentry_65809)->length;
        }
        else {
            _32887 = 1;
        }
        // SubProg BackEnd pc: 1052 op: LESS_IFW_I (119)
        if (_32887 >= 4)
        goto L1B; // [1052] 1073
        // SubProg BackEnd pc: 1056 op: STARTLINE (58)

        /** backend.e:206					eentry[1] += 1*/
        // SubProg BackEnd pc: 1058 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32889 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BackEnd pc: 1062 op: PLUS1 (93)
        if (IS_ATOM_INT(_32889)) {
            _32890 = _32889 + 1;
            if (_32890 > MAXINT){
                _32890 = NewDouble((eudouble)_32890);
            }
        }
        else
        _32890 = binary_op(PLUS, 1, _32889);
        _32889 = NOVALUE;
        // SubProg BackEnd pc: 1066 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _eentry_65809 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32890;
        if( _1 != _32890 ){
            DeRef(_1);
        }
        _32890 = NOVALUE;
        // SubProg BackEnd pc: 1070 op: ELSE (23)
        goto L1C; // [1070] 1090
        // SubProg BackEnd pc: 1072 op: NOP1 (159)
L1B: // addr: 1073 pc: 1072 sub: 65786 op: 159
        // SubProg BackEnd pc: 1073 op: STARTLINE (58)

        /** backend.e:208					eentry[LINE] += 1*/
        // SubProg BackEnd pc: 1075 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1077 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_eentry_65809);
        _32891 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg BackEnd pc: 1081 op: PLUS1 (93)
        if (IS_ATOM_INT(_32891)) {
            _32892 = _32891 + 1;
            if (_32892 > MAXINT){
                _32892 = NewDouble((eudouble)_32892);
            }
        }
        else
        _32892 = binary_op(PLUS, 1, _32891);
        _32891 = NOVALUE;
        // SubProg BackEnd pc: 1085 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_eentry_65809);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _eentry_65809 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32892;
        if( _1 != _32892 ){
            DeRef(_1);
        }
        _32892 = NOVALUE;
        // SubProg BackEnd pc: 1089 op: NOP1 (159)
L1C: // addr: 1090 pc: 1089 sub: 65786 op: 159
        // SubProg BackEnd pc: 1090 op: STARTLINE (58)

        /** backend.e:210				repcount = slist[i]*/
        // SubProg BackEnd pc: 1092 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1094 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_34slist_15278);
        _repcount_65806 = (object)*(((s1_ptr)_2)->base + _i_66044);
        if (!IS_ATOM_INT(_repcount_65806)){
            _repcount_65806 = (object)DBL_PTR(_repcount_65806)->dbl;
        }
        // SubProg BackEnd pc: 1100 op: NOP1 (159)
L1A: // addr: 1101 pc: 1100 sub: 65786 op: 159
        // SubProg BackEnd pc: 1101 op: STARTLINE (58)

        /** backend.e:213			short = length(eentry) < 4*/
        // SubProg BackEnd pc: 1103 op: PRIVATE_INIT_CHECK (30)
        // SubProg BackEnd pc: 1105 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65809)){
                _32894 = SEQ_PTR(_eentry_65809)->length;
        }
        else {
            _32894 = 1;
        }
        // SubProg BackEnd pc: 1108 op: LESS (1)
        _short_65804 = (_32894 < 4);
        _32894 = NOVALUE;
        // SubProg BackEnd pc: 1112 op: STARTLINE (58)

        /** backend.e:214			sequence started_file = repeat( 0, length( known_files ) )*/
        // SubProg BackEnd pc: 1114 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1116 op: LENGTH (42)
        if (IS_SEQUENCE(_35known_files_14157)){
                _32896 = SEQ_PTR(_35known_files_14157)->length;
        }
        else {
            _32896 = 1;
        }
        // SubProg BackEnd pc: 1119 op: REPEAT (32)
        DeRefi(_started_file_66070);
        _started_file_66070 = Repeat(0, _32896);
        _32896 = NOVALUE;
        // SubProg BackEnd pc: 1123 op: STARTLINE (58)

        /** backend.e:215			for j = 1 to repcount do*/
        // SubProg BackEnd pc: 1125 op: PRIVATE_INIT_CHECK (30)
        // SubProg BackEnd pc: 1127 op: ASSIGN (18)
        _32898 = _repcount_65806;
        // SubProg BackEnd pc: 1130 op: FOR_I (125)
        {
            object _j_66075;
            _j_66075 = 1;
L1D: // addr: 1137 pc: 1130 sub: 65786 op: 125
            if (_j_66075 > _32898){
                goto L1E; // [1130] 1349
            }
            // SubProg BackEnd pc: 1137 op: STARTLINE (58)

            /** backend.e:216				poke2(addr + SL_LINE, eentry[LINE-short])  -- hits 4,5,6,7 */
            // SubProg BackEnd pc: 1139 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1141 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73SL_LINE_65714)) {
                _32899 = _addr_65789 + _73SL_LINE_65714;
                if ((object)((uintptr_t)_32899 + (uintptr_t)HIGH_BITS) >= 0){
                    _32899 = NewDouble((eudouble)_32899);
                }
            }
            else {
                _32899 = binary_op(PLUS, _addr_65789, _73SL_LINE_65714);
            }
            // SubProg BackEnd pc: 1145 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1147 op: MINUS (10)
            _32900 = 2 - _short_65804;
            // SubProg BackEnd pc: 1151 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32901 = (object)*(((s1_ptr)_2)->base + _32900);
            // SubProg BackEnd pc: 1155 op: POKE2 (178)
            if (IS_ATOM_INT(_32899)){
                poke2_addr = (uint16_t *)_32899;
            }
            else {
                poke2_addr = (uint16_t *)(uintptr_t)(DBL_PTR(_32899)->dbl);
            }
            if (IS_ATOM_INT(_32901)) {
                *poke2_addr = (uint16_t)_32901;
            }
            else if (IS_ATOM(_32901)) {
                *poke2_addr = (uint16_t)DBL_PTR(_32901)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32901);
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
            DeRef(_32899);
            _32899 = NOVALUE;
            _32901 = NOVALUE;
            // SubProg BackEnd pc: 1158 op: STARTLINE (58)

            /** backend.e:218				poke(addr + SL_FILE_NO, eentry[LOCAL_FILE_NO-short])*/
            // SubProg BackEnd pc: 1160 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1162 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73SL_FILE_NO_65717)) {
                _32902 = _addr_65789 + _73SL_FILE_NO_65717;
                if ((object)((uintptr_t)_32902 + (uintptr_t)HIGH_BITS) >= 0){
                    _32902 = NewDouble((eudouble)_32902);
                }
            }
            else {
                _32902 = binary_op(PLUS, _addr_65789, _73SL_FILE_NO_65717);
            }
            // SubProg BackEnd pc: 1166 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1168 op: MINUS (10)
            _32903 = 3 - _short_65804;
            // SubProg BackEnd pc: 1172 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32904 = (object)*(((s1_ptr)_2)->base + _32903);
            // SubProg BackEnd pc: 1176 op: POKE (128)
            if (IS_ATOM_INT(_32902)){
                poke_addr = (uint8_t *)_32902;
            }
            else {
                poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32902)->dbl);
            }
            if (IS_ATOM_INT(_32904)) {
                *poke_addr = (uint8_t)_32904;
            }
            else if (IS_ATOM(_32904)) {
                *poke_addr = (uint8_t)DBL_PTR(_32904)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32904);
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
            DeRef(_32902);
            _32902 = NOVALUE;
            _32904 = NOVALUE;
            // SubProg BackEnd pc: 1179 op: STARTLINE (58)

            /** backend.e:219				if not short then*/
            // SubProg BackEnd pc: 1181 op: NOT_IFW (108)
            if (_short_65804 != 0)
            goto L1F; // [1181] 1253
            // SubProg BackEnd pc: 1184 op: STARTLINE (58)

            /** backend.e:220					if eentry[SRC] then*/
            // SubProg BackEnd pc: 1186 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1188 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32906 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg BackEnd pc: 1192 op: IF (20)
            if (_32906 == 0) {
                _32906 = NOVALUE;
                goto L20; // [1192] 1235
            }
            else {
                if (!IS_ATOM_INT(_32906) && DBL_PTR(_32906)->dbl == 0.0){
                    _32906 = NOVALUE;
                    goto L20; // [1192] 1235
                }
                _32906 = NOVALUE;
            }
            _32906 = NOVALUE;
            // SubProg BackEnd pc: 1195 op: STARTLINE (58)

            /** backend.e:221						poke_pointer(addr, all_source[1+floor(eentry[SRC]/SOURCE_CHUNK)]*/
            // SubProg BackEnd pc: 1197 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1199 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1201 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32907 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg BackEnd pc: 1205 op: FLOOR_DIV (63)
            if (IS_ATOM_INT(_32907)) {
                if (10000 > 0 && _32907 >= 0) {
                    _32908 = _32907 / 10000;
                }
                else {
                    temp_dbl = EUFLOOR((eudouble)_32907 / (eudouble)10000);
                    if (_32907 != MININT)
                    _32908 = (object)temp_dbl;
                    else
                    _32908 = NewDouble(temp_dbl);
                }
            }
            else {
                _2 = binary_op(DIVIDE, _32907, 10000);
                _32908 = unary_op(FLOOR, _2);
                DeRef(_2);
            }
            _32907 = NOVALUE;
            // SubProg BackEnd pc: 1209 op: PLUS1 (93)
            if (IS_ATOM_INT(_32908)) {
                _32909 = _32908 + 1;
            }
            else
            _32909 = binary_op(PLUS, 1, _32908);
            DeRef(_32908);
            _32908 = NOVALUE;
            // SubProg BackEnd pc: 1213 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_35all_source_14180);
            if (!IS_ATOM_INT(_32909)){
                _32910 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32909)->dbl));
            }
            else{
                _32910 = (object)*(((s1_ptr)_2)->base + _32909);
            }
            // SubProg BackEnd pc: 1217 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1219 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32911 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg BackEnd pc: 1223 op: REMAINDER (71)
            if (IS_ATOM_INT(_32911)) {
                _32912 = (_32911 % 10000);
            }
            else {
                _32912 = binary_op(REMAINDER, _32911, 10000);
            }
            _32911 = NOVALUE;
            // SubProg BackEnd pc: 1227 op: PLUS (11)
            if (IS_ATOM_INT(_32910) && IS_ATOM_INT(_32912)) {
                _32913 = _32910 + _32912;
                if ((object)((uintptr_t)_32913 + (uintptr_t)HIGH_BITS) >= 0){
                    _32913 = NewDouble((eudouble)_32913);
                }
            }
            else {
                _32913 = binary_op(PLUS, _32910, _32912);
            }
            _32910 = NOVALUE;
            DeRef(_32912);
            _32912 = NOVALUE;
            // SubProg BackEnd pc: 1231 op: POKE_POINTER (215)
            if (IS_ATOM_INT(_addr_65789)){
                pokeptr_addr = (uintptr_t *)_addr_65789;
            }
            else {
                pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_addr_65789)->dbl);
            }
            if (IS_ATOM_INT(_32913)) {
                *pokeptr_addr = (uintptr_t)_32913;
            }
            else if (IS_ATOM(_32913)) {
                *pokeptr_addr = (uintptr_t)DBL_PTR(_32913)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32913);
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
            DeRef(_32913);
            _32913 = NOVALUE;
            // SubProg BackEnd pc: 1234 op: NOP1 (159)
L20: // addr: 1235 pc: 1234 sub: 65786 op: 159
            // SubProg BackEnd pc: 1235 op: STARTLINE (58)

            /** backend.e:224					poke(addr + SL_OPTIONS, eentry[OPTIONS]) -- else leave it 0*/
            // SubProg BackEnd pc: 1237 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1239 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73SL_OPTIONS_65720)) {
                _32914 = _addr_65789 + _73SL_OPTIONS_65720;
                if ((object)((uintptr_t)_32914 + (uintptr_t)HIGH_BITS) >= 0){
                    _32914 = NewDouble((eudouble)_32914);
                }
            }
            else {
                _32914 = binary_op(PLUS, _addr_65789, _73SL_OPTIONS_65720);
            }
            // SubProg BackEnd pc: 1243 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1245 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32915 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg BackEnd pc: 1249 op: POKE (128)
            if (IS_ATOM_INT(_32914)){
                poke_addr = (uint8_t *)_32914;
            }
            else {
                poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32914)->dbl);
            }
            if (IS_ATOM_INT(_32915)) {
                *poke_addr = (uint8_t)_32915;
            }
            else if (IS_ATOM(_32915)) {
                *poke_addr = (uint8_t)DBL_PTR(_32915)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32915);
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
            DeRef(_32914);
            _32914 = NOVALUE;
            _32915 = NOVALUE;
            // SubProg BackEnd pc: 1252 op: NOP1 (159)
L1F: // addr: 1253 pc: 1252 sub: 65786 op: 159
            // SubProg BackEnd pc: 1253 op: STARTLINE (58)

            /** backend.e:226				if started_file[eentry[LOCAL_FILE_NO-short]] then*/
            // SubProg BackEnd pc: 1255 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1257 op: MINUS (10)
            _32916 = 3 - _short_65804;
            // SubProg BackEnd pc: 1261 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32917 = (object)*(((s1_ptr)_2)->base + _32916);
            // SubProg BackEnd pc: 1265 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_started_file_66070);
            if (!IS_ATOM_INT(_32917)){
                _32918 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32917)->dbl));
            }
            else{
                _32918 = (object)*(((s1_ptr)_2)->base + _32917);
            }
            // SubProg BackEnd pc: 1269 op: IF (20)
            if (_32918 == 0)
            {
                _32918 = NOVALUE;
                goto L21; // [1269] 1286
            }
            else{
                _32918 = NOVALUE;
            }
            // SubProg BackEnd pc: 1272 op: STARTLINE (58)

            /** backend.e:227					poke4( addr + SL_MULTILINE, -1 )*/
            // SubProg BackEnd pc: 1274 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1276 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73SL_MULTILINE_65723)) {
                _32919 = _addr_65789 + _73SL_MULTILINE_65723;
                if ((object)((uintptr_t)_32919 + (uintptr_t)HIGH_BITS) >= 0){
                    _32919 = NewDouble((eudouble)_32919);
                }
            }
            else {
                _32919 = binary_op(PLUS, _addr_65789, _73SL_MULTILINE_65723);
            }
            // SubProg BackEnd pc: 1280 op: POKE4 (138)
            if (IS_ATOM_INT(_32919)){
                poke4_addr = (uint32_t *)_32919;
            }
            else {
                poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32919)->dbl);
            }
            *poke4_addr = (uint32_t)-1;
            DeRef(_32919);
            _32919 = NOVALUE;
            // SubProg BackEnd pc: 1283 op: ELSE (23)
            goto L22; // [1283] 1314
            // SubProg BackEnd pc: 1285 op: NOP1 (159)
L21: // addr: 1286 pc: 1285 sub: 65786 op: 159
            // SubProg BackEnd pc: 1286 op: STARTLINE (58)

            /** backend.e:229					poke4( addr + SL_MULTILINE, 0 )*/
            // SubProg BackEnd pc: 1288 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1290 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73SL_MULTILINE_65723)) {
                _32920 = _addr_65789 + _73SL_MULTILINE_65723;
                if ((object)((uintptr_t)_32920 + (uintptr_t)HIGH_BITS) >= 0){
                    _32920 = NewDouble((eudouble)_32920);
                }
            }
            else {
                _32920 = binary_op(PLUS, _addr_65789, _73SL_MULTILINE_65723);
            }
            // SubProg BackEnd pc: 1294 op: POKE4 (138)
            if (IS_ATOM_INT(_32920)){
                poke4_addr = (uint32_t *)_32920;
            }
            else {
                poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32920)->dbl);
            }
            *poke4_addr = (uint32_t)0;
            DeRef(_32920);
            _32920 = NOVALUE;
            // SubProg BackEnd pc: 1297 op: STARTLINE (58)

            /** backend.e:230					started_file[eentry[LOCAL_FILE_NO-short]] = 1*/
            // SubProg BackEnd pc: 1299 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1301 op: MINUS (10)
            _32921 = 3 - _short_65804;
            // SubProg BackEnd pc: 1305 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32922 = (object)*(((s1_ptr)_2)->base + _32921);
            // SubProg BackEnd pc: 1309 op: ASSIGN_SUBS_I (118)
            _2 = (object)SEQ_PTR(_started_file_66070);
            if (!IS_ATOM_INT(_32922))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_32922)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _32922);
            *(intptr_t *)_2 = 1;
            // SubProg BackEnd pc: 1313 op: NOP1 (159)
L22: // addr: 1314 pc: 1313 sub: 65786 op: 159
            // SubProg BackEnd pc: 1314 op: STARTLINE (58)

            /** backend.e:232				addr += SL_SIZE*/
            // SubProg BackEnd pc: 1316 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1318 op: PLUS (11)
            _0 = _addr_65789;
            if (IS_ATOM_INT(_addr_65789) && IS_ATOM_INT(_73SL_SIZE_65726)) {
                _addr_65789 = _addr_65789 + _73SL_SIZE_65726;
                if ((object)((uintptr_t)_addr_65789 + (uintptr_t)HIGH_BITS) >= 0){
                    _addr_65789 = NewDouble((eudouble)_addr_65789);
                }
            }
            else {
                if (IS_ATOM_INT(_addr_65789)) {
                    _addr_65789 = NewDouble((eudouble)_addr_65789 + DBL_PTR(_73SL_SIZE_65726)->dbl);
                }
                else {
                    if (IS_ATOM_INT(_73SL_SIZE_65726)) {
                        _addr_65789 = NewDouble(DBL_PTR(_addr_65789)->dbl + (eudouble)_73SL_SIZE_65726);
                    }
                    else
                    _addr_65789 = NewDouble(DBL_PTR(_addr_65789)->dbl + DBL_PTR(_73SL_SIZE_65726)->dbl);
                }
            }
            DeRef(_0);
            // SubProg BackEnd pc: 1322 op: STARTLINE (58)

            /** backend.e:233				eentry[LINE-short] += 1*/
            // SubProg BackEnd pc: 1324 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1326 op: MINUS (10)
            _32924 = 2 - _short_65804;
            // SubProg BackEnd pc: 1330 op: ASSIGN_OP_SUBS (149)
            _2 = (object)SEQ_PTR(_eentry_65809);
            _32925 = (object)*(((s1_ptr)_2)->base + _32924);
            // SubProg BackEnd pc: 1334 op: PLUS1 (93)
            if (IS_ATOM_INT(_32925)) {
                _32926 = _32925 + 1;
                if (_32926 > MAXINT){
                    _32926 = NewDouble((eudouble)_32926);
                }
            }
            else
            _32926 = binary_op(PLUS, 1, _32925);
            _32925 = NOVALUE;
            // SubProg BackEnd pc: 1338 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_eentry_65809);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _eentry_65809 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _32924);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _32926;
            if( _1 != _32926 ){
                DeRef(_1);
            }
            _32926 = NOVALUE;
            // SubProg BackEnd pc: 1342 op: STARTLINE (58)

            /** backend.e:234			end for*/
            // SubProg BackEnd pc: 1344 op: ENDFOR_INT_UP1 (54)
            _j_66075 = _j_66075 + 1;
            goto L1D; // [1344] 1137
L1E: // addr: 1349 pc: 1344 sub: 65786 op: 54
            ;
        }
        // SubProg BackEnd pc: 1349 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var started_file_66070
        DeRefi(_started_file_66070);
        _started_file_66070 = NOVALUE;
        // SubProg BackEnd pc: 1351 op: STARTLINE (58)

        /** backend.e:235		end for*/
        // SubProg BackEnd pc: 1353 op: ENDFOR_INT_UP1 (54)
        _i_66044 = _i_66044 + 1;
        goto L17; // [1353] 1005
L18: // addr: 1358 pc: 1353 sub: 65786 op: 54
        ;
    }
    // SubProg BackEnd pc: 1358 op: STARTLINE (58)

    /** backend.e:237		if not has_coverage() then*/
    // SubProg BackEnd pc: 1360 op: PROC (27)
    _32927 = _50has_coverage();
    // SubProg BackEnd pc: 1363 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32927)) {
        if (_32927 != 0){
            DeRef(_32927);
            _32927 = NOVALUE;
            goto L23; // [1363] 1374
        }
    }
    else {
        if (DBL_PTR(_32927)->dbl != 0.0){
            DeRef(_32927);
            _32927 = NOVALUE;
            goto L23; // [1363] 1374
        }
    }
    DeRef(_32927);
    _32927 = NOVALUE;
    // SubProg BackEnd pc: 1366 op: STARTLINE (58)

    /** backend.e:238			slist = {}  -- free up some space*/
    // SubProg BackEnd pc: 1368 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_34slist_15278);
    _34slist_15278 = _21936;
    // SubProg BackEnd pc: 1371 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 1373 op: NOP1 (159)
L23: // addr: 1374 pc: 1373 sub: 65786 op: 159
    // SubProg BackEnd pc: 1374 op: STARTLINE (58)

    /** backend.e:242		other_strings = append(known_files, file_name_entered) & warning_list*/
    // SubProg BackEnd pc: 1376 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1378 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1380 op: APPEND (35)
    RefDS(_34file_name_entered_15185);
    Append(&_32929, _35known_files_14157, _34file_name_entered_15185);
    // SubProg BackEnd pc: 1384 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1386 op: CONCAT (15)
    Concat((object_ptr)&_other_strings_65808, _32929, _49warning_list_48717);
    DeRefDS(_32929);
    _32929 = NOVALUE;
    DeRef(_32929);
    _32929 = NOVALUE;
    // SubProg BackEnd pc: 1390 op: STARTLINE (58)

    /** backend.e:243		string_size = 0*/
    // SubProg BackEnd pc: 1392 op: ASSIGN_I (113)
    _string_size_65803 = 0;
    // SubProg BackEnd pc: 1395 op: STARTLINE (58)

    /** backend.e:244		for i = 1 to length(other_strings) do*/
    // SubProg BackEnd pc: 1397 op: LENGTH (42)
    if (IS_SEQUENCE(_other_strings_65808)){
            _32931 = SEQ_PTR(_other_strings_65808)->length;
    }
    else {
        _32931 = 1;
    }
    // SubProg BackEnd pc: 1400 op: FOR_I (125)
    {
        object _i_66136;
        _i_66136 = 1;
L24: // addr: 1407 pc: 1400 sub: 65786 op: 125
        if (_i_66136 > _32931){
            goto L25; // [1400] 1433
        }
        // SubProg BackEnd pc: 1407 op: STARTLINE (58)

        /** backend.e:245			string_size += length(other_strings[i])+1*/
        // SubProg BackEnd pc: 1409 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_other_strings_65808);
        _32932 = (object)*(((s1_ptr)_2)->base + _i_66136);
        // SubProg BackEnd pc: 1413 op: LENGTH (42)
        if (IS_SEQUENCE(_32932)){
                _32933 = SEQ_PTR(_32932)->length;
        }
        else {
            _32933 = 1;
        }
        _32932 = NOVALUE;
        // SubProg BackEnd pc: 1416 op: PLUS1 (93)
        _32934 = _32933 + 1;
        _32933 = NOVALUE;
        // SubProg BackEnd pc: 1420 op: PLUS (11)
        _string_size_65803 = _string_size_65803 + _32934;
        _32934 = NOVALUE;
        // SubProg BackEnd pc: 1426 op: STARTLINE (58)

        /** backend.e:246		end for*/
        // SubProg BackEnd pc: 1428 op: ENDFOR_INT_UP1 (54)
        _i_66136 = _i_66136 + 1;
        goto L24; // [1428] 1407
L25: // addr: 1433 pc: 1428 sub: 65786 op: 54
        ;
    }
    // SubProg BackEnd pc: 1433 op: STARTLINE (58)

    /** backend.e:248		ms = allocate( sizeof( C_POINTER ) * (10 + length(other_strings) ) ) -- miscellaneous*/
    // SubProg BackEnd pc: 1435 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1437 op: SIZEOF (217)
    _32936 = eu_sizeof( 50331649 );
    DeRef(_32936);
    // SubProg BackEnd pc: 1440 op: LENGTH (42)
    if (IS_SEQUENCE(_other_strings_65808)){
            _32937 = SEQ_PTR(_other_strings_65808)->length;
    }
    else {
        _32937 = 1;
    }
    // SubProg BackEnd pc: 1443 op: PLUS (11)
    _32938 = 10 + _32937;
    _32937 = NOVALUE;
    // SubProg BackEnd pc: 1447 op: MULTIPLY (13)
    if (_32936 == (short)_32936 && _32938 <= INT15){
        _32939 = _32936 * _32938;
    }
    else{
        _32939 = NewDouble(_32936 * (eudouble)_32938);
    }
    _32936 = NOVALUE;
    _32938 = NOVALUE;
    // SubProg BackEnd pc: 1451 op: PROC (27)
    _0 = _ms_65792;
    _ms_65792 = _3allocate(_32939, 0);
    DeRef(_0);
    _32939 = NOVALUE;
    // SubProg BackEnd pc: 1456 op: STARTLINE (58)

    /** backend.e:249		poke_pointer( ms, {*/
    // SubProg BackEnd pc: 1458 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1460 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1462 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1464 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1466 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1468 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1470 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48717)){
            _32941 = SEQ_PTR(_49warning_list_48717)->length;
    }
    else {
        _32941 = 1;
    }
    // SubProg BackEnd pc: 1473 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1475 op: LENGTH (42)
    if (IS_SEQUENCE(_35known_files_14157)){
            _32942 = SEQ_PTR(_35known_files_14157)->length;
    }
    else {
        _32942 = 1;
    }
    // SubProg BackEnd pc: 1478 op: RIGHT_BRACE_N (31)
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _34max_stack_per_call_15287;
    ((intptr_t*)_2)[2] = _35AnyTimeProfile_14178;
    ((intptr_t*)_2)[3] = _35AnyStatementProfile_14179;
    ((intptr_t*)_2)[4] = _34sample_size_15288;
    ((intptr_t*)_2)[5] = _34gline_number_15193;
    ((intptr_t*)_2)[6] = _il_file_65788;
    ((intptr_t*)_2)[7] = _32941;
    ((intptr_t*)_2)[8] = _32942;
    _32943 = MAKE_SEQ(_1);
    _32942 = NOVALUE;
    _32941 = NOVALUE;
    // SubProg BackEnd pc: 1489 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_ms_65792)){
        pokeptr_addr = (uintptr_t *)_ms_65792;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_ms_65792)->dbl);
    }
    _1 = (object)SEQ_PTR(_32943);
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
    DeRefDS(_32943);
    _32943 = NOVALUE;
    // SubProg BackEnd pc: 1492 op: STARTLINE (58)

    /** backend.e:262		fn = allocate(string_size)*/
    // SubProg BackEnd pc: 1494 op: PROC (27)
    _0 = _fn_65795;
    _fn_65795 = _3allocate(_string_size_65803, 0);
    DeRef(_0);
    // SubProg BackEnd pc: 1499 op: STARTLINE (58)

    /** backend.e:264		for i = 1 to length(other_strings) do*/
    // SubProg BackEnd pc: 1501 op: LENGTH (42)
    if (IS_SEQUENCE(_other_strings_65808)){
            _32945 = SEQ_PTR(_other_strings_65808)->length;
    }
    else {
        _32945 = 1;
    }
    // SubProg BackEnd pc: 1504 op: FOR_I (125)
    {
        object _i_66162;
        _i_66162 = 1;
L26: // addr: 1511 pc: 1504 sub: 65786 op: 125
        if (_i_66162 > _32945){
            goto L27; // [1504] 1586
        }
        // SubProg BackEnd pc: 1511 op: STARTLINE (58)

        /** backend.e:265			poke_pointer(ms + 8 * sizeof( C_POINTER ) + (i-1) * sizeof( C_POINTER ), fn)*/
        // SubProg BackEnd pc: 1513 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1515 op: SIZEOF (217)
        _32946 = eu_sizeof( 50331649 );
        DeRef(_32946);
        // SubProg BackEnd pc: 1518 op: MULTIPLY (13)
        if (_32946 <= INT15){
            _32947 = 8 * _32946;
        }
        else{
            _32947 = NewDouble(8 * (eudouble)_32946);
        }
        _32946 = NOVALUE;
        // SubProg BackEnd pc: 1522 op: PLUS (11)
        if (IS_ATOM_INT(_ms_65792) && IS_ATOM_INT(_32947)) {
            _32948 = _ms_65792 + _32947;
            if ((object)((uintptr_t)_32948 + (uintptr_t)HIGH_BITS) >= 0){
                _32948 = NewDouble((eudouble)_32948);
            }
        }
        else {
            if (IS_ATOM_INT(_ms_65792)) {
                _32948 = NewDouble((eudouble)_ms_65792 + DBL_PTR(_32947)->dbl);
            }
            else {
                if (IS_ATOM_INT(_32947)) {
                    _32948 = NewDouble(DBL_PTR(_ms_65792)->dbl + (eudouble)_32947);
                }
                else
                _32948 = NewDouble(DBL_PTR(_ms_65792)->dbl + DBL_PTR(_32947)->dbl);
            }
        }
        DeRef(_32947);
        _32947 = NOVALUE;
        // SubProg BackEnd pc: 1526 op: MINUS (10)
        _32949 = _i_66162 - 1;
        // SubProg BackEnd pc: 1530 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1532 op: SIZEOF (217)
        _32950 = eu_sizeof( 50331649 );
        DeRef(_32950);
        // SubProg BackEnd pc: 1535 op: MULTIPLY (13)
        if (_32949 == (short)_32949 && _32950 <= INT15){
            _32951 = _32949 * _32950;
        }
        else{
            _32951 = NewDouble(_32949 * (eudouble)_32950);
        }
        _32949 = NOVALUE;
        _32950 = NOVALUE;
        // SubProg BackEnd pc: 1539 op: PLUS (11)
        if (IS_ATOM_INT(_32948) && IS_ATOM_INT(_32951)) {
            _32952 = _32948 + _32951;
            if ((object)((uintptr_t)_32952 + (uintptr_t)HIGH_BITS) >= 0){
                _32952 = NewDouble((eudouble)_32952);
            }
        }
        else {
            if (IS_ATOM_INT(_32948)) {
                _32952 = NewDouble((eudouble)_32948 + DBL_PTR(_32951)->dbl);
            }
            else {
                if (IS_ATOM_INT(_32951)) {
                    _32952 = NewDouble(DBL_PTR(_32948)->dbl + (eudouble)_32951);
                }
                else
                _32952 = NewDouble(DBL_PTR(_32948)->dbl + DBL_PTR(_32951)->dbl);
            }
        }
        DeRef(_32948);
        _32948 = NOVALUE;
        DeRef(_32951);
        _32951 = NOVALUE;
        // SubProg BackEnd pc: 1543 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32952)){
            pokeptr_addr = (uintptr_t *)_32952;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32952)->dbl);
        }
        if (IS_ATOM_INT(_fn_65795)) {
            *pokeptr_addr = (uintptr_t)_fn_65795;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_fn_65795)->dbl;
        }
        DeRef(_32952);
        _32952 = NOVALUE;
        // SubProg BackEnd pc: 1546 op: STARTLINE (58)

        /** backend.e:267			poke(fn, other_strings[i])*/
        // SubProg BackEnd pc: 1548 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_other_strings_65808);
        _32953 = (object)*(((s1_ptr)_2)->base + _i_66162);
        // SubProg BackEnd pc: 1552 op: POKE (128)
        if (IS_ATOM_INT(_fn_65795)){
            poke_addr = (uint8_t *)_fn_65795;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_fn_65795)->dbl);
        }
        if (IS_ATOM_INT(_32953)) {
            *poke_addr = (uint8_t)_32953;
        }
        else if (IS_ATOM(_32953)) {
            *poke_addr = (uint8_t)DBL_PTR(_32953)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32953);
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
        _32953 = NOVALUE;
        // SubProg BackEnd pc: 1555 op: STARTLINE (58)

        /** backend.e:268			fn += length(other_strings[i])*/
        // SubProg BackEnd pc: 1557 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_other_strings_65808);
        _32954 = (object)*(((s1_ptr)_2)->base + _i_66162);
        // SubProg BackEnd pc: 1561 op: LENGTH (42)
        if (IS_SEQUENCE(_32954)){
                _32955 = SEQ_PTR(_32954)->length;
        }
        else {
            _32955 = 1;
        }
        _32954 = NOVALUE;
        // SubProg BackEnd pc: 1564 op: PLUS (11)
        _0 = _fn_65795;
        if (IS_ATOM_INT(_fn_65795)) {
            _fn_65795 = _fn_65795 + _32955;
            if ((object)((uintptr_t)_fn_65795 + (uintptr_t)HIGH_BITS) >= 0){
                _fn_65795 = NewDouble((eudouble)_fn_65795);
            }
        }
        else {
            _fn_65795 = NewDouble(DBL_PTR(_fn_65795)->dbl + (eudouble)_32955);
        }
        DeRef(_0);
        _32955 = NOVALUE;
        // SubProg BackEnd pc: 1568 op: STARTLINE (58)

        /** backend.e:269			poke(fn, 0)*/
        // SubProg BackEnd pc: 1570 op: POKE (128)
        if (IS_ATOM_INT(_fn_65795)){
            poke_addr = (uint8_t *)_fn_65795;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_fn_65795)->dbl);
        }
        *poke_addr = (uint8_t)0;
        // SubProg BackEnd pc: 1573 op: STARTLINE (58)

        /** backend.e:270			fn += 1*/
        // SubProg BackEnd pc: 1575 op: PLUS1 (93)
        _0 = _fn_65795;
        if (IS_ATOM_INT(_fn_65795)) {
            _fn_65795 = _fn_65795 + 1;
            if (_fn_65795 > MAXINT){
                _fn_65795 = NewDouble((eudouble)_fn_65795);
            }
        }
        else
        _fn_65795 = binary_op(PLUS, 1, _fn_65795);
        DeRef(_0);
        // SubProg BackEnd pc: 1579 op: STARTLINE (58)

        /** backend.e:271		end for*/
        // SubProg BackEnd pc: 1581 op: ENDFOR_INT_UP1 (54)
        _i_66162 = _i_66162 + 1;
        goto L26; // [1581] 1511
L27: // addr: 1586 pc: 1581 sub: 65786 op: 54
        ;
    }
    // SubProg BackEnd pc: 1586 op: STARTLINE (58)

    /** backend.e:273		include_info = alloc_include_matrix()*/
    // SubProg BackEnd pc: 1588 op: PROC (27)
    _0 = _include_info_65800;
    _include_info_65800 = _68alloc_include_matrix();
    DeRef(_0);
    // SubProg BackEnd pc: 1591 op: STARTLINE (58)

    /** backend.e:275		if Argc > 2 then*/
    // SubProg BackEnd pc: 1593 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1595 op: GREATER_IFW (107)
    if (_34Argc_15198 <= 2)
    goto L28; // [1595] 1627
    // SubProg BackEnd pc: 1599 op: STARTLINE (58)

    /** backend.e:276			Argv = {Argv[1]} & Argv[3 .. Argc]*/
    // SubProg BackEnd pc: 1601 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1603 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_34Argv_15199);
    _32960 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg BackEnd pc: 1607 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32960);
    ((intptr_t*)_2)[1] = _32960;
    _32961 = MAKE_SEQ(_1);
    _32960 = NOVALUE;
    // SubProg BackEnd pc: 1611 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1613 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1615 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_32962;
    RHS_Slice(_34Argv_15199, 3, _34Argc_15198);
    // SubProg BackEnd pc: 1620 op: CONCAT (15)
    Concat((object_ptr)&_34Argv_15199, _32961, _32962);
    DeRefDS(_32961);
    _32961 = NOVALUE;
    DeRef(_32961);
    _32961 = NOVALUE;
    DeRefDS(_32962);
    _32962 = NOVALUE;
    // SubProg BackEnd pc: 1624 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 1626 op: NOP1 (159)
L28: // addr: 1627 pc: 1626 sub: 65786 op: 159
    // SubProg BackEnd pc: 1627 op: STARTLINE (58)

    /** backend.e:279		atom external_debugger_ptr = 0*/
    // SubProg BackEnd pc: 1629 op: ASSIGN (18)
    DeRef(_external_debugger_ptr_66191);
    _external_debugger_ptr_66191 = 0;
    // SubProg BackEnd pc: 1632 op: STARTLINE (58)

    /** backend.e:280		if sequence( external_debugger ) then*/
    // SubProg BackEnd pc: 1634 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1636 op: IS_A_SEQUENCE (68)
    _32964 = IS_SEQUENCE(_67external_debugger_63975);
    // SubProg BackEnd pc: 1639 op: IF (20)
    if (_32964 == 0)
    {
        _32964 = NOVALUE;
        goto L29; // [1639] 1652
    }
    else{
        _32964 = NOVALUE;
    }
    // SubProg BackEnd pc: 1642 op: STARTLINE (58)

    /** backend.e:281			external_debugger_ptr = allocate_string( external_debugger )*/
    // SubProg BackEnd pc: 1644 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1646 op: PROC (27)
    Ref(_67external_debugger_63975);
    _external_debugger_ptr_66191 = _3allocate_string(_67external_debugger_63975, 0);
    // SubProg BackEnd pc: 1651 op: NOP1 (159)
L29: // addr: 1652 pc: 1651 sub: 65786 op: 159
    // SubProg BackEnd pc: 1652 op: STARTLINE (58)

    /** backend.e:285		machine_proc(65, */
    // SubProg BackEnd pc: 1654 op: PROC (27)
    _32966 = _47get_switches();
    // SubProg BackEnd pc: 1657 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1659 op: ROUTINE_ID (134)
    _32968 = CRoutineId(1464, 68, _32967);
    // SubProg BackEnd pc: 1664 op: ROUTINE_ID (134)
    _32970 = CRoutineId(1464, 68, _32969);
    // SubProg BackEnd pc: 1669 op: ROUTINE_ID (134)
    _32972 = CRoutineId(1464, 68, _32971);
    // SubProg BackEnd pc: 1674 op: ROUTINE_ID (134)
    _32974 = CRoutineId(1464, 68, _32973);
    // SubProg BackEnd pc: 1679 op: ROUTINE_ID (134)
    _32976 = CRoutineId(1464, 68, _32975);
    // SubProg BackEnd pc: 1684 op: ROUTINE_ID (134)
    _32978 = CRoutineId(1464, 68, _32977);
    // SubProg BackEnd pc: 1689 op: ROUTINE_ID (134)
    _32980 = CRoutineId(1464, 68, _32979);
    // SubProg BackEnd pc: 1694 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1696 op: RIGHT_BRACE_N (31)
    _1 = NewS1(16);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_st_65790);
    ((intptr_t*)_2)[1] = _st_65790;
    Ref(_sl_65793);
    ((intptr_t*)_2)[2] = _sl_65793;
    Ref(_ms_65792);
    ((intptr_t*)_2)[3] = _ms_65792;
    Ref(_lit_65794);
    ((intptr_t*)_2)[4] = _lit_65794;
    Ref(_include_info_65800);
    ((intptr_t*)_2)[5] = _include_info_65800;
    ((intptr_t*)_2)[6] = _32966;
    RefDS(_34Argv_15199);
    ((intptr_t*)_2)[7] = _34Argv_15199;
    ((intptr_t*)_2)[8] = _32968;
    ((intptr_t*)_2)[9] = _32970;
    ((intptr_t*)_2)[10] = _32972;
    ((intptr_t*)_2)[11] = _32974;
    Ref(_external_debugger_ptr_66191);
    ((intptr_t*)_2)[12] = _external_debugger_ptr_66191;
    ((intptr_t*)_2)[13] = _32976;
    ((intptr_t*)_2)[14] = _32978;
    ((intptr_t*)_2)[15] = _32980;
    ((intptr_t*)_2)[16] = _34trace_lines_63875;
    _32981 = MAKE_SEQ(_1);
    _32980 = NOVALUE;
    _32978 = NOVALUE;
    _32976 = NOVALUE;
    _32974 = NOVALUE;
    _32972 = NOVALUE;
    _32970 = NOVALUE;
    _32968 = NOVALUE;
    _32966 = NOVALUE;
    // SubProg BackEnd pc: 1715 op: MACHINE_PROC (112)
    machine(65, _32981);
    DeRefDS(_32981);
    _32981 = NOVALUE;
    // SubProg BackEnd pc: 1718 op: STARTLINE (58)

    /** backend.e:305	end procedure*/
    // SubProg BackEnd pc: 1720 op: RETURNP (29)

// Exiting block BLOCK: BackEnd

// block var il_file_65788

// block var addr_65789
    DeRef(_addr_65789);

// block var st_65790
    DeRef(_st_65790);

// block var nm_65791
    DeRef(_nm_65791);

// block var ms_65792
    DeRef(_ms_65792);

// block var sl_65793
    DeRef(_sl_65793);

// block var lit_65794
    DeRef(_lit_65794);

// block var fn_65795
    DeRef(_fn_65795);

// block var e_addr_65797
    DeRef(_e_addr_65797);

// block var l_addr_65798
    DeRef(_l_addr_65798);

// block var include_info_65800
    DeRef(_include_info_65800);

// block var string_size_65803

// block var short_65804

// block var size_65805

// block var repcount_65806

// block var lit_string_65807
    DeRef(_lit_string_65807);

// block var other_strings_65808
    DeRef(_other_strings_65808);

// block var eentry_65809
    DeRef(_eentry_65809);

// block var external_debugger_ptr_66191
    DeRef(_external_debugger_ptr_66191);
    DeRef(_32916);
    _32916 = NOVALUE;
    DeRef(_32909);
    _32909 = NOVALUE;
    _32922 = NOVALUE;
    DeRef(_32854);
    _32854 = NOVALUE;
    _32932 = NOVALUE;
    _32817 = NOVALUE;
    _32917 = NOVALUE;
    DeRef(_32885);
    _32885 = NOVALUE;
    DeRef(_32802);
    _32802 = NOVALUE;
    DeRef(_32799);
    _32799 = NOVALUE;
    DeRef(_32921);
    _32921 = NOVALUE;
    _32954 = NOVALUE;
    DeRef(_32924);
    _32924 = NOVALUE;
    DeRef(_32848);
    _32848 = NOVALUE;
    _32788 = NOVALUE;
    DeRef(_32903);
    _32903 = NOVALUE;
    DeRef(_32780);
    _32780 = NOVALUE;
    _32809 = NOVALUE;
    _32804 = NOVALUE;
    DeRef(_32851);
    _32851 = NOVALUE;
    DeRef(_32900);
    _32900 = NOVALUE;
    return;
    // SubProg BackEnd pc: 1723 op: BADRETURNF (43)
    ;
}


object _68alloc_include_matrix()
{
    object _include_info_66223 = NOVALUE;
    object _include_node_66232 = NOVALUE;
    object _include_array_66240 = NOVALUE;
// skipping _32998  name type: 0
    object _32997 = NOVALUE; // 66250 32997
    object _32996 = NOVALUE; // 66248 32996
    object _32995 = NOVALUE; // 66247 32995
// skipping _32994  name type: 0
    object _32993 = NOVALUE; // 66244 32993
    object _32992 = NOVALUE; // 66243 32992
    object _32991 = NOVALUE; // 66239 32991
// skipping _32990  name type: 0
    object _32989 = NOVALUE; // 66234 32989
// skipping _32988  name type: 0
    object _32987 = NOVALUE; // 66230 32987
    object _32986 = NOVALUE; // 66229 32986
    object _32985 = NOVALUE; // 66228 32985
    object _32984 = NOVALUE; // 66226 32984
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg alloc_include_matrix pc: 1 op: STARTLINE (58)

    /** backend.e:309		atom include_info = allocate( sizeof( C_POINTER ) * (1 + length( include_matrix )) ) */
    // SubProg alloc_include_matrix pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 5 op: SIZEOF (217)
    _32984 = eu_sizeof( 50331649 );
    // SubProg alloc_include_matrix pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_35include_matrix_14163)){
            _32985 = SEQ_PTR(_35include_matrix_14163)->length;
    }
    else {
        _32985 = 1;
    }
    // SubProg alloc_include_matrix pc: 13 op: PLUS1 (93)
    _32986 = _32985 + 1;
    _32985 = NOVALUE;
    // SubProg alloc_include_matrix pc: 17 op: MULTIPLY (13)
    if (_32984 == (short)_32984 && _32986 <= INT15){
        _32987 = _32984 * _32986;
    }
    else{
        _32987 = NewDouble(_32984 * (eudouble)_32986);
    }
    _32984 = NOVALUE;
    _32986 = NOVALUE;
    // SubProg alloc_include_matrix pc: 21 op: PROC (27)
    _0 = _include_info_66223;
    _include_info_66223 = _3allocate(_32987, 0);
    DeRef(_0);
    _32987 = NOVALUE;
    // SubProg alloc_include_matrix pc: 26 op: STARTLINE (58)

    /** backend.e:310		atom include_node = include_info*/
    // SubProg alloc_include_matrix pc: 28 op: ASSIGN (18)
    Ref(_include_info_66223);
    DeRef(_include_node_66232);
    _include_node_66232 = _include_info_66223;
    // SubProg alloc_include_matrix pc: 31 op: STARTLINE (58)

    /** backend.e:311		poke_pointer( include_info, 0 )*/
    // SubProg alloc_include_matrix pc: 33 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_include_info_66223)){
        pokeptr_addr = (uintptr_t *)_include_info_66223;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_include_info_66223)->dbl);
    }
    *pokeptr_addr = (uintptr_t)0;
    // SubProg alloc_include_matrix pc: 36 op: STARTLINE (58)

    /** backend.e:312		include_node += sizeof( C_POINTER )*/
    // SubProg alloc_include_matrix pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 40 op: SIZEOF (217)
    _32989 = eu_sizeof( 50331649 );
    // SubProg alloc_include_matrix pc: 43 op: PLUS (11)
    _0 = _include_node_66232;
    if (IS_ATOM_INT(_include_node_66232)) {
        _include_node_66232 = _include_node_66232 + _32989;
        if ((object)((uintptr_t)_include_node_66232 + (uintptr_t)HIGH_BITS) >= 0){
            _include_node_66232 = NewDouble((eudouble)_include_node_66232);
        }
    }
    else {
        _include_node_66232 = NewDouble(DBL_PTR(_include_node_66232)->dbl + (eudouble)_32989);
    }
    DeRef(_0);
    _32989 = NOVALUE;
    // SubProg alloc_include_matrix pc: 47 op: STARTLINE (58)

    /** backend.e:314		for i = 1 to length( include_matrix ) do*/
    // SubProg alloc_include_matrix pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 51 op: LENGTH (42)
    if (IS_SEQUENCE(_35include_matrix_14163)){
            _32991 = SEQ_PTR(_35include_matrix_14163)->length;
    }
    else {
        _32991 = 1;
    }
    // SubProg alloc_include_matrix pc: 54 op: FOR_I (125)
    {
        object _i_66237;
        _i_66237 = 1;
L1: // addr: 61 pc: 54 sub: 66221 op: 125
        if (_i_66237 > _32991){
            goto L2; // [54] 117
        }
        // SubProg alloc_include_matrix pc: 61 op: STARTLINE (58)

        /** backend.e:315			atom include_array = allocate( 1 + length( include_matrix ) )*/
        // SubProg alloc_include_matrix pc: 63 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_include_matrix pc: 65 op: LENGTH (42)
        if (IS_SEQUENCE(_35include_matrix_14163)){
                _32992 = SEQ_PTR(_35include_matrix_14163)->length;
        }
        else {
            _32992 = 1;
        }
        // SubProg alloc_include_matrix pc: 68 op: PLUS1 (93)
        _32993 = _32992 + 1;
        _32992 = NOVALUE;
        // SubProg alloc_include_matrix pc: 72 op: PROC (27)
        _0 = _include_array_66240;
        _include_array_66240 = _3allocate(_32993, 0);
        DeRef(_0);
        _32993 = NOVALUE;
        // SubProg alloc_include_matrix pc: 77 op: STARTLINE (58)

        /** backend.e:316			poke( include_array, i & include_matrix[i] )*/
        // SubProg alloc_include_matrix pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_include_matrix pc: 81 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _32995 = (object)*(((s1_ptr)_2)->base + _i_66237);
        // SubProg alloc_include_matrix pc: 85 op: CONCAT (15)
        if (IS_SEQUENCE(_i_66237) && IS_ATOM(_32995)) {
        }
        else if (IS_ATOM(_i_66237) && IS_SEQUENCE(_32995)) {
            Prepend(&_32996, _32995, _i_66237);
        }
        else {
            Concat((object_ptr)&_32996, _i_66237, _32995);
        }
        _32995 = NOVALUE;
        // SubProg alloc_include_matrix pc: 89 op: POKE (128)
        if (IS_ATOM_INT(_include_array_66240)){
            poke_addr = (uint8_t *)_include_array_66240;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_include_array_66240)->dbl);
        }
        _1 = (object)SEQ_PTR(_32996);
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
        DeRefDS(_32996);
        _32996 = NOVALUE;
        // SubProg alloc_include_matrix pc: 92 op: STARTLINE (58)

        /** backend.e:317			poke_pointer( include_node, include_array )*/
        // SubProg alloc_include_matrix pc: 94 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_include_node_66232)){
            pokeptr_addr = (uintptr_t *)_include_node_66232;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_include_node_66232)->dbl);
        }
        if (IS_ATOM_INT(_include_array_66240)) {
            *pokeptr_addr = (uintptr_t)_include_array_66240;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_include_array_66240)->dbl;
        }
        // SubProg alloc_include_matrix pc: 97 op: STARTLINE (58)

        /** backend.e:319			include_node += sizeof( C_POINTER )*/
        // SubProg alloc_include_matrix pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_include_matrix pc: 101 op: SIZEOF (217)
        _32997 = eu_sizeof( 50331649 );
        DeRef(_32997);
        // SubProg alloc_include_matrix pc: 104 op: PLUS (11)
        _0 = _include_node_66232;
        if (IS_ATOM_INT(_include_node_66232)) {
            _include_node_66232 = _include_node_66232 + _32997;
            if ((object)((uintptr_t)_include_node_66232 + (uintptr_t)HIGH_BITS) >= 0){
                _include_node_66232 = NewDouble((eudouble)_include_node_66232);
            }
        }
        else {
            _include_node_66232 = NewDouble(DBL_PTR(_include_node_66232)->dbl + (eudouble)_32997);
        }
        DeRef(_0);
        _32997 = NOVALUE;
        // SubProg alloc_include_matrix pc: 108 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var include_array_66240
        DeRef(_include_array_66240);
        _include_array_66240 = NOVALUE;
        // SubProg alloc_include_matrix pc: 110 op: STARTLINE (58)

        /** backend.e:320		end for*/
        // SubProg alloc_include_matrix pc: 112 op: ENDFOR_INT_UP1 (54)
        _i_66237 = _i_66237 + 1;
        goto L1; // [112] 61
L2: // addr: 117 pc: 112 sub: 66221 op: 54
        ;
    }
    // SubProg alloc_include_matrix pc: 117 op: STARTLINE (58)

    /** backend.e:321		return include_info*/
    // SubProg alloc_include_matrix pc: 119 op: RETURNF (28)

// Exiting block BLOCK: alloc_include_matrix

// block var include_node_66232
    DeRef(_include_node_66232);
    return _include_info_66223;
    // SubProg alloc_include_matrix pc: 123 op: BADRETURNF (43)
    ;
}


object _68alloc_symbol_names(object _st_66254, object _lit_66255, object _string_size_66256)
{
    object _nm_66257 = NOVALUE;
    object _addr_66261 = NOVALUE;
    object _entry_addr_66262 = NOVALUE;
    object _no_name_66263 = NOVALUE;
    object _eentry_66271 = NOVALUE;
    object _33028 = NOVALUE; // 66316 33028
    object _33027 = NOVALUE; // 66315 33027
// skipping _33026  name type: 0
    object _33025 = NOVALUE; // 66312 33025
    object _33024 = NOVALUE; // 66309 33024
    object _33023 = NOVALUE; // 66308 33023
    object _33022 = NOVALUE; // 66307 33022
    object _33021 = NOVALUE; // 66305 33021
// skipping _33020  name type: 0
    object _33019 = NOVALUE; // 66302 33019
    object _33018 = NOVALUE; // 66300 33018
    object _33017 = NOVALUE; // 66297 33017
// skipping _33016  name type: 0
// skipping _33015  name type: 0
    object _33014 = NOVALUE; // 66292 33014
    object _33013 = NOVALUE; // 66291 33013
    object _33012 = NOVALUE; // 66289 33012
    object _33011 = NOVALUE; // 66287 33011
    object _33010 = NOVALUE; // 66285 33010
    object _33009 = NOVALUE; // 66284 33009
// skipping _33008  name type: 0
    object _33007 = NOVALUE; // 66279 33007
    object _33006 = NOVALUE; // 66277 33006
// skipping _33005  name type: 0
// skipping _33004  name type: 0
    object _33003 = NOVALUE; // 66270 33003
// skipping _33002  name type: 0
// skipping _33000  name type: 0
    object _32999 = NOVALUE; // 66259 32999
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg alloc_symbol_names pc: 1 op: INTEGER_CHECK (96)
    // SubProg alloc_symbol_names pc: 3 op: STARTLINE (58)

    /** backend.e:326		atom nm = allocate(1+string_size)  */
    // SubProg alloc_symbol_names pc: 5 op: PLUS1 (93)
    _32999 = _string_size_66256 + 1;
    if (_32999 > MAXINT){
        _32999 = NewDouble((eudouble)_32999);
    }
    // SubProg alloc_symbol_names pc: 9 op: PROC (27)
    _0 = _nm_66257;
    _nm_66257 = _3allocate(_32999, 0);
    DeRef(_0);
    _32999 = NOVALUE;
    // SubProg alloc_symbol_names pc: 14 op: STARTLINE (58)

    /** backend.e:327		atom addr = nm*/
    // SubProg alloc_symbol_names pc: 16 op: ASSIGN (18)
    Ref(_nm_66257);
    DeRef(_addr_66261);
    _addr_66261 = _nm_66257;
    // SubProg alloc_symbol_names pc: 19 op: STARTLINE (58)

    /** backend.e:328		atom entry_addr = st*/
    // SubProg alloc_symbol_names pc: 21 op: ASSIGN (18)
    Ref(_st_66254);
    DeRef(_entry_addr_66262);
    _entry_addr_66262 = _st_66254;
    // SubProg alloc_symbol_names pc: 24 op: STARTLINE (58)

    /** backend.e:329		atom no_name = allocate_string("<no-name>")*/
    // SubProg alloc_symbol_names pc: 26 op: PROC (27)
    RefDS(_33001);
    _0 = _no_name_66263;
    _no_name_66263 = _3allocate_string(_33001, 0);
    DeRef(_0);
    // SubProg alloc_symbol_names pc: 31 op: STARTLINE (58)

    /** backend.e:330		for i = 1 to length(SymTab) do*/
    // SubProg alloc_symbol_names pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_symbol_names pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _33003 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _33003 = 1;
    }
    // SubProg alloc_symbol_names pc: 38 op: FOR_I (125)
    {
        object _i_66268;
        _i_66268 = 1;
L1: // addr: 45 pc: 38 sub: 66252 op: 125
        if (_i_66268 > _33003){
            goto L2; // [38] 246
        }
        // SubProg alloc_symbol_names pc: 45 op: STARTLINE (58)

        /** backend.e:331			object eentry = SymTab[i]*/
        // SubProg alloc_symbol_names pc: 47 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 49 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_66271);
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _eentry_66271 = (object)*(((s1_ptr)_2)->base + _i_66268);
        Ref(_eentry_66271);
        // SubProg alloc_symbol_names pc: 53 op: STARTLINE (58)

        /** backend.e:332			entry_addr += ST_ENTRY_SIZE*/
        // SubProg alloc_symbol_names pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 57 op: PLUS (11)
        _0 = _entry_addr_66262;
        if (IS_ATOM_INT(_entry_addr_66262)) {
            _entry_addr_66262 = _entry_addr_66262 + _73ST_ENTRY_SIZE_65710;
            if ((object)((uintptr_t)_entry_addr_66262 + (uintptr_t)HIGH_BITS) >= 0){
                _entry_addr_66262 = NewDouble((eudouble)_entry_addr_66262);
            }
        }
        else {
            _entry_addr_66262 = NewDouble(DBL_PTR(_entry_addr_66262)->dbl + (eudouble)_73ST_ENTRY_SIZE_65710);
        }
        DeRef(_0);
        // SubProg alloc_symbol_names pc: 61 op: STARTLINE (58)

        /** backend.e:333			if sequence(eentry) then */
        // SubProg alloc_symbol_names pc: 63 op: IS_A_SEQUENCE (68)
        _33006 = IS_SEQUENCE(_eentry_66271);
        // SubProg alloc_symbol_names pc: 66 op: IF (20)
        if (_33006 == 0)
        {
            _33006 = NOVALUE;
            goto L3; // [66] 237
        }
        else{
            _33006 = NOVALUE;
        }
        // SubProg alloc_symbol_names pc: 69 op: STARTLINE (58)

        /** backend.e:334				if length(eentry) >= S_NAME then*/
        // SubProg alloc_symbol_names pc: 71 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_66271)){
                _33007 = SEQ_PTR(_eentry_66271)->length;
        }
        else {
            _33007 = 1;
        }
        // SubProg alloc_symbol_names pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 76 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _33007, _34S_NAME_14843)){
            _33007 = NOVALUE;
            goto L4; // [76] 208
        }
        _33007 = NOVALUE;
        // SubProg alloc_symbol_names pc: 80 op: STARTLINE (58)

        /** backend.e:335					if sequence(eentry[S_NAME]) then*/
        // SubProg alloc_symbol_names pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66271);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _33009 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _33009 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        // SubProg alloc_symbol_names pc: 88 op: IS_A_SEQUENCE (68)
        _33010 = IS_SEQUENCE(_33009);
        _33009 = NOVALUE;
        // SubProg alloc_symbol_names pc: 91 op: IF (20)
        if (_33010 == 0)
        {
            _33010 = NOVALUE;
            goto L5; // [91] 145
        }
        else{
            _33010 = NOVALUE;
        }
        // SubProg alloc_symbol_names pc: 94 op: STARTLINE (58)

        /** backend.e:337						poke_pointer(entry_addr + ST_NAME, addr) */
        // SubProg alloc_symbol_names pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 98 op: PLUS (11)
        if (IS_ATOM_INT(_entry_addr_66262) && IS_ATOM_INT(_73ST_NAME_65671)) {
            _33011 = _entry_addr_66262 + _73ST_NAME_65671;
            if ((object)((uintptr_t)_33011 + (uintptr_t)HIGH_BITS) >= 0){
                _33011 = NewDouble((eudouble)_33011);
            }
        }
        else {
            _33011 = binary_op(PLUS, _entry_addr_66262, _73ST_NAME_65671);
        }
        // SubProg alloc_symbol_names pc: 102 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_33011)){
            pokeptr_addr = (uintptr_t *)_33011;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33011)->dbl);
        }
        if (IS_ATOM_INT(_addr_66261)) {
            *pokeptr_addr = (uintptr_t)_addr_66261;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_addr_66261)->dbl;
        }
        DeRef(_33011);
        _33011 = NOVALUE;
        // SubProg alloc_symbol_names pc: 105 op: STARTLINE (58)

        /** backend.e:339						poke(addr, eentry[S_NAME])*/
        // SubProg alloc_symbol_names pc: 107 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66271);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _33012 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _33012 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        // SubProg alloc_symbol_names pc: 113 op: POKE (128)
        if (IS_ATOM_INT(_addr_66261)){
            poke_addr = (uint8_t *)_addr_66261;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_addr_66261)->dbl);
        }
        if (IS_ATOM_INT(_33012)) {
            *poke_addr = (uint8_t)_33012;
        }
        else if (IS_ATOM(_33012)) {
            *poke_addr = (uint8_t)DBL_PTR(_33012)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_33012);
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
        _33012 = NOVALUE;
        // SubProg alloc_symbol_names pc: 116 op: STARTLINE (58)

        /** backend.e:340						addr += length(eentry[S_NAME])*/
        // SubProg alloc_symbol_names pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 120 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66271);
        if (!IS_ATOM_INT(_34S_NAME_14843)){
            _33013 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
        }
        else{
            _33013 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
        }
        // SubProg alloc_symbol_names pc: 124 op: LENGTH (42)
        if (IS_SEQUENCE(_33013)){
                _33014 = SEQ_PTR(_33013)->length;
        }
        else {
            _33014 = 1;
        }
        _33013 = NOVALUE;
        // SubProg alloc_symbol_names pc: 127 op: PLUS (11)
        _0 = _addr_66261;
        if (IS_ATOM_INT(_addr_66261)) {
            _addr_66261 = _addr_66261 + _33014;
            if ((object)((uintptr_t)_addr_66261 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_66261 = NewDouble((eudouble)_addr_66261);
            }
        }
        else {
            _addr_66261 = NewDouble(DBL_PTR(_addr_66261)->dbl + (eudouble)_33014);
        }
        DeRef(_0);
        _33014 = NOVALUE;
        // SubProg alloc_symbol_names pc: 131 op: STARTLINE (58)

        /** backend.e:341						poke(addr, 0)  -- 0-delimited string*/
        // SubProg alloc_symbol_names pc: 133 op: POKE (128)
        if (IS_ATOM_INT(_addr_66261)){
            poke_addr = (uint8_t *)_addr_66261;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_addr_66261)->dbl);
        }
        *poke_addr = (uint8_t)0;
        // SubProg alloc_symbol_names pc: 136 op: STARTLINE (58)

        /** backend.e:342						addr += 1*/
        // SubProg alloc_symbol_names pc: 138 op: PLUS1 (93)
        _0 = _addr_66261;
        if (IS_ATOM_INT(_addr_66261)) {
            _addr_66261 = _addr_66261 + 1;
            if (_addr_66261 > MAXINT){
                _addr_66261 = NewDouble((eudouble)_addr_66261);
            }
        }
        else
        _addr_66261 = binary_op(PLUS, 1, _addr_66261);
        DeRef(_0);
        // SubProg alloc_symbol_names pc: 142 op: ELSE (23)
        goto L6; // [142] 157
        // SubProg alloc_symbol_names pc: 144 op: NOP1 (159)
L5: // addr: 145 pc: 144 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 145 op: STARTLINE (58)

        /** backend.e:346						poke_pointer(entry_addr + ST_NAME, no_name)*/
        // SubProg alloc_symbol_names pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 149 op: PLUS (11)
        if (IS_ATOM_INT(_entry_addr_66262) && IS_ATOM_INT(_73ST_NAME_65671)) {
            _33017 = _entry_addr_66262 + _73ST_NAME_65671;
            if ((object)((uintptr_t)_33017 + (uintptr_t)HIGH_BITS) >= 0){
                _33017 = NewDouble((eudouble)_33017);
            }
        }
        else {
            _33017 = binary_op(PLUS, _entry_addr_66262, _73ST_NAME_65671);
        }
        // SubProg alloc_symbol_names pc: 153 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_33017)){
            pokeptr_addr = (uintptr_t *)_33017;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33017)->dbl);
        }
        if (IS_ATOM_INT(_no_name_66263)) {
            *pokeptr_addr = (uintptr_t)_no_name_66263;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_no_name_66263)->dbl;
        }
        DeRef(_33017);
        _33017 = NOVALUE;
        // SubProg alloc_symbol_names pc: 156 op: NOP1 (159)
L6: // addr: 157 pc: 156 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 157 op: STARTLINE (58)

        /** backend.e:349					if eentry[S_TOKEN] = NAMESPACE or compare( eentry[S_OBJ], NOVALUE ) then*/
        // SubProg alloc_symbol_names pc: 159 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 161 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66271);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _33018 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _33018 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        // SubProg alloc_symbol_names pc: 165 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 167 op: EQUALS (3)
        if (IS_ATOM_INT(_33018)) {
            _33019 = (_33018 == 523);
        }
        else {
            _33019 = binary_op(EQUALS, _33018, 523);
        }
        _33018 = NOVALUE;
        // SubProg alloc_symbol_names pc: 171 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_33019)) {
            if (_33019 != 0) {
                goto L7; // [171] 192
            }
        }
        else {
            if (DBL_PTR(_33019)->dbl != 0.0) {
                goto L7; // [171] 192
            }
        }
        // SubProg alloc_symbol_names pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 177 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66271);
        _33021 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg alloc_symbol_names pc: 181 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 183 op: COMPARE (76)
        if (IS_ATOM_INT(_33021) && IS_ATOM_INT(_34NOVALUE_15043)){
            _33022 = (_33021 < _34NOVALUE_15043) ? -1 : (_33021 > _34NOVALUE_15043);
        }
        else{
            _33022 = compare(_33021, _34NOVALUE_15043);
        }
        _33021 = NOVALUE;
        // SubProg alloc_symbol_names pc: 187 op: NOP1 (159)
        // SubProg alloc_symbol_names pc: 188 op: IF (20)
        if (_33022 == 0)
        {
            _33022 = NOVALUE;
            goto L8; // [188] 236
        }
        else{
            _33022 = NOVALUE;
        }
        // SubProg alloc_symbol_names pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 192 op: STARTLINE (58)

        /** backend.e:351						poke_pointer(entry_addr, peek_pointer( entry_addr ) + lit )*/
        // SubProg alloc_symbol_names pc: 194 op: PEEK_POINTER (216)
        if (IS_ATOM_INT(_entry_addr_66262)) {
            _33023 = *(intptr_t *)_entry_addr_66262;
            if ((uintptr_t)_33023 > (uintptr_t)MAXINT){
                _33023 = NewDouble((eudouble)(uintptr_t)_33023);
            }
        }
        else {
            _33023 = *(uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66262)->dbl);
            if ((uintptr_t)_33023 > (uintptr_t)MAXINT){
                _33023 = NewDouble((eudouble)(uintptr_t)_33023);
            }
        }
        // SubProg alloc_symbol_names pc: 197 op: PLUS (11)
        if (IS_ATOM_INT(_33023) && IS_ATOM_INT(_lit_66255)) {
            _33024 = _33023 + _lit_66255;
            if ((object)((uintptr_t)_33024 + (uintptr_t)HIGH_BITS) >= 0){
                _33024 = NewDouble((eudouble)_33024);
            }
        }
        else {
            if (IS_ATOM_INT(_33023)) {
                _33024 = NewDouble((eudouble)_33023 + DBL_PTR(_lit_66255)->dbl);
            }
            else {
                if (IS_ATOM_INT(_lit_66255)) {
                    _33024 = NewDouble(DBL_PTR(_33023)->dbl + (eudouble)_lit_66255);
                }
                else
                _33024 = NewDouble(DBL_PTR(_33023)->dbl + DBL_PTR(_lit_66255)->dbl);
            }
        }
        DeRef(_33023);
        _33023 = NOVALUE;
        // SubProg alloc_symbol_names pc: 201 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_entry_addr_66262)){
            pokeptr_addr = (uintptr_t *)_entry_addr_66262;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66262)->dbl);
        }
        if (IS_ATOM_INT(_33024)) {
            *pokeptr_addr = (uintptr_t)_33024;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_33024)->dbl;
        }
        DeRef(_33024);
        _33024 = NOVALUE;
        // SubProg alloc_symbol_names pc: 204 op: NOP1 (159)
        // SubProg alloc_symbol_names pc: 205 op: ELSE (23)
        goto L8; // [205] 236
        // SubProg alloc_symbol_names pc: 207 op: NOP1 (159)
L4: // addr: 208 pc: 207 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 208 op: STARTLINE (58)

        /** backend.e:353				elsif eentry[S_MODE] = M_CONSTANT then*/
        // SubProg alloc_symbol_names pc: 210 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66271);
        _33025 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg alloc_symbol_names pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 218 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _33025, 2)){
            _33025 = NOVALUE;
            goto L9; // [218] 235
        }
        _33025 = NOVALUE;
        // SubProg alloc_symbol_names pc: 222 op: STARTLINE (58)

        /** backend.e:355					poke_pointer(entry_addr, peek_pointer( entry_addr ) + lit) */
        // SubProg alloc_symbol_names pc: 224 op: PEEK_POINTER (216)
        if (IS_ATOM_INT(_entry_addr_66262)) {
            _33027 = *(intptr_t *)_entry_addr_66262;
            if ((uintptr_t)_33027 > (uintptr_t)MAXINT){
                _33027 = NewDouble((eudouble)(uintptr_t)_33027);
            }
        }
        else {
            _33027 = *(uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66262)->dbl);
            if ((uintptr_t)_33027 > (uintptr_t)MAXINT){
                _33027 = NewDouble((eudouble)(uintptr_t)_33027);
            }
        }
        // SubProg alloc_symbol_names pc: 227 op: PLUS (11)
        if (IS_ATOM_INT(_33027) && IS_ATOM_INT(_lit_66255)) {
            _33028 = _33027 + _lit_66255;
            if ((object)((uintptr_t)_33028 + (uintptr_t)HIGH_BITS) >= 0){
                _33028 = NewDouble((eudouble)_33028);
            }
        }
        else {
            if (IS_ATOM_INT(_33027)) {
                _33028 = NewDouble((eudouble)_33027 + DBL_PTR(_lit_66255)->dbl);
            }
            else {
                if (IS_ATOM_INT(_lit_66255)) {
                    _33028 = NewDouble(DBL_PTR(_33027)->dbl + (eudouble)_lit_66255);
                }
                else
                _33028 = NewDouble(DBL_PTR(_33027)->dbl + DBL_PTR(_lit_66255)->dbl);
            }
        }
        DeRef(_33027);
        _33027 = NOVALUE;
        // SubProg alloc_symbol_names pc: 231 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_entry_addr_66262)){
            pokeptr_addr = (uintptr_t *)_entry_addr_66262;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66262)->dbl);
        }
        if (IS_ATOM_INT(_33028)) {
            *pokeptr_addr = (uintptr_t)_33028;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_33028)->dbl;
        }
        DeRef(_33028);
        _33028 = NOVALUE;
        // SubProg alloc_symbol_names pc: 234 op: NOP1 (159)
L9: // addr: 235 pc: 234 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 235 op: NOP1 (159)
L8: // addr: 236 pc: 235 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 236 op: NOP1 (159)
L3: // addr: 237 pc: 236 sub: 66252 op: 159
        // SubProg alloc_symbol_names pc: 237 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var eentry_66271
        DeRef(_eentry_66271);
        _eentry_66271 = NOVALUE;
        // SubProg alloc_symbol_names pc: 239 op: STARTLINE (58)

        /** backend.e:359		end for*/
        // SubProg alloc_symbol_names pc: 241 op: ENDFOR_INT_UP1 (54)
        _i_66268 = _i_66268 + 1;
        goto L1; // [241] 45
L2: // addr: 246 pc: 241 sub: 66252 op: 54
        ;
    }
    // SubProg alloc_symbol_names pc: 246 op: STARTLINE (58)

    /** backend.e:360		return nm*/
    // SubProg alloc_symbol_names pc: 248 op: RETURNF (28)

// Exiting block BLOCK: alloc_symbol_names

// block var st_66254
    DeRef(_st_66254);

// block var lit_66255
    DeRef(_lit_66255);

// block var string_size_66256

// block var addr_66261
    DeRef(_addr_66261);

// block var entry_addr_66262
    DeRef(_entry_addr_66262);

// block var no_name_66263
    DeRef(_no_name_66263);
    DeRef(_33019);
    _33019 = NOVALUE;
    _33013 = NOVALUE;
    return _nm_66257;
    // SubProg alloc_symbol_names pc: 252 op: BADRETURNF (43)
    ;
}



// 0x5CFC2F67
