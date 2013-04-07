// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _3fatal(object _msg_66398)
{
    object _33067 = NOVALUE;
    object _33066 = NOVALUE;
    object _33065 = NOVALUE;
    object _33064 = NOVALUE;
    object _33063 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:75		puts(2, msg & '\n')*/
    Append(&_33063, _msg_66398, 10);
    EPuts(2, _33063); // DJP 
    DeRefDS(_33063);
    _33063 = NOVALUE;

    /** il.e:76		if not batch_job and not test_only then*/
    _33064 = (_39batch_job_16828 == 0);
    if (_33064 == 0) {
        goto L1; // [19] 46
    }
    _33066 = (_39test_only_16827 == 0);
    if (_33066 == 0)
    {
        DeRef(_33066);
        _33066 = NOVALUE;
        goto L1; // [29] 46
    }
    else{
        DeRef(_33066);
        _33066 = NOVALUE;
    }

    /** il.e:77			ShowMsg(2, 208)*/
    RefDS(_21928);
    _44ShowMsg(2, 208, _21928, 1);

    /** il.e:78			getc(0)*/
    if (0 != last_r_file_no) {
        last_r_file_ptr = which_file(0, EF_READ);
        last_r_file_no = 0;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _33067 = getc((FILE*)xstdin);
        }
        else{
            _33067 = getc(last_r_file_ptr);
        }
    }
    else{
        _33067 = getc(last_r_file_ptr);
    }
L1: 

    /** il.e:81		abort(1)*/
    UserCleanup(1);

    /** il.e:82	end procedure*/
    DeRefDS(_msg_66398);
    DeRef(_33064);
    _33064 = NOVALUE;
    return;
    ;
}


void _3OutputSymTab(object _f_66411)
{
    object _still_changing_66413 = NOVALUE;
    object _fd_66414 = NOVALUE;
    object _r_66415 = NOVALUE;
    object _reflist_66416 = NOVALUE;
    object _decorate_66417 = NOVALUE;
    object _33217 = NOVALUE;
    object _33216 = NOVALUE;
    object _33215 = NOVALUE;
    object _33214 = NOVALUE;
    object _33213 = NOVALUE;
    object _33212 = NOVALUE;
    object _33211 = NOVALUE;
    object _33210 = NOVALUE;
    object _33209 = NOVALUE;
    object _33208 = NOVALUE;
    object _33207 = NOVALUE;
    object _33206 = NOVALUE;
    object _33205 = NOVALUE;
    object _33204 = NOVALUE;
    object _33202 = NOVALUE;
    object _33201 = NOVALUE;
    object _33200 = NOVALUE;
    object _33199 = NOVALUE;
    object _33198 = NOVALUE;
    object _33197 = NOVALUE;
    object _33196 = NOVALUE;
    object _33195 = NOVALUE;
    object _33194 = NOVALUE;
    object _33193 = NOVALUE;
    object _33192 = NOVALUE;
    object _33191 = NOVALUE;
    object _33190 = NOVALUE;
    object _33189 = NOVALUE;
    object _33188 = NOVALUE;
    object _33187 = NOVALUE;
    object _33186 = NOVALUE;
    object _33185 = NOVALUE;
    object _33184 = NOVALUE;
    object _33183 = NOVALUE;
    object _33182 = NOVALUE;
    object _33181 = NOVALUE;
    object _33180 = NOVALUE;
    object _33179 = NOVALUE;
    object _33178 = NOVALUE;
    object _33177 = NOVALUE;
    object _33176 = NOVALUE;
    object _33175 = NOVALUE;
    object _33174 = NOVALUE;
    object _33173 = NOVALUE;
    object _33172 = NOVALUE;
    object _33171 = NOVALUE;
    object _33170 = NOVALUE;
    object _33169 = NOVALUE;
    object _33168 = NOVALUE;
    object _33167 = NOVALUE;
    object _33166 = NOVALUE;
    object _33165 = NOVALUE;
    object _33164 = NOVALUE;
    object _33163 = NOVALUE;
    object _33162 = NOVALUE;
    object _33160 = NOVALUE;
    object _33158 = NOVALUE;
    object _33157 = NOVALUE;
    object _33156 = NOVALUE;
    object _33155 = NOVALUE;
    object _33154 = NOVALUE;
    object _33153 = NOVALUE;
    object _33152 = NOVALUE;
    object _33151 = NOVALUE;
    object _33149 = NOVALUE;
    object _33148 = NOVALUE;
    object _33147 = NOVALUE;
    object _33146 = NOVALUE;
    object _33145 = NOVALUE;
    object _33144 = NOVALUE;
    object _33143 = NOVALUE;
    object _33142 = NOVALUE;
    object _33141 = NOVALUE;
    object _33140 = NOVALUE;
    object _33139 = NOVALUE;
    object _33138 = NOVALUE;
    object _33137 = NOVALUE;
    object _33135 = NOVALUE;
    object _33134 = NOVALUE;
    object _33133 = NOVALUE;
    object _33131 = NOVALUE;
    object _33130 = NOVALUE;
    object _33129 = NOVALUE;
    object _33128 = NOVALUE;
    object _33126 = NOVALUE;
    object _33125 = NOVALUE;
    object _33124 = NOVALUE;
    object _33123 = NOVALUE;
    object _33122 = NOVALUE;
    object _33121 = NOVALUE;
    object _33120 = NOVALUE;
    object _33118 = NOVALUE;
    object _33117 = NOVALUE;
    object _33116 = NOVALUE;
    object _33113 = NOVALUE;
    object _33112 = NOVALUE;
    object _33111 = NOVALUE;
    object _33110 = NOVALUE;
    object _33109 = NOVALUE;
    object _33108 = NOVALUE;
    object _33107 = NOVALUE;
    object _33103 = NOVALUE;
    object _33102 = NOVALUE;
    object _33100 = NOVALUE;
    object _33098 = NOVALUE;
    object _33096 = NOVALUE;
    object _33095 = NOVALUE;
    object _33093 = NOVALUE;
    object _33091 = NOVALUE;
    object _33090 = NOVALUE;
    object _33089 = NOVALUE;
    object _33088 = NOVALUE;
    object _33087 = NOVALUE;
    object _33086 = NOVALUE;
    object _33085 = NOVALUE;
    object _33084 = NOVALUE;
    object _33083 = NOVALUE;
    object _33082 = NOVALUE;
    object _33081 = NOVALUE;
    object _33080 = NOVALUE;
    object _33079 = NOVALUE;
    object _33078 = NOVALUE;
    object _33077 = NOVALUE;
    object _33075 = NOVALUE;
    object _33074 = NOVALUE;
    object _33073 = NOVALUE;
    object _33072 = NOVALUE;
    object _33071 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** il.e:87		integer fd, r*/

    /** il.e:88		sequence reflist, decorate*/

    /** il.e:92		if list then*/
    if (_3list_66383 == 0)
    {
        goto L1; // [11] 51
    }
    else{
    }

    /** il.e:93			fd = open("deleted.txt", "w")*/
    _fd_66414 = EOpen(_33068, _22064, 0);

    /** il.e:94			if fd = -1 then*/
    if (_fd_66414 != -1)
    goto L2; // [23] 39

    /** il.e:95				fatal(GetMsgText(243,0))*/
    RefDS(_21928);
    _33071 = _44GetMsgText(243, 0, _21928);
    _3fatal(_33071);
    _33071 = NOVALUE;
L2: 

    /** il.e:97			puts(fd, GetMsgText(244, 0))*/
    RefDS(_21928);
    _33072 = _44GetMsgText(244, 0, _21928);
    EPuts(_fd_66414, _33072); // DJP 
    DeRef(_33072);
    _33072 = NOVALUE;
L1: 

    /** il.e:100		still_changing = TRUE*/
    _still_changing_66413 = _9TRUE_444;

    /** il.e:102		while still_changing do*/
L3: 
    if (_still_changing_66413 == 0)
    {
        goto L4; // [63] 459
    }
    else{
    }

    /** il.e:103			still_changing = FALSE*/
    _still_changing_66413 = _9FALSE_442;

    /** il.e:105			for i = length(SymTab) to 1 by -1 do*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _33073 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _33073 = 1;
    }
    {
        object _i_66431;
        _i_66431 = _33073;
L5: 
        if (_i_66431 < 1){
            goto L6; // [80] 454
        }

        /** il.e:106				if length(SymTab[i]) >= S_NREFS then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33074 = (object)*(((s1_ptr)_2)->base + _i_66431);
        if (IS_SEQUENCE(_33074)){
                _33075 = SEQ_PTR(_33074)->length;
        }
        else {
            _33075 = 1;
        }
        _33074 = NOVALUE;
        if (_33075 < 12)
        goto L7; // [100] 447

        /** il.e:108					if SymTab[i][S_MODE] = M_NORMAL and*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33077 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33077);
        _33078 = (object)*(((s1_ptr)_2)->base + 3);
        _33077 = NOVALUE;
        if (IS_ATOM_INT(_33078)) {
            _33079 = (_33078 == 1);
        }
        else {
            _33079 = binary_op(EQUALS, _33078, 1);
        }
        _33078 = NOVALUE;
        if (IS_ATOM_INT(_33079)) {
            if (_33079 == 0) {
                DeRef(_33080);
                _33080 = 0;
                goto L8; // [124] 148
            }
        }
        else {
            if (DBL_PTR(_33079)->dbl == 0.0) {
                DeRef(_33080);
                _33080 = 0;
                goto L8; // [124] 148
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33081 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33081);
        _33082 = (object)*(((s1_ptr)_2)->base + 12);
        _33081 = NOVALUE;
        if (IS_ATOM_INT(_33082)) {
            _33083 = (_33082 == 0);
        }
        else {
            _33083 = binary_op(EQUALS, _33082, 0);
        }
        _33082 = NOVALUE;
        DeRef(_33080);
        if (IS_ATOM_INT(_33083))
        _33080 = (_33083 != 0);
        else
        _33080 = DBL_PTR(_33083)->dbl != 0.0;
L8: 
        if (_33080 == 0) {
            goto L9; // [148] 446
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33085 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33085);
        _33086 = (object)*(((s1_ptr)_2)->base + 4);
        _33085 = NOVALUE;
        if (IS_ATOM_INT(_33086)) {
            _33087 = (_33086 > 3);
        }
        else {
            _33087 = binary_op(GREATER, _33086, 3);
        }
        _33086 = NOVALUE;
        if (_33087 == 0) {
            DeRef(_33087);
            _33087 = NOVALUE;
            goto L9; // [171] 446
        }
        else {
            if (!IS_ATOM_INT(_33087) && DBL_PTR(_33087)->dbl == 0.0){
                DeRef(_33087);
                _33087 = NOVALUE;
                goto L9; // [171] 446
            }
            DeRef(_33087);
            _33087 = NOVALUE;
        }
        DeRef(_33087);
        _33087 = NOVALUE;

        /** il.e:112						if find(SymTab[i][S_TOKEN], RTN_TOKS) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33088 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33088);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _33089 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _33089 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _33088 = NOVALUE;
        _33090 = find_from(_33089, _40RTN_TOKS_16423, 1);
        _33089 = NOVALUE;
        if (_33090 == 0)
        {
            _33090 = NOVALUE;
            goto LA; // [195] 319
        }
        else{
            _33090 = NOVALUE;
        }

        /** il.e:114							reflist = SymTab[i][S_REFLIST]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33091 = (object)*(((s1_ptr)_2)->base + _i_66431);
        DeRef(_reflist_66416);
        _2 = (object)SEQ_PTR(_33091);
        _reflist_66416 = (object)*(((s1_ptr)_2)->base + 24);
        Ref(_reflist_66416);
        _33091 = NOVALUE;

        /** il.e:115							for j = 1 to length(reflist) do*/
        if (IS_SEQUENCE(_reflist_66416)){
                _33093 = SEQ_PTR(_reflist_66416)->length;
        }
        else {
            _33093 = 1;
        }
        {
            object _j_66472;
            _j_66472 = 1;
LB: 
            if (_j_66472 > _33093){
                goto LC; // [219] 309
            }

            /** il.e:116								r = reflist[j]*/
            _2 = (object)SEQ_PTR(_reflist_66416);
            _r_66415 = (object)*(((s1_ptr)_2)->base + _j_66472);
            if (!IS_ATOM_INT(_r_66415))
            _r_66415 = (object)DBL_PTR(_r_66415)->dbl;

            /** il.e:117								if SymTab[r][S_SCOPE] <= SC_PRIVATE then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _33095 = (object)*(((s1_ptr)_2)->base + _r_66415);
            _2 = (object)SEQ_PTR(_33095);
            _33096 = (object)*(((s1_ptr)_2)->base + 4);
            _33095 = NOVALUE;
            if (binary_op_a(GREATER, _33096, 3)){
                _33096 = NOVALUE;
                goto LD; // [248] 270
            }
            _33096 = NOVALUE;

            /** il.e:120									SymTab[r][S_SCOPE] = SC_UNDEFINED*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_r_66415 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 4);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 9;
            DeRef(_1);
            _33098 = NOVALUE;
LD: 

            /** il.e:122								SymTab[r][S_NREFS] -= 1*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_r_66415 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            _33102 = (object)*(((s1_ptr)_2)->base + 12);
            _33100 = NOVALUE;
            if (IS_ATOM_INT(_33102)) {
                _33103 = _33102 - 1;
                if ((object)((uintptr_t)_33103 +(uintptr_t) HIGH_BITS) >= 0){
                    _33103 = NewDouble((eudouble)_33103);
                }
            }
            else {
                _33103 = binary_op(MINUS, _33102, 1);
            }
            _33102 = NOVALUE;
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 12);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _33103;
            if( _1 != _33103 ){
                DeRef(_1);
            }
            _33103 = NOVALUE;
            _33100 = NOVALUE;

            /** il.e:123								ifdef DEBUG then*/

            /** il.e:129								still_changing = TRUE*/
            _still_changing_66413 = _9TRUE_444;

            /** il.e:130							end for*/
            _j_66472 = _j_66472 + 1;
            goto LB; // [304] 226
LC: 
            ;
        }

        /** il.e:131							decorate = "()"*/
        RefDS(_33104);
        DeRefi(_decorate_66417);
        _decorate_66417 = _33104;
        goto LE; // [316] 327
LA: 

        /** il.e:134							decorate = ""*/
        RefDS(_21928);
        DeRefi(_decorate_66417);
        _decorate_66417 = _21928;
LE: 

        /** il.e:136						if i > TopLevelSub then*/
        if (_i_66431 <= _39TopLevelSub_16822)
        goto LF; // [331] 421

        /** il.e:138							if list then*/
        if (_3list_66383 == 0)
        {
            goto L10; // [339] 390
        }
        else{
        }

        /** il.e:139								printf(fd, "%s: %s%s [%d]\n",*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33107 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33107);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _33108 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _33108 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _33107 = NOVALUE;
        _2 = (object)SEQ_PTR(_36known_files_15405);
        if (!IS_ATOM_INT(_33108)){
            _33109 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_33108)->dbl));
        }
        else{
            _33109 = (object)*(((s1_ptr)_2)->base + _33108);
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33110 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33110);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33111 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33111 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _33110 = NOVALUE;
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_33109);
        ((intptr_t*)_2)[1] = _33109;
        Ref(_33111);
        ((intptr_t*)_2)[2] = _33111;
        RefDS(_decorate_66417);
        ((intptr_t*)_2)[3] = _decorate_66417;
        ((intptr_t*)_2)[4] = _i_66431;
        _33112 = MAKE_SEQ(_1);
        _33111 = NOVALUE;
        _33109 = NOVALUE;
        EPrintf(_fd_66414, _33106, _33112);
        DeRefDS(_33112);
        _33112 = NOVALUE;
L10: 

        /** il.e:144							if length(decorate) then*/
        if (IS_SEQUENCE(_decorate_66417)){
                _33113 = SEQ_PTR(_decorate_66417)->length;
        }
        else {
            _33113 = 1;
        }
        if (_33113 == 0)
        {
            _33113 = NOVALUE;
            goto L11; // [397] 411
        }
        else{
            _33113 = NOVALUE;
        }

        /** il.e:145								del_routines += 1*/
        _3del_routines_66386 = _3del_routines_66386 + 1;
        goto L12; // [408] 420
L11: 

        /** il.e:147								del_vars += 1*/
        _3del_vars_66387 = _3del_vars_66387 + 1;
L12: 
LF: 

        /** il.e:150						SymTab[i] = {0, SymTab[i][S_NEXT]} -- delete it*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33116 = (object)*(((s1_ptr)_2)->base + _i_66431);
        _2 = (object)SEQ_PTR(_33116);
        _33117 = (object)*(((s1_ptr)_2)->base + 2);
        _33116 = NOVALUE;
        Ref(_33117);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 0;
        ((intptr_t *)_2)[2] = _33117;
        _33118 = MAKE_SEQ(_1);
        _33117 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66431);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33118;
        if( _1 != _33118 ){
            DeRef(_1);
        }
        _33118 = NOVALUE;
L9: 
L7: 

        /** il.e:153			end for*/
        _i_66431 = _i_66431 + -1;
        goto L5; // [449] 87
L6: 
        ;
    }

    /** il.e:154		end while*/
    goto L3; // [456] 63
