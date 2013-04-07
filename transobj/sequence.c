// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _23reverse(object _target_4587, object _pFrom_4588, object _pTo_4589)
{
    object _uppr_4590 = NOVALUE;
    object _n_4591 = NOVALUE;
    object _lLimit_4592 = NOVALUE;
    object _t_4593 = NOVALUE;
// skipping _2291  name type: 0
    object _2290 = NOVALUE; // 4615 2290
    object _2289 = NOVALUE; // 4614 2289
    object _2288 = NOVALUE; // 4613 2288
// skipping _2287  name type: 0
    object _2286 = NOVALUE; // 4609 2286
    object _2285 = NOVALUE; // 4608 2285
// skipping _2284  name type: 0
    object _2283 = NOVALUE; // 4605 2283
// skipping _2282  name type: 0
    object _2281 = NOVALUE; // 4603 2281
// skipping _2280  name type: 0
// skipping _2279  name type: 0
// skipping _2278  name type: 0
// skipping _2277  name type: 0
// skipping _2276  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reverse pc: 1 op: INTEGER_CHECK (96)
    // SubProg reverse pc: 3 op: INTEGER_CHECK (96)
    // SubProg reverse pc: 5 op: STARTLINE (58)

    /** sequence.e:549		n = length(target)*/
    // SubProg reverse pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_target_4587)){
            _n_4591 = SEQ_PTR(_target_4587)->length;
    }
    else {
        _n_4591 = 1;
    }
    // SubProg reverse pc: 10 op: STARTLINE (58)

    /** sequence.e:550		if n < 2 then*/
    // SubProg reverse pc: 12 op: LESS_IFW_I (119)
    if (_n_4591 >= 2)
    goto L1; // [12] 23
    // SubProg reverse pc: 16 op: STARTLINE (58)

    /** sequence.e:551			return target*/
    // SubProg reverse pc: 18 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var pFrom_4588

// block var pTo_4589

// block var uppr_4590

// block var n_4591

// block var lLimit_4592

// block var t_4593
    DeRef(_t_4593);
    return _target_4587;
    // SubProg reverse pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 4585 op: 159
    // SubProg reverse pc: 23 op: STARTLINE (58)

    /** sequence.e:553		if pFrom < 1 then*/
    // SubProg reverse pc: 25 op: LESS_IFW_I (119)
    if (_pFrom_4588 >= 1)
    goto L2; // [25] 35
    // SubProg reverse pc: 29 op: STARTLINE (58)

    /** sequence.e:554			pFrom = 1*/
    // SubProg reverse pc: 31 op: ASSIGN_I (113)
    _pFrom_4588 = 1;
    // SubProg reverse pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 4585 op: 159
    // SubProg reverse pc: 35 op: STARTLINE (58)

    /** sequence.e:556		if pTo < 1 then*/
    // SubProg reverse pc: 37 op: LESS_IFW_I (119)
    if (_pTo_4589 >= 1)
    goto L3; // [37] 48
    // SubProg reverse pc: 41 op: STARTLINE (58)

    /** sequence.e:557			pTo = n + pTo*/
    // SubProg reverse pc: 43 op: PLUS_I (115)
    _pTo_4589 = _n_4591 + _pTo_4589;
    // SubProg reverse pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 4585 op: 159
    // SubProg reverse pc: 48 op: STARTLINE (58)

    /** sequence.e:559		if pTo < pFrom or pFrom >= n then*/
    // SubProg reverse pc: 50 op: LESS (1)
    _2281 = (_pTo_4589 < _pFrom_4588);
    // SubProg reverse pc: 54 op: SC1_OR_IF (147)
    if (_2281 != 0) {
        goto L4; // [54] 67
    }
    // SubProg reverse pc: 58 op: GREATEREQ (2)
    _2283 = (_pFrom_4588 >= _n_4591);
    // SubProg reverse pc: 62 op: NOP1 (159)
    // SubProg reverse pc: 63 op: IF (20)
    if (_2283 == 0)
    {
        DeRef(_2283);
        _2283 = NOVALUE;
        goto L5; // [63] 74
    }
    else{
        DeRef(_2283);
        _2283 = NOVALUE;
    }
    // SubProg reverse pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 4585 op: 159
    // SubProg reverse pc: 67 op: STARTLINE (58)

    /** sequence.e:560			return target*/
    // SubProg reverse pc: 69 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var pFrom_4588

// block var pTo_4589

// block var uppr_4590

// block var n_4591

// block var lLimit_4592

// block var t_4593
    DeRef(_t_4593);
    DeRef(_2281);
    _2281 = NOVALUE;
    return _target_4587;
    // SubProg reverse pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 4585 op: 159
    // SubProg reverse pc: 74 op: STARTLINE (58)

    /** sequence.e:562		if pTo > n then*/
    // SubProg reverse pc: 76 op: GREATER_IFW_I (124)
    if (_pTo_4589 <= _n_4591)
    goto L6; // [76] 86
    // SubProg reverse pc: 80 op: STARTLINE (58)

    /** sequence.e:563			pTo = n*/
    // SubProg reverse pc: 82 op: ASSIGN_I (113)
    _pTo_4589 = _n_4591;
    // SubProg reverse pc: 85 op: NOP1 (159)
L6: // addr: 86 pc: 85 sub: 4585 op: 159
    // SubProg reverse pc: 86 op: STARTLINE (58)

    /** sequence.e:566		lLimit = floor((pFrom+pTo-1)/2)*/
    // SubProg reverse pc: 88 op: PLUS (11)
    _2285 = _pFrom_4588 + _pTo_4589;
    if ((object)((uintptr_t)_2285 + (uintptr_t)HIGH_BITS) >= 0){
        _2285 = NewDouble((eudouble)_2285);
    }
    // SubProg reverse pc: 92 op: MINUS (10)
    if (IS_ATOM_INT(_2285)) {
        _2286 = _2285 - 1;
        if ((object)((uintptr_t)_2286 +(uintptr_t) HIGH_BITS) >= 0){
            _2286 = NewDouble((eudouble)_2286);
        }
    }
    else {
        _2286 = NewDouble(DBL_PTR(_2285)->dbl - (eudouble)1);
    }
    DeRef(_2285);
    _2285 = NOVALUE;
    // SubProg reverse pc: 96 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_2286)) {
        _lLimit_4592 = _2286 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _2286, 2);
        _lLimit_4592 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_2286);
    _2286 = NOVALUE;
    // SubProg reverse pc: 100 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_lLimit_4592)) {
        _1 = (object)(DBL_PTR(_lLimit_4592)->dbl);
        DeRefDS(_lLimit_4592);
        _lLimit_4592 = _1;
    }
    // SubProg reverse pc: 102 op: STARTLINE (58)

    /** sequence.e:567		t = target*/
    // SubProg reverse pc: 104 op: ASSIGN (18)
    Ref(_target_4587);
    DeRef(_t_4593);
    _t_4593 = _target_4587;
    // SubProg reverse pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg reverse pc: 109 op: STARTLINE (58)

    /** sequence.e:568		uppr = pTo*/
    // SubProg reverse pc: 111 op: ASSIGN_I (113)
    _uppr_4590 = _pTo_4589;
    // SubProg reverse pc: 114 op: STARTLINE (58)

    /** sequence.e:569		for lowr = pFrom to lLimit do*/
    // SubProg reverse pc: 116 op: ASSIGN (18)
    _2288 = _lLimit_4592;
    // SubProg reverse pc: 119 op: FOR_I (125)
    {
        object _lowr_4612;
        _lowr_4612 = _pFrom_4588;
L7: // addr: 126 pc: 119 sub: 4585 op: 125
        if (_lowr_4612 > _2288){
            goto L8; // [119] 159
        }
        // SubProg reverse pc: 126 op: STARTLINE (58)

        /** sequence.e:570			t[uppr] = target[lowr]*/
        // SubProg reverse pc: 128 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_target_4587);
        _2289 = (object)*(((s1_ptr)_2)->base + _lowr_4612);
        // SubProg reverse pc: 132 op: ASSIGN_SUBS (16)
        Ref(_2289);
        _2 = (object)SEQ_PTR(_t_4593);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_4593 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _uppr_4590);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2289;
        if( _1 != _2289 ){
            DeRef(_1);
        }
        _2289 = NOVALUE;
        // SubProg reverse pc: 136 op: STARTLINE (58)

        /** sequence.e:571			t[lowr] = target[uppr]*/
        // SubProg reverse pc: 138 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_target_4587);
        _2290 = (object)*(((s1_ptr)_2)->base + _uppr_4590);
        // SubProg reverse pc: 142 op: ASSIGN_SUBS (16)
        Ref(_2290);
        _2 = (object)SEQ_PTR(_t_4593);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_4593 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lowr_4612);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2290;
        if( _1 != _2290 ){
            DeRef(_1);
        }
        _2290 = NOVALUE;
        // SubProg reverse pc: 146 op: STARTLINE (58)

        /** sequence.e:572			uppr -= 1*/
        // SubProg reverse pc: 148 op: MINUS_I (116)
        _uppr_4590 = _uppr_4590 - 1;
        // SubProg reverse pc: 152 op: STARTLINE (58)

        /** sequence.e:573		end for*/
        // SubProg reverse pc: 154 op: ENDFOR_INT_UP1 (54)
        _lowr_4612 = _lowr_4612 + 1;
        goto L7; // [154] 126
L8: // addr: 159 pc: 154 sub: 4585 op: 54
        ;
    }
    // SubProg reverse pc: 159 op: STARTLINE (58)

    /** sequence.e:574		return t*/
    // SubProg reverse pc: 161 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var target_4587
    DeRef(_target_4587);

// block var pFrom_4588

// block var pTo_4589

// block var uppr_4590

// block var n_4591

// block var lLimit_4592
    DeRef(_2281);
    _2281 = NOVALUE;
    return _t_4593;
    // SubProg reverse pc: 165 op: BADRETURNF (43)
    ;
}


object _23pad_tail(object _target_4688, object _size_4689, object _ch_4690)
{
    object _2327 = NOVALUE; // 4697 2327
    object _2326 = NOVALUE; // 4696 2326
    object _2325 = NOVALUE; // 4695 2325
    object _2324 = NOVALUE; // 4694 2324
// skipping _2323  name type: 0
    object _2322 = NOVALUE; // 4692 2322
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pad_tail pc: 1 op: INTEGER_CHECK (96)
    // SubProg pad_tail pc: 3 op: STARTLINE (58)

    /** sequence.e:1022		if size <= length(target) then*/
    // SubProg pad_tail pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_target_4688)){
            _2322 = SEQ_PTR(_target_4688)->length;
    }
    else {
        _2322 = 1;
    }
    // SubProg pad_tail pc: 8 op: LESSEQ_IFW_I (123)
    if (_size_4689 > _2322)
    goto L1; // [8] 19
    // SubProg pad_tail pc: 12 op: STARTLINE (58)

    /** sequence.e:1023			return target*/
    // SubProg pad_tail pc: 14 op: RETURNF (28)

// Exiting block BLOCK: pad_tail

// block var size_4689

// block var ch_4690
    return _target_4688;
    // SubProg pad_tail pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 4686 op: 159
    // SubProg pad_tail pc: 19 op: STARTLINE (58)

    /** sequence.e:1026		return target & repeat(ch, size - length(target))*/
    // SubProg pad_tail pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_target_4688)){
            _2324 = SEQ_PTR(_target_4688)->length;
    }
    else {
        _2324 = 1;
    }
    // SubProg pad_tail pc: 24 op: MINUS (10)
    _2325 = _size_4689 - _2324;
    _2324 = NOVALUE;
    // SubProg pad_tail pc: 28 op: REPEAT (32)
    _2326 = Repeat(_ch_4690, _2325);
    _2325 = NOVALUE;
    // SubProg pad_tail pc: 32 op: CONCAT (15)
    if (IS_SEQUENCE(_target_4688) && IS_ATOM(_2326)) {
    }
    else if (IS_ATOM(_target_4688) && IS_SEQUENCE(_2326)) {
        Ref(_target_4688);
        Prepend(&_2327, _2326, _target_4688);
    }
    else {
        Concat((object_ptr)&_2327, _target_4688, _2326);
    }
    DeRefDS(_2326);
    _2326 = NOVALUE;
    // SubProg pad_tail pc: 36 op: RETURNF (28)

// Exiting block BLOCK: pad_tail

// block var target_4688
    DeRef(_target_4688);

// block var size_4689

// block var ch_4690
    return _2327;
    // SubProg pad_tail pc: 40 op: BADRETURNF (43)
    ;
}


object _23filter(object _source_4942, object _rid_4943, object _userdata_4944, object _rangetype_4945)
{
    object _dest_4946 = NOVALUE;
    object _idx_4947 = NOVALUE;
    object _2641 = NOVALUE; // 5203 2641
    object _2640 = NOVALUE; // 5202 2640
// skipping _2639  name type: 0
    object _2638 = NOVALUE; // 5200 2638
    object _2637 = NOVALUE; // 5199 2637
    object _2636 = NOVALUE; // 5198 2636
    object _2635 = NOVALUE; // 5196 2635
    object _2634 = NOVALUE; // 5191 2634
// skipping _2633  name type: 0
// skipping _2632  name type: 0
    object _2631 = NOVALUE; // 5188 2631
    object _2630 = NOVALUE; // 5187 2630
    object _2629 = NOVALUE; // 5186 2629
    object _2628 = NOVALUE; // 5184 2628
// skipping _2627  name type: 0
// skipping _2626  name type: 0
    object _2625 = NOVALUE; // 5181 2625
    object _2624 = NOVALUE; // 5180 2624
    object _2623 = NOVALUE; // 5179 2623
    object _2622 = NOVALUE; // 5177 2622
    object _2621 = NOVALUE; // 5173 2621
// skipping _2620  name type: 0
// skipping _2619  name type: 0
    object _2618 = NOVALUE; // 5170 2618
    object _2617 = NOVALUE; // 5169 2617
    object _2616 = NOVALUE; // 5168 2616
    object _2615 = NOVALUE; // 5166 2615
// skipping _2614  name type: 0
// skipping _2613  name type: 0
    object _2612 = NOVALUE; // 5163 2612
    object _2611 = NOVALUE; // 5162 2611
    object _2610 = NOVALUE; // 5161 2610
    object _2609 = NOVALUE; // 5159 2609
    object _2608 = NOVALUE; // 5155 2608
// skipping _2607  name type: 0
// skipping _2606  name type: 0
    object _2605 = NOVALUE; // 5152 2605
    object _2604 = NOVALUE; // 5151 2604
    object _2603 = NOVALUE; // 5150 2603
    object _2602 = NOVALUE; // 5148 2602
// skipping _2601  name type: 0
// skipping _2600  name type: 0
    object _2599 = NOVALUE; // 5145 2599
    object _2598 = NOVALUE; // 5144 2598
    object _2597 = NOVALUE; // 5143 2597
    object _2596 = NOVALUE; // 5141 2596
    object _2595 = NOVALUE; // 5137 2595
// skipping _2594  name type: 0
// skipping _2593  name type: 0
    object _2592 = NOVALUE; // 5134 2592
    object _2591 = NOVALUE; // 5133 2591
    object _2590 = NOVALUE; // 5132 2590
    object _2589 = NOVALUE; // 5130 2589
// skipping _2588  name type: 0
// skipping _2587  name type: 0
    object _2586 = NOVALUE; // 5127 2586
    object _2585 = NOVALUE; // 5126 2585
    object _2584 = NOVALUE; // 5125 2584
    object _2583 = NOVALUE; // 5123 2583
    object _2582 = NOVALUE; // 5119 2582
// skipping _2581  name type: 0
// skipping _2580  name type: 0
    object _2579 = NOVALUE; // 5116 2579
    object _2578 = NOVALUE; // 5115 2578
    object _2577 = NOVALUE; // 5113 2577
    object _2573 = NOVALUE; // 5104 2573
// skipping _2572  name type: 0
// skipping _2571  name type: 0
    object _2570 = NOVALUE; // 5101 2570
    object _2569 = NOVALUE; // 5100 2569
    object _2568 = NOVALUE; // 5099 2568
// skipping _2567  name type: 0
    object _2566 = NOVALUE; // 5096 2566
    object _2565 = NOVALUE; // 5095 2565
    object _2564 = NOVALUE; // 5094 2564
    object _2563 = NOVALUE; // 5092 2563
    object _2562 = NOVALUE; // 5088 2562
// skipping _2561  name type: 0
// skipping _2560  name type: 0
    object _2559 = NOVALUE; // 5085 2559
    object _2558 = NOVALUE; // 5084 2558
    object _2557 = NOVALUE; // 5083 2557
// skipping _2556  name type: 0
    object _2555 = NOVALUE; // 5080 2555
    object _2554 = NOVALUE; // 5079 2554
    object _2553 = NOVALUE; // 5078 2553
    object _2552 = NOVALUE; // 5076 2552
    object _2551 = NOVALUE; // 5072 2551
// skipping _2550  name type: 0
// skipping _2549  name type: 0
    object _2548 = NOVALUE; // 5069 2548
    object _2547 = NOVALUE; // 5068 2547
    object _2546 = NOVALUE; // 5067 2546
// skipping _2545  name type: 0
    object _2544 = NOVALUE; // 5064 2544
    object _2543 = NOVALUE; // 5063 2543
    object _2542 = NOVALUE; // 5062 2542
    object _2541 = NOVALUE; // 5060 2541
    object _2540 = NOVALUE; // 5056 2540
// skipping _2539  name type: 0
// skipping _2538  name type: 0
    object _2537 = NOVALUE; // 5053 2537
    object _2536 = NOVALUE; // 5052 2536
    object _2535 = NOVALUE; // 5051 2535
// skipping _2534  name type: 0
    object _2533 = NOVALUE; // 5048 2533
    object _2532 = NOVALUE; // 5047 2532
    object _2531 = NOVALUE; // 5046 2531
    object _2530 = NOVALUE; // 5044 2530
    object _2529 = NOVALUE; // 5040 2529
// skipping _2528  name type: 0
    object _2527 = NOVALUE; // 5038 2527
    object _2526 = NOVALUE; // 5037 2526
    object _2525 = NOVALUE; // 5035 2525
    object _2521 = NOVALUE; // 5027 2521
// skipping _2520  name type: 0
// skipping _2519  name type: 0
    object _2518 = NOVALUE; // 5024 2518
    object _2517 = NOVALUE; // 5023 2517
    object _2516 = NOVALUE; // 5021 2516
    object _2513 = NOVALUE; // 5015 2513
// skipping _2512  name type: 0
// skipping _2511  name type: 0
    object _2510 = NOVALUE; // 5012 2510
    object _2509 = NOVALUE; // 5011 2509
    object _2508 = NOVALUE; // 5009 2508
    object _2505 = NOVALUE; // 5003 2505
// skipping _2504  name type: 0
// skipping _2503  name type: 0
    object _2502 = NOVALUE; // 5000 2502
    object _2501 = NOVALUE; // 4999 2501
    object _2500 = NOVALUE; // 4997 2500
    object _2497 = NOVALUE; // 4991 2497
// skipping _2496  name type: 0
// skipping _2495  name type: 0
    object _2494 = NOVALUE; // 4988 2494
    object _2493 = NOVALUE; // 4987 2493
    object _2492 = NOVALUE; // 4985 2492
    object _2488 = NOVALUE; // 4978 2488
// skipping _2487  name type: 0
// skipping _2486  name type: 0
    object _2485 = NOVALUE; // 4975 2485
    object _2484 = NOVALUE; // 4974 2484
    object _2483 = NOVALUE; // 4972 2483
    object _2480 = NOVALUE; // 4966 2480
// skipping _2479  name type: 0
// skipping _2478  name type: 0
    object _2477 = NOVALUE; // 4963 2477
    object _2476 = NOVALUE; // 4962 2476
    object _2475 = NOVALUE; // 4960 2475
// skipping _2470  name type: 0
    object _2469 = NOVALUE; // 4951 2469
// skipping _2468  name type: 0
    object _2467 = NOVALUE; // 4949 2467
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filter pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg filter pc: 3 op: STARTLINE (58)

