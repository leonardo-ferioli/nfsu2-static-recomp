#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x632,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x632,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_632(u8* __restrict R,Cpu& c);
u32 page_632(Cpu& c){return body_632(c.regs.data(),c);}
__attribute__((noinline)) u32 body_632(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x632000:goto L632000;
case 0x632001:c.instructions+=1;goto B632001;
case 0x632006:goto L632006;
case 0x632009:c.instructions+=4;goto B632009;
case 0x63200b:c.instructions+=3;goto B63200b;
case 0x632011:c.instructions+=2;goto B632011;
case 0x632013:c.instructions+=1;goto B632013;
case 0x632015:goto L632015;
case 0x63201b:c.instructions+=2;goto B63201b;
case 0x63201d:c.instructions+=1;goto B63201d;
case 0x63201f:goto L63201f;
case 0x632020:c.instructions+=4;goto B632020;
case 0x632022:c.instructions+=3;goto B632022;
case 0x632023:c.instructions+=2;goto B632023;
case 0x632024:c.instructions+=1;goto B632024;
case 0x632029:goto L632029;
case 0x63202c:c.instructions+=1;goto B63202c;
case 0x63202e:goto L63202e;
case 0x632034:c.instructions+=2;goto B632034;
case 0x632036:c.instructions+=1;goto B632036;
case 0x632038:goto L632038;
case 0x63203e:c.instructions+=2;goto B63203e;
case 0x632040:c.instructions+=1;goto B632040;
case 0x632042:goto L632042;
case 0x632043:c.instructions+=4;goto B632043;
case 0x632045:c.instructions+=3;goto B632045;
case 0x632046:c.instructions+=2;goto B632046;
case 0x632047:c.instructions+=1;goto B632047;
case 0x63204c:goto L63204c;
case 0x63204f:c.instructions+=1;goto B63204f;
case 0x632051:goto L632051;
case 0x632052:c.instructions+=5;goto B632052;
case 0x632054:c.instructions+=4;goto B632054;
case 0x63205a:c.instructions+=3;goto B63205a;
case 0x63205c:c.instructions+=2;goto B63205c;
case 0x63205d:c.instructions+=1;goto B63205d;
case 0x632062:goto L632062;
case 0x632066:c.instructions+=6;goto B632066;
case 0x632067:c.instructions+=5;goto B632067;
case 0x63206b:c.instructions+=4;goto B63206b;
case 0x632070:c.instructions+=3;goto B632070;
case 0x632071:c.instructions+=2;goto B632071;
case 0x632075:c.instructions+=1;goto B632075;
case 0x63207a:goto L63207a;
case 0x63207e:c.instructions+=2;goto B63207e;
case 0x63207f:c.instructions+=1;goto B63207f;
case 0x632084:goto L632084;
case 0x632088:c.instructions+=6;goto B632088;
case 0x632089:c.instructions+=5;goto B632089;
case 0x63208d:c.instructions+=4;goto B63208d;
case 0x632092:c.instructions+=3;goto B632092;
case 0x632093:c.instructions+=2;goto B632093;
case 0x632095:c.instructions+=1;goto B632095;
case 0x63209a:goto L63209a;
case 0x63209e:c.instructions+=2;goto B63209e;
case 0x63209f:c.instructions+=1;goto B63209f;
case 0x6320a4:goto L6320a4;
case 0x6320a5:c.instructions+=5;goto B6320a5;
case 0x6320ac:c.instructions+=4;goto B6320ac;
case 0x6320b0:c.instructions+=3;goto B6320b0;
case 0x6320b5:c.instructions+=2;goto B6320b5;
case 0x6320b6:c.instructions+=1;goto B6320b6;
case 0x6320bb:goto L6320bb;
case 0x6320bf:c.instructions+=2;goto B6320bf;
case 0x6320c0:c.instructions+=1;goto B6320c0;
case 0x6320c5:goto L6320c5;
case 0x6320c8:c.instructions+=3;goto B6320c8;
case 0x6320ca:c.instructions+=2;goto B6320ca;
case 0x6320cc:c.instructions+=1;goto B6320cc;
case 0x6320ce:goto L6320ce;
case 0x6320d0:c.instructions+=1;goto B6320d0;
case 0x6320d2:goto L6320d2;
case 0x6320d5:c.instructions+=1;goto B6320d5;
case 0x6320d7:goto L6320d7;
case 0x6320d8:c.instructions+=2;goto B6320d8;
case 0x6320da:c.instructions+=1;goto B6320da;
case 0x6320dc:goto L6320dc;
case 0x6320df:c.instructions+=1;goto B6320df;
case 0x6320e1:goto L6320e1;
case 0x6320e3:c.instructions+=1;goto B6320e3;
case 0x6320e5:goto L6320e5;
case 0x6320e7:c.instructions+=1;goto B6320e7;
case 0x6320e9:goto L6320e9;
case 0x6320ec:c.instructions+=1;goto B6320ec;
case 0x6320f1:goto L6320f1;
case 0x6320f8:c.instructions+=4;goto B6320f8;
case 0x6320fa:c.instructions+=3;goto B6320fa;
case 0x6320fc:c.instructions+=2;goto B6320fc;
case 0x6320fe:c.instructions+=1;goto B6320fe;
case 0x632100:goto L632100;
case 0x632102:c.instructions+=1;goto B632102;
case 0x632104:goto L632104;
case 0x632107:c.instructions+=1;goto B632107;
case 0x632109:goto L632109;
case 0x63210a:c.instructions+=2;goto B63210a;
case 0x63210c:c.instructions+=1;goto B63210c;
case 0x63210e:goto L63210e;
case 0x632111:c.instructions+=1;goto B632111;
case 0x632113:goto L632113;
case 0x632115:c.instructions+=1;goto B632115;
case 0x632117:goto L632117;
case 0x632119:c.instructions+=1;goto B632119;
case 0x63211b:goto L63211b;
case 0x63211e:c.instructions+=1;goto B63211e;
case 0x632123:goto L632123;
case 0x632125:c.instructions+=2;goto B632125;
case 0x632127:c.instructions+=1;goto B632127;
case 0x632129:goto L632129;
case 0x63212b:c.instructions+=1;goto B63212b;
case 0x63212d:goto L63212d;
case 0x63212f:c.instructions+=2;goto B63212f;
case 0x632131:c.instructions+=1;goto B632131;
case 0x632133:goto L632133;
case 0x632136:c.instructions+=1;goto B632136;
case 0x632138:goto L632138;
case 0x632139:c.instructions+=2;goto B632139;
case 0x63213b:c.instructions+=1;goto B63213b;
case 0x63213d:goto L63213d;
case 0x632140:c.instructions+=1;goto B632140;
case 0x632142:goto L632142;
case 0x632144:c.instructions+=1;goto B632144;
case 0x632146:goto L632146;
case 0x632149:c.instructions+=1;goto B632149;
case 0x63214e:goto L63214e;
case 0x632150:c.instructions+=9;goto B632150;
case 0x632157:c.instructions+=8;goto B632157;
case 0x63215d:c.instructions+=7;goto B63215d;
case 0x632163:c.instructions+=6;goto B632163;
case 0x632167:c.instructions+=5;goto B632167;
case 0x63216c:c.instructions+=4;goto B63216c;
case 0x63216d:c.instructions+=3;goto B63216d;
case 0x632174:c.instructions+=2;goto B632174;
case 0x632178:c.instructions+=1;goto B632178;
case 0x63217d:goto L63217d;
case 0x632181:c.instructions+=2;goto B632181;
case 0x632182:c.instructions+=1;goto B632182;
case 0x632187:goto L632187;
case 0x632189:c.instructions+=4;goto B632189;
case 0x63218d:c.instructions+=3;goto B63218d;
case 0x632192:c.instructions+=2;goto B632192;
case 0x632193:c.instructions+=1;goto B632193;
case 0x632198:goto L632198;
case 0x63219c:c.instructions+=2;goto B63219c;
case 0x63219d:c.instructions+=1;goto B63219d;
case 0x6321a2:goto L6321a2;
case 0x6321a3:c.instructions+=3;goto B6321a3;
case 0x6321a8:c.instructions+=2;goto B6321a8;
case 0x6321aa:c.instructions+=1;goto B6321aa;
case 0x6321af:goto L6321af;
case 0x6321b0:c.instructions+=3;goto B6321b0;
case 0x6321b5:c.instructions+=2;goto B6321b5;
case 0x6321bb:c.instructions+=1;goto B6321bb;
case 0x6321c0:goto L6321c0;
case 0x6321c1:c.instructions+=3;goto B6321c1;
case 0x6321c6:c.instructions+=2;goto B6321c6;
case 0x6321cc:c.instructions+=1;goto B6321cc;
case 0x6321d1:goto L6321d1;
case 0x6321d2:c.instructions+=3;goto B6321d2;
case 0x6321d7:c.instructions+=2;goto B6321d7;
case 0x6321dd:c.instructions+=1;goto B6321dd;
case 0x6321e2:goto L6321e2;
case 0x6321e3:c.instructions+=3;goto B6321e3;
case 0x6321e8:c.instructions+=2;goto B6321e8;
case 0x6321ee:c.instructions+=1;goto B6321ee;
case 0x6321f3:goto L6321f3;
case 0x6321f6:c.instructions+=4;goto B6321f6;
case 0x6321f7:c.instructions+=3;goto B6321f7;
case 0x6321fc:c.instructions+=2;goto B6321fc;
case 0x632202:c.instructions+=1;goto B632202;
case 0x632207:goto L632207;
case 0x632208:c.instructions+=3;goto B632208;
case 0x63220d:c.instructions+=2;goto B63220d;
case 0x632213:c.instructions+=1;goto B632213;
case 0x632218:goto L632218;
case 0x632219:c.instructions+=3;goto B632219;
case 0x63221e:c.instructions+=2;goto B63221e;
case 0x632224:c.instructions+=1;goto B632224;
case 0x632229:goto L632229;
case 0x63222a:c.instructions+=3;goto B63222a;
case 0x63222f:c.instructions+=2;goto B63222f;
case 0x632235:c.instructions+=1;goto B632235;
case 0x63223a:goto L63223a;
case 0x63223b:c.instructions+=3;goto B63223b;
case 0x632240:c.instructions+=2;goto B632240;
case 0x632246:c.instructions+=1;goto B632246;
case 0x63224b:goto L63224b;
case 0x632251:c.instructions+=5;goto B632251;
case 0x632258:c.instructions+=4;goto B632258;
case 0x63225b:c.instructions+=3;goto B63225b;
case 0x63225d:c.instructions+=2;goto B63225d;
case 0x632267:c.instructions+=1;goto B632267;
case 0x632269:goto L632269;
case 0x63226b:c.instructions+=1;goto B63226b;
case 0x632270:goto L632270;
case 0x632272:c.instructions+=1;goto B632272;
case 0x632274:goto L632274;
case 0x63227b:c.instructions+=1;goto B63227b;
case 0x632280:goto L632280;
case 0x632282:goto L632282;
case 0x632286:c.instructions+=2;goto B632286;
case 0x632288:c.instructions+=1;goto B632288;
case 0x63228a:goto L63228a;
case 0x63228c:c.instructions+=1;goto B63228c;
case 0x632291:goto L632291;
case 0x632293:c.instructions+=1;goto B632293;
case 0x632295:goto L632295;
case 0x632299:c.instructions+=1;goto B632299;
case 0x63229e:goto L63229e;
case 0x6322a0:goto L6322a0;
case 0x6322a1:c.instructions+=2;goto B6322a1;
case 0x6322a6:c.instructions+=1;goto B6322a6;
case 0x6322ab:goto L6322ab;
case 0x6322ac:c.instructions+=3;goto B6322ac;
case 0x6322b1:c.instructions+=2;goto B6322b1;
case 0x6322b7:c.instructions+=1;goto B6322b7;
case 0x6322bc:goto L6322bc;
case 0x6322bd:c.instructions+=3;goto B6322bd;
case 0x6322c2:c.instructions+=2;goto B6322c2;
case 0x6322c8:c.instructions+=1;goto B6322c8;
case 0x6322cd:goto L6322cd;
case 0x6322ce:c.instructions+=3;goto B6322ce;
case 0x6322d3:c.instructions+=2;goto B6322d3;
case 0x6322d9:c.instructions+=1;goto B6322d9;
case 0x6322de:goto L6322de;
case 0x6322df:c.instructions+=3;goto B6322df;
case 0x6322e4:c.instructions+=2;goto B6322e4;
case 0x6322ea:c.instructions+=1;goto B6322ea;
case 0x6322ef:goto L6322ef;
case 0x6322f4:c.instructions+=2;goto B6322f4;
case 0x6322fa:c.instructions+=1;goto B6322fa;
case 0x6322ff:goto L6322ff;
case 0x632300:c.instructions+=3;goto B632300;
case 0x632305:c.instructions+=2;goto B632305;
case 0x63230b:c.instructions+=1;goto B63230b;
case 0x632310:goto L632310;
case 0x632311:c.instructions+=3;goto B632311;
case 0x632316:c.instructions+=2;goto B632316;
case 0x63231c:c.instructions+=1;goto B63231c;
case 0x632321:goto L632321;
case 0x632322:c.instructions+=3;goto B632322;
case 0x632327:c.instructions+=2;goto B632327;
case 0x63232d:c.instructions+=1;goto B63232d;
case 0x632332:goto L632332;
case 0x632335:c.instructions+=4;goto B632335;
case 0x632336:c.instructions+=3;goto B632336;
case 0x63233b:c.instructions+=2;goto B63233b;
case 0x632341:c.instructions+=1;goto B632341;
case 0x632346:goto L632346;
case 0x632347:c.instructions+=3;goto B632347;
case 0x63234c:c.instructions+=2;goto B63234c;
case 0x632352:c.instructions+=1;goto B632352;
case 0x632357:goto L632357;
case 0x63235c:c.instructions+=2;goto B63235c;
case 0x632362:c.instructions+=1;goto B632362;
case 0x632367:goto L632367;
case 0x63236b:c.instructions+=6;goto B63236b;
case 0x63236c:c.instructions+=5;goto B63236c;
case 0x632372:c.instructions+=4;goto B632372;
case 0x632376:c.instructions+=3;goto B632376;
case 0x63237b:c.instructions+=2;goto B63237b;
case 0x63237c:c.instructions+=1;goto B63237c;
case 0x632381:goto L632381;
case 0x632385:c.instructions+=2;goto B632385;
case 0x632386:c.instructions+=1;goto B632386;
case 0x63238b:goto L63238b;
case 0x63238d:c.instructions+=3;goto B63238d;
case 0x63238e:c.instructions+=2;goto B63238e;
case 0x632393:c.instructions+=1;goto B632393;
case 0x632398:goto L632398;
case 0x632399:c.instructions+=3;goto B632399;
case 0x63239e:c.instructions+=2;goto B63239e;
case 0x6323a4:c.instructions+=1;goto B6323a4;
case 0x6323a9:goto L6323a9;
case 0x6323aa:c.instructions+=3;goto B6323aa;
case 0x6323af:c.instructions+=2;goto B6323af;
case 0x6323b5:c.instructions+=1;goto B6323b5;
case 0x6323ba:goto L6323ba;
case 0x6323bc:c.instructions+=8;goto B6323bc;
case 0x6323c2:c.instructions+=7;goto B6323c2;
case 0x6323c8:c.instructions+=6;goto B6323c8;
case 0x6323cb:c.instructions+=5;goto B6323cb;
case 0x6323cd:c.instructions+=4;goto B6323cd;
case 0x6323d3:c.instructions+=3;goto B6323d3;
case 0x6323d9:c.instructions+=2;goto B6323d9;
case 0x6323df:c.instructions+=1;goto B6323df;
case 0x6323e1:goto L6323e1;
case 0x6323e3:c.instructions+=1;goto B6323e3;
case 0x6323e5:goto L6323e5;
case 0x6323e7:c.instructions+=2;goto B6323e7;
case 0x6323e9:c.instructions+=1;goto B6323e9;
case 0x6323eb:goto L6323eb;
case 0x6323f0:goto L6323f0;
case 0x6323f3:c.instructions+=1;goto B6323f3;
case 0x6323f5:goto L6323f5;
case 0x6323f6:c.instructions+=2;goto B6323f6;
case 0x6323f8:c.instructions+=1;goto B6323f8;
case 0x6323fa:goto L6323fa;
case 0x6323fd:c.instructions+=1;goto B6323fd;
case 0x6323ff:goto L6323ff;
case 0x632401:c.instructions+=1;goto B632401;
case 0x632403:goto L632403;
case 0x632406:c.instructions+=1;goto B632406;
case 0x63240b:goto L63240b;
case 0x632411:c.instructions+=4;goto B632411;
case 0x632413:c.instructions+=3;goto B632413;
case 0x632415:c.instructions+=2;goto B632415;
case 0x632417:c.instructions+=1;goto B632417;
case 0x632419:goto L632419;
case 0x63241b:c.instructions+=1;goto B63241b;
case 0x63241d:goto L63241d;
case 0x632420:goto L632420;
case 0x632423:c.instructions+=1;goto B632423;
case 0x632425:goto L632425;
case 0x632426:c.instructions+=2;goto B632426;
case 0x632428:c.instructions+=1;goto B632428;
case 0x63242a:goto L63242a;
case 0x63242d:c.instructions+=1;goto B63242d;
case 0x63242f:goto L63242f;
case 0x632431:c.instructions+=1;goto B632431;
case 0x632433:goto L632433;
case 0x632435:c.instructions+=1;goto B632435;
case 0x632437:goto L632437;
case 0x63243a:c.instructions+=1;goto B63243a;
case 0x63243f:goto L63243f;
case 0x632445:c.instructions+=4;goto B632445;
case 0x632447:c.instructions+=3;goto B632447;
case 0x632449:c.instructions+=2;goto B632449;
case 0x63244b:c.instructions+=1;goto B63244b;
case 0x63244d:goto L63244d;
case 0x63244f:c.instructions+=1;goto B63244f;
case 0x632451:goto L632451;
case 0x632454:c.instructions+=1;goto B632454;
case 0x632456:goto L632456;
case 0x632457:c.instructions+=2;goto B632457;
case 0x632459:c.instructions+=1;goto B632459;
case 0x63245b:goto L63245b;
case 0x63245e:c.instructions+=1;goto B63245e;
case 0x632460:goto L632460;
case 0x632462:c.instructions+=1;goto B632462;
case 0x632464:goto L632464;
case 0x632466:c.instructions+=1;goto B632466;
case 0x632468:goto L632468;
case 0x63246b:c.instructions+=1;goto B63246b;
case 0x632470:goto L632470;
case 0x632476:c.instructions+=4;goto B632476;
case 0x632478:c.instructions+=3;goto B632478;
case 0x63247a:c.instructions+=2;goto B63247a;
case 0x63247c:c.instructions+=1;goto B63247c;
case 0x63247e:goto L63247e;
case 0x632480:c.instructions+=1;goto B632480;
case 0x632482:goto L632482;
case 0x632485:c.instructions+=1;goto B632485;
case 0x632487:goto L632487;
case 0x632488:c.instructions+=2;goto B632488;
case 0x63248a:c.instructions+=1;goto B63248a;
case 0x63248c:goto L63248c;
case 0x63248f:c.instructions+=1;goto B63248f;
case 0x632491:goto L632491;
case 0x632493:c.instructions+=1;goto B632493;
case 0x632495:goto L632495;
case 0x632497:c.instructions+=1;goto B632497;
case 0x632499:goto L632499;
case 0x63249c:c.instructions+=1;goto B63249c;
case 0x6324a1:goto L6324a1;
case 0x6324a7:c.instructions+=4;goto B6324a7;
case 0x6324a9:c.instructions+=3;goto B6324a9;
case 0x6324ab:c.instructions+=2;goto B6324ab;
case 0x6324ad:c.instructions+=1;goto B6324ad;
case 0x6324af:goto L6324af;
case 0x6324b1:c.instructions+=1;goto B6324b1;
case 0x6324b3:goto L6324b3;
case 0x6324b6:c.instructions+=1;goto B6324b6;
case 0x6324b8:goto L6324b8;
case 0x6324b9:c.instructions+=2;goto B6324b9;
case 0x6324bb:c.instructions+=1;goto B6324bb;
case 0x6324bd:goto L6324bd;
case 0x6324c0:c.instructions+=1;goto B6324c0;
case 0x6324c2:goto L6324c2;
case 0x6324c4:c.instructions+=1;goto B6324c4;
case 0x6324c6:goto L6324c6;
case 0x6324c8:c.instructions+=1;goto B6324c8;
case 0x6324ca:goto L6324ca;
case 0x6324cd:c.instructions+=1;goto B6324cd;
case 0x6324d2:goto L6324d2;
case 0x6324d8:c.instructions+=4;goto B6324d8;
case 0x6324da:c.instructions+=3;goto B6324da;
case 0x6324dc:c.instructions+=2;goto B6324dc;
case 0x6324de:c.instructions+=1;goto B6324de;
case 0x6324e0:goto L6324e0;
case 0x6324e2:c.instructions+=1;goto B6324e2;
case 0x6324e4:goto L6324e4;
case 0x6324e7:c.instructions+=1;goto B6324e7;
case 0x6324e9:goto L6324e9;
case 0x6324ea:c.instructions+=2;goto B6324ea;
case 0x6324ec:c.instructions+=1;goto B6324ec;
case 0x6324ee:goto L6324ee;
case 0x6324f1:c.instructions+=1;goto B6324f1;
case 0x6324f3:goto L6324f3;
case 0x6324f5:c.instructions+=1;goto B6324f5;
case 0x6324f7:goto L6324f7;
case 0x6324f9:c.instructions+=1;goto B6324f9;
case 0x6324fb:goto L6324fb;
case 0x6324fe:c.instructions+=1;goto B6324fe;
case 0x632503:goto L632503;
case 0x632509:c.instructions+=4;goto B632509;
case 0x63250b:c.instructions+=3;goto B63250b;
case 0x63250d:c.instructions+=2;goto B63250d;
case 0x63250f:c.instructions+=1;goto B63250f;
case 0x632511:goto L632511;
case 0x632513:c.instructions+=1;goto B632513;
case 0x632515:goto L632515;
case 0x632518:c.instructions+=1;goto B632518;
case 0x63251a:goto L63251a;
case 0x63251b:c.instructions+=2;goto B63251b;
case 0x63251d:c.instructions+=1;goto B63251d;
case 0x63251f:goto L63251f;
case 0x632522:c.instructions+=1;goto B632522;
case 0x632524:goto L632524;
case 0x632526:c.instructions+=1;goto B632526;
case 0x632528:goto L632528;
case 0x63252a:c.instructions+=1;goto B63252a;
case 0x63252c:goto L63252c;
case 0x63252f:c.instructions+=1;goto B63252f;
case 0x632534:goto L632534;
case 0x63253a:c.instructions+=4;goto B63253a;
case 0x63253c:c.instructions+=3;goto B63253c;
case 0x63253e:c.instructions+=2;goto B63253e;
case 0x632540:c.instructions+=1;goto B632540;
case 0x632542:goto L632542;
case 0x632544:c.instructions+=1;goto B632544;
case 0x632546:goto L632546;
case 0x632549:c.instructions+=1;goto B632549;
case 0x63254b:goto L63254b;
case 0x63254c:c.instructions+=2;goto B63254c;
case 0x63254e:c.instructions+=1;goto B63254e;
case 0x632550:goto L632550;
case 0x632553:c.instructions+=1;goto B632553;
case 0x632555:goto L632555;
case 0x632557:c.instructions+=1;goto B632557;
case 0x632559:goto L632559;
case 0x63255b:c.instructions+=1;goto B63255b;
case 0x63255d:goto L63255d;
case 0x632560:c.instructions+=1;goto B632560;
case 0x632565:goto L632565;
case 0x63256b:c.instructions+=4;goto B63256b;
case 0x63256d:c.instructions+=3;goto B63256d;
case 0x63256f:c.instructions+=2;goto B63256f;
case 0x632571:c.instructions+=1;goto B632571;
case 0x632573:goto L632573;
case 0x632575:c.instructions+=1;goto B632575;
case 0x632577:goto L632577;
case 0x63257a:c.instructions+=1;goto B63257a;
case 0x63257c:goto L63257c;
case 0x63257d:c.instructions+=2;goto B63257d;
case 0x63257f:c.instructions+=1;goto B63257f;
case 0x632581:goto L632581;
case 0x632584:c.instructions+=1;goto B632584;
case 0x632586:goto L632586;
case 0x632588:c.instructions+=1;goto B632588;
case 0x63258a:goto L63258a;
case 0x63258c:c.instructions+=1;goto B63258c;
case 0x63258e:goto L63258e;
case 0x632591:c.instructions+=1;goto B632591;
case 0x632596:goto L632596;
case 0x63259c:c.instructions+=4;goto B63259c;
case 0x63259e:c.instructions+=3;goto B63259e;
case 0x6325a0:c.instructions+=2;goto B6325a0;
case 0x6325a2:c.instructions+=1;goto B6325a2;
case 0x6325a4:goto L6325a4;
case 0x6325a6:c.instructions+=1;goto B6325a6;
case 0x6325a8:goto L6325a8;
case 0x6325ab:c.instructions+=1;goto B6325ab;
case 0x6325ad:goto L6325ad;
case 0x6325ae:c.instructions+=2;goto B6325ae;
case 0x6325b0:c.instructions+=1;goto B6325b0;
case 0x6325b2:goto L6325b2;
case 0x6325b5:c.instructions+=1;goto B6325b5;
case 0x6325b7:goto L6325b7;
case 0x6325b9:c.instructions+=1;goto B6325b9;
case 0x6325bb:goto L6325bb;
case 0x6325bd:c.instructions+=1;goto B6325bd;
case 0x6325bf:goto L6325bf;
case 0x6325c2:c.instructions+=1;goto B6325c2;
case 0x6325c7:goto L6325c7;
case 0x6325cd:c.instructions+=4;goto B6325cd;
case 0x6325cf:c.instructions+=3;goto B6325cf;
case 0x6325d1:c.instructions+=2;goto B6325d1;
case 0x6325d3:c.instructions+=1;goto B6325d3;
case 0x6325d5:goto L6325d5;
case 0x6325d7:c.instructions+=1;goto B6325d7;
case 0x6325d9:goto L6325d9;
case 0x6325e0:goto L6325e0;
case 0x6325e3:c.instructions+=1;goto B6325e3;
case 0x6325e5:goto L6325e5;
case 0x6325e6:c.instructions+=2;goto B6325e6;
case 0x6325e8:c.instructions+=1;goto B6325e8;
case 0x6325ea:goto L6325ea;
case 0x6325ed:c.instructions+=1;goto B6325ed;
case 0x6325ef:goto L6325ef;
case 0x6325f1:c.instructions+=1;goto B6325f1;
case 0x6325f3:goto L6325f3;
case 0x6325f5:c.instructions+=1;goto B6325f5;
case 0x6325f7:goto L6325f7;
case 0x6325fa:c.instructions+=1;goto B6325fa;
case 0x6325ff:goto L6325ff;
case 0x632605:c.instructions+=4;goto B632605;
case 0x632607:c.instructions+=3;goto B632607;
case 0x632609:c.instructions+=2;goto B632609;
case 0x63260b:c.instructions+=1;goto B63260b;
case 0x63260d:goto L63260d;
case 0x63260f:c.instructions+=1;goto B63260f;
case 0x632611:goto L632611;
case 0x632614:c.instructions+=1;goto B632614;
case 0x632616:goto L632616;
case 0x632617:c.instructions+=2;goto B632617;
case 0x632619:c.instructions+=1;goto B632619;
case 0x63261b:goto L63261b;
case 0x63261e:c.instructions+=1;goto B63261e;
case 0x632620:goto L632620;
case 0x632622:c.instructions+=1;goto B632622;
case 0x632624:goto L632624;
case 0x632626:c.instructions+=1;goto B632626;
case 0x632628:goto L632628;
case 0x63262b:c.instructions+=1;goto B63262b;
case 0x632630:goto L632630;
case 0x632636:c.instructions+=4;goto B632636;
case 0x632638:c.instructions+=3;goto B632638;
case 0x63263a:c.instructions+=2;goto B63263a;
case 0x63263c:c.instructions+=1;goto B63263c;
case 0x63263e:goto L63263e;
case 0x632640:c.instructions+=1;goto B632640;
case 0x632642:goto L632642;
case 0x632645:c.instructions+=1;goto B632645;
case 0x632647:goto L632647;
case 0x632648:c.instructions+=2;goto B632648;
case 0x63264a:c.instructions+=1;goto B63264a;
case 0x63264c:goto L63264c;
case 0x63264f:c.instructions+=1;goto B63264f;
case 0x632651:goto L632651;
case 0x632653:c.instructions+=1;goto B632653;
case 0x632655:goto L632655;
case 0x632657:c.instructions+=1;goto B632657;
case 0x632659:goto L632659;
case 0x63265c:c.instructions+=1;goto B63265c;
case 0x632661:goto L632661;
case 0x632667:c.instructions+=4;goto B632667;
case 0x632669:c.instructions+=3;goto B632669;
case 0x63266b:c.instructions+=2;goto B63266b;
case 0x63266d:c.instructions+=1;goto B63266d;
case 0x63266f:goto L63266f;
case 0x632671:c.instructions+=1;goto B632671;
case 0x632673:goto L632673;
case 0x632676:c.instructions+=1;goto B632676;
case 0x632678:goto L632678;
case 0x632679:c.instructions+=2;goto B632679;
case 0x63267b:c.instructions+=1;goto B63267b;
case 0x63267d:goto L63267d;
case 0x632680:c.instructions+=1;goto B632680;
case 0x632682:goto L632682;
case 0x632684:c.instructions+=1;goto B632684;
case 0x632686:goto L632686;
case 0x632688:c.instructions+=1;goto B632688;
case 0x63268a:goto L63268a;
case 0x63268d:c.instructions+=1;goto B63268d;
case 0x632692:goto L632692;
case 0x632698:c.instructions+=4;goto B632698;
case 0x63269a:c.instructions+=3;goto B63269a;
case 0x63269c:c.instructions+=2;goto B63269c;
case 0x63269e:c.instructions+=1;goto B63269e;
case 0x6326a0:goto L6326a0;
case 0x6326a2:c.instructions+=1;goto B6326a2;
case 0x6326a4:goto L6326a4;
case 0x6326a7:c.instructions+=1;goto B6326a7;
case 0x6326a9:goto L6326a9;
case 0x6326aa:c.instructions+=2;goto B6326aa;
case 0x6326ac:c.instructions+=1;goto B6326ac;
case 0x6326ae:goto L6326ae;
case 0x6326b1:c.instructions+=1;goto B6326b1;
case 0x6326b3:goto L6326b3;
case 0x6326b5:c.instructions+=1;goto B6326b5;
case 0x6326b7:goto L6326b7;
case 0x6326b9:c.instructions+=1;goto B6326b9;
case 0x6326bb:goto L6326bb;
case 0x6326be:c.instructions+=1;goto B6326be;
case 0x6326c3:goto L6326c3;
case 0x6326c7:c.instructions+=6;goto B6326c7;
case 0x6326c8:c.instructions+=5;goto B6326c8;
case 0x6326cc:c.instructions+=4;goto B6326cc;
case 0x6326d1:c.instructions+=3;goto B6326d1;
case 0x6326d2:c.instructions+=2;goto B6326d2;
case 0x6326d4:c.instructions+=1;goto B6326d4;
case 0x6326d9:goto L6326d9;
case 0x6326dd:c.instructions+=2;goto B6326dd;
case 0x6326de:c.instructions+=1;goto B6326de;
case 0x6326e3:goto L6326e3;
case 0x6326e4:c.instructions+=5;goto B6326e4;
case 0x6326e8:c.instructions+=4;goto B6326e8;
case 0x6326ed:c.instructions+=3;goto B6326ed;
case 0x6326ee:c.instructions+=2;goto B6326ee;
case 0x6326f0:c.instructions+=1;goto B6326f0;
case 0x6326f5:goto L6326f5;
case 0x6326f9:c.instructions+=2;goto B6326f9;
case 0x6326fa:c.instructions+=1;goto B6326fa;
case 0x6326ff:goto L6326ff;
case 0x632701:c.instructions+=6;goto B632701;
case 0x632705:c.instructions+=5;goto B632705;
case 0x632706:c.instructions+=4;goto B632706;
case 0x63270a:c.instructions+=3;goto B63270a;
case 0x63270f:c.instructions+=2;goto B63270f;
case 0x632710:c.instructions+=1;goto B632710;
case 0x632715:goto L632715;
case 0x632719:c.instructions+=2;goto B632719;
case 0x63271a:c.instructions+=1;goto B63271a;
case 0x63271f:goto L63271f;
case 0x632726:c.instructions+=6;goto B632726;
case 0x63272a:c.instructions+=5;goto B63272a;
case 0x63272b:c.instructions+=4;goto B63272b;
case 0x63272f:c.instructions+=3;goto B63272f;
case 0x632734:c.instructions+=2;goto B632734;
case 0x632735:c.instructions+=1;goto B632735;
case 0x63273a:goto L63273a;
case 0x63273e:c.instructions+=2;goto B63273e;
case 0x63273f:c.instructions+=1;goto B63273f;
case 0x632744:goto L632744;
case 0x632747:c.instructions+=7;goto B632747;
case 0x63274b:c.instructions+=6;goto B63274b;
case 0x63274f:c.instructions+=5;goto B63274f;
case 0x632750:c.instructions+=4;goto B632750;
case 0x632754:c.instructions+=3;goto B632754;
case 0x632759:c.instructions+=2;goto B632759;
case 0x63275a:c.instructions+=1;goto B63275a;
case 0x63275f:goto L63275f;
case 0x632763:c.instructions+=2;goto B632763;
case 0x632764:c.instructions+=1;goto B632764;
case 0x632769:goto L632769;
case 0x632770:c.instructions+=6;goto B632770;
case 0x632776:c.instructions+=5;goto B632776;
case 0x632779:c.instructions+=4;goto B632779;
case 0x63277b:c.instructions+=3;goto B63277b;
case 0x63277d:c.instructions+=2;goto B63277d;
case 0x632783:c.instructions+=1;goto B632783;
case 0x632785:goto L632785;
case 0x632787:c.instructions+=1;goto B632787;
case 0x632789:goto L632789;
case 0x632790:goto L632790;
case 0x632793:c.instructions+=1;goto B632793;
case 0x632795:goto L632795;
case 0x632796:c.instructions+=2;goto B632796;
case 0x632798:c.instructions+=1;goto B632798;
case 0x63279a:goto L63279a;
case 0x63279d:c.instructions+=1;goto B63279d;
case 0x63279f:goto L63279f;
case 0x6327a1:c.instructions+=1;goto B6327a1;
case 0x6327a3:goto L6327a3;
case 0x6327a5:c.instructions+=1;goto B6327a5;
case 0x6327a7:goto L6327a7;
case 0x6327aa:c.instructions+=1;goto B6327aa;
case 0x6327af:goto L6327af;
case 0x6327b1:c.instructions+=3;goto B6327b1;
case 0x6327b3:c.instructions+=2;goto B6327b3;
case 0x6327b5:c.instructions+=1;goto B6327b5;
case 0x6327b7:goto L6327b7;
case 0x6327b9:c.instructions+=1;goto B6327b9;
case 0x6327bb:goto L6327bb;
case 0x6327c0:goto L6327c0;
case 0x6327c3:c.instructions+=1;goto B6327c3;
case 0x6327c5:goto L6327c5;
case 0x6327c6:c.instructions+=2;goto B6327c6;
case 0x6327c8:c.instructions+=1;goto B6327c8;
case 0x6327ca:goto L6327ca;
case 0x6327cd:c.instructions+=1;goto B6327cd;
case 0x6327cf:goto L6327cf;
case 0x6327d1:c.instructions+=1;goto B6327d1;
case 0x6327d3:goto L6327d3;
case 0x6327d5:c.instructions+=1;goto B6327d5;
case 0x6327d7:goto L6327d7;
case 0x6327da:c.instructions+=1;goto B6327da;
case 0x6327df:goto L6327df;
case 0x6327e6:c.instructions+=4;goto B6327e6;
case 0x6327e8:c.instructions+=3;goto B6327e8;
case 0x6327ea:c.instructions+=2;goto B6327ea;
case 0x6327ec:c.instructions+=1;goto B6327ec;
case 0x6327ee:goto L6327ee;
case 0x6327f0:c.instructions+=1;goto B6327f0;
case 0x6327f2:goto L6327f2;
case 0x6327f5:c.instructions+=1;goto B6327f5;
case 0x6327f7:goto L6327f7;
case 0x6327f8:c.instructions+=2;goto B6327f8;
case 0x6327fa:c.instructions+=1;goto B6327fa;
case 0x6327fc:goto L6327fc;
case 0x6327ff:c.instructions+=1;goto B6327ff;
case 0x632801:goto L632801;
case 0x632803:c.instructions+=1;goto B632803;
case 0x632805:goto L632805;
case 0x632807:c.instructions+=1;goto B632807;
case 0x632809:goto L632809;
case 0x63280c:c.instructions+=1;goto B63280c;
case 0x632811:goto L632811;
case 0x632815:c.instructions+=4;goto B632815;
case 0x632817:c.instructions+=3;goto B632817;
case 0x632819:c.instructions+=2;goto B632819;
case 0x63281b:c.instructions+=1;goto B63281b;
case 0x63281d:goto L63281d;
case 0x63281f:c.instructions+=1;goto B63281f;
case 0x632821:goto L632821;
case 0x632824:c.instructions+=1;goto B632824;
case 0x632826:goto L632826;
case 0x632827:c.instructions+=2;goto B632827;
case 0x632829:c.instructions+=1;goto B632829;
case 0x63282b:goto L63282b;
case 0x63282e:c.instructions+=1;goto B63282e;
case 0x632830:goto L632830;
case 0x632832:c.instructions+=1;goto B632832;
case 0x632834:goto L632834;
case 0x632836:c.instructions+=1;goto B632836;
case 0x632838:goto L632838;
case 0x63283b:c.instructions+=1;goto B63283b;
case 0x632840:goto L632840;
case 0x632844:c.instructions+=6;goto B632844;
case 0x632845:c.instructions+=5;goto B632845;
case 0x632849:c.instructions+=4;goto B632849;
case 0x63284e:c.instructions+=3;goto B63284e;
case 0x63284f:c.instructions+=2;goto B63284f;
case 0x632851:c.instructions+=1;goto B632851;
case 0x632856:goto L632856;
case 0x63285a:c.instructions+=2;goto B63285a;
case 0x63285b:c.instructions+=1;goto B63285b;
case 0x632860:goto L632860;
case 0x632863:c.instructions+=2;goto B632863;
case 0x632865:c.instructions+=1;goto B632865;
case 0x632867:goto L632867;
case 0x632869:c.instructions+=1;goto B632869;
case 0x63286b:goto L63286b;
case 0x63286d:c.instructions+=2;goto B63286d;
case 0x63286f:c.instructions+=1;goto B63286f;
case 0x632871:goto L632871;
case 0x632874:c.instructions+=1;goto B632874;
case 0x632876:goto L632876;
case 0x632877:c.instructions+=2;goto B632877;
case 0x632879:c.instructions+=1;goto B632879;
case 0x63287b:goto L63287b;
case 0x63287e:c.instructions+=1;goto B63287e;
case 0x632880:goto L632880;
case 0x632882:c.instructions+=1;goto B632882;
case 0x632884:goto L632884;
case 0x632887:c.instructions+=1;goto B632887;
case 0x63288c:goto L63288c;
case 0x63288d:c.instructions+=5;goto B63288d;
case 0x632891:c.instructions+=4;goto B632891;
case 0x632896:c.instructions+=3;goto B632896;
case 0x632897:c.instructions+=2;goto B632897;
case 0x632899:c.instructions+=1;goto B632899;
case 0x63289e:goto L63289e;
case 0x6328a2:c.instructions+=2;goto B6328a2;
case 0x6328a3:c.instructions+=1;goto B6328a3;
case 0x6328a8:goto L6328a8;
case 0x6328ab:c.instructions+=2;goto B6328ab;
case 0x6328ad:c.instructions+=1;goto B6328ad;
case 0x6328af:goto L6328af;
case 0x6328b1:c.instructions+=1;goto B6328b1;
case 0x6328b3:goto L6328b3;
case 0x6328b5:c.instructions+=2;goto B6328b5;
case 0x6328b7:c.instructions+=1;goto B6328b7;
case 0x6328b9:goto L6328b9;
case 0x6328c0:goto L6328c0;
case 0x6328c3:c.instructions+=1;goto B6328c3;
case 0x6328c5:goto L6328c5;
case 0x6328c6:c.instructions+=2;goto B6328c6;
case 0x6328c8:c.instructions+=1;goto B6328c8;
case 0x6328ca:goto L6328ca;
case 0x6328cd:c.instructions+=1;goto B6328cd;
case 0x6328cf:goto L6328cf;
case 0x6328d1:c.instructions+=1;goto B6328d1;
case 0x6328d3:goto L6328d3;
case 0x6328d6:c.instructions+=1;goto B6328d6;
case 0x6328db:goto L6328db;
case 0x6328dc:c.instructions+=5;goto B6328dc;
case 0x6328de:c.instructions+=4;goto B6328de;
case 0x6328e2:c.instructions+=3;goto B6328e2;
case 0x6328e7:c.instructions+=2;goto B6328e7;
case 0x6328e8:c.instructions+=1;goto B6328e8;
case 0x6328ed:goto L6328ed;
case 0x6328f1:c.instructions+=2;goto B6328f1;
case 0x6328f2:c.instructions+=1;goto B6328f2;
case 0x6328f7:goto L6328f7;
case 0x6328fa:c.instructions+=2;goto B6328fa;
case 0x6328fc:c.instructions+=1;goto B6328fc;
case 0x6328fe:goto L6328fe;
case 0x632900:c.instructions+=1;goto B632900;
case 0x632902:goto L632902;
case 0x632904:c.instructions+=2;goto B632904;
case 0x632906:c.instructions+=1;goto B632906;
case 0x632908:goto L632908;
case 0x63290b:c.instructions+=1;goto B63290b;
case 0x63290d:goto L63290d;
case 0x63290e:c.instructions+=2;goto B63290e;
case 0x632910:c.instructions+=1;goto B632910;
case 0x632912:goto L632912;
case 0x632915:c.instructions+=1;goto B632915;
case 0x632917:goto L632917;
case 0x632919:c.instructions+=1;goto B632919;
case 0x63291b:goto L63291b;
case 0x63291e:c.instructions+=1;goto B63291e;
case 0x632923:goto L632923;
case 0x632925:c.instructions+=2;goto B632925;
case 0x63292c:c.instructions+=1;goto B63292c;
case 0x63292e:goto L63292e;
case 0x632933:c.instructions+=1;goto B632933;
case 0x632938:goto L632938;
case 0x632939:c.instructions+=4;goto B632939;
case 0x63293b:c.instructions+=3;goto B63293b;
case 0x63293c:c.instructions+=2;goto B63293c;
case 0x63293d:c.instructions+=1;goto B63293d;
case 0x632942:goto L632942;
case 0x632945:c.instructions+=1;goto B632945;
case 0x632947:goto L632947;
case 0x63294e:c.instructions+=3;goto B63294e;
case 0x632950:c.instructions+=2;goto B632950;
case 0x632955:c.instructions+=1;goto B632955;
case 0x632957:goto L632957;
case 0x63295c:goto L63295c;
case 0x63295d:c.instructions+=5;goto B63295d;
case 0x63295e:c.instructions+=4;goto B63295e;
case 0x632962:c.instructions+=3;goto B632962;
case 0x632967:c.instructions+=2;goto B632967;
case 0x632968:c.instructions+=1;goto B632968;
case 0x63296d:goto L63296d;
case 0x632971:c.instructions+=2;goto B632971;
case 0x632972:c.instructions+=1;goto B632972;
case 0x632977:goto L632977;
case 0x63297a:c.instructions+=3;goto B63297a;
case 0x63297c:c.instructions+=2;goto B63297c;
case 0x632982:c.instructions+=1;goto B632982;
case 0x632984:goto L632984;
case 0x632986:c.instructions+=1;goto B632986;
case 0x632988:goto L632988;
case 0x63298a:c.instructions+=2;goto B63298a;
case 0x63298c:c.instructions+=1;goto B63298c;
case 0x63298e:goto L63298e;
case 0x632990:goto L632990;
case 0x632993:c.instructions+=1;goto B632993;
case 0x632995:goto L632995;
case 0x632996:c.instructions+=2;goto B632996;
case 0x632998:c.instructions+=1;goto B632998;
case 0x63299a:goto L63299a;
case 0x63299d:c.instructions+=1;goto B63299d;
case 0x63299f:goto L63299f;
case 0x6329a1:c.instructions+=1;goto B6329a1;
case 0x6329a3:goto L6329a3;
case 0x6329a6:c.instructions+=1;goto B6329a6;
case 0x6329ab:goto L6329ab;
case 0x6329ac:c.instructions+=5;goto B6329ac;
case 0x6329b0:c.instructions+=4;goto B6329b0;
case 0x6329b5:c.instructions+=3;goto B6329b5;
case 0x6329b6:c.instructions+=2;goto B6329b6;
case 0x6329b8:c.instructions+=1;goto B6329b8;
case 0x6329bd:goto L6329bd;
case 0x6329c1:c.instructions+=2;goto B6329c1;
case 0x6329c2:c.instructions+=1;goto B6329c2;
case 0x6329c7:goto L6329c7;
case 0x6329ca:c.instructions+=2;goto B6329ca;
case 0x6329cc:c.instructions+=1;goto B6329cc;
case 0x6329ce:goto L6329ce;
case 0x6329d0:c.instructions+=1;goto B6329d0;
case 0x6329d2:goto L6329d2;
case 0x6329d4:c.instructions+=2;goto B6329d4;
case 0x6329d6:c.instructions+=1;goto B6329d6;
case 0x6329d8:goto L6329d8;
case 0x6329db:c.instructions+=1;goto B6329db;
case 0x6329dd:goto L6329dd;
case 0x6329de:c.instructions+=2;goto B6329de;
case 0x6329e0:c.instructions+=1;goto B6329e0;
case 0x6329e2:goto L6329e2;
case 0x6329e5:c.instructions+=1;goto B6329e5;
case 0x6329e7:goto L6329e7;
case 0x6329e9:c.instructions+=1;goto B6329e9;
case 0x6329eb:goto L6329eb;
case 0x6329ee:c.instructions+=1;goto B6329ee;
case 0x6329f3:goto L6329f3;
case 0x6329f4:c.instructions+=5;goto B6329f4;
case 0x6329f6:c.instructions+=4;goto B6329f6;
case 0x6329fa:c.instructions+=3;goto B6329fa;
case 0x6329ff:c.instructions+=2;goto B6329ff;
case 0x632a00:c.instructions+=1;goto B632a00;
case 0x632a05:goto L632a05;
case 0x632a09:c.instructions+=2;goto B632a09;
case 0x632a0a:c.instructions+=1;goto B632a0a;
case 0x632a0f:goto L632a0f;
case 0x632a10:c.instructions+=5;goto B632a10;
case 0x632a14:c.instructions+=4;goto B632a14;
case 0x632a19:c.instructions+=3;goto B632a19;
case 0x632a1a:c.instructions+=2;goto B632a1a;
case 0x632a20:c.instructions+=1;goto B632a20;
case 0x632a25:goto L632a25;
case 0x632a29:c.instructions+=2;goto B632a29;
case 0x632a2a:c.instructions+=1;goto B632a2a;
case 0x632a2f:goto L632a2f;
case 0x632a30:c.instructions+=5;goto B632a30;
case 0x632a34:c.instructions+=4;goto B632a34;
case 0x632a39:c.instructions+=3;goto B632a39;
case 0x632a3a:c.instructions+=2;goto B632a3a;
case 0x632a40:c.instructions+=1;goto B632a40;
case 0x632a45:goto L632a45;
case 0x632a49:c.instructions+=2;goto B632a49;
case 0x632a4a:c.instructions+=1;goto B632a4a;
case 0x632a4f:goto L632a4f;
case 0x632a55:c.instructions+=4;goto B632a55;
case 0x632a5b:c.instructions+=3;goto B632a5b;
case 0x632a5e:c.instructions+=2;goto B632a5e;
case 0x632a60:c.instructions+=1;goto B632a60;
case 0x632a62:goto L632a62;
case 0x632a64:c.instructions+=1;goto B632a64;
case 0x632a66:goto L632a66;
case 0x632a68:c.instructions+=2;goto B632a68;
case 0x632a6a:c.instructions+=1;goto B632a6a;
case 0x632a6c:goto L632a6c;
case 0x632a70:goto L632a70;
case 0x632a73:c.instructions+=1;goto B632a73;
case 0x632a75:goto L632a75;
case 0x632a76:c.instructions+=2;goto B632a76;
case 0x632a78:c.instructions+=1;goto B632a78;
case 0x632a7a:goto L632a7a;
case 0x632a7d:c.instructions+=1;goto B632a7d;
case 0x632a7f:goto L632a7f;
case 0x632a81:c.instructions+=1;goto B632a81;
case 0x632a83:goto L632a83;
case 0x632a86:c.instructions+=1;goto B632a86;
case 0x632a8b:goto L632a8b;
case 0x632a91:c.instructions+=4;goto B632a91;
case 0x632a93:c.instructions+=3;goto B632a93;
case 0x632a95:c.instructions+=2;goto B632a95;
case 0x632a97:c.instructions+=1;goto B632a97;
case 0x632a99:goto L632a99;
case 0x632a9b:c.instructions+=1;goto B632a9b;
case 0x632a9d:goto L632a9d;
case 0x632aa0:goto L632aa0;
case 0x632aa3:c.instructions+=1;goto B632aa3;
case 0x632aa5:goto L632aa5;
case 0x632aa6:c.instructions+=2;goto B632aa6;
case 0x632aa8:c.instructions+=1;goto B632aa8;
case 0x632aaa:goto L632aaa;
case 0x632aad:c.instructions+=1;goto B632aad;
case 0x632aaf:goto L632aaf;
case 0x632ab1:c.instructions+=1;goto B632ab1;
case 0x632ab3:goto L632ab3;
case 0x632ab5:c.instructions+=1;goto B632ab5;
case 0x632ab7:goto L632ab7;
case 0x632aba:c.instructions+=1;goto B632aba;
case 0x632abf:goto L632abf;
case 0x632ac5:c.instructions+=4;goto B632ac5;
case 0x632ac7:c.instructions+=3;goto B632ac7;
case 0x632ac9:c.instructions+=2;goto B632ac9;
case 0x632acb:c.instructions+=1;goto B632acb;
case 0x632acd:goto L632acd;
case 0x632acf:c.instructions+=1;goto B632acf;
case 0x632ad1:goto L632ad1;
case 0x632ad4:c.instructions+=1;goto B632ad4;
case 0x632ad6:goto L632ad6;
case 0x632ad7:c.instructions+=2;goto B632ad7;
case 0x632ad9:c.instructions+=1;goto B632ad9;
case 0x632adb:goto L632adb;
case 0x632ade:c.instructions+=1;goto B632ade;
case 0x632ae0:goto L632ae0;
case 0x632ae2:c.instructions+=1;goto B632ae2;
case 0x632ae4:goto L632ae4;
case 0x632ae6:c.instructions+=1;goto B632ae6;
case 0x632ae8:goto L632ae8;
case 0x632aeb:c.instructions+=1;goto B632aeb;
case 0x632af0:goto L632af0;
case 0x632af2:c.instructions+=2;goto B632af2;
case 0x632af4:c.instructions+=1;goto B632af4;
case 0x632af6:goto L632af6;
case 0x632afd:c.instructions+=2;goto B632afd;
case 0x632aff:c.instructions+=1;goto B632aff;
case 0x632b01:goto L632b01;
case 0x632b08:c.instructions+=3;goto B632b08;
case 0x632b0e:c.instructions+=2;goto B632b0e;
case 0x632b10:c.instructions+=1;goto B632b10;
case 0x632b12:goto L632b12;
case 0x632b17:goto L632b17;
case 0x632b19:c.instructions+=1;goto B632b19;
case 0x632b1b:goto L632b1b;
case 0x632b1c:c.instructions+=4;goto B632b1c;
case 0x632b1e:c.instructions+=3;goto B632b1e;
case 0x632b1f:c.instructions+=2;goto B632b1f;
case 0x632b20:c.instructions+=1;goto B632b20;
case 0x632b25:goto L632b25;
case 0x632b28:c.instructions+=2;goto B632b28;
case 0x632b2a:c.instructions+=1;goto B632b2a;
case 0x632b2c:goto L632b2c;
case 0x632b33:goto L632b33;
case 0x632b38:c.instructions+=1;goto B632b38;
case 0x632b3d:goto L632b3d;
case 0x632b42:c.instructions+=2;goto B632b42;
case 0x632b46:c.instructions+=1;goto B632b46;
case 0x632b4b:goto L632b4b;
case 0x632b50:c.instructions+=2;goto B632b50;
case 0x632b54:c.instructions+=1;goto B632b54;
case 0x632b59:goto L632b59;
case 0x632b5e:c.instructions+=1;goto B632b5e;
case 0x632b63:goto L632b63;
case 0x632b68:c.instructions+=1;goto B632b68;
case 0x632b6d:goto L632b6d;
case 0x632b72:c.instructions+=1;goto B632b72;
case 0x632b77:goto L632b77;
case 0x632b7c:c.instructions+=2;goto B632b7c;
case 0x632b80:c.instructions+=1;goto B632b80;
case 0x632b85:goto L632b85;
case 0x632b8a:c.instructions+=2;goto B632b8a;
case 0x632b8e:c.instructions+=1;goto B632b8e;
case 0x632b93:goto L632b93;
case 0x632b97:c.instructions+=7;goto B632b97;
case 0x632b9d:c.instructions+=6;goto B632b9d;
case 0x632ba0:c.instructions+=5;goto B632ba0;
case 0x632ba6:c.instructions+=4;goto B632ba6;
case 0x632bad:c.instructions+=3;goto B632bad;
case 0x632bb1:c.instructions+=2;goto B632bb1;
case 0x632bb9:c.instructions+=1;goto B632bb9;
case 0x632bc0:goto L632bc0;
case 0x632bc7:c.instructions+=3;goto B632bc7;
case 0x632bc9:c.instructions+=2;goto B632bc9;
case 0x632bcb:c.instructions+=1;goto B632bcb;
case 0x632bd1:goto L632bd1;
case 0x632bd5:c.instructions+=2;goto B632bd5;
case 0x632bd9:c.instructions+=1;goto B632bd9;
case 0x632bdf:goto L632bdf;
case 0x632be5:c.instructions+=7;goto B632be5;
case 0x632be8:c.instructions+=6;goto B632be8;
case 0x632beb:c.instructions+=5;goto B632beb;
case 0x632bef:c.instructions+=4;goto B632bef;
case 0x632bf2:c.instructions+=3;goto B632bf2;
case 0x632bf4:c.instructions+=2;goto B632bf4;
case 0x632bf6:c.instructions+=1;goto B632bf6;
case 0x632bfc:goto L632bfc;
case 0x632bff:c.instructions+=3;goto B632bff;
case 0x632c06:c.instructions+=2;goto B632c06;
case 0x632c09:c.instructions+=1;goto B632c09;
case 0x632c10:goto L632c10;
case 0x632c13:c.instructions+=5;goto B632c13;
case 0x632c1a:c.instructions+=4;goto B632c1a;
case 0x632c1e:c.instructions+=3;goto B632c1e;
case 0x632c22:c.instructions+=2;goto B632c22;
case 0x632c24:c.instructions+=1;goto B632c24;
case 0x632c26:goto L632c26;
case 0x632c28:c.instructions+=1;goto B632c28;
case 0x632c2a:goto L632c2a;
case 0x632c2b:c.instructions+=3;goto B632c2b;
case 0x632c2e:c.instructions+=2;goto B632c2e;
case 0x632c30:c.instructions+=1;goto B632c30;
case 0x632c32:goto L632c32;
case 0x632c37:goto L632c37;
case 0x632c39:c.instructions+=1;goto B632c39;
case 0x632c3f:goto L632c3f;
case 0x632c46:c.instructions+=6;goto B632c46;
case 0x632c48:c.instructions+=5;goto B632c48;
case 0x632c4c:c.instructions+=4;goto B632c4c;
case 0x632c4e:c.instructions+=3;goto B632c4e;
case 0x632c4f:c.instructions+=2;goto B632c4f;
case 0x632c51:c.instructions+=1;goto B632c51;
case 0x632c56:goto L632c56;
case 0x632c58:c.instructions+=1;goto B632c58;
case 0x632c5e:goto L632c5e;
case 0x632c60:c.instructions+=3;goto B632c60;
case 0x632c61:c.instructions+=2;goto B632c61;
case 0x632c63:c.instructions+=1;goto B632c63;
case 0x632c68:goto L632c68;
case 0x632c6a:c.instructions+=1;goto B632c6a;
case 0x632c6c:goto L632c6c;
case 0x632c6f:c.instructions+=2;goto B632c6f;
case 0x632c73:c.instructions+=1;goto B632c73;
case 0x632c75:goto L632c75;
case 0x632c7d:goto L632c7d;
case 0x632c81:c.instructions+=2;goto B632c81;
case 0x632c88:c.instructions+=1;goto B632c88;
case 0x632c90:goto L632c90;
case 0x632c97:c.instructions+=3;goto B632c97;
case 0x632c99:c.instructions+=2;goto B632c99;
case 0x632c9b:c.instructions+=1;goto B632c9b;
case 0x632ca1:goto L632ca1;
case 0x632ca6:c.instructions+=1;goto B632ca6;
case 0x632cab:goto L632cab;
case 0x632caf:c.instructions+=5;goto B632caf;
case 0x632cb5:c.instructions+=4;goto B632cb5;
case 0x632cb8:c.instructions+=3;goto B632cb8;
case 0x632cbd:c.instructions+=2;goto B632cbd;
case 0x632cc1:c.instructions+=1;goto B632cc1;
case 0x632cc3:goto L632cc3;
case 0x632cc6:c.instructions+=6;goto B632cc6;
case 0x632cc9:c.instructions+=5;goto B632cc9;
case 0x632ccc:c.instructions+=4;goto B632ccc;
case 0x632ccf:c.instructions+=3;goto B632ccf;
case 0x632cd1:c.instructions+=2;goto B632cd1;
case 0x632cd3:c.instructions+=1;goto B632cd3;
case 0x632cd5:goto L632cd5;
case 0x632cd8:c.instructions+=2;goto B632cd8;
case 0x632cdf:c.instructions+=1;goto B632cdf;
case 0x632ce2:goto L632ce2;
case 0x632ce5:c.instructions+=5;goto B632ce5;
case 0x632cec:c.instructions+=4;goto B632cec;
case 0x632cf0:c.instructions+=3;goto B632cf0;
case 0x632cf4:c.instructions+=2;goto B632cf4;
case 0x632cf6:c.instructions+=1;goto B632cf6;
case 0x632cf8:goto L632cf8;
case 0x632cfa:c.instructions+=1;goto B632cfa;
case 0x632cfc:goto L632cfc;
case 0x632cfd:c.instructions+=3;goto B632cfd;
case 0x632d00:c.instructions+=2;goto B632d00;
case 0x632d02:c.instructions+=1;goto B632d02;
case 0x632d04:goto L632d04;
case 0x632d06:goto L632d06;
case 0x632d0a:c.instructions+=3;goto B632d0a;
case 0x632d0c:c.instructions+=2;goto B632d0c;
case 0x632d10:c.instructions+=1;goto B632d10;
case 0x632d12:goto L632d12;
case 0x632d13:c.instructions+=2;goto B632d13;
case 0x632d18:c.instructions+=1;goto B632d18;
case 0x632d1a:goto L632d1a;
case 0x632d1c:c.instructions+=1;goto B632d1c;
case 0x632d1e:goto L632d1e;
case 0x632d21:c.instructions+=1;goto B632d21;
case 0x632d23:goto L632d23;
case 0x632d27:c.instructions+=1;goto B632d27;
case 0x632d29:goto L632d29;
case 0x632d2a:c.instructions+=2;goto B632d2a;
case 0x632d2f:c.instructions+=1;goto B632d2f;
case 0x632d31:goto L632d31;
case 0x632d35:c.instructions+=1;goto B632d35;
case 0x632d37:goto L632d37;
case 0x632d38:c.instructions+=1;goto B632d38;
case 0x632d3d:goto L632d3d;
case 0x632d42:goto L632d42;
case 0x632d45:goto L632d45;
case 0x632d47:c.instructions+=1;goto B632d47;
case 0x632d49:goto L632d49;
case 0x632d4b:c.instructions+=1;goto B632d4b;
case 0x632d4d:goto L632d4d;
case 0x632d4f:c.instructions+=2;goto B632d4f;
case 0x632d51:c.instructions+=1;goto B632d51;
case 0x632d53:goto L632d53;
case 0x632d56:c.instructions+=1;goto B632d56;
case 0x632d58:goto L632d58;
case 0x632d59:c.instructions+=2;goto B632d59;
case 0x632d5b:c.instructions+=1;goto B632d5b;
case 0x632d5d:goto L632d5d;
case 0x632d60:c.instructions+=1;goto B632d60;
case 0x632d62:goto L632d62;
case 0x632d64:c.instructions+=1;goto B632d64;
case 0x632d66:goto L632d66;
case 0x632d69:c.instructions+=1;goto B632d69;
case 0x632d6e:goto L632d6e;
case 0x632d70:goto L632d70;
case 0x632d77:c.instructions+=6;goto B632d77;
case 0x632d7b:c.instructions+=5;goto B632d7b;
case 0x632d7e:c.instructions+=4;goto B632d7e;
case 0x632d7f:c.instructions+=3;goto B632d7f;
case 0x632d86:c.instructions+=2;goto B632d86;
case 0x632d8a:c.instructions+=1;goto B632d8a;
case 0x632d90:goto L632d90;
case 0x632d97:c.instructions+=9;goto B632d97;
case 0x632d9b:c.instructions+=8;goto B632d9b;
case 0x632d9f:c.instructions+=7;goto B632d9f;
case 0x632da2:c.instructions+=6;goto B632da2;
case 0x632da5:c.instructions+=5;goto B632da5;
case 0x632da6:c.instructions+=4;goto B632da6;
case 0x632dad:c.instructions+=3;goto B632dad;
case 0x632db1:c.instructions+=2;goto B632db1;
case 0x632db5:c.instructions+=1;goto B632db5;
case 0x632dbb:goto L632dbb;
case 0x632dbf:c.instructions+=8;goto B632dbf;
case 0x632dc0:c.instructions+=7;goto B632dc0;
case 0x632dc6:c.instructions+=6;goto B632dc6;
case 0x632dcc:c.instructions+=5;goto B632dcc;
case 0x632dcd:c.instructions+=4;goto B632dcd;
case 0x632dce:c.instructions+=3;goto B632dce;
case 0x632dcf:c.instructions+=2;goto B632dcf;
case 0x632dd2:c.instructions+=1;goto B632dd2;
case 0x632de0:goto L632de0;
case 0x632de6:c.instructions+=17;goto B632de6;
case 0x632dec:c.instructions+=16;goto B632dec;
case 0x632ded:c.instructions+=15;goto B632ded;
case 0x632dee:c.instructions+=14;goto B632dee;
case 0x632df5:c.instructions+=13;goto B632df5;
case 0x632df8:c.instructions+=12;goto B632df8;
case 0x632df9:c.instructions+=11;goto B632df9;
case 0x632e00:c.instructions+=10;goto B632e00;
case 0x632e01:c.instructions+=9;goto B632e01;
case 0x632e03:c.instructions+=8;goto B632e03;
case 0x632e09:c.instructions+=7;goto B632e09;
case 0x632e0a:c.instructions+=6;goto B632e0a;
case 0x632e0c:c.instructions+=5;goto B632e0c;
case 0x632e0e:c.instructions+=4;goto B632e0e;
case 0x632e10:c.instructions+=3;goto B632e10;
case 0x632e11:c.instructions+=2;goto B632e11;
case 0x632e16:c.instructions+=1;goto B632e16;
case 0x632e1b:goto L632e1b;
case 0x632e1e:c.instructions+=8;goto B632e1e;
case 0x632e1f:c.instructions+=7;goto B632e1f;
case 0x632e21:c.instructions+=6;goto B632e21;
case 0x632e22:c.instructions+=5;goto B632e22;
case 0x632e23:c.instructions+=4;goto B632e23;
case 0x632e25:c.instructions+=3;goto B632e25;
case 0x632e26:c.instructions+=2;goto B632e26;
case 0x632e2b:c.instructions+=1;goto B632e2b;
case 0x632e30:goto L632e30;
case 0x632e32:goto L632e32;
case 0x632e34:c.instructions+=1;goto B632e34;
case 0x632e36:goto L632e36;
case 0x632e38:c.instructions+=1;goto B632e38;
case 0x632e3d:goto L632e3d;
case 0x632e40:c.instructions+=3;goto B632e40;
case 0x632e42:c.instructions+=2;goto B632e42;
case 0x632e46:c.instructions+=1;goto B632e46;
case 0x632e4b:goto L632e4b;
case 0x632e51:c.instructions+=1;goto B632e51;
case 0x632e53:goto L632e53;
case 0x632e5a:c.instructions+=3;goto B632e5a;
case 0x632e5e:c.instructions+=2;goto B632e5e;
case 0x632e60:c.instructions+=1;goto B632e60;
case 0x632e62:goto L632e62;
case 0x632e69:c.instructions+=2;goto B632e69;
case 0x632e6b:c.instructions+=1;goto B632e6b;
case 0x632e6d:goto L632e6d;
case 0x632e71:c.instructions+=1;goto B632e71;
case 0x632e72:goto L632e72;
case 0x632e79:c.instructions+=8;goto B632e79;
case 0x632e7c:c.instructions+=7;goto B632e7c;
case 0x632e7d:c.instructions+=6;goto B632e7d;
case 0x632e7e:c.instructions+=5;goto B632e7e;
case 0x632e80:c.instructions+=4;goto B632e80;
case 0x632e82:c.instructions+=3;goto B632e82;
case 0x632e83:c.instructions+=2;goto B632e83;
case 0x632e88:c.instructions+=1;goto B632e88;
case 0x632e8d:goto L632e8d;
case 0x632e93:c.instructions+=2;goto B632e93;
case 0x632e95:c.instructions+=1;goto B632e95;
case 0x632e97:goto L632e97;
case 0x632e99:c.instructions+=1;goto B632e99;
case 0x632e9b:goto L632e9b;
case 0x632e9c:c.instructions+=6;goto B632e9c;
case 0x632e9d:c.instructions+=5;goto B632e9d;
case 0x632e9e:c.instructions+=4;goto B632e9e;
case 0x632ea0:c.instructions+=3;goto B632ea0;
case 0x632ea1:c.instructions+=2;goto B632ea1;
case 0x632ea7:c.instructions+=1;goto B632ea7;
case 0x632ea8:goto L632ea8;
case 0x632ea9:c.instructions+=1;goto B632ea9;
case 0x632eae:goto L632eae;
case 0x632eb2:c.instructions+=7;goto B632eb2;
case 0x632eb5:c.instructions+=6;goto B632eb5;
case 0x632eb6:c.instructions+=5;goto B632eb6;
case 0x632eb7:c.instructions+=4;goto B632eb7;
case 0x632eb8:c.instructions+=3;goto B632eb8;
case 0x632eb9:c.instructions+=2;goto B632eb9;
case 0x632ebf:c.instructions+=1;goto B632ebf;
case 0x632ec0:goto L632ec0;
case 0x632ec6:c.instructions+=10;goto B632ec6;
case 0x632ec7:c.instructions+=9;goto B632ec7;
case 0x632ec8:c.instructions+=8;goto B632ec8;
case 0x632ec9:c.instructions+=7;goto B632ec9;
case 0x632ecb:c.instructions+=6;goto B632ecb;
case 0x632ecc:c.instructions+=5;goto B632ecc;
case 0x632ece:c.instructions+=4;goto B632ece;
case 0x632ed4:c.instructions+=3;goto B632ed4;
case 0x632edc:c.instructions+=2;goto B632edc;
case 0x632ede:c.instructions+=1;goto B632ede;
case 0x632ee0:goto L632ee0;
case 0x632ee1:c.instructions+=2;goto B632ee1;
case 0x632ee3:c.instructions+=1;goto B632ee3;
case 0x632ee8:goto L632ee8;
case 0x632eec:c.instructions+=6;goto B632eec;
case 0x632ef0:c.instructions+=5;goto B632ef0;
case 0x632ef1:c.instructions+=4;goto B632ef1;
case 0x632ef4:c.instructions+=3;goto B632ef4;
case 0x632ef8:c.instructions+=2;goto B632ef8;
case 0x632efc:c.instructions+=1;goto B632efc;
case 0x632efe:goto L632efe;
case 0x632f02:c.instructions+=56;goto B632f02;
case 0x632f04:c.instructions+=55;goto B632f04;
case 0x632f0a:c.instructions+=54;goto B632f0a;
case 0x632f0f:c.instructions+=53;goto B632f0f;
case 0x632f14:c.instructions+=52;goto B632f14;
case 0x632f18:c.instructions+=51;goto B632f18;
case 0x632f1c:c.instructions+=50;goto B632f1c;
case 0x632f20:c.instructions+=49;goto B632f20;
case 0x632f25:c.instructions+=48;goto B632f25;
case 0x632f2a:c.instructions+=47;goto B632f2a;
case 0x632f2e:c.instructions+=46;goto B632f2e;
case 0x632f32:c.instructions+=45;goto B632f32;
case 0x632f36:c.instructions+=44;goto B632f36;
case 0x632f3b:c.instructions+=43;goto B632f3b;
case 0x632f3f:c.instructions+=42;goto B632f3f;
case 0x632f44:c.instructions+=41;goto B632f44;
case 0x632f48:c.instructions+=40;goto B632f48;
case 0x632f4c:c.instructions+=39;goto B632f4c;
case 0x632f50:c.instructions+=38;goto B632f50;
case 0x632f54:c.instructions+=37;goto B632f54;
case 0x632f59:c.instructions+=36;goto B632f59;
case 0x632f5d:c.instructions+=35;goto B632f5d;
case 0x632f62:c.instructions+=34;goto B632f62;
case 0x632f66:c.instructions+=33;goto B632f66;
case 0x632f6b:c.instructions+=32;goto B632f6b;
case 0x632f70:c.instructions+=31;goto B632f70;
case 0x632f74:c.instructions+=30;goto B632f74;
case 0x632f79:c.instructions+=29;goto B632f79;
case 0x632f7e:c.instructions+=28;goto B632f7e;
case 0x632f83:c.instructions+=27;goto B632f83;
case 0x632f87:c.instructions+=26;goto B632f87;
case 0x632f8c:c.instructions+=25;goto B632f8c;
case 0x632f91:c.instructions+=24;goto B632f91;
case 0x632f96:c.instructions+=23;goto B632f96;
case 0x632f9a:c.instructions+=22;goto B632f9a;
case 0x632f9f:c.instructions+=21;goto B632f9f;
case 0x632fa3:c.instructions+=20;goto B632fa3;
case 0x632fa7:c.instructions+=19;goto B632fa7;
case 0x632fab:c.instructions+=18;goto B632fab;
case 0x632fb0:c.instructions+=17;goto B632fb0;
case 0x632fb4:c.instructions+=16;goto B632fb4;
case 0x632fb8:c.instructions+=15;goto B632fb8;
case 0x632fbc:c.instructions+=14;goto B632fbc;
case 0x632fc1:c.instructions+=13;goto B632fc1;
case 0x632fc5:c.instructions+=12;goto B632fc5;
case 0x632fc9:c.instructions+=11;goto B632fc9;
case 0x632fce:c.instructions+=10;goto B632fce;
case 0x632fd2:c.instructions+=9;goto B632fd2;
case 0x632fd6:c.instructions+=8;goto B632fd6;
case 0x632fda:c.instructions+=7;goto B632fda;
case 0x632fdf:c.instructions+=6;goto B632fdf;
case 0x632fe3:c.instructions+=5;goto B632fe3;
case 0x632fe7:c.instructions+=4;goto B632fe7;
case 0x632fec:c.instructions+=3;goto B632fec;
case 0x632ff4:c.instructions+=2;goto B632ff4;
case 0x632ff8:c.instructions+=1;goto B632ff8;
default:missing_instruction(c.pc);}
B632000:L632000:{c.instructions+=2;NFSU2_TR(0x632000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632001:{NFSU2_TR(0x632001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632006ull));
TAIL_STATIC(0x610530u,610);
}
B632006:L632006:{c.instructions+=5;NFSU2_TR(0x632006);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B632009:{NFSU2_TR(0x632009);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63200b:{NFSU2_TR(0x63200b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x588ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632011:{NFSU2_TR(0x632011);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B632013:{NFSU2_TR(0x632013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63201f;}}
}
B632015:L632015:{c.instructions+=3;NFSU2_TR(0x632015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63201b:{NFSU2_TR(0x63201b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63201d:{NFSU2_TR(0x63201d);
if(r1(R+518)){{goto L63202e;}}
}
B63201f:L63201f:{c.instructions+=5;NFSU2_TR(0x63201f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632020:{NFSU2_TR(0x632020);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632022:{NFSU2_TR(0x632022);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632023:{NFSU2_TR(0x632023);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632024:{NFSU2_TR(0x632024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632029ull));
TAIL_STATIC(0x610530u,610);
}
B632029:L632029:{c.instructions+=2;NFSU2_TR(0x632029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63202c:{NFSU2_TR(0x63202c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63202e:L63202e:{c.instructions+=3;NFSU2_TR(0x63202e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632034:{NFSU2_TR(0x632034);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B632036:{NFSU2_TR(0x632036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632042;}}
}
B632038:L632038:{c.instructions+=3;NFSU2_TR(0x632038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63203e:{NFSU2_TR(0x63203e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B632040:{NFSU2_TR(0x632040);
if(r1(R+518)){{goto L632051;}}
}
B632042:L632042:{c.instructions+=5;NFSU2_TR(0x632042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632043:{NFSU2_TR(0x632043);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632045:{NFSU2_TR(0x632045);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632046:{NFSU2_TR(0x632046);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632047:{NFSU2_TR(0x632047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63204cull));
TAIL_STATIC(0x610530u,610);
}
B63204c:L63204c:{c.instructions+=2;NFSU2_TR(0x63204c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63204f:{NFSU2_TR(0x63204f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632051:L632051:{c.instructions+=6;NFSU2_TR(0x632051);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632052:{NFSU2_TR(0x632052);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632054:{NFSU2_TR(0x632054);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63205a:{NFSU2_TR(0x63205a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63205c:{NFSU2_TR(0x63205c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63205d:{NFSU2_TR(0x63205d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632062ull));
TAIL_STATIC(0x634030u,634);
}
B632062:L632062:{c.instructions+=7;NFSU2_TR(0x632062);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632066:{NFSU2_TR(0x632066);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632067:{NFSU2_TR(0x632067);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63206b:{NFSU2_TR(0x63206b);
u8 U[4];
w4(U+0,u32(0x7a8a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632070:{NFSU2_TR(0x632070);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632071:{NFSU2_TR(0x632071);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632075:{NFSU2_TR(0x632075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63207aull));
TAIL_STATIC(0x4400d0u,440);
}
B63207a:L63207a:{c.instructions+=3;NFSU2_TR(0x63207a);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63207e:{NFSU2_TR(0x63207e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63207f:{NFSU2_TR(0x63207f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632084ull));
TAIL_STATIC(0x43db50u,43d);
}
B632084:L632084:{c.instructions+=7;NFSU2_TR(0x632084);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632088:{NFSU2_TR(0x632088);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632089:{NFSU2_TR(0x632089);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63208d:{NFSU2_TR(0x63208d);
u8 U[4];
w4(U+0,u32(0x7a8a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632092:{NFSU2_TR(0x632092);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632093:{NFSU2_TR(0x632093);
__builtin_memmove((R+28),(R+0),4);
}
B632095:{NFSU2_TR(0x632095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63209aull));
TAIL_STATIC(0x4400d0u,440);
}
B63209a:L63209a:{c.instructions+=3;NFSU2_TR(0x63209a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63209e:{NFSU2_TR(0x63209e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63209f:{NFSU2_TR(0x63209f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6320a4ull));
TAIL_STATIC(0x43db50u,43d);
}
B6320a4:L6320a4:{c.instructions+=6;NFSU2_TR(0x6320a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6320a5:{NFSU2_TR(0x6320a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6320ac:{NFSU2_TR(0x6320ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6320b0:{NFSU2_TR(0x6320b0);
u8 U[4];
w4(U+0,u32(0x7a8a20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6320b5:{NFSU2_TR(0x6320b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6320b6:{NFSU2_TR(0x6320b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6320bbull));
TAIL_STATIC(0x4400d0u,440);
}
B6320bb:L6320bb:{c.instructions+=3;NFSU2_TR(0x6320bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6320bf:{NFSU2_TR(0x6320bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6320c0:{NFSU2_TR(0x6320c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6320c5ull));
TAIL_STATIC(0x43db50u,43d);
}
B6320c5:L6320c5:{c.instructions+=4;NFSU2_TR(0x6320c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B6320c8:{NFSU2_TR(0x6320c8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6320ca:{NFSU2_TR(0x6320ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6320cc:{NFSU2_TR(0x6320cc);
if(r1(R+518)){{goto L6320f1;}}
}
B6320ce:L6320ce:{c.instructions+=2;NFSU2_TR(0x6320ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6320d0:{NFSU2_TR(0x6320d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6320dc;}}
}
B6320d2:L6320d2:{c.instructions+=2;NFSU2_TR(0x6320d2);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6320d5:{NFSU2_TR(0x6320d5);
if(r1(R+518)){{goto L6320e5;}}
}
B6320d7:L6320d7:{c.instructions+=3;NFSU2_TR(0x6320d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6320d8:{NFSU2_TR(0x6320d8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6320da:{NFSU2_TR(0x6320da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6320d2u);}goto L6320d2;}}
}
B6320dc:L6320dc:{c.instructions+=2;NFSU2_TR(0x6320dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6320df:{NFSU2_TR(0x6320df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6320e9;}}
}
B6320e1:L6320e1:{c.instructions+=2;NFSU2_TR(0x6320e1);
__builtin_memmove((R+4),(R+12),4);
}
B6320e3:{NFSU2_TR(0x6320e3);
{goto L6320f1;}
}
B6320e5:L6320e5:{c.instructions+=2;NFSU2_TR(0x6320e5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6320e7:{NFSU2_TR(0x6320e7);
{goto L6320f1;}
}
B6320e9:L6320e9:{c.instructions+=2;NFSU2_TR(0x6320e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6320ec:{NFSU2_TR(0x6320ec);
w4(R+4,u32(0x1ull));
}
B6320f1:L6320f1:{c.instructions+=5;NFSU2_TR(0x6320f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6320f8:{NFSU2_TR(0x6320f8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6320fa:{NFSU2_TR(0x6320fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6320fc:{NFSU2_TR(0x6320fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6320fe:{NFSU2_TR(0x6320fe);
if(r1(R+518)){{goto L632123;}}
}
B632100:L632100:{c.instructions+=2;NFSU2_TR(0x632100);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632102:{NFSU2_TR(0x632102);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63210e;}}
}
B632104:L632104:{c.instructions+=2;NFSU2_TR(0x632104);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632107:{NFSU2_TR(0x632107);
if(r1(R+518)){{goto L632117;}}
}
B632109:L632109:{c.instructions+=3;NFSU2_TR(0x632109);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B63210a:{NFSU2_TR(0x63210a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63210c:{NFSU2_TR(0x63210c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632104u);}goto L632104;}}
}
B63210e:L63210e:{c.instructions+=2;NFSU2_TR(0x63210e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632111:{NFSU2_TR(0x632111);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63211b;}}
}
B632113:L632113:{c.instructions+=2;NFSU2_TR(0x632113);
__builtin_memmove((R+4),(R+12),4);
}
B632115:{NFSU2_TR(0x632115);
{goto L632123;}
}
B632117:L632117:{c.instructions+=2;NFSU2_TR(0x632117);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B632119:{NFSU2_TR(0x632119);
{goto L632123;}
}
B63211b:L63211b:{c.instructions+=2;NFSU2_TR(0x63211b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63211e:{NFSU2_TR(0x63211e);
w4(R+4,u32(0x1ull));
}
B632123:L632123:{c.instructions+=3;NFSU2_TR(0x632123);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B632125:{NFSU2_TR(0x632125);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632127:{NFSU2_TR(0x632127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63212d;}}
}
B632129:L632129:{c.instructions+=2;NFSU2_TR(0x632129);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63212b:{NFSU2_TR(0x63212b);
{goto L63214e;}
}
B63212d:L63212d:{c.instructions+=3;NFSU2_TR(0x63212d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63212f:{NFSU2_TR(0x63212f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632131:{NFSU2_TR(0x632131);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63213d;}}
}
B632133:L632133:{c.instructions+=2;NFSU2_TR(0x632133);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632136:{NFSU2_TR(0x632136);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632129u);}goto L632129;}}
}
B632138:L632138:{c.instructions+=3;NFSU2_TR(0x632138);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B632139:{NFSU2_TR(0x632139);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63213b:{NFSU2_TR(0x63213b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632133u);}goto L632133;}}
}
B63213d:L63213d:{c.instructions+=2;NFSU2_TR(0x63213d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632140:{NFSU2_TR(0x632140);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632146;}}
}
B632142:L632142:{c.instructions+=2;NFSU2_TR(0x632142);
__builtin_memmove((R+0),(R+12),4);
}
B632144:{NFSU2_TR(0x632144);
{goto L63214e;}
}
B632146:L632146:{c.instructions+=2;NFSU2_TR(0x632146);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632149:{NFSU2_TR(0x632149);
w4(R+0,u32(0x1ull));
}
B63214e:L63214e:{c.instructions+=10;NFSU2_TR(0x63214e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632150:{NFSU2_TR(0x632150);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632157:{NFSU2_TR(0x632157);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63215d:{NFSU2_TR(0x63215d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632163:{NFSU2_TR(0x632163);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B632167:{NFSU2_TR(0x632167);
u8 U[4];
w4(U+0,u32(0x78d874ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63216c:{NFSU2_TR(0x63216c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63216d:{NFSU2_TR(0x63216d);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632174:{NFSU2_TR(0x632174);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632178:{NFSU2_TR(0x632178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63217dull));
TAIL_STATIC(0x4400d0u,440);
}
B63217d:L63217d:{c.instructions+=3;NFSU2_TR(0x63217d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632181:{NFSU2_TR(0x632181);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632182:{NFSU2_TR(0x632182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632187ull));
TAIL_STATIC(0x43db50u,43d);
}
B632187:L632187:{c.instructions+=5;NFSU2_TR(0x632187);
__builtin_memmove((R+20),(R+0),4);
}
B632189:{NFSU2_TR(0x632189);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63218d:{NFSU2_TR(0x63218d);
u8 U[4];
w4(U+0,u32(0x78d868ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632192:{NFSU2_TR(0x632192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632193:{NFSU2_TR(0x632193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632198ull));
TAIL_STATIC(0x4400d0u,440);
}
B632198:L632198:{c.instructions+=3;NFSU2_TR(0x632198);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63219c:{NFSU2_TR(0x63219c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63219d:{NFSU2_TR(0x63219d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6321a2ull));
TAIL_STATIC(0x43db50u,43d);
}
B6321a2:L6321a2:{c.instructions+=4;NFSU2_TR(0x6321a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321a3:{NFSU2_TR(0x6321a3);
u8 U[4];
w4(U+0,u32(0x7a8a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321a8:{NFSU2_TR(0x6321a8);
__builtin_memmove((R+28),(R+0),4);
}
B6321aa:{NFSU2_TR(0x6321aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6321afull));
TAIL_STATIC(0x43db80u,43d);
}
B6321af:L6321af:{c.instructions+=4;NFSU2_TR(0x6321af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321b0:{NFSU2_TR(0x6321b0);
u8 U[4];
w4(U+0,u32(0x7a8a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321b5:{NFSU2_TR(0x6321b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6321bb:{NFSU2_TR(0x6321bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6321c0ull));
TAIL_STATIC(0x43db80u,43d);
}
B6321c0:L6321c0:{c.instructions+=4;NFSU2_TR(0x6321c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321c1:{NFSU2_TR(0x6321c1);
u8 U[4];
w4(U+0,u32(0x7a8a04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321c6:{NFSU2_TR(0x6321c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6321cc:{NFSU2_TR(0x6321cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6321d1ull));
TAIL_STATIC(0x43db80u,43d);
}
B6321d1:L6321d1:{c.instructions+=4;NFSU2_TR(0x6321d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321d2:{NFSU2_TR(0x6321d2);
u8 U[4];
w4(U+0,u32(0x7a89f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321d7:{NFSU2_TR(0x6321d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6321dd:{NFSU2_TR(0x6321dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6321e2ull));
TAIL_STATIC(0x43db80u,43d);
}
B6321e2:L6321e2:{c.instructions+=4;NFSU2_TR(0x6321e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321e3:{NFSU2_TR(0x6321e3);
u8 U[4];
w4(U+0,u32(0x7a8a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321e8:{NFSU2_TR(0x6321e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6321ee:{NFSU2_TR(0x6321ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6321f3ull));
TAIL_STATIC(0x43db80u,43d);
}
B6321f3:L6321f3:{c.instructions+=5;NFSU2_TR(0x6321f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B6321f6:{NFSU2_TR(0x6321f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321f7:{NFSU2_TR(0x6321f7);
u8 U[4];
w4(U+0,u32(0x7a8a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6321fc:{NFSU2_TR(0x6321fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632202:{NFSU2_TR(0x632202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632207ull));
TAIL_STATIC(0x43db80u,43d);
}
B632207:L632207:{c.instructions+=4;NFSU2_TR(0x632207);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632208:{NFSU2_TR(0x632208);
u8 U[4];
w4(U+0,u32(0x7a89ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63220d:{NFSU2_TR(0x63220d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632213:{NFSU2_TR(0x632213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632218ull));
TAIL_STATIC(0x43db80u,43d);
}
B632218:L632218:{c.instructions+=4;NFSU2_TR(0x632218);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632219:{NFSU2_TR(0x632219);
u8 U[4];
w4(U+0,u32(0x7a8a04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63221e:{NFSU2_TR(0x63221e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632224:{NFSU2_TR(0x632224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632229ull));
TAIL_STATIC(0x43db80u,43d);
}
B632229:L632229:{c.instructions+=4;NFSU2_TR(0x632229);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63222a:{NFSU2_TR(0x63222a);
u8 U[4];
w4(U+0,u32(0x7a89f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63222f:{NFSU2_TR(0x63222f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632235:{NFSU2_TR(0x632235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63223aull));
TAIL_STATIC(0x43db80u,43d);
}
B63223a:L63223a:{c.instructions+=4;NFSU2_TR(0x63223a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63223b:{NFSU2_TR(0x63223b);
u8 U[4];
w4(U+0,u32(0x7a89dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632240:{NFSU2_TR(0x632240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632246:{NFSU2_TR(0x632246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63224bull));
TAIL_STATIC(0x43db80u,43d);
}
B63224b:L63224b:{c.instructions+=6;NFSU2_TR(0x63224b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632251:{NFSU2_TR(0x632251);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632258:{NFSU2_TR(0x632258);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B63225b:{NFSU2_TR(0x63225b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63225d:{NFSU2_TR(0x63225d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B632267:{NFSU2_TR(0x632267);
if(r1(R+518)){{goto L632282;}}
}
B632269:L632269:{c.instructions+=2;NFSU2_TR(0x632269);
__builtin_memmove((R+4),(R+0),4);
}
B63226b:{NFSU2_TR(0x63226b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632270ull));
TAIL_STATIC(0x4951f0u,495);
}
B632270:L632270:{c.instructions+=2;NFSU2_TR(0x632270);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632272:{NFSU2_TR(0x632272);
if(r1(R+518)){{goto L632282;}}
}
B632274:L632274:{c.instructions+=2;NFSU2_TR(0x632274);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63227b:{NFSU2_TR(0x63227b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632280ull));
TAIL_STATIC(0x4951f0u,495);
}
B632280:L632280:{c.instructions+=1;NFSU2_TR(0x632280);
__builtin_memmove((R+20),(R+0),4);
}
B632282:L632282:{c.instructions+=3;NFSU2_TR(0x632282);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632286:{NFSU2_TR(0x632286);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632288:{NFSU2_TR(0x632288);
if(r1(R+518)){{goto L6322a0;}}
}
B63228a:L63228a:{c.instructions+=2;NFSU2_TR(0x63228a);
__builtin_memmove((R+4),(R+0),4);
}
B63228c:{NFSU2_TR(0x63228c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632291ull));
TAIL_STATIC(0x4951f0u,495);
}
B632291:L632291:{c.instructions+=2;NFSU2_TR(0x632291);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632293:{NFSU2_TR(0x632293);
if(r1(R+518)){{goto L6322a0;}}
}
B632295:L632295:{c.instructions+=2;NFSU2_TR(0x632295);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632299:{NFSU2_TR(0x632299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63229eull));
TAIL_STATIC(0x4951f0u,495);
}
B63229e:L63229e:{c.instructions+=1;NFSU2_TR(0x63229e);
__builtin_memmove((R+28),(R+0),4);
}
B6322a0:L6322a0:{c.instructions+=3;NFSU2_TR(0x6322a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322a1:{NFSU2_TR(0x6322a1);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322a6:{NFSU2_TR(0x6322a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6322abull));
TAIL_STATIC(0x43db80u,43d);
}
B6322ab:L6322ab:{c.instructions+=4;NFSU2_TR(0x6322ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322ac:{NFSU2_TR(0x6322ac);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322b1:{NFSU2_TR(0x6322b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6322b7:{NFSU2_TR(0x6322b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6322bcull));
TAIL_STATIC(0x43db80u,43d);
}
B6322bc:L6322bc:{c.instructions+=4;NFSU2_TR(0x6322bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322bd:{NFSU2_TR(0x6322bd);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322c2:{NFSU2_TR(0x6322c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6322c8:{NFSU2_TR(0x6322c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6322cdull));
TAIL_STATIC(0x43db80u,43d);
}
B6322cd:L6322cd:{c.instructions+=4;NFSU2_TR(0x6322cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322ce:{NFSU2_TR(0x6322ce);
u8 U[4];
w4(U+0,u32(0x7a89c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322d3:{NFSU2_TR(0x6322d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6322d9:{NFSU2_TR(0x6322d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6322deull));
TAIL_STATIC(0x43db80u,43d);
}
B6322de:L6322de:{c.instructions+=4;NFSU2_TR(0x6322de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322df:{NFSU2_TR(0x6322df);
u8 U[4];
w4(U+0,u32(0x7a89c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322e4:{NFSU2_TR(0x6322e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6322ea:{NFSU2_TR(0x6322ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6322efull));
TAIL_STATIC(0x43db80u,43d);
}
B6322ef:L6322ef:{c.instructions+=3;NFSU2_TR(0x6322ef);
u8 U[4];
w4(U+0,u32(0x7a89b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6322f4:{NFSU2_TR(0x6322f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6322fa:{NFSU2_TR(0x6322fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6322ffull));
TAIL_STATIC(0x43db50u,43d);
}
B6322ff:L6322ff:{c.instructions+=4;NFSU2_TR(0x6322ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632300:{NFSU2_TR(0x632300);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632305:{NFSU2_TR(0x632305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63230b:{NFSU2_TR(0x63230b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632310ull));
TAIL_STATIC(0x43db80u,43d);
}
B632310:L632310:{c.instructions+=4;NFSU2_TR(0x632310);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632311:{NFSU2_TR(0x632311);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632316:{NFSU2_TR(0x632316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63231c:{NFSU2_TR(0x63231c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632321ull));
TAIL_STATIC(0x43db80u,43d);
}
B632321:L632321:{c.instructions+=4;NFSU2_TR(0x632321);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632322:{NFSU2_TR(0x632322);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632327:{NFSU2_TR(0x632327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63232d:{NFSU2_TR(0x63232d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632332ull));
TAIL_STATIC(0x43db80u,43d);
}
B632332:L632332:{c.instructions+=5;NFSU2_TR(0x632332);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B632335:{NFSU2_TR(0x632335);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632336:{NFSU2_TR(0x632336);
u8 U[4];
w4(U+0,u32(0x7a89c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63233b:{NFSU2_TR(0x63233b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632341:{NFSU2_TR(0x632341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632346ull));
TAIL_STATIC(0x43db80u,43d);
}
B632346:L632346:{c.instructions+=4;NFSU2_TR(0x632346);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632347:{NFSU2_TR(0x632347);
u8 U[4];
w4(U+0,u32(0x7a89c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63234c:{NFSU2_TR(0x63234c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632352:{NFSU2_TR(0x632352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632357ull));
TAIL_STATIC(0x43db80u,43d);
}
B632357:L632357:{c.instructions+=3;NFSU2_TR(0x632357);
u8 U[4];
w4(U+0,u32(0x7a8994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63235c:{NFSU2_TR(0x63235c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632362:{NFSU2_TR(0x632362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632367ull));
TAIL_STATIC(0x43db50u,43d);
}
B632367:L632367:{c.instructions+=7;NFSU2_TR(0x632367);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63236b:{NFSU2_TR(0x63236b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63236c:{NFSU2_TR(0x63236c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632372:{NFSU2_TR(0x632372);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B632376:{NFSU2_TR(0x632376);
u8 U[4];
w4(U+0,u32(0x7a897cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63237b:{NFSU2_TR(0x63237b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63237c:{NFSU2_TR(0x63237c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632381ull));
TAIL_STATIC(0x4400d0u,440);
}
B632381:L632381:{c.instructions+=3;NFSU2_TR(0x632381);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B632385:{NFSU2_TR(0x632385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632386:{NFSU2_TR(0x632386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63238bull));
TAIL_STATIC(0x43db50u,43d);
}
B63238b:L63238b:{c.instructions+=4;NFSU2_TR(0x63238b);
__builtin_memmove((R+28),(R+0),4);
}
B63238d:{NFSU2_TR(0x63238d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63238e:{NFSU2_TR(0x63238e);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632393:{NFSU2_TR(0x632393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632398ull));
TAIL_STATIC(0x43db80u,43d);
}
B632398:L632398:{c.instructions+=4;NFSU2_TR(0x632398);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632399:{NFSU2_TR(0x632399);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63239e:{NFSU2_TR(0x63239e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6323a4:{NFSU2_TR(0x6323a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6323a9ull));
TAIL_STATIC(0x43db80u,43d);
}
B6323a9:L6323a9:{c.instructions+=4;NFSU2_TR(0x6323a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6323aa:{NFSU2_TR(0x6323aa);
u8 U[4];
w4(U+0,u32(0x7a89d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6323af:{NFSU2_TR(0x6323af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6323b5:{NFSU2_TR(0x6323b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6323baull));
TAIL_STATIC(0x43db80u,43d);
}
B6323ba:L6323ba:{c.instructions+=9;NFSU2_TR(0x6323ba);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6323bc:{NFSU2_TR(0x6323bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6323c2:{NFSU2_TR(0x6323c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6323c8:{NFSU2_TR(0x6323c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B6323cb:{NFSU2_TR(0x6323cb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6323cd:{NFSU2_TR(0x6323cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6323d3:{NFSU2_TR(0x6323d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6323d9:{NFSU2_TR(0x6323d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6323df:{NFSU2_TR(0x6323df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6323e5;}}
}
B6323e1:L6323e1:{c.instructions+=2;NFSU2_TR(0x6323e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6323e3:{NFSU2_TR(0x6323e3);
{goto L63240b;}
}
B6323e5:L6323e5:{c.instructions+=3;NFSU2_TR(0x6323e5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6323e7:{NFSU2_TR(0x6323e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6323e9:{NFSU2_TR(0x6323e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6323fa;}}
}
B6323eb:L6323eb:{c.instructions+=1;NFSU2_TR(0x6323eb);
{goto L6323f0;}
}
B6323f0:L6323f0:{c.instructions+=2;NFSU2_TR(0x6323f0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6323f3:{NFSU2_TR(0x6323f3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6323e1u);}goto L6323e1;}}
}
B6323f5:L6323f5:{c.instructions+=3;NFSU2_TR(0x6323f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6323f6:{NFSU2_TR(0x6323f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6323f8:{NFSU2_TR(0x6323f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6323f0u);}goto L6323f0;}}
}
B6323fa:L6323fa:{c.instructions+=2;NFSU2_TR(0x6323fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6323fd:{NFSU2_TR(0x6323fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632403;}}
}
B6323ff:L6323ff:{c.instructions+=2;NFSU2_TR(0x6323ff);
__builtin_memmove((R+0),(R+12),4);
}
B632401:{NFSU2_TR(0x632401);
{goto L63240b;}
}
B632403:L632403:{c.instructions+=2;NFSU2_TR(0x632403);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632406:{NFSU2_TR(0x632406);
w4(R+0,u32(0x1ull));
}
B63240b:L63240b:{c.instructions+=5;NFSU2_TR(0x63240b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632411:{NFSU2_TR(0x632411);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632413:{NFSU2_TR(0x632413);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632415:{NFSU2_TR(0x632415);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632417:{NFSU2_TR(0x632417);
if(r1(R+518)){{goto L63243f;}}
}
B632419:L632419:{c.instructions+=2;NFSU2_TR(0x632419);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63241b:{NFSU2_TR(0x63241b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63242a;}}
}
B63241d:L63241d:{c.instructions+=1;NFSU2_TR(0x63241d);
__builtin_memmove((R+4),(R+4),4);
}
B632420:L632420:{c.instructions+=2;NFSU2_TR(0x632420);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632423:{NFSU2_TR(0x632423);
if(r1(R+518)){{goto L632433;}}
}
B632425:L632425:{c.instructions+=3;NFSU2_TR(0x632425);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632426:{NFSU2_TR(0x632426);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632428:{NFSU2_TR(0x632428);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632420u);}goto L632420;}}
}
B63242a:L63242a:{c.instructions+=2;NFSU2_TR(0x63242a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63242d:{NFSU2_TR(0x63242d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632437;}}
}
B63242f:L63242f:{c.instructions+=2;NFSU2_TR(0x63242f);
__builtin_memmove((R+0),(R+12),4);
}
B632431:{NFSU2_TR(0x632431);
{goto L63243f;}
}
B632433:L632433:{c.instructions+=2;NFSU2_TR(0x632433);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632435:{NFSU2_TR(0x632435);
{goto L63243f;}
}
B632437:L632437:{c.instructions+=2;NFSU2_TR(0x632437);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63243a:{NFSU2_TR(0x63243a);
w4(R+0,u32(0x1ull));
}
B63243f:L63243f:{c.instructions+=5;NFSU2_TR(0x63243f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632445:{NFSU2_TR(0x632445);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632447:{NFSU2_TR(0x632447);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632449:{NFSU2_TR(0x632449);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63244b:{NFSU2_TR(0x63244b);
if(r1(R+518)){{goto L632470;}}
}
B63244d:L63244d:{c.instructions+=2;NFSU2_TR(0x63244d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63244f:{NFSU2_TR(0x63244f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63245b;}}
}
B632451:L632451:{c.instructions+=2;NFSU2_TR(0x632451);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632454:{NFSU2_TR(0x632454);
if(r1(R+518)){{goto L632464;}}
}
B632456:L632456:{c.instructions+=3;NFSU2_TR(0x632456);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632457:{NFSU2_TR(0x632457);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632459:{NFSU2_TR(0x632459);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632451u);}goto L632451;}}
}
B63245b:L63245b:{c.instructions+=2;NFSU2_TR(0x63245b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63245e:{NFSU2_TR(0x63245e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632468;}}
}
B632460:L632460:{c.instructions+=2;NFSU2_TR(0x632460);
__builtin_memmove((R+0),(R+12),4);
}
B632462:{NFSU2_TR(0x632462);
{goto L632470;}
}
B632464:L632464:{c.instructions+=2;NFSU2_TR(0x632464);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632466:{NFSU2_TR(0x632466);
{goto L632470;}
}
B632468:L632468:{c.instructions+=2;NFSU2_TR(0x632468);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63246b:{NFSU2_TR(0x63246b);
w4(R+0,u32(0x1ull));
}
B632470:L632470:{c.instructions+=5;NFSU2_TR(0x632470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632476:{NFSU2_TR(0x632476);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632478:{NFSU2_TR(0x632478);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63247a:{NFSU2_TR(0x63247a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63247c:{NFSU2_TR(0x63247c);
if(r1(R+518)){{goto L6324a1;}}
}
B63247e:L63247e:{c.instructions+=2;NFSU2_TR(0x63247e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632480:{NFSU2_TR(0x632480);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63248c;}}
}
B632482:L632482:{c.instructions+=2;NFSU2_TR(0x632482);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632485:{NFSU2_TR(0x632485);
if(r1(R+518)){{goto L632495;}}
}
B632487:L632487:{c.instructions+=3;NFSU2_TR(0x632487);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632488:{NFSU2_TR(0x632488);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63248a:{NFSU2_TR(0x63248a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632482u);}goto L632482;}}
}
B63248c:L63248c:{c.instructions+=2;NFSU2_TR(0x63248c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63248f:{NFSU2_TR(0x63248f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632499;}}
}
B632491:L632491:{c.instructions+=2;NFSU2_TR(0x632491);
__builtin_memmove((R+0),(R+12),4);
}
B632493:{NFSU2_TR(0x632493);
{goto L6324a1;}
}
B632495:L632495:{c.instructions+=2;NFSU2_TR(0x632495);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632497:{NFSU2_TR(0x632497);
{goto L6324a1;}
}
B632499:L632499:{c.instructions+=2;NFSU2_TR(0x632499);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63249c:{NFSU2_TR(0x63249c);
w4(R+0,u32(0x1ull));
}
B6324a1:L6324a1:{c.instructions+=5;NFSU2_TR(0x6324a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6324a7:{NFSU2_TR(0x6324a7);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6324a9:{NFSU2_TR(0x6324a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6324ab:{NFSU2_TR(0x6324ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6324ad:{NFSU2_TR(0x6324ad);
if(r1(R+518)){{goto L6324d2;}}
}
B6324af:L6324af:{c.instructions+=2;NFSU2_TR(0x6324af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6324b1:{NFSU2_TR(0x6324b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6324bd;}}
}
B6324b3:L6324b3:{c.instructions+=2;NFSU2_TR(0x6324b3);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6324b6:{NFSU2_TR(0x6324b6);
if(r1(R+518)){{goto L6324c6;}}
}
B6324b8:L6324b8:{c.instructions+=3;NFSU2_TR(0x6324b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6324b9:{NFSU2_TR(0x6324b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6324bb:{NFSU2_TR(0x6324bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6324b3u);}goto L6324b3;}}
}
B6324bd:L6324bd:{c.instructions+=2;NFSU2_TR(0x6324bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6324c0:{NFSU2_TR(0x6324c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6324ca;}}
}
B6324c2:L6324c2:{c.instructions+=2;NFSU2_TR(0x6324c2);
__builtin_memmove((R+0),(R+12),4);
}
B6324c4:{NFSU2_TR(0x6324c4);
{goto L6324d2;}
}
B6324c6:L6324c6:{c.instructions+=2;NFSU2_TR(0x6324c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6324c8:{NFSU2_TR(0x6324c8);
{goto L6324d2;}
}
B6324ca:L6324ca:{c.instructions+=2;NFSU2_TR(0x6324ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6324cd:{NFSU2_TR(0x6324cd);
w4(R+0,u32(0x1ull));
}
B6324d2:L6324d2:{c.instructions+=5;NFSU2_TR(0x6324d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6324d8:{NFSU2_TR(0x6324d8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6324da:{NFSU2_TR(0x6324da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6324dc:{NFSU2_TR(0x6324dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6324de:{NFSU2_TR(0x6324de);
if(r1(R+518)){{goto L632503;}}
}
B6324e0:L6324e0:{c.instructions+=2;NFSU2_TR(0x6324e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6324e2:{NFSU2_TR(0x6324e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6324ee;}}
}
B6324e4:L6324e4:{c.instructions+=2;NFSU2_TR(0x6324e4);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6324e7:{NFSU2_TR(0x6324e7);
if(r1(R+518)){{goto L6324f7;}}
}
B6324e9:L6324e9:{c.instructions+=3;NFSU2_TR(0x6324e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6324ea:{NFSU2_TR(0x6324ea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6324ec:{NFSU2_TR(0x6324ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6324e4u);}goto L6324e4;}}
}
B6324ee:L6324ee:{c.instructions+=2;NFSU2_TR(0x6324ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6324f1:{NFSU2_TR(0x6324f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6324fb;}}
}
B6324f3:L6324f3:{c.instructions+=2;NFSU2_TR(0x6324f3);
__builtin_memmove((R+0),(R+12),4);
}
B6324f5:{NFSU2_TR(0x6324f5);
{goto L632503;}
}
B6324f7:L6324f7:{c.instructions+=2;NFSU2_TR(0x6324f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6324f9:{NFSU2_TR(0x6324f9);
{goto L632503;}
}
B6324fb:L6324fb:{c.instructions+=2;NFSU2_TR(0x6324fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6324fe:{NFSU2_TR(0x6324fe);
w4(R+0,u32(0x1ull));
}
B632503:L632503:{c.instructions+=5;NFSU2_TR(0x632503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632509:{NFSU2_TR(0x632509);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63250b:{NFSU2_TR(0x63250b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63250d:{NFSU2_TR(0x63250d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63250f:{NFSU2_TR(0x63250f);
if(r1(R+518)){{goto L632534;}}
}
B632511:L632511:{c.instructions+=2;NFSU2_TR(0x632511);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632513:{NFSU2_TR(0x632513);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63251f;}}
}
B632515:L632515:{c.instructions+=2;NFSU2_TR(0x632515);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632518:{NFSU2_TR(0x632518);
if(r1(R+518)){{goto L632528;}}
}
B63251a:L63251a:{c.instructions+=3;NFSU2_TR(0x63251a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63251b:{NFSU2_TR(0x63251b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63251d:{NFSU2_TR(0x63251d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632515u);}goto L632515;}}
}
B63251f:L63251f:{c.instructions+=2;NFSU2_TR(0x63251f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632522:{NFSU2_TR(0x632522);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63252c;}}
}
B632524:L632524:{c.instructions+=2;NFSU2_TR(0x632524);
__builtin_memmove((R+0),(R+12),4);
}
B632526:{NFSU2_TR(0x632526);
{goto L632534;}
}
B632528:L632528:{c.instructions+=2;NFSU2_TR(0x632528);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63252a:{NFSU2_TR(0x63252a);
{goto L632534;}
}
B63252c:L63252c:{c.instructions+=2;NFSU2_TR(0x63252c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63252f:{NFSU2_TR(0x63252f);
w4(R+0,u32(0x1ull));
}
B632534:L632534:{c.instructions+=5;NFSU2_TR(0x632534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63253a:{NFSU2_TR(0x63253a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63253c:{NFSU2_TR(0x63253c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63253e:{NFSU2_TR(0x63253e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632540:{NFSU2_TR(0x632540);
if(r1(R+518)){{goto L632565;}}
}
B632542:L632542:{c.instructions+=2;NFSU2_TR(0x632542);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632544:{NFSU2_TR(0x632544);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632550;}}
}
B632546:L632546:{c.instructions+=2;NFSU2_TR(0x632546);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632549:{NFSU2_TR(0x632549);
if(r1(R+518)){{goto L632559;}}
}
B63254b:L63254b:{c.instructions+=3;NFSU2_TR(0x63254b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63254c:{NFSU2_TR(0x63254c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63254e:{NFSU2_TR(0x63254e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632546u);}goto L632546;}}
}
B632550:L632550:{c.instructions+=2;NFSU2_TR(0x632550);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632553:{NFSU2_TR(0x632553);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63255d;}}
}
B632555:L632555:{c.instructions+=2;NFSU2_TR(0x632555);
__builtin_memmove((R+0),(R+12),4);
}
B632557:{NFSU2_TR(0x632557);
{goto L632565;}
}
B632559:L632559:{c.instructions+=2;NFSU2_TR(0x632559);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63255b:{NFSU2_TR(0x63255b);
{goto L632565;}
}
B63255d:L63255d:{c.instructions+=2;NFSU2_TR(0x63255d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632560:{NFSU2_TR(0x632560);
w4(R+0,u32(0x1ull));
}
B632565:L632565:{c.instructions+=5;NFSU2_TR(0x632565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63256b:{NFSU2_TR(0x63256b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63256d:{NFSU2_TR(0x63256d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63256f:{NFSU2_TR(0x63256f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632571:{NFSU2_TR(0x632571);
if(r1(R+518)){{goto L632596;}}
}
B632573:L632573:{c.instructions+=2;NFSU2_TR(0x632573);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632575:{NFSU2_TR(0x632575);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632581;}}
}
B632577:L632577:{c.instructions+=2;NFSU2_TR(0x632577);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B63257a:{NFSU2_TR(0x63257a);
if(r1(R+518)){{goto L63258a;}}
}
B63257c:L63257c:{c.instructions+=3;NFSU2_TR(0x63257c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63257d:{NFSU2_TR(0x63257d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63257f:{NFSU2_TR(0x63257f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632577u);}goto L632577;}}
}
B632581:L632581:{c.instructions+=2;NFSU2_TR(0x632581);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632584:{NFSU2_TR(0x632584);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63258e;}}
}
B632586:L632586:{c.instructions+=2;NFSU2_TR(0x632586);
__builtin_memmove((R+0),(R+12),4);
}
B632588:{NFSU2_TR(0x632588);
{goto L632596;}
}
B63258a:L63258a:{c.instructions+=2;NFSU2_TR(0x63258a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63258c:{NFSU2_TR(0x63258c);
{goto L632596;}
}
B63258e:L63258e:{c.instructions+=2;NFSU2_TR(0x63258e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632591:{NFSU2_TR(0x632591);
w4(R+0,u32(0x1ull));
}
B632596:L632596:{c.instructions+=5;NFSU2_TR(0x632596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63259c:{NFSU2_TR(0x63259c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63259e:{NFSU2_TR(0x63259e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6325a0:{NFSU2_TR(0x6325a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6325a2:{NFSU2_TR(0x6325a2);
if(r1(R+518)){{goto L6325c7;}}
}
B6325a4:L6325a4:{c.instructions+=2;NFSU2_TR(0x6325a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6325a6:{NFSU2_TR(0x6325a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6325b2;}}
}
B6325a8:L6325a8:{c.instructions+=2;NFSU2_TR(0x6325a8);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6325ab:{NFSU2_TR(0x6325ab);
if(r1(R+518)){{goto L6325bb;}}
}
B6325ad:L6325ad:{c.instructions+=3;NFSU2_TR(0x6325ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6325ae:{NFSU2_TR(0x6325ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6325b0:{NFSU2_TR(0x6325b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6325a8u);}goto L6325a8;}}
}
B6325b2:L6325b2:{c.instructions+=2;NFSU2_TR(0x6325b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6325b5:{NFSU2_TR(0x6325b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6325bf;}}
}
B6325b7:L6325b7:{c.instructions+=2;NFSU2_TR(0x6325b7);
__builtin_memmove((R+0),(R+12),4);
}
B6325b9:{NFSU2_TR(0x6325b9);
{goto L6325c7;}
}
B6325bb:L6325bb:{c.instructions+=2;NFSU2_TR(0x6325bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6325bd:{NFSU2_TR(0x6325bd);
{goto L6325c7;}
}
B6325bf:L6325bf:{c.instructions+=2;NFSU2_TR(0x6325bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6325c2:{NFSU2_TR(0x6325c2);
w4(R+0,u32(0x1ull));
}
B6325c7:L6325c7:{c.instructions+=5;NFSU2_TR(0x6325c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6325cd:{NFSU2_TR(0x6325cd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6325cf:{NFSU2_TR(0x6325cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6325d1:{NFSU2_TR(0x6325d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6325d3:{NFSU2_TR(0x6325d3);
if(r1(R+518)){{goto L6325ff;}}
}
B6325d5:L6325d5:{c.instructions+=2;NFSU2_TR(0x6325d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6325d7:{NFSU2_TR(0x6325d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6325ea;}}
}
B6325d9:L6325d9:{c.instructions+=1;NFSU2_TR(0x6325d9);
__builtin_memmove((R+16),(R+16),4);
}
B6325e0:L6325e0:{c.instructions+=2;NFSU2_TR(0x6325e0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6325e3:{NFSU2_TR(0x6325e3);
if(r1(R+518)){{goto L6325f3;}}
}
B6325e5:L6325e5:{c.instructions+=3;NFSU2_TR(0x6325e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6325e6:{NFSU2_TR(0x6325e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6325e8:{NFSU2_TR(0x6325e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6325e0u);}goto L6325e0;}}
}
B6325ea:L6325ea:{c.instructions+=2;NFSU2_TR(0x6325ea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6325ed:{NFSU2_TR(0x6325ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6325f7;}}
}
B6325ef:L6325ef:{c.instructions+=2;NFSU2_TR(0x6325ef);
__builtin_memmove((R+0),(R+12),4);
}
B6325f1:{NFSU2_TR(0x6325f1);
{goto L6325ff;}
}
B6325f3:L6325f3:{c.instructions+=2;NFSU2_TR(0x6325f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6325f5:{NFSU2_TR(0x6325f5);
{goto L6325ff;}
}
B6325f7:L6325f7:{c.instructions+=2;NFSU2_TR(0x6325f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6325fa:{NFSU2_TR(0x6325fa);
w4(R+0,u32(0x1ull));
}
B6325ff:L6325ff:{c.instructions+=5;NFSU2_TR(0x6325ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632605:{NFSU2_TR(0x632605);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632607:{NFSU2_TR(0x632607);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632609:{NFSU2_TR(0x632609);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63260b:{NFSU2_TR(0x63260b);
if(r1(R+518)){{goto L632630;}}
}
B63260d:L63260d:{c.instructions+=2;NFSU2_TR(0x63260d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63260f:{NFSU2_TR(0x63260f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63261b;}}
}
B632611:L632611:{c.instructions+=2;NFSU2_TR(0x632611);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632614:{NFSU2_TR(0x632614);
if(r1(R+518)){{goto L632624;}}
}
B632616:L632616:{c.instructions+=3;NFSU2_TR(0x632616);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632617:{NFSU2_TR(0x632617);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632619:{NFSU2_TR(0x632619);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632611u);}goto L632611;}}
}
B63261b:L63261b:{c.instructions+=2;NFSU2_TR(0x63261b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63261e:{NFSU2_TR(0x63261e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632628;}}
}
B632620:L632620:{c.instructions+=2;NFSU2_TR(0x632620);
__builtin_memmove((R+0),(R+12),4);
}
B632622:{NFSU2_TR(0x632622);
{goto L632630;}
}
B632624:L632624:{c.instructions+=2;NFSU2_TR(0x632624);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632626:{NFSU2_TR(0x632626);
{goto L632630;}
}
B632628:L632628:{c.instructions+=2;NFSU2_TR(0x632628);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63262b:{NFSU2_TR(0x63262b);
w4(R+0,u32(0x1ull));
}
B632630:L632630:{c.instructions+=5;NFSU2_TR(0x632630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632636:{NFSU2_TR(0x632636);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632638:{NFSU2_TR(0x632638);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63263a:{NFSU2_TR(0x63263a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63263c:{NFSU2_TR(0x63263c);
if(r1(R+518)){{goto L632661;}}
}
B63263e:L63263e:{c.instructions+=2;NFSU2_TR(0x63263e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632640:{NFSU2_TR(0x632640);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63264c;}}
}
B632642:L632642:{c.instructions+=2;NFSU2_TR(0x632642);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632645:{NFSU2_TR(0x632645);
if(r1(R+518)){{goto L632655;}}
}
B632647:L632647:{c.instructions+=3;NFSU2_TR(0x632647);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632648:{NFSU2_TR(0x632648);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63264a:{NFSU2_TR(0x63264a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632642u);}goto L632642;}}
}
B63264c:L63264c:{c.instructions+=2;NFSU2_TR(0x63264c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63264f:{NFSU2_TR(0x63264f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632659;}}
}
B632651:L632651:{c.instructions+=2;NFSU2_TR(0x632651);
__builtin_memmove((R+0),(R+12),4);
}
B632653:{NFSU2_TR(0x632653);
{goto L632661;}
}
B632655:L632655:{c.instructions+=2;NFSU2_TR(0x632655);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632657:{NFSU2_TR(0x632657);
{goto L632661;}
}
B632659:L632659:{c.instructions+=2;NFSU2_TR(0x632659);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63265c:{NFSU2_TR(0x63265c);
w4(R+0,u32(0x1ull));
}
B632661:L632661:{c.instructions+=5;NFSU2_TR(0x632661);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632667:{NFSU2_TR(0x632667);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632669:{NFSU2_TR(0x632669);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63266b:{NFSU2_TR(0x63266b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63266d:{NFSU2_TR(0x63266d);
if(r1(R+518)){{goto L632692;}}
}
B63266f:L63266f:{c.instructions+=2;NFSU2_TR(0x63266f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632671:{NFSU2_TR(0x632671);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63267d;}}
}
B632673:L632673:{c.instructions+=2;NFSU2_TR(0x632673);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632676:{NFSU2_TR(0x632676);
if(r1(R+518)){{goto L632686;}}
}
B632678:L632678:{c.instructions+=3;NFSU2_TR(0x632678);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632679:{NFSU2_TR(0x632679);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63267b:{NFSU2_TR(0x63267b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632673u);}goto L632673;}}
}
B63267d:L63267d:{c.instructions+=2;NFSU2_TR(0x63267d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632680:{NFSU2_TR(0x632680);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63268a;}}
}
B632682:L632682:{c.instructions+=2;NFSU2_TR(0x632682);
__builtin_memmove((R+0),(R+12),4);
}
B632684:{NFSU2_TR(0x632684);
{goto L632692;}
}
B632686:L632686:{c.instructions+=2;NFSU2_TR(0x632686);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632688:{NFSU2_TR(0x632688);
{goto L632692;}
}
B63268a:L63268a:{c.instructions+=2;NFSU2_TR(0x63268a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63268d:{NFSU2_TR(0x63268d);
w4(R+0,u32(0x1ull));
}
B632692:L632692:{c.instructions+=5;NFSU2_TR(0x632692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632698:{NFSU2_TR(0x632698);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B63269a:{NFSU2_TR(0x63269a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63269c:{NFSU2_TR(0x63269c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63269e:{NFSU2_TR(0x63269e);
if(r1(R+518)){{goto L6326c3;}}
}
B6326a0:L6326a0:{c.instructions+=2;NFSU2_TR(0x6326a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6326a2:{NFSU2_TR(0x6326a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6326ae;}}
}
B6326a4:L6326a4:{c.instructions+=2;NFSU2_TR(0x6326a4);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6326a7:{NFSU2_TR(0x6326a7);
if(r1(R+518)){{goto L6326b7;}}
}
B6326a9:L6326a9:{c.instructions+=3;NFSU2_TR(0x6326a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6326aa:{NFSU2_TR(0x6326aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6326ac:{NFSU2_TR(0x6326ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6326a4u);}goto L6326a4;}}
}
B6326ae:L6326ae:{c.instructions+=2;NFSU2_TR(0x6326ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6326b1:{NFSU2_TR(0x6326b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6326bb;}}
}
B6326b3:L6326b3:{c.instructions+=2;NFSU2_TR(0x6326b3);
__builtin_memmove((R+0),(R+12),4);
}
B6326b5:{NFSU2_TR(0x6326b5);
{goto L6326c3;}
}
B6326b7:L6326b7:{c.instructions+=2;NFSU2_TR(0x6326b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6326b9:{NFSU2_TR(0x6326b9);
{goto L6326c3;}
}
B6326bb:L6326bb:{c.instructions+=2;NFSU2_TR(0x6326bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6326be:{NFSU2_TR(0x6326be);
w4(R+0,u32(0x1ull));
}
B6326c3:L6326c3:{c.instructions+=7;NFSU2_TR(0x6326c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6326c7:{NFSU2_TR(0x6326c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326c8:{NFSU2_TR(0x6326c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6326cc:{NFSU2_TR(0x6326cc);
u8 U[4];
w4(U+0,u32(0x7a8974ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326d1:{NFSU2_TR(0x6326d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326d2:{NFSU2_TR(0x6326d2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6326d4:{NFSU2_TR(0x6326d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6326d9ull));
TAIL_STATIC(0x4400d0u,440);
}
B6326d9:L6326d9:{c.instructions+=3;NFSU2_TR(0x6326d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6326dd:{NFSU2_TR(0x6326dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326de:{NFSU2_TR(0x6326de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6326e3ull));
TAIL_STATIC(0x43db50u,43d);
}
B6326e3:L6326e3:{c.instructions+=6;NFSU2_TR(0x6326e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326e4:{NFSU2_TR(0x6326e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6326e8:{NFSU2_TR(0x6326e8);
u8 U[4];
w4(U+0,u32(0x7a8968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326ed:{NFSU2_TR(0x6326ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326ee:{NFSU2_TR(0x6326ee);
__builtin_memmove((R+28),(R+0),4);
}
B6326f0:{NFSU2_TR(0x6326f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6326f5ull));
TAIL_STATIC(0x4400d0u,440);
}
B6326f5:L6326f5:{c.instructions+=3;NFSU2_TR(0x6326f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6326f9:{NFSU2_TR(0x6326f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6326fa:{NFSU2_TR(0x6326fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6326ffull));
TAIL_STATIC(0x43db50u,43d);
}
B6326ff:L6326ff:{c.instructions+=7;NFSU2_TR(0x6326ff);
__builtin_memmove((R+20),(R+0),4);
}
B632701:{NFSU2_TR(0x632701);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632705:{NFSU2_TR(0x632705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632706:{NFSU2_TR(0x632706);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63270a:{NFSU2_TR(0x63270a);
u8 U[4];
w4(U+0,u32(0x7a895cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63270f:{NFSU2_TR(0x63270f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632710:{NFSU2_TR(0x632710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632715ull));
TAIL_STATIC(0x4400d0u,440);
}
B632715:L632715:{c.instructions+=3;NFSU2_TR(0x632715);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632719:{NFSU2_TR(0x632719);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63271a:{NFSU2_TR(0x63271a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63271full));
TAIL_STATIC(0x43db50u,43d);
}
B63271f:L63271f:{c.instructions+=7;NFSU2_TR(0x63271f);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632726:{NFSU2_TR(0x632726);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63272a:{NFSU2_TR(0x63272a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63272b:{NFSU2_TR(0x63272b);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63272f:{NFSU2_TR(0x63272f);
u8 U[4];
w4(U+0,u32(0x7a894cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632734:{NFSU2_TR(0x632734);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632735:{NFSU2_TR(0x632735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63273aull));
TAIL_STATIC(0x4400d0u,440);
}
B63273a:L63273a:{c.instructions+=3;NFSU2_TR(0x63273a);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63273e:{NFSU2_TR(0x63273e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63273f:{NFSU2_TR(0x63273f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632744ull));
TAIL_STATIC(0x43db50u,43d);
}
B632744:L632744:{c.instructions+=8;NFSU2_TR(0x632744);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B632747:{NFSU2_TR(0x632747);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63274b:{NFSU2_TR(0x63274b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63274f:{NFSU2_TR(0x63274f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632750:{NFSU2_TR(0x632750);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B632754:{NFSU2_TR(0x632754);
u8 U[4];
w4(U+0,u32(0x7a8938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632759:{NFSU2_TR(0x632759);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63275a:{NFSU2_TR(0x63275a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63275full));
TAIL_STATIC(0x4400d0u,440);
}
B63275f:L63275f:{c.instructions+=3;NFSU2_TR(0x63275f);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632763:{NFSU2_TR(0x632763);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632764:{NFSU2_TR(0x632764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632769ull));
TAIL_STATIC(0x43db50u,43d);
}
B632769:L632769:{c.instructions+=7;NFSU2_TR(0x632769);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632770:{NFSU2_TR(0x632770);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632776:{NFSU2_TR(0x632776);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B632779:{NFSU2_TR(0x632779);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63277b:{NFSU2_TR(0x63277b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63277d:{NFSU2_TR(0x63277d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632783:{NFSU2_TR(0x632783);
if(r1(R+518)){{goto L6327af;}}
}
B632785:L632785:{c.instructions+=2;NFSU2_TR(0x632785);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632787:{NFSU2_TR(0x632787);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63279a;}}
}
B632789:L632789:{c.instructions+=1;NFSU2_TR(0x632789);
__builtin_memmove((R+16),(R+16),4);
}
B632790:L632790:{c.instructions+=2;NFSU2_TR(0x632790);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632793:{NFSU2_TR(0x632793);
if(r1(R+518)){{goto L6327a3;}}
}
B632795:L632795:{c.instructions+=3;NFSU2_TR(0x632795);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632796:{NFSU2_TR(0x632796);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632798:{NFSU2_TR(0x632798);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632790u);}goto L632790;}}
}
B63279a:L63279a:{c.instructions+=2;NFSU2_TR(0x63279a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63279d:{NFSU2_TR(0x63279d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6327a7;}}
}
B63279f:L63279f:{c.instructions+=2;NFSU2_TR(0x63279f);
__builtin_memmove((R+0),(R+12),4);
}
B6327a1:{NFSU2_TR(0x6327a1);
{goto L6327af;}
}
B6327a3:L6327a3:{c.instructions+=2;NFSU2_TR(0x6327a3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6327a5:{NFSU2_TR(0x6327a5);
{goto L6327af;}
}
B6327a7:L6327a7:{c.instructions+=2;NFSU2_TR(0x6327a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6327aa:{NFSU2_TR(0x6327aa);
w4(R+0,u32(0x1ull));
}
B6327af:L6327af:{c.instructions+=4;NFSU2_TR(0x6327af);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6327b1:{NFSU2_TR(0x6327b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6327b3:{NFSU2_TR(0x6327b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6327b5:{NFSU2_TR(0x6327b5);
if(r1(R+518)){{goto L6327df;}}
}
B6327b7:L6327b7:{c.instructions+=2;NFSU2_TR(0x6327b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6327b9:{NFSU2_TR(0x6327b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6327ca;}}
}
B6327bb:L6327bb:{c.instructions+=1;NFSU2_TR(0x6327bb);
{goto L6327c0;}
}
B6327c0:L6327c0:{c.instructions+=2;NFSU2_TR(0x6327c0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6327c3:{NFSU2_TR(0x6327c3);
if(r1(R+518)){{goto L6327d3;}}
}
B6327c5:L6327c5:{c.instructions+=3;NFSU2_TR(0x6327c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6327c6:{NFSU2_TR(0x6327c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6327c8:{NFSU2_TR(0x6327c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6327c0u);}goto L6327c0;}}
}
B6327ca:L6327ca:{c.instructions+=2;NFSU2_TR(0x6327ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6327cd:{NFSU2_TR(0x6327cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6327d7;}}
}
B6327cf:L6327cf:{c.instructions+=2;NFSU2_TR(0x6327cf);
__builtin_memmove((R+0),(R+12),4);
}
B6327d1:{NFSU2_TR(0x6327d1);
{goto L6327df;}
}
B6327d3:L6327d3:{c.instructions+=2;NFSU2_TR(0x6327d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6327d5:{NFSU2_TR(0x6327d5);
{goto L6327df;}
}
B6327d7:L6327d7:{c.instructions+=2;NFSU2_TR(0x6327d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6327da:{NFSU2_TR(0x6327da);
w4(R+0,u32(0x1ull));
}
B6327df:L6327df:{c.instructions+=5;NFSU2_TR(0x6327df);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6327e6:{NFSU2_TR(0x6327e6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6327e8:{NFSU2_TR(0x6327e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6327ea:{NFSU2_TR(0x6327ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6327ec:{NFSU2_TR(0x6327ec);
if(r1(R+518)){{goto L632811;}}
}
B6327ee:L6327ee:{c.instructions+=2;NFSU2_TR(0x6327ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6327f0:{NFSU2_TR(0x6327f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6327fc;}}
}
B6327f2:L6327f2:{c.instructions+=2;NFSU2_TR(0x6327f2);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6327f5:{NFSU2_TR(0x6327f5);
if(r1(R+518)){{goto L632805;}}
}
B6327f7:L6327f7:{c.instructions+=3;NFSU2_TR(0x6327f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6327f8:{NFSU2_TR(0x6327f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6327fa:{NFSU2_TR(0x6327fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6327f2u);}goto L6327f2;}}
}
B6327fc:L6327fc:{c.instructions+=2;NFSU2_TR(0x6327fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6327ff:{NFSU2_TR(0x6327ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632809;}}
}
B632801:L632801:{c.instructions+=2;NFSU2_TR(0x632801);
__builtin_memmove((R+0),(R+12),4);
}
B632803:{NFSU2_TR(0x632803);
{goto L632811;}
}
B632805:L632805:{c.instructions+=2;NFSU2_TR(0x632805);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632807:{NFSU2_TR(0x632807);
{goto L632811;}
}
B632809:L632809:{c.instructions+=2;NFSU2_TR(0x632809);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63280c:{NFSU2_TR(0x63280c);
w4(R+0,u32(0x1ull));
}
B632811:L632811:{c.instructions+=5;NFSU2_TR(0x632811);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632815:{NFSU2_TR(0x632815);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632817:{NFSU2_TR(0x632817);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632819:{NFSU2_TR(0x632819);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63281b:{NFSU2_TR(0x63281b);
if(r1(R+518)){{goto L632840;}}
}
B63281d:L63281d:{c.instructions+=2;NFSU2_TR(0x63281d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63281f:{NFSU2_TR(0x63281f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63282b;}}
}
B632821:L632821:{c.instructions+=2;NFSU2_TR(0x632821);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632824:{NFSU2_TR(0x632824);
if(r1(R+518)){{goto L632834;}}
}
B632826:L632826:{c.instructions+=3;NFSU2_TR(0x632826);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632827:{NFSU2_TR(0x632827);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632829:{NFSU2_TR(0x632829);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632821u);}goto L632821;}}
}
B63282b:L63282b:{c.instructions+=2;NFSU2_TR(0x63282b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63282e:{NFSU2_TR(0x63282e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632838;}}
}
B632830:L632830:{c.instructions+=2;NFSU2_TR(0x632830);
__builtin_memmove((R+0),(R+12),4);
}
B632832:{NFSU2_TR(0x632832);
{goto L632840;}
}
B632834:L632834:{c.instructions+=2;NFSU2_TR(0x632834);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632836:{NFSU2_TR(0x632836);
{goto L632840;}
}
B632838:L632838:{c.instructions+=2;NFSU2_TR(0x632838);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63283b:{NFSU2_TR(0x63283b);
w4(R+0,u32(0x1ull));
}
B632840:L632840:{c.instructions+=7;NFSU2_TR(0x632840);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B632844:{NFSU2_TR(0x632844);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632845:{NFSU2_TR(0x632845);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632849:{NFSU2_TR(0x632849);
u8 U[4];
w4(U+0,u32(0x7a8928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63284e:{NFSU2_TR(0x63284e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63284f:{NFSU2_TR(0x63284f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632851:{NFSU2_TR(0x632851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632856ull));
TAIL_STATIC(0x4400d0u,440);
}
B632856:L632856:{c.instructions+=3;NFSU2_TR(0x632856);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63285a:{NFSU2_TR(0x63285a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63285b:{NFSU2_TR(0x63285b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632860ull));
TAIL_STATIC(0x43db50u,43d);
}
B632860:L632860:{c.instructions+=3;NFSU2_TR(0x632860);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B632863:{NFSU2_TR(0x632863);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632865:{NFSU2_TR(0x632865);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63286b;}}
}
B632867:L632867:{c.instructions+=2;NFSU2_TR(0x632867);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632869:{NFSU2_TR(0x632869);
{goto L63288c;}
}
B63286b:L63286b:{c.instructions+=3;NFSU2_TR(0x63286b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63286d:{NFSU2_TR(0x63286d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63286f:{NFSU2_TR(0x63286f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63287b;}}
}
B632871:L632871:{c.instructions+=2;NFSU2_TR(0x632871);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632874:{NFSU2_TR(0x632874);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632867u);}goto L632867;}}
}
B632876:L632876:{c.instructions+=3;NFSU2_TR(0x632876);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B632877:{NFSU2_TR(0x632877);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632879:{NFSU2_TR(0x632879);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632871u);}goto L632871;}}
}
B63287b:L63287b:{c.instructions+=2;NFSU2_TR(0x63287b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63287e:{NFSU2_TR(0x63287e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632884;}}
}
B632880:L632880:{c.instructions+=2;NFSU2_TR(0x632880);
__builtin_memmove((R+0),(R+12),4);
}
B632882:{NFSU2_TR(0x632882);
{goto L63288c;}
}
B632884:L632884:{c.instructions+=2;NFSU2_TR(0x632884);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632887:{NFSU2_TR(0x632887);
w4(R+0,u32(0x1ull));
}
B63288c:L63288c:{c.instructions+=6;NFSU2_TR(0x63288c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63288d:{NFSU2_TR(0x63288d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B632891:{NFSU2_TR(0x632891);
u8 U[4];
w4(U+0,u32(0x7a8918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632896:{NFSU2_TR(0x632896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632897:{NFSU2_TR(0x632897);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632899:{NFSU2_TR(0x632899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63289eull));
TAIL_STATIC(0x4400d0u,440);
}
B63289e:L63289e:{c.instructions+=3;NFSU2_TR(0x63289e);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6328a2:{NFSU2_TR(0x6328a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6328a3:{NFSU2_TR(0x6328a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6328a8ull));
TAIL_STATIC(0x43db50u,43d);
}
B6328a8:L6328a8:{c.instructions+=3;NFSU2_TR(0x6328a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6328ab:{NFSU2_TR(0x6328ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6328ad:{NFSU2_TR(0x6328ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6328b3;}}
}
B6328af:L6328af:{c.instructions+=2;NFSU2_TR(0x6328af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6328b1:{NFSU2_TR(0x6328b1);
{goto L6328db;}
}
B6328b3:L6328b3:{c.instructions+=3;NFSU2_TR(0x6328b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6328b5:{NFSU2_TR(0x6328b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6328b7:{NFSU2_TR(0x6328b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6328ca;}}
}
B6328b9:L6328b9:{c.instructions+=1;NFSU2_TR(0x6328b9);
__builtin_memmove((R+16),(R+16),4);
}
B6328c0:L6328c0:{c.instructions+=2;NFSU2_TR(0x6328c0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6328c3:{NFSU2_TR(0x6328c3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6328afu);}goto L6328af;}}
}
B6328c5:L6328c5:{c.instructions+=3;NFSU2_TR(0x6328c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6328c6:{NFSU2_TR(0x6328c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6328c8:{NFSU2_TR(0x6328c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6328c0u);}goto L6328c0;}}
}
B6328ca:L6328ca:{c.instructions+=2;NFSU2_TR(0x6328ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6328cd:{NFSU2_TR(0x6328cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6328d3;}}
}
B6328cf:L6328cf:{c.instructions+=2;NFSU2_TR(0x6328cf);
__builtin_memmove((R+0),(R+12),4);
}
B6328d1:{NFSU2_TR(0x6328d1);
{goto L6328db;}
}
B6328d3:L6328d3:{c.instructions+=2;NFSU2_TR(0x6328d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6328d6:{NFSU2_TR(0x6328d6);
w4(R+0,u32(0x1ull));
}
B6328db:L6328db:{c.instructions+=6;NFSU2_TR(0x6328db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6328dc:{NFSU2_TR(0x6328dc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6328de:{NFSU2_TR(0x6328de);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6328e2:{NFSU2_TR(0x6328e2);
u8 U[4];
w4(U+0,u32(0x7a8910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6328e7:{NFSU2_TR(0x6328e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6328e8:{NFSU2_TR(0x6328e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6328edull));
TAIL_STATIC(0x4400d0u,440);
}
B6328ed:L6328ed:{c.instructions+=3;NFSU2_TR(0x6328ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6328f1:{NFSU2_TR(0x6328f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6328f2:{NFSU2_TR(0x6328f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6328f7ull));
TAIL_STATIC(0x43db50u,43d);
}
B6328f7:L6328f7:{c.instructions+=3;NFSU2_TR(0x6328f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6328fa:{NFSU2_TR(0x6328fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6328fc:{NFSU2_TR(0x6328fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632902;}}
}
B6328fe:L6328fe:{c.instructions+=2;NFSU2_TR(0x6328fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632900:{NFSU2_TR(0x632900);
{goto L632923;}
}
B632902:L632902:{c.instructions+=3;NFSU2_TR(0x632902);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B632904:{NFSU2_TR(0x632904);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632906:{NFSU2_TR(0x632906);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632912;}}
}
B632908:L632908:{c.instructions+=2;NFSU2_TR(0x632908);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B63290b:{NFSU2_TR(0x63290b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6328feu);}goto L6328fe;}}
}
B63290d:L63290d:{c.instructions+=3;NFSU2_TR(0x63290d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B63290e:{NFSU2_TR(0x63290e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632910:{NFSU2_TR(0x632910);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632908u);}goto L632908;}}
}
B632912:L632912:{c.instructions+=2;NFSU2_TR(0x632912);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632915:{NFSU2_TR(0x632915);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63291b;}}
}
B632917:L632917:{c.instructions+=2;NFSU2_TR(0x632917);
__builtin_memmove((R+0),(R+12),4);
}
B632919:{NFSU2_TR(0x632919);
{goto L632923;}
}
B63291b:L63291b:{c.instructions+=2;NFSU2_TR(0x63291b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63291e:{NFSU2_TR(0x63291e);
w4(R+0,u32(0x1ull));
}
B632923:L632923:{c.instructions+=3;NFSU2_TR(0x632923);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632925:{NFSU2_TR(0x632925);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63292c:{NFSU2_TR(0x63292c);
if(r1(R+518)){{goto L632947;}}
}
B63292e:L63292e:{c.instructions+=2;NFSU2_TR(0x63292e);
u8 U[4];
w4(U+0,u32(0x7a8904ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632933:{NFSU2_TR(0x632933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632938ull));
TAIL_STATIC(0x43db50u,43d);
}
B632938:L632938:{c.instructions+=5;NFSU2_TR(0x632938);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632939:{NFSU2_TR(0x632939);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63293b:{NFSU2_TR(0x63293b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63293c:{NFSU2_TR(0x63293c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63293d:{NFSU2_TR(0x63293d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632942ull));
TAIL_STATIC(0x610530u,610);
}
B632942:L632942:{c.instructions+=2;NFSU2_TR(0x632942);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B632945:{NFSU2_TR(0x632945);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632947:L632947:{c.instructions+=4;NFSU2_TR(0x632947);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63294e:{NFSU2_TR(0x63294e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632950:{NFSU2_TR(0x632950);
w4(R+0,u32(0x789bd8ull));
}
B632955:{NFSU2_TR(0x632955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63295c;}}
}
B632957:L632957:{c.instructions+=1;NFSU2_TR(0x632957);
w4(R+0,u32(0x789af4ull));
}
B63295c:L63295c:{c.instructions+=6;NFSU2_TR(0x63295c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63295d:{NFSU2_TR(0x63295d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63295e:{NFSU2_TR(0x63295e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632962:{NFSU2_TR(0x632962);
u8 U[4];
w4(U+0,u32(0x7a88f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632967:{NFSU2_TR(0x632967);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632968:{NFSU2_TR(0x632968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63296dull));
TAIL_STATIC(0x4400d0u,440);
}
B63296d:L63296d:{c.instructions+=3;NFSU2_TR(0x63296d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B632971:{NFSU2_TR(0x632971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632972:{NFSU2_TR(0x632972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632977ull));
TAIL_STATIC(0x43db50u,43d);
}
B632977:L632977:{c.instructions+=4;NFSU2_TR(0x632977);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B63297a:{NFSU2_TR(0x63297a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63297c:{NFSU2_TR(0x63297c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632982:{NFSU2_TR(0x632982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632988;}}
}
B632984:L632984:{c.instructions+=2;NFSU2_TR(0x632984);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632986:{NFSU2_TR(0x632986);
{goto L6329ab;}
}
B632988:L632988:{c.instructions+=3;NFSU2_TR(0x632988);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63298a:{NFSU2_TR(0x63298a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63298c:{NFSU2_TR(0x63298c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63299a;}}
}
B63298e:L63298e:{c.instructions+=1;NFSU2_TR(0x63298e);
__builtin_memmove((R+28),(R+28),4);
}
B632990:L632990:{c.instructions+=2;NFSU2_TR(0x632990);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632993:{NFSU2_TR(0x632993);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632984u);}goto L632984;}}
}
B632995:L632995:{c.instructions+=3;NFSU2_TR(0x632995);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B632996:{NFSU2_TR(0x632996);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632998:{NFSU2_TR(0x632998);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632990u);}goto L632990;}}
}
B63299a:L63299a:{c.instructions+=2;NFSU2_TR(0x63299a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63299d:{NFSU2_TR(0x63299d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6329a3;}}
}
B63299f:L63299f:{c.instructions+=2;NFSU2_TR(0x63299f);
__builtin_memmove((R+0),(R+12),4);
}
B6329a1:{NFSU2_TR(0x6329a1);
{goto L6329ab;}
}
B6329a3:L6329a3:{c.instructions+=2;NFSU2_TR(0x6329a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6329a6:{NFSU2_TR(0x6329a6);
w4(R+0,u32(0x1ull));
}
B6329ab:L6329ab:{c.instructions+=6;NFSU2_TR(0x6329ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6329ac:{NFSU2_TR(0x6329ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6329b0:{NFSU2_TR(0x6329b0);
u8 U[4];
w4(U+0,u32(0x7a88f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6329b5:{NFSU2_TR(0x6329b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6329b6:{NFSU2_TR(0x6329b6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6329b8:{NFSU2_TR(0x6329b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6329bdull));
TAIL_STATIC(0x4400d0u,440);
}
B6329bd:L6329bd:{c.instructions+=3;NFSU2_TR(0x6329bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6329c1:{NFSU2_TR(0x6329c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6329c2:{NFSU2_TR(0x6329c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6329c7ull));
TAIL_STATIC(0x43db50u,43d);
}
B6329c7:L6329c7:{c.instructions+=3;NFSU2_TR(0x6329c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6329ca:{NFSU2_TR(0x6329ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6329cc:{NFSU2_TR(0x6329cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6329d2;}}
}
B6329ce:L6329ce:{c.instructions+=2;NFSU2_TR(0x6329ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6329d0:{NFSU2_TR(0x6329d0);
{goto L6329f3;}
}
B6329d2:L6329d2:{c.instructions+=3;NFSU2_TR(0x6329d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6329d4:{NFSU2_TR(0x6329d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6329d6:{NFSU2_TR(0x6329d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6329e2;}}
}
B6329d8:L6329d8:{c.instructions+=2;NFSU2_TR(0x6329d8);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6329db:{NFSU2_TR(0x6329db);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6329ceu);}goto L6329ce;}}
}
B6329dd:L6329dd:{c.instructions+=3;NFSU2_TR(0x6329dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6329de:{NFSU2_TR(0x6329de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6329e0:{NFSU2_TR(0x6329e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6329d8u);}goto L6329d8;}}
}
B6329e2:L6329e2:{c.instructions+=2;NFSU2_TR(0x6329e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6329e5:{NFSU2_TR(0x6329e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6329eb;}}
}
B6329e7:L6329e7:{c.instructions+=2;NFSU2_TR(0x6329e7);
__builtin_memmove((R+0),(R+12),4);
}
B6329e9:{NFSU2_TR(0x6329e9);
{goto L6329f3;}
}
B6329eb:L6329eb:{c.instructions+=2;NFSU2_TR(0x6329eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6329ee:{NFSU2_TR(0x6329ee);
w4(R+0,u32(0x1ull));
}
B6329f3:L6329f3:{c.instructions+=6;NFSU2_TR(0x6329f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6329f4:{NFSU2_TR(0x6329f4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6329f6:{NFSU2_TR(0x6329f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6329fa:{NFSU2_TR(0x6329fa);
u8 U[4];
w4(U+0,u32(0x7a88e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6329ff:{NFSU2_TR(0x6329ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a00:{NFSU2_TR(0x632a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632a05ull));
TAIL_STATIC(0x4400d0u,440);
}
B632a05:L632a05:{c.instructions+=3;NFSU2_TR(0x632a05);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B632a09:{NFSU2_TR(0x632a09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a0a:{NFSU2_TR(0x632a0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632a0full));
TAIL_STATIC(0x43db50u,43d);
}
B632a0f:L632a0f:{c.instructions+=6;NFSU2_TR(0x632a0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a10:{NFSU2_TR(0x632a10);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632a14:{NFSU2_TR(0x632a14);
u8 U[4];
w4(U+0,u32(0x7a88e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a19:{NFSU2_TR(0x632a19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a1a:{NFSU2_TR(0x632a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632a20:{NFSU2_TR(0x632a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632a25ull));
TAIL_STATIC(0x4400d0u,440);
}
B632a25:L632a25:{c.instructions+=3;NFSU2_TR(0x632a25);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B632a29:{NFSU2_TR(0x632a29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a2a:{NFSU2_TR(0x632a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632a2full));
TAIL_STATIC(0x43db50u,43d);
}
B632a2f:L632a2f:{c.instructions+=6;NFSU2_TR(0x632a2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a30:{NFSU2_TR(0x632a30);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B632a34:{NFSU2_TR(0x632a34);
u8 U[4];
w4(U+0,u32(0x7a88d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a39:{NFSU2_TR(0x632a39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a3a:{NFSU2_TR(0x632a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632a40:{NFSU2_TR(0x632a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632a45ull));
TAIL_STATIC(0x4400d0u,440);
}
B632a45:L632a45:{c.instructions+=3;NFSU2_TR(0x632a45);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B632a49:{NFSU2_TR(0x632a49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632a4a:{NFSU2_TR(0x632a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632a4full));
TAIL_STATIC(0x43db50u,43d);
}
B632a4f:L632a4f:{c.instructions+=5;NFSU2_TR(0x632a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632a55:{NFSU2_TR(0x632a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632a5b:{NFSU2_TR(0x632a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B632a5e:{NFSU2_TR(0x632a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632a60:{NFSU2_TR(0x632a60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632a66;}}
}
B632a62:L632a62:{c.instructions+=2;NFSU2_TR(0x632a62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632a64:{NFSU2_TR(0x632a64);
{goto L632a8b;}
}
B632a66:L632a66:{c.instructions+=3;NFSU2_TR(0x632a66);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B632a68:{NFSU2_TR(0x632a68);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632a6a:{NFSU2_TR(0x632a6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632a7a;}}
}
B632a6c:L632a6c:{c.instructions+=1;NFSU2_TR(0x632a6c);
__builtin_memmove((R+16),(R+16),4);
}
B632a70:L632a70:{c.instructions+=2;NFSU2_TR(0x632a70);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632a73:{NFSU2_TR(0x632a73);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632a62u);}goto L632a62;}}
}
B632a75:L632a75:{c.instructions+=3;NFSU2_TR(0x632a75);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B632a76:{NFSU2_TR(0x632a76);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632a78:{NFSU2_TR(0x632a78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632a70u);}goto L632a70;}}
}
B632a7a:L632a7a:{c.instructions+=2;NFSU2_TR(0x632a7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632a7d:{NFSU2_TR(0x632a7d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632a83;}}
}
B632a7f:L632a7f:{c.instructions+=2;NFSU2_TR(0x632a7f);
__builtin_memmove((R+0),(R+12),4);
}
B632a81:{NFSU2_TR(0x632a81);
{goto L632a8b;}
}
B632a83:L632a83:{c.instructions+=2;NFSU2_TR(0x632a83);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632a86:{NFSU2_TR(0x632a86);
w4(R+0,u32(0x1ull));
}
B632a8b:L632a8b:{c.instructions+=5;NFSU2_TR(0x632a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632a91:{NFSU2_TR(0x632a91);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632a93:{NFSU2_TR(0x632a93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632a95:{NFSU2_TR(0x632a95);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632a97:{NFSU2_TR(0x632a97);
if(r1(R+518)){{goto L632abf;}}
}
B632a99:L632a99:{c.instructions+=2;NFSU2_TR(0x632a99);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632a9b:{NFSU2_TR(0x632a9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632aaa;}}
}
B632a9d:L632a9d:{c.instructions+=1;NFSU2_TR(0x632a9d);
__builtin_memmove((R+4),(R+4),4);
}
B632aa0:L632aa0:{c.instructions+=2;NFSU2_TR(0x632aa0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632aa3:{NFSU2_TR(0x632aa3);
if(r1(R+518)){{goto L632ab3;}}
}
B632aa5:L632aa5:{c.instructions+=3;NFSU2_TR(0x632aa5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632aa6:{NFSU2_TR(0x632aa6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632aa8:{NFSU2_TR(0x632aa8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632aa0u);}goto L632aa0;}}
}
B632aaa:L632aaa:{c.instructions+=2;NFSU2_TR(0x632aaa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632aad:{NFSU2_TR(0x632aad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632ab7;}}
}
B632aaf:L632aaf:{c.instructions+=2;NFSU2_TR(0x632aaf);
__builtin_memmove((R+0),(R+12),4);
}
B632ab1:{NFSU2_TR(0x632ab1);
{goto L632abf;}
}
B632ab3:L632ab3:{c.instructions+=2;NFSU2_TR(0x632ab3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632ab5:{NFSU2_TR(0x632ab5);
{goto L632abf;}
}
B632ab7:L632ab7:{c.instructions+=2;NFSU2_TR(0x632ab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632aba:{NFSU2_TR(0x632aba);
w4(R+0,u32(0x1ull));
}
B632abf:L632abf:{c.instructions+=5;NFSU2_TR(0x632abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632ac5:{NFSU2_TR(0x632ac5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632ac7:{NFSU2_TR(0x632ac7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632ac9:{NFSU2_TR(0x632ac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632acb:{NFSU2_TR(0x632acb);
if(r1(R+518)){{goto L632af0;}}
}
B632acd:L632acd:{c.instructions+=2;NFSU2_TR(0x632acd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632acf:{NFSU2_TR(0x632acf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632adb;}}
}
B632ad1:L632ad1:{c.instructions+=2;NFSU2_TR(0x632ad1);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632ad4:{NFSU2_TR(0x632ad4);
if(r1(R+518)){{goto L632ae4;}}
}
B632ad6:L632ad6:{c.instructions+=3;NFSU2_TR(0x632ad6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B632ad7:{NFSU2_TR(0x632ad7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632ad9:{NFSU2_TR(0x632ad9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632ad1u);}goto L632ad1;}}
}
B632adb:L632adb:{c.instructions+=2;NFSU2_TR(0x632adb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632ade:{NFSU2_TR(0x632ade);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632ae8;}}
}
B632ae0:L632ae0:{c.instructions+=2;NFSU2_TR(0x632ae0);
__builtin_memmove((R+0),(R+12),4);
}
B632ae2:{NFSU2_TR(0x632ae2);
{goto L632af0;}
}
B632ae4:L632ae4:{c.instructions+=2;NFSU2_TR(0x632ae4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632ae6:{NFSU2_TR(0x632ae6);
{goto L632af0;}
}
B632ae8:L632ae8:{c.instructions+=2;NFSU2_TR(0x632ae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632aeb:{NFSU2_TR(0x632aeb);
w4(R+0,u32(0x1ull));
}
B632af0:L632af0:{c.instructions+=3;NFSU2_TR(0x632af0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632af2:{NFSU2_TR(0x632af2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632af4:{NFSU2_TR(0x632af4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632b01;}}
}
B632af6:L632af6:{c.instructions+=3;NFSU2_TR(0x632af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632afd:{NFSU2_TR(0x632afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632aff:{NFSU2_TR(0x632aff);
if(r1(R+518)){{goto L632b2c;}}
}
B632b01:L632b01:{c.instructions+=4;NFSU2_TR(0x632b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B632b08:{NFSU2_TR(0x632b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632b0e:{NFSU2_TR(0x632b0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632b10:{NFSU2_TR(0x632b10);
if(r1(R+518)){{goto L632b33;}}
}
B632b12:L632b12:{c.instructions+=1;NFSU2_TR(0x632b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b17ull));
TAIL_STATIC(0x4951f0u,495);
}
B632b17:L632b17:{c.instructions+=2;NFSU2_TR(0x632b17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632b19:{NFSU2_TR(0x632b19);
if(r1(R+518)){{goto L632b33;}}
}
B632b1b:L632b1b:{c.instructions+=5;NFSU2_TR(0x632b1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b1c:{NFSU2_TR(0x632b1c);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b1e:{NFSU2_TR(0x632b1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b1f:{NFSU2_TR(0x632b1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b20:{NFSU2_TR(0x632b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b25ull));
TAIL_STATIC(0x610530u,610);
}
B632b25:L632b25:{c.instructions+=3;NFSU2_TR(0x632b25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B632b28:{NFSU2_TR(0x632b28);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632b2a:{NFSU2_TR(0x632b2a);
{goto L632b33;}
}
B632b2c:L632b2c:{c.instructions+=1;NFSU2_TR(0x632b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B632b33:L632b33:{c.instructions+=2;NFSU2_TR(0x632b33);
u8 U[4];
w4(U+0,u32(0x7a38bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b38:{NFSU2_TR(0x632b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b3dull));
TAIL_STATIC(0x43db50u,43d);
}
B632b3d:L632b3d:{c.instructions+=3;NFSU2_TR(0x632b3d);
u8 U[4];
w4(U+0,u32(0x7a8804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b42:{NFSU2_TR(0x632b42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632b46:{NFSU2_TR(0x632b46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b4bull));
TAIL_STATIC(0x43db50u,43d);
}
B632b4b:L632b4b:{c.instructions+=3;NFSU2_TR(0x632b4b);
u8 U[4];
w4(U+0,u32(0x7a87fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b50:{NFSU2_TR(0x632b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632b54:{NFSU2_TR(0x632b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b59ull));
TAIL_STATIC(0x43db50u,43d);
}
B632b59:L632b59:{c.instructions+=2;NFSU2_TR(0x632b59);
u8 U[4];
w4(U+0,u32(0x7a87f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b5e:{NFSU2_TR(0x632b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b63ull));
TAIL_STATIC(0x43db50u,43d);
}
B632b63:L632b63:{c.instructions+=2;NFSU2_TR(0x632b63);
u8 U[4];
w4(U+0,u32(0x7a87ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b68:{NFSU2_TR(0x632b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b6dull));
TAIL_STATIC(0x43db50u,43d);
}
B632b6d:L632b6d:{c.instructions+=2;NFSU2_TR(0x632b6d);
u8 U[4];
w4(U+0,u32(0x7a2d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b72:{NFSU2_TR(0x632b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b77ull));
TAIL_STATIC(0x43db50u,43d);
}
B632b77:L632b77:{c.instructions+=3;NFSU2_TR(0x632b77);
u8 U[4];
w4(U+0,u32(0x7a87e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b7c:{NFSU2_TR(0x632b7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632b80:{NFSU2_TR(0x632b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b85ull));
TAIL_STATIC(0x43db50u,43d);
}
B632b85:L632b85:{c.instructions+=3;NFSU2_TR(0x632b85);
u8 U[4];
w4(U+0,u32(0x7a87dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632b8a:{NFSU2_TR(0x632b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632b8e:{NFSU2_TR(0x632b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632b93ull));
TAIL_STATIC(0x43db50u,43d);
}
B632b93:L632b93:{c.instructions+=8;NFSU2_TR(0x632b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632b97:{NFSU2_TR(0x632b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x660ull))));
__builtin_memmove((R+0),(U+0),4);
}
B632b9d:{NFSU2_TR(0x632b9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B632ba0:{NFSU2_TR(0x632ba0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x714ull))));
}
B632ba6:{NFSU2_TR(0x632ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632bad:{NFSU2_TR(0x632bad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632bb1:{NFSU2_TR(0x632bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B632bb9:{NFSU2_TR(0x632bb9);
__builtin_memmove((R+16),(R+16),4);
}
B632bc0:L632bc0:{c.instructions+=4;NFSU2_TR(0x632bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632bc7:{NFSU2_TR(0x632bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B632bc9:{NFSU2_TR(0x632bc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632bcb:{NFSU2_TR(0x632bcb);
if(r1(R+518)){{goto L632d90;}}
}
B632bd1:L632bd1:{c.instructions+=3;NFSU2_TR(0x632bd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B632bd5:{NFSU2_TR(0x632bd5);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B632bd9:{NFSU2_TR(0x632bd9);
if(r1(R+518)){{goto L632d90;}}
}
B632bdf:L632bdf:{c.instructions+=8;NFSU2_TR(0x632bdf);
__builtin_memmove((R+4),gp(0x8a1cc8),4);
}
B632be5:{NFSU2_TR(0x632be5);
w4(R+8,u32(r2(R+0)));
}
B632be8:{NFSU2_TR(0x632be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632beb:{NFSU2_TR(0x632beb);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B632bef:{NFSU2_TR(0x632bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B632bf2:{NFSU2_TR(0x632bf2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B632bf4:{NFSU2_TR(0x632bf4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632bf6:{NFSU2_TR(0x632bf6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632d90;}}
}
B632bfc:L632bfc:{c.instructions+=4;NFSU2_TR(0x632bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632bff:{NFSU2_TR(0x632bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632c06:{NFSU2_TR(0x632c06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B632c09:{NFSU2_TR(0x632c09);
__builtin_memmove((R+16),(R+16),4);
}
B632c10:L632c10:{c.instructions+=6;NFSU2_TR(0x632c10);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B632c13:{NFSU2_TR(0x632c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632c1a:{NFSU2_TR(0x632c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B632c1e:{NFSU2_TR(0x632c1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632c22:{NFSU2_TR(0x632c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632c24:{NFSU2_TR(0x632c24);
if(r1(R+518)){{goto L632c37;}}
}
B632c26:L632c26:{c.instructions+=2;NFSU2_TR(0x632c26);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B632c28:{NFSU2_TR(0x632c28);
if(r1(R+518)){{goto L632c37;}}
}
B632c2a:L632c2a:{c.instructions+=4;NFSU2_TR(0x632c2a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B632c2b:{NFSU2_TR(0x632c2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B632c2e:{NFSU2_TR(0x632c2e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632c30:{NFSU2_TR(0x632c30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632c10u);}goto L632c10;}}
}
B632c32:L632c32:{c.instructions+=1;NFSU2_TR(0x632c32);
{goto L632d90;}
}
B632c37:L632c37:{c.instructions+=2;NFSU2_TR(0x632c37);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632c39:{NFSU2_TR(0x632c39);
if(r1(R+518)){{goto L632d90;}}
}
B632c3f:L632c3f:{c.instructions+=7;NFSU2_TR(0x632c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B632c46:{NFSU2_TR(0x632c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B632c48:{NFSU2_TR(0x632c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632c4c:{NFSU2_TR(0x632c4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632c4e:{NFSU2_TR(0x632c4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632c4f:{NFSU2_TR(0x632c4f);
__builtin_memmove((R+4),(R+28),4);
}
B632c51:{NFSU2_TR(0x632c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632c56ull));
TAIL_STATIC(0x60fef0u,60f);
}
B632c56:L632c56:{c.instructions+=2;NFSU2_TR(0x632c56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632c58:{NFSU2_TR(0x632c58);
if(r1(R+518)){{goto L632d90;}}
}
B632c5e:L632c5e:{c.instructions+=4;NFSU2_TR(0x632c5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632c60:{NFSU2_TR(0x632c60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632c61:{NFSU2_TR(0x632c61);
__builtin_memmove((R+4),(R+28),4);
}
B632c63:{NFSU2_TR(0x632c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632c68ull));
TAIL_STATIC(0x60fef0u,60f);
}
B632c68:L632c68:{c.instructions+=2;NFSU2_TR(0x632c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632c6a:{NFSU2_TR(0x632c6a);
if(r1(R+518)){{goto L632c75;}}
}
B632c6c:L632c6c:{c.instructions+=3;NFSU2_TR(0x632c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632c6f:{NFSU2_TR(0x632c6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632c73:{NFSU2_TR(0x632c73);
{goto L632c7d;}
}
B632c75:L632c75:{c.instructions+=1;NFSU2_TR(0x632c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B632c7d:L632c7d:{c.instructions+=3;NFSU2_TR(0x632c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632c81:{NFSU2_TR(0x632c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632c88:{NFSU2_TR(0x632c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B632c90:L632c90:{c.instructions+=4;NFSU2_TR(0x632c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B632c97:{NFSU2_TR(0x632c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B632c99:{NFSU2_TR(0x632c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632c9b:{NFSU2_TR(0x632c9b);
if(r1(R+518)){{goto L632d70;}}
}
B632ca1:L632ca1:{c.instructions+=2;NFSU2_TR(0x632ca1);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ca6:{NFSU2_TR(0x632ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632cabull));
TAIL_STATIC(0x43db50u,43d);
}
B632cab:L632cab:{c.instructions+=6;NFSU2_TR(0x632cab);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B632caf:{NFSU2_TR(0x632caf);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B632cb5:{NFSU2_TR(0x632cb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B632cb8:{NFSU2_TR(0x632cb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B632cbd:{NFSU2_TR(0x632cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632cc1:{NFSU2_TR(0x632cc1);
if(r1(R+518)){{goto L632d04;}}
}
B632cc3:L632cc3:{c.instructions+=7;NFSU2_TR(0x632cc3);
w4(R+0,u32(r2(R+4)));
}
B632cc6:{NFSU2_TR(0x632cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632cc9:{NFSU2_TR(0x632cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B632ccc:{NFSU2_TR(0x632ccc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B632ccf:{NFSU2_TR(0x632ccf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B632cd1:{NFSU2_TR(0x632cd1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632cd3:{NFSU2_TR(0x632cd3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632d04;}}
}
B632cd5:L632cd5:{c.instructions+=3;NFSU2_TR(0x632cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B632cd8:{NFSU2_TR(0x632cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632cdf:{NFSU2_TR(0x632cdf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B632ce2:L632ce2:{c.instructions+=6;NFSU2_TR(0x632ce2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B632ce5:{NFSU2_TR(0x632ce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632cec:{NFSU2_TR(0x632cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B632cf0:{NFSU2_TR(0x632cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632cf4:{NFSU2_TR(0x632cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632cf6:{NFSU2_TR(0x632cf6);
if(r1(R+518)){{goto L632d1a;}}
}
B632cf8:L632cf8:{c.instructions+=2;NFSU2_TR(0x632cf8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B632cfa:{NFSU2_TR(0x632cfa);
if(r1(R+518)){{goto L632d1a;}}
}
B632cfc:L632cfc:{c.instructions+=4;NFSU2_TR(0x632cfc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B632cfd:{NFSU2_TR(0x632cfd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B632d00:{NFSU2_TR(0x632d00);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632d02:{NFSU2_TR(0x632d02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632ce2u);}goto L632ce2;}}
}
B632d04:L632d04:{c.instructions+=1;NFSU2_TR(0x632d04);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B632d06:L632d06:{c.instructions+=4;NFSU2_TR(0x632d06);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632d0a:{NFSU2_TR(0x632d0a);
__builtin_memmove((R+0),(R+8),4);
}
B632d0c:{NFSU2_TR(0x632d0c);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B632d10:{NFSU2_TR(0x632d10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632d23;}}
}
B632d12:L632d12:{c.instructions+=3;NFSU2_TR(0x632d12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632d13:{NFSU2_TR(0x632d13);
u8 U[4];
w4(U+0,u32(0x7a87d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632d18:{NFSU2_TR(0x632d18);
{goto L632d3d;}
}
B632d1a:L632d1a:{c.instructions+=2;NFSU2_TR(0x632d1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632d1c:{NFSU2_TR(0x632d1c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632d04u);}goto L632d04;}}
}
B632d1e:L632d1e:{c.instructions+=2;NFSU2_TR(0x632d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B632d21:{NFSU2_TR(0x632d21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632d06u);}goto L632d06;}
}
B632d23:L632d23:{c.instructions+=2;NFSU2_TR(0x632d23);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B632d27:{NFSU2_TR(0x632d27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632d31;}}
}
B632d29:L632d29:{c.instructions+=3;NFSU2_TR(0x632d29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632d2a:{NFSU2_TR(0x632d2a);
u8 U[4];
w4(U+0,u32(0x7a87ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632d2f:{NFSU2_TR(0x632d2f);
{goto L632d3d;}
}
B632d31:L632d31:{c.instructions+=2;NFSU2_TR(0x632d31);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B632d35:{NFSU2_TR(0x632d35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632d45;}}
}
B632d37:L632d37:{c.instructions+=2;NFSU2_TR(0x632d37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632d38:{NFSU2_TR(0x632d38);
u8 U[4];
w4(U+0,u32(0x7a87c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632d3d:L632d3d:{c.instructions+=1;NFSU2_TR(0x632d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632d42ull));
TAIL_STATIC(0x43db80u,43d);
}
B632d42:L632d42:{c.instructions+=1;NFSU2_TR(0x632d42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B632d45:L632d45:{c.instructions+=2;NFSU2_TR(0x632d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632d47:{NFSU2_TR(0x632d47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632d4d;}}
}
B632d49:L632d49:{c.instructions+=2;NFSU2_TR(0x632d49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632d4b:{NFSU2_TR(0x632d4b);
{goto L632d6e;}
}
B632d4d:L632d4d:{c.instructions+=3;NFSU2_TR(0x632d4d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B632d4f:{NFSU2_TR(0x632d4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632d51:{NFSU2_TR(0x632d51);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L632d5d;}}
}
B632d53:L632d53:{c.instructions+=2;NFSU2_TR(0x632d53);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B632d56:{NFSU2_TR(0x632d56);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632d49u);}goto L632d49;}}
}
B632d58:L632d58:{c.instructions+=3;NFSU2_TR(0x632d58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B632d59:{NFSU2_TR(0x632d59);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632d5b:{NFSU2_TR(0x632d5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632d53u);}goto L632d53;}}
}
B632d5d:L632d5d:{c.instructions+=2;NFSU2_TR(0x632d5d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x45ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632d60:{NFSU2_TR(0x632d60);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632d66;}}
}
B632d62:L632d62:{c.instructions+=2;NFSU2_TR(0x632d62);
__builtin_memmove((R+0),(R+12),4);
}
B632d64:{NFSU2_TR(0x632d64);
{goto L632d6e;}
}
B632d66:L632d66:{c.instructions+=2;NFSU2_TR(0x632d66);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B632d69:{NFSU2_TR(0x632d69);
w4(R+0,u32(0x1ull));
}
B632d6e:L632d6e:{c.instructions+=1;NFSU2_TR(0x632d6e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B632d70:L632d70:{c.instructions+=7;NFSU2_TR(0x632d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632d77:{NFSU2_TR(0x632d77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632d7b:{NFSU2_TR(0x632d7b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B632d7e:{NFSU2_TR(0x632d7e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B632d7f:{NFSU2_TR(0x632d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632d86:{NFSU2_TR(0x632d86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632d8a:{NFSU2_TR(0x632d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632c90u);}goto L632c90;}}
}
B632d90:L632d90:{c.instructions+=10;NFSU2_TR(0x632d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B632d97:{NFSU2_TR(0x632d97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632d9b:{NFSU2_TR(0x632d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632d9f:{NFSU2_TR(0x632d9f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B632da2:{NFSU2_TR(0x632da2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B632da5:{NFSU2_TR(0x632da5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B632da6:{NFSU2_TR(0x632da6);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632dad:{NFSU2_TR(0x632dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632db1:{NFSU2_TR(0x632db1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632db5:{NFSU2_TR(0x632db5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632bc0u);}goto L632bc0;}}
}
B632dbb:L632dbb:{c.instructions+=9;NFSU2_TR(0x632dbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632dbf:{NFSU2_TR(0x632dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B632dc0:{NFSU2_TR(0x632dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632dc6:{NFSU2_TR(0x632dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632dcc:{NFSU2_TR(0x632dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B632dcd:{NFSU2_TR(0x632dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B632dce:{NFSU2_TR(0x632dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B632dcf:{NFSU2_TR(0x632dcf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B632dd2:{NFSU2_TR(0x632dd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B632de0:L632de0:{c.instructions+=18;NFSU2_TR(0x632de0);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B632de6:{NFSU2_TR(0x632de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x204ull))));
}
B632dec:{NFSU2_TR(0x632dec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ded:{NFSU2_TR(0x632ded);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632dee:{NFSU2_TR(0x632dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B632df5:{NFSU2_TR(0x632df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B632df8:{NFSU2_TR(0x632df8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632df9:{NFSU2_TR(0x632df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B632e00:{NFSU2_TR(0x632e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e01:{NFSU2_TR(0x632e01);
__builtin_memmove((R+28),(R+0),4);
}
B632e03:{NFSU2_TR(0x632e03);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B632e09:{NFSU2_TR(0x632e09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e0a:{NFSU2_TR(0x632e0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e0c:{NFSU2_TR(0x632e0c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e0e:{NFSU2_TR(0x632e0e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B632e10:{NFSU2_TR(0x632e10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e11:{NFSU2_TR(0x632e11);
w4(R+4,u32(0x8a2b68ull));
}
B632e16:{NFSU2_TR(0x632e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632e1bull));
TAIL_STATIC(0x631a20u,631);
}
B632e1b:L632e1b:{c.instructions+=9;NFSU2_TR(0x632e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B632e1e:{NFSU2_TR(0x632e1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e1f:{NFSU2_TR(0x632e1f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B632e21:{NFSU2_TR(0x632e21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e22:{NFSU2_TR(0x632e22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e23:{NFSU2_TR(0x632e23);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e25:{NFSU2_TR(0x632e25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e26:{NFSU2_TR(0x632e26);
w4(R+4,u32(0x8a2b68ull));
}
B632e2b:{NFSU2_TR(0x632e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632e30ull));
TAIL_STATIC(0x61b980u,61b);
}
B632e30:L632e30:{c.instructions+=1;NFSU2_TR(0x632e30);
__builtin_memmove((R+24),(R+0),4);
}
B632e32:L632e32:{c.instructions+=2;NFSU2_TR(0x632e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632e34:{NFSU2_TR(0x632e34);
if(r1(R+518)){{goto L632e97;}}
}
B632e36:L632e36:{c.instructions+=2;NFSU2_TR(0x632e36);
__builtin_memmove((R+4),(R+24),4);
}
B632e38:{NFSU2_TR(0x632e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632e3dull));
TAIL_STATIC(0x4fe120u,4fe);
}
B632e3d:L632e3d:{c.instructions+=4;NFSU2_TR(0x632e3d);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B632e40:{NFSU2_TR(0x632e40);
__builtin_memmove((R+4),(R+24),4);
}
B632e42:{NFSU2_TR(0x632e42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632e46:{NFSU2_TR(0x632e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632e4bull));
TAIL_STATIC(0x4fe130u,4fe);
}
B632e4b:L632e4b:{c.instructions+=2;NFSU2_TR(0x632e4b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B632e51:{NFSU2_TR(0x632e51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632e72;}}
}
B632e53:L632e53:{c.instructions+=4;NFSU2_TR(0x632e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xddull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B632e5a:{NFSU2_TR(0x632e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B632e5e:{NFSU2_TR(0x632e5e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632e60:{NFSU2_TR(0x632e60);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L632e72;}}
}
B632e62:L632e62:{c.instructions+=3;NFSU2_TR(0x632e62);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B632e69:{NFSU2_TR(0x632e69);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B632e6b:{NFSU2_TR(0x632e6b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L632e72;}}
}
B632e6d:L632e6d:{c.instructions+=2;NFSU2_TR(0x632e6d);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B632e71:{NFSU2_TR(0x632e71);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B632e72:L632e72:{c.instructions+=9;NFSU2_TR(0x632e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B632e79:{NFSU2_TR(0x632e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B632e7c:{NFSU2_TR(0x632e7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e7d:{NFSU2_TR(0x632e7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e7e:{NFSU2_TR(0x632e7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e80:{NFSU2_TR(0x632e80);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e82:{NFSU2_TR(0x632e82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632e83:{NFSU2_TR(0x632e83);
w4(R+4,u32(0x8a2b68ull));
}
B632e88:{NFSU2_TR(0x632e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632e8dull));
TAIL_STATIC(0x61b980u,61b);
}
B632e8d:L632e8d:{c.instructions+=3;NFSU2_TR(0x632e8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632e93:{NFSU2_TR(0x632e93);
__builtin_memmove((R+24),(R+0),4);
}
B632e95:{NFSU2_TR(0x632e95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632e32u);}goto L632e32;}}
}
B632e97:L632e97:{c.instructions+=2;NFSU2_TR(0x632e97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B632e99:{NFSU2_TR(0x632e99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L632ea8;}}
}
B632e9b:L632e9b:{c.instructions+=7;NFSU2_TR(0x632e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B632e9c:{NFSU2_TR(0x632e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B632e9d:{NFSU2_TR(0x632e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B632e9e:{NFSU2_TR(0x632e9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B632ea0:{NFSU2_TR(0x632ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B632ea1:{NFSU2_TR(0x632ea1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B632ea7:{NFSU2_TR(0x632ea7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B632ea8:L632ea8:{c.instructions+=2;NFSU2_TR(0x632ea8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ea9:{NFSU2_TR(0x632ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632eaeull));
TAIL_STATIC(0x43c1c0u,43c);
}
B632eae:L632eae:{c.instructions+=8;NFSU2_TR(0x632eae);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B632eb2:{NFSU2_TR(0x632eb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B632eb5:{NFSU2_TR(0x632eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B632eb6:{NFSU2_TR(0x632eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B632eb7:{NFSU2_TR(0x632eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B632eb8:{NFSU2_TR(0x632eb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B632eb9:{NFSU2_TR(0x632eb9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B632ebf:{NFSU2_TR(0x632ebf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B632ec0:L632ec0:{c.instructions+=11;NFSU2_TR(0x632ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xacull))));
}
B632ec6:{NFSU2_TR(0x632ec6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ec7:{NFSU2_TR(0x632ec7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ec8:{NFSU2_TR(0x632ec8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ec9:{NFSU2_TR(0x632ec9);
__builtin_memmove((R+24),(R+4),4);
}
B632ecb:{NFSU2_TR(0x632ecb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ecc:{NFSU2_TR(0x632ecc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B632ece:{NFSU2_TR(0x632ece);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B632ed4:{NFSU2_TR(0x632ed4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B632edc:{NFSU2_TR(0x632edc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B632ede:{NFSU2_TR(0x632ede);
__builtin_memmove((R+28),(R+28),4);
}
B632ee0:L632ee0:{c.instructions+=3;NFSU2_TR(0x632ee0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B632ee1:{NFSU2_TR(0x632ee1);
__builtin_memmove((R+4),(R+20),4);
}
B632ee3:{NFSU2_TR(0x632ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x632ee8ull));
TAIL_STATIC(0x5995e0u,599);
}
B632ee8:L632ee8:{c.instructions+=7;NFSU2_TR(0x632ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632eec:{NFSU2_TR(0x632eec);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B632ef0:{NFSU2_TR(0x632ef0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B632ef1:{NFSU2_TR(0x632ef1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B632ef4:{NFSU2_TR(0x632ef4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B632ef8:{NFSU2_TR(0x632ef8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B632efc:{NFSU2_TR(0x632efc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x632ee0u);}goto L632ee0;}}
}
B632efe:L632efe:{c.instructions+=57;NFSU2_TR(0x632efe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B632f02:{NFSU2_TR(0x632f02);
w1(R+8,u8(0x50ull));
}
B632f04:{NFSU2_TR(0x632f04);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B632f0a:{NFSU2_TR(0x632f0a);
w4(R+4,u32(0x5ull));
}
B632f0f:{NFSU2_TR(0x632f0f);
w4(R+0,u32(0x14ull));
}
B632f14:{NFSU2_TR(0x632f14);
u8 U[5];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f18:{NFSU2_TR(0x632f18);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f1c:{NFSU2_TR(0x632f1c);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f20:{NFSU2_TR(0x632f20);
w4(R+8,u32(0xaull));
}
B632f25:{NFSU2_TR(0x632f25);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B632f2a:{NFSU2_TR(0x632f2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x41ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f2e:{NFSU2_TR(0x632f2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x42ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f32:{NFSU2_TR(0x632f32);
u8 U[5];
w4(U+0,u32(u32(u32(0x43ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f36:{NFSU2_TR(0x632f36);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x5aull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f3b:{NFSU2_TR(0x632f3b);
u8 U[5];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f3f:{NFSU2_TR(0x632f3f);
u8 U[5];
w4(U+0,u32(u32(u32(0x46ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f44:{NFSU2_TR(0x632f44);
u8 U[5];
w4(U+0,u32(u32(u32(0x47ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f48:{NFSU2_TR(0x632f48);
u8 U[5];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f4c:{NFSU2_TR(0x632f4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x4aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f50:{NFSU2_TR(0x632f50);
u8 U[5];
w4(U+0,u32(u32(u32(0x4bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f54:{NFSU2_TR(0x632f54);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x41ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f59:{NFSU2_TR(0x632f59);
u8 U[5];
w4(U+0,u32(u32(u32(0x4dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f5d:{NFSU2_TR(0x632f5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x4eull))+u32(r4(R+16))));
w1(U+4,u8(0x23ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f62:{NFSU2_TR(0x632f62);
u8 U[5];
w4(U+0,u32(u32(u32(0x4full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f66:{NFSU2_TR(0x632f66);
u8 U[5];
w4(U+0,u32(u32(u32(0x51ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f6b:{NFSU2_TR(0x632f6b);
u8 U[5];
w4(U+0,u32(u32(u32(0x52ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f70:{NFSU2_TR(0x632f70);
u8 U[5];
w4(U+0,u32(u32(u32(0x53ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f74:{NFSU2_TR(0x632f74);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x46ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f79:{NFSU2_TR(0x632f79);
u8 U[5];
w4(U+0,u32(u32(u32(0x55ull))+u32(r4(R+16))));
w1(U+4,u8(0xfull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f7e:{NFSU2_TR(0x632f7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x56ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f83:{NFSU2_TR(0x632f83);
u8 U[5];
w4(U+0,u32(u32(u32(0x57ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f87:{NFSU2_TR(0x632f87);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w1(U+4,u8(0x37ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f8c:{NFSU2_TR(0x632f8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x59ull))+u32(r4(R+16))));
w1(U+4,u8(0x19ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f91:{NFSU2_TR(0x632f91);
u8 U[5];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+16))));
w1(U+4,u8(0xfull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f96:{NFSU2_TR(0x632f96);
u8 U[5];
w4(U+0,u32(u32(u32(0x5bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632f9a:{NFSU2_TR(0x632f9a);
u8 U[5];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w1(U+4,u8(0x28ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632f9f:{NFSU2_TR(0x632f9f);
u8 U[5];
w4(U+0,u32(u32(u32(0x5dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fa3:{NFSU2_TR(0x632fa3);
u8 U[5];
w4(U+0,u32(u32(u32(0x5eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fa7:{NFSU2_TR(0x632fa7);
u8 U[5];
w4(U+0,u32(u32(u32(0x5full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fab:{NFSU2_TR(0x632fab);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B632fb0:{NFSU2_TR(0x632fb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fb4:{NFSU2_TR(0x632fb4);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fb8:{NFSU2_TR(0x632fb8);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fbc:{NFSU2_TR(0x632fbc);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x5aull));
s1(u32(r4(U+0)),r1(U+4));
}
B632fc1:{NFSU2_TR(0x632fc1);
u8 U[5];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fc5:{NFSU2_TR(0x632fc5);
u8 U[5];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fc9:{NFSU2_TR(0x632fc9);
u8 U[5];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B632fce:{NFSU2_TR(0x632fce);
u8 U[5];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fd2:{NFSU2_TR(0x632fd2);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fd6:{NFSU2_TR(0x632fd6);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fda:{NFSU2_TR(0x632fda);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x41ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632fdf:{NFSU2_TR(0x632fdf);
u8 U[5];
w4(U+0,u32(u32(u32(0x3dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fe3:{NFSU2_TR(0x632fe3);
u8 U[5];
w4(U+0,u32(u32(u32(0x3eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B632fe7:{NFSU2_TR(0x632fe7);
u8 U[5];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+16))));
w1(U+4,u8(0x23ull));
s1(u32(r4(U+0)),r1(U+4));
}
B632fec:{NFSU2_TR(0x632fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B632ff4:{NFSU2_TR(0x632ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B632ff8:{NFSU2_TR(0x632ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x633000u,633);
}
XIT:NFSU2_TR_EXIT(0x632,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
