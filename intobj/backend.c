// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _68InitBackEnd(object _x_65792)
{
// skipping _32789  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitBackEnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_65792)) {
        _1 = (object)(DBL_PTR(_x_65792)->dbl);
        DeRefDS(_x_65792);
        _x_65792 = _1;
    }
    // SubProg InitBackEnd pc: 3 op: STARTLINE (58)

    /** backend.e:31		if not BIND then*/
    // SubProg InitBackEnd pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitBackEnd pc: 7 op: NOT_IFW (108)
    if (_5BIND_12100 != 0)
    goto L1; // [7] 15
    // SubProg InitBackEnd pc: 10 op: STARTLINE (58)

    /** backend.e:32			intoptions()	*/
    // SubProg InitBackEnd pc: 12 op: PROC (27)
    _67intoptions();
    // SubProg InitBackEnd pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 65790 op: 159
    // SubProg InitBackEnd pc: 15 op: STARTLINE (58)

    /** backend.e:35	end procedure*/
    // SubProg InitBackEnd pc: 17 op: RETURNP (29)

// Exiting block BLOCK: InitBackEnd
    return;
    // SubProg InitBackEnd pc: 20 op: BADRETURNF (43)
    ;
}


object _68get_next(object _sym_65805)
{
// skipping _32811  name type: 0
    object _32810 = NOVALUE; // 65842 32810
    object _32809 = NOVALUE; // 65840 32809
    object _32808 = NOVALUE; // 65838 32808
    object _32807 = NOVALUE; // 65836 32807
// skipping _32806  name type: 0
// skipping _32805  name type: 0
    object _32804 = NOVALUE; // 65828 32804
    object _32803 = NOVALUE; // 65826 32803
    object _32802 = NOVALUE; // 65825 32802
    object _32801 = NOVALUE; // 65822 32801
    object _32800 = NOVALUE; // 65821 32800
    object _32799 = NOVALUE; // 65819 32799
    object _32798 = NOVALUE; // 65818 32798
    object _32797 = NOVALUE; // 65816 32797
    object _32796 = NOVALUE; // 65814 32796
    object _32795 = NOVALUE; // 65813 32795
    object _32794 = NOVALUE; // 65812 32794
    object _32793 = NOVALUE; // 65810 32793
    object _32792 = NOVALUE; // 65808 32792
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_next pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_65805)) {
        _1 = (object)(DBL_PTR(_sym_65805)->dbl);
        DeRefDS(_sym_65805);
        _sym_65805 = _1;
    }
    // SubProg get_next pc: 3 op: STARTLINE (58)

    /** backend.e:42		if get_backend() then*/
    // SubProg get_next pc: 5 op: PROC (27)
    _32792 = _2get_backend();
    // SubProg get_next pc: 8 op: IF (20)
    if (_32792 == 0) {
        DeRef(_32792);
        _32792 = NOVALUE;
        goto L1; // [8] 120
    }
    else {
        if (!IS_ATOM_INT(_32792) && DBL_PTR(_32792)->dbl == 0.0){
            DeRef(_32792);
            _32792 = NOVALUE;
            goto L1; // [8] 120
        }
        DeRef(_32792);
        _32792 = NOVALUE;
    }
    DeRef(_32792);
    _32792 = NOVALUE;
    // SubProg get_next pc: 11 op: STARTLINE (58)

    /** backend.e:43			while sym and */
    // SubProg get_next pc: 13 op: NOP2 (110)
    // SubProg get_next pc: 15 op: NOPWHILE (158)
L2: // addr: 16 pc: 15 sub: 65802 op: 158
    // SubProg get_next pc: 16 op: SC1_AND_IF (146)
    if (_sym_65805 == 0) {
        goto L3; // [16] 165
    }
    // SubProg get_next pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _32794 = (object)*(((s1_ptr)_2)->base + _sym_65805);
    // SubProg get_next pc: 26 op: IS_A_SEQUENCE (68)
    _32795 = IS_SEQUENCE(_32794);
    _32794 = NOVALUE;
    // SubProg get_next pc: 29 op: SC1_AND (141)
    if (_32795 == 0) {
        _32796 = 0;
        goto L4; // [29] 47
    }
    // SubProg get_next pc: 33 op: PROC (27)
    _32797 = _53sym_scope(_sym_65805);
    // SubProg get_next pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 39 op: EQUALS (3)
    if (IS_ATOM_INT(_32797)) {
        _32798 = (_32797 == 9);
    }
    else {
        _32798 = binary_op(EQUALS, _32797, 9);
    }
    DeRef(_32797);
    _32797 = NOVALUE;
    // SubProg get_next pc: 43 op: SC2_AND (142)
    if (IS_ATOM_INT(_32798))
    _32796 = (_32798 != 0);
    else
    _32796 = DBL_PTR(_32798)->dbl != 0.0;
    // SubProg get_next pc: 46 op: NOP1 (159)
L4: // addr: 47 pc: 46 sub: 65802 op: 159
    // SubProg get_next pc: 47 op: SC1_OR (143)
    if (_32796 != 0) {
        DeRef(_32799);
        _32799 = 1;
        goto L5; // [47] 64
    }
    // SubProg get_next pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 53 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _32800 = (object)*(((s1_ptr)_2)->base + _sym_65805);
    // SubProg get_next pc: 57 op: IS_AN_ATOM (67)
    _32801 = IS_ATOM(_32800);
    _32800 = NOVALUE;
    // SubProg get_next pc: 60 op: SC2_OR (144)
    _32799 = (_32801 != 0);
    // SubProg get_next pc: 63 op: NOP1 (159)
L5: // addr: 64 pc: 63 sub: 65802 op: 159
    // SubProg get_next pc: 64 op: NOP1 (159)
    // SubProg get_next pc: 65 op: WHILE (47)
    if (_32799 == 0)
    {
        _32799 = NOVALUE;
        goto L3; // [65] 165
    }
    else{
        _32799 = NOVALUE;
    }
    // SubProg get_next pc: 68 op: STARTLINE (58)

    /** backend.e:45				if sequence(SymTab[sym]) then*/
    // SubProg get_next pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _32802 = (object)*(((s1_ptr)_2)->base + _sym_65805);
    // SubProg get_next pc: 76 op: IS_A_SEQUENCE (68)
    _32803 = IS_SEQUENCE(_32802);
    _32802 = NOVALUE;
    // SubProg get_next pc: 79 op: IF (20)
    if (_32803 == 0)
    {
        _32803 = NOVALUE;
        goto L6; // [79] 101
    }
    else{
        _32803 = NOVALUE;
    }
    // SubProg get_next pc: 82 op: STARTLINE (58)

    /** backend.e:46					sym = SymTab[sym][S_NEXT]*/
    // SubProg get_next pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 86 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _32804 = (object)*(((s1_ptr)_2)->base + _sym_65805);
    // SubProg get_next pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 92 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32804);
    _sym_65805 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_65805)){
        _sym_65805 = (object)DBL_PTR(_sym_65805)->dbl;
    }
    _32804 = NOVALUE;
    // SubProg get_next pc: 98 op: ELSE (23)
    goto L2; // [98] 16
    // SubProg get_next pc: 100 op: NOP1 (159)
L6: // addr: 101 pc: 100 sub: 65802 op: 159
    // SubProg get_next pc: 101 op: STARTLINE (58)

    /** backend.e:48					sym = SymTab[sym]*/
    // SubProg get_next pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _sym_65805 = (object)*(((s1_ptr)_2)->base + _sym_65805);
    if (!IS_ATOM_INT(_sym_65805)){
        _sym_65805 = (object)DBL_PTR(_sym_65805)->dbl;
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
L1: // addr: 120 pc: 119 sub: 65802 op: 159
    // SubProg get_next pc: 120 op: STARTLINE (58)

    /** backend.e:52			while sym and sym_scope( sym ) = SC_UNDEFINED do*/
    // SubProg get_next pc: 122 op: NOP2 (110)
    // SubProg get_next pc: 124 op: NOPWHILE (158)
L7: // addr: 125 pc: 124 sub: 65802 op: 158
    // SubProg get_next pc: 125 op: SC1_AND_IF (146)
    if (_sym_65805 == 0) {
        goto L8; // [125] 164
    }
    // SubProg get_next pc: 129 op: PROC (27)
    _32808 = _53sym_scope(_sym_65805);
    // SubProg get_next pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 135 op: EQUALS (3)
    if (IS_ATOM_INT(_32808)) {
        _32809 = (_32808 == 9);
    }
    else {
        _32809 = binary_op(EQUALS, _32808, 9);
    }
    DeRef(_32808);
    _32808 = NOVALUE;
    // SubProg get_next pc: 139 op: NOP1 (159)
    // SubProg get_next pc: 140 op: WHILE (47)
    if (_32809 <= 0) {
        if (_32809 == 0) {
            DeRef(_32809);
            _32809 = NOVALUE;
            goto L8; // [140] 164
        }
        else {
            if (!IS_ATOM_INT(_32809) && DBL_PTR(_32809)->dbl == 0.0){
                DeRef(_32809);
                _32809 = NOVALUE;
                goto L8; // [140] 164
            }
            DeRef(_32809);
            _32809 = NOVALUE;
        }
    }
    DeRef(_32809);
    _32809 = NOVALUE;
    // SubProg get_next pc: 143 op: STARTLINE (58)

    /** backend.e:53				sym = SymTab[sym][S_NEXT]*/
    // SubProg get_next pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _32810 = (object)*(((s1_ptr)_2)->base + _sym_65805);
    // SubProg get_next pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_next pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_32810);
    _sym_65805 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_65805)){
        _sym_65805 = (object)DBL_PTR(_sym_65805)->dbl;
    }
    _32810 = NOVALUE;
    // SubProg get_next pc: 159 op: STARTLINE (58)

    /** backend.e:55			end while*/
    // SubProg get_next pc: 161 op: ENDWHILE (22)
    goto L7; // [161] 125
    // SubProg get_next pc: 163 op: NOP1 (159)
L8: // addr: 164 pc: 163 sub: 65802 op: 159
    // SubProg get_next pc: 164 op: NOP1 (159)
L3: // addr: 165 pc: 164 sub: 65802 op: 159
    // SubProg get_next pc: 165 op: STARTLINE (58)

    /** backend.e:57		return sym*/
    // SubProg get_next pc: 167 op: RETURNF (28)

// Exiting block BLOCK: get_next
    DeRef(_32798);
    _32798 = NOVALUE;
    return _sym_65805;
    // SubProg get_next pc: 171 op: BADRETURNF (43)
    ;
}


