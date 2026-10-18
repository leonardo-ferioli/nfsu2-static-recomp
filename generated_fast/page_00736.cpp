#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_737(u8* __restrict R,Cpu& c);
u32 body_738(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x736,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x736,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_736(u8* __restrict R,Cpu& c);
u32 page_736(Cpu& c){return body_736(c.regs.data(),c);}
__attribute__((noinline)) u32 body_736(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x736001:goto L736001;
case 0x736002:c.instructions+=1;goto B736002;
case 0x736007:goto L736007;
case 0x73600a:c.instructions+=6;goto B73600a;
case 0x73600b:c.instructions+=5;goto B73600b;
case 0x73600c:c.instructions+=4;goto B73600c;
case 0x73600e:c.instructions+=3;goto B73600e;
case 0x73600f:c.instructions+=2;goto B73600f;
case 0x736012:c.instructions+=1;goto B736012;
case 0x736020:goto L736020;
case 0x736024:c.instructions+=3;goto B736024;
case 0x736026:c.instructions+=2;goto B736026;
case 0x736029:c.instructions+=1;goto B736029;
case 0x73602b:goto L73602b;
case 0x73602c:c.instructions+=4;goto B73602c;
case 0x736030:c.instructions+=3;goto B736030;
case 0x736031:c.instructions+=2;goto B736031;
case 0x736032:c.instructions+=1;goto B736032;
case 0x736037:goto L736037;
case 0x736038:c.instructions+=2;goto B736038;
case 0x73603a:c.instructions+=1;goto B73603a;
case 0x73603f:goto L73603f;
case 0x736042:c.instructions+=3;goto B736042;
case 0x736044:c.instructions+=2;goto B736044;
case 0x736045:c.instructions+=1;goto B736045;
case 0x736046:goto L736046;
case 0x736050:goto L736050;
case 0x736054:c.instructions+=2;goto B736054;
case 0x736059:c.instructions+=1;goto B736059;
case 0x736060:goto L736060;
case 0x736066:c.instructions+=4;goto B736066;
case 0x736068:c.instructions+=3;goto B736068;
case 0x73606b:c.instructions+=2;goto B73606b;
case 0x73606d:c.instructions+=1;goto B73606d;
case 0x73606f:goto L73606f;
case 0x736072:c.instructions+=8;goto B736072;
case 0x736073:c.instructions+=7;goto B736073;
case 0x736077:c.instructions+=6;goto B736077;
case 0x73607f:c.instructions+=5;goto B73607f;
case 0x736087:c.instructions+=4;goto B736087;
case 0x73608b:c.instructions+=3;goto B73608b;
case 0x73608d:c.instructions+=2;goto B73608d;
case 0x73608e:c.instructions+=1;goto B73608e;
case 0x736090:goto L736090;
case 0x736093:c.instructions+=1;goto B736093;
case 0x7360a0:goto L7360a0;
case 0x7360a6:c.instructions+=2;goto B7360a6;
case 0x7360a8:c.instructions+=1;goto B7360a8;
case 0x7360aa:goto L7360aa;
case 0x7360ae:c.instructions+=4;goto B7360ae;
case 0x7360b0:c.instructions+=3;goto B7360b0;
case 0x7360b2:c.instructions+=2;goto B7360b2;
case 0x7360b3:c.instructions+=1;goto B7360b3;
case 0x7360b6:goto L7360b6;
case 0x7360c0:goto L7360c0;
case 0x7360c5:c.instructions+=2;goto B7360c5;
case 0x7360ca:c.instructions+=1;goto B7360ca;
case 0x7360d0:goto L7360d0;
case 0x7360d4:c.instructions+=4;goto B7360d4;
case 0x7360da:c.instructions+=3;goto B7360da;
case 0x7360dd:c.instructions+=2;goto B7360dd;
case 0x7360e2:c.instructions+=1;goto B7360e2;
case 0x7360e4:goto L7360e4;
case 0x7360f0:goto L7360f0;
case 0x7360f4:c.instructions+=9;goto B7360f4;
case 0x7360f9:c.instructions+=8;goto B7360f9;
case 0x7360fa:c.instructions+=7;goto B7360fa;
case 0x7360fd:c.instructions+=6;goto B7360fd;
case 0x7360ff:c.instructions+=5;goto B7360ff;
case 0x736101:c.instructions+=4;goto B736101;
case 0x736105:c.instructions+=3;goto B736105;
case 0x736108:c.instructions+=2;goto B736108;
case 0x736109:c.instructions+=1;goto B736109;
case 0x73610b:goto L73610b;
case 0x73610c:c.instructions+=1;goto B73610c;
case 0x73610e:goto L73610e;
case 0x736110:c.instructions+=8;goto B736110;
case 0x736115:c.instructions+=7;goto B736115;
case 0x736117:c.instructions+=6;goto B736117;
case 0x736119:c.instructions+=5;goto B736119;
case 0x73611c:c.instructions+=4;goto B73611c;
case 0x73611e:c.instructions+=3;goto B73611e;
case 0x736121:c.instructions+=2;goto B736121;
case 0x736123:c.instructions+=1;goto B736123;
case 0x736124:goto L736124;
case 0x736129:c.instructions+=6;goto B736129;
case 0x73612b:c.instructions+=5;goto B73612b;
case 0x73612e:c.instructions+=4;goto B73612e;
case 0x736130:c.instructions+=3;goto B736130;
case 0x736133:c.instructions+=2;goto B736133;
case 0x736135:c.instructions+=1;goto B736135;
case 0x736136:goto L736136;
case 0x736138:c.instructions+=1;goto B736138;
case 0x736140:goto L736140;
case 0x73614a:c.instructions+=1;goto B73614a;
case 0x73614c:goto L73614c;
case 0x736150:c.instructions+=3;goto B736150;
case 0x736154:c.instructions+=2;goto B736154;
case 0x736159:c.instructions+=1;goto B736159;
case 0x73615f:goto L73615f;
case 0x736160:goto L736160;
case 0x73616a:c.instructions+=1;goto B73616a;
case 0x73616c:goto L73616c;
case 0x736170:c.instructions+=1;goto B736170;
case 0x736175:goto L736175;
case 0x736180:goto L736180;
case 0x736185:c.instructions+=5;goto B736185;
case 0x736186:c.instructions+=4;goto B736186;
case 0x736188:c.instructions+=3;goto B736188;
case 0x73618a:c.instructions+=2;goto B73618a;
case 0x736191:c.instructions+=1;goto B736191;
case 0x736193:goto L736193;
case 0x736195:c.instructions+=2;goto B736195;
case 0x736196:c.instructions+=1;goto B736196;
case 0x736197:goto L736197;
case 0x73619b:c.instructions+=12;goto B73619b;
case 0x73619f:c.instructions+=11;goto B73619f;
case 0x7361a4:c.instructions+=10;goto B7361a4;
case 0x7361a8:c.instructions+=9;goto B7361a8;
case 0x7361a9:c.instructions+=8;goto B7361a9;
case 0x7361af:c.instructions+=7;goto B7361af;
case 0x7361b5:c.instructions+=6;goto B7361b5;
case 0x7361bb:c.instructions+=5;goto B7361bb;
case 0x7361c1:c.instructions+=4;goto B7361c1;
case 0x7361c6:c.instructions+=3;goto B7361c6;
case 0x7361cc:c.instructions+=2;goto B7361cc;
case 0x7361d6:c.instructions+=1;goto B7361d6;
case 0x7361db:goto L7361db;
case 0x7361e0:goto L7361e0;
case 0x7361e1:c.instructions+=1;goto B7361e1;
case 0x7361e6:goto L7361e6;
case 0x7361e9:c.instructions+=9;goto B7361e9;
case 0x7361ef:c.instructions+=8;goto B7361ef;
case 0x7361f5:c.instructions+=7;goto B7361f5;
case 0x7361fb:c.instructions+=6;goto B7361fb;
case 0x736201:c.instructions+=5;goto B736201;
case 0x736207:c.instructions+=4;goto B736207;
case 0x73620d:c.instructions+=3;goto B73620d;
case 0x736213:c.instructions+=2;goto B736213;
case 0x736219:c.instructions+=1;goto B736219;
case 0x73621e:goto L73621e;
case 0x736223:c.instructions+=2;goto B736223;
case 0x736228:c.instructions+=1;goto B736228;
case 0x736230:goto L736230;
case 0x736234:c.instructions+=4;goto B736234;
case 0x736236:c.instructions+=3;goto B736236;
case 0x736239:c.instructions+=2;goto B736239;
case 0x73623e:c.instructions+=1;goto B73623e;
case 0x736240:goto L736240;
case 0x736245:goto L736245;
case 0x73624a:goto L73624a;
case 0x736254:c.instructions+=3;goto B736254;
case 0x736259:c.instructions+=2;goto B736259;
case 0x73625a:c.instructions+=1;goto B73625a;
case 0x736260:goto L736260;
case 0x73626a:c.instructions+=1;goto B73626a;
case 0x73626c:goto L73626c;
case 0x73626e:c.instructions+=7;goto B73626e;
case 0x736273:c.instructions+=6;goto B736273;
case 0x736278:c.instructions+=5;goto B736278;
case 0x73627d:c.instructions+=4;goto B73627d;
case 0x736282:c.instructions+=3;goto B736282;
case 0x736287:c.instructions+=2;goto B736287;
case 0x73628c:c.instructions+=1;goto B73628c;
case 0x736291:goto L736291;
case 0x736296:goto L736296;
case 0x7362a0:goto L7362a0;
case 0x7362a4:c.instructions+=5;goto B7362a4;
case 0x7362a5:c.instructions+=4;goto B7362a5;
case 0x7362a8:c.instructions+=3;goto B7362a8;
case 0x7362aa:c.instructions+=2;goto B7362aa;
case 0x7362ad:c.instructions+=1;goto B7362ad;
case 0x7362af:goto L7362af;
case 0x7362b3:c.instructions+=31;goto B7362b3;
case 0x7362b6:c.instructions+=30;goto B7362b6;
case 0x7362b7:c.instructions+=29;goto B7362b7;
case 0x7362b8:c.instructions+=28;goto B7362b8;
case 0x7362bb:c.instructions+=27;goto B7362bb;
case 0x7362bd:c.instructions+=26;goto B7362bd;
case 0x7362be:c.instructions+=25;goto B7362be;
case 0x7362c2:c.instructions+=24;goto B7362c2;
case 0x7362c5:c.instructions+=23;goto B7362c5;
case 0x7362c6:c.instructions+=22;goto B7362c6;
case 0x7362c9:c.instructions+=21;goto B7362c9;
case 0x7362cb:c.instructions+=20;goto B7362cb;
case 0x7362cc:c.instructions+=19;goto B7362cc;
case 0x7362d0:c.instructions+=18;goto B7362d0;
case 0x7362d3:c.instructions+=17;goto B7362d3;
case 0x7362d6:c.instructions+=16;goto B7362d6;
case 0x7362da:c.instructions+=15;goto B7362da;
case 0x7362dd:c.instructions+=14;goto B7362dd;
case 0x7362e0:c.instructions+=13;goto B7362e0;
case 0x7362e2:c.instructions+=12;goto B7362e2;
case 0x7362e6:c.instructions+=11;goto B7362e6;
case 0x7362e9:c.instructions+=10;goto B7362e9;
case 0x7362eb:c.instructions+=9;goto B7362eb;
case 0x7362ef:c.instructions+=8;goto B7362ef;
case 0x7362f0:c.instructions+=7;goto B7362f0;
case 0x7362f2:c.instructions+=6;goto B7362f2;
case 0x7362f5:c.instructions+=5;goto B7362f5;
case 0x7362f8:c.instructions+=4;goto B7362f8;
case 0x7362f9:c.instructions+=3;goto B7362f9;
case 0x7362fd:c.instructions+=2;goto B7362fd;
case 0x7362fe:c.instructions+=1;goto B7362fe;
case 0x736300:goto L736300;
case 0x736304:c.instructions+=3;goto B736304;
case 0x736308:c.instructions+=2;goto B736308;
case 0x73630b:c.instructions+=1;goto B73630b;
case 0x73630d:goto L73630d;
case 0x736310:c.instructions+=5;goto B736310;
case 0x736314:c.instructions+=4;goto B736314;
case 0x736317:c.instructions+=3;goto B736317;
case 0x73631a:c.instructions+=2;goto B73631a;
case 0x73631c:c.instructions+=1;goto B73631c;
case 0x736321:goto L736321;
case 0x736322:c.instructions+=1;goto B736322;
case 0x736330:goto L736330;
case 0x736334:c.instructions+=7;goto B736334;
case 0x736338:c.instructions+=6;goto B736338;
case 0x73633d:c.instructions+=5;goto B73633d;
case 0x736341:c.instructions+=4;goto B736341;
case 0x736345:c.instructions+=3;goto B736345;
case 0x73634a:c.instructions+=2;goto B73634a;
case 0x73634e:c.instructions+=1;goto B73634e;
case 0x736350:goto L736350;
case 0x736351:c.instructions+=5;goto B736351;
case 0x736355:c.instructions+=4;goto B736355;
case 0x736356:c.instructions+=3;goto B736356;
case 0x736358:c.instructions+=2;goto B736358;
case 0x73635a:c.instructions+=1;goto B73635a;
case 0x736360:goto L736360;
case 0x736367:c.instructions+=2;goto B736367;
case 0x736369:c.instructions+=1;goto B736369;
case 0x73636b:goto L73636b;
case 0x73636e:c.instructions+=2;goto B73636e;
case 0x736371:c.instructions+=1;goto B736371;
case 0x736373:goto L736373;
case 0x736376:c.instructions+=2;goto B736376;
case 0x736379:c.instructions+=1;goto B736379;
case 0x73637b:goto L73637b;
case 0x73637c:c.instructions+=2;goto B73637c;
case 0x73637f:c.instructions+=1;goto B73637f;
case 0x736381:goto L736381;
case 0x736383:c.instructions+=3;goto B736383;
case 0x736384:c.instructions+=2;goto B736384;
case 0x736385:c.instructions+=1;goto B736385;
case 0x736386:goto L736386;
case 0x73638a:c.instructions+=6;goto B73638a;
case 0x73638b:c.instructions+=5;goto B73638b;
case 0x736392:c.instructions+=4;goto B736392;
case 0x736393:c.instructions+=3;goto B736393;
case 0x736395:c.instructions+=2;goto B736395;
case 0x73639a:c.instructions+=1;goto B73639a;
case 0x7363a0:goto L7363a0;
case 0x7363a1:c.instructions+=8;goto B7363a1;
case 0x7363a2:c.instructions+=7;goto B7363a2;
case 0x7363a6:c.instructions+=6;goto B7363a6;
case 0x7363a7:c.instructions+=5;goto B7363a7;
case 0x7363ab:c.instructions+=4;goto B7363ab;
case 0x7363ac:c.instructions+=3;goto B7363ac;
case 0x7363ad:c.instructions+=2;goto B7363ad;
case 0x7363af:c.instructions+=1;goto B7363af;
case 0x7363b4:goto L7363b4;
case 0x7363b7:c.instructions+=2;goto B7363b7;
case 0x7363b9:c.instructions+=1;goto B7363b9;
case 0x7363bb:goto L7363bb;
case 0x7363bf:c.instructions+=5;goto B7363bf;
case 0x7363c1:c.instructions+=4;goto B7363c1;
case 0x7363c2:c.instructions+=3;goto B7363c2;
case 0x7363c6:c.instructions+=2;goto B7363c6;
case 0x7363c8:c.instructions+=1;goto B7363c8;
case 0x7363ca:goto L7363ca;
case 0x7363cd:c.instructions+=1;goto B7363cd;
case 0x7363d0:goto L7363d0;
case 0x7363d3:c.instructions+=3;goto B7363d3;
case 0x7363d7:c.instructions+=2;goto B7363d7;
case 0x7363da:c.instructions+=1;goto B7363da;
case 0x7363dc:goto L7363dc;
case 0x7363dd:c.instructions+=3;goto B7363dd;
case 0x7363e0:c.instructions+=2;goto B7363e0;
case 0x7363e2:c.instructions+=1;goto B7363e2;
case 0x7363e4:goto L7363e4;
case 0x7363e6:goto L7363e6;
case 0x7363e7:c.instructions+=4;goto B7363e7;
case 0x7363e8:c.instructions+=3;goto B7363e8;
case 0x7363e9:c.instructions+=2;goto B7363e9;
case 0x7363ea:c.instructions+=1;goto B7363ea;
case 0x7363eb:goto L7363eb;
case 0x7363ed:c.instructions+=4;goto B7363ed;
case 0x7363ee:c.instructions+=3;goto B7363ee;
case 0x7363ef:c.instructions+=2;goto B7363ef;
case 0x7363f0:c.instructions+=1;goto B7363f0;
case 0x736400:goto L736400;
case 0x736401:c.instructions+=7;goto B736401;
case 0x736405:c.instructions+=6;goto B736405;
case 0x736406:c.instructions+=5;goto B736406;
case 0x73640a:c.instructions+=4;goto B73640a;
case 0x73640b:c.instructions+=3;goto B73640b;
case 0x73640c:c.instructions+=2;goto B73640c;
case 0x73640e:c.instructions+=1;goto B73640e;
case 0x736413:goto L736413;
case 0x736416:c.instructions+=2;goto B736416;
case 0x736418:c.instructions+=1;goto B736418;
case 0x73641a:goto L73641a;
case 0x73641e:c.instructions+=7;goto B73641e;
case 0x736421:c.instructions+=6;goto B736421;
case 0x736425:c.instructions+=5;goto B736425;
case 0x736427:c.instructions+=4;goto B736427;
case 0x73642c:c.instructions+=3;goto B73642c;
case 0x73642d:c.instructions+=2;goto B73642d;
case 0x73642e:c.instructions+=1;goto B73642e;
case 0x73642f:goto L73642f;
case 0x736431:c.instructions+=3;goto B736431;
case 0x736432:c.instructions+=2;goto B736432;
case 0x736433:c.instructions+=1;goto B736433;
case 0x736440:goto L736440;
case 0x736441:c.instructions+=7;goto B736441;
case 0x736445:c.instructions+=6;goto B736445;
case 0x736446:c.instructions+=5;goto B736446;
case 0x73644a:c.instructions+=4;goto B73644a;
case 0x73644b:c.instructions+=3;goto B73644b;
case 0x73644c:c.instructions+=2;goto B73644c;
case 0x73644e:c.instructions+=1;goto B73644e;
case 0x736453:goto L736453;
case 0x736456:c.instructions+=2;goto B736456;
case 0x736458:c.instructions+=1;goto B736458;
case 0x73645a:goto L73645a;
case 0x73645e:c.instructions+=8;goto B73645e;
case 0x736460:c.instructions+=7;goto B736460;
case 0x736464:c.instructions+=6;goto B736464;
case 0x736468:c.instructions+=5;goto B736468;
case 0x73646a:c.instructions+=4;goto B73646a;
case 0x73646f:c.instructions+=3;goto B73646f;
case 0x736470:c.instructions+=2;goto B736470;
case 0x736471:c.instructions+=1;goto B736471;
case 0x736472:goto L736472;
case 0x736474:c.instructions+=3;goto B736474;
case 0x736475:c.instructions+=2;goto B736475;
case 0x736476:c.instructions+=1;goto B736476;
case 0x736480:goto L736480;
case 0x736481:c.instructions+=7;goto B736481;
case 0x736485:c.instructions+=6;goto B736485;
case 0x736486:c.instructions+=5;goto B736486;
case 0x73648a:c.instructions+=4;goto B73648a;
case 0x73648b:c.instructions+=3;goto B73648b;
case 0x73648c:c.instructions+=2;goto B73648c;
case 0x73648e:c.instructions+=1;goto B73648e;
case 0x736493:goto L736493;
case 0x736496:c.instructions+=2;goto B736496;
case 0x736498:c.instructions+=1;goto B736498;
case 0x73649a:goto L73649a;
case 0x73649e:c.instructions+=11;goto B73649e;
case 0x7364a0:c.instructions+=10;goto B7364a0;
case 0x7364a4:c.instructions+=9;goto B7364a4;
case 0x7364a8:c.instructions+=8;goto B7364a8;
case 0x7364ac:c.instructions+=7;goto B7364ac;
case 0x7364af:c.instructions+=6;goto B7364af;
case 0x7364b3:c.instructions+=5;goto B7364b3;
case 0x7364b5:c.instructions+=4;goto B7364b5;
case 0x7364ba:c.instructions+=3;goto B7364ba;
case 0x7364bb:c.instructions+=2;goto B7364bb;
case 0x7364bc:c.instructions+=1;goto B7364bc;
case 0x7364bd:goto L7364bd;
case 0x7364bf:c.instructions+=3;goto B7364bf;
case 0x7364c0:c.instructions+=2;goto B7364c0;
case 0x7364c1:c.instructions+=1;goto B7364c1;
case 0x7364d0:goto L7364d0;
case 0x7364d2:c.instructions+=17;goto B7364d2;
case 0x7364d7:c.instructions+=16;goto B7364d7;
case 0x7364dc:c.instructions+=15;goto B7364dc;
case 0x7364e1:c.instructions+=14;goto B7364e1;
case 0x7364e6:c.instructions+=13;goto B7364e6;
case 0x7364eb:c.instructions+=12;goto B7364eb;
case 0x7364f0:c.instructions+=11;goto B7364f0;
case 0x7364f5:c.instructions+=10;goto B7364f5;
case 0x7364fa:c.instructions+=9;goto B7364fa;
case 0x7364ff:c.instructions+=8;goto B7364ff;
case 0x736504:c.instructions+=7;goto B736504;
case 0x736509:c.instructions+=6;goto B736509;
case 0x73650e:c.instructions+=5;goto B73650e;
case 0x736513:c.instructions+=4;goto B736513;
case 0x736518:c.instructions+=3;goto B736518;
case 0x73651d:c.instructions+=2;goto B73651d;
case 0x736522:c.instructions+=1;goto B736522;
case 0x736530:goto L736530;
case 0x736531:c.instructions+=7;goto B736531;
case 0x736535:c.instructions+=6;goto B736535;
case 0x736536:c.instructions+=5;goto B736536;
case 0x73653a:c.instructions+=4;goto B73653a;
case 0x73653b:c.instructions+=3;goto B73653b;
case 0x73653c:c.instructions+=2;goto B73653c;
case 0x73653e:c.instructions+=1;goto B73653e;
case 0x736543:goto L736543;
case 0x736546:c.instructions+=2;goto B736546;
case 0x736548:c.instructions+=1;goto B736548;
case 0x73654a:goto L73654a;
case 0x73654e:c.instructions+=5;goto B73654e;
case 0x736550:c.instructions+=4;goto B736550;
case 0x736554:c.instructions+=3;goto B736554;
case 0x736555:c.instructions+=2;goto B736555;
case 0x736556:c.instructions+=1;goto B736556;
case 0x736557:goto L736557;
case 0x736559:c.instructions+=3;goto B736559;
case 0x73655a:c.instructions+=2;goto B73655a;
case 0x73655b:c.instructions+=1;goto B73655b;
case 0x736560:goto L736560;
case 0x736561:c.instructions+=20;goto B736561;
case 0x736563:c.instructions+=19;goto B736563;
case 0x736566:c.instructions+=18;goto B736566;
case 0x736567:c.instructions+=17;goto B736567;
case 0x73656d:c.instructions+=16;goto B73656d;
case 0x736572:c.instructions+=15;goto B736572;
case 0x736578:c.instructions+=14;goto B736578;
case 0x73657d:c.instructions+=13;goto B73657d;
case 0x736583:c.instructions+=12;goto B736583;
case 0x736588:c.instructions+=11;goto B736588;
case 0x73658e:c.instructions+=10;goto B73658e;
case 0x736593:c.instructions+=9;goto B736593;
case 0x736599:c.instructions+=8;goto B736599;
case 0x73659e:c.instructions+=7;goto B73659e;
case 0x7365a4:c.instructions+=6;goto B7365a4;
case 0x7365a9:c.instructions+=5;goto B7365a9;
case 0x7365af:c.instructions+=4;goto B7365af;
case 0x7365b4:c.instructions+=3;goto B7365b4;
case 0x7365ba:c.instructions+=2;goto B7365ba;
case 0x7365bf:c.instructions+=1;goto B7365bf;
case 0x7365c4:goto L7365c4;
case 0x7365c7:c.instructions+=7;goto B7365c7;
case 0x7365c9:c.instructions+=6;goto B7365c9;
case 0x7365cc:c.instructions+=5;goto B7365cc;
case 0x7365cf:c.instructions+=4;goto B7365cf;
case 0x7365d2:c.instructions+=3;goto B7365d2;
case 0x7365d5:c.instructions+=2;goto B7365d5;
case 0x7365d9:c.instructions+=1;goto B7365d9;
case 0x7365db:goto L7365db;
case 0x7365dc:c.instructions+=1;goto B7365dc;
case 0x7365e1:goto L7365e1;
case 0x7365e4:goto L7365e4;
case 0x7365e7:c.instructions+=3;goto B7365e7;
case 0x7365ea:c.instructions+=2;goto B7365ea;
case 0x7365f0:c.instructions+=1;goto B7365f0;
case 0x7365f2:goto L7365f2;
case 0x7365f3:c.instructions+=4;goto B7365f3;
case 0x7365f9:c.instructions+=3;goto B7365f9;
case 0x736600:c.instructions+=2;goto B736600;
case 0x736601:c.instructions+=1;goto B736601;
case 0x736610:goto L736610;
case 0x736611:c.instructions+=4;goto B736611;
case 0x736612:c.instructions+=3;goto B736612;
case 0x736617:c.instructions+=2;goto B736617;
case 0x736619:c.instructions+=1;goto B736619;
case 0x736620:goto L736620;
case 0x736623:c.instructions+=1;goto B736623;
case 0x736625:goto L736625;
case 0x736627:c.instructions+=3;goto B736627;
case 0x736629:c.instructions+=2;goto B736629;
case 0x73662c:c.instructions+=1;goto B73662c;
case 0x73662e:goto L73662e;
case 0x73662f:c.instructions+=1;goto B73662f;
case 0x736634:goto L736634;
case 0x736637:c.instructions+=1;goto B736637;
case 0x736639:goto L736639;
case 0x73663d:c.instructions+=1;goto B73663d;
case 0x736644:goto L736644;
case 0x736647:c.instructions+=2;goto B736647;
case 0x73664d:c.instructions+=1;goto B73664d;
case 0x73664f:goto L73664f;
case 0x736655:c.instructions+=4;goto B736655;
case 0x736658:c.instructions+=3;goto B736658;
case 0x73665a:c.instructions+=2;goto B73665a;
case 0x73665f:c.instructions+=1;goto B73665f;
case 0x736661:goto L736661;
case 0x736667:goto L736667;
case 0x73666d:c.instructions+=2;goto B73666d;
case 0x736672:c.instructions+=1;goto B736672;
case 0x736674:goto L736674;
case 0x73667a:goto L73667a;
case 0x736680:c.instructions+=2;goto B736680;
case 0x736685:c.instructions+=1;goto B736685;
case 0x736687:goto L736687;
case 0x73668d:goto L73668d;
case 0x736693:c.instructions+=2;goto B736693;
case 0x736698:c.instructions+=1;goto B736698;
case 0x73669a:goto L73669a;
case 0x7366a0:goto L7366a0;
case 0x7366a6:c.instructions+=2;goto B7366a6;
case 0x7366ab:c.instructions+=1;goto B7366ab;
case 0x7366ad:goto L7366ad;
case 0x7366b3:goto L7366b3;
case 0x7366b9:c.instructions+=2;goto B7366b9;
case 0x7366be:c.instructions+=1;goto B7366be;
case 0x7366c0:goto L7366c0;
case 0x7366c6:goto L7366c6;
case 0x7366cc:c.instructions+=2;goto B7366cc;
case 0x7366d1:c.instructions+=1;goto B7366d1;
case 0x7366d3:goto L7366d3;
case 0x7366d9:goto L7366d9;
case 0x7366de:c.instructions+=2;goto B7366de;
case 0x7366e4:c.instructions+=1;goto B7366e4;
case 0x7366e6:goto L7366e6;
case 0x7366ec:goto L7366ec;
case 0x7366ed:c.instructions+=2;goto B7366ed;
case 0x7366ee:c.instructions+=1;goto B7366ee;
case 0x736700:goto L736700;
case 0x736701:c.instructions+=3;goto B736701;
case 0x736705:c.instructions+=2;goto B736705;
case 0x736707:c.instructions+=1;goto B736707;
case 0x736709:goto L736709;
case 0x73670c:c.instructions+=1;goto B73670c;
case 0x73670e:goto L73670e;
case 0x73670f:c.instructions+=5;goto B73670f;
case 0x736711:c.instructions+=4;goto B736711;
case 0x736714:c.instructions+=3;goto B736714;
case 0x73671a:c.instructions+=2;goto B73671a;
case 0x73671c:c.instructions+=1;goto B73671c;
case 0x73671e:goto L73671e;
case 0x73671f:c.instructions+=1;goto B73671f;
case 0x736724:goto L736724;
case 0x736727:c.instructions+=1;goto B736727;
case 0x736731:goto L736731;
case 0x736738:c.instructions+=4;goto B736738;
case 0x73673f:c.instructions+=3;goto B73673f;
case 0x736746:c.instructions+=2;goto B736746;
case 0x736747:c.instructions+=1;goto B736747;
case 0x736749:goto L736749;
case 0x736754:goto L736754;
case 0x73675b:c.instructions+=4;goto B73675b;
case 0x736762:c.instructions+=3;goto B736762;
case 0x736763:c.instructions+=2;goto B736763;
case 0x736765:c.instructions+=1;goto B736765;
case 0x736767:goto L736767;
case 0x73676d:goto L73676d;
case 0x73676e:c.instructions+=1;goto B73676e;
case 0x736770:goto L736770;
case 0x736773:c.instructions+=13;goto B736773;
case 0x736775:c.instructions+=12;goto B736775;
case 0x736778:c.instructions+=11;goto B736778;
case 0x73677f:c.instructions+=10;goto B73677f;
case 0x736786:c.instructions+=9;goto B736786;
case 0x736787:c.instructions+=8;goto B736787;
case 0x73678d:c.instructions+=7;goto B73678d;
case 0x73678e:c.instructions+=6;goto B73678e;
case 0x73678f:c.instructions+=5;goto B73678f;
case 0x736793:c.instructions+=4;goto B736793;
case 0x736797:c.instructions+=3;goto B736797;
case 0x736799:c.instructions+=2;goto B736799;
case 0x73679e:c.instructions+=1;goto B73679e;
case 0x7367a0:goto L7367a0;
case 0x7367a2:c.instructions+=1;goto B7367a2;
case 0x7367a4:goto L7367a4;
case 0x7367a7:c.instructions+=2;goto B7367a7;
case 0x7367a9:c.instructions+=1;goto B7367a9;
case 0x7367ab:goto L7367ab;
case 0x7367ae:c.instructions+=2;goto B7367ae;
case 0x7367b2:c.instructions+=1;goto B7367b2;
case 0x7367b4:goto L7367b4;
case 0x7367b7:c.instructions+=2;goto B7367b7;
case 0x7367b9:c.instructions+=1;goto B7367b9;
case 0x7367bb:goto L7367bb;
case 0x7367bd:goto L7367bd;
case 0x7367c1:c.instructions+=2;goto B7367c1;
case 0x7367c5:c.instructions+=1;goto B7367c5;
case 0x7367c7:goto L7367c7;
case 0x7367ca:c.instructions+=2;goto B7367ca;
case 0x7367ce:c.instructions+=1;goto B7367ce;
case 0x7367d0:goto L7367d0;
case 0x7367d1:c.instructions+=1;goto B7367d1;
case 0x7367d6:goto L7367d6;
case 0x7367d9:goto L7367d9;
case 0x7367dc:c.instructions+=3;goto B7367dc;
case 0x7367dd:c.instructions+=2;goto B7367dd;
case 0x7367e3:c.instructions+=1;goto B7367e3;
case 0x7367e5:goto L7367e5;
case 0x7367e6:c.instructions+=4;goto B7367e6;
case 0x7367e7:c.instructions+=3;goto B7367e7;
case 0x7367e8:c.instructions+=2;goto B7367e8;
case 0x7367eb:c.instructions+=1;goto B7367eb;
case 0x7367f0:goto L7367f0;
case 0x7367f5:c.instructions+=4;goto B7367f5;
case 0x7367f6:c.instructions+=3;goto B7367f6;
case 0x7367f8:c.instructions+=2;goto B7367f8;
case 0x7367fa:c.instructions+=1;goto B7367fa;
case 0x7367fc:goto L7367fc;
case 0x7367fd:c.instructions+=4;goto B7367fd;
case 0x736801:c.instructions+=3;goto B736801;
case 0x736804:c.instructions+=2;goto B736804;
case 0x73680e:c.instructions+=1;goto B73680e;
case 0x736810:goto L736810;
case 0x736811:c.instructions+=3;goto B736811;
case 0x736818:c.instructions+=2;goto B736818;
case 0x73681a:c.instructions+=1;goto B73681a;
case 0x73681c:goto L73681c;
case 0x73681f:c.instructions+=1;goto B73681f;
case 0x736821:goto L736821;
case 0x736822:c.instructions+=2;goto B736822;
case 0x736823:c.instructions+=1;goto B736823;
case 0x736828:goto L736828;
case 0x736829:c.instructions+=1;goto B736829;
case 0x73682e:goto L73682e;
case 0x73682f:c.instructions+=2;goto B73682f;
case 0x736831:c.instructions+=1;goto B736831;
case 0x736836:goto L736836;
case 0x736839:c.instructions+=3;goto B736839;
case 0x73683b:c.instructions+=2;goto B73683b;
case 0x73683c:c.instructions+=1;goto B73683c;
case 0x73683e:goto L73683e;
case 0x73683f:c.instructions+=1;goto B73683f;
case 0x736844:goto L736844;
case 0x736847:goto L736847;
case 0x736848:goto L736848;
case 0x736849:goto L736849;
case 0x73684f:c.instructions+=2;goto B73684f;
case 0x736850:c.instructions+=1;goto B736850;
case 0x736860:goto L736860;
case 0x736861:c.instructions+=4;goto B736861;
case 0x736864:c.instructions+=3;goto B736864;
case 0x736866:c.instructions+=2;goto B736866;
case 0x73686b:c.instructions+=1;goto B73686b;
case 0x736870:goto L736870;
case 0x736873:c.instructions+=1;goto B736873;
case 0x736879:goto L736879;
case 0x73687c:c.instructions+=3;goto B73687c;
case 0x73687d:c.instructions+=2;goto B73687d;
case 0x736883:c.instructions+=1;goto B736883;
case 0x736885:goto L736885;
case 0x736886:c.instructions+=1;goto B736886;
case 0x73688b:goto L73688b;
case 0x73688d:c.instructions+=2;goto B73688d;
case 0x736892:c.instructions+=1;goto B736892;
case 0x736893:goto L736893;
case 0x736896:c.instructions+=3;goto B736896;
case 0x73689a:c.instructions+=2;goto B73689a;
case 0x73689c:c.instructions+=1;goto B73689c;
case 0x73689e:goto L73689e;
case 0x7368a0:c.instructions+=3;goto B7368a0;
case 0x7368a2:c.instructions+=2;goto B7368a2;
case 0x7368a4:c.instructions+=1;goto B7368a4;
case 0x7368a6:goto L7368a6;
case 0x7368ac:c.instructions+=1;goto B7368ac;
case 0x7368ae:goto L7368ae;
case 0x7368b1:c.instructions+=3;goto B7368b1;
case 0x7368b2:c.instructions+=2;goto B7368b2;
case 0x7368b8:c.instructions+=1;goto B7368b8;
case 0x7368ba:goto L7368ba;
case 0x7368bc:c.instructions+=1;goto B7368bc;
case 0x7368c1:goto L7368c1;
case 0x7368c3:c.instructions+=4;goto B7368c3;
case 0x7368c7:c.instructions+=3;goto B7368c7;
case 0x7368c9:c.instructions+=2;goto B7368c9;
case 0x7368cd:c.instructions+=1;goto B7368cd;
case 0x7368cf:goto L7368cf;
case 0x7368d3:c.instructions+=1;goto B7368d3;
case 0x7368d5:goto L7368d5;
case 0x7368d8:c.instructions+=3;goto B7368d8;
case 0x7368d9:c.instructions+=2;goto B7368d9;
case 0x7368df:c.instructions+=1;goto B7368df;
case 0x7368e1:goto L7368e1;
case 0x7368e2:c.instructions+=4;goto B7368e2;
case 0x7368e3:c.instructions+=3;goto B7368e3;
case 0x7368e5:c.instructions+=2;goto B7368e5;
case 0x7368e6:c.instructions+=1;goto B7368e6;
case 0x7368e7:goto L7368e7;
case 0x7368e8:c.instructions+=1;goto B7368e8;
case 0x7368ed:goto L7368ed;
case 0x7368f0:c.instructions+=5;goto B7368f0;
case 0x7368f1:c.instructions+=4;goto B7368f1;
case 0x7368f3:c.instructions+=3;goto B7368f3;
case 0x7368f4:c.instructions+=2;goto B7368f4;
case 0x7368f5:c.instructions+=1;goto B7368f5;
case 0x7368f6:goto L7368f6;
case 0x7368f8:c.instructions+=7;goto B7368f8;
case 0x7368fb:c.instructions+=6;goto B7368fb;
case 0x736902:c.instructions+=5;goto B736902;
case 0x736909:c.instructions+=4;goto B736909;
case 0x73690a:c.instructions+=3;goto B73690a;
case 0x73690b:c.instructions+=2;goto B73690b;
case 0x736912:c.instructions+=1;goto B736912;
case 0x736913:goto L736913;
case 0x736914:c.instructions+=1;goto B736914;
case 0x736920:goto L736920;
case 0x736925:c.instructions+=5;goto B736925;
case 0x736928:c.instructions+=4;goto B736928;
case 0x736929:c.instructions+=3;goto B736929;
case 0x73692b:c.instructions+=2;goto B73692b;
case 0x73692d:c.instructions+=1;goto B73692d;
case 0x736933:goto L736933;
case 0x736937:c.instructions+=3;goto B736937;
case 0x736939:c.instructions+=2;goto B736939;
case 0x736943:c.instructions+=1;goto B736943;
case 0x736949:goto L736949;
case 0x73694b:c.instructions+=5;goto B73694b;
case 0x73694f:c.instructions+=4;goto B73694f;
case 0x736950:c.instructions+=3;goto B736950;
case 0x736951:c.instructions+=2;goto B736951;
case 0x736955:c.instructions+=1;goto B736955;
case 0x73695a:goto L73695a;
case 0x73695c:c.instructions+=3;goto B73695c;
case 0x73695f:c.instructions+=2;goto B73695f;
case 0x736961:c.instructions+=1;goto B736961;
case 0x736967:goto L736967;
case 0x73696b:c.instructions+=4;goto B73696b;
case 0x73696c:c.instructions+=3;goto B73696c;
case 0x736970:c.instructions+=2;goto B736970;
case 0x736971:c.instructions+=1;goto B736971;
case 0x736976:goto L736976;
case 0x736979:c.instructions+=2;goto B736979;
case 0x73697b:c.instructions+=1;goto B73697b;
case 0x736981:goto L736981;
case 0x736982:c.instructions+=4;goto B736982;
case 0x736986:c.instructions+=3;goto B736986;
case 0x736988:c.instructions+=2;goto B736988;
case 0x73698a:c.instructions+=1;goto B73698a;
case 0x73698f:goto L73698f;
case 0x736992:c.instructions+=3;goto B736992;
case 0x736995:c.instructions+=2;goto B736995;
case 0x736997:c.instructions+=1;goto B736997;
case 0x73699d:goto L73699d;
case 0x7369a1:c.instructions+=4;goto B7369a1;
case 0x7369a2:c.instructions+=3;goto B7369a2;
case 0x7369a6:c.instructions+=2;goto B7369a6;
case 0x7369a7:c.instructions+=1;goto B7369a7;
case 0x7369ac:goto L7369ac;
case 0x7369ae:c.instructions+=3;goto B7369ae;
case 0x7369b1:c.instructions+=2;goto B7369b1;
case 0x7369b3:c.instructions+=1;goto B7369b3;
case 0x7369b9:goto L7369b9;
case 0x7369be:goto L7369be;
case 0x7369c4:c.instructions+=1;goto B7369c4;
case 0x7369c6:goto L7369c6;
case 0x7369cd:c.instructions+=1;goto B7369cd;
case 0x7369cf:goto L7369cf;
case 0x7369d8:goto L7369d8;
case 0x7369df:c.instructions+=10;goto B7369df;
case 0x7369e1:c.instructions+=9;goto B7369e1;
case 0x7369e4:c.instructions+=8;goto B7369e4;
case 0x7369e9:c.instructions+=7;goto B7369e9;
case 0x7369ef:c.instructions+=6;goto B7369ef;
case 0x7369f5:c.instructions+=5;goto B7369f5;
case 0x7369f7:c.instructions+=4;goto B7369f7;
case 0x7369fd:c.instructions+=3;goto B7369fd;
case 0x736a03:c.instructions+=2;goto B736a03;
case 0x736a0a:c.instructions+=1;goto B736a0a;
case 0x736a0c:goto L736a0c;
case 0x736a0d:c.instructions+=1;goto B736a0d;
case 0x736a12:goto L736a12;
case 0x736a15:goto L736a15;
case 0x736a19:c.instructions+=6;goto B736a19;
case 0x736a1f:c.instructions+=5;goto B736a1f;
case 0x736a26:c.instructions+=4;goto B736a26;
case 0x736a2d:c.instructions+=3;goto B736a2d;
case 0x736a34:c.instructions+=2;goto B736a34;
case 0x736a38:c.instructions+=1;goto B736a38;
case 0x736a3a:goto L736a3a;
case 0x736a3b:c.instructions+=1;goto B736a3b;
case 0x736a40:goto L736a40;
case 0x736a43:goto L736a43;
case 0x736a48:goto L736a48;
case 0x736a49:goto L736a49;
case 0x736a4a:goto L736a4a;
case 0x736a4b:goto L736a4b;
case 0x736a4d:c.instructions+=4;goto B736a4d;
case 0x736a57:c.instructions+=3;goto B736a57;
case 0x736a58:c.instructions+=2;goto B736a58;
case 0x736a5b:c.instructions+=1;goto B736a5b;
case 0x736a60:goto L736a60;
case 0x736a61:c.instructions+=7;goto B736a61;
case 0x736a62:c.instructions+=6;goto B736a62;
case 0x736a63:c.instructions+=5;goto B736a63;
case 0x736a67:c.instructions+=4;goto B736a67;
case 0x736a6e:c.instructions+=3;goto B736a6e;
case 0x736a6f:c.instructions+=2;goto B736a6f;
case 0x736a71:c.instructions+=1;goto B736a71;
case 0x736a76:goto L736a76;
case 0x736a78:c.instructions+=3;goto B736a78;
case 0x736a7b:c.instructions+=2;goto B736a7b;
case 0x736a7d:c.instructions+=1;goto B736a7d;
case 0x736a7f:goto L736a7f;
case 0x736a83:c.instructions+=4;goto B736a83;
case 0x736a88:c.instructions+=3;goto B736a88;
case 0x736a8a:c.instructions+=2;goto B736a8a;
case 0x736a8c:c.instructions+=1;goto B736a8c;
case 0x736a8e:goto L736a8e;
case 0x736a92:goto L736a92;
case 0x736a95:c.instructions+=5;goto B736a95;
case 0x736a98:c.instructions+=4;goto B736a98;
case 0x736a9b:c.instructions+=3;goto B736a9b;
case 0x736a9c:c.instructions+=2;goto B736a9c;
case 0x736a9e:c.instructions+=1;goto B736a9e;
case 0x736aa0:goto L736aa0;
case 0x736aa1:c.instructions+=1;goto B736aa1;
case 0x736aa6:goto L736aa6;
case 0x736aa8:c.instructions+=3;goto B736aa8;
case 0x736aab:c.instructions+=2;goto B736aab;
case 0x736aad:c.instructions+=1;goto B736aad;
case 0x736aaf:goto L736aaf;
case 0x736ab0:c.instructions+=1;goto B736ab0;
case 0x736ab5:goto L736ab5;
case 0x736ab8:goto L736ab8;
case 0x736aba:c.instructions+=4;goto B736aba;
case 0x736abb:c.instructions+=3;goto B736abb;
case 0x736abc:c.instructions+=2;goto B736abc;
case 0x736abd:c.instructions+=1;goto B736abd;
case 0x736abe:goto L736abe;
case 0x736abf:c.instructions+=4;goto B736abf;
case 0x736ac0:c.instructions+=3;goto B736ac0;
case 0x736ac2:c.instructions+=2;goto B736ac2;
case 0x736ac3:c.instructions+=1;goto B736ac3;
case 0x736ad0:goto L736ad0;
case 0x736ad3:c.instructions+=5;goto B736ad3;
case 0x736ad4:c.instructions+=4;goto B736ad4;
case 0x736ad5:c.instructions+=3;goto B736ad5;
case 0x736ad6:c.instructions+=2;goto B736ad6;
case 0x736ad7:c.instructions+=1;goto B736ad7;
case 0x736adc:goto L736adc;
case 0x736ae2:c.instructions+=10;goto B736ae2;
case 0x736ae6:c.instructions+=9;goto B736ae6;
case 0x736ae8:c.instructions+=8;goto B736ae8;
case 0x736aeb:c.instructions+=7;goto B736aeb;
case 0x736aef:c.instructions+=6;goto B736aef;
case 0x736af3:c.instructions+=5;goto B736af3;
case 0x736af7:c.instructions+=4;goto B736af7;
case 0x736afb:c.instructions+=3;goto B736afb;
case 0x736aff:c.instructions+=2;goto B736aff;
case 0x736b04:c.instructions+=1;goto B736b04;
case 0x736b06:goto L736b06;
case 0x736b08:c.instructions+=1;goto B736b08;
case 0x736b10:goto L736b10;
case 0x736b13:c.instructions+=2;goto B736b13;
case 0x736b15:c.instructions+=1;goto B736b15;
case 0x736b1b:goto L736b1b;
case 0x736b1e:c.instructions+=2;goto B736b1e;
case 0x736b22:c.instructions+=1;goto B736b22;
case 0x736b28:goto L736b28;
case 0x736b2c:c.instructions+=6;goto B736b2c;
case 0x736b2e:c.instructions+=5;goto B736b2e;
case 0x736b31:c.instructions+=4;goto B736b31;
case 0x736b35:c.instructions+=3;goto B736b35;
case 0x736b39:c.instructions+=2;goto B736b39;
case 0x736b41:c.instructions+=1;goto B736b41;
case 0x736b43:goto L736b43;
case 0x736b45:c.instructions+=3;goto B736b45;
case 0x736b47:c.instructions+=2;goto B736b47;
case 0x736b49:c.instructions+=1;goto B736b49;
case 0x736b4b:goto L736b4b;
case 0x736b4e:c.instructions+=1;goto B736b4e;
case 0x736b51:goto L736b51;
case 0x736b54:c.instructions+=1;goto B736b54;
case 0x736b56:goto L736b56;
case 0x736b57:c.instructions+=3;goto B736b57;
case 0x736b5a:c.instructions+=2;goto B736b5a;
case 0x736b5c:c.instructions+=1;goto B736b5c;
case 0x736b5e:goto L736b5e;
case 0x736b60:goto L736b60;
case 0x736b65:goto L736b65;
case 0x736b69:goto L736b69;
case 0x736b6d:c.instructions+=5;goto B736b6d;
case 0x736b70:c.instructions+=4;goto B736b70;
case 0x736b74:c.instructions+=3;goto B736b74;
case 0x736b76:c.instructions+=2;goto B736b76;
case 0x736b79:c.instructions+=1;goto B736b79;
case 0x736b7b:goto L736b7b;
case 0x736b7e:c.instructions+=2;goto B736b7e;
case 0x736b80:c.instructions+=1;goto B736b80;
case 0x736b82:goto L736b82;
case 0x736b8a:goto L736b8a;
case 0x736b8e:c.instructions+=2;goto B736b8e;
case 0x736b96:c.instructions+=1;goto B736b96;
case 0x736b98:goto L736b98;
case 0x736b9c:c.instructions+=1;goto B736b9c;
case 0x736b9e:goto L736b9e;
case 0x736ba1:c.instructions+=8;goto B736ba1;
case 0x736ba3:c.instructions+=7;goto B736ba3;
case 0x736ba7:c.instructions+=6;goto B736ba7;
case 0x736ba8:c.instructions+=5;goto B736ba8;
case 0x736bac:c.instructions+=4;goto B736bac;
case 0x736bad:c.instructions+=3;goto B736bad;
case 0x736bb1:c.instructions+=2;goto B736bb1;
case 0x736bb3:c.instructions+=1;goto B736bb3;
case 0x736bb8:goto L736bb8;
case 0x736bbb:c.instructions+=2;goto B736bbb;
case 0x736bbd:c.instructions+=1;goto B736bbd;
case 0x736bbf:goto L736bbf;
case 0x736bc3:c.instructions+=4;goto B736bc3;
case 0x736bc5:c.instructions+=3;goto B736bc5;
case 0x736bc9:c.instructions+=2;goto B736bc9;
case 0x736bcd:c.instructions+=1;goto B736bcd;
case 0x736bcf:goto L736bcf;
case 0x736bd4:c.instructions+=1;goto B736bd4;
case 0x736bd6:goto L736bd6;
case 0x736bda:goto L736bda;
case 0x736bde:c.instructions+=2;goto B736bde;
case 0x736be0:c.instructions+=1;goto B736be0;
case 0x736be2:goto L736be2;
case 0x736be6:c.instructions+=2;goto B736be6;
case 0x736be7:c.instructions+=1;goto B736be7;
case 0x736bec:goto L736bec;
case 0x736bef:c.instructions+=1;goto B736bef;
case 0x736bf1:goto L736bf1;
case 0x736bf5:c.instructions+=2;goto B736bf5;
case 0x736bf7:c.instructions+=1;goto B736bf7;
case 0x736bf9:goto L736bf9;
case 0x736bfb:c.instructions+=1;goto B736bfb;
case 0x736bfd:goto L736bfd;
case 0x736c01:c.instructions+=3;goto B736c01;
case 0x736c05:c.instructions+=2;goto B736c05;
case 0x736c07:c.instructions+=1;goto B736c07;
case 0x736c09:goto L736c09;
case 0x736c0d:c.instructions+=1;goto B736c0d;
case 0x736c0f:goto L736c0f;
case 0x736c11:goto L736c11;
case 0x736c15:c.instructions+=2;goto B736c15;
case 0x736c17:c.instructions+=1;goto B736c17;
case 0x736c19:goto L736c19;
case 0x736c1b:goto L736c1b;
case 0x736c20:c.instructions+=2;goto B736c20;
case 0x736c24:c.instructions+=1;goto B736c24;
case 0x736c26:goto L736c26;
case 0x736c2a:c.instructions+=4;goto B736c2a;
case 0x736c2e:c.instructions+=3;goto B736c2e;
case 0x736c32:c.instructions+=2;goto B736c32;
case 0x736c36:c.instructions+=1;goto B736c36;
case 0x736c3b:goto L736c3b;
case 0x736c3f:c.instructions+=5;goto B736c3f;
case 0x736c40:c.instructions+=4;goto B736c40;
case 0x736c43:c.instructions+=3;goto B736c43;
case 0x736c49:c.instructions+=2;goto B736c49;
case 0x736c4d:c.instructions+=1;goto B736c4d;
case 0x736c53:goto L736c53;
case 0x736c57:c.instructions+=6;goto B736c57;
case 0x736c58:c.instructions+=5;goto B736c58;
case 0x736c59:c.instructions+=4;goto B736c59;
case 0x736c5a:c.instructions+=3;goto B736c5a;
case 0x736c5b:c.instructions+=2;goto B736c5b;
case 0x736c5e:c.instructions+=1;goto B736c5e;
case 0x736c60:goto L736c60;
case 0x736c63:c.instructions+=5;goto B736c63;
case 0x736c6d:c.instructions+=4;goto B736c6d;
case 0x736c74:c.instructions+=3;goto B736c74;
case 0x736c7b:c.instructions+=2;goto B736c7b;
case 0x736c83:c.instructions+=1;goto B736c83;
case 0x736c85:goto L736c85;
case 0x736c86:c.instructions+=1;goto B736c86;
case 0x736c8b:goto L736c8b;
case 0x736c8e:c.instructions+=2;goto B736c8e;
case 0x736c90:c.instructions+=1;goto B736c90;
case 0x736c92:goto L736c92;
case 0x736c95:c.instructions+=3;goto B736c95;
case 0x736c96:c.instructions+=2;goto B736c96;
case 0x736c97:c.instructions+=1;goto B736c97;
case 0x736c9c:goto L736c9c;
case 0x736c9f:c.instructions+=2;goto B736c9f;
case 0x736ca1:c.instructions+=1;goto B736ca1;
case 0x736ca3:goto L736ca3;
case 0x736ca6:c.instructions+=3;goto B736ca6;
case 0x736ca7:c.instructions+=2;goto B736ca7;
case 0x736ca8:c.instructions+=1;goto B736ca8;
case 0x736cad:goto L736cad;
case 0x736cb0:c.instructions+=2;goto B736cb0;
case 0x736cb2:c.instructions+=1;goto B736cb2;
case 0x736cb4:goto L736cb4;
case 0x736cb5:c.instructions+=2;goto B736cb5;
case 0x736cb7:c.instructions+=1;goto B736cb7;
case 0x736cbc:goto L736cbc;
case 0x736cbf:goto L736cbf;
case 0x736cc2:c.instructions+=1;goto B736cc2;
case 0x736cd0:goto L736cd0;
case 0x736cd1:c.instructions+=5;goto B736cd1;
case 0x736cd5:c.instructions+=4;goto B736cd5;
case 0x736cd6:c.instructions+=3;goto B736cd6;
case 0x736cd8:c.instructions+=2;goto B736cd8;
case 0x736cdb:c.instructions+=1;goto B736cdb;
case 0x736cdd:goto L736cdd;
case 0x736ce4:c.instructions+=2;goto B736ce4;
case 0x736ce6:c.instructions+=1;goto B736ce6;
case 0x736ce8:goto L736ce8;
case 0x736ce9:c.instructions+=1;goto B736ce9;
case 0x736cf0:goto L736cf0;
case 0x736cf5:goto L736cf5;
case 0x736cf7:c.instructions+=2;goto B736cf7;
case 0x736cf9:c.instructions+=1;goto B736cf9;
case 0x736cfb:goto L736cfb;
case 0x736cfe:c.instructions+=6;goto B736cfe;
case 0x736d04:c.instructions+=5;goto B736d04;
case 0x736d09:c.instructions+=4;goto B736d09;
case 0x736d0b:c.instructions+=3;goto B736d0b;
case 0x736d0d:c.instructions+=2;goto B736d0d;
case 0x736d11:c.instructions+=1;goto B736d11;
case 0x736d13:goto L736d13;
case 0x736d17:c.instructions+=2;goto B736d17;
case 0x736d18:c.instructions+=1;goto B736d18;
case 0x736d1a:goto L736d1a;
case 0x736d1d:c.instructions+=2;goto B736d1d;
case 0x736d20:c.instructions+=1;goto B736d20;
case 0x736d22:goto L736d22;
case 0x736d23:c.instructions+=1;goto B736d23;
case 0x736d28:goto L736d28;
case 0x736d29:c.instructions+=1;goto B736d29;
case 0x736d2e:goto L736d2e;
case 0x736d30:c.instructions+=3;goto B736d30;
case 0x736d33:c.instructions+=2;goto B736d33;
case 0x736d35:c.instructions+=1;goto B736d35;
case 0x736d37:goto L736d37;
case 0x736d38:c.instructions+=1;goto B736d38;
case 0x736d3d:goto L736d3d;
case 0x736d40:c.instructions+=1;goto B736d40;
case 0x736d42:goto L736d42;
case 0x736d47:goto L736d47;
case 0x736d48:c.instructions+=1;goto B736d48;
case 0x736d4d:goto L736d4d;
case 0x736d50:goto L736d50;
case 0x736d51:goto L736d51;
case 0x736d53:c.instructions+=3;goto B736d53;
case 0x736d54:c.instructions+=2;goto B736d54;
case 0x736d55:c.instructions+=1;goto B736d55;
case 0x736d60:goto L736d60;
case 0x736d65:c.instructions+=4;goto B736d65;
case 0x736d66:c.instructions+=3;goto B736d66;
case 0x736d68:c.instructions+=2;goto B736d68;
case 0x736d6a:c.instructions+=1;goto B736d6a;
case 0x736d6c:goto L736d6c;
case 0x736d6d:c.instructions+=4;goto B736d6d;
case 0x736d71:c.instructions+=3;goto B736d71;
case 0x736d72:c.instructions+=2;goto B736d72;
case 0x736d7c:c.instructions+=1;goto B736d7c;
case 0x736d81:goto L736d81;
case 0x736d84:c.instructions+=3;goto B736d84;
case 0x736d86:c.instructions+=2;goto B736d86;
case 0x736d87:c.instructions+=1;goto B736d87;
case 0x736d89:goto L736d89;
case 0x736d8e:goto L736d8e;
case 0x736d91:c.instructions+=2;goto B736d91;
case 0x736d93:c.instructions+=1;goto B736d93;
case 0x736d95:goto L736d95;
case 0x736d96:goto L736d96;
case 0x736d9b:goto L736d9b;
case 0x736d9e:c.instructions+=4;goto B736d9e;
case 0x736d9f:c.instructions+=3;goto B736d9f;
case 0x736da5:c.instructions+=2;goto B736da5;
case 0x736da6:c.instructions+=1;goto B736da6;
case 0x736da7:goto L736da7;
case 0x736da9:c.instructions+=3;goto B736da9;
case 0x736daf:c.instructions+=2;goto B736daf;
case 0x736db0:c.instructions+=1;goto B736db0;
case 0x736db1:goto L736db1;
case 0x736db2:c.instructions+=4;goto B736db2;
case 0x736db4:c.instructions+=3;goto B736db4;
case 0x736dba:c.instructions+=2;goto B736dba;
case 0x736dbb:c.instructions+=1;goto B736dbb;
case 0x736dc0:goto L736dc0;
case 0x736dc5:c.instructions+=1;goto B736dc5;
case 0x736dd0:goto L736dd0;
case 0x736dd1:c.instructions+=17;goto B736dd1;
case 0x736dd2:c.instructions+=16;goto B736dd2;
case 0x736dd6:c.instructions+=15;goto B736dd6;
case 0x736dd8:c.instructions+=14;goto B736dd8;
case 0x736ddb:c.instructions+=13;goto B736ddb;
case 0x736ddc:c.instructions+=12;goto B736ddc;
case 0x736de0:c.instructions+=11;goto B736de0;
case 0x736de2:c.instructions+=10;goto B736de2;
case 0x736de4:c.instructions+=9;goto B736de4;
case 0x736de7:c.instructions+=8;goto B736de7;
case 0x736dea:c.instructions+=7;goto B736dea;
case 0x736ded:c.instructions+=6;goto B736ded;
case 0x736df0:c.instructions+=5;goto B736df0;
case 0x736df3:c.instructions+=4;goto B736df3;
case 0x736df5:c.instructions+=3;goto B736df5;
case 0x736df7:c.instructions+=2;goto B736df7;
case 0x736dfa:c.instructions+=1;goto B736dfa;
case 0x736dfc:goto L736dfc;
case 0x736dff:c.instructions+=5;goto B736dff;
case 0x736e00:c.instructions+=4;goto B736e00;
case 0x736e03:c.instructions+=3;goto B736e03;
case 0x736e05:c.instructions+=2;goto B736e05;
case 0x736e08:c.instructions+=1;goto B736e08;
case 0x736e09:goto L736e09;
case 0x736e0b:c.instructions+=6;goto B736e0b;
case 0x736e0e:c.instructions+=5;goto B736e0e;
case 0x736e10:c.instructions+=4;goto B736e10;
case 0x736e11:c.instructions+=3;goto B736e11;
case 0x736e12:c.instructions+=2;goto B736e12;
case 0x736e13:c.instructions+=1;goto B736e13;
case 0x736e15:goto L736e15;
case 0x736e18:c.instructions+=1;goto B736e18;
case 0x736e1c:goto L736e1c;
case 0x736e20:goto L736e20;
case 0x736e24:c.instructions+=10;goto B736e24;
case 0x736e28:c.instructions+=9;goto B736e28;
case 0x736e2c:c.instructions+=8;goto B736e2c;
case 0x736e2f:c.instructions+=7;goto B736e2f;
case 0x736e32:c.instructions+=6;goto B736e32;
case 0x736e35:c.instructions+=5;goto B736e35;
case 0x736e3c:c.instructions+=4;goto B736e3c;
case 0x736e3f:c.instructions+=3;goto B736e3f;
case 0x736e41:c.instructions+=2;goto B736e41;
case 0x736e45:c.instructions+=1;goto B736e45;
case 0x736e50:goto L736e50;
case 0x736e54:c.instructions+=33;goto B736e54;
case 0x736e58:c.instructions+=32;goto B736e58;
case 0x736e5b:c.instructions+=31;goto B736e5b;
case 0x736e5c:c.instructions+=30;goto B736e5c;
case 0x736e5d:c.instructions+=29;goto B736e5d;
case 0x736e60:c.instructions+=28;goto B736e60;
case 0x736e62:c.instructions+=27;goto B736e62;
case 0x736e63:c.instructions+=26;goto B736e63;
case 0x736e67:c.instructions+=25;goto B736e67;
case 0x736e6a:c.instructions+=24;goto B736e6a;
case 0x736e6b:c.instructions+=23;goto B736e6b;
case 0x736e6e:c.instructions+=22;goto B736e6e;
case 0x736e70:c.instructions+=21;goto B736e70;
case 0x736e71:c.instructions+=20;goto B736e71;
case 0x736e75:c.instructions+=19;goto B736e75;
case 0x736e78:c.instructions+=18;goto B736e78;
case 0x736e7b:c.instructions+=17;goto B736e7b;
case 0x736e7f:c.instructions+=16;goto B736e7f;
case 0x736e82:c.instructions+=15;goto B736e82;
case 0x736e85:c.instructions+=14;goto B736e85;
case 0x736e87:c.instructions+=13;goto B736e87;
case 0x736e8b:c.instructions+=12;goto B736e8b;
case 0x736e8f:c.instructions+=11;goto B736e8f;
case 0x736e92:c.instructions+=10;goto B736e92;
case 0x736e94:c.instructions+=9;goto B736e94;
case 0x736e98:c.instructions+=8;goto B736e98;
case 0x736e9b:c.instructions+=7;goto B736e9b;
case 0x736e9c:c.instructions+=6;goto B736e9c;
case 0x736e9e:c.instructions+=5;goto B736e9e;
case 0x736ea0:c.instructions+=4;goto B736ea0;
case 0x736ea5:c.instructions+=3;goto B736ea5;
case 0x736ea6:c.instructions+=2;goto B736ea6;
case 0x736ea7:c.instructions+=1;goto B736ea7;
case 0x736eb0:goto L736eb0;
case 0x736eb4:c.instructions+=7;goto B736eb4;
case 0x736eb8:c.instructions+=6;goto B736eb8;
case 0x736ebc:c.instructions+=5;goto B736ebc;
case 0x736ebe:c.instructions+=4;goto B736ebe;
case 0x736ec2:c.instructions+=3;goto B736ec2;
case 0x736ec6:c.instructions+=2;goto B736ec6;
case 0x736ec8:c.instructions+=1;goto B736ec8;
case 0x736ed0:goto L736ed0;
case 0x736ed4:c.instructions+=14;goto B736ed4;
case 0x736ed5:c.instructions+=13;goto B736ed5;
case 0x736ed9:c.instructions+=12;goto B736ed9;
case 0x736eda:c.instructions+=11;goto B736eda;
case 0x736ede:c.instructions+=10;goto B736ede;
case 0x736ee1:c.instructions+=9;goto B736ee1;
case 0x736ee4:c.instructions+=8;goto B736ee4;
case 0x736ee7:c.instructions+=7;goto B736ee7;
case 0x736eee:c.instructions+=6;goto B736eee;
case 0x736ef0:c.instructions+=5;goto B736ef0;
case 0x736ef3:c.instructions+=4;goto B736ef3;
case 0x736ef7:c.instructions+=3;goto B736ef7;
case 0x736ef9:c.instructions+=2;goto B736ef9;
case 0x736efb:c.instructions+=1;goto B736efb;
case 0x736efd:goto L736efd;
case 0x736efe:c.instructions+=2;goto B736efe;
case 0x736eff:c.instructions+=1;goto B736eff;
case 0x736f02:goto L736f02;
case 0x736f06:c.instructions+=1;goto B736f06;
case 0x736f08:goto L736f08;
case 0x736f0b:c.instructions+=2;goto B736f0b;
case 0x736f0d:c.instructions+=1;goto B736f0d;
case 0x736f0f:goto L736f0f;
case 0x736f13:c.instructions+=5;goto B736f13;
case 0x736f16:c.instructions+=4;goto B736f16;
case 0x736f1b:c.instructions+=3;goto B736f1b;
case 0x736f1e:c.instructions+=2;goto B736f1e;
case 0x736f20:c.instructions+=1;goto B736f20;
case 0x736f23:goto L736f23;
case 0x736f24:c.instructions+=3;goto B736f24;
case 0x736f27:c.instructions+=2;goto B736f27;
case 0x736f29:c.instructions+=1;goto B736f29;
case 0x736f2b:goto L736f2b;
case 0x736f2c:c.instructions+=1;goto B736f2c;
case 0x736f2d:goto L736f2d;
case 0x736f2e:c.instructions+=2;goto B736f2e;
case 0x736f2f:c.instructions+=1;goto B736f2f;
case 0x736f30:goto L736f30;
case 0x736f33:c.instructions+=8;goto B736f33;
case 0x736f37:c.instructions+=7;goto B736f37;
case 0x736f39:c.instructions+=6;goto B736f39;
case 0x736f3b:c.instructions+=5;goto B736f3b;
case 0x736f3c:c.instructions+=4;goto B736f3c;
case 0x736f41:c.instructions+=3;goto B736f41;
case 0x736f45:c.instructions+=2;goto B736f45;
case 0x736f49:c.instructions+=1;goto B736f49;
case 0x736f4f:goto L736f4f;
case 0x736f50:c.instructions+=10;goto B736f50;
case 0x736f53:c.instructions+=9;goto B736f53;
case 0x736f54:c.instructions+=8;goto B736f54;
case 0x736f58:c.instructions+=7;goto B736f58;
case 0x736f59:c.instructions+=6;goto B736f59;
case 0x736f60:c.instructions+=5;goto B736f60;
case 0x736f64:c.instructions+=4;goto B736f64;
case 0x736f68:c.instructions+=3;goto B736f68;
case 0x736f6a:c.instructions+=2;goto B736f6a;
case 0x736f6c:c.instructions+=1;goto B736f6c;
case 0x736f72:goto L736f72;
case 0x736f75:c.instructions+=1;goto B736f75;
case 0x736f7b:goto L736f7b;
case 0x736f7f:c.instructions+=5;goto B736f7f;
case 0x736f81:c.instructions+=4;goto B736f81;
case 0x736f86:c.instructions+=3;goto B736f86;
case 0x736f88:c.instructions+=2;goto B736f88;
case 0x736f8a:c.instructions+=1;goto B736f8a;
case 0x736f90:goto L736f90;
case 0x736f92:c.instructions+=1;goto B736f92;
case 0x736f94:goto L736f94;
case 0x736f99:c.instructions+=1;goto B736f99;
case 0x736f9b:goto L736f9b;
case 0x736fa0:c.instructions+=1;goto B736fa0;
case 0x736fa2:goto L736fa2;
case 0x736fa6:c.instructions+=2;goto B736fa6;
case 0x736fa8:c.instructions+=1;goto B736fa8;
case 0x736faa:goto L736faa;
case 0x736fae:c.instructions+=2;goto B736fae;
case 0x736faf:c.instructions+=1;goto B736faf;
case 0x736fb4:goto L736fb4;
case 0x736fb7:c.instructions+=4;goto B736fb7;
case 0x736fba:c.instructions+=3;goto B736fba;
case 0x736fbd:c.instructions+=2;goto B736fbd;
case 0x736fbf:c.instructions+=1;goto B736fbf;
case 0x736fc1:goto L736fc1;
case 0x736fc5:c.instructions+=1;goto B736fc5;
case 0x736fc7:goto L736fc7;
case 0x736fcb:c.instructions+=7;goto B736fcb;
case 0x736fcd:c.instructions+=6;goto B736fcd;
case 0x736fd1:c.instructions+=5;goto B736fd1;
case 0x736fd2:c.instructions+=4;goto B736fd2;
case 0x736fd6:c.instructions+=3;goto B736fd6;
case 0x736fd7:c.instructions+=2;goto B736fd7;
case 0x736fdb:c.instructions+=1;goto B736fdb;
case 0x736fe0:goto L736fe0;
case 0x736fe3:c.instructions+=2;goto B736fe3;
case 0x736fe5:c.instructions+=1;goto B736fe5;
case 0x736fe7:goto L736fe7;
case 0x736feb:c.instructions+=3;goto B736feb;
case 0x736fef:c.instructions+=2;goto B736fef;
case 0x736ff1:c.instructions+=1;goto B736ff1;
case 0x736ff3:goto L736ff3;
case 0x736ff7:c.instructions+=1;goto B736ff7;
case 0x736ff9:goto L736ff9;
case 0x736ffd:c.instructions+=1;goto B736ffd;
default:missing_instruction(c.pc);}
B736001:L736001:{c.instructions+=2;NFSU2_TR(0x736001);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736002:{NFSU2_TR(0x736002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736007ull));
TAIL_STATIC(0x735f10u,735);
}
B736007:L736007:{c.instructions+=7;NFSU2_TR(0x736007);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73600a:{NFSU2_TR(0x73600a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73600b:{NFSU2_TR(0x73600b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73600c:{NFSU2_TR(0x73600c);
__builtin_memmove((R+0),(R+28),4);
}
B73600e:{NFSU2_TR(0x73600e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73600f:{NFSU2_TR(0x73600f);
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
B736012:{NFSU2_TR(0x736012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736020:L736020:{c.instructions+=4;NFSU2_TR(0x736020);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736024:{NFSU2_TR(0x736024);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B736026:{NFSU2_TR(0x736026);
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
B736029:{NFSU2_TR(0x736029);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L736046;}}
}
B73602b:L73602b:{c.instructions+=5;NFSU2_TR(0x73602b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73602c:{NFSU2_TR(0x73602c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B736030:{NFSU2_TR(0x736030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736031:{NFSU2_TR(0x736031);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736032:{NFSU2_TR(0x736032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736037ull));
TAIL_STATIC(0x735f70u,735);
}
B736037:L736037:{c.instructions+=3;NFSU2_TR(0x736037);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736038:{NFSU2_TR(0x736038);
__builtin_memmove((R+24),(R+0),4);
}
B73603a:{NFSU2_TR(0x73603a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73603full));
TAIL_STATIC(0x7386a0u,738);
}
B73603f:L73603f:{c.instructions+=4;NFSU2_TR(0x73603f);
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
B736042:{NFSU2_TR(0x736042);
__builtin_memmove((R+0),(R+24),4);
}
B736044:{NFSU2_TR(0x736044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736045:{NFSU2_TR(0x736045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736046:L736046:{c.instructions+=1;NFSU2_TR(0x736046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736050:L736050:{c.instructions+=3;NFSU2_TR(0x736050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736054:{NFSU2_TR(0x736054);
__builtin_memmove(gp(0x8b5160),(R+0),4);
}
B736059:{NFSU2_TR(0x736059);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736060:L736060:{c.instructions+=5;NFSU2_TR(0x736060);
__builtin_memmove((R+4),gp(0x8b5160),4);
}
B736066:{NFSU2_TR(0x736066);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B736068:{NFSU2_TR(0x736068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B73606b:{NFSU2_TR(0x73606b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73606d:{NFSU2_TR(0x73606d);
if(r1(R+518)){{goto L736090;}}
}
B73606f:L73606f:{c.instructions+=9;NFSU2_TR(0x73606f);
__builtin_memmove((R+8),(R+16),4);
}
B736072:{NFSU2_TR(0x736072);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736073:{NFSU2_TR(0x736073);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736077:{NFSU2_TR(0x736077);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73607f:{NFSU2_TR(0x73607f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B736087:{NFSU2_TR(0x736087);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73608b:{NFSU2_TR(0x73608b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73608d:{NFSU2_TR(0x73608d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73608e:{NFSU2_TR(0x73608e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736090ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B736090:L736090:{c.instructions+=2;NFSU2_TR(0x736090);
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
B736093:{NFSU2_TR(0x736093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7360a0:L7360a0:{c.instructions+=3;NFSU2_TR(0x7360a0);
__builtin_memmove((R+4),gp(0x8b5160),4);
}
B7360a6:{NFSU2_TR(0x7360a6);
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
B7360a8:{NFSU2_TR(0x7360a8);
if(r1(R+518)){{goto L7360b6;}}
}
B7360aa:L7360aa:{c.instructions+=5;NFSU2_TR(0x7360aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7360ae:{NFSU2_TR(0x7360ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7360b0:{NFSU2_TR(0x7360b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7360b2:{NFSU2_TR(0x7360b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7360b3:{NFSU2_TR(0x7360b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7360b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7360b6:L7360b6:{c.instructions+=1;NFSU2_TR(0x7360b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7360c0:L7360c0:{c.instructions+=3;NFSU2_TR(0x7360c0);
w4(R+0,u32(0x8b4f8cull));
}
B7360c5:{NFSU2_TR(0x7360c5);
w4(R+4,u32(0xffffull));
}
B7360ca:{NFSU2_TR(0x7360ca);
__builtin_memmove((R+12),(R+12),4);
}
B7360d0:L7360d0:{c.instructions+=5;NFSU2_TR(0x7360d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7360d4:{NFSU2_TR(0x7360d4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7360da:{NFSU2_TR(0x7360da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B7360dd:{NFSU2_TR(0x7360dd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8b4fccull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b4fccull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8b4fccull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7360e2:{NFSU2_TR(0x7360e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360d0u);}goto L7360d0;}}
}
B7360e4:L7360e4:{c.instructions+=1;NFSU2_TR(0x7360e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7360f0:L7360f0:{c.instructions+=10;NFSU2_TR(0x7360f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7360f4:{NFSU2_TR(0x7360f4);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7360f9:{NFSU2_TR(0x7360f9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7360fa:{NFSU2_TR(0x7360fa);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B7360fd:{NFSU2_TR(0x7360fd);
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7360ff:{NFSU2_TR(0x7360ff);
__builtin_memmove((R+4),(R+0),4);
}
B736101:{NFSU2_TR(0x736101);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736105:{NFSU2_TR(0x736105);
u8 U[27];
w4(U+19,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+4),4);
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,sar<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B736108:{NFSU2_TR(0x736108);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B736109:{NFSU2_TR(0x736109);
if(r1(R+518)){{goto L736124;}}
}
B73610b:L73610b:{c.instructions+=2;NFSU2_TR(0x73610b);
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
B73610c:{NFSU2_TR(0x73610c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736136;}}
}
B73610e:L73610e:{c.instructions+=9;NFSU2_TR(0x73610e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B736110:{NFSU2_TR(0x736110);
w4(R+0,u32(0x92492493ull));
}
B736115:{NFSU2_TR(0x736115);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B736117:{NFSU2_TR(0x736117);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B736119:{NFSU2_TR(0x736119);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B73611c:{NFSU2_TR(0x73611c);
__builtin_memmove((R+0),(R+8),4);
}
B73611e:{NFSU2_TR(0x73611e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B736121:{NFSU2_TR(0x736121);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736123:{NFSU2_TR(0x736123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736124:L736124:{c.instructions+=7;NFSU2_TR(0x736124);
w4(R+0,u32(0x66666667ull));
}
B736129:{NFSU2_TR(0x736129);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B73612b:{NFSU2_TR(0x73612b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B73612e:{NFSU2_TR(0x73612e);
__builtin_memmove((R+0),(R+8),4);
}
B736130:{NFSU2_TR(0x736130);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B736133:{NFSU2_TR(0x736133);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736135:{NFSU2_TR(0x736135);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736136:L736136:{c.instructions+=2;NFSU2_TR(0x736136);
__builtin_memmove((R+0),(R+4),4);
}
B736138:{NFSU2_TR(0x736138);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736140:L736140:{c.instructions+=2;NFSU2_TR(0x736140);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b5170),4);
w1(R+512,u8((r4(U+6))<(u32(0x1789a34ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1789a34ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1789a34ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73614a:{NFSU2_TR(0x73614a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73615f;}}
}
B73614c:L73614c:{c.instructions+=4;NFSU2_TR(0x73614c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736150:{NFSU2_TR(0x736150);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736154:{NFSU2_TR(0x736154);
__builtin_memmove(gp(0x8b514c),(R+0),4);
}
B736159:{NFSU2_TR(0x736159);
__builtin_memmove(gp(0x8b5150),(R+4),4);
}
B73615f:L73615f:{c.instructions+=1;NFSU2_TR(0x73615f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736160:L736160:{c.instructions+=2;NFSU2_TR(0x736160);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b5170),4);
w1(R+512,u8((r4(U+6))<(u32(0x1789a34ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1789a34ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1789a34ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73616a:{NFSU2_TR(0x73616a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736175;}}
}
B73616c:L73616c:{c.instructions+=2;NFSU2_TR(0x73616c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736170:{NFSU2_TR(0x736170);
__builtin_memmove(gp(0x8b5154),(R+0),4);
}
B736175:L736175:{c.instructions+=1;NFSU2_TR(0x736175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736180:L736180:{c.instructions+=6;NFSU2_TR(0x736180);
__builtin_memmove((R+0),gp(0x8b5160),4);
}
B736185:{NFSU2_TR(0x736185);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736186:{NFSU2_TR(0x736186);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B736188:{NFSU2_TR(0x736188);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73618a:{NFSU2_TR(0x73618a);
s1(0x819acc,u8(0x53ull));
}
B736191:{NFSU2_TR(0x736191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736197;}}
}
B736193:L736193:{c.instructions+=3;NFSU2_TR(0x736193);
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
B736195:{NFSU2_TR(0x736195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736196:{NFSU2_TR(0x736196);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736197:L736197:{c.instructions+=13;NFSU2_TR(0x736197);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73619b:{NFSU2_TR(0x73619b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73619f:{NFSU2_TR(0x73619f);
__builtin_memmove(gp(0x8b5148),(R+0),4);
}
B7361a4:{NFSU2_TR(0x7361a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7361a8:{NFSU2_TR(0x7361a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7361a9:{NFSU2_TR(0x7361a9);
__builtin_memmove(gp(0x8b514c),(R+24),4);
}
B7361af:{NFSU2_TR(0x7361af);
__builtin_memmove(gp(0x8b5150),(R+24),4);
}
B7361b5:{NFSU2_TR(0x7361b5);
__builtin_memmove(gp(0x8b5154),(R+24),4);
}
B7361bb:{NFSU2_TR(0x7361bb);
__builtin_memmove(gp(0x8b5158),(R+24),4);
}
B7361c1:{NFSU2_TR(0x7361c1);
__builtin_memmove(gp(0x8b515c),(R+0),4);
}
B7361c6:{NFSU2_TR(0x7361c6);
__builtin_memmove(gp(0x8b4f5c),(R+4),4);
}
B7361cc:{NFSU2_TR(0x7361cc);
s4(0x8b5184,u32(0x736a60ull));
}
B7361d6:{NFSU2_TR(0x7361d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7361dbull));
TAIL_STATIC(0x738940u,738);
}
B7361db:L7361db:{c.instructions+=1;NFSU2_TR(0x7361db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7361e0ull));
TAIL_STATIC(0x737fc0u,737);
}
B7361e0:L7361e0:{c.instructions+=2;NFSU2_TR(0x7361e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7361e1:{NFSU2_TR(0x7361e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7361e6ull));
TAIL_STATIC(0x738620u,738);
}
B7361e6:L7361e6:{c.instructions+=10;NFSU2_TR(0x7361e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7361e9:{NFSU2_TR(0x7361e9);
__builtin_memmove(gp(0x8b4f60),(R+24),4);
}
B7361ef:{NFSU2_TR(0x7361ef);
__builtin_memmove(gp(0x8b4f64),(R+24),4);
}
B7361f5:{NFSU2_TR(0x7361f5);
__builtin_memmove(gp(0x8b4f68),(R+24),4);
}
B7361fb:{NFSU2_TR(0x7361fb);
__builtin_memmove(gp(0x8b4f6c),(R+24),4);
}
B736201:{NFSU2_TR(0x736201);
__builtin_memmove(gp(0x8b4f70),(R+24),4);
}
B736207:{NFSU2_TR(0x736207);
__builtin_memmove(gp(0x8b4f74),(R+24),4);
}
B73620d:{NFSU2_TR(0x73620d);
__builtin_memmove(gp(0x8b4f78),(R+24),4);
}
B736213:{NFSU2_TR(0x736213);
__builtin_memmove(gp(0x8b4f7c),(R+24),4);
}
B736219:{NFSU2_TR(0x736219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73621eull));
{goto L7364d0;}
}
B73621e:L73621e:{c.instructions+=3;NFSU2_TR(0x73621e);
w4(R+0,u32(0x8b4f8cull));
}
B736223:{NFSU2_TR(0x736223);
w4(R+4,u32(0xffffull));
}
B736228:{NFSU2_TR(0x736228);
{goto L736230;}
}
B736230:L736230:{c.instructions+=5;NFSU2_TR(0x736230);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B736234:{NFSU2_TR(0x736234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B736236:{NFSU2_TR(0x736236);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B736239:{NFSU2_TR(0x736239);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b4fccull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b4fccull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73623e:{NFSU2_TR(0x73623e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736230u);}goto L736230;}}
}
B736240:L736240:{c.instructions+=1;NFSU2_TR(0x736240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736245ull));
TAIL_STATIC(0x735a30u,735);
}
B736245:L736245:{c.instructions+=1;NFSU2_TR(0x736245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73624aull));
{goto L736560;}
}
B73624a:L73624a:{c.instructions+=4;NFSU2_TR(0x73624a);
s4(0x8b5170,u32(0x1789a34ull));
}
B736254:{NFSU2_TR(0x736254);
w4(R+0,u32(0x1ull));
}
B736259:{NFSU2_TR(0x736259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73625a:{NFSU2_TR(0x73625a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736260:L736260:{c.instructions+=2;NFSU2_TR(0x736260);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b5170),4);
w1(R+512,u8((r4(U+6))<(u32(0x1789a34ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1789a34ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1789a34ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73626a:{NFSU2_TR(0x73626a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736296;}}
}
B73626c:L73626c:{c.instructions+=8;NFSU2_TR(0x73626c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73626e:{NFSU2_TR(0x73626e);
__builtin_memmove(gp(0x8b5170),(R+0),4);
}
B736273:{NFSU2_TR(0x736273);
__builtin_memmove(gp(0x8b5148),(R+0),4);
}
B736278:{NFSU2_TR(0x736278);
__builtin_memmove(gp(0x8b514c),(R+0),4);
}
B73627d:{NFSU2_TR(0x73627d);
__builtin_memmove(gp(0x8b5150),(R+0),4);
}
B736282:{NFSU2_TR(0x736282);
__builtin_memmove(gp(0x8b5154),(R+0),4);
}
B736287:{NFSU2_TR(0x736287);
__builtin_memmove(gp(0x8b5158),(R+0),4);
}
B73628c:{NFSU2_TR(0x73628c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736291ull));
TAIL_STATIC(0x735a30u,735);
}
B736291:L736291:{c.instructions+=1;NFSU2_TR(0x736291);
{goto L7364d0;}
}
B736296:L736296:{c.instructions+=1;NFSU2_TR(0x736296);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7362a0:L7362a0:{c.instructions+=6;NFSU2_TR(0x7362a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7362a4:{NFSU2_TR(0x7362a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7362a5:{NFSU2_TR(0x7362a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7362a8:{NFSU2_TR(0x7362a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7362aa:{NFSU2_TR(0x7362aa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7362ad:{NFSU2_TR(0x7362ad);
if(r1(R+518)){{goto L736321;}}
}
B7362af:L7362af:{c.instructions+=32;NFSU2_TR(0x7362af);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7362b3:{NFSU2_TR(0x7362b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7362b6:{NFSU2_TR(0x7362b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7362b7:{NFSU2_TR(0x7362b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7362b8:{NFSU2_TR(0x7362b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7362bb:{NFSU2_TR(0x7362bb);
__builtin_memmove((R+20),(R+0),4);
}
B7362bd:{NFSU2_TR(0x7362bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7362be:{NFSU2_TR(0x7362be);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7362c2:{NFSU2_TR(0x7362c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7362c5:{NFSU2_TR(0x7362c5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7362c6:{NFSU2_TR(0x7362c6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B7362c9:{NFSU2_TR(0x7362c9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7362cb:{NFSU2_TR(0x7362cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7362cc:{NFSU2_TR(0x7362cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7362d0:{NFSU2_TR(0x7362d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7362d3:{NFSU2_TR(0x7362d3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7362d6:{NFSU2_TR(0x7362d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7362da:{NFSU2_TR(0x7362da);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B7362dd:{NFSU2_TR(0x7362dd);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffcull))));
}
B7362e0:{NFSU2_TR(0x7362e0);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B7362e2:{NFSU2_TR(0x7362e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7362e6:{NFSU2_TR(0x7362e6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B7362e9:{NFSU2_TR(0x7362e9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7362eb:{NFSU2_TR(0x7362eb);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7362ef:{NFSU2_TR(0x7362ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7362f0:{NFSU2_TR(0x7362f0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B7362f2:{NFSU2_TR(0x7362f2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B7362f5:{NFSU2_TR(0x7362f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7362f8:{NFSU2_TR(0x7362f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7362f9:{NFSU2_TR(0x7362f9);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7362fd:{NFSU2_TR(0x7362fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7362fe:{NFSU2_TR(0x7362fe);
if(r1(R+518)){{goto L73630d;}}
}
B736300:L736300:{c.instructions+=4;NFSU2_TR(0x736300);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B736304:{NFSU2_TR(0x736304);
u8 U[12];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B736308:{NFSU2_TR(0x736308);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B73630b:{NFSU2_TR(0x73630b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B73630d:L73630d:{c.instructions+=6;NFSU2_TR(0x73630d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B736310:{NFSU2_TR(0x736310);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736314:{NFSU2_TR(0x736314);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736317:{NFSU2_TR(0x736317);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73631a:{NFSU2_TR(0x73631a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73631c:{NFSU2_TR(0x73631c);
w4(R+0,u32(0x1ull));
}
B736321:L736321:{c.instructions+=2;NFSU2_TR(0x736321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736322:{NFSU2_TR(0x736322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736330:L736330:{c.instructions+=8;NFSU2_TR(0x736330);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B736334:{NFSU2_TR(0x736334);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B736338:{NFSU2_TR(0x736338);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B73633d:{NFSU2_TR(0x73633d);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B736341:{NFSU2_TR(0x736341);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B736345:{NFSU2_TR(0x736345);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73634a:{NFSU2_TR(0x73634a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73634e:{NFSU2_TR(0x73634e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736350:L736350:{c.instructions+=6;NFSU2_TR(0x736350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736351:{NFSU2_TR(0x736351);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B736355:{NFSU2_TR(0x736355);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736356:{NFSU2_TR(0x736356);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B736358:{NFSU2_TR(0x736358);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73635a:{NFSU2_TR(0x73635a);
__builtin_memmove((R+12),(R+12),4);
}
B736360:L736360:{c.instructions+=3;NFSU2_TR(0x736360);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4fc8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B736367:{NFSU2_TR(0x736367);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736369:{NFSU2_TR(0x736369);
if(r1(R+518)){{goto L73637b;}}
}
B73636b:L73636b:{c.instructions+=3;NFSU2_TR(0x73636b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73636e:{NFSU2_TR(0x73636e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B736371:{NFSU2_TR(0x736371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73637b;}}
}
B736373:L736373:{c.instructions+=3;NFSU2_TR(0x736373);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B736376:{NFSU2_TR(0x736376);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(R+4))<(r1(U+8))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+8)));
w1(U+9,u8(u32(r1(R+4))-u32(r1(U+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B736379:{NFSU2_TR(0x736379);
if(r1(R+518)){{goto L736386;}}
}
B73637b:L73637b:{c.instructions+=3;NFSU2_TR(0x73637b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73637c:{NFSU2_TR(0x73637c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B73637f:{NFSU2_TR(0x73637f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736360u);}goto L736360;}}
}
B736381:L736381:{c.instructions+=4;NFSU2_TR(0x736381);
__builtin_memmove((R+0),(R+28),4);
}
B736383:{NFSU2_TR(0x736383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736384:{NFSU2_TR(0x736384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736385:{NFSU2_TR(0x736385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736386:L736386:{c.instructions+=7;NFSU2_TR(0x736386);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73638a:{NFSU2_TR(0x73638a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73638b:{NFSU2_TR(0x73638b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4fc8ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B736392:{NFSU2_TR(0x736392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736393:{NFSU2_TR(0x736393);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B736395:{NFSU2_TR(0x736395);
w4(R+0,u32(0x1ull));
}
B73639a:{NFSU2_TR(0x73639a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7363a0:L7363a0:{c.instructions+=9;NFSU2_TR(0x7363a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7363a1:{NFSU2_TR(0x7363a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7363a2:{NFSU2_TR(0x7363a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7363a6:{NFSU2_TR(0x7363a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7363a7:{NFSU2_TR(0x7363a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7363ab:{NFSU2_TR(0x7363ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7363ac:{NFSU2_TR(0x7363ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7363ad:{NFSU2_TR(0x7363ad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7363af:{NFSU2_TR(0x7363af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7363b4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736350u);}goto L736350;}
}
B7363b4:L7363b4:{c.instructions+=3;NFSU2_TR(0x7363b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7363b7:{NFSU2_TR(0x7363b7);
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
B7363b9:{NFSU2_TR(0x7363b9);
if(r1(R+518)){{goto L7363eb;}}
}
B7363bb:L7363bb:{c.instructions+=6;NFSU2_TR(0x7363bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7363bf:{NFSU2_TR(0x7363bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7363c1:{NFSU2_TR(0x7363c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7363c2:{NFSU2_TR(0x7363c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7363c6:{NFSU2_TR(0x7363c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7363c8:{NFSU2_TR(0x7363c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7363e4;}}
}
B7363ca:L7363ca:{c.instructions+=2;NFSU2_TR(0x7363ca);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+12),(U+0),2);
}
B7363cd:{NFSU2_TR(0x7363cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7363d0:L7363d0:{c.instructions+=4;NFSU2_TR(0x7363d0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B7363d3:{NFSU2_TR(0x7363d3);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+14),(U+8),2);
w1(R+512,u8((r2(U+14))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+14),r2(R+12)));
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
w2(U+10,u16(u32(r2(U+16))&u32(u16(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r2(U+10)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7363d7:{NFSU2_TR(0x7363d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7363da:{NFSU2_TR(0x7363da);
if(r1(R+518)){{goto L7363e6;}}
}
B7363dc:L7363dc:{c.instructions+=4;NFSU2_TR(0x7363dc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7363dd:{NFSU2_TR(0x7363dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B7363e0:{NFSU2_TR(0x7363e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7363e2:{NFSU2_TR(0x7363e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7363d0u);}goto L7363d0;}}
}
B7363e4:L7363e4:{c.instructions+=1;NFSU2_TR(0x7363e4);
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
B7363e6:L7363e6:{c.instructions+=5;NFSU2_TR(0x7363e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7363e7:{NFSU2_TR(0x7363e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7363e8:{NFSU2_TR(0x7363e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7363e9:{NFSU2_TR(0x7363e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7363ea:{NFSU2_TR(0x7363ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7363eb:L7363eb:{c.instructions+=5;NFSU2_TR(0x7363eb);
__builtin_memmove((R+0),(R+24),4);
}
B7363ed:{NFSU2_TR(0x7363ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7363ee:{NFSU2_TR(0x7363ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7363ef:{NFSU2_TR(0x7363ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7363f0:{NFSU2_TR(0x7363f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736400:L736400:{c.instructions+=8;NFSU2_TR(0x736400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736401:{NFSU2_TR(0x736401);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736405:{NFSU2_TR(0x736405);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736406:{NFSU2_TR(0x736406);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73640a:{NFSU2_TR(0x73640a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73640b:{NFSU2_TR(0x73640b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73640c:{NFSU2_TR(0x73640c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73640e:{NFSU2_TR(0x73640e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736413ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736350u);}goto L736350;}
}
B736413:L736413:{c.instructions+=3;NFSU2_TR(0x736413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736416:{NFSU2_TR(0x736416);
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
B736418:{NFSU2_TR(0x736418);
if(r1(R+518)){{goto L73642f;}}
}
B73641a:L73641a:{c.instructions+=8;NFSU2_TR(0x73641a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73641e:{NFSU2_TR(0x73641e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736421:{NFSU2_TR(0x736421);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736425:{NFSU2_TR(0x736425);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B736427:{NFSU2_TR(0x736427);
w4(R+0,u32(0x1ull));
}
B73642c:{NFSU2_TR(0x73642c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73642d:{NFSU2_TR(0x73642d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73642e:{NFSU2_TR(0x73642e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73642f:L73642f:{c.instructions+=4;NFSU2_TR(0x73642f);
__builtin_memmove((R+0),(R+24),4);
}
B736431:{NFSU2_TR(0x736431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736432:{NFSU2_TR(0x736432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B736433:{NFSU2_TR(0x736433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736440:L736440:{c.instructions+=8;NFSU2_TR(0x736440);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736441:{NFSU2_TR(0x736441);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736445:{NFSU2_TR(0x736445);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736446:{NFSU2_TR(0x736446);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73644a:{NFSU2_TR(0x73644a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73644b:{NFSU2_TR(0x73644b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73644c:{NFSU2_TR(0x73644c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73644e:{NFSU2_TR(0x73644e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736453ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736350u);}goto L736350;}
}
B736453:L736453:{c.instructions+=3;NFSU2_TR(0x736453);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736456:{NFSU2_TR(0x736456);
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
B736458:{NFSU2_TR(0x736458);
if(r1(R+518)){{goto L736472;}}
}
B73645a:L73645a:{c.instructions+=9;NFSU2_TR(0x73645a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73645e:{NFSU2_TR(0x73645e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B736460:{NFSU2_TR(0x736460);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B736464:{NFSU2_TR(0x736464);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736468:{NFSU2_TR(0x736468);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B73646a:{NFSU2_TR(0x73646a);
w4(R+0,u32(0x1ull));
}
B73646f:{NFSU2_TR(0x73646f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736470:{NFSU2_TR(0x736470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B736471:{NFSU2_TR(0x736471);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736472:L736472:{c.instructions+=4;NFSU2_TR(0x736472);
__builtin_memmove((R+0),(R+24),4);
}
B736474:{NFSU2_TR(0x736474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736475:{NFSU2_TR(0x736475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B736476:{NFSU2_TR(0x736476);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736480:L736480:{c.instructions+=8;NFSU2_TR(0x736480);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736481:{NFSU2_TR(0x736481);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736485:{NFSU2_TR(0x736485);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736486:{NFSU2_TR(0x736486);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73648a:{NFSU2_TR(0x73648a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73648b:{NFSU2_TR(0x73648b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73648c:{NFSU2_TR(0x73648c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73648e:{NFSU2_TR(0x73648e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736493ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736350u);}goto L736350;}
}
B736493:L736493:{c.instructions+=3;NFSU2_TR(0x736493);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736496:{NFSU2_TR(0x736496);
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
B736498:{NFSU2_TR(0x736498);
if(r1(R+518)){{goto L7364bd;}}
}
B73649a:L73649a:{c.instructions+=12;NFSU2_TR(0x73649a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73649e:{NFSU2_TR(0x73649e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7364a0:{NFSU2_TR(0x7364a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B7364a4:{NFSU2_TR(0x7364a4);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7364a8:{NFSU2_TR(0x7364a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7364ac:{NFSU2_TR(0x7364ac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7364af:{NFSU2_TR(0x7364af);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7364b3:{NFSU2_TR(0x7364b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7364b5:{NFSU2_TR(0x7364b5);
w4(R+0,u32(0x1ull));
}
B7364ba:{NFSU2_TR(0x7364ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7364bb:{NFSU2_TR(0x7364bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7364bc:{NFSU2_TR(0x7364bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7364bd:L7364bd:{c.instructions+=4;NFSU2_TR(0x7364bd);
__builtin_memmove((R+0),(R+24),4);
}
B7364bf:{NFSU2_TR(0x7364bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7364c0:{NFSU2_TR(0x7364c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7364c1:{NFSU2_TR(0x7364c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7364d0:L7364d0:{c.instructions+=18;NFSU2_TR(0x7364d0);
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
B7364d2:{NFSU2_TR(0x7364d2);
__builtin_memmove(gp(0x8b4fc8),(R+0),4);
}
B7364d7:{NFSU2_TR(0x7364d7);
__builtin_memmove(gp(0x8b4fcc),(R+0),4);
}
B7364dc:{NFSU2_TR(0x7364dc);
__builtin_memmove(gp(0x8b4fd0),(R+0),4);
}
B7364e1:{NFSU2_TR(0x7364e1);
__builtin_memmove(gp(0x8b4fd4),(R+0),4);
}
B7364e6:{NFSU2_TR(0x7364e6);
__builtin_memmove(gp(0x8b4fd8),(R+0),4);
}
B7364eb:{NFSU2_TR(0x7364eb);
__builtin_memmove(gp(0x8b4fdc),(R+0),4);
}
B7364f0:{NFSU2_TR(0x7364f0);
__builtin_memmove(gp(0x8b4fe0),(R+0),4);
}
B7364f5:{NFSU2_TR(0x7364f5);
__builtin_memmove(gp(0x8b4fe4),(R+0),4);
}
B7364fa:{NFSU2_TR(0x7364fa);
__builtin_memmove(gp(0x8b4fe8),(R+0),4);
}
B7364ff:{NFSU2_TR(0x7364ff);
__builtin_memmove(gp(0x8b4fec),(R+0),4);
}
B736504:{NFSU2_TR(0x736504);
__builtin_memmove(gp(0x8b4ff0),(R+0),4);
}
B736509:{NFSU2_TR(0x736509);
__builtin_memmove(gp(0x8b4ff4),(R+0),4);
}
B73650e:{NFSU2_TR(0x73650e);
__builtin_memmove(gp(0x8b4ff8),(R+0),4);
}
B736513:{NFSU2_TR(0x736513);
__builtin_memmove(gp(0x8b4ffc),(R+0),4);
}
B736518:{NFSU2_TR(0x736518);
__builtin_memmove(gp(0x8b5000),(R+0),4);
}
B73651d:{NFSU2_TR(0x73651d);
__builtin_memmove(gp(0x8b5004),(R+0),4);
}
B736522:{NFSU2_TR(0x736522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736530:L736530:{c.instructions+=8;NFSU2_TR(0x736530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736531:{NFSU2_TR(0x736531);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736535:{NFSU2_TR(0x736535);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736536:{NFSU2_TR(0x736536);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73653a:{NFSU2_TR(0x73653a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73653b:{NFSU2_TR(0x73653b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73653c:{NFSU2_TR(0x73653c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73653e:{NFSU2_TR(0x73653e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736543ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736350u);}goto L736350;}
}
B736543:L736543:{c.instructions+=3;NFSU2_TR(0x736543);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736546:{NFSU2_TR(0x736546);
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
B736548:{NFSU2_TR(0x736548);
if(r1(R+518)){{goto L736557;}}
}
B73654a:L73654a:{c.instructions+=6;NFSU2_TR(0x73654a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73654e:{NFSU2_TR(0x73654e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B736550:{NFSU2_TR(0x736550);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B736554:{NFSU2_TR(0x736554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736555:{NFSU2_TR(0x736555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B736556:{NFSU2_TR(0x736556);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736557:L736557:{c.instructions+=4;NFSU2_TR(0x736557);
__builtin_memmove((R+0),(R+24),4);
}
B736559:{NFSU2_TR(0x736559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73655a:{NFSU2_TR(0x73655a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73655b:{NFSU2_TR(0x73655b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736560:L736560:{c.instructions+=21;NFSU2_TR(0x736560);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736561:{NFSU2_TR(0x736561);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B736563:{NFSU2_TR(0x736563);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B736566:{NFSU2_TR(0x736566);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736567:{NFSU2_TR(0x736567);
__builtin_memmove(gp(0x8b5008),(R+12),4);
}
B73656d:{NFSU2_TR(0x73656d);
__builtin_memmove(gp(0x8b5028),(R+0),4);
}
B736572:{NFSU2_TR(0x736572);
__builtin_memmove(gp(0x8b500c),(R+12),4);
}
B736578:{NFSU2_TR(0x736578);
__builtin_memmove(gp(0x8b502c),(R+0),4);
}
B73657d:{NFSU2_TR(0x73657d);
__builtin_memmove(gp(0x8b5010),(R+12),4);
}
B736583:{NFSU2_TR(0x736583);
__builtin_memmove(gp(0x8b5030),(R+0),4);
}
B736588:{NFSU2_TR(0x736588);
__builtin_memmove(gp(0x8b5014),(R+12),4);
}
B73658e:{NFSU2_TR(0x73658e);
__builtin_memmove(gp(0x8b5034),(R+0),4);
}
B736593:{NFSU2_TR(0x736593);
__builtin_memmove(gp(0x8b5018),(R+12),4);
}
B736599:{NFSU2_TR(0x736599);
__builtin_memmove(gp(0x8b5038),(R+0),4);
}
B73659e:{NFSU2_TR(0x73659e);
__builtin_memmove(gp(0x8b501c),(R+12),4);
}
B7365a4:{NFSU2_TR(0x7365a4);
__builtin_memmove(gp(0x8b503c),(R+0),4);
}
B7365a9:{NFSU2_TR(0x7365a9);
__builtin_memmove(gp(0x8b5020),(R+12),4);
}
B7365af:{NFSU2_TR(0x7365af);
__builtin_memmove(gp(0x8b5040),(R+0),4);
}
B7365b4:{NFSU2_TR(0x7365b4);
__builtin_memmove(gp(0x8b5024),(R+12),4);
}
B7365ba:{NFSU2_TR(0x7365ba);
__builtin_memmove(gp(0x8b5044),(R+0),4);
}
B7365bf:{NFSU2_TR(0x7365bf);
w4(R+24,u32(0x8b504cull));
}
B7365c4:L7365c4:{c.instructions+=8;NFSU2_TR(0x7365c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7365c7:{NFSU2_TR(0x7365c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7365c9:{NFSU2_TR(0x7365c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7365cc:{NFSU2_TR(0x7365cc);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+24)),r2(U+0));
}
B7365cf:{NFSU2_TR(0x7365cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7365d2:{NFSU2_TR(0x7365d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7365d5:{NFSU2_TR(0x7365d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B7365d9:{NFSU2_TR(0x7365d9);
if(r1(R+518)){{goto L7365e4;}}
}
B7365db:L7365db:{c.instructions+=2;NFSU2_TR(0x7365db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7365dc:{NFSU2_TR(0x7365dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7365e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360a0u);}goto L7360a0;}
}
B7365e1:L7365e1:{c.instructions+=1;NFSU2_TR(0x7365e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7365e4:L7365e4:{c.instructions+=4;NFSU2_TR(0x7365e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7365e7:{NFSU2_TR(0x7365e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B7365ea:{NFSU2_TR(0x7365ea);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b514cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b514cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b514cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7365f0:{NFSU2_TR(0x7365f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7365c4u);}goto L7365c4;}}
}
B7365f2:L7365f2:{c.instructions+=5;NFSU2_TR(0x7365f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7365f3:{NFSU2_TR(0x7365f3);
__builtin_memmove(gp(0x8b4f84),(R+12),4);
}
B7365f9:{NFSU2_TR(0x7365f9);
__builtin_memmove(gp(0x8b4f58),(R+12),2);
}
B736600:{NFSU2_TR(0x736600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736601:{NFSU2_TR(0x736601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736610:L736610:{c.instructions+=5;NFSU2_TR(0x736610);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736611:{NFSU2_TR(0x736611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736612:{NFSU2_TR(0x736612);
w4(R+24,u32(0x8b5054ull));
}
B736617:{NFSU2_TR(0x736617);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B736619:{NFSU2_TR(0x736619);
__builtin_memmove((R+16),(R+16),4);
}
B736620:L736620:{c.instructions+=2;NFSU2_TR(0x736620);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B736623:{NFSU2_TR(0x736623);
if(r1(R+518)){{goto L736644;}}
}
B736625:L736625:{c.instructions+=4;NFSU2_TR(0x736625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B736627:{NFSU2_TR(0x736627);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736629:{NFSU2_TR(0x736629);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73662c:{NFSU2_TR(0x73662c);
if(r1(R+518)){{goto L736639;}}
}
B73662e:L73662e:{c.instructions+=2;NFSU2_TR(0x73662e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73662f:{NFSU2_TR(0x73662f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736634ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360a0u);}goto L7360a0;}
}
B736634:L736634:{c.instructions+=2;NFSU2_TR(0x736634);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736637:{NFSU2_TR(0x736637);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B736639:L736639:{c.instructions+=2;NFSU2_TR(0x736639);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73663d:{NFSU2_TR(0x73663d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))-u32(u32(0x1ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B736644:L736644:{c.instructions+=3;NFSU2_TR(0x736644);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B736647:{NFSU2_TR(0x736647);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b5154ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b5154ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73664d:{NFSU2_TR(0x73664d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736620u);}goto L736620;}}
}
B73664f:L73664f:{c.instructions+=5;NFSU2_TR(0x73664f);
__builtin_memmove((R+4),gp(0x8b5008),4);
}
B736655:{NFSU2_TR(0x736655);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B736658:{NFSU2_TR(0x736658);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73665a:{NFSU2_TR(0x73665a);
__builtin_memmove(gp(0x8b5028),(R+0),4);
}
B73665f:{NFSU2_TR(0x73665f);
if(r1(R+518)){{goto L736667;}}
}
B736661:L736661:{c.instructions+=1;NFSU2_TR(0x736661);
__builtin_memmove(gp(0x8b5008),(R+12),4);
}
B736667:L736667:{c.instructions+=3;NFSU2_TR(0x736667);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b500c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73666d:{NFSU2_TR(0x73666d);
__builtin_memmove(gp(0x8b502c),(R+0),4);
}
B736672:{NFSU2_TR(0x736672);
if(r1(R+518)){{goto L73667a;}}
}
B736674:L736674:{c.instructions+=1;NFSU2_TR(0x736674);
__builtin_memmove(gp(0x8b500c),(R+12),4);
}
B73667a:L73667a:{c.instructions+=3;NFSU2_TR(0x73667a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b5010),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736680:{NFSU2_TR(0x736680);
__builtin_memmove(gp(0x8b5030),(R+0),4);
}
B736685:{NFSU2_TR(0x736685);
if(r1(R+518)){{goto L73668d;}}
}
B736687:L736687:{c.instructions+=1;NFSU2_TR(0x736687);
__builtin_memmove(gp(0x8b5010),(R+12),4);
}
B73668d:L73668d:{c.instructions+=3;NFSU2_TR(0x73668d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b5014),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736693:{NFSU2_TR(0x736693);
__builtin_memmove(gp(0x8b5034),(R+0),4);
}
B736698:{NFSU2_TR(0x736698);
if(r1(R+518)){{goto L7366a0;}}
}
B73669a:L73669a:{c.instructions+=1;NFSU2_TR(0x73669a);
__builtin_memmove(gp(0x8b5014),(R+12),4);
}
B7366a0:L7366a0:{c.instructions+=3;NFSU2_TR(0x7366a0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b5018),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7366a6:{NFSU2_TR(0x7366a6);
__builtin_memmove(gp(0x8b5038),(R+0),4);
}
B7366ab:{NFSU2_TR(0x7366ab);
if(r1(R+518)){{goto L7366b3;}}
}
B7366ad:L7366ad:{c.instructions+=1;NFSU2_TR(0x7366ad);
__builtin_memmove(gp(0x8b5018),(R+12),4);
}
B7366b3:L7366b3:{c.instructions+=3;NFSU2_TR(0x7366b3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b501c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7366b9:{NFSU2_TR(0x7366b9);
__builtin_memmove(gp(0x8b503c),(R+0),4);
}
B7366be:{NFSU2_TR(0x7366be);
if(r1(R+518)){{goto L7366c6;}}
}
B7366c0:L7366c0:{c.instructions+=1;NFSU2_TR(0x7366c0);
__builtin_memmove(gp(0x8b501c),(R+12),4);
}
B7366c6:L7366c6:{c.instructions+=3;NFSU2_TR(0x7366c6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b5020),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7366cc:{NFSU2_TR(0x7366cc);
__builtin_memmove(gp(0x8b5040),(R+0),4);
}
B7366d1:{NFSU2_TR(0x7366d1);
if(r1(R+518)){{goto L7366d9;}}
}
B7366d3:L7366d3:{c.instructions+=1;NFSU2_TR(0x7366d3);
__builtin_memmove(gp(0x8b5020),(R+12),4);
}
B7366d9:L7366d9:{c.instructions+=3;NFSU2_TR(0x7366d9);
__builtin_memmove(gp(0x8b5044),(R+0),4);
}
B7366de:{NFSU2_TR(0x7366de);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b5024),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7366e4:{NFSU2_TR(0x7366e4);
if(r1(R+518)){{goto L7366ec;}}
}
B7366e6:L7366e6:{c.instructions+=1;NFSU2_TR(0x7366e6);
__builtin_memmove(gp(0x8b5024),(R+12),4);
}
B7366ec:L7366ec:{c.instructions+=3;NFSU2_TR(0x7366ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7366ed:{NFSU2_TR(0x7366ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7366ee:{NFSU2_TR(0x7366ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360c0u);}goto L7360c0;}
}
B736700:L736700:{c.instructions+=4;NFSU2_TR(0x736700);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736701:{NFSU2_TR(0x736701);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B736705:{NFSU2_TR(0x736705);
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
B736707:{NFSU2_TR(0x736707);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73676d;}}
}
B736709:L736709:{c.instructions+=2;NFSU2_TR(0x736709);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73670c:{NFSU2_TR(0x73670c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73676d;}}
}
B73670e:L73670e:{c.instructions+=6;NFSU2_TR(0x73670e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73670f:{NFSU2_TR(0x73670f);
__builtin_memmove((R+24),(R+28),4);
}
B736711:{NFSU2_TR(0x736711);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B736714:{NFSU2_TR(0x736714);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5054ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73671a:{NFSU2_TR(0x73671a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73671c:{NFSU2_TR(0x73671c);
if(r1(R+518)){{goto L736731;}}
}
B73671e:L73671e:{c.instructions+=2;NFSU2_TR(0x73671e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73671f:{NFSU2_TR(0x73671f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736724ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360a0u);}goto L7360a0;}
}
B736724:L736724:{c.instructions+=2;NFSU2_TR(0x736724);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736727:{NFSU2_TR(0x736727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5054ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B736731:L736731:{c.instructions+=5;NFSU2_TR(0x736731);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b504full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B736738:{NFSU2_TR(0x736738);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b504eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73673f:{NFSU2_TR(0x73673f);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+12))));
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B736746:{NFSU2_TR(0x736746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736747:{NFSU2_TR(0x736747);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736754;}}
}
B736749:L736749:{c.instructions+=1;NFSU2_TR(0x736749);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5028ull))+u32(r4(U+0))));
w4(U+8,u32(0xffffffffull));
s4(u32(r4(U+4)),r4(U+8));
}
B736754:L736754:{c.instructions+=5;NFSU2_TR(0x736754);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B73675b:{NFSU2_TR(0x73675b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B736762:{NFSU2_TR(0x736762);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736763:{NFSU2_TR(0x736763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B736765:{NFSU2_TR(0x736765);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73676d;}}
}
B736767:L736767:{c.instructions+=1;NFSU2_TR(0x736767);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B73676d:L73676d:{c.instructions+=2;NFSU2_TR(0x73676d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73676e:{NFSU2_TR(0x73676e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736770:L736770:{c.instructions+=14;NFSU2_TR(0x736770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B736773:{NFSU2_TR(0x736773);
__builtin_memmove((R+0),(R+12),4);
}
B736775:{NFSU2_TR(0x736775);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B736778:{NFSU2_TR(0x736778);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b504cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73677f:{NFSU2_TR(0x73677f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b504full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B736786:{NFSU2_TR(0x736786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736787:{NFSU2_TR(0x736787);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b5048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73678d:{NFSU2_TR(0x73678d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73678e:{NFSU2_TR(0x73678e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73678f:{NFSU2_TR(0x73678f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736793:{NFSU2_TR(0x736793);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736797:{NFSU2_TR(0x736797);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B736799:{NFSU2_TR(0x736799);
w4(R+24,u32(0x8b504full));
}
B73679e:{NFSU2_TR(0x73679e);
__builtin_memmove((R+28),(R+28),4);
}
B7367a0:L7367a0:{c.instructions+=2;NFSU2_TR(0x7367a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7367a2:{NFSU2_TR(0x7367a2);
if(r1(R+518)){{goto L7367d9;}}
}
B7367a4:L7367a4:{c.instructions+=3;NFSU2_TR(0x7367a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7367a7:{NFSU2_TR(0x7367a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7367a9:{NFSU2_TR(0x7367a9);
if(r1(R+518)){{goto L7367d9;}}
}
B7367ab:L7367ab:{c.instructions+=3;NFSU2_TR(0x7367ab);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B7367ae:{NFSU2_TR(0x7367ae);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7367b2:{NFSU2_TR(0x7367b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7367d9;}}
}
B7367b4:L7367b4:{c.instructions+=3;NFSU2_TR(0x7367b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7367b7:{NFSU2_TR(0x7367b7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7367b9:{NFSU2_TR(0x7367b9);
if(r1(R+512)){{goto L7367c7;}}
}
B7367bb:L7367bb:{c.instructions+=1;NFSU2_TR(0x7367bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7367d9;}}
}
B7367bd:L7367bd:{c.instructions+=3;NFSU2_TR(0x7367bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B7367c1:{NFSU2_TR(0x7367c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B7367c5:{NFSU2_TR(0x7367c5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7367d9;}}
}
B7367c7:L7367c7:{c.instructions+=3;NFSU2_TR(0x7367c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7367ca:{NFSU2_TR(0x7367ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7367ce:{NFSU2_TR(0x7367ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7367d9;}}
}
B7367d0:L7367d0:{c.instructions+=2;NFSU2_TR(0x7367d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7367d1:{NFSU2_TR(0x7367d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7367d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736700u);}goto L736700;}
}
B7367d6:L7367d6:{c.instructions+=1;NFSU2_TR(0x7367d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7367d9:L7367d9:{c.instructions+=4;NFSU2_TR(0x7367d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B7367dc:{NFSU2_TR(0x7367dc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7367dd:{NFSU2_TR(0x7367dd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b514full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b514full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7367e3:{NFSU2_TR(0x7367e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7367a0u);}goto L7367a0;}}
}
B7367e5:L7367e5:{c.instructions+=5;NFSU2_TR(0x7367e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7367e6:{NFSU2_TR(0x7367e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7367e7:{NFSU2_TR(0x7367e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7367e8:{NFSU2_TR(0x7367e8);
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
B7367eb:{NFSU2_TR(0x7367eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7367f0:L7367f0:{c.instructions+=5;NFSU2_TR(0x7367f0);
__builtin_memmove((R+0),gp(0x8b4f50),4);
}
B7367f5:{NFSU2_TR(0x7367f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7367f6:{NFSU2_TR(0x7367f6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7367f8:{NFSU2_TR(0x7367f8);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B7367fa:{NFSU2_TR(0x7367fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736849;}}
}
B7367fc:L7367fc:{c.instructions+=5;NFSU2_TR(0x7367fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7367fd:{NFSU2_TR(0x7367fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B736801:{NFSU2_TR(0x736801);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B736804:{NFSU2_TR(0x736804);
s4(0x8b4f50,u32(0x1ull));
}
B73680e:{NFSU2_TR(0x73680e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L736848;}}
}
B736810:L736810:{c.instructions+=4;NFSU2_TR(0x736810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736811:{NFSU2_TR(0x736811);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B736818:{NFSU2_TR(0x736818);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B73681a:{NFSU2_TR(0x73681a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L736847;}}
}
B73681c:L73681c:{c.instructions+=2;NFSU2_TR(0x73681c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73681f:{NFSU2_TR(0x73681f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L736847;}}
}
B736821:L736821:{c.instructions+=3;NFSU2_TR(0x736821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736822:{NFSU2_TR(0x736822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736823:{NFSU2_TR(0x736823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736828ull));
TAIL_STATIC(0x737f40u,737);
}
B736828:L736828:{c.instructions+=2;NFSU2_TR(0x736828);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736829:{NFSU2_TR(0x736829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73682eull));
TAIL_STATIC(0x7385b0u,738);
}
B73682e:L73682e:{c.instructions+=3;NFSU2_TR(0x73682e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73682f:{NFSU2_TR(0x73682f);
__builtin_memmove((R+12),(R+0),4);
}
B736831:{NFSU2_TR(0x736831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736836ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736700u);}goto L736700;}
}
B736836:L736836:{c.instructions+=4;NFSU2_TR(0x736836);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B736839:{NFSU2_TR(0x736839);
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
B73683b:{NFSU2_TR(0x73683b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73683c:{NFSU2_TR(0x73683c);
if(r1(R+518)){{goto L736847;}}
}
B73683e:L73683e:{c.instructions+=2;NFSU2_TR(0x73683e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73683f:{NFSU2_TR(0x73683f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736844ull));
TAIL_STATIC(0x738120u,738);
}
B736844:L736844:{c.instructions+=1;NFSU2_TR(0x736844);
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
B736847:L736847:{c.instructions+=1;NFSU2_TR(0x736847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736848:L736848:{c.instructions+=1;NFSU2_TR(0x736848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736849:L736849:{c.instructions+=3;NFSU2_TR(0x736849);
__builtin_memmove(gp(0x8b4f50),(R+20),4);
}
B73684f:{NFSU2_TR(0x73684f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B736850:{NFSU2_TR(0x736850);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736860:L736860:{c.instructions+=5;NFSU2_TR(0x736860);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736861:{NFSU2_TR(0x736861);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B736864:{NFSU2_TR(0x736864);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B736866:{NFSU2_TR(0x736866);
w4(R+4,u32(0x8b504eull));
}
B73686b:{NFSU2_TR(0x73686b);
{goto L736870;}
}
B736870:L736870:{c.instructions+=2;NFSU2_TR(0x736870);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
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
B736873:{NFSU2_TR(0x736873);
if(r1(R+518)){{goto L736913;}}
}
B736879:L736879:{c.instructions+=4;NFSU2_TR(0x736879);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B73687c:{NFSU2_TR(0x73687c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73687d:{NFSU2_TR(0x73687d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b514eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b514eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B736883:{NFSU2_TR(0x736883);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736870u);}goto L736870;}}
}
B736885:L736885:{c.instructions+=2;NFSU2_TR(0x736885);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736886:{NFSU2_TR(0x736886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73688bull));
TAIL_STATIC(0x7389e0u,738);
}
B73688b:L73688b:{c.instructions+=3;NFSU2_TR(0x73688b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73688d:{NFSU2_TR(0x73688d);
w4(R+4,u32(0x8b5048ull));
}
B736892:{NFSU2_TR(0x736892);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736893:L736893:{c.instructions+=4;NFSU2_TR(0x736893);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736896:{NFSU2_TR(0x736896);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B73689a:{NFSU2_TR(0x73689a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73689c:{NFSU2_TR(0x73689c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7368ae;}}
}
B73689e:L73689e:{c.instructions+=4;NFSU2_TR(0x73689e);
__builtin_memmove((R+20),(R+0),4);
}
B7368a0:{NFSU2_TR(0x7368a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+20,u32(u32(r4(R+20))-u32(r4(U+0))));
}
B7368a2:{NFSU2_TR(0x7368a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7368a4:{NFSU2_TR(0x7368a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7368ae;}}
}
B7368a6:L7368a6:{c.instructions+=2;NFSU2_TR(0x7368a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b5038ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7368ac:{NFSU2_TR(0x7368ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7368e7;}}
}
B7368ae:L7368ae:{c.instructions+=4;NFSU2_TR(0x7368ae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7368b1:{NFSU2_TR(0x7368b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7368b2:{NFSU2_TR(0x7368b2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b5148ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b5148ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7368b8:{NFSU2_TR(0x7368b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736893u);}goto L736893;}}
}
B7368ba:L7368ba:{c.instructions+=2;NFSU2_TR(0x7368ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7368bc:{NFSU2_TR(0x7368bc);
w4(R+4,u32(0x8b5050ull));
}
B7368c1:L7368c1:{c.instructions+=5;NFSU2_TR(0x7368c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B7368c3:{NFSU2_TR(0x7368c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7368c7:{NFSU2_TR(0x7368c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7368c9:{NFSU2_TR(0x7368c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7368cd:{NFSU2_TR(0x7368cd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L7368d5;}}
}
B7368cf:L7368cf:{c.instructions+=2;NFSU2_TR(0x7368cf);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7368d3:{NFSU2_TR(0x7368d3);
if(r1(R+518)){{goto L7368f6;}}
}
B7368d5:L7368d5:{c.instructions+=4;NFSU2_TR(0x7368d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7368d8:{NFSU2_TR(0x7368d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7368d9:{NFSU2_TR(0x7368d9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b5150ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b5150ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b5150ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7368df:{NFSU2_TR(0x7368df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7368c1u);}goto L7368c1;}}
}
B7368e1:L7368e1:{c.instructions+=5;NFSU2_TR(0x7368e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7368e2:{NFSU2_TR(0x7368e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7368e3:{NFSU2_TR(0x7368e3);
__builtin_memmove((R+0),(R+12),4);
}
B7368e5:{NFSU2_TR(0x7368e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7368e6:{NFSU2_TR(0x7368e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7368e7:L7368e7:{c.instructions+=2;NFSU2_TR(0x7368e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7368e8:{NFSU2_TR(0x7368e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7368edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736700u);}goto L736700;}
}
B7368ed:L7368ed:{c.instructions+=6;NFSU2_TR(0x7368ed);
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
B7368f0:{NFSU2_TR(0x7368f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7368f1:{NFSU2_TR(0x7368f1);
__builtin_memmove((R+0),(R+24),4);
}
B7368f3:{NFSU2_TR(0x7368f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7368f4:{NFSU2_TR(0x7368f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7368f5:{NFSU2_TR(0x7368f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7368f6:L7368f6:{c.instructions+=8;NFSU2_TR(0x7368f6);
__builtin_memmove((R+4),(R+0),4);
}
B7368f8:{NFSU2_TR(0x7368f8);
u8 U[23];
w4(U+15,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7368fb:{NFSU2_TR(0x7368fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b504eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B736902:{NFSU2_TR(0x736902);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B736909:{NFSU2_TR(0x736909);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73690a:{NFSU2_TR(0x73690a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73690b:{NFSU2_TR(0x73690b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B736912:{NFSU2_TR(0x736912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736913:L736913:{c.instructions+=2;NFSU2_TR(0x736913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736914:{NFSU2_TR(0x736914);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736920:L736920:{c.instructions+=6;NFSU2_TR(0x736920);
__builtin_memmove((R+0),gp(0x8b4f4c),4);
}
B736925:{NFSU2_TR(0x736925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B736928:{NFSU2_TR(0x736928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736929:{NFSU2_TR(0x736929);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73692b:{NFSU2_TR(0x73692b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73692d:{NFSU2_TR(0x73692d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736a4b;}}
}
B736933:L736933:{c.instructions+=4;NFSU2_TR(0x736933);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736937:{NFSU2_TR(0x736937);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736939:{NFSU2_TR(0x736939);
s4(0x8b4f4c,u32(0x1ull));
}
B736943:{NFSU2_TR(0x736943);
if(r1(R+518)){{goto L736a4b;}}
}
B736949:L736949:{c.instructions+=6;NFSU2_TR(0x736949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73694b:{NFSU2_TR(0x73694b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73694f:{NFSU2_TR(0x73694f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736950:{NFSU2_TR(0x736950);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736951:{NFSU2_TR(0x736951);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736955:{NFSU2_TR(0x736955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73695aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7363a0u);}goto L7363a0;}
}
B73695a:L73695a:{c.instructions+=4;NFSU2_TR(0x73695a);
__builtin_memmove((R+20),(R+0),4);
}
B73695c:{NFSU2_TR(0x73695c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73695f:{NFSU2_TR(0x73695f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736961:{NFSU2_TR(0x736961);
if(r1(R+518)){{goto L736a4a;}}
}
B736967:L736967:{c.instructions+=5;NFSU2_TR(0x736967);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73696b:{NFSU2_TR(0x73696b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73696c:{NFSU2_TR(0x73696c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B736970:{NFSU2_TR(0x736970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736971:{NFSU2_TR(0x736971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736976ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736400u);}goto L736400;}
}
B736976:L736976:{c.instructions+=3;NFSU2_TR(0x736976);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736979:{NFSU2_TR(0x736979);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73697b:{NFSU2_TR(0x73697b);
if(r1(R+518)){{goto L736a4a;}}
}
B736981:L736981:{c.instructions+=5;NFSU2_TR(0x736981);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736982:{NFSU2_TR(0x736982);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B736986:{NFSU2_TR(0x736986);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736988:{NFSU2_TR(0x736988);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73698a:{NFSU2_TR(0x73698a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73698full));
TAIL_STATIC(0x738860u,738);
}
B73698f:L73698f:{c.instructions+=4;NFSU2_TR(0x73698f);
w4(R+4,u32(r2(R+0)));
}
B736992:{NFSU2_TR(0x736992);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736995:{NFSU2_TR(0x736995);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736997:{NFSU2_TR(0x736997);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L736a49;}}
}
B73699d:L73699d:{c.instructions+=5;NFSU2_TR(0x73699d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7369a1:{NFSU2_TR(0x7369a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7369a2:{NFSU2_TR(0x7369a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7369a6:{NFSU2_TR(0x7369a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7369a7:{NFSU2_TR(0x7369a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7369acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736860u);}goto L736860;}
}
B7369ac:L7369ac:{c.instructions+=4;NFSU2_TR(0x7369ac);
__builtin_memmove((R+28),(R+0),4);
}
B7369ae:{NFSU2_TR(0x7369ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7369b1:{NFSU2_TR(0x7369b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7369b3:{NFSU2_TR(0x7369b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L736a48;}}
}
B7369b9:L7369b9:{c.instructions+=1;NFSU2_TR(0x7369b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7369beull));
TAIL_STATIC(0x7389e0u,738);
}
B7369be:L7369be:{c.instructions+=2;NFSU2_TR(0x7369be);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4f84),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7369c4:{NFSU2_TR(0x7369c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7369cf;}}
}
B7369c6:L7369c6:{c.instructions+=2;NFSU2_TR(0x7369c6);
s2(0x8b4f58,u16(u32(m2(0x8b4f58))+u32(u16(0x1ull))));
}
B7369cd:{NFSU2_TR(0x7369cd);
{goto L7369d8;}
}
B7369cf:L7369cf:{c.instructions+=1;NFSU2_TR(0x7369cf);
s2(0x8b4f58,u16(0x0ull));
}
B7369d8:L7369d8:{c.instructions+=11;NFSU2_TR(0x7369d8);
__builtin_memmove((R+8),gp(0x8b4f58),2);
}
B7369df:{NFSU2_TR(0x7369df);
__builtin_memmove((R+24),(R+28),4);
}
B7369e1:{NFSU2_TR(0x7369e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7369e4:{NFSU2_TR(0x7369e4);
__builtin_memmove(gp(0x8b4f84),(R+0),4);
}
B7369e9:{NFSU2_TR(0x7369e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5048ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7369ef:{NFSU2_TR(0x7369ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5054ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7369f5:{NFSU2_TR(0x7369f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7369f7:{NFSU2_TR(0x7369f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5050ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7369fd:{NFSU2_TR(0x7369fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b504full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B736a03:{NFSU2_TR(0x736a03);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b504cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B736a0a:{NFSU2_TR(0x736a0a);
if(r1(R+518)){{goto L736a15;}}
}
B736a0c:L736a0c:{c.instructions+=2;NFSU2_TR(0x736a0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736a0d:{NFSU2_TR(0x736a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736a12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360a0u);}goto L7360a0;}
}
B736a12:L736a12:{c.instructions+=1;NFSU2_TR(0x736a12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736a15:L736a15:{c.instructions+=7;NFSU2_TR(0x736a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736a19:{NFSU2_TR(0x736a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5054ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736a1f:{NFSU2_TR(0x736a1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))+u32(u32(0x1ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B736a26:{NFSU2_TR(0x736a26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b504eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B736a2d:{NFSU2_TR(0x736a2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B736a34:{NFSU2_TR(0x736a34);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B736a38:{NFSU2_TR(0x736a38);
if(r1(R+518)){{goto L736a43;}}
}
B736a3a:L736a3a:{c.instructions+=2;NFSU2_TR(0x736a3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736a3b:{NFSU2_TR(0x736a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736a40ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7367f0u);}goto L7367f0;}
}
B736a40:L736a40:{c.instructions+=1;NFSU2_TR(0x736a40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736a43:L736a43:{c.instructions+=1;NFSU2_TR(0x736a43);
w4(R+24,u32(0x1ull));
}
B736a48:L736a48:{c.instructions+=1;NFSU2_TR(0x736a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736a49:L736a49:{c.instructions+=1;NFSU2_TR(0x736a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736a4a:L736a4a:{c.instructions+=1;NFSU2_TR(0x736a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B736a4b:L736a4b:{c.instructions+=5;NFSU2_TR(0x736a4b);
__builtin_memmove((R+0),(R+24),4);
}
B736a4d:{NFSU2_TR(0x736a4d);
s4(0x8b4f4c,u32(0x0ull));
}
B736a57:{NFSU2_TR(0x736a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736a58:{NFSU2_TR(0x736a58);
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
B736a5b:{NFSU2_TR(0x736a5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736a60:L736a60:{c.instructions+=8;NFSU2_TR(0x736a60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736a61:{NFSU2_TR(0x736a61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736a62:{NFSU2_TR(0x736a62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736a63:{NFSU2_TR(0x736a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B736a67:{NFSU2_TR(0x736a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B736a6e:{NFSU2_TR(0x736a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736a6f:{NFSU2_TR(0x736a6f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B736a71:{NFSU2_TR(0x736a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736a76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736060u);}goto L736060;}
}
B736a76:L736a76:{c.instructions+=4;NFSU2_TR(0x736a76);
__builtin_memmove((R+24),(R+0),4);
}
B736a78:{NFSU2_TR(0x736a78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736a7b:{NFSU2_TR(0x736a7b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736a7d:{NFSU2_TR(0x736a7d);
if(r1(R+518)){{goto L736abe;}}
}
B736a7f:L736a7f:{c.instructions+=5;NFSU2_TR(0x736a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736a83:{NFSU2_TR(0x736a83);
w4(R+0,u32(0x1ull));
}
B736a88:{NFSU2_TR(0x736a88);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B736a8a:{NFSU2_TR(0x736a8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B736a8c:{NFSU2_TR(0x736a8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L736aa0;}}
}
B736a8e:L736a8e:{c.instructions+=1;NFSU2_TR(0x736a8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B736a92:L736a92:{c.instructions+=6;NFSU2_TR(0x736a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736a95:{NFSU2_TR(0x736a95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B736a98:{NFSU2_TR(0x736a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B736a9b:{NFSU2_TR(0x736a9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B736a9c:{NFSU2_TR(0x736a9c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736a9e:{NFSU2_TR(0x736a9e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736a92u);}goto L736a92;}}
}
B736aa0:L736aa0:{c.instructions+=2;NFSU2_TR(0x736aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736aa1:{NFSU2_TR(0x736aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736aa6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736920u);}goto L736920;}
}
B736aa6:L736aa6:{c.instructions+=4;NFSU2_TR(0x736aa6);
__builtin_memmove((R+28),(R+0),4);
}
B736aa8:{NFSU2_TR(0x736aa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736aab:{NFSU2_TR(0x736aab);
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
B736aad:{NFSU2_TR(0x736aad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736ab8;}}
}
B736aaf:L736aaf:{c.instructions+=2;NFSU2_TR(0x736aaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ab0:{NFSU2_TR(0x736ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736ab5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7360a0u);}goto L7360a0;}
}
B736ab5:L736ab5:{c.instructions+=1;NFSU2_TR(0x736ab5);
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
B736ab8:L736ab8:{c.instructions+=5;NFSU2_TR(0x736ab8);
__builtin_memmove((R+0),(R+28),4);
}
B736aba:{NFSU2_TR(0x736aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736abb:{NFSU2_TR(0x736abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736abc:{NFSU2_TR(0x736abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736abd:{NFSU2_TR(0x736abd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736abe:L736abe:{c.instructions+=5;NFSU2_TR(0x736abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736abf:{NFSU2_TR(0x736abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736ac0:{NFSU2_TR(0x736ac0);
__builtin_memmove((R+0),(R+12),4);
}
B736ac2:{NFSU2_TR(0x736ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736ac3:{NFSU2_TR(0x736ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736ad0:L736ad0:{c.instructions+=6;NFSU2_TR(0x736ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B736ad3:{NFSU2_TR(0x736ad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ad4:{NFSU2_TR(0x736ad4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ad5:{NFSU2_TR(0x736ad5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ad6:{NFSU2_TR(0x736ad6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ad7:{NFSU2_TR(0x736ad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736adcull));
TAIL_STATIC(0x7389e0u,738);
}
B736adc:L736adc:{c.instructions+=11;NFSU2_TR(0x736adc);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4f80))));
}
B736ae2:{NFSU2_TR(0x736ae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736ae6:{NFSU2_TR(0x736ae6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B736ae8:{NFSU2_TR(0x736ae8);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B736aeb:{NFSU2_TR(0x736aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736aef:{NFSU2_TR(0x736aef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736af3:{NFSU2_TR(0x736af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736af7:{NFSU2_TR(0x736af7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736afb:{NFSU2_TR(0x736afb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736aff:{NFSU2_TR(0x736aff);
w4(R+28,u32(0x8b504full));
}
B736b04:{NFSU2_TR(0x736b04);
{goto L736b10;}
}
B736b06:L736b06:{c.instructions+=2;NFSU2_TR(0x736b06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B736b08:{NFSU2_TR(0x736b08);
{goto L736b10;}
}
B736b10:L736b10:{c.instructions+=3;NFSU2_TR(0x736b10);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B736b13:{NFSU2_TR(0x736b13);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B736b15:{NFSU2_TR(0x736b15);
if(r1(R+518)){{goto L736c3b;}}
}
B736b1b:L736b1b:{c.instructions+=3;NFSU2_TR(0x736b1b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B736b1e:{NFSU2_TR(0x736b1e);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B736b22:{NFSU2_TR(0x736b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736c3b;}}
}
B736b28:L736b28:{c.instructions+=7;NFSU2_TR(0x736b28);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736b2c:{NFSU2_TR(0x736b2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736b2e:{NFSU2_TR(0x736b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B736b31:{NFSU2_TR(0x736b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736b35:{NFSU2_TR(0x736b35);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736b39:{NFSU2_TR(0x736b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B736b41:{NFSU2_TR(0x736b41);
if(r1(R+518)){{goto L736b69;}}
}
B736b43:L736b43:{c.instructions+=4;NFSU2_TR(0x736b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B736b45:{NFSU2_TR(0x736b45);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B736b47:{NFSU2_TR(0x736b47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736b49:{NFSU2_TR(0x736b49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L736b65;}}
}
B736b4b:L736b4b:{c.instructions+=2;NFSU2_TR(0x736b4b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+24),(U+0),2);
}
B736b4e:{NFSU2_TR(0x736b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736b51:L736b51:{c.instructions+=2;NFSU2_TR(0x736b51);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+24))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B736b54:{NFSU2_TR(0x736b54);
if(r1(R+518)){{goto L736b60;}}
}
B736b56:L736b56:{c.instructions+=4;NFSU2_TR(0x736b56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B736b57:{NFSU2_TR(0x736b57);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B736b5a:{NFSU2_TR(0x736b5a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B736b5c:{NFSU2_TR(0x736b5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736b51u);}goto L736b51;}}
}
B736b5e:L736b5e:{c.instructions+=1;NFSU2_TR(0x736b5e);
{goto L736b65;}
}
B736b60:L736b60:{c.instructions+=1;NFSU2_TR(0x736b60);
w4(R+20,u32(0x1ull));
}
B736b65:L736b65:{c.instructions+=1;NFSU2_TR(0x736b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736b69:L736b69:{c.instructions+=6;NFSU2_TR(0x736b69);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B736b6d:{NFSU2_TR(0x736b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736b70:{NFSU2_TR(0x736b70);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B736b74:{NFSU2_TR(0x736b74);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B736b76:{NFSU2_TR(0x736b76);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B736b79:{NFSU2_TR(0x736b79);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L736b8a;}}
}
B736b7b:L736b7b:{c.instructions+=3;NFSU2_TR(0x736b7b);
w4(R+8,u32(r2(R+0)));
}
B736b7e:{NFSU2_TR(0x736b7e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736b80:{NFSU2_TR(0x736b80);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L736b8a;}}
}
B736b82:L736b82:{c.instructions+=1;NFSU2_TR(0x736b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B736b8a:L736b8a:{c.instructions+=3;NFSU2_TR(0x736b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736b8e:{NFSU2_TR(0x736b8e);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4f60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B736b96:{NFSU2_TR(0x736b96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736bd6;}}
}
B736b98:L736b98:{c.instructions+=2;NFSU2_TR(0x736b98);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B736b9c:{NFSU2_TR(0x736b9c);
if(r1(R+518)){{goto L736bd6;}}
}
B736b9e:L736b9e:{c.instructions+=9;NFSU2_TR(0x736b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736ba1:{NFSU2_TR(0x736ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B736ba3:{NFSU2_TR(0x736ba3);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B736ba7:{NFSU2_TR(0x736ba7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ba8:{NFSU2_TR(0x736ba8);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B736bac:{NFSU2_TR(0x736bac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736bad:{NFSU2_TR(0x736bad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736bb1:{NFSU2_TR(0x736bb1);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B736bb3:{NFSU2_TR(0x736bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736bb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736350u);}goto L736350;}
}
B736bb8:L736bb8:{c.instructions+=3;NFSU2_TR(0x736bb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736bbb:{NFSU2_TR(0x736bbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736bbd:{NFSU2_TR(0x736bbd);
if(r1(R+518)){{goto L736bda;}}
}
B736bbf:L736bbf:{c.instructions+=5;NFSU2_TR(0x736bbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736bc3:{NFSU2_TR(0x736bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B736bc5:{NFSU2_TR(0x736bc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B736bc9:{NFSU2_TR(0x736bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
}
B736bcd:{NFSU2_TR(0x736bcd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L736bda;}}
}
B736bcf:L736bcf:{c.instructions+=2;NFSU2_TR(0x736bcf);
w4(R+20,u32(0x1ull));
}
B736bd4:{NFSU2_TR(0x736bd4);
{goto L736bda;}
}
B736bd6:L736bd6:{c.instructions+=1;NFSU2_TR(0x736bd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B736bda:L736bda:{c.instructions+=3;NFSU2_TR(0x736bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736bde:{NFSU2_TR(0x736bde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736be0:{NFSU2_TR(0x736be0);
if(r1(R+518)){{goto L736bf1;}}
}
B736be2:L736be2:{c.instructions+=3;NFSU2_TR(0x736be2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736be6:{NFSU2_TR(0x736be6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736be7:{NFSU2_TR(0x736be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736becull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736700u);}goto L736700;}
}
B736bec:L736bec:{c.instructions+=2;NFSU2_TR(0x736bec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736bef:{NFSU2_TR(0x736bef);
{goto L736c3b;}
}
B736bf1:L736bf1:{c.instructions+=3;NFSU2_TR(0x736bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736bf5:{NFSU2_TR(0x736bf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736bf7:{NFSU2_TR(0x736bf7);
if(r1(R+518)){{goto L736c3b;}}
}
B736bf9:L736bf9:{c.instructions+=2;NFSU2_TR(0x736bf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736bfb:{NFSU2_TR(0x736bfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736c3b;}}
}
B736bfd:L736bfd:{c.instructions+=4;NFSU2_TR(0x736bfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B736c01:{NFSU2_TR(0x736c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736c05:{NFSU2_TR(0x736c05);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736c07:{NFSU2_TR(0x736c07);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L736c0f;}}
}
B736c09:L736c09:{c.instructions+=2;NFSU2_TR(0x736c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736c0d:{NFSU2_TR(0x736c0d);
{goto L736c26;}
}
B736c0f:L736c0f:{c.instructions+=1;NFSU2_TR(0x736c0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736c3b;}}
}
B736c11:L736c11:{c.instructions+=3;NFSU2_TR(0x736c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736c15:{NFSU2_TR(0x736c15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736c17:{NFSU2_TR(0x736c17);
if(r1(R+512)){{goto L736c26;}}
}
B736c19:L736c19:{c.instructions+=1;NFSU2_TR(0x736c19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736c3b;}}
}
B736c1b:L736c1b:{c.instructions+=3;NFSU2_TR(0x736c1b);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B736c20:{NFSU2_TR(0x736c20);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B736c24:{NFSU2_TR(0x736c24);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L736c3b;}}
}
B736c26:L736c26:{c.instructions+=5;NFSU2_TR(0x736c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736c2a:{NFSU2_TR(0x736c2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B736c2e:{NFSU2_TR(0x736c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736c32:{NFSU2_TR(0x736c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736c36:{NFSU2_TR(0x736c36);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B736c3b:L736c3b:{c.instructions+=6;NFSU2_TR(0x736c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736c3f:{NFSU2_TR(0x736c3f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B736c40:{NFSU2_TR(0x736c40);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B736c43:{NFSU2_TR(0x736c43);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b514full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b514full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B736c49:{NFSU2_TR(0x736c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736c4d:{NFSU2_TR(0x736c4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736b06u);}goto L736b06;}}
}
B736c53:L736c53:{c.instructions+=7;NFSU2_TR(0x736c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736c57:{NFSU2_TR(0x736c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736c58:{NFSU2_TR(0x736c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736c59:{NFSU2_TR(0x736c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B736c5a:{NFSU2_TR(0x736c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736c5b:{NFSU2_TR(0x736c5b);
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
B736c5e:{NFSU2_TR(0x736c5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736c60:L736c60:{c.instructions+=6;NFSU2_TR(0x736c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B736c63:{NFSU2_TR(0x736c63);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B736c6d:{NFSU2_TR(0x736c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f88ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B736c74:{NFSU2_TR(0x736c74);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B736c7b:{NFSU2_TR(0x736c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B736c83:{NFSU2_TR(0x736c83);
if(r1(R+518)){{goto L736cb4;}}
}
B736c85:L736c85:{c.instructions+=2;NFSU2_TR(0x736c85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736c86:{NFSU2_TR(0x736c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736c8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7363a0u);}goto L7363a0;}
}
B736c8b:L736c8b:{c.instructions+=3;NFSU2_TR(0x736c8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736c8e:{NFSU2_TR(0x736c8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736c90:{NFSU2_TR(0x736c90);
if(r1(R+518)){{goto L736cb4;}}
}
B736c92:L736c92:{c.instructions+=4;NFSU2_TR(0x736c92);
__builtin_memmove((R+4),(R+16),4);
}
B736c95:{NFSU2_TR(0x736c95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736c96:{NFSU2_TR(0x736c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736c97:{NFSU2_TR(0x736c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736c9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7362a0u);}goto L7362a0;}
}
B736c9c:L736c9c:{c.instructions+=3;NFSU2_TR(0x736c9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736c9f:{NFSU2_TR(0x736c9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736ca1:{NFSU2_TR(0x736ca1);
if(r1(R+518)){{goto L736cb4;}}
}
B736ca3:L736ca3:{c.instructions+=4;NFSU2_TR(0x736ca3);
__builtin_memmove((R+8),(R+16),4);
}
B736ca6:{NFSU2_TR(0x736ca6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ca7:{NFSU2_TR(0x736ca7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ca8:{NFSU2_TR(0x736ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736cadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736ad0u);}goto L736ad0;}
}
B736cad:L736cad:{c.instructions+=3;NFSU2_TR(0x736cad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736cb0:{NFSU2_TR(0x736cb0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B736cb2:{NFSU2_TR(0x736cb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L736cbf;}}
}
B736cb4:L736cb4:{c.instructions+=3;NFSU2_TR(0x736cb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736cb5:{NFSU2_TR(0x736cb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736cb7:{NFSU2_TR(0x736cb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736cbcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736ad0u);}goto L736ad0;}
}
B736cbc:L736cbc:{c.instructions+=1;NFSU2_TR(0x736cbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736cbf:L736cbf:{c.instructions+=2;NFSU2_TR(0x736cbf);
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
B736cc2:{NFSU2_TR(0x736cc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736cd0:L736cd0:{c.instructions+=6;NFSU2_TR(0x736cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736cd1:{NFSU2_TR(0x736cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B736cd5:{NFSU2_TR(0x736cd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736cd6:{NFSU2_TR(0x736cd6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B736cd8:{NFSU2_TR(0x736cd8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B736cdb:{NFSU2_TR(0x736cdb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L736d51;}}
}
B736cdd:L736cdd:{c.instructions+=3;NFSU2_TR(0x736cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B736ce4:{NFSU2_TR(0x736ce4);
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
B736ce6:{NFSU2_TR(0x736ce6);
if(r1(R+518)){{goto L736d51;}}
}
B736ce8:L736ce8:{c.instructions+=2;NFSU2_TR(0x736ce8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ce9:{NFSU2_TR(0x736ce9);
__builtin_memmove((R+16),(R+16),4);
}
B736cf0:L736cf0:{c.instructions+=1;NFSU2_TR(0x736cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736cf5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736c60u);}goto L736c60;}
}
B736cf5:L736cf5:{c.instructions+=3;NFSU2_TR(0x736cf5);
__builtin_memmove((R+12),(R+0),4);
}
B736cf7:{NFSU2_TR(0x736cf7);
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
B736cf9:{NFSU2_TR(0x736cf9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L736d50;}}
}
B736cfb:L736cfb:{c.instructions+=7;NFSU2_TR(0x736cfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B736cfe:{NFSU2_TR(0x736cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b5054ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736d04:{NFSU2_TR(0x736d04);
__builtin_memmove((R+0),gp(0x8b5154),4);
}
B736d09:{NFSU2_TR(0x736d09);
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
B736d0b:{NFSU2_TR(0x736d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B736d0d:{NFSU2_TR(0x736d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736d11:{NFSU2_TR(0x736d11);
if(r1(R+518)){{goto L736d22;}}
}
B736d13:L736d13:{c.instructions+=3;NFSU2_TR(0x736d13);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B736d17:{NFSU2_TR(0x736d17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d18:{NFSU2_TR(0x736d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d1aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B736d1a:L736d1a:{c.instructions+=3;NFSU2_TR(0x736d1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736d1d:{NFSU2_TR(0x736d1d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736d20:{NFSU2_TR(0x736d20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736d37;}}
}
B736d22:L736d22:{c.instructions+=2;NFSU2_TR(0x736d22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d23:{NFSU2_TR(0x736d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d28ull));
TAIL_STATIC(0x737f40u,737);
}
B736d28:L736d28:{c.instructions+=2;NFSU2_TR(0x736d28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d29:{NFSU2_TR(0x736d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d2eull));
TAIL_STATIC(0x7385b0u,738);
}
B736d2e:L736d2e:{c.instructions+=4;NFSU2_TR(0x736d2e);
__builtin_memmove((R+28),(R+0),4);
}
B736d30:{NFSU2_TR(0x736d30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736d33:{NFSU2_TR(0x736d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736d35:{NFSU2_TR(0x736d35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736d42;}}
}
B736d37:L736d37:{c.instructions+=2;NFSU2_TR(0x736d37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d38:{NFSU2_TR(0x736d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736700u);}goto L736700;}
}
B736d3d:L736d3d:{c.instructions+=2;NFSU2_TR(0x736d3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736d40:{NFSU2_TR(0x736d40);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736cf0u);}goto L736cf0;}
}
B736d42:L736d42:{c.instructions+=1;NFSU2_TR(0x736d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736770u);}goto L736770;}
}
B736d47:L736d47:{c.instructions+=2;NFSU2_TR(0x736d47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d48:{NFSU2_TR(0x736d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736700u);}goto L736700;}
}
B736d4d:L736d4d:{c.instructions+=1;NFSU2_TR(0x736d4d);
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
B736d50:L736d50:{c.instructions+=1;NFSU2_TR(0x736d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736d51:L736d51:{c.instructions+=4;NFSU2_TR(0x736d51);
__builtin_memmove((R+0),(R+28),4);
}
B736d53:{NFSU2_TR(0x736d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736d54:{NFSU2_TR(0x736d54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736d55:{NFSU2_TR(0x736d55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736d60:L736d60:{c.instructions+=5;NFSU2_TR(0x736d60);
__builtin_memmove((R+0),gp(0x8b4f50),4);
}
B736d65:{NFSU2_TR(0x736d65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d66:{NFSU2_TR(0x736d66);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B736d68:{NFSU2_TR(0x736d68);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B736d6a:{NFSU2_TR(0x736d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736da7;}}
}
B736d6c:L736d6c:{c.instructions+=5;NFSU2_TR(0x736d6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d6d:{NFSU2_TR(0x736d6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B736d71:{NFSU2_TR(0x736d71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d72:{NFSU2_TR(0x736d72);
s4(0x8b4f50,u32(0x1ull));
}
B736d7c:{NFSU2_TR(0x736d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d81ull));
TAIL_STATIC(0x738100u,738);
}
B736d81:L736d81:{c.instructions+=4;NFSU2_TR(0x736d81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736d84:{NFSU2_TR(0x736d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736d86:{NFSU2_TR(0x736d86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d87:{NFSU2_TR(0x736d87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736d96;}}
}
B736d89:L736d89:{c.instructions+=1;NFSU2_TR(0x736d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d8eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736cd0u);}goto L736cd0;}
}
B736d8e:L736d8e:{c.instructions+=3;NFSU2_TR(0x736d8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736d91:{NFSU2_TR(0x736d91);
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
B736d93:{NFSU2_TR(0x736d93);
if(r1(R+518)){{goto L736db1;}}
}
B736d95:L736d95:{c.instructions+=1;NFSU2_TR(0x736d95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736d96:L736d96:{c.instructions+=1;NFSU2_TR(0x736d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736d9bull));
TAIL_STATIC(0x738120u,738);
}
B736d9b:L736d9b:{c.instructions+=5;NFSU2_TR(0x736d9b);
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
B736d9e:{NFSU2_TR(0x736d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736d9f:{NFSU2_TR(0x736d9f);
__builtin_memmove(gp(0x8b4f50),(R+28),4);
}
B736da5:{NFSU2_TR(0x736da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736da6:{NFSU2_TR(0x736da6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736da7:L736da7:{c.instructions+=4;NFSU2_TR(0x736da7);
__builtin_memmove((R+0),(R+28),4);
}
B736da9:{NFSU2_TR(0x736da9);
__builtin_memmove(gp(0x8b4f50),(R+28),4);
}
B736daf:{NFSU2_TR(0x736daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736db0:{NFSU2_TR(0x736db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736db1:L736db1:{c.instructions+=5;NFSU2_TR(0x736db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736db2:{NFSU2_TR(0x736db2);
__builtin_memmove((R+0),(R+28),4);
}
B736db4:{NFSU2_TR(0x736db4);
__builtin_memmove(gp(0x8b4f50),(R+28),4);
}
B736dba:{NFSU2_TR(0x736dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736dbb:{NFSU2_TR(0x736dbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736dc0:L736dc0:{c.instructions+=2;NFSU2_TR(0x736dc0);
w4(R+0,u32(0x8b5164ull));
}
B736dc5:{NFSU2_TR(0x736dc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736dd0:L736dd0:{c.instructions+=18;NFSU2_TR(0x736dd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736dd1:{NFSU2_TR(0x736dd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736dd2:{NFSU2_TR(0x736dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B736dd6:{NFSU2_TR(0x736dd6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B736dd8:{NFSU2_TR(0x736dd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B736ddb:{NFSU2_TR(0x736ddb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ddc:{NFSU2_TR(0x736ddc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B736de0:{NFSU2_TR(0x736de0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B736de2:{NFSU2_TR(0x736de2);
__builtin_memmove((R+4),(R+8),4);
}
B736de4:{NFSU2_TR(0x736de4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B736de7:{NFSU2_TR(0x736de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736dea:{NFSU2_TR(0x736dea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B736ded:{NFSU2_TR(0x736ded);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfull))));
}
B736df0:{NFSU2_TR(0x736df0);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffcull))));
}
B736df3:{NFSU2_TR(0x736df3);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B736df5:{NFSU2_TR(0x736df5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B736df7:{NFSU2_TR(0x736df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B736dfa:{NFSU2_TR(0x736dfa);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L736e09;}}
}
B736dfc:L736dfc:{c.instructions+=6;NFSU2_TR(0x736dfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B736dff:{NFSU2_TR(0x736dff);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B736e00:{NFSU2_TR(0x736e00);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B736e03:{NFSU2_TR(0x736e03);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B736e05:{NFSU2_TR(0x736e05);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B736e08:{NFSU2_TR(0x736e08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B736e09:L736e09:{c.instructions+=7;NFSU2_TR(0x736e09);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B736e0b:{NFSU2_TR(0x736e0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B736e0e:{NFSU2_TR(0x736e0e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B736e10:{NFSU2_TR(0x736e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736e11:{NFSU2_TR(0x736e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736e12:{NFSU2_TR(0x736e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736e13:{NFSU2_TR(0x736e13);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L736e1c;}}
}
B736e15:L736e15:{c.instructions+=2;NFSU2_TR(0x736e15);
w4(R+4,u32(r1(R+4)));
}
B736e18:{NFSU2_TR(0x736e18);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B736e1c:L736e1c:{c.instructions+=1;NFSU2_TR(0x736e1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736e20:L736e20:{c.instructions+=11;NFSU2_TR(0x736e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736e24:{NFSU2_TR(0x736e24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B736e28:{NFSU2_TR(0x736e28);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B736e2c:{NFSU2_TR(0x736e2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B736e2f:{NFSU2_TR(0x736e2f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B736e32:{NFSU2_TR(0x736e32);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B736e35:{NFSU2_TR(0x736e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x3ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B736e3c:{NFSU2_TR(0x736e3c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B736e3f:{NFSU2_TR(0x736e3f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736e41:{NFSU2_TR(0x736e41);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B736e45:{NFSU2_TR(0x736e45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736e50:L736e50:{c.instructions+=34;NFSU2_TR(0x736e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736e54:{NFSU2_TR(0x736e54);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B736e58:{NFSU2_TR(0x736e58);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B736e5b:{NFSU2_TR(0x736e5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736e5c:{NFSU2_TR(0x736e5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B736e5d:{NFSU2_TR(0x736e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B736e60:{NFSU2_TR(0x736e60);
__builtin_memmove((R+12),(R+0),4);
}
B736e62:{NFSU2_TR(0x736e62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736e63:{NFSU2_TR(0x736e63);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B736e67:{NFSU2_TR(0x736e67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B736e6a:{NFSU2_TR(0x736e6a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B736e6b:{NFSU2_TR(0x736e6b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B736e6e:{NFSU2_TR(0x736e6e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B736e70:{NFSU2_TR(0x736e70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736e71:{NFSU2_TR(0x736e71);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B736e75:{NFSU2_TR(0x736e75);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B736e78:{NFSU2_TR(0x736e78);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B736e7b:{NFSU2_TR(0x736e7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B736e7f:{NFSU2_TR(0x736e7f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B736e82:{NFSU2_TR(0x736e82);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffcull))));
}
B736e85:{NFSU2_TR(0x736e85);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B736e87:{NFSU2_TR(0x736e87);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B736e8b:{NFSU2_TR(0x736e8b);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B736e8f:{NFSU2_TR(0x736e8f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B736e92:{NFSU2_TR(0x736e92);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B736e94:{NFSU2_TR(0x736e94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736e98:{NFSU2_TR(0x736e98);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B736e9b:{NFSU2_TR(0x736e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736e9c:{NFSU2_TR(0x736e9c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B736e9e:{NFSU2_TR(0x736e9e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+12)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B736ea0:{NFSU2_TR(0x736ea0);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B736ea5:{NFSU2_TR(0x736ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736ea6:{NFSU2_TR(0x736ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736ea7:{NFSU2_TR(0x736ea7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736eb0:L736eb0:{c.instructions+=8;NFSU2_TR(0x736eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736eb4:{NFSU2_TR(0x736eb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B736eb8:{NFSU2_TR(0x736eb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736ebc:{NFSU2_TR(0x736ebc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B736ebe:{NFSU2_TR(0x736ebe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B736ec2:{NFSU2_TR(0x736ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736ec6:{NFSU2_TR(0x736ec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B736ec8:{NFSU2_TR(0x736ec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736ed0:L736ed0:{c.instructions+=15;NFSU2_TR(0x736ed0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B736ed4:{NFSU2_TR(0x736ed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736ed5:{NFSU2_TR(0x736ed5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B736ed9:{NFSU2_TR(0x736ed9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736eda:{NFSU2_TR(0x736eda);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B736ede:{NFSU2_TR(0x736ede);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B736ee1:{NFSU2_TR(0x736ee1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B736ee4:{NFSU2_TR(0x736ee4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B736ee7:{NFSU2_TR(0x736ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x3ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B736eee:{NFSU2_TR(0x736eee);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B736ef0:{NFSU2_TR(0x736ef0);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B736ef3:{NFSU2_TR(0x736ef3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B736ef7:{NFSU2_TR(0x736ef7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B736ef9:{NFSU2_TR(0x736ef9);
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
B736efb:{NFSU2_TR(0x736efb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L736f2d;}}
}
B736efd:L736efd:{c.instructions+=3;NFSU2_TR(0x736efd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736efe:{NFSU2_TR(0x736efe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736eff:{NFSU2_TR(0x736eff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((R+28),(U+0),4);
}
B736f02:L736f02:{c.instructions+=2;NFSU2_TR(0x736f02);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xfeull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B736f06:{NFSU2_TR(0x736f06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736f23;}}
}
B736f08:L736f08:{c.instructions+=3;NFSU2_TR(0x736f08);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B736f0b:{NFSU2_TR(0x736f0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B736f0d:{NFSU2_TR(0x736f0d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L736f23;}}
}
B736f0f:L736f0f:{c.instructions+=6;NFSU2_TR(0x736f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736f13:{NFSU2_TR(0x736f13);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B736f16:{NFSU2_TR(0x736f16);
w4(R+12,u32(0x1ull));
}
B736f1b:{NFSU2_TR(0x736f1b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B736f1e:{NFSU2_TR(0x736f1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B736f20:{NFSU2_TR(0x736f20);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(r4(R+12))));
s4(u32(r4(U+4)),r4(U+8));
}
B736f23:L736f23:{c.instructions+=4;NFSU2_TR(0x736f23);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B736f24:{NFSU2_TR(0x736f24);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B736f27:{NFSU2_TR(0x736f27);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B736f29:{NFSU2_TR(0x736f29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736f02u);}goto L736f02;}}
}
B736f2b:L736f2b:{c.instructions+=2;NFSU2_TR(0x736f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B736f2c:{NFSU2_TR(0x736f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B736f2d:L736f2d:{c.instructions+=3;NFSU2_TR(0x736f2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B736f2e:{NFSU2_TR(0x736f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B736f2f:{NFSU2_TR(0x736f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B736f30:L736f30:{c.instructions+=9;NFSU2_TR(0x736f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B736f33:{NFSU2_TR(0x736f33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B736f37:{NFSU2_TR(0x736f37);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B736f39:{NFSU2_TR(0x736f39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736f3b:{NFSU2_TR(0x736f3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736f3c:{NFSU2_TR(0x736f3c);
w4(R+20,u32(0x1ull));
}
B736f41:{NFSU2_TR(0x736f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736f45:{NFSU2_TR(0x736f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736f49:{NFSU2_TR(0x736f49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x737026u,737);}
}
B736f4f:L736f4f:{c.instructions+=11;NFSU2_TR(0x736f4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736f50:{NFSU2_TR(0x736f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B736f53:{NFSU2_TR(0x736f53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736f54:{NFSU2_TR(0x736f54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736f58:{NFSU2_TR(0x736f58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736f59:{NFSU2_TR(0x736f59);
__builtin_memmove((R+16),(R+16),4);
}
B736f60:{NFSU2_TR(0x736f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736f64:{NFSU2_TR(0x736f64);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B736f68:{NFSU2_TR(0x736f68);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B736f6a:{NFSU2_TR(0x736f6a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B736f6c:{NFSU2_TR(0x736f6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x737023u,737);}
}
B736f72:L736f72:{c.instructions+=2;NFSU2_TR(0x736f72);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B736f75:{NFSU2_TR(0x736f75);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x737023u,737);}
}
B736f7b:L736f7b:{c.instructions+=6;NFSU2_TR(0x736f7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B736f7f:{NFSU2_TR(0x736f7f);
__builtin_memmove((R+4),(R+28),4);
}
B736f81:{NFSU2_TR(0x736f81);
w4(R+24,u32(0x1ull));
}
B736f86:{NFSU2_TR(0x736f86);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B736f88:{NFSU2_TR(0x736f88);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736f8a:{NFSU2_TR(0x736f8a);
if(r1(R+518)){TAIL_STATIC(0x737023u,737);}
}
B736f90:L736f90:{c.instructions+=2;NFSU2_TR(0x736f90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736f92:{NFSU2_TR(0x736f92);
if(r1(R+518)){TAIL_STATIC(0x737002u,737);}
}
B736f94:L736f94:{c.instructions+=2;NFSU2_TR(0x736f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736f99:{NFSU2_TR(0x736f99);
if(r1(R+518)){TAIL_STATIC(0x737002u,737);}
}
B736f9b:L736f9b:{c.instructions+=2;NFSU2_TR(0x736f9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736fa0:{NFSU2_TR(0x736fa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L736ff9;}}
}
B736fa2:L736fa2:{c.instructions+=3;NFSU2_TR(0x736fa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B736fa6:{NFSU2_TR(0x736fa6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B736fa8:{NFSU2_TR(0x736fa8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L736fc7;}}
}
B736faa:L736faa:{c.instructions+=3;NFSU2_TR(0x736faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736fae:{NFSU2_TR(0x736fae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736faf:{NFSU2_TR(0x736faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736fb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736e20u);}goto L736e20;}
}
B736fb4:L736fb4:{c.instructions+=5;NFSU2_TR(0x736fb4);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7full))));
}
B736fb7:{NFSU2_TR(0x736fb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B736fba:{NFSU2_TR(0x736fba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B736fbd:{NFSU2_TR(0x736fbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736fbf:{NFSU2_TR(0x736fbf);
if(r1(R+518)){TAIL_STATIC(0x737023u,737);}
}
B736fc1:L736fc1:{c.instructions+=2;NFSU2_TR(0x736fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736fc5:{NFSU2_TR(0x736fc5);
TAIL_STATIC(0x737002u,737);
}
B736fc7:L736fc7:{c.instructions+=8;NFSU2_TR(0x736fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736fcb:{NFSU2_TR(0x736fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B736fcd:{NFSU2_TR(0x736fcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B736fd1:{NFSU2_TR(0x736fd1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736fd2:{NFSU2_TR(0x736fd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B736fd6:{NFSU2_TR(0x736fd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B736fd7:{NFSU2_TR(0x736fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B736fdb:{NFSU2_TR(0x736fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x736fe0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x736480u);}goto L736480;}
}
B736fe0:L736fe0:{c.instructions+=3;NFSU2_TR(0x736fe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B736fe3:{NFSU2_TR(0x736fe3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B736fe5:{NFSU2_TR(0x736fe5);
if(r1(R+518)){TAIL_STATIC(0x737023u,737);}
}
B736fe7:L736fe7:{c.instructions+=4;NFSU2_TR(0x736fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B736feb:{NFSU2_TR(0x736feb);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B736fef:{NFSU2_TR(0x736fef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B736ff1:{NFSU2_TR(0x736ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x737023u,737);}
}
B736ff3:L736ff3:{c.instructions+=2;NFSU2_TR(0x736ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B736ff7:{NFSU2_TR(0x736ff7);
TAIL_STATIC(0x737002u,737);
}
B736ff9:L736ff9:{c.instructions+=2;NFSU2_TR(0x736ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B736ffd:{NFSU2_TR(0x736ffd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x737000u,737);
}
XIT:NFSU2_TR_EXIT(0x736,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
