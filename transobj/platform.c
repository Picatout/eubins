// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _41host_platform()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg host_platform pc: 1 op: STARTLINE (58)

    /** platform.e:113		return ihost_platform*/
    // SubProg host_platform pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg host_platform pc: 5 op: RETURNF (28)

// Exiting block BLOCK: host_platform
    return _41ihost_platform_21235;
    // SubProg host_platform pc: 9 op: BADRETURNF (43)
    ;
}


void _41set_host_platform(object _plat_21242)
{
// skipping _12137  name type: 0
// skipping _12136  name type: 0
// skipping _12135  name type: 0
// skipping _12134  name type: 0
// skipping _12133  name type: 0
// skipping _12132  name type: 0
// skipping _12131  name type: 0
    object _12130 = NOVALUE; // 21244 12130
// skipping _12129  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_host_platform pc: 1 op: STARTLINE (58)

    /** platform.e:119		ihost_platform = floor(plat)*/
    // SubProg set_host_platform pc: 3 op: FLOOR (83)
    _41ihost_platform_21235 = e_floor(_plat_21242);
    // SubProg set_host_platform pc: 6 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 8 op: STARTLINE (58)

    /** platform.e:121		TUNIX    = (find(ihost_platform, unices) != 0) */
    // SubProg set_host_platform pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 14 op: FIND_FROM (176)
    _12130 = find_from(_41ihost_platform_21235, _41unices_21238, 1);
    // SubProg set_host_platform pc: 19 op: NOTEQ (4)
    _41TUNIX_21214 = (_12130 != 0);
    _12130 = NOVALUE;
    // SubProg set_host_platform pc: 23 op: STARTLINE (58)

    /** platform.e:122		TWINDOWS = (ihost_platform = WIN32)*/
    // SubProg set_host_platform pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 29 op: EQUALS (3)
    _41TWINDOWS_21210 = (_41ihost_platform_21235 == 2);
    // SubProg set_host_platform pc: 33 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 35 op: STARTLINE (58)

    /** platform.e:123		TBSD     = (ihost_platform = UFREEBSD)*/
    // SubProg set_host_platform pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 41 op: EQUALS (3)
    _41TBSD_21216 = (_41ihost_platform_21235 == 8);
    // SubProg set_host_platform pc: 45 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 47 op: STARTLINE (58)

    /** platform.e:124		TOSX     = (ihost_platform = UOSX)*/
    // SubProg set_host_platform pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 53 op: EQUALS (3)
    _41TOSX_21218 = (_41ihost_platform_21235 == 4);
    // SubProg set_host_platform pc: 57 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 59 op: STARTLINE (58)

    /** platform.e:125		TLINUX   = (ihost_platform = ULINUX)*/
    // SubProg set_host_platform pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 65 op: EQUALS (3)
    _41TLINUX_21212 = (_41ihost_platform_21235 == 3);
    // SubProg set_host_platform pc: 69 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 71 op: STARTLINE (58)

    /** platform.e:126		TOPENBSD = (ihost_platform = UOPENBSD)*/
    // SubProg set_host_platform pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 77 op: EQUALS (3)
    _41TOPENBSD_21220 = (_41ihost_platform_21235 == 6);
    // SubProg set_host_platform pc: 81 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 83 op: STARTLINE (58)

    /** platform.e:127		TNETBSD  = (ihost_platform = UNETBSD)*/
    // SubProg set_host_platform pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 89 op: EQUALS (3)
    _41TNETBSD_21222 = (_41ihost_platform_21235 == 7);
    // SubProg set_host_platform pc: 93 op: INTEGER_CHECK (96)
    // SubProg set_host_platform pc: 95 op: STARTLINE (58)

    /** platform.e:128		IUNIX    = TUNIX*/
    // SubProg set_host_platform pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 99 op: ASSIGN_I (113)
    _41IUNIX_21213 = _41TUNIX_21214;
    // SubProg set_host_platform pc: 102 op: STARTLINE (58)

    /** platform.e:129		IWINDOWS = TWINDOWS*/
    // SubProg set_host_platform pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 106 op: ASSIGN_I (113)
    _41IWINDOWS_21209 = _41TWINDOWS_21210;
    // SubProg set_host_platform pc: 109 op: STARTLINE (58)

    /** platform.e:130		IBSD     = TBSD*/
    // SubProg set_host_platform pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 113 op: ASSIGN_I (113)
    _41IBSD_21215 = _41TBSD_21216;
    // SubProg set_host_platform pc: 116 op: STARTLINE (58)

    /** platform.e:131		IOSX     = TOSX*/
    // SubProg set_host_platform pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 120 op: ASSIGN_I (113)
    _41IOSX_21217 = _41TOSX_21218;
    // SubProg set_host_platform pc: 123 op: STARTLINE (58)

    /** platform.e:132		ILINUX   = TLINUX*/
    // SubProg set_host_platform pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 127 op: ASSIGN_I (113)
    _41ILINUX_21211 = _41TLINUX_21212;
    // SubProg set_host_platform pc: 130 op: STARTLINE (58)

    /** platform.e:133		IOPENBSD = TOPENBSD*/
    // SubProg set_host_platform pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 134 op: ASSIGN_I (113)
    _41IOPENBSD_21219 = _41TOPENBSD_21220;
    // SubProg set_host_platform pc: 137 op: STARTLINE (58)

    /** platform.e:134		INETBSD  = TNETBSD*/
    // SubProg set_host_platform pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 141 op: ASSIGN_I (113)
    _41INETBSD_21221 = _41TNETBSD_21222;
    // SubProg set_host_platform pc: 144 op: STARTLINE (58)

    /** platform.e:136		if TUNIX then*/
    // SubProg set_host_platform pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg set_host_platform pc: 148 op: IF (20)
    if (_41TUNIX_21214 == 0)
    {
        goto L1; // [148] 161
    }
    else{
    }
    // SubProg set_host_platform pc: 151 op: STARTLINE (58)

    /** platform.e:137			HOSTNL = "\n"*/
    // SubProg set_host_platform pc: 153 op: ASSIGN (18)
    RefDS(_9916);
    DeRefi(_41HOSTNL_21232);
    _41HOSTNL_21232 = _9916;
    // SubProg set_host_platform pc: 156 op: SEQUENCE_CHECK (97)
    // SubProg set_host_platform pc: 158 op: ELSE (23)
    goto L2; // [158] 169
    // SubProg set_host_platform pc: 160 op: NOP1 (159)
L1: // addr: 161 pc: 160 sub: 21240 op: 159
    // SubProg set_host_platform pc: 161 op: STARTLINE (58)

    /** platform.e:139			HOSTNL = "\r\n"*/
    // SubProg set_host_platform pc: 163 op: ASSIGN (18)
    RefDS(_12127);
    DeRefi(_41HOSTNL_21232);
    _41HOSTNL_21232 = _12127;
    // SubProg set_host_platform pc: 166 op: SEQUENCE_CHECK (97)
    // SubProg set_host_platform pc: 168 op: NOP1 (159)
L2: // addr: 169 pc: 168 sub: 21240 op: 159
    // SubProg set_host_platform pc: 169 op: STARTLINE (58)

    /** platform.e:141	end procedure*/
    // SubProg set_host_platform pc: 171 op: RETURNP (29)

// Exiting block BLOCK: set_host_platform

// block var plat_21242
    return;
    // SubProg set_host_platform pc: 174 op: BADRETURNF (43)
    ;
}


