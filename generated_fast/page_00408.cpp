#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x408,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x408,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_408(u8* __restrict R,Cpu& c);
u32 page_408(Cpu& c){return body_408(c.regs.data(),c);}
__attribute__((noinline)) u32 body_408(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x408001:goto L408001;
case 0x408003:goto L408003;
case 0x408004:goto L408004;
case 0x40800a:c.instructions+=1;goto B40800a;
case 0x40800b:goto L40800b;
case 0x40800e:c.instructions+=1;goto B40800e;
case 0x408010:goto L408010;
case 0x408016:c.instructions+=2;goto B408016;
case 0x408018:c.instructions+=1;goto B408018;
case 0x40801e:goto L40801e;
case 0x408024:c.instructions+=5;goto B408024;
case 0x408027:c.instructions+=4;goto B408027;
case 0x40802d:c.instructions+=3;goto B40802d;
case 0x40802e:c.instructions+=2;goto B40802e;
case 0x408030:c.instructions+=1;goto B408030;
case 0x408032:goto L408032;
case 0x408033:c.instructions+=2;goto B408033;
case 0x408039:c.instructions+=1;goto B408039;
case 0x40803a:goto L40803a;
case 0x40803d:c.instructions+=1;goto B40803d;
case 0x40803f:goto L40803f;
case 0x408045:c.instructions+=2;goto B408045;
case 0x408049:c.instructions+=1;goto B408049;
case 0x40804b:goto L40804b;
case 0x40804c:c.instructions+=5;goto B40804c;
case 0x408052:c.instructions+=4;goto B408052;
case 0x408057:c.instructions+=3;goto B408057;
case 0x408059:c.instructions+=2;goto B408059;
case 0x40805a:c.instructions+=1;goto B40805a;
case 0x40805c:goto L40805c;
case 0x408062:c.instructions+=6;goto B408062;
case 0x408068:c.instructions+=5;goto B408068;
case 0x40806b:c.instructions+=4;goto B40806b;
case 0x408071:c.instructions+=3;goto B408071;
case 0x408072:c.instructions+=2;goto B408072;
case 0x408074:c.instructions+=1;goto B408074;
case 0x408076:goto L408076;
case 0x408077:goto L408077;
case 0x40807d:c.instructions+=1;goto B40807d;
case 0x40807e:goto L40807e;
case 0x408084:c.instructions+=1;goto B408084;
case 0x408085:goto L408085;
case 0x408087:c.instructions+=1;goto B408087;
case 0x408089:goto L408089;
case 0x40808f:c.instructions+=3;goto B40808f;
case 0x408092:c.instructions+=2;goto B408092;
case 0x408094:c.instructions+=1;goto B408094;
case 0x408096:goto L408096;
case 0x40809a:c.instructions+=5;goto B40809a;
case 0x40809b:c.instructions+=4;goto B40809b;
case 0x40809f:c.instructions+=3;goto B40809f;
case 0x4080a0:c.instructions+=2;goto B4080a0;
case 0x4080a1:c.instructions+=1;goto B4080a1;
case 0x4080a6:goto L4080a6;
case 0x4080b0:goto L4080b0;
case 0x4080b4:c.instructions+=2;goto B4080b4;
case 0x4080b6:c.instructions+=1;goto B4080b6;
case 0x4080bc:goto L4080bc;
case 0x4080c0:c.instructions+=3;goto B4080c0;
case 0x4080c6:c.instructions+=2;goto B4080c6;
case 0x4080c9:c.instructions+=1;goto B4080c9;
case 0x4080cb:goto L4080cb;
case 0x4080d1:c.instructions+=2;goto B4080d1;
case 0x4080d3:c.instructions+=1;goto B4080d3;
case 0x4080d9:goto L4080d9;
case 0x4080df:c.instructions+=3;goto B4080df;
case 0x4080e5:c.instructions+=2;goto B4080e5;
case 0x4080e8:c.instructions+=1;goto B4080e8;
case 0x4080ea:goto L4080ea;
case 0x4080eb:goto L4080eb;
case 0x4080f1:c.instructions+=1;goto B4080f1;
case 0x4080f2:goto L4080f2;
case 0x4080f5:c.instructions+=1;goto B4080f5;
case 0x4080f7:goto L4080f7;
case 0x4080fd:c.instructions+=2;goto B4080fd;
case 0x4080ff:c.instructions+=1;goto B4080ff;
case 0x408101:goto L408101;
case 0x408104:c.instructions+=1;goto B408104;
case 0x408106:goto L408106;
case 0x408107:c.instructions+=2;goto B408107;
case 0x40810d:c.instructions+=1;goto B40810d;
case 0x40810e:goto L40810e;
case 0x408111:c.instructions+=1;goto B408111;
case 0x408113:goto L408113;
case 0x408119:c.instructions+=2;goto B408119;
case 0x40811d:c.instructions+=1;goto B40811d;
case 0x40811f:goto L40811f;
case 0x408120:c.instructions+=5;goto B408120;
case 0x408126:c.instructions+=4;goto B408126;
case 0x40812b:c.instructions+=3;goto B40812b;
case 0x40812d:c.instructions+=2;goto B40812d;
case 0x40812e:c.instructions+=1;goto B40812e;
case 0x408130:goto L408130;
case 0x408136:c.instructions+=3;goto B408136;
case 0x40813c:c.instructions+=2;goto B40813c;
case 0x40813f:c.instructions+=1;goto B40813f;
case 0x408141:goto L408141;
case 0x408142:goto L408142;
case 0x408148:c.instructions+=1;goto B408148;
case 0x408149:goto L408149;
case 0x40814f:c.instructions+=1;goto B40814f;
case 0x408150:goto L408150;
case 0x408152:c.instructions+=1;goto B408152;
case 0x408154:goto L408154;
case 0x40815a:c.instructions+=3;goto B40815a;
case 0x40815d:c.instructions+=2;goto B40815d;
case 0x40815f:c.instructions+=1;goto B40815f;
case 0x408161:goto L408161;
case 0x408165:c.instructions+=5;goto B408165;
case 0x408166:c.instructions+=4;goto B408166;
case 0x40816a:c.instructions+=3;goto B40816a;
case 0x40816b:c.instructions+=2;goto B40816b;
case 0x40816c:c.instructions+=1;goto B40816c;
case 0x408171:goto L408171;
case 0x408180:goto L408180;
case 0x408184:c.instructions+=2;goto B408184;
case 0x40818b:c.instructions+=1;goto B40818b;
case 0x40818d:goto L40818d;
case 0x408191:c.instructions+=2;goto B408191;
case 0x408196:c.instructions+=1;goto B408196;
case 0x408198:goto L408198;
case 0x408199:c.instructions+=1;goto B408199;
case 0x40819b:goto L40819b;
case 0x4081a0:c.instructions+=7;goto B4081a0;
case 0x4081a4:c.instructions+=6;goto B4081a4;
case 0x4081a8:c.instructions+=5;goto B4081a8;
case 0x4081ae:c.instructions+=4;goto B4081ae;
case 0x4081b4:c.instructions+=3;goto B4081b4;
case 0x4081b6:c.instructions+=2;goto B4081b6;
case 0x4081b9:c.instructions+=1;goto B4081b9;
case 0x4081bb:goto L4081bb;
case 0x4081bd:c.instructions+=1;goto B4081bd;
case 0x4081c3:goto L4081c3;
case 0x4081c9:c.instructions+=3;goto B4081c9;
case 0x4081cf:c.instructions+=2;goto B4081cf;
case 0x4081d5:c.instructions+=1;goto B4081d5;
case 0x4081d6:goto L4081d6;
case 0x4081da:c.instructions+=2;goto B4081da;
case 0x4081dc:c.instructions+=1;goto B4081dc;
case 0x4081de:goto L4081de;
case 0x4081e8:c.instructions+=1;goto B4081e8;
case 0x4081e9:goto L4081e9;
case 0x4081f3:goto L4081f3;
case 0x408200:goto L408200;
case 0x408204:c.instructions+=2;goto B408204;
case 0x40820a:c.instructions+=1;goto B40820a;
case 0x40820c:goto L40820c;
case 0x40820f:c.instructions+=3;goto B40820f;
case 0x408214:c.instructions+=2;goto B408214;
case 0x408219:c.instructions+=1;goto B408219;
case 0x40821a:goto L40821a;
case 0x40821c:c.instructions+=1;goto B40821c;
case 0x408220:goto L408220;
case 0x408224:c.instructions+=2;goto B408224;
case 0x40822a:c.instructions+=1;goto B40822a;
case 0x40822c:goto L40822c;
case 0x408236:c.instructions+=2;goto B408236;
case 0x40823b:c.instructions+=1;goto B40823b;
case 0x40823c:goto L40823c;
case 0x40823e:c.instructions+=1;goto B40823e;
case 0x408240:goto L408240;
case 0x408246:c.instructions+=4;goto B408246;
case 0x40824c:c.instructions+=3;goto B40824c;
case 0x40824e:c.instructions+=2;goto B40824e;
case 0x408251:c.instructions+=1;goto B408251;
case 0x408253:goto L408253;
case 0x408259:c.instructions+=1;goto B408259;
case 0x40825b:goto L40825b;
case 0x408261:goto L408261;
case 0x408267:c.instructions+=3;goto B408267;
case 0x408269:c.instructions+=2;goto B408269;
case 0x40826c:c.instructions+=1;goto B40826c;
case 0x40826e:goto L40826e;
case 0x408270:c.instructions+=1;goto B408270;
case 0x408276:goto L408276;
case 0x408280:goto L408280;
case 0x408281:c.instructions+=12;goto B408281;
case 0x408286:c.instructions+=11;goto B408286;
case 0x408287:c.instructions+=10;goto B408287;
case 0x408289:c.instructions+=9;goto B408289;
case 0x40828f:c.instructions+=8;goto B40828f;
case 0x408293:c.instructions+=7;goto B408293;
case 0x408297:c.instructions+=6;goto B408297;
case 0x408298:c.instructions+=5;goto B408298;
case 0x40829e:c.instructions+=4;goto B40829e;
case 0x4082a4:c.instructions+=3;goto B4082a4;
case 0x4082a6:c.instructions+=2;goto B4082a6;
case 0x4082a9:c.instructions+=1;goto B4082a9;
case 0x4082ab:goto L4082ab;
case 0x4082b5:goto L4082b5;
case 0x4082bb:c.instructions+=4;goto B4082bb;
case 0x4082bf:c.instructions+=3;goto B4082bf;
case 0x4082c0:c.instructions+=2;goto B4082c0;
case 0x4082c2:c.instructions+=1;goto B4082c2;
case 0x4082c7:goto L4082c7;
case 0x4082c9:c.instructions+=1;goto B4082c9;
case 0x4082cb:goto L4082cb;
case 0x4082d1:c.instructions+=2;goto B4082d1;
case 0x4082d6:c.instructions+=1;goto B4082d6;
case 0x4082db:goto L4082db;
case 0x4082df:c.instructions+=3;goto B4082df;
case 0x4082e1:c.instructions+=2;goto B4082e1;
case 0x4082e3:c.instructions+=1;goto B4082e3;
case 0x4082e6:goto L4082e6;
case 0x4082e9:c.instructions+=1;goto B4082e9;
case 0x4082eb:goto L4082eb;
case 0x4082ed:goto L4082ed;
case 0x4082f1:c.instructions+=6;goto B4082f1;
case 0x4082f7:c.instructions+=5;goto B4082f7;
case 0x4082fa:c.instructions+=4;goto B4082fa;
case 0x408301:c.instructions+=3;goto B408301;
case 0x408303:c.instructions+=2;goto B408303;
case 0x408306:c.instructions+=1;goto B408306;
case 0x408308:goto L408308;
case 0x408309:c.instructions+=4;goto B408309;
case 0x40830b:c.instructions+=3;goto B40830b;
case 0x40830c:c.instructions+=2;goto B40830c;
case 0x40830d:c.instructions+=1;goto B40830d;
case 0x408310:goto L408310;
case 0x408316:c.instructions+=2;goto B408316;
case 0x40831c:c.instructions+=1;goto B40831c;
case 0x408322:goto L408322;
case 0x408323:c.instructions+=4;goto B408323;
case 0x408325:c.instructions+=3;goto B408325;
case 0x408326:c.instructions+=2;goto B408326;
case 0x408327:c.instructions+=1;goto B408327;
case 0x408330:goto L408330;
case 0x408336:c.instructions+=2;goto B408336;
case 0x408338:c.instructions+=1;goto B408338;
case 0x40833a:goto L40833a;
case 0x40833d:c.instructions+=4;goto B40833d;
case 0x40833f:c.instructions+=3;goto B40833f;
case 0x408340:c.instructions+=2;goto B408340;
case 0x408342:c.instructions+=1;goto B408342;
case 0x408345:goto L408345;
case 0x408347:c.instructions+=1;goto B408347;
case 0x408349:goto L408349;
case 0x40834e:c.instructions+=2;goto B40834e;
case 0x408350:c.instructions+=1;goto B408350;
case 0x408352:goto L408352;
case 0x408357:c.instructions+=2;goto B408357;
case 0x408359:c.instructions+=1;goto B408359;
case 0x40835b:goto L40835b;
case 0x40835d:c.instructions+=6;goto B40835d;
case 0x40835f:c.instructions+=5;goto B40835f;
case 0x408361:c.instructions+=4;goto B408361;
case 0x408364:c.instructions+=3;goto B408364;
case 0x408365:c.instructions+=2;goto B408365;
case 0x408367:c.instructions+=1;goto B408367;
case 0x408368:goto L408368;
case 0x40836d:c.instructions+=5;goto B40836d;
case 0x40836f:c.instructions+=4;goto B40836f;
case 0x408371:c.instructions+=3;goto B408371;
case 0x408374:c.instructions+=2;goto B408374;
case 0x408375:c.instructions+=1;goto B408375;
case 0x408377:goto L408377;
case 0x408380:goto L408380;
case 0x408385:c.instructions+=1;goto B408385;
case 0x408390:goto L408390;
case 0x408394:c.instructions+=2;goto B408394;
case 0x40839b:c.instructions+=1;goto B40839b;
case 0x4083a0:goto L4083a0;
case 0x4083a1:c.instructions+=9;goto B4083a1;
case 0x4083a6:c.instructions+=8;goto B4083a6;
case 0x4083ac:c.instructions+=7;goto B4083ac;
case 0x4083b0:c.instructions+=6;goto B4083b0;
case 0x4083b4:c.instructions+=5;goto B4083b4;
case 0x4083ba:c.instructions+=4;goto B4083ba;
case 0x4083c0:c.instructions+=3;goto B4083c0;
case 0x4083c2:c.instructions+=2;goto B4083c2;
case 0x4083c5:c.instructions+=1;goto B4083c5;
case 0x4083c7:goto L4083c7;
case 0x4083cc:c.instructions+=2;goto B4083cc;
case 0x4083cd:c.instructions+=1;goto B4083cd;
case 0x4083ce:goto L4083ce;
case 0x4083d0:c.instructions+=2;goto B4083d0;
case 0x4083d1:c.instructions+=1;goto B4083d1;
case 0x4083e0:goto L4083e0;
case 0x4083e1:c.instructions+=6;goto B4083e1;
case 0x4083e6:c.instructions+=5;goto B4083e6;
case 0x4083e7:c.instructions+=4;goto B4083e7;
case 0x4083e9:c.instructions+=3;goto B4083e9;
case 0x4083eb:c.instructions+=2;goto B4083eb;
case 0x4083ef:c.instructions+=1;goto B4083ef;
case 0x4083f2:goto L4083f2;
case 0x4083f8:c.instructions+=3;goto B4083f8;
case 0x4083fa:c.instructions+=2;goto B4083fa;
case 0x4083fd:c.instructions+=1;goto B4083fd;
case 0x4083ff:goto L4083ff;
case 0x408405:c.instructions+=3;goto B408405;
case 0x408408:c.instructions+=2;goto B408408;
case 0x40840b:c.instructions+=1;goto B40840b;
case 0x40840d:goto L40840d;
case 0x408410:c.instructions+=4;goto B408410;
case 0x408416:c.instructions+=3;goto B408416;
case 0x408418:c.instructions+=2;goto B408418;
case 0x40841b:c.instructions+=1;goto B40841b;
case 0x40841d:goto L40841d;
case 0x408423:c.instructions+=3;goto B408423;
case 0x408424:c.instructions+=2;goto B408424;
case 0x408425:c.instructions+=1;goto B408425;
case 0x408426:goto L408426;
case 0x40842a:c.instructions+=3;goto B40842a;
case 0x40842b:c.instructions+=2;goto B40842b;
case 0x40842c:c.instructions+=1;goto B40842c;
case 0x408430:goto L408430;
case 0x408431:c.instructions+=5;goto B408431;
case 0x408436:c.instructions+=4;goto B408436;
case 0x408438:c.instructions+=3;goto B408438;
case 0x408439:c.instructions+=2;goto B408439;
case 0x40843b:c.instructions+=1;goto B40843b;
case 0x40843d:goto L40843d;
case 0x408442:c.instructions+=2;goto B408442;
case 0x408444:c.instructions+=1;goto B408444;
case 0x408446:goto L408446;
case 0x408448:c.instructions+=1;goto B408448;
case 0x40844b:goto L40844b;
case 0x408451:c.instructions+=16;goto B408451;
case 0x408453:c.instructions+=15;goto B408453;
case 0x408455:c.instructions+=14;goto B408455;
case 0x408458:c.instructions+=13;goto B408458;
case 0x408459:c.instructions+=12;goto B408459;
case 0x40845b:c.instructions+=11;goto B40845b;
case 0x408461:c.instructions+=10;goto B408461;
case 0x408464:c.instructions+=9;goto B408464;
case 0x408466:c.instructions+=8;goto B408466;
case 0x40846c:c.instructions+=7;goto B40846c;
case 0x408470:c.instructions+=6;goto B408470;
case 0x408474:c.instructions+=5;goto B408474;
case 0x40847a:c.instructions+=4;goto B40847a;
case 0x408481:c.instructions+=3;goto B408481;
case 0x408483:c.instructions+=2;goto B408483;
case 0x408486:c.instructions+=1;goto B408486;
case 0x408488:goto L408488;
case 0x40848d:c.instructions+=3;goto B40848d;
case 0x40848e:c.instructions+=2;goto B40848e;
case 0x40848f:c.instructions+=1;goto B40848f;
case 0x408490:goto L408490;
case 0x408492:c.instructions+=3;goto B408492;
case 0x408493:c.instructions+=2;goto B408493;
case 0x408494:c.instructions+=1;goto B408494;
case 0x408495:goto L408495;
case 0x408497:c.instructions+=3;goto B408497;
case 0x408498:c.instructions+=2;goto B408498;
case 0x408499:c.instructions+=1;goto B408499;
case 0x4084a0:goto L4084a0;
case 0x4084a4:c.instructions+=10;goto B4084a4;
case 0x4084a7:c.instructions+=9;goto B4084a7;
case 0x4084a8:c.instructions+=8;goto B4084a8;
case 0x4084ac:c.instructions+=7;goto B4084ac;
case 0x4084b3:c.instructions+=6;goto B4084b3;
case 0x4084b9:c.instructions+=5;goto B4084b9;
case 0x4084be:c.instructions+=4;goto B4084be;
case 0x4084c0:c.instructions+=3;goto B4084c0;
case 0x4084c1:c.instructions+=2;goto B4084c1;
case 0x4084c3:c.instructions+=1;goto B4084c3;
case 0x4084c9:goto L4084c9;
case 0x4084d0:c.instructions+=2;goto B4084d0;
case 0x4084d4:c.instructions+=1;goto B4084d4;
case 0x4084d6:goto L4084d6;
case 0x4084d9:c.instructions+=3;goto B4084d9;
case 0x4084dd:c.instructions+=2;goto B4084dd;
case 0x4084e0:c.instructions+=1;goto B4084e0;
case 0x4084e2:goto L4084e2;
case 0x4084e6:c.instructions+=3;goto B4084e6;
case 0x4084e9:c.instructions+=2;goto B4084e9;
case 0x4084ec:c.instructions+=1;goto B4084ec;
case 0x4084f2:goto L4084f2;
case 0x4084f6:c.instructions+=8;goto B4084f6;
case 0x4084f7:c.instructions+=7;goto B4084f7;
case 0x4084fb:c.instructions+=6;goto B4084fb;
case 0x408501:c.instructions+=5;goto B408501;
case 0x408507:c.instructions+=4;goto B408507;
case 0x408508:c.instructions+=3;goto B408508;
case 0x40850a:c.instructions+=2;goto B40850a;
case 0x40850d:c.instructions+=1;goto B40850d;
case 0x408513:goto L408513;
case 0x408518:c.instructions+=2;goto B408518;
case 0x40851a:c.instructions+=1;goto B40851a;
case 0x40851c:goto L40851c;
case 0x408521:c.instructions+=2;goto B408521;
case 0x408523:c.instructions+=1;goto B408523;
case 0x408525:goto L408525;
case 0x40852b:c.instructions+=2;goto B40852b;
case 0x408531:c.instructions+=1;goto B408531;
case 0x408533:goto L408533;
case 0x408538:c.instructions+=3;goto B408538;
case 0x40853a:c.instructions+=2;goto B40853a;
case 0x40853c:c.instructions+=1;goto B40853c;
case 0x40853e:goto L40853e;
case 0x408544:c.instructions+=2;goto B408544;
case 0x408549:c.instructions+=1;goto B408549;
case 0x408550:goto L408550;
case 0x408557:c.instructions+=1;goto B408557;
case 0x408559:goto L408559;
case 0x40855a:c.instructions+=1;goto B40855a;
case 0x40855c:goto L40855c;
case 0x40855e:goto L40855e;
case 0x408560:goto L408560;
case 0x408565:c.instructions+=3;goto B408565;
case 0x408567:c.instructions+=2;goto B408567;
case 0x40856a:c.instructions+=1;goto B40856a;
case 0x40856c:goto L40856c;
case 0x40856f:c.instructions+=1;goto B40856f;
case 0x408571:goto L408571;
case 0x408576:goto L408576;
case 0x408579:c.instructions+=5;goto B408579;
case 0x40857c:c.instructions+=4;goto B40857c;
case 0x408580:c.instructions+=3;goto B408580;
case 0x408583:c.instructions+=2;goto B408583;
case 0x408585:c.instructions+=1;goto B408585;
case 0x408587:goto L408587;
case 0x408589:c.instructions+=3;goto B408589;
case 0x40858a:c.instructions+=2;goto B40858a;
case 0x40858e:c.instructions+=1;goto B40858e;
case 0x408593:goto L408593;
case 0x408595:c.instructions+=3;goto B408595;
case 0x408596:c.instructions+=2;goto B408596;
case 0x40859a:c.instructions+=1;goto B40859a;
case 0x40859f:goto L40859f;
case 0x4085a3:c.instructions+=5;goto B4085a3;
case 0x4085a4:c.instructions+=4;goto B4085a4;
case 0x4085a8:c.instructions+=3;goto B4085a8;
case 0x4085b0:c.instructions+=2;goto B4085b0;
case 0x4085b8:c.instructions+=1;goto B4085b8;
case 0x4085bd:goto L4085bd;
case 0x4085be:c.instructions+=5;goto B4085be;
case 0x4085c1:c.instructions+=4;goto B4085c1;
case 0x4085c6:c.instructions+=3;goto B4085c6;
case 0x4085c7:c.instructions+=2;goto B4085c7;
case 0x4085cb:c.instructions+=1;goto B4085cb;
case 0x4085d0:goto L4085d0;
case 0x4085d1:c.instructions+=4;goto B4085d1;
case 0x4085d4:c.instructions+=3;goto B4085d4;
case 0x4085d6:c.instructions+=2;goto B4085d6;
case 0x4085da:c.instructions+=1;goto B4085da;
case 0x4085df:goto L4085df;
case 0x4085e1:c.instructions+=2;goto B4085e1;
case 0x4085e3:c.instructions+=1;goto B4085e3;
case 0x4085e6:goto L4085e6;
case 0x4085e8:c.instructions+=11;goto B4085e8;
case 0x4085ea:c.instructions+=10;goto B4085ea;
case 0x4085ed:c.instructions+=9;goto B4085ed;
case 0x4085ee:c.instructions+=8;goto B4085ee;
case 0x4085f0:c.instructions+=7;goto B4085f0;
case 0x4085f4:c.instructions+=6;goto B4085f4;
case 0x4085f8:c.instructions+=5;goto B4085f8;
case 0x4085fc:c.instructions+=4;goto B4085fc;
case 0x408600:c.instructions+=3;goto B408600;
case 0x408604:c.instructions+=2;goto B408604;
case 0x408605:c.instructions+=1;goto B408605;
case 0x40860a:goto L40860a;
case 0x40860e:c.instructions+=4;goto B40860e;
case 0x408612:c.instructions+=3;goto B408612;
case 0x408615:c.instructions+=2;goto B408615;
case 0x40861c:c.instructions+=1;goto B40861c;
case 0x40861e:goto L40861e;
case 0x408621:c.instructions+=3;goto B408621;
case 0x408624:c.instructions+=2;goto B408624;
case 0x408628:c.instructions+=1;goto B408628;
case 0x40862a:goto L40862a;
case 0x40862e:c.instructions+=2;goto B40862e;
case 0x408634:c.instructions+=1;goto B408634;
case 0x408637:goto L408637;
case 0x40863b:c.instructions+=3;goto B40863b;
case 0x40863d:c.instructions+=2;goto B40863d;
case 0x408641:c.instructions+=1;goto B408641;
case 0x408643:goto L408643;
case 0x408649:c.instructions+=1;goto B408649;
case 0x40864b:goto L40864b;
case 0x408651:goto L408651;
case 0x408655:c.instructions+=15;goto B408655;
case 0x408657:c.instructions+=14;goto B408657;
case 0x40865d:c.instructions+=13;goto B40865d;
case 0x408663:c.instructions+=12;goto B408663;
case 0x408669:c.instructions+=11;goto B408669;
case 0x40866d:c.instructions+=10;goto B40866d;
case 0x408671:c.instructions+=9;goto B408671;
case 0x408677:c.instructions+=8;goto B408677;
case 0x408679:c.instructions+=7;goto B408679;
case 0x40867f:c.instructions+=6;goto B40867f;
case 0x408681:c.instructions+=5;goto B408681;
case 0x408685:c.instructions+=4;goto B408685;
case 0x408689:c.instructions+=3;goto B408689;
case 0x40868b:c.instructions+=2;goto B40868b;
case 0x40868e:c.instructions+=1;goto B40868e;
case 0x408690:goto L408690;
case 0x408692:c.instructions+=1;goto B408692;
case 0x408696:goto L408696;
case 0x40869c:c.instructions+=4;goto B40869c;
case 0x40869e:c.instructions+=3;goto B40869e;
case 0x4086a0:c.instructions+=2;goto B4086a0;
case 0x4086a3:c.instructions+=1;goto B4086a3;
case 0x4086a5:goto L4086a5;
case 0x4086a7:c.instructions+=1;goto B4086a7;
case 0x4086ad:goto L4086ad;
case 0x4086b0:c.instructions+=5;goto B4086b0;
case 0x4086b3:c.instructions+=4;goto B4086b3;
case 0x4086b8:c.instructions+=3;goto B4086b8;
case 0x4086ba:c.instructions+=2;goto B4086ba;
case 0x4086c0:c.instructions+=1;goto B4086c0;
case 0x4086c2:goto L4086c2;
case 0x4086c7:c.instructions+=2;goto B4086c7;
case 0x4086c9:c.instructions+=1;goto B4086c9;
case 0x4086cb:goto L4086cb;
case 0x4086d1:c.instructions+=2;goto B4086d1;
case 0x4086d3:c.instructions+=1;goto B4086d3;
case 0x4086d5:goto L4086d5;
case 0x4086d9:c.instructions+=5;goto B4086d9;
case 0x4086dd:c.instructions+=4;goto B4086dd;
case 0x4086df:c.instructions+=3;goto B4086df;
case 0x4086e7:c.instructions+=2;goto B4086e7;
case 0x4086ef:c.instructions+=1;goto B4086ef;
case 0x4086f1:goto L4086f1;
case 0x4086f4:c.instructions+=1;goto B4086f4;
case 0x4086f6:goto L4086f6;
case 0x4086f9:goto L4086f9;
case 0x408700:c.instructions+=7;goto B408700;
case 0x408707:c.instructions+=6;goto B408707;
case 0x408708:c.instructions+=5;goto B408708;
case 0x40870d:c.instructions+=4;goto B40870d;
case 0x40870e:c.instructions+=3;goto B40870e;
case 0x408710:c.instructions+=2;goto B408710;
case 0x408714:c.instructions+=1;goto B408714;
case 0x408719:goto L408719;
case 0x40871a:c.instructions+=2;goto B40871a;
case 0x40871e:c.instructions+=1;goto B40871e;
case 0x408723:goto L408723;
case 0x408727:c.instructions+=1;goto B408727;
case 0x408729:goto L408729;
case 0x40872a:c.instructions+=1;goto B40872a;
case 0x40872b:goto L40872b;
case 0x40872c:c.instructions+=3;goto B40872c;
case 0x40872d:c.instructions+=2;goto B40872d;
case 0x408730:c.instructions+=1;goto B408730;
case 0x408740:goto L408740;
case 0x408742:c.instructions+=21;goto B408742;
case 0x408746:c.instructions+=20;goto B408746;
case 0x40874c:c.instructions+=19;goto B40874c;
case 0x40874f:c.instructions+=18;goto B40874f;
case 0x408751:c.instructions+=17;goto B408751;
case 0x408754:c.instructions+=16;goto B408754;
case 0x408757:c.instructions+=15;goto B408757;
case 0x408758:c.instructions+=14;goto B408758;
case 0x40875b:c.instructions+=13;goto B40875b;
case 0x40875e:c.instructions+=12;goto B40875e;
case 0x408761:c.instructions+=11;goto B408761;
case 0x408768:c.instructions+=10;goto B408768;
case 0x40876c:c.instructions+=9;goto B40876c;
case 0x40876d:c.instructions+=8;goto B40876d;
case 0x408771:c.instructions+=7;goto B408771;
case 0x408777:c.instructions+=6;goto B408777;
case 0x40877a:c.instructions+=5;goto B40877a;
case 0x408780:c.instructions+=4;goto B408780;
case 0x408783:c.instructions+=3;goto B408783;
case 0x408786:c.instructions+=2;goto B408786;
case 0x408789:c.instructions+=1;goto B408789;
case 0x408790:goto L408790;
case 0x408791:c.instructions+=2;goto B408791;
case 0x408793:c.instructions+=1;goto B408793;
case 0x408798:goto L408798;
case 0x40879d:c.instructions+=1;goto B40879d;
case 0x40879f:goto L40879f;
case 0x4087a0:c.instructions+=1;goto B4087a0;
case 0x4087a5:goto L4087a5;
case 0x4087a8:goto L4087a8;
case 0x4087aa:c.instructions+=2;goto B4087aa;
case 0x4087ab:c.instructions+=1;goto B4087ab;
case 0x4087b0:goto L4087b0;
case 0x4087b1:c.instructions+=7;goto B4087b1;
case 0x4087b5:c.instructions+=6;goto B4087b5;
case 0x4087b6:c.instructions+=5;goto B4087b6;
case 0x4087bb:c.instructions+=4;goto B4087bb;
case 0x4087bd:c.instructions+=3;goto B4087bd;
case 0x4087bf:c.instructions+=2;goto B4087bf;
case 0x4087c1:c.instructions+=1;goto B4087c1;
case 0x4087c6:goto L4087c6;
case 0x4087c8:c.instructions+=6;goto B4087c8;
case 0x4087ca:c.instructions+=5;goto B4087ca;
case 0x4087cc:c.instructions+=4;goto B4087cc;
case 0x4087cf:c.instructions+=3;goto B4087cf;
case 0x4087d0:c.instructions+=2;goto B4087d0;
case 0x4087d2:c.instructions+=1;goto B4087d2;
case 0x4087d7:goto L4087d7;
case 0x4087da:c.instructions+=3;goto B4087da;
case 0x4087db:c.instructions+=2;goto B4087db;
case 0x4087dd:c.instructions+=1;goto B4087dd;
case 0x4087e2:goto L4087e2;
case 0x4087e5:c.instructions+=3;goto B4087e5;
case 0x4087e6:c.instructions+=2;goto B4087e6;
case 0x4087e8:c.instructions+=1;goto B4087e8;
case 0x4087ed:goto L4087ed;
case 0x4087f0:c.instructions+=3;goto B4087f0;
case 0x4087f1:c.instructions+=2;goto B4087f1;
case 0x4087f3:c.instructions+=1;goto B4087f3;
case 0x4087f8:goto L4087f8;
case 0x4087fb:c.instructions+=3;goto B4087fb;
case 0x4087fc:c.instructions+=2;goto B4087fc;
case 0x4087fe:c.instructions+=1;goto B4087fe;
case 0x408803:goto L408803;
case 0x408804:c.instructions+=2;goto B408804;
case 0x408806:c.instructions+=1;goto B408806;
case 0x40880b:goto L40880b;
case 0x40880d:c.instructions+=1;goto B40880d;
case 0x408812:goto L408812;
case 0x408813:c.instructions+=2;goto B408813;
case 0x408814:c.instructions+=1;goto B408814;
case 0x408820:goto L408820;
case 0x408821:c.instructions+=23;goto B408821;
case 0x408823:c.instructions+=22;goto B408823;
case 0x408826:c.instructions+=21;goto B408826;
case 0x408829:c.instructions+=20;goto B408829;
case 0x40882a:c.instructions+=19;goto B40882a;
case 0x40882c:c.instructions+=18;goto B40882c;
case 0x40882f:c.instructions+=17;goto B40882f;
case 0x408832:c.instructions+=16;goto B408832;
case 0x408838:c.instructions+=15;goto B408838;
case 0x408839:c.instructions+=14;goto B408839;
case 0x40883b:c.instructions+=13;goto B40883b;
case 0x40883c:c.instructions+=12;goto B40883c;
case 0x408840:c.instructions+=11;goto B408840;
case 0x408841:c.instructions+=10;goto B408841;
case 0x408844:c.instructions+=9;goto B408844;
case 0x408848:c.instructions+=8;goto B408848;
case 0x40884c:c.instructions+=7;goto B40884c;
case 0x40884f:c.instructions+=6;goto B40884f;
case 0x408852:c.instructions+=5;goto B408852;
case 0x408856:c.instructions+=4;goto B408856;
case 0x408859:c.instructions+=3;goto B408859;
case 0x40885f:c.instructions+=2;goto B40885f;
case 0x408862:c.instructions+=1;goto B408862;
case 0x408867:goto L408867;
case 0x40886a:c.instructions+=3;goto B40886a;
case 0x40886e:c.instructions+=2;goto B40886e;
case 0x40886f:c.instructions+=1;goto B40886f;
case 0x408874:goto L408874;
case 0x408878:c.instructions+=9;goto B408878;
case 0x40887c:c.instructions+=8;goto B40887c;
case 0x40887e:c.instructions+=7;goto B40887e;
case 0x408881:c.instructions+=6;goto B408881;
case 0x408885:c.instructions+=5;goto B408885;
case 0x408887:c.instructions+=4;goto B408887;
case 0x40888a:c.instructions+=3;goto B40888a;
case 0x40888e:c.instructions+=2;goto B40888e;
case 0x408892:c.instructions+=1;goto B408892;
case 0x408897:goto L408897;
case 0x40889a:c.instructions+=8;goto B40889a;
case 0x40889e:c.instructions+=7;goto B40889e;
case 0x4088a2:c.instructions+=6;goto B4088a2;
case 0x4088a8:c.instructions+=5;goto B4088a8;
case 0x4088ac:c.instructions+=4;goto B4088ac;
case 0x4088b2:c.instructions+=3;goto B4088b2;
case 0x4088b4:c.instructions+=2;goto B4088b4;
case 0x4088b7:c.instructions+=1;goto B4088b7;
case 0x4088b9:goto L4088b9;
case 0x4088bd:c.instructions+=2;goto B4088bd;
case 0x4088c3:c.instructions+=1;goto B4088c3;
case 0x4088c7:goto L4088c7;
case 0x4088cb:c.instructions+=6;goto B4088cb;
case 0x4088d1:c.instructions+=5;goto B4088d1;
case 0x4088d5:c.instructions+=4;goto B4088d5;
case 0x4088d7:c.instructions+=3;goto B4088d7;
case 0x4088d9:c.instructions+=2;goto B4088d9;
case 0x4088dc:c.instructions+=1;goto B4088dc;
case 0x4088de:goto L4088de;
case 0x4088e0:c.instructions+=4;goto B4088e0;
case 0x4088e4:c.instructions+=3;goto B4088e4;
case 0x4088e6:c.instructions+=2;goto B4088e6;
case 0x4088e9:c.instructions+=1;goto B4088e9;
case 0x4088eb:goto L4088eb;
case 0x4088ef:c.instructions+=12;goto B4088ef;
case 0x4088f2:c.instructions+=11;goto B4088f2;
case 0x4088f6:c.instructions+=10;goto B4088f6;
case 0x4088fa:c.instructions+=9;goto B4088fa;
case 0x4088fe:c.instructions+=8;goto B4088fe;
case 0x408902:c.instructions+=7;goto B408902;
case 0x408904:c.instructions+=6;goto B408904;
case 0x408907:c.instructions+=5;goto B408907;
case 0x40890b:c.instructions+=4;goto B40890b;
case 0x40890d:c.instructions+=3;goto B40890d;
case 0x40890f:c.instructions+=2;goto B40890f;
case 0x408912:c.instructions+=1;goto B408912;
case 0x408917:goto L408917;
case 0x408919:goto L408919;
case 0x40891d:c.instructions+=10;goto B40891d;
case 0x40891e:c.instructions+=9;goto B40891e;
case 0x408920:c.instructions+=8;goto B408920;
case 0x408924:c.instructions+=7;goto B408924;
case 0x408927:c.instructions+=6;goto B408927;
case 0x408928:c.instructions+=5;goto B408928;
case 0x40892b:c.instructions+=4;goto B40892b;
case 0x40892f:c.instructions+=3;goto B40892f;
case 0x408930:c.instructions+=2;goto B408930;
case 0x408931:c.instructions+=1;goto B408931;
case 0x408936:goto L408936;
case 0x40893a:c.instructions+=11;goto B40893a;
case 0x40893e:c.instructions+=10;goto B40893e;
case 0x408942:c.instructions+=9;goto B408942;
case 0x408946:c.instructions+=8;goto B408946;
case 0x40894a:c.instructions+=7;goto B40894a;
case 0x40894e:c.instructions+=6;goto B40894e;
case 0x40894f:c.instructions+=5;goto B40894f;
case 0x408950:c.instructions+=4;goto B408950;
case 0x408951:c.instructions+=3;goto B408951;
case 0x408955:c.instructions+=2;goto B408955;
case 0x408956:c.instructions+=1;goto B408956;
case 0x40895b:goto L40895b;
case 0x40895f:c.instructions+=6;goto B40895f;
case 0x408963:c.instructions+=5;goto B408963;
case 0x408966:c.instructions+=4;goto B408966;
case 0x40896a:c.instructions+=3;goto B40896a;
case 0x408970:c.instructions+=2;goto B408970;
case 0x408973:c.instructions+=1;goto B408973;
case 0x408978:goto L408978;
case 0x40897c:c.instructions+=3;goto B40897c;
case 0x408980:c.instructions+=2;goto B408980;
case 0x408981:c.instructions+=1;goto B408981;
case 0x408986:goto L408986;
case 0x408988:c.instructions+=27;goto B408988;
case 0x40898c:c.instructions+=26;goto B40898c;
case 0x40898f:c.instructions+=25;goto B40898f;
case 0x408992:c.instructions+=24;goto B408992;
case 0x408996:c.instructions+=23;goto B408996;
case 0x408998:c.instructions+=22;goto B408998;
case 0x40899c:c.instructions+=21;goto B40899c;
case 0x40899e:c.instructions+=20;goto B40899e;
case 0x4089a0:c.instructions+=19;goto B4089a0;
case 0x4089a2:c.instructions+=18;goto B4089a2;
case 0x4089a6:c.instructions+=17;goto B4089a6;
case 0x4089a8:c.instructions+=16;goto B4089a8;
case 0x4089aa:c.instructions+=15;goto B4089aa;
case 0x4089ac:c.instructions+=14;goto B4089ac;
case 0x4089b0:c.instructions+=13;goto B4089b0;
case 0x4089b2:c.instructions+=12;goto B4089b2;
case 0x4089b6:c.instructions+=11;goto B4089b6;
case 0x4089b8:c.instructions+=10;goto B4089b8;
case 0x4089bc:c.instructions+=9;goto B4089bc;
case 0x4089c0:c.instructions+=8;goto B4089c0;
case 0x4089c4:c.instructions+=7;goto B4089c4;
case 0x4089c8:c.instructions+=6;goto B4089c8;
case 0x4089ca:c.instructions+=5;goto B4089ca;
case 0x4089cc:c.instructions+=4;goto B4089cc;
case 0x4089cf:c.instructions+=3;goto B4089cf;
case 0x4089d3:c.instructions+=2;goto B4089d3;
case 0x4089d6:c.instructions+=1;goto B4089d6;
case 0x4089d9:goto L4089d9;
case 0x4089dc:c.instructions+=6;goto B4089dc;
case 0x4089e2:c.instructions+=5;goto B4089e2;
case 0x4089e5:c.instructions+=4;goto B4089e5;
case 0x4089e9:c.instructions+=3;goto B4089e9;
case 0x4089ea:c.instructions+=2;goto B4089ea;
case 0x4089ef:c.instructions+=1;goto B4089ef;
case 0x4089f4:goto L4089f4;
case 0x4089f8:c.instructions+=9;goto B4089f8;
case 0x4089fb:c.instructions+=8;goto B4089fb;
case 0x408a01:c.instructions+=7;goto B408a01;
case 0x408a04:c.instructions+=6;goto B408a04;
case 0x408a07:c.instructions+=5;goto B408a07;
case 0x408a0b:c.instructions+=4;goto B408a0b;
case 0x408a0c:c.instructions+=3;goto B408a0c;
case 0x408a11:c.instructions+=2;goto B408a11;
case 0x408a15:c.instructions+=1;goto B408a15;
case 0x408a1a:goto L408a1a;
case 0x408a1e:c.instructions+=8;goto B408a1e;
case 0x408a21:c.instructions+=7;goto B408a21;
case 0x408a25:c.instructions+=6;goto B408a25;
case 0x408a28:c.instructions+=5;goto B408a28;
case 0x408a2e:c.instructions+=4;goto B408a2e;
case 0x408a31:c.instructions+=3;goto B408a31;
case 0x408a33:c.instructions+=2;goto B408a33;
case 0x408a36:c.instructions+=1;goto B408a36;
case 0x408a38:goto L408a38;
case 0x408a3a:c.instructions+=2;goto B408a3a;
case 0x408a41:c.instructions+=1;goto B408a41;
case 0x408a43:goto L408a43;
case 0x408a49:c.instructions+=3;goto B408a49;
case 0x408a4b:c.instructions+=2;goto B408a4b;
case 0x408a4e:c.instructions+=1;goto B408a4e;
case 0x408a50:goto L408a50;
case 0x408a57:goto L408a57;
case 0x408a5a:c.instructions+=18;goto B408a5a;
case 0x408a5d:c.instructions+=17;goto B408a5d;
case 0x408a60:c.instructions+=16;goto B408a60;
case 0x408a63:c.instructions+=15;goto B408a63;
case 0x408a67:c.instructions+=14;goto B408a67;
case 0x408a6a:c.instructions+=13;goto B408a6a;
case 0x408a6e:c.instructions+=12;goto B408a6e;
case 0x408a72:c.instructions+=11;goto B408a72;
case 0x408a74:c.instructions+=10;goto B408a74;
case 0x408a77:c.instructions+=9;goto B408a77;
case 0x408a7a:c.instructions+=8;goto B408a7a;
case 0x408a7e:c.instructions+=7;goto B408a7e;
case 0x408a82:c.instructions+=6;goto B408a82;
case 0x408a84:c.instructions+=5;goto B408a84;
case 0x408a87:c.instructions+=4;goto B408a87;
case 0x408a8a:c.instructions+=3;goto B408a8a;
case 0x408a8d:c.instructions+=2;goto B408a8d;
case 0x408a90:c.instructions+=1;goto B408a90;
case 0x408a95:goto L408a95;
case 0x408a98:c.instructions+=15;goto B408a98;
case 0x408a9c:c.instructions+=14;goto B408a9c;
case 0x408a9f:c.instructions+=13;goto B408a9f;
case 0x408aa3:c.instructions+=12;goto B408aa3;
case 0x408aa6:c.instructions+=11;goto B408aa6;
case 0x408aaa:c.instructions+=10;goto B408aaa;
case 0x408aae:c.instructions+=9;goto B408aae;
case 0x408ab0:c.instructions+=8;goto B408ab0;
case 0x408ab4:c.instructions+=7;goto B408ab4;
case 0x408ab8:c.instructions+=6;goto B408ab8;
case 0x408abb:c.instructions+=5;goto B408abb;
case 0x408abd:c.instructions+=4;goto B408abd;
case 0x408ac3:c.instructions+=3;goto B408ac3;
case 0x408ac5:c.instructions+=2;goto B408ac5;
case 0x408ac8:c.instructions+=1;goto B408ac8;
case 0x408aca:goto L408aca;
case 0x408acd:c.instructions+=6;goto B408acd;
case 0x408ace:c.instructions+=5;goto B408ace;
case 0x408ad2:c.instructions+=4;goto B408ad2;
case 0x408ad3:c.instructions+=3;goto B408ad3;
case 0x408ad7:c.instructions+=2;goto B408ad7;
case 0x408ad8:c.instructions+=1;goto B408ad8;
case 0x408add:goto L408add;
case 0x408ae0:c.instructions+=1;goto B408ae0;
case 0x408ae2:goto L408ae2;
case 0x408aea:c.instructions+=2;goto B408aea;
case 0x408af2:c.instructions+=1;goto B408af2;
case 0x408afa:goto L408afa;
case 0x408afe:c.instructions+=3;goto B408afe;
case 0x408aff:c.instructions+=2;goto B408aff;
case 0x408b01:c.instructions+=1;goto B408b01;
case 0x408b06:goto L408b06;
case 0x408b09:c.instructions+=5;goto B408b09;
case 0x408b10:c.instructions+=4;goto B408b10;
case 0x408b16:c.instructions+=3;goto B408b16;
case 0x408b19:c.instructions+=2;goto B408b19;
case 0x408b1f:c.instructions+=1;goto B408b1f;
case 0x408b24:goto L408b24;
case 0x408b2b:c.instructions+=12;goto B408b2b;
case 0x408b2d:c.instructions+=11;goto B408b2d;
case 0x408b30:c.instructions+=10;goto B408b30;
case 0x408b34:c.instructions+=9;goto B408b34;
case 0x408b36:c.instructions+=8;goto B408b36;
case 0x408b3a:c.instructions+=7;goto B408b3a;
case 0x408b40:c.instructions+=6;goto B408b40;
case 0x408b46:c.instructions+=5;goto B408b46;
case 0x408b4c:c.instructions+=4;goto B408b4c;
case 0x408b4f:c.instructions+=3;goto B408b4f;
case 0x408b55:c.instructions+=2;goto B408b55;
case 0x408b58:c.instructions+=1;goto B408b58;
case 0x408b5d:goto L408b5d;
case 0x408b64:c.instructions+=7;goto B408b64;
case 0x408b68:c.instructions+=6;goto B408b68;
case 0x408b6e:c.instructions+=5;goto B408b6e;
case 0x408b71:c.instructions+=4;goto B408b71;
case 0x408b75:c.instructions+=3;goto B408b75;
case 0x408b79:c.instructions+=2;goto B408b79;
case 0x408b7f:c.instructions+=1;goto B408b7f;
case 0x408b83:goto L408b83;
case 0x408b87:c.instructions+=13;goto B408b87;
case 0x408b8d:c.instructions+=12;goto B408b8d;
case 0x408b8f:c.instructions+=11;goto B408b8f;
case 0x408b93:c.instructions+=10;goto B408b93;
case 0x408b95:c.instructions+=9;goto B408b95;
case 0x408b96:c.instructions+=8;goto B408b96;
case 0x408b98:c.instructions+=7;goto B408b98;
case 0x408b9b:c.instructions+=6;goto B408b9b;
case 0x408ba2:c.instructions+=5;goto B408ba2;
case 0x408ba5:c.instructions+=4;goto B408ba5;
case 0x408ba8:c.instructions+=3;goto B408ba8;
case 0x408baa:c.instructions+=2;goto B408baa;
case 0x408bac:c.instructions+=1;goto B408bac;
case 0x408bb1:goto L408bb1;
case 0x408bb5:c.instructions+=4;goto B408bb5;
case 0x408bb7:c.instructions+=3;goto B408bb7;
case 0x408bb8:c.instructions+=2;goto B408bb8;
case 0x408bba:c.instructions+=1;goto B408bba;
case 0x408bbf:goto L408bbf;
case 0x408bc3:c.instructions+=22;goto B408bc3;
case 0x408bc5:c.instructions+=21;goto B408bc5;
case 0x408bc7:c.instructions+=20;goto B408bc7;
case 0x408bca:c.instructions+=19;goto B408bca;
case 0x408bd0:c.instructions+=18;goto B408bd0;
case 0x408bd3:c.instructions+=17;goto B408bd3;
case 0x408bd5:c.instructions+=16;goto B408bd5;
case 0x408bdb:c.instructions+=15;goto B408bdb;
case 0x408bdd:c.instructions+=14;goto B408bdd;
case 0x408be0:c.instructions+=13;goto B408be0;
case 0x408be3:c.instructions+=12;goto B408be3;
case 0x408be6:c.instructions+=11;goto B408be6;
case 0x408bea:c.instructions+=10;goto B408bea;
case 0x408bee:c.instructions+=9;goto B408bee;
case 0x408bef:c.instructions+=8;goto B408bef;
case 0x408bf2:c.instructions+=7;goto B408bf2;
case 0x408bf5:c.instructions+=6;goto B408bf5;
case 0x408bf8:c.instructions+=5;goto B408bf8;
case 0x408bfb:c.instructions+=4;goto B408bfb;
case 0x408bff:c.instructions+=3;goto B408bff;
case 0x408c03:c.instructions+=2;goto B408c03;
case 0x408c07:c.instructions+=1;goto B408c07;
case 0x408c0d:goto L408c0d;
case 0x408c0f:c.instructions+=1;goto B408c0f;
case 0x408c14:goto L408c14;
case 0x408c16:c.instructions+=2;goto B408c16;
case 0x408c18:c.instructions+=1;goto B408c18;
case 0x408c1d:goto L408c1d;
case 0x408c1f:c.instructions+=1;goto B408c1f;
case 0x408c24:goto L408c24;
case 0x408c27:c.instructions+=1;goto B408c27;
case 0x408c2c:goto L408c2c;
case 0x408c2f:c.instructions+=6;goto B408c2f;
case 0x408c30:c.instructions+=5;goto B408c30;
case 0x408c31:c.instructions+=4;goto B408c31;
case 0x408c32:c.instructions+=3;goto B408c32;
case 0x408c34:c.instructions+=2;goto B408c34;
case 0x408c35:c.instructions+=1;goto B408c35;
case 0x408c40:goto L408c40;
case 0x408c41:c.instructions+=5;goto B408c41;
case 0x408c45:c.instructions+=4;goto B408c45;
case 0x408c46:c.instructions+=3;goto B408c46;
case 0x408c47:c.instructions+=2;goto B408c47;
case 0x408c49:c.instructions+=1;goto B408c49;
case 0x408c4e:goto L408c4e;
case 0x408c50:c.instructions+=1;goto B408c50;
case 0x408c52:goto L408c52;
case 0x408c55:c.instructions+=2;goto B408c55;
case 0x408c56:c.instructions+=1;goto B408c56;
case 0x408c5b:goto L408c5b;
case 0x408c5e:c.instructions+=3;goto B408c5e;
case 0x408c61:c.instructions+=2;goto B408c61;
case 0x408c62:c.instructions+=1;goto B408c62;
case 0x408c67:goto L408c67;
case 0x408c68:c.instructions+=2;goto B408c68;
case 0x408c69:c.instructions+=1;goto B408c69;
case 0x408c70:goto L408c70;
case 0x408c76:c.instructions+=1;goto B408c76;
case 0x408c80:goto L408c80;
case 0x408c83:c.instructions+=4;goto B408c83;
case 0x408c88:c.instructions+=3;goto B408c88;
case 0x408c8e:c.instructions+=2;goto B408c8e;
case 0x408c94:c.instructions+=1;goto B408c94;
case 0x408ca0:goto L408ca0;
case 0x408ca4:c.instructions+=2;goto B408ca4;
case 0x408ca7:c.instructions+=1;goto B408ca7;
case 0x408ca9:goto L408ca9;
case 0x408cac:c.instructions+=1;goto B408cac;
case 0x408cae:goto L408cae;
case 0x408caf:c.instructions+=4;goto B408caf;
case 0x408cb2:c.instructions+=3;goto B408cb2;
case 0x408cb4:c.instructions+=2;goto B408cb4;
case 0x408cb6:c.instructions+=1;goto B408cb6;
case 0x408cbb:goto L408cbb;
case 0x408cbd:c.instructions+=2;goto B408cbd;
case 0x408cbf:c.instructions+=1;goto B408cbf;
case 0x408cc4:goto L408cc4;
case 0x408cc5:goto L408cc5;
case 0x408cd0:goto L408cd0;
case 0x408cd5:c.instructions+=1;goto B408cd5;
case 0x408ce0:goto L408ce0;
case 0x408ce6:c.instructions+=2;goto B408ce6;
case 0x408ce8:c.instructions+=1;goto B408ce8;
case 0x408cea:goto L408cea;
case 0x408cef:c.instructions+=1;goto B408cef;
case 0x408cf0:goto L408cf0;
case 0x408cf2:c.instructions+=1;goto B408cf2;
case 0x408cf5:goto L408cf5;
case 0x408cf7:c.instructions+=2;goto B408cf7;
case 0x408cfc:c.instructions+=1;goto B408cfc;
case 0x408cfe:goto L408cfe;
case 0x408d03:goto L408d03;
case 0x408d10:goto L408d10;
case 0x408d16:c.instructions+=2;goto B408d16;
case 0x408d18:c.instructions+=1;goto B408d18;
case 0x408d1a:goto L408d1a;
case 0x408d1c:c.instructions+=2;goto B408d1c;
case 0x408d1e:c.instructions+=1;goto B408d1e;
case 0x408d20:goto L408d20;
case 0x408d27:c.instructions+=1;goto B408d27;
case 0x408d2a:goto L408d2a;
case 0x408d2c:c.instructions+=1;goto B408d2c;
case 0x408d2f:goto L408d2f;
case 0x408d31:c.instructions+=1;goto B408d31;
case 0x408d34:goto L408d34;
case 0x408d36:c.instructions+=1;goto B408d36;
case 0x408d38:goto L408d38;
case 0x408d3c:c.instructions+=2;goto B408d3c;
case 0x408d43:c.instructions+=1;goto B408d43;
case 0x408d46:goto L408d46;
case 0x408d4a:c.instructions+=2;goto B408d4a;
case 0x408d51:c.instructions+=1;goto B408d51;
case 0x408d60:goto L408d60;
case 0x408d61:c.instructions+=3;goto B408d61;
case 0x408d63:c.instructions+=2;goto B408d63;
case 0x408d65:c.instructions+=1;goto B408d65;
case 0x408d68:goto L408d68;
case 0x408d6a:c.instructions+=1;goto B408d6a;
case 0x408d6c:goto L408d6c;
case 0x408d6e:c.instructions+=1;goto B408d6e;
case 0x408d73:goto L408d73;
case 0x408d76:c.instructions+=6;goto B408d76;
case 0x408d78:c.instructions+=5;goto B408d78;
case 0x408d7a:c.instructions+=4;goto B408d7a;
case 0x408d7c:c.instructions+=3;goto B408d7c;
case 0x408d7e:c.instructions+=2;goto B408d7e;
case 0x408d80:c.instructions+=1;goto B408d80;
case 0x408d83:goto L408d83;
case 0x408d8a:goto L408d8a;
case 0x408d8b:c.instructions+=1;goto B408d8b;
case 0x408d90:goto L408d90;
case 0x408d91:c.instructions+=9;goto B408d91;
case 0x408d96:c.instructions+=8;goto B408d96;
case 0x408d9c:c.instructions+=7;goto B408d9c;
case 0x408da0:c.instructions+=6;goto B408da0;
case 0x408da4:c.instructions+=5;goto B408da4;
case 0x408daa:c.instructions+=4;goto B408daa;
case 0x408db0:c.instructions+=3;goto B408db0;
case 0x408db2:c.instructions+=2;goto B408db2;
case 0x408db5:c.instructions+=1;goto B408db5;
case 0x408db7:goto L408db7;
case 0x408dbc:c.instructions+=2;goto B408dbc;
case 0x408dbd:c.instructions+=1;goto B408dbd;
case 0x408dbe:goto L408dbe;
case 0x408dc0:c.instructions+=2;goto B408dc0;
case 0x408dc1:c.instructions+=1;goto B408dc1;
case 0x408dd0:goto L408dd0;
case 0x408dd6:c.instructions+=1;goto B408dd6;
case 0x408de0:goto L408de0;
case 0x408de3:c.instructions+=11;goto B408de3;
case 0x408de4:c.instructions+=10;goto B408de4;
case 0x408de5:c.instructions+=9;goto B408de5;
case 0x408de6:c.instructions+=8;goto B408de6;
case 0x408de8:c.instructions+=7;goto B408de8;
case 0x408deb:c.instructions+=6;goto B408deb;
case 0x408dee:c.instructions+=5;goto B408dee;
case 0x408df1:c.instructions+=4;goto B408df1;
case 0x408df3:c.instructions+=3;goto B408df3;
case 0x408df5:c.instructions+=2;goto B408df5;
case 0x408dfd:c.instructions+=1;goto B408dfd;
case 0x408e03:goto L408e03;
case 0x408e04:goto L408e04;
case 0x408e05:c.instructions+=2;goto B408e05;
case 0x408e07:c.instructions+=1;goto B408e07;
case 0x408e0c:goto L408e0c;
case 0x408e0f:c.instructions+=6;goto B408e0f;
case 0x408e15:c.instructions+=5;goto B408e15;
case 0x408e17:c.instructions+=4;goto B408e17;
case 0x408e18:c.instructions+=3;goto B408e18;
case 0x408e19:c.instructions+=2;goto B408e19;
case 0x408e1d:c.instructions+=1;goto B408e1d;
case 0x408e22:goto L408e22;
case 0x408e25:c.instructions+=6;goto B408e25;
case 0x408e29:c.instructions+=5;goto B408e29;
case 0x408e2c:c.instructions+=4;goto B408e2c;
case 0x408e2e:c.instructions+=3;goto B408e2e;
case 0x408e30:c.instructions+=2;goto B408e30;
case 0x408e33:c.instructions+=1;goto B408e33;
case 0x408e35:goto L408e35;
case 0x408e39:c.instructions+=1;goto B408e39;
case 0x408e3b:goto L408e3b;
case 0x408e3d:goto L408e3d;
case 0x408e40:c.instructions+=4;goto B408e40;
case 0x408e44:c.instructions+=3;goto B408e44;
case 0x408e46:c.instructions+=2;goto B408e46;
case 0x408e49:c.instructions+=1;goto B408e49;
case 0x408e4b:goto L408e4b;
case 0x408e4f:c.instructions+=3;goto B408e4f;
case 0x408e50:c.instructions+=2;goto B408e50;
case 0x408e52:c.instructions+=1;goto B408e52;
case 0x408e54:goto L408e54;
case 0x408e56:goto L408e56;
case 0x408e58:c.instructions+=1;goto B408e58;
case 0x408e5d:goto L408e5d;
case 0x408e60:c.instructions+=6;goto B408e60;
case 0x408e62:c.instructions+=5;goto B408e62;
case 0x408e64:c.instructions+=4;goto B408e64;
case 0x408e66:c.instructions+=3;goto B408e66;
case 0x408e68:c.instructions+=2;goto B408e68;
case 0x408e6a:c.instructions+=1;goto B408e6a;
case 0x408e6d:goto L408e6d;
case 0x408e74:goto L408e74;
case 0x408e77:c.instructions+=6;goto B408e77;
case 0x408e7d:c.instructions+=5;goto B408e7d;
case 0x408e7e:c.instructions+=4;goto B408e7e;
case 0x408e84:c.instructions+=3;goto B408e84;
case 0x408e86:c.instructions+=2;goto B408e86;
case 0x408e89:c.instructions+=1;goto B408e89;
case 0x408e8b:goto L408e8b;
case 0x408e8e:c.instructions+=2;goto B408e8e;
case 0x408e90:c.instructions+=1;goto B408e90;
case 0x408e93:goto L408e93;
case 0x408e99:c.instructions+=3;goto B408e99;
case 0x408e9b:c.instructions+=2;goto B408e9b;
case 0x408e9e:c.instructions+=1;goto B408e9e;
case 0x408ea0:goto L408ea0;
case 0x408ea2:c.instructions+=1;goto B408ea2;
case 0x408ea7:goto L408ea7;
case 0x408eaa:c.instructions+=6;goto B408eaa;
case 0x408eac:c.instructions+=5;goto B408eac;
case 0x408eae:c.instructions+=4;goto B408eae;
case 0x408eb0:c.instructions+=3;goto B408eb0;
case 0x408eb2:c.instructions+=2;goto B408eb2;
case 0x408eb4:c.instructions+=1;goto B408eb4;
case 0x408eb7:goto L408eb7;
case 0x408ebe:goto L408ebe;
case 0x408ebf:c.instructions+=4;goto B408ebf;
case 0x408ec0:c.instructions+=3;goto B408ec0;
case 0x408ec1:c.instructions+=2;goto B408ec1;
case 0x408ec4:c.instructions+=1;goto B408ec4;
case 0x408ed0:goto L408ed0;
case 0x408ed3:c.instructions+=3;goto B408ed3;
case 0x408ed9:c.instructions+=2;goto B408ed9;
case 0x408edb:c.instructions+=1;goto B408edb;
case 0x408edd:goto L408edd;
case 0x408edf:c.instructions+=1;goto B408edf;
case 0x408ee4:goto L408ee4;
case 0x408ef0:goto L408ef0;
case 0x408ef1:c.instructions+=8;goto B408ef1;
case 0x408ef2:c.instructions+=7;goto B408ef2;
case 0x408ef6:c.instructions+=6;goto B408ef6;
case 0x408ef9:c.instructions+=5;goto B408ef9;
case 0x408efb:c.instructions+=4;goto B408efb;
case 0x408efc:c.instructions+=3;goto B408efc;
case 0x408f00:c.instructions+=2;goto B408f00;
case 0x408f08:c.instructions+=1;goto B408f08;
case 0x408f0a:goto L408f0a;
case 0x408f0c:c.instructions+=2;goto B408f0c;
case 0x408f0e:c.instructions+=1;goto B408f0e;
case 0x408f10:goto L408f10;
case 0x408f16:c.instructions+=8;goto B408f16;
case 0x408f18:c.instructions+=7;goto B408f18;
case 0x408f1d:c.instructions+=6;goto B408f1d;
case 0x408f1f:c.instructions+=5;goto B408f1f;
case 0x408f22:c.instructions+=4;goto B408f22;
case 0x408f24:c.instructions+=3;goto B408f24;
case 0x408f27:c.instructions+=2;goto B408f27;
case 0x408f29:c.instructions+=1;goto B408f29;
case 0x408f2d:goto L408f2d;
case 0x408f2f:c.instructions+=6;goto B408f2f;
case 0x408f31:c.instructions+=5;goto B408f31;
case 0x408f33:c.instructions+=4;goto B408f33;
case 0x408f37:c.instructions+=3;goto B408f37;
case 0x408f38:c.instructions+=2;goto B408f38;
case 0x408f3a:c.instructions+=1;goto B408f3a;
case 0x408f3f:goto L408f3f;
case 0x408f42:c.instructions+=2;goto B408f42;
case 0x408f44:c.instructions+=1;goto B408f44;
case 0x408f46:goto L408f46;
case 0x408f4a:c.instructions+=2;goto B408f4a;
case 0x408f4c:c.instructions+=1;goto B408f4c;
case 0x408f4e:goto L408f4e;
case 0x408f54:c.instructions+=1;goto B408f54;
case 0x408f56:goto L408f56;
case 0x408f5c:c.instructions+=7;goto B408f5c;
case 0x408f62:c.instructions+=6;goto B408f62;
case 0x408f64:c.instructions+=5;goto B408f64;
case 0x408f66:c.instructions+=4;goto B408f66;
case 0x408f67:c.instructions+=3;goto B408f67;
case 0x408f68:c.instructions+=2;goto B408f68;
case 0x408f69:c.instructions+=1;goto B408f69;
case 0x408f6a:goto L408f6a;
case 0x408f70:goto L408f70;
case 0x408f71:c.instructions+=3;goto B408f71;
case 0x408f72:c.instructions+=2;goto B408f72;
case 0x408f73:c.instructions+=1;goto B408f73;
case 0x408f80:goto L408f80;
case 0x408f84:c.instructions+=4;goto B408f84;
case 0x408f8a:c.instructions+=3;goto B408f8a;
case 0x408f8f:c.instructions+=2;goto B408f8f;
case 0x408f92:c.instructions+=1;goto B408f92;
case 0x408f94:goto L408f94;
case 0x408f97:c.instructions+=3;goto B408f97;
case 0x408f99:c.instructions+=2;goto B408f99;
case 0x408f9c:c.instructions+=1;goto B408f9c;
case 0x408f9f:goto L408f9f;
case 0x408fb0:goto L408fb0;
case 0x408fb6:c.instructions+=12;goto B408fb6;
case 0x408fb7:c.instructions+=11;goto B408fb7;
case 0x408fb8:c.instructions+=10;goto B408fb8;
case 0x408fbc:c.instructions+=9;goto B408fbc;
case 0x408fbd:c.instructions+=8;goto B408fbd;
case 0x408fbf:c.instructions+=7;goto B408fbf;
case 0x408fc4:c.instructions+=6;goto B408fc4;
case 0x408fc6:c.instructions+=5;goto B408fc6;
case 0x408fc9:c.instructions+=4;goto B408fc9;
case 0x408fd0:c.instructions+=3;goto B408fd0;
case 0x408fd3:c.instructions+=2;goto B408fd3;
case 0x408fd5:c.instructions+=1;goto B408fd5;
case 0x408fd7:goto L408fd7;
case 0x408fda:c.instructions+=1;goto B408fda;
case 0x408fdc:goto L408fdc;
case 0x408fde:c.instructions+=3;goto B408fde;
case 0x408fe0:c.instructions+=2;goto B408fe0;
case 0x408fe3:c.instructions+=1;goto B408fe3;
case 0x408fe5:goto L408fe5;
case 0x408fe7:c.instructions+=4;goto B408fe7;
case 0x408fe9:c.instructions+=3;goto B408fe9;
case 0x408feb:c.instructions+=2;goto B408feb;
case 0x408fef:c.instructions+=1;goto B408fef;
case 0x408ff1:goto L408ff1;
case 0x408ff4:c.instructions+=2;goto B408ff4;
case 0x408ff6:c.instructions+=1;goto B408ff6;
case 0x408ff8:goto L408ff8;
case 0x408ffb:c.instructions+=1;goto B408ffb;
case 0x408ffd:goto L408ffd;
default:missing_instruction(c.pc);}
B408001:L408001:{c.instructions+=1;NFSU2_TR(0x408001);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L408004;}}
}
B408003:L408003:{c.instructions+=1;NFSU2_TR(0x408003);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408004:L408004:{c.instructions+=2;NFSU2_TR(0x408004);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40800a:{NFSU2_TR(0x40800a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40800b:L40800b:{c.instructions+=2;NFSU2_TR(0x40800b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40800e:{NFSU2_TR(0x40800e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40803a;}}
}
B408010:L408010:{c.instructions+=3;NFSU2_TR(0x408010);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408016:{NFSU2_TR(0x408016);
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
B408018:{NFSU2_TR(0x408018);
if(r1(R+518)){{goto L4080a6;}}
}
B40801e:L40801e:{c.instructions+=6;NFSU2_TR(0x40801e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408024:{NFSU2_TR(0x408024);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408027:{NFSU2_TR(0x408027);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40802d:{NFSU2_TR(0x40802d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40802e:{NFSU2_TR(0x40802e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B408030:{NFSU2_TR(0x408030);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4080a6;}}
}
B408032:L408032:{c.instructions+=3;NFSU2_TR(0x408032);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408033:{NFSU2_TR(0x408033);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408039:{NFSU2_TR(0x408039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40803a:L40803a:{c.instructions+=2;NFSU2_TR(0x40803a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40803d:{NFSU2_TR(0x40803d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408085;}}
}
B40803f:L40803f:{c.instructions+=3;NFSU2_TR(0x40803f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408045:{NFSU2_TR(0x408045);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B408049:{NFSU2_TR(0x408049);
if(r1(R+518)){{goto L4080a6;}}
}
B40804b:L40804b:{c.instructions+=6;NFSU2_TR(0x40804b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40804c:{NFSU2_TR(0x40804c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408052:{NFSU2_TR(0x408052);
w4(R+8,u32(0xfffffffeull));
}
B408057:{NFSU2_TR(0x408057);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B408059:{NFSU2_TR(0x408059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40805a:{NFSU2_TR(0x40805a);
if(r1(R+518)){{goto L40807e;}}
}
B40805c:L40805c:{c.instructions+=7;NFSU2_TR(0x40805c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408062:{NFSU2_TR(0x408062);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408068:{NFSU2_TR(0x408068);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40806b:{NFSU2_TR(0x40806b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408071:{NFSU2_TR(0x408071);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B408072:{NFSU2_TR(0x408072);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B408074:{NFSU2_TR(0x408074);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L408077;}}
}
B408076:L408076:{c.instructions+=1;NFSU2_TR(0x408076);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408077:L408077:{c.instructions+=2;NFSU2_TR(0x408077);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40807d:{NFSU2_TR(0x40807d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40807e:L40807e:{c.instructions+=2;NFSU2_TR(0x40807e);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B408084:{NFSU2_TR(0x408084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408085:L408085:{c.instructions+=2;NFSU2_TR(0x408085);
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
B408087:{NFSU2_TR(0x408087);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4080a6;}}
}
B408089:L408089:{c.instructions+=4;NFSU2_TR(0x408089);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40808f:{NFSU2_TR(0x40808f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408092:{NFSU2_TR(0x408092);
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
B408094:{NFSU2_TR(0x408094);
if(r1(R+518)){{goto L4080a6;}}
}
B408096:L408096:{c.instructions+=6;NFSU2_TR(0x408096);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40809a:{NFSU2_TR(0x40809a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40809b:{NFSU2_TR(0x40809b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40809f:{NFSU2_TR(0x40809f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4080a0:{NFSU2_TR(0x4080a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4080a1:{NFSU2_TR(0x4080a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4080a6ull));
TAIL_STATIC(0x50d520u,50d);
}
B4080a6:L4080a6:{c.instructions+=1;NFSU2_TR(0x4080a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4080b0:L4080b0:{c.instructions+=3;NFSU2_TR(0x4080b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4080b4:{NFSU2_TR(0x4080b4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4080b6:{NFSU2_TR(0x4080b6);
if(r1(R+518)){{goto L408171;}}
}
B4080bc:L4080bc:{c.instructions+=4;NFSU2_TR(0x4080bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4080c0:{NFSU2_TR(0x4080c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4080c6:{NFSU2_TR(0x4080c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4080c9:{NFSU2_TR(0x4080c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4080f2;}}
}
B4080cb:L4080cb:{c.instructions+=3;NFSU2_TR(0x4080cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4080d1:{NFSU2_TR(0x4080d1);
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
B4080d3:{NFSU2_TR(0x4080d3);
if(r1(R+518)){{goto L408171;}}
}
B4080d9:L4080d9:{c.instructions+=4;NFSU2_TR(0x4080d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4080df:{NFSU2_TR(0x4080df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4080e5:{NFSU2_TR(0x4080e5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4080e8:{NFSU2_TR(0x4080e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4080eb;}}
}
B4080ea:L4080ea:{c.instructions+=1;NFSU2_TR(0x4080ea);
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
B4080eb:L4080eb:{c.instructions+=2;NFSU2_TR(0x4080eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4080f1:{NFSU2_TR(0x4080f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4080f2:L4080f2:{c.instructions+=2;NFSU2_TR(0x4080f2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4080f5:{NFSU2_TR(0x4080f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40810e;}}
}
B4080f7:L4080f7:{c.instructions+=3;NFSU2_TR(0x4080f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4080fd:{NFSU2_TR(0x4080fd);
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
B4080ff:{NFSU2_TR(0x4080ff);
if(r1(R+518)){{goto L408171;}}
}
B408101:L408101:{c.instructions+=2;NFSU2_TR(0x408101);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B408104:{NFSU2_TR(0x408104);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L408171;}}
}
B408106:L408106:{c.instructions+=3;NFSU2_TR(0x408106);
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
B408107:{NFSU2_TR(0x408107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40810d:{NFSU2_TR(0x40810d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40810e:L40810e:{c.instructions+=2;NFSU2_TR(0x40810e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B408111:{NFSU2_TR(0x408111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408150;}}
}
B408113:L408113:{c.instructions+=3;NFSU2_TR(0x408113);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408119:{NFSU2_TR(0x408119);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B40811d:{NFSU2_TR(0x40811d);
if(r1(R+518)){{goto L408171;}}
}
B40811f:L40811f:{c.instructions+=6;NFSU2_TR(0x40811f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408120:{NFSU2_TR(0x408120);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408126:{NFSU2_TR(0x408126);
w4(R+8,u32(0xfffffffeull));
}
B40812b:{NFSU2_TR(0x40812b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40812d:{NFSU2_TR(0x40812d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40812e:{NFSU2_TR(0x40812e);
if(r1(R+518)){{goto L408149;}}
}
B408130:L408130:{c.instructions+=4;NFSU2_TR(0x408130);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408136:{NFSU2_TR(0x408136);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40813c:{NFSU2_TR(0x40813c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B40813f:{NFSU2_TR(0x40813f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L408142;}}
}
B408141:L408141:{c.instructions+=1;NFSU2_TR(0x408141);
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
B408142:L408142:{c.instructions+=2;NFSU2_TR(0x408142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408148:{NFSU2_TR(0x408148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408149:L408149:{c.instructions+=2;NFSU2_TR(0x408149);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
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
B40814f:{NFSU2_TR(0x40814f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408150:L408150:{c.instructions+=2;NFSU2_TR(0x408150);
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
B408152:{NFSU2_TR(0x408152);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408171;}}
}
B408154:L408154:{c.instructions+=4;NFSU2_TR(0x408154);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40815a:{NFSU2_TR(0x40815a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40815d:{NFSU2_TR(0x40815d);
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
B40815f:{NFSU2_TR(0x40815f);
if(r1(R+518)){{goto L408171;}}
}
B408161:L408161:{c.instructions+=6;NFSU2_TR(0x408161);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408165:{NFSU2_TR(0x408165);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408166:{NFSU2_TR(0x408166);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40816a:{NFSU2_TR(0x40816a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40816b:{NFSU2_TR(0x40816b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40816c:{NFSU2_TR(0x40816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408171ull));
TAIL_STATIC(0x50d520u,50d);
}
B408171:L408171:{c.instructions+=1;NFSU2_TR(0x408171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408180:L408180:{c.instructions+=3;NFSU2_TR(0x408180);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408184:{NFSU2_TR(0x408184);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B40818b:{NFSU2_TR(0x40818b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4081f3;}}
}
B40818d:L40818d:{c.instructions+=3;NFSU2_TR(0x40818d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408191:{NFSU2_TR(0x408191);
w1(R+512,u8((r4(R+0))<(u32(0x9full))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9full))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B408196:{NFSU2_TR(0x408196);
if(r1(R+518)){{goto L4081d6;}}
}
B408198:L408198:{c.instructions+=2;NFSU2_TR(0x408198);
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
B408199:{NFSU2_TR(0x408199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4081f3;}}
}
B40819b:L40819b:{c.instructions+=8;NFSU2_TR(0x40819b);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4081a0:{NFSU2_TR(0x4081a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4081a4:{NFSU2_TR(0x4081a4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4081a8:{NFSU2_TR(0x4081a8);
{u32 ea_=u32(u32(7879452u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4081ae:{NFSU2_TR(0x4081ae);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4081b4:{NFSU2_TR(0x4081b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4081b6:{NFSU2_TR(0x4081b6);
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
B4081b9:{NFSU2_TR(0x4081b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4081c3;}}
}
B4081bb:L4081bb:{c.instructions+=2;NFSU2_TR(0x4081bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4081bd:{NFSU2_TR(0x4081bd);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4081c3:L4081c3:{c.instructions+=4;NFSU2_TR(0x4081c3);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4081c9:{NFSU2_TR(0x4081c9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4081cf:{NFSU2_TR(0x4081cf);
{u32 ea_=u32(r4(R+4)+u32(756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4081d5:{NFSU2_TR(0x4081d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4081d6:L4081d6:{c.instructions+=3;NFSU2_TR(0x4081d6);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4081da:{NFSU2_TR(0x4081da);
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
B4081dc:{NFSU2_TR(0x4081dc);
if(r1(R+518)){{goto L4081e9;}}
}
B4081de:L4081de:{c.instructions+=2;NFSU2_TR(0x4081de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4081e8:{NFSU2_TR(0x4081e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4081e9:L4081e9:{c.instructions+=1;NFSU2_TR(0x4081e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4081f3:L4081f3:{c.instructions+=1;NFSU2_TR(0x4081f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408200:L408200:{c.instructions+=3;NFSU2_TR(0x408200);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408204:{NFSU2_TR(0x408204);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34b00ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B40820a:{NFSU2_TR(0x40820a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40821a;}}
}
B40820c:L40820c:{c.instructions+=4;NFSU2_TR(0x40820c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40820f:{NFSU2_TR(0x40820f);
__builtin_memmove(gp(0x81cb60),(R+0),4);
}
B408214:{NFSU2_TR(0x408214);
w4(R+0,u32(0x1ull));
}
B408219:{NFSU2_TR(0x408219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40821a:L40821a:{c.instructions+=2;NFSU2_TR(0x40821a);
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
B40821c:{NFSU2_TR(0x40821c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408220:L408220:{c.instructions+=3;NFSU2_TR(0x408220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408224:{NFSU2_TR(0x408224);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x34b00ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x34b00ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x34b00ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B40822a:{NFSU2_TR(0x40822a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40823c;}}
}
B40822c:L40822c:{c.instructions+=3;NFSU2_TR(0x40822c);
s4(0x81cb60,u32(0x0ull));
}
B408236:{NFSU2_TR(0x408236);
w4(R+0,u32(0x1ull));
}
B40823b:{NFSU2_TR(0x40823b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40823c:L40823c:{c.instructions+=2;NFSU2_TR(0x40823c);
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
B40823e:{NFSU2_TR(0x40823e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408240:L408240:{c.instructions+=5;NFSU2_TR(0x408240);
{u32 ea_=u32(u32(8293900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408246:{NFSU2_TR(0x408246);
{u32 ea_=u32(u32(7878256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40824c:{NFSU2_TR(0x40824c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40824e:{NFSU2_TR(0x40824e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408251:{NFSU2_TR(0x408251);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40825b;}}
}
B408253:L408253:{c.instructions+=2;NFSU2_TR(0x408253);
{u32 ea_=u32(u32(8293900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408259:{NFSU2_TR(0x408259);
{goto L408261;}
}
B40825b:L40825b:{c.instructions+=1;NFSU2_TR(0x40825b);
{u32 ea_=u32(u32(7878256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408261:L408261:{c.instructions+=4;NFSU2_TR(0x408261);
{u32 ea_=u32(u32(7879488u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B408267:{NFSU2_TR(0x408267);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408269:{NFSU2_TR(0x408269);
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
B40826c:{NFSU2_TR(0x40826c);
if(r1(R+518)){{goto L408276;}}
}
B40826e:L40826e:{c.instructions+=2;NFSU2_TR(0x40826e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408270:{NFSU2_TR(0x408270);
{u32 ea_=u32(u32(7879488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408276:L408276:{c.instructions+=1;NFSU2_TR(0x408276);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408280:L408280:{c.instructions+=13;NFSU2_TR(0x408280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408281:{NFSU2_TR(0x408281);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B408286:{NFSU2_TR(0x408286);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408287:{NFSU2_TR(0x408287);
__builtin_memmove((R+24),(R+4),4);
}
B408289:{NFSU2_TR(0x408289);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B40828f:{NFSU2_TR(0x40828f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408293:{NFSU2_TR(0x408293);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B408297:{NFSU2_TR(0x408297);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408298:{NFSU2_TR(0x408298);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40829e:{NFSU2_TR(0x40829e);
{u32 ea_=u32(u32(7879492u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4082a4:{NFSU2_TR(0x4082a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4082a6:{NFSU2_TR(0x4082a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4082a9:{NFSU2_TR(0x4082a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4082b5;}}
}
B4082ab:L4082ab:{c.instructions+=1;NFSU2_TR(0x4082ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4082b5:L4082b5:{c.instructions+=5;NFSU2_TR(0x4082b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4082bb:{NFSU2_TR(0x4082bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4082bf:{NFSU2_TR(0x4082bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4082c0:{NFSU2_TR(0x4082c0);
__builtin_memmove((R+4),(R+28),4);
}
B4082c2:{NFSU2_TR(0x4082c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4082c7ull));
TAIL_STATIC(0x60be90u,60b);
}
B4082c7:L4082c7:{c.instructions+=2;NFSU2_TR(0x4082c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4082c9:{NFSU2_TR(0x4082c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408322;}}
}
B4082cb:L4082cb:{c.instructions+=3;NFSU2_TR(0x4082cb);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4082d1:{NFSU2_TR(0x4082d1);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4082d6:{NFSU2_TR(0x4082d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4082dbull));
TAIL_STATIC(0x5ea500u,5ea);
}
B4082db:L4082db:{c.instructions+=4;NFSU2_TR(0x4082db);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4082df:{NFSU2_TR(0x4082df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4082e1:{NFSU2_TR(0x4082e1);
__builtin_memmove((R+4),(R+24),4);
}
B4082e3:{NFSU2_TR(0x4082e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4082e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4082e6:L4082e6:{c.instructions+=2;NFSU2_TR(0x4082e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4082e9:{NFSU2_TR(0x4082e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4082ed;}}
}
B4082eb:L4082eb:{c.instructions+=1;NFSU2_TR(0x4082eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4082ed:L4082ed:{c.instructions+=7;NFSU2_TR(0x4082ed);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4082f1:{NFSU2_TR(0x4082f1);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B4082f7:{NFSU2_TR(0x4082f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4082fa:{NFSU2_TR(0x4082fa);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1328u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408301:{NFSU2_TR(0x408301);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408303:{NFSU2_TR(0x408303);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B408306:{NFSU2_TR(0x408306);
if(r1(R+514)){{goto L408310;}}
}
B408308:L408308:{c.instructions+=5;NFSU2_TR(0x408308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408309:{NFSU2_TR(0x408309);
w1(R+0,u8(0x1ull));
}
B40830b:{NFSU2_TR(0x40830b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40830c:{NFSU2_TR(0x40830c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40830d:{NFSU2_TR(0x40830d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408310:L408310:{c.instructions+=3;NFSU2_TR(0x408310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408316:{NFSU2_TR(0x408316);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40831c:{NFSU2_TR(0x40831c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408322:L408322:{c.instructions+=5;NFSU2_TR(0x408322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408323:{NFSU2_TR(0x408323);
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
B408325:{NFSU2_TR(0x408325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408326:{NFSU2_TR(0x408326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408327:{NFSU2_TR(0x408327);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408330:L408330:{c.instructions+=3;NFSU2_TR(0x408330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408336:{NFSU2_TR(0x408336);
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
B408338:{NFSU2_TR(0x408338);
if(r1(R+518)){{goto L408349;}}
}
B40833a:L40833a:{c.instructions+=5;NFSU2_TR(0x40833a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40833d:{NFSU2_TR(0x40833d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40833f:{NFSU2_TR(0x40833f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408340:{NFSU2_TR(0x408340);
__builtin_memmove((R+4),(R+0),4);
}
B408342:{NFSU2_TR(0x408342);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408345ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408345:L408345:{c.instructions+=2;NFSU2_TR(0x408345);
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
B408347:{NFSU2_TR(0x408347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408377;}}
}
B408349:L408349:{c.instructions+=3;NFSU2_TR(0x408349);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B40834e:{NFSU2_TR(0x40834e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408350:{NFSU2_TR(0x408350);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408368;}}
}
B408352:L408352:{c.instructions+=3;NFSU2_TR(0x408352);
__builtin_memmove((R+0),gp(0x890108),4);
}
B408357:{NFSU2_TR(0x408357);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B408359:{NFSU2_TR(0x408359);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408368;}}
}
B40835b:L40835b:{c.instructions+=7;NFSU2_TR(0x40835b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40835d:{NFSU2_TR(0x40835d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40835f:{NFSU2_TR(0x40835f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408361:{NFSU2_TR(0x408361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B408364:{NFSU2_TR(0x408364);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408365:{NFSU2_TR(0x408365);
__builtin_memmove((R+0),(R+8),4);
}
B408367:{NFSU2_TR(0x408367);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408368:L408368:{c.instructions+=6;NFSU2_TR(0x408368);
w4(R+0,u32(0x1ull));
}
B40836d:{NFSU2_TR(0x40836d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40836f:{NFSU2_TR(0x40836f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408371:{NFSU2_TR(0x408371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B408374:{NFSU2_TR(0x408374);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408375:{NFSU2_TR(0x408375);
__builtin_memmove((R+0),(R+8),4);
}
B408377:L408377:{c.instructions+=1;NFSU2_TR(0x408377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408380:L408380:{c.instructions+=2;NFSU2_TR(0x408380);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B408385:{NFSU2_TR(0x408385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408390:L408390:{c.instructions+=3;NFSU2_TR(0x408390);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408394:{NFSU2_TR(0x408394);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40839b:{NFSU2_TR(0x40839b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4083a0:L4083a0:{c.instructions+=10;NFSU2_TR(0x4083a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4083a1:{NFSU2_TR(0x4083a1);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4083a6:{NFSU2_TR(0x4083a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x708ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4083ac:{NFSU2_TR(0x4083ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4083b0:{NFSU2_TR(0x4083b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4083b4:{NFSU2_TR(0x4083b4);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4083ba:{NFSU2_TR(0x4083ba);
{u32 ea_=u32(u32(7879504u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4083c0:{NFSU2_TR(0x4083c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4083c2:{NFSU2_TR(0x4083c2);
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
B4083c5:{NFSU2_TR(0x4083c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4083ce;}}
}
B4083c7:L4083c7:{c.instructions+=3;NFSU2_TR(0x4083c7);
w4(R+0,u32(0x1ull));
}
B4083cc:{NFSU2_TR(0x4083cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4083cd:{NFSU2_TR(0x4083cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4083ce:L4083ce:{c.instructions+=3;NFSU2_TR(0x4083ce);
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
B4083d0:{NFSU2_TR(0x4083d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4083d1:{NFSU2_TR(0x4083d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4083e0:L4083e0:{c.instructions+=7;NFSU2_TR(0x4083e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4083e1:{NFSU2_TR(0x4083e1);
__builtin_memmove((R+0),gp(0x783b48),4);
}
B4083e6:{NFSU2_TR(0x4083e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4083e7:{NFSU2_TR(0x4083e7);
__builtin_memmove((R+24),(R+4),4);
}
B4083e9:{NFSU2_TR(0x4083e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4083eb:{NFSU2_TR(0x4083eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4083ef:{NFSU2_TR(0x4083ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4083f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4083f2:L4083f2:{c.instructions+=4;NFSU2_TR(0x4083f2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4083f8:{NFSU2_TR(0x4083f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4083fa:{NFSU2_TR(0x4083fa);
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
B4083fd:{NFSU2_TR(0x4083fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408426;}}
}
B4083ff:L4083ff:{c.instructions+=4;NFSU2_TR(0x4083ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408405:{NFSU2_TR(0x408405);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B408408:{NFSU2_TR(0x408408);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
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
B40840b:{NFSU2_TR(0x40840b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408426;}}
}
B40840d:L40840d:{c.instructions+=5;NFSU2_TR(0x40840d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408410:{NFSU2_TR(0x408410);
{u32 ea_=u32(u32(8295796u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408416:{NFSU2_TR(0x408416);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408418:{NFSU2_TR(0x408418);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40841b:{NFSU2_TR(0x40841b);
if(r1(R+514)){{goto L408426;}}
}
B40841d:L40841d:{c.instructions+=4;NFSU2_TR(0x40841d);
{u32 ea_=u32(u32(7879500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408423:{NFSU2_TR(0x408423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408424:{NFSU2_TR(0x408424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408425:{NFSU2_TR(0x408425);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408426:L408426:{c.instructions+=4;NFSU2_TR(0x408426);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40842a:{NFSU2_TR(0x40842a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40842b:{NFSU2_TR(0x40842b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40842c:{NFSU2_TR(0x40842c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408430:L408430:{c.instructions+=6;NFSU2_TR(0x408430);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408431:{NFSU2_TR(0x408431);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B408436:{NFSU2_TR(0x408436);
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
B408438:{NFSU2_TR(0x408438);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408439:{NFSU2_TR(0x408439);
__builtin_memmove((R+24),(R+4),4);
}
B40843b:{NFSU2_TR(0x40843b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408495;}}
}
B40843d:L40843d:{c.instructions+=3;NFSU2_TR(0x40843d);
__builtin_memmove((R+0),gp(0x890108),4);
}
B408442:{NFSU2_TR(0x408442);
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
B408444:{NFSU2_TR(0x408444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408495;}}
}
B408446:L408446:{c.instructions+=2;NFSU2_TR(0x408446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408448:{NFSU2_TR(0x408448);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40844bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40844b:L40844b:{c.instructions+=17;NFSU2_TR(0x40844b);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B408451:{NFSU2_TR(0x408451);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B408453:{NFSU2_TR(0x408453);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B408455:{NFSU2_TR(0x408455);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B408458:{NFSU2_TR(0x408458);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B408459:{NFSU2_TR(0x408459);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B40845b:{NFSU2_TR(0x40845b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408461:{NFSU2_TR(0x408461);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B408464:{NFSU2_TR(0x408464);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B408466:{NFSU2_TR(0x408466);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B40846c:{NFSU2_TR(0x40846c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408470:{NFSU2_TR(0x408470);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B408474:{NFSU2_TR(0x408474);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40847a:{NFSU2_TR(0x40847a);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408481:{NFSU2_TR(0x408481);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408483:{NFSU2_TR(0x408483);
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
B408486:{NFSU2_TR(0x408486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408490;}}
}
B408488:L408488:{c.instructions+=4;NFSU2_TR(0x408488);
w4(R+0,u32(0x1ull));
}
B40848d:{NFSU2_TR(0x40848d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40848e:{NFSU2_TR(0x40848e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40848f:{NFSU2_TR(0x40848f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408490:L408490:{c.instructions+=4;NFSU2_TR(0x408490);
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
B408492:{NFSU2_TR(0x408492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408493:{NFSU2_TR(0x408493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408494:{NFSU2_TR(0x408494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408495:L408495:{c.instructions+=4;NFSU2_TR(0x408495);
w1(R+0,u8(0x1ull));
}
B408497:{NFSU2_TR(0x408497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408498:{NFSU2_TR(0x408498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408499:{NFSU2_TR(0x408499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4084a0:L4084a0:{c.instructions+=11;NFSU2_TR(0x4084a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4084a4:{NFSU2_TR(0x4084a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4084a7:{NFSU2_TR(0x4084a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4084a8:{NFSU2_TR(0x4084a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4084ac:{NFSU2_TR(0x4084ac);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B4084b3:{NFSU2_TR(0x4084b3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4084b9:{NFSU2_TR(0x4084b9);
__builtin_memmove((R+0),gp(0x89e7f8),4);
}
B4084be:{NFSU2_TR(0x4084be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4084c0:{NFSU2_TR(0x4084c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4084c1:{NFSU2_TR(0x4084c1);
__builtin_memmove((R+28),(R+4),4);
}
B4084c3:{NFSU2_TR(0x4084c3);
if(r1(R+518)){{goto L40872b;}}
}
B4084c9:L4084c9:{c.instructions+=3;NFSU2_TR(0x4084c9);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4084d0:{NFSU2_TR(0x4084d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4084d4:{NFSU2_TR(0x4084d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4084e2;}}
}
B4084d6:L4084d6:{c.instructions+=4;NFSU2_TR(0x4084d6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4084d9:{NFSU2_TR(0x4084d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4084dd:{NFSU2_TR(0x4084dd);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4084e0:{NFSU2_TR(0x4084e0);
{goto L4084f2;}
}
B4084e2:L4084e2:{c.instructions+=4;NFSU2_TR(0x4084e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4084e6:{NFSU2_TR(0x4084e6);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4084e9:{NFSU2_TR(0x4084e9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4084ec:{NFSU2_TR(0x4084ec);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4084f2:L4084f2:{c.instructions+=9;NFSU2_TR(0x4084f2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4084f6:{NFSU2_TR(0x4084f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4084f7:{NFSU2_TR(0x4084f7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4084fb:{NFSU2_TR(0x4084fb);
__builtin_memmove((R+12),gp(0x81cb60),4);
}
B408501:{NFSU2_TR(0x408501);
{u32 ea_=u32(r4(R+12)+u32(2780u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408507:{NFSU2_TR(0x408507);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408508:{NFSU2_TR(0x408508);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40850a:{NFSU2_TR(0x40850a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40850d:{NFSU2_TR(0x40850d);
if(r1(R+514)){{goto L408729;}}
}
B408513:L408513:{c.instructions+=3;NFSU2_TR(0x408513);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B408518:{NFSU2_TR(0x408518);
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
B40851a:{NFSU2_TR(0x40851a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408525;}}
}
B40851c:L40851c:{c.instructions+=3;NFSU2_TR(0x40851c);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B408521:{NFSU2_TR(0x408521);
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
B408523:{NFSU2_TR(0x408523);
if(r1(R+518)){{goto L408533;}}
}
B408525:L408525:{c.instructions+=3;NFSU2_TR(0x408525);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40852b:{NFSU2_TR(0x40852b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x318ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408531:{NFSU2_TR(0x408531);
{goto L408587;}
}
B408533:L408533:{c.instructions+=4;NFSU2_TR(0x408533);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B408538:{NFSU2_TR(0x408538);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40853a:{NFSU2_TR(0x40853a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40853c:{NFSU2_TR(0x40853c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408560;}}
}
B40853e:L40853e:{c.instructions+=3;NFSU2_TR(0x40853e);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B408544:{NFSU2_TR(0x408544);
w4(R+0,u32(0x1ull));
}
B408549:{NFSU2_TR(0x408549);
__builtin_memmove((R+16),(R+16),4);
}
B408550:L408550:{c.instructions+=2;NFSU2_TR(0x408550);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7e95c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+12)));
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B408557:{NFSU2_TR(0x408557);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40855e;}}
}
B408559:L408559:{c.instructions+=2;NFSU2_TR(0x408559);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B40855a:{NFSU2_TR(0x40855a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x408550u);}goto L408550;}}
}
B40855c:L40855c:{c.instructions+=1;NFSU2_TR(0x40855c);
{goto L408560;}
}
B40855e:L40855e:{c.instructions+=1;NFSU2_TR(0x40855e);
__builtin_memmove((R+8),(R+0),4);
}
B408560:L408560:{c.instructions+=4;NFSU2_TR(0x408560);
__builtin_memmove((R+0),gp(0x89e7a8),4);
}
B408565:{NFSU2_TR(0x408565);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B408567:{NFSU2_TR(0x408567);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40856a:{NFSU2_TR(0x40856a);
if(r1(R+518)){{goto L408571;}}
}
B40856c:L40856c:{c.instructions+=2;NFSU2_TR(0x40856c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40856f:{NFSU2_TR(0x40856f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408576;}}
}
B408571:L408571:{c.instructions+=1;NFSU2_TR(0x408571);
w4(R+4,u32(0x1ull));
}
B408576:L408576:{c.instructions+=6;NFSU2_TR(0x408576);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B408579:{NFSU2_TR(0x408579);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B40857c:{NFSU2_TR(0x40857c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B408580:{NFSU2_TR(0x408580);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B408583:{NFSU2_TR(0x408583);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B408585:{NFSU2_TR(0x408585);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+12)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408587:L408587:{c.instructions+=4;NFSU2_TR(0x408587);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408589:{NFSU2_TR(0x408589);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40858a:{NFSU2_TR(0x40858a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40858e:{NFSU2_TR(0x40858e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408593ull));
TAIL_STATIC(0x576770u,576);
}
B408593:L408593:{c.instructions+=4;NFSU2_TR(0x408593);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408595:{NFSU2_TR(0x408595);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408596:{NFSU2_TR(0x408596);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40859a:{NFSU2_TR(0x40859a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40859full));
TAIL_STATIC(0x576770u,576);
}
B40859f:L40859f:{c.instructions+=6;NFSU2_TR(0x40859f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4085a3:{NFSU2_TR(0x4085a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4085a4:{NFSU2_TR(0x4085a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4085a8:{NFSU2_TR(0x4085a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4085b0:{NFSU2_TR(0x4085b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4085b8:{NFSU2_TR(0x4085b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4085bdull));
TAIL_STATIC(0x576790u,576);
}
B4085bd:L4085bd:{c.instructions+=6;NFSU2_TR(0x4085bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4085be:{NFSU2_TR(0x4085be);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4085c1:{NFSU2_TR(0x4085c1);
u8 U[4];
w4(U+0,u32(0x41100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4085c6:{NFSU2_TR(0x4085c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4085c7:{NFSU2_TR(0x4085c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4085cb:{NFSU2_TR(0x4085cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4085d0ull));
TAIL_STATIC(0x576790u,576);
}
B4085d0:L4085d0:{c.instructions+=5;NFSU2_TR(0x4085d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4085d1:{NFSU2_TR(0x4085d1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4085d4:{NFSU2_TR(0x4085d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4085d6:{NFSU2_TR(0x4085d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4085da:{NFSU2_TR(0x4085da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4085dfull));
TAIL_STATIC(0x576c60u,576);
}
B4085df:L4085df:{c.instructions+=3;NFSU2_TR(0x4085df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4085e1:{NFSU2_TR(0x4085e1);
__builtin_memmove((R+4),(R+28),4);
}
B4085e3:{NFSU2_TR(0x4085e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4085e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4085e6:L4085e6:{c.instructions+=12;NFSU2_TR(0x4085e6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4085e8:{NFSU2_TR(0x4085e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4085ea:{NFSU2_TR(0x4085ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B4085ed:{NFSU2_TR(0x4085ed);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4085ee:{NFSU2_TR(0x4085ee);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4085f0:{NFSU2_TR(0x4085f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4085f4:{NFSU2_TR(0x4085f4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4085f8:{NFSU2_TR(0x4085f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4085fc:{NFSU2_TR(0x4085fc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408600:{NFSU2_TR(0x408600);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408604:{NFSU2_TR(0x408604);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408605:{NFSU2_TR(0x408605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40860aull));
TAIL_STATIC(0x576c90u,576);
}
B40860a:L40860a:{c.instructions+=5;NFSU2_TR(0x40860a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40860e:{NFSU2_TR(0x40860e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408612:{NFSU2_TR(0x408612);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B408615:{NFSU2_TR(0x408615);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40861c:{NFSU2_TR(0x40861c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408637;}}
}
B40861e:L40861e:{c.instructions+=4;NFSU2_TR(0x40861e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408621:{NFSU2_TR(0x408621);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408624:{NFSU2_TR(0x408624);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B408628:{NFSU2_TR(0x408628);
if(r1(R+518)){{goto L408637;}}
}
B40862a:L40862a:{c.instructions+=3;NFSU2_TR(0x40862a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40862e:{NFSU2_TR(0x40862e);
{u32 ea_=u32(u32(7879544u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408634:{NFSU2_TR(0x408634);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408637:L408637:{c.instructions+=4;NFSU2_TR(0x408637);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40863b:{NFSU2_TR(0x40863b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40863d:{NFSU2_TR(0x40863d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B408641:{NFSU2_TR(0x408641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40864b;}}
}
B408643:L408643:{c.instructions+=2;NFSU2_TR(0x408643);
{u32 ea_=u32(r4(R+0)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408649:{NFSU2_TR(0x408649);
{goto L408651;}
}
B40864b:L40864b:{c.instructions+=1;NFSU2_TR(0x40864b);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408651:L408651:{c.instructions+=16;NFSU2_TR(0x408651);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408655:{NFSU2_TR(0x408655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408657:{NFSU2_TR(0x408657);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40865d:{NFSU2_TR(0x40865d);
{u32 ea_=u32(u32(7877880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408663:{NFSU2_TR(0x408663);
{u32 ea_=u32(u32(7877884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408669:{NFSU2_TR(0x408669);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40866d:{NFSU2_TR(0x40866d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408671:{NFSU2_TR(0x408671);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B408677:{NFSU2_TR(0x408677);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B408679:{NFSU2_TR(0x408679);
{u32 ea_=u32(u32(7877888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40867f:{NFSU2_TR(0x40867f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B408681:{NFSU2_TR(0x408681);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408685:{NFSU2_TR(0x408685);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B408689:{NFSU2_TR(0x408689);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40868b:{NFSU2_TR(0x40868b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40868e:{NFSU2_TR(0x40868e);
if(r1(R+518)){{goto L408696;}}
}
B408690:L408690:{c.instructions+=2;NFSU2_TR(0x408690);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408692:{NFSU2_TR(0x408692);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408696:L408696:{c.instructions+=5;NFSU2_TR(0x408696);
{u32 ea_=u32(u32(7877888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40869c:{NFSU2_TR(0x40869c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40869e:{NFSU2_TR(0x40869e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4086a0:{NFSU2_TR(0x4086a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4086a3:{NFSU2_TR(0x4086a3);
if(r1(R+514)){{goto L4086ad;}}
}
B4086a5:L4086a5:{c.instructions+=2;NFSU2_TR(0x4086a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4086a7:{NFSU2_TR(0x4086a7);
{u32 ea_=u32(u32(7877888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4086ad:L4086ad:{c.instructions+=6;NFSU2_TR(0x4086ad);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4086b0:{NFSU2_TR(0x4086b0);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4086b3:{NFSU2_TR(0x4086b3);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B4086b8:{NFSU2_TR(0x4086b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4086ba:{NFSU2_TR(0x4086ba);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B4086c0:{NFSU2_TR(0x4086c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4086cb;}}
}
B4086c2:L4086c2:{c.instructions+=3;NFSU2_TR(0x4086c2);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B4086c7:{NFSU2_TR(0x4086c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4086c9:{NFSU2_TR(0x4086c9);
if(r1(R+518)){{goto L4086d5;}}
}
B4086cb:L4086cb:{c.instructions+=3;NFSU2_TR(0x4086cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4086d1:{NFSU2_TR(0x4086d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4086d3:{NFSU2_TR(0x4086d3);
if(r1(R+518)){{goto L408729;}}
}
B4086d5:L4086d5:{c.instructions+=6;NFSU2_TR(0x4086d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B4086d9:{NFSU2_TR(0x4086d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4086dd:{NFSU2_TR(0x4086dd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B4086df:{NFSU2_TR(0x4086df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4086e7:{NFSU2_TR(0x4086e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4086ef:{NFSU2_TR(0x4086ef);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4086f6;}}
}
B4086f1:L4086f1:{c.instructions+=2;NFSU2_TR(0x4086f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4086f4:{NFSU2_TR(0x4086f4);
{goto L4086f9;}
}
B4086f6:L4086f6:{c.instructions+=1;NFSU2_TR(0x4086f6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4086f9:L4086f9:{c.instructions+=8;NFSU2_TR(0x4086f9);
u8 U[16];
w4(U+0,u32(u32(u32(0x464ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B408700:{NFSU2_TR(0x408700);
u8 U[16];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B408707:{NFSU2_TR(0x408707);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408708:{NFSU2_TR(0x408708);
u8 U[4];
w4(U+0,u32(0x41100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40870d:{NFSU2_TR(0x40870d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40870e:{NFSU2_TR(0x40870e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408710:{NFSU2_TR(0x408710);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B408714:{NFSU2_TR(0x408714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408719ull));
TAIL_STATIC(0x576c60u,576);
}
B408719:L408719:{c.instructions+=3;NFSU2_TR(0x408719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40871a:{NFSU2_TR(0x40871a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40871e:{NFSU2_TR(0x40871e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408723ull));
TAIL_STATIC(0x576c90u,576);
}
B408723:L408723:{c.instructions+=2;NFSU2_TR(0x408723);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408727:{NFSU2_TR(0x408727);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408729:L408729:{c.instructions+=2;NFSU2_TR(0x408729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40872a:{NFSU2_TR(0x40872a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40872b:L40872b:{c.instructions+=4;NFSU2_TR(0x40872b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40872c:{NFSU2_TR(0x40872c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40872d:{NFSU2_TR(0x40872d);
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
B408730:{NFSU2_TR(0x408730);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408740:L408740:{c.instructions+=22;NFSU2_TR(0x408740);
__builtin_memmove((R+0),(R+4),4);
}
B408742:{NFSU2_TR(0x408742);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408746:{NFSU2_TR(0x408746);
u8 U[4];
w4(U+0,u32(0x78456cull));
s4(u32(r4(R+0)),r4(U+0));
}
B40874c:{NFSU2_TR(0x40874c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40874f:{NFSU2_TR(0x40874f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408751:{NFSU2_TR(0x408751);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408754:{NFSU2_TR(0x408754);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408757:{NFSU2_TR(0x408757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408758:{NFSU2_TR(0x408758);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40875b:{NFSU2_TR(0x40875b);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40875e:{NFSU2_TR(0x40875e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408761:{NFSU2_TR(0x408761);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B408768:{NFSU2_TR(0x408768);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40876c:{NFSU2_TR(0x40876c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40876d:{NFSU2_TR(0x40876d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B408771:{NFSU2_TR(0x408771);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408777:{NFSU2_TR(0x408777);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40877a:{NFSU2_TR(0x40877a);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408780:{NFSU2_TR(0x408780);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408783:{NFSU2_TR(0x408783);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408786:{NFSU2_TR(0x408786);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408789:{NFSU2_TR(0x408789);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408790:L408790:{c.instructions+=3;NFSU2_TR(0x408790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408791:{NFSU2_TR(0x408791);
__builtin_memmove((R+24),(R+4),4);
}
B408793:{NFSU2_TR(0x408793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408798ull));
TAIL_STATIC(0x401fd0u,401);
}
B408798:L408798:{c.instructions+=2;NFSU2_TR(0x408798);
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
B40879d:{NFSU2_TR(0x40879d);
if(r1(R+518)){{goto L4087a8;}}
}
B40879f:L40879f:{c.instructions+=2;NFSU2_TR(0x40879f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087a0:{NFSU2_TR(0x4087a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4087a5ull));
TAIL_STATIC(0x575630u,575);
}
B4087a5:L4087a5:{c.instructions+=1;NFSU2_TR(0x4087a5);
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
B4087a8:L4087a8:{c.instructions+=3;NFSU2_TR(0x4087a8);
__builtin_memmove((R+0),(R+24),4);
}
B4087aa:{NFSU2_TR(0x4087aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4087ab:{NFSU2_TR(0x4087ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4087b0:L4087b0:{c.instructions+=8;NFSU2_TR(0x4087b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087b1:{NFSU2_TR(0x4087b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4087b5:{NFSU2_TR(0x4087b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087b6:{NFSU2_TR(0x4087b6);
u8 U[4];
w4(U+0,u32(0x78458cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087bb:{NFSU2_TR(0x4087bb);
__builtin_memmove((R+28),(R+4),4);
}
B4087bd:{NFSU2_TR(0x4087bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087bf:{NFSU2_TR(0x4087bf);
__builtin_memmove((R+4),(R+24),4);
}
B4087c1:{NFSU2_TR(0x4087c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4087c6ull));
TAIL_STATIC(0x578ce0u,578);
}
B4087c6:L4087c6:{c.instructions+=7;NFSU2_TR(0x4087c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087c8:{NFSU2_TR(0x4087c8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087ca:{NFSU2_TR(0x4087ca);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087cc:{NFSU2_TR(0x4087cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4087cf:{NFSU2_TR(0x4087cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087d0:{NFSU2_TR(0x4087d0);
__builtin_memmove((R+4),(R+24),4);
}
B4087d2:{NFSU2_TR(0x4087d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4087d7ull));
TAIL_STATIC(0x571640u,571);
}
B4087d7:L4087d7:{c.instructions+=4;NFSU2_TR(0x4087d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4087da:{NFSU2_TR(0x4087da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087db:{NFSU2_TR(0x4087db);
__builtin_memmove((R+4),(R+24),4);
}
B4087dd:{NFSU2_TR(0x4087dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4087e2ull));
TAIL_STATIC(0x571770u,571);
}
B4087e2:L4087e2:{c.instructions+=4;NFSU2_TR(0x4087e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4087e5:{NFSU2_TR(0x4087e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087e6:{NFSU2_TR(0x4087e6);
__builtin_memmove((R+4),(R+24),4);
}
B4087e8:{NFSU2_TR(0x4087e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4087edull));
TAIL_STATIC(0x571770u,571);
}
B4087ed:L4087ed:{c.instructions+=4;NFSU2_TR(0x4087ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4087f0:{NFSU2_TR(0x4087f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087f1:{NFSU2_TR(0x4087f1);
__builtin_memmove((R+4),(R+24),4);
}
B4087f3:{NFSU2_TR(0x4087f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4087f8ull));
TAIL_STATIC(0x571770u,571);
}
B4087f8:L4087f8:{c.instructions+=4;NFSU2_TR(0x4087f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4087fb:{NFSU2_TR(0x4087fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4087fc:{NFSU2_TR(0x4087fc);
__builtin_memmove((R+4),(R+24),4);
}
B4087fe:{NFSU2_TR(0x4087fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408803ull));
TAIL_STATIC(0x571770u,571);
}
B408803:L408803:{c.instructions+=3;NFSU2_TR(0x408803);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408804:{NFSU2_TR(0x408804);
__builtin_memmove((R+4),(R+28),4);
}
B408806:{NFSU2_TR(0x408806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40880bull));
TAIL_STATIC(0x4031c0u,403);
}
B40880b:L40880b:{c.instructions+=2;NFSU2_TR(0x40880b);
__builtin_memmove((R+4),(R+24),4);
}
B40880d:{NFSU2_TR(0x40880d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408812ull));
TAIL_STATIC(0x578d90u,578);
}
B408812:L408812:{c.instructions+=3;NFSU2_TR(0x408812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408813:{NFSU2_TR(0x408813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408814:{NFSU2_TR(0x408814);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408820:L408820:{c.instructions+=24;NFSU2_TR(0x408820);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408821:{NFSU2_TR(0x408821);
__builtin_memmove((R+20),(R+16),4);
}
B408823:{NFSU2_TR(0x408823);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B408826:{NFSU2_TR(0x408826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B408829:{NFSU2_TR(0x408829);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40882a:{NFSU2_TR(0x40882a);
__builtin_memmove((R+12),(R+4),4);
}
B40882c:{NFSU2_TR(0x40882c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40882f:{NFSU2_TR(0x40882f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408832:{NFSU2_TR(0x408832);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408838:{NFSU2_TR(0x408838);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408839:{NFSU2_TR(0x408839);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40883b:{NFSU2_TR(0x40883b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40883c:{NFSU2_TR(0x40883c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B408840:{NFSU2_TR(0x408840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408841:{NFSU2_TR(0x408841);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B408844:{NFSU2_TR(0x408844);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408848:{NFSU2_TR(0x408848);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40884c:{NFSU2_TR(0x40884c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40884f:{NFSU2_TR(0x40884f);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408852:{NFSU2_TR(0x408852);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408856:{NFSU2_TR(0x408856);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408859:{NFSU2_TR(0x408859);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40885f:{NFSU2_TR(0x40885f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408862:{NFSU2_TR(0x408862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408867ull));
TAIL_STATIC(0x43c350u,43c);
}
B408867:L408867:{c.instructions+=4;NFSU2_TR(0x408867);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40886a:{NFSU2_TR(0x40886a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40886e:{NFSU2_TR(0x40886e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40886f:{NFSU2_TR(0x40886f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408874ull));
TAIL_STATIC(0x43c350u,43c);
}
B408874:L408874:{c.instructions+=10;NFSU2_TR(0x408874);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B408878:{NFSU2_TR(0x408878);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40887c:{NFSU2_TR(0x40887c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40887e:{NFSU2_TR(0x40887e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408881:{NFSU2_TR(0x408881);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408885:{NFSU2_TR(0x408885);
__builtin_memmove((R+0),(R+8),4);
}
B408887:{NFSU2_TR(0x408887);
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
B40888a:{NFSU2_TR(0x40888a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40888e:{NFSU2_TR(0x40888e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408892:{NFSU2_TR(0x408892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408897ull));
TAIL_STATIC(0x5ebf50u,5eb);
}
B408897:L408897:{c.instructions+=9;NFSU2_TR(0x408897);
w4(R+4,u32(r2(R+0)));
}
B40889a:{NFSU2_TR(0x40889a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40889e:{NFSU2_TR(0x40889e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4088a2:{NFSU2_TR(0x4088a2);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4088a8:{NFSU2_TR(0x4088a8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4088ac:{NFSU2_TR(0x4088ac);
{u32 ea_=u32(u32(7881872u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4088b2:{NFSU2_TR(0x4088b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4088b4:{NFSU2_TR(0x4088b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4088b7:{NFSU2_TR(0x4088b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4088c7;}}
}
B4088b9:L4088b9:{c.instructions+=3;NFSU2_TR(0x4088b9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4088bd:{NFSU2_TR(0x4088bd);
{u32 ea_=u32(u32(7881868u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4088c3:{NFSU2_TR(0x4088c3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4088c7:L4088c7:{c.instructions+=7;NFSU2_TR(0x4088c7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4088cb:{NFSU2_TR(0x4088cb);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4088d1:{NFSU2_TR(0x4088d1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4088d5:{NFSU2_TR(0x4088d5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4088d7:{NFSU2_TR(0x4088d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4088d9:{NFSU2_TR(0x4088d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4088dc:{NFSU2_TR(0x4088dc);
if(r1(R+514)){{goto L408917;}}
}
B4088de:L4088de:{c.instructions+=5;NFSU2_TR(0x4088de);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4088e0:{NFSU2_TR(0x4088e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4088e4:{NFSU2_TR(0x4088e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4088e6:{NFSU2_TR(0x4088e6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4088e9:{NFSU2_TR(0x4088e9);
if(r1(R+514)){{goto L408919;}}
}
B4088eb:L4088eb:{c.instructions+=13;NFSU2_TR(0x4088eb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4088ef:{NFSU2_TR(0x4088ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4088f2:{NFSU2_TR(0x4088f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4088f6:{NFSU2_TR(0x4088f6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4088fa:{NFSU2_TR(0x4088fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4088fe:{NFSU2_TR(0x4088fe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408902:{NFSU2_TR(0x408902);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B408904:{NFSU2_TR(0x408904);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408907:{NFSU2_TR(0x408907);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40890b:{NFSU2_TR(0x40890b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40890d:{NFSU2_TR(0x40890d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40890f:{NFSU2_TR(0x40890f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408912:{NFSU2_TR(0x408912);
{goto L4089d9;}
}
B408917:L408917:{c.instructions+=1;NFSU2_TR(0x408917);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408919:L408919:{c.instructions+=11;NFSU2_TR(0x408919);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40891d:{NFSU2_TR(0x40891d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40891e:{NFSU2_TR(0x40891e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B408920:{NFSU2_TR(0x408920);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B408924:{NFSU2_TR(0x408924);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408927:{NFSU2_TR(0x408927);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408928:{NFSU2_TR(0x408928);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B40892b:{NFSU2_TR(0x40892b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40892f:{NFSU2_TR(0x40892f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408930:{NFSU2_TR(0x408930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408931:{NFSU2_TR(0x408931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408936ull));
TAIL_STATIC(0x43d090u,43d);
}
B408936:L408936:{c.instructions+=12;NFSU2_TR(0x408936);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40893a:{NFSU2_TR(0x40893a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40893e:{NFSU2_TR(0x40893e);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B408942:{NFSU2_TR(0x408942);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B408946:{NFSU2_TR(0x408946);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40894a:{NFSU2_TR(0x40894a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40894e:{NFSU2_TR(0x40894e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40894f:{NFSU2_TR(0x40894f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408950:{NFSU2_TR(0x408950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408951:{NFSU2_TR(0x408951);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B408955:{NFSU2_TR(0x408955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408956:{NFSU2_TR(0x408956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40895bull));
TAIL_STATIC(0x43d090u,43d);
}
B40895b:L40895b:{c.instructions+=7;NFSU2_TR(0x40895b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40895f:{NFSU2_TR(0x40895f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B408963:{NFSU2_TR(0x408963);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B408966:{NFSU2_TR(0x408966);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40896a:{NFSU2_TR(0x40896a);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B408970:{NFSU2_TR(0x408970);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408973:{NFSU2_TR(0x408973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408978ull));
TAIL_STATIC(0x43c350u,43c);
}
B408978:L408978:{c.instructions+=4;NFSU2_TR(0x408978);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40897c:{NFSU2_TR(0x40897c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408980:{NFSU2_TR(0x408980);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408981:{NFSU2_TR(0x408981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408986ull));
TAIL_STATIC(0x43c350u,43c);
}
B408986:L408986:{c.instructions+=28;NFSU2_TR(0x408986);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408988:{NFSU2_TR(0x408988);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40898c:{NFSU2_TR(0x40898c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40898f:{NFSU2_TR(0x40898f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408992:{NFSU2_TR(0x408992);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B408996:{NFSU2_TR(0x408996);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B408998:{NFSU2_TR(0x408998);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40899c:{NFSU2_TR(0x40899c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40899e:{NFSU2_TR(0x40899e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4089a0:{NFSU2_TR(0x4089a0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4089a2:{NFSU2_TR(0x4089a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4089a6:{NFSU2_TR(0x4089a6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4089a8:{NFSU2_TR(0x4089a8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4089aa:{NFSU2_TR(0x4089aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4089ac:{NFSU2_TR(0x4089ac);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4089b0:{NFSU2_TR(0x4089b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4089b2:{NFSU2_TR(0x4089b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4089b6:{NFSU2_TR(0x4089b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4089b8:{NFSU2_TR(0x4089b8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4089bc:{NFSU2_TR(0x4089bc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4089c0:{NFSU2_TR(0x4089c0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4089c4:{NFSU2_TR(0x4089c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4089c8:{NFSU2_TR(0x4089c8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4089ca:{NFSU2_TR(0x4089ca);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4089cc:{NFSU2_TR(0x4089cc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4089cf:{NFSU2_TR(0x4089cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4089d3:{NFSU2_TR(0x4089d3);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4089d6:{NFSU2_TR(0x4089d6);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4089d9:L4089d9:{c.instructions+=7;NFSU2_TR(0x4089d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4089dc:{NFSU2_TR(0x4089dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4089e2:{NFSU2_TR(0x4089e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4089e5:{NFSU2_TR(0x4089e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4089e9:{NFSU2_TR(0x4089e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4089ea:{NFSU2_TR(0x4089ea);
w4(R+4,u32(0x7ea03cull));
}
B4089ef:{NFSU2_TR(0x4089ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4089f4ull));
TAIL_STATIC(0x5764d0u,576);
}
B4089f4:L4089f4:{c.instructions+=10;NFSU2_TR(0x4089f4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4089f8:{NFSU2_TR(0x4089f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4089fb:{NFSU2_TR(0x4089fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408a01:{NFSU2_TR(0x408a01);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408a04:{NFSU2_TR(0x408a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408a07:{NFSU2_TR(0x408a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408a0b:{NFSU2_TR(0x408a0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408a0c:{NFSU2_TR(0x408a0c);
w4(R+4,u32(0x7ea050ull));
}
B408a11:{NFSU2_TR(0x408a11);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408a15:{NFSU2_TR(0x408a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408a1aull));
TAIL_STATIC(0x5764d0u,576);
}
B408a1a:L408a1a:{c.instructions+=9;NFSU2_TR(0x408a1a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408a1e:{NFSU2_TR(0x408a1e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408a21:{NFSU2_TR(0x408a21);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B408a25:{NFSU2_TR(0x408a25);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B408a28:{NFSU2_TR(0x408a28);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B408a2e:{NFSU2_TR(0x408a2e);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B408a31:{NFSU2_TR(0x408a31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408a33:{NFSU2_TR(0x408a33);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B408a36:{NFSU2_TR(0x408a36);
if(r1(R+514)){{goto L408a43;}}
}
B408a38:L408a38:{c.instructions+=3;NFSU2_TR(0x408a38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408a3a:{NFSU2_TR(0x408a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408a41:{NFSU2_TR(0x408a41);
{goto L408a57;}
}
B408a43:L408a43:{c.instructions+=4;NFSU2_TR(0x408a43);
{u32 ea_=u32(u32(7882148u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408a49:{NFSU2_TR(0x408a49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408a4b:{NFSU2_TR(0x408a4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408a4e:{NFSU2_TR(0x408a4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408a57;}}
}
B408a50:L408a50:{c.instructions+=1;NFSU2_TR(0x408a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w4(U+4,u32(0x41c4b127ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408a57:L408a57:{c.instructions+=19;NFSU2_TR(0x408a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408a5a:{NFSU2_TR(0x408a5a);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a5d:{NFSU2_TR(0x408a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408a60:{NFSU2_TR(0x408a60);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B408a63:{NFSU2_TR(0x408a63);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408a67:{NFSU2_TR(0x408a67);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a6a:{NFSU2_TR(0x408a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408a6e:{NFSU2_TR(0x408a6e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408a72:{NFSU2_TR(0x408a72);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a74:{NFSU2_TR(0x408a74);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a77:{NFSU2_TR(0x408a77);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a7a:{NFSU2_TR(0x408a7a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408a7e:{NFSU2_TR(0x408a7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408a82:{NFSU2_TR(0x408a82);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B408a84:{NFSU2_TR(0x408a84);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408a87:{NFSU2_TR(0x408a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408a8a:{NFSU2_TR(0x408a8a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408a8d:{NFSU2_TR(0x408a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408a90:{NFSU2_TR(0x408a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408a95ull));
TAIL_STATIC(0x5f5010u,5f5);
}
B408a95:L408a95:{c.instructions+=16;NFSU2_TR(0x408a95);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a98:{NFSU2_TR(0x408a98);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B408a9c:{NFSU2_TR(0x408a9c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408a9f:{NFSU2_TR(0x408a9f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B408aa3:{NFSU2_TR(0x408aa3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408aa6:{NFSU2_TR(0x408aa6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B408aaa:{NFSU2_TR(0x408aaa);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408aae:{NFSU2_TR(0x408aae);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B408ab0:{NFSU2_TR(0x408ab0);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408ab4:{NFSU2_TR(0x408ab4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408ab8:{NFSU2_TR(0x408ab8);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408abb:{NFSU2_TR(0x408abb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B408abd:{NFSU2_TR(0x408abd);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408ac3:{NFSU2_TR(0x408ac3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408ac5:{NFSU2_TR(0x408ac5);
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
B408ac8:{NFSU2_TR(0x408ac8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408ae2;}}
}
B408aca:L408aca:{c.instructions+=7;NFSU2_TR(0x408aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408acd:{NFSU2_TR(0x408acd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408ace:{NFSU2_TR(0x408ace);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B408ad2:{NFSU2_TR(0x408ad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408ad3:{NFSU2_TR(0x408ad3);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B408ad7:{NFSU2_TR(0x408ad7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408ad8:{NFSU2_TR(0x408ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408addull));
TAIL_STATIC(0x43cf90u,43c);
}
B408add:L408add:{c.instructions+=2;NFSU2_TR(0x408add);
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
B408ae0:{NFSU2_TR(0x408ae0);
{goto L408afa;}
}
B408ae2:L408ae2:{c.instructions+=3;NFSU2_TR(0x408ae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408aea:{NFSU2_TR(0x408aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408af2:{NFSU2_TR(0x408af2);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408afa:L408afa:{c.instructions+=4;NFSU2_TR(0x408afa);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B408afe:{NFSU2_TR(0x408afe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408aff:{NFSU2_TR(0x408aff);
__builtin_memmove((R+4),(R+24),4);
}
B408b01:{NFSU2_TR(0x408b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408b06ull));
TAIL_STATIC(0x592160u,592);
}
B408b06:L408b06:{c.instructions+=6;NFSU2_TR(0x408b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408b09:{NFSU2_TR(0x408b09);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B408b10:{NFSU2_TR(0x408b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b16:{NFSU2_TR(0x408b16);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408b19:{NFSU2_TR(0x408b19);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408b1f:{NFSU2_TR(0x408b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408b24ull));
TAIL_STATIC(0x75bed4u,75b);
}
B408b24:L408b24:{c.instructions+=13;NFSU2_TR(0x408b24);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B408b2b:{NFSU2_TR(0x408b2b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B408b2d:{NFSU2_TR(0x408b2d);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B408b30:{NFSU2_TR(0x408b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b34:{NFSU2_TR(0x408b34);
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
B408b36:{NFSU2_TR(0x408b36);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B408b3a:{NFSU2_TR(0x408b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b40:{NFSU2_TR(0x408b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b46:{NFSU2_TR(0x408b46);
{u32 ea_=u32(u32(7882140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408b4c:{NFSU2_TR(0x408b4c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B408b4f:{NFSU2_TR(0x408b4f);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408b55:{NFSU2_TR(0x408b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408b58:{NFSU2_TR(0x408b58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408b5dull));
TAIL_STATIC(0x5ebf50u,5eb);
}
B408b5d:L408b5d:{c.instructions+=8;NFSU2_TR(0x408b5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B408b64:{NFSU2_TR(0x408b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408b68:{NFSU2_TR(0x408b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((R+8),(U+0),4);
}
B408b6e:{NFSU2_TR(0x408b6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B408b71:{NFSU2_TR(0x408b71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b75:{NFSU2_TR(0x408b75);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b79:{NFSU2_TR(0x408b79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408b7f:{NFSU2_TR(0x408b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408b83:L408b83:{c.instructions+=14;NFSU2_TR(0x408b83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408b87:{NFSU2_TR(0x408b87);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408b8d:{NFSU2_TR(0x408b8d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B408b8f:{NFSU2_TR(0x408b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408b93:{NFSU2_TR(0x408b93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408b95:{NFSU2_TR(0x408b95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408b96:{NFSU2_TR(0x408b96);
__builtin_memmove((R+4),(R+24),4);
}
B408b98:{NFSU2_TR(0x408b98);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408b9b:{NFSU2_TR(0x408b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408ba2:{NFSU2_TR(0x408ba2);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B408ba5:{NFSU2_TR(0x408ba5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408ba8:{NFSU2_TR(0x408ba8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B408baa:{NFSU2_TR(0x408baa);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408bac:{NFSU2_TR(0x408bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408bb1ull));
TAIL_STATIC(0x592040u,592);
}
B408bb1:L408bb1:{c.instructions+=5;NFSU2_TR(0x408bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408bb5:{NFSU2_TR(0x408bb5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408bb7:{NFSU2_TR(0x408bb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408bb8:{NFSU2_TR(0x408bb8);
__builtin_memmove((R+4),(R+24),4);
}
B408bba:{NFSU2_TR(0x408bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408bbfull));
TAIL_STATIC(0x592080u,592);
}
B408bbf:L408bbf:{c.instructions+=23;NFSU2_TR(0x408bbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408bc3:{NFSU2_TR(0x408bc3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B408bc5:{NFSU2_TR(0x408bc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B408bc7:{NFSU2_TR(0x408bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408bca:{NFSU2_TR(0x408bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408bd0:{NFSU2_TR(0x408bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408bd3:{NFSU2_TR(0x408bd3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B408bd5:{NFSU2_TR(0x408bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x330ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408bdb:{NFSU2_TR(0x408bdb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B408bdd:{NFSU2_TR(0x408bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408be0:{NFSU2_TR(0x408be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408be3:{NFSU2_TR(0x408be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408be6:{NFSU2_TR(0x408be6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408bea:{NFSU2_TR(0x408bea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408bee:{NFSU2_TR(0x408bee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B408bef:{NFSU2_TR(0x408bef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B408bf2:{NFSU2_TR(0x408bf2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B408bf5:{NFSU2_TR(0x408bf5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B408bf8:{NFSU2_TR(0x408bf8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B408bfb:{NFSU2_TR(0x408bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408bff:{NFSU2_TR(0x408bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408c03:{NFSU2_TR(0x408c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408c07:{NFSU2_TR(0x408c07);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x408b83u);}goto L408b83;}}
}
B408c0d:L408c0d:{c.instructions+=2;NFSU2_TR(0x408c0d);
__builtin_memmove((R+4),(R+24),4);
}
B408c0f:{NFSU2_TR(0x408c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c14ull));
TAIL_STATIC(0x5923e0u,592);
}
B408c14:L408c14:{c.instructions+=3;NFSU2_TR(0x408c14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408c16:{NFSU2_TR(0x408c16);
__builtin_memmove((R+4),(R+24),4);
}
B408c18:{NFSU2_TR(0x408c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c1dull));
TAIL_STATIC(0x592400u,592);
}
B408c1d:L408c1d:{c.instructions+=2;NFSU2_TR(0x408c1d);
__builtin_memmove((R+4),(R+24),4);
}
B408c1f:{NFSU2_TR(0x408c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c24ull));
TAIL_STATIC(0x592460u,592);
}
B408c24:L408c24:{c.instructions+=2;NFSU2_TR(0x408c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408c27:{NFSU2_TR(0x408c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c2cull));
TAIL_STATIC(0x5f50a0u,5f5);
}
B408c2c:L408c2c:{c.instructions+=7;NFSU2_TR(0x408c2c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408c2f:{NFSU2_TR(0x408c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408c30:{NFSU2_TR(0x408c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408c31:{NFSU2_TR(0x408c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B408c32:{NFSU2_TR(0x408c32);
__builtin_memmove((R+16),(R+20),4);
}
B408c34:{NFSU2_TR(0x408c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B408c35:{NFSU2_TR(0x408c35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408c40:L408c40:{c.instructions+=6;NFSU2_TR(0x408c40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408c41:{NFSU2_TR(0x408c41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B408c45:{NFSU2_TR(0x408c45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408c46:{NFSU2_TR(0x408c46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408c47:{NFSU2_TR(0x408c47);
__builtin_memmove((R+24),(R+4),4);
}
B408c49:{NFSU2_TR(0x408c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c4eull));
TAIL_STATIC(0x4022d0u,402);
}
B408c4e:L408c4e:{c.instructions+=2;NFSU2_TR(0x408c4e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B408c50:{NFSU2_TR(0x408c50);
if(r1(R+518)){{goto L408c67;}}
}
B408c52:L408c52:{c.instructions+=3;NFSU2_TR(0x408c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408c55:{NFSU2_TR(0x408c55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408c56:{NFSU2_TR(0x408c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c5bull));
TAIL_STATIC(0x5f4400u,5f4);
}
B408c5b:L408c5b:{c.instructions+=4;NFSU2_TR(0x408c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408c5e:{NFSU2_TR(0x408c5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B408c61:{NFSU2_TR(0x408c61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408c62:{NFSU2_TR(0x408c62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408c67ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B408c67:L408c67:{c.instructions+=3;NFSU2_TR(0x408c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408c68:{NFSU2_TR(0x408c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B408c69:{NFSU2_TR(0x408c69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408c70:L408c70:{c.instructions+=2;NFSU2_TR(0x408c70);
{u32 ea_=u32(u32(7879552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408c76:{NFSU2_TR(0x408c76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408c80:L408c80:{c.instructions+=5;NFSU2_TR(0x408c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408c83:{NFSU2_TR(0x408c83);
w4(R+0,u32(0x3f800000ull));
}
B408c88:{NFSU2_TR(0x408c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x468ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408c8e:{NFSU2_TR(0x408c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x770ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408c94:{NFSU2_TR(0x408c94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408ca0:L408ca0:{c.instructions+=3;NFSU2_TR(0x408ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408ca4:{NFSU2_TR(0x408ca4);
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
B408ca7:{NFSU2_TR(0x408ca7);
if(r1(R+518)){{goto L408cae;}}
}
B408ca9:L408ca9:{c.instructions+=2;NFSU2_TR(0x408ca9);
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
B408cac:{NFSU2_TR(0x408cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408cc5;}}
}
B408cae:L408cae:{c.instructions+=5;NFSU2_TR(0x408cae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408caf:{NFSU2_TR(0x408caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408cb2:{NFSU2_TR(0x408cb2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408cb4:{NFSU2_TR(0x408cb4);
__builtin_memmove((R+4),(R+24),4);
}
B408cb6:{NFSU2_TR(0x408cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408cbbull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B408cbb:L408cbb:{c.instructions+=3;NFSU2_TR(0x408cbb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408cbd:{NFSU2_TR(0x408cbd);
__builtin_memmove((R+4),(R+24),4);
}
B408cbf:{NFSU2_TR(0x408cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408cc4ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B408cc4:L408cc4:{c.instructions+=1;NFSU2_TR(0x408cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408cc5:L408cc5:{c.instructions+=1;NFSU2_TR(0x408cc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408cd0:L408cd0:{c.instructions+=2;NFSU2_TR(0x408cd0);
w4(R+0,u32(0x2ull));
}
B408cd5:{NFSU2_TR(0x408cd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408ce0:L408ce0:{c.instructions+=3;NFSU2_TR(0x408ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408ce6:{NFSU2_TR(0x408ce6);
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
B408ce8:{NFSU2_TR(0x408ce8);
if(r1(R+518)){{goto L408cf0;}}
}
B408cea:L408cea:{c.instructions+=2;NFSU2_TR(0x408cea);
w4(R+0,u32(0x1ull));
}
B408cef:{NFSU2_TR(0x408cef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408cf0:L408cf0:{c.instructions+=2;NFSU2_TR(0x408cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408cf2:{NFSU2_TR(0x408cf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408cf5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408cf5:L408cf5:{c.instructions+=3;NFSU2_TR(0x408cf5);
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
B408cf7:{NFSU2_TR(0x408cf7);
__builtin_memmove((R+0),gp(0x88e66c),4);
}
B408cfc:{NFSU2_TR(0x408cfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408d03;}}
}
B408cfe:L408cfe:{c.instructions+=1;NFSU2_TR(0x408cfe);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B408d03:L408d03:{c.instructions+=1;NFSU2_TR(0x408d03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408d10:L408d10:{c.instructions+=3;NFSU2_TR(0x408d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408d16:{NFSU2_TR(0x408d16);
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
B408d18:{NFSU2_TR(0x408d18);
if(r1(R+518)){{goto L408d2f;}}
}
B408d1a:L408d1a:{c.instructions+=3;NFSU2_TR(0x408d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408d1c:{NFSU2_TR(0x408d1c);
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
B408d1e:{NFSU2_TR(0x408d1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L408d2a;}}
}
B408d20:L408d20:{c.instructions+=2;NFSU2_TR(0x408d20);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B408d27:{NFSU2_TR(0x408d27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408d2a:L408d2a:{c.instructions+=2;NFSU2_TR(0x408d2a);
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
B408d2c:{NFSU2_TR(0x408d2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408d2f:L408d2f:{c.instructions+=2;NFSU2_TR(0x408d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408d31:{NFSU2_TR(0x408d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408d34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408d34:L408d34:{c.instructions+=2;NFSU2_TR(0x408d34);
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
B408d36:{NFSU2_TR(0x408d36);
if(r1(R+518)){{goto L408d46;}}
}
B408d38:L408d38:{c.instructions+=3;NFSU2_TR(0x408d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408d3c:{NFSU2_TR(0x408d3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88e670ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B408d43:{NFSU2_TR(0x408d43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408d46:L408d46:{c.instructions+=3;NFSU2_TR(0x408d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408d4a:{NFSU2_TR(0x408d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B408d51:{NFSU2_TR(0x408d51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408d60:L408d60:{c.instructions+=4;NFSU2_TR(0x408d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408d61:{NFSU2_TR(0x408d61);
__builtin_memmove((R+24),(R+4),4);
}
B408d63:{NFSU2_TR(0x408d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408d65:{NFSU2_TR(0x408d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408d68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408d68:L408d68:{c.instructions+=2;NFSU2_TR(0x408d68);
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
B408d6a:{NFSU2_TR(0x408d6a);
if(r1(R+518)){{goto L408d8a;}}
}
B408d6c:L408d6c:{c.instructions+=2;NFSU2_TR(0x408d6c);
__builtin_memmove((R+4),(R+24),4);
}
B408d6e:{NFSU2_TR(0x408d6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408d73ull));
TAIL_STATIC(0x4023e0u,402);
}
B408d73:L408d73:{c.instructions+=7;NFSU2_TR(0x408d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408d76:{NFSU2_TR(0x408d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B408d78:{NFSU2_TR(0x408d78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408d7a:{NFSU2_TR(0x408d7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408d7c:{NFSU2_TR(0x408d7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408d7e:{NFSU2_TR(0x408d7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408d80:{NFSU2_TR(0x408d80);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408d83ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408d83:L408d83:{c.instructions+=1;NFSU2_TR(0x408d83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B408d8a:L408d8a:{c.instructions+=2;NFSU2_TR(0x408d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408d8b:{NFSU2_TR(0x408d8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408d90:L408d90:{c.instructions+=10;NFSU2_TR(0x408d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408d91:{NFSU2_TR(0x408d91);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B408d96:{NFSU2_TR(0x408d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x708ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B408d9c:{NFSU2_TR(0x408d9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B408da0:{NFSU2_TR(0x408da0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B408da4:{NFSU2_TR(0x408da4);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B408daa:{NFSU2_TR(0x408daa);
{u32 ea_=u32(u32(7879556u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408db0:{NFSU2_TR(0x408db0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408db2:{NFSU2_TR(0x408db2);
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
B408db5:{NFSU2_TR(0x408db5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408dbe;}}
}
B408db7:L408db7:{c.instructions+=3;NFSU2_TR(0x408db7);
w4(R+0,u32(0x1ull));
}
B408dbc:{NFSU2_TR(0x408dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408dbd:{NFSU2_TR(0x408dbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408dbe:L408dbe:{c.instructions+=3;NFSU2_TR(0x408dbe);
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
B408dc0:{NFSU2_TR(0x408dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408dc1:{NFSU2_TR(0x408dc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408dd0:L408dd0:{c.instructions+=2;NFSU2_TR(0x408dd0);
{u32 ea_=u32(u32(7878184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408dd6:{NFSU2_TR(0x408dd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408de0:L408de0:{c.instructions+=12;NFSU2_TR(0x408de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B408de3:{NFSU2_TR(0x408de3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408de4:{NFSU2_TR(0x408de4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408de5:{NFSU2_TR(0x408de5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408de6:{NFSU2_TR(0x408de6);
__builtin_memmove((R+24),(R+4),4);
}
B408de8:{NFSU2_TR(0x408de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408deb:{NFSU2_TR(0x408deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B408dee:{NFSU2_TR(0x408dee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B408df1:{NFSU2_TR(0x408df1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B408df3:{NFSU2_TR(0x408df3);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408df5:{NFSU2_TR(0x408df5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B408dfd:{NFSU2_TR(0x408dfd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L408ebe;}}
}
B408e03:L408e03:{c.instructions+=1;NFSU2_TR(0x408e03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e04:L408e04:{c.instructions+=3;NFSU2_TR(0x408e04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e05:{NFSU2_TR(0x408e05);
__builtin_memmove((R+4),(R+20),4);
}
B408e07:{NFSU2_TR(0x408e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408e0cull));
TAIL_STATIC(0x5a0820u,5a0);
}
B408e0c:L408e0c:{c.instructions+=7;NFSU2_TR(0x408e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B408e0f:{NFSU2_TR(0x408e0f);
__builtin_memmove((R+4),gp(0x783b8c),4);
}
B408e15:{NFSU2_TR(0x408e15);
__builtin_memmove((R+28),(R+0),4);
}
B408e17:{NFSU2_TR(0x408e17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e18:{NFSU2_TR(0x408e18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e19:{NFSU2_TR(0x408e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408e1d:{NFSU2_TR(0x408e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408e22ull));
TAIL_STATIC(0x402a40u,402);
}
B408e22:L408e22:{c.instructions+=7;NFSU2_TR(0x408e22);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408e25:{NFSU2_TR(0x408e25);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408e29:{NFSU2_TR(0x408e29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B408e2c:{NFSU2_TR(0x408e2c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B408e2e:{NFSU2_TR(0x408e2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408e30:{NFSU2_TR(0x408e30);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408e33:{NFSU2_TR(0x408e33);
if(r1(R+518)){{goto L408e3b;}}
}
B408e35:L408e35:{c.instructions+=2;NFSU2_TR(0x408e35);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B408e39:{NFSU2_TR(0x408e39);
{goto L408e3d;}
}
B408e3b:L408e3b:{c.instructions+=1;NFSU2_TR(0x408e3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408e3d:L408e3d:{c.instructions+=5;NFSU2_TR(0x408e3d);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408e40:{NFSU2_TR(0x408e40);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408e44:{NFSU2_TR(0x408e44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408e46:{NFSU2_TR(0x408e46);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408e49:{NFSU2_TR(0x408e49);
if(r1(R+518)){{goto L408e56;}}
}
B408e4b:L408e4b:{c.instructions+=4;NFSU2_TR(0x408e4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B408e4f:{NFSU2_TR(0x408e4f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B408e50:{NFSU2_TR(0x408e50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B408e52:{NFSU2_TR(0x408e52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x408e04u);}goto L408e04;}}
}
B408e54:L408e54:{c.instructions+=1;NFSU2_TR(0x408e54);
{goto L408e74;}
}
B408e56:L408e56:{c.instructions+=2;NFSU2_TR(0x408e56);
__builtin_memmove((R+4),(R+24),4);
}
B408e58:{NFSU2_TR(0x408e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408e5dull));
TAIL_STATIC(0x4023e0u,402);
}
B408e5d:L408e5d:{c.instructions+=7;NFSU2_TR(0x408e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408e60:{NFSU2_TR(0x408e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B408e62:{NFSU2_TR(0x408e62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e64:{NFSU2_TR(0x408e64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e66:{NFSU2_TR(0x408e66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e68:{NFSU2_TR(0x408e68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408e6a:{NFSU2_TR(0x408e6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408e6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408e6d:L408e6d:{c.instructions+=1;NFSU2_TR(0x408e6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B408e74:L408e74:{c.instructions+=7;NFSU2_TR(0x408e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408e77:{NFSU2_TR(0x408e77);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408e7d:{NFSU2_TR(0x408e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408e7e:{NFSU2_TR(0x408e7e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408e84:{NFSU2_TR(0x408e84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408e86:{NFSU2_TR(0x408e86);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B408e89:{NFSU2_TR(0x408e89);
if(r1(R+514)){{goto L408ebe;}}
}
B408e8b:L408e8b:{c.instructions+=3;NFSU2_TR(0x408e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408e8e:{NFSU2_TR(0x408e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408e90:{NFSU2_TR(0x408e90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408e93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408e93:L408e93:{c.instructions+=4;NFSU2_TR(0x408e93);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B408e99:{NFSU2_TR(0x408e99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408e9b:{NFSU2_TR(0x408e9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408e9e:{NFSU2_TR(0x408e9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408ebe;}}
}
B408ea0:L408ea0:{c.instructions+=2;NFSU2_TR(0x408ea0);
__builtin_memmove((R+4),(R+24),4);
}
B408ea2:{NFSU2_TR(0x408ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408ea7ull));
TAIL_STATIC(0x4023e0u,402);
}
B408ea7:L408ea7:{c.instructions+=7;NFSU2_TR(0x408ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408eaa:{NFSU2_TR(0x408eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B408eac:{NFSU2_TR(0x408eac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408eae:{NFSU2_TR(0x408eae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408eb0:{NFSU2_TR(0x408eb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408eb2:{NFSU2_TR(0x408eb2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408eb4:{NFSU2_TR(0x408eb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408eb7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B408eb7:L408eb7:{c.instructions+=1;NFSU2_TR(0x408eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B408ebe:L408ebe:{c.instructions+=5;NFSU2_TR(0x408ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408ebf:{NFSU2_TR(0x408ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B408ec0:{NFSU2_TR(0x408ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B408ec1:{NFSU2_TR(0x408ec1);
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
B408ec4:{NFSU2_TR(0x408ec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408ed0:L408ed0:{c.instructions+=4;NFSU2_TR(0x408ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B408ed3:{NFSU2_TR(0x408ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408ed9:{NFSU2_TR(0x408ed9);
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
B408edb:{NFSU2_TR(0x408edb);
if(r1(R+518)){{goto L408ee4;}}
}
B408edd:L408edd:{c.instructions+=2;NFSU2_TR(0x408edd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408edf:{NFSU2_TR(0x408edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408ee4ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B408ee4:L408ee4:{c.instructions+=1;NFSU2_TR(0x408ee4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408ef0:L408ef0:{c.instructions+=9;NFSU2_TR(0x408ef0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408ef1:{NFSU2_TR(0x408ef1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408ef2:{NFSU2_TR(0x408ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408ef6:{NFSU2_TR(0x408ef6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B408ef9:{NFSU2_TR(0x408ef9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408efb:{NFSU2_TR(0x408efb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408efc:{NFSU2_TR(0x408efc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B408f00:{NFSU2_TR(0x408f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B408f08:{NFSU2_TR(0x408f08);
if(r1(R+518)){{goto L408f2d;}}
}
B408f0a:L408f0a:{c.instructions+=3;NFSU2_TR(0x408f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B408f0c:{NFSU2_TR(0x408f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B408f0e:{NFSU2_TR(0x408f0e);
if(r1(R+518)){{goto L408f2d;}}
}
B408f10:L408f10:{c.instructions+=9;NFSU2_TR(0x408f10);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x883dbc))));
}
B408f16:{NFSU2_TR(0x408f16);
__builtin_memmove((R+4),(R+0),4);
}
B408f18:{NFSU2_TR(0x408f18);
w4(R+0,u32(0x76b981dbull));
}
B408f1d:{NFSU2_TR(0x408f1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B408f1f:{NFSU2_TR(0x408f1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B408f22:{NFSU2_TR(0x408f22);
__builtin_memmove((R+0),(R+8),4);
}
B408f24:{NFSU2_TR(0x408f24);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B408f27:{NFSU2_TR(0x408f27);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B408f29:{NFSU2_TR(0x408f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B408f2d:L408f2d:{c.instructions+=7;NFSU2_TR(0x408f2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408f2f:{NFSU2_TR(0x408f2f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408f31:{NFSU2_TR(0x408f31);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408f33:{NFSU2_TR(0x408f33);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B408f37:{NFSU2_TR(0x408f37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408f38:{NFSU2_TR(0x408f38);
__builtin_memmove((R+4),(R+24),4);
}
B408f3a:{NFSU2_TR(0x408f3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x408f3full));
TAIL_STATIC(0x571640u,571);
}
B408f3f:L408f3f:{c.instructions+=3;NFSU2_TR(0x408f3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B408f42:{NFSU2_TR(0x408f42);
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
B408f44:{NFSU2_TR(0x408f44);
if(r1(R+518)){{goto L408f70;}}
}
B408f46:L408f46:{c.instructions+=3;NFSU2_TR(0x408f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408f4a:{NFSU2_TR(0x408f4a);
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
B408f4c:{NFSU2_TR(0x408f4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L408f6a;}}
}
B408f4e:L408f4e:{c.instructions+=2;NFSU2_TR(0x408f4e);
u8 U[14];
__builtin_memmove((U+6),gp(0x883dc0),4);
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
B408f54:{NFSU2_TR(0x408f54);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L408f6a;}}
}
B408f56:L408f56:{c.instructions+=8;NFSU2_TR(0x408f56);
__builtin_memmove((R+4),gp(0x883dbc),4);
}
B408f5c:{NFSU2_TR(0x408f5c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B408f62:{NFSU2_TR(0x408f62);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408f64:{NFSU2_TR(0x408f64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B408f66:{NFSU2_TR(0x408f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408f67:{NFSU2_TR(0x408f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408f68:{NFSU2_TR(0x408f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408f69:{NFSU2_TR(0x408f69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408f6a:L408f6a:{c.instructions+=1;NFSU2_TR(0x408f6a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B408f70:L408f70:{c.instructions+=4;NFSU2_TR(0x408f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B408f71:{NFSU2_TR(0x408f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B408f72:{NFSU2_TR(0x408f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B408f73:{NFSU2_TR(0x408f73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408f80:L408f80:{c.instructions+=5;NFSU2_TR(0x408f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B408f84:{NFSU2_TR(0x408f84);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408f8a:{NFSU2_TR(0x408f8a);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B408f8f:{NFSU2_TR(0x408f8f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408f92:{NFSU2_TR(0x408f92);
if(r1(R+518)){{goto L408f9f;}}
}
B408f94:L408f94:{c.instructions+=4;NFSU2_TR(0x408f94);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xffffffd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xffffffd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B408f97:{NFSU2_TR(0x408f97);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408f99:{NFSU2_TR(0x408f99);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B408f9c:{NFSU2_TR(0x408f9c);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408f9f:L408f9f:{c.instructions+=1;NFSU2_TR(0x408f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B408fb0:L408fb0:{c.instructions+=13;NFSU2_TR(0x408fb0);
{u32 ea_=u32(u32(7882172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408fb6:{NFSU2_TR(0x408fb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408fb7:{NFSU2_TR(0x408fb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408fb8:{NFSU2_TR(0x408fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B408fbc:{NFSU2_TR(0x408fbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B408fbd:{NFSU2_TR(0x408fbd);
__builtin_memmove((R+28),(R+4),4);
}
B408fbf:{NFSU2_TR(0x408fbf);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xffull));
s1(u32(r4(U+8)),r1(U+12));
}
B408fc4:{NFSU2_TR(0x408fc4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B408fc6:{NFSU2_TR(0x408fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B408fc9:{NFSU2_TR(0x408fc9);
__builtin_memmove((R+16),(R+16),4);
}
B408fd0:{NFSU2_TR(0x408fd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B408fd3:{NFSU2_TR(0x408fd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408fd5:{NFSU2_TR(0x408fd5);
if(r1(R+518)){{goto L408ff1;}}
}
B408fd7:L408fd7:{c.instructions+=2;NFSU2_TR(0x408fd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B408fda:{NFSU2_TR(0x408fda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408ff1;}}
}
B408fdc:L408fdc:{c.instructions+=4;NFSU2_TR(0x408fdc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B408fde:{NFSU2_TR(0x408fde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B408fe0:{NFSU2_TR(0x408fe0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408fe3:{NFSU2_TR(0x408fe3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L408ff1;}}
}
B408fe5:L408fe5:{c.instructions+=5;NFSU2_TR(0x408fe5);
__builtin_memmove((R+0),(R+12),1);
}
B408fe7:{NFSU2_TR(0x408fe7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B408fe9:{NFSU2_TR(0x408fe9);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x32ull))));
}
B408feb:{NFSU2_TR(0x408feb);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B408fef:{NFSU2_TR(0x408fef);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B408ff1:L408ff1:{c.instructions+=3;NFSU2_TR(0x408ff1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B408ff4:{NFSU2_TR(0x408ff4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B408ff6:{NFSU2_TR(0x408ff6);
if(r1(R+518)){TAIL_STATIC(0x409015u,409);}
}
B408ff8:L408ff8:{c.instructions+=2;NFSU2_TR(0x408ff8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B408ffb:{NFSU2_TR(0x408ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x409015u,409);}
}
B408ffd:L408ffd:{c.instructions+=1;NFSU2_TR(0x408ffd);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
TAIL_STATIC(0x409000u,409);
}
XIT:NFSU2_TR_EXIT(0x408,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
