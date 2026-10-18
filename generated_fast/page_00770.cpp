#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_465(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_47f(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_76f(u8* __restrict R,Cpu& c);
u32 body_771(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x770,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x770,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_770(u8* __restrict R,Cpu& c);
u32 page_770(Cpu& c){return body_770(c.regs.data(),c);}
__attribute__((noinline)) u32 body_770(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x770002:goto L770002;
case 0x770004:c.instructions+=3;goto B770004;
case 0x770006:c.instructions+=2;goto B770006;
case 0x770009:c.instructions+=1;goto B770009;
case 0x77000b:goto L77000b;
case 0x770012:c.instructions+=22;goto B770012;
case 0x770014:c.instructions+=21;goto B770014;
case 0x770016:c.instructions+=20;goto B770016;
case 0x770019:c.instructions+=19;goto B770019;
case 0x770020:c.instructions+=18;goto B770020;
case 0x770023:c.instructions+=17;goto B770023;
case 0x770029:c.instructions+=16;goto B770029;
case 0x77002c:c.instructions+=15;goto B77002c;
case 0x77002f:c.instructions+=14;goto B77002f;
case 0x770032:c.instructions+=13;goto B770032;
case 0x770038:c.instructions+=12;goto B770038;
case 0x77003b:c.instructions+=11;goto B77003b;
case 0x77003e:c.instructions+=10;goto B77003e;
case 0x770044:c.instructions+=9;goto B770044;
case 0x770047:c.instructions+=8;goto B770047;
case 0x770049:c.instructions+=7;goto B770049;
case 0x77004b:c.instructions+=6;goto B77004b;
case 0x77004e:c.instructions+=5;goto B77004e;
case 0x770051:c.instructions+=4;goto B770051;
case 0x770055:c.instructions+=3;goto B770055;
case 0x77005c:c.instructions+=2;goto B77005c;
case 0x77005f:c.instructions+=1;goto B77005f;
case 0x770061:goto L770061;
case 0x770068:c.instructions+=4;goto B770068;
case 0x77006b:c.instructions+=3;goto B77006b;
case 0x770072:c.instructions+=2;goto B770072;
case 0x770075:c.instructions+=1;goto B770075;
case 0x770077:goto L770077;
case 0x77007a:c.instructions+=3;goto B77007a;
case 0x77007d:c.instructions+=2;goto B77007d;
case 0x770083:c.instructions+=1;goto B770083;
case 0x770085:goto L770085;
case 0x770087:c.instructions+=18;goto B770087;
case 0x770089:c.instructions+=17;goto B770089;
case 0x77008c:c.instructions+=16;goto B77008c;
case 0x770093:c.instructions+=15;goto B770093;
case 0x770096:c.instructions+=14;goto B770096;
case 0x77009c:c.instructions+=13;goto B77009c;
case 0x77009f:c.instructions+=12;goto B77009f;
case 0x7700a2:c.instructions+=11;goto B7700a2;
case 0x7700a5:c.instructions+=10;goto B7700a5;
case 0x7700a8:c.instructions+=9;goto B7700a8;
case 0x7700ae:c.instructions+=8;goto B7700ae;
case 0x7700b1:c.instructions+=7;goto B7700b1;
case 0x7700b7:c.instructions+=6;goto B7700b7;
case 0x7700ba:c.instructions+=5;goto B7700ba;
case 0x7700bc:c.instructions+=4;goto B7700bc;
case 0x7700be:c.instructions+=3;goto B7700be;
case 0x7700c1:c.instructions+=2;goto B7700c1;
case 0x7700c4:c.instructions+=1;goto B7700c4;
case 0x7700c9:goto L7700c9;
case 0x7700cb:c.instructions+=7;goto B7700cb;
case 0x7700d2:c.instructions+=6;goto B7700d2;
case 0x7700d5:c.instructions+=5;goto B7700d5;
case 0x7700db:c.instructions+=4;goto B7700db;
case 0x7700dd:c.instructions+=3;goto B7700dd;
case 0x7700e0:c.instructions+=2;goto B7700e0;
case 0x7700e3:c.instructions+=1;goto B7700e3;
case 0x7700e5:goto L7700e5;
case 0x7700ea:c.instructions+=1;goto B7700ea;
case 0x7700ec:goto L7700ec;
case 0x7700ef:c.instructions+=1;goto B7700ef;
case 0x7700f1:goto L7700f1;
case 0x7700f3:c.instructions+=1;goto B7700f3;
case 0x7700f4:goto L7700f4;
case 0x7700f6:c.instructions+=1;goto B7700f6;
case 0x7700f8:goto L7700f8;
case 0x7700fa:c.instructions+=2;goto B7700fa;
case 0x7700fb:c.instructions+=1;goto B7700fb;
case 0x7700fd:goto L7700fd;
case 0x7700fe:c.instructions+=3;goto B7700fe;
case 0x770102:c.instructions+=2;goto B770102;
case 0x770105:c.instructions+=1;goto B770105;
case 0x77010b:goto L77010b;
case 0x77010c:c.instructions+=4;goto B77010c;
case 0x77010d:c.instructions+=3;goto B77010d;
case 0x77010e:c.instructions+=2;goto B77010e;
case 0x77010f:c.instructions+=1;goto B77010f;
case 0x770110:goto L770110;
case 0x770111:c.instructions+=9;goto B770111;
case 0x770113:c.instructions+=8;goto B770113;
case 0x770114:c.instructions+=7;goto B770114;
case 0x77011a:c.instructions+=6;goto B77011a;
case 0x77011d:c.instructions+=5;goto B77011d;
case 0x77011e:c.instructions+=4;goto B77011e;
case 0x770121:c.instructions+=3;goto B770121;
case 0x770122:c.instructions+=2;goto B770122;
case 0x770123:c.instructions+=1;goto B770123;
case 0x770125:goto L770125;
case 0x770128:c.instructions+=24;goto B770128;
case 0x77012e:c.instructions+=23;goto B77012e;
case 0x770130:c.instructions+=22;goto B770130;
case 0x770132:c.instructions+=21;goto B770132;
case 0x770135:c.instructions+=20;goto B770135;
case 0x770138:c.instructions+=19;goto B770138;
case 0x77013f:c.instructions+=18;goto B77013f;
case 0x770145:c.instructions+=17;goto B770145;
case 0x770148:c.instructions+=16;goto B770148;
case 0x77014b:c.instructions+=15;goto B77014b;
case 0x77014e:c.instructions+=14;goto B77014e;
case 0x770151:c.instructions+=13;goto B770151;
case 0x770157:c.instructions+=12;goto B770157;
case 0x77015a:c.instructions+=11;goto B77015a;
case 0x77015d:c.instructions+=10;goto B77015d;
case 0x770163:c.instructions+=9;goto B770163;
case 0x770166:c.instructions+=8;goto B770166;
case 0x770169:c.instructions+=7;goto B770169;
case 0x77016b:c.instructions+=6;goto B77016b;
case 0x77016d:c.instructions+=5;goto B77016d;
case 0x770170:c.instructions+=4;goto B770170;
case 0x770173:c.instructions+=3;goto B770173;
case 0x770179:c.instructions+=2;goto B770179;
case 0x770180:c.instructions+=1;goto B770180;
case 0x770182:goto L770182;
case 0x770185:c.instructions+=5;goto B770185;
case 0x77018b:c.instructions+=4;goto B77018b;
case 0x77018d:c.instructions+=3;goto B77018d;
case 0x770194:c.instructions+=2;goto B770194;
case 0x770197:c.instructions+=1;goto B770197;
case 0x77019d:goto L77019d;
case 0x7701a3:c.instructions+=2;goto B7701a3;
case 0x7701a6:c.instructions+=1;goto B7701a6;
case 0x7701a8:goto L7701a8;
case 0x7701ab:c.instructions+=24;goto B7701ab;
case 0x7701ac:c.instructions+=23;goto B7701ac;
case 0x7701ae:c.instructions+=22;goto B7701ae;
case 0x7701b0:c.instructions+=21;goto B7701b0;
case 0x7701b3:c.instructions+=20;goto B7701b3;
case 0x7701b6:c.instructions+=19;goto B7701b6;
case 0x7701bd:c.instructions+=18;goto B7701bd;
case 0x7701c3:c.instructions+=17;goto B7701c3;
case 0x7701c6:c.instructions+=16;goto B7701c6;
case 0x7701c9:c.instructions+=15;goto B7701c9;
case 0x7701cc:c.instructions+=14;goto B7701cc;
case 0x7701cf:c.instructions+=13;goto B7701cf;
case 0x7701d5:c.instructions+=12;goto B7701d5;
case 0x7701d8:c.instructions+=11;goto B7701d8;
case 0x7701db:c.instructions+=10;goto B7701db;
case 0x7701e1:c.instructions+=9;goto B7701e1;
case 0x7701e4:c.instructions+=8;goto B7701e4;
case 0x7701e7:c.instructions+=7;goto B7701e7;
case 0x7701e9:c.instructions+=6;goto B7701e9;
case 0x7701eb:c.instructions+=5;goto B7701eb;
case 0x7701ee:c.instructions+=4;goto B7701ee;
case 0x7701f1:c.instructions+=3;goto B7701f1;
case 0x7701f7:c.instructions+=2;goto B7701f7;
case 0x7701fe:c.instructions+=1;goto B7701fe;
case 0x770200:goto L770200;
case 0x770203:c.instructions+=5;goto B770203;
case 0x770204:c.instructions+=4;goto B770204;
case 0x770206:c.instructions+=3;goto B770206;
case 0x77020d:c.instructions+=2;goto B77020d;
case 0x770210:c.instructions+=1;goto B770210;
case 0x770216:goto L770216;
case 0x77021c:c.instructions+=2;goto B77021c;
case 0x77021f:c.instructions+=1;goto B77021f;
case 0x770221:goto L770221;
case 0x770224:c.instructions+=23;goto B770224;
case 0x770226:c.instructions+=22;goto B770226;
case 0x770228:c.instructions+=21;goto B770228;
case 0x77022b:c.instructions+=20;goto B77022b;
case 0x77022e:c.instructions+=19;goto B77022e;
case 0x770235:c.instructions+=18;goto B770235;
case 0x77023b:c.instructions+=17;goto B77023b;
case 0x77023e:c.instructions+=16;goto B77023e;
case 0x770241:c.instructions+=15;goto B770241;
case 0x770244:c.instructions+=14;goto B770244;
case 0x770247:c.instructions+=13;goto B770247;
case 0x77024d:c.instructions+=12;goto B77024d;
case 0x770250:c.instructions+=11;goto B770250;
case 0x770253:c.instructions+=10;goto B770253;
case 0x770259:c.instructions+=9;goto B770259;
case 0x77025c:c.instructions+=8;goto B77025c;
case 0x77025f:c.instructions+=7;goto B77025f;
case 0x770261:c.instructions+=6;goto B770261;
case 0x770263:c.instructions+=5;goto B770263;
case 0x770266:c.instructions+=4;goto B770266;
case 0x770269:c.instructions+=3;goto B770269;
case 0x77026f:c.instructions+=2;goto B77026f;
case 0x770276:c.instructions+=1;goto B770276;
case 0x770278:goto L770278;
case 0x77027b:c.instructions+=4;goto B77027b;
case 0x77027d:c.instructions+=3;goto B77027d;
case 0x770284:c.instructions+=2;goto B770284;
case 0x770287:c.instructions+=1;goto B770287;
case 0x77028d:goto L77028d;
case 0x77028f:c.instructions+=2;goto B77028f;
case 0x770291:c.instructions+=1;goto B770291;
case 0x770297:goto L770297;
case 0x77029d:c.instructions+=3;goto B77029d;
case 0x7702a0:c.instructions+=2;goto B7702a0;
case 0x7702a7:c.instructions+=1;goto B7702a7;
case 0x7702a9:goto L7702a9;
case 0x7702b1:c.instructions+=22;goto B7702b1;
case 0x7702b3:c.instructions+=21;goto B7702b3;
case 0x7702b5:c.instructions+=20;goto B7702b5;
case 0x7702b8:c.instructions+=19;goto B7702b8;
case 0x7702bf:c.instructions+=18;goto B7702bf;
case 0x7702c5:c.instructions+=17;goto B7702c5;
case 0x7702c8:c.instructions+=16;goto B7702c8;
case 0x7702cb:c.instructions+=15;goto B7702cb;
case 0x7702ce:c.instructions+=14;goto B7702ce;
case 0x7702d1:c.instructions+=13;goto B7702d1;
case 0x7702d7:c.instructions+=12;goto B7702d7;
case 0x7702da:c.instructions+=11;goto B7702da;
case 0x7702dd:c.instructions+=10;goto B7702dd;
case 0x7702e3:c.instructions+=9;goto B7702e3;
case 0x7702e6:c.instructions+=8;goto B7702e6;
case 0x7702e9:c.instructions+=7;goto B7702e9;
case 0x7702eb:c.instructions+=6;goto B7702eb;
case 0x7702ed:c.instructions+=5;goto B7702ed;
case 0x7702f0:c.instructions+=4;goto B7702f0;
case 0x7702f3:c.instructions+=3;goto B7702f3;
case 0x7702f9:c.instructions+=2;goto B7702f9;
case 0x770300:c.instructions+=1;goto B770300;
case 0x770302:goto L770302;
case 0x77030a:c.instructions+=4;goto B77030a;
case 0x77030d:c.instructions+=3;goto B77030d;
case 0x770314:c.instructions+=2;goto B770314;
case 0x770317:c.instructions+=1;goto B770317;
case 0x77031d:goto L77031d;
case 0x77031e:c.instructions+=2;goto B77031e;
case 0x770320:c.instructions+=1;goto B770320;
case 0x770326:goto L770326;
case 0x770329:c.instructions+=3;goto B770329;
case 0x77032a:c.instructions+=2;goto B77032a;
case 0x770330:c.instructions+=1;goto B770330;
case 0x770335:goto L770335;
case 0x770338:c.instructions+=3;goto B770338;
case 0x770339:c.instructions+=2;goto B770339;
case 0x77033f:c.instructions+=1;goto B77033f;
case 0x770344:goto L770344;
case 0x770345:c.instructions+=4;goto B770345;
case 0x770346:c.instructions+=3;goto B770346;
case 0x770347:c.instructions+=2;goto B770347;
case 0x770348:c.instructions+=1;goto B770348;
case 0x77034b:goto L77034b;
case 0x77034c:c.instructions+=9;goto B77034c;
case 0x77034e:c.instructions+=8;goto B77034e;
case 0x770351:c.instructions+=7;goto B770351;
case 0x770352:c.instructions+=6;goto B770352;
case 0x770355:c.instructions+=5;goto B770355;
case 0x770357:c.instructions+=4;goto B770357;
case 0x77035d:c.instructions+=3;goto B77035d;
case 0x77035e:c.instructions+=2;goto B77035e;
case 0x77035f:c.instructions+=1;goto B77035f;
case 0x770365:goto L770365;
case 0x77036b:c.instructions+=9;goto B77036b;
case 0x77036f:c.instructions+=8;goto B77036f;
case 0x770375:c.instructions+=7;goto B770375;
case 0x770379:c.instructions+=6;goto B770379;
case 0x77037a:c.instructions+=5;goto B77037a;
case 0x77037c:c.instructions+=4;goto B77037c;
case 0x77037f:c.instructions+=3;goto B77037f;
case 0x770382:c.instructions+=2;goto B770382;
case 0x770384:c.instructions+=1;goto B770384;
case 0x770386:goto L770386;
case 0x77038c:c.instructions+=6;goto B77038c;
case 0x77038f:c.instructions+=5;goto B77038f;
case 0x770393:c.instructions+=4;goto B770393;
case 0x770394:c.instructions+=3;goto B770394;
case 0x770396:c.instructions+=2;goto B770396;
case 0x770398:c.instructions+=1;goto B770398;
case 0x77039a:goto L77039a;
case 0x77039d:c.instructions+=21;goto B77039d;
case 0x77039f:c.instructions+=20;goto B77039f;
case 0x7703a1:c.instructions+=19;goto B7703a1;
case 0x7703a4:c.instructions+=18;goto B7703a4;
case 0x7703ab:c.instructions+=17;goto B7703ab;
case 0x7703ae:c.instructions+=16;goto B7703ae;
case 0x7703b4:c.instructions+=15;goto B7703b4;
case 0x7703b7:c.instructions+=14;goto B7703b7;
case 0x7703ba:c.instructions+=13;goto B7703ba;
case 0x7703bd:c.instructions+=12;goto B7703bd;
case 0x7703c3:c.instructions+=11;goto B7703c3;
case 0x7703c6:c.instructions+=10;goto B7703c6;
case 0x7703c9:c.instructions+=9;goto B7703c9;
case 0x7703cf:c.instructions+=8;goto B7703cf;
case 0x7703d2:c.instructions+=7;goto B7703d2;
case 0x7703d5:c.instructions+=6;goto B7703d5;
case 0x7703d7:c.instructions+=5;goto B7703d7;
case 0x7703d9:c.instructions+=4;goto B7703d9;
case 0x7703dc:c.instructions+=3;goto B7703dc;
case 0x7703e0:c.instructions+=2;goto B7703e0;
case 0x7703e7:c.instructions+=1;goto B7703e7;
case 0x7703ec:goto L7703ec;
case 0x7703ef:c.instructions+=4;goto B7703ef;
case 0x7703f2:c.instructions+=3;goto B7703f2;
case 0x7703f9:c.instructions+=2;goto B7703f9;
case 0x7703fb:c.instructions+=1;goto B7703fb;
case 0x770400:goto L770400;
case 0x770407:c.instructions+=10;goto B770407;
case 0x770409:c.instructions+=9;goto B770409;
case 0x77040c:c.instructions+=8;goto B77040c;
case 0x77040f:c.instructions+=7;goto B77040f;
case 0x770417:c.instructions+=6;goto B770417;
case 0x770418:c.instructions+=5;goto B770418;
case 0x77041a:c.instructions+=4;goto B77041a;
case 0x77041d:c.instructions+=3;goto B77041d;
case 0x770423:c.instructions+=2;goto B770423;
case 0x770425:c.instructions+=1;goto B770425;
case 0x770427:goto L770427;
case 0x77042a:c.instructions+=23;goto B77042a;
case 0x770432:c.instructions+=22;goto B770432;
case 0x770434:c.instructions+=21;goto B770434;
case 0x770436:c.instructions+=20;goto B770436;
case 0x770439:c.instructions+=19;goto B770439;
case 0x770440:c.instructions+=18;goto B770440;
case 0x770443:c.instructions+=17;goto B770443;
case 0x770449:c.instructions+=16;goto B770449;
case 0x77044c:c.instructions+=15;goto B77044c;
case 0x77044f:c.instructions+=14;goto B77044f;
case 0x770452:c.instructions+=13;goto B770452;
case 0x770455:c.instructions+=12;goto B770455;
case 0x77045b:c.instructions+=11;goto B77045b;
case 0x77045e:c.instructions+=10;goto B77045e;
case 0x770464:c.instructions+=9;goto B770464;
case 0x770467:c.instructions+=8;goto B770467;
case 0x770469:c.instructions+=7;goto B770469;
case 0x77046b:c.instructions+=6;goto B77046b;
case 0x77046e:c.instructions+=5;goto B77046e;
case 0x770471:c.instructions+=4;goto B770471;
case 0x770475:c.instructions+=3;goto B770475;
case 0x77047c:c.instructions+=2;goto B77047c;
case 0x77047f:c.instructions+=1;goto B77047f;
case 0x770481:goto L770481;
case 0x770484:c.instructions+=5;goto B770484;
case 0x77048c:c.instructions+=4;goto B77048c;
case 0x77048f:c.instructions+=3;goto B77048f;
case 0x770496:c.instructions+=2;goto B770496;
case 0x770499:c.instructions+=1;goto B770499;
case 0x77049b:goto L77049b;
case 0x7704a1:c.instructions+=5;goto B7704a1;
case 0x7704a4:c.instructions+=4;goto B7704a4;
case 0x7704aa:c.instructions+=3;goto B7704aa;
case 0x7704ac:c.instructions+=2;goto B7704ac;
case 0x7704af:c.instructions+=1;goto B7704af;
case 0x7704b1:goto L7704b1;
case 0x7704b7:c.instructions+=6;goto B7704b7;
case 0x7704bd:c.instructions+=5;goto B7704bd;
case 0x7704bf:c.instructions+=4;goto B7704bf;
case 0x7704c0:c.instructions+=3;goto B7704c0;
case 0x7704c2:c.instructions+=2;goto B7704c2;
case 0x7704c4:c.instructions+=1;goto B7704c4;
case 0x7704c6:goto L7704c6;
case 0x7704c8:c.instructions+=20;goto B7704c8;
case 0x7704ca:c.instructions+=19;goto B7704ca;
case 0x7704cd:c.instructions+=18;goto B7704cd;
case 0x7704d4:c.instructions+=17;goto B7704d4;
case 0x7704d7:c.instructions+=16;goto B7704d7;
case 0x7704dd:c.instructions+=15;goto B7704dd;
case 0x7704e0:c.instructions+=14;goto B7704e0;
case 0x7704e3:c.instructions+=13;goto B7704e3;
case 0x7704e6:c.instructions+=12;goto B7704e6;
case 0x7704e9:c.instructions+=11;goto B7704e9;
case 0x7704ef:c.instructions+=10;goto B7704ef;
case 0x7704f2:c.instructions+=9;goto B7704f2;
case 0x7704f8:c.instructions+=8;goto B7704f8;
case 0x7704fb:c.instructions+=7;goto B7704fb;
case 0x7704fd:c.instructions+=6;goto B7704fd;
case 0x7704ff:c.instructions+=5;goto B7704ff;
case 0x770502:c.instructions+=4;goto B770502;
case 0x770505:c.instructions+=3;goto B770505;
case 0x770509:c.instructions+=2;goto B770509;
case 0x770510:c.instructions+=1;goto B770510;
case 0x770512:goto L770512;
case 0x770514:c.instructions+=2;goto B770514;
case 0x77051b:c.instructions+=1;goto B77051b;
case 0x77051d:goto L77051d;
case 0x770523:goto L770523;
case 0x770524:c.instructions+=2;goto B770524;
case 0x77052a:c.instructions+=1;goto B77052a;
case 0x77052c:goto L77052c;
case 0x770533:c.instructions+=1;goto B770533;
case 0x770535:goto L770535;
case 0x770537:c.instructions+=2;goto B770537;
case 0x77053a:c.instructions+=1;goto B77053a;
case 0x770541:goto L770541;
case 0x770543:c.instructions+=12;goto B770543;
case 0x770546:c.instructions+=11;goto B770546;
case 0x770549:c.instructions+=10;goto B770549;
case 0x77054c:c.instructions+=9;goto B77054c;
case 0x770550:c.instructions+=8;goto B770550;
case 0x770552:c.instructions+=7;goto B770552;
case 0x770553:c.instructions+=6;goto B770553;
case 0x770555:c.instructions+=5;goto B770555;
case 0x770558:c.instructions+=4;goto B770558;
case 0x77055e:c.instructions+=3;goto B77055e;
case 0x770560:c.instructions+=2;goto B770560;
case 0x770563:c.instructions+=1;goto B770563;
case 0x770565:goto L770565;
case 0x770568:c.instructions+=22;goto B770568;
case 0x77056a:c.instructions+=21;goto B77056a;
case 0x77056c:c.instructions+=20;goto B77056c;
case 0x77056f:c.instructions+=19;goto B77056f;
case 0x770576:c.instructions+=18;goto B770576;
case 0x770579:c.instructions+=17;goto B770579;
case 0x77057f:c.instructions+=16;goto B77057f;
case 0x770582:c.instructions+=15;goto B770582;
case 0x770585:c.instructions+=14;goto B770585;
case 0x770588:c.instructions+=13;goto B770588;
case 0x77058b:c.instructions+=12;goto B77058b;
case 0x770591:c.instructions+=11;goto B770591;
case 0x770594:c.instructions+=10;goto B770594;
case 0x77059a:c.instructions+=9;goto B77059a;
case 0x77059d:c.instructions+=8;goto B77059d;
case 0x77059f:c.instructions+=7;goto B77059f;
case 0x7705a1:c.instructions+=6;goto B7705a1;
case 0x7705a4:c.instructions+=5;goto B7705a4;
case 0x7705a7:c.instructions+=4;goto B7705a7;
case 0x7705ab:c.instructions+=3;goto B7705ab;
case 0x7705b2:c.instructions+=2;goto B7705b2;
case 0x7705b5:c.instructions+=1;goto B7705b5;
case 0x7705b7:goto L7705b7;
case 0x7705ba:c.instructions+=4;goto B7705ba;
case 0x7705bd:c.instructions+=3;goto B7705bd;
case 0x7705c4:c.instructions+=2;goto B7705c4;
case 0x7705c7:c.instructions+=1;goto B7705c7;
case 0x7705c9:goto L7705c9;
case 0x7705cc:c.instructions+=5;goto B7705cc;
case 0x7705d2:c.instructions+=4;goto B7705d2;
case 0x7705d8:c.instructions+=3;goto B7705d8;
case 0x7705da:c.instructions+=2;goto B7705da;
case 0x7705dd:c.instructions+=1;goto B7705dd;
case 0x7705df:goto L7705df;
case 0x7705e5:c.instructions+=5;goto B7705e5;
case 0x7705e7:c.instructions+=4;goto B7705e7;
case 0x7705e8:c.instructions+=3;goto B7705e8;
case 0x7705ea:c.instructions+=2;goto B7705ea;
case 0x7705ec:c.instructions+=1;goto B7705ec;
case 0x7705ee:goto L7705ee;
case 0x7705f0:c.instructions+=22;goto B7705f0;
case 0x7705f2:c.instructions+=21;goto B7705f2;
case 0x7705f5:c.instructions+=20;goto B7705f5;
case 0x7705f8:c.instructions+=19;goto B7705f8;
case 0x7705ff:c.instructions+=18;goto B7705ff;
case 0x770602:c.instructions+=17;goto B770602;
case 0x770608:c.instructions+=16;goto B770608;
case 0x77060b:c.instructions+=15;goto B77060b;
case 0x77060e:c.instructions+=14;goto B77060e;
case 0x770611:c.instructions+=13;goto B770611;
case 0x770617:c.instructions+=12;goto B770617;
case 0x77061a:c.instructions+=11;goto B77061a;
case 0x77061d:c.instructions+=10;goto B77061d;
case 0x770620:c.instructions+=9;goto B770620;
case 0x770626:c.instructions+=8;goto B770626;
case 0x770629:c.instructions+=7;goto B770629;
case 0x77062b:c.instructions+=6;goto B77062b;
case 0x77062d:c.instructions+=5;goto B77062d;
case 0x770630:c.instructions+=4;goto B770630;
case 0x770633:c.instructions+=3;goto B770633;
case 0x770637:c.instructions+=2;goto B770637;
case 0x77063e:c.instructions+=1;goto B77063e;
case 0x770640:goto L770640;
case 0x770642:c.instructions+=2;goto B770642;
case 0x770649:c.instructions+=1;goto B770649;
case 0x77064b:goto L77064b;
case 0x770651:goto L770651;
case 0x770654:c.instructions+=2;goto B770654;
case 0x77065a:c.instructions+=1;goto B77065a;
case 0x770660:goto L770660;
case 0x770667:c.instructions+=7;goto B770667;
case 0x77066d:c.instructions+=6;goto B77066d;
case 0x77066f:c.instructions+=5;goto B77066f;
case 0x770670:c.instructions+=4;goto B770670;
case 0x770672:c.instructions+=3;goto B770672;
case 0x770674:c.instructions+=2;goto B770674;
case 0x770677:c.instructions+=1;goto B770677;
case 0x770679:goto L770679;
case 0x770680:c.instructions+=23;goto B770680;
case 0x770682:c.instructions+=22;goto B770682;
case 0x770684:c.instructions+=21;goto B770684;
case 0x770687:c.instructions+=20;goto B770687;
case 0x77068a:c.instructions+=19;goto B77068a;
case 0x770691:c.instructions+=18;goto B770691;
case 0x770694:c.instructions+=17;goto B770694;
case 0x77069a:c.instructions+=16;goto B77069a;
case 0x77069d:c.instructions+=15;goto B77069d;
case 0x7706a0:c.instructions+=14;goto B7706a0;
case 0x7706a3:c.instructions+=13;goto B7706a3;
case 0x7706a9:c.instructions+=12;goto B7706a9;
case 0x7706ac:c.instructions+=11;goto B7706ac;
case 0x7706af:c.instructions+=10;goto B7706af;
case 0x7706b2:c.instructions+=9;goto B7706b2;
case 0x7706b8:c.instructions+=8;goto B7706b8;
case 0x7706bb:c.instructions+=7;goto B7706bb;
case 0x7706bd:c.instructions+=6;goto B7706bd;
case 0x7706bf:c.instructions+=5;goto B7706bf;
case 0x7706c2:c.instructions+=4;goto B7706c2;
case 0x7706c5:c.instructions+=3;goto B7706c5;
case 0x7706c9:c.instructions+=2;goto B7706c9;
case 0x7706d0:c.instructions+=1;goto B7706d0;
case 0x7706d2:goto L7706d2;
case 0x7706d9:c.instructions+=3;goto B7706d9;
case 0x7706dc:c.instructions+=2;goto B7706dc;
case 0x7706e3:c.instructions+=1;goto B7706e3;
case 0x7706e5:goto L7706e5;
case 0x7706eb:c.instructions+=7;goto B7706eb;
case 0x7706f2:c.instructions+=6;goto B7706f2;
case 0x7706f3:c.instructions+=5;goto B7706f3;
case 0x7706f4:c.instructions+=4;goto B7706f4;
case 0x7706fa:c.instructions+=3;goto B7706fa;
case 0x7706fb:c.instructions+=2;goto B7706fb;
case 0x7706fc:c.instructions+=1;goto B7706fc;
case 0x7706ff:goto L7706ff;
case 0x770700:c.instructions+=7;goto B770700;
case 0x770701:c.instructions+=6;goto B770701;
case 0x770702:c.instructions+=5;goto B770702;
case 0x770704:c.instructions+=4;goto B770704;
case 0x770706:c.instructions+=3;goto B770706;
case 0x770708:c.instructions+=2;goto B770708;
case 0x77070e:c.instructions+=1;goto B77070e;
case 0x77070f:goto L77070f;
case 0x770712:c.instructions+=4;goto B770712;
case 0x770714:c.instructions+=3;goto B770714;
case 0x770717:c.instructions+=2;goto B770717;
case 0x770718:c.instructions+=1;goto B770718;
case 0x77071a:goto L77071a;
case 0x77071c:c.instructions+=2;goto B77071c;
case 0x770722:c.instructions+=1;goto B770722;
case 0x770723:goto L770723;
case 0x770726:c.instructions+=4;goto B770726;
case 0x770728:c.instructions+=3;goto B770728;
case 0x77072b:c.instructions+=2;goto B77072b;
case 0x77072c:c.instructions+=1;goto B77072c;
case 0x77072e:goto L77072e;
case 0x770734:c.instructions+=1;goto B770734;
case 0x770739:goto L770739;
case 0x77073c:c.instructions+=4;goto B77073c;
case 0x77073e:c.instructions+=3;goto B77073e;
case 0x770741:c.instructions+=2;goto B770741;
case 0x770742:c.instructions+=1;goto B770742;
case 0x770744:goto L770744;
case 0x770747:c.instructions+=8;goto B770747;
case 0x770749:c.instructions+=7;goto B770749;
case 0x77074a:c.instructions+=6;goto B77074a;
case 0x77074c:c.instructions+=5;goto B77074c;
case 0x77074e:c.instructions+=4;goto B77074e;
case 0x77074f:c.instructions+=3;goto B77074f;
case 0x770752:c.instructions+=2;goto B770752;
case 0x770753:c.instructions+=1;goto B770753;
case 0x770754:goto L770754;
case 0x77075a:c.instructions+=3;goto B77075a;
case 0x77075d:c.instructions+=2;goto B77075d;
case 0x77075e:c.instructions+=1;goto B77075e;
case 0x770760:goto L770760;
case 0x770763:c.instructions+=12;goto B770763;
case 0x770764:c.instructions+=11;goto B770764;
case 0x770767:c.instructions+=10;goto B770767;
case 0x77076d:c.instructions+=9;goto B77076d;
case 0x77076f:c.instructions+=8;goto B77076f;
case 0x770772:c.instructions+=7;goto B770772;
case 0x770775:c.instructions+=6;goto B770775;
case 0x770778:c.instructions+=5;goto B770778;
case 0x77077b:c.instructions+=4;goto B77077b;
case 0x77077e:c.instructions+=3;goto B77077e;
case 0x770781:c.instructions+=2;goto B770781;
case 0x770782:c.instructions+=1;goto B770782;
case 0x770784:goto L770784;
case 0x770786:c.instructions+=1;goto B770786;
case 0x770788:goto L770788;
case 0x77078b:c.instructions+=3;goto B77078b;
case 0x77078e:c.instructions+=2;goto B77078e;
case 0x770794:c.instructions+=1;goto B770794;
case 0x770797:goto L770797;
case 0x77079a:goto L77079a;
case 0x7707a2:c.instructions+=3;goto B7707a2;
case 0x7707a9:c.instructions+=2;goto B7707a9;
case 0x7707aa:c.instructions+=1;goto B7707aa;
case 0x7707ab:goto L7707ab;
case 0x7707ac:c.instructions+=6;goto B7707ac;
case 0x7707ae:c.instructions+=5;goto B7707ae;
case 0x7707af:c.instructions+=4;goto B7707af;
case 0x7707b0:c.instructions+=3;goto B7707b0;
case 0x7707b2:c.instructions+=2;goto B7707b2;
case 0x7707b4:c.instructions+=1;goto B7707b4;
case 0x7707b9:goto L7707b9;
case 0x7707bd:c.instructions+=2;goto B7707bd;
case 0x7707c7:c.instructions+=1;goto B7707c7;
case 0x7707c9:goto L7707c9;
case 0x7707cc:c.instructions+=21;goto B7707cc;
case 0x7707cf:c.instructions+=20;goto B7707cf;
case 0x7707d2:c.instructions+=19;goto B7707d2;
case 0x7707d5:c.instructions+=18;goto B7707d5;
case 0x7707d8:c.instructions+=17;goto B7707d8;
case 0x7707db:c.instructions+=16;goto B7707db;
case 0x7707de:c.instructions+=15;goto B7707de;
case 0x7707e1:c.instructions+=14;goto B7707e1;
case 0x7707e4:c.instructions+=13;goto B7707e4;
case 0x7707e5:c.instructions+=12;goto B7707e5;
case 0x7707e8:c.instructions+=11;goto B7707e8;
case 0x7707ea:c.instructions+=10;goto B7707ea;
case 0x7707ec:c.instructions+=9;goto B7707ec;
case 0x7707ef:c.instructions+=8;goto B7707ef;
case 0x7707f2:c.instructions+=7;goto B7707f2;
case 0x7707f5:c.instructions+=6;goto B7707f5;
case 0x7707f8:c.instructions+=5;goto B7707f8;
case 0x7707fa:c.instructions+=4;goto B7707fa;
case 0x7707fc:c.instructions+=3;goto B7707fc;
case 0x7707ff:c.instructions+=2;goto B7707ff;
case 0x770802:c.instructions+=1;goto B770802;
case 0x770803:goto L770803;
case 0x770805:c.instructions+=1;goto B770805;
case 0x770807:goto L770807;
case 0x77080a:c.instructions+=9;goto B77080a;
case 0x77080d:c.instructions+=8;goto B77080d;
case 0x770810:c.instructions+=7;goto B770810;
case 0x770812:c.instructions+=6;goto B770812;
case 0x770815:c.instructions+=5;goto B770815;
case 0x770818:c.instructions+=4;goto B770818;
case 0x77081b:c.instructions+=3;goto B77081b;
case 0x77081c:c.instructions+=2;goto B77081c;
case 0x77081d:c.instructions+=1;goto B77081d;
case 0x77081f:goto L77081f;
case 0x770820:c.instructions+=3;goto B770820;
case 0x770821:c.instructions+=2;goto B770821;
case 0x770822:c.instructions+=1;goto B770822;
case 0x770825:goto L770825;
case 0x770826:c.instructions+=10;goto B770826;
case 0x770828:c.instructions+=9;goto B770828;
case 0x77082b:c.instructions+=8;goto B77082b;
case 0x77082c:c.instructions+=7;goto B77082c;
case 0x77082e:c.instructions+=6;goto B77082e;
case 0x77082f:c.instructions+=5;goto B77082f;
case 0x770832:c.instructions+=4;goto B770832;
case 0x770834:c.instructions+=3;goto B770834;
case 0x770836:c.instructions+=2;goto B770836;
case 0x770837:c.instructions+=1;goto B770837;
case 0x770839:goto L770839;
case 0x77083c:c.instructions+=8;goto B77083c;
case 0x770841:c.instructions+=7;goto B770841;
case 0x770844:c.instructions+=6;goto B770844;
case 0x770846:c.instructions+=5;goto B770846;
case 0x770848:c.instructions+=4;goto B770848;
case 0x77084d:c.instructions+=3;goto B77084d;
case 0x77084e:c.instructions+=2;goto B77084e;
case 0x770851:c.instructions+=1;goto B770851;
case 0x770853:goto L770853;
case 0x770856:c.instructions+=1;goto B770856;
case 0x770858:goto L770858;
case 0x77085d:c.instructions+=2;goto B77085d;
case 0x77085f:c.instructions+=1;goto B77085f;
case 0x770861:goto L770861;
case 0x770865:c.instructions+=6;goto B770865;
case 0x770867:c.instructions+=5;goto B770867;
case 0x77086a:c.instructions+=4;goto B77086a;
case 0x77086d:c.instructions+=3;goto B77086d;
case 0x77086e:c.instructions+=2;goto B77086e;
case 0x770871:c.instructions+=1;goto B770871;
case 0x770873:goto L770873;
case 0x770875:c.instructions+=7;goto B770875;
case 0x770878:c.instructions+=6;goto B770878;
case 0x77087a:c.instructions+=5;goto B77087a;
case 0x77087c:c.instructions+=4;goto B77087c;
case 0x77087e:c.instructions+=3;goto B77087e;
case 0x77087f:c.instructions+=2;goto B77087f;
case 0x770881:c.instructions+=1;goto B770881;
case 0x770883:goto L770883;
case 0x770885:c.instructions+=1;goto B770885;
case 0x770889:goto L770889;
case 0x77088a:c.instructions+=2;goto B77088a;
case 0x77088d:c.instructions+=1;goto B77088d;
case 0x77088f:goto L77088f;
case 0x770890:c.instructions+=3;goto B770890;
case 0x770891:c.instructions+=2;goto B770891;
case 0x770892:c.instructions+=1;goto B770892;
case 0x770895:goto L770895;
case 0x770896:c.instructions+=16;goto B770896;
case 0x770898:c.instructions+=15;goto B770898;
case 0x77089b:c.instructions+=14;goto B77089b;
case 0x77089e:c.instructions+=13;goto B77089e;
case 0x7708a1:c.instructions+=12;goto B7708a1;
case 0x7708a4:c.instructions+=11;goto B7708a4;
case 0x7708a8:c.instructions+=10;goto B7708a8;
case 0x7708a9:c.instructions+=9;goto B7708a9;
case 0x7708ab:c.instructions+=8;goto B7708ab;
case 0x7708ad:c.instructions+=7;goto B7708ad;
case 0x7708af:c.instructions+=6;goto B7708af;
case 0x7708b0:c.instructions+=5;goto B7708b0;
case 0x7708b2:c.instructions+=4;goto B7708b2;
case 0x7708b5:c.instructions+=3;goto B7708b5;
case 0x7708bb:c.instructions+=2;goto B7708bb;
case 0x7708c5:c.instructions+=1;goto B7708c5;
case 0x7708cb:goto L7708cb;
case 0x7708d0:c.instructions+=1;goto B7708d0;
case 0x7708d2:goto L7708d2;
case 0x7708d8:c.instructions+=5;goto B7708d8;
case 0x7708de:c.instructions+=4;goto B7708de;
case 0x7708e5:c.instructions+=3;goto B7708e5;
case 0x7708e8:c.instructions+=2;goto B7708e8;
case 0x7708f0:c.instructions+=1;goto B7708f0;
case 0x7708f2:goto L7708f2;
case 0x7708f8:goto L7708f8;
case 0x7708f9:c.instructions+=2;goto B7708f9;
case 0x7708fc:c.instructions+=1;goto B7708fc;
case 0x7708fe:goto L7708fe;
case 0x770900:goto L770900;
case 0x770904:c.instructions+=1;goto B770904;
case 0x770906:goto L770906;
case 0x770909:c.instructions+=2;goto B770909;
case 0x77090c:c.instructions+=1;goto B77090c;
case 0x77090e:goto L77090e;
case 0x770910:goto L770910;
case 0x770916:c.instructions+=9;goto B770916;
case 0x77091c:c.instructions+=8;goto B77091c;
case 0x770923:c.instructions+=7;goto B770923;
case 0x770925:c.instructions+=6;goto B770925;
case 0x770928:c.instructions+=5;goto B770928;
case 0x77092e:c.instructions+=4;goto B77092e;
case 0x770936:c.instructions+=3;goto B770936;
case 0x77093c:c.instructions+=2;goto B77093c;
case 0x77093e:c.instructions+=1;goto B77093e;
case 0x770940:goto L770940;
case 0x770945:c.instructions+=1;goto B770945;
case 0x77094b:goto L77094b;
case 0x770952:c.instructions+=1;goto B770952;
case 0x770954:goto L770954;
case 0x770957:c.instructions+=7;goto B770957;
case 0x77095a:c.instructions+=6;goto B77095a;
case 0x770960:c.instructions+=5;goto B770960;
case 0x770961:c.instructions+=4;goto B770961;
case 0x770963:c.instructions+=3;goto B770963;
case 0x770965:c.instructions+=2;goto B770965;
case 0x770967:c.instructions+=1;goto B770967;
case 0x770969:goto L770969;
case 0x77096a:c.instructions+=2;goto B77096a;
case 0x77096c:c.instructions+=1;goto B77096c;
case 0x770971:goto L770971;
case 0x770972:goto L770972;
case 0x770975:c.instructions+=1;goto B770975;
case 0x770977:goto L770977;
case 0x77097a:c.instructions+=1;goto B77097a;
case 0x77097d:goto L77097d;
case 0x770983:c.instructions+=8;goto B770983;
case 0x77098a:c.instructions+=7;goto B77098a;
case 0x770990:c.instructions+=6;goto B770990;
case 0x770991:c.instructions+=5;goto B770991;
case 0x770997:c.instructions+=4;goto B770997;
case 0x770999:c.instructions+=3;goto B770999;
case 0x77099b:c.instructions+=2;goto B77099b;
case 0x7709a1:c.instructions+=1;goto B7709a1;
case 0x7709a6:goto L7709a6;
case 0x7709ac:c.instructions+=19;goto B7709ac;
case 0x7709b2:c.instructions+=18;goto B7709b2;
case 0x7709b8:c.instructions+=17;goto B7709b8;
case 0x7709bf:c.instructions+=16;goto B7709bf;
case 0x7709c5:c.instructions+=15;goto B7709c5;
case 0x7709cb:c.instructions+=14;goto B7709cb;
case 0x7709d2:c.instructions+=13;goto B7709d2;
case 0x7709d5:c.instructions+=12;goto B7709d5;
case 0x7709d8:c.instructions+=11;goto B7709d8;
case 0x7709db:c.instructions+=10;goto B7709db;
case 0x7709de:c.instructions+=9;goto B7709de;
case 0x7709e1:c.instructions+=8;goto B7709e1;
case 0x7709e4:c.instructions+=7;goto B7709e4;
case 0x7709e7:c.instructions+=6;goto B7709e7;
case 0x7709ea:c.instructions+=5;goto B7709ea;
case 0x7709ee:c.instructions+=4;goto B7709ee;
case 0x7709f5:c.instructions+=3;goto B7709f5;
case 0x7709fc:c.instructions+=2;goto B7709fc;
case 0x7709fe:c.instructions+=1;goto B7709fe;
case 0x770a00:goto L770a00;
case 0x770a03:c.instructions+=1;goto B770a03;
case 0x770a05:goto L770a05;
case 0x770a08:goto L770a08;
case 0x770a0a:c.instructions+=11;goto B770a0a;
case 0x770a11:c.instructions+=10;goto B770a11;
case 0x770a14:c.instructions+=9;goto B770a14;
case 0x770a18:c.instructions+=8;goto B770a18;
case 0x770a1b:c.instructions+=7;goto B770a1b;
case 0x770a1f:c.instructions+=6;goto B770a1f;
case 0x770a25:c.instructions+=5;goto B770a25;
case 0x770a26:c.instructions+=4;goto B770a26;
case 0x770a28:c.instructions+=3;goto B770a28;
case 0x770a2a:c.instructions+=2;goto B770a2a;
case 0x770a2d:c.instructions+=1;goto B770a2d;
case 0x770a32:goto L770a32;
case 0x770a39:c.instructions+=1;goto B770a39;
case 0x770a3f:goto L770a3f;
case 0x770a45:c.instructions+=6;goto B770a45;
case 0x770a4b:c.instructions+=5;goto B770a4b;
case 0x770a51:c.instructions+=4;goto B770a51;
case 0x770a58:c.instructions+=3;goto B770a58;
case 0x770a5b:c.instructions+=2;goto B770a5b;
case 0x770a5d:c.instructions+=1;goto B770a5d;
case 0x770a62:goto L770a62;
case 0x770a65:c.instructions+=3;goto B770a65;
case 0x770a6b:c.instructions+=2;goto B770a6b;
case 0x770a6d:c.instructions+=1;goto B770a6d;
case 0x770a72:goto L770a72;
case 0x770a73:c.instructions+=3;goto B770a73;
case 0x770a74:c.instructions+=2;goto B770a74;
case 0x770a75:c.instructions+=1;goto B770a75;
case 0x770a78:goto L770a78;
case 0x770a79:c.instructions+=5;goto B770a79;
case 0x770a7b:c.instructions+=4;goto B770a7b;
case 0x770a81:c.instructions+=3;goto B770a81;
case 0x770a87:c.instructions+=2;goto B770a87;
case 0x770a88:c.instructions+=1;goto B770a88;
case 0x770a8d:goto L770a8d;
case 0x770a93:c.instructions+=3;goto B770a93;
case 0x770a99:c.instructions+=2;goto B770a99;
case 0x770a9a:c.instructions+=1;goto B770a9a;
case 0x770a9f:goto L770a9f;
case 0x770aa5:c.instructions+=2;goto B770aa5;
case 0x770aa6:c.instructions+=1;goto B770aa6;
case 0x770aab:goto L770aab;
case 0x770aad:c.instructions+=1;goto B770aad;
case 0x770aae:goto L770aae;
case 0x770ab5:c.instructions+=2;goto B770ab5;
case 0x770abe:c.instructions+=1;goto B770abe;
case 0x770ac0:goto L770ac0;
case 0x770ac1:c.instructions+=2;goto B770ac1;
case 0x770ac4:c.instructions+=1;goto B770ac4;
case 0x770ac6:goto L770ac6;
case 0x770aca:c.instructions+=3;goto B770aca;
case 0x770ad0:c.instructions+=2;goto B770ad0;
case 0x770ad1:c.instructions+=1;goto B770ad1;
case 0x770ad2:goto L770ad2;
case 0x770ad3:c.instructions+=5;goto B770ad3;
case 0x770ad5:c.instructions+=4;goto B770ad5;
case 0x770ad8:c.instructions+=3;goto B770ad8;
case 0x770ade:c.instructions+=2;goto B770ade;
case 0x770ae1:c.instructions+=1;goto B770ae1;
case 0x770ae3:goto L770ae3;
case 0x770ae4:c.instructions+=25;goto B770ae4;
case 0x770ae5:c.instructions+=24;goto B770ae5;
case 0x770ae8:c.instructions+=23;goto B770ae8;
case 0x770aea:c.instructions+=22;goto B770aea;
case 0x770aec:c.instructions+=21;goto B770aec;
case 0x770aef:c.instructions+=20;goto B770aef;
case 0x770af6:c.instructions+=19;goto B770af6;
case 0x770af9:c.instructions+=18;goto B770af9;
case 0x770aff:c.instructions+=17;goto B770aff;
case 0x770b02:c.instructions+=16;goto B770b02;
case 0x770b05:c.instructions+=15;goto B770b05;
case 0x770b08:c.instructions+=14;goto B770b08;
case 0x770b0e:c.instructions+=13;goto B770b0e;
case 0x770b11:c.instructions+=12;goto B770b11;
case 0x770b14:c.instructions+=11;goto B770b14;
case 0x770b1a:c.instructions+=10;goto B770b1a;
case 0x770b1d:c.instructions+=9;goto B770b1d;
case 0x770b1f:c.instructions+=8;goto B770b1f;
case 0x770b21:c.instructions+=7;goto B770b21;
case 0x770b24:c.instructions+=6;goto B770b24;
case 0x770b27:c.instructions+=5;goto B770b27;
case 0x770b2d:c.instructions+=4;goto B770b2d;
case 0x770b34:c.instructions+=3;goto B770b34;
case 0x770b35:c.instructions+=2;goto B770b35;
case 0x770b36:c.instructions+=1;goto B770b36;
case 0x770b38:goto L770b38;
case 0x770b3b:c.instructions+=4;goto B770b3b;
case 0x770b3d:c.instructions+=3;goto B770b3d;
case 0x770b44:c.instructions+=2;goto B770b44;
case 0x770b47:c.instructions+=1;goto B770b47;
case 0x770b4d:goto L770b4d;
case 0x770b50:c.instructions+=3;goto B770b50;
case 0x770b53:c.instructions+=2;goto B770b53;
case 0x770b55:c.instructions+=1;goto B770b55;
case 0x770b5a:goto L770b5a;
case 0x770b5b:c.instructions+=1;goto B770b5b;
case 0x770b5e:goto L770b5e;
case 0x770b5f:c.instructions+=8;goto B770b5f;
case 0x770b61:c.instructions+=7;goto B770b61;
case 0x770b62:c.instructions+=6;goto B770b62;
case 0x770b65:c.instructions+=5;goto B770b65;
case 0x770b67:c.instructions+=4;goto B770b67;
case 0x770b6a:c.instructions+=3;goto B770b6a;
case 0x770b6b:c.instructions+=2;goto B770b6b;
case 0x770b6e:c.instructions+=1;goto B770b6e;
case 0x770b70:goto L770b70;
case 0x770b74:c.instructions+=1;goto B770b74;
case 0x770b76:goto L770b76;
case 0x770b78:c.instructions+=1;goto B770b78;
case 0x770b7d:goto L770b7d;
case 0x770b83:c.instructions+=2;goto B770b83;
case 0x770b84:c.instructions+=1;goto B770b84;
case 0x770b89:goto L770b89;
case 0x770b8f:c.instructions+=2;goto B770b8f;
case 0x770b90:c.instructions+=1;goto B770b90;
case 0x770b95:goto L770b95;
case 0x770b97:c.instructions+=1;goto B770b97;
case 0x770b9c:goto L770b9c;
case 0x770ba2:c.instructions+=7;goto B770ba2;
case 0x770ba8:c.instructions+=6;goto B770ba8;
case 0x770bab:c.instructions+=5;goto B770bab;
case 0x770bae:c.instructions+=4;goto B770bae;
case 0x770bb1:c.instructions+=3;goto B770bb1;
case 0x770bb4:c.instructions+=2;goto B770bb4;
case 0x770bb6:c.instructions+=1;goto B770bb6;
case 0x770bb8:goto L770bb8;
case 0x770bba:goto L770bba;
case 0x770bbd:goto L770bbd;
case 0x770bbf:goto L770bbf;
case 0x770bc0:c.instructions+=3;goto B770bc0;
case 0x770bc3:c.instructions+=2;goto B770bc3;
case 0x770bc5:c.instructions+=1;goto B770bc5;
case 0x770bc7:goto L770bc7;
case 0x770bcb:c.instructions+=1;goto B770bcb;
case 0x770bcd:goto L770bcd;
case 0x770bd0:c.instructions+=4;goto B770bd0;
case 0x770bd1:c.instructions+=3;goto B770bd1;
case 0x770bd4:c.instructions+=2;goto B770bd4;
case 0x770bd5:c.instructions+=1;goto B770bd5;
case 0x770bda:goto L770bda;
case 0x770bdf:goto L770bdf;
case 0x770be1:c.instructions+=2;goto B770be1;
case 0x770be7:c.instructions+=1;goto B770be7;
case 0x770be9:goto L770be9;
case 0x770bec:c.instructions+=3;goto B770bec;
case 0x770bef:c.instructions+=2;goto B770bef;
case 0x770bf2:c.instructions+=1;goto B770bf2;
case 0x770bf4:goto L770bf4;
case 0x770bf6:c.instructions+=20;goto B770bf6;
case 0x770bf8:c.instructions+=19;goto B770bf8;
case 0x770bfb:c.instructions+=18;goto B770bfb;
case 0x770c02:c.instructions+=17;goto B770c02;
case 0x770c05:c.instructions+=16;goto B770c05;
case 0x770c0b:c.instructions+=15;goto B770c0b;
case 0x770c0e:c.instructions+=14;goto B770c0e;
case 0x770c11:c.instructions+=13;goto B770c11;
case 0x770c14:c.instructions+=12;goto B770c14;
case 0x770c17:c.instructions+=11;goto B770c17;
case 0x770c1d:c.instructions+=10;goto B770c1d;
case 0x770c20:c.instructions+=9;goto B770c20;
case 0x770c26:c.instructions+=8;goto B770c26;
case 0x770c29:c.instructions+=7;goto B770c29;
case 0x770c2b:c.instructions+=6;goto B770c2b;
case 0x770c2d:c.instructions+=5;goto B770c2d;
case 0x770c30:c.instructions+=4;goto B770c30;
case 0x770c33:c.instructions+=3;goto B770c33;
case 0x770c39:c.instructions+=2;goto B770c39;
case 0x770c40:c.instructions+=1;goto B770c40;
case 0x770c42:goto L770c42;
case 0x770c44:c.instructions+=3;goto B770c44;
case 0x770c4b:c.instructions+=2;goto B770c4b;
case 0x770c4e:c.instructions+=1;goto B770c4e;
case 0x770c54:goto L770c54;
case 0x770c59:c.instructions+=2;goto B770c59;
case 0x770c5e:c.instructions+=1;goto B770c5e;
case 0x770c63:goto L770c63;
case 0x770c66:c.instructions+=3;goto B770c66;
case 0x770c69:c.instructions+=2;goto B770c69;
case 0x770c6c:c.instructions+=1;goto B770c6c;
case 0x770c6e:goto L770c6e;
case 0x770c70:c.instructions+=20;goto B770c70;
case 0x770c72:c.instructions+=19;goto B770c72;
case 0x770c75:c.instructions+=18;goto B770c75;
case 0x770c7c:c.instructions+=17;goto B770c7c;
case 0x770c7f:c.instructions+=16;goto B770c7f;
case 0x770c85:c.instructions+=15;goto B770c85;
case 0x770c88:c.instructions+=14;goto B770c88;
case 0x770c8b:c.instructions+=13;goto B770c8b;
case 0x770c8e:c.instructions+=12;goto B770c8e;
case 0x770c94:c.instructions+=11;goto B770c94;
case 0x770c97:c.instructions+=10;goto B770c97;
case 0x770c9a:c.instructions+=9;goto B770c9a;
case 0x770ca0:c.instructions+=8;goto B770ca0;
case 0x770ca3:c.instructions+=7;goto B770ca3;
case 0x770ca5:c.instructions+=6;goto B770ca5;
case 0x770ca7:c.instructions+=5;goto B770ca7;
case 0x770caa:c.instructions+=4;goto B770caa;
case 0x770cad:c.instructions+=3;goto B770cad;
case 0x770cb3:c.instructions+=2;goto B770cb3;
case 0x770cba:c.instructions+=1;goto B770cba;
case 0x770cbc:goto L770cbc;
case 0x770cbe:c.instructions+=3;goto B770cbe;
case 0x770cc5:c.instructions+=2;goto B770cc5;
case 0x770cc8:c.instructions+=1;goto B770cc8;
case 0x770cce:goto L770cce;
case 0x770ccf:c.instructions+=9;goto B770ccf;
case 0x770cd0:c.instructions+=8;goto B770cd0;
case 0x770cd6:c.instructions+=7;goto B770cd6;
case 0x770cd7:c.instructions+=6;goto B770cd7;
case 0x770cd8:c.instructions+=5;goto B770cd8;
case 0x770cde:c.instructions+=4;goto B770cde;
case 0x770cdf:c.instructions+=3;goto B770cdf;
case 0x770ce0:c.instructions+=2;goto B770ce0;
case 0x770ce2:c.instructions+=1;goto B770ce2;
case 0x770ce7:goto L770ce7;
case 0x770ced:c.instructions+=3;goto B770ced;
case 0x770cee:c.instructions+=2;goto B770cee;
case 0x770cf4:c.instructions+=1;goto B770cf4;
case 0x770cf5:goto L770cf5;
case 0x770cf7:c.instructions+=1;goto B770cf7;
case 0x770cfc:goto L770cfc;
case 0x770cfe:c.instructions+=1;goto B770cfe;
case 0x770d03:goto L770d03;
case 0x770d07:c.instructions+=2;goto B770d07;
case 0x770d08:c.instructions+=1;goto B770d08;
case 0x770d0a:goto L770d0a;
case 0x770d0f:goto L770d0f;
case 0x770d10:c.instructions+=3;goto B770d10;
case 0x770d11:c.instructions+=2;goto B770d11;
case 0x770d12:c.instructions+=1;goto B770d12;
case 0x770d16:goto L770d16;
case 0x770d1c:goto L770d1c;
case 0x770d22:goto L770d22;
case 0x770d28:goto L770d28;
case 0x770d2e:goto L770d2e;
case 0x770d34:goto L770d34;
case 0x770d3a:goto L770d3a;
case 0x770d40:goto L770d40;
case 0x770d46:goto L770d46;
case 0x770d4c:goto L770d4c;
case 0x770d52:goto L770d52;
case 0x770d58:goto L770d58;
case 0x770d67:goto L770d67;
case 0x770d68:c.instructions+=3;goto B770d68;
case 0x770d6a:c.instructions+=2;goto B770d6a;
case 0x770d6b:c.instructions+=1;goto B770d6b;
case 0x770d70:goto L770d70;
case 0x770d71:c.instructions+=3;goto B770d71;
case 0x770d73:c.instructions+=2;goto B770d73;
case 0x770d74:c.instructions+=1;goto B770d74;
case 0x770d79:goto L770d79;
case 0x770d7a:c.instructions+=3;goto B770d7a;
case 0x770d7c:c.instructions+=2;goto B770d7c;
case 0x770d7d:c.instructions+=1;goto B770d7d;
case 0x770d82:goto L770d82;
case 0x770d83:c.instructions+=3;goto B770d83;
case 0x770d85:c.instructions+=2;goto B770d85;
case 0x770d86:c.instructions+=1;goto B770d86;
case 0x770d8b:goto L770d8b;
case 0x770d8c:c.instructions+=3;goto B770d8c;
case 0x770d8e:c.instructions+=2;goto B770d8e;
case 0x770d8f:c.instructions+=1;goto B770d8f;
case 0x770d94:goto L770d94;
case 0x770d95:c.instructions+=3;goto B770d95;
case 0x770d97:c.instructions+=2;goto B770d97;
case 0x770d98:c.instructions+=1;goto B770d98;
case 0x770d9d:goto L770d9d;
case 0x770d9e:c.instructions+=3;goto B770d9e;
case 0x770da0:c.instructions+=2;goto B770da0;
case 0x770da1:c.instructions+=1;goto B770da1;
case 0x770da6:goto L770da6;
case 0x770da7:c.instructions+=3;goto B770da7;
case 0x770da9:c.instructions+=2;goto B770da9;
case 0x770daa:c.instructions+=1;goto B770daa;
case 0x770daf:goto L770daf;
case 0x770db0:c.instructions+=3;goto B770db0;
case 0x770db2:c.instructions+=2;goto B770db2;
case 0x770db3:c.instructions+=1;goto B770db3;
case 0x770db8:goto L770db8;
case 0x770db9:c.instructions+=3;goto B770db9;
case 0x770dbb:c.instructions+=2;goto B770dbb;
case 0x770dbc:c.instructions+=1;goto B770dbc;
case 0x770dc1:goto L770dc1;
case 0x770dc2:c.instructions+=3;goto B770dc2;
case 0x770dc4:c.instructions+=2;goto B770dc4;
case 0x770dc5:c.instructions+=1;goto B770dc5;
case 0x770dca:goto L770dca;
case 0x770dcb:c.instructions+=3;goto B770dcb;
case 0x770dcd:c.instructions+=2;goto B770dcd;
case 0x770dce:c.instructions+=1;goto B770dce;
case 0x770dd3:goto L770dd3;
case 0x770dd4:c.instructions+=3;goto B770dd4;
case 0x770dd6:c.instructions+=2;goto B770dd6;
case 0x770dd7:c.instructions+=1;goto B770dd7;
case 0x770ddc:goto L770ddc;
case 0x770ddd:c.instructions+=3;goto B770ddd;
case 0x770ddf:c.instructions+=2;goto B770ddf;
case 0x770de0:c.instructions+=1;goto B770de0;
case 0x770de5:goto L770de5;
case 0x770de6:c.instructions+=3;goto B770de6;
case 0x770de8:c.instructions+=2;goto B770de8;
case 0x770de9:c.instructions+=1;goto B770de9;
case 0x770dee:goto L770dee;
case 0x770def:c.instructions+=3;goto B770def;
case 0x770df1:c.instructions+=2;goto B770df1;
case 0x770df2:c.instructions+=1;goto B770df2;
case 0x770df7:goto L770df7;
case 0x770df8:c.instructions+=3;goto B770df8;
case 0x770dfa:c.instructions+=2;goto B770dfa;
case 0x770dfb:c.instructions+=1;goto B770dfb;
case 0x770e00:goto L770e00;
case 0x770e01:c.instructions+=3;goto B770e01;
case 0x770e03:c.instructions+=2;goto B770e03;
case 0x770e04:c.instructions+=1;goto B770e04;
case 0x770e09:goto L770e09;
case 0x770e0a:c.instructions+=3;goto B770e0a;
case 0x770e0c:c.instructions+=2;goto B770e0c;
case 0x770e0d:c.instructions+=1;goto B770e0d;
case 0x770e12:goto L770e12;
case 0x770e13:c.instructions+=3;goto B770e13;
case 0x770e15:c.instructions+=2;goto B770e15;
case 0x770e16:c.instructions+=1;goto B770e16;
case 0x770e1b:goto L770e1b;
case 0x770e1c:c.instructions+=3;goto B770e1c;
case 0x770e1e:c.instructions+=2;goto B770e1e;
case 0x770e1f:c.instructions+=1;goto B770e1f;
case 0x770e24:goto L770e24;
case 0x770e25:c.instructions+=3;goto B770e25;
case 0x770e27:c.instructions+=2;goto B770e27;
case 0x770e28:c.instructions+=1;goto B770e28;
case 0x770e2d:goto L770e2d;
case 0x770e2e:c.instructions+=3;goto B770e2e;
case 0x770e30:c.instructions+=2;goto B770e30;
case 0x770e31:c.instructions+=1;goto B770e31;
case 0x770e36:goto L770e36;
case 0x770e37:c.instructions+=3;goto B770e37;
case 0x770e39:c.instructions+=2;goto B770e39;
case 0x770e3a:c.instructions+=1;goto B770e3a;
case 0x770e3f:goto L770e3f;
case 0x770e40:c.instructions+=3;goto B770e40;
case 0x770e42:c.instructions+=2;goto B770e42;
case 0x770e43:c.instructions+=1;goto B770e43;
case 0x770e48:goto L770e48;
case 0x770e49:c.instructions+=3;goto B770e49;
case 0x770e4b:c.instructions+=2;goto B770e4b;
case 0x770e4c:c.instructions+=1;goto B770e4c;
case 0x770e51:goto L770e51;
case 0x770e52:c.instructions+=3;goto B770e52;
case 0x770e54:c.instructions+=2;goto B770e54;
case 0x770e55:c.instructions+=1;goto B770e55;
case 0x770e5a:goto L770e5a;
case 0x770e5b:c.instructions+=3;goto B770e5b;
case 0x770e5d:c.instructions+=2;goto B770e5d;
case 0x770e5e:c.instructions+=1;goto B770e5e;
case 0x770e63:goto L770e63;
case 0x770e64:c.instructions+=3;goto B770e64;
case 0x770e66:c.instructions+=2;goto B770e66;
case 0x770e67:c.instructions+=1;goto B770e67;
case 0x770e6c:goto L770e6c;
case 0x770e6d:c.instructions+=3;goto B770e6d;
case 0x770e6f:c.instructions+=2;goto B770e6f;
case 0x770e70:c.instructions+=1;goto B770e70;
case 0x770e75:goto L770e75;
case 0x770e76:c.instructions+=3;goto B770e76;
case 0x770e78:c.instructions+=2;goto B770e78;
case 0x770e79:c.instructions+=1;goto B770e79;
case 0x770e7e:goto L770e7e;
case 0x770e7f:c.instructions+=3;goto B770e7f;
case 0x770e81:c.instructions+=2;goto B770e81;
case 0x770e82:c.instructions+=1;goto B770e82;
case 0x770e87:goto L770e87;
case 0x770e88:c.instructions+=3;goto B770e88;
case 0x770e8a:c.instructions+=2;goto B770e8a;
case 0x770e8b:c.instructions+=1;goto B770e8b;
case 0x770e90:goto L770e90;
case 0x770e91:c.instructions+=3;goto B770e91;
case 0x770e93:c.instructions+=2;goto B770e93;
case 0x770e94:c.instructions+=1;goto B770e94;
case 0x770e99:goto L770e99;
case 0x770e9a:c.instructions+=3;goto B770e9a;
case 0x770e9c:c.instructions+=2;goto B770e9c;
case 0x770e9d:c.instructions+=1;goto B770e9d;
case 0x770ea2:goto L770ea2;
case 0x770ea3:c.instructions+=3;goto B770ea3;
case 0x770ea5:c.instructions+=2;goto B770ea5;
case 0x770ea6:c.instructions+=1;goto B770ea6;
case 0x770eab:goto L770eab;
case 0x770eac:c.instructions+=3;goto B770eac;
case 0x770eae:c.instructions+=2;goto B770eae;
case 0x770eaf:c.instructions+=1;goto B770eaf;
case 0x770eb4:goto L770eb4;
case 0x770eb5:c.instructions+=3;goto B770eb5;
case 0x770eb7:c.instructions+=2;goto B770eb7;
case 0x770eb8:c.instructions+=1;goto B770eb8;
case 0x770ebd:goto L770ebd;
case 0x770ebe:c.instructions+=3;goto B770ebe;
case 0x770ec0:c.instructions+=2;goto B770ec0;
case 0x770ec1:c.instructions+=1;goto B770ec1;
case 0x770ec6:goto L770ec6;
case 0x770ec7:c.instructions+=3;goto B770ec7;
case 0x770ec9:c.instructions+=2;goto B770ec9;
case 0x770eca:c.instructions+=1;goto B770eca;
case 0x770ecf:goto L770ecf;
case 0x770ed0:c.instructions+=3;goto B770ed0;
case 0x770ed2:c.instructions+=2;goto B770ed2;
case 0x770ed3:c.instructions+=1;goto B770ed3;
case 0x770ed8:goto L770ed8;
case 0x770ed9:c.instructions+=3;goto B770ed9;
case 0x770edb:c.instructions+=2;goto B770edb;
case 0x770edc:c.instructions+=1;goto B770edc;
case 0x770ee1:goto L770ee1;
case 0x770ee2:c.instructions+=3;goto B770ee2;
case 0x770ee4:c.instructions+=2;goto B770ee4;
case 0x770ee5:c.instructions+=1;goto B770ee5;
case 0x770eea:goto L770eea;
case 0x770eeb:c.instructions+=3;goto B770eeb;
case 0x770eed:c.instructions+=2;goto B770eed;
case 0x770eee:c.instructions+=1;goto B770eee;
case 0x770ef3:goto L770ef3;
case 0x770ef4:c.instructions+=3;goto B770ef4;
case 0x770ef6:c.instructions+=2;goto B770ef6;
case 0x770ef7:c.instructions+=1;goto B770ef7;
case 0x770efc:goto L770efc;
case 0x770efd:c.instructions+=3;goto B770efd;
case 0x770eff:c.instructions+=2;goto B770eff;
case 0x770f00:c.instructions+=1;goto B770f00;
case 0x770f05:goto L770f05;
case 0x770f06:c.instructions+=3;goto B770f06;
case 0x770f08:c.instructions+=2;goto B770f08;
case 0x770f09:c.instructions+=1;goto B770f09;
case 0x770f0e:goto L770f0e;
case 0x770f0f:c.instructions+=3;goto B770f0f;
case 0x770f11:c.instructions+=2;goto B770f11;
case 0x770f12:c.instructions+=1;goto B770f12;
case 0x770f17:goto L770f17;
case 0x770f18:c.instructions+=3;goto B770f18;
case 0x770f1a:c.instructions+=2;goto B770f1a;
case 0x770f1b:c.instructions+=1;goto B770f1b;
case 0x770f20:goto L770f20;
case 0x770f21:c.instructions+=3;goto B770f21;
case 0x770f23:c.instructions+=2;goto B770f23;
case 0x770f24:c.instructions+=1;goto B770f24;
case 0x770f29:goto L770f29;
case 0x770f2a:c.instructions+=3;goto B770f2a;
case 0x770f2c:c.instructions+=2;goto B770f2c;
case 0x770f2d:c.instructions+=1;goto B770f2d;
case 0x770f32:goto L770f32;
case 0x770f33:c.instructions+=3;goto B770f33;
case 0x770f35:c.instructions+=2;goto B770f35;
case 0x770f36:c.instructions+=1;goto B770f36;
case 0x770f3b:goto L770f3b;
case 0x770f3c:c.instructions+=3;goto B770f3c;
case 0x770f3e:c.instructions+=2;goto B770f3e;
case 0x770f3f:c.instructions+=1;goto B770f3f;
case 0x770f44:goto L770f44;
case 0x770f45:c.instructions+=3;goto B770f45;
case 0x770f47:c.instructions+=2;goto B770f47;
case 0x770f48:c.instructions+=1;goto B770f48;
case 0x770f4d:goto L770f4d;
case 0x770f4e:c.instructions+=3;goto B770f4e;
case 0x770f50:c.instructions+=2;goto B770f50;
case 0x770f51:c.instructions+=1;goto B770f51;
case 0x770f56:goto L770f56;
case 0x770f57:c.instructions+=3;goto B770f57;
case 0x770f59:c.instructions+=2;goto B770f59;
case 0x770f5a:c.instructions+=1;goto B770f5a;
case 0x770f5f:goto L770f5f;
case 0x770f60:c.instructions+=3;goto B770f60;
case 0x770f62:c.instructions+=2;goto B770f62;
case 0x770f63:c.instructions+=1;goto B770f63;
case 0x770f68:goto L770f68;
case 0x770f69:c.instructions+=3;goto B770f69;
case 0x770f6b:c.instructions+=2;goto B770f6b;
case 0x770f6c:c.instructions+=1;goto B770f6c;
case 0x770f71:goto L770f71;
case 0x770f72:c.instructions+=3;goto B770f72;
case 0x770f74:c.instructions+=2;goto B770f74;
case 0x770f75:c.instructions+=1;goto B770f75;
case 0x770f7a:goto L770f7a;
case 0x770f7b:c.instructions+=3;goto B770f7b;
case 0x770f7d:c.instructions+=2;goto B770f7d;
case 0x770f7e:c.instructions+=1;goto B770f7e;
case 0x770f83:goto L770f83;
case 0x770f84:c.instructions+=3;goto B770f84;
case 0x770f86:c.instructions+=2;goto B770f86;
case 0x770f87:c.instructions+=1;goto B770f87;
case 0x770f8c:goto L770f8c;
case 0x770f8d:c.instructions+=3;goto B770f8d;
case 0x770f8f:c.instructions+=2;goto B770f8f;
case 0x770f90:c.instructions+=1;goto B770f90;
case 0x770f95:goto L770f95;
case 0x770f96:c.instructions+=3;goto B770f96;
case 0x770f98:c.instructions+=2;goto B770f98;
case 0x770f99:c.instructions+=1;goto B770f99;
case 0x770f9e:goto L770f9e;
case 0x770f9f:c.instructions+=3;goto B770f9f;
case 0x770fa1:c.instructions+=2;goto B770fa1;
case 0x770fa2:c.instructions+=1;goto B770fa2;
case 0x770fa7:goto L770fa7;
case 0x770fa8:c.instructions+=3;goto B770fa8;
case 0x770faa:c.instructions+=2;goto B770faa;
case 0x770fab:c.instructions+=1;goto B770fab;
case 0x770fb0:goto L770fb0;
case 0x770fb1:c.instructions+=3;goto B770fb1;
case 0x770fb3:c.instructions+=2;goto B770fb3;
case 0x770fb4:c.instructions+=1;goto B770fb4;
case 0x770fb9:goto L770fb9;
case 0x770fba:c.instructions+=3;goto B770fba;
case 0x770fbc:c.instructions+=2;goto B770fbc;
case 0x770fbd:c.instructions+=1;goto B770fbd;
case 0x770fc2:goto L770fc2;
case 0x770fc3:c.instructions+=3;goto B770fc3;
case 0x770fc5:c.instructions+=2;goto B770fc5;
case 0x770fc6:c.instructions+=1;goto B770fc6;
case 0x770fcb:goto L770fcb;
case 0x770fcc:c.instructions+=3;goto B770fcc;
case 0x770fce:c.instructions+=2;goto B770fce;
case 0x770fcf:c.instructions+=1;goto B770fcf;
case 0x770fdb:goto L770fdb;
case 0x770fe1:goto L770fe1;
case 0x770fe3:c.instructions+=1;goto B770fe3;
case 0x770fe5:goto L770fe5;
case 0x770fe7:goto L770fe7;
case 0x770fed:goto L770fed;
case 0x770fee:c.instructions+=5;goto B770fee;
case 0x770ff0:c.instructions+=4;goto B770ff0;
case 0x770ff4:c.instructions+=3;goto B770ff4;
case 0x770ff5:c.instructions+=2;goto B770ff5;
case 0x770ffa:c.instructions+=1;goto B770ffa;
case 0x770ffc:goto L770ffc;
case 0x770fff:c.instructions+=1;goto B770fff;
default:missing_instruction(c.pc);}
B770002:L770002:{c.instructions+=4;NFSU2_TR(0x770002);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B770004:{NFSU2_TR(0x770004);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770006:{NFSU2_TR(0x770006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770009:{NFSU2_TR(0x770009);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770061;}}
}
B77000b:L77000b:{c.instructions+=23;NFSU2_TR(0x77000b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xabcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B770012:{NFSU2_TR(0x770012);
__builtin_memmove((R+28),(R+24),4);
}
B770014:{NFSU2_TR(0x770014);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B770016:{NFSU2_TR(0x770016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770019:{NFSU2_TR(0x770019);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B770020:{NFSU2_TR(0x770020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B770023:{NFSU2_TR(0x770023);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770029:{NFSU2_TR(0x770029);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77002c:{NFSU2_TR(0x77002c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77002f:{NFSU2_TR(0x77002f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770032:{NFSU2_TR(0x770032);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770038:{NFSU2_TR(0x770038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B77003b:{NFSU2_TR(0x77003b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77003e:{NFSU2_TR(0x77003e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770044:{NFSU2_TR(0x770044);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770047:{NFSU2_TR(0x770047);
w1(R+4,u8(0x10ull));
}
B770049:{NFSU2_TR(0x770049);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B77004b:{NFSU2_TR(0x77004b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B77004e:{NFSU2_TR(0x77004e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770051:{NFSU2_TR(0x770051);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B770055:{NFSU2_TR(0x770055);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B77005c:{NFSU2_TR(0x77005c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B77005f:{NFSU2_TR(0x77005f);
{goto L770077;}
}
B770061:L770061:{c.instructions+=5;NFSU2_TR(0x770061);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xabcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B770068:{NFSU2_TR(0x770068);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+28,shl<u16>(r2(R+28),u64(r1(U+0))));
}
B77006b:{NFSU2_TR(0x77006b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B770072:{NFSU2_TR(0x770072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B770075:{NFSU2_TR(0x770075);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B770077:L770077:{c.instructions+=4;NFSU2_TR(0x770077);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff5ull))));
}
B77007a:{NFSU2_TR(0x77007a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B77007d:{NFSU2_TR(0x77007d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770083:{NFSU2_TR(0x770083);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7700c9;}}
}
B770085:L770085:{c.instructions+=19;NFSU2_TR(0x770085);
__builtin_memmove((R+28),(R+24),4);
}
B770087:{NFSU2_TR(0x770087);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B770089:{NFSU2_TR(0x770089);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77008c:{NFSU2_TR(0x77008c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B770093:{NFSU2_TR(0x770093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B770096:{NFSU2_TR(0x770096);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B77009c:{NFSU2_TR(0x77009c);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77009f:{NFSU2_TR(0x77009f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7700a2:{NFSU2_TR(0x7700a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7700a5:{NFSU2_TR(0x7700a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7700a8:{NFSU2_TR(0x7700a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7700ae:{NFSU2_TR(0x7700ae);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7700b1:{NFSU2_TR(0x7700b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7700b7:{NFSU2_TR(0x7700b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7700ba:{NFSU2_TR(0x7700ba);
w1(R+4,u8(0x10ull));
}
B7700bc:{NFSU2_TR(0x7700bc);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B7700be:{NFSU2_TR(0x7700be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B7700c1:{NFSU2_TR(0x7700c1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffff7ull))));
}
B7700c4:{NFSU2_TR(0x7700c4);
TAIL_STATIC(0x76ffd8u,76f);
}
B7700c9:L7700c9:{c.instructions+=8;NFSU2_TR(0x7700c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B7700cb:{NFSU2_TR(0x7700cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+24))));
s2(u32(r4(U+0)),r2(U+4));
}
B7700d2:{NFSU2_TR(0x7700d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7ull))));
}
B7700d5:{NFSU2_TR(0x7700d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7700db:{NFSU2_TR(0x7700db);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7700dd:{NFSU2_TR(0x7700dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7700e0:{NFSU2_TR(0x7700e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7700e3:{NFSU2_TR(0x7700e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7700ec;}}
}
B7700e5:L7700e5:{c.instructions+=2;NFSU2_TR(0x7700e5);
w4(R+28,u32(0x8aull));
}
B7700ea:{NFSU2_TR(0x7700ea);
{goto L7700f4;}
}
B7700ec:L7700ec:{c.instructions+=2;NFSU2_TR(0x7700ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7700ef:{NFSU2_TR(0x7700ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7700f8;}}
}
B7700f1:L7700f1:{c.instructions+=2;NFSU2_TR(0x7700f1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7700f3:{NFSU2_TR(0x7700f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7700f4:L7700f4:{c.instructions+=2;NFSU2_TR(0x7700f4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7700f6:{NFSU2_TR(0x7700f6);
{goto L7700fd;}
}
B7700f8:L7700f8:{c.instructions+=3;NFSU2_TR(0x7700f8);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7700fa:{NFSU2_TR(0x7700fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7700fb:{NFSU2_TR(0x7700fb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7700fd:L7700fd:{c.instructions+=4;NFSU2_TR(0x7700fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7700fe:{NFSU2_TR(0x7700fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770102:{NFSU2_TR(0x770102);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B770105:{NFSU2_TR(0x770105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76fcaeu,76f);}
}
B77010b:L77010b:{c.instructions+=5;NFSU2_TR(0x77010b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77010c:{NFSU2_TR(0x77010c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77010d:{NFSU2_TR(0x77010d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B77010e:{NFSU2_TR(0x77010e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B77010f:{NFSU2_TR(0x77010f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770110:L770110:{c.instructions+=10;NFSU2_TR(0x770110);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770111:{NFSU2_TR(0x770111);
__builtin_memmove((R+20),(R+16),4);
}
B770113:{NFSU2_TR(0x770113);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770114:{NFSU2_TR(0x770114);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77011a:{NFSU2_TR(0x77011a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B77011d:{NFSU2_TR(0x77011d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77011e:{NFSU2_TR(0x77011e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770121:{NFSU2_TR(0x770121);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770122:{NFSU2_TR(0x770122);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770123:{NFSU2_TR(0x770123);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770182;}}
}
B770125:L770125:{c.instructions+=25;NFSU2_TR(0x770125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B770128:{NFSU2_TR(0x770128);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffeffull))));
}
B77012e:{NFSU2_TR(0x77012e);
__builtin_memmove((R+8),(R+24),4);
}
B770130:{NFSU2_TR(0x770130);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770132:{NFSU2_TR(0x770132);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770135:{NFSU2_TR(0x770135);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770138:{NFSU2_TR(0x770138);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B77013f:{NFSU2_TR(0x77013f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770145:{NFSU2_TR(0x770145);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770148:{NFSU2_TR(0x770148);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77014b:{NFSU2_TR(0x77014b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77014e:{NFSU2_TR(0x77014e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770151:{NFSU2_TR(0x770151);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770157:{NFSU2_TR(0x770157);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77015a:{NFSU2_TR(0x77015a);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77015d:{NFSU2_TR(0x77015d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770163:{NFSU2_TR(0x770163);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770166:{NFSU2_TR(0x770166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770169:{NFSU2_TR(0x770169);
w1(R+4,u8(0x10ull));
}
B77016b:{NFSU2_TR(0x77016b);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B77016d:{NFSU2_TR(0x77016d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B770170:{NFSU2_TR(0x770170);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff5ull))));
}
B770173:{NFSU2_TR(0x770173);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770179:{NFSU2_TR(0x770179);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770180:{NFSU2_TR(0x770180);
{goto L77019d;}
}
B770182:L770182:{c.instructions+=6;NFSU2_TR(0x770182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770185:{NFSU2_TR(0x770185);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffeffull))));
}
B77018b:{NFSU2_TR(0x77018b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B77018d:{NFSU2_TR(0x77018d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770194:{NFSU2_TR(0x770194);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B770197:{NFSU2_TR(0x770197);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77019d:L77019d:{c.instructions+=3;NFSU2_TR(0x77019d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7701a3:{NFSU2_TR(0x7701a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7701a6:{NFSU2_TR(0x7701a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770200;}}
}
B7701a8:L7701a8:{c.instructions+=25;NFSU2_TR(0x7701a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7701ab:{NFSU2_TR(0x7701ab);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B7701ac:{NFSU2_TR(0x7701ac);
__builtin_memmove((R+8),(R+24),4);
}
B7701ae:{NFSU2_TR(0x7701ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B7701b0:{NFSU2_TR(0x7701b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7701b3:{NFSU2_TR(0x7701b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7701b6:{NFSU2_TR(0x7701b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7701bd:{NFSU2_TR(0x7701bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7701c3:{NFSU2_TR(0x7701c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7701c6:{NFSU2_TR(0x7701c6);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7701c9:{NFSU2_TR(0x7701c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7701cc:{NFSU2_TR(0x7701cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7701cf:{NFSU2_TR(0x7701cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7701d5:{NFSU2_TR(0x7701d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7701d8:{NFSU2_TR(0x7701d8);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7701db:{NFSU2_TR(0x7701db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7701e1:{NFSU2_TR(0x7701e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7701e4:{NFSU2_TR(0x7701e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7701e7:{NFSU2_TR(0x7701e7);
w1(R+4,u8(0x10ull));
}
B7701e9:{NFSU2_TR(0x7701e9);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B7701eb:{NFSU2_TR(0x7701eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B7701ee:{NFSU2_TR(0x7701ee);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff5ull))));
}
B7701f1:{NFSU2_TR(0x7701f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7701f7:{NFSU2_TR(0x7701f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7701fe:{NFSU2_TR(0x7701fe);
{goto L770216;}
}
B770200:L770200:{c.instructions+=6;NFSU2_TR(0x770200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770203:{NFSU2_TR(0x770203);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B770204:{NFSU2_TR(0x770204);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770206:{NFSU2_TR(0x770206);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B77020d:{NFSU2_TR(0x77020d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B770210:{NFSU2_TR(0x770210);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770216:L770216:{c.instructions+=3;NFSU2_TR(0x770216);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77021c:{NFSU2_TR(0x77021c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B77021f:{NFSU2_TR(0x77021f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770278;}}
}
B770221:L770221:{c.instructions+=24;NFSU2_TR(0x770221);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B770224:{NFSU2_TR(0x770224);
__builtin_memmove((R+8),(R+24),4);
}
B770226:{NFSU2_TR(0x770226);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770228:{NFSU2_TR(0x770228);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77022b:{NFSU2_TR(0x77022b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77022e:{NFSU2_TR(0x77022e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770235:{NFSU2_TR(0x770235);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B77023b:{NFSU2_TR(0x77023b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77023e:{NFSU2_TR(0x77023e);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770241:{NFSU2_TR(0x770241);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770244:{NFSU2_TR(0x770244);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770247:{NFSU2_TR(0x770247);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B77024d:{NFSU2_TR(0x77024d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770250:{NFSU2_TR(0x770250);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770253:{NFSU2_TR(0x770253);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770259:{NFSU2_TR(0x770259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77025c:{NFSU2_TR(0x77025c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B77025f:{NFSU2_TR(0x77025f);
w1(R+4,u8(0x10ull));
}
B770261:{NFSU2_TR(0x770261);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B770263:{NFSU2_TR(0x770263);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B770266:{NFSU2_TR(0x770266);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
}
B770269:{NFSU2_TR(0x770269);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77026f:{NFSU2_TR(0x77026f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770276:{NFSU2_TR(0x770276);
{goto L77028d;}
}
B770278:L770278:{c.instructions+=5;NFSU2_TR(0x770278);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B77027b:{NFSU2_TR(0x77027b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B77027d:{NFSU2_TR(0x77027d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770284:{NFSU2_TR(0x770284);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B770287:{NFSU2_TR(0x770287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77028d:L77028d:{c.instructions+=3;NFSU2_TR(0x77028d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B77028f:{NFSU2_TR(0x77028f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B770291:{NFSU2_TR(0x770291);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770326;}}
}
B770297:L770297:{c.instructions+=4;NFSU2_TR(0x770297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77029d:{NFSU2_TR(0x77029d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7702a0:{NFSU2_TR(0x7702a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7dc92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7702a7:{NFSU2_TR(0x7702a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770302;}}
}
B7702a9:L7702a9:{c.instructions+=23;NFSU2_TR(0x7702a9);
u8 U[14];
w4(U+0,u32(u32(u32(0xa76ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B7702b1:{NFSU2_TR(0x7702b1);
__builtin_memmove((R+8),(R+24),4);
}
B7702b3:{NFSU2_TR(0x7702b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B7702b5:{NFSU2_TR(0x7702b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7702b8:{NFSU2_TR(0x7702b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7702bf:{NFSU2_TR(0x7702bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7702c5:{NFSU2_TR(0x7702c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7702c8:{NFSU2_TR(0x7702c8);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7702cb:{NFSU2_TR(0x7702cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7702ce:{NFSU2_TR(0x7702ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7702d1:{NFSU2_TR(0x7702d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7702d7:{NFSU2_TR(0x7702d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7702da:{NFSU2_TR(0x7702da);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7702dd:{NFSU2_TR(0x7702dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7702e3:{NFSU2_TR(0x7702e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7702e6:{NFSU2_TR(0x7702e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7702e9:{NFSU2_TR(0x7702e9);
w1(R+4,u8(0x10ull));
}
B7702eb:{NFSU2_TR(0x7702eb);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B7702ed:{NFSU2_TR(0x7702ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B7702f0:{NFSU2_TR(0x7702f0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff3ull))));
}
B7702f3:{NFSU2_TR(0x7702f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7702f9:{NFSU2_TR(0x7702f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770300:{NFSU2_TR(0x770300);
{goto L77031d;}
}
B770302:L770302:{c.instructions+=5;NFSU2_TR(0x770302);
u8 U[14];
w4(U+0,u32(u32(u32(0xa76ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B77030a:{NFSU2_TR(0x77030a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+8,shl<u16>(r2(R+8),u64(r1(U+0))));
}
B77030d:{NFSU2_TR(0x77030d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770314:{NFSU2_TR(0x770314);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B770317:{NFSU2_TR(0x770317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77031d:L77031d:{c.instructions+=3;NFSU2_TR(0x77031d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B77031e:{NFSU2_TR(0x77031e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B770320:{NFSU2_TR(0x770320);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770297u);}goto L770297;}}
}
B770326:L770326:{c.instructions+=4;NFSU2_TR(0x770326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770329:{NFSU2_TR(0x770329);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B77032a:{NFSU2_TR(0x77032a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B770330:{NFSU2_TR(0x770330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770335ull));
TAIL_STATIC(0x76fc73u,76f);
}
B770335:L770335:{c.instructions+=4;NFSU2_TR(0x770335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770338:{NFSU2_TR(0x770338);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B770339:{NFSU2_TR(0x770339);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x980ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77033f:{NFSU2_TR(0x77033f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770344ull));
TAIL_STATIC(0x76fc73u,76f);
}
B770344:L770344:{c.instructions+=5;NFSU2_TR(0x770344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B770345:{NFSU2_TR(0x770345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770346:{NFSU2_TR(0x770346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770347:{NFSU2_TR(0x770347);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B770348:{NFSU2_TR(0x770348);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77034b:L77034b:{c.instructions+=10;NFSU2_TR(0x77034b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77034c:{NFSU2_TR(0x77034c);
__builtin_memmove((R+20),(R+16),4);
}
B77034e:{NFSU2_TR(0x77034e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B770351:{NFSU2_TR(0x770351);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770352:{NFSU2_TR(0x770352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770355:{NFSU2_TR(0x770355);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B770357:{NFSU2_TR(0x770357);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B77035d:{NFSU2_TR(0x77035d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77035e:{NFSU2_TR(0x77035e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77035f:{NFSU2_TR(0x77035f);
if(r1(R+518)){{goto L770660;}}
}
B770365:L770365:{c.instructions+=10;NFSU2_TR(0x770365);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x169cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77036b:{NFSU2_TR(0x77036b);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B77036f:{NFSU2_TR(0x77036f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770375:{NFSU2_TR(0x770375);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B770379:{NFSU2_TR(0x770379);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B77037a:{NFSU2_TR(0x77037a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B77037c:{NFSU2_TR(0x77037c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77037f:{NFSU2_TR(0x77037f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770382:{NFSU2_TR(0x770382);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770384:{NFSU2_TR(0x770384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L770400;}}
}
B770386:L770386:{c.instructions+=7;NFSU2_TR(0x770386);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77038c:{NFSU2_TR(0x77038c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B77038f:{NFSU2_TR(0x77038f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B770393:{NFSU2_TR(0x770393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B770394:{NFSU2_TR(0x770394);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B770396:{NFSU2_TR(0x770396);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770398:{NFSU2_TR(0x770398);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7703ec;}}
}
B77039a:L77039a:{c.instructions+=22;NFSU2_TR(0x77039a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+24,u32(r2(U+0)));
}
B77039d:{NFSU2_TR(0x77039d);
__builtin_memmove((R+8),(R+24),4);
}
B77039f:{NFSU2_TR(0x77039f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B7703a1:{NFSU2_TR(0x7703a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7703a4:{NFSU2_TR(0x7703a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7703ab:{NFSU2_TR(0x7703ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7703ae:{NFSU2_TR(0x7703ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7703b4:{NFSU2_TR(0x7703b4);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7703b7:{NFSU2_TR(0x7703b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7703ba:{NFSU2_TR(0x7703ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7703bd:{NFSU2_TR(0x7703bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7703c3:{NFSU2_TR(0x7703c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7703c6:{NFSU2_TR(0x7703c6);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7703c9:{NFSU2_TR(0x7703c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7703cf:{NFSU2_TR(0x7703cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7703d2:{NFSU2_TR(0x7703d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7703d5:{NFSU2_TR(0x7703d5);
w1(R+4,u8(0x10ull));
}
B7703d7:{NFSU2_TR(0x7703d7);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B7703d9:{NFSU2_TR(0x7703d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B7703dc:{NFSU2_TR(0x7703dc);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7703e0:{NFSU2_TR(0x7703e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7703e7:{NFSU2_TR(0x7703e7);
{goto L77064b;}
}
B7703ec:L7703ec:{c.instructions+=5;NFSU2_TR(0x7703ec);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7703ef:{NFSU2_TR(0x7703ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+8,shl<u16>(r2(R+8),u64(r1(U+0))));
}
B7703f2:{NFSU2_TR(0x7703f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7703f9:{NFSU2_TR(0x7703f9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B7703fb:{NFSU2_TR(0x7703fb);
{goto L77064b;}
}
B770400:L770400:{c.instructions+=11;NFSU2_TR(0x770400);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7dd038ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B770407:{NFSU2_TR(0x770407);
__builtin_memmove((R+4),(R+8),4);
}
B770409:{NFSU2_TR(0x770409);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B77040c:{NFSU2_TR(0x77040c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77040f:{NFSU2_TR(0x77040f);
u8 U[14];
w4(U+0,u32(u32(u32(0x406ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B770417:{NFSU2_TR(0x770417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770418:{NFSU2_TR(0x770418);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B77041a:{NFSU2_TR(0x77041a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77041d:{NFSU2_TR(0x77041d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770423:{NFSU2_TR(0x770423);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770425:{NFSU2_TR(0x770425);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770481;}}
}
B770427:L770427:{c.instructions+=24;NFSU2_TR(0x770427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B77042a:{NFSU2_TR(0x77042a);
u8 U[14];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+28,u32(r2(U+12)));
}
B770432:{NFSU2_TR(0x770432);
__builtin_memmove((R+8),(R+28),4);
}
B770434:{NFSU2_TR(0x770434);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770436:{NFSU2_TR(0x770436);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770439:{NFSU2_TR(0x770439);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770440:{NFSU2_TR(0x770440);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770443:{NFSU2_TR(0x770443);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770449:{NFSU2_TR(0x770449);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77044c:{NFSU2_TR(0x77044c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77044f:{NFSU2_TR(0x77044f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770452:{NFSU2_TR(0x770452);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770455:{NFSU2_TR(0x770455);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B77045b:{NFSU2_TR(0x77045b);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77045e:{NFSU2_TR(0x77045e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770464:{NFSU2_TR(0x770464);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770467:{NFSU2_TR(0x770467);
w1(R+4,u8(0x10ull));
}
B770469:{NFSU2_TR(0x770469);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B77046b:{NFSU2_TR(0x77046b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+28,shr<u16>(r2(R+28),u64(r1(U+0))));
}
B77046e:{NFSU2_TR(0x77046e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770471:{NFSU2_TR(0x770471);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B770475:{NFSU2_TR(0x770475);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B77047c:{NFSU2_TR(0x77047c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B77047f:{NFSU2_TR(0x77047f);
{goto L77049b;}
}
B770481:L770481:{c.instructions+=6;NFSU2_TR(0x770481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770484:{NFSU2_TR(0x770484);
u8 U[14];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B77048c:{NFSU2_TR(0x77048c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+8,shl<u16>(r2(R+8),u64(r1(U+0))));
}
B77048f:{NFSU2_TR(0x77048f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770496:{NFSU2_TR(0x770496);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770499:{NFSU2_TR(0x770499);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B77049b:L77049b:{c.instructions+=6;NFSU2_TR(0x77049b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7704a1:{NFSU2_TR(0x7704a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7704a4:{NFSU2_TR(0x7704a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dc7f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7704aa:{NFSU2_TR(0x7704aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7704ac:{NFSU2_TR(0x7704ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7704af:{NFSU2_TR(0x7704af);
if(r1(R+518)){{goto L770523;}}
}
B7704b1:L7704b1:{c.instructions+=7;NFSU2_TR(0x7704b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dd138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B7704b7:{NFSU2_TR(0x7704b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7704bd:{NFSU2_TR(0x7704bd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7704bf:{NFSU2_TR(0x7704bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7704c0:{NFSU2_TR(0x7704c0);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B7704c2:{NFSU2_TR(0x7704c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7704c4:{NFSU2_TR(0x7704c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770512;}}
}
B7704c6:L7704c6:{c.instructions+=21;NFSU2_TR(0x7704c6);
__builtin_memmove((R+8),(R+24),4);
}
B7704c8:{NFSU2_TR(0x7704c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B7704ca:{NFSU2_TR(0x7704ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7704cd:{NFSU2_TR(0x7704cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7704d4:{NFSU2_TR(0x7704d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7704d7:{NFSU2_TR(0x7704d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7704dd:{NFSU2_TR(0x7704dd);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7704e0:{NFSU2_TR(0x7704e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7704e3:{NFSU2_TR(0x7704e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7704e6:{NFSU2_TR(0x7704e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7704e9:{NFSU2_TR(0x7704e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7704ef:{NFSU2_TR(0x7704ef);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7704f2:{NFSU2_TR(0x7704f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7704f8:{NFSU2_TR(0x7704f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7704fb:{NFSU2_TR(0x7704fb);
w1(R+4,u8(0x10ull));
}
B7704fd:{NFSU2_TR(0x7704fd);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B7704ff:{NFSU2_TR(0x7704ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B770502:{NFSU2_TR(0x770502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770505:{NFSU2_TR(0x770505);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B770509:{NFSU2_TR(0x770509);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770510:{NFSU2_TR(0x770510);
{goto L77051d;}
}
B770512:L770512:{c.instructions+=3;NFSU2_TR(0x770512);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B770514:{NFSU2_TR(0x770514);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+24))));
s2(u32(r4(U+0)),r2(U+4));
}
B77051b:{NFSU2_TR(0x77051b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B77051d:L77051d:{c.instructions+=1;NFSU2_TR(0x77051d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770523:L770523:{c.instructions+=3;NFSU2_TR(0x770523);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B770524:{NFSU2_TR(0x770524);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B77052a:{NFSU2_TR(0x77052a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L770535;}}
}
B77052c:L77052c:{c.instructions+=2;NFSU2_TR(0x77052c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7dce38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B770533:{NFSU2_TR(0x770533);
{goto L770541;}
}
B770535:L770535:{c.instructions+=3;NFSU2_TR(0x770535);
__builtin_memmove((R+4),(R+28),4);
}
B770537:{NFSU2_TR(0x770537);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B77053a:{NFSU2_TR(0x77053a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dcf38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B770541:L770541:{c.instructions+=13;NFSU2_TR(0x770541);
__builtin_memmove((R+24),(R+4),4);
}
B770543:{NFSU2_TR(0x770543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770546:{NFSU2_TR(0x770546);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B770549:{NFSU2_TR(0x770549);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B77054c:{NFSU2_TR(0x77054c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B770550:{NFSU2_TR(0x770550);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770552:{NFSU2_TR(0x770552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770553:{NFSU2_TR(0x770553);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B770555:{NFSU2_TR(0x770555);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770558:{NFSU2_TR(0x770558);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77055e:{NFSU2_TR(0x77055e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770560:{NFSU2_TR(0x770560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770563:{NFSU2_TR(0x770563);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7705b7;}}
}
B770565:L770565:{c.instructions+=23;NFSU2_TR(0x770565);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(r2(U+0)));
}
B770568:{NFSU2_TR(0x770568);
__builtin_memmove((R+8),(R+24),4);
}
B77056a:{NFSU2_TR(0x77056a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B77056c:{NFSU2_TR(0x77056c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77056f:{NFSU2_TR(0x77056f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770576:{NFSU2_TR(0x770576);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770579:{NFSU2_TR(0x770579);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B77057f:{NFSU2_TR(0x77057f);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770582:{NFSU2_TR(0x770582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770585:{NFSU2_TR(0x770585);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770588:{NFSU2_TR(0x770588);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77058b:{NFSU2_TR(0x77058b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770591:{NFSU2_TR(0x770591);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770594:{NFSU2_TR(0x770594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77059a:{NFSU2_TR(0x77059a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77059d:{NFSU2_TR(0x77059d);
w1(R+4,u8(0x10ull));
}
B77059f:{NFSU2_TR(0x77059f);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B7705a1:{NFSU2_TR(0x7705a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B7705a4:{NFSU2_TR(0x7705a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7705a7:{NFSU2_TR(0x7705a7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7705ab:{NFSU2_TR(0x7705ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7705b2:{NFSU2_TR(0x7705b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7705b5:{NFSU2_TR(0x7705b5);
{goto L7705c9;}
}
B7705b7:L7705b7:{c.instructions+=5;NFSU2_TR(0x7705b7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7705ba:{NFSU2_TR(0x7705ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+8,shl<u16>(r2(R+8),u64(r1(U+0))));
}
B7705bd:{NFSU2_TR(0x7705bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7705c4:{NFSU2_TR(0x7705c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7705c7:{NFSU2_TR(0x7705c7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7705c9:L7705c9:{c.instructions+=6;NFSU2_TR(0x7705c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7705cc:{NFSU2_TR(0x7705cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7705d2:{NFSU2_TR(0x7705d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7dc868ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7705d8:{NFSU2_TR(0x7705d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7705da:{NFSU2_TR(0x7705da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7705dd:{NFSU2_TR(0x7705dd);
if(r1(R+518)){{goto L770651;}}
}
B7705df:L7705df:{c.instructions+=6;NFSU2_TR(0x7705df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7dd1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B7705e5:{NFSU2_TR(0x7705e5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7705e7:{NFSU2_TR(0x7705e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7705e8:{NFSU2_TR(0x7705e8);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B7705ea:{NFSU2_TR(0x7705ea);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7705ec:{NFSU2_TR(0x7705ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770640;}}
}
B7705ee:L7705ee:{c.instructions+=23;NFSU2_TR(0x7705ee);
__builtin_memmove((R+8),(R+28),4);
}
B7705f0:{NFSU2_TR(0x7705f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B7705f2:{NFSU2_TR(0x7705f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7705f5:{NFSU2_TR(0x7705f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7705f8:{NFSU2_TR(0x7705f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B7705ff:{NFSU2_TR(0x7705ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770602:{NFSU2_TR(0x770602);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770608:{NFSU2_TR(0x770608);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77060b:{NFSU2_TR(0x77060b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77060e:{NFSU2_TR(0x77060e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770611:{NFSU2_TR(0x770611);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B770617:{NFSU2_TR(0x770617);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B77061a:{NFSU2_TR(0x77061a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B77061d:{NFSU2_TR(0x77061d);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770620:{NFSU2_TR(0x770620);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770626:{NFSU2_TR(0x770626);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770629:{NFSU2_TR(0x770629);
w1(R+4,u8(0x10ull));
}
B77062b:{NFSU2_TR(0x77062b);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B77062d:{NFSU2_TR(0x77062d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+28,shr<u16>(r2(R+28),u64(r1(U+0))));
}
B770630:{NFSU2_TR(0x770630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770633:{NFSU2_TR(0x770633);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B770637:{NFSU2_TR(0x770637);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B77063e:{NFSU2_TR(0x77063e);
{goto L77064b;}
}
B770640:L770640:{c.instructions+=3;NFSU2_TR(0x770640);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B770642:{NFSU2_TR(0x770642);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B770649:{NFSU2_TR(0x770649);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B77064b:L77064b:{c.instructions+=1;NFSU2_TR(0x77064b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770651:L770651:{c.instructions+=3;NFSU2_TR(0x770651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770654:{NFSU2_TR(0x770654);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B77065a:{NFSU2_TR(0x77065a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770365u);}goto L770365;}}
}
B770660:L770660:{c.instructions+=8;NFSU2_TR(0x770660);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x402ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B770667:{NFSU2_TR(0x770667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77066d:{NFSU2_TR(0x77066d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77066f:{NFSU2_TR(0x77066f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770670:{NFSU2_TR(0x770670);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B770672:{NFSU2_TR(0x770672);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770674:{NFSU2_TR(0x770674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770677:{NFSU2_TR(0x770677);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7706d2;}}
}
B770679:L770679:{c.instructions+=24;NFSU2_TR(0x770679);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B770680:{NFSU2_TR(0x770680);
__builtin_memmove((R+8),(R+24),4);
}
B770682:{NFSU2_TR(0x770682);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770684:{NFSU2_TR(0x770684);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770687:{NFSU2_TR(0x770687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77068a:{NFSU2_TR(0x77068a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770691:{NFSU2_TR(0x770691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770694:{NFSU2_TR(0x770694);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B77069a:{NFSU2_TR(0x77069a);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B77069d:{NFSU2_TR(0x77069d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7706a0:{NFSU2_TR(0x7706a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7706a3:{NFSU2_TR(0x7706a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7706a9:{NFSU2_TR(0x7706a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7706ac:{NFSU2_TR(0x7706ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7706af:{NFSU2_TR(0x7706af);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7706b2:{NFSU2_TR(0x7706b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7706b8:{NFSU2_TR(0x7706b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7706bb:{NFSU2_TR(0x7706bb);
w1(R+4,u8(0x10ull));
}
B7706bd:{NFSU2_TR(0x7706bd);
u8 U[3];
w1(R+512,u8((r1(R+4))<(r1(R+8))));
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7706bf:{NFSU2_TR(0x7706bf);
u8 U[34];
w1(U+31,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+32),(R+24),2);
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+31))));
w1(U+22,u8((r1(U+31))==(u8(0x0ull))));
w1(U+23,u8(u32(r1(U+31))-u32(u8(0x1ull))));
w2(U+24,shr<u16>(r2(U+32),u64(r1(U+23))));
w2(U+26,u16(u32(r2(U+24))&u32(u16(0x1ull))));
w1(U+28,u8((r2(U+26))!=(u16(0x0ull))));
__builtin_memmove((U+0),(U+22),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+22))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+29,u8((r1(U+31))==(u8(0x1ull))));
w1(U+30,u8(s16(r2(U+32))<s16(u16(0x0ull))));
__builtin_memmove((U+0),(U+29),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+29))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+31))!=(u8(0x0ull))));
w1(U+6,u8(s16(r2(R+24))<s16(u16(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r2(R+24))==(u16(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w2(U+14,u16(u32(r2(R+24))&u32(u16(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r2(U+14)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(U+18,u8((r1(U+17))==(u8(0x0ull))));
w1(U+19,u8(!(r1(U+5))));
w1(U+20,u8(u32(r1(U+19))&u32(r1(R+514))));
w1(U+21,u8(u32(r1(U+5))&u32(r1(U+18))));
w1(R+514,u8(u32(r1(U+20))|u32(r1(U+21))));
}
B7706c2:{NFSU2_TR(0x7706c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7706c5:{NFSU2_TR(0x7706c5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7706c9:{NFSU2_TR(0x7706c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7706d0:{NFSU2_TR(0x7706d0);
{goto L7706e5;}
}
B7706d2:L7706d2:{c.instructions+=4;NFSU2_TR(0x7706d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B7706d9:{NFSU2_TR(0x7706d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shl<u16>(r2(R+24),u64(r1(U+0))));
}
B7706dc:{NFSU2_TR(0x7706dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+24))));
s2(u32(r4(U+0)),r2(U+4));
}
B7706e3:{NFSU2_TR(0x7706e3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7706e5:L7706e5:{c.instructions+=8;NFSU2_TR(0x7706e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7706eb:{NFSU2_TR(0x7706eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x402ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B7706f2:{NFSU2_TR(0x7706f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7706f3:{NFSU2_TR(0x7706f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7706f4:{NFSU2_TR(0x7706f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7706fa:{NFSU2_TR(0x7706fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7706fb:{NFSU2_TR(0x7706fb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7706fc:{NFSU2_TR(0x7706fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7706ff:L7706ff:{c.instructions+=8;NFSU2_TR(0x7706ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770700:{NFSU2_TR(0x770700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770701:{NFSU2_TR(0x770701);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770702:{NFSU2_TR(0x770702);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770704:{NFSU2_TR(0x770704);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B770706:{NFSU2_TR(0x770706);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B770708:{NFSU2_TR(0x770708);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B77070e:{NFSU2_TR(0x77070e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77070f:L77070f:{c.instructions+=5;NFSU2_TR(0x77070f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(r2(U+0)));
}
B770712:{NFSU2_TR(0x770712);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B770714:{NFSU2_TR(0x770714);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B770717:{NFSU2_TR(0x770717);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B770718:{NFSU2_TR(0x770718);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77070fu);}goto L77070f;}}
}
B77071a:L77071a:{c.instructions+=3;NFSU2_TR(0x77071a);
u8 U[4];
w4(U+0,u32(0x79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77071c:{NFSU2_TR(0x77071c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B770722:{NFSU2_TR(0x770722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770723:L770723:{c.instructions+=5;NFSU2_TR(0x770723);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(r2(U+0)));
}
B770726:{NFSU2_TR(0x770726);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B770728:{NFSU2_TR(0x770728);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B77072b:{NFSU2_TR(0x77072b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B77072c:{NFSU2_TR(0x77072c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770723u);}goto L770723;}}
}
B77072e:L77072e:{c.instructions+=2;NFSU2_TR(0x77072e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28cull))));
__builtin_memmove((R+0),(U+0),4);
}
B770734:{NFSU2_TR(0x770734);
w4(R+24,u32(0x80ull));
}
B770739:L770739:{c.instructions+=5;NFSU2_TR(0x770739);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(r2(U+0)));
}
B77073c:{NFSU2_TR(0x77073c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B77073e:{NFSU2_TR(0x77073e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B770741:{NFSU2_TR(0x770741);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B770742:{NFSU2_TR(0x770742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770739u);}goto L770739;}}
}
B770744:L770744:{c.instructions+=9;NFSU2_TR(0x770744);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B770747:{NFSU2_TR(0x770747);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B770749:{NFSU2_TR(0x770749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77074a:{NFSU2_TR(0x77074a);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B77074c:{NFSU2_TR(0x77074c);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77074e:{NFSU2_TR(0x77074e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77074f:{NFSU2_TR(0x77074f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B770752:{NFSU2_TR(0x770752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770753:{NFSU2_TR(0x770753);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770754:L770754:{c.instructions+=4;NFSU2_TR(0x770754);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77075a:{NFSU2_TR(0x77075a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B77075d:{NFSU2_TR(0x77075d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77075e:{NFSU2_TR(0x77075e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770784;}}
}
B770760:L770760:{c.instructions+=13;NFSU2_TR(0x770760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770763:{NFSU2_TR(0x770763);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770764:{NFSU2_TR(0x770764);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B770767:{NFSU2_TR(0x770767);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77076d:{NFSU2_TR(0x77076d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B77076f:{NFSU2_TR(0x77076f);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770772:{NFSU2_TR(0x770772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770775:{NFSU2_TR(0x770775);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B770778:{NFSU2_TR(0x770778);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77077b:{NFSU2_TR(0x77077b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B77077e:{NFSU2_TR(0x77077e);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770781:{NFSU2_TR(0x770781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770782:{NFSU2_TR(0x770782);
{goto L770797;}
}
B770784:L770784:{c.instructions+=2;NFSU2_TR(0x770784);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B770786:{NFSU2_TR(0x770786);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L77079a;}}
}
B770788:L770788:{c.instructions+=4;NFSU2_TR(0x770788);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77078b:{NFSU2_TR(0x77078b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77078e:{NFSU2_TR(0x77078e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770794:{NFSU2_TR(0x770794);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770797:L770797:{c.instructions+=1;NFSU2_TR(0x770797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77079a:L77079a:{c.instructions+=4;NFSU2_TR(0x77079a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7707a2:{NFSU2_TR(0x7707a2);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7707a9:{NFSU2_TR(0x7707a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7707aa:{NFSU2_TR(0x7707aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7707ab:L7707ab:{c.instructions+=7;NFSU2_TR(0x7707ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7707ac:{NFSU2_TR(0x7707ac);
__builtin_memmove((R+20),(R+16),4);
}
B7707ae:{NFSU2_TR(0x7707ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7707af:{NFSU2_TR(0x7707af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7707b0:{NFSU2_TR(0x7707b0);
__builtin_memmove((R+12),(R+4),4);
}
B7707b2:{NFSU2_TR(0x7707b2);
__builtin_memmove((R+28),(R+8),4);
}
B7707b4:{NFSU2_TR(0x7707b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7707b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770754u);}goto L770754;}
}
B7707b9:L7707b9:{c.instructions+=3;NFSU2_TR(0x7707b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7707bd:{NFSU2_TR(0x7707bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16acull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7707c7:{NFSU2_TR(0x7707c7);
if(r1(R+518)){{goto L770803;}}
}
B7707c9:L7707c9:{c.instructions+=22;NFSU2_TR(0x7707c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7707cc:{NFSU2_TR(0x7707cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7707cf:{NFSU2_TR(0x7707cf);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7707d2:{NFSU2_TR(0x7707d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7707d5:{NFSU2_TR(0x7707d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7707d8:{NFSU2_TR(0x7707d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7707db:{NFSU2_TR(0x7707db);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+13),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7707de:{NFSU2_TR(0x7707de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7707e1:{NFSU2_TR(0x7707e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7707e4:{NFSU2_TR(0x7707e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7707e5:{NFSU2_TR(0x7707e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7707e8:{NFSU2_TR(0x7707e8);
__builtin_memmove((R+4),(R+12),1);
}
B7707ea:{NFSU2_TR(0x7707ea);
w1(R+4,u8(~u32(r1(R+4))));
}
B7707ec:{NFSU2_TR(0x7707ec);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7707ef:{NFSU2_TR(0x7707ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7707f2:{NFSU2_TR(0x7707f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7707f5:{NFSU2_TR(0x7707f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7707f8:{NFSU2_TR(0x7707f8);
__builtin_memmove((R+4),(R+12),4);
}
B7707fa:{NFSU2_TR(0x7707fa);
w4(R+4,u32(~u32(r4(R+4))));
}
B7707fc:{NFSU2_TR(0x7707fc);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+5),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7707ff:{NFSU2_TR(0x7707ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770802:{NFSU2_TR(0x770802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770803:L770803:{c.instructions+=2;NFSU2_TR(0x770803);
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
B770805:{NFSU2_TR(0x770805);
if(r1(R+518)){{goto L77081f;}}
}
B770807:L770807:{c.instructions+=10;NFSU2_TR(0x770807);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77080a:{NFSU2_TR(0x77080a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77080d:{NFSU2_TR(0x77080d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770810:{NFSU2_TR(0x770810);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B770812:{NFSU2_TR(0x770812);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770815:{NFSU2_TR(0x770815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770818:{NFSU2_TR(0x770818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B77081b:{NFSU2_TR(0x77081b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B77081c:{NFSU2_TR(0x77081c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77081d:{NFSU2_TR(0x77081d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770807u);}goto L770807;}}
}
B77081f:L77081f:{c.instructions+=4;NFSU2_TR(0x77081f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B770820:{NFSU2_TR(0x770820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770821:{NFSU2_TR(0x770821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770822:{NFSU2_TR(0x770822);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770825:L770825:{c.instructions+=11;NFSU2_TR(0x770825);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770826:{NFSU2_TR(0x770826);
__builtin_memmove((R+20),(R+16),4);
}
B770828:{NFSU2_TR(0x770828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B77082b:{NFSU2_TR(0x77082b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77082c:{NFSU2_TR(0x77082c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B77082e:{NFSU2_TR(0x77082e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77082f:{NFSU2_TR(0x77082f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770832:{NFSU2_TR(0x770832);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B770834:{NFSU2_TR(0x770834);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B770836:{NFSU2_TR(0x770836);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B770837:{NFSU2_TR(0x770837);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B770839:L770839:{c.instructions+=9;NFSU2_TR(0x770839);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B77083c:{NFSU2_TR(0x77083c);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B770841:{NFSU2_TR(0x770841);
w2(R+24,u16(u32(r2(R+24))+u32(r2(R+0))));
}
B770844:{NFSU2_TR(0x770844);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B770846:{NFSU2_TR(0x770846);
__builtin_memmove((R+0),(R+24),4);
}
B770848:{NFSU2_TR(0x770848);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B77084d:{NFSU2_TR(0x77084d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B77084e:{NFSU2_TR(0x77084e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770851:{NFSU2_TR(0x770851);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770839u);}goto L770839;}}
}
B770853:L770853:{c.instructions+=2;NFSU2_TR(0x770853);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B770856:{NFSU2_TR(0x770856);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L77088f;}}
}
B770858:L770858:{c.instructions+=3;NFSU2_TR(0x770858);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B77085d:{NFSU2_TR(0x77085d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B77085f:{NFSU2_TR(0x77085f);
if(r1(R+518)){{goto L770889;}}
}
B770861:L770861:{c.instructions+=7;NFSU2_TR(0x770861);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B770865:{NFSU2_TR(0x770865);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B770867:{NFSU2_TR(0x770867);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B77086a:{NFSU2_TR(0x77086a);
w4(R+24,u32(r2(R+4)));
}
B77086d:{NFSU2_TR(0x77086d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B77086e:{NFSU2_TR(0x77086e);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B770871:{NFSU2_TR(0x770871);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B770873:L770873:{c.instructions+=8;NFSU2_TR(0x770873);
__builtin_memmove((R+4),(R+24),4);
}
B770875:{NFSU2_TR(0x770875);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B770878:{NFSU2_TR(0x770878);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B77087a:{NFSU2_TR(0x77087a);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B77087c:{NFSU2_TR(0x77087c);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B77087e:{NFSU2_TR(0x77087e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B77087f:{NFSU2_TR(0x77087f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B770881:{NFSU2_TR(0x770881);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770873u);}goto L770873;}}
}
B770883:L770883:{c.instructions+=2;NFSU2_TR(0x770883);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B770885:{NFSU2_TR(0x770885);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B770889:L770889:{c.instructions+=3;NFSU2_TR(0x770889);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B77088a:{NFSU2_TR(0x77088a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B77088d:{NFSU2_TR(0x77088d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770858u);}goto L770858;}}
}
B77088f:L77088f:{c.instructions+=4;NFSU2_TR(0x77088f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B770890:{NFSU2_TR(0x770890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770891:{NFSU2_TR(0x770891);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B770892:{NFSU2_TR(0x770892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770895:L770895:{c.instructions+=17;NFSU2_TR(0x770895);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770896:{NFSU2_TR(0x770896);
__builtin_memmove((R+20),(R+16),4);
}
B770898:{NFSU2_TR(0x770898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B77089b:{NFSU2_TR(0x77089b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B77089e:{NFSU2_TR(0x77089e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7708a1:{NFSU2_TR(0x7708a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7708a4:{NFSU2_TR(0x7708a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7708a8:{NFSU2_TR(0x7708a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7708a9:{NFSU2_TR(0x7708a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7708ab:{NFSU2_TR(0x7708ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7708ad:{NFSU2_TR(0x7708ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7708af:{NFSU2_TR(0x7708af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7708b0:{NFSU2_TR(0x7708b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B7708b2:{NFSU2_TR(0x7708b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7708b5:{NFSU2_TR(0x7708b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7708bb:{NFSU2_TR(0x7708bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
w4(U+4,u32(0x23dull));
s4(u32(r4(U+0)),r4(U+4));
}
B7708c5:{NFSU2_TR(0x7708c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L77094b;}}
}
B7708cb:L7708cb:{c.instructions+=2;NFSU2_TR(0x7708cb);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B7708d0:{NFSU2_TR(0x7708d0);
if(r1(R+518)){{goto L7708f2;}}
}
B7708d2:L7708d2:{c.instructions+=6;NFSU2_TR(0x7708d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7708d8:{NFSU2_TR(0x7708d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7708de:{NFSU2_TR(0x7708de);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7708e5:{NFSU2_TR(0x7708e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7708e8:{NFSU2_TR(0x7708e8);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B7708f0:{NFSU2_TR(0x7708f0);
{goto L7708f8;}
}
B7708f2:L7708f2:{c.instructions+=1;NFSU2_TR(0x7708f2);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B7708f8:L7708f8:{c.instructions+=3;NFSU2_TR(0x7708f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7708f9:{NFSU2_TR(0x7708f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7708fc:{NFSU2_TR(0x7708fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7708cbu);}goto L7708cb;}}
}
B7708fe:L7708fe:{c.instructions+=1;NFSU2_TR(0x7708fe);
{goto L77094b;}
}
B770900:L770900:{c.instructions+=2;NFSU2_TR(0x770900);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B770904:{NFSU2_TR(0x770904);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L77090e;}}
}
B770906:L770906:{c.instructions+=3;NFSU2_TR(0x770906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770909:{NFSU2_TR(0x770909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77090c:{NFSU2_TR(0x77090c);
{goto L770910;}
}
B77090e:L77090e:{c.instructions+=1;NFSU2_TR(0x77090e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B770910:L770910:{c.instructions+=10;NFSU2_TR(0x770910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770916:{NFSU2_TR(0x770916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77091c:{NFSU2_TR(0x77091c);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B770923:{NFSU2_TR(0x770923);
__builtin_memmove((R+4),(R+0),4);
}
B770925:{NFSU2_TR(0x770925);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B770928:{NFSU2_TR(0x770928);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w2(U+8,u16(0x1ull));
s2(u32(r4(U+4)),r2(U+8));
}
B77092e:{NFSU2_TR(0x77092e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B770936:{NFSU2_TR(0x770936);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B77093c:{NFSU2_TR(0x77093c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B77093e:{NFSU2_TR(0x77093e);
if(r1(R+518)){{goto L77094b;}}
}
B770940:L770940:{c.instructions+=2;NFSU2_TR(0x770940);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B770945:{NFSU2_TR(0x770945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B77094b:L77094b:{c.instructions+=2;NFSU2_TR(0x77094b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B770952:{NFSU2_TR(0x770952);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770900u);}goto L770900;}}
}
B770954:L770954:{c.instructions+=8;NFSU2_TR(0x770954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770957:{NFSU2_TR(0x770957);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77095a:{NFSU2_TR(0x77095a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770960:{NFSU2_TR(0x770960);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B770961:{NFSU2_TR(0x770961);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B770963:{NFSU2_TR(0x770963);
__builtin_memmove((R+12),(R+0),4);
}
B770965:{NFSU2_TR(0x770965);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B770967:{NFSU2_TR(0x770967);
{goto L770972;}
}
B770969:L770969:{c.instructions+=3;NFSU2_TR(0x770969);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77096a:{NFSU2_TR(0x77096a);
__builtin_memmove((R+0),(R+24),4);
}
B77096c:{NFSU2_TR(0x77096c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770971ull));
TAIL_STATIC(0x76f94bu,76f);
}
B770971:L770971:{c.instructions+=1;NFSU2_TR(0x770971);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B770972:L770972:{c.instructions+=2;NFSU2_TR(0x770972);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B770975:{NFSU2_TR(0x770975);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770969u);}goto L770969;}}
}
B770977:L770977:{c.instructions+=2;NFSU2_TR(0x770977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77097a:{NFSU2_TR(0x77097a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77097d:L77097d:{c.instructions+=9;NFSU2_TR(0x77097d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770983:{NFSU2_TR(0x770983);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B77098a:{NFSU2_TR(0x77098a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770990:{NFSU2_TR(0x770990);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B770991:{NFSU2_TR(0x770991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770997:{NFSU2_TR(0x770997);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770999:{NFSU2_TR(0x770999);
__builtin_memmove((R+0),(R+24),4);
}
B77099b:{NFSU2_TR(0x77099b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7709a1:{NFSU2_TR(0x7709a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7709a6ull));
TAIL_STATIC(0x76f94bu,76f);
}
B7709a6:L7709a6:{c.instructions+=20;NFSU2_TR(0x7709a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7709ac:{NFSU2_TR(0x7709ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7709b2:{NFSU2_TR(0x7709b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7709b8:{NFSU2_TR(0x7709b8);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7709bf:{NFSU2_TR(0x7709bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7709c5:{NFSU2_TR(0x7709c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7709cb:{NFSU2_TR(0x7709cb);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7709d2:{NFSU2_TR(0x7709d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7709d5:{NFSU2_TR(0x7709d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7709d8:{NFSU2_TR(0x7709d8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B7709db:{NFSU2_TR(0x7709db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7709de:{NFSU2_TR(0x7709de);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w2(R+4,u16(u32(r2(R+4))+u32(r2(U+0))));
}
B7709e1:{NFSU2_TR(0x7709e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7709e4:{NFSU2_TR(0x7709e4);
__builtin_memmove((R+8),(R+4),2);
}
B7709e7:{NFSU2_TR(0x7709e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7709ea:{NFSU2_TR(0x7709ea);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B7709ee:{NFSU2_TR(0x7709ee);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B7709f5:{NFSU2_TR(0x7709f5);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B7709fc:{NFSU2_TR(0x7709fc);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+0))));
}
B7709fe:{NFSU2_TR(0x7709fe);
if(r1(R+512)){{goto L770a05;}}
}
B770a00:L770a00:{c.instructions+=2;NFSU2_TR(0x770a00);
w4(R+0,u32(r1(R+12)));
}
B770a03:{NFSU2_TR(0x770a03);
{goto L770a08;}
}
B770a05:L770a05:{c.instructions+=1;NFSU2_TR(0x770a05);
w4(R+0,u32(r1(R+0)));
}
B770a08:L770a08:{c.instructions+=12;NFSU2_TR(0x770a08);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B770a0a:{NFSU2_TR(0x770a0a);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B770a11:{NFSU2_TR(0x770a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770a14:{NFSU2_TR(0x770a14);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770a18:{NFSU2_TR(0x770a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770a1b:{NFSU2_TR(0x770a1b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770a1f:{NFSU2_TR(0x770a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770a25:{NFSU2_TR(0x770a25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B770a26:{NFSU2_TR(0x770a26);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770a28:{NFSU2_TR(0x770a28);
__builtin_memmove((R+0),(R+24),4);
}
B770a2a:{NFSU2_TR(0x770a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770a2d:{NFSU2_TR(0x770a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770a32ull));
TAIL_STATIC(0x76f94bu,76f);
}
B770a32:L770a32:{c.instructions+=2;NFSU2_TR(0x770a32);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B770a39:{NFSU2_TR(0x770a39);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77097du);}goto L77097d;}}
}
B770a3f:L770a3f:{c.instructions+=7;NFSU2_TR(0x770a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770a45:{NFSU2_TR(0x770a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770a4b:{NFSU2_TR(0x770a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770a51:{NFSU2_TR(0x770a51);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B770a58:{NFSU2_TR(0x770a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770a5b:{NFSU2_TR(0x770a5b);
__builtin_memmove((R+8),(R+24),4);
}
B770a5d:{NFSU2_TR(0x770a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770a62ull));
TAIL_STATIC(0x76f9fdu,76f);
}
B770a62:L770a62:{c.instructions+=4;NFSU2_TR(0x770a62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B770a65:{NFSU2_TR(0x770a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B770a6b:{NFSU2_TR(0x770a6b);
__builtin_memmove((R+12),(R+28),4);
}
B770a6d:{NFSU2_TR(0x770a6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770a72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770825u);}goto L770825;}
}
B770a72:L770a72:{c.instructions+=4;NFSU2_TR(0x770a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B770a73:{NFSU2_TR(0x770a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770a74:{NFSU2_TR(0x770a74);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B770a75:{NFSU2_TR(0x770a75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770a78:L770a78:{c.instructions+=6;NFSU2_TR(0x770a78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770a79:{NFSU2_TR(0x770a79);
__builtin_memmove((R+24),(R+0),4);
}
B770a7b:{NFSU2_TR(0x770a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770a81:{NFSU2_TR(0x770a81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B770a87:{NFSU2_TR(0x770a87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770a88:{NFSU2_TR(0x770a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770a8dull));
TAIL_STATIC(0x76fbb5u,76f);
}
B770a8d:L770a8d:{c.instructions+=4;NFSU2_TR(0x770a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770a93:{NFSU2_TR(0x770a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x980ull))));
__builtin_memmove((R+0),(U+0),4);
}
B770a99:{NFSU2_TR(0x770a99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770a9a:{NFSU2_TR(0x770a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770a9full));
TAIL_STATIC(0x76fbb5u,76f);
}
B770a9f:L770a9f:{c.instructions+=3;NFSU2_TR(0x770a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B770aa5:{NFSU2_TR(0x770aa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770aa6:{NFSU2_TR(0x770aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770aabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770895u);}goto L770895;}
}
B770aab:L770aab:{c.instructions+=2;NFSU2_TR(0x770aab);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770aad:{NFSU2_TR(0x770aad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B770aae:L770aae:{c.instructions+=3;NFSU2_TR(0x770aae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dc92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B770ab5:{NFSU2_TR(0x770ab5);
u8 U[18];
w4(U+0,u32(u32(u32(0xa76ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B770abe:{NFSU2_TR(0x770abe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L770ac6;}}
}
B770ac0:L770ac0:{c.instructions+=3;NFSU2_TR(0x770ac0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B770ac1:{NFSU2_TR(0x770ac1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B770ac4:{NFSU2_TR(0x770ac4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770aaeu);}goto L770aae;}}
}
B770ac6:L770ac6:{c.instructions+=4;NFSU2_TR(0x770ac6);
u8 U[12];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B770aca:{NFSU2_TR(0x770aca);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B770ad0:{NFSU2_TR(0x770ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770ad1:{NFSU2_TR(0x770ad1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770ad2:L770ad2:{c.instructions+=6;NFSU2_TR(0x770ad2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ad3:{NFSU2_TR(0x770ad3);
__builtin_memmove((R+20),(R+16),4);
}
B770ad5:{NFSU2_TR(0x770ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770ad8:{NFSU2_TR(0x770ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770ade:{NFSU2_TR(0x770ade);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770ae1:{NFSU2_TR(0x770ae1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770b38;}}
}
B770ae3:L770ae3:{c.instructions+=26;NFSU2_TR(0x770ae3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ae4:{NFSU2_TR(0x770ae4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ae5:{NFSU2_TR(0x770ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B770ae8:{NFSU2_TR(0x770ae8);
__builtin_memmove((R+8),(R+24),4);
}
B770aea:{NFSU2_TR(0x770aea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770aec:{NFSU2_TR(0x770aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770aef:{NFSU2_TR(0x770aef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770af6:{NFSU2_TR(0x770af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770af9:{NFSU2_TR(0x770af9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770aff:{NFSU2_TR(0x770aff);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770b02:{NFSU2_TR(0x770b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770b05:{NFSU2_TR(0x770b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770b08:{NFSU2_TR(0x770b08);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770b0e:{NFSU2_TR(0x770b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770b11:{NFSU2_TR(0x770b11);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770b14:{NFSU2_TR(0x770b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770b1a:{NFSU2_TR(0x770b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770b1d:{NFSU2_TR(0x770b1d);
w1(R+4,u8(0x10ull));
}
B770b1f:{NFSU2_TR(0x770b1f);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B770b21:{NFSU2_TR(0x770b21);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B770b24:{NFSU2_TR(0x770b24);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff3ull))));
}
B770b27:{NFSU2_TR(0x770b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770b2d:{NFSU2_TR(0x770b2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770b34:{NFSU2_TR(0x770b34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770b35:{NFSU2_TR(0x770b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770b36:{NFSU2_TR(0x770b36);
{goto L770b4d;}
}
B770b38:L770b38:{c.instructions+=5;NFSU2_TR(0x770b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770b3b:{NFSU2_TR(0x770b3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770b3d:{NFSU2_TR(0x770b3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770b44:{NFSU2_TR(0x770b44);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B770b47:{NFSU2_TR(0x770b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770b4d:L770b4d:{c.instructions+=4;NFSU2_TR(0x770b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770b50:{NFSU2_TR(0x770b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770b53:{NFSU2_TR(0x770b53);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770b55:{NFSU2_TR(0x770b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770b5aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7707abu);}goto L7707ab;}
}
B770b5a:L770b5a:{c.instructions+=2;NFSU2_TR(0x770b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770b5b:{NFSU2_TR(0x770b5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770b5e:L770b5e:{c.instructions+=9;NFSU2_TR(0x770b5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770b5f:{NFSU2_TR(0x770b5f);
__builtin_memmove((R+20),(R+16),4);
}
B770b61:{NFSU2_TR(0x770b61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770b62:{NFSU2_TR(0x770b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B770b65:{NFSU2_TR(0x770b65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B770b67:{NFSU2_TR(0x770b67);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B770b6a:{NFSU2_TR(0x770b6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770b6b:{NFSU2_TR(0x770b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B770b6e:{NFSU2_TR(0x770b6e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770bba;}}
}
B770b70:L770b70:{c.instructions+=2;NFSU2_TR(0x770b70);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B770b74:{NFSU2_TR(0x770b74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L770b7d;}}
}
B770b76:L770b76:{c.instructions+=2;NFSU2_TR(0x770b76);
__builtin_memmove((R+4),(R+24),4);
}
B770b78:{NFSU2_TR(0x770b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770b7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7706ffu);}goto L7706ff;}
}
B770b7d:L770b7d:{c.instructions+=3;NFSU2_TR(0x770b7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B770b83:{NFSU2_TR(0x770b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770b84:{NFSU2_TR(0x770b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770b89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770895u);}goto L770895;}
}
B770b89:L770b89:{c.instructions+=3;NFSU2_TR(0x770b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B770b8f:{NFSU2_TR(0x770b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770b90:{NFSU2_TR(0x770b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770b95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770895u);}goto L770895;}
}
B770b95:L770b95:{c.instructions+=2;NFSU2_TR(0x770b95);
__builtin_memmove((R+0),(R+24),4);
}
B770b97:{NFSU2_TR(0x770b97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770b9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770a78u);}goto L770a78;}
}
B770b9c:L770b9c:{c.instructions+=8;NFSU2_TR(0x770b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770ba2:{NFSU2_TR(0x770ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770ba8:{NFSU2_TR(0x770ba8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xaull))));
}
B770bab:{NFSU2_TR(0x770bab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xaull))));
}
B770bae:{NFSU2_TR(0x770bae);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B770bb1:{NFSU2_TR(0x770bb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B770bb4:{NFSU2_TR(0x770bb4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770bb6:{NFSU2_TR(0x770bb6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L770bbf;}}
}
B770bb8:L770bb8:{c.instructions+=1;NFSU2_TR(0x770bb8);
{goto L770bbd;}
}
B770bba:L770bba:{c.instructions+=1;NFSU2_TR(0x770bba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B770bbd:L770bbd:{c.instructions+=1;NFSU2_TR(0x770bbd);
__builtin_memmove((R+8),(R+4),4);
}
B770bbf:L770bbf:{c.instructions+=4;NFSU2_TR(0x770bbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770bc0:{NFSU2_TR(0x770bc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770bc3:{NFSU2_TR(0x770bc3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770bc5:{NFSU2_TR(0x770bc5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L770bdf;}}
}
B770bc7:L770bc7:{c.instructions+=2;NFSU2_TR(0x770bc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B770bcb:{NFSU2_TR(0x770bcb);
if(r1(R+518)){{goto L770bdf;}}
}
B770bcd:L770bcd:{c.instructions+=5;NFSU2_TR(0x770bcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B770bd0:{NFSU2_TR(0x770bd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770bd1:{NFSU2_TR(0x770bd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B770bd4:{NFSU2_TR(0x770bd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770bd5:{NFSU2_TR(0x770bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770bdaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770ad2u);}goto L770ad2;}
}
B770bda:L770bda:{c.instructions+=1;NFSU2_TR(0x770bda);
{goto L770cfc;}
}
B770bdf:L770bdf:{c.instructions+=3;NFSU2_TR(0x770bdf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770be1:{NFSU2_TR(0x770be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770be7:{NFSU2_TR(0x770be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L770c63;}}
}
B770be9:L770be9:{c.instructions+=4;NFSU2_TR(0x770be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770bec:{NFSU2_TR(0x770bec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B770bef:{NFSU2_TR(0x770bef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770bf2:{NFSU2_TR(0x770bf2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770c42;}}
}
B770bf4:L770bf4:{c.instructions+=21;NFSU2_TR(0x770bf4);
__builtin_memmove((R+8),(R+0),4);
}
B770bf6:{NFSU2_TR(0x770bf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770bf8:{NFSU2_TR(0x770bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770bfb:{NFSU2_TR(0x770bfb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770c02:{NFSU2_TR(0x770c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770c05:{NFSU2_TR(0x770c05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770c0b:{NFSU2_TR(0x770c0b);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770c0e:{NFSU2_TR(0x770c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770c11:{NFSU2_TR(0x770c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770c14:{NFSU2_TR(0x770c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770c17:{NFSU2_TR(0x770c17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770c1d:{NFSU2_TR(0x770c1d);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770c20:{NFSU2_TR(0x770c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770c26:{NFSU2_TR(0x770c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770c29:{NFSU2_TR(0x770c29);
w1(R+4,u8(0x10ull));
}
B770c2b:{NFSU2_TR(0x770c2b);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B770c2d:{NFSU2_TR(0x770c2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+0,shr<u16>(r2(R+0),u64(r1(U+0))));
}
B770c30:{NFSU2_TR(0x770c30);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff3ull))));
}
B770c33:{NFSU2_TR(0x770c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770c39:{NFSU2_TR(0x770c39);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770c40:{NFSU2_TR(0x770c40);
{goto L770c54;}
}
B770c42:L770c42:{c.instructions+=4;NFSU2_TR(0x770c42);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B770c44:{NFSU2_TR(0x770c44);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B770c4b:{NFSU2_TR(0x770c4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B770c4e:{NFSU2_TR(0x770c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770c54:L770c54:{c.instructions+=3;NFSU2_TR(0x770c54);
u8 U[4];
w4(U+0,u32(0x7dcdc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770c59:{NFSU2_TR(0x770c59);
u8 U[4];
w4(U+0,u32(0x7dc940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770c5e:{NFSU2_TR(0x770c5e);
{goto L770cf5;}
}
B770c63:L770c63:{c.instructions+=4;NFSU2_TR(0x770c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B770c66:{NFSU2_TR(0x770c66);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B770c69:{NFSU2_TR(0x770c69);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B770c6c:{NFSU2_TR(0x770c6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L770cbc;}}
}
B770c6e:L770c6e:{c.instructions+=21;NFSU2_TR(0x770c6e);
__builtin_memmove((R+28),(R+8),4);
}
B770c70:{NFSU2_TR(0x770c70);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B770c72:{NFSU2_TR(0x770c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770c75:{NFSU2_TR(0x770c75);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B770c7c:{NFSU2_TR(0x770c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B770c7f:{NFSU2_TR(0x770c7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770c85:{NFSU2_TR(0x770c85);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770c88:{NFSU2_TR(0x770c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770c8b:{NFSU2_TR(0x770c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B770c8e:{NFSU2_TR(0x770c8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B770c94:{NFSU2_TR(0x770c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B770c97:{NFSU2_TR(0x770c97);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B770c9a:{NFSU2_TR(0x770c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B770ca0:{NFSU2_TR(0x770ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B770ca3:{NFSU2_TR(0x770ca3);
w1(R+4,u8(0x10ull));
}
B770ca5:{NFSU2_TR(0x770ca5);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B770ca7:{NFSU2_TR(0x770ca7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+8,shr<u16>(r2(R+8),u64(r1(U+0))));
}
B770caa:{NFSU2_TR(0x770caa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffff3ull))));
}
B770cad:{NFSU2_TR(0x770cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770cb3:{NFSU2_TR(0x770cb3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B770cba:{NFSU2_TR(0x770cba);
{goto L770cce;}
}
B770cbc:L770cbc:{c.instructions+=4;NFSU2_TR(0x770cbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B770cbe:{NFSU2_TR(0x770cbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B770cc5:{NFSU2_TR(0x770cc5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B770cc8:{NFSU2_TR(0x770cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B770cce:L770cce:{c.instructions+=10;NFSU2_TR(0x770cce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B770ccf:{NFSU2_TR(0x770ccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770cd0:{NFSU2_TR(0x770cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770cd6:{NFSU2_TR(0x770cd6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B770cd7:{NFSU2_TR(0x770cd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770cd8:{NFSU2_TR(0x770cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B770cde:{NFSU2_TR(0x770cde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B770cdf:{NFSU2_TR(0x770cdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ce0:{NFSU2_TR(0x770ce0);
__builtin_memmove((R+0),(R+24),4);
}
B770ce2:{NFSU2_TR(0x770ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770ce7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770110u);}goto L770110;}
}
B770ce7:L770ce7:{c.instructions+=4;NFSU2_TR(0x770ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x980ull))));
__builtin_memmove((R+0),(U+0),4);
}
B770ced:{NFSU2_TR(0x770ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770cee:{NFSU2_TR(0x770cee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B770cf4:{NFSU2_TR(0x770cf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770cf5:L770cf5:{c.instructions+=2;NFSU2_TR(0x770cf5);
__builtin_memmove((R+0),(R+24),4);
}
B770cf7:{NFSU2_TR(0x770cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770cfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77034bu);}goto L77034b;}
}
B770cfc:L770cfc:{c.instructions+=2;NFSU2_TR(0x770cfc);
__builtin_memmove((R+0),(R+24),4);
}
B770cfe:{NFSU2_TR(0x770cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770d03ull));
TAIL_STATIC(0x76f8edu,76f);
}
B770d03:L770d03:{c.instructions+=3;NFSU2_TR(0x770d03);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B770d07:{NFSU2_TR(0x770d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B770d08:{NFSU2_TR(0x770d08);
if(r1(R+518)){{goto L770d0f;}}
}
B770d0a:L770d0a:{c.instructions+=1;NFSU2_TR(0x770d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770d0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x770754u);}goto L770754;}
}
B770d0f:L770d0f:{c.instructions+=4;NFSU2_TR(0x770d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B770d10:{NFSU2_TR(0x770d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B770d11:{NFSU2_TR(0x770d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d12:{NFSU2_TR(0x770d12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B770d16:L770d16:{c.instructions+=1;NFSU2_TR(0x770d16);
{u32 t_=u32(m4(0x78302c));TAIL_DYNAMIC(t_);}
}
B770d1c:L770d1c:{c.instructions+=1;NFSU2_TR(0x770d1c);
{u32 t_=u32(m4(0x78301c));TAIL_DYNAMIC(t_);}
}
B770d22:L770d22:{c.instructions+=1;NFSU2_TR(0x770d22);
{u32 t_=u32(m4(0x7832f8));TAIL_DYNAMIC(t_);}
}
B770d28:L770d28:{c.instructions+=1;NFSU2_TR(0x770d28);
{u32 t_=u32(m4(0x7832f4));TAIL_DYNAMIC(t_);}
}
B770d2e:L770d2e:{c.instructions+=1;NFSU2_TR(0x770d2e);
{u32 t_=u32(m4(0x7832f0));TAIL_DYNAMIC(t_);}
}
B770d34:L770d34:{c.instructions+=1;NFSU2_TR(0x770d34);
{u32 t_=u32(m4(0x7832ec));TAIL_DYNAMIC(t_);}
}
B770d3a:L770d3a:{c.instructions+=1;NFSU2_TR(0x770d3a);
{u32 t_=u32(m4(0x7832e8));TAIL_DYNAMIC(t_);}
}
B770d40:L770d40:{c.instructions+=1;NFSU2_TR(0x770d40);
{u32 t_=u32(m4(0x7832e4));TAIL_DYNAMIC(t_);}
}
B770d46:L770d46:{c.instructions+=1;NFSU2_TR(0x770d46);
{u32 t_=u32(m4(0x783300));TAIL_DYNAMIC(t_);}
}
B770d4c:L770d4c:{c.instructions+=1;NFSU2_TR(0x770d4c);
{u32 t_=u32(m4(0x783304));TAIL_DYNAMIC(t_);}
}
B770d52:L770d52:{c.instructions+=1;NFSU2_TR(0x770d52);
{u32 t_=u32(m4(0x7832fc));TAIL_DYNAMIC(t_);}
}
B770d58:L770d58:{c.instructions+=1;NFSU2_TR(0x770d58);
{u32 t_=u32(m4(0x7832cc));TAIL_DYNAMIC(t_);}
}
B770d67:L770d67:{c.instructions+=4;NFSU2_TR(0x770d67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d68:{NFSU2_TR(0x770d68);
__builtin_memmove((R+20),(R+16),4);
}
B770d6a:{NFSU2_TR(0x770d6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d6b:{NFSU2_TR(0x770d6b);
{goto L770e90;}
}
B770d70:L770d70:{c.instructions+=4;NFSU2_TR(0x770d70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d71:{NFSU2_TR(0x770d71);
__builtin_memmove((R+20),(R+16),4);
}
B770d73:{NFSU2_TR(0x770d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d74:{NFSU2_TR(0x770d74);
{goto L770e99;}
}
B770d79:L770d79:{c.instructions+=4;NFSU2_TR(0x770d79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d7a:{NFSU2_TR(0x770d7a);
__builtin_memmove((R+20),(R+16),4);
}
B770d7c:{NFSU2_TR(0x770d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d7d:{NFSU2_TR(0x770d7d);
{goto L770eab;}
}
B770d82:L770d82:{c.instructions+=4;NFSU2_TR(0x770d82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d83:{NFSU2_TR(0x770d83);
__builtin_memmove((R+20),(R+16),4);
}
B770d85:{NFSU2_TR(0x770d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d86:{NFSU2_TR(0x770d86);
{goto L770eb4;}
}
B770d8b:L770d8b:{c.instructions+=4;NFSU2_TR(0x770d8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d8c:{NFSU2_TR(0x770d8c);
__builtin_memmove((R+20),(R+16),4);
}
B770d8e:{NFSU2_TR(0x770d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d8f:{NFSU2_TR(0x770d8f);
{goto L770ec6;}
}
B770d94:L770d94:{c.instructions+=4;NFSU2_TR(0x770d94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d95:{NFSU2_TR(0x770d95);
__builtin_memmove((R+20),(R+16),4);
}
B770d97:{NFSU2_TR(0x770d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770d98:{NFSU2_TR(0x770d98);
{goto L770ecf;}
}
B770d9d:L770d9d:{c.instructions+=4;NFSU2_TR(0x770d9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770d9e:{NFSU2_TR(0x770d9e);
__builtin_memmove((R+20),(R+16),4);
}
B770da0:{NFSU2_TR(0x770da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770da1:{NFSU2_TR(0x770da1);
{goto L770ed8;}
}
B770da6:L770da6:{c.instructions+=4;NFSU2_TR(0x770da6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770da7:{NFSU2_TR(0x770da7);
__builtin_memmove((R+20),(R+16),4);
}
B770da9:{NFSU2_TR(0x770da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770daa:{NFSU2_TR(0x770daa);
{goto L770eea;}
}
B770daf:L770daf:{c.instructions+=4;NFSU2_TR(0x770daf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770db0:{NFSU2_TR(0x770db0);
__builtin_memmove((R+20),(R+16),4);
}
B770db2:{NFSU2_TR(0x770db2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770db3:{NFSU2_TR(0x770db3);
{goto L770ef3;}
}
B770db8:L770db8:{c.instructions+=4;NFSU2_TR(0x770db8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770db9:{NFSU2_TR(0x770db9);
__builtin_memmove((R+20),(R+16),4);
}
B770dbb:{NFSU2_TR(0x770dbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770dbc:{NFSU2_TR(0x770dbc);
{goto L770efc;}
}
B770dc1:L770dc1:{c.instructions+=4;NFSU2_TR(0x770dc1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770dc2:{NFSU2_TR(0x770dc2);
__builtin_memmove((R+20),(R+16),4);
}
B770dc4:{NFSU2_TR(0x770dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770dc5:{NFSU2_TR(0x770dc5);
{goto L770f05;}
}
B770dca:L770dca:{c.instructions+=4;NFSU2_TR(0x770dca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770dcb:{NFSU2_TR(0x770dcb);
__builtin_memmove((R+20),(R+16),4);
}
B770dcd:{NFSU2_TR(0x770dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770dce:{NFSU2_TR(0x770dce);
{goto L770f0e;}
}
B770dd3:L770dd3:{c.instructions+=4;NFSU2_TR(0x770dd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770dd4:{NFSU2_TR(0x770dd4);
__builtin_memmove((R+20),(R+16),4);
}
B770dd6:{NFSU2_TR(0x770dd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770dd7:{NFSU2_TR(0x770dd7);
{goto L770f17;}
}
B770ddc:L770ddc:{c.instructions+=4;NFSU2_TR(0x770ddc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ddd:{NFSU2_TR(0x770ddd);
__builtin_memmove((R+20),(R+16),4);
}
B770ddf:{NFSU2_TR(0x770ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770de0:{NFSU2_TR(0x770de0);
{goto L770f20;}
}
B770de5:L770de5:{c.instructions+=4;NFSU2_TR(0x770de5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770de6:{NFSU2_TR(0x770de6);
__builtin_memmove((R+20),(R+16),4);
}
B770de8:{NFSU2_TR(0x770de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770de9:{NFSU2_TR(0x770de9);
{goto L770f29;}
}
B770dee:L770dee:{c.instructions+=4;NFSU2_TR(0x770dee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770def:{NFSU2_TR(0x770def);
__builtin_memmove((R+20),(R+16),4);
}
B770df1:{NFSU2_TR(0x770df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770df2:{NFSU2_TR(0x770df2);
{goto L770f32;}
}
B770df7:L770df7:{c.instructions+=4;NFSU2_TR(0x770df7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770df8:{NFSU2_TR(0x770df8);
__builtin_memmove((R+20),(R+16),4);
}
B770dfa:{NFSU2_TR(0x770dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770dfb:{NFSU2_TR(0x770dfb);
{goto L770f3b;}
}
B770e00:L770e00:{c.instructions+=4;NFSU2_TR(0x770e00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e01:{NFSU2_TR(0x770e01);
__builtin_memmove((R+20),(R+16),4);
}
B770e03:{NFSU2_TR(0x770e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e04:{NFSU2_TR(0x770e04);
{goto L770f44;}
}
B770e09:L770e09:{c.instructions+=4;NFSU2_TR(0x770e09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e0a:{NFSU2_TR(0x770e0a);
__builtin_memmove((R+20),(R+16),4);
}
B770e0c:{NFSU2_TR(0x770e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e0d:{NFSU2_TR(0x770e0d);
{goto L770f4d;}
}
B770e12:L770e12:{c.instructions+=4;NFSU2_TR(0x770e12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e13:{NFSU2_TR(0x770e13);
__builtin_memmove((R+20),(R+16),4);
}
B770e15:{NFSU2_TR(0x770e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e16:{NFSU2_TR(0x770e16);
{goto L770f56;}
}
B770e1b:L770e1b:{c.instructions+=4;NFSU2_TR(0x770e1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e1c:{NFSU2_TR(0x770e1c);
__builtin_memmove((R+20),(R+16),4);
}
B770e1e:{NFSU2_TR(0x770e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e1f:{NFSU2_TR(0x770e1f);
{goto L770f5f;}
}
B770e24:L770e24:{c.instructions+=4;NFSU2_TR(0x770e24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e25:{NFSU2_TR(0x770e25);
__builtin_memmove((R+20),(R+16),4);
}
B770e27:{NFSU2_TR(0x770e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e28:{NFSU2_TR(0x770e28);
{goto L770f68;}
}
B770e2d:L770e2d:{c.instructions+=4;NFSU2_TR(0x770e2d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e2e:{NFSU2_TR(0x770e2e);
__builtin_memmove((R+20),(R+16),4);
}
B770e30:{NFSU2_TR(0x770e30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e31:{NFSU2_TR(0x770e31);
{goto L770f71;}
}
B770e36:L770e36:{c.instructions+=4;NFSU2_TR(0x770e36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e37:{NFSU2_TR(0x770e37);
__builtin_memmove((R+20),(R+16),4);
}
B770e39:{NFSU2_TR(0x770e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e3a:{NFSU2_TR(0x770e3a);
{goto L770f7a;}
}
B770e3f:L770e3f:{c.instructions+=4;NFSU2_TR(0x770e3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e40:{NFSU2_TR(0x770e40);
__builtin_memmove((R+20),(R+16),4);
}
B770e42:{NFSU2_TR(0x770e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e43:{NFSU2_TR(0x770e43);
{goto L770f83;}
}
B770e48:L770e48:{c.instructions+=4;NFSU2_TR(0x770e48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e49:{NFSU2_TR(0x770e49);
__builtin_memmove((R+20),(R+16),4);
}
B770e4b:{NFSU2_TR(0x770e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e4c:{NFSU2_TR(0x770e4c);
{goto L770f8c;}
}
B770e51:L770e51:{c.instructions+=4;NFSU2_TR(0x770e51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e52:{NFSU2_TR(0x770e52);
__builtin_memmove((R+20),(R+16),4);
}
B770e54:{NFSU2_TR(0x770e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e55:{NFSU2_TR(0x770e55);
{goto L770f95;}
}
B770e5a:L770e5a:{c.instructions+=4;NFSU2_TR(0x770e5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e5b:{NFSU2_TR(0x770e5b);
__builtin_memmove((R+20),(R+16),4);
}
B770e5d:{NFSU2_TR(0x770e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e5e:{NFSU2_TR(0x770e5e);
{goto L770f9e;}
}
B770e63:L770e63:{c.instructions+=4;NFSU2_TR(0x770e63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e64:{NFSU2_TR(0x770e64);
__builtin_memmove((R+20),(R+16),4);
}
B770e66:{NFSU2_TR(0x770e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e67:{NFSU2_TR(0x770e67);
{goto L770fa7;}
}
B770e6c:L770e6c:{c.instructions+=4;NFSU2_TR(0x770e6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e6d:{NFSU2_TR(0x770e6d);
__builtin_memmove((R+20),(R+16),4);
}
B770e6f:{NFSU2_TR(0x770e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e70:{NFSU2_TR(0x770e70);
{goto L770fb0;}
}
B770e75:L770e75:{c.instructions+=4;NFSU2_TR(0x770e75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e76:{NFSU2_TR(0x770e76);
__builtin_memmove((R+20),(R+16),4);
}
B770e78:{NFSU2_TR(0x770e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e79:{NFSU2_TR(0x770e79);
{goto L770fb9;}
}
B770e7e:L770e7e:{c.instructions+=4;NFSU2_TR(0x770e7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e7f:{NFSU2_TR(0x770e7f);
__builtin_memmove((R+20),(R+16),4);
}
B770e81:{NFSU2_TR(0x770e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e82:{NFSU2_TR(0x770e82);
{goto L770fc2;}
}
B770e87:L770e87:{c.instructions+=4;NFSU2_TR(0x770e87);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e88:{NFSU2_TR(0x770e88);
__builtin_memmove((R+20),(R+16),4);
}
B770e8a:{NFSU2_TR(0x770e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e8b:{NFSU2_TR(0x770e8b);
TAIL_STATIC(0x6f7542u,6f7);
}
B770e90:L770e90:{c.instructions+=4;NFSU2_TR(0x770e90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e91:{NFSU2_TR(0x770e91);
__builtin_memmove((R+20),(R+16),4);
}
B770e93:{NFSU2_TR(0x770e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e94:{NFSU2_TR(0x770e94);
TAIL_STATIC(0x6f76f2u,6f7);
}
B770e99:L770e99:{c.instructions+=4;NFSU2_TR(0x770e99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770e9a:{NFSU2_TR(0x770e9a);
__builtin_memmove((R+20),(R+16),4);
}
B770e9c:{NFSU2_TR(0x770e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770e9d:{NFSU2_TR(0x770e9d);
TAIL_STATIC(0x6f7745u,6f7);
}
B770ea2:L770ea2:{c.instructions+=4;NFSU2_TR(0x770ea2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ea3:{NFSU2_TR(0x770ea3);
__builtin_memmove((R+20),(R+16),4);
}
B770ea5:{NFSU2_TR(0x770ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770ea6:{NFSU2_TR(0x770ea6);
TAIL_STATIC(0x6f7597u,6f7);
}
B770eab:L770eab:{c.instructions+=4;NFSU2_TR(0x770eab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770eac:{NFSU2_TR(0x770eac);
__builtin_memmove((R+20),(R+16),4);
}
B770eae:{NFSU2_TR(0x770eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770eaf:{NFSU2_TR(0x770eaf);
TAIL_STATIC(0x6f75ddu,6f7);
}
B770eb4:L770eb4:{c.instructions+=4;NFSU2_TR(0x770eb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770eb5:{NFSU2_TR(0x770eb5);
__builtin_memmove((R+20),(R+16),4);
}
B770eb7:{NFSU2_TR(0x770eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770eb8:{NFSU2_TR(0x770eb8);
TAIL_STATIC(0x6f76e9u,6f7);
}
B770ebd:L770ebd:{c.instructions+=4;NFSU2_TR(0x770ebd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ebe:{NFSU2_TR(0x770ebe);
__builtin_memmove((R+20),(R+16),4);
}
B770ec0:{NFSU2_TR(0x770ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770ec1:{NFSU2_TR(0x770ec1);
TAIL_STATIC(0x6f7b34u,6f7);
}
B770ec6:L770ec6:{c.instructions+=4;NFSU2_TR(0x770ec6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ec7:{NFSU2_TR(0x770ec7);
__builtin_memmove((R+20),(R+16),4);
}
B770ec9:{NFSU2_TR(0x770ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770eca:{NFSU2_TR(0x770eca);
TAIL_STATIC(0x6f7c1bu,6f7);
}
B770ecf:L770ecf:{c.instructions+=4;NFSU2_TR(0x770ecf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ed0:{NFSU2_TR(0x770ed0);
__builtin_memmove((R+20),(R+16),4);
}
B770ed2:{NFSU2_TR(0x770ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770ed3:{NFSU2_TR(0x770ed3);
TAIL_STATIC(0x6f7790u,6f7);
}
B770ed8:L770ed8:{c.instructions+=4;NFSU2_TR(0x770ed8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ed9:{NFSU2_TR(0x770ed9);
__builtin_memmove((R+20),(R+16),4);
}
B770edb:{NFSU2_TR(0x770edb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770edc:{NFSU2_TR(0x770edc);
TAIL_STATIC(0x6f77bcu,6f7);
}
B770ee1:L770ee1:{c.instructions+=4;NFSU2_TR(0x770ee1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ee2:{NFSU2_TR(0x770ee2);
__builtin_memmove((R+20),(R+16),4);
}
B770ee4:{NFSU2_TR(0x770ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770ee5:{NFSU2_TR(0x770ee5);
TAIL_STATIC(0x6f782cu,6f7);
}
B770eea:L770eea:{c.instructions+=4;NFSU2_TR(0x770eea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770eeb:{NFSU2_TR(0x770eeb);
__builtin_memmove((R+20),(R+16),4);
}
B770eed:{NFSU2_TR(0x770eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770eee:{NFSU2_TR(0x770eee);
TAIL_STATIC(0x6f7861u,6f7);
}
B770ef3:L770ef3:{c.instructions+=4;NFSU2_TR(0x770ef3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ef4:{NFSU2_TR(0x770ef4);
__builtin_memmove((R+20),(R+16),4);
}
B770ef6:{NFSU2_TR(0x770ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770ef7:{NFSU2_TR(0x770ef7);
TAIL_STATIC(0x6f8738u,6f8);
}
B770efc:L770efc:{c.instructions+=4;NFSU2_TR(0x770efc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770efd:{NFSU2_TR(0x770efd);
__builtin_memmove((R+20),(R+16),4);
}
B770eff:{NFSU2_TR(0x770eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f00:{NFSU2_TR(0x770f00);
TAIL_STATIC(0x6f876cu,6f8);
}
B770f05:L770f05:{c.instructions+=4;NFSU2_TR(0x770f05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f06:{NFSU2_TR(0x770f06);
__builtin_memmove((R+20),(R+16),4);
}
B770f08:{NFSU2_TR(0x770f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f09:{NFSU2_TR(0x770f09);
TAIL_STATIC(0x6f879au,6f8);
}
B770f0e:L770f0e:{c.instructions+=4;NFSU2_TR(0x770f0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f0f:{NFSU2_TR(0x770f0f);
__builtin_memmove((R+20),(R+16),4);
}
B770f11:{NFSU2_TR(0x770f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f12:{NFSU2_TR(0x770f12);
TAIL_STATIC(0x6f87c5u,6f8);
}
B770f17:L770f17:{c.instructions+=4;NFSU2_TR(0x770f17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f18:{NFSU2_TR(0x770f18);
__builtin_memmove((R+20),(R+16),4);
}
B770f1a:{NFSU2_TR(0x770f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f1b:{NFSU2_TR(0x770f1b);
TAIL_STATIC(0x6f87eau,6f8);
}
B770f20:L770f20:{c.instructions+=4;NFSU2_TR(0x770f20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f21:{NFSU2_TR(0x770f21);
__builtin_memmove((R+20),(R+16),4);
}
B770f23:{NFSU2_TR(0x770f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f24:{NFSU2_TR(0x770f24);
TAIL_STATIC(0x465360u,465);
}
B770f29:L770f29:{c.instructions+=4;NFSU2_TR(0x770f29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f2a:{NFSU2_TR(0x770f2a);
__builtin_memmove((R+20),(R+16),4);
}
B770f2c:{NFSU2_TR(0x770f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f2d:{NFSU2_TR(0x770f2d);
TAIL_STATIC(0x477500u,477);
}
B770f32:L770f32:{c.instructions+=4;NFSU2_TR(0x770f32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f33:{NFSU2_TR(0x770f33);
__builtin_memmove((R+20),(R+16),4);
}
B770f35:{NFSU2_TR(0x770f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f36:{NFSU2_TR(0x770f36);
TAIL_STATIC(0x483760u,483);
}
B770f3b:L770f3b:{c.instructions+=4;NFSU2_TR(0x770f3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f3c:{NFSU2_TR(0x770f3c);
__builtin_memmove((R+20),(R+16),4);
}
B770f3e:{NFSU2_TR(0x770f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f3f:{NFSU2_TR(0x770f3f);
TAIL_STATIC(0x465400u,465);
}
B770f44:L770f44:{c.instructions+=4;NFSU2_TR(0x770f44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f45:{NFSU2_TR(0x770f45);
__builtin_memmove((R+20),(R+16),4);
}
B770f47:{NFSU2_TR(0x770f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f48:{NFSU2_TR(0x770f48);
TAIL_STATIC(0x477710u,477);
}
B770f4d:L770f4d:{c.instructions+=4;NFSU2_TR(0x770f4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f4e:{NFSU2_TR(0x770f4e);
__builtin_memmove((R+20),(R+16),4);
}
B770f50:{NFSU2_TR(0x770f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f51:{NFSU2_TR(0x770f51);
TAIL_STATIC(0x465430u,465);
}
B770f56:L770f56:{c.instructions+=4;NFSU2_TR(0x770f56);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f57:{NFSU2_TR(0x770f57);
__builtin_memmove((R+20),(R+16),4);
}
B770f59:{NFSU2_TR(0x770f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f5a:{NFSU2_TR(0x770f5a);
TAIL_STATIC(0x4654a0u,465);
}
B770f5f:L770f5f:{c.instructions+=4;NFSU2_TR(0x770f5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f60:{NFSU2_TR(0x770f60);
__builtin_memmove((R+20),(R+16),4);
}
B770f62:{NFSU2_TR(0x770f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f63:{NFSU2_TR(0x770f63);
TAIL_STATIC(0x465550u,465);
}
B770f68:L770f68:{c.instructions+=4;NFSU2_TR(0x770f68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f69:{NFSU2_TR(0x770f69);
__builtin_memmove((R+20),(R+16),4);
}
B770f6b:{NFSU2_TR(0x770f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f6c:{NFSU2_TR(0x770f6c);
TAIL_STATIC(0x47fc50u,47f);
}
B770f71:L770f71:{c.instructions+=4;NFSU2_TR(0x770f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f72:{NFSU2_TR(0x770f72);
__builtin_memmove((R+20),(R+16),4);
}
B770f74:{NFSU2_TR(0x770f74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f75:{NFSU2_TR(0x770f75);
TAIL_STATIC(0x47fe80u,47f);
}
B770f7a:L770f7a:{c.instructions+=4;NFSU2_TR(0x770f7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f7b:{NFSU2_TR(0x770f7b);
__builtin_memmove((R+20),(R+16),4);
}
B770f7d:{NFSU2_TR(0x770f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f7e:{NFSU2_TR(0x770f7e);
TAIL_STATIC(0x465600u,465);
}
B770f83:L770f83:{c.instructions+=4;NFSU2_TR(0x770f83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f84:{NFSU2_TR(0x770f84);
__builtin_memmove((R+20),(R+16),4);
}
B770f86:{NFSU2_TR(0x770f86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f87:{NFSU2_TR(0x770f87);
TAIL_STATIC(0x477760u,477);
}
B770f8c:L770f8c:{c.instructions+=4;NFSU2_TR(0x770f8c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f8d:{NFSU2_TR(0x770f8d);
__builtin_memmove((R+20),(R+16),4);
}
B770f8f:{NFSU2_TR(0x770f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f90:{NFSU2_TR(0x770f90);
TAIL_STATIC(0x4656b0u,465);
}
B770f95:L770f95:{c.instructions+=4;NFSU2_TR(0x770f95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f96:{NFSU2_TR(0x770f96);
__builtin_memmove((R+20),(R+16),4);
}
B770f98:{NFSU2_TR(0x770f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770f99:{NFSU2_TR(0x770f99);
TAIL_STATIC(0x4656d0u,465);
}
B770f9e:L770f9e:{c.instructions+=4;NFSU2_TR(0x770f9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770f9f:{NFSU2_TR(0x770f9f);
__builtin_memmove((R+20),(R+16),4);
}
B770fa1:{NFSU2_TR(0x770fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770fa2:{NFSU2_TR(0x770fa2);
TAIL_STATIC(0x4656f0u,465);
}
B770fa7:L770fa7:{c.instructions+=4;NFSU2_TR(0x770fa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770fa8:{NFSU2_TR(0x770fa8);
__builtin_memmove((R+20),(R+16),4);
}
B770faa:{NFSU2_TR(0x770faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770fab:{NFSU2_TR(0x770fab);
TAIL_STATIC(0x465720u,465);
}
B770fb0:L770fb0:{c.instructions+=4;NFSU2_TR(0x770fb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770fb1:{NFSU2_TR(0x770fb1);
__builtin_memmove((R+20),(R+16),4);
}
B770fb3:{NFSU2_TR(0x770fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770fb4:{NFSU2_TR(0x770fb4);
TAIL_STATIC(0x465740u,465);
}
B770fb9:L770fb9:{c.instructions+=4;NFSU2_TR(0x770fb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770fba:{NFSU2_TR(0x770fba);
__builtin_memmove((R+20),(R+16),4);
}
B770fbc:{NFSU2_TR(0x770fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770fbd:{NFSU2_TR(0x770fbd);
TAIL_STATIC(0x465760u,465);
}
B770fc2:L770fc2:{c.instructions+=4;NFSU2_TR(0x770fc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770fc3:{NFSU2_TR(0x770fc3);
__builtin_memmove((R+20),(R+16),4);
}
B770fc5:{NFSU2_TR(0x770fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770fc6:{NFSU2_TR(0x770fc6);
TAIL_STATIC(0x4657e0u,465);
}
B770fcb:L770fcb:{c.instructions+=4;NFSU2_TR(0x770fcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770fcc:{NFSU2_TR(0x770fcc);
__builtin_memmove((R+20),(R+16),4);
}
B770fce:{NFSU2_TR(0x770fce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B770fcf:{NFSU2_TR(0x770fcf);
{u32 t_=u32(m4(0x814370));TAIL_DYNAMIC(t_);}
}
B770fdb:L770fdb:{c.instructions+=1;NFSU2_TR(0x770fdb);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x770fe1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B770fe1:L770fe1:{c.instructions+=2;NFSU2_TR(0x770fe1);
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
B770fe3:{NFSU2_TR(0x770fe3);
if(r1(R+518)){{goto L770fe7;}}
}
B770fe5:L770fe5:{c.instructions+=1;NFSU2_TR(0x770fe5);
u8 U[4];
{SPILL();c.pc=0x770fe5u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B770fe7:L770fe7:{c.instructions+=1;NFSU2_TR(0x770fe7);
{u32 t_=u32(m4(0x7830a4));TAIL_DYNAMIC(t_);}
}
B770fed:L770fed:{c.instructions+=6;NFSU2_TR(0x770fed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770fee:{NFSU2_TR(0x770fee);
__builtin_memmove((R+20),(R+16),4);
}
B770ff0:{NFSU2_TR(0x770ff0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B770ff4:{NFSU2_TR(0x770ff4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B770ff5:{NFSU2_TR(0x770ff5);
w4(R+24,u32(0x8b88b0ull));
}
B770ffa:{NFSU2_TR(0x770ffa);
if(r1(R+518)){TAIL_STATIC(0x771013u,771);}
}
B770ffc:L770ffc:{c.instructions+=2;NFSU2_TR(0x770ffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B770fff:{NFSU2_TR(0x770fff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x771000u,771);
}
XIT:NFSU2_TR_EXIT(0x770,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