L4: 

    /** il.e:156		if list then*/
    if (_3list_66383 == 0)
    {
        goto L13; // [463] 489
    }
    else{
    }

    /** il.e:157			close(fd)*/
    EClose(_fd_66414);

    /** il.e:158			if not quiet then*/
    if (_3quiet_66384 != 0)
    goto L14; // [476] 488

    /** il.e:159				ShowMsg(1, 245)*/
    RefDS(_21928);
    _44ShowMsg(1, 245, _21928, 1);
L14: 
L13: 

    /** il.e:165		for i = 1 to length(SymTab) do*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _33120 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _33120 = 1;
    }
    {
        object _i_66528;
        _i_66528 = 1;
L15: 
        if (_i_66528 > _33120){
            goto L16; // [496] 1182
        }

        /** il.e:166			if equal(SymTab[i][S_OBJ], NOVALUE) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33121 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33121);
        _33122 = (object)*(((s1_ptr)_2)->base + 1);
        _33121 = NOVALUE;
        if (_33122 == _39NOVALUE_16670)
        _33123 = 1;
        else if (IS_ATOM_INT(_33122) && IS_ATOM_INT(_39NOVALUE_16670))
        _33123 = 0;
        else
        _33123 = (compare(_33122, _39NOVALUE_16670) == 0);
        _33122 = NOVALUE;
        if (_33123 == 0)
        {
            _33123 = NOVALUE;
            goto L17; // [523] 587
        }
        else{
            _33123 = NOVALUE;
        }

        /** il.e:167				if SymTab[i][S_MODE] != M_CONSTANT or length(SymTab[i]) >= S_NAME then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33124 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33124);
        _33125 = (object)*(((s1_ptr)_2)->base + 3);
        _33124 = NOVALUE;
        if (IS_ATOM_INT(_33125)) {
            _33126 = (_33125 != 2);
        }
        else {
            _33126 = binary_op(NOTEQ, _33125, 2);
        }
        _33125 = NOVALUE;
        if (IS_ATOM_INT(_33126)) {
            if (_33126 != 0) {
                goto L18; // [546] 570
            }
        }
        else {
            if (DBL_PTR(_33126)->dbl != 0.0) {
                goto L18; // [546] 570
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33128 = (object)*(((s1_ptr)_2)->base + _i_66528);
        if (IS_SEQUENCE(_33128)){
                _33129 = SEQ_PTR(_33128)->length;
        }
        else {
            _33129 = 1;
        }
        _33128 = NOVALUE;
        if (IS_ATOM_INT(_39S_NAME_16470)) {
            _33130 = (_33129 >= _39S_NAME_16470);
        }
        else {
            _33130 = binary_op(GREATEREQ, _33129, _39S_NAME_16470);
        }
        _33129 = NOVALUE;
        if (_33130 == 0) {
            DeRef(_33130);
            _33130 = NOVALUE;
            goto L19; // [566] 586
        }
        else {
            if (!IS_ATOM_INT(_33130) && DBL_PTR(_33130)->dbl == 0.0){
                DeRef(_33130);
                _33130 = NOVALUE;
                goto L19; // [566] 586
            }
            DeRef(_33130);
            _33130 = NOVALUE;
        }
        DeRef(_33130);
        _33130 = NOVALUE;
L18: 

        /** il.e:169					SymTab[i][S_OBJ] = 0 -- saves space, will be set to C "no value"*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_66528 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        _33131 = NOVALUE;
L19: 
L17: 

        /** il.e:174			if length(SymTab[i]) < SIZEOF_TEMP_ENTRY or*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33133 = (object)*(((s1_ptr)_2)->base + _i_66528);
        if (IS_SEQUENCE(_33133)){
                _33134 = SEQ_PTR(_33133)->length;
        }
        else {
            _33134 = 1;
        }
        _33133 = NOVALUE;
        _33135 = (_33134 < _39SIZEOF_TEMP_ENTRY_16606);
        _33134 = NOVALUE;
        if (_33135 != 0) {
            goto L1A; // [604] 665
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33137 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33137);
        _33138 = (object)*(((s1_ptr)_2)->base + 4);
        _33137 = NOVALUE;
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 8;
        ((intptr_t *)_2)[2] = 7;
        _33139 = MAKE_SEQ(_1);
        _33140 = find_from(_33138, _33139, 1);
        _33138 = NOVALUE;
        DeRefDS(_33139);
        _33139 = NOVALUE;
        if (_33140 == 0) {
            DeRef(_33141);
            _33141 = 0;
            goto L1B; // [633] 660
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33142 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33142);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33143 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33143 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _33142 = NOVALUE;
        if (_33143 == _24492)
        _33144 = 1;
        else if (IS_ATOM_INT(_33143) && IS_ATOM_INT(_24492))
        _33144 = 0;
        else
        _33144 = (compare(_33143, _24492) == 0);
        _33143 = NOVALUE;
        _33145 = (_33144 == 0);
        _33144 = NOVALUE;
        _33141 = (_33145 != 0);
L1B: 
        if (_33141 == 0)
        {
            _33141 = NOVALUE;
            goto L1C; // [661] 688
        }
        else{
            _33141 = NOVALUE;
        }
L1A: 

        /** il.e:178				SymTab[i] = SymTab[i][S_NEXT] -- store NEXT field as an atom,*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33146 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33146);
        _33147 = (object)*(((s1_ptr)_2)->base + 2);
        _33146 = NOVALUE;
        Ref(_33147);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66528);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33147;
        if( _1 != _33147 ){
            DeRef(_1);
        }
        _33147 = NOVALUE;
        goto L1D; // [685] 1175
L1C: 

        /** il.e:181			elsif length(SymTab[i]) = SIZEOF_TEMP_ENTRY then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33148 = (object)*(((s1_ptr)_2)->base + _i_66528);
        if (IS_SEQUENCE(_33148)){
                _33149 = SEQ_PTR(_33148)->length;
        }
        else {
            _33149 = 1;
        }
        _33148 = NOVALUE;
        if (_33149 != _39SIZEOF_TEMP_ENTRY_16606)
        goto L1E; // [701] 743

        /** il.e:182				SymTab[i] = SymTab[i][1..4] & SymTab[i][S_NEXT_IN_BLOCK]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33151 = (object)*(((s1_ptr)_2)->base + _i_66528);
        rhs_slice_target = (object_ptr)&_33152;
        RHS_Slice(_33151, 1, 4);
        _33151 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33153 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33153);
        if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462)){
            _33154 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
        }
        else{
            _33154 = (object)*(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
        }
        _33153 = NOVALUE;
        if (IS_SEQUENCE(_33152) && IS_ATOM(_33154)) {
            Ref(_33154);
            Append(&_33155, _33152, _33154);
        }
        else if (IS_ATOM(_33152) && IS_SEQUENCE(_33154)) {
        }
        else {
            Concat((object_ptr)&_33155, _33152, _33154);
            DeRefDS(_33152);
            _33152 = NOVALUE;
        }
        DeRef(_33152);
        _33152 = NOVALUE;
        _33154 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66528);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33155;
        if( _1 != _33155 ){
            DeRef(_1);
        }
        _33155 = NOVALUE;
        goto L1D; // [740] 1175
L1E: 

        /** il.e:185				if find(SymTab[i][S_TOKEN], RTN_TOKS) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33156 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33156);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _33157 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _33157 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _33156 = NOVALUE;
        _33158 = find_from(_33157, _40RTN_TOKS_16423, 1);
        _33157 = NOVALUE;
        if (_33158 == 0)
        {
            _33158 = NOVALUE;
            goto L1F; // [764] 962
        }
        else{
            _33158 = NOVALUE;
        }

        /** il.e:187					if not full_debug then*/
        if (_3full_debug_66385 != 0)
        goto L20; // [771] 790

        /** il.e:188						SymTab[i][S_LINETAB] = 0*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_66528 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_39S_LINETAB_16505))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _39S_LINETAB_16505);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        _33160 = NOVALUE;
L20: 

        /** il.e:190					SymTab[i] = SymTab[i][1..4] & {SymTab[i][S_NEXT_IN_BLOCK],*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33162 = (object)*(((s1_ptr)_2)->base + _i_66528);
        rhs_slice_target = (object_ptr)&_33163;
        RHS_Slice(_33162, 1, 4);
        _33162 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33164 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33164);
        if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462)){
            _33165 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
        }
        else{
            _33165 = (object)*(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
        }
        _33164 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33166 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33166);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _33167 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _33167 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _33166 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33168 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33168);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33169 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33169 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _33168 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33170 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33170);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _33171 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _33171 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _33170 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33172 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33172);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _33173 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _33173 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        _33172 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33174 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33174);
        if (!IS_ATOM_INT(_39S_BLOCK_16490)){
            _33175 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
        }
        else{
            _33175 = (object)*(((s1_ptr)_2)->base + _39S_BLOCK_16490);
        }
        _33174 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33176 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33176);
        if (!IS_ATOM_INT(_39S_LINETAB_16505)){
            _33177 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_LINETAB_16505)->dbl));
        }
        else{
            _33177 = (object)*(((s1_ptr)_2)->base + _39S_LINETAB_16505);
        }
        _33176 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33178 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33178);
        if (!IS_ATOM_INT(_39S_TEMPS_16515)){
            _33179 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
        }
        else{
            _33179 = (object)*(((s1_ptr)_2)->base + _39S_TEMPS_16515);
        }
        _33178 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33180 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33180);
        if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
            _33181 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
        }
        else{
            _33181 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
        }
        _33180 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33182 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33182);
        if (!IS_ATOM_INT(_39S_FIRSTLINE_16510)){
            _33183 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRSTLINE_16510)->dbl));
        }
        else{
            _33183 = (object)*(((s1_ptr)_2)->base + _39S_FIRSTLINE_16510);
        }
        _33182 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33184 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33184);
        if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
            _33185 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
        }
        else{
            _33185 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
        }
        _33184 = NOVALUE;
        _1 = NewS1(11);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_33165);
        ((intptr_t*)_2)[1] = _33165;
        Ref(_33167);
        ((intptr_t*)_2)[2] = _33167;
        Ref(_33169);
        ((intptr_t*)_2)[3] = _33169;
        Ref(_33171);
        ((intptr_t*)_2)[4] = _33171;
        Ref(_33173);
        ((intptr_t*)_2)[5] = _33173;
        Ref(_33175);
        ((intptr_t*)_2)[6] = _33175;
        Ref(_33177);
        ((intptr_t*)_2)[7] = _33177;
        Ref(_33179);
        ((intptr_t*)_2)[8] = _33179;
        Ref(_33181);
        ((intptr_t*)_2)[9] = _33181;
        Ref(_33183);
        ((intptr_t*)_2)[10] = _33183;
        Ref(_33185);
        ((intptr_t*)_2)[11] = _33185;
        _33186 = MAKE_SEQ(_1);
        _33185 = NOVALUE;
        _33183 = NOVALUE;
        _33181 = NOVALUE;
        _33179 = NOVALUE;
        _33177 = NOVALUE;
        _33175 = NOVALUE;
        _33173 = NOVALUE;
        _33171 = NOVALUE;
        _33169 = NOVALUE;
        _33167 = NOVALUE;
        _33165 = NOVALUE;
        Concat((object_ptr)&_33187, _33163, _33186);
        DeRefDS(_33163);
        _33163 = NOVALUE;
        DeRef(_33163);
        _33163 = NOVALUE;
        DeRefDS(_33186);
        _33186 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66528);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33187;
        if( _1 != _33187 ){
            DeRef(_1);
        }
        _33187 = NOVALUE;
        goto L21; // [959] 1174
L1F: 

        /** il.e:203					if SymTab[i][S_MODE] = M_CONSTANT and equal( SymTab[i][S_OBJ], NOVALUE ) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33188 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33188);
        _33189 = (object)*(((s1_ptr)_2)->base + 3);
        _33188 = NOVALUE;
        if (IS_ATOM_INT(_33189)) {
            _33190 = (_33189 == 2);
        }
        else {
            _33190 = binary_op(EQUALS, _33189, 2);
        }
        _33189 = NOVALUE;
        if (IS_ATOM_INT(_33190)) {
            if (_33190 == 0) {
                goto L22; // [982] 1031
            }
        }
        else {
            if (DBL_PTR(_33190)->dbl == 0.0) {
                goto L22; // [982] 1031
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33192 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33192);
        _33193 = (object)*(((s1_ptr)_2)->base + 1);
        _33192 = NOVALUE;
        if (_33193 == _39NOVALUE_16670)
        _33194 = 1;
        else if (IS_ATOM_INT(_33193) && IS_ATOM_INT(_39NOVALUE_16670))
        _33194 = 0;
        else
        _33194 = (compare(_33193, _39NOVALUE_16670) == 0);
        _33193 = NOVALUE;
        if (_33194 == 0)
        {
            _33194 = NOVALUE;
            goto L22; // [1005] 1031
        }
        else{
            _33194 = NOVALUE;
        }

        /** il.e:205						SymTab[i] = SymTab[i][S_NEXT] -- "deleted"*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33195 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33195);
        _33196 = (object)*(((s1_ptr)_2)->base + 2);
        _33195 = NOVALUE;
        Ref(_33196);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66528);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33196;
        if( _1 != _33196 ){
            DeRef(_1);
        }
        _33196 = NOVALUE;
        goto L23; // [1028] 1173
L22: 

        /** il.e:208						if not full_debug  and SymTab[i][S_TOKEN] != NAMESPACE then*/
        _33197 = (_3full_debug_66385 == 0);
        if (_33197 == 0) {
            goto L24; // [1038] 1080
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33199 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33199);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _33200 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _33200 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _33199 = NOVALUE;
        if (IS_ATOM_INT(_33200)) {
            _33201 = (_33200 != 523);
        }
        else {
            _33201 = binary_op(NOTEQ, _33200, 523);
        }
        _33200 = NOVALUE;
        if (_33201 == 0) {
            DeRef(_33201);
            _33201 = NOVALUE;
            goto L24; // [1061] 1080
        }
        else {
            if (!IS_ATOM_INT(_33201) && DBL_PTR(_33201)->dbl == 0.0){
                DeRef(_33201);
                _33201 = NOVALUE;
                goto L24; // [1061] 1080
            }
            DeRef(_33201);
            _33201 = NOVALUE;
        }
        DeRef(_33201);
        _33201 = NOVALUE;

        /** il.e:209							SymTab[i][S_NAME] = 0*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_66528 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_39S_NAME_16470))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _39S_NAME_16470);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        _33202 = NOVALUE;
L24: 

        /** il.e:212						SymTab[i] = SymTab[i][1..4] & {SymTab[i][S_NEXT_IN_BLOCK],*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33204 = (object)*(((s1_ptr)_2)->base + _i_66528);
        rhs_slice_target = (object_ptr)&_33205;
        RHS_Slice(_33204, 1, 4);
        _33204 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33206 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33206);
        if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462)){
            _33207 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
        }
        else{
            _33207 = (object)*(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
        }
        _33206 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33208 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33208);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _33209 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _33209 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _33208 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33210 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33210);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _33211 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _33211 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _33210 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33212 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33212);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _33213 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _33213 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _33212 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _33214 = (object)*(((s1_ptr)_2)->base + _i_66528);
        _2 = (object)SEQ_PTR(_33214);
        if (!IS_ATOM_INT(_39S_BLOCK_16490)){
            _33215 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
        }
        else{
            _33215 = (object)*(((s1_ptr)_2)->base + _39S_BLOCK_16490);
        }
        _33214 = NOVALUE;
        _1 = NewS1(6);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_33207);
        ((intptr_t*)_2)[1] = _33207;
        Ref(_33209);
        ((intptr_t*)_2)[2] = _33209;
        Ref(_33211);
        ((intptr_t*)_2)[3] = _33211;
        Ref(_33213);
        ((intptr_t*)_2)[4] = _33213;
        RefDS(_21928);
        ((intptr_t*)_2)[5] = _21928;
        Ref(_33215);
        ((intptr_t*)_2)[6] = _33215;
        _33216 = MAKE_SEQ(_1);
        _33215 = NOVALUE;
        _33213 = NOVALUE;
        _33211 = NOVALUE;
        _33209 = NOVALUE;
        _33207 = NOVALUE;
        Concat((object_ptr)&_33217, _33205, _33216);
        DeRefDS(_33205);
        _33205 = NOVALUE;
        DeRef(_33205);
        _33205 = NOVALUE;
        DeRefDS(_33216);
        _33216 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66528);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33217;
        if( _1 != _33217 ){
            DeRef(_1);
        }
        _33217 = NOVALUE;
L23: 
L21: 
L1D: 

        /** il.e:221		end for*/
        _i_66528 = _i_66528 + 1;
        goto L15; // [1177] 503