void _41set_target_arch(object _arch_21257)
{
    object _12147 = NOVALUE; // 21276 12147
    object _12138 = NOVALUE; // 21259 12138
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_target_arch pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_target_arch pc: 3 op: STARTLINE (58)

    /** platform.e:144		IX86    = 0*/
    // SubProg set_target_arch pc: 5 op: ASSIGN_I (113)
    _41IX86_21223 = 0;
    // SubProg set_target_arch pc: 8 op: STARTLINE (58)

    /** platform.e:145		TX86    = 0*/
    // SubProg set_target_arch pc: 10 op: ASSIGN_I (113)
    _41TX86_21224 = 0;
    // SubProg set_target_arch pc: 13 op: STARTLINE (58)

    /** platform.e:146		IX86_64 = 0*/
    // SubProg set_target_arch pc: 15 op: ASSIGN_I (113)
    _41IX86_64_21225 = 0;
    // SubProg set_target_arch pc: 18 op: STARTLINE (58)

    /** platform.e:147		TX86_64 = 0*/
    // SubProg set_target_arch pc: 20 op: ASSIGN_I (113)
    _41TX86_64_21226 = 0;
    // SubProg set_target_arch pc: 23 op: STARTLINE (58)

    /** platform.e:148		IARM    = 0*/
    // SubProg set_target_arch pc: 25 op: ASSIGN_I (113)
    _41IARM_21227 = 0;
    // SubProg set_target_arch pc: 28 op: STARTLINE (58)

    /** platform.e:149		TARM    = 0*/
    // SubProg set_target_arch pc: 30 op: ASSIGN_I (113)
    _41TARM_21228 = 0;
    // SubProg set_target_arch pc: 33 op: STARTLINE (58)

    /** platform.e:150		switch upper( arch ) do*/
    // SubProg set_target_arch pc: 35 op: PROC (27)
    RefDS(_arch_21257);
    _12138 = _17upper(_arch_21257);
    // SubProg set_target_arch pc: 39 op: SWITCH (185)
    _1 = find(_12138, _12139);
    DeRef(_12138);
    _12138 = NOVALUE;
    switch ( _1 ){ 
        // SubProg set_target_arch pc: 44 op: STARTLINE (58)

        /** platform.e:151			case "X86", "IX86" then*/
        // SubProg set_target_arch pc: 46 op: CASE (186)
        case 1:
        // SubProg set_target_arch pc: 48 op: CASE (186)
        case 2:
        // SubProg set_target_arch pc: 50 op: STARTLINE (58)

        /** platform.e:152				IX86    = 1*/
        // SubProg set_target_arch pc: 52 op: ASSIGN_I (113)
        _41IX86_21223 = 1;
        // SubProg set_target_arch pc: 55 op: STARTLINE (58)

        /** platform.e:153				TX86    = 1*/
        // SubProg set_target_arch pc: 57 op: ASSIGN_I (113)
        _41TX86_21224 = 1;
        // SubProg set_target_arch pc: 60 op: STARTLINE (58)

        /** platform.e:154				TARGET_SIZEOF_POINTER = 4*/
        // SubProg set_target_arch pc: 62 op: ASSIGN (18)
        _36TARGET_SIZEOF_POINTER_16271 = 4;
        // SubProg set_target_arch pc: 65 op: INTEGER_CHECK (96)
        // SubProg set_target_arch pc: 67 op: ELSE (23)
        goto L1; // [67] 138
        // SubProg set_target_arch pc: 69 op: STARTLINE (58)

        /** platform.e:156			case "X86_64", "IX86_64" then*/
        // SubProg set_target_arch pc: 71 op: CASE (186)
        case 3:
        // SubProg set_target_arch pc: 73 op: CASE (186)
        case 4:
        // SubProg set_target_arch pc: 75 op: STARTLINE (58)

        /** platform.e:157				IX86_64 = 1*/
        // SubProg set_target_arch pc: 77 op: ASSIGN_I (113)
        _41IX86_64_21225 = 1;
        // SubProg set_target_arch pc: 80 op: STARTLINE (58)

        /** platform.e:158				TX86_64 = 1*/
        // SubProg set_target_arch pc: 82 op: ASSIGN_I (113)
        _41TX86_64_21226 = 1;
        // SubProg set_target_arch pc: 85 op: STARTLINE (58)

        /** platform.e:159				TARGET_SIZEOF_POINTER = 8*/
        // SubProg set_target_arch pc: 87 op: ASSIGN (18)
        _36TARGET_SIZEOF_POINTER_16271 = 8;
        // SubProg set_target_arch pc: 90 op: INTEGER_CHECK (96)
        // SubProg set_target_arch pc: 92 op: ELSE (23)
        goto L1; // [92] 138
        // SubProg set_target_arch pc: 94 op: STARTLINE (58)

        /** platform.e:161			case "ARM" then*/
        // SubProg set_target_arch pc: 96 op: CASE (186)
        case 5:
        // SubProg set_target_arch pc: 98 op: STARTLINE (58)

        /** platform.e:162				IARM = 1*/
        // SubProg set_target_arch pc: 100 op: ASSIGN_I (113)
        _41IARM_21227 = 1;
        // SubProg set_target_arch pc: 103 op: STARTLINE (58)

        /** platform.e:163				TARM = 1*/
        // SubProg set_target_arch pc: 105 op: ASSIGN_I (113)
        _41TARM_21228 = 1;
        // SubProg set_target_arch pc: 108 op: STARTLINE (58)

        /** platform.e:164				TARGET_SIZEOF_POINTER = 4*/
        // SubProg set_target_arch pc: 110 op: ASSIGN (18)
        _36TARGET_SIZEOF_POINTER_16271 = 4;
        // SubProg set_target_arch pc: 113 op: INTEGER_CHECK (96)
        // SubProg set_target_arch pc: 115 op: ELSE (23)
        goto L1; // [115] 138
        // SubProg set_target_arch pc: 117 op: STARTLINE (58)

        /** platform.e:166			case else*/
        // SubProg set_target_arch pc: 119 op: CASE (186)
        case 0:
        // SubProg set_target_arch pc: 121 op: STARTLINE (58)

        /** platform.e:167				ShowMsg( 2, 357, { arch, "X86, X86_64, ARM" } )*/
        // SubProg set_target_arch pc: 123 op: RIGHT_BRACE_2 (85)
        RefDS(_12146);
        RefDS(_arch_21257);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _arch_21257;
        ((intptr_t *)_2)[2] = _12146;
        _12147 = MAKE_SEQ(_1);
        // SubProg set_target_arch pc: 127 op: PROC (27)
        _42ShowMsg(2, 357, _12147, 1);
        _12147 = NOVALUE;
        // SubProg set_target_arch pc: 133 op: STARTLINE (58)

        /** platform.e:168				abort( 1 )*/
        // SubProg set_target_arch pc: 135 op: ABORT (126)
        UserCleanup(1);
        // SubProg set_target_arch pc: 137 op: NOPSWITCH (187)
    ;}L1: // addr: 138 pc: 137 sub: 21255 op: 187
    // SubProg set_target_arch pc: 138 op: STARTLINE (58)

    /** platform.e:170	end procedure*/
    // SubProg set_target_arch pc: 140 op: RETURNP (29)

// Exiting block BLOCK: set_target_arch

// block var arch_21257
    DeRefDS(_arch_21257);
    return;
    // SubProg set_target_arch pc: 143 op: BADRETURNF (43)
    ;
}