void _68BackEnd(object _il_file_65847)
{
    object _addr_65848 = NOVALUE;
    object _st_65849 = NOVALUE;
    object _nm_65850 = NOVALUE;
    object _ms_65851 = NOVALUE;
    object _sl_65852 = NOVALUE;
    object _lit_65853 = NOVALUE;
    object _fn_65854 = NOVALUE;
    object _entry_addr_65855 = NOVALUE;
    object _e_addr_65856 = NOVALUE;
    object _l_addr_65857 = NOVALUE;
    object _no_name_65858 = NOVALUE;
    object _include_info_65859 = NOVALUE;
    object _include_node_65860 = NOVALUE;
    object _include_array_65861 = NOVALUE;
    object _string_size_65862 = NOVALUE;
    object _short_65863 = NOVALUE;
    object _size_65864 = NOVALUE;
    object _repcount_65865 = NOVALUE;
    object _lit_string_65866 = NOVALUE;
    object _other_strings_65867 = NOVALUE;
    object _eentry_65868 = NOVALUE;
    object _started_file_66129 = NOVALUE;
    object _external_debugger_ptr_66250 = NOVALUE;
    object _33036 = NOVALUE; // 66275 33036
    object _33035 = NOVALUE; // 66273 33035
    object _33033 = NOVALUE; // 66271 33033
    object _33031 = NOVALUE; // 66269 33031
    object _33029 = NOVALUE; // 66267 33029
    object _33027 = NOVALUE; // 66265 33027
    object _33025 = NOVALUE; // 66263 33025
    object _33023 = NOVALUE; // 66261 33023
    object _33021 = NOVALUE; // 66258 33021
// skipping _33020  name type: 0
    object _33019 = NOVALUE; // 66253 33019
// skipping _33018  name type: 0
    object _33017 = NOVALUE; // 66248 33017
    object _33016 = NOVALUE; // 66245 33016
    object _33015 = NOVALUE; // 66244 33015
// skipping _33014  name type: 0
// skipping _33013  name type: 0
// skipping _33012  name type: 0
// skipping _33011  name type: 0
    object _33010 = NOVALUE; // 66234 33010
    object _33009 = NOVALUE; // 66233 33009
    object _33008 = NOVALUE; // 66232 33008
    object _33007 = NOVALUE; // 66231 33007
    object _33006 = NOVALUE; // 66230 33006
    object _33005 = NOVALUE; // 66229 33005
    object _33004 = NOVALUE; // 66227 33004
    object _33003 = NOVALUE; // 66226 33003
    object _33002 = NOVALUE; // 66225 33002
    object _33001 = NOVALUE; // 66224 33001
    object _33000 = NOVALUE; // 66222 33000
// skipping _32999  name type: 0
    object _32998 = NOVALUE; // 66217 32998
    object _32997 = NOVALUE; // 66216 32997
    object _32996 = NOVALUE; // 66214 32996
// skipping _32995  name type: 0
    object _32994 = NOVALUE; // 66206 32994
    object _32993 = NOVALUE; // 66205 32993
    object _32992 = NOVALUE; // 66204 32992
    object _32991 = NOVALUE; // 66203 32991
// skipping _32990  name type: 0
    object _32989 = NOVALUE; // 66199 32989
    object _32988 = NOVALUE; // 66198 32988
    object _32987 = NOVALUE; // 66197 32987
    object _32986 = NOVALUE; // 66196 32986
// skipping _32985  name type: 0
    object _32984 = NOVALUE; // 66191 32984
// skipping _32983  name type: 0
    object _32982 = NOVALUE; // 66186 32982
    object _32981 = NOVALUE; // 66183 32981
    object _32980 = NOVALUE; // 66182 32980
    object _32979 = NOVALUE; // 66181 32979
// skipping _32978  name type: 0
    object _32977 = NOVALUE; // 66177 32977
    object _32976 = NOVALUE; // 66176 32976
    object _32975 = NOVALUE; // 66174 32975
    object _32974 = NOVALUE; // 66171 32974
    object _32973 = NOVALUE; // 66169 32973
    object _32972 = NOVALUE; // 66168 32972
    object _32971 = NOVALUE; // 66167 32971
    object _32970 = NOVALUE; // 66164 32970
    object _32969 = NOVALUE; // 66162 32969
    object _32968 = NOVALUE; // 66160 32968
    object _32967 = NOVALUE; // 66159 32967
    object _32966 = NOVALUE; // 66158 32966
    object _32965 = NOVALUE; // 66156 32965
    object _32964 = NOVALUE; // 66155 32964
    object _32963 = NOVALUE; // 66154 32963
    object _32962 = NOVALUE; // 66153 32962
    object _32961 = NOVALUE; // 66150 32961
// skipping _32960  name type: 0
    object _32959 = NOVALUE; // 66145 32959
    object _32958 = NOVALUE; // 66144 32958
    object _32957 = NOVALUE; // 66142 32957
    object _32956 = NOVALUE; // 66140 32956
    object _32955 = NOVALUE; // 66139 32955
    object _32954 = NOVALUE; // 66137 32954
    object _32953 = NOVALUE; // 66135 32953
// skipping _32952  name type: 0
    object _32951 = NOVALUE; // 66131 32951
// skipping _32950  name type: 0
    object _32949 = NOVALUE; // 66127 32949
// skipping _32948  name type: 0
    object _32947 = NOVALUE; // 66124 32947
    object _32946 = NOVALUE; // 66123 32946
    object _32945 = NOVALUE; // 66120 32945
    object _32944 = NOVALUE; // 66119 32944
// skipping _32943  name type: 0
    object _32942 = NOVALUE; // 66117 32942
// skipping _32941  name type: 0
    object _32940 = NOVALUE; // 66114 32940
// skipping _32939  name type: 0
    object _32938 = NOVALUE; // 66109 32938
    object _32937 = NOVALUE; // 66108 32937
    object _32936 = NOVALUE; // 66105 32936
// skipping _32935  name type: 0
    object _32934 = NOVALUE; // 66099 32934
    object _32933 = NOVALUE; // 66097 32933
// skipping _32932  name type: 0
    object _32931 = NOVALUE; // 66095 32931
    object _32930 = NOVALUE; // 66093 32930
// skipping _32929  name type: 0
    object _32928 = NOVALUE; // 66090 32928
// skipping _32927  name type: 0
    object _32926 = NOVALUE; // 66086 32926
    object _32925 = NOVALUE; // 66085 32925
    object _32924 = NOVALUE; // 66082 32924
// skipping _32923  name type: 0
    object _32922 = NOVALUE; // 66076 32922
    object _32921 = NOVALUE; // 66073 32921
// skipping _32920  name type: 0
// skipping _32919  name type: 0
    object _32918 = NOVALUE; // 66068 32918
// skipping _32917  name type: 0
// skipping _32916  name type: 0
    object _32915 = NOVALUE; // 66063 32915
    object _32914 = NOVALUE; // 66062 32914
    object _32913 = NOVALUE; // 66059 32913
    object _32912 = NOVALUE; // 66058 32912
    object _32911 = NOVALUE; // 66056 32911
    object _32910 = NOVALUE; // 66054 32910
    object _32909 = NOVALUE; // 66053 32909
    object _32908 = NOVALUE; // 66051 32908
// skipping _32907  name type: 0
    object _32906 = NOVALUE; // 66049 32906
    object _32905 = NOVALUE; // 66047 32905
    object _32904 = NOVALUE; // 66045 32904
    object _32903 = NOVALUE; // 66044 32903
    object _32902 = NOVALUE; // 66042 32902
    object _32901 = NOVALUE; // 66040 32901
    object _32900 = NOVALUE; // 66038 32900
    object _32899 = NOVALUE; // 66036 32899
    object _32898 = NOVALUE; // 66034 32898
// skipping _32897  name type: 0
    object _32896 = NOVALUE; // 66030 32896
    object _32895 = NOVALUE; // 66028 32895
    object _32894 = NOVALUE; // 66026 32894
    object _32893 = NOVALUE; // 66024 32893
    object _32892 = NOVALUE; // 66022 32892
// skipping _32891  name type: 0
    object _32890 = NOVALUE; // 66018 32890
    object _32889 = NOVALUE; // 66015 32889
    object _32888 = NOVALUE; // 66013 32888
    object _32887 = NOVALUE; // 66010 32887
    object _32886 = NOVALUE; // 66008 32886
    object _32885 = NOVALUE; // 66006 32885
    object _32884 = NOVALUE; // 66004 32884
    object _32883 = NOVALUE; // 66002 32883
    object _32882 = NOVALUE; // 66000 32882
    object _32881 = NOVALUE; // 65998 32881
    object _32880 = NOVALUE; // 65996 32880
    object _32879 = NOVALUE; // 65994 32879
    object _32878 = NOVALUE; // 65992 32878
    object _32877 = NOVALUE; // 65989 32877
    object _32876 = NOVALUE; // 65987 32876
// skipping _32875  name type: 0
    object _32874 = NOVALUE; // 65984 32874
    object _32873 = NOVALUE; // 65983 32873
    object _32872 = NOVALUE; // 65982 32872
    object _32871 = NOVALUE; // 65979 32871
    object _32870 = NOVALUE; // 65978 32870
    object _32869 = NOVALUE; // 65975 32869
    object _32868 = NOVALUE; // 65973 32868
    object _32867 = NOVALUE; // 65971 32867
    object _32866 = NOVALUE; // 65970 32866
    object _32865 = NOVALUE; // 65968 32865
    object _32864 = NOVALUE; // 65967 32864
// skipping _32863  name type: 0
    object _32862 = NOVALUE; // 65964 32862
    object _32861 = NOVALUE; // 65963 32861
    object _32860 = NOVALUE; // 65962 32860
    object _32859 = NOVALUE; // 65961 32859
    object _32858 = NOVALUE; // 65959 32858
    object _32857 = NOVALUE; // 65956 32857
    object _32856 = NOVALUE; // 65955 32856
    object _32855 = NOVALUE; // 65953 32855
    object _32854 = NOVALUE; // 65952 32854
    object _32853 = NOVALUE; // 65950 32853
    object _32852 = NOVALUE; // 65949 32852
    object _32851 = NOVALUE; // 65948 32851
    object _32850 = NOVALUE; // 65945 32850
    object _32849 = NOVALUE; // 65943 32849
// skipping _32848  name type: 0
    object _32847 = NOVALUE; // 65938 32847
// skipping _32846  name type: 0
    object _32845 = NOVALUE; // 65934 32845
    object _32844 = NOVALUE; // 65933 32844
    object _32843 = NOVALUE; // 65932 32843
    object _32842 = NOVALUE; // 65930 32842
    object _32841 = NOVALUE; // 65928 32841
    object _32840 = NOVALUE; // 65926 32840
    object _32839 = NOVALUE; // 65924 32839
    object _32838 = NOVALUE; // 65922 32838
    object _32837 = NOVALUE; // 65921 32837
    object _32836 = NOVALUE; // 65919 32836
    object _32835 = NOVALUE; // 65918 32835
    object _32834 = NOVALUE; // 65916 32834
    object _32833 = NOVALUE; // 65914 32833
    object _32832 = NOVALUE; // 65912 32832
    object _32831 = NOVALUE; // 65910 32831
    object _32830 = NOVALUE; // 65908 32830
    object _32829 = NOVALUE; // 65906 32829
    object _32828 = NOVALUE; // 65904 32828
    object _32827 = NOVALUE; // 65902 32827
    object _32826 = NOVALUE; // 65901 32826
    object _32825 = NOVALUE; // 65899 32825
    object _32824 = NOVALUE; // 65895 32824
    object _32823 = NOVALUE; // 65892 32823
    object _32822 = NOVALUE; // 65890 32822
    object _32821 = NOVALUE; // 65889 32821
    object _32820 = NOVALUE; // 65887 32820
// skipping _32819  name type: 0
    object _32818 = NOVALUE; // 65883 32818
// skipping _32817  name type: 0
    object _32816 = NOVALUE; // 65877 32816
// skipping _32815  name type: 0
// skipping _32814  name type: 0
    object _32813 = NOVALUE; // 65871 32813
    object _32812 = NOVALUE; // 65870 32812
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BackEnd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_il_file_65847)) {
        _1 = (object)(DBL_PTR(_il_file_65847)->dbl);
        DeRefDS(_il_file_65847);
        _il_file_65847 = _1;
    }
    // SubProg BackEnd pc: 3 op: STARTLINE (58)

    /** backend.e:74		size = (1+length(SymTab)) * ST_ENTRY_SIZE */
    // SubProg BackEnd pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _32812 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _32812 = 1;
    }
    // SubProg BackEnd pc: 10 op: PLUS1 (93)
    _32813 = _32812 + 1;
    _32812 = NOVALUE;
    // SubProg BackEnd pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 16 op: MULTIPLY (13)
    _size_65864 = _32813 * _73ST_ENTRY_SIZE_65769;
    _32813 = NOVALUE;
    // SubProg BackEnd pc: 22 op: STARTLINE (58)

    /** backend.e:75		st = allocate(size)  -- symbol table*/
    // SubProg BackEnd pc: 24 op: PROC (27)
    _0 = _st_65849;
    _st_65849 = _9allocate(_size_65864, 0);
    DeRef(_0);
    // SubProg BackEnd pc: 29 op: STARTLINE (58)

    /** backend.e:76		mem_set(st, 0, size) -- all fields are 0 (NULL) by default*/
    // SubProg BackEnd pc: 31 op: MEM_SET (131)
    memory_set(_st_65849, 0, _size_65864);
    // SubProg BackEnd pc: 35 op: STARTLINE (58)

    /** backend.e:79		poke_pointer(st, length(SymTab))*/
    // SubProg BackEnd pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 39 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _32816 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _32816 = 1;
    }
    // SubProg BackEnd pc: 42 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_st_65849)){
        pokeptr_addr = (uintptr_t *)_st_65849;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_st_65849)->dbl);
    }
    *pokeptr_addr = (uintptr_t)_32816;
    _32816 = NOVALUE;
    // SubProg BackEnd pc: 45 op: STARTLINE (58)

    /** backend.e:81		lit_string = "" -- literal values are stored in a string like EDS*/
    // SubProg BackEnd pc: 47 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_lit_string_65866);
    _lit_string_65866 = _21958;
    // SubProg BackEnd pc: 50 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 52 op: STARTLINE (58)

    /** backend.e:82		string_size = 0 -- precompute total space needed for symbol names*/
    // SubProg BackEnd pc: 54 op: ASSIGN_I (113)
    _string_size_65862 = 0;
    // SubProg BackEnd pc: 57 op: STARTLINE (58)

    /** backend.e:84		addr = st + ST_ENTRY_SIZE*/
    // SubProg BackEnd pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 61 op: PLUS (11)
    DeRef(_addr_65848);
    if (IS_ATOM_INT(_st_65849)) {
        _addr_65848 = _st_65849 + _73ST_ENTRY_SIZE_65769;
        if ((object)((uintptr_t)_addr_65848 + (uintptr_t)HIGH_BITS) >= 0){
            _addr_65848 = NewDouble((eudouble)_addr_65848);
        }
    }
    else {
        _addr_65848 = NewDouble(DBL_PTR(_st_65849)->dbl + (eudouble)_73ST_ENTRY_SIZE_65769);
    }
    // SubProg BackEnd pc: 65 op: STARTLINE (58)

    /** backend.e:85		for i = 1 to length(SymTab) do*/
    // SubProg BackEnd pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 69 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _32818 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _32818 = 1;
    }
    // SubProg BackEnd pc: 72 op: FOR_I (125)
    {
        object _i_65881;
        _i_65881 = 1;
L1: // addr: 79 pc: 72 sub: 65845 op: 125
        if (_i_65881 > _32818){
            goto L2; // [72] 819
        }
        // SubProg BackEnd pc: 79 op: STARTLINE (58)

        /** backend.e:86			eentry = SymTab[i]*/
        // SubProg BackEnd pc: 81 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 83 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_65868);
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _eentry_65868 = (object)*(((s1_ptr)_2)->base + _i_65881);
        Ref(_eentry_65868);
        // SubProg BackEnd pc: 87 op: STARTLINE (58)

        /** backend.e:90			if atom(eentry) then*/
        // SubProg BackEnd pc: 89 op: IS_AN_ATOM (67)
        _32820 = IS_ATOM(_eentry_65868);
        // SubProg BackEnd pc: 92 op: IF (20)
        if (_32820 == 0)
        {
            _32820 = NOVALUE;
            goto L3; // [92] 139
        }
        else{
            _32820 = NOVALUE;
        }
        // SubProg BackEnd pc: 95 op: STARTLINE (58)

        /** backend.e:92				poke_pointer(addr + ST_NEXT, get_next( eentry) ) -- NEXT*/
        // SubProg BackEnd pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 99 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_NEXT_65709)) {
            _32821 = _addr_65848 + _73ST_NEXT_65709;
            if ((object)((uintptr_t)_32821 + (uintptr_t)HIGH_BITS) >= 0){
                _32821 = NewDouble((eudouble)_32821);
            }
        }
        else {
            _32821 = binary_op(PLUS, _addr_65848, _73ST_NEXT_65709);
        }
        // SubProg BackEnd pc: 103 op: PROC (27)
        Ref(_eentry_65868);
        _32822 = _68get_next(_eentry_65868);
        // SubProg BackEnd pc: 107 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32821)){
            pokeptr_addr = (uintptr_t *)_32821;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32821)->dbl);
        }
        if (IS_ATOM_INT(_32822)) {
            *pokeptr_addr = (uintptr_t)_32822;
        }
        else if (IS_ATOM(_32822)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32822)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32822);
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
        DeRef(_32821);
        _32821 = NOVALUE;
        DeRef(_32822);
        _32822 = NOVALUE;
        // SubProg BackEnd pc: 110 op: STARTLINE (58)

        /** backend.e:93				poke(addr + ST_MODE, M_TEMP) -- MODE*/
        // SubProg BackEnd pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 114 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_MODE_65715)) {
            _32823 = _addr_65848 + _73ST_MODE_65715;
            if ((object)((uintptr_t)_32823 + (uintptr_t)HIGH_BITS) >= 0){
                _32823 = NewDouble((eudouble)_32823);
            }
        }
        else {
            _32823 = binary_op(PLUS, _addr_65848, _73ST_MODE_65715);
        }
        // SubProg BackEnd pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 120 op: POKE (128)
        if (IS_ATOM_INT(_32823)){
            poke_addr = (uint8_t *)_32823;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32823)->dbl);
        }
        *poke_addr = (uint8_t)3;
        DeRef(_32823);
        _32823 = NOVALUE;
        // SubProg BackEnd pc: 123 op: STARTLINE (58)

        /** backend.e:94				poke(addr + ST_SCOPE, SC_UNDEFINED)  -- SCOPE, must be > S_PRIVATE */
        // SubProg BackEnd pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 127 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_SCOPE_65718)) {
            _32824 = _addr_65848 + _73ST_SCOPE_65718;
            if ((object)((uintptr_t)_32824 + (uintptr_t)HIGH_BITS) >= 0){
                _32824 = NewDouble((eudouble)_32824);
            }
        }
        else {
            _32824 = binary_op(PLUS, _addr_65848, _73ST_SCOPE_65718);
        }
        // SubProg BackEnd pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 133 op: POKE (128)
        if (IS_ATOM_INT(_32824)){
            poke_addr = (uint8_t *)_32824;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32824)->dbl);
        }
        *poke_addr = (uint8_t)9;
        DeRef(_32824);
        _32824 = NOVALUE;
        // SubProg BackEnd pc: 136 op: ELSE (23)
        goto L4; // [136] 804
        // SubProg BackEnd pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 65845 op: 159
        // SubProg BackEnd pc: 139 op: STARTLINE (58)

        /** backend.e:98				poke_pointer(addr + ST_NEXT, get_next( eentry[S_NEXT]) )*/
        // SubProg BackEnd pc: 141 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 143 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_NEXT_65709)) {
            _32825 = _addr_65848 + _73ST_NEXT_65709;
            if ((object)((uintptr_t)_32825 + (uintptr_t)HIGH_BITS) >= 0){
                _32825 = NewDouble((eudouble)_32825);
            }
        }
        else {
            _32825 = binary_op(PLUS, _addr_65848, _73ST_NEXT_65709);
        }
        // SubProg BackEnd pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 149 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32826 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg BackEnd pc: 153 op: PROC (27)
        Ref(_32826);
        _32827 = _68get_next(_32826);
        _32826 = NOVALUE;
        // SubProg BackEnd pc: 157 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32825)){
            pokeptr_addr = (uintptr_t *)_32825;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32825)->dbl);
        }
        if (IS_ATOM_INT(_32827)) {
            *pokeptr_addr = (uintptr_t)_32827;
        }
        else if (IS_ATOM(_32827)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32827)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32827);
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
        DeRef(_32827);
        _32827 = NOVALUE;
        // SubProg BackEnd pc: 160 op: STARTLINE (58)

        /** backend.e:99				poke_pointer(addr + ST_NEXT_IN_BLOCK, eentry[S_NEXT_IN_BLOCK])*/
        // SubProg BackEnd pc: 162 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 164 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_NEXT_IN_BLOCK_65712)) {
            _32828 = _addr_65848 + _73ST_NEXT_IN_BLOCK_65712;
            if ((object)((uintptr_t)_32828 + (uintptr_t)HIGH_BITS) >= 0){
                _32828 = NewDouble((eudouble)_32828);
            }
        }
        else {
            _32828 = binary_op(PLUS, _addr_65848, _73ST_NEXT_IN_BLOCK_65712);
        }
        // SubProg BackEnd pc: 168 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 170 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124)){
            _32829 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
        }
        else{
            _32829 = (object)*(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
        }
        // SubProg BackEnd pc: 174 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32828)){
            pokeptr_addr = (uintptr_t *)_32828;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32828)->dbl);
        }
        if (IS_ATOM_INT(_32829)) {
            *pokeptr_addr = (uintptr_t)_32829;
        }
        else if (IS_ATOM(_32829)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32829)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32829);
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
        DeRef(_32828);
        _32828 = NOVALUE;
        _32829 = NOVALUE;
        // SubProg BackEnd pc: 177 op: STARTLINE (58)

        /** backend.e:100				poke(addr + ST_MODE, eentry[S_MODE])*/
        // SubProg BackEnd pc: 179 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 181 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_MODE_65715)) {
            _32830 = _addr_65848 + _73ST_MODE_65715;
            if ((object)((uintptr_t)_32830 + (uintptr_t)HIGH_BITS) >= 0){
                _32830 = NewDouble((eudouble)_32830);
            }
        }
        else {
            _32830 = binary_op(PLUS, _addr_65848, _73ST_MODE_65715);
        }
        // SubProg BackEnd pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 187 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32831 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 191 op: POKE (128)
        if (IS_ATOM_INT(_32830)){
            poke_addr = (uint8_t *)_32830;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32830)->dbl);
        }
        if (IS_ATOM_INT(_32831)) {
            *poke_addr = (uint8_t)_32831;
        }
        else if (IS_ATOM(_32831)) {
            *poke_addr = (uint8_t)DBL_PTR(_32831)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32831);
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
        DeRef(_32830);
        _32830 = NOVALUE;
        _32831 = NOVALUE;
        // SubProg BackEnd pc: 194 op: STARTLINE (58)

        /** backend.e:101				poke(addr + ST_SCOPE, eentry[S_SCOPE])*/
        // SubProg BackEnd pc: 196 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 198 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_SCOPE_65718)) {
            _32832 = _addr_65848 + _73ST_SCOPE_65718;
            if ((object)((uintptr_t)_32832 + (uintptr_t)HIGH_BITS) >= 0){
                _32832 = NewDouble((eudouble)_32832);
            }
        }
        else {
            _32832 = binary_op(PLUS, _addr_65848, _73ST_SCOPE_65718);
        }
        // SubProg BackEnd pc: 202 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 204 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32833 = (object)*(((s1_ptr)_2)->base + 4);
        // SubProg BackEnd pc: 208 op: POKE (128)
        if (IS_ATOM_INT(_32832)){
            poke_addr = (uint8_t *)_32832;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32832)->dbl);
        }
        if (IS_ATOM_INT(_32833)) {
            *poke_addr = (uint8_t)_32833;
        }
        else if (IS_ATOM(_32833)) {
            *poke_addr = (uint8_t)DBL_PTR(_32833)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32833);
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
        DeRef(_32832);
        _32832 = NOVALUE;
        _32833 = NOVALUE;
        // SubProg BackEnd pc: 211 op: STARTLINE (58)

        /** backend.e:103				if length(eentry) >= S_NAME and sequence(eentry[S_NAME]) then*/
        // SubProg BackEnd pc: 213 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65868)){
                _32834 = SEQ_PTR(_eentry_65868)->length;
        }
        else {
            _32834 = 1;
        }
        // SubProg BackEnd pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 218 op: GREATEREQ (2)
        if (IS_ATOM_INT(_5S_NAME_12132)) {
            _32835 = (_32834 >= _5S_NAME_12132);
        }
        else {
            _32835 = binary_op(GREATEREQ, _32834, _5S_NAME_12132);
        }
        _32834 = NOVALUE;
        // SubProg BackEnd pc: 222 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_32835)) {
            if (_32835 == 0) {
                goto L5; // [222] 295
            }
        }
        else {
            if (DBL_PTR(_32835)->dbl == 0.0) {
                goto L5; // [222] 295
            }
        }
        // SubProg BackEnd pc: 226 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 228 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_NAME_12132)){
            _32837 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
        }
        else{
            _32837 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
        }
        // SubProg BackEnd pc: 232 op: IS_A_SEQUENCE (68)
        _32838 = IS_SEQUENCE(_32837);
        _32837 = NOVALUE;
        // SubProg BackEnd pc: 235 op: NOP1 (159)
        // SubProg BackEnd pc: 236 op: IF (20)
        if (_32838 == 0)
        {
            _32838 = NOVALUE;
            goto L5; // [236] 295
        }
        else{
            _32838 = NOVALUE;
        }
        // SubProg BackEnd pc: 239 op: STARTLINE (58)

        /** backend.e:105					poke(addr + ST_FILE_NO, eentry[S_FILE_NO])*/
        // SubProg BackEnd pc: 241 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 243 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_FILE_NO_65721)) {
            _32839 = _addr_65848 + _73ST_FILE_NO_65721;
            if ((object)((uintptr_t)_32839 + (uintptr_t)HIGH_BITS) >= 0){
                _32839 = NewDouble((eudouble)_32839);
            }
        }
        else {
            _32839 = binary_op(PLUS, _addr_65848, _73ST_FILE_NO_65721);
        }
        // SubProg BackEnd pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 249 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _32840 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _32840 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        // SubProg BackEnd pc: 253 op: POKE (128)
        if (IS_ATOM_INT(_32839)){
            poke_addr = (uint8_t *)_32839;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32839)->dbl);
        }
        if (IS_ATOM_INT(_32840)) {
            *poke_addr = (uint8_t)_32840;
        }
        else if (IS_ATOM(_32840)) {
            *poke_addr = (uint8_t)DBL_PTR(_32840)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32840);
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
        DeRef(_32839);
        _32839 = NOVALUE;
        _32840 = NOVALUE;
        // SubProg BackEnd pc: 256 op: STARTLINE (58)

        /** backend.e:106					poke4(addr + ST_TOKEN, eentry[S_TOKEN])*/
        // SubProg BackEnd pc: 258 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 260 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_TOKEN_65727)) {
            _32841 = _addr_65848 + _73ST_TOKEN_65727;
            if ((object)((uintptr_t)_32841 + (uintptr_t)HIGH_BITS) >= 0){
                _32841 = NewDouble((eudouble)_32841);
            }
        }
        else {
            _32841 = binary_op(PLUS, _addr_65848, _73ST_TOKEN_65727);
        }
        // SubProg BackEnd pc: 264 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 266 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _32842 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _32842 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        // SubProg BackEnd pc: 270 op: POKE4 (138)
        if (IS_ATOM_INT(_32841)){
            poke4_addr = (uint32_t *)_32841;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32841)->dbl);
        }
        if (IS_ATOM_INT(_32842)) {
            *poke4_addr = (uint32_t)_32842;
        }
        else if (IS_ATOM(_32842)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32842)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32842);
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
        DeRef(_32841);
        _32841 = NOVALUE;
        _32842 = NOVALUE;
        // SubProg BackEnd pc: 273 op: STARTLINE (58)

        /** backend.e:107					string_size += length(eentry[S_NAME])+1*/
        // SubProg BackEnd pc: 275 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 277 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_NAME_12132)){
            _32843 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
        }
        else{
            _32843 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
        }
        // SubProg BackEnd pc: 281 op: LENGTH (42)
        if (IS_SEQUENCE(_32843)){
                _32844 = SEQ_PTR(_32843)->length;
        }
        else {
            _32844 = 1;
        }
        _32843 = NOVALUE;
        // SubProg BackEnd pc: 284 op: PLUS1 (93)
        _32845 = _32844 + 1;
        _32844 = NOVALUE;
        // SubProg BackEnd pc: 288 op: PLUS (11)
        _string_size_65862 = _string_size_65862 + _32845;
        _32845 = NOVALUE;
        // SubProg BackEnd pc: 294 op: NOP1 (159)
