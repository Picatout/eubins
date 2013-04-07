// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _28local_abort(object _lvl_14190)
{
    object _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195 = NOVALUE;
    object _7815 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:171		if length(pause_msg) != 0 then*/
    if (IS_SEQUENCE(_28pause_msg_14187)){
            _7815 = SEQ_PTR(_28pause_msg_14187)->length;
    }
    else {
        _7815 = 1;
    }
    if (_7815 == 0)
    goto L1; // [10] 45

    /** cmdline.e:172			console:maybe_any_key(pause_msg, 1)*/

    /** console.e:923		if not has_console() then*/

    /** console.e:59		return machine_func(M_HAS_CONSOLE, 0)*/
    DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195);
    _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195 = machine(99, 0);
    if (IS_ATOM_INT(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195)) {
        if (_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195 != 0){
            goto L2; // [27] 42
        }
    }
    else {
        if (DBL_PTR(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195)->dbl != 0.0){
            goto L2; // [27] 42
        }
    }

    /** console.e:924			any_key(prompt, con)*/
    RefDS(_28pause_msg_14187);
    _29any_key(_28pause_msg_14187, 1);

    /** console.e:926	end procedure*/
    goto L2; // [39] 42
L2: 
    DeRef(_has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195);
    _has_console_inlined_has_console_at_6_inlined_maybe_any_key_at_17_14195 = NOVALUE;
L1: 

    /** cmdline.e:175		abort(lvl)*/
    UserCleanup(_lvl_14190);

    /** cmdline.e:176	end procedure*/
    return;
    ;
}


void _28check_for_bad_combos(object _opts_14198, object _opt1_14199, object _opt2_14200, object _error_message_14201)
{
    object _msg_inlined_crash_at_38_14209 = NOVALUE;
    object _7820 = NOVALUE;
    object _7819 = NOVALUE;
    object _7818 = NOVALUE;
    object _7817 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:180		if find( opt1, opts[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_opts_14198);
    _7817 = (object)*(((s1_ptr)_2)->base + 4);
    _7818 = find_from(_opt1_14199, _7817, 1);
    _7817 = NOVALUE;
    if (_7818 == 0)
    {
        _7818 = NOVALUE;
        goto L1; // [20] 59
    }
    else{
        _7818 = NOVALUE;
    }

    /** cmdline.e:181			if find( opt2, opts[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_opts_14198);
    _7819 = (object)*(((s1_ptr)_2)->base + 4);
    _7820 = find_from(_opt2_14200, _7819, 1);
    _7819 = NOVALUE;
    if (_7820 == 0)
    {
        _7820 = NOVALUE;
        goto L2; // [34] 58
    }
    else{
        _7820 = NOVALUE;
    }

    /** cmdline.e:182				error:crash( error_message )*/

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_38_14209);
    _msg_inlined_crash_at_38_14209 = EPrintf(-9999999, _error_message_14201, _5);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_38_14209);

    /** error.e:53	end procedure*/
    goto L3; // [52] 55
L3: 
    DeRefi(_msg_inlined_crash_at_38_14209);
    _msg_inlined_crash_at_38_14209 = NOVALUE;
L2: 
L1: 

    /** cmdline.e:185	end procedure*/
    DeRefDS(_opts_14198);
    DeRefDSi(_error_message_14201);
    return;
    ;
}


object _28has_duplicate(object _opts_14212, object _opt_14213, object _name_type_14214, object _start_from_14215)
{
    object _opt_name_14219 = NOVALUE;
    object _7828 = NOVALUE;
    object _7827 = NOVALUE;
    object _7826 = NOVALUE;
    object _7825 = NOVALUE;
    object _7824 = NOVALUE;
    object _7822 = NOVALUE;
    object _7821 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:188		if sequence( opt[name_type] ) then*/
    _2 = (object)SEQ_PTR(_opt_14213);
    _7821 = (object)*(((s1_ptr)_2)->base + _name_type_14214);
    _7822 = IS_SEQUENCE(_7821);
    _7821 = NOVALUE;
    if (_7822 == 0)
    {
        _7822 = NOVALUE;
        goto L1; // [18] 77
    }
    else{
        _7822 = NOVALUE;
    }

    /** cmdline.e:189			sequence opt_name = opt[name_type]*/
    DeRef(_opt_name_14219);
    _2 = (object)SEQ_PTR(_opt_14213);
    _opt_name_14219 = (object)*(((s1_ptr)_2)->base + _name_type_14214);
    Ref(_opt_name_14219);

    /** cmdline.e:190			for i = start_from + 1 to length( opts ) do*/
    _7824 = _start_from_14215 + 1;
    if (IS_SEQUENCE(_opts_14212)){
            _7825 = SEQ_PTR(_opts_14212)->length;
    }
    else {
        _7825 = 1;
    }
    {
        object _i_14222;
        _i_14222 = _7824;
L2: 
        if (_i_14222 > _7825){
            goto L3; // [38] 76
        }

        /** cmdline.e:191				if equal( opt_name, opts[i][name_type] ) then*/
        _2 = (object)SEQ_PTR(_opts_14212);
        _7826 = (object)*(((s1_ptr)_2)->base + _i_14222);
        _2 = (object)SEQ_PTR(_7826);
        _7827 = (object)*(((s1_ptr)_2)->base + _name_type_14214);
        _7826 = NOVALUE;
        if (_opt_name_14219 == _7827)
        _7828 = 1;
        else if (IS_ATOM_INT(_opt_name_14219) && IS_ATOM_INT(_7827))
        _7828 = 0;
        else
        _7828 = (compare(_opt_name_14219, _7827) == 0);
        _7827 = NOVALUE;
        if (_7828 == 0)
        {
            _7828 = NOVALUE;
            goto L4; // [59] 69
        }
        else{
            _7828 = NOVALUE;
        }

        /** cmdline.e:192					return 1*/
        DeRefDS(_opt_name_14219);
        DeRefDS(_opts_14212);
        DeRefDS(_opt_14213);
        DeRef(_7824);
        _7824 = NOVALUE;
        return 1;
L4: 

        /** cmdline.e:194			end for*/
        _i_14222 = _i_14222 + 1;
        goto L2; // [71] 45
L3: 
        ;
    }
L1: 
    DeRef(_opt_name_14219);
    _opt_name_14219 = NOVALUE;

    /** cmdline.e:196		return 0*/
    DeRefDS(_opts_14212);
    DeRefDS(_opt_14213);
    DeRef(_7824);
    _7824 = NOVALUE;
    return 0;
    ;
}


void _28check_for_duplicates(object _opts_14231)
{
    object _opt_14235 = NOVALUE;
    object _msg_inlined_crash_at_49_14244 = NOVALUE;
    object _data_inlined_crash_at_46_14243 = NOVALUE;
    object _msg_inlined_crash_at_95_14252 = NOVALUE;
    object _data_inlined_crash_at_92_14251 = NOVALUE;
    object _7838 = NOVALUE;
    object _7837 = NOVALUE;
    object _7835 = NOVALUE;
    object _7834 = NOVALUE;
    object _7833 = NOVALUE;
    object _7831 = NOVALUE;
    object _7829 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:201		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14231)){
            _7829 = SEQ_PTR(_opts_14231)->length;
    }
    else {
        _7829 = 1;
    }
    {
        object _i_14233;
        _i_14233 = 1;
L1: 
        if (_i_14233 > _7829){
            goto L2; // [8] 125
        }

        /** cmdline.e:202			sequence opt*/

        /** cmdline.e:203			opt = opts[i]*/
        DeRef(_opt_14235);
        _2 = (object)SEQ_PTR(_opts_14231);
        _opt_14235 = (object)*(((s1_ptr)_2)->base + _i_14233);
        Ref(_opt_14235);

        /** cmdline.e:204			if has_duplicate( opts, opt, SHORTNAME, i ) then*/
        RefDS(_opts_14231);
        RefDS(_opt_14235);
        _7831 = _28has_duplicate(_opts_14231, _opt_14235, 1, _i_14233);
        if (_7831 == 0) {
            DeRef(_7831);
            _7831 = NOVALUE;
            goto L3; // [34] 71
        }
        else {
            if (!IS_ATOM_INT(_7831) && DBL_PTR(_7831)->dbl == 0.0){
                DeRef(_7831);
                _7831 = NOVALUE;
                goto L3; // [34] 71
            }
            DeRef(_7831);
            _7831 = NOVALUE;
        }
        DeRef(_7831);
        _7831 = NOVALUE;

        /** cmdline.e:206				error:crash("cmd_opts: Duplicate Short Names (%s) are not allowed in an option record.\n",*/
        _2 = (object)SEQ_PTR(_opt_14235);
        _7833 = (object)*(((s1_ptr)_2)->base + 1);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_7833);
        ((intptr_t*)_2)[1] = _7833;
        _7834 = MAKE_SEQ(_1);
        _7833 = NOVALUE;
        DeRef(_data_inlined_crash_at_46_14243);
        _data_inlined_crash_at_46_14243 = _7834;
        _7834 = NOVALUE;

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_49_14244);
        _msg_inlined_crash_at_49_14244 = EPrintf(-9999999, _7832, _data_inlined_crash_at_46_14243);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_49_14244);

        /** error.e:53	end procedure*/
        goto L4; // [63] 66
L4: 
        DeRef(_data_inlined_crash_at_46_14243);
        _data_inlined_crash_at_46_14243 = NOVALUE;
        DeRefi(_msg_inlined_crash_at_49_14244);
        _msg_inlined_crash_at_49_14244 = NOVALUE;
        goto L5; // [68] 116
L3: 

        /** cmdline.e:209			elsif has_duplicate( opts, opt, LONGNAME, i ) then*/
        RefDS(_opts_14231);
        RefDS(_opt_14235);
        _7835 = _28has_duplicate(_opts_14231, _opt_14235, 2, _i_14233);
        if (_7835 == 0) {
            DeRef(_7835);
            _7835 = NOVALUE;
            goto L6; // [80] 115
        }
        else {
            if (!IS_ATOM_INT(_7835) && DBL_PTR(_7835)->dbl == 0.0){
                DeRef(_7835);
                _7835 = NOVALUE;
                goto L6; // [80] 115
            }
            DeRef(_7835);
            _7835 = NOVALUE;
        }
        DeRef(_7835);
        _7835 = NOVALUE;

        /** cmdline.e:211				error:crash("cmd_opts: Duplicate Long Names (%s) are not allowed in an option record.\n",*/
        _2 = (object)SEQ_PTR(_opt_14235);
        _7837 = (object)*(((s1_ptr)_2)->base + 2);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_7837);
        ((intptr_t*)_2)[1] = _7837;
        _7838 = MAKE_SEQ(_1);
        _7837 = NOVALUE;
        DeRef(_data_inlined_crash_at_92_14251);
        _data_inlined_crash_at_92_14251 = _7838;
        _7838 = NOVALUE;

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_95_14252);
        _msg_inlined_crash_at_95_14252 = EPrintf(-9999999, _7836, _data_inlined_crash_at_92_14251);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_95_14252);

        /** error.e:53	end procedure*/
        goto L7; // [109] 112
L7: 
        DeRef(_data_inlined_crash_at_92_14251);
        _data_inlined_crash_at_92_14251 = NOVALUE;
        DeRefi(_msg_inlined_crash_at_95_14252);
        _msg_inlined_crash_at_95_14252 = NOVALUE;
L6: 
L5: 
        DeRef(_opt_14235);
        _opt_14235 = NOVALUE;

        /** cmdline.e:214		end for*/
        _i_14233 = _i_14233 + 1;
        goto L1; // [120] 15
L2: 
        ;
    }

    /** cmdline.e:216	end procedure*/
    DeRefDS(_opts_14231);
    return;
    ;
}


object _28update_opts(object _opts_14255)
{
    object _lExtras_14256 = NOVALUE;
    object _opt_14260 = NOVALUE;
    object _msg_inlined_crash_at_162_14293 = NOVALUE;
    object _msg_inlined_crash_at_323_14324 = NOVALUE;
    object _7909 = NOVALUE;
    object _7908 = NOVALUE;
    object _7907 = NOVALUE;
    object _7906 = NOVALUE;
    object _7905 = NOVALUE;
    object _7904 = NOVALUE;
    object _7903 = NOVALUE;
    object _7902 = NOVALUE;
    object _7901 = NOVALUE;
    object _7900 = NOVALUE;
    object _7899 = NOVALUE;
    object _7898 = NOVALUE;
    object _7897 = NOVALUE;
    object _7896 = NOVALUE;
    object _7894 = NOVALUE;
    object _7892 = NOVALUE;
    object _7891 = NOVALUE;
    object _7890 = NOVALUE;
    object _7889 = NOVALUE;
    object _7882 = NOVALUE;
    object _7881 = NOVALUE;
    object _7880 = NOVALUE;
    object _7879 = NOVALUE;
    object _7878 = NOVALUE;
    object _7877 = NOVALUE;
    object _7876 = NOVALUE;
    object _7875 = NOVALUE;
    object _7873 = NOVALUE;
    object _7872 = NOVALUE;
    object _7871 = NOVALUE;
    object _7870 = NOVALUE;
    object _7869 = NOVALUE;
    object _7868 = NOVALUE;
    object _7867 = NOVALUE;
    object _7866 = NOVALUE;
    object _7863 = NOVALUE;
    object _7862 = NOVALUE;
    object _7861 = NOVALUE;
    object _7860 = NOVALUE;
    object _7859 = NOVALUE;
    object _7858 = NOVALUE;
    object _7857 = NOVALUE;
    object _7856 = NOVALUE;
    object _7855 = NOVALUE;
    object _7854 = NOVALUE;
    object _7853 = NOVALUE;
    object _7852 = NOVALUE;
    object _7851 = NOVALUE;
    object _7850 = NOVALUE;
    object _7849 = NOVALUE;
    object _7848 = NOVALUE;
    object _7847 = NOVALUE;
    object _7845 = NOVALUE;
    object _7844 = NOVALUE;
    object _7843 = NOVALUE;
    object _7841 = NOVALUE;
    object _7839 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:223		integer lExtras = 0 -- Ensure that there is zero or one 'extras' record only.*/
    _lExtras_14256 = 0;

    /** cmdline.e:224		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14255)){
            _7839 = SEQ_PTR(_opts_14255)->length;
    }
    else {
        _7839 = 1;
    }
    {
        object _i_14258;
        _i_14258 = 1;
L1: 
        if (_i_14258 > _7839){
            goto L2; // [13] 565
        }

        /** cmdline.e:225			sequence opt = opts[i]*/
        DeRef(_opt_14260);
        _2 = (object)SEQ_PTR(_opts_14255);
        _opt_14260 = (object)*(((s1_ptr)_2)->base + _i_14258);
        Ref(_opt_14260);

        /** cmdline.e:226			opts[i] = 0*/
        _2 = (object)SEQ_PTR(_opts_14255);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14255 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_14258);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);

        /** cmdline.e:228			if length(opt) < MAPNAME then*/
        if (IS_SEQUENCE(_opt_14260)){
                _7841 = SEQ_PTR(_opt_14260)->length;
        }
        else {
            _7841 = 1;
        }
        if (_7841 >= 6)
        goto L3; // [39] 61

        /** cmdline.e:229				opt &= repeat(-1, MAPNAME - length(opt))*/
        if (IS_SEQUENCE(_opt_14260)){
                _7843 = SEQ_PTR(_opt_14260)->length;
        }
        else {
            _7843 = 1;
        }
        _7844 = 6 - _7843;
        _7843 = NOVALUE;
        _7845 = Repeat(-1, _7844);
        _7844 = NOVALUE;
        Concat((object_ptr)&_opt_14260, _opt_14260, _7845);
        DeRefDS(_7845);
        _7845 = NOVALUE;
L3: 

        /** cmdline.e:232			if sequence(opt[SHORTNAME]) and length(opt[SHORTNAME]) = 0 then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7847 = (object)*(((s1_ptr)_2)->base + 1);
        _7848 = IS_SEQUENCE(_7847);
        _7847 = NOVALUE;
        if (_7848 == 0) {
            goto L4; // [70] 96
        }
        _2 = (object)SEQ_PTR(_opt_14260);
        _7850 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_SEQUENCE(_7850)){
                _7851 = SEQ_PTR(_7850)->length;
        }
        else {
            _7851 = 1;
        }
        _7850 = NOVALUE;
        _7852 = (_7851 == 0);
        _7851 = NOVALUE;
        if (_7852 == 0)
        {
            DeRef(_7852);
            _7852 = NOVALUE;
            goto L4; // [86] 96
        }
        else{
            DeRef(_7852);
            _7852 = NOVALUE;
        }

        /** cmdline.e:233				opt[SHORTNAME] = 0*/
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
L4: 

        /** cmdline.e:236			if sequence(opt[LONGNAME]) and length(opt[LONGNAME]) = 0 then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7853 = (object)*(((s1_ptr)_2)->base + 2);
        _7854 = IS_SEQUENCE(_7853);
        _7853 = NOVALUE;
        if (_7854 == 0) {
            goto L5; // [105] 131
        }
        _2 = (object)SEQ_PTR(_opt_14260);
        _7856 = (object)*(((s1_ptr)_2)->base + 2);
        if (IS_SEQUENCE(_7856)){
                _7857 = SEQ_PTR(_7856)->length;
        }
        else {
            _7857 = 1;
        }
        _7856 = NOVALUE;
        _7858 = (_7857 == 0);
        _7857 = NOVALUE;
        if (_7858 == 0)
        {
            DeRef(_7858);
            _7858 = NOVALUE;
            goto L5; // [121] 131
        }
        else{
            DeRef(_7858);
            _7858 = NOVALUE;
        }

        /** cmdline.e:237				opt[LONGNAME] = 0*/
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
L5: 

        /** cmdline.e:240			if atom(opt[LONGNAME]) and atom(opt[SHORTNAME]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7859 = (object)*(((s1_ptr)_2)->base + 2);
        _7860 = IS_ATOM(_7859);
        _7859 = NOVALUE;
        if (_7860 == 0) {
            goto L6; // [140] 212
        }
        _2 = (object)SEQ_PTR(_opt_14260);
        _7862 = (object)*(((s1_ptr)_2)->base + 1);
        _7863 = IS_ATOM(_7862);
        _7862 = NOVALUE;
        if (_7863 == 0)
        {
            _7863 = NOVALUE;
            goto L6; // [152] 212
        }
        else{
            _7863 = NOVALUE;
        }

        /** cmdline.e:241				if lExtras != 0 then*/
        if (_lExtras_14256 == 0)
        goto L7; // [157] 184

        /** cmdline.e:242					error:crash("cmd_opts: There must be less than two 'extras' option records.\n")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_162_14293);
        _msg_inlined_crash_at_162_14293 = EPrintf(-9999999, _7865, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_162_14293);

        /** error.e:53	end procedure*/
        goto L8; // [176] 179
L8: 
        DeRefi(_msg_inlined_crash_at_162_14293);
        _msg_inlined_crash_at_162_14293 = NOVALUE;
        goto L9; // [181] 211
L7: 

        /** cmdline.e:244					lExtras = i*/
        _lExtras_14256 = _i_14258;

        /** cmdline.e:245					if atom(opt[MAPNAME]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7866 = (object)*(((s1_ptr)_2)->base + 6);
        _7867 = IS_ATOM(_7866);
        _7866 = NOVALUE;
        if (_7867 == 0)
        {
            _7867 = NOVALUE;
            goto LA; // [198] 210
        }
        else{
            _7867 = NOVALUE;
        }

        /** cmdline.e:246						opt[MAPNAME] = EXTRAS*/
        RefDS(_28EXTRAS_14176);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _28EXTRAS_14176;
        DeRef(_1);
LA: 
L9: 
L6: 

        /** cmdline.e:251			if atom(opt[DESCRIPTION]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7868 = (object)*(((s1_ptr)_2)->base + 3);
        _7869 = IS_ATOM(_7868);
        _7868 = NOVALUE;
        if (_7869 == 0)
        {
            _7869 = NOVALUE;
            goto LB; // [221] 231
        }
        else{
            _7869 = NOVALUE;
        }

        /** cmdline.e:252				opt[DESCRIPTION] = ""*/
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 3);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
LB: 

        /** cmdline.e:256			if atom(opt[OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7870 = (object)*(((s1_ptr)_2)->base + 4);
        _7871 = IS_ATOM(_7870);
        _7870 = NOVALUE;
        if (_7871 == 0)
        {
            _7871 = NOVALUE;
            goto LC; // [240] 279
        }
        else{
            _7871 = NOVALUE;
        }

        /** cmdline.e:257				if equal(opt[OPTIONS], HAS_PARAMETER) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7872 = (object)*(((s1_ptr)_2)->base + 4);
        if (_7872 == 112)
        _7873 = 1;
        else if (IS_ATOM_INT(_7872) && IS_ATOM_INT(112))
        _7873 = 0;
        else
        _7873 = (compare(_7872, 112) == 0);
        _7872 = NOVALUE;
        if (_7873 == 0)
        {
            _7873 = NOVALUE;
            goto LD; // [253] 269
        }
        else{
            _7873 = NOVALUE;
        }

        /** cmdline.e:258					opt[OPTIONS] = {HAS_PARAMETER,"x"}*/
        RefDS(_7874);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 112;
        ((intptr_t *)_2)[2] = _7874;
        _7875 = MAKE_SEQ(_1);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7875;
        if( _1 != _7875 ){
            DeRef(_1);
        }
        _7875 = NOVALUE;
        goto LE; // [266] 383
LD: 

        /** cmdline.e:260					opt[OPTIONS] = {}*/
        RefDS(_5);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5;
        DeRef(_1);
        goto LE; // [276] 383
LC: 

        /** cmdline.e:263				for j = 1 to length(opt[OPTIONS]) do*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7876 = (object)*(((s1_ptr)_2)->base + 4);
        if (IS_SEQUENCE(_7876)){
                _7877 = SEQ_PTR(_7876)->length;
        }
        else {
            _7877 = 1;
        }
        _7876 = NOVALUE;
        {
            object _j_14312;
            _j_14312 = 1;
LF: 
            if (_j_14312 > _7877){
                goto L10; // [288] 350
            }

            /** cmdline.e:264					if find(opt[OPTIONS][j], opt[OPTIONS], j + 1) != 0 then*/
            _2 = (object)SEQ_PTR(_opt_14260);
            _7878 = (object)*(((s1_ptr)_2)->base + 4);
            _2 = (object)SEQ_PTR(_7878);
            _7879 = (object)*(((s1_ptr)_2)->base + _j_14312);
            _7878 = NOVALUE;
            _2 = (object)SEQ_PTR(_opt_14260);
            _7880 = (object)*(((s1_ptr)_2)->base + 4);
            _7881 = _j_14312 + 1;
            _7882 = find_from(_7879, _7880, _7881);
            _7879 = NOVALUE;
            _7880 = NOVALUE;
            _7881 = NOVALUE;
            if (_7882 == 0)
            goto L11; // [318] 343

            /** cmdline.e:265						error:crash("cmd_opts: Duplicate processing options are not allowed in an option record.\n")*/

            /** error.e:51		msg = sprintf(fmt, data)*/
            DeRefi(_msg_inlined_crash_at_323_14324);
            _msg_inlined_crash_at_323_14324 = EPrintf(-9999999, _7884, _5);

            /** error.e:52		machine_proc(M_CRASH, msg)*/
            machine(67, _msg_inlined_crash_at_323_14324);

            /** error.e:53	end procedure*/
            goto L12; // [337] 340
L12: 
            DeRefi(_msg_inlined_crash_at_323_14324);
            _msg_inlined_crash_at_323_14324 = NOVALUE;
L11: 

            /** cmdline.e:267				end for*/
            _j_14312 = _j_14312 + 1;
            goto LF; // [345] 295
L10: 
            ;
        }

        /** cmdline.e:269				check_for_bad_combos( opt, HAS_PARAMETER, NO_PARAMETER, */
        RefDS(_opt_14260);
        RefDS(_7885);
        _28check_for_bad_combos(_opt_14260, 112, 110, _7885);

        /** cmdline.e:272				check_for_bad_combos( opt, HAS_CASE, NO_CASE, */
        RefDS(_opt_14260);
        RefDS(_7886);
        _28check_for_bad_combos(_opt_14260, 99, 105, _7886);

        /** cmdline.e:275				check_for_bad_combos( opt, MANDATORY, OPTIONAL, */
        RefDS(_opt_14260);
        RefDS(_7887);
        _28check_for_bad_combos(_opt_14260, 109, 111, _7887);

        /** cmdline.e:278				check_for_bad_combos( opt, ONCE, MULTIPLE, */
        RefDS(_opt_14260);
        RefDS(_7888);
        _28check_for_bad_combos(_opt_14260, 49, 42, _7888);
LE: 

        /** cmdline.e:283			if sequence(opt[CALLBACK]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7889 = (object)*(((s1_ptr)_2)->base + 5);
        _7890 = IS_SEQUENCE(_7889);
        _7889 = NOVALUE;
        if (_7890 == 0)
        {
            _7890 = NOVALUE;
            goto L13; // [392] 404
        }
        else{
            _7890 = NOVALUE;
        }

        /** cmdline.e:284				opt[CALLBACK] = -1*/
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        goto L14; // [401] 443
L13: 

        /** cmdline.e:285			elsif not integer(opt[CALLBACK]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7891 = (object)*(((s1_ptr)_2)->base + 5);
        if (IS_ATOM_INT(_7891))
        _7892 = 1;
        else if (IS_ATOM_DBL(_7891))
        _7892 = IS_ATOM_INT(DoubleToInt(_7891));
        else
        _7892 = 0;
        _7891 = NOVALUE;
        if (_7892 != 0)
        goto L15; // [413] 425
        _7892 = NOVALUE;

        /** cmdline.e:286				opt[CALLBACK] = -1*/
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
        goto L14; // [422] 443
L15: 

        /** cmdline.e:287			elsif opt[CALLBACK] < 0 then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7894 = (object)*(((s1_ptr)_2)->base + 5);
        if (binary_op_a(GREATEREQ, _7894, 0)){
            _7894 = NOVALUE;
            goto L16; // [431] 442
        }
        _7894 = NOVALUE;

        /** cmdline.e:288				opt[CALLBACK] = -1*/
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 5);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = -1;
        DeRef(_1);