L16: 
        ;
    }

    /** il.e:222		fcompress(f, SymTab)*/
    RefDS(_36SymTab_15404);
    _37fcompress(_f_66411, _36SymTab_15404);

    /** il.e:224	end procedure*/
    DeRef(_reflist_66416);
    DeRefi(_decorate_66417);
    DeRef(_33083);
    _33083 = NOVALUE;
    DeRef(_33079);
    _33079 = NOVALUE;
    _33108 = NOVALUE;
    DeRef(_33190);
    _33190 = NOVALUE;
    DeRef(_33197);
    _33197 = NOVALUE;
    _33128 = NOVALUE;
    _33148 = NOVALUE;
    _33133 = NOVALUE;
    DeRef(_33126);
    _33126 = NOVALUE;
    _33074 = NOVALUE;
    DeRef(_33145);
    _33145 = NOVALUE;
    DeRef(_33135);
    _33135 = NOVALUE;
    return;
    ;
}


void _3OutputSlist(object _f_66726)
{
    object _33222 = NOVALUE;
    object _33221 = NOVALUE;
    object _33220 = NOVALUE;
    object _33219 = NOVALUE;
    object _33218 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:228		for i = 1 to length(slist) do*/
    if (IS_SEQUENCE(_39slist_16905)){
            _33218 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _33218 = 1;
    }
    {
        object _i_66728;
        _i_66728 = 1;
L1: 
        if (_i_66728 > _33218){
            goto L2; // [10] 58
        }

        /** il.e:230			if sequence(slist[i]) then*/
        _2 = (object)SEQ_PTR(_39slist_16905);
        _33219 = (object)*(((s1_ptr)_2)->base + _i_66728);
        _33220 = IS_SEQUENCE(_33219);
        _33219 = NOVALUE;
        if (_33220 == 0)
        {
            _33220 = NOVALUE;
            goto L3; // [28] 51
        }
        else{
            _33220 = NOVALUE;
        }

        /** il.e:231				slist[i] = slist[i][2..3]*/
        _2 = (object)SEQ_PTR(_39slist_16905);
        _33221 = (object)*(((s1_ptr)_2)->base + _i_66728);
        rhs_slice_target = (object_ptr)&_33222;
        RHS_Slice(_33221, 2, 3);
        _33221 = NOVALUE;
        _2 = (object)SEQ_PTR(_39slist_16905);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39slist_16905 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_66728);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33222;
        if( _1 != _33222 ){
            DeRef(_1);
        }
        _33222 = NOVALUE;
L3: 

        /** il.e:233		end for*/
        _i_66728 = _i_66728 + 1;
        goto L1; // [53] 17
L2: 
        ;
    }

    /** il.e:234		fcompress(f, slist)*/
    RefDS(_39slist_16905);
    _37fcompress(_f_66726, _39slist_16905);

    /** il.e:235	end procedure*/
    return;
    ;
}