L5: // addr: 295 pc: 294 sub: 65845 op: 159
        // SubProg BackEnd pc: 295 op: STARTLINE (58)

        /** backend.e:110				if eentry[S_MODE] = M_NORMAL then*/
        // SubProg BackEnd pc: 297 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 299 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32847 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 303 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 305 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _32847, 1)){
            _32847 = NOVALUE;
            goto L6; // [305] 611
        }
        _32847 = NOVALUE;
        // SubProg BackEnd pc: 309 op: STARTLINE (58)

        /** backend.e:113					if find(eentry[S_TOKEN], RTN_TOKS) then*/
        // SubProg BackEnd pc: 311 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 313 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _32849 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _32849 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        // SubProg BackEnd pc: 317 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 319 op: FIND_FROM (176)
        _32850 = find_from(_32849, _29RTN_TOKS_12080, 1);
        _32849 = NOVALUE;
        // SubProg BackEnd pc: 324 op: IF (20)
        if (_32850 == 0)
        {
            _32850 = NOVALUE;
            goto L7; // [324] 590
        }
        else{
            _32850 = NOVALUE;
        }
        // SubProg BackEnd pc: 327 op: STARTLINE (58)

        /** backend.e:115						if sequence(eentry[S_CODE]) and (get_backend() or eentry[S_OPCODE]=0) then  */
        // SubProg BackEnd pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 331 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_CODE_12144)){
            _32851 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        }
        else{
            _32851 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
        }
        // SubProg BackEnd pc: 335 op: IS_A_SEQUENCE (68)
        _32852 = IS_SEQUENCE(_32851);
        _32851 = NOVALUE;
        // SubProg BackEnd pc: 338 op: SC1_AND_IF (146)
        if (_32852 == 0) {
            goto L8; // [338] 502
        }
        // SubProg BackEnd pc: 342 op: PROC (27)
        _32854 = _2get_backend();
        // SubProg BackEnd pc: 345 op: SC1_OR (143)
        if (IS_ATOM_INT(_32854)) {
            if (_32854 != 0) {
                DeRef(_32855);
                _32855 = 1;
                goto L9; // [345] 363
            }
        }
        else {
            if (DBL_PTR(_32854)->dbl != 0.0) {
                DeRef(_32855);
                _32855 = 1;
                goto L9; // [345] 363
            }
        }
        // SubProg BackEnd pc: 349 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 351 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32856 = (object)*(((s1_ptr)_2)->base + 21);
        // SubProg BackEnd pc: 355 op: EQUALS (3)
        if (IS_ATOM_INT(_32856)) {
            _32857 = (_32856 == 0);
        }
        else {
            _32857 = binary_op(EQUALS, _32856, 0);
        }
        _32856 = NOVALUE;
        // SubProg BackEnd pc: 359 op: SC2_OR (144)
        DeRef(_32855);
        if (IS_ATOM_INT(_32857))
        _32855 = (_32857 != 0);
        else
        _32855 = DBL_PTR(_32857)->dbl != 0.0;
        // SubProg BackEnd pc: 362 op: NOP1 (159)
L9: // addr: 363 pc: 362 sub: 65845 op: 159
        // SubProg BackEnd pc: 363 op: NOP1 (159)
        // SubProg BackEnd pc: 364 op: IF (20)
        if (_32855 == 0)
        {
            _32855 = NOVALUE;
            goto L8; // [364] 502
        }
        else{
            _32855 = NOVALUE;
        }
        // SubProg BackEnd pc: 367 op: STARTLINE (58)

        /** backend.e:117							e_addr = allocate( sizeof( C_POINTER ) * (length(eentry[S_CODE]) + 1 ) ) -- IL code*/
        // SubProg BackEnd pc: 369 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 371 op: SIZEOF (217)
        _32858 = eu_sizeof( 50331649 );
        DeRef(_32858);
        // SubProg BackEnd pc: 374 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_CODE_12144)){
            _32859 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        }
        else{
            _32859 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
        }
        // SubProg BackEnd pc: 380 op: LENGTH (42)
        if (IS_SEQUENCE(_32859)){
                _32860 = SEQ_PTR(_32859)->length;
        }
        else {
            _32860 = 1;
        }
        _32859 = NOVALUE;
        // SubProg BackEnd pc: 383 op: PLUS1 (93)
        _32861 = _32860 + 1;
        _32860 = NOVALUE;
        // SubProg BackEnd pc: 387 op: MULTIPLY (13)
        if (_32858 == (short)_32858 && _32861 <= INT15){
            _32862 = _32858 * _32861;
        }
        else{
            _32862 = NewDouble(_32858 * (eudouble)_32861);
        }
        _32858 = NOVALUE;
        _32861 = NOVALUE;
        // SubProg BackEnd pc: 391 op: PROC (27)
        _0 = _e_addr_65856;
        _e_addr_65856 = _9allocate(_32862, 0);
        DeRef(_0);
        _32862 = NOVALUE;
        // SubProg BackEnd pc: 396 op: STARTLINE (58)

        /** backend.e:118							poke_pointer(e_addr, length(eentry[S_CODE]))*/
        // SubProg BackEnd pc: 398 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 400 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_CODE_12144)){
            _32864 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        }
        else{
            _32864 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
        }
        // SubProg BackEnd pc: 404 op: LENGTH (42)
        if (IS_SEQUENCE(_32864)){
                _32865 = SEQ_PTR(_32864)->length;
        }
        else {
            _32865 = 1;
        }
        _32864 = NOVALUE;
        // SubProg BackEnd pc: 407 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_e_addr_65856)){
            pokeptr_addr = (uintptr_t *)_e_addr_65856;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_e_addr_65856)->dbl);
        }
        *pokeptr_addr = (uintptr_t)_32865;
        _32865 = NOVALUE;
        // SubProg BackEnd pc: 410 op: STARTLINE (58)

        /** backend.e:119							poke_pointer(e_addr + sizeof( C_POINTER ), eentry[S_CODE])*/
        // SubProg BackEnd pc: 412 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 414 op: SIZEOF (217)
        _32866 = eu_sizeof( 50331649 );
        DeRef(_32866);
        // SubProg BackEnd pc: 417 op: PLUS (11)
        if (IS_ATOM_INT(_e_addr_65856)) {
            _32867 = _e_addr_65856 + _32866;
            if ((object)((uintptr_t)_32867 + (uintptr_t)HIGH_BITS) >= 0){
                _32867 = NewDouble((eudouble)_32867);
            }
        }
        else {
            _32867 = NewDouble(DBL_PTR(_e_addr_65856)->dbl + (eudouble)_32866);
        }
        _32866 = NOVALUE;
        // SubProg BackEnd pc: 421 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 423 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_CODE_12144)){
            _32868 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        }
        else{
            _32868 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
        }
        // SubProg BackEnd pc: 427 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32867)){
            pokeptr_addr = (uintptr_t *)_32867;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32867)->dbl);
        }
        if (IS_ATOM_INT(_32868)) {
            *pokeptr_addr = (uintptr_t)_32868;
        }
        else if (IS_ATOM(_32868)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32868)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32868);
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
        DeRef(_32867);
        _32867 = NOVALUE;
        _32868 = NOVALUE;
        // SubProg BackEnd pc: 430 op: STARTLINE (58)

        /** backend.e:120							poke_pointer(addr + ST_CODE, e_addr)*/
        // SubProg BackEnd pc: 432 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 434 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_CODE_65742)) {
            _32869 = _addr_65848 + _73ST_CODE_65742;
            if ((object)((uintptr_t)_32869 + (uintptr_t)HIGH_BITS) >= 0){
                _32869 = NewDouble((eudouble)_32869);
            }
        }
        else {
            _32869 = binary_op(PLUS, _addr_65848, _73ST_CODE_65742);
        }
        // SubProg BackEnd pc: 438 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32869)){
            pokeptr_addr = (uintptr_t *)_32869;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32869)->dbl);
        }
        if (IS_ATOM_INT(_e_addr_65856)) {
            *pokeptr_addr = (uintptr_t)_e_addr_65856;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_e_addr_65856)->dbl;
        }
        DeRef(_32869);
        _32869 = NOVALUE;
        // SubProg BackEnd pc: 441 op: STARTLINE (58)

        /** backend.e:122							if sequence(eentry[S_LINETAB]) then*/
        // SubProg BackEnd pc: 443 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 445 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_LINETAB_12167)){
            _32870 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
        }
        else{
            _32870 = (object)*(((s1_ptr)_2)->base + _5S_LINETAB_12167);
        }
        // SubProg BackEnd pc: 449 op: IS_A_SEQUENCE (68)
        _32871 = IS_SEQUENCE(_32870);
        _32870 = NOVALUE;
        // SubProg BackEnd pc: 452 op: IF (20)
        if (_32871 == 0)
        {
            _32871 = NOVALUE;
            goto LA; // [452] 500
        }
        else{
            _32871 = NOVALUE;
        }
        // SubProg BackEnd pc: 455 op: STARTLINE (58)

        /** backend.e:124								l_addr = allocate( 4 * length(eentry[S_LINETAB])) */
        // SubProg BackEnd pc: 457 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 459 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_LINETAB_12167)){
            _32872 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
        }
        else{
            _32872 = (object)*(((s1_ptr)_2)->base + _5S_LINETAB_12167);
        }
        // SubProg BackEnd pc: 463 op: LENGTH (42)
        if (IS_SEQUENCE(_32872)){
                _32873 = SEQ_PTR(_32872)->length;
        }
        else {
            _32873 = 1;
        }
        _32872 = NOVALUE;
        // SubProg BackEnd pc: 466 op: MULTIPLY (13)
        if (_32873 <= INT15){
            _32874 = 4 * _32873;
        }
        else{
            _32874 = NewDouble(4 * (eudouble)_32873);
        }
        _32873 = NOVALUE;
        // SubProg BackEnd pc: 470 op: PROC (27)
        _0 = _l_addr_65857;
        _l_addr_65857 = _9allocate(_32874, 0);
        DeRef(_0);
        _32874 = NOVALUE;
        // SubProg BackEnd pc: 475 op: STARTLINE (58)

        /** backend.e:125								poke4(l_addr, eentry[S_LINETAB])*/
        // SubProg BackEnd pc: 477 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 479 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_LINETAB_12167)){
            _32876 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LINETAB_12167)->dbl));
        }
        else{
            _32876 = (object)*(((s1_ptr)_2)->base + _5S_LINETAB_12167);
        }
        // SubProg BackEnd pc: 483 op: POKE4 (138)
        if (IS_ATOM_INT(_l_addr_65857)){
            poke4_addr = (uint32_t *)_l_addr_65857;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_l_addr_65857)->dbl);
        }
        if (IS_ATOM_INT(_32876)) {
            *poke4_addr = (uint32_t)_32876;
        }
        else if (IS_ATOM(_32876)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32876)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32876);
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
        _32876 = NOVALUE;
        // SubProg BackEnd pc: 486 op: STARTLINE (58)

        /** backend.e:126								poke_pointer(addr + ST_LINETAB, l_addr)*/
        // SubProg BackEnd pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 490 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_LINETAB_65754)) {
            _32877 = _addr_65848 + _73ST_LINETAB_65754;
            if ((object)((uintptr_t)_32877 + (uintptr_t)HIGH_BITS) >= 0){
                _32877 = NewDouble((eudouble)_32877);
            }
        }
        else {
            _32877 = binary_op(PLUS, _addr_65848, _73ST_LINETAB_65754);
        }
        // SubProg BackEnd pc: 494 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32877)){
            pokeptr_addr = (uintptr_t *)_32877;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32877)->dbl);
        }
        if (IS_ATOM_INT(_l_addr_65857)) {
            *pokeptr_addr = (uintptr_t)_l_addr_65857;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_l_addr_65857)->dbl;
        }
        DeRef(_32877);
        _32877 = NOVALUE;
        // SubProg BackEnd pc: 497 op: ELSE (23)
        goto LB; // [497] 501
        // SubProg BackEnd pc: 499 op: NOP1 (159)
LA: // addr: 500 pc: 499 sub: 65845 op: 159
        // SubProg BackEnd pc: 500 op: NOP1 (159)
LB: // addr: 501 pc: 500 sub: 65845 op: 159
        // SubProg BackEnd pc: 501 op: NOP1 (159)
L8: // addr: 502 pc: 501 sub: 65845 op: 159
        // SubProg BackEnd pc: 502 op: STARTLINE (58)

        /** backend.e:131						poke4(addr + ST_FIRSTLINE, eentry[S_FIRSTLINE])*/
        // SubProg BackEnd pc: 504 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 506 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_FIRSTLINE_65757)) {
            _32878 = _addr_65848 + _73ST_FIRSTLINE_65757;
            if ((object)((uintptr_t)_32878 + (uintptr_t)HIGH_BITS) >= 0){
                _32878 = NewDouble((eudouble)_32878);
            }
        }
        else {
            _32878 = binary_op(PLUS, _addr_65848, _73ST_FIRSTLINE_65757);
        }
        // SubProg BackEnd pc: 510 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 512 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_FIRSTLINE_12172)){
            _32879 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FIRSTLINE_12172)->dbl));
        }
        else{
            _32879 = (object)*(((s1_ptr)_2)->base + _5S_FIRSTLINE_12172);
        }
        // SubProg BackEnd pc: 516 op: POKE4 (138)
        if (IS_ATOM_INT(_32878)){
            poke4_addr = (uint32_t *)_32878;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32878)->dbl);
        }
        if (IS_ATOM_INT(_32879)) {
            *poke4_addr = (uint32_t)_32879;
        }
        else if (IS_ATOM(_32879)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32879)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32879);
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
        DeRef(_32878);
        _32878 = NOVALUE;
        _32879 = NOVALUE;
        // SubProg BackEnd pc: 519 op: STARTLINE (58)

        /** backend.e:132						poke_pointer(addr + ST_TEMPS, eentry[S_TEMPS])*/
        // SubProg BackEnd pc: 521 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 523 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_TEMPS_65745)) {
            _32880 = _addr_65848 + _73ST_TEMPS_65745;
            if ((object)((uintptr_t)_32880 + (uintptr_t)HIGH_BITS) >= 0){
                _32880 = NewDouble((eudouble)_32880);
            }
        }
        else {
            _32880 = binary_op(PLUS, _addr_65848, _73ST_TEMPS_65745);
        }
        // SubProg BackEnd pc: 527 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 529 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_TEMPS_12177)){
            _32881 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
        }
        else{
            _32881 = (object)*(((s1_ptr)_2)->base + _5S_TEMPS_12177);
        }
        // SubProg BackEnd pc: 533 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32880)){
            pokeptr_addr = (uintptr_t *)_32880;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32880)->dbl);
        }
        if (IS_ATOM_INT(_32881)) {
            *pokeptr_addr = (uintptr_t)_32881;
        }
        else if (IS_ATOM(_32881)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32881)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32881);
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
        DeRef(_32880);
        _32880 = NOVALUE;
        _32881 = NOVALUE;
        // SubProg BackEnd pc: 536 op: STARTLINE (58)

        /** backend.e:133						poke4(addr + ST_NUM_ARGS, eentry[S_NUM_ARGS])*/
        // SubProg BackEnd pc: 538 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 540 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_NUM_ARGS_65760)) {
            _32882 = _addr_65848 + _73ST_NUM_ARGS_65760;
            if ((object)((uintptr_t)_32882 + (uintptr_t)HIGH_BITS) >= 0){
                _32882 = NewDouble((eudouble)_32882);
            }
        }
        else {
            _32882 = binary_op(PLUS, _addr_65848, _73ST_NUM_ARGS_65760);
        }
        // SubProg BackEnd pc: 544 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 546 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
            _32883 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
        }
        else{
            _32883 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
        }
        // SubProg BackEnd pc: 550 op: POKE4 (138)
        if (IS_ATOM_INT(_32882)){
            poke4_addr = (uint32_t *)_32882;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32882)->dbl);
        }
        if (IS_ATOM_INT(_32883)) {
            *poke4_addr = (uint32_t)_32883;
        }
        else if (IS_ATOM(_32883)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32883)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32883);
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
        DeRef(_32882);
        _32882 = NOVALUE;
        _32883 = NOVALUE;
        // SubProg BackEnd pc: 553 op: STARTLINE (58)

        /** backend.e:136						poke4(addr + ST_STACK_SPACE, eentry[S_STACK_SPACE])*/
        // SubProg BackEnd pc: 555 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 557 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_STACK_SPACE_65766)) {
            _32884 = _addr_65848 + _73ST_STACK_SPACE_65766;
            if ((object)((uintptr_t)_32884 + (uintptr_t)HIGH_BITS) >= 0){
                _32884 = NewDouble((eudouble)_32884);
            }
        }
        else {
            _32884 = binary_op(PLUS, _addr_65848, _73ST_STACK_SPACE_65766);
        }
        // SubProg BackEnd pc: 561 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 563 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_STACK_SPACE_12192)){
            _32885 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
        }
        else{
            _32885 = (object)*(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
        }
        // SubProg BackEnd pc: 567 op: POKE4 (138)
        if (IS_ATOM_INT(_32884)){
            poke4_addr = (uint32_t *)_32884;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32884)->dbl);
        }
        if (IS_ATOM_INT(_32885)) {
            *poke4_addr = (uint32_t)_32885;
        }
        else if (IS_ATOM(_32885)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32885)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32885);
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
        DeRef(_32884);
        _32884 = NOVALUE;
        _32885 = NOVALUE;
        // SubProg BackEnd pc: 570 op: STARTLINE (58)

        /** backend.e:137						poke_pointer(addr + ST_BLOCK, eentry[S_BLOCK])*/
        // SubProg BackEnd pc: 572 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 574 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_BLOCK_65751)) {
            _32886 = _addr_65848 + _73ST_BLOCK_65751;
            if ((object)((uintptr_t)_32886 + (uintptr_t)HIGH_BITS) >= 0){
                _32886 = NewDouble((eudouble)_32886);
            }
        }
        else {
            _32886 = binary_op(PLUS, _addr_65848, _73ST_BLOCK_65751);
        }
        // SubProg BackEnd pc: 578 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 580 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_BLOCK_12152)){
            _32887 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
        }
        else{
            _32887 = (object)*(((s1_ptr)_2)->base + _5S_BLOCK_12152);
        }
        // SubProg BackEnd pc: 584 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32886)){
            pokeptr_addr = (uintptr_t *)_32886;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32886)->dbl);
        }
        if (IS_ATOM_INT(_32887)) {
            *pokeptr_addr = (uintptr_t)_32887;
        }
        else if (IS_ATOM(_32887)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32887)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32887);
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
        DeRef(_32886);
        _32886 = NOVALUE;
        _32887 = NOVALUE;
        // SubProg BackEnd pc: 587 op: ELSE (23)
        goto LC; // [587] 803
        // SubProg BackEnd pc: 589 op: NOP1 (159)
L7: // addr: 590 pc: 589 sub: 65845 op: 159
        // SubProg BackEnd pc: 590 op: STARTLINE (58)

        /** backend.e:140						poke_pointer(addr + ST_DECLARED_IN, eentry[S_BLOCK] )*/
        // SubProg BackEnd pc: 592 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 594 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_DECLARED_IN_65733)) {
            _32888 = _addr_65848 + _73ST_DECLARED_IN_65733;
            if ((object)((uintptr_t)_32888 + (uintptr_t)HIGH_BITS) >= 0){
                _32888 = NewDouble((eudouble)_32888);
            }
        }
        else {
            _32888 = binary_op(PLUS, _addr_65848, _73ST_DECLARED_IN_65733);
        }
        // SubProg BackEnd pc: 598 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 600 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_BLOCK_12152)){
            _32889 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
        }
        else{
            _32889 = (object)*(((s1_ptr)_2)->base + _5S_BLOCK_12152);
        }
        // SubProg BackEnd pc: 604 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32888)){
            pokeptr_addr = (uintptr_t *)_32888;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32888)->dbl);
        }
        if (IS_ATOM_INT(_32889)) {
            *pokeptr_addr = (uintptr_t)_32889;
        }
        else if (IS_ATOM(_32889)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32889)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32889);
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
        DeRef(_32888);
        _32888 = NOVALUE;
        _32889 = NOVALUE;
        // SubProg BackEnd pc: 607 op: NOP1 (159)
        // SubProg BackEnd pc: 608 op: ELSE (23)
        goto LC; // [608] 803
        // SubProg BackEnd pc: 610 op: NOP1 (159)
