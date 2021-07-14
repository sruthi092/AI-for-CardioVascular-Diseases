#include "PROJECT1_A05024226_ForwardChaining.h"
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
void ForwardChaining::Initialize()
{

    vector<VariableValuePair> ClausesRule10 = {VariableValuePair("DIAGNOSED CVD", "MYOCARDIAL INFARCTION STEMI")};
    VariableValuePair ResultRule10 = VariableValuePair("TREATMENT", "ANGIOPLASTY");
    rulemap[10] = Rule(ClausesRule10, ResultRule10);



    vector<VariableValuePair> ClausesRule20 = {VariableValuePair("DIAGNOSED CVD", "MYOCARDIAL INFARCTION NSTEMI") };
    ClausesRule20.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule20 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[20] = Rule(ClausesRule20, ResultRule20);

    vector<VariableValuePair> ClausesRule30 = {VariableValuePair("DIAGNOSED CVD", "MYOCARDIAL INFARCTION NSTEMI")};
    ClausesRule30.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule30.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule30 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[30] = Rule(ClausesRule30, ResultRule30);

    vector<VariableValuePair> ClausesRule40 = {VariableValuePair("DIAGNOSED CVD", "MYOCARDIAL INFARCTION NSTEMI")};
    ClausesRule40.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule40.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    VariableValuePair ResultRule40 = VariableValuePair("TREATMENT", "ANGIOPLASTY");
    rulemap[40] = Rule(ClausesRule40, ResultRule40);


    vector<VariableValuePair> ClausesRule50 = {VariableValuePair("DIAGNOSED CVD", "DILATED CARDIOMYOPATHY")};
    ClausesRule50.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule50 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[50] = Rule(ClausesRule50, ResultRule50);

    vector<VariableValuePair> ClausesRule60 = {VariableValuePair("DIAGNOSED CVD", "DILATED CARDIOMYOPATHY")};
    ClausesRule60.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule60.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule60 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[60] = Rule(ClausesRule60, ResultRule60);

    vector<VariableValuePair> ClausesRule70 = {VariableValuePair("DIAGNOSED CVD", "DILATED CARDIOMYOPATHY")};
    ClausesRule70.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule70.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    VariableValuePair ResultRule70 = VariableValuePair("TREATMENT", "LEFT VENTRICLE RECONSTRUCTION");
    rulemap[70] = Rule(ClausesRule70, ResultRule70);

    vector<VariableValuePair> ClausesRule80 = {VariableValuePair("DIAGNOSED CVD", "HEART FAILURE")};
    ClausesRule80.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule80 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[80] = Rule(ClausesRule80, ResultRule80);

    vector<VariableValuePair> ClausesRule90 = {VariableValuePair("DIAGNOSED CVD", "HEART FAILURE")};
    ClausesRule90.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule90.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule90 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[90] = Rule(ClausesRule90, ResultRule90);

    vector<VariableValuePair> ClausesRule100 = {VariableValuePair("DIAGNOSED CVD", "HEART FAILURE")};
    ClausesRule100.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule100.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule100.push_back(VariableValuePair("HEART DAMAGE ", "YES"));
    VariableValuePair ResultRule100 = VariableValuePair("TREATMENT", "HEART TRANSPLANT");
    rulemap[100] = Rule(ClausesRule100, ResultRule100);

    vector<VariableValuePair> ClausesRule110 = {VariableValuePair("DIAGNOSED CVD", "HEART FAILURE")};
    ClausesRule110.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule110.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule110.push_back(VariableValuePair("HEART DAMAGE ", "NO"));
    VariableValuePair ResultRule110 = VariableValuePair("TREATMENT", "HEART VALVE SURGERY");
    rulemap[110] = Rule(ClausesRule110, ResultRule110);

    vector<VariableValuePair> ClausesRule120 = {VariableValuePair("DIAGNOSED CVD", "ARRHYTHMIA")};
    ClausesRule120.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule120 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[120] = Rule(ClausesRule120, ResultRule120);

    vector<VariableValuePair> ClausesRule130 = {VariableValuePair("DIAGNOSED CVD", "ARRHYTHMIA")};
    ClausesRule130.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule130.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule130 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[130] = Rule(ClausesRule130, ResultRule130);

    vector<VariableValuePair> ClausesRule140 = {VariableValuePair("DIAGNOSED CVD", "ARRHYTHMIA")};
    ClausesRule140.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule140.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule140.push_back(VariableValuePair("IRREGULAR HEARTBEAT", "SLOW"));
    VariableValuePair ResultRule140 = VariableValuePair("TREATMENT", "IMPLANT PACEMAKER");
    rulemap[140] = Rule(ClausesRule140, ResultRule140);

    vector<VariableValuePair> ClausesRule150 = {VariableValuePair("DIAGNOSED CVD", "ARRHYTHMIA")};
    ClausesRule150.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule150.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule150.push_back(VariableValuePair("IRREGULAR HEARTBEAT", "FAST"));
    VariableValuePair ResultRule150 = VariableValuePair("TREATMENT", "CORONARY BYPASS SURGERY");
    rulemap[150] = Rule(ClausesRule150, ResultRule150);

    vector<VariableValuePair> ClausesRule160 = {VariableValuePair("DIAGNOSED CVD", "CORONARY HEART DISEASE")};
    ClausesRule160.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule160 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[160] = Rule(ClausesRule160, ResultRule160);

    vector<VariableValuePair> ClausesRule170 = {VariableValuePair("DIAGNOSED CVD", "CORONARY HEART DISEASE")};
    ClausesRule170.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule170.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule170 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[170] = Rule(ClausesRule170, ResultRule170);

    vector<VariableValuePair> ClausesRule180 = {VariableValuePair("DIAGNOSED CVD", "CORONARY HEART DISEASE")};
    ClausesRule180.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule180.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    VariableValuePair ResultRule180 = VariableValuePair("TREATMENT", "BALLOON ANGIPLASTY SURGERY");
    rulemap[180] = Rule(ClausesRule180, ResultRule180);

    vector<VariableValuePair> ClausesRule190 = {VariableValuePair("DIAGNOSED CVD", "MITRAL REGURGITATION")};
    ClausesRule190.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule190 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[190] = Rule(ClausesRule190, ResultRule190);

    vector<VariableValuePair> ClausesRule200 = {VariableValuePair("DIAGNOSED CVD", "MITRAL REGURGITATION")};
    ClausesRule200.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule200.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule200 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[200] = Rule(ClausesRule200, ResultRule200);

    vector<VariableValuePair> ClausesRule210 = {VariableValuePair("DIAGNOSED CVD", "MITRAL REGURGITATION")};
    ClausesRule210.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule210.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    VariableValuePair ResultRule210 = VariableValuePair("TREATMENT", "MITRAL VALVE REPLACEMENT");
    rulemap[210] = Rule(ClausesRule210, ResultRule210);

    vector<VariableValuePair> ClausesRule220 = {VariableValuePair("DIAGNOSED CVD", "MITRAL VALVE PROLAPSE")};
    ClausesRule220.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule220 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[220] = Rule(ClausesRule220, ResultRule220);

    vector<VariableValuePair> ClausesRule230 = {VariableValuePair("DIAGNOSED CVD", "MITRAL VALVE PROLAPSE")};
    ClausesRule230.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule230.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule230 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[230] = Rule(ClausesRule230, ResultRule230);

    vector<VariableValuePair> ClausesRule240 = {VariableValuePair("DIAGNOSED CVD", "MITRAL VALVE PROLAPSE")};
    ClausesRule240.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule240.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule240.push_back(VariableValuePair("SURGERY", "POSSIBLE"));
    VariableValuePair ResultRule240 = VariableValuePair("TREATMENT", "MITRAL VALVE REPLACEMENT");
    rulemap[240] = Rule(ClausesRule240, ResultRule240);

    vector<VariableValuePair> ClausesRule250 = {VariableValuePair("DIAGNOSED CVD", "MITRAL VALVE PROLAPSE")};
    ClausesRule250.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule250.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule250.push_back(VariableValuePair("SURGERY", "NOT POSSIBLE"));
    VariableValuePair ResultRule250 = VariableValuePair("TREATMENT", " CATHETER IMPLANTATION");
    rulemap[250] = Rule(ClausesRule250, ResultRule250);


    vector<VariableValuePair> ClausesRule260 = {VariableValuePair("DIAGNOSED CVD", "CONGENITAL HEART DISEASE")};
    ClausesRule260.push_back(VariableValuePair("PROCEDURES USING CATHERIZATION", "NO"));
    ClausesRule260.push_back(VariableValuePair("OPEN-HEART SURGERY", "POSSIBLE"));
    VariableValuePair ResultRule260 = VariableValuePair("TREATMENT", "REPAIR HEART");
    rulemap[260] = Rule(ClausesRule260, ResultRule260);

    vector<VariableValuePair> ClausesRule270 = {VariableValuePair("DIAGNOSED CVD", "CONGENITAL HEART DISEASE")};
    ClausesRule270.push_back(VariableValuePair("PROCEDURES USING CATHERIZATION", "NO"));
    ClausesRule270.push_back(VariableValuePair("OPEN-HEART SURGERY", "NOT POSSIBLE"));
    VariableValuePair ResultRule270 = VariableValuePair("TREATMENT", "HEART TRANSPLANT");
    rulemap[270] = Rule(ClausesRule270, ResultRule270);

    vector<VariableValuePair> ClausesRule280 = {VariableValuePair("DIAGNOSED CVD", "CONGENITAL HEART DISEASE")};
    ClausesRule280.push_back(VariableValuePair("PROCEDURES USING CATHERIZATION", "YES"));
    ClausesRule280.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "CONTROLLED"));
    VariableValuePair ResultRule280 = VariableValuePair("TREATMENT", "EXERCISE REGULARLY");
    rulemap[280] = Rule(ClausesRule280, ResultRule280);

    vector<VariableValuePair> ClausesRule290 = {VariableValuePair("DIAGNOSED CVD", "CONGENITAL HEART DISEASE")};
    ClausesRule290.push_back(VariableValuePair("PROCEDURES USING CATHERIZATION", "YES"));
    ClausesRule290.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule290.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule290 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[290] = Rule(ClausesRule290, ResultRule290);

    vector<VariableValuePair> ClausesRule300 = {VariableValuePair("DIAGNOSED CVD", "CONGENITAL HEART DISEASE")};
    ClausesRule300.push_back(VariableValuePair("PROCEDURES USING CATHERIZATION", "YES"));
    ClausesRule300.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule300.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule300.push_back(VariableValuePair("OPEN-HEART SURGERY", "NOT POSSIBLE"));
    VariableValuePair ResultRule300 = VariableValuePair("TREATMENT", "HEART TRANSPLANT");
    rulemap[300] = Rule(ClausesRule300, ResultRule300);

    vector<VariableValuePair> ClausesRule310 = {VariableValuePair("DIAGNOSED CVD", "CONGENITAL HEART DISEASE")};
    ClausesRule310.push_back(VariableValuePair("PROCEDURES USING CATHERIZATION", "YES"));
    ClausesRule310.push_back(VariableValuePair("CHANGES IN LIFESTYLE", "NOT CONTROLLED"));
    ClausesRule310.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule310.push_back(VariableValuePair("OPEN-HEART SURGERY", "POSSIBLE"));
    VariableValuePair ResultRule310 = VariableValuePair("TREATMENT", "REPAIR HEART");
    rulemap[310] = Rule(ClausesRule310, ResultRule310);


    vector<VariableValuePair> ClausesRule320 = {VariableValuePair("DIAGNOSED CVD", "HYPERTROPHIC CARDIOMYOPATHY")};
    ClausesRule320.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule320 = VariableValuePair("TREATMENT", "BETA-BLOCKERS");
    rulemap[320] = Rule(ClausesRule320, ResultRule320);

    vector<VariableValuePair> ClausesRule330 = {VariableValuePair("DIAGNOSED CVD", "HYPERTROPHIC CARDIOMYOPATHY")};
    ClausesRule330.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule330.push_back(VariableValuePair("SURGERY", "POSSIBLE"));
    VariableValuePair ResultRule330 = VariableValuePair("TREATMENT", "SEPTAL MYECTOMY");
    rulemap[330] = Rule(ClausesRule330, ResultRule330);

    vector<VariableValuePair> ClausesRule340 = {VariableValuePair("DIAGNOSED CVD", "HYPERTROPHIC CARDIOMYOPATHY")};
    ClausesRule340.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    ClausesRule340.push_back(VariableValuePair("SURGERY", "POSSIBLE"));
    VariableValuePair ResultRule340 = VariableValuePair("Treatment", "ETHANOL ABLATION");
    rulemap[340] = Rule(ClausesRule340, ResultRule340);

    vector<VariableValuePair> ClausesRule350 = {VariableValuePair("DIAGNOSED CVD", "PULMONARY STENOSIS")};
    ClausesRule350.push_back(VariableValuePair("BALLOON VALVULOPLASTY", "POSSIBLE"));
    VariableValuePair ResultRule350 = VariableValuePair("TREATMENT", "NARROW PULMONARY VALVE BY INSERTING BALLOON");
    rulemap[350] = Rule(ClausesRule350, ResultRule350);

    vector<VariableValuePair> ClausesRule360 = {VariableValuePair("DIAGNOSED CVD", "PULMONARY STENOSIS")};
    ClausesRule360.push_back(VariableValuePair("BALLOON VALVULOPLASTY", "NOT POSSIBLE"));
    VariableValuePair ResultRule360 = VariableValuePair("TREATMENT", "OPEN-HEART SURGERY");
    rulemap[360] = Rule(ClausesRule360, ResultRule360);

    vector<VariableValuePair> ClausesRule370 = {VariableValuePair("DIAGNOSED CVD", "ANEURYSM")};
    ClausesRule370.push_back(VariableValuePair("MEDICATION", "CONTROLLED"));
    VariableValuePair ResultRule370 = VariableValuePair("TREATMENT", "ACE INHIBITORS, BETA-BLOCKERS AND DIURETICS");
    rulemap[370] = Rule(ClausesRule370, ResultRule370);

    vector<VariableValuePair> ClausesRule380 = {VariableValuePair("DIAGNOSED CVD", "ANEURYSM")};
    ClausesRule380.push_back(VariableValuePair("MEDICATION", "NOT CONTROLLED"));
    VariableValuePair ResultRule380 = VariableValuePair("TREATMENT", "ENDOVASCULAR  SURGERY");
    rulemap[380] = Rule(ClausesRule380, ResultRule380);




    variablelist["DIAGNOSED CVD"] = Variable_info();
    variablelist["CHANGES IN LIFESTYLE"] = Variable_info();
    variablelist["MEDICATION"] = Variable_info();
    variablelist["HEART DAMAGE"] = Variable_info();
    variablelist["IRREGULAR HEARTBEAT"] = Variable_info();
    variablelist["SURGERY"] = Variable_info();
    variablelist["OPEN-HEART SURGERY"] = Variable_info();
    variablelist["PROCEDURES USING CATHERIZATION"] = Variable_info();
    variablelist["BALLOON VALVULOPLASTY"] = Variable_info();


    for(int i = 1; i <= rule_count * maxvariablesperrule; i+=maxvariablesperrule)
    {
        clause_variable_list[i]= "";
    }

    clause_variable_list[0] = "";


    clause_variable_list[1] ="DIAGNOSED CVD";
    clause_variable_list[7] ="DIAGNOSED CVD";
    clause_variable_list[8] ="CHANGES IN LIFESTYLE";
    clause_variable_list[13] ="DIAGNOSED CVD";
    clause_variable_list[14] ="CHANGES IN LIFESTYLE";
    clause_variable_list[15] ="MEDICATION";
    clause_variable_list[19] ="DIAGNOSED CVD";
    clause_variable_list[20] ="CHANGES IN LIFESTYLE";
    clause_variable_list[21] ="MEDICATION";
    clause_variable_list[25] ="DIAGNOSED CVD";
    clause_variable_list[26] ="CHANGES IN LIFESTYLE";
    clause_variable_list[31] ="DIAGNOSED CVD";
    clause_variable_list[32] ="CHANGES IN LIFESTYLE";
    clause_variable_list[33] ="MEDICATION";
    clause_variable_list[37] ="DIAGNOSED CVD";
    clause_variable_list[38] ="CHANGES IN LIFESTYLE";
    clause_variable_list[39] ="MEDICATION";
    clause_variable_list[43] ="DIAGNOSED CVD";
    clause_variable_list[44] ="CHANGES IN LIFESTYLE";
    clause_variable_list[49] ="DIAGNOSED CVD";
    clause_variable_list[50] ="CHANGES IN LIFESTYLE";
    clause_variable_list[51] ="MEDICATION";
    clause_variable_list[55] ="DIAGNOSED CVD";
    clause_variable_list[56] ="CHANGES IN LIFESTYLE";
    clause_variable_list[57] ="MEDICATION";
    clause_variable_list[58] ="HEART DAMAGE";
    clause_variable_list[61] ="DIAGNOSED CVD";
    clause_variable_list[62] ="CHANGES IN LIFESTYLE";
    clause_variable_list[63] ="MEDICATION";
    clause_variable_list[64] ="HEART DAMAGE";
    clause_variable_list[67] ="DIAGNOSED CVD";
    clause_variable_list[68] ="CHANGES IN LIFESTYLE";
    clause_variable_list[73] ="DIAGNOSED CVD";
    clause_variable_list[74] ="CHANGES IN LIFESTYLE";
    clause_variable_list[75] ="MEDICATION";
    clause_variable_list[79] ="DIAGNOSED CVD";
    clause_variable_list[80] ="CHANGES IN LIFESTYLE";
    clause_variable_list[81] ="MEDICATION";
    clause_variable_list[82] ="IRREGULAR HEARTBEAT";
    clause_variable_list[85] ="DIAGNOSED CVD";
    clause_variable_list[86] ="CHANGES IN LIFESTYLE";
    clause_variable_list[87] ="MEDICATION";
    clause_variable_list[88] ="IRREGULAR HEARTBEAT";
    clause_variable_list[91] ="DIAGNOSED CVD";
    clause_variable_list[92] ="CHANGES IN LIFESTYLE";
    clause_variable_list[97] ="DIAGNOSED CVD";
    clause_variable_list[98] ="CHANGES IN LIFESTYLE";
    clause_variable_list[99] ="MEDICATION";
    clause_variable_list[103] ="DIAGNOSED CVD";
    clause_variable_list[104] ="CHANGES IN LIFESTYLE";
    clause_variable_list[105] ="MEDICATION";
    clause_variable_list[109] ="DIAGNOSED CVD";
    clause_variable_list[110] ="CHANGES IN LIFESTYLE";
    clause_variable_list[115] ="DIAGNOSED CVD";
    clause_variable_list[116] ="CHANGES IN LIFESTYLE";
    clause_variable_list[117] ="MEDICATION";
    clause_variable_list[101] ="DIAGNOSED CVD";
    clause_variable_list[102] ="CHANGES IN LIFESTYLE";
    clause_variable_list[103] ="MEDICATION";
    clause_variable_list[106] ="DIAGNOSED CVD";
    clause_variable_list[107] ="CHANGES IN LIFESTYLE";
    clause_variable_list[111] ="DIAGNOSED CVD";
    clause_variable_list[112] ="CHANGES IN LIFESTYLE";
    clause_variable_list[113] ="MEDICATION";
    clause_variable_list[116] ="DIAGNOSED CVD";
    clause_variable_list[117] ="CHANGES IN LIFESTYLE";
    clause_variable_list[118] = "";
    clause_variable_list[119] = " ";
    clause_variable_list[120] = "";
    clause_variable_list[121] = "DIAGNOSED CVD";
    clause_variable_list[122] = "CHANGES IN LIFESTYLE";
    clause_variable_list[123] = "MEDICATION";
    clause_variable_list[124] = "";
    clause_variable_list[125] = "";
    clause_variable_list[126] = "";
    clause_variable_list[127] = "DIAGNOSED CVD";
    clause_variable_list[128] = "CHANGES IN LIFESTYLE";
    clause_variable_list[129] = "";
    clause_variable_list[130] = "";
    clause_variable_list[131] = "";
    clause_variable_list[132] = "";
    clause_variable_list[133] = "DIAGNOSED CVD";
    clause_variable_list[134] = "CHANGES IN LIFESTYLE";
    clause_variable_list[135] = "MEDICATION";
    clause_variable_list[136] = "";
    clause_variable_list[137] = "";
    clause_variable_list[138] = " ";
    clause_variable_list[139] = "DIAGNOSED CVD";
    clause_variable_list[140] = "CHANGES IN LIFESTYLE";
    clause_variable_list[141] = "MEDICATION";
    clause_variable_list[142] = "SURGERY";
    clause_variable_list[143] = "";
    clause_variable_list[144] = "";
    clause_variable_list[145] = "DIAGNOSED CVD";
    clause_variable_list[146] = "CHANGES IN LIFESTYLE";
    clause_variable_list[147] = "MEDICATION";
    clause_variable_list[148] = "SURGERY";
    clause_variable_list[149] = "";
    clause_variable_list[150] = "";
    clause_variable_list[151] = "DIAGNOSED CVD";
    clause_variable_list[152] = "PROCEDURES USING CATHERIZATION";
    clause_variable_list[153] = "OPEN-HEART SURGERY";
    clause_variable_list[154] = "";
    clause_variable_list[155] = "";
    clause_variable_list[156] = "";
    clause_variable_list[157] = "DIAGNOSED CVD";
    clause_variable_list[158] = "PROCEDURES USING CATHERIZATION";
    clause_variable_list[159] = "OPEN-HEART SURGERY";
    clause_variable_list[160] = "";
    clause_variable_list[161] = "";
    clause_variable_list[162] = "";
    clause_variable_list[163] = "DIAGNOSED CVD";
    clause_variable_list[164] = "PROCEDURES USING CATHERIZATION";
    clause_variable_list[165] = "CHANGES IN LIFESTYLE";
    clause_variable_list[166] = "";
    clause_variable_list[167] = "";
    clause_variable_list[168] = "";
    clause_variable_list[169] = "DIAGNOSED CVD";
    clause_variable_list[170] = "PROCEDURES USING CATHERIZATION";
    clause_variable_list[171] = "CHANGES IN LIFESTYLE";
    clause_variable_list[172] = "MEDICATION";
    clause_variable_list[173] = "";
    clause_variable_list[174] = "";
    clause_variable_list[175] = "DIAGNOSED CVD";
    clause_variable_list[176] = "PROCEDURES USING CATHERIZATION";
    clause_variable_list[177] = "CHANGES IN LIFESTYLE";
    clause_variable_list[178] = "MEDICATION";
    clause_variable_list[179] = "OPEN-HEART SURGERY";
    clause_variable_list[180] = "";
    clause_variable_list[181] = "DIAGNOSED CVD ";
    clause_variable_list[182] = "PROCEDURES USING CATHERIZATION";
    clause_variable_list[183] = "CHANGES IN LIFESTYLE";
    clause_variable_list[184] = "MEDICATION";
    clause_variable_list[185] = "OPEN-HEART SURGERY";
    clause_variable_list[186] = " ";
    clause_variable_list[187] = "DIAGNOSED CVD";
    clause_variable_list[188] = "MEDICATION";
    clause_variable_list[189] = "";
    clause_variable_list[190] = "";
    clause_variable_list[191] = "";
    clause_variable_list[192] = "";
    clause_variable_list[193] = "DIAGNOSED CVD";
    clause_variable_list[194] = "MEDICATION";
    clause_variable_list[195] = "SURGERY";
    clause_variable_list[196] = "";
    clause_variable_list[197] = "";
    clause_variable_list[198] = "";
    clause_variable_list[199] = "DIAGNOSED CVD";
    clause_variable_list[200] = "MEDICATION";
    clause_variable_list[201] = "SURGERY";
    clause_variable_list[202] = "";
    clause_variable_list[203] = "";
    clause_variable_list[204] = "";
    clause_variable_list[205] = "DIAGNOSED CVD";
    clause_variable_list[206] = "BALLOON VALVULOPLASTY";
    clause_variable_list[207] = "";
    clause_variable_list[208] = "";
    clause_variable_list[209] = "";
    clause_variable_list[210] = "";
    clause_variable_list[211] = "DIAGNOSED CVD";
    clause_variable_list[212] = "BALLOON VALVULOPLASTY";
    clause_variable_list[213] = "";
    clause_variable_list[214] = "";
    clause_variable_list[215] = "";
    clause_variable_list[216] = "";
    clause_variable_list[217] = "DIAGNOSED CVD";
    clause_variable_list[218] = "MEDICATION";
    clause_variable_list[219] = "";
    clause_variable_list[220] = "";
    clause_variable_list[221] = "";
    clause_variable_list[222] = "";
    clause_variable_list[223] = "DIAGNOSED CVD";
    clause_variable_list[224] = "MEDICATION ";
    clause_variable_list[225] = "";
    clause_variable_list[226] = "";
    clause_variable_list[227] = "";
    clause_variable_list[228] = "";





}



