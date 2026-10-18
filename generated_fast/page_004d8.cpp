#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_453(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_492(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4a6(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 page_4d8(Cpu& c){return body_4d8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d8003:goto L4d8003;
case 0x4d8006:c.instructions+=3;goto B4d8006;
case 0x4d8009:c.instructions+=2;goto B4d8009;
case 0x4d800b:c.instructions+=1;goto B4d800b;
case 0x4d800d:goto L4d800d;
case 0x4d800f:c.instructions+=1;goto B4d800f;
case 0x4d8014:goto L4d8014;
case 0x4d8015:c.instructions+=3;goto B4d8015;
case 0x4d8016:c.instructions+=2;goto B4d8016;
case 0x4d8019:c.instructions+=1;goto B4d8019;
case 0x4d8020:goto L4d8020;
case 0x4d8026:c.instructions+=2;goto B4d8026;
case 0x4d8028:c.instructions+=1;goto B4d8028;
case 0x4d802a:goto L4d802a;
case 0x4d802f:goto L4d802f;
case 0x4d8030:goto L4d8030;
case 0x4d8031:c.instructions+=8;goto B4d8031;
case 0x4d8032:c.instructions+=7;goto B4d8032;
case 0x4d8033:c.instructions+=6;goto B4d8033;
case 0x4d8035:c.instructions+=5;goto B4d8035;
case 0x4d803b:c.instructions+=4;goto B4d803b;
case 0x4d803d:c.instructions+=3;goto B4d803d;
case 0x4d803f:c.instructions+=2;goto B4d803f;
case 0x4d8040:c.instructions+=1;goto B4d8040;
case 0x4d8042:goto L4d8042;
case 0x4d8048:c.instructions+=4;goto B4d8048;
case 0x4d8049:c.instructions+=3;goto B4d8049;
case 0x4d804e:c.instructions+=2;goto B4d804e;
case 0x4d8054:c.instructions+=1;goto B4d8054;
case 0x4d8059:goto L4d8059;
case 0x4d805f:c.instructions+=1;goto B4d805f;
case 0x4d8061:goto L4d8061;
case 0x4d8067:c.instructions+=4;goto B4d8067;
case 0x4d8068:c.instructions+=3;goto B4d8068;
case 0x4d806d:c.instructions+=2;goto B4d806d;
case 0x4d8073:c.instructions+=1;goto B4d8073;
case 0x4d8078:goto L4d8078;
case 0x4d807d:c.instructions+=3;goto B4d807d;
case 0x4d807f:c.instructions+=2;goto B4d807f;
case 0x4d8083:c.instructions+=1;goto B4d8083;
case 0x4d8085:goto L4d8085;
case 0x4d808b:c.instructions+=1;goto B4d808b;
case 0x4d808d:goto L4d808d;
case 0x4d808e:c.instructions+=2;goto B4d808e;
case 0x4d8093:c.instructions+=1;goto B4d8093;
case 0x4d8098:goto L4d8098;
case 0x4d809e:c.instructions+=2;goto B4d809e;
case 0x4d80a4:c.instructions+=1;goto B4d80a4;
case 0x4d80a6:goto L4d80a6;
case 0x4d80ab:goto L4d80ab;
case 0x4d80b1:c.instructions+=2;goto B4d80b1;
case 0x4d80b5:c.instructions+=1;goto B4d80b5;
case 0x4d80b7:goto L4d80b7;
case 0x4d80c1:c.instructions+=1;goto B4d80c1;
case 0x4d80c3:goto L4d80c3;
case 0x4d80c5:c.instructions+=5;goto B4d80c5;
case 0x4d80c8:c.instructions+=4;goto B4d80c8;
case 0x4d80ca:c.instructions+=3;goto B4d80ca;
case 0x4d80cc:c.instructions+=2;goto B4d80cc;
case 0x4d80cf:c.instructions+=1;goto B4d80cf;
case 0x4d80d5:goto L4d80d5;
case 0x4d80d9:c.instructions+=2;goto B4d80d9;
case 0x4d80da:c.instructions+=1;goto B4d80da;
case 0x4d80dc:goto L4d80dc;
case 0x4d80e2:c.instructions+=2;goto B4d80e2;
case 0x4d80e4:c.instructions+=1;goto B4d80e4;
case 0x4d80e9:goto L4d80e9;
case 0x4d80eb:c.instructions+=5;goto B4d80eb;
case 0x4d80ed:c.instructions+=4;goto B4d80ed;
case 0x4d80ef:c.instructions+=3;goto B4d80ef;
case 0x4d80f0:c.instructions+=2;goto B4d80f0;
case 0x4d80f2:c.instructions+=1;goto B4d80f2;
case 0x4d80f7:goto L4d80f7;
case 0x4d80f8:c.instructions+=5;goto B4d80f8;
case 0x4d80ff:c.instructions+=4;goto B4d80ff;
case 0x4d8100:c.instructions+=3;goto B4d8100;
case 0x4d8101:c.instructions+=2;goto B4d8101;
case 0x4d8102:c.instructions+=1;goto B4d8102;
case 0x4d8105:goto L4d8105;
case 0x4d810b:c.instructions+=3;goto B4d810b;
case 0x4d810d:c.instructions+=2;goto B4d810d;
case 0x4d8113:c.instructions+=1;goto B4d8113;
case 0x4d8118:goto L4d8118;
case 0x4d811a:c.instructions+=5;goto B4d811a;
case 0x4d811c:c.instructions+=4;goto B4d811c;
case 0x4d811e:c.instructions+=3;goto B4d811e;
case 0x4d811f:c.instructions+=2;goto B4d811f;
case 0x4d8121:c.instructions+=1;goto B4d8121;
case 0x4d8126:goto L4d8126;
case 0x4d812c:c.instructions+=3;goto B4d812c;
case 0x4d8136:c.instructions+=2;goto B4d8136;
case 0x4d813b:c.instructions+=1;goto B4d813b;
case 0x4d813d:goto L4d813d;
case 0x4d8142:goto L4d8142;
case 0x4d8145:c.instructions+=1;goto B4d8145;
case 0x4d8147:goto L4d8147;
case 0x4d814a:goto L4d814a;
case 0x4d814b:c.instructions+=2;goto B4d814b;
case 0x4d814d:c.instructions+=1;goto B4d814d;
case 0x4d8152:goto L4d8152;
case 0x4d8153:c.instructions+=4;goto B4d8153;
case 0x4d8154:c.instructions+=3;goto B4d8154;
case 0x4d8155:c.instructions+=2;goto B4d8155;
case 0x4d815a:c.instructions+=1;goto B4d815a;
case 0x4d815f:goto L4d815f;
case 0x4d8160:c.instructions+=4;goto B4d8160;
case 0x4d8161:c.instructions+=3;goto B4d8161;
case 0x4d8166:c.instructions+=2;goto B4d8166;
case 0x4d816c:c.instructions+=1;goto B4d816c;
case 0x4d8171:goto L4d8171;
case 0x4d8172:c.instructions+=4;goto B4d8172;
case 0x4d8173:c.instructions+=3;goto B4d8173;
case 0x4d8174:c.instructions+=2;goto B4d8174;
case 0x4d8175:c.instructions+=1;goto B4d8175;
case 0x4d8180:goto L4d8180;
case 0x4d8181:c.instructions+=6;goto B4d8181;
case 0x4d8182:c.instructions+=5;goto B4d8182;
case 0x4d8184:c.instructions+=4;goto B4d8184;
case 0x4d818a:c.instructions+=3;goto B4d818a;
case 0x4d818c:c.instructions+=2;goto B4d818c;
case 0x4d818e:c.instructions+=1;goto B4d818e;
case 0x4d8190:goto L4d8190;
case 0x4d8196:c.instructions+=3;goto B4d8196;
case 0x4d8197:c.instructions+=2;goto B4d8197;
case 0x4d819c:c.instructions+=1;goto B4d819c;
case 0x4d81a1:goto L4d81a1;
case 0x4d81a3:c.instructions+=1;goto B4d81a3;
case 0x4d81a5:goto L4d81a5;
case 0x4d81a6:c.instructions+=5;goto B4d81a6;
case 0x4d81ac:c.instructions+=4;goto B4d81ac;
case 0x4d81b2:c.instructions+=3;goto B4d81b2;
case 0x4d81b3:c.instructions+=2;goto B4d81b3;
case 0x4d81b5:c.instructions+=1;goto B4d81b5;
case 0x4d81ba:goto L4d81ba;
case 0x4d81bc:c.instructions+=5;goto B4d81bc;
case 0x4d81be:c.instructions+=4;goto B4d81be;
case 0x4d81c0:c.instructions+=3;goto B4d81c0;
case 0x4d81c1:c.instructions+=2;goto B4d81c1;
case 0x4d81c3:c.instructions+=1;goto B4d81c3;
case 0x4d81c8:goto L4d81c8;
case 0x4d81ce:c.instructions+=5;goto B4d81ce;
case 0x4d81d4:c.instructions+=4;goto B4d81d4;
case 0x4d81da:c.instructions+=3;goto B4d81da;
case 0x4d81e0:c.instructions+=2;goto B4d81e0;
case 0x4d81ea:c.instructions+=1;goto B4d81ea;
case 0x4d81eb:goto L4d81eb;
case 0x4d81f0:c.instructions+=2;goto B4d81f0;
case 0x4d81f2:c.instructions+=1;goto B4d81f2;
case 0x4d81f4:goto L4d81f4;
case 0x4d81fa:c.instructions+=1;goto B4d81fa;
case 0x4d81fc:goto L4d81fc;
case 0x4d81fd:c.instructions+=2;goto B4d81fd;
case 0x4d8202:c.instructions+=1;goto B4d8202;
case 0x4d8207:goto L4d8207;
case 0x4d820d:c.instructions+=1;goto B4d820d;
case 0x4d8213:goto L4d8213;
case 0x4d8214:c.instructions+=2;goto B4d8214;
case 0x4d8215:c.instructions+=1;goto B4d8215;
case 0x4d8220:goto L4d8220;
case 0x4d8221:c.instructions+=5;goto B4d8221;
case 0x4d8223:c.instructions+=4;goto B4d8223;
case 0x4d8229:c.instructions+=3;goto B4d8229;
case 0x4d822b:c.instructions+=2;goto B4d822b;
case 0x4d822c:c.instructions+=1;goto B4d822c;
case 0x4d822e:goto L4d822e;
case 0x4d8231:c.instructions+=3;goto B4d8231;
case 0x4d8232:c.instructions+=2;goto B4d8232;
case 0x4d8238:c.instructions+=1;goto B4d8238;
case 0x4d823d:goto L4d823d;
case 0x4d8243:c.instructions+=2;goto B4d8243;
case 0x4d8249:c.instructions+=1;goto B4d8249;
case 0x4d8250:goto L4d8250;
case 0x4d8256:c.instructions+=4;goto B4d8256;
case 0x4d8259:c.instructions+=3;goto B4d8259;
case 0x4d825a:c.instructions+=2;goto B4d825a;
case 0x4d825c:c.instructions+=1;goto B4d825c;
case 0x4d8261:goto L4d8261;
case 0x4d8263:c.instructions+=5;goto B4d8263;
case 0x4d8265:c.instructions+=4;goto B4d8265;
case 0x4d8267:c.instructions+=3;goto B4d8267;
case 0x4d8269:c.instructions+=2;goto B4d8269;
case 0x4d826b:c.instructions+=1;goto B4d826b;
case 0x4d8270:goto L4d8270;
case 0x4d8276:c.instructions+=11;goto B4d8276;
case 0x4d827c:c.instructions+=10;goto B4d827c;
case 0x4d8282:c.instructions+=9;goto B4d8282;
case 0x4d8284:c.instructions+=8;goto B4d8284;
case 0x4d8286:c.instructions+=7;goto B4d8286;
case 0x4d8289:c.instructions+=6;goto B4d8289;
case 0x4d828a:c.instructions+=5;goto B4d828a;
case 0x4d8294:c.instructions+=4;goto B4d8294;
case 0x4d829e:c.instructions+=3;goto B4d829e;
case 0x4d82a4:c.instructions+=2;goto B4d82a4;
case 0x4d82a5:c.instructions+=1;goto B4d82a5;
case 0x4d82b0:goto L4d82b0;
case 0x4d82b1:c.instructions+=2;goto B4d82b1;
case 0x4d82b3:c.instructions+=1;goto B4d82b3;
case 0x4d82b8:goto L4d82b8;
case 0x4d82bd:c.instructions+=1;goto B4d82bd;
case 0x4d82bf:goto L4d82bf;
case 0x4d82c0:c.instructions+=1;goto B4d82c0;
case 0x4d82c5:goto L4d82c5;
case 0x4d82c8:goto L4d82c8;
case 0x4d82ca:c.instructions+=2;goto B4d82ca;
case 0x4d82cb:c.instructions+=1;goto B4d82cb;
case 0x4d82d0:goto L4d82d0;
case 0x4d82d3:c.instructions+=6;goto B4d82d3;
case 0x4d82d4:c.instructions+=5;goto B4d82d4;
case 0x4d82d5:c.instructions+=4;goto B4d82d5;
case 0x4d82d7:c.instructions+=3;goto B4d82d7;
case 0x4d82dd:c.instructions+=2;goto B4d82dd;
case 0x4d82de:c.instructions+=1;goto B4d82de;
case 0x4d82e3:goto L4d82e3;
case 0x4d82e9:c.instructions+=6;goto B4d82e9;
case 0x4d82eb:c.instructions+=5;goto B4d82eb;
case 0x4d82ec:c.instructions+=4;goto B4d82ec;
case 0x4d82f0:c.instructions+=3;goto B4d82f0;
case 0x4d82f4:c.instructions+=2;goto B4d82f4;
case 0x4d82f9:c.instructions+=1;goto B4d82f9;
case 0x4d82ff:goto L4d82ff;
case 0x4d8300:c.instructions+=1;goto B4d8300;
case 0x4d8306:goto L4d8306;
case 0x4d8307:c.instructions+=1;goto B4d8307;
case 0x4d830d:goto L4d830d;
case 0x4d8313:c.instructions+=8;goto B4d8313;
case 0x4d8318:c.instructions+=7;goto B4d8318;
case 0x4d831c:c.instructions+=6;goto B4d831c;
case 0x4d8320:c.instructions+=5;goto B4d8320;
case 0x4d8324:c.instructions+=4;goto B4d8324;
case 0x4d8328:c.instructions+=3;goto B4d8328;
case 0x4d832c:c.instructions+=2;goto B4d832c;
case 0x4d8330:c.instructions+=1;goto B4d8330;
case 0x4d8332:goto L4d8332;
case 0x4d8338:c.instructions+=9;goto B4d8338;
case 0x4d8342:c.instructions+=8;goto B4d8342;
case 0x4d8347:c.instructions+=7;goto B4d8347;
case 0x4d834d:c.instructions+=6;goto B4d834d;
case 0x4d8353:c.instructions+=5;goto B4d8353;
case 0x4d8355:c.instructions+=4;goto B4d8355;
case 0x4d835b:c.instructions+=3;goto B4d835b;
case 0x4d8361:c.instructions+=2;goto B4d8361;
case 0x4d8363:c.instructions+=1;goto B4d8363;
case 0x4d8365:goto L4d8365;
case 0x4d8367:c.instructions+=1;goto B4d8367;
case 0x4d8369:goto L4d8369;
case 0x4d836b:goto L4d836b;
case 0x4d8370:goto L4d8370;
case 0x4d8376:c.instructions+=12;goto B4d8376;
case 0x4d837c:c.instructions+=11;goto B4d837c;
case 0x4d837f:c.instructions+=10;goto B4d837f;
case 0x4d8382:c.instructions+=9;goto B4d8382;
case 0x4d8384:c.instructions+=8;goto B4d8384;
case 0x4d8388:c.instructions+=7;goto B4d8388;
case 0x4d838b:c.instructions+=6;goto B4d838b;
case 0x4d838d:c.instructions+=5;goto B4d838d;
case 0x4d8393:c.instructions+=4;goto B4d8393;
case 0x4d8396:c.instructions+=3;goto B4d8396;
case 0x4d839d:c.instructions+=2;goto B4d839d;
case 0x4d83a3:c.instructions+=1;goto B4d83a3;
case 0x4d83a8:goto L4d83a8;
case 0x4d83ae:c.instructions+=1;goto B4d83ae;
case 0x4d83b4:goto L4d83b4;
case 0x4d83ba:c.instructions+=9;goto B4d83ba;
case 0x4d83c4:c.instructions+=8;goto B4d83c4;
case 0x4d83c9:c.instructions+=7;goto B4d83c9;
case 0x4d83cf:c.instructions+=6;goto B4d83cf;
case 0x4d83d5:c.instructions+=5;goto B4d83d5;
case 0x4d83d7:c.instructions+=4;goto B4d83d7;
case 0x4d83dd:c.instructions+=3;goto B4d83dd;
case 0x4d83e3:c.instructions+=2;goto B4d83e3;
case 0x4d83e5:c.instructions+=1;goto B4d83e5;
case 0x4d83e7:goto L4d83e7;
case 0x4d83e9:c.instructions+=1;goto B4d83e9;
case 0x4d83eb:goto L4d83eb;
case 0x4d83ed:goto L4d83ed;
case 0x4d83f2:goto L4d83f2;
case 0x4d83f8:c.instructions+=18;goto B4d83f8;
case 0x4d83fe:c.instructions+=17;goto B4d83fe;
case 0x4d8401:c.instructions+=16;goto B4d8401;
case 0x4d8403:c.instructions+=15;goto B4d8403;
case 0x4d8407:c.instructions+=14;goto B4d8407;
case 0x4d840a:c.instructions+=13;goto B4d840a;
case 0x4d840c:c.instructions+=12;goto B4d840c;
case 0x4d8412:c.instructions+=11;goto B4d8412;
case 0x4d8415:c.instructions+=10;goto B4d8415;
case 0x4d8419:c.instructions+=9;goto B4d8419;
case 0x4d841c:c.instructions+=8;goto B4d841c;
case 0x4d8420:c.instructions+=7;goto B4d8420;
case 0x4d8423:c.instructions+=6;goto B4d8423;
case 0x4d8426:c.instructions+=5;goto B4d8426;
case 0x4d8428:c.instructions+=4;goto B4d8428;
case 0x4d842b:c.instructions+=3;goto B4d842b;
case 0x4d8432:c.instructions+=2;goto B4d8432;
case 0x4d8438:c.instructions+=1;goto B4d8438;
case 0x4d843d:goto L4d843d;
case 0x4d8443:c.instructions+=10;goto B4d8443;
case 0x4d844b:c.instructions+=9;goto B4d844b;
case 0x4d8451:c.instructions+=8;goto B4d8451;
case 0x4d8455:c.instructions+=7;goto B4d8455;
case 0x4d845b:c.instructions+=6;goto B4d845b;
case 0x4d845f:c.instructions+=5;goto B4d845f;
case 0x4d8465:c.instructions+=4;goto B4d8465;
case 0x4d846b:c.instructions+=3;goto B4d846b;
case 0x4d846d:c.instructions+=2;goto B4d846d;
case 0x4d8470:c.instructions+=1;goto B4d8470;
case 0x4d8472:goto L4d8472;
case 0x4d8476:c.instructions+=4;goto B4d8476;
case 0x4d847c:c.instructions+=3;goto B4d847c;
case 0x4d847e:c.instructions+=2;goto B4d847e;
case 0x4d8481:c.instructions+=1;goto B4d8481;
case 0x4d8483:goto L4d8483;
case 0x4d8487:c.instructions+=3;goto B4d8487;
case 0x4d848d:c.instructions+=2;goto B4d848d;
case 0x4d8491:c.instructions+=1;goto B4d8491;
case 0x4d8496:goto L4d8496;
case 0x4d849c:c.instructions+=16;goto B4d849c;
case 0x4d84a2:c.instructions+=15;goto B4d84a2;
case 0x4d84a8:c.instructions+=14;goto B4d84a8;
case 0x4d84ae:c.instructions+=13;goto B4d84ae;
case 0x4d84b0:c.instructions+=12;goto B4d84b0;
case 0x4d84b2:c.instructions+=11;goto B4d84b2;
case 0x4d84b5:c.instructions+=10;goto B4d84b5;
case 0x4d84b9:c.instructions+=9;goto B4d84b9;
case 0x4d84bf:c.instructions+=8;goto B4d84bf;
case 0x4d84c6:c.instructions+=7;goto B4d84c6;
case 0x4d84c9:c.instructions+=6;goto B4d84c9;
case 0x4d84cb:c.instructions+=5;goto B4d84cb;
case 0x4d84cf:c.instructions+=4;goto B4d84cf;
case 0x4d84d5:c.instructions+=3;goto B4d84d5;
case 0x4d84db:c.instructions+=2;goto B4d84db;
case 0x4d84dd:c.instructions+=1;goto B4d84dd;
case 0x4d84e3:goto L4d84e3;
case 0x4d84e9:c.instructions+=1;goto B4d84e9;
case 0x4d84ef:goto L4d84ef;
case 0x4d84f2:c.instructions+=13;goto B4d84f2;
case 0x4d84f6:c.instructions+=12;goto B4d84f6;
case 0x4d84f9:c.instructions+=11;goto B4d84f9;
case 0x4d84ff:c.instructions+=10;goto B4d84ff;
case 0x4d8505:c.instructions+=9;goto B4d8505;
case 0x4d850c:c.instructions+=8;goto B4d850c;
case 0x4d850e:c.instructions+=7;goto B4d850e;
case 0x4d8514:c.instructions+=6;goto B4d8514;
case 0x4d8516:c.instructions+=5;goto B4d8516;
case 0x4d8519:c.instructions+=4;goto B4d8519;
case 0x4d851c:c.instructions+=3;goto B4d851c;
case 0x4d851e:c.instructions+=2;goto B4d851e;
case 0x4d8524:c.instructions+=1;goto B4d8524;
case 0x4d8526:goto L4d8526;
case 0x4d8529:c.instructions+=22;goto B4d8529;
case 0x4d852c:c.instructions+=21;goto B4d852c;
case 0x4d8531:c.instructions+=20;goto B4d8531;
case 0x4d8534:c.instructions+=19;goto B4d8534;
case 0x4d8537:c.instructions+=18;goto B4d8537;
case 0x4d8538:c.instructions+=17;goto B4d8538;
case 0x4d853b:c.instructions+=16;goto B4d853b;
case 0x4d853c:c.instructions+=15;goto B4d853c;
case 0x4d853f:c.instructions+=14;goto B4d853f;
case 0x4d8540:c.instructions+=13;goto B4d8540;
case 0x4d8543:c.instructions+=12;goto B4d8543;
case 0x4d8544:c.instructions+=11;goto B4d8544;
case 0x4d8547:c.instructions+=10;goto B4d8547;
case 0x4d8548:c.instructions+=9;goto B4d8548;
case 0x4d854b:c.instructions+=8;goto B4d854b;
case 0x4d854c:c.instructions+=7;goto B4d854c;
case 0x4d854f:c.instructions+=6;goto B4d854f;
case 0x4d8552:c.instructions+=5;goto B4d8552;
case 0x4d8553:c.instructions+=4;goto B4d8553;
case 0x4d8559:c.instructions+=3;goto B4d8559;
case 0x4d855a:c.instructions+=2;goto B4d855a;
case 0x4d855b:c.instructions+=1;goto B4d855b;
case 0x4d8560:goto L4d8560;
case 0x4d8566:c.instructions+=8;goto B4d8566;
case 0x4d8568:c.instructions+=7;goto B4d8568;
case 0x4d856b:c.instructions+=6;goto B4d856b;
case 0x4d856e:c.instructions+=5;goto B4d856e;
case 0x4d8571:c.instructions+=4;goto B4d8571;
case 0x4d8574:c.instructions+=3;goto B4d8574;
case 0x4d8579:c.instructions+=2;goto B4d8579;
case 0x4d857f:c.instructions+=1;goto B4d857f;
case 0x4d8581:goto L4d8581;
case 0x4d8583:c.instructions+=1;goto B4d8583;
case 0x4d8585:goto L4d8585;
case 0x4d8588:c.instructions+=3;goto B4d8588;
case 0x4d858b:c.instructions+=2;goto B4d858b;
case 0x4d8591:c.instructions+=1;goto B4d8591;
case 0x4d8593:goto L4d8593;
case 0x4d8596:c.instructions+=3;goto B4d8596;
case 0x4d8598:c.instructions+=2;goto B4d8598;
case 0x4d859e:c.instructions+=1;goto B4d859e;
case 0x4d85a2:goto L4d85a2;
case 0x4d85a8:c.instructions+=2;goto B4d85a8;
case 0x4d85ae:c.instructions+=1;goto B4d85ae;
case 0x4d85b0:goto L4d85b0;
case 0x4d85b6:c.instructions+=3;goto B4d85b6;
case 0x4d85b7:c.instructions+=2;goto B4d85b7;
case 0x4d85bd:c.instructions+=1;goto B4d85bd;
case 0x4d85c2:goto L4d85c2;
case 0x4d85c6:c.instructions+=4;goto B4d85c6;
case 0x4d85cc:c.instructions+=3;goto B4d85cc;
case 0x4d85ce:c.instructions+=2;goto B4d85ce;
case 0x4d85d4:c.instructions+=1;goto B4d85d4;
case 0x4d85d6:goto L4d85d6;
case 0x4d85dc:c.instructions+=2;goto B4d85dc;
case 0x4d85e2:c.instructions+=1;goto B4d85e2;
case 0x4d85e7:goto L4d85e7;
case 0x4d85ed:c.instructions+=2;goto B4d85ed;
case 0x4d85f3:c.instructions+=1;goto B4d85f3;
case 0x4d85f8:goto L4d85f8;
case 0x4d85fe:c.instructions+=2;goto B4d85fe;
case 0x4d8604:c.instructions+=1;goto B4d8604;
case 0x4d860a:goto L4d860a;
case 0x4d8610:c.instructions+=2;goto B4d8610;
case 0x4d8614:c.instructions+=1;goto B4d8614;
case 0x4d8619:goto L4d8619;
case 0x4d861d:c.instructions+=1;goto B4d861d;
case 0x4d861f:goto L4d861f;
case 0x4d8625:c.instructions+=9;goto B4d8625;
case 0x4d862f:c.instructions+=8;goto B4d862f;
case 0x4d8634:c.instructions+=7;goto B4d8634;
case 0x4d863a:c.instructions+=6;goto B4d863a;
case 0x4d8640:c.instructions+=5;goto B4d8640;
case 0x4d8642:c.instructions+=4;goto B4d8642;
case 0x4d8648:c.instructions+=3;goto B4d8648;
case 0x4d8652:c.instructions+=2;goto B4d8652;
case 0x4d8654:c.instructions+=1;goto B4d8654;
case 0x4d8656:goto L4d8656;
case 0x4d8658:c.instructions+=1;goto B4d8658;
case 0x4d865d:goto L4d865d;
case 0x4d8660:c.instructions+=2;goto B4d8660;
case 0x4d8665:c.instructions+=1;goto B4d8665;
case 0x4d866a:goto L4d866a;
case 0x4d866c:c.instructions+=1;goto B4d866c;
case 0x4d8671:goto L4d8671;
case 0x4d8674:c.instructions+=2;goto B4d8674;
case 0x4d8679:c.instructions+=1;goto B4d8679;
case 0x4d867b:goto L4d867b;
case 0x4d8681:c.instructions+=1;goto B4d8681;
case 0x4d8683:goto L4d8683;
case 0x4d8689:c.instructions+=1;goto B4d8689;
case 0x4d868b:goto L4d868b;
case 0x4d8692:c.instructions+=2;goto B4d8692;
case 0x4d869c:c.instructions+=1;goto B4d869c;
case 0x4d869e:goto L4d869e;
case 0x4d86a4:c.instructions+=9;goto B4d86a4;
case 0x4d86a6:c.instructions+=8;goto B4d86a6;
case 0x4d86ac:c.instructions+=7;goto B4d86ac;
case 0x4d86b6:c.instructions+=6;goto B4d86b6;
case 0x4d86bc:c.instructions+=5;goto B4d86bc;
case 0x4d86c2:c.instructions+=4;goto B4d86c2;
case 0x4d86c8:c.instructions+=3;goto B4d86c8;
case 0x4d86d2:c.instructions+=2;goto B4d86d2;
case 0x4d86d4:c.instructions+=1;goto B4d86d4;
case 0x4d86d6:goto L4d86d6;
case 0x4d86d8:c.instructions+=1;goto B4d86d8;
case 0x4d86da:goto L4d86da;
case 0x4d86dc:goto L4d86dc;
case 0x4d86e1:goto L4d86e1;
case 0x4d86e4:c.instructions+=1;goto B4d86e4;
case 0x4d86eb:goto L4d86eb;
case 0x4d86f0:goto L4d86f0;
case 0x4d86f6:c.instructions+=4;goto B4d86f6;
case 0x4d86fc:c.instructions+=3;goto B4d86fc;
case 0x4d86fe:c.instructions+=2;goto B4d86fe;
case 0x4d8701:c.instructions+=1;goto B4d8701;
case 0x4d8703:goto L4d8703;
case 0x4d8709:c.instructions+=2;goto B4d8709;
case 0x4d870f:c.instructions+=1;goto B4d870f;
case 0x4d8715:goto L4d8715;
case 0x4d871b:c.instructions+=4;goto B4d871b;
case 0x4d8721:c.instructions+=3;goto B4d8721;
case 0x4d8723:c.instructions+=2;goto B4d8723;
case 0x4d8726:c.instructions+=1;goto B4d8726;
case 0x4d8728:goto L4d8728;
case 0x4d872e:c.instructions+=2;goto B4d872e;
case 0x4d8734:c.instructions+=1;goto B4d8734;
case 0x4d873a:goto L4d873a;
case 0x4d873e:c.instructions+=1;goto B4d873e;
case 0x4d8744:goto L4d8744;
case 0x4d874a:c.instructions+=2;goto B4d874a;
case 0x4d8750:c.instructions+=1;goto B4d8750;
case 0x4d8756:goto L4d8756;
case 0x4d8759:c.instructions+=2;goto B4d8759;
case 0x4d875b:c.instructions+=1;goto B4d875b;
case 0x4d8761:goto L4d8761;
case 0x4d8767:c.instructions+=1;goto B4d8767;
case 0x4d8769:goto L4d8769;
case 0x4d876f:c.instructions+=1;goto B4d876f;
case 0x4d8771:goto L4d8771;
case 0x4d8777:c.instructions+=1;goto B4d8777;
case 0x4d877d:goto L4d877d;
case 0x4d8782:c.instructions+=17;goto B4d8782;
case 0x4d8786:c.instructions+=16;goto B4d8786;
case 0x4d878a:c.instructions+=15;goto B4d878a;
case 0x4d8790:c.instructions+=14;goto B4d8790;
case 0x4d8793:c.instructions+=13;goto B4d8793;
case 0x4d8799:c.instructions+=12;goto B4d8799;
case 0x4d879d:c.instructions+=11;goto B4d879d;
case 0x4d87a1:c.instructions+=10;goto B4d87a1;
case 0x4d87a5:c.instructions+=9;goto B4d87a5;
case 0x4d87a9:c.instructions+=8;goto B4d87a9;
case 0x4d87ad:c.instructions+=7;goto B4d87ad;
case 0x4d87b3:c.instructions+=6;goto B4d87b3;
case 0x4d87b6:c.instructions+=5;goto B4d87b6;
case 0x4d87b8:c.instructions+=4;goto B4d87b8;
case 0x4d87bb:c.instructions+=3;goto B4d87bb;
case 0x4d87bc:c.instructions+=2;goto B4d87bc;
case 0x4d87c0:c.instructions+=1;goto B4d87c0;
case 0x4d87c5:goto L4d87c5;
case 0x4d87c8:c.instructions+=6;goto B4d87c8;
case 0x4d87cc:c.instructions+=5;goto B4d87cc;
case 0x4d87d2:c.instructions+=4;goto B4d87d2;
case 0x4d87d8:c.instructions+=3;goto B4d87d8;
case 0x4d87db:c.instructions+=2;goto B4d87db;
case 0x4d87df:c.instructions+=1;goto B4d87df;
case 0x4d87e5:goto L4d87e5;
case 0x4d87e9:c.instructions+=1;goto B4d87e9;
case 0x4d87ef:goto L4d87ef;
case 0x4d87f5:c.instructions+=2;goto B4d87f5;
case 0x4d87fb:c.instructions+=1;goto B4d87fb;
case 0x4d8801:goto L4d8801;
case 0x4d8804:c.instructions+=2;goto B4d8804;
case 0x4d8806:c.instructions+=1;goto B4d8806;
case 0x4d880c:goto L4d880c;
case 0x4d8812:c.instructions+=1;goto B4d8812;
case 0x4d8814:goto L4d8814;
case 0x4d881a:c.instructions+=1;goto B4d881a;
case 0x4d881c:goto L4d881c;
case 0x4d881f:c.instructions+=3;goto B4d881f;
case 0x4d8820:c.instructions+=2;goto B4d8820;
case 0x4d8824:c.instructions+=1;goto B4d8824;
case 0x4d8829:goto L4d8829;
case 0x4d882c:c.instructions+=7;goto B4d882c;
case 0x4d8830:c.instructions+=6;goto B4d8830;
case 0x4d8836:c.instructions+=5;goto B4d8836;
case 0x4d883c:c.instructions+=4;goto B4d883c;
case 0x4d883f:c.instructions+=3;goto B4d883f;
case 0x4d8843:c.instructions+=2;goto B4d8843;
case 0x4d8849:c.instructions+=1;goto B4d8849;
case 0x4d884b:goto L4d884b;
case 0x4d8851:c.instructions+=20;goto B4d8851;
case 0x4d8856:c.instructions+=19;goto B4d8856;
case 0x4d885a:c.instructions+=18;goto B4d885a;
case 0x4d885e:c.instructions+=17;goto B4d885e;
case 0x4d8864:c.instructions+=16;goto B4d8864;
case 0x4d8867:c.instructions+=15;goto B4d8867;
case 0x4d8869:c.instructions+=14;goto B4d8869;
case 0x4d886d:c.instructions+=13;goto B4d886d;
case 0x4d8871:c.instructions+=12;goto B4d8871;
case 0x4d8875:c.instructions+=11;goto B4d8875;
case 0x4d8879:c.instructions+=10;goto B4d8879;
case 0x4d887d:c.instructions+=9;goto B4d887d;
case 0x4d8880:c.instructions+=8;goto B4d8880;
case 0x4d8882:c.instructions+=7;goto B4d8882;
case 0x4d8888:c.instructions+=6;goto B4d8888;
case 0x4d888e:c.instructions+=5;goto B4d888e;
case 0x4d8894:c.instructions+=4;goto B4d8894;
case 0x4d8897:c.instructions+=3;goto B4d8897;
case 0x4d8898:c.instructions+=2;goto B4d8898;
case 0x4d889c:c.instructions+=1;goto B4d889c;
case 0x4d88a1:goto L4d88a1;
case 0x4d88a4:c.instructions+=6;goto B4d88a4;
case 0x4d88a8:c.instructions+=5;goto B4d88a8;
case 0x4d88ae:c.instructions+=4;goto B4d88ae;
case 0x4d88b4:c.instructions+=3;goto B4d88b4;
case 0x4d88b7:c.instructions+=2;goto B4d88b7;
case 0x4d88bb:c.instructions+=1;goto B4d88bb;
case 0x4d88c1:goto L4d88c1;
case 0x4d88c6:c.instructions+=10;goto B4d88c6;
case 0x4d88cc:c.instructions+=9;goto B4d88cc;
case 0x4d88ce:c.instructions+=8;goto B4d88ce;
case 0x4d88d2:c.instructions+=7;goto B4d88d2;
case 0x4d88d6:c.instructions+=6;goto B4d88d6;
case 0x4d88db:c.instructions+=5;goto B4d88db;
case 0x4d88e1:c.instructions+=4;goto B4d88e1;
case 0x4d88e7:c.instructions+=3;goto B4d88e7;
case 0x4d88e9:c.instructions+=2;goto B4d88e9;
case 0x4d88ec:c.instructions+=1;goto B4d88ec;
case 0x4d88ee:goto L4d88ee;
case 0x4d88f2:goto L4d88f2;
case 0x4d88f7:goto L4d88f7;
case 0x4d88f9:c.instructions+=1;goto B4d88f9;
case 0x4d88fb:goto L4d88fb;
case 0x4d88fd:c.instructions+=1;goto B4d88fd;
case 0x4d88ff:goto L4d88ff;
case 0x4d8903:goto L4d8903;
case 0x4d8909:c.instructions+=2;goto B4d8909;
case 0x4d890b:c.instructions+=1;goto B4d890b;
case 0x4d890d:goto L4d890d;
case 0x4d890f:c.instructions+=1;goto B4d890f;
case 0x4d8911:goto L4d8911;
case 0x4d8913:c.instructions+=1;goto B4d8913;
case 0x4d8919:goto L4d8919;
case 0x4d891f:c.instructions+=1;goto B4d891f;
case 0x4d8925:goto L4d8925;
case 0x4d8927:c.instructions+=1;goto B4d8927;
case 0x4d892d:goto L4d892d;
case 0x4d8933:c.instructions+=1;goto B4d8933;
case 0x4d8938:goto L4d8938;
case 0x4d893a:c.instructions+=2;goto B4d893a;
case 0x4d893f:c.instructions+=1;goto B4d893f;
case 0x4d8941:goto L4d8941;
case 0x4d8946:goto L4d8946;
case 0x4d894c:c.instructions+=5;goto B4d894c;
case 0x4d8952:c.instructions+=4;goto B4d8952;
case 0x4d8954:c.instructions+=3;goto B4d8954;
case 0x4d8956:c.instructions+=2;goto B4d8956;
case 0x4d8958:c.instructions+=1;goto B4d8958;
case 0x4d895a:goto L4d895a;
case 0x4d895f:c.instructions+=5;goto B4d895f;
case 0x4d8964:c.instructions+=4;goto B4d8964;
case 0x4d8965:c.instructions+=3;goto B4d8965;
case 0x4d8968:c.instructions+=2;goto B4d8968;
case 0x4d896d:c.instructions+=1;goto B4d896d;
case 0x4d896f:goto L4d896f;
case 0x4d8971:c.instructions+=1;goto B4d8971;
case 0x4d8976:goto L4d8976;
case 0x4d897c:c.instructions+=5;goto B4d897c;
case 0x4d897f:c.instructions+=4;goto B4d897f;
case 0x4d8981:c.instructions+=3;goto B4d8981;
case 0x4d8984:c.instructions+=2;goto B4d8984;
case 0x4d898a:c.instructions+=1;goto B4d898a;
case 0x4d898c:goto L4d898c;
case 0x4d8990:goto L4d8990;
case 0x4d8991:c.instructions+=3;goto B4d8991;
case 0x4d8994:c.instructions+=2;goto B4d8994;
case 0x4d8999:c.instructions+=1;goto B4d8999;
case 0x4d899b:goto L4d899b;
case 0x4d899d:c.instructions+=1;goto B4d899d;
case 0x4d89a2:goto L4d89a2;
case 0x4d89a8:c.instructions+=5;goto B4d89a8;
case 0x4d89ab:c.instructions+=4;goto B4d89ab;
case 0x4d89ad:c.instructions+=3;goto B4d89ad;
case 0x4d89b0:c.instructions+=2;goto B4d89b0;
case 0x4d89b6:c.instructions+=1;goto B4d89b6;
case 0x4d89b8:goto L4d89b8;
case 0x4d89be:c.instructions+=7;goto B4d89be;
case 0x4d89c1:c.instructions+=6;goto B4d89c1;
case 0x4d89c3:c.instructions+=5;goto B4d89c3;
case 0x4d89c6:c.instructions+=4;goto B4d89c6;
case 0x4d89cc:c.instructions+=3;goto B4d89cc;
case 0x4d89cd:c.instructions+=2;goto B4d89cd;
case 0x4d89cf:c.instructions+=1;goto B4d89cf;
case 0x4d89d4:goto L4d89d4;
case 0x4d89da:goto L4d89da;
case 0x4d89e0:c.instructions+=1;goto B4d89e0;
case 0x4d89e2:goto L4d89e2;
case 0x4d89e8:c.instructions+=1;goto B4d89e8;
case 0x4d89ed:goto L4d89ed;
case 0x4d89ef:c.instructions+=2;goto B4d89ef;
case 0x4d89f5:c.instructions+=1;goto B4d89f5;
case 0x4d89f7:goto L4d89f7;
case 0x4d89fd:goto L4d89fd;
case 0x4d8a03:c.instructions+=1;goto B4d8a03;
case 0x4d8a05:goto L4d8a05;
case 0x4d8a0b:c.instructions+=3;goto B4d8a0b;
case 0x4d8a11:c.instructions+=2;goto B4d8a11;
case 0x4d8a17:c.instructions+=1;goto B4d8a17;
case 0x4d8a19:goto L4d8a19;
case 0x4d8a1f:c.instructions+=2;goto B4d8a1f;
case 0x4d8a25:c.instructions+=1;goto B4d8a25;
case 0x4d8a2a:goto L4d8a2a;
case 0x4d8a30:c.instructions+=1;goto B4d8a30;
case 0x4d8a32:goto L4d8a32;
case 0x4d8a37:c.instructions+=1;goto B4d8a37;
case 0x4d8a3c:goto L4d8a3c;
case 0x4d8a42:c.instructions+=3;goto B4d8a42;
case 0x4d8a43:c.instructions+=2;goto B4d8a43;
case 0x4d8a48:c.instructions+=1;goto B4d8a48;
case 0x4d8a4d:goto L4d8a4d;
case 0x4d8a53:c.instructions+=2;goto B4d8a53;
case 0x4d8a56:c.instructions+=1;goto B4d8a56;
case 0x4d8a58:goto L4d8a58;
case 0x4d8a5e:c.instructions+=1;goto B4d8a5e;
case 0x4d8a60:goto L4d8a60;
case 0x4d8a66:c.instructions+=6;goto B4d8a66;
case 0x4d8a6c:c.instructions+=5;goto B4d8a6c;
case 0x4d8a72:c.instructions+=4;goto B4d8a72;
case 0x4d8a74:c.instructions+=3;goto B4d8a74;
case 0x4d8a7a:c.instructions+=2;goto B4d8a7a;
case 0x4d8a80:c.instructions+=1;goto B4d8a80;
case 0x4d8a85:goto L4d8a85;
case 0x4d8a8b:c.instructions+=10;goto B4d8a8b;
case 0x4d8a91:c.instructions+=9;goto B4d8a91;
case 0x4d8a95:c.instructions+=8;goto B4d8a95;
case 0x4d8a9b:c.instructions+=7;goto B4d8a9b;
case 0x4d8a9f:c.instructions+=6;goto B4d8a9f;
case 0x4d8aa5:c.instructions+=5;goto B4d8aa5;
case 0x4d8aab:c.instructions+=4;goto B4d8aab;
case 0x4d8ab1:c.instructions+=3;goto B4d8ab1;
case 0x4d8ab3:c.instructions+=2;goto B4d8ab3;
case 0x4d8ab6:c.instructions+=1;goto B4d8ab6;
case 0x4d8ab8:goto L4d8ab8;
case 0x4d8abc:c.instructions+=4;goto B4d8abc;
case 0x4d8ac2:c.instructions+=3;goto B4d8ac2;
case 0x4d8ac4:c.instructions+=2;goto B4d8ac4;
case 0x4d8ac7:c.instructions+=1;goto B4d8ac7;
case 0x4d8ac9:goto L4d8ac9;
case 0x4d8acb:c.instructions+=2;goto B4d8acb;
case 0x4d8acf:c.instructions+=1;goto B4d8acf;
case 0x4d8ad5:goto L4d8ad5;
case 0x4d8adb:c.instructions+=4;goto B4d8adb;
case 0x4d8add:c.instructions+=3;goto B4d8add;
case 0x4d8adf:c.instructions+=2;goto B4d8adf;
case 0x4d8ae5:c.instructions+=1;goto B4d8ae5;
case 0x4d8ae7:goto L4d8ae7;
case 0x4d8aed:c.instructions+=1;goto B4d8aed;
case 0x4d8aef:goto L4d8aef;
case 0x4d8af5:goto L4d8af5;
case 0x4d8afb:c.instructions+=8;goto B4d8afb;
case 0x4d8afd:c.instructions+=7;goto B4d8afd;
case 0x4d8b03:c.instructions+=6;goto B4d8b03;
case 0x4d8b09:c.instructions+=5;goto B4d8b09;
case 0x4d8b0f:c.instructions+=4;goto B4d8b0f;
case 0x4d8b15:c.instructions+=3;goto B4d8b15;
case 0x4d8b17:c.instructions+=2;goto B4d8b17;
case 0x4d8b1a:c.instructions+=1;goto B4d8b1a;
case 0x4d8b1c:goto L4d8b1c;
case 0x4d8b22:c.instructions+=1;goto B4d8b22;
case 0x4d8b24:goto L4d8b24;
case 0x4d8b2a:goto L4d8b2a;
case 0x4d8b30:c.instructions+=4;goto B4d8b30;
case 0x4d8b36:c.instructions+=3;goto B4d8b36;
case 0x4d8b38:c.instructions+=2;goto B4d8b38;
case 0x4d8b3b:c.instructions+=1;goto B4d8b3b;
case 0x4d8b3d:goto L4d8b3d;
case 0x4d8b43:c.instructions+=2;goto B4d8b43;
case 0x4d8b49:c.instructions+=1;goto B4d8b49;
case 0x4d8b4f:goto L4d8b4f;
case 0x4d8b55:c.instructions+=4;goto B4d8b55;
case 0x4d8b5b:c.instructions+=3;goto B4d8b5b;
case 0x4d8b5d:c.instructions+=2;goto B4d8b5d;
case 0x4d8b60:c.instructions+=1;goto B4d8b60;
case 0x4d8b62:goto L4d8b62;
case 0x4d8b68:c.instructions+=2;goto B4d8b68;
case 0x4d8b6e:c.instructions+=1;goto B4d8b6e;
case 0x4d8b74:goto L4d8b74;
case 0x4d8b7a:c.instructions+=1;goto B4d8b7a;
case 0x4d8b7c:goto L4d8b7c;
case 0x4d8b7f:c.instructions+=1;goto B4d8b7f;
case 0x4d8b87:goto L4d8b87;
case 0x4d8b89:c.instructions+=4;goto B4d8b89;
case 0x4d8b8c:c.instructions+=3;goto B4d8b8c;
case 0x4d8b8f:c.instructions+=2;goto B4d8b8f;
case 0x4d8b92:c.instructions+=1;goto B4d8b92;
case 0x4d8b94:goto L4d8b94;
case 0x4d8b96:c.instructions+=4;goto B4d8b96;
case 0x4d8b98:c.instructions+=3;goto B4d8b98;
case 0x4d8b9a:c.instructions+=2;goto B4d8b9a;
case 0x4d8b9b:c.instructions+=1;goto B4d8b9b;
case 0x4d8ba0:goto L4d8ba0;
case 0x4d8ba4:c.instructions+=4;goto B4d8ba4;
case 0x4d8ba7:c.instructions+=3;goto B4d8ba7;
case 0x4d8ba8:c.instructions+=2;goto B4d8ba8;
case 0x4d8bac:c.instructions+=1;goto B4d8bac;
case 0x4d8bae:goto L4d8bae;
case 0x4d8bb4:goto L4d8bb4;
case 0x4d8bb6:c.instructions+=1;goto B4d8bb6;
case 0x4d8bbb:goto L4d8bbb;
case 0x4d8bbe:c.instructions+=5;goto B4d8bbe;
case 0x4d8bc4:c.instructions+=4;goto B4d8bc4;
case 0x4d8bc5:c.instructions+=3;goto B4d8bc5;
case 0x4d8bc6:c.instructions+=2;goto B4d8bc6;
case 0x4d8bc8:c.instructions+=1;goto B4d8bc8;
case 0x4d8bcd:goto L4d8bcd;
case 0x4d8bd0:c.instructions+=5;goto B4d8bd0;
case 0x4d8bd6:c.instructions+=4;goto B4d8bd6;
case 0x4d8bd7:c.instructions+=3;goto B4d8bd7;
case 0x4d8bd8:c.instructions+=2;goto B4d8bd8;
case 0x4d8bda:c.instructions+=1;goto B4d8bda;
case 0x4d8bdf:goto L4d8bdf;
case 0x4d8be1:c.instructions+=1;goto B4d8be1;
case 0x4d8be6:goto L4d8be6;
case 0x4d8bec:c.instructions+=4;goto B4d8bec;
case 0x4d8bf2:c.instructions+=3;goto B4d8bf2;
case 0x4d8bf4:c.instructions+=2;goto B4d8bf4;
case 0x4d8bf7:c.instructions+=1;goto B4d8bf7;
case 0x4d8bf9:goto L4d8bf9;
case 0x4d8bff:c.instructions+=3;goto B4d8bff;
case 0x4d8c05:c.instructions+=2;goto B4d8c05;
case 0x4d8c0b:c.instructions+=1;goto B4d8c0b;
case 0x4d8c0d:goto L4d8c0d;
case 0x4d8c13:c.instructions+=2;goto B4d8c13;
case 0x4d8c15:c.instructions+=1;goto B4d8c15;
case 0x4d8c1a:goto L4d8c1a;
case 0x4d8c21:c.instructions+=1;goto B4d8c21;
case 0x4d8c27:goto L4d8c27;
case 0x4d8c2d:c.instructions+=7;goto B4d8c2d;
case 0x4d8c2e:c.instructions+=6;goto B4d8c2e;
case 0x4d8c30:c.instructions+=5;goto B4d8c30;
case 0x4d8c31:c.instructions+=4;goto B4d8c31;
case 0x4d8c37:c.instructions+=3;goto B4d8c37;
case 0x4d8c38:c.instructions+=2;goto B4d8c38;
case 0x4d8c3b:c.instructions+=1;goto B4d8c3b;
case 0x4d8c3e:goto L4d8c3e;
case 0x4d8c44:c.instructions+=1;goto B4d8c44;
case 0x4d8c46:goto L4d8c46;
case 0x4d8c4c:c.instructions+=2;goto B4d8c4c;
case 0x4d8c4e:c.instructions+=1;goto B4d8c4e;
case 0x4d8c53:goto L4d8c53;
case 0x4d8c5a:c.instructions+=1;goto B4d8c5a;
case 0x4d8c60:goto L4d8c60;
case 0x4d8c61:c.instructions+=4;goto B4d8c61;
case 0x4d8c62:c.instructions+=3;goto B4d8c62;
case 0x4d8c63:c.instructions+=2;goto B4d8c63;
case 0x4d8c66:c.instructions+=1;goto B4d8c66;
case 0x4d8c70:goto L4d8c70;
case 0x4d8c73:c.instructions+=7;goto B4d8c73;
case 0x4d8c74:c.instructions+=6;goto B4d8c74;
case 0x4d8c75:c.instructions+=5;goto B4d8c75;
case 0x4d8c79:c.instructions+=4;goto B4d8c79;
case 0x4d8c7b:c.instructions+=3;goto B4d8c7b;
case 0x4d8c81:c.instructions+=2;goto B4d8c81;
case 0x4d8c82:c.instructions+=1;goto B4d8c82;
case 0x4d8c87:goto L4d8c87;
case 0x4d8c89:c.instructions+=9;goto B4d8c89;
case 0x4d8c8f:c.instructions+=8;goto B4d8c8f;
case 0x4d8c95:c.instructions+=7;goto B4d8c95;
case 0x4d8c97:c.instructions+=6;goto B4d8c97;
case 0x4d8c98:c.instructions+=5;goto B4d8c98;
case 0x4d8c9d:c.instructions+=4;goto B4d8c9d;
case 0x4d8ca1:c.instructions+=3;goto B4d8ca1;
case 0x4d8ca3:c.instructions+=2;goto B4d8ca3;
case 0x4d8ca4:c.instructions+=1;goto B4d8ca4;
case 0x4d8ca9:goto L4d8ca9;
case 0x4d8cad:c.instructions+=2;goto B4d8cad;
case 0x4d8cae:c.instructions+=1;goto B4d8cae;
case 0x4d8cb3:goto L4d8cb3;
case 0x4d8cb4:c.instructions+=3;goto B4d8cb4;
case 0x4d8cba:c.instructions+=2;goto B4d8cba;
case 0x4d8cbb:c.instructions+=1;goto B4d8cbb;
case 0x4d8cc0:goto L4d8cc0;
case 0x4d8cc5:c.instructions+=6;goto B4d8cc5;
case 0x4d8cc8:c.instructions+=5;goto B4d8cc8;
case 0x4d8ccb:c.instructions+=4;goto B4d8ccb;
case 0x4d8cce:c.instructions+=3;goto B4d8cce;
case 0x4d8cd3:c.instructions+=2;goto B4d8cd3;
case 0x4d8cd4:c.instructions+=1;goto B4d8cd4;
case 0x4d8cd6:goto L4d8cd6;
case 0x4d8cdb:goto L4d8cdb;
case 0x4d8cdc:c.instructions+=1;goto B4d8cdc;
case 0x4d8ce1:goto L4d8ce1;
case 0x4d8ce3:goto L4d8ce3;
case 0x4d8ce8:goto L4d8ce8;
case 0x4d8ce9:c.instructions+=1;goto B4d8ce9;
case 0x4d8cee:goto L4d8cee;
case 0x4d8cf2:c.instructions+=5;goto B4d8cf2;
case 0x4d8cf5:c.instructions+=4;goto B4d8cf5;
case 0x4d8cf6:c.instructions+=3;goto B4d8cf6;
case 0x4d8cf7:c.instructions+=2;goto B4d8cf7;
case 0x4d8cf9:c.instructions+=1;goto B4d8cf9;
case 0x4d8cfe:goto L4d8cfe;
case 0x4d8d05:c.instructions+=1;goto B4d8d05;
case 0x4d8d07:goto L4d8d07;
case 0x4d8d11:goto L4d8d11;
case 0x4d8d12:c.instructions+=3;goto B4d8d12;
case 0x4d8d13:c.instructions+=2;goto B4d8d13;
case 0x4d8d16:c.instructions+=1;goto B4d8d16;
case 0x4d8d20:goto L4d8d20;
case 0x4d8d24:c.instructions+=4;goto B4d8d24;
case 0x4d8d29:c.instructions+=3;goto B4d8d29;
case 0x4d8d2a:c.instructions+=2;goto B4d8d2a;
case 0x4d8d2c:c.instructions+=1;goto B4d8d2c;
case 0x4d8d32:goto L4d8d32;
case 0x4d8d38:goto L4d8d38;
case 0x4d8d3d:c.instructions+=1;goto B4d8d3d;
case 0x4d8d3f:goto L4d8d3f;
case 0x4d8d41:goto L4d8d41;
case 0x4d8d46:c.instructions+=1;goto B4d8d46;
case 0x4d8d48:goto L4d8d48;
case 0x4d8d4d:c.instructions+=1;goto B4d8d4d;
case 0x4d8d4f:goto L4d8d4f;
case 0x4d8d54:c.instructions+=1;goto B4d8d54;
case 0x4d8d5a:goto L4d8d5a;
case 0x4d8d64:c.instructions+=2;goto B4d8d64;
case 0x4d8d65:c.instructions+=1;goto B4d8d65;
case 0x4d8d68:goto L4d8d68;
case 0x4d8d6b:c.instructions+=6;goto B4d8d6b;
case 0x4d8d6d:c.instructions+=5;goto B4d8d6d;
case 0x4d8d73:c.instructions+=4;goto B4d8d73;
case 0x4d8d76:c.instructions+=3;goto B4d8d76;
case 0x4d8d7c:c.instructions+=2;goto B4d8d7c;
case 0x4d8d7d:c.instructions+=1;goto B4d8d7d;
case 0x4d8d80:goto L4d8d80;
case 0x4d8d8a:c.instructions+=2;goto B4d8d8a;
case 0x4d8d8b:c.instructions+=1;goto B4d8d8b;
case 0x4d8d8e:goto L4d8d8e;
case 0x4d8d91:c.instructions+=6;goto B4d8d91;
case 0x4d8d96:c.instructions+=5;goto B4d8d96;
case 0x4d8d9c:c.instructions+=4;goto B4d8d9c;
case 0x4d8d9f:c.instructions+=3;goto B4d8d9f;
case 0x4d8da5:c.instructions+=2;goto B4d8da5;
case 0x4d8da6:c.instructions+=1;goto B4d8da6;
case 0x4d8da9:goto L4d8da9;
case 0x4d8dae:c.instructions+=1;goto B4d8dae;
case 0x4d8db0:goto L4d8db0;
case 0x4d8db5:c.instructions+=1;goto B4d8db5;
case 0x4d8db7:goto L4d8db7;
case 0x4d8dbc:c.instructions+=1;goto B4d8dbc;
case 0x4d8dc2:goto L4d8dc2;
case 0x4d8dc3:c.instructions+=3;goto B4d8dc3;
case 0x4d8dc5:c.instructions+=2;goto B4d8dc5;
case 0x4d8dcf:c.instructions+=1;goto B4d8dcf;
case 0x4d8dd4:goto L4d8dd4;
case 0x4d8dd5:c.instructions+=1;goto B4d8dd5;
case 0x4d8dd8:goto L4d8dd8;
case 0x4d8de2:c.instructions+=2;goto B4d8de2;
case 0x4d8de3:c.instructions+=1;goto B4d8de3;
case 0x4d8de6:goto L4d8de6;
case 0x4d8ded:c.instructions+=2;goto B4d8ded;
case 0x4d8dee:c.instructions+=1;goto B4d8dee;
case 0x4d8df1:goto L4d8df1;
case 0x4d8df3:c.instructions+=3;goto B4d8df3;
case 0x4d8df8:c.instructions+=2;goto B4d8df8;
case 0x4d8dfa:c.instructions+=1;goto B4d8dfa;
case 0x4d8dff:goto L4d8dff;
case 0x4d8e00:c.instructions+=1;goto B4d8e00;
case 0x4d8e03:goto L4d8e03;
case 0x4d8e08:c.instructions+=1;goto B4d8e08;
case 0x4d8e0a:goto L4d8e0a;
case 0x4d8e0c:goto L4d8e0c;
case 0x4d8e11:c.instructions+=1;goto B4d8e11;
case 0x4d8e13:goto L4d8e13;
case 0x4d8e18:c.instructions+=1;goto B4d8e18;
case 0x4d8e1a:goto L4d8e1a;
case 0x4d8e1f:c.instructions+=1;goto B4d8e1f;
case 0x4d8e25:goto L4d8e25;
case 0x4d8e26:c.instructions+=3;goto B4d8e26;
case 0x4d8e28:c.instructions+=2;goto B4d8e28;
case 0x4d8e32:c.instructions+=1;goto B4d8e32;
case 0x4d8e37:goto L4d8e37;
case 0x4d8e38:c.instructions+=1;goto B4d8e38;
case 0x4d8e3b:goto L4d8e3b;
case 0x4d8e3d:c.instructions+=2;goto B4d8e3d;
case 0x4d8e47:c.instructions+=1;goto B4d8e47;
case 0x4d8e4c:goto L4d8e4c;
case 0x4d8e4d:c.instructions+=1;goto B4d8e4d;
case 0x4d8e50:goto L4d8e50;
case 0x4d8e52:c.instructions+=2;goto B4d8e52;
case 0x4d8e5c:c.instructions+=1;goto B4d8e5c;
case 0x4d8e61:goto L4d8e61;
case 0x4d8e62:c.instructions+=1;goto B4d8e62;
case 0x4d8e65:goto L4d8e65;
case 0x4d8e6f:c.instructions+=2;goto B4d8e6f;
case 0x4d8e70:c.instructions+=1;goto B4d8e70;
case 0x4d8e73:goto L4d8e73;
case 0x4d8e78:c.instructions+=1;goto B4d8e78;
case 0x4d8e7a:goto L4d8e7a;
case 0x4d8e7f:c.instructions+=1;goto B4d8e7f;
case 0x4d8e81:goto L4d8e81;
case 0x4d8e83:c.instructions+=3;goto B4d8e83;
case 0x4d8e84:c.instructions+=2;goto B4d8e84;
case 0x4d8e86:c.instructions+=1;goto B4d8e86;
case 0x4d8e8b:goto L4d8e8b;
case 0x4d8e8c:c.instructions+=1;goto B4d8e8c;
case 0x4d8e8f:goto L4d8e8f;
case 0x4d8e94:c.instructions+=2;goto B4d8e94;
case 0x4d8e96:c.instructions+=1;goto B4d8e96;
case 0x4d8e9b:goto L4d8e9b;
case 0x4d8e9d:c.instructions+=1;goto B4d8e9d;
case 0x4d8ea2:goto L4d8ea2;
case 0x4d8ea5:c.instructions+=3;goto B4d8ea5;
case 0x4d8ea9:c.instructions+=2;goto B4d8ea9;
case 0x4d8eaa:c.instructions+=1;goto B4d8eaa;
case 0x4d8eaf:goto L4d8eaf;
case 0x4d8eb2:goto L4d8eb2;
case 0x4d8eb3:c.instructions+=1;goto B4d8eb3;
case 0x4d8ec0:goto L4d8ec0;
case 0x4d8ec1:c.instructions+=6;goto B4d8ec1;
case 0x4d8ec3:c.instructions+=5;goto B4d8ec3;
case 0x4d8ec4:c.instructions+=4;goto B4d8ec4;
case 0x4d8ec7:c.instructions+=3;goto B4d8ec7;
case 0x4d8ec8:c.instructions+=2;goto B4d8ec8;
case 0x4d8ec9:c.instructions+=1;goto B4d8ec9;
case 0x4d8ece:goto L4d8ece;
case 0x4d8ed1:c.instructions+=4;goto B4d8ed1;
case 0x4d8ed4:c.instructions+=3;goto B4d8ed4;
case 0x4d8ed6:c.instructions+=2;goto B4d8ed6;
case 0x4d8edb:c.instructions+=1;goto B4d8edb;
case 0x4d8edd:goto L4d8edd;
case 0x4d8ee2:goto L4d8ee2;
case 0x4d8ee5:c.instructions+=3;goto B4d8ee5;
case 0x4d8ee6:c.instructions+=2;goto B4d8ee6;
case 0x4d8ee8:c.instructions+=1;goto B4d8ee8;
case 0x4d8eed:goto L4d8eed;
case 0x4d8ef3:c.instructions+=2;goto B4d8ef3;
case 0x4d8ef6:c.instructions+=1;goto B4d8ef6;
case 0x4d8ef8:goto L4d8ef8;
case 0x4d8efd:c.instructions+=1;goto B4d8efd;
case 0x4d8eff:goto L4d8eff;
case 0x4d8f05:c.instructions+=1;goto B4d8f05;
case 0x4d8f07:goto L4d8f07;
case 0x4d8f0c:goto L4d8f0c;
case 0x4d8f0e:c.instructions+=1;goto B4d8f0e;
case 0x4d8f10:goto L4d8f10;
case 0x4d8f11:c.instructions+=3;goto B4d8f11;
case 0x4d8f12:c.instructions+=2;goto B4d8f12;
case 0x4d8f14:c.instructions+=1;goto B4d8f14;
case 0x4d8f19:goto L4d8f19;
case 0x4d8f1a:c.instructions+=3;goto B4d8f1a;
case 0x4d8f1b:c.instructions+=2;goto B4d8f1b;
case 0x4d8f1c:c.instructions+=1;goto B4d8f1c;
case 0x4d8f20:goto L4d8f20;
case 0x4d8f22:c.instructions+=12;goto B4d8f22;
case 0x4d8f27:c.instructions+=11;goto B4d8f27;
case 0x4d8f2d:c.instructions+=10;goto B4d8f2d;
case 0x4d8f2e:c.instructions+=9;goto B4d8f2e;
case 0x4d8f35:c.instructions+=8;goto B4d8f35;
case 0x4d8f36:c.instructions+=7;goto B4d8f36;
case 0x4d8f3a:c.instructions+=6;goto B4d8f3a;
case 0x4d8f3b:c.instructions+=5;goto B4d8f3b;
case 0x4d8f3c:c.instructions+=4;goto B4d8f3c;
case 0x4d8f3e:c.instructions+=3;goto B4d8f3e;
case 0x4d8f3f:c.instructions+=2;goto B4d8f3f;
case 0x4d8f43:c.instructions+=1;goto B4d8f43;
case 0x4d8f48:goto L4d8f48;
case 0x4d8f4b:c.instructions+=16;goto B4d8f4b;
case 0x4d8f4d:c.instructions+=15;goto B4d8f4d;
case 0x4d8f53:c.instructions+=14;goto B4d8f53;
case 0x4d8f57:c.instructions+=13;goto B4d8f57;
case 0x4d8f59:c.instructions+=12;goto B4d8f59;
case 0x4d8f5c:c.instructions+=11;goto B4d8f5c;
case 0x4d8f61:c.instructions+=10;goto B4d8f61;
case 0x4d8f66:c.instructions+=9;goto B4d8f66;
case 0x4d8f68:c.instructions+=8;goto B4d8f68;
case 0x4d8f6d:c.instructions+=7;goto B4d8f6d;
case 0x4d8f70:c.instructions+=6;goto B4d8f70;
case 0x4d8f73:c.instructions+=5;goto B4d8f73;
case 0x4d8f78:c.instructions+=4;goto B4d8f78;
case 0x4d8f79:c.instructions+=3;goto B4d8f79;
case 0x4d8f7c:c.instructions+=2;goto B4d8f7c;
case 0x4d8f81:c.instructions+=1;goto B4d8f81;
case 0x4d8f86:goto L4d8f86;
case 0x4d8f8b:c.instructions+=2;goto B4d8f8b;
case 0x4d8f91:c.instructions+=1;goto B4d8f91;
case 0x4d8f96:goto L4d8f96;
case 0x4d8f98:c.instructions+=1;goto B4d8f98;
case 0x4d8f9a:goto L4d8f9a;
case 0x4d8f9f:goto L4d8f9f;
case 0x4d8fa5:c.instructions+=3;goto B4d8fa5;
case 0x4d8fa7:c.instructions+=2;goto B4d8fa7;
case 0x4d8fb1:c.instructions+=1;goto B4d8fb1;
case 0x4d8fb6:goto L4d8fb6;
case 0x4d8fbb:c.instructions+=2;goto B4d8fbb;
case 0x4d8fc0:c.instructions+=1;goto B4d8fc0;
case 0x4d8fc5:goto L4d8fc5;
case 0x4d8fca:c.instructions+=2;goto B4d8fca;
case 0x4d8fcf:c.instructions+=1;goto B4d8fcf;
case 0x4d8fd4:goto L4d8fd4;
case 0x4d8fd9:c.instructions+=5;goto B4d8fd9;
case 0x4d8fde:c.instructions+=4;goto B4d8fde;
case 0x4d8fe2:c.instructions+=3;goto B4d8fe2;
case 0x4d8fe8:c.instructions+=2;goto B4d8fe8;
case 0x4d8fee:c.instructions+=1;goto B4d8fee;
case 0x4d8ff3:goto L4d8ff3;
case 0x4d8ff8:c.instructions+=2;goto B4d8ff8;
case 0x4d8ffd:c.instructions+=1;goto B4d8ffd;
default:missing_instruction(c.pc);}
B4d8003:L4d8003:{c.instructions+=4;NFSU2_TR(0x4d8003);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d8006:{NFSU2_TR(0x4d8006);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d8009:{NFSU2_TR(0x4d8009);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d800b:{NFSU2_TR(0x4d800b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8014;}}
}
B4d800d:L4d800d:{c.instructions+=2;NFSU2_TR(0x4d800d);
__builtin_memmove((R+4),(R+24),4);
}
B4d800f:{NFSU2_TR(0x4d800f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8014ull));
TAIL_STATIC(0x4a5200u,4a5);
}
B4d8014:L4d8014:{c.instructions+=4;NFSU2_TR(0x4d8014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8015:{NFSU2_TR(0x4d8015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8016:{NFSU2_TR(0x4d8016);
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
B4d8019:{NFSU2_TR(0x4d8019);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8020:L4d8020:{c.instructions+=3;NFSU2_TR(0x4d8020);
__builtin_memmove((R+4),gp(0x8363ec),4);
}
B4d8026:{NFSU2_TR(0x4d8026);
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
B4d8028:{NFSU2_TR(0x4d8028);
if(r1(R+518)){{goto L4d802f;}}
}
B4d802a:L4d802a:{c.instructions+=1;NFSU2_TR(0x4d802a);
TAIL_STATIC(0x4c1220u,4c1);
}
B4d802f:L4d802f:{c.instructions+=1;NFSU2_TR(0x4d802f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8030:L4d8030:{c.instructions+=9;NFSU2_TR(0x4d8030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8031:{NFSU2_TR(0x4d8031);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8032:{NFSU2_TR(0x4d8032);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8033:{NFSU2_TR(0x4d8033);
__builtin_memmove((R+24),(R+4),4);
}
B4d8035:{NFSU2_TR(0x4d8035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d803b:{NFSU2_TR(0x4d803b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d803d:{NFSU2_TR(0x4d803d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d803f:{NFSU2_TR(0x4d803f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8040:{NFSU2_TR(0x4d8040);
if(r1(R+518)){{goto L4d8059;}}
}
B4d8042:L4d8042:{c.instructions+=5;NFSU2_TR(0x4d8042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8048:{NFSU2_TR(0x4d8048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8049:{NFSU2_TR(0x4d8049);
w4(R+4,u32(0x8a3288ull));
}
B4d804e:{NFSU2_TR(0x4d804e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8054:{NFSU2_TR(0x4d8054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8059ull));
TAIL_STATIC(0x63ae00u,63a);
}
B4d8059:L4d8059:{c.instructions+=2;NFSU2_TR(0x4d8059);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d805f:{NFSU2_TR(0x4d805f);
if(r1(R+518)){{goto L4d8078;}}
}
B4d8061:L4d8061:{c.instructions+=5;NFSU2_TR(0x4d8061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8067:{NFSU2_TR(0x4d8067);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8068:{NFSU2_TR(0x4d8068);
w4(R+4,u32(0x8a3288ull));
}
B4d806d:{NFSU2_TR(0x4d806d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8073:{NFSU2_TR(0x4d8073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8078ull));
TAIL_STATIC(0x63ae00u,63a);
}
B4d8078:L4d8078:{c.instructions+=4;NFSU2_TR(0x4d8078);
__builtin_memmove((R+0),gp(0x836408),4);
}
B4d807d:{NFSU2_TR(0x4d807d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d807f:{NFSU2_TR(0x4d807f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8083:{NFSU2_TR(0x4d8083);
if(r1(R+518)){{goto L4d80ab;}}
}
B4d8085:L4d8085:{c.instructions+=2;NFSU2_TR(0x4d8085);
u8 U[2];
__builtin_memmove((U+0),gp(0x83640c),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d808b:{NFSU2_TR(0x4d808b);
if(r1(R+518)){{goto L4d80a6;}}
}
B4d808d:L4d808d:{c.instructions+=3;NFSU2_TR(0x4d808d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d808e:{NFSU2_TR(0x4d808e);
w4(R+4,u32(0x8a3288ull));
}
B4d8093:{NFSU2_TR(0x4d8093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8098ull));
TAIL_STATIC(0x63ae00u,63a);
}
B4d8098:L4d8098:{c.instructions+=3;NFSU2_TR(0x4d8098);
__builtin_memmove(gp(0x836408),(R+12),4);
}
B4d809e:{NFSU2_TR(0x4d809e);
__builtin_memmove(gp(0x83640c),(R+12),1);
}
B4d80a4:{NFSU2_TR(0x4d80a4);
{goto L4d80ab;}
}
B4d80a6:L4d80a6:{c.instructions+=1;NFSU2_TR(0x4d80a6);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d80ab:L4d80ab:{c.instructions+=3;NFSU2_TR(0x4d80ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d80b1:{NFSU2_TR(0x4d80b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d80b5:{NFSU2_TR(0x4d80b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d80c3;}}
}
B4d80b7:L4d80b7:{c.instructions+=2;NFSU2_TR(0x4d80b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ce0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d80c1:{NFSU2_TR(0x4d80c1);
{goto L4d80d5;}
}
B4d80c3:L4d80c3:{c.instructions+=6;NFSU2_TR(0x4d80c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4d80c5:{NFSU2_TR(0x4d80c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d80c8:{NFSU2_TR(0x4d80c8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d80ca:{NFSU2_TR(0x4d80ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d80cc:{NFSU2_TR(0x4d80cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4d80cf:{NFSU2_TR(0x4d80cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ce0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d80d5:L4d80d5:{c.instructions+=3;NFSU2_TR(0x4d80d5);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d80d9:{NFSU2_TR(0x4d80d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d80da:{NFSU2_TR(0x4d80da);
if(r1(R+518)){{goto L4d8105;}}
}
B4d80dc:L4d80dc:{c.instructions+=3;NFSU2_TR(0x4d80dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d80e2:{NFSU2_TR(0x4d80e2);
__builtin_memmove((R+4),(R+28),4);
}
B4d80e4:{NFSU2_TR(0x4d80e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d80e9ull));
TAIL_STATIC(0x413440u,413);
}
B4d80e9:L4d80e9:{c.instructions+=6;NFSU2_TR(0x4d80e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d80eb:{NFSU2_TR(0x4d80eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d80ed:{NFSU2_TR(0x4d80ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d80ef:{NFSU2_TR(0x4d80ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d80f0:{NFSU2_TR(0x4d80f0);
__builtin_memmove((R+4),(R+28),4);
}
B4d80f2:{NFSU2_TR(0x4d80f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d80f7ull));
TAIL_STATIC(0x639ce0u,639);
}
B4d80f7:L4d80f7:{c.instructions+=6;NFSU2_TR(0x4d80f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d80f8:{NFSU2_TR(0x4d80f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d80ff:{NFSU2_TR(0x4d80ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8100:{NFSU2_TR(0x4d8100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d8101:{NFSU2_TR(0x4d8101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8102:{NFSU2_TR(0x4d8102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8105:L4d8105:{c.instructions+=4;NFSU2_TR(0x4d8105);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d810b:{NFSU2_TR(0x4d810b);
__builtin_memmove((R+4),(R+28),4);
}
B4d810d:{NFSU2_TR(0x4d810d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8113:{NFSU2_TR(0x4d8113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8118ull));
TAIL_STATIC(0x413440u,413);
}
B4d8118:L4d8118:{c.instructions+=6;NFSU2_TR(0x4d8118);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d811a:{NFSU2_TR(0x4d811a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d811c:{NFSU2_TR(0x4d811c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d811e:{NFSU2_TR(0x4d811e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d811f:{NFSU2_TR(0x4d811f);
__builtin_memmove((R+4),(R+28),4);
}
B4d8121:{NFSU2_TR(0x4d8121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8126ull));
TAIL_STATIC(0x639ce0u,639);
}
B4d8126:L4d8126:{c.instructions+=4;NFSU2_TR(0x4d8126);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d812c:{NFSU2_TR(0x4d812c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8136:{NFSU2_TR(0x4d8136);
w4(R+0,u32(0x1ull));
}
B4d813b:{NFSU2_TR(0x4d813b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8142;}}
}
B4d813d:L4d813d:{c.instructions+=1;NFSU2_TR(0x4d813d);
w4(R+0,u32(0x2ull));
}
B4d8142:L4d8142:{c.instructions+=2;NFSU2_TR(0x4d8142);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4d8145:{NFSU2_TR(0x4d8145);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d814a;}}
}
B4d8147:L4d8147:{c.instructions+=1;NFSU2_TR(0x4d8147);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B4d814a:L4d814a:{c.instructions+=3;NFSU2_TR(0x4d814a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d814b:{NFSU2_TR(0x4d814b);
__builtin_memmove((R+4),(R+28),4);
}
B4d814d:{NFSU2_TR(0x4d814d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8152ull));
TAIL_STATIC(0x61c280u,61c);
}
B4d8152:L4d8152:{c.instructions+=5;NFSU2_TR(0x4d8152);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8153:{NFSU2_TR(0x4d8153);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8154:{NFSU2_TR(0x4d8154);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8155:{NFSU2_TR(0x4d8155);
w4(R+4,u32(0x8a3288ull));
}
B4d815a:{NFSU2_TR(0x4d815a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d815full));
TAIL_STATIC(0x63bc70u,63b);
}
B4d815f:L4d815f:{c.instructions+=5;NFSU2_TR(0x4d815f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8160:{NFSU2_TR(0x4d8160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8161:{NFSU2_TR(0x4d8161);
w4(R+4,u32(0x8a3288ull));
}
B4d8166:{NFSU2_TR(0x4d8166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d816c:{NFSU2_TR(0x4d816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8171ull));
TAIL_STATIC(0x63bcd0u,63b);
}
B4d8171:L4d8171:{c.instructions+=5;NFSU2_TR(0x4d8171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8172:{NFSU2_TR(0x4d8172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8173:{NFSU2_TR(0x4d8173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d8174:{NFSU2_TR(0x4d8174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8175:{NFSU2_TR(0x4d8175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8180:L4d8180:{c.instructions+=7;NFSU2_TR(0x4d8180);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8181:{NFSU2_TR(0x4d8181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8182:{NFSU2_TR(0x4d8182);
__builtin_memmove((R+24),(R+4),4);
}
B4d8184:{NFSU2_TR(0x4d8184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d818a:{NFSU2_TR(0x4d818a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d818c:{NFSU2_TR(0x4d818c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d818e:{NFSU2_TR(0x4d818e);
if(r1(R+518)){{goto L4d81eb;}}
}
B4d8190:L4d8190:{c.instructions+=4;NFSU2_TR(0x4d8190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8196:{NFSU2_TR(0x4d8196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8197:{NFSU2_TR(0x4d8197);
w4(R+4,u32(0x8a3288ull));
}
B4d819c:{NFSU2_TR(0x4d819c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d81a1ull));
TAIL_STATIC(0x61ca10u,61c);
}
B4d81a1:L4d81a1:{c.instructions+=2;NFSU2_TR(0x4d81a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d81a3:{NFSU2_TR(0x4d81a3);
if(r1(R+518)){{goto L4d81eb;}}
}
B4d81a5:L4d81a5:{c.instructions+=6;NFSU2_TR(0x4d81a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81a6:{NFSU2_TR(0x4d81a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d81ac:{NFSU2_TR(0x4d81ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d81b2:{NFSU2_TR(0x4d81b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81b3:{NFSU2_TR(0x4d81b3);
__builtin_memmove((R+4),(R+28),4);
}
B4d81b5:{NFSU2_TR(0x4d81b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d81baull));
TAIL_STATIC(0x413440u,413);
}
B4d81ba:L4d81ba:{c.instructions+=6;NFSU2_TR(0x4d81ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81bc:{NFSU2_TR(0x4d81bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81be:{NFSU2_TR(0x4d81be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81c0:{NFSU2_TR(0x4d81c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81c1:{NFSU2_TR(0x4d81c1);
__builtin_memmove((R+4),(R+28),4);
}
B4d81c3:{NFSU2_TR(0x4d81c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d81c8ull));
TAIL_STATIC(0x639ce0u,639);
}
B4d81c8:L4d81c8:{c.instructions+=6;NFSU2_TR(0x4d81c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d81ce:{NFSU2_TR(0x4d81ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d81d4:{NFSU2_TR(0x4d81d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d81da:{NFSU2_TR(0x4d81da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d81e0:{NFSU2_TR(0x4d81e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d81ea:{NFSU2_TR(0x4d81ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d81eb:L4d81eb:{c.instructions+=3;NFSU2_TR(0x4d81eb);
__builtin_memmove((R+0),gp(0x836408),4);
}
B4d81f0:{NFSU2_TR(0x4d81f0);
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
B4d81f2:{NFSU2_TR(0x4d81f2);
if(r1(R+518)){{goto L4d8213;}}
}
B4d81f4:L4d81f4:{c.instructions+=2;NFSU2_TR(0x4d81f4);
u8 U[5];
__builtin_memmove((U+3),gp(0x83640c),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4d81fa:{NFSU2_TR(0x4d81fa);
if(r1(R+518)){{goto L4d8213;}}
}
B4d81fc:L4d81fc:{c.instructions+=3;NFSU2_TR(0x4d81fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d81fd:{NFSU2_TR(0x4d81fd);
w4(R+4,u32(0x8a3288ull));
}
B4d8202:{NFSU2_TR(0x4d8202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8207ull));
TAIL_STATIC(0x63ae00u,63a);
}
B4d8207:L4d8207:{c.instructions+=2;NFSU2_TR(0x4d8207);
__builtin_memmove(gp(0x836408),(R+12),4);
}
B4d820d:{NFSU2_TR(0x4d820d);
__builtin_memmove(gp(0x83640c),(R+12),1);
}
B4d8213:L4d8213:{c.instructions+=3;NFSU2_TR(0x4d8213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8214:{NFSU2_TR(0x4d8214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d8215:{NFSU2_TR(0x4d8215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8220:L4d8220:{c.instructions+=6;NFSU2_TR(0x4d8220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8221:{NFSU2_TR(0x4d8221);
__builtin_memmove((R+24),(R+4),4);
}
B4d8223:{NFSU2_TR(0x4d8223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8229:{NFSU2_TR(0x4d8229);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d822b:{NFSU2_TR(0x4d822b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d822c:{NFSU2_TR(0x4d822c);
if(r1(R+518)){{goto L4d8250;}}
}
B4d822e:L4d822e:{c.instructions+=4;NFSU2_TR(0x4d822e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d8231:{NFSU2_TR(0x4d8231);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8232:{NFSU2_TR(0x4d8232);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ae0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8238:{NFSU2_TR(0x4d8238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d823dull));
TAIL_STATIC(0x413440u,413);
}
B4d823d:L4d823d:{c.instructions+=3;NFSU2_TR(0x4d823d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8243:{NFSU2_TR(0x4d8243);
__builtin_memmove(gp(0x836408),(R+4),4);
}
B4d8249:{NFSU2_TR(0x4d8249);
s1(0x83640c,u8(0x0ull));
}
B4d8250:L4d8250:{c.instructions+=5;NFSU2_TR(0x4d8250);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11f0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d8256:{NFSU2_TR(0x4d8256);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8259:{NFSU2_TR(0x4d8259);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d825a:{NFSU2_TR(0x4d825a);
__builtin_memmove((R+4),(R+28),4);
}
B4d825c:{NFSU2_TR(0x4d825c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8261ull));
TAIL_STATIC(0x413440u,413);
}
B4d8261:L4d8261:{c.instructions+=6;NFSU2_TR(0x4d8261);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8263:{NFSU2_TR(0x4d8263);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8265:{NFSU2_TR(0x4d8265);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8267:{NFSU2_TR(0x4d8267);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8269:{NFSU2_TR(0x4d8269);
__builtin_memmove((R+4),(R+28),4);
}
B4d826b:{NFSU2_TR(0x4d826b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8270ull));
TAIL_STATIC(0x639ce0u,639);
}
B4d8270:L4d8270:{c.instructions+=12;NFSU2_TR(0x4d8270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8276:{NFSU2_TR(0x4d8276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d827c:{NFSU2_TR(0x4d827c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8282:{NFSU2_TR(0x4d8282);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d8284:{NFSU2_TR(0x4d8284);
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
B4d8286:{NFSU2_TR(0x4d8286);
__builtin_memmove((R+4),(R+518),1);
}
B4d8289:{NFSU2_TR(0x4d8289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d828a:{NFSU2_TR(0x4d828a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8294:{NFSU2_TR(0x4d8294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d829e:{NFSU2_TR(0x4d829e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d82a4:{NFSU2_TR(0x4d82a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d82a5:{NFSU2_TR(0x4d82a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d82b0:L4d82b0:{c.instructions+=3;NFSU2_TR(0x4d82b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d82b1:{NFSU2_TR(0x4d82b1);
__builtin_memmove((R+24),(R+4),4);
}
B4d82b3:{NFSU2_TR(0x4d82b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d82b8ull));
TAIL_STATIC(0x4c1a70u,4c1);
}
B4d82b8:L4d82b8:{c.instructions+=2;NFSU2_TR(0x4d82b8);
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
B4d82bd:{NFSU2_TR(0x4d82bd);
if(r1(R+518)){{goto L4d82c8;}}
}
B4d82bf:L4d82bf:{c.instructions+=2;NFSU2_TR(0x4d82bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d82c0:{NFSU2_TR(0x4d82c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d82c5ull));
TAIL_STATIC(0x575630u,575);
}
B4d82c5:L4d82c5:{c.instructions+=1;NFSU2_TR(0x4d82c5);
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
B4d82c8:L4d82c8:{c.instructions+=3;NFSU2_TR(0x4d82c8);
__builtin_memmove((R+0),(R+24),4);
}
B4d82ca:{NFSU2_TR(0x4d82ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d82cb:{NFSU2_TR(0x4d82cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d82d0:L4d82d0:{c.instructions+=7;NFSU2_TR(0x4d82d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4d82d3:{NFSU2_TR(0x4d82d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d82d4:{NFSU2_TR(0x4d82d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d82d5:{NFSU2_TR(0x4d82d5);
__builtin_memmove((R+24),(R+4),4);
}
B4d82d7:{NFSU2_TR(0x4d82d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d82dd:{NFSU2_TR(0x4d82dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d82de:{NFSU2_TR(0x4d82de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d82e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8180u);}goto L4d8180;}
}
B4d82e3:L4d82e3:{c.instructions+=7;NFSU2_TR(0x4d82e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d82e9:{NFSU2_TR(0x4d82e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d82eb:{NFSU2_TR(0x4d82eb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d82ec:{NFSU2_TR(0x4d82ec);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d82f0:{NFSU2_TR(0x4d82f0);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d82f4:{NFSU2_TR(0x4d82f4);
w4(R+28,u32(0x1ull));
}
B4d82f9:{NFSU2_TR(0x4d82f9);
if(r1(R+518)){{goto L4d85f8;}}
}
B4d82ff:L4d82ff:{c.instructions+=2;NFSU2_TR(0x4d82ff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d8300:{NFSU2_TR(0x4d8300);
if(r1(R+518)){{goto L4d843d;}}
}
B4d8306:L4d8306:{c.instructions+=2;NFSU2_TR(0x4d8306);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d8307:{NFSU2_TR(0x4d8307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d86f0;}}
}
B4d830d:L4d830d:{c.instructions+=9;NFSU2_TR(0x4d830d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8313:{NFSU2_TR(0x4d8313);
w4(R+4,u32(0x2ull));
}
B4d8318:{NFSU2_TR(0x4d8318);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d831c:{NFSU2_TR(0x4d831c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8320:{NFSU2_TR(0x4d8320);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8324:{NFSU2_TR(0x4d8324);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8328:{NFSU2_TR(0x4d8328);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d832c:{NFSU2_TR(0x4d832c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8330:{NFSU2_TR(0x4d8330);
if(r1(R+518)){{goto L4d83a8;}}
}
B4d8332:L4d8332:{c.instructions+=10;NFSU2_TR(0x4d8332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8338:{NFSU2_TR(0x4d8338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8342:{NFSU2_TR(0x4d8342);
__builtin_memmove((R+0),gp(0x8363f0),4);
}
B4d8347:{NFSU2_TR(0x4d8347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d834d:{NFSU2_TR(0x4d834d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8353:{NFSU2_TR(0x4d8353);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8355:{NFSU2_TR(0x4d8355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d835b:{NFSU2_TR(0x4d835b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8361:{NFSU2_TR(0x4d8361);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8363:{NFSU2_TR(0x4d8363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8369;}}
}
B4d8365:L4d8365:{c.instructions+=2;NFSU2_TR(0x4d8365);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8367:{NFSU2_TR(0x4d8367);
{goto L4d836b;}
}
B4d8369:L4d8369:{c.instructions+=1;NFSU2_TR(0x4d8369);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d836b:L4d836b:{c.instructions+=1;NFSU2_TR(0x4d836b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8370ull));
TAIL_STATIC(0x51de30u,51d);
}
B4d8370:L4d8370:{c.instructions+=13;NFSU2_TR(0x4d8370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8376:{NFSU2_TR(0x4d8376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d837c:{NFSU2_TR(0x4d837c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4d837f:{NFSU2_TR(0x4d837f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8382:{NFSU2_TR(0x4d8382);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4d8384:{NFSU2_TR(0x4d8384);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d8388:{NFSU2_TR(0x4d8388);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d838b:{NFSU2_TR(0x4d838b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B4d838d:{NFSU2_TR(0x4d838d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8393:{NFSU2_TR(0x4d8393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8396:{NFSU2_TR(0x4d8396);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d839d:{NFSU2_TR(0x4d839d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d83a3:{NFSU2_TR(0x4d83a3);
w4(R+4,u32(0x2ull));
}
B4d83a8:L4d83a8:{c.instructions+=2;NFSU2_TR(0x4d83a8);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d83ae:{NFSU2_TR(0x4d83ae);
if(r1(R+518)){{goto L4d86f0;}}
}
B4d83b4:L4d83b4:{c.instructions+=10;NFSU2_TR(0x4d83b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d83ba:{NFSU2_TR(0x4d83ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d83c4:{NFSU2_TR(0x4d83c4);
__builtin_memmove((R+0),gp(0x8363f0),4);
}
B4d83c9:{NFSU2_TR(0x4d83c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d83cf:{NFSU2_TR(0x4d83cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d83d5:{NFSU2_TR(0x4d83d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d83d7:{NFSU2_TR(0x4d83d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d83dd:{NFSU2_TR(0x4d83dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d83e3:{NFSU2_TR(0x4d83e3);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d83e5:{NFSU2_TR(0x4d83e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d83eb;}}
}
B4d83e7:L4d83e7:{c.instructions+=2;NFSU2_TR(0x4d83e7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d83e9:{NFSU2_TR(0x4d83e9);
{goto L4d83ed;}
}
B4d83eb:L4d83eb:{c.instructions+=1;NFSU2_TR(0x4d83eb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d83ed:L4d83ed:{c.instructions+=1;NFSU2_TR(0x4d83ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d83f2ull));
TAIL_STATIC(0x51de30u,51d);
}
B4d83f2:L4d83f2:{c.instructions+=19;NFSU2_TR(0x4d83f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d83f8:{NFSU2_TR(0x4d83f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d83fe:{NFSU2_TR(0x4d83fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4d8401:{NFSU2_TR(0x4d8401);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4d8403:{NFSU2_TR(0x4d8403);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4d8407:{NFSU2_TR(0x4d8407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d840a:{NFSU2_TR(0x4d840a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B4d840c:{NFSU2_TR(0x4d840c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8412:{NFSU2_TR(0x4d8412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8415:{NFSU2_TR(0x4d8415);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4d8419:{NFSU2_TR(0x4d8419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d841c:{NFSU2_TR(0x4d841c);
u8 U[16];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4d8420:{NFSU2_TR(0x4d8420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8423:{NFSU2_TR(0x4d8423);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d8426:{NFSU2_TR(0x4d8426);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B4d8428:{NFSU2_TR(0x4d8428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d842b:{NFSU2_TR(0x4d842b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8432:{NFSU2_TR(0x4d8432);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8438:{NFSU2_TR(0x4d8438);
{goto L4d86f0;}
}
B4d843d:L4d843d:{c.instructions+=11;NFSU2_TR(0x4d843d);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8443:{NFSU2_TR(0x4d8443);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d844b:{NFSU2_TR(0x4d844b);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8451:{NFSU2_TR(0x4d8451);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8455:{NFSU2_TR(0x4d8455);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d845b:{NFSU2_TR(0x4d845b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d845f:{NFSU2_TR(0x4d845f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8465:{NFSU2_TR(0x4d8465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d846b:{NFSU2_TR(0x4d846b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d846d:{NFSU2_TR(0x4d846d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d8470:{NFSU2_TR(0x4d8470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8496;}}
}
B4d8472:L4d8472:{c.instructions+=5;NFSU2_TR(0x4d8472);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8476:{NFSU2_TR(0x4d8476);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d847c:{NFSU2_TR(0x4d847c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d847e:{NFSU2_TR(0x4d847e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4d8481:{NFSU2_TR(0x4d8481);
if(r1(R+514)){{goto L4d8496;}}
}
B4d8483:L4d8483:{c.instructions+=4;NFSU2_TR(0x4d8483);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8487:{NFSU2_TR(0x4d8487);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4d848d:{NFSU2_TR(0x4d848d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8491:{NFSU2_TR(0x4d8491);
{goto L4d85c2;}
}
B4d8496:L4d8496:{c.instructions+=17;NFSU2_TR(0x4d8496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d849c:{NFSU2_TR(0x4d849c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d84a2:{NFSU2_TR(0x4d84a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d84a8:{NFSU2_TR(0x4d84a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d84ae:{NFSU2_TR(0x4d84ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d84b0:{NFSU2_TR(0x4d84b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d84b2:{NFSU2_TR(0x4d84b2);
__builtin_memmove((R+0),(R+518),1);
}
B4d84b5:{NFSU2_TR(0x4d84b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4d84b9:{NFSU2_TR(0x4d84b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d84bf:{NFSU2_TR(0x4d84bf);
s1(0x83640c,u8(0x1ull));
}
B4d84c6:{NFSU2_TR(0x4d84c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d84c9:{NFSU2_TR(0x4d84c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B4d84cb:{NFSU2_TR(0x4d84cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d84cf:{NFSU2_TR(0x4d84cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d84d5:{NFSU2_TR(0x4d84d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d84db:{NFSU2_TR(0x4d84db);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d84dd:{NFSU2_TR(0x4d84dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8585;}}
}
B4d84e3:L4d84e3:{c.instructions+=2;NFSU2_TR(0x4d84e3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d84e9:{NFSU2_TR(0x4d84e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8581;}}
}
B4d84ef:L4d84ef:{c.instructions+=14;NFSU2_TR(0x4d84ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d84f2:{NFSU2_TR(0x4d84f2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d84f6:{NFSU2_TR(0x4d84f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d84f9:{NFSU2_TR(0x4d84f9);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B4d84ff:{NFSU2_TR(0x4d84ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4d8505:{NFSU2_TR(0x4d8505);
u8 U[13];
w4(U+0,u32(u32(u32(0x88aull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B4d850c:{NFSU2_TR(0x4d850c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B4d850e:{NFSU2_TR(0x4d850e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8514:{NFSU2_TR(0x4d8514);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8516:{NFSU2_TR(0x4d8516);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4d8519:{NFSU2_TR(0x4d8519);
w4(R+0,u32(r1(R+8)));
}
B4d851c:{NFSU2_TR(0x4d851c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d851e:{NFSU2_TR(0x4d851e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8524:{NFSU2_TR(0x4d8524);
if(r1(R+518)){{goto L4d8560;}}
}
B4d8526:L4d8526:{c.instructions+=23;NFSU2_TR(0x4d8526);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4d8529:{NFSU2_TR(0x4d8529);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4d852c:{NFSU2_TR(0x4d852c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f6088ull))));
}
B4d8531:{NFSU2_TR(0x4d8531);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8534:{NFSU2_TR(0x4d8534);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8537:{NFSU2_TR(0x4d8537);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8538:{NFSU2_TR(0x4d8538);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d853b:{NFSU2_TR(0x4d853b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d853c:{NFSU2_TR(0x4d853c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d853f:{NFSU2_TR(0x4d853f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8540:{NFSU2_TR(0x4d8540);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8543:{NFSU2_TR(0x4d8543);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8544:{NFSU2_TR(0x4d8544);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8547:{NFSU2_TR(0x4d8547);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8548:{NFSU2_TR(0x4d8548);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d854b:{NFSU2_TR(0x4d854b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d854c:{NFSU2_TR(0x4d854c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d854f:{NFSU2_TR(0x4d854f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8552:{NFSU2_TR(0x4d8552);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8553:{NFSU2_TR(0x4d8553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8559:{NFSU2_TR(0x4d8559);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d855a:{NFSU2_TR(0x4d855a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d855b:{NFSU2_TR(0x4d855b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8560ull));
TAIL_STATIC(0x4533b0u,453);
}
B4d8560:L4d8560:{c.instructions+=9;NFSU2_TR(0x4d8560);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8566:{NFSU2_TR(0x4d8566);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d8568:{NFSU2_TR(0x4d8568);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d856b:{NFSU2_TR(0x4d856b);
__builtin_memmove((R+4),(R+518),1);
}
B4d856e:{NFSU2_TR(0x4d856e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8571:{NFSU2_TR(0x4d8571);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8574:{NFSU2_TR(0x4d8574);
w4(R+28,u32(0x1ull));
}
B4d8579:{NFSU2_TR(0x4d8579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d857f:{NFSU2_TR(0x4d857f);
{goto L4d85a2;}
}
B4d8581:L4d8581:{c.instructions+=2;NFSU2_TR(0x4d8581);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8583:{NFSU2_TR(0x4d8583);
if(r1(R+518)){{goto L4d8593;}}
}
B4d8585:L4d8585:{c.instructions+=4;NFSU2_TR(0x4d8585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8588:{NFSU2_TR(0x4d8588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d858b:{NFSU2_TR(0x4d858b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8591:{NFSU2_TR(0x4d8591);
{goto L4d85a2;}
}
B4d8593:L4d8593:{c.instructions+=4;NFSU2_TR(0x4d8593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8596:{NFSU2_TR(0x4d8596);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+28))));
}
B4d8598:{NFSU2_TR(0x4d8598);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d859e:{NFSU2_TR(0x4d859e);
u8 U[16];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4d85a2:L4d85a2:{c.instructions+=3;NFSU2_TR(0x4d85a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d85a8:{NFSU2_TR(0x4d85a8);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d85ae:{NFSU2_TR(0x4d85ae);
if(r1(R+518)){{goto L4d85c2;}}
}
B4d85b0:L4d85b0:{c.instructions+=4;NFSU2_TR(0x4d85b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23d0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d85b6:{NFSU2_TR(0x4d85b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d85b7:{NFSU2_TR(0x4d85b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d85bd:{NFSU2_TR(0x4d85bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d85c2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8030u);}goto L4d8030;}
}
B4d85c2:L4d85c2:{c.instructions+=5;NFSU2_TR(0x4d85c2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d85c6:{NFSU2_TR(0x4d85c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d85cc:{NFSU2_TR(0x4d85cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d85ce:{NFSU2_TR(0x4d85ce);
{u32 ea_=u32(u32(7909248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d85d4:{NFSU2_TR(0x4d85d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d85e7;}}
}
B4d85d6:L4d85d6:{c.instructions+=3;NFSU2_TR(0x4d85d6);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d85dc:{NFSU2_TR(0x4d85dc);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d85e2:{NFSU2_TR(0x4d85e2);
{goto L4d86f0;}
}
B4d85e7:L4d85e7:{c.instructions+=3;NFSU2_TR(0x4d85e7);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4d85ed:{NFSU2_TR(0x4d85ed);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d85f3:{NFSU2_TR(0x4d85f3);
{goto L4d86f0;}
}
B4d85f8:L4d85f8:{c.instructions+=3;NFSU2_TR(0x4d85f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d85fe:{NFSU2_TR(0x4d85fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d8604:{NFSU2_TR(0x4d8604);
if(r1(R+518)){{goto L4d86f0;}}
}
B4d860a:L4d860a:{c.instructions+=3;NFSU2_TR(0x4d860a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ce0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8610:{NFSU2_TR(0x4d8610);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8614:{NFSU2_TR(0x4d8614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8619ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8220u);}goto L4d8220;}
}
B4d8619:L4d8619:{c.instructions+=2;NFSU2_TR(0x4d8619);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d861d:{NFSU2_TR(0x4d861d);
if(r1(R+518)){{goto L4d867b;}}
}
B4d861f:L4d861f:{c.instructions+=10;NFSU2_TR(0x4d861f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8625:{NFSU2_TR(0x4d8625);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d862f:{NFSU2_TR(0x4d862f);
__builtin_memmove((R+0),gp(0x8363f0),4);
}
B4d8634:{NFSU2_TR(0x4d8634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d863a:{NFSU2_TR(0x4d863a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8640:{NFSU2_TR(0x4d8640);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8642:{NFSU2_TR(0x4d8642);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8648:{NFSU2_TR(0x4d8648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8652:{NFSU2_TR(0x4d8652);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8654:{NFSU2_TR(0x4d8654);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d866a;}}
}
B4d8656:L4d8656:{c.instructions+=2;NFSU2_TR(0x4d8656);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8658:{NFSU2_TR(0x4d8658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d865dull));
TAIL_STATIC(0x51de30u,51d);
}
B4d865d:L4d865d:{c.instructions+=3;NFSU2_TR(0x4d865d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d8660:{NFSU2_TR(0x4d8660);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8665:{NFSU2_TR(0x4d8665);
{goto L4d86f0;}
}
B4d866a:L4d866a:{c.instructions+=2;NFSU2_TR(0x4d866a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d866c:{NFSU2_TR(0x4d866c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8671ull));
TAIL_STATIC(0x51de30u,51d);
}
B4d8671:L4d8671:{c.instructions+=3;NFSU2_TR(0x4d8671);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d8674:{NFSU2_TR(0x4d8674);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8679:{NFSU2_TR(0x4d8679);
{goto L4d86f0;}
}
B4d867b:L4d867b:{c.instructions+=2;NFSU2_TR(0x4d867b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8681:{NFSU2_TR(0x4d8681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d869e;}}
}
B4d8683:L4d8683:{c.instructions+=2;NFSU2_TR(0x4d8683);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8689:{NFSU2_TR(0x4d8689);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d869e;}}
}
B4d868b:L4d868b:{c.instructions+=3;NFSU2_TR(0x4d868b);
s1(0x83640c,u8(0x1ull));
}
B4d8692:{NFSU2_TR(0x4d8692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d869c:{NFSU2_TR(0x4d869c);
{goto L4d86eb;}
}
B4d869e:L4d869e:{c.instructions+=10;NFSU2_TR(0x4d869e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d86a4:{NFSU2_TR(0x4d86a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d86a6:{NFSU2_TR(0x4d86a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d86ac:{NFSU2_TR(0x4d86ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d86b6:{NFSU2_TR(0x4d86b6);
__builtin_memmove((R+4),gp(0x8363f0),4);
}
B4d86bc:{NFSU2_TR(0x4d86bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d86c2:{NFSU2_TR(0x4d86c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d86c8:{NFSU2_TR(0x4d86c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d86d2:{NFSU2_TR(0x4d86d2);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d86d4:{NFSU2_TR(0x4d86d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d86da;}}
}
B4d86d6:L4d86d6:{c.instructions+=2;NFSU2_TR(0x4d86d6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d86d8:{NFSU2_TR(0x4d86d8);
{goto L4d86dc;}
}
B4d86da:L4d86da:{c.instructions+=1;NFSU2_TR(0x4d86da);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d86dc:L4d86dc:{c.instructions+=1;NFSU2_TR(0x4d86dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d86e1ull));
TAIL_STATIC(0x51de30u,51d);
}
B4d86e1:L4d86e1:{c.instructions+=2;NFSU2_TR(0x4d86e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d86e4:{NFSU2_TR(0x4d86e4);
s1(0x83640c,u8(0x1ull));
}
B4d86eb:L4d86eb:{c.instructions+=1;NFSU2_TR(0x4d86eb);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d86f0:L4d86f0:{c.instructions+=5;NFSU2_TR(0x4d86f0);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d86f6:{NFSU2_TR(0x4d86f6);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d86fc:{NFSU2_TR(0x4d86fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d86fe:{NFSU2_TR(0x4d86fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d8701:{NFSU2_TR(0x4d8701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8715;}}
}
B4d8703:L4d8703:{c.instructions+=3;NFSU2_TR(0x4d8703);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8709:{NFSU2_TR(0x4d8709);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4d870f:{NFSU2_TR(0x4d870f);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8715:L4d8715:{c.instructions+=5;NFSU2_TR(0x4d8715);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d871b:{NFSU2_TR(0x4d871b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8721:{NFSU2_TR(0x4d8721);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8723:{NFSU2_TR(0x4d8723);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4d8726:{NFSU2_TR(0x4d8726);
if(r1(R+514)){{goto L4d873a;}}
}
B4d8728:L4d8728:{c.instructions+=3;NFSU2_TR(0x4d8728);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d872e:{NFSU2_TR(0x4d872e);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8734:{NFSU2_TR(0x4d8734);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d873a:L4d873a:{c.instructions+=2;NFSU2_TR(0x4d873a);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d873e:{NFSU2_TR(0x4d873e);
if(r1(R+518)){{goto L4d87e5;}}
}
B4d8744:L4d8744:{c.instructions+=3;NFSU2_TR(0x4d8744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d874a:{NFSU2_TR(0x4d874a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d8750:{NFSU2_TR(0x4d8750);
if(r1(R+518)){{goto L4d87e5;}}
}
B4d8756:L4d8756:{c.instructions+=3;NFSU2_TR(0x4d8756);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8759:{NFSU2_TR(0x4d8759);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d875b:{NFSU2_TR(0x4d875b);
if(r1(R+518)){{goto L4d87e5;}}
}
B4d8761:L4d8761:{c.instructions+=2;NFSU2_TR(0x4d8761);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8767:{NFSU2_TR(0x4d8767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8771;}}
}
B4d8769:L4d8769:{c.instructions+=2;NFSU2_TR(0x4d8769);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d876f:{NFSU2_TR(0x4d876f);
if(r1(R+518)){{goto L4d877d;}}
}
B4d8771:L4d8771:{c.instructions+=2;NFSU2_TR(0x4d8771);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8777:{NFSU2_TR(0x4d8777);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d877d:L4d877d:{c.instructions+=18;NFSU2_TR(0x4d877d);
w4(R+0,u32(0x2ull));
}
B4d8782:{NFSU2_TR(0x4d8782);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8786:{NFSU2_TR(0x4d8786);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d878a:{NFSU2_TR(0x4d878a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8790:{NFSU2_TR(0x4d8790);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4d8793:{NFSU2_TR(0x4d8793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B4d8799:{NFSU2_TR(0x4d8799);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d879d:{NFSU2_TR(0x4d879d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87a1:{NFSU2_TR(0x4d87a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87a5:{NFSU2_TR(0x4d87a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87a9:{NFSU2_TR(0x4d87a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4d87ad:{NFSU2_TR(0x4d87ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87b3:{NFSU2_TR(0x4d87b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d87b6:{NFSU2_TR(0x4d87b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B4d87b8:{NFSU2_TR(0x4d87b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87bb:{NFSU2_TR(0x4d87bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d87bc:{NFSU2_TR(0x4d87bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d87c0:{NFSU2_TR(0x4d87c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d87c5ull));
TAIL_STATIC(0x63a650u,63a);
}
B4d87c5:L4d87c5:{c.instructions+=7;NFSU2_TR(0x4d87c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d87c8:{NFSU2_TR(0x4d87c8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d87cc:{NFSU2_TR(0x4d87cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d87d2:{NFSU2_TR(0x4d87d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87d8:{NFSU2_TR(0x4d87d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d87db:{NFSU2_TR(0x4d87db);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d87df:{NFSU2_TR(0x4d87df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d87e5:L4d87e5:{c.instructions+=2;NFSU2_TR(0x4d87e5);
u8 U[7];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d87e9:{NFSU2_TR(0x4d87e9);
if(r1(R+518)){{goto L4d88c1;}}
}
B4d87ef:L4d87ef:{c.instructions+=3;NFSU2_TR(0x4d87ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d87f5:{NFSU2_TR(0x4d87f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d87fb:{NFSU2_TR(0x4d87fb);
if(r1(R+518)){{goto L4d88c1;}}
}
B4d8801:L4d8801:{c.instructions+=3;NFSU2_TR(0x4d8801);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8804:{NFSU2_TR(0x4d8804);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8806:{NFSU2_TR(0x4d8806);
if(r1(R+518)){{goto L4d88c1;}}
}
B4d880c:L4d880c:{c.instructions+=2;NFSU2_TR(0x4d880c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8812:{NFSU2_TR(0x4d8812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d884b;}}
}
B4d8814:L4d8814:{c.instructions+=2;NFSU2_TR(0x4d8814);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d881a:{NFSU2_TR(0x4d881a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d884b;}}
}
B4d881c:L4d881c:{c.instructions+=4;NFSU2_TR(0x4d881c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d881f:{NFSU2_TR(0x4d881f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8820:{NFSU2_TR(0x4d8820);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d8824:{NFSU2_TR(0x4d8824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8829ull));
TAIL_STATIC(0x63a650u,63a);
}
B4d8829:L4d8829:{c.instructions+=8;NFSU2_TR(0x4d8829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d882c:{NFSU2_TR(0x4d882c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d8830:{NFSU2_TR(0x4d8830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8836:{NFSU2_TR(0x4d8836);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d883c:{NFSU2_TR(0x4d883c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d883f:{NFSU2_TR(0x4d883f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d8843:{NFSU2_TR(0x4d8843);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8849:{NFSU2_TR(0x4d8849);
{goto L4d88c1;}
}
B4d884b:L4d884b:{c.instructions+=21;NFSU2_TR(0x4d884b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8851:{NFSU2_TR(0x4d8851);
w4(R+0,u32(0x2ull));
}
B4d8856:{NFSU2_TR(0x4d8856);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d885a:{NFSU2_TR(0x4d885a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d885e:{NFSU2_TR(0x4d885e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8864:{NFSU2_TR(0x4d8864);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4d8867:{NFSU2_TR(0x4d8867);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4d8869:{NFSU2_TR(0x4d8869);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d886d:{NFSU2_TR(0x4d886d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8871:{NFSU2_TR(0x4d8871);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8875:{NFSU2_TR(0x4d8875);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8879:{NFSU2_TR(0x4d8879);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4d887d:{NFSU2_TR(0x4d887d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8880:{NFSU2_TR(0x4d8880);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B4d8882:{NFSU2_TR(0x4d8882);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8888:{NFSU2_TR(0x4d8888);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d888e:{NFSU2_TR(0x4d888e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8894:{NFSU2_TR(0x4d8894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8897:{NFSU2_TR(0x4d8897);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8898:{NFSU2_TR(0x4d8898);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d889c:{NFSU2_TR(0x4d889c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d88a1ull));
TAIL_STATIC(0x63a650u,63a);
}
B4d88a1:L4d88a1:{c.instructions+=7;NFSU2_TR(0x4d88a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d88a4:{NFSU2_TR(0x4d88a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d88a8:{NFSU2_TR(0x4d88a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d88ae:{NFSU2_TR(0x4d88ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d88b4:{NFSU2_TR(0x4d88b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d88b7:{NFSU2_TR(0x4d88b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d88bb:{NFSU2_TR(0x4d88bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d88c1:L4d88c1:{c.instructions+=11;NFSU2_TR(0x4d88c1);
__builtin_memmove((R+0),gp(0x837aa0),4);
}
B4d88c6:{NFSU2_TR(0x4d88c6);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4d88cc:{NFSU2_TR(0x4d88cc);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4d88ce:{NFSU2_TR(0x4d88ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d88d2:{NFSU2_TR(0x4d88d2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4d88d6:{NFSU2_TR(0x4d88d6);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d88db:{NFSU2_TR(0x4d88db);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d88e1:{NFSU2_TR(0x4d88e1);
{u32 ea_=u32(u32(8340948u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d88e7:{NFSU2_TR(0x4d88e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d88e9:{NFSU2_TR(0x4d88e9);
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
B4d88ec:{NFSU2_TR(0x4d88ec);
if(r1(R+518)){{goto L4d88f2;}}
}
B4d88ee:L4d88ee:{c.instructions+=1;NFSU2_TR(0x4d88ee);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d88f2:L4d88f2:{c.instructions+=1;NFSU2_TR(0x4d88f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d88f7ull));
TAIL_STATIC(0x510c30u,510);
}
B4d88f7:L4d88f7:{c.instructions+=2;NFSU2_TR(0x4d88f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d88f9:{NFSU2_TR(0x4d88f9);
if(r1(R+518)){{goto L4d88ff;}}
}
B4d88fb:L4d88fb:{c.instructions+=2;NFSU2_TR(0x4d88fb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4d88fd:{NFSU2_TR(0x4d88fd);
{goto L4d8903;}
}
B4d88ff:L4d88ff:{c.instructions+=1;NFSU2_TR(0x4d88ff);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d8903:L4d8903:{c.instructions+=3;NFSU2_TR(0x4d8903);
__builtin_memmove((R+4),gp(0x8363fc),1);
}
B4d8909:{NFSU2_TR(0x4d8909);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d890b:{NFSU2_TR(0x4d890b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8919;}}
}
B4d890d:L4d890d:{c.instructions+=2;NFSU2_TR(0x4d890d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d890f:{NFSU2_TR(0x4d890f);
if(r1(R+518)){{goto L4d8919;}}
}
B4d8911:L4d8911:{c.instructions+=2;NFSU2_TR(0x4d8911);
w1(R+4,u8(0x1ull));
}
B4d8913:{NFSU2_TR(0x4d8913);
__builtin_memmove(gp(0x8363fc),(R+4),1);
}
B4d8919:L4d8919:{c.instructions+=2;NFSU2_TR(0x4d8919);
u8 U[2];
__builtin_memmove((U+0),gp(0x8363f4),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d891f:{NFSU2_TR(0x4d891f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d89da;}}
}
B4d8925:L4d8925:{c.instructions+=2;NFSU2_TR(0x4d8925);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8927:{NFSU2_TR(0x4d8927);
if(r1(R+518)){{goto L4d89da;}}
}
B4d892d:L4d892d:{c.instructions+=2;NFSU2_TR(0x4d892d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8933:{NFSU2_TR(0x4d8933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8938ull));
TAIL_STATIC(0x444dc0u,444);
}
B4d8938:L4d8938:{c.instructions+=3;NFSU2_TR(0x4d8938);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d893a:{NFSU2_TR(0x4d893a);
__builtin_memmove((R+0),gp(0x7fb708),4);
}
B4d893f:{NFSU2_TR(0x4d893f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8946;}}
}
B4d8941:L4d8941:{c.instructions+=1;NFSU2_TR(0x4d8941);
__builtin_memmove(gp(0x83592c),(R+0),4);
}
B4d8946:L4d8946:{c.instructions+=6;NFSU2_TR(0x4d8946);
__builtin_memmove((R+28),gp(0x83592c),4);
}
B4d894c:{NFSU2_TR(0x4d894c);
__builtin_memmove((R+8),gp(0x7f45d0),4);
}
B4d8952:{NFSU2_TR(0x4d8952);
__builtin_memmove((R+4),(R+0),4);
}
B4d8954:{NFSU2_TR(0x4d8954);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B4d8956:{NFSU2_TR(0x4d8956);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8958:{NFSU2_TR(0x4d8958);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d89d4;}}
}
B4d895a:L4d895a:{c.instructions+=6;NFSU2_TR(0x4d895a);
__builtin_memmove(gp(0x83592c),(R+0),4);
}
B4d895f:{NFSU2_TR(0x4d895f);
__builtin_memmove((R+0),gp(0x836400),4);
}
B4d8964:{NFSU2_TR(0x4d8964);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d8965:{NFSU2_TR(0x4d8965);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x31ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x31ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8968:{NFSU2_TR(0x4d8968);
__builtin_memmove(gp(0x836400),(R+0),4);
}
B4d896d:{NFSU2_TR(0x4d896d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d8976;}}
}
B4d896f:L4d896f:{c.instructions+=2;NFSU2_TR(0x4d896f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d8971:{NFSU2_TR(0x4d8971);
__builtin_memmove(gp(0x836400),(R+0),4);
}
B4d8976:L4d8976:{c.instructions+=6;NFSU2_TR(0x4d8976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d897c:{NFSU2_TR(0x4d897c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x31ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4d897f:{NFSU2_TR(0x4d897f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4d8981:{NFSU2_TR(0x4d8981);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4d8984:{NFSU2_TR(0x4d8984);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7f4608ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d898a:{NFSU2_TR(0x4d898a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d89b8;}}
}
B4d898c:L4d898c:{c.instructions+=1;NFSU2_TR(0x4d898c);
__builtin_memmove((R+16),(R+16),4);
}
B4d8990:L4d8990:{c.instructions+=4;NFSU2_TR(0x4d8990);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d8991:{NFSU2_TR(0x4d8991);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x31ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x31ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8994:{NFSU2_TR(0x4d8994);
__builtin_memmove(gp(0x836400),(R+0),4);
}
B4d8999:{NFSU2_TR(0x4d8999);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d89a2;}}
}
B4d899b:L4d899b:{c.instructions+=2;NFSU2_TR(0x4d899b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d899d:{NFSU2_TR(0x4d899d);
__builtin_memmove(gp(0x836400),(R+0),4);
}
B4d89a2:L4d89a2:{c.instructions+=6;NFSU2_TR(0x4d89a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d89a8:{NFSU2_TR(0x4d89a8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x31ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4d89ab:{NFSU2_TR(0x4d89ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4d89ad:{NFSU2_TR(0x4d89ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4d89b0:{NFSU2_TR(0x4d89b0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f4608ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d89b6:{NFSU2_TR(0x4d89b6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8990u);}goto L4d8990;}}
}
B4d89b8:L4d89b8:{c.instructions+=8;NFSU2_TR(0x4d89b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d89be:{NFSU2_TR(0x4d89be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x31ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4d89c1:{NFSU2_TR(0x4d89c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4d89c3:{NFSU2_TR(0x4d89c3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4d89c6:{NFSU2_TR(0x4d89c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7f4610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d89cc:{NFSU2_TR(0x4d89cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d89cd:{NFSU2_TR(0x4d89cd);
__builtin_memmove((R+4),(R+24),4);
}
B4d89cf:{NFSU2_TR(0x4d89cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d89d4ull));
TAIL_STATIC(0x4a5bd0u,4a5);
}
B4d89d4:L4d89d4:{c.instructions+=1;NFSU2_TR(0x4d89d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x167ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d89da:L4d89da:{c.instructions+=2;NFSU2_TR(0x4d89da);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x167ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d89e0:{NFSU2_TR(0x4d89e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d89fd;}}
}
B4d89e2:L4d89e2:{c.instructions+=2;NFSU2_TR(0x4d89e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d89e8:{NFSU2_TR(0x4d89e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d89edull));
TAIL_STATIC(0x4a5660u,4a5);
}
B4d89ed:L4d89ed:{c.instructions+=3;NFSU2_TR(0x4d89ed);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d89ef:{NFSU2_TR(0x4d89ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x165ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d89f5:{NFSU2_TR(0x4d89f5);
if(r1(R+518)){{goto L4d89fd;}}
}
B4d89f7:L4d89f7:{c.instructions+=1;NFSU2_TR(0x4d89f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d89fd:L4d89fd:{c.instructions+=2;NFSU2_TR(0x4d89fd);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x165ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8a03:{NFSU2_TR(0x4d8a03);
if(r1(R+518)){{goto L4d8a2a;}}
}
B4d8a05:L4d8a05:{c.instructions+=4;NFSU2_TR(0x4d8a05);
u8 U[2];
__builtin_memmove((U+0),gp(0x8363fc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8a0b:{NFSU2_TR(0x4d8a0b);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4d8a11:{NFSU2_TR(0x4d8a11);
__builtin_memmove(gp(0x837aa0),(R+4),4);
}
B4d8a17:{NFSU2_TR(0x4d8a17);
if(r1(R+518)){{goto L4d8a2a;}}
}
B4d8a19:L4d8a19:{c.instructions+=3;NFSU2_TR(0x4d8a19);
__builtin_memmove(gp(0x8363fc),(R+12),1);
}
B4d8a1f:{NFSU2_TR(0x4d8a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8a25:{NFSU2_TR(0x4d8a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8a2aull));
TAIL_STATIC(0x453380u,453);
}
B4d8a2a:L4d8a2a:{c.instructions+=2;NFSU2_TR(0x4d8a2a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
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
B4d8a30:{NFSU2_TR(0x4d8a30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8a4d;}}
}
B4d8a32:L4d8a32:{c.instructions+=2;NFSU2_TR(0x4d8a32);
w4(R+4,u32(0x8357e0ull));
}
B4d8a37:{NFSU2_TR(0x4d8a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8a3cull));
TAIL_STATIC(0x4022c0u,402);
}
B4d8a3c:L4d8a3c:{c.instructions+=4;NFSU2_TR(0x4d8a3c);
__builtin_memmove((R+8),gp(0x865198),4);
}
B4d8a42:{NFSU2_TR(0x4d8a42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8a43:{NFSU2_TR(0x4d8a43);
w4(R+4,u32(0x8357e0ull));
}
B4d8a48:{NFSU2_TR(0x4d8a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8a4dull));
TAIL_STATIC(0x492e10u,492);
}
B4d8a4d:L4d8a4d:{c.instructions+=3;NFSU2_TR(0x4d8a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8a53:{NFSU2_TR(0x4d8a53);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d8a56:{NFSU2_TR(0x4d8a56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8a85;}}
}
B4d8a58:L4d8a58:{c.instructions+=2;NFSU2_TR(0x4d8a58);
u8 U[2];
__builtin_memmove((U+0),gp(0x8363fc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8a5e:{NFSU2_TR(0x4d8a5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8a85;}}
}
B4d8a60:L4d8a60:{c.instructions+=7;NFSU2_TR(0x4d8a60);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8a66:{NFSU2_TR(0x4d8a66);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8a6c:{NFSU2_TR(0x4d8a6c);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d8a72:{NFSU2_TR(0x4d8a72);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4d8a74:{NFSU2_TR(0x4d8a74);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8a7a:{NFSU2_TR(0x4d8a7a);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8a80:{NFSU2_TR(0x4d8a80);
{goto L4d8b2a;}
}
B4d8a85:L4d8a85:{c.instructions+=11;NFSU2_TR(0x4d8a85);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8a8b:{NFSU2_TR(0x4d8a8b);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8a91:{NFSU2_TR(0x4d8a91);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8a95:{NFSU2_TR(0x4d8a95);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8a9b:{NFSU2_TR(0x4d8a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8a9f:{NFSU2_TR(0x4d8a9f);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8aa5:{NFSU2_TR(0x4d8aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8aab:{NFSU2_TR(0x4d8aab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8ab1:{NFSU2_TR(0x4d8ab1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8ab3:{NFSU2_TR(0x4d8ab3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d8ab6:{NFSU2_TR(0x4d8ab6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8ad5;}}
}
B4d8ab8:L4d8ab8:{c.instructions+=5;NFSU2_TR(0x4d8ab8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8abc:{NFSU2_TR(0x4d8abc);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8ac2:{NFSU2_TR(0x4d8ac2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8ac4:{NFSU2_TR(0x4d8ac4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4d8ac7:{NFSU2_TR(0x4d8ac7);
if(r1(R+514)){{goto L4d8ad5;}}
}
B4d8ac9:L4d8ac9:{c.instructions+=3;NFSU2_TR(0x4d8ac9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4d8acb:{NFSU2_TR(0x4d8acb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8acf:{NFSU2_TR(0x4d8acf);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4d8ad5:L4d8ad5:{c.instructions+=5;NFSU2_TR(0x4d8ad5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d8adb:{NFSU2_TR(0x4d8adb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4d8add:{NFSU2_TR(0x4d8add);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8adf:{NFSU2_TR(0x4d8adf);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d8ae5:{NFSU2_TR(0x4d8ae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8aef;}}
}
B4d8ae7:L4d8ae7:{c.instructions+=2;NFSU2_TR(0x4d8ae7);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8aed:{NFSU2_TR(0x4d8aed);
{goto L4d8af5;}
}
B4d8aef:L4d8aef:{c.instructions+=1;NFSU2_TR(0x4d8aef);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4d8af5:L4d8af5:{c.instructions+=9;NFSU2_TR(0x4d8af5);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8afb:{NFSU2_TR(0x4d8afb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4d8afd:{NFSU2_TR(0x4d8afd);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d8b03:{NFSU2_TR(0x4d8b03);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8b09:{NFSU2_TR(0x4d8b09);
{u32 ea_=u32(u32(8340900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8b0f:{NFSU2_TR(0x4d8b0f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8b15:{NFSU2_TR(0x4d8b15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8b17:{NFSU2_TR(0x4d8b17);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d8b1a:{NFSU2_TR(0x4d8b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8b2a;}}
}
B4d8b1c:L4d8b1c:{c.instructions+=2;NFSU2_TR(0x4d8b1c);
u8 U[2];
__builtin_memmove((U+0),gp(0x8363fc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d8b22:{NFSU2_TR(0x4d8b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8b2a;}}
}
B4d8b24:L4d8b24:{c.instructions+=1;NFSU2_TR(0x4d8b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x167ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8b2a:L4d8b2a:{c.instructions+=5;NFSU2_TR(0x4d8b2a);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8b30:{NFSU2_TR(0x4d8b30);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8b36:{NFSU2_TR(0x4d8b36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8b38:{NFSU2_TR(0x4d8b38);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d8b3b:{NFSU2_TR(0x4d8b3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8b4f;}}
}
B4d8b3d:L4d8b3d:{c.instructions+=3;NFSU2_TR(0x4d8b3d);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8b43:{NFSU2_TR(0x4d8b43);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4d8b49:{NFSU2_TR(0x4d8b49);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8b4f:L4d8b4f:{c.instructions+=5;NFSU2_TR(0x4d8b4f);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8b55:{NFSU2_TR(0x4d8b55);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8b5b:{NFSU2_TR(0x4d8b5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8b5d:{NFSU2_TR(0x4d8b5d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4d8b60:{NFSU2_TR(0x4d8b60);
if(r1(R+514)){{goto L4d8b74;}}
}
B4d8b62:L4d8b62:{c.instructions+=3;NFSU2_TR(0x4d8b62);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8b68:{NFSU2_TR(0x4d8b68);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4d8b6e:{NFSU2_TR(0x4d8b6e);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8b74:L4d8b74:{c.instructions+=2;NFSU2_TR(0x4d8b74);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1cd0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8b7a:{NFSU2_TR(0x4d8b7a);
if(r1(R+518)){{goto L4d8bb4;}}
}
B4d8b7c:L4d8b7c:{c.instructions+=2;NFSU2_TR(0x4d8b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8b7f:{NFSU2_TR(0x4d8b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8b87:L4d8b87:{c.instructions+=5;NFSU2_TR(0x4d8b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d8b89:{NFSU2_TR(0x4d8b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8b8c:{NFSU2_TR(0x4d8b8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4d8b8f:{NFSU2_TR(0x4d8b8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8b92:{NFSU2_TR(0x4d8b92);
if(r1(R+518)){{goto L4d8ba0;}}
}
B4d8b94:L4d8b94:{c.instructions+=5;NFSU2_TR(0x4d8b94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8b96:{NFSU2_TR(0x4d8b96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8b98:{NFSU2_TR(0x4d8b98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8b9a:{NFSU2_TR(0x4d8b9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8b9b:{NFSU2_TR(0x4d8b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ba0ull));
TAIL_STATIC(0x639ce0u,639);
}
B4d8ba0:L4d8ba0:{c.instructions+=5;NFSU2_TR(0x4d8ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8ba4:{NFSU2_TR(0x4d8ba4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4d8ba7:{NFSU2_TR(0x4d8ba7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d8ba8:{NFSU2_TR(0x4d8ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8bac:{NFSU2_TR(0x4d8bac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8b87u);}goto L4d8b87;}}
}
B4d8bae:L4d8bae:{c.instructions+=1;NFSU2_TR(0x4d8bae);
__builtin_memmove(gp(0x8a1cd0),(R+12),4);
}
B4d8bb4:L4d8bb4:{c.instructions+=2;NFSU2_TR(0x4d8bb4);
__builtin_memmove((R+4),(R+24),4);
}
B4d8bb6:{NFSU2_TR(0x4d8bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8bbbull));
TAIL_STATIC(0x4a6030u,4a6);
}
B4d8bbb:L4d8bbb:{c.instructions+=6;NFSU2_TR(0x4d8bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8bbe:{NFSU2_TR(0x4d8bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8bc4:{NFSU2_TR(0x4d8bc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8bc5:{NFSU2_TR(0x4d8bc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8bc6:{NFSU2_TR(0x4d8bc6);
__builtin_memmove((R+4),(R+24),4);
}
B4d8bc8:{NFSU2_TR(0x4d8bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8bcdull));
TAIL_STATIC(0x4a6670u,4a6);
}
B4d8bcd:L4d8bcd:{c.instructions+=6;NFSU2_TR(0x4d8bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8bd0:{NFSU2_TR(0x4d8bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8bd6:{NFSU2_TR(0x4d8bd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8bd7:{NFSU2_TR(0x4d8bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8bd8:{NFSU2_TR(0x4d8bd8);
__builtin_memmove((R+4),(R+24),4);
}
B4d8bda:{NFSU2_TR(0x4d8bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8bdfull));
TAIL_STATIC(0x4a6670u,4a6);
}
B4d8bdf:L4d8bdf:{c.instructions+=2;NFSU2_TR(0x4d8bdf);
__builtin_memmove((R+4),(R+24),4);
}
B4d8be1:{NFSU2_TR(0x4d8be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8be6ull));
TAIL_STATIC(0x4c1ba0u,4c1);
}
B4d8be6:L4d8be6:{c.instructions+=5;NFSU2_TR(0x4d8be6);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8bec:{NFSU2_TR(0x4d8bec);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d8bf2:{NFSU2_TR(0x4d8bf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d8bf4:{NFSU2_TR(0x4d8bf4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4d8bf7:{NFSU2_TR(0x4d8bf7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4d8c3e;}}
}
B4d8bf9:L4d8bf9:{c.instructions+=4;NFSU2_TR(0x4d8bf9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8bff:{NFSU2_TR(0x4d8bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8c05:{NFSU2_TR(0x4d8c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8c0b:{NFSU2_TR(0x4d8c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8c27;}}
}
B4d8c0d:L4d8c0d:{c.instructions+=3;NFSU2_TR(0x4d8c0d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4d8c13:{NFSU2_TR(0x4d8c13);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c15:{NFSU2_TR(0x4d8c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8c1aull));
TAIL_STATIC(0x458520u,458);
}
B4d8c1a:L4d8c1a:{c.instructions+=2;NFSU2_TR(0x4d8c1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8c21:{NFSU2_TR(0x4d8c21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8c27:L4d8c27:{c.instructions+=8;NFSU2_TR(0x4d8c27);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4d8c2d:{NFSU2_TR(0x4d8c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8c2e:{NFSU2_TR(0x4d8c2e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4d8c30:{NFSU2_TR(0x4d8c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8c31:{NFSU2_TR(0x4d8c31);
{u32 ea_=u32(u32(8308824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4d8c37:{NFSU2_TR(0x4d8c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d8c38:{NFSU2_TR(0x4d8c38);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8c3b:{NFSU2_TR(0x4d8c3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8c3e:L4d8c3e:{c.instructions+=2;NFSU2_TR(0x4d8c3e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d8c44:{NFSU2_TR(0x4d8c44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8c60;}}
}
B4d8c46:L4d8c46:{c.instructions+=3;NFSU2_TR(0x4d8c46);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4d8c4c:{NFSU2_TR(0x4d8c4c);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c4e:{NFSU2_TR(0x4d8c4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8c53ull));
TAIL_STATIC(0x458560u,458);
}
B4d8c53:L4d8c53:{c.instructions+=2;NFSU2_TR(0x4d8c53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8c5a:{NFSU2_TR(0x4d8c5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8c60:L4d8c60:{c.instructions+=5;NFSU2_TR(0x4d8c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8c61:{NFSU2_TR(0x4d8c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8c62:{NFSU2_TR(0x4d8c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d8c63:{NFSU2_TR(0x4d8c63);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8c66:{NFSU2_TR(0x4d8c66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8c70:L4d8c70:{c.instructions+=8;NFSU2_TR(0x4d8c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4d8c73:{NFSU2_TR(0x4d8c73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c74:{NFSU2_TR(0x4d8c74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c75:{NFSU2_TR(0x4d8c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d8c79:{NFSU2_TR(0x4d8c79);
__builtin_memmove((R+24),(R+4),4);
}
B4d8c7b:{NFSU2_TR(0x4d8c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8c81:{NFSU2_TR(0x4d8c81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c82:{NFSU2_TR(0x4d8c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8c87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8030u);}goto L4d8030;}
}
B4d8c87:L4d8c87:{c.instructions+=10;NFSU2_TR(0x4d8c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d8c89:{NFSU2_TR(0x4d8c89);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B4d8c8f:{NFSU2_TR(0x4d8c8f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4d8c95:{NFSU2_TR(0x4d8c95);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4d8c97:{NFSU2_TR(0x4d8c97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c98:{NFSU2_TR(0x4d8c98);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8c9d:{NFSU2_TR(0x4d8c9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8ca1:{NFSU2_TR(0x4d8ca1);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ca3:{NFSU2_TR(0x4d8ca3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ca4:{NFSU2_TR(0x4d8ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ca9ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d8ca9:L4d8ca9:{c.instructions+=3;NFSU2_TR(0x4d8ca9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d8cad:{NFSU2_TR(0x4d8cad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cae:{NFSU2_TR(0x4d8cae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8cb3ull));
TAIL_STATIC(0x505450u,505);
}
B4d8cb3:L4d8cb3:{c.instructions+=4;NFSU2_TR(0x4d8cb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cb4:{NFSU2_TR(0x4d8cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8cba:{NFSU2_TR(0x4d8cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cbb:{NFSU2_TR(0x4d8cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8cc0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d8cc0:L4d8cc0:{c.instructions+=7;NFSU2_TR(0x4d8cc0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4d8cc5:{NFSU2_TR(0x4d8cc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d8cc8:{NFSU2_TR(0x4d8cc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8ccb:{NFSU2_TR(0x4d8ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8cce:{NFSU2_TR(0x4d8cce);
u8 U[4];
w4(U+0,u32(0x13c45eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cd3:{NFSU2_TR(0x4d8cd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cd4:{NFSU2_TR(0x4d8cd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8ce3;}}
}
B4d8cd6:L4d8cd6:{c.instructions+=1;NFSU2_TR(0x4d8cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8cdbull));
TAIL_STATIC(0x5379c0u,537);
}
B4d8cdb:L4d8cdb:{c.instructions+=2;NFSU2_TR(0x4d8cdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cdc:{NFSU2_TR(0x4d8cdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ce1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4d8ce1:L4d8ce1:{c.instructions+=1;NFSU2_TR(0x4d8ce1);
{goto L4d8cee;}
}
B4d8ce3:L4d8ce3:{c.instructions+=1;NFSU2_TR(0x4d8ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ce8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d8ce8:L4d8ce8:{c.instructions+=2;NFSU2_TR(0x4d8ce8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ce9:{NFSU2_TR(0x4d8ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ceeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d8cee:L4d8cee:{c.instructions+=6;NFSU2_TR(0x4d8cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8cf2:{NFSU2_TR(0x4d8cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d8cf5:{NFSU2_TR(0x4d8cf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cf6:{NFSU2_TR(0x4d8cf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8cf7:{NFSU2_TR(0x4d8cf7);
__builtin_memmove((R+4),(R+24),4);
}
B4d8cf9:{NFSU2_TR(0x4d8cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8cfeull));
TAIL_STATIC(0x4a5f30u,4a5);
}
B4d8cfe:L4d8cfe:{c.instructions+=2;NFSU2_TR(0x4d8cfe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d8d05:{NFSU2_TR(0x4d8d05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8d11;}}
}
B4d8d07:L4d8d07:{c.instructions+=1;NFSU2_TR(0x4d8d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8d11:L4d8d11:{c.instructions+=4;NFSU2_TR(0x4d8d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8d12:{NFSU2_TR(0x4d8d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8d13:{NFSU2_TR(0x4d8d13);
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
B4d8d16:{NFSU2_TR(0x4d8d16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8d20:L4d8d20:{c.instructions+=5;NFSU2_TR(0x4d8d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8d24:{NFSU2_TR(0x4d8d24);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x32c72d8full))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x32c72d8full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d8d29:{NFSU2_TR(0x4d8d29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8d2a:{NFSU2_TR(0x4d8d2a);
__builtin_memmove((R+24),(R+4),4);
}
B4d8d2c:{NFSU2_TR(0x4d8d2c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d8e03;}}
}
B4d8d32:L4d8d32:{c.instructions+=1;NFSU2_TR(0x4d8d32);
if(r1(R+518)){{goto L4d8df1;}}
}
B4d8d38:L4d8d38:{c.instructions+=2;NFSU2_TR(0x4d8d38);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc330d44ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc330d44ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc330d44ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8d3d:{NFSU2_TR(0x4d8d3d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d8da9;}}
}
B4d8d3f:L4d8d3f:{c.instructions+=1;NFSU2_TR(0x4d8d3f);
if(r1(R+518)){{goto L4d8d8e;}}
}
B4d8d41:L4d8d41:{c.instructions+=2;NFSU2_TR(0x4d8d41);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb7fc3eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb7fc3eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb7fc3eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8d46:{NFSU2_TR(0x4d8d46);
if(r1(R+518)){{goto L4d8d80;}}
}
B4d8d48:L4d8d48:{c.instructions+=2;NFSU2_TR(0x4d8d48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa110b22ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d8d4d:{NFSU2_TR(0x4d8d4d);
if(r1(R+518)){{goto L4d8d68;}}
}
B4d8d4f:L4d8d4f:{c.instructions+=2;NFSU2_TR(0x4d8d4f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xad4bbdcull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xad4bbdcull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xad4bbdcull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8d54:{NFSU2_TR(0x4d8d54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8eb2;}}
}
B4d8d5a:L4d8d5a:{c.instructions+=3;NFSU2_TR(0x4d8d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8d64:{NFSU2_TR(0x4d8d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8d65:{NFSU2_TR(0x4d8d65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8d68:L4d8d68:{c.instructions+=7;NFSU2_TR(0x4d8d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8d6b:{NFSU2_TR(0x4d8d6b);
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
B4d8d6d:{NFSU2_TR(0x4d8d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8d73:{NFSU2_TR(0x4d8d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8d76:{NFSU2_TR(0x4d8d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8d7c:{NFSU2_TR(0x4d8d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8d7d:{NFSU2_TR(0x4d8d7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8d80:L4d8d80:{c.instructions+=3;NFSU2_TR(0x4d8d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8d8a:{NFSU2_TR(0x4d8d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8d8b:{NFSU2_TR(0x4d8d8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8d8e:L4d8d8e:{c.instructions+=7;NFSU2_TR(0x4d8d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d8d91:{NFSU2_TR(0x4d8d91);
w4(R+0,u32(0x1ull));
}
B4d8d96:{NFSU2_TR(0x4d8d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8d9c:{NFSU2_TR(0x4d8d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d8d9f:{NFSU2_TR(0x4d8d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8da5:{NFSU2_TR(0x4d8da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8da6:{NFSU2_TR(0x4d8da6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8da9:L4d8da9:{c.instructions+=2;NFSU2_TR(0x4d8da9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe550f66ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe550f66ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe550f66ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8dae:{NFSU2_TR(0x4d8dae);
if(r1(R+518)){{goto L4d8de6;}}
}
B4d8db0:L4d8db0:{c.instructions+=2;NFSU2_TR(0x4d8db0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x18883f75ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x18883f75ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x18883f75ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8db5:{NFSU2_TR(0x4d8db5);
if(r1(R+518)){{goto L4d8dd8;}}
}
B4d8db7:L4d8db7:{c.instructions+=2;NFSU2_TR(0x4d8db7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2401cd38ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2401cd38ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2401cd38ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8dbc:{NFSU2_TR(0x4d8dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8eb2;}}
}
B4d8dc2:L4d8dc2:{c.instructions+=4;NFSU2_TR(0x4d8dc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8dc3:{NFSU2_TR(0x4d8dc3);
__builtin_memmove((R+4),(R+24),4);
}
B4d8dc5:{NFSU2_TR(0x4d8dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8dcf:{NFSU2_TR(0x4d8dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8dd4ull));
TAIL_STATIC(0x4a77a0u,4a7);
}
B4d8dd4:L4d8dd4:{c.instructions+=2;NFSU2_TR(0x4d8dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8dd5:{NFSU2_TR(0x4d8dd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8dd8:L4d8dd8:{c.instructions+=3;NFSU2_TR(0x4d8dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8de2:{NFSU2_TR(0x4d8de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8de3:{NFSU2_TR(0x4d8de3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8de6:L4d8de6:{c.instructions+=3;NFSU2_TR(0x4d8de6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8ded:{NFSU2_TR(0x4d8ded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8dee:{NFSU2_TR(0x4d8dee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8df1:L4d8df1:{c.instructions+=4;NFSU2_TR(0x4d8df1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8df3:{NFSU2_TR(0x4d8df3);
u8 U[4];
w4(U+0,u32(0x32c72d8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8df8:{NFSU2_TR(0x4d8df8);
__builtin_memmove((R+4),(R+24),4);
}
B4d8dfa:{NFSU2_TR(0x4d8dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8dffull));
TAIL_STATIC(0x4a7330u,4a7);
}
B4d8dff:L4d8dff:{c.instructions+=2;NFSU2_TR(0x4d8dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8e00:{NFSU2_TR(0x4d8e00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8e03:L4d8e03:{c.instructions+=2;NFSU2_TR(0x4d8e03);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8efaa777ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8efaa777ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8efaa777ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8e08:{NFSU2_TR(0x4d8e08);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d8e73;}}
}
B4d8e0a:L4d8e0a:{c.instructions+=1;NFSU2_TR(0x4d8e0a);
if(r1(R+518)){{goto L4d8e65;}}
}
B4d8e0c:L4d8e0c:{c.instructions+=2;NFSU2_TR(0x4d8e0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x56aa7e46ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d8e11:{NFSU2_TR(0x4d8e11);
if(r1(R+518)){{goto L4d8e50;}}
}
B4d8e13:L4d8e13:{c.instructions+=2;NFSU2_TR(0x4d8e13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x645e01dfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d8e18:{NFSU2_TR(0x4d8e18);
if(r1(R+518)){{goto L4d8e3b;}}
}
B4d8e1a:L4d8e1a:{c.instructions+=2;NFSU2_TR(0x4d8e1a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6c6603dfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6c6603dfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6c6603dfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8e1f:{NFSU2_TR(0x4d8e1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8eb2;}}
}
B4d8e25:L4d8e25:{c.instructions+=4;NFSU2_TR(0x4d8e25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8e26:{NFSU2_TR(0x4d8e26);
__builtin_memmove((R+4),(R+24),4);
}
B4d8e28:{NFSU2_TR(0x4d8e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8e32:{NFSU2_TR(0x4d8e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8e37ull));
TAIL_STATIC(0x4a77c0u,4a7);
}
B4d8e37:L4d8e37:{c.instructions+=2;NFSU2_TR(0x4d8e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8e38:{NFSU2_TR(0x4d8e38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8e3b:L4d8e3b:{c.instructions+=3;NFSU2_TR(0x4d8e3b);
__builtin_memmove((R+4),(R+24),4);
}
B4d8e3d:{NFSU2_TR(0x4d8e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8e47:{NFSU2_TR(0x4d8e47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8e4cull));
TAIL_STATIC(0x4a77f0u,4a7);
}
B4d8e4c:L4d8e4c:{c.instructions+=2;NFSU2_TR(0x4d8e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8e4d:{NFSU2_TR(0x4d8e4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8e50:L4d8e50:{c.instructions+=3;NFSU2_TR(0x4d8e50);
__builtin_memmove((R+4),(R+24),4);
}
B4d8e52:{NFSU2_TR(0x4d8e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8e5c:{NFSU2_TR(0x4d8e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8e61ull));
TAIL_STATIC(0x4a77f0u,4a7);
}
B4d8e61:L4d8e61:{c.instructions+=2;NFSU2_TR(0x4d8e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8e62:{NFSU2_TR(0x4d8e62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8e65:L4d8e65:{c.instructions+=3;NFSU2_TR(0x4d8e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d8e6f:{NFSU2_TR(0x4d8e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8e70:{NFSU2_TR(0x4d8e70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8e73:L4d8e73:{c.instructions+=2;NFSU2_TR(0x4d8e73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d8e78:{NFSU2_TR(0x4d8e78);
if(r1(R+518)){{goto L4d8e8f;}}
}
B4d8e7a:L4d8e7a:{c.instructions+=2;NFSU2_TR(0x4d8e7a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfc946bfaull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfc946bfaull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfc946bfaull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8e7f:{NFSU2_TR(0x4d8e7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8eb2;}}
}
B4d8e81:L4d8e81:{c.instructions+=4;NFSU2_TR(0x4d8e81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8e83:{NFSU2_TR(0x4d8e83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8e84:{NFSU2_TR(0x4d8e84);
__builtin_memmove((R+4),(R+24),4);
}
B4d8e86:{NFSU2_TR(0x4d8e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8e8bull));
TAIL_STATIC(0x4a7330u,4a7);
}
B4d8e8b:L4d8e8b:{c.instructions+=2;NFSU2_TR(0x4d8e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8e8c:{NFSU2_TR(0x4d8e8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8e8f:L4d8e8f:{c.instructions+=3;NFSU2_TR(0x4d8e8f);
u8 U[4];
w4(U+0,u32(0xc98356baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8e94:{NFSU2_TR(0x4d8e94);
__builtin_memmove((R+4),(R+24),4);
}
B4d8e96:{NFSU2_TR(0x4d8e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8e9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d82d0u);}goto L4d82d0;}
}
B4d8e9b:L4d8e9b:{c.instructions+=2;NFSU2_TR(0x4d8e9b);
__builtin_memmove((R+4),(R+24),4);
}
B4d8e9d:{NFSU2_TR(0x4d8e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ea2ull));
TAIL_STATIC(0x4a5d90u,4a5);
}
B4d8ea2:L4d8ea2:{c.instructions+=4;NFSU2_TR(0x4d8ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8ea5:{NFSU2_TR(0x4d8ea5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4d8ea9:{NFSU2_TR(0x4d8ea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8eaa:{NFSU2_TR(0x4d8eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8eafull));
TAIL_STATIC(0x4a79d0u,4a7);
}
B4d8eaf:L4d8eaf:{c.instructions+=1;NFSU2_TR(0x4d8eaf);
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
B4d8eb2:L4d8eb2:{c.instructions+=2;NFSU2_TR(0x4d8eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8eb3:{NFSU2_TR(0x4d8eb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8ec0:L4d8ec0:{c.instructions+=7;NFSU2_TR(0x4d8ec0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ec1:{NFSU2_TR(0x4d8ec1);
__builtin_memmove((R+20),(R+16),4);
}
B4d8ec3:{NFSU2_TR(0x4d8ec3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ec4:{NFSU2_TR(0x4d8ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d8ec7:{NFSU2_TR(0x4d8ec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ec8:{NFSU2_TR(0x4d8ec8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ec9:{NFSU2_TR(0x4d8ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8eceull));
TAIL_STATIC(0x4a7830u,4a7);
}
B4d8ece:L4d8ece:{c.instructions+=5;NFSU2_TR(0x4d8ece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d8ed1:{NFSU2_TR(0x4d8ed1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8ed4:{NFSU2_TR(0x4d8ed4);
__builtin_memmove((R+28),(R+0),4);
}
B4d8ed6:{NFSU2_TR(0x4d8ed6);
w4(R+24,u32(0x836750ull));
}
B4d8edb:{NFSU2_TR(0x4d8edb);
if(r1(R+518)){{goto L4d8ee2;}}
}
B4d8edd:L4d8edd:{c.instructions+=1;NFSU2_TR(0x4d8edd);
w4(R+24,u32(0x8371b0ull));
}
B4d8ee2:L4d8ee2:{c.instructions+=4;NFSU2_TR(0x4d8ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8ee5:{NFSU2_TR(0x4d8ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ee6:{NFSU2_TR(0x4d8ee6);
__builtin_memmove((R+4),(R+24),4);
}
B4d8ee8:{NFSU2_TR(0x4d8ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8eedull));
TAIL_STATIC(0x413440u,413);
}
B4d8eed:L4d8eed:{c.instructions+=3;NFSU2_TR(0x4d8eed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8371b0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8ef3:{NFSU2_TR(0x4d8ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8ef6:{NFSU2_TR(0x4d8ef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8eff;}}
}
B4d8ef8:L4d8ef8:{c.instructions+=2;NFSU2_TR(0x4d8ef8);
__builtin_memmove(gp(0x83623c),(R+0),4);
}
B4d8efd:{NFSU2_TR(0x4d8efd);
{goto L4d8f0c;}
}
B4d8eff:L4d8eff:{c.instructions+=2;NFSU2_TR(0x4d8eff);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x836750ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d8f05:{NFSU2_TR(0x4d8f05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d8f0c;}}
}
B4d8f07:L4d8f07:{c.instructions+=1;NFSU2_TR(0x4d8f07);
__builtin_memmove(gp(0x836234),(R+0),4);
}
B4d8f0c:L4d8f0c:{c.instructions+=2;NFSU2_TR(0x4d8f0c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d8f0e:{NFSU2_TR(0x4d8f0e);
if(r1(R+518)){{goto L4d8f19;}}
}
B4d8f10:L4d8f10:{c.instructions+=4;NFSU2_TR(0x4d8f10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f11:{NFSU2_TR(0x4d8f11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f12:{NFSU2_TR(0x4d8f12);
__builtin_memmove((R+4),(R+28),4);
}
B4d8f14:{NFSU2_TR(0x4d8f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8f19ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d8c70u);}goto L4d8c70;}
}
B4d8f19:L4d8f19:{c.instructions+=4;NFSU2_TR(0x4d8f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d8f1a:{NFSU2_TR(0x4d8f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d8f1b:{NFSU2_TR(0x4d8f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d8f1c:{NFSU2_TR(0x4d8f1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d8f20:L4d8f20:{c.instructions+=13;NFSU2_TR(0x4d8f20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f22:{NFSU2_TR(0x4d8f22);
u8 U[4];
w4(U+0,u32(0x774b3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f27:{NFSU2_TR(0x4d8f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8f2d:{NFSU2_TR(0x4d8f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f2e:{NFSU2_TR(0x4d8f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8f35:{NFSU2_TR(0x4d8f35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f36:{NFSU2_TR(0x4d8f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8f3a:{NFSU2_TR(0x4d8f3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f3b:{NFSU2_TR(0x4d8f3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f3c:{NFSU2_TR(0x4d8f3c);
__builtin_memmove((R+24),(R+4),4);
}
B4d8f3e:{NFSU2_TR(0x4d8f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f3f:{NFSU2_TR(0x4d8f3f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8f43:{NFSU2_TR(0x4d8f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8f48ull));
TAIL_STATIC(0x551de0u,551);
}
B4d8f48:L4d8f48:{c.instructions+=17;NFSU2_TR(0x4d8f48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d8f4b:{NFSU2_TR(0x4d8f4b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d8f4d:{NFSU2_TR(0x4d8f4d);
u8 U[4];
w4(U+0,u32(0x7964f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d8f53:{NFSU2_TR(0x4d8f53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8f57:{NFSU2_TR(0x4d8f57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d8f59:{NFSU2_TR(0x4d8f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8f5c:{NFSU2_TR(0x4d8f5c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f61:{NFSU2_TR(0x4d8f61);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f66:{NFSU2_TR(0x4d8f66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f68:{NFSU2_TR(0x4d8f68);
u8 U[4];
w4(U+0,u32(0x7964e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f6d:{NFSU2_TR(0x4d8f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8f70:{NFSU2_TR(0x4d8f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d8f73:{NFSU2_TR(0x4d8f73);
u8 U[4];
w4(U+0,u32(0x7964dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f78:{NFSU2_TR(0x4d8f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8f79:{NFSU2_TR(0x4d8f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d8f7c:{NFSU2_TR(0x4d8f7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8f81:{NFSU2_TR(0x4d8f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8f86ull));
TAIL_STATIC(0x5435d0u,543);
}
B4d8f86:L4d8f86:{c.instructions+=3;NFSU2_TR(0x4d8f86);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8f8b:{NFSU2_TR(0x4d8f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8f91:{NFSU2_TR(0x4d8f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8f96ull));
TAIL_STATIC(0x50d510u,50d);
}
B4d8f96:L4d8f96:{c.instructions+=2;NFSU2_TR(0x4d8f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d8f98:{NFSU2_TR(0x4d8f98);
if(r1(R+518)){{goto L4d8f9f;}}
}
B4d8f9a:L4d8f9a:{c.instructions+=1;NFSU2_TR(0x4d8f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8f9full));
TAIL_STATIC(0x4a8630u,4a8);
}
B4d8f9f:L4d8f9f:{c.instructions+=4;NFSU2_TR(0x4d8f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d8fa5:{NFSU2_TR(0x4d8fa5);
__builtin_memmove((R+4),(R+24),4);
}
B4d8fa7:{NFSU2_TR(0x4d8fa7);
s4(0x83a9d0,u32(0x1ull));
}
B4d8fb1:{NFSU2_TR(0x4d8fb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8fb6ull));
TAIL_STATIC(0x4a7a50u,4a7);
}
B4d8fb6:L4d8fb6:{c.instructions+=3;NFSU2_TR(0x4d8fb6);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8fbb:{NFSU2_TR(0x4d8fbb);
u8 U[4];
w4(U+0,u32(0xc330d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8fc0:{NFSU2_TR(0x4d8fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8fc5ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4d8fc5:L4d8fc5:{c.instructions+=3;NFSU2_TR(0x4d8fc5);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8fca:{NFSU2_TR(0x4d8fca);
u8 U[4];
w4(U+0,u32(0xc330d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8fcf:{NFSU2_TR(0x4d8fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8fd4ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4d8fd4:L4d8fd4:{c.instructions+=6;NFSU2_TR(0x4d8fd4);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8fd9:{NFSU2_TR(0x4d8fd9);
u8 U[4];
w4(U+0,u32(0x6c6603dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8fde:{NFSU2_TR(0x4d8fde);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d8fe2:{NFSU2_TR(0x4d8fe2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8fe8:{NFSU2_TR(0x4d8fe8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d8fee:{NFSU2_TR(0x4d8fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d8ff3ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4d8ff3:L4d8ff3:{c.instructions+=3;NFSU2_TR(0x4d8ff3);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ff8:{NFSU2_TR(0x4d8ff8);
u8 U[4];
w4(U+0,u32(0x56aa7e46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d8ffd:{NFSU2_TR(0x4d8ffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d9002ull));
TAIL_STATIC(0x55dda0u,55d);
}
XIT:NFSU2_TR_EXIT(0x4d8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