L16: 
L14: 

        /** cmdline.e:291			if sequence(opt[MAPNAME]) and length(opt[MAPNAME]) = 0 then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7896 = (object)*(((s1_ptr)_2)->base + 6);
        _7897 = IS_SEQUENCE(_7896);
        _7896 = NOVALUE;
        if (_7897 == 0) {
            goto L17; // [452] 478
        }
        _2 = (object)SEQ_PTR(_opt_14260);
        _7899 = (object)*(((s1_ptr)_2)->base + 6);
        if (IS_SEQUENCE(_7899)){
                _7900 = SEQ_PTR(_7899)->length;
        }
        else {
            _7900 = 1;
        }
        _7899 = NOVALUE;
        _7901 = (_7900 == 0);
        _7900 = NOVALUE;
        if (_7901 == 0)
        {
            DeRef(_7901);
            _7901 = NOVALUE;
            goto L17; // [468] 478
        }
        else{
            DeRef(_7901);
            _7901 = NOVALUE;
        }

        /** cmdline.e:292				opt[MAPNAME] = 0*/
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
L17: 

        /** cmdline.e:295			if atom(opt[MAPNAME]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7902 = (object)*(((s1_ptr)_2)->base + 6);
        _7903 = IS_ATOM(_7902);
        _7902 = NOVALUE;
        if (_7903 == 0)
        {
            _7903 = NOVALUE;
            goto L18; // [487] 550
        }
        else{
            _7903 = NOVALUE;
        }

        /** cmdline.e:296				if sequence(opt[LONGNAME]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7904 = (object)*(((s1_ptr)_2)->base + 2);
        _7905 = IS_SEQUENCE(_7904);
        _7904 = NOVALUE;
        if (_7905 == 0)
        {
            _7905 = NOVALUE;
            goto L19; // [499] 515
        }
        else{
            _7905 = NOVALUE;
        }

        /** cmdline.e:297					opt[MAPNAME] = opt[LONGNAME]*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7906 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_7906);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7906;
        if( _1 != _7906 ){
            DeRef(_1);
        }
        _7906 = NOVALUE;
        goto L1A; // [512] 549
L19: 

        /** cmdline.e:298				elsif sequence(opt[SHORTNAME]) then*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7907 = (object)*(((s1_ptr)_2)->base + 1);
        _7908 = IS_SEQUENCE(_7907);
        _7907 = NOVALUE;
        if (_7908 == 0)
        {
            _7908 = NOVALUE;
            goto L1B; // [524] 540
        }
        else{
            _7908 = NOVALUE;
        }

        /** cmdline.e:299					opt[MAPNAME] = opt[SHORTNAME]*/
        _2 = (object)SEQ_PTR(_opt_14260);
        _7909 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_7909);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7909;
        if( _1 != _7909 ){
            DeRef(_1);
        }
        _7909 = NOVALUE;
        goto L1A; // [537] 549
L1B: 

        /** cmdline.e:301					opt[MAPNAME] = EXTRAS*/
        RefDS(_28EXTRAS_14176);
        _2 = (object)SEQ_PTR(_opt_14260);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_14260 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 6);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _28EXTRAS_14176;
        DeRef(_1);
L1A: 
L18: 

        /** cmdline.e:305			opts[i] = opt*/
        RefDS(_opt_14260);
        _2 = (object)SEQ_PTR(_opts_14255);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14255 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_14258);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _opt_14260;
        DeRef(_1);
        DeRefDS(_opt_14260);
        _opt_14260 = NOVALUE;

        /** cmdline.e:306		end for*/
        _i_14258 = _i_14258 + 1;
        goto L1; // [560] 20
L2: 
        ;
    }

    /** cmdline.e:307		return opts*/
    _7876 = NOVALUE;
    _7850 = NOVALUE;
    _7856 = NOVALUE;
    _7899 = NOVALUE;
    return _opts_14255;
    ;
}


object _28standardize_help_options(object _opts_14360, object _auto_help_switches_14361)
{
    object _has_h_14362 = NOVALUE;
    object _has_help_14363 = NOVALUE;
    object _has_question_14364 = NOVALUE;
    object _appended_opts_14384 = NOVALUE;
    object _7936 = NOVALUE;
    object _7933 = NOVALUE;
    object _7930 = NOVALUE;
    object _7927 = NOVALUE;
    object _7925 = NOVALUE;
    object _7924 = NOVALUE;
    object _7923 = NOVALUE;
    object _7922 = NOVALUE;
    object _7920 = NOVALUE;
    object _7919 = NOVALUE;
    object _7918 = NOVALUE;
    object _7916 = NOVALUE;
    object _7915 = NOVALUE;
    object _7914 = NOVALUE;
    object _7912 = NOVALUE;
    object _7911 = NOVALUE;
    object _7910 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:313		integer has_h = 0, has_help = 0, has_question = 0*/
    _has_h_14362 = 0;
    _has_help_14363 = 0;
    _has_question_14364 = 0;

    /** cmdline.e:314		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14360)){
            _7910 = SEQ_PTR(_opts_14360)->length;
    }
    else {
        _7910 = 1;
    }
    {
        object _i_14366;
        _i_14366 = 1;
L1: 
        if (_i_14366 > _7910){
            goto L2; // [21] 107
        }

        /** cmdline.e:315			if equal(opts[i][SHORTNAME], "h") then*/
        _2 = (object)SEQ_PTR(_opts_14360);
        _7911 = (object)*(((s1_ptr)_2)->base + _i_14366);
        _2 = (object)SEQ_PTR(_7911);
        _7912 = (object)*(((s1_ptr)_2)->base + 1);
        _7911 = NOVALUE;
        if (_7912 == _7913)
        _7914 = 1;
        else if (IS_ATOM_INT(_7912) && IS_ATOM_INT(_7913))
        _7914 = 0;
        else
        _7914 = (compare(_7912, _7913) == 0);
        _7912 = NOVALUE;
        if (_7914 == 0)
        {
            _7914 = NOVALUE;
            goto L3; // [42] 53
        }
        else{
            _7914 = NOVALUE;
        }

        /** cmdline.e:316				has_h = 1*/
        _has_h_14362 = 1;
        goto L4; // [50] 77
L3: 

        /** cmdline.e:317			elsif equal(opts[i][SHORTNAME], "?") then*/
        _2 = (object)SEQ_PTR(_opts_14360);
        _7915 = (object)*(((s1_ptr)_2)->base + _i_14366);
        _2 = (object)SEQ_PTR(_7915);
        _7916 = (object)*(((s1_ptr)_2)->base + 1);
        _7915 = NOVALUE;
        if (_7916 == _7917)
        _7918 = 1;
        else if (IS_ATOM_INT(_7916) && IS_ATOM_INT(_7917))
        _7918 = 0;
        else
        _7918 = (compare(_7916, _7917) == 0);
        _7916 = NOVALUE;
        if (_7918 == 0)
        {
            _7918 = NOVALUE;
            goto L5; // [67] 76
        }
        else{
            _7918 = NOVALUE;
        }

        /** cmdline.e:318				has_question = 1*/
        _has_question_14364 = 1;
L5: 
L4: 

        /** cmdline.e:321			if equal(opts[i][LONGNAME], "help") then*/
        _2 = (object)SEQ_PTR(_opts_14360);
        _7919 = (object)*(((s1_ptr)_2)->base + _i_14366);
        _2 = (object)SEQ_PTR(_7919);
        _7920 = (object)*(((s1_ptr)_2)->base + 2);
        _7919 = NOVALUE;
        if (_7920 == _7921)
        _7922 = 1;
        else if (IS_ATOM_INT(_7920) && IS_ATOM_INT(_7921))
        _7922 = 0;
        else
        _7922 = (compare(_7920, _7921) == 0);
        _7920 = NOVALUE;
        if (_7922 == 0)
        {
            _7922 = NOVALUE;
            goto L6; // [91] 100
        }
        else{
            _7922 = NOVALUE;
        }

        /** cmdline.e:322				has_help = 1*/
        _has_help_14363 = 1;
L6: 

        /** cmdline.e:324		end for*/
        _i_14366 = _i_14366 + 1;
        goto L1; // [102] 28
L2: 
        ;
    }

    /** cmdline.e:326		if auto_help_switches then*/
    if (_auto_help_switches_14361 == 0)
    {
        goto L7; // [109] 249
    }
    else{
    }

    /** cmdline.e:327			integer appended_opts = 0*/
    _appended_opts_14384 = 0;

    /** cmdline.e:328			if not has_h and not has_help then*/
    _7923 = (_has_h_14362 == 0);
    if (_7923 == 0) {
        goto L8; // [122] 155
    }
    _7925 = (_has_help_14363 == 0);
    if (_7925 == 0)
    {
        DeRef(_7925);
        _7925 = NOVALUE;
        goto L8; // [130] 155
    }
    else{
        DeRef(_7925);
        _7925 = NOVALUE;
    }

    /** cmdline.e:329				opts = append(opts, {"h", "help", "Display the command options", {HELP}, -1})*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7913);
    ((intptr_t*)_2)[1] = _7913;
    RefDS(_7921);
    ((intptr_t*)_2)[2] = _7921;
    RefDS(_7926);
    ((intptr_t*)_2)[3] = _7926;
    RefDS(_7913);
    ((intptr_t*)_2)[4] = _7913;
    ((intptr_t*)_2)[5] = -1;
    _7927 = MAKE_SEQ(_1);
    RefDS(_7927);
    Append(&_opts_14360, _opts_14360, _7927);
    DeRefDS(_7927);
    _7927 = NOVALUE;

    /** cmdline.e:330				appended_opts = 1*/
    _appended_opts_14384 = 1;
    goto L9; // [152] 208
L8: 

    /** cmdline.e:332			elsif not has_h then*/
    if (_has_h_14362 != 0)
    goto LA; // [157] 182

    /** cmdline.e:333				opts = append(opts, {"h", 0, "Display the command options", {HELP}, -1})*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7913);
    ((intptr_t*)_2)[1] = _7913;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_7926);
    ((intptr_t*)_2)[3] = _7926;
    RefDS(_7913);
    ((intptr_t*)_2)[4] = _7913;
    ((intptr_t*)_2)[5] = -1;
    _7930 = MAKE_SEQ(_1);
    RefDS(_7930);
    Append(&_opts_14360, _opts_14360, _7930);
    DeRefDS(_7930);
    _7930 = NOVALUE;

    /** cmdline.e:334				appended_opts = 1*/
    _appended_opts_14384 = 1;
    goto L9; // [179] 208
LA: 

    /** cmdline.e:336			elsif not has_help then*/
    if (_has_help_14363 != 0)
    goto LB; // [184] 207

    /** cmdline.e:337				opts = append(opts, {0, "help", "Display the command options", {HELP}, -1})*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    RefDS(_7921);
    ((intptr_t*)_2)[2] = _7921;
    RefDS(_7926);
    ((intptr_t*)_2)[3] = _7926;
    RefDS(_7913);
    ((intptr_t*)_2)[4] = _7913;
    ((intptr_t*)_2)[5] = -1;
    _7933 = MAKE_SEQ(_1);
    RefDS(_7933);
    Append(&_opts_14360, _opts_14360, _7933);
    DeRefDS(_7933);
    _7933 = NOVALUE;

    /** cmdline.e:338				appended_opts = 1*/
    _appended_opts_14384 = 1;
LB: 
L9: 

    /** cmdline.e:342			if not has_question then			*/
    if (_has_question_14364 != 0)
    goto LC; // [210] 233

    /** cmdline.e:343				opts = append(opts, {"?", 0, "Display the command options", {HELP}, -1})*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_7917);
    ((intptr_t*)_2)[1] = _7917;
    ((intptr_t*)_2)[2] = 0;
    RefDS(_7926);
    ((intptr_t*)_2)[3] = _7926;
    RefDS(_7913);
    ((intptr_t*)_2)[4] = _7913;
    ((intptr_t*)_2)[5] = -1;
    _7936 = MAKE_SEQ(_1);
    RefDS(_7936);
    Append(&_opts_14360, _opts_14360, _7936);
    DeRefDS(_7936);
    _7936 = NOVALUE;

    /** cmdline.e:344				appended_opts = 1*/
    _appended_opts_14384 = 1;
LC: 

    /** cmdline.e:347			if appended_opts then*/
    if (_appended_opts_14384 == 0)
    {
        goto LD; // [235] 248
    }
    else{
    }

    /** cmdline.e:349				opts = standardize_opts(opts, 0)*/
    RefDS(_opts_14360);
    _0 = _opts_14360;
    _opts_14360 = _28standardize_opts(_opts_14360, 0);
    DeRefDS(_0);
LD: 
L7: 

    /** cmdline.e:352		return opts*/
    DeRef(_7923);
    _7923 = NOVALUE;
    return _opts_14360;
    ;
}


object _28standardize_opts(object _opts_14409, object _auto_help_switches_14410)
{
    object _7975 = NOVALUE;
    object _7974 = NOVALUE;
    object _7972 = NOVALUE;
    object _7971 = NOVALUE;
    object _7970 = NOVALUE;
    object _7969 = NOVALUE;
    object _7968 = NOVALUE;
    object _7967 = NOVALUE;
    object _7966 = NOVALUE;
    object _7965 = NOVALUE;
    object _7964 = NOVALUE;
    object _7963 = NOVALUE;
    object _7962 = NOVALUE;
    object _7961 = NOVALUE;
    object _7959 = NOVALUE;
    object _7958 = NOVALUE;
    object _7957 = NOVALUE;
    object _7956 = NOVALUE;
    object _7955 = NOVALUE;
    object _7954 = NOVALUE;
    object _7953 = NOVALUE;
    object _7952 = NOVALUE;
    object _7951 = NOVALUE;
    object _7950 = NOVALUE;
    object _7949 = NOVALUE;
    object _7948 = NOVALUE;
    object _7946 = NOVALUE;
    object _7944 = NOVALUE;
    object _7943 = NOVALUE;
    object _7942 = NOVALUE;
    object _7941 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** cmdline.e:357		opts = update_opts( opts )*/
    RefDS(_opts_14409);
    _0 = _opts_14409;
    _opts_14409 = _28update_opts(_opts_14409);
    DeRefDS(_0);

    /** cmdline.e:359		check_for_duplicates( opts )*/
    RefDS(_opts_14409);
    _28check_for_duplicates(_opts_14409);

    /** cmdline.e:361		opts = standardize_help_options( opts, auto_help_switches )*/
    RefDS(_opts_14409);
    _0 = _opts_14409;
    _opts_14409 = _28standardize_help_options(_opts_14409, _auto_help_switches_14410);
    DeRefDS(_0);

    /** cmdline.e:364		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14409)){
            _7941 = SEQ_PTR(_opts_14409)->length;
    }
    else {
        _7941 = 1;
    }
    {
        object _i_14414;
        _i_14414 = 1;
L1: 
        if (_i_14414 > _7941){
            goto L2; // [32] 208
        }

        /** cmdline.e:365			if not find(HAS_PARAMETER, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14409);
        _7942 = (object)*(((s1_ptr)_2)->base + _i_14414);
        _2 = (object)SEQ_PTR(_7942);
        _7943 = (object)*(((s1_ptr)_2)->base + 4);
        _7942 = NOVALUE;
        _7944 = find_from(112, _7943, 1);
        _7943 = NOVALUE;
        if (_7944 != 0)
        goto L3; // [54] 77
        _7944 = NOVALUE;

        /** cmdline.e:366				opts[i][OPTIONS] &= NO_PARAMETER*/
        _2 = (object)SEQ_PTR(_opts_14409);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14409 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_14414 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _7948 = (object)*(((s1_ptr)_2)->base + 4);
        _7946 = NOVALUE;
        if (IS_SEQUENCE(_7948) && IS_ATOM(110)) {
            Append(&_7949, _7948, 110);
        }
        else if (IS_ATOM(_7948) && IS_SEQUENCE(110)) {
        }
        else {
            Concat((object_ptr)&_7949, _7948, 110);
            _7948 = NOVALUE;
        }
        _7948 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7949;
        if( _1 != _7949 ){
            DeRef(_1);
        }
        _7949 = NOVALUE;
        _7946 = NOVALUE;
L3: 

        /** cmdline.e:369			if not find(MULTIPLE, opts[i][OPTIONS]) and not find(ONCE, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14409);
        _7950 = (object)*(((s1_ptr)_2)->base + _i_14414);
        _2 = (object)SEQ_PTR(_7950);
        _7951 = (object)*(((s1_ptr)_2)->base + 4);
        _7950 = NOVALUE;
        _7952 = find_from(42, _7951, 1);
        _7951 = NOVALUE;
        _7953 = (_7952 == 0);
        _7952 = NOVALUE;
        if (_7953 == 0) {
            goto L4; // [95] 139
        }
        _2 = (object)SEQ_PTR(_opts_14409);
        _7955 = (object)*(((s1_ptr)_2)->base + _i_14414);
        _2 = (object)SEQ_PTR(_7955);
        _7956 = (object)*(((s1_ptr)_2)->base + 4);
        _7955 = NOVALUE;
        _7957 = find_from(49, _7956, 1);
        _7956 = NOVALUE;
        _7958 = (_7957 == 0);
        _7957 = NOVALUE;
        if (_7958 == 0)
        {
            DeRef(_7958);
            _7958 = NOVALUE;
            goto L4; // [116] 139
        }
        else{
            DeRef(_7958);
            _7958 = NOVALUE;
        }

        /** cmdline.e:370				opts[i][OPTIONS] &= ONCE*/
        _2 = (object)SEQ_PTR(_opts_14409);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14409 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_14414 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _7961 = (object)*(((s1_ptr)_2)->base + 4);
        _7959 = NOVALUE;
        if (IS_SEQUENCE(_7961) && IS_ATOM(49)) {
            Append(&_7962, _7961, 49);
        }
        else if (IS_ATOM(_7961) && IS_SEQUENCE(49)) {
        }
        else {
            Concat((object_ptr)&_7962, _7961, 49);
            _7961 = NOVALUE;
        }
        _7961 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7962;
        if( _1 != _7962 ){
            DeRef(_1);
        }
        _7962 = NOVALUE;
        _7959 = NOVALUE;
L4: 

        /** cmdline.e:373			if not find(HAS_CASE, opts[i][OPTIONS]) and not find(NO_CASE, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14409);
        _7963 = (object)*(((s1_ptr)_2)->base + _i_14414);
        _2 = (object)SEQ_PTR(_7963);
        _7964 = (object)*(((s1_ptr)_2)->base + 4);
        _7963 = NOVALUE;
        _7965 = find_from(99, _7964, 1);
        _7964 = NOVALUE;
        _7966 = (_7965 == 0);
        _7965 = NOVALUE;
        if (_7966 == 0) {
            goto L5; // [157] 201
        }
        _2 = (object)SEQ_PTR(_opts_14409);
        _7968 = (object)*(((s1_ptr)_2)->base + _i_14414);
        _2 = (object)SEQ_PTR(_7968);
        _7969 = (object)*(((s1_ptr)_2)->base + 4);
        _7968 = NOVALUE;
        _7970 = find_from(105, _7969, 1);
        _7969 = NOVALUE;
        _7971 = (_7970 == 0);
        _7970 = NOVALUE;
        if (_7971 == 0)
        {
            DeRef(_7971);
            _7971 = NOVALUE;
            goto L5; // [178] 201
        }
        else{
            DeRef(_7971);
            _7971 = NOVALUE;
        }

        /** cmdline.e:374				opts[i][OPTIONS] &= NO_CASE*/
        _2 = (object)SEQ_PTR(_opts_14409);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opts_14409 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_14414 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _7974 = (object)*(((s1_ptr)_2)->base + 4);
        _7972 = NOVALUE;
        if (IS_SEQUENCE(_7974) && IS_ATOM(105)) {
            Append(&_7975, _7974, 105);
        }
        else if (IS_ATOM(_7974) && IS_SEQUENCE(105)) {
        }
        else {
            Concat((object_ptr)&_7975, _7974, 105);
            _7974 = NOVALUE;
        }
        _7974 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 4);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7975;
        if( _1 != _7975 ){
            DeRef(_1);
        }
        _7975 = NOVALUE;
        _7972 = NOVALUE;
L5: 

        /** cmdline.e:376		end for*/
        _i_14414 = _i_14414 + 1;
        goto L1; // [203] 39
L2: 
        ;
    }

    /** cmdline.e:378		return opts*/
    DeRef(_7966);
    _7966 = NOVALUE;
    DeRef(_7953);
    _7953 = NOVALUE;
    return _opts_14409;
    ;
}


object _28print_help(object _opts_14455, object _cmds_14456)
{
    object _pad_size_14457 = NOVALUE;
    object _this_size_14458 = NOVALUE;
    object _extras_mandatory_14459 = NOVALUE;
    object _extras_opt_14460 = NOVALUE;
    object _param_name_14461 = NOVALUE;
    object _has_param_14462 = NOVALUE;
    object _8065 = NOVALUE;
    object _8064 = NOVALUE;
    object _8063 = NOVALUE;
    object _8062 = NOVALUE;
    object _8059 = NOVALUE;
    object _8058 = NOVALUE;
    object _8057 = NOVALUE;
    object _8056 = NOVALUE;
    object _8055 = NOVALUE;
    object _8054 = NOVALUE;
    object _8053 = NOVALUE;
    object _8052 = NOVALUE;
    object _8051 = NOVALUE;
    object _8050 = NOVALUE;
    object _8045 = NOVALUE;
    object _8044 = NOVALUE;
    object _8042 = NOVALUE;
    object _8041 = NOVALUE;
    object _8040 = NOVALUE;
    object _8039 = NOVALUE;
    object _8038 = NOVALUE;
    object _8037 = NOVALUE;
    object _8035 = NOVALUE;
    object _8034 = NOVALUE;
    object _8033 = NOVALUE;
    object _8029 = NOVALUE;
    object _8028 = NOVALUE;
    object _8026 = NOVALUE;
    object _8025 = NOVALUE;
    object _8024 = NOVALUE;
    object _8023 = NOVALUE;
    object _8022 = NOVALUE;
    object _8021 = NOVALUE;
    object _8020 = NOVALUE;
    object _8017 = NOVALUE;
    object _8016 = NOVALUE;
    object _8015 = NOVALUE;
    object _8013 = NOVALUE;
    object _8012 = NOVALUE;
    object _8011 = NOVALUE;
    object _8010 = NOVALUE;
    object _8009 = NOVALUE;
    object _8008 = NOVALUE;
    object _8007 = NOVALUE;
    object _8004 = NOVALUE;
    object _8003 = NOVALUE;
    object _8002 = NOVALUE;
    object _8000 = NOVALUE;
    object _7999 = NOVALUE;
    object _7998 = NOVALUE;
    object _7997 = NOVALUE;
    object _7996 = NOVALUE;
    object _7995 = NOVALUE;
    object _7994 = NOVALUE;
    object _7993 = NOVALUE;
    object _7992 = NOVALUE;
    object _7991 = NOVALUE;
    object _7990 = NOVALUE;
    object _7989 = NOVALUE;
    object _7988 = NOVALUE;
    object _7987 = NOVALUE;
    object _7986 = NOVALUE;
    object _7985 = NOVALUE;
    object _7984 = NOVALUE;
    object _7983 = NOVALUE;
    object _7982 = NOVALUE;
    object _7981 = NOVALUE;
    object _7980 = NOVALUE;
    object _7979 = NOVALUE;
    object _7978 = NOVALUE;
    object _7977 = NOVALUE;
    object _7976 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:384		integer pad_size = 0*/
    _pad_size_14457 = 0;

    /** cmdline.e:386		integer extras_mandatory = 0*/
    _extras_mandatory_14459 = 0;

    /** cmdline.e:387		integer extras_opt = 0*/
    _extras_opt_14460 = 0;

    /** cmdline.e:391		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14455)){
            _7976 = SEQ_PTR(_opts_14455)->length;
    }
    else {
        _7976 = 1;
    }
    {
        object _i_14464;
        _i_14464 = 1;
L1: 
        if (_i_14464 > _7976){
            goto L2; // [25] 456
        }

        /** cmdline.e:392			this_size = 0*/
        _this_size_14458 = 0;

        /** cmdline.e:393			param_name = ""*/
        RefDS(_5);
        DeRef(_param_name_14461);
        _param_name_14461 = _5;

        /** cmdline.e:395			if atom(opts[i][SHORTNAME]) and opts[i][SHORTNAME] = HEADER then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _7977 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7977);
        _7978 = (object)*(((s1_ptr)_2)->base + 1);
        _7977 = NOVALUE;
        _7979 = IS_ATOM(_7978);
        _7978 = NOVALUE;
        if (_7979 == 0) {
            goto L3; // [57] 82
        }
        _2 = (object)SEQ_PTR(_opts_14455);
        _7981 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7981);
        _7982 = (object)*(((s1_ptr)_2)->base + 1);
        _7981 = NOVALUE;
        if (IS_ATOM_INT(_7982)) {
            _7983 = (_7982 == 72);
        }
        else {
            _7983 = binary_op(EQUALS, _7982, 72);
        }
        _7982 = NOVALUE;
        if (_7983 == 0) {
            DeRef(_7983);
            _7983 = NOVALUE;
            goto L3; // [74] 82
        }
        else {
            if (!IS_ATOM_INT(_7983) && DBL_PTR(_7983)->dbl == 0.0){
                DeRef(_7983);
                _7983 = NOVALUE;
                goto L3; // [74] 82
            }
            DeRef(_7983);
            _7983 = NOVALUE;
        }
        DeRef(_7983);
        _7983 = NOVALUE;

        /** cmdline.e:396				continue*/
        goto L4; // [79] 451
L3: 