    /** sequence.e:1731		if length(source) = 0 then*/
    // SubProg filter pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_source_4942)){
            _2467 = SEQ_PTR(_source_4942)->length;
    }
    else {
        _2467 = 1;
    }
    // SubProg filter pc: 8 op: EQUALS_IFW_I (121)
    if (_2467 != 0)
    goto L1; // [8] 19
    // SubProg filter pc: 12 op: STARTLINE (58)

    /** sequence.e:1732			return source*/
    // SubProg filter pc: 14 op: RETURNF (28)

// Exiting block BLOCK: filter

// block var rid_4943

// block var userdata_4944
    DeRefDS(_userdata_4944);

// block var rangetype_4945
    DeRefDS(_rangetype_4945);

// block var dest_4946
    DeRef(_dest_4946);

// block var idx_4947
    return _source_4942;
    // SubProg filter pc: 18 op: NOP1 (159)
L1: // addr: 19 pc: 18 sub: 4940 op: 159
    // SubProg filter pc: 19 op: STARTLINE (58)

    /** sequence.e:1734		dest = repeat(0, length(source))*/
    // SubProg filter pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_source_4942)){
            _2469 = SEQ_PTR(_source_4942)->length;
    }
    else {
        _2469 = 1;
    }
    // SubProg filter pc: 24 op: REPEAT (32)
    DeRef(_dest_4946);
    _dest_4946 = Repeat(0, _2469);
    _2469 = NOVALUE;
    // SubProg filter pc: 28 op: STARTLINE (58)

    /** sequence.e:1735		idx = 0*/
    // SubProg filter pc: 30 op: ASSIGN_I (113)
    _idx_4947 = 0;
    // SubProg filter pc: 33 op: STARTLINE (58)

    /** sequence.e:1736		switch rid do*/
    // SubProg filter pc: 35 op: SWITCH (185)
    _1 = find(_rid_4943, _2471);
    switch ( _1 ){ 
        // SubProg filter pc: 40 op: STARTLINE (58)

        /** sequence.e:1737			case "<", "lt" then*/
        // SubProg filter pc: 42 op: CASE (186)
        case 1:
        // SubProg filter pc: 44 op: CASE (186)
        case 2:
        // SubProg filter pc: 46 op: STARTLINE (58)

        /** sequence.e:1738				for a = 1 to length(source) do*/
        // SubProg filter pc: 48 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2475 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2475 = 1;
        }
        // SubProg filter pc: 51 op: FOR_I (125)
        {
            object _a_4959;
            _a_4959 = 1;
L2: // addr: 58 pc: 51 sub: 4940 op: 125
            if (_a_4959 > _2475){
                goto L3; // [51] 96
            }
            // SubProg filter pc: 58 op: STARTLINE (58)

            /** sequence.e:1739					if compare(source[a], userdata) < 0 then*/
            // SubProg filter pc: 60 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2476 = (object)*(((s1_ptr)_2)->base + _a_4959);
            // SubProg filter pc: 64 op: COMPARE (76)
            if (IS_ATOM_INT(_2476) && IS_ATOM_INT(_userdata_4944)){
                _2477 = (_2476 < _userdata_4944) ? -1 : (_2476 > _userdata_4944);
            }
            else{
                _2477 = compare(_2476, _userdata_4944);
            }
            _2476 = NOVALUE;
            // SubProg filter pc: 68 op: LESS_IFW_I (119)
            if (_2477 >= 0)
            goto L4; // [68] 89
            // SubProg filter pc: 72 op: STARTLINE (58)

            /** sequence.e:1740						idx += 1*/
            // SubProg filter pc: 74 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 78 op: STARTLINE (58)

            /** sequence.e:1741						dest[idx] = source[a]*/
            // SubProg filter pc: 80 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2480 = (object)*(((s1_ptr)_2)->base + _a_4959);
            // SubProg filter pc: 84 op: ASSIGN_SUBS (16)
            Ref(_2480);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2480;
            if( _1 != _2480 ){
                DeRef(_1);
            }
            _2480 = NOVALUE;
            // SubProg filter pc: 88 op: NOP1 (159)
L4: // addr: 89 pc: 88 sub: 4940 op: 159
            // SubProg filter pc: 89 op: STARTLINE (58)

            /** sequence.e:1743				end for*/
            // SubProg filter pc: 91 op: ENDFOR_INT_UP1 (54)
            _a_4959 = _a_4959 + 1;
            goto L2; // [91] 58
L3: // addr: 96 pc: 91 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 96 op: ELSE (23)
        goto L5; // [96] 1304
        // SubProg filter pc: 98 op: STARTLINE (58)

        /** sequence.e:1745			case "<=", "le" then*/
        // SubProg filter pc: 100 op: CASE (186)
        case 3:
        // SubProg filter pc: 102 op: CASE (186)
        case 4:
        // SubProg filter pc: 104 op: STARTLINE (58)

        /** sequence.e:1746				for a = 1 to length(source) do*/
        // SubProg filter pc: 106 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2483 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2483 = 1;
        }
        // SubProg filter pc: 109 op: FOR_I (125)
        {
            object _a_4971;
            _a_4971 = 1;
L6: // addr: 116 pc: 109 sub: 4940 op: 125
            if (_a_4971 > _2483){
                goto L7; // [109] 154
            }
            // SubProg filter pc: 116 op: STARTLINE (58)

            /** sequence.e:1747					if compare(source[a], userdata) <= 0 then*/
            // SubProg filter pc: 118 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2484 = (object)*(((s1_ptr)_2)->base + _a_4971);
            // SubProg filter pc: 122 op: COMPARE (76)
            if (IS_ATOM_INT(_2484) && IS_ATOM_INT(_userdata_4944)){
                _2485 = (_2484 < _userdata_4944) ? -1 : (_2484 > _userdata_4944);
            }
            else{
                _2485 = compare(_2484, _userdata_4944);
            }
            _2484 = NOVALUE;
            // SubProg filter pc: 126 op: LESSEQ_IFW_I (123)
            if (_2485 > 0)
            goto L8; // [126] 147
            // SubProg filter pc: 130 op: STARTLINE (58)

            /** sequence.e:1748						idx += 1*/
            // SubProg filter pc: 132 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 136 op: STARTLINE (58)

            /** sequence.e:1749						dest[idx] = source[a]*/
            // SubProg filter pc: 138 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2488 = (object)*(((s1_ptr)_2)->base + _a_4971);
            // SubProg filter pc: 142 op: ASSIGN_SUBS (16)
            Ref(_2488);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2488;
            if( _1 != _2488 ){
                DeRef(_1);
            }
            _2488 = NOVALUE;
            // SubProg filter pc: 146 op: NOP1 (159)
L8: // addr: 147 pc: 146 sub: 4940 op: 159
            // SubProg filter pc: 147 op: STARTLINE (58)

            /** sequence.e:1751				end for*/
            // SubProg filter pc: 149 op: ENDFOR_INT_UP1 (54)
            _a_4971 = _a_4971 + 1;
            goto L6; // [149] 116
L7: // addr: 154 pc: 149 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 154 op: ELSE (23)
        goto L5; // [154] 1304
        // SubProg filter pc: 156 op: STARTLINE (58)

        /** sequence.e:1753			case "=", "==", "eq" then*/
        // SubProg filter pc: 158 op: CASE (186)
        case 5:
        // SubProg filter pc: 160 op: CASE (186)
        case 6:
        // SubProg filter pc: 162 op: CASE (186)
        case 7:
        // SubProg filter pc: 164 op: STARTLINE (58)

        /** sequence.e:1754				for a = 1 to length(source) do*/
        // SubProg filter pc: 166 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2492 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2492 = 1;
        }
        // SubProg filter pc: 169 op: FOR_I (125)
        {
            object _a_4984;
            _a_4984 = 1;
L9: // addr: 176 pc: 169 sub: 4940 op: 125
            if (_a_4984 > _2492){
                goto LA; // [169] 214
            }
            // SubProg filter pc: 176 op: STARTLINE (58)

            /** sequence.e:1755					if compare(source[a], userdata) = 0 then*/
            // SubProg filter pc: 178 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2493 = (object)*(((s1_ptr)_2)->base + _a_4984);
            // SubProg filter pc: 182 op: COMPARE (76)
            if (IS_ATOM_INT(_2493) && IS_ATOM_INT(_userdata_4944)){
                _2494 = (_2493 < _userdata_4944) ? -1 : (_2493 > _userdata_4944);
            }
            else{
                _2494 = compare(_2493, _userdata_4944);
            }
            _2493 = NOVALUE;
            // SubProg filter pc: 186 op: EQUALS_IFW_I (121)
            if (_2494 != 0)
            goto LB; // [186] 207
            // SubProg filter pc: 190 op: STARTLINE (58)

            /** sequence.e:1756						idx += 1*/
            // SubProg filter pc: 192 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 196 op: STARTLINE (58)

            /** sequence.e:1757						dest[idx] = source[a]*/
            // SubProg filter pc: 198 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2497 = (object)*(((s1_ptr)_2)->base + _a_4984);
            // SubProg filter pc: 202 op: ASSIGN_SUBS (16)
            Ref(_2497);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2497;
            if( _1 != _2497 ){
                DeRef(_1);
            }
            _2497 = NOVALUE;
            // SubProg filter pc: 206 op: NOP1 (159)
LB: // addr: 207 pc: 206 sub: 4940 op: 159
            // SubProg filter pc: 207 op: STARTLINE (58)

            /** sequence.e:1759				end for*/
            // SubProg filter pc: 209 op: ENDFOR_INT_UP1 (54)
            _a_4984 = _a_4984 + 1;
            goto L9; // [209] 176
LA: // addr: 214 pc: 209 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 214 op: ELSE (23)
        goto L5; // [214] 1304
        // SubProg filter pc: 216 op: STARTLINE (58)

        /** sequence.e:1761			case "!=", "ne" then*/
        // SubProg filter pc: 218 op: CASE (186)
        case 8:
        // SubProg filter pc: 220 op: CASE (186)
        case 9:
        // SubProg filter pc: 222 op: STARTLINE (58)

        /** sequence.e:1762				for a = 1 to length(source) do*/
        // SubProg filter pc: 224 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2500 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2500 = 1;
        }
        // SubProg filter pc: 227 op: FOR_I (125)
        {
            object _a_4996;
            _a_4996 = 1;
LC: // addr: 234 pc: 227 sub: 4940 op: 125
            if (_a_4996 > _2500){
                goto LD; // [227] 272
            }
            // SubProg filter pc: 234 op: STARTLINE (58)

            /** sequence.e:1763					if compare(source[a], userdata) != 0 then*/
            // SubProg filter pc: 236 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2501 = (object)*(((s1_ptr)_2)->base + _a_4996);
            // SubProg filter pc: 240 op: COMPARE (76)
            if (IS_ATOM_INT(_2501) && IS_ATOM_INT(_userdata_4944)){
                _2502 = (_2501 < _userdata_4944) ? -1 : (_2501 > _userdata_4944);
            }
            else{
                _2502 = compare(_2501, _userdata_4944);
            }
            _2501 = NOVALUE;
            // SubProg filter pc: 244 op: NOTEQ_IFW_I (122)
            if (_2502 == 0)
            goto LE; // [244] 265
            // SubProg filter pc: 248 op: STARTLINE (58)

            /** sequence.e:1764						idx += 1*/
            // SubProg filter pc: 250 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 254 op: STARTLINE (58)

            /** sequence.e:1765						dest[idx] = source[a]*/
            // SubProg filter pc: 256 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2505 = (object)*(((s1_ptr)_2)->base + _a_4996);
            // SubProg filter pc: 260 op: ASSIGN_SUBS (16)
            Ref(_2505);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2505;
            if( _1 != _2505 ){
                DeRef(_1);
            }
            _2505 = NOVALUE;
            // SubProg filter pc: 264 op: NOP1 (159)
LE: // addr: 265 pc: 264 sub: 4940 op: 159
            // SubProg filter pc: 265 op: STARTLINE (58)

            /** sequence.e:1767				end for*/
            // SubProg filter pc: 267 op: ENDFOR_INT_UP1 (54)
            _a_4996 = _a_4996 + 1;
            goto LC; // [267] 234
LD: // addr: 272 pc: 267 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 272 op: ELSE (23)
        goto L5; // [272] 1304
        // SubProg filter pc: 274 op: STARTLINE (58)

        /** sequence.e:1769			case ">", "gt" then*/
        // SubProg filter pc: 276 op: CASE (186)
        case 10:
        // SubProg filter pc: 278 op: CASE (186)
        case 11:
        // SubProg filter pc: 280 op: STARTLINE (58)

        /** sequence.e:1770				for a = 1 to length(source) do*/
        // SubProg filter pc: 282 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2508 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2508 = 1;
        }
        // SubProg filter pc: 285 op: FOR_I (125)
        {
            object _a_5008;
            _a_5008 = 1;
LF: // addr: 292 pc: 285 sub: 4940 op: 125
            if (_a_5008 > _2508){
                goto L10; // [285] 330
            }
            // SubProg filter pc: 292 op: STARTLINE (58)

            /** sequence.e:1771					if compare(source[a], userdata) > 0 then*/
            // SubProg filter pc: 294 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2509 = (object)*(((s1_ptr)_2)->base + _a_5008);
            // SubProg filter pc: 298 op: COMPARE (76)
            if (IS_ATOM_INT(_2509) && IS_ATOM_INT(_userdata_4944)){
                _2510 = (_2509 < _userdata_4944) ? -1 : (_2509 > _userdata_4944);
            }
            else{
                _2510 = compare(_2509, _userdata_4944);
            }
            _2509 = NOVALUE;
            // SubProg filter pc: 302 op: GREATER_IFW_I (124)
            if (_2510 <= 0)
            goto L11; // [302] 323
            // SubProg filter pc: 306 op: STARTLINE (58)

            /** sequence.e:1772						idx += 1*/
            // SubProg filter pc: 308 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 312 op: STARTLINE (58)

            /** sequence.e:1773						dest[idx] = source[a]*/
            // SubProg filter pc: 314 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2513 = (object)*(((s1_ptr)_2)->base + _a_5008);
            // SubProg filter pc: 318 op: ASSIGN_SUBS (16)
            Ref(_2513);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2513;
            if( _1 != _2513 ){
                DeRef(_1);
            }
            _2513 = NOVALUE;
            // SubProg filter pc: 322 op: NOP1 (159)
L11: // addr: 323 pc: 322 sub: 4940 op: 159
            // SubProg filter pc: 323 op: STARTLINE (58)

            /** sequence.e:1775				end for*/
            // SubProg filter pc: 325 op: ENDFOR_INT_UP1 (54)
            _a_5008 = _a_5008 + 1;
            goto LF; // [325] 292
L10: // addr: 330 pc: 325 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 330 op: ELSE (23)
        goto L5; // [330] 1304
        // SubProg filter pc: 332 op: STARTLINE (58)

        /** sequence.e:1777			case ">=", "ge" then*/
        // SubProg filter pc: 334 op: CASE (186)
        case 12:
        // SubProg filter pc: 336 op: CASE (186)
        case 13:
        // SubProg filter pc: 338 op: STARTLINE (58)

        /** sequence.e:1778				for a = 1 to length(source) do*/
        // SubProg filter pc: 340 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2516 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2516 = 1;
        }
        // SubProg filter pc: 343 op: FOR_I (125)
        {
            object _a_5020;
            _a_5020 = 1;
L12: // addr: 350 pc: 343 sub: 4940 op: 125
            if (_a_5020 > _2516){
                goto L13; // [343] 388
            }
            // SubProg filter pc: 350 op: STARTLINE (58)

            /** sequence.e:1779					if compare(source[a], userdata) >= 0 then*/
            // SubProg filter pc: 352 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2517 = (object)*(((s1_ptr)_2)->base + _a_5020);
            // SubProg filter pc: 356 op: COMPARE (76)
            if (IS_ATOM_INT(_2517) && IS_ATOM_INT(_userdata_4944)){
                _2518 = (_2517 < _userdata_4944) ? -1 : (_2517 > _userdata_4944);
            }
            else{
                _2518 = compare(_2517, _userdata_4944);
            }
            _2517 = NOVALUE;
            // SubProg filter pc: 360 op: GREATEREQ_IFW_I (120)
            if (_2518 < 0)
            goto L14; // [360] 381
            // SubProg filter pc: 364 op: STARTLINE (58)

            /** sequence.e:1780						idx += 1*/
            // SubProg filter pc: 366 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 370 op: STARTLINE (58)

            /** sequence.e:1781						dest[idx] = source[a]*/
            // SubProg filter pc: 372 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2521 = (object)*(((s1_ptr)_2)->base + _a_5020);
            // SubProg filter pc: 376 op: ASSIGN_SUBS (16)
            Ref(_2521);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2521;
            if( _1 != _2521 ){
                DeRef(_1);
            }
            _2521 = NOVALUE;
            // SubProg filter pc: 380 op: NOP1 (159)
L14: // addr: 381 pc: 380 sub: 4940 op: 159
            // SubProg filter pc: 381 op: STARTLINE (58)

            /** sequence.e:1783				end for*/
            // SubProg filter pc: 383 op: ENDFOR_INT_UP1 (54)
            _a_5020 = _a_5020 + 1;
            goto L12; // [383] 350
L13: // addr: 388 pc: 383 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 388 op: ELSE (23)
        goto L5; // [388] 1304
        // SubProg filter pc: 390 op: STARTLINE (58)

        /** sequence.e:1785			case "in" then*/
        // SubProg filter pc: 392 op: CASE (186)
        case 14:
        // SubProg filter pc: 394 op: STARTLINE (58)

        /** sequence.e:1786				switch rangetype do*/
        // SubProg filter pc: 396 op: SWITCH (185)
        _1 = find(_rangetype_4945, _2523);
        switch ( _1 ){ 
            // SubProg filter pc: 401 op: STARTLINE (58)

            /** sequence.e:1787					case "" then*/
            // SubProg filter pc: 403 op: CASE (186)
            case 1:
            // SubProg filter pc: 405 op: STARTLINE (58)

            /** sequence.e:1788						for a = 1 to length(source) do*/
            // SubProg filter pc: 407 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2525 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2525 = 1;
            }
            // SubProg filter pc: 410 op: FOR_I (125)
            {
                object _a_5034;
                _a_5034 = 1;
L15: // addr: 417 pc: 410 sub: 4940 op: 125
                if (_a_5034 > _2525){
                    goto L16; // [410] 455
                }
                // SubProg filter pc: 417 op: STARTLINE (58)

                /** sequence.e:1789							if find(source[a], userdata)  then*/
                // SubProg filter pc: 419 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2526 = (object)*(((s1_ptr)_2)->base + _a_5034);
                // SubProg filter pc: 423 op: FIND_FROM (176)
                _2527 = find_from(_2526, _userdata_4944, 1);
                _2526 = NOVALUE;
                // SubProg filter pc: 428 op: IF (20)
                if (_2527 == 0)
                {
                    _2527 = NOVALUE;
                    goto L17; // [428] 448
                }
                else{
                    _2527 = NOVALUE;
                }
                // SubProg filter pc: 431 op: STARTLINE (58)

                /** sequence.e:1790								idx += 1*/
                // SubProg filter pc: 433 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 437 op: STARTLINE (58)

                /** sequence.e:1791								dest[idx] = source[a]*/
                // SubProg filter pc: 439 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2529 = (object)*(((s1_ptr)_2)->base + _a_5034);
                // SubProg filter pc: 443 op: ASSIGN_SUBS (16)
                Ref(_2529);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2529;
                if( _1 != _2529 ){
                    DeRef(_1);
                }
                _2529 = NOVALUE;
                // SubProg filter pc: 447 op: NOP1 (159)
L17: // addr: 448 pc: 447 sub: 4940 op: 159
                // SubProg filter pc: 448 op: STARTLINE (58)

                /** sequence.e:1793						end for*/
                // SubProg filter pc: 450 op: ENDFOR_INT_UP1 (54)
                _a_5034 = _a_5034 + 1;
                goto L15; // [450] 417
L16: // addr: 455 pc: 450 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 455 op: ELSE (23)
            goto L5; // [455] 1304
            // SubProg filter pc: 457 op: STARTLINE (58)

            /** sequence.e:1795					case "[]" then*/
            // SubProg filter pc: 459 op: CASE (186)
            case 2:
            // SubProg filter pc: 461 op: STARTLINE (58)

            /** sequence.e:1796						for a = 1 to length(source) do*/
            // SubProg filter pc: 463 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2530 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2530 = 1;
            }
            // SubProg filter pc: 466 op: FOR_I (125)
            {
                object _a_5043;
                _a_5043 = 1;
L18: // addr: 473 pc: 466 sub: 4940 op: 125
                if (_a_5043 > _2530){
                    goto L19; // [466] 534
                }
                // SubProg filter pc: 473 op: STARTLINE (58)

                /** sequence.e:1797							if compare(source[a], userdata[1]) >= 0 then*/
                // SubProg filter pc: 475 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2531 = (object)*(((s1_ptr)_2)->base + _a_5043);
                // SubProg filter pc: 479 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2532 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 483 op: COMPARE (76)
                if (IS_ATOM_INT(_2531) && IS_ATOM_INT(_2532)){
                    _2533 = (_2531 < _2532) ? -1 : (_2531 > _2532);
                }
                else{
                    _2533 = compare(_2531, _2532);
                }
                _2531 = NOVALUE;
                _2532 = NOVALUE;
                // SubProg filter pc: 487 op: GREATEREQ_IFW_I (120)
                if (_2533 < 0)
                goto L1A; // [487] 527
                // SubProg filter pc: 491 op: STARTLINE (58)

                /** sequence.e:1798								if compare(source[a], userdata[2]) <= 0 then*/
                // SubProg filter pc: 493 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2535 = (object)*(((s1_ptr)_2)->base + _a_5043);
                // SubProg filter pc: 497 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2536 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 501 op: COMPARE (76)
                if (IS_ATOM_INT(_2535) && IS_ATOM_INT(_2536)){
                    _2537 = (_2535 < _2536) ? -1 : (_2535 > _2536);
                }
                else{
                    _2537 = compare(_2535, _2536);
                }
                _2535 = NOVALUE;
                _2536 = NOVALUE;
                // SubProg filter pc: 505 op: LESSEQ_IFW_I (123)
                if (_2537 > 0)
                goto L1B; // [505] 526
                // SubProg filter pc: 509 op: STARTLINE (58)

                /** sequence.e:1799									idx += 1*/
                // SubProg filter pc: 511 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 515 op: STARTLINE (58)

                /** sequence.e:1800									dest[idx] = source[a]*/
                // SubProg filter pc: 517 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2540 = (object)*(((s1_ptr)_2)->base + _a_5043);
                // SubProg filter pc: 521 op: ASSIGN_SUBS (16)
                Ref(_2540);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2540;
                if( _1 != _2540 ){
                    DeRef(_1);
                }
                _2540 = NOVALUE;
                // SubProg filter pc: 525 op: NOP1 (159)
L1B: // addr: 526 pc: 525 sub: 4940 op: 159
                // SubProg filter pc: 526 op: NOP1 (159)
L1A: // addr: 527 pc: 526 sub: 4940 op: 159
                // SubProg filter pc: 527 op: STARTLINE (58)

                /** sequence.e:1803						end for*/
                // SubProg filter pc: 529 op: ENDFOR_INT_UP1 (54)
                _a_5043 = _a_5043 + 1;
                goto L18; // [529] 473
L19: // addr: 534 pc: 529 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 534 op: ELSE (23)
            goto L5; // [534] 1304
            // SubProg filter pc: 536 op: STARTLINE (58)

            /** sequence.e:1805					case "[)" then*/
            // SubProg filter pc: 538 op: CASE (186)
            case 3:
            // SubProg filter pc: 540 op: STARTLINE (58)

            /** sequence.e:1806						for a = 1 to length(source) do*/
            // SubProg filter pc: 542 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2541 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2541 = 1;
            }
            // SubProg filter pc: 545 op: FOR_I (125)
            {
                object _a_5059;
                _a_5059 = 1;
L1C: // addr: 552 pc: 545 sub: 4940 op: 125
                if (_a_5059 > _2541){
                    goto L1D; // [545] 613
                }
                // SubProg filter pc: 552 op: STARTLINE (58)

                /** sequence.e:1807							if compare(source[a], userdata[1]) >= 0 then*/
                // SubProg filter pc: 554 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2542 = (object)*(((s1_ptr)_2)->base + _a_5059);
                // SubProg filter pc: 558 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2543 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 562 op: COMPARE (76)
                if (IS_ATOM_INT(_2542) && IS_ATOM_INT(_2543)){
                    _2544 = (_2542 < _2543) ? -1 : (_2542 > _2543);
                }
                else{
                    _2544 = compare(_2542, _2543);
                }
                _2542 = NOVALUE;
                _2543 = NOVALUE;
                // SubProg filter pc: 566 op: GREATEREQ_IFW_I (120)
                if (_2544 < 0)
                goto L1E; // [566] 606
                // SubProg filter pc: 570 op: STARTLINE (58)

                /** sequence.e:1808								if compare(source[a], userdata[2]) < 0 then*/
                // SubProg filter pc: 572 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2546 = (object)*(((s1_ptr)_2)->base + _a_5059);
                // SubProg filter pc: 576 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2547 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 580 op: COMPARE (76)
                if (IS_ATOM_INT(_2546) && IS_ATOM_INT(_2547)){
                    _2548 = (_2546 < _2547) ? -1 : (_2546 > _2547);
                }
                else{
                    _2548 = compare(_2546, _2547);
                }
                _2546 = NOVALUE;
                _2547 = NOVALUE;
                // SubProg filter pc: 584 op: LESS_IFW_I (119)
                if (_2548 >= 0)
                goto L1F; // [584] 605
                // SubProg filter pc: 588 op: STARTLINE (58)

                /** sequence.e:1809									idx += 1*/
                // SubProg filter pc: 590 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 594 op: STARTLINE (58)

                /** sequence.e:1810									dest[idx] = source[a]*/
                // SubProg filter pc: 596 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2551 = (object)*(((s1_ptr)_2)->base + _a_5059);
                // SubProg filter pc: 600 op: ASSIGN_SUBS (16)
                Ref(_2551);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2551;
                if( _1 != _2551 ){
                    DeRef(_1);
                }
                _2551 = NOVALUE;
                // SubProg filter pc: 604 op: NOP1 (159)
L1F: // addr: 605 pc: 604 sub: 4940 op: 159
                // SubProg filter pc: 605 op: NOP1 (159)
L1E: // addr: 606 pc: 605 sub: 4940 op: 159
                // SubProg filter pc: 606 op: STARTLINE (58)

                /** sequence.e:1813						end for*/
                // SubProg filter pc: 608 op: ENDFOR_INT_UP1 (54)
                _a_5059 = _a_5059 + 1;
                goto L1C; // [608] 552
L1D: // addr: 613 pc: 608 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 613 op: ELSE (23)
            goto L5; // [613] 1304
            // SubProg filter pc: 615 op: STARTLINE (58)

            /** sequence.e:1814					case "(]" then*/
            // SubProg filter pc: 617 op: CASE (186)
            case 4:
            // SubProg filter pc: 619 op: STARTLINE (58)

            /** sequence.e:1815						for a = 1 to length(source) do*/
            // SubProg filter pc: 621 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2552 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2552 = 1;
            }
            // SubProg filter pc: 624 op: FOR_I (125)
            {
                object _a_5075;
                _a_5075 = 1;
L20: // addr: 631 pc: 624 sub: 4940 op: 125
                if (_a_5075 > _2552){
                    goto L21; // [624] 692
                }
                // SubProg filter pc: 631 op: STARTLINE (58)

                /** sequence.e:1816							if compare(source[a], userdata[1]) > 0 then*/
                // SubProg filter pc: 633 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2553 = (object)*(((s1_ptr)_2)->base + _a_5075);
                // SubProg filter pc: 637 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2554 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 641 op: COMPARE (76)
                if (IS_ATOM_INT(_2553) && IS_ATOM_INT(_2554)){
                    _2555 = (_2553 < _2554) ? -1 : (_2553 > _2554);
                }
                else{
                    _2555 = compare(_2553, _2554);
                }
                _2553 = NOVALUE;
                _2554 = NOVALUE;
                // SubProg filter pc: 645 op: GREATER_IFW_I (124)
                if (_2555 <= 0)
                goto L22; // [645] 685
                // SubProg filter pc: 649 op: STARTLINE (58)

                /** sequence.e:1817								if compare(source[a], userdata[2]) <= 0 then*/
                // SubProg filter pc: 651 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2557 = (object)*(((s1_ptr)_2)->base + _a_5075);
                // SubProg filter pc: 655 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2558 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 659 op: COMPARE (76)
                if (IS_ATOM_INT(_2557) && IS_ATOM_INT(_2558)){
                    _2559 = (_2557 < _2558) ? -1 : (_2557 > _2558);
                }
                else{
                    _2559 = compare(_2557, _2558);
                }
                _2557 = NOVALUE;
                _2558 = NOVALUE;
                // SubProg filter pc: 663 op: LESSEQ_IFW_I (123)
                if (_2559 > 0)
                goto L23; // [663] 684
                // SubProg filter pc: 667 op: STARTLINE (58)

                /** sequence.e:1818									idx += 1*/
                // SubProg filter pc: 669 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 673 op: STARTLINE (58)

                /** sequence.e:1819									dest[idx] = source[a]*/
                // SubProg filter pc: 675 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2562 = (object)*(((s1_ptr)_2)->base + _a_5075);
                // SubProg filter pc: 679 op: ASSIGN_SUBS (16)
                Ref(_2562);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2562;
                if( _1 != _2562 ){
                    DeRef(_1);
                }
                _2562 = NOVALUE;
                // SubProg filter pc: 683 op: NOP1 (159)
L23: // addr: 684 pc: 683 sub: 4940 op: 159
                // SubProg filter pc: 684 op: NOP1 (159)
L22: // addr: 685 pc: 684 sub: 4940 op: 159
                // SubProg filter pc: 685 op: STARTLINE (58)

                /** sequence.e:1822						end for*/
                // SubProg filter pc: 687 op: ENDFOR_INT_UP1 (54)
                _a_5075 = _a_5075 + 1;
                goto L20; // [687] 631
L21: // addr: 692 pc: 687 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 692 op: ELSE (23)
            goto L5; // [692] 1304
            // SubProg filter pc: 694 op: STARTLINE (58)

            /** sequence.e:1823					case "()" then*/
            // SubProg filter pc: 696 op: CASE (186)
            case 5:
            // SubProg filter pc: 698 op: STARTLINE (58)

            /** sequence.e:1824						for a = 1 to length(source) do*/
            // SubProg filter pc: 700 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2563 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2563 = 1;
            }
            // SubProg filter pc: 703 op: FOR_I (125)
            {
                object _a_5091;
                _a_5091 = 1;
L24: // addr: 710 pc: 703 sub: 4940 op: 125
                if (_a_5091 > _2563){
                    goto L25; // [703] 771
                }
                // SubProg filter pc: 710 op: STARTLINE (58)

                /** sequence.e:1825							if compare(source[a], userdata[1]) > 0 then*/
                // SubProg filter pc: 712 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2564 = (object)*(((s1_ptr)_2)->base + _a_5091);
                // SubProg filter pc: 716 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2565 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 720 op: COMPARE (76)
                if (IS_ATOM_INT(_2564) && IS_ATOM_INT(_2565)){
                    _2566 = (_2564 < _2565) ? -1 : (_2564 > _2565);
                }
                else{
                    _2566 = compare(_2564, _2565);
                }
                _2564 = NOVALUE;
                _2565 = NOVALUE;
                // SubProg filter pc: 724 op: GREATER_IFW_I (124)
                if (_2566 <= 0)
                goto L26; // [724] 764
                // SubProg filter pc: 728 op: STARTLINE (58)

                /** sequence.e:1826								if compare(source[a], userdata[2]) < 0 then*/
                // SubProg filter pc: 730 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2568 = (object)*(((s1_ptr)_2)->base + _a_5091);
                // SubProg filter pc: 734 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2569 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 738 op: COMPARE (76)
                if (IS_ATOM_INT(_2568) && IS_ATOM_INT(_2569)){
                    _2570 = (_2568 < _2569) ? -1 : (_2568 > _2569);
                }
                else{
                    _2570 = compare(_2568, _2569);
                }
                _2568 = NOVALUE;
                _2569 = NOVALUE;
                // SubProg filter pc: 742 op: LESS_IFW_I (119)
                if (_2570 >= 0)
                goto L27; // [742] 763
                // SubProg filter pc: 746 op: STARTLINE (58)

                /** sequence.e:1827									idx += 1*/
                // SubProg filter pc: 748 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 752 op: STARTLINE (58)

                /** sequence.e:1828									dest[idx] = source[a]*/
                // SubProg filter pc: 754 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2573 = (object)*(((s1_ptr)_2)->base + _a_5091);
                // SubProg filter pc: 758 op: ASSIGN_SUBS (16)
                Ref(_2573);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2573;
                if( _1 != _2573 ){
                    DeRef(_1);
                }
                _2573 = NOVALUE;
                // SubProg filter pc: 762 op: NOP1 (159)
L27: // addr: 763 pc: 762 sub: 4940 op: 159
                // SubProg filter pc: 763 op: NOP1 (159)
L26: // addr: 764 pc: 763 sub: 4940 op: 159
                // SubProg filter pc: 764 op: STARTLINE (58)

                /** sequence.e:1831						end for*/
                // SubProg filter pc: 766 op: ENDFOR_INT_UP1 (54)
                _a_5091 = _a_5091 + 1;
                goto L24; // [766] 710
L25: // addr: 771 pc: 766 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 771 op: ELSE (23)
            goto L5; // [771] 1304
            // SubProg filter pc: 773 op: STARTLINE (58)

            /** sequence.e:1833					case else*/
            // SubProg filter pc: 775 op: CASE (186)
            case 0:
            // SubProg filter pc: 777 op: NOPSWITCH (187)
        ;}        // SubProg filter pc: 778 op: ELSE (23)
        goto L5; // [778] 1304
        // SubProg filter pc: 780 op: STARTLINE (58)

        /** sequence.e:1838			case "out" then*/
        // SubProg filter pc: 782 op: CASE (186)
        case 15:
        // SubProg filter pc: 784 op: STARTLINE (58)

        /** sequence.e:1839				switch rangetype do*/
        // SubProg filter pc: 786 op: SWITCH (185)
        _1 = find(_rangetype_4945, _2575);
        switch ( _1 ){ 
            // SubProg filter pc: 791 op: STARTLINE (58)

            /** sequence.e:1840					case "" then*/
            // SubProg filter pc: 793 op: CASE (186)
            case 1:
            // SubProg filter pc: 795 op: STARTLINE (58)

            /** sequence.e:1841						for a = 1 to length(source) do*/
            // SubProg filter pc: 797 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2577 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2577 = 1;
            }
            // SubProg filter pc: 800 op: FOR_I (125)
            {
                object _a_5112;
                _a_5112 = 1;
L28: // addr: 807 pc: 800 sub: 4940 op: 125
                if (_a_5112 > _2577){
                    goto L29; // [800] 845
                }
                // SubProg filter pc: 807 op: STARTLINE (58)

                /** sequence.e:1842							if not find(source[a], userdata)  then*/
                // SubProg filter pc: 809 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2578 = (object)*(((s1_ptr)_2)->base + _a_5112);
                // SubProg filter pc: 813 op: FIND_FROM (176)
                _2579 = find_from(_2578, _userdata_4944, 1);
                _2578 = NOVALUE;
                // SubProg filter pc: 818 op: NOT_IFW (108)
                if (_2579 != 0)
                goto L2A; // [818] 838
                _2579 = NOVALUE;
                // SubProg filter pc: 821 op: STARTLINE (58)

                /** sequence.e:1843								idx += 1*/
                // SubProg filter pc: 823 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 827 op: STARTLINE (58)

                /** sequence.e:1844								dest[idx] = source[a]*/
                // SubProg filter pc: 829 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2582 = (object)*(((s1_ptr)_2)->base + _a_5112);
                // SubProg filter pc: 833 op: ASSIGN_SUBS (16)
                Ref(_2582);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2582;
                if( _1 != _2582 ){
                    DeRef(_1);
                }
                _2582 = NOVALUE;
                // SubProg filter pc: 837 op: NOP1 (159)
L2A: // addr: 838 pc: 837 sub: 4940 op: 159
                // SubProg filter pc: 838 op: STARTLINE (58)

                /** sequence.e:1846						end for*/
                // SubProg filter pc: 840 op: ENDFOR_INT_UP1 (54)
                _a_5112 = _a_5112 + 1;
                goto L28; // [840] 807
L29: // addr: 845 pc: 840 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 845 op: ELSE (23)
            goto L5; // [845] 1304
            // SubProg filter pc: 847 op: STARTLINE (58)

            /** sequence.e:1848					case "[]" then*/
            // SubProg filter pc: 849 op: CASE (186)
            case 2:
            // SubProg filter pc: 851 op: STARTLINE (58)

            /** sequence.e:1849						for a = 1 to length(source) do*/
            // SubProg filter pc: 853 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2583 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2583 = 1;
            }
            // SubProg filter pc: 856 op: FOR_I (125)
            {
                object _a_5122;
                _a_5122 = 1;
L2B: // addr: 863 pc: 856 sub: 4940 op: 125
                if (_a_5122 > _2583){
                    goto L2C; // [856] 943
                }
                // SubProg filter pc: 863 op: STARTLINE (58)

                /** sequence.e:1850							if compare(source[a], userdata[1]) < 0 then*/
                // SubProg filter pc: 865 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2584 = (object)*(((s1_ptr)_2)->base + _a_5122);
                // SubProg filter pc: 869 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2585 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 873 op: COMPARE (76)
                if (IS_ATOM_INT(_2584) && IS_ATOM_INT(_2585)){
                    _2586 = (_2584 < _2585) ? -1 : (_2584 > _2585);
                }
                else{
                    _2586 = compare(_2584, _2585);
                }
                _2584 = NOVALUE;
                _2585 = NOVALUE;
                // SubProg filter pc: 877 op: LESS_IFW_I (119)
                if (_2586 >= 0)
                goto L2D; // [877] 900
                // SubProg filter pc: 881 op: STARTLINE (58)

                /** sequence.e:1851								idx += 1*/
                // SubProg filter pc: 883 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 887 op: STARTLINE (58)

                /** sequence.e:1852								dest[idx] = source[a]*/
                // SubProg filter pc: 889 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2589 = (object)*(((s1_ptr)_2)->base + _a_5122);
                // SubProg filter pc: 893 op: ASSIGN_SUBS (16)
                Ref(_2589);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2589;
                if( _1 != _2589 ){
                    DeRef(_1);
                }
                _2589 = NOVALUE;
                // SubProg filter pc: 897 op: ELSE (23)
                goto L2E; // [897] 936
                // SubProg filter pc: 899 op: NOP1 (159)
L2D: // addr: 900 pc: 899 sub: 4940 op: 159
                // SubProg filter pc: 900 op: STARTLINE (58)

                /** sequence.e:1853							elsif compare(source[a], userdata[2]) > 0 then*/
                // SubProg filter pc: 902 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2590 = (object)*(((s1_ptr)_2)->base + _a_5122);
                // SubProg filter pc: 906 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2591 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 910 op: COMPARE (76)
                if (IS_ATOM_INT(_2590) && IS_ATOM_INT(_2591)){
                    _2592 = (_2590 < _2591) ? -1 : (_2590 > _2591);
                }
                else{
                    _2592 = compare(_2590, _2591);
                }
                _2590 = NOVALUE;
                _2591 = NOVALUE;
                // SubProg filter pc: 914 op: GREATER_IFW_I (124)
                if (_2592 <= 0)
                goto L2F; // [914] 935
                // SubProg filter pc: 918 op: STARTLINE (58)

                /** sequence.e:1854								idx += 1*/
                // SubProg filter pc: 920 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 924 op: STARTLINE (58)

                /** sequence.e:1855								dest[idx] = source[a]*/
                // SubProg filter pc: 926 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2595 = (object)*(((s1_ptr)_2)->base + _a_5122);
                // SubProg filter pc: 930 op: ASSIGN_SUBS (16)
                Ref(_2595);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2595;
                if( _1 != _2595 ){
                    DeRef(_1);
                }
                _2595 = NOVALUE;
                // SubProg filter pc: 934 op: NOP1 (159)
L2F: // addr: 935 pc: 934 sub: 4940 op: 159
                // SubProg filter pc: 935 op: NOP1 (159)
L2E: // addr: 936 pc: 935 sub: 4940 op: 159
                // SubProg filter pc: 936 op: STARTLINE (58)

                /** sequence.e:1857						end for*/
                // SubProg filter pc: 938 op: ENDFOR_INT_UP1 (54)
                _a_5122 = _a_5122 + 1;
                goto L2B; // [938] 863
L2C: // addr: 943 pc: 938 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 943 op: ELSE (23)
            goto L5; // [943] 1304
            // SubProg filter pc: 945 op: STARTLINE (58)

            /** sequence.e:1859					case "[)" then*/
            // SubProg filter pc: 947 op: CASE (186)
            case 3:
            // SubProg filter pc: 949 op: STARTLINE (58)

            /** sequence.e:1860						for a = 1 to length(source) do*/
            // SubProg filter pc: 951 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2596 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2596 = 1;
            }
            // SubProg filter pc: 954 op: FOR_I (125)
            {
                object _a_5140;
                _a_5140 = 1;
L30: // addr: 961 pc: 954 sub: 4940 op: 125
                if (_a_5140 > _2596){
                    goto L31; // [954] 1041
                }
                // SubProg filter pc: 961 op: STARTLINE (58)

                /** sequence.e:1861							if compare(source[a], userdata[1]) < 0 then*/
                // SubProg filter pc: 963 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2597 = (object)*(((s1_ptr)_2)->base + _a_5140);
                // SubProg filter pc: 967 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2598 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 971 op: COMPARE (76)
                if (IS_ATOM_INT(_2597) && IS_ATOM_INT(_2598)){
                    _2599 = (_2597 < _2598) ? -1 : (_2597 > _2598);
                }
                else{
                    _2599 = compare(_2597, _2598);
                }
                _2597 = NOVALUE;
                _2598 = NOVALUE;
                // SubProg filter pc: 975 op: LESS_IFW_I (119)
                if (_2599 >= 0)
                goto L32; // [975] 998
                // SubProg filter pc: 979 op: STARTLINE (58)

                /** sequence.e:1862								idx += 1*/
                // SubProg filter pc: 981 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 985 op: STARTLINE (58)

                /** sequence.e:1863								dest[idx] = source[a]*/
                // SubProg filter pc: 987 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2602 = (object)*(((s1_ptr)_2)->base + _a_5140);
                // SubProg filter pc: 991 op: ASSIGN_SUBS (16)
                Ref(_2602);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2602;
                if( _1 != _2602 ){
                    DeRef(_1);
                }
                _2602 = NOVALUE;
                // SubProg filter pc: 995 op: ELSE (23)
                goto L33; // [995] 1034
                // SubProg filter pc: 997 op: NOP1 (159)
L32: // addr: 998 pc: 997 sub: 4940 op: 159
                // SubProg filter pc: 998 op: STARTLINE (58)

                /** sequence.e:1864							elsif compare(source[a], userdata[2]) >= 0 then*/
                // SubProg filter pc: 1000 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2603 = (object)*(((s1_ptr)_2)->base + _a_5140);
                // SubProg filter pc: 1004 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2604 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1008 op: COMPARE (76)
                if (IS_ATOM_INT(_2603) && IS_ATOM_INT(_2604)){
                    _2605 = (_2603 < _2604) ? -1 : (_2603 > _2604);
                }
                else{
                    _2605 = compare(_2603, _2604);
                }
                _2603 = NOVALUE;
                _2604 = NOVALUE;
                // SubProg filter pc: 1012 op: GREATEREQ_IFW_I (120)
                if (_2605 < 0)
                goto L34; // [1012] 1033
                // SubProg filter pc: 1016 op: STARTLINE (58)

                /** sequence.e:1865								idx += 1*/
                // SubProg filter pc: 1018 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 1022 op: STARTLINE (58)

                /** sequence.e:1866								dest[idx] = source[a]*/
                // SubProg filter pc: 1024 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2608 = (object)*(((s1_ptr)_2)->base + _a_5140);
                // SubProg filter pc: 1028 op: ASSIGN_SUBS (16)
                Ref(_2608);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2608;
                if( _1 != _2608 ){
                    DeRef(_1);
                }
                _2608 = NOVALUE;
                // SubProg filter pc: 1032 op: NOP1 (159)
L34: // addr: 1033 pc: 1032 sub: 4940 op: 159
                // SubProg filter pc: 1033 op: NOP1 (159)
L33: // addr: 1034 pc: 1033 sub: 4940 op: 159
                // SubProg filter pc: 1034 op: STARTLINE (58)

                /** sequence.e:1868						end for*/
                // SubProg filter pc: 1036 op: ENDFOR_INT_UP1 (54)
                _a_5140 = _a_5140 + 1;
                goto L30; // [1036] 961
L31: // addr: 1041 pc: 1036 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 1041 op: ELSE (23)
            goto L5; // [1041] 1304
            // SubProg filter pc: 1043 op: STARTLINE (58)

            /** sequence.e:1869					case "(]" then*/
            // SubProg filter pc: 1045 op: CASE (186)
            case 4:
            // SubProg filter pc: 1047 op: STARTLINE (58)

            /** sequence.e:1870						for a = 1 to length(source) do*/
            // SubProg filter pc: 1049 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2609 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2609 = 1;
            }
            // SubProg filter pc: 1052 op: FOR_I (125)
            {
                object _a_5158;
                _a_5158 = 1;
L35: // addr: 1059 pc: 1052 sub: 4940 op: 125
                if (_a_5158 > _2609){
                    goto L36; // [1052] 1139
                }
                // SubProg filter pc: 1059 op: STARTLINE (58)

                /** sequence.e:1871							if compare(source[a], userdata[1]) <= 0 then*/
                // SubProg filter pc: 1061 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2610 = (object)*(((s1_ptr)_2)->base + _a_5158);
                // SubProg filter pc: 1065 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2611 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 1069 op: COMPARE (76)
                if (IS_ATOM_INT(_2610) && IS_ATOM_INT(_2611)){
                    _2612 = (_2610 < _2611) ? -1 : (_2610 > _2611);
                }
                else{
                    _2612 = compare(_2610, _2611);
                }
                _2610 = NOVALUE;
                _2611 = NOVALUE;
                // SubProg filter pc: 1073 op: LESSEQ_IFW_I (123)
                if (_2612 > 0)
                goto L37; // [1073] 1096
                // SubProg filter pc: 1077 op: STARTLINE (58)

                /** sequence.e:1872								idx += 1*/
                // SubProg filter pc: 1079 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 1083 op: STARTLINE (58)

                /** sequence.e:1873								dest[idx] = source[a]*/
                // SubProg filter pc: 1085 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2615 = (object)*(((s1_ptr)_2)->base + _a_5158);
                // SubProg filter pc: 1089 op: ASSIGN_SUBS (16)
                Ref(_2615);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2615;
                if( _1 != _2615 ){
                    DeRef(_1);
                }
                _2615 = NOVALUE;
                // SubProg filter pc: 1093 op: ELSE (23)
                goto L38; // [1093] 1132
                // SubProg filter pc: 1095 op: NOP1 (159)
L37: // addr: 1096 pc: 1095 sub: 4940 op: 159
                // SubProg filter pc: 1096 op: STARTLINE (58)

                /** sequence.e:1874							elsif compare(source[a], userdata[2]) > 0 then*/
                // SubProg filter pc: 1098 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2616 = (object)*(((s1_ptr)_2)->base + _a_5158);
                // SubProg filter pc: 1102 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2617 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1106 op: COMPARE (76)
                if (IS_ATOM_INT(_2616) && IS_ATOM_INT(_2617)){
                    _2618 = (_2616 < _2617) ? -1 : (_2616 > _2617);
                }
                else{
                    _2618 = compare(_2616, _2617);
                }
                _2616 = NOVALUE;
                _2617 = NOVALUE;
                // SubProg filter pc: 1110 op: GREATER_IFW_I (124)
                if (_2618 <= 0)
                goto L39; // [1110] 1131
                // SubProg filter pc: 1114 op: STARTLINE (58)

                /** sequence.e:1875								idx += 1*/
                // SubProg filter pc: 1116 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 1120 op: STARTLINE (58)

                /** sequence.e:1876								dest[idx] = source[a]*/
                // SubProg filter pc: 1122 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2621 = (object)*(((s1_ptr)_2)->base + _a_5158);
                // SubProg filter pc: 1126 op: ASSIGN_SUBS (16)
                Ref(_2621);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2621;
                if( _1 != _2621 ){
                    DeRef(_1);
                }
                _2621 = NOVALUE;
                // SubProg filter pc: 1130 op: NOP1 (159)
L39: // addr: 1131 pc: 1130 sub: 4940 op: 159
                // SubProg filter pc: 1131 op: NOP1 (159)
L38: // addr: 1132 pc: 1131 sub: 4940 op: 159
                // SubProg filter pc: 1132 op: STARTLINE (58)

                /** sequence.e:1878						end for*/
                // SubProg filter pc: 1134 op: ENDFOR_INT_UP1 (54)
                _a_5158 = _a_5158 + 1;
                goto L35; // [1134] 1059
L36: // addr: 1139 pc: 1134 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 1139 op: ELSE (23)
            goto L5; // [1139] 1304
            // SubProg filter pc: 1141 op: STARTLINE (58)

            /** sequence.e:1879					case "()" then*/
            // SubProg filter pc: 1143 op: CASE (186)
            case 5:
            // SubProg filter pc: 1145 op: STARTLINE (58)

            /** sequence.e:1880						for a = 1 to length(source) do*/
            // SubProg filter pc: 1147 op: LENGTH (42)
            if (IS_SEQUENCE(_source_4942)){
                    _2622 = SEQ_PTR(_source_4942)->length;
            }
            else {
                _2622 = 1;
            }
            // SubProg filter pc: 1150 op: FOR_I (125)
            {
                object _a_5176;
                _a_5176 = 1;
L3A: // addr: 1157 pc: 1150 sub: 4940 op: 125
                if (_a_5176 > _2622){
                    goto L3B; // [1150] 1237
                }
                // SubProg filter pc: 1157 op: STARTLINE (58)

                /** sequence.e:1881							if compare(source[a], userdata[1]) <= 0 then*/
                // SubProg filter pc: 1159 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2623 = (object)*(((s1_ptr)_2)->base + _a_5176);
                // SubProg filter pc: 1163 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2624 = (object)*(((s1_ptr)_2)->base + 1);
                // SubProg filter pc: 1167 op: COMPARE (76)
                if (IS_ATOM_INT(_2623) && IS_ATOM_INT(_2624)){
                    _2625 = (_2623 < _2624) ? -1 : (_2623 > _2624);
                }
                else{
                    _2625 = compare(_2623, _2624);
                }
                _2623 = NOVALUE;
                _2624 = NOVALUE;
                // SubProg filter pc: 1171 op: LESSEQ_IFW_I (123)
                if (_2625 > 0)
                goto L3C; // [1171] 1194
                // SubProg filter pc: 1175 op: STARTLINE (58)

                /** sequence.e:1882								idx += 1*/
                // SubProg filter pc: 1177 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 1181 op: STARTLINE (58)

                /** sequence.e:1883								dest[idx] = source[a]*/
                // SubProg filter pc: 1183 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2628 = (object)*(((s1_ptr)_2)->base + _a_5176);
                // SubProg filter pc: 1187 op: ASSIGN_SUBS (16)
                Ref(_2628);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2628;
                if( _1 != _2628 ){
                    DeRef(_1);
                }
                _2628 = NOVALUE;
                // SubProg filter pc: 1191 op: ELSE (23)
                goto L3D; // [1191] 1230
                // SubProg filter pc: 1193 op: NOP1 (159)
L3C: // addr: 1194 pc: 1193 sub: 4940 op: 159
                // SubProg filter pc: 1194 op: STARTLINE (58)

                /** sequence.e:1884							elsif compare(source[a], userdata[2]) >= 0 then*/
                // SubProg filter pc: 1196 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2629 = (object)*(((s1_ptr)_2)->base + _a_5176);
                // SubProg filter pc: 1200 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_userdata_4944);
                _2630 = (object)*(((s1_ptr)_2)->base + 2);
                // SubProg filter pc: 1204 op: COMPARE (76)
                if (IS_ATOM_INT(_2629) && IS_ATOM_INT(_2630)){
                    _2631 = (_2629 < _2630) ? -1 : (_2629 > _2630);
                }
                else{
                    _2631 = compare(_2629, _2630);
                }
                _2629 = NOVALUE;
                _2630 = NOVALUE;
                // SubProg filter pc: 1208 op: GREATEREQ_IFW_I (120)
                if (_2631 < 0)
                goto L3E; // [1208] 1229
                // SubProg filter pc: 1212 op: STARTLINE (58)

                /** sequence.e:1885								idx += 1*/
                // SubProg filter pc: 1214 op: PLUS1_I (117)
                _idx_4947 = _idx_4947 + 1;
                // SubProg filter pc: 1218 op: STARTLINE (58)

                /** sequence.e:1886								dest[idx] = source[a]*/
                // SubProg filter pc: 1220 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_source_4942);
                _2634 = (object)*(((s1_ptr)_2)->base + _a_5176);
                // SubProg filter pc: 1224 op: ASSIGN_SUBS (16)
                Ref(_2634);
                _2 = (object)SEQ_PTR(_dest_4946);
                _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _2634;
                if( _1 != _2634 ){
                    DeRef(_1);
                }
                _2634 = NOVALUE;
                // SubProg filter pc: 1228 op: NOP1 (159)
L3E: // addr: 1229 pc: 1228 sub: 4940 op: 159
                // SubProg filter pc: 1229 op: NOP1 (159)
L3D: // addr: 1230 pc: 1229 sub: 4940 op: 159
                // SubProg filter pc: 1230 op: STARTLINE (58)

                /** sequence.e:1888						end for*/
                // SubProg filter pc: 1232 op: ENDFOR_INT_UP1 (54)
                _a_5176 = _a_5176 + 1;
                goto L3A; // [1232] 1157
L3B: // addr: 1237 pc: 1232 sub: 4940 op: 54
                ;
            }
            // SubProg filter pc: 1237 op: ELSE (23)
            goto L5; // [1237] 1304
            // SubProg filter pc: 1239 op: STARTLINE (58)

            /** sequence.e:1889					case else*/
            // SubProg filter pc: 1241 op: CASE (186)
            case 0:
            // SubProg filter pc: 1243 op: NOPSWITCH (187)
        ;}        // SubProg filter pc: 1244 op: ELSE (23)
        goto L5; // [1244] 1304
        // SubProg filter pc: 1246 op: STARTLINE (58)

        /** sequence.e:1894			case else*/
        // SubProg filter pc: 1248 op: CASE (186)
        case 0:
        // SubProg filter pc: 1250 op: STARTLINE (58)

        /** sequence.e:1895				for a = 1 to length(source) do*/
        // SubProg filter pc: 1252 op: LENGTH (42)
        if (IS_SEQUENCE(_source_4942)){
                _2635 = SEQ_PTR(_source_4942)->length;
        }
        else {
            _2635 = 1;
        }
        // SubProg filter pc: 1255 op: FOR_I (125)
        {
            object _a_5195;
            _a_5195 = 1;
L3F: // addr: 1262 pc: 1255 sub: 4940 op: 125
            if (_a_5195 > _2635){
                goto L40; // [1255] 1303
            }
            // SubProg filter pc: 1262 op: STARTLINE (58)

            /** sequence.e:1896					if call_func(rid, {source[a], userdata}) then*/
            // SubProg filter pc: 1264 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2636 = (object)*(((s1_ptr)_2)->base + _a_5195);
            // SubProg filter pc: 1268 op: RIGHT_BRACE_2 (85)
            Ref(_userdata_4944);
            Ref(_2636);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _2636;
            ((intptr_t *)_2)[2] = _userdata_4944;
            _2637 = MAKE_SEQ(_1);
            _2636 = NOVALUE;
            // SubProg filter pc: 1272 op: CALL_FUNC (137)
            _1 = (object)SEQ_PTR(_2637);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_rid_4943].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            Ref( *(( (intptr_t*)_2) + 2) );
            _1 = (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1), 
                                *( ((intptr_t *)_2) + 2)
                                 );
            DeRef(_2638);
            _2638 = _1;
            DeRefDS(_2637);
            _2637 = NOVALUE;
            // SubProg filter pc: 1276 op: IF (20)
            if (_2638 == 0) {
                DeRef(_2638);
                _2638 = NOVALUE;
                goto L41; // [1276] 1296
            }
            else {
                if (!IS_ATOM_INT(_2638) && DBL_PTR(_2638)->dbl == 0.0){
                    DeRef(_2638);
                    _2638 = NOVALUE;
                    goto L41; // [1276] 1296
                }
                DeRef(_2638);
                _2638 = NOVALUE;
            }
            DeRef(_2638);
            _2638 = NOVALUE;
            // SubProg filter pc: 1279 op: STARTLINE (58)

            /** sequence.e:1897						idx += 1*/
            // SubProg filter pc: 1281 op: PLUS1_I (117)
            _idx_4947 = _idx_4947 + 1;
            // SubProg filter pc: 1285 op: STARTLINE (58)

            /** sequence.e:1898						dest[idx] = source[a]*/
            // SubProg filter pc: 1287 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_source_4942);
            _2640 = (object)*(((s1_ptr)_2)->base + _a_5195);
            // SubProg filter pc: 1291 op: ASSIGN_SUBS (16)
            Ref(_2640);
            _2 = (object)SEQ_PTR(_dest_4946);
            _2 = (object)(((s1_ptr)_2)->base + _idx_4947);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _2640;
            if( _1 != _2640 ){
                DeRef(_1);
            }
            _2640 = NOVALUE;
            // SubProg filter pc: 1295 op: NOP1 (159)