object _41GetPlatformDefines(object _for_translator_21279)
{
    object _local_defines_21280 = NOVALUE;
    object _lcmds_21290 = NOVALUE;
    object _fh_21292 = NOVALUE;
    object _sk_21312 = NOVALUE;
    object _12273 = NOVALUE; // 21448 12273
    object _12272 = NOVALUE; // 21447 12272
    object _12270 = NOVALUE; // 21445 12270
// skipping _12268  name type: 0
    object _12267 = NOVALUE; // 21442 12267
    object _12266 = NOVALUE; // 21441 12266
// skipping _12265  name type: 0
    object _12264 = NOVALUE; // 21439 12264
    object _12263 = NOVALUE; // 21438 12263
// skipping _12262  name type: 0
    object _12261 = NOVALUE; // 21435 12261
// skipping _12259  name type: 0
    object _12258 = NOVALUE; // 21431 12258
    object _12257 = NOVALUE; // 21430 12257
// skipping _12256  name type: 0
    object _12255 = NOVALUE; // 21428 12255
    object _12254 = NOVALUE; // 21427 12254
// skipping _12253  name type: 0
    object _12252 = NOVALUE; // 21424 12252
    object _12250 = NOVALUE; // 21422 12250
// skipping _12249  name type: 0
    object _12248 = NOVALUE; // 21420 12248
    object _12247 = NOVALUE; // 21419 12247
// skipping _12246  name type: 0
    object _12245 = NOVALUE; // 21416 12245
    object _12242 = NOVALUE; // 21413 12242
// skipping _12241  name type: 0
    object _12240 = NOVALUE; // 21411 12240
    object _12239 = NOVALUE; // 21410 12239
// skipping _12238  name type: 0
    object _12237 = NOVALUE; // 21407 12237
    object _12235 = NOVALUE; // 21405 12235
// skipping _12234  name type: 0
    object _12233 = NOVALUE; // 21403 12233
    object _12232 = NOVALUE; // 21402 12232
// skipping _12231  name type: 0
    object _12230 = NOVALUE; // 21399 12230
    object _12228 = NOVALUE; // 21397 12228
// skipping _12227  name type: 0
    object _12226 = NOVALUE; // 21395 12226
    object _12225 = NOVALUE; // 21394 12225
// skipping _12224  name type: 0
    object _12223 = NOVALUE; // 21391 12223
    object _12221 = NOVALUE; // 21389 12221
// skipping _12220  name type: 0
    object _12219 = NOVALUE; // 21387 12219
    object _12218 = NOVALUE; // 21386 12218
// skipping _12217  name type: 0
    object _12216 = NOVALUE; // 21383 12216
    object _12213 = NOVALUE; // 21380 12213
// skipping _12212  name type: 0
    object _12211 = NOVALUE; // 21378 12211
    object _12210 = NOVALUE; // 21377 12210
// skipping _12209  name type: 0
    object _12208 = NOVALUE; // 21374 12208
    object _12205 = NOVALUE; // 21371 12205
// skipping _12204  name type: 0
    object _12203 = NOVALUE; // 21369 12203
    object _12202 = NOVALUE; // 21368 12202
// skipping _12201  name type: 0
// skipping _12200  name type: 0
    object _12199 = NOVALUE; // 21363 12199
// skipping _12197  name type: 0
    object _12196 = NOVALUE; // 21359 12196
// skipping _12195  name type: 0
// skipping _12194  name type: 0
    object _12193 = NOVALUE; // 21355 12193
// skipping _12192  name type: 0
// skipping _12191  name type: 0
// skipping _12190  name type: 0
    object _12189 = NOVALUE; // 21348 12189
    object _12188 = NOVALUE; // 21347 12188
// skipping _12187  name type: 0
// skipping _12185  name type: 0
// skipping _12184  name type: 0
    object _12183 = NOVALUE; // 21337 12183
    object _12182 = NOVALUE; // 21336 12182
// skipping _12181  name type: 0
// skipping _12180  name type: 0
// skipping _12179  name type: 0
// skipping _12177  name type: 0
// skipping _12176  name type: 0
// skipping _12175  name type: 0
// skipping _12174  name type: 0
// skipping _12173  name type: 0
// skipping _12172  name type: 0
// skipping _12171  name type: 0
// skipping _12170  name type: 0
    object _12169 = NOVALUE; // 21309 12169
// skipping _12167  name type: 0
    object _12166 = NOVALUE; // 21305 12166
// skipping _12164  name type: 0
    object _12163 = NOVALUE; // 21302 12163
    object _12162 = NOVALUE; // 21301 12162
    object _12161 = NOVALUE; // 21300 12161
// skipping _12159  name type: 0
// skipping _12158  name type: 0
    object _12157 = NOVALUE; // 21293 12157
// skipping _12156  name type: 0
// skipping _12155  name type: 0
    object _12154 = NOVALUE; // 21288 12154
    object _12151 = NOVALUE; // 21285 12151
// skipping _12150  name type: 0
    object _12149 = NOVALUE; // 21283 12149
    object _12148 = NOVALUE; // 21282 12148
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetPlatformDefines pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetPlatformDefines pc: 3 op: STARTLINE (58)

    /** platform.e:173		sequence local_defines = {}*/
    // SubProg GetPlatformDefines pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_local_defines_21280);
    _local_defines_21280 = _5;
    // SubProg GetPlatformDefines pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg GetPlatformDefines pc: 10 op: STARTLINE (58)

