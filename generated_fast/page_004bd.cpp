#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4bc(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4bd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4bd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4bd(u8* __restrict R,Cpu& c);
u32 page_4bd(Cpu& c){return body_4bd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4bd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4bd005:goto L4bd005;
case 0x4bd007:c.instructions+=3;goto B4bd007;
case 0x4bd008:c.instructions+=2;goto B4bd008;
case 0x4bd009:c.instructions+=1;goto B4bd009;
case 0x4bd00b:goto L4bd00b;
case 0x4bd011:c.instructions+=3;goto B4bd011;
case 0x4bd014:c.instructions+=2;goto B4bd014;
case 0x4bd015:c.instructions+=1;goto B4bd015;
case 0x4bd01a:goto L4bd01a;
case 0x4bd01c:c.instructions+=1;goto B4bd01c;
case 0x4bd021:goto L4bd021;
case 0x4bd022:c.instructions+=3;goto B4bd022;
case 0x4bd029:c.instructions+=2;goto B4bd029;
case 0x4bd02a:c.instructions+=1;goto B4bd02a;
case 0x4bd02f:goto L4bd02f;
case 0x4bd031:c.instructions+=2;goto B4bd031;
case 0x4bd036:c.instructions+=1;goto B4bd036;
case 0x4bd03a:goto L4bd03a;
case 0x4bd03c:goto L4bd03c;
case 0x4bd040:c.instructions+=3;goto B4bd040;
case 0x4bd043:c.instructions+=2;goto B4bd043;
case 0x4bd045:c.instructions+=1;goto B4bd045;
case 0x4bd047:goto L4bd047;
case 0x4bd04b:c.instructions+=2;goto B4bd04b;
case 0x4bd04d:c.instructions+=1;goto B4bd04d;
case 0x4bd04f:goto L4bd04f;
case 0x4bd054:goto L4bd054;
case 0x4bd05a:c.instructions+=4;goto B4bd05a;
case 0x4bd05e:c.instructions+=3;goto B4bd05e;
case 0x4bd05f:c.instructions+=2;goto B4bd05f;
case 0x4bd060:c.instructions+=1;goto B4bd060;
case 0x4bd065:goto L4bd065;
case 0x4bd068:c.instructions+=2;goto B4bd068;
case 0x4bd06a:c.instructions+=1;goto B4bd06a;
case 0x4bd06c:goto L4bd06c;
case 0x4bd06f:c.instructions+=3;goto B4bd06f;
case 0x4bd070:c.instructions+=2;goto B4bd070;
case 0x4bd071:c.instructions+=1;goto B4bd071;
case 0x4bd076:goto L4bd076;
case 0x4bd079:goto L4bd079;
case 0x4bd07b:c.instructions+=1;goto B4bd07b;
case 0x4bd080:goto L4bd080;
case 0x4bd081:c.instructions+=5;goto B4bd081;
case 0x4bd082:c.instructions+=4;goto B4bd082;
case 0x4bd083:c.instructions+=3;goto B4bd083;
case 0x4bd085:c.instructions+=2;goto B4bd085;
case 0x4bd086:c.instructions+=1;goto B4bd086;
case 0x4bd090:goto L4bd090;
case 0x4bd096:c.instructions+=7;goto B4bd096;
case 0x4bd097:c.instructions+=6;goto B4bd097;
case 0x4bd098:c.instructions+=5;goto B4bd098;
case 0x4bd09a:c.instructions+=4;goto B4bd09a;
case 0x4bd0a0:c.instructions+=3;goto B4bd0a0;
case 0x4bd0a1:c.instructions+=2;goto B4bd0a1;
case 0x4bd0a2:c.instructions+=1;goto B4bd0a2;
case 0x4bd0a7:goto L4bd0a7;
case 0x4bd0aa:c.instructions+=2;goto B4bd0aa;
case 0x4bd0ac:c.instructions+=1;goto B4bd0ac;
case 0x4bd0ae:goto L4bd0ae;
case 0x4bd0b1:c.instructions+=3;goto B4bd0b1;
case 0x4bd0b2:c.instructions+=2;goto B4bd0b2;
case 0x4bd0b7:c.instructions+=1;goto B4bd0b7;
case 0x4bd0bc:goto L4bd0bc;
case 0x4bd0bf:c.instructions+=5;goto B4bd0bf;
case 0x4bd0c1:c.instructions+=4;goto B4bd0c1;
case 0x4bd0c6:c.instructions+=3;goto B4bd0c6;
case 0x4bd0cb:c.instructions+=2;goto B4bd0cb;
case 0x4bd0cc:c.instructions+=1;goto B4bd0cc;
case 0x4bd0d1:goto L4bd0d1;
case 0x4bd0d4:c.instructions+=5;goto B4bd0d4;
case 0x4bd0d5:c.instructions+=4;goto B4bd0d5;
case 0x4bd0d6:c.instructions+=3;goto B4bd0d6;
case 0x4bd0d7:c.instructions+=2;goto B4bd0d7;
case 0x4bd0dd:c.instructions+=1;goto B4bd0dd;
case 0x4bd0de:goto L4bd0de;
case 0x4bd0e4:c.instructions+=2;goto B4bd0e4;
case 0x4bd0e5:c.instructions+=1;goto B4bd0e5;
case 0x4bd0ea:goto L4bd0ea;
case 0x4bd0ed:c.instructions+=2;goto B4bd0ed;
case 0x4bd0ef:c.instructions+=1;goto B4bd0ef;
case 0x4bd0f1:goto L4bd0f1;
case 0x4bd0f4:c.instructions+=3;goto B4bd0f4;
case 0x4bd0f5:c.instructions+=2;goto B4bd0f5;
case 0x4bd0fa:c.instructions+=1;goto B4bd0fa;
case 0x4bd0ff:goto L4bd0ff;
case 0x4bd102:c.instructions+=5;goto B4bd102;
case 0x4bd104:c.instructions+=4;goto B4bd104;
case 0x4bd109:c.instructions+=3;goto B4bd109;
case 0x4bd10e:c.instructions+=2;goto B4bd10e;
case 0x4bd10f:c.instructions+=1;goto B4bd10f;
case 0x4bd114:goto L4bd114;
case 0x4bd117:c.instructions+=5;goto B4bd117;
case 0x4bd118:c.instructions+=4;goto B4bd118;
case 0x4bd119:c.instructions+=3;goto B4bd119;
case 0x4bd11a:c.instructions+=2;goto B4bd11a;
case 0x4bd120:c.instructions+=1;goto B4bd120;
case 0x4bd121:goto L4bd121;
case 0x4bd127:c.instructions+=2;goto B4bd127;
case 0x4bd128:c.instructions+=1;goto B4bd128;
case 0x4bd12d:goto L4bd12d;
case 0x4bd130:c.instructions+=2;goto B4bd130;
case 0x4bd132:c.instructions+=1;goto B4bd132;
case 0x4bd134:goto L4bd134;
case 0x4bd137:c.instructions+=3;goto B4bd137;
case 0x4bd138:c.instructions+=2;goto B4bd138;
case 0x4bd13d:c.instructions+=1;goto B4bd13d;
case 0x4bd142:goto L4bd142;
case 0x4bd145:c.instructions+=5;goto B4bd145;
case 0x4bd147:c.instructions+=4;goto B4bd147;
case 0x4bd14c:c.instructions+=3;goto B4bd14c;
case 0x4bd151:c.instructions+=2;goto B4bd151;
case 0x4bd152:c.instructions+=1;goto B4bd152;
case 0x4bd157:goto L4bd157;
case 0x4bd15a:c.instructions+=5;goto B4bd15a;
case 0x4bd15b:c.instructions+=4;goto B4bd15b;
case 0x4bd15c:c.instructions+=3;goto B4bd15c;
case 0x4bd15d:c.instructions+=2;goto B4bd15d;
case 0x4bd163:c.instructions+=1;goto B4bd163;
case 0x4bd164:goto L4bd164;
case 0x4bd16a:c.instructions+=2;goto B4bd16a;
case 0x4bd16b:c.instructions+=1;goto B4bd16b;
case 0x4bd170:goto L4bd170;
case 0x4bd173:c.instructions+=2;goto B4bd173;
case 0x4bd175:c.instructions+=1;goto B4bd175;
case 0x4bd177:goto L4bd177;
case 0x4bd17a:c.instructions+=3;goto B4bd17a;
case 0x4bd17b:c.instructions+=2;goto B4bd17b;
case 0x4bd180:c.instructions+=1;goto B4bd180;
case 0x4bd185:goto L4bd185;
case 0x4bd188:c.instructions+=5;goto B4bd188;
case 0x4bd18a:c.instructions+=4;goto B4bd18a;
case 0x4bd18f:c.instructions+=3;goto B4bd18f;
case 0x4bd194:c.instructions+=2;goto B4bd194;
case 0x4bd195:c.instructions+=1;goto B4bd195;
case 0x4bd19a:goto L4bd19a;
case 0x4bd19d:c.instructions+=5;goto B4bd19d;
case 0x4bd19e:c.instructions+=4;goto B4bd19e;
case 0x4bd19f:c.instructions+=3;goto B4bd19f;
case 0x4bd1a0:c.instructions+=2;goto B4bd1a0;
case 0x4bd1a6:c.instructions+=1;goto B4bd1a6;
case 0x4bd1a7:goto L4bd1a7;
case 0x4bd1ad:c.instructions+=2;goto B4bd1ad;
case 0x4bd1ae:c.instructions+=1;goto B4bd1ae;
case 0x4bd1b3:goto L4bd1b3;
case 0x4bd1b6:c.instructions+=2;goto B4bd1b6;
case 0x4bd1b8:c.instructions+=1;goto B4bd1b8;
case 0x4bd1ba:goto L4bd1ba;
case 0x4bd1bd:c.instructions+=3;goto B4bd1bd;
case 0x4bd1be:c.instructions+=2;goto B4bd1be;
case 0x4bd1c3:c.instructions+=1;goto B4bd1c3;
case 0x4bd1c8:goto L4bd1c8;
case 0x4bd1cb:c.instructions+=5;goto B4bd1cb;
case 0x4bd1cd:c.instructions+=4;goto B4bd1cd;
case 0x4bd1d2:c.instructions+=3;goto B4bd1d2;
case 0x4bd1d7:c.instructions+=2;goto B4bd1d7;
case 0x4bd1d8:c.instructions+=1;goto B4bd1d8;
case 0x4bd1dd:goto L4bd1dd;
case 0x4bd1e0:c.instructions+=5;goto B4bd1e0;
case 0x4bd1e1:c.instructions+=4;goto B4bd1e1;
case 0x4bd1e2:c.instructions+=3;goto B4bd1e2;
case 0x4bd1e3:c.instructions+=2;goto B4bd1e3;
case 0x4bd1e9:c.instructions+=1;goto B4bd1e9;
case 0x4bd1ea:goto L4bd1ea;
case 0x4bd1f0:c.instructions+=2;goto B4bd1f0;
case 0x4bd1f1:c.instructions+=1;goto B4bd1f1;
case 0x4bd1f6:goto L4bd1f6;
case 0x4bd1f9:c.instructions+=2;goto B4bd1f9;
case 0x4bd1fb:c.instructions+=1;goto B4bd1fb;
case 0x4bd1fd:goto L4bd1fd;
case 0x4bd200:c.instructions+=3;goto B4bd200;
case 0x4bd201:c.instructions+=2;goto B4bd201;
case 0x4bd206:c.instructions+=1;goto B4bd206;
case 0x4bd20b:goto L4bd20b;
case 0x4bd20e:c.instructions+=5;goto B4bd20e;
case 0x4bd210:c.instructions+=4;goto B4bd210;
case 0x4bd215:c.instructions+=3;goto B4bd215;
case 0x4bd21a:c.instructions+=2;goto B4bd21a;
case 0x4bd21b:c.instructions+=1;goto B4bd21b;
case 0x4bd220:goto L4bd220;
case 0x4bd223:c.instructions+=5;goto B4bd223;
case 0x4bd224:c.instructions+=4;goto B4bd224;
case 0x4bd225:c.instructions+=3;goto B4bd225;
case 0x4bd226:c.instructions+=2;goto B4bd226;
case 0x4bd22c:c.instructions+=1;goto B4bd22c;
case 0x4bd22d:goto L4bd22d;
case 0x4bd233:c.instructions+=2;goto B4bd233;
case 0x4bd234:c.instructions+=1;goto B4bd234;
case 0x4bd239:goto L4bd239;
case 0x4bd23c:c.instructions+=2;goto B4bd23c;
case 0x4bd23e:c.instructions+=1;goto B4bd23e;
case 0x4bd240:goto L4bd240;
case 0x4bd243:c.instructions+=3;goto B4bd243;
case 0x4bd244:c.instructions+=2;goto B4bd244;
case 0x4bd249:c.instructions+=1;goto B4bd249;
case 0x4bd24e:goto L4bd24e;
case 0x4bd251:c.instructions+=5;goto B4bd251;
case 0x4bd253:c.instructions+=4;goto B4bd253;
case 0x4bd258:c.instructions+=3;goto B4bd258;
case 0x4bd25d:c.instructions+=2;goto B4bd25d;
case 0x4bd25e:c.instructions+=1;goto B4bd25e;
case 0x4bd263:goto L4bd263;
case 0x4bd266:c.instructions+=5;goto B4bd266;
case 0x4bd267:c.instructions+=4;goto B4bd267;
case 0x4bd268:c.instructions+=3;goto B4bd268;
case 0x4bd269:c.instructions+=2;goto B4bd269;
case 0x4bd26f:c.instructions+=1;goto B4bd26f;
case 0x4bd270:goto L4bd270;
case 0x4bd276:c.instructions+=2;goto B4bd276;
case 0x4bd277:c.instructions+=1;goto B4bd277;
case 0x4bd27c:goto L4bd27c;
case 0x4bd27f:c.instructions+=2;goto B4bd27f;
case 0x4bd281:c.instructions+=1;goto B4bd281;
case 0x4bd283:goto L4bd283;
case 0x4bd286:c.instructions+=3;goto B4bd286;
case 0x4bd287:c.instructions+=2;goto B4bd287;
case 0x4bd28c:c.instructions+=1;goto B4bd28c;
case 0x4bd291:goto L4bd291;
case 0x4bd294:c.instructions+=5;goto B4bd294;
case 0x4bd296:c.instructions+=4;goto B4bd296;
case 0x4bd29b:c.instructions+=3;goto B4bd29b;
case 0x4bd2a0:c.instructions+=2;goto B4bd2a0;
case 0x4bd2a1:c.instructions+=1;goto B4bd2a1;
case 0x4bd2a6:goto L4bd2a6;
case 0x4bd2a9:c.instructions+=5;goto B4bd2a9;
case 0x4bd2aa:c.instructions+=4;goto B4bd2aa;
case 0x4bd2ab:c.instructions+=3;goto B4bd2ab;
case 0x4bd2ac:c.instructions+=2;goto B4bd2ac;
case 0x4bd2b2:c.instructions+=1;goto B4bd2b2;
case 0x4bd2b3:goto L4bd2b3;
case 0x4bd2b9:c.instructions+=2;goto B4bd2b9;
case 0x4bd2bb:c.instructions+=1;goto B4bd2bb;
case 0x4bd2bd:goto L4bd2bd;
case 0x4bd2c3:c.instructions+=2;goto B4bd2c3;
case 0x4bd2c6:c.instructions+=1;goto B4bd2c6;
case 0x4bd2cb:goto L4bd2cb;
case 0x4bd2d1:c.instructions+=4;goto B4bd2d1;
case 0x4bd2d4:c.instructions+=3;goto B4bd2d4;
case 0x4bd2d7:c.instructions+=2;goto B4bd2d7;
case 0x4bd2d9:c.instructions+=1;goto B4bd2d9;
case 0x4bd2db:goto L4bd2db;
case 0x4bd2dc:c.instructions+=4;goto B4bd2dc;
case 0x4bd2e0:c.instructions+=3;goto B4bd2e0;
case 0x4bd2e1:c.instructions+=2;goto B4bd2e1;
case 0x4bd2e3:c.instructions+=1;goto B4bd2e3;
case 0x4bd2e8:goto L4bd2e8;
case 0x4bd2ee:c.instructions+=3;goto B4bd2ee;
case 0x4bd2f0:c.instructions+=2;goto B4bd2f0;
case 0x4bd2f5:c.instructions+=1;goto B4bd2f5;
case 0x4bd2fc:goto L4bd2fc;
case 0x4bd2fe:goto L4bd2fe;
case 0x4bd300:c.instructions+=1;goto B4bd300;
case 0x4bd305:goto L4bd305;
case 0x4bd306:c.instructions+=4;goto B4bd306;
case 0x4bd307:c.instructions+=3;goto B4bd307;
case 0x4bd308:c.instructions+=2;goto B4bd308;
case 0x4bd30e:c.instructions+=1;goto B4bd30e;
case 0x4bd310:goto L4bd310;
case 0x4bd312:c.instructions+=11;goto B4bd312;
case 0x4bd317:c.instructions+=10;goto B4bd317;
case 0x4bd31d:c.instructions+=9;goto B4bd31d;
case 0x4bd31e:c.instructions+=8;goto B4bd31e;
case 0x4bd325:c.instructions+=7;goto B4bd325;
case 0x4bd326:c.instructions+=6;goto B4bd326;
case 0x4bd32a:c.instructions+=5;goto B4bd32a;
case 0x4bd32b:c.instructions+=4;goto B4bd32b;
case 0x4bd32d:c.instructions+=3;goto B4bd32d;
case 0x4bd32e:c.instructions+=2;goto B4bd32e;
case 0x4bd332:c.instructions+=1;goto B4bd332;
case 0x4bd337:goto L4bd337;
case 0x4bd33d:c.instructions+=14;goto B4bd33d;
case 0x4bd344:c.instructions+=13;goto B4bd344;
case 0x4bd348:c.instructions+=12;goto B4bd348;
case 0x4bd34a:c.instructions+=11;goto B4bd34a;
case 0x4bd350:c.instructions+=10;goto B4bd350;
case 0x4bd356:c.instructions+=9;goto B4bd356;
case 0x4bd358:c.instructions+=8;goto B4bd358;
case 0x4bd35e:c.instructions+=7;goto B4bd35e;
case 0x4bd363:c.instructions+=6;goto B4bd363;
case 0x4bd369:c.instructions+=5;goto B4bd369;
case 0x4bd36c:c.instructions+=4;goto B4bd36c;
case 0x4bd371:c.instructions+=3;goto B4bd371;
case 0x4bd372:c.instructions+=2;goto B4bd372;
case 0x4bd37a:c.instructions+=1;goto B4bd37a;
case 0x4bd37f:goto L4bd37f;
case 0x4bd382:c.instructions+=4;goto B4bd382;
case 0x4bd384:c.instructions+=3;goto B4bd384;
case 0x4bd386:c.instructions+=2;goto B4bd386;
case 0x4bd38b:c.instructions+=1;goto B4bd38b;
case 0x4bd390:goto L4bd390;
case 0x4bd393:c.instructions+=6;goto B4bd393;
case 0x4bd394:c.instructions+=5;goto B4bd394;
case 0x4bd399:c.instructions+=4;goto B4bd399;
case 0x4bd39b:c.instructions+=3;goto B4bd39b;
case 0x4bd3a0:c.instructions+=2;goto B4bd3a0;
case 0x4bd3a2:c.instructions+=1;goto B4bd3a2;
case 0x4bd3a7:goto L4bd3a7;
case 0x4bd3ab:c.instructions+=5;goto B4bd3ab;
case 0x4bd3ad:c.instructions+=4;goto B4bd3ad;
case 0x4bd3ae:c.instructions+=3;goto B4bd3ae;
case 0x4bd3b5:c.instructions+=2;goto B4bd3b5;
case 0x4bd3b8:c.instructions+=1;goto B4bd3b8;
case 0x4bd3c0:goto L4bd3c0;
case 0x4bd3c1:c.instructions+=2;goto B4bd3c1;
case 0x4bd3c3:c.instructions+=1;goto B4bd3c3;
case 0x4bd3c8:goto L4bd3c8;
case 0x4bd3cd:c.instructions+=1;goto B4bd3cd;
case 0x4bd3cf:goto L4bd3cf;
case 0x4bd3d0:c.instructions+=1;goto B4bd3d0;
case 0x4bd3d5:goto L4bd3d5;
case 0x4bd3d8:goto L4bd3d8;
case 0x4bd3da:c.instructions+=2;goto B4bd3da;
case 0x4bd3db:c.instructions+=1;goto B4bd3db;
case 0x4bd3e0:goto L4bd3e0;
case 0x4bd3e6:c.instructions+=1;goto B4bd3e6;
case 0x4bd3f0:goto L4bd3f0;
case 0x4bd3f1:c.instructions+=2;goto B4bd3f1;
case 0x4bd3f3:c.instructions+=1;goto B4bd3f3;
case 0x4bd3f8:goto L4bd3f8;
case 0x4bd3fa:c.instructions+=1;goto B4bd3fa;
case 0x4bd3ff:goto L4bd3ff;
case 0x4bd402:c.instructions+=1;goto B4bd402;
case 0x4bd404:goto L4bd404;
case 0x4bd407:c.instructions+=7;goto B4bd407;
case 0x4bd40c:c.instructions+=6;goto B4bd40c;
case 0x4bd411:c.instructions+=5;goto B4bd411;
case 0x4bd416:c.instructions+=4;goto B4bd416;
case 0x4bd41b:c.instructions+=3;goto B4bd41b;
case 0x4bd420:c.instructions+=2;goto B4bd420;
case 0x4bd421:c.instructions+=1;goto B4bd421;
case 0x4bd426:goto L4bd426;
case 0x4bd429:c.instructions+=2;goto B4bd429;
case 0x4bd42a:c.instructions+=1;goto B4bd42a;
case 0x4bd42d:goto L4bd42d;
case 0x4bd432:goto L4bd432;
case 0x4bd436:c.instructions+=6;goto B4bd436;
case 0x4bd43c:c.instructions+=5;goto B4bd43c;
case 0x4bd43d:c.instructions+=4;goto B4bd43d;
case 0x4bd442:c.instructions+=3;goto B4bd442;
case 0x4bd443:c.instructions+=2;goto B4bd443;
case 0x4bd444:c.instructions+=1;goto B4bd444;
case 0x4bd449:goto L4bd449;
case 0x4bd44c:c.instructions+=2;goto B4bd44c;
case 0x4bd44e:c.instructions+=1;goto B4bd44e;
case 0x4bd450:goto L4bd450;
case 0x4bd456:c.instructions+=2;goto B4bd456;
case 0x4bd458:c.instructions+=1;goto B4bd458;
case 0x4bd45a:goto L4bd45a;
case 0x4bd45d:c.instructions+=1;goto B4bd45d;
case 0x4bd45f:goto L4bd45f;
case 0x4bd462:c.instructions+=3;goto B4bd462;
case 0x4bd463:c.instructions+=2;goto B4bd463;
case 0x4bd464:c.instructions+=1;goto B4bd464;
case 0x4bd469:goto L4bd469;
case 0x4bd46c:c.instructions+=2;goto B4bd46c;
case 0x4bd46d:c.instructions+=1;goto B4bd46d;
case 0x4bd470:goto L4bd470;
case 0x4bd475:c.instructions+=3;goto B4bd475;
case 0x4bd47a:c.instructions+=2;goto B4bd47a;
case 0x4bd47c:c.instructions+=1;goto B4bd47c;
case 0x4bd481:goto L4bd481;
case 0x4bd482:c.instructions+=1;goto B4bd482;
case 0x4bd490:goto L4bd490;
case 0x4bd496:c.instructions+=6;goto B4bd496;
case 0x4bd497:c.instructions+=5;goto B4bd497;
case 0x4bd498:c.instructions+=4;goto B4bd498;
case 0x4bd49a:c.instructions+=3;goto B4bd49a;
case 0x4bd49f:c.instructions+=2;goto B4bd49f;
case 0x4bd4a6:c.instructions+=1;goto B4bd4a6;
case 0x4bd4ab:goto L4bd4ab;
case 0x4bd4ad:c.instructions+=1;goto B4bd4ad;
case 0x4bd4b2:goto L4bd4b2;
case 0x4bd4b7:goto L4bd4b7;
case 0x4bd4b9:c.instructions+=2;goto B4bd4b9;
case 0x4bd4bc:c.instructions+=1;goto B4bd4bc;
case 0x4bd4c1:goto L4bd4c1;
case 0x4bd4c3:c.instructions+=2;goto B4bd4c3;
case 0x4bd4c4:c.instructions+=1;goto B4bd4c4;
case 0x4bd4c6:goto L4bd4c6;
case 0x4bd4c7:c.instructions+=1;goto B4bd4c7;
case 0x4bd4c8:goto L4bd4c8;
case 0x4bd4c9:c.instructions+=1;goto B4bd4c9;
case 0x4bd4ce:goto L4bd4ce;
case 0x4bd4d0:c.instructions+=1;goto B4bd4d0;
case 0x4bd4d5:goto L4bd4d5;
case 0x4bd4d7:c.instructions+=4;goto B4bd4d7;
case 0x4bd4da:c.instructions+=3;goto B4bd4da;
case 0x4bd4df:c.instructions+=2;goto B4bd4df;
case 0x4bd4e0:c.instructions+=1;goto B4bd4e0;
case 0x4bd4e5:goto L4bd4e5;
case 0x4bd4e8:c.instructions+=2;goto B4bd4e8;
case 0x4bd4ea:c.instructions+=1;goto B4bd4ea;
case 0x4bd4ec:goto L4bd4ec;
case 0x4bd4ef:c.instructions+=4;goto B4bd4ef;
case 0x4bd4f1:c.instructions+=3;goto B4bd4f1;
case 0x4bd4f2:c.instructions+=2;goto B4bd4f2;
case 0x4bd4f3:c.instructions+=1;goto B4bd4f3;
case 0x4bd4f8:goto L4bd4f8;
case 0x4bd4fa:c.instructions+=1;goto B4bd4fa;
case 0x4bd4ff:goto L4bd4ff;
case 0x4bd500:c.instructions+=1;goto B4bd500;
case 0x4bd502:goto L4bd502;
case 0x4bd503:c.instructions+=1;goto B4bd503;
case 0x4bd504:goto L4bd504;
case 0x4bd509:goto L4bd509;
case 0x4bd50b:c.instructions+=2;goto B4bd50b;
case 0x4bd50e:c.instructions+=1;goto B4bd50e;
case 0x4bd513:goto L4bd513;
case 0x4bd515:c.instructions+=1;goto B4bd515;
case 0x4bd517:goto L4bd517;
case 0x4bd518:c.instructions+=2;goto B4bd518;
case 0x4bd51a:c.instructions+=1;goto B4bd51a;
case 0x4bd51f:goto L4bd51f;
case 0x4bd521:c.instructions+=2;goto B4bd521;
case 0x4bd526:c.instructions+=1;goto B4bd526;
case 0x4bd52b:goto L4bd52b;
case 0x4bd52e:goto L4bd52e;
case 0x4bd533:c.instructions+=1;goto B4bd533;
case 0x4bd538:goto L4bd538;
case 0x4bd53a:c.instructions+=1;goto B4bd53a;
case 0x4bd53f:goto L4bd53f;
case 0x4bd541:c.instructions+=1;goto B4bd541;
case 0x4bd543:goto L4bd543;
case 0x4bd545:c.instructions+=2;goto B4bd545;
case 0x4bd54f:c.instructions+=1;goto B4bd54f;
case 0x4bd554:goto L4bd554;
case 0x4bd556:c.instructions+=1;goto B4bd556;
case 0x4bd55b:goto L4bd55b;
case 0x4bd55c:c.instructions+=1;goto B4bd55c;
case 0x4bd561:goto L4bd561;
case 0x4bd563:c.instructions+=2;goto B4bd563;
case 0x4bd565:c.instructions+=1;goto B4bd565;
case 0x4bd56a:goto L4bd56a;
case 0x4bd56c:c.instructions+=2;goto B4bd56c;
case 0x4bd571:c.instructions+=1;goto B4bd571;
case 0x4bd576:goto L4bd576;
case 0x4bd579:goto L4bd579;
case 0x4bd57f:c.instructions+=3;goto B4bd57f;
case 0x4bd581:c.instructions+=2;goto B4bd581;
case 0x4bd582:c.instructions+=1;goto B4bd582;
case 0x4bd587:goto L4bd587;
case 0x4bd58c:goto L4bd58c;
case 0x4bd592:c.instructions+=3;goto B4bd592;
case 0x4bd597:c.instructions+=2;goto B4bd597;
case 0x4bd598:c.instructions+=1;goto B4bd598;
case 0x4bd59d:goto L4bd59d;
case 0x4bd5a0:c.instructions+=2;goto B4bd5a0;
case 0x4bd5a5:c.instructions+=1;goto B4bd5a5;
case 0x4bd5aa:goto L4bd5aa;
case 0x4bd5ac:c.instructions+=1;goto B4bd5ac;
case 0x4bd5b1:goto L4bd5b1;
case 0x4bd5b3:c.instructions+=1;goto B4bd5b3;
case 0x4bd5b5:goto L4bd5b5;
case 0x4bd5b7:c.instructions+=7;goto B4bd5b7;
case 0x4bd5bd:c.instructions+=6;goto B4bd5bd;
case 0x4bd5c2:c.instructions+=5;goto B4bd5c2;
case 0x4bd5cc:c.instructions+=4;goto B4bd5cc;
case 0x4bd5cf:c.instructions+=3;goto B4bd5cf;
case 0x4bd5d4:c.instructions+=2;goto B4bd5d4;
case 0x4bd5d5:c.instructions+=1;goto B4bd5d5;
case 0x4bd5da:goto L4bd5da;
case 0x4bd5dd:c.instructions+=4;goto B4bd5dd;
case 0x4bd5de:c.instructions+=3;goto B4bd5de;
case 0x4bd5df:c.instructions+=2;goto B4bd5df;
case 0x4bd5e5:c.instructions+=1;goto B4bd5e5;
case 0x4bd5e6:goto L4bd5e6;
case 0x4bd5eb:goto L4bd5eb;
case 0x4bd5f1:c.instructions+=5;goto B4bd5f1;
case 0x4bd5f2:c.instructions+=4;goto B4bd5f2;
case 0x4bd5f7:c.instructions+=3;goto B4bd5f7;
case 0x4bd5fc:c.instructions+=2;goto B4bd5fc;
case 0x4bd5fd:c.instructions+=1;goto B4bd5fd;
case 0x4bd602:goto L4bd602;
case 0x4bd605:c.instructions+=2;goto B4bd605;
case 0x4bd607:c.instructions+=1;goto B4bd607;
case 0x4bd609:goto L4bd609;
case 0x4bd60f:c.instructions+=2;goto B4bd60f;
case 0x4bd611:c.instructions+=1;goto B4bd611;
case 0x4bd613:goto L4bd613;
case 0x4bd616:c.instructions+=1;goto B4bd616;
case 0x4bd618:goto L4bd618;
case 0x4bd61b:c.instructions+=3;goto B4bd61b;
case 0x4bd61c:c.instructions+=2;goto B4bd61c;
case 0x4bd61d:c.instructions+=1;goto B4bd61d;
case 0x4bd622:goto L4bd622;
case 0x4bd625:c.instructions+=5;goto B4bd625;
case 0x4bd626:c.instructions+=4;goto B4bd626;
case 0x4bd630:c.instructions+=3;goto B4bd630;
case 0x4bd631:c.instructions+=2;goto B4bd631;
case 0x4bd637:c.instructions+=1;goto B4bd637;
case 0x4bd638:goto L4bd638;
case 0x4bd63d:c.instructions+=2;goto B4bd63d;
case 0x4bd642:c.instructions+=1;goto B4bd642;
case 0x4bd647:goto L4bd647;
case 0x4bd64a:c.instructions+=4;goto B4bd64a;
case 0x4bd64b:c.instructions+=3;goto B4bd64b;
case 0x4bd64f:c.instructions+=2;goto B4bd64f;
case 0x4bd650:c.instructions+=1;goto B4bd650;
case 0x4bd655:goto L4bd655;
case 0x4bd658:c.instructions+=5;goto B4bd658;
case 0x4bd65c:c.instructions+=4;goto B4bd65c;
case 0x4bd65d:c.instructions+=3;goto B4bd65d;
case 0x4bd662:c.instructions+=2;goto B4bd662;
case 0x4bd663:c.instructions+=1;goto B4bd663;
case 0x4bd668:goto L4bd668;
case 0x4bd66b:c.instructions+=1;goto B4bd66b;
case 0x4bd66e:goto L4bd66e;
case 0x4bd66f:c.instructions+=4;goto B4bd66f;
case 0x4bd679:c.instructions+=3;goto B4bd679;
case 0x4bd67a:c.instructions+=2;goto B4bd67a;
case 0x4bd680:c.instructions+=1;goto B4bd680;
case 0x4bd690:goto L4bd690;
case 0x4bd696:c.instructions+=3;goto B4bd696;
case 0x4bd697:c.instructions+=2;goto B4bd697;
case 0x4bd699:c.instructions+=1;goto B4bd699;
case 0x4bd69e:goto L4bd69e;
case 0x4bd6a4:c.instructions+=6;goto B4bd6a4;
case 0x4bd6a5:c.instructions+=5;goto B4bd6a5;
case 0x4bd6aa:c.instructions+=4;goto B4bd6aa;
case 0x4bd6ac:c.instructions+=3;goto B4bd6ac;
case 0x4bd6b1:c.instructions+=2;goto B4bd6b1;
case 0x4bd6b2:c.instructions+=1;goto B4bd6b2;
case 0x4bd6b7:goto L4bd6b7;
case 0x4bd6ba:c.instructions+=2;goto B4bd6ba;
case 0x4bd6bc:c.instructions+=1;goto B4bd6bc;
case 0x4bd6be:goto L4bd6be;
case 0x4bd6c4:c.instructions+=2;goto B4bd6c4;
case 0x4bd6c6:c.instructions+=1;goto B4bd6c6;
case 0x4bd6c8:goto L4bd6c8;
case 0x4bd6cb:c.instructions+=1;goto B4bd6cb;
case 0x4bd6cd:goto L4bd6cd;
case 0x4bd6ce:c.instructions+=3;goto B4bd6ce;
case 0x4bd6d1:c.instructions+=2;goto B4bd6d1;
case 0x4bd6d2:c.instructions+=1;goto B4bd6d2;
case 0x4bd6d7:goto L4bd6d7;
case 0x4bd6da:c.instructions+=3;goto B4bd6da;
case 0x4bd6db:c.instructions+=2;goto B4bd6db;
case 0x4bd6e1:c.instructions+=1;goto B4bd6e1;
case 0x4bd6e2:goto L4bd6e2;
case 0x4bd6e7:c.instructions+=3;goto B4bd6e7;
case 0x4bd6ec:c.instructions+=2;goto B4bd6ec;
case 0x4bd6f6:c.instructions+=1;goto B4bd6f6;
case 0x4bd6fb:goto L4bd6fb;
case 0x4bd6fe:c.instructions+=4;goto B4bd6fe;
case 0x4bd6ff:c.instructions+=3;goto B4bd6ff;
case 0x4bd703:c.instructions+=2;goto B4bd703;
case 0x4bd704:c.instructions+=1;goto B4bd704;
case 0x4bd709:goto L4bd709;
case 0x4bd70c:c.instructions+=5;goto B4bd70c;
case 0x4bd710:c.instructions+=4;goto B4bd710;
case 0x4bd711:c.instructions+=3;goto B4bd711;
case 0x4bd716:c.instructions+=2;goto B4bd716;
case 0x4bd717:c.instructions+=1;goto B4bd717;
case 0x4bd71c:goto L4bd71c;
case 0x4bd71f:c.instructions+=1;goto B4bd71f;
case 0x4bd722:goto L4bd722;
case 0x4bd723:c.instructions+=2;goto B4bd723;
case 0x4bd729:c.instructions+=1;goto B4bd729;
case 0x4bd730:goto L4bd730;
case 0x4bd731:c.instructions+=19;goto B4bd731;
case 0x4bd733:c.instructions+=18;goto B4bd733;
case 0x4bd736:c.instructions+=17;goto B4bd736;
case 0x4bd73c:c.instructions+=16;goto B4bd73c;
case 0x4bd73d:c.instructions+=15;goto B4bd73d;
case 0x4bd73f:c.instructions+=14;goto B4bd73f;
case 0x4bd740:c.instructions+=13;goto B4bd740;
case 0x4bd744:c.instructions+=12;goto B4bd744;
case 0x4bd745:c.instructions+=11;goto B4bd745;
case 0x4bd749:c.instructions+=10;goto B4bd749;
case 0x4bd74b:c.instructions+=9;goto B4bd74b;
case 0x4bd74d:c.instructions+=8;goto B4bd74d;
case 0x4bd751:c.instructions+=7;goto B4bd751;
case 0x4bd755:c.instructions+=6;goto B4bd755;
case 0x4bd75a:c.instructions+=5;goto B4bd75a;
case 0x4bd75f:c.instructions+=4;goto B4bd75f;
case 0x4bd760:c.instructions+=3;goto B4bd760;
case 0x4bd765:c.instructions+=2;goto B4bd765;
case 0x4bd769:c.instructions+=1;goto B4bd769;
case 0x4bd76e:goto L4bd76e;
case 0x4bd771:c.instructions+=2;goto B4bd771;
case 0x4bd776:c.instructions+=1;goto B4bd776;
case 0x4bd77b:goto L4bd77b;
case 0x4bd77d:c.instructions+=1;goto B4bd77d;
case 0x4bd782:goto L4bd782;
case 0x4bd783:c.instructions+=3;goto B4bd783;
case 0x4bd78a:c.instructions+=2;goto B4bd78a;
case 0x4bd78b:c.instructions+=1;goto B4bd78b;
case 0x4bd790:goto L4bd790;
case 0x4bd792:c.instructions+=6;goto B4bd792;
case 0x4bd794:c.instructions+=5;goto B4bd794;
case 0x4bd798:c.instructions+=4;goto B4bd798;
case 0x4bd799:c.instructions+=3;goto B4bd799;
case 0x4bd79e:c.instructions+=2;goto B4bd79e;
case 0x4bd7a3:c.instructions+=1;goto B4bd7a3;
case 0x4bd7a8:goto L4bd7a8;
case 0x4bd7aa:goto L4bd7aa;
case 0x4bd7af:goto L4bd7af;
case 0x4bd7b5:c.instructions+=2;goto B4bd7b5;
case 0x4bd7b6:c.instructions+=1;goto B4bd7b6;
case 0x4bd7bb:goto L4bd7bb;
case 0x4bd7be:c.instructions+=2;goto B4bd7be;
case 0x4bd7c0:c.instructions+=1;goto B4bd7c0;
case 0x4bd7c6:goto L4bd7c6;
case 0x4bd7cb:c.instructions+=2;goto B4bd7cb;
case 0x4bd7cd:c.instructions+=1;goto B4bd7cd;
case 0x4bd7d3:goto L4bd7d3;
case 0x4bd7dd:c.instructions+=1;goto B4bd7dd;
case 0x4bd7e3:goto L4bd7e3;
case 0x4bd7e8:c.instructions+=2;goto B4bd7e8;
case 0x4bd7ea:c.instructions+=1;goto B4bd7ea;
case 0x4bd7f0:goto L4bd7f0;
case 0x4bd7f5:c.instructions+=3;goto B4bd7f5;
case 0x4bd7f7:c.instructions+=2;goto B4bd7f7;
case 0x4bd7fc:c.instructions+=1;goto B4bd7fc;
case 0x4bd7fe:goto L4bd7fe;
case 0x4bd803:c.instructions+=3;goto B4bd803;
case 0x4bd805:c.instructions+=2;goto B4bd805;
case 0x4bd80a:c.instructions+=1;goto B4bd80a;
case 0x4bd80e:goto L4bd80e;
case 0x4bd810:goto L4bd810;
case 0x4bd812:c.instructions+=3;goto B4bd812;
case 0x4bd817:c.instructions+=2;goto B4bd817;
case 0x4bd818:c.instructions+=1;goto B4bd818;
case 0x4bd81d:goto L4bd81d;
case 0x4bd820:c.instructions+=5;goto B4bd820;
case 0x4bd821:c.instructions+=4;goto B4bd821;
case 0x4bd825:c.instructions+=3;goto B4bd825;
case 0x4bd82a:c.instructions+=2;goto B4bd82a;
case 0x4bd82b:c.instructions+=1;goto B4bd82b;
case 0x4bd830:goto L4bd830;
case 0x4bd833:c.instructions+=8;goto B4bd833;
case 0x4bd837:c.instructions+=7;goto B4bd837;
case 0x4bd838:c.instructions+=6;goto B4bd838;
case 0x4bd83d:c.instructions+=5;goto B4bd83d;
case 0x4bd842:c.instructions+=4;goto B4bd842;
case 0x4bd847:c.instructions+=3;goto B4bd847;
case 0x4bd84c:c.instructions+=2;goto B4bd84c;
case 0x4bd84d:c.instructions+=1;goto B4bd84d;
case 0x4bd852:goto L4bd852;
case 0x4bd855:c.instructions+=6;goto B4bd855;
case 0x4bd856:c.instructions+=5;goto B4bd856;
case 0x4bd857:c.instructions+=4;goto B4bd857;
case 0x4bd858:c.instructions+=3;goto B4bd858;
case 0x4bd85a:c.instructions+=2;goto B4bd85a;
case 0x4bd85b:c.instructions+=1;goto B4bd85b;
case 0x4bd85c:goto L4bd85c;
case 0x4bd861:goto L4bd861;
case 0x4bd863:c.instructions+=1;goto B4bd863;
case 0x4bd868:goto L4bd868;
case 0x4bd86b:c.instructions+=1;goto B4bd86b;
case 0x4bd86d:goto L4bd86d;
case 0x4bd870:c.instructions+=3;goto B4bd870;
case 0x4bd875:c.instructions+=2;goto B4bd875;
case 0x4bd87a:c.instructions+=1;goto B4bd87a;
case 0x4bd87f:goto L4bd87f;
case 0x4bd882:c.instructions+=4;goto B4bd882;
case 0x4bd883:c.instructions+=3;goto B4bd883;
case 0x4bd888:c.instructions+=2;goto B4bd888;
case 0x4bd88d:c.instructions+=1;goto B4bd88d;
case 0x4bd892:goto L4bd892;
case 0x4bd895:c.instructions+=1;goto B4bd895;
case 0x4bd897:goto L4bd897;
case 0x4bd89c:c.instructions+=1;goto B4bd89c;
case 0x4bd89e:goto L4bd89e;
case 0x4bd8a1:c.instructions+=1;goto B4bd8a1;
case 0x4bd8a3:goto L4bd8a3;
case 0x4bd8a8:goto L4bd8a8;
case 0x4bd8ab:c.instructions+=1;goto B4bd8ab;
case 0x4bd8b0:goto L4bd8b0;
case 0x4bd8b1:c.instructions+=3;goto B4bd8b1;
case 0x4bd8b6:c.instructions+=2;goto B4bd8b6;
case 0x4bd8bb:c.instructions+=1;goto B4bd8bb;
case 0x4bd8c0:goto L4bd8c0;
case 0x4bd8c3:c.instructions+=5;goto B4bd8c3;
case 0x4bd8c5:c.instructions+=4;goto B4bd8c5;
case 0x4bd8ca:c.instructions+=3;goto B4bd8ca;
case 0x4bd8cf:c.instructions+=2;goto B4bd8cf;
case 0x4bd8d0:c.instructions+=1;goto B4bd8d0;
case 0x4bd8d5:goto L4bd8d5;
case 0x4bd8d8:c.instructions+=7;goto B4bd8d8;
case 0x4bd8e2:c.instructions+=6;goto B4bd8e2;
case 0x4bd8e3:c.instructions+=5;goto B4bd8e3;
case 0x4bd8e4:c.instructions+=4;goto B4bd8e4;
case 0x4bd8e5:c.instructions+=3;goto B4bd8e5;
case 0x4bd8e7:c.instructions+=2;goto B4bd8e7;
case 0x4bd8e8:c.instructions+=1;goto B4bd8e8;
case 0x4bd8e9:goto L4bd8e9;
case 0x4bd8ec:c.instructions+=2;goto B4bd8ec;
case 0x4bd8f1:c.instructions+=1;goto B4bd8f1;
case 0x4bd8f6:goto L4bd8f6;
case 0x4bd8f7:c.instructions+=6;goto B4bd8f7;
case 0x4bd8fc:c.instructions+=5;goto B4bd8fc;
case 0x4bd901:c.instructions+=4;goto B4bd901;
case 0x4bd906:c.instructions+=3;goto B4bd906;
case 0x4bd90b:c.instructions+=2;goto B4bd90b;
case 0x4bd90c:c.instructions+=1;goto B4bd90c;
case 0x4bd911:goto L4bd911;
case 0x4bd914:c.instructions+=7;goto B4bd914;
case 0x4bd91e:c.instructions+=6;goto B4bd91e;
case 0x4bd91f:c.instructions+=5;goto B4bd91f;
case 0x4bd920:c.instructions+=4;goto B4bd920;
case 0x4bd921:c.instructions+=3;goto B4bd921;
case 0x4bd923:c.instructions+=2;goto B4bd923;
case 0x4bd924:c.instructions+=1;goto B4bd924;
case 0x4bd925:goto L4bd925;
case 0x4bd92a:c.instructions+=2;goto B4bd92a;
case 0x4bd92c:c.instructions+=1;goto B4bd92c;
case 0x4bd92e:goto L4bd92e;
case 0x4bd933:c.instructions+=1;goto B4bd933;
case 0x4bd938:goto L4bd938;
case 0x4bd93a:c.instructions+=1;goto B4bd93a;
case 0x4bd93f:goto L4bd93f;
case 0x4bd944:c.instructions+=3;goto B4bd944;
case 0x4bd945:c.instructions+=2;goto B4bd945;
case 0x4bd94a:c.instructions+=1;goto B4bd94a;
case 0x4bd94f:goto L4bd94f;
case 0x4bd951:c.instructions+=6;goto B4bd951;
case 0x4bd956:c.instructions+=5;goto B4bd956;
case 0x4bd960:c.instructions+=4;goto B4bd960;
case 0x4bd963:c.instructions+=3;goto B4bd963;
case 0x4bd968:c.instructions+=2;goto B4bd968;
case 0x4bd969:c.instructions+=1;goto B4bd969;
case 0x4bd96e:goto L4bd96e;
case 0x4bd971:c.instructions+=6;goto B4bd971;
case 0x4bd972:c.instructions+=5;goto B4bd972;
case 0x4bd973:c.instructions+=4;goto B4bd973;
case 0x4bd974:c.instructions+=3;goto B4bd974;
case 0x4bd976:c.instructions+=2;goto B4bd976;
case 0x4bd977:c.instructions+=1;goto B4bd977;
case 0x4bd978:goto L4bd978;
case 0x4bd97e:c.instructions+=3;goto B4bd97e;
case 0x4bd97f:c.instructions+=2;goto B4bd97f;
case 0x4bd984:c.instructions+=1;goto B4bd984;
case 0x4bd989:goto L4bd989;
case 0x4bd98e:goto L4bd98e;
case 0x4bd994:c.instructions+=6;goto B4bd994;
case 0x4bd995:c.instructions+=5;goto B4bd995;
case 0x4bd99a:c.instructions+=4;goto B4bd99a;
case 0x4bd99c:c.instructions+=3;goto B4bd99c;
case 0x4bd9a1:c.instructions+=2;goto B4bd9a1;
case 0x4bd9a2:c.instructions+=1;goto B4bd9a2;
case 0x4bd9a7:goto L4bd9a7;
case 0x4bd9aa:c.instructions+=2;goto B4bd9aa;
case 0x4bd9ac:c.instructions+=1;goto B4bd9ac;
case 0x4bd9ae:goto L4bd9ae;
case 0x4bd9b3:c.instructions+=3;goto B4bd9b3;
case 0x4bd9b8:c.instructions+=2;goto B4bd9b8;
case 0x4bd9ba:c.instructions+=1;goto B4bd9ba;
case 0x4bd9bf:goto L4bd9bf;
case 0x4bd9c0:c.instructions+=5;goto B4bd9c0;
case 0x4bd9c1:c.instructions+=4;goto B4bd9c1;
case 0x4bd9c2:c.instructions+=3;goto B4bd9c2;
case 0x4bd9c4:c.instructions+=2;goto B4bd9c4;
case 0x4bd9c5:c.instructions+=1;goto B4bd9c5;
case 0x4bd9c6:goto L4bd9c6;
case 0x4bd9cc:c.instructions+=2;goto B4bd9cc;
case 0x4bd9ce:c.instructions+=1;goto B4bd9ce;
case 0x4bd9d0:goto L4bd9d0;
case 0x4bd9d3:c.instructions+=1;goto B4bd9d3;
case 0x4bd9d5:goto L4bd9d5;
case 0x4bd9d6:c.instructions+=3;goto B4bd9d6;
case 0x4bd9d9:c.instructions+=2;goto B4bd9d9;
case 0x4bd9da:c.instructions+=1;goto B4bd9da;
case 0x4bd9df:goto L4bd9df;
case 0x4bd9e2:c.instructions+=6;goto B4bd9e2;
case 0x4bd9e3:c.instructions+=5;goto B4bd9e3;
case 0x4bd9e4:c.instructions+=4;goto B4bd9e4;
case 0x4bd9e5:c.instructions+=3;goto B4bd9e5;
case 0x4bd9e7:c.instructions+=2;goto B4bd9e7;
case 0x4bd9e8:c.instructions+=1;goto B4bd9e8;
case 0x4bd9e9:goto L4bd9e9;
case 0x4bd9ec:c.instructions+=2;goto B4bd9ec;
case 0x4bd9f1:c.instructions+=1;goto B4bd9f1;
case 0x4bd9f6:goto L4bd9f6;
case 0x4bd9f7:c.instructions+=2;goto B4bd9f7;
case 0x4bd9f9:c.instructions+=1;goto B4bd9f9;
case 0x4bd9fb:goto L4bd9fb;
case 0x4bda00:c.instructions+=3;goto B4bda00;
case 0x4bda05:c.instructions+=2;goto B4bda05;
case 0x4bda06:c.instructions+=1;goto B4bda06;
case 0x4bda0b:goto L4bda0b;
case 0x4bda0e:goto L4bda0e;
case 0x4bda0f:c.instructions+=5;goto B4bda0f;
case 0x4bda10:c.instructions+=4;goto B4bda10;
case 0x4bda11:c.instructions+=3;goto B4bda11;
case 0x4bda13:c.instructions+=2;goto B4bda13;
case 0x4bda14:c.instructions+=1;goto B4bda14;
case 0x4bda20:goto L4bda20;
case 0x4bda26:c.instructions+=10;goto B4bda26;
case 0x4bda27:c.instructions+=9;goto B4bda27;
case 0x4bda29:c.instructions+=8;goto B4bda29;
case 0x4bda30:c.instructions+=7;goto B4bda30;
case 0x4bda36:c.instructions+=6;goto B4bda36;
case 0x4bda37:c.instructions+=5;goto B4bda37;
case 0x4bda38:c.instructions+=4;goto B4bda38;
case 0x4bda3c:c.instructions+=3;goto B4bda3c;
case 0x4bda41:c.instructions+=2;goto B4bda41;
case 0x4bda42:c.instructions+=1;goto B4bda42;
case 0x4bda47:goto L4bda47;
case 0x4bda4c:c.instructions+=3;goto B4bda4c;
case 0x4bda4f:c.instructions+=2;goto B4bda4f;
case 0x4bda51:c.instructions+=1;goto B4bda51;
case 0x4bda53:goto L4bda53;
case 0x4bda58:goto L4bda58;
case 0x4bda5e:c.instructions+=8;goto B4bda5e;
case 0x4bda5f:c.instructions+=7;goto B4bda5f;
case 0x4bda64:c.instructions+=6;goto B4bda64;
case 0x4bda66:c.instructions+=5;goto B4bda66;
case 0x4bda6a:c.instructions+=4;goto B4bda6a;
case 0x4bda6b:c.instructions+=3;goto B4bda6b;
case 0x4bda70:c.instructions+=2;goto B4bda70;
case 0x4bda71:c.instructions+=1;goto B4bda71;
case 0x4bda76:goto L4bda76;
case 0x4bda79:c.instructions+=1;goto B4bda79;
case 0x4bda7b:goto L4bda7b;
case 0x4bda80:goto L4bda80;
case 0x4bda86:c.instructions+=7;goto B4bda86;
case 0x4bda87:c.instructions+=6;goto B4bda87;
case 0x4bda8c:c.instructions+=5;goto B4bda8c;
case 0x4bda90:c.instructions+=4;goto B4bda90;
case 0x4bda91:c.instructions+=3;goto B4bda91;
case 0x4bda96:c.instructions+=2;goto B4bda96;
case 0x4bda97:c.instructions+=1;goto B4bda97;
case 0x4bda9c:goto L4bda9c;
case 0x4bda9f:goto L4bda9f;
case 0x4bdaa1:c.instructions+=1;goto B4bdaa1;
case 0x4bdaa3:goto L4bdaa3;
case 0x4bdaa4:c.instructions+=3;goto B4bdaa4;
case 0x4bdaa7:c.instructions+=2;goto B4bdaa7;
case 0x4bdaa8:c.instructions+=1;goto B4bdaa8;
case 0x4bdaad:goto L4bdaad;
case 0x4bdab0:c.instructions+=3;goto B4bdab0;
case 0x4bdab1:c.instructions+=2;goto B4bdab1;
case 0x4bdab7:c.instructions+=1;goto B4bdab7;
case 0x4bdaba:goto L4bdaba;
case 0x4bdac1:c.instructions+=3;goto B4bdac1;
case 0x4bdac2:c.instructions+=2;goto B4bdac2;
case 0x4bdac8:c.instructions+=1;goto B4bdac8;
case 0x4bdad0:goto L4bdad0;
case 0x4bdad6:c.instructions+=9;goto B4bdad6;
case 0x4bdad7:c.instructions+=8;goto B4bdad7;
case 0x4bdad8:c.instructions+=7;goto B4bdad8;
case 0x4bdadf:c.instructions+=6;goto B4bdadf;
case 0x4bdae1:c.instructions+=5;goto B4bdae1;
case 0x4bdae3:c.instructions+=4;goto B4bdae3;
case 0x4bdae4:c.instructions+=3;goto B4bdae4;
case 0x4bdae8:c.instructions+=2;goto B4bdae8;
case 0x4bdaeb:c.instructions+=1;goto B4bdaeb;
case 0x4bdaf0:goto L4bdaf0;
case 0x4bdaf2:c.instructions+=3;goto B4bdaf2;
case 0x4bdaf3:c.instructions+=2;goto B4bdaf3;
case 0x4bdaf5:c.instructions+=1;goto B4bdaf5;
case 0x4bdaf7:goto L4bdaf7;
case 0x4bdaf9:c.instructions+=6;goto B4bdaf9;
case 0x4bdafb:c.instructions+=5;goto B4bdafb;
case 0x4bdaff:c.instructions+=4;goto B4bdaff;
case 0x4bdb01:c.instructions+=3;goto B4bdb01;
case 0x4bdb03:c.instructions+=2;goto B4bdb03;
case 0x4bdb07:c.instructions+=1;goto B4bdb07;
case 0x4bdb09:goto L4bdb09;
case 0x4bdb0b:c.instructions+=2;goto B4bdb0b;
case 0x4bdb0d:c.instructions+=1;goto B4bdb0d;
case 0x4bdb0f:goto L4bdb0f;
case 0x4bdb10:goto L4bdb10;
case 0x4bdb14:c.instructions+=6;goto B4bdb14;
case 0x4bdb17:c.instructions+=5;goto B4bdb17;
case 0x4bdb1a:c.instructions+=4;goto B4bdb1a;
case 0x4bdb1d:c.instructions+=3;goto B4bdb1d;
case 0x4bdb1e:c.instructions+=2;goto B4bdb1e;
case 0x4bdb20:c.instructions+=1;goto B4bdb20;
case 0x4bdb22:goto L4bdb22;
case 0x4bdb24:c.instructions+=8;goto B4bdb24;
case 0x4bdb29:c.instructions+=7;goto B4bdb29;
case 0x4bdb2f:c.instructions+=6;goto B4bdb2f;
case 0x4bdb31:c.instructions+=5;goto B4bdb31;
case 0x4bdb32:c.instructions+=4;goto B4bdb32;
case 0x4bdb38:c.instructions+=3;goto B4bdb38;
case 0x4bdb3c:c.instructions+=2;goto B4bdb3c;
case 0x4bdb3d:c.instructions+=1;goto B4bdb3d;
case 0x4bdb42:goto L4bdb42;
case 0x4bdb48:c.instructions+=7;goto B4bdb48;
case 0x4bdb4b:c.instructions+=6;goto B4bdb4b;
case 0x4bdb4f:c.instructions+=5;goto B4bdb4f;
case 0x4bdb53:c.instructions+=4;goto B4bdb53;
case 0x4bdb55:c.instructions+=3;goto B4bdb55;
case 0x4bdb57:c.instructions+=2;goto B4bdb57;
case 0x4bdb5a:c.instructions+=1;goto B4bdb5a;
case 0x4bdb60:goto L4bdb60;
case 0x4bdb61:goto L4bdb61;
case 0x4bdb62:c.instructions+=2;goto B4bdb62;
case 0x4bdb65:c.instructions+=1;goto B4bdb65;
case 0x4bdb67:goto L4bdb67;
case 0x4bdb69:c.instructions+=3;goto B4bdb69;
case 0x4bdb6b:c.instructions+=2;goto B4bdb6b;
case 0x4bdb6f:c.instructions+=1;goto B4bdb6f;
case 0x4bdb71:goto L4bdb71;
case 0x4bdb73:c.instructions+=1;goto B4bdb73;
case 0x4bdb75:goto L4bdb75;
case 0x4bdb77:c.instructions+=3;goto B4bdb77;
case 0x4bdb79:c.instructions+=2;goto B4bdb79;
case 0x4bdb7c:c.instructions+=1;goto B4bdb7c;
case 0x4bdb7e:goto L4bdb7e;
case 0x4bdb80:goto L4bdb80;
case 0x4bdb82:c.instructions+=1;goto B4bdb82;
case 0x4bdb84:goto L4bdb84;
case 0x4bdb88:c.instructions+=7;goto B4bdb88;
case 0x4bdb8b:c.instructions+=6;goto B4bdb8b;
case 0x4bdb8f:c.instructions+=5;goto B4bdb8f;
case 0x4bdb92:c.instructions+=4;goto B4bdb92;
case 0x4bdb93:c.instructions+=3;goto B4bdb93;
case 0x4bdb94:c.instructions+=2;goto B4bdb94;
case 0x4bdb97:c.instructions+=1;goto B4bdb97;
case 0x4bdb99:goto L4bdb99;
case 0x4bdb9e:goto L4bdb9e;
case 0x4bdba4:c.instructions+=7;goto B4bdba4;
case 0x4bdba6:c.instructions+=6;goto B4bdba6;
case 0x4bdba8:c.instructions+=5;goto B4bdba8;
case 0x4bdba9:c.instructions+=4;goto B4bdba9;
case 0x4bdbaf:c.instructions+=3;goto B4bdbaf;
case 0x4bdbb3:c.instructions+=2;goto B4bdbb3;
case 0x4bdbb4:c.instructions+=1;goto B4bdbb4;
case 0x4bdbb9:goto L4bdbb9;
case 0x4bdbbf:c.instructions+=7;goto B4bdbbf;
case 0x4bdbc2:c.instructions+=6;goto B4bdbc2;
case 0x4bdbc6:c.instructions+=5;goto B4bdbc6;
case 0x4bdbca:c.instructions+=4;goto B4bdbca;
case 0x4bdbcc:c.instructions+=3;goto B4bdbcc;
case 0x4bdbce:c.instructions+=2;goto B4bdbce;
case 0x4bdbd1:c.instructions+=1;goto B4bdbd1;
case 0x4bdbd3:goto L4bdbd3;
case 0x4bdbd7:c.instructions+=2;goto B4bdbd7;
case 0x4bdbd8:c.instructions+=1;goto B4bdbd8;
case 0x4bdbda:goto L4bdbda;
case 0x4bdbdd:c.instructions+=2;goto B4bdbdd;
case 0x4bdbdf:c.instructions+=1;goto B4bdbdf;
case 0x4bdbe1:goto L4bdbe1;
case 0x4bdbe5:c.instructions+=1;goto B4bdbe5;
case 0x4bdbe7:goto L4bdbe7;
case 0x4bdbe8:c.instructions+=2;goto B4bdbe8;
case 0x4bdbea:c.instructions+=1;goto B4bdbea;
case 0x4bdbec:goto L4bdbec;
case 0x4bdbee:c.instructions+=5;goto B4bdbee;
case 0x4bdbef:c.instructions+=4;goto B4bdbef;
case 0x4bdbf0:c.instructions+=3;goto B4bdbf0;
case 0x4bdbf1:c.instructions+=2;goto B4bdbf1;
case 0x4bdbf7:c.instructions+=1;goto B4bdbf7;
case 0x4bdbfa:goto L4bdbfa;
case 0x4bdbfc:c.instructions+=1;goto B4bdbfc;
case 0x4bdbfe:goto L4bdbfe;
case 0x4bdc00:goto L4bdc00;
case 0x4bdc04:c.instructions+=1;goto B4bdc04;
case 0x4bdc06:goto L4bdc06;
case 0x4bdc07:c.instructions+=2;goto B4bdc07;
case 0x4bdc09:c.instructions+=1;goto B4bdc09;
case 0x4bdc0b:goto L4bdc0b;
case 0x4bdc0c:c.instructions+=5;goto B4bdc0c;
case 0x4bdc0d:c.instructions+=4;goto B4bdc0d;
case 0x4bdc0e:c.instructions+=3;goto B4bdc0e;
case 0x4bdc0f:c.instructions+=2;goto B4bdc0f;
case 0x4bdc15:c.instructions+=1;goto B4bdc15;
case 0x4bdc18:goto L4bdc18;
case 0x4bdc1a:c.instructions+=1;goto B4bdc1a;
case 0x4bdc1c:goto L4bdc1c;
case 0x4bdc1e:goto L4bdc1e;
case 0x4bdc1f:c.instructions+=5;goto B4bdc1f;
case 0x4bdc20:c.instructions+=4;goto B4bdc20;
case 0x4bdc21:c.instructions+=3;goto B4bdc21;
case 0x4bdc22:c.instructions+=2;goto B4bdc22;
case 0x4bdc28:c.instructions+=1;goto B4bdc28;
case 0x4bdc30:goto L4bdc30;
case 0x4bdc31:c.instructions+=4;goto B4bdc31;
case 0x4bdc33:c.instructions+=3;goto B4bdc33;
case 0x4bdc39:c.instructions+=2;goto B4bdc39;
case 0x4bdc3b:c.instructions+=1;goto B4bdc3b;
case 0x4bdc41:goto L4bdc41;
case 0x4bdc42:c.instructions+=6;goto B4bdc42;
case 0x4bdc43:c.instructions+=5;goto B4bdc43;
case 0x4bdc44:c.instructions+=4;goto B4bdc44;
case 0x4bdc4a:c.instructions+=3;goto B4bdc4a;
case 0x4bdc4b:c.instructions+=2;goto B4bdc4b;
case 0x4bdc4d:c.instructions+=1;goto B4bdc4d;
case 0x4bdc52:goto L4bdc52;
case 0x4bdc59:c.instructions+=5;goto B4bdc59;
case 0x4bdc5c:c.instructions+=4;goto B4bdc5c;
case 0x4bdc5e:c.instructions+=3;goto B4bdc5e;
case 0x4bdc60:c.instructions+=2;goto B4bdc60;
case 0x4bdc62:c.instructions+=1;goto B4bdc62;
case 0x4bdc64:goto L4bdc64;
case 0x4bdc67:c.instructions+=1;goto B4bdc67;
case 0x4bdc69:goto L4bdc69;
case 0x4bdc6f:c.instructions+=3;goto B4bdc6f;
case 0x4bdc70:c.instructions+=2;goto B4bdc70;
case 0x4bdc72:c.instructions+=1;goto B4bdc72;
case 0x4bdc74:goto L4bdc74;
case 0x4bdc75:c.instructions+=2;goto B4bdc75;
case 0x4bdc77:c.instructions+=1;goto B4bdc77;
case 0x4bdc79:goto L4bdc79;
case 0x4bdc7b:c.instructions+=3;goto B4bdc7b;
case 0x4bdc7d:c.instructions+=2;goto B4bdc7d;
case 0x4bdc7f:c.instructions+=1;goto B4bdc7f;
case 0x4bdc81:goto L4bdc81;
case 0x4bdc83:c.instructions+=3;goto B4bdc83;
case 0x4bdc84:c.instructions+=2;goto B4bdc84;
case 0x4bdc86:c.instructions+=1;goto B4bdc86;
case 0x4bdc88:goto L4bdc88;
case 0x4bdc89:c.instructions+=2;goto B4bdc89;
case 0x4bdc8c:c.instructions+=1;goto B4bdc8c;
case 0x4bdc8e:goto L4bdc8e;
case 0x4bdc90:c.instructions+=1;goto B4bdc90;
case 0x4bdc92:goto L4bdc92;
case 0x4bdc94:c.instructions+=7;goto B4bdc94;
case 0x4bdc95:c.instructions+=6;goto B4bdc95;
case 0x4bdc96:c.instructions+=5;goto B4bdc96;
case 0x4bdc97:c.instructions+=4;goto B4bdc97;
case 0x4bdc98:c.instructions+=3;goto B4bdc98;
case 0x4bdc9e:c.instructions+=2;goto B4bdc9e;
case 0x4bdca1:c.instructions+=1;goto B4bdca1;
case 0x4bdca6:goto L4bdca6;
case 0x4bdca7:c.instructions+=1;goto B4bdca7;
case 0x4bdcac:goto L4bdcac;
case 0x4bdcb2:c.instructions+=7;goto B4bdcb2;
case 0x4bdcb9:c.instructions+=6;goto B4bdcb9;
case 0x4bdcbf:c.instructions+=5;goto B4bdcbf;
case 0x4bdcc2:c.instructions+=4;goto B4bdcc2;
case 0x4bdcc5:c.instructions+=3;goto B4bdcc5;
case 0x4bdccb:c.instructions+=2;goto B4bdccb;
case 0x4bdccd:c.instructions+=1;goto B4bdccd;
case 0x4bdccf:goto L4bdccf;
case 0x4bdcd1:c.instructions+=1;goto B4bdcd1;
case 0x4bdcd6:goto L4bdcd6;
case 0x4bdcd8:goto L4bdcd8;
case 0x4bdcda:c.instructions+=1;goto B4bdcda;
case 0x4bdcdf:goto L4bdcdf;
case 0x4bdce1:c.instructions+=3;goto B4bdce1;
case 0x4bdce3:c.instructions+=2;goto B4bdce3;
case 0x4bdce5:c.instructions+=1;goto B4bdce5;
case 0x4bdcea:goto L4bdcea;
case 0x4bdcec:c.instructions+=3;goto B4bdcec;
case 0x4bdcee:c.instructions+=2;goto B4bdcee;
case 0x4bdcf0:c.instructions+=1;goto B4bdcf0;
case 0x4bdcf5:goto L4bdcf5;
case 0x4bdcfb:c.instructions+=6;goto B4bdcfb;
case 0x4bdd01:c.instructions+=5;goto B4bdd01;
case 0x4bdd03:c.instructions+=4;goto B4bdd03;
case 0x4bdd05:c.instructions+=3;goto B4bdd05;
case 0x4bdd06:c.instructions+=2;goto B4bdd06;
case 0x4bdd09:c.instructions+=1;goto B4bdd09;
case 0x4bdd0b:goto L4bdd0b;
case 0x4bdd10:goto L4bdd10;
case 0x4bdd11:c.instructions+=4;goto B4bdd11;
case 0x4bdd12:c.instructions+=3;goto B4bdd12;
case 0x4bdd14:c.instructions+=2;goto B4bdd14;
case 0x4bdd16:c.instructions+=1;goto B4bdd16;
case 0x4bdd1b:goto L4bdd1b;
case 0x4bdd1c:c.instructions+=2;goto B4bdd1c;
case 0x4bdd1d:c.instructions+=1;goto B4bdd1d;
case 0x4bdd1e:goto L4bdd1e;
case 0x4bdd1f:c.instructions+=1;goto B4bdd1f;
case 0x4bdd20:goto L4bdd20;
case 0x4bdd21:c.instructions+=6;goto B4bdd21;
case 0x4bdd22:c.instructions+=5;goto B4bdd22;
case 0x4bdd26:c.instructions+=4;goto B4bdd26;
case 0x4bdd29:c.instructions+=3;goto B4bdd29;
case 0x4bdd2a:c.instructions+=2;goto B4bdd2a;
case 0x4bdd2c:c.instructions+=1;goto B4bdd2c;
case 0x4bdd2e:goto L4bdd2e;
case 0x4bdd30:goto L4bdd30;
case 0x4bdd31:c.instructions+=2;goto B4bdd31;
case 0x4bdd33:c.instructions+=1;goto B4bdd33;
case 0x4bdd38:goto L4bdd38;
case 0x4bdd3a:c.instructions+=3;goto B4bdd3a;
case 0x4bdd3d:c.instructions+=2;goto B4bdd3d;
case 0x4bdd42:c.instructions+=1;goto B4bdd42;
case 0x4bdd44:goto L4bdd44;
case 0x4bdd45:c.instructions+=3;goto B4bdd45;
case 0x4bdd46:c.instructions+=2;goto B4bdd46;
case 0x4bdd48:c.instructions+=1;goto B4bdd48;
case 0x4bdd4d:goto L4bdd4d;
case 0x4bdd50:c.instructions+=3;goto B4bdd50;
case 0x4bdd52:c.instructions+=2;goto B4bdd52;
case 0x4bdd54:c.instructions+=1;goto B4bdd54;
case 0x4bdd56:goto L4bdd56;
case 0x4bdd59:c.instructions+=3;goto B4bdd59;
case 0x4bdd5a:c.instructions+=2;goto B4bdd5a;
case 0x4bdd5c:c.instructions+=1;goto B4bdd5c;
case 0x4bdd5e:goto L4bdd5e;
case 0x4bdd61:c.instructions+=1;goto B4bdd61;
case 0x4bdd63:goto L4bdd63;
case 0x4bdd65:c.instructions+=1;goto B4bdd65;
case 0x4bdd6a:goto L4bdd6a;
case 0x4bdd6b:c.instructions+=3;goto B4bdd6b;
case 0x4bdd6c:c.instructions+=2;goto B4bdd6c;
case 0x4bdd6d:c.instructions+=1;goto B4bdd6d;
case 0x4bdd70:goto L4bdd70;
case 0x4bdd76:c.instructions+=2;goto B4bdd76;
case 0x4bdd7c:c.instructions+=1;goto B4bdd7c;
case 0x4bdd7e:goto L4bdd7e;
case 0x4bdd7f:c.instructions+=1;goto B4bdd7f;
case 0x4bdd85:goto L4bdd85;
case 0x4bdd90:goto L4bdd90;
case 0x4bdd96:c.instructions+=2;goto B4bdd96;
case 0x4bdd99:c.instructions+=1;goto B4bdd99;
case 0x4bdd9b:goto L4bdd9b;
case 0x4bdd9c:c.instructions+=1;goto B4bdd9c;
case 0x4bdda2:goto L4bdda2;
case 0x4bddb0:goto L4bddb0;
case 0x4bddb8:c.instructions+=1;goto B4bddb8;
case 0x4bddba:goto L4bddba;
case 0x4bddbe:c.instructions+=4;goto B4bddbe;
case 0x4bddc0:c.instructions+=3;goto B4bddc0;
case 0x4bddc5:c.instructions+=2;goto B4bddc5;
case 0x4bddc6:c.instructions+=1;goto B4bddc6;
case 0x4bddcb:goto L4bddcb;
case 0x4bddce:goto L4bddce;
case 0x4bdde0:goto L4bdde0;
case 0x4bdde8:c.instructions+=1;goto B4bdde8;
case 0x4bddea:goto L4bddea;
case 0x4bddee:c.instructions+=4;goto B4bddee;
case 0x4bddf0:c.instructions+=3;goto B4bddf0;
case 0x4bddf5:c.instructions+=2;goto B4bddf5;
case 0x4bddf6:c.instructions+=1;goto B4bddf6;
case 0x4bddfb:goto L4bddfb;
case 0x4bddfe:goto L4bddfe;
case 0x4bde10:goto L4bde10;
case 0x4bde18:c.instructions+=1;goto B4bde18;
case 0x4bde1a:goto L4bde1a;
case 0x4bde1e:c.instructions+=4;goto B4bde1e;
case 0x4bde20:c.instructions+=3;goto B4bde20;
case 0x4bde25:c.instructions+=2;goto B4bde25;
case 0x4bde26:c.instructions+=1;goto B4bde26;
case 0x4bde2b:goto L4bde2b;
case 0x4bde2e:goto L4bde2e;
case 0x4bde40:goto L4bde40;
case 0x4bde42:c.instructions+=13;goto B4bde42;
case 0x4bde47:c.instructions+=12;goto B4bde47;
case 0x4bde4d:c.instructions+=11;goto B4bde4d;
case 0x4bde4e:c.instructions+=10;goto B4bde4e;
case 0x4bde55:c.instructions+=9;goto B4bde55;
case 0x4bde56:c.instructions+=8;goto B4bde56;
case 0x4bde57:c.instructions+=7;goto B4bde57;
case 0x4bde58:c.instructions+=6;goto B4bde58;
case 0x4bde59:c.instructions+=5;goto B4bde59;
case 0x4bde5b:c.instructions+=4;goto B4bde5b;
case 0x4bde5e:c.instructions+=3;goto B4bde5e;
case 0x4bde63:c.instructions+=2;goto B4bde63;
case 0x4bde68:c.instructions+=1;goto B4bde68;
case 0x4bde6d:goto L4bde6d;
case 0x4bde6e:c.instructions+=2;goto B4bde6e;
case 0x4bde6f:c.instructions+=1;goto B4bde6f;
case 0x4bde74:goto L4bde74;
case 0x4bde77:c.instructions+=2;goto B4bde77;
case 0x4bde78:c.instructions+=1;goto B4bde78;
case 0x4bde7d:goto L4bde7d;
case 0x4bde7f:c.instructions+=1;goto B4bde7f;
case 0x4bde84:goto L4bde84;
case 0x4bde86:c.instructions+=5;goto B4bde86;
case 0x4bde89:c.instructions+=4;goto B4bde89;
case 0x4bde8d:c.instructions+=3;goto B4bde8d;
case 0x4bde8f:c.instructions+=2;goto B4bde8f;
case 0x4bde97:c.instructions+=1;goto B4bde97;
case 0x4bde99:goto L4bde99;
case 0x4bde9b:c.instructions+=4;goto B4bde9b;
case 0x4bdea0:c.instructions+=3;goto B4bdea0;
case 0x4bdea5:c.instructions+=2;goto B4bdea5;
case 0x4bdea7:c.instructions+=1;goto B4bdea7;
case 0x4bdeac:goto L4bdeac;
case 0x4bdeb2:c.instructions+=1;goto B4bdeb2;
case 0x4bdeb4:goto L4bdeb4;
case 0x4bdeb6:goto L4bdeb6;
case 0x4bdeb8:c.instructions+=5;goto B4bdeb8;
case 0x4bdebb:c.instructions+=4;goto B4bdebb;
case 0x4bdebc:c.instructions+=3;goto B4bdebc;
case 0x4bdebe:c.instructions+=2;goto B4bdebe;
case 0x4bdec2:c.instructions+=1;goto B4bdec2;
case 0x4bdec5:goto L4bdec5;
case 0x4bdec7:c.instructions+=1;goto B4bdec7;
case 0x4bdecc:goto L4bdecc;
case 0x4bdece:c.instructions+=5;goto B4bdece;
case 0x4bded1:c.instructions+=4;goto B4bded1;
case 0x4bded5:c.instructions+=3;goto B4bded5;
case 0x4bded7:c.instructions+=2;goto B4bded7;
case 0x4bdedf:c.instructions+=1;goto B4bdedf;
case 0x4bdee1:goto L4bdee1;
case 0x4bdee3:c.instructions+=4;goto B4bdee3;
case 0x4bdee8:c.instructions+=3;goto B4bdee8;
case 0x4bdeed:c.instructions+=2;goto B4bdeed;
case 0x4bdeef:c.instructions+=1;goto B4bdeef;
case 0x4bdef4:goto L4bdef4;
case 0x4bdefa:c.instructions+=1;goto B4bdefa;
case 0x4bdefc:goto L4bdefc;
case 0x4bdefe:goto L4bdefe;
case 0x4bdf00:c.instructions+=4;goto B4bdf00;
case 0x4bdf01:c.instructions+=3;goto B4bdf01;
case 0x4bdf03:c.instructions+=2;goto B4bdf03;
case 0x4bdf07:c.instructions+=1;goto B4bdf07;
case 0x4bdf0a:goto L4bdf0a;
case 0x4bdf0c:c.instructions+=1;goto B4bdf0c;
case 0x4bdf11:goto L4bdf11;
case 0x4bdf13:c.instructions+=5;goto B4bdf13;
case 0x4bdf16:c.instructions+=4;goto B4bdf16;
case 0x4bdf1a:c.instructions+=3;goto B4bdf1a;
case 0x4bdf1c:c.instructions+=2;goto B4bdf1c;
case 0x4bdf24:c.instructions+=1;goto B4bdf24;
case 0x4bdf26:goto L4bdf26;
case 0x4bdf28:c.instructions+=4;goto B4bdf28;
case 0x4bdf2d:c.instructions+=3;goto B4bdf2d;
case 0x4bdf32:c.instructions+=2;goto B4bdf32;
case 0x4bdf34:c.instructions+=1;goto B4bdf34;
case 0x4bdf39:goto L4bdf39;
case 0x4bdf3f:c.instructions+=1;goto B4bdf3f;
case 0x4bdf41:goto L4bdf41;
case 0x4bdf43:goto L4bdf43;
case 0x4bdf45:c.instructions+=4;goto B4bdf45;
case 0x4bdf46:c.instructions+=3;goto B4bdf46;
case 0x4bdf48:c.instructions+=2;goto B4bdf48;
case 0x4bdf4c:c.instructions+=1;goto B4bdf4c;
case 0x4bdf4f:goto L4bdf4f;
case 0x4bdf52:c.instructions+=4;goto B4bdf52;
case 0x4bdf55:c.instructions+=3;goto B4bdf55;
case 0x4bdf58:c.instructions+=2;goto B4bdf58;
case 0x4bdf59:c.instructions+=1;goto B4bdf59;
case 0x4bdf5e:goto L4bdf5e;
case 0x4bdf61:c.instructions+=3;goto B4bdf61;
case 0x4bdf62:c.instructions+=2;goto B4bdf62;
case 0x4bdf64:c.instructions+=1;goto B4bdf64;
case 0x4bdf67:goto L4bdf67;
case 0x4bdf69:c.instructions+=2;goto B4bdf69;
case 0x4bdf6b:c.instructions+=1;goto B4bdf6b;
case 0x4bdf6e:goto L4bdf6e;
case 0x4bdf72:c.instructions+=6;goto B4bdf72;
case 0x4bdf73:c.instructions+=5;goto B4bdf73;
case 0x4bdf74:c.instructions+=4;goto B4bdf74;
case 0x4bdf75:c.instructions+=3;goto B4bdf75;
case 0x4bdf7c:c.instructions+=2;goto B4bdf7c;
case 0x4bdf7f:c.instructions+=1;goto B4bdf7f;
case 0x4bdf80:goto L4bdf80;
case 0x4bdf84:c.instructions+=4;goto B4bdf84;
case 0x4bdf89:c.instructions+=3;goto B4bdf89;
case 0x4bdf8a:c.instructions+=2;goto B4bdf8a;
case 0x4bdf8c:c.instructions+=1;goto B4bdf8c;
case 0x4bdf92:goto L4bdf92;
case 0x4bdf98:goto L4bdf98;
case 0x4bdf9d:c.instructions+=1;goto B4bdf9d;
case 0x4bdfa3:goto L4bdfa3;
case 0x4bdfa5:goto L4bdfa5;
case 0x4bdfaa:c.instructions+=1;goto B4bdfaa;
case 0x4bdfac:goto L4bdfac;
case 0x4bdfb1:c.instructions+=1;goto B4bdfb1;
case 0x4bdfb7:goto L4bdfb7;
case 0x4bdfb9:c.instructions+=4;goto B4bdfb9;
case 0x4bdfbe:c.instructions+=3;goto B4bdfbe;
case 0x4bdfc3:c.instructions+=2;goto B4bdfc3;
case 0x4bdfc8:c.instructions+=1;goto B4bdfc8;
case 0x4bdfcd:goto L4bdfcd;
case 0x4bdfcf:c.instructions+=4;goto B4bdfcf;
case 0x4bdfd4:c.instructions+=3;goto B4bdfd4;
case 0x4bdfd9:c.instructions+=2;goto B4bdfd9;
case 0x4bdfde:c.instructions+=1;goto B4bdfde;
case 0x4bdfe3:goto L4bdfe3;
case 0x4bdfe6:c.instructions+=3;goto B4bdfe6;
case 0x4bdfe9:c.instructions+=2;goto B4bdfe9;
case 0x4bdfeb:c.instructions+=1;goto B4bdfeb;
case 0x4bdff0:goto L4bdff0;
case 0x4bdff2:c.instructions+=2;goto B4bdff2;
case 0x4bdff4:c.instructions+=1;goto B4bdff4;
case 0x4bdff9:goto L4bdff9;
case 0x4bdffa:c.instructions+=1;goto B4bdffa;
case 0x4bdffd:goto L4bdffd;
default:missing_instruction(c.pc);}
B4bd005:L4bd005:{c.instructions+=4;NFSU2_TR(0x4bd005);
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
B4bd007:{NFSU2_TR(0x4bd007);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd008:{NFSU2_TR(0x4bd008);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd009:{NFSU2_TR(0x4bd009);
if(r1(R+518)){{goto L4bd080;}}
}
B4bd00b:L4bd00b:{c.instructions+=4;NFSU2_TR(0x4bd00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd011:{NFSU2_TR(0x4bd011);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B4bd014:{NFSU2_TR(0x4bd014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd015:{NFSU2_TR(0x4bd015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd01aull));
TAIL_STATIC(0x582b60u,582);
}
B4bd01a:L4bd01a:{c.instructions+=2;NFSU2_TR(0x4bd01a);
__builtin_memmove((R+4),(R+0),4);
}
B4bd01c:{NFSU2_TR(0x4bd01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd021ull));
TAIL_STATIC(0x582bb0u,582);
}
B4bd021:L4bd021:{c.instructions+=4;NFSU2_TR(0x4bd021);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd022:{NFSU2_TR(0x4bd022);
u8 U[4];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bd029:{NFSU2_TR(0x4bd029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd02a:{NFSU2_TR(0x4bd02a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd02full));
TAIL_STATIC(0x49e870u,49e);
}
B4bd02f:L4bd02f:{c.instructions+=3;NFSU2_TR(0x4bd02f);
__builtin_memmove((R+24),(R+0),4);
}
B4bd031:{NFSU2_TR(0x4bd031);
w4(R+4,u32(0x9full));
}
B4bd036:{NFSU2_TR(0x4bd036);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd03a:L4bd03a:{c.instructions+=1;NFSU2_TR(0x4bd03a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bd03c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bd03au);}goto L4bd03a;}
}
B4bd03c:L4bd03c:{c.instructions+=4;NFSU2_TR(0x4bd03c);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd040:{NFSU2_TR(0x4bd040);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bd043:{NFSU2_TR(0x4bd043);
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
B4bd045:{NFSU2_TR(0x4bd045);
if(r1(R+518)){{goto L4bd080;}}
}
B4bd047:L4bd047:{c.instructions+=3;NFSU2_TR(0x4bd047);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd04b:{NFSU2_TR(0x4bd04b);
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
B4bd04d:{NFSU2_TR(0x4bd04d);
if(r1(R+518)){{goto L4bd080;}}
}
B4bd04f:L4bd04f:{c.instructions+=1;NFSU2_TR(0x4bd04f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd054ull));
TAIL_STATIC(0x582b60u,582);
}
B4bd054:L4bd054:{c.instructions+=5;NFSU2_TR(0x4bd054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd05a:{NFSU2_TR(0x4bd05a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd05e:{NFSU2_TR(0x4bd05e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd05f:{NFSU2_TR(0x4bd05f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd060:{NFSU2_TR(0x4bd060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd065ull));
TAIL_STATIC(0x73f0a0u,73f);
}
B4bd065:L4bd065:{c.instructions+=3;NFSU2_TR(0x4bd065);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bd068:{NFSU2_TR(0x4bd068);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd06a:{NFSU2_TR(0x4bd06a);
if(r1(R+518)){{goto L4bd079;}}
}
B4bd06c:L4bd06c:{c.instructions+=4;NFSU2_TR(0x4bd06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd06f:{NFSU2_TR(0x4bd06f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd070:{NFSU2_TR(0x4bd070);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd071:{NFSU2_TR(0x4bd071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd076ull));
TAIL_STATIC(0x49e810u,49e);
}
B4bd076:L4bd076:{c.instructions+=1;NFSU2_TR(0x4bd076);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bd079:L4bd079:{c.instructions+=2;NFSU2_TR(0x4bd079);
__builtin_memmove((R+4),(R+12),4);
}
B4bd07b:{NFSU2_TR(0x4bd07b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd080ull));
TAIL_STATIC(0x4bcf00u,4bc);
}
B4bd080:L4bd080:{c.instructions+=6;NFSU2_TR(0x4bd080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd081:{NFSU2_TR(0x4bd081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd082:{NFSU2_TR(0x4bd082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd083:{NFSU2_TR(0x4bd083);
__builtin_memmove((R+16),(R+20),4);
}
B4bd085:{NFSU2_TR(0x4bd085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd086:{NFSU2_TR(0x4bd086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd090:L4bd090:{c.instructions+=8;NFSU2_TR(0x4bd090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x27cull))));
}
B4bd096:{NFSU2_TR(0x4bd096);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd097:{NFSU2_TR(0x4bd097);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd098:{NFSU2_TR(0x4bd098);
__builtin_memmove((R+12),(R+4),4);
}
B4bd09a:{NFSU2_TR(0x4bd09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd0a0:{NFSU2_TR(0x4bd0a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0a1:{NFSU2_TR(0x4bd0a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0a2:{NFSU2_TR(0x4bd0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd0a7ull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd0a7:L4bd0a7:{c.instructions+=3;NFSU2_TR(0x4bd0a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd0aa:{NFSU2_TR(0x4bd0aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd0ac:{NFSU2_TR(0x4bd0ac);
if(r1(R+518)){{goto L4bd0de;}}
}
B4bd0ae:L4bd0ae:{c.instructions+=4;NFSU2_TR(0x4bd0ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd0b1:{NFSU2_TR(0x4bd0b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0b2:{NFSU2_TR(0x4bd0b2);
u8 U[4];
w4(U+0,u32(0xc519bfc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0b7:{NFSU2_TR(0x4bd0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd0bcull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd0bc:L4bd0bc:{c.instructions+=6;NFSU2_TR(0x4bd0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd0bf:{NFSU2_TR(0x4bd0bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0c1:{NFSU2_TR(0x4bd0c1);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0c6:{NFSU2_TR(0x4bd0c6);
u8 U[4];
w4(U+0,u32(0x794ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0cb:{NFSU2_TR(0x4bd0cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0cc:{NFSU2_TR(0x4bd0cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd0d1ull));
TAIL_STATIC(0x5426c0u,542);
}
B4bd0d1:L4bd0d1:{c.instructions+=6;NFSU2_TR(0x4bd0d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd0d4:{NFSU2_TR(0x4bd0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd0d5:{NFSU2_TR(0x4bd0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd0d6:{NFSU2_TR(0x4bd0d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd0d7:{NFSU2_TR(0x4bd0d7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd0dd:{NFSU2_TR(0x4bd0dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd0de:L4bd0de:{c.instructions+=3;NFSU2_TR(0x4bd0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd0e4:{NFSU2_TR(0x4bd0e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0e5:{NFSU2_TR(0x4bd0e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd0eaull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd0ea:L4bd0ea:{c.instructions+=3;NFSU2_TR(0x4bd0ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd0ed:{NFSU2_TR(0x4bd0ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd0ef:{NFSU2_TR(0x4bd0ef);
if(r1(R+518)){{goto L4bd121;}}
}
B4bd0f1:L4bd0f1:{c.instructions+=4;NFSU2_TR(0x4bd0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd0f4:{NFSU2_TR(0x4bd0f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0f5:{NFSU2_TR(0x4bd0f5);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd0fa:{NFSU2_TR(0x4bd0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd0ffull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd0ff:L4bd0ff:{c.instructions+=6;NFSU2_TR(0x4bd0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd102:{NFSU2_TR(0x4bd102);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd104:{NFSU2_TR(0x4bd104);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd109:{NFSU2_TR(0x4bd109);
u8 U[4];
w4(U+0,u32(0x794ee8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd10e:{NFSU2_TR(0x4bd10e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd10f:{NFSU2_TR(0x4bd10f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd114ull));
TAIL_STATIC(0x5426c0u,542);
}
B4bd114:L4bd114:{c.instructions+=6;NFSU2_TR(0x4bd114);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd117:{NFSU2_TR(0x4bd117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd118:{NFSU2_TR(0x4bd118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd119:{NFSU2_TR(0x4bd119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd11a:{NFSU2_TR(0x4bd11a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd120:{NFSU2_TR(0x4bd120);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd121:L4bd121:{c.instructions+=3;NFSU2_TR(0x4bd121);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd127:{NFSU2_TR(0x4bd127);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd128:{NFSU2_TR(0x4bd128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd12dull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd12d:L4bd12d:{c.instructions+=3;NFSU2_TR(0x4bd12d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd130:{NFSU2_TR(0x4bd130);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd132:{NFSU2_TR(0x4bd132);
if(r1(R+518)){{goto L4bd164;}}
}
B4bd134:L4bd134:{c.instructions+=4;NFSU2_TR(0x4bd134);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd137:{NFSU2_TR(0x4bd137);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd138:{NFSU2_TR(0x4bd138);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd13d:{NFSU2_TR(0x4bd13d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd142ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd142:L4bd142:{c.instructions+=6;NFSU2_TR(0x4bd142);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd145:{NFSU2_TR(0x4bd145);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd147:{NFSU2_TR(0x4bd147);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd14c:{NFSU2_TR(0x4bd14c);
u8 U[4];
w4(U+0,u32(0x794ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd151:{NFSU2_TR(0x4bd151);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd152:{NFSU2_TR(0x4bd152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd157ull));
TAIL_STATIC(0x5426c0u,542);
}
B4bd157:L4bd157:{c.instructions+=6;NFSU2_TR(0x4bd157);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd15a:{NFSU2_TR(0x4bd15a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd15b:{NFSU2_TR(0x4bd15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd15c:{NFSU2_TR(0x4bd15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd15d:{NFSU2_TR(0x4bd15d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd163:{NFSU2_TR(0x4bd163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd164:L4bd164:{c.instructions+=3;NFSU2_TR(0x4bd164);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd16a:{NFSU2_TR(0x4bd16a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd16b:{NFSU2_TR(0x4bd16b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd170ull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd170:L4bd170:{c.instructions+=3;NFSU2_TR(0x4bd170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd173:{NFSU2_TR(0x4bd173);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd175:{NFSU2_TR(0x4bd175);
if(r1(R+518)){{goto L4bd1a7;}}
}
B4bd177:L4bd177:{c.instructions+=4;NFSU2_TR(0x4bd177);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd17a:{NFSU2_TR(0x4bd17a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd17b:{NFSU2_TR(0x4bd17b);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd180:{NFSU2_TR(0x4bd180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd185ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd185:L4bd185:{c.instructions+=6;NFSU2_TR(0x4bd185);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd188:{NFSU2_TR(0x4bd188);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd18a:{NFSU2_TR(0x4bd18a);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd18f:{NFSU2_TR(0x4bd18f);
u8 U[4];
w4(U+0,u32(0x794ed4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd194:{NFSU2_TR(0x4bd194);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd195:{NFSU2_TR(0x4bd195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd19aull));
TAIL_STATIC(0x5426c0u,542);
}
B4bd19a:L4bd19a:{c.instructions+=6;NFSU2_TR(0x4bd19a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd19d:{NFSU2_TR(0x4bd19d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd19e:{NFSU2_TR(0x4bd19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd19f:{NFSU2_TR(0x4bd19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd1a0:{NFSU2_TR(0x4bd1a0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd1a6:{NFSU2_TR(0x4bd1a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd1a7:L4bd1a7:{c.instructions+=3;NFSU2_TR(0x4bd1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd1ad:{NFSU2_TR(0x4bd1ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1ae:{NFSU2_TR(0x4bd1ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd1b3ull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd1b3:L4bd1b3:{c.instructions+=3;NFSU2_TR(0x4bd1b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd1b6:{NFSU2_TR(0x4bd1b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd1b8:{NFSU2_TR(0x4bd1b8);
if(r1(R+518)){{goto L4bd1ea;}}
}
B4bd1ba:L4bd1ba:{c.instructions+=4;NFSU2_TR(0x4bd1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd1bd:{NFSU2_TR(0x4bd1bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1be:{NFSU2_TR(0x4bd1be);
u8 U[4];
w4(U+0,u32(0x5073ef13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1c3:{NFSU2_TR(0x4bd1c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd1c8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd1c8:L4bd1c8:{c.instructions+=6;NFSU2_TR(0x4bd1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd1cb:{NFSU2_TR(0x4bd1cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1cd:{NFSU2_TR(0x4bd1cd);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1d2:{NFSU2_TR(0x4bd1d2);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1d7:{NFSU2_TR(0x4bd1d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1d8:{NFSU2_TR(0x4bd1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd1ddull));
TAIL_STATIC(0x537c00u,537);
}
B4bd1dd:L4bd1dd:{c.instructions+=6;NFSU2_TR(0x4bd1dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd1e0:{NFSU2_TR(0x4bd1e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd1e1:{NFSU2_TR(0x4bd1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd1e2:{NFSU2_TR(0x4bd1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd1e3:{NFSU2_TR(0x4bd1e3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd1e9:{NFSU2_TR(0x4bd1e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd1ea:L4bd1ea:{c.instructions+=3;NFSU2_TR(0x4bd1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd1f0:{NFSU2_TR(0x4bd1f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd1f1:{NFSU2_TR(0x4bd1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd1f6ull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd1f6:L4bd1f6:{c.instructions+=3;NFSU2_TR(0x4bd1f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd1f9:{NFSU2_TR(0x4bd1f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd1fb:{NFSU2_TR(0x4bd1fb);
if(r1(R+518)){{goto L4bd22d;}}
}
B4bd1fd:L4bd1fd:{c.instructions+=4;NFSU2_TR(0x4bd1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd200:{NFSU2_TR(0x4bd200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd201:{NFSU2_TR(0x4bd201);
u8 U[4];
w4(U+0,u32(0xd9feec59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd206:{NFSU2_TR(0x4bd206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd20bull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd20b:L4bd20b:{c.instructions+=6;NFSU2_TR(0x4bd20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd20e:{NFSU2_TR(0x4bd20e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd210:{NFSU2_TR(0x4bd210);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd215:{NFSU2_TR(0x4bd215);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd21a:{NFSU2_TR(0x4bd21a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd21b:{NFSU2_TR(0x4bd21b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd220ull));
TAIL_STATIC(0x537c00u,537);
}
B4bd220:L4bd220:{c.instructions+=6;NFSU2_TR(0x4bd220);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd223:{NFSU2_TR(0x4bd223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd224:{NFSU2_TR(0x4bd224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd225:{NFSU2_TR(0x4bd225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd226:{NFSU2_TR(0x4bd226);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd22c:{NFSU2_TR(0x4bd22c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd22d:L4bd22d:{c.instructions+=3;NFSU2_TR(0x4bd22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd233:{NFSU2_TR(0x4bd233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd234:{NFSU2_TR(0x4bd234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd239ull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd239:L4bd239:{c.instructions+=3;NFSU2_TR(0x4bd239);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd23c:{NFSU2_TR(0x4bd23c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd23e:{NFSU2_TR(0x4bd23e);
if(r1(R+518)){{goto L4bd270;}}
}
B4bd240:L4bd240:{c.instructions+=4;NFSU2_TR(0x4bd240);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd243:{NFSU2_TR(0x4bd243);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd244:{NFSU2_TR(0x4bd244);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd249:{NFSU2_TR(0x4bd249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd24eull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd24e:L4bd24e:{c.instructions+=6;NFSU2_TR(0x4bd24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd251:{NFSU2_TR(0x4bd251);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd253:{NFSU2_TR(0x4bd253);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd258:{NFSU2_TR(0x4bd258);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd25d:{NFSU2_TR(0x4bd25d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd25e:{NFSU2_TR(0x4bd25e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd263ull));
TAIL_STATIC(0x537c00u,537);
}
B4bd263:L4bd263:{c.instructions+=6;NFSU2_TR(0x4bd263);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd266:{NFSU2_TR(0x4bd266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd267:{NFSU2_TR(0x4bd267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd268:{NFSU2_TR(0x4bd268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd269:{NFSU2_TR(0x4bd269);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd26f:{NFSU2_TR(0x4bd26f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd270:L4bd270:{c.instructions+=3;NFSU2_TR(0x4bd270);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd276:{NFSU2_TR(0x4bd276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd277:{NFSU2_TR(0x4bd277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd27cull));
TAIL_STATIC(0x52d100u,52d);
}
B4bd27c:L4bd27c:{c.instructions+=3;NFSU2_TR(0x4bd27c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd27f:{NFSU2_TR(0x4bd27f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd281:{NFSU2_TR(0x4bd281);
if(r1(R+518)){{goto L4bd2b3;}}
}
B4bd283:L4bd283:{c.instructions+=4;NFSU2_TR(0x4bd283);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd286:{NFSU2_TR(0x4bd286);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd287:{NFSU2_TR(0x4bd287);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd28c:{NFSU2_TR(0x4bd28c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd291ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd291:L4bd291:{c.instructions+=6;NFSU2_TR(0x4bd291);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd294:{NFSU2_TR(0x4bd294);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd296:{NFSU2_TR(0x4bd296);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd29b:{NFSU2_TR(0x4bd29b);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd2a0:{NFSU2_TR(0x4bd2a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd2a1:{NFSU2_TR(0x4bd2a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd2a6ull));
TAIL_STATIC(0x537c00u,537);
}
B4bd2a6:L4bd2a6:{c.instructions+=6;NFSU2_TR(0x4bd2a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd2a9:{NFSU2_TR(0x4bd2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd2aa:{NFSU2_TR(0x4bd2aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd2ab:{NFSU2_TR(0x4bd2ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd2ac:{NFSU2_TR(0x4bd2ac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd2b2:{NFSU2_TR(0x4bd2b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd2b3:L4bd2b3:{c.instructions+=3;NFSU2_TR(0x4bd2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd2b9:{NFSU2_TR(0x4bd2b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd2bb:{NFSU2_TR(0x4bd2bb);
if(r1(R+518)){{goto L4bd305;}}
}
B4bd2bd:L4bd2bd:{c.instructions+=3;NFSU2_TR(0x4bd2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bd2c3:{NFSU2_TR(0x4bd2c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd2c6:{NFSU2_TR(0x4bd2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd2cbull));
TAIL_STATIC(0x54eb80u,54e);
}
B4bd2cb:L4bd2cb:{c.instructions+=5;NFSU2_TR(0x4bd2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd2d1:{NFSU2_TR(0x4bd2d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B4bd2d4:{NFSU2_TR(0x4bd2d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B4bd2d7:{NFSU2_TR(0x4bd2d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bd2d9:{NFSU2_TR(0x4bd2d9);
if(r1(R+518)){{goto L4bd305;}}
}
B4bd2db:L4bd2db:{c.instructions+=5;NFSU2_TR(0x4bd2db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd2dc:{NFSU2_TR(0x4bd2dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bd2e0:{NFSU2_TR(0x4bd2e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd2e1:{NFSU2_TR(0x4bd2e1);
__builtin_memmove((R+4),(R+12),4);
}
B4bd2e3:{NFSU2_TR(0x4bd2e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd2e8ull));
TAIL_STATIC(0x4a0f40u,4a0);
}
B4bd2e8:L4bd2e8:{c.instructions+=4;NFSU2_TR(0x4bd2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x27cull))));
}
B4bd2ee:{NFSU2_TR(0x4bd2ee);
__builtin_memmove((R+28),(R+16),4);
}
B4bd2f0:{NFSU2_TR(0x4bd2f0);
w4(R+4,u32(0x9full));
}
B4bd2f5:{NFSU2_TR(0x4bd2f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd2fc:L4bd2fc:{c.instructions+=1;NFSU2_TR(0x4bd2fc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bd2fe;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bd2fcu);}goto L4bd2fc;}
}
B4bd2fe:L4bd2fe:{c.instructions+=2;NFSU2_TR(0x4bd2fe);
__builtin_memmove((R+4),(R+12),4);
}
B4bd300:{NFSU2_TR(0x4bd300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd305ull));
TAIL_STATIC(0x4a15f0u,4a1);
}
B4bd305:L4bd305:{c.instructions+=5;NFSU2_TR(0x4bd305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd306:{NFSU2_TR(0x4bd306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd307:{NFSU2_TR(0x4bd307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd308:{NFSU2_TR(0x4bd308);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd30e:{NFSU2_TR(0x4bd30e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd310:L4bd310:{c.instructions+=12;NFSU2_TR(0x4bd310);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd312:{NFSU2_TR(0x4bd312);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd317:{NFSU2_TR(0x4bd317);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd31d:{NFSU2_TR(0x4bd31d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd31e:{NFSU2_TR(0x4bd31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd325:{NFSU2_TR(0x4bd325);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd326:{NFSU2_TR(0x4bd326);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd32a:{NFSU2_TR(0x4bd32a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd32b:{NFSU2_TR(0x4bd32b);
__builtin_memmove((R+24),(R+4),4);
}
B4bd32d:{NFSU2_TR(0x4bd32d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd32e:{NFSU2_TR(0x4bd32e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd332:{NFSU2_TR(0x4bd332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd337ull));
TAIL_STATIC(0x551de0u,551);
}
B4bd337:L4bd337:{c.instructions+=15;NFSU2_TR(0x4bd337);
u8 U[4];
w4(U+0,u32(0x794f00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4bd33d:{NFSU2_TR(0x4bd33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bd344:{NFSU2_TR(0x4bd344);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bd348:{NFSU2_TR(0x4bd348);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4bd34a:{NFSU2_TR(0x4bd34a);
__builtin_memmove(gp(0x836390),(R+4),4);
}
B4bd350:{NFSU2_TR(0x4bd350);
__builtin_memmove(gp(0x836394),(R+4),4);
}
B4bd356:{NFSU2_TR(0x4bd356);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd358:{NFSU2_TR(0x4bd358);
__builtin_memmove(gp(0x836398),(R+4),4);
}
B4bd35e:{NFSU2_TR(0x4bd35e);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd363:{NFSU2_TR(0x4bd363);
__builtin_memmove(gp(0x83639c),(R+4),4);
}
B4bd369:{NFSU2_TR(0x4bd369);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd36c:{NFSU2_TR(0x4bd36c);
u8 U[4];
w4(U+0,u32(0x7902b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd371:{NFSU2_TR(0x4bd371);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd372:{NFSU2_TR(0x4bd372);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bd37a:{NFSU2_TR(0x4bd37a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd37full));
TAIL_STATIC(0x5426c0u,542);
}
B4bd37f:L4bd37f:{c.instructions+=5;NFSU2_TR(0x4bd37f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bd382:{NFSU2_TR(0x4bd382);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd384:{NFSU2_TR(0x4bd384);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd386:{NFSU2_TR(0x4bd386);
u8 U[4];
w4(U+0,u32(0x22729437ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd38b:{NFSU2_TR(0x4bd38b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd390ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd390:L4bd390:{c.instructions+=7;NFSU2_TR(0x4bd390);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd393:{NFSU2_TR(0x4bd393);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd394:{NFSU2_TR(0x4bd394);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd399:{NFSU2_TR(0x4bd399);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd39b:{NFSU2_TR(0x4bd39b);
u8 U[4];
w4(U+0,u32(0x5b9d88b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd3a0:{NFSU2_TR(0x4bd3a0);
__builtin_memmove((R+4),(R+24),4);
}
B4bd3a2:{NFSU2_TR(0x4bd3a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd3a7ull));
TAIL_STATIC(0x555f80u,555);
}
B4bd3a7:L4bd3a7:{c.instructions+=6;NFSU2_TR(0x4bd3a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd3ab:{NFSU2_TR(0x4bd3ab);
__builtin_memmove((R+0),(R+24),4);
}
B4bd3ad:{NFSU2_TR(0x4bd3ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd3ae:{NFSU2_TR(0x4bd3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd3b5:{NFSU2_TR(0x4bd3b5);
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
B4bd3b8:{NFSU2_TR(0x4bd3b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd3c0:L4bd3c0:{c.instructions+=3;NFSU2_TR(0x4bd3c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd3c1:{NFSU2_TR(0x4bd3c1);
__builtin_memmove((R+24),(R+4),4);
}
B4bd3c3:{NFSU2_TR(0x4bd3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd3c8ull));
{goto L4bd3e0;}
}
B4bd3c8:L4bd3c8:{c.instructions+=2;NFSU2_TR(0x4bd3c8);
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
B4bd3cd:{NFSU2_TR(0x4bd3cd);
if(r1(R+518)){{goto L4bd3d8;}}
}
B4bd3cf:L4bd3cf:{c.instructions+=2;NFSU2_TR(0x4bd3cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd3d0:{NFSU2_TR(0x4bd3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd3d5ull));
TAIL_STATIC(0x575630u,575);
}
B4bd3d5:L4bd3d5:{c.instructions+=1;NFSU2_TR(0x4bd3d5);
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
B4bd3d8:L4bd3d8:{c.instructions+=3;NFSU2_TR(0x4bd3d8);
__builtin_memmove((R+0),(R+24),4);
}
B4bd3da:{NFSU2_TR(0x4bd3da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd3db:{NFSU2_TR(0x4bd3db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd3e0:L4bd3e0:{c.instructions+=2;NFSU2_TR(0x4bd3e0);
u8 U[4];
w4(U+0,u32(0x794f00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4bd3e6:{NFSU2_TR(0x4bd3e6);
TAIL_STATIC(0x510d40u,510);
}
B4bd3f0:L4bd3f0:{c.instructions+=3;NFSU2_TR(0x4bd3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd3f1:{NFSU2_TR(0x4bd3f1);
__builtin_memmove((R+24),(R+4),4);
}
B4bd3f3:{NFSU2_TR(0x4bd3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd3f8ull));
TAIL_STATIC(0x582b60u,582);
}
B4bd3f8:L4bd3f8:{c.instructions+=2;NFSU2_TR(0x4bd3f8);
__builtin_memmove((R+4),(R+0),4);
}
B4bd3fa:{NFSU2_TR(0x4bd3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd3ffull));
TAIL_STATIC(0x582e10u,582);
}
B4bd3ff:L4bd3ff:{c.instructions+=2;NFSU2_TR(0x4bd3ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bd402:{NFSU2_TR(0x4bd402);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4bd42d;}}
}
B4bd404:L4bd404:{c.instructions+=8;NFSU2_TR(0x4bd404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd407:{NFSU2_TR(0x4bd407);
u8 U[4];
w4(U+0,u32(0x6aa4c280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd40c:{NFSU2_TR(0x4bd40c);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd411:{NFSU2_TR(0x4bd411);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd416:{NFSU2_TR(0x4bd416);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd41b:{NFSU2_TR(0x4bd41b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd420:{NFSU2_TR(0x4bd420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd421:{NFSU2_TR(0x4bd421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd426ull));
TAIL_STATIC(0x558570u,558);
}
B4bd426:L4bd426:{c.instructions+=3;NFSU2_TR(0x4bd426);
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
B4bd429:{NFSU2_TR(0x4bd429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd42a:{NFSU2_TR(0x4bd42a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd42d:L4bd42d:{c.instructions+=1;NFSU2_TR(0x4bd42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd432ull));
TAIL_STATIC(0x582b60u,582);
}
B4bd432:L4bd432:{c.instructions+=7;NFSU2_TR(0x4bd432);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd436:{NFSU2_TR(0x4bd436);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd43c:{NFSU2_TR(0x4bd43c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd43d:{NFSU2_TR(0x4bd43d);
u8 U[4];
w4(U+0,u32(0x4ae6d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd442:{NFSU2_TR(0x4bd442);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd443:{NFSU2_TR(0x4bd443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd444:{NFSU2_TR(0x4bd444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd449ull));
TAIL_STATIC(0x73f9c0u,73f);
}
B4bd449:L4bd449:{c.instructions+=3;NFSU2_TR(0x4bd449);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bd44c:{NFSU2_TR(0x4bd44c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd44e:{NFSU2_TR(0x4bd44e);
if(r1(R+518)){{goto L4bd470;}}
}
B4bd450:L4bd450:{c.instructions+=3;NFSU2_TR(0x4bd450);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bd456:{NFSU2_TR(0x4bd456);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd458:{NFSU2_TR(0x4bd458);
if(r1(R+518)){{goto L4bd45f;}}
}
B4bd45a:L4bd45a:{c.instructions+=2;NFSU2_TR(0x4bd45a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd45d:{NFSU2_TR(0x4bd45d);
if(r1(R+518)){{goto L4bd481;}}
}
B4bd45f:L4bd45f:{c.instructions+=4;NFSU2_TR(0x4bd45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd462:{NFSU2_TR(0x4bd462);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd463:{NFSU2_TR(0x4bd463);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd464:{NFSU2_TR(0x4bd464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd469ull));
TAIL_STATIC(0x49e810u,49e);
}
B4bd469:L4bd469:{c.instructions+=3;NFSU2_TR(0x4bd469);
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
B4bd46c:{NFSU2_TR(0x4bd46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd46d:{NFSU2_TR(0x4bd46d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd470:L4bd470:{c.instructions+=4;NFSU2_TR(0x4bd470);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd475:{NFSU2_TR(0x4bd475);
u8 U[4];
w4(U+0,u32(0xa948a646ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd47a:{NFSU2_TR(0x4bd47a);
__builtin_memmove((R+4),(R+24),4);
}
B4bd47c:{NFSU2_TR(0x4bd47c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd481ull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4bd481:L4bd481:{c.instructions+=2;NFSU2_TR(0x4bd481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd482:{NFSU2_TR(0x4bd482);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd490:L4bd490:{c.instructions+=7;NFSU2_TR(0x4bd490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B4bd496:{NFSU2_TR(0x4bd496);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd497:{NFSU2_TR(0x4bd497);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd498:{NFSU2_TR(0x4bd498);
__builtin_memmove((R+12),(R+4),4);
}
B4bd49a:{NFSU2_TR(0x4bd49a);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd49f:{NFSU2_TR(0x4bd49f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bd4a6:{NFSU2_TR(0x4bd4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4abull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd4ab:L4bd4ab:{c.instructions+=2;NFSU2_TR(0x4bd4ab);
__builtin_memmove((R+4),(R+0),4);
}
B4bd4ad:{NFSU2_TR(0x4bd4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4b2ull));
TAIL_STATIC(0x58d030u,58d);
}
B4bd4b2:L4bd4b2:{c.instructions+=1;NFSU2_TR(0x4bd4b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4b7ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd4b7:L4bd4b7:{c.instructions+=3;NFSU2_TR(0x4bd4b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4b9:{NFSU2_TR(0x4bd4b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd4bc:{NFSU2_TR(0x4bd4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4c1ull));
TAIL_STATIC(0x43be80u,43b);
}
B4bd4c1:L4bd4c1:{c.instructions+=3;NFSU2_TR(0x4bd4c1);
__builtin_memmove((R+24),(R+0),4);
}
B4bd4c3:{NFSU2_TR(0x4bd4c3);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B4bd4c4:{NFSU2_TR(0x4bd4c4);
if(r1(R+519)){{goto L4bd504;}}
}
B4bd4c6:L4bd4c6:{c.instructions+=2;NFSU2_TR(0x4bd4c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4c7:{NFSU2_TR(0x4bd4c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4c8:L4bd4c8:{c.instructions+=2;NFSU2_TR(0x4bd4c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4c9:{NFSU2_TR(0x4bd4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4ceull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd4ce:L4bd4ce:{c.instructions+=2;NFSU2_TR(0x4bd4ce);
__builtin_memmove((R+4),(R+0),4);
}
B4bd4d0:{NFSU2_TR(0x4bd4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4d5ull));
TAIL_STATIC(0x5847f0u,584);
}
B4bd4d5:L4bd4d5:{c.instructions+=5;NFSU2_TR(0x4bd4d5);
__builtin_memmove((R+28),(R+0),4);
}
B4bd4d7:{NFSU2_TR(0x4bd4d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd4da:{NFSU2_TR(0x4bd4da);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4df:{NFSU2_TR(0x4bd4df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4e0:{NFSU2_TR(0x4bd4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4e5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4bd4e5:L4bd4e5:{c.instructions+=3;NFSU2_TR(0x4bd4e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bd4e8:{NFSU2_TR(0x4bd4e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd4ea:{NFSU2_TR(0x4bd4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd4ff;}}
}
B4bd4ec:L4bd4ec:{c.instructions+=5;NFSU2_TR(0x4bd4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd4ef:{NFSU2_TR(0x4bd4ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4f1:{NFSU2_TR(0x4bd4f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4f2:{NFSU2_TR(0x4bd4f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd4f3:{NFSU2_TR(0x4bd4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4f8ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd4f8:L4bd4f8:{c.instructions+=2;NFSU2_TR(0x4bd4f8);
__builtin_memmove((R+4),(R+0),4);
}
B4bd4fa:{NFSU2_TR(0x4bd4fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd4ffull));
TAIL_STATIC(0x58d150u,58d);
}
B4bd4ff:L4bd4ff:{c.instructions+=2;NFSU2_TR(0x4bd4ff);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B4bd500:{NFSU2_TR(0x4bd500);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bd4c8u);}goto L4bd4c8;}}
}
B4bd502:L4bd502:{c.instructions+=2;NFSU2_TR(0x4bd502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd503:{NFSU2_TR(0x4bd503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd504:L4bd504:{c.instructions+=1;NFSU2_TR(0x4bd504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd509ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd509:L4bd509:{c.instructions+=3;NFSU2_TR(0x4bd509);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd50b:{NFSU2_TR(0x4bd50b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd50e:{NFSU2_TR(0x4bd50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd513ull));
TAIL_STATIC(0x43be80u,43b);
}
B4bd513:L4bd513:{c.instructions+=2;NFSU2_TR(0x4bd513);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd515:{NFSU2_TR(0x4bd515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd52e;}}
}
B4bd517:L4bd517:{c.instructions+=3;NFSU2_TR(0x4bd517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd518:{NFSU2_TR(0x4bd518);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd51a:{NFSU2_TR(0x4bd51a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd51full));
TAIL_STATIC(0x50cee0u,50c);
}
B4bd51f:L4bd51f:{c.instructions+=3;NFSU2_TR(0x4bd51f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd521:{NFSU2_TR(0x4bd521);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd526:{NFSU2_TR(0x4bd526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd52bull));
TAIL_STATIC(0x55dde0u,55d);
}
B4bd52b:L4bd52b:{c.instructions+=1;NFSU2_TR(0x4bd52b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bd52e:L4bd52e:{c.instructions+=2;NFSU2_TR(0x4bd52e);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd533:{NFSU2_TR(0x4bd533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd538ull));
TAIL_STATIC(0x582b60u,582);
}
B4bd538:L4bd538:{c.instructions+=2;NFSU2_TR(0x4bd538);
__builtin_memmove((R+4),(R+0),4);
}
B4bd53a:{NFSU2_TR(0x4bd53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd53full));
TAIL_STATIC(0x582d00u,582);
}
B4bd53f:L4bd53f:{c.instructions+=2;NFSU2_TR(0x4bd53f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd541:{NFSU2_TR(0x4bd541);
if(r1(R+518)){{goto L4bd579;}}
}
B4bd543:L4bd543:{c.instructions+=3;NFSU2_TR(0x4bd543);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd545:{NFSU2_TR(0x4bd545);
s4(0x836378,u32(0x0ull));
}
B4bd54f:{NFSU2_TR(0x4bd54f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd554ull));
TAIL_STATIC(0x582b60u,582);
}
B4bd554:L4bd554:{c.instructions+=2;NFSU2_TR(0x4bd554);
__builtin_memmove((R+4),(R+0),4);
}
B4bd556:{NFSU2_TR(0x4bd556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd55bull));
TAIL_STATIC(0x502770u,502);
}
B4bd55b:L4bd55b:{c.instructions+=2;NFSU2_TR(0x4bd55b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd55c:{NFSU2_TR(0x4bd55c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd561ull));
TAIL_STATIC(0x73e380u,73e);
}
B4bd561:L4bd561:{c.instructions+=3;NFSU2_TR(0x4bd561);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd563:{NFSU2_TR(0x4bd563);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd565:{NFSU2_TR(0x4bd565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd56aull));
TAIL_STATIC(0x50cee0u,50c);
}
B4bd56a:L4bd56a:{c.instructions+=3;NFSU2_TR(0x4bd56a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd56c:{NFSU2_TR(0x4bd56c);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd571:{NFSU2_TR(0x4bd571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd576ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4bd576:L4bd576:{c.instructions+=1;NFSU2_TR(0x4bd576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd579:L4bd579:{c.instructions+=4;NFSU2_TR(0x4bd579);
__builtin_memmove((R+4),gp(0x836010),4);
}
B4bd57f:{NFSU2_TR(0x4bd57f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd581:{NFSU2_TR(0x4bd581);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd582:{NFSU2_TR(0x4bd582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd587ull));
TAIL_STATIC(0x73ee20u,73e);
}
B4bd587:L4bd587:{c.instructions+=1;NFSU2_TR(0x4bd587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd58cull));
TAIL_STATIC(0x582b60u,582);
}
B4bd58c:L4bd58c:{c.instructions+=4;NFSU2_TR(0x4bd58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd592:{NFSU2_TR(0x4bd592);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd597:{NFSU2_TR(0x4bd597);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd598:{NFSU2_TR(0x4bd598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd59dull));
TAIL_STATIC(0x73fc50u,73f);
}
B4bd59d:L4bd59d:{c.instructions+=3;NFSU2_TR(0x4bd59d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bd5a0:{NFSU2_TR(0x4bd5a0);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5a5:{NFSU2_TR(0x4bd5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd5aaull));
TAIL_STATIC(0x582b60u,582);
}
B4bd5aa:L4bd5aa:{c.instructions+=2;NFSU2_TR(0x4bd5aa);
__builtin_memmove((R+4),(R+0),4);
}
B4bd5ac:{NFSU2_TR(0x4bd5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd5b1ull));
TAIL_STATIC(0x582bb0u,582);
}
B4bd5b1:L4bd5b1:{c.instructions+=2;NFSU2_TR(0x4bd5b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd5b3:{NFSU2_TR(0x4bd5b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd5e6;}}
}
B4bd5b5:L4bd5b5:{c.instructions+=8;NFSU2_TR(0x4bd5b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5b7:{NFSU2_TR(0x4bd5b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bd5bd:{NFSU2_TR(0x4bd5bd);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5c2:{NFSU2_TR(0x4bd5c2);
s4(0x83637c,u32(0x1ull));
}
B4bd5cc:{NFSU2_TR(0x4bd5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd5cf:{NFSU2_TR(0x4bd5cf);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5d4:{NFSU2_TR(0x4bd5d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5d5:{NFSU2_TR(0x4bd5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd5daull));
TAIL_STATIC(0x537c00u,537);
}
B4bd5da:L4bd5da:{c.instructions+=5;NFSU2_TR(0x4bd5da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bd5dd:{NFSU2_TR(0x4bd5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd5de:{NFSU2_TR(0x4bd5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd5df:{NFSU2_TR(0x4bd5df);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd5e5:{NFSU2_TR(0x4bd5e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd5e6:L4bd5e6:{c.instructions+=1;NFSU2_TR(0x4bd5e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd5ebull));
TAIL_STATIC(0x582b60u,582);
}
B4bd5eb:L4bd5eb:{c.instructions+=6;NFSU2_TR(0x4bd5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd5f1:{NFSU2_TR(0x4bd5f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5f2:{NFSU2_TR(0x4bd5f2);
u8 U[4];
w4(U+0,u32(0x4ae6f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5f7:{NFSU2_TR(0x4bd5f7);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5fc:{NFSU2_TR(0x4bd5fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd5fd:{NFSU2_TR(0x4bd5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd602ull));
TAIL_STATIC(0x740750u,740);
}
B4bd602:L4bd602:{c.instructions+=3;NFSU2_TR(0x4bd602);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bd605:{NFSU2_TR(0x4bd605);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd607:{NFSU2_TR(0x4bd607);
if(r1(R+518)){{goto L4bd638;}}
}
B4bd609:L4bd609:{c.instructions+=3;NFSU2_TR(0x4bd609);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bd60f:{NFSU2_TR(0x4bd60f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd611:{NFSU2_TR(0x4bd611);
if(r1(R+518)){{goto L4bd618;}}
}
B4bd613:L4bd613:{c.instructions+=2;NFSU2_TR(0x4bd613);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff94ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bd616:{NFSU2_TR(0x4bd616);
if(r1(R+518)){{goto L4bd66e;}}
}
B4bd618:L4bd618:{c.instructions+=4;NFSU2_TR(0x4bd618);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd61b:{NFSU2_TR(0x4bd61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd61c:{NFSU2_TR(0x4bd61c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd61d:{NFSU2_TR(0x4bd61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd622ull));
TAIL_STATIC(0x49e810u,49e);
}
B4bd622:L4bd622:{c.instructions+=6;NFSU2_TR(0x4bd622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bd625:{NFSU2_TR(0x4bd625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd626:{NFSU2_TR(0x4bd626);
s4(0x83637c,u32(0x1ull));
}
B4bd630:{NFSU2_TR(0x4bd630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd631:{NFSU2_TR(0x4bd631);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd637:{NFSU2_TR(0x4bd637);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd638:L4bd638:{c.instructions+=3;NFSU2_TR(0x4bd638);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd63d:{NFSU2_TR(0x4bd63d);
u8 U[4];
w4(U+0,u32(0xb8066fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd642:{NFSU2_TR(0x4bd642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd647ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd647:L4bd647:{c.instructions+=5;NFSU2_TR(0x4bd647);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd64a:{NFSU2_TR(0x4bd64a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd64b:{NFSU2_TR(0x4bd64b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bd64f:{NFSU2_TR(0x4bd64f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd650:{NFSU2_TR(0x4bd650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd655ull));
TAIL_STATIC(0x4400d0u,440);
}
B4bd655:L4bd655:{c.instructions+=6;NFSU2_TR(0x4bd655);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd658:{NFSU2_TR(0x4bd658);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd65c:{NFSU2_TR(0x4bd65c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd65d:{NFSU2_TR(0x4bd65d);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd662:{NFSU2_TR(0x4bd662);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd663:{NFSU2_TR(0x4bd663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd668ull));
TAIL_STATIC(0x558310u,558);
}
B4bd668:L4bd668:{c.instructions+=2;NFSU2_TR(0x4bd668);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd66b:{NFSU2_TR(0x4bd66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd66e:L4bd66e:{c.instructions+=5;NFSU2_TR(0x4bd66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd66f:{NFSU2_TR(0x4bd66f);
s4(0x83637c,u32(0x1ull));
}
B4bd679:{NFSU2_TR(0x4bd679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd67a:{NFSU2_TR(0x4bd67a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd680:{NFSU2_TR(0x4bd680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd690:L4bd690:{c.instructions+=4;NFSU2_TR(0x4bd690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B4bd696:{NFSU2_TR(0x4bd696);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd697:{NFSU2_TR(0x4bd697);
__builtin_memmove((R+24),(R+4),4);
}
B4bd699:{NFSU2_TR(0x4bd699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd69eull));
TAIL_STATIC(0x582b60u,582);
}
B4bd69e:L4bd69e:{c.instructions+=7;NFSU2_TR(0x4bd69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd6a4:{NFSU2_TR(0x4bd6a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6a5:{NFSU2_TR(0x4bd6a5);
u8 U[4];
w4(U+0,u32(0x4ae670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6aa:{NFSU2_TR(0x4bd6aa);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6ac:{NFSU2_TR(0x4bd6ac);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6b1:{NFSU2_TR(0x4bd6b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6b2:{NFSU2_TR(0x4bd6b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd6b7ull));
TAIL_STATIC(0x73fad0u,73f);
}
B4bd6b7:L4bd6b7:{c.instructions+=3;NFSU2_TR(0x4bd6b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4bd6ba:{NFSU2_TR(0x4bd6ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd6bc:{NFSU2_TR(0x4bd6bc);
if(r1(R+518)){{goto L4bd6e2;}}
}
B4bd6be:L4bd6be:{c.instructions+=3;NFSU2_TR(0x4bd6be);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bd6c4:{NFSU2_TR(0x4bd6c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd6c6:{NFSU2_TR(0x4bd6c6);
if(r1(R+518)){{goto L4bd6cd;}}
}
B4bd6c8:L4bd6c8:{c.instructions+=2;NFSU2_TR(0x4bd6c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff94ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bd6cb:{NFSU2_TR(0x4bd6cb);
if(r1(R+518)){{goto L4bd722;}}
}
B4bd6cd:L4bd6cd:{c.instructions+=4;NFSU2_TR(0x4bd6cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6ce:{NFSU2_TR(0x4bd6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd6d1:{NFSU2_TR(0x4bd6d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6d2:{NFSU2_TR(0x4bd6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd6d7ull));
TAIL_STATIC(0x49e810u,49e);
}
B4bd6d7:L4bd6d7:{c.instructions+=4;NFSU2_TR(0x4bd6d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bd6da:{NFSU2_TR(0x4bd6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd6db:{NFSU2_TR(0x4bd6db);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd6e1:{NFSU2_TR(0x4bd6e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd6e2:L4bd6e2:{c.instructions+=4;NFSU2_TR(0x4bd6e2);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6e7:{NFSU2_TR(0x4bd6e7);
u8 U[4];
w4(U+0,u32(0x4b14af4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6ec:{NFSU2_TR(0x4bd6ec);
s4(0x83637c,u32(0x1ull));
}
B4bd6f6:{NFSU2_TR(0x4bd6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd6fbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd6fb:L4bd6fb:{c.instructions+=5;NFSU2_TR(0x4bd6fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd6fe:{NFSU2_TR(0x4bd6fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd6ff:{NFSU2_TR(0x4bd6ff);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd703:{NFSU2_TR(0x4bd703);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd704:{NFSU2_TR(0x4bd704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd709ull));
TAIL_STATIC(0x4400d0u,440);
}
B4bd709:L4bd709:{c.instructions+=6;NFSU2_TR(0x4bd709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd70c:{NFSU2_TR(0x4bd70c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bd710:{NFSU2_TR(0x4bd710);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd711:{NFSU2_TR(0x4bd711);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd716:{NFSU2_TR(0x4bd716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd717:{NFSU2_TR(0x4bd717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd71cull));
TAIL_STATIC(0x558310u,558);
}
B4bd71c:L4bd71c:{c.instructions+=2;NFSU2_TR(0x4bd71c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd71f:{NFSU2_TR(0x4bd71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd722:L4bd722:{c.instructions+=3;NFSU2_TR(0x4bd722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd723:{NFSU2_TR(0x4bd723);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd729:{NFSU2_TR(0x4bd729);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd730:L4bd730:{c.instructions+=20;NFSU2_TR(0x4bd730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd731:{NFSU2_TR(0x4bd731);
__builtin_memmove((R+20),(R+16),4);
}
B4bd733:{NFSU2_TR(0x4bd733);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bd736:{NFSU2_TR(0x4bd736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x314ull))));
}
B4bd73c:{NFSU2_TR(0x4bd73c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd73d:{NFSU2_TR(0x4bd73d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bd73f:{NFSU2_TR(0x4bd73f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd740:{NFSU2_TR(0x4bd740);
u8 U[8];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd744:{NFSU2_TR(0x4bd744);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd745:{NFSU2_TR(0x4bd745);
u8 U[8];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd749:{NFSU2_TR(0x4bd749);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd74b:{NFSU2_TR(0x4bd74b);
__builtin_memmove((R+12),(R+4),4);
}
B4bd74d:{NFSU2_TR(0x4bd74d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bd751:{NFSU2_TR(0x4bd751);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bd755:{NFSU2_TR(0x4bd755);
u8 U[6];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4bd75a:{NFSU2_TR(0x4bd75a);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd75f:{NFSU2_TR(0x4bd75f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd760:{NFSU2_TR(0x4bd760);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bd765:{NFSU2_TR(0x4bd765);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bd769:{NFSU2_TR(0x4bd769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd76eull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bd76e:L4bd76e:{c.instructions+=3;NFSU2_TR(0x4bd76e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bd771:{NFSU2_TR(0x4bd771);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd776:{NFSU2_TR(0x4bd776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd77bull));
TAIL_STATIC(0x582b60u,582);
}
B4bd77b:L4bd77b:{c.instructions+=2;NFSU2_TR(0x4bd77b);
__builtin_memmove((R+4),(R+0),4);
}
B4bd77d:{NFSU2_TR(0x4bd77d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd782ull));
TAIL_STATIC(0x582bb0u,582);
}
B4bd782:L4bd782:{c.instructions+=4;NFSU2_TR(0x4bd782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd783:{NFSU2_TR(0x4bd783);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bd78a:{NFSU2_TR(0x4bd78a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd78b:{NFSU2_TR(0x4bd78b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd790ull));
TAIL_STATIC(0x49e870u,49e);
}
B4bd790:L4bd790:{c.instructions+=7;NFSU2_TR(0x4bd790);
__builtin_memmove((R+24),(R+0),4);
}
B4bd792:{NFSU2_TR(0x4bd792);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd794:{NFSU2_TR(0x4bd794);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bd798:{NFSU2_TR(0x4bd798);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd799:{NFSU2_TR(0x4bd799);
w4(R+4,u32(0x9full));
}
B4bd79e:{NFSU2_TR(0x4bd79e);
w4(R+28,u32(0x835fb8ull));
}
B4bd7a3:{NFSU2_TR(0x4bd7a3);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd7a8:L4bd7a8:{c.instructions+=1;NFSU2_TR(0x4bd7a8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bd7aa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bd7a8u);}goto L4bd7a8;}
}
B4bd7aa:L4bd7aa:{c.instructions+=1;NFSU2_TR(0x4bd7aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd7afull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bd7af:L4bd7af:{c.instructions+=3;NFSU2_TR(0x4bd7af);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B4bd7b5:{NFSU2_TR(0x4bd7b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd7b6:{NFSU2_TR(0x4bd7b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd7bbull));
TAIL_STATIC(0x51bd10u,51b);
}
B4bd7bb:L4bd7bb:{c.instructions+=3;NFSU2_TR(0x4bd7bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bd7be:{NFSU2_TR(0x4bd7be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd7c0:{NFSU2_TR(0x4bd7c0);
if(r1(R+518)){{goto L4bd9e9;}}
}
B4bd7c6:L4bd7c6:{c.instructions+=3;NFSU2_TR(0x4bd7c6);
__builtin_memmove((R+0),gp(0x835fc0),4);
}
B4bd7cb:{NFSU2_TR(0x4bd7cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd7cd:{NFSU2_TR(0x4bd7cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd925;}}
}
B4bd7d3:L4bd7d3:{c.instructions+=2;NFSU2_TR(0x4bd7d3);
u8 U[4];
w4(U+0,u32(u32(m4(0x836008))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd7dd:{NFSU2_TR(0x4bd7dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd925;}}
}
B4bd7e3:L4bd7e3:{c.instructions+=3;NFSU2_TR(0x4bd7e3);
__builtin_memmove((R+0),gp(0x835ff4),4);
}
B4bd7e8:{NFSU2_TR(0x4bd7e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd7ea:{NFSU2_TR(0x4bd7ea);
if(r1(R+518)){{goto L4bd8e9;}}
}
B4bd7f0:L4bd7f0:{c.instructions+=4;NFSU2_TR(0x4bd7f0);
__builtin_memmove((R+0),gp(0x835fec),4);
}
B4bd7f5:{NFSU2_TR(0x4bd7f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd7f7:{NFSU2_TR(0x4bd7f7);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd7fc:{NFSU2_TR(0x4bd7fc);
if(r1(R+518)){{goto L4bd85c;}}
}
B4bd7fe:L4bd7fe:{c.instructions+=4;NFSU2_TR(0x4bd7fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bd803:{NFSU2_TR(0x4bd803);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bd805:{NFSU2_TR(0x4bd805);
w4(R+4,u32(0x1full));
}
B4bd80a:{NFSU2_TR(0x4bd80a);
u8 U[4];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd80e:L4bd80e:{c.instructions+=1;NFSU2_TR(0x4bd80e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4bd810;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bd80eu);}goto L4bd80e;}
}
B4bd810:L4bd810:{c.instructions+=4;NFSU2_TR(0x4bd810);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4bd812:{NFSU2_TR(0x4bd812);
u8 U[4];
w4(U+0,u32(0xa4ca09c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd817:{NFSU2_TR(0x4bd817);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4bd818:{NFSU2_TR(0x4bd818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd81dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd81d:L4bd81d:{c.instructions+=6;NFSU2_TR(0x4bd81d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd820:{NFSU2_TR(0x4bd820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd821:{NFSU2_TR(0x4bd821);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bd825:{NFSU2_TR(0x4bd825);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd82a:{NFSU2_TR(0x4bd82a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd82b:{NFSU2_TR(0x4bd82b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd830ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bd830:L4bd830:{c.instructions+=9;NFSU2_TR(0x4bd830);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd833:{NFSU2_TR(0x4bd833);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bd837:{NFSU2_TR(0x4bd837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd838:{NFSU2_TR(0x4bd838);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd83d:{NFSU2_TR(0x4bd83d);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd842:{NFSU2_TR(0x4bd842);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd847:{NFSU2_TR(0x4bd847);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd84c:{NFSU2_TR(0x4bd84c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd84d:{NFSU2_TR(0x4bd84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd852ull));
TAIL_STATIC(0x558540u,558);
}
B4bd852:L4bd852:{c.instructions+=7;NFSU2_TR(0x4bd852);
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
B4bd855:{NFSU2_TR(0x4bd855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd856:{NFSU2_TR(0x4bd856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd857:{NFSU2_TR(0x4bd857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd858:{NFSU2_TR(0x4bd858);
__builtin_memmove((R+16),(R+20),4);
}
B4bd85a:{NFSU2_TR(0x4bd85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd85b:{NFSU2_TR(0x4bd85b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd85c:L4bd85c:{c.instructions+=1;NFSU2_TR(0x4bd85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd861ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd861:L4bd861:{c.instructions+=2;NFSU2_TR(0x4bd861);
__builtin_memmove((R+4),(R+0),4);
}
B4bd863:{NFSU2_TR(0x4bd863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd868ull));
TAIL_STATIC(0x58ff10u,58f);
}
B4bd868:L4bd868:{c.instructions+=2;NFSU2_TR(0x4bd868);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bd86b:{NFSU2_TR(0x4bd86b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd892;}}
}
B4bd86d:L4bd86d:{c.instructions+=4;NFSU2_TR(0x4bd86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bd870:{NFSU2_TR(0x4bd870);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd875:{NFSU2_TR(0x4bd875);
u8 U[4];
w4(U+0,u32(0xe973ea37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd87a:{NFSU2_TR(0x4bd87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd87full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd87f:L4bd87f:{c.instructions+=5;NFSU2_TR(0x4bd87f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bd882:{NFSU2_TR(0x4bd882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd883:{NFSU2_TR(0x4bd883);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd888:{NFSU2_TR(0x4bd888);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd88d:{NFSU2_TR(0x4bd88d);
{goto L4bd9fb;}
}
B4bd892:L4bd892:{c.instructions+=2;NFSU2_TR(0x4bd892);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bd895:{NFSU2_TR(0x4bd895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd89e;}}
}
B4bd897:L4bd897:{c.instructions+=2;NFSU2_TR(0x4bd897);
u8 U[4];
w4(U+0,u32(0x89e3b31full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd89c:{NFSU2_TR(0x4bd89c);
{goto L4bd8a8;}
}
B4bd89e:L4bd89e:{c.instructions+=2;NFSU2_TR(0x4bd89e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bd8a1:{NFSU2_TR(0x4bd8a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd8c0;}}
}
B4bd8a3:L4bd8a3:{c.instructions+=1;NFSU2_TR(0x4bd8a3);
u8 U[4];
w4(U+0,u32(0x2ad727full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8a8:L4bd8a8:{c.instructions+=2;NFSU2_TR(0x4bd8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bd8ab:{NFSU2_TR(0x4bd8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd8b0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd8b0:L4bd8b0:{c.instructions+=4;NFSU2_TR(0x4bd8b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8b1:{NFSU2_TR(0x4bd8b1);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8b6:{NFSU2_TR(0x4bd8b6);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8bb:{NFSU2_TR(0x4bd8bb);
{goto L4bd9fb;}
}
B4bd8c0:L4bd8c0:{c.instructions+=6;NFSU2_TR(0x4bd8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bd8c3:{NFSU2_TR(0x4bd8c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8c5:{NFSU2_TR(0x4bd8c5);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8ca:{NFSU2_TR(0x4bd8ca);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8cf:{NFSU2_TR(0x4bd8cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8d0:{NFSU2_TR(0x4bd8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd8d5ull));
TAIL_STATIC(0x537c00u,537);
}
B4bd8d5:L4bd8d5:{c.instructions+=8;NFSU2_TR(0x4bd8d5);
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
B4bd8d8:{NFSU2_TR(0x4bd8d8);
s4(0x83637c,u32(0x1ull));
}
B4bd8e2:{NFSU2_TR(0x4bd8e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd8e3:{NFSU2_TR(0x4bd8e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd8e4:{NFSU2_TR(0x4bd8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd8e5:{NFSU2_TR(0x4bd8e5);
__builtin_memmove((R+16),(R+20),4);
}
B4bd8e7:{NFSU2_TR(0x4bd8e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd8e8:{NFSU2_TR(0x4bd8e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd8e9:L4bd8e9:{c.instructions+=3;NFSU2_TR(0x4bd8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bd8ec:{NFSU2_TR(0x4bd8ec);
u8 U[4];
w4(U+0,u32(0x97b25a02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8f1:{NFSU2_TR(0x4bd8f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd8f6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd8f6:L4bd8f6:{c.instructions+=7;NFSU2_TR(0x4bd8f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8f7:{NFSU2_TR(0x4bd8f7);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd8fc:{NFSU2_TR(0x4bd8fc);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd901:{NFSU2_TR(0x4bd901);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd906:{NFSU2_TR(0x4bd906);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd90b:{NFSU2_TR(0x4bd90b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd90c:{NFSU2_TR(0x4bd90c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd911ull));
TAIL_STATIC(0x558540u,558);
}
B4bd911:L4bd911:{c.instructions+=8;NFSU2_TR(0x4bd911);
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
B4bd914:{NFSU2_TR(0x4bd914);
s4(0x83637c,u32(0x1ull));
}
B4bd91e:{NFSU2_TR(0x4bd91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd91f:{NFSU2_TR(0x4bd91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd920:{NFSU2_TR(0x4bd920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd921:{NFSU2_TR(0x4bd921);
__builtin_memmove((R+16),(R+20),4);
}
B4bd923:{NFSU2_TR(0x4bd923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd924:{NFSU2_TR(0x4bd924);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd925:L4bd925:{c.instructions+=3;NFSU2_TR(0x4bd925);
__builtin_memmove((R+0),gp(0x835ff4),4);
}
B4bd92a:{NFSU2_TR(0x4bd92a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd92c:{NFSU2_TR(0x4bd92c);
if(r1(R+518)){{goto L4bd978;}}
}
B4bd92e:L4bd92e:{c.instructions+=2;NFSU2_TR(0x4bd92e);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd933:{NFSU2_TR(0x4bd933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd938ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bd938:L4bd938:{c.instructions+=2;NFSU2_TR(0x4bd938);
__builtin_memmove((R+4),(R+0),4);
}
B4bd93a:{NFSU2_TR(0x4bd93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd93full));
TAIL_STATIC(0x58d030u,58d);
}
B4bd93f:L4bd93f:{c.instructions+=4;NFSU2_TR(0x4bd93f);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4bd944:{NFSU2_TR(0x4bd944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd945:{NFSU2_TR(0x4bd945);
u8 U[4];
w4(U+0,u32(0xf9e94d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd94a:{NFSU2_TR(0x4bd94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd94full));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd94f:L4bd94f:{c.instructions+=7;NFSU2_TR(0x4bd94f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd951:{NFSU2_TR(0x4bd951);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd956:{NFSU2_TR(0x4bd956);
s4(0x83637c,u32(0x1ull));
}
B4bd960:{NFSU2_TR(0x4bd960);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bd963:{NFSU2_TR(0x4bd963);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd968:{NFSU2_TR(0x4bd968);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd969:{NFSU2_TR(0x4bd969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd96eull));
TAIL_STATIC(0x537c00u,537);
}
B4bd96e:L4bd96e:{c.instructions+=7;NFSU2_TR(0x4bd96e);
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
B4bd971:{NFSU2_TR(0x4bd971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd972:{NFSU2_TR(0x4bd972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd973:{NFSU2_TR(0x4bd973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd974:{NFSU2_TR(0x4bd974);
__builtin_memmove((R+16),(R+20),4);
}
B4bd976:{NFSU2_TR(0x4bd976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd977:{NFSU2_TR(0x4bd977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd978:L4bd978:{c.instructions+=4;NFSU2_TR(0x4bd978);
__builtin_memmove((R+8),gp(0x7f44fc),4);
}
B4bd97e:{NFSU2_TR(0x4bd97e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd97f:{NFSU2_TR(0x4bd97f);
u8 U[4];
w4(U+0,u32(0xf9e94d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd984:{NFSU2_TR(0x4bd984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd989ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bd989:L4bd989:{c.instructions+=1;NFSU2_TR(0x4bd989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd98eull));
TAIL_STATIC(0x582b60u,582);
}
B4bd98e:L4bd98e:{c.instructions+=7;NFSU2_TR(0x4bd98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd994:{NFSU2_TR(0x4bd994);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd995:{NFSU2_TR(0x4bd995);
u8 U[4];
w4(U+0,u32(0x4ae710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd99a:{NFSU2_TR(0x4bd99a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd99c:{NFSU2_TR(0x4bd99c);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9a1:{NFSU2_TR(0x4bd9a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9a2:{NFSU2_TR(0x4bd9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd9a7ull));
TAIL_STATIC(0x73fb50u,73f);
}
B4bd9a7:L4bd9a7:{c.instructions+=3;NFSU2_TR(0x4bd9a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bd9aa:{NFSU2_TR(0x4bd9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bd9ac:{NFSU2_TR(0x4bd9ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bd9c6;}}
}
B4bd9ae:L4bd9ae:{c.instructions+=4;NFSU2_TR(0x4bd9ae);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9b3:{NFSU2_TR(0x4bd9b3);
u8 U[4];
w4(U+0,u32(0xed8e446bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9b8:{NFSU2_TR(0x4bd9b8);
__builtin_memmove((R+4),(R+12),4);
}
B4bd9ba:{NFSU2_TR(0x4bd9ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd9bfull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4bd9bf:L4bd9bf:{c.instructions+=6;NFSU2_TR(0x4bd9bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd9c0:{NFSU2_TR(0x4bd9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd9c1:{NFSU2_TR(0x4bd9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd9c2:{NFSU2_TR(0x4bd9c2);
__builtin_memmove((R+16),(R+20),4);
}
B4bd9c4:{NFSU2_TR(0x4bd9c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd9c5:{NFSU2_TR(0x4bd9c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd9c6:L4bd9c6:{c.instructions+=3;NFSU2_TR(0x4bd9c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bd9cc:{NFSU2_TR(0x4bd9cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bd9ce:{NFSU2_TR(0x4bd9ce);
if(r1(R+518)){{goto L4bd9d5;}}
}
B4bd9d0:L4bd9d0:{c.instructions+=2;NFSU2_TR(0x4bd9d0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bd9d3:{NFSU2_TR(0x4bd9d3);
if(r1(R+518)){{goto L4bda0e;}}
}
B4bd9d5:L4bd9d5:{c.instructions+=4;NFSU2_TR(0x4bd9d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9d6:{NFSU2_TR(0x4bd9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bd9d9:{NFSU2_TR(0x4bd9d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9da:{NFSU2_TR(0x4bd9da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd9dfull));
TAIL_STATIC(0x49e810u,49e);
}
B4bd9df:L4bd9df:{c.instructions+=7;NFSU2_TR(0x4bd9df);
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
B4bd9e2:{NFSU2_TR(0x4bd9e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bd9e3:{NFSU2_TR(0x4bd9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bd9e4:{NFSU2_TR(0x4bd9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bd9e5:{NFSU2_TR(0x4bd9e5);
__builtin_memmove((R+16),(R+20),4);
}
B4bd9e7:{NFSU2_TR(0x4bd9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bd9e8:{NFSU2_TR(0x4bd9e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bd9e9:L4bd9e9:{c.instructions+=3;NFSU2_TR(0x4bd9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bd9ec:{NFSU2_TR(0x4bd9ec);
u8 U[4];
w4(U+0,u32(0xd831eab3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9f1:{NFSU2_TR(0x4bd9f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bd9f6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bd9f6:L4bd9f6:{c.instructions+=3;NFSU2_TR(0x4bd9f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9f7:{NFSU2_TR(0x4bd9f7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9f9:{NFSU2_TR(0x4bd9f9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bd9fb:L4bd9fb:{c.instructions+=4;NFSU2_TR(0x4bd9fb);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda00:{NFSU2_TR(0x4bda00);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda05:{NFSU2_TR(0x4bda05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda06:{NFSU2_TR(0x4bda06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bda0bull));
TAIL_STATIC(0x558540u,558);
}
B4bda0b:L4bda0b:{c.instructions+=1;NFSU2_TR(0x4bda0b);
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
B4bda0e:L4bda0e:{c.instructions+=6;NFSU2_TR(0x4bda0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bda0f:{NFSU2_TR(0x4bda0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bda10:{NFSU2_TR(0x4bda10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bda11:{NFSU2_TR(0x4bda11);
__builtin_memmove((R+16),(R+20),4);
}
B4bda13:{NFSU2_TR(0x4bda13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bda14:{NFSU2_TR(0x4bda14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bda20:L4bda20:{c.instructions+=11;NFSU2_TR(0x4bda20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B4bda26:{NFSU2_TR(0x4bda26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda27:{NFSU2_TR(0x4bda27);
__builtin_memmove((R+24),(R+4),4);
}
B4bda29:{NFSU2_TR(0x4bda29);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bda30:{NFSU2_TR(0x4bda30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bda36:{NFSU2_TR(0x4bda36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda37:{NFSU2_TR(0x4bda37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda38:{NFSU2_TR(0x4bda38);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bda3c:{NFSU2_TR(0x4bda3c);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda41:{NFSU2_TR(0x4bda41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda42:{NFSU2_TR(0x4bda42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bda47ull));
TAIL_STATIC(0x743450u,743);
}
B4bda47:L4bda47:{c.instructions+=4;NFSU2_TR(0x4bda47);
__builtin_memmove((R+0),gp(0x835fe0),4);
}
B4bda4c:{NFSU2_TR(0x4bda4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bda4f:{NFSU2_TR(0x4bda4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bda51:{NFSU2_TR(0x4bda51);
if(r1(R+518)){{goto L4bda7b;}}
}
B4bda53:L4bda53:{c.instructions+=1;NFSU2_TR(0x4bda53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bda58ull));
TAIL_STATIC(0x582b60u,582);
}
B4bda58:L4bda58:{c.instructions+=9;NFSU2_TR(0x4bda58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bda5e:{NFSU2_TR(0x4bda5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda5f:{NFSU2_TR(0x4bda5f);
u8 U[4];
w4(U+0,u32(0x4ae730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda64:{NFSU2_TR(0x4bda64);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda66:{NFSU2_TR(0x4bda66);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bda6a:{NFSU2_TR(0x4bda6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda6b:{NFSU2_TR(0x4bda6b);
u8 U[4];
w4(U+0,u32(0x63686174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda70:{NFSU2_TR(0x4bda70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda71:{NFSU2_TR(0x4bda71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bda76ull));
TAIL_STATIC(0x7407c0u,740);
}
B4bda76:L4bda76:{c.instructions+=2;NFSU2_TR(0x4bda76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bda79:{NFSU2_TR(0x4bda79);
{goto L4bda9f;}
}
B4bda7b:L4bda7b:{c.instructions+=1;NFSU2_TR(0x4bda7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bda80ull));
TAIL_STATIC(0x582b60u,582);
}
B4bda80:L4bda80:{c.instructions+=8;NFSU2_TR(0x4bda80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bda86:{NFSU2_TR(0x4bda86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda87:{NFSU2_TR(0x4bda87);
u8 U[4];
w4(U+0,u32(0x4ae730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda8c:{NFSU2_TR(0x4bda8c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bda90:{NFSU2_TR(0x4bda90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda91:{NFSU2_TR(0x4bda91);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda96:{NFSU2_TR(0x4bda96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bda97:{NFSU2_TR(0x4bda97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bda9cull));
TAIL_STATIC(0x73fc80u,73f);
}
B4bda9c:L4bda9c:{c.instructions+=1;NFSU2_TR(0x4bda9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4bda9f:L4bda9f:{c.instructions+=2;NFSU2_TR(0x4bda9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdaa1:{NFSU2_TR(0x4bdaa1);
if(r1(R+518)){{goto L4bdaba;}}
}
B4bdaa3:L4bdaa3:{c.instructions+=4;NFSU2_TR(0x4bdaa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdaa4:{NFSU2_TR(0x4bdaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdaa7:{NFSU2_TR(0x4bdaa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdaa8:{NFSU2_TR(0x4bdaa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdaadull));
TAIL_STATIC(0x49e810u,49e);
}
B4bdaad:L4bdaad:{c.instructions+=4;NFSU2_TR(0x4bdaad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bdab0:{NFSU2_TR(0x4bdab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdab1:{NFSU2_TR(0x4bdab1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xccull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xccull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xccull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdab7:{NFSU2_TR(0x4bdab7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdaba:L4bdaba:{c.instructions+=4;NFSU2_TR(0x4bdaba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1380ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bdac1:{NFSU2_TR(0x4bdac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdac2:{NFSU2_TR(0x4bdac2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xccull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xccull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xccull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdac8:{NFSU2_TR(0x4bdac8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdad0:L4bdad0:{c.instructions+=10;NFSU2_TR(0x4bdad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x22cull))));
}
B4bdad6:{NFSU2_TR(0x4bdad6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdad7:{NFSU2_TR(0x4bdad7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdad8:{NFSU2_TR(0x4bdad8);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bdadf:{NFSU2_TR(0x4bdadf);
__builtin_memmove((R+20),(R+4),4);
}
B4bdae1:{NFSU2_TR(0x4bdae1);
__builtin_memmove((R+0),(R+24),4);
}
B4bdae3:{NFSU2_TR(0x4bdae3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdae4:{NFSU2_TR(0x4bdae4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdae8:{NFSU2_TR(0x4bdae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bdaeb:{NFSU2_TR(0x4bdaeb);
{goto L4bdaf0;}
}
B4bdaf0:L4bdaf0:{c.instructions+=4;NFSU2_TR(0x4bdaf0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4bdaf2:{NFSU2_TR(0x4bdaf2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bdaf3:{NFSU2_TR(0x4bdaf3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bdaf5:{NFSU2_TR(0x4bdaf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdaf0u);}goto L4bdaf0;}}
}
B4bdaf7:L4bdaf7:{c.instructions+=7;NFSU2_TR(0x4bdaf7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4bdaf9:{NFSU2_TR(0x4bdaf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdafb:{NFSU2_TR(0x4bdafb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdaff:{NFSU2_TR(0x4bdaff);
__builtin_memmove((R+28),(R+0),4);
}
B4bdb01:{NFSU2_TR(0x4bdb01);
__builtin_memmove((R+8),(R+24),4);
}
B4bdb03:{NFSU2_TR(0x4bdb03);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bdb07:{NFSU2_TR(0x4bdb07);
if(r1(R+518)){{goto L4bdb22;}}
}
B4bdb09:L4bdb09:{c.instructions+=3;NFSU2_TR(0x4bdb09);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4bdb0b:{NFSU2_TR(0x4bdb0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bdb0d:{NFSU2_TR(0x4bdb0d);
if(r1(R+518)){{goto L4bdb22;}}
}
B4bdb0f:L4bdb0f:{c.instructions+=1;NFSU2_TR(0x4bdb0f);
}
B4bdb10:L4bdb10:{c.instructions+=7;NFSU2_TR(0x4bdb10);
w2(R+0,u16(s16(s8(r1(R+0)))));
}
B4bdb14:{NFSU2_TR(0x4bdb14);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B4bdb17:{NFSU2_TR(0x4bdb17);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bdb1a:{NFSU2_TR(0x4bdb1a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4bdb1d:{NFSU2_TR(0x4bdb1d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4bdb1e:{NFSU2_TR(0x4bdb1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bdb20:{NFSU2_TR(0x4bdb20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdb10u);}goto L4bdb10;}}
}
B4bdb22:L4bdb22:{c.instructions+=9;NFSU2_TR(0x4bdb22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdb24:{NFSU2_TR(0x4bdb24);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+4)),r2(U+0));
}
B4bdb29:{NFSU2_TR(0x4bdb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdb2f:{NFSU2_TR(0x4bdb2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdb31:{NFSU2_TR(0x4bdb31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdb32:{NFSU2_TR(0x4bdb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x116cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdb38:{NFSU2_TR(0x4bdb38);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bdb3c:{NFSU2_TR(0x4bdb3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdb3d:{NFSU2_TR(0x4bdb3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdb42ull));
TAIL_STATIC(0x50bce0u,50b);
}
B4bdb42:L4bdb42:{c.instructions+=8;NFSU2_TR(0x4bdb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdb48:{NFSU2_TR(0x4bdb48);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
}
B4bdb4b:{NFSU2_TR(0x4bdb4b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdb4f:{NFSU2_TR(0x4bdb4f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4bdb53:{NFSU2_TR(0x4bdb53);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4bdb55:{NFSU2_TR(0x4bdb55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4bdb57:{NFSU2_TR(0x4bdb57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4bdb5a:{NFSU2_TR(0x4bdb5a);
if(r1(R+514)){{goto L4bdbec;}}
}
B4bdb60:L4bdb60:{c.instructions+=1;NFSU2_TR(0x4bdb60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdb61:L4bdb61:{c.instructions+=3;NFSU2_TR(0x4bdb61);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4bdb62:{NFSU2_TR(0x4bdb62);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdb65:{NFSU2_TR(0x4bdb65);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bdbd3;}}
}
B4bdb67:L4bdb67:{c.instructions+=4;NFSU2_TR(0x4bdb67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdb69:{NFSU2_TR(0x4bdb69);
__builtin_memmove((R+0),(R+24),4);
}
B4bdb6b:{NFSU2_TR(0x4bdb6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bdb6f:{NFSU2_TR(0x4bdb6f);
if(r1(R+518)){{goto L4bdb9e;}}
}
B4bdb71:L4bdb71:{c.instructions+=2;NFSU2_TR(0x4bdb71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdb73:{NFSU2_TR(0x4bdb73);
if(r1(R+518)){{goto L4bdb99;}}
}
B4bdb75:L4bdb75:{c.instructions+=4;NFSU2_TR(0x4bdb75);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4bdb77:{NFSU2_TR(0x4bdb77);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+8))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bdb79:{NFSU2_TR(0x4bdb79);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bdb7c:{NFSU2_TR(0x4bdb7c);
if(r1(R+518)){{goto L4bdb99;}}
}
B4bdb7e:L4bdb7e:{c.instructions+=1;NFSU2_TR(0x4bdb7e);
__builtin_memmove((R+28),(R+28),4);
}
B4bdb80:L4bdb80:{c.instructions+=2;NFSU2_TR(0x4bdb80);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdb82:{NFSU2_TR(0x4bdb82);
if(r1(R+518)){{goto L4bdb99;}}
}
B4bdb84:L4bdb84:{c.instructions+=8;NFSU2_TR(0x4bdb84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+20,u16(s16(s8(r1(U+0)))));
}
B4bdb88:{NFSU2_TR(0x4bdb88);
u8 U[2];
__builtin_memmove((U+0),(R+20),2);
s2(u32(r4(R+4)),r2(U+0));
}
B4bdb8b:{NFSU2_TR(0x4bdb8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bdb8f:{NFSU2_TR(0x4bdb8f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4bdb92:{NFSU2_TR(0x4bdb92);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bdb93:{NFSU2_TR(0x4bdb93);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4bdb94:{NFSU2_TR(0x4bdb94);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bdb97:{NFSU2_TR(0x4bdb97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdb80u);}goto L4bdb80;}}
}
B4bdb99:L4bdb99:{c.instructions+=1;NFSU2_TR(0x4bdb99);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+4)),r2(U+0));
}
B4bdb9e:L4bdb9e:{c.instructions+=8;NFSU2_TR(0x4bdb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdba4:{NFSU2_TR(0x4bdba4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdba6:{NFSU2_TR(0x4bdba6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdba8:{NFSU2_TR(0x4bdba8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdba9:{NFSU2_TR(0x4bdba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x116cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdbaf:{NFSU2_TR(0x4bdbaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bdbb3:{NFSU2_TR(0x4bdbb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdbb4:{NFSU2_TR(0x4bdbb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdbb9ull));
TAIL_STATIC(0x50bce0u,50b);
}
B4bdbb9:L4bdbb9:{c.instructions+=8;NFSU2_TR(0x4bdbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdbbf:{NFSU2_TR(0x4bdbbf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
}
B4bdbc2:{NFSU2_TR(0x4bdbc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdbc6:{NFSU2_TR(0x4bdbc6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4bdbca:{NFSU2_TR(0x4bdbca);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4bdbcc:{NFSU2_TR(0x4bdbcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4bdbce:{NFSU2_TR(0x4bdbce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4bdbd1:{NFSU2_TR(0x4bdbd1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdb61u);}goto L4bdb61;}}
}
B4bdbd3:L4bdbd3:{c.instructions+=3;NFSU2_TR(0x4bdbd3);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4bdbd7:{NFSU2_TR(0x4bdbd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bdbd8:{NFSU2_TR(0x4bdbd8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bdbec;}}
}
B4bdbda:L4bdbda:{c.instructions+=3;NFSU2_TR(0x4bdbda);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bdbdd:{NFSU2_TR(0x4bdbdd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdbdf:{NFSU2_TR(0x4bdbdf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bdbec;}}
}
B4bdbe1:L4bdbe1:{c.instructions+=2;NFSU2_TR(0x4bdbe1);
u8 U[11];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B4bdbe5:{NFSU2_TR(0x4bdbe5);
if(r1(R+518)){{goto L4bdbfa;}}
}
B4bdbe7:L4bdbe7:{c.instructions+=3;NFSU2_TR(0x4bdbe7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4bdbe8:{NFSU2_TR(0x4bdbe8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdbea:{NFSU2_TR(0x4bdbea);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdbe1u);}goto L4bdbe1;}}
}
B4bdbec:L4bdbec:{c.instructions+=6;NFSU2_TR(0x4bdbec);
__builtin_memmove((R+0),(R+28),4);
}
B4bdbee:{NFSU2_TR(0x4bdbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdbef:{NFSU2_TR(0x4bdbef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdbf0:{NFSU2_TR(0x4bdbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bdbf1:{NFSU2_TR(0x4bdbf1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdbf7:{NFSU2_TR(0x4bdbf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdbfa:L4bdbfa:{c.instructions+=2;NFSU2_TR(0x4bdbfa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdbfc:{NFSU2_TR(0x4bdbfc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdbecu);}goto L4bdbec;}}
}
B4bdbfe:L4bdbfe:{c.instructions+=1;NFSU2_TR(0x4bdbfe);
__builtin_memmove((R+0),(R+4),4);
}
B4bdc00:L4bdc00:{c.instructions+=2;NFSU2_TR(0x4bdc00);
u8 U[11];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B4bdc04:{NFSU2_TR(0x4bdc04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bdc18;}}
}
B4bdc06:L4bdc06:{c.instructions+=3;NFSU2_TR(0x4bdc06);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4bdc07:{NFSU2_TR(0x4bdc07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdc09:{NFSU2_TR(0x4bdc09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdc00u);}goto L4bdc00;}}
}
B4bdc0b:L4bdc0b:{c.instructions+=6;NFSU2_TR(0x4bdc0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdc0c:{NFSU2_TR(0x4bdc0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdc0d:{NFSU2_TR(0x4bdc0d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bdc0e:{NFSU2_TR(0x4bdc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bdc0f:{NFSU2_TR(0x4bdc0f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdc15:{NFSU2_TR(0x4bdc15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdc18:L4bdc18:{c.instructions+=2;NFSU2_TR(0x4bdc18);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdc1a:{NFSU2_TR(0x4bdc1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bdc1e;}}
}
B4bdc1c:L4bdc1c:{c.instructions+=1;NFSU2_TR(0x4bdc1c);
__builtin_memmove((R+0),(R+4),4);
}
B4bdc1e:L4bdc1e:{c.instructions+=6;NFSU2_TR(0x4bdc1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdc1f:{NFSU2_TR(0x4bdc1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdc20:{NFSU2_TR(0x4bdc20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bdc21:{NFSU2_TR(0x4bdc21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bdc22:{NFSU2_TR(0x4bdc22);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdc28:{NFSU2_TR(0x4bdc28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdc30:L4bdc30:{c.instructions+=5;NFSU2_TR(0x4bdc30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc31:{NFSU2_TR(0x4bdc31);
__builtin_memmove((R+24),(R+4),4);
}
B4bdc33:{NFSU2_TR(0x4bdc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdc39:{NFSU2_TR(0x4bdc39);
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
B4bdc3b:{NFSU2_TR(0x4bdc3b);
if(r1(R+518)){{goto L4bdd1e;}}
}
B4bdc41:L4bdc41:{c.instructions+=7;NFSU2_TR(0x4bdc41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc42:{NFSU2_TR(0x4bdc42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc43:{NFSU2_TR(0x4bdc43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc44:{NFSU2_TR(0x4bdc44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdc4a:{NFSU2_TR(0x4bdc4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc4b:{NFSU2_TR(0x4bdc4b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4bdc4d:{NFSU2_TR(0x4bdc4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdc52ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4bdc52:L4bdc52:{c.instructions+=6;NFSU2_TR(0x4bdc52);
u8 U[12];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B4bdc59:{NFSU2_TR(0x4bdc59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bdc5c:{NFSU2_TR(0x4bdc5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdc5e:{NFSU2_TR(0x4bdc5e);
__builtin_memmove((R+0),(R+20),4);
}
B4bdc60:{NFSU2_TR(0x4bdc60);
w1(R+8,u8(0xaull));
}
B4bdc62:{NFSU2_TR(0x4bdc62);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4bdc79;}}
}
B4bdc64:L4bdc64:{c.instructions+=2;NFSU2_TR(0x4bdc64);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4bdc67:{NFSU2_TR(0x4bdc67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bdc74;}}
}
B4bdc69:L4bdc69:{c.instructions+=4;NFSU2_TR(0x4bdc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdc6f:{NFSU2_TR(0x4bdc6f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4bdc70:{NFSU2_TR(0x4bdc70);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdc72:{NFSU2_TR(0x4bdc72);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bdc79;}}
}
B4bdc74:L4bdc74:{c.instructions+=3;NFSU2_TR(0x4bdc74);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4bdc75:{NFSU2_TR(0x4bdc75);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdc77:{NFSU2_TR(0x4bdc77);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdc64u);}goto L4bdc64;}}
}
B4bdc79:L4bdc79:{c.instructions+=4;NFSU2_TR(0x4bdc79);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4bdc7b:{NFSU2_TR(0x4bdc7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B4bdc7d:{NFSU2_TR(0x4bdc7d);
__builtin_memmove((R+4),(R+0),4);
}
B4bdc7f:{NFSU2_TR(0x4bdc7f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4bdc92;}}
}
B4bdc81:L4bdc81:{c.instructions+=4;NFSU2_TR(0x4bdc81);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B4bdc83:{NFSU2_TR(0x4bdc83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4bdc84:{NFSU2_TR(0x4bdc84);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bdc86:{NFSU2_TR(0x4bdc86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bdc8e;}}
}
B4bdc88:L4bdc88:{c.instructions+=3;NFSU2_TR(0x4bdc88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4bdc89:{NFSU2_TR(0x4bdc89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bdc8c:{NFSU2_TR(0x4bdc8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bdc92;}}
}
B4bdc8e:L4bdc8e:{c.instructions+=2;NFSU2_TR(0x4bdc8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B4bdc90:{NFSU2_TR(0x4bdc90);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdc81u);}goto L4bdc81;}}
}
B4bdc92:L4bdc92:{c.instructions+=8;NFSU2_TR(0x4bdc92);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4bdc94:{NFSU2_TR(0x4bdc94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc95:{NFSU2_TR(0x4bdc95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4bdc96:{NFSU2_TR(0x4bdc96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc97:{NFSU2_TR(0x4bdc97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdc98:{NFSU2_TR(0x4bdc98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdc9e:{NFSU2_TR(0x4bdc9e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B4bdca1:{NFSU2_TR(0x4bdca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdca6ull));
TAIL_STATIC(0x51dee0u,51d);
}
B4bdca6:L4bdca6:{c.instructions+=2;NFSU2_TR(0x4bdca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdca7:{NFSU2_TR(0x4bdca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdcacull));
TAIL_STATIC(0x4ae760u,4ae);
}
B4bdcac:L4bdcac:{c.instructions+=8;NFSU2_TR(0x4bdcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdcb2:{NFSU2_TR(0x4bdcb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400802ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4bdcb9:{NFSU2_TR(0x4bdcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdcbf:{NFSU2_TR(0x4bdcbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bdcc2:{NFSU2_TR(0x4bdcc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdcc5:{NFSU2_TR(0x4bdcc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdccb:{NFSU2_TR(0x4bdccb);
__builtin_memmove((R+4),(R+28),4);
}
B4bdccd:{NFSU2_TR(0x4bdccd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bdcd8;}}
}
B4bdccf:L4bdccf:{c.instructions+=2;NFSU2_TR(0x4bdccf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdcd1:{NFSU2_TR(0x4bdcd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdcd6ull));
TAIL_STATIC(0x50d880u,50d);
}
B4bdcd6:L4bdcd6:{c.instructions+=1;NFSU2_TR(0x4bdcd6);
{goto L4bdcf5;}
}
B4bdcd8:L4bdcd8:{c.instructions+=2;NFSU2_TR(0x4bdcd8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdcda:{NFSU2_TR(0x4bdcda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdcdfull));
TAIL_STATIC(0x50d880u,50d);
}
B4bdcdf:L4bdcdf:{c.instructions+=4;NFSU2_TR(0x4bdcdf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdce1:{NFSU2_TR(0x4bdce1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdce3:{NFSU2_TR(0x4bdce3);
__builtin_memmove((R+4),(R+28),4);
}
B4bdce5:{NFSU2_TR(0x4bdce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdceaull));
TAIL_STATIC(0x50d820u,50d);
}
B4bdcea:L4bdcea:{c.instructions+=4;NFSU2_TR(0x4bdcea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdcec:{NFSU2_TR(0x4bdcec);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdcee:{NFSU2_TR(0x4bdcee);
__builtin_memmove((R+4),(R+28),4);
}
B4bdcf0:{NFSU2_TR(0x4bdcf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdcf5ull));
TAIL_STATIC(0x50d820u,50d);
}
B4bdcf5:L4bdcf5:{c.instructions+=7;NFSU2_TR(0x4bdcf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdcfb:{NFSU2_TR(0x4bdcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bdd01:{NFSU2_TR(0x4bdd01);
__builtin_memmove((R+0),(R+4),4);
}
B4bdd03:{NFSU2_TR(0x4bdd03);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B4bdd05:{NFSU2_TR(0x4bdd05);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bdd06:{NFSU2_TR(0x4bdd06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bdd09:{NFSU2_TR(0x4bdd09);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bdd10;}}
}
B4bdd0b:L4bdd0b:{c.instructions+=1;NFSU2_TR(0x4bdd0b);
w4(R+0,u32(0x1ull));
}
B4bdd10:L4bdd10:{c.instructions+=5;NFSU2_TR(0x4bdd10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd11:{NFSU2_TR(0x4bdd11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd12:{NFSU2_TR(0x4bdd12);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd14:{NFSU2_TR(0x4bdd14);
__builtin_memmove((R+4),(R+28),4);
}
B4bdd16:{NFSU2_TR(0x4bdd16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdd1bull));
TAIL_STATIC(0x538080u,538);
}
B4bdd1b:L4bdd1b:{c.instructions+=3;NFSU2_TR(0x4bdd1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdd1c:{NFSU2_TR(0x4bdd1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bdd1d:{NFSU2_TR(0x4bdd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bdd1e:L4bdd1e:{c.instructions+=2;NFSU2_TR(0x4bdd1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdd1f:{NFSU2_TR(0x4bdd1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdd20:L4bdd20:{c.instructions+=7;NFSU2_TR(0x4bdd20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd21:{NFSU2_TR(0x4bdd21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd22:{NFSU2_TR(0x4bdd22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bdd26:{NFSU2_TR(0x4bdd26);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bdd29:{NFSU2_TR(0x4bdd29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd2a:{NFSU2_TR(0x4bdd2a);
__builtin_memmove((R+12),(R+4),4);
}
B4bdd2c:{NFSU2_TR(0x4bdd2c);
if(r1(R+518)){{goto L4bdd63;}}
}
B4bdd2e:L4bdd2e:{c.instructions+=1;NFSU2_TR(0x4bdd2e);
__builtin_memmove((R+28),(R+28),4);
}
B4bdd30:L4bdd30:{c.instructions+=3;NFSU2_TR(0x4bdd30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd31:{NFSU2_TR(0x4bdd31);
__builtin_memmove((R+4),(R+12),4);
}
B4bdd33:{NFSU2_TR(0x4bdd33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdd38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdad0u);}goto L4bdad0;}
}
B4bdd38:L4bdd38:{c.instructions+=4;NFSU2_TR(0x4bdd38);
__builtin_memmove((R+28),(R+0),4);
}
B4bdd3a:{NFSU2_TR(0x4bdd3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bdd3d:{NFSU2_TR(0x4bdd3d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdd42:{NFSU2_TR(0x4bdd42);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bdd6a;}}
}
B4bdd44:L4bdd44:{c.instructions+=4;NFSU2_TR(0x4bdd44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd45:{NFSU2_TR(0x4bdd45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdd46:{NFSU2_TR(0x4bdd46);
__builtin_memmove((R+4),(R+12),4);
}
B4bdd48:{NFSU2_TR(0x4bdd48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdd4dull));
TAIL_STATIC(0x4a1fd0u,4a1);
}
B4bdd4d:L4bdd4d:{c.instructions+=4;NFSU2_TR(0x4bdd4d);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4bdd50:{NFSU2_TR(0x4bdd50);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B4bdd52:{NFSU2_TR(0x4bdd52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bdd54:{NFSU2_TR(0x4bdd54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bdd5e;}}
}
B4bdd56:L4bdd56:{c.instructions+=4;NFSU2_TR(0x4bdd56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bdd59:{NFSU2_TR(0x4bdd59);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bdd5a:{NFSU2_TR(0x4bdd5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bdd5c:{NFSU2_TR(0x4bdd5c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdd56u);}goto L4bdd56;}}
}
B4bdd5e:L4bdd5e:{c.instructions+=2;NFSU2_TR(0x4bdd5e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bdd61:{NFSU2_TR(0x4bdd61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdd30u);}goto L4bdd30;}}
}
B4bdd63:L4bdd63:{c.instructions+=2;NFSU2_TR(0x4bdd63);
__builtin_memmove((R+4),(R+12),4);
}
B4bdd65:{NFSU2_TR(0x4bdd65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdd6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdc30u);}goto L4bdc30;}
}
B4bdd6a:L4bdd6a:{c.instructions+=4;NFSU2_TR(0x4bdd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdd6b:{NFSU2_TR(0x4bdd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdd6c:{NFSU2_TR(0x4bdd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bdd6d:{NFSU2_TR(0x4bdd6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdd70:L4bdd70:{c.instructions+=3;NFSU2_TR(0x4bdd70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdd76:{NFSU2_TR(0x4bdd76);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4bdd7c:{NFSU2_TR(0x4bdd7c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bdd85;}}
}
B4bdd7e:L4bdd7e:{c.instructions+=2;NFSU2_TR(0x4bdd7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bdd7f:{NFSU2_TR(0x4bdd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdd85:L4bdd85:{c.instructions+=1;NFSU2_TR(0x4bdd85);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdc30u);}goto L4bdc30;}
}
B4bdd90:L4bdd90:{c.instructions+=3;NFSU2_TR(0x4bdd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdd96:{NFSU2_TR(0x4bdd96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bdd99:{NFSU2_TR(0x4bdd99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bdda2;}}
}
B4bdd9b:L4bdd9b:{c.instructions+=2;NFSU2_TR(0x4bdd9b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4bdd9c:{NFSU2_TR(0x4bdd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdda2:L4bdda2:{c.instructions+=1;NFSU2_TR(0x4bdda2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bdc30u);}goto L4bdc30;}
}
B4bddb0:L4bddb0:{c.instructions+=2;NFSU2_TR(0x4bddb0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bddb8:{NFSU2_TR(0x4bddb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bddce;}}
}
B4bddba:L4bddba:{c.instructions+=5;NFSU2_TR(0x4bddba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bddbe:{NFSU2_TR(0x4bddbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bddc0:{NFSU2_TR(0x4bddc0);
u8 U[4];
w4(U+0,u32(0x794f18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bddc5:{NFSU2_TR(0x4bddc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bddc6:{NFSU2_TR(0x4bddc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bddcbull));
TAIL_STATIC(0x537980u,537);
}
B4bddcb:L4bddcb:{c.instructions+=1;NFSU2_TR(0x4bddcb);
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
B4bddce:L4bddce:{c.instructions+=1;NFSU2_TR(0x4bddce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdde0:L4bdde0:{c.instructions+=2;NFSU2_TR(0x4bdde0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bdde8:{NFSU2_TR(0x4bdde8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bddfe;}}
}
B4bddea:L4bddea:{c.instructions+=5;NFSU2_TR(0x4bddea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bddee:{NFSU2_TR(0x4bddee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bddf0:{NFSU2_TR(0x4bddf0);
u8 U[4];
w4(U+0,u32(0x79040cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bddf5:{NFSU2_TR(0x4bddf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bddf6:{NFSU2_TR(0x4bddf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bddfbull));
TAIL_STATIC(0x537980u,537);
}
B4bddfb:L4bddfb:{c.instructions+=1;NFSU2_TR(0x4bddfb);
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
B4bddfe:L4bddfe:{c.instructions+=1;NFSU2_TR(0x4bddfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bde10:L4bde10:{c.instructions+=2;NFSU2_TR(0x4bde10);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bde18:{NFSU2_TR(0x4bde18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bde2e;}}
}
B4bde1a:L4bde1a:{c.instructions+=5;NFSU2_TR(0x4bde1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bde1e:{NFSU2_TR(0x4bde1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde20:{NFSU2_TR(0x4bde20);
u8 U[4];
w4(U+0,u32(0x794f44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde25:{NFSU2_TR(0x4bde25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde26:{NFSU2_TR(0x4bde26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bde2bull));
TAIL_STATIC(0x537980u,537);
}
B4bde2b:L4bde2b:{c.instructions+=1;NFSU2_TR(0x4bde2b);
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
B4bde2e:L4bde2e:{c.instructions+=1;NFSU2_TR(0x4bde2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bde40:L4bde40:{c.instructions+=14;NFSU2_TR(0x4bde40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde42:{NFSU2_TR(0x4bde42);
u8 U[4];
w4(U+0,u32(0x77395cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde47:{NFSU2_TR(0x4bde47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bde4d:{NFSU2_TR(0x4bde4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde4e:{NFSU2_TR(0x4bde4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bde55:{NFSU2_TR(0x4bde55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde56:{NFSU2_TR(0x4bde56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde57:{NFSU2_TR(0x4bde57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde58:{NFSU2_TR(0x4bde58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde59:{NFSU2_TR(0x4bde59);
__builtin_memmove((R+24),(R+4),4);
}
B4bde5b:{NFSU2_TR(0x4bde5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bde5e:{NFSU2_TR(0x4bde5e);
u8 U[4];
w4(U+0,u32(0xbc782557ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde63:{NFSU2_TR(0x4bde63);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde68:{NFSU2_TR(0x4bde68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bde6dull));
TAIL_STATIC(0x505450u,505);
}
B4bde6d:L4bde6d:{c.instructions+=3;NFSU2_TR(0x4bde6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde6e:{NFSU2_TR(0x4bde6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde6f:{NFSU2_TR(0x4bde6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bde74ull));
TAIL_STATIC(0x537a10u,537);
}
B4bde74:L4bde74:{c.instructions+=3;NFSU2_TR(0x4bde74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bde77:{NFSU2_TR(0x4bde77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde78:{NFSU2_TR(0x4bde78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bde7dull));
TAIL_STATIC(0x50c900u,50c);
}
B4bde7d:L4bde7d:{c.instructions+=2;NFSU2_TR(0x4bde7d);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde7f:{NFSU2_TR(0x4bde7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bde84ull));
TAIL_STATIC(0x575620u,575);
}
B4bde84:L4bde84:{c.instructions+=6;NFSU2_TR(0x4bde84);
__builtin_memmove((R+28),(R+0),4);
}
B4bde86:{NFSU2_TR(0x4bde86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bde89:{NFSU2_TR(0x4bde89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bde8d:{NFSU2_TR(0x4bde8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bde8f:{NFSU2_TR(0x4bde8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bde97:{NFSU2_TR(0x4bde97);
if(r1(R+518)){{goto L4bdeb4;}}
}
B4bde99:L4bde99:{c.instructions+=5;NFSU2_TR(0x4bde99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bde9b:{NFSU2_TR(0x4bde9b);
u8 U[4];
w4(U+0,u32(0x3bfe592cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdea0:{NFSU2_TR(0x4bdea0);
u8 U[4];
w4(U+0,u32(0xa2515ebdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdea5:{NFSU2_TR(0x4bdea5);
__builtin_memmove((R+4),(R+28),4);
}
B4bdea7:{NFSU2_TR(0x4bdea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdeacull));
TAIL_STATIC(0x51f670u,51f);
}
B4bdeac:L4bdeac:{c.instructions+=2;NFSU2_TR(0x4bdeac);
u8 U[4];
w4(U+0,u32(0x794f10ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bdeb2:{NFSU2_TR(0x4bdeb2);
{goto L4bdeb6;}
}
B4bdeb4:L4bdeb4:{c.instructions+=1;NFSU2_TR(0x4bdeb4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4bdeb6:L4bdeb6:{c.instructions+=6;NFSU2_TR(0x4bdeb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bdeb8:{NFSU2_TR(0x4bdeb8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdebb:{NFSU2_TR(0x4bdebb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdebc:{NFSU2_TR(0x4bdebc);
__builtin_memmove((R+4),(R+24),4);
}
B4bdebe:{NFSU2_TR(0x4bdebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdec2:{NFSU2_TR(0x4bdec2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdec5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bdec5:L4bdec5:{c.instructions+=2;NFSU2_TR(0x4bdec5);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdec7:{NFSU2_TR(0x4bdec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdeccull));
TAIL_STATIC(0x575620u,575);
}
B4bdecc:L4bdecc:{c.instructions+=6;NFSU2_TR(0x4bdecc);
__builtin_memmove((R+28),(R+0),4);
}
B4bdece:{NFSU2_TR(0x4bdece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bded1:{NFSU2_TR(0x4bded1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bded5:{NFSU2_TR(0x4bded5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bded7:{NFSU2_TR(0x4bded7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bdedf:{NFSU2_TR(0x4bdedf);
if(r1(R+518)){{goto L4bdefc;}}
}
B4bdee1:L4bdee1:{c.instructions+=5;NFSU2_TR(0x4bdee1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdee3:{NFSU2_TR(0x4bdee3);
u8 U[4];
w4(U+0,u32(0x553eda6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdee8:{NFSU2_TR(0x4bdee8);
u8 U[4];
w4(U+0,u32(0x9973213cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdeed:{NFSU2_TR(0x4bdeed);
__builtin_memmove((R+4),(R+28),4);
}
B4bdeef:{NFSU2_TR(0x4bdeef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdef4ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bdef4:L4bdef4:{c.instructions+=2;NFSU2_TR(0x4bdef4);
u8 U[4];
w4(U+0,u32(0x794f34ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bdefa:{NFSU2_TR(0x4bdefa);
{goto L4bdefe;}
}
B4bdefc:L4bdefc:{c.instructions+=1;NFSU2_TR(0x4bdefc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdefe:L4bdefe:{c.instructions+=5;NFSU2_TR(0x4bdefe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bdf00:{NFSU2_TR(0x4bdf00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf01:{NFSU2_TR(0x4bdf01);
__builtin_memmove((R+4),(R+24),4);
}
B4bdf03:{NFSU2_TR(0x4bdf03);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdf07:{NFSU2_TR(0x4bdf07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf0aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bdf0a:L4bdf0a:{c.instructions+=2;NFSU2_TR(0x4bdf0a);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf0c:{NFSU2_TR(0x4bdf0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf11ull));
TAIL_STATIC(0x575620u,575);
}
B4bdf11:L4bdf11:{c.instructions+=6;NFSU2_TR(0x4bdf11);
__builtin_memmove((R+28),(R+0),4);
}
B4bdf13:{NFSU2_TR(0x4bdf13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bdf16:{NFSU2_TR(0x4bdf16);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdf1a:{NFSU2_TR(0x4bdf1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdf1c:{NFSU2_TR(0x4bdf1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bdf24:{NFSU2_TR(0x4bdf24);
if(r1(R+518)){{goto L4bdf41;}}
}
B4bdf26:L4bdf26:{c.instructions+=5;NFSU2_TR(0x4bdf26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf28:{NFSU2_TR(0x4bdf28);
u8 U[4];
w4(U+0,u32(0x29742f2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf2d:{NFSU2_TR(0x4bdf2d);
u8 U[4];
w4(U+0,u32(0x9dd4bb38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf32:{NFSU2_TR(0x4bdf32);
__builtin_memmove((R+4),(R+28),4);
}
B4bdf34:{NFSU2_TR(0x4bdf34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf39ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bdf39:L4bdf39:{c.instructions+=2;NFSU2_TR(0x4bdf39);
u8 U[4];
w4(U+0,u32(0x794f3cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bdf3f:{NFSU2_TR(0x4bdf3f);
{goto L4bdf43;}
}
B4bdf41:L4bdf41:{c.instructions+=1;NFSU2_TR(0x4bdf41);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdf43:L4bdf43:{c.instructions+=5;NFSU2_TR(0x4bdf43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bdf45:{NFSU2_TR(0x4bdf45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf46:{NFSU2_TR(0x4bdf46);
__builtin_memmove((R+4),(R+24),4);
}
B4bdf48:{NFSU2_TR(0x4bdf48);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdf4c:{NFSU2_TR(0x4bdf4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bdf4f:L4bdf4f:{c.instructions+=5;NFSU2_TR(0x4bdf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdf52:{NFSU2_TR(0x4bdf52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bdf55:{NFSU2_TR(0x4bdf55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdf58:{NFSU2_TR(0x4bdf58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf59:{NFSU2_TR(0x4bdf59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf5eull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4bdf5e:L4bdf5e:{c.instructions+=4;NFSU2_TR(0x4bdf5e);
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
B4bdf61:{NFSU2_TR(0x4bdf61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf62:{NFSU2_TR(0x4bdf62);
__builtin_memmove((R+4),(R+28),4);
}
B4bdf64:{NFSU2_TR(0x4bdf64);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bdf67:L4bdf67:{c.instructions+=3;NFSU2_TR(0x4bdf67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bdf69:{NFSU2_TR(0x4bdf69);
__builtin_memmove((R+4),(R+24),4);
}
B4bdf6b:{NFSU2_TR(0x4bdf6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdf6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bdf6e:L4bdf6e:{c.instructions+=7;NFSU2_TR(0x4bdf6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bdf72:{NFSU2_TR(0x4bdf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bdf73:{NFSU2_TR(0x4bdf73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdf74:{NFSU2_TR(0x4bdf74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bdf75:{NFSU2_TR(0x4bdf75);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bdf7c:{NFSU2_TR(0x4bdf7c);
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
B4bdf7f:{NFSU2_TR(0x4bdf7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdf80:L4bdf80:{c.instructions+=5;NFSU2_TR(0x4bdf80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bdf84:{NFSU2_TR(0x4bdf84);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdf89:{NFSU2_TR(0x4bdf89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdf8a:{NFSU2_TR(0x4bdf8a);
__builtin_memmove((R+24),(R+4),4);
}
B4bdf8c:{NFSU2_TR(0x4bdf8c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4be065u,4be);}
}
B4bdf92:L4bdf92:{c.instructions+=1;NFSU2_TR(0x4bdf92);
if(r1(R+518)){TAIL_STATIC(0x4be049u,4be);}
}
B4bdf98:L4bdf98:{c.instructions+=2;NFSU2_TR(0x4bdf98);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdf9d:{NFSU2_TR(0x4bdf9d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4be031u,4be);}
}
B4bdfa3:L4bdfa3:{c.instructions+=1;NFSU2_TR(0x4bdfa3);
if(r1(R+518)){{goto L4bdffd;}}
}
B4bdfa5:L4bdfa5:{c.instructions+=2;NFSU2_TR(0x4bdfa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bdfaa:{NFSU2_TR(0x4bdfaa);
if(r1(R+518)){{goto L4bdffd;}}
}
B4bdfac:L4bdfac:{c.instructions+=2;NFSU2_TR(0x4bdfac);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bdfb1:{NFSU2_TR(0x4bdfb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4be1acu,4be);}
}
B4bdfb7:L4bdfb7:{c.instructions+=5;NFSU2_TR(0x4bdfb7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfb9:{NFSU2_TR(0x4bdfb9);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfbe:{NFSU2_TR(0x4bdfbe);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfc3:{NFSU2_TR(0x4bdfc3);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfc8:{NFSU2_TR(0x4bdfc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdfcdull));
TAIL_STATIC(0x537c00u,537);
}
B4bdfcd:L4bdfcd:{c.instructions+=5;NFSU2_TR(0x4bdfcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfcf:{NFSU2_TR(0x4bdfcf);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfd4:{NFSU2_TR(0x4bdfd4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfd9:{NFSU2_TR(0x4bdfd9);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdfde:{NFSU2_TR(0x4bdfde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdfe3ull));
TAIL_STATIC(0x537c00u,537);
}
B4bdfe3:L4bdfe3:{c.instructions+=4;NFSU2_TR(0x4bdfe3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B4bdfe6:{NFSU2_TR(0x4bdfe6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bdfe9:{NFSU2_TR(0x4bdfe9);
__builtin_memmove((R+4),(R+24),4);
}
B4bdfeb:{NFSU2_TR(0x4bdfeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdff0ull));
TAIL_STATIC(0x4958d0u,495);
}
B4bdff0:L4bdff0:{c.instructions+=3;NFSU2_TR(0x4bdff0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bdff2:{NFSU2_TR(0x4bdff2);
__builtin_memmove((R+4),(R+24),4);
}
B4bdff4:{NFSU2_TR(0x4bdff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bdff9ull));
TAIL_STATIC(0x538500u,538);
}
B4bdff9:L4bdff9:{c.instructions+=2;NFSU2_TR(0x4bdff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bdffa:{NFSU2_TR(0x4bdffa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bdffd:L4bdffd:{c.instructions+=1;NFSU2_TR(0x4bdffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x4be003u,4be);
}
XIT:NFSU2_TR_EXIT(0x4bd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
