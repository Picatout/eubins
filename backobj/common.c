// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _35open_locked(object _file_path_14186)
{
    object _fh_14187 = NOVALUE;
// skipping _7829  name type: 0
// skipping _7828  name type: 0
// skipping _7827  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg open_locked pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg open_locked pc: 3 op: STARTLINE (58)

    /** common.e:55		fh = open(file_path, "u")*/
    // SubProg open_locked pc: 5 op: OPEN (37)
    _fh_14187 = EOpen(_file_path_14186, _7826, 0);
    // SubProg open_locked pc: 10 op: STARTLINE (58)

    /** common.e:57		if fh = -1 then*/
    // SubProg open_locked pc: 12 op: EQUALS_IFW_I (121)
    if (_fh_14187 != -1)
    goto L1; // [12] 24
    // SubProg open_locked pc: 16 op: STARTLINE (58)

    /** common.e:58			fh = open(file_path, "r")*/
    // SubProg open_locked pc: 18 op: OPEN (37)
    _fh_14187 = EOpen(_file_path_14186, _4568, 0);
    // SubProg open_locked pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 14184 op: 159
    // SubProg open_locked pc: 24 op: STARTLINE (58)

    /** common.e:61		return fh*/
    // SubProg open_locked pc: 26 op: RETURNF (28)

// Exiting block BLOCK: open_locked

// block var file_path_14186
    DeRefDS(_file_path_14186);
    return _fh_14187;
    // SubProg open_locked pc: 30 op: BADRETURNF (43)
    ;
}


object _35get_eudir()
{
    object _possible_paths_14200 = NOVALUE;
    object _home_14205 = NOVALUE;
    object _possible_path_14219 = NOVALUE;
    object _possible_path_14233 = NOVALUE;
    object _file_check_14247 = NOVALUE;
// skipping _7868  name type: 0
    object _7867 = NOVALUE; // 14255 7867
    object _7866 = NOVALUE; // 14254 7866
    object _7865 = NOVALUE; // 14253 7865
// skipping _7864  name type: 0
    object _7863 = NOVALUE; // 14249 7863
// skipping _7862  name type: 0
    object _7861 = NOVALUE; // 14245 7861
// skipping _7860  name type: 0
    object _7859 = NOVALUE; // 14241 7859
    object _7858 = NOVALUE; // 14240 7858
    object _7857 = NOVALUE; // 14239 7857
    object _7856 = NOVALUE; // 14237 7856
    object _7855 = NOVALUE; // 14236 7855
// skipping _7854  name type: 0
    object _7853 = NOVALUE; // 14232 7853
// skipping _7852  name type: 0
    object _7851 = NOVALUE; // 14228 7851
    object _7850 = NOVALUE; // 14227 7850
// skipping _7847  name type: 0
    object _7846 = NOVALUE; // 14218 7846
// skipping _7841  name type: 0
    object _7840 = NOVALUE; // 14210 7840
    object _7838 = NOVALUE; // 14208 7838
// skipping _7837  name type: 0
// skipping _7836  name type: 0
    object _7832 = NOVALUE; // 14199 7832
// skipping _7831  name type: 0
    object _7830 = NOVALUE; // 14196 7830
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_eudir pc: 1 op: STARTLINE (58)

    /** common.e:82		if sequence(eudir) then*/
    // SubProg get_eudir pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 5 op: IS_A_SEQUENCE (68)
    _7830 = IS_SEQUENCE(_35eudir_14182);
    // SubProg get_eudir pc: 8 op: IF (20)
    if (_7830 == 0)
    {
        _7830 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _7830 = NOVALUE;
    }
    // SubProg get_eudir pc: 11 op: STARTLINE (58)

    /** common.e:83			return eudir*/
    // SubProg get_eudir pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 15 op: RETURNF (28)
    Ref(_35eudir_14182);

// Exiting block BLOCK: get_eudir

// block var possible_paths_14200
    DeRef(_possible_paths_14200);

// block var home_14205
    DeRefi(_home_14205);
    return _35eudir_14182;
    // SubProg get_eudir pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 14193 op: 159
    // SubProg get_eudir pc: 20 op: STARTLINE (58)

    /** common.e:86		eudir = getenv("EUDIR")*/
    // SubProg get_eudir pc: 22 op: GETENV (91)
    DeRef(_35eudir_14182);
    _35eudir_14182 = EGetEnv(_4479);
    // SubProg get_eudir pc: 25 op: STARTLINE (58)