    /** platform.e:175		if (IWINDOWS and not for_translator) or (TWINDOWS and for_translator) then*/
    // SubProg GetPlatformDefines pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 14 op: SC1_AND (141)
    if (_41IWINDOWS_21209 == 0) {
        _12148 = 0;
        goto L1; // [14] 25
    }
    // SubProg GetPlatformDefines pc: 18 op: NOT (7)
    _12149 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 21 op: SC2_AND (142)
    _12148 = (_12149 != 0);
    // SubProg GetPlatformDefines pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 25 op: SC1_OR_IF (147)
    if (_12148 != 0) {
        goto L2; // [25] 44
    }
    // SubProg GetPlatformDefines pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 31 op: SC1_AND (141)
    if (_41TWINDOWS_21210 == 0) {
        DeRef(_12151);
        _12151 = 0;
        goto L3; // [31] 39
    }
    // SubProg GetPlatformDefines pc: 35 op: SC2_AND (142)
    _12151 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 39 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 40 op: IF (20)
    if (_12151 == 0)
    {
        _12151 = NOVALUE;
        goto L4; // [40] 326
    }
    else{
        _12151 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 44 op: STARTLINE (58)

    /** platform.e:176			local_defines &= {"WINDOWS", "WIN32"}*/
    // SubProg GetPlatformDefines pc: 46 op: RIGHT_BRACE_2 (85)
    RefDS(_12153);
    RefDS(_12152);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _12152;
    ((intptr_t *)_2)[2] = _12153;
    _12154 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 50 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12154);
    DeRefDS(_12154);
    _12154 = NOVALUE;
    // SubProg GetPlatformDefines pc: 54 op: STARTLINE (58)

    /** platform.e:177			sequence lcmds = command_line()*/
    // SubProg GetPlatformDefines pc: 56 op: COMMAND_LINE (100)
    DeRef(_lcmds_21290);
    _lcmds_21290 = Command_Line();
    // SubProg GetPlatformDefines pc: 58 op: STARTLINE (58)

    /** platform.e:180			integer fh*/
    // SubProg GetPlatformDefines pc: 60 op: STARTLINE (58)

    /** platform.e:181			fh = open(lcmds[1], "rb")*/
    // SubProg GetPlatformDefines pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lcmds_21290);
    _12157 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg GetPlatformDefines pc: 66 op: OPEN (37)
    _fh_21292 = EOpen(_12157, _10236, 0);
    _12157 = NOVALUE;
    // SubProg GetPlatformDefines pc: 71 op: STARTLINE (58)

    /** platform.e:182			if fh = -1 then*/
    // SubProg GetPlatformDefines pc: 73 op: EQUALS_IFW_I (121)
    if (_fh_21292 != -1)
    goto L5; // [73] 123
    // SubProg GetPlatformDefines pc: 77 op: STARTLINE (58)

    /** platform.e:184	 			if match("euiw", lower(lcmds[1])) != 0 then*/
    // SubProg GetPlatformDefines pc: 79 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lcmds_21290);
    _12161 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg GetPlatformDefines pc: 83 op: PROC (27)
    RefDS(_12161);
    _12162 = _17lower(_12161);
    _12161 = NOVALUE;
    // SubProg GetPlatformDefines pc: 87 op: MATCH_FROM (177)
    _12163 = e_match_from(_12160, _12162, 1);
    DeRef(_12162);
    _12162 = NOVALUE;
    // SubProg GetPlatformDefines pc: 92 op: NOTEQ_IFW (105)
    if (_12163 == 0)
    goto L6; // [92] 109
    // SubProg GetPlatformDefines pc: 96 op: STARTLINE (58)

    /** platform.e:185	 				local_defines &= { "GUI" }*/
    // SubProg GetPlatformDefines pc: 98 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12165);
    ((intptr_t*)_2)[1] = _12165;
    _12166 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 102 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12166);
    DeRefDS(_12166);
    _12166 = NOVALUE;
    // SubProg GetPlatformDefines pc: 106 op: ELSE (23)
    goto L7; // [106] 321
    // SubProg GetPlatformDefines pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 109 op: STARTLINE (58)

    /** platform.e:187	 				local_defines &= { "CONSOLE" }*/
    // SubProg GetPlatformDefines pc: 111 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12168);
    ((intptr_t*)_2)[1] = _12168;
    _12169 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 115 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12169);
    DeRefDS(_12169);
    _12169 = NOVALUE;
    // SubProg GetPlatformDefines pc: 119 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 120 op: ELSE (23)
    goto L7; // [120] 321
    // SubProg GetPlatformDefines pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 123 op: STARTLINE (58)

    /** platform.e:190				atom sk*/
    // SubProg GetPlatformDefines pc: 125 op: STARTLINE (58)

    /** platform.e:191				sk = seek(fh, #18) -- Fixed location of relocation table.*/
    // SubProg GetPlatformDefines pc: 127 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8seek(_fh_21292, 24);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 132 op: STARTLINE (58)

    /** platform.e:192				sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 134 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8get_integer16(_fh_21292);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 138 op: STARTLINE (58)

    /** platform.e:193				if sk = #40 then*/
    // SubProg GetPlatformDefines pc: 140 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_21312, 64)){
        goto L8; // [140] 259
    }
    // SubProg GetPlatformDefines pc: 144 op: STARTLINE (58)

    /** platform.e:195					sk = seek(fh, #3C) -- Fixed location of COFF signature offset.*/
    // SubProg GetPlatformDefines pc: 146 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8seek(_fh_21292, 60);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 151 op: STARTLINE (58)

    /** platform.e:196					sk = get_integer32(fh)*/
    // SubProg GetPlatformDefines pc: 153 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8get_integer32(_fh_21292);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 157 op: STARTLINE (58)

    /** platform.e:197					sk = seek(fh, sk)*/
    // SubProg GetPlatformDefines pc: 159 op: PROC (27)
    Ref(_sk_21312);
    _0 = _sk_21312;
    _sk_21312 = _8seek(_fh_21292, _sk_21312);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 164 op: STARTLINE (58)

    /** platform.e:198					sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 166 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8get_integer16(_fh_21292);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 170 op: STARTLINE (58)

    /** platform.e:199					if sk = #4550 then -- "PE" in intel endian*/
    // SubProg GetPlatformDefines pc: 172 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_21312, 17744)){
        goto L9; // [172] 221
    }
    // SubProg GetPlatformDefines pc: 176 op: STARTLINE (58)

    /** platform.e:200						sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 178 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8get_integer16(_fh_21292);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 182 op: STARTLINE (58)

    /** platform.e:201						if sk = 0 then*/
    // SubProg GetPlatformDefines pc: 184 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_21312, 0)){
        goto LA; // [184] 212
    }
    // SubProg GetPlatformDefines pc: 188 op: STARTLINE (58)

    /** platform.e:203							sk = seek(fh, where(fh) + 88 )*/
    // SubProg GetPlatformDefines pc: 190 op: PROC (27)
    _12182 = _8where(_fh_21292);
    // SubProg GetPlatformDefines pc: 194 op: PLUS (11)
    if (IS_ATOM_INT(_12182)) {
        _12183 = _12182 + 88;
        if ((object)((uintptr_t)_12183 + (uintptr_t)HIGH_BITS) >= 0){
            _12183 = NewDouble((eudouble)_12183);
        }
    }
    else {
        _12183 = binary_op(PLUS, _12182, 88);
    }
    DeRef(_12182);
    _12182 = NOVALUE;
    // SubProg GetPlatformDefines pc: 198 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8seek(_fh_21292, _12183);
    DeRef(_0);
    _12183 = NOVALUE;
    // SubProg GetPlatformDefines pc: 203 op: STARTLINE (58)

    /** platform.e:204							sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 205 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8get_integer16(_fh_21292);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 209 op: ELSE (23)
    goto LB; // [209] 265
    // SubProg GetPlatformDefines pc: 211 op: NOP1 (159)
LA: // addr: 212 pc: 211 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 212 op: STARTLINE (58)

    /** platform.e:206							sk = 0	-- Don't know this format.*/
    // SubProg GetPlatformDefines pc: 214 op: ASSIGN (18)
    DeRef(_sk_21312);
    _sk_21312 = 0;
    // SubProg GetPlatformDefines pc: 217 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 218 op: ELSE (23)
    goto LB; // [218] 265
    // SubProg GetPlatformDefines pc: 220 op: NOP1 (159)