L6: // addr: 611 pc: 610 sub: 65845 op: 159
        // SubProg BackEnd pc: 611 op: STARTLINE (58)

        /** backend.e:143				elsif eentry[S_MODE] = M_BLOCK then*/
        // SubProg BackEnd pc: 613 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 615 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32890 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 619 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 621 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _32890, 4)){
            _32890 = NOVALUE;
            goto LD; // [621] 708
        }
        _32890 = NOVALUE;
        // SubProg BackEnd pc: 625 op: STARTLINE (58)

        /** backend.e:144					poke_pointer(addr + ST_NEXT_IN_BLOCK, eentry[S_NEXT_IN_BLOCK] )*/
        // SubProg BackEnd pc: 627 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 629 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_NEXT_IN_BLOCK_65712)) {
            _32892 = _addr_65848 + _73ST_NEXT_IN_BLOCK_65712;
            if ((object)((uintptr_t)_32892 + (uintptr_t)HIGH_BITS) >= 0){
                _32892 = NewDouble((eudouble)_32892);
            }
        }
        else {
            _32892 = binary_op(PLUS, _addr_65848, _73ST_NEXT_IN_BLOCK_65712);
        }
        // SubProg BackEnd pc: 633 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 635 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124)){
            _32893 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
        }
        else{
            _32893 = (object)*(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
        }
        // SubProg BackEnd pc: 639 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32892)){
            pokeptr_addr = (uintptr_t *)_32892;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32892)->dbl);
        }
        if (IS_ATOM_INT(_32893)) {
            *pokeptr_addr = (uintptr_t)_32893;
        }
        else if (IS_ATOM(_32893)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32893)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32893);
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
        DeRef(_32892);
        _32892 = NOVALUE;
        _32893 = NOVALUE;
        // SubProg BackEnd pc: 642 op: STARTLINE (58)

        /** backend.e:145					poke_pointer(addr + ST_BLOCK, eentry[S_BLOCK])*/
        // SubProg BackEnd pc: 644 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 646 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_BLOCK_65751)) {
            _32894 = _addr_65848 + _73ST_BLOCK_65751;
            if ((object)((uintptr_t)_32894 + (uintptr_t)HIGH_BITS) >= 0){
                _32894 = NewDouble((eudouble)_32894);
            }
        }
        else {
            _32894 = binary_op(PLUS, _addr_65848, _73ST_BLOCK_65751);
        }
        // SubProg BackEnd pc: 650 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 652 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_BLOCK_12152)){
            _32895 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
        }
        else{
            _32895 = (object)*(((s1_ptr)_2)->base + _5S_BLOCK_12152);
        }
        // SubProg BackEnd pc: 656 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_32894)){
            pokeptr_addr = (uintptr_t *)_32894;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32894)->dbl);
        }
        if (IS_ATOM_INT(_32895)) {
            *pokeptr_addr = (uintptr_t)_32895;
        }
        else if (IS_ATOM(_32895)) {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_32895)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32895);
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
        DeRef(_32894);
        _32894 = NOVALUE;
        _32895 = NOVALUE;
        // SubProg BackEnd pc: 659 op: STARTLINE (58)

        /** backend.e:146					if length(eentry) >= S_FIRST_LINE then*/
        // SubProg BackEnd pc: 661 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65868)){
                _32896 = SEQ_PTR(_eentry_65868)->length;
        }
        else {
            _32896 = 1;
        }
        // SubProg BackEnd pc: 664 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 666 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _32896, _5S_FIRST_LINE_12157)){
            _32896 = NOVALUE;
            goto LC; // [666] 803
        }
        _32896 = NOVALUE;
        // SubProg BackEnd pc: 670 op: STARTLINE (58)

        /** backend.e:147						poke4(addr + ST_FIRST_LINE, eentry[S_FIRST_LINE] )*/
        // SubProg BackEnd pc: 672 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 674 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_FIRST_LINE_65736)) {
            _32898 = _addr_65848 + _73ST_FIRST_LINE_65736;
            if ((object)((uintptr_t)_32898 + (uintptr_t)HIGH_BITS) >= 0){
                _32898 = NewDouble((eudouble)_32898);
            }
        }
        else {
            _32898 = binary_op(PLUS, _addr_65848, _73ST_FIRST_LINE_65736);
        }
        // SubProg BackEnd pc: 678 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 680 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_FIRST_LINE_12157)){
            _32899 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FIRST_LINE_12157)->dbl));
        }
        else{
            _32899 = (object)*(((s1_ptr)_2)->base + _5S_FIRST_LINE_12157);
        }
        // SubProg BackEnd pc: 684 op: POKE4 (138)
        if (IS_ATOM_INT(_32898)){
            poke4_addr = (uint32_t *)_32898;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32898)->dbl);
        }
        if (IS_ATOM_INT(_32899)) {
            *poke4_addr = (uint32_t)_32899;
        }
        else if (IS_ATOM(_32899)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32899)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32899);
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
        DeRef(_32898);
        _32898 = NOVALUE;
        _32899 = NOVALUE;
        // SubProg BackEnd pc: 687 op: STARTLINE (58)

        /** backend.e:148						poke4(addr + ST_LAST_LINE, eentry[S_LAST_LINE] )*/
        // SubProg BackEnd pc: 689 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 691 op: PLUS (11)
        if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73ST_LAST_LINE_65739)) {
            _32900 = _addr_65848 + _73ST_LAST_LINE_65739;
            if ((object)((uintptr_t)_32900 + (uintptr_t)HIGH_BITS) >= 0){
                _32900 = NewDouble((eudouble)_32900);
            }
        }
        else {
            _32900 = binary_op(PLUS, _addr_65848, _73ST_LAST_LINE_65739);
        }
        // SubProg BackEnd pc: 695 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 697 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!IS_ATOM_INT(_5S_LAST_LINE_12162)){
            _32901 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_LAST_LINE_12162)->dbl));
        }
        else{
            _32901 = (object)*(((s1_ptr)_2)->base + _5S_LAST_LINE_12162);
        }
        // SubProg BackEnd pc: 701 op: POKE4 (138)
        if (IS_ATOM_INT(_32900)){
            poke4_addr = (uint32_t *)_32900;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32900)->dbl);
        }
        if (IS_ATOM_INT(_32901)) {
            *poke4_addr = (uint32_t)_32901;
        }
        else if (IS_ATOM(_32901)) {
            *poke4_addr = (uint32_t)DBL_PTR(_32901)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_32901);
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
        DeRef(_32900);
        _32900 = NOVALUE;
        _32901 = NOVALUE;
        // SubProg BackEnd pc: 704 op: NOP1 (159)
        // SubProg BackEnd pc: 705 op: ELSE (23)
        goto LC; // [705] 803
        // SubProg BackEnd pc: 707 op: NOP1 (159)
LD: // addr: 708 pc: 707 sub: 65845 op: 159
        // SubProg BackEnd pc: 708 op: STARTLINE (58)

        /** backend.e:151				elsif (length(eentry) < S_NAME and eentry[S_MODE] = M_CONSTANT) or*/
        // SubProg BackEnd pc: 710 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65868)){
                _32902 = SEQ_PTR(_eentry_65868)->length;
        }
        else {
            _32902 = 1;
        }
        // SubProg BackEnd pc: 713 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 715 op: LESS (1)
        if (IS_ATOM_INT(_5S_NAME_12132)) {
            _32903 = (_32902 < _5S_NAME_12132);
        }
        else {
            _32903 = binary_op(LESS, _32902, _5S_NAME_12132);
        }
        _32902 = NOVALUE;
        // SubProg BackEnd pc: 719 op: SC1_AND (141)
        if (IS_ATOM_INT(_32903)) {
            if (_32903 == 0) {
                DeRef(_32904);
                _32904 = 0;
                goto LE; // [719] 739
            }
        }
        else {
            if (DBL_PTR(_32903)->dbl == 0.0) {
                DeRef(_32904);
                _32904 = 0;
                goto LE; // [719] 739
            }
        }
        // SubProg BackEnd pc: 723 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 725 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32905 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg BackEnd pc: 729 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 731 op: EQUALS (3)
        if (IS_ATOM_INT(_32905)) {
            _32906 = (_32905 == 2);
        }
        else {
            _32906 = binary_op(EQUALS, _32905, 2);
        }
        _32905 = NOVALUE;
        // SubProg BackEnd pc: 735 op: SC2_AND (142)
        DeRef(_32904);
        if (IS_ATOM_INT(_32906))
        _32904 = (_32906 != 0);
        else
        _32904 = DBL_PTR(_32906)->dbl != 0.0;
        // SubProg BackEnd pc: 738 op: NOP1 (159)
LE: // addr: 739 pc: 738 sub: 65845 op: 159
        // SubProg BackEnd pc: 739 op: SC1_OR_IF (147)
        if (_32904 != 0) {
            goto LF; // [739] 777
        }
        // SubProg BackEnd pc: 743 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65868)){
                _32908 = SEQ_PTR(_eentry_65868)->length;
        }
        else {
            _32908 = 1;
        }
        // SubProg BackEnd pc: 746 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 748 op: GREATEREQ (2)
        if (IS_ATOM_INT(_5S_TOKEN_12137)) {
            _32909 = (_32908 >= _5S_TOKEN_12137);
        }
        else {
            _32909 = binary_op(GREATEREQ, _32908, _5S_TOKEN_12137);
        }
        _32908 = NOVALUE;
        // SubProg BackEnd pc: 752 op: SC1_AND (141)
        if (IS_ATOM_INT(_32909)) {
            if (_32909 == 0) {
                DeRef(_32910);
                _32910 = 0;
                goto L10; // [752] 772
            }
        }
        else {
            if (DBL_PTR(_32909)->dbl == 0.0) {
                DeRef(_32910);
                _32910 = 0;
                goto L10; // [752] 772
            }
        }
        // SubProg BackEnd pc: 756 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 758 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32911 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BackEnd pc: 762 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 764 op: COMPARE (76)
        if (IS_ATOM_INT(_32911) && IS_ATOM_INT(_5NOVALUE_12331)){
            _32912 = (_32911 < _5NOVALUE_12331) ? -1 : (_32911 > _5NOVALUE_12331);
        }
        else{
            _32912 = compare(_32911, _5NOVALUE_12331);
        }
        _32911 = NOVALUE;
        // SubProg BackEnd pc: 768 op: SC2_AND (142)
        DeRef(_32910);
        _32910 = (_32912 != 0);
        // SubProg BackEnd pc: 771 op: NOP1 (159)
L10: // addr: 772 pc: 771 sub: 65845 op: 159
        // SubProg BackEnd pc: 772 op: NOP1 (159)
        // SubProg BackEnd pc: 773 op: IF (20)
        if (_32910 == 0)
        {
            _32910 = NOVALUE;
            goto L11; // [773] 802
        }
        else{
            _32910 = NOVALUE;
        }
        // SubProg BackEnd pc: 776 op: NOP1 (159)
LF: // addr: 777 pc: 776 sub: 65845 op: 159
        // SubProg BackEnd pc: 777 op: STARTLINE (58)

        /** backend.e:154					poke_pointer(addr, length(lit_string))  -- record the current offset*/
        // SubProg BackEnd pc: 779 op: LENGTH (42)
        if (IS_SEQUENCE(_lit_string_65866)){
                _32913 = SEQ_PTR(_lit_string_65866)->length;
        }
        else {
            _32913 = 1;
        }
        // SubProg BackEnd pc: 782 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_addr_65848)){
            pokeptr_addr = (uintptr_t *)_addr_65848;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_addr_65848)->dbl);
        }
        *pokeptr_addr = (uintptr_t)_32913;
        _32913 = NOVALUE;
        // SubProg BackEnd pc: 785 op: STARTLINE (58)

        /** backend.e:155					lit_string &= compress(eentry[S_OBJ])*/
        // SubProg BackEnd pc: 787 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 789 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32914 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BackEnd pc: 793 op: PROC (27)
        Ref(_32914);
        _32915 = _59compress(_32914);
        _32914 = NOVALUE;
        // SubProg BackEnd pc: 797 op: CONCAT (15)
        if (IS_SEQUENCE(_lit_string_65866) && IS_ATOM(_32915)) {
            Ref(_32915);
            Append(&_lit_string_65866, _lit_string_65866, _32915);
        }
        else if (IS_ATOM(_lit_string_65866) && IS_SEQUENCE(_32915)) {
        }
        else {
            Concat((object_ptr)&_lit_string_65866, _lit_string_65866, _32915);
        }
        DeRef(_32915);
        _32915 = NOVALUE;
        // SubProg BackEnd pc: 801 op: NOP1 (159)
L11: // addr: 802 pc: 801 sub: 65845 op: 159
        // SubProg BackEnd pc: 802 op: NOP1 (159)
LC: // addr: 803 pc: 802 sub: 65845 op: 159
        // SubProg BackEnd pc: 803 op: NOP1 (159)
L4: // addr: 804 pc: 803 sub: 65845 op: 159
        // SubProg BackEnd pc: 804 op: STARTLINE (58)

        /** backend.e:161			addr += ST_ENTRY_SIZE  -- could save some bytes by changing st structure*/
        // SubProg BackEnd pc: 806 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 808 op: PLUS (11)
        _0 = _addr_65848;
        if (IS_ATOM_INT(_addr_65848)) {
            _addr_65848 = _addr_65848 + _73ST_ENTRY_SIZE_65769;
            if ((object)((uintptr_t)_addr_65848 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_65848 = NewDouble((eudouble)_addr_65848);
            }
        }
        else {
            _addr_65848 = NewDouble(DBL_PTR(_addr_65848)->dbl + (eudouble)_73ST_ENTRY_SIZE_65769);
        }
        DeRef(_0);
        // SubProg BackEnd pc: 812 op: STARTLINE (58)

        /** backend.e:162		end for*/
        // SubProg BackEnd pc: 814 op: ENDFOR_INT_UP1 (54)
        _i_65881 = _i_65881 + 1;
        goto L1; // [814] 79
L2: // addr: 819 pc: 814 sub: 65845 op: 54
        ;
    }
    // SubProg BackEnd pc: 819 op: STARTLINE (58)

    /** backend.e:165		lit = allocate(length(lit_string))*/
    // SubProg BackEnd pc: 821 op: LENGTH (42)
    if (IS_SEQUENCE(_lit_string_65866)){
            _32918 = SEQ_PTR(_lit_string_65866)->length;
    }
    else {
        _32918 = 1;
    }
    // SubProg BackEnd pc: 824 op: PROC (27)
    _0 = _lit_65853;
    _lit_65853 = _9allocate(_32918, 0);
    DeRef(_0);
    _32918 = NOVALUE;
    // SubProg BackEnd pc: 829 op: STARTLINE (58)

    /** backend.e:166		poke(lit, lit_string) -- shouldn't need 0*/
    // SubProg BackEnd pc: 831 op: POKE (128)
    if (IS_ATOM_INT(_lit_65853)){
        poke_addr = (uint8_t *)_lit_65853;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_lit_65853)->dbl);
    }
    _1 = (object)SEQ_PTR(_lit_string_65866);
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
    RefDS(_21958);
    DeRefDS(_lit_string_65866);
    _lit_string_65866 = _21958;
    // SubProg BackEnd pc: 839 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 841 op: STARTLINE (58)

    /** backend.e:172		nm = alloc_symbol_names( st, lit, string_size )*/
    // SubProg BackEnd pc: 843 op: PROC (27)
    Ref(_st_65849);
    Ref(_lit_65853);
    _0 = _nm_65850;
    _nm_65850 = _68alloc_symbol_names(_st_65849, _lit_65853, _string_size_65862);
    DeRef(_0);
    // SubProg BackEnd pc: 849 op: STARTLINE (58)

    /** backend.e:173		poke_pointer( st + ST_NAME, nm )*/
    // SubProg BackEnd pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 853 op: PLUS (11)
    if (IS_ATOM_INT(_st_65849) && IS_ATOM_INT(_73ST_NAME_65730)) {
        _32921 = _st_65849 + _73ST_NAME_65730;
        if ((object)((uintptr_t)_32921 + (uintptr_t)HIGH_BITS) >= 0){
            _32921 = NewDouble((eudouble)_32921);
        }
    }
    else {
        _32921 = binary_op(PLUS, _st_65849, _73ST_NAME_65730);
    }
    // SubProg BackEnd pc: 857 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_32921)){
        pokeptr_addr = (uintptr_t *)_32921;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_32921)->dbl);
    }
    if (IS_ATOM_INT(_nm_65850)) {
        *pokeptr_addr = (uintptr_t)_nm_65850;
    }
    else {
        *pokeptr_addr = (uintptr_t)DBL_PTR(_nm_65850)->dbl;
    }
    DeRef(_32921);
    _32921 = NOVALUE;
    // SubProg BackEnd pc: 860 op: STARTLINE (58)

    /** backend.e:175		if not has_coverage() then*/
    // SubProg BackEnd pc: 862 op: PROC (27)
    _32922 = _50has_coverage();
    // SubProg BackEnd pc: 865 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32922)) {
        if (_32922 != 0){
            DeRef(_32922);
            _32922 = NOVALUE;
            goto L12; // [865] 876
        }
    }
    else {
        if (DBL_PTR(_32922)->dbl != 0.0){
            DeRef(_32922);
            _32922 = NOVALUE;
            goto L12; // [865] 876
        }
    }
    DeRef(_32922);
    _32922 = NOVALUE;
    // SubProg BackEnd pc: 868 op: STARTLINE (58)

    /** backend.e:176			SymTab = {}  -- free up some space*/
    // SubProg BackEnd pc: 870 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_7SymTab_11389);
    _7SymTab_11389 = _21958;
    // SubProg BackEnd pc: 873 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 875 op: NOP1 (159)
L12: // addr: 876 pc: 875 sub: 65845 op: 159
    // SubProg BackEnd pc: 876 op: STARTLINE (58)

    /** backend.e:183		size = 0*/
    // SubProg BackEnd pc: 878 op: ASSIGN_I (113)
    _size_65864 = 0;
    // SubProg BackEnd pc: 881 op: STARTLINE (58)

    /** backend.e:184		for i = 1 to length(slist) do*/
    // SubProg BackEnd pc: 883 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 885 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _32924 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _32924 = 1;
    }
    // SubProg BackEnd pc: 888 op: FOR_I (125)
    {
        object _i_66080;
        _i_66080 = 1;
L13: // addr: 895 pc: 888 sub: 65845 op: 125
        if (_i_66080 > _32924){
            goto L14; // [888] 940
        }
        // SubProg BackEnd pc: 895 op: STARTLINE (58)

        /** backend.e:185			if sequence(slist[i]) then*/
        // SubProg BackEnd pc: 897 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 899 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5slist_12568);
        _32925 = (object)*(((s1_ptr)_2)->base + _i_66080);
        // SubProg BackEnd pc: 903 op: IS_A_SEQUENCE (68)
        _32926 = IS_SEQUENCE(_32925);
        _32925 = NOVALUE;
        // SubProg BackEnd pc: 906 op: IF (20)
        if (_32926 == 0)
        {
            _32926 = NOVALUE;
            goto L15; // [906] 918
        }
        else{
            _32926 = NOVALUE;
        }
        // SubProg BackEnd pc: 909 op: STARTLINE (58)

        /** backend.e:186				size += 1*/
        // SubProg BackEnd pc: 911 op: PLUS1_I (117)
        _size_65864 = _size_65864 + 1;
        // SubProg BackEnd pc: 915 op: ELSE (23)
        goto L16; // [915] 933
        // SubProg BackEnd pc: 917 op: NOP1 (159)
L15: // addr: 918 pc: 917 sub: 65845 op: 159
        // SubProg BackEnd pc: 918 op: STARTLINE (58)

        /** backend.e:188				size += slist[i]*/
        // SubProg BackEnd pc: 920 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 922 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5slist_12568);
        _32928 = (object)*(((s1_ptr)_2)->base + _i_66080);
        // SubProg BackEnd pc: 926 op: PLUS (11)
        if (IS_ATOM_INT(_32928)) {
            _size_65864 = _size_65864 + _32928;
        }
        else {
            _size_65864 = binary_op(PLUS, _size_65864, _32928);
        }
        _32928 = NOVALUE;
        // SubProg BackEnd pc: 930 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_size_65864)) {
            _1 = (object)(DBL_PTR(_size_65864)->dbl);
            DeRefDS(_size_65864);
            _size_65864 = _1;
        }
        // SubProg BackEnd pc: 932 op: NOP1 (159)
L16: // addr: 933 pc: 932 sub: 65845 op: 159
        // SubProg BackEnd pc: 933 op: STARTLINE (58)

        /** backend.e:190		end for*/
        // SubProg BackEnd pc: 935 op: ENDFOR_INT_UP1 (54)
        _i_66080 = _i_66080 + 1;
        goto L13; // [935] 895
