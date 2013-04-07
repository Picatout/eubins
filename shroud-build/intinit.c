// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _69intoptions()
{
    object _pause_msg_63980 = NOVALUE;
    object _opts_array_63990 = NOVALUE;
    object _opts_63995 = NOVALUE;
    object _opt_keys_64004 = NOVALUE;
    object _option_w_64006 = NOVALUE;
    object _key_64010 = NOVALUE;
    object _val_64012 = NOVALUE;
    object _31760 = NOVALUE;
    object _31758 = NOVALUE;
    object _31757 = NOVALUE;
    object _31756 = NOVALUE;
    object _31754 = NOVALUE;
    object _31753 = NOVALUE;
    object _31752 = NOVALUE;
    object _31751 = NOVALUE;
    object _31750 = NOVALUE;
    object _31749 = NOVALUE;
    object _31748 = NOVALUE;
    object _31743 = NOVALUE;
    object _31740 = NOVALUE;
    object _31738 = NOVALUE;
    object _0, _1, _2;
    

    /** intinit.e:43		sequence pause_msg = GetMsgText(278, 0)*/
    RefDS(_21928);
    _0 = _pause_msg_63980;
    _pause_msg_63980 = _44GetMsgText(278, 0, _21928);
    DeRef(_0);

    /** intinit.e:45		Argv = expand_config_options(Argv)*/
    RefDS(_39Argv_16826);
    _0 = _51expand_config_options(_39Argv_16826);
    DeRefDS(_39Argv_16826);
    _39Argv_16826 = _0;

    /** intinit.e:46		Argc = length(Argv)*/
    if (IS_SEQUENCE(_39Argv_16826)){
            _39Argc_16825 = SEQ_PTR(_39Argv_16826)->length;
    }
    else {
        _39Argc_16825 = 1;
    }

    /** intinit.e:48		sequence opts_array = sort( get_options() )*/
    _31738 = _51get_options();
    _0 = _opts_array_63990;
    _opts_array_63990 = _23sort(_31738, 1);
    DeRef(_0);
    _31738 = NOVALUE;

    /** intinit.e:50		m:map opts = cmd_parse( opts_array, */
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 4;
    ((intptr_t*)_2)[3] = 8;
    RefDS(_pause_msg_63980);
    ((intptr_t*)_2)[4] = _pause_msg_63980;
    _31740 = MAKE_SEQ(_1);
    RefDS(_opts_array_63990);
    RefDS(_39Argv_16826);
    _0 = _opts_63995;
    _opts_63995 = _28cmd_parse(_opts_array_63990, _31740, _39Argv_16826);
    DeRef(_0);
    _31740 = NOVALUE;

    /** intinit.e:53		handle_common_options(opts)*/
    Ref(_opts_63995);
    _51handle_common_options(_opts_63995);

    /** intinit.e:55		sequence opt_keys = map:keys(opts)*/
    Ref(_opts_63995);
    _0 = _opt_keys_64004;
    _opt_keys_64004 = _30keys(_opts_63995, 0);
    DeRef(_0);

    /** intinit.e:56		integer option_w = 0*/
    _option_w_64006 = 0;

    /** intinit.e:58		for idx = 1 to length(opt_keys) do*/
    if (IS_SEQUENCE(_opt_keys_64004)){
            _31743 = SEQ_PTR(_opt_keys_64004)->length;
    }
    else {
        _31743 = 1;
    }
    {
        object _idx_64008;
        _idx_64008 = 1;
L1: 
        if (_idx_64008 > _31743){
            goto L2; // [89] 204
        }

        /** intinit.e:59			sequence key = opt_keys[idx]*/
        DeRef(_key_64010);
        _2 = (object)SEQ_PTR(_opt_keys_64004);
        _key_64010 = (object)*(((s1_ptr)_2)->base + _idx_64008);
        Ref(_key_64010);

        /** intinit.e:60			object val = map:get(opts, key)*/
        Ref(_opts_63995);
        RefDS(_key_64010);
        _0 = _val_64012;
        _val_64012 = _30get(_opts_63995, _key_64010, 0);
        DeRef(_0);

        /** intinit.e:62			switch key do*/
        _1 = find(_key_64010, _31746);
        switch ( _1 ){ 

            /** intinit.e:63				case "coverage" then*/
            case 1:

            /** intinit.e:64					for i = 1 to length( val ) do*/
            if (IS_SEQUENCE(_val_64012)){
                    _31748 = SEQ_PTR(_val_64012)->length;
            }
            else {
                _31748 = 1;
            }
            {
                object _i_64018;
                _i_64018 = 1;
L3: 
                if (_i_64018 > _31748){
                    goto L4; // [128] 151
                }

                /** intinit.e:65						add_coverage( val[i] )*/
                _2 = (object)SEQ_PTR(_val_64012);
                _31749 = (object)*(((s1_ptr)_2)->base + _i_64018);
                Ref(_31749);
                _53add_coverage(_31749);
                _31749 = NOVALUE;

                /** intinit.e:66					end for*/
                _i_64018 = _i_64018 + 1;
                goto L3; // [146] 135
L4: 
                ;
            }
            goto L5; // [151] 195

            /** intinit.e:68				case "coverage-db" then*/
            case 2:

            /** intinit.e:69					coverage_db( val )*/
            Ref(_val_64012);
            _53coverage_db(_val_64012);
            goto L5; // [162] 195

            /** intinit.e:71				case "coverage-erase" then*/
            case 3:

            /** intinit.e:72					new_coverage_db()*/
            _53new_coverage_db();
            goto L5; // [172] 195

            /** intinit.e:74				case "coverage-exclude" then*/
            case 4:

            /** intinit.e:75					coverage_exclude( val )*/
            Ref(_val_64012);
            _53coverage_exclude(_val_64012);
            goto L5; // [183] 195

            /** intinit.e:77				case "debugger" then*/
            case 5:

            /** intinit.e:78					external_debugger = val*/
            Ref(_val_64012);
            DeRef(_69external_debugger_63977);
            _69external_debugger_63977 = _val_64012;
        ;}L5: 
        DeRef(_key_64010);
        _key_64010 = NOVALUE;
        DeRef(_val_64012);
        _val_64012 = NOVALUE;

        /** intinit.e:81		end for*/
        _idx_64008 = _idx_64008 + 1;
        goto L1; // [199] 96
L2: 
        ;
    }

    /** intinit.e:83		if length(m:get(opts, cmdline:EXTRAS)) = 0 and not repl then*/
    Ref(_opts_63995);
    RefDS(_28EXTRAS_14176);
    _31750 = _30get(_opts_63995, _28EXTRAS_14176, 0);
    if (IS_SEQUENCE(_31750)){
            _31751 = SEQ_PTR(_31750)->length;
    }
    else {
        _31751 = 1;
    }
    DeRef(_31750);
    _31750 = NOVALUE;
    _31752 = (_31751 == 0);
    _31751 = NOVALUE;
    if (_31752 == 0) {
        goto L6; // [221] 278
    }
    _31754 = (0 == 0);
    if (_31754 == 0)
    {
        DeRef(_31754);
        _31754 = NOVALUE;
        goto L6; // [231] 278
    }
    else{
        DeRef(_31754);
        _31754 = NOVALUE;
    }

    /** intinit.e:84			show_banner()*/
    _51show_banner();

    /** intinit.e:85			ShowMsg(2, 249)*/
    RefDS(_21928);
    _44ShowMsg(2, 249, _21928, 1);

    /** intinit.e:87			if not batch_job and not test_only then*/
    _31756 = (_39batch_job_16828 == 0);
    if (_31756 == 0) {
        goto L7; // [253] 273
    }
    _31758 = (_39test_only_16827 == 0);
    if (_31758 == 0)
    {
        DeRef(_31758);
        _31758 = NOVALUE;
        goto L7; // [263] 273
    }
    else{
        DeRef(_31758);
        _31758 = NOVALUE;
    }

    /** intinit.e:88				maybe_any_key(pause_msg)*/
    RefDS(_pause_msg_63980);
    _29maybe_any_key(_pause_msg_63980, 1);
L7: 

    /** intinit.e:91			abort(1)*/
    UserCleanup(1);
L6: 

    /** intinit.e:94		OpDefines &= { "EUI" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_31759);
    ((intptr_t*)_2)[1] = _31759;
    _31760 = MAKE_SEQ(_1);
    Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _31760);
    DeRefDS(_31760);
    _31760 = NOVALUE;

    /** intinit.e:96		finalize_command_line(opts)*/
    Ref(_opts_63995);
    _51finalize_command_line(_opts_63995);

    /** intinit.e:97	end procedure*/
    DeRef(_pause_msg_63980);
    DeRef(_opts_array_63990);
    DeRef(_opts_63995);
    DeRef(_opt_keys_64004);
    DeRef(_31752);
    _31752 = NOVALUE;
    DeRef(_31756);
    _31756 = NOVALUE;
    _31750 = NOVALUE;
    return;
    ;
}



// 0x578A6B7F
