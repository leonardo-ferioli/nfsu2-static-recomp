#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45c(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x470,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x470,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_470(u8* __restrict R,Cpu& c);
u32 page_470(Cpu& c){return body_470(c.regs.data(),c);}
__attribute__((noinline)) u32 body_470(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x470001:goto L470001;
case 0x470003:goto L470003;
case 0x470008:c.instructions+=2;goto B470008;
case 0x47000a:c.instructions+=1;goto B47000a;
case 0x47000f:goto L47000f;
case 0x470012:c.instructions+=3;goto B470012;
case 0x470013:c.instructions+=2;goto B470013;
case 0x470014:c.instructions+=1;goto B470014;
case 0x470017:goto L470017;
case 0x47001a:c.instructions+=3;goto B47001a;
case 0x47001b:c.instructions+=2;goto B47001b;
case 0x47001c:c.instructions+=1;goto B47001c;
case 0x47001f:goto L47001f;
case 0x470022:c.instructions+=3;goto B470022;
case 0x470023:c.instructions+=2;goto B470023;
case 0x470024:c.instructions+=1;goto B470024;
case 0x470030:goto L470030;
case 0x470031:c.instructions+=11;goto B470031;
case 0x470032:c.instructions+=10;goto B470032;
case 0x470034:c.instructions+=9;goto B470034;
case 0x470037:c.instructions+=8;goto B470037;
case 0x47003a:c.instructions+=7;goto B47003a;
case 0x47003d:c.instructions+=6;goto B47003d;
case 0x470040:c.instructions+=5;goto B470040;
case 0x470046:c.instructions+=4;goto B470046;
case 0x47004c:c.instructions+=3;goto B47004c;
case 0x47004e:c.instructions+=2;goto B47004e;
case 0x470051:c.instructions+=1;goto B470051;
case 0x470057:goto L470057;
case 0x47005d:c.instructions+=2;goto B47005d;
case 0x47005f:c.instructions+=1;goto B47005f;
case 0x470061:goto L470061;
case 0x470064:c.instructions+=2;goto B470064;
case 0x470066:c.instructions+=1;goto B470066;
case 0x470068:goto L470068;
case 0x47006b:c.instructions+=2;goto B47006b;
case 0x47006e:c.instructions+=1;goto B47006e;
case 0x470070:goto L470070;
case 0x470072:c.instructions+=1;goto B470072;
case 0x470074:goto L470074;
case 0x470077:c.instructions+=6;goto B470077;
case 0x47007b:c.instructions+=5;goto B47007b;
case 0x47007e:c.instructions+=4;goto B47007e;
case 0x470081:c.instructions+=3;goto B470081;
case 0x470084:c.instructions+=2;goto B470084;
case 0x470085:c.instructions+=1;goto B470085;
case 0x47008a:goto L47008a;
case 0x470090:c.instructions+=4;goto B470090;
case 0x470094:c.instructions+=3;goto B470094;
case 0x470096:c.instructions+=2;goto B470096;
case 0x470099:c.instructions+=1;goto B470099;
case 0x47009b:goto L47009b;
case 0x47009e:c.instructions+=5;goto B47009e;
case 0x4700a1:c.instructions+=4;goto B4700a1;
case 0x4700a7:c.instructions+=3;goto B4700a7;
case 0x4700a9:c.instructions+=2;goto B4700a9;
case 0x4700ac:c.instructions+=1;goto B4700ac;
case 0x4700ae:goto L4700ae;
case 0x4700b1:c.instructions+=5;goto B4700b1;
case 0x4700b7:c.instructions+=4;goto B4700b7;
case 0x4700bd:c.instructions+=3;goto B4700bd;
case 0x4700bf:c.instructions+=2;goto B4700bf;
case 0x4700c2:c.instructions+=1;goto B4700c2;
case 0x4700c4:goto L4700c4;
case 0x4700c7:c.instructions+=4;goto B4700c7;
case 0x4700ca:c.instructions+=3;goto B4700ca;
case 0x4700cd:c.instructions+=2;goto B4700cd;
case 0x4700d1:c.instructions+=1;goto B4700d1;
case 0x4700d3:goto L4700d3;
case 0x4700d7:c.instructions+=1;goto B4700d7;
case 0x4700d9:goto L4700d9;
case 0x4700db:c.instructions+=3;goto B4700db;
case 0x4700dc:c.instructions+=2;goto B4700dc;
case 0x4700dd:c.instructions+=1;goto B4700dd;
case 0x4700de:goto L4700de;
case 0x4700e0:c.instructions+=3;goto B4700e0;
case 0x4700e1:c.instructions+=2;goto B4700e1;
case 0x4700e2:c.instructions+=1;goto B4700e2;
case 0x4700f0:goto L4700f0;
case 0x4700f5:c.instructions+=2;goto B4700f5;
case 0x4700f6:c.instructions+=1;goto B4700f6;
case 0x4700fb:goto L4700fb;
case 0x4700fe:c.instructions+=2;goto B4700fe;
case 0x470103:c.instructions+=1;goto B470103;
case 0x470105:goto L470105;
case 0x47010b:c.instructions+=5;goto B47010b;
case 0x47010e:c.instructions+=4;goto B47010e;
case 0x470114:c.instructions+=3;goto B470114;
case 0x470115:c.instructions+=2;goto B470115;
case 0x47011a:c.instructions+=1;goto B47011a;
case 0x47011f:goto L47011f;
case 0x470122:c.instructions+=2;goto B470122;
case 0x470124:c.instructions+=1;goto B470124;
case 0x470126:goto L470126;
case 0x470128:c.instructions+=1;goto B470128;
case 0x47012d:goto L47012d;
case 0x47012f:c.instructions+=1;goto B47012f;
case 0x470130:goto L470130;
case 0x470131:c.instructions+=2;goto B470131;
case 0x470133:c.instructions+=1;goto B470133;
case 0x470138:goto L470138;
case 0x47013d:c.instructions+=1;goto B47013d;
case 0x47013f:goto L47013f;
case 0x470140:c.instructions+=1;goto B470140;
case 0x470145:goto L470145;
case 0x470148:goto L470148;
case 0x47014a:c.instructions+=2;goto B47014a;
case 0x47014b:c.instructions+=1;goto B47014b;
case 0x470150:goto L470150;
case 0x470151:c.instructions+=6;goto B470151;
case 0x470155:c.instructions+=5;goto B470155;
case 0x470157:c.instructions+=4;goto B470157;
case 0x470158:c.instructions+=3;goto B470158;
case 0x47015a:c.instructions+=2;goto B47015a;
case 0x47015c:c.instructions+=1;goto B47015c;
case 0x47015f:goto L47015f;
case 0x470161:c.instructions+=4;goto B470161;
case 0x470164:c.instructions+=3;goto B470164;
case 0x470169:c.instructions+=2;goto B470169;
case 0x47016c:c.instructions+=1;goto B47016c;
case 0x47016e:goto L47016e;
case 0x47016f:c.instructions+=1;goto B47016f;
case 0x470171:goto L470171;
case 0x470172:c.instructions+=1;goto B470172;
case 0x470174:goto L470174;
case 0x470179:c.instructions+=2;goto B470179;
case 0x47017b:c.instructions+=1;goto B47017b;
case 0x470180:goto L470180;
case 0x470183:c.instructions+=3;goto B470183;
case 0x470184:c.instructions+=2;goto B470184;
case 0x470185:c.instructions+=1;goto B470185;
case 0x470188:goto L470188;
case 0x47018b:c.instructions+=3;goto B47018b;
case 0x47018c:c.instructions+=2;goto B47018c;
case 0x47018d:c.instructions+=1;goto B47018d;
case 0x470190:goto L470190;
case 0x470193:c.instructions+=3;goto B470193;
case 0x470194:c.instructions+=2;goto B470194;
case 0x470195:c.instructions+=1;goto B470195;
case 0x470198:goto L470198;
case 0x47019b:c.instructions+=3;goto B47019b;
case 0x47019c:c.instructions+=2;goto B47019c;
case 0x47019d:c.instructions+=1;goto B47019d;
case 0x4701a0:goto L4701a0;
case 0x4701a3:c.instructions+=18;goto B4701a3;
case 0x4701a4:c.instructions+=17;goto B4701a4;
case 0x4701a5:c.instructions+=16;goto B4701a5;
case 0x4701a7:c.instructions+=15;goto B4701a7;
case 0x4701ad:c.instructions+=14;goto B4701ad;
case 0x4701b0:c.instructions+=13;goto B4701b0;
case 0x4701b6:c.instructions+=12;goto B4701b6;
case 0x4701bc:c.instructions+=11;goto B4701bc;
case 0x4701bf:c.instructions+=10;goto B4701bf;
case 0x4701c0:c.instructions+=9;goto B4701c0;
case 0x4701c5:c.instructions+=8;goto B4701c5;
case 0x4701c8:c.instructions+=7;goto B4701c8;
case 0x4701ce:c.instructions+=6;goto B4701ce;
case 0x4701d4:c.instructions+=5;goto B4701d4;
case 0x4701d8:c.instructions+=4;goto B4701d8;
case 0x4701de:c.instructions+=3;goto B4701de;
case 0x4701e0:c.instructions+=2;goto B4701e0;
case 0x4701e3:c.instructions+=1;goto B4701e3;
case 0x4701e5:goto L4701e5;
case 0x4701e9:c.instructions+=5;goto B4701e9;
case 0x4701ef:c.instructions+=4;goto B4701ef;
case 0x4701f3:c.instructions+=3;goto B4701f3;
case 0x4701f5:c.instructions+=2;goto B4701f5;
case 0x4701f8:c.instructions+=1;goto B4701f8;
case 0x4701fa:goto L4701fa;
case 0x4701fc:c.instructions+=1;goto B4701fc;
case 0x470202:goto L470202;
case 0x470208:c.instructions+=4;goto B470208;
case 0x47020b:c.instructions+=3;goto B47020b;
case 0x470211:c.instructions+=2;goto B470211;
case 0x470213:c.instructions+=1;goto B470213;
case 0x470215:goto L470215;
case 0x470217:c.instructions+=12;goto B470217;
case 0x47021a:c.instructions+=11;goto B47021a;
case 0x47021d:c.instructions+=10;goto B47021d;
case 0x47021f:c.instructions+=9;goto B47021f;
case 0x470222:c.instructions+=8;goto B470222;
case 0x470226:c.instructions+=7;goto B470226;
case 0x470229:c.instructions+=6;goto B470229;
case 0x47022c:c.instructions+=5;goto B47022c;
case 0x47022e:c.instructions+=4;goto B47022e;
case 0x470231:c.instructions+=3;goto B470231;
case 0x470235:c.instructions+=2;goto B470235;
case 0x470237:c.instructions+=1;goto B470237;
case 0x47023c:goto L47023c;
case 0x470242:c.instructions+=1;goto B470242;
case 0x470244:goto L470244;
case 0x470247:c.instructions+=3;goto B470247;
case 0x470249:c.instructions+=2;goto B470249;
case 0x47024c:c.instructions+=1;goto B47024c;
case 0x470251:goto L470251;
case 0x470253:c.instructions+=1;goto B470253;
case 0x470259:goto L470259;
case 0x47025c:c.instructions+=3;goto B47025c;
case 0x47025f:c.instructions+=2;goto B47025f;
case 0x470262:c.instructions+=1;goto B470262;
case 0x470264:goto L470264;
case 0x470266:c.instructions+=1;goto B470266;
case 0x470268:goto L470268;
case 0x47026b:c.instructions+=3;goto B47026b;
case 0x470271:c.instructions+=2;goto B470271;
case 0x470273:c.instructions+=1;goto B470273;
case 0x470275:goto L470275;
case 0x470277:c.instructions+=1;goto B470277;
case 0x470279:goto L470279;
case 0x47027b:goto L47027b;
case 0x47027e:c.instructions+=2;goto B47027e;
case 0x470284:c.instructions+=1;goto B470284;
case 0x470286:goto L470286;
case 0x470289:c.instructions+=10;goto B470289;
case 0x47028c:c.instructions+=9;goto B47028c;
case 0x470292:c.instructions+=8;goto B470292;
case 0x470295:c.instructions+=7;goto B470295;
case 0x470299:c.instructions+=6;goto B470299;
case 0x47029c:c.instructions+=5;goto B47029c;
case 0x47029f:c.instructions+=4;goto B47029f;
case 0x4702a5:c.instructions+=3;goto B4702a5;
case 0x4702a8:c.instructions+=2;goto B4702a8;
case 0x4702ac:c.instructions+=1;goto B4702ac;
case 0x4702b1:goto L4702b1;
case 0x4702b4:c.instructions+=7;goto B4702b4;
case 0x4702b7:c.instructions+=6;goto B4702b7;
case 0x4702bd:c.instructions+=5;goto B4702bd;
case 0x4702c3:c.instructions+=4;goto B4702c3;
case 0x4702c5:c.instructions+=3;goto B4702c5;
case 0x4702c8:c.instructions+=2;goto B4702c8;
case 0x4702ca:c.instructions+=1;goto B4702ca;
case 0x4702cc:goto L4702cc;
case 0x4702cf:c.instructions+=3;goto B4702cf;
case 0x4702d2:c.instructions+=2;goto B4702d2;
case 0x4702d8:c.instructions+=1;goto B4702d8;
case 0x4702da:goto L4702da;
case 0x4702dd:c.instructions+=4;goto B4702dd;
case 0x4702e0:c.instructions+=3;goto B4702e0;
case 0x4702e3:c.instructions+=2;goto B4702e3;
case 0x4702e6:c.instructions+=1;goto B4702e6;
case 0x4702e8:goto L4702e8;
case 0x4702ef:goto L4702ef;
case 0x4702f2:c.instructions+=5;goto B4702f2;
case 0x4702f5:c.instructions+=4;goto B4702f5;
case 0x4702f7:c.instructions+=3;goto B4702f7;
case 0x4702fd:c.instructions+=2;goto B4702fd;
case 0x4702ff:c.instructions+=1;goto B4702ff;
case 0x470301:goto L470301;
case 0x470304:c.instructions+=11;goto B470304;
case 0x470306:c.instructions+=10;goto B470306;
case 0x470309:c.instructions+=9;goto B470309;
case 0x47030f:c.instructions+=8;goto B47030f;
case 0x470312:c.instructions+=7;goto B470312;
case 0x470316:c.instructions+=6;goto B470316;
case 0x470319:c.instructions+=5;goto B470319;
case 0x47031c:c.instructions+=4;goto B47031c;
case 0x470322:c.instructions+=3;goto B470322;
case 0x470325:c.instructions+=2;goto B470325;
case 0x470329:c.instructions+=1;goto B470329;
case 0x47032b:goto L47032b;
case 0x47032e:c.instructions+=2;goto B47032e;
case 0x470334:c.instructions+=1;goto B470334;
case 0x470336:goto L470336;
case 0x470339:c.instructions+=1;goto B470339;
case 0x47033c:goto L47033c;
case 0x470340:c.instructions+=1;goto B470340;
case 0x470344:goto L470344;
case 0x470346:c.instructions+=7;goto B470346;
case 0x470349:c.instructions+=6;goto B470349;
case 0x47034c:c.instructions+=5;goto B47034c;
case 0x470352:c.instructions+=4;goto B470352;
case 0x470354:c.instructions+=3;goto B470354;
case 0x470358:c.instructions+=2;goto B470358;
case 0x47035c:c.instructions+=1;goto B47035c;
case 0x47035f:goto L47035f;
case 0x470362:c.instructions+=8;goto B470362;
case 0x470368:c.instructions+=7;goto B470368;
case 0x47036a:c.instructions+=6;goto B47036a;
case 0x470370:c.instructions+=5;goto B470370;
case 0x470373:c.instructions+=4;goto B470373;
case 0x470377:c.instructions+=3;goto B470377;
case 0x470379:c.instructions+=2;goto B470379;
case 0x47037c:c.instructions+=1;goto B47037c;
case 0x47037e:goto L47037e;
case 0x470380:c.instructions+=1;goto B470380;
case 0x470384:goto L470384;
case 0x470388:c.instructions+=4;goto B470388;
case 0x47038a:c.instructions+=3;goto B47038a;
case 0x47038c:c.instructions+=2;goto B47038c;
case 0x47038f:c.instructions+=1;goto B47038f;
case 0x470391:goto L470391;
case 0x470393:c.instructions+=1;goto B470393;
case 0x470397:goto L470397;
case 0x47039a:c.instructions+=6;goto B47039a;
case 0x4703a0:c.instructions+=5;goto B4703a0;
case 0x4703a4:c.instructions+=4;goto B4703a4;
case 0x4703a6:c.instructions+=3;goto B4703a6;
case 0x4703a8:c.instructions+=2;goto B4703a8;
case 0x4703ab:c.instructions+=1;goto B4703ab;
case 0x4703ad:goto L4703ad;
case 0x4703af:c.instructions+=1;goto B4703af;
case 0x4703b3:goto L4703b3;
case 0x4703b5:c.instructions+=2;goto B4703b5;
case 0x4703bc:c.instructions+=1;goto B4703bc;
case 0x4703c2:goto L4703c2;
case 0x4703c8:c.instructions+=8;goto B4703c8;
case 0x4703cc:c.instructions+=7;goto B4703cc;
case 0x4703d0:c.instructions+=6;goto B4703d0;
case 0x4703d6:c.instructions+=5;goto B4703d6;
case 0x4703da:c.instructions+=4;goto B4703da;
case 0x4703dc:c.instructions+=3;goto B4703dc;
case 0x4703de:c.instructions+=2;goto B4703de;
case 0x4703e1:c.instructions+=1;goto B4703e1;
case 0x4703e3:goto L4703e3;
case 0x4703e5:c.instructions+=7;goto B4703e5;
case 0x4703e9:c.instructions+=6;goto B4703e9;
case 0x4703ef:c.instructions+=5;goto B4703ef;
case 0x4703f3:c.instructions+=4;goto B4703f3;
case 0x4703f5:c.instructions+=3;goto B4703f5;
case 0x4703f7:c.instructions+=2;goto B4703f7;
case 0x4703fa:c.instructions+=1;goto B4703fa;
case 0x4703fc:goto L4703fc;
case 0x4703fe:c.instructions+=1;goto B4703fe;
case 0x470402:goto L470402;
case 0x470408:c.instructions+=9;goto B470408;
case 0x47040e:c.instructions+=8;goto B47040e;
case 0x470412:c.instructions+=7;goto B470412;
case 0x470416:c.instructions+=6;goto B470416;
case 0x47041c:c.instructions+=5;goto B47041c;
case 0x470420:c.instructions+=4;goto B470420;
case 0x470422:c.instructions+=3;goto B470422;
case 0x470424:c.instructions+=2;goto B470424;
case 0x470427:c.instructions+=1;goto B470427;
case 0x470429:goto L470429;
case 0x47042b:c.instructions+=7;goto B47042b;
case 0x47042f:c.instructions+=6;goto B47042f;
case 0x470435:c.instructions+=5;goto B470435;
case 0x470439:c.instructions+=4;goto B470439;
case 0x47043b:c.instructions+=3;goto B47043b;
case 0x47043d:c.instructions+=2;goto B47043d;
case 0x470440:c.instructions+=1;goto B470440;
case 0x470442:goto L470442;
case 0x470444:c.instructions+=1;goto B470444;
case 0x470448:goto L470448;
case 0x47044e:c.instructions+=9;goto B47044e;
case 0x470454:c.instructions+=8;goto B470454;
case 0x47045a:c.instructions+=7;goto B47045a;
case 0x47045c:c.instructions+=6;goto B47045c;
case 0x470460:c.instructions+=5;goto B470460;
case 0x470462:c.instructions+=4;goto B470462;
case 0x470466:c.instructions+=3;goto B470466;
case 0x470468:c.instructions+=2;goto B470468;
case 0x47046b:c.instructions+=1;goto B47046b;
case 0x47046d:goto L47046d;
case 0x47046f:c.instructions+=3;goto B47046f;
case 0x470471:c.instructions+=2;goto B470471;
case 0x470475:c.instructions+=1;goto B470475;
case 0x470477:goto L470477;
case 0x47047d:c.instructions+=5;goto B47047d;
case 0x470481:c.instructions+=4;goto B470481;
case 0x470485:c.instructions+=3;goto B470485;
case 0x470487:c.instructions+=2;goto B470487;
case 0x47048a:c.instructions+=1;goto B47048a;
case 0x47048c:goto L47048c;
case 0x47048e:c.instructions+=2;goto B47048e;
case 0x470492:c.instructions+=1;goto B470492;
case 0x470494:goto L470494;
case 0x470498:c.instructions+=3;goto B470498;
case 0x47049c:c.instructions+=2;goto B47049c;
case 0x4704a2:c.instructions+=1;goto B4704a2;
case 0x4704a8:goto L4704a8;
case 0x4704ab:c.instructions+=8;goto B4704ab;
case 0x4704b1:c.instructions+=7;goto B4704b1;
case 0x4704b7:c.instructions+=6;goto B4704b7;
case 0x4704bd:c.instructions+=5;goto B4704bd;
case 0x4704c3:c.instructions+=4;goto B4704c3;
case 0x4704c6:c.instructions+=3;goto B4704c6;
case 0x4704cc:c.instructions+=2;goto B4704cc;
case 0x4704ce:c.instructions+=1;goto B4704ce;
case 0x4704d3:goto L4704d3;
case 0x4704d6:c.instructions+=5;goto B4704d6;
case 0x4704dc:c.instructions+=4;goto B4704dc;
case 0x4704df:c.instructions+=3;goto B4704df;
case 0x4704e5:c.instructions+=2;goto B4704e5;
case 0x4704e7:c.instructions+=1;goto B4704e7;
case 0x4704ec:goto L4704ec;
case 0x4704f2:c.instructions+=5;goto B4704f2;
case 0x4704fc:c.instructions+=4;goto B4704fc;
case 0x470502:c.instructions+=3;goto B470502;
case 0x470505:c.instructions+=2;goto B470505;
case 0x470507:c.instructions+=1;goto B470507;
case 0x47050c:goto L47050c;
case 0x47050e:c.instructions+=6;goto B47050e;
case 0x47050f:c.instructions+=5;goto B47050f;
case 0x470515:c.instructions+=4;goto B470515;
case 0x470516:c.instructions+=3;goto B470516;
case 0x470517:c.instructions+=2;goto B470517;
case 0x47051a:c.instructions+=1;goto B47051a;
case 0x470540:goto L470540;
case 0x470543:c.instructions+=21;goto B470543;
case 0x470548:c.instructions+=20;goto B470548;
case 0x470549:c.instructions+=19;goto B470549;
case 0x47054a:c.instructions+=18;goto B47054a;
case 0x47054c:c.instructions+=17;goto B47054c;
case 0x470552:c.instructions+=16;goto B470552;
case 0x470555:c.instructions+=15;goto B470555;
case 0x470559:c.instructions+=14;goto B470559;
case 0x47055f:c.instructions+=13;goto B47055f;
case 0x470561:c.instructions+=12;goto B470561;
case 0x470564:c.instructions+=11;goto B470564;
case 0x470565:c.instructions+=10;goto B470565;
case 0x470567:c.instructions+=9;goto B470567;
case 0x470569:c.instructions+=8;goto B470569;
case 0x47056c:c.instructions+=7;goto B47056c;
case 0x470572:c.instructions+=6;goto B470572;
case 0x470578:c.instructions+=5;goto B470578;
case 0x47057c:c.instructions+=4;goto B47057c;
case 0x470582:c.instructions+=3;goto B470582;
case 0x470584:c.instructions+=2;goto B470584;
case 0x470587:c.instructions+=1;goto B470587;
case 0x47058d:goto L47058d;
case 0x470591:c.instructions+=5;goto B470591;
case 0x470597:c.instructions+=4;goto B470597;
case 0x47059b:c.instructions+=3;goto B47059b;
case 0x47059d:c.instructions+=2;goto B47059d;
case 0x4705a0:c.instructions+=1;goto B4705a0;
case 0x4705a2:goto L4705a2;
case 0x4705a4:c.instructions+=1;goto B4705a4;
case 0x4705aa:goto L4705aa;
case 0x4705b0:c.instructions+=10;goto B4705b0;
case 0x4705b6:c.instructions+=9;goto B4705b6;
case 0x4705b9:c.instructions+=8;goto B4705b9;
case 0x4705bc:c.instructions+=7;goto B4705bc;
case 0x4705c2:c.instructions+=6;goto B4705c2;
case 0x4705c8:c.instructions+=5;goto B4705c8;
case 0x4705cc:c.instructions+=4;goto B4705cc;
case 0x4705d2:c.instructions+=3;goto B4705d2;
case 0x4705d4:c.instructions+=2;goto B4705d4;
case 0x4705d7:c.instructions+=1;goto B4705d7;
case 0x4705d9:goto L4705d9;
case 0x4705dd:c.instructions+=5;goto B4705dd;
case 0x4705e3:c.instructions+=4;goto B4705e3;
case 0x4705e7:c.instructions+=3;goto B4705e7;
case 0x4705e9:c.instructions+=2;goto B4705e9;
case 0x4705ec:c.instructions+=1;goto B4705ec;
case 0x4705ee:goto L4705ee;
case 0x4705f0:c.instructions+=1;goto B4705f0;
case 0x4705f6:goto L4705f6;
case 0x4705fc:c.instructions+=4;goto B4705fc;
case 0x4705ff:c.instructions+=3;goto B4705ff;
case 0x470605:c.instructions+=2;goto B470605;
case 0x470607:c.instructions+=1;goto B470607;
case 0x47060d:goto L47060d;
case 0x470610:c.instructions+=2;goto B470610;
case 0x470613:c.instructions+=1;goto B470613;
case 0x470618:goto L470618;
case 0x47061a:c.instructions+=1;goto B47061a;
case 0x47061c:goto L47061c;
case 0x47061f:c.instructions+=3;goto B47061f;
case 0x470622:c.instructions+=2;goto B470622;
case 0x470625:c.instructions+=1;goto B470625;
case 0x470627:goto L470627;
case 0x470629:c.instructions+=1;goto B470629;
case 0x47062b:goto L47062b;
case 0x47062e:c.instructions+=3;goto B47062e;
case 0x470634:c.instructions+=2;goto B470634;
case 0x470636:c.instructions+=1;goto B470636;
case 0x470638:goto L470638;
case 0x47063b:c.instructions+=1;goto B47063b;
case 0x47063d:goto L47063d;
case 0x47063f:goto L47063f;
case 0x470642:c.instructions+=2;goto B470642;
case 0x470648:c.instructions+=1;goto B470648;
case 0x47064a:goto L47064a;
case 0x470650:c.instructions+=1;goto B470650;
case 0x470655:goto L470655;
case 0x47065b:c.instructions+=1;goto B47065b;
case 0x47065d:goto L47065d;
case 0x470660:c.instructions+=3;goto B470660;
case 0x470663:c.instructions+=2;goto B470663;
case 0x470665:c.instructions+=1;goto B470665;
case 0x470667:goto L470667;
case 0x47066d:c.instructions+=1;goto B47066d;
case 0x47066f:goto L47066f;
case 0x470675:c.instructions+=1;goto B470675;
case 0x470677:goto L470677;
case 0x47067a:c.instructions+=4;goto B47067a;
case 0x47067d:c.instructions+=3;goto B47067d;
case 0x470680:c.instructions+=2;goto B470680;
case 0x470683:c.instructions+=1;goto B470683;
case 0x470685:goto L470685;
case 0x47068c:goto L47068c;
case 0x47068e:c.instructions+=1;goto B47068e;
case 0x470691:goto L470691;
case 0x470697:goto L470697;
case 0x47069a:c.instructions+=8;goto B47069a;
case 0x47069d:c.instructions+=7;goto B47069d;
case 0x4706a3:c.instructions+=6;goto B4706a3;
case 0x4706a6:c.instructions+=5;goto B4706a6;
case 0x4706a9:c.instructions+=4;goto B4706a9;
case 0x4706ac:c.instructions+=3;goto B4706ac;
case 0x4706b2:c.instructions+=2;goto B4706b2;
case 0x4706b5:c.instructions+=1;goto B4706b5;
case 0x4706b7:goto L4706b7;
case 0x4706ba:c.instructions+=13;goto B4706ba;
case 0x4706bd:c.instructions+=12;goto B4706bd;
case 0x4706bf:c.instructions+=11;goto B4706bf;
case 0x4706c5:c.instructions+=10;goto B4706c5;
case 0x4706c8:c.instructions+=9;goto B4706c8;
case 0x4706cb:c.instructions+=8;goto B4706cb;
case 0x4706d1:c.instructions+=7;goto B4706d1;
case 0x4706d4:c.instructions+=6;goto B4706d4;
case 0x4706d7:c.instructions+=5;goto B4706d7;
case 0x4706da:c.instructions+=4;goto B4706da;
case 0x4706e0:c.instructions+=3;goto B4706e0;
case 0x4706e3:c.instructions+=2;goto B4706e3;
case 0x4706e7:c.instructions+=1;goto B4706e7;
case 0x4706e9:goto L4706e9;
case 0x4706eb:c.instructions+=1;goto B4706eb;
case 0x4706ed:goto L4706ed;
case 0x4706f0:c.instructions+=1;goto B4706f0;
case 0x4706f6:goto L4706f6;
case 0x4706f9:c.instructions+=7;goto B4706f9;
case 0x4706fc:c.instructions+=6;goto B4706fc;
case 0x470702:c.instructions+=5;goto B470702;
case 0x470705:c.instructions+=4;goto B470705;
case 0x470708:c.instructions+=3;goto B470708;
case 0x47070b:c.instructions+=2;goto B47070b;
case 0x470711:c.instructions+=1;goto B470711;
case 0x470714:goto L470714;
case 0x470718:goto L470718;
case 0x47071a:c.instructions+=2;goto B47071a;
case 0x470721:c.instructions+=1;goto B470721;
case 0x470727:goto L470727;
case 0x47072d:c.instructions+=8;goto B47072d;
case 0x470731:c.instructions+=7;goto B470731;
case 0x470733:c.instructions+=6;goto B470733;
case 0x470737:c.instructions+=5;goto B470737;
case 0x470739:c.instructions+=4;goto B470739;
case 0x47073d:c.instructions+=3;goto B47073d;
case 0x47073f:c.instructions+=2;goto B47073f;
case 0x470742:c.instructions+=1;goto B470742;
case 0x470744:goto L470744;
case 0x470746:c.instructions+=3;goto B470746;
case 0x470748:c.instructions+=2;goto B470748;
case 0x47074c:c.instructions+=1;goto B47074c;
case 0x47074e:goto L47074e;
case 0x470752:c.instructions+=5;goto B470752;
case 0x470756:c.instructions+=4;goto B470756;
case 0x47075a:c.instructions+=3;goto B47075a;
case 0x47075c:c.instructions+=2;goto B47075c;
case 0x47075f:c.instructions+=1;goto B47075f;
case 0x470761:goto L470761;
case 0x470763:c.instructions+=1;goto B470763;
case 0x470767:goto L470767;
case 0x47076d:c.instructions+=9;goto B47076d;
case 0x470773:c.instructions+=8;goto B470773;
case 0x470777:c.instructions+=7;goto B470777;
case 0x47077b:c.instructions+=6;goto B47077b;
case 0x47077f:c.instructions+=5;goto B47077f;
case 0x470783:c.instructions+=4;goto B470783;
case 0x470785:c.instructions+=3;goto B470785;
case 0x470787:c.instructions+=2;goto B470787;
case 0x47078a:c.instructions+=1;goto B47078a;
case 0x47078c:goto L47078c;
case 0x47078e:c.instructions+=7;goto B47078e;
case 0x470792:c.instructions+=6;goto B470792;
case 0x470796:c.instructions+=5;goto B470796;
case 0x47079a:c.instructions+=4;goto B47079a;
case 0x47079c:c.instructions+=3;goto B47079c;
case 0x47079e:c.instructions+=2;goto B47079e;
case 0x4707a1:c.instructions+=1;goto B4707a1;
case 0x4707a3:goto L4707a3;
case 0x4707a5:c.instructions+=1;goto B4707a5;
case 0x4707a9:goto L4707a9;
case 0x4707af:c.instructions+=1;goto B4707af;
case 0x4707b1:goto L4707b1;
case 0x4707b5:c.instructions+=2;goto B4707b5;
case 0x4707bb:c.instructions+=1;goto B4707bb;
case 0x4707c1:goto L4707c1;
case 0x4707c4:c.instructions+=6;goto B4707c4;
case 0x4707ca:c.instructions+=5;goto B4707ca;
case 0x4707cb:c.instructions+=4;goto B4707cb;
case 0x4707d1:c.instructions+=3;goto B4707d1;
case 0x4707d5:c.instructions+=2;goto B4707d5;
case 0x4707d7:c.instructions+=1;goto B4707d7;
case 0x4707dc:goto L4707dc;
case 0x4707e0:c.instructions+=3;goto B4707e0;
case 0x4707e2:c.instructions+=2;goto B4707e2;
case 0x4707e4:c.instructions+=1;goto B4707e4;
case 0x4707e7:goto L4707e7;
case 0x4707ed:c.instructions+=6;goto B4707ed;
case 0x4707ef:c.instructions+=5;goto B4707ef;
case 0x4707f1:c.instructions+=4;goto B4707f1;
case 0x4707f7:c.instructions+=3;goto B4707f7;
case 0x4707fb:c.instructions+=2;goto B4707fb;
case 0x4707ff:c.instructions+=1;goto B4707ff;
case 0x470802:goto L470802;
case 0x470808:c.instructions+=20;goto B470808;
case 0x47080b:c.instructions+=19;goto B47080b;
case 0x47080e:c.instructions+=18;goto B47080e;
case 0x470812:c.instructions+=17;goto B470812;
case 0x470814:c.instructions+=16;goto B470814;
case 0x47081a:c.instructions+=15;goto B47081a;
case 0x470820:c.instructions+=14;goto B470820;
case 0x470822:c.instructions+=13;goto B470822;
case 0x470824:c.instructions+=12;goto B470824;
case 0x47082a:c.instructions+=11;goto B47082a;
case 0x470830:c.instructions+=10;goto B470830;
case 0x470836:c.instructions+=9;goto B470836;
case 0x47083c:c.instructions+=8;goto B47083c;
case 0x470842:c.instructions+=7;goto B470842;
case 0x470844:c.instructions+=6;goto B470844;
case 0x47084a:c.instructions+=5;goto B47084a;
case 0x470850:c.instructions+=4;goto B470850;
case 0x470856:c.instructions+=3;goto B470856;
case 0x47085c:c.instructions+=2;goto B47085c;
case 0x470860:c.instructions+=1;goto B470860;
case 0x470863:goto L470863;
case 0x470866:c.instructions+=6;goto B470866;
case 0x470869:c.instructions+=5;goto B470869;
case 0x47086b:c.instructions+=4;goto B47086b;
case 0x47086f:c.instructions+=3;goto B47086f;
case 0x470873:c.instructions+=2;goto B470873;
case 0x470879:c.instructions+=1;goto B470879;
case 0x47087e:goto L47087e;
case 0x470880:c.instructions+=6;goto B470880;
case 0x470882:c.instructions+=5;goto B470882;
case 0x470886:c.instructions+=4;goto B470886;
case 0x47088a:c.instructions+=3;goto B47088a;
case 0x470890:c.instructions+=2;goto B470890;
case 0x470894:c.instructions+=1;goto B470894;
case 0x470899:goto L470899;
case 0x47089c:c.instructions+=5;goto B47089c;
case 0x47089f:c.instructions+=4;goto B47089f;
case 0x4708a2:c.instructions+=3;goto B4708a2;
case 0x4708a4:c.instructions+=2;goto B4708a4;
case 0x4708aa:c.instructions+=1;goto B4708aa;
case 0x4708ad:goto L4708ad;
case 0x4708b0:c.instructions+=4;goto B4708b0;
case 0x4708b4:c.instructions+=3;goto B4708b4;
case 0x4708ba:c.instructions+=2;goto B4708ba;
case 0x4708c0:c.instructions+=1;goto B4708c0;
case 0x4708c5:goto L4708c5;
case 0x4708c8:c.instructions+=5;goto B4708c8;
case 0x4708ce:c.instructions+=4;goto B4708ce;
case 0x4708d4:c.instructions+=3;goto B4708d4;
case 0x4708d7:c.instructions+=2;goto B4708d7;
case 0x4708d9:c.instructions+=1;goto B4708d9;
case 0x4708dc:goto L4708dc;
case 0x4708e2:c.instructions+=5;goto B4708e2;
case 0x4708e8:c.instructions+=4;goto B4708e8;
case 0x4708eb:c.instructions+=3;goto B4708eb;
case 0x4708ef:c.instructions+=2;goto B4708ef;
case 0x4708f5:c.instructions+=1;goto B4708f5;
case 0x4708fa:goto L4708fa;
case 0x470900:c.instructions+=5;goto B470900;
case 0x470903:c.instructions+=4;goto B470903;
case 0x470909:c.instructions+=3;goto B470909;
case 0x47090c:c.instructions+=2;goto B47090c;
case 0x470910:c.instructions+=1;goto B470910;
case 0x470915:goto L470915;
case 0x470916:c.instructions+=5;goto B470916;
case 0x47091c:c.instructions+=4;goto B47091c;
case 0x47091d:c.instructions+=3;goto B47091d;
case 0x47091e:c.instructions+=2;goto B47091e;
case 0x470921:c.instructions+=1;goto B470921;
case 0x470940:goto L470940;
case 0x470941:c.instructions+=11;goto B470941;
case 0x470942:c.instructions+=10;goto B470942;
case 0x470944:c.instructions+=9;goto B470944;
case 0x470947:c.instructions+=8;goto B470947;
case 0x47094a:c.instructions+=7;goto B47094a;
case 0x470950:c.instructions+=6;goto B470950;
case 0x470952:c.instructions+=5;goto B470952;
case 0x470958:c.instructions+=4;goto B470958;
case 0x47095e:c.instructions+=3;goto B47095e;
case 0x470960:c.instructions+=2;goto B470960;
case 0x470963:c.instructions+=1;goto B470963;
case 0x470965:goto L470965;
case 0x47096b:c.instructions+=5;goto B47096b;
case 0x47096d:c.instructions+=4;goto B47096d;
case 0x470973:c.instructions+=3;goto B470973;
case 0x470975:c.instructions+=2;goto B470975;
case 0x470978:c.instructions+=1;goto B470978;
case 0x47097a:goto L47097a;
case 0x47097d:c.instructions+=5;goto B47097d;
case 0x470983:c.instructions+=4;goto B470983;
case 0x470986:c.instructions+=3;goto B470986;
case 0x470988:c.instructions+=2;goto B470988;
case 0x47098b:c.instructions+=1;goto B47098b;
case 0x47098d:goto L47098d;
case 0x470995:c.instructions+=2;goto B470995;
case 0x470997:c.instructions+=1;goto B470997;
case 0x470999:goto L470999;
case 0x47099e:c.instructions+=1;goto B47099e;
case 0x4709a3:goto L4709a3;
case 0x4709a6:c.instructions+=4;goto B4709a6;
case 0x4709a9:c.instructions+=3;goto B4709a9;
case 0x4709b0:c.instructions+=2;goto B4709b0;
case 0x4709b3:c.instructions+=1;goto B4709b3;
case 0x4709b9:goto L4709b9;
case 0x4709c0:goto L4709c0;
case 0x4709c3:c.instructions+=6;goto B4709c3;
case 0x4709c5:c.instructions+=5;goto B4709c5;
case 0x4709cb:c.instructions+=4;goto B4709cb;
case 0x4709cd:c.instructions+=3;goto B4709cd;
case 0x4709d3:c.instructions+=2;goto B4709d3;
case 0x4709d5:c.instructions+=1;goto B4709d5;
case 0x4709d7:goto L4709d7;
case 0x4709da:c.instructions+=3;goto B4709da;
case 0x4709db:c.instructions+=2;goto B4709db;
case 0x4709dc:c.instructions+=1;goto B4709dc;
case 0x4709dd:goto L4709dd;
case 0x4709e0:c.instructions+=2;goto B4709e0;
case 0x4709e3:c.instructions+=1;goto B4709e3;
case 0x4709e5:goto L4709e5;
case 0x4709ea:c.instructions+=2;goto B4709ea;
case 0x4709ec:c.instructions+=1;goto B4709ec;
case 0x4709ee:goto L4709ee;
case 0x4709f1:c.instructions+=3;goto B4709f1;
case 0x4709f2:c.instructions+=2;goto B4709f2;
case 0x4709f3:c.instructions+=1;goto B4709f3;
case 0x4709f4:goto L4709f4;
case 0x4709f7:c.instructions+=3;goto B4709f7;
case 0x4709f8:c.instructions+=2;goto B4709f8;
case 0x4709f9:c.instructions+=1;goto B4709f9;
case 0x470a00:goto L470a00;
case 0x470a05:c.instructions+=2;goto B470a05;
case 0x470a06:c.instructions+=1;goto B470a06;
case 0x470a0b:goto L470a0b;
case 0x470a0e:c.instructions+=2;goto B470a0e;
case 0x470a13:c.instructions+=1;goto B470a13;
case 0x470a15:goto L470a15;
case 0x470a1b:c.instructions+=5;goto B470a1b;
case 0x470a1e:c.instructions+=4;goto B470a1e;
case 0x470a24:c.instructions+=3;goto B470a24;
case 0x470a25:c.instructions+=2;goto B470a25;
case 0x470a2a:c.instructions+=1;goto B470a2a;
case 0x470a2f:goto L470a2f;
case 0x470a32:c.instructions+=2;goto B470a32;
case 0x470a34:c.instructions+=1;goto B470a34;
case 0x470a36:goto L470a36;
case 0x470a38:c.instructions+=1;goto B470a38;
case 0x470a3d:goto L470a3d;
case 0x470a3f:c.instructions+=1;goto B470a3f;
case 0x470a40:goto L470a40;
case 0x470a41:c.instructions+=2;goto B470a41;
case 0x470a43:c.instructions+=1;goto B470a43;
case 0x470a48:goto L470a48;
case 0x470a4d:c.instructions+=1;goto B470a4d;
case 0x470a4f:goto L470a4f;
case 0x470a50:c.instructions+=1;goto B470a50;
case 0x470a55:goto L470a55;
case 0x470a58:goto L470a58;
case 0x470a5a:c.instructions+=2;goto B470a5a;
case 0x470a5b:c.instructions+=1;goto B470a5b;
case 0x470a60:goto L470a60;
case 0x470a63:c.instructions+=13;goto B470a63;
case 0x470a64:c.instructions+=12;goto B470a64;
case 0x470a65:c.instructions+=11;goto B470a65;
case 0x470a66:c.instructions+=10;goto B470a66;
case 0x470a68:c.instructions+=9;goto B470a68;
case 0x470a69:c.instructions+=8;goto B470a69;
case 0x470a6c:c.instructions+=7;goto B470a6c;
case 0x470a6f:c.instructions+=6;goto B470a6f;
case 0x470a75:c.instructions+=5;goto B470a75;
case 0x470a7b:c.instructions+=4;goto B470a7b;
case 0x470a7d:c.instructions+=3;goto B470a7d;
case 0x470a83:c.instructions+=2;goto B470a83;
case 0x470a89:c.instructions+=1;goto B470a89;
case 0x470a8e:goto L470a8e;
case 0x470a90:c.instructions+=2;goto B470a90;
case 0x470a92:c.instructions+=1;goto B470a92;
case 0x470a94:goto L470a94;
case 0x470a96:c.instructions+=1;goto B470a96;
case 0x470a98:goto L470a98;
case 0x470a9d:c.instructions+=1;goto B470a9d;
case 0x470a9f:goto L470a9f;
case 0x470aa4:goto L470aa4;
case 0x470aa7:c.instructions+=7;goto B470aa7;
case 0x470aaa:c.instructions+=6;goto B470aaa;
case 0x470ab0:c.instructions+=5;goto B470ab0;
case 0x470ab6:c.instructions+=4;goto B470ab6;
case 0x470ab8:c.instructions+=3;goto B470ab8;
case 0x470abe:c.instructions+=2;goto B470abe;
case 0x470ac4:c.instructions+=1;goto B470ac4;
case 0x470ac9:goto L470ac9;
case 0x470acb:c.instructions+=1;goto B470acb;
case 0x470acd:goto L470acd;
case 0x470acf:c.instructions+=1;goto B470acf;
case 0x470ad1:goto L470ad1;
case 0x470ad6:c.instructions+=1;goto B470ad6;
case 0x470ad8:goto L470ad8;
case 0x470add:goto L470add;
case 0x470ae0:c.instructions+=7;goto B470ae0;
case 0x470ae3:c.instructions+=6;goto B470ae3;
case 0x470ae9:c.instructions+=5;goto B470ae9;
case 0x470aef:c.instructions+=4;goto B470aef;
case 0x470af1:c.instructions+=3;goto B470af1;
case 0x470af7:c.instructions+=2;goto B470af7;
case 0x470afd:c.instructions+=1;goto B470afd;
case 0x470b02:goto L470b02;
case 0x470b04:c.instructions+=1;goto B470b04;
case 0x470b06:goto L470b06;
case 0x470b08:c.instructions+=1;goto B470b08;
case 0x470b0a:goto L470b0a;
case 0x470b0f:c.instructions+=1;goto B470b0f;
case 0x470b11:goto L470b11;
case 0x470b16:goto L470b16;
case 0x470b19:c.instructions+=7;goto B470b19;
case 0x470b1c:c.instructions+=6;goto B470b1c;
case 0x470b22:c.instructions+=5;goto B470b22;
case 0x470b28:c.instructions+=4;goto B470b28;
case 0x470b2a:c.instructions+=3;goto B470b2a;
case 0x470b30:c.instructions+=2;goto B470b30;
case 0x470b36:c.instructions+=1;goto B470b36;
case 0x470b3b:goto L470b3b;
case 0x470b3d:c.instructions+=1;goto B470b3d;
case 0x470b3f:goto L470b3f;
case 0x470b41:c.instructions+=1;goto B470b41;
case 0x470b43:goto L470b43;
case 0x470b48:c.instructions+=1;goto B470b48;
case 0x470b4a:goto L470b4a;
case 0x470b4f:goto L470b4f;
case 0x470b52:c.instructions+=6;goto B470b52;
case 0x470b55:c.instructions+=5;goto B470b55;
case 0x470b58:c.instructions+=4;goto B470b58;
case 0x470b5e:c.instructions+=3;goto B470b5e;
case 0x470b64:c.instructions+=2;goto B470b64;
case 0x470b6a:c.instructions+=1;goto B470b6a;
case 0x470b6f:goto L470b6f;
case 0x470b71:c.instructions+=1;goto B470b71;
case 0x470b73:goto L470b73;
case 0x470b75:c.instructions+=1;goto B470b75;
case 0x470b77:goto L470b77;
case 0x470b7c:c.instructions+=1;goto B470b7c;
case 0x470b7e:goto L470b7e;
case 0x470b83:goto L470b83;
case 0x470b86:c.instructions+=2;goto B470b86;
case 0x470b89:c.instructions+=1;goto B470b89;
case 0x470b8e:goto L470b8e;
case 0x470b94:c.instructions+=4;goto B470b94;
case 0x470b99:c.instructions+=3;goto B470b99;
case 0x470b9b:c.instructions+=2;goto B470b9b;
case 0x470b9e:c.instructions+=1;goto B470b9e;
case 0x470ba0:goto L470ba0;
case 0x470ba3:c.instructions+=1;goto B470ba3;
case 0x470ba5:goto L470ba5;
case 0x470ba8:goto L470ba8;
case 0x470bab:c.instructions+=3;goto B470bab;
case 0x470bb1:c.instructions+=2;goto B470bb1;
case 0x470bb4:c.instructions+=1;goto B470bb4;
case 0x470bb6:goto L470bb6;
case 0x470bbd:goto L470bbd;
case 0x470bc2:c.instructions+=1;goto B470bc2;
case 0x470bc4:goto L470bc4;
case 0x470bc9:c.instructions+=1;goto B470bc9;
case 0x470bcb:goto L470bcb;
case 0x470bcd:goto L470bcd;
case 0x470bd0:c.instructions+=3;goto B470bd0;
case 0x470bd6:c.instructions+=2;goto B470bd6;
case 0x470bd8:c.instructions+=1;goto B470bd8;
case 0x470bda:goto L470bda;
case 0x470bdc:c.instructions+=1;goto B470bdc;
case 0x470bde:goto L470bde;
case 0x470be4:c.instructions+=2;goto B470be4;
case 0x470be6:c.instructions+=1;goto B470be6;
case 0x470be8:goto L470be8;
case 0x470bea:goto L470bea;
case 0x470bed:c.instructions+=7;goto B470bed;
case 0x470bf0:c.instructions+=6;goto B470bf0;
case 0x470bf3:c.instructions+=5;goto B470bf3;
case 0x470bf6:c.instructions+=4;goto B470bf6;
case 0x470bf9:c.instructions+=3;goto B470bf9;
case 0x470bfc:c.instructions+=2;goto B470bfc;
case 0x470bfe:c.instructions+=1;goto B470bfe;
case 0x470c00:goto L470c00;
case 0x470c03:c.instructions+=2;goto B470c03;
case 0x470c06:c.instructions+=1;goto B470c06;
case 0x470c08:goto L470c08;
case 0x470c0b:c.instructions+=1;goto B470c0b;
case 0x470c0d:goto L470c0d;
case 0x470c13:c.instructions+=2;goto B470c13;
case 0x470c15:c.instructions+=1;goto B470c15;
case 0x470c17:goto L470c17;
case 0x470c1a:c.instructions+=1;goto B470c1a;
case 0x470c1c:goto L470c1c;
case 0x470c1f:c.instructions+=1;goto B470c1f;
case 0x470c21:goto L470c21;
case 0x470c24:goto L470c24;
case 0x470c2a:c.instructions+=1;goto B470c2a;
case 0x470c30:goto L470c30;
case 0x470c35:c.instructions+=9;goto B470c35;
case 0x470c3b:c.instructions+=8;goto B470c3b;
case 0x470c41:c.instructions+=7;goto B470c41;
case 0x470c47:c.instructions+=6;goto B470c47;
case 0x470c4a:c.instructions+=5;goto B470c4a;
case 0x470c4c:c.instructions+=4;goto B470c4c;
case 0x470c4e:c.instructions+=3;goto B470c4e;
case 0x470c51:c.instructions+=2;goto B470c51;
case 0x470c55:c.instructions+=1;goto B470c55;
case 0x470c57:goto L470c57;
case 0x470c5d:c.instructions+=2;goto B470c5d;
case 0x470c5f:c.instructions+=1;goto B470c5f;
case 0x470c61:goto L470c61;
case 0x470c64:c.instructions+=6;goto B470c64;
case 0x470c67:c.instructions+=5;goto B470c67;
case 0x470c6b:c.instructions+=4;goto B470c6b;
case 0x470c71:c.instructions+=3;goto B470c71;
case 0x470c72:c.instructions+=2;goto B470c72;
case 0x470c74:c.instructions+=1;goto B470c74;
case 0x470c76:goto L470c76;
case 0x470c7a:c.instructions+=11;goto B470c7a;
case 0x470c80:c.instructions+=10;goto B470c80;
case 0x470c82:c.instructions+=9;goto B470c82;
case 0x470c84:c.instructions+=8;goto B470c84;
case 0x470c86:c.instructions+=7;goto B470c86;
case 0x470c88:c.instructions+=6;goto B470c88;
case 0x470c8c:c.instructions+=5;goto B470c8c;
case 0x470c91:c.instructions+=4;goto B470c91;
case 0x470c95:c.instructions+=3;goto B470c95;
case 0x470c99:c.instructions+=2;goto B470c99;
case 0x470c9f:c.instructions+=1;goto B470c9f;
case 0x470ca4:goto L470ca4;
case 0x470ca7:c.instructions+=3;goto B470ca7;
case 0x470ca8:c.instructions+=2;goto B470ca8;
case 0x470ca9:c.instructions+=1;goto B470ca9;
case 0x470cae:goto L470cae;
case 0x470cb1:c.instructions+=7;goto B470cb1;
case 0x470cb2:c.instructions+=6;goto B470cb2;
case 0x470cb5:c.instructions+=5;goto B470cb5;
case 0x470cb6:c.instructions+=4;goto B470cb6;
case 0x470cb7:c.instructions+=3;goto B470cb7;
case 0x470cb8:c.instructions+=2;goto B470cb8;
case 0x470cbb:c.instructions+=1;goto B470cbb;
case 0x470cbc:goto L470cbc;
case 0x470cbe:goto L470cbe;
case 0x470cc1:goto L470cc1;
case 0x470cc2:c.instructions+=5;goto B470cc2;
case 0x470cc3:c.instructions+=4;goto B470cc3;
case 0x470cc4:c.instructions+=3;goto B470cc4;
case 0x470cc5:c.instructions+=2;goto B470cc5;
case 0x470cc8:c.instructions+=1;goto B470cc8;
case 0x470cf0:goto L470cf0;
case 0x470cf5:c.instructions+=2;goto B470cf5;
case 0x470cf6:c.instructions+=1;goto B470cf6;
case 0x470cfb:goto L470cfb;
case 0x470cfe:c.instructions+=2;goto B470cfe;
case 0x470d03:c.instructions+=1;goto B470d03;
case 0x470d05:goto L470d05;
case 0x470d0b:c.instructions+=5;goto B470d0b;
case 0x470d0e:c.instructions+=4;goto B470d0e;
case 0x470d14:c.instructions+=3;goto B470d14;
case 0x470d15:c.instructions+=2;goto B470d15;
case 0x470d1a:c.instructions+=1;goto B470d1a;
case 0x470d1f:goto L470d1f;
case 0x470d22:c.instructions+=2;goto B470d22;
case 0x470d24:c.instructions+=1;goto B470d24;
case 0x470d26:goto L470d26;
case 0x470d28:c.instructions+=1;goto B470d28;
case 0x470d2d:goto L470d2d;
case 0x470d2f:c.instructions+=1;goto B470d2f;
case 0x470d30:goto L470d30;
case 0x470d31:c.instructions+=2;goto B470d31;
case 0x470d33:c.instructions+=1;goto B470d33;
case 0x470d38:goto L470d38;
case 0x470d3d:c.instructions+=1;goto B470d3d;
case 0x470d3f:goto L470d3f;
case 0x470d40:c.instructions+=1;goto B470d40;
case 0x470d45:goto L470d45;
case 0x470d48:goto L470d48;
case 0x470d4a:c.instructions+=2;goto B470d4a;
case 0x470d4b:c.instructions+=1;goto B470d4b;
case 0x470d50:goto L470d50;
case 0x470d53:c.instructions+=6;goto B470d53;
case 0x470d54:c.instructions+=5;goto B470d54;
case 0x470d56:c.instructions+=4;goto B470d56;
case 0x470d5c:c.instructions+=3;goto B470d5c;
case 0x470d5f:c.instructions+=2;goto B470d5f;
case 0x470d62:c.instructions+=1;goto B470d62;
case 0x470d68:goto L470d68;
case 0x470d6a:c.instructions+=1;goto B470d6a;
case 0x470d70:goto L470d70;
case 0x470d76:c.instructions+=2;goto B470d76;
case 0x470d78:c.instructions+=1;goto B470d78;
case 0x470d7e:goto L470d7e;
case 0x470d84:c.instructions+=4;goto B470d84;
case 0x470d8a:c.instructions+=3;goto B470d8a;
case 0x470d8c:c.instructions+=2;goto B470d8c;
case 0x470d8f:c.instructions+=1;goto B470d8f;
case 0x470d91:goto L470d91;
case 0x470d94:c.instructions+=7;goto B470d94;
case 0x470d97:c.instructions+=6;goto B470d97;
case 0x470d9d:c.instructions+=5;goto B470d9d;
case 0x470da3:c.instructions+=4;goto B470da3;
case 0x470da9:c.instructions+=3;goto B470da9;
case 0x470dab:c.instructions+=2;goto B470dab;
case 0x470dae:c.instructions+=1;goto B470dae;
case 0x470db0:goto L470db0;
case 0x470db6:c.instructions+=5;goto B470db6;
case 0x470db9:c.instructions+=4;goto B470db9;
case 0x470dba:c.instructions+=3;goto B470dba;
case 0x470dbf:c.instructions+=2;goto B470dbf;
case 0x470dc0:c.instructions+=1;goto B470dc0;
case 0x470dc5:goto L470dc5;
case 0x470dc8:c.instructions+=4;goto B470dc8;
case 0x470dcb:c.instructions+=3;goto B470dcb;
case 0x470dcc:c.instructions+=2;goto B470dcc;
case 0x470dcf:c.instructions+=1;goto B470dcf;
case 0x470dd2:goto L470dd2;
case 0x470dd5:c.instructions+=10;goto B470dd5;
case 0x470ddb:c.instructions+=9;goto B470ddb;
case 0x470ddf:c.instructions+=8;goto B470ddf;
case 0x470de3:c.instructions+=7;goto B470de3;
case 0x470de7:c.instructions+=6;goto B470de7;
case 0x470deb:c.instructions+=5;goto B470deb;
case 0x470df1:c.instructions+=4;goto B470df1;
case 0x470df3:c.instructions+=3;goto B470df3;
case 0x470df5:c.instructions+=2;goto B470df5;
case 0x470df8:c.instructions+=1;goto B470df8;
case 0x470dfe:goto L470dfe;
case 0x470e00:c.instructions+=7;goto B470e00;
case 0x470e04:c.instructions+=6;goto B470e04;
case 0x470e08:c.instructions+=5;goto B470e08;
case 0x470e0e:c.instructions+=4;goto B470e0e;
case 0x470e10:c.instructions+=3;goto B470e10;
case 0x470e12:c.instructions+=2;goto B470e12;
case 0x470e15:c.instructions+=1;goto B470e15;
case 0x470e1b:goto L470e1b;
case 0x470e1d:c.instructions+=5;goto B470e1d;
case 0x470e23:c.instructions+=4;goto B470e23;
case 0x470e26:c.instructions+=3;goto B470e26;
case 0x470e27:c.instructions+=2;goto B470e27;
case 0x470e2a:c.instructions+=1;goto B470e2a;
case 0x470e2d:goto L470e2d;
case 0x470e30:c.instructions+=7;goto B470e30;
case 0x470e33:c.instructions+=6;goto B470e33;
case 0x470e39:c.instructions+=5;goto B470e39;
case 0x470e3f:c.instructions+=4;goto B470e3f;
case 0x470e45:c.instructions+=3;goto B470e45;
case 0x470e47:c.instructions+=2;goto B470e47;
case 0x470e4a:c.instructions+=1;goto B470e4a;
case 0x470e4c:goto L470e4c;
case 0x470e4f:c.instructions+=4;goto B470e4f;
case 0x470e54:c.instructions+=3;goto B470e54;
case 0x470e59:c.instructions+=2;goto B470e59;
case 0x470e5a:c.instructions+=1;goto B470e5a;
case 0x470e5f:goto L470e5f;
case 0x470e62:c.instructions+=4;goto B470e62;
case 0x470e65:c.instructions+=3;goto B470e65;
case 0x470e66:c.instructions+=2;goto B470e66;
case 0x470e69:c.instructions+=1;goto B470e69;
case 0x470e6c:goto L470e6c;
case 0x470e72:c.instructions+=5;goto B470e72;
case 0x470e75:c.instructions+=4;goto B470e75;
case 0x470e76:c.instructions+=3;goto B470e76;
case 0x470e7b:c.instructions+=2;goto B470e7b;
case 0x470e7c:c.instructions+=1;goto B470e7c;
case 0x470e81:goto L470e81;
case 0x470e84:c.instructions+=4;goto B470e84;
case 0x470e87:c.instructions+=3;goto B470e87;
case 0x470e88:c.instructions+=2;goto B470e88;
case 0x470e8b:c.instructions+=1;goto B470e8b;
case 0x470e8e:goto L470e8e;
case 0x470e91:c.instructions+=2;goto B470e91;
case 0x470e94:c.instructions+=1;goto B470e94;
case 0x470e96:goto L470e96;
case 0x470e99:c.instructions+=1;goto B470e99;
case 0x470e9b:goto L470e9b;
case 0x470e9e:c.instructions+=1;goto B470e9e;
case 0x470ea0:goto L470ea0;
case 0x470ea3:c.instructions+=1;goto B470ea3;
case 0x470ea5:goto L470ea5;
case 0x470eac:c.instructions+=3;goto B470eac;
case 0x470ead:c.instructions+=2;goto B470ead;
case 0x470eb0:c.instructions+=1;goto B470eb0;
case 0x470eb3:goto L470eb3;
case 0x470eb9:c.instructions+=3;goto B470eb9;
case 0x470ec0:c.instructions+=2;goto B470ec0;
case 0x470ec6:c.instructions+=1;goto B470ec6;
case 0x470ecc:goto L470ecc;
case 0x470ecf:c.instructions+=3;goto B470ecf;
case 0x470ed0:c.instructions+=2;goto B470ed0;
case 0x470ed3:c.instructions+=1;goto B470ed3;
case 0x470ee0:goto L470ee0;
case 0x470ee1:c.instructions+=3;goto B470ee1;
case 0x470ee7:c.instructions+=2;goto B470ee7;
case 0x470ee9:c.instructions+=1;goto B470ee9;
case 0x470eeb:goto L470eeb;
case 0x470ef1:c.instructions+=8;goto B470ef1;
case 0x470ef5:c.instructions+=7;goto B470ef5;
case 0x470ef9:c.instructions+=6;goto B470ef9;
case 0x470eff:c.instructions+=5;goto B470eff;
case 0x470f05:c.instructions+=4;goto B470f05;
case 0x470f07:c.instructions+=3;goto B470f07;
case 0x470f09:c.instructions+=2;goto B470f09;
case 0x470f0c:c.instructions+=1;goto B470f0c;
case 0x470f0e:goto L470f0e;
case 0x470f10:c.instructions+=7;goto B470f10;
case 0x470f14:c.instructions+=6;goto B470f14;
case 0x470f1a:c.instructions+=5;goto B470f1a;
case 0x470f20:c.instructions+=4;goto B470f20;
case 0x470f22:c.instructions+=3;goto B470f22;
case 0x470f24:c.instructions+=2;goto B470f24;
case 0x470f27:c.instructions+=1;goto B470f27;
case 0x470f29:goto L470f29;
case 0x470f2b:c.instructions+=4;goto B470f2b;
case 0x470f31:c.instructions+=3;goto B470f31;
case 0x470f37:c.instructions+=2;goto B470f37;
case 0x470f38:c.instructions+=1;goto B470f38;
case 0x470f3b:goto L470f3b;
case 0x470f41:c.instructions+=8;goto B470f41;
case 0x470f45:c.instructions+=7;goto B470f45;
case 0x470f49:c.instructions+=6;goto B470f49;
case 0x470f4f:c.instructions+=5;goto B470f4f;
case 0x470f55:c.instructions+=4;goto B470f55;
case 0x470f57:c.instructions+=3;goto B470f57;
case 0x470f59:c.instructions+=2;goto B470f59;
case 0x470f5c:c.instructions+=1;goto B470f5c;
case 0x470f5e:goto L470f5e;
case 0x470f60:c.instructions+=7;goto B470f60;
case 0x470f64:c.instructions+=6;goto B470f64;
case 0x470f6a:c.instructions+=5;goto B470f6a;
case 0x470f70:c.instructions+=4;goto B470f70;
case 0x470f72:c.instructions+=3;goto B470f72;
case 0x470f74:c.instructions+=2;goto B470f74;
case 0x470f77:c.instructions+=1;goto B470f77;
case 0x470f79:goto L470f79;
case 0x470f7b:c.instructions+=1;goto B470f7b;
case 0x470f81:goto L470f81;
case 0x470f87:c.instructions+=2;goto B470f87;
case 0x470f88:c.instructions+=1;goto B470f88;
case 0x470f90:goto L470f90;
case 0x470f91:c.instructions+=6;goto B470f91;
case 0x470f95:c.instructions+=5;goto B470f95;
case 0x470f97:c.instructions+=4;goto B470f97;
case 0x470f98:c.instructions+=3;goto B470f98;
case 0x470f9a:c.instructions+=2;goto B470f9a;
case 0x470f9c:c.instructions+=1;goto B470f9c;
case 0x470f9f:goto L470f9f;
case 0x470fa1:c.instructions+=4;goto B470fa1;
case 0x470fa4:c.instructions+=3;goto B470fa4;
case 0x470fa9:c.instructions+=2;goto B470fa9;
case 0x470fac:c.instructions+=1;goto B470fac;
case 0x470fae:goto L470fae;
case 0x470faf:c.instructions+=1;goto B470faf;
case 0x470fb1:goto L470fb1;
case 0x470fb6:c.instructions+=2;goto B470fb6;
case 0x470fb8:c.instructions+=1;goto B470fb8;
case 0x470fbd:goto L470fbd;
case 0x470fc0:c.instructions+=3;goto B470fc0;
case 0x470fc1:c.instructions+=2;goto B470fc1;
case 0x470fc2:c.instructions+=1;goto B470fc2;
case 0x470fc5:goto L470fc5;
case 0x470fcb:c.instructions+=3;goto B470fcb;
case 0x470fcc:c.instructions+=2;goto B470fcc;
case 0x470fcd:c.instructions+=1;goto B470fcd;
case 0x470fd0:goto L470fd0;
case 0x470fd6:c.instructions+=3;goto B470fd6;
case 0x470fd7:c.instructions+=2;goto B470fd7;
case 0x470fd8:c.instructions+=1;goto B470fd8;
case 0x470fe0:goto L470fe0;
case 0x470fe1:c.instructions+=2;goto B470fe1;
case 0x470fe3:c.instructions+=1;goto B470fe3;
case 0x470fe8:goto L470fe8;
case 0x470fee:c.instructions+=3;goto B470fee;
case 0x470ff0:c.instructions+=2;goto B470ff0;
case 0x470ff1:c.instructions+=1;goto B470ff1;
default:missing_instruction(c.pc);}
B470001:L470001:{c.instructions+=1;NFSU2_TR(0x470001);
if(r1(R+518)){{goto L470017;}}
}
B470003:L470003:{c.instructions+=3;NFSU2_TR(0x470003);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470008:{NFSU2_TR(0x470008);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47000a:{NFSU2_TR(0x47000a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47000full));
TAIL_STATIC(0x4691c0u,469);
}
B47000f:L47000f:{c.instructions+=4;NFSU2_TR(0x47000f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470012:{NFSU2_TR(0x470012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470013:{NFSU2_TR(0x470013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470014:{NFSU2_TR(0x470014);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470017:L470017:{c.instructions+=4;NFSU2_TR(0x470017);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47001a:{NFSU2_TR(0x47001a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47001b:{NFSU2_TR(0x47001b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47001c:{NFSU2_TR(0x47001c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47001f:L47001f:{c.instructions+=4;NFSU2_TR(0x47001f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470022:{NFSU2_TR(0x470022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470023:{NFSU2_TR(0x470023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470024:{NFSU2_TR(0x470024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470030:L470030:{c.instructions+=12;NFSU2_TR(0x470030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470031:{NFSU2_TR(0x470031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470032:{NFSU2_TR(0x470032);
__builtin_memmove((R+24),(R+4),4);
}
B470034:{NFSU2_TR(0x470034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470037:{NFSU2_TR(0x470037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47003a:{NFSU2_TR(0x47003a);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47003d:{NFSU2_TR(0x47003d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470040:{NFSU2_TR(0x470040);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470046:{NFSU2_TR(0x470046);
{u32 ea_=u32(u32(7898648u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47004c:{NFSU2_TR(0x47004c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47004e:{NFSU2_TR(0x47004e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470051:{NFSU2_TR(0x470051);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4700d9;}}
}
B470057:L470057:{c.instructions+=3;NFSU2_TR(0x470057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47005d:{NFSU2_TR(0x47005d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47005f:{NFSU2_TR(0x47005f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4700d9;}}
}
B470061:L470061:{c.instructions+=3;NFSU2_TR(0x470061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470064:{NFSU2_TR(0x470064);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470066:{NFSU2_TR(0x470066);
if(r1(R+518)){{goto L470074;}}
}
B470068:L470068:{c.instructions+=3;NFSU2_TR(0x470068);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47006b:{NFSU2_TR(0x47006b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47006e:{NFSU2_TR(0x47006e);
if(r1(R+518)){{goto L4700d9;}}
}
B470070:L470070:{c.instructions+=2;NFSU2_TR(0x470070);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470072:{NFSU2_TR(0x470072);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4700d9;}}
}
B470074:L470074:{c.instructions+=7;NFSU2_TR(0x470074);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470077:{NFSU2_TR(0x470077);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47007b:{NFSU2_TR(0x47007b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47007e:{NFSU2_TR(0x47007e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470081:{NFSU2_TR(0x470081);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470084:{NFSU2_TR(0x470084);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470085:{NFSU2_TR(0x470085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47008aull));
TAIL_STATIC(0x5ecd30u,5ec);
}
B47008a:L47008a:{c.instructions+=5;NFSU2_TR(0x47008a);
{u32 ea_=u32(u32(7881372u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470090:{NFSU2_TR(0x470090);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470094:{NFSU2_TR(0x470094);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470096:{NFSU2_TR(0x470096);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470099:{NFSU2_TR(0x470099);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4700d9;}}
}
B47009b:L47009b:{c.instructions+=6;NFSU2_TR(0x47009b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47009e:{NFSU2_TR(0x47009e);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4700a1:{NFSU2_TR(0x4700a1);
{u32 ea_=u32(u32(7894428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4700a7:{NFSU2_TR(0x4700a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4700a9:{NFSU2_TR(0x4700a9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4700ac:{NFSU2_TR(0x4700ac);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4700d9;}}
}
B4700ae:L4700ae:{c.instructions+=6;NFSU2_TR(0x4700ae);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4700b1:{NFSU2_TR(0x4700b1);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4700b7:{NFSU2_TR(0x4700b7);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4700bd:{NFSU2_TR(0x4700bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4700bf:{NFSU2_TR(0x4700bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4700c2:{NFSU2_TR(0x4700c2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4700d9;}}
}
B4700c4:L4700c4:{c.instructions+=5;NFSU2_TR(0x4700c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4700c7:{NFSU2_TR(0x4700c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4700ca:{NFSU2_TR(0x4700ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4700cd:{NFSU2_TR(0x4700cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4700d1:{NFSU2_TR(0x4700d1);
if(r1(R+518)){{goto L4700de;}}
}
B4700d3:L4700d3:{c.instructions+=2;NFSU2_TR(0x4700d3);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4700d7:{NFSU2_TR(0x4700d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4700de;}}
}
B4700d9:L4700d9:{c.instructions+=4;NFSU2_TR(0x4700d9);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4700db:{NFSU2_TR(0x4700db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4700dc:{NFSU2_TR(0x4700dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4700dd:{NFSU2_TR(0x4700dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4700de:L4700de:{c.instructions+=4;NFSU2_TR(0x4700de);
w1(R+0,u8(0x1ull));
}
B4700e0:{NFSU2_TR(0x4700e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4700e1:{NFSU2_TR(0x4700e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4700e2:{NFSU2_TR(0x4700e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4700f0:L4700f0:{c.instructions+=3;NFSU2_TR(0x4700f0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4700f5:{NFSU2_TR(0x4700f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4700f6:{NFSU2_TR(0x4700f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4700fbull));
TAIL_STATIC(0x43e910u,43e);
}
B4700fb:L4700fb:{c.instructions+=3;NFSU2_TR(0x4700fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4700fe:{NFSU2_TR(0x4700fe);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x50cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B470103:{NFSU2_TR(0x470103);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47012d;}}
}
B470105:L470105:{c.instructions+=6;NFSU2_TR(0x470105);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47010b:{NFSU2_TR(0x47010b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47010e:{NFSU2_TR(0x47010e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B470114:{NFSU2_TR(0x470114);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470115:{NFSU2_TR(0x470115);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47011a:{NFSU2_TR(0x47011a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47011full));
TAIL_STATIC(0x440820u,440);
}
B47011f:L47011f:{c.instructions+=3;NFSU2_TR(0x47011f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B470122:{NFSU2_TR(0x470122);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470124:{NFSU2_TR(0x470124);
if(r1(R+518)){{goto L47012d;}}
}
B470126:L470126:{c.instructions+=2;NFSU2_TR(0x470126);
__builtin_memmove((R+4),(R+0),4);
}
B470128:{NFSU2_TR(0x470128);
TAIL_STATIC(0x45ce20u,45c);
}
B47012d:L47012d:{c.instructions+=2;NFSU2_TR(0x47012d);
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
B47012f:{NFSU2_TR(0x47012f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470130:L470130:{c.instructions+=3;NFSU2_TR(0x470130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470131:{NFSU2_TR(0x470131);
__builtin_memmove((R+24),(R+4),4);
}
B470133:{NFSU2_TR(0x470133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470138ull));
TAIL_STATIC(0x45cf40u,45c);
}
B470138:L470138:{c.instructions+=2;NFSU2_TR(0x470138);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B47013d:{NFSU2_TR(0x47013d);
if(r1(R+518)){{goto L470148;}}
}
B47013f:L47013f:{c.instructions+=2;NFSU2_TR(0x47013f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470140:{NFSU2_TR(0x470140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470145ull));
TAIL_STATIC(0x440540u,440);
}
B470145:L470145:{c.instructions+=1;NFSU2_TR(0x470145);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470148:L470148:{c.instructions+=3;NFSU2_TR(0x470148);
__builtin_memmove((R+0),(R+24),4);
}
B47014a:{NFSU2_TR(0x47014a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47014b:{NFSU2_TR(0x47014b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470150:L470150:{c.instructions+=7;NFSU2_TR(0x470150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470151:{NFSU2_TR(0x470151);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B470155:{NFSU2_TR(0x470155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470157:{NFSU2_TR(0x470157);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470158:{NFSU2_TR(0x470158);
__builtin_memmove((R+28),(R+4),4);
}
B47015a:{NFSU2_TR(0x47015a);
__builtin_memmove((R+4),(R+24),4);
}
B47015c:{NFSU2_TR(0x47015c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47015full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47015f:L47015f:{c.instructions+=5;NFSU2_TR(0x47015f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470161:{NFSU2_TR(0x470161);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B470164:{NFSU2_TR(0x470164);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B470169:{NFSU2_TR(0x470169);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47016c:{NFSU2_TR(0x47016c);
if(r1(R+518)){{goto L470198;}}
}
B47016e:L47016e:{c.instructions+=2;NFSU2_TR(0x47016e);
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
B47016f:{NFSU2_TR(0x47016f);
if(r1(R+518)){{goto L470190;}}
}
B470171:L470171:{c.instructions+=2;NFSU2_TR(0x470171);
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
B470172:{NFSU2_TR(0x470172);
if(r1(R+518)){{goto L470188;}}
}
B470174:L470174:{c.instructions+=3;NFSU2_TR(0x470174);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470179:{NFSU2_TR(0x470179);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47017b:{NFSU2_TR(0x47017b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470180ull));
TAIL_STATIC(0x4691c0u,469);
}
B470180:L470180:{c.instructions+=4;NFSU2_TR(0x470180);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470183:{NFSU2_TR(0x470183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470184:{NFSU2_TR(0x470184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470185:{NFSU2_TR(0x470185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470188:L470188:{c.instructions+=4;NFSU2_TR(0x470188);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47018b:{NFSU2_TR(0x47018b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47018c:{NFSU2_TR(0x47018c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47018d:{NFSU2_TR(0x47018d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470190:L470190:{c.instructions+=4;NFSU2_TR(0x470190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470193:{NFSU2_TR(0x470193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470194:{NFSU2_TR(0x470194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470195:{NFSU2_TR(0x470195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470198:L470198:{c.instructions+=4;NFSU2_TR(0x470198);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47019b:{NFSU2_TR(0x47019b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47019c:{NFSU2_TR(0x47019c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47019d:{NFSU2_TR(0x47019d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4701a0:L4701a0:{c.instructions+=19;NFSU2_TR(0x4701a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4701a3:{NFSU2_TR(0x4701a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4701a4:{NFSU2_TR(0x4701a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4701a5:{NFSU2_TR(0x4701a5);
__builtin_memmove((R+24),(R+4),4);
}
B4701a7:{NFSU2_TR(0x4701a7);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4701ad:{NFSU2_TR(0x4701ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4701b0:{NFSU2_TR(0x4701b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4701b6:{NFSU2_TR(0x4701b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4701bc:{NFSU2_TR(0x4701bc);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4701bf:{NFSU2_TR(0x4701bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4701c0:{NFSU2_TR(0x4701c0);
w4(R+12,u32(0x1ull));
}
B4701c5:{NFSU2_TR(0x4701c5);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4701c8:{NFSU2_TR(0x4701c8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4701ce:{NFSU2_TR(0x4701ce);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4701d4:{NFSU2_TR(0x4701d4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4701d8:{NFSU2_TR(0x4701d8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4701de:{NFSU2_TR(0x4701de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4701e0:{NFSU2_TR(0x4701e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4701e3:{NFSU2_TR(0x4701e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47023c;}}
}
B4701e5:L4701e5:{c.instructions+=6;NFSU2_TR(0x4701e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4701e9:{NFSU2_TR(0x4701e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4701ef:{NFSU2_TR(0x4701ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4701f3:{NFSU2_TR(0x4701f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4701f5:{NFSU2_TR(0x4701f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4701f8:{NFSU2_TR(0x4701f8);
if(r1(R+514)){{goto L470202;}}
}
B4701fa:L4701fa:{c.instructions+=2;NFSU2_TR(0x4701fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4701fc:{NFSU2_TR(0x4701fc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470202:L470202:{c.instructions+=5;NFSU2_TR(0x470202);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B470208:{NFSU2_TR(0x470208);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47020b:{NFSU2_TR(0x47020b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B470211:{NFSU2_TR(0x470211);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470213:{NFSU2_TR(0x470213);
if(r1(R+518)){{goto L470244;}}
}
B470215:L470215:{c.instructions+=13;NFSU2_TR(0x470215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470217:{NFSU2_TR(0x470217);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47021a:{NFSU2_TR(0x47021a);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47021d:{NFSU2_TR(0x47021d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B47021f:{NFSU2_TR(0x47021f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470222:{NFSU2_TR(0x470222);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470226:{NFSU2_TR(0x470226);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470229:{NFSU2_TR(0x470229);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47022c:{NFSU2_TR(0x47022c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B47022e:{NFSU2_TR(0x47022e);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470231:{NFSU2_TR(0x470231);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470235:{NFSU2_TR(0x470235);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470237:{NFSU2_TR(0x470237);
{goto L470344;}
}
B47023c:L47023c:{c.instructions+=2;NFSU2_TR(0x47023c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470242:{NFSU2_TR(0x470242);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x470202u);}goto L470202;}
}
B470244:L470244:{c.instructions+=4;NFSU2_TR(0x470244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470247:{NFSU2_TR(0x470247);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470249:{NFSU2_TR(0x470249);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47024c:{NFSU2_TR(0x47024c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470251ull));
TAIL_STATIC(0x5ecd70u,5ec);
}
B470251:L470251:{c.instructions+=2;NFSU2_TR(0x470251);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470253:{NFSU2_TR(0x470253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4702da;}}
}
B470259:L470259:{c.instructions+=4;NFSU2_TR(0x470259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47025c:{NFSU2_TR(0x47025c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47025f:{NFSU2_TR(0x47025f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470262:{NFSU2_TR(0x470262);
if(r1(R+518)){{goto L4702da;}}
}
B470264:L470264:{c.instructions+=2;NFSU2_TR(0x470264);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470266:{NFSU2_TR(0x470266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4702da;}}
}
B470268:L470268:{c.instructions+=4;NFSU2_TR(0x470268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47026b:{NFSU2_TR(0x47026b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470271:{NFSU2_TR(0x470271);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470273:{NFSU2_TR(0x470273);
if(r1(R+518)){{goto L4702b1;}}
}
B470275:L470275:{c.instructions+=2;NFSU2_TR(0x470275);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470277:{NFSU2_TR(0x470277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47027b;}}
}
B470279:L470279:{c.instructions+=1;NFSU2_TR(0x470279);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47027b:L47027b:{c.instructions+=3;NFSU2_TR(0x47027b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47027e:{NFSU2_TR(0x47027e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B470284:{NFSU2_TR(0x470284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470286:L470286:{c.instructions+=11;NFSU2_TR(0x470286);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470289:{NFSU2_TR(0x470289);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47028c:{NFSU2_TR(0x47028c);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470292:{NFSU2_TR(0x470292);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470295:{NFSU2_TR(0x470295);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470299:{NFSU2_TR(0x470299);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47029c:{NFSU2_TR(0x47029c);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47029f:{NFSU2_TR(0x47029f);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4702a5:{NFSU2_TR(0x4702a5);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4702a8:{NFSU2_TR(0x4702a8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4702ac:{NFSU2_TR(0x4702ac);
{goto L470344;}
}
B4702b1:L4702b1:{c.instructions+=8;NFSU2_TR(0x4702b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4702b4:{NFSU2_TR(0x4702b4);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4702b7:{NFSU2_TR(0x4702b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B4702bd:{NFSU2_TR(0x4702bd);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4702c3:{NFSU2_TR(0x4702c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4702c5:{NFSU2_TR(0x4702c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4702c8:{NFSU2_TR(0x4702c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4702ca:{NFSU2_TR(0x4702ca);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x470286u);}goto L470286;}}
}
B4702cc:L4702cc:{c.instructions+=4;NFSU2_TR(0x4702cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4702cf:{NFSU2_TR(0x4702cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4702d2:{NFSU2_TR(0x4702d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4702d8:{NFSU2_TR(0x4702d8);
{goto L47033c;}
}
B4702da:L4702da:{c.instructions+=5;NFSU2_TR(0x4702da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4702dd:{NFSU2_TR(0x4702dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4702e0:{NFSU2_TR(0x4702e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B4702e3:{NFSU2_TR(0x4702e3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4702e6:{NFSU2_TR(0x4702e6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47032b;}}
}
B4702e8:L4702e8:{c.instructions+=1;NFSU2_TR(0x4702e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x470520ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4702ef:L4702ef:{c.instructions+=6;NFSU2_TR(0x4702ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4702f2:{NFSU2_TR(0x4702f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4702f5:{NFSU2_TR(0x4702f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4702f7:{NFSU2_TR(0x4702f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4702fd:{NFSU2_TR(0x4702fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4702ff:{NFSU2_TR(0x4702ff);
if(r1(R+518)){{goto L470336;}}
}
B470301:L470301:{c.instructions+=12;NFSU2_TR(0x470301);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470304:{NFSU2_TR(0x470304);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470306:{NFSU2_TR(0x470306);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470309:{NFSU2_TR(0x470309);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47030f:{NFSU2_TR(0x47030f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470312:{NFSU2_TR(0x470312);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470316:{NFSU2_TR(0x470316);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470319:{NFSU2_TR(0x470319);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47031c:{NFSU2_TR(0x47031c);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470322:{NFSU2_TR(0x470322);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470325:{NFSU2_TR(0x470325);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470329:{NFSU2_TR(0x470329);
{goto L470344;}
}
B47032b:L47032b:{c.instructions+=3;NFSU2_TR(0x47032b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47032e:{NFSU2_TR(0x47032e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B470334:{NFSU2_TR(0x470334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470336:L470336:{c.instructions+=2;NFSU2_TR(0x470336);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470339:{NFSU2_TR(0x470339);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47033c:L47033c:{c.instructions+=2;NFSU2_TR(0x47033c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470340:{NFSU2_TR(0x470340);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470344:L470344:{c.instructions+=8;NFSU2_TR(0x470344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B470346:{NFSU2_TR(0x470346);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B470349:{NFSU2_TR(0x470349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47034c:{NFSU2_TR(0x47034c);
__builtin_memmove((R+8),gp(0x7885d8),4);
}
B470352:{NFSU2_TR(0x470352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470354:{NFSU2_TR(0x470354);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470358:{NFSU2_TR(0x470358);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47035c:{NFSU2_TR(0x47035c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47035full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47035f:L47035f:{c.instructions+=9;NFSU2_TR(0x47035f);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B470362:{NFSU2_TR(0x470362);
{u32 ea_=u32(u32(7898584u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B470368:{NFSU2_TR(0x470368);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B47036a:{NFSU2_TR(0x47036a);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470370:{NFSU2_TR(0x470370);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B470373:{NFSU2_TR(0x470373);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B470377:{NFSU2_TR(0x470377);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470379:{NFSU2_TR(0x470379);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47037c:{NFSU2_TR(0x47037c);
if(r1(R+518)){{goto L470384;}}
}
B47037e:L47037e:{c.instructions+=2;NFSU2_TR(0x47037e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470380:{NFSU2_TR(0x470380);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470384:L470384:{c.instructions+=5;NFSU2_TR(0x470384);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470388:{NFSU2_TR(0x470388);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B47038a:{NFSU2_TR(0x47038a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47038c:{NFSU2_TR(0x47038c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47038f:{NFSU2_TR(0x47038f);
if(r1(R+514)){{goto L470397;}}
}
B470391:L470391:{c.instructions+=2;NFSU2_TR(0x470391);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470393:{NFSU2_TR(0x470393);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470397:L470397:{c.instructions+=7;NFSU2_TR(0x470397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47039a:{NFSU2_TR(0x47039a);
{u32 ea_=u32(r4(R+4)+u32(312u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4703a0:{NFSU2_TR(0x4703a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4703a4:{NFSU2_TR(0x4703a4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4703a6:{NFSU2_TR(0x4703a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4703a8:{NFSU2_TR(0x4703a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4703ab:{NFSU2_TR(0x4703ab);
if(r1(R+514)){{goto L4703b3;}}
}
B4703ad:L4703ad:{c.instructions+=2;NFSU2_TR(0x4703ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4703af:{NFSU2_TR(0x4703af);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4703b3:L4703b3:{c.instructions+=3;NFSU2_TR(0x4703b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4703b5:{NFSU2_TR(0x4703b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4703bc:{NFSU2_TR(0x4703bc);
if(r1(R+518)){{goto L470494;}}
}
B4703c2:L4703c2:{c.instructions+=9;NFSU2_TR(0x4703c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4703c8:{NFSU2_TR(0x4703c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4703cc:{NFSU2_TR(0x4703cc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4703d0:{NFSU2_TR(0x4703d0);
{u32 ea_=u32(u32(7898652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4703d6:{NFSU2_TR(0x4703d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4703da:{NFSU2_TR(0x4703da);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4703dc:{NFSU2_TR(0x4703dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4703de:{NFSU2_TR(0x4703de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4703e1:{NFSU2_TR(0x4703e1);
if(r1(R+518)){{goto L470402;}}
}
B4703e3:L4703e3:{c.instructions+=8;NFSU2_TR(0x4703e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4703e5:{NFSU2_TR(0x4703e5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4703e9:{NFSU2_TR(0x4703e9);
{u32 ea_=u32(u32(7898652u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4703ef:{NFSU2_TR(0x4703ef);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4703f3:{NFSU2_TR(0x4703f3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4703f5:{NFSU2_TR(0x4703f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4703f7:{NFSU2_TR(0x4703f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4703fa:{NFSU2_TR(0x4703fa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L470402;}}
}
B4703fc:L4703fc:{c.instructions+=2;NFSU2_TR(0x4703fc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4703fe:{NFSU2_TR(0x4703fe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470402:L470402:{c.instructions+=10;NFSU2_TR(0x470402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470408:{NFSU2_TR(0x470408);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47040e:{NFSU2_TR(0x47040e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470412:{NFSU2_TR(0x470412);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470416:{NFSU2_TR(0x470416);
{u32 ea_=u32(u32(7898652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47041c:{NFSU2_TR(0x47041c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470420:{NFSU2_TR(0x470420);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470422:{NFSU2_TR(0x470422);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470424:{NFSU2_TR(0x470424);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470427:{NFSU2_TR(0x470427);
if(r1(R+518)){{goto L470448;}}
}
B470429:L470429:{c.instructions+=8;NFSU2_TR(0x470429);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47042b:{NFSU2_TR(0x47042b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47042f:{NFSU2_TR(0x47042f);
{u32 ea_=u32(u32(7898652u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470435:{NFSU2_TR(0x470435);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470439:{NFSU2_TR(0x470439);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B47043b:{NFSU2_TR(0x47043b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47043d:{NFSU2_TR(0x47043d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470440:{NFSU2_TR(0x470440);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L470448;}}
}
B470442:L470442:{c.instructions+=2;NFSU2_TR(0x470442);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470444:{NFSU2_TR(0x470444);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470448:L470448:{c.instructions+=10;NFSU2_TR(0x470448);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47044e:{NFSU2_TR(0x47044e);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470454:{NFSU2_TR(0x470454);
{u32 ea_=u32(u32(7898660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47045a:{NFSU2_TR(0x47045a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B47045c:{NFSU2_TR(0x47045c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470460:{NFSU2_TR(0x470460);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B470462:{NFSU2_TR(0x470462);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470466:{NFSU2_TR(0x470466);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470468:{NFSU2_TR(0x470468);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47046b:{NFSU2_TR(0x47046b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470477;}}
}
B47046d:L47046d:{c.instructions+=4;NFSU2_TR(0x47046d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47046f:{NFSU2_TR(0x47046f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470471:{NFSU2_TR(0x470471);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470475:{NFSU2_TR(0x470475);
{goto L4704a8;}
}
B470477:L470477:{c.instructions+=6;NFSU2_TR(0x470477);
{u32 ea_=u32(u32(7898660u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47047d:{NFSU2_TR(0x47047d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470481:{NFSU2_TR(0x470481);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B470485:{NFSU2_TR(0x470485);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470487:{NFSU2_TR(0x470487);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47048a:{NFSU2_TR(0x47048a);
if(r1(R+514)){{goto L4704a8;}}
}
B47048c:L47048c:{c.instructions+=3;NFSU2_TR(0x47048c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47048e:{NFSU2_TR(0x47048e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470492:{NFSU2_TR(0x470492);
{goto L4704a8;}
}
B470494:L470494:{c.instructions+=4;NFSU2_TR(0x470494);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470498:{NFSU2_TR(0x470498);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47049c:{NFSU2_TR(0x47049c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4704a2:{NFSU2_TR(0x4704a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4704a8:L4704a8:{c.instructions+=9;NFSU2_TR(0x4704a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4704ab:{NFSU2_TR(0x4704ab);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4704b1:{NFSU2_TR(0x4704b1);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4704b7:{NFSU2_TR(0x4704b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4704bd:{NFSU2_TR(0x4704bd);
{u32 ea_=u32(u32(7908020u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4704c3:{NFSU2_TR(0x4704c3);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4704c6:{NFSU2_TR(0x4704c6);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4704cc:{NFSU2_TR(0x4704cc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4704ce:{NFSU2_TR(0x4704ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4704d3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4704d3:L4704d3:{c.instructions+=6;NFSU2_TR(0x4704d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4704d6:{NFSU2_TR(0x4704d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4704dc:{NFSU2_TR(0x4704dc);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4704df:{NFSU2_TR(0x4704df);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4704e5:{NFSU2_TR(0x4704e5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4704e7:{NFSU2_TR(0x4704e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4704ecull));
TAIL_STATIC(0x75bed4u,75b);
}
B4704ec:L4704ec:{c.instructions+=6;NFSU2_TR(0x4704ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4704f2:{NFSU2_TR(0x4704f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4704fc:{NFSU2_TR(0x4704fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470502:{NFSU2_TR(0x470502);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B470505:{NFSU2_TR(0x470505);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B470507:{NFSU2_TR(0x470507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47050cull));
TAIL_STATIC(0x75bed4u,75b);
}
B47050c:L47050c:{c.instructions+=7;NFSU2_TR(0x47050c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47050e:{NFSU2_TR(0x47050e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47050f:{NFSU2_TR(0x47050f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470515:{NFSU2_TR(0x470515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470516:{NFSU2_TR(0x470516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B470517:{NFSU2_TR(0x470517);
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
B47051a:{NFSU2_TR(0x47051a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470540:L470540:{c.instructions+=22;NFSU2_TR(0x470540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B470543:{NFSU2_TR(0x470543);
__builtin_memmove((R+0),gp(0x78861c),4);
}
B470548:{NFSU2_TR(0x470548);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470549:{NFSU2_TR(0x470549);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47054a:{NFSU2_TR(0x47054a);
__builtin_memmove((R+24),(R+4),4);
}
B47054c:{NFSU2_TR(0x47054c);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470552:{NFSU2_TR(0x470552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470555:{NFSU2_TR(0x470555);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470559:{NFSU2_TR(0x470559);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47055f:{NFSU2_TR(0x47055f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B470561:{NFSU2_TR(0x470561);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470564:{NFSU2_TR(0x470564);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470565:{NFSU2_TR(0x470565);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B470567:{NFSU2_TR(0x470567);
w1(R+12,u8(0x1ull));
}
B470569:{NFSU2_TR(0x470569);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B47056c:{NFSU2_TR(0x47056c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B470572:{NFSU2_TR(0x470572);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B470578:{NFSU2_TR(0x470578);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47057c:{NFSU2_TR(0x47057c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470582:{NFSU2_TR(0x470582);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470584:{NFSU2_TR(0x470584);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470587:{NFSU2_TR(0x470587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47064a;}}
}
B47058d:L47058d:{c.instructions+=6;NFSU2_TR(0x47058d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470591:{NFSU2_TR(0x470591);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470597:{NFSU2_TR(0x470597);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47059b:{NFSU2_TR(0x47059b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47059d:{NFSU2_TR(0x47059d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4705a0:{NFSU2_TR(0x4705a0);
if(r1(R+514)){{goto L4705aa;}}
}
B4705a2:L4705a2:{c.instructions+=2;NFSU2_TR(0x4705a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4705a4:{NFSU2_TR(0x4705a4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4705aa:L4705aa:{c.instructions+=11;NFSU2_TR(0x4705aa);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4705b0:{NFSU2_TR(0x4705b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4705b6:{NFSU2_TR(0x4705b6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4705b9:{NFSU2_TR(0x4705b9);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4705bc:{NFSU2_TR(0x4705bc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4705c2:{NFSU2_TR(0x4705c2);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4705c8:{NFSU2_TR(0x4705c8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4705cc:{NFSU2_TR(0x4705cc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4705d2:{NFSU2_TR(0x4705d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4705d4:{NFSU2_TR(0x4705d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4705d7:{NFSU2_TR(0x4705d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470655;}}
}
B4705d9:L4705d9:{c.instructions+=6;NFSU2_TR(0x4705d9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4705dd:{NFSU2_TR(0x4705dd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4705e3:{NFSU2_TR(0x4705e3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4705e7:{NFSU2_TR(0x4705e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4705e9:{NFSU2_TR(0x4705e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4705ec:{NFSU2_TR(0x4705ec);
if(r1(R+514)){{goto L4705f6;}}
}
B4705ee:L4705ee:{c.instructions+=2;NFSU2_TR(0x4705ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4705f0:{NFSU2_TR(0x4705f0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4705f6:L4705f6:{c.instructions+=5;NFSU2_TR(0x4705f6);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4705fc:{NFSU2_TR(0x4705fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4705ff:{NFSU2_TR(0x4705ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B470605:{NFSU2_TR(0x470605);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470607:{NFSU2_TR(0x470607);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470691;}}
}
B47060d:L47060d:{c.instructions+=3;NFSU2_TR(0x47060d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470610:{NFSU2_TR(0x470610);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470613:{NFSU2_TR(0x470613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470618ull));
TAIL_STATIC(0x5ecd70u,5ec);
}
B470618:L470618:{c.instructions+=2;NFSU2_TR(0x470618);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47061a:{NFSU2_TR(0x47061a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470677;}}
}
B47061c:L47061c:{c.instructions+=4;NFSU2_TR(0x47061c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47061f:{NFSU2_TR(0x47061f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470622:{NFSU2_TR(0x470622);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470625:{NFSU2_TR(0x470625);
if(r1(R+518)){{goto L470677;}}
}
B470627:L470627:{c.instructions+=2;NFSU2_TR(0x470627);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470629:{NFSU2_TR(0x470629);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470677;}}
}
B47062b:L47062b:{c.instructions+=4;NFSU2_TR(0x47062b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47062e:{NFSU2_TR(0x47062e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470634:{NFSU2_TR(0x470634);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470636:{NFSU2_TR(0x470636);
if(r1(R+518)){{goto L47065d;}}
}
B470638:L470638:{c.instructions+=2;NFSU2_TR(0x470638);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47063b:{NFSU2_TR(0x47063b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47063f;}}
}
B47063d:L47063d:{c.instructions+=1;NFSU2_TR(0x47063d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B47063f:L47063f:{c.instructions+=3;NFSU2_TR(0x47063f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470642:{NFSU2_TR(0x470642);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470648:{NFSU2_TR(0x470648);
{goto L470697;}
}
B47064a:L47064a:{c.instructions+=2;NFSU2_TR(0x47064a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470650:{NFSU2_TR(0x470650);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4705aau);}goto L4705aa;}
}
B470655:L470655:{c.instructions+=2;NFSU2_TR(0x470655);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47065b:{NFSU2_TR(0x47065b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4705f6u);}goto L4705f6;}
}
B47065d:L47065d:{c.instructions+=4;NFSU2_TR(0x47065d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470660:{NFSU2_TR(0x470660);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B470663:{NFSU2_TR(0x470663);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470665:{NFSU2_TR(0x470665);
if(r1(R+518)){{goto L47066f;}}
}
B470667:L470667:{c.instructions+=2;NFSU2_TR(0x470667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47066d:{NFSU2_TR(0x47066d);
{goto L470697;}
}
B47066f:L47066f:{c.instructions+=2;NFSU2_TR(0x47066f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470675:{NFSU2_TR(0x470675);
{goto L4706f6;}
}
B470677:L470677:{c.instructions+=5;NFSU2_TR(0x470677);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47067a:{NFSU2_TR(0x47067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47067d:{NFSU2_TR(0x47067d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B470680:{NFSU2_TR(0x470680);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470683:{NFSU2_TR(0x470683);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4706ed;}}
}
B470685:L470685:{c.instructions+=1;NFSU2_TR(0x470685);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x470924ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47068c:L47068c:{c.instructions+=2;NFSU2_TR(0x47068c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B47068e:{NFSU2_TR(0x47068e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470691:L470691:{c.instructions+=1;NFSU2_TR(0x470691);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470697:L470697:{c.instructions+=9;NFSU2_TR(0x470697);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47069a:{NFSU2_TR(0x47069a);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47069d:{NFSU2_TR(0x47069d);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4706a3:{NFSU2_TR(0x4706a3);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4706a6:{NFSU2_TR(0x4706a6);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4706a9:{NFSU2_TR(0x4706a9);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4706ac:{NFSU2_TR(0x4706ac);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4706b2:{NFSU2_TR(0x4706b2);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4706b5:{NFSU2_TR(0x4706b5);
{goto L470714;}
}
B4706b7:L4706b7:{c.instructions+=14;NFSU2_TR(0x4706b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4706ba:{NFSU2_TR(0x4706ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4706bd:{NFSU2_TR(0x4706bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4706bf:{NFSU2_TR(0x4706bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4706c5:{NFSU2_TR(0x4706c5);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4706c8:{NFSU2_TR(0x4706c8);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4706cb:{NFSU2_TR(0x4706cb);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4706d1:{NFSU2_TR(0x4706d1);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4706d4:{NFSU2_TR(0x4706d4);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4706d7:{NFSU2_TR(0x4706d7);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4706da:{NFSU2_TR(0x4706da);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4706e0:{NFSU2_TR(0x4706e0);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4706e3:{NFSU2_TR(0x4706e3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4706e7:{NFSU2_TR(0x4706e7);
if(r1(R+518)){{goto L470718;}}
}
B4706e9:L4706e9:{c.instructions+=2;NFSU2_TR(0x4706e9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4706eb:{NFSU2_TR(0x4706eb);
{goto L470718;}
}
B4706ed:L4706ed:{c.instructions+=2;NFSU2_TR(0x4706ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4706f0:{NFSU2_TR(0x4706f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4706f6:L4706f6:{c.instructions+=8;NFSU2_TR(0x4706f6);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4706f9:{NFSU2_TR(0x4706f9);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4706fc:{NFSU2_TR(0x4706fc);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470702:{NFSU2_TR(0x470702);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470705:{NFSU2_TR(0x470705);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470708:{NFSU2_TR(0x470708);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47070b:{NFSU2_TR(0x47070b);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470711:{NFSU2_TR(0x470711);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470714:L470714:{c.instructions+=1;NFSU2_TR(0x470714);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470718:L470718:{c.instructions+=3;NFSU2_TR(0x470718);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47071a:{NFSU2_TR(0x47071a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B470721:{NFSU2_TR(0x470721);
if(r1(R+518)){{goto L4707b1;}}
}
B470727:L470727:{c.instructions+=9;NFSU2_TR(0x470727);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47072d:{NFSU2_TR(0x47072d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470731:{NFSU2_TR(0x470731);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B470733:{NFSU2_TR(0x470733);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470737:{NFSU2_TR(0x470737);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B470739:{NFSU2_TR(0x470739);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47073d:{NFSU2_TR(0x47073d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47073f:{NFSU2_TR(0x47073f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470742:{NFSU2_TR(0x470742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47074e;}}
}
B470744:L470744:{c.instructions+=4;NFSU2_TR(0x470744);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470746:{NFSU2_TR(0x470746);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470748:{NFSU2_TR(0x470748);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47074c:{NFSU2_TR(0x47074c);
{goto L470767;}
}
B47074e:L47074e:{c.instructions+=6;NFSU2_TR(0x47074e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470752:{NFSU2_TR(0x470752);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470756:{NFSU2_TR(0x470756);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47075a:{NFSU2_TR(0x47075a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47075c:{NFSU2_TR(0x47075c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47075f:{NFSU2_TR(0x47075f);
if(r1(R+514)){{goto L470767;}}
}
B470761:L470761:{c.instructions+=2;NFSU2_TR(0x470761);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470763:{NFSU2_TR(0x470763);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470767:L470767:{c.instructions+=10;NFSU2_TR(0x470767);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47076d:{NFSU2_TR(0x47076d);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470773:{NFSU2_TR(0x470773);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470777:{NFSU2_TR(0x470777);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47077b:{NFSU2_TR(0x47077b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47077f:{NFSU2_TR(0x47077f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470783:{NFSU2_TR(0x470783);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470785:{NFSU2_TR(0x470785);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470787:{NFSU2_TR(0x470787);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47078a:{NFSU2_TR(0x47078a);
if(r1(R+518)){{goto L4707a9;}}
}
B47078c:L47078c:{c.instructions+=8;NFSU2_TR(0x47078c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47078e:{NFSU2_TR(0x47078e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470792:{NFSU2_TR(0x470792);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470796:{NFSU2_TR(0x470796);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47079a:{NFSU2_TR(0x47079a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B47079c:{NFSU2_TR(0x47079c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47079e:{NFSU2_TR(0x47079e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4707a1:{NFSU2_TR(0x4707a1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4707a9;}}
}
B4707a3:L4707a3:{c.instructions+=2;NFSU2_TR(0x4707a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4707a5:{NFSU2_TR(0x4707a5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4707a9:L4707a9:{c.instructions+=2;NFSU2_TR(0x4707a9);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4707af:{NFSU2_TR(0x4707af);
{goto L4707c1;}
}
B4707b1:L4707b1:{c.instructions+=3;NFSU2_TR(0x4707b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4707b5:{NFSU2_TR(0x4707b5);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4707bb:{NFSU2_TR(0x4707bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4707c1:L4707c1:{c.instructions+=7;NFSU2_TR(0x4707c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4707c4:{NFSU2_TR(0x4707c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4707ca:{NFSU2_TR(0x4707ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4707cb:{NFSU2_TR(0x4707cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4707d1:{NFSU2_TR(0x4707d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4707d5:{NFSU2_TR(0x4707d5);
__builtin_memmove((R+28),(R+8),4);
}
B4707d7:{NFSU2_TR(0x4707d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4707dcull));
TAIL_STATIC(0x576790u,576);
}
B4707dc:L4707dc:{c.instructions+=4;NFSU2_TR(0x4707dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4707e0:{NFSU2_TR(0x4707e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4707e2:{NFSU2_TR(0x4707e2);
__builtin_memmove((R+4),(R+28),4);
}
B4707e4:{NFSU2_TR(0x4707e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4707e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4707e7:L4707e7:{c.instructions+=7;NFSU2_TR(0x4707e7);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4707ed:{NFSU2_TR(0x4707ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4707ef:{NFSU2_TR(0x4707ef);
__builtin_memmove((R+4),(R+28),4);
}
B4707f1:{NFSU2_TR(0x4707f1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4707f7:{NFSU2_TR(0x4707f7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4707fb:{NFSU2_TR(0x4707fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4707ff:{NFSU2_TR(0x4707ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470802ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B470802:L470802:{c.instructions+=21;NFSU2_TR(0x470802);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470808:{NFSU2_TR(0x470808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47080b:{NFSU2_TR(0x47080b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47080e:{NFSU2_TR(0x47080e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470812:{NFSU2_TR(0x470812);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B470814:{NFSU2_TR(0x470814);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47081a:{NFSU2_TR(0x47081a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470820:{NFSU2_TR(0x470820);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B470822:{NFSU2_TR(0x470822);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B470824:{NFSU2_TR(0x470824);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47082a:{NFSU2_TR(0x47082a);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470830:{NFSU2_TR(0x470830);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470836:{NFSU2_TR(0x470836);
{u32 ea_=u32(r4(R+4)+u32(312u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47083c:{NFSU2_TR(0x47083c);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470842:{NFSU2_TR(0x470842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B470844:{NFSU2_TR(0x470844);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47084a:{NFSU2_TR(0x47084a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B470850:{NFSU2_TR(0x470850);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B470856:{NFSU2_TR(0x470856);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47085c:{NFSU2_TR(0x47085c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470860:{NFSU2_TR(0x470860);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470863ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B470863:L470863:{c.instructions+=7;NFSU2_TR(0x470863);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470866:{NFSU2_TR(0x470866);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B470869:{NFSU2_TR(0x470869);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B47086b:{NFSU2_TR(0x47086b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47086f:{NFSU2_TR(0x47086f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B470873:{NFSU2_TR(0x470873);
{u32 ea_=u32(u32(7881572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470879:{NFSU2_TR(0x470879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47087eull));
TAIL_STATIC(0x75bed4u,75b);
}
B47087e:L47087e:{c.instructions+=7;NFSU2_TR(0x47087e);
__builtin_memmove((R+4),(R+12),4);
}
B470880:{NFSU2_TR(0x470880);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B470882:{NFSU2_TR(0x470882);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470886:{NFSU2_TR(0x470886);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47088a:{NFSU2_TR(0x47088a);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470890:{NFSU2_TR(0x470890);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470894:{NFSU2_TR(0x470894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470899ull));
TAIL_STATIC(0x75bed4u,75b);
}
B470899:L470899:{c.instructions+=6;NFSU2_TR(0x470899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47089c:{NFSU2_TR(0x47089c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47089f:{NFSU2_TR(0x47089f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4708a2:{NFSU2_TR(0x4708a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4708a4:{NFSU2_TR(0x4708a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4708aa:{NFSU2_TR(0x4708aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4708adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4708ad:L4708ad:{c.instructions+=5;NFSU2_TR(0x4708ad);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B4708b0:{NFSU2_TR(0x4708b0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4708b4:{NFSU2_TR(0x4708b4);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4708ba:{NFSU2_TR(0x4708ba);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4708c0:{NFSU2_TR(0x4708c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4708c5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4708c5:L4708c5:{c.instructions+=6;NFSU2_TR(0x4708c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4708c8:{NFSU2_TR(0x4708c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4708ce:{NFSU2_TR(0x4708ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4708d4:{NFSU2_TR(0x4708d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4708d7:{NFSU2_TR(0x4708d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4708d9:{NFSU2_TR(0x4708d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4708dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4708dc:L4708dc:{c.instructions+=6;NFSU2_TR(0x4708dc);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4708e2:{NFSU2_TR(0x4708e2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4708e8:{NFSU2_TR(0x4708e8);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B4708eb:{NFSU2_TR(0x4708eb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4708ef:{NFSU2_TR(0x4708ef);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4708f5:{NFSU2_TR(0x4708f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4708faull));
TAIL_STATIC(0x75bed4u,75b);
}
B4708fa:L4708fa:{c.instructions+=6;NFSU2_TR(0x4708fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470900:{NFSU2_TR(0x470900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470903:{NFSU2_TR(0x470903);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470909:{NFSU2_TR(0x470909);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47090c:{NFSU2_TR(0x47090c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470910:{NFSU2_TR(0x470910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470915ull));
TAIL_STATIC(0x75bed4u,75b);
}
B470915:L470915:{c.instructions+=6;NFSU2_TR(0x470915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470916:{NFSU2_TR(0x470916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47091c:{NFSU2_TR(0x47091c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47091d:{NFSU2_TR(0x47091d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47091e:{NFSU2_TR(0x47091e);
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
B470921:{NFSU2_TR(0x470921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470940:L470940:{c.instructions+=12;NFSU2_TR(0x470940);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470941:{NFSU2_TR(0x470941);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470942:{NFSU2_TR(0x470942);
__builtin_memmove((R+24),(R+4),4);
}
B470944:{NFSU2_TR(0x470944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470947:{NFSU2_TR(0x470947);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47094a:{NFSU2_TR(0x47094a);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470950:{NFSU2_TR(0x470950);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B470952:{NFSU2_TR(0x470952);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470958:{NFSU2_TR(0x470958);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47095e:{NFSU2_TR(0x47095e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470960:{NFSU2_TR(0x470960);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470963:{NFSU2_TR(0x470963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4709dd;}}
}
B470965:L470965:{c.instructions+=6;NFSU2_TR(0x470965);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47096b:{NFSU2_TR(0x47096b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B47096d:{NFSU2_TR(0x47096d);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470973:{NFSU2_TR(0x470973);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470975:{NFSU2_TR(0x470975);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470978:{NFSU2_TR(0x470978);
if(r1(R+514)){{goto L4709dd;}}
}
B47097a:L47097a:{c.instructions+=6;NFSU2_TR(0x47097a);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47097d:{NFSU2_TR(0x47097d);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470983:{NFSU2_TR(0x470983);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470986:{NFSU2_TR(0x470986);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470988:{NFSU2_TR(0x470988);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47098b:{NFSU2_TR(0x47098b);
if(r1(R+514)){{goto L4709c0;}}
}
B47098d:L47098d:{c.instructions+=3;NFSU2_TR(0x47098d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B470995:{NFSU2_TR(0x470995);
w1(R+12,u8(0x1ull));
}
B470997:{NFSU2_TR(0x470997);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4709b9;}}
}
B470999:L470999:{c.instructions+=2;NFSU2_TR(0x470999);
u8 U[4];
w4(U+0,u32(0x96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47099e:{NFSU2_TR(0x47099e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4709a3ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4709a3:L4709a3:{c.instructions+=5;NFSU2_TR(0x4709a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4709a6:{NFSU2_TR(0x4709a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B4709a9:{NFSU2_TR(0x4709a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4709b0:{NFSU2_TR(0x4709b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4709b3:{NFSU2_TR(0x4709b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x152ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4709b9:L4709b9:{c.instructions+=1;NFSU2_TR(0x4709b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B4709c0:L4709c0:{c.instructions+=7;NFSU2_TR(0x4709c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4709c3:{NFSU2_TR(0x4709c3);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B4709c5:{NFSU2_TR(0x4709c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3d7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4709cb:{NFSU2_TR(0x4709cb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4709cd:{NFSU2_TR(0x4709cd);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B4709d3:{NFSU2_TR(0x4709d3);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4709d5:{NFSU2_TR(0x4709d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4709e5;}}
}
B4709d7:L4709d7:{c.instructions+=4;NFSU2_TR(0x4709d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4709da:{NFSU2_TR(0x4709da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4709db:{NFSU2_TR(0x4709db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4709dc:{NFSU2_TR(0x4709dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4709dd:L4709dd:{c.instructions+=3;NFSU2_TR(0x4709dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4709e0:{NFSU2_TR(0x4709e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4709e3:{NFSU2_TR(0x4709e3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4709c0u);}goto L4709c0;}
}
B4709e5:L4709e5:{c.instructions+=3;NFSU2_TR(0x4709e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff3cull))));
}
B4709ea:{NFSU2_TR(0x4709ea);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4709ec:{NFSU2_TR(0x4709ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4709f4;}}
}
B4709ee:L4709ee:{c.instructions+=4;NFSU2_TR(0x4709ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4709f1:{NFSU2_TR(0x4709f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4709f2:{NFSU2_TR(0x4709f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4709f3:{NFSU2_TR(0x4709f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4709f4:L4709f4:{c.instructions+=4;NFSU2_TR(0x4709f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4709f7:{NFSU2_TR(0x4709f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4709f8:{NFSU2_TR(0x4709f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4709f9:{NFSU2_TR(0x4709f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470a00:L470a00:{c.instructions+=3;NFSU2_TR(0x470a00);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B470a05:{NFSU2_TR(0x470a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a06:{NFSU2_TR(0x470a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470a0bull));
TAIL_STATIC(0x43e910u,43e);
}
B470a0b:L470a0b:{c.instructions+=3;NFSU2_TR(0x470a0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B470a0e:{NFSU2_TR(0x470a0e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4f4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4f4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B470a13:{NFSU2_TR(0x470a13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L470a3d;}}
}
B470a15:L470a15:{c.instructions+=6;NFSU2_TR(0x470a15);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B470a1b:{NFSU2_TR(0x470a1b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B470a1e:{NFSU2_TR(0x470a1e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B470a24:{NFSU2_TR(0x470a24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a25:{NFSU2_TR(0x470a25);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a2a:{NFSU2_TR(0x470a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470a2full));
TAIL_STATIC(0x440820u,440);
}
B470a2f:L470a2f:{c.instructions+=3;NFSU2_TR(0x470a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B470a32:{NFSU2_TR(0x470a32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470a34:{NFSU2_TR(0x470a34);
if(r1(R+518)){{goto L470a3d;}}
}
B470a36:L470a36:{c.instructions+=2;NFSU2_TR(0x470a36);
__builtin_memmove((R+4),(R+0),4);
}
B470a38:{NFSU2_TR(0x470a38);
TAIL_STATIC(0x45d210u,45d);
}
B470a3d:L470a3d:{c.instructions+=2;NFSU2_TR(0x470a3d);
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
B470a3f:{NFSU2_TR(0x470a3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470a40:L470a40:{c.instructions+=3;NFSU2_TR(0x470a40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a41:{NFSU2_TR(0x470a41);
__builtin_memmove((R+24),(R+4),4);
}
B470a43:{NFSU2_TR(0x470a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470a48ull));
TAIL_STATIC(0x45d310u,45d);
}
B470a48:L470a48:{c.instructions+=2;NFSU2_TR(0x470a48);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B470a4d:{NFSU2_TR(0x470a4d);
if(r1(R+518)){{goto L470a58;}}
}
B470a4f:L470a4f:{c.instructions+=2;NFSU2_TR(0x470a4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a50:{NFSU2_TR(0x470a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470a55ull));
TAIL_STATIC(0x440540u,440);
}
B470a55:L470a55:{c.instructions+=1;NFSU2_TR(0x470a55);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470a58:L470a58:{c.instructions+=3;NFSU2_TR(0x470a58);
__builtin_memmove((R+0),(R+24),4);
}
B470a5a:{NFSU2_TR(0x470a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470a5b:{NFSU2_TR(0x470a5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470a60:L470a60:{c.instructions+=14;NFSU2_TR(0x470a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B470a63:{NFSU2_TR(0x470a63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a64:{NFSU2_TR(0x470a64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a65:{NFSU2_TR(0x470a65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a66:{NFSU2_TR(0x470a66);
__builtin_memmove((R+24),(R+4),4);
}
B470a68:{NFSU2_TR(0x470a68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470a69:{NFSU2_TR(0x470a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B470a6c:{NFSU2_TR(0x470a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470a6f:{NFSU2_TR(0x470a6f);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470a75:{NFSU2_TR(0x470a75);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470a7b:{NFSU2_TR(0x470a7b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B470a7d:{NFSU2_TR(0x470a7d);
{u32 ea_=u32(u32(7890016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470a83:{NFSU2_TR(0x470a83);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470a89:{NFSU2_TR(0x470a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470a8eull));
TAIL_STATIC(0x75bed4u,75b);
}
B470a8e:L470a8e:{c.instructions+=3;NFSU2_TR(0x470a8e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B470a90:{NFSU2_TR(0x470a90);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470a92:{NFSU2_TR(0x470a92);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L470a98;}}
}
B470a94:L470a94:{c.instructions+=2;NFSU2_TR(0x470a94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B470a96:{NFSU2_TR(0x470a96);
{goto L470aa4;}
}
B470a98:L470a98:{c.instructions+=2;NFSU2_TR(0x470a98);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470a9d:{NFSU2_TR(0x470a9d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L470aa4;}}
}
B470a9f:L470a9f:{c.instructions+=1;NFSU2_TR(0x470a9f);
w4(R+0,u32(0x7fffull));
}
B470aa4:L470aa4:{c.instructions+=8;NFSU2_TR(0x470aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470aa7:{NFSU2_TR(0x470aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470aaa:{NFSU2_TR(0x470aaa);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470ab0:{NFSU2_TR(0x470ab0);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470ab6:{NFSU2_TR(0x470ab6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B470ab8:{NFSU2_TR(0x470ab8);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470abe:{NFSU2_TR(0x470abe);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470ac4:{NFSU2_TR(0x470ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470ac9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B470ac9:L470ac9:{c.instructions+=2;NFSU2_TR(0x470ac9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470acb:{NFSU2_TR(0x470acb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L470ad1;}}
}
B470acd:L470acd:{c.instructions+=2;NFSU2_TR(0x470acd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B470acf:{NFSU2_TR(0x470acf);
{goto L470add;}
}
B470ad1:L470ad1:{c.instructions+=2;NFSU2_TR(0x470ad1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470ad6:{NFSU2_TR(0x470ad6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L470add;}}
}
B470ad8:L470ad8:{c.instructions+=1;NFSU2_TR(0x470ad8);
w4(R+0,u32(0x7fffull));
}
B470add:L470add:{c.instructions+=8;NFSU2_TR(0x470add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470ae0:{NFSU2_TR(0x470ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470ae3:{NFSU2_TR(0x470ae3);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470ae9:{NFSU2_TR(0x470ae9);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470aef:{NFSU2_TR(0x470aef);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B470af1:{NFSU2_TR(0x470af1);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470af7:{NFSU2_TR(0x470af7);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470afd:{NFSU2_TR(0x470afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470b02ull));
TAIL_STATIC(0x75bed4u,75b);
}
B470b02:L470b02:{c.instructions+=2;NFSU2_TR(0x470b02);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470b04:{NFSU2_TR(0x470b04);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L470b0a;}}
}
B470b06:L470b06:{c.instructions+=2;NFSU2_TR(0x470b06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B470b08:{NFSU2_TR(0x470b08);
{goto L470b16;}
}
B470b0a:L470b0a:{c.instructions+=2;NFSU2_TR(0x470b0a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470b0f:{NFSU2_TR(0x470b0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L470b16;}}
}
B470b11:L470b11:{c.instructions+=1;NFSU2_TR(0x470b11);
w4(R+0,u32(0x7fffull));
}
B470b16:L470b16:{c.instructions+=8;NFSU2_TR(0x470b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470b19:{NFSU2_TR(0x470b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470b1c:{NFSU2_TR(0x470b1c);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470b22:{NFSU2_TR(0x470b22);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470b28:{NFSU2_TR(0x470b28);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B470b2a:{NFSU2_TR(0x470b2a);
{u32 ea_=u32(u32(7908028u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470b30:{NFSU2_TR(0x470b30);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470b36:{NFSU2_TR(0x470b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470b3bull));
TAIL_STATIC(0x75bed4u,75b);
}
B470b3b:L470b3b:{c.instructions+=2;NFSU2_TR(0x470b3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470b3d:{NFSU2_TR(0x470b3d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L470b43;}}
}
B470b3f:L470b3f:{c.instructions+=2;NFSU2_TR(0x470b3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B470b41:{NFSU2_TR(0x470b41);
{goto L470b4f;}
}
B470b43:L470b43:{c.instructions+=2;NFSU2_TR(0x470b43);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470b48:{NFSU2_TR(0x470b48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L470b4f;}}
}
B470b4a:L470b4a:{c.instructions+=1;NFSU2_TR(0x470b4a);
w4(R+0,u32(0x7fffull));
}
B470b4f:L470b4f:{c.instructions+=7;NFSU2_TR(0x470b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470b52:{NFSU2_TR(0x470b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470b55:{NFSU2_TR(0x470b55);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470b58:{NFSU2_TR(0x470b58);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B470b5e:{NFSU2_TR(0x470b5e);
{u32 ea_=u32(u32(7905936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470b64:{NFSU2_TR(0x470b64);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470b6a:{NFSU2_TR(0x470b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470b6full));
TAIL_STATIC(0x75bed4u,75b);
}
B470b6f:L470b6f:{c.instructions+=2;NFSU2_TR(0x470b6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470b71:{NFSU2_TR(0x470b71);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L470b77;}}
}
B470b73:L470b73:{c.instructions+=2;NFSU2_TR(0x470b73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B470b75:{NFSU2_TR(0x470b75);
{goto L470b83;}
}
B470b77:L470b77:{c.instructions+=2;NFSU2_TR(0x470b77);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470b7c:{NFSU2_TR(0x470b7c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L470b83;}}
}
B470b7e:L470b7e:{c.instructions+=1;NFSU2_TR(0x470b7e);
w4(R+0,u32(0x7fffull));
}
B470b83:L470b83:{c.instructions+=3;NFSU2_TR(0x470b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470b86:{NFSU2_TR(0x470b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470b89:{NFSU2_TR(0x470b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470b8eull));
TAIL_STATIC(0x5ec1f0u,5ec);
}
B470b8e:L470b8e:{c.instructions+=5;NFSU2_TR(0x470b8e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470b94:{NFSU2_TR(0x470b94);
w4(R+28,u32(0x1ull));
}
B470b99:{NFSU2_TR(0x470b99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470b9b:{NFSU2_TR(0x470b9b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470b9e:{NFSU2_TR(0x470b9e);
if(r1(R+514)){{goto L470ba5;}}
}
B470ba0:L470ba0:{c.instructions+=2;NFSU2_TR(0x470ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470ba3:{NFSU2_TR(0x470ba3);
{goto L470ba8;}
}
B470ba5:L470ba5:{c.instructions+=1;NFSU2_TR(0x470ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470ba8:L470ba8:{c.instructions+=4;NFSU2_TR(0x470ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470bab:{NFSU2_TR(0x470bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470bb1:{NFSU2_TR(0x470bb1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470bb4:{NFSU2_TR(0x470bb4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L470bcb;}}
}
B470bb6:L470bb6:{c.instructions+=1;NFSU2_TR(0x470bb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x470cccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B470bbd:L470bbd:{c.instructions+=2;NFSU2_TR(0x470bbd);
w4(R+0,u32(0xfa0ull));
}
B470bc2:{NFSU2_TR(0x470bc2);
{goto L470bcd;}
}
B470bc4:L470bc4:{c.instructions+=2;NFSU2_TR(0x470bc4);
w4(R+0,u32(0x7d00ull));
}
B470bc9:{NFSU2_TR(0x470bc9);
{goto L470bcd;}
}
B470bcb:L470bcb:{c.instructions+=1;NFSU2_TR(0x470bcb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B470bcd:L470bcd:{c.instructions+=4;NFSU2_TR(0x470bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470bd0:{NFSU2_TR(0x470bd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3fffull))));
__builtin_memmove((R+8),(U+0),4);
}
B470bd6:{NFSU2_TR(0x470bd6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470bd8:{NFSU2_TR(0x470bd8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L470bde;}}
}
B470bda:L470bda:{c.instructions+=2;NFSU2_TR(0x470bda);
__builtin_memmove((R+0),(R+8),4);
}
B470bdc:{NFSU2_TR(0x470bdc);
{goto L470bea;}
}
B470bde:L470bde:{c.instructions+=3;NFSU2_TR(0x470bde);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffc001ull))));
}
B470be4:{NFSU2_TR(0x470be4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B470be6:{NFSU2_TR(0x470be6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L470bea;}}
}
B470be8:L470be8:{c.instructions+=1;NFSU2_TR(0x470be8);
__builtin_memmove((R+0),(R+4),4);
}
B470bea:L470bea:{c.instructions+=8;NFSU2_TR(0x470bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B470bed:{NFSU2_TR(0x470bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470bf0:{NFSU2_TR(0x470bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470bf3:{NFSU2_TR(0x470bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470bf6:{NFSU2_TR(0x470bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470bf9:{NFSU2_TR(0x470bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470bfc:{NFSU2_TR(0x470bfc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470bfe:{NFSU2_TR(0x470bfe);
if(r1(R+518)){{goto L470c24;}}
}
B470c00:L470c00:{c.instructions+=3;NFSU2_TR(0x470c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470c03:{NFSU2_TR(0x470c03);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470c06:{NFSU2_TR(0x470c06);
if(r1(R+518)){{goto L470c0d;}}
}
B470c08:L470c08:{c.instructions+=2;NFSU2_TR(0x470c08);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470c0b:{NFSU2_TR(0x470c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470c24;}}
}
B470c0d:L470c0d:{c.instructions+=3;NFSU2_TR(0x470c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470c13:{NFSU2_TR(0x470c13);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470c15:{NFSU2_TR(0x470c15);
if(r1(R+518)){{goto L470c21;}}
}
B470c17:L470c17:{c.instructions+=2;NFSU2_TR(0x470c17);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B470c1a:{NFSU2_TR(0x470c1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470c21;}}
}
B470c1c:L470c1c:{c.instructions+=2;NFSU2_TR(0x470c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470c1f:{NFSU2_TR(0x470c1f);
{goto L470c24;}
}
B470c21:L470c21:{c.instructions+=1;NFSU2_TR(0x470c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470c24:L470c24:{c.instructions+=2;NFSU2_TR(0x470c24);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470c2a:{NFSU2_TR(0x470c2a);
if(r1(R+518)){{goto L470cbe;}}
}
B470c30:L470c30:{c.instructions+=10;NFSU2_TR(0x470c30);
__builtin_memmove((R+0),gp(0x89e7c8),4);
}
B470c35:{NFSU2_TR(0x470c35);
__builtin_memmove((R+8),gp(0x89e7cc),4);
}
B470c3b:{NFSU2_TR(0x470c3b);
__builtin_memmove((R+28),gp(0x89e7c4),4);
}
B470c41:{NFSU2_TR(0x470c41);
__builtin_memmove((R+12),gp(0x89e7c0),4);
}
B470c47:{NFSU2_TR(0x470c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B470c4a:{NFSU2_TR(0x470c4a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B470c4c:{NFSU2_TR(0x470c4c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B470c4e:{NFSU2_TR(0x470c4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470c51:{NFSU2_TR(0x470c51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470c55:{NFSU2_TR(0x470c55);
if(r1(R+518)){{goto L470cbc;}}
}
B470c57:L470c57:{c.instructions+=3;NFSU2_TR(0x470c57);
__builtin_memmove((R+12),gp(0x890118),4);
}
B470c5d:{NFSU2_TR(0x470c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470c5f:{NFSU2_TR(0x470c5f);
if(r1(R+518)){{goto L470cc1;}}
}
B470c61:L470c61:{c.instructions+=7;NFSU2_TR(0x470c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470c64:{NFSU2_TR(0x470c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470c67:{NFSU2_TR(0x470c67);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B470c6b:{NFSU2_TR(0x470c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B470c71:{NFSU2_TR(0x470c71);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B470c72:{NFSU2_TR(0x470c72);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470c74:{NFSU2_TR(0x470c74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470cc1;}}
}
B470c76:L470c76:{c.instructions+=12;NFSU2_TR(0x470c76);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B470c7a:{NFSU2_TR(0x470c7a);
__builtin_memmove((R+20),gp(0x89e7c0),4);
}
B470c80:{NFSU2_TR(0x470c80);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B470c82:{NFSU2_TR(0x470c82);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B470c84:{NFSU2_TR(0x470c84);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B470c86:{NFSU2_TR(0x470c86);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B470c88:{NFSU2_TR(0x470c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470c8c:{NFSU2_TR(0x470c8c);
u8 U[4];
w4(U+0,u32(0x1ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470c91:{NFSU2_TR(0x470c91);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B470c95:{NFSU2_TR(0x470c95);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B470c99:{NFSU2_TR(0x470c99);
{u32 ea_=u32(u32(7908024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470c9f:{NFSU2_TR(0x470c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470ca4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B470ca4:L470ca4:{c.instructions+=4;NFSU2_TR(0x470ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470ca7:{NFSU2_TR(0x470ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470ca8:{NFSU2_TR(0x470ca8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470ca9:{NFSU2_TR(0x470ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470caeull));
TAIL_STATIC(0x468e70u,468);
}
B470cae:L470cae:{c.instructions+=8;NFSU2_TR(0x470cae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B470cb1:{NFSU2_TR(0x470cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470cb2:{NFSU2_TR(0x470cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470cb5:{NFSU2_TR(0x470cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470cb6:{NFSU2_TR(0x470cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B470cb7:{NFSU2_TR(0x470cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B470cb8:{NFSU2_TR(0x470cb8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470cbb:{NFSU2_TR(0x470cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470cbc:L470cbc:{c.instructions+=1;NFSU2_TR(0x470cbc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B470cbe:L470cbe:{c.instructions+=1;NFSU2_TR(0x470cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470cc1:L470cc1:{c.instructions+=6;NFSU2_TR(0x470cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470cc2:{NFSU2_TR(0x470cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470cc3:{NFSU2_TR(0x470cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B470cc4:{NFSU2_TR(0x470cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B470cc5:{NFSU2_TR(0x470cc5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470cc8:{NFSU2_TR(0x470cc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470cf0:L470cf0:{c.instructions+=3;NFSU2_TR(0x470cf0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B470cf5:{NFSU2_TR(0x470cf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470cf6:{NFSU2_TR(0x470cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470cfbull));
TAIL_STATIC(0x43e910u,43e);
}
B470cfb:L470cfb:{c.instructions+=3;NFSU2_TR(0x470cfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B470cfe:{NFSU2_TR(0x470cfe);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6b4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6b4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B470d03:{NFSU2_TR(0x470d03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L470d2d;}}
}
B470d05:L470d05:{c.instructions+=6;NFSU2_TR(0x470d05);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B470d0b:{NFSU2_TR(0x470d0b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B470d0e:{NFSU2_TR(0x470d0e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B470d14:{NFSU2_TR(0x470d14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470d15:{NFSU2_TR(0x470d15);
u8 U[4];
w4(U+0,u32(0x2b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470d1a:{NFSU2_TR(0x470d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470d1full));
TAIL_STATIC(0x440820u,440);
}
B470d1f:L470d1f:{c.instructions+=3;NFSU2_TR(0x470d1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B470d22:{NFSU2_TR(0x470d22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470d24:{NFSU2_TR(0x470d24);
if(r1(R+518)){{goto L470d2d;}}
}
B470d26:L470d26:{c.instructions+=2;NFSU2_TR(0x470d26);
__builtin_memmove((R+4),(R+0),4);
}
B470d28:{NFSU2_TR(0x470d28);
TAIL_STATIC(0x45d3f0u,45d);
}
B470d2d:L470d2d:{c.instructions+=2;NFSU2_TR(0x470d2d);
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
B470d2f:{NFSU2_TR(0x470d2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470d30:L470d30:{c.instructions+=3;NFSU2_TR(0x470d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470d31:{NFSU2_TR(0x470d31);
__builtin_memmove((R+24),(R+4),4);
}
B470d33:{NFSU2_TR(0x470d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470d38ull));
TAIL_STATIC(0x45d480u,45d);
}
B470d38:L470d38:{c.instructions+=2;NFSU2_TR(0x470d38);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B470d3d:{NFSU2_TR(0x470d3d);
if(r1(R+518)){{goto L470d48;}}
}
B470d3f:L470d3f:{c.instructions+=2;NFSU2_TR(0x470d3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470d40:{NFSU2_TR(0x470d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470d45ull));
TAIL_STATIC(0x440540u,440);
}
B470d45:L470d45:{c.instructions+=1;NFSU2_TR(0x470d45);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470d48:L470d48:{c.instructions+=3;NFSU2_TR(0x470d48);
__builtin_memmove((R+0),(R+24),4);
}
B470d4a:{NFSU2_TR(0x470d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470d4b:{NFSU2_TR(0x470d4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470d50:L470d50:{c.instructions+=7;NFSU2_TR(0x470d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B470d53:{NFSU2_TR(0x470d53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470d54:{NFSU2_TR(0x470d54);
__builtin_memmove((R+24),(R+4),4);
}
B470d56:{NFSU2_TR(0x470d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470d5c:{NFSU2_TR(0x470d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470d5f:{NFSU2_TR(0x470d5f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470d62:{NFSU2_TR(0x470d62);
if(r1(R+518)){{goto L470e8e;}}
}
B470d68:L470d68:{c.instructions+=2;NFSU2_TR(0x470d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B470d6a:{NFSU2_TR(0x470d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470e8e;}}
}
B470d70:L470d70:{c.instructions+=3;NFSU2_TR(0x470d70);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B470d76:{NFSU2_TR(0x470d76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470d78:{NFSU2_TR(0x470d78);
if(r1(R+518)){{goto L470e2d;}}
}
B470d7e:L470d7e:{c.instructions+=5;NFSU2_TR(0x470d7e);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470d84:{NFSU2_TR(0x470d84);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470d8a:{NFSU2_TR(0x470d8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470d8c:{NFSU2_TR(0x470d8c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470d8f:{NFSU2_TR(0x470d8f);
if(r1(R+514)){{goto L470dd2;}}
}
B470d91:L470d91:{c.instructions+=8;NFSU2_TR(0x470d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470d94:{NFSU2_TR(0x470d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470d97:{NFSU2_TR(0x470d97);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470d9d:{NFSU2_TR(0x470d9d);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470da3:{NFSU2_TR(0x470da3);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470da9:{NFSU2_TR(0x470da9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470dab:{NFSU2_TR(0x470dab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470dae:{NFSU2_TR(0x470dae);
if(r1(R+514)){{goto L470dd2;}}
}
B470db0:L470db0:{c.instructions+=6;NFSU2_TR(0x470db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470db6:{NFSU2_TR(0x470db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470db9:{NFSU2_TR(0x470db9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470dba:{NFSU2_TR(0x470dba);
u8 U[4];
w4(U+0,u32(0x460ca000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470dbf:{NFSU2_TR(0x470dbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470dc0:{NFSU2_TR(0x470dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470dc5ull));
TAIL_STATIC(0x468e30u,468);
}
B470dc5:L470dc5:{c.instructions+=5;NFSU2_TR(0x470dc5);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470dc8:{NFSU2_TR(0x470dc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B470dcb:{NFSU2_TR(0x470dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470dcc:{NFSU2_TR(0x470dcc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470dcf:{NFSU2_TR(0x470dcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470dd2:L470dd2:{c.instructions+=11;NFSU2_TR(0x470dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470dd5:{NFSU2_TR(0x470dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470ddb:{NFSU2_TR(0x470ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470ddf:{NFSU2_TR(0x470ddf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470de3:{NFSU2_TR(0x470de3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470de7:{NFSU2_TR(0x470de7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470deb:{NFSU2_TR(0x470deb);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470df1:{NFSU2_TR(0x470df1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470df3:{NFSU2_TR(0x470df3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470df5:{NFSU2_TR(0x470df5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470df8:{NFSU2_TR(0x470df8);
if(r1(R+518)){{goto L470ecc;}}
}
B470dfe:L470dfe:{c.instructions+=8;NFSU2_TR(0x470dfe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470e00:{NFSU2_TR(0x470e00);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470e04:{NFSU2_TR(0x470e04);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470e08:{NFSU2_TR(0x470e08);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470e0e:{NFSU2_TR(0x470e0e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470e10:{NFSU2_TR(0x470e10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470e12:{NFSU2_TR(0x470e12);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470e15:{NFSU2_TR(0x470e15);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L470ecc;}}
}
B470e1b:L470e1b:{c.instructions+=6;NFSU2_TR(0x470e1b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470e1d:{NFSU2_TR(0x470e1d);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470e23:{NFSU2_TR(0x470e23);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470e26:{NFSU2_TR(0x470e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470e27:{NFSU2_TR(0x470e27);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470e2a:{NFSU2_TR(0x470e2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470e2d:L470e2d:{c.instructions+=8;NFSU2_TR(0x470e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470e30:{NFSU2_TR(0x470e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470e33:{NFSU2_TR(0x470e33);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470e39:{NFSU2_TR(0x470e39);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B470e3f:{NFSU2_TR(0x470e3f);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B470e45:{NFSU2_TR(0x470e45);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470e47:{NFSU2_TR(0x470e47);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470e4a:{NFSU2_TR(0x470e4a);
if(r1(R+514)){{goto L470e6c;}}
}
B470e4c:L470e4c:{c.instructions+=5;NFSU2_TR(0x470e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470e4f:{NFSU2_TR(0x470e4f);
u8 U[4];
w4(U+0,u32(0x42480000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470e54:{NFSU2_TR(0x470e54);
u8 U[4];
w4(U+0,u32(0x447a0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470e59:{NFSU2_TR(0x470e59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470e5a:{NFSU2_TR(0x470e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470e5full));
TAIL_STATIC(0x468e30u,468);
}
B470e5f:L470e5f:{c.instructions+=5;NFSU2_TR(0x470e5f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470e62:{NFSU2_TR(0x470e62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B470e65:{NFSU2_TR(0x470e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470e66:{NFSU2_TR(0x470e66);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470e69:{NFSU2_TR(0x470e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470e6c:L470e6c:{c.instructions+=6;NFSU2_TR(0x470e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470e72:{NFSU2_TR(0x470e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B470e75:{NFSU2_TR(0x470e75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470e76:{NFSU2_TR(0x470e76);
u8 U[4];
w4(U+0,u32(0x457a0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470e7b:{NFSU2_TR(0x470e7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470e7c:{NFSU2_TR(0x470e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470e81ull));
TAIL_STATIC(0x468e30u,468);
}
B470e81:L470e81:{c.instructions+=5;NFSU2_TR(0x470e81);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470e84:{NFSU2_TR(0x470e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B470e87:{NFSU2_TR(0x470e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470e88:{NFSU2_TR(0x470e88);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470e8b:{NFSU2_TR(0x470e8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470e8e:L470e8e:{c.instructions+=3;NFSU2_TR(0x470e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470e91:{NFSU2_TR(0x470e91);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470e94:{NFSU2_TR(0x470e94);
if(r1(R+518)){{goto L470ea5;}}
}
B470e96:L470e96:{c.instructions+=2;NFSU2_TR(0x470e96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470e99:{NFSU2_TR(0x470e99);
if(r1(R+518)){{goto L470ea5;}}
}
B470e9b:L470e9b:{c.instructions+=2;NFSU2_TR(0x470e9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470e9e:{NFSU2_TR(0x470e9e);
if(r1(R+518)){{goto L470ea5;}}
}
B470ea0:L470ea0:{c.instructions+=2;NFSU2_TR(0x470ea0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B470ea3:{NFSU2_TR(0x470ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L470eb3;}}
}
B470ea5:L470ea5:{c.instructions+=4;NFSU2_TR(0x470ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x45fa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B470eac:{NFSU2_TR(0x470eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470ead:{NFSU2_TR(0x470ead);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470eb0:{NFSU2_TR(0x470eb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470eb3:L470eb3:{c.instructions+=4;NFSU2_TR(0x470eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470eb9:{NFSU2_TR(0x470eb9);
{u32 ea_=u32((r4(R+8)*4u)+u32(7898796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470ec0:{NFSU2_TR(0x470ec0);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470ec6:{NFSU2_TR(0x470ec6);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470ecc:L470ecc:{c.instructions+=4;NFSU2_TR(0x470ecc);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470ecf:{NFSU2_TR(0x470ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470ed0:{NFSU2_TR(0x470ed0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470ed3:{NFSU2_TR(0x470ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470ee0:L470ee0:{c.instructions+=4;NFSU2_TR(0x470ee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470ee1:{NFSU2_TR(0x470ee1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B470ee7:{NFSU2_TR(0x470ee7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B470ee9:{NFSU2_TR(0x470ee9);
if(r1(R+518)){{goto L470f3b;}}
}
B470eeb:L470eeb:{c.instructions+=9;NFSU2_TR(0x470eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B470ef1:{NFSU2_TR(0x470ef1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B470ef5:{NFSU2_TR(0x470ef5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470ef9:{NFSU2_TR(0x470ef9);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470eff:{NFSU2_TR(0x470eff);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f05:{NFSU2_TR(0x470f05);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470f07:{NFSU2_TR(0x470f07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470f09:{NFSU2_TR(0x470f09);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470f0c:{NFSU2_TR(0x470f0c);
if(r1(R+518)){{goto L470f81;}}
}
B470f0e:L470f0e:{c.instructions+=8;NFSU2_TR(0x470f0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470f10:{NFSU2_TR(0x470f10);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f14:{NFSU2_TR(0x470f14);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470f1a:{NFSU2_TR(0x470f1a);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f20:{NFSU2_TR(0x470f20);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470f22:{NFSU2_TR(0x470f22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470f24:{NFSU2_TR(0x470f24);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470f27:{NFSU2_TR(0x470f27);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L470f81;}}
}
B470f29:L470f29:{c.instructions+=5;NFSU2_TR(0x470f29);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470f2b:{NFSU2_TR(0x470f2b);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f31:{NFSU2_TR(0x470f31);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470f37:{NFSU2_TR(0x470f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B470f38:{NFSU2_TR(0x470f38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470f3b:L470f3b:{c.instructions+=9;NFSU2_TR(0x470f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B470f41:{NFSU2_TR(0x470f41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B470f45:{NFSU2_TR(0x470f45);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f49:{NFSU2_TR(0x470f49);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B470f4f:{NFSU2_TR(0x470f4f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f55:{NFSU2_TR(0x470f55);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470f57:{NFSU2_TR(0x470f57);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470f59:{NFSU2_TR(0x470f59);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470f5c:{NFSU2_TR(0x470f5c);
if(r1(R+518)){{goto L470f81;}}
}
B470f5e:L470f5e:{c.instructions+=8;NFSU2_TR(0x470f5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470f60:{NFSU2_TR(0x470f60);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f64:{NFSU2_TR(0x470f64);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B470f6a:{NFSU2_TR(0x470f6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f70:{NFSU2_TR(0x470f70);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B470f72:{NFSU2_TR(0x470f72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B470f74:{NFSU2_TR(0x470f74);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B470f77:{NFSU2_TR(0x470f77);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L470f81;}}
}
B470f79:L470f79:{c.instructions+=2;NFSU2_TR(0x470f79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B470f7b:{NFSU2_TR(0x470f7b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B470f81:L470f81:{c.instructions+=3;NFSU2_TR(0x470f81);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B470f87:{NFSU2_TR(0x470f87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B470f88:{NFSU2_TR(0x470f88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470f90:L470f90:{c.instructions+=7;NFSU2_TR(0x470f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470f91:{NFSU2_TR(0x470f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B470f95:{NFSU2_TR(0x470f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470f97:{NFSU2_TR(0x470f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470f98:{NFSU2_TR(0x470f98);
__builtin_memmove((R+28),(R+4),4);
}
B470f9a:{NFSU2_TR(0x470f9a);
__builtin_memmove((R+4),(R+24),4);
}
B470f9c:{NFSU2_TR(0x470f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470f9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B470f9f:L470f9f:{c.instructions+=5;NFSU2_TR(0x470f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B470fa1:{NFSU2_TR(0x470fa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B470fa4:{NFSU2_TR(0x470fa4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B470fa9:{NFSU2_TR(0x470fa9);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470fac:{NFSU2_TR(0x470fac);
if(r1(R+518)){{goto L470fd0;}}
}
B470fae:L470fae:{c.instructions+=2;NFSU2_TR(0x470fae);
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
B470faf:{NFSU2_TR(0x470faf);
if(r1(R+518)){{goto L470fc5;}}
}
B470fb1:L470fb1:{c.instructions+=3;NFSU2_TR(0x470fb1);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470fb6:{NFSU2_TR(0x470fb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470fb8:{NFSU2_TR(0x470fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470fbdull));
TAIL_STATIC(0x4691c0u,469);
}
B470fbd:L470fbd:{c.instructions+=4;NFSU2_TR(0x470fbd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B470fc0:{NFSU2_TR(0x470fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470fc1:{NFSU2_TR(0x470fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470fc2:{NFSU2_TR(0x470fc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470fc5:L470fc5:{c.instructions+=4;NFSU2_TR(0x470fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470fcb:{NFSU2_TR(0x470fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470fcc:{NFSU2_TR(0x470fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470fcd:{NFSU2_TR(0x470fcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470fd0:L470fd0:{c.instructions+=4;NFSU2_TR(0x470fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B470fd6:{NFSU2_TR(0x470fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B470fd7:{NFSU2_TR(0x470fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470fd8:{NFSU2_TR(0x470fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B470fe0:L470fe0:{c.instructions+=3;NFSU2_TR(0x470fe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B470fe1:{NFSU2_TR(0x470fe1);
__builtin_memmove((R+24),(R+4),4);
}
B470fe3:{NFSU2_TR(0x470fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x470fe8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B470fe8:L470fe8:{c.instructions+=4;NFSU2_TR(0x470fe8);
u8 U[4];
w4(U+0,u32(0x78aac0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B470fee:{NFSU2_TR(0x470fee);
__builtin_memmove((R+0),(R+24),4);
}
B470ff0:{NFSU2_TR(0x470ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B470ff1:{NFSU2_TR(0x470ff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x470,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