        /** cmdline.e:399			if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _7984 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7984);
        _7985 = (object)*(((s1_ptr)_2)->base + 1);
        _7984 = NOVALUE;
        _7986 = IS_ATOM(_7985);
        _7985 = NOVALUE;
        if (_7986 == 0) {
            goto L5; // [95] 148
        }
        _2 = (object)SEQ_PTR(_opts_14455);
        _7988 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7988);
        _7989 = (object)*(((s1_ptr)_2)->base + 2);
        _7988 = NOVALUE;
        _7990 = IS_ATOM(_7989);
        _7989 = NOVALUE;
        if (_7990 == 0)
        {
            _7990 = NOVALUE;
            goto L5; // [111] 148
        }
        else{
            _7990 = NOVALUE;
        }

        /** cmdline.e:400				extras_opt = i*/
        _extras_opt_14460 = _i_14464;

        /** cmdline.e:401				if find(MANDATORY, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _7991 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7991);
        _7992 = (object)*(((s1_ptr)_2)->base + 4);
        _7991 = NOVALUE;
        _7993 = find_from(109, _7992, 1);
        _7992 = NOVALUE;
        if (_7993 == 0)
        {
            _7993 = NOVALUE;
            goto L4; // [134] 451
        }
        else{
            _7993 = NOVALUE;
        }

        /** cmdline.e:402					extras_mandatory = 1*/
        _extras_mandatory_14459 = 1;

        /** cmdline.e:405				continue*/
        goto L4; // [145] 451
L5: 

        /** cmdline.e:408			if sequence(opts[i][SHORTNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _7994 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7994);
        _7995 = (object)*(((s1_ptr)_2)->base + 1);
        _7994 = NOVALUE;
        _7996 = IS_SEQUENCE(_7995);
        _7995 = NOVALUE;
        if (_7996 == 0)
        {
            _7996 = NOVALUE;
            goto L6; // [161] 214
        }
        else{
            _7996 = NOVALUE;
        }

        /** cmdline.e:409				this_size += length(opts[i][SHORTNAME]) + 1 -- Allow for "-"*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _7997 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_7997);
        _7998 = (object)*(((s1_ptr)_2)->base + 1);
        _7997 = NOVALUE;
        if (IS_SEQUENCE(_7998)){
                _7999 = SEQ_PTR(_7998)->length;
        }
        else {
            _7999 = 1;
        }
        _7998 = NOVALUE;
        _8000 = _7999 + 1;
        _7999 = NOVALUE;
        _this_size_14458 = _this_size_14458 + _8000;
        _8000 = NOVALUE;

        /** cmdline.e:410				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8002 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8002);
        _8003 = (object)*(((s1_ptr)_2)->base + 4);
        _8002 = NOVALUE;
        _8004 = find_from(109, _8003, 1);
        _8003 = NOVALUE;
        if (_8004 != 0)
        goto L7; // [202] 213

        /** cmdline.e:411					this_size += 2 -- Allow for '[' ']'*/
        _this_size_14458 = _this_size_14458 + 2;
L7: 
L6: 

        /** cmdline.e:415			if sequence(opts[i][LONGNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8007 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8007);
        _8008 = (object)*(((s1_ptr)_2)->base + 2);
        _8007 = NOVALUE;
        _8009 = IS_SEQUENCE(_8008);
        _8008 = NOVALUE;
        if (_8009 == 0)
        {
            _8009 = NOVALUE;
            goto L8; // [227] 280
        }
        else{
            _8009 = NOVALUE;
        }

        /** cmdline.e:416				this_size += length(opts[i][LONGNAME]) + 2 -- Allow for "--"*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8010 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8010);
        _8011 = (object)*(((s1_ptr)_2)->base + 2);
        _8010 = NOVALUE;
        if (IS_SEQUENCE(_8011)){
                _8012 = SEQ_PTR(_8011)->length;
        }
        else {
            _8012 = 1;
        }
        _8011 = NOVALUE;
        _8013 = _8012 + 2;
        _8012 = NOVALUE;
        _this_size_14458 = _this_size_14458 + _8013;
        _8013 = NOVALUE;

        /** cmdline.e:417				if find(MANDATORY, opts[i][OPTIONS]) = 0 then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8015 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8015);
        _8016 = (object)*(((s1_ptr)_2)->base + 4);
        _8015 = NOVALUE;
        _8017 = find_from(109, _8016, 1);
        _8016 = NOVALUE;
        if (_8017 != 0)
        goto L9; // [268] 279

        /** cmdline.e:418					this_size += 2 -- Allow for '[' ']'*/
        _this_size_14458 = _this_size_14458 + 2;
L9: 
L8: 

        /** cmdline.e:422			if sequence(opts[i][SHORTNAME]) and sequence(opts[i][LONGNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8020 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8020);
        _8021 = (object)*(((s1_ptr)_2)->base + 1);
        _8020 = NOVALUE;
        _8022 = IS_SEQUENCE(_8021);
        _8021 = NOVALUE;
        if (_8022 == 0) {
            goto LA; // [293] 319
        }
        _2 = (object)SEQ_PTR(_opts_14455);
        _8024 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8024);
        _8025 = (object)*(((s1_ptr)_2)->base + 2);
        _8024 = NOVALUE;
        _8026 = IS_SEQUENCE(_8025);
        _8025 = NOVALUE;
        if (_8026 == 0)
        {
            _8026 = NOVALUE;
            goto LA; // [309] 319
        }
        else{
            _8026 = NOVALUE;
        }

        /** cmdline.e:423				this_size += 2 -- Allow for ", " between short and long names*/
        _this_size_14458 = _this_size_14458 + 2;
LA: 

        /** cmdline.e:426			has_param = find(HAS_PARAMETER, opts[i][OPTIONS])*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8028 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8028);
        _8029 = (object)*(((s1_ptr)_2)->base + 4);
        _8028 = NOVALUE;
        _has_param_14462 = find_from(112, _8029, 1);
        _8029 = NOVALUE;

        /** cmdline.e:427			if has_param != 0 then*/
        if (_has_param_14462 == 0)
        goto LB; // [336] 437

        /** cmdline.e:428				this_size += 1 -- Allow for " "*/
        _this_size_14458 = _this_size_14458 + 1;

        /** cmdline.e:429				if has_param < length(opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8033 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8033);
        _8034 = (object)*(((s1_ptr)_2)->base + 4);
        _8033 = NOVALUE;
        if (IS_SEQUENCE(_8034)){
                _8035 = SEQ_PTR(_8034)->length;
        }
        else {
            _8035 = 1;
        }
        _8034 = NOVALUE;
        if (_has_param_14462 >= _8035)
        goto LC; // [359] 413

        /** cmdline.e:431					if sequence(opts[i][OPTIONS][has_param]) then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8037 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8037);
        _8038 = (object)*(((s1_ptr)_2)->base + 4);
        _8037 = NOVALUE;
        _2 = (object)SEQ_PTR(_8038);
        _8039 = (object)*(((s1_ptr)_2)->base + _has_param_14462);
        _8038 = NOVALUE;
        _8040 = IS_SEQUENCE(_8039);
        _8039 = NOVALUE;
        if (_8040 == 0)
        {
            _8040 = NOVALUE;
            goto LD; // [380] 402
        }
        else{
            _8040 = NOVALUE;
        }

        /** cmdline.e:432						param_name = opts[i][OPTIONS][has_param]*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8041 = (object)*(((s1_ptr)_2)->base + _i_14464);
        _2 = (object)SEQ_PTR(_8041);
        _8042 = (object)*(((s1_ptr)_2)->base + 4);
        _8041 = NOVALUE;
        DeRef(_param_name_14461);
        _2 = (object)SEQ_PTR(_8042);
        _param_name_14461 = (object)*(((s1_ptr)_2)->base + _has_param_14462);
        Ref(_param_name_14461);
        _8042 = NOVALUE;
        goto LE; // [399] 421
LD: 

        /** cmdline.e:434						param_name = "x"*/
        RefDS(_7874);
        DeRef(_param_name_14461);
        _param_name_14461 = _7874;
        goto LE; // [410] 421
LC: 

        /** cmdline.e:437					param_name = "x"*/
        RefDS(_7874);
        DeRef(_param_name_14461);
        _param_name_14461 = _7874;
LE: 

        /** cmdline.e:439				this_size += 2 + length(param_name)*/
        if (IS_SEQUENCE(_param_name_14461)){
                _8044 = SEQ_PTR(_param_name_14461)->length;
        }
        else {
            _8044 = 1;
        }
        _8045 = 2 + _8044;
        _8044 = NOVALUE;
        _this_size_14458 = _this_size_14458 + _8045;
        _8045 = NOVALUE;
LB: 

        /** cmdline.e:442			if pad_size < this_size then*/
        if (_pad_size_14457 >= _this_size_14458)
        goto LF; // [439] 449

        /** cmdline.e:443				pad_size = this_size*/
        _pad_size_14457 = _this_size_14458;
LF: 

        /** cmdline.e:445		end for*/
L4: 
        _i_14464 = _i_14464 + 1;
        goto L1; // [451] 32
L2: 
        ;
    }

    /** cmdline.e:446		pad_size += 3 -- Allow for minimum gap between cmd and its description*/
    _pad_size_14457 = _pad_size_14457 + 3;

    /** cmdline.e:448		printf(1, "%s options:\n", {cmds[2]})*/
    _2 = (object)SEQ_PTR(_cmds_14456);
    _8050 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8050);
    ((intptr_t*)_2)[1] = _8050;
    _8051 = MAKE_SEQ(_1);
    _8050 = NOVALUE;
    EPrintf(1, _8049, _8051);
    DeRefDS(_8051);
    _8051 = NOVALUE;

    /** cmdline.e:450		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14455)){
            _8052 = SEQ_PTR(_opts_14455)->length;
    }
    else {
        _8052 = 1;
    }
    {
        object _i_14556;
        _i_14556 = 1;
L10: 
        if (_i_14556 > _8052){
            goto L11; // [481] 574
        }

        /** cmdline.e:451			if atom(opts[i][1]) and opts[i][1] = HEADER then*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8053 = (object)*(((s1_ptr)_2)->base + _i_14556);
        _2 = (object)SEQ_PTR(_8053);
        _8054 = (object)*(((s1_ptr)_2)->base + 1);
        _8053 = NOVALUE;
        _8055 = IS_ATOM(_8054);
        _8054 = NOVALUE;
        if (_8055 == 0) {
            goto L12; // [501] 557
        }
        _2 = (object)SEQ_PTR(_opts_14455);
        _8057 = (object)*(((s1_ptr)_2)->base + _i_14556);
        _2 = (object)SEQ_PTR(_8057);
        _8058 = (object)*(((s1_ptr)_2)->base + 1);
        _8057 = NOVALUE;
        if (IS_ATOM_INT(_8058)) {
            _8059 = (_8058 == 72);
        }
        else {
            _8059 = binary_op(EQUALS, _8058, 72);
        }
        _8058 = NOVALUE;
        if (_8059 == 0) {
            DeRef(_8059);
            _8059 = NOVALUE;
            goto L12; // [518] 557
        }
        else {
            if (!IS_ATOM_INT(_8059) && DBL_PTR(_8059)->dbl == 0.0){
                DeRef(_8059);
                _8059 = NOVALUE;
                goto L12; // [518] 557
            }
            DeRef(_8059);
            _8059 = NOVALUE;
        }
        DeRef(_8059);
        _8059 = NOVALUE;

        /** cmdline.e:452				if i > 1 then*/
        if (_i_14556 <= 1)
        goto L13; // [523] 534

        /** cmdline.e:453					printf(1, "\n")*/
        EPrintf(1, _1602, _5);
L13: 

        /** cmdline.e:456				printf(1, "%s\n", { opts[i][2] })*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8062 = (object)*(((s1_ptr)_2)->base + _i_14556);
        _2 = (object)SEQ_PTR(_8062);
        _8063 = (object)*(((s1_ptr)_2)->base + 2);
        _8062 = NOVALUE;
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_8063);
        ((intptr_t*)_2)[1] = _8063;
        _8064 = MAKE_SEQ(_1);
        _8063 = NOVALUE;
        EPrintf(1, _8061, _8064);
        DeRefDS(_8064);
        _8064 = NOVALUE;

        /** cmdline.e:457				continue*/
        goto L14; // [554] 569
L12: 

        /** cmdline.e:460			print_option_help( opts[i], pad_size )*/
        _2 = (object)SEQ_PTR(_opts_14455);
        _8065 = (object)*(((s1_ptr)_2)->base + _i_14556);
        Ref(_8065);
        _28print_option_help(_8065, _pad_size_14457);
        _8065 = NOVALUE;

        /** cmdline.e:461		end for*/
L14: 
        _i_14556 = _i_14556 + 1;
        goto L10; // [569] 488
L11: 
        ;
    }

    /** cmdline.e:463		print_extras_help( opts, extras_mandatory, extras_opt )*/
    RefDS(_opts_14455);
    _28print_extras_help(_opts_14455, _extras_mandatory_14459, _extras_opt_14460);

    /** cmdline.e:465		return pad_size*/
    DeRefDS(_opts_14455);
    DeRefDS(_cmds_14456);
    DeRef(_param_name_14461);
    _8011 = NOVALUE;
    _7998 = NOVALUE;
    _8034 = NOVALUE;
    return _pad_size_14457;
    ;
}


void _28print_extras_help(object _opts_14577, object _extras_mandatory_14578, object _extras_opt_14579)
{
    object _8082 = NOVALUE;
    object _8081 = NOVALUE;
    object _8080 = NOVALUE;
    object _8078 = NOVALUE;
    object _8077 = NOVALUE;
    object _8076 = NOVALUE;
    object _8073 = NOVALUE;
    object _8072 = NOVALUE;
    object _8071 = NOVALUE;
    object _8069 = NOVALUE;
    object _8068 = NOVALUE;
    object _8067 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:470		if extras_mandatory != 0 then*/
    if (_extras_mandatory_14578 == 0)
    goto L1; // [9] 64

    /** cmdline.e:471			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    _2 = (object)SEQ_PTR(_opts_14577);
    _8067 = (object)*(((s1_ptr)_2)->base + _extras_opt_14579);
    _2 = (object)SEQ_PTR(_8067);
    _8068 = (object)*(((s1_ptr)_2)->base + 3);
    _8067 = NOVALUE;
    if (IS_SEQUENCE(_8068)){
            _8069 = SEQ_PTR(_8068)->length;
    }
    else {
        _8069 = 1;
    }
    _8068 = NOVALUE;
    if (_8069 <= 0)
    goto L2; // [26] 55

    /** cmdline.e:472				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    _2 = (object)SEQ_PTR(_opts_14577);
    _8071 = (object)*(((s1_ptr)_2)->base + _extras_opt_14579);
    _2 = (object)SEQ_PTR(_8071);
    _8072 = (object)*(((s1_ptr)_2)->base + 3);
    _8071 = NOVALUE;
    if (IS_SEQUENCE(_1602) && IS_ATOM(_8072)) {
        Ref(_8072);
        Append(&_8073, _1602, _8072);
    }
    else if (IS_ATOM(_1602) && IS_SEQUENCE(_8072)) {
    }
    else {
        Concat((object_ptr)&_8073, _1602, _8072);
    }
    _8072 = NOVALUE;
    EPuts(1, _8073); // DJP 
    DeRefDS(_8073);
    _8073 = NOVALUE;

    /** cmdline.e:473				puts(1, '\n')*/
    EPuts(1, 10); // DJP 
    goto L3; // [52] 120
L2: 

    /** cmdline.e:475				puts(1, "One or more additional arguments are also required\n")*/
    EPuts(1, _8074); // DJP 
    goto L3; // [61] 120
L1: 

    /** cmdline.e:477		elsif extras_opt > 0 then*/
    if (_extras_opt_14579 <= 0)
    goto L4; // [66] 119

    /** cmdline.e:478			if length(opts[extras_opt][DESCRIPTION]) > 0 then*/
    _2 = (object)SEQ_PTR(_opts_14577);
    _8076 = (object)*(((s1_ptr)_2)->base + _extras_opt_14579);
    _2 = (object)SEQ_PTR(_8076);
    _8077 = (object)*(((s1_ptr)_2)->base + 3);
    _8076 = NOVALUE;
    if (IS_SEQUENCE(_8077)){
            _8078 = SEQ_PTR(_8077)->length;
    }
    else {
        _8078 = 1;
    }
    _8077 = NOVALUE;
    if (_8078 <= 0)
    goto L5; // [83] 112

    /** cmdline.e:479				puts(1, "\n" & opts[extras_opt][DESCRIPTION])*/
    _2 = (object)SEQ_PTR(_opts_14577);
    _8080 = (object)*(((s1_ptr)_2)->base + _extras_opt_14579);
    _2 = (object)SEQ_PTR(_8080);
    _8081 = (object)*(((s1_ptr)_2)->base + 3);
    _8080 = NOVALUE;
    if (IS_SEQUENCE(_1602) && IS_ATOM(_8081)) {
        Ref(_8081);
        Append(&_8082, _1602, _8081);
    }
    else if (IS_ATOM(_1602) && IS_SEQUENCE(_8081)) {
    }
    else {
        Concat((object_ptr)&_8082, _1602, _8081);
    }
    _8081 = NOVALUE;
    EPuts(1, _8082); // DJP 
    DeRefDS(_8082);
    _8082 = NOVALUE;

    /** cmdline.e:480				puts(1, '\n')*/
    EPuts(1, 10); // DJP 
    goto L6; // [109] 118
L5: 

    /** cmdline.e:482				puts(1, "One or more additional arguments can be supplied.\n")*/
    EPuts(1, _8083); // DJP 
L6: 
L4: 
L3: 

    /** cmdline.e:485	end procedure*/
    DeRefDS(_opts_14577);
    _8068 = NOVALUE;
    _8077 = NOVALUE;
    return;
    ;
}


void _28local_help(object _opts_14606, object _add_help_rid_14607, object _cmds_14608, object _std_14610, object _parse_options_14611)
{
    object _cmd_14612 = NOVALUE;
    object _is_mandatory_14613 = NOVALUE;
    object _extras_mandatory_14614 = NOVALUE;
    object _extras_opt_14615 = NOVALUE;
    object _auto_help_14616 = NOVALUE;
    object _po_14617 = NOVALUE;
    object _msg_inlined_crash_at_94_14636 = NOVALUE;
    object _pad_size_14643 = NOVALUE;
    object _8093 = NOVALUE;
    object _8090 = NOVALUE;
    object _8088 = NOVALUE;
    object _8085 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:492		integer extras_mandatory = 0*/
    _extras_mandatory_14614 = 0;

    /** cmdline.e:493		integer extras_opt = 0*/
    _extras_opt_14615 = 0;

    /** cmdline.e:494		integer auto_help = 1*/
    _auto_help_14616 = 1;

    /** cmdline.e:496		integer po = 1*/
    _po_14617 = 1;

    /** cmdline.e:497		if atom(parse_options) then*/
    _8085 = IS_ATOM(_parse_options_14611);
    if (_8085 == 0)
    {
        _8085 = NOVALUE;
        goto L1; // [32] 42
    }
    else{
        _8085 = NOVALUE;
    }

    /** cmdline.e:498			parse_options = {parse_options}*/
    _0 = _parse_options_14611;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_parse_options_14611);
    ((intptr_t*)_2)[1] = _parse_options_14611;
    _parse_options_14611 = MAKE_SEQ(_1);
    DeRef(_0);
L1: 

    /** cmdline.e:501		while po <= length(parse_options) do*/
L2: 
    if (IS_SEQUENCE(_parse_options_14611)){
            _8088 = SEQ_PTR(_parse_options_14611)->length;
    }
    else {
        _8088 = 1;
    }
    if (_po_14617 > _8088)
    goto L3; // [50] 143

    /** cmdline.e:502			switch parse_options[po] do*/
    _2 = (object)SEQ_PTR(_parse_options_14611);
    _8090 = (object)*(((s1_ptr)_2)->base + _po_14617);
    if (IS_SEQUENCE(_8090) ){
        goto L4; // [60] 129
    }
    if(!IS_ATOM_INT(_8090)){
        if( (DBL_PTR(_8090)->dbl != (eudouble) ((object) DBL_PTR(_8090)->dbl) ) ){
            goto L4; // [60] 129
        }
        _0 = (object) DBL_PTR(_8090)->dbl;
    }
    else {
        _0 = _8090;
    };
    _8090 = NOVALUE;
    switch ( _0 ){ 

        /** cmdline.e:503				case HELP_RID then*/
        case 1:

        /** cmdline.e:504					if po < length(parse_options) then*/
        if (IS_SEQUENCE(_parse_options_14611)){
                _8093 = SEQ_PTR(_parse_options_14611)->length;
        }
        else {
            _8093 = 1;
        }
        if (_po_14617 >= _8093)
        goto L5; // [74] 93

        /** cmdline.e:505						po += 1*/
        _po_14617 = _po_14617 + 1;

        /** cmdline.e:506						add_help_rid = parse_options[po]*/
        DeRef(_add_help_rid_14607);
        _2 = (object)SEQ_PTR(_parse_options_14611);
        _add_help_rid_14607 = (object)*(((s1_ptr)_2)->base + _po_14617);
        Ref(_add_help_rid_14607);
        goto L6; // [90] 132
L5: 

        /** cmdline.e:508						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_94_14636);
        _msg_inlined_crash_at_94_14636 = EPrintf(-9999999, _8097, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_94_14636);

        /** error.e:53	end procedure*/
        goto L7; // [108] 111
L7: 
        DeRefi(_msg_inlined_crash_at_94_14636);
        _msg_inlined_crash_at_94_14636 = NOVALUE;
        goto L6; // [114] 132

        /** cmdline.e:511				case NO_HELP then*/
        case 9:

        /** cmdline.e:512					auto_help = 0*/
        _auto_help_14616 = 0;
        goto L6; // [125] 132

        /** cmdline.e:514				case else*/
        default:
L4: 
    ;}L6: 

    /** cmdline.e:518			po += 1*/
    _po_14617 = _po_14617 + 1;

    /** cmdline.e:519		end while*/
    goto L2; // [140] 47
L3: 

    /** cmdline.e:521		if std = 0 then*/
    if (_std_14610 != 0)
    goto L8; // [145] 159

    /** cmdline.e:522			opts = standardize_opts(opts, auto_help)*/
    RefDS(_opts_14606);
    _0 = _opts_14606;
    _opts_14606 = _28standardize_opts(_opts_14606, _auto_help_14616);
    DeRefDS(_0);
L8: 

    /** cmdline.e:525		integer pad_size = print_help( opts, cmds )*/
    RefDS(_opts_14606);
    RefDS(_cmds_14608);
    _pad_size_14643 = _28print_help(_opts_14606, _cmds_14608);
    if (!IS_ATOM_INT(_pad_size_14643)) {
        _1 = (object)(DBL_PTR(_pad_size_14643)->dbl);
        DeRefDS(_pad_size_14643);
        _pad_size_14643 = _1;
    }

    /** cmdline.e:527		call_user_help( add_help_rid )*/
    Ref(_add_help_rid_14607);
    _28call_user_help(_add_help_rid_14607);

    /** cmdline.e:529	end procedure*/
    DeRefDS(_opts_14606);
    DeRef(_add_help_rid_14607);
    DeRefDS(_cmds_14608);
    DeRef(_parse_options_14611);
    return;
    ;
}


void _28call_user_help(object _add_help_rid_14648)
{
    object _8117 = NOVALUE;
    object _8116 = NOVALUE;
    object _8115 = NOVALUE;
    object _8114 = NOVALUE;
    object _8112 = NOVALUE;
    object _8111 = NOVALUE;
    object _8110 = NOVALUE;
    object _8109 = NOVALUE;
    object _8108 = NOVALUE;
    object _8106 = NOVALUE;
    object _8104 = NOVALUE;
    object _8102 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:532		if atom(add_help_rid) then*/
    _8102 = IS_ATOM(_add_help_rid_14648);
    if (_8102 == 0)
    {
        _8102 = NOVALUE;
        goto L1; // [6] 34
    }
    else{
        _8102 = NOVALUE;
    }

    /** cmdline.e:533			if add_help_rid >= 0 then*/
    if (binary_op_a(LESS, _add_help_rid_14648, 0)){
        goto L2; // [11] 142
    }

    /** cmdline.e:534				puts(1, "\n")*/
    EPuts(1, _1602); // DJP 

    /** cmdline.e:535				call_proc(add_help_rid, {})*/
    _0 = (object)_00[_add_help_rid_14648].addr;
    (*(intptr_t (*)())_0)(
                         );

    /** cmdline.e:536				puts(1, "\n")*/
    EPuts(1, _1602); // DJP 
    goto L2; // [31] 142
L1: 

    /** cmdline.e:539			if length(add_help_rid) > 0 then*/
    if (IS_SEQUENCE(_add_help_rid_14648)){
            _8104 = SEQ_PTR(_add_help_rid_14648)->length;
    }
    else {
        _8104 = 1;
    }
    if (_8104 <= 0)
    goto L3; // [39] 141

    /** cmdline.e:540				puts(1, "\n")*/
    EPuts(1, _1602); // DJP 

    /** cmdline.e:541				if types:t_display(add_help_rid) then*/
    Ref(_add_help_rid_14648);
    _8106 = _9t_display(_add_help_rid_14648);
    if (_8106 == 0) {
        DeRef(_8106);
        _8106 = NOVALUE;
        goto L4; // [54] 64
    }
    else {
        if (!IS_ATOM_INT(_8106) && DBL_PTR(_8106)->dbl == 0.0){
            DeRef(_8106);
            _8106 = NOVALUE;
            goto L4; // [54] 64
        }
        DeRef(_8106);
        _8106 = NOVALUE;
    }
    DeRef(_8106);
    _8106 = NOVALUE;

    /** cmdline.e:542					add_help_rid = {add_help_rid}*/
    _0 = _add_help_rid_14648;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_add_help_rid_14648);
    ((intptr_t*)_2)[1] = _add_help_rid_14648;
    _add_help_rid_14648 = MAKE_SEQ(_1);
    DeRef(_0);