L9: // addr: 221 pc: 220 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 221 op: STARTLINE (58)

    /** platform.e:208					elsif sk = #454E then -- "NE" in intel endian*/
    // SubProg GetPlatformDefines pc: 223 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_21312, 17742)){
        goto LC; // [223] 250
    }
    // SubProg GetPlatformDefines pc: 227 op: STARTLINE (58)

    /** platform.e:210						sk = seek(fh, where(fh) + 54 )*/
    // SubProg GetPlatformDefines pc: 229 op: PROC (27)
    _12188 = _8where(_fh_21292);
    // SubProg GetPlatformDefines pc: 233 op: PLUS (11)
    if (IS_ATOM_INT(_12188)) {
        _12189 = _12188 + 54;
        if ((object)((uintptr_t)_12189 + (uintptr_t)HIGH_BITS) >= 0){
            _12189 = NewDouble((eudouble)_12189);
        }
    }
    else {
        _12189 = binary_op(PLUS, _12188, 54);
    }
    DeRef(_12188);
    _12188 = NOVALUE;
    // SubProg GetPlatformDefines pc: 237 op: PROC (27)
    _0 = _sk_21312;
    _sk_21312 = _8seek(_fh_21292, _12189);
    DeRef(_0);
    _12189 = NOVALUE;
    // SubProg GetPlatformDefines pc: 242 op: STARTLINE (58)

    /** platform.e:211						sk = getc(fh)*/
    // SubProg GetPlatformDefines pc: 244 op: GETC (33)
    DeRef(_sk_21312);
    if (_fh_21292 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_21292, EF_READ);
        last_r_file_no = _fh_21292;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _sk_21312 = getc((FILE*)xstdin);
        }
        else{
            _sk_21312 = getc(last_r_file_ptr);
        }
    }
    else{
        _sk_21312 = getc(last_r_file_ptr);
    }
    // SubProg GetPlatformDefines pc: 247 op: ELSE (23)
    goto LB; // [247] 265
    // SubProg GetPlatformDefines pc: 249 op: NOP1 (159)
LC: // addr: 250 pc: 249 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 250 op: STARTLINE (58)

    /** platform.e:213						sk = 0*/
    // SubProg GetPlatformDefines pc: 252 op: ASSIGN (18)
    DeRef(_sk_21312);
    _sk_21312 = 0;
    // SubProg GetPlatformDefines pc: 255 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 256 op: ELSE (23)
    goto LB; // [256] 265
    // SubProg GetPlatformDefines pc: 258 op: NOP1 (159)
L8: // addr: 259 pc: 258 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 259 op: STARTLINE (58)

    /** platform.e:216					sk = 0*/
    // SubProg GetPlatformDefines pc: 261 op: ASSIGN (18)
    DeRef(_sk_21312);
    _sk_21312 = 0;
    // SubProg GetPlatformDefines pc: 264 op: NOP1 (159)
LB: // addr: 265 pc: 264 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 265 op: STARTLINE (58)

    /** platform.e:218				if sk = 2 then*/
    // SubProg GetPlatformDefines pc: 267 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_21312, 2)){
        goto LD; // [267] 284
    }
    // SubProg GetPlatformDefines pc: 271 op: STARTLINE (58)

    /** platform.e:219					local_defines &= { "GUI" }*/
    // SubProg GetPlatformDefines pc: 273 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12165);
    ((intptr_t*)_2)[1] = _12165;
    _12193 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 277 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12193);
    DeRefDS(_12193);
    _12193 = NOVALUE;
    // SubProg GetPlatformDefines pc: 281 op: ELSE (23)
    goto LE; // [281] 314
    // SubProg GetPlatformDefines pc: 283 op: NOP1 (159)
LD: // addr: 284 pc: 283 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 284 op: STARTLINE (58)

    /** platform.e:220				elsif sk = 3 then*/
    // SubProg GetPlatformDefines pc: 286 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_21312, 3)){
        goto LF; // [286] 303
    }
    // SubProg GetPlatformDefines pc: 290 op: STARTLINE (58)

    /** platform.e:221					local_defines &= { "CONSOLE" }*/
    // SubProg GetPlatformDefines pc: 292 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12168);
    ((intptr_t*)_2)[1] = _12168;
    _12196 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 296 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12196);
    DeRefDS(_12196);
    _12196 = NOVALUE;
    // SubProg GetPlatformDefines pc: 300 op: ELSE (23)
    goto LE; // [300] 314
    // SubProg GetPlatformDefines pc: 302 op: NOP1 (159)
LF: // addr: 303 pc: 302 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 303 op: STARTLINE (58)

    /** platform.e:223					local_defines &= { "UNKNOWN" }*/
    // SubProg GetPlatformDefines pc: 305 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12198);
    ((intptr_t*)_2)[1] = _12198;
    _12199 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 309 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12199);
    DeRefDS(_12199);
    _12199 = NOVALUE;
    // SubProg GetPlatformDefines pc: 313 op: NOP1 (159)
LE: // addr: 314 pc: 313 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 314 op: STARTLINE (58)

    /** platform.e:225				close(fh)*/
    // SubProg GetPlatformDefines pc: 316 op: CLOSE (86)
    EClose(_fh_21292);
    // SubProg GetPlatformDefines pc: 318 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sk_21312
    DeRef(_sk_21312);
    _sk_21312 = NOVALUE;
    // SubProg GetPlatformDefines pc: 320 op: NOP1 (159)
L7: // addr: 321 pc: 320 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var lcmds_21290
    DeRef(_lcmds_21290);
    _lcmds_21290 = NOVALUE;

// block var fh_21292
    // SubProg GetPlatformDefines pc: 323 op: ELSE (23)
    goto L10; // [323] 575
    // SubProg GetPlatformDefines pc: 325 op: NOP1 (159)
L4: // addr: 326 pc: 325 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 326 op: STARTLINE (58)

    /** platform.e:228			local_defines = append( local_defines, "CONSOLE" )*/
    // SubProg GetPlatformDefines pc: 328 op: APPEND (35)
    RefDS(_12168);
    Append(&_local_defines_21280, _local_defines_21280, _12168);
    // SubProg GetPlatformDefines pc: 332 op: STARTLINE (58)

    /** platform.e:229			if (ILINUX and not for_translator) or (TLINUX and for_translator) then*/
    // SubProg GetPlatformDefines pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 336 op: SC1_AND (141)
    if (_41ILINUX_21211 == 0) {
        _12202 = 0;
        goto L11; // [336] 347
    }
    // SubProg GetPlatformDefines pc: 340 op: NOT (7)
    _12203 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 343 op: SC2_AND (142)
    _12202 = (_12203 != 0);
    // SubProg GetPlatformDefines pc: 346 op: NOP1 (159)