    /** common.e:87		if sequence(eudir) then*/
    // SubProg get_eudir pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 29 op: IS_A_SEQUENCE (68)
    _7832 = IS_SEQUENCE(_35eudir_14182);
    // SubProg get_eudir pc: 32 op: IF (20)
    if (_7832 == 0)
    {
        _7832 = NOVALUE;
        goto L2; // [32] 44
    }
    else{
        _7832 = NOVALUE;
    }
    // SubProg get_eudir pc: 35 op: STARTLINE (58)

    /** common.e:88			return eudir*/
    // SubProg get_eudir pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 39 op: RETURNF (28)
    Ref(_35eudir_14182);

// Exiting block BLOCK: get_eudir

// block var possible_paths_14200
    DeRef(_possible_paths_14200);

// block var home_14205
    DeRefi(_home_14205);
    return _35eudir_14182;
    // SubProg get_eudir pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 14193 op: 159
    // SubProg get_eudir pc: 44 op: STARTLINE (58)

    /** common.e:91		ifdef UNIX then*/
    // SubProg get_eudir pc: 46 op: STARTLINE (58)

    /** common.e:92			sequence possible_paths = {*/
    // SubProg get_eudir pc: 48 op: RIGHT_BRACE_N (31)
    _0 = _possible_paths_14200;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7833);
    ((intptr_t*)_2)[1] = _7833;
    RefDS(_7834);
    ((intptr_t*)_2)[2] = _7834;
    RefDS(_7835);
    ((intptr_t*)_2)[3] = _7835;
    _possible_paths_14200 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg get_eudir pc: 54 op: STARTLINE (58)

    /** common.e:97			object home = getenv("HOME")*/
    // SubProg get_eudir pc: 56 op: GETENV (91)
    DeRefi(_home_14205);
    _home_14205 = EGetEnv(_4125);
    // SubProg get_eudir pc: 59 op: STARTLINE (58)

    /** common.e:98			if sequence(home) then*/
    // SubProg get_eudir pc: 61 op: IS_A_SEQUENCE (68)
    _7838 = IS_SEQUENCE(_home_14205);
    // SubProg get_eudir pc: 64 op: IF (20)
    if (_7838 == 0)
    {
        _7838 = NOVALUE;
        goto L3; // [64] 78
    }
    else{
        _7838 = NOVALUE;
    }
    // SubProg get_eudir pc: 67 op: STARTLINE (58)

    /** common.e:99				possible_paths = append(possible_paths, home & "/euphoria")*/
    // SubProg get_eudir pc: 69 op: CONCAT (15)
    if (IS_SEQUENCE(_home_14205) && IS_ATOM(_7839)) {
    }
    else if (IS_ATOM(_home_14205) && IS_SEQUENCE(_7839)) {
        Ref(_home_14205);
        Prepend(&_7840, _7839, _home_14205);
    }
    else {
        Concat((object_ptr)&_7840, _home_14205, _7839);
    }
    // SubProg get_eudir pc: 73 op: APPEND (35)
    RefDS(_7840);
    Append(&_possible_paths_14200, _possible_paths_14200, _7840);
    DeRefDS(_7840);
    _7840 = NOVALUE;
    // SubProg get_eudir pc: 77 op: NOP1 (159)