L4: 

    /** cmdline.e:545				for i = 1 to length(add_help_rid) do*/
    if (IS_SEQUENCE(_add_help_rid_14648)){
            _8108 = SEQ_PTR(_add_help_rid_14648)->length;
    }
    else {
        _8108 = 1;
    }
    {
        object _i_14661;
        _i_14661 = 1;
L5: 
        if (_i_14661 > _8108){
            goto L6; // [69] 135
        }

        /** cmdline.e:546					puts(1, add_help_rid[i])*/
        _2 = (object)SEQ_PTR(_add_help_rid_14648);
        _8109 = (object)*(((s1_ptr)_2)->base + _i_14661);
        EPuts(1, _8109); // DJP 
        _8109 = NOVALUE;

        /** cmdline.e:547					if length(add_help_rid[i]) = 0 or add_help_rid[i][$] != '\n' then*/
        _2 = (object)SEQ_PTR(_add_help_rid_14648);
        _8110 = (object)*(((s1_ptr)_2)->base + _i_14661);
        if (IS_SEQUENCE(_8110)){
                _8111 = SEQ_PTR(_8110)->length;
        }
        else {
            _8111 = 1;
        }
        _8110 = NOVALUE;
        _8112 = (_8111 == 0);
        _8111 = NOVALUE;
        if (_8112 != 0) {
            goto L7; // [98] 122
        }
        _2 = (object)SEQ_PTR(_add_help_rid_14648);
        _8114 = (object)*(((s1_ptr)_2)->base + _i_14661);
        if (IS_SEQUENCE(_8114)){
                _8115 = SEQ_PTR(_8114)->length;
        }
        else {
            _8115 = 1;
        }
        _2 = (object)SEQ_PTR(_8114);
        _8116 = (object)*(((s1_ptr)_2)->base + _8115);
        _8114 = NOVALUE;
        if (IS_ATOM_INT(_8116)) {
            _8117 = (_8116 != 10);
        }
        else {
            _8117 = binary_op(NOTEQ, _8116, 10);
        }
        _8116 = NOVALUE;
        if (_8117 == 0) {
            DeRef(_8117);
            _8117 = NOVALUE;
            goto L8; // [118] 128
        }
        else {
            if (!IS_ATOM_INT(_8117) && DBL_PTR(_8117)->dbl == 0.0){
                DeRef(_8117);
                _8117 = NOVALUE;
                goto L8; // [118] 128
            }
            DeRef(_8117);
            _8117 = NOVALUE;
        }
        DeRef(_8117);
        _8117 = NOVALUE;
L7: 

        /** cmdline.e:548						puts(1, '\n')*/
        EPuts(1, 10); // DJP 
L8: 

        /** cmdline.e:550				end for*/
        _i_14661 = _i_14661 + 1;
        goto L5; // [130] 76
L6: 
        ;
    }

    /** cmdline.e:552				puts(1, "\n")*/
    EPuts(1, _1602); // DJP 
L3: 
L2: 

    /** cmdline.e:555	end procedure*/
    DeRef(_add_help_rid_14648);
    DeRef(_8112);
    _8112 = NOVALUE;
    _8110 = NOVALUE;
    return;
    ;
}


void _28print_option_help(object _opt_14675, object _pad_size_14676)
{
    object _has_param_14683 = NOVALUE;
    object _param_name_14686 = NOVALUE;
    object _is_mandatory_14702 = NOVALUE;
    object _cmd_14706 = NOVALUE;
    object _8174 = NOVALUE;
    object _8173 = NOVALUE;
    object _8172 = NOVALUE;
    object _8171 = NOVALUE;
    object _8170 = NOVALUE;
    object _8169 = NOVALUE;
    object _8168 = NOVALUE;
    object _8165 = NOVALUE;
    object _8161 = NOVALUE;
    object _8158 = NOVALUE;
    object _8157 = NOVALUE;
    object _8152 = NOVALUE;
    object _8151 = NOVALUE;
    object _8150 = NOVALUE;
    object _8146 = NOVALUE;
    object _8143 = NOVALUE;
    object _8142 = NOVALUE;
    object _8139 = NOVALUE;
    object _8138 = NOVALUE;
    object _8136 = NOVALUE;
    object _8135 = NOVALUE;
    object _8133 = NOVALUE;
    object _8132 = NOVALUE;
    object _8131 = NOVALUE;
    object _8130 = NOVALUE;
    object _8127 = NOVALUE;
    object _8126 = NOVALUE;
    object _8123 = NOVALUE;
    object _8122 = NOVALUE;
    object _8121 = NOVALUE;
    object _8120 = NOVALUE;
    object _8119 = NOVALUE;
    object _8118 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:558		if atom(opt[SHORTNAME]) and atom(opt[LONGNAME]) then*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8118 = (object)*(((s1_ptr)_2)->base + 1);
    _8119 = IS_ATOM(_8118);
    _8118 = NOVALUE;
    if (_8119 == 0) {
        goto L1; // [14] 35
    }
    _2 = (object)SEQ_PTR(_opt_14675);
    _8121 = (object)*(((s1_ptr)_2)->base + 2);
    _8122 = IS_ATOM(_8121);
    _8121 = NOVALUE;
    if (_8122 == 0)
    {
        _8122 = NOVALUE;
        goto L1; // [26] 35
    }
    else{
        _8122 = NOVALUE;
    }

    /** cmdline.e:560			return*/
    DeRefDS(_opt_14675);
    DeRef(_param_name_14686);
    DeRef(_cmd_14706);
    return;
L1: 

    /** cmdline.e:563		integer has_param = find(HAS_PARAMETER, opt[OPTIONS])*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8123 = (object)*(((s1_ptr)_2)->base + 4);
    _has_param_14683 = find_from(112, _8123, 1);
    _8123 = NOVALUE;

    /** cmdline.e:564		sequence param_name*/

    /** cmdline.e:565		if has_param != 0 then*/
    if (_has_param_14683 == 0)
    goto L2; // [50] 124

    /** cmdline.e:566			if has_param < length(opt[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8126 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_SEQUENCE(_8126)){
            _8127 = SEQ_PTR(_8126)->length;
    }
    else {
        _8127 = 1;
    }
    _8126 = NOVALUE;
    if (_has_param_14683 >= _8127)
    goto L3; // [63] 115

    /** cmdline.e:567				has_param += 1*/
    _has_param_14683 = _has_param_14683 + 1;

    /** cmdline.e:568				if sequence(opt[OPTIONS][has_param]) then*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8130 = (object)*(((s1_ptr)_2)->base + 4);
    _2 = (object)SEQ_PTR(_8130);
    _8131 = (object)*(((s1_ptr)_2)->base + _has_param_14683);
    _8130 = NOVALUE;
    _8132 = IS_SEQUENCE(_8131);
    _8131 = NOVALUE;
    if (_8132 == 0)
    {
        _8132 = NOVALUE;
        goto L4; // [86] 104
    }
    else{
        _8132 = NOVALUE;
    }

    /** cmdline.e:569					param_name = opt[OPTIONS][has_param]*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8133 = (object)*(((s1_ptr)_2)->base + 4);
    DeRef(_param_name_14686);
    _2 = (object)SEQ_PTR(_8133);
    _param_name_14686 = (object)*(((s1_ptr)_2)->base + _has_param_14683);
    Ref(_param_name_14686);
    _8133 = NOVALUE;
    goto L5; // [101] 123
L4: 

    /** cmdline.e:571					param_name = "x"*/
    RefDS(_7874);
    DeRef(_param_name_14686);
    _param_name_14686 = _7874;
    goto L5; // [112] 123
L3: 

    /** cmdline.e:574				param_name = "x"*/
    RefDS(_7874);
    DeRef(_param_name_14686);
    _param_name_14686 = _7874;
L5: 
L2: 

    /** cmdline.e:577		integer is_mandatory = (find(MANDATORY, opt[OPTIONS]) != 0)*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8135 = (object)*(((s1_ptr)_2)->base + 4);
    _8136 = find_from(109, _8135, 1);
    _8135 = NOVALUE;
    _is_mandatory_14702 = (_8136 != 0);
    _8136 = NOVALUE;

    /** cmdline.e:578		sequence cmd = ""*/
    RefDS(_5);
    DeRef(_cmd_14706);
    _cmd_14706 = _5;

    /** cmdline.e:580		if sequence(opt[SHORTNAME]) then*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8138 = (object)*(((s1_ptr)_2)->base + 1);
    _8139 = IS_SEQUENCE(_8138);
    _8138 = NOVALUE;
    if (_8139 == 0)
    {
        _8139 = NOVALUE;
        goto L6; // [155] 216
    }
    else{
        _8139 = NOVALUE;
    }

    /** cmdline.e:581			if not is_mandatory then*/
    if (_is_mandatory_14702 != 0)
    goto L7; // [160] 170

    /** cmdline.e:582				cmd &= '['*/
    Append(&_cmd_14706, _cmd_14706, 91);
L7: 

    /** cmdline.e:584			cmd &= '-' & opt[SHORTNAME]*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8142 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(45) && IS_ATOM(_8142)) {
    }
    else if (IS_ATOM(45) && IS_SEQUENCE(_8142)) {
        Prepend(&_8143, _8142, 45);
    }
    else {
        Concat((object_ptr)&_8143, 45, _8142);
    }
    _8142 = NOVALUE;
    Concat((object_ptr)&_cmd_14706, _cmd_14706, _8143);
    DeRefDS(_8143);
    _8143 = NOVALUE;

    /** cmdline.e:585			if has_param != 0 then*/
    if (_has_param_14683 == 0)
    goto L8; // [186] 203

    /** cmdline.e:586				cmd &= ' ' & param_name*/
    Prepend(&_8146, _param_name_14686, 32);
    Concat((object_ptr)&_cmd_14706, _cmd_14706, _8146);
    DeRefDS(_8146);
    _8146 = NOVALUE;
L8: 

    /** cmdline.e:588			if not is_mandatory then*/
    if (_is_mandatory_14702 != 0)
    goto L9; // [205] 215

    /** cmdline.e:589				cmd &= ']'*/
    Append(&_cmd_14706, _cmd_14706, 93);
L9: 
L6: 

    /** cmdline.e:593		if sequence(opt[LONGNAME]) then*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8150 = (object)*(((s1_ptr)_2)->base + 2);
    _8151 = IS_SEQUENCE(_8150);
    _8150 = NOVALUE;
    if (_8151 == 0)
    {
        _8151 = NOVALUE;
        goto LA; // [225] 300
    }
    else{
        _8151 = NOVALUE;
    }

    /** cmdline.e:594			if length(cmd) > 0 then cmd &= ", " end if*/
    if (IS_SEQUENCE(_cmd_14706)){
            _8152 = SEQ_PTR(_cmd_14706)->length;
    }
    else {
        _8152 = 1;
    }
    if (_8152 <= 0)
    goto LB; // [233] 242
    Concat((object_ptr)&_cmd_14706, _cmd_14706, _1431);
LB: 

    /** cmdline.e:595			if not is_mandatory then*/
    if (_is_mandatory_14702 != 0)
    goto LC; // [244] 254

    /** cmdline.e:596				cmd &= '['*/
    Append(&_cmd_14706, _cmd_14706, 91);
LC: 

    /** cmdline.e:598			cmd &= "--" & opt[LONGNAME]*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8157 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_7156) && IS_ATOM(_8157)) {
        Ref(_8157);
        Append(&_8158, _7156, _8157);
    }
    else if (IS_ATOM(_7156) && IS_SEQUENCE(_8157)) {
    }
    else {
        Concat((object_ptr)&_8158, _7156, _8157);
    }
    _8157 = NOVALUE;
    Concat((object_ptr)&_cmd_14706, _cmd_14706, _8158);
    DeRefDS(_8158);
    _8158 = NOVALUE;

    /** cmdline.e:599			if has_param != 0 then*/
    if (_has_param_14683 == 0)
    goto LD; // [270] 287

    /** cmdline.e:600				cmd &= '=' & param_name*/
    Prepend(&_8161, _param_name_14686, 61);
    Concat((object_ptr)&_cmd_14706, _cmd_14706, _8161);
    DeRefDS(_8161);
    _8161 = NOVALUE;
LD: 

    /** cmdline.e:602			if not is_mandatory then*/
    if (_is_mandatory_14702 != 0)
    goto LE; // [289] 299

    /** cmdline.e:603				cmd &= ']'*/
    Append(&_cmd_14706, _cmd_14706, 93);
LE: 
LA: 

    /** cmdline.e:610		if length(cmd) > pad_size then*/
    if (IS_SEQUENCE(_cmd_14706)){
            _8165 = SEQ_PTR(_cmd_14706)->length;
    }
    else {
        _8165 = 1;
    }
    if (_8165 <= _pad_size_14676)
    goto LF; // [305] 336

    /** cmdline.e:611			puts(1, "   " & cmd & '\n')*/
    {
        object concat_list[3];

        concat_list[0] = 10;
        concat_list[1] = _cmd_14706;
        concat_list[2] = _8167;
        Concat_N((object_ptr)&_8168, concat_list, 3);
    }
    EPuts(1, _8168); // DJP 
    DeRefDS(_8168);
    _8168 = NOVALUE;

    /** cmdline.e:612			puts(1, repeat(' ', pad_size + 3))*/
    _8169 = _pad_size_14676 + 3;
    _8170 = Repeat(32, _8169);
    _8169 = NOVALUE;
    EPuts(1, _8170); // DJP 
    DeRefDS(_8170);
    _8170 = NOVALUE;
    goto L10; // [333] 352
LF: 

    /** cmdline.e:614			puts(1, "   " & stdseq:pad_tail(cmd, pad_size))*/
    RefDS(_cmd_14706);
    _8171 = _22pad_tail(_cmd_14706, _pad_size_14676, 32);
    if (IS_SEQUENCE(_8167) && IS_ATOM(_8171)) {
        Ref(_8171);
        Append(&_8172, _8167, _8171);
    }
    else if (IS_ATOM(_8167) && IS_SEQUENCE(_8171)) {
    }
    else {
        Concat((object_ptr)&_8172, _8167, _8171);
    }
    DeRef(_8171);
    _8171 = NOVALUE;
    EPuts(1, _8172); // DJP 
    DeRefDS(_8172);
    _8172 = NOVALUE;
L10: 

    /** cmdline.e:617		puts(1, opt[DESCRIPTION] & '\n')*/
    _2 = (object)SEQ_PTR(_opt_14675);
    _8173 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_SEQUENCE(_8173) && IS_ATOM(10)) {
        Append(&_8174, _8173, 10);
    }
    else if (IS_ATOM(_8173) && IS_SEQUENCE(10)) {
    }
    else {
        Concat((object_ptr)&_8174, _8173, 10);
        _8173 = NOVALUE;
    }
    _8173 = NOVALUE;
    EPuts(1, _8174); // DJP 
    DeRefDS(_8174);
    _8174 = NOVALUE;

    /** cmdline.e:618	end procedure*/
    DeRefDS(_opt_14675);
    DeRef(_param_name_14686);
    DeRef(_cmd_14706);
    _8126 = NOVALUE;
    return;
    ;
}


object _28find_opt(object _opts_14764, object _opt_style_14765, object _cmd_text_14766)
{
    object _opt_name_14767 = NOVALUE;
    object _opt_param_14768 = NOVALUE;
    object _param_found_14769 = NOVALUE;
    object _reversed_14770 = NOVALUE;
    object _8276 = NOVALUE;
    object _8274 = NOVALUE;
    object _8273 = NOVALUE;
    object _8271 = NOVALUE;
    object _8270 = NOVALUE;
    object _8269 = NOVALUE;
    object _8268 = NOVALUE;
    object _8267 = NOVALUE;
    object _8264 = NOVALUE;
    object _8263 = NOVALUE;
    object _8262 = NOVALUE;
    object _8260 = NOVALUE;
    object _8259 = NOVALUE;
    object _8258 = NOVALUE;
    object _8257 = NOVALUE;
    object _8255 = NOVALUE;
    object _8254 = NOVALUE;
    object _8253 = NOVALUE;
    object _8252 = NOVALUE;
    object _8251 = NOVALUE;
    object _8250 = NOVALUE;
    object _8249 = NOVALUE;
    object _8248 = NOVALUE;
    object _8247 = NOVALUE;
    object _8246 = NOVALUE;
    object _8245 = NOVALUE;
    object _8244 = NOVALUE;
    object _8238 = NOVALUE;
    object _8237 = NOVALUE;
    object _8236 = NOVALUE;
    object _8228 = NOVALUE;
    object _8227 = NOVALUE;
    object _8225 = NOVALUE;
    object _8223 = NOVALUE;
    object _8222 = NOVALUE;
    object _8220 = NOVALUE;
    object _8219 = NOVALUE;
    object _8218 = NOVALUE;
    object _8217 = NOVALUE;
    object _8216 = NOVALUE;
    object _8214 = NOVALUE;
    object _8213 = NOVALUE;
    object _8211 = NOVALUE;
    object _8209 = NOVALUE;
    object _8208 = NOVALUE;
    object _8206 = NOVALUE;
    object _8205 = NOVALUE;
    object _8204 = NOVALUE;
    object _8203 = NOVALUE;
    object _8201 = NOVALUE;
    object _8200 = NOVALUE;
    object _8197 = NOVALUE;
    object _8195 = NOVALUE;
    object _8194 = NOVALUE;
    object _8192 = NOVALUE;
    object _8190 = NOVALUE;
    object _8188 = NOVALUE;
    object _8187 = NOVALUE;
    object _8185 = NOVALUE;
    object _8184 = NOVALUE;
    object _8183 = NOVALUE;
    object _8182 = NOVALUE;
    object _8181 = NOVALUE;
    object _8179 = NOVALUE;
    object _8178 = NOVALUE;
    object _8176 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:793		integer param_found = 0*/
    _param_found_14769 = 0;

    /** cmdline.e:794		integer reversed = 0*/
    _reversed_14770 = 0;

    /** cmdline.e:796		if length(cmd_text) >= 2 then*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8176 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8176 = 1;
    }
    if (_8176 < 2)
    goto L1; // [20] 85

    /** cmdline.e:798			if cmd_text[1] = '\'' or cmd_text[1] = '"' then*/
    _2 = (object)SEQ_PTR(_cmd_text_14766);
    _8178 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_8178)) {
        _8179 = (_8178 == 39);
    }
    else {
        _8179 = binary_op(EQUALS, _8178, 39);
    }
    _8178 = NOVALUE;
    if (IS_ATOM_INT(_8179)) {
        if (_8179 != 0) {
            goto L2; // [34] 51
        }
    }
    else {
        if (DBL_PTR(_8179)->dbl != 0.0) {
            goto L2; // [34] 51
        }
    }
    _2 = (object)SEQ_PTR(_cmd_text_14766);
    _8181 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_8181)) {
        _8182 = (_8181 == 34);
    }
    else {
        _8182 = binary_op(EQUALS, _8181, 34);
    }
    _8181 = NOVALUE;
    if (_8182 == 0) {
        DeRef(_8182);
        _8182 = NOVALUE;
        goto L3; // [47] 84
    }
    else {
        if (!IS_ATOM_INT(_8182) && DBL_PTR(_8182)->dbl == 0.0){
            DeRef(_8182);
            _8182 = NOVALUE;
            goto L3; // [47] 84
        }
        DeRef(_8182);
        _8182 = NOVALUE;
    }
    DeRef(_8182);
    _8182 = NOVALUE;
L2: 

    /** cmdline.e:799				if cmd_text[$] = cmd_text[1] then*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8183 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8183 = 1;
    }
    _2 = (object)SEQ_PTR(_cmd_text_14766);
    _8184 = (object)*(((s1_ptr)_2)->base + _8183);
    _2 = (object)SEQ_PTR(_cmd_text_14766);
    _8185 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _8184, _8185)){
        _8184 = NOVALUE;
        _8185 = NOVALUE;
        goto L4; // [64] 83
    }
    _8184 = NOVALUE;
    _8185 = NOVALUE;

    /** cmdline.e:800					cmd_text = cmd_text[2 .. $-1]*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8187 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8187 = 1;
    }
    _8188 = _8187 - 1;
    _8187 = NOVALUE;
    rhs_slice_target = (object_ptr)&_cmd_text_14766;
    RHS_Slice(_cmd_text_14766, 2, _8188);
L4: 
L3: 
L1: 

    /** cmdline.e:805		if length(cmd_text) > 0 then*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8190 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8190 = 1;
    }
    if (_8190 <= 0)
    goto L5; // [90] 125

    /** cmdline.e:806			if find(cmd_text[1], "!-") then*/
    _2 = (object)SEQ_PTR(_cmd_text_14766);
    _8192 = (object)*(((s1_ptr)_2)->base + 1);
    _8194 = find_from(_8192, _8193, 1);
    _8192 = NOVALUE;
    if (_8194 == 0)
    {
        _8194 = NOVALUE;
        goto L6; // [105] 124
    }
    else{
        _8194 = NOVALUE;
    }

    /** cmdline.e:807				reversed = 1*/
    _reversed_14770 = 1;

    /** cmdline.e:808				cmd_text = cmd_text[2 .. $]*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8195 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8195 = 1;
    }
    rhs_slice_target = (object_ptr)&_cmd_text_14766;
    RHS_Slice(_cmd_text_14766, 2, _8195);
L6: 
L5: 

    /** cmdline.e:812		if length(cmd_text) < 1 then*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8197 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8197 = 1;
    }
    if (_8197 >= 1)
    goto L7; // [130] 145

    /** cmdline.e:813			return {-1, "Empty command text"}*/
    RefDS(_8199);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = _8199;
    _8200 = MAKE_SEQ(_1);
    DeRefDS(_opts_14764);
    DeRefDS(_opt_style_14765);
    DeRef(_cmd_text_14766);
    DeRef(_opt_name_14767);
    DeRef(_opt_param_14768);
    DeRef(_8188);
    _8188 = NOVALUE;
    DeRef(_8179);
    _8179 = NOVALUE;
    return _8200;
L7: 

    /** cmdline.e:816		opt_name = repeat(' ', length(cmd_text))*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8201 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8201 = 1;
    }
    DeRef(_opt_name_14767);
    _opt_name_14767 = Repeat(32, _8201);
    _8201 = NOVALUE;

    /** cmdline.e:817		opt_param = 0*/
    DeRef(_opt_param_14768);
    _opt_param_14768 = 0;

    /** cmdline.e:818		for i = 1 to length(cmd_text) do*/
    if (IS_SEQUENCE(_cmd_text_14766)){
            _8203 = SEQ_PTR(_cmd_text_14766)->length;
    }
    else {
        _8203 = 1;
    }
    {
        object _i_14805;
        _i_14805 = 1;
L8: 
        if (_i_14805 > _8203){
            goto L9; // [164] 320
        }

        /** cmdline.e:819			if find(cmd_text[i], ":=") then*/
        _2 = (object)SEQ_PTR(_cmd_text_14766);
        _8204 = (object)*(((s1_ptr)_2)->base + _i_14805);
        _8205 = find_from(_8204, _5548, 1);
        _8204 = NOVALUE;
        if (_8205 == 0)
        {
            _8205 = NOVALUE;
            goto LA; // [182] 302
        }
        else{
            _8205 = NOVALUE;
        }

        /** cmdline.e:820				opt_name = opt_name[1 .. i - 1]*/
        _8206 = _i_14805 - 1;
        rhs_slice_target = (object_ptr)&_opt_name_14767;
        RHS_Slice(_opt_name_14767, 1, _8206);

        /** cmdline.e:821				opt_param = cmd_text[i + 1 .. $]*/
        _8208 = _i_14805 + 1;
        if (IS_SEQUENCE(_cmd_text_14766)){
                _8209 = SEQ_PTR(_cmd_text_14766)->length;
        }
        else {
            _8209 = 1;
        }
        rhs_slice_target = (object_ptr)&_opt_param_14768;
        RHS_Slice(_cmd_text_14766, _8208, _8209);

        /** cmdline.e:822				if length(opt_param) >= 2 then*/
        if (IS_SEQUENCE(_opt_param_14768)){
                _8211 = SEQ_PTR(_opt_param_14768)->length;
        }
        else {
            _8211 = 1;
        }
        if (_8211 < 2)
        goto LB; // [215] 280

        /** cmdline.e:824					if opt_param[1] = '\'' or opt_param[1] = '"' then*/
        _2 = (object)SEQ_PTR(_opt_param_14768);
        _8213 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_8213)) {
            _8214 = (_8213 == 39);
        }
        else {
            _8214 = binary_op(EQUALS, _8213, 39);
        }
        _8213 = NOVALUE;
        if (IS_ATOM_INT(_8214)) {
            if (_8214 != 0) {
                goto LC; // [229] 246
            }
        }
        else {
            if (DBL_PTR(_8214)->dbl != 0.0) {
                goto LC; // [229] 246
            }
        }
        _2 = (object)SEQ_PTR(_opt_param_14768);
        _8216 = (object)*(((s1_ptr)_2)->base + 1);
        if (IS_ATOM_INT(_8216)) {
            _8217 = (_8216 == 34);
        }
        else {
            _8217 = binary_op(EQUALS, _8216, 34);
        }
        _8216 = NOVALUE;
        if (_8217 == 0) {
            DeRef(_8217);
            _8217 = NOVALUE;
            goto LD; // [242] 279
        }
        else {
            if (!IS_ATOM_INT(_8217) && DBL_PTR(_8217)->dbl == 0.0){
                DeRef(_8217);
                _8217 = NOVALUE;
                goto LD; // [242] 279
            }
            DeRef(_8217);
            _8217 = NOVALUE;
        }
        DeRef(_8217);
        _8217 = NOVALUE;
LC: 

        /** cmdline.e:825						if opt_param[$] = opt_param[1] then*/
        if (IS_SEQUENCE(_opt_param_14768)){
                _8218 = SEQ_PTR(_opt_param_14768)->length;
        }
        else {
            _8218 = 1;
        }
        _2 = (object)SEQ_PTR(_opt_param_14768);
        _8219 = (object)*(((s1_ptr)_2)->base + _8218);
        _2 = (object)SEQ_PTR(_opt_param_14768);
        _8220 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(NOTEQ, _8219, _8220)){
            _8219 = NOVALUE;
            _8220 = NOVALUE;
            goto LE; // [259] 278
        }
        _8219 = NOVALUE;
        _8220 = NOVALUE;

        /** cmdline.e:826							opt_param = opt_param[2 .. $-1]*/
        if (IS_SEQUENCE(_opt_param_14768)){
                _8222 = SEQ_PTR(_opt_param_14768)->length;
        }
        else {
            _8222 = 1;
        }
        _8223 = _8222 - 1;
        _8222 = NOVALUE;
        rhs_slice_target = (object_ptr)&_opt_param_14768;
        RHS_Slice(_opt_param_14768, 2, _8223);