L11: // addr: 347 pc: 346 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 347 op: SC1_OR_IF (147)
    if (_12202 != 0) {
        goto L12; // [347] 366
    }
    // SubProg GetPlatformDefines pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 353 op: SC1_AND (141)
    if (_41TLINUX_21212 == 0) {
        DeRef(_12205);
        _12205 = 0;
        goto L13; // [353] 361
    }
    // SubProg GetPlatformDefines pc: 357 op: SC2_AND (142)
    _12205 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 360 op: NOP1 (159)
L13: // addr: 361 pc: 360 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 361 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 362 op: IF (20)
    if (_12205 == 0)
    {
        _12205 = NOVALUE;
        goto L14; // [362] 379
    }
    else{
        _12205 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 365 op: NOP1 (159)
L12: // addr: 366 pc: 365 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 366 op: STARTLINE (58)

    /** platform.e:230				local_defines &= {"UNIX", "LINUX"}*/
    // SubProg GetPlatformDefines pc: 368 op: RIGHT_BRACE_2 (85)
    RefDS(_12207);
    RefDS(_12206);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _12206;
    ((intptr_t *)_2)[2] = _12207;
    _12208 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 372 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12208);
    DeRefDS(_12208);
    _12208 = NOVALUE;
    // SubProg GetPlatformDefines pc: 376 op: ELSE (23)
    goto L15; // [376] 574
    // SubProg GetPlatformDefines pc: 378 op: NOP1 (159)
L14: // addr: 379 pc: 378 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 379 op: STARTLINE (58)

    /** platform.e:231			elsif (IOSX and not for_translator) or (TOSX and for_translator) then*/
    // SubProg GetPlatformDefines pc: 381 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 383 op: SC1_AND (141)
    if (_41IOSX_21217 == 0) {
        _12210 = 0;
        goto L16; // [383] 394
    }
    // SubProg GetPlatformDefines pc: 387 op: NOT (7)
    _12211 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 390 op: SC2_AND (142)
    _12210 = (_12211 != 0);
    // SubProg GetPlatformDefines pc: 393 op: NOP1 (159)
L16: // addr: 394 pc: 393 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 394 op: SC1_OR_IF (147)
    if (_12210 != 0) {
        goto L17; // [394] 413
    }
    // SubProg GetPlatformDefines pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 400 op: SC1_AND (141)
    if (_41TOSX_21218 == 0) {
        DeRef(_12213);
        _12213 = 0;
        goto L18; // [400] 408
    }
    // SubProg GetPlatformDefines pc: 404 op: SC2_AND (142)
    _12213 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 407 op: NOP1 (159)
L18: // addr: 408 pc: 407 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 408 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 409 op: IF (20)
    if (_12213 == 0)
    {
        _12213 = NOVALUE;
        goto L19; // [409] 428
    }
    else{
        _12213 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 412 op: NOP1 (159)
L17: // addr: 413 pc: 412 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 413 op: STARTLINE (58)

    /** platform.e:232				local_defines &= {"UNIX", "BSD", "OSX"}*/
    // SubProg GetPlatformDefines pc: 415 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12206);
    ((intptr_t*)_2)[1] = _12206;
    RefDS(_12214);
    ((intptr_t*)_2)[2] = _12214;
    RefDS(_12215);
    ((intptr_t*)_2)[3] = _12215;
    _12216 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 421 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12216);
    DeRefDS(_12216);
    _12216 = NOVALUE;
    // SubProg GetPlatformDefines pc: 425 op: ELSE (23)
    goto L15; // [425] 574
    // SubProg GetPlatformDefines pc: 427 op: NOP1 (159)
L19: // addr: 428 pc: 427 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 428 op: STARTLINE (58)

    /** platform.e:233			elsif (IOPENBSD and not for_translator) or (TOPENBSD and for_translator) then*/
    // SubProg GetPlatformDefines pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 432 op: SC1_AND (141)
    if (_41IOPENBSD_21219 == 0) {
        _12218 = 0;
        goto L1A; // [432] 443
    }
    // SubProg GetPlatformDefines pc: 436 op: NOT (7)
    _12219 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 439 op: SC2_AND (142)
    _12218 = (_12219 != 0);
    // SubProg GetPlatformDefines pc: 442 op: NOP1 (159)
L1A: // addr: 443 pc: 442 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 443 op: SC1_OR_IF (147)
    if (_12218 != 0) {
        goto L1B; // [443] 462
    }
    // SubProg GetPlatformDefines pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 449 op: SC1_AND (141)
    if (_41TOPENBSD_21220 == 0) {
        DeRef(_12221);
        _12221 = 0;
        goto L1C; // [449] 457
    }
    // SubProg GetPlatformDefines pc: 453 op: SC2_AND (142)
    _12221 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 456 op: NOP1 (159)
L1C: // addr: 457 pc: 456 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 457 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 458 op: IF (20)
    if (_12221 == 0)
    {
        _12221 = NOVALUE;
        goto L1D; // [458] 477
    }
    else{
        _12221 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 461 op: NOP1 (159)
L1B: // addr: 462 pc: 461 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 462 op: STARTLINE (58)

    /** platform.e:234				local_defines &= { "UNIX", "BSD", "OPENBSD"}*/
    // SubProg GetPlatformDefines pc: 464 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12206);
    ((intptr_t*)_2)[1] = _12206;
    RefDS(_12214);
    ((intptr_t*)_2)[2] = _12214;
    RefDS(_12222);
    ((intptr_t*)_2)[3] = _12222;
    _12223 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 470 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12223);
    DeRefDS(_12223);
    _12223 = NOVALUE;
    // SubProg GetPlatformDefines pc: 474 op: ELSE (23)
    goto L15; // [474] 574
    // SubProg GetPlatformDefines pc: 476 op: NOP1 (159)
L1D: // addr: 477 pc: 476 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 477 op: STARTLINE (58)

    /** platform.e:235			elsif (INETBSD and not for_translator) or (TNETBSD and for_translator) then*/
    // SubProg GetPlatformDefines pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 481 op: SC1_AND (141)
    if (_41INETBSD_21221 == 0) {
        _12225 = 0;
        goto L1E; // [481] 492
    }
    // SubProg GetPlatformDefines pc: 485 op: NOT (7)
    _12226 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 488 op: SC2_AND (142)
    _12225 = (_12226 != 0);
    // SubProg GetPlatformDefines pc: 491 op: NOP1 (159)
L1E: // addr: 492 pc: 491 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 492 op: SC1_OR_IF (147)
    if (_12225 != 0) {
        goto L1F; // [492] 511
    }
    // SubProg GetPlatformDefines pc: 496 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 498 op: SC1_AND (141)
    if (_41TNETBSD_21222 == 0) {
        DeRef(_12228);
        _12228 = 0;
        goto L20; // [498] 506
    }
    // SubProg GetPlatformDefines pc: 502 op: SC2_AND (142)
    _12228 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 505 op: NOP1 (159)