L14: // addr: 940 pc: 935 sub: 65845 op: 54
        ;
    }
    // SubProg BackEnd pc: 940 op: STARTLINE (58)

    /** backend.e:192		sl = allocate( (size + 1) * SL_SIZE )*/
    // SubProg BackEnd pc: 942 op: PLUS1 (93)
    _32930 = _size_65864 + 1;
    if (_32930 > MAXINT){
        _32930 = NewDouble((eudouble)_32930);
    }
    // SubProg BackEnd pc: 946 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 948 op: MULTIPLY (13)
    if (IS_ATOM_INT(_32930) && IS_ATOM_INT(_73SL_SIZE_65785)) {
        if (_32930 == (short)_32930 && _73SL_SIZE_65785 <= INT15 && _73SL_SIZE_65785 >= -INT15){
            _32931 = _32930 * _73SL_SIZE_65785;
        }
        else{
            _32931 = NewDouble(_32930 * (eudouble)_73SL_SIZE_65785);
        }
    }
    else {
        if (IS_ATOM_INT(_32930)) {
            _32931 = NewDouble((eudouble)_32930 * DBL_PTR(_73SL_SIZE_65785)->dbl);
        }
        else {
            if (IS_ATOM_INT(_73SL_SIZE_65785)) {
                _32931 = NewDouble(DBL_PTR(_32930)->dbl * (eudouble)_73SL_SIZE_65785);
            }
            else
            _32931 = NewDouble(DBL_PTR(_32930)->dbl * DBL_PTR(_73SL_SIZE_65785)->dbl);
        }
    }
    DeRef(_32930);
    _32930 = NOVALUE;
    // SubProg BackEnd pc: 952 op: PROC (27)
    _0 = _sl_65852;
    _sl_65852 = _9allocate(_32931, 0);
    DeRef(_0);
    _32931 = NOVALUE;
    // SubProg BackEnd pc: 957 op: STARTLINE (58)

    /** backend.e:193		mem_set(sl, 0, (size + 1) * SL_SIZE )*/
    // SubProg BackEnd pc: 959 op: PLUS1 (93)
    _32933 = _size_65864 + 1;
    if (_32933 > MAXINT){
        _32933 = NewDouble((eudouble)_32933);
    }
    // SubProg BackEnd pc: 963 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 965 op: MULTIPLY (13)
    if (IS_ATOM_INT(_32933) && IS_ATOM_INT(_73SL_SIZE_65785)) {
        _32934 = _32933 * _73SL_SIZE_65785;
    }
    else {
        if (IS_ATOM_INT(_32933)) {
            _32934 = NewDouble((eudouble)_32933 * DBL_PTR(_73SL_SIZE_65785)->dbl);
        }
        else {
            if (IS_ATOM_INT(_73SL_SIZE_65785)) {
                _32934 = NewDouble(DBL_PTR(_32933)->dbl * (eudouble)_73SL_SIZE_65785);
            }
            else
            _32934 = NewDouble(DBL_PTR(_32933)->dbl * DBL_PTR(_73SL_SIZE_65785)->dbl);
        }
    }
    DeRef(_32933);
    _32933 = NOVALUE;
    // SubProg BackEnd pc: 969 op: MEM_SET (131)
    memory_set(_sl_65852, 0, _32934);
    DeRef(_32934);
    _32934 = NOVALUE;
    // SubProg BackEnd pc: 973 op: STARTLINE (58)

    /** backend.e:195		poke_pointer(sl, size)*/
    // SubProg BackEnd pc: 975 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_sl_65852)){
        pokeptr_addr = (uintptr_t *)_sl_65852;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_sl_65852)->dbl);
    }
    *pokeptr_addr = (uintptr_t)_size_65864;
    // SubProg BackEnd pc: 978 op: STARTLINE (58)

    /** backend.e:196		addr = sl + SL_SIZE -- 0th element is ignored - origin 1*/
    // SubProg BackEnd pc: 980 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 982 op: PLUS (11)
    DeRef(_addr_65848);
    if (IS_ATOM_INT(_sl_65852) && IS_ATOM_INT(_73SL_SIZE_65785)) {
        _addr_65848 = _sl_65852 + _73SL_SIZE_65785;
        if ((object)((uintptr_t)_addr_65848 + (uintptr_t)HIGH_BITS) >= 0){
            _addr_65848 = NewDouble((eudouble)_addr_65848);
        }
    }
    else {
        if (IS_ATOM_INT(_sl_65852)) {
            _addr_65848 = NewDouble((eudouble)_sl_65852 + DBL_PTR(_73SL_SIZE_65785)->dbl);
        }
        else {
            if (IS_ATOM_INT(_73SL_SIZE_65785)) {
                _addr_65848 = NewDouble(DBL_PTR(_sl_65852)->dbl + (eudouble)_73SL_SIZE_65785);
            }
            else
            _addr_65848 = NewDouble(DBL_PTR(_sl_65852)->dbl + DBL_PTR(_73SL_SIZE_65785)->dbl);
        }
    }
    // SubProg BackEnd pc: 986 op: STARTLINE (58)

    /** backend.e:197		string_size = 0*/
    // SubProg BackEnd pc: 988 op: ASSIGN_I (113)
    _string_size_65862 = 0;
    // SubProg BackEnd pc: 991 op: STARTLINE (58)

    /** backend.e:199		for i = 1 to length(slist) do*/
    // SubProg BackEnd pc: 993 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 995 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _32936 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _32936 = 1;
    }
    // SubProg BackEnd pc: 998 op: FOR_I (125)
    {
        object _i_66103;
        _i_66103 = 1;
L17: // addr: 1005 pc: 998 sub: 65845 op: 125
        if (_i_66103 > _32936){
            goto L18; // [998] 1358
        }
        // SubProg BackEnd pc: 1005 op: STARTLINE (58)

        /** backend.e:200			if sequence(slist[i]) then*/
        // SubProg BackEnd pc: 1007 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1009 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5slist_12568);
        _32937 = (object)*(((s1_ptr)_2)->base + _i_66103);
        // SubProg BackEnd pc: 1013 op: IS_A_SEQUENCE (68)
        _32938 = IS_SEQUENCE(_32937);
        _32937 = NOVALUE;
        // SubProg BackEnd pc: 1016 op: IF (20)
        if (_32938 == 0)
        {
            _32938 = NOVALUE;
            goto L19; // [1016] 1035
        }
        else{
            _32938 = NOVALUE;
        }
        // SubProg BackEnd pc: 1019 op: STARTLINE (58)

        /** backend.e:201				eentry = slist[i]*/
        // SubProg BackEnd pc: 1021 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1023 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_65868);
        _2 = (object)SEQ_PTR(_5slist_12568);
        _eentry_65868 = (object)*(((s1_ptr)_2)->base + _i_66103);
        Ref(_eentry_65868);
        // SubProg BackEnd pc: 1027 op: STARTLINE (58)

        /** backend.e:202				repcount = 1*/
        // SubProg BackEnd pc: 1029 op: ASSIGN_I (113)
        _repcount_65865 = 1;
        // SubProg BackEnd pc: 1032 op: ELSE (23)
        goto L1A; // [1032] 1101
        // SubProg BackEnd pc: 1034 op: NOP1 (159)
L19: // addr: 1035 pc: 1034 sub: 65845 op: 159
        // SubProg BackEnd pc: 1035 op: STARTLINE (58)

        /** backend.e:204				eentry = slist[i-1]*/
        // SubProg BackEnd pc: 1037 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1039 op: MINUS (10)
        _32940 = _i_66103 - 1;
        // SubProg BackEnd pc: 1043 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_65868);
        _2 = (object)SEQ_PTR(_5slist_12568);
        _eentry_65868 = (object)*(((s1_ptr)_2)->base + _32940);
        Ref(_eentry_65868);
        // SubProg BackEnd pc: 1047 op: STARTLINE (58)

        /** backend.e:205				if length(eentry) < 4 then*/
        // SubProg BackEnd pc: 1049 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65868)){
                _32942 = SEQ_PTR(_eentry_65868)->length;
        }
        else {
            _32942 = 1;
        }
        // SubProg BackEnd pc: 1052 op: LESS_IFW_I (119)
        if (_32942 >= 4)
        goto L1B; // [1052] 1073
        // SubProg BackEnd pc: 1056 op: STARTLINE (58)

        /** backend.e:206					eentry[1] += 1*/
        // SubProg BackEnd pc: 1058 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32944 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BackEnd pc: 1062 op: PLUS1 (93)
        if (IS_ATOM_INT(_32944)) {
            _32945 = _32944 + 1;
            if (_32945 > MAXINT){
                _32945 = NewDouble((eudouble)_32945);
            }
        }
        else
        _32945 = binary_op(PLUS, 1, _32944);
        _32944 = NOVALUE;
        // SubProg BackEnd pc: 1066 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _eentry_65868 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32945;
        if( _1 != _32945 ){
            DeRef(_1);
        }
        _32945 = NOVALUE;
        // SubProg BackEnd pc: 1070 op: ELSE (23)
        goto L1C; // [1070] 1090
        // SubProg BackEnd pc: 1072 op: NOP1 (159)
L1B: // addr: 1073 pc: 1072 sub: 65845 op: 159
        // SubProg BackEnd pc: 1073 op: STARTLINE (58)

        /** backend.e:208					eentry[LINE] += 1*/
        // SubProg BackEnd pc: 1075 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1077 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_eentry_65868);
        _32946 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg BackEnd pc: 1081 op: PLUS1 (93)
        if (IS_ATOM_INT(_32946)) {
            _32947 = _32946 + 1;
            if (_32947 > MAXINT){
                _32947 = NewDouble((eudouble)_32947);
            }
        }
        else
        _32947 = binary_op(PLUS, 1, _32946);
        _32946 = NOVALUE;
        // SubProg BackEnd pc: 1085 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_eentry_65868);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _eentry_65868 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32947;
        if( _1 != _32947 ){
            DeRef(_1);
        }
        _32947 = NOVALUE;
        // SubProg BackEnd pc: 1089 op: NOP1 (159)
L1C: // addr: 1090 pc: 1089 sub: 65845 op: 159
        // SubProg BackEnd pc: 1090 op: STARTLINE (58)

        /** backend.e:210				repcount = slist[i]*/
        // SubProg BackEnd pc: 1092 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1094 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5slist_12568);
        _repcount_65865 = (object)*(((s1_ptr)_2)->base + _i_66103);
        if (!IS_ATOM_INT(_repcount_65865)){
            _repcount_65865 = (object)DBL_PTR(_repcount_65865)->dbl;
        }
        // SubProg BackEnd pc: 1100 op: NOP1 (159)
L1A: // addr: 1101 pc: 1100 sub: 65845 op: 159
        // SubProg BackEnd pc: 1101 op: STARTLINE (58)

        /** backend.e:213			short = length(eentry) < 4*/
        // SubProg BackEnd pc: 1103 op: PRIVATE_INIT_CHECK (30)
        // SubProg BackEnd pc: 1105 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_65868)){
                _32949 = SEQ_PTR(_eentry_65868)->length;
        }
        else {
            _32949 = 1;
        }
        // SubProg BackEnd pc: 1108 op: LESS (1)
        _short_65863 = (_32949 < 4);
        _32949 = NOVALUE;
        // SubProg BackEnd pc: 1112 op: STARTLINE (58)

        /** backend.e:214			sequence started_file = repeat( 0, length( known_files ) )*/
        // SubProg BackEnd pc: 1114 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1116 op: LENGTH (42)
        if (IS_SEQUENCE(_7known_files_11390)){
                _32951 = SEQ_PTR(_7known_files_11390)->length;
        }
        else {
            _32951 = 1;
        }
        // SubProg BackEnd pc: 1119 op: REPEAT (32)
        DeRefi(_started_file_66129);
        _started_file_66129 = Repeat(0, _32951);
        _32951 = NOVALUE;
        // SubProg BackEnd pc: 1123 op: STARTLINE (58)

        /** backend.e:215			for j = 1 to repcount do*/
        // SubProg BackEnd pc: 1125 op: PRIVATE_INIT_CHECK (30)
        // SubProg BackEnd pc: 1127 op: ASSIGN (18)
        _32953 = _repcount_65865;
        // SubProg BackEnd pc: 1130 op: FOR_I (125)
        {
            object _j_66134;
            _j_66134 = 1;
L1D: // addr: 1137 pc: 1130 sub: 65845 op: 125
            if (_j_66134 > _32953){
                goto L1E; // [1130] 1349
            }
            // SubProg BackEnd pc: 1137 op: STARTLINE (58)

            /** backend.e:216				poke2(addr + SL_LINE, eentry[LINE-short])  -- hits 4,5,6,7 */
            // SubProg BackEnd pc: 1139 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1141 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73SL_LINE_65773)) {
                _32954 = _addr_65848 + _73SL_LINE_65773;
                if ((object)((uintptr_t)_32954 + (uintptr_t)HIGH_BITS) >= 0){
                    _32954 = NewDouble((eudouble)_32954);
                }
            }
            else {
                _32954 = binary_op(PLUS, _addr_65848, _73SL_LINE_65773);
            }
            // SubProg BackEnd pc: 1145 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1147 op: MINUS (10)
            _32955 = 2 - _short_65863;
            // SubProg BackEnd pc: 1151 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32956 = (object)*(((s1_ptr)_2)->base + _32955);
            // SubProg BackEnd pc: 1155 op: POKE2 (178)
            if (IS_ATOM_INT(_32954)){
                poke2_addr = (uint16_t *)_32954;
            }
            else {
                poke2_addr = (uint16_t *)(uintptr_t)(DBL_PTR(_32954)->dbl);
            }
            if (IS_ATOM_INT(_32956)) {
                *poke2_addr = (uint16_t)_32956;
            }
            else if (IS_ATOM(_32956)) {
                *poke2_addr = (uint16_t)DBL_PTR(_32956)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32956);
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
            DeRef(_32954);
            _32954 = NOVALUE;
            _32956 = NOVALUE;
            // SubProg BackEnd pc: 1158 op: STARTLINE (58)

            /** backend.e:218				poke(addr + SL_FILE_NO, eentry[LOCAL_FILE_NO-short])*/
            // SubProg BackEnd pc: 1160 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1162 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73SL_FILE_NO_65776)) {
                _32957 = _addr_65848 + _73SL_FILE_NO_65776;
                if ((object)((uintptr_t)_32957 + (uintptr_t)HIGH_BITS) >= 0){
                    _32957 = NewDouble((eudouble)_32957);
                }
            }
            else {
                _32957 = binary_op(PLUS, _addr_65848, _73SL_FILE_NO_65776);
            }
            // SubProg BackEnd pc: 1166 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1168 op: MINUS (10)
            _32958 = 3 - _short_65863;
            // SubProg BackEnd pc: 1172 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32959 = (object)*(((s1_ptr)_2)->base + _32958);
            // SubProg BackEnd pc: 1176 op: POKE (128)
            if (IS_ATOM_INT(_32957)){
                poke_addr = (uint8_t *)_32957;
            }
            else {
                poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32957)->dbl);
            }
            if (IS_ATOM_INT(_32959)) {
                *poke_addr = (uint8_t)_32959;
            }
            else if (IS_ATOM(_32959)) {
                *poke_addr = (uint8_t)DBL_PTR(_32959)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32959);
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
            DeRef(_32957);
            _32957 = NOVALUE;
            _32959 = NOVALUE;
            // SubProg BackEnd pc: 1179 op: STARTLINE (58)

            /** backend.e:219				if not short then*/
            // SubProg BackEnd pc: 1181 op: NOT_IFW (108)
            if (_short_65863 != 0)
            goto L1F; // [1181] 1253
            // SubProg BackEnd pc: 1184 op: STARTLINE (58)

            /** backend.e:220					if eentry[SRC] then*/
            // SubProg BackEnd pc: 1186 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1188 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32961 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg BackEnd pc: 1192 op: IF (20)
            if (_32961 == 0) {
                _32961 = NOVALUE;
                goto L20; // [1192] 1235
            }
            else {
                if (!IS_ATOM_INT(_32961) && DBL_PTR(_32961)->dbl == 0.0){
                    _32961 = NOVALUE;
                    goto L20; // [1192] 1235
                }
                _32961 = NOVALUE;
            }
            _32961 = NOVALUE;
            // SubProg BackEnd pc: 1195 op: STARTLINE (58)

            /** backend.e:221						poke_pointer(addr, all_source[1+floor(eentry[SRC]/SOURCE_CHUNK)]*/
            // SubProg BackEnd pc: 1197 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1199 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1201 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32962 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg BackEnd pc: 1205 op: FLOOR_DIV (63)
            if (IS_ATOM_INT(_32962)) {
                if (10000 > 0 && _32962 >= 0) {
                    _32963 = _32962 / 10000;
                }
                else {
                    temp_dbl = EUFLOOR((eudouble)_32962 / (eudouble)10000);
                    if (_32962 != MININT)
                    _32963 = (object)temp_dbl;
                    else
                    _32963 = NewDouble(temp_dbl);
                }
            }
            else {
                _2 = binary_op(DIVIDE, _32962, 10000);
                _32963 = unary_op(FLOOR, _2);
                DeRef(_2);
            }
            _32962 = NOVALUE;
            // SubProg BackEnd pc: 1209 op: PLUS1 (93)
            if (IS_ATOM_INT(_32963)) {
                _32964 = _32963 + 1;
            }
            else
            _32964 = binary_op(PLUS, 1, _32963);
            DeRef(_32963);
            _32963 = NOVALUE;
            // SubProg BackEnd pc: 1213 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7all_source_11414);
            if (!IS_ATOM_INT(_32964)){
                _32965 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32964)->dbl));
            }
            else{
                _32965 = (object)*(((s1_ptr)_2)->base + _32964);
            }
            // SubProg BackEnd pc: 1217 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1219 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32966 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg BackEnd pc: 1223 op: REMAINDER (71)
            if (IS_ATOM_INT(_32966)) {
                _32967 = (_32966 % 10000);
            }
            else {
                _32967 = binary_op(REMAINDER, _32966, 10000);
            }
            _32966 = NOVALUE;
            // SubProg BackEnd pc: 1227 op: PLUS (11)
            if (IS_ATOM_INT(_32965) && IS_ATOM_INT(_32967)) {
                _32968 = _32965 + _32967;
                if ((object)((uintptr_t)_32968 + (uintptr_t)HIGH_BITS) >= 0){
                    _32968 = NewDouble((eudouble)_32968);
                }
            }
            else {
                _32968 = binary_op(PLUS, _32965, _32967);
            }
            _32965 = NOVALUE;
            DeRef(_32967);
            _32967 = NOVALUE;
            // SubProg BackEnd pc: 1231 op: POKE_POINTER (215)
            if (IS_ATOM_INT(_addr_65848)){
                pokeptr_addr = (uintptr_t *)_addr_65848;
            }
            else {
                pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_addr_65848)->dbl);
            }
            if (IS_ATOM_INT(_32968)) {
                *pokeptr_addr = (uintptr_t)_32968;
            }
            else if (IS_ATOM(_32968)) {
                *pokeptr_addr = (uintptr_t)DBL_PTR(_32968)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32968);
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
            DeRef(_32968);
            _32968 = NOVALUE;
            // SubProg BackEnd pc: 1234 op: NOP1 (159)
