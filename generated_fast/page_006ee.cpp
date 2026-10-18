#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e5(u8* __restrict R,Cpu& c);
u32 body_6ed(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ee,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ee,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ee(u8* __restrict R,Cpu& c);
u32 page_6ee(Cpu& c){return body_6ee(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ee(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ee000:goto L6ee000;
case 0x6ee002:c.instructions+=3;goto B6ee002;
case 0x6ee004:c.instructions+=2;goto B6ee004;
case 0x6ee007:c.instructions+=1;goto B6ee007;
case 0x6ee010:goto L6ee010;
case 0x6ee013:c.instructions+=74;goto B6ee013;
case 0x6ee017:c.instructions+=73;goto B6ee017;
case 0x6ee019:c.instructions+=72;goto B6ee019;
case 0x6ee01d:c.instructions+=71;goto B6ee01d;
case 0x6ee01f:c.instructions+=70;goto B6ee01f;
case 0x6ee022:c.instructions+=69;goto B6ee022;
case 0x6ee024:c.instructions+=68;goto B6ee024;
case 0x6ee027:c.instructions+=67;goto B6ee027;
case 0x6ee029:c.instructions+=66;goto B6ee029;
case 0x6ee02d:c.instructions+=65;goto B6ee02d;
case 0x6ee02f:c.instructions+=64;goto B6ee02f;
case 0x6ee032:c.instructions+=63;goto B6ee032;
case 0x6ee036:c.instructions+=62;goto B6ee036;
case 0x6ee038:c.instructions+=61;goto B6ee038;
case 0x6ee03b:c.instructions+=60;goto B6ee03b;
case 0x6ee03f:c.instructions+=59;goto B6ee03f;
case 0x6ee043:c.instructions+=58;goto B6ee043;
case 0x6ee046:c.instructions+=57;goto B6ee046;
case 0x6ee04a:c.instructions+=56;goto B6ee04a;
case 0x6ee04c:c.instructions+=55;goto B6ee04c;
case 0x6ee04e:c.instructions+=54;goto B6ee04e;
case 0x6ee052:c.instructions+=53;goto B6ee052;
case 0x6ee054:c.instructions+=52;goto B6ee054;
case 0x6ee056:c.instructions+=51;goto B6ee056;
case 0x6ee05a:c.instructions+=50;goto B6ee05a;
case 0x6ee05e:c.instructions+=49;goto B6ee05e;
case 0x6ee060:c.instructions+=48;goto B6ee060;
case 0x6ee064:c.instructions+=47;goto B6ee064;
case 0x6ee067:c.instructions+=46;goto B6ee067;
case 0x6ee06b:c.instructions+=45;goto B6ee06b;
case 0x6ee06e:c.instructions+=44;goto B6ee06e;
case 0x6ee072:c.instructions+=43;goto B6ee072;
case 0x6ee075:c.instructions+=42;goto B6ee075;
case 0x6ee079:c.instructions+=41;goto B6ee079;
case 0x6ee07b:c.instructions+=40;goto B6ee07b;
case 0x6ee07d:c.instructions+=39;goto B6ee07d;
case 0x6ee083:c.instructions+=38;goto B6ee083;
case 0x6ee085:c.instructions+=37;goto B6ee085;
case 0x6ee089:c.instructions+=36;goto B6ee089;
case 0x6ee08d:c.instructions+=35;goto B6ee08d;
case 0x6ee090:c.instructions+=34;goto B6ee090;
case 0x6ee092:c.instructions+=33;goto B6ee092;
case 0x6ee096:c.instructions+=32;goto B6ee096;
case 0x6ee09a:c.instructions+=31;goto B6ee09a;
case 0x6ee09d:c.instructions+=30;goto B6ee09d;
case 0x6ee09f:c.instructions+=29;goto B6ee09f;
case 0x6ee0a1:c.instructions+=28;goto B6ee0a1;
case 0x6ee0a5:c.instructions+=27;goto B6ee0a5;
case 0x6ee0ab:c.instructions+=26;goto B6ee0ab;
case 0x6ee0ae:c.instructions+=25;goto B6ee0ae;
case 0x6ee0b2:c.instructions+=24;goto B6ee0b2;
case 0x6ee0b6:c.instructions+=23;goto B6ee0b6;
case 0x6ee0b8:c.instructions+=22;goto B6ee0b8;
case 0x6ee0ba:c.instructions+=21;goto B6ee0ba;
case 0x6ee0bc:c.instructions+=20;goto B6ee0bc;
case 0x6ee0c0:c.instructions+=19;goto B6ee0c0;
case 0x6ee0c3:c.instructions+=18;goto B6ee0c3;
case 0x6ee0c5:c.instructions+=17;goto B6ee0c5;
case 0x6ee0c8:c.instructions+=16;goto B6ee0c8;
case 0x6ee0ca:c.instructions+=15;goto B6ee0ca;
case 0x6ee0ce:c.instructions+=14;goto B6ee0ce;
case 0x6ee0d4:c.instructions+=13;goto B6ee0d4;
case 0x6ee0d7:c.instructions+=12;goto B6ee0d7;
case 0x6ee0db:c.instructions+=11;goto B6ee0db;
case 0x6ee0df:c.instructions+=10;goto B6ee0df;
case 0x6ee0e1:c.instructions+=9;goto B6ee0e1;
case 0x6ee0e3:c.instructions+=8;goto B6ee0e3;
case 0x6ee0e5:c.instructions+=7;goto B6ee0e5;
case 0x6ee0e9:c.instructions+=6;goto B6ee0e9;
case 0x6ee0ec:c.instructions+=5;goto B6ee0ec;
case 0x6ee0ee:c.instructions+=4;goto B6ee0ee;
case 0x6ee0f5:c.instructions+=3;goto B6ee0f5;
case 0x6ee0f8:c.instructions+=2;goto B6ee0f8;
case 0x6ee0fb:c.instructions+=1;goto B6ee0fb;
case 0x6ee100:goto L6ee100;
case 0x6ee102:c.instructions+=17;goto B6ee102;
case 0x6ee104:c.instructions+=16;goto B6ee104;
case 0x6ee109:c.instructions+=15;goto B6ee109;
case 0x6ee10c:c.instructions+=14;goto B6ee10c;
case 0x6ee112:c.instructions+=13;goto B6ee112;
case 0x6ee115:c.instructions+=12;goto B6ee115;
case 0x6ee118:c.instructions+=11;goto B6ee118;
case 0x6ee11b:c.instructions+=10;goto B6ee11b;
case 0x6ee11e:c.instructions+=9;goto B6ee11e;
case 0x6ee125:c.instructions+=8;goto B6ee125;
case 0x6ee128:c.instructions+=7;goto B6ee128;
case 0x6ee12b:c.instructions+=6;goto B6ee12b;
case 0x6ee12e:c.instructions+=5;goto B6ee12e;
case 0x6ee131:c.instructions+=4;goto B6ee131;
case 0x6ee134:c.instructions+=3;goto B6ee134;
case 0x6ee137:c.instructions+=2;goto B6ee137;
case 0x6ee13e:c.instructions+=1;goto B6ee13e;
case 0x6ee140:goto L6ee140;
case 0x6ee143:c.instructions+=9;goto B6ee143;
case 0x6ee144:c.instructions+=8;goto B6ee144;
case 0x6ee148:c.instructions+=7;goto B6ee148;
case 0x6ee14a:c.instructions+=6;goto B6ee14a;
case 0x6ee14d:c.instructions+=5;goto B6ee14d;
case 0x6ee14f:c.instructions+=4;goto B6ee14f;
case 0x6ee150:c.instructions+=3;goto B6ee150;
case 0x6ee154:c.instructions+=2;goto B6ee154;
case 0x6ee155:c.instructions+=1;goto B6ee155;
case 0x6ee158:goto L6ee158;
case 0x6ee15a:c.instructions+=1;goto B6ee15a;
case 0x6ee15c:goto L6ee15c;
case 0x6ee15f:c.instructions+=4;goto B6ee15f;
case 0x6ee165:c.instructions+=3;goto B6ee165;
case 0x6ee167:c.instructions+=2;goto B6ee167;
case 0x6ee16a:c.instructions+=1;goto B6ee16a;
case 0x6ee170:goto L6ee170;
case 0x6ee173:c.instructions+=6;goto B6ee173;
case 0x6ee175:c.instructions+=5;goto B6ee175;
case 0x6ee179:c.instructions+=4;goto B6ee179;
case 0x6ee17a:c.instructions+=3;goto B6ee17a;
case 0x6ee17e:c.instructions+=2;goto B6ee17e;
case 0x6ee17f:c.instructions+=1;goto B6ee17f;
case 0x6ee182:goto L6ee182;
case 0x6ee184:c.instructions+=1;goto B6ee184;
case 0x6ee186:goto L6ee186;
case 0x6ee188:c.instructions+=3;goto B6ee188;
case 0x6ee189:c.instructions+=2;goto B6ee189;
case 0x6ee18c:c.instructions+=1;goto B6ee18c;
case 0x6ee18f:goto L6ee18f;
case 0x6ee195:c.instructions+=28;goto B6ee195;
case 0x6ee199:c.instructions+=27;goto B6ee199;
case 0x6ee19c:c.instructions+=26;goto B6ee19c;
case 0x6ee1a0:c.instructions+=25;goto B6ee1a0;
case 0x6ee1a3:c.instructions+=24;goto B6ee1a3;
case 0x6ee1a7:c.instructions+=23;goto B6ee1a7;
case 0x6ee1a9:c.instructions+=22;goto B6ee1a9;
case 0x6ee1ab:c.instructions+=21;goto B6ee1ab;
case 0x6ee1ad:c.instructions+=20;goto B6ee1ad;
case 0x6ee1b1:c.instructions+=19;goto B6ee1b1;
case 0x6ee1b4:c.instructions+=18;goto B6ee1b4;
case 0x6ee1b8:c.instructions+=17;goto B6ee1b8;
case 0x6ee1ba:c.instructions+=16;goto B6ee1ba;
case 0x6ee1bc:c.instructions+=15;goto B6ee1bc;
case 0x6ee1bf:c.instructions+=14;goto B6ee1bf;
case 0x6ee1c1:c.instructions+=13;goto B6ee1c1;
case 0x6ee1c3:c.instructions+=12;goto B6ee1c3;
case 0x6ee1c5:c.instructions+=11;goto B6ee1c5;
case 0x6ee1c7:c.instructions+=10;goto B6ee1c7;
case 0x6ee1c9:c.instructions+=9;goto B6ee1c9;
case 0x6ee1cb:c.instructions+=8;goto B6ee1cb;
case 0x6ee1cd:c.instructions+=7;goto B6ee1cd;
case 0x6ee1cf:c.instructions+=6;goto B6ee1cf;
case 0x6ee1d1:c.instructions+=5;goto B6ee1d1;
case 0x6ee1d5:c.instructions+=4;goto B6ee1d5;
case 0x6ee1db:c.instructions+=3;goto B6ee1db;
case 0x6ee1dd:c.instructions+=2;goto B6ee1dd;
case 0x6ee1e0:c.instructions+=1;goto B6ee1e0;
case 0x6ee1e2:goto L6ee1e2;
case 0x6ee1e6:c.instructions+=26;goto B6ee1e6;
case 0x6ee1e8:c.instructions+=25;goto B6ee1e8;
case 0x6ee1ec:c.instructions+=24;goto B6ee1ec;
case 0x6ee1f0:c.instructions+=23;goto B6ee1f0;
case 0x6ee1f4:c.instructions+=22;goto B6ee1f4;
case 0x6ee1f6:c.instructions+=21;goto B6ee1f6;
case 0x6ee1f8:c.instructions+=20;goto B6ee1f8;
case 0x6ee1fa:c.instructions+=19;goto B6ee1fa;
case 0x6ee1fe:c.instructions+=18;goto B6ee1fe;
case 0x6ee202:c.instructions+=17;goto B6ee202;
case 0x6ee206:c.instructions+=16;goto B6ee206;
case 0x6ee20a:c.instructions+=15;goto B6ee20a;
case 0x6ee20c:c.instructions+=14;goto B6ee20c;
case 0x6ee20e:c.instructions+=13;goto B6ee20e;
case 0x6ee210:c.instructions+=12;goto B6ee210;
case 0x6ee212:c.instructions+=11;goto B6ee212;
case 0x6ee215:c.instructions+=10;goto B6ee215;
case 0x6ee216:c.instructions+=9;goto B6ee216;
case 0x6ee218:c.instructions+=8;goto B6ee218;
case 0x6ee21c:c.instructions+=7;goto B6ee21c;
case 0x6ee21e:c.instructions+=6;goto B6ee21e;
case 0x6ee220:c.instructions+=5;goto B6ee220;
case 0x6ee222:c.instructions+=4;goto B6ee222;
case 0x6ee225:c.instructions+=3;goto B6ee225;
case 0x6ee228:c.instructions+=2;goto B6ee228;
case 0x6ee22b:c.instructions+=1;goto B6ee22b;
case 0x6ee22e:goto L6ee22e;
case 0x6ee232:c.instructions+=8;goto B6ee232;
case 0x6ee236:c.instructions+=7;goto B6ee236;
case 0x6ee23a:c.instructions+=6;goto B6ee23a;
case 0x6ee23c:c.instructions+=5;goto B6ee23c;
case 0x6ee23f:c.instructions+=4;goto B6ee23f;
case 0x6ee241:c.instructions+=3;goto B6ee241;
case 0x6ee242:c.instructions+=2;goto B6ee242;
case 0x6ee245:c.instructions+=1;goto B6ee245;
case 0x6ee248:goto L6ee248;
case 0x6ee24a:c.instructions+=4;goto B6ee24a;
case 0x6ee24c:c.instructions+=3;goto B6ee24c;
case 0x6ee24d:c.instructions+=2;goto B6ee24d;
case 0x6ee250:c.instructions+=1;goto B6ee250;
case 0x6ee260:goto L6ee260;
case 0x6ee261:c.instructions+=53;goto B6ee261;
case 0x6ee265:c.instructions+=52;goto B6ee265;
case 0x6ee268:c.instructions+=51;goto B6ee268;
case 0x6ee26c:c.instructions+=50;goto B6ee26c;
case 0x6ee270:c.instructions+=49;goto B6ee270;
case 0x6ee273:c.instructions+=48;goto B6ee273;
case 0x6ee275:c.instructions+=47;goto B6ee275;
case 0x6ee277:c.instructions+=46;goto B6ee277;
case 0x6ee27b:c.instructions+=45;goto B6ee27b;
case 0x6ee27e:c.instructions+=44;goto B6ee27e;
case 0x6ee282:c.instructions+=43;goto B6ee282;
case 0x6ee285:c.instructions+=42;goto B6ee285;
case 0x6ee287:c.instructions+=41;goto B6ee287;
case 0x6ee289:c.instructions+=40;goto B6ee289;
case 0x6ee28f:c.instructions+=39;goto B6ee28f;
case 0x6ee296:c.instructions+=38;goto B6ee296;
case 0x6ee298:c.instructions+=37;goto B6ee298;
case 0x6ee29a:c.instructions+=36;goto B6ee29a;
case 0x6ee29c:c.instructions+=35;goto B6ee29c;
case 0x6ee29e:c.instructions+=34;goto B6ee29e;
case 0x6ee2a0:c.instructions+=33;goto B6ee2a0;
case 0x6ee2a2:c.instructions+=32;goto B6ee2a2;
case 0x6ee2a4:c.instructions+=31;goto B6ee2a4;
case 0x6ee2a6:c.instructions+=30;goto B6ee2a6;
case 0x6ee2aa:c.instructions+=29;goto B6ee2aa;
case 0x6ee2ae:c.instructions+=28;goto B6ee2ae;
case 0x6ee2b2:c.instructions+=27;goto B6ee2b2;
case 0x6ee2b6:c.instructions+=26;goto B6ee2b6;
case 0x6ee2b8:c.instructions+=25;goto B6ee2b8;
case 0x6ee2ba:c.instructions+=24;goto B6ee2ba;
case 0x6ee2be:c.instructions+=23;goto B6ee2be;
case 0x6ee2c0:c.instructions+=22;goto B6ee2c0;
case 0x6ee2c2:c.instructions+=21;goto B6ee2c2;
case 0x6ee2c4:c.instructions+=20;goto B6ee2c4;
case 0x6ee2c6:c.instructions+=19;goto B6ee2c6;
case 0x6ee2cc:c.instructions+=18;goto B6ee2cc;
case 0x6ee2d2:c.instructions+=17;goto B6ee2d2;
case 0x6ee2d4:c.instructions+=16;goto B6ee2d4;
case 0x6ee2da:c.instructions+=15;goto B6ee2da;
case 0x6ee2dc:c.instructions+=14;goto B6ee2dc;
case 0x6ee2de:c.instructions+=13;goto B6ee2de;
case 0x6ee2e2:c.instructions+=12;goto B6ee2e2;
case 0x6ee2e5:c.instructions+=11;goto B6ee2e5;
case 0x6ee2e7:c.instructions+=10;goto B6ee2e7;
case 0x6ee2ea:c.instructions+=9;goto B6ee2ea;
case 0x6ee2ec:c.instructions+=8;goto B6ee2ec;
case 0x6ee2ef:c.instructions+=7;goto B6ee2ef;
case 0x6ee2f2:c.instructions+=6;goto B6ee2f2;
case 0x6ee2f4:c.instructions+=5;goto B6ee2f4;
case 0x6ee2f6:c.instructions+=4;goto B6ee2f6;
case 0x6ee2fc:c.instructions+=3;goto B6ee2fc;
case 0x6ee2fe:c.instructions+=2;goto B6ee2fe;
case 0x6ee301:c.instructions+=1;goto B6ee301;
case 0x6ee303:goto L6ee303;
case 0x6ee307:c.instructions+=2;goto B6ee307;
case 0x6ee30d:c.instructions+=1;goto B6ee30d;
case 0x6ee310:goto L6ee310;
case 0x6ee311:c.instructions+=1;goto B6ee311;
case 0x6ee320:goto L6ee320;
case 0x6ee323:c.instructions+=15;goto B6ee323;
case 0x6ee324:c.instructions+=14;goto B6ee324;
case 0x6ee328:c.instructions+=13;goto B6ee328;
case 0x6ee32a:c.instructions+=12;goto B6ee32a;
case 0x6ee32d:c.instructions+=11;goto B6ee32d;
case 0x6ee331:c.instructions+=10;goto B6ee331;
case 0x6ee335:c.instructions+=9;goto B6ee335;
case 0x6ee339:c.instructions+=8;goto B6ee339;
case 0x6ee33a:c.instructions+=7;goto B6ee33a;
case 0x6ee33e:c.instructions+=6;goto B6ee33e;
case 0x6ee33f:c.instructions+=5;goto B6ee33f;
case 0x6ee342:c.instructions+=4;goto B6ee342;
case 0x6ee343:c.instructions+=3;goto B6ee343;
case 0x6ee34b:c.instructions+=2;goto B6ee34b;
case 0x6ee353:c.instructions+=1;goto B6ee353;
case 0x6ee358:goto L6ee358;
case 0x6ee35c:c.instructions+=7;goto B6ee35c;
case 0x6ee360:c.instructions+=6;goto B6ee360;
case 0x6ee363:c.instructions+=5;goto B6ee363;
case 0x6ee365:c.instructions+=4;goto B6ee365;
case 0x6ee368:c.instructions+=3;goto B6ee368;
case 0x6ee369:c.instructions+=2;goto B6ee369;
case 0x6ee36c:c.instructions+=1;goto B6ee36c;
case 0x6ee370:goto L6ee370;
case 0x6ee373:c.instructions+=6;goto B6ee373;
case 0x6ee374:c.instructions+=5;goto B6ee374;
case 0x6ee376:c.instructions+=4;goto B6ee376;
case 0x6ee379:c.instructions+=3;goto B6ee379;
case 0x6ee37d:c.instructions+=2;goto B6ee37d;
case 0x6ee37e:c.instructions+=1;goto B6ee37e;
case 0x6ee383:goto L6ee383;
case 0x6ee387:c.instructions+=3;goto B6ee387;
case 0x6ee388:c.instructions+=2;goto B6ee388;
case 0x6ee38b:c.instructions+=1;goto B6ee38b;
case 0x6ee390:goto L6ee390;
case 0x6ee394:c.instructions+=8;goto B6ee394;
case 0x6ee395:c.instructions+=7;goto B6ee395;
case 0x6ee398:c.instructions+=6;goto B6ee398;
case 0x6ee39c:c.instructions+=5;goto B6ee39c;
case 0x6ee39d:c.instructions+=4;goto B6ee39d;
case 0x6ee3a1:c.instructions+=3;goto B6ee3a1;
case 0x6ee3a2:c.instructions+=2;goto B6ee3a2;
case 0x6ee3a3:c.instructions+=1;goto B6ee3a3;
case 0x6ee3a8:goto L6ee3a8;
case 0x6ee3ac:c.instructions+=10;goto B6ee3ac;
case 0x6ee3ad:c.instructions+=9;goto B6ee3ad;
case 0x6ee3b1:c.instructions+=8;goto B6ee3b1;
case 0x6ee3b2:c.instructions+=7;goto B6ee3b2;
case 0x6ee3b6:c.instructions+=6;goto B6ee3b6;
case 0x6ee3b7:c.instructions+=5;goto B6ee3b7;
case 0x6ee3bf:c.instructions+=4;goto B6ee3bf;
case 0x6ee3c7:c.instructions+=3;goto B6ee3c7;
case 0x6ee3cf:c.instructions+=2;goto B6ee3cf;
case 0x6ee3d7:c.instructions+=1;goto B6ee3d7;
case 0x6ee3dc:goto L6ee3dc;
case 0x6ee3e0:c.instructions+=11;goto B6ee3e0;
case 0x6ee3e4:c.instructions+=10;goto B6ee3e4;
case 0x6ee3e8:c.instructions+=9;goto B6ee3e8;
case 0x6ee3ea:c.instructions+=8;goto B6ee3ea;
case 0x6ee3ee:c.instructions+=7;goto B6ee3ee;
case 0x6ee3f1:c.instructions+=6;goto B6ee3f1;
case 0x6ee3f5:c.instructions+=5;goto B6ee3f5;
case 0x6ee3f8:c.instructions+=4;goto B6ee3f8;
case 0x6ee3fc:c.instructions+=3;goto B6ee3fc;
case 0x6ee3ff:c.instructions+=2;goto B6ee3ff;
case 0x6ee404:c.instructions+=1;goto B6ee404;
case 0x6ee409:goto L6ee409;
case 0x6ee40c:c.instructions+=4;goto B6ee40c;
case 0x6ee40e:c.instructions+=3;goto B6ee40e;
case 0x6ee40f:c.instructions+=2;goto B6ee40f;
case 0x6ee412:c.instructions+=1;goto B6ee412;
case 0x6ee420:goto L6ee420;
case 0x6ee423:c.instructions+=6;goto B6ee423;
case 0x6ee424:c.instructions+=5;goto B6ee424;
case 0x6ee426:c.instructions+=4;goto B6ee426;
case 0x6ee429:c.instructions+=3;goto B6ee429;
case 0x6ee42d:c.instructions+=2;goto B6ee42d;
case 0x6ee42e:c.instructions+=1;goto B6ee42e;
case 0x6ee433:goto L6ee433;
case 0x6ee437:c.instructions+=3;goto B6ee437;
case 0x6ee438:c.instructions+=2;goto B6ee438;
case 0x6ee43b:c.instructions+=1;goto B6ee43b;
case 0x6ee440:goto L6ee440;
case 0x6ee444:c.instructions+=8;goto B6ee444;
case 0x6ee445:c.instructions+=7;goto B6ee445;
case 0x6ee448:c.instructions+=6;goto B6ee448;
case 0x6ee44c:c.instructions+=5;goto B6ee44c;
case 0x6ee44d:c.instructions+=4;goto B6ee44d;
case 0x6ee451:c.instructions+=3;goto B6ee451;
case 0x6ee452:c.instructions+=2;goto B6ee452;
case 0x6ee453:c.instructions+=1;goto B6ee453;
case 0x6ee458:goto L6ee458;
case 0x6ee45c:c.instructions+=10;goto B6ee45c;
case 0x6ee45d:c.instructions+=9;goto B6ee45d;
case 0x6ee461:c.instructions+=8;goto B6ee461;
case 0x6ee462:c.instructions+=7;goto B6ee462;
case 0x6ee466:c.instructions+=6;goto B6ee466;
case 0x6ee467:c.instructions+=5;goto B6ee467;
case 0x6ee46f:c.instructions+=4;goto B6ee46f;
case 0x6ee477:c.instructions+=3;goto B6ee477;
case 0x6ee47f:c.instructions+=2;goto B6ee47f;
case 0x6ee487:c.instructions+=1;goto B6ee487;
case 0x6ee48c:goto L6ee48c;
case 0x6ee490:c.instructions+=11;goto B6ee490;
case 0x6ee494:c.instructions+=10;goto B6ee494;
case 0x6ee498:c.instructions+=9;goto B6ee498;
case 0x6ee49a:c.instructions+=8;goto B6ee49a;
case 0x6ee49e:c.instructions+=7;goto B6ee49e;
case 0x6ee4a1:c.instructions+=6;goto B6ee4a1;
case 0x6ee4a5:c.instructions+=5;goto B6ee4a5;
case 0x6ee4a8:c.instructions+=4;goto B6ee4a8;
case 0x6ee4ac:c.instructions+=3;goto B6ee4ac;
case 0x6ee4af:c.instructions+=2;goto B6ee4af;
case 0x6ee4b4:c.instructions+=1;goto B6ee4b4;
case 0x6ee4b9:goto L6ee4b9;
case 0x6ee4bc:c.instructions+=4;goto B6ee4bc;
case 0x6ee4be:c.instructions+=3;goto B6ee4be;
case 0x6ee4bf:c.instructions+=2;goto B6ee4bf;
case 0x6ee4c2:c.instructions+=1;goto B6ee4c2;
case 0x6ee4d0:goto L6ee4d0;
case 0x6ee4d1:c.instructions+=5;goto B6ee4d1;
case 0x6ee4d3:c.instructions+=4;goto B6ee4d3;
case 0x6ee4d6:c.instructions+=3;goto B6ee4d6;
case 0x6ee4d8:c.instructions+=2;goto B6ee4d8;
case 0x6ee4de:c.instructions+=1;goto B6ee4de;
case 0x6ee4e0:goto L6ee4e0;
case 0x6ee4e2:c.instructions+=1;goto B6ee4e2;
case 0x6ee4e7:goto L6ee4e7;
case 0x6ee4ea:c.instructions+=2;goto B6ee4ea;
case 0x6ee4ec:c.instructions+=1;goto B6ee4ec;
case 0x6ee4f1:goto L6ee4f1;
case 0x6ee4f4:c.instructions+=2;goto B6ee4f4;
case 0x6ee4f6:c.instructions+=1;goto B6ee4f6;
case 0x6ee4f8:goto L6ee4f8;
case 0x6ee4fe:c.instructions+=3;goto B6ee4fe;
case 0x6ee500:c.instructions+=2;goto B6ee500;
case 0x6ee501:c.instructions+=1;goto B6ee501;
case 0x6ee504:goto L6ee504;
case 0x6ee509:c.instructions+=2;goto B6ee509;
case 0x6ee50f:c.instructions+=1;goto B6ee50f;
case 0x6ee511:goto L6ee511;
case 0x6ee513:c.instructions+=2;goto B6ee513;
case 0x6ee514:c.instructions+=1;goto B6ee514;
case 0x6ee51a:goto L6ee51a;
case 0x6ee51d:goto L6ee51d;
case 0x6ee51f:c.instructions+=2;goto B6ee51f;
case 0x6ee520:c.instructions+=1;goto B6ee520;
case 0x6ee530:goto L6ee530;
case 0x6ee533:c.instructions+=7;goto B6ee533;
case 0x6ee537:c.instructions+=6;goto B6ee537;
case 0x6ee53b:c.instructions+=5;goto B6ee53b;
case 0x6ee541:c.instructions+=4;goto B6ee541;
case 0x6ee545:c.instructions+=3;goto B6ee545;
case 0x6ee547:c.instructions+=2;goto B6ee547;
case 0x6ee54a:c.instructions+=1;goto B6ee54a;
case 0x6ee54c:goto L6ee54c;
case 0x6ee552:c.instructions+=5;goto B6ee552;
case 0x6ee556:c.instructions+=4;goto B6ee556;
case 0x6ee55a:c.instructions+=3;goto B6ee55a;
case 0x6ee55e:c.instructions+=2;goto B6ee55e;
case 0x6ee562:c.instructions+=1;goto B6ee562;
case 0x6ee564:goto L6ee564;
case 0x6ee56a:c.instructions+=4;goto B6ee56a;
case 0x6ee56e:c.instructions+=3;goto B6ee56e;
case 0x6ee572:c.instructions+=2;goto B6ee572;
case 0x6ee576:c.instructions+=1;goto B6ee576;
case 0x6ee57a:goto L6ee57a;
case 0x6ee57c:c.instructions+=2;goto B6ee57c;
case 0x6ee580:c.instructions+=1;goto B6ee580;
case 0x6ee582:goto L6ee582;
case 0x6ee584:c.instructions+=1;goto B6ee584;
case 0x6ee588:goto L6ee588;
case 0x6ee58c:c.instructions+=5;goto B6ee58c;
case 0x6ee58f:c.instructions+=4;goto B6ee58f;
case 0x6ee590:c.instructions+=3;goto B6ee590;
case 0x6ee593:c.instructions+=2;goto B6ee593;
case 0x6ee595:c.instructions+=1;goto B6ee595;
case 0x6ee597:goto L6ee597;
case 0x6ee59a:c.instructions+=1;goto B6ee59a;
case 0x6ee59e:goto L6ee59e;
case 0x6ee5a2:c.instructions+=6;goto B6ee5a2;
case 0x6ee5a6:c.instructions+=5;goto B6ee5a6;
case 0x6ee5a9:c.instructions+=4;goto B6ee5a9;
case 0x6ee5ad:c.instructions+=3;goto B6ee5ad;
case 0x6ee5b0:c.instructions+=2;goto B6ee5b0;
case 0x6ee5b2:c.instructions+=1;goto B6ee5b2;
case 0x6ee5b4:goto L6ee5b4;
case 0x6ee5b7:c.instructions+=8;goto B6ee5b7;
case 0x6ee5bd:c.instructions+=7;goto B6ee5bd;
case 0x6ee5c0:c.instructions+=6;goto B6ee5c0;
case 0x6ee5c3:c.instructions+=5;goto B6ee5c3;
case 0x6ee5c6:c.instructions+=4;goto B6ee5c6;
case 0x6ee5c9:c.instructions+=3;goto B6ee5c9;
case 0x6ee5cb:c.instructions+=2;goto B6ee5cb;
case 0x6ee5ce:c.instructions+=1;goto B6ee5ce;
case 0x6ee5d3:goto L6ee5d3;
case 0x6ee5d6:c.instructions+=2;goto B6ee5d6;
case 0x6ee5d8:c.instructions+=1;goto B6ee5d8;
case 0x6ee5da:goto L6ee5da;
case 0x6ee5dd:c.instructions+=1;goto B6ee5dd;
case 0x6ee5df:goto L6ee5df;
case 0x6ee5e0:c.instructions+=2;goto B6ee5e0;
case 0x6ee5e2:c.instructions+=1;goto B6ee5e2;
case 0x6ee5e4:goto L6ee5e4;
case 0x6ee5e7:c.instructions+=6;goto B6ee5e7;
case 0x6ee5ea:c.instructions+=5;goto B6ee5ea;
case 0x6ee5ee:c.instructions+=4;goto B6ee5ee;
case 0x6ee5f1:c.instructions+=3;goto B6ee5f1;
case 0x6ee5f4:c.instructions+=2;goto B6ee5f4;
case 0x6ee5f7:c.instructions+=1;goto B6ee5f7;
case 0x6ee5f9:goto L6ee5f9;
case 0x6ee5fc:c.instructions+=1;goto B6ee5fc;
case 0x6ee5ff:goto L6ee5ff;
case 0x6ee602:c.instructions+=4;goto B6ee602;
case 0x6ee606:c.instructions+=3;goto B6ee606;
case 0x6ee609:c.instructions+=2;goto B6ee609;
case 0x6ee60d:c.instructions+=1;goto B6ee60d;
case 0x6ee610:goto L6ee610;
case 0x6ee614:c.instructions+=7;goto B6ee614;
case 0x6ee617:c.instructions+=6;goto B6ee617;
case 0x6ee61b:c.instructions+=5;goto B6ee61b;
case 0x6ee61e:c.instructions+=4;goto B6ee61e;
case 0x6ee621:c.instructions+=3;goto B6ee621;
case 0x6ee624:c.instructions+=2;goto B6ee624;
case 0x6ee626:c.instructions+=1;goto B6ee626;
case 0x6ee62b:goto L6ee62b;
case 0x6ee631:c.instructions+=11;goto B6ee631;
case 0x6ee635:c.instructions+=10;goto B6ee635;
case 0x6ee638:c.instructions+=9;goto B6ee638;
case 0x6ee63b:c.instructions+=8;goto B6ee63b;
case 0x6ee63f:c.instructions+=7;goto B6ee63f;
case 0x6ee642:c.instructions+=6;goto B6ee642;
case 0x6ee646:c.instructions+=5;goto B6ee646;
case 0x6ee649:c.instructions+=4;goto B6ee649;
case 0x6ee64c:c.instructions+=3;goto B6ee64c;
case 0x6ee650:c.instructions+=2;goto B6ee650;
case 0x6ee652:c.instructions+=1;goto B6ee652;
case 0x6ee657:goto L6ee657;
case 0x6ee65d:c.instructions+=14;goto B6ee65d;
case 0x6ee661:c.instructions+=13;goto B6ee661;
case 0x6ee664:c.instructions+=12;goto B6ee664;
case 0x6ee667:c.instructions+=11;goto B6ee667;
case 0x6ee66b:c.instructions+=10;goto B6ee66b;
case 0x6ee66e:c.instructions+=9;goto B6ee66e;
case 0x6ee672:c.instructions+=8;goto B6ee672;
case 0x6ee675:c.instructions+=7;goto B6ee675;
case 0x6ee67b:c.instructions+=6;goto B6ee67b;
case 0x6ee67e:c.instructions+=5;goto B6ee67e;
case 0x6ee681:c.instructions+=4;goto B6ee681;
case 0x6ee684:c.instructions+=3;goto B6ee684;
case 0x6ee687:c.instructions+=2;goto B6ee687;
case 0x6ee689:c.instructions+=1;goto B6ee689;
case 0x6ee68c:goto L6ee68c;
case 0x6ee690:c.instructions+=10;goto B6ee690;
case 0x6ee693:c.instructions+=9;goto B6ee693;
case 0x6ee694:c.instructions+=8;goto B6ee694;
case 0x6ee697:c.instructions+=7;goto B6ee697;
case 0x6ee69a:c.instructions+=6;goto B6ee69a;
case 0x6ee69c:c.instructions+=5;goto B6ee69c;
case 0x6ee69f:c.instructions+=4;goto B6ee69f;
case 0x6ee6a2:c.instructions+=3;goto B6ee6a2;
case 0x6ee6a4:c.instructions+=2;goto B6ee6a4;
case 0x6ee6a7:c.instructions+=1;goto B6ee6a7;
case 0x6ee6b0:goto L6ee6b0;
case 0x6ee6b4:c.instructions+=6;goto B6ee6b4;
case 0x6ee6b8:c.instructions+=5;goto B6ee6b8;
case 0x6ee6bc:c.instructions+=4;goto B6ee6bc;
case 0x6ee6c0:c.instructions+=3;goto B6ee6c0;
case 0x6ee6c2:c.instructions+=2;goto B6ee6c2;
case 0x6ee6c5:c.instructions+=1;goto B6ee6c5;
case 0x6ee6c7:goto L6ee6c7;
case 0x6ee6cb:c.instructions+=6;goto B6ee6cb;
case 0x6ee6cc:c.instructions+=5;goto B6ee6cc;
case 0x6ee6d0:c.instructions+=4;goto B6ee6d0;
case 0x6ee6d2:c.instructions+=3;goto B6ee6d2;
case 0x6ee6d5:c.instructions+=2;goto B6ee6d5;
case 0x6ee6d7:c.instructions+=1;goto B6ee6d7;
case 0x6ee6dc:goto L6ee6dc;
case 0x6ee6df:c.instructions+=1;goto B6ee6df;
case 0x6ee6e2:goto L6ee6e2;
case 0x6ee6e6:c.instructions+=4;goto B6ee6e6;
case 0x6ee6ea:c.instructions+=3;goto B6ee6ea;
case 0x6ee6ec:c.instructions+=2;goto B6ee6ec;
case 0x6ee6ef:c.instructions+=1;goto B6ee6ef;
case 0x6ee6f1:goto L6ee6f1;
case 0x6ee6f5:c.instructions+=6;goto B6ee6f5;
case 0x6ee6f6:c.instructions+=5;goto B6ee6f6;
case 0x6ee6fa:c.instructions+=4;goto B6ee6fa;
case 0x6ee6fc:c.instructions+=3;goto B6ee6fc;
case 0x6ee6ff:c.instructions+=2;goto B6ee6ff;
case 0x6ee701:c.instructions+=1;goto B6ee701;
case 0x6ee706:goto L6ee706;
case 0x6ee709:c.instructions+=2;goto B6ee709;
case 0x6ee70a:c.instructions+=1;goto B6ee70a;
case 0x6ee70d:goto L6ee70d;
case 0x6ee70f:c.instructions+=2;goto B6ee70f;
case 0x6ee711:c.instructions+=1;goto B6ee711;
case 0x6ee720:goto L6ee720;
case 0x6ee721:c.instructions+=11;goto B6ee721;
case 0x6ee723:c.instructions+=10;goto B6ee723;
case 0x6ee726:c.instructions+=9;goto B6ee726;
case 0x6ee729:c.instructions+=8;goto B6ee729;
case 0x6ee72a:c.instructions+=7;goto B6ee72a;
case 0x6ee72b:c.instructions+=6;goto B6ee72b;
case 0x6ee72d:c.instructions+=5;goto B6ee72d;
case 0x6ee730:c.instructions+=4;goto B6ee730;
case 0x6ee732:c.instructions+=3;goto B6ee732;
case 0x6ee734:c.instructions+=2;goto B6ee734;
case 0x6ee735:c.instructions+=1;goto B6ee735;
case 0x6ee737:goto L6ee737;
case 0x6ee73e:c.instructions+=11;goto B6ee73e;
case 0x6ee741:c.instructions+=10;goto B6ee741;
case 0x6ee744:c.instructions+=9;goto B6ee744;
case 0x6ee747:c.instructions+=8;goto B6ee747;
case 0x6ee74e:c.instructions+=7;goto B6ee74e;
case 0x6ee752:c.instructions+=6;goto B6ee752;
case 0x6ee753:c.instructions+=5;goto B6ee753;
case 0x6ee754:c.instructions+=4;goto B6ee754;
case 0x6ee755:c.instructions+=3;goto B6ee755;
case 0x6ee757:c.instructions+=2;goto B6ee757;
case 0x6ee758:c.instructions+=1;goto B6ee758;
case 0x6ee75b:goto L6ee75b;
case 0x6ee75e:c.instructions+=2;goto B6ee75e;
case 0x6ee761:c.instructions+=1;goto B6ee761;
case 0x6ee767:goto L6ee767;
case 0x6ee76b:c.instructions+=3;goto B6ee76b;
case 0x6ee76c:c.instructions+=2;goto B6ee76c;
case 0x6ee76e:c.instructions+=1;goto B6ee76e;
case 0x6ee773:goto L6ee773;
case 0x6ee777:c.instructions+=3;goto B6ee777;
case 0x6ee778:c.instructions+=2;goto B6ee778;
case 0x6ee77a:c.instructions+=1;goto B6ee77a;
case 0x6ee77f:goto L6ee77f;
case 0x6ee783:c.instructions+=7;goto B6ee783;
case 0x6ee784:c.instructions+=6;goto B6ee784;
case 0x6ee788:c.instructions+=5;goto B6ee788;
case 0x6ee789:c.instructions+=4;goto B6ee789;
case 0x6ee78d:c.instructions+=3;goto B6ee78d;
case 0x6ee78e:c.instructions+=2;goto B6ee78e;
case 0x6ee790:c.instructions+=1;goto B6ee790;
case 0x6ee795:goto L6ee795;
case 0x6ee798:c.instructions+=3;goto B6ee798;
case 0x6ee799:c.instructions+=2;goto B6ee799;
case 0x6ee79b:c.instructions+=1;goto B6ee79b;
case 0x6ee79d:goto L6ee79d;
case 0x6ee7a1:c.instructions+=2;goto B6ee7a1;
case 0x6ee7a7:c.instructions+=1;goto B6ee7a7;
case 0x6ee7ab:goto L6ee7ab;
case 0x6ee7af:c.instructions+=6;goto B6ee7af;
case 0x6ee7b0:c.instructions+=5;goto B6ee7b0;
case 0x6ee7b4:c.instructions+=4;goto B6ee7b4;
case 0x6ee7b5:c.instructions+=3;goto B6ee7b5;
case 0x6ee7b8:c.instructions+=2;goto B6ee7b8;
case 0x6ee7b9:c.instructions+=1;goto B6ee7b9;
case 0x6ee7be:goto L6ee7be;
case 0x6ee7c2:c.instructions+=25;goto B6ee7c2;
case 0x6ee7c6:c.instructions+=24;goto B6ee7c6;
case 0x6ee7c8:c.instructions+=23;goto B6ee7c8;
case 0x6ee7ca:c.instructions+=22;goto B6ee7ca;
case 0x6ee7ce:c.instructions+=21;goto B6ee7ce;
case 0x6ee7d1:c.instructions+=20;goto B6ee7d1;
case 0x6ee7d5:c.instructions+=19;goto B6ee7d5;
case 0x6ee7d8:c.instructions+=18;goto B6ee7d8;
case 0x6ee7dd:c.instructions+=17;goto B6ee7dd;
case 0x6ee7e0:c.instructions+=16;goto B6ee7e0;
case 0x6ee7e3:c.instructions+=15;goto B6ee7e3;
case 0x6ee7e6:c.instructions+=14;goto B6ee7e6;
case 0x6ee7ea:c.instructions+=13;goto B6ee7ea;
case 0x6ee7ec:c.instructions+=12;goto B6ee7ec;
case 0x6ee7ef:c.instructions+=11;goto B6ee7ef;
case 0x6ee7f0:c.instructions+=10;goto B6ee7f0;
case 0x6ee7f4:c.instructions+=9;goto B6ee7f4;
case 0x6ee7f7:c.instructions+=8;goto B6ee7f7;
case 0x6ee7fa:c.instructions+=7;goto B6ee7fa;
case 0x6ee7ff:c.instructions+=6;goto B6ee7ff;
case 0x6ee803:c.instructions+=5;goto B6ee803;
case 0x6ee805:c.instructions+=4;goto B6ee805;
case 0x6ee808:c.instructions+=3;goto B6ee808;
case 0x6ee809:c.instructions+=2;goto B6ee809;
case 0x6ee80e:c.instructions+=1;goto B6ee80e;
case 0x6ee813:goto L6ee813;
case 0x6ee816:goto L6ee816;
case 0x6ee817:c.instructions+=5;goto B6ee817;
case 0x6ee818:c.instructions+=4;goto B6ee818;
case 0x6ee819:c.instructions+=3;goto B6ee819;
case 0x6ee81b:c.instructions+=2;goto B6ee81b;
case 0x6ee81c:c.instructions+=1;goto B6ee81c;
case 0x6ee820:goto L6ee820;
case 0x6ee821:c.instructions+=8;goto B6ee821;
case 0x6ee825:c.instructions+=7;goto B6ee825;
case 0x6ee829:c.instructions+=6;goto B6ee829;
case 0x6ee82d:c.instructions+=5;goto B6ee82d;
case 0x6ee831:c.instructions+=4;goto B6ee831;
case 0x6ee835:c.instructions+=3;goto B6ee835;
case 0x6ee837:c.instructions+=2;goto B6ee837;
case 0x6ee83a:c.instructions+=1;goto B6ee83a;
case 0x6ee83c:goto L6ee83c;
case 0x6ee840:c.instructions+=6;goto B6ee840;
case 0x6ee841:c.instructions+=5;goto B6ee841;
case 0x6ee845:c.instructions+=4;goto B6ee845;
case 0x6ee849:c.instructions+=3;goto B6ee849;
case 0x6ee84d:c.instructions+=2;goto B6ee84d;
case 0x6ee850:c.instructions+=1;goto B6ee850;
case 0x6ee855:goto L6ee855;
case 0x6ee859:c.instructions+=7;goto B6ee859;
case 0x6ee85d:c.instructions+=6;goto B6ee85d;
case 0x6ee860:c.instructions+=5;goto B6ee860;
case 0x6ee864:c.instructions+=4;goto B6ee864;
case 0x6ee868:c.instructions+=3;goto B6ee868;
case 0x6ee86c:c.instructions+=2;goto B6ee86c;
case 0x6ee86d:c.instructions+=1;goto B6ee86d;
case 0x6ee870:goto L6ee870;
case 0x6ee874:c.instructions+=4;goto B6ee874;
case 0x6ee878:c.instructions+=3;goto B6ee878;
case 0x6ee87a:c.instructions+=2;goto B6ee87a;
case 0x6ee87d:c.instructions+=1;goto B6ee87d;
case 0x6ee87f:goto L6ee87f;
case 0x6ee883:c.instructions+=6;goto B6ee883;
case 0x6ee884:c.instructions+=5;goto B6ee884;
case 0x6ee888:c.instructions+=4;goto B6ee888;
case 0x6ee88c:c.instructions+=3;goto B6ee88c;
case 0x6ee890:c.instructions+=2;goto B6ee890;
case 0x6ee893:c.instructions+=1;goto B6ee893;
case 0x6ee898:goto L6ee898;
case 0x6ee89c:c.instructions+=7;goto B6ee89c;
case 0x6ee8a0:c.instructions+=6;goto B6ee8a0;
case 0x6ee8a3:c.instructions+=5;goto B6ee8a3;
case 0x6ee8a7:c.instructions+=4;goto B6ee8a7;
case 0x6ee8ab:c.instructions+=3;goto B6ee8ab;
case 0x6ee8af:c.instructions+=2;goto B6ee8af;
case 0x6ee8b0:c.instructions+=1;goto B6ee8b0;
case 0x6ee8b3:goto L6ee8b3;
case 0x6ee8b7:c.instructions+=2;goto B6ee8b7;
case 0x6ee8b8:c.instructions+=1;goto B6ee8b8;
case 0x6ee8c0:goto L6ee8c0;
case 0x6ee8c4:c.instructions+=9;goto B6ee8c4;
case 0x6ee8c7:c.instructions+=8;goto B6ee8c7;
case 0x6ee8c8:c.instructions+=7;goto B6ee8c8;
case 0x6ee8c9:c.instructions+=6;goto B6ee8c9;
case 0x6ee8ca:c.instructions+=5;goto B6ee8ca;
case 0x6ee8cc:c.instructions+=4;goto B6ee8cc;
case 0x6ee8cf:c.instructions+=3;goto B6ee8cf;
case 0x6ee8d2:c.instructions+=2;goto B6ee8d2;
case 0x6ee8d4:c.instructions+=1;goto B6ee8d4;
case 0x6ee8d6:goto L6ee8d6;
case 0x6ee8d8:c.instructions+=1;goto B6ee8d8;
case 0x6ee8dd:goto L6ee8dd;
case 0x6ee8e1:c.instructions+=11;goto B6ee8e1;
case 0x6ee8e2:c.instructions+=10;goto B6ee8e2;
case 0x6ee8e5:c.instructions+=9;goto B6ee8e5;
case 0x6ee8e9:c.instructions+=8;goto B6ee8e9;
case 0x6ee8ef:c.instructions+=7;goto B6ee8ef;
case 0x6ee8f3:c.instructions+=6;goto B6ee8f3;
case 0x6ee8f6:c.instructions+=5;goto B6ee8f6;
case 0x6ee8f9:c.instructions+=4;goto B6ee8f9;
case 0x6ee8fb:c.instructions+=3;goto B6ee8fb;
case 0x6ee8fc:c.instructions+=2;goto B6ee8fc;
case 0x6ee8fe:c.instructions+=1;goto B6ee8fe;
case 0x6ee903:goto L6ee903;
case 0x6ee906:c.instructions+=17;goto B6ee906;
case 0x6ee909:c.instructions+=16;goto B6ee909;
case 0x6ee90a:c.instructions+=15;goto B6ee90a;
case 0x6ee90c:c.instructions+=14;goto B6ee90c;
case 0x6ee90e:c.instructions+=13;goto B6ee90e;
case 0x6ee912:c.instructions+=12;goto B6ee912;
case 0x6ee916:c.instructions+=11;goto B6ee916;
case 0x6ee91a:c.instructions+=10;goto B6ee91a;
case 0x6ee91e:c.instructions+=9;goto B6ee91e;
case 0x6ee921:c.instructions+=8;goto B6ee921;
case 0x6ee924:c.instructions+=7;goto B6ee924;
case 0x6ee928:c.instructions+=6;goto B6ee928;
case 0x6ee92b:c.instructions+=5;goto B6ee92b;
case 0x6ee92d:c.instructions+=4;goto B6ee92d;
case 0x6ee930:c.instructions+=3;goto B6ee930;
case 0x6ee932:c.instructions+=2;goto B6ee932;
case 0x6ee933:c.instructions+=1;goto B6ee933;
case 0x6ee938:goto L6ee938;
case 0x6ee93b:c.instructions+=10;goto B6ee93b;
case 0x6ee93f:c.instructions+=9;goto B6ee93f;
case 0x6ee940:c.instructions+=8;goto B6ee940;
case 0x6ee944:c.instructions+=7;goto B6ee944;
case 0x6ee946:c.instructions+=6;goto B6ee946;
case 0x6ee949:c.instructions+=5;goto B6ee949;
case 0x6ee94b:c.instructions+=4;goto B6ee94b;
case 0x6ee94e:c.instructions+=3;goto B6ee94e;
case 0x6ee950:c.instructions+=2;goto B6ee950;
case 0x6ee951:c.instructions+=1;goto B6ee951;
case 0x6ee956:goto L6ee956;
case 0x6ee959:c.instructions+=6;goto B6ee959;
case 0x6ee95d:c.instructions+=5;goto B6ee95d;
case 0x6ee960:c.instructions+=4;goto B6ee960;
case 0x6ee962:c.instructions+=3;goto B6ee962;
case 0x6ee966:c.instructions+=2;goto B6ee966;
case 0x6ee967:c.instructions+=1;goto B6ee967;
case 0x6ee96c:goto L6ee96c;
case 0x6ee96f:c.instructions+=6;goto B6ee96f;
case 0x6ee973:c.instructions+=5;goto B6ee973;
case 0x6ee975:c.instructions+=4;goto B6ee975;
case 0x6ee977:c.instructions+=3;goto B6ee977;
case 0x6ee978:c.instructions+=2;goto B6ee978;
case 0x6ee979:c.instructions+=1;goto B6ee979;
case 0x6ee97c:goto L6ee97c;
case 0x6ee97e:c.instructions+=1;goto B6ee97e;
case 0x6ee980:goto L6ee980;
case 0x6ee981:c.instructions+=4;goto B6ee981;
case 0x6ee982:c.instructions+=3;goto B6ee982;
case 0x6ee983:c.instructions+=2;goto B6ee983;
case 0x6ee986:c.instructions+=1;goto B6ee986;
case 0x6ee989:goto L6ee989;
case 0x6ee98c:c.instructions+=5;goto B6ee98c;
case 0x6ee98d:c.instructions+=4;goto B6ee98d;
case 0x6ee993:c.instructions+=3;goto B6ee993;
case 0x6ee995:c.instructions+=2;goto B6ee995;
case 0x6ee998:c.instructions+=1;goto B6ee998;
case 0x6ee99a:goto L6ee99a;
case 0x6ee99c:c.instructions+=1;goto B6ee99c;
case 0x6ee9a1:goto L6ee9a1;
case 0x6ee9a3:c.instructions+=5;goto B6ee9a3;
case 0x6ee9a6:c.instructions+=4;goto B6ee9a6;
case 0x6ee9a9:c.instructions+=3;goto B6ee9a9;
case 0x6ee9ab:c.instructions+=2;goto B6ee9ab;
case 0x6ee9ac:c.instructions+=1;goto B6ee9ac;
case 0x6ee9b1:goto L6ee9b1;
case 0x6ee9b4:c.instructions+=6;goto B6ee9b4;
case 0x6ee9b8:c.instructions+=5;goto B6ee9b8;
case 0x6ee9ba:c.instructions+=4;goto B6ee9ba;
case 0x6ee9bc:c.instructions+=3;goto B6ee9bc;
case 0x6ee9bd:c.instructions+=2;goto B6ee9bd;
case 0x6ee9be:c.instructions+=1;goto B6ee9be;
case 0x6ee9c1:goto L6ee9c1;
case 0x6ee9c3:c.instructions+=1;goto B6ee9c3;
case 0x6ee9c5:goto L6ee9c5;
case 0x6ee9c6:c.instructions+=5;goto B6ee9c6;
case 0x6ee9c7:c.instructions+=4;goto B6ee9c7;
case 0x6ee9c8:c.instructions+=3;goto B6ee9c8;
case 0x6ee9c9:c.instructions+=2;goto B6ee9c9;
case 0x6ee9cc:c.instructions+=1;goto B6ee9cc;
case 0x6ee9cf:goto L6ee9cf;
case 0x6ee9d2:c.instructions+=9;goto B6ee9d2;
case 0x6ee9d5:c.instructions+=8;goto B6ee9d5;
case 0x6ee9d8:c.instructions+=7;goto B6ee9d8;
case 0x6ee9da:c.instructions+=6;goto B6ee9da;
case 0x6ee9db:c.instructions+=5;goto B6ee9db;
case 0x6ee9dc:c.instructions+=4;goto B6ee9dc;
case 0x6ee9dd:c.instructions+=3;goto B6ee9dd;
case 0x6ee9de:c.instructions+=2;goto B6ee9de;
case 0x6ee9df:c.instructions+=1;goto B6ee9df;
case 0x6ee9e4:goto L6ee9e4;
case 0x6ee9e7:goto L6ee9e7;
case 0x6ee9e8:c.instructions+=2;goto B6ee9e8;
case 0x6ee9ea:c.instructions+=1;goto B6ee9ea;
case 0x6ee9ef:goto L6ee9ef;
case 0x6ee9f3:c.instructions+=6;goto B6ee9f3;
case 0x6ee9f4:c.instructions+=5;goto B6ee9f4;
case 0x6ee9f7:c.instructions+=4;goto B6ee9f7;
case 0x6ee9fa:c.instructions+=3;goto B6ee9fa;
case 0x6ee9fb:c.instructions+=2;goto B6ee9fb;
case 0x6ee9fc:c.instructions+=1;goto B6ee9fc;
case 0x6eea01:goto L6eea01;
case 0x6eea05:c.instructions+=15;goto B6eea05;
case 0x6eea09:c.instructions+=14;goto B6eea09;
case 0x6eea0d:c.instructions+=13;goto B6eea0d;
case 0x6eea0f:c.instructions+=12;goto B6eea0f;
case 0x6eea13:c.instructions+=11;goto B6eea13;
case 0x6eea16:c.instructions+=10;goto B6eea16;
case 0x6eea19:c.instructions+=9;goto B6eea19;
case 0x6eea1c:c.instructions+=8;goto B6eea1c;
case 0x6eea1f:c.instructions+=7;goto B6eea1f;
case 0x6eea20:c.instructions+=6;goto B6eea20;
case 0x6eea21:c.instructions+=5;goto B6eea21;
case 0x6eea22:c.instructions+=4;goto B6eea22;
case 0x6eea24:c.instructions+=3;goto B6eea24;
case 0x6eea25:c.instructions+=2;goto B6eea25;
case 0x6eea28:c.instructions+=1;goto B6eea28;
case 0x6eea30:goto L6eea30;
case 0x6eea31:c.instructions+=12;goto B6eea31;
case 0x6eea33:c.instructions+=11;goto B6eea33;
case 0x6eea36:c.instructions+=10;goto B6eea36;
case 0x6eea39:c.instructions+=9;goto B6eea39;
case 0x6eea3c:c.instructions+=8;goto B6eea3c;
case 0x6eea3d:c.instructions+=7;goto B6eea3d;
case 0x6eea3e:c.instructions+=6;goto B6eea3e;
case 0x6eea40:c.instructions+=5;goto B6eea40;
case 0x6eea43:c.instructions+=4;goto B6eea43;
case 0x6eea46:c.instructions+=3;goto B6eea46;
case 0x6eea48:c.instructions+=2;goto B6eea48;
case 0x6eea49:c.instructions+=1;goto B6eea49;
case 0x6eea4b:goto L6eea4b;
case 0x6eea4d:c.instructions+=1;goto B6eea4d;
case 0x6eea52:goto L6eea52;
case 0x6eea55:c.instructions+=11;goto B6eea55;
case 0x6eea56:c.instructions+=10;goto B6eea56;
case 0x6eea59:c.instructions+=9;goto B6eea59;
case 0x6eea5c:c.instructions+=8;goto B6eea5c;
case 0x6eea62:c.instructions+=7;goto B6eea62;
case 0x6eea65:c.instructions+=6;goto B6eea65;
case 0x6eea68:c.instructions+=5;goto B6eea68;
case 0x6eea6b:c.instructions+=4;goto B6eea6b;
case 0x6eea6d:c.instructions+=3;goto B6eea6d;
case 0x6eea6e:c.instructions+=2;goto B6eea6e;
case 0x6eea70:c.instructions+=1;goto B6eea70;
case 0x6eea75:goto L6eea75;
case 0x6eea7b:c.instructions+=10;goto B6eea7b;
case 0x6eea7e:c.instructions+=9;goto B6eea7e;
case 0x6eea81:c.instructions+=8;goto B6eea81;
case 0x6eea83:c.instructions+=7;goto B6eea83;
case 0x6eea87:c.instructions+=6;goto B6eea87;
case 0x6eea8a:c.instructions+=5;goto B6eea8a;
case 0x6eea8e:c.instructions+=4;goto B6eea8e;
case 0x6eea91:c.instructions+=3;goto B6eea91;
case 0x6eea94:c.instructions+=2;goto B6eea94;
case 0x6eea99:c.instructions+=1;goto B6eea99;
case 0x6eea9e:goto L6eea9e;
case 0x6eeaa1:c.instructions+=6;goto B6eeaa1;
case 0x6eeaa4:c.instructions+=5;goto B6eeaa4;
case 0x6eeaa8:c.instructions+=4;goto B6eeaa8;
case 0x6eeaab:c.instructions+=3;goto B6eeaab;
case 0x6eeaae:c.instructions+=2;goto B6eeaae;
case 0x6eeab3:c.instructions+=1;goto B6eeab3;
case 0x6eeab8:goto L6eeab8;
case 0x6eeabb:c.instructions+=6;goto B6eeabb;
case 0x6eeabe:c.instructions+=5;goto B6eeabe;
case 0x6eeac2:c.instructions+=4;goto B6eeac2;
case 0x6eeac5:c.instructions+=3;goto B6eeac5;
case 0x6eeac8:c.instructions+=2;goto B6eeac8;
case 0x6eeacd:c.instructions+=1;goto B6eeacd;
case 0x6eead2:goto L6eead2;
case 0x6eead5:c.instructions+=13;goto B6eead5;
case 0x6eead8:c.instructions+=12;goto B6eead8;
case 0x6eeadb:c.instructions+=11;goto B6eeadb;
case 0x6eeade:c.instructions+=10;goto B6eeade;
case 0x6eeae2:c.instructions+=9;goto B6eeae2;
case 0x6eeae5:c.instructions+=8;goto B6eeae5;
case 0x6eeae8:c.instructions+=7;goto B6eeae8;
case 0x6eeaeb:c.instructions+=6;goto B6eeaeb;
case 0x6eeaef:c.instructions+=5;goto B6eeaef;
case 0x6eeaf3:c.instructions+=4;goto B6eeaf3;
case 0x6eeaf7:c.instructions+=3;goto B6eeaf7;
case 0x6eeafa:c.instructions+=2;goto B6eeafa;
case 0x6eeaff:c.instructions+=1;goto B6eeaff;
case 0x6eeb04:goto L6eeb04;
case 0x6eeb07:c.instructions+=8;goto B6eeb07;
case 0x6eeb0b:c.instructions+=7;goto B6eeb0b;
case 0x6eeb0d:c.instructions+=6;goto B6eeb0d;
case 0x6eeb10:c.instructions+=5;goto B6eeb10;
case 0x6eeb12:c.instructions+=4;goto B6eeb12;
case 0x6eeb15:c.instructions+=3;goto B6eeb15;
case 0x6eeb17:c.instructions+=2;goto B6eeb17;
case 0x6eeb18:c.instructions+=1;goto B6eeb18;
case 0x6eeb1d:goto L6eeb1d;
case 0x6eeb20:c.instructions+=10;goto B6eeb20;
case 0x6eeb24:c.instructions+=9;goto B6eeb24;
case 0x6eeb25:c.instructions+=8;goto B6eeb25;
case 0x6eeb29:c.instructions+=7;goto B6eeb29;
case 0x6eeb2b:c.instructions+=6;goto B6eeb2b;
case 0x6eeb2e:c.instructions+=5;goto B6eeb2e;
case 0x6eeb30:c.instructions+=4;goto B6eeb30;
case 0x6eeb33:c.instructions+=3;goto B6eeb33;
case 0x6eeb35:c.instructions+=2;goto B6eeb35;
case 0x6eeb36:c.instructions+=1;goto B6eeb36;
case 0x6eeb3b:goto L6eeb3b;
case 0x6eeb3e:c.instructions+=9;goto B6eeb3e;
case 0x6eeb41:c.instructions+=8;goto B6eeb41;
case 0x6eeb45:c.instructions+=7;goto B6eeb45;
case 0x6eeb49:c.instructions+=6;goto B6eeb49;
case 0x6eeb4a:c.instructions+=5;goto B6eeb4a;
case 0x6eeb4e:c.instructions+=4;goto B6eeb4e;
case 0x6eeb4f:c.instructions+=3;goto B6eeb4f;
case 0x6eeb50:c.instructions+=2;goto B6eeb50;
case 0x6eeb52:c.instructions+=1;goto B6eeb52;
case 0x6eeb57:goto L6eeb57;
case 0x6eeb59:c.instructions+=1;goto B6eeb59;
case 0x6eeb5b:goto L6eeb5b;
case 0x6eeb5c:c.instructions+=5;goto B6eeb5c;
case 0x6eeb5d:c.instructions+=4;goto B6eeb5d;
case 0x6eeb5e:c.instructions+=3;goto B6eeb5e;
case 0x6eeb60:c.instructions+=2;goto B6eeb60;
case 0x6eeb61:c.instructions+=1;goto B6eeb61;
case 0x6eeb64:goto L6eeb64;
case 0x6eeb65:c.instructions+=2;goto B6eeb65;
case 0x6eeb67:c.instructions+=1;goto B6eeb67;
case 0x6eeb6c:goto L6eeb6c;
case 0x6eeb6d:c.instructions+=2;goto B6eeb6d;
case 0x6eeb6f:c.instructions+=1;goto B6eeb6f;
case 0x6eeb74:goto L6eeb74;
case 0x6eeb75:c.instructions+=6;goto B6eeb75;
case 0x6eeb76:c.instructions+=5;goto B6eeb76;
case 0x6eeb78:c.instructions+=4;goto B6eeb78;
case 0x6eeb79:c.instructions+=3;goto B6eeb79;
case 0x6eeb7b:c.instructions+=2;goto B6eeb7b;
case 0x6eeb7c:c.instructions+=1;goto B6eeb7c;
case 0x6eeb80:goto L6eeb80;
case 0x6eeb82:c.instructions+=22;goto B6eeb82;
case 0x6eeb84:c.instructions+=21;goto B6eeb84;
case 0x6eeb89:c.instructions+=20;goto B6eeb89;
case 0x6eeb8c:c.instructions+=19;goto B6eeb8c;
case 0x6eeb92:c.instructions+=18;goto B6eeb92;
case 0x6eeb95:c.instructions+=17;goto B6eeb95;
case 0x6eeb98:c.instructions+=16;goto B6eeb98;
case 0x6eeb9b:c.instructions+=15;goto B6eeb9b;
case 0x6eeb9e:c.instructions+=14;goto B6eeb9e;
case 0x6eeba1:c.instructions+=13;goto B6eeba1;
case 0x6eeba4:c.instructions+=12;goto B6eeba4;
case 0x6eebab:c.instructions+=11;goto B6eebab;
case 0x6eebae:c.instructions+=10;goto B6eebae;
case 0x6eebb1:c.instructions+=9;goto B6eebb1;
case 0x6eebb4:c.instructions+=8;goto B6eebb4;
case 0x6eebb7:c.instructions+=7;goto B6eebb7;
case 0x6eebba:c.instructions+=6;goto B6eebba;
case 0x6eebbd:c.instructions+=5;goto B6eebbd;
case 0x6eebc0:c.instructions+=4;goto B6eebc0;
case 0x6eebc3:c.instructions+=3;goto B6eebc3;
case 0x6eebc6:c.instructions+=2;goto B6eebc6;
case 0x6eebcd:c.instructions+=1;goto B6eebcd;
case 0x6eebd0:goto L6eebd0;
case 0x6eebd1:c.instructions+=5;goto B6eebd1;
case 0x6eebd3:c.instructions+=4;goto B6eebd3;
case 0x6eebd6:c.instructions+=3;goto B6eebd6;
case 0x6eebd8:c.instructions+=2;goto B6eebd8;
case 0x6eebde:c.instructions+=1;goto B6eebde;
case 0x6eebe0:goto L6eebe0;
case 0x6eebe6:c.instructions+=3;goto B6eebe6;
case 0x6eebe8:c.instructions+=2;goto B6eebe8;
case 0x6eebe9:c.instructions+=1;goto B6eebe9;
case 0x6eebec:goto L6eebec;
case 0x6eebef:c.instructions+=2;goto B6eebef;
case 0x6eebf1:c.instructions+=1;goto B6eebf1;
case 0x6eebf3:goto L6eebf3;
case 0x6eebf9:c.instructions+=3;goto B6eebf9;
case 0x6eebfb:c.instructions+=2;goto B6eebfb;
case 0x6eebfc:c.instructions+=1;goto B6eebfc;
case 0x6eebff:goto L6eebff;
case 0x6eec02:c.instructions+=2;goto B6eec02;
case 0x6eec04:c.instructions+=1;goto B6eec04;
case 0x6eec06:goto L6eec06;
case 0x6eec0c:c.instructions+=3;goto B6eec0c;
case 0x6eec0e:c.instructions+=2;goto B6eec0e;
case 0x6eec0f:c.instructions+=1;goto B6eec0f;
case 0x6eec12:goto L6eec12;
case 0x6eec15:c.instructions+=2;goto B6eec15;
case 0x6eec17:c.instructions+=1;goto B6eec17;
case 0x6eec19:goto L6eec19;
case 0x6eec1f:c.instructions+=3;goto B6eec1f;
case 0x6eec21:c.instructions+=2;goto B6eec21;
case 0x6eec22:c.instructions+=1;goto B6eec22;
case 0x6eec25:goto L6eec25;
case 0x6eec28:c.instructions+=2;goto B6eec28;
case 0x6eec2a:c.instructions+=1;goto B6eec2a;
case 0x6eec2c:goto L6eec2c;
case 0x6eec2e:c.instructions+=1;goto B6eec2e;
case 0x6eec33:goto L6eec33;
case 0x6eec36:c.instructions+=2;goto B6eec36;
case 0x6eec38:c.instructions+=1;goto B6eec38;
case 0x6eec3d:goto L6eec3d;
case 0x6eec40:c.instructions+=2;goto B6eec40;
case 0x6eec42:c.instructions+=1;goto B6eec42;
case 0x6eec44:goto L6eec44;
case 0x6eec4a:c.instructions+=3;goto B6eec4a;
case 0x6eec4c:c.instructions+=2;goto B6eec4c;
case 0x6eec4d:c.instructions+=1;goto B6eec4d;
case 0x6eec50:goto L6eec50;
case 0x6eec53:c.instructions+=2;goto B6eec53;
case 0x6eec55:c.instructions+=1;goto B6eec55;
case 0x6eec57:goto L6eec57;
case 0x6eec5d:c.instructions+=3;goto B6eec5d;
case 0x6eec5f:c.instructions+=2;goto B6eec5f;
case 0x6eec60:c.instructions+=1;goto B6eec60;
case 0x6eec63:goto L6eec63;
case 0x6eec66:c.instructions+=2;goto B6eec66;
case 0x6eec68:c.instructions+=1;goto B6eec68;
case 0x6eec6a:goto L6eec6a;
case 0x6eec70:c.instructions+=3;goto B6eec70;
case 0x6eec72:c.instructions+=2;goto B6eec72;
case 0x6eec73:c.instructions+=1;goto B6eec73;
case 0x6eec76:goto L6eec76;
case 0x6eec79:c.instructions+=2;goto B6eec79;
case 0x6eec7b:c.instructions+=1;goto B6eec7b;
case 0x6eec7d:goto L6eec7d;
case 0x6eec83:c.instructions+=3;goto B6eec83;
case 0x6eec85:c.instructions+=2;goto B6eec85;
case 0x6eec86:c.instructions+=1;goto B6eec86;
case 0x6eec89:goto L6eec89;
case 0x6eec8f:c.instructions+=2;goto B6eec8f;
case 0x6eec90:c.instructions+=1;goto B6eec90;
case 0x6eeca0:goto L6eeca0;
case 0x6eeca3:c.instructions+=15;goto B6eeca3;
case 0x6eeca4:c.instructions+=14;goto B6eeca4;
case 0x6eeca8:c.instructions+=13;goto B6eeca8;
case 0x6eecaa:c.instructions+=12;goto B6eecaa;
case 0x6eecad:c.instructions+=11;goto B6eecad;
case 0x6eecb1:c.instructions+=10;goto B6eecb1;
case 0x6eecb5:c.instructions+=9;goto B6eecb5;
case 0x6eecb9:c.instructions+=8;goto B6eecb9;
case 0x6eecba:c.instructions+=7;goto B6eecba;
case 0x6eecbe:c.instructions+=6;goto B6eecbe;
case 0x6eecbf:c.instructions+=5;goto B6eecbf;
case 0x6eecc2:c.instructions+=4;goto B6eecc2;
case 0x6eecc3:c.instructions+=3;goto B6eecc3;
case 0x6eeccb:c.instructions+=2;goto B6eeccb;
case 0x6eecd3:c.instructions+=1;goto B6eecd3;
case 0x6eecd8:goto L6eecd8;
case 0x6eecdc:c.instructions+=7;goto B6eecdc;
case 0x6eece0:c.instructions+=6;goto B6eece0;
case 0x6eece3:c.instructions+=5;goto B6eece3;
case 0x6eece5:c.instructions+=4;goto B6eece5;
case 0x6eece8:c.instructions+=3;goto B6eece8;
case 0x6eece9:c.instructions+=2;goto B6eece9;
case 0x6eecec:c.instructions+=1;goto B6eecec;
case 0x6eecf0:goto L6eecf0;
case 0x6eecf3:c.instructions+=9;goto B6eecf3;
case 0x6eecf4:c.instructions+=8;goto B6eecf4;
case 0x6eecf8:c.instructions+=7;goto B6eecf8;
case 0x6eecfa:c.instructions+=6;goto B6eecfa;
case 0x6eecfd:c.instructions+=5;goto B6eecfd;
case 0x6eecff:c.instructions+=4;goto B6eecff;
case 0x6eed00:c.instructions+=3;goto B6eed00;
case 0x6eed04:c.instructions+=2;goto B6eed04;
case 0x6eed05:c.instructions+=1;goto B6eed05;
case 0x6eed08:goto L6eed08;
case 0x6eed0a:c.instructions+=1;goto B6eed0a;
case 0x6eed0c:goto L6eed0c;
case 0x6eed0f:c.instructions+=4;goto B6eed0f;
case 0x6eed15:c.instructions+=3;goto B6eed15;
case 0x6eed17:c.instructions+=2;goto B6eed17;
case 0x6eed1a:c.instructions+=1;goto B6eed1a;
case 0x6eed20:goto L6eed20;
case 0x6eed23:c.instructions+=6;goto B6eed23;
case 0x6eed25:c.instructions+=5;goto B6eed25;
case 0x6eed29:c.instructions+=4;goto B6eed29;
case 0x6eed2a:c.instructions+=3;goto B6eed2a;
case 0x6eed2e:c.instructions+=2;goto B6eed2e;
case 0x6eed2f:c.instructions+=1;goto B6eed2f;
case 0x6eed32:goto L6eed32;
case 0x6eed34:c.instructions+=1;goto B6eed34;
case 0x6eed36:goto L6eed36;
case 0x6eed38:c.instructions+=3;goto B6eed38;
case 0x6eed39:c.instructions+=2;goto B6eed39;
case 0x6eed3c:c.instructions+=1;goto B6eed3c;
case 0x6eed3f:goto L6eed3f;
case 0x6eed45:c.instructions+=28;goto B6eed45;
case 0x6eed49:c.instructions+=27;goto B6eed49;
case 0x6eed4c:c.instructions+=26;goto B6eed4c;
case 0x6eed50:c.instructions+=25;goto B6eed50;
case 0x6eed53:c.instructions+=24;goto B6eed53;
case 0x6eed57:c.instructions+=23;goto B6eed57;
case 0x6eed59:c.instructions+=22;goto B6eed59;
case 0x6eed5b:c.instructions+=21;goto B6eed5b;
case 0x6eed5d:c.instructions+=20;goto B6eed5d;
case 0x6eed61:c.instructions+=19;goto B6eed61;
case 0x6eed64:c.instructions+=18;goto B6eed64;
case 0x6eed68:c.instructions+=17;goto B6eed68;
case 0x6eed6a:c.instructions+=16;goto B6eed6a;
case 0x6eed6c:c.instructions+=15;goto B6eed6c;
case 0x6eed6f:c.instructions+=14;goto B6eed6f;
case 0x6eed71:c.instructions+=13;goto B6eed71;
case 0x6eed73:c.instructions+=12;goto B6eed73;
case 0x6eed75:c.instructions+=11;goto B6eed75;
case 0x6eed77:c.instructions+=10;goto B6eed77;
case 0x6eed79:c.instructions+=9;goto B6eed79;
case 0x6eed7b:c.instructions+=8;goto B6eed7b;
case 0x6eed7d:c.instructions+=7;goto B6eed7d;
case 0x6eed7f:c.instructions+=6;goto B6eed7f;
case 0x6eed81:c.instructions+=5;goto B6eed81;
case 0x6eed85:c.instructions+=4;goto B6eed85;
case 0x6eed8b:c.instructions+=3;goto B6eed8b;
case 0x6eed8d:c.instructions+=2;goto B6eed8d;
case 0x6eed90:c.instructions+=1;goto B6eed90;
case 0x6eed92:goto L6eed92;
case 0x6eed96:c.instructions+=26;goto B6eed96;
case 0x6eed98:c.instructions+=25;goto B6eed98;
case 0x6eed9c:c.instructions+=24;goto B6eed9c;
case 0x6eeda0:c.instructions+=23;goto B6eeda0;
case 0x6eeda4:c.instructions+=22;goto B6eeda4;
case 0x6eeda6:c.instructions+=21;goto B6eeda6;
case 0x6eeda8:c.instructions+=20;goto B6eeda8;
case 0x6eedaa:c.instructions+=19;goto B6eedaa;
case 0x6eedae:c.instructions+=18;goto B6eedae;
case 0x6eedb2:c.instructions+=17;goto B6eedb2;
case 0x6eedb6:c.instructions+=16;goto B6eedb6;
case 0x6eedba:c.instructions+=15;goto B6eedba;
case 0x6eedbc:c.instructions+=14;goto B6eedbc;
case 0x6eedbe:c.instructions+=13;goto B6eedbe;
case 0x6eedc0:c.instructions+=12;goto B6eedc0;
case 0x6eedc2:c.instructions+=11;goto B6eedc2;
case 0x6eedc5:c.instructions+=10;goto B6eedc5;
case 0x6eedc6:c.instructions+=9;goto B6eedc6;
case 0x6eedc8:c.instructions+=8;goto B6eedc8;
case 0x6eedcc:c.instructions+=7;goto B6eedcc;
case 0x6eedce:c.instructions+=6;goto B6eedce;
case 0x6eedd0:c.instructions+=5;goto B6eedd0;
case 0x6eedd2:c.instructions+=4;goto B6eedd2;
case 0x6eedd5:c.instructions+=3;goto B6eedd5;
case 0x6eedd8:c.instructions+=2;goto B6eedd8;
case 0x6eeddb:c.instructions+=1;goto B6eeddb;
case 0x6eedde:goto L6eedde;
case 0x6eede2:c.instructions+=8;goto B6eede2;
case 0x6eede6:c.instructions+=7;goto B6eede6;
case 0x6eedea:c.instructions+=6;goto B6eedea;
case 0x6eedec:c.instructions+=5;goto B6eedec;
case 0x6eedef:c.instructions+=4;goto B6eedef;
case 0x6eedf1:c.instructions+=3;goto B6eedf1;
case 0x6eedf2:c.instructions+=2;goto B6eedf2;
case 0x6eedf5:c.instructions+=1;goto B6eedf5;
case 0x6eedf8:goto L6eedf8;
case 0x6eedfa:c.instructions+=4;goto B6eedfa;
case 0x6eedfc:c.instructions+=3;goto B6eedfc;
case 0x6eedfd:c.instructions+=2;goto B6eedfd;
case 0x6eee00:c.instructions+=1;goto B6eee00;
case 0x6eee10:goto L6eee10;
case 0x6eee13:c.instructions+=5;goto B6eee13;
case 0x6eee14:c.instructions+=4;goto B6eee14;
case 0x6eee15:c.instructions+=3;goto B6eee15;
case 0x6eee17:c.instructions+=2;goto B6eee17;
case 0x6eee19:c.instructions+=1;goto B6eee19;
case 0x6eee1e:goto L6eee1e;
case 0x6eee20:c.instructions+=8;goto B6eee20;
case 0x6eee23:c.instructions+=7;goto B6eee23;
case 0x6eee27:c.instructions+=6;goto B6eee27;
case 0x6eee29:c.instructions+=5;goto B6eee29;
case 0x6eee2c:c.instructions+=4;goto B6eee2c;
case 0x6eee2e:c.instructions+=3;goto B6eee2e;
case 0x6eee2f:c.instructions+=2;goto B6eee2f;
case 0x6eee30:c.instructions+=1;goto B6eee30;
case 0x6eee33:goto L6eee33;
case 0x6eee35:c.instructions+=1;goto B6eee35;
case 0x6eee37:goto L6eee37;
case 0x6eee38:c.instructions+=3;goto B6eee38;
case 0x6eee39:c.instructions+=2;goto B6eee39;
case 0x6eee3c:c.instructions+=1;goto B6eee3c;
case 0x6eee3f:goto L6eee3f;
case 0x6eee42:c.instructions+=15;goto B6eee42;
case 0x6eee43:c.instructions+=14;goto B6eee43;
case 0x6eee49:c.instructions+=13;goto B6eee49;
case 0x6eee4c:c.instructions+=12;goto B6eee4c;
case 0x6eee4e:c.instructions+=11;goto B6eee4e;
case 0x6eee50:c.instructions+=10;goto B6eee50;
case 0x6eee53:c.instructions+=9;goto B6eee53;
case 0x6eee57:c.instructions+=8;goto B6eee57;
case 0x6eee5a:c.instructions+=7;goto B6eee5a;
case 0x6eee5e:c.instructions+=6;goto B6eee5e;
case 0x6eee61:c.instructions+=5;goto B6eee61;
case 0x6eee63:c.instructions+=4;goto B6eee63;
case 0x6eee67:c.instructions+=3;goto B6eee67;
case 0x6eee6a:c.instructions+=2;goto B6eee6a;
case 0x6eee6e:c.instructions+=1;goto B6eee6e;
case 0x6eee70:goto L6eee70;
case 0x6eee73:c.instructions+=3;goto B6eee73;
case 0x6eee75:c.instructions+=2;goto B6eee75;
case 0x6eee76:c.instructions+=1;goto B6eee76;
case 0x6eee7b:goto L6eee7b;
case 0x6eee7e:c.instructions+=6;goto B6eee7e;
case 0x6eee82:c.instructions+=5;goto B6eee82;
case 0x6eee84:c.instructions+=4;goto B6eee84;
case 0x6eee86:c.instructions+=3;goto B6eee86;
case 0x6eee87:c.instructions+=2;goto B6eee87;
case 0x6eee88:c.instructions+=1;goto B6eee88;
case 0x6eee8b:goto L6eee8b;
case 0x6eee8d:c.instructions+=1;goto B6eee8d;
case 0x6eee8f:goto L6eee8f;
case 0x6eee90:c.instructions+=4;goto B6eee90;
case 0x6eee91:c.instructions+=3;goto B6eee91;
case 0x6eee92:c.instructions+=2;goto B6eee92;
case 0x6eee95:c.instructions+=1;goto B6eee95;
case 0x6eee98:goto L6eee98;
case 0x6eee9b:c.instructions+=16;goto B6eee9b;
case 0x6eee9d:c.instructions+=15;goto B6eee9d;
case 0x6eeea0:c.instructions+=14;goto B6eeea0;
case 0x6eeea4:c.instructions+=13;goto B6eeea4;
case 0x6eeea8:c.instructions+=12;goto B6eeea8;
case 0x6eeeab:c.instructions+=11;goto B6eeeab;
case 0x6eeeaf:c.instructions+=10;goto B6eeeaf;
case 0x6eeeb0:c.instructions+=9;goto B6eeeb0;
case 0x6eeeb3:c.instructions+=8;goto B6eeeb3;
case 0x6eeeb7:c.instructions+=7;goto B6eeeb7;
case 0x6eeebb:c.instructions+=6;goto B6eeebb;
case 0x6eeebf:c.instructions+=5;goto B6eeebf;
case 0x6eeec0:c.instructions+=4;goto B6eeec0;
case 0x6eeec4:c.instructions+=3;goto B6eeec4;
case 0x6eeec5:c.instructions+=2;goto B6eeec5;
case 0x6eeec6:c.instructions+=1;goto B6eeec6;
case 0x6eeecb:goto L6eeecb;
case 0x6eeece:c.instructions+=1;goto B6eeece;
case 0x6eeed0:goto L6eeed0;
case 0x6eeed2:c.instructions+=7;goto B6eeed2;
case 0x6eeed5:c.instructions+=6;goto B6eeed5;
case 0x6eeed8:c.instructions+=5;goto B6eeed8;
case 0x6eeedc:c.instructions+=4;goto B6eeedc;
case 0x6eeedf:c.instructions+=3;goto B6eeedf;
case 0x6eeee3:c.instructions+=2;goto B6eeee3;
case 0x6eeee7:c.instructions+=1;goto B6eeee7;
case 0x6eeeeb:goto L6eeeeb;
case 0x6eeeef:c.instructions+=10;goto B6eeeef;
case 0x6eeef0:c.instructions+=9;goto B6eeef0;
case 0x6eeef4:c.instructions+=8;goto B6eeef4;
case 0x6eeef5:c.instructions+=7;goto B6eeef5;
case 0x6eeef9:c.instructions+=6;goto B6eeef9;
case 0x6eeefa:c.instructions+=5;goto B6eeefa;
case 0x6eef02:c.instructions+=4;goto B6eef02;
case 0x6eef0a:c.instructions+=3;goto B6eef0a;
case 0x6eef12:c.instructions+=2;goto B6eef12;
case 0x6eef1a:c.instructions+=1;goto B6eef1a;
case 0x6eef1f:goto L6eef1f;
case 0x6eef23:c.instructions+=11;goto B6eef23;
case 0x6eef27:c.instructions+=10;goto B6eef27;
case 0x6eef2b:c.instructions+=9;goto B6eef2b;
case 0x6eef2d:c.instructions+=8;goto B6eef2d;
case 0x6eef30:c.instructions+=7;goto B6eef30;
case 0x6eef31:c.instructions+=6;goto B6eef31;
case 0x6eef32:c.instructions+=5;goto B6eef32;
case 0x6eef35:c.instructions+=4;goto B6eef35;
case 0x6eef37:c.instructions+=3;goto B6eef37;
case 0x6eef38:c.instructions+=2;goto B6eef38;
case 0x6eef3b:c.instructions+=1;goto B6eef3b;
case 0x6eef40:goto L6eef40;
case 0x6eef43:c.instructions+=1;goto B6eef43;
case 0x6eef50:goto L6eef50;
case 0x6eef53:c.instructions+=5;goto B6eef53;
case 0x6eef54:c.instructions+=4;goto B6eef54;
case 0x6eef55:c.instructions+=3;goto B6eef55;
case 0x6eef57:c.instructions+=2;goto B6eef57;
case 0x6eef59:c.instructions+=1;goto B6eef59;
case 0x6eef5e:goto L6eef5e;
case 0x6eef60:c.instructions+=8;goto B6eef60;
case 0x6eef63:c.instructions+=7;goto B6eef63;
case 0x6eef67:c.instructions+=6;goto B6eef67;
case 0x6eef69:c.instructions+=5;goto B6eef69;
case 0x6eef6c:c.instructions+=4;goto B6eef6c;
case 0x6eef6e:c.instructions+=3;goto B6eef6e;
case 0x6eef6f:c.instructions+=2;goto B6eef6f;
case 0x6eef70:c.instructions+=1;goto B6eef70;
case 0x6eef73:goto L6eef73;
case 0x6eef75:c.instructions+=1;goto B6eef75;
case 0x6eef7b:goto L6eef7b;
case 0x6eef7e:c.instructions+=16;goto B6eef7e;
case 0x6eef7f:c.instructions+=15;goto B6eef7f;
case 0x6eef85:c.instructions+=14;goto B6eef85;
case 0x6eef88:c.instructions+=13;goto B6eef88;
case 0x6eef8a:c.instructions+=12;goto B6eef8a;
case 0x6eef8c:c.instructions+=11;goto B6eef8c;
case 0x6eef8f:c.instructions+=10;goto B6eef8f;
case 0x6eef90:c.instructions+=9;goto B6eef90;
case 0x6eef93:c.instructions+=8;goto B6eef93;
case 0x6eef96:c.instructions+=7;goto B6eef96;
case 0x6eef9a:c.instructions+=6;goto B6eef9a;
case 0x6eef9c:c.instructions+=5;goto B6eef9c;
case 0x6eefa0:c.instructions+=4;goto B6eefa0;
case 0x6eefa3:c.instructions+=3;goto B6eefa3;
case 0x6eefa7:c.instructions+=2;goto B6eefa7;
case 0x6eefab:c.instructions+=1;goto B6eefab;
case 0x6eefad:goto L6eefad;
case 0x6eefb0:c.instructions+=3;goto B6eefb0;
case 0x6eefb2:c.instructions+=2;goto B6eefb2;
case 0x6eefb3:c.instructions+=1;goto B6eefb3;
case 0x6eefb8:goto L6eefb8;
case 0x6eefbb:c.instructions+=6;goto B6eefbb;
case 0x6eefbf:c.instructions+=5;goto B6eefbf;
case 0x6eefc1:c.instructions+=4;goto B6eefc1;
case 0x6eefc3:c.instructions+=3;goto B6eefc3;
case 0x6eefc4:c.instructions+=2;goto B6eefc4;
case 0x6eefc5:c.instructions+=1;goto B6eefc5;
case 0x6eefc8:goto L6eefc8;
case 0x6eefca:c.instructions+=1;goto B6eefca;
case 0x6eefcc:goto L6eefcc;
case 0x6eefcf:c.instructions+=16;goto B6eefcf;
case 0x6eefd1:c.instructions+=15;goto B6eefd1;
case 0x6eefd4:c.instructions+=14;goto B6eefd4;
case 0x6eefd8:c.instructions+=13;goto B6eefd8;
case 0x6eefdc:c.instructions+=12;goto B6eefdc;
case 0x6eefe0:c.instructions+=11;goto B6eefe0;
case 0x6eefe3:c.instructions+=10;goto B6eefe3;
case 0x6eefe4:c.instructions+=9;goto B6eefe4;
case 0x6eefe7:c.instructions+=8;goto B6eefe7;
case 0x6eefeb:c.instructions+=7;goto B6eefeb;
case 0x6eefef:c.instructions+=6;goto B6eefef;
case 0x6eeff3:c.instructions+=5;goto B6eeff3;
case 0x6eeff4:c.instructions+=4;goto B6eeff4;
case 0x6eeff8:c.instructions+=3;goto B6eeff8;
case 0x6eeff9:c.instructions+=2;goto B6eeff9;
case 0x6eeffa:c.instructions+=1;goto B6eeffa;
case 0x6eefff:goto L6eefff;
default:missing_instruction(c.pc);}
B6ee000:L6ee000:{c.instructions+=4;NFSU2_TR(0x6ee000);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee002:{NFSU2_TR(0x6ee002);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ee004:{NFSU2_TR(0x6ee004);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee007:{NFSU2_TR(0x6ee007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee010:L6ee010:{c.instructions+=75;NFSU2_TR(0x6ee010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6ee013:{NFSU2_TR(0x6ee013);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee017:{NFSU2_TR(0x6ee017);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee019:{NFSU2_TR(0x6ee019);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee01d:{NFSU2_TR(0x6ee01d);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ee01f:{NFSU2_TR(0x6ee01f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee022:{NFSU2_TR(0x6ee022);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ee024:{NFSU2_TR(0x6ee024);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee027:{NFSU2_TR(0x6ee027);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ee029:{NFSU2_TR(0x6ee029);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee02d:{NFSU2_TR(0x6ee02d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ee02f:{NFSU2_TR(0x6ee02f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee032:{NFSU2_TR(0x6ee032);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee036:{NFSU2_TR(0x6ee036);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ee038:{NFSU2_TR(0x6ee038);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee03b:{NFSU2_TR(0x6ee03b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee03f:{NFSU2_TR(0x6ee03f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee043:{NFSU2_TR(0x6ee043);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee046:{NFSU2_TR(0x6ee046);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee04a:{NFSU2_TR(0x6ee04a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ee04c:{NFSU2_TR(0x6ee04c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee04e:{NFSU2_TR(0x6ee04e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee052:{NFSU2_TR(0x6ee052);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ee054:{NFSU2_TR(0x6ee054);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee056:{NFSU2_TR(0x6ee056);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee05a:{NFSU2_TR(0x6ee05a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee05e:{NFSU2_TR(0x6ee05e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee060:{NFSU2_TR(0x6ee060);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee064:{NFSU2_TR(0x6ee064);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee067:{NFSU2_TR(0x6ee067);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee06b:{NFSU2_TR(0x6ee06b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee06e:{NFSU2_TR(0x6ee06e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee072:{NFSU2_TR(0x6ee072);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee075:{NFSU2_TR(0x6ee075);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee079:{NFSU2_TR(0x6ee079);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ee07b:{NFSU2_TR(0x6ee07b);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B6ee07d:{NFSU2_TR(0x6ee07d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee083:{NFSU2_TR(0x6ee083);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee085:{NFSU2_TR(0x6ee085);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee089:{NFSU2_TR(0x6ee089);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee08d:{NFSU2_TR(0x6ee08d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee090:{NFSU2_TR(0x6ee090);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee092:{NFSU2_TR(0x6ee092);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee096:{NFSU2_TR(0x6ee096);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee09a:{NFSU2_TR(0x6ee09a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee09d:{NFSU2_TR(0x6ee09d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee09f:{NFSU2_TR(0x6ee09f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee0a1:{NFSU2_TR(0x6ee0a1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee0a5:{NFSU2_TR(0x6ee0a5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee0ab:{NFSU2_TR(0x6ee0ab);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee0ae:{NFSU2_TR(0x6ee0ae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee0b2:{NFSU2_TR(0x6ee0b2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee0b6:{NFSU2_TR(0x6ee0b6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee0b8:{NFSU2_TR(0x6ee0b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee0ba:{NFSU2_TR(0x6ee0ba);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ee0bc:{NFSU2_TR(0x6ee0bc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee0c0:{NFSU2_TR(0x6ee0c0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee0c3:{NFSU2_TR(0x6ee0c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee0c5:{NFSU2_TR(0x6ee0c5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee0c8:{NFSU2_TR(0x6ee0c8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ee0ca:{NFSU2_TR(0x6ee0ca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee0ce:{NFSU2_TR(0x6ee0ce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee0d4:{NFSU2_TR(0x6ee0d4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee0d7:{NFSU2_TR(0x6ee0d7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee0db:{NFSU2_TR(0x6ee0db);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee0df:{NFSU2_TR(0x6ee0df);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee0e1:{NFSU2_TR(0x6ee0e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee0e3:{NFSU2_TR(0x6ee0e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ee0e5:{NFSU2_TR(0x6ee0e5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee0e9:{NFSU2_TR(0x6ee0e9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee0ec:{NFSU2_TR(0x6ee0ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee0ee:{NFSU2_TR(0x6ee0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee0f5:{NFSU2_TR(0x6ee0f5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee0f8:{NFSU2_TR(0x6ee0f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee0fb:{NFSU2_TR(0x6ee0fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee100:L6ee100:{c.instructions+=18;NFSU2_TR(0x6ee100);
__builtin_memmove((R+0),(R+4),4);
}
B6ee102:{NFSU2_TR(0x6ee102);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee104:{NFSU2_TR(0x6ee104);
w4(R+8,u32(0xffffff9cull));
}
B6ee109:{NFSU2_TR(0x6ee109);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee10c:{NFSU2_TR(0x6ee10c);
u8 U[4];
w4(U+0,u32(0x7c1fc0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ee112:{NFSU2_TR(0x6ee112);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee115:{NFSU2_TR(0x6ee115);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee118:{NFSU2_TR(0x6ee118);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee11b:{NFSU2_TR(0x6ee11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee11e:{NFSU2_TR(0x6ee11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee125:{NFSU2_TR(0x6ee125);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee128:{NFSU2_TR(0x6ee128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee12b:{NFSU2_TR(0x6ee12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee12e:{NFSU2_TR(0x6ee12e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ee131:{NFSU2_TR(0x6ee131);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee134:{NFSU2_TR(0x6ee134);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee137:{NFSU2_TR(0x6ee137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee13e:{NFSU2_TR(0x6ee13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee140:L6ee140:{c.instructions+=10;NFSU2_TR(0x6ee140);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee143:{NFSU2_TR(0x6ee143);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee144:{NFSU2_TR(0x6ee144);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee148:{NFSU2_TR(0x6ee148);
__builtin_memmove((R+24),(R+4),4);
}
B6ee14a:{NFSU2_TR(0x6ee14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee14d:{NFSU2_TR(0x6ee14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ee14f:{NFSU2_TR(0x6ee14f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee150:{NFSU2_TR(0x6ee150);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee154:{NFSU2_TR(0x6ee154);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee155:{NFSU2_TR(0x6ee155);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee158ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ee158:L6ee158:{c.instructions+=2;NFSU2_TR(0x6ee158);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ee15a:{NFSU2_TR(0x6ee15a);
if(r1(R+518)){{goto L6ee186;}}
}
B6ee15c:L6ee15c:{c.instructions+=5;NFSU2_TR(0x6ee15c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee15f:{NFSU2_TR(0x6ee15f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee165:{NFSU2_TR(0x6ee165);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee167:{NFSU2_TR(0x6ee167);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee16a:{NFSU2_TR(0x6ee16a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ee22e;}}
}
B6ee170:L6ee170:{c.instructions+=7;NFSU2_TR(0x6ee170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee173:{NFSU2_TR(0x6ee173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ee175:{NFSU2_TR(0x6ee175);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee179:{NFSU2_TR(0x6ee179);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee17a:{NFSU2_TR(0x6ee17a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee17e:{NFSU2_TR(0x6ee17e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee17f:{NFSU2_TR(0x6ee17f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee182ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ee182:L6ee182:{c.instructions+=2;NFSU2_TR(0x6ee182);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ee184:{NFSU2_TR(0x6ee184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee18f;}}
}
B6ee186:L6ee186:{c.instructions+=4;NFSU2_TR(0x6ee186);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6ee188:{NFSU2_TR(0x6ee188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee189:{NFSU2_TR(0x6ee189);
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
B6ee18c:{NFSU2_TR(0x6ee18c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee18f:L6ee18f:{c.instructions+=29;NFSU2_TR(0x6ee18f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee195:{NFSU2_TR(0x6ee195);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee199:{NFSU2_TR(0x6ee199);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee19c:{NFSU2_TR(0x6ee19c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1a0:{NFSU2_TR(0x6ee1a0);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee1a3:{NFSU2_TR(0x6ee1a3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1a7:{NFSU2_TR(0x6ee1a7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6ee1a9:{NFSU2_TR(0x6ee1a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee1ab:{NFSU2_TR(0x6ee1ab);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee1ad:{NFSU2_TR(0x6ee1ad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1b1:{NFSU2_TR(0x6ee1b1);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee1b4:{NFSU2_TR(0x6ee1b4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1b8:{NFSU2_TR(0x6ee1b8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6ee1ba:{NFSU2_TR(0x6ee1ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee1bc:{NFSU2_TR(0x6ee1bc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ee1bf:{NFSU2_TR(0x6ee1bf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1c1:{NFSU2_TR(0x6ee1c1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ee1c3:{NFSU2_TR(0x6ee1c3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ee1c5:{NFSU2_TR(0x6ee1c5);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6ee1c7:{NFSU2_TR(0x6ee1c7);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6ee1c9:{NFSU2_TR(0x6ee1c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee1cb:{NFSU2_TR(0x6ee1cb);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee1cd:{NFSU2_TR(0x6ee1cd);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6ee1cf:{NFSU2_TR(0x6ee1cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ee1d1:{NFSU2_TR(0x6ee1d1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ee1d5:{NFSU2_TR(0x6ee1d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee1db:{NFSU2_TR(0x6ee1db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee1dd:{NFSU2_TR(0x6ee1dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee1e0:{NFSU2_TR(0x6ee1e0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ee248;}}
}
B6ee1e2:L6ee1e2:{c.instructions+=27;NFSU2_TR(0x6ee1e2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1e6:{NFSU2_TR(0x6ee1e6);
w1(R+0,u8(0x1ull));
}
B6ee1e8:{NFSU2_TR(0x6ee1e8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee1ec:{NFSU2_TR(0x6ee1ec);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1f0:{NFSU2_TR(0x6ee1f0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee1f4:{NFSU2_TR(0x6ee1f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee1f6:{NFSU2_TR(0x6ee1f6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee1f8:{NFSU2_TR(0x6ee1f8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ee1fa:{NFSU2_TR(0x6ee1fa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee1fe:{NFSU2_TR(0x6ee1fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee202:{NFSU2_TR(0x6ee202);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee206:{NFSU2_TR(0x6ee206);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee20a:{NFSU2_TR(0x6ee20a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee20c:{NFSU2_TR(0x6ee20c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee20e:{NFSU2_TR(0x6ee20e);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6ee210:{NFSU2_TR(0x6ee210);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ee212:{NFSU2_TR(0x6ee212);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee215:{NFSU2_TR(0x6ee215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee216:{NFSU2_TR(0x6ee216);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee218:{NFSU2_TR(0x6ee218);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee21c:{NFSU2_TR(0x6ee21c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ee21e:{NFSU2_TR(0x6ee21e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee220:{NFSU2_TR(0x6ee220);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee222:{NFSU2_TR(0x6ee222);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee225:{NFSU2_TR(0x6ee225);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee228:{NFSU2_TR(0x6ee228);
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
B6ee22b:{NFSU2_TR(0x6ee22b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee22e:L6ee22e:{c.instructions+=9;NFSU2_TR(0x6ee22e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee232:{NFSU2_TR(0x6ee232);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee236:{NFSU2_TR(0x6ee236);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee23a:{NFSU2_TR(0x6ee23a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee23c:{NFSU2_TR(0x6ee23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee23f:{NFSU2_TR(0x6ee23f);
w1(R+0,u8(0x1ull));
}
B6ee241:{NFSU2_TR(0x6ee241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee242:{NFSU2_TR(0x6ee242);
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
B6ee245:{NFSU2_TR(0x6ee245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee248:L6ee248:{c.instructions+=5;NFSU2_TR(0x6ee248);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ee24a:{NFSU2_TR(0x6ee24a);
w1(R+0,u8(0x1ull));
}
B6ee24c:{NFSU2_TR(0x6ee24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee24d:{NFSU2_TR(0x6ee24d);
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
B6ee250:{NFSU2_TR(0x6ee250);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee260:L6ee260:{c.instructions+=54;NFSU2_TR(0x6ee260);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee261:{NFSU2_TR(0x6ee261);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee265:{NFSU2_TR(0x6ee265);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee268:{NFSU2_TR(0x6ee268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ee26c:{NFSU2_TR(0x6ee26c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee270:{NFSU2_TR(0x6ee270);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee273:{NFSU2_TR(0x6ee273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ee275:{NFSU2_TR(0x6ee275);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee277:{NFSU2_TR(0x6ee277);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee27b:{NFSU2_TR(0x6ee27b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee27e:{NFSU2_TR(0x6ee27e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee282:{NFSU2_TR(0x6ee282);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee285:{NFSU2_TR(0x6ee285);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee287:{NFSU2_TR(0x6ee287);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee289:{NFSU2_TR(0x6ee289);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6ee28f:{NFSU2_TR(0x6ee28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee296:{NFSU2_TR(0x6ee296);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee298:{NFSU2_TR(0x6ee298);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ee29a:{NFSU2_TR(0x6ee29a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6ee29c:{NFSU2_TR(0x6ee29c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6ee29e:{NFSU2_TR(0x6ee29e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6ee2a0:{NFSU2_TR(0x6ee2a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee2a2:{NFSU2_TR(0x6ee2a2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee2a4:{NFSU2_TR(0x6ee2a4);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B6ee2a6:{NFSU2_TR(0x6ee2a6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee2aa:{NFSU2_TR(0x6ee2aa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee2ae:{NFSU2_TR(0x6ee2ae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee2b2:{NFSU2_TR(0x6ee2b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee2b6:{NFSU2_TR(0x6ee2b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee2b8:{NFSU2_TR(0x6ee2b8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee2ba:{NFSU2_TR(0x6ee2ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ee2be:{NFSU2_TR(0x6ee2be);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B6ee2c0:{NFSU2_TR(0x6ee2c0);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6ee2c2:{NFSU2_TR(0x6ee2c2);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B6ee2c4:{NFSU2_TR(0x6ee2c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ee2c6:{NFSU2_TR(0x6ee2c6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee2cc:{NFSU2_TR(0x6ee2cc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee2d2:{NFSU2_TR(0x6ee2d2);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B6ee2d4:{NFSU2_TR(0x6ee2d4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee2da:{NFSU2_TR(0x6ee2da);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ee2dc:{NFSU2_TR(0x6ee2dc);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee2de:{NFSU2_TR(0x6ee2de);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ee2e2:{NFSU2_TR(0x6ee2e2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee2e5:{NFSU2_TR(0x6ee2e5);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ee2e7:{NFSU2_TR(0x6ee2e7);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee2ea:{NFSU2_TR(0x6ee2ea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee2ec:{NFSU2_TR(0x6ee2ec);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee2ef:{NFSU2_TR(0x6ee2ef);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee2f2:{NFSU2_TR(0x6ee2f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee2f4:{NFSU2_TR(0x6ee2f4);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ee2f6:{NFSU2_TR(0x6ee2f6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee2fc:{NFSU2_TR(0x6ee2fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee2fe:{NFSU2_TR(0x6ee2fe);
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
B6ee301:{NFSU2_TR(0x6ee301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee310;}}
}
B6ee303:L6ee303:{c.instructions+=3;NFSU2_TR(0x6ee303);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee307:{NFSU2_TR(0x6ee307);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee30d:{NFSU2_TR(0x6ee30d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee310:L6ee310:{c.instructions+=2;NFSU2_TR(0x6ee310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee311:{NFSU2_TR(0x6ee311);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee320:L6ee320:{c.instructions+=16;NFSU2_TR(0x6ee320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6ee323:{NFSU2_TR(0x6ee323);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee324:{NFSU2_TR(0x6ee324);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ee328:{NFSU2_TR(0x6ee328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ee32a:{NFSU2_TR(0x6ee32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee32d:{NFSU2_TR(0x6ee32d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee331:{NFSU2_TR(0x6ee331);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee335:{NFSU2_TR(0x6ee335);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee339:{NFSU2_TR(0x6ee339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee33a:{NFSU2_TR(0x6ee33a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee33e:{NFSU2_TR(0x6ee33e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee33f:{NFSU2_TR(0x6ee33f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B6ee342:{NFSU2_TR(0x6ee342);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee343:{NFSU2_TR(0x6ee343);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee34b:{NFSU2_TR(0x6ee34b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee353:{NFSU2_TR(0x6ee353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee358ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee010u);}goto L6ee010;}
}
B6ee358:L6ee358:{c.instructions+=8;NFSU2_TR(0x6ee358);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee35c:{NFSU2_TR(0x6ee35c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee360:{NFSU2_TR(0x6ee360);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ee363:{NFSU2_TR(0x6ee363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6ee365:{NFSU2_TR(0x6ee365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee368:{NFSU2_TR(0x6ee368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee369:{NFSU2_TR(0x6ee369);
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
B6ee36c:{NFSU2_TR(0x6ee36c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee370:L6ee370:{c.instructions+=7;NFSU2_TR(0x6ee370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6ee373:{NFSU2_TR(0x6ee373);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee374:{NFSU2_TR(0x6ee374);
__builtin_memmove((R+24),(R+4),4);
}
B6ee376:{NFSU2_TR(0x6ee376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee379:{NFSU2_TR(0x6ee379);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee37d:{NFSU2_TR(0x6ee37d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee37e:{NFSU2_TR(0x6ee37e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee383ull));
TAIL_STATIC(0x6ef030u,6ef);
}
B6ee383:L6ee383:{c.instructions+=4;NFSU2_TR(0x6ee383);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee387:{NFSU2_TR(0x6ee387);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee388:{NFSU2_TR(0x6ee388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee38b:{NFSU2_TR(0x6ee38b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee390ull));
TAIL_STATIC(0x6ef030u,6ef);
}
B6ee390:L6ee390:{c.instructions+=9;NFSU2_TR(0x6ee390);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee394:{NFSU2_TR(0x6ee394);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee395:{NFSU2_TR(0x6ee395);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee398:{NFSU2_TR(0x6ee398);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee39c:{NFSU2_TR(0x6ee39c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee39d:{NFSU2_TR(0x6ee39d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee3a1:{NFSU2_TR(0x6ee3a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee3a2:{NFSU2_TR(0x6ee3a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee3a3:{NFSU2_TR(0x6ee3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee3a8ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6ee3a8:L6ee3a8:{c.instructions+=11;NFSU2_TR(0x6ee3a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee3ac:{NFSU2_TR(0x6ee3ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee3ad:{NFSU2_TR(0x6ee3ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee3b1:{NFSU2_TR(0x6ee3b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee3b2:{NFSU2_TR(0x6ee3b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee3b6:{NFSU2_TR(0x6ee3b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee3b7:{NFSU2_TR(0x6ee3b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee3bf:{NFSU2_TR(0x6ee3bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee3c7:{NFSU2_TR(0x6ee3c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee3cf:{NFSU2_TR(0x6ee3cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee3d7:{NFSU2_TR(0x6ee3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee3dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee010u);}goto L6ee010;}
}
B6ee3dc:L6ee3dc:{c.instructions+=12;NFSU2_TR(0x6ee3dc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee3e0:{NFSU2_TR(0x6ee3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee3e4:{NFSU2_TR(0x6ee3e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee3e8:{NFSU2_TR(0x6ee3e8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee3ea:{NFSU2_TR(0x6ee3ea);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee3ee:{NFSU2_TR(0x6ee3ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ee3f1:{NFSU2_TR(0x6ee3f1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee3f5:{NFSU2_TR(0x6ee3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee3f8:{NFSU2_TR(0x6ee3f8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee3fc:{NFSU2_TR(0x6ee3fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee3ff:{NFSU2_TR(0x6ee3ff);
u8 U[4];
w4(U+0,u32(0x7c2008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee404:{NFSU2_TR(0x6ee404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee409ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6ee409:L6ee409:{c.instructions+=5;NFSU2_TR(0x6ee409);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6ee40c:{NFSU2_TR(0x6ee40c);
w1(R+0,u8(0x1ull));
}
B6ee40e:{NFSU2_TR(0x6ee40e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee40f:{NFSU2_TR(0x6ee40f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee412:{NFSU2_TR(0x6ee412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee420:L6ee420:{c.instructions+=7;NFSU2_TR(0x6ee420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6ee423:{NFSU2_TR(0x6ee423);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee424:{NFSU2_TR(0x6ee424);
__builtin_memmove((R+24),(R+4),4);
}
B6ee426:{NFSU2_TR(0x6ee426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee429:{NFSU2_TR(0x6ee429);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee42d:{NFSU2_TR(0x6ee42d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee42e:{NFSU2_TR(0x6ee42e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee433ull));
TAIL_STATIC(0x6ef050u,6ef);
}
B6ee433:L6ee433:{c.instructions+=4;NFSU2_TR(0x6ee433);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee437:{NFSU2_TR(0x6ee437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee438:{NFSU2_TR(0x6ee438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee43b:{NFSU2_TR(0x6ee43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee440ull));
TAIL_STATIC(0x6ef050u,6ef);
}
B6ee440:L6ee440:{c.instructions+=9;NFSU2_TR(0x6ee440);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee444:{NFSU2_TR(0x6ee444);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee445:{NFSU2_TR(0x6ee445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee448:{NFSU2_TR(0x6ee448);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee44c:{NFSU2_TR(0x6ee44c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee44d:{NFSU2_TR(0x6ee44d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee451:{NFSU2_TR(0x6ee451);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee452:{NFSU2_TR(0x6ee452);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee453:{NFSU2_TR(0x6ee453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee458ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6ee458:L6ee458:{c.instructions+=11;NFSU2_TR(0x6ee458);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee45c:{NFSU2_TR(0x6ee45c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee45d:{NFSU2_TR(0x6ee45d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee461:{NFSU2_TR(0x6ee461);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee462:{NFSU2_TR(0x6ee462);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee466:{NFSU2_TR(0x6ee466);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee467:{NFSU2_TR(0x6ee467);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee46f:{NFSU2_TR(0x6ee46f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee477:{NFSU2_TR(0x6ee477);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee47f:{NFSU2_TR(0x6ee47f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee487:{NFSU2_TR(0x6ee487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee48cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee010u);}goto L6ee010;}
}
B6ee48c:L6ee48c:{c.instructions+=12;NFSU2_TR(0x6ee48c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee490:{NFSU2_TR(0x6ee490);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee494:{NFSU2_TR(0x6ee494);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee498:{NFSU2_TR(0x6ee498);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee49a:{NFSU2_TR(0x6ee49a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee49e:{NFSU2_TR(0x6ee49e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ee4a1:{NFSU2_TR(0x6ee4a1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee4a5:{NFSU2_TR(0x6ee4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee4a8:{NFSU2_TR(0x6ee4a8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee4ac:{NFSU2_TR(0x6ee4ac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee4af:{NFSU2_TR(0x6ee4af);
u8 U[4];
w4(U+0,u32(0x7c2008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee4b4:{NFSU2_TR(0x6ee4b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee4b9ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6ee4b9:L6ee4b9:{c.instructions+=5;NFSU2_TR(0x6ee4b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6ee4bc:{NFSU2_TR(0x6ee4bc);
w1(R+0,u8(0x1ull));
}
B6ee4be:{NFSU2_TR(0x6ee4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee4bf:{NFSU2_TR(0x6ee4bf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee4c2:{NFSU2_TR(0x6ee4c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee4d0:L6ee4d0:{c.instructions+=6;NFSU2_TR(0x6ee4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee4d1:{NFSU2_TR(0x6ee4d1);
__builtin_memmove((R+24),(R+4),4);
}
B6ee4d3:{NFSU2_TR(0x6ee4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee4d6:{NFSU2_TR(0x6ee4d6);
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
B6ee4d8:{NFSU2_TR(0x6ee4d8);
u8 U[4];
w4(U+0,u32(0x7c1fc0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ee4de:{NFSU2_TR(0x6ee4de);
if(r1(R+518)){{goto L6ee4f1;}}
}
B6ee4e0:L6ee4e0:{c.instructions+=2;NFSU2_TR(0x6ee4e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee4e2:{NFSU2_TR(0x6ee4e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee4e7ull));
TAIL_STATIC(0x6e3ec0u,6e3);
}
B6ee4e7:L6ee4e7:{c.instructions+=3;NFSU2_TR(0x6ee4e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ee4ea:{NFSU2_TR(0x6ee4ea);
__builtin_memmove((R+4),(R+0),4);
}
B6ee4ec:{NFSU2_TR(0x6ee4ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee4f1ull));
TAIL_STATIC(0x6e3e90u,6e3);
}
B6ee4f1:L6ee4f1:{c.instructions+=3;NFSU2_TR(0x6ee4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee4f4:{NFSU2_TR(0x6ee4f4);
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
B6ee4f6:{NFSU2_TR(0x6ee4f6);
if(r1(R+518)){{goto L6ee504;}}
}
B6ee4f8:L6ee4f8:{c.instructions+=4;NFSU2_TR(0x6ee4f8);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ee4fe:{NFSU2_TR(0x6ee4fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ee500:{NFSU2_TR(0x6ee500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee501:{NFSU2_TR(0x6ee501);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee504ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ee504:L6ee504:{c.instructions+=3;NFSU2_TR(0x6ee504);
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
B6ee509:{NFSU2_TR(0x6ee509);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ee50f:{NFSU2_TR(0x6ee50f);
if(r1(R+518)){{goto L6ee51d;}}
}
B6ee511:L6ee511:{c.instructions+=3;NFSU2_TR(0x6ee511);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee513:{NFSU2_TR(0x6ee513);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee514:{NFSU2_TR(0x6ee514);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee51aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ee51a:L6ee51a:{c.instructions+=1;NFSU2_TR(0x6ee51a);
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
B6ee51d:L6ee51d:{c.instructions+=3;NFSU2_TR(0x6ee51d);
__builtin_memmove((R+0),(R+24),4);
}
B6ee51f:{NFSU2_TR(0x6ee51f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee520:{NFSU2_TR(0x6ee520);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee530:L6ee530:{c.instructions+=8;NFSU2_TR(0x6ee530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6ee533:{NFSU2_TR(0x6ee533);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee537:{NFSU2_TR(0x6ee537);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ee53b:{NFSU2_TR(0x6ee53b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee541:{NFSU2_TR(0x6ee541);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee545:{NFSU2_TR(0x6ee545);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee547:{NFSU2_TR(0x6ee547);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ee54a:{NFSU2_TR(0x6ee54a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee564;}}
}
B6ee54c:L6ee54c:{c.instructions+=6;NFSU2_TR(0x6ee54c);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee552:{NFSU2_TR(0x6ee552);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee556:{NFSU2_TR(0x6ee556);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee55a:{NFSU2_TR(0x6ee55a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6ee55e:{NFSU2_TR(0x6ee55e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee562:{NFSU2_TR(0x6ee562);
{goto L6ee57a;}
}
B6ee564:L6ee564:{c.instructions+=5;NFSU2_TR(0x6ee564);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee56a:{NFSU2_TR(0x6ee56a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee56e:{NFSU2_TR(0x6ee56e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee572:{NFSU2_TR(0x6ee572);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6ee576:{NFSU2_TR(0x6ee576);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee57a:L6ee57a:{c.instructions+=3;NFSU2_TR(0x6ee57a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ee57c:{NFSU2_TR(0x6ee57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee580:{NFSU2_TR(0x6ee580);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ee588;}}
}
B6ee582:L6ee582:{c.instructions+=2;NFSU2_TR(0x6ee582);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ee584:{NFSU2_TR(0x6ee584);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee588:L6ee588:{c.instructions+=6;NFSU2_TR(0x6ee588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ee58c:{NFSU2_TR(0x6ee58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee58f:{NFSU2_TR(0x6ee58f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee590:{NFSU2_TR(0x6ee590);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee593:{NFSU2_TR(0x6ee593);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ee595:{NFSU2_TR(0x6ee595);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ee59e;}}
}
B6ee597:L6ee597:{c.instructions+=2;NFSU2_TR(0x6ee597);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee59a:{NFSU2_TR(0x6ee59a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee59e:L6ee59e:{c.instructions+=7;NFSU2_TR(0x6ee59e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ee5a2:{NFSU2_TR(0x6ee5a2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee5a6:{NFSU2_TR(0x6ee5a6);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee5a9:{NFSU2_TR(0x6ee5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee5ad:{NFSU2_TR(0x6ee5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee5b0:{NFSU2_TR(0x6ee5b0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ee5b2:{NFSU2_TR(0x6ee5b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee5d3;}}
}
B6ee5b4:L6ee5b4:{c.instructions+=9;NFSU2_TR(0x6ee5b4);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee5b7:{NFSU2_TR(0x6ee5b7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee5bd:{NFSU2_TR(0x6ee5bd);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee5c0:{NFSU2_TR(0x6ee5c0);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee5c3:{NFSU2_TR(0x6ee5c3);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee5c6:{NFSU2_TR(0x6ee5c6);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee5c9:{NFSU2_TR(0x6ee5c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee5cb:{NFSU2_TR(0x6ee5cb);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee5ce:{NFSU2_TR(0x6ee5ce);
{goto L6ee68c;}
}
B6ee5d3:L6ee5d3:{c.instructions+=3;NFSU2_TR(0x6ee5d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee5d6:{NFSU2_TR(0x6ee5d6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6ee5d8:{NFSU2_TR(0x6ee5d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee5df;}}
}
B6ee5da:L6ee5da:{c.instructions+=2;NFSU2_TR(0x6ee5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee5dd:{NFSU2_TR(0x6ee5dd);
{goto L6ee5ff;}
}
B6ee5df:L6ee5df:{c.instructions+=3;NFSU2_TR(0x6ee5df);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ee5e0:{NFSU2_TR(0x6ee5e0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6ee5e2:{NFSU2_TR(0x6ee5e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee5f9;}}
}
B6ee5e4:L6ee5e4:{c.instructions+=7;NFSU2_TR(0x6ee5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee5e7:{NFSU2_TR(0x6ee5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee5ea:{NFSU2_TR(0x6ee5ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee5ee:{NFSU2_TR(0x6ee5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee5f1:{NFSU2_TR(0x6ee5f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ee5f4:{NFSU2_TR(0x6ee5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee5f7:{NFSU2_TR(0x6ee5f7);
{goto L6ee610;}
}
B6ee5f9:L6ee5f9:{c.instructions+=2;NFSU2_TR(0x6ee5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee5fc:{NFSU2_TR(0x6ee5fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ee5ff:L6ee5ff:{c.instructions+=5;NFSU2_TR(0x6ee5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee602:{NFSU2_TR(0x6ee602);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee606:{NFSU2_TR(0x6ee606);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee609:{NFSU2_TR(0x6ee609);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6ee60d:{NFSU2_TR(0x6ee60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee610:L6ee610:{c.instructions+=8;NFSU2_TR(0x6ee610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee614:{NFSU2_TR(0x6ee614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee617:{NFSU2_TR(0x6ee617);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee61b:{NFSU2_TR(0x6ee61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee61e:{NFSU2_TR(0x6ee61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee621:{NFSU2_TR(0x6ee621);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ee624:{NFSU2_TR(0x6ee624);
__builtin_memmove((R+4),(R+24),4);
}
B6ee626:{NFSU2_TR(0x6ee626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee62bull));
{goto L6eef40;}
}
B6ee62b:L6ee62b:{c.instructions+=12;NFSU2_TR(0x6ee62b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ee631:{NFSU2_TR(0x6ee631);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee635:{NFSU2_TR(0x6ee635);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee638:{NFSU2_TR(0x6ee638);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee63b:{NFSU2_TR(0x6ee63b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee63f:{NFSU2_TR(0x6ee63f);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee642:{NFSU2_TR(0x6ee642);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee646:{NFSU2_TR(0x6ee646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee649:{NFSU2_TR(0x6ee649);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee64c:{NFSU2_TR(0x6ee64c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6ee650:{NFSU2_TR(0x6ee650);
__builtin_memmove((R+4),(R+24),4);
}
B6ee652:{NFSU2_TR(0x6ee652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee657ull));
{goto L6eef40;}
}
B6ee657:L6ee657:{c.instructions+=15;NFSU2_TR(0x6ee657);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ee65d:{NFSU2_TR(0x6ee65d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee661:{NFSU2_TR(0x6ee661);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee664:{NFSU2_TR(0x6ee664);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee667:{NFSU2_TR(0x6ee667);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee66b:{NFSU2_TR(0x6ee66b);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee66e:{NFSU2_TR(0x6ee66e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee672:{NFSU2_TR(0x6ee672);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee675:{NFSU2_TR(0x6ee675);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee67b:{NFSU2_TR(0x6ee67b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee67e:{NFSU2_TR(0x6ee67e);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee681:{NFSU2_TR(0x6ee681);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee684:{NFSU2_TR(0x6ee684);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee687:{NFSU2_TR(0x6ee687);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ee689:{NFSU2_TR(0x6ee689);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee68c:L6ee68c:{c.instructions+=11;NFSU2_TR(0x6ee68c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee690:{NFSU2_TR(0x6ee690);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee693:{NFSU2_TR(0x6ee693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee694:{NFSU2_TR(0x6ee694);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee697:{NFSU2_TR(0x6ee697);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee69a:{NFSU2_TR(0x6ee69a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ee69c:{NFSU2_TR(0x6ee69c);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee69f:{NFSU2_TR(0x6ee69f);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee6a2:{NFSU2_TR(0x6ee6a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ee6a4:{NFSU2_TR(0x6ee6a4);
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
B6ee6a7:{NFSU2_TR(0x6ee6a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee6b0:L6ee6b0:{c.instructions+=7;NFSU2_TR(0x6ee6b0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee6b4:{NFSU2_TR(0x6ee6b4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee6b8:{NFSU2_TR(0x6ee6b8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee6bc:{NFSU2_TR(0x6ee6bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee6c0:{NFSU2_TR(0x6ee6c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee6c2:{NFSU2_TR(0x6ee6c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee6c5:{NFSU2_TR(0x6ee6c5);
if(r1(R+514)){{goto L6ee6e2;}}
}
B6ee6c7:L6ee6c7:{c.instructions+=7;NFSU2_TR(0x6ee6c7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee6cb:{NFSU2_TR(0x6ee6cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee6cc:{NFSU2_TR(0x6ee6cc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee6d0:{NFSU2_TR(0x6ee6d0);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B6ee6d2:{NFSU2_TR(0x6ee6d2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee6d5:{NFSU2_TR(0x6ee6d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ee6d7:{NFSU2_TR(0x6ee6d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee6dcull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ee6dc:L6ee6dc:{c.instructions+=2;NFSU2_TR(0x6ee6dc);
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
B6ee6df:{NFSU2_TR(0x6ee6df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee6e2:L6ee6e2:{c.instructions+=5;NFSU2_TR(0x6ee6e2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee6e6:{NFSU2_TR(0x6ee6e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee6ea:{NFSU2_TR(0x6ee6ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee6ec:{NFSU2_TR(0x6ee6ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ee6ef:{NFSU2_TR(0x6ee6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee70d;}}
}
B6ee6f1:L6ee6f1:{c.instructions+=7;NFSU2_TR(0x6ee6f1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee6f5:{NFSU2_TR(0x6ee6f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee6f6:{NFSU2_TR(0x6ee6f6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee6fa:{NFSU2_TR(0x6ee6fa);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B6ee6fc:{NFSU2_TR(0x6ee6fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee6ff:{NFSU2_TR(0x6ee6ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ee701:{NFSU2_TR(0x6ee701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee706ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ee706:L6ee706:{c.instructions+=3;NFSU2_TR(0x6ee706);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ee709:{NFSU2_TR(0x6ee709);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee70a:{NFSU2_TR(0x6ee70a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee70d:L6ee70d:{c.instructions+=3;NFSU2_TR(0x6ee70d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ee70f:{NFSU2_TR(0x6ee70f);
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
B6ee711:{NFSU2_TR(0x6ee711);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee720:L6ee720:{c.instructions+=12;NFSU2_TR(0x6ee720);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee721:{NFSU2_TR(0x6ee721);
__builtin_memmove((R+20),(R+16),4);
}
B6ee723:{NFSU2_TR(0x6ee723);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6ee726:{NFSU2_TR(0x6ee726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6ee729:{NFSU2_TR(0x6ee729);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee72a:{NFSU2_TR(0x6ee72a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee72b:{NFSU2_TR(0x6ee72b);
__builtin_memmove((R+24),(R+4),4);
}
B6ee72d:{NFSU2_TR(0x6ee72d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ee730:{NFSU2_TR(0x6ee730);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ee732:{NFSU2_TR(0x6ee732);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee734:{NFSU2_TR(0x6ee734);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee735:{NFSU2_TR(0x6ee735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee75b;}}
}
B6ee737:L6ee737:{c.instructions+=12;NFSU2_TR(0x6ee737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee73e:{NFSU2_TR(0x6ee73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee741:{NFSU2_TR(0x6ee741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee744:{NFSU2_TR(0x6ee744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee747:{NFSU2_TR(0x6ee747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ee74e:{NFSU2_TR(0x6ee74e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ee752:{NFSU2_TR(0x6ee752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ee753:{NFSU2_TR(0x6ee753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee754:{NFSU2_TR(0x6ee754);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ee755:{NFSU2_TR(0x6ee755);
__builtin_memmove((R+16),(R+20),4);
}
B6ee757:{NFSU2_TR(0x6ee757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ee758:{NFSU2_TR(0x6ee758);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee75b:L6ee75b:{c.instructions+=3;NFSU2_TR(0x6ee75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ee75e:{NFSU2_TR(0x6ee75e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ee761:{NFSU2_TR(0x6ee761);
if(r1(R+518)){{goto L6ee816;}}
}
B6ee767:L6ee767:{c.instructions+=4;NFSU2_TR(0x6ee767);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee76b:{NFSU2_TR(0x6ee76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee76c:{NFSU2_TR(0x6ee76c);
__builtin_memmove((R+4),(R+24),4);
}
B6ee76e:{NFSU2_TR(0x6ee76e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee773ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee370u);}goto L6ee370;}
}
B6ee773:L6ee773:{c.instructions+=4;NFSU2_TR(0x6ee773);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee777:{NFSU2_TR(0x6ee777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee778:{NFSU2_TR(0x6ee778);
__builtin_memmove((R+4),(R+24),4);
}
B6ee77a:{NFSU2_TR(0x6ee77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee77full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee420u);}goto L6ee420;}
}
B6ee77f:L6ee77f:{c.instructions+=8;NFSU2_TR(0x6ee77f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ee783:{NFSU2_TR(0x6ee783);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee784:{NFSU2_TR(0x6ee784);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee788:{NFSU2_TR(0x6ee788);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee789:{NFSU2_TR(0x6ee789);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee78d:{NFSU2_TR(0x6ee78d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee78e:{NFSU2_TR(0x6ee78e);
__builtin_memmove((R+4),(R+24),4);
}
B6ee790:{NFSU2_TR(0x6ee790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee795ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee260u);}goto L6ee260;}
}
B6ee795:L6ee795:{c.instructions+=4;NFSU2_TR(0x6ee795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee798:{NFSU2_TR(0x6ee798);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ee799:{NFSU2_TR(0x6ee799);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee79b:{NFSU2_TR(0x6ee79b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee7ab;}}
}
B6ee79d:L6ee79d:{c.instructions+=3;NFSU2_TR(0x6ee79d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee7a1:{NFSU2_TR(0x6ee7a1);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee7a7:{NFSU2_TR(0x6ee7a7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee7ab:L6ee7ab:{c.instructions+=7;NFSU2_TR(0x6ee7ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ee7af:{NFSU2_TR(0x6ee7af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee7b0:{NFSU2_TR(0x6ee7b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee7b4:{NFSU2_TR(0x6ee7b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee7b5:{NFSU2_TR(0x6ee7b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ee7b8:{NFSU2_TR(0x6ee7b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee7b9:{NFSU2_TR(0x6ee7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee7beull));
TAIL_STATIC(0x6edf80u,6ed);
}
B6ee7be:L6ee7be:{c.instructions+=26;NFSU2_TR(0x6ee7be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee7c2:{NFSU2_TR(0x6ee7c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee7c6:{NFSU2_TR(0x6ee7c6);
__builtin_memmove((R+8),(R+28),4);
}
B6ee7c8:{NFSU2_TR(0x6ee7c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ee7ca:{NFSU2_TR(0x6ee7ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee7ce:{NFSU2_TR(0x6ee7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee7d1:{NFSU2_TR(0x6ee7d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee7d5:{NFSU2_TR(0x6ee7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee7d8:{NFSU2_TR(0x6ee7d8);
__builtin_memmove((R+0),gp(0x8ab588),4);
}
B6ee7dd:{NFSU2_TR(0x6ee7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee7e0:{NFSU2_TR(0x6ee7e0);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee7e3:{NFSU2_TR(0x6ee7e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ee7e6:{NFSU2_TR(0x6ee7e6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee7ea:{NFSU2_TR(0x6ee7ea);
__builtin_memmove((R+4),(R+0),4);
}
B6ee7ec:{NFSU2_TR(0x6ee7ec);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee7ef:{NFSU2_TR(0x6ee7ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ee7f0:{NFSU2_TR(0x6ee7f0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee7f4:{NFSU2_TR(0x6ee7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee7f7:{NFSU2_TR(0x6ee7f7);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee7fa:{NFSU2_TR(0x6ee7fa);
__builtin_memmove(gp(0x8ab588),(R+0),4);
}
B6ee7ff:{NFSU2_TR(0x6ee7ff);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee803:{NFSU2_TR(0x6ee803);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee805:{NFSU2_TR(0x6ee805);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ee808:{NFSU2_TR(0x6ee808);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee809:{NFSU2_TR(0x6ee809);
u8 U[4];
w4(U+0,u32(0x7c2018ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee80e:{NFSU2_TR(0x6ee80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee813ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6ee813:L6ee813:{c.instructions+=1;NFSU2_TR(0x6ee813);
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
B6ee816:L6ee816:{c.instructions+=6;NFSU2_TR(0x6ee816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ee817:{NFSU2_TR(0x6ee817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee818:{NFSU2_TR(0x6ee818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ee819:{NFSU2_TR(0x6ee819);
__builtin_memmove((R+16),(R+20),4);
}
B6ee81b:{NFSU2_TR(0x6ee81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ee81c:{NFSU2_TR(0x6ee81c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee820:L6ee820:{c.instructions+=9;NFSU2_TR(0x6ee820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee821:{NFSU2_TR(0x6ee821);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee825:{NFSU2_TR(0x6ee825);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee829:{NFSU2_TR(0x6ee829);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee82d:{NFSU2_TR(0x6ee82d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee831:{NFSU2_TR(0x6ee831);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee835:{NFSU2_TR(0x6ee835);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee837:{NFSU2_TR(0x6ee837);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee83a:{NFSU2_TR(0x6ee83a);
if(r1(R+514)){{goto L6ee870;}}
}
B6ee83c:L6ee83c:{c.instructions+=7;NFSU2_TR(0x6ee83c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee840:{NFSU2_TR(0x6ee840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee841:{NFSU2_TR(0x6ee841);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee845:{NFSU2_TR(0x6ee845);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ee849:{NFSU2_TR(0x6ee849);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee84d:{NFSU2_TR(0x6ee84d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee850:{NFSU2_TR(0x6ee850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee855ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ee855:L6ee855:{c.instructions+=8;NFSU2_TR(0x6ee855);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee859:{NFSU2_TR(0x6ee859);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ee85d:{NFSU2_TR(0x6ee85d);
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
B6ee860:{NFSU2_TR(0x6ee860);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee864:{NFSU2_TR(0x6ee864);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee868:{NFSU2_TR(0x6ee868);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee86c:{NFSU2_TR(0x6ee86c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee86d:{NFSU2_TR(0x6ee86d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee870:L6ee870:{c.instructions+=5;NFSU2_TR(0x6ee870);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee874:{NFSU2_TR(0x6ee874);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee878:{NFSU2_TR(0x6ee878);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee87a:{NFSU2_TR(0x6ee87a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee87d:{NFSU2_TR(0x6ee87d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee8b3;}}
}
B6ee87f:L6ee87f:{c.instructions+=7;NFSU2_TR(0x6ee87f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee883:{NFSU2_TR(0x6ee883);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee884:{NFSU2_TR(0x6ee884);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee888:{NFSU2_TR(0x6ee888);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ee88c:{NFSU2_TR(0x6ee88c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee890:{NFSU2_TR(0x6ee890);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee893:{NFSU2_TR(0x6ee893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee898ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ee898:L6ee898:{c.instructions+=8;NFSU2_TR(0x6ee898);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee89c:{NFSU2_TR(0x6ee89c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ee8a0:{NFSU2_TR(0x6ee8a0);
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
B6ee8a3:{NFSU2_TR(0x6ee8a3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee8a7:{NFSU2_TR(0x6ee8a7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ee8ab:{NFSU2_TR(0x6ee8ab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee8af:{NFSU2_TR(0x6ee8af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee8b0:{NFSU2_TR(0x6ee8b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee8b3:L6ee8b3:{c.instructions+=3;NFSU2_TR(0x6ee8b3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee8b7:{NFSU2_TR(0x6ee8b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee8b8:{NFSU2_TR(0x6ee8b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee8c0:L6ee8c0:{c.instructions+=10;NFSU2_TR(0x6ee8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee8c4:{NFSU2_TR(0x6ee8c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ee8c7:{NFSU2_TR(0x6ee8c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8c8:{NFSU2_TR(0x6ee8c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8c9:{NFSU2_TR(0x6ee8c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8ca:{NFSU2_TR(0x6ee8ca);
__builtin_memmove((R+24),(R+4),4);
}
B6ee8cc:{NFSU2_TR(0x6ee8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ee8cf:{NFSU2_TR(0x6ee8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee8d2:{NFSU2_TR(0x6ee8d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ee8d4:{NFSU2_TR(0x6ee8d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee8dd;}}
}
B6ee8d6:L6ee8d6:{c.instructions+=2;NFSU2_TR(0x6ee8d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8d8:{NFSU2_TR(0x6ee8d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee8ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee530u);}goto L6ee530;}
}
B6ee8dd:L6ee8dd:{c.instructions+=12;NFSU2_TR(0x6ee8dd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee8e1:{NFSU2_TR(0x6ee8e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8e2:{NFSU2_TR(0x6ee8e2);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ee8e5:{NFSU2_TR(0x6ee8e5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee8e9:{NFSU2_TR(0x6ee8e9);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee8ef:{NFSU2_TR(0x6ee8ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee8f3:{NFSU2_TR(0x6ee8f3);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ee8f6:{NFSU2_TR(0x6ee8f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee8f9:{NFSU2_TR(0x6ee8f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8fb:{NFSU2_TR(0x6ee8fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee8fc:{NFSU2_TR(0x6ee8fc);
__builtin_memmove((R+4),(R+24),4);
}
B6ee8fe:{NFSU2_TR(0x6ee8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee903ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee6b0u);}goto L6ee6b0;}
}
B6ee903:L6ee903:{c.instructions+=18;NFSU2_TR(0x6ee903);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee906:{NFSU2_TR(0x6ee906);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee909:{NFSU2_TR(0x6ee909);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee90a:{NFSU2_TR(0x6ee90a);
__builtin_memmove((R+4),(R+24),4);
}
B6ee90c:{NFSU2_TR(0x6ee90c);
__builtin_memmove((R+20),(R+0),4);
}
B6ee90e:{NFSU2_TR(0x6ee90e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee912:{NFSU2_TR(0x6ee912);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee916:{NFSU2_TR(0x6ee916);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee91a:{NFSU2_TR(0x6ee91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee91e:{NFSU2_TR(0x6ee91e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee921:{NFSU2_TR(0x6ee921);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ee924:{NFSU2_TR(0x6ee924);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee928:{NFSU2_TR(0x6ee928);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee92b:{NFSU2_TR(0x6ee92b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ee92d:{NFSU2_TR(0x6ee92d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee930:{NFSU2_TR(0x6ee930);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee932:{NFSU2_TR(0x6ee932);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee933:{NFSU2_TR(0x6ee933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee938ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee820u);}goto L6ee820;}
}
B6ee938:L6ee938:{c.instructions+=11;NFSU2_TR(0x6ee938);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee93b:{NFSU2_TR(0x6ee93b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee93f:{NFSU2_TR(0x6ee93f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee940:{NFSU2_TR(0x6ee940);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee944:{NFSU2_TR(0x6ee944);
__builtin_memmove((R+4),(R+24),4);
}
B6ee946:{NFSU2_TR(0x6ee946);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee949:{NFSU2_TR(0x6ee949);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ee94b:{NFSU2_TR(0x6ee94b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee94e:{NFSU2_TR(0x6ee94e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee950:{NFSU2_TR(0x6ee950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee951:{NFSU2_TR(0x6ee951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee956ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee820u);}goto L6ee820;}
}
B6ee956:L6ee956:{c.instructions+=7;NFSU2_TR(0x6ee956);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ee959:{NFSU2_TR(0x6ee959);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ee95d:{NFSU2_TR(0x6ee95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee960:{NFSU2_TR(0x6ee960);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee962:{NFSU2_TR(0x6ee962);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ee966:{NFSU2_TR(0x6ee966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee967:{NFSU2_TR(0x6ee967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee96cull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6ee96c:L6ee96c:{c.instructions+=7;NFSU2_TR(0x6ee96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee96f:{NFSU2_TR(0x6ee96f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee973:{NFSU2_TR(0x6ee973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ee975:{NFSU2_TR(0x6ee975);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee977:{NFSU2_TR(0x6ee977);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee978:{NFSU2_TR(0x6ee978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee979:{NFSU2_TR(0x6ee979);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee97cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ee97c:L6ee97c:{c.instructions+=2;NFSU2_TR(0x6ee97c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ee97e:{NFSU2_TR(0x6ee97e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee989;}}
}
B6ee980:L6ee980:{c.instructions+=5;NFSU2_TR(0x6ee980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee981:{NFSU2_TR(0x6ee981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ee982:{NFSU2_TR(0x6ee982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ee983:{NFSU2_TR(0x6ee983);
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
B6ee986:{NFSU2_TR(0x6ee986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee989:L6ee989:{c.instructions+=6;NFSU2_TR(0x6ee989);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ee98c:{NFSU2_TR(0x6ee98c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee98d:{NFSU2_TR(0x6ee98d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ee993:{NFSU2_TR(0x6ee993);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ee995:{NFSU2_TR(0x6ee995);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ee998:{NFSU2_TR(0x6ee998);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ee9e7;}}
}
B6ee99a:L6ee99a:{c.instructions+=2;NFSU2_TR(0x6ee99a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee99c:{NFSU2_TR(0x6ee99c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee9a1ull));
TAIL_STATIC(0x6e3ec0u,6e3);
}
B6ee9a1:L6ee9a1:{c.instructions+=6;NFSU2_TR(0x6ee9a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ee9a3:{NFSU2_TR(0x6ee9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee9a6:{NFSU2_TR(0x6ee9a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ee9a9:{NFSU2_TR(0x6ee9a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9ab:{NFSU2_TR(0x6ee9ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9ac:{NFSU2_TR(0x6ee9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee9b1ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6ee9b1:L6ee9b1:{c.instructions+=7;NFSU2_TR(0x6ee9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee9b4:{NFSU2_TR(0x6ee9b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee9b8:{NFSU2_TR(0x6ee9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ee9ba:{NFSU2_TR(0x6ee9ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9bc:{NFSU2_TR(0x6ee9bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9bd:{NFSU2_TR(0x6ee9bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9be:{NFSU2_TR(0x6ee9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee9c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ee9c1:L6ee9c1:{c.instructions+=2;NFSU2_TR(0x6ee9c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ee9c3:{NFSU2_TR(0x6ee9c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ee9cf;}}
}
B6ee9c5:L6ee9c5:{c.instructions+=6;NFSU2_TR(0x6ee9c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ee9c6:{NFSU2_TR(0x6ee9c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ee9c7:{NFSU2_TR(0x6ee9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ee9c8:{NFSU2_TR(0x6ee9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ee9c9:{NFSU2_TR(0x6ee9c9);
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
B6ee9cc:{NFSU2_TR(0x6ee9cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ee9cf:L6ee9cf:{c.instructions+=10;NFSU2_TR(0x6ee9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ee9d2:{NFSU2_TR(0x6ee9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ee9d5:{NFSU2_TR(0x6ee9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ee9d8:{NFSU2_TR(0x6ee9d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9da:{NFSU2_TR(0x6ee9da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9db:{NFSU2_TR(0x6ee9db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9dc:{NFSU2_TR(0x6ee9dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9dd:{NFSU2_TR(0x6ee9dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9de:{NFSU2_TR(0x6ee9de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9df:{NFSU2_TR(0x6ee9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee9e4ull));
TAIL_STATIC(0x6e5a60u,6e5);
}
B6ee9e4:L6ee9e4:{c.instructions+=1;NFSU2_TR(0x6ee9e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6ee9e7:L6ee9e7:{c.instructions+=3;NFSU2_TR(0x6ee9e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9e8:{NFSU2_TR(0x6ee9e8);
__builtin_memmove((R+4),(R+24),4);
}
B6ee9ea:{NFSU2_TR(0x6ee9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ee9efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee720u);}goto L6ee720;}
}
B6ee9ef:L6ee9ef:{c.instructions+=7;NFSU2_TR(0x6ee9ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ee9f3:{NFSU2_TR(0x6ee9f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9f4:{NFSU2_TR(0x6ee9f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x48ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ee9f7:{NFSU2_TR(0x6ee9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ee9fa:{NFSU2_TR(0x6ee9fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9fb:{NFSU2_TR(0x6ee9fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ee9fc:{NFSU2_TR(0x6ee9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eea01ull));
TAIL_STATIC(0x6edf80u,6ed);
}
B6eea01:L6eea01:{c.instructions+=16;NFSU2_TR(0x6eea01);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eea05:{NFSU2_TR(0x6eea05);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eea09:{NFSU2_TR(0x6eea09);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eea0d:{NFSU2_TR(0x6eea0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6eea0f:{NFSU2_TR(0x6eea0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eea13:{NFSU2_TR(0x6eea13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eea16:{NFSU2_TR(0x6eea16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6eea19:{NFSU2_TR(0x6eea19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eea1c:{NFSU2_TR(0x6eea1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eea1f:{NFSU2_TR(0x6eea1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eea20:{NFSU2_TR(0x6eea20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eea21:{NFSU2_TR(0x6eea21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eea22:{NFSU2_TR(0x6eea22);
w1(R+0,u8(0x1ull));
}
B6eea24:{NFSU2_TR(0x6eea24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eea25:{NFSU2_TR(0x6eea25);
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
B6eea28:{NFSU2_TR(0x6eea28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eea30:L6eea30:{c.instructions+=13;NFSU2_TR(0x6eea30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea31:{NFSU2_TR(0x6eea31);
__builtin_memmove((R+20),(R+16),4);
}
B6eea33:{NFSU2_TR(0x6eea33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6eea36:{NFSU2_TR(0x6eea36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6eea39:{NFSU2_TR(0x6eea39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eea3c:{NFSU2_TR(0x6eea3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea3d:{NFSU2_TR(0x6eea3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea3e:{NFSU2_TR(0x6eea3e);
__builtin_memmove((R+24),(R+4),4);
}
B6eea40:{NFSU2_TR(0x6eea40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eea43:{NFSU2_TR(0x6eea43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eea46:{NFSU2_TR(0x6eea46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eea48:{NFSU2_TR(0x6eea48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea49:{NFSU2_TR(0x6eea49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eea52;}}
}
B6eea4b:L6eea4b:{c.instructions+=2;NFSU2_TR(0x6eea4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea4d:{NFSU2_TR(0x6eea4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eea52ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee530u);}goto L6ee530;}
}
B6eea52:L6eea52:{c.instructions+=12;NFSU2_TR(0x6eea52);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eea55:{NFSU2_TR(0x6eea55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea56:{NFSU2_TR(0x6eea56);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eea59:{NFSU2_TR(0x6eea59);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eea5c:{NFSU2_TR(0x6eea5c);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eea62:{NFSU2_TR(0x6eea62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eea65:{NFSU2_TR(0x6eea65);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6eea68:{NFSU2_TR(0x6eea68);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eea6b:{NFSU2_TR(0x6eea6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea6d:{NFSU2_TR(0x6eea6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea6e:{NFSU2_TR(0x6eea6e);
__builtin_memmove((R+4),(R+24),4);
}
B6eea70:{NFSU2_TR(0x6eea70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eea75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee6b0u);}goto L6ee6b0;}
}
B6eea75:L6eea75:{c.instructions+=11;NFSU2_TR(0x6eea75);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eea7b:{NFSU2_TR(0x6eea7b);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6eea7e:{NFSU2_TR(0x6eea7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6eea81:{NFSU2_TR(0x6eea81);
__builtin_memmove((R+28),(R+0),4);
}
B6eea83:{NFSU2_TR(0x6eea83);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eea87:{NFSU2_TR(0x6eea87);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eea8a:{NFSU2_TR(0x6eea8a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eea8e:{NFSU2_TR(0x6eea8e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eea91:{NFSU2_TR(0x6eea91);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eea94:{NFSU2_TR(0x6eea94);
u8 U[4];
w4(U+0,u32(0x7c208cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eea99:{NFSU2_TR(0x6eea99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eea9eull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6eea9e:L6eea9e:{c.instructions+=7;NFSU2_TR(0x6eea9e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeaa1:{NFSU2_TR(0x6eeaa1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6eeaa4:{NFSU2_TR(0x6eeaa4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eeaa8:{NFSU2_TR(0x6eeaa8);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeaab:{NFSU2_TR(0x6eeaab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eeaae:{NFSU2_TR(0x6eeaae);
u8 U[4];
w4(U+0,u32(0x7c2070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeab3:{NFSU2_TR(0x6eeab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeab8ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6eeab8:L6eeab8:{c.instructions+=7;NFSU2_TR(0x6eeab8);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeabb:{NFSU2_TR(0x6eeabb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eeabe:{NFSU2_TR(0x6eeabe);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eeac2:{NFSU2_TR(0x6eeac2);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeac5:{NFSU2_TR(0x6eeac5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eeac8:{NFSU2_TR(0x6eeac8);
u8 U[4];
w4(U+0,u32(0x7c2058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeacd:{NFSU2_TR(0x6eeacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eead2ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6eead2:L6eead2:{c.instructions+=14;NFSU2_TR(0x6eead2);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eead5:{NFSU2_TR(0x6eead5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eead8:{NFSU2_TR(0x6eead8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eeadb:{NFSU2_TR(0x6eeadb);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eeade:{NFSU2_TR(0x6eeade);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eeae2:{NFSU2_TR(0x6eeae2);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeae5:{NFSU2_TR(0x6eeae5);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eeae8:{NFSU2_TR(0x6eeae8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eeaeb:{NFSU2_TR(0x6eeaeb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6eeaef:{NFSU2_TR(0x6eeaef);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eeaf3:{NFSU2_TR(0x6eeaf3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeaf7:{NFSU2_TR(0x6eeaf7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6eeafa:{NFSU2_TR(0x6eeafa);
u8 U[4];
w4(U+0,u32(0x7c2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeaff:{NFSU2_TR(0x6eeaff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeb04ull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6eeb04:L6eeb04:{c.instructions+=9;NFSU2_TR(0x6eeb04);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeb07:{NFSU2_TR(0x6eeb07);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eeb0b:{NFSU2_TR(0x6eeb0b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6eeb0d:{NFSU2_TR(0x6eeb0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6eeb10:{NFSU2_TR(0x6eeb10);
__builtin_memmove((R+4),(R+24),4);
}
B6eeb12:{NFSU2_TR(0x6eeb12);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eeb15:{NFSU2_TR(0x6eeb15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb17:{NFSU2_TR(0x6eeb17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb18:{NFSU2_TR(0x6eeb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeb1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee820u);}goto L6ee820;}
}
B6eeb1d:L6eeb1d:{c.instructions+=11;NFSU2_TR(0x6eeb1d);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eeb20:{NFSU2_TR(0x6eeb20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eeb24:{NFSU2_TR(0x6eeb24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb25:{NFSU2_TR(0x6eeb25);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eeb29:{NFSU2_TR(0x6eeb29);
__builtin_memmove((R+4),(R+24),4);
}
B6eeb2b:{NFSU2_TR(0x6eeb2b);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeb2e:{NFSU2_TR(0x6eeb2e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6eeb30:{NFSU2_TR(0x6eeb30);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eeb33:{NFSU2_TR(0x6eeb33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb35:{NFSU2_TR(0x6eeb35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb36:{NFSU2_TR(0x6eeb36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeb3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee820u);}goto L6ee820;}
}
B6eeb3b:L6eeb3b:{c.instructions+=10;NFSU2_TR(0x6eeb3b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eeb3e:{NFSU2_TR(0x6eeb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6eeb41:{NFSU2_TR(0x6eeb41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eeb45:{NFSU2_TR(0x6eeb45);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eeb49:{NFSU2_TR(0x6eeb49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb4a:{NFSU2_TR(0x6eeb4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eeb4e:{NFSU2_TR(0x6eeb4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb4f:{NFSU2_TR(0x6eeb4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb50:{NFSU2_TR(0x6eeb50);
__builtin_memmove((R+4),(R+24),4);
}
B6eeb52:{NFSU2_TR(0x6eeb52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeb57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee140u);}goto L6ee140;}
}
B6eeb57:L6eeb57:{c.instructions+=2;NFSU2_TR(0x6eeb57);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eeb59:{NFSU2_TR(0x6eeb59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eeb64;}}
}
B6eeb5b:L6eeb5b:{c.instructions+=6;NFSU2_TR(0x6eeb5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eeb5c:{NFSU2_TR(0x6eeb5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eeb5d:{NFSU2_TR(0x6eeb5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eeb5e:{NFSU2_TR(0x6eeb5e);
__builtin_memmove((R+16),(R+20),4);
}
B6eeb60:{NFSU2_TR(0x6eeb60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eeb61:{NFSU2_TR(0x6eeb61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eeb64:L6eeb64:{c.instructions+=3;NFSU2_TR(0x6eeb64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb65:{NFSU2_TR(0x6eeb65);
__builtin_memmove((R+4),(R+24),4);
}
B6eeb67:{NFSU2_TR(0x6eeb67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeb6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee720u);}goto L6ee720;}
}
B6eeb6c:L6eeb6c:{c.instructions+=3;NFSU2_TR(0x6eeb6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeb6d:{NFSU2_TR(0x6eeb6d);
__builtin_memmove((R+4),(R+24),4);
}
B6eeb6f:{NFSU2_TR(0x6eeb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeb74ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee320u);}goto L6ee320;}
}
B6eeb74:L6eeb74:{c.instructions+=7;NFSU2_TR(0x6eeb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eeb75:{NFSU2_TR(0x6eeb75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eeb76:{NFSU2_TR(0x6eeb76);
w1(R+0,u8(0x1ull));
}
B6eeb78:{NFSU2_TR(0x6eeb78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eeb79:{NFSU2_TR(0x6eeb79);
__builtin_memmove((R+16),(R+20),4);
}
B6eeb7b:{NFSU2_TR(0x6eeb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eeb7c:{NFSU2_TR(0x6eeb7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eeb80:L6eeb80:{c.instructions+=23;NFSU2_TR(0x6eeb80);
__builtin_memmove((R+0),(R+4),4);
}
B6eeb82:{NFSU2_TR(0x6eeb82);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eeb84:{NFSU2_TR(0x6eeb84);
w4(R+8,u32(0xffffff9cull));
}
B6eeb89:{NFSU2_TR(0x6eeb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeb8c:{NFSU2_TR(0x6eeb8c);
u8 U[4];
w4(U+0,u32(0x7c20d0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6eeb92:{NFSU2_TR(0x6eeb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeb95:{NFSU2_TR(0x6eeb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeb98:{NFSU2_TR(0x6eeb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeb9b:{NFSU2_TR(0x6eeb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeb9e:{NFSU2_TR(0x6eeb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeba1:{NFSU2_TR(0x6eeba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeba4:{NFSU2_TR(0x6eeba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eebab:{NFSU2_TR(0x6eebab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebae:{NFSU2_TR(0x6eebae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebb1:{NFSU2_TR(0x6eebb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebb4:{NFSU2_TR(0x6eebb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6eebb7:{NFSU2_TR(0x6eebb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebba:{NFSU2_TR(0x6eebba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebbd:{NFSU2_TR(0x6eebbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebc0:{NFSU2_TR(0x6eebc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebc3:{NFSU2_TR(0x6eebc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eebc6:{NFSU2_TR(0x6eebc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eebcd:{NFSU2_TR(0x6eebcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eebd0:L6eebd0:{c.instructions+=6;NFSU2_TR(0x6eebd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eebd1:{NFSU2_TR(0x6eebd1);
__builtin_memmove((R+24),(R+4),4);
}
B6eebd3:{NFSU2_TR(0x6eebd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eebd6:{NFSU2_TR(0x6eebd6);
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
B6eebd8:{NFSU2_TR(0x6eebd8);
u8 U[4];
w4(U+0,u32(0x7c20d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6eebde:{NFSU2_TR(0x6eebde);
if(r1(R+518)){{goto L6eebec;}}
}
B6eebe0:L6eebe0:{c.instructions+=4;NFSU2_TR(0x6eebe0);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eebe6:{NFSU2_TR(0x6eebe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eebe8:{NFSU2_TR(0x6eebe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eebe9:{NFSU2_TR(0x6eebe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eebecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eebec:L6eebec:{c.instructions+=3;NFSU2_TR(0x6eebec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eebef:{NFSU2_TR(0x6eebef);
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
B6eebf1:{NFSU2_TR(0x6eebf1);
if(r1(R+518)){{goto L6eebff;}}
}
B6eebf3:L6eebf3:{c.instructions+=4;NFSU2_TR(0x6eebf3);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eebf9:{NFSU2_TR(0x6eebf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eebfb:{NFSU2_TR(0x6eebfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eebfc:{NFSU2_TR(0x6eebfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eebffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eebff:L6eebff:{c.instructions+=3;NFSU2_TR(0x6eebff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec02:{NFSU2_TR(0x6eec02);
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
B6eec04:{NFSU2_TR(0x6eec04);
if(r1(R+518)){{goto L6eec12;}}
}
B6eec06:L6eec06:{c.instructions+=4;NFSU2_TR(0x6eec06);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eec0c:{NFSU2_TR(0x6eec0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eec0e:{NFSU2_TR(0x6eec0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec0f:{NFSU2_TR(0x6eec0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eec12:L6eec12:{c.instructions+=3;NFSU2_TR(0x6eec12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec15:{NFSU2_TR(0x6eec15);
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
B6eec17:{NFSU2_TR(0x6eec17);
if(r1(R+518)){{goto L6eec25;}}
}
B6eec19:L6eec19:{c.instructions+=4;NFSU2_TR(0x6eec19);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eec1f:{NFSU2_TR(0x6eec1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eec21:{NFSU2_TR(0x6eec21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec22:{NFSU2_TR(0x6eec22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec25ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eec25:L6eec25:{c.instructions+=3;NFSU2_TR(0x6eec25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec28:{NFSU2_TR(0x6eec28);
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
B6eec2a:{NFSU2_TR(0x6eec2a);
if(r1(R+518)){{goto L6eec3d;}}
}
B6eec2c:L6eec2c:{c.instructions+=2;NFSU2_TR(0x6eec2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec2e:{NFSU2_TR(0x6eec2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec33ull));
TAIL_STATIC(0x6e3ec0u,6e3);
}
B6eec33:L6eec33:{c.instructions+=3;NFSU2_TR(0x6eec33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eec36:{NFSU2_TR(0x6eec36);
__builtin_memmove((R+4),(R+0),4);
}
B6eec38:{NFSU2_TR(0x6eec38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec3dull));
TAIL_STATIC(0x6e3e90u,6e3);
}
B6eec3d:L6eec3d:{c.instructions+=3;NFSU2_TR(0x6eec3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec40:{NFSU2_TR(0x6eec40);
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
B6eec42:{NFSU2_TR(0x6eec42);
if(r1(R+518)){{goto L6eec50;}}
}
B6eec44:L6eec44:{c.instructions+=4;NFSU2_TR(0x6eec44);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eec4a:{NFSU2_TR(0x6eec4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eec4c:{NFSU2_TR(0x6eec4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec4d:{NFSU2_TR(0x6eec4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec50ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eec50:L6eec50:{c.instructions+=3;NFSU2_TR(0x6eec50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec53:{NFSU2_TR(0x6eec53);
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
B6eec55:{NFSU2_TR(0x6eec55);
if(r1(R+518)){{goto L6eec63;}}
}
B6eec57:L6eec57:{c.instructions+=4;NFSU2_TR(0x6eec57);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eec5d:{NFSU2_TR(0x6eec5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eec5f:{NFSU2_TR(0x6eec5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec60:{NFSU2_TR(0x6eec60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec63ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eec63:L6eec63:{c.instructions+=3;NFSU2_TR(0x6eec63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec66:{NFSU2_TR(0x6eec66);
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
B6eec68:{NFSU2_TR(0x6eec68);
if(r1(R+518)){{goto L6eec76;}}
}
B6eec6a:L6eec6a:{c.instructions+=4;NFSU2_TR(0x6eec6a);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eec70:{NFSU2_TR(0x6eec70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eec72:{NFSU2_TR(0x6eec72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec73:{NFSU2_TR(0x6eec73);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eec76:L6eec76:{c.instructions+=3;NFSU2_TR(0x6eec76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eec79:{NFSU2_TR(0x6eec79);
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
B6eec7b:{NFSU2_TR(0x6eec7b);
if(r1(R+518)){{goto L6eec89;}}
}
B6eec7d:L6eec7d:{c.instructions+=4;NFSU2_TR(0x6eec7d);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6eec83:{NFSU2_TR(0x6eec83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eec85:{NFSU2_TR(0x6eec85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eec86:{NFSU2_TR(0x6eec86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eec89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eec89:L6eec89:{c.instructions+=3;NFSU2_TR(0x6eec89);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6eec8f:{NFSU2_TR(0x6eec8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eec90:{NFSU2_TR(0x6eec90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eeca0:L6eeca0:{c.instructions+=16;NFSU2_TR(0x6eeca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6eeca3:{NFSU2_TR(0x6eeca3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeca4:{NFSU2_TR(0x6eeca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eeca8:{NFSU2_TR(0x6eeca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eecaa:{NFSU2_TR(0x6eecaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eecad:{NFSU2_TR(0x6eecad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eecb1:{NFSU2_TR(0x6eecb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eecb5:{NFSU2_TR(0x6eecb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eecb9:{NFSU2_TR(0x6eecb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eecba:{NFSU2_TR(0x6eecba);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eecbe:{NFSU2_TR(0x6eecbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eecbf:{NFSU2_TR(0x6eecbf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x58ull))));
}
B6eecc2:{NFSU2_TR(0x6eecc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eecc3:{NFSU2_TR(0x6eecc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eeccb:{NFSU2_TR(0x6eeccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eecd3:{NFSU2_TR(0x6eecd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eecd8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee010u);}goto L6ee010;}
}
B6eecd8:L6eecd8:{c.instructions+=8;NFSU2_TR(0x6eecd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eecdc:{NFSU2_TR(0x6eecdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eece0:{NFSU2_TR(0x6eece0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6eece3:{NFSU2_TR(0x6eece3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6eece5:{NFSU2_TR(0x6eece5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eece8:{NFSU2_TR(0x6eece8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eece9:{NFSU2_TR(0x6eece9);
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
B6eecec:{NFSU2_TR(0x6eecec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eecf0:L6eecf0:{c.instructions+=10;NFSU2_TR(0x6eecf0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eecf3:{NFSU2_TR(0x6eecf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eecf4:{NFSU2_TR(0x6eecf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eecf8:{NFSU2_TR(0x6eecf8);
__builtin_memmove((R+24),(R+4),4);
}
B6eecfa:{NFSU2_TR(0x6eecfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eecfd:{NFSU2_TR(0x6eecfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eecff:{NFSU2_TR(0x6eecff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eed00:{NFSU2_TR(0x6eed00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eed04:{NFSU2_TR(0x6eed04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eed05:{NFSU2_TR(0x6eed05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eed08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eed08:L6eed08:{c.instructions+=2;NFSU2_TR(0x6eed08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eed0a:{NFSU2_TR(0x6eed0a);
if(r1(R+518)){{goto L6eed36;}}
}
B6eed0c:L6eed0c:{c.instructions+=5;NFSU2_TR(0x6eed0c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed0f:{NFSU2_TR(0x6eed0f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6eed15:{NFSU2_TR(0x6eed15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eed17:{NFSU2_TR(0x6eed17);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eed1a:{NFSU2_TR(0x6eed1a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eedde;}}
}
B6eed20:L6eed20:{c.instructions+=7;NFSU2_TR(0x6eed20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eed23:{NFSU2_TR(0x6eed23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eed25:{NFSU2_TR(0x6eed25);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eed29:{NFSU2_TR(0x6eed29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eed2a:{NFSU2_TR(0x6eed2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eed2e:{NFSU2_TR(0x6eed2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eed2f:{NFSU2_TR(0x6eed2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eed32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eed32:L6eed32:{c.instructions+=2;NFSU2_TR(0x6eed32);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eed34:{NFSU2_TR(0x6eed34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eed3f;}}
}
B6eed36:L6eed36:{c.instructions+=4;NFSU2_TR(0x6eed36);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6eed38:{NFSU2_TR(0x6eed38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eed39:{NFSU2_TR(0x6eed39);
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
B6eed3c:{NFSU2_TR(0x6eed3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eed3f:L6eed3f:{c.instructions+=29;NFSU2_TR(0x6eed3f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed45:{NFSU2_TR(0x6eed45);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eed49:{NFSU2_TR(0x6eed49);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eed4c:{NFSU2_TR(0x6eed4c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed50:{NFSU2_TR(0x6eed50);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eed53:{NFSU2_TR(0x6eed53);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed57:{NFSU2_TR(0x6eed57);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6eed59:{NFSU2_TR(0x6eed59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eed5b:{NFSU2_TR(0x6eed5b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eed5d:{NFSU2_TR(0x6eed5d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed61:{NFSU2_TR(0x6eed61);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eed64:{NFSU2_TR(0x6eed64);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed68:{NFSU2_TR(0x6eed68);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6eed6a:{NFSU2_TR(0x6eed6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eed6c:{NFSU2_TR(0x6eed6c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6eed6f:{NFSU2_TR(0x6eed6f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed71:{NFSU2_TR(0x6eed71);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6eed73:{NFSU2_TR(0x6eed73);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eed75:{NFSU2_TR(0x6eed75);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6eed77:{NFSU2_TR(0x6eed77);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6eed79:{NFSU2_TR(0x6eed79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eed7b:{NFSU2_TR(0x6eed7b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6eed7d:{NFSU2_TR(0x6eed7d);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6eed7f:{NFSU2_TR(0x6eed7f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6eed81:{NFSU2_TR(0x6eed81);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6eed85:{NFSU2_TR(0x6eed85);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6eed8b:{NFSU2_TR(0x6eed8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eed8d:{NFSU2_TR(0x6eed8d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eed90:{NFSU2_TR(0x6eed90);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eedf8;}}
}
B6eed92:L6eed92:{c.instructions+=27;NFSU2_TR(0x6eed92);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eed96:{NFSU2_TR(0x6eed96);
w1(R+0,u8(0x1ull));
}
B6eed98:{NFSU2_TR(0x6eed98);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eed9c:{NFSU2_TR(0x6eed9c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eeda0:{NFSU2_TR(0x6eeda0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eeda4:{NFSU2_TR(0x6eeda4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eeda6:{NFSU2_TR(0x6eeda6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6eeda8:{NFSU2_TR(0x6eeda8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6eedaa:{NFSU2_TR(0x6eedaa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eedae:{NFSU2_TR(0x6eedae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eedb2:{NFSU2_TR(0x6eedb2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eedb6:{NFSU2_TR(0x6eedb6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eedba:{NFSU2_TR(0x6eedba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eedbc:{NFSU2_TR(0x6eedbc);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6eedbe:{NFSU2_TR(0x6eedbe);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6eedc0:{NFSU2_TR(0x6eedc0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6eedc2:{NFSU2_TR(0x6eedc2);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eedc5:{NFSU2_TR(0x6eedc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eedc6:{NFSU2_TR(0x6eedc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eedc8:{NFSU2_TR(0x6eedc8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6eedcc:{NFSU2_TR(0x6eedcc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6eedce:{NFSU2_TR(0x6eedce);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eedd0:{NFSU2_TR(0x6eedd0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eedd2:{NFSU2_TR(0x6eedd2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eedd5:{NFSU2_TR(0x6eedd5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eedd8:{NFSU2_TR(0x6eedd8);
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
B6eeddb:{NFSU2_TR(0x6eeddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eedde:L6eedde:{c.instructions+=9;NFSU2_TR(0x6eedde);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eede2:{NFSU2_TR(0x6eede2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eede6:{NFSU2_TR(0x6eede6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eedea:{NFSU2_TR(0x6eedea);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eedec:{NFSU2_TR(0x6eedec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eedef:{NFSU2_TR(0x6eedef);
w1(R+0,u8(0x1ull));
}
B6eedf1:{NFSU2_TR(0x6eedf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eedf2:{NFSU2_TR(0x6eedf2);
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
B6eedf5:{NFSU2_TR(0x6eedf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eedf8:L6eedf8:{c.instructions+=5;NFSU2_TR(0x6eedf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6eedfa:{NFSU2_TR(0x6eedfa);
w1(R+0,u8(0x1ull));
}
B6eedfc:{NFSU2_TR(0x6eedfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eedfd:{NFSU2_TR(0x6eedfd);
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
B6eee00:{NFSU2_TR(0x6eee00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eee10:L6eee10:{c.instructions+=6;NFSU2_TR(0x6eee10);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eee13:{NFSU2_TR(0x6eee13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee14:{NFSU2_TR(0x6eee14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee15:{NFSU2_TR(0x6eee15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee17:{NFSU2_TR(0x6eee17);
__builtin_memmove((R+24),(R+4),4);
}
B6eee19:{NFSU2_TR(0x6eee19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eee1eull));
TAIL_STATIC(0x6e3ec0u,6e3);
}
B6eee1e:L6eee1e:{c.instructions+=9;NFSU2_TR(0x6eee1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6eee20:{NFSU2_TR(0x6eee20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eee23:{NFSU2_TR(0x6eee23);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eee27:{NFSU2_TR(0x6eee27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eee29:{NFSU2_TR(0x6eee29);
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
B6eee2c:{NFSU2_TR(0x6eee2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee2e:{NFSU2_TR(0x6eee2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee2f:{NFSU2_TR(0x6eee2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee30:{NFSU2_TR(0x6eee30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eee33ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eee33:L6eee33:{c.instructions+=2;NFSU2_TR(0x6eee33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eee35:{NFSU2_TR(0x6eee35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eee3f;}}
}
B6eee37:L6eee37:{c.instructions+=4;NFSU2_TR(0x6eee37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eee38:{NFSU2_TR(0x6eee38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eee39:{NFSU2_TR(0x6eee39);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eee3c:{NFSU2_TR(0x6eee3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eee3f:L6eee3f:{c.instructions+=16;NFSU2_TR(0x6eee3f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eee42:{NFSU2_TR(0x6eee42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee43:{NFSU2_TR(0x6eee43);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6eee49:{NFSU2_TR(0x6eee49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eee4c:{NFSU2_TR(0x6eee4c);
__builtin_memmove((R+0),(R+12),4);
}
B6eee4e:{NFSU2_TR(0x6eee4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6eee50:{NFSU2_TR(0x6eee50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eee53:{NFSU2_TR(0x6eee53);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eee57:{NFSU2_TR(0x6eee57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eee5a:{NFSU2_TR(0x6eee5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eee5e:{NFSU2_TR(0x6eee5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eee61:{NFSU2_TR(0x6eee61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eee63:{NFSU2_TR(0x6eee63);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eee67:{NFSU2_TR(0x6eee67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eee6a:{NFSU2_TR(0x6eee6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eee6e:{NFSU2_TR(0x6eee6e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eeed0;}}
}
B6eee70:L6eee70:{c.instructions+=4;NFSU2_TR(0x6eee70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eee73:{NFSU2_TR(0x6eee73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee75:{NFSU2_TR(0x6eee75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee76:{NFSU2_TR(0x6eee76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eee7bull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6eee7b:L6eee7b:{c.instructions+=7;NFSU2_TR(0x6eee7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eee7e:{NFSU2_TR(0x6eee7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eee82:{NFSU2_TR(0x6eee82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eee84:{NFSU2_TR(0x6eee84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee86:{NFSU2_TR(0x6eee86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee87:{NFSU2_TR(0x6eee87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eee88:{NFSU2_TR(0x6eee88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eee8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eee8b:L6eee8b:{c.instructions+=2;NFSU2_TR(0x6eee8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eee8d:{NFSU2_TR(0x6eee8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eee98;}}
}
B6eee8f:L6eee8f:{c.instructions+=5;NFSU2_TR(0x6eee8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eee90:{NFSU2_TR(0x6eee90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eee91:{NFSU2_TR(0x6eee91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eee92:{NFSU2_TR(0x6eee92);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eee95:{NFSU2_TR(0x6eee95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eee98:L6eee98:{c.instructions+=17;NFSU2_TR(0x6eee98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eee9b:{NFSU2_TR(0x6eee9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eee9d:{NFSU2_TR(0x6eee9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eeea0:{NFSU2_TR(0x6eeea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeea4:{NFSU2_TR(0x6eeea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeea8:{NFSU2_TR(0x6eeea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eeeab:{NFSU2_TR(0x6eeeab);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eeeaf:{NFSU2_TR(0x6eeeaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeeb0:{NFSU2_TR(0x6eeeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eeeb3:{NFSU2_TR(0x6eeeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeeb7:{NFSU2_TR(0x6eeeb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eeebb:{NFSU2_TR(0x6eeebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeebf:{NFSU2_TR(0x6eeebf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeec0:{NFSU2_TR(0x6eeec0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eeec4:{NFSU2_TR(0x6eeec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeec5:{NFSU2_TR(0x6eeec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeec6:{NFSU2_TR(0x6eeec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eeecbull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6eeecb:L6eeecb:{c.instructions+=2;NFSU2_TR(0x6eeecb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6eeece:{NFSU2_TR(0x6eeece);
{goto L6eeeeb;}
}
B6eeed0:L6eeed0:{c.instructions+=8;NFSU2_TR(0x6eeed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eeed2:{NFSU2_TR(0x6eeed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eeed5:{NFSU2_TR(0x6eeed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eeed8:{NFSU2_TR(0x6eeed8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeedc:{NFSU2_TR(0x6eeedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eeedf:{NFSU2_TR(0x6eeedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeee3:{NFSU2_TR(0x6eeee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeee7:{NFSU2_TR(0x6eeee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeeeb:L6eeeeb:{c.instructions+=11;NFSU2_TR(0x6eeeeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eeeef:{NFSU2_TR(0x6eeeef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeef0:{NFSU2_TR(0x6eeef0);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eeef4:{NFSU2_TR(0x6eeef4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeef5:{NFSU2_TR(0x6eeef5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eeef9:{NFSU2_TR(0x6eeef9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeefa:{NFSU2_TR(0x6eeefa);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eef02:{NFSU2_TR(0x6eef02);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eef0a:{NFSU2_TR(0x6eef0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eef12:{NFSU2_TR(0x6eef12);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eef1a:{NFSU2_TR(0x6eef1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eef1full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ee010u);}goto L6ee010;}
}
B6eef1f:L6eef1f:{c.instructions+=12;NFSU2_TR(0x6eef1f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eef23:{NFSU2_TR(0x6eef23);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eef27:{NFSU2_TR(0x6eef27);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eef2b:{NFSU2_TR(0x6eef2b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eef2d:{NFSU2_TR(0x6eef2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6eef30:{NFSU2_TR(0x6eef30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eef31:{NFSU2_TR(0x6eef31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eef32:{NFSU2_TR(0x6eef32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eef35:{NFSU2_TR(0x6eef35);
w1(R+0,u8(0x1ull));
}
B6eef37:{NFSU2_TR(0x6eef37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eef38:{NFSU2_TR(0x6eef38);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eef3b:{NFSU2_TR(0x6eef3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eef40:L6eef40:{c.instructions+=2;NFSU2_TR(0x6eef40);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eef43:{NFSU2_TR(0x6eef43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eef50:L6eef50:{c.instructions+=6;NFSU2_TR(0x6eef50);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eef53:{NFSU2_TR(0x6eef53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef54:{NFSU2_TR(0x6eef54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef55:{NFSU2_TR(0x6eef55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef57:{NFSU2_TR(0x6eef57);
__builtin_memmove((R+24),(R+4),4);
}
B6eef59:{NFSU2_TR(0x6eef59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eef5eull));
TAIL_STATIC(0x6e3ec0u,6e3);
}
B6eef5e:L6eef5e:{c.instructions+=9;NFSU2_TR(0x6eef5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6eef60:{NFSU2_TR(0x6eef60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eef63:{NFSU2_TR(0x6eef63);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eef67:{NFSU2_TR(0x6eef67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6eef69:{NFSU2_TR(0x6eef69);
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
B6eef6c:{NFSU2_TR(0x6eef6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef6e:{NFSU2_TR(0x6eef6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef6f:{NFSU2_TR(0x6eef6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef70:{NFSU2_TR(0x6eef70);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eef73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eef73:L6eef73:{c.instructions+=2;NFSU2_TR(0x6eef73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eef75:{NFSU2_TR(0x6eef75);
if(r1(R+518)){TAIL_STATIC(0x6ef021u,6ef);}
}
B6eef7b:L6eef7b:{c.instructions+=17;NFSU2_TR(0x6eef7b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eef7e:{NFSU2_TR(0x6eef7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef7f:{NFSU2_TR(0x6eef7f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6eef85:{NFSU2_TR(0x6eef85);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eef88:{NFSU2_TR(0x6eef88);
__builtin_memmove((R+0),(R+12),4);
}
B6eef8a:{NFSU2_TR(0x6eef8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6eef8c:{NFSU2_TR(0x6eef8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eef8f:{NFSU2_TR(0x6eef8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eef90:{NFSU2_TR(0x6eef90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6eef93:{NFSU2_TR(0x6eef93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eef96:{NFSU2_TR(0x6eef96);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eef9a:{NFSU2_TR(0x6eef9a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eef9c:{NFSU2_TR(0x6eef9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eefa0:{NFSU2_TR(0x6eefa0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eefa3:{NFSU2_TR(0x6eefa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eefa7:{NFSU2_TR(0x6eefa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eefab:{NFSU2_TR(0x6eefab);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x6ef00cu,6ef);}
}
B6eefad:L6eefad:{c.instructions+=4;NFSU2_TR(0x6eefad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eefb0:{NFSU2_TR(0x6eefb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eefb2:{NFSU2_TR(0x6eefb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eefb3:{NFSU2_TR(0x6eefb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eefb8ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6eefb8:L6eefb8:{c.instructions+=7;NFSU2_TR(0x6eefb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eefbb:{NFSU2_TR(0x6eefbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eefbf:{NFSU2_TR(0x6eefbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6eefc1:{NFSU2_TR(0x6eefc1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eefc3:{NFSU2_TR(0x6eefc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eefc4:{NFSU2_TR(0x6eefc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eefc5:{NFSU2_TR(0x6eefc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eefc8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6eefc8:L6eefc8:{c.instructions+=2;NFSU2_TR(0x6eefc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eefca:{NFSU2_TR(0x6eefca);
if(r1(R+518)){TAIL_STATIC(0x6ef01fu,6ef);}
}
B6eefcc:L6eefcc:{c.instructions+=17;NFSU2_TR(0x6eefcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eefcf:{NFSU2_TR(0x6eefcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6eefd1:{NFSU2_TR(0x6eefd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eefd4:{NFSU2_TR(0x6eefd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eefd8:{NFSU2_TR(0x6eefd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eefdc:{NFSU2_TR(0x6eefdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eefe0:{NFSU2_TR(0x6eefe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eefe3:{NFSU2_TR(0x6eefe3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eefe4:{NFSU2_TR(0x6eefe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eefe7:{NFSU2_TR(0x6eefe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eefeb:{NFSU2_TR(0x6eefeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eefef:{NFSU2_TR(0x6eefef);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eeff3:{NFSU2_TR(0x6eeff3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeff4:{NFSU2_TR(0x6eeff4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eeff8:{NFSU2_TR(0x6eeff8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeff9:{NFSU2_TR(0x6eeff9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eeffa:{NFSU2_TR(0x6eeffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eefffull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6eefff:L6eefff:{c.instructions+=1;NFSU2_TR(0x6eefff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
TAIL_STATIC(0x6ef002u,6ef);
}
XIT:NFSU2_TR_EXIT(0x6ee,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