LE: 
LD: 
LB: 

        /** cmdline.e:831				if length(opt_param) > 0 then*/
        if (IS_SEQUENCE(_opt_param_14768)){
                _8225 = SEQ_PTR(_opt_param_14768)->length;
        }
        else {
            _8225 = 1;
        }
        if (_8225 <= 0)
        goto L9; // [285] 320

        /** cmdline.e:832					param_found = 1*/
        _param_found_14769 = 1;

        /** cmdline.e:835				exit*/
        goto L9; // [297] 320
        goto LF; // [299] 313
LA: 

        /** cmdline.e:837				opt_name[i] = cmd_text[i]*/
        _2 = (object)SEQ_PTR(_cmd_text_14766);
        _8227 = (object)*(((s1_ptr)_2)->base + _i_14805);
        Ref(_8227);
        _2 = (object)SEQ_PTR(_opt_name_14767);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _opt_name_14767 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_14805);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _8227;
        if( _1 != _8227 ){
            DeRef(_1);
        }
        _8227 = NOVALUE;
LF: 

        /** cmdline.e:839		end for*/
        _i_14805 = _i_14805 + 1;
        goto L8; // [315] 171
L9: 
        ;
    }

    /** cmdline.e:841		if param_found then*/
    if (_param_found_14769 == 0)
    {
        goto L10; // [322] 388
    }
    else{
    }

    /** cmdline.e:842			if find( text:lower(opt_param), {"1", "on", "yes", "y", "true", "ok", "+"}) then*/
    Ref(_opt_param_14768);
    _8228 = _13lower(_opt_param_14768);
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_8229);
    ((intptr_t*)_2)[1] = _8229;
    RefDS(_8230);
    ((intptr_t*)_2)[2] = _8230;
    RefDS(_8231);
    ((intptr_t*)_2)[3] = _8231;
    RefDS(_8232);
    ((intptr_t*)_2)[4] = _8232;
    RefDS(_8233);
    ((intptr_t*)_2)[5] = _8233;
    RefDS(_8234);
    ((intptr_t*)_2)[6] = _8234;
    RefDS(_8235);
    ((intptr_t*)_2)[7] = _8235;
    _8236 = MAKE_SEQ(_1);
    _8237 = find_from(_8228, _8236, 1);
    DeRef(_8228);
    _8228 = NOVALUE;
    DeRefDS(_8236);
    _8236 = NOVALUE;
    if (_8237 == 0)
    {
        _8237 = NOVALUE;
        goto L11; // [346] 357
    }
    else{
        _8237 = NOVALUE;
    }

    /** cmdline.e:843				opt_param = 1*/
    DeRef(_opt_param_14768);
    _opt_param_14768 = 1;
    goto L12; // [354] 387
L11: 

    /** cmdline.e:844			elsif find( text:lower(opt_param), {"0", "off", "no", "n", "false", "-"}) then*/
    Ref(_opt_param_14768);
    _8238 = _13lower(_opt_param_14768);
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_8239);
    ((intptr_t*)_2)[1] = _8239;
    RefDS(_8240);
    ((intptr_t*)_2)[2] = _8240;
    RefDS(_8241);
    ((intptr_t*)_2)[3] = _8241;
    RefDS(_8242);
    ((intptr_t*)_2)[4] = _8242;
    RefDS(_8243);
    ((intptr_t*)_2)[5] = _8243;
    RefDS(_7132);
    ((intptr_t*)_2)[6] = _7132;
    _8244 = MAKE_SEQ(_1);
    _8245 = find_from(_8238, _8244, 1);
    DeRef(_8238);
    _8238 = NOVALUE;
    DeRefDS(_8244);
    _8244 = NOVALUE;
    if (_8245 == 0)
    {
        _8245 = NOVALUE;
        goto L13; // [377] 386
    }
    else{
        _8245 = NOVALUE;
    }

    /** cmdline.e:845				opt_param = 0*/
    DeRef(_opt_param_14768);
    _opt_param_14768 = 0;
L13: 
L12: 
L10: 

    /** cmdline.e:849		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14764)){
            _8246 = SEQ_PTR(_opts_14764)->length;
    }
    else {
        _8246 = 1;
    }
    {
        object _i_14859;
        _i_14859 = 1;
L14: 
        if (_i_14859 > _8246){
            goto L15; // [393] 592
        }

        /** cmdline.e:850			if find(NO_CASE,  opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14764);
        _8247 = (object)*(((s1_ptr)_2)->base + _i_14859);
        _2 = (object)SEQ_PTR(_8247);
        _8248 = (object)*(((s1_ptr)_2)->base + 4);
        _8247 = NOVALUE;
        _8249 = find_from(105, _8248, 1);
        _8248 = NOVALUE;
        if (_8249 == 0)
        {
            _8249 = NOVALUE;
            goto L16; // [415] 455
        }
        else{
            _8249 = NOVALUE;
        }

        /** cmdline.e:851				if not equal( text:lower(opt_name), text:lower(opts[i][opt_style[1]])) then*/
        RefDS(_opt_name_14767);
        _8250 = _13lower(_opt_name_14767);
        _2 = (object)SEQ_PTR(_opts_14764);
        _8251 = (object)*(((s1_ptr)_2)->base + _i_14859);
        _2 = (object)SEQ_PTR(_opt_style_14765);
        _8252 = (object)*(((s1_ptr)_2)->base + 1);
        _2 = (object)SEQ_PTR(_8251);
        if (!IS_ATOM_INT(_8252)){
            _8253 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_8252)->dbl));
        }
        else{
            _8253 = (object)*(((s1_ptr)_2)->base + _8252);
        }
        _8251 = NOVALUE;
        Ref(_8253);
        _8254 = _13lower(_8253);
        _8253 = NOVALUE;
        if (_8250 == _8254)
        _8255 = 1;
        else if (IS_ATOM_INT(_8250) && IS_ATOM_INT(_8254))
        _8255 = 0;
        else
        _8255 = (compare(_8250, _8254) == 0);
        DeRef(_8250);
        _8250 = NOVALUE;
        DeRef(_8254);
        _8254 = NOVALUE;
        if (_8255 != 0)
        goto L17; // [444] 482
        _8255 = NOVALUE;

        /** cmdline.e:852					continue*/
        goto L18; // [449] 587
        goto L17; // [452] 482
L16: 

        /** cmdline.e:855				if not equal(opt_name, opts[i][opt_style[1]]) then*/
        _2 = (object)SEQ_PTR(_opts_14764);
        _8257 = (object)*(((s1_ptr)_2)->base + _i_14859);
        _2 = (object)SEQ_PTR(_opt_style_14765);
        _8258 = (object)*(((s1_ptr)_2)->base + 1);
        _2 = (object)SEQ_PTR(_8257);
        if (!IS_ATOM_INT(_8258)){
            _8259 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_8258)->dbl));
        }
        else{
            _8259 = (object)*(((s1_ptr)_2)->base + _8258);
        }
        _8257 = NOVALUE;
        if (_opt_name_14767 == _8259)
        _8260 = 1;
        else if (IS_ATOM_INT(_opt_name_14767) && IS_ATOM_INT(_8259))
        _8260 = 0;
        else
        _8260 = (compare(_opt_name_14767, _8259) == 0);
        _8259 = NOVALUE;
        if (_8260 != 0)
        goto L19; // [473] 481
        _8260 = NOVALUE;

        /** cmdline.e:856					continue*/
        goto L18; // [478] 587
L19: 
L17: 

        /** cmdline.e:860			if find(HAS_PARAMETER,  opts[i][OPTIONS]) = 0 then*/
        _2 = (object)SEQ_PTR(_opts_14764);
        _8262 = (object)*(((s1_ptr)_2)->base + _i_14859);
        _2 = (object)SEQ_PTR(_8262);
        _8263 = (object)*(((s1_ptr)_2)->base + 4);
        _8262 = NOVALUE;
        _8264 = find_from(112, _8263, 1);
        _8263 = NOVALUE;
        if (_8264 != 0)
        goto L1A; // [497] 518

        /** cmdline.e:861				if param_found then*/
        if (_param_found_14769 == 0)
        {
            goto L1B; // [503] 517
        }
        else{
        }

        /** cmdline.e:862					return {0, "Option should not have a parameter"}*/
        RefDS(_8266);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 0;
        ((intptr_t *)_2)[2] = _8266;
        _8267 = MAKE_SEQ(_1);
        DeRefDS(_opts_14764);
        DeRefDS(_opt_style_14765);
        DeRef(_cmd_text_14766);
        DeRef(_opt_name_14767);
        DeRef(_opt_param_14768);
        DeRef(_8188);
        _8188 = NOVALUE;
        _8252 = NOVALUE;
        DeRef(_8200);
        _8200 = NOVALUE;
        _8258 = NOVALUE;
        DeRef(_8179);
        _8179 = NOVALUE;
        DeRef(_8223);
        _8223 = NOVALUE;
        DeRef(_8208);
        _8208 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        return _8267;
L1B: 
L1A: 

        /** cmdline.e:866			if param_found then*/
        if (_param_found_14769 == 0)
        {
            goto L1C; // [520] 539
        }
        else{
        }

        /** cmdline.e:867				return {i, opt_name, reversed, opt_param}*/
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_14859;
        RefDS(_opt_name_14767);
        ((intptr_t*)_2)[2] = _opt_name_14767;
        ((intptr_t*)_2)[3] = _reversed_14770;
        Ref(_opt_param_14768);
        ((intptr_t*)_2)[4] = _opt_param_14768;
        _8268 = MAKE_SEQ(_1);
        DeRefDS(_opts_14764);
        DeRefDS(_opt_style_14765);
        DeRef(_cmd_text_14766);
        DeRefDS(_opt_name_14767);
        DeRef(_opt_param_14768);
        DeRef(_8188);
        _8188 = NOVALUE;
        _8252 = NOVALUE;
        DeRef(_8267);
        _8267 = NOVALUE;
        DeRef(_8200);
        _8200 = NOVALUE;
        _8258 = NOVALUE;
        DeRef(_8179);
        _8179 = NOVALUE;
        DeRef(_8223);
        _8223 = NOVALUE;
        DeRef(_8208);
        _8208 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        return _8268;
        goto L1D; // [536] 585
L1C: 

        /** cmdline.e:869				if find(HAS_PARAMETER, opts[i][OPTIONS]) = 0 then*/
        _2 = (object)SEQ_PTR(_opts_14764);
        _8269 = (object)*(((s1_ptr)_2)->base + _i_14859);
        _2 = (object)SEQ_PTR(_8269);
        _8270 = (object)*(((s1_ptr)_2)->base + 4);
        _8269 = NOVALUE;
        _8271 = find_from(112, _8270, 1);
        _8270 = NOVALUE;
        if (_8271 != 0)
        goto L1E; // [554] 572

        /** cmdline.e:870					return {i, opt_name, reversed, 1 }*/
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_14859;
        RefDS(_opt_name_14767);
        ((intptr_t*)_2)[2] = _opt_name_14767;
        ((intptr_t*)_2)[3] = _reversed_14770;
        ((intptr_t*)_2)[4] = 1;
        _8273 = MAKE_SEQ(_1);
        DeRefDS(_opts_14764);
        DeRefDS(_opt_style_14765);
        DeRef(_cmd_text_14766);
        DeRefDS(_opt_name_14767);
        DeRef(_opt_param_14768);
        DeRef(_8188);
        _8188 = NOVALUE;
        _8252 = NOVALUE;
        DeRef(_8267);
        _8267 = NOVALUE;
        DeRef(_8200);
        _8200 = NOVALUE;
        _8258 = NOVALUE;
        DeRef(_8179);
        _8179 = NOVALUE;
        DeRef(_8223);
        _8223 = NOVALUE;
        DeRef(_8208);
        _8208 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8268);
        _8268 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        return _8273;
L1E: 

        /** cmdline.e:873				return {i, opt_name, reversed}*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _i_14859;
        RefDS(_opt_name_14767);
        ((intptr_t*)_2)[2] = _opt_name_14767;
        ((intptr_t*)_2)[3] = _reversed_14770;
        _8274 = MAKE_SEQ(_1);
        DeRefDS(_opts_14764);
        DeRefDS(_opt_style_14765);
        DeRef(_cmd_text_14766);
        DeRefDS(_opt_name_14767);
        DeRef(_opt_param_14768);
        DeRef(_8188);
        _8188 = NOVALUE;
        _8252 = NOVALUE;
        DeRef(_8267);
        _8267 = NOVALUE;
        DeRef(_8200);
        _8200 = NOVALUE;
        _8258 = NOVALUE;
        DeRef(_8179);
        _8179 = NOVALUE;
        DeRef(_8223);
        _8223 = NOVALUE;
        DeRef(_8208);
        _8208 = NOVALUE;
        DeRef(_8206);
        _8206 = NOVALUE;
        DeRef(_8268);
        _8268 = NOVALUE;
        DeRef(_8273);
        _8273 = NOVALUE;
        DeRef(_8214);
        _8214 = NOVALUE;
        return _8274;
L1D: 

        /** cmdline.e:875		end for*/
L18: 
        _i_14859 = _i_14859 + 1;
        goto L14; // [587] 400
L15: 
        ;
    }

    /** cmdline.e:877		return {0, "Unrecognised"}*/
    RefDS(_8275);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = _8275;
    _8276 = MAKE_SEQ(_1);
    DeRefDS(_opts_14764);
    DeRefDS(_opt_style_14765);
    DeRef(_cmd_text_14766);
    DeRef(_opt_name_14767);
    DeRef(_opt_param_14768);
    DeRef(_8188);
    _8188 = NOVALUE;
    _8252 = NOVALUE;
    DeRef(_8267);
    _8267 = NOVALUE;
    DeRef(_8200);
    _8200 = NOVALUE;
    _8258 = NOVALUE;
    DeRef(_8179);
    _8179 = NOVALUE;
    DeRef(_8223);
    _8223 = NOVALUE;
    DeRef(_8208);
    _8208 = NOVALUE;
    DeRef(_8206);
    _8206 = NOVALUE;
    DeRef(_8268);
    _8268 = NOVALUE;
    DeRef(_8274);
    _8274 = NOVALUE;
    DeRef(_8273);
    _8273 = NOVALUE;
    DeRef(_8214);
    _8214 = NOVALUE;
    return _8276;
    ;
}


object _28get_help_options(object _opts_14902)
{
    object _help_opts_14903 = NOVALUE;
    object _8299 = NOVALUE;
    object _8298 = NOVALUE;
    object _8297 = NOVALUE;
    object _8295 = NOVALUE;
    object _8294 = NOVALUE;
    object _8293 = NOVALUE;
    object _8291 = NOVALUE;
    object _8290 = NOVALUE;
    object _8289 = NOVALUE;
    object _8288 = NOVALUE;
    object _8287 = NOVALUE;
    object _8285 = NOVALUE;
    object _8284 = NOVALUE;
    object _8283 = NOVALUE;
    object _8282 = NOVALUE;
    object _8281 = NOVALUE;
    object _8280 = NOVALUE;
    object _8279 = NOVALUE;
    object _8278 = NOVALUE;
    object _8277 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:881		sequence help_opts = {}*/
    RefDS(_5);
    DeRef(_help_opts_14903);
    _help_opts_14903 = _5;

    /** cmdline.e:883		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_14902)){
            _8277 = SEQ_PTR(_opts_14902)->length;
    }
    else {
        _8277 = 1;
    }
    {
        object _i_14905;
        _i_14905 = 1;
L1: 
        if (_i_14905 > _8277){
            goto L2; // [15] 170
        }

        /** cmdline.e:884			if find(HELP, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14902);
        _8278 = (object)*(((s1_ptr)_2)->base + _i_14905);
        _2 = (object)SEQ_PTR(_8278);
        _8279 = (object)*(((s1_ptr)_2)->base + 4);
        _8278 = NOVALUE;
        _8280 = find_from(104, _8279, 1);
        _8279 = NOVALUE;
        if (_8280 == 0)
        {
            _8280 = NOVALUE;
            goto L3; // [37] 163
        }
        else{
            _8280 = NOVALUE;
        }

        /** cmdline.e:885				if sequence(opts[i][SHORTNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_14902);
        _8281 = (object)*(((s1_ptr)_2)->base + _i_14905);
        _2 = (object)SEQ_PTR(_8281);
        _8282 = (object)*(((s1_ptr)_2)->base + 1);
        _8281 = NOVALUE;
        _8283 = IS_SEQUENCE(_8282);
        _8282 = NOVALUE;
        if (_8283 == 0)
        {
            _8283 = NOVALUE;
            goto L4; // [53] 71
        }
        else{
            _8283 = NOVALUE;
        }

        /** cmdline.e:886					help_opts = append(help_opts, opts[i][SHORTNAME])*/
        _2 = (object)SEQ_PTR(_opts_14902);
        _8284 = (object)*(((s1_ptr)_2)->base + _i_14905);
        _2 = (object)SEQ_PTR(_8284);
        _8285 = (object)*(((s1_ptr)_2)->base + 1);
        _8284 = NOVALUE;
        Ref(_8285);
        Append(&_help_opts_14903, _help_opts_14903, _8285);
        _8285 = NOVALUE;
L4: 

        /** cmdline.e:889				if sequence(opts[i][LONGNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_14902);
        _8287 = (object)*(((s1_ptr)_2)->base + _i_14905);
        _2 = (object)SEQ_PTR(_8287);
        _8288 = (object)*(((s1_ptr)_2)->base + 2);
        _8287 = NOVALUE;
        _8289 = IS_SEQUENCE(_8288);
        _8288 = NOVALUE;
        if (_8289 == 0)
        {
            _8289 = NOVALUE;
            goto L5; // [84] 102
        }
        else{
            _8289 = NOVALUE;
        }

        /** cmdline.e:890					help_opts = append(help_opts, opts[i][LONGNAME])*/
        _2 = (object)SEQ_PTR(_opts_14902);
        _8290 = (object)*(((s1_ptr)_2)->base + _i_14905);
        _2 = (object)SEQ_PTR(_8290);
        _8291 = (object)*(((s1_ptr)_2)->base + 2);
        _8290 = NOVALUE;
        Ref(_8291);
        Append(&_help_opts_14903, _help_opts_14903, _8291);
        _8291 = NOVALUE;
L5: 

        /** cmdline.e:893				if find(NO_CASE, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_14902);
        _8293 = (object)*(((s1_ptr)_2)->base + _i_14905);
        _2 = (object)SEQ_PTR(_8293);
        _8294 = (object)*(((s1_ptr)_2)->base + 4);
        _8293 = NOVALUE;
        _8295 = find_from(105, _8294, 1);
        _8294 = NOVALUE;
        if (_8295 == 0)
        {
            _8295 = NOVALUE;
            goto L6; // [117] 162
        }
        else{
            _8295 = NOVALUE;
        }

        /** cmdline.e:894					help_opts = text:lower(help_opts)*/
        RefDS(_help_opts_14903);
        _0 = _help_opts_14903;
        _help_opts_14903 = _13lower(_help_opts_14903);
        DeRefDS(_0);

        /** cmdline.e:895					for j = 1 to length(help_opts) do*/
        if (IS_SEQUENCE(_help_opts_14903)){
                _8297 = SEQ_PTR(_help_opts_14903)->length;
        }
        else {
            _8297 = 1;
        }
        {
            object _j_14931;
            _j_14931 = 1;
L7: 
            if (_j_14931 > _8297){
                goto L8; // [133] 161
            }

            /** cmdline.e:896						help_opts = append( help_opts, text:upper(help_opts[j]) )*/
            _2 = (object)SEQ_PTR(_help_opts_14903);
            _8298 = (object)*(((s1_ptr)_2)->base + _j_14931);
            Ref(_8298);
            _8299 = _13upper(_8298);
            _8298 = NOVALUE;
            Ref(_8299);
            Append(&_help_opts_14903, _help_opts_14903, _8299);
            DeRef(_8299);
            _8299 = NOVALUE;

            /** cmdline.e:897					end for*/
            _j_14931 = _j_14931 + 1;
            goto L7; // [156] 140
L8: 
            ;
        }
L6: 
L3: 

        /** cmdline.e:900		end for*/
        _i_14905 = _i_14905 + 1;
        goto L1; // [165] 22
L2: 
        ;
    }

    /** cmdline.e:901		return help_opts*/
    DeRefDS(_opts_14902);
    return _help_opts_14903;
    ;
}


object _28parse_at_cmds(object _cmd_14938, object _cmds_14939, object _opts_14940, object _arg_idx_14941, object _add_help_rid_14942, object _parse_options_14943, object _help_on_error_14944, object _auto_help_14945)
{
    object _at_cmds_14946 = NOVALUE;
    object _j_14947 = NOVALUE;
    object _cmdex_15031 = NOVALUE;
    object _8380 = NOVALUE;
    object _8379 = NOVALUE;
    object _8376 = NOVALUE;
    object _8375 = NOVALUE;
    object _8374 = NOVALUE;
    object _8373 = NOVALUE;
    object _8372 = NOVALUE;
    object _8371 = NOVALUE;
    object _8370 = NOVALUE;
    object _8369 = NOVALUE;
    object _8368 = NOVALUE;
    object _8367 = NOVALUE;
    object _8366 = NOVALUE;
    object _8365 = NOVALUE;
    object _8364 = NOVALUE;
    object _8363 = NOVALUE;
    object _8362 = NOVALUE;
    object _8361 = NOVALUE;
    object _8360 = NOVALUE;
    object _8359 = NOVALUE;
    object _8358 = NOVALUE;
    object _8357 = NOVALUE;
    object _8356 = NOVALUE;
    object _8355 = NOVALUE;
    object _8354 = NOVALUE;
    object _8353 = NOVALUE;
    object _8352 = NOVALUE;
    object _8351 = NOVALUE;
    object _8350 = NOVALUE;
    object _8349 = NOVALUE;
    object _8348 = NOVALUE;
    object _8347 = NOVALUE;
    object _8346 = NOVALUE;
    object _8345 = NOVALUE;
    object _8342 = NOVALUE;
    object _8341 = NOVALUE;
    object _8340 = NOVALUE;
    object _8339 = NOVALUE;
    object _8338 = NOVALUE;
    object _8336 = NOVALUE;
    object _8335 = NOVALUE;
    object _8332 = NOVALUE;
    object _8331 = NOVALUE;
    object _8330 = NOVALUE;
    object _8329 = NOVALUE;
    object _8328 = NOVALUE;
    object _8326 = NOVALUE;
    object _8325 = NOVALUE;
    object _8324 = NOVALUE;
    object _8323 = NOVALUE;
    object _8320 = NOVALUE;
    object _8318 = NOVALUE;
    object _8317 = NOVALUE;
    object _8316 = NOVALUE;
    object _8314 = NOVALUE;
    object _8312 = NOVALUE;
    object _8311 = NOVALUE;
    object _8309 = NOVALUE;
    object _8307 = NOVALUE;
    object _8306 = NOVALUE;
    object _8305 = NOVALUE;
    object _8304 = NOVALUE;
    object _8303 = NOVALUE;
    object _8302 = NOVALUE;
    object _8301 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:912		if length(cmd) > 2 and cmd[2] = '@' then*/
    if (IS_SEQUENCE(_cmd_14938)){
            _8301 = SEQ_PTR(_cmd_14938)->length;
    }
    else {
        _8301 = 1;
    }
    _8302 = (_8301 > 2);
    _8301 = NOVALUE;
    if (_8302 == 0) {
        goto L1; // [22] 78
    }
    _2 = (object)SEQ_PTR(_cmd_14938);
    _8304 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_8304)) {
        _8305 = (_8304 == 64);
    }
    else {
        _8305 = binary_op(EQUALS, _8304, 64);
    }
    _8304 = NOVALUE;
    if (_8305 == 0) {
        DeRef(_8305);
        _8305 = NOVALUE;
        goto L1; // [35] 78
    }
    else {
        if (!IS_ATOM_INT(_8305) && DBL_PTR(_8305)->dbl == 0.0){
            DeRef(_8305);
            _8305 = NOVALUE;
            goto L1; // [35] 78
        }
        DeRef(_8305);
        _8305 = NOVALUE;
    }
    DeRef(_8305);
    _8305 = NOVALUE;

    /** cmdline.e:914			at_cmds = io:read_lines(cmd[3..$])*/
    if (IS_SEQUENCE(_cmd_14938)){
            _8306 = SEQ_PTR(_cmd_14938)->length;
    }
    else {
        _8306 = 1;
    }
    rhs_slice_target = (object_ptr)&_8307;
    RHS_Slice(_cmd_14938, 3, _8306);
    _0 = _at_cmds_14946;
    _at_cmds_14946 = _19read_lines(_8307);
    DeRef(_0);
    _8307 = NOVALUE;

    /** cmdline.e:915			if equal(at_cmds, -1) then*/
    if (_at_cmds_14946 == -1)
    _8309 = 1;
    else if (IS_ATOM_INT(_at_cmds_14946) && IS_ATOM_INT(-1))
    _8309 = 0;
    else
    _8309 = (compare(_at_cmds_14946, -1) == 0);
    if (_8309 == 0)
    {
        _8309 = NOVALUE;
        goto L2; // [58] 156
    }
    else{
        _8309 = NOVALUE;
    }

    /** cmdline.e:918				cmds = eu:remove(cmds, arg_idx)*/
    {
        s1_ptr assign_space = SEQ_PTR(_cmds_14939);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_arg_idx_14941)) ? _arg_idx_14941 : (object)(DBL_PTR(_arg_idx_14941)->dbl);
        int stop = (IS_ATOM_INT(_arg_idx_14941)) ? _arg_idx_14941 : (object)(DBL_PTR(_arg_idx_14941)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_cmds_14939), start, &_cmds_14939 );
            }
            else Tail(SEQ_PTR(_cmds_14939), stop+1, &_cmds_14939);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_cmds_14939), start, &_cmds_14939);
        }
        else {
            assign_slice_seq = &assign_space;
            _cmds_14939 = Remove_elements(start, stop, (SEQ_PTR(_cmds_14939)->ref == 1));
        }
    }

    /** cmdline.e:919				return cmds*/
    DeRefDS(_cmd_14938);
    DeRefDS(_opts_14940);
    DeRef(_add_help_rid_14942);
    DeRef(_parse_options_14943);
    DeRef(_at_cmds_14946);
    DeRef(_8302);
    _8302 = NOVALUE;
    return _cmds_14939;
    goto L2; // [75] 156
