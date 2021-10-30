
#include <list>
#include <vector>
#include <string.H>
#include <GLES2/gl2.H>
#include <pthread.H>
#include <cstring>
#include <jni.H>
#include <unistd.H>
#include <fstream>
#include "Includes/obfuscate.H"
#include "KittyMemory/MemoryPatch.H"
#include "Includes/Logger.H"
#include "Includes/Utils.H"
#include "Menu.H"
#include "Toast.H"
#include <And64InlineHook/And64InlineHook.Hpp>
#include <chrono>
#include <pthread.H>
#include <jni.H>
#include <GLES2/gl2.H>
#include <dlfcn.H>
#include "KittyMemory/MemoryPatch.H"
#include "Includes/Logger.H"
#include "Includes/Utils.H"
#include <pthread.H>
#include <jni.H>
#include "KittyMemory/MemoryPatch.H"
#include "Includes/Logger.H"
#include <GLES2/gl2.H>
#include <dlfcn.H>
#include "KittyMemory/MemoryPatch.H"
#include "Includes/Logger.H"
#include "Includes/Utils.H"
#include "Chams.H"
#include "Unity/Vector2.H"
#include "Unity/Vector3.h"
#include "Unity/Vector4.h"
#include "Unity/Rect.H"
#include "Unity/Color.H"
#include "Unity/Quaternion.H"
#include "SpamChat.H"
#include <sys/stat.h>
#if defined(__aarch64__)
#else

#include <Substrate/SubstrateHook.H>
#include <Substrate/CydiaSubstrate.H>
#include <GLES2/gl2.H>
#include <dlfcn.H>
#include <cstring>
#include <vector>
#include <iostream>
#include <fstream>
#include "monoList.H"
#endif
struct My_Patches {

    MemoryPatch Norecoil,PlantAny,MoneyHack,PlantAny1,PlantAny2,Radar, Wallshot,anticheat2106off_0,anticheat2106off_1,anticheat2106off_2,anticheat2106off_3,anticheat2106off_4,anticheat2106off_5,anticheat2106off_6,anticheat2106off_7,anticheat2106off_8,anticheat2106off_9,anticheat2106off_10,anticheat2106off_11,anticheat2106off_12,anticheat2106off_13,anticheat2106off_14,anticheat2106off_15,anticheat2106off_16,anticheat2106off_17,anticheat2106off_18,anticheat2106off_19,anticheat2106off_20,anticheat2106off_21,anticheat2106off_22,anticheat2106off_23,anticheat2106off_24,anticheat2106off_25,anticheat2106off_26,anticheat2106off_27,anticheat2106off_28,anticheat2106off_29,anticheat2106off_30,anticheat2106off_31,anticheat2106off_32,anticheat2106off_33,anticheat2106off_34,anticheat2106off_35,anticheat2106off_36,anticheat2106off_37,anticheat2106off_38,anticheat2106off_39,anticheat2106off_40,anticheat2106off_41,anticheat2106off_42,anticheat2106off_43,anticheat2106off_44,anticheat2106off_45,anticheat2106off_46,anticheat2106off_47,anticheat2106off_48,anticheat2106off_49,anticheat2106off_50,anticheat2106off_51,anticheat2106off_52,anticheat2106off_53,anticheat2106off_54,anticheat2106off_55,anticheat2106off_56,anticheat2106off_57,anticheat2106off_58,anticheat2106off_59,anticheat2106off_60,anticheat2106off_61,anticheat2106off_62,anticheat2106off_63,anticheat2106off_64,anticheat2106off_65,anticheat2106off_66,anticheat2106off_67,anticheat2106off_68,anticheat2106off_69,anticheat2106off_70,anticheat2106off_71,anticheat2106off_72,anticheat2106off_73,anticheat2106off_74,anticheat2106off_75,anticheat2106off_76,anticheat2106off_77,anticheat2106off_78,anticheat2106off_79,anticheat2106off_80,anticheat2106off_81,anticheat2106off_82,anticheat2106off_83,anticheat2106off_84,anticheat2106off_85,anticheat2106off_86,anticheat2106off_87,anticheat2106off_88,anticheat2106off_89,anticheat2106off_90,anticheat2106off_91,anticheat2106off_92,anticheat2106off_93,anticheat2106off_94,anticheat2106off_95,anticheat2106off_96,anticheat2106off_97,anticheat2106off_98,anticheat2106off_99,anticheat2106off_100,anticheat2106off_101,anticheat2106off_102,anticheat2106off_103,anticheat2106off_104,anticheat2106off_105,anticheat2106off_106,anticheat2106off_107,anticheat2106off_108,anticheat2106off_109,anticheat2106off_110,anticheat2106off_111,anticheat2106off_112,anticheat2106off_113,anticheat2106off_114,anticheat2106off_115,anticheat2106off_116,anticheat2106off_117,anticheat2106off_118,anticheat2106off_119,anticheat2106off_120,anticheat2106off_121,anticheat2106off_122,anticheat2106off_123,anticheat2106off_124,anticheat2106off_125,anticheat2106off_126,anticheat2106off_127,anticheat2106off_128,anticheat2106off_129,anticheat2106off_130,anticheat2106off_131,anticheat2106off_132,anticheat2106off_133,anticheat2106off_134,anticheat2106off_135,anticheat2106off_136;
} hexPatches;
bool G22W = false,
        USPW = false,
        P350W = false,
        DeagleW = false,
        Tec9W = false,
        FiveSevenW = false,
        UMP45W = false,
        MP7W = false,
        P90W = false,
        MP5W = false,
        AKRW = false,
        AKR12W = false,
        M4W = false,
        M16W = false,
        FAMASW = false,
        FnFalW = false,
        AWMW = false,
        M40W = false,
        M110W = false,
        SM1014W = false,
        FabMW = false,
        KnifeW = false,
        KnifeBayonetW = false,
        KnifeKarambitW = false,
        jKommandoW = false,
        KnifeButterflyW = false,
        FlipKnifeW = false,
        KunaiKnifeW = false,
        ScorpionKnifeW = false,
        GrenadeHEW = false,
        GrenadeSmokeW = false,
        GrenadeFlashW = false,
        BombW = false,
        DefuserW = false,
        DefuseKitW = false,
        VestW = false,
        VestAndHelmetW = false,
        HackKitW = false,
        StealKitW = false,
        ContainerW = false,
        BombC4W = false;
float xR[200] = {0.608000,0.601920,0.595840,0.589760,0.583680,0.577600,0.571520,0.565440,0.559360,0.553280,0.547200,0.541120,0.535040,0.528960,0.522880,0.516800,0.510720,0.504640,0.498560,0.492480,0.486400,0.480320,0.474240,0.468160,0.462080,0.456000,0.449920,0.443840,0.437760,0.431680,0.425600,0.419520,0.413440,0.407360,0.401280,0.395200,0.389120,0.383040,0.376960,0.370880,0.364800,0.358720,0.352640,0.346560,0.340480,0.334400,0.328320,0.322240,0.316160,0.310080,0.304000,0.297920,0.291840,0.285760,0.279680,0.273600,0.267520,0.261440,0.255360,0.249280,0.243200,0.237120,0.231040,0.224960,0.218880,0.212800,0.206720,0.200640,0.194560,0.188480,0.182400,0.176320,0.170240,0.164160,0.158080,0.152000,0.145920,0.139840,0.133760,0.127680,0.121600,0.115520,0.109440,0.103360,0.097280,0.091200,0.085120,0.079040,0.072960,0.066880,0.060800,0.054720,0.048640,0.042560,0.036480,0.030400,0.024320,0.018240,0.012160,0.006080,0.000000,0.006080,0.012160,0.018240,0.024320,0.030400,0.036480,0.042560,0.048640,0.054720,0.060800,0.066880,0.072960,0.079040,0.085120,0.091200,0.097280,0.103360,0.109440,0.115520,0.121600,0.127680,0.133760,0.139840,0.145920,0.152000,0.158080,0.164160,0.170240,0.176320,0.182400,0.188480,0.194560,0.200640,0.206720,0.212800,0.218880,0.224960,0.231040,0.237120,0.243200,0.249280,0.255360,0.261440,0.267520,0.273600,0.279680,0.285760,0.291840,0.297920,0.304000,0.310080,0.316160,0.322240,0.328320,0.334400,0.340480,0.346560,0.352640,0.358720,0.364800,0.370880,0.376960,0.383040,0.389120,0.395200,0.401280,0.407360,0.413440,0.419520,0.425600,0.431680,0.437760,0.443840,0.449920,0.456000,0.462080,0.468160,0.474240,0.480320,0.486400,0.492480,0.498560,0.504640,0.510720,0.516800,0.522880,0.528960,0.535040,0.541120,0.547200,0.553280,0.559360,0.565440,0.571520,0.577600,0.583680,0.589760,0.595840,0.601920};
float yR[200] = {0.000000,0.008000,0.016000,0.024000,0.032000,0.040000,0.048000,0.056000,0.064000,0.072000,0.080000,0.088000,0.096000,0.104000,0.112000,0.120000,0.128000,0.136000,0.144000,0.152000,0.160000,0.168000,0.176000,0.184000,0.192000,0.200000,0.208000,0.216000,0.224000,0.232000,0.240000,0.248000,0.256000,0.264000,0.272000,0.280000,0.288000,0.296000,0.304000,0.312000,0.320000,0.328000,0.336000,0.344000,0.352000,0.360000,0.368000,0.376000,0.384000,0.392000,0.400000,0.408000,0.416000,0.424000,0.432000,0.440000,0.448000,0.456000,0.464000,0.472000,0.480000,0.488000,0.496000,0.504000,0.512000,0.520000,0.528000,0.536000,0.544000,0.552000,0.560000,0.568000,0.576000,0.584000,0.592000,0.600000,0.608000,0.616000,0.624000,0.632000,0.640000,0.648000,0.656000,0.664000,0.672000,0.680000,0.688000,0.696000,0.704000,0.712000,0.720000,0.728000,0.736000,0.744000,0.752000,0.760000,0.768000,0.776000,0.784000,0.792000,0.800000,-0.792000,-0.784000,-0.776000,-0.768000,-0.760000,-0.752000,-0.744000,-0.736000,-0.728000,-0.720000,-0.712000,-0.704000,-0.696000,-0.688000,-0.680000,-0.672000,-0.664000,-0.656000,-0.648000,-0.640000,-0.632000,-0.624000,-0.616000,-0.608000,-0.600000,-0.592000,-0.584000,-0.576000,-0.568000,-0.560000,-0.552000,-0.544000,-0.536000,-0.528000,-0.520000,-0.512000,-0.504000,-0.496000,-0.488000,-0.480000,-0.472000,-0.464000,-0.456000,-0.448000,-0.440000,-0.432000,-0.424000,-0.416000,-0.408000,-0.400000,-0.392000,-0.384000,-0.376000,-0.368000,-0.360000,-0.352000,-0.344000,-0.336000,-0.328000,-0.320000,-0.312000,-0.304000,-0.296000,-0.288000,-0.280000,-0.272000,-0.264000,-0.256000,-0.248000,-0.240000,-0.232000,-0.224000,-0.216000,-0.208000,-0.200000,-0.192000,-0.184000,-0.176000,-0.168000,-0.160000,-0.152000,-0.144000,-0.136000,-0.128000,-0.120000,-0.112000,-0.104000,-0.096000,-0.088000,-0.080000,-0.072000,-0.064000,-0.056000,-0.048000,-0.040000,-0.032000,-0.024000,-0.016000,-0.008000};
float zR[200] = {0.000000,-0.006087,-0.012174,-0.018261,-0.024348,-0.030435,-0.036522,-0.042609,-0.048696,-0.054783,-0.060870,-0.066957,-0.073044,-0.079131,-0.085218,-0.091305,-0.097392,-0.103479,-0.109566,-0.115653,-0.121740,-0.127827,-0.133914,-0.140001,-0.146088,-0.152175,-0.158262,-0.164349,-0.170436,-0.176523,-0.182610,-0.188697,-0.194784,-0.200871,-0.206958,-0.213045,-0.219132,-0.225219,-0.231306,-0.237393,-0.243480,-0.249567,-0.255654,-0.261741,-0.267828,-0.273915,-0.280002,-0.286089,-0.292176,-0.298263,-0.304350,-0.310437,-0.316524,-0.322611,-0.328698,-0.334785,-0.340872,-0.346959,-0.353046,-0.359133,-0.365220,-0.371307,-0.377394,-0.383481,-0.389568,-0.395655,-0.401742,-0.407829,-0.413916,-0.420003,-0.426090,-0.432177,-0.438264,-0.444351,-0.450438,-0.456525,-0.462612,-0.468699,-0.474786,-0.480873,-0.486960,-0.493047,-0.499134,-0.505221,-0.511308,-0.517395,-0.523482,-0.529569,-0.535656,-0.541743,-0.547830,-0.553917,-0.560004,-0.566091,-0.572178,-0.578265,-0.584352,-0.590439,-0.596526,-0.602613,-0.608700,0.602613,0.596526,0.590439,0.584352,0.578265,0.572178,0.566091,0.560004,0.553917,0.547830,0.541743,0.535656,0.529569,0.523482,0.517395,0.511308,0.505221,0.499134,0.493047,0.486960,0.480873,0.474786,0.468699,0.462612,0.456525,0.450438,0.444351,0.438264,0.432177,0.426090,0.420003,0.413916,0.407829,0.401742,0.395655,0.389568,0.383481,0.377394,0.371307,0.365220,0.359133,0.353046,0.346959,0.340872,0.334785,0.328698,0.322611,0.316524,0.310437,0.304350,0.298263,0.292176,0.286089,0.280002,0.273915,0.267828,0.261741,0.255654,0.249567,0.243480,0.237393,0.231306,0.225219,0.219132,0.213045,0.206958,0.200871,0.194784,0.188697,0.182610,0.176523,0.170436,0.164349,0.158262,0.152175,0.146088,0.140001,0.133914,0.127827,0.121740,0.115653,0.109566,0.103479,0.097392,0.091305,0.085218,0.079131,0.073044,0.066957,0.060870,0.054783,0.048696,0.042609,0.036522,0.030435,0.024348,0.018261,0.012174,0.006087};
float wR[200] = {0.793300,0.785367,0.777434,0.769501,0.761568,0.753635,0.745702,0.737769,0.729836,0.721903,0.713970,0.706037,0.698104,0.690171,0.682238,0.674305,0.666372,0.658439,0.650506,0.642573,0.634640,0.626707,0.618774,0.610841,0.602908,0.594975,0.587042,0.579109,0.571176,0.563243,0.555310,0.547377,0.539444,0.531511,0.523578,0.515645,0.507712,0.499779,0.491846,0.483913,0.475980,0.468047,0.460114,0.452181,0.444248,0.436315,0.428382,0.420449,0.412516,0.404583,0.396650,0.388717,0.380784,0.372851,0.364918,0.356985,0.349052,0.341119,0.333186,0.325253,0.317320,0.309387,0.301454,0.293521,0.285588,0.277655,0.269722,0.261789,0.253856,0.245923,0.237990,0.230057,0.222124,0.214191,0.206258,0.198325,0.190392,0.182459,0.174526,0.166593,0.158660,0.150727,0.142794,0.134861,0.126928,0.118995,0.111062,0.103129,0.095196,0.087263,0.079330,0.071397,0.063464,0.055531,0.047598,0.039665,0.031732,0.023799,0.015866,0.007933,0.000000,0.007933,0.015866,0.023799,0.031732,0.039665,0.047598,0.055531,0.063464,0.071397,0.079330,0.087263,0.095196,0.103129,0.111062,0.118995,0.126928,0.134861,0.142794,0.150727,0.158660,0.166593,0.174526,0.182459,0.190392,0.198325,0.206258,0.214191,0.222124,0.230057,0.237990,0.245923,0.253856,0.261789,0.269722,0.277655,0.285588,0.293521,0.301454,0.309387,0.317320,0.325253,0.333186,0.341119,0.349052,0.356985,0.364918,0.372851,0.380784,0.388717,0.396650,0.404583,0.412516,0.420449,0.428382,0.436315,0.444248,0.452181,0.460114,0.468047,0.475980,0.483913,0.491846,0.499779,0.507712,0.515645,0.523578,0.531511,0.539444,0.547377,0.555310,0.563243,0.571176,0.579109,0.587042,0.594975,0.602908,0.610841,0.618774,0.626707,0.634640,0.642573,0.650506,0.658439,0.666372,0.674305,0.682238,0.690171,0.698104,0.706037,0.713970,0.721903,0.729836,0.737769,0.745702,0.753635,0.761568,0.769501,0.777434,0.785367};
int fovValues = 360;
float Graph[500];
bool g22pixelcamouflage = false,VelocityGraph = false,GravityHack = false,crosshairscreen = false,NearAndFar = false,g22nest = false,g22pattern = false,g22inferno = false,g22frostwyrm = false,g22relic = false,g22starfall = false,g22new1 = false,g22monster = false,g22whitecarbon = false,g22carbon = false,g22yellowline = false,usp2years = false,usp2yearsred = false,uspgenesis = false,uspfiend = false,usppisces = false,uspnew1 = false,uspline = false,uspyellow = false,uspgeometric = false,usprmsuspiciousspider = false,p350cyber = false,p350savannah = false,p350forestspirit = false,p350rally = false,p350skull = false,p350poison = false,p350nano = false,p350autumn = false,p350blizzard = false,p350blizzard_stsattrack = false,p3504years = false,deaglecaptainmorgan = false,deagleblood = false,deaglepredator = false,deaglereddragon = false,deaglewinner = false,deagledragonglass = false,deaglethunder = false,deagleace = false,deaglepro = false,tec9aurora = false,tec9fable = false,tec9new3 = false,tec9new1 = false,tec9reactor = false,tec9spot = false,fivesevenvenom = false,fiveseventactical = false,fivesevennew2 = false,fivesevenpoison = false,fivesevenzone = false,fivesevensightred = false,fivesevensightgrey = false,fivesevenrush = false,ump45cyberpunk = false,ump45pixel = false,ump45shark = false,ump45winged = false,ump45beast = false,ump45iron = false,ump45pixelv2 = false,ump45cerberus = false,ump45gas = false,ump45whitecarbon = false,ump45geometric = false,ump45spirit = false,ump454years = false,mp7offroad = false,mp7arcade = false,mp72years = false,mp72yearsred = false,mp7thorn = false,mp7lich = false,mp7new1 = false,mp7girl = false,mp7graffity = false,mp7monkey = false,mp7revival = false,mp7blizzard = false,p90radiation = false,p90ghoul = false,p90fury = false,p90pilot = false,p90jungle = false,p90samurai = false,p90ironwill = false,mp5projectz9 = false,mp5reactor = false,mp5zone = false,mp5northernfury = false,mp54years = false,akrtreasurehunter = false,akrtiger = false,akrsport = false,akrnecromancer = false,akrcarbon = false,akr2years = false,akr12railgun = false,akr12pixelcamouflage = false,akr12mechanic = false,akr12aurora = false,akrworm = false,akrnew2 = false,akr12_carbon = false,akr12_spring = false,akrdragon = false,akrnano = false,akr12_geometric = false,akr12_4years = false,akr12carbon = false,akr12spring = false,akr12geometric = false,akr124years = false,m4predator = false,m4necromancer = false,m4tiger = false,m4pro = false,m4grandprix = false,m40quake = false,m40pro = false,m40beagle = false,m4lizard = false,m4samurai = false,m4new2 = false,m40_new1 = false,m40_new2 = false,m40_monster = false,m4wolf = false,m4arm4deleted = false,m4revival = false,m16camouflage = false,m16winged = false,m16facet = false,m16ironwill = false,m164years = false,famasbeagle = false,famasfury = false,famashull = false,famasmonster = false,famasautumn = false,fnfalleather = false,fnfalacidcarbon = false,fnfaltactical = false,fnfalgreen = false,fnfalphoenix = false,awmsport = false,awmphoenix = false,awmgear = false,awmscratch = false,awmgenesis = false,awm2yearsred = false,awmsportv2 = false,awmtreasurehunter = false,awmdragon = false,awmpolarnight = false,m40new1 = false,m40new2 = false,m40monster = false,m110cyber = false,m110transition = false,m110flow = false,sm1014facet = false,sm1014pathfinder = false,sm1014necromancer = false,sm1014northerncamouflage = false,sm1014quake = false,sm1014branches = false,sm1014blaster = false,sm1014new1 = false,sm1014shark = false,fabmreactor = false,fabmgreen = false,fabmparrot = false,fabmflight = false,bayonetetblueblood = false,bayonetetancient = false,bayonetetscratch = false,bayonetetuniverse = false,bayonetyonet_frozen = false,karambitclaw = false,karambiticedragon = false,karambitscratch = false,karambituniverse = false,karambitgold = false,karambitambitgold = false,karambitambit_coldflame = false,karambitambit_frozen = false,karambitambit_snowcamo = false,jkommandoancient = false,jkommandoreaper = false,jkommandofloral = false,jkommandoluxury = false,jkommandofrozen = false,butterflygold = false,butterflydragonglass = false,butterflyred = false,butterflystarfall = false,butterflynew1 = false,butterflyerfly_coldflam = false,flipknifenew1 = false,flipknifenew2 = false,flipknifenew3 = false,flipknifenew4 = false,flipknifenew5 = false,flipknifesnowcamo = false,kunaibone = false,kunailuxury = false,kunaipoison = false,kunairadiation = false,kunaireaper = false,kunaiknife_coldflame = false,kunaiknife_snowcamo = false,scorpioncase = false,scorpionbox = false,scorpioncamouflage = false,scorpiongreen = false,scorpionscratch = false,scorpionsky = false,scorpionknife_coldflame = false;
bool AimFovEnable = false,CurrectSpeed = false,ArrayList = false,ArrayPlayer = false,AimDist = false,PublicInt4b = false,PublicInt3b = false,PublicInt2b = false,PublicInt1b = false,MoneyH = false,LineRun = false,LineRunner = false,PlantAnyWhere = false,fastknife = false,fastdetonation = false,fastdefuse = false,fastplant = false,SpoofId = false, SpoofTag = false,DepthRangeOn = false,NightMod = false,SpinBot = false,RespawnHack = false,rag = false,SpawnGrenadeEnemy = false,UnBna = false,CullFaceOn = false,BoxPlayerInfoRGB = false,JumpHack = false,FakeBan = false,PolygonOn = false,BlendFuncOn = false,AllShader = false,PizdaChams = false,BoxPlayerInfo = false,AimFovEnableV2 = false,BombDetonation = false,SpawnGrenade = false,fovplayer = false,wallshots = false,noclip = false,fields = false,handsposition = false,AirJump = false,norec = false,radarhack = false,noweapondrop = false,UnlimAmmo = false,godmod = false,FireRates = false,dropknifes = false,HideNick = false,hideid = false,OutChams = false,SpamsChat = false,triggerbot = false,Grenades = false,ShootG = false,silentaim = false,crosshairs = false,masskill = false,ShootButton = false,CurrectRotation = false,TestRage = false,FlyOn = false,CameraOnOff = false, wirechams = false,CHAMSRGB = false,aimbot = false,cam = false, KILLES = false,ESPRGB = false,feature144 = false,feature2 = false,feature23 = false, feature3 = false, featureHookToggle = false,feature33 = false, feature4 = false, feature22 = false, feature5 = false, feature6 = false, feature7 = false, feature8 = false, feature9 = false, feature10 = false, feature11 = false, feature12 = false, feature13 = false, feature14 = false, feature15 = false, feature16 = false, feature17 = false, telekill = false;
bool ESP, esp360,ESPDistance,ESPTeamminate,ESPSkeleton, ESPLine, ESPBox, ESPHealth, ESPCrosshair = false;
int ESPBoxStyle = 1; /*Настройка коробки*/
int ESPLineLocation = 2; /*Расположение линий*/
float ESPDist = 1;
Color color; /*Цвет есп*/
bool silentaim1 = false,silentaim2 = false,silentaim3 = false;
bool neko = false;
bool LobbySpam = false, ChatSpam = false,FriendSpam = false,FriendSpam1 = false,FriendSpam2 = false,FriendSpam3 = false;
Color clre;
Color BoxColorStyle;
Color colorCross;
bool chamstoggle = false;
float rq = 1.0f;
float gq = 0.0f;
float bq = 0.0f;
int re = 255;
int ge = 0;
int be =0;
int kills = 0;
int mes = 0;
int reBox = 255;
int geBox = 0;
int beBox =0;
int mesBox = 0;
float SpeedCurr;
int ArrayListR = 255;
int ArrayListG = 0;
int ArrayListB = 0;
int ArraySize = 30;
int LineRunInt = 1;
float fovVal = 360;
float linewidth = 0.0f;
float aimfov = 0.0f;
float REDS = 255.0f;
float GREENS = 0.0f;
float BLUES = 0.0f;
float RED = 255.0f;
float GREEN = 0.0f;
float BLUE = 0.0f;
float XRage = -360.0f;
float WRage = -360.0f;
int ShootValue;
float crosshairsize = 1.0f;
float speedHack = 0.0f;
float speedHackAllSide = 0.0f;
float handsxq;
float handsyq;
float handszq;
float fovplayervalue;
float HeightFov = 1.0f;
float WidthFov = 1.0f;
int isdeadvalue = 0;
int BombValue = 0;
int ArmorValue = 0;
int OneFunc = 0;
int TwoFunc = 0;
int DepthFuncValue = 0;
int DepthFuncValueTwo = 0;
// CCCCCCHHHHHAAAAAAAAMMMMMSSSSS
int DrawElement = 0;
using namespace std;
static void *handle;
static const char* shaderName;
static const char* blend;
static const char* blends;
static GLuint shader = 0;
static bool enableWallhack;
static bool wireFrame;
static bool outline;
static bool pizdas;
float glow;
float r = 0;
float g = 0;
float b = 0;
float alphaonef = 0.8f;
float alphatwof = 0.8f;
float poligonff = 0.0f;
float linewidthf = 0.0f;
float rv = 255, gv = 0, bv = 0,mv = 0;
int df = 0;
int rgb = 1;
int ddf = 0;
int testq = 0;
float ab = -5.0;
float ba = 5.0;
static bool RGBB;
float AlphaColor = 0;
float JumpX = 1;
float JumpY = 1;
float JumpZ = 1;
float DepthFor = 1;
float DepthNear = 0;
int SpawnValue = 1;
int CullFaceValue;
float speedSpin = 1;
int AimValue = 1;
int FreeFunc = 0;
int ThreeFunc = 0;
int LineInt = 0;
float LineCoord[][3] = {};
float nearcount = 1;
float farcount = 1;
int GLU[] = {GL_ZERO,GL_ONE,GL_SRC_COLOR,GL_ONE_MINUS_SRC_COLOR,GL_DST_COLOR,GL_ONE_MINUS_DST_COLOR,GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA,GL_DST_ALPHA,GL_ONE_MINUS_DST_ALPHA,GL_SRC_ALPHA_SATURATE,GL_CONSTANT_COLOR,GL_ONE_MINUS_CONSTANT_COLOR,GL_CONSTANT_ALPHA,GL_ONE_MINUS_CONSTANT_ALPHA};
float RadiusCircle = 1;
float YCircle = 1;
#define libName OBFUSCATE("libil2cpp.so")
bool (*isLocal)(void *instance);
int (*GetTeam)(void *instance);
void* (*GetPhotonPlayer)(void *instance);
int (*GetPlayerHealths)(void *instance);
monoString*(*getactivity)(void *instance);
monoString* (*GetNickName)(void *instance);
bool (*isDead)(void *instance);
double (*GetBombTime3)(void *instance);
Vector3 LastPosition;
int CurrectSpeedInt = 1;
int old_posint = 0;
Vector3 old_positions;
float TimeDelta() { //private unsafe string CreateString(sbyte* value)
    float (*GetTime)(void *instance) = (float (*)(void *)) getAbsoluteAddress("libil2cpp.so", 0x108C100);
    return GetTime(NULL);
}
Vector4 V3toV4(Vector3 a){
    return Vector4(a.X,a.Y,a.Z);
}
Vector3 V4toV3(Vector4 a){
    return Vector3(a.X,a.Y,a.Z);
}
Vector3 get_position(void *transform) {
    if (!transform)
        return Vector3();

    Vector3 position;

    static const auto get_position_injected = reinterpret_cast<uint64_t(__fastcall *)(void *,
                                                                                      Vector3 &)>(getAbsoluteAddress(libName, 0x108D1C8));
    get_position_injected(transform, position);

    return position;
}