L41: // addr: 1296 pc: 1295 sub: 4940 op: 159
            // SubProg filter pc: 1296 op: STARTLINE (58)

            /** sequence.e:1900				end for*/
            // SubProg filter pc: 1298 op: ENDFOR_INT_UP1 (54)
            _a_5195 = _a_5195 + 1;
            goto L3F; // [1298] 1262
L40: // addr: 1303 pc: 1298 sub: 4940 op: 54
            ;
        }
        // SubProg filter pc: 1303 op: NOPSWITCH (187)
    ;}L5: // addr: 1304 pc: 1303 sub: 4940 op: 187
    // SubProg filter pc: 1304 op: STARTLINE (58)

    /** sequence.e:1902		return dest[1..idx]*/
    // SubProg filter pc: 1306 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2641;
    RHS_Slice(_dest_4946, 1, _idx_4947);
    // SubProg filter pc: 1311 op: RETURNF (28)

// Exiting block BLOCK: filter

// block var source_4942
    DeRefDS(_source_4942);

// block var rid_4943

// block var userdata_4944
    DeRef(_userdata_4944);

// block var rangetype_4945
    DeRef(_rangetype_4945);

// block var dest_4946
    DeRefDS(_dest_4946);

// block var idx_4947
    return _2641;
    // SubProg filter pc: 1315 op: BADRETURNF (43)
    ;
}