L20: // addr: 1235 pc: 1234 sub: 65845 op: 159
            // SubProg BackEnd pc: 1235 op: STARTLINE (58)

            /** backend.e:224					poke(addr + SL_OPTIONS, eentry[OPTIONS]) -- else leave it 0*/
            // SubProg BackEnd pc: 1237 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1239 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73SL_OPTIONS_65779)) {
                _32969 = _addr_65848 + _73SL_OPTIONS_65779;
                if ((object)((uintptr_t)_32969 + (uintptr_t)HIGH_BITS) >= 0){
                    _32969 = NewDouble((eudouble)_32969);
                }
            }
            else {
                _32969 = binary_op(PLUS, _addr_65848, _73SL_OPTIONS_65779);
            }
            // SubProg BackEnd pc: 1243 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1245 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32970 = (object)*(((s1_ptr)_2)->base + 4);
            // SubProg BackEnd pc: 1249 op: POKE (128)
            if (IS_ATOM_INT(_32969)){
                poke_addr = (uint8_t *)_32969;
            }
            else {
                poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_32969)->dbl);
            }
            if (IS_ATOM_INT(_32970)) {
                *poke_addr = (uint8_t)_32970;
            }
            else if (IS_ATOM(_32970)) {
                *poke_addr = (uint8_t)DBL_PTR(_32970)->dbl;
            }
            else {
                _1 = (object)SEQ_PTR(_32970);
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
            DeRef(_32969);
            _32969 = NOVALUE;
            _32970 = NOVALUE;
            // SubProg BackEnd pc: 1252 op: NOP1 (159)
L1F: // addr: 1253 pc: 1252 sub: 65845 op: 159
            // SubProg BackEnd pc: 1253 op: STARTLINE (58)

            /** backend.e:226				if started_file[eentry[LOCAL_FILE_NO-short]] then*/
            // SubProg BackEnd pc: 1255 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1257 op: MINUS (10)
            _32971 = 3 - _short_65863;
            // SubProg BackEnd pc: 1261 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32972 = (object)*(((s1_ptr)_2)->base + _32971);
            // SubProg BackEnd pc: 1265 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_started_file_66129);
            if (!IS_ATOM_INT(_32972)){
                _32973 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_32972)->dbl));
            }
            else{
                _32973 = (object)*(((s1_ptr)_2)->base + _32972);
            }
            // SubProg BackEnd pc: 1269 op: IF (20)
            if (_32973 == 0)
            {
                _32973 = NOVALUE;
                goto L21; // [1269] 1286
            }
            else{
                _32973 = NOVALUE;
            }
            // SubProg BackEnd pc: 1272 op: STARTLINE (58)

            /** backend.e:227					poke4( addr + SL_MULTILINE, -1 )*/
            // SubProg BackEnd pc: 1274 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1276 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73SL_MULTILINE_65782)) {
                _32974 = _addr_65848 + _73SL_MULTILINE_65782;
                if ((object)((uintptr_t)_32974 + (uintptr_t)HIGH_BITS) >= 0){
                    _32974 = NewDouble((eudouble)_32974);
                }
            }
            else {
                _32974 = binary_op(PLUS, _addr_65848, _73SL_MULTILINE_65782);
            }
            // SubProg BackEnd pc: 1280 op: POKE4 (138)
            if (IS_ATOM_INT(_32974)){
                poke4_addr = (uint32_t *)_32974;
            }
            else {
                poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32974)->dbl);
            }
            *poke4_addr = (uint32_t)-1;
            DeRef(_32974);
            _32974 = NOVALUE;
            // SubProg BackEnd pc: 1283 op: ELSE (23)
            goto L22; // [1283] 1314
            // SubProg BackEnd pc: 1285 op: NOP1 (159)
L21: // addr: 1286 pc: 1285 sub: 65845 op: 159
            // SubProg BackEnd pc: 1286 op: STARTLINE (58)

            /** backend.e:229					poke4( addr + SL_MULTILINE, 0 )*/
            // SubProg BackEnd pc: 1288 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1290 op: PLUS (11)
            if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73SL_MULTILINE_65782)) {
                _32975 = _addr_65848 + _73SL_MULTILINE_65782;
                if ((object)((uintptr_t)_32975 + (uintptr_t)HIGH_BITS) >= 0){
                    _32975 = NewDouble((eudouble)_32975);
                }
            }
            else {
                _32975 = binary_op(PLUS, _addr_65848, _73SL_MULTILINE_65782);
            }
            // SubProg BackEnd pc: 1294 op: POKE4 (138)
            if (IS_ATOM_INT(_32975)){
                poke4_addr = (uint32_t *)_32975;
            }
            else {
                poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_32975)->dbl);
            }
            *poke4_addr = (uint32_t)0;
            DeRef(_32975);
            _32975 = NOVALUE;
            // SubProg BackEnd pc: 1297 op: STARTLINE (58)

            /** backend.e:230					started_file[eentry[LOCAL_FILE_NO-short]] = 1*/
            // SubProg BackEnd pc: 1299 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1301 op: MINUS (10)
            _32976 = 3 - _short_65863;
            // SubProg BackEnd pc: 1305 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32977 = (object)*(((s1_ptr)_2)->base + _32976);
            // SubProg BackEnd pc: 1309 op: ASSIGN_SUBS_I (118)
            _2 = (object)SEQ_PTR(_started_file_66129);
            if (!IS_ATOM_INT(_32977))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_32977)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _32977);
            *(intptr_t *)_2 = 1;
            // SubProg BackEnd pc: 1313 op: NOP1 (159)
L22: // addr: 1314 pc: 1313 sub: 65845 op: 159
            // SubProg BackEnd pc: 1314 op: STARTLINE (58)

            /** backend.e:232				addr += SL_SIZE*/
            // SubProg BackEnd pc: 1316 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1318 op: PLUS (11)
            _0 = _addr_65848;
            if (IS_ATOM_INT(_addr_65848) && IS_ATOM_INT(_73SL_SIZE_65785)) {
                _addr_65848 = _addr_65848 + _73SL_SIZE_65785;
                if ((object)((uintptr_t)_addr_65848 + (uintptr_t)HIGH_BITS) >= 0){
                    _addr_65848 = NewDouble((eudouble)_addr_65848);
                }
            }
            else {
                if (IS_ATOM_INT(_addr_65848)) {
                    _addr_65848 = NewDouble((eudouble)_addr_65848 + DBL_PTR(_73SL_SIZE_65785)->dbl);
                }
                else {
                    if (IS_ATOM_INT(_73SL_SIZE_65785)) {
                        _addr_65848 = NewDouble(DBL_PTR(_addr_65848)->dbl + (eudouble)_73SL_SIZE_65785);
                    }
                    else
                    _addr_65848 = NewDouble(DBL_PTR(_addr_65848)->dbl + DBL_PTR(_73SL_SIZE_65785)->dbl);
                }
            }
            DeRef(_0);
            // SubProg BackEnd pc: 1322 op: STARTLINE (58)

            /** backend.e:233				eentry[LINE-short] += 1*/
            // SubProg BackEnd pc: 1324 op: GLOBAL_INIT_CHECK (109)
            // SubProg BackEnd pc: 1326 op: MINUS (10)
            _32979 = 2 - _short_65863;
            // SubProg BackEnd pc: 1330 op: ASSIGN_OP_SUBS (149)
            _2 = (object)SEQ_PTR(_eentry_65868);
            _32980 = (object)*(((s1_ptr)_2)->base + _32979);
            // SubProg BackEnd pc: 1334 op: PLUS1 (93)
            if (IS_ATOM_INT(_32980)) {
                _32981 = _32980 + 1;
                if (_32981 > MAXINT){
                    _32981 = NewDouble((eudouble)_32981);
                }
            }
            else
            _32981 = binary_op(PLUS, 1, _32980);
            _32980 = NOVALUE;
            // SubProg BackEnd pc: 1338 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_eentry_65868);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _eentry_65868 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _32979);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _32981;
            if( _1 != _32981 ){
                DeRef(_1);
            }
            _32981 = NOVALUE;
            // SubProg BackEnd pc: 1342 op: STARTLINE (58)

            /** backend.e:234			end for*/
            // SubProg BackEnd pc: 1344 op: ENDFOR_INT_UP1 (54)
            _j_66134 = _j_66134 + 1;
            goto L1D; // [1344] 1137
L1E: // addr: 1349 pc: 1344 sub: 65845 op: 54
            ;
        }
        // SubProg BackEnd pc: 1349 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var started_file_66129
        DeRefi(_started_file_66129);
        _started_file_66129 = NOVALUE;
        // SubProg BackEnd pc: 1351 op: STARTLINE (58)

        /** backend.e:235		end for*/
        // SubProg BackEnd pc: 1353 op: ENDFOR_INT_UP1 (54)
        _i_66103 = _i_66103 + 1;
        goto L17; // [1353] 1005
L18: // addr: 1358 pc: 1353 sub: 65845 op: 54
        ;
    }
    // SubProg BackEnd pc: 1358 op: STARTLINE (58)

    /** backend.e:237		if not has_coverage() then*/
    // SubProg BackEnd pc: 1360 op: PROC (27)
    _32982 = _50has_coverage();
    // SubProg BackEnd pc: 1363 op: NOT_IFW (108)
    if (IS_ATOM_INT(_32982)) {
        if (_32982 != 0){
            DeRef(_32982);
            _32982 = NOVALUE;
            goto L23; // [1363] 1374
        }
    }
    else {
        if (DBL_PTR(_32982)->dbl != 0.0){
            DeRef(_32982);
            _32982 = NOVALUE;
            goto L23; // [1363] 1374
        }
    }
    DeRef(_32982);
    _32982 = NOVALUE;
    // SubProg BackEnd pc: 1366 op: STARTLINE (58)

    /** backend.e:238			slist = {}  -- free up some space*/
    // SubProg BackEnd pc: 1368 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_5slist_12568);
    _5slist_12568 = _21958;
    // SubProg BackEnd pc: 1371 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 1373 op: NOP1 (159)
L23: // addr: 1374 pc: 1373 sub: 65845 op: 159
    // SubProg BackEnd pc: 1374 op: STARTLINE (58)

    /** backend.e:242		other_strings = append(known_files, file_name_entered) & warning_list*/
    // SubProg BackEnd pc: 1376 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1378 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1380 op: APPEND (35)
    RefDS(_5file_name_entered_12474);
    Append(&_32984, _7known_files_11390, _5file_name_entered_12474);
    // SubProg BackEnd pc: 1384 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1386 op: CONCAT (15)
    Concat((object_ptr)&_other_strings_65867, _32984, _49warning_list_48789);
    DeRefDS(_32984);
    _32984 = NOVALUE;
    DeRef(_32984);
    _32984 = NOVALUE;
    // SubProg BackEnd pc: 1390 op: STARTLINE (58)

    /** backend.e:243		string_size = 0*/
    // SubProg BackEnd pc: 1392 op: ASSIGN_I (113)
    _string_size_65862 = 0;
    // SubProg BackEnd pc: 1395 op: STARTLINE (58)

    /** backend.e:244		for i = 1 to length(other_strings) do*/
    // SubProg BackEnd pc: 1397 op: LENGTH (42)
    if (IS_SEQUENCE(_other_strings_65867)){
            _32986 = SEQ_PTR(_other_strings_65867)->length;
    }
    else {
        _32986 = 1;
    }
    // SubProg BackEnd pc: 1400 op: FOR_I (125)
    {
        object _i_66195;
        _i_66195 = 1;
L24: // addr: 1407 pc: 1400 sub: 65845 op: 125
        if (_i_66195 > _32986){
            goto L25; // [1400] 1433
        }
        // SubProg BackEnd pc: 1407 op: STARTLINE (58)

        /** backend.e:245			string_size += length(other_strings[i])+1*/
        // SubProg BackEnd pc: 1409 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_other_strings_65867);
        _32987 = (object)*(((s1_ptr)_2)->base + _i_66195);
        // SubProg BackEnd pc: 1413 op: LENGTH (42)
        if (IS_SEQUENCE(_32987)){
                _32988 = SEQ_PTR(_32987)->length;
        }
        else {
            _32988 = 1;
        }
        _32987 = NOVALUE;
        // SubProg BackEnd pc: 1416 op: PLUS1 (93)
        _32989 = _32988 + 1;
        _32988 = NOVALUE;
        // SubProg BackEnd pc: 1420 op: PLUS (11)
        _string_size_65862 = _string_size_65862 + _32989;
        _32989 = NOVALUE;
        // SubProg BackEnd pc: 1426 op: STARTLINE (58)

        /** backend.e:246		end for*/
        // SubProg BackEnd pc: 1428 op: ENDFOR_INT_UP1 (54)
        _i_66195 = _i_66195 + 1;
        goto L24; // [1428] 1407
L25: // addr: 1433 pc: 1428 sub: 65845 op: 54
        ;
    }
    // SubProg BackEnd pc: 1433 op: STARTLINE (58)

    /** backend.e:248		ms = allocate( sizeof( C_POINTER ) * (10 + length(other_strings) ) ) -- miscellaneous*/
    // SubProg BackEnd pc: 1435 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1437 op: SIZEOF (217)
    _32991 = eu_sizeof( 50331649 );
    DeRef(_32991);
    // SubProg BackEnd pc: 1440 op: LENGTH (42)
    if (IS_SEQUENCE(_other_strings_65867)){
            _32992 = SEQ_PTR(_other_strings_65867)->length;
    }
    else {
        _32992 = 1;
    }
    // SubProg BackEnd pc: 1443 op: PLUS (11)
    _32993 = 10 + _32992;
    _32992 = NOVALUE;
    // SubProg BackEnd pc: 1447 op: MULTIPLY (13)
    if (_32991 == (short)_32991 && _32993 <= INT15){
        _32994 = _32991 * _32993;
    }
    else{
        _32994 = NewDouble(_32991 * (eudouble)_32993);
    }
    _32991 = NOVALUE;
    _32993 = NOVALUE;
    // SubProg BackEnd pc: 1451 op: PROC (27)
    _0 = _ms_65851;
    _ms_65851 = _9allocate(_32994, 0);
    DeRef(_0);
    _32994 = NOVALUE;
    // SubProg BackEnd pc: 1456 op: STARTLINE (58)

    /** backend.e:249		poke_pointer( ms, {*/
    // SubProg BackEnd pc: 1458 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1460 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1462 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1464 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1466 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1468 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1470 op: LENGTH (42)
    if (IS_SEQUENCE(_49warning_list_48789)){
            _32996 = SEQ_PTR(_49warning_list_48789)->length;
    }
    else {
        _32996 = 1;
    }
    // SubProg BackEnd pc: 1473 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1475 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _32997 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _32997 = 1;
    }
    // SubProg BackEnd pc: 1478 op: RIGHT_BRACE_N (31)
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5max_stack_per_call_12577;
    ((intptr_t*)_2)[2] = _7AnyTimeProfile_11412;
    ((intptr_t*)_2)[3] = _7AnyStatementProfile_11413;
    ((intptr_t*)_2)[4] = _5sample_size_12578;
    ((intptr_t*)_2)[5] = _5gline_number_12482;
    ((intptr_t*)_2)[6] = _il_file_65847;
    ((intptr_t*)_2)[7] = _32996;
    ((intptr_t*)_2)[8] = _32997;
    _32998 = MAKE_SEQ(_1);
    _32997 = NOVALUE;
    _32996 = NOVALUE;
    // SubProg BackEnd pc: 1489 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_ms_65851)){
        pokeptr_addr = (uintptr_t *)_ms_65851;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_ms_65851)->dbl);
    }
    _1 = (object)SEQ_PTR(_32998);
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
    DeRefDS(_32998);
    _32998 = NOVALUE;
    // SubProg BackEnd pc: 1492 op: STARTLINE (58)

    /** backend.e:262		fn = allocate(string_size)*/
    // SubProg BackEnd pc: 1494 op: PROC (27)
    _0 = _fn_65854;
    _fn_65854 = _9allocate(_string_size_65862, 0);
    DeRef(_0);
    // SubProg BackEnd pc: 1499 op: STARTLINE (58)

    /** backend.e:264		for i = 1 to length(other_strings) do*/
    // SubProg BackEnd pc: 1501 op: LENGTH (42)
    if (IS_SEQUENCE(_other_strings_65867)){
            _33000 = SEQ_PTR(_other_strings_65867)->length;
    }
    else {
        _33000 = 1;
    }
    // SubProg BackEnd pc: 1504 op: FOR_I (125)
    {
        object _i_66221;
        _i_66221 = 1;
L26: // addr: 1511 pc: 1504 sub: 65845 op: 125
        if (_i_66221 > _33000){
            goto L27; // [1504] 1586
        }
        // SubProg BackEnd pc: 1511 op: STARTLINE (58)

        /** backend.e:265			poke_pointer(ms + 8 * sizeof( C_POINTER ) + (i-1) * sizeof( C_POINTER ), fn)*/
        // SubProg BackEnd pc: 1513 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1515 op: SIZEOF (217)
        _33001 = eu_sizeof( 50331649 );
        DeRef(_33001);
        // SubProg BackEnd pc: 1518 op: MULTIPLY (13)
        if (_33001 <= INT15){
            _33002 = 8 * _33001;
        }
        else{
            _33002 = NewDouble(8 * (eudouble)_33001);
        }
        _33001 = NOVALUE;
        // SubProg BackEnd pc: 1522 op: PLUS (11)
        if (IS_ATOM_INT(_ms_65851) && IS_ATOM_INT(_33002)) {
            _33003 = _ms_65851 + _33002;
            if ((object)((uintptr_t)_33003 + (uintptr_t)HIGH_BITS) >= 0){
                _33003 = NewDouble((eudouble)_33003);
            }
        }
        else {
            if (IS_ATOM_INT(_ms_65851)) {
                _33003 = NewDouble((eudouble)_ms_65851 + DBL_PTR(_33002)->dbl);
            }
            else {
                if (IS_ATOM_INT(_33002)) {
                    _33003 = NewDouble(DBL_PTR(_ms_65851)->dbl + (eudouble)_33002);
                }
                else
                _33003 = NewDouble(DBL_PTR(_ms_65851)->dbl + DBL_PTR(_33002)->dbl);
            }
        }
        DeRef(_33002);
        _33002 = NOVALUE;
        // SubProg BackEnd pc: 1526 op: MINUS (10)
        _33004 = _i_66221 - 1;
        // SubProg BackEnd pc: 1530 op: GLOBAL_INIT_CHECK (109)
        // SubProg BackEnd pc: 1532 op: SIZEOF (217)
        _33005 = eu_sizeof( 50331649 );
        DeRef(_33005);
        // SubProg BackEnd pc: 1535 op: MULTIPLY (13)
        if (_33004 == (short)_33004 && _33005 <= INT15){
            _33006 = _33004 * _33005;
        }
        else{
            _33006 = NewDouble(_33004 * (eudouble)_33005);
        }
        _33004 = NOVALUE;
        _33005 = NOVALUE;
        // SubProg BackEnd pc: 1539 op: PLUS (11)
        if (IS_ATOM_INT(_33003) && IS_ATOM_INT(_33006)) {
            _33007 = _33003 + _33006;
            if ((object)((uintptr_t)_33007 + (uintptr_t)HIGH_BITS) >= 0){
                _33007 = NewDouble((eudouble)_33007);
            }
        }
        else {
            if (IS_ATOM_INT(_33003)) {
                _33007 = NewDouble((eudouble)_33003 + DBL_PTR(_33006)->dbl);
            }
            else {
                if (IS_ATOM_INT(_33006)) {
                    _33007 = NewDouble(DBL_PTR(_33003)->dbl + (eudouble)_33006);
                }
                else
                _33007 = NewDouble(DBL_PTR(_33003)->dbl + DBL_PTR(_33006)->dbl);
            }
        }
        DeRef(_33003);
        _33003 = NOVALUE;
        DeRef(_33006);
        _33006 = NOVALUE;
        // SubProg BackEnd pc: 1543 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_33007)){
            pokeptr_addr = (uintptr_t *)_33007;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33007)->dbl);
        }
        if (IS_ATOM_INT(_fn_65854)) {
            *pokeptr_addr = (uintptr_t)_fn_65854;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_fn_65854)->dbl;
        }
        DeRef(_33007);
        _33007 = NOVALUE;
        // SubProg BackEnd pc: 1546 op: STARTLINE (58)

        /** backend.e:267			poke(fn, other_strings[i])*/
        // SubProg BackEnd pc: 1548 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_other_strings_65867);
        _33008 = (object)*(((s1_ptr)_2)->base + _i_66221);
        // SubProg BackEnd pc: 1552 op: POKE (128)
        if (IS_ATOM_INT(_fn_65854)){
            poke_addr = (uint8_t *)_fn_65854;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_fn_65854)->dbl);
        }
        if (IS_ATOM_INT(_33008)) {
            *poke_addr = (uint8_t)_33008;
        }
        else if (IS_ATOM(_33008)) {
            *poke_addr = (uint8_t)DBL_PTR(_33008)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_33008);
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
        _33008 = NOVALUE;
        // SubProg BackEnd pc: 1555 op: STARTLINE (58)

        /** backend.e:268			fn += length(other_strings[i])*/
        // SubProg BackEnd pc: 1557 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_other_strings_65867);
        _33009 = (object)*(((s1_ptr)_2)->base + _i_66221);
        // SubProg BackEnd pc: 1561 op: LENGTH (42)
        if (IS_SEQUENCE(_33009)){
                _33010 = SEQ_PTR(_33009)->length;
        }
        else {
            _33010 = 1;
        }
        _33009 = NOVALUE;
        // SubProg BackEnd pc: 1564 op: PLUS (11)
        _0 = _fn_65854;
        if (IS_ATOM_INT(_fn_65854)) {
            _fn_65854 = _fn_65854 + _33010;
            if ((object)((uintptr_t)_fn_65854 + (uintptr_t)HIGH_BITS) >= 0){
                _fn_65854 = NewDouble((eudouble)_fn_65854);
            }
        }
        else {
            _fn_65854 = NewDouble(DBL_PTR(_fn_65854)->dbl + (eudouble)_33010);
        }
        DeRef(_0);
        _33010 = NOVALUE;
        // SubProg BackEnd pc: 1568 op: STARTLINE (58)

        /** backend.e:269			poke(fn, 0)*/
        // SubProg BackEnd pc: 1570 op: POKE (128)
        if (IS_ATOM_INT(_fn_65854)){
            poke_addr = (uint8_t *)_fn_65854;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_fn_65854)->dbl);
        }
        *poke_addr = (uint8_t)0;
        // SubProg BackEnd pc: 1573 op: STARTLINE (58)

        /** backend.e:270			fn += 1*/
        // SubProg BackEnd pc: 1575 op: PLUS1 (93)
        _0 = _fn_65854;
        if (IS_ATOM_INT(_fn_65854)) {
            _fn_65854 = _fn_65854 + 1;
            if (_fn_65854 > MAXINT){
                _fn_65854 = NewDouble((eudouble)_fn_65854);
            }
        }
        else
        _fn_65854 = binary_op(PLUS, 1, _fn_65854);
        DeRef(_0);
        // SubProg BackEnd pc: 1579 op: STARTLINE (58)

        /** backend.e:271		end for*/
        // SubProg BackEnd pc: 1581 op: ENDFOR_INT_UP1 (54)
        _i_66221 = _i_66221 + 1;
        goto L26; // [1581] 1511
