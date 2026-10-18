#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6bb(u8* __restrict R,Cpu& c);
u32 body_6bc(u8* __restrict R,Cpu& c);
u32 body_6be(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6c7(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6ce(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6bd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6bd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6bd(u8* __restrict R,Cpu& c);
u32 page_6bd(Cpu& c){return body_6bd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6bd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6bd001:goto L6bd001;
case 0x6bd003:goto L6bd003;
case 0x6bd006:c.instructions+=1;goto B6bd006;
case 0x6bd008:goto L6bd008;
case 0x6bd00b:c.instructions+=6;goto B6bd00b;
case 0x6bd00d:c.instructions+=5;goto B6bd00d;
case 0x6bd010:c.instructions+=4;goto B6bd010;
case 0x6bd013:c.instructions+=3;goto B6bd013;
case 0x6bd016:c.instructions+=2;goto B6bd016;
case 0x6bd019:c.instructions+=1;goto B6bd019;
case 0x6bd01b:goto L6bd01b;
case 0x6bd01d:goto L6bd01d;
case 0x6bd01e:c.instructions+=4;goto B6bd01e;
case 0x6bd01f:c.instructions+=3;goto B6bd01f;
case 0x6bd020:c.instructions+=2;goto B6bd020;
case 0x6bd021:c.instructions+=1;goto B6bd021;
case 0x6bd024:goto L6bd024;
case 0x6bd026:c.instructions+=2;goto B6bd026;
case 0x6bd027:c.instructions+=1;goto B6bd027;
case 0x6bd029:goto L6bd029;
case 0x6bd02b:c.instructions+=14;goto B6bd02b;
case 0x6bd02c:c.instructions+=13;goto B6bd02c;
case 0x6bd02e:c.instructions+=12;goto B6bd02e;
case 0x6bd031:c.instructions+=11;goto B6bd031;
case 0x6bd032:c.instructions+=10;goto B6bd032;
case 0x6bd033:c.instructions+=9;goto B6bd033;
case 0x6bd035:c.instructions+=8;goto B6bd035;
case 0x6bd038:c.instructions+=7;goto B6bd038;
case 0x6bd03a:c.instructions+=6;goto B6bd03a;
case 0x6bd03b:c.instructions+=5;goto B6bd03b;
case 0x6bd03d:c.instructions+=4;goto B6bd03d;
case 0x6bd03f:c.instructions+=3;goto B6bd03f;
case 0x6bd042:c.instructions+=2;goto B6bd042;
case 0x6bd045:c.instructions+=1;goto B6bd045;
case 0x6bd047:goto L6bd047;
case 0x6bd04a:c.instructions+=5;goto B6bd04a;
case 0x6bd050:c.instructions+=4;goto B6bd050;
case 0x6bd053:c.instructions+=3;goto B6bd053;
case 0x6bd055:c.instructions+=2;goto B6bd055;
case 0x6bd05b:c.instructions+=1;goto B6bd05b;
case 0x6bd060:goto L6bd060;
case 0x6bd061:c.instructions+=2;goto B6bd061;
case 0x6bd064:c.instructions+=1;goto B6bd064;
case 0x6bd066:goto L6bd066;
case 0x6bd068:c.instructions+=3;goto B6bd068;
case 0x6bd06b:c.instructions+=2;goto B6bd06b;
case 0x6bd06e:c.instructions+=1;goto B6bd06e;
case 0x6bd074:goto L6bd074;
case 0x6bd077:c.instructions+=7;goto B6bd077;
case 0x6bd07d:c.instructions+=6;goto B6bd07d;
case 0x6bd080:c.instructions+=5;goto B6bd080;
case 0x6bd086:c.instructions+=4;goto B6bd086;
case 0x6bd088:c.instructions+=3;goto B6bd088;
case 0x6bd08e:c.instructions+=2;goto B6bd08e;
case 0x6bd094:c.instructions+=1;goto B6bd094;
case 0x6bd096:goto L6bd096;
case 0x6bd09c:c.instructions+=1;goto B6bd09c;
case 0x6bd09e:goto L6bd09e;
case 0x6bd0a4:c.instructions+=1;goto B6bd0a4;
case 0x6bd0a6:goto L6bd0a6;
case 0x6bd0ac:c.instructions+=1;goto B6bd0ac;
case 0x6bd0ae:goto L6bd0ae;
case 0x6bd0b4:c.instructions+=1;goto B6bd0b4;
case 0x6bd0b6:goto L6bd0b6;
case 0x6bd0bc:c.instructions+=1;goto B6bd0bc;
case 0x6bd0be:goto L6bd0be;
case 0x6bd0c4:c.instructions+=1;goto B6bd0c4;
case 0x6bd0c6:goto L6bd0c6;
case 0x6bd0cc:c.instructions+=1;goto B6bd0cc;
case 0x6bd0ce:goto L6bd0ce;
case 0x6bd0d4:c.instructions+=1;goto B6bd0d4;
case 0x6bd0d6:goto L6bd0d6;
case 0x6bd0dc:c.instructions+=1;goto B6bd0dc;
case 0x6bd0de:goto L6bd0de;
case 0x6bd0e4:c.instructions+=1;goto B6bd0e4;
case 0x6bd0e6:goto L6bd0e6;
case 0x6bd0ec:c.instructions+=1;goto B6bd0ec;
case 0x6bd0ee:goto L6bd0ee;
case 0x6bd0f4:c.instructions+=1;goto B6bd0f4;
case 0x6bd0f6:goto L6bd0f6;
case 0x6bd0f7:c.instructions+=1;goto B6bd0f7;
case 0x6bd0fc:goto L6bd0fc;
case 0x6bd0fe:c.instructions+=6;goto B6bd0fe;
case 0x6bd100:c.instructions+=5;goto B6bd100;
case 0x6bd106:c.instructions+=4;goto B6bd106;
case 0x6bd10b:c.instructions+=3;goto B6bd10b;
case 0x6bd110:c.instructions+=2;goto B6bd110;
case 0x6bd113:c.instructions+=1;goto B6bd113;
case 0x6bd115:goto L6bd115;
case 0x6bd119:goto L6bd119;
case 0x6bd11d:c.instructions+=2;goto B6bd11d;
case 0x6bd11f:c.instructions+=1;goto B6bd11f;
case 0x6bd121:goto L6bd121;
case 0x6bd124:c.instructions+=1;goto B6bd124;
case 0x6bd127:goto L6bd127;
case 0x6bd12d:c.instructions+=7;goto B6bd12d;
case 0x6bd130:c.instructions+=6;goto B6bd130;
case 0x6bd133:c.instructions+=5;goto B6bd133;
case 0x6bd136:c.instructions+=4;goto B6bd136;
case 0x6bd139:c.instructions+=3;goto B6bd139;
case 0x6bd13c:c.instructions+=2;goto B6bd13c;
case 0x6bd13f:c.instructions+=1;goto B6bd13f;
case 0x6bd141:goto L6bd141;
case 0x6bd145:c.instructions+=1;goto B6bd145;
case 0x6bd147:goto L6bd147;
case 0x6bd14a:c.instructions+=2;goto B6bd14a;
case 0x6bd150:c.instructions+=1;goto B6bd150;
case 0x6bd152:goto L6bd152;
case 0x6bd155:c.instructions+=3;goto B6bd155;
case 0x6bd157:c.instructions+=2;goto B6bd157;
case 0x6bd159:c.instructions+=1;goto B6bd159;
case 0x6bd15c:goto L6bd15c;
case 0x6bd15f:c.instructions+=1;goto B6bd15f;
case 0x6bd161:goto L6bd161;
case 0x6bd167:goto L6bd167;
case 0x6bd169:goto L6bd169;
case 0x6bd16c:c.instructions+=3;goto B6bd16c;
case 0x6bd16f:c.instructions+=2;goto B6bd16f;
case 0x6bd172:c.instructions+=1;goto B6bd172;
case 0x6bd174:goto L6bd174;
case 0x6bd17a:c.instructions+=4;goto B6bd17a;
case 0x6bd17c:c.instructions+=3;goto B6bd17c;
case 0x6bd181:c.instructions+=2;goto B6bd181;
case 0x6bd186:c.instructions+=1;goto B6bd186;
case 0x6bd18c:goto L6bd18c;
case 0x6bd18f:c.instructions+=1;goto B6bd18f;
case 0x6bd195:goto L6bd195;
case 0x6bd197:c.instructions+=9;goto B6bd197;
case 0x6bd199:c.instructions+=8;goto B6bd199;
case 0x6bd19a:c.instructions+=7;goto B6bd19a;
case 0x6bd19b:c.instructions+=6;goto B6bd19b;
case 0x6bd19d:c.instructions+=5;goto B6bd19d;
case 0x6bd1a0:c.instructions+=4;goto B6bd1a0;
case 0x6bd1a1:c.instructions+=3;goto B6bd1a1;
case 0x6bd1a7:c.instructions+=2;goto B6bd1a7;
case 0x6bd1a9:c.instructions+=1;goto B6bd1a9;
case 0x6bd1af:goto L6bd1af;
case 0x6bd1b1:c.instructions+=1;goto B6bd1b1;
case 0x6bd1b7:goto L6bd1b7;
case 0x6bd1b9:c.instructions+=1;goto B6bd1b9;
case 0x6bd1be:goto L6bd1be;
case 0x6bd1c0:c.instructions+=1;goto B6bd1c0;
case 0x6bd1c2:goto L6bd1c2;
case 0x6bd1c4:c.instructions+=1;goto B6bd1c4;
case 0x6bd1c9:goto L6bd1c9;
case 0x6bd1cb:c.instructions+=1;goto B6bd1cb;
case 0x6bd1cd:goto L6bd1cd;
case 0x6bd1cf:goto L6bd1cf;
case 0x6bd1d1:c.instructions+=2;goto B6bd1d1;
case 0x6bd1d4:c.instructions+=1;goto B6bd1d4;
case 0x6bd1da:goto L6bd1da;
case 0x6bd1db:c.instructions+=5;goto B6bd1db;
case 0x6bd1dd:c.instructions+=4;goto B6bd1dd;
case 0x6bd1df:c.instructions+=3;goto B6bd1df;
case 0x6bd1e4:c.instructions+=2;goto B6bd1e4;
case 0x6bd1e6:c.instructions+=1;goto B6bd1e6;
case 0x6bd1eb:goto L6bd1eb;
case 0x6bd1ed:c.instructions+=1;goto B6bd1ed;
case 0x6bd1f3:goto L6bd1f3;
case 0x6bd1f9:c.instructions+=2;goto B6bd1f9;
case 0x6bd1fb:c.instructions+=1;goto B6bd1fb;
case 0x6bd200:goto L6bd200;
case 0x6bd202:c.instructions+=1;goto B6bd202;
case 0x6bd208:goto L6bd208;
case 0x6bd20e:c.instructions+=18;goto B6bd20e;
case 0x6bd211:c.instructions+=17;goto B6bd211;
case 0x6bd214:c.instructions+=16;goto B6bd214;
case 0x6bd217:c.instructions+=15;goto B6bd217;
case 0x6bd219:c.instructions+=14;goto B6bd219;
case 0x6bd21f:c.instructions+=13;goto B6bd21f;
case 0x6bd222:c.instructions+=12;goto B6bd222;
case 0x6bd225:c.instructions+=11;goto B6bd225;
case 0x6bd228:c.instructions+=10;goto B6bd228;
case 0x6bd22b:c.instructions+=9;goto B6bd22b;
case 0x6bd22e:c.instructions+=8;goto B6bd22e;
case 0x6bd231:c.instructions+=7;goto B6bd231;
case 0x6bd233:c.instructions+=6;goto B6bd233;
case 0x6bd236:c.instructions+=5;goto B6bd236;
case 0x6bd239:c.instructions+=4;goto B6bd239;
case 0x6bd23c:c.instructions+=3;goto B6bd23c;
case 0x6bd23d:c.instructions+=2;goto B6bd23d;
case 0x6bd23f:c.instructions+=1;goto B6bd23f;
case 0x6bd244:goto L6bd244;
case 0x6bd246:c.instructions+=1;goto B6bd246;
case 0x6bd24c:goto L6bd24c;
case 0x6bd24e:c.instructions+=1;goto B6bd24e;
case 0x6bd253:goto L6bd253;
case 0x6bd255:c.instructions+=1;goto B6bd255;
case 0x6bd257:goto L6bd257;
case 0x6bd259:c.instructions+=1;goto B6bd259;
case 0x6bd25e:goto L6bd25e;
case 0x6bd260:c.instructions+=1;goto B6bd260;
case 0x6bd262:goto L6bd262;
case 0x6bd264:goto L6bd264;
case 0x6bd266:c.instructions+=2;goto B6bd266;
case 0x6bd269:c.instructions+=1;goto B6bd269;
case 0x6bd26f:goto L6bd26f;
case 0x6bd275:c.instructions+=6;goto B6bd275;
case 0x6bd276:c.instructions+=5;goto B6bd276;
case 0x6bd279:c.instructions+=4;goto B6bd279;
case 0x6bd27b:c.instructions+=3;goto B6bd27b;
case 0x6bd27d:c.instructions+=2;goto B6bd27d;
case 0x6bd282:c.instructions+=1;goto B6bd282;
case 0x6bd287:goto L6bd287;
case 0x6bd289:c.instructions+=2;goto B6bd289;
case 0x6bd28b:c.instructions+=1;goto B6bd28b;
case 0x6bd291:goto L6bd291;
case 0x6bd297:c.instructions+=1;goto B6bd297;
case 0x6bd29c:goto L6bd29c;
case 0x6bd29e:c.instructions+=1;goto B6bd29e;
case 0x6bd2a4:goto L6bd2a4;
case 0x6bd2a6:c.instructions+=3;goto B6bd2a6;
case 0x6bd2a7:c.instructions+=2;goto B6bd2a7;
case 0x6bd2aa:c.instructions+=1;goto B6bd2aa;
case 0x6bd2ac:goto L6bd2ac;
case 0x6bd2b2:c.instructions+=10;goto B6bd2b2;
case 0x6bd2b5:c.instructions+=9;goto B6bd2b5;
case 0x6bd2b8:c.instructions+=8;goto B6bd2b8;
case 0x6bd2ba:c.instructions+=7;goto B6bd2ba;
case 0x6bd2be:c.instructions+=6;goto B6bd2be;
case 0x6bd2c1:c.instructions+=5;goto B6bd2c1;
case 0x6bd2c4:c.instructions+=4;goto B6bd2c4;
case 0x6bd2c7:c.instructions+=3;goto B6bd2c7;
case 0x6bd2ca:c.instructions+=2;goto B6bd2ca;
case 0x6bd2cd:c.instructions+=1;goto B6bd2cd;
case 0x6bd2cf:goto L6bd2cf;
case 0x6bd2d5:c.instructions+=7;goto B6bd2d5;
case 0x6bd2d8:c.instructions+=6;goto B6bd2d8;
case 0x6bd2db:c.instructions+=5;goto B6bd2db;
case 0x6bd2de:c.instructions+=4;goto B6bd2de;
case 0x6bd2e1:c.instructions+=3;goto B6bd2e1;
case 0x6bd2e4:c.instructions+=2;goto B6bd2e4;
case 0x6bd2e6:c.instructions+=1;goto B6bd2e6;
case 0x6bd2e9:goto L6bd2e9;
case 0x6bd2eb:goto L6bd2eb;
case 0x6bd2ed:c.instructions+=1;goto B6bd2ed;
case 0x6bd2f0:goto L6bd2f0;
case 0x6bd2f2:goto L6bd2f2;
case 0x6bd2f8:c.instructions+=2;goto B6bd2f8;
case 0x6bd2fa:c.instructions+=1;goto B6bd2fa;
case 0x6bd2fc:goto L6bd2fc;
case 0x6bd2fe:c.instructions+=1;goto B6bd2fe;
case 0x6bd303:goto L6bd303;
case 0x6bd306:goto L6bd306;
case 0x6bd309:c.instructions+=4;goto B6bd309;
case 0x6bd30c:c.instructions+=3;goto B6bd30c;
case 0x6bd30f:c.instructions+=2;goto B6bd30f;
case 0x6bd315:c.instructions+=1;goto B6bd315;
case 0x6bd31a:goto L6bd31a;
case 0x6bd31d:c.instructions+=1;goto B6bd31d;
case 0x6bd323:goto L6bd323;
case 0x6bd325:c.instructions+=9;goto B6bd325;
case 0x6bd327:c.instructions+=8;goto B6bd327;
case 0x6bd328:c.instructions+=7;goto B6bd328;
case 0x6bd329:c.instructions+=6;goto B6bd329;
case 0x6bd32b:c.instructions+=5;goto B6bd32b;
case 0x6bd32e:c.instructions+=4;goto B6bd32e;
case 0x6bd32f:c.instructions+=3;goto B6bd32f;
case 0x6bd335:c.instructions+=2;goto B6bd335;
case 0x6bd337:c.instructions+=1;goto B6bd337;
case 0x6bd33d:goto L6bd33d;
case 0x6bd33f:c.instructions+=1;goto B6bd33f;
case 0x6bd345:goto L6bd345;
case 0x6bd347:c.instructions+=1;goto B6bd347;
case 0x6bd34c:goto L6bd34c;
case 0x6bd34e:c.instructions+=1;goto B6bd34e;
case 0x6bd350:goto L6bd350;
case 0x6bd352:c.instructions+=1;goto B6bd352;
case 0x6bd357:goto L6bd357;
case 0x6bd35a:c.instructions+=1;goto B6bd35a;
case 0x6bd35c:goto L6bd35c;
case 0x6bd35f:goto L6bd35f;
case 0x6bd362:c.instructions+=2;goto B6bd362;
case 0x6bd364:c.instructions+=1;goto B6bd364;
case 0x6bd36a:goto L6bd36a;
case 0x6bd36b:c.instructions+=7;goto B6bd36b;
case 0x6bd36c:c.instructions+=6;goto B6bd36c;
case 0x6bd36e:c.instructions+=5;goto B6bd36e;
case 0x6bd373:c.instructions+=4;goto B6bd373;
case 0x6bd374:c.instructions+=3;goto B6bd374;
case 0x6bd379:c.instructions+=2;goto B6bd379;
case 0x6bd37a:c.instructions+=1;goto B6bd37a;
case 0x6bd37f:goto L6bd37f;
case 0x6bd381:c.instructions+=1;goto B6bd381;
case 0x6bd387:goto L6bd387;
case 0x6bd38d:c.instructions+=2;goto B6bd38d;
case 0x6bd390:c.instructions+=1;goto B6bd390;
case 0x6bd395:goto L6bd395;
case 0x6bd397:c.instructions+=1;goto B6bd397;
case 0x6bd39d:goto L6bd39d;
case 0x6bd39f:c.instructions+=2;goto B6bd39f;
case 0x6bd3a2:c.instructions+=1;goto B6bd3a2;
case 0x6bd3a4:goto L6bd3a4;
case 0x6bd3a7:c.instructions+=1;goto B6bd3a7;
case 0x6bd3aa:goto L6bd3aa;
case 0x6bd3b0:c.instructions+=21;goto B6bd3b0;
case 0x6bd3b3:c.instructions+=20;goto B6bd3b3;
case 0x6bd3b6:c.instructions+=19;goto B6bd3b6;
case 0x6bd3b9:c.instructions+=18;goto B6bd3b9;
case 0x6bd3bc:c.instructions+=17;goto B6bd3bc;
case 0x6bd3bf:c.instructions+=16;goto B6bd3bf;
case 0x6bd3c2:c.instructions+=15;goto B6bd3c2;
case 0x6bd3c5:c.instructions+=14;goto B6bd3c5;
case 0x6bd3c8:c.instructions+=13;goto B6bd3c8;
case 0x6bd3cc:c.instructions+=12;goto B6bd3cc;
case 0x6bd3cf:c.instructions+=11;goto B6bd3cf;
case 0x6bd3d2:c.instructions+=10;goto B6bd3d2;
case 0x6bd3d5:c.instructions+=9;goto B6bd3d5;
case 0x6bd3d8:c.instructions+=8;goto B6bd3d8;
case 0x6bd3db:c.instructions+=7;goto B6bd3db;
case 0x6bd3e1:c.instructions+=6;goto B6bd3e1;
case 0x6bd3e4:c.instructions+=5;goto B6bd3e4;
case 0x6bd3e7:c.instructions+=4;goto B6bd3e7;
case 0x6bd3ea:c.instructions+=3;goto B6bd3ea;
case 0x6bd3ed:c.instructions+=2;goto B6bd3ed;
case 0x6bd3f0:c.instructions+=1;goto B6bd3f0;
case 0x6bd3f2:goto L6bd3f2;
case 0x6bd3f5:c.instructions+=2;goto B6bd3f5;
case 0x6bd3f7:c.instructions+=1;goto B6bd3f7;
case 0x6bd3fc:goto L6bd3fc;
case 0x6bd3fe:c.instructions+=1;goto B6bd3fe;
case 0x6bd404:goto L6bd404;
case 0x6bd408:goto L6bd408;
case 0x6bd40e:goto L6bd40e;
case 0x6bd410:c.instructions+=1;goto B6bd410;
case 0x6bd415:goto L6bd415;
case 0x6bd417:c.instructions+=2;goto B6bd417;
case 0x6bd419:c.instructions+=1;goto B6bd419;
case 0x6bd41f:goto L6bd41f;
case 0x6bd425:c.instructions+=6;goto B6bd425;
case 0x6bd428:c.instructions+=5;goto B6bd428;
case 0x6bd42b:c.instructions+=4;goto B6bd42b;
case 0x6bd42c:c.instructions+=3;goto B6bd42c;
case 0x6bd42f:c.instructions+=2;goto B6bd42f;
case 0x6bd432:c.instructions+=1;goto B6bd432;
case 0x6bd438:goto L6bd438;
case 0x6bd43a:c.instructions+=1;goto B6bd43a;
case 0x6bd43f:goto L6bd43f;
case 0x6bd442:c.instructions+=4;goto B6bd442;
case 0x6bd444:c.instructions+=3;goto B6bd444;
case 0x6bd446:c.instructions+=2;goto B6bd446;
case 0x6bd449:c.instructions+=1;goto B6bd449;
case 0x6bd44f:goto L6bd44f;
case 0x6bd452:c.instructions+=6;goto B6bd452;
case 0x6bd458:c.instructions+=5;goto B6bd458;
case 0x6bd45b:c.instructions+=4;goto B6bd45b;
case 0x6bd461:c.instructions+=3;goto B6bd461;
case 0x6bd464:c.instructions+=2;goto B6bd464;
case 0x6bd466:c.instructions+=1;goto B6bd466;
case 0x6bd468:goto L6bd468;
case 0x6bd46c:c.instructions+=1;goto B6bd46c;
case 0x6bd46e:goto L6bd46e;
case 0x6bd471:c.instructions+=1;goto B6bd471;
case 0x6bd477:goto L6bd477;
case 0x6bd47d:c.instructions+=3;goto B6bd47d;
case 0x6bd47f:c.instructions+=2;goto B6bd47f;
case 0x6bd484:c.instructions+=1;goto B6bd484;
case 0x6bd486:goto L6bd486;
case 0x6bd48a:c.instructions+=1;goto B6bd48a;
case 0x6bd48c:goto L6bd48c;
case 0x6bd48f:c.instructions+=5;goto B6bd48f;
case 0x6bd491:c.instructions+=4;goto B6bd491;
case 0x6bd494:c.instructions+=3;goto B6bd494;
case 0x6bd497:c.instructions+=2;goto B6bd497;
case 0x6bd49b:c.instructions+=1;goto B6bd49b;
case 0x6bd4a1:goto L6bd4a1;
case 0x6bd4a6:c.instructions+=2;goto B6bd4a6;
case 0x6bd4a8:c.instructions+=1;goto B6bd4a8;
case 0x6bd4ae:goto L6bd4ae;
case 0x6bd4b4:goto L6bd4b4;
case 0x6bd4b9:c.instructions+=2;goto B6bd4b9;
case 0x6bd4bb:c.instructions+=1;goto B6bd4bb;
case 0x6bd4c1:goto L6bd4c1;
case 0x6bd4c7:goto L6bd4c7;
case 0x6bd4cc:c.instructions+=2;goto B6bd4cc;
case 0x6bd4ce:c.instructions+=1;goto B6bd4ce;
case 0x6bd4d4:goto L6bd4d4;
case 0x6bd4d6:goto L6bd4d6;
case 0x6bd4d8:c.instructions+=1;goto B6bd4d8;
case 0x6bd4de:goto L6bd4de;
case 0x6bd4e3:c.instructions+=1;goto B6bd4e3;
case 0x6bd4e5:goto L6bd4e5;
case 0x6bd4ea:c.instructions+=1;goto B6bd4ea;
case 0x6bd4ec:goto L6bd4ec;
case 0x6bd4f1:c.instructions+=1;goto B6bd4f1;
case 0x6bd4f3:goto L6bd4f3;
case 0x6bd4f8:c.instructions+=1;goto B6bd4f8;
case 0x6bd4fa:goto L6bd4fa;
case 0x6bd4ff:c.instructions+=1;goto B6bd4ff;
case 0x6bd505:goto L6bd505;
case 0x6bd507:c.instructions+=1;goto B6bd507;
case 0x6bd50c:goto L6bd50c;
case 0x6bd511:goto L6bd511;
case 0x6bd513:c.instructions+=1;goto B6bd513;
case 0x6bd518:goto L6bd518;
case 0x6bd51d:c.instructions+=1;goto B6bd51d;
case 0x6bd522:goto L6bd522;
case 0x6bd524:c.instructions+=1;goto B6bd524;
case 0x6bd529:goto L6bd529;
case 0x6bd52e:goto L6bd52e;
case 0x6bd530:c.instructions+=1;goto B6bd530;
case 0x6bd535:goto L6bd535;
case 0x6bd53a:goto L6bd53a;
case 0x6bd53c:c.instructions+=1;goto B6bd53c;
case 0x6bd541:goto L6bd541;
case 0x6bd546:goto L6bd546;
case 0x6bd548:c.instructions+=1;goto B6bd548;
case 0x6bd54d:goto L6bd54d;
case 0x6bd552:goto L6bd552;
case 0x6bd554:c.instructions+=1;goto B6bd554;
case 0x6bd559:goto L6bd559;
case 0x6bd55e:goto L6bd55e;
case 0x6bd563:c.instructions+=1;goto B6bd563;
case 0x6bd565:goto L6bd565;
case 0x6bd56a:c.instructions+=1;goto B6bd56a;
case 0x6bd56c:goto L6bd56c;
case 0x6bd571:c.instructions+=1;goto B6bd571;
case 0x6bd573:goto L6bd573;
case 0x6bd578:c.instructions+=1;goto B6bd578;
case 0x6bd57e:goto L6bd57e;
case 0x6bd583:c.instructions+=1;goto B6bd583;
case 0x6bd585:goto L6bd585;
case 0x6bd58a:c.instructions+=1;goto B6bd58a;
case 0x6bd590:goto L6bd590;
case 0x6bd592:c.instructions+=1;goto B6bd592;
case 0x6bd597:goto L6bd597;
case 0x6bd59c:goto L6bd59c;
case 0x6bd59e:c.instructions+=1;goto B6bd59e;
case 0x6bd5a3:goto L6bd5a3;
case 0x6bd5a8:goto L6bd5a8;
case 0x6bd5ac:c.instructions+=1;goto B6bd5ac;
case 0x6bd5ae:goto L6bd5ae;
case 0x6bd5b0:c.instructions+=1;goto B6bd5b0;
case 0x6bd5b5:goto L6bd5b5;
case 0x6bd5ba:goto L6bd5ba;
case 0x6bd5bf:c.instructions+=1;goto B6bd5bf;
case 0x6bd5c4:goto L6bd5c4;
case 0x6bd5c8:c.instructions+=1;goto B6bd5c8;
case 0x6bd5ca:goto L6bd5ca;
case 0x6bd5cc:c.instructions+=1;goto B6bd5cc;
case 0x6bd5d1:goto L6bd5d1;
case 0x6bd5d6:goto L6bd5d6;
case 0x6bd5d8:c.instructions+=1;goto B6bd5d8;
case 0x6bd5dd:goto L6bd5dd;
case 0x6bd5e2:goto L6bd5e2;
case 0x6bd5e7:c.instructions+=2;goto B6bd5e7;
case 0x6bd5e9:c.instructions+=1;goto B6bd5e9;
case 0x6bd5ef:goto L6bd5ef;
case 0x6bd5f1:goto L6bd5f1;
case 0x6bd5f6:c.instructions+=1;goto B6bd5f6;
case 0x6bd5f8:goto L6bd5f8;
case 0x6bd5fd:c.instructions+=1;goto B6bd5fd;
case 0x6bd5ff:goto L6bd5ff;
case 0x6bd604:c.instructions+=1;goto B6bd604;
case 0x6bd606:goto L6bd606;
case 0x6bd60b:c.instructions+=1;goto B6bd60b;
case 0x6bd60d:goto L6bd60d;
case 0x6bd612:c.instructions+=1;goto B6bd612;
case 0x6bd614:goto L6bd614;
case 0x6bd619:c.instructions+=1;goto B6bd619;
case 0x6bd61f:goto L6bd61f;
case 0x6bd621:c.instructions+=1;goto B6bd621;
case 0x6bd626:goto L6bd626;
case 0x6bd62b:goto L6bd62b;
case 0x6bd62d:c.instructions+=1;goto B6bd62d;
case 0x6bd632:goto L6bd632;
case 0x6bd637:goto L6bd637;
case 0x6bd639:c.instructions+=1;goto B6bd639;
case 0x6bd63e:goto L6bd63e;
case 0x6bd643:goto L6bd643;
case 0x6bd645:c.instructions+=1;goto B6bd645;
case 0x6bd64a:goto L6bd64a;
case 0x6bd64f:goto L6bd64f;
case 0x6bd651:c.instructions+=1;goto B6bd651;
case 0x6bd656:goto L6bd656;
case 0x6bd65b:goto L6bd65b;
case 0x6bd65d:c.instructions+=1;goto B6bd65d;
case 0x6bd662:goto L6bd662;
case 0x6bd667:goto L6bd667;
case 0x6bd669:c.instructions+=1;goto B6bd669;
case 0x6bd66e:goto L6bd66e;
case 0x6bd673:goto L6bd673;
case 0x6bd678:c.instructions+=1;goto B6bd678;
case 0x6bd67a:goto L6bd67a;
case 0x6bd67f:c.instructions+=1;goto B6bd67f;
case 0x6bd685:goto L6bd685;
case 0x6bd68a:c.instructions+=1;goto B6bd68a;
case 0x6bd690:goto L6bd690;
case 0x6bd695:c.instructions+=1;goto B6bd695;
case 0x6bd69b:goto L6bd69b;
case 0x6bd6a0:c.instructions+=1;goto B6bd6a0;
case 0x6bd6a6:goto L6bd6a6;
case 0x6bd6ab:c.instructions+=1;goto B6bd6ab;
case 0x6bd6b1:goto L6bd6b1;
case 0x6bd6b5:c.instructions+=1;goto B6bd6b5;
case 0x6bd6bb:goto L6bd6bb;
case 0x6bd6bd:c.instructions+=1;goto B6bd6bd;
case 0x6bd6c2:goto L6bd6c2;
case 0x6bd6c7:goto L6bd6c7;
case 0x6bd6c9:c.instructions+=1;goto B6bd6c9;
case 0x6bd6ce:goto L6bd6ce;
case 0x6bd6d3:goto L6bd6d3;
case 0x6bd6d8:c.instructions+=2;goto B6bd6d8;
case 0x6bd6da:c.instructions+=1;goto B6bd6da;
case 0x6bd6e0:goto L6bd6e0;
case 0x6bd6e2:goto L6bd6e2;
case 0x6bd6e7:c.instructions+=2;goto B6bd6e7;
case 0x6bd6e9:c.instructions+=1;goto B6bd6e9;
case 0x6bd6eb:goto L6bd6eb;
case 0x6bd6ed:goto L6bd6ed;
case 0x6bd6f2:c.instructions+=1;goto B6bd6f2;
case 0x6bd6f4:goto L6bd6f4;
case 0x6bd6f9:c.instructions+=1;goto B6bd6f9;
case 0x6bd6fb:goto L6bd6fb;
case 0x6bd700:c.instructions+=1;goto B6bd700;
case 0x6bd702:goto L6bd702;
case 0x6bd707:c.instructions+=1;goto B6bd707;
case 0x6bd709:goto L6bd709;
case 0x6bd70e:c.instructions+=1;goto B6bd70e;
case 0x6bd710:goto L6bd710;
case 0x6bd715:c.instructions+=1;goto B6bd715;
case 0x6bd71b:goto L6bd71b;
case 0x6bd71d:c.instructions+=1;goto B6bd71d;
case 0x6bd722:goto L6bd722;
case 0x6bd727:goto L6bd727;
case 0x6bd72c:c.instructions+=1;goto B6bd72c;
case 0x6bd72e:goto L6bd72e;
case 0x6bd733:c.instructions+=1;goto B6bd733;
case 0x6bd739:goto L6bd739;
case 0x6bd73e:c.instructions+=1;goto B6bd73e;
case 0x6bd740:goto L6bd740;
case 0x6bd745:c.instructions+=1;goto B6bd745;
case 0x6bd747:goto L6bd747;
case 0x6bd74c:c.instructions+=1;goto B6bd74c;
case 0x6bd74e:goto L6bd74e;
case 0x6bd753:c.instructions+=1;goto B6bd753;
case 0x6bd759:goto L6bd759;
case 0x6bd75b:c.instructions+=1;goto B6bd75b;
case 0x6bd760:goto L6bd760;
case 0x6bd765:goto L6bd765;
case 0x6bd767:c.instructions+=1;goto B6bd767;
case 0x6bd76c:goto L6bd76c;
case 0x6bd771:goto L6bd771;
case 0x6bd773:c.instructions+=1;goto B6bd773;
case 0x6bd778:goto L6bd778;
case 0x6bd77d:goto L6bd77d;
case 0x6bd782:c.instructions+=2;goto B6bd782;
case 0x6bd784:c.instructions+=1;goto B6bd784;
case 0x6bd786:goto L6bd786;
case 0x6bd78c:goto L6bd78c;
case 0x6bd791:c.instructions+=1;goto B6bd791;
case 0x6bd793:goto L6bd793;
case 0x6bd798:c.instructions+=1;goto B6bd798;
case 0x6bd79a:goto L6bd79a;
case 0x6bd79f:c.instructions+=1;goto B6bd79f;
case 0x6bd7a1:goto L6bd7a1;
case 0x6bd7a6:c.instructions+=1;goto B6bd7a6;
case 0x6bd7a8:goto L6bd7a8;
case 0x6bd7ad:c.instructions+=1;goto B6bd7ad;
case 0x6bd7af:goto L6bd7af;
case 0x6bd7b4:c.instructions+=1;goto B6bd7b4;
case 0x6bd7ba:goto L6bd7ba;
case 0x6bd7bc:c.instructions+=1;goto B6bd7bc;
case 0x6bd7c1:goto L6bd7c1;
case 0x6bd7c3:goto L6bd7c3;
case 0x6bd7c5:c.instructions+=1;goto B6bd7c5;
case 0x6bd7ca:goto L6bd7ca;
case 0x6bd7cc:goto L6bd7cc;
case 0x6bd7ce:c.instructions+=1;goto B6bd7ce;
case 0x6bd7d3:goto L6bd7d3;
case 0x6bd7d5:goto L6bd7d5;
case 0x6bd7d7:c.instructions+=1;goto B6bd7d7;
case 0x6bd7dc:goto L6bd7dc;
case 0x6bd7de:goto L6bd7de;
case 0x6bd7e0:c.instructions+=1;goto B6bd7e0;
case 0x6bd7e5:goto L6bd7e5;
case 0x6bd7e7:goto L6bd7e7;
case 0x6bd7ec:c.instructions+=1;goto B6bd7ec;
case 0x6bd7ee:goto L6bd7ee;
case 0x6bd7f3:c.instructions+=1;goto B6bd7f3;
case 0x6bd7f5:goto L6bd7f5;
case 0x6bd7fa:c.instructions+=1;goto B6bd7fa;
case 0x6bd7fc:goto L6bd7fc;
case 0x6bd801:c.instructions+=1;goto B6bd801;
case 0x6bd803:goto L6bd803;
case 0x6bd808:c.instructions+=1;goto B6bd808;
case 0x6bd80a:goto L6bd80a;
case 0x6bd80f:c.instructions+=1;goto B6bd80f;
case 0x6bd811:goto L6bd811;
case 0x6bd813:c.instructions+=1;goto B6bd813;
case 0x6bd818:goto L6bd818;
case 0x6bd81a:goto L6bd81a;
case 0x6bd81c:c.instructions+=1;goto B6bd81c;
case 0x6bd821:goto L6bd821;
case 0x6bd823:goto L6bd823;
case 0x6bd825:c.instructions+=1;goto B6bd825;
case 0x6bd82a:goto L6bd82a;
case 0x6bd82c:goto L6bd82c;
case 0x6bd832:c.instructions+=1;goto B6bd832;
case 0x6bd834:goto L6bd834;
case 0x6bd835:c.instructions+=2;goto B6bd835;
case 0x6bd838:c.instructions+=1;goto B6bd838;
case 0x6bd83e:goto L6bd83e;
case 0x6bd840:goto L6bd840;
case 0x6bd845:c.instructions+=2;goto B6bd845;
case 0x6bd84a:c.instructions+=1;goto B6bd84a;
case 0x6bd84c:goto L6bd84c;
case 0x6bd851:c.instructions+=1;goto B6bd851;
case 0x6bd856:goto L6bd856;
case 0x6bd85c:c.instructions+=3;goto B6bd85c;
case 0x6bd85f:c.instructions+=2;goto B6bd85f;
case 0x6bd860:c.instructions+=1;goto B6bd860;
case 0x6bd865:goto L6bd865;
case 0x6bd868:c.instructions+=1;goto B6bd868;
case 0x6bd86a:goto L6bd86a;
case 0x6bd870:c.instructions+=5;goto B6bd870;
case 0x6bd875:c.instructions+=4;goto B6bd875;
case 0x6bd87a:c.instructions+=3;goto B6bd87a;
case 0x6bd87d:c.instructions+=2;goto B6bd87d;
case 0x6bd87e:c.instructions+=1;goto B6bd87e;
case 0x6bd883:goto L6bd883;
case 0x6bd886:goto L6bd886;
case 0x6bd889:c.instructions+=2;goto B6bd889;
case 0x6bd88b:c.instructions+=1;goto B6bd88b;
case 0x6bd88d:goto L6bd88d;
case 0x6bd88f:c.instructions+=1;goto B6bd88f;
case 0x6bd894:goto L6bd894;
case 0x6bd896:goto L6bd896;
case 0x6bd897:c.instructions+=4;goto B6bd897;
case 0x6bd898:c.instructions+=3;goto B6bd898;
case 0x6bd899:c.instructions+=2;goto B6bd899;
case 0x6bd89a:c.instructions+=1;goto B6bd89a;
case 0x6bd89b:goto L6bd89b;
case 0x6bd89d:c.instructions+=12;goto B6bd89d;
case 0x6bd89e:c.instructions+=11;goto B6bd89e;
case 0x6bd8a0:c.instructions+=10;goto B6bd8a0;
case 0x6bd8a1:c.instructions+=9;goto B6bd8a1;
case 0x6bd8a4:c.instructions+=8;goto B6bd8a4;
case 0x6bd8a7:c.instructions+=7;goto B6bd8a7;
case 0x6bd8ab:c.instructions+=6;goto B6bd8ab;
case 0x6bd8ad:c.instructions+=5;goto B6bd8ad;
case 0x6bd8ae:c.instructions+=4;goto B6bd8ae;
case 0x6bd8af:c.instructions+=3;goto B6bd8af;
case 0x6bd8b0:c.instructions+=2;goto B6bd8b0;
case 0x6bd8b3:c.instructions+=1;goto B6bd8b3;
case 0x6bd8b5:goto L6bd8b5;
case 0x6bd8b8:c.instructions+=2;goto B6bd8b8;
case 0x6bd8be:c.instructions+=1;goto B6bd8be;
case 0x6bd8c1:goto L6bd8c1;
case 0x6bd8c3:c.instructions+=3;goto B6bd8c3;
case 0x6bd8c6:c.instructions+=2;goto B6bd8c6;
case 0x6bd8c9:c.instructions+=1;goto B6bd8c9;
case 0x6bd8cb:goto L6bd8cb;
case 0x6bd8ce:c.instructions+=2;goto B6bd8ce;
case 0x6bd8d1:c.instructions+=1;goto B6bd8d1;
case 0x6bd8d3:goto L6bd8d3;
case 0x6bd8d6:c.instructions+=3;goto B6bd8d6;
case 0x6bd8d9:c.instructions+=2;goto B6bd8d9;
case 0x6bd8df:c.instructions+=1;goto B6bd8df;
case 0x6bd8e1:goto L6bd8e1;
case 0x6bd8e4:c.instructions+=4;goto B6bd8e4;
case 0x6bd8e7:c.instructions+=3;goto B6bd8e7;
case 0x6bd8ea:c.instructions+=2;goto B6bd8ea;
case 0x6bd8ed:c.instructions+=1;goto B6bd8ed;
case 0x6bd8ef:goto L6bd8ef;
case 0x6bd8f1:goto L6bd8f1;
case 0x6bd8f2:c.instructions+=4;goto B6bd8f2;
case 0x6bd8f3:c.instructions+=3;goto B6bd8f3;
case 0x6bd8f4:c.instructions+=2;goto B6bd8f4;
case 0x6bd8f5:c.instructions+=1;goto B6bd8f5;
case 0x6bd8f8:goto L6bd8f8;
case 0x6bd8fa:c.instructions+=2;goto B6bd8fa;
case 0x6bd8fb:c.instructions+=1;goto B6bd8fb;
case 0x6bd8fd:goto L6bd8fd;
case 0x6bd8ff:c.instructions+=10;goto B6bd8ff;
case 0x6bd900:c.instructions+=9;goto B6bd900;
case 0x6bd902:c.instructions+=8;goto B6bd902;
case 0x6bd908:c.instructions+=7;goto B6bd908;
case 0x6bd909:c.instructions+=6;goto B6bd909;
case 0x6bd90a:c.instructions+=5;goto B6bd90a;
case 0x6bd90c:c.instructions+=4;goto B6bd90c;
case 0x6bd90f:c.instructions+=3;goto B6bd90f;
case 0x6bd911:c.instructions+=2;goto B6bd911;
case 0x6bd913:c.instructions+=1;goto B6bd913;
case 0x6bd915:goto L6bd915;
case 0x6bd917:c.instructions+=2;goto B6bd917;
case 0x6bd918:c.instructions+=1;goto B6bd918;
case 0x6bd91d:goto L6bd91d;
case 0x6bd91f:c.instructions+=3;goto B6bd91f;
case 0x6bd921:c.instructions+=2;goto B6bd921;
case 0x6bd927:c.instructions+=1;goto B6bd927;
case 0x6bd929:goto L6bd929;
case 0x6bd92f:c.instructions+=1;goto B6bd92f;
case 0x6bd931:goto L6bd931;
case 0x6bd933:c.instructions+=1;goto B6bd933;
case 0x6bd938:goto L6bd938;
case 0x6bd93d:c.instructions+=10;goto B6bd93d;
case 0x6bd940:c.instructions+=9;goto B6bd940;
case 0x6bd943:c.instructions+=8;goto B6bd943;
case 0x6bd945:c.instructions+=7;goto B6bd945;
case 0x6bd948:c.instructions+=6;goto B6bd948;
case 0x6bd949:c.instructions+=5;goto B6bd949;
case 0x6bd94b:c.instructions+=4;goto B6bd94b;
case 0x6bd94c:c.instructions+=3;goto B6bd94c;
case 0x6bd94e:c.instructions+=2;goto B6bd94e;
case 0x6bd951:c.instructions+=1;goto B6bd951;
case 0x6bd957:goto L6bd957;
case 0x6bd95d:c.instructions+=20;goto B6bd95d;
case 0x6bd963:c.instructions+=19;goto B6bd963;
case 0x6bd966:c.instructions+=18;goto B6bd966;
case 0x6bd969:c.instructions+=17;goto B6bd969;
case 0x6bd96d:c.instructions+=16;goto B6bd96d;
case 0x6bd970:c.instructions+=15;goto B6bd970;
case 0x6bd974:c.instructions+=14;goto B6bd974;
case 0x6bd977:c.instructions+=13;goto B6bd977;
case 0x6bd97b:c.instructions+=12;goto B6bd97b;
case 0x6bd981:c.instructions+=11;goto B6bd981;
case 0x6bd988:c.instructions+=10;goto B6bd988;
case 0x6bd98b:c.instructions+=9;goto B6bd98b;
case 0x6bd990:c.instructions+=8;goto B6bd990;
case 0x6bd992:c.instructions+=7;goto B6bd992;
case 0x6bd995:c.instructions+=6;goto B6bd995;
case 0x6bd9a0:c.instructions+=5;goto B6bd9a0;
case 0x6bd9a7:c.instructions+=4;goto B6bd9a7;
case 0x6bd9ae:c.instructions+=3;goto B6bd9ae;
case 0x6bd9b1:c.instructions+=2;goto B6bd9b1;
case 0x6bd9b4:c.instructions+=1;goto B6bd9b4;
case 0x6bd9ba:goto L6bd9ba;
case 0x6bd9bd:c.instructions+=3;goto B6bd9bd;
case 0x6bd9c0:c.instructions+=2;goto B6bd9c0;
case 0x6bd9c3:c.instructions+=1;goto B6bd9c3;
case 0x6bd9c6:goto L6bd9c6;
case 0x6bd9c9:c.instructions+=12;goto B6bd9c9;
case 0x6bd9cc:c.instructions+=11;goto B6bd9cc;
case 0x6bd9cf:c.instructions+=10;goto B6bd9cf;
case 0x6bd9d2:c.instructions+=9;goto B6bd9d2;
case 0x6bd9d5:c.instructions+=8;goto B6bd9d5;
case 0x6bd9d8:c.instructions+=7;goto B6bd9d8;
case 0x6bd9db:c.instructions+=6;goto B6bd9db;
case 0x6bd9de:c.instructions+=5;goto B6bd9de;
case 0x6bd9e1:c.instructions+=4;goto B6bd9e1;
case 0x6bd9e4:c.instructions+=3;goto B6bd9e4;
case 0x6bd9e6:c.instructions+=2;goto B6bd9e6;
case 0x6bd9ec:c.instructions+=1;goto B6bd9ec;
case 0x6bd9ee:goto L6bd9ee;
case 0x6bd9f0:c.instructions+=1;goto B6bd9f0;
case 0x6bd9f2:goto L6bd9f2;
case 0x6bd9f5:c.instructions+=1;goto B6bd9f5;
case 0x6bd9f7:goto L6bd9f7;
case 0x6bd9f9:c.instructions+=1;goto B6bd9f9;
case 0x6bd9fb:goto L6bd9fb;
case 0x6bda01:c.instructions+=1;goto B6bda01;
case 0x6bda03:goto L6bda03;
case 0x6bda05:c.instructions+=1;goto B6bda05;
case 0x6bda07:goto L6bda07;
case 0x6bda09:c.instructions+=1;goto B6bda09;
case 0x6bda0b:goto L6bda0b;
case 0x6bda0e:c.instructions+=3;goto B6bda0e;
case 0x6bda10:c.instructions+=2;goto B6bda10;
case 0x6bda12:c.instructions+=1;goto B6bda12;
case 0x6bda15:goto L6bda15;
case 0x6bda1a:c.instructions+=1;goto B6bda1a;
case 0x6bda1c:goto L6bda1c;
case 0x6bda22:c.instructions+=1;goto B6bda22;
case 0x6bda24:goto L6bda24;
case 0x6bda2a:goto L6bda2a;
case 0x6bda2e:c.instructions+=3;goto B6bda2e;
case 0x6bda32:c.instructions+=2;goto B6bda32;
case 0x6bda35:c.instructions+=1;goto B6bda35;
case 0x6bda37:goto L6bda37;
case 0x6bda3a:c.instructions+=2;goto B6bda3a;
case 0x6bda3d:c.instructions+=1;goto B6bda3d;
case 0x6bda40:goto L6bda40;
case 0x6bda42:c.instructions+=4;goto B6bda42;
case 0x6bda45:c.instructions+=3;goto B6bda45;
case 0x6bda48:c.instructions+=2;goto B6bda48;
case 0x6bda4b:c.instructions+=1;goto B6bda4b;
case 0x6bda4d:goto L6bda4d;
case 0x6bda50:c.instructions+=2;goto B6bda50;
case 0x6bda53:c.instructions+=1;goto B6bda53;
case 0x6bda55:goto L6bda55;
case 0x6bda58:c.instructions+=2;goto B6bda58;
case 0x6bda5b:c.instructions+=1;goto B6bda5b;
case 0x6bda5d:goto L6bda5d;
case 0x6bda60:c.instructions+=4;goto B6bda60;
case 0x6bda63:c.instructions+=3;goto B6bda63;
case 0x6bda66:c.instructions+=2;goto B6bda66;
case 0x6bda69:c.instructions+=1;goto B6bda69;
case 0x6bda6b:goto L6bda6b;
case 0x6bda6d:c.instructions+=1;goto B6bda6d;
case 0x6bda6e:goto L6bda6e;
case 0x6bda71:c.instructions+=2;goto B6bda71;
case 0x6bda74:c.instructions+=1;goto B6bda74;
case 0x6bda76:goto L6bda76;
case 0x6bda79:c.instructions+=2;goto B6bda79;
case 0x6bda7c:c.instructions+=1;goto B6bda7c;
case 0x6bda7e:goto L6bda7e;
case 0x6bda80:c.instructions+=6;goto B6bda80;
case 0x6bda83:c.instructions+=5;goto B6bda83;
case 0x6bda87:c.instructions+=4;goto B6bda87;
case 0x6bda89:c.instructions+=3;goto B6bda89;
case 0x6bda8b:c.instructions+=2;goto B6bda8b;
case 0x6bda92:c.instructions+=1;goto B6bda92;
case 0x6bda94:goto L6bda94;
case 0x6bda97:c.instructions+=2;goto B6bda97;
case 0x6bda9b:c.instructions+=1;goto B6bda9b;
case 0x6bda9d:goto L6bda9d;
case 0x6bdaa0:c.instructions+=2;goto B6bdaa0;
case 0x6bdaa4:c.instructions+=1;goto B6bdaa4;
case 0x6bdaa6:goto L6bdaa6;
case 0x6bdaa9:c.instructions+=6;goto B6bdaa9;
case 0x6bdaac:c.instructions+=5;goto B6bdaac;
case 0x6bdaad:c.instructions+=4;goto B6bdaad;
case 0x6bdab0:c.instructions+=3;goto B6bdab0;
case 0x6bdab3:c.instructions+=2;goto B6bdab3;
case 0x6bdab6:c.instructions+=1;goto B6bdab6;
case 0x6bdabc:goto L6bdabc;
case 0x6bdabe:goto L6bdabe;
case 0x6bdabf:goto L6bdabf;
case 0x6bdac0:c.instructions+=3;goto B6bdac0;
case 0x6bdac1:c.instructions+=2;goto B6bdac1;
case 0x6bdac2:c.instructions+=1;goto B6bdac2;
case 0x6bdac5:goto L6bdac5;
case 0x6bdac8:c.instructions+=2;goto B6bdac8;
case 0x6bdaca:c.instructions+=1;goto B6bdaca;
case 0x6bdacc:goto L6bdacc;
case 0x6bdace:goto L6bdace;
case 0x6bdad0:c.instructions+=1;goto B6bdad0;
case 0x6bdad2:goto L6bdad2;
case 0x6bdad4:c.instructions+=5;goto B6bdad4;
case 0x6bdad5:c.instructions+=4;goto B6bdad5;
case 0x6bdad7:c.instructions+=3;goto B6bdad7;
case 0x6bdad8:c.instructions+=2;goto B6bdad8;
case 0x6bdada:c.instructions+=1;goto B6bdada;
case 0x6bdadf:goto L6bdadf;
case 0x6bdae2:c.instructions+=8;goto B6bdae2;
case 0x6bdae8:c.instructions+=7;goto B6bdae8;
case 0x6bdaee:c.instructions+=6;goto B6bdaee;
case 0x6bdaf8:c.instructions+=5;goto B6bdaf8;
case 0x6bdb02:c.instructions+=4;goto B6bdb02;
case 0x6bdb04:c.instructions+=3;goto B6bdb04;
case 0x6bdb05:c.instructions+=2;goto B6bdb05;
case 0x6bdb06:c.instructions+=1;goto B6bdb06;
case 0x6bdb09:goto L6bdb09;
case 0x6bdb0f:c.instructions+=6;goto B6bdb0f;
case 0x6bdb13:c.instructions+=5;goto B6bdb13;
case 0x6bdb19:c.instructions+=4;goto B6bdb19;
case 0x6bdb1c:c.instructions+=3;goto B6bdb1c;
case 0x6bdb1d:c.instructions+=2;goto B6bdb1d;
case 0x6bdb23:c.instructions+=1;goto B6bdb23;
case 0x6bdb29:goto L6bdb29;
case 0x6bdb2f:c.instructions+=1;goto B6bdb2f;
case 0x6bdb35:goto L6bdb35;
case 0x6bdb3b:c.instructions+=1;goto B6bdb3b;
case 0x6bdb3d:goto L6bdb3d;
case 0x6bdb43:c.instructions+=1;goto B6bdb43;
case 0x6bdb45:goto L6bdb45;
case 0x6bdb4a:c.instructions+=4;goto B6bdb4a;
case 0x6bdb4c:c.instructions+=3;goto B6bdb4c;
case 0x6bdb4e:c.instructions+=2;goto B6bdb4e;
case 0x6bdb4f:c.instructions+=1;goto B6bdb4f;
case 0x6bdb54:goto L6bdb54;
case 0x6bdb57:c.instructions+=3;goto B6bdb57;
case 0x6bdb5c:c.instructions+=2;goto B6bdb5c;
case 0x6bdb5d:c.instructions+=1;goto B6bdb5d;
case 0x6bdb5e:goto L6bdb5e;
case 0x6bdb60:c.instructions+=15;goto B6bdb60;
case 0x6bdb62:c.instructions+=14;goto B6bdb62;
case 0x6bdb63:c.instructions+=13;goto B6bdb63;
case 0x6bdb64:c.instructions+=12;goto B6bdb64;
case 0x6bdb67:c.instructions+=11;goto B6bdb67;
case 0x6bdb6e:c.instructions+=10;goto B6bdb6e;
case 0x6bdb75:c.instructions+=9;goto B6bdb75;
case 0x6bdb78:c.instructions+=8;goto B6bdb78;
case 0x6bdb7f:c.instructions+=7;goto B6bdb7f;
case 0x6bdb86:c.instructions+=6;goto B6bdb86;
case 0x6bdb8d:c.instructions+=5;goto B6bdb8d;
case 0x6bdb90:c.instructions+=4;goto B6bdb90;
case 0x6bdb93:c.instructions+=3;goto B6bdb93;
case 0x6bdb9a:c.instructions+=2;goto B6bdb9a;
case 0x6bdba1:c.instructions+=1;goto B6bdba1;
case 0x6bdba6:goto L6bdba6;
case 0x6bdba8:c.instructions+=16;goto B6bdba8;
case 0x6bdba9:c.instructions+=15;goto B6bdba9;
case 0x6bdbab:c.instructions+=14;goto B6bdbab;
case 0x6bdbac:c.instructions+=13;goto B6bdbac;
case 0x6bdbaf:c.instructions+=12;goto B6bdbaf;
case 0x6bdbb6:c.instructions+=11;goto B6bdbb6;
case 0x6bdbbd:c.instructions+=10;goto B6bdbbd;
case 0x6bdbc0:c.instructions+=9;goto B6bdbc0;
case 0x6bdbc3:c.instructions+=8;goto B6bdbc3;
case 0x6bdbc6:c.instructions+=7;goto B6bdbc6;
case 0x6bdbcd:c.instructions+=6;goto B6bdbcd;
case 0x6bdbd0:c.instructions+=5;goto B6bdbd0;
case 0x6bdbd7:c.instructions+=4;goto B6bdbd7;
case 0x6bdbde:c.instructions+=3;goto B6bdbde;
case 0x6bdbe1:c.instructions+=2;goto B6bdbe1;
case 0x6bdbeb:c.instructions+=1;goto B6bdbeb;
case 0x6bdbed:goto L6bdbed;
case 0x6bdbef:c.instructions+=13;goto B6bdbef;
case 0x6bdbf0:c.instructions+=12;goto B6bdbf0;
case 0x6bdbf2:c.instructions+=11;goto B6bdbf2;
case 0x6bdbf3:c.instructions+=10;goto B6bdbf3;
case 0x6bdbf6:c.instructions+=9;goto B6bdbf6;
case 0x6bdbfd:c.instructions+=8;goto B6bdbfd;
case 0x6bdc00:c.instructions+=7;goto B6bdc00;
case 0x6bdc03:c.instructions+=6;goto B6bdc03;
case 0x6bdc06:c.instructions+=5;goto B6bdc06;
case 0x6bdc0d:c.instructions+=4;goto B6bdc0d;
case 0x6bdc10:c.instructions+=3;goto B6bdc10;
case 0x6bdc17:c.instructions+=2;goto B6bdc17;
case 0x6bdc1a:c.instructions+=1;goto B6bdc1a;
case 0x6bdc1c:goto L6bdc1c;
case 0x6bdc20:c.instructions+=4;goto B6bdc20;
case 0x6bdc22:c.instructions+=3;goto B6bdc22;
case 0x6bdc23:c.instructions+=2;goto B6bdc23;
case 0x6bdc2a:c.instructions+=1;goto B6bdc2a;
case 0x6bdc2f:goto L6bdc2f;
case 0x6bdc36:goto L6bdc36;
case 0x6bdc3a:c.instructions+=10;goto B6bdc3a;
case 0x6bdc3d:c.instructions+=9;goto B6bdc3d;
case 0x6bdc40:c.instructions+=8;goto B6bdc40;
case 0x6bdc44:c.instructions+=7;goto B6bdc44;
case 0x6bdc4a:c.instructions+=6;goto B6bdc4a;
case 0x6bdc4d:c.instructions+=5;goto B6bdc4d;
case 0x6bdc54:c.instructions+=4;goto B6bdc54;
case 0x6bdc57:c.instructions+=3;goto B6bdc57;
case 0x6bdc59:c.instructions+=2;goto B6bdc59;
case 0x6bdc5a:c.instructions+=1;goto B6bdc5a;
case 0x6bdc5b:goto L6bdc5b;
case 0x6bdc5d:c.instructions+=9;goto B6bdc5d;
case 0x6bdc5e:c.instructions+=8;goto B6bdc5e;
case 0x6bdc60:c.instructions+=7;goto B6bdc60;
case 0x6bdc63:c.instructions+=6;goto B6bdc63;
case 0x6bdc64:c.instructions+=5;goto B6bdc64;
case 0x6bdc66:c.instructions+=4;goto B6bdc66;
case 0x6bdc68:c.instructions+=3;goto B6bdc68;
case 0x6bdc6a:c.instructions+=2;goto B6bdc6a;
case 0x6bdc70:c.instructions+=1;goto B6bdc70;
case 0x6bdc76:goto L6bdc76;
case 0x6bdc79:c.instructions+=12;goto B6bdc79;
case 0x6bdc7a:c.instructions+=11;goto B6bdc7a;
case 0x6bdc7d:c.instructions+=10;goto B6bdc7d;
case 0x6bdc7e:c.instructions+=9;goto B6bdc7e;
case 0x6bdc7f:c.instructions+=8;goto B6bdc7f;
case 0x6bdc80:c.instructions+=7;goto B6bdc80;
case 0x6bdc83:c.instructions+=6;goto B6bdc83;
case 0x6bdc86:c.instructions+=5;goto B6bdc86;
case 0x6bdc89:c.instructions+=4;goto B6bdc89;
case 0x6bdc8c:c.instructions+=3;goto B6bdc8c;
case 0x6bdc8d:c.instructions+=2;goto B6bdc8d;
case 0x6bdc90:c.instructions+=1;goto B6bdc90;
case 0x6bdc96:goto L6bdc96;
case 0x6bdc9b:c.instructions+=1;goto B6bdc9b;
case 0x6bdc9c:goto L6bdc9c;
case 0x6bdc9f:c.instructions+=7;goto B6bdc9f;
case 0x6bdca2:c.instructions+=6;goto B6bdca2;
case 0x6bdca5:c.instructions+=5;goto B6bdca5;
case 0x6bdca8:c.instructions+=4;goto B6bdca8;
case 0x6bdcab:c.instructions+=3;goto B6bdcab;
case 0x6bdcae:c.instructions+=2;goto B6bdcae;
case 0x6bdcb2:c.instructions+=1;goto B6bdcb2;
case 0x6bdcb8:goto L6bdcb8;
case 0x6bdcbb:c.instructions+=3;goto B6bdcbb;
case 0x6bdcbd:c.instructions+=2;goto B6bdcbd;
case 0x6bdcbf:c.instructions+=1;goto B6bdcbf;
case 0x6bdcc2:goto L6bdcc2;
case 0x6bdcc5:c.instructions+=4;goto B6bdcc5;
case 0x6bdcc8:c.instructions+=3;goto B6bdcc8;
case 0x6bdcca:c.instructions+=2;goto B6bdcca;
case 0x6bdccc:c.instructions+=1;goto B6bdccc;
case 0x6bdccf:goto L6bdccf;
case 0x6bdcd2:c.instructions+=2;goto B6bdcd2;
case 0x6bdcd3:c.instructions+=1;goto B6bdcd3;
case 0x6bdcd5:goto L6bdcd5;
case 0x6bdcd8:c.instructions+=1;goto B6bdcd8;
case 0x6bdcda:goto L6bdcda;
case 0x6bdcdd:c.instructions+=1;goto B6bdcdd;
case 0x6bdcdf:goto L6bdcdf;
case 0x6bdce1:c.instructions+=1;goto B6bdce1;
case 0x6bdce3:goto L6bdce3;
case 0x6bdce6:c.instructions+=1;goto B6bdce6;
case 0x6bdce8:goto L6bdce8;
case 0x6bdceb:c.instructions+=1;goto B6bdceb;
case 0x6bdced:goto L6bdced;
case 0x6bdcf2:c.instructions+=4;goto B6bdcf2;
case 0x6bdcf3:c.instructions+=3;goto B6bdcf3;
case 0x6bdcf6:c.instructions+=2;goto B6bdcf6;
case 0x6bdcf7:c.instructions+=1;goto B6bdcf7;
case 0x6bdcfc:goto L6bdcfc;
case 0x6bdcfe:c.instructions+=3;goto B6bdcfe;
case 0x6bdd01:c.instructions+=2;goto B6bdd01;
case 0x6bdd02:c.instructions+=1;goto B6bdd02;
case 0x6bdd05:goto L6bdd05;
case 0x6bdd08:c.instructions+=1;goto B6bdd08;
case 0x6bdd0a:goto L6bdd0a;
case 0x6bdd0c:c.instructions+=1;goto B6bdd0c;
case 0x6bdd0e:goto L6bdd0e;
case 0x6bdd11:c.instructions+=1;goto B6bdd11;
case 0x6bdd13:goto L6bdd13;
case 0x6bdd16:c.instructions+=1;goto B6bdd16;
case 0x6bdd18:goto L6bdd18;
case 0x6bdd1d:c.instructions+=4;goto B6bdd1d;
case 0x6bdd1e:c.instructions+=3;goto B6bdd1e;
case 0x6bdd21:c.instructions+=2;goto B6bdd21;
case 0x6bdd22:c.instructions+=1;goto B6bdd22;
case 0x6bdd27:goto L6bdd27;
case 0x6bdd29:c.instructions+=4;goto B6bdd29;
case 0x6bdd2c:c.instructions+=3;goto B6bdd2c;
case 0x6bdd2d:c.instructions+=2;goto B6bdd2d;
case 0x6bdd30:c.instructions+=1;goto B6bdd30;
case 0x6bdd32:goto L6bdd32;
case 0x6bdd34:c.instructions+=1;goto B6bdd34;
case 0x6bdd36:goto L6bdd36;
case 0x6bdd39:c.instructions+=3;goto B6bdd39;
case 0x6bdd41:c.instructions+=2;goto B6bdd41;
case 0x6bdd44:c.instructions+=1;goto B6bdd44;
case 0x6bdd47:goto L6bdd47;
case 0x6bdd4a:c.instructions+=3;goto B6bdd4a;
case 0x6bdd4d:c.instructions+=2;goto B6bdd4d;
case 0x6bdd50:c.instructions+=1;goto B6bdd50;
case 0x6bdd56:goto L6bdd56;
case 0x6bdd58:c.instructions+=1;goto B6bdd58;
case 0x6bdd59:goto L6bdd59;
case 0x6bdd5b:c.instructions+=2;goto B6bdd5b;
case 0x6bdd5d:c.instructions+=1;goto B6bdd5d;
case 0x6bdd5e:goto L6bdd5e;
case 0x6bdd62:c.instructions+=1;goto B6bdd62;
case 0x6bdd64:goto L6bdd64;
case 0x6bdd65:goto L6bdd65;
case 0x6bdd66:c.instructions+=2;goto B6bdd66;
case 0x6bdd69:c.instructions+=1;goto B6bdd69;
case 0x6bdd6b:goto L6bdd6b;
case 0x6bdd6e:c.instructions+=1;goto B6bdd6e;
case 0x6bdd70:goto L6bdd70;
case 0x6bdd75:c.instructions+=4;goto B6bdd75;
case 0x6bdd7a:c.instructions+=3;goto B6bdd7a;
case 0x6bdd7d:c.instructions+=2;goto B6bdd7d;
case 0x6bdd7e:c.instructions+=1;goto B6bdd7e;
case 0x6bdd83:goto L6bdd83;
case 0x6bdd86:c.instructions+=1;goto B6bdd86;
case 0x6bdd8d:goto L6bdd8d;
case 0x6bdd90:c.instructions+=3;goto B6bdd90;
case 0x6bdd92:c.instructions+=2;goto B6bdd92;
case 0x6bdd94:c.instructions+=1;goto B6bdd94;
case 0x6bdd99:goto L6bdd99;
case 0x6bdd9a:c.instructions+=2;goto B6bdd9a;
case 0x6bdd9b:c.instructions+=1;goto B6bdd9b;
case 0x6bdd9c:goto L6bdd9c;
case 0x6bdd9e:c.instructions+=10;goto B6bdd9e;
case 0x6bdd9f:c.instructions+=9;goto B6bdd9f;
case 0x6bdda1:c.instructions+=8;goto B6bdda1;
case 0x6bdda2:c.instructions+=7;goto B6bdda2;
case 0x6bdda3:c.instructions+=6;goto B6bdda3;
case 0x6bdda4:c.instructions+=5;goto B6bdda4;
case 0x6bdda7:c.instructions+=4;goto B6bdda7;
case 0x6bddaa:c.instructions+=3;goto B6bddaa;
case 0x6bddac:c.instructions+=2;goto B6bddac;
case 0x6bddae:c.instructions+=1;goto B6bddae;
case 0x6bddb1:goto L6bddb1;
case 0x6bddb4:c.instructions+=4;goto B6bddb4;
case 0x6bddb6:c.instructions+=3;goto B6bddb6;
case 0x6bddb8:c.instructions+=2;goto B6bddb8;
case 0x6bddba:c.instructions+=1;goto B6bddba;
case 0x6bddbd:goto L6bddbd;
case 0x6bddc0:c.instructions+=5;goto B6bddc0;
case 0x6bddc2:c.instructions+=4;goto B6bddc2;
case 0x6bddc5:c.instructions+=3;goto B6bddc5;
case 0x6bddc7:c.instructions+=2;goto B6bddc7;
case 0x6bddc9:c.instructions+=1;goto B6bddc9;
case 0x6bddcb:goto L6bddcb;
case 0x6bddcd:goto L6bddcd;
case 0x6bddcf:c.instructions+=3;goto B6bddcf;
case 0x6bddd0:c.instructions+=2;goto B6bddd0;
case 0x6bddd2:c.instructions+=1;goto B6bddd2;
case 0x6bddd4:goto L6bddd4;
case 0x6bddd6:c.instructions+=1;goto B6bddd6;
case 0x6bddd8:goto L6bddd8;
case 0x6bdddb:c.instructions+=3;goto B6bdddb;
case 0x6bdde1:c.instructions+=2;goto B6bdde1;
case 0x6bdde3:c.instructions+=1;goto B6bdde3;
case 0x6bdde5:goto L6bdde5;
case 0x6bdde7:c.instructions+=3;goto B6bdde7;
case 0x6bdde8:c.instructions+=2;goto B6bdde8;
case 0x6bddea:c.instructions+=1;goto B6bddea;
case 0x6bddec:goto L6bddec;
case 0x6bddee:c.instructions+=1;goto B6bddee;
case 0x6bddf0:goto L6bddf0;
case 0x6bddf3:c.instructions+=2;goto B6bddf3;
case 0x6bddf9:c.instructions+=1;goto B6bddf9;
case 0x6bddff:goto L6bddff;
case 0x6bde01:c.instructions+=1;goto B6bde01;
case 0x6bde03:goto L6bde03;
case 0x6bde05:c.instructions+=1;goto B6bde05;
case 0x6bde07:goto L6bde07;
case 0x6bde0a:c.instructions+=1;goto B6bde0a;
case 0x6bde0c:goto L6bde0c;
case 0x6bde0e:c.instructions+=1;goto B6bde0e;
case 0x6bde10:goto L6bde10;
case 0x6bde13:c.instructions+=3;goto B6bde13;
case 0x6bde19:c.instructions+=2;goto B6bde19;
case 0x6bde1b:c.instructions+=1;goto B6bde1b;
case 0x6bde1d:goto L6bde1d;
case 0x6bde20:c.instructions+=1;goto B6bde20;
case 0x6bde22:goto L6bde22;
case 0x6bde25:c.instructions+=1;goto B6bde25;
case 0x6bde27:goto L6bde27;
case 0x6bde2a:c.instructions+=2;goto B6bde2a;
case 0x6bde2c:c.instructions+=1;goto B6bde2c;
case 0x6bde2e:goto L6bde2e;
case 0x6bde30:c.instructions+=3;goto B6bde30;
case 0x6bde31:c.instructions+=2;goto B6bde31;
case 0x6bde33:c.instructions+=1;goto B6bde33;
case 0x6bde35:goto L6bde35;
case 0x6bde38:c.instructions+=1;goto B6bde38;
case 0x6bde3a:goto L6bde3a;
case 0x6bde3d:c.instructions+=2;goto B6bde3d;
case 0x6bde3f:c.instructions+=1;goto B6bde3f;
case 0x6bde41:goto L6bde41;
case 0x6bde47:c.instructions+=1;goto B6bde47;
case 0x6bde49:goto L6bde49;
case 0x6bde4c:c.instructions+=1;goto B6bde4c;
case 0x6bde4e:goto L6bde4e;
case 0x6bde50:c.instructions+=1;goto B6bde50;
case 0x6bde52:goto L6bde52;
case 0x6bde57:goto L6bde57;
case 0x6bde58:c.instructions+=4;goto B6bde58;
case 0x6bde59:c.instructions+=3;goto B6bde59;
case 0x6bde5a:c.instructions+=2;goto B6bde5a;
case 0x6bde5b:c.instructions+=1;goto B6bde5b;
case 0x6bde5e:goto L6bde5e;
case 0x6bde60:c.instructions+=9;goto B6bde60;
case 0x6bde61:c.instructions+=8;goto B6bde61;
case 0x6bde63:c.instructions+=7;goto B6bde63;
case 0x6bde64:c.instructions+=6;goto B6bde64;
case 0x6bde65:c.instructions+=5;goto B6bde65;
case 0x6bde68:c.instructions+=4;goto B6bde68;
case 0x6bde6b:c.instructions+=3;goto B6bde6b;
case 0x6bde6d:c.instructions+=2;goto B6bde6d;
case 0x6bde6f:c.instructions+=1;goto B6bde6f;
case 0x6bde72:goto L6bde72;
case 0x6bde77:c.instructions+=2;goto B6bde77;
case 0x6bde7a:c.instructions+=1;goto B6bde7a;
case 0x6bde7c:goto L6bde7c;
case 0x6bde7f:c.instructions+=4;goto B6bde7f;
case 0x6bde82:c.instructions+=3;goto B6bde82;
case 0x6bde84:c.instructions+=2;goto B6bde84;
case 0x6bde86:c.instructions+=1;goto B6bde86;
case 0x6bde89:goto L6bde89;
case 0x6bde8b:goto L6bde8b;
case 0x6bde91:c.instructions+=1;goto B6bde91;
case 0x6bde94:goto L6bde94;
case 0x6bde97:c.instructions+=6;goto B6bde97;
case 0x6bde98:c.instructions+=5;goto B6bde98;
case 0x6bde9a:c.instructions+=4;goto B6bde9a;
case 0x6bde9c:c.instructions+=3;goto B6bde9c;
case 0x6bde9d:c.instructions+=2;goto B6bde9d;
case 0x6bde9e:c.instructions+=1;goto B6bde9e;
case 0x6bdea1:goto L6bdea1;
case 0x6bdea3:c.instructions+=11;goto B6bdea3;
case 0x6bdea4:c.instructions+=10;goto B6bdea4;
case 0x6bdea6:c.instructions+=9;goto B6bdea6;
case 0x6bdeac:c.instructions+=8;goto B6bdeac;
case 0x6bdeb1:c.instructions+=7;goto B6bdeb1;
case 0x6bdeb6:c.instructions+=6;goto B6bdeb6;
case 0x6bdeb8:c.instructions+=5;goto B6bdeb8;
case 0x6bdeba:c.instructions+=4;goto B6bdeba;
case 0x6bdebc:c.instructions+=3;goto B6bdebc;
case 0x6bdec2:c.instructions+=2;goto B6bdec2;
case 0x6bdec3:c.instructions+=1;goto B6bdec3;
case 0x6bdec8:goto L6bdec8;
case 0x6bdeca:c.instructions+=8;goto B6bdeca;
case 0x6bdecb:c.instructions+=7;goto B6bdecb;
case 0x6bdecc:c.instructions+=6;goto B6bdecc;
case 0x6bdecd:c.instructions+=5;goto B6bdecd;
case 0x6bdecf:c.instructions+=4;goto B6bdecf;
case 0x6bded1:c.instructions+=3;goto B6bded1;
case 0x6bded4:c.instructions+=2;goto B6bded4;
case 0x6bded9:c.instructions+=1;goto B6bded9;
case 0x6bdedb:goto L6bdedb;
case 0x6bdede:c.instructions+=7;goto B6bdede;
case 0x6bdee4:c.instructions+=6;goto B6bdee4;
case 0x6bdee7:c.instructions+=5;goto B6bdee7;
case 0x6bdeed:c.instructions+=4;goto B6bdeed;
case 0x6bdeef:c.instructions+=3;goto B6bdeef;
case 0x6bdef1:c.instructions+=2;goto B6bdef1;
case 0x6bdef6:c.instructions+=1;goto B6bdef6;
case 0x6bdef8:goto L6bdef8;
case 0x6bdefd:c.instructions+=1;goto B6bdefd;
case 0x6bdeff:goto L6bdeff;
case 0x6bdf01:c.instructions+=1;goto B6bdf01;
case 0x6bdf06:goto L6bdf06;
case 0x6bdf08:goto L6bdf08;
case 0x6bdf0c:c.instructions+=1;goto B6bdf0c;
case 0x6bdf0e:goto L6bdf0e;
case 0x6bdf11:c.instructions+=3;goto B6bdf11;
case 0x6bdf16:c.instructions+=2;goto B6bdf16;
case 0x6bdf1b:c.instructions+=1;goto B6bdf1b;
case 0x6bdf1d:goto L6bdf1d;
case 0x6bdf1f:goto L6bdf1f;
case 0x6bdf21:c.instructions+=1;goto B6bdf21;
case 0x6bdf27:goto L6bdf27;
case 0x6bdf28:c.instructions+=2;goto B6bdf28;
case 0x6bdf2b:c.instructions+=1;goto B6bdf2b;
case 0x6bdf2d:goto L6bdf2d;
case 0x6bdf34:c.instructions+=1;goto B6bdf34;
case 0x6bdf3a:goto L6bdf3a;
case 0x6bdf3c:c.instructions+=2;goto B6bdf3c;
case 0x6bdf3f:c.instructions+=1;goto B6bdf3f;
case 0x6bdf45:goto L6bdf45;
case 0x6bdf48:c.instructions+=7;goto B6bdf48;
case 0x6bdf4e:c.instructions+=6;goto B6bdf4e;
case 0x6bdf51:c.instructions+=5;goto B6bdf51;
case 0x6bdf57:c.instructions+=4;goto B6bdf57;
case 0x6bdf59:c.instructions+=3;goto B6bdf59;
case 0x6bdf5b:c.instructions+=2;goto B6bdf5b;
case 0x6bdf60:c.instructions+=1;goto B6bdf60;
case 0x6bdf62:goto L6bdf62;
case 0x6bdf67:c.instructions+=1;goto B6bdf67;
case 0x6bdf69:goto L6bdf69;
case 0x6bdf6e:c.instructions+=1;goto B6bdf6e;
case 0x6bdf70:goto L6bdf70;
case 0x6bdf75:c.instructions+=1;goto B6bdf75;
case 0x6bdf77:goto L6bdf77;
case 0x6bdf7c:c.instructions+=1;goto B6bdf7c;
case 0x6bdf7e:goto L6bdf7e;
case 0x6bdf83:c.instructions+=1;goto B6bdf83;
case 0x6bdf85:goto L6bdf85;
case 0x6bdf87:c.instructions+=2;goto B6bdf87;
case 0x6bdf89:c.instructions+=1;goto B6bdf89;
case 0x6bdf8e:goto L6bdf8e;
case 0x6bdf90:goto L6bdf90;
case 0x6bdf96:c.instructions+=3;goto B6bdf96;
case 0x6bdf9b:c.instructions+=2;goto B6bdf9b;
case 0x6bdfa0:c.instructions+=1;goto B6bdfa0;
case 0x6bdfa2:goto L6bdfa2;
case 0x6bdfa4:c.instructions+=1;goto B6bdfa4;
case 0x6bdfa9:goto L6bdfa9;
case 0x6bdfab:goto L6bdfab;
case 0x6bdfad:c.instructions+=2;goto B6bdfad;
case 0x6bdfae:c.instructions+=1;goto B6bdfae;
case 0x6bdfb0:goto L6bdfb0;
case 0x6bdfb2:c.instructions+=1;goto B6bdfb2;
case 0x6bdfb7:goto L6bdfb7;
case 0x6bdfb9:goto L6bdfb9;
case 0x6bdfbb:c.instructions+=1;goto B6bdfbb;
case 0x6bdfc0:goto L6bdfc0;
case 0x6bdfc2:goto L6bdfc2;
case 0x6bdfc8:c.instructions+=3;goto B6bdfc8;
case 0x6bdfcd:c.instructions+=2;goto B6bdfcd;
case 0x6bdfd2:c.instructions+=1;goto B6bdfd2;
case 0x6bdfd4:goto L6bdfd4;
case 0x6bdfd6:c.instructions+=1;goto B6bdfd6;
case 0x6bdfdb:goto L6bdfdb;
case 0x6bdfdd:goto L6bdfdd;
case 0x6bdfdf:c.instructions+=2;goto B6bdfdf;
case 0x6bdfe1:c.instructions+=1;goto B6bdfe1;
case 0x6bdfe6:goto L6bdfe6;
case 0x6bdfe8:c.instructions+=1;goto B6bdfe8;
case 0x6bdfee:goto L6bdfee;
case 0x6bdfef:c.instructions+=2;goto B6bdfef;
case 0x6bdff2:c.instructions+=1;goto B6bdff2;
case 0x6bdff8:goto L6bdff8;
case 0x6bdffa:c.instructions+=1;goto B6bdffa;
case 0x6bdfff:goto L6bdfff;
default:missing_instruction(c.pc);}
B6bd001:L6bd001:{c.instructions+=1;NFSU2_TR(0x6bd001);
if(r1(R+512)){TAIL_STATIC(0x6bcfe6u,6bc);}
}
B6bd003:L6bd003:{c.instructions+=2;NFSU2_TR(0x6bd003);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd006:{NFSU2_TR(0x6bd006);
if(r1(R+518)){{goto L6bd024;}}
}
B6bd008:L6bd008:{c.instructions+=7;NFSU2_TR(0x6bd008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd00b:{NFSU2_TR(0x6bd00b);
__builtin_memmove((R+0),(R+12),4);
}
B6bd00d:{NFSU2_TR(0x6bd00d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bd010:{NFSU2_TR(0x6bd010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd013:{NFSU2_TR(0x6bd013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd016:{NFSU2_TR(0x6bd016);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bd019:{NFSU2_TR(0x6bd019);
if(r1(R+512)){TAIL_STATIC(0x6bcfa6u,6bc);}
}
B6bd01b:L6bd01b:{c.instructions+=1;NFSU2_TR(0x6bd01b);
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
B6bd01d:L6bd01d:{c.instructions+=5;NFSU2_TR(0x6bd01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bd01e:{NFSU2_TR(0x6bd01e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bd01f:{NFSU2_TR(0x6bd01f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bd020:{NFSU2_TR(0x6bd020);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bd021:{NFSU2_TR(0x6bd021);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bd024:L6bd024:{c.instructions+=3;NFSU2_TR(0x6bd024);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bd026:{NFSU2_TR(0x6bd026);
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
B6bd027:{NFSU2_TR(0x6bd027);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd01du);}goto L6bd01d;}
}
B6bd029:L6bd029:{c.instructions+=15;NFSU2_TR(0x6bd029);
__builtin_memmove((R+28),(R+28),4);
}
B6bd02b:{NFSU2_TR(0x6bd02b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd02c:{NFSU2_TR(0x6bd02c);
__builtin_memmove((R+20),(R+16),4);
}
B6bd02e:{NFSU2_TR(0x6bd02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B6bd031:{NFSU2_TR(0x6bd031);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd032:{NFSU2_TR(0x6bd032);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd033:{NFSU2_TR(0x6bd033);
__builtin_memmove((R+12),(R+4),4);
}
B6bd035:{NFSU2_TR(0x6bd035);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd038:{NFSU2_TR(0x6bd038);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bd03a:{NFSU2_TR(0x6bd03a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd03b:{NFSU2_TR(0x6bd03b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bd03d:{NFSU2_TR(0x6bd03d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd03f:{NFSU2_TR(0x6bd03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd042:{NFSU2_TR(0x6bd042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd045:{NFSU2_TR(0x6bd045);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bd066;}}
}
B6bd047:L6bd047:{c.instructions+=6;NFSU2_TR(0x6bd047);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd04a:{NFSU2_TR(0x6bd04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd050:{NFSU2_TR(0x6bd050);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd053:{NFSU2_TR(0x6bd053);
__builtin_memmove((R+4),(R+12),4);
}
B6bd055:{NFSU2_TR(0x6bd055);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd05b:{NFSU2_TR(0x6bd05b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd060ull));
TAIL_STATIC(0x6c3285u,6c3);
}
B6bd060:L6bd060:{c.instructions+=3;NFSU2_TR(0x6bd060);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bd061:{NFSU2_TR(0x6bd061);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6bd064:{NFSU2_TR(0x6bd064);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd047u);}goto L6bd047;}}
}
B6bd066:L6bd066:{c.instructions+=4;NFSU2_TR(0x6bd066);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bd068:{NFSU2_TR(0x6bd068);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd06b:{NFSU2_TR(0x6bd06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd06e:{NFSU2_TR(0x6bd06e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bd438;}}
}
B6bd074:L6bd074:{c.instructions+=8;NFSU2_TR(0x6bd074);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd077:{NFSU2_TR(0x6bd077);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd07d:{NFSU2_TR(0x6bd07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd080:{NFSU2_TR(0x6bd080);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd086:{NFSU2_TR(0x6bd086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bd088:{NFSU2_TR(0x6bd088);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6bd08e:{NFSU2_TR(0x6bd08e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd094:{NFSU2_TR(0x6bd094);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd096:L6bd096:{c.instructions+=2;NFSU2_TR(0x6bd096);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd09c:{NFSU2_TR(0x6bd09c);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd09e:L6bd09e:{c.instructions+=2;NFSU2_TR(0x6bd09e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0a4:{NFSU2_TR(0x6bd0a4);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0a6:L6bd0a6:{c.instructions+=2;NFSU2_TR(0x6bd0a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0ac:{NFSU2_TR(0x6bd0ac);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0ae:L6bd0ae:{c.instructions+=2;NFSU2_TR(0x6bd0ae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0b4:{NFSU2_TR(0x6bd0b4);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0b6:L6bd0b6:{c.instructions+=2;NFSU2_TR(0x6bd0b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0bc:{NFSU2_TR(0x6bd0bc);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0be:L6bd0be:{c.instructions+=2;NFSU2_TR(0x6bd0be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0c4:{NFSU2_TR(0x6bd0c4);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0c6:L6bd0c6:{c.instructions+=2;NFSU2_TR(0x6bd0c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0cc:{NFSU2_TR(0x6bd0cc);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0ce:L6bd0ce:{c.instructions+=2;NFSU2_TR(0x6bd0ce);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0d4:{NFSU2_TR(0x6bd0d4);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0d6:L6bd0d6:{c.instructions+=2;NFSU2_TR(0x6bd0d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0dc:{NFSU2_TR(0x6bd0dc);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0de:L6bd0de:{c.instructions+=2;NFSU2_TR(0x6bd0de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0e4:{NFSU2_TR(0x6bd0e4);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0e6:L6bd0e6:{c.instructions+=2;NFSU2_TR(0x6bd0e6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0ec:{NFSU2_TR(0x6bd0ec);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0ee:L6bd0ee:{c.instructions+=2;NFSU2_TR(0x6bd0ee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd0f4:{NFSU2_TR(0x6bd0f4);
if(r1(R+518)){{goto L6bd0fc;}}
}
B6bd0f6:L6bd0f6:{c.instructions+=2;NFSU2_TR(0x6bd0f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd0f7:{NFSU2_TR(0x6bd0f7);
{goto L6bd40e;}
}
B6bd0fc:L6bd0fc:{c.instructions+=7;NFSU2_TR(0x6bd0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd0fe:{NFSU2_TR(0x6bd0fe);
__builtin_memmove((R+24),(R+0),4);
}
B6bd100:{NFSU2_TR(0x6bd100);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6bd106:{NFSU2_TR(0x6bd106);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bd10b:{NFSU2_TR(0x6bd10b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd110:{NFSU2_TR(0x6bd110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd113:{NFSU2_TR(0x6bd113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd119;}}
}
B6bd115:L6bd115:{c.instructions+=1;NFSU2_TR(0x6bd115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd119:L6bd119:{c.instructions+=3;NFSU2_TR(0x6bd119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd11d:{NFSU2_TR(0x6bd11d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd11f:{NFSU2_TR(0x6bd11f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bd174;}}
}
B6bd121:L6bd121:{c.instructions+=2;NFSU2_TR(0x6bd121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd124:{NFSU2_TR(0x6bd124);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6bd127:L6bd127:{c.instructions+=8;NFSU2_TR(0x6bd127);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd12d:{NFSU2_TR(0x6bd12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd130:{NFSU2_TR(0x6bd130);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd133:{NFSU2_TR(0x6bd133);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd136:{NFSU2_TR(0x6bd136);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd139:{NFSU2_TR(0x6bd139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd13c:{NFSU2_TR(0x6bd13c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd13f:{NFSU2_TR(0x6bd13f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd174;}}
}
B6bd141:L6bd141:{c.instructions+=2;NFSU2_TR(0x6bd141);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bd145:{NFSU2_TR(0x6bd145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd174;}}
}
B6bd147:L6bd147:{c.instructions+=3;NFSU2_TR(0x6bd147);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd14a:{NFSU2_TR(0x6bd14a);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bd150:{NFSU2_TR(0x6bd150);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd161;}}
}
B6bd152:L6bd152:{c.instructions+=4;NFSU2_TR(0x6bd152);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd155:{NFSU2_TR(0x6bd155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bd157:{NFSU2_TR(0x6bd157);
__builtin_memmove((R+4),(R+12),4);
}
B6bd159:{NFSU2_TR(0x6bd159);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd15cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bd15c:L6bd15c:{c.instructions+=2;NFSU2_TR(0x6bd15c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd15f:{NFSU2_TR(0x6bd15f);
{goto L6bd167;}
}
B6bd161:L6bd161:{c.instructions+=1;NFSU2_TR(0x6bd161);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd167:L6bd167:{c.instructions+=1;NFSU2_TR(0x6bd167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd174;}}
}
B6bd169:L6bd169:{c.instructions+=4;NFSU2_TR(0x6bd169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd16c:{NFSU2_TR(0x6bd16c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6bd16f:{NFSU2_TR(0x6bd16f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6bd172:{NFSU2_TR(0x6bd172);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd127u);}goto L6bd127;}}
}
B6bd174:L6bd174:{c.instructions+=5;NFSU2_TR(0x6bd174);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd17a:{NFSU2_TR(0x6bd17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd17c:{NFSU2_TR(0x6bd17c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bd181:{NFSU2_TR(0x6bd181);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd186:{NFSU2_TR(0x6bd186);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd31a;}}
}
B6bd18c:L6bd18c:{c.instructions+=2;NFSU2_TR(0x6bd18c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd18f:{NFSU2_TR(0x6bd18f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd31a;}}
}
B6bd195:L6bd195:{c.instructions+=10;NFSU2_TR(0x6bd195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd197:{NFSU2_TR(0x6bd197);
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
B6bd199:{NFSU2_TR(0x6bd199);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd19a:{NFSU2_TR(0x6bd19a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd19b:{NFSU2_TR(0x6bd19b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd19d:{NFSU2_TR(0x6bd19d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bd1a0:{NFSU2_TR(0x6bd1a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd1a1:{NFSU2_TR(0x6bd1a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd1a7:{NFSU2_TR(0x6bd1a7);
__builtin_memmove((R+4),(R+12),4);
}
B6bd1a9:{NFSU2_TR(0x6bd1a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd1afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bd1af:L6bd1af:{c.instructions+=2;NFSU2_TR(0x6bd1af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd1b1:{NFSU2_TR(0x6bd1b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd894;}}
}
B6bd1b7:L6bd1b7:{c.instructions+=2;NFSU2_TR(0x6bd1b7);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd1b9:{NFSU2_TR(0x6bd1b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd1beull));
TAIL_STATIC(0x699317u,699);
}
B6bd1be:L6bd1be:{c.instructions+=2;NFSU2_TR(0x6bd1be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd1c0:{NFSU2_TR(0x6bd1c0);
if(r1(R+518)){{goto L6bd1cd;}}
}
B6bd1c2:L6bd1c2:{c.instructions+=2;NFSU2_TR(0x6bd1c2);
__builtin_memmove((R+4),(R+0),4);
}
B6bd1c4:{NFSU2_TR(0x6bd1c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd1c9ull));
TAIL_STATIC(0x698e7du,698);
}
B6bd1c9:L6bd1c9:{c.instructions+=2;NFSU2_TR(0x6bd1c9);
__builtin_memmove((R+24),(R+0),4);
}
B6bd1cb:{NFSU2_TR(0x6bd1cb);
{goto L6bd1cf;}
}
B6bd1cd:L6bd1cd:{c.instructions+=1;NFSU2_TR(0x6bd1cd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bd1cf:L6bd1cf:{c.instructions+=3;NFSU2_TR(0x6bd1cf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bd1d1:{NFSU2_TR(0x6bd1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd1d4:{NFSU2_TR(0x6bd1d4);
if(r1(R+518)){{goto L6bd518;}}
}
B6bd1da:L6bd1da:{c.instructions+=6;NFSU2_TR(0x6bd1da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd1db:{NFSU2_TR(0x6bd1db);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd1dd:{NFSU2_TR(0x6bd1dd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd1df:{NFSU2_TR(0x6bd1df);
u8 U[4];
w4(U+0,u32(0x10000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd1e4:{NFSU2_TR(0x6bd1e4);
__builtin_memmove((R+4),(R+24),4);
}
B6bd1e6:{NFSU2_TR(0x6bd1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd1ebull));
TAIL_STATIC(0x699362u,699);
}
B6bd1eb:L6bd1eb:{c.instructions+=2;NFSU2_TR(0x6bd1eb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd1ed:{NFSU2_TR(0x6bd1ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd886;}}
}
B6bd1f3:L6bd1f3:{c.instructions+=3;NFSU2_TR(0x6bd1f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd1f9:{NFSU2_TR(0x6bd1f9);
__builtin_memmove((R+4),(R+24),4);
}
B6bd1fb:{NFSU2_TR(0x6bd1fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd200ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bd200:L6bd200:{c.instructions+=2;NFSU2_TR(0x6bd200);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd202:{NFSU2_TR(0x6bd202);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd886;}}
}
B6bd208:L6bd208:{c.instructions+=19;NFSU2_TR(0x6bd208);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd20e:{NFSU2_TR(0x6bd20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd211:{NFSU2_TR(0x6bd211);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd214:{NFSU2_TR(0x6bd214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd217:{NFSU2_TR(0x6bd217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bd219:{NFSU2_TR(0x6bd219);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd21f:{NFSU2_TR(0x6bd21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd222:{NFSU2_TR(0x6bd222);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd225:{NFSU2_TR(0x6bd225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd228:{NFSU2_TR(0x6bd228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd22b:{NFSU2_TR(0x6bd22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd22e:{NFSU2_TR(0x6bd22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd231:{NFSU2_TR(0x6bd231);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bd233:{NFSU2_TR(0x6bd233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd236:{NFSU2_TR(0x6bd236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd239:{NFSU2_TR(0x6bd239);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd23c:{NFSU2_TR(0x6bd23c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd23d:{NFSU2_TR(0x6bd23d);
__builtin_memmove((R+4),(R+12),4);
}
B6bd23f:{NFSU2_TR(0x6bd23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd244ull));
TAIL_STATIC(0x699b26u,699);
}
B6bd244:L6bd244:{c.instructions+=2;NFSU2_TR(0x6bd244);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd246:{NFSU2_TR(0x6bd246);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd886;}}
}
B6bd24c:L6bd24c:{c.instructions+=2;NFSU2_TR(0x6bd24c);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd24e:{NFSU2_TR(0x6bd24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd253ull));
TAIL_STATIC(0x699317u,699);
}
B6bd253:L6bd253:{c.instructions+=2;NFSU2_TR(0x6bd253);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd255:{NFSU2_TR(0x6bd255);
if(r1(R+518)){{goto L6bd262;}}
}
B6bd257:L6bd257:{c.instructions+=2;NFSU2_TR(0x6bd257);
__builtin_memmove((R+4),(R+0),4);
}
B6bd259:{NFSU2_TR(0x6bd259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd25eull));
TAIL_STATIC(0x698e7du,698);
}
B6bd25e:L6bd25e:{c.instructions+=2;NFSU2_TR(0x6bd25e);
__builtin_memmove((R+24),(R+0),4);
}
B6bd260:{NFSU2_TR(0x6bd260);
{goto L6bd264;}
}
B6bd262:L6bd262:{c.instructions+=1;NFSU2_TR(0x6bd262);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bd264:L6bd264:{c.instructions+=3;NFSU2_TR(0x6bd264);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd266:{NFSU2_TR(0x6bd266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd269:{NFSU2_TR(0x6bd269);
if(r1(R+518)){{goto L6bd894;}}
}
B6bd26f:L6bd26f:{c.instructions+=7;NFSU2_TR(0x6bd26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd275:{NFSU2_TR(0x6bd275);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd276:{NFSU2_TR(0x6bd276);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd279:{NFSU2_TR(0x6bd279);
__builtin_memmove((R+4),(R+24),4);
}
B6bd27b:{NFSU2_TR(0x6bd27b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd27d:{NFSU2_TR(0x6bd27d);
u8 U[4];
w4(U+0,u32(0x60500002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd282:{NFSU2_TR(0x6bd282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd287ull));
TAIL_STATIC(0x699362u,699);
}
B6bd287:L6bd287:{c.instructions+=3;NFSU2_TR(0x6bd287);
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
B6bd289:{NFSU2_TR(0x6bd289);
__builtin_memmove((R+4),(R+24),4);
}
B6bd28b:{NFSU2_TR(0x6bd28b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd88d;}}
}
B6bd291:L6bd291:{c.instructions+=2;NFSU2_TR(0x6bd291);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd297:{NFSU2_TR(0x6bd297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd29cull));
TAIL_STATIC(0x698eb3u,698);
}
B6bd29c:L6bd29c:{c.instructions+=2;NFSU2_TR(0x6bd29c);
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
B6bd29e:{NFSU2_TR(0x6bd29e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd511;}}
}
B6bd2a4:L6bd2a4:{c.instructions+=4;NFSU2_TR(0x6bd2a4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd2a6:{NFSU2_TR(0x6bd2a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bd2a7:{NFSU2_TR(0x6bd2a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bd2aa:{NFSU2_TR(0x6bd2aa);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6bd2ac:L6bd2ac:{c.instructions+=11;NFSU2_TR(0x6bd2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd2b2:{NFSU2_TR(0x6bd2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd2b5:{NFSU2_TR(0x6bd2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd2b8:{NFSU2_TR(0x6bd2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bd2ba:{NFSU2_TR(0x6bd2ba);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd2be:{NFSU2_TR(0x6bd2be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bd2c1:{NFSU2_TR(0x6bd2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd2c4:{NFSU2_TR(0x6bd2c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bd2c7:{NFSU2_TR(0x6bd2c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bd2ca:{NFSU2_TR(0x6bd2ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6bd2cd:{NFSU2_TR(0x6bd2cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd2acu);}goto L6bd2ac;}}
}
B6bd2cf:L6bd2cf:{c.instructions+=8;NFSU2_TR(0x6bd2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd2d5:{NFSU2_TR(0x6bd2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd2d8:{NFSU2_TR(0x6bd2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bd2db:{NFSU2_TR(0x6bd2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd2de:{NFSU2_TR(0x6bd2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd2e1:{NFSU2_TR(0x6bd2e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bd2e4:{NFSU2_TR(0x6bd2e4);
__builtin_memmove((R+8),(R+4),4);
}
B6bd2e6:{NFSU2_TR(0x6bd2e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6bd2e9:L6bd2e9:{c.instructions+=1;NFSU2_TR(0x6bd2e9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6bd2eb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd2e9u);}goto L6bd2e9;}
}
B6bd2eb:L6bd2eb:{c.instructions+=2;NFSU2_TR(0x6bd2eb);
__builtin_memmove((R+4),(R+8),4);
}
B6bd2ed:{NFSU2_TR(0x6bd2ed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6bd2f0:L6bd2f0:{c.instructions+=1;NFSU2_TR(0x6bd2f0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6bd2f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd2f0u);}goto L6bd2f0;}
}
B6bd2f2:L6bd2f2:{c.instructions+=3;NFSU2_TR(0x6bd2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd2f8:{NFSU2_TR(0x6bd2f8);
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
B6bd2fa:{NFSU2_TR(0x6bd2fa);
if(r1(R+518)){{goto L6bd306;}}
}
B6bd2fc:L6bd2fc:{c.instructions+=2;NFSU2_TR(0x6bd2fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd2fe:{NFSU2_TR(0x6bd2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd303ull));
TAIL_STATIC(0x6739efu,673);
}
B6bd303:L6bd303:{c.instructions+=1;NFSU2_TR(0x6bd303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd306:L6bd306:{c.instructions+=5;NFSU2_TR(0x6bd306);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd309:{NFSU2_TR(0x6bd309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd30c:{NFSU2_TR(0x6bd30c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bd30f:{NFSU2_TR(0x6bd30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd315:{NFSU2_TR(0x6bd315);
{goto L6bd404;}
}
B6bd31a:L6bd31a:{c.instructions+=2;NFSU2_TR(0x6bd31a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd31d:{NFSU2_TR(0x6bd31d);
if(r1(R+518)){{goto L6bd408;}}
}
B6bd323:L6bd323:{c.instructions+=10;NFSU2_TR(0x6bd323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd325:{NFSU2_TR(0x6bd325);
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
B6bd327:{NFSU2_TR(0x6bd327);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd328:{NFSU2_TR(0x6bd328);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd329:{NFSU2_TR(0x6bd329);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd32b:{NFSU2_TR(0x6bd32b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bd32e:{NFSU2_TR(0x6bd32e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd32f:{NFSU2_TR(0x6bd32f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd335:{NFSU2_TR(0x6bd335);
__builtin_memmove((R+4),(R+12),4);
}
B6bd337:{NFSU2_TR(0x6bd337);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd33dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bd33d:L6bd33d:{c.instructions+=2;NFSU2_TR(0x6bd33d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd33f:{NFSU2_TR(0x6bd33f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd894;}}
}
B6bd345:L6bd345:{c.instructions+=2;NFSU2_TR(0x6bd345);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd347:{NFSU2_TR(0x6bd347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd34cull));
TAIL_STATIC(0x699317u,699);
}
B6bd34c:L6bd34c:{c.instructions+=2;NFSU2_TR(0x6bd34c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd34e:{NFSU2_TR(0x6bd34e);
if(r1(R+518)){{goto L6bd35c;}}
}
B6bd350:L6bd350:{c.instructions+=2;NFSU2_TR(0x6bd350);
__builtin_memmove((R+4),(R+0),4);
}
B6bd352:{NFSU2_TR(0x6bd352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd357ull));
TAIL_STATIC(0x698e7du,698);
}
B6bd357:L6bd357:{c.instructions+=2;NFSU2_TR(0x6bd357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd35a:{NFSU2_TR(0x6bd35a);
{goto L6bd35f;}
}
B6bd35c:L6bd35c:{c.instructions+=1;NFSU2_TR(0x6bd35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd35f:L6bd35f:{c.instructions+=3;NFSU2_TR(0x6bd35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd362:{NFSU2_TR(0x6bd362);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bd364:{NFSU2_TR(0x6bd364);
if(r1(R+518)){{goto L6bd518;}}
}
B6bd36a:L6bd36a:{c.instructions+=8;NFSU2_TR(0x6bd36a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd36b:{NFSU2_TR(0x6bd36b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd36c:{NFSU2_TR(0x6bd36c);
__builtin_memmove((R+0),(R+24),4);
}
B6bd36e:{NFSU2_TR(0x6bd36e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bd373:{NFSU2_TR(0x6bd373);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd374:{NFSU2_TR(0x6bd374);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6bd379:{NFSU2_TR(0x6bd379);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd37a:{NFSU2_TR(0x6bd37a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd37full));
TAIL_STATIC(0x699362u,699);
}
B6bd37f:L6bd37f:{c.instructions+=2;NFSU2_TR(0x6bd37f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd381:{NFSU2_TR(0x6bd381);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd886;}}
}
B6bd387:L6bd387:{c.instructions+=3;NFSU2_TR(0x6bd387);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd38d:{NFSU2_TR(0x6bd38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd390:{NFSU2_TR(0x6bd390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd395ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bd395:L6bd395:{c.instructions+=2;NFSU2_TR(0x6bd395);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd397:{NFSU2_TR(0x6bd397);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd886;}}
}
B6bd39d:L6bd39d:{c.instructions+=3;NFSU2_TR(0x6bd39d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd39f:{NFSU2_TR(0x6bd39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd3a2:{NFSU2_TR(0x6bd3a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bd3f2;}}
}
B6bd3a4:L6bd3a4:{c.instructions+=2;NFSU2_TR(0x6bd3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd3a7:{NFSU2_TR(0x6bd3a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bd3aa:L6bd3aa:{c.instructions+=22;NFSU2_TR(0x6bd3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd3b0:{NFSU2_TR(0x6bd3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd3b3:{NFSU2_TR(0x6bd3b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bd3b6:{NFSU2_TR(0x6bd3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd3b9:{NFSU2_TR(0x6bd3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd3bc:{NFSU2_TR(0x6bd3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd3bf:{NFSU2_TR(0x6bd3bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bd3c2:{NFSU2_TR(0x6bd3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd3c5:{NFSU2_TR(0x6bd3c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bd3c8:{NFSU2_TR(0x6bd3c8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6bd3cc:{NFSU2_TR(0x6bd3cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd3cf:{NFSU2_TR(0x6bd3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd3d2:{NFSU2_TR(0x6bd3d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bd3d5:{NFSU2_TR(0x6bd3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd3d8:{NFSU2_TR(0x6bd3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd3db:{NFSU2_TR(0x6bd3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd3e1:{NFSU2_TR(0x6bd3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd3e4:{NFSU2_TR(0x6bd3e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd3e7:{NFSU2_TR(0x6bd3e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bd3ea:{NFSU2_TR(0x6bd3ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bd3ed:{NFSU2_TR(0x6bd3ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6bd3f0:{NFSU2_TR(0x6bd3f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd3aau);}goto L6bd3aa;}}
}
B6bd3f2:L6bd3f2:{c.instructions+=3;NFSU2_TR(0x6bd3f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd3f5:{NFSU2_TR(0x6bd3f5);
__builtin_memmove((R+4),(R+12),4);
}
B6bd3f7:{NFSU2_TR(0x6bd3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd3fcull));
TAIL_STATIC(0x699b26u,699);
}
B6bd3fc:L6bd3fc:{c.instructions+=2;NFSU2_TR(0x6bd3fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd3fe:{NFSU2_TR(0x6bd3fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd886;}}
}
B6bd404:L6bd404:{c.instructions+=1;NFSU2_TR(0x6bd404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd408:L6bd408:{c.instructions+=1;NFSU2_TR(0x6bd408);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd40e:L6bd40e:{c.instructions+=2;NFSU2_TR(0x6bd40e);
__builtin_memmove((R+4),(R+12),4);
}
B6bd410:{NFSU2_TR(0x6bd410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd415ull));
TAIL_STATIC(0x699d92u,699);
}
B6bd415:L6bd415:{c.instructions+=3;NFSU2_TR(0x6bd415);
__builtin_memmove((R+28),(R+0),4);
}
B6bd417:{NFSU2_TR(0x6bd417);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6bd419:{NFSU2_TR(0x6bd419);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bd894;}}
}
B6bd41f:L6bd41f:{c.instructions+=7;NFSU2_TR(0x6bd41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd425:{NFSU2_TR(0x6bd425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bd428:{NFSU2_TR(0x6bd428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd42b:{NFSU2_TR(0x6bd42b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bd42c:{NFSU2_TR(0x6bd42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bd42f:{NFSU2_TR(0x6bd42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd432:{NFSU2_TR(0x6bd432);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd074u);}goto L6bd074;}}
}
B6bd438:L6bd438:{c.instructions+=2;NFSU2_TR(0x6bd438);
__builtin_memmove((R+4),(R+12),4);
}
B6bd43a:{NFSU2_TR(0x6bd43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd43full));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bd43f:L6bd43f:{c.instructions+=5;NFSU2_TR(0x6bd43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd442:{NFSU2_TR(0x6bd442);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bd444:{NFSU2_TR(0x6bd444);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd446:{NFSU2_TR(0x6bd446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd449:{NFSU2_TR(0x6bd449);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bd894;}}
}
B6bd44f:L6bd44f:{c.instructions+=7;NFSU2_TR(0x6bd44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd452:{NFSU2_TR(0x6bd452);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd458:{NFSU2_TR(0x6bd458);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd45b:{NFSU2_TR(0x6bd45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd461:{NFSU2_TR(0x6bd461);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd464:{NFSU2_TR(0x6bd464);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd466:{NFSU2_TR(0x6bd466);
if(r1(R+518)){{goto L6bd477;}}
}
B6bd468:L6bd468:{c.instructions+=2;NFSU2_TR(0x6bd468);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd46c:{NFSU2_TR(0x6bd46c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd477;}}
}
B6bd46e:L6bd46e:{c.instructions+=2;NFSU2_TR(0x6bd46e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6bd471:{NFSU2_TR(0x6bd471);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd477:L6bd477:{c.instructions+=4;NFSU2_TR(0x6bd477);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd47d:{NFSU2_TR(0x6bd47d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd47f:{NFSU2_TR(0x6bd47f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bd484:{NFSU2_TR(0x6bd484);
if(r1(R+518)){{goto L6bd4a1;}}
}
B6bd486:L6bd486:{c.instructions+=2;NFSU2_TR(0x6bd486);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd48a:{NFSU2_TR(0x6bd48a);
if(r1(R+518)){{goto L6bd4a1;}}
}
B6bd48c:L6bd48c:{c.instructions+=6;NFSU2_TR(0x6bd48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd48f:{NFSU2_TR(0x6bd48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bd491:{NFSU2_TR(0x6bd491);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd494:{NFSU2_TR(0x6bd494);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bd497:{NFSU2_TR(0x6bd497);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd49b:{NFSU2_TR(0x6bd49b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd840;}}
}
B6bd4a1:L6bd4a1:{c.instructions+=3;NFSU2_TR(0x6bd4a1);
w4(R+4,u32(0x60500000ull));
}
B6bd4a6:{NFSU2_TR(0x6bd4a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd4a8:{NFSU2_TR(0x6bd4a8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd6d3;}}
}
B6bd4ae:L6bd4ae:{c.instructions+=1;NFSU2_TR(0x6bd4ae);
if(r1(R+518)){{goto L6bd771;}}
}
B6bd4b4:L6bd4b4:{c.instructions+=3;NFSU2_TR(0x6bd4b4);
w4(R+4,u32(0x20100000ull));
}
B6bd4b9:{NFSU2_TR(0x6bd4b9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd4bb:{NFSU2_TR(0x6bd4bb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd5e2;}}
}
B6bd4c1:L6bd4c1:{c.instructions+=1;NFSU2_TR(0x6bd4c1);
if(r1(R+518)){{goto L6bd823;}}
}
B6bd4c7:L6bd4c7:{c.instructions+=3;NFSU2_TR(0x6bd4c7);
w4(R+4,u32(0x10600000ull));
}
B6bd4cc:{NFSU2_TR(0x6bd4cc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd4ce:{NFSU2_TR(0x6bd4ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd55e;}}
}
B6bd4d4:L6bd4d4:{c.instructions+=1;NFSU2_TR(0x6bd4d4);
if(r1(R+518)){{goto L6bd552;}}
}
B6bd4d6:L6bd4d6:{c.instructions+=2;NFSU2_TR(0x6bd4d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd4d8:{NFSU2_TR(0x6bd4d8);
if(r1(R+518)){{goto L6bd82c;}}
}
B6bd4de:L6bd4de:{c.instructions+=2;NFSU2_TR(0x6bd4de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd4e3:{NFSU2_TR(0x6bd4e3);
if(r1(R+518)){{goto L6bd546;}}
}
B6bd4e5:L6bd4e5:{c.instructions+=2;NFSU2_TR(0x6bd4e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd4ea:{NFSU2_TR(0x6bd4ea);
if(r1(R+518)){{goto L6bd53a;}}
}
B6bd4ec:L6bd4ec:{c.instructions+=2;NFSU2_TR(0x6bd4ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd4f1:{NFSU2_TR(0x6bd4f1);
if(r1(R+518)){{goto L6bd52e;}}
}
B6bd4f3:L6bd4f3:{c.instructions+=2;NFSU2_TR(0x6bd4f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd4f8:{NFSU2_TR(0x6bd4f8);
if(r1(R+518)){{goto L6bd522;}}
}
B6bd4fa:L6bd4fa:{c.instructions+=2;NFSU2_TR(0x6bd4fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd4ff:{NFSU2_TR(0x6bd4ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd505:L6bd505:{c.instructions+=2;NFSU2_TR(0x6bd505);
__builtin_memmove((R+4),(R+12),4);
}
B6bd507:{NFSU2_TR(0x6bd507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd50cull));
TAIL_STATIC(0x6d37e4u,6d3);
}
B6bd50c:L6bd50c:{c.instructions+=1;NFSU2_TR(0x6bd50c);
{goto L6bd82a;}
}
B6bd511:L6bd511:{c.instructions+=2;NFSU2_TR(0x6bd511);
__builtin_memmove((R+4),(R+24),4);
}
B6bd513:{NFSU2_TR(0x6bd513);
{goto L6bd88d;}
}
B6bd518:L6bd518:{c.instructions+=2;NFSU2_TR(0x6bd518);
w4(R+0,u32(0x8007000eull));
}
B6bd51d:{NFSU2_TR(0x6bd51d);
{goto L6bd896;}
}
B6bd522:L6bd522:{c.instructions+=2;NFSU2_TR(0x6bd522);
__builtin_memmove((R+4),(R+12),4);
}
B6bd524:{NFSU2_TR(0x6bd524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd529ull));
TAIL_STATIC(0x6d37dau,6d3);
}
B6bd529:L6bd529:{c.instructions+=1;NFSU2_TR(0x6bd529);
{goto L6bd82a;}
}
B6bd52e:L6bd52e:{c.instructions+=2;NFSU2_TR(0x6bd52e);
__builtin_memmove((R+4),(R+12),4);
}
B6bd530:{NFSU2_TR(0x6bd530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd535ull));
TAIL_STATIC(0x6d37bcu,6d3);
}
B6bd535:L6bd535:{c.instructions+=1;NFSU2_TR(0x6bd535);
{goto L6bd82a;}
}
B6bd53a:L6bd53a:{c.instructions+=2;NFSU2_TR(0x6bd53a);
__builtin_memmove((R+4),(R+12),4);
}
B6bd53c:{NFSU2_TR(0x6bd53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd541ull));
TAIL_STATIC(0x6d2c79u,6d2);
}
B6bd541:L6bd541:{c.instructions+=1;NFSU2_TR(0x6bd541);
{goto L6bd82a;}
}
B6bd546:L6bd546:{c.instructions+=2;NFSU2_TR(0x6bd546);
__builtin_memmove((R+4),(R+12),4);
}
B6bd548:{NFSU2_TR(0x6bd548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd54dull));
TAIL_STATIC(0x6d366fu,6d3);
}
B6bd54d:L6bd54d:{c.instructions+=1;NFSU2_TR(0x6bd54d);
{goto L6bd82a;}
}
B6bd552:L6bd552:{c.instructions+=2;NFSU2_TR(0x6bd552);
__builtin_memmove((R+4),(R+12),4);
}
B6bd554:{NFSU2_TR(0x6bd554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd559ull));
TAIL_STATIC(0x6d3802u,6d3);
}
B6bd559:L6bd559:{c.instructions+=1;NFSU2_TR(0x6bd559);
{goto L6bd82a;}
}
B6bd55e:L6bd55e:{c.instructions+=2;NFSU2_TR(0x6bd55e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd563:{NFSU2_TR(0x6bd563);
if(r1(R+518)){{goto L6bd5d6;}}
}
B6bd565:L6bd565:{c.instructions+=2;NFSU2_TR(0x6bd565);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd56a:{NFSU2_TR(0x6bd56a);
if(r1(R+518)){{goto L6bd5c4;}}
}
B6bd56c:L6bd56c:{c.instructions+=2;NFSU2_TR(0x6bd56c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd571:{NFSU2_TR(0x6bd571);
if(r1(R+518)){{goto L6bd5a8;}}
}
B6bd573:L6bd573:{c.instructions+=2;NFSU2_TR(0x6bd573);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd578:{NFSU2_TR(0x6bd578);
if(r1(R+518)){{goto L6bd811;}}
}
B6bd57e:L6bd57e:{c.instructions+=2;NFSU2_TR(0x6bd57e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd583:{NFSU2_TR(0x6bd583);
if(r1(R+518)){{goto L6bd59c;}}
}
B6bd585:L6bd585:{c.instructions+=2;NFSU2_TR(0x6bd585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd58a:{NFSU2_TR(0x6bd58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd590:L6bd590:{c.instructions+=2;NFSU2_TR(0x6bd590);
__builtin_memmove((R+4),(R+12),4);
}
B6bd592:{NFSU2_TR(0x6bd592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd597ull));
TAIL_STATIC(0x6bb8b9u,6bb);
}
B6bd597:L6bd597:{c.instructions+=1;NFSU2_TR(0x6bd597);
{goto L6bd82a;}
}
B6bd59c:L6bd59c:{c.instructions+=2;NFSU2_TR(0x6bd59c);
__builtin_memmove((R+4),(R+12),4);
}
B6bd59e:{NFSU2_TR(0x6bd59e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd5a3ull));
TAIL_STATIC(0x6d2485u,6d2);
}
B6bd5a3:L6bd5a3:{c.instructions+=1;NFSU2_TR(0x6bd5a3);
{goto L6bd82a;}
}
B6bd5a8:L6bd5a8:{c.instructions+=2;NFSU2_TR(0x6bd5a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bd5ac:{NFSU2_TR(0x6bd5ac);
if(r1(R+518)){{goto L6bd5ba;}}
}
B6bd5ae:L6bd5ae:{c.instructions+=2;NFSU2_TR(0x6bd5ae);
__builtin_memmove((R+4),(R+12),4);
}
B6bd5b0:{NFSU2_TR(0x6bd5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd5b5ull));
TAIL_STATIC(0x6d37b2u,6d3);
}
B6bd5b5:L6bd5b5:{c.instructions+=1;NFSU2_TR(0x6bd5b5);
{goto L6bd82a;}
}
B6bd5ba:L6bd5ba:{c.instructions+=2;NFSU2_TR(0x6bd5ba);
w4(R+28,u32(0x80004001ull));
}
B6bd5bf:{NFSU2_TR(0x6bd5bf);
{goto L6bd82c;}
}
B6bd5c4:L6bd5c4:{c.instructions+=2;NFSU2_TR(0x6bd5c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bd5c8:{NFSU2_TR(0x6bd5c8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd5bau);}goto L6bd5ba;}}
}
B6bd5ca:L6bd5ca:{c.instructions+=2;NFSU2_TR(0x6bd5ca);
__builtin_memmove((R+4),(R+12),4);
}
B6bd5cc:{NFSU2_TR(0x6bd5cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd5d1ull));
TAIL_STATIC(0x6d37a8u,6d3);
}
B6bd5d1:L6bd5d1:{c.instructions+=1;NFSU2_TR(0x6bd5d1);
{goto L6bd82a;}
}
B6bd5d6:L6bd5d6:{c.instructions+=2;NFSU2_TR(0x6bd5d6);
__builtin_memmove((R+4),(R+12),4);
}
B6bd5d8:{NFSU2_TR(0x6bd5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd5ddull));
TAIL_STATIC(0x6d3820u,6d3);
}
B6bd5dd:L6bd5dd:{c.instructions+=1;NFSU2_TR(0x6bd5dd);
{goto L6bd82a;}
}
B6bd5e2:L6bd5e2:{c.instructions+=3;NFSU2_TR(0x6bd5e2);
w4(R+4,u32(0x50000000ull));
}
B6bd5e7:{NFSU2_TR(0x6bd5e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd5e9:{NFSU2_TR(0x6bd5e9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd673;}}
}
B6bd5ef:L6bd5ef:{c.instructions+=1;NFSU2_TR(0x6bd5ef);
if(r1(R+518)){{goto L6bd667;}}
}
B6bd5f1:L6bd5f1:{c.instructions+=2;NFSU2_TR(0x6bd5f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd5f6:{NFSU2_TR(0x6bd5f6);
if(r1(R+518)){{goto L6bd65b;}}
}
B6bd5f8:L6bd5f8:{c.instructions+=2;NFSU2_TR(0x6bd5f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd5fd:{NFSU2_TR(0x6bd5fd);
if(r1(R+518)){{goto L6bd64f;}}
}
B6bd5ff:L6bd5ff:{c.instructions+=2;NFSU2_TR(0x6bd5ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd604:{NFSU2_TR(0x6bd604);
if(r1(R+518)){{goto L6bd643;}}
}
B6bd606:L6bd606:{c.instructions+=2;NFSU2_TR(0x6bd606);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd60b:{NFSU2_TR(0x6bd60b);
if(r1(R+518)){{goto L6bd637;}}
}
B6bd60d:L6bd60d:{c.instructions+=2;NFSU2_TR(0x6bd60d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd612:{NFSU2_TR(0x6bd612);
if(r1(R+518)){{goto L6bd62b;}}
}
B6bd614:L6bd614:{c.instructions+=2;NFSU2_TR(0x6bd614);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd619:{NFSU2_TR(0x6bd619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd61f:L6bd61f:{c.instructions+=2;NFSU2_TR(0x6bd61f);
__builtin_memmove((R+4),(R+12),4);
}
B6bd621:{NFSU2_TR(0x6bd621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd626ull));
TAIL_STATIC(0x6d3941u,6d3);
}
B6bd626:L6bd626:{c.instructions+=1;NFSU2_TR(0x6bd626);
{goto L6bd82a;}
}
B6bd62b:L6bd62b:{c.instructions+=2;NFSU2_TR(0x6bd62b);
__builtin_memmove((R+4),(R+12),4);
}
B6bd62d:{NFSU2_TR(0x6bd62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd632ull));
TAIL_STATIC(0x6d2881u,6d2);
}
B6bd632:L6bd632:{c.instructions+=1;NFSU2_TR(0x6bd632);
{goto L6bd82a;}
}
B6bd637:L6bd637:{c.instructions+=2;NFSU2_TR(0x6bd637);
__builtin_memmove((R+4),(R+12),4);
}
B6bd639:{NFSU2_TR(0x6bd639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd63eull));
TAIL_STATIC(0x6d3870u,6d3);
}
B6bd63e:L6bd63e:{c.instructions+=1;NFSU2_TR(0x6bd63e);
{goto L6bd82a;}
}
B6bd643:L6bd643:{c.instructions+=2;NFSU2_TR(0x6bd643);
__builtin_memmove((R+4),(R+12),4);
}
B6bd645:{NFSU2_TR(0x6bd645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd64aull));
TAIL_STATIC(0x6d3866u,6d3);
}
B6bd64a:L6bd64a:{c.instructions+=1;NFSU2_TR(0x6bd64a);
{goto L6bd82a;}
}
B6bd64f:L6bd64f:{c.instructions+=2;NFSU2_TR(0x6bd64f);
__builtin_memmove((R+4),(R+12),4);
}
B6bd651:{NFSU2_TR(0x6bd651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd656ull));
TAIL_STATIC(0x6bb5cbu,6bb);
}
B6bd656:L6bd656:{c.instructions+=1;NFSU2_TR(0x6bd656);
{goto L6bd82a;}
}
B6bd65b:L6bd65b:{c.instructions+=2;NFSU2_TR(0x6bd65b);
__builtin_memmove((R+4),(R+12),4);
}
B6bd65d:{NFSU2_TR(0x6bd65d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd662ull));
TAIL_STATIC(0x6bb6a7u,6bb);
}
B6bd662:L6bd662:{c.instructions+=1;NFSU2_TR(0x6bd662);
{goto L6bd82a;}
}
B6bd667:L6bd667:{c.instructions+=2;NFSU2_TR(0x6bd667);
__builtin_memmove((R+4),(R+12),4);
}
B6bd669:{NFSU2_TR(0x6bd669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd66eull));
TAIL_STATIC(0x6d3884u,6d3);
}
B6bd66e:L6bd66e:{c.instructions+=1;NFSU2_TR(0x6bd66e);
{goto L6bd82a;}
}
B6bd673:L6bd673:{c.instructions+=2;NFSU2_TR(0x6bd673);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd678:{NFSU2_TR(0x6bd678);
if(r1(R+518)){{goto L6bd6c7;}}
}
B6bd67a:L6bd67a:{c.instructions+=2;NFSU2_TR(0x6bd67a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd67f:{NFSU2_TR(0x6bd67f);
if(r1(R+518)){{goto L6bd771;}}
}
B6bd685:L6bd685:{c.instructions+=2;NFSU2_TR(0x6bd685);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd68a:{NFSU2_TR(0x6bd68a);
if(r1(R+518)){{goto L6bd71b;}}
}
B6bd690:L6bd690:{c.instructions+=2;NFSU2_TR(0x6bd690);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd695:{NFSU2_TR(0x6bd695);
if(r1(R+518)){{goto L6bd765;}}
}
B6bd69b:L6bd69b:{c.instructions+=2;NFSU2_TR(0x6bd69b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd6a0:{NFSU2_TR(0x6bd6a0);
if(r1(R+518)){{goto L6bd759;}}
}
B6bd6a6:L6bd6a6:{c.instructions+=2;NFSU2_TR(0x6bd6a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd6ab:{NFSU2_TR(0x6bd6ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd6b1:L6bd6b1:{c.instructions+=2;NFSU2_TR(0x6bd6b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bd6b5:{NFSU2_TR(0x6bd6b5);
if(r1(R+518)){{goto L6bd84c;}}
}
B6bd6bb:L6bd6bb:{c.instructions+=2;NFSU2_TR(0x6bd6bb);
__builtin_memmove((R+4),(R+12),4);
}
B6bd6bd:{NFSU2_TR(0x6bd6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd6c2ull));
TAIL_STATIC(0x6d23ebu,6d2);
}
B6bd6c2:L6bd6c2:{c.instructions+=1;NFSU2_TR(0x6bd6c2);
{goto L6bd82a;}
}
B6bd6c7:L6bd6c7:{c.instructions+=2;NFSU2_TR(0x6bd6c7);
__builtin_memmove((R+4),(R+12),4);
}
B6bd6c9:{NFSU2_TR(0x6bd6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd6ceull));
TAIL_STATIC(0x6d25dau,6d2);
}
B6bd6ce:L6bd6ce:{c.instructions+=1;NFSU2_TR(0x6bd6ce);
{goto L6bd82a;}
}
B6bd6d3:L6bd6d3:{c.instructions+=3;NFSU2_TR(0x6bd6d3);
w4(R+4,u32(0x61300000ull));
}
B6bd6d8:{NFSU2_TR(0x6bd6d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd6da:{NFSU2_TR(0x6bd6da);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd77d;}}
}
B6bd6e0:L6bd6e0:{c.instructions+=1;NFSU2_TR(0x6bd6e0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd6b1u);}goto L6bd6b1;}}
}
B6bd6e2:L6bd6e2:{c.instructions+=3;NFSU2_TR(0x6bd6e2);
w4(R+4,u32(0x60c00000ull));
}
B6bd6e7:{NFSU2_TR(0x6bd6e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd6e9:{NFSU2_TR(0x6bd6e9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd727;}}
}
B6bd6eb:L6bd6eb:{c.instructions+=1;NFSU2_TR(0x6bd6eb);
if(r1(R+518)){{goto L6bd765;}}
}
B6bd6ed:L6bd6ed:{c.instructions+=2;NFSU2_TR(0x6bd6ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd6f2:{NFSU2_TR(0x6bd6f2);
if(r1(R+518)){{goto L6bd71b;}}
}
B6bd6f4:L6bd6f4:{c.instructions+=2;NFSU2_TR(0x6bd6f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd6f9:{NFSU2_TR(0x6bd6f9);
if(r1(R+518)){{goto L6bd765;}}
}
B6bd6fb:L6bd6fb:{c.instructions+=2;NFSU2_TR(0x6bd6fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd700:{NFSU2_TR(0x6bd700);
if(r1(R+518)){{goto L6bd759;}}
}
B6bd702:L6bd702:{c.instructions+=2;NFSU2_TR(0x6bd702);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd707:{NFSU2_TR(0x6bd707);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd6b1u);}goto L6bd6b1;}}
}
B6bd709:L6bd709:{c.instructions+=2;NFSU2_TR(0x6bd709);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd70e:{NFSU2_TR(0x6bd70e);
if(r1(R+518)){{goto L6bd771;}}
}
B6bd710:L6bd710:{c.instructions+=2;NFSU2_TR(0x6bd710);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd715:{NFSU2_TR(0x6bd715);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd71b:L6bd71b:{c.instructions+=2;NFSU2_TR(0x6bd71b);
__builtin_memmove((R+4),(R+12),4);
}
B6bd71d:{NFSU2_TR(0x6bd71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd722ull));
TAIL_STATIC(0x6d20eeu,6d2);
}
B6bd722:L6bd722:{c.instructions+=1;NFSU2_TR(0x6bd722);
{goto L6bd82a;}
}
B6bd727:L6bd727:{c.instructions+=2;NFSU2_TR(0x6bd727);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd72c:{NFSU2_TR(0x6bd72c);
if(r1(R+518)){{goto L6bd759;}}
}
B6bd72e:L6bd72e:{c.instructions+=2;NFSU2_TR(0x6bd72e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd733:{NFSU2_TR(0x6bd733);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd6b1u);}goto L6bd6b1;}}
}
B6bd739:L6bd739:{c.instructions+=2;NFSU2_TR(0x6bd739);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd73e:{NFSU2_TR(0x6bd73e);
if(r1(R+518)){{goto L6bd771;}}
}
B6bd740:L6bd740:{c.instructions+=2;NFSU2_TR(0x6bd740);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd745:{NFSU2_TR(0x6bd745);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd71bu);}goto L6bd71b;}}
}
B6bd747:L6bd747:{c.instructions+=2;NFSU2_TR(0x6bd747);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd74c:{NFSU2_TR(0x6bd74c);
if(r1(R+518)){{goto L6bd765;}}
}
B6bd74e:L6bd74e:{c.instructions+=2;NFSU2_TR(0x6bd74e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd753:{NFSU2_TR(0x6bd753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd759:L6bd759:{c.instructions+=2;NFSU2_TR(0x6bd759);
__builtin_memmove((R+4),(R+12),4);
}
B6bd75b:{NFSU2_TR(0x6bd75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd760ull));
TAIL_STATIC(0x6d2384u,6d2);
}
B6bd760:L6bd760:{c.instructions+=1;NFSU2_TR(0x6bd760);
{goto L6bd82a;}
}
B6bd765:L6bd765:{c.instructions+=2;NFSU2_TR(0x6bd765);
__builtin_memmove((R+4),(R+12),4);
}
B6bd767:{NFSU2_TR(0x6bd767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd76cull));
TAIL_STATIC(0x6d231du,6d2);
}
B6bd76c:L6bd76c:{c.instructions+=1;NFSU2_TR(0x6bd76c);
{goto L6bd82a;}
}
B6bd771:L6bd771:{c.instructions+=2;NFSU2_TR(0x6bd771);
__builtin_memmove((R+4),(R+12),4);
}
B6bd773:{NFSU2_TR(0x6bd773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd778ull));
TAIL_STATIC(0x6d208au,6d2);
}
B6bd778:L6bd778:{c.instructions+=1;NFSU2_TR(0x6bd778);
{goto L6bd82a;}
}
B6bd77d:L6bd77d:{c.instructions+=3;NFSU2_TR(0x6bd77d);
w4(R+4,u32(0x70b00000ull));
}
B6bd782:{NFSU2_TR(0x6bd782);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd784:{NFSU2_TR(0x6bd784);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bd7e7;}}
}
B6bd786:L6bd786:{c.instructions+=1;NFSU2_TR(0x6bd786);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd590u);}goto L6bd590;}}
}
B6bd78c:L6bd78c:{c.instructions+=2;NFSU2_TR(0x6bd78c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd791:{NFSU2_TR(0x6bd791);
if(r1(R+518)){{goto L6bd7de;}}
}
B6bd793:L6bd793:{c.instructions+=2;NFSU2_TR(0x6bd793);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd798:{NFSU2_TR(0x6bd798);
if(r1(R+518)){{goto L6bd7d5;}}
}
B6bd79a:L6bd79a:{c.instructions+=2;NFSU2_TR(0x6bd79a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd79f:{NFSU2_TR(0x6bd79f);
if(r1(R+518)){{goto L6bd7cc;}}
}
B6bd7a1:L6bd7a1:{c.instructions+=2;NFSU2_TR(0x6bd7a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd7a6:{NFSU2_TR(0x6bd7a6);
if(r1(R+518)){{goto L6bd7c3;}}
}
B6bd7a8:L6bd7a8:{c.instructions+=2;NFSU2_TR(0x6bd7a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd7ad:{NFSU2_TR(0x6bd7ad);
if(r1(R+518)){{goto L6bd7c3;}}
}
B6bd7af:L6bd7af:{c.instructions+=2;NFSU2_TR(0x6bd7af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd7b4:{NFSU2_TR(0x6bd7b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd7ba:L6bd7ba:{c.instructions+=2;NFSU2_TR(0x6bd7ba);
__builtin_memmove((R+4),(R+12),4);
}
B6bd7bc:{NFSU2_TR(0x6bd7bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd7c1ull));
TAIL_STATIC(0x6d244fu,6d2);
}
B6bd7c1:L6bd7c1:{c.instructions+=1;NFSU2_TR(0x6bd7c1);
{goto L6bd82a;}
}
B6bd7c3:L6bd7c3:{c.instructions+=2;NFSU2_TR(0x6bd7c3);
__builtin_memmove((R+4),(R+12),4);
}
B6bd7c5:{NFSU2_TR(0x6bd7c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd7caull));
TAIL_STATIC(0x6d2fb9u,6d2);
}
B6bd7ca:L6bd7ca:{c.instructions+=1;NFSU2_TR(0x6bd7ca);
{goto L6bd82a;}
}
B6bd7cc:L6bd7cc:{c.instructions+=2;NFSU2_TR(0x6bd7cc);
__builtin_memmove((R+4),(R+12),4);
}
B6bd7ce:{NFSU2_TR(0x6bd7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd7d3ull));
TAIL_STATIC(0x6d2f13u,6d2);
}
B6bd7d3:L6bd7d3:{c.instructions+=1;NFSU2_TR(0x6bd7d3);
{goto L6bd82a;}
}
B6bd7d5:L6bd7d5:{c.instructions+=2;NFSU2_TR(0x6bd7d5);
__builtin_memmove((R+4),(R+12),4);
}
B6bd7d7:{NFSU2_TR(0x6bd7d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd7dcull));
TAIL_STATIC(0x6d2df8u,6d2);
}
B6bd7dc:L6bd7dc:{c.instructions+=1;NFSU2_TR(0x6bd7dc);
{goto L6bd82a;}
}
B6bd7de:L6bd7de:{c.instructions+=2;NFSU2_TR(0x6bd7de);
__builtin_memmove((R+4),(R+12),4);
}
B6bd7e0:{NFSU2_TR(0x6bd7e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd7e5ull));
TAIL_STATIC(0x6d3955u,6d3);
}
B6bd7e5:L6bd7e5:{c.instructions+=1;NFSU2_TR(0x6bd7e5);
{goto L6bd82a;}
}
B6bd7e7:L6bd7e7:{c.instructions+=2;NFSU2_TR(0x6bd7e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd7ec:{NFSU2_TR(0x6bd7ec);
if(r1(R+518)){{goto L6bd823;}}
}
B6bd7ee:L6bd7ee:{c.instructions+=2;NFSU2_TR(0x6bd7ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd7f3:{NFSU2_TR(0x6bd7f3);
if(r1(R+518)){{goto L6bd81a;}}
}
B6bd7f5:L6bd7f5:{c.instructions+=2;NFSU2_TR(0x6bd7f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd7fa:{NFSU2_TR(0x6bd7fa);
if(r1(R+518)){{goto L6bd811;}}
}
B6bd7fc:L6bd7fc:{c.instructions+=2;NFSU2_TR(0x6bd7fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd801:{NFSU2_TR(0x6bd801);
if(r1(R+518)){{goto L6bd811;}}
}
B6bd803:L6bd803:{c.instructions+=2;NFSU2_TR(0x6bd803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd808:{NFSU2_TR(0x6bd808);
if(r1(R+518)){{goto L6bd811;}}
}
B6bd80a:L6bd80a:{c.instructions+=2;NFSU2_TR(0x6bd80a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd80f:{NFSU2_TR(0x6bd80f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd86a;}}
}
B6bd811:L6bd811:{c.instructions+=2;NFSU2_TR(0x6bd811);
__builtin_memmove((R+4),(R+12),4);
}
B6bd813:{NFSU2_TR(0x6bd813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd818ull));
TAIL_STATIC(0x6d2678u,6d2);
}
B6bd818:L6bd818:{c.instructions+=1;NFSU2_TR(0x6bd818);
{goto L6bd82a;}
}
B6bd81a:L6bd81a:{c.instructions+=2;NFSU2_TR(0x6bd81a);
__builtin_memmove((R+4),(R+12),4);
}
B6bd81c:{NFSU2_TR(0x6bd81c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd821ull));
TAIL_STATIC(0x6d2d86u,6d2);
}
B6bd821:L6bd821:{c.instructions+=1;NFSU2_TR(0x6bd821);
{goto L6bd82a;}
}
B6bd823:L6bd823:{c.instructions+=2;NFSU2_TR(0x6bd823);
__builtin_memmove((R+4),(R+12),4);
}
B6bd825:{NFSU2_TR(0x6bd825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd82aull));
TAIL_STATIC(0x6bb783u,6bb);
}
B6bd82a:L6bd82a:{c.instructions+=1;NFSU2_TR(0x6bd82a);
__builtin_memmove((R+28),(R+0),4);
}
B6bd82c:L6bd82c:{c.instructions+=2;NFSU2_TR(0x6bd82c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80004001ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd832:{NFSU2_TR(0x6bd832);
if(r1(R+518)){{goto L6bd86a;}}
}
B6bd834:L6bd834:{c.instructions+=3;NFSU2_TR(0x6bd834);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bd835:{NFSU2_TR(0x6bd835);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6bd838:{NFSU2_TR(0x6bd838);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd44fu);}goto L6bd44f;}}
}
B6bd83e:L6bd83e:{c.instructions+=1;NFSU2_TR(0x6bd83e);
{goto L6bd894;}
}
B6bd840:L6bd840:{c.instructions+=3;NFSU2_TR(0x6bd840);
u8 U[4];
w4(U+0,u32(0x7bcee4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd845:{NFSU2_TR(0x6bd845);
u8 U[4];
w4(U+0,u32(0x119full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd84a:{NFSU2_TR(0x6bd84a);
{goto L6bd856;}
}
B6bd84c:L6bd84c:{c.instructions+=2;NFSU2_TR(0x6bd84c);
u8 U[4];
w4(U+0,u32(0x7bd170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd851:{NFSU2_TR(0x6bd851);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd856:L6bd856:{c.instructions+=4;NFSU2_TR(0x6bd856);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd85c:{NFSU2_TR(0x6bd85c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd85f:{NFSU2_TR(0x6bd85f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd860:{NFSU2_TR(0x6bd860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd865ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bd865:L6bd865:{c.instructions+=2;NFSU2_TR(0x6bd865);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bd868:{NFSU2_TR(0x6bd868);
{goto L6bd894;}
}
B6bd86a:L6bd86a:{c.instructions+=6;NFSU2_TR(0x6bd86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd870:{NFSU2_TR(0x6bd870);
u8 U[4];
w4(U+0,u32(0x7bb258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd875:{NFSU2_TR(0x6bd875);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd87a:{NFSU2_TR(0x6bd87a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bd87d:{NFSU2_TR(0x6bd87d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd87e:{NFSU2_TR(0x6bd87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd883ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bd883:L6bd883:{c.instructions+=1;NFSU2_TR(0x6bd883);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bd886:L6bd886:{c.instructions+=3;NFSU2_TR(0x6bd886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd889:{NFSU2_TR(0x6bd889);
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
B6bd88b:{NFSU2_TR(0x6bd88b);
if(r1(R+518)){{goto L6bd894;}}
}
B6bd88d:L6bd88d:{c.instructions+=2;NFSU2_TR(0x6bd88d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd88f:{NFSU2_TR(0x6bd88f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bd894ull));
TAIL_STATIC(0x6739efu,673);
}
B6bd894:L6bd894:{c.instructions+=1;NFSU2_TR(0x6bd894);
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
B6bd896:L6bd896:{c.instructions+=5;NFSU2_TR(0x6bd896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bd897:{NFSU2_TR(0x6bd897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bd898:{NFSU2_TR(0x6bd898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bd899:{NFSU2_TR(0x6bd899);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bd89a:{NFSU2_TR(0x6bd89a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bd89b:L6bd89b:{c.instructions+=13;NFSU2_TR(0x6bd89b);
__builtin_memmove((R+28),(R+28),4);
}
B6bd89d:{NFSU2_TR(0x6bd89d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd89e:{NFSU2_TR(0x6bd89e);
__builtin_memmove((R+20),(R+16),4);
}
B6bd8a0:{NFSU2_TR(0x6bd8a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd8a1:{NFSU2_TR(0x6bd8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd8a4:{NFSU2_TR(0x6bd8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd8a7:{NFSU2_TR(0x6bd8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd8ab:{NFSU2_TR(0x6bd8ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bd8ad:{NFSU2_TR(0x6bd8ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd8ae:{NFSU2_TR(0x6bd8ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd8af:{NFSU2_TR(0x6bd8af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd8b0:{NFSU2_TR(0x6bd8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd8b3:{NFSU2_TR(0x6bd8b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bd8ef;}}
}
B6bd8b5:L6bd8b5:{c.instructions+=3;NFSU2_TR(0x6bd8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bd8b8:{NFSU2_TR(0x6bd8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd8be:{NFSU2_TR(0x6bd8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd8c1:L6bd8c1:{c.instructions+=4;NFSU2_TR(0x6bd8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd8c3:{NFSU2_TR(0x6bd8c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd8c6:{NFSU2_TR(0x6bd8c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd8c9:{NFSU2_TR(0x6bd8c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd8e1;}}
}
B6bd8cb:L6bd8cb:{c.instructions+=3;NFSU2_TR(0x6bd8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd8ce:{NFSU2_TR(0x6bd8ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bd8d1:{NFSU2_TR(0x6bd8d1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bd8e1;}}
}
B6bd8d3:L6bd8d3:{c.instructions+=4;NFSU2_TR(0x6bd8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bd8d6:{NFSU2_TR(0x6bd8d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd8d9:{NFSU2_TR(0x6bd8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6bd8df:{NFSU2_TR(0x6bd8df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd8f8;}}
}
B6bd8e1:L6bd8e1:{c.instructions+=5;NFSU2_TR(0x6bd8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bd8e4:{NFSU2_TR(0x6bd8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd8e7:{NFSU2_TR(0x6bd8e7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6bd8ea:{NFSU2_TR(0x6bd8ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bd8ed:{NFSU2_TR(0x6bd8ed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd8c1u);}goto L6bd8c1;}}
}
B6bd8ef:L6bd8ef:{c.instructions+=1;NFSU2_TR(0x6bd8ef);
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
B6bd8f1:L6bd8f1:{c.instructions+=5;NFSU2_TR(0x6bd8f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bd8f2:{NFSU2_TR(0x6bd8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bd8f3:{NFSU2_TR(0x6bd8f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bd8f4:{NFSU2_TR(0x6bd8f4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bd8f5:{NFSU2_TR(0x6bd8f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bd8f8:L6bd8f8:{c.instructions+=3;NFSU2_TR(0x6bd8f8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bd8fa:{NFSU2_TR(0x6bd8fa);
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
B6bd8fb:{NFSU2_TR(0x6bd8fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd8f1u);}goto L6bd8f1;}
}
B6bd8fd:L6bd8fd:{c.instructions+=11;NFSU2_TR(0x6bd8fd);
__builtin_memmove((R+28),(R+28),4);
}
B6bd8ff:{NFSU2_TR(0x6bd8ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd900:{NFSU2_TR(0x6bd900);
__builtin_memmove((R+20),(R+16),4);
}
B6bd902:{NFSU2_TR(0x6bd902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb0ull))));
}
B6bd908:{NFSU2_TR(0x6bd908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd909:{NFSU2_TR(0x6bd909);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd90a:{NFSU2_TR(0x6bd90a);
__builtin_memmove((R+24),(R+4),4);
}
B6bd90c:{NFSU2_TR(0x6bd90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd90f:{NFSU2_TR(0x6bd90f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bd911:{NFSU2_TR(0x6bd911);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd913:{NFSU2_TR(0x6bd913);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd91d;}}
}
B6bd915:L6bd915:{c.instructions+=3;NFSU2_TR(0x6bd915);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bd917:{NFSU2_TR(0x6bd917);
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
B6bd918:{NFSU2_TR(0x6bd918);
{goto L6bdabf;}
}
B6bd91d:L6bd91d:{c.instructions+=4;NFSU2_TR(0x6bd91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bd91f:{NFSU2_TR(0x6bd91f);
__builtin_memmove((R+8),(R+0),4);
}
B6bd921:{NFSU2_TR(0x6bd921);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6bd927:{NFSU2_TR(0x6bd927);
if(r1(R+518)){{goto L6bd931;}}
}
B6bd929:L6bd929:{c.instructions+=2;NFSU2_TR(0x6bd929);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd92f:{NFSU2_TR(0x6bd92f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bd938;}}
}
B6bd931:L6bd931:{c.instructions+=2;NFSU2_TR(0x6bd931);
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
B6bd933:{NFSU2_TR(0x6bd933);
{goto L6bdabf;}
}
B6bd938:L6bd938:{c.instructions+=11;NFSU2_TR(0x6bd938);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bd93d:{NFSU2_TR(0x6bd93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd940:{NFSU2_TR(0x6bd940);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd943:{NFSU2_TR(0x6bd943);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bd945:{NFSU2_TR(0x6bd945);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bd945);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bd945);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6bd948:{NFSU2_TR(0x6bd948);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bd949:{NFSU2_TR(0x6bd949);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bd94b:{NFSU2_TR(0x6bd94b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bd94c:{NFSU2_TR(0x6bd94c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bd94e:{NFSU2_TR(0x6bd94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd951:{NFSU2_TR(0x6bd951);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdabc;}}
}
B6bd957:L6bd957:{c.instructions+=21;NFSU2_TR(0x6bd957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd95d:{NFSU2_TR(0x6bd95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd963:{NFSU2_TR(0x6bd963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bd966:{NFSU2_TR(0x6bd966);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bd969:{NFSU2_TR(0x6bd969);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd96d:{NFSU2_TR(0x6bd96d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bd970:{NFSU2_TR(0x6bd970);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd974:{NFSU2_TR(0x6bd974);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bd977:{NFSU2_TR(0x6bd977);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd97b:{NFSU2_TR(0x6bd97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bd981:{NFSU2_TR(0x6bd981);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd988:{NFSU2_TR(0x6bd988);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6bd98b:{NFSU2_TR(0x6bd98b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bd990:{NFSU2_TR(0x6bd990);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bd992:{NFSU2_TR(0x6bd992);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bd995:{NFSU2_TR(0x6bd995);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bd9a0:{NFSU2_TR(0x6bd9a0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd9a7:{NFSU2_TR(0x6bd9a7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bd9ae:{NFSU2_TR(0x6bd9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd9b1:{NFSU2_TR(0x6bd9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd9b4:{NFSU2_TR(0x6bd9b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdabc;}}
}
B6bd9ba:L6bd9ba:{c.instructions+=4;NFSU2_TR(0x6bd9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd9bd:{NFSU2_TR(0x6bd9bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bd9c0:{NFSU2_TR(0x6bd9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd9c3:{NFSU2_TR(0x6bd9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd9c6:L6bd9c6:{c.instructions+=13;NFSU2_TR(0x6bd9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd9c9:{NFSU2_TR(0x6bd9c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd9cc:{NFSU2_TR(0x6bd9cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd9cf:{NFSU2_TR(0x6bd9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd9d2:{NFSU2_TR(0x6bd9d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bd9d5:{NFSU2_TR(0x6bd9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bd9d8:{NFSU2_TR(0x6bd9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd9db:{NFSU2_TR(0x6bd9db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bd9de:{NFSU2_TR(0x6bd9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bd9e1:{NFSU2_TR(0x6bd9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd9e4:{NFSU2_TR(0x6bd9e4);
__builtin_memmove((R+4),(R+0),4);
}
B6bd9e6:{NFSU2_TR(0x6bd9e6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x200ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bd9ec:{NFSU2_TR(0x6bd9ec);
if(r1(R+518)){{goto L6bd9f7;}}
}
B6bd9ee:L6bd9ee:{c.instructions+=2;NFSU2_TR(0x6bd9ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6bd9f0:{NFSU2_TR(0x6bd9f0);
if(r1(R+519)){{goto L6bd9fb;}}
}
B6bd9f2:L6bd9f2:{c.instructions+=2;NFSU2_TR(0x6bd9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bd9f5:{NFSU2_TR(0x6bd9f5);
{goto L6bda2a;}
}
B6bd9f7:L6bd9f7:{c.instructions+=2;NFSU2_TR(0x6bd9f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6bd9f9:{NFSU2_TR(0x6bd9f9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6bda03;}}
}
B6bd9fb:L6bd9fb:{c.instructions+=2;NFSU2_TR(0x6bd9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda01:{NFSU2_TR(0x6bda01);
{goto L6bda2a;}
}
B6bda03:L6bda03:{c.instructions+=2;NFSU2_TR(0x6bda03);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bda05:{NFSU2_TR(0x6bda05);
if(r1(R+518)){{goto L6bda24;}}
}
B6bda07:L6bda07:{c.instructions+=2;NFSU2_TR(0x6bda07);
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
B6bda09:{NFSU2_TR(0x6bda09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bda24;}}
}
B6bda0b:L6bda0b:{c.instructions+=4;NFSU2_TR(0x6bda0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bda0e:{NFSU2_TR(0x6bda0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bda10:{NFSU2_TR(0x6bda10);
__builtin_memmove((R+4),(R+24),4);
}
B6bda12:{NFSU2_TR(0x6bda12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bda15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bda15:L6bda15:{c.instructions+=2;NFSU2_TR(0x6bda15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bda1a:{NFSU2_TR(0x6bda1a);
if(r1(R+518)){{goto L6bda24;}}
}
B6bda1c:L6bda1c:{c.instructions+=2;NFSU2_TR(0x6bda1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda22:{NFSU2_TR(0x6bda22);
{goto L6bda2a;}
}
B6bda24:L6bda24:{c.instructions+=1;NFSU2_TR(0x6bda24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda2a:L6bda2a:{c.instructions+=4;NFSU2_TR(0x6bda2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bda2e:{NFSU2_TR(0x6bda2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bda32:{NFSU2_TR(0x6bda32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bda35:{NFSU2_TR(0x6bda35);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bda6e;}}
}
B6bda37:L6bda37:{c.instructions+=3;NFSU2_TR(0x6bda37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda3a:{NFSU2_TR(0x6bda3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bda3d:{NFSU2_TR(0x6bda3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bda40:L6bda40:{c.instructions+=5;NFSU2_TR(0x6bda40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bda42:{NFSU2_TR(0x6bda42);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bda45:{NFSU2_TR(0x6bda45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bda48:{NFSU2_TR(0x6bda48);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bda4b:{NFSU2_TR(0x6bda4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bda5d;}}
}
B6bda4d:L6bda4d:{c.instructions+=3;NFSU2_TR(0x6bda4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bda50:{NFSU2_TR(0x6bda50);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bda53:{NFSU2_TR(0x6bda53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bda5d;}}
}
B6bda55:L6bda55:{c.instructions+=3;NFSU2_TR(0x6bda55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bda58:{NFSU2_TR(0x6bda58);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bda5b:{NFSU2_TR(0x6bda5b);
if(r1(R+518)){{goto L6bda6b;}}
}
B6bda5d:L6bda5d:{c.instructions+=5;NFSU2_TR(0x6bda5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bda60:{NFSU2_TR(0x6bda60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda63:{NFSU2_TR(0x6bda63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6bda66:{NFSU2_TR(0x6bda66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bda69:{NFSU2_TR(0x6bda69);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bda40u);}goto L6bda40;}}
}
B6bda6b:L6bda6b:{c.instructions+=2;NFSU2_TR(0x6bda6b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bda6d:{NFSU2_TR(0x6bda6d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bda6e:L6bda6e:{c.instructions+=3;NFSU2_TR(0x6bda6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bda71:{NFSU2_TR(0x6bda71);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bda74:{NFSU2_TR(0x6bda74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bda94;}}
}
B6bda76:L6bda76:{c.instructions+=3;NFSU2_TR(0x6bda76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda79:{NFSU2_TR(0x6bda79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x12ull))));
}
B6bda7c:{NFSU2_TR(0x6bda7c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bda94;}}
}
B6bda7e:L6bda7e:{c.instructions+=7;NFSU2_TR(0x6bda7e);
__builtin_memmove((R+4),(R+0),4);
}
B6bda80:{NFSU2_TR(0x6bda80);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bda83:{NFSU2_TR(0x6bda83);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6bda87:{NFSU2_TR(0x6bda87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bda89:{NFSU2_TR(0x6bda89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bda8b:{NFSU2_TR(0x6bda8b);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6bda92:{NFSU2_TR(0x6bda92);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bdac5;}}
}
B6bda94:L6bda94:{c.instructions+=3;NFSU2_TR(0x6bda94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bda97:{NFSU2_TR(0x6bda97);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bda9b:{NFSU2_TR(0x6bda9b);
if(r1(R+518)){{goto L6bdaa6;}}
}
B6bda9d:L6bda9d:{c.instructions+=3;NFSU2_TR(0x6bda9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdaa0:{NFSU2_TR(0x6bdaa0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdaa4:{NFSU2_TR(0x6bdaa4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bdac5;}}
}
B6bdaa6:L6bdaa6:{c.instructions+=7;NFSU2_TR(0x6bdaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdaa9:{NFSU2_TR(0x6bdaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bdaac:{NFSU2_TR(0x6bdaac);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bdaad:{NFSU2_TR(0x6bdaad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bdab0:{NFSU2_TR(0x6bdab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdab3:{NFSU2_TR(0x6bdab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdab6:{NFSU2_TR(0x6bdab6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bd9c6u);}goto L6bd9c6;}}
}
B6bdabc:L6bdabc:{c.instructions+=1;NFSU2_TR(0x6bdabc);
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
B6bdabe:L6bdabe:{c.instructions+=1;NFSU2_TR(0x6bdabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bdabf:L6bdabf:{c.instructions+=4;NFSU2_TR(0x6bdabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bdac0:{NFSU2_TR(0x6bdac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bdac1:{NFSU2_TR(0x6bdac1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bdac2:{NFSU2_TR(0x6bdac2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bdac5:L6bdac5:{c.instructions+=3;NFSU2_TR(0x6bdac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdac8:{NFSU2_TR(0x6bdac8);
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
B6bdaca:{NFSU2_TR(0x6bdaca);
if(r1(R+518)){{goto L6bdace;}}
}
B6bdacc:L6bdacc:{c.instructions+=1;NFSU2_TR(0x6bdacc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bdace:L6bdace:{c.instructions+=2;NFSU2_TR(0x6bdace);
__builtin_memmove((R+0),(R+12),4);
}
B6bdad0:{NFSU2_TR(0x6bdad0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdabeu);}goto L6bdabe;}
}
B6bdad2:L6bdad2:{c.instructions+=6;NFSU2_TR(0x6bdad2);
__builtin_memmove((R+28),(R+28),4);
}
B6bdad4:{NFSU2_TR(0x6bdad4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdad5:{NFSU2_TR(0x6bdad5);
__builtin_memmove((R+20),(R+16),4);
}
B6bdad7:{NFSU2_TR(0x6bdad7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdad8:{NFSU2_TR(0x6bdad8);
__builtin_memmove((R+24),(R+4),4);
}
B6bdada:{NFSU2_TR(0x6bdada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdadfull));
TAIL_STATIC(0x6cd15fu,6cd);
}
B6bdadf:L6bdadf:{c.instructions+=9;NFSU2_TR(0x6bdadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdae2:{NFSU2_TR(0x6bdae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdae8:{NFSU2_TR(0x6bdae8);
u8 U[4];
w4(U+0,u32(0x7bd198ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6bdaee:{NFSU2_TR(0x6bdaee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x80b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdaf8:{NFSU2_TR(0x6bdaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w4(U+4,u32(0x80baa0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb02:{NFSU2_TR(0x6bdb02);
__builtin_memmove((R+0),(R+24),4);
}
B6bdb04:{NFSU2_TR(0x6bdb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bdb05:{NFSU2_TR(0x6bdb05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bdb06:{NFSU2_TR(0x6bdb06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bdb09:L6bdb09:{c.instructions+=7;NFSU2_TR(0x6bdb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bdb0f:{NFSU2_TR(0x6bdb0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb13:{NFSU2_TR(0x6bdb13);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0101ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bdb19:{NFSU2_TR(0x6bdb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdb1c:{NFSU2_TR(0x6bdb1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdb1d:{NFSU2_TR(0x6bdb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb23:{NFSU2_TR(0x6bdb23);
if(r1(R+518)){{goto L6bdc1c;}}
}
B6bdb29:L6bdb29:{c.instructions+=2;NFSU2_TR(0x6bdb29);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bdb2f:{NFSU2_TR(0x6bdb2f);
if(r1(R+518)){{goto L6bdbed;}}
}
B6bdb35:L6bdb35:{c.instructions+=2;NFSU2_TR(0x6bdb35);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0202ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bdb3b:{NFSU2_TR(0x6bdb3b);
if(r1(R+518)){{goto L6bdba6;}}
}
B6bdb3d:L6bdb3d:{c.instructions+=2;NFSU2_TR(0x6bdb3d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe02ffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bdb43:{NFSU2_TR(0x6bdb43);
if(r1(R+518)){{goto L6bdb5e;}}
}
B6bdb45:L6bdb45:{c.instructions+=5;NFSU2_TR(0x6bdb45);
u8 U[4];
w4(U+0,u32(0x7bd240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdb4a:{NFSU2_TR(0x6bdb4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdb4c:{NFSU2_TR(0x6bdb4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdb4e:{NFSU2_TR(0x6bdb4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdb4f:{NFSU2_TR(0x6bdb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdb54ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bdb54:L6bdb54:{c.instructions+=4;NFSU2_TR(0x6bdb54);
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
B6bdb57:{NFSU2_TR(0x6bdb57);
w4(R+0,u32(0x80004005ull));
}
B6bdb5c:{NFSU2_TR(0x6bdb5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bdb5d:{NFSU2_TR(0x6bdb5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bdb5e:L6bdb5e:{c.instructions+=16;NFSU2_TR(0x6bdb5e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bdb60:{NFSU2_TR(0x6bdb60);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdb62:{NFSU2_TR(0x6bdb62);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bdb63:{NFSU2_TR(0x6bdb63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bdb64:{NFSU2_TR(0x6bdb64);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B6bdb67:{NFSU2_TR(0x6bdb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40200100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb6e:{NFSU2_TR(0x6bdb6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb75:{NFSU2_TR(0x6bdb75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb78:{NFSU2_TR(0x6bdb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb7f:{NFSU2_TR(0x6bdb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb86:{NFSU2_TR(0x6bdb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb8d:{NFSU2_TR(0x6bdb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb90:{NFSU2_TR(0x6bdb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb93:{NFSU2_TR(0x6bdb93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdb9a:{NFSU2_TR(0x6bdb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdba1:{NFSU2_TR(0x6bdba1);
{goto L6bdc36;}
}
B6bdba6:L6bdba6:{c.instructions+=17;NFSU2_TR(0x6bdba6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bdba8:{NFSU2_TR(0x6bdba8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bdba9:{NFSU2_TR(0x6bdba9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdbab:{NFSU2_TR(0x6bdbab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bdbac:{NFSU2_TR(0x6bdbac);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B6bdbaf:{NFSU2_TR(0x6bdbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40200100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbb6:{NFSU2_TR(0x6bdbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbbd:{NFSU2_TR(0x6bdbbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbc0:{NFSU2_TR(0x6bdbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbc3:{NFSU2_TR(0x6bdbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbc6:{NFSU2_TR(0x6bdbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbcd:{NFSU2_TR(0x6bdbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbd0:{NFSU2_TR(0x6bdbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbd7:{NFSU2_TR(0x6bdbd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbde:{NFSU2_TR(0x6bdbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbe1:{NFSU2_TR(0x6bdbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0xfffe0201ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbeb:{NFSU2_TR(0x6bdbeb);
{goto L6bdc36;}
}
B6bdbed:L6bdbed:{c.instructions+=14;NFSU2_TR(0x6bdbed);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bdbef:{NFSU2_TR(0x6bdbef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bdbf0:{NFSU2_TR(0x6bdbf0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdbf2:{NFSU2_TR(0x6bdbf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bdbf3:{NFSU2_TR(0x6bdbf3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B6bdbf6:{NFSU2_TR(0x6bdbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x200100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdbfd:{NFSU2_TR(0x6bdbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc00:{NFSU2_TR(0x6bdc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc03:{NFSU2_TR(0x6bdc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc06:{NFSU2_TR(0x6bdc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc0d:{NFSU2_TR(0x6bdc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc10:{NFSU2_TR(0x6bdc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc17:{NFSU2_TR(0x6bdc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc1a:{NFSU2_TR(0x6bdc1a);
{goto L6bdc2f;}
}
B6bdc1c:L6bdc1c:{c.instructions+=5;NFSU2_TR(0x6bdc1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bdc20:{NFSU2_TR(0x6bdc20);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdc22:{NFSU2_TR(0x6bdc22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bdc23:{NFSU2_TR(0x6bdc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc2a:{NFSU2_TR(0x6bdc2a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2002ull))));
}
B6bdc2f:L6bdc2f:{c.instructions+=1;NFSU2_TR(0x6bdc2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc36:L6bdc36:{c.instructions+=11;NFSU2_TR(0x6bdc36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc3a:{NFSU2_TR(0x6bdc3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc3d:{NFSU2_TR(0x6bdc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdc40:{NFSU2_TR(0x6bdc40);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x3ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bdc44:{NFSU2_TR(0x6bdc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc4a:{NFSU2_TR(0x6bdc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc4d:{NFSU2_TR(0x6bdc4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc54:{NFSU2_TR(0x6bdc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc57:{NFSU2_TR(0x6bdc57);
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
B6bdc59:{NFSU2_TR(0x6bdc59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bdc5a:{NFSU2_TR(0x6bdc5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bdc5b:L6bdc5b:{c.instructions+=10;NFSU2_TR(0x6bdc5b);
__builtin_memmove((R+28),(R+28),4);
}
B6bdc5d:{NFSU2_TR(0x6bdc5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdc5e:{NFSU2_TR(0x6bdc5e);
__builtin_memmove((R+20),(R+16),4);
}
B6bdc60:{NFSU2_TR(0x6bdc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B6bdc63:{NFSU2_TR(0x6bdc63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdc64:{NFSU2_TR(0x6bdc64);
__builtin_memmove((R+12),(R+4),4);
}
B6bdc66:{NFSU2_TR(0x6bdc66);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bdc68:{NFSU2_TR(0x6bdc68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bdc6a:{NFSU2_TR(0x6bdc6a);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bdc70:{NFSU2_TR(0x6bdc70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd99;}}
}
B6bdc76:L6bdc76:{c.instructions+=13;NFSU2_TR(0x6bdc76);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdc79:{NFSU2_TR(0x6bdc79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdc7a:{NFSU2_TR(0x6bdc7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bdc7d:{NFSU2_TR(0x6bdc7d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bdc7e:{NFSU2_TR(0x6bdc7e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bdc7f:{NFSU2_TR(0x6bdc7f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bdc80:{NFSU2_TR(0x6bdc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc83:{NFSU2_TR(0x6bdc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc86:{NFSU2_TR(0x6bdc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc89:{NFSU2_TR(0x6bdc89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc8c:{NFSU2_TR(0x6bdc8c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bdc8d:{NFSU2_TR(0x6bdc8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdc90:{NFSU2_TR(0x6bdc90);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdd59;}}
}
B6bdc96:L6bdc96:{c.instructions+=2;NFSU2_TR(0x6bdc96);
w4(R+28,u32(0x11bcull));
}
B6bdc9b:{NFSU2_TR(0x6bdc9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdc9c:L6bdc9c:{c.instructions+=8;NFSU2_TR(0x6bdc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdc9f:{NFSU2_TR(0x6bdc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bdca2:{NFSU2_TR(0x6bdca2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6bdca5:{NFSU2_TR(0x6bdca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdca8:{NFSU2_TR(0x6bdca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bdcab:{NFSU2_TR(0x6bdcab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bdcae:{NFSU2_TR(0x6bdcae);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6bdcb2:{NFSU2_TR(0x6bdcb2);
if(r1(R+518)){{goto L6bdd47;}}
}
B6bdcb8:L6bdcb8:{c.instructions+=4;NFSU2_TR(0x6bdcb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bdcbb:{NFSU2_TR(0x6bdcbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bdcbd:{NFSU2_TR(0x6bdcbd);
__builtin_memmove((R+4),(R+12),4);
}
B6bdcbf:{NFSU2_TR(0x6bdcbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdcc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bdcc2:L6bdcc2:{c.instructions+=5;NFSU2_TR(0x6bdcc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bdcc5:{NFSU2_TR(0x6bdcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdcc8:{NFSU2_TR(0x6bdcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bdcca:{NFSU2_TR(0x6bdcca);
__builtin_memmove((R+4),(R+12),4);
}
B6bdccc:{NFSU2_TR(0x6bdccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdccfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bdccf:L6bdccf:{c.instructions+=3;NFSU2_TR(0x6bdccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bdcd2:{NFSU2_TR(0x6bdcd2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bdcd3:{NFSU2_TR(0x6bdcd3);
if(r1(R+518)){{goto L6bdd32;}}
}
B6bdcd5:L6bdcd5:{c.instructions+=2;NFSU2_TR(0x6bdcd5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bdcd8:{NFSU2_TR(0x6bdcd8);
if(r1(R+518)){{goto L6bdd0a;}}
}
B6bdcda:L6bdcda:{c.instructions+=2;NFSU2_TR(0x6bdcda);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bdcdd:{NFSU2_TR(0x6bdcdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdcdf:L6bdcdf:{c.instructions+=2;NFSU2_TR(0x6bdcdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdce1:{NFSU2_TR(0x6bdce1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdce3:L6bdce3:{c.instructions+=2;NFSU2_TR(0x6bdce3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdce6:{NFSU2_TR(0x6bdce6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdce8:L6bdce8:{c.instructions+=2;NFSU2_TR(0x6bdce8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdceb:{NFSU2_TR(0x6bdceb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdced:L6bdced:{c.instructions+=5;NFSU2_TR(0x6bdced);
u8 U[4];
w4(U+0,u32(0x7bd284ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdcf2:{NFSU2_TR(0x6bdcf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdcf3:{NFSU2_TR(0x6bdcf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bdcf6:{NFSU2_TR(0x6bdcf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdcf7:{NFSU2_TR(0x6bdcf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdcfcull));
TAIL_STATIC(0x69e936u,69e);
}
B6bdcfc:L6bdcfc:{c.instructions+=4;NFSU2_TR(0x6bdcfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bdcfe:{NFSU2_TR(0x6bdcfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bdd01:{NFSU2_TR(0x6bdd01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bdd02:{NFSU2_TR(0x6bdd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdd05:L6bdd05:{c.instructions+=2;NFSU2_TR(0x6bdd05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdd08:{NFSU2_TR(0x6bdd08);
{goto L6bdd47;}
}
B6bdd0a:L6bdd0a:{c.instructions+=2;NFSU2_TR(0x6bdd0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdd0c:{NFSU2_TR(0x6bdd0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdd0e:L6bdd0e:{c.instructions+=2;NFSU2_TR(0x6bdd0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdd11:{NFSU2_TR(0x6bdd11);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdd13:L6bdd13:{c.instructions+=2;NFSU2_TR(0x6bdd13);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdd16:{NFSU2_TR(0x6bdd16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdd18:L6bdd18:{c.instructions+=5;NFSU2_TR(0x6bdd18);
u8 U[4];
w4(U+0,u32(0x7bb164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd1d:{NFSU2_TR(0x6bdd1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd1e:{NFSU2_TR(0x6bdd1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bdd21:{NFSU2_TR(0x6bdd21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd22:{NFSU2_TR(0x6bdd22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdd27ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bdd27:L6bdd27:{c.instructions+=5;NFSU2_TR(0x6bdd27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bdd29:{NFSU2_TR(0x6bdd29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bdd2c:{NFSU2_TR(0x6bdd2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bdd2d:{NFSU2_TR(0x6bdd2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdd30:{NFSU2_TR(0x6bdd30);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdd05u);}goto L6bdd05;}
}
B6bdd32:L6bdd32:{c.instructions+=2;NFSU2_TR(0x6bdd32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdd34:{NFSU2_TR(0x6bdd34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdd47;}}
}
B6bdd36:L6bdd36:{c.instructions+=4;NFSU2_TR(0x6bdd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdd39:{NFSU2_TR(0x6bdd39);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bdd41:{NFSU2_TR(0x6bdd41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdd44:{NFSU2_TR(0x6bdd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdd47:L6bdd47:{c.instructions+=4;NFSU2_TR(0x6bdd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdd4a:{NFSU2_TR(0x6bdd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdd4d:{NFSU2_TR(0x6bdd4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bdd50:{NFSU2_TR(0x6bdd50);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdc9cu);}goto L6bdc9c;}}
}
B6bdd56:L6bdd56:{c.instructions+=2;NFSU2_TR(0x6bdd56);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bdd58:{NFSU2_TR(0x6bdd58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bdd59:L6bdd59:{c.instructions+=3;NFSU2_TR(0x6bdd59);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bdd5b:{NFSU2_TR(0x6bdd5b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bdd5d:{NFSU2_TR(0x6bdd5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bdd5e:L6bdd5e:{c.instructions+=2;NFSU2_TR(0x6bdd5e);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6bdd62:{NFSU2_TR(0x6bdd62);
if(r1(R+518)){{goto L6bdd65;}}
}
B6bdd64:L6bdd64:{c.instructions+=1;NFSU2_TR(0x6bdd64);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bdd65:L6bdd65:{c.instructions+=3;NFSU2_TR(0x6bdd65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bdd66:{NFSU2_TR(0x6bdd66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bdd69:{NFSU2_TR(0x6bdd69);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdd5eu);}goto L6bdd5e;}}
}
B6bdd6b:L6bdd6b:{c.instructions+=2;NFSU2_TR(0x6bdd6b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bdd6e:{NFSU2_TR(0x6bdd6e);
if(r1(R+518)){{goto L6bdd8d;}}
}
B6bdd70:L6bdd70:{c.instructions+=5;NFSU2_TR(0x6bdd70);
u8 U[4];
w4(U+0,u32(0x7bb120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd75:{NFSU2_TR(0x6bdd75);
u8 U[4];
w4(U+0,u32(0x11bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd7a:{NFSU2_TR(0x6bdd7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bdd7d:{NFSU2_TR(0x6bdd7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd7e:{NFSU2_TR(0x6bdd7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdd83ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bdd83:L6bdd83:{c.instructions+=2;NFSU2_TR(0x6bdd83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bdd86:{NFSU2_TR(0x6bdd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bdd8d:L6bdd8d:{c.instructions+=4;NFSU2_TR(0x6bdd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdd90:{NFSU2_TR(0x6bdd90);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6bdd92:{NFSU2_TR(0x6bdd92);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6bdd94:{NFSU2_TR(0x6bdd94);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bdd99:L6bdd99:{c.instructions+=3;NFSU2_TR(0x6bdd99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bdd9a:{NFSU2_TR(0x6bdd9a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bdd9b:{NFSU2_TR(0x6bdd9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bdd9c:L6bdd9c:{c.instructions+=11;NFSU2_TR(0x6bdd9c);
__builtin_memmove((R+28),(R+28),4);
}
B6bdd9e:{NFSU2_TR(0x6bdd9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdd9f:{NFSU2_TR(0x6bdd9f);
__builtin_memmove((R+20),(R+16),4);
}
B6bdda1:{NFSU2_TR(0x6bdda1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdda2:{NFSU2_TR(0x6bdda2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdda3:{NFSU2_TR(0x6bdda3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdda4:{NFSU2_TR(0x6bdda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bdda7:{NFSU2_TR(0x6bdda7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bddaa:{NFSU2_TR(0x6bddaa);
__builtin_memmove((R+24),(R+4),4);
}
B6bddac:{NFSU2_TR(0x6bddac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bddae:{NFSU2_TR(0x6bddae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bddb1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bddb1:L6bddb1:{c.instructions+=5;NFSU2_TR(0x6bddb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bddb4:{NFSU2_TR(0x6bddb4);
__builtin_memmove((R+12),(R+0),4);
}
B6bddb6:{NFSU2_TR(0x6bddb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bddb8:{NFSU2_TR(0x6bddb8);
__builtin_memmove((R+4),(R+24),4);
}
B6bddba:{NFSU2_TR(0x6bddba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bddbdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bddbd:L6bddbd:{c.instructions+=6;NFSU2_TR(0x6bddbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bddc0:{NFSU2_TR(0x6bddc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bddc2:{NFSU2_TR(0x6bddc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bddc5:{NFSU2_TR(0x6bddc5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bddc7:{NFSU2_TR(0x6bddc7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bddc9:{NFSU2_TR(0x6bddc9);
if(r1(R+518)){{goto L6bddcd;}}
}
B6bddcb:L6bddcb:{c.instructions+=1;NFSU2_TR(0x6bddcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bddcd:L6bddcd:{c.instructions+=4;NFSU2_TR(0x6bddcd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bddcf:{NFSU2_TR(0x6bddcf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bddd0:{NFSU2_TR(0x6bddd0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bddd2:{NFSU2_TR(0x6bddd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdde5;}}
}
B6bddd4:L6bddd4:{c.instructions+=2;NFSU2_TR(0x6bddd4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bddd6:{NFSU2_TR(0x6bddd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde52;}}
}
B6bddd8:L6bddd8:{c.instructions+=4;NFSU2_TR(0x6bddd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdddb:{NFSU2_TR(0x6bdddb);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bdde1:{NFSU2_TR(0x6bdde1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bdde3:{NFSU2_TR(0x6bdde3);
{goto L6bde4e;}
}
B6bdde5:L6bdde5:{c.instructions+=4;NFSU2_TR(0x6bdde5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdde7:{NFSU2_TR(0x6bdde7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bdde8:{NFSU2_TR(0x6bdde8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bddea:{NFSU2_TR(0x6bddea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde07;}}
}
B6bddec:L6bddec:{c.instructions+=2;NFSU2_TR(0x6bddec);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bddee:{NFSU2_TR(0x6bddee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde52;}}
}
B6bddf0:L6bddf0:{c.instructions+=3;NFSU2_TR(0x6bddf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bddf3:{NFSU2_TR(0x6bddf3);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6bddf9:{NFSU2_TR(0x6bddf9);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6bddff:L6bddff:{c.instructions+=2;NFSU2_TR(0x6bddff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bde01:{NFSU2_TR(0x6bde01);
if(r1(R+518)){{goto L6bde4e;}}
}
B6bde03:L6bde03:{c.instructions+=2;NFSU2_TR(0x6bde03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bde05:{NFSU2_TR(0x6bde05);
{goto L6bde4e;}
}
B6bde07:L6bde07:{c.instructions+=2;NFSU2_TR(0x6bde07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bde0a:{NFSU2_TR(0x6bde0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde1d;}}
}
B6bde0c:L6bde0c:{c.instructions+=2;NFSU2_TR(0x6bde0c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bde0e:{NFSU2_TR(0x6bde0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde52;}}
}
B6bde10:L6bde10:{c.instructions+=4;NFSU2_TR(0x6bde10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bde13:{NFSU2_TR(0x6bde13);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6bde19:{NFSU2_TR(0x6bde19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bde1b:{NFSU2_TR(0x6bde1b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bddffu);}goto L6bddff;}
}
B6bde1d:L6bde1d:{c.instructions+=2;NFSU2_TR(0x6bde1d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bde20:{NFSU2_TR(0x6bde20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde2e;}}
}
B6bde22:L6bde22:{c.instructions+=2;NFSU2_TR(0x6bde22);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bde25:{NFSU2_TR(0x6bde25);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bde52;}}
}
B6bde27:L6bde27:{c.instructions+=3;NFSU2_TR(0x6bde27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bde2a:{NFSU2_TR(0x6bde2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bde2c:{NFSU2_TR(0x6bde2c);
{goto L6bde4e;}
}
B6bde2e:L6bde2e:{c.instructions+=4;NFSU2_TR(0x6bde2e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bde30:{NFSU2_TR(0x6bde30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bde31:{NFSU2_TR(0x6bde31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bde33:{NFSU2_TR(0x6bde33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde41;}}
}
B6bde35:L6bde35:{c.instructions+=2;NFSU2_TR(0x6bde35);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x8ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bde38:{NFSU2_TR(0x6bde38);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bde52;}}
}
B6bde3a:L6bde3a:{c.instructions+=3;NFSU2_TR(0x6bde3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bde3d:{NFSU2_TR(0x6bde3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bde3f:{NFSU2_TR(0x6bde3f);
{goto L6bde4e;}
}
B6bde41:L6bde41:{c.instructions+=2;NFSU2_TR(0x6bde41);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bde47:{NFSU2_TR(0x6bde47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde52;}}
}
B6bde49:L6bde49:{c.instructions+=2;NFSU2_TR(0x6bde49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bde4c:{NFSU2_TR(0x6bde4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bde4e:L6bde4e:{c.instructions+=2;NFSU2_TR(0x6bde4e);
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
B6bde50:{NFSU2_TR(0x6bde50);
{goto L6bde57;}
}
B6bde52:L6bde52:{c.instructions+=1;NFSU2_TR(0x6bde52);
w4(R+0,u32(0x80004005ull));
}
B6bde57:L6bde57:{c.instructions+=5;NFSU2_TR(0x6bde57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bde58:{NFSU2_TR(0x6bde58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bde59:{NFSU2_TR(0x6bde59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bde5a:{NFSU2_TR(0x6bde5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bde5b:{NFSU2_TR(0x6bde5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bde5e:L6bde5e:{c.instructions+=10;NFSU2_TR(0x6bde5e);
__builtin_memmove((R+28),(R+28),4);
}
B6bde60:{NFSU2_TR(0x6bde60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bde61:{NFSU2_TR(0x6bde61);
__builtin_memmove((R+20),(R+16),4);
}
B6bde63:{NFSU2_TR(0x6bde63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bde64:{NFSU2_TR(0x6bde64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bde65:{NFSU2_TR(0x6bde65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bde68:{NFSU2_TR(0x6bde68);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bde6b:{NFSU2_TR(0x6bde6b);
__builtin_memmove((R+24),(R+4),4);
}
B6bde6d:{NFSU2_TR(0x6bde6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bde6f:{NFSU2_TR(0x6bde6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bde72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bde72:L6bde72:{c.instructions+=3;NFSU2_TR(0x6bde72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bde77:{NFSU2_TR(0x6bde77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bde7a:{NFSU2_TR(0x6bde7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bde8b;}}
}
B6bde7c:L6bde7c:{c.instructions+=5;NFSU2_TR(0x6bde7c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6bde7f:{NFSU2_TR(0x6bde7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bde82:{NFSU2_TR(0x6bde82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bde84:{NFSU2_TR(0x6bde84);
__builtin_memmove((R+4),(R+24),4);
}
B6bde86:{NFSU2_TR(0x6bde86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bde89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bde89:L6bde89:{c.instructions+=1;NFSU2_TR(0x6bde89);
{goto L6bde94;}
}
B6bde8b:L6bde8b:{c.instructions+=2;NFSU2_TR(0x6bde8b);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bde91:{NFSU2_TR(0x6bde91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bde94:L6bde94:{c.instructions+=7;NFSU2_TR(0x6bde94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bde97:{NFSU2_TR(0x6bde97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bde98:{NFSU2_TR(0x6bde98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bde9a:{NFSU2_TR(0x6bde9a);
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
B6bde9c:{NFSU2_TR(0x6bde9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bde9d:{NFSU2_TR(0x6bde9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bde9e:{NFSU2_TR(0x6bde9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bdea1:L6bdea1:{c.instructions+=12;NFSU2_TR(0x6bdea1);
__builtin_memmove((R+28),(R+28),4);
}
B6bdea3:{NFSU2_TR(0x6bdea3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdea4:{NFSU2_TR(0x6bdea4);
__builtin_memmove((R+20),(R+16),4);
}
B6bdea6:{NFSU2_TR(0x6bdea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdeac:{NFSU2_TR(0x6bdeac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bdeb1:{NFSU2_TR(0x6bdeb1);
w4(R+8,u32(0x100ull));
}
B6bdeb6:{NFSU2_TR(0x6bdeb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6bdeb8:{NFSU2_TR(0x6bdeb8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6bdeba:{NFSU2_TR(0x6bdeba);
w4(R+0,u32(0-u32(r4(R+0))));
}
B6bdebc:{NFSU2_TR(0x6bdebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdec2:{NFSU2_TR(0x6bdec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bdec3:{NFSU2_TR(0x6bdec3);
TAIL_STATIC(0x6d0d29u,6d0);
}
B6bdec8:L6bdec8:{c.instructions+=9;NFSU2_TR(0x6bdec8);
__builtin_memmove((R+28),(R+28),4);
}
B6bdeca:{NFSU2_TR(0x6bdeca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdecb:{NFSU2_TR(0x6bdecb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdecc:{NFSU2_TR(0x6bdecc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdecd:{NFSU2_TR(0x6bdecd);
__builtin_memmove((R+24),(R+4),4);
}
B6bdecf:{NFSU2_TR(0x6bdecf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bded1:{NFSU2_TR(0x6bded1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bded4:{NFSU2_TR(0x6bded4);
w4(R+12,u32(0xfff00000ull));
}
B6bded9:{NFSU2_TR(0x6bded9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdf2d;}}
}
B6bdedb:L6bdedb:{c.instructions+=8;NFSU2_TR(0x6bdedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdede:{NFSU2_TR(0x6bdede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdee4:{NFSU2_TR(0x6bdee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bdee7:{NFSU2_TR(0x6bdee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdeed:{NFSU2_TR(0x6bdeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bdeef:{NFSU2_TR(0x6bdeef);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6bdef1:{NFSU2_TR(0x6bdef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdef6:{NFSU2_TR(0x6bdef6);
if(r1(R+518)){{goto L6bdf08;}}
}
B6bdef8:L6bdef8:{c.instructions+=2;NFSU2_TR(0x6bdef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdefd:{NFSU2_TR(0x6bdefd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdf27;}}
}
B6bdeff:L6bdeff:{c.instructions+=2;NFSU2_TR(0x6bdeff);
__builtin_memmove((R+4),(R+24),4);
}
B6bdf01:{NFSU2_TR(0x6bdf01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdf06ull));
TAIL_STATIC(0x6c71cau,6c7);
}
B6bdf06:L6bdf06:{c.instructions+=1;NFSU2_TR(0x6bdf06);
{goto L6bdf1f;}
}
B6bdf08:L6bdf08:{c.instructions+=2;NFSU2_TR(0x6bdf08);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bdf0c:{NFSU2_TR(0x6bdf0c);
if(r1(R+518)){{goto L6bdf1d;}}
}
B6bdf0e:L6bdf0e:{c.instructions+=4;NFSU2_TR(0x6bdf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdf11:{NFSU2_TR(0x6bdf11);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bdf16:{NFSU2_TR(0x6bdf16);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x71000000ull))));
}
B6bdf1b:{NFSU2_TR(0x6bdf1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bdf1d:L6bdf1d:{c.instructions+=1;NFSU2_TR(0x6bdf1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bdf1f:L6bdf1f:{c.instructions+=2;NFSU2_TR(0x6bdf1f);
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
B6bdf21:{NFSU2_TR(0x6bdf21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6be3d6u,6be);}
}
B6bdf27:L6bdf27:{c.instructions+=3;NFSU2_TR(0x6bdf27);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bdf28:{NFSU2_TR(0x6bdf28);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bdf2b:{NFSU2_TR(0x6bdf2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdedbu);}goto L6bdedb;}}
}
B6bdf2d:L6bdf2d:{c.instructions+=2;NFSU2_TR(0x6bdf2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bdf34:{NFSU2_TR(0x6bdf34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6be186u,6be);}
}
B6bdf3a:L6bdf3a:{c.instructions+=3;NFSU2_TR(0x6bdf3a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bdf3c:{NFSU2_TR(0x6bdf3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bdf3f:{NFSU2_TR(0x6bdf3f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bdff8;}}
}
B6bdf45:L6bdf45:{c.instructions+=8;NFSU2_TR(0x6bdf45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdf48:{NFSU2_TR(0x6bdf48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdf4e:{NFSU2_TR(0x6bdf4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bdf51:{NFSU2_TR(0x6bdf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bdf57:{NFSU2_TR(0x6bdf57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bdf59:{NFSU2_TR(0x6bdf59);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6bdf5b:{NFSU2_TR(0x6bdf5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdf60:{NFSU2_TR(0x6bdf60);
if(r1(R+518)){{goto L6bdfdd;}}
}
B6bdf62:L6bdf62:{c.instructions+=2;NFSU2_TR(0x6bdf62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdf67:{NFSU2_TR(0x6bdf67);
if(r1(R+518)){{goto L6bdfc2;}}
}
B6bdf69:L6bdf69:{c.instructions+=2;NFSU2_TR(0x6bdf69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdf6e:{NFSU2_TR(0x6bdf6e);
if(r1(R+518)){{goto L6bdfb9;}}
}
B6bdf70:L6bdf70:{c.instructions+=2;NFSU2_TR(0x6bdf70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdf75:{NFSU2_TR(0x6bdf75);
if(r1(R+518)){{goto L6bdfb0;}}
}
B6bdf77:L6bdf77:{c.instructions+=2;NFSU2_TR(0x6bdf77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdf7c:{NFSU2_TR(0x6bdf7c);
if(r1(R+518)){{goto L6bdf90;}}
}
B6bdf7e:L6bdf7e:{c.instructions+=2;NFSU2_TR(0x6bdf7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bdf83:{NFSU2_TR(0x6bdf83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bdfee;}}
}
B6bdf85:L6bdf85:{c.instructions+=3;NFSU2_TR(0x6bdf85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdf87:{NFSU2_TR(0x6bdf87);
__builtin_memmove((R+4),(R+24),4);
}
B6bdf89:{NFSU2_TR(0x6bdf89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdf8eull));
TAIL_STATIC(0x6ce216u,6ce);
}
B6bdf8e:L6bdf8e:{c.instructions+=1;NFSU2_TR(0x6bdf8e);
{goto L6bdfe6;}
}
B6bdf90:L6bdf90:{c.instructions+=4;NFSU2_TR(0x6bdf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdf96:{NFSU2_TR(0x6bdf96);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bdf9b:{NFSU2_TR(0x6bdf9b);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6bdfa0:{NFSU2_TR(0x6bdfa0);
if(r1(R+512)){{goto L6bdfab;}}
}
B6bdfa2:L6bdfa2:{c.instructions+=2;NFSU2_TR(0x6bdfa2);
__builtin_memmove((R+4),(R+24),4);
}
B6bdfa4:{NFSU2_TR(0x6bdfa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdfa9ull));
TAIL_STATIC(0x6c93cfu,6c9);
}
B6bdfa9:L6bdfa9:{c.instructions+=1;NFSU2_TR(0x6bdfa9);
{goto L6bdfe6;}
}
B6bdfab:L6bdfab:{c.instructions+=3;NFSU2_TR(0x6bdfab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bdfad:{NFSU2_TR(0x6bdfad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bdfae:{NFSU2_TR(0x6bdfae);
{goto L6bdfe6;}
}
B6bdfb0:L6bdfb0:{c.instructions+=2;NFSU2_TR(0x6bdfb0);
__builtin_memmove((R+4),(R+24),4);
}
B6bdfb2:{NFSU2_TR(0x6bdfb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdfb7ull));
TAIL_STATIC(0x6c71cau,6c7);
}
B6bdfb7:L6bdfb7:{c.instructions+=1;NFSU2_TR(0x6bdfb7);
{goto L6bdfe6;}
}
B6bdfb9:L6bdfb9:{c.instructions+=2;NFSU2_TR(0x6bdfb9);
__builtin_memmove((R+4),(R+24),4);
}
B6bdfbb:{NFSU2_TR(0x6bdfbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdfc0ull));
TAIL_STATIC(0x6c65cbu,6c6);
}
B6bdfc0:L6bdfc0:{c.instructions+=1;NFSU2_TR(0x6bdfc0);
{goto L6bdfe6;}
}
B6bdfc2:L6bdfc2:{c.instructions+=4;NFSU2_TR(0x6bdfc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bdfc8:{NFSU2_TR(0x6bdfc8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bdfcd:{NFSU2_TR(0x6bdfcd);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6bdfd2:{NFSU2_TR(0x6bdfd2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdfabu);}goto L6bdfab;}}
}
B6bdfd4:L6bdfd4:{c.instructions+=2;NFSU2_TR(0x6bdfd4);
__builtin_memmove((R+4),(R+24),4);
}
B6bdfd6:{NFSU2_TR(0x6bdfd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdfdbull));
TAIL_STATIC(0x6c363du,6c3);
}
B6bdfdb:L6bdfdb:{c.instructions+=1;NFSU2_TR(0x6bdfdb);
{goto L6bdfe6;}
}
B6bdfdd:L6bdfdd:{c.instructions+=3;NFSU2_TR(0x6bdfdd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bdfdf:{NFSU2_TR(0x6bdfdf);
__builtin_memmove((R+4),(R+24),4);
}
B6bdfe1:{NFSU2_TR(0x6bdfe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdfe6ull));
TAIL_STATIC(0x6ce15cu,6ce);
}
B6bdfe6:L6bdfe6:{c.instructions+=2;NFSU2_TR(0x6bdfe6);
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
B6bdfe8:{NFSU2_TR(0x6bdfe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6be3d6u,6be);}
}
B6bdfee:L6bdfee:{c.instructions+=3;NFSU2_TR(0x6bdfee);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bdfef:{NFSU2_TR(0x6bdfef);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bdff2:{NFSU2_TR(0x6bdff2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bdf45u);}goto L6bdf45;}}
}
B6bdff8:L6bdff8:{c.instructions+=2;NFSU2_TR(0x6bdff8);
__builtin_memmove((R+4),(R+24),4);
}
B6bdffa:{NFSU2_TR(0x6bdffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bdfffull));
TAIL_STATIC(0x69f745u,69f);
}
B6bdfff:L6bdfff:{c.instructions+=1;NFSU2_TR(0x6bdfff);
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
TAIL_STATIC(0x6be001u,6be);
}
XIT:NFSU2_TR_EXIT(0x6bd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