L1: 

    /** cmdline.e:923			at_cmds = io:read_lines(cmd[2..$])*/
    if (IS_SEQUENCE(_cmd_14938)){
            _8311 = SEQ_PTR(_cmd_14938)->length;
    }
    else {
        _8311 = 1;
    }
    rhs_slice_target = (object_ptr)&_8312;
    RHS_Slice(_cmd_14938, 2, _8311);
    _0 = _at_cmds_14946;
    _at_cmds_14946 = _19read_lines(_8312);
    DeRef(_0);
    _8312 = NOVALUE;

    /** cmdline.e:924			if equal(at_cmds, -1) then*/
    if (_at_cmds_14946 == -1)
    _8314 = 1;
    else if (IS_ATOM_INT(_at_cmds_14946) && IS_ATOM_INT(-1))
    _8314 = 0;
    else
    _8314 = (compare(_at_cmds_14946, -1) == 0);
    if (_8314 == 0)
    {
        _8314 = NOVALUE;
        goto L3; // [98] 155
    }
    else{
        _8314 = NOVALUE;
    }

    /** cmdline.e:925				printf(2, "Cannot access '@' argument file '%s'\n", {cmd[2..$]})*/
    if (IS_SEQUENCE(_cmd_14938)){
            _8316 = SEQ_PTR(_cmd_14938)->length;
    }
    else {
        _8316 = 1;
    }
    rhs_slice_target = (object_ptr)&_8317;
    RHS_Slice(_cmd_14938, 2, _8316);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _8317;
    _8318 = MAKE_SEQ(_1);
    _8317 = NOVALUE;
    EPrintf(2, _8315, _8318);
    DeRefDS(_8318);
    _8318 = NOVALUE;

    /** cmdline.e:926				if help_on_error then*/
    if (_help_on_error_14944 == 0)
    {
        goto L4; // [121] 136
    }
    else{
    }

    /** cmdline.e:927					local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    RefDS(_opts_14940);
    Ref(_add_help_rid_14942);
    RefDS(_cmds_14939);
    Ref(_parse_options_14943);
    _28local_help(_opts_14940, _add_help_rid_14942, _cmds_14939, 1, _parse_options_14943);
    goto L5; // [133] 149
L4: 

    /** cmdline.e:928				elsif auto_help then*/
    if (_auto_help_14945 == 0)
    {
        goto L6; // [138] 148
    }
    else{
    }

    /** cmdline.e:929					printf(2,"Try '--help' for more information.\n",{})          */
    EPrintf(2, _8319, _5);
L6: 
L5: 

    /** cmdline.e:931				local_abort(1)*/
    _28local_abort(1);
L3: 
L2: 

    /** cmdline.e:936		j = 0*/
    _j_14947 = 0;

    /** cmdline.e:937		while j < length(at_cmds) do*/
L7: 
    if (IS_SEQUENCE(_at_cmds_14946)){
            _8320 = SEQ_PTR(_at_cmds_14946)->length;
    }
    else {
        _8320 = 1;
    }
    if (_j_14947 >= _8320)
    goto L8; // [171] 492

    /** cmdline.e:938			j += 1*/
    _j_14947 = _j_14947 + 1;

    /** cmdline.e:939			at_cmds[j] = text:trim(at_cmds[j])*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8323 = (object)*(((s1_ptr)_2)->base + _j_14947);
    Ref(_8323);
    RefDS(_4749);
    _8324 = _13trim(_8323, _4749, 0);
    _8323 = NOVALUE;
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_14946 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_14947);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8324;
    if( _1 != _8324 ){
        DeRef(_1);
    }
    _8324 = NOVALUE;

    /** cmdline.e:940			if length(at_cmds[j]) = 0 then*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8325 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8325)){
            _8326 = SEQ_PTR(_8325)->length;
    }
    else {
        _8326 = 1;
    }
    _8325 = NOVALUE;
    if (_8326 != 0)
    goto L9; // [206] 246

    /** cmdline.e:941				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    _8328 = _j_14947 - 1;
    rhs_slice_target = (object_ptr)&_8329;
    RHS_Slice(_at_cmds_14946, 1, _8328);
    _8330 = _j_14947 + 1;
    if (_8330 > MAXINT){
        _8330 = NewDouble((eudouble)_8330);
    }
    if (IS_SEQUENCE(_at_cmds_14946)){
            _8331 = SEQ_PTR(_at_cmds_14946)->length;
    }
    else {
        _8331 = 1;
    }
    rhs_slice_target = (object_ptr)&_8332;
    RHS_Slice(_at_cmds_14946, _8330, _8331);
    Concat((object_ptr)&_at_cmds_14946, _8329, _8332);
    DeRefDS(_8329);
    _8329 = NOVALUE;
    DeRef(_8329);
    _8329 = NOVALUE;
    DeRefDS(_8332);
    _8332 = NOVALUE;

    /** cmdline.e:942				j -= 1*/
    _j_14947 = _j_14947 - 1;
    goto L7; // [243] 166
L9: 

    /** cmdline.e:944			elsif at_cmds[j][1] = '#' then*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8335 = (object)*(((s1_ptr)_2)->base + _j_14947);
    _2 = (object)SEQ_PTR(_8335);
    _8336 = (object)*(((s1_ptr)_2)->base + 1);
    _8335 = NOVALUE;
    if (binary_op_a(NOTEQ, _8336, 35)){
        _8336 = NOVALUE;
        goto LA; // [256] 296
    }
    _8336 = NOVALUE;

    /** cmdline.e:945				at_cmds = at_cmds[1 .. j-1] & at_cmds[j+1 ..$]*/
    _8338 = _j_14947 - 1;
    rhs_slice_target = (object_ptr)&_8339;
    RHS_Slice(_at_cmds_14946, 1, _8338);
    _8340 = _j_14947 + 1;
    if (_8340 > MAXINT){
        _8340 = NewDouble((eudouble)_8340);
    }
    if (IS_SEQUENCE(_at_cmds_14946)){
            _8341 = SEQ_PTR(_at_cmds_14946)->length;
    }
    else {
        _8341 = 1;
    }
    rhs_slice_target = (object_ptr)&_8342;
    RHS_Slice(_at_cmds_14946, _8340, _8341);
    Concat((object_ptr)&_at_cmds_14946, _8339, _8342);
    DeRefDS(_8339);
    _8339 = NOVALUE;
    DeRef(_8339);
    _8339 = NOVALUE;
    DeRefDS(_8342);
    _8342 = NOVALUE;

    /** cmdline.e:946				j -= 1*/
    _j_14947 = _j_14947 - 1;
    goto L7; // [293] 166
LA: 

    /** cmdline.e:948			elsif at_cmds[j][1] = '"' and at_cmds[j][$] = '"' and length(at_cmds[j]) >= 2 then*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8345 = (object)*(((s1_ptr)_2)->base + _j_14947);
    _2 = (object)SEQ_PTR(_8345);
    _8346 = (object)*(((s1_ptr)_2)->base + 1);
    _8345 = NOVALUE;
    if (IS_ATOM_INT(_8346)) {
        _8347 = (_8346 == 34);
    }
    else {
        _8347 = binary_op(EQUALS, _8346, 34);
    }
    _8346 = NOVALUE;
    if (IS_ATOM_INT(_8347)) {
        if (_8347 == 0) {
            DeRef(_8348);
            _8348 = 0;
            goto LB; // [310] 333
        }
    }
    else {
        if (DBL_PTR(_8347)->dbl == 0.0) {
            DeRef(_8348);
            _8348 = 0;
            goto LB; // [310] 333
        }
    }
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8349 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8349)){
            _8350 = SEQ_PTR(_8349)->length;
    }
    else {
        _8350 = 1;
    }
    _2 = (object)SEQ_PTR(_8349);
    _8351 = (object)*(((s1_ptr)_2)->base + _8350);
    _8349 = NOVALUE;
    if (IS_ATOM_INT(_8351)) {
        _8352 = (_8351 == 34);
    }
    else {
        _8352 = binary_op(EQUALS, _8351, 34);
    }
    _8351 = NOVALUE;
    DeRef(_8348);
    if (IS_ATOM_INT(_8352))
    _8348 = (_8352 != 0);
    else
    _8348 = DBL_PTR(_8352)->dbl != 0.0;
LB: 
    if (_8348 == 0) {
        goto LC; // [333] 377
    }
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8354 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8354)){
            _8355 = SEQ_PTR(_8354)->length;
    }
    else {
        _8355 = 1;
    }
    _8354 = NOVALUE;
    _8356 = (_8355 >= 2);
    _8355 = NOVALUE;
    if (_8356 == 0)
    {
        DeRef(_8356);
        _8356 = NOVALUE;
        goto LC; // [349] 377
    }
    else{
        DeRef(_8356);
        _8356 = NOVALUE;
    }

    /** cmdline.e:949				at_cmds[j] = at_cmds[j][2 .. $-1]*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8357 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8357)){
            _8358 = SEQ_PTR(_8357)->length;
    }
    else {
        _8358 = 1;
    }
    _8359 = _8358 - 1;
    _8358 = NOVALUE;
    rhs_slice_target = (object_ptr)&_8360;
    RHS_Slice(_8357, 2, _8359);
    _8357 = NOVALUE;
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _at_cmds_14946 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _j_14947);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8360;
    if( _1 != _8360 ){
        DeRef(_1);
    }
    _8360 = NOVALUE;
    goto L7; // [374] 166
LC: 

    /** cmdline.e:951			elsif at_cmds[j][1] = '\'' and at_cmds[j][$] = '\'' and length(at_cmds[j]) >= 2 then*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8361 = (object)*(((s1_ptr)_2)->base + _j_14947);
    _2 = (object)SEQ_PTR(_8361);
    _8362 = (object)*(((s1_ptr)_2)->base + 1);
    _8361 = NOVALUE;
    if (IS_ATOM_INT(_8362)) {
        _8363 = (_8362 == 39);
    }
    else {
        _8363 = binary_op(EQUALS, _8362, 39);
    }
    _8362 = NOVALUE;
    if (IS_ATOM_INT(_8363)) {
        if (_8363 == 0) {
            DeRef(_8364);
            _8364 = 0;
            goto LD; // [391] 414
        }
    }
    else {
        if (DBL_PTR(_8363)->dbl == 0.0) {
            DeRef(_8364);
            _8364 = 0;
            goto LD; // [391] 414
        }
    }
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8365 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8365)){
            _8366 = SEQ_PTR(_8365)->length;
    }
    else {
        _8366 = 1;
    }
    _2 = (object)SEQ_PTR(_8365);
    _8367 = (object)*(((s1_ptr)_2)->base + _8366);
    _8365 = NOVALUE;
    if (IS_ATOM_INT(_8367)) {
        _8368 = (_8367 == 39);
    }
    else {
        _8368 = binary_op(EQUALS, _8367, 39);
    }
    _8367 = NOVALUE;
    DeRef(_8364);
    if (IS_ATOM_INT(_8368))
    _8364 = (_8368 != 0);
    else
    _8364 = DBL_PTR(_8368)->dbl != 0.0;
LD: 
    if (_8364 == 0) {
        goto LE; // [414] 484
    }
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8370 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8370)){
            _8371 = SEQ_PTR(_8370)->length;
    }
    else {
        _8371 = 1;
    }
    _8370 = NOVALUE;
    _8372 = (_8371 >= 2);
    _8371 = NOVALUE;
    if (_8372 == 0)
    {
        DeRef(_8372);
        _8372 = NOVALUE;
        goto LE; // [430] 484
    }
    else{
        DeRef(_8372);
        _8372 = NOVALUE;
    }

    /** cmdline.e:952				sequence cmdex = stdseq:split(at_cmds[j][2 .. $-1],' ', 1) -- Empty words removed.*/
    _2 = (object)SEQ_PTR(_at_cmds_14946);
    _8373 = (object)*(((s1_ptr)_2)->base + _j_14947);
    if (IS_SEQUENCE(_8373)){
            _8374 = SEQ_PTR(_8373)->length;
    }
    else {
        _8374 = 1;
    }
    _8375 = _8374 - 1;
    _8374 = NOVALUE;
    rhs_slice_target = (object_ptr)&_8376;
    RHS_Slice(_8373, 2, _8375);
    _8373 = NOVALUE;
    _0 = _cmdex_15031;
    _cmdex_15031 = _22split(_8376, 32, 1, 0);
    DeRef(_0);
    _8376 = NOVALUE;

    /** cmdline.e:954				at_cmds = replace(at_cmds, cmdex, j)*/
    {
        intptr_t p1 = _at_cmds_14946;
        intptr_t p2 = _cmdex_15031;
        intptr_t p3 = _j_14947;
        intptr_t p4 = _j_14947;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_at_cmds_14946;
        Replace( &replace_params );
    }

    /** cmdline.e:955				j = j + length(cmdex) - 1*/
    if (IS_SEQUENCE(_cmdex_15031)){
            _8379 = SEQ_PTR(_cmdex_15031)->length;
    }
    else {
        _8379 = 1;
    }
    _8380 = _j_14947 + _8379;
    if ((object)((uintptr_t)_8380 + (uintptr_t)HIGH_BITS) >= 0){
        _8380 = NewDouble((eudouble)_8380);
    }
    _8379 = NOVALUE;
    if (IS_ATOM_INT(_8380)) {
        _j_14947 = _8380 - 1;
    }
    else {
        _j_14947 = NewDouble(DBL_PTR(_8380)->dbl - (eudouble)1);
    }
    DeRef(_8380);
    _8380 = NOVALUE;
    if (!IS_ATOM_INT(_j_14947)) {
        _1 = (object)(DBL_PTR(_j_14947)->dbl);
        DeRefDS(_j_14947);
        _j_14947 = _1;
    }
LE: 
    DeRef(_cmdex_15031);
    _cmdex_15031 = NOVALUE;

    /** cmdline.e:958		end while*/
    goto L7; // [489] 166
L8: 

    /** cmdline.e:961		cmds = replace(cmds, at_cmds, arg_idx)*/
    {
        intptr_t p1 = _cmds_14939;
        intptr_t p2 = _at_cmds_14946;
        intptr_t p3 = _arg_idx_14941;
        intptr_t p4 = _arg_idx_14941;
        struct replace_block replace_params;
        replace_params.copy_to   = &p1;
        replace_params.copy_from = &p2;
        replace_params.start     = &p3;
        replace_params.stop      = &p4;
        replace_params.target    = &_cmds_14939;
        Replace( &replace_params );
    }

    /** cmdline.e:962		return cmds*/
    DeRefDS(_cmd_14938);
    DeRefDS(_opts_14940);
    DeRef(_add_help_rid_14942);
    DeRef(_parse_options_14943);
    DeRef(_at_cmds_14946);
    _8354 = NOVALUE;
    DeRef(_8375);
    _8375 = NOVALUE;
    DeRef(_8352);
    _8352 = NOVALUE;
    DeRef(_8338);
    _8338 = NOVALUE;
    DeRef(_8359);
    _8359 = NOVALUE;
    _8325 = NOVALUE;
    DeRef(_8368);
    _8368 = NOVALUE;
    DeRef(_8302);
    _8302 = NOVALUE;
    DeRef(_8363);
    _8363 = NOVALUE;
    DeRef(_8347);
    _8347 = NOVALUE;
    DeRef(_8340);
    _8340 = NOVALUE;
    DeRef(_8328);
    _8328 = NOVALUE;
    _8370 = NOVALUE;
    DeRef(_8330);
    _8330 = NOVALUE;
    return _cmds_14939;
    ;
}


void _28check_mandatory(object _opts_15044, object _parsed_opts_15046, object _add_help_rid_15047, object _cmds_15048, object _parse_options_15049, object _help_on_error_15050, object _auto_help_15051)
{
    object _8407 = NOVALUE;
    object _8406 = NOVALUE;
    object _8405 = NOVALUE;
    object _8402 = NOVALUE;
    object _8401 = NOVALUE;
    object _8400 = NOVALUE;
    object _8397 = NOVALUE;
    object _8396 = NOVALUE;
    object _8395 = NOVALUE;
    object _8394 = NOVALUE;
    object _8393 = NOVALUE;
    object _8392 = NOVALUE;
    object _8391 = NOVALUE;
    object _8390 = NOVALUE;
    object _8389 = NOVALUE;
    object _8388 = NOVALUE;
    object _8387 = NOVALUE;
    object _8386 = NOVALUE;
    object _8385 = NOVALUE;
    object _8384 = NOVALUE;
    object _8383 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:969		for i = 1 to length(opts) do*/
    if (IS_SEQUENCE(_opts_15044)){
            _8383 = SEQ_PTR(_opts_15044)->length;
    }
    else {
        _8383 = 1;
    }
    {
        object _i_15053;
        _i_15053 = 1;
L1: 
        if (_i_15053 > _8383){
            goto L2; // [14] 219
        }

        /** cmdline.e:970			if find(MANDATORY, opts[i][OPTIONS]) then*/
        _2 = (object)SEQ_PTR(_opts_15044);
        _8384 = (object)*(((s1_ptr)_2)->base + _i_15053);
        _2 = (object)SEQ_PTR(_8384);
        _8385 = (object)*(((s1_ptr)_2)->base + 4);
        _8384 = NOVALUE;
        _8386 = find_from(109, _8385, 1);
        _8385 = NOVALUE;
        if (_8386 == 0)
        {
            _8386 = NOVALUE;
            goto L3; // [36] 212
        }
        else{
            _8386 = NOVALUE;
        }

        /** cmdline.e:971				if atom(opts[i][SHORTNAME]) and atom(opts[i][LONGNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_15044);
        _8387 = (object)*(((s1_ptr)_2)->base + _i_15053);
        _2 = (object)SEQ_PTR(_8387);
        _8388 = (object)*(((s1_ptr)_2)->base + 1);
        _8387 = NOVALUE;
        _8389 = IS_ATOM(_8388);
        _8388 = NOVALUE;
        if (_8389 == 0) {
            goto L4; // [52] 138
        }
        _2 = (object)SEQ_PTR(_opts_15044);
        _8391 = (object)*(((s1_ptr)_2)->base + _i_15053);
        _2 = (object)SEQ_PTR(_8391);
        _8392 = (object)*(((s1_ptr)_2)->base + 2);
        _8391 = NOVALUE;
        _8393 = IS_ATOM(_8392);
        _8392 = NOVALUE;
        if (_8393 == 0)
        {
            _8393 = NOVALUE;
            goto L4; // [68] 138
        }
        else{
            _8393 = NOVALUE;
        }

        /** cmdline.e:972					if length(map:get(parsed_opts, opts[i][MAPNAME])) = 0 then*/
        _2 = (object)SEQ_PTR(_opts_15044);
        _8394 = (object)*(((s1_ptr)_2)->base + _i_15053);
        _2 = (object)SEQ_PTR(_8394);
        _8395 = (object)*(((s1_ptr)_2)->base + 6);
        _8394 = NOVALUE;
        Ref(_parsed_opts_15046);
        Ref(_8395);
        _8396 = _30get(_parsed_opts_15046, _8395, 0);
        _8395 = NOVALUE;
        if (IS_SEQUENCE(_8396)){
                _8397 = SEQ_PTR(_8396)->length;
        }
        else {
            _8397 = 1;
        }
        DeRef(_8396);
        _8396 = NOVALUE;
        if (_8397 != 0)
        goto L5; // [90] 211

        /** cmdline.e:973						puts(1, "Additional arguments were expected.\n\n")*/
        EPuts(1, _8399); // DJP 

        /** cmdline.e:974						if help_on_error then*/
        if (_help_on_error_15050 == 0)
        {
            goto L6; // [101] 116
        }
        else{
        }

        /** cmdline.e:975							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        RefDS(_opts_15044);
        Ref(_add_help_rid_15047);
        RefDS(_cmds_15048);
        Ref(_parse_options_15049);
        _28local_help(_opts_15044, _add_help_rid_15047, _cmds_15048, 1, _parse_options_15049);
        goto L7; // [113] 129
L6: 

        /** cmdline.e:976						elsif auto_help then*/
        if (_auto_help_15051 == 0)
        {
            goto L8; // [118] 128
        }
        else{
        }

        /** cmdline.e:977							printf(2,"Try '--help' for more information.\n",{})          */
        EPrintf(2, _8319, _5);
L8: 
L7: 

        /** cmdline.e:979						local_abort(1)*/
        _28local_abort(1);
        goto L5; // [135] 211
L4: 

        /** cmdline.e:982					if not map:has(parsed_opts, opts[i][MAPNAME]) then*/
        _2 = (object)SEQ_PTR(_opts_15044);
        _8400 = (object)*(((s1_ptr)_2)->base + _i_15053);
        _2 = (object)SEQ_PTR(_8400);
        _8401 = (object)*(((s1_ptr)_2)->base + 6);
        _8400 = NOVALUE;
        Ref(_parsed_opts_15046);
        Ref(_8401);
        _8402 = _30has(_parsed_opts_15046, _8401);
        _8401 = NOVALUE;
        if (IS_ATOM_INT(_8402)) {
            if (_8402 != 0){
                DeRef(_8402);
                _8402 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        else {
            if (DBL_PTR(_8402)->dbl != 0.0){
                DeRef(_8402);
                _8402 = NOVALUE;
                goto L9; // [153] 210
            }
        }
        DeRef(_8402);
        _8402 = NOVALUE;

        /** cmdline.e:983						printf(1, "option '%s' is mandatory but was not supplied.\n\n", {opts[i][MAPNAME]})*/
        _2 = (object)SEQ_PTR(_opts_15044);
        _8405 = (object)*(((s1_ptr)_2)->base + _i_15053);
        _2 = (object)SEQ_PTR(_8405);
        _8406 = (object)*(((s1_ptr)_2)->base + 6);
        _8405 = NOVALUE;
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_8406);
        ((intptr_t*)_2)[1] = _8406;
        _8407 = MAKE_SEQ(_1);
        _8406 = NOVALUE;
        EPrintf(1, _8404, _8407);
        DeRefDS(_8407);
        _8407 = NOVALUE;

        /** cmdline.e:984						if help_on_error then*/
        if (_help_on_error_15050 == 0)
        {
            goto LA; // [176] 191
        }
        else{
        }

        /** cmdline.e:985							local_help(opts, add_help_rid, cmds, 1, parse_options)*/
        RefDS(_opts_15044);
        Ref(_add_help_rid_15047);
        RefDS(_cmds_15048);
        Ref(_parse_options_15049);
        _28local_help(_opts_15044, _add_help_rid_15047, _cmds_15048, 1, _parse_options_15049);
        goto LB; // [188] 204
LA: 

        /** cmdline.e:986						elsif auto_help then*/
        if (_auto_help_15051 == 0)
        {
            goto LC; // [193] 203
        }
        else{
        }

        /** cmdline.e:987							printf(2,"Try '--help' for more information.\n",{})          */
        EPrintf(2, _8319, _5);
LC: 
LB: 

        /** cmdline.e:989						local_abort(1)*/
        _28local_abort(1);
L9: 
L5: 
L3: 

        /** cmdline.e:993		end for*/
        _i_15053 = _i_15053 + 1;
        goto L1; // [214] 21
L2: 
        ;
    }

    /** cmdline.e:994	end procedure*/
    DeRefDS(_opts_15044);
    DeRef(_parsed_opts_15046);
    DeRef(_add_help_rid_15047);
    DeRefDS(_cmds_15048);
    DeRef(_parse_options_15049);
    _8396 = NOVALUE;
    return;
    ;
}


void _28parse_abort(object _format_msg_15090, object _msg_data_15091, object _opts_15092, object _add_help_rid_15093, object _cmds_15094, object _parse_options_15095, object _help_on_error_15096, object _auto_help_15097)
{
    object _0, _1, _2;
    

    /** cmdline.e:999		printf(1, format_msg, msg_data)*/
    EPrintf(1, _format_msg_15090, _msg_data_15091);

    /** cmdline.e:1000		if help_on_error then*/
    if (_help_on_error_15096 == 0)
    {
        goto L1; // [21] 36
    }
    else{
    }

    /** cmdline.e:1001			local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    RefDS(_opts_15092);
    Ref(_add_help_rid_15093);
    RefDS(_cmds_15094);
    Ref(_parse_options_15095);
    _28local_help(_opts_15092, _add_help_rid_15093, _cmds_15094, 1, _parse_options_15095);
    goto L2; // [33] 49
L1: 

    /** cmdline.e:1002		elsif auto_help then*/
    if (_auto_help_15097 == 0)
    {
        goto L3; // [38] 48
    }
    else{
    }

    /** cmdline.e:1003			printf(2,"Try '--help' for more information.\n",{})          */
    EPrintf(2, _8319, _5);
L3: 
L2: 

    /** cmdline.e:1005		local_abort(1)*/
    _28local_abort(1);

    /** cmdline.e:1006	end procedure*/
    DeRefDSi(_format_msg_15090);
    DeRefDS(_msg_data_15091);
    DeRefDS(_opts_15092);
    DeRef(_add_help_rid_15093);
    DeRefDS(_cmds_15094);
    DeRef(_parse_options_15095);
    return;
    ;
}


object _28parse_commands(object _cmds_15102, object _opts_15103, object _parsed_opts_15105, object _help_opts_15106, object _add_help_rid_15107, object _parse_options_15108, object _use_at_15109, object _validation_15110, object _has_extra_15111, object _call_count_15112, object _help_on_error_15113, object _auto_help_15114)
{
    object _arg_idx_15115 = NOVALUE;
    object _opts_done_15116 = NOVALUE;
    object _find_result_15117 = NOVALUE;
    object _type__15118 = NOVALUE;
    object _from__15119 = NOVALUE;
    object _cmd_15120 = NOVALUE;
    object _handle_result_15185 = NOVALUE;
    object _8459 = NOVALUE;
    object _8455 = NOVALUE;
    object _8454 = NOVALUE;
    object _8452 = NOVALUE;
    object _8451 = NOVALUE;
    object _8450 = NOVALUE;
    object _8448 = NOVALUE;
    object _8446 = NOVALUE;
    object _8444 = NOVALUE;
    object _8442 = NOVALUE;
    object _8441 = NOVALUE;
    object _8440 = NOVALUE;
    object _8439 = NOVALUE;
    object _8438 = NOVALUE;
    object _8434 = NOVALUE;
    object _8432 = NOVALUE;
    object _8431 = NOVALUE;
    object _8430 = NOVALUE;
    object _8429 = NOVALUE;
    object _8428 = NOVALUE;
    object _8427 = NOVALUE;
    object _8425 = NOVALUE;
    object _8424 = NOVALUE;
    object _8423 = NOVALUE;
    object _8422 = NOVALUE;
    object _8421 = NOVALUE;
    object _8420 = NOVALUE;
    object _8419 = NOVALUE;
    object _8416 = NOVALUE;
    object _8415 = NOVALUE;
    object _8414 = NOVALUE;
    object _8412 = NOVALUE;
    object _8408 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:1016		integer arg_idx = 2*/
    _arg_idx_15115 = 2;

    /** cmdline.e:1017		integer opts_done = 0*/
    _opts_done_15116 = 0;

    /** cmdline.e:1023		while arg_idx < length(cmds) do*/
L1: 
    if (IS_SEQUENCE(_cmds_15102)){
            _8408 = SEQ_PTR(_cmds_15102)->length;
    }
    else {
        _8408 = 1;
    }
    if (_arg_idx_15115 >= _8408)
    goto L2; // [37] 488

    /** cmdline.e:1024			arg_idx += 1*/
    _arg_idx_15115 = _arg_idx_15115 + 1;

    /** cmdline.e:1026			cmd = cmds[arg_idx]*/
    DeRef(_cmd_15120);
    _2 = (object)SEQ_PTR(_cmds_15102);
    _cmd_15120 = (object)*(((s1_ptr)_2)->base + _arg_idx_15115);
    Ref(_cmd_15120);

    /** cmdline.e:1027			if length(cmd) = 0 then*/
    if (IS_SEQUENCE(_cmd_15120)){
            _8412 = SEQ_PTR(_cmd_15120)->length;
    }
    else {
        _8412 = 1;
    }
    if (_8412 != 0)
    goto L3; // [60] 69

    /** cmdline.e:1028				continue*/
    goto L1; // [66] 34
L3: 

    /** cmdline.e:1031			if cmd[1] = '@' and use_at then*/
    _2 = (object)SEQ_PTR(_cmd_15120);
    _8414 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_8414)) {
        _8415 = (_8414 == 64);
    }
    else {
        _8415 = binary_op(EQUALS, _8414, 64);
    }
    _8414 = NOVALUE;
    if (IS_ATOM_INT(_8415)) {
        if (_8415 == 0) {
            goto L4; // [79] 113
        }
    }
    else {
        if (DBL_PTR(_8415)->dbl == 0.0) {
            goto L4; // [79] 113
        }
    }
    if (_use_at_15109 == 0)
    {
        goto L4; // [84] 113
    }
    else{
    }

    /** cmdline.e:1032				cmds = parse_at_cmds( cmd, cmds, opts, arg_idx, add_help_rid, parse_options, help_on_error, auto_help )*/
    RefDS(_cmd_15120);
    RefDS(_cmds_15102);
    RefDS(_opts_15103);
    Ref(_add_help_rid_15107);
    Ref(_parse_options_15108);
    _0 = _cmds_15102;
    _cmds_15102 = _28parse_at_cmds(_cmd_15120, _cmds_15102, _opts_15103, _arg_idx_15115, _add_help_rid_15107, _parse_options_15108, _help_on_error_15113, _auto_help_15114);
    DeRefDS(_0);

    /** cmdline.e:1033				arg_idx -= 1*/
    _arg_idx_15115 = _arg_idx_15115 - 1;

    /** cmdline.e:1034				continue*/
    goto L1; // [110] 34