L27: // addr: 1586 pc: 1581 sub: 65845 op: 54
        ;
    }
    // SubProg BackEnd pc: 1586 op: STARTLINE (58)

    /** backend.e:273		include_info = alloc_include_matrix()*/
    // SubProg BackEnd pc: 1588 op: PROC (27)
    _0 = _include_info_65859;
    _include_info_65859 = _68alloc_include_matrix();
    DeRef(_0);
    // SubProg BackEnd pc: 1591 op: STARTLINE (58)

    /** backend.e:275		if Argc > 2 then*/
    // SubProg BackEnd pc: 1593 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1595 op: GREATER_IFW (107)
    if (_5Argc_12487 <= 2)
    goto L28; // [1595] 1627
    // SubProg BackEnd pc: 1599 op: STARTLINE (58)

    /** backend.e:276			Argv = {Argv[1]} & Argv[3 .. Argc]*/
    // SubProg BackEnd pc: 1601 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1603 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5Argv_12488);
    _33015 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg BackEnd pc: 1607 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_33015);
    ((intptr_t*)_2)[1] = _33015;
    _33016 = MAKE_SEQ(_1);
    _33015 = NOVALUE;
    // SubProg BackEnd pc: 1611 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1613 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1615 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_33017;
    RHS_Slice(_5Argv_12488, 3, _5Argc_12487);
    // SubProg BackEnd pc: 1620 op: CONCAT (15)
    Concat((object_ptr)&_5Argv_12488, _33016, _33017);
    DeRefDS(_33016);
    _33016 = NOVALUE;
    DeRef(_33016);
    _33016 = NOVALUE;
    DeRefDS(_33017);
    _33017 = NOVALUE;
    // SubProg BackEnd pc: 1624 op: SEQUENCE_CHECK (97)
    // SubProg BackEnd pc: 1626 op: NOP1 (159)
L28: // addr: 1627 pc: 1626 sub: 65845 op: 159
    // SubProg BackEnd pc: 1627 op: STARTLINE (58)

    /** backend.e:279		atom external_debugger_ptr = 0*/
    // SubProg BackEnd pc: 1629 op: ASSIGN (18)
    DeRef(_external_debugger_ptr_66250);
    _external_debugger_ptr_66250 = 0;
    // SubProg BackEnd pc: 1632 op: STARTLINE (58)

    /** backend.e:280		if sequence( external_debugger ) then*/
    // SubProg BackEnd pc: 1634 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1636 op: IS_A_SEQUENCE (68)
    _33019 = IS_SEQUENCE(_67external_debugger_64069);
    // SubProg BackEnd pc: 1639 op: IF (20)
    if (_33019 == 0)
    {
        _33019 = NOVALUE;
        goto L29; // [1639] 1652
    }
    else{
        _33019 = NOVALUE;
    }
    // SubProg BackEnd pc: 1642 op: STARTLINE (58)

    /** backend.e:281			external_debugger_ptr = allocate_string( external_debugger )*/
    // SubProg BackEnd pc: 1644 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1646 op: PROC (27)
    Ref(_67external_debugger_64069);
    _external_debugger_ptr_66250 = _9allocate_string(_67external_debugger_64069, 0);
    // SubProg BackEnd pc: 1651 op: NOP1 (159)
L29: // addr: 1652 pc: 1651 sub: 65845 op: 159
    // SubProg BackEnd pc: 1652 op: STARTLINE (58)

    /** backend.e:285		machine_proc(65, */
    // SubProg BackEnd pc: 1654 op: PROC (27)
    _33021 = _47get_switches();
    // SubProg BackEnd pc: 1657 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1659 op: ROUTINE_ID (134)
    _33023 = CRoutineId(1464, 68, _33022);
    // SubProg BackEnd pc: 1664 op: ROUTINE_ID (134)
    _33025 = CRoutineId(1464, 68, _33024);
    // SubProg BackEnd pc: 1669 op: ROUTINE_ID (134)
    _33027 = CRoutineId(1464, 68, _33026);
    // SubProg BackEnd pc: 1674 op: ROUTINE_ID (134)
    _33029 = CRoutineId(1464, 68, _33028);
    // SubProg BackEnd pc: 1679 op: ROUTINE_ID (134)
    _33031 = CRoutineId(1464, 68, _33030);
    // SubProg BackEnd pc: 1684 op: ROUTINE_ID (134)
    _33033 = CRoutineId(1464, 68, _33032);
    // SubProg BackEnd pc: 1689 op: ROUTINE_ID (134)
    _33035 = CRoutineId(1464, 68, _33034);
    // SubProg BackEnd pc: 1694 op: GLOBAL_INIT_CHECK (109)
    // SubProg BackEnd pc: 1696 op: RIGHT_BRACE_N (31)
    _1 = NewS1(16);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_st_65849);
    ((intptr_t*)_2)[1] = _st_65849;
    Ref(_sl_65852);
    ((intptr_t*)_2)[2] = _sl_65852;
    Ref(_ms_65851);
    ((intptr_t*)_2)[3] = _ms_65851;
    Ref(_lit_65853);
    ((intptr_t*)_2)[4] = _lit_65853;
    Ref(_include_info_65859);
    ((intptr_t*)_2)[5] = _include_info_65859;
    ((intptr_t*)_2)[6] = _33021;
    RefDS(_5Argv_12488);
    ((intptr_t*)_2)[7] = _5Argv_12488;
    ((intptr_t*)_2)[8] = _33023;
    ((intptr_t*)_2)[9] = _33025;
    ((intptr_t*)_2)[10] = _33027;
    ((intptr_t*)_2)[11] = _33029;
    Ref(_external_debugger_ptr_66250);
    ((intptr_t*)_2)[12] = _external_debugger_ptr_66250;
    ((intptr_t*)_2)[13] = _33031;
    ((intptr_t*)_2)[14] = _33033;
    ((intptr_t*)_2)[15] = _33035;
    ((intptr_t*)_2)[16] = _5trace_lines_63969;
    _33036 = MAKE_SEQ(_1);
    _33035 = NOVALUE;
    _33033 = NOVALUE;
    _33031 = NOVALUE;
    _33029 = NOVALUE;
    _33027 = NOVALUE;
    _33025 = NOVALUE;
    _33023 = NOVALUE;
    _33021 = NOVALUE;
    // SubProg BackEnd pc: 1715 op: MACHINE_PROC (112)
    machine(65, _33036);
    DeRefDS(_33036);
    _33036 = NOVALUE;
    // SubProg BackEnd pc: 1718 op: STARTLINE (58)

    /** backend.e:305	end procedure*/
    // SubProg BackEnd pc: 1720 op: RETURNP (29)

// Exiting block BLOCK: BackEnd

// block var il_file_65847

// block var addr_65848
    DeRef(_addr_65848);

// block var st_65849
    DeRef(_st_65849);

// block var nm_65850
    DeRef(_nm_65850);

// block var ms_65851
    DeRef(_ms_65851);

// block var sl_65852
    DeRef(_sl_65852);

// block var lit_65853
    DeRef(_lit_65853);

// block var fn_65854
    DeRef(_fn_65854);

// block var e_addr_65856
    DeRef(_e_addr_65856);

// block var l_addr_65857
    DeRef(_l_addr_65857);

// block var include_info_65859
    DeRef(_include_info_65859);

// block var string_size_65862

// block var short_65863

// block var size_65864

// block var repcount_65865

// block var lit_string_65866
    DeRef(_lit_string_65866);

// block var other_strings_65867
    DeRef(_other_strings_65867);

// block var eentry_65868
    DeRef(_eentry_65868);

// block var external_debugger_ptr_66250
    DeRef(_external_debugger_ptr_66250);
    DeRef(_32940);
    _32940 = NOVALUE;
    _32972 = NOVALUE;
    _32872 = NOVALUE;
    _32987 = NOVALUE;
    _32843 = NOVALUE;
    DeRef(_32979);
    _32979 = NOVALUE;
    DeRef(_32976);
    _32976 = NOVALUE;
    DeRef(_32909);
    _32909 = NOVALUE;
    _33009 = NOVALUE;
    DeRef(_32955);
    _32955 = NOVALUE;
    _32859 = NOVALUE;
    _32977 = NOVALUE;
    DeRef(_32964);
    _32964 = NOVALUE;
    DeRef(_32903);
    _32903 = NOVALUE;
    DeRef(_32906);
    _32906 = NOVALUE;
    DeRef(_32854);
    _32854 = NOVALUE;
    DeRef(_32971);
    _32971 = NOVALUE;
    DeRef(_32835);
    _32835 = NOVALUE;
    DeRef(_32857);
    _32857 = NOVALUE;
    _32864 = NOVALUE;
    DeRef(_32958);
    _32958 = NOVALUE;
    return;
    // SubProg BackEnd pc: 1723 op: BADRETURNF (43)
    ;
}


object _68alloc_include_matrix()
{
    object _include_info_66282 = NOVALUE;
    object _include_node_66291 = NOVALUE;
    object _include_array_66299 = NOVALUE;
// skipping _33053  name type: 0
    object _33052 = NOVALUE; // 66309 33052
    object _33051 = NOVALUE; // 66307 33051
    object _33050 = NOVALUE; // 66306 33050
// skipping _33049  name type: 0
    object _33048 = NOVALUE; // 66303 33048
    object _33047 = NOVALUE; // 66302 33047
    object _33046 = NOVALUE; // 66298 33046
// skipping _33045  name type: 0
    object _33044 = NOVALUE; // 66293 33044
// skipping _33043  name type: 0
    object _33042 = NOVALUE; // 66289 33042
    object _33041 = NOVALUE; // 66288 33041
    object _33040 = NOVALUE; // 66287 33040
    object _33039 = NOVALUE; // 66285 33039
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg alloc_include_matrix pc: 1 op: STARTLINE (58)

    /** backend.e:309		atom include_info = allocate( sizeof( C_POINTER ) * (1 + length( include_matrix )) ) */
    // SubProg alloc_include_matrix pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 5 op: SIZEOF (217)
    _33039 = eu_sizeof( 50331649 );
    // SubProg alloc_include_matrix pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_7include_matrix_11396)){
            _33040 = SEQ_PTR(_7include_matrix_11396)->length;
    }
    else {
        _33040 = 1;
    }
    // SubProg alloc_include_matrix pc: 13 op: PLUS1 (93)
    _33041 = _33040 + 1;
    _33040 = NOVALUE;
    // SubProg alloc_include_matrix pc: 17 op: MULTIPLY (13)
    if (_33039 == (short)_33039 && _33041 <= INT15){
        _33042 = _33039 * _33041;
    }
    else{
        _33042 = NewDouble(_33039 * (eudouble)_33041);
    }
    _33039 = NOVALUE;
    _33041 = NOVALUE;
    // SubProg alloc_include_matrix pc: 21 op: PROC (27)
    _0 = _include_info_66282;
    _include_info_66282 = _9allocate(_33042, 0);
    DeRef(_0);
    _33042 = NOVALUE;
    // SubProg alloc_include_matrix pc: 26 op: STARTLINE (58)

    /** backend.e:310		atom include_node = include_info*/
    // SubProg alloc_include_matrix pc: 28 op: ASSIGN (18)
    Ref(_include_info_66282);
    DeRef(_include_node_66291);
    _include_node_66291 = _include_info_66282;
    // SubProg alloc_include_matrix pc: 31 op: STARTLINE (58)

    /** backend.e:311		poke_pointer( include_info, 0 )*/
    // SubProg alloc_include_matrix pc: 33 op: POKE_POINTER (215)
    if (IS_ATOM_INT(_include_info_66282)){
        pokeptr_addr = (uintptr_t *)_include_info_66282;
    }
    else {
        pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_include_info_66282)->dbl);
    }
    *pokeptr_addr = (uintptr_t)0;
    // SubProg alloc_include_matrix pc: 36 op: STARTLINE (58)

    /** backend.e:312		include_node += sizeof( C_POINTER )*/
    // SubProg alloc_include_matrix pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 40 op: SIZEOF (217)
    _33044 = eu_sizeof( 50331649 );
    // SubProg alloc_include_matrix pc: 43 op: PLUS (11)
    _0 = _include_node_66291;
    if (IS_ATOM_INT(_include_node_66291)) {
        _include_node_66291 = _include_node_66291 + _33044;
        if ((object)((uintptr_t)_include_node_66291 + (uintptr_t)HIGH_BITS) >= 0){
            _include_node_66291 = NewDouble((eudouble)_include_node_66291);
        }
    }
    else {
        _include_node_66291 = NewDouble(DBL_PTR(_include_node_66291)->dbl + (eudouble)_33044);
    }
    DeRef(_0);
    _33044 = NOVALUE;
    // SubProg alloc_include_matrix pc: 47 op: STARTLINE (58)

    /** backend.e:314		for i = 1 to length( include_matrix ) do*/
    // SubProg alloc_include_matrix pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_include_matrix pc: 51 op: LENGTH (42)
    if (IS_SEQUENCE(_7include_matrix_11396)){
            _33046 = SEQ_PTR(_7include_matrix_11396)->length;
    }
    else {
        _33046 = 1;
    }
    // SubProg alloc_include_matrix pc: 54 op: FOR_I (125)
    {
        object _i_66296;
        _i_66296 = 1;
L1: // addr: 61 pc: 54 sub: 66280 op: 125
        if (_i_66296 > _33046){
            goto L2; // [54] 117
        }
        // SubProg alloc_include_matrix pc: 61 op: STARTLINE (58)

        /** backend.e:315			atom include_array = allocate( 1 + length( include_matrix ) )*/
        // SubProg alloc_include_matrix pc: 63 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_include_matrix pc: 65 op: LENGTH (42)
        if (IS_SEQUENCE(_7include_matrix_11396)){
                _33047 = SEQ_PTR(_7include_matrix_11396)->length;
        }
        else {
            _33047 = 1;
        }
        // SubProg alloc_include_matrix pc: 68 op: PLUS1 (93)
        _33048 = _33047 + 1;
        _33047 = NOVALUE;
        // SubProg alloc_include_matrix pc: 72 op: PROC (27)
        _0 = _include_array_66299;
        _include_array_66299 = _9allocate(_33048, 0);
        DeRef(_0);
        _33048 = NOVALUE;
        // SubProg alloc_include_matrix pc: 77 op: STARTLINE (58)

        /** backend.e:316			poke( include_array, i & include_matrix[i] )*/
        // SubProg alloc_include_matrix pc: 79 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_include_matrix pc: 81 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _33050 = (object)*(((s1_ptr)_2)->base + _i_66296);
        // SubProg alloc_include_matrix pc: 85 op: CONCAT (15)
        if (IS_SEQUENCE(_i_66296) && IS_ATOM(_33050)) {
        }
        else if (IS_ATOM(_i_66296) && IS_SEQUENCE(_33050)) {
            Prepend(&_33051, _33050, _i_66296);
        }
        else {
            Concat((object_ptr)&_33051, _i_66296, _33050);
        }
        _33050 = NOVALUE;
        // SubProg alloc_include_matrix pc: 89 op: POKE (128)
        if (IS_ATOM_INT(_include_array_66299)){
            poke_addr = (uint8_t *)_include_array_66299;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_include_array_66299)->dbl);
        }
        _1 = (object)SEQ_PTR(_33051);
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
        DeRefDS(_33051);
        _33051 = NOVALUE;
        // SubProg alloc_include_matrix pc: 92 op: STARTLINE (58)

        /** backend.e:317			poke_pointer( include_node, include_array )*/
        // SubProg alloc_include_matrix pc: 94 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_include_node_66291)){
            pokeptr_addr = (uintptr_t *)_include_node_66291;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_include_node_66291)->dbl);
        }
        if (IS_ATOM_INT(_include_array_66299)) {
            *pokeptr_addr = (uintptr_t)_include_array_66299;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_include_array_66299)->dbl;
        }
        // SubProg alloc_include_matrix pc: 97 op: STARTLINE (58)

        /** backend.e:319			include_node += sizeof( C_POINTER )*/
        // SubProg alloc_include_matrix pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_include_matrix pc: 101 op: SIZEOF (217)
        _33052 = eu_sizeof( 50331649 );
        DeRef(_33052);
        // SubProg alloc_include_matrix pc: 104 op: PLUS (11)
        _0 = _include_node_66291;
        if (IS_ATOM_INT(_include_node_66291)) {
            _include_node_66291 = _include_node_66291 + _33052;
            if ((object)((uintptr_t)_include_node_66291 + (uintptr_t)HIGH_BITS) >= 0){
                _include_node_66291 = NewDouble((eudouble)_include_node_66291);
            }
        }
        else {
            _include_node_66291 = NewDouble(DBL_PTR(_include_node_66291)->dbl + (eudouble)_33052);
        }
        DeRef(_0);
        _33052 = NOVALUE;
        // SubProg alloc_include_matrix pc: 108 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var include_array_66299
        DeRef(_include_array_66299);
        _include_array_66299 = NOVALUE;
        // SubProg alloc_include_matrix pc: 110 op: STARTLINE (58)

        /** backend.e:320		end for*/
        // SubProg alloc_include_matrix pc: 112 op: ENDFOR_INT_UP1 (54)
        _i_66296 = _i_66296 + 1;
        goto L1; // [112] 61
L2: // addr: 117 pc: 112 sub: 66280 op: 54
        ;
    }
    // SubProg alloc_include_matrix pc: 117 op: STARTLINE (58)

    /** backend.e:321		return include_info*/
    // SubProg alloc_include_matrix pc: 119 op: RETURNF (28)

// Exiting block BLOCK: alloc_include_matrix

// block var include_node_66291
    DeRef(_include_node_66291);
    return _include_info_66282;
    // SubProg alloc_include_matrix pc: 123 op: BADRETURNF (43)
    ;
}


object _68alloc_symbol_names(object _st_66313, object _lit_66314, object _string_size_66315)
{
    object _nm_66316 = NOVALUE;
    object _addr_66320 = NOVALUE;
    object _entry_addr_66321 = NOVALUE;
    object _no_name_66322 = NOVALUE;
    object _eentry_66330 = NOVALUE;
    object _33083 = NOVALUE; // 66375 33083
    object _33082 = NOVALUE; // 66374 33082
// skipping _33081  name type: 0
    object _33080 = NOVALUE; // 66371 33080
    object _33079 = NOVALUE; // 66368 33079
    object _33078 = NOVALUE; // 66367 33078
    object _33077 = NOVALUE; // 66366 33077
    object _33076 = NOVALUE; // 66364 33076
// skipping _33075  name type: 0
    object _33074 = NOVALUE; // 66361 33074
    object _33073 = NOVALUE; // 66359 33073
    object _33072 = NOVALUE; // 66356 33072
// skipping _33071  name type: 0
// skipping _33070  name type: 0
    object _33069 = NOVALUE; // 66351 33069
    object _33068 = NOVALUE; // 66350 33068
    object _33067 = NOVALUE; // 66348 33067
    object _33066 = NOVALUE; // 66346 33066
    object _33065 = NOVALUE; // 66344 33065
    object _33064 = NOVALUE; // 66343 33064
// skipping _33063  name type: 0
    object _33062 = NOVALUE; // 66338 33062
    object _33061 = NOVALUE; // 66336 33061
// skipping _33060  name type: 0
// skipping _33059  name type: 0
    object _33058 = NOVALUE; // 66329 33058
// skipping _33057  name type: 0
// skipping _33055  name type: 0
    object _33054 = NOVALUE; // 66318 33054
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg alloc_symbol_names pc: 1 op: INTEGER_CHECK (96)
    // SubProg alloc_symbol_names pc: 3 op: STARTLINE (58)