object _23filter_alpha(object _elem_5207, object _ud_5208)
{
    object _2642 = NOVALUE; // 5210 2642
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg filter_alpha pc: 1 op: STARTLINE (58)

    /** sequence.e:1907		return t_alpha(elem)*/
    // SubProg filter_alpha pc: 3 op: PROC (27)
    Ref(_elem_5207);
    _2642 = _13t_alpha(_elem_5207);
    // SubProg filter_alpha pc: 7 op: RETURNF (28)

// Exiting block BLOCK: filter_alpha

// block var elem_5207
    DeRef(_elem_5207);
    return _2642;
    // SubProg filter_alpha pc: 11 op: BADRETURNF (43)
    ;
}


object _23split(object _st_5252, object _delim_5253, object _no_empty_5254, object _limit_5255)
{
    object _ret_5256 = NOVALUE;
    object _start_5257 = NOVALUE;
    object _pos_5258 = NOVALUE;
    object _k_5310 = NOVALUE;
    object _2710 = NOVALUE; // 5327 2710
// skipping _2709  name type: 0
    object _2708 = NOVALUE; // 5325 2708
    object _2707 = NOVALUE; // 5323 2707
// skipping _2706  name type: 0
// skipping _2705  name type: 0
// skipping _2704  name type: 0
    object _2703 = NOVALUE; // 5318 2703
    object _2702 = NOVALUE; // 5317 2702
    object _2701 = NOVALUE; // 5315 2701
// skipping _2700  name type: 0
// skipping _2699  name type: 0
    object _2698 = NOVALUE; // 5308 2698
    object _2697 = NOVALUE; // 5307 2697
// skipping _2696  name type: 0
// skipping _2695  name type: 0
// skipping _2694  name type: 0
// skipping _2693  name type: 0
    object _2692 = NOVALUE; // 5301 2692
    object _2691 = NOVALUE; // 5300 2691
// skipping _2690  name type: 0
// skipping _2689  name type: 0
// skipping _2688  name type: 0
    object _2687 = NOVALUE; // 5295 2687
// skipping _2686  name type: 0
// skipping _2685  name type: 0
// skipping _2684  name type: 0
    object _2683 = NOVALUE; // 5288 2683
// skipping _2682  name type: 0
    object _2681 = NOVALUE; // 5286 2681
    object _2680 = NOVALUE; // 5285 2680
// skipping _2679  name type: 0
// skipping _2678  name type: 0
// skipping _2677  name type: 0
    object _2676 = NOVALUE; // 5280 2676
// skipping _2675  name type: 0
    object _2674 = NOVALUE; // 5277 2674
    object _2673 = NOVALUE; // 5276 2673
    object _2672 = NOVALUE; // 5275 2672
    object _2671 = NOVALUE; // 5274 2671
// skipping _2670  name type: 0
// skipping _2669  name type: 0
    object _2668 = NOVALUE; // 5270 2668
    object _2667 = NOVALUE; // 5269 2667
    object _2666 = NOVALUE; // 5268 2666
    object _2665 = NOVALUE; // 5265 2665
    object _2664 = NOVALUE; // 5263 2664
// skipping _2663  name type: 0
    object _2662 = NOVALUE; // 5260 2662
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg split pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg split pc: 3 op: INTEGER_CHECK (96)
    // SubProg split pc: 5 op: INTEGER_CHECK (96)
    // SubProg split pc: 7 op: STARTLINE (58)

