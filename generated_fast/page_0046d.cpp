#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_46e(u8* __restrict R,Cpu& c);
u32 body_47e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x46d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x46d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_46d(u8* __restrict R,Cpu& c);
u32 page_46d(Cpu& c){return body_46d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_46d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x46d001:goto L46d001;
case 0x46d003:c.instructions+=1;goto B46d003;
case 0x46d005:goto L46d005;
case 0x46d008:c.instructions+=2;goto B46d008;
case 0x46d009:c.instructions+=1;goto B46d009;
case 0x46d00e:goto L46d00e;
case 0x46d011:c.instructions+=4;goto B46d011;
case 0x46d013:c.instructions+=3;goto B46d013;
case 0x46d015:c.instructions+=2;goto B46d015;
case 0x46d01d:c.instructions+=1;goto B46d01d;
case 0x46d01f:goto L46d01f;
case 0x46d023:c.instructions+=2;goto B46d023;
case 0x46d024:c.instructions+=1;goto B46d024;
case 0x46d029:goto L46d029;
case 0x46d02e:c.instructions+=1;goto B46d02e;
case 0x46d030:goto L46d030;
case 0x46d032:c.instructions+=1;goto B46d032;
case 0x46d037:goto L46d037;
case 0x46d03a:c.instructions+=2;goto B46d03a;
case 0x46d03c:c.instructions+=1;goto B46d03c;
case 0x46d042:goto L46d042;
case 0x46d045:c.instructions+=5;goto B46d045;
case 0x46d049:c.instructions+=4;goto B46d049;
case 0x46d04c:c.instructions+=3;goto B46d04c;
case 0x46d053:c.instructions+=2;goto B46d053;
case 0x46d058:c.instructions+=1;goto B46d058;
case 0x46d05a:goto L46d05a;
case 0x46d05b:c.instructions+=3;goto B46d05b;
case 0x46d060:c.instructions+=2;goto B46d060;
case 0x46d061:c.instructions+=1;goto B46d061;
case 0x46d063:goto L46d063;
case 0x46d065:c.instructions+=1;goto B46d065;
case 0x46d067:goto L46d067;
case 0x46d06c:c.instructions+=1;goto B46d06c;
case 0x46d06e:goto L46d06e;
case 0x46d073:goto L46d073;
case 0x46d075:c.instructions+=4;goto B46d075;
case 0x46d078:c.instructions+=3;goto B46d078;
case 0x46d07b:c.instructions+=2;goto B46d07b;
case 0x46d07d:c.instructions+=1;goto B46d07d;
case 0x46d07f:goto L46d07f;
case 0x46d081:c.instructions+=1;goto B46d081;
case 0x46d083:goto L46d083;
case 0x46d089:c.instructions+=1;goto B46d089;
case 0x46d08b:goto L46d08b;
case 0x46d090:goto L46d090;
case 0x46d093:c.instructions+=4;goto B46d093;
case 0x46d096:c.instructions+=3;goto B46d096;
case 0x46d098:c.instructions+=2;goto B46d098;
case 0x46d09b:c.instructions+=1;goto B46d09b;
case 0x46d09d:goto L46d09d;
case 0x46d09f:c.instructions+=1;goto B46d09f;
case 0x46d0a1:goto L46d0a1;
case 0x46d0a6:c.instructions+=1;goto B46d0a6;
case 0x46d0a8:goto L46d0a8;
case 0x46d0ad:goto L46d0ad;
case 0x46d0b0:c.instructions+=4;goto B46d0b0;
case 0x46d0b3:c.instructions+=3;goto B46d0b3;
case 0x46d0b5:c.instructions+=2;goto B46d0b5;
case 0x46d0b7:c.instructions+=1;goto B46d0b7;
case 0x46d0b9:goto L46d0b9;
case 0x46d0bc:c.instructions+=2;goto B46d0bc;
case 0x46d0bd:c.instructions+=1;goto B46d0bd;
case 0x46d0c2:goto L46d0c2;
case 0x46d0c5:c.instructions+=4;goto B46d0c5;
case 0x46d0c7:c.instructions+=3;goto B46d0c7;
case 0x46d0c9:c.instructions+=2;goto B46d0c9;
case 0x46d0d1:c.instructions+=1;goto B46d0d1;
case 0x46d0d3:goto L46d0d3;
case 0x46d0d7:c.instructions+=2;goto B46d0d7;
case 0x46d0d8:c.instructions+=1;goto B46d0d8;
case 0x46d0dd:goto L46d0dd;
case 0x46d0e2:c.instructions+=1;goto B46d0e2;
case 0x46d0e4:goto L46d0e4;
case 0x46d0e6:c.instructions+=1;goto B46d0e6;
case 0x46d0eb:goto L46d0eb;
case 0x46d0ec:c.instructions+=3;goto B46d0ec;
case 0x46d0ed:c.instructions+=2;goto B46d0ed;
case 0x46d0ee:c.instructions+=1;goto B46d0ee;
case 0x46d100:goto L46d100;
case 0x46d105:c.instructions+=4;goto B46d105;
case 0x46d108:c.instructions+=3;goto B46d108;
case 0x46d10b:c.instructions+=2;goto B46d10b;
case 0x46d10d:c.instructions+=1;goto B46d10d;
case 0x46d10f:goto L46d10f;
case 0x46d113:c.instructions+=3;goto B46d113;
case 0x46d115:c.instructions+=2;goto B46d115;
case 0x46d118:c.instructions+=1;goto B46d118;
case 0x46d11b:goto L46d11b;
case 0x46d11f:c.instructions+=4;goto B46d11f;
case 0x46d122:c.instructions+=3;goto B46d122;
case 0x46d124:c.instructions+=2;goto B46d124;
case 0x46d127:c.instructions+=1;goto B46d127;
case 0x46d129:goto L46d129;
case 0x46d12e:goto L46d12e;
case 0x46d130:goto L46d130;
case 0x46d135:goto L46d135;
case 0x46d13b:c.instructions+=3;goto B46d13b;
case 0x46d13e:c.instructions+=2;goto B46d13e;
case 0x46d140:c.instructions+=1;goto B46d140;
case 0x46d142:goto L46d142;
case 0x46d146:c.instructions+=1;goto B46d146;
case 0x46d148:goto L46d148;
case 0x46d14a:goto L46d14a;
case 0x46d150:goto L46d150;
case 0x46d153:c.instructions+=10;goto B46d153;
case 0x46d157:c.instructions+=9;goto B46d157;
case 0x46d15b:c.instructions+=8;goto B46d15b;
case 0x46d15f:c.instructions+=7;goto B46d15f;
case 0x46d163:c.instructions+=6;goto B46d163;
case 0x46d167:c.instructions+=5;goto B46d167;
case 0x46d168:c.instructions+=4;goto B46d168;
case 0x46d16d:c.instructions+=3;goto B46d16d;
case 0x46d171:c.instructions+=2;goto B46d171;
case 0x46d175:c.instructions+=1;goto B46d175;
case 0x46d17a:goto L46d17a;
case 0x46d17d:c.instructions+=2;goto B46d17d;
case 0x46d17f:c.instructions+=1;goto B46d17f;
case 0x46d181:goto L46d181;
case 0x46d186:c.instructions+=2;goto B46d186;
case 0x46d18b:c.instructions+=1;goto B46d18b;
case 0x46d190:goto L46d190;
case 0x46d194:c.instructions+=3;goto B46d194;
case 0x46d195:c.instructions+=2;goto B46d195;
case 0x46d19a:c.instructions+=1;goto B46d19a;
case 0x46d19f:goto L46d19f;
case 0x46d1a2:goto L46d1a2;
case 0x46d1a8:c.instructions+=4;goto B46d1a8;
case 0x46d1ab:c.instructions+=3;goto B46d1ab;
case 0x46d1ae:c.instructions+=2;goto B46d1ae;
case 0x46d1b0:c.instructions+=1;goto B46d1b0;
case 0x46d1b2:goto L46d1b2;
case 0x46d1b4:c.instructions+=3;goto B46d1b4;
case 0x46d1b9:c.instructions+=2;goto B46d1b9;
case 0x46d1bb:c.instructions+=1;goto B46d1bb;
case 0x46d1c0:goto L46d1c0;
case 0x46d1c3:c.instructions+=1;goto B46d1c3;
case 0x46d1d0:goto L46d1d0;
case 0x46d1d3:c.instructions+=12;goto B46d1d3;
case 0x46d1d7:c.instructions+=11;goto B46d1d7;
case 0x46d1db:c.instructions+=10;goto B46d1db;
case 0x46d1df:c.instructions+=9;goto B46d1df;
case 0x46d1e3:c.instructions+=8;goto B46d1e3;
case 0x46d1e7:c.instructions+=7;goto B46d1e7;
case 0x46d1eb:c.instructions+=6;goto B46d1eb;
case 0x46d1ef:c.instructions+=5;goto B46d1ef;
case 0x46d1f0:c.instructions+=4;goto B46d1f0;
case 0x46d1f5:c.instructions+=3;goto B46d1f5;
case 0x46d1f9:c.instructions+=2;goto B46d1f9;
case 0x46d1fd:c.instructions+=1;goto B46d1fd;
case 0x46d202:goto L46d202;
case 0x46d205:c.instructions+=2;goto B46d205;
case 0x46d207:c.instructions+=1;goto B46d207;
case 0x46d209:goto L46d209;
case 0x46d20e:c.instructions+=2;goto B46d20e;
case 0x46d213:c.instructions+=1;goto B46d213;
case 0x46d218:goto L46d218;
case 0x46d21c:c.instructions+=3;goto B46d21c;
case 0x46d21d:c.instructions+=2;goto B46d21d;
case 0x46d222:c.instructions+=1;goto B46d222;
case 0x46d227:goto L46d227;
case 0x46d22a:goto L46d22a;
case 0x46d22f:c.instructions+=4;goto B46d22f;
case 0x46d232:c.instructions+=3;goto B46d232;
case 0x46d235:c.instructions+=2;goto B46d235;
case 0x46d237:c.instructions+=1;goto B46d237;
case 0x46d239:goto L46d239;
case 0x46d23b:c.instructions+=3;goto B46d23b;
case 0x46d240:c.instructions+=2;goto B46d240;
case 0x46d242:c.instructions+=1;goto B46d242;
case 0x46d247:goto L46d247;
case 0x46d24a:c.instructions+=1;goto B46d24a;
case 0x46d250:goto L46d250;
case 0x46d253:c.instructions+=12;goto B46d253;
case 0x46d257:c.instructions+=11;goto B46d257;
case 0x46d25b:c.instructions+=10;goto B46d25b;
case 0x46d25f:c.instructions+=9;goto B46d25f;
case 0x46d263:c.instructions+=8;goto B46d263;
case 0x46d267:c.instructions+=7;goto B46d267;
case 0x46d26b:c.instructions+=6;goto B46d26b;
case 0x46d26f:c.instructions+=5;goto B46d26f;
case 0x46d270:c.instructions+=4;goto B46d270;
case 0x46d275:c.instructions+=3;goto B46d275;
case 0x46d279:c.instructions+=2;goto B46d279;
case 0x46d27d:c.instructions+=1;goto B46d27d;
case 0x46d282:goto L46d282;
case 0x46d285:c.instructions+=2;goto B46d285;
case 0x46d287:c.instructions+=1;goto B46d287;
case 0x46d289:goto L46d289;
case 0x46d28e:c.instructions+=2;goto B46d28e;
case 0x46d293:c.instructions+=1;goto B46d293;
case 0x46d298:goto L46d298;
case 0x46d29c:c.instructions+=3;goto B46d29c;
case 0x46d29d:c.instructions+=2;goto B46d29d;
case 0x46d2a2:c.instructions+=1;goto B46d2a2;
case 0x46d2a7:goto L46d2a7;
case 0x46d2aa:goto L46d2aa;
case 0x46d2af:c.instructions+=4;goto B46d2af;
case 0x46d2b2:c.instructions+=3;goto B46d2b2;
case 0x46d2b5:c.instructions+=2;goto B46d2b5;
case 0x46d2b7:c.instructions+=1;goto B46d2b7;
case 0x46d2b9:goto L46d2b9;
case 0x46d2bb:c.instructions+=3;goto B46d2bb;
case 0x46d2c0:c.instructions+=2;goto B46d2c0;
case 0x46d2c2:c.instructions+=1;goto B46d2c2;
case 0x46d2c7:goto L46d2c7;
case 0x46d2ca:c.instructions+=1;goto B46d2ca;
case 0x46d2d0:goto L46d2d0;
case 0x46d2d4:c.instructions+=4;goto B46d2d4;
case 0x46d2d7:c.instructions+=3;goto B46d2d7;
case 0x46d2da:c.instructions+=2;goto B46d2da;
case 0x46d2df:c.instructions+=1;goto B46d2df;
case 0x46d2e1:goto L46d2e1;
case 0x46d2e3:goto L46d2e3;
case 0x46d2e5:c.instructions+=2;goto B46d2e5;
case 0x46d2e6:c.instructions+=1;goto B46d2e6;
case 0x46d2e8:goto L46d2e8;
case 0x46d2e9:c.instructions+=1;goto B46d2e9;
case 0x46d2eb:goto L46d2eb;
case 0x46d2ed:goto L46d2ed;
case 0x46d2f2:c.instructions+=1;goto B46d2f2;
case 0x46d2f4:goto L46d2f4;
case 0x46d2f9:c.instructions+=1;goto B46d2f9;
case 0x46d2fb:goto L46d2fb;
case 0x46d2fe:c.instructions+=1;goto B46d2fe;
case 0x46d300:goto L46d300;
case 0x46d306:c.instructions+=1;goto B46d306;
case 0x46d308:goto L46d308;
case 0x46d30d:c.instructions+=1;goto B46d30d;
case 0x46d30f:goto L46d30f;
case 0x46d314:goto L46d314;
case 0x46d318:c.instructions+=9;goto B46d318;
case 0x46d31c:c.instructions+=8;goto B46d31c;
case 0x46d320:c.instructions+=7;goto B46d320;
case 0x46d324:c.instructions+=6;goto B46d324;
case 0x46d328:c.instructions+=5;goto B46d328;
case 0x46d329:c.instructions+=4;goto B46d329;
case 0x46d32e:c.instructions+=3;goto B46d32e;
case 0x46d332:c.instructions+=2;goto B46d332;
case 0x46d336:c.instructions+=1;goto B46d336;
case 0x46d33b:goto L46d33b;
case 0x46d33e:c.instructions+=2;goto B46d33e;
case 0x46d340:c.instructions+=1;goto B46d340;
case 0x46d342:goto L46d342;
case 0x46d347:c.instructions+=2;goto B46d347;
case 0x46d34c:c.instructions+=1;goto B46d34c;
case 0x46d351:goto L46d351;
case 0x46d355:c.instructions+=3;goto B46d355;
case 0x46d356:c.instructions+=2;goto B46d356;
case 0x46d35b:c.instructions+=1;goto B46d35b;
case 0x46d360:goto L46d360;
case 0x46d363:goto L46d363;
case 0x46d369:c.instructions+=4;goto B46d369;
case 0x46d36c:c.instructions+=3;goto B46d36c;
case 0x46d36f:c.instructions+=2;goto B46d36f;
case 0x46d371:c.instructions+=1;goto B46d371;
case 0x46d373:goto L46d373;
case 0x46d375:c.instructions+=3;goto B46d375;
case 0x46d37a:c.instructions+=2;goto B46d37a;
case 0x46d37c:c.instructions+=1;goto B46d37c;
case 0x46d381:goto L46d381;
case 0x46d384:c.instructions+=1;goto B46d384;
case 0x46d390:goto L46d390;
case 0x46d393:c.instructions+=8;goto B46d393;
case 0x46d397:c.instructions+=7;goto B46d397;
case 0x46d39b:c.instructions+=6;goto B46d39b;
case 0x46d39f:c.instructions+=5;goto B46d39f;
case 0x46d3a0:c.instructions+=4;goto B46d3a0;
case 0x46d3a5:c.instructions+=3;goto B46d3a5;
case 0x46d3a9:c.instructions+=2;goto B46d3a9;
case 0x46d3ad:c.instructions+=1;goto B46d3ad;
case 0x46d3b2:goto L46d3b2;
case 0x46d3b5:c.instructions+=2;goto B46d3b5;
case 0x46d3b7:c.instructions+=1;goto B46d3b7;
case 0x46d3b9:goto L46d3b9;
case 0x46d3be:c.instructions+=2;goto B46d3be;
case 0x46d3c3:c.instructions+=1;goto B46d3c3;
case 0x46d3c8:goto L46d3c8;
case 0x46d3cc:c.instructions+=3;goto B46d3cc;
case 0x46d3cd:c.instructions+=2;goto B46d3cd;
case 0x46d3d2:c.instructions+=1;goto B46d3d2;
case 0x46d3d7:goto L46d3d7;
case 0x46d3da:goto L46d3da;
case 0x46d3e0:c.instructions+=4;goto B46d3e0;
case 0x46d3e3:c.instructions+=3;goto B46d3e3;
case 0x46d3e6:c.instructions+=2;goto B46d3e6;
case 0x46d3e8:c.instructions+=1;goto B46d3e8;
case 0x46d3ea:goto L46d3ea;
case 0x46d3ec:c.instructions+=3;goto B46d3ec;
case 0x46d3f1:c.instructions+=2;goto B46d3f1;
case 0x46d3f3:c.instructions+=1;goto B46d3f3;
case 0x46d3f8:goto L46d3f8;
case 0x46d3fb:c.instructions+=1;goto B46d3fb;
case 0x46d400:goto L46d400;
case 0x46d403:c.instructions+=12;goto B46d403;
case 0x46d407:c.instructions+=11;goto B46d407;
case 0x46d40b:c.instructions+=10;goto B46d40b;
case 0x46d40f:c.instructions+=9;goto B46d40f;
case 0x46d413:c.instructions+=8;goto B46d413;
case 0x46d417:c.instructions+=7;goto B46d417;
case 0x46d41b:c.instructions+=6;goto B46d41b;
case 0x46d41f:c.instructions+=5;goto B46d41f;
case 0x46d420:c.instructions+=4;goto B46d420;
case 0x46d425:c.instructions+=3;goto B46d425;
case 0x46d429:c.instructions+=2;goto B46d429;
case 0x46d42d:c.instructions+=1;goto B46d42d;
case 0x46d432:goto L46d432;
case 0x46d435:c.instructions+=2;goto B46d435;
case 0x46d437:c.instructions+=1;goto B46d437;
case 0x46d439:goto L46d439;
case 0x46d43e:c.instructions+=2;goto B46d43e;
case 0x46d443:c.instructions+=1;goto B46d443;
case 0x46d448:goto L46d448;
case 0x46d44c:c.instructions+=3;goto B46d44c;
case 0x46d44d:c.instructions+=2;goto B46d44d;
case 0x46d452:c.instructions+=1;goto B46d452;
case 0x46d457:goto L46d457;
case 0x46d45a:goto L46d45a;
case 0x46d45f:c.instructions+=4;goto B46d45f;
case 0x46d462:c.instructions+=3;goto B46d462;
case 0x46d465:c.instructions+=2;goto B46d465;
case 0x46d467:c.instructions+=1;goto B46d467;
case 0x46d469:goto L46d469;
case 0x46d46b:c.instructions+=3;goto B46d46b;
case 0x46d470:c.instructions+=2;goto B46d470;
case 0x46d472:c.instructions+=1;goto B46d472;
case 0x46d477:goto L46d477;
case 0x46d47a:c.instructions+=1;goto B46d47a;
case 0x46d480:goto L46d480;
case 0x46d483:c.instructions+=9;goto B46d483;
case 0x46d487:c.instructions+=8;goto B46d487;
case 0x46d48b:c.instructions+=7;goto B46d48b;
case 0x46d48f:c.instructions+=6;goto B46d48f;
case 0x46d490:c.instructions+=5;goto B46d490;
case 0x46d495:c.instructions+=4;goto B46d495;
case 0x46d49d:c.instructions+=3;goto B46d49d;
case 0x46d4a1:c.instructions+=2;goto B46d4a1;
case 0x46d4a5:c.instructions+=1;goto B46d4a5;
case 0x46d4aa:goto L46d4aa;
case 0x46d4ad:c.instructions+=2;goto B46d4ad;
case 0x46d4af:c.instructions+=1;goto B46d4af;
case 0x46d4b1:goto L46d4b1;
case 0x46d4b6:c.instructions+=2;goto B46d4b6;
case 0x46d4bb:c.instructions+=1;goto B46d4bb;
case 0x46d4c0:goto L46d4c0;
case 0x46d4c4:c.instructions+=3;goto B46d4c4;
case 0x46d4c5:c.instructions+=2;goto B46d4c5;
case 0x46d4ca:c.instructions+=1;goto B46d4ca;
case 0x46d4cf:goto L46d4cf;
case 0x46d4d2:goto L46d4d2;
case 0x46d4d8:c.instructions+=4;goto B46d4d8;
case 0x46d4db:c.instructions+=3;goto B46d4db;
case 0x46d4de:c.instructions+=2;goto B46d4de;
case 0x46d4e0:c.instructions+=1;goto B46d4e0;
case 0x46d4e2:goto L46d4e2;
case 0x46d4e4:c.instructions+=3;goto B46d4e4;
case 0x46d4e9:c.instructions+=2;goto B46d4e9;
case 0x46d4eb:c.instructions+=1;goto B46d4eb;
case 0x46d4f0:goto L46d4f0;
case 0x46d4f3:c.instructions+=1;goto B46d4f3;
case 0x46d500:goto L46d500;
case 0x46d503:c.instructions+=9;goto B46d503;
case 0x46d507:c.instructions+=8;goto B46d507;
case 0x46d50b:c.instructions+=7;goto B46d50b;
case 0x46d50f:c.instructions+=6;goto B46d50f;
case 0x46d510:c.instructions+=5;goto B46d510;
case 0x46d515:c.instructions+=4;goto B46d515;
case 0x46d51d:c.instructions+=3;goto B46d51d;
case 0x46d521:c.instructions+=2;goto B46d521;
case 0x46d525:c.instructions+=1;goto B46d525;
case 0x46d52a:goto L46d52a;
case 0x46d52d:c.instructions+=2;goto B46d52d;
case 0x46d52f:c.instructions+=1;goto B46d52f;
case 0x46d531:goto L46d531;
case 0x46d536:c.instructions+=2;goto B46d536;
case 0x46d53b:c.instructions+=1;goto B46d53b;
case 0x46d540:goto L46d540;
case 0x46d544:c.instructions+=3;goto B46d544;
case 0x46d545:c.instructions+=2;goto B46d545;
case 0x46d54a:c.instructions+=1;goto B46d54a;
case 0x46d54f:goto L46d54f;
case 0x46d552:goto L46d552;
case 0x46d558:c.instructions+=4;goto B46d558;
case 0x46d55b:c.instructions+=3;goto B46d55b;
case 0x46d55e:c.instructions+=2;goto B46d55e;
case 0x46d560:c.instructions+=1;goto B46d560;
case 0x46d562:goto L46d562;
case 0x46d564:c.instructions+=3;goto B46d564;
case 0x46d569:c.instructions+=2;goto B46d569;
case 0x46d56b:c.instructions+=1;goto B46d56b;
case 0x46d570:goto L46d570;
case 0x46d573:c.instructions+=1;goto B46d573;
case 0x46d580:goto L46d580;
case 0x46d583:c.instructions+=10;goto B46d583;
case 0x46d587:c.instructions+=9;goto B46d587;
case 0x46d58b:c.instructions+=8;goto B46d58b;
case 0x46d58f:c.instructions+=7;goto B46d58f;
case 0x46d590:c.instructions+=6;goto B46d590;
case 0x46d595:c.instructions+=5;goto B46d595;
case 0x46d59d:c.instructions+=4;goto B46d59d;
case 0x46d5a5:c.instructions+=3;goto B46d5a5;
case 0x46d5a9:c.instructions+=2;goto B46d5a9;
case 0x46d5ad:c.instructions+=1;goto B46d5ad;
case 0x46d5b2:goto L46d5b2;
case 0x46d5b5:c.instructions+=2;goto B46d5b5;
case 0x46d5b7:c.instructions+=1;goto B46d5b7;
case 0x46d5b9:goto L46d5b9;
case 0x46d5be:c.instructions+=2;goto B46d5be;
case 0x46d5c3:c.instructions+=1;goto B46d5c3;
case 0x46d5c8:goto L46d5c8;
case 0x46d5cc:c.instructions+=3;goto B46d5cc;
case 0x46d5cd:c.instructions+=2;goto B46d5cd;
case 0x46d5d2:c.instructions+=1;goto B46d5d2;
case 0x46d5d7:goto L46d5d7;
case 0x46d5da:goto L46d5da;
case 0x46d5e0:c.instructions+=4;goto B46d5e0;
case 0x46d5e3:c.instructions+=3;goto B46d5e3;
case 0x46d5e6:c.instructions+=2;goto B46d5e6;
case 0x46d5e8:c.instructions+=1;goto B46d5e8;
case 0x46d5ea:goto L46d5ea;
case 0x46d5ec:c.instructions+=3;goto B46d5ec;
case 0x46d5f1:c.instructions+=2;goto B46d5f1;
case 0x46d5f3:c.instructions+=1;goto B46d5f3;
case 0x46d5f8:goto L46d5f8;
case 0x46d5fb:c.instructions+=1;goto B46d5fb;
case 0x46d600:goto L46d600;
case 0x46d601:c.instructions+=2;goto B46d601;
case 0x46d603:c.instructions+=1;goto B46d603;
case 0x46d608:goto L46d608;
case 0x46d60d:c.instructions+=1;goto B46d60d;
case 0x46d60f:goto L46d60f;
case 0x46d610:c.instructions+=1;goto B46d610;
case 0x46d615:goto L46d615;
case 0x46d618:goto L46d618;
case 0x46d61a:c.instructions+=2;goto B46d61a;
case 0x46d61b:c.instructions+=1;goto B46d61b;
case 0x46d620:goto L46d620;
case 0x46d623:c.instructions+=4;goto B46d623;
case 0x46d627:c.instructions+=3;goto B46d627;
case 0x46d628:c.instructions+=2;goto B46d628;
case 0x46d62f:c.instructions+=1;goto B46d62f;
case 0x46d634:goto L46d634;
case 0x46d63a:c.instructions+=2;goto B46d63a;
case 0x46d63d:c.instructions+=1;goto B46d63d;
case 0x46d643:goto L46d643;
case 0x46d64a:goto L46d64a;
case 0x46d64e:c.instructions+=2;goto B46d64e;
case 0x46d650:c.instructions+=1;goto B46d650;
case 0x46d652:goto L46d652;
case 0x46d654:c.instructions+=1;goto B46d654;
case 0x46d659:goto L46d659;
case 0x46d65c:c.instructions+=1;goto B46d65c;
case 0x46d65f:goto L46d65f;
case 0x46d663:c.instructions+=2;goto B46d663;
case 0x46d665:c.instructions+=1;goto B46d665;
case 0x46d66b:goto L46d66b;
case 0x46d66d:c.instructions+=1;goto B46d66d;
case 0x46d672:goto L46d672;
case 0x46d675:c.instructions+=1;goto B46d675;
case 0x46d678:goto L46d678;
case 0x46d67c:c.instructions+=2;goto B46d67c;
case 0x46d67e:c.instructions+=1;goto B46d67e;
case 0x46d684:goto L46d684;
case 0x46d686:c.instructions+=1;goto B46d686;
case 0x46d68b:goto L46d68b;
case 0x46d68e:c.instructions+=1;goto B46d68e;
case 0x46d691:goto L46d691;
case 0x46d697:c.instructions+=6;goto B46d697;
case 0x46d69a:c.instructions+=5;goto B46d69a;
case 0x46d6a0:c.instructions+=4;goto B46d6a0;
case 0x46d6a6:c.instructions+=3;goto B46d6a6;
case 0x46d6a8:c.instructions+=2;goto B46d6a8;
case 0x46d6ab:c.instructions+=1;goto B46d6ab;
case 0x46d6b1:goto L46d6b1;
case 0x46d6b5:c.instructions+=2;goto B46d6b5;
case 0x46d6b7:c.instructions+=1;goto B46d6b7;
case 0x46d6b9:goto L46d6b9;
case 0x46d6bd:c.instructions+=2;goto B46d6bd;
case 0x46d6bf:c.instructions+=1;goto B46d6bf;
case 0x46d6c1:goto L46d6c1;
case 0x46d6c5:c.instructions+=2;goto B46d6c5;
case 0x46d6c7:c.instructions+=1;goto B46d6c7;
case 0x46d6cd:goto L46d6cd;
case 0x46d6d1:c.instructions+=2;goto B46d6d1;
case 0x46d6d3:c.instructions+=1;goto B46d6d3;
case 0x46d6d9:goto L46d6d9;
case 0x46d6db:c.instructions+=1;goto B46d6db;
case 0x46d6e0:goto L46d6e0;
case 0x46d6e3:c.instructions+=1;goto B46d6e3;
case 0x46d6e6:goto L46d6e6;
case 0x46d6ec:c.instructions+=6;goto B46d6ec;
case 0x46d6ef:c.instructions+=5;goto B46d6ef;
case 0x46d6f5:c.instructions+=4;goto B46d6f5;
case 0x46d6fb:c.instructions+=3;goto B46d6fb;
case 0x46d6fd:c.instructions+=2;goto B46d6fd;
case 0x46d700:c.instructions+=1;goto B46d700;
case 0x46d706:goto L46d706;
case 0x46d70a:c.instructions+=2;goto B46d70a;
case 0x46d70c:c.instructions+=1;goto B46d70c;
case 0x46d70e:goto L46d70e;
case 0x46d710:c.instructions+=1;goto B46d710;
case 0x46d715:goto L46d715;
case 0x46d718:c.instructions+=1;goto B46d718;
case 0x46d71b:goto L46d71b;
case 0x46d71f:c.instructions+=2;goto B46d71f;
case 0x46d721:c.instructions+=1;goto B46d721;
case 0x46d723:goto L46d723;
case 0x46d725:c.instructions+=1;goto B46d725;
case 0x46d72a:goto L46d72a;
case 0x46d72d:c.instructions+=1;goto B46d72d;
case 0x46d730:goto L46d730;
case 0x46d734:c.instructions+=2;goto B46d734;
case 0x46d736:c.instructions+=1;goto B46d736;
case 0x46d738:goto L46d738;
case 0x46d73c:c.instructions+=2;goto B46d73c;
case 0x46d73e:c.instructions+=1;goto B46d73e;
case 0x46d740:goto L46d740;
case 0x46d742:c.instructions+=1;goto B46d742;
case 0x46d747:goto L46d747;
case 0x46d74a:c.instructions+=1;goto B46d74a;
case 0x46d74d:goto L46d74d;
case 0x46d753:c.instructions+=6;goto B46d753;
case 0x46d756:c.instructions+=5;goto B46d756;
case 0x46d75d:c.instructions+=4;goto B46d75d;
case 0x46d763:c.instructions+=3;goto B46d763;
case 0x46d765:c.instructions+=2;goto B46d765;
case 0x46d768:c.instructions+=1;goto B46d768;
case 0x46d76a:goto L46d76a;
case 0x46d76e:c.instructions+=3;goto B46d76e;
case 0x46d770:c.instructions+=2;goto B46d770;
case 0x46d774:c.instructions+=1;goto B46d774;
case 0x46d776:goto L46d776;
case 0x46d778:c.instructions+=1;goto B46d778;
case 0x46d77a:goto L46d77a;
case 0x46d77c:c.instructions+=1;goto B46d77c;
case 0x46d781:goto L46d781;
case 0x46d784:c.instructions+=1;goto B46d784;
case 0x46d787:goto L46d787;
case 0x46d789:c.instructions+=1;goto B46d789;
case 0x46d78b:goto L46d78b;
case 0x46d78d:c.instructions+=1;goto B46d78d;
case 0x46d792:goto L46d792;
case 0x46d795:c.instructions+=1;goto B46d795;
case 0x46d7c0:goto L46d7c0;
case 0x46d7c5:c.instructions+=4;goto B46d7c5;
case 0x46d7c6:c.instructions+=3;goto B46d7c6;
case 0x46d7c8:c.instructions+=2;goto B46d7c8;
case 0x46d7ce:c.instructions+=1;goto B46d7ce;
case 0x46d7d0:goto L46d7d0;
case 0x46d7d1:c.instructions+=1;goto B46d7d1;
case 0x46d7d6:goto L46d7d6;
case 0x46d7d9:goto L46d7d9;
case 0x46d7db:c.instructions+=2;goto B46d7db;
case 0x46d7dc:c.instructions+=1;goto B46d7dc;
case 0x46d7e0:goto L46d7e0;
case 0x46d7e5:c.instructions+=7;goto B46d7e5;
case 0x46d7eb:c.instructions+=6;goto B46d7eb;
case 0x46d7ee:c.instructions+=5;goto B46d7ee;
case 0x46d7ef:c.instructions+=4;goto B46d7ef;
case 0x46d7f1:c.instructions+=3;goto B46d7f1;
case 0x46d7f3:c.instructions+=2;goto B46d7f3;
case 0x46d7f4:c.instructions+=1;goto B46d7f4;
case 0x46d7fa:goto L46d7fa;
case 0x46d7fd:c.instructions+=3;goto B46d7fd;
case 0x46d7ff:c.instructions+=2;goto B46d7ff;
case 0x46d801:c.instructions+=1;goto B46d801;
case 0x46d807:goto L46d807;
case 0x46d80a:c.instructions+=2;goto B46d80a;
case 0x46d80c:c.instructions+=1;goto B46d80c;
case 0x46d80e:goto L46d80e;
case 0x46d811:c.instructions+=2;goto B46d811;
case 0x46d813:c.instructions+=1;goto B46d813;
case 0x46d815:goto L46d815;
case 0x46d81a:goto L46d81a;
case 0x46d81c:c.instructions+=1;goto B46d81c;
case 0x46d822:goto L46d822;
case 0x46d824:c.instructions+=2;goto B46d824;
case 0x46d826:c.instructions+=1;goto B46d826;
case 0x46d828:goto L46d828;
case 0x46d82b:c.instructions+=2;goto B46d82b;
case 0x46d82d:c.instructions+=1;goto B46d82d;
case 0x46d82f:goto L46d82f;
case 0x46d832:c.instructions+=2;goto B46d832;
case 0x46d834:c.instructions+=1;goto B46d834;
case 0x46d836:goto L46d836;
case 0x46d838:goto L46d838;
case 0x46d83b:c.instructions+=2;goto B46d83b;
case 0x46d83d:c.instructions+=1;goto B46d83d;
case 0x46d843:goto L46d843;
case 0x46d846:c.instructions+=2;goto B46d846;
case 0x46d848:c.instructions+=1;goto B46d848;
case 0x46d84e:goto L46d84e;
case 0x46d854:c.instructions+=2;goto B46d854;
case 0x46d856:c.instructions+=1;goto B46d856;
case 0x46d85c:goto L46d85c;
case 0x46d85f:c.instructions+=29;goto B46d85f;
case 0x46d864:c.instructions+=28;goto B46d864;
case 0x46d867:c.instructions+=27;goto B46d867;
case 0x46d86a:c.instructions+=26;goto B46d86a;
case 0x46d86d:c.instructions+=25;goto B46d86d;
case 0x46d873:c.instructions+=24;goto B46d873;
case 0x46d875:c.instructions+=23;goto B46d875;
case 0x46d87b:c.instructions+=22;goto B46d87b;
case 0x46d881:c.instructions+=21;goto B46d881;
case 0x46d884:c.instructions+=20;goto B46d884;
case 0x46d887:c.instructions+=19;goto B46d887;
case 0x46d889:c.instructions+=18;goto B46d889;
case 0x46d88c:c.instructions+=17;goto B46d88c;
case 0x46d892:c.instructions+=16;goto B46d892;
case 0x46d894:c.instructions+=15;goto B46d894;
case 0x46d898:c.instructions+=14;goto B46d898;
case 0x46d89e:c.instructions+=13;goto B46d89e;
case 0x46d89f:c.instructions+=12;goto B46d89f;
case 0x46d8a4:c.instructions+=11;goto B46d8a4;
case 0x46d8aa:c.instructions+=10;goto B46d8aa;
case 0x46d8ad:c.instructions+=9;goto B46d8ad;
case 0x46d8b0:c.instructions+=8;goto B46d8b0;
case 0x46d8b3:c.instructions+=7;goto B46d8b3;
case 0x46d8b5:c.instructions+=6;goto B46d8b5;
case 0x46d8ba:c.instructions+=5;goto B46d8ba;
case 0x46d8c0:c.instructions+=4;goto B46d8c0;
case 0x46d8c4:c.instructions+=3;goto B46d8c4;
case 0x46d8ca:c.instructions+=2;goto B46d8ca;
case 0x46d8ce:c.instructions+=1;goto B46d8ce;
case 0x46d8d3:goto L46d8d3;
case 0x46d8d8:c.instructions+=28;goto B46d8d8;
case 0x46d8de:c.instructions+=27;goto B46d8de;
case 0x46d8e4:c.instructions+=26;goto B46d8e4;
case 0x46d8e9:c.instructions+=25;goto B46d8e9;
case 0x46d8ee:c.instructions+=24;goto B46d8ee;
case 0x46d8f4:c.instructions+=23;goto B46d8f4;
case 0x46d8fa:c.instructions+=22;goto B46d8fa;
case 0x46d8fc:c.instructions+=21;goto B46d8fc;
case 0x46d8fe:c.instructions+=20;goto B46d8fe;
case 0x46d903:c.instructions+=19;goto B46d903;
case 0x46d909:c.instructions+=18;goto B46d909;
case 0x46d90f:c.instructions+=17;goto B46d90f;
case 0x46d912:c.instructions+=16;goto B46d912;
case 0x46d915:c.instructions+=15;goto B46d915;
case 0x46d91b:c.instructions+=14;goto B46d91b;
case 0x46d920:c.instructions+=13;goto B46d920;
case 0x46d926:c.instructions+=12;goto B46d926;
case 0x46d92c:c.instructions+=11;goto B46d92c;
case 0x46d930:c.instructions+=10;goto B46d930;
case 0x46d931:c.instructions+=9;goto B46d931;
case 0x46d936:c.instructions+=8;goto B46d936;
case 0x46d93c:c.instructions+=7;goto B46d93c;
case 0x46d942:c.instructions+=6;goto B46d942;
case 0x46d948:c.instructions+=5;goto B46d948;
case 0x46d94e:c.instructions+=4;goto B46d94e;
case 0x46d954:c.instructions+=3;goto B46d954;
case 0x46d958:c.instructions+=2;goto B46d958;
case 0x46d95c:c.instructions+=1;goto B46d95c;
case 0x46d961:goto L46d961;
case 0x46d966:c.instructions+=5;goto B46d966;
case 0x46d96c:c.instructions+=4;goto B46d96c;
case 0x46d96f:c.instructions+=3;goto B46d96f;
case 0x46d971:c.instructions+=2;goto B46d971;
case 0x46d977:c.instructions+=1;goto B46d977;
case 0x46d979:goto L46d979;
case 0x46d97c:c.instructions+=1;goto B46d97c;
case 0x46d97e:goto L46d97e;
case 0x46d981:c.instructions+=1;goto B46d981;
case 0x46d983:goto L46d983;
case 0x46d989:c.instructions+=5;goto B46d989;
case 0x46d98f:c.instructions+=4;goto B46d98f;
case 0x46d994:c.instructions+=3;goto B46d994;
case 0x46d996:c.instructions+=2;goto B46d996;
case 0x46d998:c.instructions+=1;goto B46d998;
case 0x46d99a:goto L46d99a;
case 0x46d99f:c.instructions+=2;goto B46d99f;
case 0x46d9a1:c.instructions+=1;goto B46d9a1;
case 0x46d9a3:goto L46d9a3;
case 0x46d9ad:c.instructions+=1;goto B46d9ad;
case 0x46d9af:goto L46d9af;
case 0x46d9b2:c.instructions+=2;goto B46d9b2;
case 0x46d9b4:c.instructions+=1;goto B46d9b4;
case 0x46d9b6:goto L46d9b6;
case 0x46d9b9:c.instructions+=1;goto B46d9b9;
case 0x46d9bb:goto L46d9bb;
case 0x46d9be:c.instructions+=1;goto B46d9be;
case 0x46d9c0:goto L46d9c0;
case 0x46d9ca:c.instructions+=1;goto B46d9ca;
case 0x46d9cc:goto L46d9cc;
case 0x46d9d1:c.instructions+=2;goto B46d9d1;
case 0x46d9d3:c.instructions+=1;goto B46d9d3;
case 0x46d9d5:goto L46d9d5;
case 0x46d9d8:c.instructions+=1;goto B46d9d8;
case 0x46d9da:goto L46d9da;
case 0x46d9e4:c.instructions+=1;goto B46d9e4;
case 0x46d9e6:goto L46d9e6;
case 0x46d9ec:c.instructions+=2;goto B46d9ec;
case 0x46d9ee:c.instructions+=1;goto B46d9ee;
case 0x46d9f3:goto L46d9f3;
case 0x46d9f9:c.instructions+=2;goto B46d9f9;
case 0x46d9fc:c.instructions+=1;goto B46d9fc;
case 0x46d9fe:goto L46d9fe;
case 0x46da01:c.instructions+=1;goto B46da01;
case 0x46da03:goto L46da03;
case 0x46da0d:c.instructions+=1;goto B46da0d;
case 0x46da0f:goto L46da0f;
case 0x46da19:c.instructions+=1;goto B46da19;
case 0x46da1b:goto L46da1b;
case 0x46da25:goto L46da25;
case 0x46da2a:c.instructions+=3;goto B46da2a;
case 0x46da30:c.instructions+=2;goto B46da30;
case 0x46da32:c.instructions+=1;goto B46da32;
case 0x46da38:goto L46da38;
case 0x46da3b:c.instructions+=3;goto B46da3b;
case 0x46da3d:c.instructions+=2;goto B46da3d;
case 0x46da3f:c.instructions+=1;goto B46da3f;
case 0x46da45:goto L46da45;
case 0x46da4a:c.instructions+=1;goto B46da4a;
case 0x46da50:goto L46da50;
case 0x46da53:c.instructions+=1;goto B46da53;
case 0x46da55:goto L46da55;
case 0x46da58:c.instructions+=2;goto B46da58;
case 0x46da5a:c.instructions+=1;goto B46da5a;
case 0x46da5c:goto L46da5c;
case 0x46da5d:c.instructions+=3;goto B46da5d;
case 0x46da5e:c.instructions+=2;goto B46da5e;
case 0x46da61:c.instructions+=1;goto B46da61;
case 0x46da62:goto L46da62;
case 0x46da64:c.instructions+=1;goto B46da64;
case 0x46da6a:goto L46da6a;
case 0x46da6c:c.instructions+=2;goto B46da6c;
case 0x46da6e:c.instructions+=1;goto B46da6e;
case 0x46da74:goto L46da74;
case 0x46da77:c.instructions+=1;goto B46da77;
case 0x46da79:goto L46da79;
case 0x46da7c:c.instructions+=2;goto B46da7c;
case 0x46da7e:c.instructions+=1;goto B46da7e;
case 0x46da80:goto L46da80;
case 0x46da81:c.instructions+=3;goto B46da81;
case 0x46da82:c.instructions+=2;goto B46da82;
case 0x46da85:c.instructions+=1;goto B46da85;
case 0x46da86:goto L46da86;
case 0x46da88:c.instructions+=1;goto B46da88;
case 0x46da8e:goto L46da8e;
case 0x46da90:c.instructions+=2;goto B46da90;
case 0x46da92:c.instructions+=1;goto B46da92;
case 0x46da94:goto L46da94;
case 0x46da97:c.instructions+=1;goto B46da97;
case 0x46da99:goto L46da99;
case 0x46da9c:c.instructions+=2;goto B46da9c;
case 0x46da9e:c.instructions+=1;goto B46da9e;
case 0x46daa0:goto L46daa0;
case 0x46daa2:goto L46daa2;
case 0x46daa5:c.instructions+=2;goto B46daa5;
case 0x46daa7:c.instructions+=1;goto B46daa7;
case 0x46daad:goto L46daad;
case 0x46daae:c.instructions+=3;goto B46daae;
case 0x46dab1:c.instructions+=2;goto B46dab1;
case 0x46dab3:c.instructions+=1;goto B46dab3;
case 0x46dab9:goto L46dab9;
case 0x46dabf:c.instructions+=2;goto B46dabf;
case 0x46dac1:c.instructions+=1;goto B46dac1;
case 0x46dac7:goto L46dac7;
case 0x46daca:c.instructions+=29;goto B46daca;
case 0x46dacf:c.instructions+=28;goto B46dacf;
case 0x46dad2:c.instructions+=27;goto B46dad2;
case 0x46dad5:c.instructions+=26;goto B46dad5;
case 0x46dad8:c.instructions+=25;goto B46dad8;
case 0x46dade:c.instructions+=24;goto B46dade;
case 0x46dae0:c.instructions+=23;goto B46dae0;
case 0x46dae6:c.instructions+=22;goto B46dae6;
case 0x46daec:c.instructions+=21;goto B46daec;
case 0x46daef:c.instructions+=20;goto B46daef;
case 0x46daf2:c.instructions+=19;goto B46daf2;
case 0x46daf4:c.instructions+=18;goto B46daf4;
case 0x46daf7:c.instructions+=17;goto B46daf7;
case 0x46dafd:c.instructions+=16;goto B46dafd;
case 0x46daff:c.instructions+=15;goto B46daff;
case 0x46db03:c.instructions+=14;goto B46db03;
case 0x46db09:c.instructions+=13;goto B46db09;
case 0x46db0a:c.instructions+=12;goto B46db0a;
case 0x46db0f:c.instructions+=11;goto B46db0f;
case 0x46db15:c.instructions+=10;goto B46db15;
case 0x46db18:c.instructions+=9;goto B46db18;
case 0x46db1b:c.instructions+=8;goto B46db1b;
case 0x46db1e:c.instructions+=7;goto B46db1e;
case 0x46db20:c.instructions+=6;goto B46db20;
case 0x46db25:c.instructions+=5;goto B46db25;
case 0x46db2b:c.instructions+=4;goto B46db2b;
case 0x46db2f:c.instructions+=3;goto B46db2f;
case 0x46db35:c.instructions+=2;goto B46db35;
case 0x46db39:c.instructions+=1;goto B46db39;
case 0x46db3e:goto L46db3e;
case 0x46db43:c.instructions+=28;goto B46db43;
case 0x46db49:c.instructions+=27;goto B46db49;
case 0x46db4f:c.instructions+=26;goto B46db4f;
case 0x46db54:c.instructions+=25;goto B46db54;
case 0x46db59:c.instructions+=24;goto B46db59;
case 0x46db5f:c.instructions+=23;goto B46db5f;
case 0x46db65:c.instructions+=22;goto B46db65;
case 0x46db67:c.instructions+=21;goto B46db67;
case 0x46db69:c.instructions+=20;goto B46db69;
case 0x46db6e:c.instructions+=19;goto B46db6e;
case 0x46db74:c.instructions+=18;goto B46db74;
case 0x46db7a:c.instructions+=17;goto B46db7a;
case 0x46db7d:c.instructions+=16;goto B46db7d;
case 0x46db80:c.instructions+=15;goto B46db80;
case 0x46db86:c.instructions+=14;goto B46db86;
case 0x46db8b:c.instructions+=13;goto B46db8b;
case 0x46db91:c.instructions+=12;goto B46db91;
case 0x46db97:c.instructions+=11;goto B46db97;
case 0x46db9b:c.instructions+=10;goto B46db9b;
case 0x46db9c:c.instructions+=9;goto B46db9c;
case 0x46dba1:c.instructions+=8;goto B46dba1;
case 0x46dba7:c.instructions+=7;goto B46dba7;
case 0x46dbad:c.instructions+=6;goto B46dbad;
case 0x46dbb3:c.instructions+=5;goto B46dbb3;
case 0x46dbb9:c.instructions+=4;goto B46dbb9;
case 0x46dbbf:c.instructions+=3;goto B46dbbf;
case 0x46dbc3:c.instructions+=2;goto B46dbc3;
case 0x46dbc7:c.instructions+=1;goto B46dbc7;
case 0x46dbcc:goto L46dbcc;
case 0x46dbd2:c.instructions+=5;goto B46dbd2;
case 0x46dbd8:c.instructions+=4;goto B46dbd8;
case 0x46dbdb:c.instructions+=3;goto B46dbdb;
case 0x46dbde:c.instructions+=2;goto B46dbde;
case 0x46dbe0:c.instructions+=1;goto B46dbe0;
case 0x46dbe2:goto L46dbe2;
case 0x46dbe5:c.instructions+=1;goto B46dbe5;
case 0x46dbe7:goto L46dbe7;
case 0x46dbea:c.instructions+=1;goto B46dbea;
case 0x46dbec:goto L46dbec;
case 0x46dbf6:c.instructions+=1;goto B46dbf6;
case 0x46dbf8:goto L46dbf8;
case 0x46dbfe:c.instructions+=2;goto B46dbfe;
case 0x46dc00:c.instructions+=1;goto B46dc00;
case 0x46dc05:goto L46dc05;
case 0x46dc0b:c.instructions+=2;goto B46dc0b;
case 0x46dc0e:c.instructions+=1;goto B46dc0e;
case 0x46dc10:goto L46dc10;
case 0x46dc13:c.instructions+=1;goto B46dc13;
case 0x46dc15:goto L46dc15;
case 0x46dc1f:c.instructions+=1;goto B46dc1f;
case 0x46dc21:goto L46dc21;
case 0x46dc2b:c.instructions+=1;goto B46dc2b;
case 0x46dc2d:goto L46dc2d;
case 0x46dc37:goto L46dc37;
case 0x46dc3a:c.instructions+=4;goto B46dc3a;
case 0x46dc3b:c.instructions+=3;goto B46dc3b;
case 0x46dc3e:c.instructions+=2;goto B46dc3e;
case 0x46dc3f:c.instructions+=1;goto B46dc3f;
case 0x46dc44:goto L46dc44;
case 0x46dc4a:c.instructions+=8;goto B46dc4a;
case 0x46dc50:c.instructions+=7;goto B46dc50;
case 0x46dc53:c.instructions+=6;goto B46dc53;
case 0x46dc55:c.instructions+=5;goto B46dc55;
case 0x46dc56:c.instructions+=4;goto B46dc56;
case 0x46dc58:c.instructions+=3;goto B46dc58;
case 0x46dc5a:c.instructions+=2;goto B46dc5a;
case 0x46dc5d:c.instructions+=1;goto B46dc5d;
case 0x46dc63:goto L46dc63;
case 0x46dc65:c.instructions+=44;goto B46dc65;
case 0x46dc6b:c.instructions+=43;goto B46dc6b;
case 0x46dc6d:c.instructions+=42;goto B46dc6d;
case 0x46dc72:c.instructions+=41;goto B46dc72;
case 0x46dc73:c.instructions+=40;goto B46dc73;
case 0x46dc74:c.instructions+=39;goto B46dc74;
case 0x46dc78:c.instructions+=38;goto B46dc78;
case 0x46dc7a:c.instructions+=37;goto B46dc7a;
case 0x46dc80:c.instructions+=36;goto B46dc80;
case 0x46dc86:c.instructions+=35;goto B46dc86;
case 0x46dc8a:c.instructions+=34;goto B46dc8a;
case 0x46dc90:c.instructions+=33;goto B46dc90;
case 0x46dc96:c.instructions+=32;goto B46dc96;
case 0x46dc9a:c.instructions+=31;goto B46dc9a;
case 0x46dc9e:c.instructions+=30;goto B46dc9e;
case 0x46dca4:c.instructions+=29;goto B46dca4;
case 0x46dca8:c.instructions+=28;goto B46dca8;
case 0x46dcac:c.instructions+=27;goto B46dcac;
case 0x46dcb2:c.instructions+=26;goto B46dcb2;
case 0x46dcb6:c.instructions+=25;goto B46dcb6;
case 0x46dcbc:c.instructions+=24;goto B46dcbc;
case 0x46dcc2:c.instructions+=23;goto B46dcc2;
case 0x46dcc6:c.instructions+=22;goto B46dcc6;
case 0x46dccc:c.instructions+=21;goto B46dccc;
case 0x46dcd2:c.instructions+=20;goto B46dcd2;
case 0x46dcd6:c.instructions+=19;goto B46dcd6;
case 0x46dcdc:c.instructions+=18;goto B46dcdc;
case 0x46dce2:c.instructions+=17;goto B46dce2;
case 0x46dce6:c.instructions+=16;goto B46dce6;
case 0x46dcec:c.instructions+=15;goto B46dcec;
case 0x46dcf2:c.instructions+=14;goto B46dcf2;
case 0x46dcf6:c.instructions+=13;goto B46dcf6;
case 0x46dcfc:c.instructions+=12;goto B46dcfc;
case 0x46dd02:c.instructions+=11;goto B46dd02;
case 0x46dd06:c.instructions+=10;goto B46dd06;
case 0x46dd0c:c.instructions+=9;goto B46dd0c;
case 0x46dd12:c.instructions+=8;goto B46dd12;
case 0x46dd16:c.instructions+=7;goto B46dd16;
case 0x46dd1a:c.instructions+=6;goto B46dd1a;
case 0x46dd20:c.instructions+=5;goto B46dd20;
case 0x46dd24:c.instructions+=4;goto B46dd24;
case 0x46dd28:c.instructions+=3;goto B46dd28;
case 0x46dd2e:c.instructions+=2;goto B46dd2e;
case 0x46dd32:c.instructions+=1;goto B46dd32;
case 0x46dd37:goto L46dd37;
case 0x46dd3d:c.instructions+=4;goto B46dd3d;
case 0x46dd43:c.instructions+=3;goto B46dd43;
case 0x46dd44:c.instructions+=2;goto B46dd44;
case 0x46dd45:c.instructions+=1;goto B46dd45;
case 0x46dd4a:goto L46dd4a;
case 0x46dd50:c.instructions+=87;goto B46dd50;
case 0x46dd54:c.instructions+=86;goto B46dd54;
case 0x46dd56:c.instructions+=85;goto B46dd56;
case 0x46dd5a:c.instructions+=84;goto B46dd5a;
case 0x46dd5c:c.instructions+=83;goto B46dd5c;
case 0x46dd60:c.instructions+=82;goto B46dd60;
case 0x46dd64:c.instructions+=81;goto B46dd64;
case 0x46dd66:c.instructions+=80;goto B46dd66;
case 0x46dd6a:c.instructions+=79;goto B46dd6a;
case 0x46dd6c:c.instructions+=78;goto B46dd6c;
case 0x46dd70:c.instructions+=77;goto B46dd70;
case 0x46dd74:c.instructions+=76;goto B46dd74;
case 0x46dd76:c.instructions+=75;goto B46dd76;
case 0x46dd7a:c.instructions+=74;goto B46dd7a;
case 0x46dd7c:c.instructions+=73;goto B46dd7c;
case 0x46dd7e:c.instructions+=72;goto B46dd7e;
case 0x46dd82:c.instructions+=71;goto B46dd82;
case 0x46dd84:c.instructions+=70;goto B46dd84;
case 0x46dd88:c.instructions+=69;goto B46dd88;
case 0x46dd8c:c.instructions+=68;goto B46dd8c;
case 0x46dd8e:c.instructions+=67;goto B46dd8e;
case 0x46dd92:c.instructions+=66;goto B46dd92;
case 0x46dd94:c.instructions+=65;goto B46dd94;
case 0x46dd96:c.instructions+=64;goto B46dd96;
case 0x46dd9a:c.instructions+=63;goto B46dd9a;
case 0x46dd9c:c.instructions+=62;goto B46dd9c;
case 0x46dda0:c.instructions+=61;goto B46dda0;
case 0x46dda4:c.instructions+=60;goto B46dda4;
case 0x46dda6:c.instructions+=59;goto B46dda6;
case 0x46ddaa:c.instructions+=58;goto B46ddaa;
case 0x46ddac:c.instructions+=57;goto B46ddac;
case 0x46ddae:c.instructions+=56;goto B46ddae;
case 0x46ddb3:c.instructions+=55;goto B46ddb3;
case 0x46ddb7:c.instructions+=54;goto B46ddb7;
case 0x46ddbd:c.instructions+=53;goto B46ddbd;
case 0x46ddbf:c.instructions+=52;goto B46ddbf;
case 0x46ddc0:c.instructions+=51;goto B46ddc0;
case 0x46ddc1:c.instructions+=50;goto B46ddc1;
case 0x46ddc5:c.instructions+=49;goto B46ddc5;
case 0x46ddc9:c.instructions+=48;goto B46ddc9;
case 0x46ddcb:c.instructions+=47;goto B46ddcb;
case 0x46ddcf:c.instructions+=46;goto B46ddcf;
case 0x46ddd1:c.instructions+=45;goto B46ddd1;
case 0x46ddd5:c.instructions+=44;goto B46ddd5;
case 0x46ddd7:c.instructions+=43;goto B46ddd7;
case 0x46dddb:c.instructions+=42;goto B46dddb;
case 0x46dddf:c.instructions+=41;goto B46dddf;
case 0x46dde1:c.instructions+=40;goto B46dde1;
case 0x46dde5:c.instructions+=39;goto B46dde5;
case 0x46dde7:c.instructions+=38;goto B46dde7;
case 0x46ddeb:c.instructions+=37;goto B46ddeb;
case 0x46ddf1:c.instructions+=36;goto B46ddf1;
case 0x46ddf7:c.instructions+=35;goto B46ddf7;
case 0x46ddfd:c.instructions+=34;goto B46ddfd;
case 0x46ddff:c.instructions+=33;goto B46ddff;
case 0x46de05:c.instructions+=32;goto B46de05;
case 0x46de07:c.instructions+=31;goto B46de07;
case 0x46de0b:c.instructions+=30;goto B46de0b;
case 0x46de11:c.instructions+=29;goto B46de11;
case 0x46de17:c.instructions+=28;goto B46de17;
case 0x46de1d:c.instructions+=27;goto B46de1d;
case 0x46de21:c.instructions+=26;goto B46de21;
case 0x46de27:c.instructions+=25;goto B46de27;
case 0x46de2b:c.instructions+=24;goto B46de2b;
case 0x46de31:c.instructions+=23;goto B46de31;
case 0x46de37:c.instructions+=22;goto B46de37;
case 0x46de3d:c.instructions+=21;goto B46de3d;
case 0x46de41:c.instructions+=20;goto B46de41;
case 0x46de47:c.instructions+=19;goto B46de47;
case 0x46de4b:c.instructions+=18;goto B46de4b;
case 0x46de51:c.instructions+=17;goto B46de51;
case 0x46de57:c.instructions+=16;goto B46de57;
case 0x46de5d:c.instructions+=15;goto B46de5d;
case 0x46de61:c.instructions+=14;goto B46de61;
case 0x46de67:c.instructions+=13;goto B46de67;
case 0x46de6b:c.instructions+=12;goto B46de6b;
case 0x46de71:c.instructions+=11;goto B46de71;
case 0x46de77:c.instructions+=10;goto B46de77;
case 0x46de7d:c.instructions+=9;goto B46de7d;
case 0x46de81:c.instructions+=8;goto B46de81;
case 0x46de87:c.instructions+=7;goto B46de87;
case 0x46de8b:c.instructions+=6;goto B46de8b;
case 0x46de91:c.instructions+=5;goto B46de91;
case 0x46de97:c.instructions+=4;goto B46de97;
case 0x46de9d:c.instructions+=3;goto B46de9d;
case 0x46dea1:c.instructions+=2;goto B46dea1;
case 0x46dea7:c.instructions+=1;goto B46dea7;
case 0x46deac:goto L46deac;
case 0x46deb2:c.instructions+=4;goto B46deb2;
case 0x46deb7:c.instructions+=3;goto B46deb7;
case 0x46deb8:c.instructions+=2;goto B46deb8;
case 0x46deb9:c.instructions+=1;goto B46deb9;
case 0x46debe:goto L46debe;
case 0x46dec1:c.instructions+=4;goto B46dec1;
case 0x46dec2:c.instructions+=3;goto B46dec2;
case 0x46dec3:c.instructions+=2;goto B46dec3;
case 0x46dec6:c.instructions+=1;goto B46dec6;
case 0x46dec7:goto L46dec7;
case 0x46dec9:c.instructions+=1;goto B46dec9;
case 0x46decb:goto L46decb;
case 0x46decc:c.instructions+=3;goto B46decc;
case 0x46decd:c.instructions+=2;goto B46decd;
case 0x46ded0:c.instructions+=1;goto B46ded0;
case 0x46dee0:goto L46dee0;
case 0x46dee1:c.instructions+=2;goto B46dee1;
case 0x46dee3:c.instructions+=1;goto B46dee3;
case 0x46dee8:goto L46dee8;
case 0x46deee:c.instructions+=3;goto B46deee;
case 0x46def0:c.instructions+=2;goto B46def0;
case 0x46def1:c.instructions+=1;goto B46def1;
case 0x46df00:goto L46df00;
case 0x46df01:c.instructions+=2;goto B46df01;
case 0x46df03:c.instructions+=1;goto B46df03;
case 0x46df08:goto L46df08;
case 0x46df0e:c.instructions+=3;goto B46df0e;
case 0x46df10:c.instructions+=2;goto B46df10;
case 0x46df11:c.instructions+=1;goto B46df11;
case 0x46df20:goto L46df20;
case 0x46df21:c.instructions+=2;goto B46df21;
case 0x46df23:c.instructions+=1;goto B46df23;
case 0x46df28:goto L46df28;
case 0x46df2d:c.instructions+=1;goto B46df2d;
case 0x46df2f:goto L46df2f;
case 0x46df30:c.instructions+=1;goto B46df30;
case 0x46df35:goto L46df35;
case 0x46df38:goto L46df38;
case 0x46df3a:c.instructions+=2;goto B46df3a;
case 0x46df3b:c.instructions+=1;goto B46df3b;
case 0x46df40:goto L46df40;
case 0x46df45:c.instructions+=2;goto B46df45;
case 0x46df46:c.instructions+=1;goto B46df46;
case 0x46df4b:goto L46df4b;
case 0x46df4e:c.instructions+=2;goto B46df4e;
case 0x46df53:c.instructions+=1;goto B46df53;
case 0x46df55:goto L46df55;
case 0x46df5b:c.instructions+=5;goto B46df5b;
case 0x46df5e:c.instructions+=4;goto B46df5e;
case 0x46df64:c.instructions+=3;goto B46df64;
case 0x46df65:c.instructions+=2;goto B46df65;
case 0x46df6a:c.instructions+=1;goto B46df6a;
case 0x46df6f:goto L46df6f;
case 0x46df72:c.instructions+=2;goto B46df72;
case 0x46df74:c.instructions+=1;goto B46df74;
case 0x46df76:goto L46df76;
case 0x46df78:c.instructions+=1;goto B46df78;
case 0x46df7d:goto L46df7d;
case 0x46df7f:c.instructions+=1;goto B46df7f;
case 0x46df80:goto L46df80;
case 0x46df81:c.instructions+=2;goto B46df81;
case 0x46df83:c.instructions+=1;goto B46df83;
case 0x46df88:goto L46df88;
case 0x46df8d:c.instructions+=1;goto B46df8d;
case 0x46df8f:goto L46df8f;
case 0x46df90:c.instructions+=1;goto B46df90;
case 0x46df95:goto L46df95;
case 0x46df98:goto L46df98;
case 0x46df9a:c.instructions+=2;goto B46df9a;
case 0x46df9b:c.instructions+=1;goto B46df9b;
case 0x46dfa0:goto L46dfa0;
case 0x46dfa1:c.instructions+=6;goto B46dfa1;
case 0x46dfa5:c.instructions+=5;goto B46dfa5;
case 0x46dfa7:c.instructions+=4;goto B46dfa7;
case 0x46dfa8:c.instructions+=3;goto B46dfa8;
case 0x46dfaa:c.instructions+=2;goto B46dfaa;
case 0x46dfac:c.instructions+=1;goto B46dfac;
case 0x46dfaf:goto L46dfaf;
case 0x46dfb1:c.instructions+=4;goto B46dfb1;
case 0x46dfb4:c.instructions+=3;goto B46dfb4;
case 0x46dfb9:c.instructions+=2;goto B46dfb9;
case 0x46dfba:c.instructions+=1;goto B46dfba;
case 0x46dfbc:goto L46dfbc;
case 0x46dfc1:c.instructions+=2;goto B46dfc1;
case 0x46dfc3:c.instructions+=1;goto B46dfc3;
case 0x46dfc8:goto L46dfc8;
case 0x46dfcb:c.instructions+=3;goto B46dfcb;
case 0x46dfcc:c.instructions+=2;goto B46dfcc;
case 0x46dfcd:c.instructions+=1;goto B46dfcd;
case 0x46dfd0:goto L46dfd0;
case 0x46dfd6:c.instructions+=3;goto B46dfd6;
case 0x46dfd7:c.instructions+=2;goto B46dfd7;
case 0x46dfd8:c.instructions+=1;goto B46dfd8;
case 0x46dfe0:goto L46dfe0;
case 0x46dfe1:c.instructions+=11;goto B46dfe1;
case 0x46dfe3:c.instructions+=10;goto B46dfe3;
case 0x46dfe6:c.instructions+=9;goto B46dfe6;
case 0x46dfec:c.instructions+=8;goto B46dfec;
case 0x46dfed:c.instructions+=7;goto B46dfed;
case 0x46dfee:c.instructions+=6;goto B46dfee;
case 0x46dff0:c.instructions+=5;goto B46dff0;
case 0x46dff3:c.instructions+=4;goto B46dff3;
case 0x46dff6:c.instructions+=3;goto B46dff6;
case 0x46dffc:c.instructions+=2;goto B46dffc;
case 0x46dfff:c.instructions+=1;goto B46dfff;
default:missing_instruction(c.pc);}
B46d001:L46d001:{c.instructions+=2;NFSU2_TR(0x46d001);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d003:{NFSU2_TR(0x46d003);
if(r1(R+518)){{goto L46d00e;}}
}
B46d005:L46d005:{c.instructions+=3;NFSU2_TR(0x46d005);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46d008:{NFSU2_TR(0x46d008);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d009:{NFSU2_TR(0x46d009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d00eull));
TAIL_STATIC(0x735580u,735);
}
B46d00e:L46d00e:{c.instructions+=5;NFSU2_TR(0x46d00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d011:{NFSU2_TR(0x46d011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46d013:{NFSU2_TR(0x46d013);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d015:{NFSU2_TR(0x46d015);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46d01d:{NFSU2_TR(0x46d01d);
if(r1(R+518)){{goto L46d030;}}
}
B46d01f:L46d01f:{c.instructions+=3;NFSU2_TR(0x46d01f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46d023:{NFSU2_TR(0x46d023);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d024:{NFSU2_TR(0x46d024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d029ull));
TAIL_STATIC(0x735070u,735);
}
B46d029:L46d029:{c.instructions+=2;NFSU2_TR(0x46d029);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46d02e:{NFSU2_TR(0x46d02e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46d037;}}
}
B46d030:L46d030:{c.instructions+=2;NFSU2_TR(0x46d030);
__builtin_memmove((R+4),(R+24),4);
}
B46d032:{NFSU2_TR(0x46d032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d037ull));
TAIL_STATIC(0x46cef0u,46c);
}
B46d037:L46d037:{c.instructions+=3;NFSU2_TR(0x46d037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d03a:{NFSU2_TR(0x46d03a);
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
B46d03c:{NFSU2_TR(0x46d03c);
if(r1(R+518)){{goto L46d0eb;}}
}
B46d042:L46d042:{c.instructions+=6;NFSU2_TR(0x46d042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d045:{NFSU2_TR(0x46d045);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B46d049:{NFSU2_TR(0x46d049);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d04c:{NFSU2_TR(0x46d04c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10000ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B46d053:{NFSU2_TR(0x46d053);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B46d058:{NFSU2_TR(0x46d058);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L46d067;}}
}
B46d05a:L46d05a:{c.instructions+=4;NFSU2_TR(0x46d05a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B46d05b:{NFSU2_TR(0x46d05b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffff0000ull))));
}
B46d060:{NFSU2_TR(0x46d060);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B46d061:{NFSU2_TR(0x46d061);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L46d067;}}
}
B46d063:L46d063:{c.instructions+=2;NFSU2_TR(0x46d063);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46d065:{NFSU2_TR(0x46d065);
{goto L46d073;}
}
B46d067:L46d067:{c.instructions+=2;NFSU2_TR(0x46d067);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d06c:{NFSU2_TR(0x46d06c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46d073;}}
}
B46d06e:L46d06e:{c.instructions+=1;NFSU2_TR(0x46d06e);
w4(R+0,u32(0x10000ull));
}
B46d073:L46d073:{c.instructions+=5;NFSU2_TR(0x46d073);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46d075:{NFSU2_TR(0x46d075);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d078:{NFSU2_TR(0x46d078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d07b:{NFSU2_TR(0x46d07b);
__builtin_memmove((R+0),(R+28),4);
}
B46d07d:{NFSU2_TR(0x46d07d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d083;}}
}
B46d07f:L46d07f:{c.instructions+=2;NFSU2_TR(0x46d07f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46d081:{NFSU2_TR(0x46d081);
{goto L46d090;}
}
B46d083:L46d083:{c.instructions+=2;NFSU2_TR(0x46d083);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46d089:{NFSU2_TR(0x46d089);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46d090;}}
}
B46d08b:L46d08b:{c.instructions+=1;NFSU2_TR(0x46d08b);
w4(R+0,u32(0x7fffull));
}
B46d090:L46d090:{c.instructions+=5;NFSU2_TR(0x46d090);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d093:{NFSU2_TR(0x46d093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d096:{NFSU2_TR(0x46d096);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46d098:{NFSU2_TR(0x46d098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d09b:{NFSU2_TR(0x46d09b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d0a1;}}
}
B46d09d:L46d09d:{c.instructions+=2;NFSU2_TR(0x46d09d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46d09f:{NFSU2_TR(0x46d09f);
{goto L46d0ad;}
}
B46d0a1:L46d0a1:{c.instructions+=2;NFSU2_TR(0x46d0a1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d0a6:{NFSU2_TR(0x46d0a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46d0ad;}}
}
B46d0a8:L46d0a8:{c.instructions+=1;NFSU2_TR(0x46d0a8);
w4(R+0,u32(0x2000ull));
}
B46d0ad:L46d0ad:{c.instructions+=5;NFSU2_TR(0x46d0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d0b0:{NFSU2_TR(0x46d0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d0b3:{NFSU2_TR(0x46d0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46d0b5:{NFSU2_TR(0x46d0b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d0b7:{NFSU2_TR(0x46d0b7);
if(r1(R+518)){{goto L46d0c2;}}
}
B46d0b9:L46d0b9:{c.instructions+=3;NFSU2_TR(0x46d0b9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46d0bc:{NFSU2_TR(0x46d0bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d0bd:{NFSU2_TR(0x46d0bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d0c2ull));
TAIL_STATIC(0x735580u,735);
}
B46d0c2:L46d0c2:{c.instructions+=5;NFSU2_TR(0x46d0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d0c5:{NFSU2_TR(0x46d0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46d0c7:{NFSU2_TR(0x46d0c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d0c9:{NFSU2_TR(0x46d0c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46d0d1:{NFSU2_TR(0x46d0d1);
if(r1(R+518)){{goto L46d0e4;}}
}
B46d0d3:L46d0d3:{c.instructions+=3;NFSU2_TR(0x46d0d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46d0d7:{NFSU2_TR(0x46d0d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d0d8:{NFSU2_TR(0x46d0d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d0ddull));
TAIL_STATIC(0x735070u,735);
}
B46d0dd:L46d0dd:{c.instructions+=2;NFSU2_TR(0x46d0dd);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B46d0e2:{NFSU2_TR(0x46d0e2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46d0eb;}}
}
B46d0e4:L46d0e4:{c.instructions+=2;NFSU2_TR(0x46d0e4);
__builtin_memmove((R+4),(R+24),4);
}
B46d0e6:{NFSU2_TR(0x46d0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d0ebull));
TAIL_STATIC(0x46cef0u,46c);
}
B46d0eb:L46d0eb:{c.instructions+=4;NFSU2_TR(0x46d0eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46d0ec:{NFSU2_TR(0x46d0ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46d0ed:{NFSU2_TR(0x46d0ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46d0ee:{NFSU2_TR(0x46d0ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d100:L46d100:{c.instructions+=5;NFSU2_TR(0x46d100);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B46d105:{NFSU2_TR(0x46d105);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d108:{NFSU2_TR(0x46d108);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46d10b:{NFSU2_TR(0x46d10b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46d10d:{NFSU2_TR(0x46d10d);
if(r1(R+518)){{goto L46d11b;}}
}
B46d10f:L46d10f:{c.instructions+=4;NFSU2_TR(0x46d10f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d113:{NFSU2_TR(0x46d113);
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
B46d115:{NFSU2_TR(0x46d115);
__builtin_memmove((R+0),(R+518),1);
}
B46d118:{NFSU2_TR(0x46d118);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d11b:L46d11b:{c.instructions+=5;NFSU2_TR(0x46d11b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d11f:{NFSU2_TR(0x46d11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d122:{NFSU2_TR(0x46d122);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d124:{NFSU2_TR(0x46d124);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46d127:{NFSU2_TR(0x46d127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d130;}}
}
B46d129:L46d129:{c.instructions+=1;NFSU2_TR(0x46d129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d12eull));
TAIL_STATIC(0x46c790u,46c);
}
B46d12e:L46d12e:{c.instructions+=1;NFSU2_TR(0x46d12e);
{goto L46d135;}
}
B46d130:L46d130:{c.instructions+=1;NFSU2_TR(0x46d130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d135ull));
TAIL_STATIC(0x45a550u,45a);
}
B46d135:L46d135:{c.instructions+=4;NFSU2_TR(0x46d135);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B46d13b:{NFSU2_TR(0x46d13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d13e:{NFSU2_TR(0x46d13e);
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
B46d140:{NFSU2_TR(0x46d140);
if(r1(R+518)){{goto L46d14a;}}
}
B46d142:L46d142:{c.instructions+=2;NFSU2_TR(0x46d142);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B46d146:{NFSU2_TR(0x46d146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d14a;}}
}
B46d148:L46d148:{c.instructions+=1;NFSU2_TR(0x46d148);
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
B46d14a:L46d14a:{c.instructions+=1;NFSU2_TR(0x46d14a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d150:L46d150:{c.instructions+=11;NFSU2_TR(0x46d150);
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
B46d153:{NFSU2_TR(0x46d153);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d157:{NFSU2_TR(0x46d157);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d15b:{NFSU2_TR(0x46d15b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d15f:{NFSU2_TR(0x46d15f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B46d163:{NFSU2_TR(0x46d163);
__builtin_memmove((R+0),(R+16),4);
}
B46d167:{NFSU2_TR(0x46d167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d168:{NFSU2_TR(0x46d168);
u8 U[4];
w4(U+0,u32(0x82c6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d16d:{NFSU2_TR(0x46d16d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d171:{NFSU2_TR(0x46d171);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d175:{NFSU2_TR(0x46d175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d17aull));
TAIL_STATIC(0x735880u,735);
}
B46d17a:L46d17a:{c.instructions+=3;NFSU2_TR(0x46d17a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d17d:{NFSU2_TR(0x46d17d);
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
B46d17f:{NFSU2_TR(0x46d17f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d1a2;}}
}
B46d181:L46d181:{c.instructions+=3;NFSU2_TR(0x46d181);
u8 U[4];
w4(U+0,u32(0x7ed0dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d186:{NFSU2_TR(0x46d186);
w4(R+4,u32(0x82c6acull));
}
B46d18b:{NFSU2_TR(0x46d18b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d190ull));
TAIL_STATIC(0x735800u,735);
}
B46d190:L46d190:{c.instructions+=4;NFSU2_TR(0x46d190);
__builtin_memmove((R+4),(R+16),4);
}
B46d194:{NFSU2_TR(0x46d194);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d195:{NFSU2_TR(0x46d195);
u8 U[4];
w4(U+0,u32(0x82c6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d19a:{NFSU2_TR(0x46d19a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d19full));
TAIL_STATIC(0x735880u,735);
}
B46d19f:L46d19f:{c.instructions+=1;NFSU2_TR(0x46d19f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d1a2:L46d1a2:{c.instructions+=5;NFSU2_TR(0x46d1a2);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B46d1a8:{NFSU2_TR(0x46d1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d1ab:{NFSU2_TR(0x46d1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d1ae:{NFSU2_TR(0x46d1ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d1b0:{NFSU2_TR(0x46d1b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d1c0;}}
}
B46d1b2:L46d1b2:{c.instructions+=4;NFSU2_TR(0x46d1b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d1b4:{NFSU2_TR(0x46d1b4);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d1b9:{NFSU2_TR(0x46d1b9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d1bb:{NFSU2_TR(0x46d1bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d1c0ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d1c0:L46d1c0:{c.instructions+=2;NFSU2_TR(0x46d1c0);
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
B46d1c3:{NFSU2_TR(0x46d1c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d1d0:L46d1d0:{c.instructions+=13;NFSU2_TR(0x46d1d0);
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
B46d1d3:{NFSU2_TR(0x46d1d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d1d7:{NFSU2_TR(0x46d1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d1db:{NFSU2_TR(0x46d1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d1df:{NFSU2_TR(0x46d1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d1e3:{NFSU2_TR(0x46d1e3);
__builtin_memmove((R+4),(R+16),4);
}
B46d1e7:{NFSU2_TR(0x46d1e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B46d1eb:{NFSU2_TR(0x46d1eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d1ef:{NFSU2_TR(0x46d1ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d1f0:{NFSU2_TR(0x46d1f0);
u8 U[4];
w4(U+0,u32(0x82c560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d1f5:{NFSU2_TR(0x46d1f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d1f9:{NFSU2_TR(0x46d1f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d1fd:{NFSU2_TR(0x46d1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d202ull));
TAIL_STATIC(0x735880u,735);
}
B46d202:L46d202:{c.instructions+=3;NFSU2_TR(0x46d202);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d205:{NFSU2_TR(0x46d205);
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
B46d207:{NFSU2_TR(0x46d207);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d22a;}}
}
B46d209:L46d209:{c.instructions+=3;NFSU2_TR(0x46d209);
u8 U[4];
w4(U+0,u32(0x7ed0e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d20e:{NFSU2_TR(0x46d20e);
w4(R+4,u32(0x82c560ull));
}
B46d213:{NFSU2_TR(0x46d213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d218ull));
TAIL_STATIC(0x735800u,735);
}
B46d218:L46d218:{c.instructions+=4;NFSU2_TR(0x46d218);
__builtin_memmove((R+8),(R+16),4);
}
B46d21c:{NFSU2_TR(0x46d21c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d21d:{NFSU2_TR(0x46d21d);
u8 U[4];
w4(U+0,u32(0x82c560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d222:{NFSU2_TR(0x46d222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d227ull));
TAIL_STATIC(0x735880u,735);
}
B46d227:L46d227:{c.instructions+=1;NFSU2_TR(0x46d227);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d22a:L46d22a:{c.instructions+=5;NFSU2_TR(0x46d22a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B46d22f:{NFSU2_TR(0x46d22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d232:{NFSU2_TR(0x46d232);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d235:{NFSU2_TR(0x46d235);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d237:{NFSU2_TR(0x46d237);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d247;}}
}
B46d239:L46d239:{c.instructions+=4;NFSU2_TR(0x46d239);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d23b:{NFSU2_TR(0x46d23b);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d240:{NFSU2_TR(0x46d240);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d242:{NFSU2_TR(0x46d242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d247ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d247:L46d247:{c.instructions+=2;NFSU2_TR(0x46d247);
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
B46d24a:{NFSU2_TR(0x46d24a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d250:L46d250:{c.instructions+=13;NFSU2_TR(0x46d250);
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
B46d253:{NFSU2_TR(0x46d253);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d257:{NFSU2_TR(0x46d257);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d25b:{NFSU2_TR(0x46d25b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d25f:{NFSU2_TR(0x46d25f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d263:{NFSU2_TR(0x46d263);
__builtin_memmove((R+4),(R+16),4);
}
B46d267:{NFSU2_TR(0x46d267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B46d26b:{NFSU2_TR(0x46d26b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d26f:{NFSU2_TR(0x46d26f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d270:{NFSU2_TR(0x46d270);
u8 U[4];
w4(U+0,u32(0x82c588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d275:{NFSU2_TR(0x46d275);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d279:{NFSU2_TR(0x46d279);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d27d:{NFSU2_TR(0x46d27d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d282ull));
TAIL_STATIC(0x735880u,735);
}
B46d282:L46d282:{c.instructions+=3;NFSU2_TR(0x46d282);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d285:{NFSU2_TR(0x46d285);
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
B46d287:{NFSU2_TR(0x46d287);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d2aa;}}
}
B46d289:L46d289:{c.instructions+=3;NFSU2_TR(0x46d289);
u8 U[4];
w4(U+0,u32(0x7ed0ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d28e:{NFSU2_TR(0x46d28e);
w4(R+4,u32(0x82c588ull));
}
B46d293:{NFSU2_TR(0x46d293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d298ull));
TAIL_STATIC(0x735800u,735);
}
B46d298:L46d298:{c.instructions+=4;NFSU2_TR(0x46d298);
__builtin_memmove((R+8),(R+16),4);
}
B46d29c:{NFSU2_TR(0x46d29c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d29d:{NFSU2_TR(0x46d29d);
u8 U[4];
w4(U+0,u32(0x82c588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d2a2:{NFSU2_TR(0x46d2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d2a7ull));
TAIL_STATIC(0x735880u,735);
}
B46d2a7:L46d2a7:{c.instructions+=1;NFSU2_TR(0x46d2a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d2aa:L46d2aa:{c.instructions+=5;NFSU2_TR(0x46d2aa);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B46d2af:{NFSU2_TR(0x46d2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d2b2:{NFSU2_TR(0x46d2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d2b5:{NFSU2_TR(0x46d2b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d2b7:{NFSU2_TR(0x46d2b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d2c7;}}
}
B46d2b9:L46d2b9:{c.instructions+=4;NFSU2_TR(0x46d2b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d2bb:{NFSU2_TR(0x46d2bb);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d2c0:{NFSU2_TR(0x46d2c0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d2c2:{NFSU2_TR(0x46d2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d2c7ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d2c7:L46d2c7:{c.instructions+=2;NFSU2_TR(0x46d2c7);
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
B46d2ca:{NFSU2_TR(0x46d2ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d2d0:L46d2d0:{c.instructions+=5;NFSU2_TR(0x46d2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d2d4:{NFSU2_TR(0x46d2d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B46d2d7:{NFSU2_TR(0x46d2d7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B46d2da:{NFSU2_TR(0x46d2da);
w4(R+0,u32(0x1ull));
}
B46d2df:{NFSU2_TR(0x46d2df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46d2fb;}}
}
B46d2e1:L46d2e1:{c.instructions+=1;NFSU2_TR(0x46d2e1);
if(r1(R+518)){{goto L46d2f4;}}
}
B46d2e3:L46d2e3:{c.instructions+=3;NFSU2_TR(0x46d2e3);
__builtin_memmove((R+8),(R+4),4);
}
B46d2e5:{NFSU2_TR(0x46d2e5);
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
B46d2e6:{NFSU2_TR(0x46d2e6);
if(r1(R+518)){{goto L46d2ed;}}
}
B46d2e8:L46d2e8:{c.instructions+=2;NFSU2_TR(0x46d2e8);
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
B46d2e9:{NFSU2_TR(0x46d2e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d314;}}
}
B46d2eb:L46d2eb:{c.instructions+=1;NFSU2_TR(0x46d2eb);
{goto L46d314;}
}
B46d2ed:L46d2ed:{c.instructions+=2;NFSU2_TR(0x46d2ed);
w4(R+0,u32(0x3ull));
}
B46d2f2:{NFSU2_TR(0x46d2f2);
{goto L46d314;}
}
B46d2f4:L46d2f4:{c.instructions+=2;NFSU2_TR(0x46d2f4);
w4(R+0,u32(0x2ull));
}
B46d2f9:{NFSU2_TR(0x46d2f9);
{goto L46d314;}
}
B46d2fb:L46d2fb:{c.instructions+=2;NFSU2_TR(0x46d2fb);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46d2fe:{NFSU2_TR(0x46d2fe);
if(r1(R+518)){{goto L46d30f;}}
}
B46d300:L46d300:{c.instructions+=2;NFSU2_TR(0x46d300);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46d306:{NFSU2_TR(0x46d306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d314;}}
}
B46d308:L46d308:{c.instructions+=2;NFSU2_TR(0x46d308);
w4(R+0,u32(0x5ull));
}
B46d30d:{NFSU2_TR(0x46d30d);
{goto L46d314;}
}
B46d30f:L46d30f:{c.instructions+=1;NFSU2_TR(0x46d30f);
w4(R+0,u32(0x4ull));
}
B46d314:L46d314:{c.instructions+=10;NFSU2_TR(0x46d314);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d318:{NFSU2_TR(0x46d318);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d31c:{NFSU2_TR(0x46d31c);
__builtin_memmove((R+0),(R+16),4);
}
B46d320:{NFSU2_TR(0x46d320);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B46d324:{NFSU2_TR(0x46d324);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d328:{NFSU2_TR(0x46d328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d329:{NFSU2_TR(0x46d329);
u8 U[4];
w4(U+0,u32(0x82c650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d32e:{NFSU2_TR(0x46d32e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d332:{NFSU2_TR(0x46d332);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d336:{NFSU2_TR(0x46d336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d33bull));
TAIL_STATIC(0x735880u,735);
}
B46d33b:L46d33b:{c.instructions+=3;NFSU2_TR(0x46d33b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d33e:{NFSU2_TR(0x46d33e);
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
B46d340:{NFSU2_TR(0x46d340);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d363;}}
}
B46d342:L46d342:{c.instructions+=3;NFSU2_TR(0x46d342);
u8 U[4];
w4(U+0,u32(0x7ed0f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d347:{NFSU2_TR(0x46d347);
w4(R+4,u32(0x82c650ull));
}
B46d34c:{NFSU2_TR(0x46d34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d351ull));
TAIL_STATIC(0x735800u,735);
}
B46d351:L46d351:{c.instructions+=4;NFSU2_TR(0x46d351);
__builtin_memmove((R+4),(R+16),4);
}
B46d355:{NFSU2_TR(0x46d355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d356:{NFSU2_TR(0x46d356);
u8 U[4];
w4(U+0,u32(0x82c650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d35b:{NFSU2_TR(0x46d35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d360ull));
TAIL_STATIC(0x735880u,735);
}
B46d360:L46d360:{c.instructions+=1;NFSU2_TR(0x46d360);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d363:L46d363:{c.instructions+=5;NFSU2_TR(0x46d363);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B46d369:{NFSU2_TR(0x46d369);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d36c:{NFSU2_TR(0x46d36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d36f:{NFSU2_TR(0x46d36f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d371:{NFSU2_TR(0x46d371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d381;}}
}
B46d373:L46d373:{c.instructions+=4;NFSU2_TR(0x46d373);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d375:{NFSU2_TR(0x46d375);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d37a:{NFSU2_TR(0x46d37a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d37c:{NFSU2_TR(0x46d37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d381ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d381:L46d381:{c.instructions+=2;NFSU2_TR(0x46d381);
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
B46d384:{NFSU2_TR(0x46d384);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d390:L46d390:{c.instructions+=9;NFSU2_TR(0x46d390);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46d393:{NFSU2_TR(0x46d393);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d397:{NFSU2_TR(0x46d397);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d39b:{NFSU2_TR(0x46d39b);
__builtin_memmove((R+8),(R+16),4);
}
B46d39f:{NFSU2_TR(0x46d39f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3a0:{NFSU2_TR(0x46d3a0);
u8 U[4];
w4(U+0,u32(0x82c5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3a5:{NFSU2_TR(0x46d3a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d3a9:{NFSU2_TR(0x46d3a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d3ad:{NFSU2_TR(0x46d3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d3b2ull));
TAIL_STATIC(0x735880u,735);
}
B46d3b2:L46d3b2:{c.instructions+=3;NFSU2_TR(0x46d3b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d3b5:{NFSU2_TR(0x46d3b5);
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
B46d3b7:{NFSU2_TR(0x46d3b7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d3da;}}
}
B46d3b9:L46d3b9:{c.instructions+=3;NFSU2_TR(0x46d3b9);
u8 U[4];
w4(U+0,u32(0x7ed0fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3be:{NFSU2_TR(0x46d3be);
w4(R+4,u32(0x82c5b8ull));
}
B46d3c3:{NFSU2_TR(0x46d3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d3c8ull));
TAIL_STATIC(0x735800u,735);
}
B46d3c8:L46d3c8:{c.instructions+=4;NFSU2_TR(0x46d3c8);
__builtin_memmove((R+0),(R+16),4);
}
B46d3cc:{NFSU2_TR(0x46d3cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3cd:{NFSU2_TR(0x46d3cd);
u8 U[4];
w4(U+0,u32(0x82c5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3d2:{NFSU2_TR(0x46d3d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d3d7ull));
TAIL_STATIC(0x735880u,735);
}
B46d3d7:L46d3d7:{c.instructions+=1;NFSU2_TR(0x46d3d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d3da:L46d3da:{c.instructions+=5;NFSU2_TR(0x46d3da);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B46d3e0:{NFSU2_TR(0x46d3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d3e3:{NFSU2_TR(0x46d3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d3e6:{NFSU2_TR(0x46d3e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d3e8:{NFSU2_TR(0x46d3e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d3f8;}}
}
B46d3ea:L46d3ea:{c.instructions+=4;NFSU2_TR(0x46d3ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3ec:{NFSU2_TR(0x46d3ec);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3f1:{NFSU2_TR(0x46d3f1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d3f3:{NFSU2_TR(0x46d3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d3f8ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d3f8:L46d3f8:{c.instructions+=2;NFSU2_TR(0x46d3f8);
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
B46d3fb:{NFSU2_TR(0x46d3fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d400:L46d400:{c.instructions+=13;NFSU2_TR(0x46d400);
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
B46d403:{NFSU2_TR(0x46d403);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d407:{NFSU2_TR(0x46d407);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d40b:{NFSU2_TR(0x46d40b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d40f:{NFSU2_TR(0x46d40f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d413:{NFSU2_TR(0x46d413);
__builtin_memmove((R+4),(R+16),4);
}
B46d417:{NFSU2_TR(0x46d417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B46d41b:{NFSU2_TR(0x46d41b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d41f:{NFSU2_TR(0x46d41f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d420:{NFSU2_TR(0x46d420);
u8 U[4];
w4(U+0,u32(0x82c658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d425:{NFSU2_TR(0x46d425);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d429:{NFSU2_TR(0x46d429);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d42d:{NFSU2_TR(0x46d42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d432ull));
TAIL_STATIC(0x735880u,735);
}
B46d432:L46d432:{c.instructions+=3;NFSU2_TR(0x46d432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d435:{NFSU2_TR(0x46d435);
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
B46d437:{NFSU2_TR(0x46d437);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d45a;}}
}
B46d439:L46d439:{c.instructions+=3;NFSU2_TR(0x46d439);
u8 U[4];
w4(U+0,u32(0x7ed104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d43e:{NFSU2_TR(0x46d43e);
w4(R+4,u32(0x82c658ull));
}
B46d443:{NFSU2_TR(0x46d443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d448ull));
TAIL_STATIC(0x735800u,735);
}
B46d448:L46d448:{c.instructions+=4;NFSU2_TR(0x46d448);
__builtin_memmove((R+8),(R+16),4);
}
B46d44c:{NFSU2_TR(0x46d44c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d44d:{NFSU2_TR(0x46d44d);
u8 U[4];
w4(U+0,u32(0x82c658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d452:{NFSU2_TR(0x46d452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d457ull));
TAIL_STATIC(0x735880u,735);
}
B46d457:L46d457:{c.instructions+=1;NFSU2_TR(0x46d457);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d45a:L46d45a:{c.instructions+=5;NFSU2_TR(0x46d45a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B46d45f:{NFSU2_TR(0x46d45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d462:{NFSU2_TR(0x46d462);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d465:{NFSU2_TR(0x46d465);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d467:{NFSU2_TR(0x46d467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d477;}}
}
B46d469:L46d469:{c.instructions+=4;NFSU2_TR(0x46d469);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d46b:{NFSU2_TR(0x46d46b);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d470:{NFSU2_TR(0x46d470);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d472:{NFSU2_TR(0x46d472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d477ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d477:L46d477:{c.instructions+=2;NFSU2_TR(0x46d477);
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
B46d47a:{NFSU2_TR(0x46d47a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d480:L46d480:{c.instructions+=10;NFSU2_TR(0x46d480);
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
B46d483:{NFSU2_TR(0x46d483);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d487:{NFSU2_TR(0x46d487);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d48b:{NFSU2_TR(0x46d48b);
__builtin_memmove((R+8),(R+16),4);
}
B46d48f:{NFSU2_TR(0x46d48f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d490:{NFSU2_TR(0x46d490);
u8 U[4];
w4(U+0,u32(0x82c580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d495:{NFSU2_TR(0x46d495);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46d49d:{NFSU2_TR(0x46d49d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d4a1:{NFSU2_TR(0x46d4a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d4a5:{NFSU2_TR(0x46d4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d4aaull));
TAIL_STATIC(0x735880u,735);
}
B46d4aa:L46d4aa:{c.instructions+=3;NFSU2_TR(0x46d4aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d4ad:{NFSU2_TR(0x46d4ad);
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
B46d4af:{NFSU2_TR(0x46d4af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d4d2;}}
}
B46d4b1:L46d4b1:{c.instructions+=3;NFSU2_TR(0x46d4b1);
u8 U[4];
w4(U+0,u32(0x7ed114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d4b6:{NFSU2_TR(0x46d4b6);
w4(R+4,u32(0x82c580ull));
}
B46d4bb:{NFSU2_TR(0x46d4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d4c0ull));
TAIL_STATIC(0x735800u,735);
}
B46d4c0:L46d4c0:{c.instructions+=4;NFSU2_TR(0x46d4c0);
__builtin_memmove((R+0),(R+16),4);
}
B46d4c4:{NFSU2_TR(0x46d4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d4c5:{NFSU2_TR(0x46d4c5);
u8 U[4];
w4(U+0,u32(0x82c580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d4ca:{NFSU2_TR(0x46d4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d4cfull));
TAIL_STATIC(0x735880u,735);
}
B46d4cf:L46d4cf:{c.instructions+=1;NFSU2_TR(0x46d4cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d4d2:L46d4d2:{c.instructions+=5;NFSU2_TR(0x46d4d2);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B46d4d8:{NFSU2_TR(0x46d4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d4db:{NFSU2_TR(0x46d4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d4de:{NFSU2_TR(0x46d4de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d4e0:{NFSU2_TR(0x46d4e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d4f0;}}
}
B46d4e2:L46d4e2:{c.instructions+=4;NFSU2_TR(0x46d4e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d4e4:{NFSU2_TR(0x46d4e4);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d4e9:{NFSU2_TR(0x46d4e9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d4eb:{NFSU2_TR(0x46d4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d4f0ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d4f0:L46d4f0:{c.instructions+=2;NFSU2_TR(0x46d4f0);
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
B46d4f3:{NFSU2_TR(0x46d4f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d500:L46d500:{c.instructions+=10;NFSU2_TR(0x46d500);
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
B46d503:{NFSU2_TR(0x46d503);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d507:{NFSU2_TR(0x46d507);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d50b:{NFSU2_TR(0x46d50b);
__builtin_memmove((R+8),(R+16),4);
}
B46d50f:{NFSU2_TR(0x46d50f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d510:{NFSU2_TR(0x46d510);
u8 U[4];
w4(U+0,u32(0x82c5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d515:{NFSU2_TR(0x46d515);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46d51d:{NFSU2_TR(0x46d51d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d521:{NFSU2_TR(0x46d521);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d525:{NFSU2_TR(0x46d525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d52aull));
TAIL_STATIC(0x735880u,735);
}
B46d52a:L46d52a:{c.instructions+=3;NFSU2_TR(0x46d52a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d52d:{NFSU2_TR(0x46d52d);
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
B46d52f:{NFSU2_TR(0x46d52f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d552;}}
}
B46d531:L46d531:{c.instructions+=3;NFSU2_TR(0x46d531);
u8 U[4];
w4(U+0,u32(0x7ed11cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d536:{NFSU2_TR(0x46d536);
w4(R+4,u32(0x82c5c0ull));
}
B46d53b:{NFSU2_TR(0x46d53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d540ull));
TAIL_STATIC(0x735800u,735);
}
B46d540:L46d540:{c.instructions+=4;NFSU2_TR(0x46d540);
__builtin_memmove((R+0),(R+16),4);
}
B46d544:{NFSU2_TR(0x46d544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d545:{NFSU2_TR(0x46d545);
u8 U[4];
w4(U+0,u32(0x82c5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d54a:{NFSU2_TR(0x46d54a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d54full));
TAIL_STATIC(0x735880u,735);
}
B46d54f:L46d54f:{c.instructions+=1;NFSU2_TR(0x46d54f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d552:L46d552:{c.instructions+=5;NFSU2_TR(0x46d552);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B46d558:{NFSU2_TR(0x46d558);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d55b:{NFSU2_TR(0x46d55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d55e:{NFSU2_TR(0x46d55e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d560:{NFSU2_TR(0x46d560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d570;}}
}
B46d562:L46d562:{c.instructions+=4;NFSU2_TR(0x46d562);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d564:{NFSU2_TR(0x46d564);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d569:{NFSU2_TR(0x46d569);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d56b:{NFSU2_TR(0x46d56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d570ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d570:L46d570:{c.instructions+=2;NFSU2_TR(0x46d570);
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
B46d573:{NFSU2_TR(0x46d573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d580:L46d580:{c.instructions+=11;NFSU2_TR(0x46d580);
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
B46d583:{NFSU2_TR(0x46d583);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d587:{NFSU2_TR(0x46d587);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d58b:{NFSU2_TR(0x46d58b);
__builtin_memmove((R+8),(R+16),4);
}
B46d58f:{NFSU2_TR(0x46d58f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d590:{NFSU2_TR(0x46d590);
u8 U[4];
w4(U+0,u32(0x82c640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d595:{NFSU2_TR(0x46d595);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46d59d:{NFSU2_TR(0x46d59d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46d5a5:{NFSU2_TR(0x46d5a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d5a9:{NFSU2_TR(0x46d5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d5ad:{NFSU2_TR(0x46d5ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d5b2ull));
TAIL_STATIC(0x735880u,735);
}
B46d5b2:L46d5b2:{c.instructions+=3;NFSU2_TR(0x46d5b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d5b5:{NFSU2_TR(0x46d5b5);
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
B46d5b7:{NFSU2_TR(0x46d5b7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46d5da;}}
}
B46d5b9:L46d5b9:{c.instructions+=3;NFSU2_TR(0x46d5b9);
u8 U[4];
w4(U+0,u32(0x7ed124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d5be:{NFSU2_TR(0x46d5be);
w4(R+4,u32(0x82c640ull));
}
B46d5c3:{NFSU2_TR(0x46d5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d5c8ull));
TAIL_STATIC(0x735800u,735);
}
B46d5c8:L46d5c8:{c.instructions+=4;NFSU2_TR(0x46d5c8);
__builtin_memmove((R+0),(R+16),4);
}
B46d5cc:{NFSU2_TR(0x46d5cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d5cd:{NFSU2_TR(0x46d5cd);
u8 U[4];
w4(U+0,u32(0x82c640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d5d2:{NFSU2_TR(0x46d5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d5d7ull));
TAIL_STATIC(0x735880u,735);
}
B46d5d7:L46d5d7:{c.instructions+=1;NFSU2_TR(0x46d5d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46d5da:L46d5da:{c.instructions+=5;NFSU2_TR(0x46d5da);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B46d5e0:{NFSU2_TR(0x46d5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d5e3:{NFSU2_TR(0x46d5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d5e6:{NFSU2_TR(0x46d5e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d5e8:{NFSU2_TR(0x46d5e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d5f8;}}
}
B46d5ea:L46d5ea:{c.instructions+=4;NFSU2_TR(0x46d5ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d5ec:{NFSU2_TR(0x46d5ec);
u8 U[4];
w4(U+0,u32(0x45b480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d5f1:{NFSU2_TR(0x46d5f1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d5f3:{NFSU2_TR(0x46d5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d5f8ull));
TAIL_STATIC(0x46ca60u,46c);
}
B46d5f8:L46d5f8:{c.instructions+=2;NFSU2_TR(0x46d5f8);
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
B46d5fb:{NFSU2_TR(0x46d5fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d600:L46d600:{c.instructions+=3;NFSU2_TR(0x46d600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d601:{NFSU2_TR(0x46d601);
__builtin_memmove((R+24),(R+4),4);
}
B46d603:{NFSU2_TR(0x46d603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d608ull));
TAIL_STATIC(0x45b730u,45b);
}
B46d608:L46d608:{c.instructions+=2;NFSU2_TR(0x46d608);
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
B46d60d:{NFSU2_TR(0x46d60d);
if(r1(R+518)){{goto L46d618;}}
}
B46d60f:L46d60f:{c.instructions+=2;NFSU2_TR(0x46d60f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d610:{NFSU2_TR(0x46d610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d615ull));
TAIL_STATIC(0x440540u,440);
}
B46d615:L46d615:{c.instructions+=1;NFSU2_TR(0x46d615);
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
B46d618:L46d618:{c.instructions+=3;NFSU2_TR(0x46d618);
__builtin_memmove((R+0),(R+24),4);
}
B46d61a:{NFSU2_TR(0x46d61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46d61b:{NFSU2_TR(0x46d61b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d620:L46d620:{c.instructions+=5;NFSU2_TR(0x46d620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46d623:{NFSU2_TR(0x46d623);
__builtin_memmove((R+0),(R+16),4);
}
B46d627:{NFSU2_TR(0x46d627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d628:{NFSU2_TR(0x46d628);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46d62f:{NFSU2_TR(0x46d62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d634ull));
TAIL_STATIC(0x45b9f0u,45b);
}
B46d634:L46d634:{c.instructions+=3;NFSU2_TR(0x46d634);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d63a:{NFSU2_TR(0x46d63a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46d63d:{NFSU2_TR(0x46d63d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L46d792;}}
}
B46d643:L46d643:{c.instructions+=1;NFSU2_TR(0x46d643);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x46d798ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46d64a:L46d64a:{c.instructions+=3;NFSU2_TR(0x46d64a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d64e:{NFSU2_TR(0x46d64e);
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
B46d650:{NFSU2_TR(0x46d650);
if(r1(R+518)){{goto L46d66b;}}
}
B46d652:L46d652:{c.instructions+=2;NFSU2_TR(0x46d652);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d654:{NFSU2_TR(0x46d654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d659ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d659:L46d659:{c.instructions+=2;NFSU2_TR(0x46d659);
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
B46d65c:{NFSU2_TR(0x46d65c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d65f:L46d65f:{c.instructions+=3;NFSU2_TR(0x46d65f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d663:{NFSU2_TR(0x46d663);
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
B46d665:{NFSU2_TR(0x46d665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d792;}}
}
B46d66b:L46d66b:{c.instructions+=2;NFSU2_TR(0x46d66b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d66d:{NFSU2_TR(0x46d66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d672ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d672:L46d672:{c.instructions+=2;NFSU2_TR(0x46d672);
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
B46d675:{NFSU2_TR(0x46d675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d678:L46d678:{c.instructions+=3;NFSU2_TR(0x46d678);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d67c:{NFSU2_TR(0x46d67c);
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
B46d67e:{NFSU2_TR(0x46d67e);
if(r1(R+518)){{goto L46d792;}}
}
B46d684:L46d684:{c.instructions+=2;NFSU2_TR(0x46d684);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d686:{NFSU2_TR(0x46d686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d68bull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d68b:L46d68b:{c.instructions+=2;NFSU2_TR(0x46d68b);
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
B46d68e:{NFSU2_TR(0x46d68e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d691:L46d691:{c.instructions+=7;NFSU2_TR(0x46d691);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d697:{NFSU2_TR(0x46d697);
{u32 ea_=u32(r4(R+8)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d69a:{NFSU2_TR(0x46d69a);
{u32 ea_=u32(u32(7898500u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46d6a0:{NFSU2_TR(0x46d6a0);
{u32 ea_=u32(r4(R+4)+u32(400u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46d6a6:{NFSU2_TR(0x46d6a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46d6a8:{NFSU2_TR(0x46d6a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46d6ab:{NFSU2_TR(0x46d6ab);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46d792;}}
}
B46d6b1:L46d6b1:{c.instructions+=3;NFSU2_TR(0x46d6b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d6b5:{NFSU2_TR(0x46d6b5);
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
B46d6b7:{NFSU2_TR(0x46d6b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d70e;}}
}
B46d6b9:L46d6b9:{c.instructions+=3;NFSU2_TR(0x46d6b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d6bd:{NFSU2_TR(0x46d6bd);
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
B46d6bf:{NFSU2_TR(0x46d6bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d723;}}
}
B46d6c1:L46d6c1:{c.instructions+=3;NFSU2_TR(0x46d6c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d6c5:{NFSU2_TR(0x46d6c5);
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
B46d6c7:{NFSU2_TR(0x46d6c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d78b;}}
}
B46d6cd:L46d6cd:{c.instructions+=3;NFSU2_TR(0x46d6cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d6d1:{NFSU2_TR(0x46d6d1);
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
B46d6d3:{NFSU2_TR(0x46d6d3);
if(r1(R+518)){{goto L46d792;}}
}
B46d6d9:L46d6d9:{c.instructions+=2;NFSU2_TR(0x46d6d9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d6db:{NFSU2_TR(0x46d6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d6e0ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d6e0:L46d6e0:{c.instructions+=2;NFSU2_TR(0x46d6e0);
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
B46d6e3:{NFSU2_TR(0x46d6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d6e6:L46d6e6:{c.instructions+=7;NFSU2_TR(0x46d6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d6ec:{NFSU2_TR(0x46d6ec);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d6ef:{NFSU2_TR(0x46d6ef);
{u32 ea_=u32(u32(7898504u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46d6f5:{NFSU2_TR(0x46d6f5);
{u32 ea_=u32(r4(R+4)+u32(400u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46d6fb:{NFSU2_TR(0x46d6fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46d6fd:{NFSU2_TR(0x46d6fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46d700:{NFSU2_TR(0x46d700);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46d792;}}
}
B46d706:L46d706:{c.instructions+=3;NFSU2_TR(0x46d706);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d70a:{NFSU2_TR(0x46d70a);
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
B46d70c:{NFSU2_TR(0x46d70c);
if(r1(R+518)){{goto L46d71b;}}
}
B46d70e:L46d70e:{c.instructions+=2;NFSU2_TR(0x46d70e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d710:{NFSU2_TR(0x46d710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d715ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d715:L46d715:{c.instructions+=2;NFSU2_TR(0x46d715);
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
B46d718:{NFSU2_TR(0x46d718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d71b:L46d71b:{c.instructions+=3;NFSU2_TR(0x46d71b);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d71f:{NFSU2_TR(0x46d71f);
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
B46d721:{NFSU2_TR(0x46d721);
if(r1(R+518)){{goto L46d730;}}
}
B46d723:L46d723:{c.instructions+=2;NFSU2_TR(0x46d723);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d725:{NFSU2_TR(0x46d725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d72aull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d72a:L46d72a:{c.instructions+=2;NFSU2_TR(0x46d72a);
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
B46d72d:{NFSU2_TR(0x46d72d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d730:L46d730:{c.instructions+=3;NFSU2_TR(0x46d730);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d734:{NFSU2_TR(0x46d734);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46d736:{NFSU2_TR(0x46d736);
if(r1(R+518)){{goto L46d792;}}
}
B46d738:L46d738:{c.instructions+=3;NFSU2_TR(0x46d738);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d73c:{NFSU2_TR(0x46d73c);
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
B46d73e:{NFSU2_TR(0x46d73e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d792;}}
}
B46d740:L46d740:{c.instructions+=2;NFSU2_TR(0x46d740);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d742:{NFSU2_TR(0x46d742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d747ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d747:L46d747:{c.instructions+=2;NFSU2_TR(0x46d747);
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
B46d74a:{NFSU2_TR(0x46d74a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d74d:L46d74d:{c.instructions+=7;NFSU2_TR(0x46d74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d753:{NFSU2_TR(0x46d753);
{u32 ea_=u32(r4(R+8)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d756:{NFSU2_TR(0x46d756);
{u32 ea_=u32((r4(R+0)*4u)+u32(7898488u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46d75d:{NFSU2_TR(0x46d75d);
{u32 ea_=u32(r4(R+4)+u32(400u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46d763:{NFSU2_TR(0x46d763);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46d765:{NFSU2_TR(0x46d765);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46d768:{NFSU2_TR(0x46d768);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46d792;}}
}
B46d76a:L46d76a:{c.instructions+=4;NFSU2_TR(0x46d76a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d76e:{NFSU2_TR(0x46d76e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46d770:{NFSU2_TR(0x46d770);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46d774:{NFSU2_TR(0x46d774);
if(r1(R+518)){{goto L46d787;}}
}
B46d776:L46d776:{c.instructions+=2;NFSU2_TR(0x46d776);
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
B46d778:{NFSU2_TR(0x46d778);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d78b;}}
}
B46d77a:L46d77a:{c.instructions+=2;NFSU2_TR(0x46d77a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d77c:{NFSU2_TR(0x46d77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d781ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d781:L46d781:{c.instructions+=2;NFSU2_TR(0x46d781);
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
B46d784:{NFSU2_TR(0x46d784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d787:L46d787:{c.instructions+=2;NFSU2_TR(0x46d787);
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
B46d789:{NFSU2_TR(0x46d789);
if(r1(R+518)){{goto L46d792;}}
}
B46d78b:L46d78b:{c.instructions+=2;NFSU2_TR(0x46d78b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d78d:{NFSU2_TR(0x46d78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d792ull));
TAIL_STATIC(0x45b9c0u,45b);
}
B46d792:L46d792:{c.instructions+=2;NFSU2_TR(0x46d792);
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
B46d795:{NFSU2_TR(0x46d795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d7c0:L46d7c0:{c.instructions+=5;NFSU2_TR(0x46d7c0);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B46d7c5:{NFSU2_TR(0x46d7c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d7c6:{NFSU2_TR(0x46d7c6);
__builtin_memmove((R+24),(R+4),4);
}
B46d7c8:{NFSU2_TR(0x46d7c8);
u8 U[4];
w4(U+0,u32(0x789ed0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46d7ce:{NFSU2_TR(0x46d7ce);
if(r1(R+518)){{goto L46d7d9;}}
}
B46d7d0:L46d7d0:{c.instructions+=2;NFSU2_TR(0x46d7d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d7d1:{NFSU2_TR(0x46d7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d7d6ull));
TAIL_STATIC(0x575630u,575);
}
B46d7d6:L46d7d6:{c.instructions+=1;NFSU2_TR(0x46d7d6);
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
B46d7d9:L46d7d9:{c.instructions+=3;NFSU2_TR(0x46d7d9);
__builtin_memmove((R+0),(R+24),4);
}
B46d7db:{NFSU2_TR(0x46d7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46d7dc:{NFSU2_TR(0x46d7dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46d7e0:L46d7e0:{c.instructions+=8;NFSU2_TR(0x46d7e0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B46d7e5:{NFSU2_TR(0x46d7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d7eb:{NFSU2_TR(0x46d7eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B46d7ee:{NFSU2_TR(0x46d7ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d7ef:{NFSU2_TR(0x46d7ef);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46d7f1:{NFSU2_TR(0x46d7f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d7f3:{NFSU2_TR(0x46d7f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d7f4:{NFSU2_TR(0x46d7f4);
if(r1(R+518)){{goto L46da25;}}
}
B46d7fa:L46d7fa:{c.instructions+=4;NFSU2_TR(0x46d7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d7fd:{NFSU2_TR(0x46d7fd);
__builtin_memmove((R+0),(R+4),4);
}
B46d7ff:{NFSU2_TR(0x46d7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d801:{NFSU2_TR(0x46d801);
if(r1(R+518)){{goto L46da25;}}
}
B46d807:L46d807:{c.instructions+=3;NFSU2_TR(0x46d807);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d80a:{NFSU2_TR(0x46d80a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d80c:{NFSU2_TR(0x46d80c);
if(r1(R+518)){{goto L46d81a;}}
}
B46d80e:L46d80e:{c.instructions+=3;NFSU2_TR(0x46d80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d811:{NFSU2_TR(0x46d811);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d813:{NFSU2_TR(0x46d813);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46d807u);}goto L46d807;}}
}
B46d815:L46d815:{c.instructions+=1;NFSU2_TR(0x46d815);
{goto L46da25;}
}
B46d81a:L46d81a:{c.instructions+=2;NFSU2_TR(0x46d81a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d81c:{NFSU2_TR(0x46d81c);
if(r1(R+518)){{goto L46da25;}}
}
B46d822:L46d822:{c.instructions+=3;NFSU2_TR(0x46d822);
__builtin_memmove((R+0),(R+4),4);
}
B46d824:{NFSU2_TR(0x46d824);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d826:{NFSU2_TR(0x46d826);
if(r1(R+518)){{goto L46d836;}}
}
B46d828:L46d828:{c.instructions+=3;NFSU2_TR(0x46d828);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d82b:{NFSU2_TR(0x46d82b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d82d:{NFSU2_TR(0x46d82d);
if(r1(R+518)){{goto L46d838;}}
}
B46d82f:L46d82f:{c.instructions+=3;NFSU2_TR(0x46d82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d832:{NFSU2_TR(0x46d832);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d834:{NFSU2_TR(0x46d834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46d828u);}goto L46d828;}}
}
B46d836:L46d836:{c.instructions+=1;NFSU2_TR(0x46d836);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46d838:L46d838:{c.instructions+=3;NFSU2_TR(0x46d838);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46d83b:{NFSU2_TR(0x46d83b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d83d:{NFSU2_TR(0x46d83d);
if(r1(R+518)){{goto L46da25;}}
}
B46d843:L46d843:{c.instructions+=3;NFSU2_TR(0x46d843);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46d846:{NFSU2_TR(0x46d846);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d848:{NFSU2_TR(0x46d848);
if(r1(R+518)){{goto L46da25;}}
}
B46d84e:L46d84e:{c.instructions+=3;NFSU2_TR(0x46d84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d854:{NFSU2_TR(0x46d854);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d856:{NFSU2_TR(0x46d856);
if(r1(R+518)){{goto L46da25;}}
}
B46d85c:L46d85c:{c.instructions+=30;NFSU2_TR(0x46d85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d85f:{NFSU2_TR(0x46d85f);
__builtin_memmove(gp(0x82bb40),(R+0),4);
}
B46d864:{NFSU2_TR(0x46d864);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d867:{NFSU2_TR(0x46d867);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d86a:{NFSU2_TR(0x46d86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d86d:{NFSU2_TR(0x46d86d);
__builtin_memmove(gp(0x82bef0),(R+4),4);
}
B46d873:{NFSU2_TR(0x46d873);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46d875:{NFSU2_TR(0x46d875);
{u32 ea_=u32(u32(8568564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d87b:{NFSU2_TR(0x46d87b);
{u32 ea_=u32(u32(8568568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d881:{NFSU2_TR(0x46d881);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d884:{NFSU2_TR(0x46d884);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d887:{NFSU2_TR(0x46d887);
__builtin_memmove((R+4),(R+8),4);
}
B46d889:{NFSU2_TR(0x46d889);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d88c:{NFSU2_TR(0x46d88c);
__builtin_memmove(gp(0x82c610),(R+8),4);
}
B46d892:{NFSU2_TR(0x46d892);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46d894:{NFSU2_TR(0x46d894);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46d898:{NFSU2_TR(0x46d898);
{u32 ea_=u32(u32(8570388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d89e:{NFSU2_TR(0x46d89e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d89f:{NFSU2_TR(0x46d89f);
u8 U[4];
w4(U+0,u32(0x82be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d8a4:{NFSU2_TR(0x46d8a4);
{u32 ea_=u32(u32(8570392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d8aa:{NFSU2_TR(0x46d8aa);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d8ad:{NFSU2_TR(0x46d8ad);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d8b0:{NFSU2_TR(0x46d8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d8b3:{NFSU2_TR(0x46d8b3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46d8b5:{NFSU2_TR(0x46d8b5);
__builtin_memmove(gp(0x82be80),(R+0),4);
}
B46d8ba:{NFSU2_TR(0x46d8ba);
{u32 ea_=u32(u32(8568452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d8c0:{NFSU2_TR(0x46d8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d8c4:{NFSU2_TR(0x46d8c4);
{u32 ea_=u32(u32(8568456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d8ca:{NFSU2_TR(0x46d8ca);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d8ce:{NFSU2_TR(0x46d8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d8d3ull));
TAIL_STATIC(0x43ce50u,43c);
}
B46d8d3:L46d8d3:{c.instructions+=29;NFSU2_TR(0x46d8d3);
__builtin_memmove((R+0),gp(0x82be70),4);
}
B46d8d8:{NFSU2_TR(0x46d8d8);
__builtin_memmove((R+4),gp(0x82be74),4);
}
B46d8de:{NFSU2_TR(0x46d8de);
__builtin_memmove((R+8),gp(0x82bef0),4);
}
B46d8e4:{NFSU2_TR(0x46d8e4);
__builtin_memmove(gp(0x82becc),(R+0),4);
}
B46d8e9:{NFSU2_TR(0x46d8e9);
__builtin_memmove((R+0),gp(0x82bef4),4);
}
B46d8ee:{NFSU2_TR(0x46d8ee);
__builtin_memmove(gp(0x82bed0),(R+4),4);
}
B46d8f4:{NFSU2_TR(0x46d8f4);
__builtin_memmove(gp(0x82bf10),(R+8),4);
}
B46d8fa:{NFSU2_TR(0x46d8fa);
__builtin_memmove((R+4),(R+8),4);
}
B46d8fc:{NFSU2_TR(0x46d8fc);
__builtin_memmove((R+8),(R+0),4);
}
B46d8fe:{NFSU2_TR(0x46d8fe);
__builtin_memmove(gp(0x82bf14),(R+0),4);
}
B46d903:{NFSU2_TR(0x46d903);
__builtin_memmove(gp(0x82bf20),(R+4),4);
}
B46d909:{NFSU2_TR(0x46d909);
__builtin_memmove(gp(0x82bf24),(R+8),4);
}
B46d90f:{NFSU2_TR(0x46d90f);
{u32 ea_=u32(r4(R+12)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d912:{NFSU2_TR(0x46d912);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d915:{NFSU2_TR(0x46d915);
{u32 ea_=u32(u32(8568544u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46d91b:{NFSU2_TR(0x46d91b);
__builtin_memmove(gp(0x82bedc),(R+0),4);
}
B46d920:{NFSU2_TR(0x46d920);
{u32 ea_=u32(u32(8568540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46d926:{NFSU2_TR(0x46d926);
{u32 ea_=u32(u32(8568560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46d92c:{NFSU2_TR(0x46d92c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46d930:{NFSU2_TR(0x46d930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d931:{NFSU2_TR(0x46d931);
u8 U[4];
w4(U+0,u32(0x82c6c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d936:{NFSU2_TR(0x46d936);
{u32 ea_=u32(u32(8570480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d93c:{NFSU2_TR(0x46d93c);
{u32 ea_=u32(u32(8568564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46d942:{NFSU2_TR(0x46d942);
{u32 ea_=u32(u32(8570484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46d948:{NFSU2_TR(0x46d948);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46d94e:{NFSU2_TR(0x46d94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46d954:{NFSU2_TR(0x46d954);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d958:{NFSU2_TR(0x46d958);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46d95c:{NFSU2_TR(0x46d95c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d961ull));
TAIL_STATIC(0x43ce50u,43c);
}
B46d961:L46d961:{c.instructions+=6;NFSU2_TR(0x46d961);
__builtin_memmove((R+0),gp(0x890118),4);
}
B46d966:{NFSU2_TR(0x46d966);
__builtin_memmove((R+4),gp(0x82bb48),4);
}
B46d96c:{NFSU2_TR(0x46d96c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46d96f:{NFSU2_TR(0x46d96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d971:{NFSU2_TR(0x46d971);
__builtin_memmove(gp(0x82bb50),(R+4),4);
}
B46d977:{NFSU2_TR(0x46d977);
if(r1(R+518)){{goto L46d97e;}}
}
B46d979:L46d979:{c.instructions+=2;NFSU2_TR(0x46d979);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B46d97c:{NFSU2_TR(0x46d97c);
if(r1(R+518)){{goto L46d99a;}}
}
B46d97e:L46d97e:{c.instructions+=2;NFSU2_TR(0x46d97e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B46d981:{NFSU2_TR(0x46d981);
if(r1(R+518)){{goto L46d99a;}}
}
B46d983:L46d983:{c.instructions+=6;NFSU2_TR(0x46d983);
__builtin_memmove((R+8),gp(0x827ec8),4);
}
B46d989:{NFSU2_TR(0x46d989);
__builtin_memmove((R+4),gp(0x827eb0),4);
}
B46d98f:{NFSU2_TR(0x46d98f);
__builtin_memmove((R+0),gp(0x827e98),4);
}
B46d994:{NFSU2_TR(0x46d994);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B46d996:{NFSU2_TR(0x46d996);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B46d998:{NFSU2_TR(0x46d998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d9a3;}}
}
B46d99a:L46d99a:{c.instructions+=3;NFSU2_TR(0x46d99a);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B46d99f:{NFSU2_TR(0x46d99f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d9a1:{NFSU2_TR(0x46d9a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46d9af;}}
}
B46d9a3:L46d9a3:{c.instructions+=2;NFSU2_TR(0x46d9a3);
s4(0x82bb48,u32(0x4ull));
}
B46d9ad:{NFSU2_TR(0x46d9ad);
{goto L46da25;}
}
B46d9af:L46d9af:{c.instructions+=3;NFSU2_TR(0x46d9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d9b2:{NFSU2_TR(0x46d9b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d9b4:{NFSU2_TR(0x46d9b4);
if(r1(R+518)){{goto L46d9cc;}}
}
B46d9b6:L46d9b6:{c.instructions+=2;NFSU2_TR(0x46d9b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46d9b9:{NFSU2_TR(0x46d9b9);
if(r1(R+518)){{goto L46d9c0;}}
}
B46d9bb:L46d9bb:{c.instructions+=2;NFSU2_TR(0x46d9bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46d9be:{NFSU2_TR(0x46d9be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d9cc;}}
}
B46d9c0:L46d9c0:{c.instructions+=2;NFSU2_TR(0x46d9c0);
s4(0x82bb48,u32(0x3ull));
}
B46d9ca:{NFSU2_TR(0x46d9ca);
{goto L46da25;}
}
B46d9cc:L46d9cc:{c.instructions+=3;NFSU2_TR(0x46d9cc);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B46d9d1:{NFSU2_TR(0x46d9d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46d9d3:{NFSU2_TR(0x46d9d3);
if(r1(R+518)){{goto L46d9e6;}}
}
B46d9d5:L46d9d5:{c.instructions+=2;NFSU2_TR(0x46d9d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B46d9d8:{NFSU2_TR(0x46d9d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46d9e6;}}
}
B46d9da:L46d9da:{c.instructions+=2;NFSU2_TR(0x46d9da);
s4(0x82bb48,u32(0x5ull));
}
B46d9e4:{NFSU2_TR(0x46d9e4);
{goto L46da25;}
}
B46d9e6:L46d9e6:{c.instructions+=3;NFSU2_TR(0x46d9e6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46d9ec:{NFSU2_TR(0x46d9ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46d9ee:{NFSU2_TR(0x46d9ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46d9f3ull));
TAIL_STATIC(0x4690b0u,469);
}
B46d9f3:L46d9f3:{c.instructions+=3;NFSU2_TR(0x46d9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46d9f9:{NFSU2_TR(0x46d9f9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46d9fc:{NFSU2_TR(0x46d9fc);
if(r1(R+518)){{goto L46da1b;}}
}
B46d9fe:L46d9fe:{c.instructions+=2;NFSU2_TR(0x46d9fe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46da01:{NFSU2_TR(0x46da01);
if(r1(R+518)){{goto L46da0f;}}
}
B46da03:L46da03:{c.instructions+=2;NFSU2_TR(0x46da03);
s4(0x82bb48,u32(0x0ull));
}
B46da0d:{NFSU2_TR(0x46da0d);
{goto L46da25;}
}
B46da0f:L46da0f:{c.instructions+=2;NFSU2_TR(0x46da0f);
s4(0x82bb48,u32(0x2ull));
}
B46da19:{NFSU2_TR(0x46da19);
{goto L46da25;}
}
B46da1b:L46da1b:{c.instructions+=1;NFSU2_TR(0x46da1b);
s4(0x82bb48,u32(0x1ull));
}
B46da25:L46da25:{c.instructions+=4;NFSU2_TR(0x46da25);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B46da2a:{NFSU2_TR(0x46da2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46da30:{NFSU2_TR(0x46da30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da32:{NFSU2_TR(0x46da32);
if(r1(R+518)){{goto L46decb;}}
}
B46da38:L46da38:{c.instructions+=4;NFSU2_TR(0x46da38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46da3b:{NFSU2_TR(0x46da3b);
__builtin_memmove((R+0),(R+4),4);
}
B46da3d:{NFSU2_TR(0x46da3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da3f:{NFSU2_TR(0x46da3f);
if(r1(R+518)){{goto L46decb;}}
}
B46da45:L46da45:{c.instructions+=2;NFSU2_TR(0x46da45);
w4(R+8,u32(0x1ull));
}
B46da4a:{NFSU2_TR(0x46da4a);
__builtin_memmove((R+12),(R+12),4);
}
B46da50:L46da50:{c.instructions+=2;NFSU2_TR(0x46da50);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46da53:{NFSU2_TR(0x46da53);
if(r1(R+518)){{goto L46da62;}}
}
B46da55:L46da55:{c.instructions+=3;NFSU2_TR(0x46da55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46da58:{NFSU2_TR(0x46da58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da5a:{NFSU2_TR(0x46da5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46da50u);}goto L46da50;}}
}
B46da5c:L46da5c:{c.instructions+=4;NFSU2_TR(0x46da5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46da5d:{NFSU2_TR(0x46da5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46da5e:{NFSU2_TR(0x46da5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46da61:{NFSU2_TR(0x46da61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46da62:L46da62:{c.instructions+=2;NFSU2_TR(0x46da62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da64:{NFSU2_TR(0x46da64);
if(r1(R+518)){{goto L46decb;}}
}
B46da6a:L46da6a:{c.instructions+=3;NFSU2_TR(0x46da6a);
__builtin_memmove((R+0),(R+4),4);
}
B46da6c:{NFSU2_TR(0x46da6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da6e:{NFSU2_TR(0x46da6e);
if(r1(R+518)){{goto L46decb;}}
}
B46da74:L46da74:{c.instructions+=2;NFSU2_TR(0x46da74);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46da77:{NFSU2_TR(0x46da77);
if(r1(R+518)){{goto L46da86;}}
}
B46da79:L46da79:{c.instructions+=3;NFSU2_TR(0x46da79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46da7c:{NFSU2_TR(0x46da7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da7e:{NFSU2_TR(0x46da7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46da74u);}goto L46da74;}}
}
B46da80:L46da80:{c.instructions+=4;NFSU2_TR(0x46da80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46da81:{NFSU2_TR(0x46da81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46da82:{NFSU2_TR(0x46da82);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46da85:{NFSU2_TR(0x46da85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46da86:L46da86:{c.instructions+=2;NFSU2_TR(0x46da86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da88:{NFSU2_TR(0x46da88);
if(r1(R+518)){{goto L46decb;}}
}
B46da8e:L46da8e:{c.instructions+=3;NFSU2_TR(0x46da8e);
__builtin_memmove((R+0),(R+4),4);
}
B46da90:{NFSU2_TR(0x46da90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da92:{NFSU2_TR(0x46da92);
if(r1(R+518)){{goto L46daa0;}}
}
B46da94:L46da94:{c.instructions+=2;NFSU2_TR(0x46da94);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46da97:{NFSU2_TR(0x46da97);
if(r1(R+518)){{goto L46daa2;}}
}
B46da99:L46da99:{c.instructions+=3;NFSU2_TR(0x46da99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46da9c:{NFSU2_TR(0x46da9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46da9e:{NFSU2_TR(0x46da9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46da94u);}goto L46da94;}}
}
B46daa0:L46daa0:{c.instructions+=1;NFSU2_TR(0x46daa0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46daa2:L46daa2:{c.instructions+=3;NFSU2_TR(0x46daa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46daa5:{NFSU2_TR(0x46daa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46daa7:{NFSU2_TR(0x46daa7);
if(r1(R+518)){{goto L46decb;}}
}
B46daad:L46daad:{c.instructions+=4;NFSU2_TR(0x46daad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46daae:{NFSU2_TR(0x46daae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46dab1:{NFSU2_TR(0x46dab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46dab3:{NFSU2_TR(0x46dab3);
if(r1(R+518)){{goto L46dc37;}}
}
B46dab9:L46dab9:{c.instructions+=3;NFSU2_TR(0x46dab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46dabf:{NFSU2_TR(0x46dabf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46dac1:{NFSU2_TR(0x46dac1);
if(r1(R+518)){{goto L46dc37;}}
}
B46dac7:L46dac7:{c.instructions+=30;NFSU2_TR(0x46dac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46daca:{NFSU2_TR(0x46daca);
__builtin_memmove(gp(0x82bb44),(R+0),4);
}
B46dacf:{NFSU2_TR(0x46dacf);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dad2:{NFSU2_TR(0x46dad2);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dad5:{NFSU2_TR(0x46dad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46dad8:{NFSU2_TR(0x46dad8);
__builtin_memmove(gp(0x82bf00),(R+4),4);
}
B46dade:{NFSU2_TR(0x46dade);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46dae0:{NFSU2_TR(0x46dae0);
{u32 ea_=u32(u32(8568580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dae6:{NFSU2_TR(0x46dae6);
{u32 ea_=u32(u32(8568584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46daec:{NFSU2_TR(0x46daec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46daef:{NFSU2_TR(0x46daef);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46daf2:{NFSU2_TR(0x46daf2);
__builtin_memmove((R+4),(R+8),4);
}
B46daf4:{NFSU2_TR(0x46daf4);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46daf7:{NFSU2_TR(0x46daf7);
__builtin_memmove(gp(0x82c620),(R+8),4);
}
B46dafd:{NFSU2_TR(0x46dafd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46daff:{NFSU2_TR(0x46daff);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46db03:{NFSU2_TR(0x46db03);
{u32 ea_=u32(u32(8570404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46db09:{NFSU2_TR(0x46db09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46db0a:{NFSU2_TR(0x46db0a);
u8 U[4];
w4(U+0,u32(0x82be78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46db0f:{NFSU2_TR(0x46db0f);
{u32 ea_=u32(u32(8570408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46db15:{NFSU2_TR(0x46db15);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46db18:{NFSU2_TR(0x46db18);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46db1b:{NFSU2_TR(0x46db1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46db1e:{NFSU2_TR(0x46db1e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46db20:{NFSU2_TR(0x46db20);
__builtin_memmove(gp(0x82be90),(R+0),4);
}
B46db25:{NFSU2_TR(0x46db25);
{u32 ea_=u32(u32(8568468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46db2b:{NFSU2_TR(0x46db2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46db2f:{NFSU2_TR(0x46db2f);
{u32 ea_=u32(u32(8568472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46db35:{NFSU2_TR(0x46db35);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46db39:{NFSU2_TR(0x46db39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46db3eull));
TAIL_STATIC(0x43ce50u,43c);
}
B46db3e:L46db3e:{c.instructions+=29;NFSU2_TR(0x46db3e);
__builtin_memmove((R+0),gp(0x82be78),4);
}
B46db43:{NFSU2_TR(0x46db43);
__builtin_memmove((R+4),gp(0x82be7c),4);
}
B46db49:{NFSU2_TR(0x46db49);
__builtin_memmove((R+8),gp(0x82bf00),4);
}
B46db4f:{NFSU2_TR(0x46db4f);
__builtin_memmove(gp(0x82bed4),(R+0),4);
}
B46db54:{NFSU2_TR(0x46db54);
__builtin_memmove((R+0),gp(0x82bf04),4);
}
B46db59:{NFSU2_TR(0x46db59);
__builtin_memmove(gp(0x82bed8),(R+4),4);
}
B46db5f:{NFSU2_TR(0x46db5f);
__builtin_memmove(gp(0x82bf18),(R+8),4);
}
B46db65:{NFSU2_TR(0x46db65);
__builtin_memmove((R+4),(R+8),4);
}
B46db67:{NFSU2_TR(0x46db67);
__builtin_memmove((R+8),(R+0),4);
}
B46db69:{NFSU2_TR(0x46db69);
__builtin_memmove(gp(0x82bf1c),(R+0),4);
}
B46db6e:{NFSU2_TR(0x46db6e);
__builtin_memmove(gp(0x82bf28),(R+4),4);
}
B46db74:{NFSU2_TR(0x46db74);
__builtin_memmove(gp(0x82bf2c),(R+8),4);
}
B46db7a:{NFSU2_TR(0x46db7a);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46db7d:{NFSU2_TR(0x46db7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46db80:{NFSU2_TR(0x46db80);
{u32 ea_=u32(u32(8568552u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46db86:{NFSU2_TR(0x46db86);
__builtin_memmove(gp(0x82bee4),(R+0),4);
}
B46db8b:{NFSU2_TR(0x46db8b);
{u32 ea_=u32(u32(8568548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46db91:{NFSU2_TR(0x46db91);
{u32 ea_=u32(u32(8568576u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46db97:{NFSU2_TR(0x46db97);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46db9b:{NFSU2_TR(0x46db9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46db9c:{NFSU2_TR(0x46db9c);
u8 U[4];
w4(U+0,u32(0x82c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dba1:{NFSU2_TR(0x46dba1);
{u32 ea_=u32(u32(8570488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dba7:{NFSU2_TR(0x46dba7);
{u32 ea_=u32(u32(8568580u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dbad:{NFSU2_TR(0x46dbad);
{u32 ea_=u32(u32(8570492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dbb3:{NFSU2_TR(0x46dbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46dbb9:{NFSU2_TR(0x46dbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46dbbf:{NFSU2_TR(0x46dbbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46dbc3:{NFSU2_TR(0x46dbc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46dbc7:{NFSU2_TR(0x46dbc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dbccull));
TAIL_STATIC(0x43ce50u,43c);
}
B46dbcc:L46dbcc:{c.instructions+=6;NFSU2_TR(0x46dbcc);
__builtin_memmove((R+4),gp(0x82bb4c),4);
}
B46dbd2:{NFSU2_TR(0x46dbd2);
__builtin_memmove(gp(0x82bb54),(R+4),4);
}
B46dbd8:{NFSU2_TR(0x46dbd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46dbdb:{NFSU2_TR(0x46dbdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46dbde:{NFSU2_TR(0x46dbde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46dbe0:{NFSU2_TR(0x46dbe0);
if(r1(R+518)){{goto L46dbf8;}}
}
B46dbe2:L46dbe2:{c.instructions+=2;NFSU2_TR(0x46dbe2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46dbe5:{NFSU2_TR(0x46dbe5);
if(r1(R+518)){{goto L46dbec;}}
}
B46dbe7:L46dbe7:{c.instructions+=2;NFSU2_TR(0x46dbe7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46dbea:{NFSU2_TR(0x46dbea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46dbf8;}}
}
B46dbec:L46dbec:{c.instructions+=2;NFSU2_TR(0x46dbec);
s4(0x82bb4c,u32(0x3ull));
}
B46dbf6:{NFSU2_TR(0x46dbf6);
{goto L46dc37;}
}
B46dbf8:L46dbf8:{c.instructions+=3;NFSU2_TR(0x46dbf8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46dbfe:{NFSU2_TR(0x46dbfe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dc00:{NFSU2_TR(0x46dc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dc05ull));
TAIL_STATIC(0x4690b0u,469);
}
B46dc05:L46dc05:{c.instructions+=3;NFSU2_TR(0x46dc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46dc0b:{NFSU2_TR(0x46dc0b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46dc0e:{NFSU2_TR(0x46dc0e);
if(r1(R+518)){{goto L46dc2d;}}
}
B46dc10:L46dc10:{c.instructions+=2;NFSU2_TR(0x46dc10);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46dc13:{NFSU2_TR(0x46dc13);
if(r1(R+518)){{goto L46dc21;}}
}
B46dc15:L46dc15:{c.instructions+=2;NFSU2_TR(0x46dc15);
s4(0x82bb4c,u32(0x0ull));
}
B46dc1f:{NFSU2_TR(0x46dc1f);
{goto L46dc37;}
}
B46dc21:L46dc21:{c.instructions+=2;NFSU2_TR(0x46dc21);
s4(0x82bb4c,u32(0x2ull));
}
B46dc2b:{NFSU2_TR(0x46dc2b);
{goto L46dc37;}
}
B46dc2d:L46dc2d:{c.instructions+=1;NFSU2_TR(0x46dc2d);
s4(0x82bb4c,u32(0x1ull));
}
B46dc37:L46dc37:{c.instructions+=5;NFSU2_TR(0x46dc37);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
}
B46dc3a:{NFSU2_TR(0x46dc3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dc3b:{NFSU2_TR(0x46dc3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x60ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46dc3e:{NFSU2_TR(0x46dc3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dc3f:{NFSU2_TR(0x46dc3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dc44ull));
TAIL_STATIC(0x43ce10u,43c);
}
B46dc44:L46dc44:{c.instructions+=9;NFSU2_TR(0x46dc44);
{u32 ea_=u32(u32(8311084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dc4a:{NFSU2_TR(0x46dc4a);
{u32 ea_=u32(u32(8311088u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dc50:{NFSU2_TR(0x46dc50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46dc53:{NFSU2_TR(0x46dc53);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46dc55:{NFSU2_TR(0x46dc55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46dc56:{NFSU2_TR(0x46dc56);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46dc58:{NFSU2_TR(0x46dc58);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46dc5a:{NFSU2_TR(0x46dc5a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46dc5d:{NFSU2_TR(0x46dc5d);
if(r1(R+514)){{goto L46dec7;}}
}
B46dc63:L46dc63:{c.instructions+=45;NFSU2_TR(0x46dc63);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46dc65:{NFSU2_TR(0x46dc65);
__builtin_memmove((R+8),gp(0x82be70),4);
}
B46dc6b:{NFSU2_TR(0x46dc6b);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B46dc6d:{NFSU2_TR(0x46dc6d);
__builtin_memmove((R+0),gp(0x82be74),4);
}
B46dc72:{NFSU2_TR(0x46dc72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dc73:{NFSU2_TR(0x46dc73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dc74:{NFSU2_TR(0x46dc74);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dc78:{NFSU2_TR(0x46dc78);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46dc7a:{NFSU2_TR(0x46dc7a);
{u32 ea_=u32(u32(8568440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dc80:{NFSU2_TR(0x46dc80);
{u32 ea_=u32(u32(8568432u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dc86:{NFSU2_TR(0x46dc86);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dc8a:{NFSU2_TR(0x46dc8a);
{u32 ea_=u32(u32(8568444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dc90:{NFSU2_TR(0x46dc90);
{u32 ea_=u32(u32(8568436u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dc96:{NFSU2_TR(0x46dc96);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dc9a:{NFSU2_TR(0x46dc9a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dc9e:{NFSU2_TR(0x46dc9e);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46dca4:{NFSU2_TR(0x46dca4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dca8:{NFSU2_TR(0x46dca8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dcac:{NFSU2_TR(0x46dcac);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46dcb2:{NFSU2_TR(0x46dcb2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dcb6:{NFSU2_TR(0x46dcb6);
{u32 ea_=u32(u32(8568600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dcbc:{NFSU2_TR(0x46dcbc);
{u32 ea_=u32(u32(8568592u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dcc2:{NFSU2_TR(0x46dcc2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dcc6:{NFSU2_TR(0x46dcc6);
{u32 ea_=u32(u32(8568604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dccc:{NFSU2_TR(0x46dccc);
{u32 ea_=u32(u32(8568596u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dcd2:{NFSU2_TR(0x46dcd2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dcd6:{NFSU2_TR(0x46dcd6);
{u32 ea_=u32(u32(8568592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dcdc:{NFSU2_TR(0x46dcdc);
{u32 ea_=u32(u32(8568600u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dce2:{NFSU2_TR(0x46dce2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dce6:{NFSU2_TR(0x46dce6);
{u32 ea_=u32(u32(8568596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dcec:{NFSU2_TR(0x46dcec);
{u32 ea_=u32(u32(8568604u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dcf2:{NFSU2_TR(0x46dcf2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dcf6:{NFSU2_TR(0x46dcf6);
{u32 ea_=u32(u32(8570488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dcfc:{NFSU2_TR(0x46dcfc);
{u32 ea_=u32(u32(8570480u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dd02:{NFSU2_TR(0x46dd02);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd06:{NFSU2_TR(0x46dd06);
{u32 ea_=u32(u32(8570492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd0c:{NFSU2_TR(0x46dd0c);
{u32 ea_=u32(u32(8570484u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dd12:{NFSU2_TR(0x46dd12);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd16:{NFSU2_TR(0x46dd16);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd1a:{NFSU2_TR(0x46dd1a);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46dd20:{NFSU2_TR(0x46dd20);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd24:{NFSU2_TR(0x46dd24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd28:{NFSU2_TR(0x46dd28);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46dd2e:{NFSU2_TR(0x46dd2e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd32:{NFSU2_TR(0x46dd32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dd37ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B46dd37:L46dd37:{c.instructions+=5;NFSU2_TR(0x46dd37);
__builtin_memmove((R+4),gp(0x82be78),4);
}
B46dd3d:{NFSU2_TR(0x46dd3d);
__builtin_memmove((R+8),gp(0x82be7c),4);
}
B46dd43:{NFSU2_TR(0x46dd43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dd44:{NFSU2_TR(0x46dd44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dd45:{NFSU2_TR(0x46dd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dd4aull));
TAIL_STATIC(0x43e6d0u,43e);
}
B46dd4a:L46dd4a:{c.instructions+=88;NFSU2_TR(0x46dd4a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd50:{NFSU2_TR(0x46dd50);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46dd54:{NFSU2_TR(0x46dd54);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B46dd56:{NFSU2_TR(0x46dd56);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd5a:{NFSU2_TR(0x46dd5a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dd5c:{NFSU2_TR(0x46dd5c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd60:{NFSU2_TR(0x46dd60);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46dd64:{NFSU2_TR(0x46dd64);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46dd66:{NFSU2_TR(0x46dd66);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd6a:{NFSU2_TR(0x46dd6a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dd6c:{NFSU2_TR(0x46dd6c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd70:{NFSU2_TR(0x46dd70);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd74:{NFSU2_TR(0x46dd74);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dd76:{NFSU2_TR(0x46dd76);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd7a:{NFSU2_TR(0x46dd7a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46dd7c:{NFSU2_TR(0x46dd7c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46dd7e:{NFSU2_TR(0x46dd7e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd82:{NFSU2_TR(0x46dd82);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dd84:{NFSU2_TR(0x46dd84);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd88:{NFSU2_TR(0x46dd88);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd8c:{NFSU2_TR(0x46dd8c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dd8e:{NFSU2_TR(0x46dd8e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dd92:{NFSU2_TR(0x46dd92);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46dd94:{NFSU2_TR(0x46dd94);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46dd96:{NFSU2_TR(0x46dd96);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dd9a:{NFSU2_TR(0x46dd9a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dd9c:{NFSU2_TR(0x46dd9c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dda0:{NFSU2_TR(0x46dda0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dda4:{NFSU2_TR(0x46dda4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46dda6:{NFSU2_TR(0x46dda6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ddaa:{NFSU2_TR(0x46ddaa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46ddac:{NFSU2_TR(0x46ddac);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46ddae:{NFSU2_TR(0x46ddae);
__builtin_memmove((R+0),gp(0x82be70),4);
}
B46ddb3:{NFSU2_TR(0x46ddb3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ddb7:{NFSU2_TR(0x46ddb7);
__builtin_memmove((R+4),gp(0x82be74),4);
}
B46ddbd:{NFSU2_TR(0x46ddbd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46ddbf:{NFSU2_TR(0x46ddbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ddc0:{NFSU2_TR(0x46ddc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ddc1:{NFSU2_TR(0x46ddc1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ddc5:{NFSU2_TR(0x46ddc5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ddc9:{NFSU2_TR(0x46ddc9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46ddcb:{NFSU2_TR(0x46ddcb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ddcf:{NFSU2_TR(0x46ddcf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46ddd1:{NFSU2_TR(0x46ddd1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ddd5:{NFSU2_TR(0x46ddd5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B46ddd7:{NFSU2_TR(0x46ddd7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dddb:{NFSU2_TR(0x46dddb);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46dddf:{NFSU2_TR(0x46dddf);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B46dde1:{NFSU2_TR(0x46dde1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dde5:{NFSU2_TR(0x46dde5);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B46dde7:{NFSU2_TR(0x46dde7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ddeb:{NFSU2_TR(0x46ddeb);
{u32 ea_=u32(u32(8568524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46ddf1:{NFSU2_TR(0x46ddf1);
{u32 ea_=u32(u32(8568524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ddf7:{NFSU2_TR(0x46ddf7);
{u32 ea_=u32(u32(8568528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ddfd:{NFSU2_TR(0x46ddfd);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B46ddff:{NFSU2_TR(0x46ddff);
{u32 ea_=u32(u32(8568528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de05:{NFSU2_TR(0x46de05);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46de07:{NFSU2_TR(0x46de07);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de0b:{NFSU2_TR(0x46de0b);
{u32 ea_=u32(u32(8568532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de11:{NFSU2_TR(0x46de11);
{u32 ea_=u32(u32(8568532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de17:{NFSU2_TR(0x46de17);
{u32 ea_=u32(u32(8568536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de1d:{NFSU2_TR(0x46de1d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de21:{NFSU2_TR(0x46de21);
{u32 ea_=u32(u32(8568536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de27:{NFSU2_TR(0x46de27);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de2b:{NFSU2_TR(0x46de2b);
{u32 ea_=u32(u32(8568608u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de31:{NFSU2_TR(0x46de31);
{u32 ea_=u32(u32(8568608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de37:{NFSU2_TR(0x46de37);
{u32 ea_=u32(u32(8568612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de3d:{NFSU2_TR(0x46de3d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de41:{NFSU2_TR(0x46de41);
{u32 ea_=u32(u32(8568612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de47:{NFSU2_TR(0x46de47);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de4b:{NFSU2_TR(0x46de4b);
{u32 ea_=u32(u32(8568616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de51:{NFSU2_TR(0x46de51);
{u32 ea_=u32(u32(8568616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de57:{NFSU2_TR(0x46de57);
{u32 ea_=u32(u32(8568620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de5d:{NFSU2_TR(0x46de5d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de61:{NFSU2_TR(0x46de61);
{u32 ea_=u32(u32(8568620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de67:{NFSU2_TR(0x46de67);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de6b:{NFSU2_TR(0x46de6b);
{u32 ea_=u32(u32(8568628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de71:{NFSU2_TR(0x46de71);
{u32 ea_=u32(u32(8568628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de77:{NFSU2_TR(0x46de77);
{u32 ea_=u32(u32(8568632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de7d:{NFSU2_TR(0x46de7d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de81:{NFSU2_TR(0x46de81);
{u32 ea_=u32(u32(8568632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de87:{NFSU2_TR(0x46de87);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de8b:{NFSU2_TR(0x46de8b);
{u32 ea_=u32(u32(8568636u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46de91:{NFSU2_TR(0x46de91);
{u32 ea_=u32(u32(8568636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46de97:{NFSU2_TR(0x46de97);
{u32 ea_=u32(u32(8568640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46de9d:{NFSU2_TR(0x46de9d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46dea1:{NFSU2_TR(0x46dea1);
{u32 ea_=u32(u32(8568640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46dea7:{NFSU2_TR(0x46dea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46deacull));
TAIL_STATIC(0x43e6d0u,43e);
}
B46deac:L46deac:{c.instructions+=5;NFSU2_TR(0x46deac);
__builtin_memmove((R+8),gp(0x82be78),4);
}
B46deb2:{NFSU2_TR(0x46deb2);
__builtin_memmove((R+0),gp(0x82be7c),4);
}
B46deb7:{NFSU2_TR(0x46deb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46deb8:{NFSU2_TR(0x46deb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46deb9:{NFSU2_TR(0x46deb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46debeull));
TAIL_STATIC(0x43e6d0u,43e);
}
B46debe:L46debe:{c.instructions+=5;NFSU2_TR(0x46debe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B46dec1:{NFSU2_TR(0x46dec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46dec2:{NFSU2_TR(0x46dec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46dec3:{NFSU2_TR(0x46dec3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46dec6:{NFSU2_TR(0x46dec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46dec7:L46dec7:{c.instructions+=2;NFSU2_TR(0x46dec7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46dec9:{NFSU2_TR(0x46dec9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46decb:L46decb:{c.instructions+=4;NFSU2_TR(0x46decb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46decc:{NFSU2_TR(0x46decc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46decd:{NFSU2_TR(0x46decd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46ded0:{NFSU2_TR(0x46ded0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46dee0:L46dee0:{c.instructions+=3;NFSU2_TR(0x46dee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dee1:{NFSU2_TR(0x46dee1);
__builtin_memmove((R+24),(R+4),4);
}
B46dee3:{NFSU2_TR(0x46dee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dee8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B46dee8:L46dee8:{c.instructions+=4;NFSU2_TR(0x46dee8);
u8 U[4];
w4(U+0,u32(0x78aa04ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46deee:{NFSU2_TR(0x46deee);
__builtin_memmove((R+0),(R+24),4);
}
B46def0:{NFSU2_TR(0x46def0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46def1:{NFSU2_TR(0x46def1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46df00:L46df00:{c.instructions+=3;NFSU2_TR(0x46df00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df01:{NFSU2_TR(0x46df01);
__builtin_memmove((R+24),(R+4),4);
}
B46df03:{NFSU2_TR(0x46df03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df08ull));
TAIL_STATIC(0x45dd60u,45d);
}
B46df08:L46df08:{c.instructions+=4;NFSU2_TR(0x46df08);
u8 U[4];
w4(U+0,u32(0x78aa3cull));
s4(u32(r4(R+24)),r4(U+0));
}
B46df0e:{NFSU2_TR(0x46df0e);
__builtin_memmove((R+0),(R+24),4);
}
B46df10:{NFSU2_TR(0x46df10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46df11:{NFSU2_TR(0x46df11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46df20:L46df20:{c.instructions+=3;NFSU2_TR(0x46df20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df21:{NFSU2_TR(0x46df21);
__builtin_memmove((R+24),(R+4),4);
}
B46df23:{NFSU2_TR(0x46df23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df28ull));
TAIL_STATIC(0x47e650u,47e);
}
B46df28:L46df28:{c.instructions+=2;NFSU2_TR(0x46df28);
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
B46df2d:{NFSU2_TR(0x46df2d);
if(r1(R+518)){{goto L46df38;}}
}
B46df2f:L46df2f:{c.instructions+=2;NFSU2_TR(0x46df2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df30:{NFSU2_TR(0x46df30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df35ull));
TAIL_STATIC(0x440540u,440);
}
B46df35:L46df35:{c.instructions+=1;NFSU2_TR(0x46df35);
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
B46df38:L46df38:{c.instructions+=3;NFSU2_TR(0x46df38);
__builtin_memmove((R+0),(R+24),4);
}
B46df3a:{NFSU2_TR(0x46df3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46df3b:{NFSU2_TR(0x46df3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46df40:L46df40:{c.instructions+=3;NFSU2_TR(0x46df40);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46df45:{NFSU2_TR(0x46df45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df46:{NFSU2_TR(0x46df46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df4bull));
TAIL_STATIC(0x43e910u,43e);
}
B46df4b:L46df4b:{c.instructions+=3;NFSU2_TR(0x46df4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46df4e:{NFSU2_TR(0x46df4e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5d4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5d4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46df53:{NFSU2_TR(0x46df53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46df7d;}}
}
B46df55:L46df55:{c.instructions+=6;NFSU2_TR(0x46df55);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46df5b:{NFSU2_TR(0x46df5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46df5e:{NFSU2_TR(0x46df5e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46df64:{NFSU2_TR(0x46df64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df65:{NFSU2_TR(0x46df65);
u8 U[4];
w4(U+0,u32(0x1d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df6a:{NFSU2_TR(0x46df6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df6full));
TAIL_STATIC(0x440820u,440);
}
B46df6f:L46df6f:{c.instructions+=3;NFSU2_TR(0x46df6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46df72:{NFSU2_TR(0x46df72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46df74:{NFSU2_TR(0x46df74);
if(r1(R+518)){{goto L46df7d;}}
}
B46df76:L46df76:{c.instructions+=2;NFSU2_TR(0x46df76);
__builtin_memmove((R+4),(R+0),4);
}
B46df78:{NFSU2_TR(0x46df78);
TAIL_STATIC(0x45bb00u,45b);
}
B46df7d:L46df7d:{c.instructions+=2;NFSU2_TR(0x46df7d);
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
B46df7f:{NFSU2_TR(0x46df7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46df80:L46df80:{c.instructions+=3;NFSU2_TR(0x46df80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df81:{NFSU2_TR(0x46df81);
__builtin_memmove((R+24),(R+4),4);
}
B46df83:{NFSU2_TR(0x46df83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df88ull));
TAIL_STATIC(0x45bc70u,45b);
}
B46df88:L46df88:{c.instructions+=2;NFSU2_TR(0x46df88);
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
B46df8d:{NFSU2_TR(0x46df8d);
if(r1(R+518)){{goto L46df98;}}
}
B46df8f:L46df8f:{c.instructions+=2;NFSU2_TR(0x46df8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46df90:{NFSU2_TR(0x46df90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46df95ull));
TAIL_STATIC(0x440540u,440);
}
B46df95:L46df95:{c.instructions+=1;NFSU2_TR(0x46df95);
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
B46df98:L46df98:{c.instructions+=3;NFSU2_TR(0x46df98);
__builtin_memmove((R+0),(R+24),4);
}
B46df9a:{NFSU2_TR(0x46df9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46df9b:{NFSU2_TR(0x46df9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46dfa0:L46dfa0:{c.instructions+=7;NFSU2_TR(0x46dfa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfa1:{NFSU2_TR(0x46dfa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46dfa5:{NFSU2_TR(0x46dfa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46dfa7:{NFSU2_TR(0x46dfa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfa8:{NFSU2_TR(0x46dfa8);
__builtin_memmove((R+28),(R+4),4);
}
B46dfaa:{NFSU2_TR(0x46dfaa);
__builtin_memmove((R+4),(R+24),4);
}
B46dfac:{NFSU2_TR(0x46dfac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dfafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46dfaf:L46dfaf:{c.instructions+=5;NFSU2_TR(0x46dfaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46dfb1:{NFSU2_TR(0x46dfb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46dfb4:{NFSU2_TR(0x46dfb4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B46dfb9:{NFSU2_TR(0x46dfb9);
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
B46dfba:{NFSU2_TR(0x46dfba);
if(r1(R+518)){{goto L46dfd0;}}
}
B46dfbc:L46dfbc:{c.instructions+=3;NFSU2_TR(0x46dfbc);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfc1:{NFSU2_TR(0x46dfc1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfc3:{NFSU2_TR(0x46dfc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46dfc8ull));
TAIL_STATIC(0x4691c0u,469);
}
B46dfc8:L46dfc8:{c.instructions+=4;NFSU2_TR(0x46dfc8);
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
B46dfcb:{NFSU2_TR(0x46dfcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46dfcc:{NFSU2_TR(0x46dfcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46dfcd:{NFSU2_TR(0x46dfcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46dfd0:L46dfd0:{c.instructions+=4;NFSU2_TR(0x46dfd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46dfd6:{NFSU2_TR(0x46dfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46dfd7:{NFSU2_TR(0x46dfd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46dfd8:{NFSU2_TR(0x46dfd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46dfe0:L46dfe0:{c.instructions+=12;NFSU2_TR(0x46dfe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfe1:{NFSU2_TR(0x46dfe1);
__builtin_memmove((R+20),(R+16),4);
}
B46dfe3:{NFSU2_TR(0x46dfe3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46dfe6:{NFSU2_TR(0x46dfe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B46dfec:{NFSU2_TR(0x46dfec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfed:{NFSU2_TR(0x46dfed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46dfee:{NFSU2_TR(0x46dfee);
__builtin_memmove((R+24),(R+4),4);
}
B46dff0:{NFSU2_TR(0x46dff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46dff3:{NFSU2_TR(0x46dff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46dff6:{NFSU2_TR(0x46dff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46dffc:{NFSU2_TR(0x46dffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46dfff:{NFSU2_TR(0x46dfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
TAIL_STATIC(0x46e002u,46e);
}
XIT:NFSU2_TR_EXIT(0x46d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