void _3OutputHeader(object _f_66744)
{
    object _33223 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:239		if shroud_only then*/
    if (_39shroud_only_16813 == 0)
    {
        goto L1; // [7] 39
    }
    else{
    }

    /** il.e:240			if sequence(shebang) then*/
    _33223 = IS_SEQUENCE(_63shebang_25186);
    if (_33223 == 0)
    {
        _33223 = NOVALUE;
        goto L2; // [17] 30
    }
    else{
        _33223 = NOVALUE;
    }

    /** il.e:241				puts(f, shebang)*/
    EPuts(_f_66744, _63shebang_25186); // DJP 
    goto L3; // [27] 38
L2: 

    /** il.e:244				ifdef UNIX then*/

    /** il.e:245					puts(f, "#!/usr/bin/env eub\n")*/
    EPuts(_f_66744, _33224); // DJP 
L3: 
L1: 

    /** il.e:252		puts(f, IL_MAGIC)*/
    EPuts(_f_66744, 79); // DJP 

    /** il.e:253		puts(f, IL_VERSION)*/
    EPuts(_f_66744, 13); // DJP 

    /** il.e:254	end procedure*/
    return;
    ;
}


void _3OutputMisc(object _f_66760)
{
    object _33227 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:258		fcompress(f, {max_stack_per_call, AnyTimeProfile, AnyStatementProfile,*/
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _39max_stack_per_call_16914;
    ((intptr_t*)_2)[2] = _36AnyTimeProfile_15426;
    ((intptr_t*)_2)[3] = _36AnyStatementProfile_15427;
    ((intptr_t*)_2)[4] = _39sample_size_16915;
    ((intptr_t*)_2)[5] = _39gline_number_16820;
    RefDS(_36known_files_15405);
    ((intptr_t*)_2)[6] = _36known_files_15405;
    _33227 = MAKE_SEQ(_1);
    _37fcompress(_f_66760, _33227);
    _33227 = NOVALUE;

    /** il.e:260	end procedure*/
    return;
    ;
}


void _3copyrights()
{
    object _notices_66771 = NOVALUE;
    object _33231 = NOVALUE;
    object _33229 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:263		sequence notices = all_copyrights()*/
    _0 = _notices_66771;
    _notices_66771 = _27all_copyrights();
    DeRef(_0);

    /** il.e:264		for i = 1 to length(notices) do*/
    if (IS_SEQUENCE(_notices_66771)){
            _33229 = SEQ_PTR(_notices_66771)->length;
    }
    else {
        _33229 = 1;
    }
    {
        object _i_66775;
        _i_66775 = 1;
L1: 
        if (_i_66775 > _33229){
            goto L2; // [13] 37
        }

        /** il.e:265			printf(2, "%s\n%s\n", notices[i])*/
        _2 = (object)SEQ_PTR(_notices_66771);
        _33231 = (object)*(((s1_ptr)_2)->base + _i_66775);
        EPrintf(2, _33230, _33231);
        _33231 = NOVALUE;

        /** il.e:266		end for*/
        _i_66775 = _i_66775 + 1;
        goto L1; // [32] 20
L2: 
        ;
    }

    /** il.e:267	end procedure*/
    DeRef(_notices_66771);
    return;
    ;
}


object _3extract_options(object _cl_66781)
{
    object _argv_66782 = NOVALUE;
    object _opts_66789 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:270		sequence argv = expand_config_options( cl )*/
    RefDS(_cl_66781);
    _0 = _argv_66782;
    _argv_66782 = _51expand_config_options(_cl_66781);
    DeRef(_0);

    /** il.e:271		Argv = argv*/
    RefDS(_argv_66782);
    DeRef(_39Argv_16826);
    _39Argv_16826 = _argv_66782;

    /** il.e:272		Argc = length(Argv)*/
    if (IS_SEQUENCE(_39Argv_16826)){
            _39Argc_16825 = SEQ_PTR(_39Argv_16826)->length;
    }
    else {
        _39Argc_16825 = 1;
    }

    /** il.e:274		m:map opts = cmd_parse(OPTIONS, , argv)*/
    RefDS(_3OPTIONS_66316);
    RefDS(_21928);
    RefDS(_argv_66782);
    _0 = _opts_66789;
    _opts_66789 = _28cmd_parse(_3OPTIONS_66316, _21928, _argv_66782);
    DeRef(_0);

    /** il.e:276		handle_options_for_bind( opts )*/
    Ref(_opts_66789);
    _3handle_options_for_bind(_opts_66789);

    /** il.e:277		finalize_command_line( opts )*/
    Ref(_opts_66789);
    _51finalize_command_line(_opts_66789);

    /** il.e:279		return argv*/
    DeRefDS(_cl_66781);
    DeRef(_opts_66789);
    return _argv_66782;
    ;
}


void _3handle_options_for_bind(object _opts_66796)
{
    object _option_66797 = NOVALUE;
    object _opt_keys_66798 = NOVALUE;
    object _op_66799 = NOVALUE;
    object _file_supplied_66800 = NOVALUE;
    object _val_66806 = NOVALUE;
    object _33258 = NOVALUE;
    object _33254 = NOVALUE;
    object _33251 = NOVALUE;
    object _33248 = NOVALUE;
    object _33247 = NOVALUE;
    object _33245 = NOVALUE;
    object _33243 = NOVALUE;
    object _33242 = NOVALUE;
    object _33236 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:288		integer file_supplied = 0*/
    _file_supplied_66800 = 0;

    /** il.e:290		opt_keys = m:keys(opts)*/
    Ref(_opts_66796);
    _0 = _opt_keys_66798;
    _opt_keys_66798 = _30keys(_opts_66796, 0);
    DeRef(_0);

    /** il.e:291		op = 1*/
    _op_66799 = 1;

    /** il.e:292		while op <= length(opt_keys) do*/
L1: 
    if (IS_SEQUENCE(_opt_keys_66798)){
            _33236 = SEQ_PTR(_opt_keys_66798)->length;
    }
    else {
        _33236 = 1;
    }
    if (_op_66799 > _33236)
    goto L2; // [28] 290

    /** il.e:293			option = opt_keys[op]*/
    DeRef(_option_66797);
    _2 = (object)SEQ_PTR(_opt_keys_66798);
    _option_66797 = (object)*(((s1_ptr)_2)->base + _op_66799);
    Ref(_option_66797);

    /** il.e:294			object val = m:get(opts, option)*/
    Ref(_opts_66796);
    RefDS(_option_66797);
    _0 = _val_66806;
    _val_66806 = _30get(_opts_66796, _option_66797, 0);
    DeRef(_0);

    /** il.e:296			switch option do*/
    if( _3_66808_cases == 0 ){
        _3_66808_cases = 1;
        SEQ_PTR( _33240 )->base[1] = _33059;
        SEQ_PTR( _33240 )->base[2] = _33052;
        SEQ_PTR( _33240 )->base[3] = _33048;
        SEQ_PTR( _33240 )->base[4] = _33026;
        SEQ_PTR( _33240 )->base[5] = _33042;
        SEQ_PTR( _33240 )->base[6] = _33055;
        SEQ_PTR( _33240 )->base[7] = _25357;
        SEQ_PTR( _33240 )->base[8] = _25410;
        SEQ_PTR( _33240 )->base[9] = _25361;
        SEQ_PTR( _33240 )->base[10] = _25396;
        SEQ_PTR( _33240 )->base[11] = _28EXTRAS_14176;
        SEQ_PTR( _33240 )->base[12] = _33034;
        SEQ_PTR( _33240 )->base[13] = _25348;
    }
    _1 = find(_option_66797, _33240);
    switch ( _1 ){ 

        /** il.e:297				case "quiet" then*/
        case 1:

        /** il.e:298					quiet = TRUE*/
        _3quiet_66384 = _9TRUE_444;
        goto L3; // [68] 277

        /** il.e:300				case "list" then*/
        case 2:

        /** il.e:301					list = TRUE*/
        _3list_66383 = _9TRUE_444;
        goto L3; // [83] 277

        /** il.e:303				case "icon" then*/
        case 3:

        /** il.e:304					icon = val*/
        Ref(_val_66806);
        DeRef(_3icon_66389);
        _3icon_66389 = _val_66806;
        goto L3; // [96] 277

        /** il.e:306				case "con" then*/
        case 4:

        /** il.e:307					con = TRUE*/
        _39con_16452 = _9TRUE_444;
        goto L3; // [111] 277

        /** il.e:309				case "full_debug" then*/
        case 5:

        /** il.e:310					full_debug = TRUE*/
        _3full_debug_66385 = _9TRUE_444;
        goto L3; // [126] 277

        /** il.e:312				case "out" then*/
        case 6:

        /** il.e:313					user_out = val*/
        Ref(_val_66806);
        DeRef(_3user_out_66388);
        _3user_out_66388 = _val_66806;
        goto L3; // [139] 277

        /** il.e:315				case "i"  then*/
        case 7:

        /** il.e:316					for j = 1 to length(val) do*/
        if (IS_SEQUENCE(_val_66806)){
                _33242 = SEQ_PTR(_val_66806)->length;
        }
        else {
            _33242 = 1;
        }
        {
            object _j_66823;
            _j_66823 = 1;
L4: 
            if (_j_66823 > _33242){
                goto L5; // [150] 173
            }

            /** il.e:317						add_include_directory( val[j] )*/
            _2 = (object)SEQ_PTR(_val_66806);
            _33243 = (object)*(((s1_ptr)_2)->base + _j_66823);
            Ref(_33243);
            _50add_include_directory(_33243);
            _33243 = NOVALUE;

            /** il.e:318					end for*/
            _j_66823 = _j_66823 + 1;
            goto L4; // [168] 157
L5: 
            ;
        }
        goto L3; // [173] 277

        /** il.e:320				case "copyright" then*/
        case 8:

        /** il.e:321					copyrights()*/
        _3copyrights();
        goto L3; // [183] 277

        /** il.e:323				case "d" then*/
        case 9:

        /** il.e:324					OpDefines &= val*/
        if (IS_SEQUENCE(_39OpDefines_16888) && IS_ATOM(_val_66806)) {
            Ref(_val_66806);
            Append(&_39OpDefines_16888, _39OpDefines_16888, _val_66806);
        }
        else if (IS_ATOM(_39OpDefines_16888) && IS_SEQUENCE(_val_66806)) {
        }
        else {
            Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _val_66806);
        }
        goto L3; // [199] 277

        /** il.e:326				case "batch" then*/
        case 10:

        /** il.e:327					batch_job = 1*/
        _39batch_job_16828 = 1;
        goto L3; // [212] 277

        /** il.e:329				case cmdline:EXTRAS then*/
        case 11:

        /** il.e:330					if length(val) != 0 then*/
        if (IS_SEQUENCE(_val_66806)){
                _33245 = SEQ_PTR(_val_66806)->length;
        }
        else {
            _33245 = 1;
        }
        if (_33245 == 0)
        goto L3; // [223] 277

        /** il.e:331						file_supplied = 1*/
        _file_supplied_66800 = 1;
        goto L3; // [233] 277

        /** il.e:334				case "eub" then*/
        case 12:

        /** il.e:335					eub_path = val*/
        Ref(_val_66806);
        DeRef(_3eub_path_66395);
        _3eub_path_66395 = _val_66806;
        goto L3; // [244] 277

        /** il.e:337				case "eudir" then*/
        case 13:

        /** il.e:338					set_eudir( val )*/
        Ref(_val_66806);
        _36set_eudir(_val_66806);
        goto L3; // [255] 277

        /** il.e:340				case else*/
        case 0:

        /** il.e:341					fatal(GetMsgText(314, , {option}))*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_option_66797);
        ((intptr_t*)_2)[1] = _option_66797;
        _33247 = MAKE_SEQ(_1);
        _33248 = _44GetMsgText(314, 1, _33247);
        _33247 = NOVALUE;
        _3fatal(_33248);
        _33248 = NOVALUE;
    ;}L3: 

    /** il.e:344			op += 1*/
    _op_66799 = _op_66799 + 1;
    DeRef(_val_66806);
    _val_66806 = NOVALUE;

    /** il.e:345		end while*/
    goto L1; // [287] 25
L2: 

    /** il.e:347		if file_supplied = 0 then*/
    if (_file_supplied_66800 != 0)
    goto L6; // [292] 308

    /** il.e:348			fatal(GetMsgText(313))*/
    RefDS(_21928);
    _33251 = _44GetMsgText(313, 1, _21928);
    _3fatal(_33251);
    _33251 = NOVALUE;
L6: 

    /** il.e:351		ifdef WINDOWS then*/

    /** il.e:357			OpDefines &= { "CONSOLE" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_33253);
    ((intptr_t*)_2)[1] = _33253;
    _33254 = MAKE_SEQ(_1);
    Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _33254);
    DeRefDS(_33254);
    _33254 = NOVALUE;

    /** il.e:360		ifdef SHROUDER then*/

    /** il.e:365		OpDefines &= { "EUB" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_33257);
    ((intptr_t*)_2)[1] = _33257;
    _33258 = MAKE_SEQ(_1);
    Concat((object_ptr)&_39OpDefines_16888, _39OpDefines_16888, _33258);
    DeRefDS(_33258);
    _33258 = NOVALUE;

    /** il.e:367	end procedure*/
    DeRef(_opts_66796);
    DeRef(_option_66797);
    DeRef(_opt_keys_66798);
    return;
    ;
}


object _3base200(object _x_66862)
{
    object _digits_66863 = NOVALUE;
    object _33263 = NOVALUE;
    object _33260 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:375		digits = {}*/
    RefDS(_21928);
    DeRef(_digits_66863);
    _digits_66863 = _21928;

    /** il.e:376		for i = 1 to 4 do*/
    {
        object _i_66865;
        _i_66865 = 1;
L1: 
        if (_i_66865 > 4){
            goto L2; // [10] 40
        }

        /** il.e:377			digits = append(digits, remainder(x, 200))*/
        if (IS_ATOM_INT(_x_66862)) {
            _33260 = (_x_66862 % 200);
        }
        else {
            temp_d.dbl = (eudouble)200;
            _33260 = Dremainder(DBL_PTR(_x_66862), &temp_d);
        }
        Ref(_33260);
        Append(&_digits_66863, _digits_66863, _33260);
        DeRef(_33260);
        _33260 = NOVALUE;

        /** il.e:378			x = floor(x/200)*/
        _0 = _x_66862;
        if (IS_ATOM_INT(_x_66862)) {
            if (200 > 0 && _x_66862 >= 0) {
                _x_66862 = _x_66862 / 200;
            }
            else {
                temp_dbl = EUFLOOR((eudouble)_x_66862 / (eudouble)200);
                if (_x_66862 != MININT)
                _x_66862 = (object)temp_dbl;
                else
                _x_66862 = NewDouble(temp_dbl);
            }
        }
        else {
            _2 = binary_op(DIVIDE, _x_66862, 200);
            _x_66862 = unary_op(FLOOR, _2);
            DeRef(_2);
        }
        DeRef(_0);

        /** il.e:379		end for*/
        _i_66865 = _i_66865 + 1;
        goto L1; // [35] 17
L2: 
        ;
    }

    /** il.e:380		return digits+32*/
    _33263 = binary_op(PLUS, _digits_66863, 32);
    DeRef(_x_66862);
    DeRefDS(_digits_66863);
    return _33263;
    ;
}


void _3store_checksum(object _backend_name_66872)
{
    object _c_66873 = NOVALUE;
    object _prev_c_66874 = NOVALUE;
    object _bound_file_66875 = NOVALUE;
    object _size_66876 = NOVALUE;
    object _checksum_66877 = NOVALUE;
    object _33284 = NOVALUE;
    object _33281 = NOVALUE;
    object _33280 = NOVALUE;
    object _33279 = NOVALUE;
    object _33276 = NOVALUE;
    object _33268 = NOVALUE;
    object _33267 = NOVALUE;
    object _33266 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:389		bound_file = open(backend_name, "ub") -- update mode*/
    _bound_file_66875 = EOpen(_backend_name_66872, _33264, 0);

    /** il.e:391		if seek(bound_file, check_place+8) then*/
    _33266 = _3check_place_66859 + 8;
    if ((object)((uintptr_t)_33266 + (uintptr_t)HIGH_BITS) >= 0){
        _33266 = NewDouble((eudouble)_33266);
    }
    _33267 = _19seek(_bound_file_66875, _33266);
    _33266 = NOVALUE;
    if (_33267 == 0) {
        DeRef(_33267);
        _33267 = NOVALUE;
        goto L1; // [23] 38
    }
    else {
        if (!IS_ATOM_INT(_33267) && DBL_PTR(_33267)->dbl == 0.0){
            DeRef(_33267);
            _33267 = NOVALUE;
            goto L1; // [23] 38
        }
        DeRef(_33267);
        _33267 = NOVALUE;
    }
    DeRef(_33267);
    _33267 = NOVALUE;

    /** il.e:392			fatal(GetMsgText(315))*/
    RefDS(_21928);
    _33268 = _44GetMsgText(315, 1, _21928);
    _3fatal(_33268);
    _33268 = NOVALUE;
L1: 

    /** il.e:395		checksum = 11352 -- magic starting point*/
    DeRef(_checksum_66877);
    _checksum_66877 = 11352;

    /** il.e:396		size = 0*/
    DeRef(_size_66876);
    _size_66876 = 0;

    /** il.e:397		prev_c = -1*/
    _prev_c_66874 = -1;

    /** il.e:398		while TRUE do*/
L2: 
    if (_9TRUE_444 == 0)
    {
        goto L3; // [60] 128
    }
    else{
    }

    /** il.e:399			c = getc(bound_file)*/
    if (_bound_file_66875 != last_r_file_no) {
        last_r_file_ptr = which_file(_bound_file_66875, EF_READ);
        last_r_file_no = _bound_file_66875;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_66873 = getc((FILE*)xstdin);
        }
        else{
            _c_66873 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_66873 = getc(last_r_file_ptr);
    }

    /** il.e:400			if c = -1 then*/
    if (_c_66873 != -1)
    goto L4; // [70] 79

    /** il.e:401				exit*/
    goto L3; // [76] 128
L4: 

    /** il.e:403			if c < 100 then*/
    if (_c_66873 >= 100)
    goto L5; // [81] 101

    /** il.e:404				if c != 'A' then*/
    if (_c_66873 == 65)
    goto L6; // [87] 112

    /** il.e:405					checksum += c*/
    _0 = _checksum_66877;
    if (IS_ATOM_INT(_checksum_66877)) {
        _checksum_66877 = _checksum_66877 + _c_66873;
        if ((object)((uintptr_t)_checksum_66877 + (uintptr_t)HIGH_BITS) >= 0){
            _checksum_66877 = NewDouble((eudouble)_checksum_66877);
        }
    }
    else {
        _checksum_66877 = NewDouble(DBL_PTR(_checksum_66877)->dbl + (eudouble)_c_66873);
    }
    DeRef(_0);
    goto L6; // [98] 112
L5: 

    /** il.e:408				checksum += c*2*/
    _33276 = _c_66873 + _c_66873;
    if ((object)((uintptr_t)_33276 + (uintptr_t)HIGH_BITS) >= 0){
        _33276 = NewDouble((eudouble)_33276);
    }
    _0 = _checksum_66877;
    if (IS_ATOM_INT(_checksum_66877) && IS_ATOM_INT(_33276)) {
        _checksum_66877 = _checksum_66877 + _33276;
        if ((object)((uintptr_t)_checksum_66877 + (uintptr_t)HIGH_BITS) >= 0){
            _checksum_66877 = NewDouble((eudouble)_checksum_66877);
        }
    }
    else {
        if (IS_ATOM_INT(_checksum_66877)) {
            _checksum_66877 = NewDouble((eudouble)_checksum_66877 + DBL_PTR(_33276)->dbl);
        }
        else {
            if (IS_ATOM_INT(_33276)) {
                _checksum_66877 = NewDouble(DBL_PTR(_checksum_66877)->dbl + (eudouble)_33276);
            }
            else
            _checksum_66877 = NewDouble(DBL_PTR(_checksum_66877)->dbl + DBL_PTR(_33276)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_33276);
    _33276 = NOVALUE;
L6: 

    /** il.e:410			size += 1*/
    _0 = _size_66876;
    if (IS_ATOM_INT(_size_66876)) {
        _size_66876 = _size_66876 + 1;
        if (_size_66876 > MAXINT){
            _size_66876 = NewDouble((eudouble)_size_66876);
        }
    }
    else
    _size_66876 = binary_op(PLUS, 1, _size_66876);
    DeRef(_0);

    /** il.e:411			prev_c = c*/
    _prev_c_66874 = _c_66873;

    /** il.e:412		end while*/
    goto L2; // [125] 58
L3: 

    /** il.e:414		if seek(bound_file, check_place) then*/
    _33279 = _19seek(_bound_file_66875, _3check_place_66859);
    if (_33279 == 0) {
        DeRef(_33279);
        _33279 = NOVALUE;
        goto L7; // [137] 152
    }
    else {
        if (!IS_ATOM_INT(_33279) && DBL_PTR(_33279)->dbl == 0.0){
            DeRef(_33279);
            _33279 = NOVALUE;
            goto L7; // [137] 152
        }
        DeRef(_33279);
        _33279 = NOVALUE;
    }
    DeRef(_33279);
    _33279 = NOVALUE;

    /** il.e:415			fatal(GetMsgText(316))*/
    RefDS(_21928);
    _33280 = _44GetMsgText(316, 1, _21928);
    _3fatal(_33280);
    _33280 = NOVALUE;
L7: 

    /** il.e:418		puts(bound_file, base200(size))*/
    Ref(_size_66876);
    _33281 = _3base200(_size_66876);
    EPuts(_bound_file_66875, _33281); // DJP 
    DeRef(_33281);
    _33281 = NOVALUE;

    /** il.e:420		checksum = remainder(checksum, 1000000000)*/
    _0 = _checksum_66877;
    if (IS_ATOM_INT(_checksum_66877)) {
        _checksum_66877 = (_checksum_66877 % 1000000000);
    }
    else {
        temp_d.dbl = (eudouble)1000000000;
        _checksum_66877 = Dremainder(DBL_PTR(_checksum_66877), &temp_d);
    }
    DeRef(_0);

    /** il.e:421		puts(bound_file, base200(checksum))*/
    Ref(_checksum_66877);
    _33284 = _3base200(_checksum_66877);
    EPuts(_bound_file_66875, _33284); // DJP 
    DeRef(_33284);
    _33284 = NOVALUE;

    /** il.e:422	end procedure*/
    DeRefDS(_backend_name_66872);
    DeRef(_size_66876);
    DeRef(_checksum_66877);
    return;
    ;
}


void _3OutputIL()
{
    object _out_66913 = NOVALUE;
    object _be_66914 = NOVALUE;
    object _m_66915 = NOVALUE;
    object _c_66916 = NOVALUE;
    object _ic_66917 = NOVALUE;
    object _size_66918 = NOVALUE;
    object _out_name_66919 = NOVALUE;
    object _last6_66920 = NOVALUE;
    object _backend_name_66921 = NOVALUE;
    object _source_dir_66922 = NOVALUE;
    object _eu_dir_66923 = NOVALUE;
    object _ondisk_name_66986 = NOVALUE;
    object _filename_67033 = NOVALUE;
    object _33351 = NOVALUE;
    object _33349 = NOVALUE;
    object _33347 = NOVALUE;
    object _33345 = NOVALUE;
    object _33343 = NOVALUE;
    object _33342 = NOVALUE;
    object _33341 = NOVALUE;
    object _33339 = NOVALUE;
    object _33332 = NOVALUE;
    object _33331 = NOVALUE;
    object _33326 = NOVALUE;
    object _33324 = NOVALUE;
    object _33323 = NOVALUE;
    object _33314 = NOVALUE;
    object _33310 = NOVALUE;
    object _33309 = NOVALUE;
    object _33303 = NOVALUE;
    object _33301 = NOVALUE;
    object _33300 = NOVALUE;
    object _33292 = NOVALUE;
    object _33289 = NOVALUE;
    object _33285 = NOVALUE;
    object _0, _1, _2;
    

    /** il.e:429		if length(user_out) then*/
    if (IS_SEQUENCE(_3user_out_66388)){
            _33285 = SEQ_PTR(_3user_out_66388)->length;
    }
    else {
        _33285 = 1;
    }
    if (_33285 == 0)
    {
        _33285 = NOVALUE;
        goto L1; // [8] 23
    }
    else{
        _33285 = NOVALUE;
    }

    /** il.e:431			out_name = user_out*/
    RefDS(_3user_out_66388);
    DeRef(_out_name_66919);
    _out_name_66919 = _3user_out_66388;
    goto L2; // [20] 110
L1: 

    /** il.e:434			out_name = known_files[1]*/
    DeRef(_out_name_66919);
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _out_name_66919 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_out_name_66919);

    /** il.e:435			m = length(out_name)*/
    if (IS_SEQUENCE(_out_name_66919)){
            _m_66915 = SEQ_PTR(_out_name_66919)->length;
    }
    else {
        _m_66915 = 1;
    }

    /** il.e:436			while m > 0 do*/
L3: 
    if (_m_66915 <= 0)
    goto L4; // [43] 73

    /** il.e:437				if out_name[m] = '.' then*/
    _2 = (object)SEQ_PTR(_out_name_66919);
    _33289 = (object)*(((s1_ptr)_2)->base + _m_66915);
    if (binary_op_a(NOTEQ, _33289, 46)){
        _33289 = NOVALUE;
        goto L5; // [53] 62
    }
    _33289 = NOVALUE;

    /** il.e:438					exit*/
    goto L4; // [59] 73
L5: 

    /** il.e:440				m -= 1*/
    _m_66915 = _m_66915 - 1;

    /** il.e:441			end while*/
    goto L3; // [70] 43
L4: 

    /** il.e:442			if m then*/
    if (_m_66915 == 0)
    {
        goto L6; // [75] 90
    }
    else{
    }

    /** il.e:443				out_name= out_name[1..m-1]*/
    _33292 = _m_66915 - 1;
    rhs_slice_target = (object_ptr)&_out_name_66919;
    RHS_Slice(_out_name_66919, 1, _33292);
L6: 

    /** il.e:446			if shroud_only then*/
    if (_39shroud_only_16813 == 0)
    {
        goto L7; // [94] 106
    }
    else{
    }

    /** il.e:447				out_name &= ".il"*/
    Concat((object_ptr)&_out_name_66919, _out_name_66919, _33294);
    goto L8; // [103] 109
L7: 

    /** il.e:449				ifdef not UNIX then*/
L8: 
L2: 

    /** il.e:455		out = open(out_name, "wb")*/
    _out_66913 = EOpen(_out_name_66919, _33297, 0);

    /** il.e:456		if out = -1 then*/
    if (_out_66913 != -1)
    goto L9; // [121] 141

    /** il.e:457			fatal(GetMsgText(301, , {out_name}))*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_out_name_66919);
    ((intptr_t*)_2)[1] = _out_name_66919;
    _33300 = MAKE_SEQ(_1);
    _33301 = _44GetMsgText(301, 1, _33300);
    _33300 = NOVALUE;
    _3fatal(_33301);
    _33301 = NOVALUE;
L9: 

    /** il.e:460		if not shroud_only then*/
    if (_39shroud_only_16813 != 0)
    goto LA; // [145] 439

    /** il.e:463			if sequence( eub_path ) then*/
    _33303 = IS_SEQUENCE(_3eub_path_66395);
    if (_33303 == 0)
    {
        _33303 = NOVALUE;
        goto LB; // [155] 177
    }
    else{
        _33303 = NOVALUE;
    }

    /** il.e:464				backend_name = eub_path*/
    Ref(_3eub_path_66395);
    DeRef(_backend_name_66921);
    _backend_name_66921 = _3eub_path_66395;

    /** il.e:465				be = open( backend_name, "rb" )*/
    _be_66914 = EOpen(_backend_name_66921, _33304, 0);
    goto LC; // [174] 341
LB: 

    /** il.e:467				eu_dir = get_eudir()*/
    _0 = _eu_dir_66923;
    _eu_dir_66923 = _36get_eudir();
    DeRef(_0);

    /** il.e:469				source_dir = command_line()*/
    DeRef(_source_dir_66922);
    _source_dir_66922 = Command_Line();

    /** il.e:470				source_dir = source_dir[2]*/
    _0 = _source_dir_66922;
    _2 = (object)SEQ_PTR(_source_dir_66922);
    _source_dir_66922 = (object)*(((s1_ptr)_2)->base + 2);
    RefDS(_source_dir_66922);
    DeRefDS(_0);

    /** il.e:471				for j = length( source_dir ) to 1 by -1 do*/
    if (IS_SEQUENCE(_source_dir_66922)){
            _33309 = SEQ_PTR(_source_dir_66922)->length;
    }
    else {
        _33309 = 1;
    }
    {
        object _j_66965;
        _j_66965 = _33309;
LD: 
        if (_j_66965 < 1){
            goto LE; // [199] 258
        }

        /** il.e:472					if source_dir[j] = SLASH then*/
        _2 = (object)SEQ_PTR(_source_dir_66922);
        _33310 = (object)*(((s1_ptr)_2)->base + _j_66965);
        if (binary_op_a(NOTEQ, _33310, 47)){
            _33310 = NOVALUE;
            goto LF; // [214] 232
        }
        _33310 = NOVALUE;

        /** il.e:473						source_dir = source_dir[1..j]*/
        rhs_slice_target = (object_ptr)&_source_dir_66922;
        RHS_Slice(_source_dir_66922, 1, _j_66965);

        /** il.e:474						exit*/
        goto LE; // [227] 258
        goto L10; // [229] 251
LF: 

        /** il.e:475					elsif j = 1 then*/
        if (_j_66965 != 1)
        goto L11; // [234] 250

        /** il.e:476						source_dir = current_dir() & SLASH*/
        _33314 = _16current_dir();
        if (IS_SEQUENCE(_33314) && IS_ATOM(47)) {
            Append(&_source_dir_66922, _33314, 47);
        }
        else if (IS_ATOM(_33314) && IS_SEQUENCE(47)) {
        }
        else {
            Concat((object_ptr)&_source_dir_66922, _33314, 47);
            DeRef(_33314);
            _33314 = NOVALUE;
        }
        DeRef(_33314);
        _33314 = NOVALUE;
L11: 
L10: 

        /** il.e:478				end for*/
        _j_66965 = _j_66965 + -1;
        goto LD; // [253] 206
LE: 
        ;
    }

    /** il.e:480				be = -1*/
    _be_66914 = -1;

    /** il.e:481				ifdef WINDOWS then*/

    /** il.e:488				ifdef UNIX then*/

    /** il.e:489						backend_name = "eub"*/
    RefDS(_33034);
    DeRef(_backend_name_66921);
    _backend_name_66921 = _33034;

    /** il.e:491						be = open( "/usr/bin/eub", "r" )*/
    _be_66914 = EOpen(_33318, _25841, 0);

    /** il.e:492						if be = -1 then*/
    if (_be_66914 != -1)
    goto L12; // [283] 295

    /** il.e:494							be = open( "/usr/local/bin/eub", "r" )*/
    _be_66914 = EOpen(_33321, _25841, 0);
L12: 

    /** il.e:498				sequence ondisk_name = locate_file( backend_name,*/
    {
        object concat_list[3];

        concat_list[0] = _33225;
        concat_list[1] = 47;
        concat_list[2] = _eu_dir_66923;
        Concat_N((object_ptr)&_33323, concat_list, 3);
    }
    RefDS(_source_dir_66922);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _33323;
    ((intptr_t *)_2)[2] = _source_dir_66922;
    _33324 = MAKE_SEQ(_1);
    _33323 = NOVALUE;
    RefDS(_backend_name_66921);
    RefDS(_21928);
    _0 = _ondisk_name_66986;
    _ondisk_name_66986 = _16locate_file(_backend_name_66921, _33324, _21928);
    DeRef(_0);
    _33324 = NOVALUE;

    /** il.e:501				ifdef UNIX then*/

    /** il.e:502					if not equal( backend_name,  ondisk_name) then*/
    if (_backend_name_66921 == _ondisk_name_66986)
    _33326 = 1;
    else if (IS_ATOM_INT(_backend_name_66921) && IS_ATOM_INT(_ondisk_name_66986))
    _33326 = 0;
    else
    _33326 = (compare(_backend_name_66921, _ondisk_name_66986) == 0);
    if (_33326 != 0)
    goto L13; // [327] 338
    _33326 = NOVALUE;

    /** il.e:503						backend_name = ondisk_name*/
    RefDS(_ondisk_name_66986);
    DeRefDS(_backend_name_66921);
    _backend_name_66921 = _ondisk_name_66986;
L13: 
    DeRef(_ondisk_name_66986);
    _ondisk_name_66986 = NOVALUE;
LC: 

    /** il.e:513			if be = -1 then*/
    if (_be_66914 != -1)
    goto L14; // [345] 359

    /** il.e:514				be = open(backend_name, "rb")*/
    _be_66914 = EOpen(_backend_name_66921, _33304, 0);
L14: 

    /** il.e:516			if be = -1 then*/
    if (_be_66914 != -1)
    goto L15; // [361] 383

    /** il.e:517				fatal(GetMsgText(301, , {backend_name}))*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_backend_name_66921);
    ((intptr_t*)_2)[1] = _backend_name_66921;
    _33331 = MAKE_SEQ(_1);
    _33332 = _44GetMsgText(301, 1, _33331);
    _33331 = NOVALUE;
    _3fatal(_33332);
    _33332 = NOVALUE;
L15: 

    /** il.e:521			size = 0*/
    _size_66918 = 0;

    /** il.e:522			ifdef UNIX then*/

    /** il.e:523				while 1 do*/
L16: 

    /** il.e:524					c = getc(be)*/
    if (_be_66914 != last_r_file_no) {
        last_r_file_ptr = which_file(_be_66914, EF_READ);
        last_r_file_no = _be_66914;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_66916 = getc((FILE*)xstdin);
        }
        else{
            _c_66916 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_66916 = getc(last_r_file_ptr);
    }

    /** il.e:525					if c = -1 then*/
    if (_c_66916 != -1)
    goto L17; // [402] 411

    /** il.e:526						exit*/
    goto L18; // [408] 421
L17: 

    /** il.e:528					puts(out, c)*/
    EPuts(_out_66913, _c_66916); // DJP 

    /** il.e:529				end while*/
    goto L16; // [418] 395
L18: 

    /** il.e:532			ifdef WINDOWS then*/

    /** il.e:582			close(be)*/
    EClose(_be_66914);

    /** il.e:585			puts(out, '\n' & IL_START)*/
    Prepend(&_33339, _37IL_START_15513, 10);
    EPuts(_out_66913, _33339); // DJP 
    DeRefDS(_33339);
    _33339 = NOVALUE;
LA: 

    /** il.e:588		OutputHeader(out)*/
    _3OutputHeader(_out_66913);

    /** il.e:590		check_place = where(out)*/
    _0 = _19where(_out_66913);
    _3check_place_66859 = _0;
    if (!IS_ATOM_INT(_3check_place_66859)) {
        _1 = (object)(DBL_PTR(_3check_place_66859)->dbl);
        DeRefDS(_3check_place_66859);
        _3check_place_66859 = _1;
    }

    /** il.e:592		puts(out, {0,0,0,0})*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    _33341 = MAKE_SEQ(_1);
    EPuts(_out_66913, _33341); // DJP 
    DeRefDS(_33341);
    _33341 = NOVALUE;

    /** il.e:594		puts(out, {0,0,0,0})*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    _33342 = MAKE_SEQ(_1);
    EPuts(_out_66913, _33342); // DJP 
    DeRefDS(_33342);
    _33342 = NOVALUE;

    /** il.e:596		init_compress()*/
    _37init_compress();

    /** il.e:597		OutputMisc(out)*/
    _3OutputMisc(_out_66913);

    /** il.e:598		OutputSymTab(out)*/
    _3OutputSymTab(_out_66913);

    /** il.e:599		OutputSlist(out)*/
    _3OutputSlist(_out_66913);

    /** il.e:600		fcompress( out, file_include )*/
    RefDS(_36file_include_15409);
    _37fcompress(_out_66913, _36file_include_15409);

    /** il.e:601		fcompress( out, get_switches() )*/
    _33343 = _51get_switches();
    _37fcompress(_out_66913, _33343);
    _33343 = NOVALUE;

    /** il.e:602		fcompress( out, include_matrix )*/
    RefDS(_36include_matrix_15411);
    _37fcompress(_out_66913, _36include_matrix_15411);

    /** il.e:603		close(out)*/
    EClose(_out_66913);

    /** il.e:605		store_checksum(out_name)*/
    RefDS(_out_name_66919);
    _3store_checksum(_out_name_66919);

    /** il.e:607		if not quiet then*/
    if (_3quiet_66384 != 0)
    goto L19; // [533] 618

    /** il.e:608			ShowMsg(1, 248, {del_routines, del_vars})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _3del_routines_66386;
    ((intptr_t *)_2)[2] = _3del_vars_66387;
    _33345 = MAKE_SEQ(_1);
    _44ShowMsg(1, 248, _33345, 1);
    _33345 = NOVALUE;

    /** il.e:609			ifdef UNIX then*/

    /** il.e:610				system("chmod +x " & out_name, 2)*/
    Concat((object_ptr)&_33347, _33346, _out_name_66919);
    system_call(_33347, 2);
    DeRefDS(_33347);
    _33347 = NOVALUE;

    /** il.e:613			if shroud_only then*/
    if (_39shroud_only_16813 == 0)
    {
        goto L1A; // [567] 596
    }
    else{
    }

    /** il.e:614				sequence filename = "eub"*/
    RefDS(_33034);
    DeRefi(_filename_67033);
    _filename_67033 = _33034;

    /** il.e:615				ifdef WINDOWS then*/

    /** il.e:622				ShowMsg(1, 246, {filename, out_name})*/
    RefDS(_out_name_66919);
    RefDS(_filename_67033);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _filename_67033;
    ((intptr_t *)_2)[2] = _out_name_66919;
    _33349 = MAKE_SEQ(_1);
    _44ShowMsg(1, 246, _33349, 1);
    _33349 = NOVALUE;
    DeRefDSi(_filename_67033);
    _filename_67033 = NOVALUE;
    goto L1B; // [593] 617
L1A: 

    /** il.e:624				ifdef UNIX then*/

    /** il.e:625					out_name = "./" & out_name*/
    Concat((object_ptr)&_out_name_66919, _25930, _out_name_66919);

    /** il.e:628				ShowMsg(1, 247, {out_name})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_out_name_66919);
    ((intptr_t*)_2)[1] = _out_name_66919;
    _33351 = MAKE_SEQ(_1);
    _44ShowMsg(1, 247, _33351, 1);
    _33351 = NOVALUE;
L1B: 
L19: 

    /** il.e:631	end procedure*/
    DeRef(_out_name_66919);
    DeRef(_backend_name_66921);
    DeRef(_source_dir_66922);
    DeRef(_eu_dir_66923);
    DeRef(_33292);
    _33292 = NOVALUE;
    return;
    ;
}



// 0x9ADEB7ED