    /** sequence.e:2088		sequence ret = {}*/
    // SubProg split pc: 9 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_5256);
    _ret_5256 = _5;
    // SubProg split pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg split pc: 14 op: STARTLINE (58)

    /** sequence.e:2092		if length(st) = 0 then*/
    // SubProg split pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_st_5252)){
            _2662 = SEQ_PTR(_st_5252)->length;
    }
    else {
        _2662 = 1;
    }
    // SubProg split pc: 19 op: EQUALS_IFW_I (121)
    if (_2662 != 0)
    goto L1; // [19] 30
    // SubProg split pc: 23 op: STARTLINE (58)

    /** sequence.e:2093			return ret*/
    // SubProg split pc: 25 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_5252
    DeRefDS(_st_5252);

// block var delim_5253
    DeRefi(_delim_5253);

// block var no_empty_5254

// block var limit_5255

// block var start_5257

// block var pos_5258

// block var k_5310
    return _ret_5256;
    // SubProg split pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 5250 op: 159
    // SubProg split pc: 30 op: STARTLINE (58)

    /** sequence.e:2097		if sequence(delim) then*/
    // SubProg split pc: 32 op: IS_A_SEQUENCE (68)
    _2664 = IS_SEQUENCE(_delim_5253);
    // SubProg split pc: 35 op: IF (20)
    if (_2664 == 0)
    {
        _2664 = NOVALUE;
        goto L2; // [35] 211
    }
    else{
        _2664 = NOVALUE;
    }
    // SubProg split pc: 38 op: STARTLINE (58)

    /** sequence.e:2099			if equal(delim, "") then*/
    // SubProg split pc: 40 op: EQUAL (153)
    if (_delim_5253 == _5)
    _2665 = 1;
    else if (IS_ATOM_INT(_delim_5253) && IS_ATOM_INT(_5))
    _2665 = 0;
    else
    _2665 = (compare(_delim_5253, _5) == 0);
    // SubProg split pc: 44 op: IF (20)
    if (_2665 == 0)
    {
        _2665 = NOVALUE;
        goto L3; // [44] 127
    }
    else{
        _2665 = NOVALUE;
    }
    // SubProg split pc: 47 op: STARTLINE (58)

    /** sequence.e:2100				for i = 1 to length(st) do*/
    // SubProg split pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_st_5252)){
            _2666 = SEQ_PTR(_st_5252)->length;
    }
    else {
        _2666 = 1;
    }
    // SubProg split pc: 52 op: FOR_I (125)
    {
        object _i_5267;
        _i_5267 = 1;
L4: // addr: 59 pc: 52 sub: 5250 op: 125
        if (_i_5267 > _2666){
            goto L5; // [52] 120
        }
        // SubProg split pc: 59 op: STARTLINE (58)

        /** sequence.e:2101					st[i] = {st[i]}*/
        // SubProg split pc: 61 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_st_5252);
        _2667 = (object)*(((s1_ptr)_2)->base + _i_5267);
        // SubProg split pc: 65 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_2667);
        ((intptr_t*)_2)[1] = _2667;
        _2668 = MAKE_SEQ(_1);
        _2667 = NOVALUE;
        // SubProg split pc: 69 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_st_5252);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _st_5252 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_5267);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2668;
        if( _1 != _2668 ){
            DeRef(_1);
        }
        _2668 = NOVALUE;
        // SubProg split pc: 73 op: STARTLINE (58)

        /** sequence.e:2102					limit -= 1*/
        // SubProg split pc: 75 op: MINUS_I (116)
        _limit_5255 = _limit_5255 - 1;
        // SubProg split pc: 79 op: STARTLINE (58)

        /** sequence.e:2103					if limit = 0 then*/
        // SubProg split pc: 81 op: EQUALS_IFW_I (121)
        if (_limit_5255 != 0)
        goto L6; // [81] 113
        // SubProg split pc: 85 op: STARTLINE (58)

        /** sequence.e:2104						st = append(st[1 .. i],st[i+1 .. $])*/
        // SubProg split pc: 87 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_2671;
        RHS_Slice(_st_5252, 1, _i_5267);
        // SubProg split pc: 92 op: PLUS1 (93)
        _2672 = _i_5267 + 1;
        // SubProg split pc: 96 op: LENGTH (42)
        if (IS_SEQUENCE(_st_5252)){
                _2673 = SEQ_PTR(_st_5252)->length;
        }
        else {
            _2673 = 1;
        }
        // SubProg split pc: 99 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_2674;
        RHS_Slice(_st_5252, _2672, _2673);
        // SubProg split pc: 104 op: APPEND (35)
        RefDS(_2674);
        Append(&_st_5252, _2671, _2674);
        DeRefDS(_2671);
        _2671 = NOVALUE;
        DeRefDS(_2674);
        _2674 = NOVALUE;
        // SubProg split pc: 108 op: STARTLINE (58)

        /** sequence.e:2105						exit*/
        // SubProg split pc: 110 op: EXIT (61)
        goto L5; // [110] 120
        // SubProg split pc: 112 op: NOP1 (159)
L6: // addr: 113 pc: 112 sub: 5250 op: 159
        // SubProg split pc: 113 op: STARTLINE (58)

        /** sequence.e:2107				end for*/
        // SubProg split pc: 115 op: ENDFOR_INT_UP1 (54)
        _i_5267 = _i_5267 + 1;
        goto L4; // [115] 59
L5: // addr: 120 pc: 115 sub: 5250 op: 54
        ;
    }
    // SubProg split pc: 120 op: STARTLINE (58)

    /** sequence.e:2109				return st*/
    // SubProg split pc: 122 op: RETURNF (28)