L20: // addr: 506 pc: 505 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 506 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 507 op: IF (20)
    if (_12228 == 0)
    {
        _12228 = NOVALUE;
        goto L21; // [507] 526
    }
    else{
        _12228 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 510 op: NOP1 (159)
L1F: // addr: 511 pc: 510 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 511 op: STARTLINE (58)

    /** platform.e:236				local_defines &= { "UNIX", "BSD", "NETBSD"}*/
    // SubProg GetPlatformDefines pc: 513 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12206);
    ((intptr_t*)_2)[1] = _12206;
    RefDS(_12214);
    ((intptr_t*)_2)[2] = _12214;
    RefDS(_12229);
    ((intptr_t*)_2)[3] = _12229;
    _12230 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 519 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12230);
    DeRefDS(_12230);
    _12230 = NOVALUE;
    // SubProg GetPlatformDefines pc: 523 op: ELSE (23)
    goto L15; // [523] 574
    // SubProg GetPlatformDefines pc: 525 op: NOP1 (159)
L21: // addr: 526 pc: 525 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 526 op: STARTLINE (58)

    /** platform.e:237			elsif (IBSD and not for_translator) or (TBSD and for_translator) then*/
    // SubProg GetPlatformDefines pc: 528 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 530 op: SC1_AND (141)
    if (_41IBSD_21215 == 0) {
        _12232 = 0;
        goto L22; // [530] 541
    }
    // SubProg GetPlatformDefines pc: 534 op: NOT (7)
    _12233 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 537 op: SC2_AND (142)
    _12232 = (_12233 != 0);
    // SubProg GetPlatformDefines pc: 540 op: NOP1 (159)
L22: // addr: 541 pc: 540 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 541 op: SC1_OR_IF (147)
    if (_12232 != 0) {
        goto L23; // [541] 560
    }
    // SubProg GetPlatformDefines pc: 545 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 547 op: SC1_AND (141)
    if (_41TBSD_21216 == 0) {
        DeRef(_12235);
        _12235 = 0;
        goto L24; // [547] 555
    }
    // SubProg GetPlatformDefines pc: 551 op: SC2_AND (142)
    _12235 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 554 op: NOP1 (159)
L24: // addr: 555 pc: 554 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 555 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 556 op: IF (20)
    if (_12235 == 0)
    {
        _12235 = NOVALUE;
        goto L25; // [556] 573
    }
    else{
        _12235 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 559 op: NOP1 (159)
L23: // addr: 560 pc: 559 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 560 op: STARTLINE (58)

    /** platform.e:238				local_defines &= {"UNIX", "BSD", "FREEBSD"}*/
    // SubProg GetPlatformDefines pc: 562 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12206);
    ((intptr_t*)_2)[1] = _12206;
    RefDS(_12214);
    ((intptr_t*)_2)[2] = _12214;
    RefDS(_12236);
    ((intptr_t*)_2)[3] = _12236;
    _12237 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 568 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12237);
    DeRefDS(_12237);
    _12237 = NOVALUE;
    // SubProg GetPlatformDefines pc: 572 op: NOP1 (159)
L25: // addr: 573 pc: 572 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 573 op: NOP1 (159)
L15: // addr: 574 pc: 573 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 574 op: NOP1 (159)
L10: // addr: 575 pc: 574 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 575 op: STARTLINE (58)

    /** platform.e:242		if (IX86 and not for_translator) or (TX86 and for_translator) then*/
    // SubProg GetPlatformDefines pc: 577 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 579 op: SC1_AND (141)
    if (_41IX86_21223 == 0) {
        _12239 = 0;
        goto L26; // [579] 590
    }
    // SubProg GetPlatformDefines pc: 583 op: NOT (7)
    _12240 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 586 op: SC2_AND (142)
    _12239 = (_12240 != 0);
    // SubProg GetPlatformDefines pc: 589 op: NOP1 (159)
L26: // addr: 590 pc: 589 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 590 op: SC1_OR_IF (147)
    if (_12239 != 0) {
        goto L27; // [590] 609
    }
    // SubProg GetPlatformDefines pc: 594 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 596 op: SC1_AND (141)
    if (_41TX86_21224 == 0) {
        DeRef(_12242);
        _12242 = 0;
        goto L28; // [596] 604
    }
    // SubProg GetPlatformDefines pc: 600 op: SC2_AND (142)
    _12242 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 603 op: NOP1 (159)
L28: // addr: 604 pc: 603 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 604 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 605 op: IF (20)
    if (_12242 == 0)
    {
        _12242 = NOVALUE;
        goto L29; // [605] 624
    }
    else{
        _12242 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 608 op: NOP1 (159)
L27: // addr: 609 pc: 608 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 609 op: STARTLINE (58)

    /** platform.e:243			local_defines &= {"X86", "BITS32", "LONG32"}*/
    // SubProg GetPlatformDefines pc: 611 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12141);
    ((intptr_t*)_2)[1] = _12141;
    RefDS(_12243);
    ((intptr_t*)_2)[2] = _12243;
    RefDS(_12244);
    ((intptr_t*)_2)[3] = _12244;
    _12245 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 617 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12245);
    DeRefDS(_12245);
    _12245 = NOVALUE;
    // SubProg GetPlatformDefines pc: 621 op: ELSE (23)
    goto L2A; // [621] 777
    // SubProg GetPlatformDefines pc: 623 op: NOP1 (159)
L29: // addr: 624 pc: 623 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 624 op: STARTLINE (58)

    /** platform.e:245		elsif (IX86_64 and not for_translator) or (TX86_64 and for_translator) then*/
    // SubProg GetPlatformDefines pc: 626 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 628 op: SC1_AND (141)
    if (_41IX86_64_21225 == 0) {
        _12247 = 0;
        goto L2B; // [628] 639
    }
    // SubProg GetPlatformDefines pc: 632 op: NOT (7)
    _12248 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 635 op: SC2_AND (142)
    _12247 = (_12248 != 0);
    // SubProg GetPlatformDefines pc: 638 op: NOP1 (159)
L2B: // addr: 639 pc: 638 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 639 op: SC1_OR_IF (147)
    if (_12247 != 0) {
        goto L2C; // [639] 658
    }
    // SubProg GetPlatformDefines pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 645 op: SC1_AND (141)
    if (_41TX86_64_21226 == 0) {
        DeRef(_12250);
        _12250 = 0;
        goto L2D; // [645] 653
    }
    // SubProg GetPlatformDefines pc: 649 op: SC2_AND (142)
    _12250 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 652 op: NOP1 (159)