L3: // addr: 78 pc: 77 sub: 14193 op: 159
    // SubProg get_eudir pc: 78 op: STARTLINE (58)

    /** common.e:118		for i = 1 to length(possible_paths) do*/
    // SubProg get_eudir pc: 80 op: PRIVATE_INIT_CHECK (30)
    // SubProg get_eudir pc: 82 op: LENGTH (42)
    if (IS_SEQUENCE(_possible_paths_14200)){
            _7846 = SEQ_PTR(_possible_paths_14200)->length;
    }
    else {
        _7846 = 1;
    }
    // SubProg get_eudir pc: 85 op: FOR_I (125)
    {
        object _i_14217;
        _i_14217 = 1;
L4: // addr: 92 pc: 85 sub: 14193 op: 125
        if (_i_14217 > _7846){
            goto L5; // [85] 144
        }
        // SubProg get_eudir pc: 92 op: STARTLINE (58)

        /** common.e:119			sequence possible_path = possible_paths[i]*/
        // SubProg get_eudir pc: 94 op: RHS_SUBS (25)
        DeRef(_possible_path_14219);
        _2 = (object)SEQ_PTR(_possible_paths_14200);
        _possible_path_14219 = (object)*(((s1_ptr)_2)->base + _i_14217);
        RefDS(_possible_path_14219);
        // SubProg get_eudir pc: 98 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 100 op: STARTLINE (58)

        /** common.e:121			if file_exists(possible_path & SLASH & "include" & SLASH & "euphoria.h") then*/
        // SubProg get_eudir pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 104 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 106 op: CONCAT_N (157)
        {
            object concat_list[5];

            concat_list[0] = _7849;
            concat_list[1] = 47;
            concat_list[2] = _7848;
            concat_list[3] = 47;
            concat_list[4] = _possible_path_14219;
            Concat_N((object_ptr)&_7850, concat_list, 5);
        }
        // SubProg get_eudir pc: 114 op: PROC (27)
        _7851 = _18file_exists(_7850);
        _7850 = NOVALUE;
        // SubProg get_eudir pc: 118 op: IF (20)
        if (_7851 == 0) {
            DeRef(_7851);
            _7851 = NOVALUE;
            goto L6; // [118] 135
        }
        else {
            if (!IS_ATOM_INT(_7851) && DBL_PTR(_7851)->dbl == 0.0){
                DeRef(_7851);
                _7851 = NOVALUE;
                goto L6; // [118] 135
            }
            DeRef(_7851);
            _7851 = NOVALUE;
        }
        DeRef(_7851);
        _7851 = NOVALUE;
        // SubProg get_eudir pc: 121 op: STARTLINE (58)

        /** common.e:122				eudir = possible_path*/
        // SubProg get_eudir pc: 123 op: ASSIGN (18)
        RefDS(_possible_path_14219);
        DeRef(_35eudir_14182);
        _35eudir_14182 = _possible_path_14219;
        // SubProg get_eudir pc: 126 op: STARTLINE (58)

        /** common.e:123				return eudir*/
        // SubProg get_eudir pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 130 op: RETURNF (28)
        RefDS(_35eudir_14182);

// Exiting block BLOCK: FOR-

// block var possible_path_14219
        DeRefDS(_possible_path_14219);

// Exiting block BLOCK: get_eudir

// block var possible_paths_14200
        DeRefDS(_possible_paths_14200);

// block var home_14205
        DeRefi(_home_14205);
        return _35eudir_14182;
        // SubProg get_eudir pc: 134 op: NOP1 (159)
L6: // addr: 135 pc: 134 sub: 14193 op: 159
        // SubProg get_eudir pc: 135 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_14219
        DeRef(_possible_path_14219);
        _possible_path_14219 = NOVALUE;
        // SubProg get_eudir pc: 137 op: STARTLINE (58)

        /** common.e:125		end for*/
        // SubProg get_eudir pc: 139 op: ENDFOR_INT_UP1 (54)
        _i_14217 = _i_14217 + 1;
        goto L4; // [139] 92
L5: // addr: 144 pc: 139 sub: 14193 op: 54
        ;
    }
    // SubProg get_eudir pc: 144 op: STARTLINE (58)

    /** common.e:127		possible_paths = include_paths(0)*/
    // SubProg get_eudir pc: 146 op: RIGHT_BRACE_N (31)
    _0 = _possible_paths_14200;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_4506);
    ((intptr_t*)_2)[1] = _4506;
    RefDS(_4505);
    ((intptr_t*)_2)[2] = _4505;
    RefDS(_4504);
    ((intptr_t*)_2)[3] = _4504;
    RefDS(_4503);
    ((intptr_t*)_2)[4] = _4503;
    _possible_paths_14200 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg get_eudir pc: 153 op: STARTLINE (58)

    /** common.e:128		for i = 1 to length(possible_paths) do*/
    // SubProg get_eudir pc: 155 op: LENGTH (42)
    // Known sequence length:
    _7853 = 4;
    // SubProg get_eudir pc: 158 op: FOR_I (125)
    {
        object _i_14231;
        _i_14231 = 1;
L7: // addr: 165 pc: 158 sub: 14193 op: 125
        if (_i_14231 > 4){
            goto L8; // [158] 283
        }
        // SubProg get_eudir pc: 165 op: STARTLINE (58)

        /** common.e:129			sequence possible_path = possible_paths[i]*/
        // SubProg get_eudir pc: 167 op: RHS_SUBS (25)
        DeRef(_possible_path_14233);
        _2 = (object)SEQ_PTR(_possible_paths_14200);
        _possible_path_14233 = (object)*(((s1_ptr)_2)->base + _i_14231);
        RefDS(_possible_path_14233);
        // SubProg get_eudir pc: 171 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 173 op: STARTLINE (58)

        /** common.e:130			if equal(possible_path[$], SLASH) then*/
        // SubProg get_eudir pc: 175 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_14233)){
                _7855 = SEQ_PTR(_possible_path_14233)->length;
        }
        else {
            _7855 = 1;
        }
        // SubProg get_eudir pc: 178 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_possible_path_14233);
        _7856 = (object)*(((s1_ptr)_2)->base + _7855);
        // SubProg get_eudir pc: 182 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 184 op: EQUAL (153)
        if (_7856 == 47)
        _7857 = 1;
        else if (IS_ATOM_INT(_7856) && IS_ATOM_INT(47))
        _7857 = 0;
        else
        _7857 = (compare(_7856, 47) == 0);
        _7856 = NOVALUE;
        // SubProg get_eudir pc: 188 op: IF (20)
        if (_7857 == 0)
        {
            _7857 = NOVALUE;
            goto L9; // [188] 206
        }
        else{
            _7857 = NOVALUE;
        }
        // SubProg get_eudir pc: 191 op: STARTLINE (58)

        /** common.e:131				possible_path = possible_path[1..$-1]*/
        // SubProg get_eudir pc: 193 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_14233)){
                _7858 = SEQ_PTR(_possible_path_14233)->length;
        }
        else {
            _7858 = 1;
        }
        // SubProg get_eudir pc: 196 op: MINUS (10)
        _7859 = _7858 - 1;
        _7858 = NOVALUE;
        // SubProg get_eudir pc: 200 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_possible_path_14233;
        RHS_Slice(_possible_path_14233, 1, _7859);
        // SubProg get_eudir pc: 205 op: NOP1 (159)
