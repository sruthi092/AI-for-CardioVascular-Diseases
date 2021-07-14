#include<iostream>
#include "Project1_A05024226_BackwardChaining.h"
#include <string>
#include <algorithm>
using namespace std;


	BackwardChaining::BackwardChaining()
	{
        /*Variable List*/
	varlt variable1("SYMPTOMS", "NI", "");
        variableList[0] = variable1;
        varlt variable2("GENDER", "NI", "");
        variableList[1] = variable2;
        varlt variable3("PREGNANT", "NI", "");
        variableList[2] = variable3;
        varlt variable4("# OF WEEKS > 18", "NI", "");
        variableList[3] = variable4;
        varlt variable5("ULTRASOUND", "NI", "");
        variableList[4] = variable5;
        varlt variable6("ELECTROCARDIOGRAM", "NI", "");
        variableList[5] = variable6;
        varlt variable7("ECHOCARDIOGRAM", "NI", "");
        variableList[6] = variable7;
        varlt variable8("IRREGULAR HEARTBEAT", "NI", "");
        variableList[7] = variable8;
        varlt variable9("BLOOD TEST", "NI", "");
        variableList[8] = variable9;
        varlt variable10("LAB TEST", "NI", "");
        variableList[9] = variable10;
        varlt variable11("EF > 40%", "NI", "");
        variableList[10] = variable11;
        varlt variable12("FAMILY MEDICAL HISTORY", "NI", "");
        variableList[11] = variable12;
        varlt variable13("CHEST PAIN DURATION > 20 MINS", "NI", "");
        variableList[12] = variable13;
        varlt variable14("MYOCARDIAL INFARCTION", "NI", "");
        variableList[13] = variable14;
        varlt variable15("CORONARY ARTERY BLOCK", "NI", "");
        variableList[14] = variable15;
        varlt variable16("PHYSICAL EXAM", "NI", "");
        variableList[15] = variable16;
        varlt variable17("CT SCAN / MRI", "NI", "");
        variableList[16] = variable17;
        varlt variable18("CHEST X-RAY", "NI", "");
        variableList[17] = variable18;
        varlt variable19("PULSE OXIMETRY", "NI", "");
        variableList[18] = variable19;
        varlt variable20("HEART CATHERIZATION", "NI", "");
        variableList[19] = variable20;
        varlt variable21("CORONARY ANGIOGRAM", "NI", "");
        variableList[20] = variable21;
        varlt variable22("HOLTER MONITOR", "NI", "");
        variableList[21] = variable22;
        varlt variable23("IMPLANTABLE LOOP RECORDER", "NI", "");
        variableList[22] = variable23;
        /*Conclusion List*/
        conclt conclusionVariable1 (10, "CVD", "");
        conclusionList[0] = conclusionVariable1;
        conclt conclusionVariable2 (20, "CVD", "");
        conclusionList[1] = conclusionVariable2;
        conclt conclusionVariable3 (30, "CVD", "");
        conclusionList[2] = conclusionVariable3;
        conclt conclusionVariable4 (40, "CVD", "");
        conclusionList[3] = conclusionVariable4;
        conclt conclusionVariable5 (50, "CVD", "");
        conclusionList[4] = conclusionVariable5;
        conclt conclusionVariable6 (60, "CVD", "");
        conclusionList[5] = conclusionVariable6;
        conclt conclusionVariable7 (70, "CVD", "");
        conclusionList[6] = conclusionVariable7;
        conclt conclusionVariable8 (80, "CVD", "");
        conclusionList[7] = conclusionVariable8;
        conclt conclusionVariable9 (90, "CVD", "");
        conclusionList[8] = conclusionVariable9;
        conclt conclusionVariable10 (100, "CVD", "");
        conclusionList[9] = conclusionVariable10;
        conclt conclusionVariable11 (110, "CVD", "");
        conclusionList[10] = conclusionVariable11;
        conclt conclusionVariable12 (120, "CVD", "");
        conclusionList[11] = conclusionVariable12;
        conclt conclusionVariable13 (130, "CVD", "");
        conclusionList[12] = conclusionVariable13;
        conclt conclusionVariable14 (140, "CVD", "");
        conclusionList[13] = conclusionVariable14;
        conclt conclusionVariable15 (150, "CVD", "");
        conclusionList[14] = conclusionVariable15;
        conclt conclusionVariable16 (160, "CVD", "");
        conclusionList[15] = conclusionVariable16;
        conclt conclusionVariable17 (170, "CVD", "");
        conclusionList[16] = conclusionVariable17;
        conclt conclusionVariable18 (180, "CVD", "");
        conclusionList[17] = conclusionVariable18;
        conclt conclusionVariable19 (190, "CVD", "");
        conclusionList[18] = conclusionVariable19;
        conclt conclusionVariable20 (200, "CVD", "");
        conclusionList[19] = conclusionVariable20;
        conclt conclusionVariable21 (210, "CVD", "");
        conclusionList[20] = conclusionVariable21;
        conclt conclusionVariable22 (220, "CVD", "");
        conclusionList[21] = conclusionVariable22;
        conclt conclusionVariable23 (230, "CVD", "");
        conclusionList[22] = conclusionVariable23;
        conclt conclusionVariable24 (240, "CVD", "");
        conclusionList[23] = conclusionVariable24;
        conclt conclusionVariable25 (250, "CVD", "");
        conclusionList[24] = conclusionVariable25;
        conclt conclusionVariable26 (260, "CVD", "");
        conclusionList[25] = conclusionVariable26;
        conclt conclusionVariable27 (270, "CVD", "");
        conclusionList[26] = conclusionVariable27;
        conclt conclusionVariable28 (280, "CVD", "");
        conclusionList[27] = conclusionVariable28;
        conclt conclusionVariable29 (290, "CVD", "");
        conclusionList[28] = conclusionVariable29;
        conclt conclusionVariable30 (300, "CVD", "");
        conclusionList[29] = conclusionVariable30;
        conclt conclusionVariable31 (310, "CVD", "");
        conclusionList[30] = conclusionVariable31;
        conclt conclusionVariable32 (320, "CVD", "");
        conclusionList[31] = conclusionVariable32;
        conclt conclusionVariable33 (330, "CVD", "");
        conclusionList[32] = conclusionVariable33;
        conclt conclusionVariable34 (340, "CVD", "");
        conclusionList[33] = conclusionVariable34;
        conclt conclusionVariable35 (350, "CVD", "");
        conclusionList[34] = conclusionVariable35;
        conclt conclusionVariable36 (360, "CVD", "");
        conclusionList[35] = conclusionVariable36;
        conclt conclusionVariable37 (370, "CVD", "");
        conclusionList[36] = conclusionVariable37;
        conclt conclusionVariable38 (380, "CVD", "");
        conclusionList[37] = conclusionVariable38;
        conclt conclusionVariable39 (390, "CVD", "");
        conclusionList[38] = conclusionVariable39;
        conclt conclusionVariable40 (400, "CVD", "");
        conclusionList[39] = conclusionVariable40;
        conclt conclusionVariable41 (410, "CVD", "");
        conclusionList[40] = conclusionVariable41;
        conclt conclusionVariable42 (420, "CVD", "");
        conclusionList[41] = conclusionVariable42;
        conclt conclusionVariable43 (430, "CVD", "");
        conclusionList[42] = conclusionVariable43;
        conclt conclusionVariable44 (440, "CVD", "");
        conclusionList[43] = conclusionVariable44;
        conclt conclusionVariable45 (450, "CVD", "");
        conclusionList[44] = conclusionVariable45;
        conclt conclusionVariable46 (460, "CVD", "");
        conclusionList[45] = conclusionVariable46;
        conclt conclusionVariable47 (470, "CVD", "");
        conclusionList[46] = conclusionVariable47;
        conclt conclusionVariable48 (480, "CVD", "");
        conclusionList[47] = conclusionVariable48;
        conclt conclusionVariable49 (490, "CVD", "");
        conclusionList[48] = conclusionVariable49;
        /*Clause Variable List*/
        clvarlt clause1(1, "SYMPTOMS");
        clauseVariableList[0] = clause1;
        clvarlt clause10(10, "SYMPTOMS");
        clauseVariableList[9] = clause10;
        clvarlt clause11(11, "GENDER");
        clauseVariableList[10] = clause11;
        clvarlt clause12(12, "PREGNANT");
        clauseVariableList[11] = clause12;
        clvarlt clause13(13, "# OF WEEKS > 18");
        clauseVariableList[12] = clause13;
        clvarlt clause19(19, "SYMPTOMS");
        clauseVariableList[18] = clause19;
        clvarlt clause20(20, "GENDER");
        clauseVariableList[19] = clause20;
        clvarlt clause21(21, "PREGNANT");
        clauseVariableList[20] = clause21;
        clvarlt clause22(22, "# OF WEEKS > 18");
        clauseVariableList[21] = clause22;
        clvarlt clause23(23, "ULTRASOUND");
        clauseVariableList[22] = clause23;
        clvarlt clause28(28, "SYMPTOMS");
        clauseVariableList[27] = clause28;
        clvarlt clause29(29, "GENDER");
        clauseVariableList[28] = clause29;
        clvarlt clause30(30, "PREGNANT");
        clauseVariableList[29] = clause30;
        clvarlt clause31(31, "# OF WEEKS > 18");
        clauseVariableList[30] = clause31;
        clvarlt clause32(32, "ULTRASOUND");
        clauseVariableList[31] = clause32;
        clvarlt clause33(33, "ECHOCARDIOGRAM");
        clauseVariableList[32] = clause33;
        clvarlt clause37(37, "SYMPTOMS");
        clauseVariableList[36] = clause37;
        clvarlt clause38(38, "GENDER");
        clauseVariableList[37] = clause38;
        clvarlt clause39(39, "PREGNANT");
        clauseVariableList[38] = clause39;
        clvarlt clause40(40, "# OF WEEKS > 18");
        clauseVariableList[39] = clause40;
        clvarlt clause41(41, "ULTRASOUND");
        clauseVariableList[40] = clause41;
        clvarlt clause42(42, "ECHOCARDIOGRAM");
        clauseVariableList[41] = clause42;
        clvarlt clause46(46, "SYMPTOMS");
        clauseVariableList[45] = clause46;
        clvarlt clause47(47, "GENDER");
        clauseVariableList[46] = clause47;
        clvarlt clause48(48, "PREGNANT");
        clauseVariableList[47] = clause48;
        clvarlt clause49(49, "ECHOCARDIOGRAM");
        clauseVariableList[48] = clause49;
        clvarlt clause55(55, "SYMPTOMS");
        clauseVariableList[54] = clause55;
        clvarlt clause56(56, "GENDER");
        clauseVariableList[55] = clause56;
        clvarlt clause57(57, "ECHOCARDIOGRAM");
        clauseVariableList[56] = clause57;
        clvarlt clause64(64, "SYMPTOMS");
        clauseVariableList[63] = clause64;
        clvarlt clause65(65, "GENDER");
        clauseVariableList[34] = clause65;
        clvarlt clause66(66, "PREGNANT");
        clauseVariableList[65] = clause66;
        clvarlt clause67(67, "ECHOCARDIOGRAM");
        clauseVariableList[66] = clause67;
        clvarlt clause73(73, "SYMPTOMS");
        clauseVariableList[72] = clause73;
        clvarlt clause74(74, "GENDER");
        clauseVariableList[73] = clause74;
        clvarlt clause75(75, "ECHOCARDIOGRAM");
        clauseVariableList[74] = clause75;
        clvarlt clause82(82, "SYMPTOMS");
        clauseVariableList[81] = clause82;
        clvarlt clause83(83, "GENDER");
        clauseVariableList[82] = clause83;
        clvarlt clause84(84, "PREGNANT");
        clauseVariableList[83] = clause84;
        clvarlt clause85(85, "ECHOCARDIOGRAM");
        clauseVariableList[84] = clause85;
        clvarlt clause91(91, "SYMPTOMS");
        clauseVariableList[90] = clause91;
        clvarlt clause92(92, "GENDER");
        clauseVariableList[91] = clause92;
        clvarlt clause93(93, "ECHOCARDIOGRAM");
        clauseVariableList[92] = clause93;
        clvarlt clause100(100, "SYMPTOMS");
        clauseVariableList[99] = clause100;
        clvarlt clause101(101, "GENDER");
        clauseVariableList[100] = clause101;
        clvarlt clause102(102, "PREGNANT");
        clauseVariableList[101] = clause102;
        clvarlt clause103(103, "ECHOCARDIOGRAM");
        clauseVariableList[102] = clause103;
        clvarlt clause104(104, "CHEST PAIN DURATION > 20 MINS");
        clauseVariableList[103] = clause104;
        clvarlt clause105(105, "BLOOD TEST");
        clauseVariableList[104] = clause105;
        clvarlt clause109(109, "SYMPTOMS");
        clauseVariableList[108] = clause109;
        clvarlt clause110(110, "GENDER");
        clauseVariableList[109] = clause110;
        clvarlt clause111(111, "ECHOCARDIOGRAM");
        clauseVariableList[110] = clause111;
        clvarlt clause112(112, "CHEST PAIN DURATION > 20 MINS");
        clauseVariableList[111] = clause112;
        clvarlt clause113(113, "BLOOD TEST");
        clauseVariableList[112] = clause113;
        clvarlt clause118(118, "SYMPTOMS");
        clauseVariableList[117] = clause118;
        clvarlt clause119(119, "GENDER");
        clauseVariableList[118] = clause119;
        clvarlt clause120(120, "PREGNANT");
        clauseVariableList[119] = clause120;
        clvarlt clause121(121, "ECHOCARDIOGRAM");
        clauseVariableList[120] = clause121;
        clvarlt clause122(122, "CHEST PAIN DURATION > 20 MINS");
        clauseVariableList[121] = clause122;
        clvarlt clause123(123, "BLOOD TEST");
        clauseVariableList[122] = clause123;
        clvarlt clause124(124, "ELECTROCARDIOGRAM");
        clauseVariableList[123] = clause124;
        clvarlt clause125(125, "MYOCARDIAL INFARCTION");
        clauseVariableList[124] = clause125;
        clvarlt clause126(126, "CORONARY ARTERY BLOCK");
        clauseVariableList[125] = clause126;
        clvarlt clause127(127, "SYMPTOMS");
        clauseVariableList[126] = clause127;
        clvarlt clause128(128, "GENDER");
        clauseVariableList[127] = clause128;
        clvarlt clause129(129, "ECHOCARDIOGRAM");
        clauseVariableList[128] = clause129;
        clvarlt clause130(130, "CHEST PAIN DURATION > 20 MINS");
        clauseVariableList[129] = clause130;
        clvarlt clause131(131, "BLOOD TEST");
        clauseVariableList[130] = clause131;
        clvarlt clause132(132, "ELECTROCARDIOGRAM");
        clauseVariableList[131] = clause132;
        clvarlt clause133(133, "MYOCARDIAL INFARCTION");
        clauseVariableList[132] = clause133;
        clvarlt clause134(134, "CORONARY ARTERY BLOCK");
        clauseVariableList[133] = clause134;
        clvarlt clause136(136, "SYMPTOMS");
        clauseVariableList[135] = clause136;
        clvarlt clause137(137, "GENDER");
        clauseVariableList[136] = clause137;
        clvarlt clause138(138, "PREGNANT");
        clauseVariableList[137] = clause138;
        clvarlt clause139(139, "ECHOCARDIOGRAM");
        clauseVariableList[138] = clause139;
        clvarlt clause140(140, "CHEST PAIN DURATION > 20 MINS");
        clauseVariableList[139] = clause140;
        clvarlt clause141(141, "BLOOD TEST");
        clauseVariableList[140] = clause141;
        clvarlt clause142(142, "ELECTROCARDIOGRAM");
        clauseVariableList[141] = clause142;
        clvarlt clause143(143, "MYOCARDIAL INFARCTION");
        clauseVariableList[142] = clause143;
        clvarlt clause144(144, "CORONARY ARTERY BLOCK");
        clauseVariableList[143] = clause144;
        clvarlt clause145(145, "SYMPTOMS");
        clauseVariableList[144] = clause145;
        clvarlt clause146(146, "GENDER");
        clauseVariableList[145] = clause146;
        clvarlt clause147(147, "ECHOCARDIOGRAM");
        clauseVariableList[146] = clause147;
        clvarlt clause148(148, "CHEST PAIN DURATION > 20 MINS");
        clauseVariableList[147] = clause148;
        clvarlt clause149(149, "BLOOD TEST");
        clauseVariableList[148] = clause149;
        clvarlt clause150(150, "ELECTROCARDIOGRAM");
        clauseVariableList[149] = clause150;
        clvarlt clause151(151, "MYOCARDIAL INFARCTION");
        clauseVariableList[150] = clause151;
        clvarlt clause152(152, "CORONARY ARTERY BLOCK");
        clauseVariableList[151] = clause152;
        clvarlt clause154(154, "SYMPTOMS");
        clauseVariableList[153] = clause154;
        clvarlt clause155(155, "GENDER");
        clauseVariableList[154] = clause155;
        clvarlt clause156(156, "PREGNANT");
        clauseVariableList[155] = clause156;
        clvarlt clause157(157, "ECHOCARDIOGRAM");
        clauseVariableList[156] = clause157;
        clvarlt clause158(158, "PHYSICAL EXAM");
        clauseVariableList[157] = clause158;
        clvarlt clause163(163, "SYMPTOMS");
        clauseVariableList[162] = clause163;
        clvarlt clause164(164, "GENDER");
        clauseVariableList[163] = clause164;
        clvarlt clause165(165, "ECHOCARDIOGRAM");
        clauseVariableList[164] = clause165;
        clvarlt clause166(166, "PHYSICAL EXAM");
        clauseVariableList[165] = clause166;
        clvarlt clause172(172, "SYMPTOMS");
        clauseVariableList[171] = clause172;
        clvarlt clause173(173, "GENDER");
        clauseVariableList[172] = clause173;
        clvarlt clause174(174, "PREGNANT");
        clauseVariableList[173] = clause174;
        clvarlt clause175(175, "ECHOCARDIOGRAM");
        clauseVariableList[174] = clause175;
        clvarlt clause176(176, "PHYSICAL EXAM");
        clauseVariableList[175] = clause176;
        clvarlt clause181(181, "SYMPTOMS");
        clauseVariableList[180] = clause181;
        clvarlt clause182(182, "GENDER");
        clauseVariableList[181] = clause182;
        clvarlt clause183(183, "ECHOCARDIOGRAM");
        clauseVariableList[182] = clause183;
        clvarlt clause184(184, "PHYSICAL EXAM");
        clauseVariableList[183] = clause184;
        clvarlt clause190(190, "SYMPTOMS");
        clauseVariableList[189] = clause190;
        clvarlt clause191(191, "GENDER");
        clauseVariableList[190] = clause191;
        clvarlt clause192(192, "PREGNANT");
        clauseVariableList[191] = clause192;
        clvarlt clause193(193, "ECHOCARDIOGRAM");
        clauseVariableList[192] = clause193;
        clvarlt clause194(194, "IRREGULAR HEARTBEAT");
        clauseVariableList[193] = clause194;
        clvarlt clause199(199, "SYMPTOMS");
        clauseVariableList[198] = clause199;
        clvarlt clause200(200, "GENDER");
        clauseVariableList[199] = clause200;
        clvarlt clause201(201, "ECHOCARDIOGRAM");
        clauseVariableList[200] = clause201;
        clvarlt clause202(202, "IRREGULAR HEARTBEAT");
        clauseVariableList[201] = clause202;
        clvarlt clause208(208, "SYMPTOMS");
        clauseVariableList[207] = clause208;
        clvarlt clause209(209, "GENDER");
        clauseVariableList[208] = clause209;
        clvarlt clause210(210, "PREGNANT");
        clauseVariableList[209] = clause210;
        clvarlt clause211(211, "ECHOCARDIOGRAM");
        clauseVariableList[210] = clause211;
        clvarlt clause212(212, "IRREGULAR HEARTBEAT");
        clauseVariableList[211] = clause212;
        clvarlt clause213(213, "LAB TEST");
        clauseVariableList[212] = clause213;
        clvarlt clause214(214, "CT SCAN / MRI");
        clauseVariableList[213] = clause214;
        clvarlt clause217(217, "SYMPTOMS");
        clauseVariableList[216] = clause217;
        clvarlt clause218(218, "GENDER");
        clauseVariableList[217] = clause218;
        clvarlt clause219(219, "ECHOCARDIOGRAM");
        clauseVariableList[218] = clause219;
        clvarlt clause220(220, "IRREGULAR HEARTBEAT");
        clauseVariableList[219] = clause220;
        clvarlt clause221(221, "LAB TEST");
        clauseVariableList[220] = clause221;
        clvarlt clause222(222, "CT SCAN / MRI");
        clauseVariableList[221] = clause222;
        clvarlt clause226(226, "SYMPTOMS");
        clauseVariableList[225] = clause226;
        clvarlt clause227(227, "GENDER");
        clauseVariableList[226] = clause227;
        clvarlt clause228(228, "PREGNANT");
        clauseVariableList[227] = clause228;
        clvarlt clause229(229, "ECHOCARDIOGRAM");
        clauseVariableList[228] = clause229;
        clvarlt clause230(230, "IRREGULAR HEARTBEAT");
        clauseVariableList[229] = clause230;
        clvarlt clause235(235, "SYMPTOMS");
        clauseVariableList[234] = clause235;
        clvarlt clause236(236, "GENDER");
        clauseVariableList[235] = clause236;
        clvarlt clause237(237, "ECHOCARDIOGRAM");
        clauseVariableList[236] = clause237;
        clvarlt clause238(238, "IRREGULAR HEARTBEAT");
        clauseVariableList[237] = clause238;
        clvarlt clause244(244, "SYMPTOMS");
        clauseVariableList[243] = clause244;
        clvarlt clause245(245, "GENDER");
        clauseVariableList[244] = clause245;
        clvarlt clause246(246, "PREGNANT");
        clauseVariableList[245] = clause246;
        clvarlt clause247(247, "ECHOCARDIOGRAM");
        clauseVariableList[246] = clause247;
        clvarlt clause248(248, "IRREGULAR HEARTBEAT");
        clauseVariableList[247] = clause248;
        clvarlt clause249(249, "BLOOD TEST");
        clauseVariableList[248] = clause249;
        clvarlt clause250(250, "ELECTROCARDIOGRAM");
        clauseVariableList[249] = clause250;
        clvarlt clause251(251, "EF > 40%");
        clauseVariableList[250] = clause251;
        clvarlt clause253(253, "SYMPTOMS");
        clauseVariableList[252] = clause253;
        clvarlt clause254(254, "GENDER");
        clauseVariableList[253] = clause254;
        clvarlt clause255(255, "ECHOCARDIOGRAM");
        clauseVariableList[254] = clause255;
        clvarlt clause256(256, "IRREGULAR HEARTBEAT");
        clauseVariableList[255] = clause256;
        clvarlt clause257(257, "BLOOD TEST");
        clauseVariableList[256] = clause257;
        clvarlt clause258(258, "ELECTROCARDIOGRAM");
        clauseVariableList[257] = clause258;
        clvarlt clause259(259, "EF > 40%");
        clauseVariableList[258] = clause259;
        clvarlt clause262(262, "SYMPTOMS");
        clauseVariableList[261] = clause262;
        clvarlt clause263(263, "GENDER");
        clauseVariableList[262] = clause263;
        clvarlt clause264(264, "PREGNANT");
        clauseVariableList[263] = clause264;
        clvarlt clause265(265, "ECHOCARDIOGRAM");
        clauseVariableList[264] = clause265;
        clvarlt clause266(266, "IRREGULAR HEARTBEAT");
        clauseVariableList[265] = clause266;
        clvarlt clause267(267, "BLOOD TEST");
        clauseVariableList[266] = clause267;
        clvarlt clause268(268, "LAB TEST");
        clauseVariableList[267] = clause268;
        clvarlt clause269(269, "ELECTROCARDIOGRAM");
        clauseVariableList[268] = clause269;
        clvarlt clause270(270, "EF > 40%");
        clauseVariableList[269] = clause270;
        clvarlt clause271(271, "SYMPTOMS");
        clauseVariableList[270] = clause271;
        clvarlt clause272(272, "GENDER");
        clauseVariableList[271] = clause272;
        clvarlt clause273(273, "ECHOCARDIOGRAM");
        clauseVariableList[272] = clause273;
        clvarlt clause274(274, "IRREGULAR HEARTBEAT");
        clauseVariableList[273] = clause274;
        clvarlt clause275(275, "BLOOD TEST");
        clauseVariableList[274] = clause275;
        clvarlt clause276(276, "LAB TEST");
        clauseVariableList[275] = clause276;
        clvarlt clause277(277, "ELECTROCARDIOGRAM");
        clauseVariableList[276] = clause277;
        clvarlt clause278(278, "EF > 40%");
        clauseVariableList[277] = clause278;
        clvarlt clause280(280, "SYMPTOMS");
        clauseVariableList[279] = clause280;
        clvarlt clause281(281, "GENDER");
        clauseVariableList[280] = clause281;
        clvarlt clause282(282, "PREGNANT");
        clauseVariableList[281] = clause282;
        clvarlt clause283(283, "ECHOCARDIOGRAM");
        clauseVariableList[282] = clause283;
        clvarlt clause284(284, "ELECTROCARDIOGRAM");
        clauseVariableList[283] = clause284;
        clvarlt clause289(289, "SYMPTOMS");
        clauseVariableList[288] = clause289;
        clvarlt clause290(290, "GENDER");
        clauseVariableList[289] = clause290;
        clvarlt clause291(291, "ECHOCARDIOGRAM");
        clauseVariableList[290] = clause291;
        clvarlt clause292(292, "ELECTROCARDIOGRAM");
        clauseVariableList[291] = clause292;
        clvarlt clause298(298, "SYMPTOMS");
        clauseVariableList[297] = clause298;
        clvarlt clause299(299, "GENDER");
        clauseVariableList[298] = clause299;
        clvarlt clause300(300, "PREGNANT");
        clauseVariableList[299] = clause300;
        clvarlt clause301(301, "ECHOCARDIOGRAM");
        clauseVariableList[300] = clause301;
        clvarlt clause302(302, "ELECTROCARDIOGRAM");
        clauseVariableList[301] = clause302;
        clvarlt clause307(307, "SYMPTOMS");
        clauseVariableList[306] = clause307;
        clvarlt clause308(308, "GENDER");
        clauseVariableList[307] = clause308;
        clvarlt clause309(309, "ECHOCARDIOGRAM");
        clauseVariableList[308] = clause309;
        clvarlt clause310(310, "ELECTROCARDIOGRAM");
        clauseVariableList[309] = clause310;
        clvarlt clause316(316, "SYMPTOMS");
        clauseVariableList[315] = clause316;
        clvarlt clause317(317, "GENDER");
        clauseVariableList[316] = clause317;
        clvarlt clause318(318, "PREGNANT");
        clauseVariableList[317] = clause318;
        clvarlt clause319(319, "ECHOCARDIOGRAM");
        clauseVariableList[318] = clause319;
        clvarlt clause320(320, "IRREGULAR HEARTBEAT");
        clauseVariableList[319] = clause320;
        clvarlt clause321(321, "CHEST X-RAY");
        clauseVariableList[320] = clause321;
        clvarlt clause322(322, "PULSE OXIMETRY");
        clauseVariableList[321] = clause322;
        clvarlt clause325(325, "SYMPTOMS");
        clauseVariableList[324] = clause325;
        clvarlt clause326(326, "GENDER");
        clauseVariableList[325] = clause326;
        clvarlt clause327(327, "ECHOCARDIOGRAM");
        clauseVariableList[326] = clause327;
        clvarlt clause328(328, "IRREGULAR HEARTBEAT");
        clauseVariableList[327] = clause328;
        clvarlt clause329(329, "CHEST X-RAY");
        clauseVariableList[328] = clause329;
        clvarlt clause330(330, "PULSE OXIMETRY");
        clauseVariableList[329] = clause330;
        clvarlt clause334(334, "SYMPTOMS");
        clauseVariableList[333] = clause334;
        clvarlt clause335(335, "GENDER");
        clauseVariableList[334] = clause335;
        clvarlt clause336(336, "PREGNANT");
        clauseVariableList[335] = clause336;
        clvarlt clause337(337, "ECHOCARDIOGRAM");
        clauseVariableList[336] = clause337;
        clvarlt clause338(338, "IRREGULAR HEARTBEAT");
        clauseVariableList[337] = clause338;
        clvarlt clause339(339, "CHEST X-RAY");
        clauseVariableList[338] = clause339;
        clvarlt clause340(340, "PULSE OXIMETRY");
        clauseVariableList[339] = clause340;
        clvarlt clause341(341, "HEART CATHERIZATION");
        clauseVariableList[340] = clause341;
        clvarlt clause343(343, "SYMPTOMS");
        clauseVariableList[342] = clause343;
        clvarlt clause344(344, "GENDER");
        clauseVariableList[343] = clause344;
        clvarlt clause345(345, "ECHOCARDIOGRAM");
        clauseVariableList[344] = clause345;
        clvarlt clause346(346, "IRREGULAR HEARTBEAT");
        clauseVariableList[345] = clause346;
        clvarlt clause347(347, "CHEST X-RAY");
        clauseVariableList[346] = clause347;
        clvarlt clause348(348, "PULSE OXIMETRY");
        clauseVariableList[347] = clause348;
        clvarlt clause349(349, "HEART CATHERIZATION");
        clauseVariableList[348] = clause349;
        clvarlt clause352(352, "SYMPTOMS");
        clauseVariableList[351] = clause352;
        clvarlt clause353(353, "GENDER");
        clauseVariableList[352] = clause353;
        clvarlt clause354(354, "PREGNANT");
        clauseVariableList[353] = clause354;
        clvarlt clause355(355, "ECHOCARDIOGRAM");
        clauseVariableList[354] = clause355;
        clvarlt clause356(356, "IRREGULAR HEARTBEAT");
        clauseVariableList[355] = clause356;
        clvarlt clause357(357, "CHEST X-RAY");
        clauseVariableList[356] = clause357;
        clvarlt clause361(361, "SYMPTOMS");
        clauseVariableList[360] = clause361;
        clvarlt clause362(362, "GENDER");
        clauseVariableList[361] = clause362;
        clvarlt clause363(363, "ECHOCARDIOGRAM");
        clauseVariableList[362] = clause363;
        clvarlt clause364(364, "IRREGULAR HEARTBEAT");
        clauseVariableList[363] = clause364;
        clvarlt clause365(365, "CHEST X-RAY");
        clauseVariableList[364] = clause365;
        clvarlt clause370(370, "SYMPTOMS");
        clauseVariableList[369] = clause370;
        clvarlt clause371(371, "GENDER");
        clauseVariableList[370] = clause371;
        clvarlt clause372(372, "PREGNANT");
        clauseVariableList[371] = clause372;
        clvarlt clause373(373, "ECHOCARDIOGRAM");
        clauseVariableList[372] = clause373;
        clvarlt clause374(374, "CHEST X-RAY");
        clauseVariableList[373] = clause374;
        clvarlt clause375(375, "ELECTROCARDIOGRAM");
        clauseVariableList[374] = clause375;
        clvarlt clause376(376, "CORONARY ANGIOGRAM");
        clauseVariableList[375] = clause376;
        clvarlt clause379(379, "SYMPTOMS");
        clauseVariableList[378] = clause379;
        clvarlt clause380(380, "GENDER");
        clauseVariableList[379] = clause380;
        clvarlt clause381(381, "ECHOCARDIOGRAM");
        clauseVariableList[380] = clause381;
        clvarlt clause382(382, "CHEST X-RAY");
        clauseVariableList[381] = clause382;
        clvarlt clause383(383, "ELECTROCARDIOGRAM");
        clauseVariableList[382] = clause383;
        clvarlt clause384(384, "CORONARY ANGIOGRAM");
        clauseVariableList[383] = clause384;
        clvarlt clause388(388, "SYMPTOMS");
        clauseVariableList[387] = clause388;
        clvarlt clause389(389, "GENDER");
        clauseVariableList[388] = clause389;
        clvarlt clause390(390, "PREGNANT");
        clauseVariableList[389] = clause390;
        clvarlt clause391(391, "ECHOCARDIOGRAM");
        clauseVariableList[390] = clause391;
        clvarlt clause392(392, "CHEST X-RAY");
        clauseVariableList[391] = clause392;
        clvarlt clause393(393, "ELECTROCARDIOGRAM");
        clauseVariableList[392] = clause393;
        clvarlt clause394(394, "CORONARY ANGIOGRAM");
        clauseVariableList[393] = clause394;
        clvarlt clause397(397, "SYMPTOMS");
        clauseVariableList[396] = clause397;
        clvarlt clause398(398, "GENDER");
        clauseVariableList[397] = clause398;
        clvarlt clause399(399, "ECHOCARDIOGRAM");
        clauseVariableList[398] = clause399;
        clvarlt clause400(400, "CHEST X-RAY");
        clauseVariableList[399] = clause400;
        clvarlt clause401(401, "ELECTROCARDIOGRAM");
        clauseVariableList[400] = clause401;
        clvarlt clause402(402, "CORONARY ANGIOGRAM");
        clauseVariableList[401] = clause402;
        clvarlt clause406(406, "SYMPTOMS");
        clauseVariableList[405] = clause406;
        clvarlt clause407(407, "GENDER");
        clauseVariableList[406] = clause407;
        clvarlt clause408(408, "PREGNANT");
        clauseVariableList[407] = clause408;
        clvarlt clause409(409, "ECHOCARDIOGRAM");
        clauseVariableList[408] = clause409;
        clvarlt clause410(410, "IRREGULAR HEARTBEAT");
        clauseVariableList[409] = clause410;
        clvarlt clause411(411, "CHEST X-RAY");
        clauseVariableList[410] = clause411;
        clvarlt clause412(412, "PULSE OXIMETRY");
        clauseVariableList[411] = clause412;
        clvarlt clause413(413, "HOLTER MONITOR");
        clauseVariableList[412] = clause413;
        clvarlt clause415(415, "SYMPTOMS");
        clauseVariableList[414] = clause415;
        clvarlt clause416(416, "GENDER");
        clauseVariableList[415] = clause416;
        clvarlt clause417(417, "ECHOCARDIOGRAM");
        clauseVariableList[416] = clause417;
        clvarlt clause418(418, "IRREGULAR HEARTBEAT");
        clauseVariableList[417] = clause418;
        clvarlt clause419(419, "CHEST X-RAY");
        clauseVariableList[418] = clause419;
        clvarlt clause420(420, "PULSE OXIMETRY");
        clauseVariableList[419] = clause420;
        clvarlt clause421(421, "HOLTER MONITOR");
        clauseVariableList[420] = clause421;
        clvarlt clause424(424, "SYMPTOMS");
        clauseVariableList[423] = clause424;
        clvarlt clause425(425, "GENDER");
        clauseVariableList[424] = clause425;
        clvarlt clause426(426, "PREGNANT");
        clauseVariableList[425] = clause426;
        clvarlt clause427(427, "ECHOCARDIOGRAM");
        clauseVariableList[426] = clause427;
        clvarlt clause428(428, "IRREGULAR HEARTBEAT");
        clauseVariableList[427] = clause428;
        clvarlt clause429(429, "CHEST X-RAY");
        clauseVariableList[428] = clause429;
        clvarlt clause430(430, "PULSE OXIMETRY");
        clauseVariableList[429] = clause430;
        clvarlt clause431(431, "HOLTER MONITOR");
        clauseVariableList[430] = clause431;
        clvarlt clause432(432, "IMPLANTABLE LOOP RECORDER");
        clauseVariableList[431] = clause432;
        clvarlt clause433(433, "SYMPTOMS");
        clauseVariableList[432] = clause433;
        clvarlt clause434(434, "GENDER");
        clauseVariableList[433] = clause434;
        clvarlt clause435(435, "ECHOCARDIOGRAM");
        clauseVariableList[434] = clause435;
        clvarlt clause436(436, "IRREGULAR HEARTBEAT");
        clauseVariableList[435] = clause436;
        clvarlt clause437(437, "CHEST X-RAY");
        clauseVariableList[436] = clause437;
        clvarlt clause438(438, "PULSE OXIMETRY");
        clauseVariableList[437] = clause438;
        clvarlt clause439(439, "HOLTER MONITOR");
        clauseVariableList[438] = clause439;
        clvarlt clause440(440, "IMPLANTABLE LOOP RECORDER");
        clauseVariableList[439] = clause440;

    }

	void BackwardChaining::conclusionStackUpdate(int ruleNumber, int clauseNumber)
	{
		concsk stack1(ruleNumber, clauseNumber);
		conclusionStack.push(stack1);
	}

	int BackwardChaining:: determine_variable_list(string variable)
	{
		int pos = -1;
		string findings, input, value;
		for(int i = 0; i < 23; i++)
		{
			if (variable.compare(variableList[i].getName()) == 0)
			{
				if (variableList[i].getDetail() == "NI")
				{
					if (variableList[i].getName().compare("SYMPTOMS") == 0)
					{
						cout<< "In case you are facing one or more of theses symptoms - Chest Pain/ Palipitations/ Shortness of Breath/ Fatigue/ Dizziness/ Swollen feet and ankles, input YES else NO\n";
					}
					cout<< "Please provide your input for "<< variableList[i].getName()<< " :: ";
					value = variableList[i].getName();
					getline(cin, input);
					transform(input.begin(), input.end(), input.begin(), ::toupper);
					if(input.compare("MALE") == 0)
					{
						variableList[2].setDetail("I");
						variableList[3].setDetail("I");
						variableList[4].setDetail("I");
					}
					if(value.compare("ECHOCARDIOGRAM") == 0)
					{
						if (! input.compare("MYOCARDIAL DYSFUNCTION") == 0)
						{
							variableList[12].setDetail("I");
							variableList[13].setDetail("I");
							variableList[14].setDetail("I");
						}
						if (input.compare("ENLARGED LEFT VENTRICLE") == 0)
						{
							variableList[8].setDetail("I");
							variableList[5].setDetail("I");
						}
						 if (input.compare("IRREGULAR HEART SIZE") == 0)
                                                {
                                                        variableList[16].setDetail("I");
                                                        variableList[15].setDetail("I");
                                                }
						if (input.compare("HEART WALL DAMAGE") == 0)
						{
							variableList[5].setDetail("I");
							variableList[8].setDetail("I");
							variableList[15].setDetail("I");
						}
						if (input.compare("IRREGULAR SIZED RIGHT VENTRICLE") == 0)
						{
							variableList[8].setDetail("I");
							variableList[9].setDetail("I");
							variableList[10].setDetail("I");
							variableList[16].setDetail("I");
							variableList[15].setDetail("I");
							variableList[7].setDetail("I");
						}
						if (input.compare("HEART VALVE LEAKAGE") == 0)
						{
							variableList[8].setDetail("I");
							variableList[5].setDetail("I");
							variableList[15].setDetail("I");
							variableList[9].setDetail("I");
							variableList[16].setDetail("I");
							variableList[10].setDetail("I");
						}
						 if (input.compare("HEART MUSCLE DAMAGE" ) == 0)
                                                {
                                                        variableList[8].setDetail("I");
                                                        variableList[5].setDetail("I");
                                                        variableList[15].setDetail("I");
                                                        variableList[9].setDetail("I");
                                                        variableList[16].setDetail("I");
                                                        variableList[19].setDetail("I");
                                                        variableList[20].setDetail("I");
                                                        variableList[10].setDetail("I");
                                                }
						if (input.compare("IRREGULAR SIZED RIGHT VENTRICLE") == 0)
                                                {
                                                        variableList[8].setDetail("I");
                                                        variableList[9].setDetail("I");
                                                        variableList[10].setDetail("I");
                                                        variableList[16].setDetail("I");
                                                        variableList[15].setDetail("I");
                                                        variableList[7].setDetail("I");
                                                }
						 if (input.compare("BACKWARD BLOOD LEAKAGE") == 0)
                                                {
                                                        variableList[8].setDetail("I");
                                                        variableList[9].setDetail("I");
                                                        variableList[18].setDetail("I");
                                                        variableList[16].setDetail("I");
                                                        variableList[15].setDetail("I");
                                                        variableList[19].setDetail("I");
                                                }


					}
					variableList[i].setDetail("I");
					variableList[i].setValue(input);
				}
				if ((i == 2) && (input.compare("NO") == 0))
				{
					 variableList[3].setDetail("I");
                                         variableList[4].setDetail("I");
				}
				pos = i;
				return pos;
			}
		}
		return pos;
	}

	int BackwardChaining:: determine_conclusion_list(string variable)
	{
		int ruleNumber = -1;
		for (int i = 0; i < 50; i++)
		{
			if(variable.compare(conclusionList[i].getConclusion()) == 0)
			{
				ruleNumber = conclusionList[i].getRule();
				return ruleNumber;
			}
		}
		return ruleNumber;
	}

	diagnosis BackwardChaining::knowledgeBase(int ruleNumber, unordered_map<string, string> &kbmap)
	{
		diagnosis value("NA", "NA", "NA", "NA");
		if ((ruleNumber == 10) && (kbmap.find("SYMPTOMS")->second == "NO"))
                {
                        value.setName("CVD");
						value.setValue("No");
                        value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                        value.setFlag("Diagnosed");
                        return value;
                }

        if ((ruleNumber == 20) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "YES") && (kbmap.find("# OF WEEKS > 18")->second == "NO"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 30) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "YES") && (kbmap.find("# OF WEEKS > 18")->second == "YES") && (kbmap.find("ULTRASOUND")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 40) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "YES") && (kbmap.find("# OF WEEKS > 18")->second == "YES") && (kbmap.find("ULTRASOUND")->second == "HEART ABNORMALITY") && (kbmap.find("ECHOCARDIOGRAM")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 50) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "YES") && (kbmap.find("# OF WEEKS > 18")->second == "YES") && (kbmap.find("ULTRASOUND")->second == "HEART ABNORMALITY") && (kbmap.find("ECHOCARDIOGRAM")->second == "ABNORMAL BLOOD FLOW"))
                        {
                                value.setName("CVD");
                                value.setValue("CONGENITAL HEART DISEASE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from CONGENITAL HEART DISEASE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 60) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 70) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 80) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "THICKENED SEPTAL WALL"))
                        {
                                value.setName("CVD");
                                value.setValue("HYPERTROPHIC CARDIOMYOPATHY");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from HYPERTROPHIC CARDIOMYOPATHY.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 90) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "THICKENED SEPTAL WALL"))
                        {
                                value.setName("CVD");
                                value.setValue("HYPERTROPHIC CARDIOMYOPATHY");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from HYPERTROPHIC CARDIOMYOPATHY.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 100) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "ABNORMAL AORTA"))
                        {
                                value.setName("CVD");
                                value.setValue("ANEURYSM");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from ANEURYSM.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 110) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "ABNORMAL AORTA"))
                        {
                                value.setName("CVD");
                                value.setValue("ANEURYSM");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from ANEURYSM.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 120) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "MYOCARDIAL DYSFUNCTION") && (kbmap.find("CHEST PAIN DURATION > 20 MINS")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 130) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "MYOCARDIAL DYSFUNCTION") && (kbmap.find("CHEST PAIN DURATION > 20 MINS")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 140) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "MYOCARDIAL DYSFUNCTION") && (kbmap.find("CHEST PAIN DURATION > 20 MINS")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "TROPONIN LEVEL INCREASE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "ABNORMAL HEART READING") && (kbmap.find("MYOCARDIAL INFARCTION")->second == "YES") && (kbmap.find("CORONARY ARTERY BLOCK")->second == "COMPLETE"))
                        {
                                value.setName("CVD");
                                value.setValue("MYOCARDIAL INFARCTION STEMI");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from MYOCARDIAL INFARCTION STEMI.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 150) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "MYOCARDIAL DYSFUNCTION") && (kbmap.find("CHEST PAIN DURATION > 20 MINS")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "TROPONIN LEVEL INCREASE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "ABNORMAL HEART READING") && (kbmap.find("MYOCARDIAL INFARCTION")->second == "YES") && (kbmap.find("CORONARY ARTERY BLOCK")->second == "COMPLETE"))
                        {
                                value.setName("CVD");
                                value.setValue("MYOCARDIAL INFARCTION STEMI");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from MYOCARDIAL INFARCTION STEMI.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 160) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "MYOCARDIAL DYSFUNCTION") && (kbmap.find("CHEST PAIN DURATION > 20 MINS")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "TROPONIN LEVEL INCREASE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "ABNORMAL HEART READING") && (kbmap.find("MYOCARDIAL INFARCTION")->second == "YES") && (kbmap.find("CORONARY ARTERY BLOCK")->second == "PARTIAL"))
                        {
                                value.setName("CVD");
                                value.setValue("MYOCARDIAL INFARCTION NSTEMI");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from MYOCARDIAL INFARCTION NSTEMI.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 170) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "MYOCARDIAL DYSFUNCTION") && (kbmap.find("CHEST PAIN DURATION > 20 MINS")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "TROPONIN LEVEL INCREASE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "ABNORMAL HEART READING") && (kbmap.find("MYOCARDIAL INFARCTION")->second == "YES") && (kbmap.find("CORONARY ARTERY BLOCK")->second == "PARTIAL"))
                        {
                                value.setName("CVD");
                                value.setValue("MYOCARDIAL INFARCTION NSTEMI");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from MYOCARDIAL INFARCTION NSTEMI.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 180) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "NORMAL READING") && (kbmap.find("PHYSICAL EXAM")->second == "NEGATIVE"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 190) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "NORMAL READING") && (kbmap.find("PHYSICAL EXAM")->second == "NEGATIVE"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 200) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "ENLARGED LEFT VENTRICLE") && (kbmap.find("PHYSICAL EXAM")->second == "VOLUME OVERLOAD"))
                        {
                                value.setName("CVD");
                                value.setValue("DILATED CARDIOMYOPATHY");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from DILATED CARDIOMYOPATHY.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 210) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "ENLARGED LEFT VENTRICLE") && (kbmap.find("PHYSICAL EXAM")->second == "VOLUME OVERLOAD"))
                        {
                                value.setName("CVD");
                                value.setValue("DILATED CARDIOMYOPATHY");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from DILATEDCARDIO MYOPATHY.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 220) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART WALL DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "NO"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 230) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART WALL DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "NO"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 240) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART WALL DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("LAB TEST")->second == "POSITIVE") && (kbmap.find("CT SCAN / MRI")->second == "PLAQUE IN ARTERIES"))
                        {
                                value.setName("CVD");
                                value.setValue("CORONARY HEART DISEASE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from CORONARY HEART DISEASE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 250) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART WALL DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("LAB TEST")->second == "POSITIVE") && (kbmap.find("CT SCAN / MRI")->second == "PLAQUE IN ARTERIES"))
                        {
                                value.setName("CVD");
                                value.setValue("CORONARY HEART DISEASE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from CORONARY HEART DISEASE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 260) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR HEART SIZE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "NO"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 270) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR HEART SIZE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "NO"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }
        if ((ruleNumber == 280) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR HEART SIZE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "HEART AFFECTING DISEASE DETECTED") && (kbmap.find("ELECTROCARDIOGRAM")->second == "HEART DAMAGE") && (kbmap.find("EF > 40%")->second == "YES"))
                        {
                                value.setName("CVD");
                                value.setValue("HEART FAILURE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from a HEART FAILURE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 290) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR HEART SIZE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "HEART AFFECTING DISEASE DETECTED") && (kbmap.find("ELECTROCARDIOGRAM")->second == "HEART DAMAGE") && (kbmap.find("EF > 40%")->second == "YES"))
                        {
                                value.setName("CVD");
                                value.setValue("HEART FAILURE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from a HEART FAILURE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }
        if ((ruleNumber == 300) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR HEART SIZE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "NORMAL") && (kbmap.find("LAB TEST")->second == "NT PROBNB") && (kbmap.find("ELECTROCARDIOGRAM")->second == "HEART DAMAGE") && (kbmap.find("EF > 40%")->second == "YES"))
                        {
                                value.setName("CVD");
                                value.setValue("HEART FAILURE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from a HEART FAILURE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 310) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR HEART SIZE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("BLOOD TEST")->second == "NORMAL") && (kbmap.find("LAB TEST")->second == "NT PROBNB") && (kbmap.find("ELECTROCARDIOGRAM")->second == "HEART DAMAGE") && (kbmap.find("EF > 40%")->second == "YES"))
                        {
                                value.setName("CVD");
                                value.setValue("HEART FAILURE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from a HEART FAILURE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 320) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR SIZED RIGHT VENTRICLE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 330) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR SIZED RIGHT VENTRICLE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 340) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR SIZED RIGHT VENTRICLE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "THICKENED MUSCULAR WALL"))
                        {
                                value.setName("CVD");
                                value.setValue("PULMONARY STENOSIS");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from PULMONARY STENOSIS.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 350) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "IRREGULAR SIZED RIGHT VENTRICLE") && (kbmap.find("ELECTROCARDIOGRAM")->second == "THICKENED MUSCULAR WALL"))
                        {
                                value.setName("CVD");
                                value.setValue("PULMONARY STENOSIS");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from PULMONARY STENOSIS.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 360) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO")  && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART VALVE LEAKAGE")&& (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("PULSE OXIMETRY")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 370) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART VALVE LEAKAGE")&& (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("PULSE OXIMETRY")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 380) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO")  && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART VALVE LEAKAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("PULSE OXIMETRY")->second == "LOW OXYGEN") && (kbmap.find("HEART CATHERIZATION")->second == "BLOOD VESSELS BLOCKAGE"))
                        {
                                value.setName("CVD");
                                value.setValue("CONGENITAL HEART DISEASE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from CONGENITAL HEART DISEASE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 390) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART VALVE LEAKAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("PULSE OXIMETRY")->second == "LOW OXYGEN") && (kbmap.find("HEART CATHERIZATION")->second == "BLOOD VESSELS BLOCKAGE"))
                        {
                                value.setName("CVD");
                                value.setValue("CONGENITAL HEART DISEASE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from CONGENITAL HEART DISEASE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 400) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "BACKWARD BLOOD LEAKAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("CHEST X-RAY")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("MITRAL REGURGITATION");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from MITRAL REGURGITATION.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 410) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "BACKWARD BLOOD LEAKAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("CHEST X-RAY")->second == "NORMAL"))
                        {
                                value.setName("CVD");
                                value.setValue("MITRAL REGURGITATION");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from MITRAL REGURGITATION.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 420) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "BACKWARD BLOOD LEAKAGE") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("ELECTROCARDIOGRAM")->second == "IRREGULAR HEART RHYTHM") && (kbmap.find("CORONARY ANGIOGRAM")->second == "NOT SEVERE"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 430) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "BACKWARD BLOOD LEAKAGE") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("ELECTROCARDIOGRAM")->second == "IRREGULAR HEART RHYTHM") && (kbmap.find("CORONARY ANGIOGRAM")->second == "NOT SEVERE"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 440) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "BACKWARD BLOOD LEAKAGE") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("ELECTROCARDIOGRAM")->second == "IRREGULAR HEART RHYTHM") && (kbmap.find("CORONARY ANGIOGRAM")->second == "SEVERE"))
                        {
                                value.setName("CVD");
                                value.setValue("MITRAL VALVE PROLAPSE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from  MITRAL VALVE PROLAPSE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 450) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "BACKWARD BLOOD LEAKAGE") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("ELECTROCARDIOGRAM")->second == "IRREGULAR HEART RHYTHM") && (kbmap.find("CORONARY ANGIOGRAM")->second == "SEVERE"))
                        {
                                value.setName("CVD");
                                value.setValue("MITRAL VALVE PROLAPSE");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from  MITRAL VALVE PROLAPSE.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 460) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART MUSCLE DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("PULSE OXIMETRY")->second == "LOW OXYGEN") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("HOLTER MONITOR")->second == "NORMAL HEARTBEAT"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 470) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART MUSCLE DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("PULSE OXIMETRY")->second == "LOW OXYGEN") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("HOLTER MONITOR")->second == "NORMAL HEARTBEAT"))
                        {
                                value.setName("CVD");
                                value.setValue("No");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is NOT SUFFERING from any Cardio Vascular Disease.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 480) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "FEMALE") && (kbmap.find("PREGNANT")->second == "NO") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART MUSCLE DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("PULSE OXIMETRY")->second == "LOW OXYGEN") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("HOLTER MONITOR")->second == "IRREGULAR HEARTBEAT") && (kbmap.find("IMPLANTABLE LOOP RECORDER")->second == "HEART RHYTHM ABNORMALITY"))
                        {
                                value.setName("CVD");
                                value.setValue("ARRHYTHMIA");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from ARRHYTHMIA.");
                                value.setFlag("Diagnosed");
                                return value;
                        }

        if ((ruleNumber == 490) && (kbmap.find("SYMPTOMS")->second == "YES") && (kbmap.find("GENDER")->second == "MALE") && (kbmap.find("ECHOCARDIOGRAM")->second == "HEART MUSCLE DAMAGE") && (kbmap.find("IRREGULAR HEARTBEAT")->second == "YES") && (kbmap.find("PULSE OXIMETRY")->second == "LOW OXYGEN") && (kbmap.find("CHEST X-RAY")->second == "ENLARGED HEART") && (kbmap.find("HOLTER MONITOR")->second == "IRREGULAR HEARTBEAT") && (kbmap.find("IMPLANTABLE LOOP RECORDER")->second == "HEART RHYTHM ABNORMALITY"))
                        {
                                value.setName("CVD");
                                value.setValue("ARRHYTHMIA");
                                value.setDescription("Based on the patients present conditions, we can conclude the patient is SUFFERING from ARRHYTHMIA.");
                                value.setFlag("Diagnosed");
                                return value;
                        }
	}

	/*The program begins execution from here once the object is created */
	string BackwardChaining::analyzeDisease()
	{
		unordered_map<string, string> consequence;
		int iterator, ruleNumber, clauseNumber, variableLocation, conclusionLocation, stackpop_rule, clause, temp;
		diagnosis disease_value;
		string clauseVariable, consequence_name, consequence_value, disease, input;
		/*Step 1:: Check the variable value against the conclusion list*/
		for(iterator = 0; iterator < 49; iterator++)
		{
			if (conclusionList[iterator].getConclusion().compare("CVD") == 0)
			{ 	/* Extract the Rule number from the conclusion list and generate the clause number */
				ruleNumber = conclusionList[iterator].getRule();
				clauseNumber = (9*((ruleNumber/10)-1))+1;
				temp = clauseNumber;
				/*Step 2:: Push the rule number and the clause number into the stack*/
				conclusionStackUpdate(ruleNumber, clauseNumber%9);
				/*Step 3:: Get the clause variable list with the clause number*/
				clauseVariable = clauseVariableList[clauseNumber-1].getVar();
				while ((clauseVariable != "") && (clauseNumber < (temp + 9)))
				{
					/*Step4:: Check the Variable list for the clause Variable to identify if it has been instantiated or not */
					variableLocation = determine_variable_list(clauseVariable);
					/*Step5:: Check Conclusion List for the clause Variable as it is not present inside Variable List*/
					if (variableLocation == -1)
					{
						conclusionLocation = determine_conclusion_list(clauseVariable);
						clauseNumber = (9*((conclusionLocation/10)-1))+1;
						conclusionStackUpdate(conclusionLocation, clauseNumber%9);
					}
					else
					{
						if ((variableList[variableLocation].getValue() == "NA"))
						{
							conclusionStack.pop();
							break;
						}
						clauseNumber+=1;
						clauseVariable = clauseVariableList[clauseNumber-1].getVar();
					}
				}
				while(conclusionStack.size() != 0)
				{
					concsk tempStack = conclusionStack.top();
					conclusionStack.pop();
					stackpop_rule = tempStack.getRule();
					clause = (9*((stackpop_rule/10)-1))+1;
					for (int i = clause; i < clause+9; i++)
					{
						consequence_name = clauseVariableList[i-1].getVar();
						if(consequence_name != "")
						{
							int pos = determine_variable_list(consequence_name);
							consequence_value =  variableList[pos].getValue();
							/*insert key value pair into the unorodered map consequence*/
							consequence.insert(pair<string,string>(consequence_name, consequence_value));
						}
						else
						{
							break;
						}
					}
					/* get the conclusion list position from rule number and map it to the disease value. Now check if its MI then call the knowledge base and set the rule as such */
					disease_value = knowledgeBase(stackpop_rule, consequence);
					/*cout<< "Rule number ---- "<<stackpop_rule <<endl<<endl;*/
					if (disease_value.getFlag() == "Diagnosed")
					{
						disease = disease_value.getValue();
						cout<< disease_value.getDescription()<<endl;
	                                        return disease;
					}

				}
			}
			else
			{
				break;
			}
		}
		string final = "Not Diagnosed";
		return final;
	}




