#ifndef __DO_RMAHDR_
#define __DO_RMAHDR_

#ifdef __cplusplus
  extern "C" {
#endif

typedef unsigned long UP;
typedef unsigned U;
typedef unsigned char UB;
typedef unsigned short US;
typedef unsigned char SVAL;
typedef unsigned char TYPEB;
typedef unsigned char scalar;
typedef struct vec32 vec32;
typedef struct qird QIRD;
typedef unsigned char UST_e;
typedef unsigned uscope_t;
typedef U  NumLibs_t;
struct vec32 {
    U  I1;
    U  I2;
};
typedef unsigned long RP;
typedef unsigned long RO;
typedef unsigned short HsimEdge;
typedef unsigned char HsimExprChar;
typedef U  FlatNodeNum;
typedef U  InstNum;
typedef unsigned long long TimeStamp64;
typedef unsigned long long TimeStamp;
typedef TimeStamp  RmaTimeStamp;
typedef TimeStamp64  RmaTimeStamp64;
typedef union {
    double I503;
    unsigned long long I504;
    unsigned  I505[2];
} rma_clock_struct;
typedef struct eblk EBLK;
typedef int (* E_fn)(void);
struct eblk {
    struct eblk * I510;
    E_fn  I511;
    struct iptmpl * I512;
    unsigned I520;
    struct eblk * I521;
};
typedef struct {
    RP  I510;
    RP  I511;
    RP  I512;
    unsigned I520;
    RP  I521;
} RmaEblk;
typedef union {
    double I503;
    unsigned long long I504;
    unsigned  I505[2];
} clock_struct;
typedef clock_struct  RmaClockStruct;
typedef enum {
    PD_SING = 0,
    PD_RF = 1,
    PD_PLSE = 2,
    PD_PLSE_RF = 3,
    PD_NULL = 4
} PD_e;
typedef struct RmaRetain_t RmaRetain;
struct RmaRetain_t {
    RmaEblk  I509;
    RP  I541;
    RP  I542;
    U  I543;
    US  I544 :1;
    US  I545 :4;
    US  newval :2;
    US  I547 :2;
    US  I169 :2;
};
typedef struct MPSched MPS;
typedef struct RmaMPSched RmaMps;
struct MPSched {
    MPS  * I531;
    scalar  I532;
    scalar  I533;
    scalar  I534;
    scalar  fHsim :1;
    scalar  I169 :6;
    U  I536;
    EBLK  I537;
    void * I538;
    UP   I539[1];
};
struct RmaMPSched {
    RP  I531;
    scalar  I532;
    scalar  I533;
    scalar  I534;
    scalar  fHsim :1;
    scalar  I169 :6;
    U  I536;
    RmaEblk  I537;
    RP  I538;
    RP   I539[1];
};
typedef struct RmaMPSchedPulse RmaMpsp;
struct RmaMPSchedPulse {
    RP  I531;
    scalar  I532;
    scalar  I533;
    scalar  I534;
    scalar  I169;
    U  I536;
    RmaEblk  I537;
    scalar  I551;
    scalar  I552;
    scalar  I553;
    scalar  I554;
    U  I555;
    RmaClockStruct  I556;
    RmaClockStruct  I557;
    U  state;
    U  I559;
    RP  I512;
    RP  I560;
    RP  I561;
    RP   I539[1];
};
typedef struct MPItem MPI;
struct MPItem {
    U  * I563;
    void * I564;
};
typedef struct {
    RmaEblk  I509;
    RP  I565;
    scalar  I566;
    scalar  I551;
    scalar  I567;
} RmaTransEventHdr;
typedef struct RmaMPSchedPulseNewCsdf RmaMpspNewCsdf;
struct RmaMPSchedPulseNewCsdf {
    RP  I531;
    scalar  I532;
    scalar  I533;
    scalar  I534;
    scalar  fHsim :1;
    scalar  I169 :6;
    U  I536;
    RmaEblk  I537;
    scalar  I551;
    scalar  I552;
    scalar  I553;
    scalar  I554;
    U  state :4;
    U  I569 :28;
    RmaClockStruct  I556;
    RmaClockStruct  I557;
    RP  I570;
    RP  I512;
    RP  I571;
    RP   I539[1];
};
typedef struct red_t {
    U  I572;
    U  I573;
    U  I574;
} RED;
typedef struct predd {
    PD_e  I169;
    RED   I575[1];
} PREDD;
typedef unsigned long long ULL;
typedef struct {
    RP  I576;
    RP  I560;
    RP  I512;
    RP  I561;
    RmaEblk  I509;
    RmaEblk  I577;
    RP  I578;
    scalar  I566;
    scalar  I551;
    char state;
    uscope_t  I579;
    U  I580;
    RP  I581;
    scalar  I552;
    scalar  I553;
    scalar  I554;
    RmaClockStruct  I556;
    RmaClockStruct  I557;
    RP  I538;
} RmaPulse;
typedef enum {
    QIRDModuleC = 1,
    QIRDSVPackageC = 2
} QIRDModuleType;
typedef struct {
    U  I582 :1;
    U  I583 :1;
    U  I584 :1;
    U  I585 :1;
    U  I586 :1;
    U  I587 :1;
    U  I588 :1;
    U  I589 :1;
    U  I590 :1;
    U  I591 :1;
    U  I592 :1;
    U  I593 :1;
    U  I594 :1;
    U  I595 :1;
    U  I596 :1;
    U  I597 :1;
    U  I598 :1;
    U  I599 :1;
    U  I600 :1;
    U  I601 :1;
    QIRDModuleType  I602 :2;
    U  I603 :1;
    U  I604 :1;
    U  I605 :1;
    U  I606 :1;
    U  I607 :1;
    U  I608 :1;
    U  I609 :1;
    U  I610 :1;
    U  I611 :1;
    U  I612 :1;
    U  I613 :1;
    U  I614 :1;
    U  I615 :1;
    U  I616 :1;
} BitFlags;
struct qird {
    US  I4;
    US  I5;
    U  I6;
    U  I7;
    char * I8;
    char * I9;
    U  * I10;
    char * I11;
    U  I12;
    U  I13;
    struct vcd_rt * I14;
    U  I16;
    struct _vcdOffset_rt * I17;
    UP  * I19;
    U  I20;
    UP  * I21;
    U  I22;
    U  I23;
    U  I24;
    U  * I25;
    U  * I26;
    void * I27;
    void * I28;
    U  I29;
    int I30;
    UP  I31;
    U  I32;
    U  I33;
    U  I34;
    UP  I35;
    U  * I36;
    BitFlags  I37;
    U  I38;
    U  I39;
    U  I40;
    U  I41;
    U  I42;
    U  * I43;
    U  I44;
    U  * I45;
    U  I46;
    U  I47;
    U  I48;
    U  I49;
    U  I50;
    U  I51;
    U  I52;
    U  * I53;
    U  I54;
    U  I55;
    U  * I56;
    U  I57;
    U  * I58;
    U  I59;
    U  I60;
    U  I61;
    U  I62;
    U  * I63;
    U  I64;
    U  * I65;
    U  I66;
    U  I67;
    U  I68;
    U  I69;
    U  I70;
    U  I71;
    U  * I72;
    char * I73;
    U  I74;
    U  I75;
    U  I76;
    U  I77;
    U  I78;
    U  * I79;
    U  I80;
    U  I81;
    UP  * I82;
    U  I83;
    U  I84;
    UP  * I85;
    U  I86;
    U  I87;
    U  I88;
    U  I89;
    U  I90;
    U  I91;
    U  * I92;
    U  I93;
    U  I94;
    U  * I95;
    U  * I96;
    U  * I97;
    U  * I98;
    U  * I99;
    U  I100;
    U  I101;
    struct taskInfo * I102;
    U  I104;
    U  I105;
    int * I106;
    UP  * I107;
    U  I108;
    U  I109;
    U  I110;
    U  I111;
    U  I112;
    struct qrefer * I113;
    U  * I115;
    unsigned * I116;
    void * I117;
    U  I118;
    U  I119;
    U  I120;
    U  I121;
    U  * I122;
    U  I123;
    U  * I124;
    U  I125;
    U  I126;
    U  I127;
    U  * I128;
    U  I129;
    U  * I130;
    U  I131;
    U  I132;
    U  * I133;
    U  I134;
    U  I135;
    U  * I136;
    U  * I137;
    U  * I138;
    U  I139;
    U  I140;
    U  I141;
    U  I142;
    U  I143;
    struct qrefee * I144;
    U  * I146;
    U  I147;
    struct qdefrefee * I148;
    U  * I150;
    int (* I151)(void);
    char * I152;
    U  I153;
    U  I154;
    void * I155;
    NumLibs_t  I156;
    char * I157;
    U  * I158;
    U  I159;
    U  I160;
    U  I161;
    U  I162;
    U  I163;
    U  * I164;
    U  * I165;
    int I166;
    struct clock_load * I167;
    int I182;
    struct clock_data * I183;
    int I199;
    struct clock_hiconn * I200;
    U  I204;
    int I205;
    U  I206;
    int I207;
    U  * I208;
    U  * I209;
    U  I210;
    void * I211;
    U  I212;
    U  I213;
    UP  * I214;
    void * I215;
    U  I216;
    UP  * I217;
    U  * I218;
    int (* I219)(void);
    U  * I220;
    UP  * I221;
    U  * I222;
    U  I223;
    U  I224;
    U  I225;
    UP  * I226;
    U  * I227;
    U  I228 :1;
    U  I229 :1;
    U  I230 :1;
    U  I231 :1;
    U  I232 :28;
    U  I233;
    U  I234;
    U  I235;
    U  I236;
    UP  * I237;
    UP  * I238;
    U  * I239;
    U  * I240;
    UP  * I241;
    UP  * I242;
    UP  * I243;
    U  * I244;
    UP  * I245;
    UP  * I246;
    UP  * I247;
    char * I248;
    U  I249;
    U  I250;
    U  I251;
    UP  * I252;
    UP  * I253;
    UP  * I254;
    UP  * I255;
    UP  * I256;
    UP  * I257;
    UP  * I258;
    UP  * I259;
    UP  * I260;
    U  I261;
    U  I262;
    U  I263;
    U  I264;
    U  I265;
    U  I266;
    U  I267;
    U  I268;
    U  I269;
    U  I270;
    U  I271;
    U  I272;
    UP  * I273;
    struct daidirInfo * I274;
    struct vcs_tftable * I276;
    U  I278;
    UP  * I279;
    UP  * I280;
    U  I281;
    UP  (* I282)(void);
    UP  (* I283)(void);
    UP  (* I284)(void);
    UP  (* I285)(void);
    int * I286;
    int (* I287)(void);
    char * I288;
    UP  * I289;
    UP  * I290;
    int (* I291)(void);
    int * I292;
    U  * I293;
    U  * I294;
    void * I295;
    U  I296;
    U  I297;
    U  I298;
    U  I299;
    U  I300;
    U  I301;
    UP  * I302;
    U  * I303;
    U  * I304;
    U  I305 :15;
    U  I306 :14;
    U  I307 :1;
    U  I308 :1;
    U  I309 :1;
    U  I310 :3;
    U  I311 :1;
    U  I312 :1;
    U  I313 :1;
    U  I314 :18;
    U  I315 :3;
    U  I316 :5;
    struct scope * I317;
    U  I319;
    U  I320;
    U  I321;
    U  * I322;
    U  * I323;
    U  * I324;
    U  I325;
    U  I326;
    U  I327;
    struct pcbt * I328;
    U  I337;
    U  I338;
    void * I339;
    int I340;
    U  I341;
    U  I342;
    U  I343;
    U  I344;
    U  I345;
    void * I346;
    UP  * I347;
    U  I348;
    U  I349;
    void * I350;
    U  I351;
    void * I352;
    U  I353;
    void * I354;
    U  I355;
    int (* I356)(void);
    int (* I357)(void);
    void * I358;
    void * I359;
    void * I360;
    U  I361;
    U  I362;
    char * I363;
    U  I364;
    U  * I365;
    U  I366;
    U  * I367;
    U  I368;
    U  I369;
    U  I370;
    U  I371;
    U  I372;
    U  I373;
    U  * I374;
    U  I375;
    U  I376;
    U  * I377;
    U  I378;
    U  * I379;
    char * I380;
    U  I381;
    U  I382;
    U  I383;
    U  I384;
    U  * I385;
    U  I386;
    U  I387;
    struct cosim_info * I388;
    U  I390;
    U  * I391;
    U  I392;
    U  I393;
    U  * I394;
    U  I395;
    U  * I396;
    U  I397;
    U  I398;
    U  * I399;
    U  I400;
    U  * I401;
    U  I402;
    U  I403;
    U  I404;
    U  I405;
    U  I406;
    U  I407;
    U  I408;
    U  I409;
    U  * I410;
    U  * I411;
    void (* I412)(void);
    U  * I413;
    UP  * I414;
    struct mhdl_outInfo * I415;
    UP  * I417;
    U  I418;
    UP  * I419;
    U  I420;
    void * I421;
    U  * I422;
    void * I423;
    U  I424;
    U  I425;
    void * I426;
    void * I427;
    U  * I428;
    U  * I429;
    U  * I430;
    U  * I431;
    void * I432;
    U  I433;
    void * I434;
    U  * I435;
    char * I436;
    int (* I437)(void);
    U  * I438;
    char * I439;
    char * I440;
    U  I441;
    U  * I442;
    struct regInitInfo * I443;
    UP  * I445;
    U  * I446;
    char * I447;
    U  I448;
    U  I449;
    U  I450;
    U  I451;
    U  I452;
    U  I453;
    U  I454;
    U  I455;
    U  * I456;
    U  * I457;
    U  I458;
    U  I459;
    U  I460;
    U  I461;
    UP  * I462;
    U  I463;
    UP  * I464;
    U  I465;
    U  I466;
    U  I467;
    U  * I468;
    U  * I469;
    UP  * I470;
    UP  * I471;
    void * I472;
    UP  I473;
    void * I474;
    void * I475;
    void * I476;
    U  * I477;
    U  * I478;
    U  I479;
    U  I480;
    int I481;
    void * I482;
    UP  * I483;
    UP  I484;
    U  I485;
    U  I486;
    U  * I487;
    U  I488;
    U  * I489;
    U  I490;
    U  I491;
    U  * I492;
};
typedef struct pcbt {
    U  * I330;
    UP  I331;
    U  I332;
    U  I333;
    U  I334;
    U  I335;
    U  I336;
} PCBT;
struct iptmpl {
    QIRD  * I514;
    struct vcs_globals_t * I515;
    void * I517;
    UP  I518;
    UP  I519;
    struct iptmpl * I512[2];
};
typedef unsigned long long FileOffset;
typedef struct _hsimPeriodL {
    char  I649[256];
    struct _hsimPeriodL * I621;
} HsimPeriodL;
typedef struct {
    U   I651[2];
    U  I652 :1;
    U  I653 :1;
    U  I654 :8;
    U  I655 :8;
    U  I656 :8;
    U  I657 :4;
    unsigned long long I658;
    unsigned long long I659;
    unsigned long long I660;
    unsigned long long I661;
    unsigned long long I662;
    U  I663;
    U  I664;
    U  I665;
    U  I666;
    HsimPeriodL  * I667;
    HsimPeriodL  * I668;
    U  I669;
} HsimSignalMonitor;
typedef struct {
    FlatNodeNum  I670;
    InstNum  I671;
    scalar  I672;
    U  I673;
    U  I674;
    U  I675;
    U  I676;
    U  I677;
    U  I678;
    U  I679;
    HsimSignalMonitor  * I680;
    RmaTimeStamp64  I681;
    U  I682;
} HsimNodeRecord;
typedef struct {
    RP  I683;
    RP  I512;
} RmaIbfIp;
typedef struct {
    RP  I683;
    RP  I684;
} RmaIbfPcode;
typedef struct {
    RmaEblk  I509;
} RmaEvTriggeredOrSyncLoadCg;
typedef struct {
    RmaEblk  I509;
    RP  I685;
    vec32  I686;
} RmaAnySchedVCg;
typedef struct {
    RmaEblk  I509;
    RP  I685;
    vec32   I687[1];
} RmaAnySchedWCg;
typedef struct {
    RmaEblk  I509;
    RP  I685;
    scalar   I688[1];
} RmaAnySchedECg;
typedef struct {
    RP  I689;
} RmaRootCbkCg;
typedef struct {
    RP  I690;
} RmaRootVcdCg;
typedef struct {
    RP  I691;
} RmaRootForceCbkCg;
typedef struct {
    RmaEblk  I509;
    RP  I692;
} RmaForceCbkJmpCg;
typedef struct {
    RP  ptable;
    RP  pfn;
    RP  I684;
} Rma1InputGateFaninCgS;
typedef struct {
    U  I5;
    U  iinput;
    RP  I698;
} RmaCondOptLoad;
typedef struct {
    U  I5;
    U  iinput;
    RP  I698;
} RmaCellStateUpdate;
typedef struct {
    U  I5;
    U  state;
    US  I699;
    US  I624;
    U  * I700;
} RmaCellState;
typedef struct {
    U  iinput;
    RP  I701;
} RmaMultiInputLogicGateCg;
typedef struct {
    U  iinput;
    RP  ptable;
    RP  I701;
} RmaSeqPrimEdgeInputCg;
typedef struct {
    RmaEblk  I509;
    RP  I684;
} RmaSched0GateCg;
typedef struct {
    RmaEblk  I509;
    RP  I684;
    RP  pfn;
} RmaUdpDeltaGateCg;
typedef struct {
    scalar  I702;
    RmaEblk  I509;
    RP  I684;
    RP  pfn;
} RmaSchedDeltaGateCg;
typedef struct {
    UB  I703;
    RP  I704;
    RP  I705;
} RmaPropNodeSeqLhsSCg;
typedef struct {
    RmaEblk  I509;
    RP  I684;
    U  I629;
    U   I500[1];
} RmaBitEdgeEblk;
typedef struct {
    U  I5;
    RP  I575;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaGateDelay;
typedef struct {
    U  I5;
    union {
        RP  I799;
        RP  I1005;
        RP  I1011;
    } I541;
    RmaIbfPcode  I706;
} RmaMPDelay;
typedef struct {
    U  I5;
    RmaPulse  I707;
    RmaIbfPcode  I706;
} RmaMPPulseHybridDelay;
typedef struct {
    U  I5;
    RmaIbfPcode  I706;
    RmaMps  I708;
} RmaMPHybridDelay;
typedef struct {
    U  I5;
    U  I709;
    RmaIbfPcode  I706;
    RmaEblk  I537;
} RmaMPHybridDelayPacked;
typedef struct {
    U  I5;
    RmaIbfPcode  I706;
    RmaMpspNewCsdf  I710;
} RmaMPPulseDelay;
typedef struct {
    U  I5;
    RmaMpsp  I710;
    RmaIbfPcode  I706;
} RmaMPPulseOptHybridDelay;
typedef struct {
    U  I5;
    U  I574;
    RmaTransEventHdr  I634;
    RP  I571;
    RmaIbfPcode  I706;
} RmaNtcTransDelay;
typedef struct {
    U  I5;
    U  I574;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaNtcTransMpwOptDelay;
typedef struct {
    U  I5;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaNtcTransZeroDelay;
typedef struct {
    U  I5;
    U  I711;
    U  I712;
    RmaTransEventHdr  I634;
    RP  I571;
    RmaIbfPcode  I706;
} RmaNtcTransDelayRF;
typedef struct {
    U  I5;
    U  I711;
    U  I712;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaNtcTransMpwOptDelayRF;
typedef struct {
    U  I5;
    RP  I713;
    RmaTransEventHdr  I634;
    RP  I571;
    RmaIbfPcode  I706;
} RmaICTransDelay;
typedef struct {
    U  I5;
    RP  I713;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaICTransMpwOptDelay;
typedef struct {
    U  I5;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaICTransZeroDelay;
typedef struct {
    U  I5;
    RP  I575;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaICSimpleDelay;
typedef struct {
    U  I5;
    union {
        RP  psimple;
        RP  I1005;
        RP  I1011;
    } I541;
    RmaIbfPcode  I706;
} RmaICDelay;
typedef struct {
    U  I5;
    RP  I575;
    RmaEblk  I509;
    RmaIbfPcode  I706;
} RmaPortDelay;
typedef struct TableAssign_ {
    struct TableAssign_ * I621;
    struct TableAssign_ * I565;
    U  I5;
    U  iinput;
    RP  ptable;
    RP  I701;
} TableAssign;
typedef struct {
    U  I5;
    RP  I565;
    RP  I715;
} RmaTableAssignList;
typedef struct {
    RP  I716;
} RmaWakeupListCg;
typedef struct {
    U  I717;
    U  I718;
    RmaTimeStamp   I719[1];
} RmaTsArray;
typedef struct {
    RP  I621;
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
} RmaTcCoreSimple;
typedef struct {
    RP  I621;
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I730;
} RmaTcCoreConditional;
typedef struct {
    RP  I621;
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I730;
    RP  I731;
} RmaTcCoreConditionalOpt;
typedef struct {
    RP  I621;
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I731;
    RP  I732;
} RmaTcCoreConditionalMtc;
typedef struct {
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
} RmaTcCoreSimpleNoList;
typedef struct {
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I733;
} RmaTcCoreSimpleNoListMdb;
typedef struct {
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I730;
} RmaTcCoreConditionalNoList;
typedef struct {
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I730;
    RP  I731;
} RmaTcCoreConditionalOptNoList;
typedef struct {
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I731;
    RP  I732;
} RmaTcCoreConditionalMtcNoList;
typedef struct {
    RP  I720;
    RP  I506;
    U  I721;
    scalar  I722;
    scalar  I723;
    US  I724 :1;
    US  I725 :1;
    US  I726 :1;
    US  I727 :1;
    US  I728 :1;
    US  I729 :11;
    RP  I730;
    RP  I733;
} RmaTcCoreConditionalNoListMdb;
typedef struct {
    RP  I734;
    RmaTimeStamp  I735;
    scalar  I736;
} RmaConditionalTSLoadNoList;
typedef struct {
    RP  I621;
    RP  I734;
    RmaTimeStamp  I735;
    scalar  I736;
} RmaConditionalTSLoad;
typedef struct {
    RmaTimeStamp  I735;
    scalar  I736;
    US  I722;
    RP  I731;
} RmaConditionalTSLoadOptNoList;
typedef struct {
    RP  I621;
    RmaTimeStamp  I735;
    scalar  I736;
    US  I722;
    RP  I731;
} RmaConditionalTSLoadOpt;
typedef struct {
    RP  I731;
    RP  I737;
} RmaConditionalTSLoadMtcNoList;
typedef struct {
    RP  I621;
    RP  I731;
    RP  I737;
} RmaConditionalTSLoadMtc;
typedef struct {
    U  I738;
    U  I739;
    FlatNodeNum  I740;
    U  I629;
    U  I741;
    U  I742;
    RmaIbfPcode  I706;
    union {
        scalar  I743;
        vec32  I744;
        scalar  * I745;
        vec32  * I746;
    } val;
} RmaScanSwitchData;
typedef struct {
    RP  I621;
    RP  I565;
    RP  I747;
} RmaDoublyLinkedListElem;
typedef struct {
    RmaDoublyLinkedListElem  I748;
    RmaIbfPcode  I706;
} RmaSwitchGate;
struct clock_load {
    U  I169 :5;
    U  I170 :12;
    U  I171 :1;
    U  I172 :2;
    U  I173 :1;
    U  I174 :1;
    U  I175 :1;
    U  I176 :9;
    U  I177;
    U  I178;
    void (* pfn)(void * I180, char val);
};
typedef struct clock_data {
    U  I185 :1;
    U  I186 :1;
    U  I187 :1;
    U  I188 :1;
    U  I169 :5;
    U  I170 :12;
    U  I189 :6;
    U  I190 :1;
    U  I172 :2;
    U  I173 :1;
    U  I176 :1;
    U  I191;
    U  I192;
    U  I193;
    U  I177;
    U  I194;
    U  I195;
    U  I196;
    U  I197;
    U  I198;
} HdbsClockData;
struct clock_hiconn {
    U  I202;
    U  I203;
    U  I177;
    U  I172;
};
typedef struct _RmaDaiCg {
    RP  I749;
    RP  I750;
    U  I751;
} RmaDaiCg;
typedef union _RmaCbkMemOptUnion {
    RP  I749;
    RP  I752;
    RP  I753;
} RmaCbkMemOptUnion;
typedef struct _RmaDaiOptCg {
    RmaCbkMemOptUnion  I754;
} RmaDaiOptCg;
struct futq {
    struct futq * I522;
    struct futq * I524;
    RmaEblk  * I525;
    RmaEblk  * I526;
    U  I520;
};
struct sched_table {
    struct futq * I527;
    struct futq I528;
    struct hash_bucket * I529;
};
struct dummyq_struct {
    clock_struct  I755;
    EBLK  * I756;
    EBLK  * I757;
    struct futq * I758;
    struct futq * I759;
    struct sched_table * I760;
    struct millenium * I762;
    EBLK  * I764;
    EBLK  * I765;
    EBLK  * I766;
    EBLK  * I767;
    EBLK  * I768;
    EBLK  * I769;
    EBLK  * I770;
    EBLK  * I771;
    EBLK  * I772;
    EBLK  * I773;
    EBLK  * I774;
    EBLK  * I775;
    EBLK  * I776;
    EBLK  * I777;
    EBLK  * I778;
    MPS  * I779;
};
typedef void (* FP)(void *  , scalar   );
typedef void (* FP1)(void *  );
typedef void (* FPRAP)(void *  , vec32  *  , U   );
typedef U  (* FPU1)(void *  );
typedef void (* FPV)(void *  , UB  *  );
typedef void (* FPVU)(void *  , UB  *  , U   );
typedef void (* FPLSEL)(void *  , scalar   , U   );
typedef void (* FPLSELV)(void *  , vec32  *  , U   , U   );
typedef void (* FPFPV)(UB  *  , UB  *  , U   , U   , U   , U   , U   , UB  *  , U   );
typedef void (* FPRPV)(UB  *  , U   , U   , U   );
typedef void (* FPEVCDLSEL)(void *  , scalar   , U   , UB  *  );
typedef void (* FPEVCDLSELV)(void *  , vec32  *  , U   , U   , UB  *  );
typedef struct _lqueue {
    EBLK  * I510;
    EBLK  * I780;
    int I781;
    struct _lqueue * I542;
} Queue;
typedef struct {
    EBLK  I783;
    U  I784;
    union {
        void * pHeap;
        Queue  * pList;
    } I497;
    Queue   I785[1];
} Qhdr;
extern UB   Xvalchg[];
extern UB   X4val[];
extern UB   X3val[];
extern UB   XcvtstrTR[];
extern UB   Xbuf[];
extern UB   Xbitnot[];
extern UB   Xwor[];
extern UB   Xwand[];
extern U   Xbitnot4val[];
extern UB   globalTable1Input[];
extern unsigned long long vcs_clocks;
extern UB   Xunion[];
extern U  fRTFrcRelCbk;
extern FP  txpFnPtr;
extern FP   rmaFunctionArray[];
extern FP   rmaFunctionRtlArray[];
extern U  rmaFunctionCount;
extern UB  dummyScalar;
extern UB  fScalarIsForced;
extern UB  fScalarIsReleased;
extern U  fNotimingchecks;
extern RP  * iparr;
extern FP1  * rmaPostAnySchedFnPtr;
extern FP1  * rmaPostAnySchedVFnPtr;
extern FP1  * rmaPostAnySchedWFnPtr;
extern FP1  * rmaPostAnySchedEFnPtr;
extern FP1  * rmaPostSchedUpdateClockStatusFnPtr;
extern FP1  * rmaPostSchedUpdateClockStatusNonCongruentFnPtr;
extern FP1  * rmaPostSchedUpdateEvTrigFnPtr;
extern FP1  * rmaSched0UpdateEvTrigFnPtr;
extern FP1  * rmaPostSchedRecoveryResetDbsFnPtr;
extern U  fGblDataOrTime0Prop;
extern UB   rmaEdgeStatusValArr[];
extern FP1  * propForceCbkSPostSchedCgFnPtr;
extern FP1  * propForceCbkMemoptSPostSchedCgFnPtr;
extern UB  * ptableGbl;
extern Qhdr  * lvlQueue;
extern U  mhdl_delta_count;
extern U  ignoreSchedForScanOpt;
extern U  fignoreSchedForDeadComboCloud;
extern int fZeroUser;
extern EBLK  * peblkFutQ1Head;
extern EBLK  * peblkFutQ1Tail;


extern void *mempcpy(void* s1, void* s2, unsigned n);
extern UB* rmaEvalDelays(UB* pcode, scalar val);
extern UB* rmaEvalDelaysV(UB* pcode, vec32* pval);
extern void rmaPopTransEvent(UB* pcode);
extern void rmaSetupFuncArray(UP* ra, U c, U w);
extern void SinitHsimPats(void);
extern void VVrpDaicb(void* ip, U nIndex);
extern int SDaicb(void *ip, U nIndex);
extern void SDaicbForHsimNoFlagScalar(void* pDaiCb, unsigned char value);
extern void SDaicbForHsimNoFlagStrengthScalar(void* pDaiCb, unsigned char value);
extern void SDaicbForHsimNoFlag(void* pRmaDaiCg, unsigned char value);
extern void SDaicbForHsimNoFlag2(void* pRmaDaiCg, unsigned char value);
extern void SDaicbForHsimWithFlag(void* pRmaDaiCg, unsigned char value);
extern void SDaicbForHsimNoFlagFrcRel(void* pRmaDaiCg, unsigned char reason, int msb, int lsb, int ndx);
extern void SDaicbForHsimNoFlagFrcRel2(void* pRmaDaiCg, unsigned char reason, int msb, int lsb, int ndx);
extern void VcsHsimValueChangeCB(void* pRmaDaiCg, void* pValue, unsigned int valueFormat);
extern U isNonDesignNodeCallbackList(void* pRmaDaiCg);
extern void SDaicbForHsimCbkMemOptNoFlagScalar(void* pDaiCb, unsigned char value, unsigned char isStrength);
extern void SDaicbForHsimCbkMemOptWithFlagScalar(void* pDaiCb, unsigned char value, unsigned char isStrength);
extern void SDaicbForHsimCbkMemOptNoFlagScalar(void* pDaiCb, unsigned char value, unsigned char isStrength);
extern void SDaicbForHsimCbkMemOptWithFlagScalar(void* pDaiCb, unsigned char value, unsigned char isStrength);
extern void VVrpNonEventNonRegdScalarForHsimOptCbkMemopt(void* ip, U nIndex);
extern void SDaicbForHsimCbkMemOptNoFlagDynElabScalar(U* mem, unsigned char value, unsigned char isStrength);
extern void SDaicbForHsimCbkMemOptWithFlagDynElabScalar(U* mem, unsigned char value, unsigned char isStrength);
extern void SDaicbForHsimCbkMemOptNoFlagDynElabFrcRel(U* mem, unsigned char reason, int msb, int lsb, int ndx);
extern void SDaicbForHsimCbkMemOptNoFlagFrcRel(void* pDaiCb, unsigned char reason, int msb, int lsb, int ndx);
extern void hsimDispatchCbkMemOptForVcd(RP p, U val);
extern void* hsimGetCbkMemOptCallback(RP p);
extern void hsimDispatchCbkMemOptNoDynElabS(RP* p, U val, U isStrength);
extern void* hsimGetCbkPtrNoDynElab(RP p);
extern void hsimDispatchCbkMemOptDynElabS(U** pvcdarr, U** pcbkarr, U val, U isScalForced, U isScalReleased, U isStrength);
extern void hsimDispatchCbkMemOptNoDynElabVector(RP* /*RmaDaiOptCg* */p, void* pval, U /*RmaValueType*/ vt, U cbits);
extern void copyAndPropRootCbkCgS(RmaRootCbkCg* pRootCbk, scalar val);
extern void copyAndPropRootCbkCgV(RmaRootCbkCg* rootCbk, vec32* pval);
extern void copyAndPropRootCbkCgW(RmaRootCbkCg* rootCbk, vec32* pval);
extern void copyAndPropRootCbkCgE(RmaRootCbkCg* rootCbk, scalar* pval);
extern void dumpRootVcdCg(RmaRootVcdCg* pRootVcd, scalar val);
extern void Wsvvar_callback_non_dynamic1(RP* ptr, int);
extern void rmaExecEvSyncList(RP plist);
extern void Wsvvar_callback_virt_intf(RP* ptr);
extern void Wsvvar_callback_hsim_var(RP* ptr);
extern void checkAndConvertVec32To2State(vec32* value, vec32* svalue, U cbits, U* pforcedBits);
extern unsigned int fGblDataOrTime0Prop;
extern void SchedSemiLerMP1(UB* pmps, U partId);
extern void SchedSemiLerMPO(UB* pmpso, U partId);
extern void rmaDummyPropagate(void);
extern void hsUpdateModpathTimeStamp(UB* pmps);
extern void doMpd32One(UB* pmps);
extern void SchedSemiLerMP(UB* ppulse, U partId);
extern EBLK *peblkFutQ1Head;
extern EBLK *peblkFutQ1Tail;
extern void scheduleuna(UB *e, U t);
extern void scheduleuna_mp(EBLK *e, unsigned t);
extern void schedule(UB *e, U t);
extern void sched_hsopt(struct dummyq_struct * pQ, EBLK *e, U t);
extern void sched_millenium(struct dummyq_struct * pQ, void *e, U thigh, U t);
extern void schedule_1(EBLK *e);
extern void sched0(UB *e);
extern void sched0Raptor(UB *e);
extern void sched0lq(UB *e);
extern void sched0lqnc(EBLK *e);
extern void sched0una(UB *e);
extern void sched0una_th(struct dummyq_struct *pq, UB *e);
extern void scheduleuna_mp_th(struct dummyq_struct *pq, EBLK *e, unsigned t);
extern void schedal(UB *e);
extern void sched0_th(struct dummyq_struct * pQ, UB *e);
extern void sched0_hsim_front_th(struct dummyq_struct * pQ, UB *e);
extern void sched0_hsim_frontlq_th(struct dummyq_struct * pQ, UB *e);
extern void sched0lq_th(struct dummyq_struct * pQ, UB *e);
extern void schedal_th(struct dummyq_struct * pQ, UB *e);
extern void scheduleuna_th(struct dummyq_struct * pQ, void *e, U t);
extern void schedule_th(struct dummyq_struct * pQ, UB *e, U t);
extern void schedule_1_th(struct dummyq_struct * pQ, EBLK *peblk);
extern void SetupLER_th(struct dummyq_struct * pQ, UB *e);
extern void SchedSemiLer_th(struct dummyq_struct * pQ, EBLK *e);
extern void SchedSemiLerTXP_th(struct dummyq_struct * pQ, EBLK *e);
extern void SchedSemiLerTXPFreeVar_th(struct dummyq_struct * pQ, EBLK *e);
extern U getVcdFlags(UB *ip);
extern void VVrpNonEventNonRegdScalarForHsimOpt(void* ip, U nIndex);
extern void VVrpNonEventNonRegdScalarForHsimOpt2(void* ip, U nIndex);
extern void SchedSemiLerTBReactiveRegion(struct eblk* peblk);
extern void SchedSemiLerTBReactiveRegion_th(struct eblk* peblk, U partId);
extern void SchedSemiLerTr(UB* peblk, U partId);
extern void sched0sd_hsim(UB* peblk);
extern void appendNtcEvent(UB* phdr, scalar s, U schedDelta);
extern void hsimRegisterEdge(void* sm,  scalar s);
extern U pvcsGetPartId();
extern void HsimPVCSPartIdCheck(U instNo);
extern void debug_func(U partId, struct dummyq_struct* pQ, EBLK* EblkLastEventx); 
extern struct dummyq_struct* pvcsGetQ(U thid);
extern EBLK* pvcsGetLastEventEblk(U thid);
extern void insertTransEvent(RmaTransEventHdr* phdr, scalar s, scalar pv,	scalar resval, U schedDelta, int re, UB* predd, U fpdd);
extern void insertNtcEventRF(RmaTransEventHdr* phdr, scalar s, scalar pv, scalar resval, U schedDelta, U* delays);
extern U doTimingViolation(RmaTimeStamp ts,RP* pdata, U fskew, U limit, U floaded, U fcondopt);
extern void sched_gate_hsim(EBLK* peblk, unsigned t, RP* offset);
extern int getCurSchedRegion();
extern FP getRoutPtr(RP, U);
extern U rmaChangeCheckAndUpdateE(scalar* pvalDst, scalar* pvalSrc, U cbits);
extern void rmaUpdateE(scalar* pvalDst, scalar* pvalSrc, U cbits);
extern U rmaChangeCheckAndUpdateEFromW(scalar* pvalDst, vec32* pvalSrc, U cbits);
extern void rmaLhsPartSelUpdateE(scalar* pvalDst, scalar* pvalSrc, U index, U width);
extern void rmaUpdateWithForceSelectorE(scalar* pvalDst, scalar* pvalSrc, U cbits, U* pforceSelector);
extern void rmaUpdateWFromE(vec32* pvalDst, scalar* pvalSrc, U cbits);
extern U rmaLhsPartSelWithChangeCheckE(scalar* pvalDst, scalar* pvalSrc, U index, U width);
extern void rmaLhsPartSelWFromE(vec32* pvalDst, scalar* pvalSrc, U index,U width);
extern U rmaChangeCheckAndUpdateW(vec32* pvalDst, vec32* pvalSrc, U cbits);
extern void rmaUpdateW(vec32* pvalDst, vec32* pvalSrc, U cbits);
extern void rmaUpdateEFromW(scalar* pvalDst, vec32* pvalSrc, U cbits);
extern U rmaLhsPartSelWithChangeCheckW(vec32* pvalDst, vec32* pvalSrc, U index,U width);
extern void rmaLhsPartSelEFromW(scalar* pvalDst, vec32* pvalSrc, U index,U width);
extern U rmaLhsPartSelWithChangeCheckEFromW(scalar* pvalDst, vec32* pvalSrc, U index,U width);
extern void rmaLhsPartSelUpdateW(vec32* pvalDst, vec32* pvalSrc, U index, U width);
extern void rmaEvalWunionW(vec32* dst, vec32* src, U cbits, U count);
extern void rmaEvalWorW(vec32* dst, vec32* src, U cbits, U count);
extern void rmaEvalWandW(vec32* dst, vec32* src, U cbits, U count);
extern void rmaEvalUnionE(scalar* dst, scalar* src, U cbits, U count, RP ptable);
typedef U RmaCgFunctionType;
extern RmaIbfPcode* rmaEvalPartSelectsW(vec32* pvec32, U startIndex, U onWidth, U offWidth, U count, RmaIbfPcode* pibfPcode, U fnonRootForce);
extern RmaIbfPcode* rmaEvalPartSelectsEToE(scalar* pv, U startIndex, U onWidth, U offWidth, U count, RmaIbfPcode* pibfPcode, U fnonRootForce, UB* pevcdStatus);
extern RmaIbfPcode* rmaEvalPartSelectsEToW(scalar* pv, U startIndex, U onWidth, U offWidth, U count, RmaIbfPcode* pibfPcode, U fnonRootForce);
extern U rmaEvalBitPosEdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitNegEdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitChangeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U VcsForceVecVCg(UB* pcode, UB* pval, UB* pvDst, UB* pvCur, U fullcbits, U ibeginSrc, U ibeginDst, U width, U/*RmaValueConvType*/ convtype, U/*RmaForceType*/ frcType, UB* prhs, UB* prhsDst, U frhs, U* pforcedbits, U fisRoot);
extern U VcsReleaseVecVCg(UB* pcode, UB* pvDst, U fullcbits, U ibeginDst, U width, UB* prhsDst, U frhs, U* pforcedbits, U fisRoot);
extern U VcsForceVecWCg(UB* pcode, UB* pval, UB* pvDst, UB* pvCur, U fullcbits, U ibeginSrc, U ibeginDst, U width, U/*RmaValueConvType*/ convtype, U /*RmaForceType*/ frcType, UB* prhs, UB* prhsDst, U frhs, U* pforcedbits, U fisRoot);
extern U VcsReleaseVecWCg(UB* pcode, UB* pvDst, U fullcbits, U ibeginDst, U width, UB* prhsDst, U frhs, U* pforcedbits, U fisRoot);
extern U VcsForceVecECg(UB* pcode, UB* pval, UB* pvDst, UB* pvCur, U fullcbits, U ibeginSrc, U ibeginDst, U width, U /*RmaValueConvType*/ convtype, U /*RmaForceType*/ frcType,UB* prhs, UB* prhsDst, U frhs, U* pforcedbits, U fisRoot);
extern U VcsReleaseVecCg(UB* pcode, UB* pvDst, U ibeginDst, U width, U /*RmaValueType*/ type,U fisRoot, UB* prhsDst, U frhs, U* pforcedbits);
extern U VcsDriveBitsAndDoChangeCheckV(vec32* pvSel, vec32* pvCur, U fullcbits, U* pforcedbits, U isRoot);
extern U VcsDriveBitsAndDoChangeCheckW(vec32* pvSel, vec32* pvCur, U fullcbits, U* pforcedbits, U isRoot);
extern U VcsDriveBitsAndDoChangeCheckE(scalar* pvSel, scalar* pvCur, U fullcbits, U* pforcedbits, U isRoot);
extern void cgvecDebug_Eblk(UB* pcode);
extern U rmaCmpW(vec32* pvalDst, vec32* pvalSrc, U index, U width);
extern void copyVec32ArrMask(vec32* pv1, vec32* pv2, U len, U* mask);
extern void* memcpy(void*, const void*, size_t);
extern int memcmp(const void*, const void*, size_t);
extern void propagateScanOptPathVal(EBLK *peblk);
extern UB* rmaProcessScanSwitches(UB* pcode, scalar val);
extern UB* rmaProcessScanSwitchesV(UB* pcode, vec32 *pval);
extern UB* rmaProcessScanoptDump(UB* pcode, scalar val);
extern UB* rmaProcessScanoptDumpV(UB* pcode, vec32 *pval);
extern UB* rmaProcessScanChainOptSeqPrims(UB* pcode, scalar val);
extern void schedResetRecoveryDbs(U cedges, EBLK* peblkFirst);
extern UB* rmaEvalUnaryOpV(UB* pcode, vec32* pval);
extern UB* rmaEvalBinaryOpV(UB* pcode, vec32* pval);
extern UB* rmaEvalBinaryOpVOneFanoutCount(UB* pcode, vec32* pval);
extern UB* rmaEvalBinaryOpVLargeFanoutCount(UB* pcode, vec32* pval);
extern UB* rmaEvalAndOpVOneFanoutCount(UB* pcode, vec32* value);
extern UB* rmaEvalAndOpVLargeFanoutCount(UB* pcode, vec32* value);
extern UB* rmaEvalAndOpV(UB* pcode, vec32* value);
extern UB* rmaEvalOrOpVOneFanoutCount(UB* pcode, vec32* value);
extern UB* rmaEvalOrOpVLargeFanoutCount(UB* pcode, vec32* value);
extern UB* rmaEvalOrOpV(UB* pcode, vec32* value);
extern UB* rmaEvalTernaryOpV(UB* pcode, vec32* pval);
extern UB* rmaEvalUnaryOpW(UB* pcode, vec32* pval);
extern UB* rmaEvalBinaryOpW(UB* pcode, vec32* pval);
extern UB* rmaEvalTernaryOpW(UB* pcode, vec32* pval);
extern UB* rmaEvalUnaryOpE(UB* pcode, scalar* pv);
extern UB* rmaEvalBinaryOpE(UB* pcode, scalar* pv);
extern UB* rmaEvalTernaryOpE(UB* pcode, scalar* pv);
extern UB* rmaEvalTernaryOpS(UB* pcode, scalar val);
extern scalar rmaGetScalarFromWCg(vec32* pval, U index);
extern void rmaSetScalarInWCg(vec32* pval, U index, scalar s);
extern void rmaCountRaptorBits(void* pval, void* pvalPrev, U cbits, U vt);
extern void setHsimFunc(void* ip);
extern void unsetHsimFunc(void* ip);
extern UB* getEvcdStatusByFlagsE(scalar* pscalar, UB* pevcdTBDriverFlags, U cdrivers, UB* table, U cbits);
extern UB* getEvcdStatusByFlagsV(vec32* pvec32, UB* pevcdTBDriverFlags, U cdrivers, UB* table, U cbits);
extern UB* getEvcdStatusByFlagsS(scalar* pscalar, UB* pevcdTBDriverFlags, U cdrivers, UB* table);
extern UB* getSingleDrvEvcdStatusS(UB value, U fTBDriver);
extern UB* getSingleDrvEvcdStatusE(scalar* pscalars, U fTBDriver, U cbits);
extern UB* getSingleDrvEvcdStatusV(scalar* pscalars, U fTBDriver, U cbits);
extern UB* getEvcdStatusByDrvEvcdStatus(UB* pdrvevcdStatus, U cdrivers, UB* table, U cbits);
extern void evcdCallback(UP pcode, U cbits);
extern UB* getSavedEvcdStatus(void);
extern void saveEvcdStatus(UB*);
extern void mhdlMarkExport(void*, U);
extern void levelInsertQueue(int);
extern void VcsRciRtl(RP pcode);
extern EBLK* loopReportInlinedSched0Wrapper(EBLK *peblk);
extern void loopReportSched0Wrapper(EBLK *peblk, unsigned int sfType, unsigned int fTH, struct dummyq_struct* pq);
extern void loopReportSchedSemiLerWrapper(EBLK *peblk, int sfType);
extern void CallGraphPushNodeAndAddToGraph(UP flatNode, UP instNum, U dummy);
extern void CallGraphPopNode(void);
extern RP elabGetIpTpl(U in);
extern U rmaEvalBitBothEdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitEdgeQ1W(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitEdgeQXW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitEdgeQ0W(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEval01EdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEval0XEdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEval10EdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEval1XEdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalX1EdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalX0EdgeW(vec32* pvalCurr, vec32* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitPosEdgeE(scalar* pvalCurr, scalar* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitNegEdgeE(scalar* pvalCurr, scalar* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitBothEdgeE(scalar* pvalCurr, scalar* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitEdgeQ1E(scalar* pvalCurr, scalar* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitEdgeQ0E(scalar* pvalCurr, scalar* pvalPrev, U cbits, U* pedges);
extern U rmaEvalBitChangeE(scalar* pvalCurr, scalar* pvalPrev, U cbits, U* pedges);
typedef void (*FuncPtr)();


#ifdef __cplusplus
extern "C" {
#endif
void  hsG_0(struct dummyq_struct * I791, EBLK  * I792, U  I574);
U   hsG_1(U  I805);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
  }
#endif
#endif /*__DO_RMAHDR_*/