L9: // addr: 206 pc: 205 sub: 14193 op: 159
        // SubProg get_eudir pc: 206 op: STARTLINE (58)

        /** common.e:134			if not ends("include", possible_path) then*/
        // SubProg get_eudir pc: 208 op: PROC (27)
        RefDS(_7848);
        RefDS(_possible_path_14233);
        _7861 = _17ends(_7848, _possible_path_14233);
        // SubProg get_eudir pc: 213 op: NOT_IFW (108)
        if (IS_ATOM_INT(_7861)) {
            if (_7861 != 0){
                DeRef(_7861);
                _7861 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        else {
            if (DBL_PTR(_7861)->dbl != 0.0){
                DeRef(_7861);
                _7861 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        DeRef(_7861);
        _7861 = NOVALUE;
        // SubProg get_eudir pc: 216 op: STARTLINE (58)

        /** common.e:135				continue*/
        // SubProg get_eudir pc: 218 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_14233
        DeRefDS(_possible_path_14233);
        _possible_path_14233 = NOVALUE;

// block var file_check_14247
        DeRef(_file_check_14247);
        _file_check_14247 = NOVALUE;
        // SubProg get_eudir pc: 220 op: ELSE (23)
        goto LB; // [220] 278
        // SubProg get_eudir pc: 222 op: NOP1 (159)
LA: // addr: 223 pc: 222 sub: 14193 op: 159
        // SubProg get_eudir pc: 223 op: STARTLINE (58)

        /** common.e:138			sequence file_check = possible_path*/
        // SubProg get_eudir pc: 225 op: ASSIGN (18)
        RefDS(_possible_path_14233);
        DeRef(_file_check_14247);
        _file_check_14247 = _possible_path_14233;
        // SubProg get_eudir pc: 228 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 230 op: STARTLINE (58)

        /** common.e:139			file_check &= SLASH & "euphoria.h"*/
        // SubProg get_eudir pc: 232 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 234 op: CONCAT (15)
        Prepend(&_7863, _7849, 47);
        // SubProg get_eudir pc: 238 op: CONCAT (15)
        Concat((object_ptr)&_file_check_14247, _file_check_14247, _7863);
        DeRefDS(_7863);
        _7863 = NOVALUE;
        // SubProg get_eudir pc: 242 op: STARTLINE (58)

        /** common.e:141			if file_exists(file_check) then*/
        // SubProg get_eudir pc: 244 op: PROC (27)
        RefDS(_file_check_14247);
        _7865 = _18file_exists(_file_check_14247);
        // SubProg get_eudir pc: 248 op: IF (20)
        if (_7865 == 0) {
            DeRef(_7865);
            _7865 = NOVALUE;
            goto LC; // [248] 274
        }
        else {
            if (!IS_ATOM_INT(_7865) && DBL_PTR(_7865)->dbl == 0.0){
                DeRef(_7865);
                _7865 = NOVALUE;
                goto LC; // [248] 274
            }
            DeRef(_7865);
            _7865 = NOVALUE;
        }
        DeRef(_7865);
        _7865 = NOVALUE;
        // SubProg get_eudir pc: 251 op: STARTLINE (58)

        /** common.e:142				eudir = possible_path[1..$-8] -- strip SLASH & "include"*/
        // SubProg get_eudir pc: 253 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_14233)){
                _7866 = SEQ_PTR(_possible_path_14233)->length;
        }
        else {
            _7866 = 1;
        }
        // SubProg get_eudir pc: 256 op: MINUS (10)
        _7867 = _7866 - 8;
        _7866 = NOVALUE;
        // SubProg get_eudir pc: 260 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_35eudir_14182;
        RHS_Slice(_possible_path_14233, 1, _7867);
        // SubProg get_eudir pc: 265 op: STARTLINE (58)

        /** common.e:143				return eudir*/
        // SubProg get_eudir pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 269 op: RETURNF (28)
        RefDS(_35eudir_14182);

// Exiting block BLOCK: FOR-

// block var possible_path_14233
        DeRefDS(_possible_path_14233);

// block var file_check_14247
        DeRefDS(_file_check_14247);

// Exiting block BLOCK: get_eudir

// block var possible_paths_14200
        DeRef(_possible_paths_14200);

// block var home_14205
        DeRefi(_home_14205);
        DeRef(_7859);
        _7859 = NOVALUE;
        _7867 = NOVALUE;
        return _35eudir_14182;
        // SubProg get_eudir pc: 273 op: NOP1 (159)
LC: // addr: 274 pc: 273 sub: 14193 op: 159
        // SubProg get_eudir pc: 274 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_14233
        DeRef(_possible_path_14233);
        _possible_path_14233 = NOVALUE;

// block var file_check_14247
        DeRef(_file_check_14247);
        _file_check_14247 = NOVALUE;
        // SubProg get_eudir pc: 276 op: STARTLINE (58)

        /** common.e:145		end for*/
        // SubProg get_eudir pc: 278 op: ENDFOR_INT_UP1 (54)
LB: // addr: 278 pc: 278 sub: 14193 op: 54
        _i_14231 = _i_14231 + 1;
        goto L7; // [278] 165
L8: // addr: 283 pc: 278 sub: 14193 op: 54
        ;
    }
    // SubProg get_eudir pc: 283 op: STARTLINE (58)

    /** common.e:147		return ""*/
    // SubProg get_eudir pc: 285 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_eudir

// block var possible_paths_14200
    DeRef(_possible_paths_14200);

// block var home_14205
    DeRefi(_home_14205);
    DeRef(_7859);
    _7859 = NOVALUE;
    DeRef(_7867);
    _7867 = NOVALUE;
    return _5;
    // SubProg get_eudir pc: 289 op: BADRETURNF (43)
    ;
}


void _35set_eudir(object _new_eudir_14259)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_eudir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_eudir pc: 3 op: STARTLINE (58)

    /** common.e:151		eudir = new_eudir*/
    // SubProg set_eudir pc: 5 op: ASSIGN (18)
    RefDS(_new_eudir_14259);
    DeRef(_35eudir_14182);
    _35eudir_14182 = _new_eudir_14259;
    // SubProg set_eudir pc: 8 op: STARTLINE (58)

    /** common.e:152		cmdline_eudir = 1*/
    // SubProg set_eudir pc: 10 op: ASSIGN_I (113)
    _35cmdline_eudir_14183 = 1;
    // SubProg set_eudir pc: 13 op: STARTLINE (58)

    /** common.e:153	end procedure*/
    // SubProg set_eudir pc: 15 op: RETURNP (29)

// Exiting block BLOCK: set_eudir

// block var new_eudir_14259
    DeRefDS(_new_eudir_14259);
    return;
    // SubProg set_eudir pc: 18 op: BADRETURNF (43)
    ;
}


object _35is_eudir_from_cmdline()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_eudir_from_cmdline pc: 1 op: STARTLINE (58)

    /** common.e:156		return cmdline_eudir*/
    // SubProg is_eudir_from_cmdline pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_eudir_from_cmdline pc: 5 op: RETURNF (28)

// Exiting block BLOCK: is_eudir_from_cmdline
    return _35cmdline_eudir_14183;
    // SubProg is_eudir_from_cmdline pc: 9 op: BADRETURNF (43)
    ;
}



// 0x0EC4042E