    /** backend.e:326		atom nm = allocate(1+string_size)  */
    // SubProg alloc_symbol_names pc: 5 op: PLUS1 (93)
    _33054 = _string_size_66315 + 1;
    if (_33054 > MAXINT){
        _33054 = NewDouble((eudouble)_33054);
    }
    // SubProg alloc_symbol_names pc: 9 op: PROC (27)
    _0 = _nm_66316;
    _nm_66316 = _9allocate(_33054, 0);
    DeRef(_0);
    _33054 = NOVALUE;
    // SubProg alloc_symbol_names pc: 14 op: STARTLINE (58)

    /** backend.e:327		atom addr = nm*/
    // SubProg alloc_symbol_names pc: 16 op: ASSIGN (18)
    Ref(_nm_66316);
    DeRef(_addr_66320);
    _addr_66320 = _nm_66316;
    // SubProg alloc_symbol_names pc: 19 op: STARTLINE (58)

    /** backend.e:328		atom entry_addr = st*/
    // SubProg alloc_symbol_names pc: 21 op: ASSIGN (18)
    Ref(_st_66313);
    DeRef(_entry_addr_66321);
    _entry_addr_66321 = _st_66313;
    // SubProg alloc_symbol_names pc: 24 op: STARTLINE (58)

    /** backend.e:329		atom no_name = allocate_string("<no-name>")*/
    // SubProg alloc_symbol_names pc: 26 op: PROC (27)
    RefDS(_33056);
    _0 = _no_name_66322;
    _no_name_66322 = _9allocate_string(_33056, 0);
    DeRef(_0);
    // SubProg alloc_symbol_names pc: 31 op: STARTLINE (58)

    /** backend.e:330		for i = 1 to length(SymTab) do*/
    // SubProg alloc_symbol_names pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg alloc_symbol_names pc: 35 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _33058 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _33058 = 1;
    }
    // SubProg alloc_symbol_names pc: 38 op: FOR_I (125)
    {
        object _i_66327;
        _i_66327 = 1;
L1: // addr: 45 pc: 38 sub: 66311 op: 125
        if (_i_66327 > _33058){
            goto L2; // [38] 246
        }
        // SubProg alloc_symbol_names pc: 45 op: STARTLINE (58)

        /** backend.e:331			object eentry = SymTab[i]*/
        // SubProg alloc_symbol_names pc: 47 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 49 op: RHS_SUBS_CHECK (92)
        DeRef(_eentry_66330);
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _eentry_66330 = (object)*(((s1_ptr)_2)->base + _i_66327);
        Ref(_eentry_66330);
        // SubProg alloc_symbol_names pc: 53 op: STARTLINE (58)

        /** backend.e:332			entry_addr += ST_ENTRY_SIZE*/
        // SubProg alloc_symbol_names pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 57 op: PLUS (11)
        _0 = _entry_addr_66321;
        if (IS_ATOM_INT(_entry_addr_66321)) {
            _entry_addr_66321 = _entry_addr_66321 + _73ST_ENTRY_SIZE_65769;
            if ((object)((uintptr_t)_entry_addr_66321 + (uintptr_t)HIGH_BITS) >= 0){
                _entry_addr_66321 = NewDouble((eudouble)_entry_addr_66321);
            }
        }
        else {
            _entry_addr_66321 = NewDouble(DBL_PTR(_entry_addr_66321)->dbl + (eudouble)_73ST_ENTRY_SIZE_65769);
        }
        DeRef(_0);
        // SubProg alloc_symbol_names pc: 61 op: STARTLINE (58)

        /** backend.e:333			if sequence(eentry) then */
        // SubProg alloc_symbol_names pc: 63 op: IS_A_SEQUENCE (68)
        _33061 = IS_SEQUENCE(_eentry_66330);
        // SubProg alloc_symbol_names pc: 66 op: IF (20)
        if (_33061 == 0)
        {
            _33061 = NOVALUE;
            goto L3; // [66] 237
        }
        else{
            _33061 = NOVALUE;
        }
        // SubProg alloc_symbol_names pc: 69 op: STARTLINE (58)

        /** backend.e:334				if length(eentry) >= S_NAME then*/
        // SubProg alloc_symbol_names pc: 71 op: LENGTH (42)
        if (IS_SEQUENCE(_eentry_66330)){
                _33062 = SEQ_PTR(_eentry_66330)->length;
        }
        else {
            _33062 = 1;
        }
        // SubProg alloc_symbol_names pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 76 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _33062, _5S_NAME_12132)){
            _33062 = NOVALUE;
            goto L4; // [76] 208
        }
        _33062 = NOVALUE;
        // SubProg alloc_symbol_names pc: 80 op: STARTLINE (58)

        /** backend.e:335					if sequence(eentry[S_NAME]) then*/
        // SubProg alloc_symbol_names pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66330);
        if (!IS_ATOM_INT(_5S_NAME_12132)){
            _33064 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
        }
        else{
            _33064 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
        }
        // SubProg alloc_symbol_names pc: 88 op: IS_A_SEQUENCE (68)
        _33065 = IS_SEQUENCE(_33064);
        _33064 = NOVALUE;
        // SubProg alloc_symbol_names pc: 91 op: IF (20)
        if (_33065 == 0)
        {
            _33065 = NOVALUE;
            goto L5; // [91] 145
        }
        else{
            _33065 = NOVALUE;
        }
        // SubProg alloc_symbol_names pc: 94 op: STARTLINE (58)

        /** backend.e:337						poke_pointer(entry_addr + ST_NAME, addr) */
        // SubProg alloc_symbol_names pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 98 op: PLUS (11)
        if (IS_ATOM_INT(_entry_addr_66321) && IS_ATOM_INT(_73ST_NAME_65730)) {
            _33066 = _entry_addr_66321 + _73ST_NAME_65730;
            if ((object)((uintptr_t)_33066 + (uintptr_t)HIGH_BITS) >= 0){
                _33066 = NewDouble((eudouble)_33066);
            }
        }
        else {
            _33066 = binary_op(PLUS, _entry_addr_66321, _73ST_NAME_65730);
        }
        // SubProg alloc_symbol_names pc: 102 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_33066)){
            pokeptr_addr = (uintptr_t *)_33066;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33066)->dbl);
        }
        if (IS_ATOM_INT(_addr_66320)) {
            *pokeptr_addr = (uintptr_t)_addr_66320;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_addr_66320)->dbl;
        }
        DeRef(_33066);
        _33066 = NOVALUE;
        // SubProg alloc_symbol_names pc: 105 op: STARTLINE (58)

        /** backend.e:339						poke(addr, eentry[S_NAME])*/
        // SubProg alloc_symbol_names pc: 107 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66330);
        if (!IS_ATOM_INT(_5S_NAME_12132)){
            _33067 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
        }
        else{
            _33067 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
        }
        // SubProg alloc_symbol_names pc: 113 op: POKE (128)
        if (IS_ATOM_INT(_addr_66320)){
            poke_addr = (uint8_t *)_addr_66320;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_addr_66320)->dbl);
        }
        if (IS_ATOM_INT(_33067)) {
            *poke_addr = (uint8_t)_33067;
        }
        else if (IS_ATOM(_33067)) {
            *poke_addr = (uint8_t)DBL_PTR(_33067)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_33067);
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
        _33067 = NOVALUE;
        // SubProg alloc_symbol_names pc: 116 op: STARTLINE (58)

        /** backend.e:340						addr += length(eentry[S_NAME])*/
        // SubProg alloc_symbol_names pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 120 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66330);
        if (!IS_ATOM_INT(_5S_NAME_12132)){
            _33068 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
        }
        else{
            _33068 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
        }
        // SubProg alloc_symbol_names pc: 124 op: LENGTH (42)
        if (IS_SEQUENCE(_33068)){
                _33069 = SEQ_PTR(_33068)->length;
        }
        else {
            _33069 = 1;
        }
        _33068 = NOVALUE;
        // SubProg alloc_symbol_names pc: 127 op: PLUS (11)
        _0 = _addr_66320;
        if (IS_ATOM_INT(_addr_66320)) {
            _addr_66320 = _addr_66320 + _33069;
            if ((object)((uintptr_t)_addr_66320 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_66320 = NewDouble((eudouble)_addr_66320);
            }
        }
        else {
            _addr_66320 = NewDouble(DBL_PTR(_addr_66320)->dbl + (eudouble)_33069);
        }
        DeRef(_0);
        _33069 = NOVALUE;
        // SubProg alloc_symbol_names pc: 131 op: STARTLINE (58)

        /** backend.e:341						poke(addr, 0)  -- 0-delimited string*/
        // SubProg alloc_symbol_names pc: 133 op: POKE (128)
        if (IS_ATOM_INT(_addr_66320)){
            poke_addr = (uint8_t *)_addr_66320;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_addr_66320)->dbl);
        }
        *poke_addr = (uint8_t)0;
        // SubProg alloc_symbol_names pc: 136 op: STARTLINE (58)

        /** backend.e:342						addr += 1*/
        // SubProg alloc_symbol_names pc: 138 op: PLUS1 (93)
        _0 = _addr_66320;
        if (IS_ATOM_INT(_addr_66320)) {
            _addr_66320 = _addr_66320 + 1;
            if (_addr_66320 > MAXINT){
                _addr_66320 = NewDouble((eudouble)_addr_66320);
            }
        }
        else
        _addr_66320 = binary_op(PLUS, 1, _addr_66320);
        DeRef(_0);
        // SubProg alloc_symbol_names pc: 142 op: ELSE (23)
        goto L6; // [142] 157
        // SubProg alloc_symbol_names pc: 144 op: NOP1 (159)
L5: // addr: 145 pc: 144 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 145 op: STARTLINE (58)

        /** backend.e:346						poke_pointer(entry_addr + ST_NAME, no_name)*/
        // SubProg alloc_symbol_names pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 149 op: PLUS (11)
        if (IS_ATOM_INT(_entry_addr_66321) && IS_ATOM_INT(_73ST_NAME_65730)) {
            _33072 = _entry_addr_66321 + _73ST_NAME_65730;
            if ((object)((uintptr_t)_33072 + (uintptr_t)HIGH_BITS) >= 0){
                _33072 = NewDouble((eudouble)_33072);
            }
        }
        else {
            _33072 = binary_op(PLUS, _entry_addr_66321, _73ST_NAME_65730);
        }
        // SubProg alloc_symbol_names pc: 153 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_33072)){
            pokeptr_addr = (uintptr_t *)_33072;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_33072)->dbl);
        }
        if (IS_ATOM_INT(_no_name_66322)) {
            *pokeptr_addr = (uintptr_t)_no_name_66322;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_no_name_66322)->dbl;
        }
        DeRef(_33072);
        _33072 = NOVALUE;
        // SubProg alloc_symbol_names pc: 156 op: NOP1 (159)
L6: // addr: 157 pc: 156 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 157 op: STARTLINE (58)

        /** backend.e:349					if eentry[S_TOKEN] = NAMESPACE or compare( eentry[S_OBJ], NOVALUE ) then*/
        // SubProg alloc_symbol_names pc: 159 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 161 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66330);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _33073 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _33073 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        // SubProg alloc_symbol_names pc: 165 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 167 op: EQUALS (3)
        if (IS_ATOM_INT(_33073)) {
            _33074 = (_33073 == 523);
        }
        else {
            _33074 = binary_op(EQUALS, _33073, 523);
        }
        _33073 = NOVALUE;
        // SubProg alloc_symbol_names pc: 171 op: SC1_OR_IF (147)
        if (IS_ATOM_INT(_33074)) {
            if (_33074 != 0) {
                goto L7; // [171] 192
            }
        }
        else {
            if (DBL_PTR(_33074)->dbl != 0.0) {
                goto L7; // [171] 192
            }
        }
        // SubProg alloc_symbol_names pc: 175 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 177 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66330);
        _33076 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg alloc_symbol_names pc: 181 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 183 op: COMPARE (76)
        if (IS_ATOM_INT(_33076) && IS_ATOM_INT(_5NOVALUE_12331)){
            _33077 = (_33076 < _5NOVALUE_12331) ? -1 : (_33076 > _5NOVALUE_12331);
        }
        else{
            _33077 = compare(_33076, _5NOVALUE_12331);
        }
        _33076 = NOVALUE;
        // SubProg alloc_symbol_names pc: 187 op: NOP1 (159)
        // SubProg alloc_symbol_names pc: 188 op: IF (20)
        if (_33077 == 0)
        {
            _33077 = NOVALUE;
            goto L8; // [188] 236
        }
        else{
            _33077 = NOVALUE;
        }
        // SubProg alloc_symbol_names pc: 191 op: NOP1 (159)
L7: // addr: 192 pc: 191 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 192 op: STARTLINE (58)

        /** backend.e:351						poke_pointer(entry_addr, peek_pointer( entry_addr ) + lit )*/
        // SubProg alloc_symbol_names pc: 194 op: PEEK_POINTER (216)
        if (IS_ATOM_INT(_entry_addr_66321)) {
            _33078 = *(intptr_t *)_entry_addr_66321;
            if ((uintptr_t)_33078 > (uintptr_t)MAXINT){
                _33078 = NewDouble((eudouble)(uintptr_t)_33078);
            }
        }
        else {
            _33078 = *(uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66321)->dbl);
            if ((uintptr_t)_33078 > (uintptr_t)MAXINT){
                _33078 = NewDouble((eudouble)(uintptr_t)_33078);
            }
        }
        // SubProg alloc_symbol_names pc: 197 op: PLUS (11)
        if (IS_ATOM_INT(_33078) && IS_ATOM_INT(_lit_66314)) {
            _33079 = _33078 + _lit_66314;
            if ((object)((uintptr_t)_33079 + (uintptr_t)HIGH_BITS) >= 0){
                _33079 = NewDouble((eudouble)_33079);
            }
        }
        else {
            if (IS_ATOM_INT(_33078)) {
                _33079 = NewDouble((eudouble)_33078 + DBL_PTR(_lit_66314)->dbl);
            }
            else {
                if (IS_ATOM_INT(_lit_66314)) {
                    _33079 = NewDouble(DBL_PTR(_33078)->dbl + (eudouble)_lit_66314);
                }
                else
                _33079 = NewDouble(DBL_PTR(_33078)->dbl + DBL_PTR(_lit_66314)->dbl);
            }
        }
        DeRef(_33078);
        _33078 = NOVALUE;
        // SubProg alloc_symbol_names pc: 201 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_entry_addr_66321)){
            pokeptr_addr = (uintptr_t *)_entry_addr_66321;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66321)->dbl);
        }
        if (IS_ATOM_INT(_33079)) {
            *pokeptr_addr = (uintptr_t)_33079;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_33079)->dbl;
        }
        DeRef(_33079);
        _33079 = NOVALUE;
        // SubProg alloc_symbol_names pc: 204 op: NOP1 (159)
        // SubProg alloc_symbol_names pc: 205 op: ELSE (23)
        goto L8; // [205] 236
        // SubProg alloc_symbol_names pc: 207 op: NOP1 (159)
L4: // addr: 208 pc: 207 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 208 op: STARTLINE (58)

        /** backend.e:353				elsif eentry[S_MODE] = M_CONSTANT then*/
        // SubProg alloc_symbol_names pc: 210 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 212 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_eentry_66330);
        _33080 = (object)*(((s1_ptr)_2)->base + 3);
        // SubProg alloc_symbol_names pc: 216 op: GLOBAL_INIT_CHECK (109)
        // SubProg alloc_symbol_names pc: 218 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _33080, 2)){
            _33080 = NOVALUE;
            goto L9; // [218] 235
        }
        _33080 = NOVALUE;
        // SubProg alloc_symbol_names pc: 222 op: STARTLINE (58)

        /** backend.e:355					poke_pointer(entry_addr, peek_pointer( entry_addr ) + lit) */
        // SubProg alloc_symbol_names pc: 224 op: PEEK_POINTER (216)
        if (IS_ATOM_INT(_entry_addr_66321)) {
            _33082 = *(intptr_t *)_entry_addr_66321;
            if ((uintptr_t)_33082 > (uintptr_t)MAXINT){
                _33082 = NewDouble((eudouble)(uintptr_t)_33082);
            }
        }
        else {
            _33082 = *(uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66321)->dbl);
            if ((uintptr_t)_33082 > (uintptr_t)MAXINT){
                _33082 = NewDouble((eudouble)(uintptr_t)_33082);
            }
        }
        // SubProg alloc_symbol_names pc: 227 op: PLUS (11)
        if (IS_ATOM_INT(_33082) && IS_ATOM_INT(_lit_66314)) {
            _33083 = _33082 + _lit_66314;
            if ((object)((uintptr_t)_33083 + (uintptr_t)HIGH_BITS) >= 0){
                _33083 = NewDouble((eudouble)_33083);
            }
        }
        else {
            if (IS_ATOM_INT(_33082)) {
                _33083 = NewDouble((eudouble)_33082 + DBL_PTR(_lit_66314)->dbl);
            }
            else {
                if (IS_ATOM_INT(_lit_66314)) {
                    _33083 = NewDouble(DBL_PTR(_33082)->dbl + (eudouble)_lit_66314);
                }
                else
                _33083 = NewDouble(DBL_PTR(_33082)->dbl + DBL_PTR(_lit_66314)->dbl);
            }
        }
        DeRef(_33082);
        _33082 = NOVALUE;
        // SubProg alloc_symbol_names pc: 231 op: POKE_POINTER (215)
        if (IS_ATOM_INT(_entry_addr_66321)){
            pokeptr_addr = (uintptr_t *)_entry_addr_66321;
        }
        else {
            pokeptr_addr = (uintptr_t *)(uintptr_t)(DBL_PTR(_entry_addr_66321)->dbl);
        }
        if (IS_ATOM_INT(_33083)) {
            *pokeptr_addr = (uintptr_t)_33083;
        }
        else {
            *pokeptr_addr = (uintptr_t)DBL_PTR(_33083)->dbl;
        }
        DeRef(_33083);
        _33083 = NOVALUE;
        // SubProg alloc_symbol_names pc: 234 op: NOP1 (159)
L9: // addr: 235 pc: 234 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 235 op: NOP1 (159)
L8: // addr: 236 pc: 235 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 236 op: NOP1 (159)
L3: // addr: 237 pc: 236 sub: 66311 op: 159
        // SubProg alloc_symbol_names pc: 237 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var eentry_66330
        DeRef(_eentry_66330);
        _eentry_66330 = NOVALUE;
        // SubProg alloc_symbol_names pc: 239 op: STARTLINE (58)

        /** backend.e:359		end for*/
        // SubProg alloc_symbol_names pc: 241 op: ENDFOR_INT_UP1 (54)
        _i_66327 = _i_66327 + 1;
        goto L1; // [241] 45
L2: // addr: 246 pc: 241 sub: 66311 op: 54
        ;
    }
    // SubProg alloc_symbol_names pc: 246 op: STARTLINE (58)

    /** backend.e:360		return nm*/
    // SubProg alloc_symbol_names pc: 248 op: RETURNF (28)

// Exiting block BLOCK: alloc_symbol_names

// block var st_66313
    DeRef(_st_66313);

// block var lit_66314
    DeRef(_lit_66314);

// block var string_size_66315

// block var addr_66320
    DeRef(_addr_66320);

// block var entry_addr_66321
    DeRef(_entry_addr_66321);

// block var no_name_66322
    DeRef(_no_name_66322);
    _33068 = NOVALUE;
    DeRef(_33074);
    _33074 = NOVALUE;
    return _nm_66316;
    // SubProg alloc_symbol_names pc: 252 op: BADRETURNF (43)
    ;
}



// 0xA8ADD181