int ForwardChaining::GetRuleNumber(int clause_num)
{
    int rule_num;
    rule_num = (((clause_num - 1)/maxvariablesperrule)+1) * 10;
    return rule_num;
}

int case_insensitive_match(string s1, string s2)
{

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1.compare(s2) == 0)
        return 1;
    return 0;
}

int ForwardChaining::GetNextIndexFromClauseVariableList(string variable_name, int current_index)
{
    for(int i = current_index+1; i<=rule_count * maxvariablesperrule; i++)
    {

        if(case_insensitive_match(variable_name, clause_variable_list[i]))

        {
            return i;
        }
    }
    return 0;
}


void ForwardChaining::InitializeVariableInVariableList(string variable_name, string value)
{
    Variable_info info = variablelist[variable_name];
    info.initialized = true;
    info.value = value;
    variablelist[variable_name] = info;
}


void ForwardChaining::GetTreatment(string disease)
{

    cout << "Finding treatment for: " << disease << "..." << endl;

    conclusion_variable_queue.push("DIAGNOSED CVD");
    GetConclusion("DIAGNOSED CVD", disease);
}


void ForwardChaining::GetConclusion(string variableName, string value)
{

    InitializeVariableInVariableList(variableName, value);
    while (true)
    {
        if (conclusion_variable_queue.empty())
        {
            cout << "No conclusion found\n";
            break;
        }
        string current_variable_name = conclusion_variable_queue.front();
        conclusion_variable_queue.pop();
        int current_index = GetNextIndexFromClauseVariableList(current_variable_name,0);
        if (current_index == 0)
        {
            break;
        }
        do
        {

            int rule_number = GetRuleNumber(current_index);



            clause_variable_pointer[0] = rule_number;


            Rule rule = rulemap[rule_number];
            bool evaluation_result = true;
            int clause_pointer = 1;
            for (auto clause : rule.Clauses)
            {

                clause_variable_pointer[1] = clause_pointer;
                clause_pointer++;
                Variable_info info = variablelist[clause.VariableName];
                string value;

                if (!info.initialized)
                {

                    cout << "Enter value for " << clause.VariableName << " :: " ;
                    getline(cin, value);

                    InitializeVariableInVariableList(clause.VariableName, value);
                }
                else
                {
                    value = info.value;
                }
                evaluation_result = evaluation_result && case_insensitive_match(value, clause.Value);
                if (!evaluation_result)
                {

                    break;
                }
            }
            if(evaluation_result)
            {
                cout << rule.Result.VariableName << ": " << rule.Result.Value << endl;

                conclusion_variable_queue.push(rule.Result.VariableName);
            }
            current_index = GetNextIndexFromClauseVariableList(current_variable_name,current_index);
        }
        while (current_index != 0);
    }
}

