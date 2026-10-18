#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_4c3(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ea(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53f(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4eb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4eb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4eb(u8* __restrict R,Cpu& c);
u32 page_4eb(Cpu& c){return body_4eb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4eb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4eb000:goto L4eb000;
case 0x4eb003:c.instructions+=10;goto B4eb003;
case 0x4eb005:c.instructions+=9;goto B4eb005;
case 0x4eb00b:c.instructions+=8;goto B4eb00b;
case 0x4eb011:c.instructions+=7;goto B4eb011;
case 0x4eb013:c.instructions+=6;goto B4eb013;
case 0x4eb014:c.instructions+=5;goto B4eb014;
case 0x4eb019:c.instructions+=4;goto B4eb019;
case 0x4eb01c:c.instructions+=3;goto B4eb01c;
case 0x4eb01e:c.instructions+=2;goto B4eb01e;
case 0x4eb01f:c.instructions+=1;goto B4eb01f;
case 0x4eb024:goto L4eb024;
case 0x4eb027:c.instructions+=2;goto B4eb027;
case 0x4eb028:c.instructions+=1;goto B4eb028;
case 0x4eb02d:goto L4eb02d;
case 0x4eb033:c.instructions+=3;goto B4eb033;
case 0x4eb034:c.instructions+=2;goto B4eb034;
case 0x4eb035:c.instructions+=1;goto B4eb035;
case 0x4eb03a:goto L4eb03a;
case 0x4eb040:c.instructions+=4;goto B4eb040;
case 0x4eb041:c.instructions+=3;goto B4eb041;
case 0x4eb046:c.instructions+=2;goto B4eb046;
case 0x4eb047:c.instructions+=1;goto B4eb047;
case 0x4eb04c:goto L4eb04c;
case 0x4eb052:c.instructions+=5;goto B4eb052;
case 0x4eb058:c.instructions+=4;goto B4eb058;
case 0x4eb05b:c.instructions+=3;goto B4eb05b;
case 0x4eb060:c.instructions+=2;goto B4eb060;
case 0x4eb061:c.instructions+=1;goto B4eb061;
case 0x4eb066:goto L4eb066;
case 0x4eb067:c.instructions+=1;goto B4eb067;
case 0x4eb06c:goto L4eb06c;
case 0x4eb072:c.instructions+=6;goto B4eb072;
case 0x4eb075:c.instructions+=5;goto B4eb075;
case 0x4eb077:c.instructions+=4;goto B4eb077;
case 0x4eb07a:c.instructions+=3;goto B4eb07a;
case 0x4eb07f:c.instructions+=2;goto B4eb07f;
case 0x4eb080:c.instructions+=1;goto B4eb080;
case 0x4eb082:goto L4eb082;
case 0x4eb087:goto L4eb087;
case 0x4eb088:c.instructions+=1;goto B4eb088;
case 0x4eb08d:goto L4eb08d;
case 0x4eb08f:goto L4eb08f;
case 0x4eb094:goto L4eb094;
case 0x4eb095:c.instructions+=1;goto B4eb095;
case 0x4eb09a:goto L4eb09a;
case 0x4eb09f:c.instructions+=6;goto B4eb09f;
case 0x4eb0a2:c.instructions+=5;goto B4eb0a2;
case 0x4eb0a3:c.instructions+=4;goto B4eb0a3;
case 0x4eb0a5:c.instructions+=3;goto B4eb0a5;
case 0x4eb0ab:c.instructions+=2;goto B4eb0ab;
case 0x4eb0b0:c.instructions+=1;goto B4eb0b0;
case 0x4eb0b5:goto L4eb0b5;
case 0x4eb0bb:c.instructions+=23;goto B4eb0bb;
case 0x4eb0be:c.instructions+=22;goto B4eb0be;
case 0x4eb0c4:c.instructions+=21;goto B4eb0c4;
case 0x4eb0ca:c.instructions+=20;goto B4eb0ca;
case 0x4eb0d0:c.instructions+=19;goto B4eb0d0;
case 0x4eb0d6:c.instructions+=18;goto B4eb0d6;
case 0x4eb0dc:c.instructions+=17;goto B4eb0dc;
case 0x4eb0e2:c.instructions+=16;goto B4eb0e2;
case 0x4eb0e8:c.instructions+=15;goto B4eb0e8;
case 0x4eb0ee:c.instructions+=14;goto B4eb0ee;
case 0x4eb0f4:c.instructions+=13;goto B4eb0f4;
case 0x4eb0fa:c.instructions+=12;goto B4eb0fa;
case 0x4eb100:c.instructions+=11;goto B4eb100;
case 0x4eb106:c.instructions+=10;goto B4eb106;
case 0x4eb109:c.instructions+=9;goto B4eb109;
case 0x4eb10a:c.instructions+=8;goto B4eb10a;
case 0x4eb111:c.instructions+=7;goto B4eb111;
case 0x4eb113:c.instructions+=6;goto B4eb113;
case 0x4eb114:c.instructions+=5;goto B4eb114;
case 0x4eb115:c.instructions+=4;goto B4eb115;
case 0x4eb11c:c.instructions+=3;goto B4eb11c;
case 0x4eb11e:c.instructions+=2;goto B4eb11e;
case 0x4eb11f:c.instructions+=1;goto B4eb11f;
case 0x4eb130:goto L4eb130;
case 0x4eb131:c.instructions+=9;goto B4eb131;
case 0x4eb133:c.instructions+=8;goto B4eb133;
case 0x4eb135:c.instructions+=7;goto B4eb135;
case 0x4eb13a:c.instructions+=6;goto B4eb13a;
case 0x4eb140:c.instructions+=5;goto B4eb140;
case 0x4eb141:c.instructions+=4;goto B4eb141;
case 0x4eb148:c.instructions+=3;goto B4eb148;
case 0x4eb149:c.instructions+=2;goto B4eb149;
case 0x4eb14e:c.instructions+=1;goto B4eb14e;
case 0x4eb153:goto L4eb153;
case 0x4eb156:c.instructions+=4;goto B4eb156;
case 0x4eb159:c.instructions+=3;goto B4eb159;
case 0x4eb15b:c.instructions+=2;goto B4eb15b;
case 0x4eb162:c.instructions+=1;goto B4eb162;
case 0x4eb164:goto L4eb164;
case 0x4eb167:c.instructions+=7;goto B4eb167;
case 0x4eb169:c.instructions+=6;goto B4eb169;
case 0x4eb16b:c.instructions+=5;goto B4eb16b;
case 0x4eb170:c.instructions+=4;goto B4eb170;
case 0x4eb172:c.instructions+=3;goto B4eb172;
case 0x4eb173:c.instructions+=2;goto B4eb173;
case 0x4eb175:c.instructions+=1;goto B4eb175;
case 0x4eb17a:goto L4eb17a;
case 0x4eb17d:c.instructions+=4;goto B4eb17d;
case 0x4eb184:c.instructions+=3;goto B4eb184;
case 0x4eb186:c.instructions+=2;goto B4eb186;
case 0x4eb187:c.instructions+=1;goto B4eb187;
case 0x4eb188:goto L4eb188;
case 0x4eb18b:c.instructions+=5;goto B4eb18b;
case 0x4eb18d:c.instructions+=4;goto B4eb18d;
case 0x4eb194:c.instructions+=3;goto B4eb194;
case 0x4eb196:c.instructions+=2;goto B4eb196;
case 0x4eb197:c.instructions+=1;goto B4eb197;
case 0x4eb1a0:goto L4eb1a0;
case 0x4eb1a2:c.instructions+=7;goto B4eb1a2;
case 0x4eb1a7:c.instructions+=6;goto B4eb1a7;
case 0x4eb1ad:c.instructions+=5;goto B4eb1ad;
case 0x4eb1ae:c.instructions+=4;goto B4eb1ae;
case 0x4eb1b5:c.instructions+=3;goto B4eb1b5;
case 0x4eb1b6:c.instructions+=2;goto B4eb1b6;
case 0x4eb1bb:c.instructions+=1;goto B4eb1bb;
case 0x4eb1c0:goto L4eb1c0;
case 0x4eb1c3:c.instructions+=4;goto B4eb1c3;
case 0x4eb1c7:c.instructions+=3;goto B4eb1c7;
case 0x4eb1c9:c.instructions+=2;goto B4eb1c9;
case 0x4eb1d1:c.instructions+=1;goto B4eb1d1;
case 0x4eb1d3:goto L4eb1d3;
case 0x4eb1d7:c.instructions+=3;goto B4eb1d7;
case 0x4eb1d8:c.instructions+=2;goto B4eb1d8;
case 0x4eb1da:c.instructions+=1;goto B4eb1da;
case 0x4eb1df:goto L4eb1df;
case 0x4eb1e3:c.instructions+=3;goto B4eb1e3;
case 0x4eb1ea:c.instructions+=2;goto B4eb1ea;
case 0x4eb1ed:c.instructions+=1;goto B4eb1ed;
case 0x4eb1ee:goto L4eb1ee;
case 0x4eb1f2:c.instructions+=4;goto B4eb1f2;
case 0x4eb1f4:c.instructions+=3;goto B4eb1f4;
case 0x4eb1fb:c.instructions+=2;goto B4eb1fb;
case 0x4eb1fe:c.instructions+=1;goto B4eb1fe;
case 0x4eb200:goto L4eb200;
case 0x4eb201:c.instructions+=2;goto B4eb201;
case 0x4eb203:c.instructions+=1;goto B4eb203;
case 0x4eb208:goto L4eb208;
case 0x4eb20d:c.instructions+=1;goto B4eb20d;
case 0x4eb20f:goto L4eb20f;
case 0x4eb210:c.instructions+=1;goto B4eb210;
case 0x4eb215:goto L4eb215;
case 0x4eb218:goto L4eb218;
case 0x4eb21a:c.instructions+=2;goto B4eb21a;
case 0x4eb21b:c.instructions+=1;goto B4eb21b;
case 0x4eb220:goto L4eb220;
case 0x4eb224:c.instructions+=4;goto B4eb224;
case 0x4eb229:c.instructions+=3;goto B4eb229;
case 0x4eb22a:c.instructions+=2;goto B4eb22a;
case 0x4eb22c:c.instructions+=1;goto B4eb22c;
case 0x4eb232:goto L4eb232;
case 0x4eb238:goto L4eb238;
case 0x4eb23d:c.instructions+=1;goto B4eb23d;
case 0x4eb243:goto L4eb243;
case 0x4eb249:goto L4eb249;
case 0x4eb24e:c.instructions+=1;goto B4eb24e;
case 0x4eb250:goto L4eb250;
case 0x4eb255:c.instructions+=1;goto B4eb255;
case 0x4eb25b:goto L4eb25b;
case 0x4eb261:c.instructions+=2;goto B4eb261;
case 0x4eb263:c.instructions+=1;goto B4eb263;
case 0x4eb268:goto L4eb268;
case 0x4eb26f:c.instructions+=4;goto B4eb26f;
case 0x4eb272:c.instructions+=3;goto B4eb272;
case 0x4eb277:c.instructions+=2;goto B4eb277;
case 0x4eb278:c.instructions+=1;goto B4eb278;
case 0x4eb27d:goto L4eb27d;
case 0x4eb282:c.instructions+=1;goto B4eb282;
case 0x4eb287:goto L4eb287;
case 0x4eb28a:c.instructions+=2;goto B4eb28a;
case 0x4eb28c:c.instructions+=1;goto B4eb28c;
case 0x4eb292:goto L4eb292;
case 0x4eb297:c.instructions+=1;goto B4eb297;
case 0x4eb29c:goto L4eb29c;
case 0x4eb29f:c.instructions+=2;goto B4eb29f;
case 0x4eb2a0:c.instructions+=1;goto B4eb2a0;
case 0x4eb2a3:goto L4eb2a3;
case 0x4eb2aa:c.instructions+=1;goto B4eb2aa;
case 0x4eb2b0:goto L4eb2b0;
case 0x4eb2b3:c.instructions+=3;goto B4eb2b3;
case 0x4eb2b8:c.instructions+=2;goto B4eb2b8;
case 0x4eb2b9:c.instructions+=1;goto B4eb2b9;
case 0x4eb2be:goto L4eb2be;
case 0x4eb2c1:c.instructions+=4;goto B4eb2c1;
case 0x4eb2c3:c.instructions+=3;goto B4eb2c3;
case 0x4eb2c8:c.instructions+=2;goto B4eb2c8;
case 0x4eb2c9:c.instructions+=1;goto B4eb2c9;
case 0x4eb2ce:goto L4eb2ce;
case 0x4eb2d1:c.instructions+=2;goto B4eb2d1;
case 0x4eb2d2:c.instructions+=1;goto B4eb2d2;
case 0x4eb2d5:goto L4eb2d5;
case 0x4eb2d8:c.instructions+=3;goto B4eb2d8;
case 0x4eb2dd:c.instructions+=2;goto B4eb2dd;
case 0x4eb2de:c.instructions+=1;goto B4eb2de;
case 0x4eb2e3:goto L4eb2e3;
case 0x4eb2e4:c.instructions+=1;goto B4eb2e4;
case 0x4eb2e9:goto L4eb2e9;
case 0x4eb2ec:c.instructions+=2;goto B4eb2ec;
case 0x4eb2ed:c.instructions+=1;goto B4eb2ed;
case 0x4eb2f0:goto L4eb2f0;
case 0x4eb2f5:c.instructions+=1;goto B4eb2f5;
case 0x4eb2f7:goto L4eb2f7;
case 0x4eb2fc:c.instructions+=1;goto B4eb2fc;
case 0x4eb302:goto L4eb302;
case 0x4eb307:goto L4eb307;
case 0x4eb309:c.instructions+=1;goto B4eb309;
case 0x4eb30f:goto L4eb30f;
case 0x4eb310:c.instructions+=4;goto B4eb310;
case 0x4eb313:c.instructions+=3;goto B4eb313;
case 0x4eb318:c.instructions+=2;goto B4eb318;
case 0x4eb319:c.instructions+=1;goto B4eb319;
case 0x4eb31e:goto L4eb31e;
case 0x4eb321:c.instructions+=2;goto B4eb321;
case 0x4eb322:c.instructions+=1;goto B4eb322;
case 0x4eb325:goto L4eb325;
case 0x4eb32b:c.instructions+=2;goto B4eb32b;
case 0x4eb32d:c.instructions+=1;goto B4eb32d;
case 0x4eb332:goto L4eb332;
case 0x4eb339:c.instructions+=4;goto B4eb339;
case 0x4eb33c:c.instructions+=3;goto B4eb33c;
case 0x4eb341:c.instructions+=2;goto B4eb341;
case 0x4eb342:c.instructions+=1;goto B4eb342;
case 0x4eb347:goto L4eb347;
case 0x4eb34a:c.instructions+=2;goto B4eb34a;
case 0x4eb34b:c.instructions+=1;goto B4eb34b;
case 0x4eb34e:goto L4eb34e;
case 0x4eb353:c.instructions+=1;goto B4eb353;
case 0x4eb355:goto L4eb355;
case 0x4eb35b:goto L4eb35b;
case 0x4eb360:c.instructions+=1;goto B4eb360;
case 0x4eb366:goto L4eb366;
case 0x4eb36b:c.instructions+=1;goto B4eb36b;
case 0x4eb371:goto L4eb371;
case 0x4eb372:c.instructions+=2;goto B4eb372;
case 0x4eb374:c.instructions+=1;goto B4eb374;
case 0x4eb379:goto L4eb379;
case 0x4eb37a:c.instructions+=1;goto B4eb37a;
case 0x4eb37d:goto L4eb37d;
case 0x4eb382:c.instructions+=1;goto B4eb382;
case 0x4eb384:goto L4eb384;
case 0x4eb389:c.instructions+=1;goto B4eb389;
case 0x4eb38b:goto L4eb38b;
case 0x4eb38e:c.instructions+=3;goto B4eb38e;
case 0x4eb393:c.instructions+=2;goto B4eb393;
case 0x4eb394:c.instructions+=1;goto B4eb394;
case 0x4eb399:goto L4eb399;
case 0x4eb39c:c.instructions+=1;goto B4eb39c;
case 0x4eb3a1:goto L4eb3a1;
case 0x4eb3a2:c.instructions+=1;goto B4eb3a2;
case 0x4eb3a5:goto L4eb3a5;
case 0x4eb3a8:c.instructions+=1;goto B4eb3a8;
case 0x4eb3ad:goto L4eb3ad;
case 0x4eb3b3:c.instructions+=2;goto B4eb3b3;
case 0x4eb3b5:c.instructions+=1;goto B4eb3b5;
case 0x4eb3b7:goto L4eb3b7;
case 0x4eb3bc:c.instructions+=1;goto B4eb3bc;
case 0x4eb3be:goto L4eb3be;
case 0x4eb3c3:c.instructions+=8;goto B4eb3c3;
case 0x4eb3c9:c.instructions+=7;goto B4eb3c9;
case 0x4eb3cd:c.instructions+=6;goto B4eb3cd;
case 0x4eb3d1:c.instructions+=5;goto B4eb3d1;
case 0x4eb3d7:c.instructions+=4;goto B4eb3d7;
case 0x4eb3dd:c.instructions+=3;goto B4eb3dd;
case 0x4eb3df:c.instructions+=2;goto B4eb3df;
case 0x4eb3e2:c.instructions+=1;goto B4eb3e2;
case 0x4eb3e4:goto L4eb3e4;
case 0x4eb3e7:c.instructions+=1;goto B4eb3e7;
case 0x4eb3ec:goto L4eb3ec;
case 0x4eb3ee:c.instructions+=3;goto B4eb3ee;
case 0x4eb3f0:c.instructions+=2;goto B4eb3f0;
case 0x4eb3f1:c.instructions+=1;goto B4eb3f1;
case 0x4eb3f6:goto L4eb3f6;
case 0x4eb400:c.instructions+=1;goto B4eb400;
case 0x4eb403:goto L4eb403;
case 0x4eb404:c.instructions+=1;goto B4eb404;
case 0x4eb410:goto L4eb410;
case 0x4eb412:c.instructions+=12;goto B4eb412;
case 0x4eb417:c.instructions+=11;goto B4eb417;
case 0x4eb41d:c.instructions+=10;goto B4eb41d;
case 0x4eb41e:c.instructions+=9;goto B4eb41e;
case 0x4eb425:c.instructions+=8;goto B4eb425;
case 0x4eb426:c.instructions+=7;goto B4eb426;
case 0x4eb42a:c.instructions+=6;goto B4eb42a;
case 0x4eb42b:c.instructions+=5;goto B4eb42b;
case 0x4eb42c:c.instructions+=4;goto B4eb42c;
case 0x4eb42e:c.instructions+=3;goto B4eb42e;
case 0x4eb42f:c.instructions+=2;goto B4eb42f;
case 0x4eb433:c.instructions+=1;goto B4eb433;
case 0x4eb438:goto L4eb438;
case 0x4eb43e:c.instructions+=9;goto B4eb43e;
case 0x4eb448:c.instructions+=8;goto B4eb448;
case 0x4eb44e:c.instructions+=7;goto B4eb44e;
case 0x4eb454:c.instructions+=6;goto B4eb454;
case 0x4eb45a:c.instructions+=5;goto B4eb45a;
case 0x4eb45d:c.instructions+=4;goto B4eb45d;
case 0x4eb460:c.instructions+=3;goto B4eb460;
case 0x4eb461:c.instructions+=2;goto B4eb461;
case 0x4eb469:c.instructions+=1;goto B4eb469;
case 0x4eb46e:goto L4eb46e;
case 0x4eb46f:c.instructions+=2;goto B4eb46f;
case 0x4eb470:c.instructions+=1;goto B4eb470;
case 0x4eb475:goto L4eb475;
case 0x4eb478:c.instructions+=3;goto B4eb478;
case 0x4eb47a:c.instructions+=2;goto B4eb47a;
case 0x4eb484:c.instructions+=1;goto B4eb484;
case 0x4eb489:goto L4eb489;
case 0x4eb48e:goto L4eb48e;
case 0x4eb48f:c.instructions+=1;goto B4eb48f;
case 0x4eb494:goto L4eb494;
case 0x4eb497:c.instructions+=2;goto B4eb497;
case 0x4eb499:c.instructions+=1;goto B4eb499;
case 0x4eb49b:goto L4eb49b;
case 0x4eb49e:c.instructions+=4;goto B4eb49e;
case 0x4eb4a0:c.instructions+=3;goto B4eb4a0;
case 0x4eb4a5:c.instructions+=2;goto B4eb4a5;
case 0x4eb4a6:c.instructions+=1;goto B4eb4a6;
case 0x4eb4ab:goto L4eb4ab;
case 0x4eb4ac:c.instructions+=1;goto B4eb4ac;
case 0x4eb4b1:goto L4eb4b1;
case 0x4eb4b7:c.instructions+=2;goto B4eb4b7;
case 0x4eb4ba:c.instructions+=1;goto B4eb4ba;
case 0x4eb4bf:goto L4eb4bf;
case 0x4eb4c2:c.instructions+=5;goto B4eb4c2;
case 0x4eb4c5:c.instructions+=4;goto B4eb4c5;
case 0x4eb4c6:c.instructions+=3;goto B4eb4c6;
case 0x4eb4c7:c.instructions+=2;goto B4eb4c7;
case 0x4eb4cd:c.instructions+=1;goto B4eb4cd;
case 0x4eb4d2:goto L4eb4d2;
case 0x4eb4d6:c.instructions+=6;goto B4eb4d6;
case 0x4eb4d7:c.instructions+=5;goto B4eb4d7;
case 0x4eb4d9:c.instructions+=4;goto B4eb4d9;
case 0x4eb4da:c.instructions+=3;goto B4eb4da;
case 0x4eb4e1:c.instructions+=2;goto B4eb4e1;
case 0x4eb4e4:c.instructions+=1;goto B4eb4e4;
case 0x4eb4f0:goto L4eb4f0;
case 0x4eb4f1:c.instructions+=2;goto B4eb4f1;
case 0x4eb4f3:c.instructions+=1;goto B4eb4f3;
case 0x4eb4f8:goto L4eb4f8;
case 0x4eb4fd:c.instructions+=1;goto B4eb4fd;
case 0x4eb4ff:goto L4eb4ff;
case 0x4eb500:c.instructions+=1;goto B4eb500;
case 0x4eb505:goto L4eb505;
case 0x4eb508:goto L4eb508;
case 0x4eb50a:c.instructions+=2;goto B4eb50a;
case 0x4eb50b:c.instructions+=1;goto B4eb50b;
case 0x4eb510:goto L4eb510;
case 0x4eb512:c.instructions+=11;goto B4eb512;
case 0x4eb517:c.instructions+=10;goto B4eb517;
case 0x4eb51d:c.instructions+=9;goto B4eb51d;
case 0x4eb51e:c.instructions+=8;goto B4eb51e;
case 0x4eb525:c.instructions+=7;goto B4eb525;
case 0x4eb526:c.instructions+=6;goto B4eb526;
case 0x4eb527:c.instructions+=5;goto B4eb527;
case 0x4eb529:c.instructions+=4;goto B4eb529;
case 0x4eb52d:c.instructions+=3;goto B4eb52d;
case 0x4eb533:c.instructions+=2;goto B4eb533;
case 0x4eb53b:c.instructions+=1;goto B4eb53b;
case 0x4eb540:goto L4eb540;
case 0x4eb541:c.instructions+=1;goto B4eb541;
case 0x4eb546:goto L4eb546;
case 0x4eb549:c.instructions+=2;goto B4eb549;
case 0x4eb54b:c.instructions+=1;goto B4eb54b;
case 0x4eb54d:goto L4eb54d;
case 0x4eb552:goto L4eb552;
case 0x4eb553:c.instructions+=1;goto B4eb553;
case 0x4eb558:goto L4eb558;
case 0x4eb55b:goto L4eb55b;
case 0x4eb55d:c.instructions+=2;goto B4eb55d;
case 0x4eb565:c.instructions+=1;goto B4eb565;
case 0x4eb56a:goto L4eb56a;
case 0x4eb56e:c.instructions+=4;goto B4eb56e;
case 0x4eb56f:c.instructions+=3;goto B4eb56f;
case 0x4eb576:c.instructions+=2;goto B4eb576;
case 0x4eb579:c.instructions+=1;goto B4eb579;
case 0x4eb580:goto L4eb580;
case 0x4eb582:c.instructions+=11;goto B4eb582;
case 0x4eb587:c.instructions+=10;goto B4eb587;
case 0x4eb58d:c.instructions+=9;goto B4eb58d;
case 0x4eb58e:c.instructions+=8;goto B4eb58e;
case 0x4eb595:c.instructions+=7;goto B4eb595;
case 0x4eb596:c.instructions+=6;goto B4eb596;
case 0x4eb59a:c.instructions+=5;goto B4eb59a;
case 0x4eb59b:c.instructions+=4;goto B4eb59b;
case 0x4eb59d:c.instructions+=3;goto B4eb59d;
case 0x4eb59e:c.instructions+=2;goto B4eb59e;
case 0x4eb5a2:c.instructions+=1;goto B4eb5a2;
case 0x4eb5a7:goto L4eb5a7;
case 0x4eb5a9:c.instructions+=4;goto B4eb5a9;
case 0x4eb5b1:c.instructions+=3;goto B4eb5b1;
case 0x4eb5b7:c.instructions+=2;goto B4eb5b7;
case 0x4eb5be:c.instructions+=1;goto B4eb5be;
case 0x4eb5c3:goto L4eb5c3;
case 0x4eb5c8:goto L4eb5c8;
case 0x4eb5c9:c.instructions+=1;goto B4eb5c9;
case 0x4eb5ce:goto L4eb5ce;
case 0x4eb5d1:c.instructions+=2;goto B4eb5d1;
case 0x4eb5d3:c.instructions+=1;goto B4eb5d3;
case 0x4eb5d5:goto L4eb5d5;
case 0x4eb5d8:c.instructions+=4;goto B4eb5d8;
case 0x4eb5da:c.instructions+=3;goto B4eb5da;
case 0x4eb5df:c.instructions+=2;goto B4eb5df;
case 0x4eb5e0:c.instructions+=1;goto B4eb5e0;
case 0x4eb5e5:goto L4eb5e5;
case 0x4eb5e6:c.instructions+=1;goto B4eb5e6;
case 0x4eb5eb:goto L4eb5eb;
case 0x4eb5ee:goto L4eb5ee;
case 0x4eb5f4:c.instructions+=1;goto B4eb5f4;
case 0x4eb5f9:goto L4eb5f9;
case 0x4eb5fc:c.instructions+=5;goto B4eb5fc;
case 0x4eb5ff:c.instructions+=4;goto B4eb5ff;
case 0x4eb600:c.instructions+=3;goto B4eb600;
case 0x4eb606:c.instructions+=2;goto B4eb606;
case 0x4eb607:c.instructions+=1;goto B4eb607;
case 0x4eb60c:goto L4eb60c;
case 0x4eb610:c.instructions+=5;goto B4eb610;
case 0x4eb612:c.instructions+=4;goto B4eb612;
case 0x4eb613:c.instructions+=3;goto B4eb613;
case 0x4eb61a:c.instructions+=2;goto B4eb61a;
case 0x4eb61d:c.instructions+=1;goto B4eb61d;
case 0x4eb620:goto L4eb620;
case 0x4eb621:c.instructions+=2;goto B4eb621;
case 0x4eb623:c.instructions+=1;goto B4eb623;
case 0x4eb628:goto L4eb628;
case 0x4eb62d:c.instructions+=1;goto B4eb62d;
case 0x4eb62f:goto L4eb62f;
case 0x4eb630:c.instructions+=1;goto B4eb630;
case 0x4eb635:goto L4eb635;
case 0x4eb638:goto L4eb638;
case 0x4eb63a:c.instructions+=2;goto B4eb63a;
case 0x4eb63b:c.instructions+=1;goto B4eb63b;
case 0x4eb640:goto L4eb640;
case 0x4eb646:c.instructions+=1;goto B4eb646;
case 0x4eb650:goto L4eb650;
case 0x4eb652:c.instructions+=7;goto B4eb652;
case 0x4eb657:c.instructions+=6;goto B4eb657;
case 0x4eb65d:c.instructions+=5;goto B4eb65d;
case 0x4eb65e:c.instructions+=4;goto B4eb65e;
case 0x4eb665:c.instructions+=3;goto B4eb665;
case 0x4eb666:c.instructions+=2;goto B4eb666;
case 0x4eb66b:c.instructions+=1;goto B4eb66b;
case 0x4eb670:goto L4eb670;
case 0x4eb673:c.instructions+=4;goto B4eb673;
case 0x4eb677:c.instructions+=3;goto B4eb677;
case 0x4eb679:c.instructions+=2;goto B4eb679;
case 0x4eb681:c.instructions+=1;goto B4eb681;
case 0x4eb683:goto L4eb683;
case 0x4eb687:c.instructions+=3;goto B4eb687;
case 0x4eb688:c.instructions+=2;goto B4eb688;
case 0x4eb68a:c.instructions+=1;goto B4eb68a;
case 0x4eb68f:goto L4eb68f;
case 0x4eb693:c.instructions+=3;goto B4eb693;
case 0x4eb69a:c.instructions+=2;goto B4eb69a;
case 0x4eb69d:c.instructions+=1;goto B4eb69d;
case 0x4eb69e:goto L4eb69e;
case 0x4eb6a2:c.instructions+=4;goto B4eb6a2;
case 0x4eb6a4:c.instructions+=3;goto B4eb6a4;
case 0x4eb6ab:c.instructions+=2;goto B4eb6ab;
case 0x4eb6ae:c.instructions+=1;goto B4eb6ae;
case 0x4eb6b0:goto L4eb6b0;
case 0x4eb6b1:c.instructions+=2;goto B4eb6b1;
case 0x4eb6b3:c.instructions+=1;goto B4eb6b3;
case 0x4eb6b8:goto L4eb6b8;
case 0x4eb6bd:c.instructions+=1;goto B4eb6bd;
case 0x4eb6bf:goto L4eb6bf;
case 0x4eb6c0:c.instructions+=1;goto B4eb6c0;
case 0x4eb6c5:goto L4eb6c5;
case 0x4eb6c8:goto L4eb6c8;
case 0x4eb6ca:c.instructions+=2;goto B4eb6ca;
case 0x4eb6cb:c.instructions+=1;goto B4eb6cb;
case 0x4eb6d0:goto L4eb6d0;
case 0x4eb6d1:c.instructions+=2;goto B4eb6d1;
case 0x4eb6d3:c.instructions+=1;goto B4eb6d3;
case 0x4eb6d8:goto L4eb6d8;
case 0x4eb6dd:c.instructions+=1;goto B4eb6dd;
case 0x4eb6df:goto L4eb6df;
case 0x4eb6e0:c.instructions+=1;goto B4eb6e0;
case 0x4eb6e5:goto L4eb6e5;
case 0x4eb6e8:goto L4eb6e8;
case 0x4eb6ea:c.instructions+=2;goto B4eb6ea;
case 0x4eb6eb:c.instructions+=1;goto B4eb6eb;
case 0x4eb6f0:goto L4eb6f0;
case 0x4eb6f6:c.instructions+=1;goto B4eb6f6;
case 0x4eb700:goto L4eb700;
case 0x4eb702:c.instructions+=12;goto B4eb702;
case 0x4eb707:c.instructions+=11;goto B4eb707;
case 0x4eb70d:c.instructions+=10;goto B4eb70d;
case 0x4eb70e:c.instructions+=9;goto B4eb70e;
case 0x4eb715:c.instructions+=8;goto B4eb715;
case 0x4eb716:c.instructions+=7;goto B4eb716;
case 0x4eb71a:c.instructions+=6;goto B4eb71a;
case 0x4eb71b:c.instructions+=5;goto B4eb71b;
case 0x4eb71c:c.instructions+=4;goto B4eb71c;
case 0x4eb71e:c.instructions+=3;goto B4eb71e;
case 0x4eb71f:c.instructions+=2;goto B4eb71f;
case 0x4eb723:c.instructions+=1;goto B4eb723;
case 0x4eb728:goto L4eb728;
case 0x4eb72a:c.instructions+=3;goto B4eb72a;
case 0x4eb732:c.instructions+=2;goto B4eb732;
case 0x4eb738:c.instructions+=1;goto B4eb738;
case 0x4eb73d:goto L4eb73d;
case 0x4eb740:c.instructions+=2;goto B4eb740;
case 0x4eb745:c.instructions+=1;goto B4eb745;
case 0x4eb74a:goto L4eb74a;
case 0x4eb74b:c.instructions+=3;goto B4eb74b;
case 0x4eb750:c.instructions+=2;goto B4eb750;
case 0x4eb751:c.instructions+=1;goto B4eb751;
case 0x4eb756:goto L4eb756;
case 0x4eb75a:c.instructions+=7;goto B4eb75a;
case 0x4eb75d:c.instructions+=6;goto B4eb75d;
case 0x4eb75e:c.instructions+=5;goto B4eb75e;
case 0x4eb760:c.instructions+=4;goto B4eb760;
case 0x4eb761:c.instructions+=3;goto B4eb761;
case 0x4eb768:c.instructions+=2;goto B4eb768;
case 0x4eb76b:c.instructions+=1;goto B4eb76b;
case 0x4eb770:goto L4eb770;
case 0x4eb771:c.instructions+=2;goto B4eb771;
case 0x4eb773:c.instructions+=1;goto B4eb773;
case 0x4eb778:goto L4eb778;
case 0x4eb77d:c.instructions+=1;goto B4eb77d;
case 0x4eb77f:goto L4eb77f;
case 0x4eb780:c.instructions+=1;goto B4eb780;
case 0x4eb785:goto L4eb785;
case 0x4eb788:goto L4eb788;
case 0x4eb78a:c.instructions+=2;goto B4eb78a;
case 0x4eb78b:c.instructions+=1;goto B4eb78b;
case 0x4eb790:goto L4eb790;
case 0x4eb796:c.instructions+=1;goto B4eb796;
case 0x4eb7a0:goto L4eb7a0;
case 0x4eb7a2:c.instructions+=12;goto B4eb7a2;
case 0x4eb7a7:c.instructions+=11;goto B4eb7a7;
case 0x4eb7ad:c.instructions+=10;goto B4eb7ad;
case 0x4eb7ae:c.instructions+=9;goto B4eb7ae;
case 0x4eb7b5:c.instructions+=8;goto B4eb7b5;
case 0x4eb7b6:c.instructions+=7;goto B4eb7b6;
case 0x4eb7ba:c.instructions+=6;goto B4eb7ba;
case 0x4eb7bb:c.instructions+=5;goto B4eb7bb;
case 0x4eb7bc:c.instructions+=4;goto B4eb7bc;
case 0x4eb7be:c.instructions+=3;goto B4eb7be;
case 0x4eb7bf:c.instructions+=2;goto B4eb7bf;
case 0x4eb7c3:c.instructions+=1;goto B4eb7c3;
case 0x4eb7c8:goto L4eb7c8;
case 0x4eb7ca:c.instructions+=3;goto B4eb7ca;
case 0x4eb7d2:c.instructions+=2;goto B4eb7d2;
case 0x4eb7d8:c.instructions+=1;goto B4eb7d8;
case 0x4eb7dd:goto L4eb7dd;
case 0x4eb7e0:c.instructions+=2;goto B4eb7e0;
case 0x4eb7e5:c.instructions+=1;goto B4eb7e5;
case 0x4eb7ea:goto L4eb7ea;
case 0x4eb7eb:c.instructions+=3;goto B4eb7eb;
case 0x4eb7f0:c.instructions+=2;goto B4eb7f0;
case 0x4eb7f1:c.instructions+=1;goto B4eb7f1;
case 0x4eb7f6:goto L4eb7f6;
case 0x4eb7fa:c.instructions+=7;goto B4eb7fa;
case 0x4eb7fd:c.instructions+=6;goto B4eb7fd;
case 0x4eb7fe:c.instructions+=5;goto B4eb7fe;
case 0x4eb800:c.instructions+=4;goto B4eb800;
case 0x4eb801:c.instructions+=3;goto B4eb801;
case 0x4eb808:c.instructions+=2;goto B4eb808;
case 0x4eb80b:c.instructions+=1;goto B4eb80b;
case 0x4eb810:goto L4eb810;
case 0x4eb811:c.instructions+=2;goto B4eb811;
case 0x4eb813:c.instructions+=1;goto B4eb813;
case 0x4eb818:goto L4eb818;
case 0x4eb81d:c.instructions+=1;goto B4eb81d;
case 0x4eb81f:goto L4eb81f;
case 0x4eb820:c.instructions+=1;goto B4eb820;
case 0x4eb825:goto L4eb825;
case 0x4eb828:goto L4eb828;
case 0x4eb82a:c.instructions+=2;goto B4eb82a;
case 0x4eb82b:c.instructions+=1;goto B4eb82b;
case 0x4eb830:goto L4eb830;
case 0x4eb836:c.instructions+=1;goto B4eb836;
case 0x4eb840:goto L4eb840;
case 0x4eb845:c.instructions+=7;goto B4eb845;
case 0x4eb846:c.instructions+=6;goto B4eb846;
case 0x4eb847:c.instructions+=5;goto B4eb847;
case 0x4eb849:c.instructions+=4;goto B4eb849;
case 0x4eb84b:c.instructions+=3;goto B4eb84b;
case 0x4eb84c:c.instructions+=2;goto B4eb84c;
case 0x4eb84e:c.instructions+=1;goto B4eb84e;
case 0x4eb850:goto L4eb850;
case 0x4eb853:c.instructions+=6;goto B4eb853;
case 0x4eb858:c.instructions+=5;goto B4eb858;
case 0x4eb85b:c.instructions+=4;goto B4eb85b;
case 0x4eb861:c.instructions+=3;goto B4eb861;
case 0x4eb864:c.instructions+=2;goto B4eb864;
case 0x4eb86a:c.instructions+=1;goto B4eb86a;
case 0x4eb86d:goto L4eb86d;
case 0x4eb872:c.instructions+=5;goto B4eb872;
case 0x4eb875:c.instructions+=4;goto B4eb875;
case 0x4eb87a:c.instructions+=3;goto B4eb87a;
case 0x4eb87b:c.instructions+=2;goto B4eb87b;
case 0x4eb87e:c.instructions+=1;goto B4eb87e;
case 0x4eb883:goto L4eb883;
case 0x4eb886:c.instructions+=9;goto B4eb886;
case 0x4eb889:c.instructions+=8;goto B4eb889;
case 0x4eb88c:c.instructions+=7;goto B4eb88c;
case 0x4eb893:c.instructions+=6;goto B4eb893;
case 0x4eb897:c.instructions+=5;goto B4eb897;
case 0x4eb89a:c.instructions+=4;goto B4eb89a;
case 0x4eb89f:c.instructions+=3;goto B4eb89f;
case 0x4eb8a2:c.instructions+=2;goto B4eb8a2;
case 0x4eb8a4:c.instructions+=1;goto B4eb8a4;
case 0x4eb8a6:goto L4eb8a6;
case 0x4eb8a9:c.instructions+=3;goto B4eb8a9;
case 0x4eb8aa:c.instructions+=2;goto B4eb8aa;
case 0x4eb8ab:c.instructions+=1;goto B4eb8ab;
case 0x4eb8b0:goto L4eb8b0;
case 0x4eb8b1:c.instructions+=3;goto B4eb8b1;
case 0x4eb8b2:c.instructions+=2;goto B4eb8b2;
case 0x4eb8b3:c.instructions+=1;goto B4eb8b3;
case 0x4eb8b4:goto L4eb8b4;
case 0x4eb8b6:c.instructions+=2;goto B4eb8b6;
case 0x4eb8b8:c.instructions+=1;goto B4eb8b8;
case 0x4eb8bd:goto L4eb8bd;
case 0x4eb8be:c.instructions+=1;goto B4eb8be;
case 0x4eb8c3:goto L4eb8c3;
case 0x4eb8c6:c.instructions+=4;goto B4eb8c6;
case 0x4eb8c7:c.instructions+=3;goto B4eb8c7;
case 0x4eb8c8:c.instructions+=2;goto B4eb8c8;
case 0x4eb8c9:c.instructions+=1;goto B4eb8c9;
case 0x4eb8d0:goto L4eb8d0;
case 0x4eb8d1:c.instructions+=11;goto B4eb8d1;
case 0x4eb8d2:c.instructions+=10;goto B4eb8d2;
case 0x4eb8d4:c.instructions+=9;goto B4eb8d4;
case 0x4eb8d7:c.instructions+=8;goto B4eb8d7;
case 0x4eb8d8:c.instructions+=7;goto B4eb8d8;
case 0x4eb8d9:c.instructions+=6;goto B4eb8d9;
case 0x4eb8dc:c.instructions+=5;goto B4eb8dc;
case 0x4eb8e1:c.instructions+=4;goto B4eb8e1;
case 0x4eb8e3:c.instructions+=3;goto B4eb8e3;
case 0x4eb8e4:c.instructions+=2;goto B4eb8e4;
case 0x4eb8e7:c.instructions+=1;goto B4eb8e7;
case 0x4eb8ec:goto L4eb8ec;
case 0x4eb8ef:c.instructions+=9;goto B4eb8ef;
case 0x4eb8f2:c.instructions+=8;goto B4eb8f2;
case 0x4eb8f5:c.instructions+=7;goto B4eb8f5;
case 0x4eb8fc:c.instructions+=6;goto B4eb8fc;
case 0x4eb900:c.instructions+=5;goto B4eb900;
case 0x4eb903:c.instructions+=4;goto B4eb903;
case 0x4eb908:c.instructions+=3;goto B4eb908;
case 0x4eb90b:c.instructions+=2;goto B4eb90b;
case 0x4eb90d:c.instructions+=1;goto B4eb90d;
case 0x4eb90f:goto L4eb90f;
case 0x4eb912:c.instructions+=3;goto B4eb912;
case 0x4eb913:c.instructions+=2;goto B4eb913;
case 0x4eb914:c.instructions+=1;goto B4eb914;
case 0x4eb919:goto L4eb919;
case 0x4eb91a:c.instructions+=3;goto B4eb91a;
case 0x4eb91b:c.instructions+=2;goto B4eb91b;
case 0x4eb91c:c.instructions+=1;goto B4eb91c;
case 0x4eb91d:goto L4eb91d;
case 0x4eb91f:c.instructions+=2;goto B4eb91f;
case 0x4eb921:c.instructions+=1;goto B4eb921;
case 0x4eb926:goto L4eb926;
case 0x4eb927:c.instructions+=1;goto B4eb927;
case 0x4eb92c:goto L4eb92c;
case 0x4eb92f:c.instructions+=4;goto B4eb92f;
case 0x4eb930:c.instructions+=3;goto B4eb930;
case 0x4eb931:c.instructions+=2;goto B4eb931;
case 0x4eb932:c.instructions+=1;goto B4eb932;
case 0x4eb940:goto L4eb940;
case 0x4eb942:c.instructions+=12;goto B4eb942;
case 0x4eb947:c.instructions+=11;goto B4eb947;
case 0x4eb94d:c.instructions+=10;goto B4eb94d;
case 0x4eb94e:c.instructions+=9;goto B4eb94e;
case 0x4eb955:c.instructions+=8;goto B4eb955;
case 0x4eb956:c.instructions+=7;goto B4eb956;
case 0x4eb957:c.instructions+=6;goto B4eb957;
case 0x4eb959:c.instructions+=5;goto B4eb959;
case 0x4eb95d:c.instructions+=4;goto B4eb95d;
case 0x4eb95f:c.instructions+=3;goto B4eb95f;
case 0x4eb960:c.instructions+=2;goto B4eb960;
case 0x4eb968:c.instructions+=1;goto B4eb968;
case 0x4eb96d:goto L4eb96d;
case 0x4eb974:c.instructions+=6;goto B4eb974;
case 0x4eb97b:c.instructions+=5;goto B4eb97b;
case 0x4eb97e:c.instructions+=4;goto B4eb97e;
case 0x4eb981:c.instructions+=3;goto B4eb981;
case 0x4eb984:c.instructions+=2;goto B4eb984;
case 0x4eb986:c.instructions+=1;goto B4eb986;
case 0x4eb988:goto L4eb988;
case 0x4eb98a:c.instructions+=3;goto B4eb98a;
case 0x4eb98d:c.instructions+=2;goto B4eb98d;
case 0x4eb98e:c.instructions+=1;goto B4eb98e;
case 0x4eb993:goto L4eb993;
case 0x4eb995:c.instructions+=6;goto B4eb995;
case 0x4eb997:c.instructions+=5;goto B4eb997;
case 0x4eb99a:c.instructions+=4;goto B4eb99a;
case 0x4eb99c:c.instructions+=3;goto B4eb99c;
case 0x4eb99d:c.instructions+=2;goto B4eb99d;
case 0x4eb9a0:c.instructions+=1;goto B4eb9a0;
case 0x4eb9a5:goto L4eb9a5;
case 0x4eb9a7:c.instructions+=3;goto B4eb9a7;
case 0x4eb9aa:c.instructions+=2;goto B4eb9aa;
case 0x4eb9ac:c.instructions+=1;goto B4eb9ac;
case 0x4eb9ae:goto L4eb9ae;
case 0x4eb9b0:c.instructions+=3;goto B4eb9b0;
case 0x4eb9b2:c.instructions+=2;goto B4eb9b2;
case 0x4eb9ba:c.instructions+=1;goto B4eb9ba;
case 0x4eb9bc:goto L4eb9bc;
case 0x4eb9c0:goto L4eb9c0;
case 0x4eb9c2:c.instructions+=5;goto B4eb9c2;
case 0x4eb9c5:c.instructions+=4;goto B4eb9c5;
case 0x4eb9c7:c.instructions+=3;goto B4eb9c7;
case 0x4eb9c8:c.instructions+=2;goto B4eb9c8;
case 0x4eb9cb:c.instructions+=1;goto B4eb9cb;
case 0x4eb9d0:goto L4eb9d0;
case 0x4eb9d2:c.instructions+=3;goto B4eb9d2;
case 0x4eb9d5:c.instructions+=2;goto B4eb9d5;
case 0x4eb9d7:c.instructions+=1;goto B4eb9d7;
case 0x4eb9d9:goto L4eb9d9;
case 0x4eb9dd:c.instructions+=4;goto B4eb9dd;
case 0x4eb9de:c.instructions+=3;goto B4eb9de;
case 0x4eb9e5:c.instructions+=2;goto B4eb9e5;
case 0x4eb9e8:c.instructions+=1;goto B4eb9e8;
case 0x4eb9f0:goto L4eb9f0;
case 0x4eb9f1:c.instructions+=6;goto B4eb9f1;
case 0x4eb9f2:c.instructions+=5;goto B4eb9f2;
case 0x4eb9f4:c.instructions+=4;goto B4eb9f4;
case 0x4eb9f7:c.instructions+=3;goto B4eb9f7;
case 0x4eb9f9:c.instructions+=2;goto B4eb9f9;
case 0x4eb9fc:c.instructions+=1;goto B4eb9fc;
case 0x4eb9fe:goto L4eb9fe;
case 0x4eba03:c.instructions+=1;goto B4eba03;
case 0x4eba05:goto L4eba05;
case 0x4eba09:c.instructions+=3;goto B4eba09;
case 0x4eba0a:c.instructions+=2;goto B4eba0a;
case 0x4eba0c:c.instructions+=1;goto B4eba0c;
case 0x4eba11:goto L4eba11;
case 0x4eba13:c.instructions+=1;goto B4eba13;
case 0x4eba15:goto L4eba15;
case 0x4eba18:c.instructions+=2;goto B4eba18;
case 0x4eba1a:c.instructions+=1;goto B4eba1a;
case 0x4eba1c:goto L4eba1c;
case 0x4eba1f:c.instructions+=6;goto B4eba1f;
case 0x4eba21:c.instructions+=5;goto B4eba21;
case 0x4eba22:c.instructions+=4;goto B4eba22;
case 0x4eba25:c.instructions+=3;goto B4eba25;
case 0x4eba26:c.instructions+=2;goto B4eba26;
case 0x4eba27:c.instructions+=1;goto B4eba27;
case 0x4eba2c:goto L4eba2c;
case 0x4eba2f:c.instructions+=3;goto B4eba2f;
case 0x4eba35:c.instructions+=2;goto B4eba35;
case 0x4eba3b:c.instructions+=1;goto B4eba3b;
case 0x4eba40:goto L4eba40;
case 0x4eba41:c.instructions+=2;goto B4eba41;
case 0x4eba43:c.instructions+=1;goto B4eba43;
case 0x4eba48:goto L4eba48;
case 0x4eba4b:c.instructions+=6;goto B4eba4b;
case 0x4eba4d:c.instructions+=5;goto B4eba4d;
case 0x4eba50:c.instructions+=4;goto B4eba50;
case 0x4eba52:c.instructions+=3;goto B4eba52;
case 0x4eba53:c.instructions+=2;goto B4eba53;
case 0x4eba56:c.instructions+=1;goto B4eba56;
case 0x4eba5b:goto L4eba5b;
case 0x4eba5e:c.instructions+=4;goto B4eba5e;
case 0x4eba61:c.instructions+=3;goto B4eba61;
case 0x4eba62:c.instructions+=2;goto B4eba62;
case 0x4eba65:c.instructions+=1;goto B4eba65;
case 0x4eba66:goto L4eba66;
case 0x4eba68:c.instructions+=2;goto B4eba68;
case 0x4eba6a:c.instructions+=1;goto B4eba6a;
case 0x4eba6c:goto L4eba6c;
case 0x4eba73:c.instructions+=1;goto B4eba73;
case 0x4eba75:goto L4eba75;
case 0x4eba7b:c.instructions+=3;goto B4eba7b;
case 0x4eba7d:c.instructions+=2;goto B4eba7d;
case 0x4eba80:c.instructions+=1;goto B4eba80;
case 0x4eba82:goto L4eba82;
case 0x4eba85:c.instructions+=1;goto B4eba85;
case 0x4eba87:goto L4eba87;
case 0x4eba8a:c.instructions+=1;goto B4eba8a;
case 0x4eba8c:goto L4eba8c;
case 0x4eba8f:c.instructions+=2;goto B4eba8f;
case 0x4eba91:c.instructions+=1;goto B4eba91;
case 0x4eba93:goto L4eba93;
case 0x4eba95:c.instructions+=2;goto B4eba95;
case 0x4eba97:c.instructions+=1;goto B4eba97;
case 0x4eba99:goto L4eba99;
case 0x4eba9f:c.instructions+=1;goto B4eba9f;
case 0x4ebaa1:goto L4ebaa1;
case 0x4ebaa2:c.instructions+=1;goto B4ebaa2;
case 0x4ebaa7:goto L4ebaa7;
case 0x4ebaaa:c.instructions+=3;goto B4ebaaa;
case 0x4ebaab:c.instructions+=2;goto B4ebaab;
case 0x4ebaac:c.instructions+=1;goto B4ebaac;
case 0x4ebaaf:goto L4ebaaf;
case 0x4ebab0:c.instructions+=1;goto B4ebab0;
case 0x4ebab5:goto L4ebab5;
case 0x4ebab8:c.instructions+=3;goto B4ebab8;
case 0x4ebab9:c.instructions+=2;goto B4ebab9;
case 0x4ebaba:c.instructions+=1;goto B4ebaba;
case 0x4ebac0:goto L4ebac0;
case 0x4ebac1:c.instructions+=6;goto B4ebac1;
case 0x4ebac2:c.instructions+=5;goto B4ebac2;
case 0x4ebac4:c.instructions+=4;goto B4ebac4;
case 0x4ebac7:c.instructions+=3;goto B4ebac7;
case 0x4ebaca:c.instructions+=2;goto B4ebaca;
case 0x4ebacb:c.instructions+=1;goto B4ebacb;
case 0x4ebacd:goto L4ebacd;
case 0x4ebacf:c.instructions+=3;goto B4ebacf;
case 0x4ebad1:c.instructions+=2;goto B4ebad1;
case 0x4ebad8:c.instructions+=1;goto B4ebad8;
case 0x4ebadd:goto L4ebadd;
case 0x4ebae1:c.instructions+=2;goto B4ebae1;
case 0x4ebae2:c.instructions+=1;goto B4ebae2;
case 0x4ebae7:goto L4ebae7;
case 0x4ebae8:c.instructions+=2;goto B4ebae8;
case 0x4ebae9:c.instructions+=1;goto B4ebae9;
case 0x4ebaee:goto L4ebaee;
case 0x4ebaf0:c.instructions+=3;goto B4ebaf0;
case 0x4ebaf1:c.instructions+=2;goto B4ebaf1;
case 0x4ebaf2:c.instructions+=1;goto B4ebaf2;
case 0x4ebaf7:goto L4ebaf7;
case 0x4ebafa:c.instructions+=3;goto B4ebafa;
case 0x4ebafb:c.instructions+=2;goto B4ebafb;
case 0x4ebafe:c.instructions+=1;goto B4ebafe;
case 0x4ebb03:goto L4ebb03;
case 0x4ebb06:c.instructions+=6;goto B4ebb06;
case 0x4ebb07:c.instructions+=5;goto B4ebb07;
case 0x4ebb08:c.instructions+=4;goto B4ebb08;
case 0x4ebb0b:c.instructions+=3;goto B4ebb0b;
case 0x4ebb0c:c.instructions+=2;goto B4ebb0c;
case 0x4ebb0d:c.instructions+=1;goto B4ebb0d;
case 0x4ebb10:goto L4ebb10;
case 0x4ebb13:c.instructions+=12;goto B4ebb13;
case 0x4ebb14:c.instructions+=11;goto B4ebb14;
case 0x4ebb15:c.instructions+=10;goto B4ebb15;
case 0x4ebb17:c.instructions+=9;goto B4ebb17;
case 0x4ebb1a:c.instructions+=8;goto B4ebb1a;
case 0x4ebb1d:c.instructions+=7;goto B4ebb1d;
case 0x4ebb20:c.instructions+=6;goto B4ebb20;
case 0x4ebb21:c.instructions+=5;goto B4ebb21;
case 0x4ebb24:c.instructions+=4;goto B4ebb24;
case 0x4ebb26:c.instructions+=3;goto B4ebb26;
case 0x4ebb28:c.instructions+=2;goto B4ebb28;
case 0x4ebb2a:c.instructions+=1;goto B4ebb2a;
case 0x4ebb30:goto L4ebb30;
case 0x4ebb35:c.instructions+=5;goto B4ebb35;
case 0x4ebb37:c.instructions+=4;goto B4ebb37;
case 0x4ebb38:c.instructions+=3;goto B4ebb38;
case 0x4ebb3c:c.instructions+=2;goto B4ebb3c;
case 0x4ebb3f:c.instructions+=1;goto B4ebb3f;
case 0x4ebb41:goto L4ebb41;
case 0x4ebb46:c.instructions+=2;goto B4ebb46;
case 0x4ebb48:c.instructions+=1;goto B4ebb48;
case 0x4ebb4e:goto L4ebb4e;
case 0x4ebb50:c.instructions+=2;goto B4ebb50;
case 0x4ebb55:c.instructions+=1;goto B4ebb55;
case 0x4ebb5a:goto L4ebb5a;
case 0x4ebb5d:c.instructions+=5;goto B4ebb5d;
case 0x4ebb60:c.instructions+=4;goto B4ebb60;
case 0x4ebb61:c.instructions+=3;goto B4ebb61;
case 0x4ebb66:c.instructions+=2;goto B4ebb66;
case 0x4ebb67:c.instructions+=1;goto B4ebb67;
case 0x4ebb6c:goto L4ebb6c;
case 0x4ebb70:c.instructions+=2;goto B4ebb70;
case 0x4ebb71:c.instructions+=1;goto B4ebb71;
case 0x4ebb76:goto L4ebb76;
case 0x4ebb78:c.instructions+=2;goto B4ebb78;
case 0x4ebb79:c.instructions+=1;goto B4ebb79;
case 0x4ebb7e:goto L4ebb7e;
case 0x4ebb7f:c.instructions+=4;goto B4ebb7f;
case 0x4ebb82:c.instructions+=3;goto B4ebb82;
case 0x4ebb87:c.instructions+=2;goto B4ebb87;
case 0x4ebb88:c.instructions+=1;goto B4ebb88;
case 0x4ebb8d:goto L4ebb8d;
case 0x4ebb90:c.instructions+=4;goto B4ebb90;
case 0x4ebb91:c.instructions+=3;goto B4ebb91;
case 0x4ebb96:c.instructions+=2;goto B4ebb96;
case 0x4ebb97:c.instructions+=1;goto B4ebb97;
case 0x4ebb9c:goto L4ebb9c;
case 0x4ebb9f:c.instructions+=2;goto B4ebb9f;
case 0x4ebba4:c.instructions+=1;goto B4ebba4;
case 0x4ebba9:goto L4ebba9;
case 0x4ebbab:c.instructions+=1;goto B4ebbab;
case 0x4ebbb1:goto L4ebbb1;
case 0x4ebbb7:c.instructions+=5;goto B4ebbb7;
case 0x4ebbba:c.instructions+=4;goto B4ebbba;
case 0x4ebbc0:c.instructions+=3;goto B4ebbc0;
case 0x4ebbc2:c.instructions+=2;goto B4ebbc2;
case 0x4ebbc5:c.instructions+=1;goto B4ebbc5;
case 0x4ebbcb:goto L4ebbcb;
case 0x4ebbd1:c.instructions+=10;goto B4ebbd1;
case 0x4ebbd4:c.instructions+=9;goto B4ebbd4;
case 0x4ebbd7:c.instructions+=8;goto B4ebbd7;
case 0x4ebbd9:c.instructions+=7;goto B4ebbd9;
case 0x4ebbdd:c.instructions+=6;goto B4ebbdd;
case 0x4ebbe1:c.instructions+=5;goto B4ebbe1;
case 0x4ebbe2:c.instructions+=4;goto B4ebbe2;
case 0x4ebbe8:c.instructions+=3;goto B4ebbe8;
case 0x4ebbeb:c.instructions+=2;goto B4ebbeb;
case 0x4ebbef:c.instructions+=1;goto B4ebbef;
case 0x4ebbf4:goto L4ebbf4;
case 0x4ebbf8:c.instructions+=4;goto B4ebbf8;
case 0x4ebbfb:c.instructions+=3;goto B4ebbfb;
case 0x4ebc01:c.instructions+=2;goto B4ebc01;
case 0x4ebc07:c.instructions+=1;goto B4ebc07;
case 0x4ebc0c:goto L4ebc0c;
case 0x4ebc0e:c.instructions+=5;goto B4ebc0e;
case 0x4ebc12:c.instructions+=4;goto B4ebc12;
case 0x4ebc13:c.instructions+=3;goto B4ebc13;
case 0x4ebc17:c.instructions+=2;goto B4ebc17;
case 0x4ebc1b:c.instructions+=1;goto B4ebc1b;
case 0x4ebc20:goto L4ebc20;
case 0x4ebc23:c.instructions+=5;goto B4ebc23;
case 0x4ebc27:c.instructions+=4;goto B4ebc27;
case 0x4ebc28:c.instructions+=3;goto B4ebc28;
case 0x4ebc2d:c.instructions+=2;goto B4ebc2d;
case 0x4ebc2e:c.instructions+=1;goto B4ebc2e;
case 0x4ebc33:goto L4ebc33;
case 0x4ebc37:c.instructions+=2;goto B4ebc37;
case 0x4ebc3a:c.instructions+=1;goto B4ebc3a;
case 0x4ebc3f:goto L4ebc3f;
case 0x4ebc43:c.instructions+=2;goto B4ebc43;
case 0x4ebc48:c.instructions+=1;goto B4ebc48;
case 0x4ebc4a:goto L4ebc4a;
case 0x4ebc4b:c.instructions+=2;goto B4ebc4b;
case 0x4ebc4e:c.instructions+=1;goto B4ebc4e;
case 0x4ebc4f:goto L4ebc4f;
case 0x4ebc55:goto L4ebc55;
case 0x4ebc59:c.instructions+=6;goto B4ebc59;
case 0x4ebc5d:c.instructions+=5;goto B4ebc5d;
case 0x4ebc5f:c.instructions+=4;goto B4ebc5f;
case 0x4ebc65:c.instructions+=3;goto B4ebc65;
case 0x4ebc67:c.instructions+=2;goto B4ebc67;
case 0x4ebc6a:c.instructions+=1;goto B4ebc6a;
case 0x4ebc70:goto L4ebc70;
case 0x4ebc75:c.instructions+=1;goto B4ebc75;
case 0x4ebc7a:goto L4ebc7a;
case 0x4ebc7d:c.instructions+=3;goto B4ebc7d;
case 0x4ebc80:c.instructions+=2;goto B4ebc80;
case 0x4ebc81:c.instructions+=1;goto B4ebc81;
case 0x4ebc86:goto L4ebc86;
case 0x4ebc8b:goto L4ebc8b;
case 0x4ebc8e:c.instructions+=2;goto B4ebc8e;
case 0x4ebc8f:c.instructions+=1;goto B4ebc8f;
case 0x4ebc94:goto L4ebc94;
case 0x4ebc97:c.instructions+=1;goto B4ebc97;
case 0x4ebc9c:goto L4ebc9c;
case 0x4ebc9f:c.instructions+=2;goto B4ebc9f;
case 0x4ebca0:c.instructions+=1;goto B4ebca0;
case 0x4ebca5:goto L4ebca5;
case 0x4ebca8:c.instructions+=3;goto B4ebca8;
case 0x4ebcab:c.instructions+=2;goto B4ebcab;
case 0x4ebcad:c.instructions+=1;goto B4ebcad;
case 0x4ebcb3:goto L4ebcb3;
case 0x4ebcb8:c.instructions+=3;goto B4ebcb8;
case 0x4ebcbb:c.instructions+=2;goto B4ebcbb;
case 0x4ebcc2:c.instructions+=1;goto B4ebcc2;
case 0x4ebcc4:goto L4ebcc4;
case 0x4ebcc6:c.instructions+=1;goto B4ebcc6;
case 0x4ebccb:goto L4ebccb;
case 0x4ebccd:c.instructions+=1;goto B4ebccd;
case 0x4ebccf:goto L4ebccf;
case 0x4ebcd6:c.instructions+=1;goto B4ebcd6;
case 0x4ebcd8:goto L4ebcd8;
case 0x4ebcdd:c.instructions+=2;goto B4ebcdd;
case 0x4ebce0:c.instructions+=1;goto B4ebce0;
case 0x4ebce3:goto L4ebce3;
case 0x4ebce7:c.instructions+=5;goto B4ebce7;
case 0x4ebcea:c.instructions+=4;goto B4ebcea;
case 0x4ebceb:c.instructions+=3;goto B4ebceb;
case 0x4ebcf0:c.instructions+=2;goto B4ebcf0;
case 0x4ebcf1:c.instructions+=1;goto B4ebcf1;
case 0x4ebcf6:goto L4ebcf6;
case 0x4ebcf7:c.instructions+=1;goto B4ebcf7;
case 0x4ebcfc:goto L4ebcfc;
case 0x4ebcff:c.instructions+=4;goto B4ebcff;
case 0x4ebd00:c.instructions+=3;goto B4ebd00;
case 0x4ebd05:c.instructions+=2;goto B4ebd05;
case 0x4ebd06:c.instructions+=1;goto B4ebd06;
case 0x4ebd0b:goto L4ebd0b;
case 0x4ebd0e:c.instructions+=4;goto B4ebd0e;
case 0x4ebd0f:c.instructions+=3;goto B4ebd0f;
case 0x4ebd14:c.instructions+=2;goto B4ebd14;
case 0x4ebd15:c.instructions+=1;goto B4ebd15;
case 0x4ebd1a:goto L4ebd1a;
case 0x4ebd1d:c.instructions+=3;goto B4ebd1d;
case 0x4ebd20:c.instructions+=2;goto B4ebd20;
case 0x4ebd22:c.instructions+=1;goto B4ebd22;
case 0x4ebd24:goto L4ebd24;
case 0x4ebd27:goto L4ebd27;
case 0x4ebd2a:c.instructions+=4;goto B4ebd2a;
case 0x4ebd2d:c.instructions+=3;goto B4ebd2d;
case 0x4ebd30:c.instructions+=2;goto B4ebd30;
case 0x4ebd32:c.instructions+=1;goto B4ebd32;
case 0x4ebd34:goto L4ebd34;
case 0x4ebd39:c.instructions+=1;goto B4ebd39;
case 0x4ebd3c:goto L4ebd3c;
case 0x4ebd3f:c.instructions+=9;goto B4ebd3f;
case 0x4ebd45:c.instructions+=8;goto B4ebd45;
case 0x4ebd47:c.instructions+=7;goto B4ebd47;
case 0x4ebd4b:c.instructions+=6;goto B4ebd4b;
case 0x4ebd4f:c.instructions+=5;goto B4ebd4f;
case 0x4ebd55:c.instructions+=4;goto B4ebd55;
case 0x4ebd5b:c.instructions+=3;goto B4ebd5b;
case 0x4ebd5d:c.instructions+=2;goto B4ebd5d;
case 0x4ebd60:c.instructions+=1;goto B4ebd60;
case 0x4ebd62:goto L4ebd62;
case 0x4ebd68:c.instructions+=2;goto B4ebd68;
case 0x4ebd6b:c.instructions+=1;goto B4ebd6b;
case 0x4ebd6e:goto L4ebd6e;
case 0x4ebd70:c.instructions+=4;goto B4ebd70;
case 0x4ebd74:c.instructions+=3;goto B4ebd74;
case 0x4ebd75:c.instructions+=2;goto B4ebd75;
case 0x4ebd78:c.instructions+=1;goto B4ebd78;
case 0x4ebd7d:goto L4ebd7d;
case 0x4ebd80:c.instructions+=5;goto B4ebd80;
case 0x4ebd84:c.instructions+=4;goto B4ebd84;
case 0x4ebd85:c.instructions+=3;goto B4ebd85;
case 0x4ebd8a:c.instructions+=2;goto B4ebd8a;
case 0x4ebd8b:c.instructions+=1;goto B4ebd8b;
case 0x4ebd90:goto L4ebd90;
case 0x4ebd93:goto L4ebd93;
case 0x4ebd99:c.instructions+=3;goto B4ebd99;
case 0x4ebd9a:c.instructions+=2;goto B4ebd9a;
case 0x4ebd9d:c.instructions+=1;goto B4ebd9d;
case 0x4ebda2:goto L4ebda2;
case 0x4ebda3:goto L4ebda3;
case 0x4ebda4:c.instructions+=4;goto B4ebda4;
case 0x4ebda5:c.instructions+=3;goto B4ebda5;
case 0x4ebda6:c.instructions+=2;goto B4ebda6;
case 0x4ebda9:c.instructions+=1;goto B4ebda9;
case 0x4ebdb0:goto L4ebdb0;
case 0x4ebdb2:c.instructions+=14;goto B4ebdb2;
case 0x4ebdb7:c.instructions+=13;goto B4ebdb7;
case 0x4ebdbd:c.instructions+=12;goto B4ebdbd;
case 0x4ebdbe:c.instructions+=11;goto B4ebdbe;
case 0x4ebdc5:c.instructions+=10;goto B4ebdc5;
case 0x4ebdc6:c.instructions+=9;goto B4ebdc6;
case 0x4ebdc7:c.instructions+=8;goto B4ebdc7;
case 0x4ebdc8:c.instructions+=7;goto B4ebdc8;
case 0x4ebdca:c.instructions+=6;goto B4ebdca;
case 0x4ebdce:c.instructions+=5;goto B4ebdce;
case 0x4ebdd1:c.instructions+=4;goto B4ebdd1;
case 0x4ebdd4:c.instructions+=3;goto B4ebdd4;
case 0x4ebdd6:c.instructions+=2;goto B4ebdd6;
case 0x4ebdde:c.instructions+=1;goto B4ebdde;
case 0x4ebde0:goto L4ebde0;
case 0x4ebde2:c.instructions+=5;goto B4ebde2;
case 0x4ebde5:c.instructions+=4;goto B4ebde5;
case 0x4ebde7:c.instructions+=3;goto B4ebde7;
case 0x4ebde8:c.instructions+=2;goto B4ebde8;
case 0x4ebdeb:c.instructions+=1;goto B4ebdeb;
case 0x4ebdf0:goto L4ebdf0;
case 0x4ebdf2:c.instructions+=3;goto B4ebdf2;
case 0x4ebdf5:c.instructions+=2;goto B4ebdf5;
case 0x4ebdf7:c.instructions+=1;goto B4ebdf7;
case 0x4ebdf9:goto L4ebdf9;
case 0x4ebdfb:c.instructions+=3;goto B4ebdfb;
case 0x4ebdfd:c.instructions+=2;goto B4ebdfd;
case 0x4ebe05:c.instructions+=1;goto B4ebe05;
case 0x4ebe07:goto L4ebe07;
case 0x4ebe09:c.instructions+=5;goto B4ebe09;
case 0x4ebe0c:c.instructions+=4;goto B4ebe0c;
case 0x4ebe0e:c.instructions+=3;goto B4ebe0e;
case 0x4ebe0f:c.instructions+=2;goto B4ebe0f;
case 0x4ebe12:c.instructions+=1;goto B4ebe12;
case 0x4ebe17:goto L4ebe17;
case 0x4ebe19:c.instructions+=3;goto B4ebe19;
case 0x4ebe1c:c.instructions+=2;goto B4ebe1c;
case 0x4ebe1e:c.instructions+=1;goto B4ebe1e;
case 0x4ebe20:goto L4ebe20;
case 0x4ebe24:c.instructions+=5;goto B4ebe24;
case 0x4ebe25:c.instructions+=4;goto B4ebe25;
case 0x4ebe26:c.instructions+=3;goto B4ebe26;
case 0x4ebe2d:c.instructions+=2;goto B4ebe2d;
case 0x4ebe30:c.instructions+=1;goto B4ebe30;
case 0x4ebe40:goto L4ebe40;
case 0x4ebe42:c.instructions+=13;goto B4ebe42;
case 0x4ebe47:c.instructions+=12;goto B4ebe47;
case 0x4ebe4d:c.instructions+=11;goto B4ebe4d;
case 0x4ebe4e:c.instructions+=10;goto B4ebe4e;
case 0x4ebe55:c.instructions+=9;goto B4ebe55;
case 0x4ebe56:c.instructions+=8;goto B4ebe56;
case 0x4ebe57:c.instructions+=7;goto B4ebe57;
case 0x4ebe59:c.instructions+=6;goto B4ebe59;
case 0x4ebe5a:c.instructions+=5;goto B4ebe5a;
case 0x4ebe5e:c.instructions+=4;goto B4ebe5e;
case 0x4ebe61:c.instructions+=3;goto B4ebe61;
case 0x4ebe63:c.instructions+=2;goto B4ebe63;
case 0x4ebe6b:c.instructions+=1;goto B4ebe6b;
case 0x4ebe6d:goto L4ebe6d;
case 0x4ebe6f:c.instructions+=1;goto B4ebe6f;
case 0x4ebe74:goto L4ebe74;
case 0x4ebe75:c.instructions+=1;goto B4ebe75;
case 0x4ebe7a:goto L4ebe7a;
case 0x4ebe7d:goto L4ebe7d;
case 0x4ebe7f:c.instructions+=3;goto B4ebe7f;
case 0x4ebe81:c.instructions+=2;goto B4ebe81;
case 0x4ebe89:c.instructions+=1;goto B4ebe89;
case 0x4ebe8b:goto L4ebe8b;
case 0x4ebe90:goto L4ebe90;
case 0x4ebe92:c.instructions+=5;goto B4ebe92;
case 0x4ebe95:c.instructions+=4;goto B4ebe95;
case 0x4ebe97:c.instructions+=3;goto B4ebe97;
case 0x4ebe98:c.instructions+=2;goto B4ebe98;
case 0x4ebe9b:c.instructions+=1;goto B4ebe9b;
case 0x4ebea0:goto L4ebea0;
case 0x4ebea2:c.instructions+=3;goto B4ebea2;
case 0x4ebea5:c.instructions+=2;goto B4ebea5;
case 0x4ebea7:c.instructions+=1;goto B4ebea7;
case 0x4ebea9:goto L4ebea9;
case 0x4ebead:c.instructions+=5;goto B4ebead;
case 0x4ebeae:c.instructions+=4;goto B4ebeae;
case 0x4ebeaf:c.instructions+=3;goto B4ebeaf;
case 0x4ebeb6:c.instructions+=2;goto B4ebeb6;
case 0x4ebeb9:c.instructions+=1;goto B4ebeb9;
case 0x4ebec0:goto L4ebec0;
case 0x4ebec1:c.instructions+=11;goto B4ebec1;
case 0x4ebec3:c.instructions+=10;goto B4ebec3;
case 0x4ebec6:c.instructions+=9;goto B4ebec6;
case 0x4ebecc:c.instructions+=8;goto B4ebecc;
case 0x4ebecd:c.instructions+=7;goto B4ebecd;
case 0x4ebecf:c.instructions+=6;goto B4ebecf;
case 0x4ebed2:c.instructions+=5;goto B4ebed2;
case 0x4ebed3:c.instructions+=4;goto B4ebed3;
case 0x4ebed4:c.instructions+=3;goto B4ebed4;
case 0x4ebed5:c.instructions+=2;goto B4ebed5;
case 0x4ebed9:c.instructions+=1;goto B4ebed9;
case 0x4ebede:goto L4ebede;
case 0x4ebee1:c.instructions+=4;goto B4ebee1;
case 0x4ebee4:c.instructions+=3;goto B4ebee4;
case 0x4ebee6:c.instructions+=2;goto B4ebee6;
case 0x4ebeeb:c.instructions+=1;goto B4ebeeb;
case 0x4ebeed:goto L4ebeed;
case 0x4ebef0:c.instructions+=1;goto B4ebef0;
case 0x4ebef2:goto L4ebef2;
case 0x4ebef7:c.instructions+=1;goto B4ebef7;
case 0x4ebefc:goto L4ebefc;
case 0x4ebeff:c.instructions+=3;goto B4ebeff;
case 0x4ebf00:c.instructions+=2;goto B4ebf00;
case 0x4ebf01:c.instructions+=1;goto B4ebf01;
case 0x4ebf06:goto L4ebf06;
case 0x4ebf09:c.instructions+=2;goto B4ebf09;
case 0x4ebf0a:c.instructions+=1;goto B4ebf0a;
case 0x4ebf0f:goto L4ebf0f;
case 0x4ebf12:c.instructions+=1;goto B4ebf12;
case 0x4ebf17:goto L4ebf17;
case 0x4ebf1e:c.instructions+=1;goto B4ebf1e;
case 0x4ebf20:goto L4ebf20;
case 0x4ebf23:c.instructions+=1;goto B4ebf23;
case 0x4ebf25:goto L4ebf25;
case 0x4ebf2a:c.instructions+=1;goto B4ebf2a;
case 0x4ebf2f:goto L4ebf2f;
case 0x4ebf31:c.instructions+=1;goto B4ebf31;
case 0x4ebf33:goto L4ebf33;
case 0x4ebf38:c.instructions+=1;goto B4ebf38;
case 0x4ebf3d:goto L4ebf3d;
case 0x4ebf3f:c.instructions+=1;goto B4ebf3f;
case 0x4ebf41:goto L4ebf41;
case 0x4ebf46:c.instructions+=8;goto B4ebf46;
case 0x4ebf4c:c.instructions+=7;goto B4ebf4c;
case 0x4ebf50:c.instructions+=6;goto B4ebf50;
case 0x4ebf54:c.instructions+=5;goto B4ebf54;
case 0x4ebf5a:c.instructions+=4;goto B4ebf5a;
case 0x4ebf60:c.instructions+=3;goto B4ebf60;
case 0x4ebf62:c.instructions+=2;goto B4ebf62;
case 0x4ebf65:c.instructions+=1;goto B4ebf65;
case 0x4ebf67:goto L4ebf67;
case 0x4ebf6c:goto L4ebf6c;
case 0x4ebf6e:c.instructions+=1;goto B4ebf6e;
case 0x4ebf70:goto L4ebf70;
case 0x4ebf71:c.instructions+=2;goto B4ebf71;
case 0x4ebf76:c.instructions+=1;goto B4ebf76;
case 0x4ebf7b:goto L4ebf7b;
case 0x4ebf7e:c.instructions+=1;goto B4ebf7e;
case 0x4ebf83:goto L4ebf83;
case 0x4ebf88:c.instructions+=3;goto B4ebf88;
case 0x4ebf8a:c.instructions+=2;goto B4ebf8a;
case 0x4ebf8e:c.instructions+=1;goto B4ebf8e;
case 0x4ebf93:goto L4ebf93;
case 0x4ebf98:goto L4ebf98;
case 0x4ebf9b:c.instructions+=2;goto B4ebf9b;
case 0x4ebf9c:c.instructions+=1;goto B4ebf9c;
case 0x4ebfa1:goto L4ebfa1;
case 0x4ebfa4:goto L4ebfa4;
case 0x4ebfaa:c.instructions+=2;goto B4ebfaa;
case 0x4ebfac:c.instructions+=1;goto B4ebfac;
case 0x4ebfb1:goto L4ebfb1;
case 0x4ebfb7:c.instructions+=3;goto B4ebfb7;
case 0x4ebfb9:c.instructions+=2;goto B4ebfb9;
case 0x4ebfbc:c.instructions+=1;goto B4ebfbc;
case 0x4ebfc2:goto L4ebfc2;
case 0x4ebfc4:c.instructions+=2;goto B4ebfc4;
case 0x4ebfc7:c.instructions+=1;goto B4ebfc7;
case 0x4ebfcd:goto L4ebfcd;
case 0x4ebfd0:c.instructions+=1;goto B4ebfd0;
case 0x4ebfd6:goto L4ebfd6;
case 0x4ebfd8:c.instructions+=1;goto B4ebfd8;
case 0x4ebfde:goto L4ebfde;
case 0x4ebfe1:c.instructions+=1;goto B4ebfe1;
case 0x4ebfe7:goto L4ebfe7;
case 0x4ebfe9:c.instructions+=1;goto B4ebfe9;
case 0x4ebfee:goto L4ebfee;
case 0x4ebff2:c.instructions+=3;goto B4ebff2;
case 0x4ebff5:c.instructions+=2;goto B4ebff5;
case 0x4ebff6:c.instructions+=1;goto B4ebff6;
case 0x4ebffb:goto L4ebffb;
case 0x4ebfff:c.instructions+=1;goto B4ebfff;
default:missing_instruction(c.pc);}
B4eb000:L4eb000:{c.instructions+=11;NFSU2_TR(0x4eb000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb003:{NFSU2_TR(0x4eb003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4eb005:{NFSU2_TR(0x4eb005);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B4eb00b:{NFSU2_TR(0x4eb00b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4eb011:{NFSU2_TR(0x4eb011);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4eb013:{NFSU2_TR(0x4eb013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb014:{NFSU2_TR(0x4eb014);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb019:{NFSU2_TR(0x4eb019);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4eb01c:{NFSU2_TR(0x4eb01c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb01e:{NFSU2_TR(0x4eb01e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb01f:{NFSU2_TR(0x4eb01f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb024ull));
TAIL_STATIC(0x50c960u,50c);
}
B4eb024:L4eb024:{c.instructions+=3;NFSU2_TR(0x4eb024);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4eb027:{NFSU2_TR(0x4eb027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb028:{NFSU2_TR(0x4eb028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb02dull));
TAIL_STATIC(0x505450u,505);
}
B4eb02d:L4eb02d:{c.instructions+=4;NFSU2_TR(0x4eb02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb033:{NFSU2_TR(0x4eb033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb034:{NFSU2_TR(0x4eb034);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb035:{NFSU2_TR(0x4eb035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb03aull));
TAIL_STATIC(0x50c900u,50c);
}
B4eb03a:L4eb03a:{c.instructions+=5;NFSU2_TR(0x4eb03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eb040:{NFSU2_TR(0x4eb040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb041:{NFSU2_TR(0x4eb041);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb046:{NFSU2_TR(0x4eb046);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb047:{NFSU2_TR(0x4eb047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb04cull));
TAIL_STATIC(0x4022c0u,402);
}
B4eb04c:L4eb04c:{c.instructions+=6;NFSU2_TR(0x4eb04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb052:{NFSU2_TR(0x4eb052);
__builtin_memmove(gp(0x8363fc),(R+12),1);
}
B4eb058:{NFSU2_TR(0x4eb058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb05b:{NFSU2_TR(0x4eb05b);
u8 U[4];
w4(U+0,u32(0x3b7f8aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb060:{NFSU2_TR(0x4eb060);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb061:{NFSU2_TR(0x4eb061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb066ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eb066:L4eb066:{c.instructions+=2;NFSU2_TR(0x4eb066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb067:{NFSU2_TR(0x4eb067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb06cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4eb06c:L4eb06c:{c.instructions+=7;NFSU2_TR(0x4eb06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb072:{NFSU2_TR(0x4eb072);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4eb075:{NFSU2_TR(0x4eb075);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb077:{NFSU2_TR(0x4eb077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb07a:{NFSU2_TR(0x4eb07a);
u8 U[4];
w4(U+0,u32(0xf80dbcaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb07f:{NFSU2_TR(0x4eb07f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb080:{NFSU2_TR(0x4eb080);
if(r1(R+518)){{goto L4eb08f;}}
}
B4eb082:L4eb082:{c.instructions+=1;NFSU2_TR(0x4eb082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb087ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eb087:L4eb087:{c.instructions+=2;NFSU2_TR(0x4eb087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb088:{NFSU2_TR(0x4eb088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb08dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4eb08d:L4eb08d:{c.instructions+=1;NFSU2_TR(0x4eb08d);
{goto L4eb09a;}
}
B4eb08f:L4eb08f:{c.instructions+=1;NFSU2_TR(0x4eb08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb094ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eb094:L4eb094:{c.instructions+=2;NFSU2_TR(0x4eb094);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb095:{NFSU2_TR(0x4eb095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb09aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4eb09a:L4eb09a:{c.instructions+=7;NFSU2_TR(0x4eb09a);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4eb09f:{NFSU2_TR(0x4eb09f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eb0a2:{NFSU2_TR(0x4eb0a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb0a3:{NFSU2_TR(0x4eb0a3);
__builtin_memmove((R+4),(R+24),4);
}
B4eb0a5:{NFSU2_TR(0x4eb0a5);
__builtin_memmove(gp(0x83592c),(R+12),4);
}
B4eb0ab:{NFSU2_TR(0x4eb0ab);
__builtin_memmove(gp(0x837aa0),(R+0),4);
}
B4eb0b0:{NFSU2_TR(0x4eb0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb0b5ull));
TAIL_STATIC(0x4d82d0u,4d8);
}
B4eb0b5:L4eb0b5:{c.instructions+=24;NFSU2_TR(0x4eb0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb0bb:{NFSU2_TR(0x4eb0bb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb0be:{NFSU2_TR(0x4eb0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb0c4:{NFSU2_TR(0x4eb0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb0ca:{NFSU2_TR(0x4eb0ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0d0:{NFSU2_TR(0x4eb0d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0d6:{NFSU2_TR(0x4eb0d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0dc:{NFSU2_TR(0x4eb0dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0e2:{NFSU2_TR(0x4eb0e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x163ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0e8:{NFSU2_TR(0x4eb0e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x165ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0ee:{NFSU2_TR(0x4eb0ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0f4:{NFSU2_TR(0x4eb0f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x167ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb0fa:{NFSU2_TR(0x4eb0fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb100:{NFSU2_TR(0x4eb100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb106:{NFSU2_TR(0x4eb106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb109:{NFSU2_TR(0x4eb109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb10a:{NFSU2_TR(0x4eb10a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eb111:{NFSU2_TR(0x4eb111);
__builtin_memmove((R+0),(R+24),4);
}
B4eb113:{NFSU2_TR(0x4eb113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb114:{NFSU2_TR(0x4eb114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eb115:{NFSU2_TR(0x4eb115);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb11c:{NFSU2_TR(0x4eb11c);
__builtin_memmove((R+16),(R+20),4);
}
B4eb11e:{NFSU2_TR(0x4eb11e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eb11f:{NFSU2_TR(0x4eb11f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb130:L4eb130:{c.instructions+=10;NFSU2_TR(0x4eb130);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb131:{NFSU2_TR(0x4eb131);
__builtin_memmove((R+20),(R+16),4);
}
B4eb133:{NFSU2_TR(0x4eb133);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb135:{NFSU2_TR(0x4eb135);
u8 U[4];
w4(U+0,u32(0x776124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb13a:{NFSU2_TR(0x4eb13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb140:{NFSU2_TR(0x4eb140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb141:{NFSU2_TR(0x4eb141);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb148:{NFSU2_TR(0x4eb148);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb149:{NFSU2_TR(0x4eb149);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb14e:{NFSU2_TR(0x4eb14e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb153ull));
TAIL_STATIC(0x575620u,575);
}
B4eb153:L4eb153:{c.instructions+=5;NFSU2_TR(0x4eb153);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb156:{NFSU2_TR(0x4eb156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb159:{NFSU2_TR(0x4eb159);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb15b:{NFSU2_TR(0x4eb15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb162:{NFSU2_TR(0x4eb162);
if(r1(R+518)){{goto L4eb188;}}
}
B4eb164:L4eb164:{c.instructions+=8;NFSU2_TR(0x4eb164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb167:{NFSU2_TR(0x4eb167);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb169:{NFSU2_TR(0x4eb169);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb16b:{NFSU2_TR(0x4eb16b);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb170:{NFSU2_TR(0x4eb170);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb172:{NFSU2_TR(0x4eb172);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb173:{NFSU2_TR(0x4eb173);
__builtin_memmove((R+4),(R+0),4);
}
B4eb175:{NFSU2_TR(0x4eb175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb17aull));
TAIL_STATIC(0x4ea900u,4ea);
}
B4eb17a:L4eb17a:{c.instructions+=5;NFSU2_TR(0x4eb17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb17d:{NFSU2_TR(0x4eb17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb184:{NFSU2_TR(0x4eb184);
__builtin_memmove((R+16),(R+20),4);
}
B4eb186:{NFSU2_TR(0x4eb186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eb187:{NFSU2_TR(0x4eb187);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb188:L4eb188:{c.instructions+=6;NFSU2_TR(0x4eb188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb18b:{NFSU2_TR(0x4eb18b);
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
B4eb18d:{NFSU2_TR(0x4eb18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb194:{NFSU2_TR(0x4eb194);
__builtin_memmove((R+16),(R+20),4);
}
B4eb196:{NFSU2_TR(0x4eb196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eb197:{NFSU2_TR(0x4eb197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb1a0:L4eb1a0:{c.instructions+=8;NFSU2_TR(0x4eb1a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1a2:{NFSU2_TR(0x4eb1a2);
u8 U[4];
w4(U+0,u32(0x776144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1a7:{NFSU2_TR(0x4eb1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb1ad:{NFSU2_TR(0x4eb1ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1ae:{NFSU2_TR(0x4eb1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb1b5:{NFSU2_TR(0x4eb1b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1b6:{NFSU2_TR(0x4eb1b6);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1bb:{NFSU2_TR(0x4eb1bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb1c0ull));
TAIL_STATIC(0x575620u,575);
}
B4eb1c0:L4eb1c0:{c.instructions+=5;NFSU2_TR(0x4eb1c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb1c3:{NFSU2_TR(0x4eb1c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1c7:{NFSU2_TR(0x4eb1c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb1c9:{NFSU2_TR(0x4eb1c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb1d1:{NFSU2_TR(0x4eb1d1);
if(r1(R+518)){{goto L4eb1ee;}}
}
B4eb1d3:L4eb1d3:{c.instructions+=4;NFSU2_TR(0x4eb1d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb1d7:{NFSU2_TR(0x4eb1d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb1d8:{NFSU2_TR(0x4eb1d8);
__builtin_memmove((R+4),(R+0),4);
}
B4eb1da:{NFSU2_TR(0x4eb1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb1dfull));
TAIL_STATIC(0x4d8f20u,4d8);
}
B4eb1df:L4eb1df:{c.instructions+=4;NFSU2_TR(0x4eb1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb1e3:{NFSU2_TR(0x4eb1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb1ea:{NFSU2_TR(0x4eb1ea);
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
B4eb1ed:{NFSU2_TR(0x4eb1ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb1ee:L4eb1ee:{c.instructions+=5;NFSU2_TR(0x4eb1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb1f2:{NFSU2_TR(0x4eb1f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eb1f4:{NFSU2_TR(0x4eb1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb1fb:{NFSU2_TR(0x4eb1fb);
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
B4eb1fe:{NFSU2_TR(0x4eb1fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb200:L4eb200:{c.instructions+=3;NFSU2_TR(0x4eb200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb201:{NFSU2_TR(0x4eb201);
__builtin_memmove((R+24),(R+4),4);
}
B4eb203:{NFSU2_TR(0x4eb203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb208ull));
TAIL_STATIC(0x4d9050u,4d9);
}
B4eb208:L4eb208:{c.instructions+=2;NFSU2_TR(0x4eb208);
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
B4eb20d:{NFSU2_TR(0x4eb20d);
if(r1(R+518)){{goto L4eb218;}}
}
B4eb20f:L4eb20f:{c.instructions+=2;NFSU2_TR(0x4eb20f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb210:{NFSU2_TR(0x4eb210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb215ull));
TAIL_STATIC(0x575630u,575);
}
B4eb215:L4eb215:{c.instructions+=1;NFSU2_TR(0x4eb215);
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
B4eb218:L4eb218:{c.instructions+=3;NFSU2_TR(0x4eb218);
__builtin_memmove((R+0),(R+24),4);
}
B4eb21a:{NFSU2_TR(0x4eb21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb21b:{NFSU2_TR(0x4eb21b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb220:L4eb220:{c.instructions+=5;NFSU2_TR(0x4eb220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb224:{NFSU2_TR(0x4eb224);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb229:{NFSU2_TR(0x4eb229);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb22a:{NFSU2_TR(0x4eb22a);
__builtin_memmove((R+24),(R+4),4);
}
B4eb22c:{NFSU2_TR(0x4eb22c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4eb34e;}}
}
B4eb232:L4eb232:{c.instructions+=1;NFSU2_TR(0x4eb232);
if(r1(R+518)){{goto L4eb371;}}
}
B4eb238:L4eb238:{c.instructions+=2;NFSU2_TR(0x4eb238);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x43211243ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x43211243ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb23d:{NFSU2_TR(0x4eb23d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4eb2f0;}}
}
B4eb243:L4eb243:{c.instructions+=1;NFSU2_TR(0x4eb243);
if(r1(R+518)){{goto L4eb2d5;}}
}
B4eb249:L4eb249:{c.instructions+=2;NFSU2_TR(0x4eb249);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x12345678ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb24e:{NFSU2_TR(0x4eb24e);
if(r1(R+518)){{goto L4eb2a3;}}
}
B4eb250:L4eb250:{c.instructions+=2;NFSU2_TR(0x4eb250);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1a2826e1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1a2826e1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1a2826e1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb255:{NFSU2_TR(0x4eb255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb25b:L4eb25b:{c.instructions+=3;NFSU2_TR(0x4eb25b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4eb261:{NFSU2_TR(0x4eb261);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb263:{NFSU2_TR(0x4eb263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb268ull));
TAIL_STATIC(0x458520u,458);
}
B4eb268:L4eb268:{c.instructions+=5;NFSU2_TR(0x4eb268);
s1(0x83aa79,u8(0x0ull));
}
B4eb26f:{NFSU2_TR(0x4eb26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb272:{NFSU2_TR(0x4eb272);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb277:{NFSU2_TR(0x4eb277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb278:{NFSU2_TR(0x4eb278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb27dull));
TAIL_STATIC(0x537950u,537);
}
B4eb27d:L4eb27d:{c.instructions+=2;NFSU2_TR(0x4eb27d);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb282:{NFSU2_TR(0x4eb282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb287ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4eb287:L4eb287:{c.instructions+=3;NFSU2_TR(0x4eb287);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eb28a:{NFSU2_TR(0x4eb28a);
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
B4eb28c:{NFSU2_TR(0x4eb28c);
if(r1(R+518)){{goto L4eb403;}}
}
B4eb292:L4eb292:{c.instructions+=2;NFSU2_TR(0x4eb292);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb297:{NFSU2_TR(0x4eb297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb29cull));
TAIL_STATIC(0x5379a0u,537);
}
B4eb29c:L4eb29c:{c.instructions+=3;NFSU2_TR(0x4eb29c);
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
B4eb29f:{NFSU2_TR(0x4eb29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb2a0:{NFSU2_TR(0x4eb2a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb2a3:L4eb2a3:{c.instructions+=2;NFSU2_TR(0x4eb2a3);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B4eb2aa:{NFSU2_TR(0x4eb2aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb2b0:L4eb2b0:{c.instructions+=4;NFSU2_TR(0x4eb2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb2b3:{NFSU2_TR(0x4eb2b3);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2b8:{NFSU2_TR(0x4eb2b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2b9:{NFSU2_TR(0x4eb2b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb2beull));
TAIL_STATIC(0x537950u,537);
}
B4eb2be:L4eb2be:{c.instructions+=5;NFSU2_TR(0x4eb2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eb2c1:{NFSU2_TR(0x4eb2c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2c3:{NFSU2_TR(0x4eb2c3);
u8 U[4];
w4(U+0,u32(0x797c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2c8:{NFSU2_TR(0x4eb2c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2c9:{NFSU2_TR(0x4eb2c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb2ceull));
TAIL_STATIC(0x537980u,537);
}
B4eb2ce:L4eb2ce:{c.instructions+=3;NFSU2_TR(0x4eb2ce);
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
B4eb2d1:{NFSU2_TR(0x4eb2d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb2d2:{NFSU2_TR(0x4eb2d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb2d5:L4eb2d5:{c.instructions+=4;NFSU2_TR(0x4eb2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4eb2d8:{NFSU2_TR(0x4eb2d8);
u8 U[4];
w4(U+0,u32(0x28ea5749ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2dd:{NFSU2_TR(0x4eb2dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2de:{NFSU2_TR(0x4eb2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb2e3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eb2e3:L4eb2e3:{c.instructions+=2;NFSU2_TR(0x4eb2e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb2e4:{NFSU2_TR(0x4eb2e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb2e9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4eb2e9:L4eb2e9:{c.instructions+=3;NFSU2_TR(0x4eb2e9);
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
B4eb2ec:{NFSU2_TR(0x4eb2ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb2ed:{NFSU2_TR(0x4eb2ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb2f0:L4eb2f0:{c.instructions+=2;NFSU2_TR(0x4eb2f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5f5e3886ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb2f5:{NFSU2_TR(0x4eb2f5);
if(r1(R+518)){{goto L4eb325;}}
}
B4eb2f7:L4eb2f7:{c.instructions+=2;NFSU2_TR(0x4eb2f7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb2fc:{NFSU2_TR(0x4eb2fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb302:L4eb302:{c.instructions+=1;NFSU2_TR(0x4eb302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb307ull));
TAIL_STATIC(0x50d510u,50d);
}
B4eb307:L4eb307:{c.instructions+=2;NFSU2_TR(0x4eb307);
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
B4eb309:{NFSU2_TR(0x4eb309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb30f:L4eb30f:{c.instructions+=5;NFSU2_TR(0x4eb30f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb310:{NFSU2_TR(0x4eb310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb313:{NFSU2_TR(0x4eb313);
u8 U[4];
w4(U+0,u32(0x797c90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb318:{NFSU2_TR(0x4eb318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb319:{NFSU2_TR(0x4eb319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb31eull));
TAIL_STATIC(0x537980u,537);
}
B4eb31e:L4eb31e:{c.instructions+=3;NFSU2_TR(0x4eb31e);
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
B4eb321:{NFSU2_TR(0x4eb321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb322:{NFSU2_TR(0x4eb322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb325:L4eb325:{c.instructions+=3;NFSU2_TR(0x4eb325);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4eb32b:{NFSU2_TR(0x4eb32b);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb32d:{NFSU2_TR(0x4eb32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb332ull));
TAIL_STATIC(0x458520u,458);
}
B4eb332:L4eb332:{c.instructions+=5;NFSU2_TR(0x4eb332);
s1(0x83aa79,u8(0x1ull));
}
B4eb339:{NFSU2_TR(0x4eb339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb33c:{NFSU2_TR(0x4eb33c);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb341:{NFSU2_TR(0x4eb341);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb342:{NFSU2_TR(0x4eb342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb347ull));
TAIL_STATIC(0x537950u,537);
}
B4eb347:L4eb347:{c.instructions+=3;NFSU2_TR(0x4eb347);
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
B4eb34a:{NFSU2_TR(0x4eb34a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb34b:{NFSU2_TR(0x4eb34b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb34e:L4eb34e:{c.instructions+=2;NFSU2_TR(0x4eb34e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbbccaaddull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbbccaaddull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbbccaaddull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb353:{NFSU2_TR(0x4eb353);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4eb37d;}}
}
B4eb355:L4eb355:{c.instructions+=1;NFSU2_TR(0x4eb355);
if(r1(R+518)){{goto L4eb403;}}
}
B4eb35b:L4eb35b:{c.instructions+=2;NFSU2_TR(0x4eb35b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xaaccddbbull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xaaccddbbull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xaaccddbbull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb360:{NFSU2_TR(0x4eb360);
if(r1(R+518)){{goto L4eb403;}}
}
B4eb366:L4eb366:{c.instructions+=2;NFSU2_TR(0x4eb366);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb36b:{NFSU2_TR(0x4eb36b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb371:L4eb371:{c.instructions+=3;NFSU2_TR(0x4eb371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb372:{NFSU2_TR(0x4eb372);
__builtin_memmove((R+4),(R+24),4);
}
B4eb374:{NFSU2_TR(0x4eb374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb379ull));
TAIL_STATIC(0x4d90d0u,4d9);
}
B4eb379:L4eb379:{c.instructions+=2;NFSU2_TR(0x4eb379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb37a:{NFSU2_TR(0x4eb37a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb37d:L4eb37d:{c.instructions+=2;NFSU2_TR(0x4eb37d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb382:{NFSU2_TR(0x4eb382);
if(r1(R+518)){{goto L4eb3a5;}}
}
B4eb384:L4eb384:{c.instructions+=2;NFSU2_TR(0x4eb384);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xed5a2448ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xed5a2448ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xed5a2448ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb389:{NFSU2_TR(0x4eb389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb38b:L4eb38b:{c.instructions+=4;NFSU2_TR(0x4eb38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eb38e:{NFSU2_TR(0x4eb38e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb393:{NFSU2_TR(0x4eb393);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb394:{NFSU2_TR(0x4eb394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb399ull));
TAIL_STATIC(0x537950u,537);
}
B4eb399:L4eb399:{c.instructions+=2;NFSU2_TR(0x4eb399);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eb39c:{NFSU2_TR(0x4eb39c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb3a1ull));
TAIL_STATIC(0x53feb0u,53f);
}
B4eb3a1:L4eb3a1:{c.instructions+=2;NFSU2_TR(0x4eb3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb3a2:{NFSU2_TR(0x4eb3a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb3a5:L4eb3a5:{c.instructions+=2;NFSU2_TR(0x4eb3a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eb3a8:{NFSU2_TR(0x4eb3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb3adull));
TAIL_STATIC(0x538760u,538);
}
B4eb3ad:L4eb3ad:{c.instructions+=3;NFSU2_TR(0x4eb3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb3b3:{NFSU2_TR(0x4eb3b3);
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
B4eb3b5:{NFSU2_TR(0x4eb3b5);
if(r1(R+518)){{goto L4eb403;}}
}
B4eb3b7:L4eb3b7:{c.instructions+=2;NFSU2_TR(0x4eb3b7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eb3bc:{NFSU2_TR(0x4eb3bc);
if(r1(R+518)){{goto L4eb403;}}
}
B4eb3be:L4eb3be:{c.instructions+=9;NFSU2_TR(0x4eb3be);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4eb3c3:{NFSU2_TR(0x4eb3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4eb3c9:{NFSU2_TR(0x4eb3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb3cd:{NFSU2_TR(0x4eb3cd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4eb3d1:{NFSU2_TR(0x4eb3d1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4eb3d7:{NFSU2_TR(0x4eb3d7);
{u32 ea_=u32(u32(8348636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4eb3dd:{NFSU2_TR(0x4eb3dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4eb3df:{NFSU2_TR(0x4eb3df);
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
B4eb3e2:{NFSU2_TR(0x4eb3e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb403;}}
}
B4eb3e4:L4eb3e4:{c.instructions+=2;NFSU2_TR(0x4eb3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb3e7:{NFSU2_TR(0x4eb3e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb3ecull));
TAIL_STATIC(0x511e00u,511);
}
B4eb3ec:L4eb3ec:{c.instructions+=4;NFSU2_TR(0x4eb3ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb3ee:{NFSU2_TR(0x4eb3ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb3f0:{NFSU2_TR(0x4eb3f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb3f1:{NFSU2_TR(0x4eb3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb3f6ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4eb3f6:L4eb3f6:{c.instructions+=2;NFSU2_TR(0x4eb3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb400:{NFSU2_TR(0x4eb400);
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
B4eb403:L4eb403:{c.instructions+=2;NFSU2_TR(0x4eb403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb404:{NFSU2_TR(0x4eb404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb410:L4eb410:{c.instructions+=13;NFSU2_TR(0x4eb410);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb412:{NFSU2_TR(0x4eb412);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb417:{NFSU2_TR(0x4eb417);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb41d:{NFSU2_TR(0x4eb41d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb41e:{NFSU2_TR(0x4eb41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb425:{NFSU2_TR(0x4eb425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb426:{NFSU2_TR(0x4eb426);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb42a:{NFSU2_TR(0x4eb42a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb42b:{NFSU2_TR(0x4eb42b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb42c:{NFSU2_TR(0x4eb42c);
__builtin_memmove((R+24),(R+4),4);
}
B4eb42e:{NFSU2_TR(0x4eb42e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb42f:{NFSU2_TR(0x4eb42f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb433:{NFSU2_TR(0x4eb433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb438ull));
TAIL_STATIC(0x552330u,552);
}
B4eb438:L4eb438:{c.instructions+=10;NFSU2_TR(0x4eb438);
u8 U[4];
w4(U+0,u32(0x797cb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4eb43e:{NFSU2_TR(0x4eb43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb448:{NFSU2_TR(0x4eb448);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4eb44e:{NFSU2_TR(0x4eb44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb454:{NFSU2_TR(0x4eb454);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B4eb45a:{NFSU2_TR(0x4eb45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb45d:{NFSU2_TR(0x4eb45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eb460:{NFSU2_TR(0x4eb460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb461:{NFSU2_TR(0x4eb461);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb469:{NFSU2_TR(0x4eb469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb46eull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4eb46e:L4eb46e:{c.instructions+=3;NFSU2_TR(0x4eb46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb46f:{NFSU2_TR(0x4eb46f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb470:{NFSU2_TR(0x4eb470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb475ull));
TAIL_STATIC(0x537950u,537);
}
B4eb475:L4eb475:{c.instructions+=4;NFSU2_TR(0x4eb475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eb478:{NFSU2_TR(0x4eb478);
__builtin_memmove((R+4),(R+24),4);
}
B4eb47a:{NFSU2_TR(0x4eb47a);
s4(0x83aa04,u32(0x0ull));
}
B4eb484:{NFSU2_TR(0x4eb484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb489ull));
TAIL_STATIC(0x4d9300u,4d9);
}
B4eb489:L4eb489:{c.instructions+=1;NFSU2_TR(0x4eb489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb48eull));
TAIL_STATIC(0x50cea0u,50c);
}
B4eb48e:L4eb48e:{c.instructions+=2;NFSU2_TR(0x4eb48e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb48f:{NFSU2_TR(0x4eb48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb494ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4eb494:L4eb494:{c.instructions+=3;NFSU2_TR(0x4eb494);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb497:{NFSU2_TR(0x4eb497);
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
B4eb499:{NFSU2_TR(0x4eb499);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb4d2;}}
}
B4eb49b:L4eb49b:{c.instructions+=5;NFSU2_TR(0x4eb49b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb49e:{NFSU2_TR(0x4eb49e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4a0:{NFSU2_TR(0x4eb4a0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4a5:{NFSU2_TR(0x4eb4a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4a6:{NFSU2_TR(0x4eb4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb4abull));
TAIL_STATIC(0x50cea0u,50c);
}
B4eb4ab:L4eb4ab:{c.instructions+=2;NFSU2_TR(0x4eb4ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4ac:{NFSU2_TR(0x4eb4ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb4b1ull));
TAIL_STATIC(0x555f10u,555);
}
B4eb4b1:L4eb4b1:{c.instructions+=3;NFSU2_TR(0x4eb4b1);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4eb4b7:{NFSU2_TR(0x4eb4b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eb4ba:{NFSU2_TR(0x4eb4ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb4bfull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4eb4bf:L4eb4bf:{c.instructions+=6;NFSU2_TR(0x4eb4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb4c2:{NFSU2_TR(0x4eb4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb4c5:{NFSU2_TR(0x4eb4c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4c6:{NFSU2_TR(0x4eb4c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4c7:{NFSU2_TR(0x4eb4c7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4eb4cd:{NFSU2_TR(0x4eb4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb4d2ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4eb4d2:L4eb4d2:{c.instructions+=7;NFSU2_TR(0x4eb4d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb4d6:{NFSU2_TR(0x4eb4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb4d7:{NFSU2_TR(0x4eb4d7);
__builtin_memmove((R+0),(R+24),4);
}
B4eb4d9:{NFSU2_TR(0x4eb4d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb4da:{NFSU2_TR(0x4eb4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb4e1:{NFSU2_TR(0x4eb4e1);
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
B4eb4e4:{NFSU2_TR(0x4eb4e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb4f0:L4eb4f0:{c.instructions+=3;NFSU2_TR(0x4eb4f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb4f1:{NFSU2_TR(0x4eb4f1);
__builtin_memmove((R+24),(R+4),4);
}
B4eb4f3:{NFSU2_TR(0x4eb4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb4f8ull));
{goto L4eb510;}
}
B4eb4f8:L4eb4f8:{c.instructions+=2;NFSU2_TR(0x4eb4f8);
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
B4eb4fd:{NFSU2_TR(0x4eb4fd);
if(r1(R+518)){{goto L4eb508;}}
}
B4eb4ff:L4eb4ff:{c.instructions+=2;NFSU2_TR(0x4eb4ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb500:{NFSU2_TR(0x4eb500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb505ull));
TAIL_STATIC(0x575630u,575);
}
B4eb505:L4eb505:{c.instructions+=1;NFSU2_TR(0x4eb505);
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
B4eb508:L4eb508:{c.instructions+=3;NFSU2_TR(0x4eb508);
__builtin_memmove((R+0),(R+24),4);
}
B4eb50a:{NFSU2_TR(0x4eb50a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb50b:{NFSU2_TR(0x4eb50b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb510:L4eb510:{c.instructions+=12;NFSU2_TR(0x4eb510);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb512:{NFSU2_TR(0x4eb512);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb517:{NFSU2_TR(0x4eb517);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb51d:{NFSU2_TR(0x4eb51d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb51e:{NFSU2_TR(0x4eb51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb525:{NFSU2_TR(0x4eb525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb526:{NFSU2_TR(0x4eb526);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb527:{NFSU2_TR(0x4eb527);
__builtin_memmove((R+24),(R+4),4);
}
B4eb529:{NFSU2_TR(0x4eb529);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb52d:{NFSU2_TR(0x4eb52d);
u8 U[4];
w4(U+0,u32(0x797cb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4eb533:{NFSU2_TR(0x4eb533);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb53b:{NFSU2_TR(0x4eb53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb540ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4eb540:L4eb540:{c.instructions+=2;NFSU2_TR(0x4eb540);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb541:{NFSU2_TR(0x4eb541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb546ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4eb546:L4eb546:{c.instructions+=3;NFSU2_TR(0x4eb546);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb549:{NFSU2_TR(0x4eb549);
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
B4eb54b:{NFSU2_TR(0x4eb54b);
if(r1(R+518)){{goto L4eb55b;}}
}
B4eb54d:L4eb54d:{c.instructions+=1;NFSU2_TR(0x4eb54d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb552ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4eb552:L4eb552:{c.instructions+=2;NFSU2_TR(0x4eb552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb553:{NFSU2_TR(0x4eb553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb558ull));
TAIL_STATIC(0x5379a0u,537);
}
B4eb558:L4eb558:{c.instructions+=1;NFSU2_TR(0x4eb558);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb55b:L4eb55b:{c.instructions+=3;NFSU2_TR(0x4eb55b);
__builtin_memmove((R+4),(R+24),4);
}
B4eb55d:{NFSU2_TR(0x4eb55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb565:{NFSU2_TR(0x4eb565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb56aull));
TAIL_STATIC(0x4defb0u,4de);
}
B4eb56a:L4eb56a:{c.instructions+=5;NFSU2_TR(0x4eb56a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb56e:{NFSU2_TR(0x4eb56e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb56f:{NFSU2_TR(0x4eb56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb576:{NFSU2_TR(0x4eb576);
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
B4eb579:{NFSU2_TR(0x4eb579);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb580:L4eb580:{c.instructions+=12;NFSU2_TR(0x4eb580);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb582:{NFSU2_TR(0x4eb582);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb587:{NFSU2_TR(0x4eb587);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb58d:{NFSU2_TR(0x4eb58d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb58e:{NFSU2_TR(0x4eb58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb595:{NFSU2_TR(0x4eb595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb596:{NFSU2_TR(0x4eb596);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb59a:{NFSU2_TR(0x4eb59a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb59b:{NFSU2_TR(0x4eb59b);
__builtin_memmove((R+24),(R+4),4);
}
B4eb59d:{NFSU2_TR(0x4eb59d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb59e:{NFSU2_TR(0x4eb59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb5a2:{NFSU2_TR(0x4eb5a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5a7ull));
TAIL_STATIC(0x552330u,552);
}
B4eb5a7:L4eb5a7:{c.instructions+=5;NFSU2_TR(0x4eb5a7);
__builtin_memmove((R+4),(R+24),4);
}
B4eb5a9:{NFSU2_TR(0x4eb5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb5b1:{NFSU2_TR(0x4eb5b1);
u8 U[4];
w4(U+0,u32(0x797cccull));
s4(u32(r4(R+24)),r4(U+0));
}
B4eb5b7:{NFSU2_TR(0x4eb5b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eb5be:{NFSU2_TR(0x4eb5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5c3ull));
TAIL_STATIC(0x4c3000u,4c3);
}
B4eb5c3:L4eb5c3:{c.instructions+=1;NFSU2_TR(0x4eb5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5c8ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4eb5c8:L4eb5c8:{c.instructions+=2;NFSU2_TR(0x4eb5c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb5c9:{NFSU2_TR(0x4eb5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5ceull));
TAIL_STATIC(0x52cf60u,52c);
}
B4eb5ce:L4eb5ce:{c.instructions+=3;NFSU2_TR(0x4eb5ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb5d1:{NFSU2_TR(0x4eb5d1);
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
B4eb5d3:{NFSU2_TR(0x4eb5d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb5ee;}}
}
B4eb5d5:L4eb5d5:{c.instructions+=5;NFSU2_TR(0x4eb5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb5d8:{NFSU2_TR(0x4eb5d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb5da:{NFSU2_TR(0x4eb5da);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb5df:{NFSU2_TR(0x4eb5df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb5e0:{NFSU2_TR(0x4eb5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5e5ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4eb5e5:L4eb5e5:{c.instructions+=2;NFSU2_TR(0x4eb5e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb5e6:{NFSU2_TR(0x4eb5e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5ebull));
TAIL_STATIC(0x555f10u,555);
}
B4eb5eb:L4eb5eb:{c.instructions+=1;NFSU2_TR(0x4eb5eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eb5ee:L4eb5ee:{c.instructions+=2;NFSU2_TR(0x4eb5ee);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4eb5f4:{NFSU2_TR(0x4eb5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb5f9ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4eb5f9:L4eb5f9:{c.instructions+=6;NFSU2_TR(0x4eb5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb5fc:{NFSU2_TR(0x4eb5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eb5ff:{NFSU2_TR(0x4eb5ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb600:{NFSU2_TR(0x4eb600);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4eb606:{NFSU2_TR(0x4eb606);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb607:{NFSU2_TR(0x4eb607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb60cull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4eb60c:L4eb60c:{c.instructions+=6;NFSU2_TR(0x4eb60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb610:{NFSU2_TR(0x4eb610);
__builtin_memmove((R+0),(R+24),4);
}
B4eb612:{NFSU2_TR(0x4eb612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb613:{NFSU2_TR(0x4eb613);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb61a:{NFSU2_TR(0x4eb61a);
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
B4eb61d:{NFSU2_TR(0x4eb61d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb620:L4eb620:{c.instructions+=3;NFSU2_TR(0x4eb620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb621:{NFSU2_TR(0x4eb621);
__builtin_memmove((R+24),(R+4),4);
}
B4eb623:{NFSU2_TR(0x4eb623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb628ull));
{goto L4eb640;}
}
B4eb628:L4eb628:{c.instructions+=2;NFSU2_TR(0x4eb628);
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
B4eb62d:{NFSU2_TR(0x4eb62d);
if(r1(R+518)){{goto L4eb638;}}
}
B4eb62f:L4eb62f:{c.instructions+=2;NFSU2_TR(0x4eb62f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb630:{NFSU2_TR(0x4eb630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb635ull));
TAIL_STATIC(0x575630u,575);
}
B4eb635:L4eb635:{c.instructions+=1;NFSU2_TR(0x4eb635);
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
B4eb638:L4eb638:{c.instructions+=3;NFSU2_TR(0x4eb638);
__builtin_memmove((R+0),(R+24),4);
}
B4eb63a:{NFSU2_TR(0x4eb63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb63b:{NFSU2_TR(0x4eb63b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb640:L4eb640:{c.instructions+=2;NFSU2_TR(0x4eb640);
u8 U[4];
w4(U+0,u32(0x797cccull));
s4(u32(r4(R+4)),r4(U+0));
}
B4eb646:{NFSU2_TR(0x4eb646);
TAIL_STATIC(0x4defb0u,4de);
}
B4eb650:L4eb650:{c.instructions+=8;NFSU2_TR(0x4eb650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb652:{NFSU2_TR(0x4eb652);
u8 U[4];
w4(U+0,u32(0x776164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb657:{NFSU2_TR(0x4eb657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb65d:{NFSU2_TR(0x4eb65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb65e:{NFSU2_TR(0x4eb65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb665:{NFSU2_TR(0x4eb665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb666:{NFSU2_TR(0x4eb666);
u8 U[4];
w4(U+0,u32(0x15cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb66b:{NFSU2_TR(0x4eb66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb670ull));
TAIL_STATIC(0x575620u,575);
}
B4eb670:L4eb670:{c.instructions+=5;NFSU2_TR(0x4eb670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb673:{NFSU2_TR(0x4eb673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4eb677:{NFSU2_TR(0x4eb677);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb679:{NFSU2_TR(0x4eb679);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb681:{NFSU2_TR(0x4eb681);
if(r1(R+518)){{goto L4eb69e;}}
}
B4eb683:L4eb683:{c.instructions+=4;NFSU2_TR(0x4eb683);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb687:{NFSU2_TR(0x4eb687);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb688:{NFSU2_TR(0x4eb688);
__builtin_memmove((R+4),(R+0),4);
}
B4eb68a:{NFSU2_TR(0x4eb68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb68full));
TAIL_STATIC(0x4d93c0u,4d9);
}
B4eb68f:L4eb68f:{c.instructions+=4;NFSU2_TR(0x4eb68f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb693:{NFSU2_TR(0x4eb693);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb69a:{NFSU2_TR(0x4eb69a);
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
B4eb69d:{NFSU2_TR(0x4eb69d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb69e:L4eb69e:{c.instructions+=5;NFSU2_TR(0x4eb69e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb6a2:{NFSU2_TR(0x4eb6a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eb6a4:{NFSU2_TR(0x4eb6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb6ab:{NFSU2_TR(0x4eb6ab);
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
B4eb6ae:{NFSU2_TR(0x4eb6ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb6b0:L4eb6b0:{c.instructions+=3;NFSU2_TR(0x4eb6b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb6b1:{NFSU2_TR(0x4eb6b1);
__builtin_memmove((R+24),(R+4),4);
}
B4eb6b3:{NFSU2_TR(0x4eb6b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb6b8ull));
TAIL_STATIC(0x4d9470u,4d9);
}
B4eb6b8:L4eb6b8:{c.instructions+=2;NFSU2_TR(0x4eb6b8);
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
B4eb6bd:{NFSU2_TR(0x4eb6bd);
if(r1(R+518)){{goto L4eb6c8;}}
}
B4eb6bf:L4eb6bf:{c.instructions+=2;NFSU2_TR(0x4eb6bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb6c0:{NFSU2_TR(0x4eb6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb6c5ull));
TAIL_STATIC(0x575630u,575);
}
B4eb6c5:L4eb6c5:{c.instructions+=1;NFSU2_TR(0x4eb6c5);
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
B4eb6c8:L4eb6c8:{c.instructions+=3;NFSU2_TR(0x4eb6c8);
__builtin_memmove((R+0),(R+24),4);
}
B4eb6ca:{NFSU2_TR(0x4eb6ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb6cb:{NFSU2_TR(0x4eb6cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb6d0:L4eb6d0:{c.instructions+=3;NFSU2_TR(0x4eb6d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb6d1:{NFSU2_TR(0x4eb6d1);
__builtin_memmove((R+24),(R+4),4);
}
B4eb6d3:{NFSU2_TR(0x4eb6d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb6d8ull));
{goto L4eb6f0;}
}
B4eb6d8:L4eb6d8:{c.instructions+=2;NFSU2_TR(0x4eb6d8);
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
B4eb6dd:{NFSU2_TR(0x4eb6dd);
if(r1(R+518)){{goto L4eb6e8;}}
}
B4eb6df:L4eb6df:{c.instructions+=2;NFSU2_TR(0x4eb6df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb6e0:{NFSU2_TR(0x4eb6e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb6e5ull));
TAIL_STATIC(0x575630u,575);
}
B4eb6e5:L4eb6e5:{c.instructions+=1;NFSU2_TR(0x4eb6e5);
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
B4eb6e8:L4eb6e8:{c.instructions+=3;NFSU2_TR(0x4eb6e8);
__builtin_memmove((R+0),(R+24),4);
}
B4eb6ea:{NFSU2_TR(0x4eb6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb6eb:{NFSU2_TR(0x4eb6eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb6f0:L4eb6f0:{c.instructions+=2;NFSU2_TR(0x4eb6f0);
u8 U[4];
w4(U+0,u32(0x797cf8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4eb6f6:{NFSU2_TR(0x4eb6f6);
TAIL_STATIC(0x4defb0u,4de);
}
B4eb700:L4eb700:{c.instructions+=13;NFSU2_TR(0x4eb700);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb702:{NFSU2_TR(0x4eb702);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb707:{NFSU2_TR(0x4eb707);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb70d:{NFSU2_TR(0x4eb70d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb70e:{NFSU2_TR(0x4eb70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb715:{NFSU2_TR(0x4eb715);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb716:{NFSU2_TR(0x4eb716);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb71a:{NFSU2_TR(0x4eb71a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb71b:{NFSU2_TR(0x4eb71b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb71c:{NFSU2_TR(0x4eb71c);
__builtin_memmove((R+24),(R+4),4);
}
B4eb71e:{NFSU2_TR(0x4eb71e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb71f:{NFSU2_TR(0x4eb71f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb723:{NFSU2_TR(0x4eb723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb728ull));
TAIL_STATIC(0x552330u,552);
}
B4eb728:L4eb728:{c.instructions+=4;NFSU2_TR(0x4eb728);
__builtin_memmove((R+4),(R+24),4);
}
B4eb72a:{NFSU2_TR(0x4eb72a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb732:{NFSU2_TR(0x4eb732);
u8 U[4];
w4(U+0,u32(0x797d14ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4eb738:{NFSU2_TR(0x4eb738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb73dull));
TAIL_STATIC(0x4c58b0u,4c5);
}
B4eb73d:L4eb73d:{c.instructions+=3;NFSU2_TR(0x4eb73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eb740:{NFSU2_TR(0x4eb740);
u8 U[4];
w4(U+0,u32(0xbcb18f38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb745:{NFSU2_TR(0x4eb745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb74aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4eb74a:L4eb74a:{c.instructions+=4;NFSU2_TR(0x4eb74a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb74b:{NFSU2_TR(0x4eb74b);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb750:{NFSU2_TR(0x4eb750);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb751:{NFSU2_TR(0x4eb751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb756ull));
TAIL_STATIC(0x537b80u,537);
}
B4eb756:L4eb756:{c.instructions+=8;NFSU2_TR(0x4eb756);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb75a:{NFSU2_TR(0x4eb75a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eb75d:{NFSU2_TR(0x4eb75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb75e:{NFSU2_TR(0x4eb75e);
__builtin_memmove((R+0),(R+24),4);
}
B4eb760:{NFSU2_TR(0x4eb760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb761:{NFSU2_TR(0x4eb761);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb768:{NFSU2_TR(0x4eb768);
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
B4eb76b:{NFSU2_TR(0x4eb76b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb770:L4eb770:{c.instructions+=3;NFSU2_TR(0x4eb770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb771:{NFSU2_TR(0x4eb771);
__builtin_memmove((R+24),(R+4),4);
}
B4eb773:{NFSU2_TR(0x4eb773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb778ull));
{goto L4eb790;}
}
B4eb778:L4eb778:{c.instructions+=2;NFSU2_TR(0x4eb778);
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
B4eb77d:{NFSU2_TR(0x4eb77d);
if(r1(R+518)){{goto L4eb788;}}
}
B4eb77f:L4eb77f:{c.instructions+=2;NFSU2_TR(0x4eb77f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb780:{NFSU2_TR(0x4eb780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb785ull));
TAIL_STATIC(0x575630u,575);
}
B4eb785:L4eb785:{c.instructions+=1;NFSU2_TR(0x4eb785);
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
B4eb788:L4eb788:{c.instructions+=3;NFSU2_TR(0x4eb788);
__builtin_memmove((R+0),(R+24),4);
}
B4eb78a:{NFSU2_TR(0x4eb78a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb78b:{NFSU2_TR(0x4eb78b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb790:L4eb790:{c.instructions+=2;NFSU2_TR(0x4eb790);
u8 U[4];
w4(U+0,u32(0x797d14ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4eb796:{NFSU2_TR(0x4eb796);
TAIL_STATIC(0x4defb0u,4de);
}
B4eb7a0:L4eb7a0:{c.instructions+=13;NFSU2_TR(0x4eb7a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7a2:{NFSU2_TR(0x4eb7a2);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7a7:{NFSU2_TR(0x4eb7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb7ad:{NFSU2_TR(0x4eb7ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7ae:{NFSU2_TR(0x4eb7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb7b5:{NFSU2_TR(0x4eb7b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7b6:{NFSU2_TR(0x4eb7b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb7ba:{NFSU2_TR(0x4eb7ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7bb:{NFSU2_TR(0x4eb7bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7bc:{NFSU2_TR(0x4eb7bc);
__builtin_memmove((R+24),(R+4),4);
}
B4eb7be:{NFSU2_TR(0x4eb7be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7bf:{NFSU2_TR(0x4eb7bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb7c3:{NFSU2_TR(0x4eb7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb7c8ull));
TAIL_STATIC(0x552330u,552);
}
B4eb7c8:L4eb7c8:{c.instructions+=4;NFSU2_TR(0x4eb7c8);
__builtin_memmove((R+4),(R+24),4);
}
B4eb7ca:{NFSU2_TR(0x4eb7ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb7d2:{NFSU2_TR(0x4eb7d2);
u8 U[4];
w4(U+0,u32(0x797d30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4eb7d8:{NFSU2_TR(0x4eb7d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb7ddull));
TAIL_STATIC(0x4c5a40u,4c5);
}
B4eb7dd:L4eb7dd:{c.instructions+=3;NFSU2_TR(0x4eb7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eb7e0:{NFSU2_TR(0x4eb7e0);
u8 U[4];
w4(U+0,u32(0x4af2e79eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7e5:{NFSU2_TR(0x4eb7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb7eaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4eb7ea:L4eb7ea:{c.instructions+=4;NFSU2_TR(0x4eb7ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7eb:{NFSU2_TR(0x4eb7eb);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7f0:{NFSU2_TR(0x4eb7f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb7f1:{NFSU2_TR(0x4eb7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb7f6ull));
TAIL_STATIC(0x537b80u,537);
}
B4eb7f6:L4eb7f6:{c.instructions+=8;NFSU2_TR(0x4eb7f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb7fa:{NFSU2_TR(0x4eb7fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eb7fd:{NFSU2_TR(0x4eb7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb7fe:{NFSU2_TR(0x4eb7fe);
__builtin_memmove((R+0),(R+24),4);
}
B4eb800:{NFSU2_TR(0x4eb800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb801:{NFSU2_TR(0x4eb801);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb808:{NFSU2_TR(0x4eb808);
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
B4eb80b:{NFSU2_TR(0x4eb80b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb810:L4eb810:{c.instructions+=3;NFSU2_TR(0x4eb810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb811:{NFSU2_TR(0x4eb811);
__builtin_memmove((R+24),(R+4),4);
}
B4eb813:{NFSU2_TR(0x4eb813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb818ull));
{goto L4eb830;}
}
B4eb818:L4eb818:{c.instructions+=2;NFSU2_TR(0x4eb818);
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
B4eb81d:{NFSU2_TR(0x4eb81d);
if(r1(R+518)){{goto L4eb828;}}
}
B4eb81f:L4eb81f:{c.instructions+=2;NFSU2_TR(0x4eb81f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb820:{NFSU2_TR(0x4eb820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb825ull));
TAIL_STATIC(0x575630u,575);
}
B4eb825:L4eb825:{c.instructions+=1;NFSU2_TR(0x4eb825);
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
B4eb828:L4eb828:{c.instructions+=3;NFSU2_TR(0x4eb828);
__builtin_memmove((R+0),(R+24),4);
}
B4eb82a:{NFSU2_TR(0x4eb82a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb82b:{NFSU2_TR(0x4eb82b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb830:L4eb830:{c.instructions+=2;NFSU2_TR(0x4eb830);
u8 U[4];
w4(U+0,u32(0x797d30ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4eb836:{NFSU2_TR(0x4eb836);
TAIL_STATIC(0x4defb0u,4de);
}
B4eb840:L4eb840:{c.instructions+=8;NFSU2_TR(0x4eb840);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4eb845:{NFSU2_TR(0x4eb845);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb846:{NFSU2_TR(0x4eb846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb847:{NFSU2_TR(0x4eb847);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4eb849:{NFSU2_TR(0x4eb849);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb84b:{NFSU2_TR(0x4eb84b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb84c:{NFSU2_TR(0x4eb84c);
__builtin_memmove((R+24),(R+4),4);
}
B4eb84e:{NFSU2_TR(0x4eb84e);
if(r1(R+518)){{goto L4eb86d;}}
}
B4eb850:L4eb850:{c.instructions+=7;NFSU2_TR(0x4eb850);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb853:{NFSU2_TR(0x4eb853);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4eb858:{NFSU2_TR(0x4eb858);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb85b:{NFSU2_TR(0x4eb85b);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4eb861:{NFSU2_TR(0x4eb861);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb864:{NFSU2_TR(0x4eb864);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4eb86a:{NFSU2_TR(0x4eb86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb86d:L4eb86d:{c.instructions+=6;NFSU2_TR(0x4eb86d);
u8 U[4];
w4(U+0,u32(0x79656cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb872:{NFSU2_TR(0x4eb872);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb875:{NFSU2_TR(0x4eb875);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb87a:{NFSU2_TR(0x4eb87a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb87b:{NFSU2_TR(0x4eb87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb87e:{NFSU2_TR(0x4eb87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb883ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4eb883:L4eb883:{c.instructions+=10;NFSU2_TR(0x4eb883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb886:{NFSU2_TR(0x4eb886);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb889:{NFSU2_TR(0x4eb889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb88c:{NFSU2_TR(0x4eb88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb893:{NFSU2_TR(0x4eb893);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4eb897:{NFSU2_TR(0x4eb897);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb89a:{NFSU2_TR(0x4eb89a);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B4eb89f:{NFSU2_TR(0x4eb89f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eb8a2:{NFSU2_TR(0x4eb8a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb8a4:{NFSU2_TR(0x4eb8a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb8b4;}}
}
B4eb8a6:L4eb8a6:{c.instructions+=4;NFSU2_TR(0x4eb8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb8a9:{NFSU2_TR(0x4eb8a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8aa:{NFSU2_TR(0x4eb8aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8ab:{NFSU2_TR(0x4eb8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb8b0ull));
TAIL_STATIC(0x6fbf76u,6fb);
}
B4eb8b0:L4eb8b0:{c.instructions+=4;NFSU2_TR(0x4eb8b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb8b1:{NFSU2_TR(0x4eb8b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb8b2:{NFSU2_TR(0x4eb8b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eb8b3:{NFSU2_TR(0x4eb8b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb8b4:L4eb8b4:{c.instructions+=3;NFSU2_TR(0x4eb8b4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8b6:{NFSU2_TR(0x4eb8b6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8b8:{NFSU2_TR(0x4eb8b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb8bdull));
TAIL_STATIC(0x57e3b0u,57e);
}
B4eb8bd:L4eb8bd:{c.instructions+=2;NFSU2_TR(0x4eb8bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8be:{NFSU2_TR(0x4eb8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb8c3ull));
TAIL_STATIC(0x4d9db0u,4d9);
}
B4eb8c3:L4eb8c3:{c.instructions+=5;NFSU2_TR(0x4eb8c3);
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
B4eb8c6:{NFSU2_TR(0x4eb8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb8c7:{NFSU2_TR(0x4eb8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb8c8:{NFSU2_TR(0x4eb8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eb8c9:{NFSU2_TR(0x4eb8c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb8d0:L4eb8d0:{c.instructions+=12;NFSU2_TR(0x4eb8d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8d1:{NFSU2_TR(0x4eb8d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8d2:{NFSU2_TR(0x4eb8d2);
__builtin_memmove((R+24),(R+4),4);
}
B4eb8d4:{NFSU2_TR(0x4eb8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb8d7:{NFSU2_TR(0x4eb8d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8d8:{NFSU2_TR(0x4eb8d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8d9:{NFSU2_TR(0x4eb8d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb8dc:{NFSU2_TR(0x4eb8dc);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8e1:{NFSU2_TR(0x4eb8e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4eb8e3:{NFSU2_TR(0x4eb8e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb8e4:{NFSU2_TR(0x4eb8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb8e7:{NFSU2_TR(0x4eb8e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb8ecull));
TAIL_STATIC(0x43dda0u,43d);
}
B4eb8ec:L4eb8ec:{c.instructions+=10;NFSU2_TR(0x4eb8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb8ef:{NFSU2_TR(0x4eb8ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb8f2:{NFSU2_TR(0x4eb8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb8f5:{NFSU2_TR(0x4eb8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb8fc:{NFSU2_TR(0x4eb8fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4eb900:{NFSU2_TR(0x4eb900);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4eb903:{NFSU2_TR(0x4eb903);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B4eb908:{NFSU2_TR(0x4eb908);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eb90b:{NFSU2_TR(0x4eb90b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb90d:{NFSU2_TR(0x4eb90d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eb91d;}}
}
B4eb90f:L4eb90f:{c.instructions+=4;NFSU2_TR(0x4eb90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb912:{NFSU2_TR(0x4eb912);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb913:{NFSU2_TR(0x4eb913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb914:{NFSU2_TR(0x4eb914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb919ull));
TAIL_STATIC(0x6fbf76u,6fb);
}
B4eb919:L4eb919:{c.instructions+=4;NFSU2_TR(0x4eb919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb91a:{NFSU2_TR(0x4eb91a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb91b:{NFSU2_TR(0x4eb91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eb91c:{NFSU2_TR(0x4eb91c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb91d:L4eb91d:{c.instructions+=3;NFSU2_TR(0x4eb91d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb91f:{NFSU2_TR(0x4eb91f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb921:{NFSU2_TR(0x4eb921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb926ull));
TAIL_STATIC(0x57e3b0u,57e);
}
B4eb926:L4eb926:{c.instructions+=2;NFSU2_TR(0x4eb926);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb927:{NFSU2_TR(0x4eb927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb92cull));
TAIL_STATIC(0x4d9db0u,4d9);
}
B4eb92c:L4eb92c:{c.instructions+=5;NFSU2_TR(0x4eb92c);
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
B4eb92f:{NFSU2_TR(0x4eb92f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eb930:{NFSU2_TR(0x4eb930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb931:{NFSU2_TR(0x4eb931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eb932:{NFSU2_TR(0x4eb932);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb940:L4eb940:{c.instructions+=13;NFSU2_TR(0x4eb940);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb942:{NFSU2_TR(0x4eb942);
u8 U[4];
w4(U+0,u32(0x77619bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb947:{NFSU2_TR(0x4eb947);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb94d:{NFSU2_TR(0x4eb94d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb94e:{NFSU2_TR(0x4eb94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb955:{NFSU2_TR(0x4eb955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb956:{NFSU2_TR(0x4eb956);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb957:{NFSU2_TR(0x4eb957);
__builtin_memmove((R+24),(R+4),4);
}
B4eb959:{NFSU2_TR(0x4eb959);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb95d:{NFSU2_TR(0x4eb95d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eb95f:{NFSU2_TR(0x4eb95f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb960:{NFSU2_TR(0x4eb960);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb968:{NFSU2_TR(0x4eb968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb96dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4eb96d:L4eb96d:{c.instructions+=7;NFSU2_TR(0x4eb96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb974:{NFSU2_TR(0x4eb974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb97b:{NFSU2_TR(0x4eb97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb97e:{NFSU2_TR(0x4eb97e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B4eb981:{NFSU2_TR(0x4eb981);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb984:{NFSU2_TR(0x4eb984);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb986:{NFSU2_TR(0x4eb986);
if(r1(R+518)){{goto L4eb9ae;}}
}
B4eb988:L4eb988:{c.instructions+=4;NFSU2_TR(0x4eb988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eb98a:{NFSU2_TR(0x4eb98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb98d:{NFSU2_TR(0x4eb98d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb98e:{NFSU2_TR(0x4eb98e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb993ull));
TAIL_STATIC(0x575630u,575);
}
B4eb993:L4eb993:{c.instructions+=7;NFSU2_TR(0x4eb993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eb995:{NFSU2_TR(0x4eb995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4eb997:{NFSU2_TR(0x4eb997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eb99a:{NFSU2_TR(0x4eb99a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4eb99c:{NFSU2_TR(0x4eb99c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb99d:{NFSU2_TR(0x4eb99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb9a0:{NFSU2_TR(0x4eb9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb9a5ull));
TAIL_STATIC(0x440ef0u,440);
}
B4eb9a5:L4eb9a5:{c.instructions+=4;NFSU2_TR(0x4eb9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eb9a7:{NFSU2_TR(0x4eb9a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eb9aa:{NFSU2_TR(0x4eb9aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb9ac:{NFSU2_TR(0x4eb9ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eb988u);}goto L4eb988;}}
}
B4eb9ae:L4eb9ae:{c.instructions+=4;NFSU2_TR(0x4eb9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eb9b0:{NFSU2_TR(0x4eb9b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb9b2:{NFSU2_TR(0x4eb9b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eb9ba:{NFSU2_TR(0x4eb9ba);
if(r1(R+518)){{goto L4eb9d9;}}
}
B4eb9bc:L4eb9bc:{c.instructions+=1;NFSU2_TR(0x4eb9bc);
__builtin_memmove((R+16),(R+16),4);
}
B4eb9c0:L4eb9c0:{c.instructions+=6;NFSU2_TR(0x4eb9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4eb9c2:{NFSU2_TR(0x4eb9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eb9c5:{NFSU2_TR(0x4eb9c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4eb9c7:{NFSU2_TR(0x4eb9c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb9c8:{NFSU2_TR(0x4eb9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb9cb:{NFSU2_TR(0x4eb9cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eb9d0ull));
TAIL_STATIC(0x440ef0u,440);
}
B4eb9d0:L4eb9d0:{c.instructions+=4;NFSU2_TR(0x4eb9d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eb9d2:{NFSU2_TR(0x4eb9d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eb9d5:{NFSU2_TR(0x4eb9d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eb9d7:{NFSU2_TR(0x4eb9d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eb9c0u);}goto L4eb9c0;}}
}
B4eb9d9:L4eb9d9:{c.instructions+=5;NFSU2_TR(0x4eb9d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eb9dd:{NFSU2_TR(0x4eb9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eb9de:{NFSU2_TR(0x4eb9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eb9e5:{NFSU2_TR(0x4eb9e5);
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
B4eb9e8:{NFSU2_TR(0x4eb9e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eb9f0:L4eb9f0:{c.instructions+=7;NFSU2_TR(0x4eb9f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb9f1:{NFSU2_TR(0x4eb9f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eb9f2:{NFSU2_TR(0x4eb9f2);
__builtin_memmove((R+24),(R+4),4);
}
B4eb9f4:{NFSU2_TR(0x4eb9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eb9f7:{NFSU2_TR(0x4eb9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eb9f9:{NFSU2_TR(0x4eb9f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eb9fc:{NFSU2_TR(0x4eb9fc);
if(r1(R+518)){{goto L4eba15;}}
}
B4eb9fe:L4eb9fe:{c.instructions+=2;NFSU2_TR(0x4eb9fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eba03:{NFSU2_TR(0x4eba03);
if(r1(R+518)){{goto L4eba15;}}
}
B4eba05:L4eba05:{c.instructions+=4;NFSU2_TR(0x4eba05);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eba09:{NFSU2_TR(0x4eba09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eba0a:{NFSU2_TR(0x4eba0a);
__builtin_memmove((R+4),(R+12),4);
}
B4eba0c:{NFSU2_TR(0x4eba0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eba11ull));
TAIL_STATIC(0x577310u,577);
}
B4eba11:L4eba11:{c.instructions+=2;NFSU2_TR(0x4eba11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eba13:{NFSU2_TR(0x4eba13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eba66;}}
}
B4eba15:L4eba15:{c.instructions+=3;NFSU2_TR(0x4eba15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eba18:{NFSU2_TR(0x4eba18);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eba1a:{NFSU2_TR(0x4eba1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4eba66;}}
}
B4eba1c:L4eba1c:{c.instructions+=7;NFSU2_TR(0x4eba1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eba1f:{NFSU2_TR(0x4eba1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4eba21:{NFSU2_TR(0x4eba21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eba22:{NFSU2_TR(0x4eba22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eba25:{NFSU2_TR(0x4eba25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eba26:{NFSU2_TR(0x4eba26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eba27:{NFSU2_TR(0x4eba27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eba2cull));
TAIL_STATIC(0x537be0u,537);
}
B4eba2c:L4eba2c:{c.instructions+=4;NFSU2_TR(0x4eba2c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4eba2f:{NFSU2_TR(0x4eba2f);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4eba35:{NFSU2_TR(0x4eba35);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4eba3b:{NFSU2_TR(0x4eba3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eba40ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4eba40:L4eba40:{c.instructions+=3;NFSU2_TR(0x4eba40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eba41:{NFSU2_TR(0x4eba41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4eba43:{NFSU2_TR(0x4eba43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eba48ull));
TAIL_STATIC(0x575630u,575);
}
B4eba48:L4eba48:{c.instructions+=7;NFSU2_TR(0x4eba48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eba4b:{NFSU2_TR(0x4eba4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4eba4d:{NFSU2_TR(0x4eba4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eba50:{NFSU2_TR(0x4eba50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4eba52:{NFSU2_TR(0x4eba52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eba53:{NFSU2_TR(0x4eba53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eba56:{NFSU2_TR(0x4eba56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eba5bull));
TAIL_STATIC(0x440ef0u,440);
}
B4eba5b:L4eba5b:{c.instructions+=5;NFSU2_TR(0x4eba5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eba5e:{NFSU2_TR(0x4eba5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eba61:{NFSU2_TR(0x4eba61);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4eba62:{NFSU2_TR(0x4eba62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eba65:{NFSU2_TR(0x4eba65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eba66:L4eba66:{c.instructions+=3;NFSU2_TR(0x4eba66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eba68:{NFSU2_TR(0x4eba68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eba6a:{NFSU2_TR(0x4eba6a);
if(r1(R+518)){{goto L4eba8c;}}
}
B4eba6c:L4eba6c:{c.instructions+=2;NFSU2_TR(0x4eba6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xc18c12fdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4eba73:{NFSU2_TR(0x4eba73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eba8c;}}
}
B4eba75:L4eba75:{c.instructions+=4;NFSU2_TR(0x4eba75);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4eba7b:{NFSU2_TR(0x4eba7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4eba7d:{NFSU2_TR(0x4eba7d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eba80:{NFSU2_TR(0x4eba80);
if(r1(R+518)){{goto L4ebaa1;}}
}
B4eba82:L4eba82:{c.instructions+=2;NFSU2_TR(0x4eba82);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eba85:{NFSU2_TR(0x4eba85);
if(r1(R+518)){{goto L4ebaa1;}}
}
B4eba87:L4eba87:{c.instructions+=2;NFSU2_TR(0x4eba87);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eba8a:{NFSU2_TR(0x4eba8a);
if(r1(R+518)){{goto L4ebaa1;}}
}
B4eba8c:L4eba8c:{c.instructions+=3;NFSU2_TR(0x4eba8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eba8f:{NFSU2_TR(0x4eba8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eba91:{NFSU2_TR(0x4eba91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebaaf;}}
}
B4eba93:L4eba93:{c.instructions+=3;NFSU2_TR(0x4eba93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4eba95:{NFSU2_TR(0x4eba95);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eba97:{NFSU2_TR(0x4eba97);
if(r1(R+518)){{goto L4ebaa1;}}
}
B4eba99:L4eba99:{c.instructions+=2;NFSU2_TR(0x4eba99);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eba9f:{NFSU2_TR(0x4eba9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebaaf;}}
}
B4ebaa1:L4ebaa1:{c.instructions+=2;NFSU2_TR(0x4ebaa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebaa2:{NFSU2_TR(0x4ebaa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebaa7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ebaa7:L4ebaa7:{c.instructions+=4;NFSU2_TR(0x4ebaa7);
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
B4ebaaa:{NFSU2_TR(0x4ebaaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebaab:{NFSU2_TR(0x4ebaab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ebaac:{NFSU2_TR(0x4ebaac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ebaaf:L4ebaaf:{c.instructions+=2;NFSU2_TR(0x4ebaaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebab0:{NFSU2_TR(0x4ebab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebab5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ebab5:L4ebab5:{c.instructions+=4;NFSU2_TR(0x4ebab5);
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
B4ebab8:{NFSU2_TR(0x4ebab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebab9:{NFSU2_TR(0x4ebab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ebaba:{NFSU2_TR(0x4ebaba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ebac0:L4ebac0:{c.instructions+=7;NFSU2_TR(0x4ebac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebac1:{NFSU2_TR(0x4ebac1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebac2:{NFSU2_TR(0x4ebac2);
__builtin_memmove((R+24),(R+4),4);
}
B4ebac4:{NFSU2_TR(0x4ebac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebac7:{NFSU2_TR(0x4ebac7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ebaca:{NFSU2_TR(0x4ebaca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebacb:{NFSU2_TR(0x4ebacb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebadd;}}
}
B4ebacd:L4ebacd:{c.instructions+=4;NFSU2_TR(0x4ebacd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebacf:{NFSU2_TR(0x4ebacf);
__builtin_memmove((R+4),(R+24),4);
}
B4ebad1:{NFSU2_TR(0x4ebad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ebad8:{NFSU2_TR(0x4ebad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebaddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eb9f0u);}goto L4eb9f0;}
}
B4ebadd:L4ebadd:{c.instructions+=3;NFSU2_TR(0x4ebadd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ebae1:{NFSU2_TR(0x4ebae1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebae2:{NFSU2_TR(0x4ebae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebae7ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ebae7:L4ebae7:{c.instructions+=3;NFSU2_TR(0x4ebae7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ebae8:{NFSU2_TR(0x4ebae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebae9:{NFSU2_TR(0x4ebae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebaeeull));
TAIL_STATIC(0x575620u,575);
}
B4ebaee:L4ebaee:{c.instructions+=4;NFSU2_TR(0x4ebaee);
__builtin_memmove((R+28),(R+0),4);
}
B4ebaf0:{NFSU2_TR(0x4ebaf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebaf1:{NFSU2_TR(0x4ebaf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebaf2:{NFSU2_TR(0x4ebaf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebaf7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4ebaf7:L4ebaf7:{c.instructions+=4;NFSU2_TR(0x4ebaf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ebafa:{NFSU2_TR(0x4ebafa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebafb:{NFSU2_TR(0x4ebafb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ebafe:{NFSU2_TR(0x4ebafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb03ull));
TAIL_STATIC(0x479130u,479);
}
B4ebb03:L4ebb03:{c.instructions+=7;NFSU2_TR(0x4ebb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebb06:{NFSU2_TR(0x4ebb06);
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
B4ebb07:{NFSU2_TR(0x4ebb07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ebb08:{NFSU2_TR(0x4ebb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebb0b:{NFSU2_TR(0x4ebb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebb0c:{NFSU2_TR(0x4ebb0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ebb0d:{NFSU2_TR(0x4ebb0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ebb10:L4ebb10:{c.instructions+=13;NFSU2_TR(0x4ebb10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4ebb13:{NFSU2_TR(0x4ebb13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb14:{NFSU2_TR(0x4ebb14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb15:{NFSU2_TR(0x4ebb15);
__builtin_memmove((R+24),(R+4),4);
}
B4ebb17:{NFSU2_TR(0x4ebb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebb1a:{NFSU2_TR(0x4ebb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ebb1d:{NFSU2_TR(0x4ebb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebb20:{NFSU2_TR(0x4ebb20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb21:{NFSU2_TR(0x4ebb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ebb24:{NFSU2_TR(0x4ebb24);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4ebb26:{NFSU2_TR(0x4ebb26);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4ebb28:{NFSU2_TR(0x4ebb28);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ebb2a:{NFSU2_TR(0x4ebb2a);
if(r1(R+518)){{goto L4ebda3;}}
}
B4ebb30:L4ebb30:{c.instructions+=6;NFSU2_TR(0x4ebb30);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4ebb35:{NFSU2_TR(0x4ebb35);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebb37:{NFSU2_TR(0x4ebb37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb38:{NFSU2_TR(0x4ebb38);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ebb3c:{NFSU2_TR(0x4ebb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ebb3f:{NFSU2_TR(0x4ebb3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebb4e;}}
}
B4ebb41:L4ebb41:{c.instructions+=3;NFSU2_TR(0x4ebb41);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4ebb46:{NFSU2_TR(0x4ebb46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ebb48:{NFSU2_TR(0x4ebb48);
if(r1(R+518)){{goto L4ebc9c;}}
}
B4ebb4e:L4ebb4e:{c.instructions+=3;NFSU2_TR(0x4ebb4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb50:{NFSU2_TR(0x4ebb50);
w4(R+4,u32(0x864630ull));
}
B4ebb55:{NFSU2_TR(0x4ebb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb5aull));
TAIL_STATIC(0x43be80u,43b);
}
B4ebb5a:L4ebb5a:{c.instructions+=6;NFSU2_TR(0x4ebb5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebb5d:{NFSU2_TR(0x4ebb5d);
w4(R+0,u32(r1(R+0)));
}
B4ebb60:{NFSU2_TR(0x4ebb60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb61:{NFSU2_TR(0x4ebb61);
u8 U[4];
w4(U+0,u32(0x797d4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb66:{NFSU2_TR(0x4ebb66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb67:{NFSU2_TR(0x4ebb67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb6cull));
TAIL_STATIC(0x537be0u,537);
}
B4ebb6c:L4ebb6c:{c.instructions+=3;NFSU2_TR(0x4ebb6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4ebb70:{NFSU2_TR(0x4ebb70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb71:{NFSU2_TR(0x4ebb71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb76ull));
TAIL_STATIC(0x56dd90u,56d);
}
B4ebb76:L4ebb76:{c.instructions+=3;NFSU2_TR(0x4ebb76);
__builtin_memmove((R+28),(R+0),4);
}
B4ebb78:{NFSU2_TR(0x4ebb78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb79:{NFSU2_TR(0x4ebb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb7eull));
TAIL_STATIC(0x4ffaa0u,4ff);
}
B4ebb7e:L4ebb7e:{c.instructions+=5;NFSU2_TR(0x4ebb7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb7f:{NFSU2_TR(0x4ebb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebb82:{NFSU2_TR(0x4ebb82);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb87:{NFSU2_TR(0x4ebb87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb88:{NFSU2_TR(0x4ebb88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb8dull));
TAIL_STATIC(0x537be0u,537);
}
B4ebb8d:L4ebb8d:{c.instructions+=5;NFSU2_TR(0x4ebb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebb90:{NFSU2_TR(0x4ebb90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb91:{NFSU2_TR(0x4ebb91);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb96:{NFSU2_TR(0x4ebb96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebb97:{NFSU2_TR(0x4ebb97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebb9cull));
TAIL_STATIC(0x537be0u,537);
}
B4ebb9c:L4ebb9c:{c.instructions+=3;NFSU2_TR(0x4ebb9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4ebb9f:{NFSU2_TR(0x4ebb9f);
w4(R+4,u32(0x89cf48ull));
}
B4ebba4:{NFSU2_TR(0x4ebba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebba9ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4ebba9:L4ebba9:{c.instructions+=2;NFSU2_TR(0x4ebba9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebbab:{NFSU2_TR(0x4ebbab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebd93;}}
}
B4ebbb1:L4ebbb1:{c.instructions+=6;NFSU2_TR(0x4ebbb1);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4ebbb7:{NFSU2_TR(0x4ebbb7);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ebbba:{NFSU2_TR(0x4ebbba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ebbc0:{NFSU2_TR(0x4ebbc0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ebbc2:{NFSU2_TR(0x4ebbc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebbc5:{NFSU2_TR(0x4ebbc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebc8b;}}
}
B4ebbcb:L4ebbcb:{c.instructions+=11;NFSU2_TR(0x4ebbcb);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4ebbd1:{NFSU2_TR(0x4ebbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ebbd4:{NFSU2_TR(0x4ebbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebbd7:{NFSU2_TR(0x4ebbd7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B4ebbd9:{NFSU2_TR(0x4ebbd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebbdd:{NFSU2_TR(0x4ebbdd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ebbe1:{NFSU2_TR(0x4ebbe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebbe2:{NFSU2_TR(0x4ebbe2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ebbe8:{NFSU2_TR(0x4ebbe8);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ebbeb:{NFSU2_TR(0x4ebbeb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ebbef:{NFSU2_TR(0x4ebbef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebbf4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ebbf4:L4ebbf4:{c.instructions+=5;NFSU2_TR(0x4ebbf4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ebbf8:{NFSU2_TR(0x4ebbf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebbfb:{NFSU2_TR(0x4ebbfb);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ebc01:{NFSU2_TR(0x4ebc01);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ebc07:{NFSU2_TR(0x4ebc07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc0cull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ebc0c:L4ebc0c:{c.instructions+=6;NFSU2_TR(0x4ebc0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc0e:{NFSU2_TR(0x4ebc0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ebc12:{NFSU2_TR(0x4ebc12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc13:{NFSU2_TR(0x4ebc13);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ebc17:{NFSU2_TR(0x4ebc17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebc1b:{NFSU2_TR(0x4ebc1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc20ull));
TAIL_STATIC(0x577240u,577);
}
B4ebc20:L4ebc20:{c.instructions+=6;NFSU2_TR(0x4ebc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebc23:{NFSU2_TR(0x4ebc23);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ebc27:{NFSU2_TR(0x4ebc27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc28:{NFSU2_TR(0x4ebc28);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc2d:{NFSU2_TR(0x4ebc2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc2e:{NFSU2_TR(0x4ebc2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc33ull));
TAIL_STATIC(0x537be0u,537);
}
B4ebc33:L4ebc33:{c.instructions+=3;NFSU2_TR(0x4ebc33);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ebc37:{NFSU2_TR(0x4ebc37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ebc3a:{NFSU2_TR(0x4ebc3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc3full));
TAIL_STATIC(0x75bed4u,75b);
}
B4ebc3f:L4ebc3f:{c.instructions+=3;NFSU2_TR(0x4ebc3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebc43:{NFSU2_TR(0x4ebc43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ebc48:{NFSU2_TR(0x4ebc48);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4ebc4f;}}
}
B4ebc4a:L4ebc4a:{c.instructions+=3;NFSU2_TR(0x4ebc4a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ebc4b:{NFSU2_TR(0x4ebc4b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B4ebc4e:{NFSU2_TR(0x4ebc4e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ebc4f:L4ebc4f:{c.instructions+=1;NFSU2_TR(0x4ebc4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebd93;}}
}
B4ebc55:L4ebc55:{c.instructions+=7;NFSU2_TR(0x4ebc55);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ebc59:{NFSU2_TR(0x4ebc59);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ebc5d:{NFSU2_TR(0x4ebc5d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4ebc5f:{NFSU2_TR(0x4ebc5f);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ebc65:{NFSU2_TR(0x4ebc65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ebc67:{NFSU2_TR(0x4ebc67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ebc6a:{NFSU2_TR(0x4ebc6a);
if(r1(R+514)){{goto L4ebd93;}}
}
B4ebc70:L4ebc70:{c.instructions+=2;NFSU2_TR(0x4ebc70);
u8 U[4];
w4(U+0,u32(0x862a0519ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc75:{NFSU2_TR(0x4ebc75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc7aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ebc7a:L4ebc7a:{c.instructions+=4;NFSU2_TR(0x4ebc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebc7d:{NFSU2_TR(0x4ebc7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebc80:{NFSU2_TR(0x4ebc80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc81:{NFSU2_TR(0x4ebc81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ebac0u);}goto L4ebac0;}
}
B4ebc86:L4ebc86:{c.instructions+=1;NFSU2_TR(0x4ebc86);
{goto L4ebd93;}
}
B4ebc8b:L4ebc8b:{c.instructions+=3;NFSU2_TR(0x4ebc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebc8e:{NFSU2_TR(0x4ebc8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebc8f:{NFSU2_TR(0x4ebc8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebc94ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ebc94:L4ebc94:{c.instructions+=2;NFSU2_TR(0x4ebc94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebc97:{NFSU2_TR(0x4ebc97);
{goto L4ebd93;}
}
B4ebc9c:L4ebc9c:{c.instructions+=3;NFSU2_TR(0x4ebc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebc9f:{NFSU2_TR(0x4ebc9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebca0:{NFSU2_TR(0x4ebca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebca5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ebca5:L4ebca5:{c.instructions+=4;NFSU2_TR(0x4ebca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ebca8:{NFSU2_TR(0x4ebca8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebcab:{NFSU2_TR(0x4ebcab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ebcad:{NFSU2_TR(0x4ebcad);
if(r1(R+518)){{goto L4ebda2;}}
}
B4ebcb3:L4ebcb3:{c.instructions+=4;NFSU2_TR(0x4ebcb3);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4ebcb8:{NFSU2_TR(0x4ebcb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ebcbb:{NFSU2_TR(0x4ebcbb);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebcc2:{NFSU2_TR(0x4ebcc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebccf;}}
}
B4ebcc4:L4ebcc4:{c.instructions+=2;NFSU2_TR(0x4ebcc4);
__builtin_memmove((R+4),(R+28),4);
}
B4ebcc6:{NFSU2_TR(0x4ebcc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebccbull));
TAIL_STATIC(0x5ee250u,5ee);
}
B4ebccb:L4ebccb:{c.instructions+=2;NFSU2_TR(0x4ebccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ebccd:{NFSU2_TR(0x4ebccd);
if(r1(R+518)){{goto L4ebcd8;}}
}
B4ebccf:L4ebccf:{c.instructions+=2;NFSU2_TR(0x4ebccf);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebcd6:{NFSU2_TR(0x4ebcd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebce3;}}
}
B4ebcd8:L4ebcd8:{c.instructions+=3;NFSU2_TR(0x4ebcd8);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4ebcdd:{NFSU2_TR(0x4ebcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ebce0:{NFSU2_TR(0x4ebce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B4ebce3:L4ebce3:{c.instructions+=6;NFSU2_TR(0x4ebce3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B4ebce7:{NFSU2_TR(0x4ebce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebcea:{NFSU2_TR(0x4ebcea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebceb:{NFSU2_TR(0x4ebceb);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebcf0:{NFSU2_TR(0x4ebcf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebcf1:{NFSU2_TR(0x4ebcf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebcf6ull));
TAIL_STATIC(0x537be0u,537);
}
B4ebcf6:L4ebcf6:{c.instructions+=2;NFSU2_TR(0x4ebcf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebcf7:{NFSU2_TR(0x4ebcf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebcfcull));
TAIL_STATIC(0x4ffaa0u,4ff);
}
B4ebcfc:L4ebcfc:{c.instructions+=5;NFSU2_TR(0x4ebcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebcff:{NFSU2_TR(0x4ebcff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd00:{NFSU2_TR(0x4ebd00);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd05:{NFSU2_TR(0x4ebd05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd06:{NFSU2_TR(0x4ebd06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebd0bull));
TAIL_STATIC(0x537be0u,537);
}
B4ebd0b:L4ebd0b:{c.instructions+=5;NFSU2_TR(0x4ebd0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebd0e:{NFSU2_TR(0x4ebd0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd0f:{NFSU2_TR(0x4ebd0f);
u8 U[4];
w4(U+0,u32(0x797d4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd14:{NFSU2_TR(0x4ebd14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd15:{NFSU2_TR(0x4ebd15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebd1aull));
TAIL_STATIC(0x537be0u,537);
}
B4ebd1a:L4ebd1a:{c.instructions+=4;NFSU2_TR(0x4ebd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebd1d:{NFSU2_TR(0x4ebd1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4ebd20:{NFSU2_TR(0x4ebd20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebd22:{NFSU2_TR(0x4ebd22);
if(r1(R+518)){{goto L4ebd27;}}
}
B4ebd24:L4ebd24:{c.instructions+=1;NFSU2_TR(0x4ebd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebd27:L4ebd27:{c.instructions+=5;NFSU2_TR(0x4ebd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebd2a:{NFSU2_TR(0x4ebd2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebd2d:{NFSU2_TR(0x4ebd2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ebd30:{NFSU2_TR(0x4ebd30);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebd32:{NFSU2_TR(0x4ebd32);
if(r1(R+518)){{goto L4ebd3c;}}
}
B4ebd34:L4ebd34:{c.instructions+=2;NFSU2_TR(0x4ebd34);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4ebd39:{NFSU2_TR(0x4ebd39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebd3c:L4ebd3c:{c.instructions+=10;NFSU2_TR(0x4ebd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebd3f:{NFSU2_TR(0x4ebd3f);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4ebd45:{NFSU2_TR(0x4ebd45);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4ebd47:{NFSU2_TR(0x4ebd47);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebd4b:{NFSU2_TR(0x4ebd4b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ebd4f:{NFSU2_TR(0x4ebd4f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ebd55:{NFSU2_TR(0x4ebd55);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ebd5b:{NFSU2_TR(0x4ebd5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ebd5d:{NFSU2_TR(0x4ebd5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebd60:{NFSU2_TR(0x4ebd60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebd6e;}}
}
B4ebd62:L4ebd62:{c.instructions+=3;NFSU2_TR(0x4ebd62);
__builtin_memmove((R+8),gp(0x890118),4);
}
B4ebd68:{NFSU2_TR(0x4ebd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebd6b:{NFSU2_TR(0x4ebd6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebd6e:L4ebd6e:{c.instructions+=5;NFSU2_TR(0x4ebd6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd70:{NFSU2_TR(0x4ebd70);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ebd74:{NFSU2_TR(0x4ebd74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd75:{NFSU2_TR(0x4ebd75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ebd78:{NFSU2_TR(0x4ebd78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebd7dull));
TAIL_STATIC(0x577240u,577);
}
B4ebd7d:L4ebd7d:{c.instructions+=6;NFSU2_TR(0x4ebd7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebd80:{NFSU2_TR(0x4ebd80);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ebd84:{NFSU2_TR(0x4ebd84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd85:{NFSU2_TR(0x4ebd85);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd8a:{NFSU2_TR(0x4ebd8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd8b:{NFSU2_TR(0x4ebd8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebd90ull));
TAIL_STATIC(0x537be0u,537);
}
B4ebd90:L4ebd90:{c.instructions+=1;NFSU2_TR(0x4ebd90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ebd93:L4ebd93:{c.instructions+=4;NFSU2_TR(0x4ebd93);
__builtin_memmove((R+4),gp(0x865198),4);
}
B4ebd99:{NFSU2_TR(0x4ebd99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebd9a:{NFSU2_TR(0x4ebd9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebd9d:{NFSU2_TR(0x4ebd9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebda2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eb9f0u);}goto L4eb9f0;}
}
B4ebda2:L4ebda2:{c.instructions+=1;NFSU2_TR(0x4ebda2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ebda3:L4ebda3:{c.instructions+=5;NFSU2_TR(0x4ebda3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ebda4:{NFSU2_TR(0x4ebda4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebda5:{NFSU2_TR(0x4ebda5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ebda6:{NFSU2_TR(0x4ebda6);
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
B4ebda9:{NFSU2_TR(0x4ebda9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ebdb0:L4ebdb0:{c.instructions+=15;NFSU2_TR(0x4ebdb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebdb2:{NFSU2_TR(0x4ebdb2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebdb7:{NFSU2_TR(0x4ebdb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebdbd:{NFSU2_TR(0x4ebdbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebdbe:{NFSU2_TR(0x4ebdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebdc5:{NFSU2_TR(0x4ebdc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebdc6:{NFSU2_TR(0x4ebdc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebdc7:{NFSU2_TR(0x4ebdc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebdc8:{NFSU2_TR(0x4ebdc8);
__builtin_memmove((R+28),(R+4),4);
}
B4ebdca:{NFSU2_TR(0x4ebdca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebdce:{NFSU2_TR(0x4ebdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebdd1:{NFSU2_TR(0x4ebdd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebdd4:{NFSU2_TR(0x4ebdd4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebdd6:{NFSU2_TR(0x4ebdd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ebdde:{NFSU2_TR(0x4ebdde);
if(r1(R+518)){{goto L4ebdf9;}}
}
B4ebde0:L4ebde0:{c.instructions+=6;NFSU2_TR(0x4ebde0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ebde2:{NFSU2_TR(0x4ebde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebde5:{NFSU2_TR(0x4ebde5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ebde7:{NFSU2_TR(0x4ebde7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebde8:{NFSU2_TR(0x4ebde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebdeb:{NFSU2_TR(0x4ebdeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebdf0ull));
TAIL_STATIC(0x575630u,575);
}
B4ebdf0:L4ebdf0:{c.instructions+=4;NFSU2_TR(0x4ebdf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ebdf2:{NFSU2_TR(0x4ebdf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebdf5:{NFSU2_TR(0x4ebdf5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebdf7:{NFSU2_TR(0x4ebdf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ebde0u);}goto L4ebde0;}}
}
B4ebdf9:L4ebdf9:{c.instructions+=4;NFSU2_TR(0x4ebdf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ebdfb:{NFSU2_TR(0x4ebdfb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebdfd:{NFSU2_TR(0x4ebdfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe05:{NFSU2_TR(0x4ebe05);
if(r1(R+518)){{goto L4ebe20;}}
}
B4ebe07:L4ebe07:{c.instructions+=6;NFSU2_TR(0x4ebe07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ebe09:{NFSU2_TR(0x4ebe09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebe0c:{NFSU2_TR(0x4ebe0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ebe0e:{NFSU2_TR(0x4ebe0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe0f:{NFSU2_TR(0x4ebe0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe12:{NFSU2_TR(0x4ebe12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebe17ull));
TAIL_STATIC(0x440ef0u,440);
}
B4ebe17:L4ebe17:{c.instructions+=4;NFSU2_TR(0x4ebe17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ebe19:{NFSU2_TR(0x4ebe19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebe1c:{NFSU2_TR(0x4ebe1c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebe1e:{NFSU2_TR(0x4ebe1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ebe07u);}goto L4ebe07;}}
}
B4ebe20:L4ebe20:{c.instructions+=6;NFSU2_TR(0x4ebe20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebe24:{NFSU2_TR(0x4ebe24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ebe25:{NFSU2_TR(0x4ebe25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebe26:{NFSU2_TR(0x4ebe26);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe2d:{NFSU2_TR(0x4ebe2d);
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
B4ebe30:{NFSU2_TR(0x4ebe30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ebe40:L4ebe40:{c.instructions+=14;NFSU2_TR(0x4ebe40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe42:{NFSU2_TR(0x4ebe42);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe47:{NFSU2_TR(0x4ebe47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebe4d:{NFSU2_TR(0x4ebe4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe4e:{NFSU2_TR(0x4ebe4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe55:{NFSU2_TR(0x4ebe55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe56:{NFSU2_TR(0x4ebe56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe57:{NFSU2_TR(0x4ebe57);
__builtin_memmove((R+24),(R+4),4);
}
B4ebe59:{NFSU2_TR(0x4ebe59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe5a:{NFSU2_TR(0x4ebe5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe5e:{NFSU2_TR(0x4ebe5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ebe61:{NFSU2_TR(0x4ebe61);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ebe63:{NFSU2_TR(0x4ebe63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe6b:{NFSU2_TR(0x4ebe6b);
if(r1(R+518)){{goto L4ebe7d;}}
}
B4ebe6d:L4ebe6d:{c.instructions+=2;NFSU2_TR(0x4ebe6d);
__builtin_memmove((R+4),(R+28),4);
}
B4ebe6f:{NFSU2_TR(0x4ebe6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebe74ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eb940u);}goto L4eb940;}
}
B4ebe74:L4ebe74:{c.instructions+=2;NFSU2_TR(0x4ebe74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe75:{NFSU2_TR(0x4ebe75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebe7aull));
TAIL_STATIC(0x575630u,575);
}
B4ebe7a:L4ebe7a:{c.instructions+=1;NFSU2_TR(0x4ebe7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebe7d:L4ebe7d:{c.instructions+=4;NFSU2_TR(0x4ebe7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ebe7f:{NFSU2_TR(0x4ebe7f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebe81:{NFSU2_TR(0x4ebe81);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe89:{NFSU2_TR(0x4ebe89);
if(r1(R+518)){{goto L4ebea9;}}
}
B4ebe8b:L4ebe8b:{c.instructions+=1;NFSU2_TR(0x4ebe8b);
{goto L4ebe90;}
}
B4ebe90:L4ebe90:{c.instructions+=6;NFSU2_TR(0x4ebe90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ebe92:{NFSU2_TR(0x4ebe92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebe95:{NFSU2_TR(0x4ebe95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ebe97:{NFSU2_TR(0x4ebe97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebe98:{NFSU2_TR(0x4ebe98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebe9b:{NFSU2_TR(0x4ebe9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebea0ull));
TAIL_STATIC(0x440ef0u,440);
}
B4ebea0:L4ebea0:{c.instructions+=4;NFSU2_TR(0x4ebea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ebea2:{NFSU2_TR(0x4ebea2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebea5:{NFSU2_TR(0x4ebea5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebea7:{NFSU2_TR(0x4ebea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ebe90u);}goto L4ebe90;}}
}
B4ebea9:L4ebea9:{c.instructions+=6;NFSU2_TR(0x4ebea9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebead:{NFSU2_TR(0x4ebead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ebeae:{NFSU2_TR(0x4ebeae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ebeaf:{NFSU2_TR(0x4ebeaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebeb6:{NFSU2_TR(0x4ebeb6);
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
B4ebeb9:{NFSU2_TR(0x4ebeb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ebec0:L4ebec0:{c.instructions+=12;NFSU2_TR(0x4ebec0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebec1:{NFSU2_TR(0x4ebec1);
__builtin_memmove((R+20),(R+16),4);
}
B4ebec3:{NFSU2_TR(0x4ebec3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4ebec6:{NFSU2_TR(0x4ebec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe4ull))));
}
B4ebecc:{NFSU2_TR(0x4ebecc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebecd:{NFSU2_TR(0x4ebecd);
__builtin_memmove((R+12),(R+4),4);
}
B4ebecf:{NFSU2_TR(0x4ebecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebed2:{NFSU2_TR(0x4ebed2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebed3:{NFSU2_TR(0x4ebed3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebed4:{NFSU2_TR(0x4ebed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebed5:{NFSU2_TR(0x4ebed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebed9:{NFSU2_TR(0x4ebed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebedeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ebede:L4ebede:{c.instructions+=5;NFSU2_TR(0x4ebede);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ebee1:{NFSU2_TR(0x4ebee1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebee4:{NFSU2_TR(0x4ebee4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebee6:{NFSU2_TR(0x4ebee6);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4ebeeb:{NFSU2_TR(0x4ebeeb);
if(r1(R+518)){{goto L4ebf17;}}
}
B4ebeed:L4ebeed:{c.instructions+=2;NFSU2_TR(0x4ebeed);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ebef0:{NFSU2_TR(0x4ebef0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebf17;}}
}
B4ebef2:L4ebef2:{c.instructions+=2;NFSU2_TR(0x4ebef2);
u8 U[4];
w4(U+0,u32(0x4a8764a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebef7:{NFSU2_TR(0x4ebef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebefcull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ebefc:L4ebefc:{c.instructions+=4;NFSU2_TR(0x4ebefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebeff:{NFSU2_TR(0x4ebeff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebf00:{NFSU2_TR(0x4ebf00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebf01:{NFSU2_TR(0x4ebf01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf06ull));
TAIL_STATIC(0x537be0u,537);
}
B4ebf06:L4ebf06:{c.instructions+=3;NFSU2_TR(0x4ebf06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ebf09:{NFSU2_TR(0x4ebf09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebf0a:{NFSU2_TR(0x4ebf0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf0full));
TAIL_STATIC(0x50ca50u,50c);
}
B4ebf0f:L4ebf0f:{c.instructions+=2;NFSU2_TR(0x4ebf0f);
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
B4ebf12:{NFSU2_TR(0x4ebf12);
{goto L4ebfa4;}
}
B4ebf17:L4ebf17:{c.instructions+=2;NFSU2_TR(0x4ebf17);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebf1e:{NFSU2_TR(0x4ebf1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebf98;}}
}
B4ebf20:L4ebf20:{c.instructions+=2;NFSU2_TR(0x4ebf20);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ebf23:{NFSU2_TR(0x4ebf23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebf98;}}
}
B4ebf25:L4ebf25:{c.instructions+=2;NFSU2_TR(0x4ebf25);
w4(R+4,u32(0x89cf48ull));
}
B4ebf2a:{NFSU2_TR(0x4ebf2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf2full));
TAIL_STATIC(0x5fe530u,5fe);
}
B4ebf2f:L4ebf2f:{c.instructions+=2;NFSU2_TR(0x4ebf2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebf31:{NFSU2_TR(0x4ebf31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebf41;}}
}
B4ebf33:L4ebf33:{c.instructions+=2;NFSU2_TR(0x4ebf33);
w4(R+4,u32(0x89cf48ull));
}
B4ebf38:{NFSU2_TR(0x4ebf38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf3dull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4ebf3d:L4ebf3d:{c.instructions+=2;NFSU2_TR(0x4ebf3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebf3f:{NFSU2_TR(0x4ebf3f);
if(r1(R+518)){{goto L4ebf98;}}
}
B4ebf41:L4ebf41:{c.instructions+=9;NFSU2_TR(0x4ebf41);
__builtin_memmove((R+0),gp(0x89d05c),4);
}
B4ebf46:{NFSU2_TR(0x4ebf46);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8651ac))));
}
B4ebf4c:{NFSU2_TR(0x4ebf4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ebf50:{NFSU2_TR(0x4ebf50);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ebf54:{NFSU2_TR(0x4ebf54);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ebf5a:{NFSU2_TR(0x4ebf5a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ebf60:{NFSU2_TR(0x4ebf60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ebf62:{NFSU2_TR(0x4ebf62);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebf65:{NFSU2_TR(0x4ebf65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ebf83;}}
}
B4ebf67:L4ebf67:{c.instructions+=1;NFSU2_TR(0x4ebf67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf6cull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ebf6c:L4ebf6c:{c.instructions+=2;NFSU2_TR(0x4ebf6c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ebf6e:{NFSU2_TR(0x4ebf6e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ebf98;}}
}
B4ebf70:L4ebf70:{c.instructions+=3;NFSU2_TR(0x4ebf70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebf71:{NFSU2_TR(0x4ebf71);
u8 U[4];
w4(U+0,u32(0xfa14812cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebf76:{NFSU2_TR(0x4ebf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf7bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ebf7b:L4ebf7b:{c.instructions+=2;NFSU2_TR(0x4ebf7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ebf7e:{NFSU2_TR(0x4ebf7e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ebefcu);}goto L4ebefc;}
}
B4ebf83:L4ebf83:{c.instructions+=4;NFSU2_TR(0x4ebf83);
w4(R+4,u32(0x89cf48ull));
}
B4ebf88:{NFSU2_TR(0x4ebf88);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ebf8a:{NFSU2_TR(0x4ebf8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ebf8e:{NFSU2_TR(0x4ebf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebf93ull));
TAIL_STATIC(0x609750u,609);
}
B4ebf93:L4ebf93:{c.instructions+=1;NFSU2_TR(0x4ebf93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ebef2u);}goto L4ebef2;}
}
B4ebf98:L4ebf98:{c.instructions+=3;NFSU2_TR(0x4ebf98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ebf9b:{NFSU2_TR(0x4ebf9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebf9c:{NFSU2_TR(0x4ebf9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebfa1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ebfa1:L4ebfa1:{c.instructions+=1;NFSU2_TR(0x4ebfa1);
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
B4ebfa4:L4ebfa4:{c.instructions+=3;NFSU2_TR(0x4ebfa4);
__builtin_memmove((R+24),gp(0x89cf4c),4);
}
B4ebfaa:{NFSU2_TR(0x4ebfaa);
__builtin_memmove((R+4),(R+24),4);
}
B4ebfac:{NFSU2_TR(0x4ebfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebfb1ull));
TAIL_STATIC(0x5efab0u,5ef);
}
B4ebfb1:L4ebfb1:{c.instructions+=4;NFSU2_TR(0x4ebfb1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ebfb7:{NFSU2_TR(0x4ebfb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ebfb9:{NFSU2_TR(0x4ebfb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ebfbc:{NFSU2_TR(0x4ebfbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4ec098u,4ec);}
}
B4ebfc2:L4ebfc2:{c.instructions+=3;NFSU2_TR(0x4ebfc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ebfc4:{NFSU2_TR(0x4ebfc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebfc7:{NFSU2_TR(0x4ebfc7);
if(r1(R+518)){TAIL_STATIC(0x4ec098u,4ec);}
}
B4ebfcd:L4ebfcd:{c.instructions+=2;NFSU2_TR(0x4ebfcd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ebfd0:{NFSU2_TR(0x4ebfd0);
if(r1(R+518)){TAIL_STATIC(0x4ec098u,4ec);}
}
B4ebfd6:L4ebfd6:{c.instructions+=2;NFSU2_TR(0x4ebfd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ebfd8:{NFSU2_TR(0x4ebfd8);
if(r1(R+518)){TAIL_STATIC(0x4ec098u,4ec);}
}
B4ebfde:L4ebfde:{c.instructions+=2;NFSU2_TR(0x4ebfde);
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
B4ebfe1:{NFSU2_TR(0x4ebfe1);
if(r1(R+518)){TAIL_STATIC(0x4ec098u,4ec);}
}
B4ebfe7:L4ebfe7:{c.instructions+=2;NFSU2_TR(0x4ebfe7);
__builtin_memmove((R+4),(R+24),4);
}
B4ebfe9:{NFSU2_TR(0x4ebfe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebfeeull));
TAIL_STATIC(0x5efab0u,5ef);
}
B4ebfee:L4ebfee:{c.instructions+=4;NFSU2_TR(0x4ebfee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ebff2:{NFSU2_TR(0x4ebff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ebff5:{NFSU2_TR(0x4ebff5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ebff6:{NFSU2_TR(0x4ebff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ebffbull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ebffb:L4ebffb:{c.instructions+=2;NFSU2_TR(0x4ebffb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ebfff:{NFSU2_TR(0x4ebfff);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x4ec005u,4ec);
}
XIT:NFSU2_TR_EXIT(0x4eb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