L4: 

    /** cmdline.e:1037			if (opts_done or find(cmd[1], os:CMD_SWITCHES) = 0 or length(cmd) = 1)*/
    if (_opts_done_15116 != 0) {
        _8419 = 1;
        goto L5; // [115] 136
    }
    _2 = (object)SEQ_PTR(_cmd_15120);
    _8420 = (object)*(((s1_ptr)_2)->base + 1);
    _8421 = find_from(_8420, _35CMD_SWITCHES_14080, 1);
    _8420 = NOVALUE;
    _8422 = (_8421 == 0);
    _8421 = NOVALUE;
    _8419 = (_8422 != 0);
L5: 
    if (_8419 != 0) {
        DeRef(_8423);
        _8423 = 1;
        goto L6; // [136] 151
    }
    if (IS_SEQUENCE(_cmd_15120)){
            _8424 = SEQ_PTR(_cmd_15120)->length;
    }
    else {
        _8424 = 1;
    }
    _8425 = (_8424 == 1);
    _8424 = NOVALUE;
    _8423 = (_8425 != 0);
L6: 
    if (_8423 == 0)
    {
        _8423 = NOVALUE;
        goto L7; // [151] 227
    }
    else{
        _8423 = NOVALUE;
    }

    /** cmdline.e:1039				map:put(parsed_opts, EXTRAS, cmd, map:APPEND)*/
    Ref(_parsed_opts_15105);
    RefDS(_28EXTRAS_14176);
    RefDS(_cmd_15120);
    _30put(_parsed_opts_15105, _28EXTRAS_14176, _cmd_15120, 6, 0);

    /** cmdline.e:1040				has_extra = 1*/
    _has_extra_15111 = 1;

    /** cmdline.e:1041				if validation = NO_VALIDATION_AFTER_FIRST_EXTRA then*/
    if (_validation_15110 != 4)
    goto L1; // [172] 34

    /** cmdline.e:1042					for i = arg_idx + 1 to length(cmds) do*/
    _8427 = _arg_idx_15115 + 1;
    if (_8427 > MAXINT){
        _8427 = NewDouble((eudouble)_8427);
    }
    if (IS_SEQUENCE(_cmds_15102)){
            _8428 = SEQ_PTR(_cmds_15102)->length;
    }
    else {
        _8428 = 1;
    }
    {
        object _i_15146;
        Ref(_8427);
        _i_15146 = _8427;
L8: 
        if (binary_op_a(GREATER, _i_15146, _8428)){
            goto L9; // [185] 214
        }

        /** cmdline.e:1043						map:put(parsed_opts, EXTRAS, cmds[i], map:APPEND)*/
        _2 = (object)SEQ_PTR(_cmds_15102);
        if (!IS_ATOM_INT(_i_15146)){
            _8429 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_15146)->dbl));
        }
        else{
            _8429 = (object)*(((s1_ptr)_2)->base + _i_15146);
        }
        Ref(_parsed_opts_15105);
        RefDS(_28EXTRAS_14176);
        Ref(_8429);
        _30put(_parsed_opts_15105, _28EXTRAS_14176, _8429, 6, 0);
        _8429 = NOVALUE;

        /** cmdline.e:1044					end for*/
        _0 = _i_15146;
        if (IS_ATOM_INT(_i_15146)) {
            _i_15146 = _i_15146 + 1;
            if ((object)((uintptr_t)_i_15146 +(uintptr_t) HIGH_BITS) >= 0){
                _i_15146 = NewDouble((eudouble)_i_15146);
            }
        }
        else {
            _i_15146 = binary_op_a(PLUS, _i_15146, 1);
        }
        DeRef(_0);
        goto L8; // [209] 192
L9: 
        ;
        DeRef(_i_15146);
    }

    /** cmdline.e:1046					exit*/
    goto L2; // [216] 488
    goto LA; // [218] 226

    /** cmdline.e:1048					continue*/
    goto L1; // [223] 34
LA: 
L7: 

    /** cmdline.e:1052			if equal(cmd, "--") then*/
    if (_cmd_15120 == _7156)
    _8430 = 1;
    else if (IS_ATOM_INT(_cmd_15120) && IS_ATOM_INT(_7156))
    _8430 = 0;
    else
    _8430 = (compare(_cmd_15120, _7156) == 0);
    if (_8430 == 0)
    {
        _8430 = NOVALUE;
        goto LB; // [233] 246
    }
    else{
        _8430 = NOVALUE;
    }

    /** cmdline.e:1053				opts_done = 1*/
    _opts_done_15116 = 1;

    /** cmdline.e:1054				continue*/
    goto L1; // [243] 34
LB: 

    /** cmdline.e:1057			if equal(cmd[1..2], "--") then	  -- found --opt-name*/
    rhs_slice_target = (object_ptr)&_8431;
    RHS_Slice(_cmd_15120, 1, 2);
    if (_8431 == _7156)
    _8432 = 1;
    else if (IS_ATOM_INT(_8431) && IS_ATOM_INT(_7156))
    _8432 = 0;
    else
    _8432 = (compare(_8431, _7156) == 0);
    DeRefDS(_8431);
    _8431 = NOVALUE;
    if (_8432 == 0)
    {
        _8432 = NOVALUE;
        goto LC; // [257] 274
    }
    else{
        _8432 = NOVALUE;
    }

    /** cmdline.e:1058				type_ = {LONGNAME, "--"}*/
    RefDS(_7156);
    DeRef(_type__15118);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = _7156;
    _type__15118 = MAKE_SEQ(_1);

    /** cmdline.e:1059				from_ = 3*/
    _from__15119 = 3;
    goto LD; // [271] 310
LC: 

    /** cmdline.e:1060			elsif cmd[1] = '-' then -- found -opt*/
    _2 = (object)SEQ_PTR(_cmd_15120);
    _8434 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _8434, 45)){
        _8434 = NOVALUE;
        goto LE; // [280] 298
    }
    _8434 = NOVALUE;

    /** cmdline.e:1061				type_ = {SHORTNAME, "-"}*/
    RefDS(_7132);
    DeRef(_type__15118);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _7132;
    _type__15118 = MAKE_SEQ(_1);

    /** cmdline.e:1062				from_ = 2*/
    _from__15119 = 2;
    goto LD; // [295] 310
LE: 

    /** cmdline.e:1064				type_ = {SHORTNAME, "/"}*/
    RefDS(_4003);
    DeRef(_type__15118);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = _4003;
    _type__15118 = MAKE_SEQ(_1);

    /** cmdline.e:1065				from_ = 2*/
    _from__15119 = 2;
LD: 

    /** cmdline.e:1068			if find(cmd[from_..$], help_opts) then*/
    if (IS_SEQUENCE(_cmd_15120)){
            _8438 = SEQ_PTR(_cmd_15120)->length;
    }
    else {
        _8438 = 1;
    }
    rhs_slice_target = (object_ptr)&_8439;
    RHS_Slice(_cmd_15120, _from__15119, _8438);
    _8440 = find_from(_8439, _help_opts_15106, 1);
    DeRefDS(_8439);
    _8439 = NOVALUE;
    if (_8440 == 0)
    {
        _8440 = NOVALUE;
        goto LF; // [327] 347
    }
    else{
        _8440 = NOVALUE;
    }

    /** cmdline.e:1069				local_help(opts, add_help_rid, cmds, 1, parse_options)*/
    RefDS(_opts_15103);
    Ref(_add_help_rid_15107);
    RefDS(_cmds_15102);
    Ref(_parse_options_15108);
    _28local_help(_opts_15103, _add_help_rid_15107, _cmds_15102, 1, _parse_options_15108);

    /** cmdline.e:1070				ifdef UNITTEST then*/

    /** cmdline.e:1073				local_abort(0)*/
    _28local_abort(0);
LF: 

    /** cmdline.e:1076			find_result = find_opt(opts, type_, cmd[from_..$])*/
    if (IS_SEQUENCE(_cmd_15120)){
            _8441 = SEQ_PTR(_cmd_15120)->length;
    }
    else {
        _8441 = 1;
    }
    rhs_slice_target = (object_ptr)&_8442;
    RHS_Slice(_cmd_15120, _from__15119, _8441);
    RefDS(_opts_15103);
    RefDS(_type__15118);
    _0 = _find_result_15117;
    _find_result_15117 = _28find_opt(_opts_15103, _type__15118, _8442);
    DeRef(_0);
    _8442 = NOVALUE;

    /** cmdline.e:1078			if find_result[1] < 0 then*/
    _2 = (object)SEQ_PTR(_find_result_15117);
    _8444 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(GREATEREQ, _8444, 0)){
        _8444 = NOVALUE;
        goto L10; // [373] 382
    }
    _8444 = NOVALUE;

    /** cmdline.e:1079				continue -- Couldn't use this command argument for anything.*/
    goto L1; // [379] 34
L10: 

    /** cmdline.e:1082			if find_result[1] = 0 then*/
    _2 = (object)SEQ_PTR(_find_result_15117);
    _8446 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _8446, 0)){
        _8446 = NOVALUE;
        goto L11; // [388] 449
    }
    _8446 = NOVALUE;

    /** cmdline.e:1083				if validation = VALIDATE_ALL or*/
    _8448 = (_validation_15110 == 2);
    if (_8448 != 0) {
        goto L12; // [398] 423
    }
    _8450 = (_validation_15110 == 4);
    if (_8450 == 0) {
        DeRef(_8451);
        _8451 = 0;
        goto L13; // [406] 418
    }
    _8452 = (_has_extra_15111 == 0);
    _8451 = (_8452 != 0);
L13: 
    if (_8451 == 0)
    {
        _8451 = NOVALUE;
        goto L1; // [419] 34
    }
    else{
        _8451 = NOVALUE;
    }
L12: 

    /** cmdline.e:1087					parse_abort( "option '%s': %s\n\n", {cmd, find_result[2]}, */
    _2 = (object)SEQ_PTR(_find_result_15117);
    _8454 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_8454);
    RefDS(_cmd_15120);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmd_15120;
    ((intptr_t *)_2)[2] = _8454;
    _8455 = MAKE_SEQ(_1);
    _8454 = NOVALUE;
    RefDS(_8453);
    RefDS(_opts_15103);
    Ref(_add_help_rid_15107);
    RefDS(_cmds_15102);
    Ref(_parse_options_15108);
    _28parse_abort(_8453, _8455, _opts_15103, _add_help_rid_15107, _cmds_15102, _parse_options_15108, _help_on_error_15113, _auto_help_15114);
    _8455 = NOVALUE;

    /** cmdline.e:1091				continue*/
    goto L1; // [446] 34
L11: 

    /** cmdline.e:1094			sequence handle_result = handle_opt( find_result, arg_idx, opts, parsed_opts, cmds, add_help_rid,*/
    RefDS(_find_result_15117);
    RefDS(_opts_15103);
    Ref(_parsed_opts_15105);
    RefDS(_cmds_15102);
    Ref(_add_help_rid_15107);
    Ref(_parse_options_15108);
    RefDS(_call_count_15112);
    _0 = _handle_result_15185;
    _handle_result_15185 = _28handle_opt(_find_result_15117, _arg_idx_15115, _opts_15103, _parsed_opts_15105, _cmds_15102, _add_help_rid_15107, _parse_options_15108, _call_count_15112, _validation_15110, _help_on_error_15113, _auto_help_15114);
    DeRef(_0);

    /** cmdline.e:1096			arg_idx     = handle_result[1]*/
    _2 = (object)SEQ_PTR(_handle_result_15185);
    _arg_idx_15115 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_arg_idx_15115))
    _arg_idx_15115 = (object)DBL_PTR(_arg_idx_15115)->dbl;

    /** cmdline.e:1097			call_count = handle_result[2]*/
    DeRefDS(_call_count_15112);
    _2 = (object)SEQ_PTR(_handle_result_15185);
    _call_count_15112 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_15112);
    DeRefDS(_handle_result_15185);
    _handle_result_15185 = NOVALUE;

    /** cmdline.e:1098		end while*/
    goto L1; // [485] 34
L2: 

    /** cmdline.e:1099		return { cmds, call_count }*/
    RefDS(_call_count_15112);
    RefDS(_cmds_15102);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _cmds_15102;
    ((intptr_t *)_2)[2] = _call_count_15112;
    _8459 = MAKE_SEQ(_1);
    DeRefDS(_cmds_15102);
    DeRefDS(_opts_15103);
    DeRef(_parsed_opts_15105);
    DeRefDS(_help_opts_15106);
    DeRef(_add_help_rid_15107);
    DeRef(_parse_options_15108);
    DeRefDS(_call_count_15112);
    DeRef(_find_result_15117);
    DeRef(_type__15118);
    DeRef(_cmd_15120);
    DeRef(_8452);
    _8452 = NOVALUE;
    DeRef(_8415);
    _8415 = NOVALUE;
    DeRef(_8422);
    _8422 = NOVALUE;
    DeRef(_8425);
    _8425 = NOVALUE;
    DeRef(_8448);
    _8448 = NOVALUE;
    DeRef(_8427);
    _8427 = NOVALUE;
    DeRef(_8450);
    _8450 = NOVALUE;
    return _8459;
    ;
}


object _28handle_opt(object _find_result_15193, object _arg_idx_15194, object _opts_15195, object _parsed_opts_15197, object _cmds_15198, object _add_help_rid_15199, object _parse_options_15200, object _call_count_15201, object _validation_15202, object _help_on_error_15203, object _auto_help_15204)
{
    object _map_add_operation_15205 = NOVALUE;
    object _opt_15206 = NOVALUE;
    object _param_15209 = NOVALUE;
    object _pos_15246 = NOVALUE;
    object _ver_pos_15292 = NOVALUE;
    object _msg_inlined_crash_at_524_15309 = NOVALUE;
    object _fmt_inlined_crash_at_521_15308 = NOVALUE;
    object _8537 = NOVALUE;
    object _8536 = NOVALUE;
    object _8533 = NOVALUE;
    object _8532 = NOVALUE;
    object _8531 = NOVALUE;
    object _8529 = NOVALUE;
    object _8528 = NOVALUE;
    object _8526 = NOVALUE;
    object _8525 = NOVALUE;
    object _8524 = NOVALUE;
    object _8523 = NOVALUE;
    object _8522 = NOVALUE;
    object _8521 = NOVALUE;
    object _8520 = NOVALUE;
    object _8519 = NOVALUE;
    object _8517 = NOVALUE;
    object _8516 = NOVALUE;
    object _8514 = NOVALUE;
    object _8513 = NOVALUE;
    object _8512 = NOVALUE;
    object _8511 = NOVALUE;
    object _8510 = NOVALUE;
    object _8509 = NOVALUE;
    object _8508 = NOVALUE;
    object _8507 = NOVALUE;
    object _8505 = NOVALUE;
    object _8504 = NOVALUE;
    object _8503 = NOVALUE;
    object _8501 = NOVALUE;
    object _8500 = NOVALUE;
    object _8498 = NOVALUE;
    object _8497 = NOVALUE;
    object _8496 = NOVALUE;
    object _8495 = NOVALUE;
    object _8494 = NOVALUE;
    object _8493 = NOVALUE;
    object _8492 = NOVALUE;
    object _8491 = NOVALUE;
    object _8490 = NOVALUE;
    object _8487 = NOVALUE;
    object _8484 = NOVALUE;
    object _8483 = NOVALUE;
    object _8481 = NOVALUE;
    object _8480 = NOVALUE;
    object _8479 = NOVALUE;
    object _8478 = NOVALUE;
    object _8477 = NOVALUE;
    object _8476 = NOVALUE;
    object _8475 = NOVALUE;
    object _8474 = NOVALUE;
    object _8473 = NOVALUE;
    object _8472 = NOVALUE;
    object _8471 = NOVALUE;
    object _8468 = NOVALUE;
    object _8465 = NOVALUE;
    object _8463 = NOVALUE;
    object _8462 = NOVALUE;
    object _8460 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:1110		integer map_add_operation = map:ADD*/
    _map_add_operation_15205 = 2;

    /** cmdline.e:1111		sequence opt = opts[find_result[1]]*/
    _2 = (object)SEQ_PTR(_find_result_15193);
    _8460 = (object)*(((s1_ptr)_2)->base + 1);
    DeRef(_opt_15206);
    _2 = (object)SEQ_PTR(_opts_15195);
    if (!IS_ATOM_INT(_8460)){
        _opt_15206 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_8460)->dbl));
    }
    else{
        _opt_15206 = (object)*(((s1_ptr)_2)->base + _8460);
    }
    Ref(_opt_15206);

    /** cmdline.e:1114		if find(HAS_PARAMETER, opt[OPTIONS]) != 0 then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8462 = (object)*(((s1_ptr)_2)->base + 4);
    _8463 = find_from(112, _8462, 1);
    _8462 = NOVALUE;
    if (_8463 == 0)
    goto L1; // [45] 194

    /** cmdline.e:1115			map_add_operation = map:APPEND*/
    _map_add_operation_15205 = 6;

    /** cmdline.e:1116			if length(find_result) < 4 then*/
    if (IS_SEQUENCE(_find_result_15193)){
            _8465 = SEQ_PTR(_find_result_15193)->length;
    }
    else {
        _8465 = 1;
    }
    if (_8465 >= 4)
    goto L2; // [59] 184

    /** cmdline.e:1117				arg_idx += 1*/
    _arg_idx_15194 = _arg_idx_15194 + 1;

    /** cmdline.e:1118				if arg_idx <= length(cmds) then*/
    if (IS_SEQUENCE(_cmds_15198)){
            _8468 = SEQ_PTR(_cmds_15198)->length;
    }
    else {
        _8468 = 1;
    }
    if (_arg_idx_15194 > _8468)
    goto L3; // [74] 119

    /** cmdline.e:1119					param = cmds[arg_idx]*/
    DeRef(_param_15209);
    _2 = (object)SEQ_PTR(_cmds_15198);
    _param_15209 = (object)*(((s1_ptr)_2)->base + _arg_idx_15194);
    Ref(_param_15209);

    /** cmdline.e:1120					if length(param) = 2 and find(param[1], "-/") then*/
    if (IS_SEQUENCE(_param_15209)){
            _8471 = SEQ_PTR(_param_15209)->length;
    }
    else {
        _8471 = 1;
    }
    _8472 = (_8471 == 2);
    _8471 = NOVALUE;
    if (_8472 == 0) {
        goto L4; // [93] 125
    }
    _2 = (object)SEQ_PTR(_param_15209);
    _8474 = (object)*(((s1_ptr)_2)->base + 1);
    _8475 = find_from(_8474, _7777, 1);
    _8474 = NOVALUE;
    if (_8475 == 0)
    {
        _8475 = NOVALUE;
        goto L4; // [107] 125
    }
    else{
        _8475 = NOVALUE;
    }

    /** cmdline.e:1121						param = ""*/
    RefDS(_5);
    DeRef(_param_15209);
    _param_15209 = _5;
    goto L4; // [116] 125
L3: 

    /** cmdline.e:1124					param = ""*/
    RefDS(_5);
    DeRef(_param_15209);
    _param_15209 = _5;
L4: 

    /** cmdline.e:1127				if length(param) = 0 and (validation = VALIDATE_ALL or (*/
    if (IS_SEQUENCE(_param_15209)){
            _8476 = SEQ_PTR(_param_15209)->length;
    }
    else {
        _8476 = 1;
    }
    _8477 = (_8476 == 0);
    _8476 = NOVALUE;
    if (_8477 == 0) {
        goto L5; // [136] 201
    }
    _8479 = (_validation_15202 == 2);
    if (_8479 != 0) {
        DeRef(_8480);
        _8480 = 1;
        goto L6; // [144] 156
    }
    _8481 = (_validation_15202 == 4);
    _8480 = (_8481 != 0);
L6: 
    if (_8480 == 0)
    {
        _8480 = NOVALUE;
        goto L5; // [157] 201
    }
    else{
        _8480 = NOVALUE;
    }

    /** cmdline.e:1130					parse_abort( "option '%s' must have a parameter\n\n", {find_result[2]}, */
    _2 = (object)SEQ_PTR(_find_result_15193);
    _8483 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8483);
    ((intptr_t*)_2)[1] = _8483;
    _8484 = MAKE_SEQ(_1);
    _8483 = NOVALUE;
    RefDS(_8482);
    RefDS(_opts_15195);
    Ref(_add_help_rid_15199);
    RefDS(_cmds_15198);
    Ref(_parse_options_15200);
    _28parse_abort(_8482, _8484, _opts_15195, _add_help_rid_15199, _cmds_15198, _parse_options_15200, _help_on_error_15203, _auto_help_15204);
    _8484 = NOVALUE;
    goto L5; // [181] 201
L2: 

    /** cmdline.e:1134				param = find_result[4]*/
    DeRef(_param_15209);
    _2 = (object)SEQ_PTR(_find_result_15193);
    _param_15209 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_15209);
    goto L5; // [191] 201
L1: 

    /** cmdline.e:1137			param = find_result[4]*/
    DeRef(_param_15209);
    _2 = (object)SEQ_PTR(_find_result_15193);
    _param_15209 = (object)*(((s1_ptr)_2)->base + 4);
    Ref(_param_15209);
