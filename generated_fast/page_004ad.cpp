#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ad,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ad,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ad(u8* __restrict R,Cpu& c);
u32 page_4ad(Cpu& c){return body_4ad(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ad(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ad000:goto L4ad000;
case 0x4ad003:c.instructions+=5;goto B4ad003;
case 0x4ad005:c.instructions+=4;goto B4ad005;
case 0x4ad007:c.instructions+=3;goto B4ad007;
case 0x4ad009:c.instructions+=2;goto B4ad009;
case 0x4ad00a:c.instructions+=1;goto B4ad00a;
case 0x4ad00f:goto L4ad00f;
case 0x4ad012:c.instructions+=1;goto B4ad012;
case 0x4ad020:goto L4ad020;
case 0x4ad021:c.instructions+=5;goto B4ad021;
case 0x4ad023:c.instructions+=4;goto B4ad023;
case 0x4ad025:c.instructions+=3;goto B4ad025;
case 0x4ad027:c.instructions+=2;goto B4ad027;
case 0x4ad02c:c.instructions+=1;goto B4ad02c;
case 0x4ad031:goto L4ad031;
case 0x4ad033:c.instructions+=2;goto B4ad033;
case 0x4ad035:c.instructions+=1;goto B4ad035;
case 0x4ad038:goto L4ad038;
case 0x4ad039:c.instructions+=1;goto B4ad039;
case 0x4ad040:goto L4ad040;
case 0x4ad043:c.instructions+=5;goto B4ad043;
case 0x4ad045:c.instructions+=4;goto B4ad045;
case 0x4ad047:c.instructions+=3;goto B4ad047;
case 0x4ad049:c.instructions+=2;goto B4ad049;
case 0x4ad04a:c.instructions+=1;goto B4ad04a;
case 0x4ad04f:goto L4ad04f;
case 0x4ad052:c.instructions+=1;goto B4ad052;
case 0x4ad060:goto L4ad060;
case 0x4ad063:c.instructions+=3;goto B4ad063;
case 0x4ad068:c.instructions+=2;goto B4ad068;
case 0x4ad069:c.instructions+=1;goto B4ad069;
case 0x4ad06e:goto L4ad06e;
case 0x4ad071:c.instructions+=1;goto B4ad071;
case 0x4ad080:goto L4ad080;
case 0x4ad081:c.instructions+=5;goto B4ad081;
case 0x4ad083:c.instructions+=4;goto B4ad083;
case 0x4ad085:c.instructions+=3;goto B4ad085;
case 0x4ad087:c.instructions+=2;goto B4ad087;
case 0x4ad08c:c.instructions+=1;goto B4ad08c;
case 0x4ad091:goto L4ad091;
case 0x4ad093:c.instructions+=2;goto B4ad093;
case 0x4ad095:c.instructions+=1;goto B4ad095;
case 0x4ad098:goto L4ad098;
case 0x4ad099:c.instructions+=1;goto B4ad099;
case 0x4ad0a0:goto L4ad0a0;
case 0x4ad0a3:c.instructions+=5;goto B4ad0a3;
case 0x4ad0a5:c.instructions+=4;goto B4ad0a5;
case 0x4ad0a7:c.instructions+=3;goto B4ad0a7;
case 0x4ad0a9:c.instructions+=2;goto B4ad0a9;
case 0x4ad0aa:c.instructions+=1;goto B4ad0aa;
case 0x4ad0af:goto L4ad0af;
case 0x4ad0b2:c.instructions+=1;goto B4ad0b2;
case 0x4ad0c0:goto L4ad0c0;
case 0x4ad0c1:c.instructions+=5;goto B4ad0c1;
case 0x4ad0c3:c.instructions+=4;goto B4ad0c3;
case 0x4ad0c5:c.instructions+=3;goto B4ad0c5;
case 0x4ad0c7:c.instructions+=2;goto B4ad0c7;
case 0x4ad0cc:c.instructions+=1;goto B4ad0cc;
case 0x4ad0d1:goto L4ad0d1;
case 0x4ad0d3:c.instructions+=2;goto B4ad0d3;
case 0x4ad0d5:c.instructions+=1;goto B4ad0d5;
case 0x4ad0d8:goto L4ad0d8;
case 0x4ad0d9:c.instructions+=1;goto B4ad0d9;
case 0x4ad0e0:goto L4ad0e0;
case 0x4ad0e3:c.instructions+=5;goto B4ad0e3;
case 0x4ad0e5:c.instructions+=4;goto B4ad0e5;
case 0x4ad0e7:c.instructions+=3;goto B4ad0e7;
case 0x4ad0e9:c.instructions+=2;goto B4ad0e9;
case 0x4ad0ea:c.instructions+=1;goto B4ad0ea;
case 0x4ad0ef:goto L4ad0ef;
case 0x4ad0f2:c.instructions+=1;goto B4ad0f2;
case 0x4ad100:goto L4ad100;
case 0x4ad103:c.instructions+=3;goto B4ad103;
case 0x4ad108:c.instructions+=2;goto B4ad108;
case 0x4ad109:c.instructions+=1;goto B4ad109;
case 0x4ad10e:goto L4ad10e;
case 0x4ad111:c.instructions+=1;goto B4ad111;
case 0x4ad120:goto L4ad120;
case 0x4ad121:c.instructions+=5;goto B4ad121;
case 0x4ad123:c.instructions+=4;goto B4ad123;
case 0x4ad125:c.instructions+=3;goto B4ad125;
case 0x4ad127:c.instructions+=2;goto B4ad127;
case 0x4ad12c:c.instructions+=1;goto B4ad12c;
case 0x4ad131:goto L4ad131;
case 0x4ad133:c.instructions+=2;goto B4ad133;
case 0x4ad135:c.instructions+=1;goto B4ad135;
case 0x4ad138:goto L4ad138;
case 0x4ad139:c.instructions+=1;goto B4ad139;
case 0x4ad140:goto L4ad140;
case 0x4ad143:c.instructions+=5;goto B4ad143;
case 0x4ad145:c.instructions+=4;goto B4ad145;
case 0x4ad147:c.instructions+=3;goto B4ad147;
case 0x4ad149:c.instructions+=2;goto B4ad149;
case 0x4ad14a:c.instructions+=1;goto B4ad14a;
case 0x4ad14f:goto L4ad14f;
case 0x4ad152:c.instructions+=1;goto B4ad152;
case 0x4ad160:goto L4ad160;
case 0x4ad161:c.instructions+=5;goto B4ad161;
case 0x4ad163:c.instructions+=4;goto B4ad163;
case 0x4ad165:c.instructions+=3;goto B4ad165;
case 0x4ad167:c.instructions+=2;goto B4ad167;
case 0x4ad16c:c.instructions+=1;goto B4ad16c;
case 0x4ad171:goto L4ad171;
case 0x4ad173:c.instructions+=2;goto B4ad173;
case 0x4ad175:c.instructions+=1;goto B4ad175;
case 0x4ad178:goto L4ad178;
case 0x4ad179:c.instructions+=1;goto B4ad179;
case 0x4ad180:goto L4ad180;
case 0x4ad183:c.instructions+=5;goto B4ad183;
case 0x4ad185:c.instructions+=4;goto B4ad185;
case 0x4ad187:c.instructions+=3;goto B4ad187;
case 0x4ad189:c.instructions+=2;goto B4ad189;
case 0x4ad18a:c.instructions+=1;goto B4ad18a;
case 0x4ad18f:goto L4ad18f;
case 0x4ad192:c.instructions+=1;goto B4ad192;
case 0x4ad1a0:goto L4ad1a0;
case 0x4ad1a3:c.instructions+=3;goto B4ad1a3;
case 0x4ad1a8:c.instructions+=2;goto B4ad1a8;
case 0x4ad1a9:c.instructions+=1;goto B4ad1a9;
case 0x4ad1ae:goto L4ad1ae;
case 0x4ad1b1:c.instructions+=1;goto B4ad1b1;
case 0x4ad1c0:goto L4ad1c0;
case 0x4ad1c1:c.instructions+=5;goto B4ad1c1;
case 0x4ad1c3:c.instructions+=4;goto B4ad1c3;
case 0x4ad1c5:c.instructions+=3;goto B4ad1c5;
case 0x4ad1c7:c.instructions+=2;goto B4ad1c7;
case 0x4ad1cc:c.instructions+=1;goto B4ad1cc;
case 0x4ad1d1:goto L4ad1d1;
case 0x4ad1d3:c.instructions+=2;goto B4ad1d3;
case 0x4ad1d5:c.instructions+=1;goto B4ad1d5;
case 0x4ad1d8:goto L4ad1d8;
case 0x4ad1d9:c.instructions+=1;goto B4ad1d9;
case 0x4ad1e0:goto L4ad1e0;
case 0x4ad1e3:c.instructions+=5;goto B4ad1e3;
case 0x4ad1e5:c.instructions+=4;goto B4ad1e5;
case 0x4ad1e7:c.instructions+=3;goto B4ad1e7;
case 0x4ad1e9:c.instructions+=2;goto B4ad1e9;
case 0x4ad1ea:c.instructions+=1;goto B4ad1ea;
case 0x4ad1ef:goto L4ad1ef;
case 0x4ad1f2:c.instructions+=1;goto B4ad1f2;
case 0x4ad200:goto L4ad200;
case 0x4ad201:c.instructions+=5;goto B4ad201;
case 0x4ad203:c.instructions+=4;goto B4ad203;
case 0x4ad205:c.instructions+=3;goto B4ad205;
case 0x4ad207:c.instructions+=2;goto B4ad207;
case 0x4ad20c:c.instructions+=1;goto B4ad20c;
case 0x4ad211:goto L4ad211;
case 0x4ad213:c.instructions+=2;goto B4ad213;
case 0x4ad215:c.instructions+=1;goto B4ad215;
case 0x4ad218:goto L4ad218;
case 0x4ad219:c.instructions+=1;goto B4ad219;
case 0x4ad220:goto L4ad220;
case 0x4ad223:c.instructions+=5;goto B4ad223;
case 0x4ad225:c.instructions+=4;goto B4ad225;
case 0x4ad227:c.instructions+=3;goto B4ad227;
case 0x4ad229:c.instructions+=2;goto B4ad229;
case 0x4ad22a:c.instructions+=1;goto B4ad22a;
case 0x4ad22f:goto L4ad22f;
case 0x4ad232:c.instructions+=1;goto B4ad232;
case 0x4ad240:goto L4ad240;
case 0x4ad243:c.instructions+=3;goto B4ad243;
case 0x4ad248:c.instructions+=2;goto B4ad248;
case 0x4ad249:c.instructions+=1;goto B4ad249;
case 0x4ad24e:goto L4ad24e;
case 0x4ad251:c.instructions+=1;goto B4ad251;
case 0x4ad260:goto L4ad260;
case 0x4ad261:c.instructions+=5;goto B4ad261;
case 0x4ad263:c.instructions+=4;goto B4ad263;
case 0x4ad265:c.instructions+=3;goto B4ad265;
case 0x4ad267:c.instructions+=2;goto B4ad267;
case 0x4ad26c:c.instructions+=1;goto B4ad26c;
case 0x4ad271:goto L4ad271;
case 0x4ad273:c.instructions+=2;goto B4ad273;
case 0x4ad275:c.instructions+=1;goto B4ad275;
case 0x4ad278:goto L4ad278;
case 0x4ad279:c.instructions+=1;goto B4ad279;
case 0x4ad280:goto L4ad280;
case 0x4ad283:c.instructions+=5;goto B4ad283;
case 0x4ad285:c.instructions+=4;goto B4ad285;
case 0x4ad287:c.instructions+=3;goto B4ad287;
case 0x4ad289:c.instructions+=2;goto B4ad289;
case 0x4ad28a:c.instructions+=1;goto B4ad28a;
case 0x4ad28f:goto L4ad28f;
case 0x4ad292:c.instructions+=1;goto B4ad292;
case 0x4ad2a0:goto L4ad2a0;
case 0x4ad2a1:c.instructions+=5;goto B4ad2a1;
case 0x4ad2a3:c.instructions+=4;goto B4ad2a3;
case 0x4ad2a5:c.instructions+=3;goto B4ad2a5;
case 0x4ad2a7:c.instructions+=2;goto B4ad2a7;
case 0x4ad2ac:c.instructions+=1;goto B4ad2ac;
case 0x4ad2b1:goto L4ad2b1;
case 0x4ad2b3:c.instructions+=2;goto B4ad2b3;
case 0x4ad2b5:c.instructions+=1;goto B4ad2b5;
case 0x4ad2b8:goto L4ad2b8;
case 0x4ad2b9:c.instructions+=1;goto B4ad2b9;
case 0x4ad2c0:goto L4ad2c0;
case 0x4ad2c3:c.instructions+=5;goto B4ad2c3;
case 0x4ad2c5:c.instructions+=4;goto B4ad2c5;
case 0x4ad2c7:c.instructions+=3;goto B4ad2c7;
case 0x4ad2c9:c.instructions+=2;goto B4ad2c9;
case 0x4ad2ca:c.instructions+=1;goto B4ad2ca;
case 0x4ad2cf:goto L4ad2cf;
case 0x4ad2d2:c.instructions+=1;goto B4ad2d2;
case 0x4ad2e0:goto L4ad2e0;
case 0x4ad2e3:c.instructions+=3;goto B4ad2e3;
case 0x4ad2e8:c.instructions+=2;goto B4ad2e8;
case 0x4ad2e9:c.instructions+=1;goto B4ad2e9;
case 0x4ad2ee:goto L4ad2ee;
case 0x4ad2f1:c.instructions+=1;goto B4ad2f1;
case 0x4ad300:goto L4ad300;
case 0x4ad301:c.instructions+=5;goto B4ad301;
case 0x4ad303:c.instructions+=4;goto B4ad303;
case 0x4ad305:c.instructions+=3;goto B4ad305;
case 0x4ad307:c.instructions+=2;goto B4ad307;
case 0x4ad30c:c.instructions+=1;goto B4ad30c;
case 0x4ad311:goto L4ad311;
case 0x4ad313:c.instructions+=2;goto B4ad313;
case 0x4ad315:c.instructions+=1;goto B4ad315;
case 0x4ad318:goto L4ad318;
case 0x4ad319:c.instructions+=1;goto B4ad319;
case 0x4ad320:goto L4ad320;
case 0x4ad323:c.instructions+=5;goto B4ad323;
case 0x4ad325:c.instructions+=4;goto B4ad325;
case 0x4ad327:c.instructions+=3;goto B4ad327;
case 0x4ad329:c.instructions+=2;goto B4ad329;
case 0x4ad32a:c.instructions+=1;goto B4ad32a;
case 0x4ad32f:goto L4ad32f;
case 0x4ad332:c.instructions+=1;goto B4ad332;
case 0x4ad340:goto L4ad340;
case 0x4ad341:c.instructions+=5;goto B4ad341;
case 0x4ad343:c.instructions+=4;goto B4ad343;
case 0x4ad345:c.instructions+=3;goto B4ad345;
case 0x4ad347:c.instructions+=2;goto B4ad347;
case 0x4ad34c:c.instructions+=1;goto B4ad34c;
case 0x4ad351:goto L4ad351;
case 0x4ad353:c.instructions+=2;goto B4ad353;
case 0x4ad355:c.instructions+=1;goto B4ad355;
case 0x4ad358:goto L4ad358;
case 0x4ad359:c.instructions+=1;goto B4ad359;
case 0x4ad360:goto L4ad360;
case 0x4ad363:c.instructions+=5;goto B4ad363;
case 0x4ad365:c.instructions+=4;goto B4ad365;
case 0x4ad367:c.instructions+=3;goto B4ad367;
case 0x4ad369:c.instructions+=2;goto B4ad369;
case 0x4ad36a:c.instructions+=1;goto B4ad36a;
case 0x4ad36f:goto L4ad36f;
case 0x4ad372:c.instructions+=1;goto B4ad372;
case 0x4ad380:goto L4ad380;
case 0x4ad383:c.instructions+=3;goto B4ad383;
case 0x4ad388:c.instructions+=2;goto B4ad388;
case 0x4ad389:c.instructions+=1;goto B4ad389;
case 0x4ad38e:goto L4ad38e;
case 0x4ad391:c.instructions+=1;goto B4ad391;
case 0x4ad3a0:goto L4ad3a0;
case 0x4ad3a1:c.instructions+=5;goto B4ad3a1;
case 0x4ad3a3:c.instructions+=4;goto B4ad3a3;
case 0x4ad3a5:c.instructions+=3;goto B4ad3a5;
case 0x4ad3a7:c.instructions+=2;goto B4ad3a7;
case 0x4ad3ac:c.instructions+=1;goto B4ad3ac;
case 0x4ad3b1:goto L4ad3b1;
case 0x4ad3b3:c.instructions+=2;goto B4ad3b3;
case 0x4ad3b5:c.instructions+=1;goto B4ad3b5;
case 0x4ad3b8:goto L4ad3b8;
case 0x4ad3b9:c.instructions+=1;goto B4ad3b9;
case 0x4ad3c0:goto L4ad3c0;
case 0x4ad3c3:c.instructions+=5;goto B4ad3c3;
case 0x4ad3c5:c.instructions+=4;goto B4ad3c5;
case 0x4ad3c7:c.instructions+=3;goto B4ad3c7;
case 0x4ad3c9:c.instructions+=2;goto B4ad3c9;
case 0x4ad3ca:c.instructions+=1;goto B4ad3ca;
case 0x4ad3cf:goto L4ad3cf;
case 0x4ad3d2:c.instructions+=1;goto B4ad3d2;
case 0x4ad3e0:goto L4ad3e0;
case 0x4ad3e1:c.instructions+=5;goto B4ad3e1;
case 0x4ad3e3:c.instructions+=4;goto B4ad3e3;
case 0x4ad3e5:c.instructions+=3;goto B4ad3e5;
case 0x4ad3e7:c.instructions+=2;goto B4ad3e7;
case 0x4ad3ec:c.instructions+=1;goto B4ad3ec;
case 0x4ad3f1:goto L4ad3f1;
case 0x4ad3f3:c.instructions+=2;goto B4ad3f3;
case 0x4ad3f5:c.instructions+=1;goto B4ad3f5;
case 0x4ad3f8:goto L4ad3f8;
case 0x4ad3f9:c.instructions+=1;goto B4ad3f9;
case 0x4ad400:goto L4ad400;
case 0x4ad403:c.instructions+=5;goto B4ad403;
case 0x4ad405:c.instructions+=4;goto B4ad405;
case 0x4ad407:c.instructions+=3;goto B4ad407;
case 0x4ad409:c.instructions+=2;goto B4ad409;
case 0x4ad40a:c.instructions+=1;goto B4ad40a;
case 0x4ad40f:goto L4ad40f;
case 0x4ad412:c.instructions+=1;goto B4ad412;
case 0x4ad420:goto L4ad420;
case 0x4ad423:c.instructions+=3;goto B4ad423;
case 0x4ad428:c.instructions+=2;goto B4ad428;
case 0x4ad429:c.instructions+=1;goto B4ad429;
case 0x4ad42e:goto L4ad42e;
case 0x4ad431:c.instructions+=1;goto B4ad431;
case 0x4ad440:goto L4ad440;
case 0x4ad441:c.instructions+=5;goto B4ad441;
case 0x4ad443:c.instructions+=4;goto B4ad443;
case 0x4ad445:c.instructions+=3;goto B4ad445;
case 0x4ad447:c.instructions+=2;goto B4ad447;
case 0x4ad44c:c.instructions+=1;goto B4ad44c;
case 0x4ad451:goto L4ad451;
case 0x4ad453:c.instructions+=2;goto B4ad453;
case 0x4ad455:c.instructions+=1;goto B4ad455;
case 0x4ad458:goto L4ad458;
case 0x4ad459:c.instructions+=1;goto B4ad459;
case 0x4ad460:goto L4ad460;
case 0x4ad463:c.instructions+=5;goto B4ad463;
case 0x4ad465:c.instructions+=4;goto B4ad465;
case 0x4ad467:c.instructions+=3;goto B4ad467;
case 0x4ad469:c.instructions+=2;goto B4ad469;
case 0x4ad46a:c.instructions+=1;goto B4ad46a;
case 0x4ad46f:goto L4ad46f;
case 0x4ad472:c.instructions+=1;goto B4ad472;
case 0x4ad480:goto L4ad480;
case 0x4ad481:c.instructions+=5;goto B4ad481;
case 0x4ad483:c.instructions+=4;goto B4ad483;
case 0x4ad485:c.instructions+=3;goto B4ad485;
case 0x4ad487:c.instructions+=2;goto B4ad487;
case 0x4ad48c:c.instructions+=1;goto B4ad48c;
case 0x4ad491:goto L4ad491;
case 0x4ad493:c.instructions+=2;goto B4ad493;
case 0x4ad495:c.instructions+=1;goto B4ad495;
case 0x4ad498:goto L4ad498;
case 0x4ad499:c.instructions+=1;goto B4ad499;
case 0x4ad4a0:goto L4ad4a0;
case 0x4ad4a3:c.instructions+=5;goto B4ad4a3;
case 0x4ad4a5:c.instructions+=4;goto B4ad4a5;
case 0x4ad4a7:c.instructions+=3;goto B4ad4a7;
case 0x4ad4a9:c.instructions+=2;goto B4ad4a9;
case 0x4ad4aa:c.instructions+=1;goto B4ad4aa;
case 0x4ad4af:goto L4ad4af;
case 0x4ad4b2:c.instructions+=1;goto B4ad4b2;
case 0x4ad4c0:goto L4ad4c0;
case 0x4ad4c3:c.instructions+=3;goto B4ad4c3;
case 0x4ad4c8:c.instructions+=2;goto B4ad4c8;
case 0x4ad4c9:c.instructions+=1;goto B4ad4c9;
case 0x4ad4ce:goto L4ad4ce;
case 0x4ad4d1:c.instructions+=1;goto B4ad4d1;
case 0x4ad4e0:goto L4ad4e0;
case 0x4ad4e1:c.instructions+=5;goto B4ad4e1;
case 0x4ad4e3:c.instructions+=4;goto B4ad4e3;
case 0x4ad4e5:c.instructions+=3;goto B4ad4e5;
case 0x4ad4e7:c.instructions+=2;goto B4ad4e7;
case 0x4ad4ec:c.instructions+=1;goto B4ad4ec;
case 0x4ad4f1:goto L4ad4f1;
case 0x4ad4f3:c.instructions+=2;goto B4ad4f3;
case 0x4ad4f5:c.instructions+=1;goto B4ad4f5;
case 0x4ad4f8:goto L4ad4f8;
case 0x4ad4f9:c.instructions+=1;goto B4ad4f9;
case 0x4ad500:goto L4ad500;
case 0x4ad503:c.instructions+=5;goto B4ad503;
case 0x4ad505:c.instructions+=4;goto B4ad505;
case 0x4ad507:c.instructions+=3;goto B4ad507;
case 0x4ad509:c.instructions+=2;goto B4ad509;
case 0x4ad50a:c.instructions+=1;goto B4ad50a;
case 0x4ad50f:goto L4ad50f;
case 0x4ad512:c.instructions+=1;goto B4ad512;
case 0x4ad520:goto L4ad520;
case 0x4ad521:c.instructions+=5;goto B4ad521;
case 0x4ad523:c.instructions+=4;goto B4ad523;
case 0x4ad525:c.instructions+=3;goto B4ad525;
case 0x4ad527:c.instructions+=2;goto B4ad527;
case 0x4ad52c:c.instructions+=1;goto B4ad52c;
case 0x4ad531:goto L4ad531;
case 0x4ad533:c.instructions+=2;goto B4ad533;
case 0x4ad535:c.instructions+=1;goto B4ad535;
case 0x4ad538:goto L4ad538;
case 0x4ad539:c.instructions+=1;goto B4ad539;
case 0x4ad540:goto L4ad540;
case 0x4ad543:c.instructions+=5;goto B4ad543;
case 0x4ad545:c.instructions+=4;goto B4ad545;
case 0x4ad547:c.instructions+=3;goto B4ad547;
case 0x4ad549:c.instructions+=2;goto B4ad549;
case 0x4ad54a:c.instructions+=1;goto B4ad54a;
case 0x4ad54f:goto L4ad54f;
case 0x4ad552:c.instructions+=1;goto B4ad552;
case 0x4ad560:goto L4ad560;
case 0x4ad563:c.instructions+=3;goto B4ad563;
case 0x4ad568:c.instructions+=2;goto B4ad568;
case 0x4ad569:c.instructions+=1;goto B4ad569;
case 0x4ad56e:goto L4ad56e;
case 0x4ad571:c.instructions+=1;goto B4ad571;
case 0x4ad580:goto L4ad580;
case 0x4ad581:c.instructions+=5;goto B4ad581;
case 0x4ad583:c.instructions+=4;goto B4ad583;
case 0x4ad585:c.instructions+=3;goto B4ad585;
case 0x4ad587:c.instructions+=2;goto B4ad587;
case 0x4ad58c:c.instructions+=1;goto B4ad58c;
case 0x4ad591:goto L4ad591;
case 0x4ad593:c.instructions+=2;goto B4ad593;
case 0x4ad595:c.instructions+=1;goto B4ad595;
case 0x4ad598:goto L4ad598;
case 0x4ad599:c.instructions+=1;goto B4ad599;
case 0x4ad5a0:goto L4ad5a0;
case 0x4ad5a3:c.instructions+=5;goto B4ad5a3;
case 0x4ad5a5:c.instructions+=4;goto B4ad5a5;
case 0x4ad5a7:c.instructions+=3;goto B4ad5a7;
case 0x4ad5a9:c.instructions+=2;goto B4ad5a9;
case 0x4ad5aa:c.instructions+=1;goto B4ad5aa;
case 0x4ad5af:goto L4ad5af;
case 0x4ad5b2:c.instructions+=1;goto B4ad5b2;
case 0x4ad5c0:goto L4ad5c0;
case 0x4ad5c1:c.instructions+=5;goto B4ad5c1;
case 0x4ad5c3:c.instructions+=4;goto B4ad5c3;
case 0x4ad5c5:c.instructions+=3;goto B4ad5c5;
case 0x4ad5c7:c.instructions+=2;goto B4ad5c7;
case 0x4ad5cc:c.instructions+=1;goto B4ad5cc;
case 0x4ad5d1:goto L4ad5d1;
case 0x4ad5d3:c.instructions+=2;goto B4ad5d3;
case 0x4ad5d5:c.instructions+=1;goto B4ad5d5;
case 0x4ad5d8:goto L4ad5d8;
case 0x4ad5d9:c.instructions+=1;goto B4ad5d9;
case 0x4ad5e0:goto L4ad5e0;
case 0x4ad5e3:c.instructions+=5;goto B4ad5e3;
case 0x4ad5e5:c.instructions+=4;goto B4ad5e5;
case 0x4ad5e7:c.instructions+=3;goto B4ad5e7;
case 0x4ad5e9:c.instructions+=2;goto B4ad5e9;
case 0x4ad5ea:c.instructions+=1;goto B4ad5ea;
case 0x4ad5ef:goto L4ad5ef;
case 0x4ad5f2:c.instructions+=1;goto B4ad5f2;
case 0x4ad600:goto L4ad600;
case 0x4ad603:c.instructions+=3;goto B4ad603;
case 0x4ad608:c.instructions+=2;goto B4ad608;
case 0x4ad609:c.instructions+=1;goto B4ad609;
case 0x4ad60e:goto L4ad60e;
case 0x4ad611:c.instructions+=1;goto B4ad611;
case 0x4ad620:goto L4ad620;
case 0x4ad621:c.instructions+=5;goto B4ad621;
case 0x4ad623:c.instructions+=4;goto B4ad623;
case 0x4ad625:c.instructions+=3;goto B4ad625;
case 0x4ad627:c.instructions+=2;goto B4ad627;
case 0x4ad62c:c.instructions+=1;goto B4ad62c;
case 0x4ad631:goto L4ad631;
case 0x4ad633:c.instructions+=2;goto B4ad633;
case 0x4ad635:c.instructions+=1;goto B4ad635;
case 0x4ad638:goto L4ad638;
case 0x4ad639:c.instructions+=1;goto B4ad639;
case 0x4ad640:goto L4ad640;
case 0x4ad643:c.instructions+=5;goto B4ad643;
case 0x4ad645:c.instructions+=4;goto B4ad645;
case 0x4ad647:c.instructions+=3;goto B4ad647;
case 0x4ad649:c.instructions+=2;goto B4ad649;
case 0x4ad64a:c.instructions+=1;goto B4ad64a;
case 0x4ad64f:goto L4ad64f;
case 0x4ad652:c.instructions+=1;goto B4ad652;
case 0x4ad660:goto L4ad660;
case 0x4ad661:c.instructions+=5;goto B4ad661;
case 0x4ad663:c.instructions+=4;goto B4ad663;
case 0x4ad665:c.instructions+=3;goto B4ad665;
case 0x4ad667:c.instructions+=2;goto B4ad667;
case 0x4ad66c:c.instructions+=1;goto B4ad66c;
case 0x4ad671:goto L4ad671;
case 0x4ad673:c.instructions+=2;goto B4ad673;
case 0x4ad675:c.instructions+=1;goto B4ad675;
case 0x4ad678:goto L4ad678;
case 0x4ad679:c.instructions+=1;goto B4ad679;
case 0x4ad680:goto L4ad680;
case 0x4ad683:c.instructions+=5;goto B4ad683;
case 0x4ad685:c.instructions+=4;goto B4ad685;
case 0x4ad687:c.instructions+=3;goto B4ad687;
case 0x4ad689:c.instructions+=2;goto B4ad689;
case 0x4ad68a:c.instructions+=1;goto B4ad68a;
case 0x4ad68f:goto L4ad68f;
case 0x4ad692:c.instructions+=1;goto B4ad692;
case 0x4ad6a0:goto L4ad6a0;
case 0x4ad6a3:c.instructions+=3;goto B4ad6a3;
case 0x4ad6a8:c.instructions+=2;goto B4ad6a8;
case 0x4ad6a9:c.instructions+=1;goto B4ad6a9;
case 0x4ad6ae:goto L4ad6ae;
case 0x4ad6b1:c.instructions+=1;goto B4ad6b1;
case 0x4ad6c0:goto L4ad6c0;
case 0x4ad6c1:c.instructions+=5;goto B4ad6c1;
case 0x4ad6c3:c.instructions+=4;goto B4ad6c3;
case 0x4ad6c5:c.instructions+=3;goto B4ad6c5;
case 0x4ad6c7:c.instructions+=2;goto B4ad6c7;
case 0x4ad6cc:c.instructions+=1;goto B4ad6cc;
case 0x4ad6d1:goto L4ad6d1;
case 0x4ad6d3:c.instructions+=2;goto B4ad6d3;
case 0x4ad6d5:c.instructions+=1;goto B4ad6d5;
case 0x4ad6d8:goto L4ad6d8;
case 0x4ad6d9:c.instructions+=1;goto B4ad6d9;
case 0x4ad6e0:goto L4ad6e0;
case 0x4ad6e3:c.instructions+=5;goto B4ad6e3;
case 0x4ad6e5:c.instructions+=4;goto B4ad6e5;
case 0x4ad6e7:c.instructions+=3;goto B4ad6e7;
case 0x4ad6e9:c.instructions+=2;goto B4ad6e9;
case 0x4ad6ea:c.instructions+=1;goto B4ad6ea;
case 0x4ad6ef:goto L4ad6ef;
case 0x4ad6f2:c.instructions+=1;goto B4ad6f2;
case 0x4ad700:goto L4ad700;
case 0x4ad701:c.instructions+=5;goto B4ad701;
case 0x4ad703:c.instructions+=4;goto B4ad703;
case 0x4ad705:c.instructions+=3;goto B4ad705;
case 0x4ad707:c.instructions+=2;goto B4ad707;
case 0x4ad70c:c.instructions+=1;goto B4ad70c;
case 0x4ad711:goto L4ad711;
case 0x4ad713:c.instructions+=2;goto B4ad713;
case 0x4ad715:c.instructions+=1;goto B4ad715;
case 0x4ad718:goto L4ad718;
case 0x4ad719:c.instructions+=1;goto B4ad719;
case 0x4ad720:goto L4ad720;
case 0x4ad723:c.instructions+=5;goto B4ad723;
case 0x4ad725:c.instructions+=4;goto B4ad725;
case 0x4ad727:c.instructions+=3;goto B4ad727;
case 0x4ad729:c.instructions+=2;goto B4ad729;
case 0x4ad72a:c.instructions+=1;goto B4ad72a;
case 0x4ad72f:goto L4ad72f;
case 0x4ad732:c.instructions+=1;goto B4ad732;
case 0x4ad740:goto L4ad740;
case 0x4ad743:c.instructions+=3;goto B4ad743;
case 0x4ad748:c.instructions+=2;goto B4ad748;
case 0x4ad749:c.instructions+=1;goto B4ad749;
case 0x4ad74e:goto L4ad74e;
case 0x4ad751:c.instructions+=1;goto B4ad751;
case 0x4ad760:goto L4ad760;
case 0x4ad761:c.instructions+=5;goto B4ad761;
case 0x4ad763:c.instructions+=4;goto B4ad763;
case 0x4ad765:c.instructions+=3;goto B4ad765;
case 0x4ad767:c.instructions+=2;goto B4ad767;
case 0x4ad76c:c.instructions+=1;goto B4ad76c;
case 0x4ad771:goto L4ad771;
case 0x4ad773:c.instructions+=2;goto B4ad773;
case 0x4ad775:c.instructions+=1;goto B4ad775;
case 0x4ad778:goto L4ad778;
case 0x4ad779:c.instructions+=1;goto B4ad779;
case 0x4ad780:goto L4ad780;
case 0x4ad783:c.instructions+=5;goto B4ad783;
case 0x4ad785:c.instructions+=4;goto B4ad785;
case 0x4ad787:c.instructions+=3;goto B4ad787;
case 0x4ad789:c.instructions+=2;goto B4ad789;
case 0x4ad78a:c.instructions+=1;goto B4ad78a;
case 0x4ad78f:goto L4ad78f;
case 0x4ad792:c.instructions+=1;goto B4ad792;
case 0x4ad7a0:goto L4ad7a0;
case 0x4ad7a1:c.instructions+=5;goto B4ad7a1;
case 0x4ad7a3:c.instructions+=4;goto B4ad7a3;
case 0x4ad7a5:c.instructions+=3;goto B4ad7a5;
case 0x4ad7a7:c.instructions+=2;goto B4ad7a7;
case 0x4ad7ac:c.instructions+=1;goto B4ad7ac;
case 0x4ad7b1:goto L4ad7b1;
case 0x4ad7b3:c.instructions+=2;goto B4ad7b3;
case 0x4ad7b5:c.instructions+=1;goto B4ad7b5;
case 0x4ad7b8:goto L4ad7b8;
case 0x4ad7b9:c.instructions+=1;goto B4ad7b9;
case 0x4ad7c0:goto L4ad7c0;
case 0x4ad7c3:c.instructions+=5;goto B4ad7c3;
case 0x4ad7c5:c.instructions+=4;goto B4ad7c5;
case 0x4ad7c7:c.instructions+=3;goto B4ad7c7;
case 0x4ad7c9:c.instructions+=2;goto B4ad7c9;
case 0x4ad7ca:c.instructions+=1;goto B4ad7ca;
case 0x4ad7cf:goto L4ad7cf;
case 0x4ad7d2:c.instructions+=1;goto B4ad7d2;
case 0x4ad7e0:goto L4ad7e0;
case 0x4ad7e3:c.instructions+=3;goto B4ad7e3;
case 0x4ad7e8:c.instructions+=2;goto B4ad7e8;
case 0x4ad7e9:c.instructions+=1;goto B4ad7e9;
case 0x4ad7ee:goto L4ad7ee;
case 0x4ad7f1:c.instructions+=1;goto B4ad7f1;
case 0x4ad800:goto L4ad800;
case 0x4ad801:c.instructions+=5;goto B4ad801;
case 0x4ad803:c.instructions+=4;goto B4ad803;
case 0x4ad805:c.instructions+=3;goto B4ad805;
case 0x4ad807:c.instructions+=2;goto B4ad807;
case 0x4ad80c:c.instructions+=1;goto B4ad80c;
case 0x4ad811:goto L4ad811;
case 0x4ad813:c.instructions+=2;goto B4ad813;
case 0x4ad815:c.instructions+=1;goto B4ad815;
case 0x4ad818:goto L4ad818;
case 0x4ad819:c.instructions+=1;goto B4ad819;
case 0x4ad820:goto L4ad820;
case 0x4ad823:c.instructions+=5;goto B4ad823;
case 0x4ad825:c.instructions+=4;goto B4ad825;
case 0x4ad827:c.instructions+=3;goto B4ad827;
case 0x4ad829:c.instructions+=2;goto B4ad829;
case 0x4ad82a:c.instructions+=1;goto B4ad82a;
case 0x4ad82f:goto L4ad82f;
case 0x4ad832:c.instructions+=1;goto B4ad832;
case 0x4ad840:goto L4ad840;
case 0x4ad841:c.instructions+=5;goto B4ad841;
case 0x4ad843:c.instructions+=4;goto B4ad843;
case 0x4ad845:c.instructions+=3;goto B4ad845;
case 0x4ad847:c.instructions+=2;goto B4ad847;
case 0x4ad84c:c.instructions+=1;goto B4ad84c;
case 0x4ad851:goto L4ad851;
case 0x4ad853:c.instructions+=2;goto B4ad853;
case 0x4ad855:c.instructions+=1;goto B4ad855;
case 0x4ad858:goto L4ad858;
case 0x4ad859:c.instructions+=1;goto B4ad859;
case 0x4ad860:goto L4ad860;
case 0x4ad863:c.instructions+=5;goto B4ad863;
case 0x4ad865:c.instructions+=4;goto B4ad865;
case 0x4ad867:c.instructions+=3;goto B4ad867;
case 0x4ad869:c.instructions+=2;goto B4ad869;
case 0x4ad86a:c.instructions+=1;goto B4ad86a;
case 0x4ad86f:goto L4ad86f;
case 0x4ad872:c.instructions+=1;goto B4ad872;
case 0x4ad880:goto L4ad880;
case 0x4ad883:c.instructions+=3;goto B4ad883;
case 0x4ad888:c.instructions+=2;goto B4ad888;
case 0x4ad889:c.instructions+=1;goto B4ad889;
case 0x4ad88e:goto L4ad88e;
case 0x4ad891:c.instructions+=1;goto B4ad891;
case 0x4ad8a0:goto L4ad8a0;
case 0x4ad8a1:c.instructions+=5;goto B4ad8a1;
case 0x4ad8a3:c.instructions+=4;goto B4ad8a3;
case 0x4ad8a5:c.instructions+=3;goto B4ad8a5;
case 0x4ad8a7:c.instructions+=2;goto B4ad8a7;
case 0x4ad8ac:c.instructions+=1;goto B4ad8ac;
case 0x4ad8b1:goto L4ad8b1;
case 0x4ad8b3:c.instructions+=2;goto B4ad8b3;
case 0x4ad8b5:c.instructions+=1;goto B4ad8b5;
case 0x4ad8b8:goto L4ad8b8;
case 0x4ad8b9:c.instructions+=1;goto B4ad8b9;
case 0x4ad8c0:goto L4ad8c0;
case 0x4ad8c3:c.instructions+=5;goto B4ad8c3;
case 0x4ad8c5:c.instructions+=4;goto B4ad8c5;
case 0x4ad8c7:c.instructions+=3;goto B4ad8c7;
case 0x4ad8c9:c.instructions+=2;goto B4ad8c9;
case 0x4ad8ca:c.instructions+=1;goto B4ad8ca;
case 0x4ad8cf:goto L4ad8cf;
case 0x4ad8d2:c.instructions+=1;goto B4ad8d2;
case 0x4ad8e0:goto L4ad8e0;
case 0x4ad8e1:c.instructions+=5;goto B4ad8e1;
case 0x4ad8e3:c.instructions+=4;goto B4ad8e3;
case 0x4ad8e5:c.instructions+=3;goto B4ad8e5;
case 0x4ad8e7:c.instructions+=2;goto B4ad8e7;
case 0x4ad8ec:c.instructions+=1;goto B4ad8ec;
case 0x4ad8f1:goto L4ad8f1;
case 0x4ad8f3:c.instructions+=2;goto B4ad8f3;
case 0x4ad8f5:c.instructions+=1;goto B4ad8f5;
case 0x4ad8f8:goto L4ad8f8;
case 0x4ad8f9:c.instructions+=1;goto B4ad8f9;
case 0x4ad900:goto L4ad900;
case 0x4ad903:c.instructions+=5;goto B4ad903;
case 0x4ad905:c.instructions+=4;goto B4ad905;
case 0x4ad907:c.instructions+=3;goto B4ad907;
case 0x4ad909:c.instructions+=2;goto B4ad909;
case 0x4ad90a:c.instructions+=1;goto B4ad90a;
case 0x4ad90f:goto L4ad90f;
case 0x4ad912:c.instructions+=1;goto B4ad912;
case 0x4ad920:goto L4ad920;
case 0x4ad923:c.instructions+=3;goto B4ad923;
case 0x4ad928:c.instructions+=2;goto B4ad928;
case 0x4ad929:c.instructions+=1;goto B4ad929;
case 0x4ad92e:goto L4ad92e;
case 0x4ad931:c.instructions+=1;goto B4ad931;
case 0x4ad940:goto L4ad940;
case 0x4ad941:c.instructions+=5;goto B4ad941;
case 0x4ad943:c.instructions+=4;goto B4ad943;
case 0x4ad945:c.instructions+=3;goto B4ad945;
case 0x4ad947:c.instructions+=2;goto B4ad947;
case 0x4ad94c:c.instructions+=1;goto B4ad94c;
case 0x4ad951:goto L4ad951;
case 0x4ad953:c.instructions+=2;goto B4ad953;
case 0x4ad955:c.instructions+=1;goto B4ad955;
case 0x4ad958:goto L4ad958;
case 0x4ad959:c.instructions+=1;goto B4ad959;
case 0x4ad960:goto L4ad960;
case 0x4ad963:c.instructions+=5;goto B4ad963;
case 0x4ad965:c.instructions+=4;goto B4ad965;
case 0x4ad967:c.instructions+=3;goto B4ad967;
case 0x4ad969:c.instructions+=2;goto B4ad969;
case 0x4ad96a:c.instructions+=1;goto B4ad96a;
case 0x4ad96f:goto L4ad96f;
case 0x4ad972:c.instructions+=1;goto B4ad972;
case 0x4ad980:goto L4ad980;
case 0x4ad981:c.instructions+=5;goto B4ad981;
case 0x4ad983:c.instructions+=4;goto B4ad983;
case 0x4ad985:c.instructions+=3;goto B4ad985;
case 0x4ad987:c.instructions+=2;goto B4ad987;
case 0x4ad98c:c.instructions+=1;goto B4ad98c;
case 0x4ad991:goto L4ad991;
case 0x4ad993:c.instructions+=2;goto B4ad993;
case 0x4ad995:c.instructions+=1;goto B4ad995;
case 0x4ad998:goto L4ad998;
case 0x4ad999:c.instructions+=1;goto B4ad999;
case 0x4ad9a0:goto L4ad9a0;
case 0x4ad9a3:c.instructions+=5;goto B4ad9a3;
case 0x4ad9a5:c.instructions+=4;goto B4ad9a5;
case 0x4ad9a7:c.instructions+=3;goto B4ad9a7;
case 0x4ad9a9:c.instructions+=2;goto B4ad9a9;
case 0x4ad9aa:c.instructions+=1;goto B4ad9aa;
case 0x4ad9af:goto L4ad9af;
case 0x4ad9b2:c.instructions+=1;goto B4ad9b2;
case 0x4ad9c0:goto L4ad9c0;
case 0x4ad9c3:c.instructions+=3;goto B4ad9c3;
case 0x4ad9c8:c.instructions+=2;goto B4ad9c8;
case 0x4ad9c9:c.instructions+=1;goto B4ad9c9;
case 0x4ad9ce:goto L4ad9ce;
case 0x4ad9d1:c.instructions+=1;goto B4ad9d1;
case 0x4ad9e0:goto L4ad9e0;
case 0x4ad9e1:c.instructions+=5;goto B4ad9e1;
case 0x4ad9e3:c.instructions+=4;goto B4ad9e3;
case 0x4ad9e5:c.instructions+=3;goto B4ad9e5;
case 0x4ad9e7:c.instructions+=2;goto B4ad9e7;
case 0x4ad9ec:c.instructions+=1;goto B4ad9ec;
case 0x4ad9f1:goto L4ad9f1;
case 0x4ad9f3:c.instructions+=2;goto B4ad9f3;
case 0x4ad9f5:c.instructions+=1;goto B4ad9f5;
case 0x4ad9f8:goto L4ad9f8;
case 0x4ad9f9:c.instructions+=1;goto B4ad9f9;
case 0x4ada00:goto L4ada00;
case 0x4ada03:c.instructions+=5;goto B4ada03;
case 0x4ada05:c.instructions+=4;goto B4ada05;
case 0x4ada07:c.instructions+=3;goto B4ada07;
case 0x4ada09:c.instructions+=2;goto B4ada09;
case 0x4ada0a:c.instructions+=1;goto B4ada0a;
case 0x4ada0f:goto L4ada0f;
case 0x4ada12:c.instructions+=1;goto B4ada12;
case 0x4ada20:goto L4ada20;
case 0x4ada21:c.instructions+=5;goto B4ada21;
case 0x4ada23:c.instructions+=4;goto B4ada23;
case 0x4ada25:c.instructions+=3;goto B4ada25;
case 0x4ada27:c.instructions+=2;goto B4ada27;
case 0x4ada2c:c.instructions+=1;goto B4ada2c;
case 0x4ada31:goto L4ada31;
case 0x4ada33:c.instructions+=2;goto B4ada33;
case 0x4ada35:c.instructions+=1;goto B4ada35;
case 0x4ada38:goto L4ada38;
case 0x4ada39:c.instructions+=1;goto B4ada39;
case 0x4ada40:goto L4ada40;
case 0x4ada43:c.instructions+=5;goto B4ada43;
case 0x4ada45:c.instructions+=4;goto B4ada45;
case 0x4ada47:c.instructions+=3;goto B4ada47;
case 0x4ada49:c.instructions+=2;goto B4ada49;
case 0x4ada4a:c.instructions+=1;goto B4ada4a;
case 0x4ada4f:goto L4ada4f;
case 0x4ada52:c.instructions+=1;goto B4ada52;
case 0x4ada60:goto L4ada60;
case 0x4ada63:c.instructions+=3;goto B4ada63;
case 0x4ada68:c.instructions+=2;goto B4ada68;
case 0x4ada69:c.instructions+=1;goto B4ada69;
case 0x4ada6e:goto L4ada6e;
case 0x4ada71:c.instructions+=1;goto B4ada71;
case 0x4ada80:goto L4ada80;
case 0x4ada81:c.instructions+=5;goto B4ada81;
case 0x4ada83:c.instructions+=4;goto B4ada83;
case 0x4ada85:c.instructions+=3;goto B4ada85;
case 0x4ada87:c.instructions+=2;goto B4ada87;
case 0x4ada8c:c.instructions+=1;goto B4ada8c;
case 0x4ada91:goto L4ada91;
case 0x4ada93:c.instructions+=2;goto B4ada93;
case 0x4ada95:c.instructions+=1;goto B4ada95;
case 0x4ada98:goto L4ada98;
case 0x4ada99:c.instructions+=1;goto B4ada99;
case 0x4adaa0:goto L4adaa0;
case 0x4adaa3:c.instructions+=5;goto B4adaa3;
case 0x4adaa5:c.instructions+=4;goto B4adaa5;
case 0x4adaa7:c.instructions+=3;goto B4adaa7;
case 0x4adaa9:c.instructions+=2;goto B4adaa9;
case 0x4adaaa:c.instructions+=1;goto B4adaaa;
case 0x4adaaf:goto L4adaaf;
case 0x4adab2:c.instructions+=1;goto B4adab2;
case 0x4adac0:goto L4adac0;
case 0x4adac1:c.instructions+=5;goto B4adac1;
case 0x4adac3:c.instructions+=4;goto B4adac3;
case 0x4adac5:c.instructions+=3;goto B4adac5;
case 0x4adac7:c.instructions+=2;goto B4adac7;
case 0x4adacc:c.instructions+=1;goto B4adacc;
case 0x4adad1:goto L4adad1;
case 0x4adad3:c.instructions+=2;goto B4adad3;
case 0x4adad5:c.instructions+=1;goto B4adad5;
case 0x4adad8:goto L4adad8;
case 0x4adad9:c.instructions+=1;goto B4adad9;
case 0x4adae0:goto L4adae0;
case 0x4adae3:c.instructions+=5;goto B4adae3;
case 0x4adae5:c.instructions+=4;goto B4adae5;
case 0x4adae7:c.instructions+=3;goto B4adae7;
case 0x4adae9:c.instructions+=2;goto B4adae9;
case 0x4adaea:c.instructions+=1;goto B4adaea;
case 0x4adaef:goto L4adaef;
case 0x4adaf2:c.instructions+=1;goto B4adaf2;
case 0x4adb00:goto L4adb00;
case 0x4adb01:c.instructions+=7;goto B4adb01;
case 0x4adb03:c.instructions+=6;goto B4adb03;
case 0x4adb06:c.instructions+=5;goto B4adb06;
case 0x4adb0c:c.instructions+=4;goto B4adb0c;
case 0x4adb0e:c.instructions+=3;goto B4adb0e;
case 0x4adb10:c.instructions+=2;goto B4adb10;
case 0x4adb16:c.instructions+=1;goto B4adb16;
case 0x4adb1b:goto L4adb1b;
case 0x4adb1d:c.instructions+=2;goto B4adb1d;
case 0x4adb1f:c.instructions+=1;goto B4adb1f;
case 0x4adb22:goto L4adb22;
case 0x4adb23:c.instructions+=1;goto B4adb23;
case 0x4adb30:goto L4adb30;
case 0x4adb33:c.instructions+=6;goto B4adb33;
case 0x4adb36:c.instructions+=5;goto B4adb36;
case 0x4adb37:c.instructions+=4;goto B4adb37;
case 0x4adb39:c.instructions+=3;goto B4adb39;
case 0x4adb3b:c.instructions+=2;goto B4adb3b;
case 0x4adb3c:c.instructions+=1;goto B4adb3c;
case 0x4adb41:goto L4adb41;
case 0x4adb44:c.instructions+=1;goto B4adb44;
case 0x4adb50:goto L4adb50;
case 0x4adb51:c.instructions+=7;goto B4adb51;
case 0x4adb53:c.instructions+=6;goto B4adb53;
case 0x4adb56:c.instructions+=5;goto B4adb56;
case 0x4adb5c:c.instructions+=4;goto B4adb5c;
case 0x4adb5e:c.instructions+=3;goto B4adb5e;
case 0x4adb60:c.instructions+=2;goto B4adb60;
case 0x4adb66:c.instructions+=1;goto B4adb66;
case 0x4adb6b:goto L4adb6b;
case 0x4adb6d:c.instructions+=2;goto B4adb6d;
case 0x4adb6f:c.instructions+=1;goto B4adb6f;
case 0x4adb72:goto L4adb72;
case 0x4adb73:c.instructions+=1;goto B4adb73;
case 0x4adb80:goto L4adb80;
case 0x4adb83:c.instructions+=6;goto B4adb83;
case 0x4adb86:c.instructions+=5;goto B4adb86;
case 0x4adb87:c.instructions+=4;goto B4adb87;
case 0x4adb89:c.instructions+=3;goto B4adb89;
case 0x4adb8b:c.instructions+=2;goto B4adb8b;
case 0x4adb8c:c.instructions+=1;goto B4adb8c;
case 0x4adb91:goto L4adb91;
case 0x4adb94:c.instructions+=1;goto B4adb94;
case 0x4adba0:goto L4adba0;
case 0x4adba1:c.instructions+=7;goto B4adba1;
case 0x4adba3:c.instructions+=6;goto B4adba3;
case 0x4adba6:c.instructions+=5;goto B4adba6;
case 0x4adbac:c.instructions+=4;goto B4adbac;
case 0x4adbae:c.instructions+=3;goto B4adbae;
case 0x4adbb0:c.instructions+=2;goto B4adbb0;
case 0x4adbb6:c.instructions+=1;goto B4adbb6;
case 0x4adbbb:goto L4adbbb;
case 0x4adbbd:c.instructions+=2;goto B4adbbd;
case 0x4adbbf:c.instructions+=1;goto B4adbbf;
case 0x4adbc2:goto L4adbc2;
case 0x4adbc3:c.instructions+=1;goto B4adbc3;
case 0x4adbd0:goto L4adbd0;
case 0x4adbd3:c.instructions+=6;goto B4adbd3;
case 0x4adbd6:c.instructions+=5;goto B4adbd6;
case 0x4adbd7:c.instructions+=4;goto B4adbd7;
case 0x4adbd9:c.instructions+=3;goto B4adbd9;
case 0x4adbdb:c.instructions+=2;goto B4adbdb;
case 0x4adbdc:c.instructions+=1;goto B4adbdc;
case 0x4adbe1:goto L4adbe1;
case 0x4adbe4:c.instructions+=1;goto B4adbe4;
case 0x4adbf0:goto L4adbf0;
case 0x4adbf1:c.instructions+=7;goto B4adbf1;
case 0x4adbf3:c.instructions+=6;goto B4adbf3;
case 0x4adbf6:c.instructions+=5;goto B4adbf6;
case 0x4adbfc:c.instructions+=4;goto B4adbfc;
case 0x4adbfe:c.instructions+=3;goto B4adbfe;
case 0x4adc00:c.instructions+=2;goto B4adc00;
case 0x4adc06:c.instructions+=1;goto B4adc06;
case 0x4adc0b:goto L4adc0b;
case 0x4adc0d:c.instructions+=2;goto B4adc0d;
case 0x4adc0f:c.instructions+=1;goto B4adc0f;
case 0x4adc12:goto L4adc12;
case 0x4adc13:c.instructions+=1;goto B4adc13;
case 0x4adc20:goto L4adc20;
case 0x4adc23:c.instructions+=6;goto B4adc23;
case 0x4adc26:c.instructions+=5;goto B4adc26;
case 0x4adc27:c.instructions+=4;goto B4adc27;
case 0x4adc29:c.instructions+=3;goto B4adc29;
case 0x4adc2b:c.instructions+=2;goto B4adc2b;
case 0x4adc2c:c.instructions+=1;goto B4adc2c;
case 0x4adc31:goto L4adc31;
case 0x4adc34:c.instructions+=1;goto B4adc34;
case 0x4adc40:goto L4adc40;
case 0x4adc43:c.instructions+=6;goto B4adc43;
case 0x4adc46:c.instructions+=5;goto B4adc46;
case 0x4adc47:c.instructions+=4;goto B4adc47;
case 0x4adc49:c.instructions+=3;goto B4adc49;
case 0x4adc4b:c.instructions+=2;goto B4adc4b;
case 0x4adc4c:c.instructions+=1;goto B4adc4c;
case 0x4adc51:goto L4adc51;
case 0x4adc54:c.instructions+=1;goto B4adc54;
case 0x4adc60:goto L4adc60;
case 0x4adc63:c.instructions+=6;goto B4adc63;
case 0x4adc66:c.instructions+=5;goto B4adc66;
case 0x4adc67:c.instructions+=4;goto B4adc67;
case 0x4adc69:c.instructions+=3;goto B4adc69;
case 0x4adc6b:c.instructions+=2;goto B4adc6b;
case 0x4adc6c:c.instructions+=1;goto B4adc6c;
case 0x4adc71:goto L4adc71;
case 0x4adc74:c.instructions+=1;goto B4adc74;
case 0x4adc80:goto L4adc80;
case 0x4adc83:c.instructions+=6;goto B4adc83;
case 0x4adc86:c.instructions+=5;goto B4adc86;
case 0x4adc87:c.instructions+=4;goto B4adc87;
case 0x4adc89:c.instructions+=3;goto B4adc89;
case 0x4adc8b:c.instructions+=2;goto B4adc8b;
case 0x4adc8c:c.instructions+=1;goto B4adc8c;
case 0x4adc91:goto L4adc91;
case 0x4adc94:c.instructions+=1;goto B4adc94;
case 0x4adca0:goto L4adca0;
case 0x4adca3:c.instructions+=6;goto B4adca3;
case 0x4adca6:c.instructions+=5;goto B4adca6;
case 0x4adca7:c.instructions+=4;goto B4adca7;
case 0x4adca9:c.instructions+=3;goto B4adca9;
case 0x4adcab:c.instructions+=2;goto B4adcab;
case 0x4adcac:c.instructions+=1;goto B4adcac;
case 0x4adcb1:goto L4adcb1;
case 0x4adcb4:c.instructions+=1;goto B4adcb4;
case 0x4adcc0:goto L4adcc0;
case 0x4adcc3:c.instructions+=6;goto B4adcc3;
case 0x4adcc6:c.instructions+=5;goto B4adcc6;
case 0x4adcc7:c.instructions+=4;goto B4adcc7;
case 0x4adcc9:c.instructions+=3;goto B4adcc9;
case 0x4adccb:c.instructions+=2;goto B4adccb;
case 0x4adccc:c.instructions+=1;goto B4adccc;
case 0x4adcd1:goto L4adcd1;
case 0x4adcd4:c.instructions+=1;goto B4adcd4;
case 0x4adce0:goto L4adce0;
case 0x4adce3:c.instructions+=6;goto B4adce3;
case 0x4adce6:c.instructions+=5;goto B4adce6;
case 0x4adce7:c.instructions+=4;goto B4adce7;
case 0x4adce9:c.instructions+=3;goto B4adce9;
case 0x4adceb:c.instructions+=2;goto B4adceb;
case 0x4adcec:c.instructions+=1;goto B4adcec;
case 0x4adcf1:goto L4adcf1;
case 0x4adcf4:c.instructions+=1;goto B4adcf4;
case 0x4add00:goto L4add00;
case 0x4add03:c.instructions+=6;goto B4add03;
case 0x4add06:c.instructions+=5;goto B4add06;
case 0x4add07:c.instructions+=4;goto B4add07;
case 0x4add09:c.instructions+=3;goto B4add09;
case 0x4add0b:c.instructions+=2;goto B4add0b;
case 0x4add0c:c.instructions+=1;goto B4add0c;
case 0x4add11:goto L4add11;
case 0x4add14:c.instructions+=1;goto B4add14;
case 0x4add20:goto L4add20;
case 0x4add23:c.instructions+=6;goto B4add23;
case 0x4add26:c.instructions+=5;goto B4add26;
case 0x4add27:c.instructions+=4;goto B4add27;
case 0x4add29:c.instructions+=3;goto B4add29;
case 0x4add2b:c.instructions+=2;goto B4add2b;
case 0x4add2c:c.instructions+=1;goto B4add2c;
case 0x4add31:goto L4add31;
case 0x4add34:c.instructions+=1;goto B4add34;
case 0x4add40:goto L4add40;
case 0x4add43:c.instructions+=6;goto B4add43;
case 0x4add46:c.instructions+=5;goto B4add46;
case 0x4add47:c.instructions+=4;goto B4add47;
case 0x4add49:c.instructions+=3;goto B4add49;
case 0x4add4b:c.instructions+=2;goto B4add4b;
case 0x4add4c:c.instructions+=1;goto B4add4c;
case 0x4add51:goto L4add51;
case 0x4add54:c.instructions+=1;goto B4add54;
case 0x4add60:goto L4add60;
case 0x4add63:c.instructions+=6;goto B4add63;
case 0x4add66:c.instructions+=5;goto B4add66;
case 0x4add67:c.instructions+=4;goto B4add67;
case 0x4add69:c.instructions+=3;goto B4add69;
case 0x4add6b:c.instructions+=2;goto B4add6b;
case 0x4add6c:c.instructions+=1;goto B4add6c;
case 0x4add71:goto L4add71;
case 0x4add74:c.instructions+=1;goto B4add74;
case 0x4add80:goto L4add80;
case 0x4add83:c.instructions+=6;goto B4add83;
case 0x4add86:c.instructions+=5;goto B4add86;
case 0x4add87:c.instructions+=4;goto B4add87;
case 0x4add89:c.instructions+=3;goto B4add89;
case 0x4add8b:c.instructions+=2;goto B4add8b;
case 0x4add8c:c.instructions+=1;goto B4add8c;
case 0x4add91:goto L4add91;
case 0x4add94:c.instructions+=1;goto B4add94;
case 0x4adda0:goto L4adda0;
case 0x4adda3:c.instructions+=6;goto B4adda3;
case 0x4adda6:c.instructions+=5;goto B4adda6;
case 0x4adda7:c.instructions+=4;goto B4adda7;
case 0x4adda9:c.instructions+=3;goto B4adda9;
case 0x4addab:c.instructions+=2;goto B4addab;
case 0x4addac:c.instructions+=1;goto B4addac;
case 0x4addb1:goto L4addb1;
case 0x4addb4:c.instructions+=1;goto B4addb4;
case 0x4addc0:goto L4addc0;
case 0x4addc3:c.instructions+=6;goto B4addc3;
case 0x4addc6:c.instructions+=5;goto B4addc6;
case 0x4addc7:c.instructions+=4;goto B4addc7;
case 0x4addc9:c.instructions+=3;goto B4addc9;
case 0x4addcb:c.instructions+=2;goto B4addcb;
case 0x4addcc:c.instructions+=1;goto B4addcc;
case 0x4addd1:goto L4addd1;
case 0x4addd4:c.instructions+=1;goto B4addd4;
case 0x4adde0:goto L4adde0;
case 0x4adde3:c.instructions+=6;goto B4adde3;
case 0x4adde6:c.instructions+=5;goto B4adde6;
case 0x4adde7:c.instructions+=4;goto B4adde7;
case 0x4adde9:c.instructions+=3;goto B4adde9;
case 0x4addeb:c.instructions+=2;goto B4addeb;
case 0x4addec:c.instructions+=1;goto B4addec;
case 0x4addf1:goto L4addf1;
case 0x4addf4:c.instructions+=1;goto B4addf4;
case 0x4ade00:goto L4ade00;
case 0x4ade03:c.instructions+=6;goto B4ade03;
case 0x4ade06:c.instructions+=5;goto B4ade06;
case 0x4ade07:c.instructions+=4;goto B4ade07;
case 0x4ade09:c.instructions+=3;goto B4ade09;
case 0x4ade0b:c.instructions+=2;goto B4ade0b;
case 0x4ade0c:c.instructions+=1;goto B4ade0c;
case 0x4ade11:goto L4ade11;
case 0x4ade14:c.instructions+=1;goto B4ade14;
case 0x4ade20:goto L4ade20;
case 0x4ade23:c.instructions+=6;goto B4ade23;
case 0x4ade26:c.instructions+=5;goto B4ade26;
case 0x4ade27:c.instructions+=4;goto B4ade27;
case 0x4ade29:c.instructions+=3;goto B4ade29;
case 0x4ade2b:c.instructions+=2;goto B4ade2b;
case 0x4ade2c:c.instructions+=1;goto B4ade2c;
case 0x4ade31:goto L4ade31;
case 0x4ade34:c.instructions+=1;goto B4ade34;
case 0x4ade40:goto L4ade40;
case 0x4ade43:c.instructions+=6;goto B4ade43;
case 0x4ade46:c.instructions+=5;goto B4ade46;
case 0x4ade47:c.instructions+=4;goto B4ade47;
case 0x4ade49:c.instructions+=3;goto B4ade49;
case 0x4ade4b:c.instructions+=2;goto B4ade4b;
case 0x4ade4c:c.instructions+=1;goto B4ade4c;
case 0x4ade51:goto L4ade51;
case 0x4ade54:c.instructions+=1;goto B4ade54;
case 0x4ade60:goto L4ade60;
case 0x4ade63:c.instructions+=6;goto B4ade63;
case 0x4ade66:c.instructions+=5;goto B4ade66;
case 0x4ade67:c.instructions+=4;goto B4ade67;
case 0x4ade69:c.instructions+=3;goto B4ade69;
case 0x4ade6b:c.instructions+=2;goto B4ade6b;
case 0x4ade6c:c.instructions+=1;goto B4ade6c;
case 0x4ade71:goto L4ade71;
case 0x4ade74:c.instructions+=1;goto B4ade74;
case 0x4ade80:goto L4ade80;
case 0x4ade83:c.instructions+=6;goto B4ade83;
case 0x4ade86:c.instructions+=5;goto B4ade86;
case 0x4ade87:c.instructions+=4;goto B4ade87;
case 0x4ade89:c.instructions+=3;goto B4ade89;
case 0x4ade8b:c.instructions+=2;goto B4ade8b;
case 0x4ade8c:c.instructions+=1;goto B4ade8c;
case 0x4ade91:goto L4ade91;
case 0x4ade94:c.instructions+=1;goto B4ade94;
case 0x4adea0:goto L4adea0;
case 0x4adea3:c.instructions+=6;goto B4adea3;
case 0x4adea6:c.instructions+=5;goto B4adea6;
case 0x4adea7:c.instructions+=4;goto B4adea7;
case 0x4adea9:c.instructions+=3;goto B4adea9;
case 0x4adeab:c.instructions+=2;goto B4adeab;
case 0x4adeac:c.instructions+=1;goto B4adeac;
case 0x4adeb1:goto L4adeb1;
case 0x4adeb4:c.instructions+=1;goto B4adeb4;
case 0x4adec0:goto L4adec0;
case 0x4adec3:c.instructions+=6;goto B4adec3;
case 0x4adec6:c.instructions+=5;goto B4adec6;
case 0x4adec7:c.instructions+=4;goto B4adec7;
case 0x4adec9:c.instructions+=3;goto B4adec9;
case 0x4adecb:c.instructions+=2;goto B4adecb;
case 0x4adecc:c.instructions+=1;goto B4adecc;
case 0x4aded1:goto L4aded1;
case 0x4aded4:c.instructions+=1;goto B4aded4;
case 0x4adee0:goto L4adee0;
case 0x4adee3:c.instructions+=6;goto B4adee3;
case 0x4adee6:c.instructions+=5;goto B4adee6;
case 0x4adee7:c.instructions+=4;goto B4adee7;
case 0x4adee9:c.instructions+=3;goto B4adee9;
case 0x4adeeb:c.instructions+=2;goto B4adeeb;
case 0x4adeec:c.instructions+=1;goto B4adeec;
case 0x4adef1:goto L4adef1;
case 0x4adef4:c.instructions+=1;goto B4adef4;
case 0x4adf00:goto L4adf00;
case 0x4adf03:c.instructions+=6;goto B4adf03;
case 0x4adf06:c.instructions+=5;goto B4adf06;
case 0x4adf07:c.instructions+=4;goto B4adf07;
case 0x4adf09:c.instructions+=3;goto B4adf09;
case 0x4adf0b:c.instructions+=2;goto B4adf0b;
case 0x4adf0c:c.instructions+=1;goto B4adf0c;
case 0x4adf11:goto L4adf11;
case 0x4adf14:c.instructions+=1;goto B4adf14;
case 0x4adf20:goto L4adf20;
case 0x4adf23:c.instructions+=6;goto B4adf23;
case 0x4adf26:c.instructions+=5;goto B4adf26;
case 0x4adf27:c.instructions+=4;goto B4adf27;
case 0x4adf29:c.instructions+=3;goto B4adf29;
case 0x4adf2b:c.instructions+=2;goto B4adf2b;
case 0x4adf2c:c.instructions+=1;goto B4adf2c;
case 0x4adf31:goto L4adf31;
case 0x4adf34:c.instructions+=1;goto B4adf34;
case 0x4adf40:goto L4adf40;
case 0x4adf43:c.instructions+=6;goto B4adf43;
case 0x4adf46:c.instructions+=5;goto B4adf46;
case 0x4adf47:c.instructions+=4;goto B4adf47;
case 0x4adf49:c.instructions+=3;goto B4adf49;
case 0x4adf4b:c.instructions+=2;goto B4adf4b;
case 0x4adf4c:c.instructions+=1;goto B4adf4c;
case 0x4adf51:goto L4adf51;
case 0x4adf54:c.instructions+=1;goto B4adf54;
case 0x4adf60:goto L4adf60;
case 0x4adf63:c.instructions+=6;goto B4adf63;
case 0x4adf66:c.instructions+=5;goto B4adf66;
case 0x4adf67:c.instructions+=4;goto B4adf67;
case 0x4adf69:c.instructions+=3;goto B4adf69;
case 0x4adf6b:c.instructions+=2;goto B4adf6b;
case 0x4adf6c:c.instructions+=1;goto B4adf6c;
case 0x4adf71:goto L4adf71;
case 0x4adf74:c.instructions+=1;goto B4adf74;
case 0x4adf80:goto L4adf80;
case 0x4adf83:c.instructions+=6;goto B4adf83;
case 0x4adf86:c.instructions+=5;goto B4adf86;
case 0x4adf87:c.instructions+=4;goto B4adf87;
case 0x4adf89:c.instructions+=3;goto B4adf89;
case 0x4adf8b:c.instructions+=2;goto B4adf8b;
case 0x4adf8c:c.instructions+=1;goto B4adf8c;
case 0x4adf91:goto L4adf91;
case 0x4adf94:c.instructions+=1;goto B4adf94;
case 0x4adfa0:goto L4adfa0;
case 0x4adfa3:c.instructions+=6;goto B4adfa3;
case 0x4adfa6:c.instructions+=5;goto B4adfa6;
case 0x4adfa7:c.instructions+=4;goto B4adfa7;
case 0x4adfa9:c.instructions+=3;goto B4adfa9;
case 0x4adfab:c.instructions+=2;goto B4adfab;
case 0x4adfac:c.instructions+=1;goto B4adfac;
case 0x4adfb1:goto L4adfb1;
case 0x4adfb4:c.instructions+=1;goto B4adfb4;
case 0x4adfc0:goto L4adfc0;
case 0x4adfc1:c.instructions+=7;goto B4adfc1;
case 0x4adfc3:c.instructions+=6;goto B4adfc3;
case 0x4adfc6:c.instructions+=5;goto B4adfc6;
case 0x4adfcc:c.instructions+=4;goto B4adfcc;
case 0x4adfce:c.instructions+=3;goto B4adfce;
case 0x4adfd0:c.instructions+=2;goto B4adfd0;
case 0x4adfd6:c.instructions+=1;goto B4adfd6;
case 0x4adfdb:goto L4adfdb;
case 0x4adfdd:c.instructions+=2;goto B4adfdd;
case 0x4adfdf:c.instructions+=1;goto B4adfdf;
case 0x4adfe2:goto L4adfe2;
case 0x4adfe3:c.instructions+=1;goto B4adfe3;
case 0x4adff0:goto L4adff0;
case 0x4adff3:c.instructions+=6;goto B4adff3;
case 0x4adff6:c.instructions+=5;goto B4adff6;
case 0x4adff7:c.instructions+=4;goto B4adff7;
case 0x4adff9:c.instructions+=3;goto B4adff9;
case 0x4adffb:c.instructions+=2;goto B4adffb;
case 0x4adffc:c.instructions+=1;goto B4adffc;
default:missing_instruction(c.pc);}
B4ad000:L4ad000:{c.instructions+=6;NFSU2_TR(0x4ad000);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad003:{NFSU2_TR(0x4ad003);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad005:{NFSU2_TR(0x4ad005);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad007:{NFSU2_TR(0x4ad007);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad009:{NFSU2_TR(0x4ad009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad00a:{NFSU2_TR(0x4ad00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad00full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad00f:L4ad00f:{c.instructions+=2;NFSU2_TR(0x4ad00f);
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
B4ad012:{NFSU2_TR(0x4ad012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad020:L4ad020:{c.instructions+=6;NFSU2_TR(0x4ad020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad021:{NFSU2_TR(0x4ad021);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad023:{NFSU2_TR(0x4ad023);
__builtin_memmove((R+24),(R+4),4);
}
B4ad025:{NFSU2_TR(0x4ad025);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad027:{NFSU2_TR(0x4ad027);
w4(R+4,u32(0x874c40ull));
}
B4ad02c:{NFSU2_TR(0x4ad02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad031ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad031:L4ad031:{c.instructions+=3;NFSU2_TR(0x4ad031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad033:{NFSU2_TR(0x4ad033);
__builtin_memmove((R+4),(R+24),4);
}
B4ad035:{NFSU2_TR(0x4ad035);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad038ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad038:L4ad038:{c.instructions+=2;NFSU2_TR(0x4ad038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad039:{NFSU2_TR(0x4ad039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad040:L4ad040:{c.instructions+=6;NFSU2_TR(0x4ad040);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad043:{NFSU2_TR(0x4ad043);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad045:{NFSU2_TR(0x4ad045);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad047:{NFSU2_TR(0x4ad047);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad049:{NFSU2_TR(0x4ad049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad04a:{NFSU2_TR(0x4ad04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad04full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad04f:L4ad04f:{c.instructions+=2;NFSU2_TR(0x4ad04f);
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
B4ad052:{NFSU2_TR(0x4ad052);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad060:L4ad060:{c.instructions+=4;NFSU2_TR(0x4ad060);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad063:{NFSU2_TR(0x4ad063);
u8 U[4];
w4(U+0,u32(0xbd7ba1aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad068:{NFSU2_TR(0x4ad068);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad069:{NFSU2_TR(0x4ad069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad06eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad06e:L4ad06e:{c.instructions+=2;NFSU2_TR(0x4ad06e);
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
B4ad071:{NFSU2_TR(0x4ad071);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad080:L4ad080:{c.instructions+=6;NFSU2_TR(0x4ad080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad081:{NFSU2_TR(0x4ad081);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad083:{NFSU2_TR(0x4ad083);
__builtin_memmove((R+24),(R+4),4);
}
B4ad085:{NFSU2_TR(0x4ad085);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad087:{NFSU2_TR(0x4ad087);
w4(R+4,u32(0x874c40ull));
}
B4ad08c:{NFSU2_TR(0x4ad08c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad091ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad091:L4ad091:{c.instructions+=3;NFSU2_TR(0x4ad091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad093:{NFSU2_TR(0x4ad093);
__builtin_memmove((R+4),(R+24),4);
}
B4ad095:{NFSU2_TR(0x4ad095);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad098ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad098:L4ad098:{c.instructions+=2;NFSU2_TR(0x4ad098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad099:{NFSU2_TR(0x4ad099);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad0a0:L4ad0a0:{c.instructions+=6;NFSU2_TR(0x4ad0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad0a3:{NFSU2_TR(0x4ad0a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0a5:{NFSU2_TR(0x4ad0a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0a7:{NFSU2_TR(0x4ad0a7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0a9:{NFSU2_TR(0x4ad0a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0aa:{NFSU2_TR(0x4ad0aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad0afull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad0af:L4ad0af:{c.instructions+=2;NFSU2_TR(0x4ad0af);
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
B4ad0b2:{NFSU2_TR(0x4ad0b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad0c0:L4ad0c0:{c.instructions+=6;NFSU2_TR(0x4ad0c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0c1:{NFSU2_TR(0x4ad0c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0c3:{NFSU2_TR(0x4ad0c3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad0c5:{NFSU2_TR(0x4ad0c5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0c7:{NFSU2_TR(0x4ad0c7);
w4(R+4,u32(0x874c40ull));
}
B4ad0cc:{NFSU2_TR(0x4ad0cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad0d1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad0d1:L4ad0d1:{c.instructions+=3;NFSU2_TR(0x4ad0d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad0d3:{NFSU2_TR(0x4ad0d3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad0d5:{NFSU2_TR(0x4ad0d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad0d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad0d8:L4ad0d8:{c.instructions+=2;NFSU2_TR(0x4ad0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad0d9:{NFSU2_TR(0x4ad0d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad0e0:L4ad0e0:{c.instructions+=6;NFSU2_TR(0x4ad0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad0e3:{NFSU2_TR(0x4ad0e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0e5:{NFSU2_TR(0x4ad0e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0e7:{NFSU2_TR(0x4ad0e7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0e9:{NFSU2_TR(0x4ad0e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad0ea:{NFSU2_TR(0x4ad0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad0efull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad0ef:L4ad0ef:{c.instructions+=2;NFSU2_TR(0x4ad0ef);
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
B4ad0f2:{NFSU2_TR(0x4ad0f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad100:L4ad100:{c.instructions+=4;NFSU2_TR(0x4ad100);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad103:{NFSU2_TR(0x4ad103);
u8 U[4];
w4(U+0,u32(0x409607e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad108:{NFSU2_TR(0x4ad108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad109:{NFSU2_TR(0x4ad109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad10eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad10e:L4ad10e:{c.instructions+=2;NFSU2_TR(0x4ad10e);
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
B4ad111:{NFSU2_TR(0x4ad111);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad120:L4ad120:{c.instructions+=6;NFSU2_TR(0x4ad120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad121:{NFSU2_TR(0x4ad121);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad123:{NFSU2_TR(0x4ad123);
__builtin_memmove((R+24),(R+4),4);
}
B4ad125:{NFSU2_TR(0x4ad125);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad127:{NFSU2_TR(0x4ad127);
w4(R+4,u32(0x874c40ull));
}
B4ad12c:{NFSU2_TR(0x4ad12c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad131ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad131:L4ad131:{c.instructions+=3;NFSU2_TR(0x4ad131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad133:{NFSU2_TR(0x4ad133);
__builtin_memmove((R+4),(R+24),4);
}
B4ad135:{NFSU2_TR(0x4ad135);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad138ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad138:L4ad138:{c.instructions+=2;NFSU2_TR(0x4ad138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad139:{NFSU2_TR(0x4ad139);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad140:L4ad140:{c.instructions+=6;NFSU2_TR(0x4ad140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad143:{NFSU2_TR(0x4ad143);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad145:{NFSU2_TR(0x4ad145);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad147:{NFSU2_TR(0x4ad147);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad149:{NFSU2_TR(0x4ad149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad14a:{NFSU2_TR(0x4ad14a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad14full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad14f:L4ad14f:{c.instructions+=2;NFSU2_TR(0x4ad14f);
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
B4ad152:{NFSU2_TR(0x4ad152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad160:L4ad160:{c.instructions+=6;NFSU2_TR(0x4ad160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad161:{NFSU2_TR(0x4ad161);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad163:{NFSU2_TR(0x4ad163);
__builtin_memmove((R+24),(R+4),4);
}
B4ad165:{NFSU2_TR(0x4ad165);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad167:{NFSU2_TR(0x4ad167);
w4(R+4,u32(0x874c40ull));
}
B4ad16c:{NFSU2_TR(0x4ad16c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad171ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad171:L4ad171:{c.instructions+=3;NFSU2_TR(0x4ad171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad173:{NFSU2_TR(0x4ad173);
__builtin_memmove((R+4),(R+24),4);
}
B4ad175:{NFSU2_TR(0x4ad175);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad178ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad178:L4ad178:{c.instructions+=2;NFSU2_TR(0x4ad178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad179:{NFSU2_TR(0x4ad179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad180:L4ad180:{c.instructions+=6;NFSU2_TR(0x4ad180);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad183:{NFSU2_TR(0x4ad183);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad185:{NFSU2_TR(0x4ad185);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad187:{NFSU2_TR(0x4ad187);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad189:{NFSU2_TR(0x4ad189);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad18a:{NFSU2_TR(0x4ad18a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad18full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad18f:L4ad18f:{c.instructions+=2;NFSU2_TR(0x4ad18f);
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
B4ad192:{NFSU2_TR(0x4ad192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad1a0:L4ad1a0:{c.instructions+=4;NFSU2_TR(0x4ad1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad1a3:{NFSU2_TR(0x4ad1a3);
u8 U[4];
w4(U+0,u32(0x82ebcc98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1a8:{NFSU2_TR(0x4ad1a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1a9:{NFSU2_TR(0x4ad1a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad1aeull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad1ae:L4ad1ae:{c.instructions+=2;NFSU2_TR(0x4ad1ae);
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
B4ad1b1:{NFSU2_TR(0x4ad1b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad1c0:L4ad1c0:{c.instructions+=6;NFSU2_TR(0x4ad1c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1c1:{NFSU2_TR(0x4ad1c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1c3:{NFSU2_TR(0x4ad1c3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad1c5:{NFSU2_TR(0x4ad1c5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1c7:{NFSU2_TR(0x4ad1c7);
w4(R+4,u32(0x874c40ull));
}
B4ad1cc:{NFSU2_TR(0x4ad1cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad1d1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad1d1:L4ad1d1:{c.instructions+=3;NFSU2_TR(0x4ad1d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad1d3:{NFSU2_TR(0x4ad1d3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad1d5:{NFSU2_TR(0x4ad1d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad1d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad1d8:L4ad1d8:{c.instructions+=2;NFSU2_TR(0x4ad1d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad1d9:{NFSU2_TR(0x4ad1d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad1e0:L4ad1e0:{c.instructions+=6;NFSU2_TR(0x4ad1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad1e3:{NFSU2_TR(0x4ad1e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1e5:{NFSU2_TR(0x4ad1e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1e7:{NFSU2_TR(0x4ad1e7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1e9:{NFSU2_TR(0x4ad1e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad1ea:{NFSU2_TR(0x4ad1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad1efull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad1ef:L4ad1ef:{c.instructions+=2;NFSU2_TR(0x4ad1ef);
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
B4ad1f2:{NFSU2_TR(0x4ad1f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad200:L4ad200:{c.instructions+=6;NFSU2_TR(0x4ad200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad201:{NFSU2_TR(0x4ad201);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad203:{NFSU2_TR(0x4ad203);
__builtin_memmove((R+24),(R+4),4);
}
B4ad205:{NFSU2_TR(0x4ad205);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad207:{NFSU2_TR(0x4ad207);
w4(R+4,u32(0x874c40ull));
}
B4ad20c:{NFSU2_TR(0x4ad20c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad211ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad211:L4ad211:{c.instructions+=3;NFSU2_TR(0x4ad211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad213:{NFSU2_TR(0x4ad213);
__builtin_memmove((R+4),(R+24),4);
}
B4ad215:{NFSU2_TR(0x4ad215);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad218ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad218:L4ad218:{c.instructions+=2;NFSU2_TR(0x4ad218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad219:{NFSU2_TR(0x4ad219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad220:L4ad220:{c.instructions+=6;NFSU2_TR(0x4ad220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad223:{NFSU2_TR(0x4ad223);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad225:{NFSU2_TR(0x4ad225);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad227:{NFSU2_TR(0x4ad227);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad229:{NFSU2_TR(0x4ad229);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad22a:{NFSU2_TR(0x4ad22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad22full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad22f:L4ad22f:{c.instructions+=2;NFSU2_TR(0x4ad22f);
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
B4ad232:{NFSU2_TR(0x4ad232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad240:L4ad240:{c.instructions+=4;NFSU2_TR(0x4ad240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad243:{NFSU2_TR(0x4ad243);
u8 U[4];
w4(U+0,u32(0x3eb318ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad248:{NFSU2_TR(0x4ad248);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad249:{NFSU2_TR(0x4ad249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad24eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad24e:L4ad24e:{c.instructions+=2;NFSU2_TR(0x4ad24e);
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
B4ad251:{NFSU2_TR(0x4ad251);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad260:L4ad260:{c.instructions+=6;NFSU2_TR(0x4ad260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad261:{NFSU2_TR(0x4ad261);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad263:{NFSU2_TR(0x4ad263);
__builtin_memmove((R+24),(R+4),4);
}
B4ad265:{NFSU2_TR(0x4ad265);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad267:{NFSU2_TR(0x4ad267);
w4(R+4,u32(0x874c40ull));
}
B4ad26c:{NFSU2_TR(0x4ad26c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad271ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad271:L4ad271:{c.instructions+=3;NFSU2_TR(0x4ad271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad273:{NFSU2_TR(0x4ad273);
__builtin_memmove((R+4),(R+24),4);
}
B4ad275:{NFSU2_TR(0x4ad275);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad278ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad278:L4ad278:{c.instructions+=2;NFSU2_TR(0x4ad278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad279:{NFSU2_TR(0x4ad279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad280:L4ad280:{c.instructions+=6;NFSU2_TR(0x4ad280);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad283:{NFSU2_TR(0x4ad283);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad285:{NFSU2_TR(0x4ad285);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad287:{NFSU2_TR(0x4ad287);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad289:{NFSU2_TR(0x4ad289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad28a:{NFSU2_TR(0x4ad28a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad28full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad28f:L4ad28f:{c.instructions+=2;NFSU2_TR(0x4ad28f);
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
B4ad292:{NFSU2_TR(0x4ad292);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad2a0:L4ad2a0:{c.instructions+=6;NFSU2_TR(0x4ad2a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2a1:{NFSU2_TR(0x4ad2a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2a3:{NFSU2_TR(0x4ad2a3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad2a5:{NFSU2_TR(0x4ad2a5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2a7:{NFSU2_TR(0x4ad2a7);
w4(R+4,u32(0x874c40ull));
}
B4ad2ac:{NFSU2_TR(0x4ad2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad2b1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad2b1:L4ad2b1:{c.instructions+=3;NFSU2_TR(0x4ad2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad2b3:{NFSU2_TR(0x4ad2b3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad2b5:{NFSU2_TR(0x4ad2b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad2b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad2b8:L4ad2b8:{c.instructions+=2;NFSU2_TR(0x4ad2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad2b9:{NFSU2_TR(0x4ad2b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad2c0:L4ad2c0:{c.instructions+=6;NFSU2_TR(0x4ad2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad2c3:{NFSU2_TR(0x4ad2c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2c5:{NFSU2_TR(0x4ad2c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2c7:{NFSU2_TR(0x4ad2c7);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2c9:{NFSU2_TR(0x4ad2c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2ca:{NFSU2_TR(0x4ad2ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad2cfull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad2cf:L4ad2cf:{c.instructions+=2;NFSU2_TR(0x4ad2cf);
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
B4ad2d2:{NFSU2_TR(0x4ad2d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad2e0:L4ad2e0:{c.instructions+=4;NFSU2_TR(0x4ad2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad2e3:{NFSU2_TR(0x4ad2e3);
u8 U[4];
w4(U+0,u32(0xb7d33921ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2e8:{NFSU2_TR(0x4ad2e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad2e9:{NFSU2_TR(0x4ad2e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad2eeull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad2ee:L4ad2ee:{c.instructions+=2;NFSU2_TR(0x4ad2ee);
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
B4ad2f1:{NFSU2_TR(0x4ad2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad300:L4ad300:{c.instructions+=6;NFSU2_TR(0x4ad300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad301:{NFSU2_TR(0x4ad301);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad303:{NFSU2_TR(0x4ad303);
__builtin_memmove((R+24),(R+4),4);
}
B4ad305:{NFSU2_TR(0x4ad305);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad307:{NFSU2_TR(0x4ad307);
w4(R+4,u32(0x874c40ull));
}
B4ad30c:{NFSU2_TR(0x4ad30c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad311ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad311:L4ad311:{c.instructions+=3;NFSU2_TR(0x4ad311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad313:{NFSU2_TR(0x4ad313);
__builtin_memmove((R+4),(R+24),4);
}
B4ad315:{NFSU2_TR(0x4ad315);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad318ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad318:L4ad318:{c.instructions+=2;NFSU2_TR(0x4ad318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad319:{NFSU2_TR(0x4ad319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad320:L4ad320:{c.instructions+=6;NFSU2_TR(0x4ad320);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad323:{NFSU2_TR(0x4ad323);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad325:{NFSU2_TR(0x4ad325);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad327:{NFSU2_TR(0x4ad327);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad329:{NFSU2_TR(0x4ad329);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad32a:{NFSU2_TR(0x4ad32a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad32full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad32f:L4ad32f:{c.instructions+=2;NFSU2_TR(0x4ad32f);
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
B4ad332:{NFSU2_TR(0x4ad332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad340:L4ad340:{c.instructions+=6;NFSU2_TR(0x4ad340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad341:{NFSU2_TR(0x4ad341);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad343:{NFSU2_TR(0x4ad343);
__builtin_memmove((R+24),(R+4),4);
}
B4ad345:{NFSU2_TR(0x4ad345);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad347:{NFSU2_TR(0x4ad347);
w4(R+4,u32(0x874c40ull));
}
B4ad34c:{NFSU2_TR(0x4ad34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad351ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad351:L4ad351:{c.instructions+=3;NFSU2_TR(0x4ad351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad353:{NFSU2_TR(0x4ad353);
__builtin_memmove((R+4),(R+24),4);
}
B4ad355:{NFSU2_TR(0x4ad355);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad358ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad358:L4ad358:{c.instructions+=2;NFSU2_TR(0x4ad358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad359:{NFSU2_TR(0x4ad359);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad360:L4ad360:{c.instructions+=6;NFSU2_TR(0x4ad360);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad363:{NFSU2_TR(0x4ad363);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad365:{NFSU2_TR(0x4ad365);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad367:{NFSU2_TR(0x4ad367);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad369:{NFSU2_TR(0x4ad369);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad36a:{NFSU2_TR(0x4ad36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad36full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad36f:L4ad36f:{c.instructions+=2;NFSU2_TR(0x4ad36f);
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
B4ad372:{NFSU2_TR(0x4ad372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad380:L4ad380:{c.instructions+=4;NFSU2_TR(0x4ad380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad383:{NFSU2_TR(0x4ad383);
u8 U[4];
w4(U+0,u32(0xb3d1ea35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad388:{NFSU2_TR(0x4ad388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad389:{NFSU2_TR(0x4ad389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad38eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad38e:L4ad38e:{c.instructions+=2;NFSU2_TR(0x4ad38e);
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
B4ad391:{NFSU2_TR(0x4ad391);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad3a0:L4ad3a0:{c.instructions+=6;NFSU2_TR(0x4ad3a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3a1:{NFSU2_TR(0x4ad3a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3a3:{NFSU2_TR(0x4ad3a3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad3a5:{NFSU2_TR(0x4ad3a5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3a7:{NFSU2_TR(0x4ad3a7);
w4(R+4,u32(0x874c40ull));
}
B4ad3ac:{NFSU2_TR(0x4ad3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad3b1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad3b1:L4ad3b1:{c.instructions+=3;NFSU2_TR(0x4ad3b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad3b3:{NFSU2_TR(0x4ad3b3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad3b5:{NFSU2_TR(0x4ad3b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad3b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad3b8:L4ad3b8:{c.instructions+=2;NFSU2_TR(0x4ad3b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad3b9:{NFSU2_TR(0x4ad3b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad3c0:L4ad3c0:{c.instructions+=6;NFSU2_TR(0x4ad3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad3c3:{NFSU2_TR(0x4ad3c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3c5:{NFSU2_TR(0x4ad3c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3c7:{NFSU2_TR(0x4ad3c7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3c9:{NFSU2_TR(0x4ad3c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3ca:{NFSU2_TR(0x4ad3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad3cfull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad3cf:L4ad3cf:{c.instructions+=2;NFSU2_TR(0x4ad3cf);
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
B4ad3d2:{NFSU2_TR(0x4ad3d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad3e0:L4ad3e0:{c.instructions+=6;NFSU2_TR(0x4ad3e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3e1:{NFSU2_TR(0x4ad3e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3e3:{NFSU2_TR(0x4ad3e3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad3e5:{NFSU2_TR(0x4ad3e5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad3e7:{NFSU2_TR(0x4ad3e7);
w4(R+4,u32(0x874c40ull));
}
B4ad3ec:{NFSU2_TR(0x4ad3ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad3f1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad3f1:L4ad3f1:{c.instructions+=3;NFSU2_TR(0x4ad3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad3f3:{NFSU2_TR(0x4ad3f3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad3f5:{NFSU2_TR(0x4ad3f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad3f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad3f8:L4ad3f8:{c.instructions+=2;NFSU2_TR(0x4ad3f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad3f9:{NFSU2_TR(0x4ad3f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad400:L4ad400:{c.instructions+=6;NFSU2_TR(0x4ad400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad403:{NFSU2_TR(0x4ad403);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad405:{NFSU2_TR(0x4ad405);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad407:{NFSU2_TR(0x4ad407);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad409:{NFSU2_TR(0x4ad409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad40a:{NFSU2_TR(0x4ad40a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad40full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad40f:L4ad40f:{c.instructions+=2;NFSU2_TR(0x4ad40f);
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
B4ad412:{NFSU2_TR(0x4ad412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad420:L4ad420:{c.instructions+=4;NFSU2_TR(0x4ad420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad423:{NFSU2_TR(0x4ad423);
u8 U[4];
w4(U+0,u32(0xdf5aef26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad428:{NFSU2_TR(0x4ad428);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad429:{NFSU2_TR(0x4ad429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad42eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad42e:L4ad42e:{c.instructions+=2;NFSU2_TR(0x4ad42e);
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
B4ad431:{NFSU2_TR(0x4ad431);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad440:L4ad440:{c.instructions+=6;NFSU2_TR(0x4ad440);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad441:{NFSU2_TR(0x4ad441);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad443:{NFSU2_TR(0x4ad443);
__builtin_memmove((R+24),(R+4),4);
}
B4ad445:{NFSU2_TR(0x4ad445);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad447:{NFSU2_TR(0x4ad447);
w4(R+4,u32(0x874c40ull));
}
B4ad44c:{NFSU2_TR(0x4ad44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad451ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad451:L4ad451:{c.instructions+=3;NFSU2_TR(0x4ad451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad453:{NFSU2_TR(0x4ad453);
__builtin_memmove((R+4),(R+24),4);
}
B4ad455:{NFSU2_TR(0x4ad455);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad458ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad458:L4ad458:{c.instructions+=2;NFSU2_TR(0x4ad458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad459:{NFSU2_TR(0x4ad459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad460:L4ad460:{c.instructions+=6;NFSU2_TR(0x4ad460);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad463:{NFSU2_TR(0x4ad463);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad465:{NFSU2_TR(0x4ad465);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad467:{NFSU2_TR(0x4ad467);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad469:{NFSU2_TR(0x4ad469);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad46a:{NFSU2_TR(0x4ad46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad46full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad46f:L4ad46f:{c.instructions+=2;NFSU2_TR(0x4ad46f);
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
B4ad472:{NFSU2_TR(0x4ad472);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad480:L4ad480:{c.instructions+=6;NFSU2_TR(0x4ad480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad481:{NFSU2_TR(0x4ad481);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad483:{NFSU2_TR(0x4ad483);
__builtin_memmove((R+24),(R+4),4);
}
B4ad485:{NFSU2_TR(0x4ad485);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad487:{NFSU2_TR(0x4ad487);
w4(R+4,u32(0x874c40ull));
}
B4ad48c:{NFSU2_TR(0x4ad48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad491ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad491:L4ad491:{c.instructions+=3;NFSU2_TR(0x4ad491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad493:{NFSU2_TR(0x4ad493);
__builtin_memmove((R+4),(R+24),4);
}
B4ad495:{NFSU2_TR(0x4ad495);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad498ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad498:L4ad498:{c.instructions+=2;NFSU2_TR(0x4ad498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad499:{NFSU2_TR(0x4ad499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad4a0:L4ad4a0:{c.instructions+=6;NFSU2_TR(0x4ad4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad4a3:{NFSU2_TR(0x4ad4a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4a5:{NFSU2_TR(0x4ad4a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4a7:{NFSU2_TR(0x4ad4a7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4a9:{NFSU2_TR(0x4ad4a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4aa:{NFSU2_TR(0x4ad4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad4afull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad4af:L4ad4af:{c.instructions+=2;NFSU2_TR(0x4ad4af);
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
B4ad4b2:{NFSU2_TR(0x4ad4b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad4c0:L4ad4c0:{c.instructions+=4;NFSU2_TR(0x4ad4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad4c3:{NFSU2_TR(0x4ad4c3);
u8 U[4];
w4(U+0,u32(0x419ca63aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4c8:{NFSU2_TR(0x4ad4c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4c9:{NFSU2_TR(0x4ad4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad4ceull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad4ce:L4ad4ce:{c.instructions+=2;NFSU2_TR(0x4ad4ce);
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
B4ad4d1:{NFSU2_TR(0x4ad4d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad4e0:L4ad4e0:{c.instructions+=6;NFSU2_TR(0x4ad4e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4e1:{NFSU2_TR(0x4ad4e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4e3:{NFSU2_TR(0x4ad4e3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad4e5:{NFSU2_TR(0x4ad4e5);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad4e7:{NFSU2_TR(0x4ad4e7);
w4(R+4,u32(0x874c40ull));
}
B4ad4ec:{NFSU2_TR(0x4ad4ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad4f1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad4f1:L4ad4f1:{c.instructions+=3;NFSU2_TR(0x4ad4f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad4f3:{NFSU2_TR(0x4ad4f3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad4f5:{NFSU2_TR(0x4ad4f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad4f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad4f8:L4ad4f8:{c.instructions+=2;NFSU2_TR(0x4ad4f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad4f9:{NFSU2_TR(0x4ad4f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad500:L4ad500:{c.instructions+=6;NFSU2_TR(0x4ad500);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad503:{NFSU2_TR(0x4ad503);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad505:{NFSU2_TR(0x4ad505);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad507:{NFSU2_TR(0x4ad507);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad509:{NFSU2_TR(0x4ad509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad50a:{NFSU2_TR(0x4ad50a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad50full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad50f:L4ad50f:{c.instructions+=2;NFSU2_TR(0x4ad50f);
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
B4ad512:{NFSU2_TR(0x4ad512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad520:L4ad520:{c.instructions+=6;NFSU2_TR(0x4ad520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad521:{NFSU2_TR(0x4ad521);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad523:{NFSU2_TR(0x4ad523);
__builtin_memmove((R+24),(R+4),4);
}
B4ad525:{NFSU2_TR(0x4ad525);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad527:{NFSU2_TR(0x4ad527);
w4(R+4,u32(0x874c40ull));
}
B4ad52c:{NFSU2_TR(0x4ad52c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad531ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad531:L4ad531:{c.instructions+=3;NFSU2_TR(0x4ad531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad533:{NFSU2_TR(0x4ad533);
__builtin_memmove((R+4),(R+24),4);
}
B4ad535:{NFSU2_TR(0x4ad535);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad538ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad538:L4ad538:{c.instructions+=2;NFSU2_TR(0x4ad538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad539:{NFSU2_TR(0x4ad539);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad540:L4ad540:{c.instructions+=6;NFSU2_TR(0x4ad540);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad543:{NFSU2_TR(0x4ad543);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad545:{NFSU2_TR(0x4ad545);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad547:{NFSU2_TR(0x4ad547);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad549:{NFSU2_TR(0x4ad549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad54a:{NFSU2_TR(0x4ad54a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad54full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad54f:L4ad54f:{c.instructions+=2;NFSU2_TR(0x4ad54f);
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
B4ad552:{NFSU2_TR(0x4ad552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad560:L4ad560:{c.instructions+=4;NFSU2_TR(0x4ad560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad563:{NFSU2_TR(0x4ad563);
u8 U[4];
w4(U+0,u32(0x35b9f571ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad568:{NFSU2_TR(0x4ad568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad569:{NFSU2_TR(0x4ad569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad56eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad56e:L4ad56e:{c.instructions+=2;NFSU2_TR(0x4ad56e);
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
B4ad571:{NFSU2_TR(0x4ad571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad580:L4ad580:{c.instructions+=6;NFSU2_TR(0x4ad580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad581:{NFSU2_TR(0x4ad581);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad583:{NFSU2_TR(0x4ad583);
__builtin_memmove((R+24),(R+4),4);
}
B4ad585:{NFSU2_TR(0x4ad585);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad587:{NFSU2_TR(0x4ad587);
w4(R+4,u32(0x874c40ull));
}
B4ad58c:{NFSU2_TR(0x4ad58c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad591ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad591:L4ad591:{c.instructions+=3;NFSU2_TR(0x4ad591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad593:{NFSU2_TR(0x4ad593);
__builtin_memmove((R+4),(R+24),4);
}
B4ad595:{NFSU2_TR(0x4ad595);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad598ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad598:L4ad598:{c.instructions+=2;NFSU2_TR(0x4ad598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad599:{NFSU2_TR(0x4ad599);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad5a0:L4ad5a0:{c.instructions+=6;NFSU2_TR(0x4ad5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad5a3:{NFSU2_TR(0x4ad5a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5a5:{NFSU2_TR(0x4ad5a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5a7:{NFSU2_TR(0x4ad5a7);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5a9:{NFSU2_TR(0x4ad5a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5aa:{NFSU2_TR(0x4ad5aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad5afull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad5af:L4ad5af:{c.instructions+=2;NFSU2_TR(0x4ad5af);
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
B4ad5b2:{NFSU2_TR(0x4ad5b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad5c0:L4ad5c0:{c.instructions+=6;NFSU2_TR(0x4ad5c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5c1:{NFSU2_TR(0x4ad5c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5c3:{NFSU2_TR(0x4ad5c3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad5c5:{NFSU2_TR(0x4ad5c5);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5c7:{NFSU2_TR(0x4ad5c7);
w4(R+4,u32(0x874c40ull));
}
B4ad5cc:{NFSU2_TR(0x4ad5cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad5d1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad5d1:L4ad5d1:{c.instructions+=3;NFSU2_TR(0x4ad5d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad5d3:{NFSU2_TR(0x4ad5d3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad5d5:{NFSU2_TR(0x4ad5d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad5d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad5d8:L4ad5d8:{c.instructions+=2;NFSU2_TR(0x4ad5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad5d9:{NFSU2_TR(0x4ad5d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad5e0:L4ad5e0:{c.instructions+=6;NFSU2_TR(0x4ad5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad5e3:{NFSU2_TR(0x4ad5e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5e5:{NFSU2_TR(0x4ad5e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5e7:{NFSU2_TR(0x4ad5e7);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5e9:{NFSU2_TR(0x4ad5e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad5ea:{NFSU2_TR(0x4ad5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad5efull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad5ef:L4ad5ef:{c.instructions+=2;NFSU2_TR(0x4ad5ef);
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
B4ad5f2:{NFSU2_TR(0x4ad5f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad600:L4ad600:{c.instructions+=4;NFSU2_TR(0x4ad600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad603:{NFSU2_TR(0x4ad603);
u8 U[4];
w4(U+0,u32(0x4a1341b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad608:{NFSU2_TR(0x4ad608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad609:{NFSU2_TR(0x4ad609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad60eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad60e:L4ad60e:{c.instructions+=2;NFSU2_TR(0x4ad60e);
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
B4ad611:{NFSU2_TR(0x4ad611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad620:L4ad620:{c.instructions+=6;NFSU2_TR(0x4ad620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad621:{NFSU2_TR(0x4ad621);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad623:{NFSU2_TR(0x4ad623);
__builtin_memmove((R+24),(R+4),4);
}
B4ad625:{NFSU2_TR(0x4ad625);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad627:{NFSU2_TR(0x4ad627);
w4(R+4,u32(0x874c40ull));
}
B4ad62c:{NFSU2_TR(0x4ad62c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad631ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad631:L4ad631:{c.instructions+=3;NFSU2_TR(0x4ad631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad633:{NFSU2_TR(0x4ad633);
__builtin_memmove((R+4),(R+24),4);
}
B4ad635:{NFSU2_TR(0x4ad635);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad638ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad638:L4ad638:{c.instructions+=2;NFSU2_TR(0x4ad638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad639:{NFSU2_TR(0x4ad639);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad640:L4ad640:{c.instructions+=6;NFSU2_TR(0x4ad640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad643:{NFSU2_TR(0x4ad643);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad645:{NFSU2_TR(0x4ad645);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad647:{NFSU2_TR(0x4ad647);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad649:{NFSU2_TR(0x4ad649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad64a:{NFSU2_TR(0x4ad64a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad64full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad64f:L4ad64f:{c.instructions+=2;NFSU2_TR(0x4ad64f);
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
B4ad652:{NFSU2_TR(0x4ad652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad660:L4ad660:{c.instructions+=6;NFSU2_TR(0x4ad660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad661:{NFSU2_TR(0x4ad661);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad663:{NFSU2_TR(0x4ad663);
__builtin_memmove((R+24),(R+4),4);
}
B4ad665:{NFSU2_TR(0x4ad665);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad667:{NFSU2_TR(0x4ad667);
w4(R+4,u32(0x874c40ull));
}
B4ad66c:{NFSU2_TR(0x4ad66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad671ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad671:L4ad671:{c.instructions+=3;NFSU2_TR(0x4ad671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad673:{NFSU2_TR(0x4ad673);
__builtin_memmove((R+4),(R+24),4);
}
B4ad675:{NFSU2_TR(0x4ad675);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad678ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad678:L4ad678:{c.instructions+=2;NFSU2_TR(0x4ad678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad679:{NFSU2_TR(0x4ad679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad680:L4ad680:{c.instructions+=6;NFSU2_TR(0x4ad680);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad683:{NFSU2_TR(0x4ad683);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad685:{NFSU2_TR(0x4ad685);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad687:{NFSU2_TR(0x4ad687);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad689:{NFSU2_TR(0x4ad689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad68a:{NFSU2_TR(0x4ad68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad68full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad68f:L4ad68f:{c.instructions+=2;NFSU2_TR(0x4ad68f);
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
B4ad692:{NFSU2_TR(0x4ad692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad6a0:L4ad6a0:{c.instructions+=4;NFSU2_TR(0x4ad6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad6a3:{NFSU2_TR(0x4ad6a3);
u8 U[4];
w4(U+0,u32(0x1e7e3391ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6a8:{NFSU2_TR(0x4ad6a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6a9:{NFSU2_TR(0x4ad6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad6aeull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad6ae:L4ad6ae:{c.instructions+=2;NFSU2_TR(0x4ad6ae);
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
B4ad6b1:{NFSU2_TR(0x4ad6b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad6c0:L4ad6c0:{c.instructions+=6;NFSU2_TR(0x4ad6c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6c1:{NFSU2_TR(0x4ad6c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6c3:{NFSU2_TR(0x4ad6c3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad6c5:{NFSU2_TR(0x4ad6c5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6c7:{NFSU2_TR(0x4ad6c7);
w4(R+4,u32(0x874c40ull));
}
B4ad6cc:{NFSU2_TR(0x4ad6cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad6d1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad6d1:L4ad6d1:{c.instructions+=3;NFSU2_TR(0x4ad6d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad6d3:{NFSU2_TR(0x4ad6d3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad6d5:{NFSU2_TR(0x4ad6d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad6d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad6d8:L4ad6d8:{c.instructions+=2;NFSU2_TR(0x4ad6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad6d9:{NFSU2_TR(0x4ad6d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad6e0:L4ad6e0:{c.instructions+=6;NFSU2_TR(0x4ad6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad6e3:{NFSU2_TR(0x4ad6e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6e5:{NFSU2_TR(0x4ad6e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6e7:{NFSU2_TR(0x4ad6e7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6e9:{NFSU2_TR(0x4ad6e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad6ea:{NFSU2_TR(0x4ad6ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad6efull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad6ef:L4ad6ef:{c.instructions+=2;NFSU2_TR(0x4ad6ef);
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
B4ad6f2:{NFSU2_TR(0x4ad6f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad700:L4ad700:{c.instructions+=6;NFSU2_TR(0x4ad700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad701:{NFSU2_TR(0x4ad701);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad703:{NFSU2_TR(0x4ad703);
__builtin_memmove((R+24),(R+4),4);
}
B4ad705:{NFSU2_TR(0x4ad705);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad707:{NFSU2_TR(0x4ad707);
w4(R+4,u32(0x874c40ull));
}
B4ad70c:{NFSU2_TR(0x4ad70c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad711ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad711:L4ad711:{c.instructions+=3;NFSU2_TR(0x4ad711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad713:{NFSU2_TR(0x4ad713);
__builtin_memmove((R+4),(R+24),4);
}
B4ad715:{NFSU2_TR(0x4ad715);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad718ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad718:L4ad718:{c.instructions+=2;NFSU2_TR(0x4ad718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad719:{NFSU2_TR(0x4ad719);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad720:L4ad720:{c.instructions+=6;NFSU2_TR(0x4ad720);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad723:{NFSU2_TR(0x4ad723);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad725:{NFSU2_TR(0x4ad725);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad727:{NFSU2_TR(0x4ad727);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad729:{NFSU2_TR(0x4ad729);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad72a:{NFSU2_TR(0x4ad72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad72full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad72f:L4ad72f:{c.instructions+=2;NFSU2_TR(0x4ad72f);
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
B4ad732:{NFSU2_TR(0x4ad732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad740:L4ad740:{c.instructions+=4;NFSU2_TR(0x4ad740);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad743:{NFSU2_TR(0x4ad743);
u8 U[4];
w4(U+0,u32(0x58baebbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad748:{NFSU2_TR(0x4ad748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad749:{NFSU2_TR(0x4ad749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad74eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad74e:L4ad74e:{c.instructions+=2;NFSU2_TR(0x4ad74e);
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
B4ad751:{NFSU2_TR(0x4ad751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad760:L4ad760:{c.instructions+=6;NFSU2_TR(0x4ad760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad761:{NFSU2_TR(0x4ad761);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad763:{NFSU2_TR(0x4ad763);
__builtin_memmove((R+24),(R+4),4);
}
B4ad765:{NFSU2_TR(0x4ad765);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad767:{NFSU2_TR(0x4ad767);
w4(R+4,u32(0x874c40ull));
}
B4ad76c:{NFSU2_TR(0x4ad76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad771ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad771:L4ad771:{c.instructions+=3;NFSU2_TR(0x4ad771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad773:{NFSU2_TR(0x4ad773);
__builtin_memmove((R+4),(R+24),4);
}
B4ad775:{NFSU2_TR(0x4ad775);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad778ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad778:L4ad778:{c.instructions+=2;NFSU2_TR(0x4ad778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad779:{NFSU2_TR(0x4ad779);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad780:L4ad780:{c.instructions+=6;NFSU2_TR(0x4ad780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad783:{NFSU2_TR(0x4ad783);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad785:{NFSU2_TR(0x4ad785);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad787:{NFSU2_TR(0x4ad787);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad789:{NFSU2_TR(0x4ad789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad78a:{NFSU2_TR(0x4ad78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad78full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad78f:L4ad78f:{c.instructions+=2;NFSU2_TR(0x4ad78f);
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
B4ad792:{NFSU2_TR(0x4ad792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad7a0:L4ad7a0:{c.instructions+=6;NFSU2_TR(0x4ad7a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7a1:{NFSU2_TR(0x4ad7a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7a3:{NFSU2_TR(0x4ad7a3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad7a5:{NFSU2_TR(0x4ad7a5);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7a7:{NFSU2_TR(0x4ad7a7);
w4(R+4,u32(0x874c40ull));
}
B4ad7ac:{NFSU2_TR(0x4ad7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad7b1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad7b1:L4ad7b1:{c.instructions+=3;NFSU2_TR(0x4ad7b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad7b3:{NFSU2_TR(0x4ad7b3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad7b5:{NFSU2_TR(0x4ad7b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad7b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad7b8:L4ad7b8:{c.instructions+=2;NFSU2_TR(0x4ad7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad7b9:{NFSU2_TR(0x4ad7b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad7c0:L4ad7c0:{c.instructions+=6;NFSU2_TR(0x4ad7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad7c3:{NFSU2_TR(0x4ad7c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7c5:{NFSU2_TR(0x4ad7c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7c7:{NFSU2_TR(0x4ad7c7);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7c9:{NFSU2_TR(0x4ad7c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7ca:{NFSU2_TR(0x4ad7ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad7cfull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad7cf:L4ad7cf:{c.instructions+=2;NFSU2_TR(0x4ad7cf);
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
B4ad7d2:{NFSU2_TR(0x4ad7d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad7e0:L4ad7e0:{c.instructions+=4;NFSU2_TR(0x4ad7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad7e3:{NFSU2_TR(0x4ad7e3);
u8 U[4];
w4(U+0,u32(0x735b2e6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7e8:{NFSU2_TR(0x4ad7e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad7e9:{NFSU2_TR(0x4ad7e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad7eeull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad7ee:L4ad7ee:{c.instructions+=2;NFSU2_TR(0x4ad7ee);
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
B4ad7f1:{NFSU2_TR(0x4ad7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad800:L4ad800:{c.instructions+=6;NFSU2_TR(0x4ad800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad801:{NFSU2_TR(0x4ad801);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad803:{NFSU2_TR(0x4ad803);
__builtin_memmove((R+24),(R+4),4);
}
B4ad805:{NFSU2_TR(0x4ad805);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad807:{NFSU2_TR(0x4ad807);
w4(R+4,u32(0x874c40ull));
}
B4ad80c:{NFSU2_TR(0x4ad80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad811ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad811:L4ad811:{c.instructions+=3;NFSU2_TR(0x4ad811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad813:{NFSU2_TR(0x4ad813);
__builtin_memmove((R+4),(R+24),4);
}
B4ad815:{NFSU2_TR(0x4ad815);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad818ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad818:L4ad818:{c.instructions+=2;NFSU2_TR(0x4ad818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad819:{NFSU2_TR(0x4ad819);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad820:L4ad820:{c.instructions+=6;NFSU2_TR(0x4ad820);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad823:{NFSU2_TR(0x4ad823);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad825:{NFSU2_TR(0x4ad825);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad827:{NFSU2_TR(0x4ad827);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad829:{NFSU2_TR(0x4ad829);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad82a:{NFSU2_TR(0x4ad82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad82full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad82f:L4ad82f:{c.instructions+=2;NFSU2_TR(0x4ad82f);
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
B4ad832:{NFSU2_TR(0x4ad832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad840:L4ad840:{c.instructions+=6;NFSU2_TR(0x4ad840);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad841:{NFSU2_TR(0x4ad841);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad843:{NFSU2_TR(0x4ad843);
__builtin_memmove((R+24),(R+4),4);
}
B4ad845:{NFSU2_TR(0x4ad845);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad847:{NFSU2_TR(0x4ad847);
w4(R+4,u32(0x874c40ull));
}
B4ad84c:{NFSU2_TR(0x4ad84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad851ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad851:L4ad851:{c.instructions+=3;NFSU2_TR(0x4ad851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad853:{NFSU2_TR(0x4ad853);
__builtin_memmove((R+4),(R+24),4);
}
B4ad855:{NFSU2_TR(0x4ad855);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad858ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad858:L4ad858:{c.instructions+=2;NFSU2_TR(0x4ad858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad859:{NFSU2_TR(0x4ad859);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad860:L4ad860:{c.instructions+=6;NFSU2_TR(0x4ad860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad863:{NFSU2_TR(0x4ad863);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad865:{NFSU2_TR(0x4ad865);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad867:{NFSU2_TR(0x4ad867);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad869:{NFSU2_TR(0x4ad869);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad86a:{NFSU2_TR(0x4ad86a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad86full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad86f:L4ad86f:{c.instructions+=2;NFSU2_TR(0x4ad86f);
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
B4ad872:{NFSU2_TR(0x4ad872);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad880:L4ad880:{c.instructions+=4;NFSU2_TR(0x4ad880);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad883:{NFSU2_TR(0x4ad883);
u8 U[4];
w4(U+0,u32(0xa081f0ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad888:{NFSU2_TR(0x4ad888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad889:{NFSU2_TR(0x4ad889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad88eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad88e:L4ad88e:{c.instructions+=2;NFSU2_TR(0x4ad88e);
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
B4ad891:{NFSU2_TR(0x4ad891);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad8a0:L4ad8a0:{c.instructions+=6;NFSU2_TR(0x4ad8a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8a1:{NFSU2_TR(0x4ad8a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8a3:{NFSU2_TR(0x4ad8a3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad8a5:{NFSU2_TR(0x4ad8a5);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8a7:{NFSU2_TR(0x4ad8a7);
w4(R+4,u32(0x874c40ull));
}
B4ad8ac:{NFSU2_TR(0x4ad8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad8b1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad8b1:L4ad8b1:{c.instructions+=3;NFSU2_TR(0x4ad8b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad8b3:{NFSU2_TR(0x4ad8b3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad8b5:{NFSU2_TR(0x4ad8b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad8b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad8b8:L4ad8b8:{c.instructions+=2;NFSU2_TR(0x4ad8b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad8b9:{NFSU2_TR(0x4ad8b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad8c0:L4ad8c0:{c.instructions+=6;NFSU2_TR(0x4ad8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad8c3:{NFSU2_TR(0x4ad8c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8c5:{NFSU2_TR(0x4ad8c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8c7:{NFSU2_TR(0x4ad8c7);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8c9:{NFSU2_TR(0x4ad8c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8ca:{NFSU2_TR(0x4ad8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad8cfull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad8cf:L4ad8cf:{c.instructions+=2;NFSU2_TR(0x4ad8cf);
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
B4ad8d2:{NFSU2_TR(0x4ad8d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad8e0:L4ad8e0:{c.instructions+=6;NFSU2_TR(0x4ad8e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8e1:{NFSU2_TR(0x4ad8e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8e3:{NFSU2_TR(0x4ad8e3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad8e5:{NFSU2_TR(0x4ad8e5);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad8e7:{NFSU2_TR(0x4ad8e7);
w4(R+4,u32(0x874c40ull));
}
B4ad8ec:{NFSU2_TR(0x4ad8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad8f1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad8f1:L4ad8f1:{c.instructions+=3;NFSU2_TR(0x4ad8f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad8f3:{NFSU2_TR(0x4ad8f3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad8f5:{NFSU2_TR(0x4ad8f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad8f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad8f8:L4ad8f8:{c.instructions+=2;NFSU2_TR(0x4ad8f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad8f9:{NFSU2_TR(0x4ad8f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad900:L4ad900:{c.instructions+=6;NFSU2_TR(0x4ad900);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad903:{NFSU2_TR(0x4ad903);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad905:{NFSU2_TR(0x4ad905);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad907:{NFSU2_TR(0x4ad907);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad909:{NFSU2_TR(0x4ad909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad90a:{NFSU2_TR(0x4ad90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad90full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad90f:L4ad90f:{c.instructions+=2;NFSU2_TR(0x4ad90f);
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
B4ad912:{NFSU2_TR(0x4ad912);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad920:L4ad920:{c.instructions+=4;NFSU2_TR(0x4ad920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad923:{NFSU2_TR(0x4ad923);
u8 U[4];
w4(U+0,u32(0x64730aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad928:{NFSU2_TR(0x4ad928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad929:{NFSU2_TR(0x4ad929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad92eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad92e:L4ad92e:{c.instructions+=2;NFSU2_TR(0x4ad92e);
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
B4ad931:{NFSU2_TR(0x4ad931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad940:L4ad940:{c.instructions+=6;NFSU2_TR(0x4ad940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad941:{NFSU2_TR(0x4ad941);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad943:{NFSU2_TR(0x4ad943);
__builtin_memmove((R+24),(R+4),4);
}
B4ad945:{NFSU2_TR(0x4ad945);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad947:{NFSU2_TR(0x4ad947);
w4(R+4,u32(0x874c40ull));
}
B4ad94c:{NFSU2_TR(0x4ad94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad951ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad951:L4ad951:{c.instructions+=3;NFSU2_TR(0x4ad951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad953:{NFSU2_TR(0x4ad953);
__builtin_memmove((R+4),(R+24),4);
}
B4ad955:{NFSU2_TR(0x4ad955);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad958ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad958:L4ad958:{c.instructions+=2;NFSU2_TR(0x4ad958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad959:{NFSU2_TR(0x4ad959);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad960:L4ad960:{c.instructions+=6;NFSU2_TR(0x4ad960);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad963:{NFSU2_TR(0x4ad963);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad965:{NFSU2_TR(0x4ad965);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad967:{NFSU2_TR(0x4ad967);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad969:{NFSU2_TR(0x4ad969);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad96a:{NFSU2_TR(0x4ad96a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad96full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad96f:L4ad96f:{c.instructions+=2;NFSU2_TR(0x4ad96f);
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
B4ad972:{NFSU2_TR(0x4ad972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad980:L4ad980:{c.instructions+=6;NFSU2_TR(0x4ad980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad981:{NFSU2_TR(0x4ad981);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad983:{NFSU2_TR(0x4ad983);
__builtin_memmove((R+24),(R+4),4);
}
B4ad985:{NFSU2_TR(0x4ad985);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad987:{NFSU2_TR(0x4ad987);
w4(R+4,u32(0x874c40ull));
}
B4ad98c:{NFSU2_TR(0x4ad98c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad991ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad991:L4ad991:{c.instructions+=3;NFSU2_TR(0x4ad991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad993:{NFSU2_TR(0x4ad993);
__builtin_memmove((R+4),(R+24),4);
}
B4ad995:{NFSU2_TR(0x4ad995);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad998ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad998:L4ad998:{c.instructions+=2;NFSU2_TR(0x4ad998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad999:{NFSU2_TR(0x4ad999);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad9a0:L4ad9a0:{c.instructions+=6;NFSU2_TR(0x4ad9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad9a3:{NFSU2_TR(0x4ad9a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9a5:{NFSU2_TR(0x4ad9a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9a7:{NFSU2_TR(0x4ad9a7);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9a9:{NFSU2_TR(0x4ad9a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9aa:{NFSU2_TR(0x4ad9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad9afull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ad9af:L4ad9af:{c.instructions+=2;NFSU2_TR(0x4ad9af);
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
B4ad9b2:{NFSU2_TR(0x4ad9b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad9c0:L4ad9c0:{c.instructions+=4;NFSU2_TR(0x4ad9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ad9c3:{NFSU2_TR(0x4ad9c3);
u8 U[4];
w4(U+0,u32(0x6f99f62aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9c8:{NFSU2_TR(0x4ad9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9c9:{NFSU2_TR(0x4ad9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad9ceull));
TAIL_STATIC(0x50c900u,50c);
}
B4ad9ce:L4ad9ce:{c.instructions+=2;NFSU2_TR(0x4ad9ce);
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
B4ad9d1:{NFSU2_TR(0x4ad9d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ad9e0:L4ad9e0:{c.instructions+=6;NFSU2_TR(0x4ad9e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9e1:{NFSU2_TR(0x4ad9e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9e3:{NFSU2_TR(0x4ad9e3);
__builtin_memmove((R+24),(R+4),4);
}
B4ad9e5:{NFSU2_TR(0x4ad9e5);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ad9e7:{NFSU2_TR(0x4ad9e7);
w4(R+4,u32(0x874c40ull));
}
B4ad9ec:{NFSU2_TR(0x4ad9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad9f1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ad9f1:L4ad9f1:{c.instructions+=3;NFSU2_TR(0x4ad9f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ad9f3:{NFSU2_TR(0x4ad9f3);
__builtin_memmove((R+4),(R+24),4);
}
B4ad9f5:{NFSU2_TR(0x4ad9f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ad9f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ad9f8:L4ad9f8:{c.instructions+=2;NFSU2_TR(0x4ad9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ad9f9:{NFSU2_TR(0x4ad9f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ada00:L4ada00:{c.instructions+=6;NFSU2_TR(0x4ada00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ada03:{NFSU2_TR(0x4ada03);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada05:{NFSU2_TR(0x4ada05);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada07:{NFSU2_TR(0x4ada07);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada09:{NFSU2_TR(0x4ada09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada0a:{NFSU2_TR(0x4ada0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada0full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ada0f:L4ada0f:{c.instructions+=2;NFSU2_TR(0x4ada0f);
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
B4ada12:{NFSU2_TR(0x4ada12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ada20:L4ada20:{c.instructions+=6;NFSU2_TR(0x4ada20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada21:{NFSU2_TR(0x4ada21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada23:{NFSU2_TR(0x4ada23);
__builtin_memmove((R+24),(R+4),4);
}
B4ada25:{NFSU2_TR(0x4ada25);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada27:{NFSU2_TR(0x4ada27);
w4(R+4,u32(0x874c40ull));
}
B4ada2c:{NFSU2_TR(0x4ada2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada31ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ada31:L4ada31:{c.instructions+=3;NFSU2_TR(0x4ada31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ada33:{NFSU2_TR(0x4ada33);
__builtin_memmove((R+4),(R+24),4);
}
B4ada35:{NFSU2_TR(0x4ada35);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada38ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ada38:L4ada38:{c.instructions+=2;NFSU2_TR(0x4ada38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ada39:{NFSU2_TR(0x4ada39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ada40:L4ada40:{c.instructions+=6;NFSU2_TR(0x4ada40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ada43:{NFSU2_TR(0x4ada43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada45:{NFSU2_TR(0x4ada45);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada47:{NFSU2_TR(0x4ada47);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada49:{NFSU2_TR(0x4ada49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada4a:{NFSU2_TR(0x4ada4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada4full));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ada4f:L4ada4f:{c.instructions+=2;NFSU2_TR(0x4ada4f);
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
B4ada52:{NFSU2_TR(0x4ada52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ada60:L4ada60:{c.instructions+=4;NFSU2_TR(0x4ada60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ada63:{NFSU2_TR(0x4ada63);
u8 U[4];
w4(U+0,u32(0x6fc04e6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada68:{NFSU2_TR(0x4ada68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada69:{NFSU2_TR(0x4ada69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada6eull));
TAIL_STATIC(0x50c900u,50c);
}
B4ada6e:L4ada6e:{c.instructions+=2;NFSU2_TR(0x4ada6e);
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
B4ada71:{NFSU2_TR(0x4ada71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ada80:L4ada80:{c.instructions+=6;NFSU2_TR(0x4ada80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada81:{NFSU2_TR(0x4ada81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada83:{NFSU2_TR(0x4ada83);
__builtin_memmove((R+24),(R+4),4);
}
B4ada85:{NFSU2_TR(0x4ada85);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ada87:{NFSU2_TR(0x4ada87);
w4(R+4,u32(0x874c40ull));
}
B4ada8c:{NFSU2_TR(0x4ada8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada91ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ada91:L4ada91:{c.instructions+=3;NFSU2_TR(0x4ada91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ada93:{NFSU2_TR(0x4ada93);
__builtin_memmove((R+4),(R+24),4);
}
B4ada95:{NFSU2_TR(0x4ada95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ada98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ada98:L4ada98:{c.instructions+=2;NFSU2_TR(0x4ada98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ada99:{NFSU2_TR(0x4ada99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adaa0:L4adaa0:{c.instructions+=6;NFSU2_TR(0x4adaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adaa3:{NFSU2_TR(0x4adaa3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adaa5:{NFSU2_TR(0x4adaa5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adaa7:{NFSU2_TR(0x4adaa7);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adaa9:{NFSU2_TR(0x4adaa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adaaa:{NFSU2_TR(0x4adaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adaafull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adaaf:L4adaaf:{c.instructions+=2;NFSU2_TR(0x4adaaf);
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
B4adab2:{NFSU2_TR(0x4adab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adac0:L4adac0:{c.instructions+=6;NFSU2_TR(0x4adac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adac1:{NFSU2_TR(0x4adac1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adac3:{NFSU2_TR(0x4adac3);
__builtin_memmove((R+24),(R+4),4);
}
B4adac5:{NFSU2_TR(0x4adac5);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adac7:{NFSU2_TR(0x4adac7);
w4(R+4,u32(0x874c40ull));
}
B4adacc:{NFSU2_TR(0x4adacc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adad1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4adad1:L4adad1:{c.instructions+=3;NFSU2_TR(0x4adad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4adad3:{NFSU2_TR(0x4adad3);
__builtin_memmove((R+4),(R+24),4);
}
B4adad5:{NFSU2_TR(0x4adad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adad8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4adad8:L4adad8:{c.instructions+=2;NFSU2_TR(0x4adad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4adad9:{NFSU2_TR(0x4adad9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adae0:L4adae0:{c.instructions+=6;NFSU2_TR(0x4adae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adae3:{NFSU2_TR(0x4adae3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adae5:{NFSU2_TR(0x4adae5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adae7:{NFSU2_TR(0x4adae7);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adae9:{NFSU2_TR(0x4adae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adaea:{NFSU2_TR(0x4adaea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adaefull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adaef:L4adaef:{c.instructions+=2;NFSU2_TR(0x4adaef);
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
B4adaf2:{NFSU2_TR(0x4adaf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adb00:L4adb00:{c.instructions+=8;NFSU2_TR(0x4adb00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb01:{NFSU2_TR(0x4adb01);
__builtin_memmove((R+24),(R+4),4);
}
B4adb03:{NFSU2_TR(0x4adb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adb06:{NFSU2_TR(0x4adb06);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4adb0c:{NFSU2_TR(0x4adb0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb0e:{NFSU2_TR(0x4adb0e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb10:{NFSU2_TR(0x4adb10);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4adb16:{NFSU2_TR(0x4adb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adb1bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4adb1b:L4adb1b:{c.instructions+=3;NFSU2_TR(0x4adb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4adb1d:{NFSU2_TR(0x4adb1d);
__builtin_memmove((R+4),(R+24),4);
}
B4adb1f:{NFSU2_TR(0x4adb1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adb22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4adb22:L4adb22:{c.instructions+=2;NFSU2_TR(0x4adb22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4adb23:{NFSU2_TR(0x4adb23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adb30:L4adb30:{c.instructions+=7;NFSU2_TR(0x4adb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adb33:{NFSU2_TR(0x4adb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adb36:{NFSU2_TR(0x4adb36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb37:{NFSU2_TR(0x4adb37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb39:{NFSU2_TR(0x4adb39);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb3b:{NFSU2_TR(0x4adb3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb3c:{NFSU2_TR(0x4adb3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adb41ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adb41:L4adb41:{c.instructions+=2;NFSU2_TR(0x4adb41);
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
B4adb44:{NFSU2_TR(0x4adb44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adb50:L4adb50:{c.instructions+=8;NFSU2_TR(0x4adb50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb51:{NFSU2_TR(0x4adb51);
__builtin_memmove((R+24),(R+4),4);
}
B4adb53:{NFSU2_TR(0x4adb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adb56:{NFSU2_TR(0x4adb56);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4adb5c:{NFSU2_TR(0x4adb5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb5e:{NFSU2_TR(0x4adb5e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb60:{NFSU2_TR(0x4adb60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4adb66:{NFSU2_TR(0x4adb66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adb6bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4adb6b:L4adb6b:{c.instructions+=3;NFSU2_TR(0x4adb6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4adb6d:{NFSU2_TR(0x4adb6d);
__builtin_memmove((R+4),(R+24),4);
}
B4adb6f:{NFSU2_TR(0x4adb6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adb72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4adb72:L4adb72:{c.instructions+=2;NFSU2_TR(0x4adb72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4adb73:{NFSU2_TR(0x4adb73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adb80:L4adb80:{c.instructions+=7;NFSU2_TR(0x4adb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adb83:{NFSU2_TR(0x4adb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adb86:{NFSU2_TR(0x4adb86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb87:{NFSU2_TR(0x4adb87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb89:{NFSU2_TR(0x4adb89);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb8b:{NFSU2_TR(0x4adb8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adb8c:{NFSU2_TR(0x4adb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adb91ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adb91:L4adb91:{c.instructions+=2;NFSU2_TR(0x4adb91);
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
B4adb94:{NFSU2_TR(0x4adb94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adba0:L4adba0:{c.instructions+=8;NFSU2_TR(0x4adba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adba1:{NFSU2_TR(0x4adba1);
__builtin_memmove((R+24),(R+4),4);
}
B4adba3:{NFSU2_TR(0x4adba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adba6:{NFSU2_TR(0x4adba6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4adbac:{NFSU2_TR(0x4adbac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbae:{NFSU2_TR(0x4adbae);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbb0:{NFSU2_TR(0x4adbb0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4adbb6:{NFSU2_TR(0x4adbb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adbbbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4adbbb:L4adbbb:{c.instructions+=3;NFSU2_TR(0x4adbbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4adbbd:{NFSU2_TR(0x4adbbd);
__builtin_memmove((R+4),(R+24),4);
}
B4adbbf:{NFSU2_TR(0x4adbbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adbc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4adbc2:L4adbc2:{c.instructions+=2;NFSU2_TR(0x4adbc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4adbc3:{NFSU2_TR(0x4adbc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adbd0:L4adbd0:{c.instructions+=7;NFSU2_TR(0x4adbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adbd3:{NFSU2_TR(0x4adbd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adbd6:{NFSU2_TR(0x4adbd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbd7:{NFSU2_TR(0x4adbd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbd9:{NFSU2_TR(0x4adbd9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbdb:{NFSU2_TR(0x4adbdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbdc:{NFSU2_TR(0x4adbdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adbe1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adbe1:L4adbe1:{c.instructions+=2;NFSU2_TR(0x4adbe1);
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
B4adbe4:{NFSU2_TR(0x4adbe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adbf0:L4adbf0:{c.instructions+=8;NFSU2_TR(0x4adbf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbf1:{NFSU2_TR(0x4adbf1);
__builtin_memmove((R+24),(R+4),4);
}
B4adbf3:{NFSU2_TR(0x4adbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adbf6:{NFSU2_TR(0x4adbf6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4adbfc:{NFSU2_TR(0x4adbfc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adbfe:{NFSU2_TR(0x4adbfe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc00:{NFSU2_TR(0x4adc00);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4adc06:{NFSU2_TR(0x4adc06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adc0bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4adc0b:L4adc0b:{c.instructions+=3;NFSU2_TR(0x4adc0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4adc0d:{NFSU2_TR(0x4adc0d);
__builtin_memmove((R+4),(R+24),4);
}
B4adc0f:{NFSU2_TR(0x4adc0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adc12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4adc12:L4adc12:{c.instructions+=2;NFSU2_TR(0x4adc12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4adc13:{NFSU2_TR(0x4adc13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adc20:L4adc20:{c.instructions+=7;NFSU2_TR(0x4adc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adc23:{NFSU2_TR(0x4adc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adc26:{NFSU2_TR(0x4adc26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc27:{NFSU2_TR(0x4adc27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc29:{NFSU2_TR(0x4adc29);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc2b:{NFSU2_TR(0x4adc2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc2c:{NFSU2_TR(0x4adc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adc31ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adc31:L4adc31:{c.instructions+=2;NFSU2_TR(0x4adc31);
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
B4adc34:{NFSU2_TR(0x4adc34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adc40:L4adc40:{c.instructions+=7;NFSU2_TR(0x4adc40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adc43:{NFSU2_TR(0x4adc43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adc46:{NFSU2_TR(0x4adc46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc47:{NFSU2_TR(0x4adc47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc49:{NFSU2_TR(0x4adc49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc4b:{NFSU2_TR(0x4adc4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc4c:{NFSU2_TR(0x4adc4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adc51ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adc51:L4adc51:{c.instructions+=2;NFSU2_TR(0x4adc51);
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
B4adc54:{NFSU2_TR(0x4adc54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adc60:L4adc60:{c.instructions+=7;NFSU2_TR(0x4adc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adc63:{NFSU2_TR(0x4adc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adc66:{NFSU2_TR(0x4adc66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc67:{NFSU2_TR(0x4adc67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc69:{NFSU2_TR(0x4adc69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc6b:{NFSU2_TR(0x4adc6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc6c:{NFSU2_TR(0x4adc6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adc71ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adc71:L4adc71:{c.instructions+=2;NFSU2_TR(0x4adc71);
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
B4adc74:{NFSU2_TR(0x4adc74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adc80:L4adc80:{c.instructions+=7;NFSU2_TR(0x4adc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adc83:{NFSU2_TR(0x4adc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adc86:{NFSU2_TR(0x4adc86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc87:{NFSU2_TR(0x4adc87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc89:{NFSU2_TR(0x4adc89);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc8b:{NFSU2_TR(0x4adc8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adc8c:{NFSU2_TR(0x4adc8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adc91ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adc91:L4adc91:{c.instructions+=2;NFSU2_TR(0x4adc91);
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
B4adc94:{NFSU2_TR(0x4adc94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adca0:L4adca0:{c.instructions+=7;NFSU2_TR(0x4adca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adca3:{NFSU2_TR(0x4adca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adca6:{NFSU2_TR(0x4adca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adca7:{NFSU2_TR(0x4adca7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adca9:{NFSU2_TR(0x4adca9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adcab:{NFSU2_TR(0x4adcab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adcac:{NFSU2_TR(0x4adcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adcb1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adcb1:L4adcb1:{c.instructions+=2;NFSU2_TR(0x4adcb1);
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
B4adcb4:{NFSU2_TR(0x4adcb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adcc0:L4adcc0:{c.instructions+=7;NFSU2_TR(0x4adcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adcc3:{NFSU2_TR(0x4adcc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adcc6:{NFSU2_TR(0x4adcc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adcc7:{NFSU2_TR(0x4adcc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adcc9:{NFSU2_TR(0x4adcc9);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adccb:{NFSU2_TR(0x4adccb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adccc:{NFSU2_TR(0x4adccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adcd1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adcd1:L4adcd1:{c.instructions+=2;NFSU2_TR(0x4adcd1);
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
B4adcd4:{NFSU2_TR(0x4adcd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adce0:L4adce0:{c.instructions+=7;NFSU2_TR(0x4adce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adce3:{NFSU2_TR(0x4adce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adce6:{NFSU2_TR(0x4adce6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adce7:{NFSU2_TR(0x4adce7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adce9:{NFSU2_TR(0x4adce9);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adceb:{NFSU2_TR(0x4adceb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adcec:{NFSU2_TR(0x4adcec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adcf1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adcf1:L4adcf1:{c.instructions+=2;NFSU2_TR(0x4adcf1);
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
B4adcf4:{NFSU2_TR(0x4adcf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4add00:L4add00:{c.instructions+=7;NFSU2_TR(0x4add00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4add03:{NFSU2_TR(0x4add03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4add06:{NFSU2_TR(0x4add06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add07:{NFSU2_TR(0x4add07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add09:{NFSU2_TR(0x4add09);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add0b:{NFSU2_TR(0x4add0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add0c:{NFSU2_TR(0x4add0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4add11ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4add11:L4add11:{c.instructions+=2;NFSU2_TR(0x4add11);
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
B4add14:{NFSU2_TR(0x4add14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4add20:L4add20:{c.instructions+=7;NFSU2_TR(0x4add20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4add23:{NFSU2_TR(0x4add23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4add26:{NFSU2_TR(0x4add26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add27:{NFSU2_TR(0x4add27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add29:{NFSU2_TR(0x4add29);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add2b:{NFSU2_TR(0x4add2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add2c:{NFSU2_TR(0x4add2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4add31ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4add31:L4add31:{c.instructions+=2;NFSU2_TR(0x4add31);
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
B4add34:{NFSU2_TR(0x4add34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4add40:L4add40:{c.instructions+=7;NFSU2_TR(0x4add40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4add43:{NFSU2_TR(0x4add43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4add46:{NFSU2_TR(0x4add46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add47:{NFSU2_TR(0x4add47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add49:{NFSU2_TR(0x4add49);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add4b:{NFSU2_TR(0x4add4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add4c:{NFSU2_TR(0x4add4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4add51ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4add51:L4add51:{c.instructions+=2;NFSU2_TR(0x4add51);
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
B4add54:{NFSU2_TR(0x4add54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4add60:L4add60:{c.instructions+=7;NFSU2_TR(0x4add60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4add63:{NFSU2_TR(0x4add63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4add66:{NFSU2_TR(0x4add66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add67:{NFSU2_TR(0x4add67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add69:{NFSU2_TR(0x4add69);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add6b:{NFSU2_TR(0x4add6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add6c:{NFSU2_TR(0x4add6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4add71ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4add71:L4add71:{c.instructions+=2;NFSU2_TR(0x4add71);
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
B4add74:{NFSU2_TR(0x4add74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4add80:L4add80:{c.instructions+=7;NFSU2_TR(0x4add80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4add83:{NFSU2_TR(0x4add83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4add86:{NFSU2_TR(0x4add86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add87:{NFSU2_TR(0x4add87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add89:{NFSU2_TR(0x4add89);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add8b:{NFSU2_TR(0x4add8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4add8c:{NFSU2_TR(0x4add8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4add91ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4add91:L4add91:{c.instructions+=2;NFSU2_TR(0x4add91);
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
B4add94:{NFSU2_TR(0x4add94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adda0:L4adda0:{c.instructions+=7;NFSU2_TR(0x4adda0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adda3:{NFSU2_TR(0x4adda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adda6:{NFSU2_TR(0x4adda6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adda7:{NFSU2_TR(0x4adda7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adda9:{NFSU2_TR(0x4adda9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addab:{NFSU2_TR(0x4addab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addac:{NFSU2_TR(0x4addac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4addb1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4addb1:L4addb1:{c.instructions+=2;NFSU2_TR(0x4addb1);
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
B4addb4:{NFSU2_TR(0x4addb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4addc0:L4addc0:{c.instructions+=7;NFSU2_TR(0x4addc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4addc3:{NFSU2_TR(0x4addc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4addc6:{NFSU2_TR(0x4addc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addc7:{NFSU2_TR(0x4addc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addc9:{NFSU2_TR(0x4addc9);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addcb:{NFSU2_TR(0x4addcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addcc:{NFSU2_TR(0x4addcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4addd1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4addd1:L4addd1:{c.instructions+=2;NFSU2_TR(0x4addd1);
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
B4addd4:{NFSU2_TR(0x4addd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adde0:L4adde0:{c.instructions+=7;NFSU2_TR(0x4adde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adde3:{NFSU2_TR(0x4adde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adde6:{NFSU2_TR(0x4adde6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adde7:{NFSU2_TR(0x4adde7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adde9:{NFSU2_TR(0x4adde9);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addeb:{NFSU2_TR(0x4addeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4addec:{NFSU2_TR(0x4addec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4addf1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4addf1:L4addf1:{c.instructions+=2;NFSU2_TR(0x4addf1);
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
B4addf4:{NFSU2_TR(0x4addf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ade00:L4ade00:{c.instructions+=7;NFSU2_TR(0x4ade00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ade03:{NFSU2_TR(0x4ade03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ade06:{NFSU2_TR(0x4ade06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade07:{NFSU2_TR(0x4ade07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade09:{NFSU2_TR(0x4ade09);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade0b:{NFSU2_TR(0x4ade0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade0c:{NFSU2_TR(0x4ade0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ade11ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ade11:L4ade11:{c.instructions+=2;NFSU2_TR(0x4ade11);
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
B4ade14:{NFSU2_TR(0x4ade14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ade20:L4ade20:{c.instructions+=7;NFSU2_TR(0x4ade20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ade23:{NFSU2_TR(0x4ade23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ade26:{NFSU2_TR(0x4ade26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade27:{NFSU2_TR(0x4ade27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade29:{NFSU2_TR(0x4ade29);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade2b:{NFSU2_TR(0x4ade2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade2c:{NFSU2_TR(0x4ade2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ade31ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ade31:L4ade31:{c.instructions+=2;NFSU2_TR(0x4ade31);
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
B4ade34:{NFSU2_TR(0x4ade34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ade40:L4ade40:{c.instructions+=7;NFSU2_TR(0x4ade40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ade43:{NFSU2_TR(0x4ade43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ade46:{NFSU2_TR(0x4ade46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade47:{NFSU2_TR(0x4ade47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade49:{NFSU2_TR(0x4ade49);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade4b:{NFSU2_TR(0x4ade4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade4c:{NFSU2_TR(0x4ade4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ade51ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ade51:L4ade51:{c.instructions+=2;NFSU2_TR(0x4ade51);
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
B4ade54:{NFSU2_TR(0x4ade54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ade60:L4ade60:{c.instructions+=7;NFSU2_TR(0x4ade60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ade63:{NFSU2_TR(0x4ade63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ade66:{NFSU2_TR(0x4ade66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade67:{NFSU2_TR(0x4ade67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade69:{NFSU2_TR(0x4ade69);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade6b:{NFSU2_TR(0x4ade6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade6c:{NFSU2_TR(0x4ade6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ade71ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ade71:L4ade71:{c.instructions+=2;NFSU2_TR(0x4ade71);
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
B4ade74:{NFSU2_TR(0x4ade74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ade80:L4ade80:{c.instructions+=7;NFSU2_TR(0x4ade80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ade83:{NFSU2_TR(0x4ade83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ade86:{NFSU2_TR(0x4ade86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade87:{NFSU2_TR(0x4ade87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade89:{NFSU2_TR(0x4ade89);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade8b:{NFSU2_TR(0x4ade8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ade8c:{NFSU2_TR(0x4ade8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ade91ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ade91:L4ade91:{c.instructions+=2;NFSU2_TR(0x4ade91);
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
B4ade94:{NFSU2_TR(0x4ade94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adea0:L4adea0:{c.instructions+=7;NFSU2_TR(0x4adea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adea3:{NFSU2_TR(0x4adea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adea6:{NFSU2_TR(0x4adea6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adea7:{NFSU2_TR(0x4adea7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adea9:{NFSU2_TR(0x4adea9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adeab:{NFSU2_TR(0x4adeab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adeac:{NFSU2_TR(0x4adeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adeb1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adeb1:L4adeb1:{c.instructions+=2;NFSU2_TR(0x4adeb1);
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
B4adeb4:{NFSU2_TR(0x4adeb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adec0:L4adec0:{c.instructions+=7;NFSU2_TR(0x4adec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adec3:{NFSU2_TR(0x4adec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adec6:{NFSU2_TR(0x4adec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adec7:{NFSU2_TR(0x4adec7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adec9:{NFSU2_TR(0x4adec9);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adecb:{NFSU2_TR(0x4adecb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adecc:{NFSU2_TR(0x4adecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aded1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4aded1:L4aded1:{c.instructions+=2;NFSU2_TR(0x4aded1);
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
B4aded4:{NFSU2_TR(0x4aded4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adee0:L4adee0:{c.instructions+=7;NFSU2_TR(0x4adee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adee3:{NFSU2_TR(0x4adee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adee6:{NFSU2_TR(0x4adee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adee7:{NFSU2_TR(0x4adee7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adee9:{NFSU2_TR(0x4adee9);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adeeb:{NFSU2_TR(0x4adeeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adeec:{NFSU2_TR(0x4adeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adef1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adef1:L4adef1:{c.instructions+=2;NFSU2_TR(0x4adef1);
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
B4adef4:{NFSU2_TR(0x4adef4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adf00:L4adf00:{c.instructions+=7;NFSU2_TR(0x4adf00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adf03:{NFSU2_TR(0x4adf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adf06:{NFSU2_TR(0x4adf06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf07:{NFSU2_TR(0x4adf07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf09:{NFSU2_TR(0x4adf09);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf0b:{NFSU2_TR(0x4adf0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf0c:{NFSU2_TR(0x4adf0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adf11ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adf11:L4adf11:{c.instructions+=2;NFSU2_TR(0x4adf11);
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
B4adf14:{NFSU2_TR(0x4adf14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adf20:L4adf20:{c.instructions+=7;NFSU2_TR(0x4adf20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adf23:{NFSU2_TR(0x4adf23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adf26:{NFSU2_TR(0x4adf26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf27:{NFSU2_TR(0x4adf27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf29:{NFSU2_TR(0x4adf29);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf2b:{NFSU2_TR(0x4adf2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf2c:{NFSU2_TR(0x4adf2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adf31ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adf31:L4adf31:{c.instructions+=2;NFSU2_TR(0x4adf31);
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
B4adf34:{NFSU2_TR(0x4adf34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adf40:L4adf40:{c.instructions+=7;NFSU2_TR(0x4adf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adf43:{NFSU2_TR(0x4adf43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adf46:{NFSU2_TR(0x4adf46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf47:{NFSU2_TR(0x4adf47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf49:{NFSU2_TR(0x4adf49);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf4b:{NFSU2_TR(0x4adf4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf4c:{NFSU2_TR(0x4adf4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adf51ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adf51:L4adf51:{c.instructions+=2;NFSU2_TR(0x4adf51);
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
B4adf54:{NFSU2_TR(0x4adf54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adf60:L4adf60:{c.instructions+=7;NFSU2_TR(0x4adf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adf63:{NFSU2_TR(0x4adf63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adf66:{NFSU2_TR(0x4adf66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf67:{NFSU2_TR(0x4adf67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf69:{NFSU2_TR(0x4adf69);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf6b:{NFSU2_TR(0x4adf6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf6c:{NFSU2_TR(0x4adf6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adf71ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adf71:L4adf71:{c.instructions+=2;NFSU2_TR(0x4adf71);
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
B4adf74:{NFSU2_TR(0x4adf74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adf80:L4adf80:{c.instructions+=7;NFSU2_TR(0x4adf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adf83:{NFSU2_TR(0x4adf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adf86:{NFSU2_TR(0x4adf86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf87:{NFSU2_TR(0x4adf87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf89:{NFSU2_TR(0x4adf89);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf8b:{NFSU2_TR(0x4adf8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adf8c:{NFSU2_TR(0x4adf8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adf91ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adf91:L4adf91:{c.instructions+=2;NFSU2_TR(0x4adf91);
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
B4adf94:{NFSU2_TR(0x4adf94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adfa0:L4adfa0:{c.instructions+=7;NFSU2_TR(0x4adfa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adfa3:{NFSU2_TR(0x4adfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adfa6:{NFSU2_TR(0x4adfa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfa7:{NFSU2_TR(0x4adfa7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfa9:{NFSU2_TR(0x4adfa9);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfab:{NFSU2_TR(0x4adfab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfac:{NFSU2_TR(0x4adfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adfb1ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4adfb1:L4adfb1:{c.instructions+=2;NFSU2_TR(0x4adfb1);
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
B4adfb4:{NFSU2_TR(0x4adfb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adfc0:L4adfc0:{c.instructions+=8;NFSU2_TR(0x4adfc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfc1:{NFSU2_TR(0x4adfc1);
__builtin_memmove((R+24),(R+4),4);
}
B4adfc3:{NFSU2_TR(0x4adfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adfc6:{NFSU2_TR(0x4adfc6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4adfcc:{NFSU2_TR(0x4adfcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfce:{NFSU2_TR(0x4adfce);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adfd0:{NFSU2_TR(0x4adfd0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4adfd6:{NFSU2_TR(0x4adfd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adfdbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4adfdb:L4adfdb:{c.instructions+=3;NFSU2_TR(0x4adfdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4adfdd:{NFSU2_TR(0x4adfdd);
__builtin_memmove((R+4),(R+24),4);
}
B4adfdf:{NFSU2_TR(0x4adfdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4adfe2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4adfe2:L4adfe2:{c.instructions+=2;NFSU2_TR(0x4adfe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4adfe3:{NFSU2_TR(0x4adfe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4adff0:L4adff0:{c.instructions+=7;NFSU2_TR(0x4adff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4adff3:{NFSU2_TR(0x4adff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4adff6:{NFSU2_TR(0x4adff6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adff7:{NFSU2_TR(0x4adff7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adff9:{NFSU2_TR(0x4adff9);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adffb:{NFSU2_TR(0x4adffb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4adffc:{NFSU2_TR(0x4adffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae001ull));
TAIL_STATIC(0x4acf40u,4ac);
}
XIT:NFSU2_TR_EXIT(0x4ad,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
