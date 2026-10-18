#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_704(u8* __restrict R,Cpu& c);
u32 body_705(u8* __restrict R,Cpu& c);
u32 body_707(u8* __restrict R,Cpu& c);
u32 body_70d(u8* __restrict R,Cpu& c);
u32 body_70e(u8* __restrict R,Cpu& c);
u32 body_70f(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x706,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x706,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_706(u8* __restrict R,Cpu& c);
u32 page_706(Cpu& c){return body_706(c.regs.data(),c);}
__attribute__((noinline)) u32 body_706(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x706000:goto L706000;
case 0x706001:c.instructions+=4;goto B706001;
case 0x706002:c.instructions+=3;goto B706002;
case 0x706005:c.instructions+=2;goto B706005;
case 0x706007:c.instructions+=1;goto B706007;
case 0x706009:goto L706009;
case 0x70600a:c.instructions+=1;goto B70600a;
case 0x70600c:goto L70600c;
case 0x70600d:c.instructions+=2;goto B70600d;
case 0x70600e:c.instructions+=1;goto B70600e;
case 0x706010:goto L706010;
case 0x706011:c.instructions+=2;goto B706011;
case 0x706012:c.instructions+=1;goto B706012;
case 0x706014:goto L706014;
case 0x706018:c.instructions+=1;goto B706018;
case 0x70601a:goto L70601a;
case 0x706021:c.instructions+=1;goto B706021;
case 0x706023:goto L706023;
case 0x706028:c.instructions+=1;goto B706028;
case 0x70602a:goto L70602a;
case 0x70602f:c.instructions+=1;goto B70602f;
case 0x706031:goto L706031;
case 0x706036:goto L706036;
case 0x706039:goto L706039;
case 0x70603c:c.instructions+=5;goto B70603c;
case 0x70603e:c.instructions+=4;goto B70603e;
case 0x70603f:c.instructions+=3;goto B70603f;
case 0x706041:c.instructions+=2;goto B706041;
case 0x706043:c.instructions+=1;goto B706043;
case 0x706045:goto L706045;
case 0x706046:c.instructions+=1;goto B706046;
case 0x706048:goto L706048;
case 0x706049:c.instructions+=2;goto B706049;
case 0x70604a:c.instructions+=1;goto B70604a;
case 0x70604c:goto L70604c;
case 0x70604d:c.instructions+=2;goto B70604d;
case 0x70604e:c.instructions+=1;goto B70604e;
case 0x706050:goto L706050;
case 0x706055:c.instructions+=7;goto B706055;
case 0x706057:c.instructions+=6;goto B706057;
case 0x70605a:c.instructions+=5;goto B70605a;
case 0x70605d:c.instructions+=4;goto B70605d;
case 0x70605e:c.instructions+=3;goto B70605e;
case 0x706061:c.instructions+=2;goto B706061;
case 0x706064:c.instructions+=1;goto B706064;
case 0x706066:goto L706066;
case 0x70606b:c.instructions+=4;goto B70606b;
case 0x70606e:c.instructions+=3;goto B70606e;
case 0x706073:c.instructions+=2;goto B706073;
case 0x70607a:c.instructions+=1;goto B70607a;
case 0x70607c:goto L70607c;
case 0x706081:c.instructions+=3;goto B706081;
case 0x706084:c.instructions+=2;goto B706084;
case 0x706089:c.instructions+=1;goto B706089;
case 0x706090:goto L706090;
case 0x706093:c.instructions+=1;goto B706093;
case 0x706095:goto L706095;
case 0x70609a:c.instructions+=4;goto B70609a;
case 0x70609d:c.instructions+=3;goto B70609d;
case 0x7060a2:c.instructions+=2;goto B7060a2;
case 0x7060a5:c.instructions+=1;goto B7060a5;
case 0x7060ac:goto L7060ac;
case 0x7060af:goto L7060af;
case 0x7060b3:c.instructions+=1;goto B7060b3;
case 0x7060b5:goto L7060b5;
case 0x7060b7:c.instructions+=1;goto B7060b7;
case 0x7060bc:goto L7060bc;
case 0x7060bf:c.instructions+=6;goto B7060bf;
case 0x7060c2:c.instructions+=5;goto B7060c2;
case 0x7060c5:c.instructions+=4;goto B7060c5;
case 0x7060c6:c.instructions+=3;goto B7060c6;
case 0x7060c9:c.instructions+=2;goto B7060c9;
case 0x7060ca:c.instructions+=1;goto B7060ca;
case 0x7060cd:goto L7060cd;
case 0x7060d0:c.instructions+=9;goto B7060d0;
case 0x7060d3:c.instructions+=8;goto B7060d3;
case 0x7060d5:c.instructions+=7;goto B7060d5;
case 0x7060d9:c.instructions+=6;goto B7060d9;
case 0x7060db:c.instructions+=5;goto B7060db;
case 0x7060de:c.instructions+=4;goto B7060de;
case 0x7060e1:c.instructions+=3;goto B7060e1;
case 0x7060e4:c.instructions+=2;goto B7060e4;
case 0x7060e6:c.instructions+=1;goto B7060e6;
case 0x7060ec:goto L7060ec;
case 0x7060ef:c.instructions+=7;goto B7060ef;
case 0x7060f3:c.instructions+=6;goto B7060f3;
case 0x7060f6:c.instructions+=5;goto B7060f6;
case 0x7060f9:c.instructions+=4;goto B7060f9;
case 0x7060fc:c.instructions+=3;goto B7060fc;
case 0x7060ff:c.instructions+=2;goto B7060ff;
case 0x706102:c.instructions+=1;goto B706102;
case 0x706104:goto L706104;
case 0x706107:c.instructions+=1;goto B706107;
case 0x70610a:goto L70610a;
case 0x70610d:c.instructions+=2;goto B70610d;
case 0x706110:c.instructions+=1;goto B706110;
case 0x706112:goto L706112;
case 0x706115:c.instructions+=6;goto B706115;
case 0x706117:c.instructions+=5;goto B706117;
case 0x70611a:c.instructions+=4;goto B70611a;
case 0x70611d:c.instructions+=3;goto B70611d;
case 0x70611e:c.instructions+=2;goto B70611e;
case 0x706121:c.instructions+=1;goto B706121;
case 0x706124:goto L706124;
case 0x706127:c.instructions+=4;goto B706127;
case 0x70612a:c.instructions+=3;goto B70612a;
case 0x70612d:c.instructions+=2;goto B70612d;
case 0x706130:c.instructions+=1;goto B706130;
case 0x706133:goto L706133;
case 0x706136:c.instructions+=5;goto B706136;
case 0x706139:c.instructions+=4;goto B706139;
case 0x70613c:c.instructions+=3;goto B70613c;
case 0x70613f:c.instructions+=2;goto B70613f;
case 0x706142:c.instructions+=1;goto B706142;
case 0x706144:goto L706144;
case 0x706147:c.instructions+=1;goto B706147;
case 0x70614a:goto L70614a;
case 0x70614d:c.instructions+=7;goto B70614d;
case 0x70614f:c.instructions+=6;goto B70614f;
case 0x706150:c.instructions+=5;goto B706150;
case 0x706153:c.instructions+=4;goto B706153;
case 0x706155:c.instructions+=3;goto B706155;
case 0x706156:c.instructions+=2;goto B706156;
case 0x706159:c.instructions+=1;goto B706159;
case 0x70615c:goto L70615c;
case 0x70615f:c.instructions+=3;goto B70615f;
case 0x706160:c.instructions+=2;goto B706160;
case 0x706161:c.instructions+=1;goto B706161;
case 0x706164:goto L706164;
case 0x706167:c.instructions+=3;goto B706167;
case 0x70616a:c.instructions+=2;goto B70616a;
case 0x70616d:c.instructions+=1;goto B70616d;
case 0x70616f:goto L70616f;
case 0x706172:c.instructions+=2;goto B706172;
case 0x706175:c.instructions+=1;goto B706175;
case 0x706177:goto L706177;
case 0x70617a:c.instructions+=5;goto B70617a;
case 0x70617c:c.instructions+=4;goto B70617c;
case 0x70617d:c.instructions+=3;goto B70617d;
case 0x706180:c.instructions+=2;goto B706180;
case 0x706183:c.instructions+=1;goto B706183;
case 0x706186:goto L706186;
case 0x706189:c.instructions+=4;goto B706189;
case 0x70618a:c.instructions+=3;goto B70618a;
case 0x70618d:c.instructions+=2;goto B70618d;
case 0x706190:c.instructions+=1;goto B706190;
case 0x706193:goto L706193;
case 0x706196:c.instructions+=5;goto B706196;
case 0x706199:c.instructions+=4;goto B706199;
case 0x70619c:c.instructions+=3;goto B70619c;
case 0x70619e:c.instructions+=2;goto B70619e;
case 0x7061a1:c.instructions+=1;goto B7061a1;
case 0x7061a3:goto L7061a3;
case 0x7061a6:c.instructions+=3;goto B7061a6;
case 0x7061a7:c.instructions+=2;goto B7061a7;
case 0x7061a8:c.instructions+=1;goto B7061a8;
case 0x7061ab:goto L7061ab;
case 0x7061ae:c.instructions+=1;goto B7061ae;
case 0x7061b1:goto L7061b1;
case 0x7061b2:c.instructions+=4;goto B7061b2;
case 0x7061b3:c.instructions+=3;goto B7061b3;
case 0x7061b4:c.instructions+=2;goto B7061b4;
case 0x7061b5:c.instructions+=1;goto B7061b5;
case 0x7061b6:goto L7061b6;
case 0x7061b7:c.instructions+=26;goto B7061b7;
case 0x7061b9:c.instructions+=25;goto B7061b9;
case 0x7061bc:c.instructions+=24;goto B7061bc;
case 0x7061bd:c.instructions+=23;goto B7061bd;
case 0x7061be:c.instructions+=22;goto B7061be;
case 0x7061c1:c.instructions+=21;goto B7061c1;
case 0x7061c4:c.instructions+=20;goto B7061c4;
case 0x7061c7:c.instructions+=19;goto B7061c7;
case 0x7061ca:c.instructions+=18;goto B7061ca;
case 0x7061cb:c.instructions+=17;goto B7061cb;
case 0x7061ce:c.instructions+=16;goto B7061ce;
case 0x7061d1:c.instructions+=15;goto B7061d1;
case 0x7061d5:c.instructions+=14;goto B7061d5;
case 0x7061d7:c.instructions+=13;goto B7061d7;
case 0x7061d9:c.instructions+=12;goto B7061d9;
case 0x7061dc:c.instructions+=11;goto B7061dc;
case 0x7061de:c.instructions+=10;goto B7061de;
case 0x7061e1:c.instructions+=9;goto B7061e1;
case 0x7061e4:c.instructions+=8;goto B7061e4;
case 0x7061e7:c.instructions+=7;goto B7061e7;
case 0x7061eb:c.instructions+=6;goto B7061eb;
case 0x7061ef:c.instructions+=5;goto B7061ef;
case 0x7061f1:c.instructions+=4;goto B7061f1;
case 0x7061f4:c.instructions+=3;goto B7061f4;
case 0x7061f7:c.instructions+=2;goto B7061f7;
case 0x7061fa:c.instructions+=1;goto B7061fa;
case 0x7061fc:goto L7061fc;
case 0x7061ff:c.instructions+=9;goto B7061ff;
case 0x706200:c.instructions+=8;goto B706200;
case 0x706202:c.instructions+=7;goto B706202;
case 0x706203:c.instructions+=6;goto B706203;
case 0x706206:c.instructions+=5;goto B706206;
case 0x706209:c.instructions+=4;goto B706209;
case 0x70620a:c.instructions+=3;goto B70620a;
case 0x70620b:c.instructions+=2;goto B70620b;
case 0x70620d:c.instructions+=1;goto B70620d;
case 0x70620f:goto L70620f;
case 0x706212:c.instructions+=8;goto B706212;
case 0x706213:c.instructions+=7;goto B706213;
case 0x706215:c.instructions+=6;goto B706215;
case 0x706216:c.instructions+=5;goto B706216;
case 0x706218:c.instructions+=4;goto B706218;
case 0x70621b:c.instructions+=3;goto B70621b;
case 0x70621e:c.instructions+=2;goto B70621e;
case 0x70621f:c.instructions+=1;goto B70621f;
case 0x706222:goto L706222;
case 0x706226:c.instructions+=3;goto B706226;
case 0x706229:c.instructions+=2;goto B706229;
case 0x70622c:c.instructions+=1;goto B70622c;
case 0x70622e:goto L70622e;
case 0x706231:c.instructions+=9;goto B706231;
case 0x706232:c.instructions+=8;goto B706232;
case 0x706234:c.instructions+=7;goto B706234;
case 0x706235:c.instructions+=6;goto B706235;
case 0x706237:c.instructions+=5;goto B706237;
case 0x70623a:c.instructions+=4;goto B70623a;
case 0x70623d:c.instructions+=3;goto B70623d;
case 0x70623e:c.instructions+=2;goto B70623e;
case 0x706240:c.instructions+=1;goto B706240;
case 0x706242:goto L706242;
case 0x706245:c.instructions+=8;goto B706245;
case 0x706246:c.instructions+=7;goto B706246;
case 0x706248:c.instructions+=6;goto B706248;
case 0x706249:c.instructions+=5;goto B706249;
case 0x70624b:c.instructions+=4;goto B70624b;
case 0x70624e:c.instructions+=3;goto B70624e;
case 0x706251:c.instructions+=2;goto B706251;
case 0x706252:c.instructions+=1;goto B706252;
case 0x706255:goto L706255;
case 0x706258:c.instructions+=18;goto B706258;
case 0x70625b:c.instructions+=17;goto B70625b;
case 0x70625e:c.instructions+=16;goto B70625e;
case 0x706261:c.instructions+=15;goto B706261;
case 0x706264:c.instructions+=14;goto B706264;
case 0x706267:c.instructions+=13;goto B706267;
case 0x70626a:c.instructions+=12;goto B70626a;
case 0x70626b:c.instructions+=11;goto B70626b;
case 0x706271:c.instructions+=10;goto B706271;
case 0x706272:c.instructions+=9;goto B706272;
case 0x706275:c.instructions+=8;goto B706275;
case 0x706278:c.instructions+=7;goto B706278;
case 0x70627b:c.instructions+=6;goto B70627b;
case 0x70627c:c.instructions+=5;goto B70627c;
case 0x70627f:c.instructions+=4;goto B70627f;
case 0x706282:c.instructions+=3;goto B706282;
case 0x706283:c.instructions+=2;goto B706283;
case 0x706284:c.instructions+=1;goto B706284;
case 0x706289:goto L706289;
case 0x70628d:c.instructions+=4;goto B70628d;
case 0x706290:c.instructions+=3;goto B706290;
case 0x706294:c.instructions+=2;goto B706294;
case 0x706297:c.instructions+=1;goto B706297;
case 0x706299:goto L706299;
case 0x70629c:c.instructions+=2;goto B70629c;
case 0x70629f:c.instructions+=1;goto B70629f;
case 0x7062a2:goto L7062a2;
case 0x7062a5:c.instructions+=8;goto B7062a5;
case 0x7062a9:c.instructions+=7;goto B7062a9;
case 0x7062ac:c.instructions+=6;goto B7062ac;
case 0x7062af:c.instructions+=5;goto B7062af;
case 0x7062b2:c.instructions+=4;goto B7062b2;
case 0x7062b4:c.instructions+=3;goto B7062b4;
case 0x7062b7:c.instructions+=2;goto B7062b7;
case 0x7062ba:c.instructions+=1;goto B7062ba;
case 0x7062bc:goto L7062bc;
case 0x7062be:goto L7062be;
case 0x7062c0:c.instructions+=2;goto B7062c0;
case 0x7062c3:c.instructions+=1;goto B7062c3;
case 0x7062c6:goto L7062c6;
case 0x7062c8:goto L7062c8;
case 0x7062cb:c.instructions+=2;goto B7062cb;
case 0x7062ce:c.instructions+=1;goto B7062ce;
case 0x7062d0:goto L7062d0;
case 0x7062d3:c.instructions+=2;goto B7062d3;
case 0x7062d6:c.instructions+=1;goto B7062d6;
case 0x7062d8:goto L7062d8;
case 0x7062db:c.instructions+=7;goto B7062db;
case 0x7062df:c.instructions+=6;goto B7062df;
case 0x7062e2:c.instructions+=5;goto B7062e2;
case 0x7062e5:c.instructions+=4;goto B7062e5;
case 0x7062e8:c.instructions+=3;goto B7062e8;
case 0x7062ea:c.instructions+=2;goto B7062ea;
case 0x7062ed:c.instructions+=1;goto B7062ed;
case 0x7062ef:goto L7062ef;
case 0x7062f1:goto L7062f1;
case 0x7062f3:c.instructions+=2;goto B7062f3;
case 0x7062f6:c.instructions+=1;goto B7062f6;
case 0x7062f9:goto L7062f9;
case 0x7062fb:goto L7062fb;
case 0x7062fe:goto L7062fe;
case 0x706301:c.instructions+=1;goto B706301;
case 0x706303:goto L706303;
case 0x706307:c.instructions+=1;goto B706307;
case 0x706309:goto L706309;
case 0x70630b:c.instructions+=1;goto B70630b;
case 0x70630d:goto L70630d;
case 0x706310:c.instructions+=31;goto B706310;
case 0x706313:c.instructions+=30;goto B706313;
case 0x706316:c.instructions+=29;goto B706316;
case 0x706319:c.instructions+=28;goto B706319;
case 0x70631a:c.instructions+=27;goto B70631a;
case 0x70631c:c.instructions+=26;goto B70631c;
case 0x70631d:c.instructions+=25;goto B70631d;
case 0x70631f:c.instructions+=24;goto B70631f;
case 0x706320:c.instructions+=23;goto B706320;
case 0x706322:c.instructions+=22;goto B706322;
case 0x706323:c.instructions+=21;goto B706323;
case 0x706325:c.instructions+=20;goto B706325;
case 0x706326:c.instructions+=19;goto B706326;
case 0x706327:c.instructions+=18;goto B706327;
case 0x70632a:c.instructions+=17;goto B70632a;
case 0x70632d:c.instructions+=16;goto B70632d;
case 0x706330:c.instructions+=15;goto B706330;
case 0x706333:c.instructions+=14;goto B706333;
case 0x706336:c.instructions+=13;goto B706336;
case 0x706337:c.instructions+=12;goto B706337;
case 0x706338:c.instructions+=11;goto B706338;
case 0x70633b:c.instructions+=10;goto B70633b;
case 0x70633d:c.instructions+=9;goto B70633d;
case 0x706343:c.instructions+=8;goto B706343;
case 0x706344:c.instructions+=7;goto B706344;
case 0x706345:c.instructions+=6;goto B706345;
case 0x706348:c.instructions+=5;goto B706348;
case 0x70634b:c.instructions+=4;goto B70634b;
case 0x70634e:c.instructions+=3;goto B70634e;
case 0x70634f:c.instructions+=2;goto B70634f;
case 0x706350:c.instructions+=1;goto B706350;
case 0x706355:goto L706355;
case 0x706358:c.instructions+=16;goto B706358;
case 0x70635b:c.instructions+=15;goto B70635b;
case 0x70635e:c.instructions+=14;goto B70635e;
case 0x706361:c.instructions+=13;goto B706361;
case 0x706364:c.instructions+=12;goto B706364;
case 0x706365:c.instructions+=11;goto B706365;
case 0x706368:c.instructions+=10;goto B706368;
case 0x70636b:c.instructions+=9;goto B70636b;
case 0x70636d:c.instructions+=8;goto B70636d;
case 0x706373:c.instructions+=7;goto B706373;
case 0x706374:c.instructions+=6;goto B706374;
case 0x706375:c.instructions+=5;goto B706375;
case 0x70637b:c.instructions+=4;goto B70637b;
case 0x70637e:c.instructions+=3;goto B70637e;
case 0x70637f:c.instructions+=2;goto B70637f;
case 0x706380:c.instructions+=1;goto B706380;
case 0x706385:goto L706385;
case 0x706388:c.instructions+=1;goto B706388;
case 0x70638b:goto L70638b;
case 0x70638c:c.instructions+=4;goto B70638c;
case 0x70638d:c.instructions+=3;goto B70638d;
case 0x70638e:c.instructions+=2;goto B70638e;
case 0x70638f:c.instructions+=1;goto B70638f;
case 0x706390:goto L706390;
case 0x706391:c.instructions+=26;goto B706391;
case 0x706393:c.instructions+=25;goto B706393;
case 0x706396:c.instructions+=24;goto B706396;
case 0x706399:c.instructions+=23;goto B706399;
case 0x70639b:c.instructions+=22;goto B70639b;
case 0x70639c:c.instructions+=21;goto B70639c;
case 0x70639f:c.instructions+=20;goto B70639f;
case 0x7063a2:c.instructions+=19;goto B7063a2;
case 0x7063a6:c.instructions+=18;goto B7063a6;
case 0x7063a7:c.instructions+=17;goto B7063a7;
case 0x7063aa:c.instructions+=16;goto B7063aa;
case 0x7063ac:c.instructions+=15;goto B7063ac;
case 0x7063af:c.instructions+=14;goto B7063af;
case 0x7063b2:c.instructions+=13;goto B7063b2;
case 0x7063b3:c.instructions+=12;goto B7063b3;
case 0x7063b5:c.instructions+=11;goto B7063b5;
case 0x7063b7:c.instructions+=10;goto B7063b7;
case 0x7063ba:c.instructions+=9;goto B7063ba;
case 0x7063bd:c.instructions+=8;goto B7063bd;
case 0x7063c0:c.instructions+=7;goto B7063c0;
case 0x7063c2:c.instructions+=6;goto B7063c2;
case 0x7063c4:c.instructions+=5;goto B7063c4;
case 0x7063c8:c.instructions+=4;goto B7063c8;
case 0x7063cb:c.instructions+=3;goto B7063cb;
case 0x7063ce:c.instructions+=2;goto B7063ce;
case 0x7063d1:c.instructions+=1;goto B7063d1;
case 0x7063d3:goto L7063d3;
case 0x7063d6:c.instructions+=4;goto B7063d6;
case 0x7063d8:c.instructions+=3;goto B7063d8;
case 0x7063da:c.instructions+=2;goto B7063da;
case 0x7063dd:c.instructions+=1;goto B7063dd;
case 0x7063df:goto L7063df;
case 0x7063e1:goto L7063e1;
case 0x7063e3:c.instructions+=2;goto B7063e3;
case 0x7063e6:c.instructions+=1;goto B7063e6;
case 0x7063e9:goto L7063e9;
case 0x7063eb:goto L7063eb;
case 0x7063ee:c.instructions+=7;goto B7063ee;
case 0x7063f0:c.instructions+=6;goto B7063f0;
case 0x7063f6:c.instructions+=5;goto B7063f6;
case 0x7063f9:c.instructions+=4;goto B7063f9;
case 0x7063fc:c.instructions+=3;goto B7063fc;
case 0x7063ff:c.instructions+=2;goto B7063ff;
case 0x706402:c.instructions+=1;goto B706402;
case 0x706404:goto L706404;
case 0x706407:c.instructions+=2;goto B706407;
case 0x70640a:c.instructions+=1;goto B70640a;
case 0x70640d:goto L70640d;
case 0x706410:c.instructions+=19;goto B706410;
case 0x706413:c.instructions+=18;goto B706413;
case 0x706417:c.instructions+=17;goto B706417;
case 0x70641a:c.instructions+=16;goto B70641a;
case 0x70641c:c.instructions+=15;goto B70641c;
case 0x70641d:c.instructions+=14;goto B70641d;
case 0x70641f:c.instructions+=13;goto B70641f;
case 0x706422:c.instructions+=12;goto B706422;
case 0x706425:c.instructions+=11;goto B706425;
case 0x706427:c.instructions+=10;goto B706427;
case 0x706428:c.instructions+=9;goto B706428;
case 0x70642a:c.instructions+=8;goto B70642a;
case 0x70642d:c.instructions+=7;goto B70642d;
case 0x706431:c.instructions+=6;goto B706431;
case 0x706434:c.instructions+=5;goto B706434;
case 0x706436:c.instructions+=4;goto B706436;
case 0x706438:c.instructions+=3;goto B706438;
case 0x70643f:c.instructions+=2;goto B70643f;
case 0x706442:c.instructions+=1;goto B706442;
case 0x706444:goto L706444;
case 0x706447:c.instructions+=5;goto B706447;
case 0x70644a:c.instructions+=4;goto B70644a;
case 0x70644c:c.instructions+=3;goto B70644c;
case 0x70644e:c.instructions+=2;goto B70644e;
case 0x706451:c.instructions+=1;goto B706451;
case 0x706453:goto L706453;
case 0x706455:goto L706455;
case 0x706457:c.instructions+=2;goto B706457;
case 0x70645a:c.instructions+=1;goto B70645a;
case 0x70645d:goto L70645d;
case 0x70645f:goto L70645f;
case 0x706462:c.instructions+=7;goto B706462;
case 0x706468:c.instructions+=6;goto B706468;
case 0x70646b:c.instructions+=5;goto B70646b;
case 0x70646e:c.instructions+=4;goto B70646e;
case 0x706471:c.instructions+=3;goto B706471;
case 0x706473:c.instructions+=2;goto B706473;
case 0x706476:c.instructions+=1;goto B706476;
case 0x706478:goto L706478;
case 0x70647b:goto L70647b;
case 0x70647e:c.instructions+=9;goto B70647e;
case 0x706482:c.instructions+=8;goto B706482;
case 0x706485:c.instructions+=7;goto B706485;
case 0x70648b:c.instructions+=6;goto B70648b;
case 0x70648e:c.instructions+=5;goto B70648e;
case 0x706491:c.instructions+=4;goto B706491;
case 0x706495:c.instructions+=3;goto B706495;
case 0x70649c:c.instructions+=2;goto B70649c;
case 0x70649f:c.instructions+=1;goto B70649f;
case 0x7064a1:goto L7064a1;
case 0x7064a4:c.instructions+=4;goto B7064a4;
case 0x7064a6:c.instructions+=3;goto B7064a6;
case 0x7064a8:c.instructions+=2;goto B7064a8;
case 0x7064ab:c.instructions+=1;goto B7064ab;
case 0x7064ad:goto L7064ad;
case 0x7064af:goto L7064af;
case 0x7064b1:c.instructions+=1;goto B7064b1;
case 0x7064b4:goto L7064b4;
case 0x7064b6:goto L7064b6;
case 0x7064b9:c.instructions+=9;goto B7064b9;
case 0x7064bc:c.instructions+=8;goto B7064bc;
case 0x7064bf:c.instructions+=7;goto B7064bf;
case 0x7064c5:c.instructions+=6;goto B7064c5;
case 0x7064c8:c.instructions+=5;goto B7064c8;
case 0x7064cb:c.instructions+=4;goto B7064cb;
case 0x7064cd:c.instructions+=3;goto B7064cd;
case 0x7064d0:c.instructions+=2;goto B7064d0;
case 0x7064d3:c.instructions+=1;goto B7064d3;
case 0x7064d5:goto L7064d5;
case 0x7064d6:c.instructions+=4;goto B7064d6;
case 0x7064d7:c.instructions+=3;goto B7064d7;
case 0x7064d8:c.instructions+=2;goto B7064d8;
case 0x7064d9:c.instructions+=1;goto B7064d9;
case 0x7064da:goto L7064da;
case 0x7064db:c.instructions+=5;goto B7064db;
case 0x7064dd:c.instructions+=4;goto B7064dd;
case 0x7064de:c.instructions+=3;goto B7064de;
case 0x7064e1:c.instructions+=2;goto B7064e1;
case 0x7064e5:c.instructions+=1;goto B7064e5;
case 0x7064e7:goto L7064e7;
case 0x7064ea:c.instructions+=2;goto B7064ea;
case 0x7064eb:c.instructions+=1;goto B7064eb;
case 0x7064f0:goto L7064f0;
case 0x7064f1:c.instructions+=1;goto B7064f1;
case 0x7064f2:goto L7064f2;
case 0x7064f5:c.instructions+=2;goto B7064f5;
case 0x7064f8:c.instructions+=1;goto B7064f8;
case 0x7064fa:goto L7064fa;
case 0x7064fd:c.instructions+=1;goto B7064fd;
case 0x7064ff:goto L7064ff;
case 0x706502:c.instructions+=3;goto B706502;
case 0x706505:c.instructions+=2;goto B706505;
case 0x706506:c.instructions+=1;goto B706506;
case 0x70650b:goto L70650b;
case 0x70650e:c.instructions+=1;goto B70650e;
case 0x706510:goto L706510;
case 0x706511:c.instructions+=23;goto B706511;
case 0x706512:c.instructions+=22;goto B706512;
case 0x706515:c.instructions+=21;goto B706515;
case 0x706518:c.instructions+=20;goto B706518;
case 0x70651b:c.instructions+=19;goto B70651b;
case 0x70651d:c.instructions+=18;goto B70651d;
case 0x70651f:c.instructions+=17;goto B70651f;
case 0x706522:c.instructions+=16;goto B706522;
case 0x706524:c.instructions+=15;goto B706524;
case 0x706526:c.instructions+=14;goto B706526;
case 0x706529:c.instructions+=13;goto B706529;
case 0x70652b:c.instructions+=12;goto B70652b;
case 0x70652f:c.instructions+=11;goto B70652f;
case 0x706531:c.instructions+=10;goto B706531;
case 0x706533:c.instructions+=9;goto B706533;
case 0x706535:c.instructions+=8;goto B706535;
case 0x706537:c.instructions+=7;goto B706537;
case 0x706538:c.instructions+=6;goto B706538;
case 0x70653a:c.instructions+=5;goto B70653a;
case 0x70653b:c.instructions+=4;goto B70653b;
case 0x70653c:c.instructions+=3;goto B70653c;
case 0x70653f:c.instructions+=2;goto B70653f;
case 0x706542:c.instructions+=1;goto B706542;
case 0x706547:goto L706547;
case 0x70654a:c.instructions+=2;goto B70654a;
case 0x70654b:c.instructions+=1;goto B70654b;
case 0x70654c:goto L70654c;
case 0x70654d:c.instructions+=2;goto B70654d;
case 0x70654e:c.instructions+=1;goto B70654e;
case 0x70654f:goto L70654f;
case 0x706550:c.instructions+=8;goto B706550;
case 0x706552:c.instructions+=7;goto B706552;
case 0x706558:c.instructions+=6;goto B706558;
case 0x706559:c.instructions+=5;goto B706559;
case 0x70655c:c.instructions+=4;goto B70655c;
case 0x706562:c.instructions+=3;goto B706562;
case 0x706567:c.instructions+=2;goto B706567;
case 0x706568:c.instructions+=1;goto B706568;
case 0x70656d:goto L70656d;
case 0x706573:c.instructions+=3;goto B706573;
case 0x706578:c.instructions+=2;goto B706578;
case 0x706579:c.instructions+=1;goto B706579;
case 0x70657e:goto L70657e;
case 0x706580:c.instructions+=9;goto B706580;
case 0x706583:c.instructions+=8;goto B706583;
case 0x706589:c.instructions+=7;goto B706589;
case 0x70658f:c.instructions+=6;goto B70658f;
case 0x706590:c.instructions+=5;goto B706590;
case 0x706592:c.instructions+=4;goto B706592;
case 0x706595:c.instructions+=3;goto B706595;
case 0x706596:c.instructions+=2;goto B706596;
case 0x706599:c.instructions+=1;goto B706599;
case 0x70659e:goto L70659e;
case 0x70659f:c.instructions+=1;goto B70659f;
case 0x7065a4:goto L7065a4;
case 0x7065a7:c.instructions+=3;goto B7065a7;
case 0x7065a8:c.instructions+=2;goto B7065a8;
case 0x7065a9:c.instructions+=1;goto B7065a9;
case 0x7065aa:goto L7065aa;
case 0x7065ab:c.instructions+=8;goto B7065ab;
case 0x7065ad:c.instructions+=7;goto B7065ad;
case 0x7065b3:c.instructions+=6;goto B7065b3;
case 0x7065b4:c.instructions+=5;goto B7065b4;
case 0x7065b7:c.instructions+=4;goto B7065b7;
case 0x7065bd:c.instructions+=3;goto B7065bd;
case 0x7065c2:c.instructions+=2;goto B7065c2;
case 0x7065c3:c.instructions+=1;goto B7065c3;
case 0x7065c8:goto L7065c8;
case 0x7065ce:c.instructions+=3;goto B7065ce;
case 0x7065d3:c.instructions+=2;goto B7065d3;
case 0x7065d4:c.instructions+=1;goto B7065d4;
case 0x7065d9:goto L7065d9;
case 0x7065db:c.instructions+=6;goto B7065db;
case 0x7065de:c.instructions+=5;goto B7065de;
case 0x7065df:c.instructions+=4;goto B7065df;
case 0x7065e1:c.instructions+=3;goto B7065e1;
case 0x7065e7:c.instructions+=2;goto B7065e7;
case 0x7065ea:c.instructions+=1;goto B7065ea;
case 0x7065ef:goto L7065ef;
case 0x7065f0:c.instructions+=1;goto B7065f0;
case 0x7065f5:goto L7065f5;
case 0x7065f8:c.instructions+=3;goto B7065f8;
case 0x7065f9:c.instructions+=2;goto B7065f9;
case 0x7065fa:c.instructions+=1;goto B7065fa;
case 0x7065fb:goto L7065fb;
case 0x7065fc:c.instructions+=9;goto B7065fc;
case 0x7065fe:c.instructions+=8;goto B7065fe;
case 0x706604:c.instructions+=7;goto B706604;
case 0x706605:c.instructions+=6;goto B706605;
case 0x706608:c.instructions+=5;goto B706608;
case 0x70660e:c.instructions+=4;goto B70660e;
case 0x706611:c.instructions+=3;goto B706611;
case 0x706616:c.instructions+=2;goto B706616;
case 0x706617:c.instructions+=1;goto B706617;
case 0x70661c:goto L70661c;
case 0x706622:c.instructions+=3;goto B706622;
case 0x706627:c.instructions+=2;goto B706627;
case 0x706628:c.instructions+=1;goto B706628;
case 0x70662d:goto L70662d;
case 0x70662f:c.instructions+=5;goto B70662f;
case 0x706630:c.instructions+=4;goto B706630;
case 0x706632:c.instructions+=3;goto B706632;
case 0x706635:c.instructions+=2;goto B706635;
case 0x706638:c.instructions+=1;goto B706638;
case 0x70663d:goto L70663d;
case 0x70663e:c.instructions+=1;goto B70663e;
case 0x706643:goto L706643;
case 0x706646:c.instructions+=3;goto B706646;
case 0x706647:c.instructions+=2;goto B706647;
case 0x706648:c.instructions+=1;goto B706648;
case 0x706649:goto L706649;
case 0x70664a:c.instructions+=10;goto B70664a;
case 0x70664c:c.instructions+=9;goto B70664c;
case 0x706652:c.instructions+=8;goto B706652;
case 0x706653:c.instructions+=7;goto B706653;
case 0x706654:c.instructions+=6;goto B706654;
case 0x706657:c.instructions+=5;goto B706657;
case 0x70665d:c.instructions+=4;goto B70665d;
case 0x706660:c.instructions+=3;goto B706660;
case 0x706665:c.instructions+=2;goto B706665;
case 0x706666:c.instructions+=1;goto B706666;
case 0x70666b:goto L70666b;
case 0x706671:c.instructions+=3;goto B706671;
case 0x706676:c.instructions+=2;goto B706676;
case 0x706677:c.instructions+=1;goto B706677;
case 0x70667c:goto L70667c;
case 0x70667f:c.instructions+=4;goto B70667f;
case 0x706682:c.instructions+=3;goto B706682;
case 0x706684:c.instructions+=2;goto B706684;
case 0x706686:c.instructions+=1;goto B706686;
case 0x706688:goto L706688;
case 0x706689:c.instructions+=1;goto B706689;
case 0x70668c:goto L70668c;
case 0x70668d:c.instructions+=4;goto B70668d;
case 0x70668f:c.instructions+=3;goto B70668f;
case 0x706692:c.instructions+=2;goto B706692;
case 0x706693:c.instructions+=1;goto B706693;
case 0x706698:goto L706698;
case 0x70669b:c.instructions+=3;goto B70669b;
case 0x70669e:c.instructions+=2;goto B70669e;
case 0x70669f:c.instructions+=1;goto B70669f;
case 0x7066a1:goto L7066a1;
case 0x7066a2:goto L7066a2;
case 0x7066a3:c.instructions+=1;goto B7066a3;
case 0x7066a8:goto L7066a8;
case 0x7066a9:c.instructions+=4;goto B7066a9;
case 0x7066aa:c.instructions+=3;goto B7066aa;
case 0x7066ab:c.instructions+=2;goto B7066ab;
case 0x7066ac:c.instructions+=1;goto B7066ac;
case 0x7066ad:goto L7066ad;
case 0x7066ae:c.instructions+=6;goto B7066ae;
case 0x7066b0:c.instructions+=5;goto B7066b0;
case 0x7066b1:c.instructions+=4;goto B7066b1;
case 0x7066b2:c.instructions+=3;goto B7066b2;
case 0x7066b7:c.instructions+=2;goto B7066b7;
case 0x7066ba:c.instructions+=1;goto B7066ba;
case 0x7066bf:goto L7066bf;
case 0x7066c2:c.instructions+=5;goto B7066c2;
case 0x7066c4:c.instructions+=4;goto B7066c4;
case 0x7066c5:c.instructions+=3;goto B7066c5;
case 0x7066c6:c.instructions+=2;goto B7066c6;
case 0x7066c8:c.instructions+=1;goto B7066c8;
case 0x7066ca:goto L7066ca;
case 0x7066cb:c.instructions+=1;goto B7066cb;
case 0x7066ce:goto L7066ce;
case 0x7066cf:c.instructions+=4;goto B7066cf;
case 0x7066d1:c.instructions+=3;goto B7066d1;
case 0x7066d4:c.instructions+=2;goto B7066d4;
case 0x7066d5:c.instructions+=1;goto B7066d5;
case 0x7066da:goto L7066da;
case 0x7066dd:c.instructions+=3;goto B7066dd;
case 0x7066e0:c.instructions+=2;goto B7066e0;
case 0x7066e1:c.instructions+=1;goto B7066e1;
case 0x7066e3:goto L7066e3;
case 0x7066e4:goto L7066e4;
case 0x7066e5:c.instructions+=1;goto B7066e5;
case 0x7066ea:goto L7066ea;
case 0x7066eb:c.instructions+=4;goto B7066eb;
case 0x7066ec:c.instructions+=3;goto B7066ec;
case 0x7066ed:c.instructions+=2;goto B7066ed;
case 0x7066ee:c.instructions+=1;goto B7066ee;
case 0x7066ef:goto L7066ef;
case 0x7066f0:c.instructions+=25;goto B7066f0;
case 0x7066f2:c.instructions+=24;goto B7066f2;
case 0x7066f5:c.instructions+=23;goto B7066f5;
case 0x7066fb:c.instructions+=22;goto B7066fb;
case 0x706702:c.instructions+=21;goto B706702;
case 0x706708:c.instructions+=20;goto B706708;
case 0x70670e:c.instructions+=19;goto B70670e;
case 0x706714:c.instructions+=18;goto B706714;
case 0x706715:c.instructions+=17;goto B706715;
case 0x70671b:c.instructions+=16;goto B70671b;
case 0x706721:c.instructions+=15;goto B706721;
case 0x706727:c.instructions+=14;goto B706727;
case 0x70672d:c.instructions+=13;goto B70672d;
case 0x706733:c.instructions+=12;goto B706733;
case 0x706735:c.instructions+=11;goto B706735;
case 0x70673c:c.instructions+=10;goto B70673c;
case 0x706742:c.instructions+=9;goto B706742;
case 0x706743:c.instructions+=8;goto B706743;
case 0x706749:c.instructions+=7;goto B706749;
case 0x70674a:c.instructions+=6;goto B70674a;
case 0x70674d:c.instructions+=5;goto B70674d;
case 0x706752:c.instructions+=4;goto B706752;
case 0x706755:c.instructions+=3;goto B706755;
case 0x706756:c.instructions+=2;goto B706756;
case 0x706757:c.instructions+=1;goto B706757;
case 0x70675c:goto L70675c;
case 0x70675f:c.instructions+=2;goto B70675f;
case 0x706760:c.instructions+=1;goto B706760;
case 0x706761:goto L706761;
case 0x706762:c.instructions+=5;goto B706762;
case 0x706764:c.instructions+=4;goto B706764;
case 0x706765:c.instructions+=3;goto B706765;
case 0x70676a:c.instructions+=2;goto B70676a;
case 0x70676f:c.instructions+=1;goto B70676f;
case 0x706774:goto L706774;
case 0x706776:c.instructions+=9;goto B706776;
case 0x706779:c.instructions+=8;goto B706779;
case 0x70677f:c.instructions+=7;goto B70677f;
case 0x706785:c.instructions+=6;goto B706785;
case 0x706786:c.instructions+=5;goto B706786;
case 0x706788:c.instructions+=4;goto B706788;
case 0x70678b:c.instructions+=3;goto B70678b;
case 0x70678c:c.instructions+=2;goto B70678c;
case 0x706792:c.instructions+=1;goto B706792;
case 0x706797:goto L706797;
case 0x706798:c.instructions+=1;goto B706798;
case 0x70679d:goto L70679d;
case 0x7067a0:c.instructions+=3;goto B7067a0;
case 0x7067a1:c.instructions+=2;goto B7067a1;
case 0x7067a2:c.instructions+=1;goto B7067a2;
case 0x7067a3:goto L7067a3;
case 0x7067a4:c.instructions+=11;goto B7067a4;
case 0x7067a6:c.instructions+=10;goto B7067a6;
case 0x7067a9:c.instructions+=9;goto B7067a9;
case 0x7067aa:c.instructions+=8;goto B7067aa;
case 0x7067ad:c.instructions+=7;goto B7067ad;
case 0x7067b3:c.instructions+=6;goto B7067b3;
case 0x7067b9:c.instructions+=5;goto B7067b9;
case 0x7067bd:c.instructions+=4;goto B7067bd;
case 0x7067bf:c.instructions+=3;goto B7067bf;
case 0x7067c2:c.instructions+=2;goto B7067c2;
case 0x7067c5:c.instructions+=1;goto B7067c5;
case 0x7067c7:goto L7067c7;
case 0x7067c8:c.instructions+=2;goto B7067c8;
case 0x7067cf:c.instructions+=1;goto B7067cf;
case 0x7067d0:goto L7067d0;
case 0x7067d2:c.instructions+=3;goto B7067d2;
case 0x7067d4:c.instructions+=2;goto B7067d4;
case 0x7067d7:c.instructions+=1;goto B7067d7;
case 0x7067d9:goto L7067d9;
case 0x7067df:c.instructions+=11;goto B7067df;
case 0x7067e3:c.instructions+=10;goto B7067e3;
case 0x7067e9:c.instructions+=9;goto B7067e9;
case 0x7067ed:c.instructions+=8;goto B7067ed;
case 0x7067ee:c.instructions+=7;goto B7067ee;
case 0x7067f4:c.instructions+=6;goto B7067f4;
case 0x7067f8:c.instructions+=5;goto B7067f8;
case 0x7067fd:c.instructions+=4;goto B7067fd;
case 0x706801:c.instructions+=3;goto B706801;
case 0x706802:c.instructions+=2;goto B706802;
case 0x706803:c.instructions+=1;goto B706803;
case 0x706808:goto L706808;
case 0x70680b:c.instructions+=4;goto B70680b;
case 0x70680c:c.instructions+=3;goto B70680c;
case 0x70680f:c.instructions+=2;goto B70680f;
case 0x706812:c.instructions+=1;goto B706812;
case 0x706814:goto L706814;
case 0x706817:c.instructions+=4;goto B706817;
case 0x70681a:c.instructions+=3;goto B70681a;
case 0x70681e:c.instructions+=2;goto B70681e;
case 0x706821:c.instructions+=1;goto B706821;
case 0x706823:goto L706823;
case 0x706824:c.instructions+=1;goto B706824;
case 0x706825:goto L706825;
case 0x706826:c.instructions+=2;goto B706826;
case 0x706827:c.instructions+=1;goto B706827;
case 0x706828:goto L706828;
case 0x706829:c.instructions+=8;goto B706829;
case 0x70682b:c.instructions+=7;goto B70682b;
case 0x70682c:c.instructions+=6;goto B70682c;
case 0x70682f:c.instructions+=5;goto B70682f;
case 0x706830:c.instructions+=4;goto B706830;
case 0x706836:c.instructions+=3;goto B706836;
case 0x706838:c.instructions+=2;goto B706838;
case 0x70683a:c.instructions+=1;goto B70683a;
case 0x70683b:goto L70683b;
case 0x70683d:goto L70683d;
case 0x706840:c.instructions+=2;goto B706840;
case 0x706842:c.instructions+=1;goto B706842;
case 0x706844:goto L706844;
case 0x706847:c.instructions+=2;goto B706847;
case 0x70684d:c.instructions+=1;goto B70684d;
case 0x706853:goto L706853;
case 0x706856:c.instructions+=7;goto B706856;
case 0x706858:c.instructions+=6;goto B706858;
case 0x706859:c.instructions+=5;goto B706859;
case 0x70685f:c.instructions+=4;goto B70685f;
case 0x706861:c.instructions+=3;goto B706861;
case 0x706862:c.instructions+=2;goto B706862;
case 0x706868:c.instructions+=1;goto B706868;
case 0x70686e:goto L70686e;
case 0x706871:c.instructions+=1;goto B706871;
case 0x706873:goto L706873;
case 0x70687b:c.instructions+=1;goto B70687b;
case 0x70687d:goto L70687d;
case 0x706880:c.instructions+=3;goto B706880;
case 0x706886:c.instructions+=2;goto B706886;
case 0x706887:c.instructions+=1;goto B706887;
case 0x70688c:goto L70688c;
case 0x70688f:c.instructions+=6;goto B70688f;
case 0x706895:c.instructions+=5;goto B706895;
case 0x706898:c.instructions+=4;goto B706898;
case 0x706899:c.instructions+=3;goto B706899;
case 0x70689f:c.instructions+=2;goto B70689f;
case 0x7068a5:c.instructions+=1;goto B7068a5;
case 0x7068ab:goto L7068ab;
case 0x7068ae:c.instructions+=1;goto B7068ae;
case 0x7068b0:goto L7068b0;
case 0x7068b3:c.instructions+=3;goto B7068b3;
case 0x7068b6:c.instructions+=2;goto B7068b6;
case 0x7068bc:c.instructions+=1;goto B7068bc;
case 0x7068be:goto L7068be;
case 0x7068c4:c.instructions+=1;goto B7068c4;
case 0x7068c6:goto L7068c6;
case 0x7068cc:c.instructions+=4;goto B7068cc;
case 0x7068cf:c.instructions+=3;goto B7068cf;
case 0x7068d0:c.instructions+=2;goto B7068d0;
case 0x7068d6:c.instructions+=1;goto B7068d6;
case 0x7068dc:goto L7068dc;
case 0x7068df:goto L7068df;
case 0x7068e0:c.instructions+=3;goto B7068e0;
case 0x7068e1:c.instructions+=2;goto B7068e1;
case 0x7068e2:c.instructions+=1;goto B7068e2;
case 0x7068e3:goto L7068e3;
case 0x7068e4:c.instructions+=8;goto B7068e4;
case 0x7068e6:c.instructions+=7;goto B7068e6;
case 0x7068e7:c.instructions+=6;goto B7068e7;
case 0x7068e8:c.instructions+=5;goto B7068e8;
case 0x7068e9:c.instructions+=4;goto B7068e9;
case 0x7068ea:c.instructions+=3;goto B7068ea;
case 0x7068ef:c.instructions+=2;goto B7068ef;
case 0x7068f4:c.instructions+=1;goto B7068f4;
case 0x7068f9:goto L7068f9;
case 0x7068ff:c.instructions+=4;goto B7068ff;
case 0x706901:c.instructions+=3;goto B706901;
case 0x706906:c.instructions+=2;goto B706906;
case 0x706907:c.instructions+=1;goto B706907;
case 0x70690c:goto L70690c;
case 0x70690f:c.instructions+=8;goto B70690f;
case 0x706915:c.instructions+=7;goto B706915;
case 0x706918:c.instructions+=6;goto B706918;
case 0x70691a:c.instructions+=5;goto B70691a;
case 0x70691b:c.instructions+=4;goto B70691b;
case 0x70691d:c.instructions+=3;goto B70691d;
case 0x70691f:c.instructions+=2;goto B70691f;
case 0x706922:c.instructions+=1;goto B706922;
case 0x706928:goto L706928;
case 0x70692f:c.instructions+=1;goto B70692f;
case 0x706931:goto L706931;
case 0x706937:c.instructions+=4;goto B706937;
case 0x70693a:c.instructions+=3;goto B70693a;
case 0x70693c:c.instructions+=2;goto B70693c;
case 0x70693f:c.instructions+=1;goto B70693f;
case 0x706941:goto L706941;
case 0x706945:c.instructions+=7;goto B706945;
case 0x70694b:c.instructions+=6;goto B70694b;
case 0x70694e:c.instructions+=5;goto B70694e;
case 0x706952:c.instructions+=4;goto B706952;
case 0x706953:c.instructions+=3;goto B706953;
case 0x706958:c.instructions+=2;goto B706958;
case 0x706959:c.instructions+=1;goto B706959;
case 0x70695e:goto L70695e;
case 0x706964:c.instructions+=5;goto B706964;
case 0x706967:c.instructions+=4;goto B706967;
case 0x70696a:c.instructions+=3;goto B70696a;
case 0x70696d:c.instructions+=2;goto B70696d;
case 0x706970:c.instructions+=1;goto B706970;
case 0x706972:goto L706972;
case 0x706977:c.instructions+=2;goto B706977;
case 0x706978:c.instructions+=1;goto B706978;
case 0x70697d:goto L70697d;
case 0x70697e:c.instructions+=1;goto B70697e;
case 0x70697f:goto L70697f;
case 0x706985:c.instructions+=4;goto B706985;
case 0x706988:c.instructions+=3;goto B706988;
case 0x70698a:c.instructions+=2;goto B70698a;
case 0x70698d:c.instructions+=1;goto B70698d;
case 0x70698f:goto L70698f;
case 0x706993:c.instructions+=7;goto B706993;
case 0x706999:c.instructions+=6;goto B706999;
case 0x70699c:c.instructions+=5;goto B70699c;
case 0x7069a0:c.instructions+=4;goto B7069a0;
case 0x7069a1:c.instructions+=3;goto B7069a1;
case 0x7069a6:c.instructions+=2;goto B7069a6;
case 0x7069a7:c.instructions+=1;goto B7069a7;
case 0x7069ac:goto L7069ac;
case 0x7069b2:c.instructions+=5;goto B7069b2;
case 0x7069b5:c.instructions+=4;goto B7069b5;
case 0x7069b8:c.instructions+=3;goto B7069b8;
case 0x7069bb:c.instructions+=2;goto B7069bb;
case 0x7069be:c.instructions+=1;goto B7069be;
case 0x7069c0:goto L7069c0;
case 0x7069c5:c.instructions+=2;goto B7069c5;
case 0x7069c6:c.instructions+=1;goto B7069c6;
case 0x7069cb:goto L7069cb;
case 0x7069d1:c.instructions+=6;goto B7069d1;
case 0x7069d3:c.instructions+=5;goto B7069d3;
case 0x7069d5:c.instructions+=4;goto B7069d5;
case 0x7069d6:c.instructions+=3;goto B7069d6;
case 0x7069d7:c.instructions+=2;goto B7069d7;
case 0x7069da:c.instructions+=1;goto B7069da;
case 0x7069dc:goto L7069dc;
case 0x7069e2:c.instructions+=11;goto B7069e2;
case 0x7069e6:c.instructions+=10;goto B7069e6;
case 0x7069e9:c.instructions+=9;goto B7069e9;
case 0x7069ef:c.instructions+=8;goto B7069ef;
case 0x7069f2:c.instructions+=7;goto B7069f2;
case 0x7069f6:c.instructions+=6;goto B7069f6;
case 0x7069f9:c.instructions+=5;goto B7069f9;
case 0x7069fa:c.instructions+=4;goto B7069fa;
case 0x7069fb:c.instructions+=3;goto B7069fb;
case 0x706a00:c.instructions+=2;goto B706a00;
case 0x706a01:c.instructions+=1;goto B706a01;
case 0x706a06:goto L706a06;
case 0x706a0c:c.instructions+=5;goto B706a0c;
case 0x706a0f:c.instructions+=4;goto B706a0f;
case 0x706a12:c.instructions+=3;goto B706a12;
case 0x706a14:c.instructions+=2;goto B706a14;
case 0x706a17:c.instructions+=1;goto B706a17;
case 0x706a19:goto L706a19;
case 0x706a1e:c.instructions+=2;goto B706a1e;
case 0x706a1f:c.instructions+=1;goto B706a1f;
case 0x706a24:goto L706a24;
case 0x706a2a:c.instructions+=6;goto B706a2a;
case 0x706a2d:c.instructions+=5;goto B706a2d;
case 0x706a2f:c.instructions+=4;goto B706a2f;
case 0x706a32:c.instructions+=3;goto B706a32;
case 0x706a33:c.instructions+=2;goto B706a33;
case 0x706a34:c.instructions+=1;goto B706a34;
case 0x706a3a:goto L706a3a;
case 0x706a3f:c.instructions+=3;goto B706a3f;
case 0x706a40:c.instructions+=2;goto B706a40;
case 0x706a41:c.instructions+=1;goto B706a41;
case 0x706a46:goto L706a46;
case 0x706a47:c.instructions+=2;goto B706a47;
case 0x706a48:c.instructions+=1;goto B706a48;
case 0x706a4d:goto L706a4d;
case 0x706a4e:c.instructions+=1;goto B706a4e;
case 0x706a53:goto L706a53;
case 0x706a56:c.instructions+=6;goto B706a56;
case 0x706a5c:c.instructions+=5;goto B706a5c;
case 0x706a5d:c.instructions+=4;goto B706a5d;
case 0x706a5e:c.instructions+=3;goto B706a5e;
case 0x706a5f:c.instructions+=2;goto B706a5f;
case 0x706a60:c.instructions+=1;goto B706a60;
case 0x706a61:goto L706a61;
case 0x706a62:c.instructions+=17;goto B706a62;
case 0x706a64:c.instructions+=16;goto B706a64;
case 0x706a65:c.instructions+=15;goto B706a65;
case 0x706a68:c.instructions+=14;goto B706a68;
case 0x706a69:c.instructions+=13;goto B706a69;
case 0x706a6c:c.instructions+=12;goto B706a6c;
case 0x706a6d:c.instructions+=11;goto B706a6d;
case 0x706a70:c.instructions+=10;goto B706a70;
case 0x706a73:c.instructions+=9;goto B706a73;
case 0x706a75:c.instructions+=8;goto B706a75;
case 0x706a76:c.instructions+=7;goto B706a76;
case 0x706a78:c.instructions+=6;goto B706a78;
case 0x706a7b:c.instructions+=5;goto B706a7b;
case 0x706a7d:c.instructions+=4;goto B706a7d;
case 0x706a80:c.instructions+=3;goto B706a80;
case 0x706a82:c.instructions+=2;goto B706a82;
case 0x706a83:c.instructions+=1;goto B706a83;
case 0x706a85:goto L706a85;
case 0x706a87:c.instructions+=1;goto B706a87;
case 0x706a89:goto L706a89;
case 0x706a8b:goto L706a8b;
case 0x706a8d:c.instructions+=1;goto B706a8d;
case 0x706a8f:goto L706a8f;
case 0x706a91:goto L706a91;
case 0x706a93:c.instructions+=3;goto B706a93;
case 0x706a95:c.instructions+=2;goto B706a95;
case 0x706a98:c.instructions+=1;goto B706a98;
case 0x706a9a:goto L706a9a;
case 0x706a9d:c.instructions+=6;goto B706a9d;
case 0x706aa0:c.instructions+=5;goto B706aa0;
case 0x706aa4:c.instructions+=4;goto B706aa4;
case 0x706aa6:c.instructions+=3;goto B706aa6;
case 0x706aa7:c.instructions+=2;goto B706aa7;
case 0x706aae:c.instructions+=1;goto B706aae;
case 0x706ab1:goto L706ab1;
case 0x706ab4:c.instructions+=8;goto B706ab4;
case 0x706ab5:c.instructions+=7;goto B706ab5;
case 0x706ab8:c.instructions+=6;goto B706ab8;
case 0x706ab9:c.instructions+=5;goto B706ab9;
case 0x706abc:c.instructions+=4;goto B706abc;
case 0x706abf:c.instructions+=3;goto B706abf;
case 0x706ac0:c.instructions+=2;goto B706ac0;
case 0x706ac1:c.instructions+=1;goto B706ac1;
case 0x706ac2:goto L706ac2;
case 0x706ac3:c.instructions+=11;goto B706ac3;
case 0x706ac5:c.instructions+=10;goto B706ac5;
case 0x706ac8:c.instructions+=9;goto B706ac8;
case 0x706ac9:c.instructions+=8;goto B706ac9;
case 0x706aca:c.instructions+=7;goto B706aca;
case 0x706acb:c.instructions+=6;goto B706acb;
case 0x706acd:c.instructions+=5;goto B706acd;
case 0x706acf:c.instructions+=4;goto B706acf;
case 0x706ad0:c.instructions+=3;goto B706ad0;
case 0x706ad7:c.instructions+=2;goto B706ad7;
case 0x706ad9:c.instructions+=1;goto B706ad9;
case 0x706ada:goto L706ada;
case 0x706adc:c.instructions+=1;goto B706adc;
case 0x706add:goto L706add;
case 0x706ae0:c.instructions+=3;goto B706ae0;
case 0x706ae4:c.instructions+=2;goto B706ae4;
case 0x706ae6:c.instructions+=1;goto B706ae6;
case 0x706ae8:goto L706ae8;
case 0x706aef:c.instructions+=1;goto B706aef;
case 0x706af0:goto L706af0;
case 0x706af1:c.instructions+=2;goto B706af1;
case 0x706af3:c.instructions+=1;goto B706af3;
case 0x706af5:goto L706af5;
case 0x706af6:c.instructions+=2;goto B706af6;
case 0x706af9:c.instructions+=1;goto B706af9;
case 0x706afb:goto L706afb;
case 0x706afd:c.instructions+=1;goto B706afd;
case 0x706b03:goto L706b03;
case 0x706b07:c.instructions+=2;goto B706b07;
case 0x706b09:c.instructions+=1;goto B706b09;
case 0x706b0b:goto L706b0b;
case 0x706b0d:goto L706b0d;
case 0x706b0f:c.instructions+=2;goto B706b0f;
case 0x706b16:c.instructions+=1;goto B706b16;
case 0x706b18:goto L706b18;
case 0x706b1a:c.instructions+=2;goto B706b1a;
case 0x706b1c:c.instructions+=1;goto B706b1c;
case 0x706b1e:goto L706b1e;
case 0x706b1f:c.instructions+=2;goto B706b1f;
case 0x706b20:c.instructions+=1;goto B706b20;
case 0x706b22:goto L706b22;
case 0x706b23:c.instructions+=4;goto B706b23;
case 0x706b24:c.instructions+=3;goto B706b24;
case 0x706b25:c.instructions+=2;goto B706b25;
case 0x706b26:c.instructions+=1;goto B706b26;
case 0x706b27:goto L706b27;
case 0x706b28:c.instructions+=111;goto B706b28;
case 0x706b2a:c.instructions+=110;goto B706b2a;
case 0x706b2d:c.instructions+=109;goto B706b2d;
case 0x706b31:c.instructions+=108;goto B706b31;
case 0x706b34:c.instructions+=107;goto B706b34;
case 0x706b37:c.instructions+=106;goto B706b37;
case 0x706b3a:c.instructions+=105;goto B706b3a;
case 0x706b3b:c.instructions+=104;goto B706b3b;
case 0x706b3c:c.instructions+=103;goto B706b3c;
case 0x706b3d:c.instructions+=102;goto B706b3d;
case 0x706b40:c.instructions+=101;goto B706b40;
case 0x706b43:c.instructions+=100;goto B706b43;
case 0x706b47:c.instructions+=99;goto B706b47;
case 0x706b4c:c.instructions+=98;goto B706b4c;
case 0x706b4e:c.instructions+=97;goto B706b4e;
case 0x706b50:c.instructions+=96;goto B706b50;
case 0x706b53:c.instructions+=95;goto B706b53;
case 0x706b56:c.instructions+=94;goto B706b56;
case 0x706b59:c.instructions+=93;goto B706b59;
case 0x706b5b:c.instructions+=92;goto B706b5b;
case 0x706b5e:c.instructions+=91;goto B706b5e;
case 0x706b60:c.instructions+=90;goto B706b60;
case 0x706b62:c.instructions+=89;goto B706b62;
case 0x706b66:c.instructions+=88;goto B706b66;
case 0x706b69:c.instructions+=87;goto B706b69;
case 0x706b6c:c.instructions+=86;goto B706b6c;
case 0x706b6f:c.instructions+=85;goto B706b6f;
case 0x706b73:c.instructions+=84;goto B706b73;
case 0x706b75:c.instructions+=83;goto B706b75;
case 0x706b77:c.instructions+=82;goto B706b77;
case 0x706b7a:c.instructions+=81;goto B706b7a;
case 0x706b7e:c.instructions+=80;goto B706b7e;
case 0x706b81:c.instructions+=79;goto B706b81;
case 0x706b84:c.instructions+=78;goto B706b84;
case 0x706b87:c.instructions+=77;goto B706b87;
case 0x706b8b:c.instructions+=76;goto B706b8b;
case 0x706b8e:c.instructions+=75;goto B706b8e;
case 0x706b91:c.instructions+=74;goto B706b91;
case 0x706b94:c.instructions+=73;goto B706b94;
case 0x706b97:c.instructions+=72;goto B706b97;
case 0x706b9b:c.instructions+=71;goto B706b9b;
case 0x706b9d:c.instructions+=70;goto B706b9d;
case 0x706b9f:c.instructions+=69;goto B706b9f;
case 0x706ba2:c.instructions+=68;goto B706ba2;
case 0x706ba6:c.instructions+=67;goto B706ba6;
case 0x706ba9:c.instructions+=66;goto B706ba9;
case 0x706bac:c.instructions+=65;goto B706bac;
case 0x706baf:c.instructions+=64;goto B706baf;
case 0x706bb2:c.instructions+=63;goto B706bb2;
case 0x706bb6:c.instructions+=62;goto B706bb6;
case 0x706bb8:c.instructions+=61;goto B706bb8;
case 0x706bba:c.instructions+=60;goto B706bba;
case 0x706bbd:c.instructions+=59;goto B706bbd;
case 0x706bc0:c.instructions+=58;goto B706bc0;
case 0x706bc3:c.instructions+=57;goto B706bc3;
case 0x706bc7:c.instructions+=56;goto B706bc7;
case 0x706bc9:c.instructions+=55;goto B706bc9;
case 0x706bcb:c.instructions+=54;goto B706bcb;
case 0x706bcf:c.instructions+=53;goto B706bcf;
case 0x706bd3:c.instructions+=52;goto B706bd3;
case 0x706bd6:c.instructions+=51;goto B706bd6;
case 0x706bd9:c.instructions+=50;goto B706bd9;
case 0x706bdc:c.instructions+=49;goto B706bdc;
case 0x706be0:c.instructions+=48;goto B706be0;
case 0x706be3:c.instructions+=47;goto B706be3;
case 0x706be6:c.instructions+=46;goto B706be6;
case 0x706be9:c.instructions+=45;goto B706be9;
case 0x706bec:c.instructions+=44;goto B706bec;
case 0x706bf0:c.instructions+=43;goto B706bf0;
case 0x706bf2:c.instructions+=42;goto B706bf2;
case 0x706bf4:c.instructions+=41;goto B706bf4;
case 0x706bf7:c.instructions+=40;goto B706bf7;
case 0x706bfa:c.instructions+=39;goto B706bfa;
case 0x706bfd:c.instructions+=38;goto B706bfd;
case 0x706c01:c.instructions+=37;goto B706c01;
case 0x706c03:c.instructions+=36;goto B706c03;
case 0x706c05:c.instructions+=35;goto B706c05;
case 0x706c09:c.instructions+=34;goto B706c09;
case 0x706c0d:c.instructions+=33;goto B706c0d;
case 0x706c10:c.instructions+=32;goto B706c10;
case 0x706c13:c.instructions+=31;goto B706c13;
case 0x706c16:c.instructions+=30;goto B706c16;
case 0x706c19:c.instructions+=29;goto B706c19;
case 0x706c1d:c.instructions+=28;goto B706c1d;
case 0x706c20:c.instructions+=27;goto B706c20;
case 0x706c23:c.instructions+=26;goto B706c23;
case 0x706c26:c.instructions+=25;goto B706c26;
case 0x706c2a:c.instructions+=24;goto B706c2a;
case 0x706c2c:c.instructions+=23;goto B706c2c;
case 0x706c2e:c.instructions+=22;goto B706c2e;
case 0x706c31:c.instructions+=21;goto B706c31;
case 0x706c34:c.instructions+=20;goto B706c34;
case 0x706c37:c.instructions+=19;goto B706c37;
case 0x706c3b:c.instructions+=18;goto B706c3b;
case 0x706c3d:c.instructions+=17;goto B706c3d;
case 0x706c3f:c.instructions+=16;goto B706c3f;
case 0x706c43:c.instructions+=15;goto B706c43;
case 0x706c47:c.instructions+=14;goto B706c47;
case 0x706c4a:c.instructions+=13;goto B706c4a;
case 0x706c4d:c.instructions+=12;goto B706c4d;
case 0x706c50:c.instructions+=11;goto B706c50;
case 0x706c53:c.instructions+=10;goto B706c53;
case 0x706c57:c.instructions+=9;goto B706c57;
case 0x706c59:c.instructions+=8;goto B706c59;
case 0x706c5c:c.instructions+=7;goto B706c5c;
case 0x706c5d:c.instructions+=6;goto B706c5d;
case 0x706c60:c.instructions+=5;goto B706c60;
case 0x706c61:c.instructions+=4;goto B706c61;
case 0x706c64:c.instructions+=3;goto B706c64;
case 0x706c65:c.instructions+=2;goto B706c65;
case 0x706c66:c.instructions+=1;goto B706c66;
case 0x706c67:goto L706c67;
case 0x706c68:c.instructions+=90;goto B706c68;
case 0x706c6a:c.instructions+=89;goto B706c6a;
case 0x706c6d:c.instructions+=88;goto B706c6d;
case 0x706c71:c.instructions+=87;goto B706c71;
case 0x706c72:c.instructions+=86;goto B706c72;
case 0x706c73:c.instructions+=85;goto B706c73;
case 0x706c76:c.instructions+=84;goto B706c76;
case 0x706c79:c.instructions+=83;goto B706c79;
case 0x706c7d:c.instructions+=82;goto B706c7d;
case 0x706c80:c.instructions+=81;goto B706c80;
case 0x706c83:c.instructions+=80;goto B706c83;
case 0x706c86:c.instructions+=79;goto B706c86;
case 0x706c87:c.instructions+=78;goto B706c87;
case 0x706c8a:c.instructions+=77;goto B706c8a;
case 0x706c8c:c.instructions+=76;goto B706c8c;
case 0x706c90:c.instructions+=75;goto B706c90;
case 0x706c95:c.instructions+=74;goto B706c95;
case 0x706c97:c.instructions+=73;goto B706c97;
case 0x706c99:c.instructions+=72;goto B706c99;
case 0x706c9c:c.instructions+=71;goto B706c9c;
case 0x706c9f:c.instructions+=70;goto B706c9f;
case 0x706ca2:c.instructions+=69;goto B706ca2;
case 0x706ca6:c.instructions+=68;goto B706ca6;
case 0x706ca8:c.instructions+=67;goto B706ca8;
case 0x706caa:c.instructions+=66;goto B706caa;
case 0x706cad:c.instructions+=65;goto B706cad;
case 0x706cb0:c.instructions+=64;goto B706cb0;
case 0x706cb4:c.instructions+=63;goto B706cb4;
case 0x706cb7:c.instructions+=62;goto B706cb7;
case 0x706cba:c.instructions+=61;goto B706cba;
case 0x706cbd:c.instructions+=60;goto B706cbd;
case 0x706cc0:c.instructions+=59;goto B706cc0;
case 0x706cc4:c.instructions+=58;goto B706cc4;
case 0x706cc6:c.instructions+=57;goto B706cc6;
case 0x706cc8:c.instructions+=56;goto B706cc8;
case 0x706ccb:c.instructions+=55;goto B706ccb;
case 0x706cce:c.instructions+=54;goto B706cce;
case 0x706cd1:c.instructions+=53;goto B706cd1;
case 0x706cd4:c.instructions+=52;goto B706cd4;
case 0x706cd6:c.instructions+=51;goto B706cd6;
case 0x706cd8:c.instructions+=50;goto B706cd8;
case 0x706cdc:c.instructions+=49;goto B706cdc;
case 0x706cdf:c.instructions+=48;goto B706cdf;
case 0x706ce3:c.instructions+=47;goto B706ce3;
case 0x706ce6:c.instructions+=46;goto B706ce6;
case 0x706ce9:c.instructions+=45;goto B706ce9;
case 0x706ced:c.instructions+=44;goto B706ced;
case 0x706cf0:c.instructions+=43;goto B706cf0;
case 0x706cf3:c.instructions+=42;goto B706cf3;
case 0x706cf6:c.instructions+=41;goto B706cf6;
case 0x706cf9:c.instructions+=40;goto B706cf9;
case 0x706cfd:c.instructions+=39;goto B706cfd;
case 0x706cff:c.instructions+=38;goto B706cff;
case 0x706d01:c.instructions+=37;goto B706d01;
case 0x706d04:c.instructions+=36;goto B706d04;
case 0x706d07:c.instructions+=35;goto B706d07;
case 0x706d0a:c.instructions+=34;goto B706d0a;
case 0x706d0d:c.instructions+=33;goto B706d0d;
case 0x706d0f:c.instructions+=32;goto B706d0f;
case 0x706d11:c.instructions+=31;goto B706d11;
case 0x706d15:c.instructions+=30;goto B706d15;
case 0x706d18:c.instructions+=29;goto B706d18;
case 0x706d1c:c.instructions+=28;goto B706d1c;
case 0x706d1f:c.instructions+=27;goto B706d1f;
case 0x706d21:c.instructions+=26;goto B706d21;
case 0x706d23:c.instructions+=25;goto B706d23;
case 0x706d27:c.instructions+=24;goto B706d27;
case 0x706d2a:c.instructions+=23;goto B706d2a;
case 0x706d2d:c.instructions+=22;goto B706d2d;
case 0x706d30:c.instructions+=21;goto B706d30;
case 0x706d33:c.instructions+=20;goto B706d33;
case 0x706d36:c.instructions+=19;goto B706d36;
case 0x706d3a:c.instructions+=18;goto B706d3a;
case 0x706d3c:c.instructions+=17;goto B706d3c;
case 0x706d3e:c.instructions+=16;goto B706d3e;
case 0x706d41:c.instructions+=15;goto B706d41;
case 0x706d44:c.instructions+=14;goto B706d44;
case 0x706d47:c.instructions+=13;goto B706d47;
case 0x706d4a:c.instructions+=12;goto B706d4a;
case 0x706d4e:c.instructions+=11;goto B706d4e;
case 0x706d50:c.instructions+=10;goto B706d50;
case 0x706d52:c.instructions+=9;goto B706d52;
case 0x706d54:c.instructions+=8;goto B706d54;
case 0x706d57:c.instructions+=7;goto B706d57;
case 0x706d5a:c.instructions+=6;goto B706d5a;
case 0x706d5d:c.instructions+=5;goto B706d5d;
case 0x706d5e:c.instructions+=4;goto B706d5e;
case 0x706d5f:c.instructions+=3;goto B706d5f;
case 0x706d60:c.instructions+=2;goto B706d60;
case 0x706d61:c.instructions+=1;goto B706d61;
case 0x706d62:goto L706d62;
case 0x706d63:c.instructions+=17;goto B706d63;
case 0x706d65:c.instructions+=16;goto B706d65;
case 0x706d68:c.instructions+=15;goto B706d68;
case 0x706d69:c.instructions+=14;goto B706d69;
case 0x706d6a:c.instructions+=13;goto B706d6a;
case 0x706d6d:c.instructions+=12;goto B706d6d;
case 0x706d73:c.instructions+=11;goto B706d73;
case 0x706d76:c.instructions+=10;goto B706d76;
case 0x706d7c:c.instructions+=9;goto B706d7c;
case 0x706d7f:c.instructions+=8;goto B706d7f;
case 0x706d85:c.instructions+=7;goto B706d85;
case 0x706d88:c.instructions+=6;goto B706d88;
case 0x706d8e:c.instructions+=5;goto B706d8e;
case 0x706d8f:c.instructions+=4;goto B706d8f;
case 0x706d95:c.instructions+=3;goto B706d95;
case 0x706d98:c.instructions+=2;goto B706d98;
case 0x706d9f:c.instructions+=1;goto B706d9f;
case 0x706da4:goto L706da4;
case 0x706da5:c.instructions+=2;goto B706da5;
case 0x706da8:c.instructions+=1;goto B706da8;
case 0x706dad:goto L706dad;
case 0x706daf:c.instructions+=3;goto B706daf;
case 0x706db0:c.instructions+=2;goto B706db0;
case 0x706db3:c.instructions+=1;goto B706db3;
case 0x706db8:goto L706db8;
case 0x706dbb:c.instructions+=2;goto B706dbb;
case 0x706dbe:c.instructions+=1;goto B706dbe;
case 0x706dc3:goto L706dc3;
case 0x706dc5:c.instructions+=8;goto B706dc5;
case 0x706dc6:c.instructions+=7;goto B706dc6;
case 0x706dc7:c.instructions+=6;goto B706dc7;
case 0x706dca:c.instructions+=5;goto B706dca;
case 0x706dcd:c.instructions+=4;goto B706dcd;
case 0x706dce:c.instructions+=3;goto B706dce;
case 0x706dcf:c.instructions+=2;goto B706dcf;
case 0x706dd2:c.instructions+=1;goto B706dd2;
case 0x706dd7:goto L706dd7;
case 0x706ddb:c.instructions+=7;goto B706ddb;
case 0x706de2:c.instructions+=6;goto B706de2;
case 0x706de6:c.instructions+=5;goto B706de6;
case 0x706de9:c.instructions+=4;goto B706de9;
case 0x706dec:c.instructions+=3;goto B706dec;
case 0x706def:c.instructions+=2;goto B706def;
case 0x706df2:c.instructions+=1;goto B706df2;
case 0x706df4:goto L706df4;
case 0x706dfa:c.instructions+=7;goto B706dfa;
case 0x706dfd:c.instructions+=6;goto B706dfd;
case 0x706e03:c.instructions+=5;goto B706e03;
case 0x706e06:c.instructions+=4;goto B706e06;
case 0x706e0c:c.instructions+=3;goto B706e0c;
case 0x706e0f:c.instructions+=2;goto B706e0f;
case 0x706e15:c.instructions+=1;goto B706e15;
case 0x706e1c:goto L706e1c;
case 0x706e1f:c.instructions+=4;goto B706e1f;
case 0x706e24:c.instructions+=3;goto B706e24;
case 0x706e25:c.instructions+=2;goto B706e25;
case 0x706e26:c.instructions+=1;goto B706e26;
case 0x706e2b:goto L706e2b;
case 0x706e2d:c.instructions+=3;goto B706e2d;
case 0x706e2e:c.instructions+=2;goto B706e2e;
case 0x706e31:c.instructions+=1;goto B706e31;
case 0x706e36:goto L706e36;
case 0x706e39:c.instructions+=2;goto B706e39;
case 0x706e3c:c.instructions+=1;goto B706e3c;
case 0x706e41:goto L706e41;
case 0x706e43:c.instructions+=8;goto B706e43;
case 0x706e44:c.instructions+=7;goto B706e44;
case 0x706e45:c.instructions+=6;goto B706e45;
case 0x706e48:c.instructions+=5;goto B706e48;
case 0x706e4e:c.instructions+=4;goto B706e4e;
case 0x706e4f:c.instructions+=3;goto B706e4f;
case 0x706e50:c.instructions+=2;goto B706e50;
case 0x706e53:c.instructions+=1;goto B706e53;
case 0x706e58:goto L706e58;
case 0x706e5b:c.instructions+=6;goto B706e5b;
case 0x706e5f:c.instructions+=5;goto B706e5f;
case 0x706e66:c.instructions+=4;goto B706e66;
case 0x706e69:c.instructions+=3;goto B706e69;
case 0x706e6c:c.instructions+=2;goto B706e6c;
case 0x706e6f:c.instructions+=1;goto B706e6f;
case 0x706e71:goto L706e71;
case 0x706e77:c.instructions+=6;goto B706e77;
case 0x706e7a:c.instructions+=5;goto B706e7a;
case 0x706e80:c.instructions+=4;goto B706e80;
case 0x706e86:c.instructions+=3;goto B706e86;
case 0x706e8c:c.instructions+=2;goto B706e8c;
case 0x706e92:c.instructions+=1;goto B706e92;
case 0x706e99:goto L706e99;
case 0x706e9b:c.instructions+=4;goto B706e9b;
case 0x706e9e:c.instructions+=3;goto B706e9e;
case 0x706ea1:c.instructions+=2;goto B706ea1;
case 0x706ea8:c.instructions+=1;goto B706ea8;
case 0x706eaa:goto L706eaa;
case 0x706ead:goto L706ead;
case 0x706eb0:c.instructions+=4;goto B706eb0;
case 0x706eb3:c.instructions+=3;goto B706eb3;
case 0x706eb6:c.instructions+=2;goto B706eb6;
case 0x706eb9:c.instructions+=1;goto B706eb9;
case 0x706ec0:goto L706ec0;
case 0x706ec1:c.instructions+=2;goto B706ec1;
case 0x706ec4:c.instructions+=1;goto B706ec4;
case 0x706ec9:goto L706ec9;
case 0x706ecb:c.instructions+=3;goto B706ecb;
case 0x706ecc:c.instructions+=2;goto B706ecc;
case 0x706ecd:c.instructions+=1;goto B706ecd;
case 0x706ed2:goto L706ed2;
case 0x706ed5:c.instructions+=2;goto B706ed5;
case 0x706ed6:c.instructions+=1;goto B706ed6;
case 0x706edb:goto L706edb;
case 0x706edd:c.instructions+=8;goto B706edd;
case 0x706ede:c.instructions+=7;goto B706ede;
case 0x706edf:c.instructions+=6;goto B706edf;
case 0x706ee2:c.instructions+=5;goto B706ee2;
case 0x706ee8:c.instructions+=4;goto B706ee8;
case 0x706ee9:c.instructions+=3;goto B706ee9;
case 0x706eea:c.instructions+=2;goto B706eea;
case 0x706eeb:c.instructions+=1;goto B706eeb;
case 0x706ef0:goto L706ef0;
case 0x706ef4:c.instructions+=7;goto B706ef4;
case 0x706ef7:c.instructions+=6;goto B706ef7;
case 0x706efb:c.instructions+=5;goto B706efb;
case 0x706efe:c.instructions+=4;goto B706efe;
case 0x706f01:c.instructions+=3;goto B706f01;
case 0x706f07:c.instructions+=2;goto B706f07;
case 0x706f0a:c.instructions+=1;goto B706f0a;
case 0x706f0c:goto L706f0c;
case 0x706f0f:c.instructions+=5;goto B706f0f;
case 0x706f16:c.instructions+=4;goto B706f16;
case 0x706f19:c.instructions+=3;goto B706f19;
case 0x706f1c:c.instructions+=2;goto B706f1c;
case 0x706f1f:c.instructions+=1;goto B706f1f;
case 0x706f21:goto L706f21;
case 0x706f25:c.instructions+=3;goto B706f25;
case 0x706f28:c.instructions+=2;goto B706f28;
case 0x706f2a:c.instructions+=1;goto B706f2a;
case 0x706f30:goto L706f30;
case 0x706f31:c.instructions+=4;goto B706f31;
case 0x706f32:c.instructions+=3;goto B706f32;
case 0x706f33:c.instructions+=2;goto B706f33;
case 0x706f34:c.instructions+=1;goto B706f34;
case 0x706f35:goto L706f35;
case 0x706f36:c.instructions+=13;goto B706f36;
case 0x706f38:c.instructions+=12;goto B706f38;
case 0x706f3b:c.instructions+=11;goto B706f3b;
case 0x706f3c:c.instructions+=10;goto B706f3c;
case 0x706f3f:c.instructions+=9;goto B706f3f;
case 0x706f40:c.instructions+=8;goto B706f40;
case 0x706f41:c.instructions+=7;goto B706f41;
case 0x706f46:c.instructions+=6;goto B706f46;
case 0x706f49:c.instructions+=5;goto B706f49;
case 0x706f4a:c.instructions+=4;goto B706f4a;
case 0x706f4b:c.instructions+=3;goto B706f4b;
case 0x706f4d:c.instructions+=2;goto B706f4d;
case 0x706f4e:c.instructions+=1;goto B706f4e;
case 0x706f50:goto L706f50;
case 0x706f52:goto L706f52;
case 0x706f5a:c.instructions+=4;goto B706f5a;
case 0x706f5b:c.instructions+=3;goto B706f5b;
case 0x706f61:c.instructions+=2;goto B706f61;
case 0x706f62:c.instructions+=1;goto B706f62;
case 0x706f67:goto L706f67;
case 0x706f69:c.instructions+=3;goto B706f69;
case 0x706f6a:c.instructions+=2;goto B706f6a;
case 0x706f6b:c.instructions+=1;goto B706f6b;
case 0x706f6d:goto L706f6d;
case 0x706f73:c.instructions+=3;goto B706f73;
case 0x706f75:c.instructions+=2;goto B706f75;
case 0x706f76:c.instructions+=1;goto B706f76;
case 0x706f7b:goto L706f7b;
case 0x706f7c:c.instructions+=6;goto B706f7c;
case 0x706f7e:c.instructions+=5;goto B706f7e;
case 0x706f7f:c.instructions+=4;goto B706f7f;
case 0x706f82:c.instructions+=3;goto B706f82;
case 0x706f84:c.instructions+=2;goto B706f84;
case 0x706f88:c.instructions+=1;goto B706f88;
case 0x706f8a:goto L706f8a;
case 0x706f8e:c.instructions+=1;goto B706f8e;
case 0x706f90:goto L706f90;
case 0x706f94:goto L706f94;
case 0x706f97:c.instructions+=1;goto B706f97;
case 0x706f9e:goto L706f9e;
case 0x706f9f:c.instructions+=2;goto B706f9f;
case 0x706fa2:c.instructions+=1;goto B706fa2;
case 0x706fa4:goto L706fa4;
case 0x706fa7:c.instructions+=2;goto B706fa7;
case 0x706faa:c.instructions+=1;goto B706faa;
case 0x706fac:goto L706fac;
case 0x706fb0:c.instructions+=1;goto B706fb0;
case 0x706fb2:goto L706fb2;
case 0x706fb4:c.instructions+=3;goto B706fb4;
case 0x706fba:c.instructions+=2;goto B706fba;
case 0x706fbb:c.instructions+=1;goto B706fbb;
case 0x706fc0:goto L706fc0;
case 0x706fc2:goto L706fc2;
case 0x706fc7:c.instructions+=3;goto B706fc7;
case 0x706fcd:c.instructions+=2;goto B706fcd;
case 0x706fce:c.instructions+=1;goto B706fce;
case 0x706fd3:goto L706fd3;
case 0x706fd5:c.instructions+=3;goto B706fd5;
case 0x706fd6:c.instructions+=2;goto B706fd6;
case 0x706fd7:c.instructions+=1;goto B706fd7;
case 0x706fd9:goto L706fd9;
case 0x706fdb:c.instructions+=5;goto B706fdb;
case 0x706fdc:c.instructions+=4;goto B706fdc;
case 0x706fe3:c.instructions+=3;goto B706fe3;
case 0x706fe4:c.instructions+=2;goto B706fe4;
case 0x706fe5:c.instructions+=1;goto B706fe5;
case 0x706fea:goto L706fea;
case 0x706fec:c.instructions+=3;goto B706fec;
case 0x706fed:c.instructions+=2;goto B706fed;
case 0x706fee:c.instructions+=1;goto B706fee;
case 0x706ff0:goto L706ff0;
case 0x706ff2:c.instructions+=2;goto B706ff2;
case 0x706ff3:c.instructions+=1;goto B706ff3;
case 0x706ff8:goto L706ff8;
case 0x706ff9:c.instructions+=2;goto B706ff9;
case 0x706ffa:c.instructions+=1;goto B706ffa;
default:missing_instruction(c.pc);}
B706000:L706000:{c.instructions+=5;NFSU2_TR(0x706000);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B706001:{NFSU2_TR(0x706001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706002:{NFSU2_TR(0x706002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706005:{NFSU2_TR(0x706005);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B706007:{NFSU2_TR(0x706007);
if(r1(R+518)){{goto L706031;}}
}
B706009:L706009:{c.instructions+=2;NFSU2_TR(0x706009);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70600a:{NFSU2_TR(0x70600a);
if(r1(R+518)){{goto L70602a;}}
}
B70600c:L70600c:{c.instructions+=3;NFSU2_TR(0x70600c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70600d:{NFSU2_TR(0x70600d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70600e:{NFSU2_TR(0x70600e);
if(r1(R+518)){{goto L706023;}}
}
B706010:L706010:{c.instructions+=3;NFSU2_TR(0x706010);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B706011:{NFSU2_TR(0x706011);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B706012:{NFSU2_TR(0x706012);
if(r1(R+518)){{goto L70601a;}}
}
B706014:L706014:{c.instructions+=2;NFSU2_TR(0x706014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706018:{NFSU2_TR(0x706018);
{goto L706039;}
}
B70601a:L70601a:{c.instructions+=2;NFSU2_TR(0x70601a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x7051dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B706021:{NFSU2_TR(0x706021);
{goto L706039;}
}
B706023:L706023:{c.instructions+=2;NFSU2_TR(0x706023);
__builtin_memmove((R+0),gp(0x8b9eb4),4);
}
B706028:{NFSU2_TR(0x706028);
{goto L706036;}
}
B70602a:L70602a:{c.instructions+=2;NFSU2_TR(0x70602a);
__builtin_memmove((R+0),gp(0x8b9f08),4);
}
B70602f:{NFSU2_TR(0x70602f);
{goto L706036;}
}
B706031:L706031:{c.instructions+=1;NFSU2_TR(0x706031);
__builtin_memmove((R+0),gp(0x8b9ed8),4);
}
B706036:L706036:{c.instructions+=1;NFSU2_TR(0x706036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706039:L706039:{c.instructions+=6;NFSU2_TR(0x706039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70603c:{NFSU2_TR(0x70603c);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70603e:{NFSU2_TR(0x70603e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70603f:{NFSU2_TR(0x70603f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70603f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70603f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B706041:{NFSU2_TR(0x706041);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B706043:{NFSU2_TR(0x706043);
if(r1(R+518)){{goto L706095;}}
}
B706045:L706045:{c.instructions+=2;NFSU2_TR(0x706045);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B706046:{NFSU2_TR(0x706046);
if(r1(R+518)){{goto L70607c;}}
}
B706048:L706048:{c.instructions+=3;NFSU2_TR(0x706048);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B706049:{NFSU2_TR(0x706049);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70604a:{NFSU2_TR(0x70604a);
if(r1(R+518)){{goto L706066;}}
}
B70604c:L70604c:{c.instructions+=3;NFSU2_TR(0x70604c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70604d:{NFSU2_TR(0x70604d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70604e:{NFSU2_TR(0x70604e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7060b5;}}
}
B706050:L706050:{c.instructions+=8;NFSU2_TR(0x706050);
w4(R+0,u32(0x7051fcull));
}
B706055:{NFSU2_TR(0x706055);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706057:{NFSU2_TR(0x706057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70605a:{NFSU2_TR(0x70605a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70605d:{NFSU2_TR(0x70605d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70605e:{NFSU2_TR(0x70605e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706061:{NFSU2_TR(0x706061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706064:{NFSU2_TR(0x706064);
{goto L7060af;}
}
B706066:L706066:{c.instructions+=5;NFSU2_TR(0x706066);
__builtin_memmove((R+0),gp(0x8b9ed4),4);
}
B70606b:{NFSU2_TR(0x70606b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70606e:{NFSU2_TR(0x70606e);
__builtin_memmove((R+0),gp(0x8b9ed0),4);
}
B706073:{NFSU2_TR(0x706073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70607a:{NFSU2_TR(0x70607a);
{goto L706090;}
}
B70607c:L70607c:{c.instructions+=4;NFSU2_TR(0x70607c);
__builtin_memmove((R+0),gp(0x8b9f00),4);
}
B706081:{NFSU2_TR(0x706081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706084:{NFSU2_TR(0x706084);
__builtin_memmove((R+0),gp(0x8b9ee8),4);
}
B706089:{NFSU2_TR(0x706089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706090:L706090:{c.instructions+=2;NFSU2_TR(0x706090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706093:{NFSU2_TR(0x706093);
{goto L7060ac;}
}
B706095:L706095:{c.instructions+=5;NFSU2_TR(0x706095);
__builtin_memmove((R+0),gp(0x8b9ec8),4);
}
B70609a:{NFSU2_TR(0x70609a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70609d:{NFSU2_TR(0x70609d);
__builtin_memmove((R+0),gp(0x8b9efc),4);
}
B7060a2:{NFSU2_TR(0x7060a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7060a5:{NFSU2_TR(0x7060a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7060ac:L7060ac:{c.instructions+=1;NFSU2_TR(0x7060ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7060af:L7060af:{c.instructions+=2;NFSU2_TR(0x7060af);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7060b3:{NFSU2_TR(0x7060b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7060bc;}}
}
B7060b5:L7060b5:{c.instructions+=2;NFSU2_TR(0x7060b5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7060b7:{NFSU2_TR(0x7060b7);
{goto L7061b1;}
}
B7060bc:L7060bc:{c.instructions+=7;NFSU2_TR(0x7060bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7060bf:{NFSU2_TR(0x7060bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7060c2:{NFSU2_TR(0x7060c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7060c5:{NFSU2_TR(0x7060c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7060c6:{NFSU2_TR(0x7060c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7060c9:{NFSU2_TR(0x7060c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7060ca:{NFSU2_TR(0x7060ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7060cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7060cd:L7060cd:{c.instructions+=10;NFSU2_TR(0x7060cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7060d0:{NFSU2_TR(0x7060d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7060d3:{NFSU2_TR(0x7060d3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7060d5:{NFSU2_TR(0x7060d5);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7060d9:{NFSU2_TR(0x7060d9);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7060d9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7060d9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7060db:{NFSU2_TR(0x7060db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7060de:{NFSU2_TR(0x7060de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7060e1:{NFSU2_TR(0x7060e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B7060e4:{NFSU2_TR(0x7060e4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7060e6:{NFSU2_TR(0x7060e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70616f;}}
}
B7060ec:L7060ec:{c.instructions+=8;NFSU2_TR(0x7060ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7060ef:{NFSU2_TR(0x7060ef);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B7060f3:{NFSU2_TR(0x7060f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7060f6:{NFSU2_TR(0x7060f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7060f9:{NFSU2_TR(0x7060f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7060fc:{NFSU2_TR(0x7060fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7060ff:{NFSU2_TR(0x7060ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706102:{NFSU2_TR(0x706102);
{goto L70610a;}
}
B706104:L706104:{c.instructions+=2;NFSU2_TR(0x706104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706107:{NFSU2_TR(0x706107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70610a:L70610a:{c.instructions+=3;NFSU2_TR(0x70610a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70610d:{NFSU2_TR(0x70610d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706110:{NFSU2_TR(0x706110);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70614a;}}
}
B706112:L706112:{c.instructions+=7;NFSU2_TR(0x706112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706115:{NFSU2_TR(0x706115);
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B706117:{NFSU2_TR(0x706117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70611a:{NFSU2_TR(0x70611a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70611d:{NFSU2_TR(0x70611d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70611e:{NFSU2_TR(0x70611e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706121:{NFSU2_TR(0x706121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706124:L706124:{c.instructions+=5;NFSU2_TR(0x706124);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706127:{NFSU2_TR(0x706127);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70612a:{NFSU2_TR(0x70612a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70612d:{NFSU2_TR(0x70612d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706130:{NFSU2_TR(0x706130);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706133ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B706133:L706133:{c.instructions+=6;NFSU2_TR(0x706133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706136:{NFSU2_TR(0x706136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B706139:{NFSU2_TR(0x706139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70613c:{NFSU2_TR(0x70613c);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70613f:{NFSU2_TR(0x70613f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B706142:{NFSU2_TR(0x706142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706124u);}goto L706124;}}
}
B706144:L706144:{c.instructions+=2;NFSU2_TR(0x706144);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706147:{NFSU2_TR(0x706147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70614a:L70614a:{c.instructions+=8;NFSU2_TR(0x70614a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70614d:{NFSU2_TR(0x70614d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70614f:{NFSU2_TR(0x70614f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706150:{NFSU2_TR(0x706150);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706153:{NFSU2_TR(0x706153);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+4)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706155:{NFSU2_TR(0x706155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706156:{NFSU2_TR(0x706156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706159:{NFSU2_TR(0x706159);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70615cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70615c:L70615c:{c.instructions+=4;NFSU2_TR(0x70615c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70615f:{NFSU2_TR(0x70615f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706160:{NFSU2_TR(0x706160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706161:{NFSU2_TR(0x706161);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706164ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B706164:L706164:{c.instructions+=4;NFSU2_TR(0x706164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B706167:{NFSU2_TR(0x706167);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B70616a:{NFSU2_TR(0x70616a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70616d:{NFSU2_TR(0x70616d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706104u);}goto L706104;}}
}
B70616f:L70616f:{c.instructions+=3;NFSU2_TR(0x70616f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706172:{NFSU2_TR(0x706172);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706175:{NFSU2_TR(0x706175);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7061a3;}}
}
B706177:L706177:{c.instructions+=6;NFSU2_TR(0x706177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70617a:{NFSU2_TR(0x70617a);
w1(R+512,carry<u32>(r4(R+28),r4(R+4)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B70617c:{NFSU2_TR(0x70617c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70617d:{NFSU2_TR(0x70617d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706180:{NFSU2_TR(0x706180);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B706183:{NFSU2_TR(0x706183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706186:L706186:{c.instructions+=5;NFSU2_TR(0x706186);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706189:{NFSU2_TR(0x706189);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70618a:{NFSU2_TR(0x70618a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70618d:{NFSU2_TR(0x70618d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706190:{NFSU2_TR(0x706190);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706193ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B706193:L706193:{c.instructions+=6;NFSU2_TR(0x706193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706196:{NFSU2_TR(0x706196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B706199:{NFSU2_TR(0x706199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70619c:{NFSU2_TR(0x70619c);
w1(R+512,carry<u32>(r4(R+28),r4(R+12)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B70619e:{NFSU2_TR(0x70619e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7061a1:{NFSU2_TR(0x7061a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706186u);}goto L706186;}}
}
B7061a3:L7061a3:{c.instructions+=4;NFSU2_TR(0x7061a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7061a6:{NFSU2_TR(0x7061a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7061a7:{NFSU2_TR(0x7061a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7061a8:{NFSU2_TR(0x7061a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7061abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7061ab:L7061ab:{c.instructions+=2;NFSU2_TR(0x7061ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7061ae:{NFSU2_TR(0x7061ae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7061b1:L7061b1:{c.instructions+=5;NFSU2_TR(0x7061b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7061b2:{NFSU2_TR(0x7061b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7061b3:{NFSU2_TR(0x7061b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7061b4:{NFSU2_TR(0x7061b4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7061b5:{NFSU2_TR(0x7061b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7061b6:L7061b6:{c.instructions+=27;NFSU2_TR(0x7061b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7061b7:{NFSU2_TR(0x7061b7);
__builtin_memmove((R+20),(R+16),4);
}
B7061b9:{NFSU2_TR(0x7061b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B7061bc:{NFSU2_TR(0x7061bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7061bd:{NFSU2_TR(0x7061bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7061be:{NFSU2_TR(0x7061be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7061c1:{NFSU2_TR(0x7061c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7061c4:{NFSU2_TR(0x7061c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7061c7:{NFSU2_TR(0x7061c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7061ca:{NFSU2_TR(0x7061ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7061cb:{NFSU2_TR(0x7061cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7061ce:{NFSU2_TR(0x7061ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7061d1:{NFSU2_TR(0x7061d1);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7061d5:{NFSU2_TR(0x7061d5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7061d7:{NFSU2_TR(0x7061d7);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7061d7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7061d7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7061d9:{NFSU2_TR(0x7061d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7061dc:{NFSU2_TR(0x7061dc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7061de:{NFSU2_TR(0x7061de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7061e1:{NFSU2_TR(0x7061e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7061e4:{NFSU2_TR(0x7061e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7061e7:{NFSU2_TR(0x7061e7);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7061eb:{NFSU2_TR(0x7061eb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7061ef:{NFSU2_TR(0x7061ef);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7061ef);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7061ef);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7061f1:{NFSU2_TR(0x7061f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7061f4:{NFSU2_TR(0x7061f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7061f7:{NFSU2_TR(0x7061f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7061fa:{NFSU2_TR(0x7061fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70620f;}}
}
B7061fc:L7061fc:{c.instructions+=10;NFSU2_TR(0x7061fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7061ff:{NFSU2_TR(0x7061ff);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B706200:{NFSU2_TR(0x706200);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706200);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706200);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B706202:{NFSU2_TR(0x706202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706203:{NFSU2_TR(0x706203);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B706206:{NFSU2_TR(0x706206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B706209:{NFSU2_TR(0x706209);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70620a:{NFSU2_TR(0x70620a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70620b:{NFSU2_TR(0x70620b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70620b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70620b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B70620d:{NFSU2_TR(0x70620d);
{goto L706222;}
}
B70620f:L70620f:{c.instructions+=9;NFSU2_TR(0x70620f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B706212:{NFSU2_TR(0x706212);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B706213:{NFSU2_TR(0x706213);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706215:{NFSU2_TR(0x706215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706216:{NFSU2_TR(0x706216);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706216);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706216);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B706218:{NFSU2_TR(0x706218);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70621b:{NFSU2_TR(0x70621b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70621e:{NFSU2_TR(0x70621e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70621f:{NFSU2_TR(0x70621f);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70621f);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70621f);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B706222:L706222:{c.instructions+=4;NFSU2_TR(0x706222);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B706226:{NFSU2_TR(0x706226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706229:{NFSU2_TR(0x706229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70622c:{NFSU2_TR(0x70622c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L706242;}}
}
B70622e:L70622e:{c.instructions+=10;NFSU2_TR(0x70622e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706231:{NFSU2_TR(0x706231);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B706232:{NFSU2_TR(0x706232);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706234:{NFSU2_TR(0x706234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706235:{NFSU2_TR(0x706235);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706235);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706235);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B706237:{NFSU2_TR(0x706237);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70623a:{NFSU2_TR(0x70623a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70623d:{NFSU2_TR(0x70623d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70623e:{NFSU2_TR(0x70623e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70623e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70623e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B706240:{NFSU2_TR(0x706240);
{goto L706255;}
}
B706242:L706242:{c.instructions+=9;NFSU2_TR(0x706242);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706245:{NFSU2_TR(0x706245);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B706246:{NFSU2_TR(0x706246);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706248:{NFSU2_TR(0x706248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706249:{NFSU2_TR(0x706249);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706249);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706249);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B70624b:{NFSU2_TR(0x70624b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70624e:{NFSU2_TR(0x70624e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B706251:{NFSU2_TR(0x706251);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B706252:{NFSU2_TR(0x706252);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706252);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x706252);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B706255:L706255:{c.instructions+=19;NFSU2_TR(0x706255);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706258:{NFSU2_TR(0x706258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70625b:{NFSU2_TR(0x70625b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70625e:{NFSU2_TR(0x70625e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706261:{NFSU2_TR(0x706261);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706264:{NFSU2_TR(0x706264);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706267:{NFSU2_TR(0x706267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70626a:{NFSU2_TR(0x70626a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70626b:{NFSU2_TR(0x70626b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706271:{NFSU2_TR(0x706271);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706272:{NFSU2_TR(0x706272);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706275:{NFSU2_TR(0x706275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706278:{NFSU2_TR(0x706278);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70627b:{NFSU2_TR(0x70627b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70627c:{NFSU2_TR(0x70627c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70627f:{NFSU2_TR(0x70627f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706282:{NFSU2_TR(0x706282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706283:{NFSU2_TR(0x706283);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706284:{NFSU2_TR(0x706284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706289ull));
TAIL_STATIC(0x705fdau,705);
}
B706289:L706289:{c.instructions+=5;NFSU2_TR(0x706289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70628d:{NFSU2_TR(0x70628d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B706290:{NFSU2_TR(0x706290);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B706294:{NFSU2_TR(0x706294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706297:{NFSU2_TR(0x706297);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7062d0;}}
}
B706299:L706299:{c.instructions+=3;NFSU2_TR(0x706299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70629c:{NFSU2_TR(0x70629c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70629f:{NFSU2_TR(0x70629f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7062a2:L7062a2:{c.instructions+=9;NFSU2_TR(0x7062a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7062a5:{NFSU2_TR(0x7062a5);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B7062a9:{NFSU2_TR(0x7062a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7062ac:{NFSU2_TR(0x7062ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7062af:{NFSU2_TR(0x7062af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7062b2:{NFSU2_TR(0x7062b2);
__builtin_memmove((R+8),(R+4),4);
}
B7062b4:{NFSU2_TR(0x7062b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7062b7:{NFSU2_TR(0x7062b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7062ba:{NFSU2_TR(0x7062ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7062bc:L7062bc:{c.instructions+=1;NFSU2_TR(0x7062bc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7062be;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7062bcu);}goto L7062bc;}
}
B7062be:L7062be:{c.instructions+=3;NFSU2_TR(0x7062be);
__builtin_memmove((R+4),(R+8),4);
}
B7062c0:{NFSU2_TR(0x7062c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7062c3:{NFSU2_TR(0x7062c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7062c6:L7062c6:{c.instructions+=1;NFSU2_TR(0x7062c6);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L7062c8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7062c6u);}goto L7062c6;}
}
B7062c8:L7062c8:{c.instructions+=3;NFSU2_TR(0x7062c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7062cb:{NFSU2_TR(0x7062cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7062ce:{NFSU2_TR(0x7062ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7062a2u);}goto L7062a2;}}
}
B7062d0:L7062d0:{c.instructions+=3;NFSU2_TR(0x7062d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7062d3:{NFSU2_TR(0x7062d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7062d6:{NFSU2_TR(0x7062d6);
{goto L7062fe;}
}
B7062d8:L7062d8:{c.instructions+=8;NFSU2_TR(0x7062d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7062db:{NFSU2_TR(0x7062db);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B7062df:{NFSU2_TR(0x7062df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7062e2:{NFSU2_TR(0x7062e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7062e5:{NFSU2_TR(0x7062e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7062e8:{NFSU2_TR(0x7062e8);
__builtin_memmove((R+8),(R+4),4);
}
B7062ea:{NFSU2_TR(0x7062ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7062ed:{NFSU2_TR(0x7062ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7062ef:L7062ef:{c.instructions+=1;NFSU2_TR(0x7062ef);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7062f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7062efu);}goto L7062ef;}
}
B7062f1:L7062f1:{c.instructions+=3;NFSU2_TR(0x7062f1);
__builtin_memmove((R+4),(R+8),4);
}
B7062f3:{NFSU2_TR(0x7062f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7062f6:{NFSU2_TR(0x7062f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7062f9:L7062f9:{c.instructions+=1;NFSU2_TR(0x7062f9);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L7062fb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7062f9u);}goto L7062f9;}
}
B7062fb:L7062fb:{c.instructions+=1;NFSU2_TR(0x7062fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7062fe:L7062fe:{c.instructions+=2;NFSU2_TR(0x7062fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B706301:{NFSU2_TR(0x706301);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7062d8u);}goto L7062d8;}}
}
B706303:L706303:{c.instructions+=2;NFSU2_TR(0x706303);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B706307:{NFSU2_TR(0x706307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70630d;}}
}
B706309:L706309:{c.instructions+=2;NFSU2_TR(0x706309);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70630b:{NFSU2_TR(0x70630b);
{goto L70638b;}
}
B70630d:L70630d:{c.instructions+=32;NFSU2_TR(0x70630d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B706310:{NFSU2_TR(0x706310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706313:{NFSU2_TR(0x706313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706316:{NFSU2_TR(0x706316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B706319:{NFSU2_TR(0x706319);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70631a:{NFSU2_TR(0x70631a);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B70631c:{NFSU2_TR(0x70631c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70631d:{NFSU2_TR(0x70631d);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70631f:{NFSU2_TR(0x70631f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B706320:{NFSU2_TR(0x706320);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B706322:{NFSU2_TR(0x706322);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B706323:{NFSU2_TR(0x706323);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B706325:{NFSU2_TR(0x706325);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706326:{NFSU2_TR(0x706326);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706327:{NFSU2_TR(0x706327);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70632a:{NFSU2_TR(0x70632a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70632d:{NFSU2_TR(0x70632d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706330:{NFSU2_TR(0x706330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B706333:{NFSU2_TR(0x706333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706336:{NFSU2_TR(0x706336);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706337:{NFSU2_TR(0x706337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706338:{NFSU2_TR(0x706338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70633b:{NFSU2_TR(0x70633b);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70633d:{NFSU2_TR(0x70633d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706343:{NFSU2_TR(0x706343);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706344:{NFSU2_TR(0x706344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706345:{NFSU2_TR(0x706345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706348:{NFSU2_TR(0x706348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70634b:{NFSU2_TR(0x70634b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70634e:{NFSU2_TR(0x70634e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70634f:{NFSU2_TR(0x70634f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706350:{NFSU2_TR(0x706350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706355ull));
TAIL_STATIC(0x705fdau,705);
}
B706355:L706355:{c.instructions+=17;NFSU2_TR(0x706355);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706358:{NFSU2_TR(0x706358);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70635b:{NFSU2_TR(0x70635b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70635e:{NFSU2_TR(0x70635e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706361:{NFSU2_TR(0x706361);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706364:{NFSU2_TR(0x706364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706365:{NFSU2_TR(0x706365);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706368:{NFSU2_TR(0x706368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70636b:{NFSU2_TR(0x70636b);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70636d:{NFSU2_TR(0x70636d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706373:{NFSU2_TR(0x706373);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706374:{NFSU2_TR(0x706374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706375:{NFSU2_TR(0x706375);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70637b:{NFSU2_TR(0x70637b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70637e:{NFSU2_TR(0x70637e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70637f:{NFSU2_TR(0x70637f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706380:{NFSU2_TR(0x706380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706385ull));
TAIL_STATIC(0x705fdau,705);
}
B706385:L706385:{c.instructions+=2;NFSU2_TR(0x706385);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706388:{NFSU2_TR(0x706388);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70638b:L70638b:{c.instructions+=5;NFSU2_TR(0x70638b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70638c:{NFSU2_TR(0x70638c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70638d:{NFSU2_TR(0x70638d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70638e:{NFSU2_TR(0x70638e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70638f:{NFSU2_TR(0x70638f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706390:L706390:{c.instructions+=27;NFSU2_TR(0x706390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706391:{NFSU2_TR(0x706391);
__builtin_memmove((R+20),(R+16),4);
}
B706393:{NFSU2_TR(0x706393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B706396:{NFSU2_TR(0x706396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706399:{NFSU2_TR(0x706399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70639b:{NFSU2_TR(0x70639b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70639c:{NFSU2_TR(0x70639c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70639f:{NFSU2_TR(0x70639f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7063a2:{NFSU2_TR(0x7063a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7063a6:{NFSU2_TR(0x7063a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7063a7:{NFSU2_TR(0x7063a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7063aa:{NFSU2_TR(0x7063aa);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B7063ac:{NFSU2_TR(0x7063ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7063af:{NFSU2_TR(0x7063af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7063b2:{NFSU2_TR(0x7063b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7063b3:{NFSU2_TR(0x7063b3);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B7063b5:{NFSU2_TR(0x7063b5);
__builtin_memmove((R+28),(R+8),4);
}
B7063b7:{NFSU2_TR(0x7063b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7063ba:{NFSU2_TR(0x7063ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B7063bd:{NFSU2_TR(0x7063bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7063c0:{NFSU2_TR(0x7063c0);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B7063c2:{NFSU2_TR(0x7063c2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B7063c4:{NFSU2_TR(0x7063c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7063c8:{NFSU2_TR(0x7063c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7063cb:{NFSU2_TR(0x7063cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7063ce:{NFSU2_TR(0x7063ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7063d1:{NFSU2_TR(0x7063d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70640d;}}
}
B7063d3:L7063d3:{c.instructions+=5;NFSU2_TR(0x7063d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7063d6:{NFSU2_TR(0x7063d6);
__builtin_memmove((R+28),(R+8),4);
}
B7063d8:{NFSU2_TR(0x7063d8);
__builtin_memmove((R+8),(R+4),4);
}
B7063da:{NFSU2_TR(0x7063da);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7063dd:{NFSU2_TR(0x7063dd);
__builtin_memmove((R+24),(R+0),4);
}
B7063df:L7063df:{c.instructions+=1;NFSU2_TR(0x7063df);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7063e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7063dfu);}goto L7063df;}
}
B7063e1:L7063e1:{c.instructions+=3;NFSU2_TR(0x7063e1);
__builtin_memmove((R+4),(R+8),4);
}
B7063e3:{NFSU2_TR(0x7063e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7063e6:{NFSU2_TR(0x7063e6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7063e9:L7063e9:{c.instructions+=1;NFSU2_TR(0x7063e9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7063eb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7063e9u);}goto L7063e9;}
}
B7063eb:L7063eb:{c.instructions+=8;NFSU2_TR(0x7063eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7063ee:{NFSU2_TR(0x7063ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+0))));
}
B7063f0:{NFSU2_TR(0x7063f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7063f6:{NFSU2_TR(0x7063f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7063f9:{NFSU2_TR(0x7063f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7063fc:{NFSU2_TR(0x7063fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B7063ff:{NFSU2_TR(0x7063ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706402:{NFSU2_TR(0x706402);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7063d3u);}goto L7063d3;}}
}
B706404:L706404:{c.instructions+=3;NFSU2_TR(0x706404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B706407:{NFSU2_TR(0x706407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70640a:{NFSU2_TR(0x70640a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70640d:L70640d:{c.instructions+=20;NFSU2_TR(0x70640d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706410:{NFSU2_TR(0x706410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706413:{NFSU2_TR(0x706413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706417:{NFSU2_TR(0x706417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70641a:{NFSU2_TR(0x70641a);
__builtin_memmove((R+0),(R+24),4);
}
B70641c:{NFSU2_TR(0x70641c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70641d:{NFSU2_TR(0x70641d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70641f:{NFSU2_TR(0x70641f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706422:{NFSU2_TR(0x706422);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706425:{NFSU2_TR(0x706425);
__builtin_memmove((R+0),(R+28),4);
}
B706427:{NFSU2_TR(0x706427);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B706428:{NFSU2_TR(0x706428);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70642a:{NFSU2_TR(0x70642a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70642d:{NFSU2_TR(0x70642d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B706431:{NFSU2_TR(0x706431);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B706434:{NFSU2_TR(0x706434);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B706436:{NFSU2_TR(0x706436);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B706438:{NFSU2_TR(0x706438);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B70643f:{NFSU2_TR(0x70643f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706442:{NFSU2_TR(0x706442);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70647b;}}
}
B706444:L706444:{c.instructions+=6;NFSU2_TR(0x706444);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706447:{NFSU2_TR(0x706447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70644a:{NFSU2_TR(0x70644a);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70644c:{NFSU2_TR(0x70644c);
__builtin_memmove((R+0),(R+4),4);
}
B70644e:{NFSU2_TR(0x70644e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B706451:{NFSU2_TR(0x706451);
__builtin_memmove((R+28),(R+8),4);
}
B706453:L706453:{c.instructions+=1;NFSU2_TR(0x706453);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L706455;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706453u);}goto L706453;}
}
B706455:L706455:{c.instructions+=3;NFSU2_TR(0x706455);
__builtin_memmove((R+4),(R+0),4);
}
B706457:{NFSU2_TR(0x706457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70645a:{NFSU2_TR(0x70645a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70645d:L70645d:{c.instructions+=1;NFSU2_TR(0x70645d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70645f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70645du);}goto L70645d;}
}
B70645f:L70645f:{c.instructions+=8;NFSU2_TR(0x70645f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B706462:{NFSU2_TR(0x706462);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706468:{NFSU2_TR(0x706468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70646b:{NFSU2_TR(0x70646b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70646e:{NFSU2_TR(0x70646e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706471:{NFSU2_TR(0x706471);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B706473:{NFSU2_TR(0x706473);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B706476:{NFSU2_TR(0x706476);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706444u);}goto L706444;}}
}
B706478:L706478:{c.instructions+=1;NFSU2_TR(0x706478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70647b:L70647b:{c.instructions+=10;NFSU2_TR(0x70647b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70647e:{NFSU2_TR(0x70647e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B706482:{NFSU2_TR(0x706482);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706485:{NFSU2_TR(0x706485);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70648b:{NFSU2_TR(0x70648b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70648e:{NFSU2_TR(0x70648e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706491:{NFSU2_TR(0x706491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706495:{NFSU2_TR(0x706495);
u8 U[18];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70649c:{NFSU2_TR(0x70649c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70649f:{NFSU2_TR(0x70649f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7064d5;}}
}
B7064a1:L7064a1:{c.instructions+=5;NFSU2_TR(0x7064a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7064a4:{NFSU2_TR(0x7064a4);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7064a6:{NFSU2_TR(0x7064a6);
__builtin_memmove((R+8),(R+4),4);
}
B7064a8:{NFSU2_TR(0x7064a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7064ab:{NFSU2_TR(0x7064ab);
__builtin_memmove((R+28),(R+0),4);
}
B7064ad:L7064ad:{c.instructions+=1;NFSU2_TR(0x7064ad);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7064af;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7064adu);}goto L7064ad;}
}
B7064af:L7064af:{c.instructions+=2;NFSU2_TR(0x7064af);
__builtin_memmove((R+4),(R+8),4);
}
B7064b1:{NFSU2_TR(0x7064b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7064b4:L7064b4:{c.instructions+=1;NFSU2_TR(0x7064b4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7064b6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7064b4u);}goto L7064b4;}
}
B7064b6:L7064b6:{c.instructions+=10;NFSU2_TR(0x7064b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7064b9:{NFSU2_TR(0x7064b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7064bc:{NFSU2_TR(0x7064bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7064bf:{NFSU2_TR(0x7064bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7064c5:{NFSU2_TR(0x7064c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7064c8:{NFSU2_TR(0x7064c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7064cb:{NFSU2_TR(0x7064cb);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7064cd:{NFSU2_TR(0x7064cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7064d0:{NFSU2_TR(0x7064d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7064d3:{NFSU2_TR(0x7064d3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7064a1u);}goto L7064a1;}}
}
B7064d5:L7064d5:{c.instructions+=5;NFSU2_TR(0x7064d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7064d6:{NFSU2_TR(0x7064d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7064d7:{NFSU2_TR(0x7064d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7064d8:{NFSU2_TR(0x7064d8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7064d9:{NFSU2_TR(0x7064d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7064da:L7064da:{c.instructions+=6;NFSU2_TR(0x7064da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7064db:{NFSU2_TR(0x7064db);
__builtin_memmove((R+20),(R+16),4);
}
B7064dd:{NFSU2_TR(0x7064dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7064de:{NFSU2_TR(0x7064de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7064e1:{NFSU2_TR(0x7064e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7064e5:{NFSU2_TR(0x7064e5);
if(r1(R+518)){{goto L7064f2;}}
}
B7064e7:L7064e7:{c.instructions+=3;NFSU2_TR(0x7064e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7064ea:{NFSU2_TR(0x7064ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7064eb:{NFSU2_TR(0x7064eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7064f0ull));
TAIL_STATIC(0x704d87u,704);
}
B7064f0:L7064f0:{c.instructions+=2;NFSU2_TR(0x7064f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7064f1:{NFSU2_TR(0x7064f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7064f2:L7064f2:{c.instructions+=3;NFSU2_TR(0x7064f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7064f5:{NFSU2_TR(0x7064f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7064f8:{NFSU2_TR(0x7064f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706510;}}
}
B7064fa:L7064fa:{c.instructions+=2;NFSU2_TR(0x7064fa);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7064fd:{NFSU2_TR(0x7064fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70654c;}}
}
B7064ff:L7064ff:{c.instructions+=4;NFSU2_TR(0x7064ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706502:{NFSU2_TR(0x706502);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706505:{NFSU2_TR(0x706505);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706506:{NFSU2_TR(0x706506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70650bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706390u);}goto L706390;}
}
B70650b:L70650b:{c.instructions+=2;NFSU2_TR(0x70650b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70650e:{NFSU2_TR(0x70650e);
{goto L70654c;}
}
B706510:L706510:{c.instructions+=24;NFSU2_TR(0x706510);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706511:{NFSU2_TR(0x706511);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706512:{NFSU2_TR(0x706512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B706515:{NFSU2_TR(0x706515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706518:{NFSU2_TR(0x706518);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70651b:{NFSU2_TR(0x70651b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70651d:{NFSU2_TR(0x70651d);
__builtin_memmove((R+4),(R+8),4);
}
B70651f:{NFSU2_TR(0x70651f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B706522:{NFSU2_TR(0x706522);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B706524:{NFSU2_TR(0x706524);
__builtin_memmove((R+28),(R+0),4);
}
B706526:{NFSU2_TR(0x706526);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B706529:{NFSU2_TR(0x706529);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B70652b:{NFSU2_TR(0x70652b);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B70652f:{NFSU2_TR(0x70652f);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B706531:{NFSU2_TR(0x706531);
__builtin_memmove((R+12),(R+4),4);
}
B706533:{NFSU2_TR(0x706533);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B706535:{NFSU2_TR(0x706535);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B706537:{NFSU2_TR(0x706537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706538:{NFSU2_TR(0x706538);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70653a:{NFSU2_TR(0x70653a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70653b:{NFSU2_TR(0x70653b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70653c:{NFSU2_TR(0x70653c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70653f:{NFSU2_TR(0x70653f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706542:{NFSU2_TR(0x706542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706547ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7061b6u);}goto L7061b6;}
}
B706547:L706547:{c.instructions+=3;NFSU2_TR(0x706547);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70654a:{NFSU2_TR(0x70654a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70654b:{NFSU2_TR(0x70654b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70654c:L70654c:{c.instructions+=3;NFSU2_TR(0x70654c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70654d:{NFSU2_TR(0x70654d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70654e:{NFSU2_TR(0x70654e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70654f:L70654f:{c.instructions+=9;NFSU2_TR(0x70654f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706550:{NFSU2_TR(0x706550);
__builtin_memmove((R+20),(R+16),4);
}
B706552:{NFSU2_TR(0x706552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B706558:{NFSU2_TR(0x706558);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706559:{NFSU2_TR(0x706559);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70655c:{NFSU2_TR(0x70655c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706562:{NFSU2_TR(0x706562);
u8 U[4];
w4(U+0,u32(0x7c5588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706567:{NFSU2_TR(0x706567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706568:{NFSU2_TR(0x706568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70656dull));
TAIL_STATIC(0x75c784u,75c);
}
B70656d:L70656d:{c.instructions+=4;NFSU2_TR(0x70656d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706573:{NFSU2_TR(0x706573);
u8 U[4];
w4(U+0,u32(0x7a35fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706578:{NFSU2_TR(0x706578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706579:{NFSU2_TR(0x706579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70657eull));
TAIL_STATIC(0x75d406u,75d);
}
B70657e:L70657e:{c.instructions+=10;NFSU2_TR(0x70657e);
__builtin_memmove((R+24),(R+0),4);
}
B706580:{NFSU2_TR(0x706580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706583:{NFSU2_TR(0x706583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706589:{NFSU2_TR(0x706589);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70658f:{NFSU2_TR(0x70658f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706590:{NFSU2_TR(0x706590);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706592:{NFSU2_TR(0x706592);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B706595:{NFSU2_TR(0x706595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706596:{NFSU2_TR(0x706596);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706599:{NFSU2_TR(0x706599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70659eull));
TAIL_STATIC(0x75d794u,75d);
}
B70659e:L70659e:{c.instructions+=2;NFSU2_TR(0x70659e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70659f:{NFSU2_TR(0x70659f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7065a4ull));
TAIL_STATIC(0x75d359u,75d);
}
B7065a4:L7065a4:{c.instructions+=4;NFSU2_TR(0x7065a4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7065a7:{NFSU2_TR(0x7065a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7065a8:{NFSU2_TR(0x7065a8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7065a9:{NFSU2_TR(0x7065a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7065aa:L7065aa:{c.instructions+=9;NFSU2_TR(0x7065aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065ab:{NFSU2_TR(0x7065ab);
__builtin_memmove((R+20),(R+16),4);
}
B7065ad:{NFSU2_TR(0x7065ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B7065b3:{NFSU2_TR(0x7065b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065b4:{NFSU2_TR(0x7065b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7065b7:{NFSU2_TR(0x7065b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7065bd:{NFSU2_TR(0x7065bd);
u8 U[4];
w4(U+0,u32(0x7c5594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065c2:{NFSU2_TR(0x7065c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065c3:{NFSU2_TR(0x7065c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7065c8ull));
TAIL_STATIC(0x75c784u,75c);
}
B7065c8:L7065c8:{c.instructions+=4;NFSU2_TR(0x7065c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7065ce:{NFSU2_TR(0x7065ce);
u8 U[4];
w4(U+0,u32(0x7a35fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065d3:{NFSU2_TR(0x7065d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065d4:{NFSU2_TR(0x7065d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7065d9ull));
TAIL_STATIC(0x75d406u,75d);
}
B7065d9:L7065d9:{c.instructions+=7;NFSU2_TR(0x7065d9);
__builtin_memmove((R+24),(R+0),4);
}
B7065db:{NFSU2_TR(0x7065db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7065de:{NFSU2_TR(0x7065de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065df:{NFSU2_TR(0x7065df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065e1:{NFSU2_TR(0x7065e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7065e7:{NFSU2_TR(0x7065e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7065ea:{NFSU2_TR(0x7065ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7065efull));
TAIL_STATIC(0x75d794u,75d);
}
B7065ef:L7065ef:{c.instructions+=2;NFSU2_TR(0x7065ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065f0:{NFSU2_TR(0x7065f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7065f5ull));
TAIL_STATIC(0x75d359u,75d);
}
B7065f5:L7065f5:{c.instructions+=4;NFSU2_TR(0x7065f5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7065f8:{NFSU2_TR(0x7065f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7065f9:{NFSU2_TR(0x7065f9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7065fa:{NFSU2_TR(0x7065fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7065fb:L7065fb:{c.instructions+=10;NFSU2_TR(0x7065fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7065fc:{NFSU2_TR(0x7065fc);
__builtin_memmove((R+20),(R+16),4);
}
B7065fe:{NFSU2_TR(0x7065fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B706604:{NFSU2_TR(0x706604);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706605:{NFSU2_TR(0x706605);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706608:{NFSU2_TR(0x706608);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70660e:{NFSU2_TR(0x70660e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706611:{NFSU2_TR(0x706611);
u8 U[4];
w4(U+0,u32(0x7c559cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706616:{NFSU2_TR(0x706616);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706617:{NFSU2_TR(0x706617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70661cull));
TAIL_STATIC(0x75c784u,75c);
}
B70661c:L70661c:{c.instructions+=4;NFSU2_TR(0x70661c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706622:{NFSU2_TR(0x706622);
u8 U[4];
w4(U+0,u32(0x7a35fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706627:{NFSU2_TR(0x706627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706628:{NFSU2_TR(0x706628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70662dull));
TAIL_STATIC(0x75d406u,75d);
}
B70662d:L70662d:{c.instructions+=6;NFSU2_TR(0x70662d);
__builtin_memmove((R+24),(R+0),4);
}
B70662f:{NFSU2_TR(0x70662f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706630:{NFSU2_TR(0x706630);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706632:{NFSU2_TR(0x706632);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706635:{NFSU2_TR(0x706635);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706638:{NFSU2_TR(0x706638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70663dull));
TAIL_STATIC(0x75d794u,75d);
}
B70663d:L70663d:{c.instructions+=2;NFSU2_TR(0x70663d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70663e:{NFSU2_TR(0x70663e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706643ull));
TAIL_STATIC(0x75d359u,75d);
}
B706643:L706643:{c.instructions+=4;NFSU2_TR(0x706643);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706646:{NFSU2_TR(0x706646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706647:{NFSU2_TR(0x706647);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B706648:{NFSU2_TR(0x706648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706649:L706649:{c.instructions+=11;NFSU2_TR(0x706649);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70664a:{NFSU2_TR(0x70664a);
__builtin_memmove((R+20),(R+16),4);
}
B70664c:{NFSU2_TR(0x70664c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B706652:{NFSU2_TR(0x706652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706653:{NFSU2_TR(0x706653);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706654:{NFSU2_TR(0x706654);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706657:{NFSU2_TR(0x706657);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70665d:{NFSU2_TR(0x70665d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706660:{NFSU2_TR(0x706660);
u8 U[4];
w4(U+0,u32(0x7c559cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706665:{NFSU2_TR(0x706665);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706666:{NFSU2_TR(0x706666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70666bull));
TAIL_STATIC(0x75c784u,75c);
}
B70666b:L70666b:{c.instructions+=4;NFSU2_TR(0x70666b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706671:{NFSU2_TR(0x706671);
u8 U[4];
w4(U+0,u32(0x7a35fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706676:{NFSU2_TR(0x706676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706677:{NFSU2_TR(0x706677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70667cull));
TAIL_STATIC(0x75d406u,75d);
}
B70667c:L70667c:{c.instructions+=5;NFSU2_TR(0x70667c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70667f:{NFSU2_TR(0x70667f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B706682:{NFSU2_TR(0x706682);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B706684:{NFSU2_TR(0x706684);
__builtin_memmove((R+12),(R+0),4);
}
B706686:{NFSU2_TR(0x706686);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7066a2;}}
}
B706688:L706688:{c.instructions+=2;NFSU2_TR(0x706688);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706689:{NFSU2_TR(0x706689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70668c:L70668c:{c.instructions+=5;NFSU2_TR(0x70668c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70668d:{NFSU2_TR(0x70668d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70668f:{NFSU2_TR(0x70668f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706692:{NFSU2_TR(0x706692);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706693:{NFSU2_TR(0x706693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706698ull));
TAIL_STATIC(0x75d794u,75d);
}
B706698:L706698:{c.instructions+=4;NFSU2_TR(0x706698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70669b:{NFSU2_TR(0x70669b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70669e:{NFSU2_TR(0x70669e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B70669f:{NFSU2_TR(0x70669f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70668cu);}goto L70668c;}}
}
B7066a1:L7066a1:{c.instructions+=1;NFSU2_TR(0x7066a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7066a2:L7066a2:{c.instructions+=2;NFSU2_TR(0x7066a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066a3:{NFSU2_TR(0x7066a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7066a8ull));
TAIL_STATIC(0x75d359u,75d);
}
B7066a8:L7066a8:{c.instructions+=5;NFSU2_TR(0x7066a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7066a9:{NFSU2_TR(0x7066a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7066aa:{NFSU2_TR(0x7066aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7066ab:{NFSU2_TR(0x7066ab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7066ac:{NFSU2_TR(0x7066ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7066ad:L7066ad:{c.instructions+=7;NFSU2_TR(0x7066ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066ae:{NFSU2_TR(0x7066ae);
__builtin_memmove((R+20),(R+16),4);
}
B7066b0:{NFSU2_TR(0x7066b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066b1:{NFSU2_TR(0x7066b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066b2:{NFSU2_TR(0x7066b2);
u8 U[4];
w4(U+0,u32(0x7c55a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066b7:{NFSU2_TR(0x7066b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7066ba:{NFSU2_TR(0x7066ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7066bfull));
TAIL_STATIC(0x75d406u,75d);
}
B7066bf:L7066bf:{c.instructions+=6;NFSU2_TR(0x7066bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7066c2:{NFSU2_TR(0x7066c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7066c4:{NFSU2_TR(0x7066c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7066c5:{NFSU2_TR(0x7066c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7066c6:{NFSU2_TR(0x7066c6);
__builtin_memmove((R+12),(R+0),4);
}
B7066c8:{NFSU2_TR(0x7066c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7066e4;}}
}
B7066ca:L7066ca:{c.instructions+=2;NFSU2_TR(0x7066ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066cb:{NFSU2_TR(0x7066cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7066ce:L7066ce:{c.instructions+=5;NFSU2_TR(0x7066ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066cf:{NFSU2_TR(0x7066cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066d1:{NFSU2_TR(0x7066d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7066d4:{NFSU2_TR(0x7066d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066d5:{NFSU2_TR(0x7066d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7066daull));
TAIL_STATIC(0x75d794u,75d);
}
B7066da:L7066da:{c.instructions+=4;NFSU2_TR(0x7066da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7066dd:{NFSU2_TR(0x7066dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7066e0:{NFSU2_TR(0x7066e0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7066e1:{NFSU2_TR(0x7066e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7066ceu);}goto L7066ce;}}
}
B7066e3:L7066e3:{c.instructions+=1;NFSU2_TR(0x7066e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7066e4:L7066e4:{c.instructions+=2;NFSU2_TR(0x7066e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066e5:{NFSU2_TR(0x7066e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7066eaull));
TAIL_STATIC(0x75d359u,75d);
}
B7066ea:L7066ea:{c.instructions+=5;NFSU2_TR(0x7066ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7066eb:{NFSU2_TR(0x7066eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7066ec:{NFSU2_TR(0x7066ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7066ed:{NFSU2_TR(0x7066ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7066ee:{NFSU2_TR(0x7066ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7066ef:L7066ef:{c.instructions+=26;NFSU2_TR(0x7066ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7066f0:{NFSU2_TR(0x7066f0);
__builtin_memmove((R+20),(R+16),4);
}
B7066f2:{NFSU2_TR(0x7066f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7066f5:{NFSU2_TR(0x7066f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7066fb:{NFSU2_TR(0x7066fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B706702:{NFSU2_TR(0x706702);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706708:{NFSU2_TR(0x706708);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x940ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70670e:{NFSU2_TR(0x70670e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706714:{NFSU2_TR(0x706714);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706715:{NFSU2_TR(0x706715);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70671b:{NFSU2_TR(0x70671b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706721:{NFSU2_TR(0x706721);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706727:{NFSU2_TR(0x706727);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70672d:{NFSU2_TR(0x70672d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706733:{NFSU2_TR(0x706733);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B706735:{NFSU2_TR(0x706735);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70673c:{NFSU2_TR(0x70673c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706742:{NFSU2_TR(0x706742);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706743:{NFSU2_TR(0x706743);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706749:{NFSU2_TR(0x706749);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70674a:{NFSU2_TR(0x70674a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70674d:{NFSU2_TR(0x70674d);
u8 U[4];
w4(U+0,u32(0x7c55b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706752:{NFSU2_TR(0x706752);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B706755:{NFSU2_TR(0x706755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706756:{NFSU2_TR(0x706756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706757:{NFSU2_TR(0x706757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70675cull));
TAIL_STATIC(0x70d5f7u,70d);
}
B70675c:L70675c:{c.instructions+=3;NFSU2_TR(0x70675c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70675f:{NFSU2_TR(0x70675f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B706760:{NFSU2_TR(0x706760);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706761:L706761:{c.instructions+=6;NFSU2_TR(0x706761);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706762:{NFSU2_TR(0x706762);
__builtin_memmove((R+20),(R+16),4);
}
B706764:{NFSU2_TR(0x706764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706765:{NFSU2_TR(0x706765);
u8 U[4];
w4(U+0,u32(0x7c55a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70676a:{NFSU2_TR(0x70676a);
u8 U[4];
w4(U+0,u32(0x7c55fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70676f:{NFSU2_TR(0x70676f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706774ull));
TAIL_STATIC(0x75d406u,75d);
}
B706774:L706774:{c.instructions+=10;NFSU2_TR(0x706774);
__builtin_memmove((R+24),(R+0),4);
}
B706776:{NFSU2_TR(0x706776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706779:{NFSU2_TR(0x706779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70677f:{NFSU2_TR(0x70677f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B706785:{NFSU2_TR(0x706785);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706786:{NFSU2_TR(0x706786);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706788:{NFSU2_TR(0x706788);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70678b:{NFSU2_TR(0x70678b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70678c:{NFSU2_TR(0x70678c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706792:{NFSU2_TR(0x706792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706797ull));
TAIL_STATIC(0x75d794u,75d);
}
B706797:L706797:{c.instructions+=2;NFSU2_TR(0x706797);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706798:{NFSU2_TR(0x706798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70679dull));
TAIL_STATIC(0x75d359u,75d);
}
B70679d:L70679d:{c.instructions+=4;NFSU2_TR(0x70679d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7067a0:{NFSU2_TR(0x7067a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7067a1:{NFSU2_TR(0x7067a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7067a2:{NFSU2_TR(0x7067a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7067a3:L7067a3:{c.instructions+=12;NFSU2_TR(0x7067a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7067a4:{NFSU2_TR(0x7067a4);
__builtin_memmove((R+20),(R+16),4);
}
B7067a6:{NFSU2_TR(0x7067a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B7067a9:{NFSU2_TR(0x7067a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7067aa:{NFSU2_TR(0x7067aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7067ad:{NFSU2_TR(0x7067ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7067b3:{NFSU2_TR(0x7067b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7067b9:{NFSU2_TR(0x7067b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7067bd:{NFSU2_TR(0x7067bd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7067bf:{NFSU2_TR(0x7067bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7067c2:{NFSU2_TR(0x7067c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7067c5:{NFSU2_TR(0x7067c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706825;}}
}
B7067c7:L7067c7:{c.instructions+=3;NFSU2_TR(0x7067c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7067c8:{NFSU2_TR(0x7067c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7067cf:{NFSU2_TR(0x7067cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7067d0:L7067d0:{c.instructions+=4;NFSU2_TR(0x7067d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7067d2:{NFSU2_TR(0x7067d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7067d4:{NFSU2_TR(0x7067d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7067d7:{NFSU2_TR(0x7067d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706814;}}
}
B7067d9:L7067d9:{c.instructions+=12;NFSU2_TR(0x7067d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7067df:{NFSU2_TR(0x7067df);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7067e3:{NFSU2_TR(0x7067e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7067e9:{NFSU2_TR(0x7067e9);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B7067ed:{NFSU2_TR(0x7067ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7067ee:{NFSU2_TR(0x7067ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7067f4:{NFSU2_TR(0x7067f4);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7067f8:{NFSU2_TR(0x7067f8);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7067fd:{NFSU2_TR(0x7067fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B706801:{NFSU2_TR(0x706801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706802:{NFSU2_TR(0x706802);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706803:{NFSU2_TR(0x706803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706808ull));
TAIL_STATIC(0x70d5f7u,70d);
}
B706808:L706808:{c.instructions+=5;NFSU2_TR(0x706808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70680b:{NFSU2_TR(0x70680b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70680c:{NFSU2_TR(0x70680c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B70680f:{NFSU2_TR(0x70680f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B706812:{NFSU2_TR(0x706812);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7067d9u);}goto L7067d9;}}
}
B706814:L706814:{c.instructions+=5;NFSU2_TR(0x706814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706817:{NFSU2_TR(0x706817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70681a:{NFSU2_TR(0x70681a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70681e:{NFSU2_TR(0x70681e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B706821:{NFSU2_TR(0x706821);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7067d0u);}goto L7067d0;}}
}
B706823:L706823:{c.instructions+=2;NFSU2_TR(0x706823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706824:{NFSU2_TR(0x706824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706825:L706825:{c.instructions+=3;NFSU2_TR(0x706825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706826:{NFSU2_TR(0x706826);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B706827:{NFSU2_TR(0x706827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706828:L706828:{c.instructions+=9;NFSU2_TR(0x706828);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706829:{NFSU2_TR(0x706829);
__builtin_memmove((R+20),(R+16),4);
}
B70682b:{NFSU2_TR(0x70682b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70682c:{NFSU2_TR(0x70682c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70682f:{NFSU2_TR(0x70682f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706830:{NFSU2_TR(0x706830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B706836:{NFSU2_TR(0x706836);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706838:{NFSU2_TR(0x706838);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70683a:{NFSU2_TR(0x70683a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70683b:L70683b:{c.instructions+=1;NFSU2_TR(0x70683b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70683d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70683bu);}goto L70683b;}
}
B70683d:L70683d:{c.instructions+=3;NFSU2_TR(0x70683d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706840:{NFSU2_TR(0x706840);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B706842:{NFSU2_TR(0x706842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L706873;}}
}
B706844:L706844:{c.instructions+=3;NFSU2_TR(0x706844);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706847:{NFSU2_TR(0x706847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70684d:{NFSU2_TR(0x70684d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706853:L706853:{c.instructions+=8;NFSU2_TR(0x706853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706856:{NFSU2_TR(0x706856);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B706858:{NFSU2_TR(0x706858);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706859:{NFSU2_TR(0x706859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70685f:{NFSU2_TR(0x70685f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706861:{NFSU2_TR(0x706861);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706862:{NFSU2_TR(0x706862);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706868:{NFSU2_TR(0x706868);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ea4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70686eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70686e:L70686e:{c.instructions+=2;NFSU2_TR(0x70686e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706871:{NFSU2_TR(0x706871);
{goto L7068df;}
}
B706873:L706873:{c.instructions+=2;NFSU2_TR(0x706873);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x816660ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70687b:{NFSU2_TR(0x70687b);
if(r1(R+518)){{goto L7068b0;}}
}
B70687d:L70687d:{c.instructions+=4;NFSU2_TR(0x70687d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706880:{NFSU2_TR(0x706880);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706886:{NFSU2_TR(0x706886);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706887:{NFSU2_TR(0x706887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70688cull));
TAIL_STATIC(0x70df7cu,70d);
}
B70688c:L70688c:{c.instructions+=7;NFSU2_TR(0x70688c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70688f:{NFSU2_TR(0x70688f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706895:{NFSU2_TR(0x706895);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B706898:{NFSU2_TR(0x706898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706899:{NFSU2_TR(0x706899);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70689f:{NFSU2_TR(0x70689f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7068a5:{NFSU2_TR(0x7068a5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ea8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7068abull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7068ab:L7068ab:{c.instructions+=2;NFSU2_TR(0x7068ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7068ae:{NFSU2_TR(0x7068ae);
{goto L7068df;}
}
B7068b0:L7068b0:{c.instructions+=4;NFSU2_TR(0x7068b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7068b3:{NFSU2_TR(0x7068b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7068b6:{NFSU2_TR(0x7068b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7068bc:{NFSU2_TR(0x7068bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7068c6;}}
}
B7068be:L7068be:{c.instructions+=2;NFSU2_TR(0x7068be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7068c4:{NFSU2_TR(0x7068c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706853u);}goto L706853;}
}
B7068c6:L7068c6:{c.instructions+=5;NFSU2_TR(0x7068c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7068cc:{NFSU2_TR(0x7068cc);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7068cf:{NFSU2_TR(0x7068cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068d0:{NFSU2_TR(0x7068d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7068d6:{NFSU2_TR(0x7068d6);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7068dcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7068dc:L7068dc:{c.instructions+=1;NFSU2_TR(0x7068dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7068df:L7068df:{c.instructions+=4;NFSU2_TR(0x7068df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7068e0:{NFSU2_TR(0x7068e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7068e1:{NFSU2_TR(0x7068e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7068e2:{NFSU2_TR(0x7068e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7068e3:L7068e3:{c.instructions+=9;NFSU2_TR(0x7068e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068e4:{NFSU2_TR(0x7068e4);
__builtin_memmove((R+20),(R+16),4);
}
B7068e6:{NFSU2_TR(0x7068e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068e7:{NFSU2_TR(0x7068e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068e8:{NFSU2_TR(0x7068e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068e9:{NFSU2_TR(0x7068e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068ea:{NFSU2_TR(0x7068ea);
u8 U[4];
w4(U+0,u32(0x799428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068ef:{NFSU2_TR(0x7068ef);
u8 U[4];
w4(U+0,u32(0x7c5624ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068f4:{NFSU2_TR(0x7068f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7068f9ull));
TAIL_STATIC(0x75d406u,75d);
}
B7068f9:L7068f9:{c.instructions+=5;NFSU2_TR(0x7068f9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b3fb0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7068ff:{NFSU2_TR(0x7068ff);
__builtin_memmove((R+12),(R+0),4);
}
B706901:{NFSU2_TR(0x706901);
u8 U[4];
w4(U+0,u32(0x7c5618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706906:{NFSU2_TR(0x706906);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706907:{NFSU2_TR(0x706907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70690cull));
TAIL_STATIC(0x760d1fu,760);
}
B70690c:L70690c:{c.instructions+=9;NFSU2_TR(0x70690c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70690f:{NFSU2_TR(0x70690f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706915:{NFSU2_TR(0x706915);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B706918:{NFSU2_TR(0x706918);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70691a:{NFSU2_TR(0x70691a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70691b:{NFSU2_TR(0x70691b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B70691d:{NFSU2_TR(0x70691d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70691f:{NFSU2_TR(0x70691f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706922:{NFSU2_TR(0x706922);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706a3a;}}
}
B706928:L706928:{c.instructions+=2;NFSU2_TR(0x706928);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70692f:{NFSU2_TR(0x70692f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70697f;}}
}
B706931:L706931:{c.instructions+=5;NFSU2_TR(0x706931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706937:{NFSU2_TR(0x706937);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+4),(U+0),4);
}
B70693a:{NFSU2_TR(0x70693a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70693c:{NFSU2_TR(0x70693c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70693f:{NFSU2_TR(0x70693f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706972;}}
}
B706941:L706941:{c.instructions+=8;NFSU2_TR(0x706941);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B706945:{NFSU2_TR(0x706945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70694b:{NFSU2_TR(0x70694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70694e:{NFSU2_TR(0x70694e);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B706952:{NFSU2_TR(0x706952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706953:{NFSU2_TR(0x706953);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706958:{NFSU2_TR(0x706958);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706959:{NFSU2_TR(0x706959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70695eull));
TAIL_STATIC(0x760d1fu,760);
}
B70695e:L70695e:{c.instructions+=6;NFSU2_TR(0x70695e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706964:{NFSU2_TR(0x706964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B706967:{NFSU2_TR(0x706967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70696a:{NFSU2_TR(0x70696a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+4),(U+0),4);
}
B70696d:{NFSU2_TR(0x70696d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B706970:{NFSU2_TR(0x706970);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706941u);}goto L706941;}}
}
B706972:L706972:{c.instructions+=3;NFSU2_TR(0x706972);
u8 U[4];
w4(U+0,u32(0x7c5614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706977:{NFSU2_TR(0x706977);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706978:{NFSU2_TR(0x706978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70697dull));
TAIL_STATIC(0x760d1fu,760);
}
B70697d:L70697d:{c.instructions+=2;NFSU2_TR(0x70697d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70697e:{NFSU2_TR(0x70697e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70697f:L70697f:{c.instructions+=5;NFSU2_TR(0x70697f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706985:{NFSU2_TR(0x706985);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+4),(U+0),4);
}
B706988:{NFSU2_TR(0x706988);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70698a:{NFSU2_TR(0x70698a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70698d:{NFSU2_TR(0x70698d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7069c0;}}
}
B70698f:L70698f:{c.instructions+=8;NFSU2_TR(0x70698f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B706993:{NFSU2_TR(0x706993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B706999:{NFSU2_TR(0x706999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70699c:{NFSU2_TR(0x70699c);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B7069a0:{NFSU2_TR(0x7069a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069a1:{NFSU2_TR(0x7069a1);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069a6:{NFSU2_TR(0x7069a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069a7:{NFSU2_TR(0x7069a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7069acull));
TAIL_STATIC(0x760d1fu,760);
}
B7069ac:L7069ac:{c.instructions+=6;NFSU2_TR(0x7069ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7069b2:{NFSU2_TR(0x7069b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7069b5:{NFSU2_TR(0x7069b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7069b8:{NFSU2_TR(0x7069b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+4),(U+0),4);
}
B7069bb:{NFSU2_TR(0x7069bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B7069be:{NFSU2_TR(0x7069be);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70698fu);}goto L70698f;}}
}
B7069c0:L7069c0:{c.instructions+=3;NFSU2_TR(0x7069c0);
u8 U[4];
w4(U+0,u32(0x7c5614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069c5:{NFSU2_TR(0x7069c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069c6:{NFSU2_TR(0x7069c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7069cbull));
TAIL_STATIC(0x760d1fu,760);
}
B7069cb:L7069cb:{c.instructions+=7;NFSU2_TR(0x7069cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7069d1:{NFSU2_TR(0x7069d1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B7069d3:{NFSU2_TR(0x7069d3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7069d5:{NFSU2_TR(0x7069d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7069d6:{NFSU2_TR(0x7069d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7069d7:{NFSU2_TR(0x7069d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7069da:{NFSU2_TR(0x7069da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706a19;}}
}
B7069dc:L7069dc:{c.instructions+=12;NFSU2_TR(0x7069dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7069e2:{NFSU2_TR(0x7069e2);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7069e6:{NFSU2_TR(0x7069e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7069e9:{NFSU2_TR(0x7069e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7069ef:{NFSU2_TR(0x7069ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7069f2:{NFSU2_TR(0x7069f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7069f6:{NFSU2_TR(0x7069f6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B7069f9:{NFSU2_TR(0x7069f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069fa:{NFSU2_TR(0x7069fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7069fb:{NFSU2_TR(0x7069fb);
u8 U[4];
w4(U+0,u32(0x7c5608ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a00:{NFSU2_TR(0x706a00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a01:{NFSU2_TR(0x706a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706a06ull));
TAIL_STATIC(0x760d1fu,760);
}
B706a06:L706a06:{c.instructions+=6;NFSU2_TR(0x706a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706a0c:{NFSU2_TR(0x706a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B706a0f:{NFSU2_TR(0x706a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706a12:{NFSU2_TR(0x706a12);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B706a14:{NFSU2_TR(0x706a14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B706a17:{NFSU2_TR(0x706a17);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7069dcu);}goto L7069dc;}}
}
B706a19:L706a19:{c.instructions+=3;NFSU2_TR(0x706a19);
u8 U[4];
w4(U+0,u32(0x79b2f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a1e:{NFSU2_TR(0x706a1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a1f:{NFSU2_TR(0x706a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706a24ull));
TAIL_STATIC(0x760d1fu,760);
}
B706a24:L706a24:{c.instructions+=7;NFSU2_TR(0x706a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706a2a:{NFSU2_TR(0x706a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706a2d:{NFSU2_TR(0x706a2d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B706a2f:{NFSU2_TR(0x706a2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B706a32:{NFSU2_TR(0x706a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706a33:{NFSU2_TR(0x706a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706a34:{NFSU2_TR(0x706a34);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706928u);}goto L706928;}}
}
B706a3a:L706a3a:{c.instructions+=4;NFSU2_TR(0x706a3a);
w4(R+24,u32(0x79b2f4ull));
}
B706a3f:{NFSU2_TR(0x706a3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a40:{NFSU2_TR(0x706a40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a41:{NFSU2_TR(0x706a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706a46ull));
TAIL_STATIC(0x760d1fu,760);
}
B706a46:L706a46:{c.instructions+=3;NFSU2_TR(0x706a46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a47:{NFSU2_TR(0x706a47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a48:{NFSU2_TR(0x706a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706a4dull));
TAIL_STATIC(0x760d1fu,760);
}
B706a4d:L706a4d:{c.instructions+=2;NFSU2_TR(0x706a4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a4e:{NFSU2_TR(0x706a4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706a53ull));
TAIL_STATIC(0x75d359u,75d);
}
B706a53:L706a53:{c.instructions+=7;NFSU2_TR(0x706a53);
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B706a56:{NFSU2_TR(0x706a56);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b3fb0),u32(0x1ull)));
s4(0x8b3fb0,u32(u32(m4(0x8b3fb0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b3fb0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b3fb0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b3fb0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706a5c:{NFSU2_TR(0x706a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706a5d:{NFSU2_TR(0x706a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706a5e:{NFSU2_TR(0x706a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706a5f:{NFSU2_TR(0x706a5f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B706a60:{NFSU2_TR(0x706a60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706a61:L706a61:{c.instructions+=18;NFSU2_TR(0x706a61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a62:{NFSU2_TR(0x706a62);
__builtin_memmove((R+20),(R+16),4);
}
B706a64:{NFSU2_TR(0x706a64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a65:{NFSU2_TR(0x706a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706a68:{NFSU2_TR(0x706a68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a69:{NFSU2_TR(0x706a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B706a6c:{NFSU2_TR(0x706a6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a6d:{NFSU2_TR(0x706a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B706a70:{NFSU2_TR(0x706a70);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B706a73:{NFSU2_TR(0x706a73);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B706a75:{NFSU2_TR(0x706a75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706a76:{NFSU2_TR(0x706a76);
__builtin_memmove((R+28),(R+8),4);
}
B706a78:{NFSU2_TR(0x706a78);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B706a7b:{NFSU2_TR(0x706a7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B706a7d:{NFSU2_TR(0x706a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706a80:{NFSU2_TR(0x706a80);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B706a82:{NFSU2_TR(0x706a82);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B706a83:{NFSU2_TR(0x706a83);
if(r1(R+518)){{goto L706a89;}}
}
B706a85:L706a85:{c.instructions+=2;NFSU2_TR(0x706a85);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B706a87:{NFSU2_TR(0x706a87);
{goto L706a8b;}
}
B706a89:L706a89:{c.instructions+=1;NFSU2_TR(0x706a89);
__builtin_memmove((R+24),(R+8),4);
}
B706a8b:L706a8b:{c.instructions+=2;NFSU2_TR(0x706a8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B706a8d:{NFSU2_TR(0x706a8d);
if(r1(R+518)){{goto L706a91;}}
}
B706a8f:L706a8f:{c.instructions+=1;NFSU2_TR(0x706a8f);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706a91:L706a91:{c.instructions+=4;NFSU2_TR(0x706a91);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+12))));
}
B706a93:{NFSU2_TR(0x706a93);
w1(R+512,carry<u32>(r4(R+24),r4(R+24)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B706a95:{NFSU2_TR(0x706a95);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B706a98:{NFSU2_TR(0x706a98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L706ab1;}}
}
B706a9a:L706a9a:{c.instructions+=7;NFSU2_TR(0x706a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B706a9d:{NFSU2_TR(0x706a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B706aa0:{NFSU2_TR(0x706aa0);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B706aa4:{NFSU2_TR(0x706aa4);
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B706aa6:{NFSU2_TR(0x706aa6);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706aa7:{NFSU2_TR(0x706aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706aae:{NFSU2_TR(0x706aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706ab1:L706ab1:{c.instructions+=9;NFSU2_TR(0x706ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B706ab4:{NFSU2_TR(0x706ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706ab5:{NFSU2_TR(0x706ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706ab8:{NFSU2_TR(0x706ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706ab9:{NFSU2_TR(0x706ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706abc:{NFSU2_TR(0x706abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706abf:{NFSU2_TR(0x706abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706ac0:{NFSU2_TR(0x706ac0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B706ac1:{NFSU2_TR(0x706ac1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706ac2:L706ac2:{c.instructions+=12;NFSU2_TR(0x706ac2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ac3:{NFSU2_TR(0x706ac3);
__builtin_memmove((R+20),(R+16),4);
}
B706ac5:{NFSU2_TR(0x706ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706ac8:{NFSU2_TR(0x706ac8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ac9:{NFSU2_TR(0x706ac9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706aca:{NFSU2_TR(0x706aca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706acb:{NFSU2_TR(0x706acb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B706acd:{NFSU2_TR(0x706acd);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706acf:{NFSU2_TR(0x706acf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B706ad0:{NFSU2_TR(0x706ad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5bcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B706ad7:{NFSU2_TR(0x706ad7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B706ad9:{NFSU2_TR(0x706ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706ada:L706ada:{c.instructions+=2;NFSU2_TR(0x706ada);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B706adc:{NFSU2_TR(0x706adc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B706add:L706add:{c.instructions+=4;NFSU2_TR(0x706add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B706ae0:{NFSU2_TR(0x706ae0);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B706ae4:{NFSU2_TR(0x706ae4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706ae6:{NFSU2_TR(0x706ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L706af0;}}
}
B706ae8:L706ae8:{c.instructions+=2;NFSU2_TR(0x706ae8);
u8 U[13];
w4(U+0,u32(u32(u32(0x5bcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B706aef:{NFSU2_TR(0x706aef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B706af0:L706af0:{c.instructions+=3;NFSU2_TR(0x706af0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B706af1:{NFSU2_TR(0x706af1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B706af3:{NFSU2_TR(0x706af3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706addu);}goto L706add;}}
}
B706af5:L706af5:{c.instructions+=3;NFSU2_TR(0x706af5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B706af6:{NFSU2_TR(0x706af6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B706af9:{NFSU2_TR(0x706af9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706adau);}goto L706ada;}}
}
B706afb:L706afb:{c.instructions+=2;NFSU2_TR(0x706afb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B706afd:{NFSU2_TR(0x706afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5fcull))));
__builtin_memmove((R+0),(U+0),4);
}
B706b03:L706b03:{c.instructions+=3;NFSU2_TR(0x706b03);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706b07:{NFSU2_TR(0x706b07);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706b09:{NFSU2_TR(0x706b09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706b0d;}}
}
B706b0b:L706b0b:{c.instructions+=1;NFSU2_TR(0x706b0b);
__builtin_memmove((R+8),(R+24),4);
}
B706b0d:L706b0d:{c.instructions+=3;NFSU2_TR(0x706b0d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B706b0f:{NFSU2_TR(0x706b0f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x6ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x6ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B706b16:{NFSU2_TR(0x706b16);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L706b1e;}}
}
B706b18:L706b18:{c.instructions+=3;NFSU2_TR(0x706b18);
__builtin_memmove((R+12),(R+8),1);
}
B706b1a:{NFSU2_TR(0x706b1a);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B706b1c:{NFSU2_TR(0x706b1c);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B706b1e:L706b1e:{c.instructions+=3;NFSU2_TR(0x706b1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B706b1f:{NFSU2_TR(0x706b1f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706b20:{NFSU2_TR(0x706b20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706b03u);}goto L706b03;}}
}
B706b22:L706b22:{c.instructions+=5;NFSU2_TR(0x706b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706b23:{NFSU2_TR(0x706b23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706b24:{NFSU2_TR(0x706b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706b25:{NFSU2_TR(0x706b25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B706b26:{NFSU2_TR(0x706b26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706b27:L706b27:{c.instructions+=112;NFSU2_TR(0x706b27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706b28:{NFSU2_TR(0x706b28);
__builtin_memmove((R+20),(R+16),4);
}
B706b2a:{NFSU2_TR(0x706b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706b2d:{NFSU2_TR(0x706b2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B706b31:{NFSU2_TR(0x706b31);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B706b34:{NFSU2_TR(0x706b34);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B706b37:{NFSU2_TR(0x706b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706b3a:{NFSU2_TR(0x706b3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706b3b:{NFSU2_TR(0x706b3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706b3c:{NFSU2_TR(0x706b3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706b3d:{NFSU2_TR(0x706b3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B706b40:{NFSU2_TR(0x706b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706b43:{NFSU2_TR(0x706b43);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706b47:{NFSU2_TR(0x706b47);
w4(R+8,u32(0xffull));
}
B706b4c:{NFSU2_TR(0x706b4c);
__builtin_memmove((R+28),(R+8),4);
}
B706b4e:{NFSU2_TR(0x706b4e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B706b50:{NFSU2_TR(0x706b50);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B706b53:{NFSU2_TR(0x706b53);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706b56:{NFSU2_TR(0x706b56);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706b59:{NFSU2_TR(0x706b59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B706b5b:{NFSU2_TR(0x706b5b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B706b5e:{NFSU2_TR(0x706b5e);
__builtin_memmove((R+24),(R+8),4);
}
B706b60:{NFSU2_TR(0x706b60);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B706b62:{NFSU2_TR(0x706b62);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706b66:{NFSU2_TR(0x706b66);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706b69:{NFSU2_TR(0x706b69);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706b6c:{NFSU2_TR(0x706b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706b6f:{NFSU2_TR(0x706b6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B706b73:{NFSU2_TR(0x706b73);
__builtin_memmove((R+28),(R+8),4);
}
B706b75:{NFSU2_TR(0x706b75);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B706b77:{NFSU2_TR(0x706b77);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706b7a:{NFSU2_TR(0x706b7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706b7e:{NFSU2_TR(0x706b7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706b81:{NFSU2_TR(0x706b81);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706b84:{NFSU2_TR(0x706b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706b87:{NFSU2_TR(0x706b87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706b8b:{NFSU2_TR(0x706b8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706b8e:{NFSU2_TR(0x706b8e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706b91:{NFSU2_TR(0x706b91);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706b94:{NFSU2_TR(0x706b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706b97:{NFSU2_TR(0x706b97);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B706b9b:{NFSU2_TR(0x706b9b);
__builtin_memmove((R+28),(R+8),4);
}
B706b9d:{NFSU2_TR(0x706b9d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B706b9f:{NFSU2_TR(0x706b9f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706ba2:{NFSU2_TR(0x706ba2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706ba6:{NFSU2_TR(0x706ba6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706ba9:{NFSU2_TR(0x706ba9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706bac:{NFSU2_TR(0x706bac);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706baf:{NFSU2_TR(0x706baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706bb2:{NFSU2_TR(0x706bb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706bb6:{NFSU2_TR(0x706bb6);
__builtin_memmove((R+12),(R+8),4);
}
B706bb8:{NFSU2_TR(0x706bb8);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B706bba:{NFSU2_TR(0x706bba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706bbd:{NFSU2_TR(0x706bbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706bc0:{NFSU2_TR(0x706bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706bc3:{NFSU2_TR(0x706bc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706bc7:{NFSU2_TR(0x706bc7);
__builtin_memmove((R+28),(R+8),4);
}
B706bc9:{NFSU2_TR(0x706bc9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B706bcb:{NFSU2_TR(0x706bcb);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B706bcf:{NFSU2_TR(0x706bcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706bd3:{NFSU2_TR(0x706bd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706bd6:{NFSU2_TR(0x706bd6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706bd9:{NFSU2_TR(0x706bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706bdc:{NFSU2_TR(0x706bdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706be0:{NFSU2_TR(0x706be0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706be3:{NFSU2_TR(0x706be3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706be6:{NFSU2_TR(0x706be6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706be9:{NFSU2_TR(0x706be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706bec:{NFSU2_TR(0x706bec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706bf0:{NFSU2_TR(0x706bf0);
__builtin_memmove((R+12),(R+8),4);
}
B706bf2:{NFSU2_TR(0x706bf2);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706bf4:{NFSU2_TR(0x706bf4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706bf7:{NFSU2_TR(0x706bf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706bfa:{NFSU2_TR(0x706bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706bfd:{NFSU2_TR(0x706bfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706c01:{NFSU2_TR(0x706c01);
__builtin_memmove((R+28),(R+8),4);
}
B706c03:{NFSU2_TR(0x706c03);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B706c05:{NFSU2_TR(0x706c05);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B706c09:{NFSU2_TR(0x706c09);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B706c0d:{NFSU2_TR(0x706c0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706c10:{NFSU2_TR(0x706c10);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706c13:{NFSU2_TR(0x706c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706c16:{NFSU2_TR(0x706c16);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706c19:{NFSU2_TR(0x706c19);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706c1d:{NFSU2_TR(0x706c1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706c20:{NFSU2_TR(0x706c20);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706c23:{NFSU2_TR(0x706c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706c26:{NFSU2_TR(0x706c26);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706c2a:{NFSU2_TR(0x706c2a);
__builtin_memmove((R+12),(R+8),4);
}
B706c2c:{NFSU2_TR(0x706c2c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706c2e:{NFSU2_TR(0x706c2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706c31:{NFSU2_TR(0x706c31);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706c34:{NFSU2_TR(0x706c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706c37:{NFSU2_TR(0x706c37);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706c3b:{NFSU2_TR(0x706c3b);
__builtin_memmove((R+24),(R+8),4);
}
B706c3d:{NFSU2_TR(0x706c3d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B706c3f:{NFSU2_TR(0x706c3f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B706c43:{NFSU2_TR(0x706c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706c47:{NFSU2_TR(0x706c47);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706c4a:{NFSU2_TR(0x706c4a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706c4d:{NFSU2_TR(0x706c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706c50:{NFSU2_TR(0x706c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706c53:{NFSU2_TR(0x706c53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B706c57:{NFSU2_TR(0x706c57);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706c59:{NFSU2_TR(0x706c59);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(r4(R+24)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B706c5c:{NFSU2_TR(0x706c5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706c5d:{NFSU2_TR(0x706c5d);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B706c60:{NFSU2_TR(0x706c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706c61:{NFSU2_TR(0x706c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706c64:{NFSU2_TR(0x706c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706c65:{NFSU2_TR(0x706c65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B706c66:{NFSU2_TR(0x706c66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706c67:L706c67:{c.instructions+=91;NFSU2_TR(0x706c67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706c68:{NFSU2_TR(0x706c68);
__builtin_memmove((R+20),(R+16),4);
}
B706c6a:{NFSU2_TR(0x706c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706c6d:{NFSU2_TR(0x706c6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B706c71:{NFSU2_TR(0x706c71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706c72:{NFSU2_TR(0x706c72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706c73:{NFSU2_TR(0x706c73);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B706c76:{NFSU2_TR(0x706c76);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706c79:{NFSU2_TR(0x706c79);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B706c7d:{NFSU2_TR(0x706c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B706c80:{NFSU2_TR(0x706c80);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706c83:{NFSU2_TR(0x706c83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B706c86:{NFSU2_TR(0x706c86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706c87:{NFSU2_TR(0x706c87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B706c8a:{NFSU2_TR(0x706c8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B706c8c:{NFSU2_TR(0x706c8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706c90:{NFSU2_TR(0x706c90);
w4(R+4,u32(0xffull));
}
B706c95:{NFSU2_TR(0x706c95);
__builtin_memmove((R+12),(R+4),4);
}
B706c97:{NFSU2_TR(0x706c97);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706c99:{NFSU2_TR(0x706c99);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706c9c:{NFSU2_TR(0x706c9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706c9f:{NFSU2_TR(0x706c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706ca2:{NFSU2_TR(0x706ca2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706ca6:{NFSU2_TR(0x706ca6);
__builtin_memmove((R+24),(R+4),4);
}
B706ca8:{NFSU2_TR(0x706ca8);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B706caa:{NFSU2_TR(0x706caa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B706cad:{NFSU2_TR(0x706cad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706cb0:{NFSU2_TR(0x706cb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706cb4:{NFSU2_TR(0x706cb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706cb7:{NFSU2_TR(0x706cb7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706cba:{NFSU2_TR(0x706cba);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706cbd:{NFSU2_TR(0x706cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706cc0:{NFSU2_TR(0x706cc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706cc4:{NFSU2_TR(0x706cc4);
__builtin_memmove((R+12),(R+4),4);
}
B706cc6:{NFSU2_TR(0x706cc6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706cc8:{NFSU2_TR(0x706cc8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706ccb:{NFSU2_TR(0x706ccb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706cce:{NFSU2_TR(0x706cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706cd1:{NFSU2_TR(0x706cd1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B706cd4:{NFSU2_TR(0x706cd4);
__builtin_memmove((R+24),(R+4),4);
}
B706cd6:{NFSU2_TR(0x706cd6);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B706cd8:{NFSU2_TR(0x706cd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706cdc:{NFSU2_TR(0x706cdc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706cdf:{NFSU2_TR(0x706cdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706ce3:{NFSU2_TR(0x706ce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706ce6:{NFSU2_TR(0x706ce6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706ce9:{NFSU2_TR(0x706ce9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706ced:{NFSU2_TR(0x706ced);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706cf0:{NFSU2_TR(0x706cf0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706cf3:{NFSU2_TR(0x706cf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706cf6:{NFSU2_TR(0x706cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706cf9:{NFSU2_TR(0x706cf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706cfd:{NFSU2_TR(0x706cfd);
__builtin_memmove((R+12),(R+4),4);
}
B706cff:{NFSU2_TR(0x706cff);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706d01:{NFSU2_TR(0x706d01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706d04:{NFSU2_TR(0x706d04);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706d07:{NFSU2_TR(0x706d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d0a:{NFSU2_TR(0x706d0a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B706d0d:{NFSU2_TR(0x706d0d);
__builtin_memmove((R+24),(R+4),4);
}
B706d0f:{NFSU2_TR(0x706d0f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B706d11:{NFSU2_TR(0x706d11);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706d15:{NFSU2_TR(0x706d15);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706d18:{NFSU2_TR(0x706d18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706d1c:{NFSU2_TR(0x706d1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706d1f:{NFSU2_TR(0x706d1f);
__builtin_memmove((R+12),(R+4),4);
}
B706d21:{NFSU2_TR(0x706d21);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706d23:{NFSU2_TR(0x706d23);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706d27:{NFSU2_TR(0x706d27);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B706d2a:{NFSU2_TR(0x706d2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B706d2d:{NFSU2_TR(0x706d2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B706d30:{NFSU2_TR(0x706d30);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B706d33:{NFSU2_TR(0x706d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d36:{NFSU2_TR(0x706d36);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B706d3a:{NFSU2_TR(0x706d3a);
__builtin_memmove((R+12),(R+4),4);
}
B706d3c:{NFSU2_TR(0x706d3c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B706d3e:{NFSU2_TR(0x706d3e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B706d41:{NFSU2_TR(0x706d41);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B706d44:{NFSU2_TR(0x706d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d47:{NFSU2_TR(0x706d47);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B706d4a:{NFSU2_TR(0x706d4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B706d4e:{NFSU2_TR(0x706d4e);
__builtin_memmove((R+28),(R+4),4);
}
B706d50:{NFSU2_TR(0x706d50);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B706d52:{NFSU2_TR(0x706d52);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B706d54:{NFSU2_TR(0x706d54);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(r4(R+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B706d57:{NFSU2_TR(0x706d57);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+28),4);
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B706d5a:{NFSU2_TR(0x706d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d5d:{NFSU2_TR(0x706d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706d5e:{NFSU2_TR(0x706d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706d5f:{NFSU2_TR(0x706d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706d60:{NFSU2_TR(0x706d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B706d61:{NFSU2_TR(0x706d61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706d62:L706d62:{c.instructions+=18;NFSU2_TR(0x706d62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706d63:{NFSU2_TR(0x706d63);
__builtin_memmove((R+20),(R+16),4);
}
B706d65:{NFSU2_TR(0x706d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B706d68:{NFSU2_TR(0x706d68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706d69:{NFSU2_TR(0x706d69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706d6a:{NFSU2_TR(0x706d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B706d6d:{NFSU2_TR(0x706d6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706d73:{NFSU2_TR(0x706d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d76:{NFSU2_TR(0x706d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706d7c:{NFSU2_TR(0x706d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d7f:{NFSU2_TR(0x706d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30fcull))));
__builtin_memmove((R+0),(U+0),4);
}
B706d85:{NFSU2_TR(0x706d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d88:{NFSU2_TR(0x706d88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706d8e:{NFSU2_TR(0x706d8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706d8f:{NFSU2_TR(0x706d8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706d95:{NFSU2_TR(0x706d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706d98:{NFSU2_TR(0x706d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706d9f:{NFSU2_TR(0x706d9f);
w4(R+12,u32(0x80ull));
}
B706da4:L706da4:{c.instructions+=3;NFSU2_TR(0x706da4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706da5:{NFSU2_TR(0x706da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706da8:{NFSU2_TR(0x706da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706dadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706b27u);}goto L706b27;}
}
B706dad:L706dad:{c.instructions+=4;NFSU2_TR(0x706dad);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706daf:{NFSU2_TR(0x706daf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706db0:{NFSU2_TR(0x706db0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706db3:{NFSU2_TR(0x706db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706db8ull));
TAIL_STATIC(0x70ee7cu,70e);
}
B706db8:L706db8:{c.instructions+=3;NFSU2_TR(0x706db8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706dbb:{NFSU2_TR(0x706dbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706dbe:{NFSU2_TR(0x706dbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706dc3ull));
TAIL_STATIC(0x70efbeu,70e);
}
B706dc3:L706dc3:{c.instructions+=9;NFSU2_TR(0x706dc3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B706dc5:{NFSU2_TR(0x706dc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706dc6:{NFSU2_TR(0x706dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706dc7:{NFSU2_TR(0x706dc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706dca:{NFSU2_TR(0x706dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706dcd:{NFSU2_TR(0x706dcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706dce:{NFSU2_TR(0x706dce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706dcf:{NFSU2_TR(0x706dcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706dd2:{NFSU2_TR(0x706dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706dd7ull));
TAIL_STATIC(0x70f02au,70f);
}
B706dd7:L706dd7:{c.instructions+=8;NFSU2_TR(0x706dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xcull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706ddb:{NFSU2_TR(0x706ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x90ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706de2:{NFSU2_TR(0x706de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xbull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706de6:{NFSU2_TR(0x706de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B706de9:{NFSU2_TR(0x706de9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B706dec:{NFSU2_TR(0x706dec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B706def:{NFSU2_TR(0x706def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706df2:{NFSU2_TR(0x706df2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706da4u);}goto L706da4;}}
}
B706df4:L706df4:{c.instructions+=8;NFSU2_TR(0x706df4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2facull))));
__builtin_memmove((R+0),(U+0),4);
}
B706dfa:{NFSU2_TR(0x706dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706dfd:{NFSU2_TR(0x706dfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706e03:{NFSU2_TR(0x706e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706e06:{NFSU2_TR(0x706e06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43fcull))));
__builtin_memmove((R+0),(U+0),4);
}
B706e0c:{NFSU2_TR(0x706e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706e0f:{NFSU2_TR(0x706e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B706e15:{NFSU2_TR(0x706e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706e1c:L706e1c:{c.instructions+=5;NFSU2_TR(0x706e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706e1f:{NFSU2_TR(0x706e1f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffd640ull))));
}
B706e24:{NFSU2_TR(0x706e24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e25:{NFSU2_TR(0x706e25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e26:{NFSU2_TR(0x706e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706e2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706c67u);}goto L706c67;}
}
B706e2b:L706e2b:{c.instructions+=4;NFSU2_TR(0x706e2b);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e2d:{NFSU2_TR(0x706e2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e2e:{NFSU2_TR(0x706e2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706e31:{NFSU2_TR(0x706e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706e36ull));
TAIL_STATIC(0x70ee7cu,70e);
}
B706e36:L706e36:{c.instructions+=3;NFSU2_TR(0x706e36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706e39:{NFSU2_TR(0x706e39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706e3c:{NFSU2_TR(0x706e3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706e41ull));
TAIL_STATIC(0x70efbeu,70e);
}
B706e41:L706e41:{c.instructions+=9;NFSU2_TR(0x706e41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B706e43:{NFSU2_TR(0x706e43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e44:{NFSU2_TR(0x706e44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e45:{NFSU2_TR(0x706e45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706e48:{NFSU2_TR(0x706e48);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706e4e:{NFSU2_TR(0x706e4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e4f:{NFSU2_TR(0x706e4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706e50:{NFSU2_TR(0x706e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706e53:{NFSU2_TR(0x706e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706e58ull));
TAIL_STATIC(0x70f02au,70f);
}
B706e58:L706e58:{c.instructions+=7;NFSU2_TR(0x706e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B706e5b:{NFSU2_TR(0x706e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706e5f:{NFSU2_TR(0x706e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xa8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706e66:{NFSU2_TR(0x706e66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B706e69:{NFSU2_TR(0x706e69);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x38ull))));
}
B706e6c:{NFSU2_TR(0x706e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706e6f:{NFSU2_TR(0x706e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706e1cu);}goto L706e1c;}}
}
B706e71:L706e71:{c.instructions+=7;NFSU2_TR(0x706e71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706e77:{NFSU2_TR(0x706e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706e7a:{NFSU2_TR(0x706e7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706e80:{NFSU2_TR(0x706e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13b0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B706e86:{NFSU2_TR(0x706e86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31fcull))));
__builtin_memmove((R+4),(U+0),4);
}
B706e8c:{NFSU2_TR(0x706e8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1200ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706e92:{NFSU2_TR(0x706e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706e99:L706e99:{c.instructions+=5;NFSU2_TR(0x706e99);
__builtin_memmove((R+24),(R+8),4);
}
B706e9b:{NFSU2_TR(0x706e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B706e9e:{NFSU2_TR(0x706e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706ea1:{NFSU2_TR(0x706ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706ea8:{NFSU2_TR(0x706ea8);
{goto L706ead;}
}
B706eaa:L706eaa:{c.instructions+=1;NFSU2_TR(0x706eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706ead:L706ead:{c.instructions+=5;NFSU2_TR(0x706ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706eb0:{NFSU2_TR(0x706eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706eb3:{NFSU2_TR(0x706eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706eb6:{NFSU2_TR(0x706eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706eb9:{NFSU2_TR(0x706eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B706ec0:L706ec0:{c.instructions+=3;NFSU2_TR(0x706ec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ec1:{NFSU2_TR(0x706ec1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706ec4:{NFSU2_TR(0x706ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706ec9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706b27u);}goto L706b27;}
}
B706ec9:L706ec9:{c.instructions+=4;NFSU2_TR(0x706ec9);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ecb:{NFSU2_TR(0x706ecb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ecc:{NFSU2_TR(0x706ecc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ecd:{NFSU2_TR(0x706ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706ed2ull));
TAIL_STATIC(0x70ee7cu,70e);
}
B706ed2:L706ed2:{c.instructions+=3;NFSU2_TR(0x706ed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706ed5:{NFSU2_TR(0x706ed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ed6:{NFSU2_TR(0x706ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706edbull));
TAIL_STATIC(0x70efbeu,70e);
}
B706edb:L706edb:{c.instructions+=9;NFSU2_TR(0x706edb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B706edd:{NFSU2_TR(0x706edd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ede:{NFSU2_TR(0x706ede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706edf:{NFSU2_TR(0x706edf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B706ee2:{NFSU2_TR(0x706ee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffff790ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706ee8:{NFSU2_TR(0x706ee8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ee9:{NFSU2_TR(0x706ee9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706eea:{NFSU2_TR(0x706eea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706eeb:{NFSU2_TR(0x706eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706ef0ull));
TAIL_STATIC(0x70f02au,70f);
}
B706ef0:L706ef0:{c.instructions+=8;NFSU2_TR(0x706ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xbull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706ef4:{NFSU2_TR(0x706ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B706ef7:{NFSU2_TR(0x706ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xcull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706efb:{NFSU2_TR(0x706efb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B706efe:{NFSU2_TR(0x706efe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B706f01:{NFSU2_TR(0x706f01);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
}
B706f07:{NFSU2_TR(0x706f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706f0a:{NFSU2_TR(0x706f0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706ec0u);}goto L706ec0;}}
}
B706f0c:L706f0c:{c.instructions+=6;NFSU2_TR(0x706f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B706f0f:{NFSU2_TR(0x706f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xc6ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706f16:{NFSU2_TR(0x706f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B706f19:{NFSU2_TR(0x706f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B706f1c:{NFSU2_TR(0x706f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B706f1f:{NFSU2_TR(0x706f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706eaau);}goto L706eaa;}}
}
B706f21:L706f21:{c.instructions+=4;NFSU2_TR(0x706f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x42ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x42ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B706f25:{NFSU2_TR(0x706f25);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B706f28:{NFSU2_TR(0x706f28);
__builtin_memmove((R+8),(R+24),4);
}
B706f2a:{NFSU2_TR(0x706f2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706e99u);}goto L706e99;}}
}
B706f30:L706f30:{c.instructions+=5;NFSU2_TR(0x706f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706f31:{NFSU2_TR(0x706f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B706f32:{NFSU2_TR(0x706f32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B706f33:{NFSU2_TR(0x706f33);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B706f34:{NFSU2_TR(0x706f34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B706f35:L706f35:{c.instructions+=14;NFSU2_TR(0x706f35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f36:{NFSU2_TR(0x706f36);
__builtin_memmove((R+20),(R+16),4);
}
B706f38:{NFSU2_TR(0x706f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B706f3b:{NFSU2_TR(0x706f3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f3c:{NFSU2_TR(0x706f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B706f3f:{NFSU2_TR(0x706f3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f40:{NFSU2_TR(0x706f40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f41:{NFSU2_TR(0x706f41);
w4(R+0,u32(0x80808080ull));
}
B706f46:{NFSU2_TR(0x706f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706f49:{NFSU2_TR(0x706f49);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B706f4a:{NFSU2_TR(0x706f4a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B706f4b:{NFSU2_TR(0x706f4b);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B706f4d:{NFSU2_TR(0x706f4d);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B706f4e:{NFSU2_TR(0x706f4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B706f50:L706f50:{c.instructions+=1;NFSU2_TR(0x706f50);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B706f52:L706f52:{c.instructions+=5;NFSU2_TR(0x706f52);
u8 U[13];
w4(U+0,u32(u32(u32(0x7c5fc0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B706f5a:{NFSU2_TR(0x706f5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f5b:{NFSU2_TR(0x706f5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706f61:{NFSU2_TR(0x706f61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f62:{NFSU2_TR(0x706f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706f67ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B706f67:L706f67:{c.instructions+=4;NFSU2_TR(0x706f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B706f69:{NFSU2_TR(0x706f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706f6a:{NFSU2_TR(0x706f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706f6b:{NFSU2_TR(0x706f6b);
if(r1(R+518)){{goto L706f8a;}}
}
B706f6d:L706f6d:{c.instructions+=4;NFSU2_TR(0x706f6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B706f73:{NFSU2_TR(0x706f73);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f75:{NFSU2_TR(0x706f75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706f76:{NFSU2_TR(0x706f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706f7bull));
TAIL_STATIC(0x707c18u,707);
}
B706f7b:L706f7b:{c.instructions+=7;NFSU2_TR(0x706f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706f7c:{NFSU2_TR(0x706f7c);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B706f7e:{NFSU2_TR(0x706f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706f7f:{NFSU2_TR(0x706f7f);
__builtin_memmove((R+4),(R+518),1);
}
B706f82:{NFSU2_TR(0x706f82);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+0))));
}
B706f84:{NFSU2_TR(0x706f84);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B706f88:{NFSU2_TR(0x706f88);
{goto L706f94;}
}
B706f8a:L706f8a:{c.instructions+=2;NFSU2_TR(0x706f8a);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B706f8e:{NFSU2_TR(0x706f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L706f9e;}}
}
B706f90:L706f90:{c.instructions+=1;NFSU2_TR(0x706f90);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B706f94:L706f94:{c.instructions+=2;NFSU2_TR(0x706f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B706f97:{NFSU2_TR(0x706f97);
u8 U[13];
w4(U+0,u32(u32(u32(0x3a0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B706f9e:L706f9e:{c.instructions+=3;NFSU2_TR(0x706f9e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B706f9f:{NFSU2_TR(0x706f9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xbull))));
}
B706fa2:{NFSU2_TR(0x706fa2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706f52u);}goto L706f52;}}
}
B706fa4:L706fa4:{c.instructions+=3;NFSU2_TR(0x706fa4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xbull))));
}
B706fa7:{NFSU2_TR(0x706fa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x16ull))));
}
B706faa:{NFSU2_TR(0x706faa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706f50u);}goto L706f50;}}
}
B706fac:L706fac:{c.instructions+=2;NFSU2_TR(0x706fac);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B706fb0:{NFSU2_TR(0x706fb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L706fc2;}}
}
B706fb2:L706fb2:{c.instructions+=4;NFSU2_TR(0x706fb2);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706fb4:{NFSU2_TR(0x706fb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x560ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706fba:{NFSU2_TR(0x706fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706fbb:{NFSU2_TR(0x706fbb);
w4(R+24,u32(0x7c6034ull));
}
B706fc0:L706fc0:{c.instructions+=1;NFSU2_TR(0x706fc0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L706fc2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x706fc0u);}goto L706fc0;}
}
B706fc2:L706fc2:{c.instructions+=4;NFSU2_TR(0x706fc2);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706fc7:{NFSU2_TR(0x706fc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B706fcd:{NFSU2_TR(0x706fcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706fce:{NFSU2_TR(0x706fce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706fd3ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B706fd3:L706fd3:{c.instructions+=4;NFSU2_TR(0x706fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B706fd5:{NFSU2_TR(0x706fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706fd6:{NFSU2_TR(0x706fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706fd7:{NFSU2_TR(0x706fd7);
if(r1(R+518)){TAIL_STATIC(0x707016u,707);}
}
B706fd9:L706fd9:{c.instructions+=6;NFSU2_TR(0x706fd9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B706fdb:{NFSU2_TR(0x706fdb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B706fdc:{NFSU2_TR(0x706fdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c5fd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B706fe3:{NFSU2_TR(0x706fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706fe4:{NFSU2_TR(0x706fe4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706fe5:{NFSU2_TR(0x706fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706feaull));
TAIL_STATIC(0x70d9e8u,70d);
}
B706fea:L706fea:{c.instructions+=4;NFSU2_TR(0x706fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B706fec:{NFSU2_TR(0x706fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706fed:{NFSU2_TR(0x706fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706fee:{NFSU2_TR(0x706fee);
if(r1(R+518)){TAIL_STATIC(0x707001u,707);}
}
B706ff0:L706ff0:{c.instructions+=3;NFSU2_TR(0x706ff0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ff2:{NFSU2_TR(0x706ff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B706ff3:{NFSU2_TR(0x706ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x706ff8ull));
TAIL_STATIC(0x707c18u,707);
}
B706ff8:L706ff8:{c.instructions+=3;NFSU2_TR(0x706ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706ff9:{NFSU2_TR(0x706ff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B706ffa:{NFSU2_TR(0x706ffa);
u8 U[13];
w4(U+0,u32(u32(u32(0x63cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
TAIL_STATIC(0x707001u,707);
}
XIT:NFSU2_TR_EXIT(0x706,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