//Component.get_transform();
void *get_transform(void *player) {
    if (!player)
        return NULL;

    static const auto get_transform_injected = reinterpret_cast<uint64_t(__fastcall *)(
            void *)>(getAbsoluteAddress(libName, 0x136B7F0));

    return (void *) get_transform_injected(player);
}

//CameraManager.get_MainCamera();
void *get_camera() {

    static const auto get_camera_injected = reinterpret_cast<uint64_t(__fastcall *)()>(getAbsoluteAddress(
            libName, 0xC0667C));

    return (void *) get_camera_injected();
}

//Screen.get_height();
int get_screen_height() {

    static const auto get_height_injected = reinterpret_cast<uint64_t(__fastcall *)()>(getAbsoluteAddress(
            libName, 0x108208C));

    return (int) get_height_injected();
}
//Screen.get_width();
int get_screen_width() {

    static const auto get_width_injected = reinterpret_cast<uint64_t(__fastcall *)()>(getAbsoluteAddress(
            libName, 0x1082048));

    return (int) get_width_injected();
}
//Camera.WorldToScreenPoint_Injected
//public Vector3 WorldToScreenPoint(Vector3 position, MonoorSetreo..., out Vector3)
Vector4 WorldToScreenPoint(void *transform, Vector4 test) {
    if (!transform)
        return Vector4();

    Vector4 position;

    static const auto WorldToScreenPoint_Injected =  reinterpret_cast<uint64_t(__fastcall *)(void *,
                                                                                             Vector4,
                                                                                             int,
                                                                                             Vector4 &)>(getAbsoluteAddress(libName, 0x1368E2C));
    WorldToScreenPoint_Injected(transform, test, 2, position);
    return position;
}




//Camera.WorldToScreenPoint_Injected
//public Vector3 WorldToScreenPoint(ref Vector3 position, MonoorSetreo..., out Vector3)

/*Vector3 WorldToScreenPoint(void* transform, Vector3 test) {
    if (!transform)
        return Vector3();

    Vector3 position;

    static const auto WorldToScreenPoint_Injected = reinterpret_cast<uint64_t(__fastcall*)(void*, Vector3&, int, Vector3&)>(getAbsoluteAddress(libName, 0x14B104C));
    WorldToScreenPoint_Injected(transform, test, 2, position);

    return position;
}*/
float GetPlayerHealth(void* player) {
    return *(float*)((uint64_t)player + 0x16C);

}
string GetPlayerUserName(void* player) {
    return *(string*)((uint64_t)player + 0x170);

}
bool PlayerAlive(void *player) {
    return player != NULL && GetPlayerHealth(player) > 0;
}

int GetPlayerTeam(void *player) {
    return *(int *) ((uint64_t) player + 0x184);
}
bool IsPlayerDead(void *player) {
    return player == NULL && GetPlayerHealth(player) < 0;
}

Vector3 GetPlayerLocation(void *player) {
    Vector3 location;
    location = get_position(get_transform(player));

    return location;
}
Vector4 GetPlayerHead(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0xC);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerHip(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x14);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerleftLowerArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x1C);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerleftUpperArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x18);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightLowerArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x24);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightUpperArm(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x20);
    location = V3toV4(get_position(head));

    return location;
}


Vector4 GetPlayerleftLowerLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x2C);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerleftUpperLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x28);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightLowerLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x34);
    location = V3toV4(get_position(head));

    return location;
}
Vector4 GetPlayerrightUpperLeg(void *player) {
    Vector4 location;
    void* aimingdata = *(void **) ((uint64_t) player + 0xA4);
    void* head = *(void **) ((uint64_t) aimingdata + 0x30);
    location = V3toV4(get_position(head));

    return location;
}

struct me_t {
    void *object;
    Vector3 location;
    bool firing;
    int team;
    Vector3 Rotation;
    Vector2 joystick;
};

me_t *me;
static void *get_arms(void *player) {
    return *(void **)((uint64_t) player + 0x3C);
}
float NormalizeAngle (float angle){
    while (angle>360)
        angle -= 360;
    while (angle<0)
        angle += 360;
    return angle;
}

Vector3 NormalizeAngles (Vector3 angles){
    angles.X = NormalizeAngle (angles.X);
    angles.Y = NormalizeAngle (angles.Y);
    angles.Z = NormalizeAngle (angles.Z);
    return angles;
}

Vector3 ToEulerRad(Quaternion q1){
    float Rad2Deg = 360.0f / (M_PI * 2.0f);

    float sqw = q1.W * q1.W;
    float sqx = q1.X * q1.X;
    float sqy = q1.Y * q1.Y;
    float sqz = q1.Z * q1.Z;
    float unit = sqx + sqy + sqz + sqw;
    float test = q1.X * q1.W - q1.Y * q1.Z;
    Vector3 v;

    if (test>0.4995f*unit) {
        v.Y = 2.0f * atan2f (q1.Y, q1.X);
        v.X = M_PI / 2.0f;
        v.Z = 0;
        return NormalizeAngles(v * Rad2Deg);
    }
    if (test<-0.4995f*unit) {
        v.Y = -2.0f * atan2f (q1.Y, q1.X);
        v.X = -M_PI / 2.0f;
        v.Z = 0;
        return NormalizeAngles (v * Rad2Deg);
    }
    Quaternion q(q1.W, q1.Z, q1.X, q1.Y);
    v.Y = atan2f (2.0f * q.X * q.W + 2.0f * q.Y * q.Z, 1 - 2.0f * (q.Z * q.Z + q.W * q.W)); // yaw
    v.X = asinf (2.0f * (q.X * q.Z - q.W * q.Y)); // pitch
    v.Z = atan2f (2.0f * q.X * q.Y + 2.0f * q.Z * q.W, 1 - 2.0f * (q.Y * q.Y + q.Z * q.Z)); // roll
    return NormalizeAngles (v * Rad2Deg);
}
float upval = 1.0f;
float upvalV2 = 1.0f;
float upval2 = 1.0f;
float boxhight = 1.0f;
float boxsize = 1.0f;
char MeQuaternions[] = "Toggle_lsls";
const char * tesa = "Toggle_lsls";
float AimFovs(void *player) {
    Rect Rects;
    Vector3 PlayerPossq = GetPlayerLocation(player);
    Vector4 PlayerPoss = Vector4(PlayerPossq.X,PlayerPossq.Y,PlayerPossq.Z);
    void *Cam = get_camera();
    Vector4 PosNews = {0.f, 0.f, 0.f};
    PosNews = WorldToScreenPoint(Cam, PlayerPoss);
    if (PosNews.Z < 1.f) {
        return (float)1.0f;
    }else{
        Vector4 Origins;
        Origins = PlayerPoss;
        Origins.Y += 0.f;
        float posnum2 = upval; /******* Hight slider * 0.1 ********/
        float posnum22 = upval2;/******* Size slider * 0.1 ********/
        Origins.Y += posnum2;
        Vector4 BoxPosNews = {0.f, 0.f, 0.f};
        BoxPosNews = WorldToScreenPoint(Cam, Origins);
        float Hights =
                abs(BoxPosNews.Y - PosNews.Y) * (posnum22 / posnum2), Widths =
                Hights * 0.60f;

        Rects = Rect(BoxPosNews.X - Widths / 2.f,
                     get_screen_height() - BoxPosNews.Y,
                     Widths, Hights
        );
        Vector2 PlayerB;
        PlayerB.X = Rects.X + Rects.W / 2;
        PlayerB.Y = Rects.Y + Rects.H / 2;
        Vector2 crosshair;
        crosshair.X = get_screen_width() / 2;
        crosshair.Y = get_screen_height() / 2;
        Vector2 CrossRadius;
        CrossRadius.X = crosshair.X + (get_screen_width() / 720 * aimfov);
        CrossRadius.Y = crosshair.Y;
        float DisRadius = Vector2::Distance(crosshair, CrossRadius);
        float Cross = 0.0f;
        float PlayerDis = Vector2::Distance(crosshair, PlayerB);
        if (PlayerB.X < get_screen_width() / 2) {
            Cross = PlayerDis - DisRadius;
        } else {
            Cross = PlayerDis - DisRadius;
        };
        return (float) Cross;
    }

};
bool AimFovBool(float value){
    if(value > 0.0f){
        return false;
    }else{
        return true;
    };
};
void *myPlayer = NULL;
void *LocalPlayers = NULL;
void *BombUpdatePlayer = NULL;
struct enemy_t {
    void *object;
    Vector3 location;
};
/**Entity_Manager**/
class ESPManager {
public:
    std::vector<enemy_t *> *enemies;

    ESPManager() {
        enemies = new std::vector<enemy_t *>();
    }

    bool isEnemyPresent(void *enemyObject) {
        for (std::vector<enemy_t *>::iterator it = enemies->begin(); it != enemies->end(); it++) {
            if ((*it)->object == enemyObject) {
                return true;
            }
        }

        return false;
    }

    void removeEnemy() {
        for (int i = 0; i < enemies->size(); i++) {
            enemies->erase(enemies->begin() + i);
            return;
        }
    }

    void tryAddEnemy(void *enemyObject) {
        if (isEnemyPresent(enemyObject)) {
            return;
        }

        enemy_t *newEnemy = new enemy_t();

        newEnemy->object = enemyObject;
        enemies->push_back(newEnemy);
    }

    void updateEnemies(void *enemyObject) {
        for (int i = 0; i < enemies->size(); i++) {
            enemy_t *current = (*enemies)[i];

            if ((GetPlayerTeam(myPlayer) == GetPlayerTeam(current->object))) {
                enemies->erase(enemies->begin() + i);
            }
            if(current->object == enemyObject){
                current->location = GetPlayerLocation(current->object);
            }
        }
    }