L5: 

    /** cmdline.e:1140		if opt[CALLBACK] >= 0 then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8487 = (object)*(((s1_ptr)_2)->base + 5);
    if (binary_op_a(LESS, _8487, 0)){
        _8487 = NOVALUE;
        goto L7; // [207] 282
    }
    _8487 = NOVALUE;

    /** cmdline.e:1141			integer pos = find_result[1]*/
    _2 = (object)SEQ_PTR(_find_result_15193);
    _pos_15246 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_pos_15246))
    _pos_15246 = (object)DBL_PTR(_pos_15246)->dbl;

    /** cmdline.e:1142			call_count[pos] += 1*/
    _2 = (object)SEQ_PTR(_call_count_15201);
    _8490 = (object)*(((s1_ptr)_2)->base + _pos_15246);
    if (IS_ATOM_INT(_8490)) {
        _8491 = _8490 + 1;
        if (_8491 > MAXINT){
            _8491 = NewDouble((eudouble)_8491);
        }
    }
    else
    _8491 = binary_op(PLUS, 1, _8490);
    _8490 = NOVALUE;
    _2 = (object)SEQ_PTR(_call_count_15201);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _call_count_15201 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _pos_15246);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8491;
    if( _1 != _8491 ){
        DeRef(_1);
    }
    _8491 = NOVALUE;

    /** cmdline.e:1144			if call_func(opt[CALLBACK], {{find_result[1], call_count[pos], param,  find_result[3]}}) = 0 then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8492 = (object)*(((s1_ptr)_2)->base + 5);
    _2 = (object)SEQ_PTR(_find_result_15193);
    _8493 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_call_count_15201);
    _8494 = (object)*(((s1_ptr)_2)->base + _pos_15246);
    _2 = (object)SEQ_PTR(_find_result_15193);
    _8495 = (object)*(((s1_ptr)_2)->base + 3);
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8493);
    ((intptr_t*)_2)[1] = _8493;
    Ref(_8494);
    ((intptr_t*)_2)[2] = _8494;
    Ref(_param_15209);
    ((intptr_t*)_2)[3] = _param_15209;
    Ref(_8495);
    ((intptr_t*)_2)[4] = _8495;
    _8496 = MAKE_SEQ(_1);
    _8495 = NOVALUE;
    _8494 = NOVALUE;
    _8493 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _8496;
    _8497 = MAKE_SEQ(_1);
    _8496 = NOVALUE;
    _1 = (object)SEQ_PTR(_8497);
    _2 = (object)((s1_ptr)_1)->base;
    _0 = (object)_00[_8492].addr;
    Ref( *(( (intptr_t*)_2) + 1) );
    _1 = (*(intptr_t (*)())_0)(
                        *( ((intptr_t *)_2) + 1)
                         );
    DeRef(_8498);
    _8498 = _1;
    DeRefDS(_8497);
    _8497 = NOVALUE;
    if (binary_op_a(NOTEQ, _8498, 0)){
        DeRef(_8498);
        _8498 = NOVALUE;
        goto L8; // [266] 281
    }
    DeRef(_8498);
    _8498 = NOVALUE;

    /** cmdline.e:1145				return { arg_idx, call_count }*/
    RefDS(_call_count_15201);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_15194;
    ((intptr_t *)_2)[2] = _call_count_15201;
    _8500 = MAKE_SEQ(_1);
    DeRefDS(_find_result_15193);
    DeRefDS(_opts_15195);
    DeRef(_parsed_opts_15197);
    DeRefDS(_cmds_15198);
    DeRef(_add_help_rid_15199);
    DeRef(_parse_options_15200);
    DeRefDS(_call_count_15201);
    DeRefDS(_opt_15206);
    DeRef(_param_15209);
    DeRef(_8472);
    _8472 = NOVALUE;
    DeRef(_8477);
    _8477 = NOVALUE;
    DeRef(_8479);
    _8479 = NOVALUE;
    DeRef(_8481);
    _8481 = NOVALUE;
    _8492 = NOVALUE;
    _8460 = NOVALUE;
    return _8500;
L8: 
L7: 

    /** cmdline.e:1149		if find_result[3] = 1 then*/
    _2 = (object)SEQ_PTR(_find_result_15193);
    _8501 = (object)*(((s1_ptr)_2)->base + 3);
    if (binary_op_a(NOTEQ, _8501, 1)){
        _8501 = NOVALUE;
        goto L9; // [290] 307
    }
    _8501 = NOVALUE;

    /** cmdline.e:1150			map:remove(parsed_opts, opt[MAPNAME])*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8503 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_parsed_opts_15197);
    Ref(_8503);
    _30remove(_parsed_opts_15197, _8503);
    _8503 = NOVALUE;
    goto LA; // [304] 446
L9: 

    /** cmdline.e:1152			if find(MULTIPLE, opt[OPTIONS]) = 0 then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8504 = (object)*(((s1_ptr)_2)->base + 4);
    _8505 = find_from(42, _8504, 1);
    _8504 = NOVALUE;
    if (_8505 != 0)
    goto LB; // [318] 429

    /** cmdline.e:1153				if map:has(parsed_opts, opt[MAPNAME]) and (validation = VALIDATE_ALL or*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8507 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_parsed_opts_15197);
    Ref(_8507);
    _8508 = _30has(_parsed_opts_15197, _8507);
    _8507 = NOVALUE;
    if (IS_ATOM_INT(_8508)) {
        if (_8508 == 0) {
            goto LC; // [333] 410
        }
    }
    else {
        if (DBL_PTR(_8508)->dbl == 0.0) {
            goto LC; // [333] 410
        }
    }
    _8510 = (_validation_15202 == 2);
    if (_8510 != 0) {
        DeRef(_8511);
        _8511 = 1;
        goto LD; // [341] 353
    }
    _8512 = (_validation_15202 == 4);
    _8511 = (_8512 != 0);
LD: 
    if (_8511 == 0)
    {
        _8511 = NOVALUE;
        goto LC; // [354] 410
    }
    else{
        _8511 = NOVALUE;
    }

    /** cmdline.e:1156					if find(HAS_PARAMETER, opt[OPTIONS]) or find(ONCE, opt[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8513 = (object)*(((s1_ptr)_2)->base + 4);
    _8514 = find_from(112, _8513, 1);
    _8513 = NOVALUE;
    if (_8514 != 0) {
        goto LE; // [368] 386
    }
    _2 = (object)SEQ_PTR(_opt_15206);
    _8516 = (object)*(((s1_ptr)_2)->base + 4);
    _8517 = find_from(49, _8516, 1);
    _8516 = NOVALUE;
    if (_8517 == 0)
    {
        _8517 = NOVALUE;
        goto LF; // [382] 445
    }
    else{
        _8517 = NOVALUE;
    }
LE: 

    /** cmdline.e:1157						parse_abort( "option '%s' must not occur more than once in the command line.\n\n", */
    _2 = (object)SEQ_PTR(_find_result_15193);
    _8519 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8519);
    ((intptr_t*)_2)[1] = _8519;
    _8520 = MAKE_SEQ(_1);
    _8519 = NOVALUE;
    RefDS(_8518);
    RefDS(_opts_15195);
    Ref(_add_help_rid_15199);
    RefDS(_cmds_15198);
    Ref(_parse_options_15200);
    _28parse_abort(_8518, _8520, _opts_15195, _add_help_rid_15199, _cmds_15198, _parse_options_15200, _help_on_error_15203, _auto_help_15204);
    _8520 = NOVALUE;
    goto LF; // [407] 445
LC: 

    /** cmdline.e:1161					map:put(parsed_opts, opt[MAPNAME], param)*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8521 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_parsed_opts_15197);
    Ref(_8521);
    Ref(_param_15209);
    _30put(_parsed_opts_15197, _8521, _param_15209, 1, 0);
    _8521 = NOVALUE;
    goto LF; // [426] 445
LB: 

    /** cmdline.e:1164				map:put(parsed_opts, opt[MAPNAME], param, map_add_operation)*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8522 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_parsed_opts_15197);
    Ref(_8522);
    Ref(_param_15209);
    _30put(_parsed_opts_15197, _8522, _param_15209, _map_add_operation_15205, 0);
    _8522 = NOVALUE;
LF: 
LA: 

    /** cmdline.e:1168		if find(VERSIONING, opt[OPTIONS]) then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8523 = (object)*(((s1_ptr)_2)->base + 4);
    _8524 = find_from(118, _8523, 1);
    _8523 = NOVALUE;
    if (_8524 == 0)
    {
        _8524 = NOVALUE;
        goto L10; // [457] 544
    }
    else{
        _8524 = NOVALUE;
    }

    /** cmdline.e:1169			integer ver_pos = find(VERSIONING, opt[OPTIONS]) + 1*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8525 = (object)*(((s1_ptr)_2)->base + 4);
    _8526 = find_from(118, _8525, 1);
    _8525 = NOVALUE;
    _ver_pos_15292 = _8526 + 1;
    _8526 = NOVALUE;

    /** cmdline.e:1170			if length(opt[OPTIONS]) >= ver_pos then*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8528 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_SEQUENCE(_8528)){
            _8529 = SEQ_PTR(_8528)->length;
    }
    else {
        _8529 = 1;
    }
    _8528 = NOVALUE;
    if (_8529 < _ver_pos_15292)
    goto L11; // [484] 513

    /** cmdline.e:1171				printf(1, "%s\n", { opt[OPTIONS][ver_pos] })*/
    _2 = (object)SEQ_PTR(_opt_15206);
    _8531 = (object)*(((s1_ptr)_2)->base + 4);
    _2 = (object)SEQ_PTR(_8531);
    _8532 = (object)*(((s1_ptr)_2)->base + _ver_pos_15292);
    _8531 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_8532);
    ((intptr_t*)_2)[1] = _8532;
    _8533 = MAKE_SEQ(_1);
    _8532 = NOVALUE;
    EPrintf(1, _8061, _8533);
    DeRefDS(_8533);
    _8533 = NOVALUE;

    /** cmdline.e:1172				abort(0)*/
    UserCleanup(0);
    goto L12; // [510] 543
L11: 

    /** cmdline.e:1174				error:crash("help options are incorrect,\n" &*/
    Concat((object_ptr)&_8536, _8534, _8535);
    DeRefi(_fmt_inlined_crash_at_521_15308);
    _fmt_inlined_crash_at_521_15308 = _8536;
    _8536 = NOVALUE;

    /** error.e:51		msg = sprintf(fmt, data)*/
    DeRefi(_msg_inlined_crash_at_524_15309);
    _msg_inlined_crash_at_524_15309 = EPrintf(-9999999, _fmt_inlined_crash_at_521_15308, _5);

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    machine(67, _msg_inlined_crash_at_524_15309);

    /** error.e:53	end procedure*/
    goto L13; // [537] 540
L13: 
    DeRefi(_fmt_inlined_crash_at_521_15308);
    _fmt_inlined_crash_at_521_15308 = NOVALUE;
    DeRefi(_msg_inlined_crash_at_524_15309);
    _msg_inlined_crash_at_524_15309 = NOVALUE;
L12: 
L10: 

    /** cmdline.e:1178		return {arg_idx, call_count}*/
    RefDS(_call_count_15201);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _arg_idx_15194;
    ((intptr_t *)_2)[2] = _call_count_15201;
    _8537 = MAKE_SEQ(_1);
    DeRefDS(_find_result_15193);
    DeRefDS(_opts_15195);
    DeRef(_parsed_opts_15197);
    DeRefDS(_cmds_15198);
    DeRef(_add_help_rid_15199);
    DeRef(_parse_options_15200);
    DeRefDS(_call_count_15201);
    DeRef(_opt_15206);
    DeRef(_param_15209);
    DeRef(_8472);
    _8472 = NOVALUE;
    DeRef(_8477);
    _8477 = NOVALUE;
    DeRef(_8479);
    _8479 = NOVALUE;
    _8528 = NOVALUE;
    DeRef(_8500);
    _8500 = NOVALUE;
    DeRef(_8508);
    _8508 = NOVALUE;
    DeRef(_8481);
    _8481 = NOVALUE;
    DeRef(_8510);
    _8510 = NOVALUE;
    DeRef(_8512);
    _8512 = NOVALUE;
    _8492 = NOVALUE;
    _8460 = NOVALUE;
    return _8537;
    ;
}


object _28cmd_parse(object _opts_15313, object _parse_options_15314, object _cmds_15315)
{
    object _cmd_15317 = NOVALUE;
    object _help_opts_15318 = NOVALUE;
    object _call_count_15319 = NOVALUE;
    object _add_help_rid_15320 = NOVALUE;
    object _validation_15321 = NOVALUE;
    object _has_extra_15322 = NOVALUE;
    object _use_at_15323 = NOVALUE;
    object _auto_help_15324 = NOVALUE;
    object _help_on_error_15325 = NOVALUE;
    object _po_15326 = NOVALUE;
    object _msg_inlined_crash_at_161_15350 = NOVALUE;
    object _msg_inlined_crash_at_225_15361 = NOVALUE;
    object _msg_inlined_crash_at_263_15368 = NOVALUE;
    object _fmt_inlined_crash_at_260_15367 = NOVALUE;
    object _parsed_opts_15373 = NOVALUE;
    object _new_1__tmp_at315_15376 = NOVALUE;
    object _new_inlined_new_at_315_15375 = NOVALUE;
    object _cmds_ok_15378 = NOVALUE;
    object _8564 = NOVALUE;
    object _8560 = NOVALUE;
    object _8557 = NOVALUE;
    object _8556 = NOVALUE;
    object _8550 = NOVALUE;
    object _8546 = NOVALUE;
    object _8543 = NOVALUE;
    object _8541 = NOVALUE;
    object _8539 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:1428		object add_help_rid = -1*/
    DeRef(_add_help_rid_15320);
    _add_help_rid_15320 = -1;

    /** cmdline.e:1429		integer validation = VALIDATE_ALL*/
    _validation_15321 = 2;

    /** cmdline.e:1430		integer has_extra = 0*/
    _has_extra_15322 = 0;

    /** cmdline.e:1431		integer use_at = 1*/
    _use_at_15323 = 1;

    /** cmdline.e:1432		integer auto_help = 1*/
    _auto_help_15324 = 1;

    /** cmdline.e:1433		integer help_on_error = 1*/
    _help_on_error_15325 = 1;

    /** cmdline.e:1435		integer po = 1*/
    _po_15326 = 1;

    /** cmdline.e:1436		if atom(parse_options) then*/
    _8539 = 0;
    if (_8539 == 0)
    {
        _8539 = NOVALUE;
        goto L1; // [45] 55
    }
    else{
        _8539 = NOVALUE;
    }

    /** cmdline.e:1437			parse_options = {parse_options}*/
    _0 = _parse_options_15314;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_parse_options_15314);
    ((intptr_t*)_2)[1] = _parse_options_15314;
    _parse_options_15314 = MAKE_SEQ(_1);
    DeRefDS(_0);
L1: 

    /** cmdline.e:1441		while po <= length(parse_options) do*/
L2: 
    if (IS_SEQUENCE(_parse_options_15314)){
            _8541 = SEQ_PTR(_parse_options_15314)->length;
    }
    else {
        _8541 = 1;
    }
    if (_po_15326 > _8541)
    goto L3; // [63] 296

    /** cmdline.e:1442			switch parse_options[po] do*/
    _2 = (object)SEQ_PTR(_parse_options_15314);
    _8543 = (object)*(((s1_ptr)_2)->base + _po_15326);
    if (IS_SEQUENCE(_8543) ){
        goto L4; // [73] 249
    }
    if(!IS_ATOM_INT(_8543)){
        if( (DBL_PTR(_8543)->dbl != (eudouble) ((object) DBL_PTR(_8543)->dbl) ) ){
            goto L4; // [73] 249
        }
        _0 = (object) DBL_PTR(_8543)->dbl;
    }
    else {
        _0 = _8543;
    };
    _8543 = NOVALUE;
    switch ( _0 ){ 

        /** cmdline.e:1444				case NO_HELP then                         auto_help = 0*/
        case 9:
        _auto_help_15324 = 0;
        goto L5; // [85] 285

        /** cmdline.e:1445				case VALIDATE_ALL then                    validation = VALIDATE_ALL*/
        case 2:
        _validation_15321 = 2;
        goto L5; // [94] 285

        /** cmdline.e:1446				case NO_VALIDATION then                   validation = NO_VALIDATION*/
        case 3:
        _validation_15321 = 3;
        goto L5; // [103] 285

        /** cmdline.e:1447				case NO_VALIDATION_AFTER_FIRST_EXTRA then validation = NO_VALIDATION_AFTER_FIRST_EXTRA*/
        case 4:
        _validation_15321 = 4;
        goto L5; // [112] 285

        /** cmdline.e:1448				case NO_AT_EXPANSION then                 use_at = 0*/
        case 7:
        _use_at_15323 = 0;
        goto L5; // [121] 285

        /** cmdline.e:1449				case AT_EXPANSION then                    use_at = 1*/
        case 6:
        _use_at_15323 = 1;
        goto L5; // [130] 285

        /** cmdline.e:1451				case HELP_RID then*/
        case 1:

        /** cmdline.e:1452					if po < length(parse_options) then*/
        if (IS_SEQUENCE(_parse_options_15314)){
                _8546 = SEQ_PTR(_parse_options_15314)->length;
        }
        else {
            _8546 = 1;
        }
        if (_po_15326 >= _8546)
        goto L6; // [141] 160

        /** cmdline.e:1453						po += 1*/
        _po_15326 = _po_15326 + 1;

        /** cmdline.e:1454						add_help_rid = parse_options[po]*/
        DeRef(_add_help_rid_15320);
        _2 = (object)SEQ_PTR(_parse_options_15314);
        _add_help_rid_15320 = (object)*(((s1_ptr)_2)->base + _po_15326);
        Ref(_add_help_rid_15320);
        goto L5; // [157] 285
L6: 

        /** cmdline.e:1456						error:crash("HELP_RID was given to cmd_parse with no routine_id")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_161_15350);
        _msg_inlined_crash_at_161_15350 = EPrintf(-9999999, _8097, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_161_15350);

        /** error.e:53	end procedure*/
        goto L7; // [175] 178
L7: 
        DeRefi(_msg_inlined_crash_at_161_15350);
        _msg_inlined_crash_at_161_15350 = NOVALUE;
        goto L5; // [181] 285

        /** cmdline.e:1459				case NO_HELP_ON_ERROR then*/
        case 10:

        /** cmdline.e:1461					help_on_error = 0*/
        _help_on_error_15325 = 0;
        goto L5; // [192] 285

        /** cmdline.e:1463				case PAUSE_MSG then*/
        case 8:

        /** cmdline.e:1464					if po < length(parse_options) then*/
        if (IS_SEQUENCE(_parse_options_15314)){
                _8550 = SEQ_PTR(_parse_options_15314)->length;
        }
        else {
            _8550 = 1;
        }
        if (_po_15326 >= _8550)
        goto L8; // [203] 224

        /** cmdline.e:1465						po += 1*/
        _po_15326 = _po_15326 + 1;

        /** cmdline.e:1466						pause_msg = parse_options[po]*/
        DeRef(_28pause_msg_14187);
        _2 = (object)SEQ_PTR(_parse_options_15314);
        _28pause_msg_14187 = (object)*(((s1_ptr)_2)->base + _po_15326);
        Ref(_28pause_msg_14187);
        goto L5; // [221] 285
L8: 

        /** cmdline.e:1468						error:crash("PAUSE_MSG was given to cmd_parse with no actual message text")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_225_15361);
        _msg_inlined_crash_at_225_15361 = EPrintf(-9999999, _8554, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_225_15361);

        /** error.e:53	end procedure*/
        goto L9; // [239] 242
L9: 
        DeRefi(_msg_inlined_crash_at_225_15361);
        _msg_inlined_crash_at_225_15361 = NOVALUE;
        goto L5; // [245] 285

        /** cmdline.e:1471				case else*/
        default:
L4: 

        /** cmdline.e:1472					error:crash(sprintf("Unrecognised cmdline PARSE OPTION - %d", parse_options[po]) )*/
        _2 = (object)SEQ_PTR(_parse_options_15314);
        _8556 = (object)*(((s1_ptr)_2)->base + _po_15326);
        _8557 = EPrintf(-9999999, _8555, _8556);
        _8556 = NOVALUE;
        DeRefi(_fmt_inlined_crash_at_260_15367);
        _fmt_inlined_crash_at_260_15367 = _8557;
        _8557 = NOVALUE;

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_263_15368);
        _msg_inlined_crash_at_263_15368 = EPrintf(-9999999, _fmt_inlined_crash_at_260_15367, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_263_15368);

        /** error.e:53	end procedure*/
        goto LA; // [279] 282
LA: 
        DeRefi(_fmt_inlined_crash_at_260_15367);
        _fmt_inlined_crash_at_260_15367 = NOVALUE;
        DeRefi(_msg_inlined_crash_at_263_15368);
        _msg_inlined_crash_at_263_15368 = NOVALUE;
    ;}L5: 

    /** cmdline.e:1475			po += 1*/
    _po_15326 = _po_15326 + 1;

    /** cmdline.e:1476		end while*/
    goto L2; // [293] 60
L3: 

    /** cmdline.e:1478		opts = standardize_opts(opts, auto_help)*/
    RefDS(_opts_15313);
    _0 = _opts_15313;
    _opts_15313 = _28standardize_opts(_opts_15313, _auto_help_15324);
    DeRefDS(_0);

    /** cmdline.e:1479		call_count = repeat(0, length(opts))*/
    if (IS_SEQUENCE(_opts_15313)){
            _8560 = SEQ_PTR(_opts_15313)->length;
    }
    else {
        _8560 = 1;
    }
    DeRef(_call_count_15319);
    _call_count_15319 = Repeat(0, _8560);
    _8560 = NOVALUE;

    /** cmdline.e:1481		map:map parsed_opts = map:new()*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at315_15376;
    _new_1__tmp_at315_15376 = _30new_map_seq(8);
    DeRef(_0);
    Ref(_new_1__tmp_at315_15376);
    _0 = _parsed_opts_15373;
    _parsed_opts_15373 = _31malloc(_new_1__tmp_at315_15376, 1);
    DeRef(_0);
    DeRef(_new_1__tmp_at315_15376);
    _new_1__tmp_at315_15376 = NOVALUE;

    /** cmdline.e:1482		map:put(parsed_opts, EXTRAS, {})*/
    Ref(_parsed_opts_15373);
    RefDS(_28EXTRAS_14176);
    RefDS(_5);
    _30put(_parsed_opts_15373, _28EXTRAS_14176, _5, 1, 0);

    /** cmdline.e:1485		help_opts = get_help_options( opts )*/
    RefDS(_opts_15313);
    _0 = _help_opts_15318;
    _help_opts_15318 = _28get_help_options(_opts_15313);
    DeRef(_0);

    /** cmdline.e:1487		object cmds_ok = parse_commands( cmds, opts, parsed_opts, help_opts, add_help_rid, parse_options, */
    RefDS(_cmds_15315);
    RefDS(_opts_15313);
    Ref(_parsed_opts_15373);
    RefDS(_help_opts_15318);
    Ref(_add_help_rid_15320);
    Ref(_parse_options_15314);
    RefDS(_call_count_15319);
    _0 = _cmds_ok_15378;
    _cmds_ok_15378 = _28parse_commands(_cmds_15315, _opts_15313, _parsed_opts_15373, _help_opts_15318, _add_help_rid_15320, _parse_options_15314, _use_at_15323, _validation_15321, _has_extra_15322, _call_count_15319, _help_on_error_15325, _auto_help_15324);
    DeRef(_0);

    /** cmdline.e:1489		if atom( cmds_ok ) then*/
    _8564 = IS_ATOM(_cmds_ok_15378);
    if (_8564 == 0)
    {
        _8564 = NOVALUE;
        goto LB; // [371] 381
    }
    else{
        _8564 = NOVALUE;
    }

    /** cmdline.e:1490			return 0*/
    DeRefDS(_opts_15313);
    DeRef(_parse_options_15314);
    DeRefDS(_cmds_15315);
    DeRefDS(_help_opts_15318);
    DeRefDS(_call_count_15319);
    DeRef(_add_help_rid_15320);
    DeRef(_parsed_opts_15373);
    DeRef(_cmds_ok_15378);
    return 0;
LB: 

    /** cmdline.e:1492		cmds       = cmds_ok[1]*/
    DeRefDS(_cmds_15315);
    _2 = (object)SEQ_PTR(_cmds_ok_15378);
    _cmds_15315 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_cmds_15315);

    /** cmdline.e:1493		call_count = cmds_ok[2]*/
    DeRef(_call_count_15319);
    _2 = (object)SEQ_PTR(_cmds_ok_15378);
    _call_count_15319 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_call_count_15319);

    /** cmdline.e:1496		check_mandatory( opts, parsed_opts, add_help_rid, cmds, parse_options, help_on_error, auto_help )*/
    RefDS(_opts_15313);
    Ref(_parsed_opts_15373);
    Ref(_add_help_rid_15320);
    RefDS(_cmds_15315);
    Ref(_parse_options_15314);
    _28check_mandatory(_opts_15313, _parsed_opts_15373, _add_help_rid_15320, _cmds_15315, _parse_options_15314, _help_on_error_15325, _auto_help_15324);

    /** cmdline.e:1498		return parsed_opts*/
    DeRefDS(_opts_15313);
    DeRef(_parse_options_15314);
    DeRefDS(_cmds_15315);
    DeRef(_help_opts_15318);
    DeRefDS(_call_count_15319);
    DeRef(_add_help_rid_15320);
    DeRef(_cmds_ok_15378);
    return _parsed_opts_15373;
    ;
}


object _28build_commandline(object _cmds_15386)
{
    object _8569 = NOVALUE;
    object _8568 = NOVALUE;
    object _8567 = NOVALUE;
    object _0, _1, _2;
    

    /** cmdline.e:1551		return stdseq:flatten( text:quote( cmds,,'\\'," " ), " ")*/
    RefDS(_5724);
    RefDS(_5724);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5724;
    ((intptr_t *)_2)[2] = _5724;
    _8567 = MAKE_SEQ(_1);
    RefDS(_cmds_15386);
    RefDS(_3558);
    _8568 = _13quote(_cmds_15386, _8567, 92, _3558);
    _8567 = NOVALUE;
    RefDS(_3558);
    _8569 = _22flatten(_8568, _3558);
    _8568 = NOVALUE;
    DeRefDS(_cmds_15386);
    return _8569;
    ;
}



// 0x94810777