// Exiting block BLOCK: split

// block var delim_5253
    DeRefi(_delim_5253);

// block var no_empty_5254

// block var limit_5255

// block var ret_5256
    DeRef(_ret_5256);

// block var start_5257

// block var pos_5258

// block var k_5310
    DeRef(_2672);
    _2672 = NOVALUE;
    return _st_5252;
    // SubProg split pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 5250 op: 159
    // SubProg split pc: 127 op: STARTLINE (58)

    /** sequence.e:2112			start = 1*/
    // SubProg split pc: 129 op: ASSIGN_I (113)
    _start_5257 = 1;
    // SubProg split pc: 132 op: STARTLINE (58)

    /** sequence.e:2113			while start <= length(st) do*/
    // SubProg split pc: 134 op: NOP2 (110)
    // SubProg split pc: 136 op: NOPWHILE (158)
L7: // addr: 137 pc: 136 sub: 5250 op: 158
    // SubProg split pc: 137 op: LENGTH (42)
    if (IS_SEQUENCE(_st_5252)){
            _2676 = SEQ_PTR(_st_5252)->length;
    }
    else {
        _2676 = 1;
    }
    // SubProg split pc: 140 op: LESSEQ_IFW_I (123)
    if (_start_5257 > _2676)
    goto L8; // [140] 290
    // SubProg split pc: 144 op: STARTLINE (58)

    /** sequence.e:2114				pos = match(delim, st, start)*/
    // SubProg split pc: 146 op: MATCH_FROM (177)
    _pos_5258 = e_match_from(_delim_5253, _st_5252, _start_5257);
    // SubProg split pc: 151 op: STARTLINE (58)

    /** sequence.e:2116				if pos = 0 then*/
    // SubProg split pc: 153 op: EQUALS_IFW_I (121)
    if (_pos_5258 != 0)
    goto L9; // [153] 162
    // SubProg split pc: 157 op: STARTLINE (58)

    /** sequence.e:2117					exit*/
    // SubProg split pc: 159 op: EXIT (61)
    goto L8; // [159] 290
    // SubProg split pc: 161 op: NOP1 (159)
L9: // addr: 162 pc: 161 sub: 5250 op: 159
    // SubProg split pc: 162 op: STARTLINE (58)

    /** sequence.e:2120				ret = append(ret, st[start..pos-1])*/
    // SubProg split pc: 164 op: MINUS (10)
    _2680 = _pos_5258 - 1;
    // SubProg split pc: 168 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2681;
    RHS_Slice(_st_5252, _start_5257, _2680);
    // SubProg split pc: 173 op: APPEND (35)
    RefDS(_2681);
    Append(&_ret_5256, _ret_5256, _2681);
    DeRefDS(_2681);
    _2681 = NOVALUE;
    // SubProg split pc: 177 op: STARTLINE (58)

    /** sequence.e:2121				start = pos+length(delim)*/
    // SubProg split pc: 179 op: LENGTH (42)
    if (IS_SEQUENCE(_delim_5253)){
            _2683 = SEQ_PTR(_delim_5253)->length;
    }
    else {
        _2683 = 1;
    }
    // SubProg split pc: 182 op: PLUS_I (115)
    _start_5257 = _pos_5258 + _2683;
    _2683 = NOVALUE;
    // SubProg split pc: 186 op: STARTLINE (58)

    /** sequence.e:2122				limit -= 1*/
    // SubProg split pc: 188 op: MINUS_I (116)
    _limit_5255 = _limit_5255 - 1;
    // SubProg split pc: 192 op: STARTLINE (58)

    /** sequence.e:2123				if limit = 0 then*/
    // SubProg split pc: 194 op: EQUALS_IFW_I (121)
    if (_limit_5255 != 0)
    goto L7; // [194] 137
    // SubProg split pc: 198 op: STARTLINE (58)

    /** sequence.e:2124					exit*/
    // SubProg split pc: 200 op: EXIT (61)
    goto L8; // [200] 290
    // SubProg split pc: 202 op: NOP1 (159)
    // SubProg split pc: 203 op: STARTLINE (58)

    /** sequence.e:2126			end while*/
    // SubProg split pc: 205 op: ENDWHILE (22)
    goto L7; // [205] 137
    // SubProg split pc: 207 op: NOP1 (159)
    // SubProg split pc: 208 op: ELSE (23)
    goto L8; // [208] 290
    // SubProg split pc: 210 op: NOP1 (159)
L2: // addr: 211 pc: 210 sub: 5250 op: 159
    // SubProg split pc: 211 op: STARTLINE (58)

    /** sequence.e:2128			start = 1*/
    // SubProg split pc: 213 op: ASSIGN_I (113)
    _start_5257 = 1;
    // SubProg split pc: 216 op: STARTLINE (58)

    /** sequence.e:2129			while start <= length(st) do*/
    // SubProg split pc: 218 op: NOP2 (110)
    // SubProg split pc: 220 op: NOPWHILE (158)
LA: // addr: 221 pc: 220 sub: 5250 op: 158
    // SubProg split pc: 221 op: LENGTH (42)
    if (IS_SEQUENCE(_st_5252)){
            _2687 = SEQ_PTR(_st_5252)->length;
    }
    else {
        _2687 = 1;
    }
    // SubProg split pc: 224 op: LESSEQ_IFW_I (123)
    if (_start_5257 > _2687)
    goto LB; // [224] 289
    // SubProg split pc: 228 op: STARTLINE (58)

    /** sequence.e:2130				pos = find(delim, st, start)*/
    // SubProg split pc: 230 op: FIND_FROM (176)
    _pos_5258 = find_from(_delim_5253, _st_5252, _start_5257);
    // SubProg split pc: 235 op: STARTLINE (58)

    /** sequence.e:2132				if pos = 0 then*/
    // SubProg split pc: 237 op: EQUALS_IFW_I (121)
    if (_pos_5258 != 0)
    goto LC; // [237] 246
    // SubProg split pc: 241 op: STARTLINE (58)

    /** sequence.e:2133					exit*/
    // SubProg split pc: 243 op: EXIT (61)
    goto LB; // [243] 289
    // SubProg split pc: 245 op: NOP1 (159)
LC: // addr: 246 pc: 245 sub: 5250 op: 159
    // SubProg split pc: 246 op: STARTLINE (58)

    /** sequence.e:2136				ret = append(ret, st[start..pos-1])*/
    // SubProg split pc: 248 op: MINUS (10)
    _2691 = _pos_5258 - 1;
    // SubProg split pc: 252 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2692;
    RHS_Slice(_st_5252, _start_5257, _2691);
    // SubProg split pc: 257 op: APPEND (35)
    RefDS(_2692);
    Append(&_ret_5256, _ret_5256, _2692);
    DeRefDS(_2692);
    _2692 = NOVALUE;
    // SubProg split pc: 261 op: STARTLINE (58)

    /** sequence.e:2137				start = pos + 1*/
    // SubProg split pc: 263 op: PLUS1_I (117)
    _start_5257 = _pos_5258 + 1;
    // SubProg split pc: 267 op: STARTLINE (58)

    /** sequence.e:2138				limit -= 1*/
    // SubProg split pc: 269 op: MINUS_I (116)
    _limit_5255 = _limit_5255 - 1;
    // SubProg split pc: 273 op: STARTLINE (58)

    /** sequence.e:2139				if limit = 0 then*/
    // SubProg split pc: 275 op: EQUALS_IFW_I (121)
    if (_limit_5255 != 0)
    goto LA; // [275] 221
    // SubProg split pc: 279 op: STARTLINE (58)

    /** sequence.e:2140					exit*/
    // SubProg split pc: 281 op: EXIT (61)
    goto LB; // [281] 289
    // SubProg split pc: 283 op: NOP1 (159)
    // SubProg split pc: 284 op: STARTLINE (58)

    /** sequence.e:2142			end while*/
    // SubProg split pc: 286 op: ENDWHILE (22)
    goto LA; // [286] 221
    // SubProg split pc: 288 op: NOP1 (159)
LB: // addr: 289 pc: 288 sub: 5250 op: 159
    // SubProg split pc: 289 op: NOP1 (159)
L8: // addr: 290 pc: 289 sub: 5250 op: 159
    // SubProg split pc: 290 op: STARTLINE (58)

    /** sequence.e:2145		ret = append(ret, st[start..$])*/
    // SubProg split pc: 292 op: PRIVATE_INIT_CHECK (30)
    // SubProg split pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_st_5252)){
            _2697 = SEQ_PTR(_st_5252)->length;
    }
    else {
        _2697 = 1;
    }
    // SubProg split pc: 297 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2698;
    RHS_Slice(_st_5252, _start_5257, _2697);
    // SubProg split pc: 302 op: APPEND (35)
    RefDS(_2698);
    Append(&_ret_5256, _ret_5256, _2698);
    DeRefDS(_2698);
    _2698 = NOVALUE;
    // SubProg split pc: 306 op: STARTLINE (58)

    /** sequence.e:2147		integer k = length(ret)*/
    // SubProg split pc: 308 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5256)){
            _k_5310 = SEQ_PTR(_ret_5256)->length;
    }
    else {
        _k_5310 = 1;
    }
    // SubProg split pc: 311 op: STARTLINE (58)

    /** sequence.e:2148		if no_empty then*/
    // SubProg split pc: 313 op: IF (20)
    if (_no_empty_5254 == 0)
    {
        goto LD; // [313] 378
    }
    else{
    }
    // SubProg split pc: 316 op: STARTLINE (58)

    /** sequence.e:2149			k = 0*/
    // SubProg split pc: 318 op: ASSIGN_I (113)
    _k_5310 = 0;
    // SubProg split pc: 321 op: STARTLINE (58)

    /** sequence.e:2150			for i = 1 to length(ret) do*/
    // SubProg split pc: 323 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5256)){
            _2701 = SEQ_PTR(_ret_5256)->length;
    }
    else {
        _2701 = 1;
    }
    // SubProg split pc: 326 op: FOR_I (125)
    {
        object _i_5314;
        _i_5314 = 1;
LE: // addr: 333 pc: 326 sub: 5250 op: 125
        if (_i_5314 > _2701){
            goto LF; // [326] 377
        }
        // SubProg split pc: 333 op: STARTLINE (58)

        /** sequence.e:2151				if length(ret[i]) != 0 then*/
        // SubProg split pc: 335 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ret_5256);
        _2702 = (object)*(((s1_ptr)_2)->base + _i_5314);
        // SubProg split pc: 339 op: LENGTH (42)
        if (IS_SEQUENCE(_2702)){
                _2703 = SEQ_PTR(_2702)->length;
        }
        else {
            _2703 = 1;
        }
        _2702 = NOVALUE;
        // SubProg split pc: 342 op: NOTEQ_IFW_I (122)
        if (_2703 == 0)
        goto L10; // [342] 370
        // SubProg split pc: 346 op: STARTLINE (58)

        /** sequence.e:2152					k += 1*/
        // SubProg split pc: 348 op: PLUS1_I (117)
        _k_5310 = _k_5310 + 1;
        // SubProg split pc: 352 op: STARTLINE (58)

        /** sequence.e:2153					if k != i then*/
        // SubProg split pc: 354 op: NOTEQ_IFW_I (122)
        if (_k_5310 == _i_5314)
        goto L11; // [354] 369
        // SubProg split pc: 358 op: STARTLINE (58)

        /** sequence.e:2154						ret[k] = ret[i]*/
        // SubProg split pc: 360 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_ret_5256);
        _2707 = (object)*(((s1_ptr)_2)->base + _i_5314);
        // SubProg split pc: 364 op: ASSIGN_SUBS (16)
        Ref(_2707);
        _2 = (object)SEQ_PTR(_ret_5256);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _ret_5256 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _k_5310);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _2707;
        if( _1 != _2707 ){
            DeRef(_1);
        }
        _2707 = NOVALUE;
        // SubProg split pc: 368 op: NOP1 (159)