    void removeEnemyGivenObject(void *enemyObject) {
        for (int i = 0; i < enemies->size(); i++) {
            if ((*enemies)[i]->object == enemyObject) {
                enemies->erase(enemies->begin() + i);

                return;
            }
        }
    }
    enemy_t *GetPlayerAim(){
        if(enemies->empty()){
            return NULL;
        }
        enemy_t *closestEnemy = NULL;
        for(int i = 0; i<enemies->size(); i++) {
            float Dist = Vector3::Distance(GetPlayerLocation(myPlayer),GetPlayerLocation((*enemies)[i]->object));
            if(AimFovEnable) {
                if (AimFovBool(AimFovs((*enemies)[i]->object))) {
                    if(AimDist){
                        if(Dist < RadiusCircle){
                            closestEnemy = (*enemies)[i];
                        }

                    }else{
                        closestEnemy = (*enemies)[i];
                    }
                }
            }else{
                closestEnemy = (*enemies)[i];
            }
        }
        return  closestEnemy;
    }
};

ESPManager *espManager;
int isOutsideSafezone(Vector2 pos, Vector2 screen) {
    Vector2 mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
    Vector2 mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);

    int result = 0;
    if (pos.Y < mSafezoneTopLeft.Y) {
        result |= 1;
    }
    if (pos.X > mSafezoneBottomRight.X) {
        result |= 2;
    }
    if (pos.Y > mSafezoneBottomRight.Y) {
        result |= 4;
    }
    if (pos.X < mSafezoneTopLeft.X) {
        result |= 8;
    }
    return result;
}

Vector2 pushToScreenBorder(Vector2 Pos, Vector2 screen, int borders, int offset) {
    int x = (int)Pos.X;
    int y = (int)Pos.Y;
    if ((borders & 1) == 1) {
        y = 0 - offset;
    }
    if ((borders & 2) == 2) {
        x = (int)screen.X + offset;
    }
    if ((borders & 4) == 4) {
        y = (int)screen.Y + offset;
    }
    if ((borders & 8) == 8) {
        x = 0 - offset;
    }
    return Vector2(x, y);
}
bool (*isShooting)(void *instance);
bool (*isAiming)(void *instance);
string lols = "lol";


string con(string first,string second) {
    string combined = string(first) + second;
    return combined;
}
extern "C" {
JNIEXPORT jstring
JNICALL
Java_com_eban_modmenu_ESPView_FunctionArray(JNIEnv *env, jobject thiz){
    std::string combined = "";
    if(aimbot){
        combined = con(combined, "AimBot_");
    }

    if(AimFovEnable){

        combined = con(combined, "AimFov ");
        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(aimfov));
        combined = con(combined,tree);
        combined = con(combined, "]_");

    }
    if(AimDist){
        combined = con(combined, "Aim Distance_");
        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(RadiusCircle));
        combined = con(combined,tree);
        combined = con(combined, "]_");

    }

    if(esp360){
        combined = con(combined, "AimCircle_");

        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(RadiusCircle));
        combined = con(combined,tree);
        combined = con(combined, "]_");

    }
    if(godmod){
        combined = con(combined, "GodMod_");
    }
    if(FireRates){
        combined = con(combined, "FireRate_");
    }
    if(AirJump){
        combined = con(combined, "AirJump_");
    }
    if(UnlimAmmo){
        combined = con(combined, "UnlimAmmo_");
    }
    if(radarhack){
        combined = con(combined, "RadarHack_");
    }
    if(norec){
        combined = con(combined, "NoRecoil_");
    }
    if(handsposition){
        combined = con(combined, "Hands ");

        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(handsxq));
        combined = con(combined,tree);
        combined = con(combined, ",");
        char trees[222]; sprintf(trees, "%i",int(handsyq));

        combined = con(combined,trees);
        combined = con(combined, ",");
        char treess[222]; sprintf(treess, "%i",int(handszq));
        combined = con(combined,treess);
        combined = con(combined, "]_");

    }
    if(SpoofId){
        combined = con(combined, "Hide Id_");
    }
    if(HideNick){
        combined = con(combined, "Hide Nick_");
    }
    if(SpoofTag){
        combined = con(combined, "Hide Tag_");
    }
    if(BombDetonation){
        combined = con(combined, "BombDetonation_");
    }
    if(JumpHack){
        combined = con(combined, "JumpHack ");

        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(JumpX));
        combined = con(combined,tree);
        combined = con(combined, ",");
        char trees[222]; sprintf(trees, "%i",int(JumpY));
        combined = con(combined,trees);
        combined = con(combined, ",");
        char treess[222]; sprintf(treess, "%i",int(JumpZ));
        combined = con(combined,treess);
        combined = con(combined, "]_");

    }
    if(wallshots){
        combined = con(combined, "WallShot_");
    }
    if(SpawnGrenade){
        combined = con(combined, "Nuke_");
    }
    if(SpawnGrenadeEnemy){
        combined = con(combined, "Nuke Enemy_");
    }
    if(rag){
        combined = con(combined, "Ragdoll_");
    }
    if(SpinBot){
        combined = con(combined, "SpinBot ");

        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(speedSpin));
        combined = con(combined,tree);
        combined = con(combined, "]_");

    }
    if(silentaim){
        combined = con(combined, "Silent Aim_");
    }
    if(fastdefuse){
        combined = con(combined, "Fast Defuse_");
    }
    if(fastplant){
        combined = con(combined, "Fast Plant_");
    }
    if(fastdetonation){
        combined = con(combined, "Fast Detonation_");
    }
    if(MoneyH){
        combined = con(combined, "Mcombinedy Hack_");
    }

    if(LineRunner){
        combined = con(combined, "Line Run_");
    }

    if(LobbySpam){
        combined = con(combined, "Lobby Spam_");
    }

    if(ChatSpam){
        combined = con(combined, "Chat Spam_");
    }


    if(chamstoggle){
        combined = con(combined, "Chams_");
    }
    if(wirechams){
        combined = con(combined, "Chams WireWrame_");
    }
    if(OutChams){
        combined = con(combined, "Chams OutLine_");
    }
    if(CHAMSRGB){
        combined = con(combined, "Chams RGB_");
    }
    if(ESP){
        if(ESPBox || ESPLine){
            combined = con(combined, "Esp");
            int inq = 0;
			combined = con(combined, "[");
            if(ESPBox){
                
                combined = con(combined,"Box");
                inq = 1;
            }
            if(ESPBox){
            if(inq == 1){
                combined = con(combined, ",");
             
            }
            if(ESPBoxStyle == 1){
			combined = con(combined,"Round");
			inq = 1;
			            }else{
			combined = con(combined,"Corner");
			inq = 1;
            }
            
            }
            if(ESPLine){
            if(inq == 1){
                combined = con(combined, ",");
             
            }
            combined = con(combined,"Line");
            inq = 1;
            }
            if(ESPSkeleton){
            if(inq == 1){
                combined = con(combined, ",");
             
            }
            combined = con(combined,"Skeleton");
            inq = 1;
            }
            combined = con(combined, "]_");
        }

    }
    if(crosshairs){
        combined = con(combined, "CrossHair ");

        combined = con(combined, "[");
        char tree[222]; sprintf(tree, "%i", int(crosshairsize));
        combined = con(combined,tree);
        combined = con(combined, "]_");

    }

    return env->NewStringUTF(combined.c_str());
}

