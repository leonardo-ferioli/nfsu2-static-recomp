#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_449(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_451(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x450,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x450,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_450(u8* __restrict R,Cpu& c);
u32 page_450(Cpu& c){return body_450(c.regs.data(),c);}
__attribute__((noinline)) u32 body_450(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x450004:goto L450004;
case 0x450005:c.instructions+=4;goto B450005;
case 0x450006:c.instructions+=3;goto B450006;
case 0x450007:c.instructions+=2;goto B450007;
case 0x45000a:c.instructions+=1;goto B45000a;
case 0x45000d:goto L45000d;
case 0x450013:c.instructions+=1;goto B450013;
case 0x450018:goto L450018;
case 0x45001e:c.instructions+=6;goto B45001e;
case 0x450025:c.instructions+=5;goto B450025;
case 0x450026:c.instructions+=4;goto B450026;
case 0x450027:c.instructions+=3;goto B450027;
case 0x450028:c.instructions+=2;goto B450028;
case 0x45002b:c.instructions+=1;goto B45002b;
case 0x45002e:goto L45002e;
case 0x45002f:c.instructions+=5;goto B45002f;
case 0x450030:c.instructions+=4;goto B450030;
case 0x450032:c.instructions+=3;goto B450032;
case 0x450033:c.instructions+=2;goto B450033;
case 0x450036:c.instructions+=1;goto B450036;
case 0x450040:goto L450040;
case 0x450041:c.instructions+=17;goto B450041;
case 0x450043:c.instructions+=16;goto B450043;
case 0x450046:c.instructions+=15;goto B450046;
case 0x45004c:c.instructions+=14;goto B45004c;
case 0x450052:c.instructions+=13;goto B450052;
case 0x450053:c.instructions+=12;goto B450053;
case 0x450054:c.instructions+=11;goto B450054;
case 0x450057:c.instructions+=10;goto B450057;
case 0x45005a:c.instructions+=9;goto B45005a;
case 0x45005b:c.instructions+=8;goto B45005b;
case 0x45005d:c.instructions+=7;goto B45005d;
case 0x450065:c.instructions+=6;goto B450065;
case 0x45006d:c.instructions+=5;goto B45006d;
case 0x450075:c.instructions+=4;goto B450075;
case 0x45007d:c.instructions+=3;goto B45007d;
case 0x450085:c.instructions+=2;goto B450085;
case 0x45008d:c.instructions+=1;goto B45008d;
case 0x450093:goto L450093;
case 0x450096:c.instructions+=7;goto B450096;
case 0x450098:c.instructions+=6;goto B450098;
case 0x45009b:c.instructions+=5;goto B45009b;
case 0x45009c:c.instructions+=4;goto B45009c;
case 0x45009d:c.instructions+=3;goto B45009d;
case 0x45009e:c.instructions+=2;goto B45009e;
case 0x4500a0:c.instructions+=1;goto B4500a0;
case 0x4500a5:goto L4500a5;
case 0x4500a7:c.instructions+=2;goto B4500a7;
case 0x4500a9:c.instructions+=1;goto B4500a9;
case 0x4500af:goto L4500af;
case 0x4500b2:c.instructions+=1;goto B4500b2;
case 0x4500b8:goto L4500b8;
case 0x4500bb:c.instructions+=8;goto B4500bb;
case 0x4500bd:c.instructions+=7;goto B4500bd;
case 0x4500c0:c.instructions+=6;goto B4500c0;
case 0x4500c1:c.instructions+=5;goto B4500c1;
case 0x4500c2:c.instructions+=4;goto B4500c2;
case 0x4500c3:c.instructions+=3;goto B4500c3;
case 0x4500c4:c.instructions+=2;goto B4500c4;
case 0x4500c6:c.instructions+=1;goto B4500c6;
case 0x4500cb:goto L4500cb;
case 0x4500cd:c.instructions+=1;goto B4500cd;
case 0x4500d3:goto L4500d3;
case 0x4500d7:c.instructions+=4;goto B4500d7;
case 0x4500d8:c.instructions+=3;goto B4500d8;
case 0x4500da:c.instructions+=2;goto B4500da;
case 0x4500dc:c.instructions+=1;goto B4500dc;
case 0x4500e1:goto L4500e1;
case 0x4500e5:c.instructions+=4;goto B4500e5;
case 0x4500e6:c.instructions+=3;goto B4500e6;
case 0x4500e8:c.instructions+=2;goto B4500e8;
case 0x4500ea:c.instructions+=1;goto B4500ea;
case 0x4500ef:goto L4500ef;
case 0x4500f3:c.instructions+=16;goto B4500f3;
case 0x4500f7:c.instructions+=15;goto B4500f7;
case 0x4500fb:c.instructions+=14;goto B4500fb;
case 0x4500ff:c.instructions+=13;goto B4500ff;
case 0x450100:c.instructions+=12;goto B450100;
case 0x450104:c.instructions+=11;goto B450104;
case 0x450106:c.instructions+=10;goto B450106;
case 0x45010a:c.instructions+=9;goto B45010a;
case 0x45010c:c.instructions+=8;goto B45010c;
case 0x450110:c.instructions+=7;goto B450110;
case 0x450114:c.instructions+=6;goto B450114;
case 0x450118:c.instructions+=5;goto B450118;
case 0x45011a:c.instructions+=4;goto B45011a;
case 0x45011e:c.instructions+=3;goto B45011e;
case 0x450125:c.instructions+=2;goto B450125;
case 0x450129:c.instructions+=1;goto B450129;
case 0x45012e:goto L45012e;
case 0x450132:c.instructions+=4;goto B450132;
case 0x450133:c.instructions+=3;goto B450133;
case 0x450135:c.instructions+=2;goto B450135;
case 0x450137:c.instructions+=1;goto B450137;
case 0x45013c:goto L45013c;
case 0x450140:c.instructions+=19;goto B450140;
case 0x450144:c.instructions+=18;goto B450144;
case 0x450148:c.instructions+=17;goto B450148;
case 0x45014c:c.instructions+=16;goto B45014c;
case 0x45014d:c.instructions+=15;goto B45014d;
case 0x450151:c.instructions+=14;goto B450151;
case 0x450153:c.instructions+=13;goto B450153;
case 0x450157:c.instructions+=12;goto B450157;
case 0x450159:c.instructions+=11;goto B450159;
case 0x45015d:c.instructions+=10;goto B45015d;
case 0x450164:c.instructions+=9;goto B450164;
case 0x45016b:c.instructions+=8;goto B45016b;
case 0x45016d:c.instructions+=7;goto B45016d;
case 0x450171:c.instructions+=6;goto B450171;
case 0x450175:c.instructions+=5;goto B450175;
case 0x450179:c.instructions+=4;goto B450179;
case 0x45017c:c.instructions+=3;goto B45017c;
case 0x45017f:c.instructions+=2;goto B45017f;
case 0x450186:c.instructions+=1;goto B450186;
case 0x45018b:goto L45018b;
case 0x45018f:c.instructions+=4;goto B45018f;
case 0x450190:c.instructions+=3;goto B450190;
case 0x450192:c.instructions+=2;goto B450192;
case 0x450194:c.instructions+=1;goto B450194;
case 0x450199:goto L450199;
case 0x45019d:c.instructions+=16;goto B45019d;
case 0x4501a1:c.instructions+=15;goto B4501a1;
case 0x4501a5:c.instructions+=14;goto B4501a5;
case 0x4501a9:c.instructions+=13;goto B4501a9;
case 0x4501aa:c.instructions+=12;goto B4501aa;
case 0x4501ae:c.instructions+=11;goto B4501ae;
case 0x4501b0:c.instructions+=10;goto B4501b0;
case 0x4501b4:c.instructions+=9;goto B4501b4;
case 0x4501b8:c.instructions+=8;goto B4501b8;
case 0x4501bf:c.instructions+=7;goto B4501bf;
case 0x4501c6:c.instructions+=6;goto B4501c6;
case 0x4501c8:c.instructions+=5;goto B4501c8;
case 0x4501cf:c.instructions+=4;goto B4501cf;
case 0x4501d6:c.instructions+=3;goto B4501d6;
case 0x4501dd:c.instructions+=2;goto B4501dd;
case 0x4501df:c.instructions+=1;goto B4501df;
case 0x4501e4:goto L4501e4;
case 0x4501e8:c.instructions+=4;goto B4501e8;
case 0x4501e9:c.instructions+=3;goto B4501e9;
case 0x4501eb:c.instructions+=2;goto B4501eb;
case 0x4501ed:c.instructions+=1;goto B4501ed;
case 0x4501f2:goto L4501f2;
case 0x4501f6:c.instructions+=19;goto B4501f6;
case 0x4501fa:c.instructions+=18;goto B4501fa;
case 0x4501fd:c.instructions+=17;goto B4501fd;
case 0x450201:c.instructions+=16;goto B450201;
case 0x450202:c.instructions+=15;goto B450202;
case 0x450206:c.instructions+=14;goto B450206;
case 0x450207:c.instructions+=13;goto B450207;
case 0x45020b:c.instructions+=12;goto B45020b;
case 0x45020d:c.instructions+=11;goto B45020d;
case 0x450211:c.instructions+=10;goto B450211;
case 0x450218:c.instructions+=9;goto B450218;
case 0x45021f:c.instructions+=8;goto B45021f;
case 0x450221:c.instructions+=7;goto B450221;
case 0x450228:c.instructions+=6;goto B450228;
case 0x45022f:c.instructions+=5;goto B45022f;
case 0x450236:c.instructions+=4;goto B450236;
case 0x450239:c.instructions+=3;goto B450239;
case 0x45023c:c.instructions+=2;goto B45023c;
case 0x450243:c.instructions+=1;goto B450243;
case 0x450248:goto L450248;
case 0x45024b:c.instructions+=5;goto B45024b;
case 0x45024f:c.instructions+=4;goto B45024f;
case 0x450250:c.instructions+=3;goto B450250;
case 0x450251:c.instructions+=2;goto B450251;
case 0x450253:c.instructions+=1;goto B450253;
case 0x450258:goto L450258;
case 0x45025c:c.instructions+=9;goto B45025c;
case 0x450260:c.instructions+=8;goto B450260;
case 0x450264:c.instructions+=7;goto B450264;
case 0x45026a:c.instructions+=6;goto B45026a;
case 0x45026c:c.instructions+=5;goto B45026c;
case 0x450270:c.instructions+=4;goto B450270;
case 0x450276:c.instructions+=3;goto B450276;
case 0x450278:c.instructions+=2;goto B450278;
case 0x45027b:c.instructions+=1;goto B45027b;
case 0x45027d:goto L45027d;
case 0x45027f:c.instructions+=3;goto B45027f;
case 0x450283:c.instructions+=2;goto B450283;
case 0x450287:c.instructions+=1;goto B450287;
case 0x450289:goto L450289;
case 0x45028c:c.instructions+=26;goto B45028c;
case 0x450290:c.instructions+=25;goto B450290;
case 0x450297:c.instructions+=24;goto B450297;
case 0x450299:c.instructions+=23;goto B450299;
case 0x45029d:c.instructions+=22;goto B45029d;
case 0x45029f:c.instructions+=21;goto B45029f;
case 0x4502a3:c.instructions+=20;goto B4502a3;
case 0x4502a7:c.instructions+=19;goto B4502a7;
case 0x4502a9:c.instructions+=18;goto B4502a9;
case 0x4502ad:c.instructions+=17;goto B4502ad;
case 0x4502b1:c.instructions+=16;goto B4502b1;
case 0x4502b3:c.instructions+=15;goto B4502b3;
case 0x4502b4:c.instructions+=14;goto B4502b4;
case 0x4502b6:c.instructions+=13;goto B4502b6;
case 0x4502b7:c.instructions+=12;goto B4502b7;
case 0x4502bb:c.instructions+=11;goto B4502bb;
case 0x4502bc:c.instructions+=10;goto B4502bc;
case 0x4502c0:c.instructions+=9;goto B4502c0;
case 0x4502c1:c.instructions+=8;goto B4502c1;
case 0x4502c5:c.instructions+=7;goto B4502c5;
case 0x4502cc:c.instructions+=6;goto B4502cc;
case 0x4502d0:c.instructions+=5;goto B4502d0;
case 0x4502d4:c.instructions+=4;goto B4502d4;
case 0x4502db:c.instructions+=3;goto B4502db;
case 0x4502df:c.instructions+=2;goto B4502df;
case 0x4502e3:c.instructions+=1;goto B4502e3;
case 0x4502e8:goto L4502e8;
case 0x4502ec:c.instructions+=16;goto B4502ec;
case 0x4502ed:c.instructions+=15;goto B4502ed;
case 0x4502f1:c.instructions+=14;goto B4502f1;
case 0x4502f8:c.instructions+=13;goto B4502f8;
case 0x4502f9:c.instructions+=12;goto B4502f9;
case 0x4502fd:c.instructions+=11;goto B4502fd;
case 0x450301:c.instructions+=10;goto B450301;
case 0x450302:c.instructions+=9;goto B450302;
case 0x450309:c.instructions+=8;goto B450309;
case 0x45030d:c.instructions+=7;goto B45030d;
case 0x450311:c.instructions+=6;goto B450311;
case 0x450312:c.instructions+=5;goto B450312;
case 0x450316:c.instructions+=4;goto B450316;
case 0x45031d:c.instructions+=3;goto B45031d;
case 0x450321:c.instructions+=2;goto B450321;
case 0x450325:c.instructions+=1;goto B450325;
case 0x45032a:goto L45032a;
case 0x45032e:c.instructions+=6;goto B45032e;
case 0x450331:c.instructions+=5;goto B450331;
case 0x450338:c.instructions+=4;goto B450338;
case 0x45033c:c.instructions+=3;goto B45033c;
case 0x450343:c.instructions+=2;goto B450343;
case 0x450345:c.instructions+=1;goto B450345;
case 0x45034a:goto L45034a;
case 0x450351:c.instructions+=4;goto B450351;
case 0x450352:c.instructions+=3;goto B450352;
case 0x450354:c.instructions+=2;goto B450354;
case 0x450356:c.instructions+=1;goto B450356;
case 0x45035b:goto L45035b;
case 0x450362:c.instructions+=4;goto B450362;
case 0x450363:c.instructions+=3;goto B450363;
case 0x450365:c.instructions+=2;goto B450365;
case 0x450367:c.instructions+=1;goto B450367;
case 0x45036c:goto L45036c;
case 0x450370:c.instructions+=4;goto B450370;
case 0x450371:c.instructions+=3;goto B450371;
case 0x450373:c.instructions+=2;goto B450373;
case 0x450375:c.instructions+=1;goto B450375;
case 0x45037a:goto L45037a;
case 0x45037e:c.instructions+=4;goto B45037e;
case 0x45037f:c.instructions+=3;goto B45037f;
case 0x450381:c.instructions+=2;goto B450381;
case 0x450383:c.instructions+=1;goto B450383;
case 0x450388:goto L450388;
case 0x45038f:c.instructions+=38;goto B45038f;
case 0x450396:c.instructions+=37;goto B450396;
case 0x450399:c.instructions+=36;goto B450399;
case 0x4503a0:c.instructions+=35;goto B4503a0;
case 0x4503a7:c.instructions+=34;goto B4503a7;
case 0x4503ae:c.instructions+=33;goto B4503ae;
case 0x4503b5:c.instructions+=32;goto B4503b5;
case 0x4503b9:c.instructions+=31;goto B4503b9;
case 0x4503bd:c.instructions+=30;goto B4503bd;
case 0x4503c1:c.instructions+=29;goto B4503c1;
case 0x4503c5:c.instructions+=28;goto B4503c5;
case 0x4503c9:c.instructions+=27;goto B4503c9;
case 0x4503cd:c.instructions+=26;goto B4503cd;
case 0x4503d1:c.instructions+=25;goto B4503d1;
case 0x4503d5:c.instructions+=24;goto B4503d5;
case 0x4503d9:c.instructions+=23;goto B4503d9;
case 0x4503dd:c.instructions+=22;goto B4503dd;
case 0x4503e1:c.instructions+=21;goto B4503e1;
case 0x4503e5:c.instructions+=20;goto B4503e5;
case 0x4503e7:c.instructions+=19;goto B4503e7;
case 0x4503eb:c.instructions+=18;goto B4503eb;
case 0x4503ef:c.instructions+=17;goto B4503ef;
case 0x4503f3:c.instructions+=16;goto B4503f3;
case 0x4503f7:c.instructions+=15;goto B4503f7;
case 0x4503fb:c.instructions+=14;goto B4503fb;
case 0x4503ff:c.instructions+=13;goto B4503ff;
case 0x450403:c.instructions+=12;goto B450403;
case 0x450407:c.instructions+=11;goto B450407;
case 0x45040b:c.instructions+=10;goto B45040b;
case 0x45040f:c.instructions+=9;goto B45040f;
case 0x450413:c.instructions+=8;goto B450413;
case 0x450417:c.instructions+=7;goto B450417;
case 0x45041b:c.instructions+=6;goto B45041b;
case 0x45041f:c.instructions+=5;goto B45041f;
case 0x450423:c.instructions+=4;goto B450423;
case 0x450427:c.instructions+=3;goto B450427;
case 0x45042a:c.instructions+=2;goto B45042a;
case 0x45042d:c.instructions+=1;goto B45042d;
case 0x450431:goto L450431;
case 0x450434:c.instructions+=21;goto B450434;
case 0x450438:c.instructions+=20;goto B450438;
case 0x45043c:c.instructions+=19;goto B45043c;
case 0x45043e:c.instructions+=18;goto B45043e;
case 0x450442:c.instructions+=17;goto B450442;
case 0x450446:c.instructions+=16;goto B450446;
case 0x450449:c.instructions+=15;goto B450449;
case 0x45044d:c.instructions+=14;goto B45044d;
case 0x450450:c.instructions+=13;goto B450450;
case 0x450453:c.instructions+=12;goto B450453;
case 0x450457:c.instructions+=11;goto B450457;
case 0x450459:c.instructions+=10;goto B450459;
case 0x45045a:c.instructions+=9;goto B45045a;
case 0x45045d:c.instructions+=8;goto B45045d;
case 0x450460:c.instructions+=7;goto B450460;
case 0x450461:c.instructions+=6;goto B450461;
case 0x450464:c.instructions+=5;goto B450464;
case 0x450466:c.instructions+=4;goto B450466;
case 0x450467:c.instructions+=3;goto B450467;
case 0x450469:c.instructions+=2;goto B450469;
case 0x45046a:c.instructions+=1;goto B45046a;
case 0x450470:goto L450470;
case 0x450473:c.instructions+=5;goto B450473;
case 0x450474:c.instructions+=4;goto B450474;
case 0x450476:c.instructions+=3;goto B450476;
case 0x45047c:c.instructions+=2;goto B45047c;
case 0x45047e:c.instructions+=1;goto B45047e;
case 0x450484:goto L450484;
case 0x45048a:c.instructions+=7;goto B45048a;
case 0x45048c:c.instructions+=6;goto B45048c;
case 0x45048d:c.instructions+=5;goto B45048d;
case 0x450491:c.instructions+=4;goto B450491;
case 0x450492:c.instructions+=3;goto B450492;
case 0x450493:c.instructions+=2;goto B450493;
case 0x450497:c.instructions+=1;goto B450497;
case 0x450499:goto L450499;
case 0x45049c:c.instructions+=1;goto B45049c;
case 0x4504a2:goto L4504a2;
case 0x4504a4:c.instructions+=8;goto B4504a4;
case 0x4504aa:c.instructions+=7;goto B4504aa;
case 0x4504b2:c.instructions+=6;goto B4504b2;
case 0x4504b9:c.instructions+=5;goto B4504b9;
case 0x4504bd:c.instructions+=4;goto B4504bd;
case 0x4504c4:c.instructions+=3;goto B4504c4;
case 0x4504c6:c.instructions+=2;goto B4504c6;
case 0x4504ca:c.instructions+=1;goto B4504ca;
case 0x4504cc:goto L4504cc;
case 0x4504cd:c.instructions+=3;goto B4504cd;
case 0x4504ce:c.instructions+=2;goto B4504ce;
case 0x4504d0:c.instructions+=1;goto B4504d0;
case 0x4504d5:goto L4504d5;
case 0x4504dd:c.instructions+=6;goto B4504dd;
case 0x4504e4:c.instructions+=5;goto B4504e4;
case 0x4504e8:c.instructions+=4;goto B4504e8;
case 0x4504ef:c.instructions+=3;goto B4504ef;
case 0x4504f1:c.instructions+=2;goto B4504f1;
case 0x4504f5:c.instructions+=1;goto B4504f5;
case 0x4504f7:goto L4504f7;
case 0x4504f8:c.instructions+=3;goto B4504f8;
case 0x4504f9:c.instructions+=2;goto B4504f9;
case 0x4504fb:c.instructions+=1;goto B4504fb;
case 0x450500:goto L450500;
case 0x450506:c.instructions+=29;goto B450506;
case 0x450508:c.instructions+=28;goto B450508;
case 0x45050b:c.instructions+=27;goto B45050b;
case 0x45050d:c.instructions+=26;goto B45050d;
case 0x450514:c.instructions+=25;goto B450514;
case 0x45051a:c.instructions+=24;goto B45051a;
case 0x45051e:c.instructions+=23;goto B45051e;
case 0x450521:c.instructions+=22;goto B450521;
case 0x450525:c.instructions+=21;goto B450525;
case 0x450527:c.instructions+=20;goto B450527;
case 0x45052d:c.instructions+=19;goto B45052d;
case 0x450533:c.instructions+=18;goto B450533;
case 0x450539:c.instructions+=17;goto B450539;
case 0x45053d:c.instructions+=16;goto B45053d;
case 0x450541:c.instructions+=15;goto B450541;
case 0x450547:c.instructions+=14;goto B450547;
case 0x45054a:c.instructions+=13;goto B45054a;
case 0x450550:c.instructions+=12;goto B450550;
case 0x450556:c.instructions+=11;goto B450556;
case 0x45055c:c.instructions+=10;goto B45055c;
case 0x450562:c.instructions+=9;goto B450562;
case 0x450568:c.instructions+=8;goto B450568;
case 0x45056c:c.instructions+=7;goto B45056c;
case 0x450570:c.instructions+=6;goto B450570;
case 0x450574:c.instructions+=5;goto B450574;
case 0x450577:c.instructions+=4;goto B450577;
case 0x45057a:c.instructions+=3;goto B45057a;
case 0x45057e:c.instructions+=2;goto B45057e;
case 0x450580:c.instructions+=1;goto B450580;
case 0x450582:goto L450582;
case 0x450583:c.instructions+=3;goto B450583;
case 0x450584:c.instructions+=2;goto B450584;
case 0x450586:c.instructions+=1;goto B450586;
case 0x45058b:goto L45058b;
case 0x45058f:c.instructions+=4;goto B45058f;
case 0x450592:c.instructions+=3;goto B450592;
case 0x450596:c.instructions+=2;goto B450596;
case 0x450598:c.instructions+=1;goto B450598;
case 0x45059a:goto L45059a;
case 0x45059b:c.instructions+=3;goto B45059b;
case 0x45059c:c.instructions+=2;goto B45059c;
case 0x45059e:c.instructions+=1;goto B45059e;
case 0x4505a3:goto L4505a3;
case 0x4505a9:c.instructions+=4;goto B4505a9;
case 0x4505ad:c.instructions+=3;goto B4505ad;
case 0x4505b4:c.instructions+=2;goto B4505b4;
case 0x4505ba:c.instructions+=1;goto B4505ba;
case 0x4505c1:goto L4505c1;
case 0x4505c7:c.instructions+=2;goto B4505c7;
case 0x4505c9:c.instructions+=1;goto B4505c9;
case 0x4505cb:goto L4505cb;
case 0x4505ce:c.instructions+=1;goto B4505ce;
case 0x4505d0:goto L4505d0;
case 0x4505d7:c.instructions+=6;goto B4505d7;
case 0x4505d9:c.instructions+=5;goto B4505d9;
case 0x4505df:c.instructions+=4;goto B4505df;
case 0x4505e7:c.instructions+=3;goto B4505e7;
case 0x4505e9:c.instructions+=2;goto B4505e9;
case 0x4505ed:c.instructions+=1;goto B4505ed;
case 0x4505ef:goto L4505ef;
case 0x4505f0:c.instructions+=3;goto B4505f0;
case 0x4505f1:c.instructions+=2;goto B4505f1;
case 0x4505f3:c.instructions+=1;goto B4505f3;
case 0x4505f8:goto L4505f8;
case 0x4505fc:goto L4505fc;
case 0x4505ff:c.instructions+=13;goto B4505ff;
case 0x450603:c.instructions+=12;goto B450603;
case 0x450609:c.instructions+=11;goto B450609;
case 0x45060b:c.instructions+=10;goto B45060b;
case 0x450611:c.instructions+=9;goto B450611;
case 0x450617:c.instructions+=8;goto B450617;
case 0x45061d:c.instructions+=7;goto B45061d;
case 0x450621:c.instructions+=6;goto B450621;
case 0x450625:c.instructions+=5;goto B450625;
case 0x45062b:c.instructions+=4;goto B45062b;
case 0x45062e:c.instructions+=3;goto B45062e;
case 0x450636:c.instructions+=2;goto B450636;
case 0x450638:c.instructions+=1;goto B450638;
case 0x45063a:goto L45063a;
case 0x45063b:c.instructions+=3;goto B45063b;
case 0x45063c:c.instructions+=2;goto B45063c;
case 0x45063e:c.instructions+=1;goto B45063e;
case 0x450643:goto L450643;
case 0x450649:c.instructions+=2;goto B450649;
case 0x45064b:c.instructions+=1;goto B45064b;
case 0x45064d:goto L45064d;
case 0x450650:c.instructions+=1;goto B450650;
case 0x450652:goto L450652;
case 0x450658:c.instructions+=6;goto B450658;
case 0x45065a:c.instructions+=5;goto B45065a;
case 0x45065d:c.instructions+=4;goto B45065d;
case 0x45065f:c.instructions+=3;goto B45065f;
case 0x450666:c.instructions+=2;goto B450666;
case 0x45066c:c.instructions+=1;goto B45066c;
case 0x450673:goto L450673;
case 0x450679:c.instructions+=2;goto B450679;
case 0x45067b:c.instructions+=1;goto B45067b;
case 0x45067d:goto L45067d;
case 0x450680:c.instructions+=1;goto B450680;
case 0x450682:goto L450682;
case 0x450688:c.instructions+=9;goto B450688;
case 0x45068a:c.instructions+=8;goto B45068a;
case 0x45068d:c.instructions+=7;goto B45068d;
case 0x45068f:c.instructions+=6;goto B45068f;
case 0x450695:c.instructions+=5;goto B450695;
case 0x450697:c.instructions+=4;goto B450697;
case 0x45069e:c.instructions+=3;goto B45069e;
case 0x4506a4:c.instructions+=2;goto B4506a4;
case 0x4506a6:c.instructions+=1;goto B4506a6;
case 0x4506ad:goto L4506ad;
case 0x4506b3:c.instructions+=2;goto B4506b3;
case 0x4506b5:c.instructions+=1;goto B4506b5;
case 0x4506b7:goto L4506b7;
case 0x4506ba:c.instructions+=1;goto B4506ba;
case 0x4506bc:goto L4506bc;
case 0x4506c2:c.instructions+=6;goto B4506c2;
case 0x4506c4:c.instructions+=5;goto B4506c4;
case 0x4506c7:c.instructions+=4;goto B4506c7;
case 0x4506ca:c.instructions+=3;goto B4506ca;
case 0x4506d1:c.instructions+=2;goto B4506d1;
case 0x4506d7:c.instructions+=1;goto B4506d7;
case 0x4506de:goto L4506de;
case 0x4506e4:c.instructions+=2;goto B4506e4;
case 0x4506e6:c.instructions+=1;goto B4506e6;
case 0x4506e8:goto L4506e8;
case 0x4506eb:c.instructions+=1;goto B4506eb;
case 0x4506f1:goto L4506f1;
case 0x4506f7:c.instructions+=28;goto B4506f7;
case 0x4506f9:c.instructions+=27;goto B4506f9;
case 0x4506ff:c.instructions+=26;goto B4506ff;
case 0x450702:c.instructions+=25;goto B450702;
case 0x450709:c.instructions+=24;goto B450709;
case 0x45070c:c.instructions+=23;goto B45070c;
case 0x450712:c.instructions+=22;goto B450712;
case 0x450718:c.instructions+=21;goto B450718;
case 0x45071b:c.instructions+=20;goto B45071b;
case 0x45071d:c.instructions+=19;goto B45071d;
case 0x45071f:c.instructions+=18;goto B45071f;
case 0x450725:c.instructions+=17;goto B450725;
case 0x45072c:c.instructions+=16;goto B45072c;
case 0x45072e:c.instructions+=15;goto B45072e;
case 0x450734:c.instructions+=14;goto B450734;
case 0x450737:c.instructions+=13;goto B450737;
case 0x450739:c.instructions+=12;goto B450739;
case 0x45073c:c.instructions+=11;goto B45073c;
case 0x450742:c.instructions+=10;goto B450742;
case 0x450745:c.instructions+=9;goto B450745;
case 0x45074b:c.instructions+=8;goto B45074b;
case 0x450751:c.instructions+=7;goto B450751;
case 0x450757:c.instructions+=6;goto B450757;
case 0x45075a:c.instructions+=5;goto B45075a;
case 0x450761:c.instructions+=4;goto B450761;
case 0x450767:c.instructions+=3;goto B450767;
case 0x45076e:c.instructions+=2;goto B45076e;
case 0x450774:c.instructions+=1;goto B450774;
case 0x45077a:goto L45077a;
case 0x45077b:c.instructions+=2;goto B45077b;
case 0x45077c:c.instructions+=1;goto B45077c;
case 0x45077d:goto L45077d;
case 0x45077e:c.instructions+=2;goto B45077e;
case 0x450781:c.instructions+=1;goto B450781;
case 0x450790:goto L450790;
case 0x450791:c.instructions+=10;goto B450791;
case 0x450793:c.instructions+=9;goto B450793;
case 0x450796:c.instructions+=8;goto B450796;
case 0x45079c:c.instructions+=7;goto B45079c;
case 0x45079d:c.instructions+=6;goto B45079d;
case 0x45079f:c.instructions+=5;goto B45079f;
case 0x4507a6:c.instructions+=4;goto B4507a6;
case 0x4507a7:c.instructions+=3;goto B4507a7;
case 0x4507a8:c.instructions+=2;goto B4507a8;
case 0x4507ac:c.instructions+=1;goto B4507ac;
case 0x4507b2:goto L4507b2;
case 0x4507b8:c.instructions+=11;goto B4507b8;
case 0x4507ba:c.instructions+=10;goto B4507ba;
case 0x4507be:c.instructions+=9;goto B4507be;
case 0x4507bf:c.instructions+=8;goto B4507bf;
case 0x4507c3:c.instructions+=7;goto B4507c3;
case 0x4507c4:c.instructions+=6;goto B4507c4;
case 0x4507c6:c.instructions+=5;goto B4507c6;
case 0x4507c7:c.instructions+=4;goto B4507c7;
case 0x4507c9:c.instructions+=3;goto B4507c9;
case 0x4507d1:c.instructions+=2;goto B4507d1;
case 0x4507d9:c.instructions+=1;goto B4507d9;
case 0x4507de:goto L4507de;
case 0x4507e4:c.instructions+=10;goto B4507e4;
case 0x4507e8:c.instructions+=9;goto B4507e8;
case 0x4507ee:c.instructions+=8;goto B4507ee;
case 0x4507f2:c.instructions+=7;goto B4507f2;
case 0x4507f5:c.instructions+=6;goto B4507f5;
case 0x4507f9:c.instructions+=5;goto B4507f9;
case 0x4507fb:c.instructions+=4;goto B4507fb;
case 0x4507fc:c.instructions+=3;goto B4507fc;
case 0x4507fe:c.instructions+=2;goto B4507fe;
case 0x450802:c.instructions+=1;goto B450802;
case 0x450804:goto L450804;
case 0x450806:c.instructions+=2;goto B450806;
case 0x450808:c.instructions+=1;goto B450808;
case 0x45080a:goto L45080a;
case 0x450810:goto L450810;
case 0x450816:c.instructions+=8;goto B450816;
case 0x450818:c.instructions+=7;goto B450818;
case 0x45081e:c.instructions+=6;goto B45081e;
case 0x450820:c.instructions+=5;goto B450820;
case 0x450826:c.instructions+=4;goto B450826;
case 0x45082c:c.instructions+=3;goto B45082c;
case 0x45082d:c.instructions+=2;goto B45082d;
case 0x45082f:c.instructions+=1;goto B45082f;
case 0x450834:goto L450834;
case 0x450836:goto L450836;
case 0x450838:goto L450838;
case 0x45083b:c.instructions+=5;goto B45083b;
case 0x450841:c.instructions+=4;goto B450841;
case 0x450843:c.instructions+=3;goto B450843;
case 0x450849:c.instructions+=2;goto B450849;
case 0x45084f:c.instructions+=1;goto B45084f;
case 0x450854:goto L450854;
case 0x450856:goto L450856;
case 0x45085a:c.instructions+=7;goto B45085a;
case 0x450860:c.instructions+=6;goto B450860;
case 0x450866:c.instructions+=5;goto B450866;
case 0x45086c:c.instructions+=4;goto B45086c;
case 0x45086d:c.instructions+=3;goto B45086d;
case 0x45086f:c.instructions+=2;goto B45086f;
case 0x450875:c.instructions+=1;goto B450875;
case 0x45087a:goto L45087a;
case 0x45087d:c.instructions+=2;goto B45087d;
case 0x45087f:c.instructions+=1;goto B45087f;
case 0x450885:goto L450885;
case 0x450888:c.instructions+=3;goto B450888;
case 0x45088b:c.instructions+=2;goto B45088b;
case 0x45088d:c.instructions+=1;goto B45088d;
case 0x450893:goto L450893;
case 0x450895:c.instructions+=2;goto B450895;
case 0x450897:c.instructions+=1;goto B450897;
case 0x45089d:goto L45089d;
case 0x4508a0:c.instructions+=2;goto B4508a0;
case 0x4508a2:c.instructions+=1;goto B4508a2;
case 0x4508a8:goto L4508a8;
case 0x4508ac:c.instructions+=1;goto B4508ac;
case 0x4508b2:goto L4508b2;
case 0x4508b6:c.instructions+=5;goto B4508b6;
case 0x4508b7:c.instructions+=4;goto B4508b7;
case 0x4508bb:c.instructions+=3;goto B4508bb;
case 0x4508bc:c.instructions+=2;goto B4508bc;
case 0x4508be:c.instructions+=1;goto B4508be;
case 0x4508c3:goto L4508c3;
case 0x4508c4:c.instructions+=4;goto B4508c4;
case 0x4508c8:c.instructions+=3;goto B4508c8;
case 0x4508c9:c.instructions+=2;goto B4508c9;
case 0x4508cb:c.instructions+=1;goto B4508cb;
case 0x4508d0:goto L4508d0;
case 0x4508d5:c.instructions+=4;goto B4508d5;
case 0x4508d6:c.instructions+=3;goto B4508d6;
case 0x4508d8:c.instructions+=2;goto B4508d8;
case 0x4508dc:c.instructions+=1;goto B4508dc;
case 0x4508e1:goto L4508e1;
case 0x4508e4:c.instructions+=3;goto B4508e4;
case 0x4508e5:c.instructions+=2;goto B4508e5;
case 0x4508e9:c.instructions+=1;goto B4508e9;
case 0x4508ee:goto L4508ee;
case 0x4508f2:c.instructions+=3;goto B4508f2;
case 0x4508f6:c.instructions+=2;goto B4508f6;
case 0x4508f7:c.instructions+=1;goto B4508f7;
case 0x4508fc:goto L4508fc;
case 0x450900:c.instructions+=13;goto B450900;
case 0x450903:c.instructions+=12;goto B450903;
case 0x450905:c.instructions+=11;goto B450905;
case 0x450908:c.instructions+=10;goto B450908;
case 0x45090c:c.instructions+=9;goto B45090c;
case 0x450912:c.instructions+=8;goto B450912;
case 0x450914:c.instructions+=7;goto B450914;
case 0x45091a:c.instructions+=6;goto B45091a;
case 0x45091e:c.instructions+=5;goto B45091e;
case 0x450920:c.instructions+=4;goto B450920;
case 0x450926:c.instructions+=3;goto B450926;
case 0x45092a:c.instructions+=2;goto B45092a;
case 0x45092e:c.instructions+=1;goto B45092e;
case 0x450933:goto L450933;
case 0x450936:c.instructions+=8;goto B450936;
case 0x450938:c.instructions+=7;goto B450938;
case 0x45093c:c.instructions+=6;goto B45093c;
case 0x450940:c.instructions+=5;goto B450940;
case 0x450944:c.instructions+=4;goto B450944;
case 0x450948:c.instructions+=3;goto B450948;
case 0x45094a:c.instructions+=2;goto B45094a;
case 0x45094e:c.instructions+=1;goto B45094e;
case 0x450953:goto L450953;
case 0x450956:c.instructions+=8;goto B450956;
case 0x450958:c.instructions+=7;goto B450958;
case 0x45095c:c.instructions+=6;goto B45095c;
case 0x450960:c.instructions+=5;goto B450960;
case 0x450964:c.instructions+=4;goto B450964;
case 0x450968:c.instructions+=3;goto B450968;
case 0x45096a:c.instructions+=2;goto B45096a;
case 0x45096e:c.instructions+=1;goto B45096e;
case 0x450973:goto L450973;
case 0x450976:c.instructions+=8;goto B450976;
case 0x450978:c.instructions+=7;goto B450978;
case 0x45097c:c.instructions+=6;goto B45097c;
case 0x450980:c.instructions+=5;goto B450980;
case 0x450984:c.instructions+=4;goto B450984;
case 0x450988:c.instructions+=3;goto B450988;
case 0x45098a:c.instructions+=2;goto B45098a;
case 0x45098e:c.instructions+=1;goto B45098e;
case 0x450993:goto L450993;
case 0x450996:c.instructions+=8;goto B450996;
case 0x450998:c.instructions+=7;goto B450998;
case 0x45099c:c.instructions+=6;goto B45099c;
case 0x4509a0:c.instructions+=5;goto B4509a0;
case 0x4509a4:c.instructions+=4;goto B4509a4;
case 0x4509a6:c.instructions+=3;goto B4509a6;
case 0x4509aa:c.instructions+=2;goto B4509aa;
case 0x4509ae:c.instructions+=1;goto B4509ae;
case 0x4509b3:goto L4509b3;
case 0x4509b7:c.instructions+=4;goto B4509b7;
case 0x4509ba:c.instructions+=3;goto B4509ba;
case 0x4509bc:c.instructions+=2;goto B4509bc;
case 0x4509c0:c.instructions+=1;goto B4509c0;
case 0x4509c5:goto L4509c5;
case 0x4509c9:c.instructions+=4;goto B4509c9;
case 0x4509cc:c.instructions+=3;goto B4509cc;
case 0x4509ce:c.instructions+=2;goto B4509ce;
case 0x4509d2:c.instructions+=1;goto B4509d2;
case 0x4509d7:goto L4509d7;
case 0x4509db:c.instructions+=5;goto B4509db;
case 0x4509dc:c.instructions+=4;goto B4509dc;
case 0x4509e3:c.instructions+=3;goto B4509e3;
case 0x4509e4:c.instructions+=2;goto B4509e4;
case 0x4509e6:c.instructions+=1;goto B4509e6;
case 0x4509eb:goto L4509eb;
case 0x4509ec:c.instructions+=4;goto B4509ec;
case 0x4509f0:c.instructions+=3;goto B4509f0;
case 0x4509f1:c.instructions+=2;goto B4509f1;
case 0x4509f3:c.instructions+=1;goto B4509f3;
case 0x4509f8:goto L4509f8;
case 0x4509fb:c.instructions+=4;goto B4509fb;
case 0x4509fd:c.instructions+=3;goto B4509fd;
case 0x4509ff:c.instructions+=2;goto B4509ff;
case 0x450a03:c.instructions+=1;goto B450a03;
case 0x450a08:goto L450a08;
case 0x450a0c:c.instructions+=54;goto B450a0c;
case 0x450a10:c.instructions+=53;goto B450a10;
case 0x450a14:c.instructions+=52;goto B450a14;
case 0x450a18:c.instructions+=51;goto B450a18;
case 0x450a1c:c.instructions+=50;goto B450a1c;
case 0x450a1e:c.instructions+=49;goto B450a1e;
case 0x450a22:c.instructions+=48;goto B450a22;
case 0x450a28:c.instructions+=47;goto B450a28;
case 0x450a2a:c.instructions+=46;goto B450a2a;
case 0x450a30:c.instructions+=45;goto B450a30;
case 0x450a32:c.instructions+=44;goto B450a32;
case 0x450a36:c.instructions+=43;goto B450a36;
case 0x450a3c:c.instructions+=42;goto B450a3c;
case 0x450a42:c.instructions+=41;goto B450a42;
case 0x450a46:c.instructions+=40;goto B450a46;
case 0x450a48:c.instructions+=39;goto B450a48;
case 0x450a4e:c.instructions+=38;goto B450a4e;
case 0x450a50:c.instructions+=37;goto B450a50;
case 0x450a56:c.instructions+=36;goto B450a56;
case 0x450a5a:c.instructions+=35;goto B450a5a;
case 0x450a60:c.instructions+=34;goto B450a60;
case 0x450a64:c.instructions+=33;goto B450a64;
case 0x450a6a:c.instructions+=32;goto B450a6a;
case 0x450a6c:c.instructions+=31;goto B450a6c;
case 0x450a72:c.instructions+=30;goto B450a72;
case 0x450a74:c.instructions+=29;goto B450a74;
case 0x450a7a:c.instructions+=28;goto B450a7a;
case 0x450a7e:c.instructions+=27;goto B450a7e;
case 0x450a84:c.instructions+=26;goto B450a84;
case 0x450a88:c.instructions+=25;goto B450a88;
case 0x450a8e:c.instructions+=24;goto B450a8e;
case 0x450a90:c.instructions+=23;goto B450a90;
case 0x450a96:c.instructions+=22;goto B450a96;
case 0x450a98:c.instructions+=21;goto B450a98;
case 0x450a9e:c.instructions+=20;goto B450a9e;
case 0x450aa2:c.instructions+=19;goto B450aa2;
case 0x450aa8:c.instructions+=18;goto B450aa8;
case 0x450aae:c.instructions+=17;goto B450aae;
case 0x450ab2:c.instructions+=16;goto B450ab2;
case 0x450ab4:c.instructions+=15;goto B450ab4;
case 0x450aba:c.instructions+=14;goto B450aba;
case 0x450abc:c.instructions+=13;goto B450abc;
case 0x450ac2:c.instructions+=12;goto B450ac2;
case 0x450ac6:c.instructions+=11;goto B450ac6;
case 0x450acc:c.instructions+=10;goto B450acc;
case 0x450ad0:c.instructions+=9;goto B450ad0;
case 0x450ad6:c.instructions+=8;goto B450ad6;
case 0x450ad8:c.instructions+=7;goto B450ad8;
case 0x450ade:c.instructions+=6;goto B450ade;
case 0x450ae0:c.instructions+=5;goto B450ae0;
case 0x450ae6:c.instructions+=4;goto B450ae6;
case 0x450aec:c.instructions+=3;goto B450aec;
case 0x450af2:c.instructions+=2;goto B450af2;
case 0x450af8:c.instructions+=1;goto B450af8;
case 0x450afd:goto L450afd;
case 0x450b01:c.instructions+=8;goto B450b01;
case 0x450b05:c.instructions+=7;goto B450b05;
case 0x450b0b:c.instructions+=6;goto B450b0b;
case 0x450b0f:c.instructions+=5;goto B450b0f;
case 0x450b15:c.instructions+=4;goto B450b15;
case 0x450b19:c.instructions+=3;goto B450b19;
case 0x450b1b:c.instructions+=2;goto B450b1b;
case 0x450b21:c.instructions+=1;goto B450b21;
case 0x450b26:goto L450b26;
case 0x450b2a:c.instructions+=8;goto B450b2a;
case 0x450b2e:c.instructions+=7;goto B450b2e;
case 0x450b34:c.instructions+=6;goto B450b34;
case 0x450b38:c.instructions+=5;goto B450b38;
case 0x450b3e:c.instructions+=4;goto B450b3e;
case 0x450b42:c.instructions+=3;goto B450b42;
case 0x450b44:c.instructions+=2;goto B450b44;
case 0x450b4a:c.instructions+=1;goto B450b4a;
case 0x450b4f:goto L450b4f;
case 0x450b56:c.instructions+=4;goto B450b56;
case 0x450b5c:c.instructions+=3;goto B450b5c;
case 0x450b62:c.instructions+=2;goto B450b62;
case 0x450b68:c.instructions+=1;goto B450b68;
case 0x450b6d:goto L450b6d;
case 0x450b74:c.instructions+=4;goto B450b74;
case 0x450b7a:c.instructions+=3;goto B450b7a;
case 0x450b80:c.instructions+=2;goto B450b80;
case 0x450b86:c.instructions+=1;goto B450b86;
case 0x450b8b:goto L450b8b;
case 0x450b92:c.instructions+=4;goto B450b92;
case 0x450b98:c.instructions+=3;goto B450b98;
case 0x450b9e:c.instructions+=2;goto B450b9e;
case 0x450ba4:c.instructions+=1;goto B450ba4;
case 0x450ba9:goto L450ba9;
case 0x450bad:c.instructions+=4;goto B450bad;
case 0x450bb3:c.instructions+=3;goto B450bb3;
case 0x450bb9:c.instructions+=2;goto B450bb9;
case 0x450bbf:c.instructions+=1;goto B450bbf;
case 0x450bc4:goto L450bc4;
case 0x450bc8:c.instructions+=4;goto B450bc8;
case 0x450bce:c.instructions+=3;goto B450bce;
case 0x450bd4:c.instructions+=2;goto B450bd4;
case 0x450bda:c.instructions+=1;goto B450bda;
case 0x450bdf:goto L450bdf;
case 0x450be3:c.instructions+=8;goto B450be3;
case 0x450be7:c.instructions+=7;goto B450be7;
case 0x450bed:c.instructions+=6;goto B450bed;
case 0x450bef:c.instructions+=5;goto B450bef;
case 0x450bf5:c.instructions+=4;goto B450bf5;
case 0x450bf9:c.instructions+=3;goto B450bf9;
case 0x450bfb:c.instructions+=2;goto B450bfb;
case 0x450c01:c.instructions+=1;goto B450c01;
case 0x450c06:goto L450c06;
case 0x450c0a:c.instructions+=2;goto B450c0a;
case 0x450c10:c.instructions+=1;goto B450c10;
case 0x450c16:goto L450c16;
case 0x450c19:c.instructions+=2;goto B450c19;
case 0x450c1b:c.instructions+=1;goto B450c1b;
case 0x450c1d:goto L450c1d;
case 0x450c20:c.instructions+=8;goto B450c20;
case 0x450c22:c.instructions+=7;goto B450c22;
case 0x450c26:c.instructions+=6;goto B450c26;
case 0x450c2a:c.instructions+=5;goto B450c2a;
case 0x450c2b:c.instructions+=4;goto B450c2b;
case 0x450c2d:c.instructions+=3;goto B450c2d;
case 0x450c32:c.instructions+=2;goto B450c32;
case 0x450c39:c.instructions+=1;goto B450c39;
case 0x450c3e:goto L450c3e;
case 0x450c44:c.instructions+=5;goto B450c44;
case 0x450c48:c.instructions+=4;goto B450c48;
case 0x450c4e:c.instructions+=3;goto B450c4e;
case 0x450c4f:c.instructions+=2;goto B450c4f;
case 0x450c51:c.instructions+=1;goto B450c51;
case 0x450c53:goto L450c53;
case 0x450c55:c.instructions+=2;goto B450c55;
case 0x450c5b:c.instructions+=1;goto B450c5b;
case 0x450c62:goto L450c62;
case 0x450c64:c.instructions+=4;goto B450c64;
case 0x450c68:c.instructions+=3;goto B450c68;
case 0x450c6a:c.instructions+=2;goto B450c6a;
case 0x450c6d:c.instructions+=1;goto B450c6d;
case 0x450c6f:goto L450c6f;
case 0x450c70:c.instructions+=3;goto B450c70;
case 0x450c76:c.instructions+=2;goto B450c76;
case 0x450c78:c.instructions+=1;goto B450c78;
case 0x450c7a:goto L450c7a;
case 0x450c80:goto L450c80;
case 0x450c81:c.instructions+=5;goto B450c81;
case 0x450c82:c.instructions+=4;goto B450c82;
case 0x450c83:c.instructions+=3;goto B450c83;
case 0x450c85:c.instructions+=2;goto B450c85;
case 0x450c86:c.instructions+=1;goto B450c86;
case 0x450c90:goto L450c90;
case 0x450c91:c.instructions+=4;goto B450c91;
case 0x450c93:c.instructions+=3;goto B450c93;
case 0x450c99:c.instructions+=2;goto B450c99;
case 0x450c9f:c.instructions+=1;goto B450c9f;
case 0x450ca5:goto L450ca5;
case 0x450cab:c.instructions+=4;goto B450cab;
case 0x450cb1:c.instructions+=3;goto B450cb1;
case 0x450cb2:c.instructions+=2;goto B450cb2;
case 0x450cb3:c.instructions+=1;goto B450cb3;
case 0x450cb4:goto L450cb4;
case 0x450cb9:c.instructions+=4;goto B450cb9;
case 0x450cbc:c.instructions+=3;goto B450cbc;
case 0x450cbe:c.instructions+=2;goto B450cbe;
case 0x450cc0:c.instructions+=1;goto B450cc0;
case 0x450cc2:goto L450cc2;
case 0x450cc5:c.instructions+=3;goto B450cc5;
case 0x450cc8:c.instructions+=2;goto B450cc8;
case 0x450ccc:c.instructions+=1;goto B450ccc;
case 0x450cd2:goto L450cd2;
case 0x450cd9:goto L450cd9;
case 0x450cdb:c.instructions+=4;goto B450cdb;
case 0x450cde:c.instructions+=3;goto B450cde;
case 0x450cdf:c.instructions+=2;goto B450cdf;
case 0x450ce1:c.instructions+=1;goto B450ce1;
case 0x450ce6:goto L450ce6;
case 0x450ce9:c.instructions+=3;goto B450ce9;
case 0x450cef:c.instructions+=2;goto B450cef;
case 0x450cf6:c.instructions+=1;goto B450cf6;
case 0x450cfb:goto L450cfb;
case 0x450cfd:goto L450cfd;
case 0x450d02:goto L450d02;
case 0x450d04:c.instructions+=3;goto B450d04;
case 0x450d05:c.instructions+=2;goto B450d05;
case 0x450d07:c.instructions+=1;goto B450d07;
case 0x450d0c:goto L450d0c;
case 0x450d11:goto L450d11;
case 0x450d14:c.instructions+=3;goto B450d14;
case 0x450d1a:c.instructions+=2;goto B450d1a;
case 0x450d21:c.instructions+=1;goto B450d21;
case 0x450d26:goto L450d26;
case 0x450d29:c.instructions+=6;goto B450d29;
case 0x450d2f:c.instructions+=5;goto B450d2f;
case 0x450d32:c.instructions+=4;goto B450d32;
case 0x450d38:c.instructions+=3;goto B450d38;
case 0x450d3b:c.instructions+=2;goto B450d3b;
case 0x450d41:c.instructions+=1;goto B450d41;
case 0x450d46:goto L450d46;
case 0x450d49:c.instructions+=3;goto B450d49;
case 0x450d4f:c.instructions+=2;goto B450d4f;
case 0x450d56:c.instructions+=1;goto B450d56;
case 0x450d5b:goto L450d5b;
case 0x450d5e:c.instructions+=2;goto B450d5e;
case 0x450d64:c.instructions+=1;goto B450d64;
case 0x450d69:goto L450d69;
case 0x450d6c:c.instructions+=4;goto B450d6c;
case 0x450d6d:c.instructions+=3;goto B450d6d;
case 0x450d6e:c.instructions+=2;goto B450d6e;
case 0x450d70:c.instructions+=1;goto B450d70;
case 0x450d75:goto L450d75;
case 0x450d7a:goto L450d7a;
case 0x450d7d:c.instructions+=4;goto B450d7d;
case 0x450d7e:c.instructions+=3;goto B450d7e;
case 0x450d7f:c.instructions+=2;goto B450d7f;
case 0x450d81:c.instructions+=1;goto B450d81;
case 0x450d86:goto L450d86;
case 0x450d8b:goto L450d8b;
case 0x450d91:c.instructions+=5;goto B450d91;
case 0x450d98:c.instructions+=4;goto B450d98;
case 0x450d9f:c.instructions+=3;goto B450d9f;
case 0x450da2:c.instructions+=2;goto B450da2;
case 0x450da4:c.instructions+=1;goto B450da4;
case 0x450da9:goto L450da9;
case 0x450daf:c.instructions+=5;goto B450daf;
case 0x450db6:c.instructions+=4;goto B450db6;
case 0x450dbd:c.instructions+=3;goto B450dbd;
case 0x450dc0:c.instructions+=2;goto B450dc0;
case 0x450dc2:c.instructions+=1;goto B450dc2;
case 0x450dc7:goto L450dc7;
case 0x450dcd:c.instructions+=5;goto B450dcd;
case 0x450dd4:c.instructions+=4;goto B450dd4;
case 0x450ddb:c.instructions+=3;goto B450ddb;
case 0x450dde:c.instructions+=2;goto B450dde;
case 0x450de0:c.instructions+=1;goto B450de0;
case 0x450de5:goto L450de5;
case 0x450deb:c.instructions+=5;goto B450deb;
case 0x450df2:c.instructions+=4;goto B450df2;
case 0x450df9:c.instructions+=3;goto B450df9;
case 0x450dfc:c.instructions+=2;goto B450dfc;
case 0x450dfe:c.instructions+=1;goto B450dfe;
case 0x450e00:goto L450e00;
case 0x450e07:c.instructions+=1;goto B450e07;
case 0x450e09:goto L450e09;
case 0x450e0f:c.instructions+=5;goto B450e0f;
case 0x450e16:c.instructions+=4;goto B450e16;
case 0x450e1d:c.instructions+=3;goto B450e1d;
case 0x450e20:c.instructions+=2;goto B450e20;
case 0x450e22:c.instructions+=1;goto B450e22;
case 0x450e24:goto L450e24;
case 0x450e2a:c.instructions+=5;goto B450e2a;
case 0x450e31:c.instructions+=4;goto B450e31;
case 0x450e38:c.instructions+=3;goto B450e38;
case 0x450e3b:c.instructions+=2;goto B450e3b;
case 0x450e3d:c.instructions+=1;goto B450e3d;
case 0x450e3f:goto L450e3f;
case 0x450e45:c.instructions+=5;goto B450e45;
case 0x450e4c:c.instructions+=4;goto B450e4c;
case 0x450e53:c.instructions+=3;goto B450e53;
case 0x450e56:c.instructions+=2;goto B450e56;
case 0x450e58:c.instructions+=1;goto B450e58;
case 0x450e5a:goto L450e5a;
case 0x450e5d:c.instructions+=3;goto B450e5d;
case 0x450e60:c.instructions+=2;goto B450e60;
case 0x450e66:c.instructions+=1;goto B450e66;
case 0x450e69:goto L450e69;
case 0x450e6f:c.instructions+=6;goto B450e6f;
case 0x450e70:c.instructions+=5;goto B450e70;
case 0x450e72:c.instructions+=4;goto B450e72;
case 0x450e73:c.instructions+=3;goto B450e73;
case 0x450e79:c.instructions+=2;goto B450e79;
case 0x450e7d:c.instructions+=1;goto B450e7d;
case 0x450e7e:goto L450e7e;
case 0x450e7f:c.instructions+=1;goto B450e7f;
case 0x450ed0:goto L450ed0;
case 0x450ed1:c.instructions+=4;goto B450ed1;
case 0x450ed3:c.instructions+=3;goto B450ed3;
case 0x450ed9:c.instructions+=2;goto B450ed9;
case 0x450edf:c.instructions+=1;goto B450edf;
case 0x450ee5:goto L450ee5;
case 0x450ee6:c.instructions+=2;goto B450ee6;
case 0x450ee8:c.instructions+=1;goto B450ee8;
case 0x450eed:goto L450eed;
case 0x450eef:c.instructions+=2;goto B450eef;
case 0x450ef1:c.instructions+=1;goto B450ef1;
case 0x450ef3:goto L450ef3;
case 0x450ef5:c.instructions+=1;goto B450ef5;
case 0x450efa:goto L450efa;
case 0x450efc:c.instructions+=1;goto B450efc;
case 0x450efe:goto L450efe;
case 0x450f04:c.instructions+=5;goto B450f04;
case 0x450f05:c.instructions+=4;goto B450f05;
case 0x450f08:c.instructions+=3;goto B450f08;
case 0x450f09:c.instructions+=2;goto B450f09;
case 0x450f0b:c.instructions+=1;goto B450f0b;
case 0x450f10:goto L450f10;
case 0x450f12:c.instructions+=2;goto B450f12;
case 0x450f13:c.instructions+=1;goto B450f13;
case 0x450f15:goto L450f15;
case 0x450f17:c.instructions+=1;goto B450f17;
case 0x450f19:goto L450f19;
case 0x450f1f:c.instructions+=8;goto B450f1f;
case 0x450f25:c.instructions+=7;goto B450f25;
case 0x450f26:c.instructions+=6;goto B450f26;
case 0x450f27:c.instructions+=5;goto B450f27;
case 0x450f2d:c.instructions+=4;goto B450f2d;
case 0x450f2e:c.instructions+=3;goto B450f2e;
case 0x450f2f:c.instructions+=2;goto B450f2f;
case 0x450f31:c.instructions+=1;goto B450f31;
case 0x450f36:goto L450f36;
case 0x450f38:goto L450f38;
case 0x450f3e:c.instructions+=7;goto B450f3e;
case 0x450f44:c.instructions+=6;goto B450f44;
case 0x450f45:c.instructions+=5;goto B450f45;
case 0x450f46:c.instructions+=4;goto B450f46;
case 0x450f4c:c.instructions+=3;goto B450f4c;
case 0x450f4d:c.instructions+=2;goto B450f4d;
case 0x450f4f:c.instructions+=1;goto B450f4f;
case 0x450f54:goto L450f54;
case 0x450f5a:c.instructions+=4;goto B450f5a;
case 0x450f64:c.instructions+=3;goto B450f64;
case 0x450f6e:c.instructions+=2;goto B450f6e;
case 0x450f73:c.instructions+=1;goto B450f73;
case 0x450f74:goto L450f74;
case 0x450f75:c.instructions+=1;goto B450f75;
case 0x450f80:goto L450f80;
case 0x450f81:c.instructions+=4;goto B450f81;
case 0x450f85:c.instructions+=3;goto B450f85;
case 0x450f86:c.instructions+=2;goto B450f86;
case 0x450f88:c.instructions+=1;goto B450f88;
case 0x450f8d:goto L450f8d;
case 0x450f90:c.instructions+=9;goto B450f90;
case 0x450f94:c.instructions+=8;goto B450f94;
case 0x450f97:c.instructions+=7;goto B450f97;
case 0x450f9b:c.instructions+=6;goto B450f9b;
case 0x450f9f:c.instructions+=5;goto B450f9f;
case 0x450fa4:c.instructions+=4;goto B450fa4;
case 0x450faa:c.instructions+=3;goto B450faa;
case 0x450fad:c.instructions+=2;goto B450fad;
case 0x450fae:c.instructions+=1;goto B450fae;
case 0x450fb3:goto L450fb3;
case 0x450fb7:c.instructions+=2;goto B450fb7;
case 0x450fb8:c.instructions+=1;goto B450fb8;
case 0x450fc0:goto L450fc0;
case 0x450fc3:c.instructions+=4;goto B450fc3;
case 0x450fc4:c.instructions+=3;goto B450fc4;
case 0x450fc6:c.instructions+=2;goto B450fc6;
case 0x450fc8:c.instructions+=1;goto B450fc8;
case 0x450fcd:goto L450fcd;
case 0x450fd0:c.instructions+=2;goto B450fd0;
case 0x450fd2:c.instructions+=1;goto B450fd2;
case 0x450fd8:goto L450fd8;
case 0x450fdb:c.instructions+=3;goto B450fdb;
case 0x450fde:c.instructions+=2;goto B450fde;
case 0x450fe0:c.instructions+=1;goto B450fe0;
case 0x450fe6:goto L450fe6;
case 0x450fe8:c.instructions+=2;goto B450fe8;
case 0x450fea:c.instructions+=1;goto B450fea;
case 0x450ff0:goto L450ff0;
case 0x450ff1:c.instructions+=3;goto B450ff1;
case 0x450ff4:c.instructions+=2;goto B450ff4;
case 0x450ff6:c.instructions+=1;goto B450ff6;
case 0x450ffc:goto L450ffc;
default:missing_instruction(c.pc);}
B450004:L450004:{c.instructions+=5;NFSU2_TR(0x450004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B450005:{NFSU2_TR(0x450005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450006:{NFSU2_TR(0x450006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450007:{NFSU2_TR(0x450007);
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
B45000a:{NFSU2_TR(0x45000a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45000d:L45000d:{c.instructions+=2;NFSU2_TR(0x45000d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450013:{NFSU2_TR(0x450013);
TAIL_STATIC(0x44ff91u,44f);
}
B450018:L450018:{c.instructions+=7;NFSU2_TR(0x450018);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B45001e:{NFSU2_TR(0x45001e);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450025:{NFSU2_TR(0x450025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B450026:{NFSU2_TR(0x450026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450027:{NFSU2_TR(0x450027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450028:{NFSU2_TR(0x450028);
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
B45002b:{NFSU2_TR(0x45002b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45002e:L45002e:{c.instructions+=6;NFSU2_TR(0x45002e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45002f:{NFSU2_TR(0x45002f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450030:{NFSU2_TR(0x450030);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B450032:{NFSU2_TR(0x450032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450033:{NFSU2_TR(0x450033);
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
B450036:{NFSU2_TR(0x450036);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450040:L450040:{c.instructions+=18;NFSU2_TR(0x450040);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450041:{NFSU2_TR(0x450041);
__builtin_memmove((R+20),(R+16),4);
}
B450043:{NFSU2_TR(0x450043);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B450046:{NFSU2_TR(0x450046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B45004c:{NFSU2_TR(0x45004c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450052:{NFSU2_TR(0x450052);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450053:{NFSU2_TR(0x450053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450054:{NFSU2_TR(0x450054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B450057:{NFSU2_TR(0x450057);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B45005a:{NFSU2_TR(0x45005a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45005b:{NFSU2_TR(0x45005b);
__builtin_memmove((R+12),(R+4),4);
}
B45005d:{NFSU2_TR(0x45005d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B450065:{NFSU2_TR(0x450065);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45006d:{NFSU2_TR(0x45006d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B450075:{NFSU2_TR(0x450075);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45007d:{NFSU2_TR(0x45007d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B450085:{NFSU2_TR(0x450085);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45008d:{NFSU2_TR(0x45008d);
if(r1(R+518)){{goto L450431;}}
}
B450093:L450093:{c.instructions+=8;NFSU2_TR(0x450093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450096:{NFSU2_TR(0x450096);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B450098:{NFSU2_TR(0x450098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45009b:{NFSU2_TR(0x45009b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45009c:{NFSU2_TR(0x45009c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45009d:{NFSU2_TR(0x45009d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45009e:{NFSU2_TR(0x45009e);
__builtin_memmove((R+4),(R+12),4);
}
B4500a0:{NFSU2_TR(0x4500a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4500a5ull));
TAIL_STATIC(0x442ee0u,442);
}
B4500a5:L4500a5:{c.instructions+=3;NFSU2_TR(0x4500a5);
__builtin_memmove((R+28),(R+0),4);
}
B4500a7:{NFSU2_TR(0x4500a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4500a9:{NFSU2_TR(0x4500a9);
if(r1(R+518)){{goto L45034a;}}
}
B4500af:L4500af:{c.instructions+=2;NFSU2_TR(0x4500af);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4500b2:{NFSU2_TR(0x4500b2);
if(r1(R+518)){{goto L45034a;}}
}
B4500b8:L4500b8:{c.instructions+=9;NFSU2_TR(0x4500b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4500bb:{NFSU2_TR(0x4500bb);
__builtin_memmove((R+8),(R+0),4);
}
B4500bd:{NFSU2_TR(0x4500bd);
w4(R+8,u32(u32(r4(R+8))^u32(u32(0x1ull))));
}
B4500c0:{NFSU2_TR(0x4500c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500c1:{NFSU2_TR(0x4500c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500c2:{NFSU2_TR(0x4500c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500c3:{NFSU2_TR(0x4500c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500c4:{NFSU2_TR(0x4500c4);
__builtin_memmove((R+4),(R+12),4);
}
B4500c6:{NFSU2_TR(0x4500c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4500cbull));
TAIL_STATIC(0x44a160u,44a);
}
B4500cb:L4500cb:{c.instructions+=2;NFSU2_TR(0x4500cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4500cd:{NFSU2_TR(0x4500cd);
if(r1(R+518)){{goto L45034a;}}
}
B4500d3:L4500d3:{c.instructions+=5;NFSU2_TR(0x4500d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4500d7:{NFSU2_TR(0x4500d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500d8:{NFSU2_TR(0x4500d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500da:{NFSU2_TR(0x4500da);
__builtin_memmove((R+4),(R+28),4);
}
B4500dc:{NFSU2_TR(0x4500dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4500e1ull));
TAIL_STATIC(0x447a30u,447);
}
B4500e1:L4500e1:{c.instructions+=5;NFSU2_TR(0x4500e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4500e5:{NFSU2_TR(0x4500e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500e6:{NFSU2_TR(0x4500e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4500e8:{NFSU2_TR(0x4500e8);
__builtin_memmove((R+4),(R+28),4);
}
B4500ea:{NFSU2_TR(0x4500ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4500efull));
TAIL_STATIC(0x447a30u,447);
}
B4500ef:L4500ef:{c.instructions+=17;NFSU2_TR(0x4500ef);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4500f3:{NFSU2_TR(0x4500f3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4500f7:{NFSU2_TR(0x4500f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4500fb:{NFSU2_TR(0x4500fb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4500ff:{NFSU2_TR(0x4500ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450100:{NFSU2_TR(0x450100);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450104:{NFSU2_TR(0x450104);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450106:{NFSU2_TR(0x450106);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45010a:{NFSU2_TR(0x45010a);
__builtin_memmove((R+4),(R+28),4);
}
B45010c:{NFSU2_TR(0x45010c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450110:{NFSU2_TR(0x450110);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450114:{NFSU2_TR(0x450114);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450118:{NFSU2_TR(0x450118);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45011a:{NFSU2_TR(0x45011a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45011e:{NFSU2_TR(0x45011e);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450125:{NFSU2_TR(0x450125);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450129:{NFSU2_TR(0x450129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45012eull));
TAIL_STATIC(0x447a80u,447);
}
B45012e:L45012e:{c.instructions+=5;NFSU2_TR(0x45012e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B450132:{NFSU2_TR(0x450132);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450133:{NFSU2_TR(0x450133);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450135:{NFSU2_TR(0x450135);
__builtin_memmove((R+4),(R+28),4);
}
B450137:{NFSU2_TR(0x450137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45013cull));
TAIL_STATIC(0x447a80u,447);
}
B45013c:L45013c:{c.instructions+=20;NFSU2_TR(0x45013c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450140:{NFSU2_TR(0x450140);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450144:{NFSU2_TR(0x450144);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B450148:{NFSU2_TR(0x450148);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45014c:{NFSU2_TR(0x45014c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45014d:{NFSU2_TR(0x45014d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450151:{NFSU2_TR(0x450151);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450153:{NFSU2_TR(0x450153);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450157:{NFSU2_TR(0x450157);
__builtin_memmove((R+4),(R+24),4);
}
B450159:{NFSU2_TR(0x450159);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45015d:{NFSU2_TR(0x45015d);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450164:{NFSU2_TR(0x450164);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45016b:{NFSU2_TR(0x45016b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45016d:{NFSU2_TR(0x45016d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450171:{NFSU2_TR(0x450171);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450175:{NFSU2_TR(0x450175);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450179:{NFSU2_TR(0x450179);
{u32 ea_=u32(r4(R+28)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45017c:{NFSU2_TR(0x45017c);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45017f:{NFSU2_TR(0x45017f);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450186:{NFSU2_TR(0x450186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45018bull));
TAIL_STATIC(0x447a30u,447);
}
B45018b:L45018b:{c.instructions+=5;NFSU2_TR(0x45018b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45018f:{NFSU2_TR(0x45018f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450190:{NFSU2_TR(0x450190);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450192:{NFSU2_TR(0x450192);
__builtin_memmove((R+4),(R+24),4);
}
B450194:{NFSU2_TR(0x450194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450199ull));
TAIL_STATIC(0x447a30u,447);
}
B450199:L450199:{c.instructions+=17;NFSU2_TR(0x450199);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45019d:{NFSU2_TR(0x45019d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4501a1:{NFSU2_TR(0x4501a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4501a5:{NFSU2_TR(0x4501a5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4501a9:{NFSU2_TR(0x4501a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4501aa:{NFSU2_TR(0x4501aa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4501ae:{NFSU2_TR(0x4501ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4501b0:{NFSU2_TR(0x4501b0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4501b4:{NFSU2_TR(0x4501b4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4501b8:{NFSU2_TR(0x4501b8);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4501bf:{NFSU2_TR(0x4501bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4501c6:{NFSU2_TR(0x4501c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4501c8:{NFSU2_TR(0x4501c8);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4501cf:{NFSU2_TR(0x4501cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4501d6:{NFSU2_TR(0x4501d6);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4501dd:{NFSU2_TR(0x4501dd);
__builtin_memmove((R+4),(R+24),4);
}
B4501df:{NFSU2_TR(0x4501df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4501e4ull));
TAIL_STATIC(0x447a80u,447);
}
B4501e4:L4501e4:{c.instructions+=5;NFSU2_TR(0x4501e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4501e8:{NFSU2_TR(0x4501e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4501e9:{NFSU2_TR(0x4501e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4501eb:{NFSU2_TR(0x4501eb);
__builtin_memmove((R+4),(R+24),4);
}
B4501ed:{NFSU2_TR(0x4501ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4501f2ull));
TAIL_STATIC(0x447a80u,447);
}
B4501f2:L4501f2:{c.instructions+=20;NFSU2_TR(0x4501f2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4501f6:{NFSU2_TR(0x4501f6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4501fa:{NFSU2_TR(0x4501fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4501fd:{NFSU2_TR(0x4501fd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450201:{NFSU2_TR(0x450201);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450202:{NFSU2_TR(0x450202);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450206:{NFSU2_TR(0x450206);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450207:{NFSU2_TR(0x450207);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45020b:{NFSU2_TR(0x45020b);
__builtin_memmove((R+4),(R+12),4);
}
B45020d:{NFSU2_TR(0x45020d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450211:{NFSU2_TR(0x450211);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450218:{NFSU2_TR(0x450218);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45021f:{NFSU2_TR(0x45021f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B450221:{NFSU2_TR(0x450221);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450228:{NFSU2_TR(0x450228);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45022f:{NFSU2_TR(0x45022f);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450236:{NFSU2_TR(0x450236);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450239:{NFSU2_TR(0x450239);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45023c:{NFSU2_TR(0x45023c);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450243:{NFSU2_TR(0x450243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450248ull));
TAIL_STATIC(0x442d70u,442);
}
B450248:L450248:{c.instructions+=6;NFSU2_TR(0x450248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45024b:{NFSU2_TR(0x45024b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45024f:{NFSU2_TR(0x45024f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450250:{NFSU2_TR(0x450250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450251:{NFSU2_TR(0x450251);
__builtin_memmove((R+4),(R+12),4);
}
B450253:{NFSU2_TR(0x450253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450258ull));
TAIL_STATIC(0x442d70u,442);
}
B450258:L450258:{c.instructions+=10;NFSU2_TR(0x450258);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45025c:{NFSU2_TR(0x45025c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450260:{NFSU2_TR(0x450260);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B450264:{NFSU2_TR(0x450264);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45026a:{NFSU2_TR(0x45026a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B45026c:{NFSU2_TR(0x45026c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450270:{NFSU2_TR(0x450270);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B450276:{NFSU2_TR(0x450276);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B450278:{NFSU2_TR(0x450278);
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
B45027b:{NFSU2_TR(0x45027b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L450289;}}
}
B45027d:L45027d:{c.instructions+=4;NFSU2_TR(0x45027d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45027f:{NFSU2_TR(0x45027f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B450283:{NFSU2_TR(0x450283);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450287:{NFSU2_TR(0x450287);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B450289:L450289:{c.instructions+=27;NFSU2_TR(0x450289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45028c:{NFSU2_TR(0x45028c);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450290:{NFSU2_TR(0x450290);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B450297:{NFSU2_TR(0x450297);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B450299:{NFSU2_TR(0x450299);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45029d:{NFSU2_TR(0x45029d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B45029f:{NFSU2_TR(0x45029f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4502a3:{NFSU2_TR(0x4502a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4502a7:{NFSU2_TR(0x4502a7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4502a9:{NFSU2_TR(0x4502a9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4502ad:{NFSU2_TR(0x4502ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4502b1:{NFSU2_TR(0x4502b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4502b3:{NFSU2_TR(0x4502b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4502b4:{NFSU2_TR(0x4502b4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4502b6:{NFSU2_TR(0x4502b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4502b7:{NFSU2_TR(0x4502b7);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4502bb:{NFSU2_TR(0x4502bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4502bc:{NFSU2_TR(0x4502bc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4502c0:{NFSU2_TR(0x4502c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4502c1:{NFSU2_TR(0x4502c1);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4502c5:{NFSU2_TR(0x4502c5);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4502cc:{NFSU2_TR(0x4502cc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4502d0:{NFSU2_TR(0x4502d0);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4502d4:{NFSU2_TR(0x4502d4);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4502db:{NFSU2_TR(0x4502db);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4502df:{NFSU2_TR(0x4502df);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4502e3:{NFSU2_TR(0x4502e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4502e8ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4502e8:L4502e8:{c.instructions+=17;NFSU2_TR(0x4502e8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4502ec:{NFSU2_TR(0x4502ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4502ed:{NFSU2_TR(0x4502ed);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4502f1:{NFSU2_TR(0x4502f1);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4502f8:{NFSU2_TR(0x4502f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4502f9:{NFSU2_TR(0x4502f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4502fd:{NFSU2_TR(0x4502fd);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450301:{NFSU2_TR(0x450301);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450302:{NFSU2_TR(0x450302);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450309:{NFSU2_TR(0x450309);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45030d:{NFSU2_TR(0x45030d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450311:{NFSU2_TR(0x450311);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450312:{NFSU2_TR(0x450312);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450316:{NFSU2_TR(0x450316);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45031d:{NFSU2_TR(0x45031d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450321:{NFSU2_TR(0x450321);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450325:{NFSU2_TR(0x450325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45032aull));
TAIL_STATIC(0x43d0c0u,43d);
}
B45032a:L45032a:{c.instructions+=7;NFSU2_TR(0x45032a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45032e:{NFSU2_TR(0x45032e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B450331:{NFSU2_TR(0x450331);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450338:{NFSU2_TR(0x450338);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45033c:{NFSU2_TR(0x45033c);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450343:{NFSU2_TR(0x450343);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B450345:{NFSU2_TR(0x450345);
{goto L450431;}
}
B45034a:L45034a:{c.instructions+=5;NFSU2_TR(0x45034a);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B450351:{NFSU2_TR(0x450351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450352:{NFSU2_TR(0x450352);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450354:{NFSU2_TR(0x450354);
__builtin_memmove((R+4),(R+24),4);
}
B450356:{NFSU2_TR(0x450356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45035bull));
TAIL_STATIC(0x447a30u,447);
}
B45035b:L45035b:{c.instructions+=5;NFSU2_TR(0x45035b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B450362:{NFSU2_TR(0x450362);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450363:{NFSU2_TR(0x450363);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450365:{NFSU2_TR(0x450365);
__builtin_memmove((R+4),(R+24),4);
}
B450367:{NFSU2_TR(0x450367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45036cull));
TAIL_STATIC(0x447a30u,447);
}
B45036c:L45036c:{c.instructions+=5;NFSU2_TR(0x45036c);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B450370:{NFSU2_TR(0x450370);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450371:{NFSU2_TR(0x450371);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450373:{NFSU2_TR(0x450373);
__builtin_memmove((R+4),(R+24),4);
}
B450375:{NFSU2_TR(0x450375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45037aull));
TAIL_STATIC(0x447a80u,447);
}
B45037a:L45037a:{c.instructions+=5;NFSU2_TR(0x45037a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45037e:{NFSU2_TR(0x45037e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45037f:{NFSU2_TR(0x45037f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450381:{NFSU2_TR(0x450381);
__builtin_memmove((R+4),(R+24),4);
}
B450383:{NFSU2_TR(0x450383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450388ull));
TAIL_STATIC(0x447a80u,447);
}
B450388:L450388:{c.instructions+=39;NFSU2_TR(0x450388);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45038f:{NFSU2_TR(0x45038f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450396:{NFSU2_TR(0x450396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450399:{NFSU2_TR(0x450399);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503a0:{NFSU2_TR(0x4503a0);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4503a7:{NFSU2_TR(0x4503a7);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503ae:{NFSU2_TR(0x4503ae);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4503b5:{NFSU2_TR(0x4503b5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503b9:{NFSU2_TR(0x4503b9);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503bd:{NFSU2_TR(0x4503bd);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4503c1:{NFSU2_TR(0x4503c1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503c5:{NFSU2_TR(0x4503c5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503c9:{NFSU2_TR(0x4503c9);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4503cd:{NFSU2_TR(0x4503cd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503d1:{NFSU2_TR(0x4503d1);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503d5:{NFSU2_TR(0x4503d5);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4503d9:{NFSU2_TR(0x4503d9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503dd:{NFSU2_TR(0x4503dd);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503e1:{NFSU2_TR(0x4503e1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503e5:{NFSU2_TR(0x4503e5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4503e7:{NFSU2_TR(0x4503e7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4503eb:{NFSU2_TR(0x4503eb);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503ef:{NFSU2_TR(0x4503ef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4503f3:{NFSU2_TR(0x4503f3);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4503f7:{NFSU2_TR(0x4503f7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4503fb:{NFSU2_TR(0x4503fb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4503ff:{NFSU2_TR(0x4503ff);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450403:{NFSU2_TR(0x450403);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450407:{NFSU2_TR(0x450407);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45040b:{NFSU2_TR(0x45040b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45040f:{NFSU2_TR(0x45040f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450413:{NFSU2_TR(0x450413);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450417:{NFSU2_TR(0x450417);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45041b:{NFSU2_TR(0x45041b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45041f:{NFSU2_TR(0x45041f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450423:{NFSU2_TR(0x450423);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450427:{NFSU2_TR(0x450427);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45042a:{NFSU2_TR(0x45042a);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45042d:{NFSU2_TR(0x45042d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450431:L450431:{c.instructions+=22;NFSU2_TR(0x450431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450434:{NFSU2_TR(0x450434);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450438:{NFSU2_TR(0x450438);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45043c:{NFSU2_TR(0x45043c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45043e:{NFSU2_TR(0x45043e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450442:{NFSU2_TR(0x450442);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450446:{NFSU2_TR(0x450446);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450449:{NFSU2_TR(0x450449);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45044d:{NFSU2_TR(0x45044d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450450:{NFSU2_TR(0x450450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450453:{NFSU2_TR(0x450453);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450457:{NFSU2_TR(0x450457);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450459:{NFSU2_TR(0x450459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45045a:{NFSU2_TR(0x45045a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45045d:{NFSU2_TR(0x45045d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450460:{NFSU2_TR(0x450460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450461:{NFSU2_TR(0x450461);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450464:{NFSU2_TR(0x450464);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450466:{NFSU2_TR(0x450466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450467:{NFSU2_TR(0x450467);
__builtin_memmove((R+16),(R+20),4);
}
B450469:{NFSU2_TR(0x450469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45046a:{NFSU2_TR(0x45046a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450470:L450470:{c.instructions+=6;NFSU2_TR(0x450470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B450473:{NFSU2_TR(0x450473);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450474:{NFSU2_TR(0x450474);
__builtin_memmove((R+24),(R+4),4);
}
B450476:{NFSU2_TR(0x450476);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45047c:{NFSU2_TR(0x45047c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45047e:{NFSU2_TR(0x45047e);
if(r1(R+518)){{goto L45077d;}}
}
B450484:L450484:{c.instructions+=8;NFSU2_TR(0x450484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45048a:{NFSU2_TR(0x45048a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45048c:{NFSU2_TR(0x45048c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45048d:{NFSU2_TR(0x45048d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B450491:{NFSU2_TR(0x450491);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450492:{NFSU2_TR(0x450492);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450493:{NFSU2_TR(0x450493);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B450497:{NFSU2_TR(0x450497);
if(r1(R+518)){{goto L4504a2;}}
}
B450499:L450499:{c.instructions+=2;NFSU2_TR(0x450499);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45049c:{NFSU2_TR(0x45049c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4505c1;}}
}
B4504a2:L4504a2:{c.instructions+=9;NFSU2_TR(0x4504a2);
__builtin_memmove((R+20),(R+12),4);
}
B4504a4:{NFSU2_TR(0x4504a4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B4504aa:{NFSU2_TR(0x4504aa);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B4504b2:{NFSU2_TR(0x4504b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4504b9:{NFSU2_TR(0x4504b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4504bd:{NFSU2_TR(0x4504bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4504c4:{NFSU2_TR(0x4504c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4504c6:{NFSU2_TR(0x4504c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4504ca:{NFSU2_TR(0x4504ca);
if(r1(R+518)){{goto L4504d5;}}
}
B4504cc:L4504cc:{c.instructions+=4;NFSU2_TR(0x4504cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4504cd:{NFSU2_TR(0x4504cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4504ce:{NFSU2_TR(0x4504ce);
__builtin_memmove((R+4),(R+24),4);
}
B4504d0:{NFSU2_TR(0x4504d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4504d5ull));
TAIL_STATIC(0x4498a0u,449);
}
B4504d5:L4504d5:{c.instructions+=7;NFSU2_TR(0x4504d5);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B4504dd:{NFSU2_TR(0x4504dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4504e4:{NFSU2_TR(0x4504e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4504e8:{NFSU2_TR(0x4504e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4504ef:{NFSU2_TR(0x4504ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4504f1:{NFSU2_TR(0x4504f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4504f5:{NFSU2_TR(0x4504f5);
if(r1(R+518)){{goto L450500;}}
}
B4504f7:L4504f7:{c.instructions+=4;NFSU2_TR(0x4504f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4504f8:{NFSU2_TR(0x4504f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4504f9:{NFSU2_TR(0x4504f9);
__builtin_memmove((R+4),(R+24),4);
}
B4504fb:{NFSU2_TR(0x4504fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450500ull));
TAIL_STATIC(0x449d00u,449);
}
B450500:L450500:{c.instructions+=30;NFSU2_TR(0x450500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450506:{NFSU2_TR(0x450506);
__builtin_memmove((R+0),(R+12),4);
}
B450508:{NFSU2_TR(0x450508);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45050b:{NFSU2_TR(0x45050b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B45050d:{NFSU2_TR(0x45050d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B450514:{NFSU2_TR(0x450514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45051a:{NFSU2_TR(0x45051a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45051e:{NFSU2_TR(0x45051e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B450521:{NFSU2_TR(0x450521);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B450525:{NFSU2_TR(0x450525);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B450527:{NFSU2_TR(0x450527);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45052d:{NFSU2_TR(0x45052d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450533:{NFSU2_TR(0x450533);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450539:{NFSU2_TR(0x450539);
u8 U[12];
w4(U+0,u32(u32(u32(0x6full))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45053d:{NFSU2_TR(0x45053d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B450541:{NFSU2_TR(0x450541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450547:{NFSU2_TR(0x450547);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B45054a:{NFSU2_TR(0x45054a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450550:{NFSU2_TR(0x450550);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450556:{NFSU2_TR(0x450556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45055c:{NFSU2_TR(0x45055c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450562:{NFSU2_TR(0x450562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450568:{NFSU2_TR(0x450568);
u8 U[12];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B45056c:{NFSU2_TR(0x45056c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B450570:{NFSU2_TR(0x450570);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450574:{NFSU2_TR(0x450574);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B450577:{NFSU2_TR(0x450577);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B45057a:{NFSU2_TR(0x45057a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45057e:{NFSU2_TR(0x45057e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450580:{NFSU2_TR(0x450580);
if(r1(R+518)){{goto L45058b;}}
}
B450582:L450582:{c.instructions+=4;NFSU2_TR(0x450582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450583:{NFSU2_TR(0x450583);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450584:{NFSU2_TR(0x450584);
__builtin_memmove((R+4),(R+24),4);
}
B450586:{NFSU2_TR(0x450586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45058bull));
TAIL_STATIC(0x4498a0u,449);
}
B45058b:L45058b:{c.instructions+=5;NFSU2_TR(0x45058b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45058f:{NFSU2_TR(0x45058f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B450592:{NFSU2_TR(0x450592);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450596:{NFSU2_TR(0x450596);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450598:{NFSU2_TR(0x450598);
if(r1(R+518)){{goto L4505a3;}}
}
B45059a:L45059a:{c.instructions+=4;NFSU2_TR(0x45059a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45059b:{NFSU2_TR(0x45059b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45059c:{NFSU2_TR(0x45059c);
__builtin_memmove((R+4),(R+24),4);
}
B45059e:{NFSU2_TR(0x45059e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4505a3ull));
TAIL_STATIC(0x449d00u,449);
}
B4505a3:L4505a3:{c.instructions+=5;NFSU2_TR(0x4505a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4505a9:{NFSU2_TR(0x4505a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4505ad:{NFSU2_TR(0x4505ad);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4505b4:{NFSU2_TR(0x4505b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4505ba:{NFSU2_TR(0x4505ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4505c1:L4505c1:{c.instructions+=3;NFSU2_TR(0x4505c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4505c7:{NFSU2_TR(0x4505c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4505c9:{NFSU2_TR(0x4505c9);
if(r1(R+518)){{goto L4505d0;}}
}
B4505cb:L4505cb:{c.instructions+=2;NFSU2_TR(0x4505cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4505ce:{NFSU2_TR(0x4505ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L450643;}}
}
B4505d0:L4505d0:{c.instructions+=7;NFSU2_TR(0x4505d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4505d7:{NFSU2_TR(0x4505d7);
__builtin_memmove((R+20),(R+12),4);
}
B4505d9:{NFSU2_TR(0x4505d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B4505df:{NFSU2_TR(0x4505df);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B4505e7:{NFSU2_TR(0x4505e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4505e9:{NFSU2_TR(0x4505e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4505ed:{NFSU2_TR(0x4505ed);
if(r1(R+518)){{goto L4505fc;}}
}
B4505ef:L4505ef:{c.instructions+=4;NFSU2_TR(0x4505ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4505f0:{NFSU2_TR(0x4505f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4505f1:{NFSU2_TR(0x4505f1);
__builtin_memmove((R+4),(R+24),4);
}
B4505f3:{NFSU2_TR(0x4505f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4505f8ull));
TAIL_STATIC(0x449d00u,449);
}
B4505f8:L4505f8:{c.instructions+=1;NFSU2_TR(0x4505f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4505fc:L4505fc:{c.instructions+=14;NFSU2_TR(0x4505fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4505ff:{NFSU2_TR(0x4505ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B450603:{NFSU2_TR(0x450603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450609:{NFSU2_TR(0x450609);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B45060b:{NFSU2_TR(0x45060b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450611:{NFSU2_TR(0x450611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450617:{NFSU2_TR(0x450617);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45061d:{NFSU2_TR(0x45061d);
u8 U[12];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B450621:{NFSU2_TR(0x450621);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B450625:{NFSU2_TR(0x450625);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45062b:{NFSU2_TR(0x45062b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B45062e:{NFSU2_TR(0x45062e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B450636:{NFSU2_TR(0x450636);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450638:{NFSU2_TR(0x450638);
if(r1(R+518)){{goto L450643;}}
}
B45063a:L45063a:{c.instructions+=4;NFSU2_TR(0x45063a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45063b:{NFSU2_TR(0x45063b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45063c:{NFSU2_TR(0x45063c);
__builtin_memmove((R+4),(R+24),4);
}
B45063e:{NFSU2_TR(0x45063e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450643ull));
TAIL_STATIC(0x449d00u,449);
}
B450643:L450643:{c.instructions+=3;NFSU2_TR(0x450643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450649:{NFSU2_TR(0x450649);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45064b:{NFSU2_TR(0x45064b);
if(r1(R+518)){{goto L450652;}}
}
B45064d:L45064d:{c.instructions+=2;NFSU2_TR(0x45064d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450650:{NFSU2_TR(0x450650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L450673;}}
}
B450652:L450652:{c.instructions+=7;NFSU2_TR(0x450652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450658:{NFSU2_TR(0x450658);
__builtin_memmove((R+0),(R+12),4);
}
B45065a:{NFSU2_TR(0x45065a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45065d:{NFSU2_TR(0x45065d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B45065f:{NFSU2_TR(0x45065f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B450666:{NFSU2_TR(0x450666);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45066c:{NFSU2_TR(0x45066c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B450673:L450673:{c.instructions+=3;NFSU2_TR(0x450673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450679:{NFSU2_TR(0x450679);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45067b:{NFSU2_TR(0x45067b);
if(r1(R+518)){{goto L450682;}}
}
B45067d:L45067d:{c.instructions+=2;NFSU2_TR(0x45067d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450680:{NFSU2_TR(0x450680);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4506ad;}}
}
B450682:L450682:{c.instructions+=10;NFSU2_TR(0x450682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450688:{NFSU2_TR(0x450688);
__builtin_memmove((R+0),(R+12),4);
}
B45068a:{NFSU2_TR(0x45068a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45068d:{NFSU2_TR(0x45068d);
__builtin_memmove((R+8),(R+12),4);
}
B45068f:{NFSU2_TR(0x45068f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B450695:{NFSU2_TR(0x450695);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B450697:{NFSU2_TR(0x450697);
u8 U[16];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B45069e:{NFSU2_TR(0x45069e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4506a4:{NFSU2_TR(0x4506a4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B4506a6:{NFSU2_TR(0x4506a6);
u8 U[13];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4506ad:L4506ad:{c.instructions+=3;NFSU2_TR(0x4506ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4506b3:{NFSU2_TR(0x4506b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4506b5:{NFSU2_TR(0x4506b5);
if(r1(R+518)){{goto L4506bc;}}
}
B4506b7:L4506b7:{c.instructions+=2;NFSU2_TR(0x4506b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4506ba:{NFSU2_TR(0x4506ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4506de;}}
}
B4506bc:L4506bc:{c.instructions+=7;NFSU2_TR(0x4506bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4506c2:{NFSU2_TR(0x4506c2);
__builtin_memmove((R+4),(R+12),4);
}
B4506c4:{NFSU2_TR(0x4506c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4506c7:{NFSU2_TR(0x4506c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4506ca:{NFSU2_TR(0x4506ca);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4506d1:{NFSU2_TR(0x4506d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4506d7:{NFSU2_TR(0x4506d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4506de:L4506de:{c.instructions+=3;NFSU2_TR(0x4506de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4506e4:{NFSU2_TR(0x4506e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4506e6:{NFSU2_TR(0x4506e6);
if(r1(R+518)){{goto L4506f1;}}
}
B4506e8:L4506e8:{c.instructions+=2;NFSU2_TR(0x4506e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4506eb:{NFSU2_TR(0x4506eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45077a;}}
}
B4506f1:L4506f1:{c.instructions+=29;NFSU2_TR(0x4506f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x109ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4506f7:{NFSU2_TR(0x4506f7);
__builtin_memmove((R+0),(R+12),4);
}
B4506f9:{NFSU2_TR(0x4506f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4506ff:{NFSU2_TR(0x4506ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B450702:{NFSU2_TR(0x450702);
u8 U[13];
w4(U+0,u32(u32(u32(0x20eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B450709:{NFSU2_TR(0x450709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B45070c:{NFSU2_TR(0x45070c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B450712:{NFSU2_TR(0x450712);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450718:{NFSU2_TR(0x450718);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45071b:{NFSU2_TR(0x45071b);
__builtin_memmove((R+8),(R+28),4);
}
B45071d:{NFSU2_TR(0x45071d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B45071f:{NFSU2_TR(0x45071f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B450725:{NFSU2_TR(0x450725);
u8 U[13];
w4(U+0,u32(u32(u32(0x212ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B45072c:{NFSU2_TR(0x45072c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B45072e:{NFSU2_TR(0x45072e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B450734:{NFSU2_TR(0x450734);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B450737:{NFSU2_TR(0x450737);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B450739:{NFSU2_TR(0x450739);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B45073c:{NFSU2_TR(0x45073c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B450742:{NFSU2_TR(0x450742);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B450745:{NFSU2_TR(0x450745);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45074b:{NFSU2_TR(0x45074b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450751:{NFSU2_TR(0x450751);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B450757:{NFSU2_TR(0x450757);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45075a:{NFSU2_TR(0x45075a);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B450761:{NFSU2_TR(0x450761);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B450767:{NFSU2_TR(0x450767);
u8 U[13];
w4(U+0,u32(u32(u32(0x219ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B45076e:{NFSU2_TR(0x45076e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B450774:{NFSU2_TR(0x450774);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45077a:L45077a:{c.instructions+=3;NFSU2_TR(0x45077a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45077b:{NFSU2_TR(0x45077b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45077c:{NFSU2_TR(0x45077c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45077d:L45077d:{c.instructions+=3;NFSU2_TR(0x45077d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45077e:{NFSU2_TR(0x45077e);
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
B450781:{NFSU2_TR(0x450781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450790:L450790:{c.instructions+=11;NFSU2_TR(0x450790);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450791:{NFSU2_TR(0x450791);
__builtin_memmove((R+20),(R+16),4);
}
B450793:{NFSU2_TR(0x450793);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B450796:{NFSU2_TR(0x450796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B45079c:{NFSU2_TR(0x45079c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45079d:{NFSU2_TR(0x45079d);
__builtin_memmove((R+12),(R+4),4);
}
B45079f:{NFSU2_TR(0x45079f);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x32ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4507a6:{NFSU2_TR(0x4507a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507a7:{NFSU2_TR(0x4507a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507a8:{NFSU2_TR(0x4507a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4507ac:{NFSU2_TR(0x4507ac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L450c80;}}
}
B4507b2:L4507b2:{c.instructions+=12;NFSU2_TR(0x4507b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4507b8:{NFSU2_TR(0x4507b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507ba:{NFSU2_TR(0x4507ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4507be:{NFSU2_TR(0x4507be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507bf:{NFSU2_TR(0x4507bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4507c3:{NFSU2_TR(0x4507c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507c4:{NFSU2_TR(0x4507c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507c6:{NFSU2_TR(0x4507c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4507c7:{NFSU2_TR(0x4507c7);
__builtin_memmove((R+4),(R+12),4);
}
B4507c9:{NFSU2_TR(0x4507c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4507d1:{NFSU2_TR(0x4507d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4507d9:{NFSU2_TR(0x4507d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4507deull));
TAIL_STATIC(0x44fe80u,44f);
}
B4507de:L4507de:{c.instructions+=11;NFSU2_TR(0x4507de);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4507e4:{NFSU2_TR(0x4507e4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4507e8:{NFSU2_TR(0x4507e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4507ee:{NFSU2_TR(0x4507ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4507f2:{NFSU2_TR(0x4507f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4507f5:{NFSU2_TR(0x4507f5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4507f9:{NFSU2_TR(0x4507f9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4507fb:{NFSU2_TR(0x4507fb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4507fc:{NFSU2_TR(0x4507fc);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4507fe:{NFSU2_TR(0x4507fe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450802:{NFSU2_TR(0x450802);
if(r1(R+518)){{goto L450838;}}
}
B450804:L450804:{c.instructions+=3;NFSU2_TR(0x450804);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B450806:{NFSU2_TR(0x450806);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450808:{NFSU2_TR(0x450808);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L450838;}}
}
B45080a:L45080a:{c.instructions+=1;NFSU2_TR(0x45080a);
__builtin_memmove((R+12),(R+12),4);
}
B450810:L450810:{c.instructions+=9;NFSU2_TR(0x450810);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450816:{NFSU2_TR(0x450816);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B450818:{NFSU2_TR(0x450818);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45081e:{NFSU2_TR(0x45081e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B450820:{NFSU2_TR(0x450820);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450826:{NFSU2_TR(0x450826);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B45082c:{NFSU2_TR(0x45082c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B45082d:{NFSU2_TR(0x45082d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45082f:{NFSU2_TR(0x45082f);
w4(R+4,u32(0x22ull));
}
B450834:L450834:{c.instructions+=1;NFSU2_TR(0x450834);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L450836;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450834u);}goto L450834;}
}
B450836:L450836:{c.instructions+=1;NFSU2_TR(0x450836);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450810u);}goto L450810;}}
}
B450838:L450838:{c.instructions+=6;NFSU2_TR(0x450838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45083b:{NFSU2_TR(0x45083b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B450841:{NFSU2_TR(0x450841);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B450843:{NFSU2_TR(0x450843);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19cull))));
__builtin_memmove((R+24),(U+0),4);
}
B450849:{NFSU2_TR(0x450849);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45084f:{NFSU2_TR(0x45084f);
w4(R+4,u32(0x22ull));
}
B450854:L450854:{c.instructions+=1;NFSU2_TR(0x450854);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L450856;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450854u);}goto L450854;}
}
B450856:L450856:{c.instructions+=8;NFSU2_TR(0x450856);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45085a:{NFSU2_TR(0x45085a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450860:{NFSU2_TR(0x450860);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450866:{NFSU2_TR(0x450866);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45086c:{NFSU2_TR(0x45086c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B45086d:{NFSU2_TR(0x45086d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45086f:{NFSU2_TR(0x45086f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450875:{NFSU2_TR(0x450875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45087aull));
TAIL_STATIC(0x48b1e0u,48b);
}
B45087a:L45087a:{c.instructions+=3;NFSU2_TR(0x45087a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45087d:{NFSU2_TR(0x45087d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45087f:{NFSU2_TR(0x45087f);
if(r1(R+518)){{goto L450c16;}}
}
B450885:L450885:{c.instructions+=4;NFSU2_TR(0x450885);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450888:{NFSU2_TR(0x450888);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B45088b:{NFSU2_TR(0x45088b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45088d:{NFSU2_TR(0x45088d);
if(r1(R+518)){{goto L450c16;}}
}
B450893:L450893:{c.instructions+=3;NFSU2_TR(0x450893);
__builtin_memmove((R+24),(R+4),4);
}
B450895:{NFSU2_TR(0x450895);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450897:{NFSU2_TR(0x450897);
if(r1(R+518)){{goto L450c16;}}
}
B45089d:L45089d:{c.instructions+=3;NFSU2_TR(0x45089d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4508a0:{NFSU2_TR(0x4508a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4508a2:{NFSU2_TR(0x4508a2);
if(r1(R+518)){{goto L450c16;}}
}
B4508a8:L4508a8:{c.instructions+=2;NFSU2_TR(0x4508a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4508ac:{NFSU2_TR(0x4508ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L450c16;}}
}
B4508b2:L4508b2:{c.instructions+=6;NFSU2_TR(0x4508b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4508b6:{NFSU2_TR(0x4508b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508b7:{NFSU2_TR(0x4508b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4508bb:{NFSU2_TR(0x4508bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508bc:{NFSU2_TR(0x4508bc);
__builtin_memmove((R+4),(R+24),4);
}
B4508be:{NFSU2_TR(0x4508be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4508c3ull));
TAIL_STATIC(0x446180u,446);
}
B4508c3:L4508c3:{c.instructions+=5;NFSU2_TR(0x4508c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508c4:{NFSU2_TR(0x4508c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4508c8:{NFSU2_TR(0x4508c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508c9:{NFSU2_TR(0x4508c9);
__builtin_memmove((R+4),(R+24),4);
}
B4508cb:{NFSU2_TR(0x4508cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4508d0ull));
TAIL_STATIC(0x446210u,446);
}
B4508d0:L4508d0:{c.instructions+=5;NFSU2_TR(0x4508d0);
__builtin_memmove((R+0),gp(0x786f8c),4);
}
B4508d5:{NFSU2_TR(0x4508d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508d6:{NFSU2_TR(0x4508d6);
__builtin_memmove((R+4),(R+24),4);
}
B4508d8:{NFSU2_TR(0x4508d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4508dc:{NFSU2_TR(0x4508dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4508e1ull));
TAIL_STATIC(0x4462a0u,446);
}
B4508e1:L4508e1:{c.instructions+=4;NFSU2_TR(0x4508e1);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B4508e4:{NFSU2_TR(0x4508e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508e5:{NFSU2_TR(0x4508e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4508e9:{NFSU2_TR(0x4508e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4508eeull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4508ee:L4508ee:{c.instructions+=4;NFSU2_TR(0x4508ee);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4508f2:{NFSU2_TR(0x4508f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4508f6:{NFSU2_TR(0x4508f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4508f7:{NFSU2_TR(0x4508f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4508fcull));
TAIL_STATIC(0x43c370u,43c);
}
B4508fc:L4508fc:{c.instructions+=14;NFSU2_TR(0x4508fc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B450900:{NFSU2_TR(0x450900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450903:{NFSU2_TR(0x450903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B450905:{NFSU2_TR(0x450905);
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
B450908:{NFSU2_TR(0x450908);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45090c:{NFSU2_TR(0x45090c);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450912:{NFSU2_TR(0x450912);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B450914:{NFSU2_TR(0x450914);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45091a:{NFSU2_TR(0x45091a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45091e:{NFSU2_TR(0x45091e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B450920:{NFSU2_TR(0x450920);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450926:{NFSU2_TR(0x450926);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45092a:{NFSU2_TR(0x45092a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45092e:{NFSU2_TR(0x45092e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450933ull));
TAIL_STATIC(0x5748b0u,574);
}
B450933:L450933:{c.instructions+=9;NFSU2_TR(0x450933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450936:{NFSU2_TR(0x450936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B450938:{NFSU2_TR(0x450938);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45093c:{NFSU2_TR(0x45093c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450940:{NFSU2_TR(0x450940);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450944:{NFSU2_TR(0x450944);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450948:{NFSU2_TR(0x450948);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45094a:{NFSU2_TR(0x45094a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45094e:{NFSU2_TR(0x45094e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450953ull));
TAIL_STATIC(0x5748b0u,574);
}
B450953:L450953:{c.instructions+=9;NFSU2_TR(0x450953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450956:{NFSU2_TR(0x450956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B450958:{NFSU2_TR(0x450958);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45095c:{NFSU2_TR(0x45095c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450960:{NFSU2_TR(0x450960);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450964:{NFSU2_TR(0x450964);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450968:{NFSU2_TR(0x450968);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45096a:{NFSU2_TR(0x45096a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45096e:{NFSU2_TR(0x45096e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450973ull));
TAIL_STATIC(0x5748b0u,574);
}
B450973:L450973:{c.instructions+=9;NFSU2_TR(0x450973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450976:{NFSU2_TR(0x450976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B450978:{NFSU2_TR(0x450978);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45097c:{NFSU2_TR(0x45097c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450980:{NFSU2_TR(0x450980);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450984:{NFSU2_TR(0x450984);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450988:{NFSU2_TR(0x450988);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45098a:{NFSU2_TR(0x45098a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45098e:{NFSU2_TR(0x45098e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450993ull));
TAIL_STATIC(0x5748b0u,574);
}
B450993:L450993:{c.instructions+=9;NFSU2_TR(0x450993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450996:{NFSU2_TR(0x450996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B450998:{NFSU2_TR(0x450998);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45099c:{NFSU2_TR(0x45099c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4509a0:{NFSU2_TR(0x4509a0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4509a4:{NFSU2_TR(0x4509a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4509a6:{NFSU2_TR(0x4509a6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4509aa:{NFSU2_TR(0x4509aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4509ae:{NFSU2_TR(0x4509ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4509b3ull));
TAIL_STATIC(0x5748b0u,574);
}
B4509b3:L4509b3:{c.instructions+=5;NFSU2_TR(0x4509b3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4509b7:{NFSU2_TR(0x4509b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4509ba:{NFSU2_TR(0x4509ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4509bc:{NFSU2_TR(0x4509bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4509c0:{NFSU2_TR(0x4509c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4509c5ull));
TAIL_STATIC(0x5748b0u,574);
}
B4509c5:L4509c5:{c.instructions+=5;NFSU2_TR(0x4509c5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4509c9:{NFSU2_TR(0x4509c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4509cc:{NFSU2_TR(0x4509cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4509ce:{NFSU2_TR(0x4509ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4509d2:{NFSU2_TR(0x4509d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4509d7ull));
TAIL_STATIC(0x5748b0u,574);
}
B4509d7:L4509d7:{c.instructions+=6;NFSU2_TR(0x4509d7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4509db:{NFSU2_TR(0x4509db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4509dc:{NFSU2_TR(0x4509dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4509e3:{NFSU2_TR(0x4509e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4509e4:{NFSU2_TR(0x4509e4);
__builtin_memmove((R+4),(R+24),4);
}
B4509e6:{NFSU2_TR(0x4509e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4509ebull));
TAIL_STATIC(0x4462f0u,446);
}
B4509eb:L4509eb:{c.instructions+=5;NFSU2_TR(0x4509eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4509ec:{NFSU2_TR(0x4509ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4509f0:{NFSU2_TR(0x4509f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4509f1:{NFSU2_TR(0x4509f1);
__builtin_memmove((R+4),(R+24),4);
}
B4509f3:{NFSU2_TR(0x4509f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4509f8ull));
TAIL_STATIC(0x446360u,446);
}
B4509f8:L4509f8:{c.instructions+=5;NFSU2_TR(0x4509f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4509fb:{NFSU2_TR(0x4509fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4509fd:{NFSU2_TR(0x4509fd);
__builtin_memmove((R+4),(R+24),4);
}
B4509ff:{NFSU2_TR(0x4509ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a03:{NFSU2_TR(0x450a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450a08ull));
TAIL_STATIC(0x5748b0u,574);
}
B450a08:L450a08:{c.instructions+=55;NFSU2_TR(0x450a08);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450a0c:{NFSU2_TR(0x450a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450a10:{NFSU2_TR(0x450a10);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450a14:{NFSU2_TR(0x450a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450a18:{NFSU2_TR(0x450a18);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450a1c:{NFSU2_TR(0x450a1c);
__builtin_memmove((R+4),(R+0),4);
}
B450a1e:{NFSU2_TR(0x450a1e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450a22:{NFSU2_TR(0x450a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a28:{NFSU2_TR(0x450a28);
__builtin_memmove((R+0),(R+8),4);
}
B450a2a:{NFSU2_TR(0x450a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a30:{NFSU2_TR(0x450a30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B450a32:{NFSU2_TR(0x450a32);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450a36:{NFSU2_TR(0x450a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a3c:{NFSU2_TR(0x450a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a42:{NFSU2_TR(0x450a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450a46:{NFSU2_TR(0x450a46);
__builtin_memmove((R+8),(R+4),4);
}
B450a48:{NFSU2_TR(0x450a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a4e:{NFSU2_TR(0x450a4e);
__builtin_memmove((R+4),(R+0),4);
}
B450a50:{NFSU2_TR(0x450a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a56:{NFSU2_TR(0x450a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450a5a:{NFSU2_TR(0x450a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a60:{NFSU2_TR(0x450a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450a64:{NFSU2_TR(0x450a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a6a:{NFSU2_TR(0x450a6a);
__builtin_memmove((R+0),(R+8),4);
}
B450a6c:{NFSU2_TR(0x450a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a72:{NFSU2_TR(0x450a72);
__builtin_memmove((R+8),(R+4),4);
}
B450a74:{NFSU2_TR(0x450a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a7a:{NFSU2_TR(0x450a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450a7e:{NFSU2_TR(0x450a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a84:{NFSU2_TR(0x450a84);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450a88:{NFSU2_TR(0x450a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a8e:{NFSU2_TR(0x450a8e);
__builtin_memmove((R+4),(R+0),4);
}
B450a90:{NFSU2_TR(0x450a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a96:{NFSU2_TR(0x450a96);
__builtin_memmove((R+0),(R+8),4);
}
B450a98:{NFSU2_TR(0x450a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450a9e:{NFSU2_TR(0x450a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450aa2:{NFSU2_TR(0x450aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450aa8:{NFSU2_TR(0x450aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450aae:{NFSU2_TR(0x450aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450ab2:{NFSU2_TR(0x450ab2);
__builtin_memmove((R+8),(R+4),4);
}
B450ab4:{NFSU2_TR(0x450ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450aba:{NFSU2_TR(0x450aba);
__builtin_memmove((R+4),(R+0),4);
}
B450abc:{NFSU2_TR(0x450abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450ac2:{NFSU2_TR(0x450ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450ac6:{NFSU2_TR(0x450ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450acc:{NFSU2_TR(0x450acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450ad0:{NFSU2_TR(0x450ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450ad6:{NFSU2_TR(0x450ad6);
__builtin_memmove((R+0),(R+8),4);
}
B450ad8:{NFSU2_TR(0x450ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450ade:{NFSU2_TR(0x450ade);
__builtin_memmove((R+8),(R+4),4);
}
B450ae0:{NFSU2_TR(0x450ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450ae6:{NFSU2_TR(0x450ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450aec:{NFSU2_TR(0x450aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450af2:{NFSU2_TR(0x450af2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450af8:{NFSU2_TR(0x450af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450afdull));
TAIL_STATIC(0x75bed4u,75b);
}
B450afd:L450afd:{c.instructions+=9;NFSU2_TR(0x450afd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b01:{NFSU2_TR(0x450b01);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450b05:{NFSU2_TR(0x450b05);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x294ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b0b:{NFSU2_TR(0x450b0b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b0f:{NFSU2_TR(0x450b0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b15:{NFSU2_TR(0x450b15);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450b19:{NFSU2_TR(0x450b19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B450b1b:{NFSU2_TR(0x450b1b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450b21:{NFSU2_TR(0x450b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450b26ull));
TAIL_STATIC(0x75bed4u,75b);
}
B450b26:L450b26:{c.instructions+=9;NFSU2_TR(0x450b26);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b2a:{NFSU2_TR(0x450b2a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450b2e:{NFSU2_TR(0x450b2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x296ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b34:{NFSU2_TR(0x450b34);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b38:{NFSU2_TR(0x450b38);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b3e:{NFSU2_TR(0x450b3e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450b42:{NFSU2_TR(0x450b42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B450b44:{NFSU2_TR(0x450b44);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450b4a:{NFSU2_TR(0x450b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450b4full));
TAIL_STATIC(0x75bed4u,75b);
}
B450b4f:L450b4f:{c.instructions+=5;NFSU2_TR(0x450b4f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b56:{NFSU2_TR(0x450b56);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450b5c:{NFSU2_TR(0x450b5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b62:{NFSU2_TR(0x450b62);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x211ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b68:{NFSU2_TR(0x450b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450b6dull));
TAIL_STATIC(0x75bed4u,75b);
}
B450b6d:L450b6d:{c.instructions+=5;NFSU2_TR(0x450b6d);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b74:{NFSU2_TR(0x450b74);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450b7a:{NFSU2_TR(0x450b7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b80:{NFSU2_TR(0x450b80);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x215ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b86:{NFSU2_TR(0x450b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450b8bull));
TAIL_STATIC(0x75bed4u,75b);
}
B450b8b:L450b8b:{c.instructions+=5;NFSU2_TR(0x450b8b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450b92:{NFSU2_TR(0x450b92);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450b98:{NFSU2_TR(0x450b98);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450b9e:{NFSU2_TR(0x450b9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x216ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450ba4:{NFSU2_TR(0x450ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450ba9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B450ba9:L450ba9:{c.instructions+=5;NFSU2_TR(0x450ba9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450bad:{NFSU2_TR(0x450bad);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450bb3:{NFSU2_TR(0x450bb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450bb9:{NFSU2_TR(0x450bb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x217ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450bbf:{NFSU2_TR(0x450bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450bc4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B450bc4:L450bc4:{c.instructions+=5;NFSU2_TR(0x450bc4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450bc8:{NFSU2_TR(0x450bc8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450bce:{NFSU2_TR(0x450bce);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450bd4:{NFSU2_TR(0x450bd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x21aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450bda:{NFSU2_TR(0x450bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450bdfull));
TAIL_STATIC(0x75bed4u,75b);
}
B450bdf:L450bdf:{c.instructions+=9;NFSU2_TR(0x450bdf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450be3:{NFSU2_TR(0x450be3);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450be7:{NFSU2_TR(0x450be7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450bed:{NFSU2_TR(0x450bed);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B450bef:{NFSU2_TR(0x450bef);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x21bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450bf5:{NFSU2_TR(0x450bf5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B450bf9:{NFSU2_TR(0x450bf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B450bfb:{NFSU2_TR(0x450bfb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B450c01:{NFSU2_TR(0x450c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450c06ull));
TAIL_STATIC(0x75bed4u,75b);
}
B450c06:L450c06:{c.instructions+=3;NFSU2_TR(0x450c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B450c0a:{NFSU2_TR(0x450c0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450c10:{NFSU2_TR(0x450c10);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x21dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450c16:L450c16:{c.instructions+=3;NFSU2_TR(0x450c16);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B450c19:{NFSU2_TR(0x450c19);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B450c1b:{NFSU2_TR(0x450c1b);
if(r1(R+518)){{goto L450c3e;}}
}
B450c1d:L450c1d:{c.instructions+=9;NFSU2_TR(0x450c1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B450c20:{NFSU2_TR(0x450c20);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B450c22:{NFSU2_TR(0x450c22);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B450c26:{NFSU2_TR(0x450c26);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B450c2a:{NFSU2_TR(0x450c2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450c2b:{NFSU2_TR(0x450c2b);
__builtin_memmove((R+4),(R+28),4);
}
B450c2d:{NFSU2_TR(0x450c2d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B450c32:{NFSU2_TR(0x450c32);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B450c39:{NFSU2_TR(0x450c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450c3eull));
TAIL_STATIC(0x447970u,447);
}
B450c3e:L450c3e:{c.instructions+=6;NFSU2_TR(0x450c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450c44:{NFSU2_TR(0x450c44);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450c48:{NFSU2_TR(0x450c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450c4e:{NFSU2_TR(0x450c4e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B450c4f:{NFSU2_TR(0x450c4f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B450c51:{NFSU2_TR(0x450c51);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L450c7a;}}
}
B450c53:L450c53:{c.instructions+=3;NFSU2_TR(0x450c53);
__builtin_memmove((R+8),(R+4),4);
}
B450c55:{NFSU2_TR(0x450c55);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B450c5b:{NFSU2_TR(0x450c5b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B450c62:L450c62:{c.instructions+=5;NFSU2_TR(0x450c62);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450c64:{NFSU2_TR(0x450c64);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B450c68:{NFSU2_TR(0x450c68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B450c6a:{NFSU2_TR(0x450c6a);
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
B450c6d:{NFSU2_TR(0x450c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L450c7a;}}
}
B450c6f:L450c6f:{c.instructions+=4;NFSU2_TR(0x450c6f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B450c70:{NFSU2_TR(0x450c70);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x88ull))));
}
B450c76:{NFSU2_TR(0x450c76);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B450c78:{NFSU2_TR(0x450c78);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450c62u);}goto L450c62;}}
}
B450c7a:L450c7a:{c.instructions+=1;NFSU2_TR(0x450c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450c80:L450c80:{c.instructions+=6;NFSU2_TR(0x450c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B450c81:{NFSU2_TR(0x450c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450c82:{NFSU2_TR(0x450c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450c83:{NFSU2_TR(0x450c83);
__builtin_memmove((R+16),(R+20),4);
}
B450c85:{NFSU2_TR(0x450c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B450c86:{NFSU2_TR(0x450c86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450c90:L450c90:{c.instructions+=5;NFSU2_TR(0x450c90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450c91:{NFSU2_TR(0x450c91);
__builtin_memmove((R+12),(R+4),4);
}
B450c93:{NFSU2_TR(0x450c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450c99:{NFSU2_TR(0x450c99);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
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
B450c9f:{NFSU2_TR(0x450c9f);
if(r1(R+518)){{goto L450e7e;}}
}
B450ca5:L450ca5:{c.instructions+=5;NFSU2_TR(0x450ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450cab:{NFSU2_TR(0x450cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450cb1:{NFSU2_TR(0x450cb1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450cb2:{NFSU2_TR(0x450cb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450cb3:{NFSU2_TR(0x450cb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450cb4:L450cb4:{c.instructions+=5;NFSU2_TR(0x450cb4);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+20,u32(r2(U+12)));
}
B450cb9:{NFSU2_TR(0x450cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B450cbc:{NFSU2_TR(0x450cbc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B450cbe:{NFSU2_TR(0x450cbe);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450cc0:{NFSU2_TR(0x450cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450cb4u);}goto L450cb4;}}
}
B450cc2:L450cc2:{c.instructions+=4;NFSU2_TR(0x450cc2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B450cc5:{NFSU2_TR(0x450cc5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B450cc8:{NFSU2_TR(0x450cc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B450ccc:{NFSU2_TR(0x450ccc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L450e69;}}
}
B450cd2:L450cd2:{c.instructions+=1;NFSU2_TR(0x450cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x450e80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B450cd9:L450cd9:{c.instructions+=5;NFSU2_TR(0x450cd9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450cdb:{NFSU2_TR(0x450cdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B450cde:{NFSU2_TR(0x450cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450cdf:{NFSU2_TR(0x450cdf);
__builtin_memmove((R+4),(R+12),4);
}
B450ce1:{NFSU2_TR(0x450ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450ce6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450790u);}goto L450790;}
}
B450ce6:L450ce6:{c.instructions+=4;NFSU2_TR(0x450ce6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B450ce9:{NFSU2_TR(0x450ce9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450cef:{NFSU2_TR(0x450cef);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B450cf6:{NFSU2_TR(0x450cf6);
w4(R+4,u32(0x22ull));
}
B450cfb:L450cfb:{c.instructions+=1;NFSU2_TR(0x450cfb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L450cfd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x450cfbu);}goto L450cfb;}
}
B450cfd:L450cfd:{c.instructions+=1;NFSU2_TR(0x450cfd);
{goto L450e69;}
}
B450d02:L450d02:{c.instructions+=4;NFSU2_TR(0x450d02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450d04:{NFSU2_TR(0x450d04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450d05:{NFSU2_TR(0x450d05);
__builtin_memmove((R+4),(R+12),4);
}
B450d07:{NFSU2_TR(0x450d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450d0cull));
TAIL_STATIC(0x448820u,448);
}
B450d0c:L450d0c:{c.instructions+=1;NFSU2_TR(0x450d0c);
{goto L450e69;}
}
B450d11:L450d11:{c.instructions+=4;NFSU2_TR(0x450d11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B450d14:{NFSU2_TR(0x450d14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450d1a:{NFSU2_TR(0x450d1a);
u8 U[13];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B450d21:{NFSU2_TR(0x450d21);
{goto L450e69;}
}
B450d26:L450d26:{c.instructions+=7;NFSU2_TR(0x450d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450d29:{NFSU2_TR(0x450d29);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450d2f:{NFSU2_TR(0x450d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B450d32:{NFSU2_TR(0x450d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450d38:{NFSU2_TR(0x450d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450d3b:{NFSU2_TR(0x450d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450d41:{NFSU2_TR(0x450d41);
{goto L450e69;}
}
B450d46:L450d46:{c.instructions+=4;NFSU2_TR(0x450d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450d49:{NFSU2_TR(0x450d49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450d4f:{NFSU2_TR(0x450d4f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B450d56:{NFSU2_TR(0x450d56);
{goto L450e69;}
}
B450d5b:L450d5b:{c.instructions+=3;NFSU2_TR(0x450d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450d5e:{NFSU2_TR(0x450d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450d64:{NFSU2_TR(0x450d64);
{goto L450e69;}
}
B450d69:L450d69:{c.instructions+=5;NFSU2_TR(0x450d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450d6c:{NFSU2_TR(0x450d6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450d6d:{NFSU2_TR(0x450d6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450d6e:{NFSU2_TR(0x450d6e);
__builtin_memmove((R+4),(R+12),4);
}
B450d70:{NFSU2_TR(0x450d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450d75ull));
TAIL_STATIC(0x4498a0u,449);
}
B450d75:L450d75:{c.instructions+=1;NFSU2_TR(0x450d75);
{goto L450e69;}
}
B450d7a:L450d7a:{c.instructions+=5;NFSU2_TR(0x450d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450d7d:{NFSU2_TR(0x450d7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450d7e:{NFSU2_TR(0x450d7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450d7f:{NFSU2_TR(0x450d7f);
__builtin_memmove((R+4),(R+12),4);
}
B450d81:{NFSU2_TR(0x450d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450d86ull));
TAIL_STATIC(0x449d00u,449);
}
B450d86:L450d86:{c.instructions+=1;NFSU2_TR(0x450d86);
{goto L450e69;}
}
B450d8b:L450d8b:{c.instructions+=6;NFSU2_TR(0x450d8b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450d91:{NFSU2_TR(0x450d91);
u8 U[13];
w4(U+0,u32(u32(u32(0x19eull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450d98:{NFSU2_TR(0x450d98);
u8 U[12];
w4(U+0,u32(u32(u32(0x19eull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450d9f:{NFSU2_TR(0x450d9f);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450da2:{NFSU2_TR(0x450da2);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450da4:{NFSU2_TR(0x450da4);
{goto L450e69;}
}
B450da9:L450da9:{c.instructions+=6;NFSU2_TR(0x450da9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450daf:{NFSU2_TR(0x450daf);
u8 U[13];
w4(U+0,u32(u32(u32(0x19full))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450db6:{NFSU2_TR(0x450db6);
u8 U[12];
w4(U+0,u32(u32(u32(0x19full))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450dbd:{NFSU2_TR(0x450dbd);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450dc0:{NFSU2_TR(0x450dc0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450dc2:{NFSU2_TR(0x450dc2);
{goto L450e69;}
}
B450dc7:L450dc7:{c.instructions+=6;NFSU2_TR(0x450dc7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450dcd:{NFSU2_TR(0x450dcd);
u8 U[13];
w4(U+0,u32(u32(u32(0x19dull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450dd4:{NFSU2_TR(0x450dd4);
u8 U[12];
w4(U+0,u32(u32(u32(0x19dull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450ddb:{NFSU2_TR(0x450ddb);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450dde:{NFSU2_TR(0x450dde);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450de0:{NFSU2_TR(0x450de0);
{goto L450e69;}
}
B450de5:L450de5:{c.instructions+=6;NFSU2_TR(0x450de5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450deb:{NFSU2_TR(0x450deb);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450df2:{NFSU2_TR(0x450df2);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450df9:{NFSU2_TR(0x450df9);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450dfc:{NFSU2_TR(0x450dfc);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450dfe:{NFSU2_TR(0x450dfe);
{goto L450e69;}
}
B450e00:L450e00:{c.instructions+=2;NFSU2_TR(0x450e00);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B450e07:{NFSU2_TR(0x450e07);
if(r1(R+518)){{goto L450e69;}}
}
B450e09:L450e09:{c.instructions+=6;NFSU2_TR(0x450e09);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450e0f:{NFSU2_TR(0x450e0f);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450e16:{NFSU2_TR(0x450e16);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450e1d:{NFSU2_TR(0x450e1d);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450e20:{NFSU2_TR(0x450e20);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450e22:{NFSU2_TR(0x450e22);
{goto L450e69;}
}
B450e24:L450e24:{c.instructions+=6;NFSU2_TR(0x450e24);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450e2a:{NFSU2_TR(0x450e2a);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450e31:{NFSU2_TR(0x450e31);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450e38:{NFSU2_TR(0x450e38);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450e3b:{NFSU2_TR(0x450e3b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450e3d:{NFSU2_TR(0x450e3d);
{goto L450e69;}
}
B450e3f:L450e3f:{c.instructions+=6;NFSU2_TR(0x450e3f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450e45:{NFSU2_TR(0x450e45);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a5ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B450e4c:{NFSU2_TR(0x450e4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a5ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B450e53:{NFSU2_TR(0x450e53);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B450e56:{NFSU2_TR(0x450e56);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B450e58:{NFSU2_TR(0x450e58);
{goto L450e69;}
}
B450e5a:L450e5a:{c.instructions+=4;NFSU2_TR(0x450e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450e5d:{NFSU2_TR(0x450e5d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B450e60:{NFSU2_TR(0x450e60);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B450e66:{NFSU2_TR(0x450e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B450e69:L450e69:{c.instructions+=7;NFSU2_TR(0x450e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450e6f:{NFSU2_TR(0x450e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B450e70:{NFSU2_TR(0x450e70);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+20)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B450e72:{NFSU2_TR(0x450e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450e73:{NFSU2_TR(0x450e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450e79:{NFSU2_TR(0x450e79);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B450e7d:{NFSU2_TR(0x450e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B450e7e:L450e7e:{c.instructions+=2;NFSU2_TR(0x450e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450e7f:{NFSU2_TR(0x450e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450ed0:L450ed0:{c.instructions+=5;NFSU2_TR(0x450ed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450ed1:{NFSU2_TR(0x450ed1);
__builtin_memmove((R+24),(R+4),4);
}
B450ed3:{NFSU2_TR(0x450ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450ed9:{NFSU2_TR(0x450ed9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
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
B450edf:{NFSU2_TR(0x450edf);
if(r1(R+518)){{goto L450f74;}}
}
B450ee5:L450ee5:{c.instructions+=3;NFSU2_TR(0x450ee5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450ee6:{NFSU2_TR(0x450ee6);
__builtin_memmove((R+4),(R+24),4);
}
B450ee8:{NFSU2_TR(0x450ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450eedull));
TAIL_STATIC(0x442a10u,442);
}
B450eed:L450eed:{c.instructions+=3;NFSU2_TR(0x450eed);
__builtin_memmove((R+12),(R+0),4);
}
B450eef:{NFSU2_TR(0x450eef);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B450ef1:{NFSU2_TR(0x450ef1);
if(r1(R+518)){{goto L450f54;}}
}
B450ef3:L450ef3:{c.instructions+=2;NFSU2_TR(0x450ef3);
__builtin_memmove((R+4),(R+24),4);
}
B450ef5:{NFSU2_TR(0x450ef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450efaull));
TAIL_STATIC(0x442a10u,442);
}
B450efa:L450efa:{c.instructions+=2;NFSU2_TR(0x450efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450efc:{NFSU2_TR(0x450efc);
if(r1(R+518)){{goto L450f38;}}
}
B450efe:L450efe:{c.instructions+=6;NFSU2_TR(0x450efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450f04:{NFSU2_TR(0x450f04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f05:{NFSU2_TR(0x450f05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B450f08:{NFSU2_TR(0x450f08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f09:{NFSU2_TR(0x450f09);
__builtin_memmove((R+4),(R+28),4);
}
B450f0b:{NFSU2_TR(0x450f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450f10ull));
TAIL_STATIC(0x43be60u,43b);
}
B450f10:L450f10:{c.instructions+=3;NFSU2_TR(0x450f10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450f12:{NFSU2_TR(0x450f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B450f13:{NFSU2_TR(0x450f13);
if(r1(R+518)){{goto L450f38;}}
}
B450f15:L450f15:{c.instructions+=2;NFSU2_TR(0x450f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450f17:{NFSU2_TR(0x450f17);
if(r1(R+518)){{goto L450f38;}}
}
B450f19:L450f19:{c.instructions+=9;NFSU2_TR(0x450f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450f1f:{NFSU2_TR(0x450f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450f25:{NFSU2_TR(0x450f25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f26:{NFSU2_TR(0x450f26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f27:{NFSU2_TR(0x450f27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B450f2d:{NFSU2_TR(0x450f2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f2e:{NFSU2_TR(0x450f2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f2f:{NFSU2_TR(0x450f2f);
__builtin_memmove((R+4),(R+12),4);
}
B450f31:{NFSU2_TR(0x450f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450f36ull));
TAIL_STATIC(0x447b30u,447);
}
B450f36:L450f36:{c.instructions+=1;NFSU2_TR(0x450f36);
{goto L450f54;}
}
B450f38:L450f38:{c.instructions+=8;NFSU2_TR(0x450f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450f3e:{NFSU2_TR(0x450f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450f44:{NFSU2_TR(0x450f44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f45:{NFSU2_TR(0x450f45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f46:{NFSU2_TR(0x450f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B450f4c:{NFSU2_TR(0x450f4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f4d:{NFSU2_TR(0x450f4d);
__builtin_memmove((R+4),(R+12),4);
}
B450f4f:{NFSU2_TR(0x450f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450f54ull));
TAIL_STATIC(0x44f6e0u,44f);
}
B450f54:L450f54:{c.instructions+=5;NFSU2_TR(0x450f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B450f5a:{NFSU2_TR(0x450f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B450f64:{NFSU2_TR(0x450f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B450f6e:{NFSU2_TR(0x450f6e);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B450f73:{NFSU2_TR(0x450f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B450f74:L450f74:{c.instructions+=2;NFSU2_TR(0x450f74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B450f75:{NFSU2_TR(0x450f75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450f80:L450f80:{c.instructions+=5;NFSU2_TR(0x450f80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f81:{NFSU2_TR(0x450f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B450f85:{NFSU2_TR(0x450f85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f86:{NFSU2_TR(0x450f86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450f88:{NFSU2_TR(0x450f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450f8dull));
TAIL_STATIC(0x571a00u,571);
}
B450f8d:L450f8d:{c.instructions+=10;NFSU2_TR(0x450f8d);
w4(R+4,u32(r1(R+0)));
}
B450f90:{NFSU2_TR(0x450f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B450f94:{NFSU2_TR(0x450f94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B450f97:{NFSU2_TR(0x450f97);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B450f9b:{NFSU2_TR(0x450f9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B450f9f:{NFSU2_TR(0x450f9f);
w4(R+4,u32(0x7ec3f0ull));
}
B450fa4:{NFSU2_TR(0x450fa4);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B450faa:{NFSU2_TR(0x450faa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B450fad:{NFSU2_TR(0x450fad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450fae:{NFSU2_TR(0x450fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450fb3ull));
TAIL_STATIC(0x40c840u,40c);
}
B450fb3:L450fb3:{c.instructions+=3;NFSU2_TR(0x450fb3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B450fb7:{NFSU2_TR(0x450fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B450fb8:{NFSU2_TR(0x450fb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B450fc0:L450fc0:{c.instructions+=5;NFSU2_TR(0x450fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B450fc3:{NFSU2_TR(0x450fc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450fc4:{NFSU2_TR(0x450fc4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450fc6:{NFSU2_TR(0x450fc6);
__builtin_memmove((R+28),(R+4),4);
}
B450fc8:{NFSU2_TR(0x450fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450fcdull));
TAIL_STATIC(0x48b1e0u,48b);
}
B450fcd:L450fcd:{c.instructions+=3;NFSU2_TR(0x450fcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B450fd0:{NFSU2_TR(0x450fd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450fd2:{NFSU2_TR(0x450fd2);
if(r1(R+518)){TAIL_STATIC(0x4510abu,451);}
}
B450fd8:L450fd8:{c.instructions+=4;NFSU2_TR(0x450fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B450fdb:{NFSU2_TR(0x450fdb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B450fde:{NFSU2_TR(0x450fde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B450fe0:{NFSU2_TR(0x450fe0);
if(r1(R+518)){TAIL_STATIC(0x4510abu,451);}
}
B450fe6:L450fe6:{c.instructions+=3;NFSU2_TR(0x450fe6);
__builtin_memmove((R+0),(R+4),4);
}
B450fe8:{NFSU2_TR(0x450fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450fea:{NFSU2_TR(0x450fea);
if(r1(R+518)){TAIL_STATIC(0x4510abu,451);}
}
B450ff0:L450ff0:{c.instructions+=4;NFSU2_TR(0x450ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B450ff1:{NFSU2_TR(0x450ff1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B450ff4:{NFSU2_TR(0x450ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B450ff6:{NFSU2_TR(0x450ff6);
if(r1(R+518)){TAIL_STATIC(0x4510aau,451);}
}
B450ffc:L450ffc:{c.instructions+=1;NFSU2_TR(0x450ffc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x451000u,451);
}
XIT:NFSU2_TR_EXIT(0x450,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