L11: // addr: 369 pc: 368 sub: 5250 op: 159
        // SubProg split pc: 369 op: NOP1 (159)
L10: // addr: 370 pc: 369 sub: 5250 op: 159
        // SubProg split pc: 370 op: STARTLINE (58)

        /** sequence.e:2157			end for*/
        // SubProg split pc: 372 op: ENDFOR_INT_UP1 (54)
        _i_5314 = _i_5314 + 1;
        goto LE; // [372] 333
LF: // addr: 377 pc: 372 sub: 5250 op: 54
        ;
    }
    // SubProg split pc: 377 op: NOP1 (159)
LD: // addr: 378 pc: 377 sub: 5250 op: 159
    // SubProg split pc: 378 op: STARTLINE (58)

    /** sequence.e:2160		if k < length(ret) then*/
    // SubProg split pc: 380 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5256)){
            _2708 = SEQ_PTR(_ret_5256)->length;
    }
    else {
        _2708 = 1;
    }
    // SubProg split pc: 383 op: LESS_IFW_I (119)
    if (_k_5310 >= _2708)
    goto L12; // [383] 401
    // SubProg split pc: 387 op: STARTLINE (58)

    /** sequence.e:2161			return ret[1 .. k]*/
    // SubProg split pc: 389 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2710;
    RHS_Slice(_ret_5256, 1, _k_5310);
    // SubProg split pc: 394 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_5252
    DeRefDS(_st_5252);

// block var delim_5253
    DeRefi(_delim_5253);

// block var no_empty_5254

// block var limit_5255

// block var ret_5256
    DeRefDS(_ret_5256);

// block var start_5257

// block var pos_5258

// block var k_5310
    DeRef(_2680);
    _2680 = NOVALUE;
    DeRef(_2691);
    _2691 = NOVALUE;
    DeRef(_2672);
    _2672 = NOVALUE;
    _2702 = NOVALUE;
    return _2710;
    // SubProg split pc: 398 op: ELSE (23)
    goto L13; // [398] 408
    // SubProg split pc: 400 op: NOP1 (159)
L12: // addr: 401 pc: 400 sub: 5250 op: 159
    // SubProg split pc: 401 op: STARTLINE (58)

    /** sequence.e:2163			return ret*/
    // SubProg split pc: 403 op: RETURNF (28)

// Exiting block BLOCK: split

// block var st_5252
    DeRefDS(_st_5252);

// block var delim_5253
    DeRefi(_delim_5253);

// block var no_empty_5254

// block var limit_5255

// block var start_5257

// block var pos_5258

// block var k_5310
    DeRef(_2680);
    _2680 = NOVALUE;
    DeRef(_2691);
    _2691 = NOVALUE;
    DeRef(_2672);
    _2672 = NOVALUE;
    DeRef(_2710);
    _2710 = NOVALUE;
    _2702 = NOVALUE;
    return _ret_5256;
    // SubProg split pc: 407 op: NOP1 (159)
L13: // addr: 408 pc: 407 sub: 5250 op: 159
    // SubProg split pc: 408 op: BADRETURNF (43)
    ;
}


object _23join(object _items_5379, object _delim_5380)
{
    object _ret_5382 = NOVALUE;
// skipping _2746  name type: 0
    object _2745 = NOVALUE; // 5394 2745
    object _2744 = NOVALUE; // 5393 2744
// skipping _2743  name type: 0
    object _2742 = NOVALUE; // 5391 2742
    object _2741 = NOVALUE; // 5390 2741
    object _2740 = NOVALUE; // 5389 2740
    object _2739 = NOVALUE; // 5388 2739
// skipping _2738  name type: 0
    object _2737 = NOVALUE; // 5384 2737
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg join pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg join pc: 3 op: STARTLINE (58)

    /** sequence.e:2279		if not length(items) then return {} end if*/
    // SubProg join pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_items_5379)){
            _2737 = SEQ_PTR(_items_5379)->length;
    }
    else {
        _2737 = 1;
    }
    // SubProg join pc: 8 op: NOT_IFW (108)
    if (_2737 != 0)
    goto L1; // [8] 16
    _2737 = NOVALUE;
    // SubProg join pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: join

// block var items_5379
    DeRefDS(_items_5379);

// block var delim_5380

// block var ret_5382
    DeRef(_ret_5382);
    return _5;
    // SubProg join pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 5377 op: 159
    // SubProg join pc: 16 op: STARTLINE (58)

    /** sequence.e:2281		ret = {}*/
    // SubProg join pc: 18 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_5382);
    _ret_5382 = _5;
    // SubProg join pc: 21 op: STARTLINE (58)

    /** sequence.e:2282		for i=1 to length(items)-1 do*/
    // SubProg join pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_items_5379)){
            _2739 = SEQ_PTR(_items_5379)->length;
    }
    else {
        _2739 = 1;
    }
    // SubProg join pc: 26 op: MINUS (10)
    _2740 = _2739 - 1;
    _2739 = NOVALUE;
    // SubProg join pc: 30 op: FOR (21)
    {
        object _i_5387;
        _i_5387 = 1;
L2: // addr: 37 pc: 30 sub: 5377 op: 21
        if (_i_5387 > _2740){
            goto L3; // [30] 58
        }
        // SubProg join pc: 37 op: STARTLINE (58)

        /** sequence.e:2283			ret &= items[i] & delim*/
        // SubProg join pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_items_5379);
        _2741 = (object)*(((s1_ptr)_2)->base + _i_5387);
        // SubProg join pc: 43 op: CONCAT (15)
        if (IS_SEQUENCE(_2741) && IS_ATOM(_delim_5380)) {
            Append(&_2742, _2741, _delim_5380);
        }
        else if (IS_ATOM(_2741) && IS_SEQUENCE(_delim_5380)) {
        }
        else {
            Concat((object_ptr)&_2742, _2741, _delim_5380);
            _2741 = NOVALUE;
        }
        _2741 = NOVALUE;
        // SubProg join pc: 47 op: CONCAT (15)
        if (IS_SEQUENCE(_ret_5382) && IS_ATOM(_2742)) {
        }
        else if (IS_ATOM(_ret_5382) && IS_SEQUENCE(_2742)) {
            Ref(_ret_5382);
            Prepend(&_ret_5382, _2742, _ret_5382);
        }
        else {
            Concat((object_ptr)&_ret_5382, _ret_5382, _2742);
        }
        DeRefDS(_2742);
        _2742 = NOVALUE;
        // SubProg join pc: 51 op: STARTLINE (58)

        /** sequence.e:2284		end for*/
        // SubProg join pc: 53 op: ENDFOR_INT_UP1 (54)
        _i_5387 = _i_5387 + 1;
        goto L2; // [53] 37
L3: // addr: 58 pc: 53 sub: 5377 op: 54
        ;
    }
    // SubProg join pc: 58 op: STARTLINE (58)

    /** sequence.e:2286		ret &= items[$]*/
    // SubProg join pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_items_5379)){
            _2744 = SEQ_PTR(_items_5379)->length;
    }
    else {
        _2744 = 1;
    }
    // SubProg join pc: 63 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_items_5379);
    _2745 = (object)*(((s1_ptr)_2)->base + _2744);
    // SubProg join pc: 67 op: CONCAT (15)
    if (IS_SEQUENCE(_ret_5382) && IS_ATOM(_2745)) {
        Ref(_2745);
        Append(&_ret_5382, _ret_5382, _2745);
    }
    else if (IS_ATOM(_ret_5382) && IS_SEQUENCE(_2745)) {
        Ref(_ret_5382);
        Prepend(&_ret_5382, _2745, _ret_5382);
    }
    else {
        Concat((object_ptr)&_ret_5382, _ret_5382, _2745);
    }
    _2745 = NOVALUE;
    // SubProg join pc: 71 op: STARTLINE (58)

    /** sequence.e:2288		return ret*/
    // SubProg join pc: 73 op: RETURNF (28)

// Exiting block BLOCK: join

// block var items_5379
    DeRefDS(_items_5379);

// block var delim_5380
    DeRef(_2740);
    _2740 = NOVALUE;
    return _ret_5382;
    // SubProg join pc: 77 op: BADRETURNF (43)
    ;
}


object _23flatten(object _s_5489, object _delim_5490)
{
    object _ret_5491 = NOVALUE;
    object _x_5492 = NOVALUE;
    object _len_5493 = NOVALUE;
    object _pos_5494 = NOVALUE;
    object _temp_5512 = NOVALUE;
// skipping _2834  name type: 0
// skipping _2833  name type: 0
// skipping _2832  name type: 0
    object _2831 = NOVALUE; // 5527 2831
    object _2830 = NOVALUE; // 5526 2830
    object _2829 = NOVALUE; // 5525 2829
// skipping _2828  name type: 0
    object _2827 = NOVALUE; // 5522 2827
    object _2826 = NOVALUE; // 5521 2826
    object _2825 = NOVALUE; // 5520 2825
// skipping _2824  name type: 0
    object _2823 = NOVALUE; // 5518 2823
// skipping _2822  name type: 0
    object _2821 = NOVALUE; // 5515 2821
    object _2820 = NOVALUE; // 5514 2820
    object _2819 = NOVALUE; // 5513 2819
// skipping _2818  name type: 0
    object _2817 = NOVALUE; // 5509 2817
    object _2816 = NOVALUE; // 5508 2816
    object _2815 = NOVALUE; // 5507 2815
    object _2814 = NOVALUE; // 5506 2814
    object _2813 = NOVALUE; // 5505 2813
    object _2812 = NOVALUE; // 5504 2812
// skipping _2811  name type: 0
    object _2810 = NOVALUE; // 5502 2810
    object _2809 = NOVALUE; // 5500 2809
// skipping _2808  name type: 0
// skipping _2807  name type: 0
// skipping _2806  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg flatten pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg flatten pc: 3 op: STARTLINE (58)

    /** sequence.e:2491		ret = s*/
    // SubProg flatten pc: 5 op: ASSIGN (18)
    RefDS(_s_5489);
    DeRef(_ret_5491);
    _ret_5491 = _s_5489;
    // SubProg flatten pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg flatten pc: 10 op: STARTLINE (58)

    /** sequence.e:2492		pos = 1*/
    // SubProg flatten pc: 12 op: ASSIGN_I (113)
    _pos_5494 = 1;
    // SubProg flatten pc: 15 op: STARTLINE (58)

    /** sequence.e:2493		len = length(ret)*/
    // SubProg flatten pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5491)){
            _len_5493 = SEQ_PTR(_ret_5491)->length;
    }
    else {
        _len_5493 = 1;
    }
    // SubProg flatten pc: 20 op: STARTLINE (58)

    /** sequence.e:2494		while pos <= len do*/
    // SubProg flatten pc: 22 op: NOP2 (110)
    // SubProg flatten pc: 24 op: NOPWHILE (158)
L1: // addr: 25 pc: 24 sub: 5487 op: 158
    // SubProg flatten pc: 25 op: LESSEQ_IFW_I (123)
    if (_pos_5494 > _len_5493)
    goto L2; // [25] 183
    // SubProg flatten pc: 29 op: STARTLINE (58)

    /** sequence.e:2495			x = ret[pos]*/
    // SubProg flatten pc: 31 op: RHS_SUBS (25)
    DeRef(_x_5492);
    _2 = (object)SEQ_PTR(_ret_5491);
    _x_5492 = (object)*(((s1_ptr)_2)->base + _pos_5494);
    Ref(_x_5492);
    // SubProg flatten pc: 35 op: STARTLINE (58)

    /** sequence.e:2496			if sequence(x) then*/
    // SubProg flatten pc: 37 op: IS_A_SEQUENCE (68)
    _2809 = IS_SEQUENCE(_x_5492);
    // SubProg flatten pc: 40 op: IF (20)
    if (_2809 == 0)
    {
        _2809 = NOVALUE;
        goto L3; // [40] 171
    }
    else{
        _2809 = NOVALUE;
    }
    // SubProg flatten pc: 43 op: STARTLINE (58)

    /** sequence.e:2497				if length(delim) = 0 then*/
    // SubProg flatten pc: 45 op: LENGTH (42)
    if (IS_SEQUENCE(_delim_5490)){
            _2810 = SEQ_PTR(_delim_5490)->length;
    }
    else {
        _2810 = 1;
    }
    // SubProg flatten pc: 48 op: EQUALS_IFW_I (121)
    if (_2810 != 0)
    goto L4; // [48] 89
    // SubProg flatten pc: 52 op: STARTLINE (58)

    /** sequence.e:2498					ret = ret[1..pos-1] & flatten(x) & ret[pos+1 .. $]*/
    // SubProg flatten pc: 54 op: MINUS (10)
    _2812 = _pos_5494 - 1;
    // SubProg flatten pc: 58 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2813;
    RHS_Slice(_ret_5491, 1, _2812);
    // SubProg flatten pc: 63 op: PROC (27)
    Ref(_x_5492);
    RefDS(_5);
    _2814 = _23flatten(_x_5492, _5);
    // SubProg flatten pc: 68 op: PLUS1 (93)
    _2815 = _pos_5494 + 1;
    if (_2815 > MAXINT){
        _2815 = NewDouble((eudouble)_2815);
    }
    // SubProg flatten pc: 72 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5491)){
            _2816 = SEQ_PTR(_ret_5491)->length;
    }
    else {
        _2816 = 1;
    }
    // SubProg flatten pc: 75 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2817;
    RHS_Slice(_ret_5491, _2815, _2816);
    // SubProg flatten pc: 80 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _2817;
        concat_list[1] = _2814;
        concat_list[2] = _2813;
        Concat_N((object_ptr)&_ret_5491, concat_list, 3);
    }
    DeRefDS(_2817);
    _2817 = NOVALUE;
    DeRef(_2814);
    _2814 = NOVALUE;
    DeRefDS(_2813);
    _2813 = NOVALUE;
    // SubProg flatten pc: 86 op: ELSE (23)
    goto L5; // [86] 163
    // SubProg flatten pc: 88 op: NOP1 (159)