L2D: // addr: 653 pc: 652 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 653 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 654 op: IF (20)
    if (_12250 == 0)
    {
        _12250 = NOVALUE;
        goto L2E; // [654] 729
    }
    else{
        _12250 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 657 op: NOP1 (159)
L2C: // addr: 658 pc: 657 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 658 op: STARTLINE (58)

    /** platform.e:246			local_defines &= {"X86_64", "BITS64"}*/
    // SubProg GetPlatformDefines pc: 660 op: RIGHT_BRACE_2 (85)
    RefDS(_12251);
    RefDS(_12143);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _12143;
    ((intptr_t *)_2)[2] = _12251;
    _12252 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 664 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12252);
    DeRefDS(_12252);
    _12252 = NOVALUE;
    // SubProg GetPlatformDefines pc: 668 op: STARTLINE (58)

    /** platform.e:247			if (IWINDOWS and not for_translator) or (TWINDOWS and for_translator) then*/
    // SubProg GetPlatformDefines pc: 670 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 672 op: SC1_AND (141)
    if (_41IWINDOWS_21209 == 0) {
        _12254 = 0;
        goto L2F; // [672] 683
    }
    // SubProg GetPlatformDefines pc: 676 op: NOT (7)
    _12255 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 679 op: SC2_AND (142)
    _12254 = (_12255 != 0);
    // SubProg GetPlatformDefines pc: 682 op: NOP1 (159)
L2F: // addr: 683 pc: 682 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 683 op: SC1_OR_IF (147)
    if (_12254 != 0) {
        goto L30; // [683] 702
    }
    // SubProg GetPlatformDefines pc: 687 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 689 op: SC1_AND (141)
    if (_41TWINDOWS_21210 == 0) {
        DeRef(_12257);
        _12257 = 0;
        goto L31; // [689] 697
    }
    // SubProg GetPlatformDefines pc: 693 op: SC2_AND (142)
    _12257 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 696 op: NOP1 (159)
L31: // addr: 697 pc: 696 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 697 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 698 op: IF (20)
    if (_12257 == 0)
    {
        _12257 = NOVALUE;
        goto L32; // [698] 715
    }
    else{
        _12257 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 701 op: NOP1 (159)
L30: // addr: 702 pc: 701 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 702 op: STARTLINE (58)

    /** platform.e:248				local_defines &= {"LONG32"}*/
    // SubProg GetPlatformDefines pc: 704 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12244);
    ((intptr_t*)_2)[1] = _12244;
    _12258 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 708 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12258);
    DeRefDS(_12258);
    _12258 = NOVALUE;
    // SubProg GetPlatformDefines pc: 712 op: ELSE (23)
    goto L2A; // [712] 777
    // SubProg GetPlatformDefines pc: 714 op: NOP1 (159)
L32: // addr: 715 pc: 714 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 715 op: STARTLINE (58)

    /** platform.e:250				local_defines &= {"LONG64"}*/
    // SubProg GetPlatformDefines pc: 717 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12260);
    ((intptr_t*)_2)[1] = _12260;
    _12261 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 721 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12261);
    DeRefDS(_12261);
    _12261 = NOVALUE;
    // SubProg GetPlatformDefines pc: 725 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 726 op: ELSE (23)
    goto L2A; // [726] 777
    // SubProg GetPlatformDefines pc: 728 op: NOP1 (159)
L2E: // addr: 729 pc: 728 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 729 op: STARTLINE (58)

    /** platform.e:252		elsif (IARM and not for_translator) or (TARM and for_translator) then*/
    // SubProg GetPlatformDefines pc: 731 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 733 op: SC1_AND (141)
    if (_41IARM_21227 == 0) {
        _12263 = 0;
        goto L33; // [733] 744
    }
    // SubProg GetPlatformDefines pc: 737 op: NOT (7)
    _12264 = (_for_translator_21279 == 0);
    // SubProg GetPlatformDefines pc: 740 op: SC2_AND (142)
    _12263 = (_12264 != 0);
    // SubProg GetPlatformDefines pc: 743 op: NOP1 (159)
L33: // addr: 744 pc: 743 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 744 op: SC1_OR_IF (147)
    if (_12263 != 0) {
        goto L34; // [744] 763
    }
    // SubProg GetPlatformDefines pc: 748 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 750 op: SC1_AND (141)
    if (_41TARM_21228 == 0) {
        DeRef(_12266);
        _12266 = 0;
        goto L35; // [750] 758
    }
    // SubProg GetPlatformDefines pc: 754 op: SC2_AND (142)
    _12266 = (_for_translator_21279 != 0);
    // SubProg GetPlatformDefines pc: 757 op: NOP1 (159)
L35: // addr: 758 pc: 757 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 758 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 759 op: IF (20)
    if (_12266 == 0)
    {
        _12266 = NOVALUE;
        goto L36; // [759] 776
    }
    else{
        _12266 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 762 op: NOP1 (159)
L34: // addr: 763 pc: 762 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 763 op: STARTLINE (58)

    /** platform.e:253			local_defines &= {"ARM", "BITS32", "LONG32"}*/
    // SubProg GetPlatformDefines pc: 765 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12145);
    ((intptr_t*)_2)[1] = _12145;
    RefDS(_12243);
    ((intptr_t*)_2)[2] = _12243;
    RefDS(_12244);
    ((intptr_t*)_2)[3] = _12244;
    _12267 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 771 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_21280, _local_defines_21280, _12267);
    DeRefDS(_12267);
    _12267 = NOVALUE;
    // SubProg GetPlatformDefines pc: 775 op: NOP1 (159)
L36: // addr: 776 pc: 775 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 776 op: NOP1 (159)
L2A: // addr: 777 pc: 776 sub: 21277 op: 159
    // SubProg GetPlatformDefines pc: 777 op: STARTLINE (58)

    /** platform.e:258		return { "_PLAT_START" } & local_defines & { "_PLAT_STOP" }*/
    // SubProg GetPlatformDefines pc: 779 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12269);
    ((intptr_t*)_2)[1] = _12269;
    _12270 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 783 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12271);
    ((intptr_t*)_2)[1] = _12271;
    _12272 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 787 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _12272;
        concat_list[1] = _local_defines_21280;
        concat_list[2] = _12270;
        Concat_N((object_ptr)&_12273, concat_list, 3);
    }
    DeRefDS(_12272);
    _12272 = NOVALUE;
    DeRefDS(_12270);
    _12270 = NOVALUE;
    // SubProg GetPlatformDefines pc: 793 op: RETURNF (28)

// Exiting block BLOCK: GetPlatformDefines

// block var for_translator_21279

// block var local_defines_21280
    DeRefDS(_local_defines_21280);
    DeRef(_12233);
    _12233 = NOVALUE;
    DeRef(_12255);
    _12255 = NOVALUE;
    DeRef(_12203);
    _12203 = NOVALUE;
    DeRef(_12211);
    _12211 = NOVALUE;
    DeRef(_12248);
    _12248 = NOVALUE;
    DeRef(_12219);
    _12219 = NOVALUE;
    DeRef(_12149);
    _12149 = NOVALUE;
    DeRef(_12264);
    _12264 = NOVALUE;
    DeRef(_12226);
    _12226 = NOVALUE;
    DeRef(_12240);
    _12240 = NOVALUE;
    return _12273;
    // SubProg GetPlatformDefines pc: 797 op: BADRETURNF (43)
    ;
}



// 0x07AC58EC
