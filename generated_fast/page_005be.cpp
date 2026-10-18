#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5be,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5be,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5be(u8* __restrict R,Cpu& c);
u32 page_5be(Cpu& c){return body_5be(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5be(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5be003:goto L5be003;
case 0x5be008:c.instructions+=3;goto B5be008;
case 0x5be00d:c.instructions+=2;goto B5be00d;
case 0x5be013:c.instructions+=1;goto B5be013;
case 0x5be015:goto L5be015;
case 0x5be016:c.instructions+=2;goto B5be016;
case 0x5be01b:c.instructions+=1;goto B5be01b;
case 0x5be020:goto L5be020;
case 0x5be022:goto L5be022;
case 0x5be023:c.instructions+=4;goto B5be023;
case 0x5be025:c.instructions+=3;goto B5be025;
case 0x5be026:c.instructions+=2;goto B5be026;
case 0x5be027:c.instructions+=1;goto B5be027;
case 0x5be028:goto L5be028;
case 0x5be02d:c.instructions+=1;goto B5be02d;
case 0x5be032:goto L5be032;
case 0x5be035:c.instructions+=4;goto B5be035;
case 0x5be037:c.instructions+=3;goto B5be037;
case 0x5be038:c.instructions+=2;goto B5be038;
case 0x5be039:c.instructions+=1;goto B5be039;
case 0x5be040:goto L5be040;
case 0x5be044:c.instructions+=10;goto B5be044;
case 0x5be048:c.instructions+=9;goto B5be048;
case 0x5be04a:c.instructions+=8;goto B5be04a;
case 0x5be04d:c.instructions+=7;goto B5be04d;
case 0x5be04f:c.instructions+=6;goto B5be04f;
case 0x5be053:c.instructions+=5;goto B5be053;
case 0x5be056:c.instructions+=4;goto B5be056;
case 0x5be058:c.instructions+=3;goto B5be058;
case 0x5be05b:c.instructions+=2;goto B5be05b;
case 0x5be05d:c.instructions+=1;goto B5be05d;
case 0x5be060:goto L5be060;
case 0x5be064:c.instructions+=20;goto B5be064;
case 0x5be068:c.instructions+=19;goto B5be068;
case 0x5be06b:c.instructions+=18;goto B5be06b;
case 0x5be06e:c.instructions+=17;goto B5be06e;
case 0x5be071:c.instructions+=16;goto B5be071;
case 0x5be072:c.instructions+=15;goto B5be072;
case 0x5be075:c.instructions+=14;goto B5be075;
case 0x5be077:c.instructions+=13;goto B5be077;
case 0x5be07a:c.instructions+=12;goto B5be07a;
case 0x5be07d:c.instructions+=11;goto B5be07d;
case 0x5be080:c.instructions+=10;goto B5be080;
case 0x5be082:c.instructions+=9;goto B5be082;
case 0x5be085:c.instructions+=8;goto B5be085;
case 0x5be087:c.instructions+=7;goto B5be087;
case 0x5be08c:c.instructions+=6;goto B5be08c;
case 0x5be08f:c.instructions+=5;goto B5be08f;
case 0x5be094:c.instructions+=4;goto B5be094;
case 0x5be098:c.instructions+=3;goto B5be098;
case 0x5be09e:c.instructions+=2;goto B5be09e;
case 0x5be09f:c.instructions+=1;goto B5be09f;
case 0x5be0a0:goto L5be0a0;
case 0x5be0a4:c.instructions+=19;goto B5be0a4;
case 0x5be0a8:c.instructions+=18;goto B5be0a8;
case 0x5be0ab:c.instructions+=17;goto B5be0ab;
case 0x5be0ae:c.instructions+=16;goto B5be0ae;
case 0x5be0b1:c.instructions+=15;goto B5be0b1;
case 0x5be0b3:c.instructions+=14;goto B5be0b3;
case 0x5be0b7:c.instructions+=13;goto B5be0b7;
case 0x5be0ba:c.instructions+=12;goto B5be0ba;
case 0x5be0bd:c.instructions+=11;goto B5be0bd;
case 0x5be0bf:c.instructions+=10;goto B5be0bf;
case 0x5be0c4:c.instructions+=9;goto B5be0c4;
case 0x5be0c7:c.instructions+=8;goto B5be0c7;
case 0x5be0ca:c.instructions+=7;goto B5be0ca;
case 0x5be0cd:c.instructions+=6;goto B5be0cd;
case 0x5be0cf:c.instructions+=5;goto B5be0cf;
case 0x5be0d5:c.instructions+=4;goto B5be0d5;
case 0x5be0d8:c.instructions+=3;goto B5be0d8;
case 0x5be0dc:c.instructions+=2;goto B5be0dc;
case 0x5be0e2:c.instructions+=1;goto B5be0e2;
case 0x5be0f0:goto L5be0f0;
case 0x5be0f5:c.instructions+=13;goto B5be0f5;
case 0x5be0f9:c.instructions+=12;goto B5be0f9;
case 0x5be0ff:c.instructions+=11;goto B5be0ff;
case 0x5be102:c.instructions+=10;goto B5be102;
case 0x5be106:c.instructions+=9;goto B5be106;
case 0x5be10b:c.instructions+=8;goto B5be10b;
case 0x5be10f:c.instructions+=7;goto B5be10f;
case 0x5be113:c.instructions+=6;goto B5be113;
case 0x5be118:c.instructions+=5;goto B5be118;
case 0x5be11b:c.instructions+=4;goto B5be11b;
case 0x5be120:c.instructions+=3;goto B5be120;
case 0x5be121:c.instructions+=2;goto B5be121;
case 0x5be126:c.instructions+=1;goto B5be126;
case 0x5be130:goto L5be130;
case 0x5be135:c.instructions+=19;goto B5be135;
case 0x5be138:c.instructions+=18;goto B5be138;
case 0x5be13c:c.instructions+=17;goto B5be13c;
case 0x5be13e:c.instructions+=16;goto B5be13e;
case 0x5be13f:c.instructions+=15;goto B5be13f;
case 0x5be145:c.instructions+=14;goto B5be145;
case 0x5be149:c.instructions+=13;goto B5be149;
case 0x5be14c:c.instructions+=12;goto B5be14c;
case 0x5be152:c.instructions+=11;goto B5be152;
case 0x5be158:c.instructions+=10;goto B5be158;
case 0x5be15b:c.instructions+=9;goto B5be15b;
case 0x5be15f:c.instructions+=8;goto B5be15f;
case 0x5be162:c.instructions+=7;goto B5be162;
case 0x5be168:c.instructions+=6;goto B5be168;
case 0x5be16d:c.instructions+=5;goto B5be16d;
case 0x5be170:c.instructions+=4;goto B5be170;
case 0x5be174:c.instructions+=3;goto B5be174;
case 0x5be17a:c.instructions+=2;goto B5be17a;
case 0x5be17b:c.instructions+=1;goto B5be17b;
case 0x5be180:goto L5be180;
case 0x5be190:goto L5be190;
case 0x5be195:c.instructions+=3;goto B5be195;
case 0x5be19a:c.instructions+=2;goto B5be19a;
case 0x5be1a4:c.instructions+=1;goto B5be1a4;
case 0x5be1b0:goto L5be1b0;
case 0x5be1b5:c.instructions+=2;goto B5be1b5;
case 0x5be1ba:c.instructions+=1;goto B5be1ba;
case 0x5be1c0:goto L5be1c0;
case 0x5be1c5:c.instructions+=2;goto B5be1c5;
case 0x5be1c8:c.instructions+=1;goto B5be1c8;
case 0x5be1ca:goto L5be1ca;
case 0x5be1cd:c.instructions+=1;goto B5be1cd;
case 0x5be1cf:goto L5be1cf;
case 0x5be1d1:c.instructions+=4;goto B5be1d1;
case 0x5be1d4:c.instructions+=3;goto B5be1d4;
case 0x5be1d7:c.instructions+=2;goto B5be1d7;
case 0x5be1d9:c.instructions+=1;goto B5be1d9;
case 0x5be1da:goto L5be1da;
case 0x5be1df:c.instructions+=1;goto B5be1df;
case 0x5be1e0:goto L5be1e0;
case 0x5be1e4:c.instructions+=4;goto B5be1e4;
case 0x5be1e6:c.instructions+=3;goto B5be1e6;
case 0x5be1eb:c.instructions+=2;goto B5be1eb;
case 0x5be1ec:c.instructions+=1;goto B5be1ec;
case 0x5be1ee:goto L5be1ee;
case 0x5be1f4:goto L5be1f4;
case 0x5be1f5:goto L5be1f5;
case 0x5be1fb:goto L5be1fb;
case 0x5be200:goto L5be200;
case 0x5be201:c.instructions+=15;goto B5be201;
case 0x5be206:c.instructions+=14;goto B5be206;
case 0x5be20c:c.instructions+=13;goto B5be20c;
case 0x5be212:c.instructions+=12;goto B5be212;
case 0x5be213:c.instructions+=11;goto B5be213;
case 0x5be214:c.instructions+=10;goto B5be214;
case 0x5be21a:c.instructions+=9;goto B5be21a;
case 0x5be21b:c.instructions+=8;goto B5be21b;
case 0x5be221:c.instructions+=7;goto B5be221;
case 0x5be223:c.instructions+=6;goto B5be223;
case 0x5be229:c.instructions+=5;goto B5be229;
case 0x5be22a:c.instructions+=4;goto B5be22a;
case 0x5be230:c.instructions+=3;goto B5be230;
case 0x5be234:c.instructions+=2;goto B5be234;
case 0x5be239:c.instructions+=1;goto B5be239;
case 0x5be23b:goto L5be23b;
case 0x5be243:c.instructions+=1;goto B5be243;
case 0x5be245:goto L5be245;
case 0x5be247:c.instructions+=2;goto B5be247;
case 0x5be24d:c.instructions+=1;goto B5be24d;
case 0x5be24f:goto L5be24f;
case 0x5be251:goto L5be251;
case 0x5be255:c.instructions+=1;goto B5be255;
case 0x5be257:goto L5be257;
case 0x5be25d:c.instructions+=1;goto B5be25d;
case 0x5be25f:goto L5be25f;
case 0x5be264:c.instructions+=3;goto B5be264;
case 0x5be26e:c.instructions+=2;goto B5be26e;
case 0x5be273:c.instructions+=1;goto B5be273;
case 0x5be275:goto L5be275;
case 0x5be27b:c.instructions+=2;goto B5be27b;
case 0x5be281:c.instructions+=1;goto B5be281;
case 0x5be286:goto L5be286;
case 0x5be289:c.instructions+=1;goto B5be289;
case 0x5be28b:goto L5be28b;
case 0x5be28e:c.instructions+=2;goto B5be28e;
case 0x5be293:c.instructions+=1;goto B5be293;
case 0x5be295:goto L5be295;
case 0x5be29b:goto L5be29b;
case 0x5be29e:c.instructions+=1;goto B5be29e;
case 0x5be2a0:goto L5be2a0;
case 0x5be2a6:c.instructions+=1;goto B5be2a6;
case 0x5be2a8:goto L5be2a8;
case 0x5be2ac:c.instructions+=2;goto B5be2ac;
case 0x5be2b2:c.instructions+=1;goto B5be2b2;
case 0x5be2b4:goto L5be2b4;
case 0x5be2ba:c.instructions+=1;goto B5be2ba;
case 0x5be2bc:goto L5be2bc;
case 0x5be2c1:c.instructions+=1;goto B5be2c1;
case 0x5be2c3:goto L5be2c3;
case 0x5be2c9:goto L5be2c9;
case 0x5be2cc:c.instructions+=1;goto B5be2cc;
case 0x5be2ce:goto L5be2ce;
case 0x5be2d0:c.instructions+=1;goto B5be2d0;
case 0x5be2d2:goto L5be2d2;
case 0x5be2d8:c.instructions+=1;goto B5be2d8;
case 0x5be2da:goto L5be2da;
case 0x5be2df:c.instructions+=6;goto B5be2df;
case 0x5be2e2:c.instructions+=5;goto B5be2e2;
case 0x5be2e4:c.instructions+=4;goto B5be2e4;
case 0x5be2e6:c.instructions+=3;goto B5be2e6;
case 0x5be2e9:c.instructions+=2;goto B5be2e9;
case 0x5be2ec:c.instructions+=1;goto B5be2ec;
case 0x5be2f2:goto L5be2f2;
case 0x5be2f8:c.instructions+=3;goto B5be2f8;
case 0x5be2fb:c.instructions+=2;goto B5be2fb;
case 0x5be301:c.instructions+=1;goto B5be301;
case 0x5be303:goto L5be303;
case 0x5be308:c.instructions+=2;goto B5be308;
case 0x5be30b:c.instructions+=1;goto B5be30b;
case 0x5be30d:goto L5be30d;
case 0x5be310:c.instructions+=1;goto B5be310;
case 0x5be312:goto L5be312;
case 0x5be317:c.instructions+=2;goto B5be317;
case 0x5be319:c.instructions+=1;goto B5be319;
case 0x5be31b:goto L5be31b;
case 0x5be31d:c.instructions+=1;goto B5be31d;
case 0x5be322:goto L5be322;
case 0x5be327:c.instructions+=2;goto B5be327;
case 0x5be32a:c.instructions+=1;goto B5be32a;
case 0x5be32c:goto L5be32c;
case 0x5be32f:c.instructions+=1;goto B5be32f;
case 0x5be331:goto L5be331;
case 0x5be337:c.instructions+=2;goto B5be337;
case 0x5be33d:c.instructions+=1;goto B5be33d;
case 0x5be33f:goto L5be33f;
case 0x5be345:c.instructions+=1;goto B5be345;
case 0x5be34b:goto L5be34b;
case 0x5be34d:c.instructions+=1;goto B5be34d;
case 0x5be34f:goto L5be34f;
case 0x5be355:goto L5be355;
case 0x5be35a:c.instructions+=15;goto B5be35a;
case 0x5be35c:c.instructions+=14;goto B5be35c;
case 0x5be362:c.instructions+=13;goto B5be362;
case 0x5be365:c.instructions+=12;goto B5be365;
case 0x5be36a:c.instructions+=11;goto B5be36a;
case 0x5be36c:c.instructions+=10;goto B5be36c;
case 0x5be36f:c.instructions+=9;goto B5be36f;
case 0x5be375:c.instructions+=8;goto B5be375;
case 0x5be378:c.instructions+=7;goto B5be378;
case 0x5be37d:c.instructions+=6;goto B5be37d;
case 0x5be37f:c.instructions+=5;goto B5be37f;
case 0x5be381:c.instructions+=4;goto B5be381;
case 0x5be384:c.instructions+=3;goto B5be384;
case 0x5be38a:c.instructions+=2;goto B5be38a;
case 0x5be38d:c.instructions+=1;goto B5be38d;
case 0x5be38f:goto L5be38f;
case 0x5be395:c.instructions+=2;goto B5be395;
case 0x5be398:c.instructions+=1;goto B5be398;
case 0x5be39a:goto L5be39a;
case 0x5be39f:c.instructions+=2;goto B5be39f;
case 0x5be3a2:c.instructions+=1;goto B5be3a2;
case 0x5be3a4:goto L5be3a4;
case 0x5be3aa:c.instructions+=2;goto B5be3aa;
case 0x5be3ad:c.instructions+=1;goto B5be3ad;
case 0x5be3af:goto L5be3af;
case 0x5be3b2:c.instructions+=1;goto B5be3b2;
case 0x5be3b4:goto L5be3b4;
case 0x5be3b9:c.instructions+=2;goto B5be3b9;
case 0x5be3bc:c.instructions+=1;goto B5be3bc;
case 0x5be3be:goto L5be3be;
case 0x5be3c3:c.instructions+=2;goto B5be3c3;
case 0x5be3c9:c.instructions+=1;goto B5be3c9;
case 0x5be3cb:goto L5be3cb;
case 0x5be3d1:c.instructions+=1;goto B5be3d1;
case 0x5be3d6:goto L5be3d6;
case 0x5be3db:c.instructions+=10;goto B5be3db;
case 0x5be3de:c.instructions+=9;goto B5be3de;
case 0x5be3e3:c.instructions+=8;goto B5be3e3;
case 0x5be3e5:c.instructions+=7;goto B5be3e5;
case 0x5be3e7:c.instructions+=6;goto B5be3e7;
case 0x5be3ea:c.instructions+=5;goto B5be3ea;
case 0x5be3ef:c.instructions+=4;goto B5be3ef;
case 0x5be3f5:c.instructions+=3;goto B5be3f5;
case 0x5be3fb:c.instructions+=2;goto B5be3fb;
case 0x5be401:c.instructions+=1;goto B5be401;
case 0x5be403:goto L5be403;
case 0x5be406:c.instructions+=1;goto B5be406;
case 0x5be408:goto L5be408;
case 0x5be40d:c.instructions+=1;goto B5be40d;
case 0x5be40f:goto L5be40f;
case 0x5be415:goto L5be415;
case 0x5be418:c.instructions+=1;goto B5be418;
case 0x5be41a:goto L5be41a;
case 0x5be420:goto L5be420;
case 0x5be425:c.instructions+=14;goto B5be425;
case 0x5be428:c.instructions+=13;goto B5be428;
case 0x5be42d:c.instructions+=12;goto B5be42d;
case 0x5be42f:c.instructions+=11;goto B5be42f;
case 0x5be432:c.instructions+=10;goto B5be432;
case 0x5be435:c.instructions+=9;goto B5be435;
case 0x5be437:c.instructions+=8;goto B5be437;
case 0x5be441:c.instructions+=7;goto B5be441;
case 0x5be447:c.instructions+=6;goto B5be447;
case 0x5be44d:c.instructions+=5;goto B5be44d;
case 0x5be453:c.instructions+=4;goto B5be453;
case 0x5be45d:c.instructions+=3;goto B5be45d;
case 0x5be463:c.instructions+=2;goto B5be463;
case 0x5be469:c.instructions+=1;goto B5be469;
case 0x5be46b:goto L5be46b;
case 0x5be46e:c.instructions+=1;goto B5be46e;
case 0x5be470:goto L5be470;
case 0x5be476:c.instructions+=6;goto B5be476;
case 0x5be47c:c.instructions+=5;goto B5be47c;
case 0x5be482:c.instructions+=4;goto B5be482;
case 0x5be488:c.instructions+=3;goto B5be488;
case 0x5be48e:c.instructions+=2;goto B5be48e;
case 0x5be494:c.instructions+=1;goto B5be494;
case 0x5be49a:goto L5be49a;
case 0x5be49c:c.instructions+=1;goto B5be49c;
case 0x5be49e:goto L5be49e;
case 0x5be4a4:goto L5be4a4;
case 0x5be4aa:c.instructions+=1;goto B5be4aa;
case 0x5be4ac:goto L5be4ac;
case 0x5be4b1:goto L5be4b1;
case 0x5be4b3:c.instructions+=1;goto B5be4b3;
case 0x5be4b5:goto L5be4b5;
case 0x5be4bb:goto L5be4bb;
case 0x5be4c3:c.instructions+=1;goto B5be4c3;
case 0x5be4c9:goto L5be4c9;
case 0x5be4ca:c.instructions+=6;goto B5be4ca;
case 0x5be4cb:c.instructions+=5;goto B5be4cb;
case 0x5be4cc:c.instructions+=4;goto B5be4cc;
case 0x5be4d2:c.instructions+=3;goto B5be4d2;
case 0x5be4d3:c.instructions+=2;goto B5be4d3;
case 0x5be4d4:c.instructions+=1;goto B5be4d4;
case 0x5be4d5:goto L5be4d5;
case 0x5be4db:c.instructions+=1;goto B5be4db;
case 0x5be4dd:goto L5be4dd;
case 0x5be4de:c.instructions+=6;goto B5be4de;
case 0x5be4df:c.instructions+=5;goto B5be4df;
case 0x5be4e0:c.instructions+=4;goto B5be4e0;
case 0x5be4e6:c.instructions+=3;goto B5be4e6;
case 0x5be4e7:c.instructions+=2;goto B5be4e7;
case 0x5be4e8:c.instructions+=1;goto B5be4e8;
case 0x5be4e9:goto L5be4e9;
case 0x5be4ef:c.instructions+=1;goto B5be4ef;
case 0x5be4f1:goto L5be4f1;
case 0x5be4f2:c.instructions+=6;goto B5be4f2;
case 0x5be4f3:c.instructions+=5;goto B5be4f3;
case 0x5be4f4:c.instructions+=4;goto B5be4f4;
case 0x5be4fa:c.instructions+=3;goto B5be4fa;
case 0x5be4fb:c.instructions+=2;goto B5be4fb;
case 0x5be4fc:c.instructions+=1;goto B5be4fc;
case 0x5be4fd:goto L5be4fd;
case 0x5be503:c.instructions+=1;goto B5be503;
case 0x5be505:goto L5be505;
case 0x5be50d:c.instructions+=1;goto B5be50d;
case 0x5be50f:goto L5be50f;
case 0x5be510:c.instructions+=6;goto B5be510;
case 0x5be511:c.instructions+=5;goto B5be511;
case 0x5be512:c.instructions+=4;goto B5be512;
case 0x5be518:c.instructions+=3;goto B5be518;
case 0x5be519:c.instructions+=2;goto B5be519;
case 0x5be51a:c.instructions+=1;goto B5be51a;
case 0x5be51b:goto L5be51b;
case 0x5be521:c.instructions+=1;goto B5be521;
case 0x5be523:goto L5be523;
case 0x5be524:c.instructions+=6;goto B5be524;
case 0x5be52a:c.instructions+=5;goto B5be52a;
case 0x5be52b:c.instructions+=4;goto B5be52b;
case 0x5be52c:c.instructions+=3;goto B5be52c;
case 0x5be52d:c.instructions+=2;goto B5be52d;
case 0x5be52e:c.instructions+=1;goto B5be52e;
case 0x5be52f:goto L5be52f;
case 0x5be535:c.instructions+=1;goto B5be535;
case 0x5be537:goto L5be537;
case 0x5be53f:c.instructions+=1;goto B5be53f;
case 0x5be541:goto L5be541;
case 0x5be547:c.instructions+=2;goto B5be547;
case 0x5be54d:c.instructions+=1;goto B5be54d;
case 0x5be553:goto L5be553;
case 0x5be554:c.instructions+=5;goto B5be554;
case 0x5be555:c.instructions+=4;goto B5be555;
case 0x5be556:c.instructions+=3;goto B5be556;
case 0x5be557:c.instructions+=2;goto B5be557;
case 0x5be558:c.instructions+=1;goto B5be558;
case 0x5be560:goto L5be560;
case 0x5be565:c.instructions+=2;goto B5be565;
case 0x5be567:c.instructions+=1;goto B5be567;
case 0x5be569:goto L5be569;
case 0x5be56e:c.instructions+=1;goto B5be56e;
case 0x5be56f:goto L5be56f;
case 0x5be572:c.instructions+=1;goto B5be572;
case 0x5be574:goto L5be574;
case 0x5be577:c.instructions+=1;goto B5be577;
case 0x5be579:goto L5be579;
case 0x5be583:c.instructions+=1;goto B5be583;
case 0x5be585:goto L5be585;
case 0x5be58a:c.instructions+=1;goto B5be58a;
case 0x5be58b:goto L5be58b;
case 0x5be590:c.instructions+=3;goto B5be590;
case 0x5be595:c.instructions+=2;goto B5be595;
case 0x5be59a:c.instructions+=1;goto B5be59a;
case 0x5be59d:goto L5be59d;
case 0x5be5a0:goto L5be5a0;
case 0x5be5a6:c.instructions+=11;goto B5be5a6;
case 0x5be5ab:c.instructions+=10;goto B5be5ab;
case 0x5be5ad:c.instructions+=9;goto B5be5ad;
case 0x5be5b0:c.instructions+=8;goto B5be5b0;
case 0x5be5b1:c.instructions+=7;goto B5be5b1;
case 0x5be5b2:c.instructions+=6;goto B5be5b2;
case 0x5be5b3:c.instructions+=5;goto B5be5b3;
case 0x5be5b8:c.instructions+=4;goto B5be5b8;
case 0x5be5ba:c.instructions+=3;goto B5be5ba;
case 0x5be5bb:c.instructions+=2;goto B5be5bb;
case 0x5be5bc:c.instructions+=1;goto B5be5bc;
case 0x5be5bf:goto L5be5bf;
case 0x5be5c5:c.instructions+=4;goto B5be5c5;
case 0x5be5c7:c.instructions+=3;goto B5be5c7;
case 0x5be5c9:c.instructions+=2;goto B5be5c9;
case 0x5be5ce:c.instructions+=1;goto B5be5ce;
case 0x5be5d3:goto L5be5d3;
case 0x5be5d5:goto L5be5d5;
case 0x5be5da:c.instructions+=4;goto B5be5da;
case 0x5be5dc:c.instructions+=3;goto B5be5dc;
case 0x5be5dd:c.instructions+=2;goto B5be5dd;
case 0x5be5de:c.instructions+=1;goto B5be5de;
case 0x5be5e1:goto L5be5e1;
case 0x5be5e3:c.instructions+=3;goto B5be5e3;
case 0x5be5e5:c.instructions+=2;goto B5be5e5;
case 0x5be5e7:c.instructions+=1;goto B5be5e7;
case 0x5be5ed:goto L5be5ed;
case 0x5be5ee:c.instructions+=1;goto B5be5ee;
case 0x5be5f0:goto L5be5f0;
case 0x5be5f5:c.instructions+=9;goto B5be5f5;
case 0x5be5f7:c.instructions+=8;goto B5be5f7;
case 0x5be5fb:c.instructions+=7;goto B5be5fb;
case 0x5be5fc:c.instructions+=6;goto B5be5fc;
case 0x5be602:c.instructions+=5;goto B5be602;
case 0x5be603:c.instructions+=4;goto B5be603;
case 0x5be605:c.instructions+=3;goto B5be605;
case 0x5be606:c.instructions+=2;goto B5be606;
case 0x5be607:c.instructions+=1;goto B5be607;
case 0x5be60a:goto L5be60a;
case 0x5be60c:c.instructions+=1;goto B5be60c;
case 0x5be60e:goto L5be60e;
case 0x5be612:c.instructions+=3;goto B5be612;
case 0x5be616:c.instructions+=2;goto B5be616;
case 0x5be61c:c.instructions+=1;goto B5be61c;
case 0x5be622:goto L5be622;
case 0x5be628:c.instructions+=1;goto B5be628;
case 0x5be62a:goto L5be62a;
case 0x5be630:c.instructions+=1;goto B5be630;
case 0x5be632:goto L5be632;
case 0x5be635:c.instructions+=1;goto B5be635;
case 0x5be637:goto L5be637;
case 0x5be63d:c.instructions+=1;goto B5be63d;
case 0x5be63f:goto L5be63f;
case 0x5be642:goto L5be642;
case 0x5be644:goto L5be644;
case 0x5be64a:c.instructions+=1;goto B5be64a;
case 0x5be64c:goto L5be64c;
case 0x5be652:c.instructions+=1;goto B5be652;
case 0x5be654:goto L5be654;
case 0x5be65e:goto L5be65e;
case 0x5be661:c.instructions+=2;goto B5be661;
case 0x5be664:c.instructions+=1;goto B5be664;
case 0x5be666:goto L5be666;
case 0x5be667:c.instructions+=2;goto B5be667;
case 0x5be669:c.instructions+=1;goto B5be669;
case 0x5be66b:goto L5be66b;
case 0x5be66c:goto L5be66c;
case 0x5be66d:c.instructions+=4;goto B5be66d;
case 0x5be66e:c.instructions+=3;goto B5be66e;
case 0x5be66f:c.instructions+=2;goto B5be66f;
case 0x5be672:c.instructions+=1;goto B5be672;
case 0x5be673:goto L5be673;
case 0x5be679:c.instructions+=1;goto B5be679;
case 0x5be67b:goto L5be67b;
case 0x5be67e:c.instructions+=1;goto B5be67e;
case 0x5be680:goto L5be680;
case 0x5be686:c.instructions+=1;goto B5be686;
case 0x5be688:goto L5be688;
case 0x5be68b:c.instructions+=1;goto B5be68b;
case 0x5be690:goto L5be690;
case 0x5be695:c.instructions+=2;goto B5be695;
case 0x5be69b:c.instructions+=1;goto B5be69b;
case 0x5be69d:goto L5be69d;
case 0x5be6a2:goto L5be6a2;
case 0x5be6a7:c.instructions+=2;goto B5be6a7;
case 0x5be6ad:c.instructions+=1;goto B5be6ad;
case 0x5be6af:goto L5be6af;
case 0x5be6b4:goto L5be6b4;
case 0x5be6b9:c.instructions+=2;goto B5be6b9;
case 0x5be6bf:c.instructions+=1;goto B5be6bf;
case 0x5be6c1:goto L5be6c1;
case 0x5be6c6:goto L5be6c6;
case 0x5be6cb:c.instructions+=2;goto B5be6cb;
case 0x5be6d1:c.instructions+=1;goto B5be6d1;
case 0x5be6d3:goto L5be6d3;
case 0x5be6d8:goto L5be6d8;
case 0x5be6dd:c.instructions+=2;goto B5be6dd;
case 0x5be6e3:c.instructions+=1;goto B5be6e3;
case 0x5be6e5:goto L5be6e5;
case 0x5be6ea:goto L5be6ea;
case 0x5be6ef:c.instructions+=2;goto B5be6ef;
case 0x5be6f5:c.instructions+=1;goto B5be6f5;
case 0x5be6f7:goto L5be6f7;
case 0x5be6fc:goto L5be6fc;
case 0x5be701:c.instructions+=2;goto B5be701;
case 0x5be707:c.instructions+=1;goto B5be707;
case 0x5be709:goto L5be709;
case 0x5be70e:goto L5be70e;
case 0x5be713:c.instructions+=2;goto B5be713;
case 0x5be719:c.instructions+=1;goto B5be719;
case 0x5be71b:goto L5be71b;
case 0x5be720:goto L5be720;
case 0x5be725:c.instructions+=2;goto B5be725;
case 0x5be72b:c.instructions+=1;goto B5be72b;
case 0x5be72d:goto L5be72d;
case 0x5be732:goto L5be732;
case 0x5be737:c.instructions+=2;goto B5be737;
case 0x5be73d:c.instructions+=1;goto B5be73d;
case 0x5be73f:goto L5be73f;
case 0x5be744:goto L5be744;
case 0x5be749:c.instructions+=2;goto B5be749;
case 0x5be74f:c.instructions+=1;goto B5be74f;
case 0x5be751:goto L5be751;
case 0x5be756:goto L5be756;
case 0x5be75b:c.instructions+=2;goto B5be75b;
case 0x5be761:c.instructions+=1;goto B5be761;
case 0x5be763:goto L5be763;
case 0x5be768:goto L5be768;
case 0x5be76d:c.instructions+=2;goto B5be76d;
case 0x5be773:c.instructions+=1;goto B5be773;
case 0x5be775:goto L5be775;
case 0x5be77a:goto L5be77a;
case 0x5be77f:c.instructions+=2;goto B5be77f;
case 0x5be785:c.instructions+=1;goto B5be785;
case 0x5be787:goto L5be787;
case 0x5be78c:goto L5be78c;
case 0x5be791:c.instructions+=2;goto B5be791;
case 0x5be797:c.instructions+=1;goto B5be797;
case 0x5be799:goto L5be799;
case 0x5be79e:goto L5be79e;
case 0x5be7a3:c.instructions+=2;goto B5be7a3;
case 0x5be7a9:c.instructions+=1;goto B5be7a9;
case 0x5be7ab:goto L5be7ab;
case 0x5be7b0:goto L5be7b0;
case 0x5be7b5:c.instructions+=2;goto B5be7b5;
case 0x5be7bb:c.instructions+=1;goto B5be7bb;
case 0x5be7bd:goto L5be7bd;
case 0x5be7c2:goto L5be7c2;
case 0x5be7c7:c.instructions+=2;goto B5be7c7;
case 0x5be7cd:c.instructions+=1;goto B5be7cd;
case 0x5be7cf:goto L5be7cf;
case 0x5be7d4:goto L5be7d4;
case 0x5be7d9:c.instructions+=2;goto B5be7d9;
case 0x5be7df:c.instructions+=1;goto B5be7df;
case 0x5be7e1:goto L5be7e1;
case 0x5be7e6:goto L5be7e6;
case 0x5be7eb:c.instructions+=2;goto B5be7eb;
case 0x5be7f1:c.instructions+=1;goto B5be7f1;
case 0x5be7f3:goto L5be7f3;
case 0x5be7f8:goto L5be7f8;
case 0x5be7fd:c.instructions+=2;goto B5be7fd;
case 0x5be803:c.instructions+=1;goto B5be803;
case 0x5be805:goto L5be805;
case 0x5be80a:goto L5be80a;
case 0x5be80f:c.instructions+=2;goto B5be80f;
case 0x5be815:c.instructions+=1;goto B5be815;
case 0x5be817:goto L5be817;
case 0x5be81c:goto L5be81c;
case 0x5be821:c.instructions+=2;goto B5be821;
case 0x5be827:c.instructions+=1;goto B5be827;
case 0x5be829:goto L5be829;
case 0x5be82e:goto L5be82e;
case 0x5be833:c.instructions+=2;goto B5be833;
case 0x5be839:c.instructions+=1;goto B5be839;
case 0x5be83b:goto L5be83b;
case 0x5be840:goto L5be840;
case 0x5be845:c.instructions+=3;goto B5be845;
case 0x5be84c:c.instructions+=2;goto B5be84c;
case 0x5be84e:c.instructions+=1;goto B5be84e;
case 0x5be850:goto L5be850;
case 0x5be852:c.instructions+=1;goto B5be852;
case 0x5be854:goto L5be854;
case 0x5be85b:c.instructions+=2;goto B5be85b;
case 0x5be85d:c.instructions+=1;goto B5be85d;
case 0x5be85f:goto L5be85f;
case 0x5be860:c.instructions+=1;goto B5be860;
case 0x5be862:goto L5be862;
case 0x5be863:goto L5be863;
case 0x5be868:goto L5be868;
case 0x5be870:goto L5be870;
case 0x5be872:c.instructions+=29;goto B5be872;
case 0x5be873:c.instructions+=28;goto B5be873;
case 0x5be878:c.instructions+=27;goto B5be878;
case 0x5be87d:c.instructions+=26;goto B5be87d;
case 0x5be882:c.instructions+=25;goto B5be882;
case 0x5be887:c.instructions+=24;goto B5be887;
case 0x5be88c:c.instructions+=23;goto B5be88c;
case 0x5be891:c.instructions+=22;goto B5be891;
case 0x5be896:c.instructions+=21;goto B5be896;
case 0x5be89b:c.instructions+=20;goto B5be89b;
case 0x5be8a0:c.instructions+=19;goto B5be8a0;
case 0x5be8a5:c.instructions+=18;goto B5be8a5;
case 0x5be8aa:c.instructions+=17;goto B5be8aa;
case 0x5be8af:c.instructions+=16;goto B5be8af;
case 0x5be8b4:c.instructions+=15;goto B5be8b4;
case 0x5be8b9:c.instructions+=14;goto B5be8b9;
case 0x5be8be:c.instructions+=13;goto B5be8be;
case 0x5be8c3:c.instructions+=12;goto B5be8c3;
case 0x5be8c8:c.instructions+=11;goto B5be8c8;
case 0x5be8cd:c.instructions+=10;goto B5be8cd;
case 0x5be8d2:c.instructions+=9;goto B5be8d2;
case 0x5be8d7:c.instructions+=8;goto B5be8d7;
case 0x5be8dc:c.instructions+=7;goto B5be8dc;
case 0x5be8e1:c.instructions+=6;goto B5be8e1;
case 0x5be8e6:c.instructions+=5;goto B5be8e6;
case 0x5be8e8:c.instructions+=4;goto B5be8e8;
case 0x5be8e9:c.instructions+=3;goto B5be8e9;
case 0x5be8ef:c.instructions+=2;goto B5be8ef;
case 0x5be8f4:c.instructions+=1;goto B5be8f4;
case 0x5be8f6:goto L5be8f6;
case 0x5be8fc:c.instructions+=5;goto B5be8fc;
case 0x5be902:c.instructions+=4;goto B5be902;
case 0x5be908:c.instructions+=3;goto B5be908;
case 0x5be90e:c.instructions+=2;goto B5be90e;
case 0x5be914:c.instructions+=1;goto B5be914;
case 0x5be91a:goto L5be91a;
case 0x5be91c:c.instructions+=1;goto B5be91c;
case 0x5be91e:goto L5be91e;
case 0x5be924:c.instructions+=12;goto B5be924;
case 0x5be92a:c.instructions+=11;goto B5be92a;
case 0x5be930:c.instructions+=10;goto B5be930;
case 0x5be936:c.instructions+=9;goto B5be936;
case 0x5be93c:c.instructions+=8;goto B5be93c;
case 0x5be942:c.instructions+=7;goto B5be942;
case 0x5be948:c.instructions+=6;goto B5be948;
case 0x5be94e:c.instructions+=5;goto B5be94e;
case 0x5be954:c.instructions+=4;goto B5be954;
case 0x5be95a:c.instructions+=3;goto B5be95a;
case 0x5be960:c.instructions+=2;goto B5be960;
case 0x5be966:c.instructions+=1;goto B5be966;
case 0x5be96c:goto L5be96c;
case 0x5be96f:c.instructions+=1;goto B5be96f;
case 0x5be971:goto L5be971;
case 0x5be976:c.instructions+=8;goto B5be976;
case 0x5be97c:c.instructions+=7;goto B5be97c;
case 0x5be97d:c.instructions+=6;goto B5be97d;
case 0x5be97e:c.instructions+=5;goto B5be97e;
case 0x5be984:c.instructions+=4;goto B5be984;
case 0x5be98a:c.instructions+=3;goto B5be98a;
case 0x5be994:c.instructions+=2;goto B5be994;
case 0x5be99a:c.instructions+=1;goto B5be99a;
case 0x5be99f:goto L5be99f;
case 0x5be9a2:c.instructions+=1;goto B5be9a2;
case 0x5be9a7:goto L5be9a7;
case 0x5be9aa:c.instructions+=1;goto B5be9aa;
case 0x5be9ac:goto L5be9ac;
case 0x5be9b2:goto L5be9b2;
case 0x5be9b7:c.instructions+=1;goto B5be9b7;
case 0x5be9bd:goto L5be9bd;
case 0x5be9c0:c.instructions+=1;goto B5be9c0;
case 0x5be9c2:goto L5be9c2;
case 0x5be9c8:c.instructions+=3;goto B5be9c8;
case 0x5be9ce:c.instructions+=2;goto B5be9ce;
case 0x5be9d8:c.instructions+=1;goto B5be9d8;
case 0x5be9de:goto L5be9de;
case 0x5be9df:c.instructions+=2;goto B5be9df;
case 0x5be9e0:c.instructions+=1;goto B5be9e0;
case 0x5be9f0:goto L5be9f0;
case 0x5be9f5:goto L5be9f5;
case 0x5be9ff:c.instructions+=1;goto B5be9ff;
case 0x5bea01:goto L5bea01;
case 0x5bea06:goto L5bea06;
case 0x5bea08:c.instructions+=1;goto B5bea08;
case 0x5bea0a:goto L5bea0a;
case 0x5bea14:goto L5bea14;
case 0x5bea20:goto L5bea20;
case 0x5bea23:c.instructions+=7;goto B5bea23;
case 0x5bea27:c.instructions+=6;goto B5bea27;
case 0x5bea28:c.instructions+=5;goto B5bea28;
case 0x5bea2d:c.instructions+=4;goto B5bea2d;
case 0x5bea2f:c.instructions+=3;goto B5bea2f;
case 0x5bea34:c.instructions+=2;goto B5bea34;
case 0x5bea39:c.instructions+=1;goto B5bea39;
case 0x5bea3f:goto L5bea3f;
case 0x5bea41:c.instructions+=1;goto B5bea41;
case 0x5bea47:goto L5bea47;
case 0x5bea48:c.instructions+=15;goto B5bea48;
case 0x5bea4e:c.instructions+=14;goto B5bea4e;
case 0x5bea4f:c.instructions+=13;goto B5bea4f;
case 0x5bea53:c.instructions+=12;goto B5bea53;
case 0x5bea54:c.instructions+=11;goto B5bea54;
case 0x5bea59:c.instructions+=10;goto B5bea59;
case 0x5bea5d:c.instructions+=9;goto B5bea5d;
case 0x5bea5e:c.instructions+=8;goto B5bea5e;
case 0x5bea5f:c.instructions+=7;goto B5bea5f;
case 0x5bea63:c.instructions+=6;goto B5bea63;
case 0x5bea68:c.instructions+=5;goto B5bea68;
case 0x5bea6d:c.instructions+=4;goto B5bea6d;
case 0x5bea6e:c.instructions+=3;goto B5bea6e;
case 0x5bea72:c.instructions+=2;goto B5bea72;
case 0x5bea76:c.instructions+=1;goto B5bea76;
case 0x5bea78:goto L5bea78;
case 0x5bea7c:c.instructions+=11;goto B5bea7c;
case 0x5bea80:c.instructions+=10;goto B5bea80;
case 0x5bea81:c.instructions+=9;goto B5bea81;
case 0x5bea86:c.instructions+=8;goto B5bea86;
case 0x5bea8a:c.instructions+=7;goto B5bea8a;
case 0x5bea8b:c.instructions+=6;goto B5bea8b;
case 0x5bea8d:c.instructions+=5;goto B5bea8d;
case 0x5bea92:c.instructions+=4;goto B5bea92;
case 0x5bea93:c.instructions+=3;goto B5bea93;
case 0x5bea97:c.instructions+=2;goto B5bea97;
case 0x5bea9b:c.instructions+=1;goto B5bea9b;
case 0x5bea9d:goto L5bea9d;
case 0x5beaa1:c.instructions+=11;goto B5beaa1;
case 0x5beaa5:c.instructions+=10;goto B5beaa5;
case 0x5beaa6:c.instructions+=9;goto B5beaa6;
case 0x5beaab:c.instructions+=8;goto B5beaab;
case 0x5beaaf:c.instructions+=7;goto B5beaaf;
case 0x5beab0:c.instructions+=6;goto B5beab0;
case 0x5beab2:c.instructions+=5;goto B5beab2;
case 0x5beab7:c.instructions+=4;goto B5beab7;
case 0x5beab8:c.instructions+=3;goto B5beab8;
case 0x5beabc:c.instructions+=2;goto B5beabc;
case 0x5beac0:c.instructions+=1;goto B5beac0;
case 0x5beac2:goto L5beac2;
case 0x5beac6:c.instructions+=11;goto B5beac6;
case 0x5beaca:c.instructions+=10;goto B5beaca;
case 0x5beacb:c.instructions+=9;goto B5beacb;
case 0x5bead0:c.instructions+=8;goto B5bead0;
case 0x5bead4:c.instructions+=7;goto B5bead4;
case 0x5bead5:c.instructions+=6;goto B5bead5;
case 0x5bead7:c.instructions+=5;goto B5bead7;
case 0x5beadc:c.instructions+=4;goto B5beadc;
case 0x5beadd:c.instructions+=3;goto B5beadd;
case 0x5beae1:c.instructions+=2;goto B5beae1;
case 0x5beae5:c.instructions+=1;goto B5beae5;
case 0x5beae7:goto L5beae7;
case 0x5beaeb:c.instructions+=11;goto B5beaeb;
case 0x5beaef:c.instructions+=10;goto B5beaef;
case 0x5beaf0:c.instructions+=9;goto B5beaf0;
case 0x5beaf5:c.instructions+=8;goto B5beaf5;
case 0x5beaf9:c.instructions+=7;goto B5beaf9;
case 0x5beafa:c.instructions+=6;goto B5beafa;
case 0x5beafc:c.instructions+=5;goto B5beafc;
case 0x5beb01:c.instructions+=4;goto B5beb01;
case 0x5beb02:c.instructions+=3;goto B5beb02;
case 0x5beb06:c.instructions+=2;goto B5beb06;
case 0x5beb0a:c.instructions+=1;goto B5beb0a;
case 0x5beb0c:goto L5beb0c;
case 0x5beb10:c.instructions+=11;goto B5beb10;
case 0x5beb14:c.instructions+=10;goto B5beb14;
case 0x5beb15:c.instructions+=9;goto B5beb15;
case 0x5beb1a:c.instructions+=8;goto B5beb1a;
case 0x5beb1e:c.instructions+=7;goto B5beb1e;
case 0x5beb1f:c.instructions+=6;goto B5beb1f;
case 0x5beb21:c.instructions+=5;goto B5beb21;
case 0x5beb26:c.instructions+=4;goto B5beb26;
case 0x5beb27:c.instructions+=3;goto B5beb27;
case 0x5beb2b:c.instructions+=2;goto B5beb2b;
case 0x5beb2f:c.instructions+=1;goto B5beb2f;
case 0x5beb31:goto L5beb31;
case 0x5beb35:c.instructions+=11;goto B5beb35;
case 0x5beb36:c.instructions+=10;goto B5beb36;
case 0x5beb3a:c.instructions+=9;goto B5beb3a;
case 0x5beb3e:c.instructions+=8;goto B5beb3e;
case 0x5beb43:c.instructions+=7;goto B5beb43;
case 0x5beb47:c.instructions+=6;goto B5beb47;
case 0x5beb4b:c.instructions+=5;goto B5beb4b;
case 0x5beb4c:c.instructions+=4;goto B5beb4c;
case 0x5beb4e:c.instructions+=3;goto B5beb4e;
case 0x5beb53:c.instructions+=2;goto B5beb53;
case 0x5beb54:c.instructions+=1;goto B5beb54;
case 0x5beb56:goto L5beb56;
case 0x5beb5a:c.instructions+=11;goto B5beb5a;
case 0x5beb5e:c.instructions+=10;goto B5beb5e;
case 0x5beb5f:c.instructions+=9;goto B5beb5f;
case 0x5beb64:c.instructions+=8;goto B5beb64;
case 0x5beb68:c.instructions+=7;goto B5beb68;
case 0x5beb69:c.instructions+=6;goto B5beb69;
case 0x5beb6b:c.instructions+=5;goto B5beb6b;
case 0x5beb70:c.instructions+=4;goto B5beb70;
case 0x5beb71:c.instructions+=3;goto B5beb71;
case 0x5beb75:c.instructions+=2;goto B5beb75;
case 0x5beb79:c.instructions+=1;goto B5beb79;
case 0x5beb7b:goto L5beb7b;
case 0x5beb7f:c.instructions+=11;goto B5beb7f;
case 0x5beb83:c.instructions+=10;goto B5beb83;
case 0x5beb84:c.instructions+=9;goto B5beb84;
case 0x5beb89:c.instructions+=8;goto B5beb89;
case 0x5beb8d:c.instructions+=7;goto B5beb8d;
case 0x5beb8e:c.instructions+=6;goto B5beb8e;
case 0x5beb90:c.instructions+=5;goto B5beb90;
case 0x5beb95:c.instructions+=4;goto B5beb95;
case 0x5beb96:c.instructions+=3;goto B5beb96;
case 0x5beb9a:c.instructions+=2;goto B5beb9a;
case 0x5beb9e:c.instructions+=1;goto B5beb9e;
case 0x5beba0:goto L5beba0;
case 0x5beba4:c.instructions+=11;goto B5beba4;
case 0x5beba8:c.instructions+=10;goto B5beba8;
case 0x5beba9:c.instructions+=9;goto B5beba9;
case 0x5bebae:c.instructions+=8;goto B5bebae;
case 0x5bebb2:c.instructions+=7;goto B5bebb2;
case 0x5bebb3:c.instructions+=6;goto B5bebb3;
case 0x5bebb5:c.instructions+=5;goto B5bebb5;
case 0x5bebba:c.instructions+=4;goto B5bebba;
case 0x5bebbb:c.instructions+=3;goto B5bebbb;
case 0x5bebbf:c.instructions+=2;goto B5bebbf;
case 0x5bebc3:c.instructions+=1;goto B5bebc3;
case 0x5bebc5:goto L5bebc5;
case 0x5bebc9:c.instructions+=11;goto B5bebc9;
case 0x5bebcd:c.instructions+=10;goto B5bebcd;
case 0x5bebce:c.instructions+=9;goto B5bebce;
case 0x5bebd3:c.instructions+=8;goto B5bebd3;
case 0x5bebd7:c.instructions+=7;goto B5bebd7;
case 0x5bebd8:c.instructions+=6;goto B5bebd8;
case 0x5bebda:c.instructions+=5;goto B5bebda;
case 0x5bebdf:c.instructions+=4;goto B5bebdf;
case 0x5bebe0:c.instructions+=3;goto B5bebe0;
case 0x5bebe4:c.instructions+=2;goto B5bebe4;
case 0x5bebe8:c.instructions+=1;goto B5bebe8;
case 0x5bebea:goto L5bebea;
case 0x5bebee:c.instructions+=11;goto B5bebee;
case 0x5bebf2:c.instructions+=10;goto B5bebf2;
case 0x5bebf3:c.instructions+=9;goto B5bebf3;
case 0x5bebf8:c.instructions+=8;goto B5bebf8;
case 0x5bebfc:c.instructions+=7;goto B5bebfc;
case 0x5bebfd:c.instructions+=6;goto B5bebfd;
case 0x5bebff:c.instructions+=5;goto B5bebff;
case 0x5bec04:c.instructions+=4;goto B5bec04;
case 0x5bec05:c.instructions+=3;goto B5bec05;
case 0x5bec09:c.instructions+=2;goto B5bec09;
case 0x5bec0d:c.instructions+=1;goto B5bec0d;
case 0x5bec0f:goto L5bec0f;
case 0x5bec13:c.instructions+=11;goto B5bec13;
case 0x5bec17:c.instructions+=10;goto B5bec17;
case 0x5bec18:c.instructions+=9;goto B5bec18;
case 0x5bec1d:c.instructions+=8;goto B5bec1d;
case 0x5bec21:c.instructions+=7;goto B5bec21;
case 0x5bec22:c.instructions+=6;goto B5bec22;
case 0x5bec24:c.instructions+=5;goto B5bec24;
case 0x5bec29:c.instructions+=4;goto B5bec29;
case 0x5bec2a:c.instructions+=3;goto B5bec2a;
case 0x5bec2e:c.instructions+=2;goto B5bec2e;
case 0x5bec32:c.instructions+=1;goto B5bec32;
case 0x5bec34:goto L5bec34;
case 0x5bec38:c.instructions+=11;goto B5bec38;
case 0x5bec3c:c.instructions+=10;goto B5bec3c;
case 0x5bec40:c.instructions+=9;goto B5bec40;
case 0x5bec44:c.instructions+=8;goto B5bec44;
case 0x5bec45:c.instructions+=7;goto B5bec45;
case 0x5bec4a:c.instructions+=6;goto B5bec4a;
case 0x5bec4e:c.instructions+=5;goto B5bec4e;
case 0x5bec4f:c.instructions+=4;goto B5bec4f;
case 0x5bec51:c.instructions+=3;goto B5bec51;
case 0x5bec56:c.instructions+=2;goto B5bec56;
case 0x5bec57:c.instructions+=1;goto B5bec57;
case 0x5bec59:goto L5bec59;
case 0x5bec5d:c.instructions+=11;goto B5bec5d;
case 0x5bec61:c.instructions+=10;goto B5bec61;
case 0x5bec62:c.instructions+=9;goto B5bec62;
case 0x5bec67:c.instructions+=8;goto B5bec67;
case 0x5bec6b:c.instructions+=7;goto B5bec6b;
case 0x5bec6c:c.instructions+=6;goto B5bec6c;
case 0x5bec6e:c.instructions+=5;goto B5bec6e;
case 0x5bec73:c.instructions+=4;goto B5bec73;
case 0x5bec74:c.instructions+=3;goto B5bec74;
case 0x5bec78:c.instructions+=2;goto B5bec78;
case 0x5bec7c:c.instructions+=1;goto B5bec7c;
case 0x5bec7e:goto L5bec7e;
case 0x5bec82:c.instructions+=11;goto B5bec82;
case 0x5bec86:c.instructions+=10;goto B5bec86;
case 0x5bec87:c.instructions+=9;goto B5bec87;
case 0x5bec8c:c.instructions+=8;goto B5bec8c;
case 0x5bec90:c.instructions+=7;goto B5bec90;
case 0x5bec91:c.instructions+=6;goto B5bec91;
case 0x5bec93:c.instructions+=5;goto B5bec93;
case 0x5bec98:c.instructions+=4;goto B5bec98;
case 0x5bec99:c.instructions+=3;goto B5bec99;
case 0x5bec9d:c.instructions+=2;goto B5bec9d;
case 0x5beca1:c.instructions+=1;goto B5beca1;
case 0x5beca3:goto L5beca3;
case 0x5beca7:c.instructions+=11;goto B5beca7;
case 0x5becab:c.instructions+=10;goto B5becab;
case 0x5becac:c.instructions+=9;goto B5becac;
case 0x5becb1:c.instructions+=8;goto B5becb1;
case 0x5becb5:c.instructions+=7;goto B5becb5;
case 0x5becb6:c.instructions+=6;goto B5becb6;
case 0x5becb8:c.instructions+=5;goto B5becb8;
case 0x5becbd:c.instructions+=4;goto B5becbd;
case 0x5becbe:c.instructions+=3;goto B5becbe;
case 0x5becc2:c.instructions+=2;goto B5becc2;
case 0x5becc6:c.instructions+=1;goto B5becc6;
case 0x5becc8:goto L5becc8;
case 0x5beccc:c.instructions+=11;goto B5beccc;
case 0x5becd0:c.instructions+=10;goto B5becd0;
case 0x5becd1:c.instructions+=9;goto B5becd1;
case 0x5becd6:c.instructions+=8;goto B5becd6;
case 0x5becda:c.instructions+=7;goto B5becda;
case 0x5becdb:c.instructions+=6;goto B5becdb;
case 0x5becdd:c.instructions+=5;goto B5becdd;
case 0x5bece2:c.instructions+=4;goto B5bece2;
case 0x5bece3:c.instructions+=3;goto B5bece3;
case 0x5bece7:c.instructions+=2;goto B5bece7;
case 0x5beceb:c.instructions+=1;goto B5beceb;
case 0x5beced:goto L5beced;
case 0x5becf1:c.instructions+=11;goto B5becf1;
case 0x5becf5:c.instructions+=10;goto B5becf5;
case 0x5becf6:c.instructions+=9;goto B5becf6;
case 0x5becfb:c.instructions+=8;goto B5becfb;
case 0x5becff:c.instructions+=7;goto B5becff;
case 0x5bed00:c.instructions+=6;goto B5bed00;
case 0x5bed02:c.instructions+=5;goto B5bed02;
case 0x5bed07:c.instructions+=4;goto B5bed07;
case 0x5bed08:c.instructions+=3;goto B5bed08;
case 0x5bed0c:c.instructions+=2;goto B5bed0c;
case 0x5bed10:c.instructions+=1;goto B5bed10;
case 0x5bed12:goto L5bed12;
case 0x5bed16:c.instructions+=11;goto B5bed16;
case 0x5bed1a:c.instructions+=10;goto B5bed1a;
case 0x5bed1b:c.instructions+=9;goto B5bed1b;
case 0x5bed20:c.instructions+=8;goto B5bed20;
case 0x5bed24:c.instructions+=7;goto B5bed24;
case 0x5bed25:c.instructions+=6;goto B5bed25;
case 0x5bed27:c.instructions+=5;goto B5bed27;
case 0x5bed2c:c.instructions+=4;goto B5bed2c;
case 0x5bed30:c.instructions+=3;goto B5bed30;
case 0x5bed34:c.instructions+=2;goto B5bed34;
case 0x5bed35:c.instructions+=1;goto B5bed35;
case 0x5bed37:goto L5bed37;
case 0x5bed3b:c.instructions+=11;goto B5bed3b;
case 0x5bed3f:c.instructions+=10;goto B5bed3f;
case 0x5bed40:c.instructions+=9;goto B5bed40;
case 0x5bed45:c.instructions+=8;goto B5bed45;
case 0x5bed49:c.instructions+=7;goto B5bed49;
case 0x5bed4a:c.instructions+=6;goto B5bed4a;
case 0x5bed4c:c.instructions+=5;goto B5bed4c;
case 0x5bed51:c.instructions+=4;goto B5bed51;
case 0x5bed52:c.instructions+=3;goto B5bed52;
case 0x5bed56:c.instructions+=2;goto B5bed56;
case 0x5bed5a:c.instructions+=1;goto B5bed5a;
case 0x5bed5c:goto L5bed5c;
case 0x5bed60:c.instructions+=11;goto B5bed60;
case 0x5bed64:c.instructions+=10;goto B5bed64;
case 0x5bed65:c.instructions+=9;goto B5bed65;
case 0x5bed6a:c.instructions+=8;goto B5bed6a;
case 0x5bed6e:c.instructions+=7;goto B5bed6e;
case 0x5bed6f:c.instructions+=6;goto B5bed6f;
case 0x5bed71:c.instructions+=5;goto B5bed71;
case 0x5bed76:c.instructions+=4;goto B5bed76;
case 0x5bed77:c.instructions+=3;goto B5bed77;
case 0x5bed7b:c.instructions+=2;goto B5bed7b;
case 0x5bed7f:c.instructions+=1;goto B5bed7f;
case 0x5bed81:goto L5bed81;
case 0x5bed85:c.instructions+=11;goto B5bed85;
case 0x5bed89:c.instructions+=10;goto B5bed89;
case 0x5bed8a:c.instructions+=9;goto B5bed8a;
case 0x5bed8f:c.instructions+=8;goto B5bed8f;
case 0x5bed93:c.instructions+=7;goto B5bed93;
case 0x5bed94:c.instructions+=6;goto B5bed94;
case 0x5bed96:c.instructions+=5;goto B5bed96;
case 0x5bed9b:c.instructions+=4;goto B5bed9b;
case 0x5bed9c:c.instructions+=3;goto B5bed9c;
case 0x5beda0:c.instructions+=2;goto B5beda0;
case 0x5beda4:c.instructions+=1;goto B5beda4;
case 0x5beda6:goto L5beda6;
case 0x5bedaa:c.instructions+=11;goto B5bedaa;
case 0x5bedae:c.instructions+=10;goto B5bedae;
case 0x5bedaf:c.instructions+=9;goto B5bedaf;
case 0x5bedb4:c.instructions+=8;goto B5bedb4;
case 0x5bedb8:c.instructions+=7;goto B5bedb8;
case 0x5bedb9:c.instructions+=6;goto B5bedb9;
case 0x5bedbb:c.instructions+=5;goto B5bedbb;
case 0x5bedc0:c.instructions+=4;goto B5bedc0;
case 0x5bedc1:c.instructions+=3;goto B5bedc1;
case 0x5bedc5:c.instructions+=2;goto B5bedc5;
case 0x5bedc9:c.instructions+=1;goto B5bedc9;
case 0x5bedcb:goto L5bedcb;
case 0x5bedcf:c.instructions+=11;goto B5bedcf;
case 0x5bedd3:c.instructions+=10;goto B5bedd3;
case 0x5bedd4:c.instructions+=9;goto B5bedd4;
case 0x5bedd9:c.instructions+=8;goto B5bedd9;
case 0x5beddd:c.instructions+=7;goto B5beddd;
case 0x5bedde:c.instructions+=6;goto B5bedde;
case 0x5bede0:c.instructions+=5;goto B5bede0;
case 0x5bede5:c.instructions+=4;goto B5bede5;
case 0x5bede6:c.instructions+=3;goto B5bede6;
case 0x5bedea:c.instructions+=2;goto B5bedea;
case 0x5bedee:c.instructions+=1;goto B5bedee;
case 0x5bedf0:goto L5bedf0;
case 0x5bedf4:c.instructions+=11;goto B5bedf4;
case 0x5bedf8:c.instructions+=10;goto B5bedf8;
case 0x5bedf9:c.instructions+=9;goto B5bedf9;
case 0x5bedfe:c.instructions+=8;goto B5bedfe;
case 0x5bee02:c.instructions+=7;goto B5bee02;
case 0x5bee03:c.instructions+=6;goto B5bee03;
case 0x5bee05:c.instructions+=5;goto B5bee05;
case 0x5bee0a:c.instructions+=4;goto B5bee0a;
case 0x5bee0b:c.instructions+=3;goto B5bee0b;
case 0x5bee0f:c.instructions+=2;goto B5bee0f;
case 0x5bee13:c.instructions+=1;goto B5bee13;
case 0x5bee15:goto L5bee15;
case 0x5bee19:c.instructions+=11;goto B5bee19;
case 0x5bee1a:c.instructions+=10;goto B5bee1a;
case 0x5bee1f:c.instructions+=9;goto B5bee1f;
case 0x5bee23:c.instructions+=8;goto B5bee23;
case 0x5bee24:c.instructions+=7;goto B5bee24;
case 0x5bee28:c.instructions+=6;goto B5bee28;
case 0x5bee2c:c.instructions+=5;goto B5bee2c;
case 0x5bee2e:c.instructions+=4;goto B5bee2e;
case 0x5bee32:c.instructions+=3;goto B5bee32;
case 0x5bee37:c.instructions+=2;goto B5bee37;
case 0x5bee38:c.instructions+=1;goto B5bee38;
case 0x5bee3a:goto L5bee3a;
case 0x5bee3e:c.instructions+=11;goto B5bee3e;
case 0x5bee42:c.instructions+=10;goto B5bee42;
case 0x5bee43:c.instructions+=9;goto B5bee43;
case 0x5bee48:c.instructions+=8;goto B5bee48;
case 0x5bee4c:c.instructions+=7;goto B5bee4c;
case 0x5bee4d:c.instructions+=6;goto B5bee4d;
case 0x5bee4f:c.instructions+=5;goto B5bee4f;
case 0x5bee54:c.instructions+=4;goto B5bee54;
case 0x5bee55:c.instructions+=3;goto B5bee55;
case 0x5bee59:c.instructions+=2;goto B5bee59;
case 0x5bee5d:c.instructions+=1;goto B5bee5d;
case 0x5bee5f:goto L5bee5f;
case 0x5bee63:c.instructions+=11;goto B5bee63;
case 0x5bee67:c.instructions+=10;goto B5bee67;
case 0x5bee68:c.instructions+=9;goto B5bee68;
case 0x5bee6d:c.instructions+=8;goto B5bee6d;
case 0x5bee71:c.instructions+=7;goto B5bee71;
case 0x5bee72:c.instructions+=6;goto B5bee72;
case 0x5bee74:c.instructions+=5;goto B5bee74;
case 0x5bee79:c.instructions+=4;goto B5bee79;
case 0x5bee7a:c.instructions+=3;goto B5bee7a;
case 0x5bee7e:c.instructions+=2;goto B5bee7e;
case 0x5bee82:c.instructions+=1;goto B5bee82;
case 0x5bee84:goto L5bee84;
case 0x5bee88:c.instructions+=2;goto B5bee88;
case 0x5bee89:c.instructions+=1;goto B5bee89;
case 0x5bee8f:goto L5bee8f;
case 0x5bee90:c.instructions+=1;goto B5bee90;
case 0x5bee91:goto L5bee91;
case 0x5bee94:c.instructions+=1;goto B5bee94;
case 0x5beea0:goto L5beea0;
case 0x5beea1:c.instructions+=9;goto B5beea1;
case 0x5beea2:c.instructions+=8;goto B5beea2;
case 0x5beea8:c.instructions+=7;goto B5beea8;
case 0x5beeac:c.instructions+=6;goto B5beeac;
case 0x5beead:c.instructions+=5;goto B5beead;
case 0x5beeb2:c.instructions+=4;goto B5beeb2;
case 0x5beeb4:c.instructions+=3;goto B5beeb4;
case 0x5beeb9:c.instructions+=2;goto B5beeb9;
case 0x5beebe:c.instructions+=1;goto B5beebe;
case 0x5beec0:goto L5beec0;
case 0x5beec2:c.instructions+=1;goto B5beec2;
case 0x5beec4:goto L5beec4;
case 0x5beec8:c.instructions+=4;goto B5beec8;
case 0x5beec9:c.instructions+=3;goto B5beec9;
case 0x5beece:c.instructions+=2;goto B5beece;
case 0x5beed3:c.instructions+=1;goto B5beed3;
case 0x5beed9:goto L5beed9;
case 0x5beedd:c.instructions+=6;goto B5beedd;
case 0x5beede:c.instructions+=5;goto B5beede;
case 0x5beee3:c.instructions+=4;goto B5beee3;
case 0x5beee5:c.instructions+=3;goto B5beee5;
case 0x5beeea:c.instructions+=2;goto B5beeea;
case 0x5beeef:c.instructions+=1;goto B5beeef;
case 0x5beef1:goto L5beef1;
case 0x5beef3:c.instructions+=1;goto B5beef3;
case 0x5beef9:goto L5beef9;
case 0x5beefd:c.instructions+=8;goto B5beefd;
case 0x5bef03:c.instructions+=7;goto B5bef03;
case 0x5bef05:c.instructions+=6;goto B5bef05;
case 0x5bef0a:c.instructions+=5;goto B5bef0a;
case 0x5bef0c:c.instructions+=4;goto B5bef0c;
case 0x5bef0e:c.instructions+=3;goto B5bef0e;
case 0x5bef13:c.instructions+=2;goto B5bef13;
case 0x5bef14:c.instructions+=1;goto B5bef14;
case 0x5bef16:goto L5bef16;
case 0x5bef1a:c.instructions+=7;goto B5bef1a;
case 0x5bef1c:c.instructions+=6;goto B5bef1c;
case 0x5bef21:c.instructions+=5;goto B5bef21;
case 0x5bef23:c.instructions+=4;goto B5bef23;
case 0x5bef25:c.instructions+=3;goto B5bef25;
case 0x5bef2a:c.instructions+=2;goto B5bef2a;
case 0x5bef2b:c.instructions+=1;goto B5bef2b;
case 0x5bef2d:goto L5bef2d;
case 0x5bef31:c.instructions+=7;goto B5bef31;
case 0x5bef33:c.instructions+=6;goto B5bef33;
case 0x5bef38:c.instructions+=5;goto B5bef38;
case 0x5bef3a:c.instructions+=4;goto B5bef3a;
case 0x5bef3c:c.instructions+=3;goto B5bef3c;
case 0x5bef41:c.instructions+=2;goto B5bef41;
case 0x5bef42:c.instructions+=1;goto B5bef42;
case 0x5bef44:goto L5bef44;
case 0x5bef48:c.instructions+=7;goto B5bef48;
case 0x5bef4a:c.instructions+=6;goto B5bef4a;
case 0x5bef4f:c.instructions+=5;goto B5bef4f;
case 0x5bef51:c.instructions+=4;goto B5bef51;
case 0x5bef53:c.instructions+=3;goto B5bef53;
case 0x5bef58:c.instructions+=2;goto B5bef58;
case 0x5bef59:c.instructions+=1;goto B5bef59;
case 0x5bef5b:goto L5bef5b;
case 0x5bef5f:c.instructions+=7;goto B5bef5f;
case 0x5bef61:c.instructions+=6;goto B5bef61;
case 0x5bef66:c.instructions+=5;goto B5bef66;
case 0x5bef68:c.instructions+=4;goto B5bef68;
case 0x5bef6a:c.instructions+=3;goto B5bef6a;
case 0x5bef6f:c.instructions+=2;goto B5bef6f;
case 0x5bef70:c.instructions+=1;goto B5bef70;
case 0x5bef72:goto L5bef72;
case 0x5bef76:c.instructions+=7;goto B5bef76;
case 0x5bef78:c.instructions+=6;goto B5bef78;
case 0x5bef7d:c.instructions+=5;goto B5bef7d;
case 0x5bef7f:c.instructions+=4;goto B5bef7f;
case 0x5bef81:c.instructions+=3;goto B5bef81;
case 0x5bef86:c.instructions+=2;goto B5bef86;
case 0x5bef87:c.instructions+=1;goto B5bef87;
case 0x5bef89:goto L5bef89;
case 0x5bef8d:c.instructions+=7;goto B5bef8d;
case 0x5bef8f:c.instructions+=6;goto B5bef8f;
case 0x5bef94:c.instructions+=5;goto B5bef94;
case 0x5bef96:c.instructions+=4;goto B5bef96;
case 0x5bef98:c.instructions+=3;goto B5bef98;
case 0x5bef9d:c.instructions+=2;goto B5bef9d;
case 0x5bef9e:c.instructions+=1;goto B5bef9e;
case 0x5befa0:goto L5befa0;
case 0x5befa4:c.instructions+=7;goto B5befa4;
case 0x5befa6:c.instructions+=6;goto B5befa6;
case 0x5befab:c.instructions+=5;goto B5befab;
case 0x5befad:c.instructions+=4;goto B5befad;
case 0x5befaf:c.instructions+=3;goto B5befaf;
case 0x5befb4:c.instructions+=2;goto B5befb4;
case 0x5befb5:c.instructions+=1;goto B5befb5;
case 0x5befb7:goto L5befb7;
case 0x5befbb:c.instructions+=7;goto B5befbb;
case 0x5befbd:c.instructions+=6;goto B5befbd;
case 0x5befc2:c.instructions+=5;goto B5befc2;
case 0x5befc4:c.instructions+=4;goto B5befc4;
case 0x5befc6:c.instructions+=3;goto B5befc6;
case 0x5befcb:c.instructions+=2;goto B5befcb;
case 0x5befcc:c.instructions+=1;goto B5befcc;
case 0x5befce:goto L5befce;
case 0x5befd2:c.instructions+=7;goto B5befd2;
case 0x5befd4:c.instructions+=6;goto B5befd4;
case 0x5befd9:c.instructions+=5;goto B5befd9;
case 0x5befdb:c.instructions+=4;goto B5befdb;
case 0x5befdd:c.instructions+=3;goto B5befdd;
case 0x5befe2:c.instructions+=2;goto B5befe2;
case 0x5befe3:c.instructions+=1;goto B5befe3;
case 0x5befe5:goto L5befe5;
case 0x5befe9:c.instructions+=7;goto B5befe9;
case 0x5befeb:c.instructions+=6;goto B5befeb;
case 0x5beff0:c.instructions+=5;goto B5beff0;
case 0x5beff2:c.instructions+=4;goto B5beff2;
case 0x5beff4:c.instructions+=3;goto B5beff4;
case 0x5beff9:c.instructions+=2;goto B5beff9;
case 0x5beffa:c.instructions+=1;goto B5beffa;
case 0x5beffc:goto L5beffc;
default:missing_instruction(c.pc);}
B5be003:L5be003:{c.instructions+=4;NFSU2_TR(0x5be003);
__builtin_memmove(gp(0x870968),(R+0),4);
}
B5be008:{NFSU2_TR(0x5be008);
__builtin_memmove(gp(0x87096c),(R+0),4);
}
B5be00d:{NFSU2_TR(0x5be00d);
__builtin_memmove(gp(0x870960),(R+4),4);
}
B5be013:{NFSU2_TR(0x5be013);
if(r1(R+518)){{goto L5be028;}}
}
B5be015:L5be015:{c.instructions+=3;NFSU2_TR(0x5be015);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be016:{NFSU2_TR(0x5be016);
w4(R+4,u32(0x10ull));
}
B5be01b:{NFSU2_TR(0x5be01b);
w4(R+28,u32(0x872bc0ull));
}
B5be020:L5be020:{c.instructions+=1;NFSU2_TR(0x5be020);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5be022;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be020u);}goto L5be020;}
}
B5be022:L5be022:{c.instructions+=5;NFSU2_TR(0x5be022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be023:{NFSU2_TR(0x5be023);
w1(R+0,u8(0x1ull));
}
B5be025:{NFSU2_TR(0x5be025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be026:{NFSU2_TR(0x5be026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be027:{NFSU2_TR(0x5be027);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be028:L5be028:{c.instructions+=2;NFSU2_TR(0x5be028);
u8 U[4];
w4(U+0,u32(0x872bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be02d:{NFSU2_TR(0x5be02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be032ull));
TAIL_STATIC(0x43c780u,43c);
}
B5be032:L5be032:{c.instructions+=5;NFSU2_TR(0x5be032);
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
B5be035:{NFSU2_TR(0x5be035);
w1(R+0,u8(0x1ull));
}
B5be037:{NFSU2_TR(0x5be037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be038:{NFSU2_TR(0x5be038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be039:{NFSU2_TR(0x5be039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be040:L5be040:{c.instructions+=11;NFSU2_TR(0x5be040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5be044:{NFSU2_TR(0x5be044);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5be048:{NFSU2_TR(0x5be048);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5be04a:{NFSU2_TR(0x5be04a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B5be04d:{NFSU2_TR(0x5be04d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5be04f:{NFSU2_TR(0x5be04f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5be053:{NFSU2_TR(0x5be053);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5be056:{NFSU2_TR(0x5be056);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5be058:{NFSU2_TR(0x5be058);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5be05b:{NFSU2_TR(0x5be05b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be05d:{NFSU2_TR(0x5be05d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be060:L5be060:{c.instructions+=21;NFSU2_TR(0x5be060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5be064:{NFSU2_TR(0x5be064);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5be068:{NFSU2_TR(0x5be068);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5be06b:{NFSU2_TR(0x5be06b);
w4(R+8,u32(r1(R+1)));
}
B5be06e:{NFSU2_TR(0x5be06e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5be071:{NFSU2_TR(0x5be071);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be072:{NFSU2_TR(0x5be072);
w4(R+24,u32(r1(R+4)));
}
B5be075:{NFSU2_TR(0x5be075);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B5be077:{NFSU2_TR(0x5be077);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5be07a:{NFSU2_TR(0x5be07a);
w4(R+4,u32(r1(R+5)));
}
B5be07d:{NFSU2_TR(0x5be07d);
w4(R+0,u32(r1(R+0)));
}
B5be080:{NFSU2_TR(0x5be080);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5be082:{NFSU2_TR(0x5be082);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5be085:{NFSU2_TR(0x5be085);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B5be087:{NFSU2_TR(0x5be087);
__builtin_memmove((R+0),gp(0x87096c),4);
}
B5be08c:{NFSU2_TR(0x5be08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5be08f:{NFSU2_TR(0x5be08f);
__builtin_memmove((R+0),gp(0x870958),4);
}
B5be094:{NFSU2_TR(0x5be094);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5be098:{NFSU2_TR(0x5be098);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x87096c),u32(0x1ull)));
s4(0x87096c,u32(u32(m4(0x87096c))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x87096c))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x87096c))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x87096c))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be09e:{NFSU2_TR(0x5be09e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be09f:{NFSU2_TR(0x5be09f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be0a0:L5be0a0:{c.instructions+=20;NFSU2_TR(0x5be0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5be0a4:{NFSU2_TR(0x5be0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5be0a8:{NFSU2_TR(0x5be0a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5be0ab:{NFSU2_TR(0x5be0ab);
w4(R+8,u32(r1(R+0)));
}
B5be0ae:{NFSU2_TR(0x5be0ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5be0b1:{NFSU2_TR(0x5be0b1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5be0b3:{NFSU2_TR(0x5be0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5be0b7:{NFSU2_TR(0x5be0b7);
w4(R+0,u32(r1(R+1)));
}
B5be0ba:{NFSU2_TR(0x5be0ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5be0bd:{NFSU2_TR(0x5be0bd);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5be0bf:{NFSU2_TR(0x5be0bf);
__builtin_memmove((R+0),gp(0x87096c),4);
}
B5be0c4:{NFSU2_TR(0x5be0c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5be0c7:{NFSU2_TR(0x5be0c7);
w4(R+8,u32(r1(R+8)));
}
B5be0ca:{NFSU2_TR(0x5be0ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5be0cd:{NFSU2_TR(0x5be0cd);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5be0cf:{NFSU2_TR(0x5be0cf);
__builtin_memmove((R+8),gp(0x870958),4);
}
B5be0d5:{NFSU2_TR(0x5be0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5be0d8:{NFSU2_TR(0x5be0d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5be0dc:{NFSU2_TR(0x5be0dc);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x87096c),u32(0x1ull)));
s4(0x87096c,u32(u32(m4(0x87096c))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x87096c))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x87096c))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x87096c))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be0e2:{NFSU2_TR(0x5be0e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be0f0:L5be0f0:{c.instructions+=14;NFSU2_TR(0x5be0f0);
__builtin_memmove((R+0),gp(0x870968),4);
}
B5be0f5:{NFSU2_TR(0x5be0f5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5be0f9:{NFSU2_TR(0x5be0f9);
__builtin_memmove((R+4),gp(0x870958),4);
}
B5be0ff:{NFSU2_TR(0x5be0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5be102:{NFSU2_TR(0x5be102);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5be106:{NFSU2_TR(0x5be106);
__builtin_memmove((R+0),gp(0x870968),4);
}
B5be10b:{NFSU2_TR(0x5be10b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5be10f:{NFSU2_TR(0x5be10f);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5be113:{NFSU2_TR(0x5be113);
__builtin_memmove((R+0),gp(0x870958),4);
}
B5be118:{NFSU2_TR(0x5be118);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5be11b:{NFSU2_TR(0x5be11b);
__builtin_memmove((R+0),gp(0x870968),4);
}
B5be120:{NFSU2_TR(0x5be120);
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
B5be121:{NFSU2_TR(0x5be121);
__builtin_memmove(gp(0x870968),(R+0),4);
}
B5be126:{NFSU2_TR(0x5be126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be130:L5be130:{c.instructions+=20;NFSU2_TR(0x5be130);
__builtin_memmove((R+0),gp(0x870964),4);
}
B5be135:{NFSU2_TR(0x5be135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5be138:{NFSU2_TR(0x5be138);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5be13c:{NFSU2_TR(0x5be13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5be13e:{NFSU2_TR(0x5be13e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be13f:{NFSU2_TR(0x5be13f);
__builtin_memmove((R+24),gp(0x870958),4);
}
B5be145:{NFSU2_TR(0x5be145);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5be149:{NFSU2_TR(0x5be149);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5be14c:{NFSU2_TR(0x5be14c);
__builtin_memmove((R+4),gp(0x870964),4);
}
B5be152:{NFSU2_TR(0x5be152);
__builtin_memmove((R+24),gp(0x870958),4);
}
B5be158:{NFSU2_TR(0x5be158);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5be15b:{NFSU2_TR(0x5be15b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5be15f:{NFSU2_TR(0x5be15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5be162:{NFSU2_TR(0x5be162);
__builtin_memmove((R+4),gp(0x870964),4);
}
B5be168:{NFSU2_TR(0x5be168);
__builtin_memmove((R+0),gp(0x870958),4);
}
B5be16d:{NFSU2_TR(0x5be16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5be170:{NFSU2_TR(0x5be170);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5be174:{NFSU2_TR(0x5be174);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x870964),u32(0x1ull)));
s4(0x870964,u32(u32(m4(0x870964))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870964))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870964))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870964))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be17a:{NFSU2_TR(0x5be17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be17b:{NFSU2_TR(0x5be17b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be180:L5be180:{c.instructions+=1;NFSU2_TR(0x5be180);
TAIL_STATIC(0x5bdfe0u,5bd);
}
B5be190:L5be190:{c.instructions+=4;NFSU2_TR(0x5be190);
__builtin_memmove((R+0),gp(0x870ce4),4);
}
B5be195:{NFSU2_TR(0x5be195);
__builtin_memmove(gp(0x8709d4),(R+0),4);
}
B5be19a:{NFSU2_TR(0x5be19a);
s4(0x870ce4,u32(0x0ull));
}
B5be1a4:{NFSU2_TR(0x5be1a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be1b0:L5be1b0:{c.instructions+=3;NFSU2_TR(0x5be1b0);
__builtin_memmove((R+0),gp(0x8709d4),4);
}
B5be1b5:{NFSU2_TR(0x5be1b5);
__builtin_memmove(gp(0x870ce4),(R+0),4);
}
B5be1ba:{NFSU2_TR(0x5be1ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be1c0:L5be1c0:{c.instructions+=3;NFSU2_TR(0x5be1c0);
__builtin_memmove((R+0),gp(0x870cf4),4);
}
B5be1c5:{NFSU2_TR(0x5be1c5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be1c8:{NFSU2_TR(0x5be1c8);
if(r1(R+518)){{goto L5be1da;}}
}
B5be1ca:L5be1ca:{c.instructions+=2;NFSU2_TR(0x5be1ca);
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
B5be1cd:{NFSU2_TR(0x5be1cd);
if(r1(R+518)){{goto L5be1da;}}
}
B5be1cf:L5be1cf:{c.instructions+=5;NFSU2_TR(0x5be1cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5be1d1:{NFSU2_TR(0x5be1d1);
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
B5be1d4:{NFSU2_TR(0x5be1d4);
__builtin_memmove((R+4),(R+518),1);
}
B5be1d7:{NFSU2_TR(0x5be1d7);
__builtin_memmove((R+0),(R+4),4);
}
B5be1d9:{NFSU2_TR(0x5be1d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be1da:L5be1da:{c.instructions+=2;NFSU2_TR(0x5be1da);
w4(R+0,u32(0x2ull));
}
B5be1df:{NFSU2_TR(0x5be1df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be1e0:L5be1e0:{c.instructions+=5;NFSU2_TR(0x5be1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5be1e4:{NFSU2_TR(0x5be1e4);
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
B5be1e6:{NFSU2_TR(0x5be1e6);
__builtin_memmove((R+0),gp(0x8ad670),4);
}
B5be1eb:{NFSU2_TR(0x5be1eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be1ec:{NFSU2_TR(0x5be1ec);
if(r1(R+518)){{goto L5be1f5;}}
}
B5be1ee:L5be1ee:{c.instructions+=1;NFSU2_TR(0x5be1ee);
u8 U[4];
__builtin_memmove((U+0),gp(0x78315c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be1f4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5be1f4:L5be1f4:{c.instructions+=1;NFSU2_TR(0x5be1f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be1f5:L5be1f5:{c.instructions+=1;NFSU2_TR(0x5be1f5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783158),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be1fbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5be1fb:L5be1fb:{c.instructions+=1;NFSU2_TR(0x5be1fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be200:L5be200:{c.instructions+=16;NFSU2_TR(0x5be200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be201:{NFSU2_TR(0x5be201);
__builtin_memmove((R+0),gp(0x86c54c),4);
}
B5be206:{NFSU2_TR(0x5be206);
__builtin_memmove((R+4),gp(0x86eb2c),4);
}
B5be20c:{NFSU2_TR(0x5be20c);
__builtin_memmove((R+8),gp(0x86eb38),4);
}
B5be212:{NFSU2_TR(0x5be212);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be213:{NFSU2_TR(0x5be213);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be214:{NFSU2_TR(0x5be214);
__builtin_memmove((R+20),gp(0x86c548),4);
}
B5be21a:{NFSU2_TR(0x5be21a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be21b:{NFSU2_TR(0x5be21b);
__builtin_memmove((R+24),gp(0x86eb34),4);
}
B5be221:{NFSU2_TR(0x5be221);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5be223:{NFSU2_TR(0x5be223);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8086ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be229:{NFSU2_TR(0x5be229);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be22a:{NFSU2_TR(0x5be22a);
__builtin_memmove((R+28),gp(0x86eb30),4);
}
B5be230:{NFSU2_TR(0x5be230);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5be234:{NFSU2_TR(0x5be234);
__builtin_memmove((R+0),gp(0x86eb3c),4);
}
B5be239:{NFSU2_TR(0x5be239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be251;}}
}
B5be23b:L5be23b:{c.instructions+=2;NFSU2_TR(0x5be23b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2572ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be243:{NFSU2_TR(0x5be243);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be24f;}}
}
B5be245:L5be245:{c.instructions+=3;NFSU2_TR(0x5be245);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5be247:{NFSU2_TR(0x5be247);
__builtin_memmove(gp(0x800570),(R+12),4);
}
B5be24d:{NFSU2_TR(0x5be24d);
{goto L5be251;}
}
B5be24f:L5be24f:{c.instructions+=1;NFSU2_TR(0x5be24f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5be251:L5be251:{c.instructions+=2;NFSU2_TR(0x5be251);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be255:{NFSU2_TR(0x5be255);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5be275;}}
}
B5be257:L5be257:{c.instructions+=2;NFSU2_TR(0x5be257);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x102bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be25d:{NFSU2_TR(0x5be25d);
if(r1(R+518)){{goto L5be275;}}
}
B5be25f:L5be25f:{c.instructions+=4;NFSU2_TR(0x5be25f);
w4(R+0,u32(0x1ull));
}
B5be264:{NFSU2_TR(0x5be264);
s4(0x8764d0,u32(0x3ull));
}
B5be26e:{NFSU2_TR(0x5be26e);
__builtin_memmove(gp(0x8764d4),(R+0),4);
}
B5be273:{NFSU2_TR(0x5be273);
{goto L5be286;}
}
B5be275:L5be275:{c.instructions+=3;NFSU2_TR(0x5be275);
__builtin_memmove(gp(0x8764d0),(R+12),4);
}
B5be27b:{NFSU2_TR(0x5be27b);
__builtin_memmove(gp(0x8764d4),(R+12),4);
}
B5be281:{NFSU2_TR(0x5be281);
w4(R+0,u32(0x1ull));
}
B5be286:L5be286:{c.instructions+=2;NFSU2_TR(0x5be286);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be289:{NFSU2_TR(0x5be289);
if(r1(R+518)){{goto L5be295;}}
}
B5be28b:L5be28b:{c.instructions+=3;NFSU2_TR(0x5be28b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be28e:{NFSU2_TR(0x5be28e);
__builtin_memmove(gp(0x8764dc),(R+0),4);
}
B5be293:{NFSU2_TR(0x5be293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be29b;}}
}
B5be295:L5be295:{c.instructions+=1;NFSU2_TR(0x5be295);
__builtin_memmove(gp(0x8764dc),(R+12),4);
}
B5be29b:L5be29b:{c.instructions+=2;NFSU2_TR(0x5be29b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be29e:{NFSU2_TR(0x5be29e);
if(r1(R+518)){{goto L5be2c3;}}
}
B5be2a0:L5be2a0:{c.instructions+=2;NFSU2_TR(0x5be2a0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10deull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be2a6:{NFSU2_TR(0x5be2a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be2bc;}}
}
B5be2a8:L5be2a8:{c.instructions+=3;NFSU2_TR(0x5be2a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5be2ac:{NFSU2_TR(0x5be2ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x170ull))));
}
B5be2b2:{NFSU2_TR(0x5be2b2);
if(r1(R+512)){{goto L5be2bc;}}
}
B5be2b4:L5be2b4:{c.instructions+=2;NFSU2_TR(0x5be2b4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x182ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x182ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be2ba:{NFSU2_TR(0x5be2ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5be2c3;}}
}
B5be2bc:L5be2bc:{c.instructions+=2;NFSU2_TR(0x5be2bc);
__builtin_memmove(gp(0x8764e8),(R+0),4);
}
B5be2c1:{NFSU2_TR(0x5be2c1);
{goto L5be2c9;}
}
B5be2c3:L5be2c3:{c.instructions+=1;NFSU2_TR(0x5be2c3);
__builtin_memmove(gp(0x8764e8),(R+12),4);
}
B5be2c9:L5be2c9:{c.instructions+=2;NFSU2_TR(0x5be2c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be2cc:{NFSU2_TR(0x5be2cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be2da;}}
}
B5be2ce:L5be2ce:{c.instructions+=2;NFSU2_TR(0x5be2ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be2d0:{NFSU2_TR(0x5be2d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be2da;}}
}
B5be2d2:L5be2d2:{c.instructions+=2;NFSU2_TR(0x5be2d2);
__builtin_memmove(gp(0x8764ec),(R+12),4);
}
B5be2d8:{NFSU2_TR(0x5be2d8);
{goto L5be2f2;}
}
B5be2da:L5be2da:{c.instructions+=7;NFSU2_TR(0x5be2da);
__builtin_memmove((R+0),gp(0x86eb64),4);
}
B5be2df:{NFSU2_TR(0x5be2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5be2e2:{NFSU2_TR(0x5be2e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5be2e4:{NFSU2_TR(0x5be2e4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be2e6:{NFSU2_TR(0x5be2e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5be2e9:{NFSU2_TR(0x5be2e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5be2ec:{NFSU2_TR(0x5be2ec);
__builtin_memmove(gp(0x8764ec),(R+4),4);
}
B5be2f2:L5be2f2:{c.instructions+=4;NFSU2_TR(0x5be2f2);
__builtin_memmove((R+4),gp(0x86eb64),4);
}
B5be2f8:{NFSU2_TR(0x5be2f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be2fb:{NFSU2_TR(0x5be2fb);
__builtin_memmove((R+8),gp(0x86e5f4),4);
}
B5be301:{NFSU2_TR(0x5be301);
if(r1(R+518)){{goto L5be31b;}}
}
B5be303:L5be303:{c.instructions+=3;NFSU2_TR(0x5be303);
__builtin_memmove((R+0),gp(0x86eb68),4);
}
B5be308:{NFSU2_TR(0x5be308);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be30b:{NFSU2_TR(0x5be30b);
if(r1(R+518)){{goto L5be31b;}}
}
B5be30d:L5be30d:{c.instructions+=2;NFSU2_TR(0x5be30d);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5be310:{NFSU2_TR(0x5be310);
if(r1(R+518)){{goto L5be31b;}}
}
B5be312:L5be312:{c.instructions+=3;NFSU2_TR(0x5be312);
w4(R+24,u32(0x1ull));
}
B5be317:{NFSU2_TR(0x5be317);
__builtin_memmove((R+0),(R+24),4);
}
B5be319:{NFSU2_TR(0x5be319);
{goto L5be322;}
}
B5be31b:L5be31b:{c.instructions+=2;NFSU2_TR(0x5be31b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5be31d:{NFSU2_TR(0x5be31d);
w4(R+24,u32(0x1ull));
}
B5be322:L5be322:{c.instructions+=3;NFSU2_TR(0x5be322);
__builtin_memmove(gp(0x876514),(R+0),4);
}
B5be327:{NFSU2_TR(0x5be327);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be32a:{NFSU2_TR(0x5be32a);
if(r1(R+518)){{goto L5be33f;}}
}
B5be32c:L5be32c:{c.instructions+=2;NFSU2_TR(0x5be32c);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5be32f:{NFSU2_TR(0x5be32f);
if(r1(R+518)){{goto L5be33f;}}
}
B5be331:L5be331:{c.instructions+=3;NFSU2_TR(0x5be331);
__builtin_memmove(gp(0x8764f4),(R+24),4);
}
B5be337:{NFSU2_TR(0x5be337);
__builtin_memmove(gp(0x8764f8),(R+24),4);
}
B5be33d:{NFSU2_TR(0x5be33d);
{goto L5be34b;}
}
B5be33f:L5be33f:{c.instructions+=2;NFSU2_TR(0x5be33f);
__builtin_memmove(gp(0x8764f4),(R+12),4);
}
B5be345:{NFSU2_TR(0x5be345);
__builtin_memmove(gp(0x8764f8),(R+12),4);
}
B5be34b:L5be34b:{c.instructions+=2;NFSU2_TR(0x5be34b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be34d:{NFSU2_TR(0x5be34d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be355;}}
}
B5be34f:L5be34f:{c.instructions+=1;NFSU2_TR(0x5be34f);
__builtin_memmove(gp(0x8764f8),(R+12),4);
}
B5be355:L5be355:{c.instructions+=16;NFSU2_TR(0x5be355);
__builtin_memmove((R+0),gp(0x86eb7c),4);
}
B5be35a:{NFSU2_TR(0x5be35a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5be35c:{NFSU2_TR(0x5be35c);
__builtin_memmove(gp(0x87651c),(R+24),4);
}
B5be362:{NFSU2_TR(0x5be362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5be365:{NFSU2_TR(0x5be365);
__builtin_memmove((R+0),gp(0x86eb6c),4);
}
B5be36a:{NFSU2_TR(0x5be36a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be36c:{NFSU2_TR(0x5be36c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5be36f:{NFSU2_TR(0x5be36f);
__builtin_memmove(gp(0x876524),(R+8),4);
}
B5be375:{NFSU2_TR(0x5be375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5be378:{NFSU2_TR(0x5be378);
__builtin_memmove((R+0),gp(0x86eb4c),4);
}
B5be37d:{NFSU2_TR(0x5be37d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5be37f:{NFSU2_TR(0x5be37f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be381:{NFSU2_TR(0x5be381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5be384:{NFSU2_TR(0x5be384);
__builtin_memmove(gp(0x876518),(R+8),4);
}
B5be38a:{NFSU2_TR(0x5be38a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be38d:{NFSU2_TR(0x5be38d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5be3cb;}}
}
B5be38f:L5be38f:{c.instructions+=3;NFSU2_TR(0x5be38f);
__builtin_memmove((R+8),gp(0x86eb50),4);
}
B5be395:{NFSU2_TR(0x5be395);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be398:{NFSU2_TR(0x5be398);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5be3cb;}}
}
B5be39a:L5be39a:{c.instructions+=3;NFSU2_TR(0x5be39a);
__builtin_memmove((R+0),gp(0x86eb58),4);
}
B5be39f:{NFSU2_TR(0x5be39f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be3a2:{NFSU2_TR(0x5be3a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5be3cb;}}
}
B5be3a4:L5be3a4:{c.instructions+=3;NFSU2_TR(0x5be3a4);
__builtin_memmove((R+8),gp(0x86eb54),4);
}
B5be3aa:{NFSU2_TR(0x5be3aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be3ad:{NFSU2_TR(0x5be3ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5be3cb;}}
}
B5be3af:L5be3af:{c.instructions+=2;NFSU2_TR(0x5be3af);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be3b2:{NFSU2_TR(0x5be3b2);
if(r1(R+518)){{goto L5be3cb;}}
}
B5be3b4:L5be3b4:{c.instructions+=3;NFSU2_TR(0x5be3b4);
__builtin_memmove((R+0),gp(0x86eb70),4);
}
B5be3b9:{NFSU2_TR(0x5be3b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be3bc:{NFSU2_TR(0x5be3bc);
if(r1(R+518)){{goto L5be3cb;}}
}
B5be3be:L5be3be:{c.instructions+=3;NFSU2_TR(0x5be3be);
w4(R+24,u32(0x1ull));
}
B5be3c3:{NFSU2_TR(0x5be3c3);
__builtin_memmove(gp(0x876508),(R+24),4);
}
B5be3c9:{NFSU2_TR(0x5be3c9);
{goto L5be3d6;}
}
B5be3cb:L5be3cb:{c.instructions+=2;NFSU2_TR(0x5be3cb);
__builtin_memmove(gp(0x876508),(R+12),4);
}
B5be3d1:{NFSU2_TR(0x5be3d1);
w4(R+24,u32(0x1ull));
}
B5be3d6:L5be3d6:{c.instructions+=11;NFSU2_TR(0x5be3d6);
__builtin_memmove((R+0),gp(0x86eb74),4);
}
B5be3db:{NFSU2_TR(0x5be3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5be3de:{NFSU2_TR(0x5be3de);
__builtin_memmove((R+0),gp(0x86e608),4);
}
B5be3e3:{NFSU2_TR(0x5be3e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5be3e5:{NFSU2_TR(0x5be3e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be3e7:{NFSU2_TR(0x5be3e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5be3ea:{NFSU2_TR(0x5be3ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5be3ef:{NFSU2_TR(0x5be3ef);
__builtin_memmove(gp(0x87652c),(R+24),4);
}
B5be3f5:{NFSU2_TR(0x5be3f5);
__builtin_memmove(gp(0x876530),(R+12),4);
}
B5be3fb:{NFSU2_TR(0x5be3fb);
__builtin_memmove(gp(0x876528),(R+4),4);
}
B5be401:{NFSU2_TR(0x5be401);
if(r1(R+518)){{goto L5be415;}}
}
B5be403:L5be403:{c.instructions+=2;NFSU2_TR(0x5be403);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5be406:{NFSU2_TR(0x5be406);
if(r1(R+518)){{goto L5be415;}}
}
B5be408:L5be408:{c.instructions+=2;NFSU2_TR(0x5be408);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5be40d:{NFSU2_TR(0x5be40d);
if(r1(R+518)){{goto L5be415;}}
}
B5be40f:L5be40f:{c.instructions+=1;NFSU2_TR(0x5be40f);
__builtin_memmove(gp(0x876530),(R+24),4);
}
B5be415:L5be415:{c.instructions+=2;NFSU2_TR(0x5be415);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5be418:{NFSU2_TR(0x5be418);
if(r1(R+518)){{goto L5be420;}}
}
B5be41a:L5be41a:{c.instructions+=1;NFSU2_TR(0x5be41a);
s4(0x876530,u32(u32(m4(0x876530))+u32(u32(0x1ull))));
}
B5be420:L5be420:{c.instructions+=15;NFSU2_TR(0x5be420);
__builtin_memmove((R+0),gp(0x86eb28),4);
}
B5be425:{NFSU2_TR(0x5be425);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5be428:{NFSU2_TR(0x5be428);
__builtin_memmove((R+0),gp(0x86e604),4);
}
B5be42d:{NFSU2_TR(0x5be42d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5be42f:{NFSU2_TR(0x5be42f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5be432:{NFSU2_TR(0x5be432);
__builtin_memmove((R+8),(R+518),1);
}
B5be435:{NFSU2_TR(0x5be435);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5be437:{NFSU2_TR(0x5be437);
s4(0x8764d8,u32(0x2ull));
}
B5be441:{NFSU2_TR(0x5be441);
__builtin_memmove(gp(0x8764fc),(R+24),4);
}
B5be447:{NFSU2_TR(0x5be447);
__builtin_memmove(gp(0x876500),(R+24),4);
}
B5be44d:{NFSU2_TR(0x5be44d);
__builtin_memmove(gp(0x876504),(R+24),4);
}
B5be453:{NFSU2_TR(0x5be453);
s4(0x87650c,u32(0x3ull));
}
B5be45d:{NFSU2_TR(0x5be45d);
__builtin_memmove(gp(0x8764f0),(R+8),4);
}
B5be463:{NFSU2_TR(0x5be463);
__builtin_memmove(gp(0x876510),(R+24),4);
}
B5be469:{NFSU2_TR(0x5be469);
if(r1(R+518)){{goto L5be49a;}}
}
B5be46b:L5be46b:{c.instructions+=2;NFSU2_TR(0x5be46b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5be46e:{NFSU2_TR(0x5be46e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be49a;}}
}
B5be470:L5be470:{c.instructions+=7;NFSU2_TR(0x5be470);
__builtin_memmove(gp(0x876518),(R+12),4);
}
B5be476:{NFSU2_TR(0x5be476);
__builtin_memmove(gp(0x876508),(R+12),4);
}
B5be47c:{NFSU2_TR(0x5be47c);
__builtin_memmove(gp(0x876520),(R+12),4);
}
B5be482:{NFSU2_TR(0x5be482);
__builtin_memmove(gp(0x8764f8),(R+12),4);
}
B5be488:{NFSU2_TR(0x5be488);
__builtin_memmove(gp(0x8764f4),(R+12),4);
}
B5be48e:{NFSU2_TR(0x5be48e);
__builtin_memmove(gp(0x876514),(R+12),4);
}
B5be494:{NFSU2_TR(0x5be494);
__builtin_memmove(gp(0x8764ec),(R+12),4);
}
B5be49a:L5be49a:{c.instructions+=2;NFSU2_TR(0x5be49a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be49c:{NFSU2_TR(0x5be49c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be4a4;}}
}
B5be49e:L5be49e:{c.instructions+=1;NFSU2_TR(0x5be49e);
__builtin_memmove(gp(0x8764dc),(R+12),4);
}
B5be4a4:L5be4a4:{c.instructions+=2;NFSU2_TR(0x5be4a4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be4aa:{NFSU2_TR(0x5be4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be4d5;}}
}
B5be4ac:L5be4ac:{c.instructions+=1;NFSU2_TR(0x5be4ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be4b1ull));
TAIL_STATIC(0x5bf5a0u,5bf);
}
B5be4b1:L5be4b1:{c.instructions+=2;NFSU2_TR(0x5be4b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5be4b3:{NFSU2_TR(0x5be4b3);
if(r1(R+518)){{goto L5be4bb;}}
}
B5be4b5:L5be4b5:{c.instructions+=1;NFSU2_TR(0x5be4b5);
__builtin_memmove(gp(0x876520),(R+12),4);
}
B5be4bb:L5be4bb:{c.instructions+=2;NFSU2_TR(0x5be4bb);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5834ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5834ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5834ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5be4c3:{NFSU2_TR(0x5be4c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be553;}}
}
B5be4c9:L5be4c9:{c.instructions+=7;NFSU2_TR(0x5be4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be4ca:{NFSU2_TR(0x5be4ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be4cb:{NFSU2_TR(0x5be4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be4cc:{NFSU2_TR(0x5be4cc);
__builtin_memmove(gp(0x8764ec),(R+12),4);
}
B5be4d2:{NFSU2_TR(0x5be4d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be4d3:{NFSU2_TR(0x5be4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5be4d4:{NFSU2_TR(0x5be4d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be4d5:L5be4d5:{c.instructions+=2;NFSU2_TR(0x5be4d5);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x18caull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18caull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18caull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be4db:{NFSU2_TR(0x5be4db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be4e9;}}
}
B5be4dd:L5be4dd:{c.instructions+=7;NFSU2_TR(0x5be4dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be4de:{NFSU2_TR(0x5be4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be4df:{NFSU2_TR(0x5be4df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be4e0:{NFSU2_TR(0x5be4e0);
__builtin_memmove(gp(0x876520),(R+12),4);
}
B5be4e6:{NFSU2_TR(0x5be4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be4e7:{NFSU2_TR(0x5be4e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5be4e8:{NFSU2_TR(0x5be4e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be4e9:L5be4e9:{c.instructions+=2;NFSU2_TR(0x5be4e9);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x1039ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1039ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1039ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be4ef:{NFSU2_TR(0x5be4ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be4fd;}}
}
B5be4f1:L5be4f1:{c.instructions+=7;NFSU2_TR(0x5be4f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be4f2:{NFSU2_TR(0x5be4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be4f3:{NFSU2_TR(0x5be4f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be4f4:{NFSU2_TR(0x5be4f4);
__builtin_memmove(gp(0x8764ec),(R+12),4);
}
B5be4fa:{NFSU2_TR(0x5be4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be4fb:{NFSU2_TR(0x5be4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5be4fc:{NFSU2_TR(0x5be4fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be4fd:L5be4fd:{c.instructions+=2;NFSU2_TR(0x5be4fd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8086ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be503:{NFSU2_TR(0x5be503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be51b;}}
}
B5be505:L5be505:{c.instructions+=2;NFSU2_TR(0x5be505);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2572ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2572ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2572ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5be50d:{NFSU2_TR(0x5be50d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be553;}}
}
B5be50f:L5be50f:{c.instructions+=7;NFSU2_TR(0x5be50f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be510:{NFSU2_TR(0x5be510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be511:{NFSU2_TR(0x5be511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be512:{NFSU2_TR(0x5be512);
__builtin_memmove(gp(0x8764ec),(R+12),4);
}
B5be518:{NFSU2_TR(0x5be518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be519:{NFSU2_TR(0x5be519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5be51a:{NFSU2_TR(0x5be51a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be51b:L5be51b:{c.instructions+=2;NFSU2_TR(0x5be51b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x102bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x102bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x102bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be521:{NFSU2_TR(0x5be521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be52f;}}
}
B5be523:L5be523:{c.instructions+=7;NFSU2_TR(0x5be523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be524:{NFSU2_TR(0x5be524);
__builtin_memmove(gp(0x8709a0),(R+24),4);
}
B5be52a:{NFSU2_TR(0x5be52a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be52b:{NFSU2_TR(0x5be52b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be52c:{NFSU2_TR(0x5be52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be52d:{NFSU2_TR(0x5be52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5be52e:{NFSU2_TR(0x5be52e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be52f:L5be52f:{c.instructions+=2;NFSU2_TR(0x5be52f);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x5333ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5333ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5333ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be535:{NFSU2_TR(0x5be535);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be553;}}
}
B5be537:L5be537:{c.instructions+=2;NFSU2_TR(0x5be537);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8e00ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8e00ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8e00ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5be53f:{NFSU2_TR(0x5be53f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be553;}}
}
B5be541:L5be541:{c.instructions+=3;NFSU2_TR(0x5be541);
__builtin_memmove(gp(0x876518),(R+12),4);
}
B5be547:{NFSU2_TR(0x5be547);
__builtin_memmove(gp(0x876514),(R+12),4);
}
B5be54d:{NFSU2_TR(0x5be54d);
__builtin_memmove(gp(0x8764f8),(R+12),4);
}
B5be553:L5be553:{c.instructions+=6;NFSU2_TR(0x5be553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be554:{NFSU2_TR(0x5be554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be555:{NFSU2_TR(0x5be555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be556:{NFSU2_TR(0x5be556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be557:{NFSU2_TR(0x5be557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5be558:{NFSU2_TR(0x5be558);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be560:L5be560:{c.instructions+=3;NFSU2_TR(0x5be560);
__builtin_memmove((R+0),gp(0x870d18),4);
}
B5be565:{NFSU2_TR(0x5be565);
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
B5be567:{NFSU2_TR(0x5be567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be56f;}}
}
B5be569:L5be569:{c.instructions+=2;NFSU2_TR(0x5be569);
w4(R+0,u32(0x1ull));
}
B5be56e:{NFSU2_TR(0x5be56e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be56f:L5be56f:{c.instructions+=2;NFSU2_TR(0x5be56f);
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
B5be572:{NFSU2_TR(0x5be572);
if(r1(R+518)){{goto L5be585;}}
}
B5be574:L5be574:{c.instructions+=2;NFSU2_TR(0x5be574);
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
B5be577:{NFSU2_TR(0x5be577);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be59d;}}
}
B5be579:L5be579:{c.instructions+=2;NFSU2_TR(0x5be579);
u8 U[14];
__builtin_memmove((U+6),gp(0x86c548),4);
w1(R+512,u8((r4(U+6))<(u32(0x102bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x102bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x102bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be583:{NFSU2_TR(0x5be583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be58b;}}
}
B5be585:L5be585:{c.instructions+=2;NFSU2_TR(0x5be585);
w4(R+0,u32(0x2ull));
}
B5be58a:{NFSU2_TR(0x5be58a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be58b:L5be58b:{c.instructions+=4;NFSU2_TR(0x5be58b);
__builtin_memmove((R+0),gp(0x86e608),4);
}
B5be590:{NFSU2_TR(0x5be590);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
}
B5be595:{NFSU2_TR(0x5be595);
u8 U[6];
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be59a:{NFSU2_TR(0x5be59a);
u8 U[48];
w4(U+40,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
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
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5be59d:L5be59d:{c.instructions+=1;NFSU2_TR(0x5be59d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be5a0:L5be5a0:{c.instructions+=12;NFSU2_TR(0x5be5a0);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5be5a6:{NFSU2_TR(0x5be5a6);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5be5ab:{NFSU2_TR(0x5be5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5be5ad:{NFSU2_TR(0x5be5ad);
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
B5be5b0:{NFSU2_TR(0x5be5b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5b1:{NFSU2_TR(0x5be5b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5b2:{NFSU2_TR(0x5be5b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5b3:{NFSU2_TR(0x5be5b3);
u8 U[4];
w4(U+0,u32(0x86c120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5b8:{NFSU2_TR(0x5be5b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5ba:{NFSU2_TR(0x5be5ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5bb:{NFSU2_TR(0x5be5bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5bc:{NFSU2_TR(0x5be5bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be5bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5be5bf:L5be5bf:{c.instructions+=5;NFSU2_TR(0x5be5bf);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5be5c5:{NFSU2_TR(0x5be5c5);
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
B5be5c7:{NFSU2_TR(0x5be5c7);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5c9:{NFSU2_TR(0x5be5c9);
w4(R+4,u32(0x6ull));
}
B5be5ce:{NFSU2_TR(0x5be5ce);
w4(R+28,u32(0x86e880ull));
}
B5be5d3:L5be5d3:{c.instructions+=1;NFSU2_TR(0x5be5d3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5be5d5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be5d3u);}goto L5be5d3;}
}
B5be5d5:L5be5d5:{c.instructions+=5;NFSU2_TR(0x5be5d5);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5be5da:{NFSU2_TR(0x5be5da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5be5dc:{NFSU2_TR(0x5be5dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5dd:{NFSU2_TR(0x5be5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5de:{NFSU2_TR(0x5be5de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be5e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5be5e1:L5be5e1:{c.instructions+=4;NFSU2_TR(0x5be5e1);
__builtin_memmove((R+20),(R+0),4);
}
B5be5e3:{NFSU2_TR(0x5be5e3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5be5e5:{NFSU2_TR(0x5be5e5);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be5e7:{NFSU2_TR(0x5be5e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5be66c;}}
}
B5be5ed:L5be5ed:{c.instructions+=2;NFSU2_TR(0x5be5ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5ee:{NFSU2_TR(0x5be5ee);
__builtin_memmove((R+28),(R+28),4);
}
B5be5f0:L5be5f0:{c.instructions+=10;NFSU2_TR(0x5be5f0);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5be5f5:{NFSU2_TR(0x5be5f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5be5f7:{NFSU2_TR(0x5be5f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5be5fb:{NFSU2_TR(0x5be5fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be5fc:{NFSU2_TR(0x5be5fc);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5be602:{NFSU2_TR(0x5be602);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be603:{NFSU2_TR(0x5be603);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be605:{NFSU2_TR(0x5be605);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be606:{NFSU2_TR(0x5be606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be607:{NFSU2_TR(0x5be607);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be60aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5be60a:L5be60a:{c.instructions+=2;NFSU2_TR(0x5be60a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5be60c:{NFSU2_TR(0x5be60c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be666;}}
}
B5be60e:L5be60e:{c.instructions+=4;NFSU2_TR(0x5be60e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5be612:{NFSU2_TR(0x5be612);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5be616:{NFSU2_TR(0x5be616);
__builtin_memmove((R+8),gp(0x86c54c),4);
}
B5be61c:{NFSU2_TR(0x5be61c);
__builtin_memmove((R+4),gp(0x86c548),4);
}
B5be622:L5be622:{c.instructions+=2;NFSU2_TR(0x5be622);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10deull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be628:{NFSU2_TR(0x5be628);
if(r1(R+518)){{goto L5be673;}}
}
B5be62a:L5be62a:{c.instructions+=2;NFSU2_TR(0x5be62a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be630:{NFSU2_TR(0x5be630);
if(r1(R+518)){{goto L5be637;}}
}
B5be632:L5be632:{c.instructions+=2;NFSU2_TR(0x5be632);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be635:{NFSU2_TR(0x5be635);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5be666;}}
}
B5be637:L5be637:{c.instructions+=2;NFSU2_TR(0x5be637);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18caull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be63d:{NFSU2_TR(0x5be63d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be644;}}
}
B5be63f:L5be63f:{c.instructions+=1;NFSU2_TR(0x5be63f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be642:L5be642:{c.instructions+=1;NFSU2_TR(0x5be642);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5be666;}}
}
B5be644:L5be644:{c.instructions+=2;NFSU2_TR(0x5be644);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x800538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be64a:{NFSU2_TR(0x5be64a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be65e;}}
}
B5be64c:L5be64c:{c.instructions+=2;NFSU2_TR(0x5be64c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x800550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5be652:{NFSU2_TR(0x5be652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be65e;}}
}
B5be654:L5be654:{c.instructions+=1;NFSU2_TR(0x5be654);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e880ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5be65e:L5be65e:{c.instructions+=3;NFSU2_TR(0x5be65e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5be661:{NFSU2_TR(0x5be661);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be664:{NFSU2_TR(0x5be664);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be622u);}goto L5be622;}}
}
B5be666:L5be666:{c.instructions+=3;NFSU2_TR(0x5be666);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5be667:{NFSU2_TR(0x5be667);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5be669:{NFSU2_TR(0x5be669);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be5f0u);}goto L5be5f0;}}
}
B5be66b:L5be66b:{c.instructions+=1;NFSU2_TR(0x5be66b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be66c:L5be66c:{c.instructions+=5;NFSU2_TR(0x5be66c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be66d:{NFSU2_TR(0x5be66d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5be66e:{NFSU2_TR(0x5be66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5be66f:{NFSU2_TR(0x5be66f);
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
B5be672:{NFSU2_TR(0x5be672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be673:L5be673:{c.instructions+=2;NFSU2_TR(0x5be673);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1a0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be679:{NFSU2_TR(0x5be679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be680;}}
}
B5be67b:L5be67b:{c.instructions+=2;NFSU2_TR(0x5be67b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be67e:{NFSU2_TR(0x5be67e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be666u);}goto L5be666;}}
}
B5be680:L5be680:{c.instructions+=2;NFSU2_TR(0x5be680);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1f0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be686:{NFSU2_TR(0x5be686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be644u);}goto L5be644;}}
}
B5be688:L5be688:{c.instructions+=2;NFSU2_TR(0x5be688);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be68b:{NFSU2_TR(0x5be68b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be642u);}goto L5be642;}
}
B5be690:L5be690:{c.instructions+=3;NFSU2_TR(0x5be690);
__builtin_memmove((R+0),gp(0x8764d0),4);
}
B5be695:{NFSU2_TR(0x5be695);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cb8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be69b:{NFSU2_TR(0x5be69b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be6a2;}}
}
B5be69d:L5be69d:{c.instructions+=1;NFSU2_TR(0x5be69d);
__builtin_memmove(gp(0x870cb8),(R+0),4);
}
B5be6a2:L5be6a2:{c.instructions+=3;NFSU2_TR(0x5be6a2);
__builtin_memmove((R+0),gp(0x8764d4),4);
}
B5be6a7:{NFSU2_TR(0x5be6a7);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cbc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be6ad:{NFSU2_TR(0x5be6ad);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be6b4;}}
}
B5be6af:L5be6af:{c.instructions+=1;NFSU2_TR(0x5be6af);
__builtin_memmove(gp(0x870cbc),(R+0),4);
}
B5be6b4:L5be6b4:{c.instructions+=3;NFSU2_TR(0x5be6b4);
__builtin_memmove((R+0),gp(0x8764d8),4);
}
B5be6b9:{NFSU2_TR(0x5be6b9);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be6bf:{NFSU2_TR(0x5be6bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be6c6;}}
}
B5be6c1:L5be6c1:{c.instructions+=1;NFSU2_TR(0x5be6c1);
__builtin_memmove(gp(0x870cc0),(R+0),4);
}
B5be6c6:L5be6c6:{c.instructions+=3;NFSU2_TR(0x5be6c6);
__builtin_memmove((R+0),gp(0x8764dc),4);
}
B5be6cb:{NFSU2_TR(0x5be6cb);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be6d1:{NFSU2_TR(0x5be6d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be6d8;}}
}
B5be6d3:L5be6d3:{c.instructions+=1;NFSU2_TR(0x5be6d3);
__builtin_memmove(gp(0x870cc4),(R+0),4);
}
B5be6d8:L5be6d8:{c.instructions+=3;NFSU2_TR(0x5be6d8);
__builtin_memmove((R+0),gp(0x8764e0),4);
}
B5be6dd:{NFSU2_TR(0x5be6dd);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be6e3:{NFSU2_TR(0x5be6e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be6ea;}}
}
B5be6e5:L5be6e5:{c.instructions+=1;NFSU2_TR(0x5be6e5);
__builtin_memmove(gp(0x870cc8),(R+0),4);
}
B5be6ea:L5be6ea:{c.instructions+=3;NFSU2_TR(0x5be6ea);
__builtin_memmove((R+0),gp(0x8764e4),4);
}
B5be6ef:{NFSU2_TR(0x5be6ef);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ccc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be6f5:{NFSU2_TR(0x5be6f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be6fc;}}
}
B5be6f7:L5be6f7:{c.instructions+=1;NFSU2_TR(0x5be6f7);
__builtin_memmove(gp(0x870ccc),(R+0),4);
}
B5be6fc:L5be6fc:{c.instructions+=3;NFSU2_TR(0x5be6fc);
__builtin_memmove((R+0),gp(0x8764e8),4);
}
B5be701:{NFSU2_TR(0x5be701);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cd0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be707:{NFSU2_TR(0x5be707);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be70e;}}
}
B5be709:L5be709:{c.instructions+=1;NFSU2_TR(0x5be709);
__builtin_memmove(gp(0x870cd0),(R+0),4);
}
B5be70e:L5be70e:{c.instructions+=3;NFSU2_TR(0x5be70e);
__builtin_memmove((R+0),gp(0x8764ec),4);
}
B5be713:{NFSU2_TR(0x5be713);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cd4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be719:{NFSU2_TR(0x5be719);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be720;}}
}
B5be71b:L5be71b:{c.instructions+=1;NFSU2_TR(0x5be71b);
__builtin_memmove(gp(0x870cd4),(R+0),4);
}
B5be720:L5be720:{c.instructions+=3;NFSU2_TR(0x5be720);
__builtin_memmove((R+0),gp(0x8764f0),4);
}
B5be725:{NFSU2_TR(0x5be725);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cd8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be72b:{NFSU2_TR(0x5be72b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be732;}}
}
B5be72d:L5be72d:{c.instructions+=1;NFSU2_TR(0x5be72d);
__builtin_memmove(gp(0x870cd8),(R+0),4);
}
B5be732:L5be732:{c.instructions+=3;NFSU2_TR(0x5be732);
__builtin_memmove((R+0),gp(0x8764f4),4);
}
B5be737:{NFSU2_TR(0x5be737);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cdc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be73d:{NFSU2_TR(0x5be73d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be744;}}
}
B5be73f:L5be73f:{c.instructions+=1;NFSU2_TR(0x5be73f);
__builtin_memmove(gp(0x870cdc),(R+0),4);
}
B5be744:L5be744:{c.instructions+=3;NFSU2_TR(0x5be744);
__builtin_memmove((R+0),gp(0x8764f8),4);
}
B5be749:{NFSU2_TR(0x5be749);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be74f:{NFSU2_TR(0x5be74f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be756;}}
}
B5be751:L5be751:{c.instructions+=1;NFSU2_TR(0x5be751);
__builtin_memmove(gp(0x870ce0),(R+0),4);
}
B5be756:L5be756:{c.instructions+=3;NFSU2_TR(0x5be756);
__builtin_memmove((R+0),gp(0x8764fc),4);
}
B5be75b:{NFSU2_TR(0x5be75b);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be761:{NFSU2_TR(0x5be761);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be768;}}
}
B5be763:L5be763:{c.instructions+=1;NFSU2_TR(0x5be763);
__builtin_memmove(gp(0x870ce4),(R+0),4);
}
B5be768:L5be768:{c.instructions+=3;NFSU2_TR(0x5be768);
__builtin_memmove((R+0),gp(0x876500),4);
}
B5be76d:{NFSU2_TR(0x5be76d);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be773:{NFSU2_TR(0x5be773);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be77a;}}
}
B5be775:L5be775:{c.instructions+=1;NFSU2_TR(0x5be775);
__builtin_memmove(gp(0x870ce8),(R+0),4);
}
B5be77a:L5be77a:{c.instructions+=3;NFSU2_TR(0x5be77a);
__builtin_memmove((R+0),gp(0x876504),4);
}
B5be77f:{NFSU2_TR(0x5be77f);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cec),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be785:{NFSU2_TR(0x5be785);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be78c;}}
}
B5be787:L5be787:{c.instructions+=1;NFSU2_TR(0x5be787);
__builtin_memmove(gp(0x870cec),(R+0),4);
}
B5be78c:L5be78c:{c.instructions+=3;NFSU2_TR(0x5be78c);
__builtin_memmove((R+0),gp(0x876508),4);
}
B5be791:{NFSU2_TR(0x5be791);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cf0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be797:{NFSU2_TR(0x5be797);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be79e;}}
}
B5be799:L5be799:{c.instructions+=1;NFSU2_TR(0x5be799);
__builtin_memmove(gp(0x870cf0),(R+0),4);
}
B5be79e:L5be79e:{c.instructions+=3;NFSU2_TR(0x5be79e);
__builtin_memmove((R+0),gp(0x87650c),4);
}
B5be7a3:{NFSU2_TR(0x5be7a3);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cf4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be7a9:{NFSU2_TR(0x5be7a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be7b0;}}
}
B5be7ab:L5be7ab:{c.instructions+=1;NFSU2_TR(0x5be7ab);
__builtin_memmove(gp(0x870cf4),(R+0),4);
}
B5be7b0:L5be7b0:{c.instructions+=3;NFSU2_TR(0x5be7b0);
__builtin_memmove((R+0),gp(0x876510),4);
}
B5be7b5:{NFSU2_TR(0x5be7b5);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cf8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be7bb:{NFSU2_TR(0x5be7bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be7c2;}}
}
B5be7bd:L5be7bd:{c.instructions+=1;NFSU2_TR(0x5be7bd);
__builtin_memmove(gp(0x870cf8),(R+0),4);
}
B5be7c2:L5be7c2:{c.instructions+=3;NFSU2_TR(0x5be7c2);
__builtin_memmove((R+0),gp(0x876520),4);
}
B5be7c7:{NFSU2_TR(0x5be7c7);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d08),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be7cd:{NFSU2_TR(0x5be7cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be7d4;}}
}
B5be7cf:L5be7cf:{c.instructions+=1;NFSU2_TR(0x5be7cf);
__builtin_memmove(gp(0x870d08),(R+0),4);
}
B5be7d4:L5be7d4:{c.instructions+=3;NFSU2_TR(0x5be7d4);
__builtin_memmove((R+0),gp(0x876518),4);
}
B5be7d9:{NFSU2_TR(0x5be7d9);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d00),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be7df:{NFSU2_TR(0x5be7df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be7e6;}}
}
B5be7e1:L5be7e1:{c.instructions+=1;NFSU2_TR(0x5be7e1);
__builtin_memmove(gp(0x870d00),(R+0),4);
}
B5be7e6:L5be7e6:{c.instructions+=3;NFSU2_TR(0x5be7e6);
__builtin_memmove((R+0),gp(0x876514),4);
}
B5be7eb:{NFSU2_TR(0x5be7eb);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cfc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be7f1:{NFSU2_TR(0x5be7f1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be7f8;}}
}
B5be7f3:L5be7f3:{c.instructions+=1;NFSU2_TR(0x5be7f3);
__builtin_memmove(gp(0x870cfc),(R+0),4);
}
B5be7f8:L5be7f8:{c.instructions+=3;NFSU2_TR(0x5be7f8);
__builtin_memmove((R+0),gp(0x876524),4);
}
B5be7fd:{NFSU2_TR(0x5be7fd);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d0c),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be803:{NFSU2_TR(0x5be803);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be80a;}}
}
B5be805:L5be805:{c.instructions+=1;NFSU2_TR(0x5be805);
__builtin_memmove(gp(0x870d0c),(R+0),4);
}
B5be80a:L5be80a:{c.instructions+=3;NFSU2_TR(0x5be80a);
__builtin_memmove((R+0),gp(0x876528),4);
}
B5be80f:{NFSU2_TR(0x5be80f);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d10),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be815:{NFSU2_TR(0x5be815);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be81c;}}
}
B5be817:L5be817:{c.instructions+=1;NFSU2_TR(0x5be817);
__builtin_memmove(gp(0x870d10),(R+0),4);
}
B5be81c:L5be81c:{c.instructions+=3;NFSU2_TR(0x5be81c);
__builtin_memmove((R+0),gp(0x87652c),4);
}
B5be821:{NFSU2_TR(0x5be821);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d14),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be827:{NFSU2_TR(0x5be827);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be82e;}}
}
B5be829:L5be829:{c.instructions+=1;NFSU2_TR(0x5be829);
__builtin_memmove(gp(0x870d14),(R+0),4);
}
B5be82e:L5be82e:{c.instructions+=3;NFSU2_TR(0x5be82e);
__builtin_memmove((R+0),gp(0x876530),4);
}
B5be833:{NFSU2_TR(0x5be833);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d18),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5be839:{NFSU2_TR(0x5be839);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5be840;}}
}
B5be83b:L5be83b:{c.instructions+=1;NFSU2_TR(0x5be83b);
__builtin_memmove(gp(0x870d18),(R+0),4);
}
B5be840:L5be840:{c.instructions+=4;NFSU2_TR(0x5be840);
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B5be845:{NFSU2_TR(0x5be845);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(MODV+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5be84c:{NFSU2_TR(0x5be84c);
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
B5be84e:{NFSU2_TR(0x5be84e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be868;}}
}
B5be850:L5be850:{c.instructions+=2;NFSU2_TR(0x5be850);
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
B5be852:{NFSU2_TR(0x5be852);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5be868;}}
}
B5be854:L5be854:{c.instructions+=3;NFSU2_TR(0x5be854);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(MODV+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5be85b:{NFSU2_TR(0x5be85b);
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
B5be85d:{NFSU2_TR(0x5be85d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5be863;}}
}
B5be85f:L5be85f:{c.instructions+=2;NFSU2_TR(0x5be85f);
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
B5be860:{NFSU2_TR(0x5be860);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be854u);}goto L5be854;}}
}
B5be862:L5be862:{c.instructions+=1;NFSU2_TR(0x5be862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be863:L5be863:{c.instructions+=1;NFSU2_TR(0x5be863);
__builtin_memmove(gp(0x870d1c),(R+0),4);
}
B5be868:L5be868:{c.instructions+=1;NFSU2_TR(0x5be868);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be870:L5be870:{c.instructions+=30;NFSU2_TR(0x5be870);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5be872:{NFSU2_TR(0x5be872);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be873:{NFSU2_TR(0x5be873);
__builtin_memmove(gp(0x870cb8),(R+0),4);
}
B5be878:{NFSU2_TR(0x5be878);
__builtin_memmove(gp(0x870cbc),(R+0),4);
}
B5be87d:{NFSU2_TR(0x5be87d);
__builtin_memmove(gp(0x870cc0),(R+0),4);
}
B5be882:{NFSU2_TR(0x5be882);
__builtin_memmove(gp(0x870cc4),(R+0),4);
}
B5be887:{NFSU2_TR(0x5be887);
__builtin_memmove(gp(0x870cd0),(R+0),4);
}
B5be88c:{NFSU2_TR(0x5be88c);
__builtin_memmove(gp(0x870cd4),(R+0),4);
}
B5be891:{NFSU2_TR(0x5be891);
__builtin_memmove(gp(0x870cec),(R+0),4);
}
B5be896:{NFSU2_TR(0x5be896);
__builtin_memmove(gp(0x870cf4),(R+0),4);
}
B5be89b:{NFSU2_TR(0x5be89b);
__builtin_memmove(gp(0x870cf8),(R+0),4);
}
B5be8a0:{NFSU2_TR(0x5be8a0);
__builtin_memmove(gp(0x870d10),(R+0),4);
}
B5be8a5:{NFSU2_TR(0x5be8a5);
__builtin_memmove(gp(0x870cdc),(R+0),4);
}
B5be8aa:{NFSU2_TR(0x5be8aa);
__builtin_memmove(gp(0x870ce0),(R+0),4);
}
B5be8af:{NFSU2_TR(0x5be8af);
__builtin_memmove(gp(0x870ce4),(R+0),4);
}
B5be8b4:{NFSU2_TR(0x5be8b4);
__builtin_memmove(gp(0x870cf0),(R+0),4);
}
B5be8b9:{NFSU2_TR(0x5be8b9);
__builtin_memmove(gp(0x870cfc),(R+0),4);
}
B5be8be:{NFSU2_TR(0x5be8be);
__builtin_memmove(gp(0x870d00),(R+0),4);
}
B5be8c3:{NFSU2_TR(0x5be8c3);
__builtin_memmove(gp(0x870d04),(R+0),4);
}
B5be8c8:{NFSU2_TR(0x5be8c8);
__builtin_memmove(gp(0x870d0c),(R+0),4);
}
B5be8cd:{NFSU2_TR(0x5be8cd);
__builtin_memmove(gp(0x870d08),(R+0),4);
}
B5be8d2:{NFSU2_TR(0x5be8d2);
w4(R+24,u32(0x1ull));
}
B5be8d7:{NFSU2_TR(0x5be8d7);
__builtin_memmove(gp(0x870cd8),(R+0),4);
}
B5be8dc:{NFSU2_TR(0x5be8dc);
__builtin_memmove(gp(0x870d24),(R+0),4);
}
B5be8e1:{NFSU2_TR(0x5be8e1);
__builtin_memmove((R+0),gp(0x87099c),4);
}
B5be8e6:{NFSU2_TR(0x5be8e6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be8e8:{NFSU2_TR(0x5be8e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be8e9:{NFSU2_TR(0x5be8e9);
__builtin_memmove(gp(0x870d18),(R+24),4);
}
B5be8ef:{NFSU2_TR(0x5be8ef);
w4(R+28,u32(0x2ull));
}
B5be8f4:{NFSU2_TR(0x5be8f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5be91a;}}
}
B5be8f6:L5be8f6:{c.instructions+=6;NFSU2_TR(0x5be8f6);
__builtin_memmove(gp(0x870cc0),(R+28),4);
}
B5be8fc:{NFSU2_TR(0x5be8fc);
__builtin_memmove(gp(0x870cc4),(R+24),4);
}
B5be902:{NFSU2_TR(0x5be902);
__builtin_memmove(gp(0x870cd0),(R+24),4);
}
B5be908:{NFSU2_TR(0x5be908);
__builtin_memmove(gp(0x870ce4),(R+24),4);
}
B5be90e:{NFSU2_TR(0x5be90e);
__builtin_memmove(gp(0x870cf4),(R+24),4);
}
B5be914:{NFSU2_TR(0x5be914);
__builtin_memmove(gp(0x870d04),(R+24),4);
}
B5be91a:L5be91a:{c.instructions+=2;NFSU2_TR(0x5be91a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be91c:{NFSU2_TR(0x5be91c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5be96c;}}
}
B5be91e:L5be91e:{c.instructions+=13;NFSU2_TR(0x5be91e);
__builtin_memmove(gp(0x870cb8),(R+24),4);
}
B5be924:{NFSU2_TR(0x5be924);
__builtin_memmove(gp(0x870cbc),(R+24),4);
}
B5be92a:{NFSU2_TR(0x5be92a);
__builtin_memmove(gp(0x870cd4),(R+28),4);
}
B5be930:{NFSU2_TR(0x5be930);
__builtin_memmove(gp(0x870cd8),(R+24),4);
}
B5be936:{NFSU2_TR(0x5be936);
__builtin_memmove(gp(0x870cec),(R+24),4);
}
B5be93c:{NFSU2_TR(0x5be93c);
__builtin_memmove(gp(0x870cf8),(R+24),4);
}
B5be942:{NFSU2_TR(0x5be942);
__builtin_memmove(gp(0x870d18),(R+24),4);
}
B5be948:{NFSU2_TR(0x5be948);
__builtin_memmove(gp(0x870cdc),(R+24),4);
}
B5be94e:{NFSU2_TR(0x5be94e);
__builtin_memmove(gp(0x870d0c),(R+24),4);
}
B5be954:{NFSU2_TR(0x5be954);
__builtin_memmove(gp(0x870cf4),(R+28),4);
}
B5be95a:{NFSU2_TR(0x5be95a);
__builtin_memmove(gp(0x870cf0),(R+24),4);
}
B5be960:{NFSU2_TR(0x5be960);
__builtin_memmove(gp(0x870cfc),(R+24),4);
}
B5be966:{NFSU2_TR(0x5be966);
__builtin_memmove(gp(0x870ce0),(R+24),4);
}
B5be96c:L5be96c:{c.instructions+=2;NFSU2_TR(0x5be96c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be96f:{NFSU2_TR(0x5be96f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5be9bd;}}
}
B5be971:L5be971:{c.instructions+=9;NFSU2_TR(0x5be971);
__builtin_memmove((R+0),gp(0x86c54c),4);
}
B5be976:{NFSU2_TR(0x5be976);
__builtin_memmove((R+4),gp(0x86c548),4);
}
B5be97c:{NFSU2_TR(0x5be97c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be97d:{NFSU2_TR(0x5be97d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5be97e:{NFSU2_TR(0x5be97e);
__builtin_memmove(gp(0x870cb8),(R+28),4);
}
B5be984:{NFSU2_TR(0x5be984);
__builtin_memmove(gp(0x870d10),(R+24),4);
}
B5be98a:{NFSU2_TR(0x5be98a);
s4(0x870cd4,u32(0x3ull));
}
B5be994:{NFSU2_TR(0x5be994);
__builtin_memmove(gp(0x870d00),(R+24),4);
}
B5be99a:{NFSU2_TR(0x5be99a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be99full));
TAIL_STATIC(0x5c0cd0u,5c0);
}
B5be99f:L5be99f:{c.instructions+=2;NFSU2_TR(0x5be99f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5be9a2:{NFSU2_TR(0x5be9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be9a7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5be9a7:L5be9a7:{c.instructions+=2;NFSU2_TR(0x5be9a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be9aa:{NFSU2_TR(0x5be9aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5be9b2;}}
}
B5be9ac:L5be9ac:{c.instructions+=1;NFSU2_TR(0x5be9ac);
if(r4(MODV+28)){goto B5be9b2;}
__builtin_memmove(gp(0x870d1c),(R+24),4);
}
B5be9b2:L5be9b2:{c.instructions+=2;NFSU2_TR(0x5be9b2);
__builtin_memmove((R+0),gp(0x87099c),4);
}
B5be9b7:{NFSU2_TR(0x5be9b7);
__builtin_memmove(gp(0x870d08),(R+24),4);
}
B5be9bd:L5be9bd:{c.instructions+=2;NFSU2_TR(0x5be9bd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5be9c0:{NFSU2_TR(0x5be9c0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5be9de;}}
}
B5be9c2:L5be9c2:{c.instructions+=4;NFSU2_TR(0x5be9c2);
__builtin_memmove((R+8),gp(0x876520),4);
}
B5be9c8:{NFSU2_TR(0x5be9c8);
__builtin_memmove(gp(0x870d18),(R+28),4);
}
B5be9ce:{NFSU2_TR(0x5be9ce);
s4(0x870cb8,u32(0x3ull));
}
B5be9d8:{NFSU2_TR(0x5be9d8);
__builtin_memmove(gp(0x870d08),(R+8),4);
}
B5be9de:L5be9de:{c.instructions+=3;NFSU2_TR(0x5be9de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5be9df:{NFSU2_TR(0x5be9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5be9e0:{NFSU2_TR(0x5be9e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5be9f0:L5be9f0:{c.instructions+=1;NFSU2_TR(0x5be9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5be9f5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be870u);}goto L5be870;}
}
B5be9f5:L5be9f5:{c.instructions+=2;NFSU2_TR(0x5be9f5);
u8 U[8];
__builtin_memmove((U+0),gp(0x86c548),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5be9ff:{NFSU2_TR(0x5be9ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bea14;}}
}
B5bea01:L5bea01:{c.instructions+=1;NFSU2_TR(0x5bea01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bea06ull));
TAIL_STATIC(0x5bf5a0u,5bf);
}
B5bea06:L5bea06:{c.instructions+=2;NFSU2_TR(0x5bea06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bea08:{NFSU2_TR(0x5bea08);
if(r1(R+518)){{goto L5bea14;}}
}
B5bea0a:L5bea0a:{c.instructions+=1;NFSU2_TR(0x5bea0a);
s4(0x870d08,u32(0x0ull));
}
B5bea14:L5bea14:{c.instructions+=1;NFSU2_TR(0x5bea14);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5be690u);}goto L5be690;}
}
B5bea20:L5bea20:{c.instructions+=8;NFSU2_TR(0x5bea20);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bea23:{NFSU2_TR(0x5bea23);
__builtin_memmove((R+0),(R+16),4);
}
B5bea27:{NFSU2_TR(0x5bea27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea28:{NFSU2_TR(0x5bea28);
u8 U[4];
w4(U+0,u32(0x20019ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea2d:{NFSU2_TR(0x5bea2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea2f:{NFSU2_TR(0x5bea2f);
u8 U[4];
w4(U+0,u32(0x7a30e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea34:{NFSU2_TR(0x5bea34);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea39:{NFSU2_TR(0x5bea39);
u8 U[4];
__builtin_memmove((U+0),gp(0x783008),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bea3full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bea3f:L5bea3f:{c.instructions+=2;NFSU2_TR(0x5bea3f);
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
B5bea41:{NFSU2_TR(0x5bea41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bee91;}}
}
B5bea47:L5bea47:{c.instructions+=16;NFSU2_TR(0x5bea47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea48:{NFSU2_TR(0x5bea48);
__builtin_memmove((R+24),gp(0x783004),4);
}
B5bea4e:{NFSU2_TR(0x5bea4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea4f:{NFSU2_TR(0x5bea4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bea53:{NFSU2_TR(0x5bea53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea54:{NFSU2_TR(0x5bea54);
u8 U[4];
w4(U+0,u32(0x870cb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea59:{NFSU2_TR(0x5bea59);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bea5d:{NFSU2_TR(0x5bea5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea5e:{NFSU2_TR(0x5bea5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea5f:{NFSU2_TR(0x5bea5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bea63:{NFSU2_TR(0x5bea63);
u8 U[4];
w4(U+0,u32(0x7a38c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea68:{NFSU2_TR(0x5bea68);
w4(R+28,u32(0x4ull));
}
B5bea6d:{NFSU2_TR(0x5bea6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea6e:{NFSU2_TR(0x5bea6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bea72:{NFSU2_TR(0x5bea72);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bea76:{NFSU2_TR(0x5bea76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bea78ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bea78:L5bea78:{c.instructions+=12;NFSU2_TR(0x5bea78);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bea7c:{NFSU2_TR(0x5bea7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bea80:{NFSU2_TR(0x5bea80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea81:{NFSU2_TR(0x5bea81);
u8 U[4];
w4(U+0,u32(0x870cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea86:{NFSU2_TR(0x5bea86);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bea8a:{NFSU2_TR(0x5bea8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea8b:{NFSU2_TR(0x5bea8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea8d:{NFSU2_TR(0x5bea8d);
u8 U[4];
w4(U+0,u32(0x7a38bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea92:{NFSU2_TR(0x5bea92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bea93:{NFSU2_TR(0x5bea93);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bea97:{NFSU2_TR(0x5bea97);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bea9b:{NFSU2_TR(0x5bea9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bea9dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bea9d:L5bea9d:{c.instructions+=12;NFSU2_TR(0x5bea9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beaa1:{NFSU2_TR(0x5beaa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beaa5:{NFSU2_TR(0x5beaa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beaa6:{NFSU2_TR(0x5beaa6);
u8 U[4];
w4(U+0,u32(0x870cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beaab:{NFSU2_TR(0x5beaab);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beaaf:{NFSU2_TR(0x5beaaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beab0:{NFSU2_TR(0x5beab0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beab2:{NFSU2_TR(0x5beab2);
u8 U[4];
w4(U+0,u32(0x7a38a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beab7:{NFSU2_TR(0x5beab7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beab8:{NFSU2_TR(0x5beab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beabc:{NFSU2_TR(0x5beabc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beac0:{NFSU2_TR(0x5beac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beac2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beac2:L5beac2:{c.instructions+=12;NFSU2_TR(0x5beac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beac6:{NFSU2_TR(0x5beac6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beaca:{NFSU2_TR(0x5beaca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beacb:{NFSU2_TR(0x5beacb);
u8 U[4];
w4(U+0,u32(0x870cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bead0:{NFSU2_TR(0x5bead0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bead4:{NFSU2_TR(0x5bead4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bead5:{NFSU2_TR(0x5bead5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bead7:{NFSU2_TR(0x5bead7);
u8 U[4];
w4(U+0,u32(0x7a3880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beadc:{NFSU2_TR(0x5beadc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beadd:{NFSU2_TR(0x5beadd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beae1:{NFSU2_TR(0x5beae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beae5:{NFSU2_TR(0x5beae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beae7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beae7:L5beae7:{c.instructions+=12;NFSU2_TR(0x5beae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beaeb:{NFSU2_TR(0x5beaeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beaef:{NFSU2_TR(0x5beaef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beaf0:{NFSU2_TR(0x5beaf0);
u8 U[4];
w4(U+0,u32(0x870cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beaf5:{NFSU2_TR(0x5beaf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beaf9:{NFSU2_TR(0x5beaf9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beafa:{NFSU2_TR(0x5beafa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beafc:{NFSU2_TR(0x5beafc);
u8 U[4];
w4(U+0,u32(0x7a386cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb01:{NFSU2_TR(0x5beb01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb02:{NFSU2_TR(0x5beb02);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb06:{NFSU2_TR(0x5beb06);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb0a:{NFSU2_TR(0x5beb0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beb0cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beb0c:L5beb0c:{c.instructions+=12;NFSU2_TR(0x5beb0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beb10:{NFSU2_TR(0x5beb10);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beb14:{NFSU2_TR(0x5beb14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb15:{NFSU2_TR(0x5beb15);
u8 U[4];
w4(U+0,u32(0x870cc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb1a:{NFSU2_TR(0x5beb1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beb1e:{NFSU2_TR(0x5beb1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb1f:{NFSU2_TR(0x5beb1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb21:{NFSU2_TR(0x5beb21);
u8 U[4];
w4(U+0,u32(0x7a3854ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb26:{NFSU2_TR(0x5beb26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb27:{NFSU2_TR(0x5beb27);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb2b:{NFSU2_TR(0x5beb2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb2f:{NFSU2_TR(0x5beb2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beb31ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beb31:L5beb31:{c.instructions+=12;NFSU2_TR(0x5beb31);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beb35:{NFSU2_TR(0x5beb35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb36:{NFSU2_TR(0x5beb36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb3a:{NFSU2_TR(0x5beb3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb3e:{NFSU2_TR(0x5beb3e);
u8 U[4];
w4(U+0,u32(0x870cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb43:{NFSU2_TR(0x5beb43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beb47:{NFSU2_TR(0x5beb47);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beb4b:{NFSU2_TR(0x5beb4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb4c:{NFSU2_TR(0x5beb4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb4e:{NFSU2_TR(0x5beb4e);
u8 U[4];
w4(U+0,u32(0x7a3840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb53:{NFSU2_TR(0x5beb53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb54:{NFSU2_TR(0x5beb54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beb56ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beb56:L5beb56:{c.instructions+=12;NFSU2_TR(0x5beb56);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beb5a:{NFSU2_TR(0x5beb5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beb5e:{NFSU2_TR(0x5beb5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb5f:{NFSU2_TR(0x5beb5f);
u8 U[4];
w4(U+0,u32(0x870cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb64:{NFSU2_TR(0x5beb64);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beb68:{NFSU2_TR(0x5beb68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb69:{NFSU2_TR(0x5beb69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb6b:{NFSU2_TR(0x5beb6b);
u8 U[4];
w4(U+0,u32(0x7a382cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb70:{NFSU2_TR(0x5beb70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb71:{NFSU2_TR(0x5beb71);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb75:{NFSU2_TR(0x5beb75);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb79:{NFSU2_TR(0x5beb79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beb7bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beb7b:L5beb7b:{c.instructions+=12;NFSU2_TR(0x5beb7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beb7f:{NFSU2_TR(0x5beb7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beb83:{NFSU2_TR(0x5beb83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb84:{NFSU2_TR(0x5beb84);
u8 U[4];
w4(U+0,u32(0x870cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb89:{NFSU2_TR(0x5beb89);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beb8d:{NFSU2_TR(0x5beb8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb8e:{NFSU2_TR(0x5beb8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb90:{NFSU2_TR(0x5beb90);
u8 U[4];
w4(U+0,u32(0x7a381cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb95:{NFSU2_TR(0x5beb95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beb96:{NFSU2_TR(0x5beb96);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb9a:{NFSU2_TR(0x5beb9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beb9e:{NFSU2_TR(0x5beb9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beba0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beba0:L5beba0:{c.instructions+=12;NFSU2_TR(0x5beba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beba4:{NFSU2_TR(0x5beba4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beba8:{NFSU2_TR(0x5beba8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beba9:{NFSU2_TR(0x5beba9);
u8 U[4];
w4(U+0,u32(0x870cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebae:{NFSU2_TR(0x5bebae);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bebb2:{NFSU2_TR(0x5bebb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebb3:{NFSU2_TR(0x5bebb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebb5:{NFSU2_TR(0x5bebb5);
u8 U[4];
w4(U+0,u32(0x7a3804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebba:{NFSU2_TR(0x5bebba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebbb:{NFSU2_TR(0x5bebbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bebbf:{NFSU2_TR(0x5bebbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bebc3:{NFSU2_TR(0x5bebc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bebc5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bebc5:L5bebc5:{c.instructions+=12;NFSU2_TR(0x5bebc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bebc9:{NFSU2_TR(0x5bebc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bebcd:{NFSU2_TR(0x5bebcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebce:{NFSU2_TR(0x5bebce);
u8 U[4];
w4(U+0,u32(0x870cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebd3:{NFSU2_TR(0x5bebd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bebd7:{NFSU2_TR(0x5bebd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebd8:{NFSU2_TR(0x5bebd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebda:{NFSU2_TR(0x5bebda);
u8 U[4];
w4(U+0,u32(0x7a37f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebdf:{NFSU2_TR(0x5bebdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebe0:{NFSU2_TR(0x5bebe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bebe4:{NFSU2_TR(0x5bebe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bebe8:{NFSU2_TR(0x5bebe8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bebeaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bebea:L5bebea:{c.instructions+=12;NFSU2_TR(0x5bebea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bebee:{NFSU2_TR(0x5bebee);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bebf2:{NFSU2_TR(0x5bebf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebf3:{NFSU2_TR(0x5bebf3);
u8 U[4];
w4(U+0,u32(0x870cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebf8:{NFSU2_TR(0x5bebf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bebfc:{NFSU2_TR(0x5bebfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebfd:{NFSU2_TR(0x5bebfd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bebff:{NFSU2_TR(0x5bebff);
u8 U[4];
w4(U+0,u32(0x7a37e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec04:{NFSU2_TR(0x5bec04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec05:{NFSU2_TR(0x5bec05);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec09:{NFSU2_TR(0x5bec09);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec0d:{NFSU2_TR(0x5bec0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bec0full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bec0f:L5bec0f:{c.instructions+=12;NFSU2_TR(0x5bec0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bec13:{NFSU2_TR(0x5bec13);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bec17:{NFSU2_TR(0x5bec17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec18:{NFSU2_TR(0x5bec18);
u8 U[4];
w4(U+0,u32(0x870ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec1d:{NFSU2_TR(0x5bec1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bec21:{NFSU2_TR(0x5bec21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec22:{NFSU2_TR(0x5bec22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec24:{NFSU2_TR(0x5bec24);
u8 U[4];
w4(U+0,u32(0x7a37ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec29:{NFSU2_TR(0x5bec29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec2a:{NFSU2_TR(0x5bec2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec2e:{NFSU2_TR(0x5bec2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec32:{NFSU2_TR(0x5bec32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bec34ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bec34:L5bec34:{c.instructions+=12;NFSU2_TR(0x5bec34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec38:{NFSU2_TR(0x5bec38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec3c:{NFSU2_TR(0x5bec3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bec40:{NFSU2_TR(0x5bec40);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bec44:{NFSU2_TR(0x5bec44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec45:{NFSU2_TR(0x5bec45);
u8 U[4];
w4(U+0,u32(0x870ce4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec4a:{NFSU2_TR(0x5bec4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bec4e:{NFSU2_TR(0x5bec4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec4f:{NFSU2_TR(0x5bec4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec51:{NFSU2_TR(0x5bec51);
u8 U[4];
w4(U+0,u32(0x7a37b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec56:{NFSU2_TR(0x5bec56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec57:{NFSU2_TR(0x5bec57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bec59ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bec59:L5bec59:{c.instructions+=12;NFSU2_TR(0x5bec59);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bec5d:{NFSU2_TR(0x5bec5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bec61:{NFSU2_TR(0x5bec61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec62:{NFSU2_TR(0x5bec62);
u8 U[4];
w4(U+0,u32(0x870ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec67:{NFSU2_TR(0x5bec67);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bec6b:{NFSU2_TR(0x5bec6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec6c:{NFSU2_TR(0x5bec6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec6e:{NFSU2_TR(0x5bec6e);
u8 U[4];
w4(U+0,u32(0x7a37a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec73:{NFSU2_TR(0x5bec73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec74:{NFSU2_TR(0x5bec74);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec78:{NFSU2_TR(0x5bec78);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec7c:{NFSU2_TR(0x5bec7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bec7eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bec7e:L5bec7e:{c.instructions+=12;NFSU2_TR(0x5bec7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bec82:{NFSU2_TR(0x5bec82);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bec86:{NFSU2_TR(0x5bec86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec87:{NFSU2_TR(0x5bec87);
u8 U[4];
w4(U+0,u32(0x870cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec8c:{NFSU2_TR(0x5bec8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bec90:{NFSU2_TR(0x5bec90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec91:{NFSU2_TR(0x5bec91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec93:{NFSU2_TR(0x5bec93);
u8 U[4];
w4(U+0,u32(0x7a3788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec98:{NFSU2_TR(0x5bec98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bec99:{NFSU2_TR(0x5bec99);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bec9d:{NFSU2_TR(0x5bec9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beca1:{NFSU2_TR(0x5beca1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beca3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beca3:L5beca3:{c.instructions+=12;NFSU2_TR(0x5beca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beca7:{NFSU2_TR(0x5beca7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5becab:{NFSU2_TR(0x5becab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becac:{NFSU2_TR(0x5becac);
u8 U[4];
w4(U+0,u32(0x870cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becb1:{NFSU2_TR(0x5becb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5becb5:{NFSU2_TR(0x5becb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becb6:{NFSU2_TR(0x5becb6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becb8:{NFSU2_TR(0x5becb8);
u8 U[4];
w4(U+0,u32(0x7a3770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becbd:{NFSU2_TR(0x5becbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becbe:{NFSU2_TR(0x5becbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5becc2:{NFSU2_TR(0x5becc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5becc6:{NFSU2_TR(0x5becc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5becc8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5becc8:L5becc8:{c.instructions+=12;NFSU2_TR(0x5becc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beccc:{NFSU2_TR(0x5beccc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5becd0:{NFSU2_TR(0x5becd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becd1:{NFSU2_TR(0x5becd1);
u8 U[4];
w4(U+0,u32(0x870cf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becd6:{NFSU2_TR(0x5becd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5becda:{NFSU2_TR(0x5becda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becdb:{NFSU2_TR(0x5becdb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becdd:{NFSU2_TR(0x5becdd);
u8 U[4];
w4(U+0,u32(0x7a3760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bece2:{NFSU2_TR(0x5bece2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bece3:{NFSU2_TR(0x5bece3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bece7:{NFSU2_TR(0x5bece7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beceb:{NFSU2_TR(0x5beceb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5becedull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beced:L5beced:{c.instructions+=12;NFSU2_TR(0x5beced);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5becf1:{NFSU2_TR(0x5becf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5becf5:{NFSU2_TR(0x5becf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becf6:{NFSU2_TR(0x5becf6);
u8 U[4];
w4(U+0,u32(0x870cf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5becfb:{NFSU2_TR(0x5becfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5becff:{NFSU2_TR(0x5becff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed00:{NFSU2_TR(0x5bed00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed02:{NFSU2_TR(0x5bed02);
u8 U[4];
w4(U+0,u32(0x7a3750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed07:{NFSU2_TR(0x5bed07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed08:{NFSU2_TR(0x5bed08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed0c:{NFSU2_TR(0x5bed0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed10:{NFSU2_TR(0x5bed10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bed12ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bed12:L5bed12:{c.instructions+=12;NFSU2_TR(0x5bed12);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bed16:{NFSU2_TR(0x5bed16);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bed1a:{NFSU2_TR(0x5bed1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed1b:{NFSU2_TR(0x5bed1b);
u8 U[4];
w4(U+0,u32(0x870cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed20:{NFSU2_TR(0x5bed20);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bed24:{NFSU2_TR(0x5bed24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed25:{NFSU2_TR(0x5bed25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed27:{NFSU2_TR(0x5bed27);
u8 U[4];
w4(U+0,u32(0x7a373cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed2c:{NFSU2_TR(0x5bed2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed30:{NFSU2_TR(0x5bed30);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed34:{NFSU2_TR(0x5bed34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed35:{NFSU2_TR(0x5bed35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bed37ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bed37:L5bed37:{c.instructions+=12;NFSU2_TR(0x5bed37);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bed3b:{NFSU2_TR(0x5bed3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bed3f:{NFSU2_TR(0x5bed3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed40:{NFSU2_TR(0x5bed40);
u8 U[4];
w4(U+0,u32(0x870d00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed45:{NFSU2_TR(0x5bed45);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bed49:{NFSU2_TR(0x5bed49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed4a:{NFSU2_TR(0x5bed4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed4c:{NFSU2_TR(0x5bed4c);
u8 U[4];
w4(U+0,u32(0x7a3724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed51:{NFSU2_TR(0x5bed51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed52:{NFSU2_TR(0x5bed52);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed56:{NFSU2_TR(0x5bed56);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed5a:{NFSU2_TR(0x5bed5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bed5cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bed5c:L5bed5c:{c.instructions+=12;NFSU2_TR(0x5bed5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bed60:{NFSU2_TR(0x5bed60);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bed64:{NFSU2_TR(0x5bed64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed65:{NFSU2_TR(0x5bed65);
u8 U[4];
w4(U+0,u32(0x870d04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed6a:{NFSU2_TR(0x5bed6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bed6e:{NFSU2_TR(0x5bed6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed6f:{NFSU2_TR(0x5bed6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed71:{NFSU2_TR(0x5bed71);
u8 U[4];
w4(U+0,u32(0x7a3714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed76:{NFSU2_TR(0x5bed76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed77:{NFSU2_TR(0x5bed77);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed7b:{NFSU2_TR(0x5bed7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bed7f:{NFSU2_TR(0x5bed7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bed81ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bed81:L5bed81:{c.instructions+=12;NFSU2_TR(0x5bed81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bed85:{NFSU2_TR(0x5bed85);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bed89:{NFSU2_TR(0x5bed89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed8a:{NFSU2_TR(0x5bed8a);
u8 U[4];
w4(U+0,u32(0x870d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed8f:{NFSU2_TR(0x5bed8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bed93:{NFSU2_TR(0x5bed93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed94:{NFSU2_TR(0x5bed94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed96:{NFSU2_TR(0x5bed96);
u8 U[4];
w4(U+0,u32(0x7a3708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed9b:{NFSU2_TR(0x5bed9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bed9c:{NFSU2_TR(0x5bed9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beda0:{NFSU2_TR(0x5beda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5beda4:{NFSU2_TR(0x5beda4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beda6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beda6:L5beda6:{c.instructions+=12;NFSU2_TR(0x5beda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bedaa:{NFSU2_TR(0x5bedaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bedae:{NFSU2_TR(0x5bedae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedaf:{NFSU2_TR(0x5bedaf);
u8 U[4];
w4(U+0,u32(0x870d0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedb4:{NFSU2_TR(0x5bedb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bedb8:{NFSU2_TR(0x5bedb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedb9:{NFSU2_TR(0x5bedb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedbb:{NFSU2_TR(0x5bedbb);
u8 U[4];
w4(U+0,u32(0x7a36f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedc0:{NFSU2_TR(0x5bedc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedc1:{NFSU2_TR(0x5bedc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bedc5:{NFSU2_TR(0x5bedc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bedc9:{NFSU2_TR(0x5bedc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bedcbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bedcb:L5bedcb:{c.instructions+=12;NFSU2_TR(0x5bedcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bedcf:{NFSU2_TR(0x5bedcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bedd3:{NFSU2_TR(0x5bedd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedd4:{NFSU2_TR(0x5bedd4);
u8 U[4];
w4(U+0,u32(0x870d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedd9:{NFSU2_TR(0x5bedd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beddd:{NFSU2_TR(0x5beddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedde:{NFSU2_TR(0x5bedde);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bede0:{NFSU2_TR(0x5bede0);
u8 U[4];
w4(U+0,u32(0x7a36e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bede5:{NFSU2_TR(0x5bede5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bede6:{NFSU2_TR(0x5bede6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bedea:{NFSU2_TR(0x5bedea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bedee:{NFSU2_TR(0x5bedee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bedf0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bedf0:L5bedf0:{c.instructions+=12;NFSU2_TR(0x5bedf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bedf4:{NFSU2_TR(0x5bedf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bedf8:{NFSU2_TR(0x5bedf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedf9:{NFSU2_TR(0x5bedf9);
u8 U[4];
w4(U+0,u32(0x870d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bedfe:{NFSU2_TR(0x5bedfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bee02:{NFSU2_TR(0x5bee02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee03:{NFSU2_TR(0x5bee03);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee05:{NFSU2_TR(0x5bee05);
u8 U[4];
w4(U+0,u32(0x7a36d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee0a:{NFSU2_TR(0x5bee0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee0b:{NFSU2_TR(0x5bee0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee0f:{NFSU2_TR(0x5bee0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee13:{NFSU2_TR(0x5bee13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bee15ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bee15:L5bee15:{c.instructions+=12;NFSU2_TR(0x5bee15);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bee19:{NFSU2_TR(0x5bee19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee1a:{NFSU2_TR(0x5bee1a);
u8 U[4];
w4(U+0,u32(0x870d1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee1f:{NFSU2_TR(0x5bee1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bee23:{NFSU2_TR(0x5bee23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee24:{NFSU2_TR(0x5bee24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee28:{NFSU2_TR(0x5bee28);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee2c:{NFSU2_TR(0x5bee2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee2e:{NFSU2_TR(0x5bee2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bee32:{NFSU2_TR(0x5bee32);
u8 U[4];
w4(U+0,u32(0x7a36bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee37:{NFSU2_TR(0x5bee37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee38:{NFSU2_TR(0x5bee38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bee3aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bee3a:L5bee3a:{c.instructions+=12;NFSU2_TR(0x5bee3a);
if(mod_hook_table[8]){SPILL();c.pc=0x5bee3au;mod_hook_table[8](c);SPILL();if(c.pc!=0x5bee3au){TAIL_DYNAMIC(c.pc);}}
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bee3e:{NFSU2_TR(0x5bee3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bee42:{NFSU2_TR(0x5bee42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee43:{NFSU2_TR(0x5bee43);
u8 U[4];
w4(U+0,u32(0x87099cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee48:{NFSU2_TR(0x5bee48);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bee4c:{NFSU2_TR(0x5bee4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee4d:{NFSU2_TR(0x5bee4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee4f:{NFSU2_TR(0x5bee4f);
u8 U[4];
w4(U+0,u32(0x7a36a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee54:{NFSU2_TR(0x5bee54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee55:{NFSU2_TR(0x5bee55);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee59:{NFSU2_TR(0x5bee59);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee5d:{NFSU2_TR(0x5bee5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bee5full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bee5f:L5bee5f:{c.instructions+=12;NFSU2_TR(0x5bee5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bee63:{NFSU2_TR(0x5bee63);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bee67:{NFSU2_TR(0x5bee67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee68:{NFSU2_TR(0x5bee68);
u8 U[4];
w4(U+0,u32(0x870d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee6d:{NFSU2_TR(0x5bee6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bee71:{NFSU2_TR(0x5bee71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee72:{NFSU2_TR(0x5bee72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee74:{NFSU2_TR(0x5bee74);
u8 U[4];
w4(U+0,u32(0x7a369cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee79:{NFSU2_TR(0x5bee79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee7a:{NFSU2_TR(0x5bee7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee7e:{NFSU2_TR(0x5bee7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bee82:{NFSU2_TR(0x5bee82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bee84ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bee84:L5bee84:{c.instructions+=3;NFSU2_TR(0x5bee84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bee88:{NFSU2_TR(0x5bee88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bee89:{NFSU2_TR(0x5bee89);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bee8full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bee8f:L5bee8f:{c.instructions+=2;NFSU2_TR(0x5bee8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bee90:{NFSU2_TR(0x5bee90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bee91:L5bee91:{c.instructions+=2;NFSU2_TR(0x5bee91);
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
B5bee94:{NFSU2_TR(0x5bee94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5beea0:L5beea0:{c.instructions+=10;NFSU2_TR(0x5beea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beea1:{NFSU2_TR(0x5beea1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beea2:{NFSU2_TR(0x5beea2);
__builtin_memmove((R+24),gp(0x783008),4);
}
B5beea8:{NFSU2_TR(0x5beea8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5beeac:{NFSU2_TR(0x5beeac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beead:{NFSU2_TR(0x5beead);
u8 U[4];
w4(U+0,u32(0xf003full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beeb2:{NFSU2_TR(0x5beeb2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beeb4:{NFSU2_TR(0x5beeb4);
u8 U[4];
w4(U+0,u32(0x7a30e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beeb9:{NFSU2_TR(0x5beeb9);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beebe:{NFSU2_TR(0x5beebe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beec0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beec0:L5beec0:{c.instructions+=2;NFSU2_TR(0x5beec0);
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
B5beec2:{NFSU2_TR(0x5beec2);
if(r1(R+518)){{goto L5beef9;}}
}
B5beec4:L5beec4:{c.instructions+=5;NFSU2_TR(0x5beec4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5beec8:{NFSU2_TR(0x5beec8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beec9:{NFSU2_TR(0x5beec9);
u8 U[4];
w4(U+0,u32(0x7a30e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beece:{NFSU2_TR(0x5beece);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beed3:{NFSU2_TR(0x5beed3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783010),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beed9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beed9:L5beed9:{c.instructions+=7;NFSU2_TR(0x5beed9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5beedd:{NFSU2_TR(0x5beedd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beede:{NFSU2_TR(0x5beede);
u8 U[4];
w4(U+0,u32(0xf003full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beee3:{NFSU2_TR(0x5beee3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beee5:{NFSU2_TR(0x5beee5);
u8 U[4];
w4(U+0,u32(0x7a30e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beeea:{NFSU2_TR(0x5beeea);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beeef:{NFSU2_TR(0x5beeef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beef1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beef1:L5beef1:{c.instructions+=2;NFSU2_TR(0x5beef1);
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
B5beef3:{NFSU2_TR(0x5beef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5bf1a5u,5bf);}
}
B5beef9:L5beef9:{c.instructions+=9;NFSU2_TR(0x5beef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5beefd:{NFSU2_TR(0x5beefd);
__builtin_memmove((R+24),gp(0x783000),4);
}
B5bef03:{NFSU2_TR(0x5bef03);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef05:{NFSU2_TR(0x5bef05);
u8 U[4];
w4(U+0,u32(0x870cb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef0a:{NFSU2_TR(0x5bef0a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef0c:{NFSU2_TR(0x5bef0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef0e:{NFSU2_TR(0x5bef0e);
u8 U[4];
w4(U+0,u32(0x7a38c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef13:{NFSU2_TR(0x5bef13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef14:{NFSU2_TR(0x5bef14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bef16ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bef16:L5bef16:{c.instructions+=8;NFSU2_TR(0x5bef16);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bef1a:{NFSU2_TR(0x5bef1a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef1c:{NFSU2_TR(0x5bef1c);
u8 U[4];
w4(U+0,u32(0x870cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef21:{NFSU2_TR(0x5bef21);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef23:{NFSU2_TR(0x5bef23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef25:{NFSU2_TR(0x5bef25);
u8 U[4];
w4(U+0,u32(0x7a38bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef2a:{NFSU2_TR(0x5bef2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef2b:{NFSU2_TR(0x5bef2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bef2dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bef2d:L5bef2d:{c.instructions+=8;NFSU2_TR(0x5bef2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bef31:{NFSU2_TR(0x5bef31);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef33:{NFSU2_TR(0x5bef33);
u8 U[4];
w4(U+0,u32(0x870cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef38:{NFSU2_TR(0x5bef38);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef3a:{NFSU2_TR(0x5bef3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef3c:{NFSU2_TR(0x5bef3c);
u8 U[4];
w4(U+0,u32(0x7a38a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef41:{NFSU2_TR(0x5bef41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef42:{NFSU2_TR(0x5bef42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bef44ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bef44:L5bef44:{c.instructions+=8;NFSU2_TR(0x5bef44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bef48:{NFSU2_TR(0x5bef48);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef4a:{NFSU2_TR(0x5bef4a);
u8 U[4];
w4(U+0,u32(0x870cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef4f:{NFSU2_TR(0x5bef4f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef51:{NFSU2_TR(0x5bef51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef53:{NFSU2_TR(0x5bef53);
u8 U[4];
w4(U+0,u32(0x7a3880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef58:{NFSU2_TR(0x5bef58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef59:{NFSU2_TR(0x5bef59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bef5bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bef5b:L5bef5b:{c.instructions+=8;NFSU2_TR(0x5bef5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bef5f:{NFSU2_TR(0x5bef5f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef61:{NFSU2_TR(0x5bef61);
u8 U[4];
w4(U+0,u32(0x870cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef66:{NFSU2_TR(0x5bef66);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef68:{NFSU2_TR(0x5bef68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef6a:{NFSU2_TR(0x5bef6a);
u8 U[4];
w4(U+0,u32(0x7a386cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef6f:{NFSU2_TR(0x5bef6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef70:{NFSU2_TR(0x5bef70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bef72ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bef72:L5bef72:{c.instructions+=8;NFSU2_TR(0x5bef72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bef76:{NFSU2_TR(0x5bef76);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef78:{NFSU2_TR(0x5bef78);
u8 U[4];
w4(U+0,u32(0x870cc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef7d:{NFSU2_TR(0x5bef7d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef7f:{NFSU2_TR(0x5bef7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef81:{NFSU2_TR(0x5bef81);
u8 U[4];
w4(U+0,u32(0x7a3854ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef86:{NFSU2_TR(0x5bef86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef87:{NFSU2_TR(0x5bef87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bef89ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bef89:L5bef89:{c.instructions+=8;NFSU2_TR(0x5bef89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bef8d:{NFSU2_TR(0x5bef8d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef8f:{NFSU2_TR(0x5bef8f);
u8 U[4];
w4(U+0,u32(0x870cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef94:{NFSU2_TR(0x5bef94);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef96:{NFSU2_TR(0x5bef96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef98:{NFSU2_TR(0x5bef98);
u8 U[4];
w4(U+0,u32(0x7a3840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef9d:{NFSU2_TR(0x5bef9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bef9e:{NFSU2_TR(0x5bef9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5befa0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5befa0:L5befa0:{c.instructions+=8;NFSU2_TR(0x5befa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5befa4:{NFSU2_TR(0x5befa4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befa6:{NFSU2_TR(0x5befa6);
u8 U[4];
w4(U+0,u32(0x870cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befab:{NFSU2_TR(0x5befab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befad:{NFSU2_TR(0x5befad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befaf:{NFSU2_TR(0x5befaf);
u8 U[4];
w4(U+0,u32(0x7a382cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befb4:{NFSU2_TR(0x5befb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befb5:{NFSU2_TR(0x5befb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5befb7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5befb7:L5befb7:{c.instructions+=8;NFSU2_TR(0x5befb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5befbb:{NFSU2_TR(0x5befbb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befbd:{NFSU2_TR(0x5befbd);
u8 U[4];
w4(U+0,u32(0x870cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befc2:{NFSU2_TR(0x5befc2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befc4:{NFSU2_TR(0x5befc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befc6:{NFSU2_TR(0x5befc6);
u8 U[4];
w4(U+0,u32(0x7a381cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befcb:{NFSU2_TR(0x5befcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befcc:{NFSU2_TR(0x5befcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5befceull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5befce:L5befce:{c.instructions+=8;NFSU2_TR(0x5befce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5befd2:{NFSU2_TR(0x5befd2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befd4:{NFSU2_TR(0x5befd4);
u8 U[4];
w4(U+0,u32(0x870cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befd9:{NFSU2_TR(0x5befd9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befdb:{NFSU2_TR(0x5befdb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befdd:{NFSU2_TR(0x5befdd);
u8 U[4];
w4(U+0,u32(0x7a3804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befe2:{NFSU2_TR(0x5befe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befe3:{NFSU2_TR(0x5befe3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5befe5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5befe5:L5befe5:{c.instructions+=8;NFSU2_TR(0x5befe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5befe9:{NFSU2_TR(0x5befe9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5befeb:{NFSU2_TR(0x5befeb);
u8 U[4];
w4(U+0,u32(0x870cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beff0:{NFSU2_TR(0x5beff0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beff2:{NFSU2_TR(0x5beff2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beff4:{NFSU2_TR(0x5beff4);
u8 U[4];
w4(U+0,u32(0x7a37f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beff9:{NFSU2_TR(0x5beff9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5beffa:{NFSU2_TR(0x5beffa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5beffcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5beffc:L5beffc:{c.instructions+=1;NFSU2_TR(0x5beffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x5bf000u,5bf);
}
XIT:NFSU2_TR_EXIT(0x5be,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