L4: // addr: 89 pc: 88 sub: 5487 op: 159
    // SubProg flatten pc: 89 op: STARTLINE (58)

    /** sequence.e:2500					sequence temp = ret[1..pos-1] & flatten(x)*/
    // SubProg flatten pc: 91 op: MINUS (10)
    _2819 = _pos_5494 - 1;
    // SubProg flatten pc: 95 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2820;
    RHS_Slice(_ret_5491, 1, _2819);
    // SubProg flatten pc: 100 op: PROC (27)
    Ref(_x_5492);
    RefDS(_5);
    _2821 = _23flatten(_x_5492, _5);
    // SubProg flatten pc: 105 op: CONCAT (15)
    if (IS_SEQUENCE(_2820) && IS_ATOM(_2821)) {
        Ref(_2821);
        Append(&_temp_5512, _2820, _2821);
    }
    else if (IS_ATOM(_2820) && IS_SEQUENCE(_2821)) {
    }
    else {
        Concat((object_ptr)&_temp_5512, _2820, _2821);
        DeRefDS(_2820);
        _2820 = NOVALUE;
    }
    DeRef(_2820);
    _2820 = NOVALUE;
    DeRef(_2821);
    _2821 = NOVALUE;
    // SubProg flatten pc: 109 op: STARTLINE (58)

    /** sequence.e:2501					if pos != length(ret) then*/
    // SubProg flatten pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5491)){
            _2823 = SEQ_PTR(_ret_5491)->length;
    }
    else {
        _2823 = 1;
    }
    // SubProg flatten pc: 114 op: NOTEQ_IFW_I (122)
    if (_pos_5494 == _2823)
    goto L6; // [114] 141
    // SubProg flatten pc: 118 op: STARTLINE (58)

    /** sequence.e:2502						ret = temp &  delim & ret[pos+1 .. $]*/
    // SubProg flatten pc: 120 op: PLUS1 (93)
    _2825 = _pos_5494 + 1;
    if (_2825 > MAXINT){
        _2825 = NewDouble((eudouble)_2825);
    }
    // SubProg flatten pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5491)){
            _2826 = SEQ_PTR(_ret_5491)->length;
    }
    else {
        _2826 = 1;
    }
    // SubProg flatten pc: 127 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2827;
    RHS_Slice(_ret_5491, _2825, _2826);
    // SubProg flatten pc: 132 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _2827;
        concat_list[1] = _delim_5490;
        concat_list[2] = _temp_5512;
        Concat_N((object_ptr)&_ret_5491, concat_list, 3);
    }
    DeRefDS(_2827);
    _2827 = NOVALUE;
    // SubProg flatten pc: 138 op: ELSE (23)
    goto L7; // [138] 160
    // SubProg flatten pc: 140 op: NOP1 (159)
L6: // addr: 141 pc: 140 sub: 5487 op: 159
    // SubProg flatten pc: 141 op: STARTLINE (58)

    /** sequence.e:2504						ret = temp & ret[pos+1 .. $]*/
    // SubProg flatten pc: 143 op: PLUS1 (93)
    _2829 = _pos_5494 + 1;
    if (_2829 > MAXINT){
        _2829 = NewDouble((eudouble)_2829);
    }
    // SubProg flatten pc: 147 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5491)){
            _2830 = SEQ_PTR(_ret_5491)->length;
    }
    else {
        _2830 = 1;
    }
    // SubProg flatten pc: 150 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_2831;
    RHS_Slice(_ret_5491, _2829, _2830);
    // SubProg flatten pc: 155 op: CONCAT (15)
    Concat((object_ptr)&_ret_5491, _temp_5512, _2831);
    DeRefDS(_2831);
    _2831 = NOVALUE;
    // SubProg flatten pc: 159 op: NOP1 (159)
L7: // addr: 160 pc: 159 sub: 5487 op: 159
    // SubProg flatten pc: 160 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var temp_5512
    DeRef(_temp_5512);
    _temp_5512 = NOVALUE;
    // SubProg flatten pc: 162 op: NOP1 (159)
L5: // addr: 163 pc: 162 sub: 5487 op: 159
    // SubProg flatten pc: 163 op: STARTLINE (58)

    /** sequence.e:2507				len = length(ret)*/
    // SubProg flatten pc: 165 op: LENGTH (42)
    if (IS_SEQUENCE(_ret_5491)){
            _len_5493 = SEQ_PTR(_ret_5491)->length;
    }
    else {
        _len_5493 = 1;
    }
    // SubProg flatten pc: 168 op: ELSE (23)
    goto L1; // [168] 25
    // SubProg flatten pc: 170 op: NOP1 (159)
L3: // addr: 171 pc: 170 sub: 5487 op: 159
    // SubProg flatten pc: 171 op: STARTLINE (58)

    /** sequence.e:2509				pos += 1*/
    // SubProg flatten pc: 173 op: PLUS1_I (117)
    _pos_5494 = _pos_5494 + 1;
    // SubProg flatten pc: 177 op: NOP1 (159)
    // SubProg flatten pc: 178 op: STARTLINE (58)

    /** sequence.e:2511		end while*/
    // SubProg flatten pc: 180 op: ENDWHILE (22)
    goto L1; // [180] 25
    // SubProg flatten pc: 182 op: NOP1 (159)
L2: // addr: 183 pc: 182 sub: 5487 op: 159
    // SubProg flatten pc: 183 op: STARTLINE (58)

    /** sequence.e:2513		return ret*/
    // SubProg flatten pc: 185 op: RETURNF (28)

// Exiting block BLOCK: flatten

// block var s_5489
    DeRefDS(_s_5489);

// block var delim_5490
    DeRefi(_delim_5490);

// block var x_5492
    DeRef(_x_5492);

// block var len_5493

// block var pos_5494
    DeRef(_2815);
    _2815 = NOVALUE;
    DeRef(_2825);
    _2825 = NOVALUE;
    DeRef(_2829);
    _2829 = NOVALUE;
    DeRef(_2819);
    _2819 = NOVALUE;
    DeRef(_2812);
    _2812 = NOVALUE;
    return _ret_5491;
    // SubProg flatten pc: 189 op: BADRETURNF (43)
    ;
}


object _23remove_dups(object _source_data_5859, object _proc_option_5860)
{
    object _lTo_5861 = NOVALUE;
    object _lFrom_5862 = NOVALUE;
    object _lResult_5885 = NOVALUE;
// skipping _3061  name type: 0
    object _3060 = NOVALUE; // 5893 3060
// skipping _3059  name type: 0
    object _3058 = NOVALUE; // 5891 3058
    object _3057 = NOVALUE; // 5890 3057
    object _3056 = NOVALUE; // 5888 3056
    object _3055 = NOVALUE; // 5884 3055
// skipping _3054  name type: 0
    object _3053 = NOVALUE; // 5882 3053
// skipping _3052  name type: 0
// skipping _3051  name type: 0
// skipping _3050  name type: 0
    object _3049 = NOVALUE; // 5877 3049
    object _3048 = NOVALUE; // 5876 3048
    object _3047 = NOVALUE; // 5875 3047
// skipping _3046  name type: 0
    object _3045 = NOVALUE; // 5872 3045
// skipping _3044  name type: 0
// skipping _3043  name type: 0
// skipping _3042  name type: 0
// skipping _3041  name type: 0
    object _3040 = NOVALUE; // 5864 3040
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg remove_dups pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 3 op: INTEGER_CHECK (96)
    // SubProg remove_dups pc: 5 op: STARTLINE (58)

    /** sequence.e:3111		if length(source_data) < 2 then*/
    // SubProg remove_dups pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_5859)){
            _3040 = SEQ_PTR(_source_data_5859)->length;
    }
    else {
        _3040 = 1;
    }
    // SubProg remove_dups pc: 10 op: LESS_IFW_I (119)
    if (_3040 >= 2)
    goto L1; // [10] 21
    // SubProg remove_dups pc: 14 op: STARTLINE (58)

    /** sequence.e:3112			return source_data*/
    // SubProg remove_dups pc: 16 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var proc_option_5860

// block var lTo_5861

// block var lFrom_5862

// block var lResult_5885
    DeRef(_lResult_5885);
    return _source_data_5859;
    // SubProg remove_dups pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 5857 op: 159
    // SubProg remove_dups pc: 21 op: STARTLINE (58)

    /** sequence.e:3115		if proc_option = RD_SORT then*/
    // SubProg remove_dups pc: 23 op: EQUALS_IFW_I (121)
    if (_proc_option_5860 != 3)
    goto L2; // [23] 42
    // SubProg remove_dups pc: 27 op: STARTLINE (58)

    /** sequence.e:3116			source_data = stdsort:sort(source_data)*/
    // SubProg remove_dups pc: 29 op: PROC (27)
    RefDS(_source_data_5859);
    _0 = _source_data_5859;
    _source_data_5859 = _24sort(_source_data_5859, 1);
    DeRefDS(_0);
    // SubProg remove_dups pc: 34 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 36 op: STARTLINE (58)

    /** sequence.e:3117			proc_option = RD_PRESORTED*/
    // SubProg remove_dups pc: 38 op: ASSIGN_I (113)
    _proc_option_5860 = 2;
    // SubProg remove_dups pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 5857 op: 159
    // SubProg remove_dups pc: 42 op: STARTLINE (58)

    /** sequence.e:3119		if proc_option = RD_PRESORTED then*/
    // SubProg remove_dups pc: 44 op: EQUALS_IFW_I (121)
    if (_proc_option_5860 != 2)
    goto L3; // [44] 134
    // SubProg remove_dups pc: 48 op: STARTLINE (58)

    /** sequence.e:3120			lTo = 1*/
    // SubProg remove_dups pc: 50 op: ASSIGN_I (113)
    _lTo_5861 = 1;
    // SubProg remove_dups pc: 53 op: STARTLINE (58)

    /** sequence.e:3121			lFrom = 2*/
    // SubProg remove_dups pc: 55 op: ASSIGN_I (113)
    _lFrom_5862 = 2;
    // SubProg remove_dups pc: 58 op: STARTLINE (58)

    /** sequence.e:3123			while lFrom <= length(source_data) do*/
    // SubProg remove_dups pc: 60 op: NOP2 (110)
    // SubProg remove_dups pc: 62 op: NOPWHILE (158)
L4: // addr: 63 pc: 62 sub: 5857 op: 158
    // SubProg remove_dups pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_5859)){
            _3045 = SEQ_PTR(_source_data_5859)->length;
    }
    else {
        _3045 = 1;
    }
    // SubProg remove_dups pc: 66 op: LESSEQ_IFW_I (123)
    if (_lFrom_5862 > _3045)
    goto L5; // [66] 122
    // SubProg remove_dups pc: 70 op: STARTLINE (58)

    /** sequence.e:3124				if not equal(source_data[lFrom], source_data[lTo]) then*/
    // SubProg remove_dups pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_5859);
    _3047 = (object)*(((s1_ptr)_2)->base + _lFrom_5862);
    // SubProg remove_dups pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_5859);
    _3048 = (object)*(((s1_ptr)_2)->base + _lTo_5861);
    // SubProg remove_dups pc: 80 op: EQUAL (153)
    if (_3047 == _3048)
    _3049 = 1;
    else if (IS_ATOM_INT(_3047) && IS_ATOM_INT(_3048))
    _3049 = 0;
    else
    _3049 = (compare(_3047, _3048) == 0);
    _3047 = NOVALUE;
    _3048 = NOVALUE;
    // SubProg remove_dups pc: 84 op: NOT_IFW (108)
    if (_3049 != 0)
    goto L6; // [84] 111
    _3049 = NOVALUE;
    // SubProg remove_dups pc: 87 op: STARTLINE (58)

    /** sequence.e:3125					lTo += 1*/
    // SubProg remove_dups pc: 89 op: PLUS1_I (117)
    _lTo_5861 = _lTo_5861 + 1;
    // SubProg remove_dups pc: 93 op: STARTLINE (58)

    /** sequence.e:3126					if lTo != lFrom then*/
    // SubProg remove_dups pc: 95 op: NOTEQ_IFW_I (122)
    if (_lTo_5861 == _lFrom_5862)
    goto L7; // [95] 110
    // SubProg remove_dups pc: 99 op: STARTLINE (58)

    /** sequence.e:3127						source_data[lTo] = source_data[lFrom]*/
    // SubProg remove_dups pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_source_data_5859);
    _3053 = (object)*(((s1_ptr)_2)->base + _lFrom_5862);
    // SubProg remove_dups pc: 105 op: ASSIGN_SUBS (16)
    Ref(_3053);
    _2 = (object)SEQ_PTR(_source_data_5859);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _source_data_5859 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _lTo_5861);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _3053;
    if( _1 != _3053 ){
        DeRef(_1);
    }
    _3053 = NOVALUE;
    // SubProg remove_dups pc: 109 op: NOP1 (159)
L7: // addr: 110 pc: 109 sub: 5857 op: 159
    // SubProg remove_dups pc: 110 op: NOP1 (159)
L6: // addr: 111 pc: 110 sub: 5857 op: 159
    // SubProg remove_dups pc: 111 op: STARTLINE (58)

    /** sequence.e:3130				lFrom += 1*/
    // SubProg remove_dups pc: 113 op: PLUS1_I (117)
    _lFrom_5862 = _lFrom_5862 + 1;
    // SubProg remove_dups pc: 117 op: STARTLINE (58)

    /** sequence.e:3131			end while*/
    // SubProg remove_dups pc: 119 op: ENDWHILE (22)
    goto L4; // [119] 63
    // SubProg remove_dups pc: 121 op: NOP1 (159)
L5: // addr: 122 pc: 121 sub: 5857 op: 159
    // SubProg remove_dups pc: 122 op: STARTLINE (58)

    /** sequence.e:3132			return source_data[1 .. lTo]*/
    // SubProg remove_dups pc: 124 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_3055;
    RHS_Slice(_source_data_5859, 1, _lTo_5861);
    // SubProg remove_dups pc: 129 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var source_data_5859
    DeRefDS(_source_data_5859);

// block var proc_option_5860

// block var lTo_5861

// block var lFrom_5862

// block var lResult_5885
    DeRef(_lResult_5885);
    return _3055;
    // SubProg remove_dups pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 5857 op: 159
    // SubProg remove_dups pc: 134 op: STARTLINE (58)

    /** sequence.e:3135		sequence lResult*/
    // SubProg remove_dups pc: 136 op: STARTLINE (58)

    /** sequence.e:3136		lResult = {}*/
    // SubProg remove_dups pc: 138 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_lResult_5885);
    _lResult_5885 = _5;
    // SubProg remove_dups pc: 141 op: SEQUENCE_CHECK (97)
    // SubProg remove_dups pc: 143 op: STARTLINE (58)

    /** sequence.e:3137		for i = 1 to length(source_data) do*/
    // SubProg remove_dups pc: 145 op: LENGTH (42)
    if (IS_SEQUENCE(_source_data_5859)){
            _3056 = SEQ_PTR(_source_data_5859)->length;
    }
    else {
        _3056 = 1;
    }
    // SubProg remove_dups pc: 148 op: FOR_I (125)
    {
        object _i_5887;
        _i_5887 = 1;
L8: // addr: 155 pc: 148 sub: 5857 op: 125
        if (_i_5887 > _3056){
            goto L9; // [148] 187
        }
        // SubProg remove_dups pc: 155 op: STARTLINE (58)

        /** sequence.e:3138			if not find(source_data[i], lResult) then*/
        // SubProg remove_dups pc: 157 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_source_data_5859);
        _3057 = (object)*(((s1_ptr)_2)->base + _i_5887);
        // SubProg remove_dups pc: 161 op: FIND_FROM (176)
        _3058 = find_from(_3057, _lResult_5885, 1);
        _3057 = NOVALUE;
        // SubProg remove_dups pc: 166 op: NOT_IFW (108)
        if (_3058 != 0)
        goto LA; // [166] 180
        _3058 = NOVALUE;
        // SubProg remove_dups pc: 169 op: STARTLINE (58)

        /** sequence.e:3139				lResult = append(lResult, source_data[i])*/
        // SubProg remove_dups pc: 171 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_source_data_5859);
        _3060 = (object)*(((s1_ptr)_2)->base + _i_5887);
        // SubProg remove_dups pc: 175 op: APPEND (35)
        Ref(_3060);
        Append(&_lResult_5885, _lResult_5885, _3060);
        _3060 = NOVALUE;
        // SubProg remove_dups pc: 179 op: NOP1 (159)
LA: // addr: 180 pc: 179 sub: 5857 op: 159
        // SubProg remove_dups pc: 180 op: STARTLINE (58)

        /** sequence.e:3141		end for*/
        // SubProg remove_dups pc: 182 op: ENDFOR_INT_UP1 (54)
        _i_5887 = _i_5887 + 1;
        goto L8; // [182] 155
L9: // addr: 187 pc: 182 sub: 5857 op: 54
        ;
    }
    // SubProg remove_dups pc: 187 op: STARTLINE (58)

    /** sequence.e:3142		return lResult*/
    // SubProg remove_dups pc: 189 op: RETURNF (28)

// Exiting block BLOCK: remove_dups

// block var source_data_5859
    DeRefDS(_source_data_5859);

// block var proc_option_5860

// block var lTo_5861

// block var lFrom_5862
    DeRef(_3055);
    _3055 = NOVALUE;
    return _lResult_5885;
    // SubProg remove_dups pc: 193 op: BADRETURNF (43)
    ;
}



// 0x2C5A250E