JNIEXPORT jobjectArray JNICALL
Java_com_eban_modmenu_ESPView_data(JNIEnv *env, jobject jobj,jfloat x,jfloat y,jfloat z,jfloat x2,jfloat y2,jfloat z2){
    jobjectArray ret;
    int i;
    Vector4 leak = Vector4(x,y,z);
    Vector4 leak2 = Vector4(x2,y2,z2);
    void *CamX = get_camera();

    Vector4 WordOne = {0.f, 0.f, 0.f};
    WordOne = WorldToScreenPoint(CamX,leak);
    Vector4 WordOne2 = {0.f, 0.f, 0.f};
    WordOne2 = WorldToScreenPoint(CamX,leak2);
    char one[999];
    char two[999];
    char three[999];
    sprintf(one, "%f", WordOne.X);
    sprintf(two, "%f", WordOne.Y);
    sprintf(three, "%f", WordOne.Z);
    char one2[999];
    char two2[999];
    char three2[999];
    sprintf(one2, "%f", WordOne2.X);
    sprintf(two2, "%f", WordOne2.Y);
    sprintf(three2, "%f", WordOne2.Z);
    char *message[6]= {one,two,three,one2,two2,three2};

    ret= (jobjectArray)env->NewObjectArray(6,
                                           env->FindClass("java/lang/String"),
                                           env->NewStringUTF(""));

    for(i=0;i<6;i++) {
        env->SetObjectArrayElement(
                ret,i,env->NewStringUTF(message[i]));
    }
    return(ret);
}
JNIEXPORT void JNICALL
Java_com_eban_modmenu_FloatingModMenuService_DrawOn(JNIEnv *env, jclass clazz, jobject esp, jobject canvas) {
    jclass Esp = env->GetObjectClass(esp);

    jmethodID DrawFilledRect = env->GetMethodID(Esp, "DrawFilledRect",
                                                 "(Landroid/graphics/Canvas;IIIIFFFF)V");
    jmethodID DrawRect = env->GetMethodID(Esp, "DrawRect",
                                          "(Landroid/graphics/Canvas;IIIIIFFFF)V");
    jmethodID DrawLines = env->GetMethodID(Esp, "DrawLine",
                                           "(Landroid/graphics/Canvas;IIIIFFFFF)V");
    jmethodID DrawText = env->GetMethodID(Esp, "DrawText",
                                          "(Landroid/graphics/Canvas;IIIILjava/lang/String;FFF)V");
    jmethodID DrawTyan = env->GetMethodID(Esp, "DrawTyan",
                                          "(Landroid/graphics/Canvas;IIIIIFFFF)V");
    jmethodID DrawCircle = env->GetMethodID(Esp, "DrawCircle",
                                            "(Landroid/graphics/Canvas;IIIIFFFF)V");
    jmethodID DrawFilledCircle = env->GetMethodID(Esp, "DrawFilledCircle",
                                                  "(Landroid/graphics/Canvas;IIIIFFF)V");
    jmethodID DrawRun = env->GetMethodID(Esp, "DrawRun",
                                                  "(Landroid/graphics/Canvas;FFFIIIFI)V");
    jmethodID DrawTexts = env->GetMethodID(Esp, "DrawTexts",
                                           "(Landroid/graphics/Canvas;IIIIFFF)V");
    jmethodID DrawArrayPlayer = env->GetMethodID(Esp, "DrawArrayPlayer",
                                           "(Landroid/graphics/Canvas;IIIIFFFLjava/lang/String;)V");
    if(ArrayList){
        env->CallVoidMethod(esp, DrawTexts, canvas, (jint) 255,
                            (jint) ArrayListR, (jint) ArrayListG, (jint) ArrayListB,
                            (jfloat) get_screen_width()-100,
                            (jfloat) 50,
                            (jfloat) ArraySize);
    }
    if(VelocityGraph){
    if(myPlayer != NULL){
        if(old_posint == 1){
            char hps[99];
            int xscreen = get_screen_width()/2-500;
            int yscreen = get_screen_height()/2+(get_screen_height()/3);
            Vector3 velocity = *(Vector3 *) ((uint64_t) myPlayer + 0x6C);
            float accurateSpeed = Vector3::Magnitude(velocity)*10; //Вот в ТАКОМ случае deltaTime нужен
            float currectspeed = round(accurateSpeed * 100)/100*2;
            if(currectspeed >= 100){
                currectspeed = 100;
            }
            Graph[249] = round(currectspeed/10)*10;
            sprintf(hps,"%f", currectspeed);
            jstring HealthText = env->NewStringUTF(hps);
            env->
            CallVoidMethod(esp, DrawText, canvas, (jint)
            255,
            (jint) 255, (jint) 255, (jint) 255,
            HealthText,
            (jfloat) 2400 / 2 + 40, (jfloat) 1080.0 / 3,
            (jfloat) 50);
            env->CallVoidMethod(esp, DrawLines, canvas, (jint) 255, (jint) 255,
            (jint) 255, (jint) 255, (jfloat) 3,
            (jfloat) xscreen+248*4,
            (jfloat) yscreen,
            (jfloat) xscreen,
            (jfloat) yscreen);
            env->CallVoidMethod(esp, DrawLines, canvas, (jint) 255, (jint) 255,
            (jint) 255, (jint) 255, (jfloat) 3,
            (jfloat) xscreen,
            (jfloat) yscreen,
            (jfloat) xscreen,
            (jfloat) yscreen-100*2);
            for(int count = 0; count < 250; count++){
                if(count == 249){
                    continue;
                }
                int x = xscreen + count*4;
                float y = yscreen - (Graph[count]*2);
                int xstep = xscreen + (count+1)*4;
                float ystep = yscreen - (Graph[count+1]*2);
                env->CallVoidMethod(esp, DrawLines, canvas, (jint) 255, (jint) 255,
                (jint) 255, (jint) 255, (jfloat) 3,
                (jfloat) x,
                (jfloat) y,
                (jfloat) xstep,
                (jfloat) ystep);

            }
            for(int counters = 0; counters < 250; counters++){
                if(counters == 249){

            }else{Graph[counters] = Graph[counters+1];}
            }
            old_positions = GetPlayerLocation(myPlayer);
        }else{
            old_positions = GetPlayerLocation(myPlayer);
            old_posint = 1;
            for(int counter = 0; counter < 250; counter++){
                Graph[counter] = 0;
            }
        }
    }
}
    if (LineRunner) {
        if(myPlayer != NULL){
                Vector3 MyPas = GetPlayerLocation(myPlayer);
                env->CallVoidMethod(esp, DrawRun, canvas,
                                    (jfloat) MyPas.X, (jfloat) MyPas.Y, (jfloat) MyPas.Z,
                                    (jint) colorCross.r,(jint) colorCross.g,(jint) colorCross.b,
                                    (jfloat) 4,(jint) get_screen_height());
                LineRunInt = 0;
            }
    }
    if (BoxPlayerInfo) {
        if (espManager->enemies->empty()) {
            return;
        }
        for (int i = 0; i < espManager->enemies->size(); i++) {

            void *targetbox = (*espManager->enemies)[i]->object;
                    if (AimFovBool(AimFovs(targetbox))) {
                        Color BoxClr = Color::Black(255);
                        Color TextColor = Color::White(255);
                        env->CallVoidMethod(esp, DrawFilledRect, canvas, (jint) BoxClr.a,
                                            (jint) BoxClr.r, (jint) BoxClr.g, (jint) BoxClr.b,
                                            (jfloat) 2400 / 4, (jfloat) 1080 / 1.5f, (jfloat) 2400 / 4 * 2,
                                            (jfloat) 1080 / 5);
                        env->CallVoidMethod(esp, DrawFilledRect, canvas, (jint) BoxColorStyle.a,
                                            (jint) BoxColorStyle.r, (jint) BoxColorStyle.g,
                                            (jint) BoxColorStyle.b,
                                            (jfloat) 2400 / 4, (jfloat) 1080 / 1.5f + 1080 / 5,
                                            (jfloat) 2400 / 4 * 2,
                                            (jfloat) 1080 / 5 / 25);
                        jstring qssq = env->NewStringUTF("NICKNAME");
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                            (jint) TextColor.r, (jint) TextColor.g, (jint) TextColor.b,
                                            qssq,
                                            (jfloat) 2400 / 4 + 50, (jfloat) 1080.0 / 1.5f + 60,
                                            (jfloat) 50);
                        char nickname[99];
                        void *paramsphoton = GetPhotonPlayer(targetbox);
                        sprintf(nickname, "%s", GetNickName(paramsphoton)->toChars());
                        jstring qssq1 = env->NewStringUTF("NULL");
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                            (jint) TextColor.r, (jint) TextColor.g, (jint) TextColor.b,
                                            qssq1,
                                            (jfloat) 2400 / 4 + 50, (jfloat) 1080.0 / 1.5f + 1080 / 5 - 40,
                                            (jfloat) 100);
                        char hps[99];
                        int HealthPlayer = GetPlayerHealth(targetbox);
                        sprintf(hps, "%i", HealthPlayer);
                        jstring HealthText = env->NewStringUTF("HP");
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                            (jint) TextColor.r, (jint) TextColor.g, (jint) TextColor.b,
                                            HealthText,
                                            (jfloat) 2400 / 2 + 40, (jfloat) 1080.0 / 1.5f + 60,
                                            (jfloat) 50);
                        jstring HealthCount = env->NewStringUTF(hps);
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                            (jint) TextColor.r, (jint) TextColor.g, (jint) TextColor.b,
                                            HealthCount,
                                            (jfloat) 2400 / 2 + 40, (jfloat) 1080.0 / 1.5f + 1080 / 5 - 40,
                                            (jfloat) 150);
                        jstring ArmorText = env->NewStringUTF("Armor");
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                            (jint) TextColor.r, (jint) TextColor.g, (jint) TextColor.b,
                                            ArmorText,
                                            (jfloat) 2400 / 2 + (2400 / 4 / 2) + 20,
                                            (jfloat) 1080.0 / 1.5f + 60,
                                            (jfloat) 50);
                        char Armors[99];
                        int Armor = 0;
                        sprintf(Armors, "%i", Armor);
                        jstring ArmorCount = env->NewStringUTF(Armors);
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                            (jint) TextColor.r, (jint) TextColor.g, (jint) TextColor.b,
                                            ArmorCount,
                                            (jfloat) 2400 / 2 + (2400 / 4 / 2) + 20,
                                            (jfloat) 1080.0 / 1.5f + 1080 / 5 - 40, (jfloat) 150);
            }
        }
    }
    if(neko) {
        env->CallVoidMethod(esp, DrawTyan, canvas, (jint) color.a, (jint) color.r,
                            (jint) color.g, (jint) color.b, (jint) 1.5,
                //(jfloat) get_screen_width() - get_screen_width()+get_screen_width()/100*5, (jfloat) get_screen_height(), (jfloat) 1,
                            (jfloat) 0, (jfloat) 1080, (jfloat) 1,
                            (jfloat) 1);
    }
    if(AimFovEnable){
        env->CallVoidMethod(esp, DrawCircle, canvas, (jint) color.a, (jint) color.r,
                            (jint) color.g, (jint) color.b, (jfloat) 2.2,
                            (jfloat)  get_screen_width() / 2,
                            (jfloat) get_screen_height() / 2,
                            (jfloat) get_screen_width() / 720 * aimfov);
    }

    if (BombDetonation) {
        if (BombUpdatePlayer != NULL) {
            Color Bomb = Color::Red(255);
            Color BombText = Color::White(255);
            double TimeDetonate;
            TimeDetonate = GetBombTime3(BombUpdatePlayer);
            int Timerres = (int) TimeDetonate;
            if (-1 < Timerres) {
                env->CallVoidMethod(esp, DrawCircle, canvas, (jint) 255, (jint) 200,
                                    (jint) 0, (jint) 0, (jfloat) 3.2,
                                    (jfloat) get_screen_width() / 2,
                                    (jfloat) get_screen_height() / 4,
                                    (jfloat) get_screen_width() / 30);

                char Times[99];
                sprintf(Times, "%i", Timerres);
                jstring sq1 = env->NewStringUTF(Times);
                /*** Здесь можно поменять координаты ***/
                /*** Меняем X и Y плюсуя или минусуя ***/
                env->CallVoidMethod(esp, DrawText, canvas, (jint) 255,
                                    (jint) 255, (jint) 255, (jint) 255,
                                    sq1,
                                    (jfloat) get_screen_width() / 2 - 50,
                                    (jfloat) get_screen_height() / 4,
                                    (jfloat) 50);
            }
        }
    }
    if(crosshairscreen){
        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) 0,
                            (jint) 0, (jint)0, (jfloat) 3,
                            (jfloat) 0,
                            (jfloat) get_screen_height()/2,
                            (jfloat) get_screen_width(),
                            (jfloat) get_screen_height()/2);
        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) 0,
                            (jint) 0, (jint) 0, (jfloat) 3,
                            (jfloat) get_screen_width()/2,
                            (jfloat) 0,
                            (jfloat) get_screen_width()/2,
                            (jfloat) get_screen_height());
    }
    if (crosshairs) {
        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) colorCross.r,
                            (jint) colorCross.g, (jint) colorCross.b, (jfloat) 3.2,
                            (jfloat) (get_screen_width() / 2) - (crosshairsize / 2),
                            (jfloat) (get_screen_height() / 2),
                            (jfloat) (get_screen_width() / 2) + (crosshairsize / 2),
                            (jfloat) (get_screen_height() / 2));
        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) colorCross.r,
                            (jint) colorCross.g, (jint) colorCross.b, (jfloat) 3.5,
                            (jfloat) (get_screen_width() / 2),
                            (jfloat) (get_screen_height() / 2) - (crosshairsize / 2),
                            (jfloat) (get_screen_width() / 2),
                            (jfloat) (get_screen_height() / 2) + (crosshairsize / 2));
    }
    if(esp360){
        float step = 2 * M_PI / 22; //(22 points)
        float h = GetPlayerLocation(myPlayer).X;
        float k = GetPlayerLocation(myPlayer).Z;
        float r = RadiusCircle;
        int e = 0;
        for (float theta = 0; theta < 2 * M_PI; theta += step) {
            void *zxcam = get_camera();
            float x = h + r * cos(theta);
            float y = k - r * sin(theta);
            e = e+1;
            if(e > 1){
                float xz = h + r * cos(theta-step);
                float yz = k - r * sin(theta-step);
                Vector4 Te = WorldToScreenPoint(zxcam,Vector4(x,GetPlayerLocation(myPlayer).Y+YCircle,y));
                Vector4 Tes = WorldToScreenPoint(zxcam,Vector4(xz,GetPlayerLocation(myPlayer).Y+YCircle,yz));
                if (Te.Z < 1.f) continue;
                if (Tes.Z < 1.f) continue;
                env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) colorCross.r,
                                    (jint) colorCross.g, (jint) colorCross.b, (jfloat) 3.5,
                                    (jfloat) Tes.X,
                                    (jfloat) get_screen_height() - Tes.Y,
                                    (jfloat) Te.X,
                                    (jfloat) get_screen_height() - Te.Y);



            }

        }
    }
    if(ArrayPlayer){
        if (espManager->enemies->empty()) {
            return;
        }
        std::string combined = "";
        for (int i = 0; i < espManager->enemies->size(); i++) {
            void *Player = (*espManager->enemies)[i]->object;
            char tree[222]; sprintf(tree, "%i", int(i+1));
            combined = con(combined,tree);
            combined = con(combined,"| Health ");
            char trees[222]; sprintf(trees, "%s %i", "None",(int)GetPlayerHealth(Player));
            combined = con(combined,trees);
            combined = con(combined,"_");
            jstring s = env->NewStringUTF(combined.c_str());
            env->CallVoidMethod(esp, DrawArrayPlayer, canvas, (jint) 255,
                                (jint) ArrayListR, (jint) ArrayListG, (jint) ArrayListB,
                                (jfloat) nearcount,
                                (jfloat) farcount,
                                (jfloat) ArraySize,s);
        }

    }
    if (ESP) {
        if (espManager->enemies->empty()) {
            return;
        }
        for (int i = 0; i < espManager->enemies->size(); i++) {

            void *Player = (*espManager->enemies)[i]->object;

            if(true) {
                if(ESPDistance){
                    float dist = Vector3::Distance(GetPlayerLocation(myPlayer),GetPlayerLocation(Player));
                    if(dist < ESPDist){

                    }else{
                        continue;
                    }
                }
                int healthi = GetPlayerHealth(Player);
                Color clr;
                clr.a = 255;
                Rect rect;
                Vector3 PlayerPosq = GetPlayerLocation(Player);
                Vector4 PlayerPos = Vector4(PlayerPosq.X,PlayerPosq.Y,PlayerPosq.Z);
                Vector3 PlayerMyq = GetPlayerLocation(myPlayer);
                Vector4 PlayerMy = Vector4(PlayerMyq.X,PlayerMyq.Y,PlayerMyq.Z);
                void *Cam = get_camera();
                char distance[99];
                float distancef = Vector3::Distance(PlayerPosq,PlayerMyq);
                int distancei = (int)round(distancef);
                char heal[10];

                sprintf(distance, "%i", distancei);
                char my[] = "М ";
                strcat(distance,my);
                Vector4 PosNew = {0.f, 0.f, 0.f};
                PosNew = WorldToScreenPoint(Cam, PlayerPos);
                Vector4 Origin;
                Origin = PlayerPos;
                Origin.Y += 0.f;
                float posnum = upval; /******* Hight slider * 0.1 ********/
                float posnum2 = upval2;/******* Size slider * 0.1 ********/
                Origin.Y += posnum;
                Vector4 BoxPosNew = {0.f, 0.f, 0.f};
                BoxPosNew = WorldToScreenPoint(Cam, Origin);
                float Hight =
                        abs(BoxPosNew.Y - PosNew.Y) * (posnum2 / posnum), Width =
                        Hight * 0.60f;

                rect = Rect(BoxPosNew.X - Width / 2.f,
                            get_screen_height() - BoxPosNew.Y,
                            Width, Hight
                );


                if (PosNew.Z < 1.f) continue;
                if(ESPSkeleton){


                    Vector4 PosHead = {0.f, 0.f, 0.f};
                    PosHead = WorldToScreenPoint(Cam, GetPlayerHead(Player));
                    Vector4 Origins;
                    Origins = GetPlayerHead(Player);
                    Origins.Y += 0.f;
                    Vector4 BoxPosNews = {0.f, 0.f, 0.f};
                    BoxPosNews = WorldToScreenPoint(Cam, Origins);
                    //hips
                    Vector4 PosHips = {0.f, 0.f, 0.f};
                    PosHips = WorldToScreenPoint(Cam, GetPlayerHip(Player));
                    Vector4 Originss;
                    Originss = GetPlayerHip(Player);
                    Originss.Y += 0.f;
                    Vector4 BoxPosNewss = {0.f, 0.f, 0.f};
                    BoxPosNewss = WorldToScreenPoint(Cam, Originss);
                    //leftUpperArm
                    Vector4 PosleftUpperArm = {0.f, 0.f, 0.f};
                    PosleftUpperArm = WorldToScreenPoint(Cam, GetPlayerleftUpperArm(Player));
                    Vector4 Originsss;
                    Originsss = GetPlayerleftUpperArm(Player);
                    Originsss.Y += 0.f;
                    Vector4 BoxPosNewsss = {0.f, 0.f, 0.f};
                    BoxPosNewsss = WorldToScreenPoint(Cam, Originsss);
                    //leftLowerArm
                    Vector4 leftLowerArm = {0.f, 0.f, 0.f};
                    leftLowerArm = WorldToScreenPoint(Cam, GetPlayerleftLowerArm(Player));
                    Vector4 Originssss;
                    Originssss = GetPlayerleftLowerArm(Player);
                    Originssss.Y += 0.f;
                    Vector4 BoxPosNewssss = {0.f, 0.f, 0.f};
                    BoxPosNewssss = WorldToScreenPoint(Cam, Originssss);
                    //rightUpperArm
                    Vector4 rightUpperArm = {0.f, 0.f, 0.f};
                    rightUpperArm = WorldToScreenPoint(Cam, GetPlayerrightUpperArm(Player));
                    Vector4 Originsssss;
                    Originsssss = GetPlayerrightUpperArm(Player);
                    Originsssss.Y += 0.f;
                    Vector4 BoxPosNewsssss = {0.f, 0.f, 0.f};
                    BoxPosNewsssss = WorldToScreenPoint(Cam, Originsssss);
                    //rightLowerArm
                    Vector4 rightLowerArm = {0.f, 0.f, 0.f};
                    rightLowerArm = WorldToScreenPoint(Cam, GetPlayerrightLowerArm(Player));
                    Vector4 Originssssss;
                    Originssssss = GetPlayerrightLowerArm(Player);
                    Originssssss.Y += 0.f;
                    Vector4 BoxPosNewssssss = {0.f, 0.f, 0.f};
                    BoxPosNewssssss = WorldToScreenPoint(Cam, Originssssss);
                    //leftUpperLeg
                    Vector4 leftUpperLeg = {0.f, 0.f, 0.f};
                    leftUpperLeg = WorldToScreenPoint(Cam, GetPlayerleftUpperLeg(Player));
                    Vector4 Originsssssss;
                    Originsssssss = GetPlayerleftUpperLeg(Player);
                    Originsssssss.Y += 0.f;
                    Vector4 BoxPosNewsssssss = {0.f, 0.f, 0.f};
                    BoxPosNewsssssss = WorldToScreenPoint(Cam, Originsssssss);
                    //leftLowerLeg
                    Vector4 leftLowerLeg = {0.f, 0.f, 0.f};
                    leftLowerLeg = WorldToScreenPoint(Cam, GetPlayerleftLowerLeg(Player));
                    Vector4 Originssssssss;
                    Originssssssss = GetPlayerleftLowerLeg(Player);
                    Originssssssss.Y += 0.f;
                    Vector4 BoxPosNewssssssss = {0.f, 0.f, 0.f};
                    BoxPosNewssssssss = WorldToScreenPoint(Cam, Originssssssss);
                    //rightUpperLeg
                    Vector4 rightUpperLeg = {0.f, 0.f, 0.f};
                    rightUpperLeg = WorldToScreenPoint(Cam, GetPlayerrightUpperLeg(Player));
                    Vector4 Originsssssssss;
                    Originsssssssss = GetPlayerrightUpperLeg(Player);
                    Originsssssssss.Y += 0.f;
                    Vector4 BoxPosNewsssssssss = {0.f, 0.f, 0.f};
                    BoxPosNewsssssssss = WorldToScreenPoint(Cam, Originsssssssss);
                    //rightLowerLeg
                    Vector4 rightLowerLeg = {0.f, 0.f, 0.f};
                    rightLowerLeg = WorldToScreenPoint(Cam, GetPlayerrightLowerLeg(Player));
                    Vector4 Originssssssssss;
                    Originssssssssss = GetPlayerrightLowerLeg(Player);
                    Originssssssssss.Y += 0.f;
                    Vector4 BoxPosNewssssssssss = {0.f, 0.f, 0.f};
                    BoxPosNewssssssssss = WorldToScreenPoint(Cam, Originssssssssss);

                    //skeleton
                    Color clr = Color(0, 255, 0, 255);
                    env->CallVoidMethod(esp, DrawCircle, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat)  PosHead.X,
                                        (jfloat) get_screen_height() - BoxPosNews.Y,
                                        (jfloat) rect.W/5);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat)  PosHead.X,
                                        (jfloat) get_screen_height() - BoxPosNews.Y,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y);

                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) PosleftUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosleftUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsss.Y,
                                        (jfloat) leftLowerArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewssss.Y);


                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) rightUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) rightUpperArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssss.Y,
                                        (jfloat) rightLowerArm.X,
                                        (jfloat) get_screen_height() - BoxPosNewssssss.Y);



                    //left leg
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) leftUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) leftUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssss.Y,
                                        (jfloat) leftLowerLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewssssssss.Y);

                    //right leg
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) PosHips.X,
                                        (jfloat) get_screen_height() - BoxPosNewss.Y,
                                        (jfloat) rightUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssssss.Y);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                        (jint) clr.g, (jint) clr.b, (jfloat) 2.2,
                                        (jfloat) rightUpperLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewsssssssss.Y,
                                        (jfloat) rightLowerLeg.X,
                                        (jfloat) get_screen_height() - BoxPosNewssssssssss.Y);

                }
                if (ESPBox) {
                    if (ESPBoxStyle == 1) {
                        Color clra = Color(0, 255, 0, 255);
                        if (GetPlayerHealth(Player) <= (100 * 0.6)) {
                            clra = Color(255, 255, 0, 255);
                        }
                        if (GetPlayerHealth(Player) < (100 * 0.3)) {
                            clra = Color(255, 0, 0, 255);
                        }
                        float HealthPlayer = GetPlayerHealth(Player);

                        env->CallVoidMethod(esp, DrawRect, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jint) 2,
                                            (jfloat) rect.X, (jfloat) rect.Y, (jfloat) rect.W,
                                            (jfloat) rect.H);

                        jstring s = env->NewStringUTF(distance);
                        /*** Здесь можно поменять координаты ***/
                        /*** Меняем X и Y плюсуя или минусуя ***/
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) clr.a,
                                            (jint) color.r, (jint) color.g, (jint) color.b,
                                            s,
                                            (jfloat) rect.X, (jfloat) rect.Y - 10, (jfloat) 10);

                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) clra.a, (jint) clra.r,
                                            (jint) clra.g, (jint) clra.b, (jfloat) 2.5,
                                            (jfloat) rect.X + rect.W + 5,
                                            (jfloat) rect.Y + rect.H,
                                            (jfloat) rect.X + rect.W + 5,
                                            (jfloat) (rect.Y + rect.H) - ((rect.H/100)*HealthPlayer));
                    } else if (ESPBoxStyle == 2) {


                        Color clr = Color(0, 255, 0, 255);
                        if (GetPlayerHealth(Player) <= (100 * 0.6)) {
                            clr = Color(255, 255, 0, 255);
                        }
                        if (GetPlayerHealth(Player) < (100 * 0.3)) {
                            clr = Color(255, 0, 0, 255);
                        }
                        float HealthPlayer = GetPlayerHealth(Player);

                        jstring s = env->NewStringUTF(distance);
                        env->CallVoidMethod(esp, DrawText, canvas, (jint) clr.a,
                                            (jint) color.r, (jint) color.g, (jint) color.b,
                                            s,
                                            (jfloat) rect.X, (jfloat) rect.Y + rect.H + 15, (jfloat) 12);
                        //ВЕРХ
                        env->CallVoidMethod(esp, DrawFilledRect, canvas, (jint) 125,
                                            (jint) 0, (jint) 0, (jint) 2,
                                            (jfloat) rect.X, (jfloat) rect.Y, (jfloat) rect.W,
                                            (jfloat) rect.H);
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y,
                                            (jfloat) rect.X + (rect.W/3),
                                            (jfloat) rect.Y);
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X+rect.W,
                                            (jfloat) rect.Y,
                                            (jfloat) (rect.X+rect.W) - (rect.W/3),
                                            (jfloat) rect.Y);
                        //НИЗ
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) rect.X + (rect.W/3),
                                            (jfloat) rect.Y+rect.H);
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X+rect.W,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) (rect.X+rect.W) - (rect.W/3),
                                            (jfloat) rect.Y+rect.H);
                        //ЛЕВО
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y,
                                            (jfloat) rect.X,
                                            (jfloat) rect.Y+(rect.H /4));
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) rect.X,
                                            (jfloat) (rect.Y+rect.H)-(rect.H/4));
                        //ПРАВО
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X+ rect.W,
                                            (jfloat) rect.Y,
                                            (jfloat) rect.X+ rect.W,
                                            (jfloat) rect.Y+(rect.H /4));
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                            (jint) color.g, (jint) color.b, (jfloat) 2.5,
                                            (jfloat)  rect.X + rect.W,
                                            (jfloat) rect.Y+rect.H,
                                            (jfloat) rect.X+ rect.W,
                                            (jfloat) (rect.Y+rect.H)-(rect.H/4));


                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                            (jint) clr.g, (jint) clr.b, (jfloat) 2.5,
                                            (jfloat)  rect.X - 10,
                                            (jfloat) rect.Y + rect.H,
                                            (jfloat) rect.X - 10,
                                            (jfloat) (rect.Y + rect.H) - ((rect.H/100)*HealthPlayer));
                        env->CallVoidMethod(esp, DrawLines, canvas, (jint) clr.a, (jint) clr.r,
                                            (jint) clr.g, (jint) clr.b, (jfloat) 2.5,
                                            (jfloat) rect.X + rect.W + 10,
                                            (jfloat) rect.Y + rect.H,
                                            (jfloat) rect.X + rect.W + 10,
                                            (jfloat) (rect.Y + rect.H) - ((rect.H/100)*HealthPlayer));
                    }
                }

                if (ESPLine) {
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 1.5,
                                        (jfloat) get_screen_width() / ESPLineLocation,
                                        (jfloat) get_screen_height() / 1000,
                                        (jfloat) rect.X + rect.W / 2,
                                        (jfloat) rect.Y + rect.H / 30);
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height(),
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height());
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height(),
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height());
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height() - get_screen_height(),
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height());
                    env->CallVoidMethod(esp, DrawLines, canvas, (jint) color.a, (jint) color.r,
                                        (jint) color.g, (jint) color.b, (jfloat) 3,
                                        (jfloat) get_screen_width() - get_screen_width(),
                                        (jfloat) get_screen_height(),
                                        (jfloat) get_screen_width(),
                                        (jfloat) get_screen_height());

                }

            } else {
                espManager->removeEnemyGivenObject(Player);
            }
        }
    }

}
JNIEXPORT jobjectArray
JNICALL
Java_com_eban_modmenu_FloatingModMenuService_getPlayerList(JNIEnv *env, jobject activityObject) {
    jobjectArray ret;

    const char *features[] = {
            OBFUSCATE("-33_Category_Aim"),
            OBFUSCATE("1_Toggle_AimBot"), //24
            OBFUSCATE("2_Toggle_AimFov"), //25
            OBFUSCATE("3_SeekBar_AimFov_1_360"),//18
            OBFUSCATE("67_Toggle_Aim Distance"), //25
            OBFUSCATE("228_SeekBar_Distance_1_120"),//14
            OBFUSCATE("216_Toggle_Circle Distance"),//8
            OBFUSCATE("227_SeekBar_Y_-10_10"),//14
            OBFUSCATE("45_Toggle_TriggerBot"),//8



            OBFUSCATE("-33_Category_Player"),
            OBFUSCATE("59_Toggle_Line Run"), //25

    };

    int Total_Feature = (sizeof features /
                         sizeof features[0]);
    ret = (jobjectArray)
            env->NewObjectArray(Total_Feature, env->FindClass(OBFUSCATE("java/lang/String")),
                                env->NewStringUTF(""));
    int i;
    for (i = 0; i < Total_Feature; i++)
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));

    pthread_t ptid;
    pthread_create(&ptid, NULL, antiLeech, NULL);
    return (ret);
}
const char *Las = "ll";
JNIEXPORT jobjectArray
JNICALL
Java_com_eban_modmenu_FloatingModMenuService_getVisualList(JNIEnv *env, jobject activityObject) {
    jobjectArray ret;

    const char *features[] = {
            OBFUSCATE("-33_Category_Chams"),
            OBFUSCATE("200_Toggle_Chams"), //2
            OBFUSCATE("201_Toggle_WireFrame Chams"), //3
            OBFUSCATE("217_Toggle_OutLine Chams"), //3
            OBFUSCATE("224_Toggle_Pizda Chams"), //3
            OBFUSCATE("349_Toggle_NightMod"), //25
            OBFUSCATE("202_Toggle_Chams RGB"), //25
            OBFUSCATE("203_SeekBarColor_CHAMS Color_0_1271"),//18
            OBFUSCATE("204_SeekBar_CHAMS LineWithd(OUTLINE)_1_5"),//18



            OBFUSCATE("-33_Category_Esp(No Work)"),
            OBFUSCATE("205_Toggle_ESP"),//8
            OBFUSCATE("206_Toggle_ESP Line"),//9
            OBFUSCATE("24_Toggle_ESP Skeleton"),//9
            OBFUSCATE("207_Toggle_ESP Box"),//10
            OBFUSCATE("218_Toggle_ESP Skeleton(Crash)"),//10
            OBFUSCATE("208_Toggle_ESP RGB"),//21
            OBFUSCATE("209_SeekBarColor_ESP Color_0_1271"),//18
            OBFUSCATE("229_Toggle_ESP Distance"),//21
            OBFUSCATE("230_SeekBar_ESP Distance_1_120"),//14
            OBFUSCATE("226_SeekBar_ESP Style_1_2"),//13
            OBFUSCATE("210_SeekBar_ESP HIGHT_1_10"),//13
            OBFUSCATE("211_SeekBar_ESP BOX SIZE_10_15"),//14



            OBFUSCATE("-33_Category_Other"),
            OBFUSCATE("24_Toggle_Bomb Befor Time"), //24
            OBFUSCATE("222_Toggle_Player Info"),//8
            OBFUSCATE("223_Toggle_Player Info RGB"),//8
            OBFUSCATE("213_Toggle_CrossHair"),//21
            OBFUSCATE("215_SeekBar_Crosshair_1_100"),//13
            OBFUSCATE("4_Toggle_CrossHair Screen"), //25
            OBFUSCATE("225_SeekBarColor_Crosshair Color_0_1271"),//18
            OBFUSCATE("219_Toggle_Neko"),//21
            OBFUSCATE("60_Toggle_Array Player"), //25
            OBFUSCATE("43_Toggle_Player Speed"),//13
            OBFUSCATE("-33_Category_Chams Setting"),
            OBFUSCATE("9_InputText_Shader"),//13
            OBFUSCATE("331_Toggle_BlendFunc"), //25
            OBFUSCATE("333_Spinner_BlendFunc 1_GLZERO,GLONE,GLSRCCOLOR,GLONEMINUSSRCCOLOR,GLDSTCOLOR,GLONEMINUSDSTCOLOR,GLSRCALPHA,GLONEMINUSSRCALPHA,GLDSTALPHA,GLONEMINUSDSTALPHA,GLSRCALPHASATURATE,GLCONSTANTCOLOR,GLONEMINUSCONSTANTCOLOR,GLCONSTANTALPHA,GLONEMINUSCONSTANTALPHA"), //3
            OBFUSCATE("334_Spinner_BlendFunc 2_GLZERO,GLONE,GLSRCCOLOR,GLONEMINUSSRCCOLOR,GLDSTCOLOR,GLONEMINUSDSTCOLOR,GLSRCALPHA,GLONEMINUSSRCALPHA,GLDSTALPHA,GLONEMINUSDSTALPHA,GLSRCALPHASATURATE,GLCONSTANTCOLOR,GLONEMINUSCONSTANTCOLOR,GLCONSTANTALPHA,GLONEMINUSCONSTANTALPHA"), //3
            OBFUSCATE("350_Spinner_BlendFunc 3_GLZERO,GLONE,GLSRCCOLOR,GLONEMINUSSRCCOLOR,GLDSTCOLOR,GLONEMINUSDSTCOLOR,GLSRCALPHA,GLONEMINUSSRCALPHA,GLDSTALPHA,GLONEMINUSDSTALPHA,GLSRCALPHASATURATE,GLCONSTANTCOLOR,GLONEMINUSCONSTANTCOLOR,GLCONSTANTALPHA,GLONEMINUSCONSTANTALPHA"), //3
            OBFUSCATE("351_Spinner_BlendFunc 4_GLZERO,GLONE,GLSRCCOLOR,GLONEMINUSSRCCOLOR,GLDSTCOLOR,GLONEMINUSDSTCOLOR,GLSRCALPHA,GLONEMINUSSRCALPHA,GLDSTALPHA,GLONEMINUSDSTALPHA,GLSRCALPHASATURATE,GLCONSTANTCOLOR,GLONEMINUSCONSTANTCOLOR,GLCONSTANTALPHA,GLONEMINUSCONSTANTALPHA"), //3
            OBFUSCATE("335_Toggle_Poligon"), //25
            OBFUSCATE("336_Toggle_All Shader"), //25
            OBFUSCATE("340_SeekBar_R_0_255"),//14
            OBFUSCATE("341_SeekBar_G_0_255"),//14
            OBFUSCATE("342_SeekBar_B_0_255"),//14
            OBFUSCATE("343_SeekBar_ALPHA_1_255"),//14
            OBFUSCATE("344_Toggle_DepthRange"), //25
            OBFUSCATE("345_SeekBar_Near_-10_10"),//14
            OBFUSCATE("346_SeekBar_For_-10_10"),//14
            OBFUSCATE("347_Toggle_CullFace"), //25
            OBFUSCATE("348_Spinner_DepthFunc 1_GLFRONT,GLBACK,GLFRONTANDBACK "), //3
            OBFUSCATE("337_Spinner_DepthFunc 1_GLNEVER,GLLESS,GLEQUAL,GLLEQUAL,GLGREATER,GLNOTEQUAL,GLGEQUAL,GLALWAYS"), //3
            OBFUSCATE("338_Spinner_DepthFunc 2_GLNEVER,GLLESS,GLEQUAL,GLLEQUAL,GLGREATER,GLNOTEQUAL,GLGEQUAL,GLALWAYS"), //3
            OBFUSCATE("339_Spinner_OldGlDraw Mode_None,GLPOINTS,GLLINESTRIP,GLLINELOOP,GLLINES,GLTRIANGLESTRIP,GLTRIANGLEFAN,GLTRIANGLES"), //3


    };

    int Total_Feature = (sizeof features /
                         sizeof features[0]);
    ret = (jobjectArray)
            env->NewObjectArray(Total_Feature, env->FindClass(OBFUSCATE("java/lang/String")),
                                env->NewStringUTF(""));
    int i;
    for (i = 0; i < Total_Feature; i++)
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));

    return (ret);
}
JNIEXPORT jobjectArray
JNICALL
Java_com_eban_modmenu_FloatingModMenuService_getWeaponList(JNIEnv *env, jobject activityObject) {
    jobjectArray ret;

    const char *features[] = {
            OBFUSCATE("677_Toggle_No Weapon Drop"), //1
            OBFUSCATE("676_Toggle_Drop Knife"), //1
            OBFUSCATE("1000_ButtonOnOffWeapon_G22 MENU"), //1
            OBFUSCATE("1001_ButtonOnOffWeapon_USP MENU"), //2
            OBFUSCATE("1002_ButtonOnOffWeapon_P350 MENU"), //3
            OBFUSCATE("1003_ButtonOnOffWeapon_Deagle MENU"), //4
            OBFUSCATE("1004_ButtonOnOffWeapon_Tec9 MENU"), //5
            OBFUSCATE("1005_ButtonOnOffWeapon_FiveSeven MENU"), //6
            OBFUSCATE("1006_ButtonOnOffWeapon_UMP45 MENU"), //7
            OBFUSCATE("1007_ButtonOnOffWeapon_MP7 MENU"), //8
            OBFUSCATE("1008_ButtonOnOffWeapon_P90 MENU"), //9
            OBFUSCATE("1009_ButtonOnOffWeapon_MP5 MENU"), //10
            OBFUSCATE("1010_ButtonOnOffWeapon_AKR MENU"), //11
            OBFUSCATE("1011_ButtonOnOffWeapon_AKR12 MENU"), //12
            OBFUSCATE("1012_ButtonOnOffWeapon_M4 MENU"), //13
            OBFUSCATE("1013_ButtonOnOffWeapon_M16 MENU"), //14
            OBFUSCATE("1014_ButtonOnOffWeapon_FAMAS MENU"), //15
            OBFUSCATE("1015_ButtonOnOffWeapon_FnFal MENU"), //16
            OBFUSCATE("1016_ButtonOnOffWeapon_AWM MENU"), //17
            OBFUSCATE("1017_ButtonOnOffWeapon_M40 MENU"), //18
            OBFUSCATE("1018_ButtonOnOffWeapon_M110 MENU"), //19
            OBFUSCATE("1019_ButtonOnOffWeapon_SM1014 MENU"), //20
            OBFUSCATE("1020_ButtonOnOffWeapon_FabM MENU"), //21
            OBFUSCATE("1021_ButtonOnOffWeapon_KnifeBayonet MENU"), //22
            OBFUSCATE("1022_ButtonOnOffWeapon_KnifeKarambit MENU"), //23
            OBFUSCATE("1023_ButtonOnOffWeapon_jKommando MENU"), //24
            OBFUSCATE("1024_ButtonOnOffWeapon_KnifeButterfly MENU"), //25
            OBFUSCATE("1025_ButtonOnOffWeapon_FlipKnife MENU"), //26
            OBFUSCATE("1026_ButtonOnOffWeapon_KunaiKnife MENU"), //27
            OBFUSCATE("1027_ButtonOnOffWeapon_ScorpionKnife MENU"), //28

    };

    int Total_Feature = (sizeof features /
                         sizeof features[0]);
    ret = (jobjectArray)
            env->NewObjectArray(Total_Feature, env->FindClass(OBFUSCATE("java/lang/String")),
                                env->NewStringUTF(""));
    int i;
    for (i = 0; i < Total_Feature; i++)
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));
    return (ret);
}
JNIEXPORT jobjectArray
JNICALL
Java_com_eban_modmenu_FloatingModMenuService_getAboutList(JNIEnv *env, jobject activityObject) {
    jobjectArray ret;

    const char *features[] = {
        OBFUSCATE("-33_Category_Music"),
            OBFUSCATE("-33_Category_Menu Customization"),
            OBFUSCATE("-111_SeekBarColorMenu_Color Menu_0_1271"),
            OBFUSCATE("-33_Category_Author"),
            OBFUSCATE("-33_Category_Telegram @EbanFuck"),
    };

    int Total_Feature = (sizeof features /
                         sizeof features[0]);
    ret = (jobjectArray)
            env->NewObjectArray(Total_Feature, env->FindClass(OBFUSCATE("java/lang/String")),
                                env->NewStringUTF(""));
    int i;
    for (i = 0; i < Total_Feature; i++)
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));


    return (ret);
}
JNIEXPORT void JNICALL
Java_com_eban_modmenu_Preferences_Changes(JNIEnv *env, jclass clazz, jobject obj,
                                        jint feature, jint value, jboolean boolean, jstring str,jstring strg) {

    const char *featureName = env->GetStringUTFChars(str, 0);
    const char *TextInput;
    if (strg != NULL)
        TextInput = env->GetStringUTFChars(strg, 0);
    else
        TextInput = "_BumpMap";
    LOGD(OBFUSCATE("Feature name: %d - %s | Value: = %d | Bool: = %d"), feature, featureName, value,
         boolean,TextInput);

    switch (feature) {
        case 9:
            shaderName = TextInput;
            break;
        case 331:
            BlendFuncOn = !BlendFuncOn;
            break;
        case 333:
            OneFunc = value;
            break;
        case 334:
            TwoFunc = value;
            break;
        case 350:
            FreeFunc = value;
            break;
        case 351:
            ThreeFunc = value;
            break;
        case 335:
            PolygonOn = !PolygonOn;
            break;
        case 336:
            AllShader = !AllShader;
            break;
        case 337:
            DepthFuncValue = value;
            break;
        case 338:
            DepthFuncValueTwo = value;
            break;
        case 339:
            DrawElement = value;
            break;
        case 340:
            r = value*3.92156863*0.001;
            break;
        case 341:
            g = value*3.92156863*0.001;;
            break;
        case 342:
            b = value*3.92156863*0.001;
            break;
        case 343:
            AlphaColor = value*3.92156863*0.001;
            break;
        case 344:
            DepthRangeOn = !DepthRangeOn;
            break;
        case 345:
            DepthNear = value*0.1;
            break;
        case 346:
            DepthFor = value*0.1;
            break;
        case 347:
            CullFaceOn = !CullFaceOn;
            break;
        case 348:
            CullFaceValue = value;
            break;
        case 349:
            NightMod = !NightMod;
            break;












        case 1:
            aimbot = !aimbot;
            break;
        case 224:
            PizdaChams = !PizdaChams;
            r = rq; g = gq; b = bq;
            break;
        case 2:
            AimFovEnable = !AimFovEnable;
            break;
        case 3:
            aimfov = value;
            break;
        case 4:
            crosshairscreen = !crosshairscreen;
            break;
        case 5:
            FireRates = !FireRates;
            break;
        case 6:
            AirJump = !AirJump;
            break;
        case 7:
            UnlimAmmo = !UnlimAmmo;
            break;
        case 8:
            speedHackAllSide = value;
            break;

        case 50:
            speedHack = value;
        break;
        case 10:
            radarhack = !radarhack;
            if(radarhack){
                hexPatches.Radar.Modify();
            }else{
                hexPatches.Radar.Restore();
            }
            break;
        case 11:
            norec = !norec;
            if(norec){
                hexPatches.Norecoil.Modify();
            }else{
                hexPatches.Norecoil.Restore();
            }
            break;
        case 12:
            handsposition = !handsposition;
            break;
        case 13:
            handsxq = value;
            break;
        case 14:
            handsyq = value;
            break;
        case 15:
            handszq = value;
            break;
        case 17:
            hideid = !hideid;
            break;
        case 18:
            HideNick = !HideNick;
            break;
        case 20:
            fovplayer = !fovplayer;
            break;
        case 21:
            fovplayervalue = value;
            break;
        case 22:
            fields = !fields;
            break;
        case 23:
            BombValue = value;
            break;
        case 24:
            ESPSkeleton = !ESPSkeleton  ;
            break;
        case 25:
            wallshots = !wallshots;
            if(wallshots){
                hexPatches.Wallshot.Modify();
            }else{
                hexPatches.Wallshot.Restore();
            }
            break;
        case 26:
            AimFovEnableV2 = !AimFovEnableV2;
            break;
        case 27:
            HeightFov = value;
            break;
        case 28:
            WidthFov = value;
            break;
        case 29:
            upvalV2 = (float) (value * 0.1);
            break;
        case 31:
            ArmorValue = value;
            break;
        case 32:
            FakeBan = !FakeBan;
            break;
        case 33:
            JumpHack = !JumpHack;
            break;
        case 34:
            JumpX = value;
            break;
        case 35:
            JumpY = value;
            break;
        case 36:
            JumpZ = value;
            break;
        case 37:
            SpawnGrenade = !SpawnGrenade;
            break;
        case 38:
            UnBna = !UnBna;
            break;
        case 40:
            SpawnGrenadeEnemy = !SpawnGrenadeEnemy;
            break;
        case 41:
            RespawnHack = !RespawnHack;
            break;
        case 42:
            CurrectRotation = !CurrectRotation;
            break;
        case 43:
            VelocityGraph = !VelocityGraph;
            break;
        case 44:
            speedSpin = value;
            break;
        case 45:
            triggerbot = triggerbot;
            break;
        case 46:
            silentaim = !silentaim;
            break;
        case 47:
            silentaim1 = !silentaim1;
            break;
        case 48:
            silentaim2 = !silentaim2;
            break;
        case 49:
            silentaim3 = !silentaim3;
            break;
        case 51:
            SpoofId = !SpoofId;
            break;
        case 52:
            SpoofTag = !SpoofTag;
            break;
        case 53:
            fastdefuse = !fastdefuse;
            break;
        case 54:
            fastplant = !fastplant;
            break;
        case 55:
            fastdetonation = !fastdetonation;
            break;
            case 56:
            fastknife = !fastknife;
            break;
        case 57:
            PlantAnyWhere != PlantAnyWhere;
            if(PlantAnyWhere){
                hexPatches.PlantAny.Modify();
                hexPatches.PlantAny1.Modify();
                hexPatches.PlantAny2.Modify();
            }else{
                hexPatches.PlantAny.Restore();
                hexPatches.PlantAny1.Restore();
                hexPatches.PlantAny2.Restore();
            }
            break;
        case 58:
            MoneyH != MoneyH;
            if(MoneyH){
                hexPatches.MoneyHack.Modify();
            }else{
                hexPatches.MoneyHack.Restore();
            }
            break;
        case 59:
            LineRunner = !LineRunner;
            break;
        case 61:
            LobbySpam = !LobbySpam;
            break;
        case 60:
            ArrayPlayer = !ArrayPlayer;
            break;
        case 62:
            FriendSpam = !FriendSpam;
            break;
        case 63:
            GravityHack = !GravityHack;
            break;
        case 64:
            NearAndFar = !NearAndFar;
            break;
        case 65:
            nearcount = value;
            break;
        case 66:
            farcount = value;
            break;
        case 67:
            AimDist = !AimDist;
            break;

            // VISUAL
        case 200:
            chamstoggle = !chamstoggle;

            r = rq; g = gq; b = bq;
            break;
        case 201:
            wirechams = !wirechams;
            r = rq; g = gq; b = bq;
            break;
        case 202:
            CHAMSRGB = !CHAMSRGB;
            break;
        case 203:
            for(
                    int sss = 0;
                    sss<value;
                    sss++){
                if (RED == 255.0f){

                    if (BLUE == 0.0f){
                        if (GREEN == 255.0f){
                        }
                        else{
                            GREEN = GREEN + 1.0f;
                        }
                    }
                }
                if (GREEN == 255.0f){
                    if (RED == 0.0f){
                    } else{
                        RED = RED - 1.0f;
                    }
                }
                if (GREEN == 255.0f) {
                    if (RED == 0.0f) {
                        if (BLUE==255.0f){
                        } else{
                            BLUE = BLUE + 1.0f;
                        }
                    }
                }
                if(BLUE == 255.0f) {
                    if (GREEN == 0.0f) {
                        RED = RED + 1.0f;
                    } else{
                        GREEN = GREEN - 1.0f;
                    }
                }
            }

            r = RED*3.92156863*0.001; g = GREEN*3.92156863*0.001; b = BLUE*3.92156863*0.001;
            RED = 255.0f;
            GREEN = 0.0f;
            BLUE = 0.0f;
            break;
        case 204:
            if (value >= 1) {
                linewidthf = value;
            }
            break;
        case 205:
            ESP = !ESP;
            color = Color::Magenta(255);
            break;
        case 206:
            ESPLine = !ESPLine;
            break;
        case 207:
            ESPBox = !ESPBox;
            break;
        case 208:
            ESPRGB = !ESPRGB;
            break;
        case 209:
            for(int sss = 0; sss < value; sss++){
                if (REDS == 255.0f){

                    if (BLUES == 0.0f){
                        if (GREENS == 255.0f){}
                        else{
                            GREENS = GREENS+1.0f;
                        }
                    }
                }
                if (GREENS == 255.0f){
                    if (REDS == 0.0f){} else{
                        REDS = REDS-1.0f;
                    }
                }
                if (GREENS == 255.0f) {
                    if (REDS == 0.0f) {
                        if (BLUES==255.0f){} else{
                            BLUES = BLUES+1.0f;
                        }
                    }
                }
                if(BLUES == 255.0f) {
                    if (GREENS == 0.0f) {
                        REDS = REDS+1.0f;
                    } else{
                        GREENS = GREENS-1.0f;
                    }
                }
            }

            color = Color(REDS,GREENS,BLUES);
            REDS = 255;
            GREENS = 0;
            BLUES = 0;
            break;
        case 210:
            upval = (float) (value * 0.1);
            break;
        case 211:
            upval2 = (float) (value * 0.1);
            break;
        case 212:
            CameraOnOff = !CameraOnOff;
            break;
        case 213:
            crosshairs = !crosshairs;
            break;
        case 214:
            CurrectRotation = !CurrectRotation;
            break;
        case 215:
            crosshairsize = value;
            break;
        case 216:
            esp360 = !esp360;
            break;
        case 217:
            OutChams = !OutChams;
            r = rq; g = gq; b = bq;

            break;
        case 218:
            ESPSkeleton = !ESPSkeleton;
            break;
        case 219:
            neko = !neko;
            break;
        case 220:
            noclip = !noclip;
            break;
        case 222:
            BoxColorStyle = Color(130,0,255);
            BoxPlayerInfo = !BoxPlayerInfo;
            break;
        case 223:
            BoxPlayerInfoRGB = !BoxPlayerInfoRGB;
            break;
        case 225:
            for(int sss = 0; sss < value; sss++){
                if (REDS == 255.0f){

                    if (BLUES == 0.0f){
                        if (GREENS == 255.0f){}
                        else{
                            GREENS = GREENS+1.0f;
                        }
                    }
                }
                if (GREENS == 255.0f){
                    if (REDS == 0.0f){} else{
                        REDS = REDS-1.0f;
                    }
                }
                if (GREENS == 255.0f) {
                    if (REDS == 0.0f) {
                        if (BLUES==255.0f){} else{
                            BLUES = BLUES+1.0f;
                        }
                    }
                }
                if(BLUES == 255.0f) {
                    if (GREENS == 0.0f) {
                        REDS = REDS+1.0f;
                    } else{
                        GREENS = GREENS-1.0f;
                    }
                }
            }

            colorCross = Color(REDS,GREENS,BLUES);
            REDS = 255;
            GREENS = 0;
            BLUES = 0;
            break;
        case 226:
            ESPBoxStyle = value;
            break;
        case 227:
            YCircle = value;
            break;
        case 228:
            RadiusCircle = value;
            break;
        case 229:
            ESPDistance = !ESPDistance;
            break;
        case 230:
            ESPDist = value;
            break;
        case 99999:
            ArrayList = !ArrayList;
            break;
        case 99998:
            for(int sss = 0; sss < value; sss++){
                if (REDS == 255.0f){

                    if (BLUES == 0.0f){
                        if (GREENS == 255.0f){}
                        else{
                            GREENS = GREENS+1.0f;
                        }
                    }
                }
                if (GREENS == 255.0f){
                    if (REDS == 0.0f){} else{
                        REDS = REDS-1.0f;
                    }
                }
                if (GREENS == 255.0f) {
                    if (REDS == 0.0f) {
                        if (BLUES==255.0f){} else{
                            BLUES = BLUES+1.0f;
                        }
                    }
                }
                if(BLUES == 255.0f) {
                    if (GREENS == 0.0f) {
                        REDS = REDS+1.0f;
                    } else{
                        GREENS = GREENS-1.0f;
                    }
                }
            }

            ArrayListR = REDS;
            ArrayListG = GREENS;
            ArrayListB = BLUES;
            REDS = 255;
            GREENS = 0;
            BLUES = 0;
            break;
        case 99997:
            ArraySize = value;
            break;
//WEAPON CASE
        case 676: dropknifes = !dropknifes; break;
        case 677: noweapondrop = !noweapondrop; break;
        case 11001: g22pixelcamouflage = !g22pixelcamouflage; if(g22pixelcamouflage){MakeToast(env, obj, OBFUSCATE("g22pixelcamouflage On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22pixelcamouflage Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 11002: g22nest = !g22nest; if(g22nest){MakeToast(env, obj, OBFUSCATE("g22nest On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22nest Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 11005: g22pattern = !g22pattern; if(g22pattern){MakeToast(env, obj, OBFUSCATE("g22pattern On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22pattern Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 11006: g22inferno = !g22inferno; if(g22inferno){MakeToast(env, obj, OBFUSCATE("g22inferno On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22inferno Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 11008: g22frostwyrm = !g22frostwyrm; if(g22frostwyrm){MakeToast(env, obj, OBFUSCATE("g22frostwyrm On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22frostwyrm Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 41101: g22relic = !g22relic; if(g22relic){MakeToast(env, obj, OBFUSCATE("g22relic On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22relic Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 41102: g22starfall = !g22starfall; if(g22starfall){MakeToast(env, obj, OBFUSCATE("g22starfall On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22starfall Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 61101: g22new1 = !g22new1; if(g22new1){MakeToast(env, obj, OBFUSCATE("g22new1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22new1 Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 71103: g22monster = !g22monster; if(g22monster){MakeToast(env, obj, OBFUSCATE("g22monster On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22monster Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 71104: g22whitecarbon = !g22whitecarbon; if(g22whitecarbon){MakeToast(env, obj, OBFUSCATE("g22whitecarbon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22whitecarbon Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 81107: g22carbon = !g22carbon; if(g22carbon){MakeToast(env, obj, OBFUSCATE("g22carbon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22carbon Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 81108: g22yellowline = !g22yellowline; if(g22yellowline){MakeToast(env, obj, OBFUSCATE("g22yellowline On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("g22yellowline Off"), Toast::LENGTH_SHORT);}; break;//g22
        case 12002: usp2years = !usp2years; if(usp2years){MakeToast(env, obj, OBFUSCATE("usp2years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("usp2years Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 12003: usp2yearsred = !usp2yearsred; if(usp2yearsred){MakeToast(env, obj, OBFUSCATE("usp2yearsred On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("usp2yearsred Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 12001: uspgenesis = !uspgenesis; if(uspgenesis){MakeToast(env, obj, OBFUSCATE("uspgenesis On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("uspgenesis Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 41201: uspfiend = !uspfiend; if(uspfiend){MakeToast(env, obj, OBFUSCATE("uspfiend On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("uspfiend Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 41212: usppisces = !usppisces; if(usppisces){MakeToast(env, obj, OBFUSCATE("usppisces On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("usppisces Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 61201: uspnew1 = !uspnew1; if(uspnew1){MakeToast(env, obj, OBFUSCATE("uspnew1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("uspnew1 Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 81214: uspline = !uspline; if(uspline){MakeToast(env, obj, OBFUSCATE("uspline On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("uspline Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 81215: uspyellow = !uspyellow; if(uspyellow){MakeToast(env, obj, OBFUSCATE("uspyellow On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("uspyellow Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 81200: uspgeometric = !uspgeometric; if(uspgeometric){MakeToast(env, obj, OBFUSCATE("uspgeometric On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("uspgeometric Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 5044: usprmsuspiciousspider = !usprmsuspiciousspider; if(usprmsuspiciousspider){MakeToast(env, obj, OBFUSCATE("usprmsuspiciousspider On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("usprmsuspiciousspider Off"), Toast::LENGTH_SHORT);}; break;//usp
        case 13001: p350cyber = !p350cyber; if(p350cyber){MakeToast(env, obj, OBFUSCATE("p350cyber On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350cyber Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 13002: p350savannah = !p350savannah; if(p350savannah){MakeToast(env, obj, OBFUSCATE("p350savannah On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350savannah Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 13003: p350forestspirit = !p350forestspirit; if(p350forestspirit){MakeToast(env, obj, OBFUSCATE("p350forestspirit On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350forestspirit Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 13004: p350rally = !p350rally; if(p350rally){MakeToast(env, obj, OBFUSCATE("p350rally On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350rally Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 13005: p350skull = !p350skull; if(p350skull){MakeToast(env, obj, OBFUSCATE("p350skull On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350skull Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 71306: p350poison = !p350poison; if(p350poison){MakeToast(env, obj, OBFUSCATE("p350poison On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350poison Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 81323: p350nano = !p350nano; if(p350nano){MakeToast(env, obj, OBFUSCATE("p350nano On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350nano Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 81300: p350autumn = !p350autumn; if(p350autumn){MakeToast(env, obj, OBFUSCATE("p350autumn On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350autumn Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 91300: p350blizzard = !p350blizzard; if(p350blizzard){MakeToast(env, obj, OBFUSCATE("p350blizzard On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p350blizzard Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 101300: p3504years = !p3504years; if(p3504years){MakeToast(env, obj, OBFUSCATE("p3504years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p3504years Off"), Toast::LENGTH_SHORT);}; break;//p350
        case 15001: deaglecaptainmorgan = !deaglecaptainmorgan; if(deaglecaptainmorgan){MakeToast(env, obj, OBFUSCATE("deaglecaptainmorgan On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deaglecaptainmorgan Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 15002: deagleblood = !deagleblood; if(deagleblood){MakeToast(env, obj, OBFUSCATE("deagleblood On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deagleblood Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 15003: deaglepredator = !deaglepredator; if(deaglepredator){MakeToast(env, obj, OBFUSCATE("deaglepredator On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deaglepredator Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 15004: deaglereddragon = !deaglereddragon; if(deaglereddragon){MakeToast(env, obj, OBFUSCATE("deaglereddragon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deaglereddragon Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 15005: deaglewinner = !deaglewinner; if(deaglewinner){MakeToast(env, obj, OBFUSCATE("deaglewinner On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deaglewinner Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 15006: deagledragonglass = !deagledragonglass; if(deagledragonglass){MakeToast(env, obj, OBFUSCATE("deagledragonglass On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deagledragonglass Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 15007: deaglethunder = !deaglethunder; if(deaglethunder){MakeToast(env, obj, OBFUSCATE("deaglethunder On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deaglethunder Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 41502: deagleace = !deagleace; if(deagleace){MakeToast(env, obj, OBFUSCATE("deagleace On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deagleace Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 81505: deaglepro = !deaglepro; if(deaglepro){MakeToast(env, obj, OBFUSCATE("deaglepro On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("deaglepro Off"), Toast::LENGTH_SHORT);}; break;//deagle
        case 41601: tec9aurora = !tec9aurora; if(tec9aurora){MakeToast(env, obj, OBFUSCATE("tec9aurora On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("tec9aurora Off"), Toast::LENGTH_SHORT);}; break;//tec9
        case 41605: tec9fable = !tec9fable; if(tec9fable){MakeToast(env, obj, OBFUSCATE("tec9fable On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("tec9fable Off"), Toast::LENGTH_SHORT);}; break;//tec9
        case 51601: tec9new3 = !tec9new3; if(tec9new3){MakeToast(env, obj, OBFUSCATE("tec9new3 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("tec9new3 Off"), Toast::LENGTH_SHORT);}; break;//tec9
        case 61601: tec9new1 = !tec9new1; if(tec9new1){MakeToast(env, obj, OBFUSCATE("tec9new1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("tec9new1 Off"), Toast::LENGTH_SHORT);}; break;//tec9
        case 71607: tec9reactor = !tec9reactor; if(tec9reactor){MakeToast(env, obj, OBFUSCATE("tec9reactor On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("tec9reactor Off"), Toast::LENGTH_SHORT);}; break;//tec9
        case 81613: tec9spot = !tec9spot; if(tec9spot){MakeToast(env, obj, OBFUSCATE("tec9spot On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("tec9spot Off"), Toast::LENGTH_SHORT);}; break;//tec9
        case 41701: fivesevenvenom = !fivesevenvenom; if(fivesevenvenom){MakeToast(env, obj, OBFUSCATE("fivesevenvenom On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevenvenom Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 41703: fiveseventactical = !fiveseventactical; if(fiveseventactical){MakeToast(env, obj, OBFUSCATE("fiveseventactical On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fiveseventactical Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 51701: fivesevennew2 = !fivesevennew2; if(fivesevennew2){MakeToast(env, obj, OBFUSCATE("fivesevennew2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevennew2 Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 71701: fivesevenpoison = !fivesevenpoison; if(fivesevenpoison){MakeToast(env, obj, OBFUSCATE("fivesevenpoison On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevenpoison Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 71702: fivesevenzone = !fivesevenzone; if(fivesevenzone){MakeToast(env, obj, OBFUSCATE("fivesevenzone On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevenzone Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 81725: fivesevensightred = !fivesevensightred; if(fivesevensightred){MakeToast(env, obj, OBFUSCATE("fivesevensightred On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevensightred Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 81726: fivesevensightgrey = !fivesevensightgrey; if(fivesevensightgrey){MakeToast(env, obj, OBFUSCATE("fivesevensightgrey On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevensightgrey Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 81700: fivesevenrush = !fivesevenrush; if(fivesevenrush){MakeToast(env, obj, OBFUSCATE("fivesevenrush On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fivesevenrush Off"), Toast::LENGTH_SHORT);}; break;//fiveseven
        case 32001: ump45cyberpunk = !ump45cyberpunk; if(ump45cyberpunk){MakeToast(env, obj, OBFUSCATE("ump45cyberpunk On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45cyberpunk Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 32002: ump45pixel = !ump45pixel; if(ump45pixel){MakeToast(env, obj, OBFUSCATE("ump45pixel On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45pixel Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 32003: ump45shark = !ump45shark; if(ump45shark){MakeToast(env, obj, OBFUSCATE("ump45shark On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45shark Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 32004: ump45winged = !ump45winged; if(ump45winged){MakeToast(env, obj, OBFUSCATE("ump45winged On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45winged Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 32005: ump45beast = !ump45beast; if(ump45beast){MakeToast(env, obj, OBFUSCATE("ump45beast On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45beast Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 32006: ump45iron = !ump45iron; if(ump45iron){MakeToast(env, obj, OBFUSCATE("ump45iron On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45iron Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 43201: ump45pixelv2 = !ump45pixelv2; if(ump45pixelv2){MakeToast(env, obj, OBFUSCATE("ump45pixelv2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45pixelv2 Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 43202: ump45cerberus = !ump45cerberus; if(ump45cerberus){MakeToast(env, obj, OBFUSCATE("ump45cerberus On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45cerberus Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 73208: ump45gas = !ump45gas; if(ump45gas){MakeToast(env, obj, OBFUSCATE("ump45gas On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45gas Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 73209: ump45whitecarbon = !ump45whitecarbon; if(ump45whitecarbon){MakeToast(env, obj, OBFUSCATE("ump45whitecarbon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45whitecarbon Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 83200: ump45geometric = !ump45geometric; if(ump45geometric){MakeToast(env, obj, OBFUSCATE("ump45geometric On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45geometric Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 83201: ump45spirit = !ump45spirit; if(ump45spirit){MakeToast(env, obj, OBFUSCATE("ump45spirit On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump45spirit Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 103200: ump454years = !ump454years; if(ump454years){MakeToast(env, obj, OBFUSCATE("ump454years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("ump454years Off"), Toast::LENGTH_SHORT);}; break;//ump45
        case 34001: mp7offroad = !mp7offroad; if(mp7offroad){MakeToast(env, obj, OBFUSCATE("mp7offroad On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7offroad Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 34002: mp7arcade = !mp7arcade; if(mp7arcade){MakeToast(env, obj, OBFUSCATE("mp7arcade On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7arcade Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 34003: mp72years = !mp72years; if(mp72years){MakeToast(env, obj, OBFUSCATE("mp72years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp72years Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 34004: mp72yearsred = !mp72yearsred; if(mp72yearsred){MakeToast(env, obj, OBFUSCATE("mp72yearsred On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp72yearsred Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 43401: mp7thorn = !mp7thorn; if(mp7thorn){MakeToast(env, obj, OBFUSCATE("mp7thorn On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7thorn Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 43402: mp7lich = !mp7lich; if(mp7lich){MakeToast(env, obj, OBFUSCATE("mp7lich On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7lich Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 63401: mp7new1 = !mp7new1; if(mp7new1){MakeToast(env, obj, OBFUSCATE("mp7new1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7new1 Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 83409: mp7girl = !mp7girl; if(mp7girl){MakeToast(env, obj, OBFUSCATE("mp7girl On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7girl Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 83410: mp7graffity = !mp7graffity; if(mp7graffity){MakeToast(env, obj, OBFUSCATE("mp7graffity On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7graffity Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 83411: mp7monkey = !mp7monkey; if(mp7monkey){MakeToast(env, obj, OBFUSCATE("mp7monkey On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7monkey Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 83400: mp7revival = !mp7revival; if(mp7revival){MakeToast(env, obj, OBFUSCATE("mp7revival On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7revival Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 93400: mp7blizzard = !mp7blizzard; if(mp7blizzard){MakeToast(env, obj, OBFUSCATE("mp7blizzard On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp7blizzard Off"), Toast::LENGTH_SHORT);}; break;//mp7
        case 35001: p90radiation = !p90radiation; if(p90radiation){MakeToast(env, obj, OBFUSCATE("p90radiation On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90radiation Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 35002: p90ghoul = !p90ghoul; if(p90ghoul){MakeToast(env, obj, OBFUSCATE("p90ghoul On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90ghoul Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 35003: p90fury = !p90fury; if(p90fury){MakeToast(env, obj, OBFUSCATE("p90fury On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90fury Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 35004: p90pilot = !p90pilot; if(p90pilot){MakeToast(env, obj, OBFUSCATE("p90pilot On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90pilot Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 43502: p90jungle = !p90jungle; if(p90jungle){MakeToast(env, obj, OBFUSCATE("p90jungle On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90jungle Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 83512: p90samurai = !p90samurai; if(p90samurai){MakeToast(env, obj, OBFUSCATE("p90samurai On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90samurai Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 93500: p90ironwill = !p90ironwill; if(p90ironwill){MakeToast(env, obj, OBFUSCATE("p90ironwill On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("p90ironwill Off"), Toast::LENGTH_SHORT);}; break;//p90
        case 73610: mp5projectz9 = !mp5projectz9; if(mp5projectz9){MakeToast(env, obj, OBFUSCATE("mp5projectz9 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp5projectz9 Off"), Toast::LENGTH_SHORT);}; break;//mp5
        case 73611: mp5reactor = !mp5reactor; if(mp5reactor){MakeToast(env, obj, OBFUSCATE("mp5reactor On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp5reactor Off"), Toast::LENGTH_SHORT);}; break;//mp5
        case 73612: mp5zone = !mp5zone; if(mp5zone){MakeToast(env, obj, OBFUSCATE("mp5zone On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp5zone Off"), Toast::LENGTH_SHORT);}; break;//mp5
        case 93600: mp5northernfury = !mp5northernfury; if(mp5northernfury){MakeToast(env, obj, OBFUSCATE("mp5northernfury On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp5northernfury Off"), Toast::LENGTH_SHORT);}; break;//mp5
        case 103500: mp54years = !mp54years; if(mp54years){MakeToast(env, obj, OBFUSCATE("mp54years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("mp54years Off"), Toast::LENGTH_SHORT);}; break;//mp5
        case 44002: akrtreasurehunter = !akrtreasurehunter; if(akrtreasurehunter){MakeToast(env, obj, OBFUSCATE("akrtreasurehunter On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrtreasurehunter Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 44003: akrtiger = !akrtiger; if(akrtiger){MakeToast(env, obj, OBFUSCATE("akrtiger On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrtiger Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 44004: akrsport = !akrsport; if(akrsport){MakeToast(env, obj, OBFUSCATE("akrsport On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrsport Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 44005: akrnecromancer = !akrnecromancer; if(akrnecromancer){MakeToast(env, obj, OBFUSCATE("akrnecromancer On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrnecromancer Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 44006: akrcarbon = !akrcarbon; if(akrcarbon){MakeToast(env, obj, OBFUSCATE("akrcarbon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrcarbon Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 44007: akr2years = !akr2years; if(akr2years){MakeToast(env, obj, OBFUSCATE("akr2years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr2years Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 44401: akrworm = !akrworm; if(akrworm){MakeToast(env, obj, OBFUSCATE("akrworm On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrworm Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 54401: akrnew2 = !akrnew2; if(akrnew2){MakeToast(env, obj, OBFUSCATE("akrnew2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrnew2 Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 84402: akrdragon = !akrdragon; if(akrdragon){MakeToast(env, obj, OBFUSCATE("akrdragon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrdragon Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 84403: akrnano = !akrnano; if(akrnano){MakeToast(env, obj, OBFUSCATE("akrnano On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akrnano Off"), Toast::LENGTH_SHORT);}; break;//akr
        case 45001: akr12railgun = !akr12railgun; if(akr12railgun){MakeToast(env, obj, OBFUSCATE("akr12railgun On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12railgun Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 45002: akr12pixelcamouflage = !akr12pixelcamouflage; if(akr12pixelcamouflage){MakeToast(env, obj, OBFUSCATE("akr12pixelcamouflage On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12pixelcamouflage Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 45003: akr12mechanic = !akr12mechanic; if(akr12mechanic){MakeToast(env, obj, OBFUSCATE("akr12mechanic On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12mechanic Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 45004: akr12aurora = !akr12aurora; if(akr12aurora){MakeToast(env, obj, OBFUSCATE("akr12aurora On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12aurora Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 84500: akr12carbon = !akr12carbon; if(akr12carbon){MakeToast(env, obj, OBFUSCATE("akr12carbon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12carbon Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 84501: akr12spring = !akr12spring; if(akr12spring){MakeToast(env, obj, OBFUSCATE("akr12spring On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12spring Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 84400: akr12geometric = !akr12geometric; if(akr12geometric){MakeToast(env, obj, OBFUSCATE("akr12geometric On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr12geometric Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 104400: akr124years = !akr124years; if(akr124years){MakeToast(env, obj, OBFUSCATE("akr124years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("akr124years Off"), Toast::LENGTH_SHORT);}; break;//akr12
        case 46001: m4predator = !m4predator; if(m4predator){MakeToast(env, obj, OBFUSCATE("m4predator On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4predator Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 46002: m4necromancer = !m4necromancer; if(m4necromancer){MakeToast(env, obj, OBFUSCATE("m4necromancer On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4necromancer Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 46003: m4tiger = !m4tiger; if(m4tiger){MakeToast(env, obj, OBFUSCATE("m4tiger On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4tiger Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 46006: m4pro = !m4pro; if(m4pro){MakeToast(env, obj, OBFUSCATE("m4pro On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4pro Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 46007: m4grandprix = !m4grandprix; if(m4grandprix){MakeToast(env, obj, OBFUSCATE("m4grandprix On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4grandprix Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 44601: m4lizard = !m4lizard; if(m4lizard){MakeToast(env, obj, OBFUSCATE("m4lizard On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4lizard Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 44603: m4samurai = !m4samurai; if(m4samurai){MakeToast(env, obj, OBFUSCATE("m4samurai On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4samurai Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 54601: m4new2 = !m4new2; if(m4new2){MakeToast(env, obj, OBFUSCATE("m4new2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4new2 Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 84624: m4wolf = !m4wolf; if(m4wolf){MakeToast(env, obj, OBFUSCATE("m4wolf On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4wolf Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 84600: m4revival = !m4revival; if(m4revival){MakeToast(env, obj, OBFUSCATE("m4revival On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m4revival Off"), Toast::LENGTH_SHORT);}; break;//m4
        case 47001: m16camouflage = !m16camouflage; if(m16camouflage){MakeToast(env, obj, OBFUSCATE("m16camouflage On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m16camouflage Off"), Toast::LENGTH_SHORT);}; break;//m16
        case 47002: m16winged = !m16winged; if(m16winged){MakeToast(env, obj, OBFUSCATE("m16winged On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m16winged Off"), Toast::LENGTH_SHORT);}; break;//m16
        case 47003: m16facet = !m16facet; if(m16facet){MakeToast(env, obj, OBFUSCATE("m16facet On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m16facet Off"), Toast::LENGTH_SHORT);}; break;//m16
        case 94700: m16ironwill = !m16ironwill; if(m16ironwill){MakeToast(env, obj, OBFUSCATE("m16ironwill On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m16ironwill Off"), Toast::LENGTH_SHORT);}; break;//m16
        case 104700: m164years = !m164years; if(m164years){MakeToast(env, obj, OBFUSCATE("m164years On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m164years Off"), Toast::LENGTH_SHORT);}; break;//m16
        case 48001: famasbeagle = !famasbeagle; if(famasbeagle){MakeToast(env, obj, OBFUSCATE("famasbeagle On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("famasbeagle Off"), Toast::LENGTH_SHORT);}; break;//famas
        case 48002: famasfury = !famasfury; if(famasfury){MakeToast(env, obj, OBFUSCATE("famasfury On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("famasfury Off"), Toast::LENGTH_SHORT);}; break;//famas
        case 48003: famashull = !famashull; if(famashull){MakeToast(env, obj, OBFUSCATE("famashull On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("famashull Off"), Toast::LENGTH_SHORT);}; break;//famas
        case 74800: famasmonster = !famasmonster; if(famasmonster){MakeToast(env, obj, OBFUSCATE("famasmonster On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("famasmonster Off"), Toast::LENGTH_SHORT);}; break;//famas
        case 84800: famasautumn = !famasautumn; if(famasautumn){MakeToast(env, obj, OBFUSCATE("famasautumn On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("famasautumn Off"), Toast::LENGTH_SHORT);}; break;//famas
        case 44901: fnfalleather = !fnfalleather; if(fnfalleather){MakeToast(env, obj, OBFUSCATE("fnfalleather On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fnfalleather Off"), Toast::LENGTH_SHORT);}; break;//fnfal
        case 44902: fnfalacidcarbon = !fnfalacidcarbon; if(fnfalacidcarbon){MakeToast(env, obj, OBFUSCATE("fnfalacidcarbon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fnfalacidcarbon Off"), Toast::LENGTH_SHORT);}; break;//fnfal
        case 44903: fnfaltactical = !fnfaltactical; if(fnfaltactical){MakeToast(env, obj, OBFUSCATE("fnfaltactical On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fnfaltactical Off"), Toast::LENGTH_SHORT);}; break;//fnfal
        case 84906: fnfalgreen = !fnfalgreen; if(fnfalgreen){MakeToast(env, obj, OBFUSCATE("fnfalgreen On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fnfalgreen Off"), Toast::LENGTH_SHORT);}; break;//fnfal
        case 84900: fnfalphoenix = !fnfalphoenix; if(fnfalphoenix){MakeToast(env, obj, OBFUSCATE("fnfalphoenix On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fnfalphoenix Off"), Toast::LENGTH_SHORT);}; break;//fnfal
        case 51001: awmsport = !awmsport; if(awmsport){MakeToast(env, obj, OBFUSCATE("awmsport On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmsport Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 51002: awmphoenix = !awmphoenix; if(awmphoenix){MakeToast(env, obj, OBFUSCATE("awmphoenix On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmphoenix Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 51003: awmgear = !awmgear; if(awmgear){MakeToast(env, obj, OBFUSCATE("awmgear On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmgear Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 51004: awmscratch = !awmscratch; if(awmscratch){MakeToast(env, obj, OBFUSCATE("awmscratch On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmscratch Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 51007: awmgenesis = !awmgenesis; if(awmgenesis){MakeToast(env, obj, OBFUSCATE("awmgenesis On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmgenesis Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 51008: awm2yearsred = !awm2yearsred; if(awm2yearsred){MakeToast(env, obj, OBFUSCATE("awm2yearsred On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awm2yearsred Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 51006: awmsportv2 = !awmsportv2; if(awmsportv2){MakeToast(env, obj, OBFUSCATE("awmsportv2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmsportv2 Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 85104: awmtreasurehunter = !awmtreasurehunter; if(awmtreasurehunter){MakeToast(env, obj, OBFUSCATE("awmtreasurehunter On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmtreasurehunter Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 85127: awmdragon = !awmdragon; if(awmdragon){MakeToast(env, obj, OBFUSCATE("awmdragon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmdragon Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 95100: awmpolarnight = !awmpolarnight; if(awmpolarnight){MakeToast(env, obj, OBFUSCATE("awmpolarnight On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("awmpolarnight Off"), Toast::LENGTH_SHORT);}; break;//awm
        case 52001: m40quake = !m40quake; if(m40quake){MakeToast(env, obj, OBFUSCATE("m40quake On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m40quake Off"), Toast::LENGTH_SHORT);}; break;//m40
        case 52002: m40pro = !m40pro; if(m40pro){MakeToast(env, obj, OBFUSCATE("m40pro On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m40pro Off"), Toast::LENGTH_SHORT);}; break;//m40
        case 52003: m40beagle = !m40beagle; if(m40beagle){MakeToast(env, obj, OBFUSCATE("m40beagle On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m40beagle Off"), Toast::LENGTH_SHORT);}; break;//m40
        case 65201: m40new1 = !m40new1; if(m40new1){MakeToast(env, obj, OBFUSCATE("m40new1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m40new1 Off"), Toast::LENGTH_SHORT);}; break;//m40
        case 65202: m40new2 = !m40new2; if(m40new2){MakeToast(env, obj, OBFUSCATE("m40new2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m40new2 Off"), Toast::LENGTH_SHORT);}; break;//m40
        case 75205: m40monster = !m40monster; if(m40monster){MakeToast(env, obj, OBFUSCATE("m40monster On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m40monster Off"), Toast::LENGTH_SHORT);}; break;//m40
        case 45301: m110cyber = !m110cyber; if(m110cyber){MakeToast(env, obj, OBFUSCATE("m110cyber On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m110cyber Off"), Toast::LENGTH_SHORT);}; break;//m110
        case 85300: m110transition = !m110transition; if(m110transition){MakeToast(env, obj, OBFUSCATE("m110transition On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m110transition Off"), Toast::LENGTH_SHORT);}; break;//m110
        case 95300: m110flow = !m110flow; if(m110flow){MakeToast(env, obj, OBFUSCATE("m110flow On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("m110flow Off"), Toast::LENGTH_SHORT);}; break;//m110
        case 62001: sm1014facet = !sm1014facet; if(sm1014facet){MakeToast(env, obj, OBFUSCATE("sm1014facet On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014facet Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 62002: sm1014pathfinder = !sm1014pathfinder; if(sm1014pathfinder){MakeToast(env, obj, OBFUSCATE("sm1014pathfinder On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014pathfinder Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 62003: sm1014necromancer = !sm1014necromancer; if(sm1014necromancer){MakeToast(env, obj, OBFUSCATE("sm1014necromancer On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014necromancer Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 62004: sm1014northerncamouflage = !sm1014northerncamouflage; if(sm1014northerncamouflage){MakeToast(env, obj, OBFUSCATE("sm1014northerncamouflage On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014northerncamouflage Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 62005: sm1014quake = !sm1014quake; if(sm1014quake){MakeToast(env, obj, OBFUSCATE("sm1014quake On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014quake Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 62006: sm1014branches = !sm1014branches; if(sm1014branches){MakeToast(env, obj, OBFUSCATE("sm1014branches On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014branches Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 45302: sm1014blaster = !sm1014blaster; if(sm1014blaster){MakeToast(env, obj, OBFUSCATE("sm1014blaster On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014blaster Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 66201: sm1014new1 = !sm1014new1; if(sm1014new1){MakeToast(env, obj, OBFUSCATE("sm1014new1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014new1 Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 86216: sm1014shark = !sm1014shark; if(sm1014shark){MakeToast(env, obj, OBFUSCATE("sm1014shark On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("sm1014shark Off"), Toast::LENGTH_SHORT);}; break;//sm1014
        case 76218: fabmreactor = !fabmreactor; if(fabmreactor){MakeToast(env, obj, OBFUSCATE("fabmreactor On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fabmreactor Off"), Toast::LENGTH_SHORT);}; break;//fabm
        case 86317: fabmgreen = !fabmgreen; if(fabmgreen){MakeToast(env, obj, OBFUSCATE("fabmgreen On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fabmgreen Off"), Toast::LENGTH_SHORT);}; break;//fabm
        case 86318: fabmparrot = !fabmparrot; if(fabmparrot){MakeToast(env, obj, OBFUSCATE("fabmparrot On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fabmparrot Off"), Toast::LENGTH_SHORT);}; break;//fabm
        case 86300: fabmflight = !fabmflight; if(fabmflight){MakeToast(env, obj, OBFUSCATE("fabmflight On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("fabmflight Off"), Toast::LENGTH_SHORT);}; break;//fabm
        case 71001: bayonetetblueblood = !bayonetetblueblood; if(bayonetetblueblood){MakeToast(env, obj, OBFUSCATE("bayonetetblueblood On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("bayonetetblueblood Off"), Toast::LENGTH_SHORT);}; break;//bayonet
        case 71002: bayonetetancient = !bayonetetancient; if(bayonetetancient){MakeToast(env, obj, OBFUSCATE("bayonetetancient On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("bayonetetancient Off"), Toast::LENGTH_SHORT);}; break;//bayonet
        case 71003: bayonetetscratch = !bayonetetscratch; if(bayonetetscratch){MakeToast(env, obj, OBFUSCATE("bayonetetscratch On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("bayonetetscratch Off"), Toast::LENGTH_SHORT);}; break;//bayonet
        case 71004: bayonetetuniverse = !bayonetetuniverse; if(bayonetetuniverse){MakeToast(env, obj, OBFUSCATE("bayonetetuniverse On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("bayonetetuniverse Off"), Toast::LENGTH_SHORT);}; break;//bayonet
        case 97100: bayonetyonet_frozen = !bayonetyonet_frozen; if(bayonetyonet_frozen){MakeToast(env, obj, OBFUSCATE("bayonetyonet_frozen On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("bayonetyonet_frozen Off"), Toast::LENGTH_SHORT);}; break;//bayonet
        case 72002: karambitclaw = !karambitclaw; if(karambitclaw){MakeToast(env, obj, OBFUSCATE("karambitclaw On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitclaw Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 72004: karambiticedragon = !karambiticedragon; if(karambiticedragon){MakeToast(env, obj, OBFUSCATE("karambiticedragon On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambiticedragon Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 72006: karambitscratch = !karambitscratch; if(karambitscratch){MakeToast(env, obj, OBFUSCATE("karambitscratch On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitscratch Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 72007: karambituniverse = !karambituniverse; if(karambituniverse){MakeToast(env, obj, OBFUSCATE("karambituniverse On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambituniverse Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 72003: karambitgold = !karambitgold; if(karambitgold){MakeToast(env, obj, OBFUSCATE("karambitgold On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitgold Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 5022: karambitambitgold = !karambitambitgold; if(karambitambitgold){MakeToast(env, obj, OBFUSCATE("karambitambitgold On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitambitgold Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 97200: karambitambit_coldflame = !karambitambit_coldflame; if(karambitambit_coldflame){MakeToast(env, obj, OBFUSCATE("karambitambit_coldflame On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitambit_coldflame Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 97201: karambitambit_frozen = !karambitambit_frozen; if(karambitambit_frozen){MakeToast(env, obj, OBFUSCATE("karambitambit_frozen On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitambit_frozen Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 97203: karambitambit_snowcamo = !karambitambit_snowcamo; if(karambitambit_snowcamo){MakeToast(env, obj, OBFUSCATE("karambitambit_snowcamo On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("karambitambit_snowcamo Off"), Toast::LENGTH_SHORT);}; break;//karambit
        case 73002: jkommandoancient = !jkommandoancient; if(jkommandoancient){MakeToast(env, obj, OBFUSCATE("jkommandoancient On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("jkommandoancient Off"), Toast::LENGTH_SHORT);}; break;//jkommando
        case 73003: jkommandoreaper = !jkommandoreaper; if(jkommandoreaper){MakeToast(env, obj, OBFUSCATE("jkommandoreaper On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("jkommandoreaper Off"), Toast::LENGTH_SHORT);}; break;//jkommando
        case 73004: jkommandofloral = !jkommandofloral; if(jkommandofloral){MakeToast(env, obj, OBFUSCATE("jkommandofloral On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("jkommandofloral Off"), Toast::LENGTH_SHORT);}; break;//jkommando
        case 73006: jkommandoluxury = !jkommandoluxury; if(jkommandoluxury){MakeToast(env, obj, OBFUSCATE("jkommandoluxury On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("jkommandoluxury Off"), Toast::LENGTH_SHORT);}; break;//jkommando
        case 97300: jkommandofrozen = !jkommandofrozen; if(jkommandofrozen){MakeToast(env, obj, OBFUSCATE("jkommandofrozen On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("jkommandofrozen Off"), Toast::LENGTH_SHORT);}; break;//jkommando
        case 47502: butterflygold = !butterflygold; if(butterflygold){MakeToast(env, obj, OBFUSCATE("butterflygold On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("butterflygold Off"), Toast::LENGTH_SHORT);}; break;//butterfly
        case 47503: butterflydragonglass = !butterflydragonglass; if(butterflydragonglass){MakeToast(env, obj, OBFUSCATE("butterflydragonglass On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("butterflydragonglass Off"), Toast::LENGTH_SHORT);}; break;//butterfly
        case 47504: butterflyred = !butterflyred; if(butterflyred){MakeToast(env, obj, OBFUSCATE("butterflyred On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("butterflyred Off"), Toast::LENGTH_SHORT);}; break;//butterfly
        case 47505: butterflystarfall = !butterflystarfall; if(butterflystarfall){MakeToast(env, obj, OBFUSCATE("butterflystarfall On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("butterflystarfall Off"), Toast::LENGTH_SHORT);}; break;//butterfly
        case 57501: butterflynew1 = !butterflynew1; if(butterflynew1){MakeToast(env, obj, OBFUSCATE("butterflynew1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("butterflynew1 Off"), Toast::LENGTH_SHORT);}; break;//butterfly
        case 97500: butterflyerfly_coldflam = !butterflyerfly_coldflam; if(butterflyerfly_coldflam){MakeToast(env, obj, OBFUSCATE("butterflyerfly_coldflam On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("butterflyerfly_coldflam Off"), Toast::LENGTH_SHORT);}; break;//butterfly
        case 67701: flipknifenew1 = !flipknifenew1; if(flipknifenew1){MakeToast(env, obj, OBFUSCATE("flipknifenew1 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("flipknifenew1 Off"), Toast::LENGTH_SHORT);}; break;//flipknife
        case 67702: flipknifenew2 = !flipknifenew2; if(flipknifenew2){MakeToast(env, obj, OBFUSCATE("flipknifenew2 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("flipknifenew2 Off"), Toast::LENGTH_SHORT);}; break;//flipknife
        case 67703: flipknifenew3 = !flipknifenew3; if(flipknifenew3){MakeToast(env, obj, OBFUSCATE("flipknifenew3 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("flipknifenew3 Off"), Toast::LENGTH_SHORT);}; break;//flipknife
        case 67704: flipknifenew4 = !flipknifenew4; if(flipknifenew4){MakeToast(env, obj, OBFUSCATE("flipknifenew4 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("flipknifenew4 Off"), Toast::LENGTH_SHORT);}; break;//flipknife
        case 67705: flipknifenew5 = !flipknifenew5; if(flipknifenew5){MakeToast(env, obj, OBFUSCATE("flipknifenew5 On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("flipknifenew5 Off"), Toast::LENGTH_SHORT);}; break;//flipknife
        case 97700: flipknifesnowcamo = !flipknifesnowcamo; if(flipknifesnowcamo){MakeToast(env, obj, OBFUSCATE("flipknifesnowcamo On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("flipknifesnowcamo Off"), Toast::LENGTH_SHORT);}; break;//flipknife
        case 77813: kunaibone = !kunaibone; if(kunaibone){MakeToast(env, obj, OBFUSCATE("kunaibone On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunaibone Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 77814: kunailuxury = !kunailuxury; if(kunailuxury){MakeToast(env, obj, OBFUSCATE("kunailuxury On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunailuxury Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 77815: kunaipoison = !kunaipoison; if(kunaipoison){MakeToast(env, obj, OBFUSCATE("kunaipoison On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunaipoison Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 77816: kunairadiation = !kunairadiation; if(kunairadiation){MakeToast(env, obj, OBFUSCATE("kunairadiation On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunairadiation Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 77817: kunaireaper = !kunaireaper; if(kunaireaper){MakeToast(env, obj, OBFUSCATE("kunaireaper On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunaireaper Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 97800: kunaiknife_coldflame = !kunaiknife_coldflame; if(kunaiknife_coldflame){MakeToast(env, obj, OBFUSCATE("kunaiknife_coldflame On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunaiknife_coldflame Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 97801: kunaiknife_snowcamo = !kunaiknife_snowcamo; if(kunaiknife_snowcamo){MakeToast(env, obj, OBFUSCATE("kunaiknife_snowcamo On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("kunaiknife_snowcamo Off"), Toast::LENGTH_SHORT);}; break;//kunai
        case 87919: scorpioncamouflage = !scorpioncamouflage; if(scorpioncamouflage){MakeToast(env, obj, OBFUSCATE("scorpioncamouflage On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("scorpioncamouflage Off"), Toast::LENGTH_SHORT);}; break;//scorpion
        case 87920: scorpiongreen = !scorpiongreen; if(scorpiongreen){MakeToast(env, obj, OBFUSCATE("scorpiongreen On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("scorpiongreen Off"), Toast::LENGTH_SHORT);}; break;//scorpion
        case 87921: scorpionscratch = !scorpionscratch; if(scorpionscratch){MakeToast(env, obj, OBFUSCATE("scorpionscratch On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("scorpionscratch Off"), Toast::LENGTH_SHORT);}; break;//scorpion
        case 87922: scorpionsky = !scorpionsky; if(scorpionsky){MakeToast(env, obj, OBFUSCATE("scorpionsky On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("scorpionsky Off"), Toast::LENGTH_SHORT);}; break;//scorpion
        case 97900: scorpionknife_coldflame = !scorpionknife_coldflame; if(scorpionknife_coldflame){MakeToast(env, obj, OBFUSCATE("scorpionknife_coldflame On"), Toast::LENGTH_SHORT);}else{MakeToast(env, obj, OBFUSCATE("scorpionknife_coldflame Off"), Toast::LENGTH_SHORT);}; break;//scorpion
        case 30:

            break;



    }
}
}
Quaternion GetRotationToLocation(Vector3 targetLocation, float y_bias){
    return Quaternion::LookRotation((targetLocation + Vector3(0, y_bias, 0)) - GetPlayerLocation(myPlayer), Vector3(0, 1, 0));
}
void set_position(void* transform, Vector3 test) {

    if (transform) {
        static const auto set_position_injected = reinterpret_cast<uint64_t(__fastcall*)(void*, Vector3)>(getAbsoluteAddress("libil2cpp.so", 0x108D27C));
        set_position_injected(transform, test);
    }
}

enum ViewMod {
    TPS = 2, FPS = 1
};

void *enemyPlayer = NULL;

float spinY = 0;
Quaternion PlayerLook;
void (*old_Player_Update)(void *instance);
void Player_Update(void *player) {
    if (ESPRGB) {
        if (re == 255) {
            if (be == 0) {
                if (ge == 255) {}
                else {
                    ge = ge + 1;
                }
            }
        }
        if (ge == 255) {
            if (re == 0) {}
            else {
                re = re - 1;
            }
        }
        if (ge == 255) {
            if (re == 0) {
                if (be == 255) {}
                else {
                    be = be + 1;
                }
            }
        }
        if (be == 255) {
            if (ge == 0) {
                mes = 1;
                re = re + 1;
            } else {
                ge = ge - 1;
            }
        }
        if (mes == 1) {
            if (re == 255) {
                if (be == 0) {}
                else {
                    be = be - 1;
                }
            }
        }
        color = Color(re, ge, be, 255);
    }
    if (player != NULL) {
        bool isMine = *(bool *) ((uint64_t) player + 0x84);
        if (isMine) {
            myPlayer = player;
        }
        if (myPlayer) {
            if (GetPlayerTeam(myPlayer) != GetPlayerTeam(player)) {
                enemyPlayer = player;
            }
        }

        if (ESP || aimbot) {
            if (!isMine) {
                if (myPlayer) {
                    if ((GetPlayerTeam(myPlayer) != GetPlayerTeam(player) || ESPTeamminate)) {
                        espManager->tryAddEnemy(player);
                    }
                    espManager->updateEnemies(player);
                }
            }
        }

    }else{
        myPlayer = NULL;
        enemyPlayer = NULL;
    }
    old_Player_Update(player);
}
Quaternion CameraAim;
Quaternion CameraAims;
float CameraRage = 0.0f;
float deltaTime;
int RageIf = 0;
Quaternion Rotes = Quaternion(0,0,0,0);
void (*TryShoots)(void *player);
int ShootInt = 0;
void *cross = NULL;
void(*old_FirstPersonLook_Update)(void *gameLooking);
void FirstPersonLook_Update(void *gameLooking) {
    if(aimbot) {
        enemy_t *target = espManager->GetPlayerAim();
        if (target) {
            void* aimingdata = *(void **) ((uint64_t) target->object + 0xA4);
            void* head = *(void **) ((uint64_t) aimingdata + 0xC);
            CameraAim = GetRotationToLocation(get_position(head), -0.45f);
            *(Quaternion *) ((uint64_t) gameLooking + 0x2C) = CameraAim;
        }
    }
    if(triggerbot && isAiming(cross)){
        TryShoots(LocalPlayers);
    }
    old_FirstPersonLook_Update(gameLooking);
}
void (*Player_ondestroy)(void *player);

void _Player_ondestroy(void *player) {
    if (player != NULL) {
        espManager->removeEnemyGivenObject(player);
    }
    Player_ondestroy(player);
}
void (*old_LocalPlayer_Update)(void *playerq);

void LocalPlayer_Update(void *playerq) {
    LocalPlayers = playerq;

    old_LocalPlayer_Update(playerq);
}

void (*old_Crosshair_Update)(void *crossss);

void Crosshair_Update(void *crossss) {
    cross = crossss;
    old_Crosshair_Update(crossss);
}
int (*old_glGetUniformLocation)(GLuint, const GLchar *);
GLint new_glGetUniformLocation(GLuint program, const GLchar *name) {
    //Log name to find used shaders.
    LOGI("New shader found: %s", name);
    return old_glGetUniformLocation(program, name);
}

bool isCurrentShader(const char *shader) {
    GLint currProgram;
    glGetIntegerv(GL_CURRENT_PROGRAM, &currProgram);
    return old_glGetUniformLocation(currProgram, shader) != -1;
}

void (*old_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void *indices);
void new_glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices) {
    old_glDrawElements(mode, count, type, indices);
    if (mode != GL_TRIANGLES || count < 1000) return;
    {
        GLint currProgram;
        glGetIntegerv(GL_CURRENT_PROGRAM, &currProgram);

        GLint id = old_glGetUniformLocation(currProgram, shaderName);
        if(AllShader){

        }else if(id == -1) return;
        if (chamstoggle) {
            if(DepthRangeOn){
                glDepthRangef(DepthNear,DepthFor);
            }
            glEnable(GL_BLEND);
            glBlendFunc(2222,1);
            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}
            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
                if(DrawElement == 1){
                    old_glDrawElements(mode,count*15,type,indices);
                }else if(DrawElement == 2){
                    old_glDrawElements(GL_POINTS,count*15,type,indices);
                }else if(DrawElement == 3){
                    old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
                }else if(DrawElement == 4){
                    old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
                }else if(DrawElement == 5){
                    old_glDrawElements(GL_LINES,count*15,type,indices);
                }else if(DrawElement == 6){
                    old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
                }else if(DrawElement == 7){
                    old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
                }else if(DrawElement == 8){
                    old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
                }
            }else{
                glBlendColor(r, g, b, AlphaColor);
            }
            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }
        }
        if (wirechams) {

            glEnable(GL_CULL_FACE);
            if(CullFaceOn){
                if(CullFaceValue == 1){
                    glCullFace(GL_FRONT);
                }else if(CullFaceValue == 2){
                    glCullFace(GL_BACK);
                }else if(CullFaceValue == 3){
                    glCullFace(GL_FRONT_AND_BACK );
                }

            }

            glEnable(GL_BLEND);
            if(DepthFuncValue == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValue == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValue == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValue == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValue == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValue == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValue == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValue == 8){
                glDepthFunc(GL_ALWAYS);
            }
            glDepthMask(false);
            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}
            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
            }else{
                glBlendColor(r, g, b, AlphaColor);
            }
            if(PolygonOn){
                glEnable( GL_POLYGON_OFFSET_FILL);
            }

            glPolygonOffset( 5.5, -5.5 );
            glLineWidth( linewidthf );
            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }
            glColorMask(1,1,1,1);
            if(DepthFuncValueTwo == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValueTwo == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValueTwo == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValueTwo == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValueTwo == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValueTwo == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValueTwo == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValueTwo == 8){
                glDepthFunc(GL_ALWAYS);
            }
            glBlendFunc((0, 0, 0, 0),(0, 0, 0, 0));
            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}
            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
            }else{
                glBlendColor(r, g, b, AlphaColor);
            }
            //glBlendColor(rv*0.001, gv*0.001, bv*0.001, 0.800);

            if(PolygonOn){
                glDisable( GL_POLYGON_OFFSET_FILL );
            }

            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }


            glDepthMask(true);
            glDepthFunc(GL_LESS);
        }

        if (PizdaChams) {
            glEnable(GL_CULL_FACE);
            if(CullFaceOn){
                if(CullFaceValue == 1){
                    glCullFace(GL_FRONT);
                }else if(CullFaceValue == 2){
                    glCullFace(GL_BACK);
                }else if(CullFaceValue == 3){
                    glCullFace(GL_FRONT_AND_BACK );
                }

            }
            glEnable(GL_BLEND);
            if(DepthFuncValue == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValue == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValue == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValue == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValue == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValue == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValue == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValue == 8){
                glDepthFunc(GL_ALWAYS);
            }
            glDepthMask(false);
            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}
            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
            }else{
                glBlendColor(r, g, b, AlphaColor);
            }
            if(PolygonOn){
                glEnable( GL_POLYGON_OFFSET_FILL);
            }

            glPolygonOffset( 5.5, -5.5 );
            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }
            if(DepthFuncValueTwo == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValueTwo == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValueTwo == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValueTwo == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValueTwo == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValueTwo == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValueTwo == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValueTwo == 8){
                glDepthFunc(GL_ALWAYS);
            }
            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}
            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
            }else{
                glBlendColor(r, g, b, AlphaColor);
            }
            if(PolygonOn){
                glDisable( GL_POLYGON_OFFSET_FILL );
            }
            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }
            glDepthMask(true);
            if(DepthFuncValueTwo == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValueTwo == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValueTwo == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValueTwo == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValueTwo == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValueTwo == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValueTwo == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValueTwo == 8){
                glDepthFunc(GL_ALWAYS);
            }
        }
        if (OutChams) {

            glEnable(GL_CULL_FACE);
            if(CullFaceOn){
                if(CullFaceValue == 1){
                    glCullFace(GL_FRONT);
                }else if(CullFaceValue == 2){
                    glCullFace(GL_BACK);
                }else if(CullFaceValue == 3){
                    glCullFace(GL_FRONT_AND_BACK );
                }

            }
            glEnable(GL_BLEND);
            if(DepthFuncValue == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValue == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValue == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValue == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValue == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValue == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValue == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValue == 8){
                glDepthFunc(GL_ALWAYS);
            }
            glDepthMask(false);

            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}
            glColorMask(1,1,1,1);
            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
            }else{
                glBlendColor(r, g, b, AlphaColor);
            }
            if(PolygonOn){
                glEnable( GL_POLYGON_OFFSET_FILL);
            }

            if(PolygonOn){
                glPolygonOffset( 5.5f, -50.5f );
            }
            glLineWidth(linewidthf*2);
            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }
            if(DepthFuncValue == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValue == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValue == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValue == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValue == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValue == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValue == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValue == 8){
                glDepthFunc(GL_ALWAYS);
            }
            if(BlendFuncOn){ glBlendFuncSeparate(GLU[OneFunc-1],GLU[TwoFunc-1],GLU[FreeFunc-1],GLU[ThreeFunc-1]);}

            if(CHAMSRGB){
                if (rv == 255.0f){
                    if (bv == 0.0f){
                        if (gv == 255.0f){}
                        else{
                            gv = gv+1.0f;
                        }
                    }
                }
                if (gv == 255.0f){
                    if (rv == 0.0f){} else{
                        rv = rv-1.0f;
                    }
                }
                if (gv == 255.0f) {
                    if (rv == 0.0f) {
                        if (bv==255.0f){} else{
                            bv = bv+1.0f;
                        }
                    }
                }
                if (bv == 255.0f) {
                    if (gv == 0.0f) {
                        mv = 1.0f;
                        rv = rv+1.0f;
                    }
                    else{
                        gv = gv-1.0f;
                    }
                }
                if (mv == 1.0f){
                    if (rv == 255.0f){
                        if (bv == 0.0f){} else{
                            bv = bv-1.0f;
                        }
                    }
                }


                glBlendColor(rv*3.92156863*0.001, gv*3.92156863*0.001, bv*3.92156863*0.001, AlphaColor);
            }else{

                glBlendColor(r, g, b, AlphaColor);
            }

            if(PolygonOn){
                glDisable( GL_POLYGON_OFFSET_FILL );
            }
            if(DrawElement == 1){
                old_glDrawElements(mode,count*15,type,indices);
            }else if(DrawElement == 2){
                old_glDrawElements(GL_POINTS,count*15,type,indices);
            }else if(DrawElement == 3){
                old_glDrawElements(GL_LINE_STRIP,count*15,type,indices);
            }else if(DrawElement == 4){
                old_glDrawElements(GL_LINE_LOOP,count*15,type,indices);
            }else if(DrawElement == 5){
                old_glDrawElements(GL_LINES,count*15,type,indices);
            }else if(DrawElement == 6){
                old_glDrawElements(GL_TRIANGLE_STRIP,count*15,type,indices);
            }else if(DrawElement == 7){
                old_glDrawElements(GL_TRIANGLE_FAN,count*15,type,indices);
            }else if(DrawElement == 8){
                old_glDrawElements(GL_TRIANGLES,count*15,type,indices);
            }


            glDepthMask(true);
            if(DepthFuncValueTwo == 1){
                glDepthFunc(GL_NEVER);
            }else if(DepthFuncValueTwo == 2){
                glDepthFunc(GL_LESS);
            }else if(DepthFuncValueTwo == 3){
                glDepthFunc(GL_EQUAL);
            }else if(DepthFuncValueTwo == 4){
                glDepthFunc(GL_LEQUAL);
            }else if(DepthFuncValueTwo == 5){
                glDepthFunc(GL_GREATER);
            }else if(DepthFuncValueTwo == 6){
                glDepthFunc(GL_NOTEQUAL);
            }else if(DepthFuncValueTwo == 7){
                glDepthFunc(GL_GEQUAL);
            }else if(DepthFuncValueTwo == 8){
                glDepthFunc(GL_ALWAYS);
            }
        }
        old_glDrawElements(mode, count, type, indices);


        if(DepthRangeOn){
            glDepthRangef(DepthNear,DepthFor);
        }

        glColorMask(1, 1, 1, 1);
        glDisable(GL_BLEND);


    }
}

bool mlovinit(){
    handle = NULL;
    handle = dlopen("libGLESv2.so", RTLD_LAZY);
    if(!handle){
        LOGE("Cannot open library: %s", dlerror());
        return false;
    }
    return true;
}

void Wallhack(){
    auto p_glDrawElements = (const void*(*)(...))dlsym(handle, "glDrawElements");
    const char *dlsym_error = dlerror();
    if(dlsym_error){
        LOGE("Cannot load symbol 'glDrawElements': %s", dlsym_error);
        return;
    }else{
        MSHookFunction(reinterpret_cast<void*>(p_glDrawElements), reinterpret_cast<void*>(new_glDrawElements), reinterpret_cast<void**>(&old_glDrawElements));
    }
}

void *hack_thread(void *) {
    LOGI(OBFUSCATE("pthread called"));
    do {
        sleep(1);
    } while (!isLibraryLoaded(libName));
    mlovinit();
    shaderName = "_BumpMap";
    Wallhack();
    me = new me_t();
    espManager = new ESPManager();

#if defined(__aarch64__)
#else

    MSHookFunction((void *) getAbsoluteAddress(libName, 0x771EB8), (void *) Player_Update,
                   (void **) &old_Player_Update);
    MSHookFunction((void *) getAbsoluteAddress(libName, 0x19E2070), (void *) FirstPersonLook_Update,
                   (void **) &old_FirstPersonLook_Update);
    MSHookFunction((void *) getAbsoluteAddress(libName, 0x14F3320), (void *) Crosshair_Update,
                   (void **) &old_Crosshair_Update);
    MSHookFunction((void *) getAbsoluteAddress(libName, 0x6A7A28), (void *) LocalPlayer_Update,
                   (void **) &old_LocalPlayer_Update);
    isShooting = (bool (*)(void*))getAbsoluteAddress(libName, 0x76F070);
    isAiming = (bool (*)(void*))getAbsoluteAddress(libName, 0x14F0C08);
    //isAiming = (bool (*)(void*))getAbsoluteAddress(libName, 0xC9E324);
    TryShoots = (void(*)(void *))getAbsoluteAddress(libName, 0x68F128);

#endif

    return NULL;
}


__attribute__((constructor))
void lib_main() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
}



